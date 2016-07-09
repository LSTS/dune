//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 26cacc3dc3beefce27c2f4c57be495c3                            *
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
    msg.setTimeStamp(0.557885746531);
    msg.setSource(21005U);
    msg.setSourceEntity(137U);
    msg.setDestination(49973U);
    msg.setDestinationEntity(137U);
    msg.state = 150U;
    msg.flags = 235U;
    msg.description.assign("UVCNGZSPXUNPYJYARWWMGHDUEZDLYZGIKVAUEQBSALSZKTXHAHQXWVGTZBNBAIMKOOKVEYQJWDOVLLXOABIBXHMIHCGJEIKSIRFLJWOGTRZLMQOYOTWYUNNBEQMGFPRFIMJQDYNMSBLCZXJTRI");

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
    msg.setTimeStamp(0.22685537063);
    msg.setSource(32287U);
    msg.setSourceEntity(38U);
    msg.setDestination(65293U);
    msg.setDestinationEntity(36U);
    msg.state = 52U;
    msg.flags = 62U;
    msg.description.assign("CPODWJDDTKZPRKZZRNFXLQXLMBAGSQEEYUACNXGZWGXIQXFNBFPNLHNHWFWYSEDYQZUBAINZSDJNOUGDALSPKMTITIEADGVQYPYJVOCXVKQZZSNUNECWJVVTYAJWHRFVTVPABGMFAMUEAFWZERFTBPUSLGLQJJHOQZVRVKLRTMIBTRBEKOKPIQTSIBWFHPLHODEUMOCMXOCINYGBVHXWMJYLOF");

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
    msg.setTimeStamp(0.0901512760654);
    msg.setSource(59493U);
    msg.setSourceEntity(69U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(252U);
    msg.state = 225U;
    msg.flags = 157U;
    msg.description.assign("XSGZVFKYGZSUDXDRYODLOXUGPEEPORHLUEVNTKIUTMPGXOMAMULDNMNJAUWSVMQSHOVCRVWGKHBXMCDFQWHRCWIUPZJGTNPRJFAEE");

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
    msg.setTimeStamp(0.031841455024);
    msg.setSource(3284U);
    msg.setSourceEntity(173U);
    msg.setDestination(27591U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.0225591292501);
    msg.setSource(785U);
    msg.setSourceEntity(19U);
    msg.setDestination(61200U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.926749809959);
    msg.setSource(33446U);
    msg.setSourceEntity(139U);
    msg.setDestination(39846U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.855248541562);
    msg.setSource(8432U);
    msg.setSourceEntity(88U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(215U);
    msg.id = 238U;
    msg.label.assign("KBJWIAUBOODGGXNPKIKFNACARAFNEEJDKVTWHUDYJXYNHXHLQOKEWALIMDPVAOGIHVIZMZPKGLUJCQIHIDQYC");
    msg.component.assign("NMHIWPTQGNHHQZNLXNVMJLQZVNSMAOURJFSCPFTPTGTTSJLBANACXLKHYLSKEUKYHVISEDLURQOCADPQPYXNNHBPRHGMZWAXEWIWWLMMBPPBFACIGODJCROJZBPUSYVKMWJXDZTOOAQCTNWFXNRRCKFZOVSYRDGRKBMCKEOHKAIIDXJE");
    msg.act_time = 58364U;
    msg.deact_time = 61850U;

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
    msg.setTimeStamp(0.338996402316);
    msg.setSource(12921U);
    msg.setSourceEntity(106U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(196U);
    msg.id = 206U;
    msg.label.assign("LXACVUTWTIGYXEOIGLKWPCUUMEGAS");
    msg.component.assign("SIFGPDVGKCPPKASLFCLRJTQRTIPAGESETEZRBABETNKUOEBOMKCWYJCWHIVABBSHDMLLYZVCGZZXYFZNERACFPSGAFWDQUQBBKGPOAUTKYAPUEQDXQGIEHFQPZBHNZY");
    msg.act_time = 22245U;
    msg.deact_time = 61700U;

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
    msg.setTimeStamp(0.135837195982);
    msg.setSource(7289U);
    msg.setSourceEntity(100U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(244U);
    msg.id = 222U;
    msg.label.assign("ACOMAVLHGYPJUNIZHOFDSFXUJSIZQSCOJTRPYQPBGRJIYRSDKEYCEDAHZLHAJUZMTIVTBG");
    msg.component.assign("UNLTRYAHQKAHIKLEHSJOZWGPDYXETALIYZQVHDEJJOLCVHPSHHXEPTYYZUCPDZHGSZCXEOAJBGJNRYUXKBXBGNBIQOBVAMATADLQFWNCADPMMFWCQIIORSOLIQCMTQEUHUCMTDZYEOFLDGLBAWSIRJXFZTEKKUEFBLTKKJGOCNVFRKJ");
    msg.act_time = 47421U;
    msg.deact_time = 40999U;

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
    msg.setTimeStamp(0.488814540465);
    msg.setSource(20893U);
    msg.setSourceEntity(29U);
    msg.setDestination(59805U);
    msg.setDestinationEntity(198U);
    msg.id = 246U;

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
    msg.setTimeStamp(0.163612895681);
    msg.setSource(7959U);
    msg.setSourceEntity(148U);
    msg.setDestination(32982U);
    msg.setDestinationEntity(44U);
    msg.id = 120U;

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
    msg.setTimeStamp(0.739493349095);
    msg.setSource(12570U);
    msg.setSourceEntity(240U);
    msg.setDestination(24461U);
    msg.setDestinationEntity(133U);
    msg.id = 211U;

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
    msg.setTimeStamp(0.441212323058);
    msg.setSource(9467U);
    msg.setSourceEntity(177U);
    msg.setDestination(40436U);
    msg.setDestinationEntity(223U);
    msg.op = 112U;
    msg.list.assign("OQPZYGTSVMRDHTXXVXYVUEPJEPOUOPNCRXKIKJWNNVIOJKELEVTNNJFMBQCRUIIDIAZUGUKNORJDZOLTJPCFASJTVBWBXOLEDLDAGXAFMNILFZGSTMMKZJGVXNASRHYAHGEOCNYISSZUY");

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
    msg.setTimeStamp(0.944488731298);
    msg.setSource(42533U);
    msg.setSourceEntity(84U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(216U);
    msg.op = 246U;
    msg.list.assign("BNXAPQFLXTATOVIADBVIXBPYBMDPNUDZNXRANFESZGGCQZENAXXKRHFRSIZJYJSPDRWGOBUOZSBNJKECFZSHZMLJKTEKWWIQGYLAGBUWXPVIMOXWTQFVTDJQVVTSEFQNEHPAKHTVYXHSLCOZYRDNVUNIUDKEQOKLCFTONEWHKYRLDWRHTAWPQJ");

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
    msg.setTimeStamp(0.885632983763);
    msg.setSource(9257U);
    msg.setSourceEntity(87U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(79U);
    msg.op = 205U;
    msg.list.assign("IYNEXTIHJEMALNPOM");

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
    msg.setTimeStamp(0.503837936373);
    msg.setSource(4578U);
    msg.setSourceEntity(187U);
    msg.setDestination(62845U);
    msg.setDestinationEntity(62U);
    msg.value = 71U;

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
    msg.setTimeStamp(0.197388524934);
    msg.setSource(4102U);
    msg.setSourceEntity(178U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(27U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.468329048575);
    msg.setSource(20894U);
    msg.setSourceEntity(127U);
    msg.setDestination(9948U);
    msg.setDestinationEntity(236U);
    msg.value = 94U;

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
    msg.setTimeStamp(0.0338799780425);
    msg.setSource(43009U);
    msg.setSourceEntity(252U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(126U);
    msg.consumer.assign("MLGRPZSQDECTRJNECGBVXBQODNFFUFUUVKOYZRGPERNZVZLDKXWWAXBPKIHMWPSMNZCOTWOOHESYDVFQVFPTELATIDJOJXUFHGDZQXKDLONCEFMVQXNMHHYWKCHCQEBPIBJFWLABANTQARPAMJIAGUZRLQJPASHNJHCKLRYUDEKTMFHUYGIDXYUZXMHIVYGSGGNOJYUYTZVCVSRUMTCXK");
    msg.message_id = 64501U;

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
    msg.setTimeStamp(0.806023080091);
    msg.setSource(18282U);
    msg.setSourceEntity(134U);
    msg.setDestination(29257U);
    msg.setDestinationEntity(121U);
    msg.consumer.assign("LYQJHBGISDLKGXSZLOUKAZBJHRIKLUUTTOJCXZFXVYJPHMSKFTDTAQVADFXJNNXARSYYOSGODEYGQKPDDVICEEJZAPIKKBWWFAPVFLRYYBUXO");
    msg.message_id = 59861U;

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
    msg.setTimeStamp(0.229551246241);
    msg.setSource(21125U);
    msg.setSourceEntity(129U);
    msg.setDestination(21933U);
    msg.setDestinationEntity(3U);
    msg.consumer.assign("GZCJLLGMIVZVTTSQUKKRVKJZXHKYPMDNFKOHWFCICOQLDSMLVBLEWCNDJAPRLDQAOFBCDLQXMJUONDIOTSHHBRSACWSWUVXGOPQEGPNJHVWGVHIAMOXZUGRWRGYUKYQDKCSTJXFPPYFPAESPFBXIEMWBIHLTQAAFDMRNJOBXNMMPAUQEJIRKVOKRYAZIKISBFTTLQCBCFTREEZGOTLUWIANQYNDUZHNSGWHTVJMUYFUCZHPYEWXZBEZN");
    msg.message_id = 8402U;

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
    msg.setTimeStamp(0.379484633524);
    msg.setSource(27797U);
    msg.setSourceEntity(69U);
    msg.setDestination(59178U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.120333801109);
    msg.setSource(608U);
    msg.setSourceEntity(146U);
    msg.setDestination(15087U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.569464592454);
    msg.setSource(25571U);
    msg.setSourceEntity(195U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.962517497829);
    msg.setSource(12354U);
    msg.setSourceEntity(222U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(196U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.00804978961506);
    msg.setSource(41442U);
    msg.setSourceEntity(191U);
    msg.setDestination(58805U);
    msg.setDestinationEntity(179U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.517072123761);
    msg.setSource(34105U);
    msg.setSourceEntity(23U);
    msg.setDestination(36233U);
    msg.setDestinationEntity(76U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.786377335467);
    msg.setSource(3397U);
    msg.setSourceEntity(29U);
    msg.setDestination(15500U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 36U;
    msg.step_number = 62U;
    msg.step.assign("LWMJGYQCYMFESEOPBXSJQTHOTNLIAGAJGADNFXKSDUBUPJPZAOEUKHSJQORCKSQFLKDCVM");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.961218586209);
    msg.setSource(62797U);
    msg.setSourceEntity(241U);
    msg.setDestination(20549U);
    msg.setDestinationEntity(219U);
    msg.total_steps = 232U;
    msg.step_number = 164U;
    msg.step.assign("DJNFSGOFUYAGAJMLQCRYFUYOVCPGUGOHXKCVNPPTNMHPEVAYPUPPZHLCEJDLOWLZCMEMKNBJVREWSTNSOZZILYHIJNPFIDXYBWVWZVNHFQOREHEAJHXXWGMELNBJYQUBKYHRDGLWWZXLSKVXQVSK");
    msg.flags = 27U;

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
    msg.setTimeStamp(0.887809933294);
    msg.setSource(2252U);
    msg.setSourceEntity(99U);
    msg.setDestination(2390U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 33U;
    msg.step_number = 141U;
    msg.step.assign("PTVUYCLWNGGTMTOPKIFJEWJTECZKKRKIRGEVRAZRIQRXJCBZTLLHNWMOCKYYDQQJLFFWUEKSIAIWPVQPPBQHSHMGHBRSWZBPJSSAZTEBCHAHBJCZBQNALHBWRUCGAMOGXYZXDVVTTFSKEOCXTDZQMYUCSFEXGWNVBDODDOKQVUNNMBKYIFFHFSUXDXPPO");
    msg.flags = 65U;

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
    msg.setTimeStamp(0.369987405905);
    msg.setSource(38248U);
    msg.setSourceEntity(52U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(238U);
    msg.state = 16U;
    msg.error.assign("XSGPZQZTNOOXGQACCYYUOYIFQLAQQNTDGREXQEOINQODMHPYOJREINXJQZWSDNCSZEMIEPKUKUHRQZSVJMBXGXKUXHANSYLDKIHEVFEBUYBCXKJGMMDHVFVFGAFTLNGPOBWYFHJIYPEMLMHCEMBCTCJLSQTFLTDYEDBZVUFJ");

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
    msg.setTimeStamp(0.305846692402);
    msg.setSource(61571U);
    msg.setSourceEntity(209U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(248U);
    msg.state = 157U;
    msg.error.assign("GPYPHQOMXNOIFDUVNSSDEDMWLVGSGPTTOFRBYISUZLUJBUCYLNASMZXZVVTQYNZODEERGCHTPSIKEHOUAVSRVAIEHGZWKTAICIGPTSFMUTYQDHDBZFOYKFJNFGGOKFMXHICVGOXZBANBHMDPLRQIUVBWHTBWJDUKKCCZRMLKBQEJOTJ");

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
    msg.setTimeStamp(0.583729783898);
    msg.setSource(2778U);
    msg.setSourceEntity(90U);
    msg.setDestination(10555U);
    msg.setDestinationEntity(241U);
    msg.state = 61U;
    msg.error.assign("ACJVPQOWUU");

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
    msg.setTimeStamp(0.857038300454);
    msg.setSource(52114U);
    msg.setSourceEntity(222U);
    msg.setDestination(27981U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.696277419043);
    msg.setSource(37199U);
    msg.setSourceEntity(8U);
    msg.setDestination(61276U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.168062861881);
    msg.setSource(32093U);
    msg.setSourceEntity(141U);
    msg.setDestination(61302U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.344793643486);
    msg.setSource(59117U);
    msg.setSourceEntity(102U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(173U);
    msg.op = 63U;
    msg.speed_min = 0.00367385418041;
    msg.speed_max = 0.297106819111;
    msg.long_accel = 0.00362026879233;
    msg.alt_max_msl = 0.422452329942;
    msg.dive_fraction_max = 0.510016870602;
    msg.climb_fraction_max = 0.64054669551;
    msg.bank_max = 0.12744877563;
    msg.p_max = 0.83676956068;
    msg.pitch_min = 0.763510943273;
    msg.pitch_max = 0.980949279753;
    msg.q_max = 0.110602830805;
    msg.g_min = 0.0654602375594;
    msg.g_max = 0.194340314855;
    msg.g_lat_max = 0.858470793854;
    msg.rpm_min = 0.152392686431;
    msg.rpm_max = 0.710527453006;
    msg.rpm_rate_max = 0.825047846395;

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
    msg.setTimeStamp(0.713529340794);
    msg.setSource(59117U);
    msg.setSourceEntity(31U);
    msg.setDestination(38240U);
    msg.setDestinationEntity(213U);
    msg.op = 20U;
    msg.speed_min = 0.805891174553;
    msg.speed_max = 0.299032089588;
    msg.long_accel = 0.664969318836;
    msg.alt_max_msl = 0.881419572071;
    msg.dive_fraction_max = 0.967960620745;
    msg.climb_fraction_max = 0.0431739416413;
    msg.bank_max = 0.527613207932;
    msg.p_max = 0.812673645333;
    msg.pitch_min = 0.178807972948;
    msg.pitch_max = 0.463784579186;
    msg.q_max = 0.328701088258;
    msg.g_min = 0.694736054995;
    msg.g_max = 0.892266633472;
    msg.g_lat_max = 0.768079672946;
    msg.rpm_min = 0.956250081499;
    msg.rpm_max = 0.145776274076;
    msg.rpm_rate_max = 0.819894408351;

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
    msg.setTimeStamp(0.966462799926);
    msg.setSource(22358U);
    msg.setSourceEntity(140U);
    msg.setDestination(56229U);
    msg.setDestinationEntity(49U);
    msg.op = 22U;
    msg.speed_min = 0.519912575298;
    msg.speed_max = 0.49341504358;
    msg.long_accel = 0.608162938109;
    msg.alt_max_msl = 0.720430035804;
    msg.dive_fraction_max = 0.661511999098;
    msg.climb_fraction_max = 0.583834490886;
    msg.bank_max = 0.895128130595;
    msg.p_max = 0.20495232748;
    msg.pitch_min = 0.945306713469;
    msg.pitch_max = 0.160210619009;
    msg.q_max = 0.943866947679;
    msg.g_min = 0.360757304194;
    msg.g_max = 0.0530674869134;
    msg.g_lat_max = 0.783494267447;
    msg.rpm_min = 0.3560270717;
    msg.rpm_max = 0.640560216258;
    msg.rpm_rate_max = 0.805032291264;

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
    msg.setTimeStamp(0.0989957134682);
    msg.setSource(60112U);
    msg.setSourceEntity(224U);
    msg.setDestination(53030U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.575668193578);
    msg.setSource(55364U);
    msg.setSourceEntity(242U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.636329939467);
    msg.setSource(22315U);
    msg.setSourceEntity(118U);
    msg.setDestination(14429U);
    msg.setDestinationEntity(54U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("VAKUHLNKBVPTURFEVMYLMGXJZPQHXYPZROHLYUELHUWIULNZQBXAQSCENDOWHBNBVORDIRMSJWBRHIPPSUOCTXKCELEEQDAKMSJYDQJMRZWVLQKOCVZJFYNEIGCJNXBHCTWGJYWYXYOFRTUGLUQIWITMCVLTSSFFPMZPVXOJFNWQWSHRURVIHZJEKCBGYPAFTKDCBOIDMUFBISGPOERC");
    tmp_msg_0.formation_name.assign("PIKNWJZEBFAEGPYHDFTQENXVMNJSXPMSIWDQJIJAQAYJEDJYACUBRUBRYFAZURMTGKCQURIBZBWJHWWHOTSCNKFZNRSNEHGNCGKCDYIMAXXRFZXUDOPGVSYIQMTJWQILLXZJUOTFIPLMNWQLYXVOVZZLJVROAFPTHPBPTKAULDUANHCDXWYBD");
    tmp_msg_0.plan_id.assign("WKOAOEBGWFPHPKGUFJWYEWOSZAUAIDNYWCCOBVGFBZHNGSYHLDHDNJORDXSAWGKZVMIHXGLUFHNNYBCAEQAJYVYWCYTSUIRLSUQGLYRAUOJVEQRCMTOENNRWMDXFTVHSIMGSMJ");
    tmp_msg_0.description.assign("VRDZZTEIGPZOVVFZGTNBPMYIGKBRUFAANJUCMOLECRELSCJNQAHXSIGKSTRJPDOMYAKHSTBWJEOGWGVTBPQQQXOHMEYICVJWFEQMZQYCMFDIKWKFSHMKLOKUAIHDXTVRVUMLCLHKNQREETNWAHLOLFDKWCUZYJXZHNM");
    tmp_msg_0.leader_speed = 0.477990298847;
    tmp_msg_0.leader_bank_lim = 0.790128314001;
    tmp_msg_0.pos_sim_err_lim = 0.475481851132;
    tmp_msg_0.pos_sim_err_wrn = 0.822411708925;
    tmp_msg_0.pos_sim_err_timeout = 60535U;
    tmp_msg_0.converg_max = 0.943801839874;
    tmp_msg_0.converg_timeout = 43833U;
    tmp_msg_0.comms_timeout = 37380U;
    tmp_msg_0.turb_lim = 0.959715342737;
    tmp_msg_0.custom.assign("GQBDDWVJWRWNCTLZ");
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
    msg.setTimeStamp(0.315734232218);
    msg.setSource(36617U);
    msg.setSourceEntity(207U);
    msg.setDestination(60683U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.943240652469;
    msg.lon = 0.080224063429;
    msg.height = 0.442011782177;
    msg.x = 0.837206933041;
    msg.y = 0.429347246488;
    msg.z = 0.240139779284;
    msg.phi = 0.524417500425;
    msg.theta = 0.358458854813;
    msg.psi = 0.752891152528;
    msg.u = 0.735000206706;
    msg.v = 0.536587225685;
    msg.w = 0.389294277603;
    msg.p = 0.00947041763937;
    msg.q = 0.515163880077;
    msg.r = 0.667895708988;
    msg.svx = 0.207602977755;
    msg.svy = 0.0794220062464;
    msg.svz = 0.660031686978;

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
    msg.setTimeStamp(0.109982583394);
    msg.setSource(46343U);
    msg.setSourceEntity(92U);
    msg.setDestination(47689U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.598600613746;
    msg.lon = 0.557837589543;
    msg.height = 0.597182864981;
    msg.x = 0.326879797648;
    msg.y = 0.652601123249;
    msg.z = 0.742455961686;
    msg.phi = 0.253335427834;
    msg.theta = 0.365862454308;
    msg.psi = 0.277364221264;
    msg.u = 0.0991747209664;
    msg.v = 0.543660696013;
    msg.w = 0.771753744747;
    msg.p = 0.0778669166965;
    msg.q = 0.0676082017667;
    msg.r = 0.472550416404;
    msg.svx = 0.407147889549;
    msg.svy = 0.271331903609;
    msg.svz = 0.386069144587;

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
    msg.setTimeStamp(0.458067560077);
    msg.setSource(13690U);
    msg.setSourceEntity(181U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.690177826968;
    msg.lon = 0.0178798633125;
    msg.height = 0.211659420996;
    msg.x = 0.421412550703;
    msg.y = 0.402913900924;
    msg.z = 0.593491905049;
    msg.phi = 0.954350701897;
    msg.theta = 0.120364955665;
    msg.psi = 0.177137286366;
    msg.u = 0.990091959401;
    msg.v = 0.240368358585;
    msg.w = 0.948013836114;
    msg.p = 0.862028629167;
    msg.q = 0.358457335471;
    msg.r = 0.178818369316;
    msg.svx = 0.840905702888;
    msg.svy = 0.494496651804;
    msg.svz = 0.663443740648;

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
    msg.setTimeStamp(0.64755903874);
    msg.setSource(49922U);
    msg.setSourceEntity(152U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(189U);
    msg.op = 9U;
    msg.entities.assign("LGZXJYVDFNPSOABYZDJLEOAPTQFIIPXFQUCUMSCOALMTUXPIERUMFXFPNKZBGJGGRURDTJZERVMOHMBXMCGWRAMJBQWTWFUEBKCBNSVNSWCLWHHEKVJYTYYLDUCINKRYQHNYVWGJKITJQSGWCSSHESVWIREHTYKSVZUODPPQWLMAZFXVAPTPRQLCOPOTBVOAEGQWRKKHIOOIQKLBF");

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
    msg.setTimeStamp(0.935728651526);
    msg.setSource(373U);
    msg.setSourceEntity(236U);
    msg.setDestination(17772U);
    msg.setDestinationEntity(145U);
    msg.op = 254U;
    msg.entities.assign("WTDMMJHIXYRQTQRUQYFPTQSEQSVSNZPLJCFDTIVCFKPAONFDLFGOUUCANKYSWWCQVXRZESLJGCXGITLZNJAPTWHBOENWEKAAFOLSYYMXRZFWSOXZCZXTWAGBHVVOBCQGPGKNTIJIRTWBTUZEWPIOUIMYBHJORINEGRAQMLIHUBZIAFRVZDQXG");

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
    msg.setTimeStamp(0.985186891196);
    msg.setSource(46995U);
    msg.setSourceEntity(110U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(84U);
    msg.op = 128U;
    msg.entities.assign("QTSBTSYMXKGCGGWLJNNKDIKWYDPGXFTUDQJTMWFLVUGLHFGBLOKSWQPDJZWEHDNJSQQTUUALZCMWEWZTRUMVVYNFQSSZKVUFFHRYUQZ");

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
    msg.setTimeStamp(0.346589970681);
    msg.setSource(38524U);
    msg.setSourceEntity(251U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(68U);
    msg.type = 164U;
    msg.speed = 2170U;
    const char tmp_msg_0[] = {-20, -102, -89, -6, -15, -63, -44, 120, 12, 1, -80, 90, -42, -110, -19, -16, -94, -52, 57, 34, -77, 106, -124, 27, -51, -95, 90, -8, 61, 25, 89, -15, -109, -20, 68, 95, 36, 17, 82, -6, -126, 60, 27, -105, 10, 89, 85, 14, -17, -83, -5, 4, 26, 76, -91, -12, -124, -103, -26, 55, -116, -25, -81, -48, 60, -93, 3, -104, -102, 44, -24, 59, -38, -7, 46, -51, -103, 103, 83, -3, 74, 68, -92, 54, -104, 97, 84, 37, 90, 119, -100, -5, 21, 28, 9, 76, 121, 74, -101, -93, 33, 2, -98, 82, 89, -58, 117, -57, -107, -25, 36, 100, -91, 118, 99, 20, 33, 102, -45, 0, 22, -20, -67, 43, -18, 74, 87, 94, -32, -97, 0, 126, -55, 70, 77, 106, -15, 79, 46, 50, -37, -97, 53, 52, 109, -57, -97, -121, -20, 59, 28, 65, 50, 82, -74, -85, 49, 51, -123, -74, 126, 28, 18, -107, 9, 86, -112, 9, 89, 42, -33, -10, 64, 125, 116, -29, -74, 82, 74, -27, -47, 37, -83, -117, 12, -52, -6, 6, -24, 100, 13, -4, 2, -20, 60, -58, -20, 56, 61, 115, -117, -95, 54, 123, -42, -112, 65, -72, 118, 25};
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
    msg.setTimeStamp(0.764922942548);
    msg.setSource(51124U);
    msg.setSourceEntity(217U);
    msg.setDestination(53662U);
    msg.setDestinationEntity(5U);
    msg.type = 104U;
    msg.speed = 48572U;
    const char tmp_msg_0[] = {32, -78, -9, -5, 3, 115, 35, -96, 9, 114, 33, 90, -116, -111, 96, -101, -84, 24, -95, 101, 58, 55, 53, -6, 16, -56, 62, -74, -2, -108, 72, 34, -88, -82, -26, 106, -37, -29, -86, -103, 114, 121, 97, -67, 39, 48, 1, -40, -3, 9, -85, -88, 104, -17, -35, -125, 96, 123, -1, -45, -12, 32, 62, -65, -88, 54, -12, -95, 118, 86};
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
    msg.setTimeStamp(0.372976948662);
    msg.setSource(16153U);
    msg.setSourceEntity(246U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(63U);
    msg.type = 35U;
    msg.speed = 49256U;
    const char tmp_msg_0[] = {-114, -22, 65, -18, 44, -82, 86, 91, -118, -22, -75, 77, -120, 59, -88, 92, 65, -12, -122, 83, -2, -36, 125, 108, 48, -89, 101, 39, 59, -99, -21, 118, 58, -20, -34, 61, 125, -122, 35, -80, -121, -26, 94, -124, -98, 42, -52, 81, 20, 118, -95, 27, 107, 94, -84, 104, 38, -18, -4, 89, 5, -56, -23, 63, -37, -110, 35, 27, 116, 76, -88, 13, 87, -116, -41, 102, -107, -82, 43, 38, -103, 3, -35, -115, 125, -108, 45, -88, -37, -127, 91, -119, 86, -81, 43, -14, -125, -38, 30, -73, -107, 118, 68, -54, 121, 58, 122, -33, 51, 108, -39, -33, -118, -103, 46, -4, 125, 13, -14, -124, 66, 71, -21, -25, -122, -27, -109, 126, 98, 124, -5, -125, 47, 74, -126, -107, 18, 49, -9, -101, -101, 56, 4, 49, -95, 87, -92, 15, 91, -57, 113, -114, 31, 0, 74, -47, 5, -74, 120, -38, -57, 109, 7, 78, -110, -23, -81, -11, 51, 89, 120, 81, 32, 76, -93, -125, 8, 106, 83, 105, 90, -60, -117, -11, -95, -98, 36, 52, 61, 43, -113, 38, 107, 85, 18, 27, -113, -18, -80, -48, -18, -95, 12, 58, 89, -52, -20, 27, -84, 117, 111, -76, 57, 107, 120, -120, 0, 42, -77, -62, 15, 94, -45, -71, -48, -124, 99, 116, -56, -50, 27, 18, -78, 12, -14, -19};
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
    msg.setTimeStamp(0.32415274298);
    msg.setSource(63287U);
    msg.setSourceEntity(106U);
    msg.setDestination(2321U);
    msg.setDestinationEntity(61U);
    msg.op = 34U;
    msg.tas2acc_pgain = 0.647995840169;
    msg.bank2p_pgain = 0.67617229806;

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
    msg.setTimeStamp(0.264178047389);
    msg.setSource(33191U);
    msg.setSourceEntity(44U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(36U);
    msg.op = 133U;
    msg.tas2acc_pgain = 0.34660083232;
    msg.bank2p_pgain = 0.895540646602;

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
    msg.setTimeStamp(0.630200979071);
    msg.setSource(17737U);
    msg.setSourceEntity(180U);
    msg.setDestination(35885U);
    msg.setDestinationEntity(162U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.802663977785;
    msg.bank2p_pgain = 0.516937959643;

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
    msg.setTimeStamp(0.383631984909);
    msg.setSource(20178U);
    msg.setSourceEntity(215U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(114U);
    msg.available = 2313638876U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.520416234897);
    msg.setSource(8818U);
    msg.setSourceEntity(61U);
    msg.setDestination(56288U);
    msg.setDestinationEntity(174U);
    msg.available = 3770092233U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.534264205713);
    msg.setSource(59594U);
    msg.setSourceEntity(157U);
    msg.setDestination(56313U);
    msg.setDestinationEntity(51U);
    msg.available = 1934005156U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.963759481784);
    msg.setSource(21842U);
    msg.setSourceEntity(40U);
    msg.setDestination(25258U);
    msg.setDestinationEntity(66U);
    msg.op = 205U;
    msg.snapshot.assign("IZNGYDSOZASBOTQZVSVLEAGLNFLXTXPLHBDPPMHXTGVOOUIRVYTUYQANZZBXCGQLCZJVRZIDBDV");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.366806320496;
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
    msg.setTimeStamp(0.0767979192015);
    msg.setSource(26892U);
    msg.setSourceEntity(223U);
    msg.setDestination(8289U);
    msg.setDestinationEntity(226U);
    msg.op = 104U;
    msg.snapshot.assign("PZEKYANMNOXMYEXNOWITWXCMJMBMBTNYXOSTHGYQHJOBIQMTOYUDLDLSLYALVQNWLTECGDHGQL");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 199U;
    tmp_msg_0.mask = 1126811560U;
    tmp_msg_0.scope_ref = 1252114879U;
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
    msg.setTimeStamp(0.0018632254205);
    msg.setSource(59289U);
    msg.setSourceEntity(11U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(146U);
    msg.op = 220U;
    msg.snapshot.assign("UTZCMQVAARUMEXWZRAMEMZOLLSVXPKOCHLIJYDGDYYBNWLOQFGMJIDPPCYRDVLNGUGDKMRJCAXZOIZLCQBZTBEILPRMIXSHXWBHKBFCNPRYHFQRDTGVTAJLJOXQMKBESGYWBSTZBRXNHXHNPDIJCOVBPQVUTGNHTDULIOANWAEGWETYUKGQPKSKWVYFSJUOWZDOSEOFJQVKFENFDXUYKWQCHVGUMVANESMCRJTN");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("ECDOSRFFRJDMCXJIPLHLDOBSGGMATTSKJUVQSWKNVFLDNOZMOTQAJDZFRDVFKNTCDBZALTZPZOWDONIAFWJUHCZKOUBWYIFRPMMHYEPGTSGKYUSSBCQZ");
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
    msg.setTimeStamp(0.0933962276798);
    msg.setSource(4021U);
    msg.setSourceEntity(254U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(203U);
    msg.op = 57U;
    msg.name.assign("RHGCIAOZSPIHXZOUONDWABFSGYCVCUAJELUPKYYKQTCFEERRLBEPGAHJGXAEBOKUKFMYZJVHVKXGCJGHOQNNKPTRRZOXFS");

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
    msg.setTimeStamp(0.223171925343);
    msg.setSource(59978U);
    msg.setSourceEntity(109U);
    msg.setDestination(38129U);
    msg.setDestinationEntity(6U);
    msg.op = 45U;
    msg.name.assign("SEHQOXNBFYXRKKLOZZUQTXUUQWBSAROYPTVGHUFTHFDAKIVZMWNLJRLDDKNUQDAGBVPIAAOLVUSXMBCFPGBNI");

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
    msg.setTimeStamp(0.225274175348);
    msg.setSource(25941U);
    msg.setSourceEntity(229U);
    msg.setDestination(48328U);
    msg.setDestinationEntity(196U);
    msg.op = 186U;
    msg.name.assign("TVKZHUYTIZTMJNEKPJRTDJUVNSNRSNZLTZFQOFCUPHGYBZQALZJSKHGVLTIPSADDXBQAYUCMQHKPBVX");

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
    msg.setTimeStamp(0.0247035202494);
    msg.setSource(51166U);
    msg.setSourceEntity(49U);
    msg.setDestination(26470U);
    msg.setDestinationEntity(120U);
    msg.type = 161U;
    msg.htime = 0.00714940468534;
    msg.context.assign("IFSVDHJVHDHIIHXDALGTBXLJWVIXUGYRZZPOFEDBAMEPRJYMQDFBELWBJWTKACBKTYSBMAEKGSKJUIRWGMFENSESIPQSJWMIIBNYZWGOIGAUUFOCRDLAJNNIRWENWMQCUCEFNVXPRTLZMEJJG");
    msg.text.assign("FPFXFQWGLJQGLQMGZCUVBWHRWGEKYWSRTIOFGZDEHTPMODNJPLHXFKCLNOCMMVVJARNTSXDNEXGHKAZFGZFOABUMDBIKQMOBXWRYQQNHIPUAHYXVSSJXLLYMNQTCDJZIJUKLHIZSZLHCWVSNPBISUIQBAJNYRTG");

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
    msg.setTimeStamp(0.0404697390162);
    msg.setSource(42224U);
    msg.setSourceEntity(56U);
    msg.setDestination(25212U);
    msg.setDestinationEntity(221U);
    msg.type = 96U;
    msg.htime = 0.640868244517;
    msg.context.assign("QTFFTFJGGERGEISUUPXCCPPSNRLZERGKLVJWHALYYGTCGCEFCKUSUDBUISHHUBSFPSIIDCAEDYYZNBZUPRMRWEHKRDJOHPWDPKBBWNVKWFWMXAAFVBSNNXLNZMGAJYSIAGBPCMTFEOTZSIECMDRPVBTOHAAZQKTLWKLQMIOPTWJAOVHUKCDCYOKVRQMVQVJLYJOHYJMNIHGZXDVZRNLNXQXKQQJNLXXM");
    msg.text.assign("VROTBPRBQLDLPMBPHKPLIEAJTUULAFTGXHWFLMMVYYNIPBZFCUFDMDOCFSZNYAUNNYXAUIUXOILASFTCYBAFYDBKHWIVRRZJCOBJZPGNECEVJZSXWGDIMYKHQTZIVBXJXQHIRSTWZSNYPMKXNYZIEKGFEDWXWKGZLUVBLJWQPRBETTQOMCDHJKUGQHWFUSGAKWEVKDSXJOTMSAGEGKSINOVSU");

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
    msg.setTimeStamp(0.271553061286);
    msg.setSource(55077U);
    msg.setSourceEntity(4U);
    msg.setDestination(53719U);
    msg.setDestinationEntity(143U);
    msg.type = 178U;
    msg.htime = 0.131797690813;
    msg.context.assign("LPALJPONNSEXRQMYZAOTDPVDWMJEEVYVTALUGBJYYYWGANOMHTNVULYULLVTJPMEDZSJBBXQRSFUIQJEOFTEDJGDGJRWIFTFWZBURITMXLGNLVORNFDLYRFPAZCBCZWOKXXWQPAPSGPUDIIIXCSOBQCSQIGMDHCZKWPREGCKCRBTECXDERKQKVMVZMOANIHQMJIHKBXZCZAHUUTQKVACSFFONRWHNPGSDTKFWWJSXYIKGMKOHBEUYHABHVY");
    msg.text.assign("XPVFCNRYXPBXGZFKALVKBDESDZQXDYXOMPOKCIIGJRLEZXAGLPKSVMZRXNHXJRVBVWQGVYMWALURCMFQDHFESKOLRBCZNNXPMAWQLEYDTWOYOHTBCBVSHHDNUFTUWJKZCFEWPIGFUIJLAIBNVIIGMTSAWXEWJQTKPTCNGDTPVSYMMLHOIAIUBLRCGCWDMZQ");

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
    msg.setTimeStamp(0.0491584271767);
    msg.setSource(12896U);
    msg.setSourceEntity(56U);
    msg.setDestination(48121U);
    msg.setDestinationEntity(130U);
    msg.command = 5U;
    msg.htime = 0.356453441582;

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
    msg.setTimeStamp(0.375009100646);
    msg.setSource(41374U);
    msg.setSourceEntity(26U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(176U);
    msg.command = 26U;
    msg.htime = 0.237227308245;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 234U;
    tmp_msg_0.htime = 0.906517588674;
    tmp_msg_0.context.assign("MFRFPIGWQLJJMLNUFIGGASXVSCVHCKVEQJCUOA");
    tmp_msg_0.text.assign("YNWZYSNUAAIFTHDTJHXNWMHCDKCAUEFDDPNBJRMPIYMXZRDOSVKQGOBBKXGZCWOIQLDESIQLOEXJYBAZIBYUVTGQNABRTMAGPVFUDNRXNLCEZZBNYWCTZFVAVPSBPFMOMSOCHVJDLPATTSDGIJGQPLULVUHBFMMWTMHSEVVKGOWWKIX");
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
    msg.setTimeStamp(0.934154709762);
    msg.setSource(15313U);
    msg.setSourceEntity(241U);
    msg.setDestination(39382U);
    msg.setDestinationEntity(200U);
    msg.command = 131U;
    msg.htime = 0.96427514202;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 99U;
    tmp_msg_0.htime = 0.836926462429;
    tmp_msg_0.context.assign("UHCYXEHLJXSAJDNWZLARADBBMMIYQJWDSBXKHGELMPYGCXGNRZTMXFCTXVYTENMHKLJPGWQUDQPVWICBWRTBRUGNRKYITYIFIEYKARFFHRVHEZNLBUYWYXPLINNFGFVZPQWMKVHFDBXOPLJTOFCSGQWNLDJPQHTGEIFBBX");
    tmp_msg_0.text.assign("VPUBYKUETRNLXTYCJGWLHBMSMMTOEPVCMSNIFNSHQCRGZSSDUVKBZVNUAMURVCHLHJPKIYRFROZLGQWYKAKWC");
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
    msg.setTimeStamp(0.0719858299593);
    msg.setSource(27531U);
    msg.setSourceEntity(141U);
    msg.setDestination(24732U);
    msg.setDestinationEntity(196U);
    msg.op = 125U;
    msg.file.assign("SJAQNJUZHETVNFMLJIAYRHMPXESQRGIHBTSPXCRVXSTWTAMKDFPBBCUXO");

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
    msg.setTimeStamp(0.162544090866);
    msg.setSource(30962U);
    msg.setSourceEntity(245U);
    msg.setDestination(49510U);
    msg.setDestinationEntity(49U);
    msg.op = 53U;
    msg.file.assign("PPOHKXRXVTQYJEGXEJMTCKPKMJSSDXTWQTKYFYRUOSIVYMLOLJNNMLOTVH");

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
    msg.setTimeStamp(0.340383802833);
    msg.setSource(55332U);
    msg.setSourceEntity(175U);
    msg.setDestination(29051U);
    msg.setDestinationEntity(168U);
    msg.op = 116U;
    msg.file.assign("KJKCCWTVCSNBETMGFPNFGFRAAISLYZBUQDXIZWCMOQFZSKKVXHQBTLUUYWQLZYACNVXZZWQMBTPHPLRFJCGZISPAYMOHKDMFEUZZXVLCHXYODWIEQCSIBJCWWGGOVIRTAAJURIVIMEQRYDXRYPFREFKQPUVHWXNDJHDSTIMHYUKEBPXGKO");

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
    msg.setTimeStamp(0.243538263056);
    msg.setSource(62415U);
    msg.setSourceEntity(241U);
    msg.setDestination(34885U);
    msg.setDestinationEntity(56U);
    msg.op = 202U;
    msg.clock = 0.21572303372;
    msg.tz = -70;

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
    msg.setTimeStamp(0.961330909467);
    msg.setSource(9733U);
    msg.setSourceEntity(141U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(108U);
    msg.op = 4U;
    msg.clock = 0.580281488169;
    msg.tz = 11;

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
    msg.setTimeStamp(0.18136176947);
    msg.setSource(14424U);
    msg.setSourceEntity(36U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(101U);
    msg.op = 216U;
    msg.clock = 0.0535042011158;
    msg.tz = -12;

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
    msg.setTimeStamp(0.135528938015);
    msg.setSource(30231U);
    msg.setSourceEntity(125U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(250U);
    msg.conductivity = 0.332324309748;
    msg.temperature = 0.769884464626;
    msg.depth = 0.640952905806;

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
    msg.setTimeStamp(0.793622461791);
    msg.setSource(44959U);
    msg.setSourceEntity(92U);
    msg.setDestination(14268U);
    msg.setDestinationEntity(74U);
    msg.conductivity = 0.0851703031262;
    msg.temperature = 0.00700808645037;
    msg.depth = 0.784547134802;

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
    msg.setTimeStamp(0.11681704938);
    msg.setSource(60777U);
    msg.setSourceEntity(16U);
    msg.setDestination(59349U);
    msg.setDestinationEntity(168U);
    msg.conductivity = 0.321423565663;
    msg.temperature = 0.223741188495;
    msg.depth = 0.151701324533;

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
    msg.setTimeStamp(0.681944479608);
    msg.setSource(2155U);
    msg.setSourceEntity(97U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.807437952208;
    msg.roll = 11070U;
    msg.pitch = 33560U;
    msg.yaw = 31292U;
    msg.speed = -28581;

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
    msg.setTimeStamp(0.760006962901);
    msg.setSource(10586U);
    msg.setSourceEntity(69U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(42U);
    msg.altitude = 0.157123017914;
    msg.roll = 57298U;
    msg.pitch = 63727U;
    msg.yaw = 61582U;
    msg.speed = -28408;

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
    msg.setTimeStamp(0.821202013732);
    msg.setSource(26123U);
    msg.setSourceEntity(170U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.18282348832;
    msg.roll = 4441U;
    msg.pitch = 23011U;
    msg.yaw = 46329U;
    msg.speed = -30262;

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
    msg.setTimeStamp(0.119541483678);
    msg.setSource(51952U);
    msg.setSourceEntity(161U);
    msg.setDestination(23406U);
    msg.setDestinationEntity(201U);
    msg.altitude = 0.816728115132;
    msg.width = 0.433629732638;
    msg.length = 0.95363576027;
    msg.bearing = 0.74890671291;
    msg.pxl = 18723;
    msg.encoding = 213U;
    const char tmp_msg_0[] = {41, 60, 21, 112, -58, 23, 4, 17, 18, 116, 77, 64, 65, -104, -122, 100, 13, -47, -109, 106, -14, 74, 33, -31, -102, -39, -36, 88, -66, -55, -124, 88, -61, 90, -77, -127, -88, -87, 50, -3, -11, 111, -18, -97, 65, 39, 8, 67, -84, 57, -12, -6, -9, -21, -119, 68, 100, -20, -23, 29, -33, 90, 9, 16, -107, 62, -94, 107, -58, -9, 115, 115, 116, -21};
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
    msg.setTimeStamp(0.185885312095);
    msg.setSource(11846U);
    msg.setSourceEntity(224U);
    msg.setDestination(47336U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.190667851921;
    msg.width = 0.585714447569;
    msg.length = 0.190192969181;
    msg.bearing = 0.910461898801;
    msg.pxl = 12864;
    msg.encoding = 124U;
    const char tmp_msg_0[] = {-105, 19, -123, -11, 13, -56, 82, 35, 116, 11, -81, -42, 76, 79, -117, 104, 55, -46, -11, -31, -10, -117, -26, 72, 51, -16, 17, 4, 41, 59, 112, -104, -49, -39, 55, 7, -118, -58, 47, 16, 9, 57, 20, -111, -93, -72, 115, 35, -64, 21, 121, -125, 114, -9, -75, 119, -24, 16, 43, 113, 99, 19, 47, 103, -10, -63, 102, 112, -103, 75, 89, -49, -55, 69, 80, 110, 69, -74, 5, 92, -58, 48, 69, 119, -91, -92, 36, -128, -9, -122, 37, 53, 88, -103, 101, -26, -40, 80, 113, 92, 6, -21, 1, 19, 65, 96, -93, -14, 103, -78, 64, 6, 109, 109, -13, 78, 54, -98, -49, 87, 121, -4, -122, -99, -127, 67, -22, 50, -43, 1, -117, 104, -95, -25, -12, 12, 65, 117, -58, 52, -102, 39, -80, -74, 124, 28, -41, -28, -15, -119, 40, -102, -101, 0, -13, -91, -114, -38, 6, 101, 70, -91, 71, 86, -92, -122, -17, 31};
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
    msg.setTimeStamp(0.811823047185);
    msg.setSource(6961U);
    msg.setSourceEntity(224U);
    msg.setDestination(10731U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.581669817316;
    msg.width = 0.0988849943508;
    msg.length = 0.534133461059;
    msg.bearing = 0.0395814322677;
    msg.pxl = -32422;
    msg.encoding = 68U;
    const char tmp_msg_0[] = {24, 77, -60, 108, -60, -99, 72, 56, -102, 16, -106, 68, 37, 57, -128, -94, 23, -105, -54, -3, -107, -62, -51, 114, -123, 118, -56, 23, 103, -70, -2, 78, 125, 86, -77, -104, -20, -42, -52, -72, -123, -92, 98, -49, -124, -76, -33, -117, 122, 96, -96, 40, 35, -10, 77, 111, -43, 17, 48, 77, 35, 115, -68, 115, -111, -125, 73, 82, -76, -124, 31, 98, -25, -110};
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
    msg.setTimeStamp(0.0216116560443);
    msg.setSource(41484U);
    msg.setSourceEntity(24U);
    msg.setDestination(30647U);
    msg.setDestinationEntity(166U);
    msg.text.assign("VZQMHZXOWFPGBQGCVBYDQCTIKIOJPSNUOEPQEOXGUFAEMLNWJTMPKICRVPLWXREJZHNF");
    msg.type = 28U;

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
    msg.setTimeStamp(0.128670827114);
    msg.setSource(34703U);
    msg.setSourceEntity(27U);
    msg.setDestination(15346U);
    msg.setDestinationEntity(103U);
    msg.text.assign("MOOTBEGASZKYFVQSDBUPAKPMZZEQBCATTNIMINLSQWKAUAYNZFRDVJUXNPWTYFNVEUGLKNMUBRZOTTRVSLHVCQBCDEBUWCXJAWZGTHUDNXZIWAPOSWKZAROYCOXIDPPHSFKERKGTOESCDBHIRJIIKRCRUVOHNNBOPMXAOXEJFQYQGVYSDLDPTTMWVJENYDXQJIWSWVZSMHVRGLLGJGMYCFEXPBIFUEIHLHWQBLHFMXYMCCRQKG");
    msg.type = 77U;

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
    msg.setTimeStamp(0.843053804369);
    msg.setSource(56391U);
    msg.setSourceEntity(37U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(226U);
    msg.text.assign("YXPQAYDRFUIDMWZMHABXLHUGCVAOUQICQIPTAOSGNPYZLEZITKNDMBMEKQMNNCDIRVWTEZGTHHUJFKSFUBAUHJKLMKNTTRHSFE");
    msg.type = 161U;

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
    msg.setTimeStamp(0.906131750331);
    msg.setSource(47614U);
    msg.setSourceEntity(66U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.591663791823);
    msg.setSource(2865U);
    msg.setSourceEntity(166U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.180786220443);
    msg.setSource(50128U);
    msg.setSourceEntity(125U);
    msg.setDestination(3615U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.118270307994);
    msg.setSource(36945U);
    msg.setSourceEntity(153U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("SYWITNWJFLMMLYABXRKRBZHLXZDDQXMAUVNSEEJPDEBCHCFKSCEQOQBYYJJWFGNUBBRUOPNOCIFFBSAXATKTVKEWTPRFKGDFUMSUKLOPSYZVNVHSNULHCZOIWPKCLHDWXMCPGMRRJQZTUCDPZOGGDIFWYEFYLZIVOYTQHNXCGESIZGHEHUAJAFKAWYIMOKQEDGAHAQWMRYB");
    msg.sys_type = 84U;
    msg.owner = 53539U;
    msg.lat = 0.471899942576;
    msg.lon = 0.720889139679;
    msg.height = 0.593809714866;
    msg.services.assign("OUIWGSYKFOWTCVMVJINTSGAZQR");

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
    msg.setTimeStamp(0.987974354268);
    msg.setSource(48356U);
    msg.setSourceEntity(107U);
    msg.setDestination(20604U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("IHEZXSFMAGBBOJRPLNEHPRLASUPKTQGFWCXSYCAGLCTKBQSIXIDEQRSGFFFVENUMJXRUJYOQHVIEORWAWQDHUTOPAACPIXRHCXMEFEOPDZVZBMKIIMADJMBVERFCGRSXDENNJNWMJIUAZSFUKSDLKNDT");
    msg.sys_type = 176U;
    msg.owner = 20784U;
    msg.lat = 0.153471907288;
    msg.lon = 0.63248386561;
    msg.height = 0.915828789785;
    msg.services.assign("DMXWUOJFIFBEKWYLNVQVJBABZLTDARTVSLQROOLZENEDZIBFHKLMNUESOKLGYYKNSZJFGDIEFIZQBCYWRROYWLOQFMASHJAHBGJRNKCQKEHTVVYEZPFINUDTCBEWPXZLENUMDPATWWZRAVKGHMMABUZHKYHCMSXDXXETGHFHCPJY");

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
    msg.setTimeStamp(0.710422242767);
    msg.setSource(23138U);
    msg.setSourceEntity(126U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(225U);
    msg.sys_name.assign("GCTFPENWUPQSJQGDLXPVMZTIBIRTCQRPIBWYUYEXIHJD");
    msg.sys_type = 20U;
    msg.owner = 16127U;
    msg.lat = 0.865681969538;
    msg.lon = 0.584958229878;
    msg.height = 0.82081208422;
    msg.services.assign("SMPFOXZXDNFUBWOMSXKLHQAWBFRFWNJCVFWOEVRLJCRGMTFDHEYTUKPIKZMZRQKXHVEPUECJYMJZEGPQTLXNGYUXOIWCUVYPBOQSNUJCGLHARSHQRTJJONYHEOVNIZJUDCABOBFAEPSPOVLWJISBKGLADHDQWRYSFYNQVWZTDHNKXFLISDPBMYOCKKHETUHDUXWQEWBTPYFGGETGTVDCPLZVTIXRSGNBKMBMJQGMMZCAARIQNALALUIVKSAIIX");

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
    msg.setTimeStamp(0.129378021226);
    msg.setSource(51972U);
    msg.setSourceEntity(43U);
    msg.setDestination(56469U);
    msg.setDestinationEntity(193U);
    msg.service.assign("CBIHTNQJJZLNDTRAUGWCAVDZHOTNZPAQKFXARNEKIDXAU");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.285055004867);
    msg.setSource(51055U);
    msg.setSourceEntity(190U);
    msg.setDestination(8546U);
    msg.setDestinationEntity(207U);
    msg.service.assign("PEHAVZCBBIYYENJOHELNNSRIXFZFBWBNMQLNCAWKMOZQXT");
    msg.service_type = 99U;

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
    msg.setTimeStamp(0.978078890827);
    msg.setSource(49634U);
    msg.setSourceEntity(61U);
    msg.setDestination(27030U);
    msg.setDestinationEntity(31U);
    msg.service.assign("NUGVLVFZNYEWJWDEYGNKHEJJHRIUTAZXCIFQUETMOCAMWFMZDXKCDPSGZSODZWIRUBBPDHFOXMVJUSRSMBLNBCXFRKKJPYDZEJGCAIDWVKEBQYHTLLKGNUOVHRKGFRNUUSLNRAFBRQTPLWEYPQLDHXOILSSOOZNGASBOJMTLNTXIABEJHQBMCIAGDNPZCCXZOVTHKMXWVSJSYDQHTAYKLWITFPFRQCYEWTPRQPQKYWJMXAGUAQ");
    msg.service_type = 88U;

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
    msg.setTimeStamp(0.065814193943);
    msg.setSource(62642U);
    msg.setSourceEntity(108U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(18U);
    msg.value = 0.0529370110351;

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
    msg.setTimeStamp(0.761124097177);
    msg.setSource(42880U);
    msg.setSourceEntity(154U);
    msg.setDestination(12891U);
    msg.setDestinationEntity(33U);
    msg.value = 0.94098229497;

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
    msg.setTimeStamp(0.619799692003);
    msg.setSource(40072U);
    msg.setSourceEntity(5U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(6U);
    msg.value = 0.711241847586;

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
    msg.setTimeStamp(0.201235053109);
    msg.setSource(64733U);
    msg.setSourceEntity(93U);
    msg.setDestination(25249U);
    msg.setDestinationEntity(110U);
    msg.value = 0.320654901725;

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
    msg.setTimeStamp(0.485777929111);
    msg.setSource(51010U);
    msg.setSourceEntity(254U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(108U);
    msg.value = 0.073709045792;

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
    msg.setTimeStamp(0.470945051952);
    msg.setSource(48292U);
    msg.setSourceEntity(241U);
    msg.setDestination(11298U);
    msg.setDestinationEntity(109U);
    msg.value = 0.607071107264;

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
    msg.setTimeStamp(0.951778347285);
    msg.setSource(42344U);
    msg.setSourceEntity(189U);
    msg.setDestination(61585U);
    msg.setDestinationEntity(178U);
    msg.value = 0.614879814658;

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
    msg.setTimeStamp(0.154153052335);
    msg.setSource(59701U);
    msg.setSourceEntity(65U);
    msg.setDestination(34057U);
    msg.setDestinationEntity(8U);
    msg.value = 0.980201280513;

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
    msg.setTimeStamp(0.0295201341513);
    msg.setSource(34496U);
    msg.setSourceEntity(78U);
    msg.setDestination(7499U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0179456342894;

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
    msg.setTimeStamp(0.560062113173);
    msg.setSource(2843U);
    msg.setSourceEntity(80U);
    msg.setDestination(42902U);
    msg.setDestinationEntity(25U);
    msg.number.assign("PMEQYDQIPGVPRAJMNHWIBUZCXAXLKZOYJHRWRKOYFDJYNXFNZVKHWMOPILZVBKHGKBFTWSCHOIFPDYNGCWRULLMYQNPVGLKAPFFYXIVX");
    msg.timeout = 3648U;
    msg.contents.assign("HKLTNBRQUWTJHLDJVUHDYWBZOMJAIPLDVUOCXTNGKBQQXVKCYZLGRWLSEYIBACJSPJUXBSZUQWDRPLMZPCGCXMDNPDMHYSCTEQTBZZENOGEOIYHOCYVABAYXHUYEUCENKNWVRTSPFRXZGPIKUOFLFCPJWGLKRFMQXENNAICHGHFLDHTDEVQRAKVJOBNQMTMEFPSABUQJGHIFWQMWVKOMDX");

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
    msg.setTimeStamp(0.232704042582);
    msg.setSource(20056U);
    msg.setSourceEntity(208U);
    msg.setDestination(17724U);
    msg.setDestinationEntity(36U);
    msg.number.assign("HLFUQYVHRGYOCPJSLFFPHHUOIBOTTPAASXJWRXQCKGUYQA");
    msg.timeout = 14252U;
    msg.contents.assign("LPZTJPSCHBQRILVSLTGHXQFXLGYMARNXWUCBAVWUZGCURBYNVFDXXFPRXATUUNFTZZPLZCJOZNTZYFJCFSAPDMFYVEVYWDK");

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
    msg.setTimeStamp(0.161170605968);
    msg.setSource(34488U);
    msg.setSourceEntity(75U);
    msg.setDestination(36671U);
    msg.setDestinationEntity(204U);
    msg.number.assign("VUZMQICUKXJHPJRFJSLRNNAXOMOULAZYKDLZWIOIKPKISESECYDWGGSCYSHTZDMERKJDAWQUXHVDMYZBZHWXJRCAJVLZ");
    msg.timeout = 57407U;
    msg.contents.assign("TZNMZQSENNWZVYYMXLPAYVATDRKWYIQVUXSPCOVNFXEMYGLEKCWQWHFQC");

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
    msg.setTimeStamp(0.955780153861);
    msg.setSource(24529U);
    msg.setSourceEntity(115U);
    msg.setDestination(44689U);
    msg.setDestinationEntity(209U);
    msg.seq = 3068119299U;
    msg.destination.assign("DDLRSRQUAZMRDSDEPVCDNNQYJIQTKFGGEAHNMJUVWBOOYJISCFCIWUDWAGLVAXMIHESOLTVOBXSSQHKZZKBWRGNKXXXEHVIYLSLCZBUVZAWFEDNJIDQFZXRAKMWNYHKNBINLEZUAZVMABIRPSYKKCQUHTTBEVFJMFUJHMUGHILFVGRGFCTGZQDAEOFYPNK");
    msg.timeout = 32872U;
    const char tmp_msg_0[] = {124, 84, -77, -40, -29, 7, 126, -90, 10, -65, 96, 15, 8, 3, -57, -15, -13, 69, 22, -13, 28, -58, 21, -97, -77, 14, -108, 94, 106, -77, 15, 56, -122, -60, 37, -18, 60, 125, -81, -85, 24, -120, 40, 50, 56, 86, -1, 125, 73, 59, -60, -1, -22, -123, -35, 10, 86, 12, 80, 81, -49, 36, -103, 75, -14, -82, 71, -112, 5, -100, 68, -78, 64, 14, 25, 52, -32, 52, -89, 28, -124, -24, 54, -122, 68, 53, 30, -46, -45, 109, -64, -27, -80, -32, 104, -82, 11, 54, 29, 62, 54, 100, 71, -36, 69, -82, -11, -118, -77, 109, -70, 91, 91, 84, -88, -62, 59, -111, -115, -98, 64, 91, 62, -44, 82, 78, 53, 84, -63, 68, -17, -47, -115, 62, -56, 37, 62, -35, -52, 45, 95, -107, -88, -75, 65, -98, 118, -96, 0, -6, -103, -79, -18, -4, 30, -46, -70, 27, -88, -76, -85, 100, 44, -66, -46, 49, -110, 30, 13, 66, 80, -26, -52, 7, 104, 43, 60, -66, 116, 44, -75, -120, 110, -66, -113, 109, 11, 72, 49, -110, 7, 96, 39, -117, 97, 58, 98, 27, -120, -76, -106, 106, 4, 22, -115, 86, 80, 96, -119, 16, 59, 52, 85, -12, 18, -84, 73, 17, 92, 51, 15, -26, 9, -120, 104, 32};
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
    msg.setTimeStamp(0.909819310679);
    msg.setSource(5702U);
    msg.setSourceEntity(54U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(20U);
    msg.seq = 800020350U;
    msg.destination.assign("AZSWONYMXJESFCXLNXPRWFBSZ");
    msg.timeout = 60509U;
    const char tmp_msg_0[] = {117, -123, 53, 88, -38, 18, 82, 93, 87, -116, -65, -12, 19, -100, 28, 66, 32, 42, -17, -28, 1, -12, 116, 113, -70, 62, 97, 83, 91, 105, 99, 16, 56, 13, -126, 87, 91, -66, 1, 88, 96, 101, -86, 21, 36, 107, 9, 74, 70, 67, 94, 31, 114, 59, -52, -82, 103, -61, 44, 102, -50, 89, -68, -24, 108, -15, 3, -21, -67, -45, -79, 22, 79, -51, 36, 15, 111, -30, 114, -91, -92, -111, -18, -120, 28, 109, 59, -62, 11, 28, 118, 26, -102, -60, 77, -124, 14, -104, 12, 12, -73, -28, 7, 34, -62, 98, -34, -108, 70, 117, 32, 78, 17, -61, -117, 125, 114, -38, -73, -53, -83, -26, -2, 88, -97, -74, -4, 1, 105, -84, 60, -53, -98, 96, -128, 114, 125, -124, -31, 50, 34, 0, -41, 39, 23, -5, 81, 87, 117, -36, 110, -76, 39, -9, -42, -66, 51, 105, -55, 124, -119, 18, 3, 96, 27, 23, -97, 97, -35, 116, 93, 40, 12, -78, 88, 122, -117, 17, 85, 64, -58, -18, 61, 51, 34, -20, -98, -16, -3, 55, -33, -72, -68, 9, -36, 19, -70, 41, -109, -120, 115, 74, 13, 65, -30, 8, 117, 14, -107, 49, -92, 113, 13, -9, 119, -62, -23, 10, -41, -56};
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
    msg.setTimeStamp(0.542684362209);
    msg.setSource(58208U);
    msg.setSourceEntity(188U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(109U);
    msg.seq = 921276449U;
    msg.destination.assign("FFHQJXHQMZAZRYSBHDFPUUGAJRLVVOKHWNLOPGTAKLODGCLESFINDIBPZXDGDUIHGJPLQUTGGBLFKFYERQJRXAVUIVCQSCNCQVMORRVMJYWMSCSKRZKSEAKOEHIXRCNNKMSIMCBWASEIJZMYZPQTAPOLNQWYBINAWYOQJDUFTHDACEMKHUTCUBDPGWEXJOZVQFZWEXEMHVLBEBKZYVGSTGORLCNNTTXYISNYBP");
    msg.timeout = 41701U;
    const char tmp_msg_0[] = {3, 0, -63, -72, 17, 115, -88, 37, 23, -81, 86, -42, 24, -119, 37, -105, 23, 88, -100, 42, -74, 88, 64, 13, -111, 4, -112, 88, -52, 109, -96, -45, 1, 53, 120, 89, -122, -24, -82, -74, 35, -99, 12, 44, 98, 52, -30, 91, 49, -37, -17, 16, -97, -37, 4, 39, -121, 85, -25, -47, -82, 17, 36, -41, -64, 28, 120, -62, -23, 90, -93, 8, 68, -126, -94, -119, 92, 4, 21, 56, 108, 38, 86, -76, -65, -26, 126, 94, 14, -11, -104, 0, -40, 62, 36, -23, 24, 75, 80, 88, -94, 50, -78, -119, -13, 111, -117, 90, 33, 35, 111, 104, -24, 125, -15, -69, -28, 14, 6, -28, 112, -77, -44, -76, 83, 79, 102, -80, 63, 69, -18, 119, 77, 61, 106, -22, 36, 121, -111, 62, -45, 104, -2, 83, 52, 45, 68, -11, 120, 58, 105, 25, -72, 74, 125, -43, -111, -47, -46, -84, -126, -32, 66, -65, -23, -106, 27, -42, -116, -128, 63, 52, 18, 90, -89, 124, -29, -89, -16, 40, 69, -106, -3, 106, 45, -79, 76, -104, -13, 68, 104, 27, -33, 83, -16, -58};
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
    msg.setTimeStamp(0.00936007905536);
    msg.setSource(1661U);
    msg.setSourceEntity(185U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(254U);
    msg.source.assign("KPIWGSMEJUBAEBADYQDXETGLKPFIFQDRHVCCLRZHXOUKVTMSZQEGXSMMAHUSBINWBE");
    const char tmp_msg_0[] = {-2, 15, -10, -9, -34, -98, -85, 19, 110, -48, 9, 24, 32, -87, -53, 61, -125, 120, 33, 119, 57, -116, -91, 65, 68, 8, 110, 93, 0, -21, -26, 43, 118, 7, -8, -33, 119, 106, 12, 38, -16, -64, -84, 58, 53, -119, 118, 125, 78, -71, -37, 74, 50, 96, 64, 14, 102, -111, 102, 116, 59, -119, 117, -51, 116, 21, -58, -20, 110, 109, 3, -87, 116, 64, -16, 29, -9, 23, -64, -59, -106, 118, -18, 108, 72, 37, -45, 35, 44, -20, 68, -11, -118, -62, 53, -25, -14, -2, 66, -56, 100, 58, 14, -48, -54, 45, 104, -124, -100, 68, -113, 78, 86, 110, 0, 20, 86, 101, 70, -104, -97, -88, 65, -69, 47, -68, -99, -24, -60, -1, 116, 103, -124, -85, 75, 24, 4, 50, 76, -103, -69, -126, 98, 76, -97, -9, 73, 121, 109, 77, -70, -15, 65, -66, 93, -99, 42, 82, -62, -7, 110, -114, -107, 56, -52, -119, -83, -72, 5, 57, -14, -5, 27, 77, 57, -22, 40, -106, -99, 67, 73, 79, 95};
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
    msg.setTimeStamp(0.361603014216);
    msg.setSource(51238U);
    msg.setSourceEntity(241U);
    msg.setDestination(36223U);
    msg.setDestinationEntity(220U);
    msg.source.assign("AWLHAPMCHDORLRLFZCEUSNUTFDIUBUZYAXQVJKSWKLRWBMWXTIZUNPCYBUKCMRHZMAJROSCTUKXQIKYEHIUGCJKFDSJBQPBXCXDIFDWNNVSWSMIGKGEUDXTAHPQOBRPQTAJSJMVCRGVJTIMSLEQHDOZYHZMMCSWEYBYQBHFNNNOOGPFJQTQWNYQLVNOFGTIJXIKOXECPAVGOZKE");
    const char tmp_msg_0[] = {-2, 16, -126, 18, 125, 16, -17, 88, -22, 116, -42, 88, 122, -83, 41, -80, -119, -29, 75, -35, -123, 20, 108, 115, -74, 99, 36, 77, -64, -23, -32, 40, 87, 10, 87, -31, -8, -90, -7, -126, -66, 37, -47, 101, 88, 11, -73, 102, 118, -60, 116, -96, -5, 46, 80, -64, -116, -26, -29, 48, -118, 99, -69, 16, 117, -90, 50, 103, 78, -96, 69, 120, 10, -95, 2, 126, -37, 64, -77, 41, -6, -20, 94, 110, 112, 33, 105, -81, -124, 122, 1, 10, 78, 64, -101, 91, -107, 106, -93, -16, 16, 0, -53, -70, 110, -103, -29, 113, 43, 38, -90, 96, 29, 7, -27, -73, 126, 31, 57, 61, -99, 23, -110, -49, -80, -63, -16, -41, -60, -13, -107, 43, -58, 42, 52, -29, -100, -105, -70, 79, -113, 96, 106, 18, -43, 10, 42, 89, -33, 74, 83, -14, -74, -120, -75, -97, 94, 59, 21, 25, -43, -24, 63, -25, 26, -62, 17, 106, 16, 115, 70, 50, 96};
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
    msg.setTimeStamp(0.108983695776);
    msg.setSource(8062U);
    msg.setSourceEntity(227U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(164U);
    msg.source.assign("ZEELVIAVDARTDNAJDQUVQWGLPNEGYXRSZVPSINRGHOVCTKSTORCXJAQSDDLSMYEUVWNZRJUXXIFRTNEZPONFJYFMCWHLIHNJVGKBBQBHBKVPOAMKJUIZEOQLUCASXGZKLEOROYAWTSLYTTUPRBLBMPMUBINDDIDZSIKKTHLYG");
    const char tmp_msg_0[] = {80, -85, -94, -55, 8, -127, 102, 66, 8, 113, 71, -59, -12, 62, 117, 49, 12, -121, -108, 27, -108, 66, 117, -1, 29, 110, 107, 78, -5, -82, -8, -55, 83, 91, 90, -88, -88, -44, 60, 55, 74, -3, -121, 3, -125, 91, -62, -84, -82, -82, -53, -48, 57, 73, 2, -106, -86, -49, -66, 123, -89, 104, 107, 3, 58, 41, 14, 35, 76, 84, -126, 44, 49, -63, -76, -104, 40, -25, -81, 41, -43, 46, -74, -96, 94, 110, -37, 115, 29, 94, 1, 17, -121, 7, -21, 47, 115, 63, -55, -69, 63, -45, 91, -61, -86, 34, -25, -102, 100, -60, 27, -97, -41, 45, -54, -113, -102, -95, 80, 16, 77, -115, 50, 107, -13, -92, 70, -84, 123, -54, -114, 119, -65, -15, -122, 49, -12, 48, -13, -5, -69, 108, -69, -16, -66, 80, -68, -43, -39, 103, 101, -56, -105, -13, 7, -70, 22, 21, 10, 63, 3, -80, -83, 73, -94, -88, 83, 20, 90, 103, 94, 36, 14, -61, 101, -109, 19, -83, 49, 17, -92, -111, -10, 122, 21, -118, -110, 98, 106, 59, 98, -75, 38, 113, 75, 1, -90, 22, 105, 37, -72, 112, -104, 113, -42, -82, -97, -7, -116, -60, -95, -58, 53, 92, 64, -107, -73, 92, 67, 40, -46, -70, -100, -77, 64, 90, -56, -34, -29, -121, 116, -95, -120, 108, -88, -26, -59, 113, -13, 97, -9, 98, -82, -122, -112, -122};
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
    msg.setTimeStamp(0.189167942581);
    msg.setSource(23630U);
    msg.setSourceEntity(220U);
    msg.setDestination(48559U);
    msg.setDestinationEntity(233U);
    msg.seq = 3441627276U;
    msg.state = 61U;
    msg.error.assign("YHGJHCHPVZGLCTJEGQGWODXEBWDYUBLTKAFXUFBHCEBNHEEGGZRDVDEZKFAVKSLCRGMRKALARFYMUVRAEIYLDANPLQNIJAIAEMSRWFZMCZKIXSCIGCUKSPBWHZXJRUBGDSQZFQVOLXOUTHWDMKNTJFPCWKQMAOHJSQOWWRLSJFORYQGYBYMEYWNUIOLPQJXTNJYOKSQRMUTBVPKBMECDTPMCIFZVPNIUJQADNTXZ");

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
    msg.setTimeStamp(0.480423804901);
    msg.setSource(5032U);
    msg.setSourceEntity(102U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(199U);
    msg.seq = 1573650535U;
    msg.state = 175U;
    msg.error.assign("GTZVNGZNAAFJKYPWSXBWSRMQYOOGCIQZORERKFNEAMWUTIRXRTCVTJUJVVFLCHVPHBMUNQFRHPLQMOLZAPGWGFJBBFWJHWFBDVCIIKEP");

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
    msg.setTimeStamp(0.21827333039);
    msg.setSource(55690U);
    msg.setSourceEntity(48U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(105U);
    msg.seq = 1838763853U;
    msg.state = 118U;
    msg.error.assign("MVOYLMPCWIHUSTZXAXPVLCYLTSJSXSMJPAJBWIDXFLECTFYNRORITMZZYDZXVUSMKIIENOFVDCIWHYOMDYZWTHFZAAEWKTHIGNBQZNXHSEPTRXZOQERMVVDCZCYVOUBEFPBTAAJUUDMTRGOQBCLLPXVLBNFACJMLCOPFHGTNBKPRHDWARVUJUYYGNHWDQUKQJBARGNGBGXIEQUJNDULFRQAOKXGCLGWKBG");

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
    msg.setTimeStamp(0.606627192231);
    msg.setSource(50372U);
    msg.setSourceEntity(143U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("DGARYRXPHHSXPPTVTPSCYSOCCNBNZFOEGUWXUNIELVBAGIVWPTQHMJRFELWWSWJIOMPQLHCMIPBELQOWPBMOYHYXOKZXGJGZDHLGHKRKNMMBLUEYAUBDJEGMSLXSCNVCSQIJLMNJUIAUIGIHUAKOFTLKFRNWVKRHQDCJVSDBNBFYFTYUMYIQBVTZCKXMVEEKARHUXDQLXPXUGJFK");
    msg.text.assign("VPFDMNZCSEEYOENOAEWBQUKHSYGNHBGXAOWYJBDXWLUKTLFARZQMDKXIH");

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
    msg.setTimeStamp(0.0966709769095);
    msg.setSource(63527U);
    msg.setSourceEntity(179U);
    msg.setDestination(16019U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("TIIPQBBPASNAZUNPOUKZWVIRGJIOKCWHBHLDYJYNCGQFLBHSIWQRLCJVSULYLLFMGHLORUTLZBMHVXGMXPHPHDOYUGMQOSNTRJPZMWNQONVETDFZBQCFRMAITRAXCZKFIDRFUVXLZHXMMPMAPRWRCGTAUDWEEXMYYEPNZQQBZAJDHVOJTLESFQKGEXSWKBAFIVJECVYSXXSUUOAIVTSYTACUQDWCZWYNSKVBGYTEJKJDB");
    msg.text.assign("KDFJLCZFOEILKGYWAKXYPAWLMVZRHQPVZXTDOCELDDHDAJJRFNVVKQFKWW");

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
    msg.setTimeStamp(0.657554303703);
    msg.setSource(22363U);
    msg.setSourceEntity(192U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("DAGDBKZTHTDIPCWEBEXBJKMAUZWULRWPYOSDQNQVYWSDRGWOYWBNGBQOFATHXGENMVDPMYLRHPXSETYHSMUZYMCXRFOGBCOKCUCFULQSAHIJAQKRZKWBOQTCOESEQLGMTJPCVTRUHIXNPGOUIKYXN");
    msg.text.assign("WHSLMEJHOMIVTCOHBMYXYMDIFXCSLLRBCTKXPEXNZEUKTJWKNKFYHNOYZCDQPQNEUY");

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
    msg.setTimeStamp(0.0790197343246);
    msg.setSource(28993U);
    msg.setSourceEntity(197U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("DKOOLQUKUWJYUPUWHSVQGTDFTFQFMUJGNVNGKRAMHYLNUUMCDPIJXPTMZZVPBPYUJJDETTZLGZBVBFCXWTMXGLCXYKOYSQPSAJNADVBPAPIXROKURBOZFMAXSVHLIGOQRCHOBQVEIWLNVWGWGZIFZREJEKSWNAHRTSKTFEYBIMATSPFMOZHIRRDCNRHLCFAEECYEBMNXDKTCYBVGIMWZCKFHLDHOIXRHQOLQJKW");
    msg.htime = 0.593477280716;
    msg.lat = 0.904488220397;
    msg.lon = 0.984767504339;
    const char tmp_msg_0[] = {6, 12, 42, -68, 110, 3, -46, -17, 82, 31, -56, -31, -43, 22, 94, 81, -88, -78, -45, 1, -58, -5, 77, -84, -46, -40, -115, 74, 39, 26, 123, 110, -116, 38, -105, 32, -85, 92, 77, 73, 102, -38, -17, -115, -59, -9, -29, 11, 85, -55, 76, -110, 106, 91, -120, -99, -8, 37, 107, 45, -39, -67, 81, -84, 8, 64, 33, -90, 51, 88, -126, -56, 116, -78, 53, 69, 111, -35, 122, -113, 98, 41, 46, -92, 102, 97, 3, 31, 88, -98, 122, -6, 66, 6, -66, 122, -52, -99, 93, 15, 41, 122, 117, 25, -109, 91, -36, 72, 40, -10, 121, 19, -91, 37, -60, -32, 44, -65, -5, -96, 19, -96, -88, -57, -20, -73, -72, -82, 71, -34, -63, 125, 68, 38, 120, 20, -92, -44, -83, 43, 22, 122, 122, -10, 45, 16, 79, 111, 4, 67, -90, 26, 72, -100, 71, 103, 90, 116, 55, 30, -11, -94};
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
    msg.setTimeStamp(0.938054332586);
    msg.setSource(49431U);
    msg.setSourceEntity(27U);
    msg.setDestination(20057U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("ZPXOJEZVDOBUBQKZOWHARFHZKKONTULPKSAENYJIGSFEYMJEOOIPLREUNHXSRUCTXCRKGCWUEALMJGCDFDGGGKYSTMJLAXTERHVLFDBBEXWJLOIURCBWPIELIYSKHGSGTVVNNZJMICVXIAJWYPZMPHTSVDMVVBCWCSZADQJDRDFAHOGPAMPZMRQAYNPTJNDQTXYYBRUYVQILQNKAECYMKHOIQUFBQIVNBUFLGXWFUNHZWWSXZLOMP");
    msg.htime = 0.506741941928;
    msg.lat = 0.391506690061;
    msg.lon = 0.805450314972;
    const char tmp_msg_0[] = {87, -97, 50, -15, -112, -124, 11, -80, -52, 72, -76, 107, -121, -91, 84, 42, 30, 74, 48, 13, -69, -84, -17, 22, -105, 122, -53, 30, -105, 68, 45, 63, 35, -89, -78, -112, 114, 99, -91, 41, -61, 66, 16, -6, 86, 91, 114, 122, 36, -20, 15, -60, -69, 125, 32, 44, 27, -26, 18, -22, -61, -44, -81, 109, -11, 19, 83, 29, -103, -76, -69, -71, 30, 70, -86, -127, -91, -89, 98, 46, 83, 62, 61, 43, 41, -52, -37, 27, 102, 24, 16, 36, -28, -17, -94, 123, 83, -102, -90, -11, 73, 95, 118, 113, -112, 23, -63, -11, -93, -34, 83, 7, 3, -45, -74, 8, -23, -52, 116, 107, -30, -21, 103, 43, -72, 57, -93, -50, 91, -81, 85, 101, 92, -90, 121, 60, -105, 87, 4, -1, 32, -82, -124, 51, 12, 93, 47, 120, -54, 46, -88, -59, -39, 113, -94, -60, 111, -112, -85, 30, -68, -62, 30, -22, -127, 93, -13, -35, 65, 27, -99, 125, 9, -1, 77, -23, -46, 15, 82};
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
    msg.setTimeStamp(0.844115862432);
    msg.setSource(9315U);
    msg.setSourceEntity(218U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("QGZFVCZAUWPHTDZHXNMNGTQUVKLPXWKSSSNQMBLNMCLCXNMKOBDDTUOFAHVBAIHCCT");
    msg.htime = 0.849347769021;
    msg.lat = 0.865980739553;
    msg.lon = 0.236888053464;
    const char tmp_msg_0[] = {-16, 111, 62, 77, 85, 126, 93, 107, -31, 87, -92, 89, -64, -106, -118, 0, -61, -100, -125, -100, -5, 1, 60, -5, 78, -120, 68, -30, -93, -68, 116, 64, -111, -114, 31, -79, -35, -2, 120, 76, 22, -23, -90, 32, 58, 112, -80, 11, 109, 36, -46, -6, 27, -118, -63, -48, 17, -53, 13, -16, -97, 77, 122, 80, -122, -108, 33, -39, 106, 22, 7, 68, -54, -12, 88, -59, 100, -73, -31, 78, -43, 59, 78, 110, 34, 109, -62, -18, -100, 85, -110, -21, 5, -108, -3, -54, 42, -108, 23, -15, 109, -20, 86, -85, -64, -110, -116, 19, 113, 124, 60, 40, -26, -87, -69, 42, -2, -38, 7, -16, 96, 108, 15, 3, 30, -32, -95, -91, 50, -58, 59, -104, -83, 113, 30, 72, 15, -50, 83, 72, 113, 48, 34, 15, 91, 78, -90, -10, -62, -38, 113, -84, 42, 72, 93, 118, 28, -106, -78, 79, -92, -43, -10, -47, 53, -98, 69};
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
    msg.setTimeStamp(0.312298104901);
    msg.setSource(3112U);
    msg.setSourceEntity(2U);
    msg.setDestination(31533U);
    msg.setDestinationEntity(64U);
    msg.req_id = 51864U;
    msg.ttl = 53769U;
    msg.destination.assign("KIADAGDPCSLRTJLXRPNNXNEREOYFQGFEBYICTUSICVFJKAWTEEOFXRSHUDGS");
    const char tmp_msg_0[] = {49, -86, -80, -24, 43, -63, 61, 30, 69, -39, 36, 11, -33, -11, -17, -10, 71, 89, 100, -65, 119, 83, 40, -11, -69, 64, 63, -124, 47, 27, -51, 25, -8, -53, -117, 83, 8, -90, 60, -78, 15, -44, 44, 44, -123, 48, 66, 61, -57, -94, 12, -81, -24, -77, 114, -17, -66, -62, -66, 18, -122, -80, 14, -27, 84, -5, -26, 55, -67, -112, 37, -95, 54, 12, 95, 105, 113, 118, -17, -95, -100, -27, -19, -51, -39, -23, 82, 109, 23, -21, 95, 31, -78, -5, 44, -15, 69, -85, -11, 80, -63, 65, -86, 88, -108, 27, 74, -97, -63, 96, -21, -39, 61, -125, -50, -84, -10, 9, -118, 20, -28, 98, 51, -81, -69, -80, -44, -66, -68, 84, -20, 62, 72, -30, 106, 56, -45, -13, -19, -29, 82, 90, -75, 35, -70, -21, 99, -54, 70, -48, 9, 69, -82, -44, -3, 21, 13, 99, -66, -95, -104, 115, 80, 11, -127, 32, 57, -61, 118, -126, -43, 18, -106, 38, 48, -113, 85, -35, -64, -58, 124, -34};
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
    msg.setTimeStamp(0.939011884216);
    msg.setSource(64141U);
    msg.setSourceEntity(30U);
    msg.setDestination(39485U);
    msg.setDestinationEntity(48U);
    msg.req_id = 52069U;
    msg.ttl = 56825U;
    msg.destination.assign("EYRGIQRMNPGMMKFPCTIEZKGYOKCWRRYKKPJUDOYGCZRBUMRITZHSHVMHHFJWOKFFYNLSOBIFHMGTOVYFQVRGLIEAKDBXJLIDSNMOOTIXPYNZUPHHMIDZMXEGUAPLLUBXDMVAZOSYDZXINWDSLPDTJAJLCBZKAAWEXWLSEQRBUDWXGFBUVVBK");
    const char tmp_msg_0[] = {-75, -74, -68, -117, 62, -91, 27, 45, -14, -109, 101, -43, 72, 60, 67, 118, -86, 81, 121, -14, 35, 84, 14, -112, 40, 31, -51, -76, 116, -111, 119, -6, -42, -28, 34, -123, 83, -33, 114, 4, -47, 66, -114, 47, -58, -114, -24, 65, 57, 119, -59, -67, -101, -9, -106, -4, -39, 73, 95, -57, -48, -54, -32, 61, 126, 79, -54, -95, 73, 49, -124, -88, -72, 63, 111, 96, 92, -21, -43, -25, 22, -29, 79, 115, 62, -99, -63, 75, 66, -127, -43, -52, 67, -91, -77, 59, 106, -19, -32, -89, -53, -65, 79, 119, -10, -64, 68, 37, -15, -54, 35, -111, -119, -41, 93, 25, -71, 24, -8, 9, 3, 123, 59, 19, 107, 3, -55, -69, 30, 71, 61, 7, 60, -28, 113, -77, 56, -119, -62, 115, 117, -19, 125, -73, 105, 50, 51, -105, 11, 25, 8, -15, 98, -43, -13, 93, 37, -85, -69, 84, 77, 0, 55, 19, -27, 44, 59, 90, 3, 85, 77, -67, -70, 70, -127, 54, 108, -52, 60, 31, -29, 73, -117, -6, -36, -103, -36, -14, 20, 43, 21, 47, 118, 125, -105, 84, -87, -125, -14, -81, 35, 96, 8, -120, -56, 62, -106, 84, 106, 101, 99, 39, -42, 77, 108, -7, 70, -102, -109, -104, 32, 113, 84, 109, -89, -32, 30, 66, -32, -40, 40, 21, 13, -79, -16, 65, -128, -89};
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
    msg.setTimeStamp(0.0428349798705);
    msg.setSource(53384U);
    msg.setSourceEntity(93U);
    msg.setDestination(65467U);
    msg.setDestinationEntity(247U);
    msg.req_id = 3553U;
    msg.ttl = 9208U;
    msg.destination.assign("GPWHLEQPBIRDMELNGZ");
    const char tmp_msg_0[] = {66, 10, -84, 34, -86, -82, 92, -125, 118, 122, 2, -78, 71, 114, -5, -127, -27, -50, 126, -29, -48, 75, -104, -95, 80, -35, 16, 27, 111, -17, -111, 44, 8, -100, -89, 91, 8, 24, 115, 48, 49, -92, -39, 107, 94, -10, -72, 91, 30, -68, -108, 124, 68, -103, 120, 89, 0, 14, 1, 71, 113, 6, -70, -34, 22, -41, 97, -90, -5, -58, -7, -21, -117, 62, 122, -50, -86, 61, -31, 6, 9, -88, -14, 72, 71, -57, 27, -31, 23, -14, -112, -44, 19, -75, -57, -46, -49, -60, -79, 100, 56, 33, 46, -109, 111, -114, 28, 24, 53, -49, 109, 10, -21, -26, -93, -108, -44, 92, -14, -36, -72, 17, -19, 103, -92, 77, -46, -60, 6, -125, 64, 31, 8, 84, -44, 20, -14, 79, -104, -67, 50, -113, -52, -37, 74, -46, 108, 102, 88, 114, -126, -124, 31, -108, 86, 82, -12, 121, -94, -76, -120, -35, 115, 11, 13, -30, 86, -62, 22, 80, 55, -36, 36, -113, 35, 81, 42, 65, 34, 47, 118, -42, 107, -17, 124, 103, -88, -82, -59, -64, -40, -6, -36, -121, -63, -108, 61, 21, -83, -82, -70, 51, -20, -77, -102, -12, 37, -82, 65, -32, 39, 56, -58, 19, -96, 80, -114, -47, 54, -87, -104};
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
    msg.setTimeStamp(0.395106162184);
    msg.setSource(42624U);
    msg.setSourceEntity(180U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(140U);
    msg.req_id = 36702U;
    msg.status = 63U;
    msg.text.assign("LQKGLHXWJEVECXTPJADUJAESDGDYMEHGDKOPVJFXSLPGLAFIKSITQZTTAKWHHVZZWRLUSNQRGPRKDHYSCBJPNJUIDBIMACGWHPZGVHDOCOFNEXBMJJLIGDUPZYSVNBNVSNWHMSWSTREELUOQJUOTBCMZVKFCQDYLCIAVYNFOABBBAOYIKRYHZBPKUJXPYTCYRMLMMTXXQFMTGUIWAEWXPZQCRKRKQOOFHIVDVYSX");

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
    msg.setTimeStamp(0.875285714453);
    msg.setSource(5595U);
    msg.setSourceEntity(34U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(204U);
    msg.req_id = 7748U;
    msg.status = 42U;
    msg.text.assign("UKYUGAOPXPXLDKOSILJNLMHYYTKDTKWPAIMWVEGYDJMOIWCKUB");

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
    msg.setTimeStamp(0.568724315872);
    msg.setSource(13521U);
    msg.setSourceEntity(43U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(8U);
    msg.req_id = 35562U;
    msg.status = 195U;
    msg.text.assign("TISARQAFJKHUDGWHUHXBSXGRBWASXSXBFTBCJYGVEPYZHIHWNMFZMRGHCDRHNSJNYFDVNSUFDUYYJGLYMRNFWWCZDGRVUUTKOJPJFXTZCQCXEPM");

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
    msg.setTimeStamp(0.667767982366);
    msg.setSource(55303U);
    msg.setSourceEntity(187U);
    msg.setDestination(37514U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("WTKPDCNMGXRGBAMNZTLSLQFAEVEWGIXAXVFCYZOULGFIKVLJHHUGANARWYADBITYOWCDSNQMTDZDEGRVTD");
    msg.links = 1540487451U;

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
    msg.setTimeStamp(0.663047759628);
    msg.setSource(38586U);
    msg.setSourceEntity(30U);
    msg.setDestination(33970U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("UASMASTCAPIIQUORKSVIKZVHZCNJMDCWQGTQSPEOJDJJWLPOOGMJAMBBOQBVIVDLTNESGXOHXZPPEFPDUZANKCLGYXMSJEIHVYSAWCLAYSDQEMGFYTXCZVOADOYGLYURNRKZTYWRDTEEFRMKVSXLFHVQITLWHMBYWUFJOXAZFBDNVFKTRNCJBPKXZQWNJXGYTUBQPCSFJREEDNZIOYIQGLNUUKTXMUBFLRQVCHWCXBRR");
    msg.links = 3148284070U;

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
    msg.setTimeStamp(0.356764492276);
    msg.setSource(4787U);
    msg.setSourceEntity(177U);
    msg.setDestination(46676U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("QDATEXRHXBZNYRBSNL");
    msg.links = 3650422506U;

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
    msg.setTimeStamp(0.338085394119);
    msg.setSource(48711U);
    msg.setSourceEntity(63U);
    msg.setDestination(1774U);
    msg.setDestinationEntity(167U);
    msg.groupname.assign("FJZJGHDOVHLILSPDZVORFIXUWVRURZLBJLWPOLYRIHBFWNWDSKMQRRBZPD");
    msg.action = 167U;
    msg.grouplist.assign("NVSJIVQQYWRXYCAOJIGAWYHMCYDEGUVKLPPQVBZANYIDPGHXZDOKWPYFLWNYZUOOAOTJBASFUJNUYTLWEBLUCMWUISHHAWMIHMVPPURIVXTODXKLMZNKRKUORSNTQQMWBDEKPVFHFZRUWDRQVBBFSTPPEMFODVTEUEHMGZSFXCXZKLDXOQJBAJEFNSTBJGGEZZXXGTIGHEFJASDORJCIKNAHZYQCC");

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
    msg.setTimeStamp(0.763345062926);
    msg.setSource(28615U);
    msg.setSourceEntity(226U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(151U);
    msg.groupname.assign("GUYNBMFVYCIPWMWBSBQRKFQODQEOXISFPIICMMBOWBHSNADFNTDZOQMXHEGRPOACQDUWUTPUNLSEZZDAUFNIAYJDYKFJMCVGJRHYSYQATOTZGMPVGSEBGNGDYEOKBIWCVMJCLPIKUMBPEGJUSAHSCXRTLGIUJTVZEQCZTHVHCHLWAKLLXWD");
    msg.action = 231U;
    msg.grouplist.assign("BTDFPIAJMKNKFAVRVNRUENRFNWLOWCCCFGOTUJCEHXGUBVTRTHUUGCYIHJSZFYJBLHXOONAIGQIDMATZQHJSGNVEYXNWJOBYIAZHNN");

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
    msg.setTimeStamp(0.227442431888);
    msg.setSource(12047U);
    msg.setSourceEntity(71U);
    msg.setDestination(64851U);
    msg.setDestinationEntity(152U);
    msg.groupname.assign("ELWQAUHKIYPVKZQMTTUPEIXFKYKALFMWCFMRNRDSQTHNJCDEACFPIMEKIEWWRSQMIEHKRNSODIWCHADSYCZUNZCTBBSSQYAWJJUOUBDGLRVLPRFYPPILLOWOXHGTGJYJTRKAZKJOFFRPVTLXKXZQGSUZWBDCQ");
    msg.action = 31U;
    msg.grouplist.assign("TWGOGTPGEJRHFNTWIOKONAQWUMLKNGFMHKVXVETYDTIBMALKFMSJMGJXBKPHRFIDXADAFNXLGSYZIJECYUZTWPUODCQZZOUAMNDRYCDTZJGSRBKYXBSLMYOSLXPQLCOCBMVBHWILCCNIBHBQFVJCWVZFUZIHPPLNTFBRTCUCHENOYJUAUDTEXIJXHSRUAI");

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
    msg.setTimeStamp(0.0340003316406);
    msg.setSource(50686U);
    msg.setSourceEntity(92U);
    msg.setDestination(32902U);
    msg.setDestinationEntity(39U);
    msg.value = 0.149731382884;
    msg.sys_src = 37984U;

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
    msg.setTimeStamp(0.389601620349);
    msg.setSource(27253U);
    msg.setSourceEntity(10U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(58U);
    msg.value = 0.57467110189;
    msg.sys_src = 33831U;

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
    msg.setTimeStamp(0.831350253478);
    msg.setSource(19835U);
    msg.setSourceEntity(163U);
    msg.setDestination(30943U);
    msg.setDestinationEntity(137U);
    msg.value = 0.546771637765;
    msg.sys_src = 58722U;

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
    msg.setTimeStamp(0.742527440365);
    msg.setSource(60873U);
    msg.setSourceEntity(213U);
    msg.setDestination(132U);
    msg.setDestinationEntity(142U);
    msg.value = 0.288876737471;
    msg.units = 78U;

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
    msg.setTimeStamp(0.989798756606);
    msg.setSource(38998U);
    msg.setSourceEntity(203U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(63U);
    msg.value = 0.790731849442;
    msg.units = 141U;

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
    msg.setTimeStamp(0.964226581346);
    msg.setSource(49991U);
    msg.setSourceEntity(50U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(138U);
    msg.value = 0.564161933408;
    msg.units = 95U;

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
    msg.setTimeStamp(0.78209700986);
    msg.setSource(34534U);
    msg.setSourceEntity(123U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(204U);
    msg.base_lat = 0.581368417834;
    msg.base_lon = 0.414762836219;
    msg.base_time = 0.829086249255;

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
    msg.setTimeStamp(0.438629477956);
    msg.setSource(2955U);
    msg.setSourceEntity(253U);
    msg.setDestination(63379U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.832512332383;
    msg.base_lon = 0.94316762942;
    msg.base_time = 0.396282403321;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 39685U;
    tmp_msg_0.priority = 11;
    tmp_msg_0.x = -28265;
    tmp_msg_0.y = 29643;
    tmp_msg_0.z = 3875;
    tmp_msg_0.t = -28574;
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 2619110420U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.114452039374);
    msg.setSource(20180U);
    msg.setSourceEntity(240U);
    msg.setDestination(56349U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.122762696706;
    msg.base_lon = 0.55609736314;
    msg.base_time = 0.343361208875;

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
    msg.setTimeStamp(0.698666268512);
    msg.setSource(33562U);
    msg.setSourceEntity(186U);
    msg.setDestination(20873U);
    msg.setDestinationEntity(113U);
    msg.base_lat = 0.575888295381;
    msg.base_lon = 0.810681756759;
    msg.base_time = 0.313339467232;
    const char tmp_msg_0[] = {124, 5, -51, 92, -79, 94, 56, -84, 1, -91, 97, 12, -65, 94, -106, -114, -25, -101, 106, -121, -2, 47, 53, 41, -7, -62, -81, -24, -79, -60, -45, -62, -14, 32, -76, -44, 122, -104, 124, -120, 99, 119, -47, 107, 34, -84, 103, 3, 34, -85, 65, -19, -111, -23, 96, 51, 27};
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
    msg.setTimeStamp(0.645198608626);
    msg.setSource(3320U);
    msg.setSourceEntity(146U);
    msg.setDestination(195U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.918187355719;
    msg.base_lon = 0.718363230677;
    msg.base_time = 0.333425388701;
    const char tmp_msg_0[] = {-88, 107, 7, 45, -88, 1, 45, -15, 57, 69, 58, 81, -70, -29, -120, -24, -32, -121, 27, -49, 85, 79, -106, 69, 79, 96, -37, 75, 126, 68, 102, -4, 73, -103, -69, 2, -56, -31, -99, -92, -83, 27, 59, -43, -55, 98, 31, -124, -8, 83, -78, -21, 109, 18, -78, 30, -125, -15, -68, -37, 117, -56, -2, -36, 22, 73, -77, 105, 74, -80, -50, 27, 107, -42, 103, 54, -4, 34, 106, 40, -7, 76, -28, 6, 125, 24, -108, -56, -109, 36, -18, 123, 95, 92, 22, 12, -62, 13, -75, 69, -94, -109, -83, 27, -81, -48, -16, 121, 69, -27, -120, 15, 123, 74, 43, 93, 104, -15, -54, 85, 21, -102, -12, 80, -108, -46, 117, 0, -117, -97, -53, 0, -103, -110, 122, -32, -61, -41, -36, -119, 103, 16, -78, -94, -107, -63, -95, 70, -33, -72, -107, -78, -43, -81, 125, -122, -42, -72, 69, 95, -90, -10, 21, -28, -13, 37, 108, -40, 11, 75, 29, 42, 67, 31, 81, 14, 125, 35, 114, 19, -34, -27, 105, 44, -28, -90, 51, 99, 86, 8, -58, 39, -14, -96, 23, -56, -80, 37, -23, 84, -110, 9, -83, -87, -58, -78, -6, -119};
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
    msg.setTimeStamp(0.0734325883003);
    msg.setSource(3825U);
    msg.setSourceEntity(100U);
    msg.setDestination(17590U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.859171061907;
    msg.base_lon = 0.23356888457;
    msg.base_time = 0.961753675801;
    const char tmp_msg_0[] = {76, 50, 79, -3, -11, -94, -85, -107, 7, -77, 67, 29, -120, -21, -115, -32, 51, -10, 87};
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
    msg.setTimeStamp(0.898576041245);
    msg.setSource(40517U);
    msg.setSourceEntity(132U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(20U);
    msg.sys_id = 37282U;
    msg.priority = 57;
    msg.x = 13769;
    msg.y = -19907;
    msg.z = 28474;
    msg.t = 6503;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("MOEXITHTWUMIHSQGBVFFFBQFEBLUSIYXWFQORVTDNBSECZSLEPPZFAGYRLWWDPYVFNAINZLHEBSODARLODZSJAPPFSMUVCHXILXQEZKJHUUBWUWBAKRGYXKPGUBVRMMBQCDTSKHEYNMOGRUVRYMPZYHESJNIEYAFQCXGO");
    tmp_msg_0.sensor_class.assign("WKBLJISXOGNCATYXXXXBGNPMHVILYANSOQYUBXOAJHCHXVRPPBPVWXVKKMLSIOAMHQZSWCZGIMRAREDFBEHFVMKCIYZGVYYOWLSEJYDBEKDWQVIPHPWPJTIFFNDRHTGWTTLKIMOFEPNCJJNJLYKQFAMYCOSNAGBZNNJTUKQDGE");
    tmp_msg_0.lat = 0.345405890611;
    tmp_msg_0.lon = 0.516129494781;
    tmp_msg_0.alt = 0.190718129613;
    tmp_msg_0.heading = 0.380619950558;
    tmp_msg_0.data.assign("NMUQBQRBPTWWTEOTFAAIFQUNMRNNMSPCVWFLKGTAOKMMICQXWBPXAUYGESEMAZYUEHBKXCCJOZEFQBWQTVYVHZSNFKIURPOVIDFYLGXZLJVHFMPJGDUSYDPUJCDQG");
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
    msg.setTimeStamp(0.565504301803);
    msg.setSource(33171U);
    msg.setSourceEntity(140U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(157U);
    msg.sys_id = 23569U;
    msg.priority = -6;
    msg.x = 30570;
    msg.y = -25828;
    msg.z = 27285;
    msg.t = -2450;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.id.assign("GFHGKPNLJHEPVQZYXTCRSLGLAWQVSFZUDCAFXOKVJVXOOZOYNUSXQSBQJHUJPQNAUSIKYUPSMLMTRXKDTNMOBZGMFKPNNDYSXGTRVDBAAUGQVIVYIWRLPYIRMAYTKRWIBPIAVSCPDDSRHIDPIEZBWLFNZEBWAKMVGHEENTUH");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39427U;
    tmp_tmp_msg_0_0.lat = 0.630937843276;
    tmp_tmp_msg_0_0.lon = 0.00385287233681;
    tmp_tmp_msg_0_0.z = 0.864048958152;
    tmp_tmp_msg_0_0.z_units = 161U;
    tmp_tmp_msg_0_0.speed = 0.714474488853;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_tmp_msg_0_0.syringe0 = 208U;
    tmp_tmp_msg_0_0.syringe1 = 93U;
    tmp_tmp_msg_0_0.syringe2 = 191U;
    tmp_tmp_msg_0_0.custom.assign("GXIVGPJGUJBRWILIXPXGHIKGFOAIFCBYXUAEORTCNBVPCFSATAPKVQFTIWTTHOKTIXLNHHQUJGQOACLSBMNUNRVZBEUDXBQLEUCPFYLYWVEYJJPXQAXMGCXLHSEBSERAWSCDRQTYFMPMFUUVKDOEQSKSQSBPXWOYHDODKZTGBZTQMIWLQRTWRHUNFIFKVOMSZMRYACZMRJZDSNPAWMVYWHYOHGDNUKPNGLEHJOBWMJDKCRLVNDZ");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.906913955103);
    msg.setSource(52394U);
    msg.setSourceEntity(59U);
    msg.setDestination(3740U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 23334U;
    msg.priority = 73;
    msg.x = 6509;
    msg.y = -13621;
    msg.z = 21566;
    msg.t = 19105;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 21780U;
    tmp_msg_0.lat = 0.909525057412;
    tmp_msg_0.lon = 0.69221794645;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.z = 0.919845572422;
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
    msg.setTimeStamp(0.642851350097);
    msg.setSource(7451U);
    msg.setSourceEntity(150U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(131U);
    msg.req_id = 38833U;
    msg.type = 171U;
    msg.max_size = 61U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.855314103886;
    tmp_msg_0.base_lon = 0.307072503762;
    tmp_msg_0.base_time = 0.689515057717;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 46678U;
    tmp_tmp_msg_0_0.destination = 34531U;
    tmp_tmp_msg_0_0.timeout = 0.0976908772561;
    IMC::GetParametersXml tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.493025608739);
    msg.setSource(29162U);
    msg.setSourceEntity(54U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(20U);
    msg.req_id = 1873U;
    msg.type = 74U;
    msg.max_size = 23789U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.352974475368;
    tmp_msg_0.base_lon = 0.416499378976;
    tmp_msg_0.base_time = 0.116751392823;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 47612U;
    tmp_tmp_msg_0_0.priority = 56;
    tmp_tmp_msg_0_0.x = 12261;
    tmp_tmp_msg_0_0.y = 29401;
    tmp_tmp_msg_0_0.z = -7041;
    tmp_tmp_msg_0_0.t = -24413;
    IMC::EntityMonitoringState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.mcount = 51U;
    tmp_tmp_tmp_msg_0_0_0.mnames.assign("YXBTOONZUJGFRIPLASLSRFMBMYNZSMXWBKTWMBRHQBRGSTCMPNWSVAHDPQFSXNJHXYLEQXNHICMJHOPRJJGCOPKLDKXAGMWBGFLLESPRKOYCNJOLCYBQMWZEIONQWGJCLKMVWAWKFBIYFGUQUDZZANTYTOVMRIVYZGEISORGEZLPDHKXDKQAUQYBXD");
    tmp_tmp_tmp_msg_0_0_0.ecount = 100U;
    tmp_tmp_tmp_msg_0_0_0.enames.assign("AANNLGYAZGVPXIHGJTVOJHXUZZYIODUDRMFWMIZRZZONITLV");
    tmp_tmp_tmp_msg_0_0_0.ccount = 22U;
    tmp_tmp_tmp_msg_0_0_0.cnames.assign("AAMGQFPEPSLHHEVUHCJWKCYTOMTUKQXMMYMWUTZFXKXKXNNVPXTVSDNBZHPXTOZHISFYVOCMARYNTFERVBGSAHHUORLWXWDJCQPDFJJVKWGGDNXAPGPFILEKIVMZZLJSHLMLIAGQJICASKEHEVGKB");
    tmp_tmp_tmp_msg_0_0_0.last_error.assign("LKRZEMFFFEWCJDKLUEXOVMYKKDZMPRKGJWFOQLJRPHIVTSSLCCQBLPTNPFRQJBMDGXANSDQYGZLEDVCWVUHZGWXAHEMPXYCHPTJQOJOZUTIEUQEVLYTUPFLYQKGRDSAFARJQVIEGMOXMZWIZXTIODFTIEAVJNNHHBVDAHUBNNUOHMHSRQDCXOXSXPIBBAUTPUGBEXRTYRCFMZIJCZOAJQWWNDG");
    tmp_tmp_tmp_msg_0_0_0.last_error_time = 0.623580586959;
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
    msg.setTimeStamp(0.3158714862);
    msg.setSource(60318U);
    msg.setSourceEntity(246U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(240U);
    msg.req_id = 39974U;
    msg.type = 45U;
    msg.max_size = 34347U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.149327891865;
    tmp_msg_0.base_lon = 0.721564286652;
    tmp_msg_0.base_time = 0.613580298648;
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
    msg.setTimeStamp(0.767419671111);
    msg.setSource(51716U);
    msg.setSourceEntity(126U);
    msg.setDestination(49479U);
    msg.setDestinationEntity(57U);
    msg.original_source = 56082U;
    msg.destination = 53779U;
    msg.timeout = 0.41025071172;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.363946553825;
    tmp_msg_0.type = 151U;
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
    msg.setTimeStamp(0.539642709269);
    msg.setSource(40053U);
    msg.setSourceEntity(102U);
    msg.setDestination(61669U);
    msg.setDestinationEntity(21U);
    msg.original_source = 32359U;
    msg.destination = 59221U;
    msg.timeout = 0.144298147388;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 150U;
    tmp_msg_0.quality = 222U;
    tmp_msg_0.reps = 97U;
    tmp_msg_0.tsize = 5U;
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
    msg.setTimeStamp(0.836502975927);
    msg.setSource(26878U);
    msg.setSourceEntity(2U);
    msg.setDestination(7335U);
    msg.setDestinationEntity(167U);
    msg.original_source = 11119U;
    msg.destination = 27361U;
    msg.timeout = 0.873627015386;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 25116U;
    tmp_msg_0.lat = 0.556940435267;
    tmp_msg_0.lon = 0.0590053907683;
    tmp_msg_0.z = 0.650465705366;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.duration = 47699U;
    tmp_msg_0.speed = 0.0155381962057;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.type = 193U;
    tmp_msg_0.radius = 0.113909169782;
    tmp_msg_0.length = 0.923396381064;
    tmp_msg_0.bearing = 0.0463030512571;
    tmp_msg_0.direction = 251U;
    tmp_msg_0.custom.assign("VSYYRAVCZXZOICSEIRSTFDRMJYELOMCXFKGPHBGVTPPFGWFVKCRXMNJRVTPZTPOPLTLWQQDANPXBVWJXUNRFGLTKAFXEGKDOMHJLQFBUEXWBYBHQNUHIFSOVKDZXBRJTBKEVDWDHIFOBG");
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
    msg.setTimeStamp(0.91504873239);
    msg.setSource(52059U);
    msg.setSourceEntity(33U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(96U);
    msg.id = 184U;
    msg.range = 0.185197255042;

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
    msg.setTimeStamp(0.00249760376335);
    msg.setSource(37531U);
    msg.setSourceEntity(235U);
    msg.setDestination(54478U);
    msg.setDestinationEntity(220U);
    msg.id = 101U;
    msg.range = 0.150710188399;

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
    msg.setTimeStamp(0.150649450283);
    msg.setSource(55777U);
    msg.setSourceEntity(248U);
    msg.setDestination(6934U);
    msg.setDestinationEntity(87U);
    msg.id = 85U;
    msg.range = 0.648802703851;

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
    msg.setTimeStamp(0.142654617307);
    msg.setSource(6933U);
    msg.setSourceEntity(149U);
    msg.setDestination(2333U);
    msg.setDestinationEntity(149U);
    msg.beacon.assign("RGLHVVHGXYTAQJVZWVKYMSNPBEOBQCXNAFHVVYPWEXALBUMKZRGNYIEQKZFPGKJCDISIVUFJTYETWDBKXZFXPMDSPQXREJTZFWBIYYUSCKXWGWSJUCODQPYZMSLWEOTQMBIYCWRHUETATTSERQFPODWJDMCSDGHXJZAVOBBHFHTPAXPHDNRPWZKBRDFOZUIILVIHGCLMNGNRZJXRVGEOQLMUJOBKAHLKAC");
    msg.lat = 0.102470336241;
    msg.lon = 0.260314377072;
    msg.depth = 0.166246862132;
    msg.query_channel = 124U;
    msg.reply_channel = 141U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.233234785579);
    msg.setSource(26245U);
    msg.setSourceEntity(223U);
    msg.setDestination(9350U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("PDXSKYMYULQFQMWIJKIPEIURJARNTFGGTITWPGOXQEVSUNHKNRAGGEZICFPWRPEKJVXFVHIQOPMSSVTUZOGWCSXBDIKQRQWZGBDXQFGYVLEYMSYYMHR");
    msg.lat = 0.595407137227;
    msg.lon = 0.32630212481;
    msg.depth = 0.0737247264702;
    msg.query_channel = 38U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 157U;

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
    msg.setTimeStamp(0.291869338182);
    msg.setSource(48177U);
    msg.setSourceEntity(63U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("RULXOSITAWHNFSAVQRZODGXICBJYVHFXBVLZBEJJWZAYQNSTKMHWQSEXNKAQTHQDRWFIMKMVQIGTALJEOOLCXPPLFLIPFBPGNWSRZZIBERGTYOPENHLKCTJVYPSDHWYFHIZZBBDNVNOCAXUZMLEOKGDVMEVITOUFQKUHJMYYUBPDWQSBAJQCPDWCPLQGYWKKFDFOBDHTRRDXJJCCMUMEUVHGAYGXLNESGMCVIJRYXFAZPRAXUUUKNOTTMNCZ");
    msg.lat = 0.582316351779;
    msg.lon = 0.48555998629;
    msg.depth = 0.516815840696;
    msg.query_channel = 109U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 152U;

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
    msg.setTimeStamp(0.627722470825);
    msg.setSource(40826U);
    msg.setSourceEntity(225U);
    msg.setDestination(12734U);
    msg.setDestinationEntity(184U);
    msg.op = 202U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QIVWFMMADUIEMGEDSYGCFIZJPSAQMNDPHBRQBFJCUSBCFHDNWRFUPJULQURKTCGGGCMTMYZALYQZRCTYYESDNKVAOBRZNJHXXVNHIRLMOSJVDAQQLQHWZIPSWILTBEOJNZFNWQRBF");
    tmp_msg_0.lat = 0.850687641662;
    tmp_msg_0.lon = 0.436259019785;
    tmp_msg_0.depth = 0.705781355003;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 218U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.664489044646);
    msg.setSource(6616U);
    msg.setSourceEntity(208U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(43U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.754927082999);
    msg.setSource(7754U);
    msg.setSourceEntity(231U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(229U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.544196157061);
    msg.setSource(21811U);
    msg.setSourceEntity(45U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(123U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.330875828264;
    tmp_msg_0.y = 0.956821785111;
    tmp_msg_0.z = 0.468763599586;
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
    msg.setTimeStamp(0.542637362595);
    msg.setSource(33588U);
    msg.setSourceEntity(75U);
    msg.setDestination(23018U);
    msg.setDestinationEntity(237U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 51596U;
    tmp_msg_0.status = 93U;
    tmp_msg_0.text.assign("KGJUVDZQGLYHKQDEGZBJXNVUAZJYMEDFWUTMQOQRULOWTFVGERBMLIVHIFIRBHFNKXOVAWSKNMCFTKAXSRNPAFAPHDDXJWPGXPOYQAYXMSBOVUHGZAYMKPBCVPVCDOTERQRQMNUUHCONCICLI");
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
    msg.setTimeStamp(0.788767643836);
    msg.setSource(60876U);
    msg.setSourceEntity(146U);
    msg.setDestination(32053U);
    msg.setDestinationEntity(75U);
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 474069402U;
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
    msg.setTimeStamp(0.49229103092);
    msg.setSource(9620U);
    msg.setSourceEntity(45U);
    msg.setDestination(37283U);
    msg.setDestinationEntity(92U);
    msg.op = 200U;
    msg.system.assign("DREQLPEYRYPUFDBYXXKYBSVZIHOUHXJIXSNLWJCCGBNCADMKTZWAIWTWVGCKVTZFTTKOCZSNRCWUUMRPXGQDUPBJPFTPYAWIFMPNKAOVBQLTDFNGGMUDEOBZRJALEZXMLNSIOGAFTKMHIVG");
    msg.range = 0.710886449503;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("OCJFWTMYAVBTKBJDEORIKNTXIRACSLWPEDVGCEE");
    tmp_msg_0.reference_frame = 51U;
    tmp_msg_0.custom.assign("MPRWHWQSACHYRVVDRJIVAAVOCORKJVUPFKPZKQQXCOAKCLZHYEEUFPBANSTNFMZMEITKCYJHNAXASLJRZLUDDLUCUIBTKDXLNUERYKBZXCHWBBTPQPLBVMZQNXEIZPKQDTVVGPFKSXYNSFCUTMRVGFEWUELBEIJCDYWNMOSQDTGYOQQLNTINOXJMTAGOGHGIBHGIZZJMDFRFOAHGLXYESWBJ");
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
    msg.setTimeStamp(0.629588107449);
    msg.setSource(46581U);
    msg.setSourceEntity(29U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(198U);
    msg.op = 82U;
    msg.system.assign("BSYFTRICMBUMPJATEWCAHNYSEOFFOXIZOJEEZHIMWVKYRTINQJCKXFHNCQUMEOSMKLZGGHOANGWSSNPWRRISYIDUBKWFCEGXUAVV");
    msg.range = 0.168626549822;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 27245U;
    tmp_msg_0.lat = 0.512941379709;
    tmp_msg_0.lon = 0.638684434471;
    tmp_msg_0.z = 0.0813945349161;
    tmp_msg_0.z_units = 240U;
    tmp_msg_0.speed = 0.406536632115;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.custom.assign("NZECAJVMZMSUNSERCHIXDKUNBKVQMHGWACFCRMQPPDGQWFTAGSDYTVJKBSTRZEWTDYL");
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
    msg.setTimeStamp(0.245262778647);
    msg.setSource(9147U);
    msg.setSourceEntity(111U);
    msg.setDestination(8125U);
    msg.setDestinationEntity(20U);
    msg.op = 38U;
    msg.system.assign("UQZFGFXLYPJDEUHTMRKBECYFHHWMQLVSYVTBCO");
    msg.range = 0.406495696101;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("YSIROPLVIZQHGMUMKLGXXSQOMIPEMIEPQJBTFRDAIRDDIEYWNAKYJEXIKGEDHLJCJDRCAIHXKOFWCPMVTWMCFBSJWPO");
    tmp_msg_0.reference_frame = 70U;
    tmp_msg_0.custom.assign("TLJKQDWRSMCWJUVWGWKMDRBYUZKMXXYTNIMYORSFPWGCSHSBZECWCVXDIPRXNOVEBYURQONAZKJOQDHZMVFYOFETIAYETVND");
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
    msg.setTimeStamp(0.694128257865);
    msg.setSource(24279U);
    msg.setSourceEntity(59U);
    msg.setDestination(40671U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.366181463792);
    msg.setSource(53817U);
    msg.setSourceEntity(3U);
    msg.setDestination(55883U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.215766419072);
    msg.setSource(10266U);
    msg.setSourceEntity(102U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.585935344428);
    msg.setSource(53007U);
    msg.setSourceEntity(69U);
    msg.setDestination(17687U);
    msg.setDestinationEntity(93U);
    msg.list.assign("IAOMCEJZNKHPUJUATXQLYUQLNJ");

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
    msg.setTimeStamp(0.00562516328206);
    msg.setSource(32088U);
    msg.setSourceEntity(225U);
    msg.setDestination(9395U);
    msg.setDestinationEntity(196U);
    msg.list.assign("JLGSBJGBVDLFIGWCMZHFHZIGQZHXRUCFYWQ");

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
    msg.setTimeStamp(0.71976620752);
    msg.setSource(1499U);
    msg.setSourceEntity(10U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(34U);
    msg.list.assign("OEOPQNXOBNSHGVYVULHRMCHKUTOLIZWALHOCCRDFSWXNUISDYDTBKYZUTFFYGKAJKBPTPTXTPOGDMPUYFBIEDAKYWQFJUPHZSUULPAZRCHVEXYMFQVXWPDZLWZWTREJCLTMIICGBBMDOHXEQINWFHRZ");

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
    msg.setTimeStamp(0.922558597846);
    msg.setSource(63543U);
    msg.setSourceEntity(88U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(225U);
    msg.peer.assign("XGZSPMUROZCUSBHQXCHJVGEBILGMJDMTAIJKDUCTPQUKNTAHBAYEQPQWFCSXENJWKGEFUIKDYCEZFXYJDMNQBWAMJFPOYVUOSHWWFNMSRKCSZJARTPYXGZSGVLITVZJIREBCDLQHTLNDABHYHEBXUKFJLREPGTLOAQIBHZGRWNSKRFSXCLNOZLKAAQKXLDCUYVIPOOWNPCMI");
    msg.rssi = 0.175287143939;
    msg.integrity = 16232U;

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
    msg.setTimeStamp(0.287414315566);
    msg.setSource(2020U);
    msg.setSourceEntity(72U);
    msg.setDestination(28641U);
    msg.setDestinationEntity(1U);
    msg.peer.assign("BQCEZWUIHCQFXCGVQBPMESVOTHCJQOOEHEKMNZXNUXOFNHNCHGQGIEQJPYEBUFNWPDXZGJUFQDKKMZWZYGYISTPFWRFJJMTYWVVNAVRXRHPOTRLKCADUGGAODZZNUBTKMKIIEPLKEZQZACDWSVJYSYD");
    msg.rssi = 0.64320573167;
    msg.integrity = 11135U;

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
    msg.setTimeStamp(0.329162545964);
    msg.setSource(24457U);
    msg.setSourceEntity(86U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("VTWTYYNYGBQCQJVLSALZJGHONUXCWTFJWDATHIFWLBUKTXRDEFIKXPI");
    msg.rssi = 0.0909011358135;
    msg.integrity = 35752U;

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
    msg.setTimeStamp(0.642961782759);
    msg.setSource(2375U);
    msg.setSourceEntity(200U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(43U);
    msg.value = -504;

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
    msg.setTimeStamp(0.900177602323);
    msg.setSource(63267U);
    msg.setSourceEntity(44U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(218U);
    msg.value = -4222;

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
    msg.setTimeStamp(0.0976144538866);
    msg.setSource(44640U);
    msg.setSourceEntity(236U);
    msg.setDestination(3121U);
    msg.setDestinationEntity(148U);
    msg.value = 7806;

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
    msg.setTimeStamp(0.283796847884);
    msg.setSource(22722U);
    msg.setSourceEntity(27U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(191U);
    msg.value = 0.716797219901;

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
    msg.setTimeStamp(0.679907425991);
    msg.setSource(61301U);
    msg.setSourceEntity(115U);
    msg.setDestination(28066U);
    msg.setDestinationEntity(48U);
    msg.value = 0.88860085412;

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
    msg.setTimeStamp(0.591833873598);
    msg.setSource(51096U);
    msg.setSourceEntity(119U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(126U);
    msg.value = 0.780508830741;

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
    msg.setTimeStamp(0.0501290191957);
    msg.setSource(29250U);
    msg.setSourceEntity(20U);
    msg.setDestination(45681U);
    msg.setDestinationEntity(165U);
    msg.value = 0.898288484717;

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
    msg.setTimeStamp(0.428908203005);
    msg.setSource(55498U);
    msg.setSourceEntity(228U);
    msg.setDestination(1579U);
    msg.setDestinationEntity(227U);
    msg.value = 0.914435131064;

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
    msg.setTimeStamp(0.463794375279);
    msg.setSource(54188U);
    msg.setSourceEntity(61U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(164U);
    msg.value = 0.530929176189;

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
    msg.setTimeStamp(0.942667998156);
    msg.setSource(291U);
    msg.setSourceEntity(160U);
    msg.setDestination(36870U);
    msg.setDestinationEntity(251U);
    msg.validity = 39566U;
    msg.type = 48U;
    msg.utc_year = 39037U;
    msg.utc_month = 117U;
    msg.utc_day = 19U;
    msg.utc_time = 0.632122876871;
    msg.lat = 0.132911873851;
    msg.lon = 0.193881905751;
    msg.height = 0.43730760902;
    msg.satellites = 186U;
    msg.cog = 0.220422432965;
    msg.sog = 0.626988004728;
    msg.hdop = 0.736208921561;
    msg.vdop = 0.0319650905676;
    msg.hacc = 0.113361015929;
    msg.vacc = 0.564410922998;

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
    msg.setTimeStamp(0.312610445716);
    msg.setSource(60441U);
    msg.setSourceEntity(74U);
    msg.setDestination(49763U);
    msg.setDestinationEntity(206U);
    msg.validity = 23884U;
    msg.type = 229U;
    msg.utc_year = 64321U;
    msg.utc_month = 147U;
    msg.utc_day = 45U;
    msg.utc_time = 0.303890215975;
    msg.lat = 0.300082873502;
    msg.lon = 0.0483984680074;
    msg.height = 0.310376554714;
    msg.satellites = 144U;
    msg.cog = 0.937955856097;
    msg.sog = 0.886622985615;
    msg.hdop = 0.154454789133;
    msg.vdop = 0.332934788342;
    msg.hacc = 0.176276963703;
    msg.vacc = 0.515839800525;

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
    msg.setTimeStamp(0.471692708812);
    msg.setSource(5751U);
    msg.setSourceEntity(199U);
    msg.setDestination(24579U);
    msg.setDestinationEntity(173U);
    msg.validity = 27647U;
    msg.type = 185U;
    msg.utc_year = 9615U;
    msg.utc_month = 84U;
    msg.utc_day = 190U;
    msg.utc_time = 0.366778613722;
    msg.lat = 0.624090856039;
    msg.lon = 0.0223439483435;
    msg.height = 0.645300139485;
    msg.satellites = 121U;
    msg.cog = 0.909632529422;
    msg.sog = 0.0410038793486;
    msg.hdop = 0.465497513376;
    msg.vdop = 0.56591079678;
    msg.hacc = 0.247353206661;
    msg.vacc = 0.578312794117;

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
    msg.setTimeStamp(0.418364354071);
    msg.setSource(6220U);
    msg.setSourceEntity(244U);
    msg.setDestination(33362U);
    msg.setDestinationEntity(16U);
    msg.time = 0.95555395536;
    msg.phi = 0.0831892105192;
    msg.theta = 0.605988816927;
    msg.psi = 0.154467152091;
    msg.psi_magnetic = 0.283857115246;

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
    msg.setTimeStamp(0.580354674253);
    msg.setSource(64901U);
    msg.setSourceEntity(222U);
    msg.setDestination(44705U);
    msg.setDestinationEntity(234U);
    msg.time = 0.151752443599;
    msg.phi = 0.730222747448;
    msg.theta = 0.17201442167;
    msg.psi = 0.762496904175;
    msg.psi_magnetic = 0.214848632115;

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
    msg.setTimeStamp(0.135334247286);
    msg.setSource(24906U);
    msg.setSourceEntity(183U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(67U);
    msg.time = 0.00837626124174;
    msg.phi = 0.565277276227;
    msg.theta = 0.261203373285;
    msg.psi = 0.973349585394;
    msg.psi_magnetic = 0.65880594141;

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
    msg.setTimeStamp(0.954484678866);
    msg.setSource(23958U);
    msg.setSourceEntity(20U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(198U);
    msg.time = 0.758212076068;
    msg.x = 0.116430085357;
    msg.y = 0.235280867893;
    msg.z = 0.769285808815;
    msg.timestep = 0.860059389968;

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
    msg.setTimeStamp(0.802388104494);
    msg.setSource(63675U);
    msg.setSourceEntity(193U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(92U);
    msg.time = 0.362419182877;
    msg.x = 0.398239069412;
    msg.y = 0.26093329311;
    msg.z = 0.710839494702;
    msg.timestep = 0.041925276345;

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
    msg.setTimeStamp(0.00924036194556);
    msg.setSource(14871U);
    msg.setSourceEntity(31U);
    msg.setDestination(3522U);
    msg.setDestinationEntity(241U);
    msg.time = 0.622944517813;
    msg.x = 0.0877923552163;
    msg.y = 0.859896973155;
    msg.z = 0.711074058508;
    msg.timestep = 0.800110671775;

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
    msg.setTimeStamp(0.881126380189);
    msg.setSource(13293U);
    msg.setSourceEntity(24U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(241U);
    msg.time = 0.487581981814;
    msg.x = 0.485585517236;
    msg.y = 0.0814294462905;
    msg.z = 0.803936957937;

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
    msg.setTimeStamp(0.408228817485);
    msg.setSource(10917U);
    msg.setSourceEntity(41U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(131U);
    msg.time = 0.0429467454137;
    msg.x = 0.937426763873;
    msg.y = 0.208374564677;
    msg.z = 0.312274602124;

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
    msg.setTimeStamp(0.650946143705);
    msg.setSource(29062U);
    msg.setSourceEntity(122U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(1U);
    msg.time = 0.138867514158;
    msg.x = 0.0571393781471;
    msg.y = 0.206720932619;
    msg.z = 0.746705328446;

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
    msg.setTimeStamp(0.235179354442);
    msg.setSource(46848U);
    msg.setSourceEntity(173U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(200U);
    msg.time = 0.123152063051;
    msg.x = 0.600330530808;
    msg.y = 0.541518917114;
    msg.z = 0.177324819793;

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
    msg.setTimeStamp(0.113180085077);
    msg.setSource(12759U);
    msg.setSourceEntity(185U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(188U);
    msg.time = 0.997861790246;
    msg.x = 0.844914399589;
    msg.y = 0.0196738888475;
    msg.z = 0.46946223866;

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
    msg.setTimeStamp(0.930152586355);
    msg.setSource(32209U);
    msg.setSourceEntity(174U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(43U);
    msg.time = 0.745844932347;
    msg.x = 0.284506805068;
    msg.y = 0.87959279289;
    msg.z = 0.875069121021;

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
    msg.setTimeStamp(0.514539695549);
    msg.setSource(52467U);
    msg.setSourceEntity(13U);
    msg.setDestination(50740U);
    msg.setDestinationEntity(140U);
    msg.time = 0.982639742479;
    msg.x = 0.84630912684;
    msg.y = 0.413344038083;
    msg.z = 0.586531415662;

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
    msg.setTimeStamp(0.00653201206208);
    msg.setSource(54691U);
    msg.setSourceEntity(74U);
    msg.setDestination(15874U);
    msg.setDestinationEntity(218U);
    msg.time = 0.60276536287;
    msg.x = 0.148568396315;
    msg.y = 0.536158661667;
    msg.z = 0.351867695482;

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
    msg.setTimeStamp(0.602163373385);
    msg.setSource(13859U);
    msg.setSourceEntity(76U);
    msg.setDestination(21790U);
    msg.setDestinationEntity(101U);
    msg.time = 0.251736172059;
    msg.x = 0.143703477658;
    msg.y = 0.00235135269388;
    msg.z = 0.581914998025;

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
    msg.setTimeStamp(0.360396142712);
    msg.setSource(59309U);
    msg.setSourceEntity(181U);
    msg.setDestination(26333U);
    msg.setDestinationEntity(252U);
    msg.validity = 137U;
    msg.x = 0.776545162147;
    msg.y = 0.989298105767;
    msg.z = 0.0584093906873;

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
    msg.setTimeStamp(0.701456154993);
    msg.setSource(6326U);
    msg.setSourceEntity(205U);
    msg.setDestination(24396U);
    msg.setDestinationEntity(148U);
    msg.validity = 76U;
    msg.x = 0.413631258;
    msg.y = 0.269841303901;
    msg.z = 0.996113178561;

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
    msg.setTimeStamp(0.297878924981);
    msg.setSource(17749U);
    msg.setSourceEntity(60U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(228U);
    msg.validity = 201U;
    msg.x = 0.0156298762337;
    msg.y = 0.994800788259;
    msg.z = 0.286420968695;

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
    msg.setTimeStamp(0.388463875072);
    msg.setSource(63491U);
    msg.setSourceEntity(134U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(164U);
    msg.validity = 7U;
    msg.x = 0.937209975695;
    msg.y = 0.48236535791;
    msg.z = 0.24824869748;

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
    msg.setTimeStamp(0.155244939851);
    msg.setSource(23173U);
    msg.setSourceEntity(60U);
    msg.setDestination(15535U);
    msg.setDestinationEntity(16U);
    msg.validity = 113U;
    msg.x = 0.448621060475;
    msg.y = 0.576485613535;
    msg.z = 0.434269263016;

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
    msg.setTimeStamp(0.108023009307);
    msg.setSource(51490U);
    msg.setSourceEntity(139U);
    msg.setDestination(48836U);
    msg.setDestinationEntity(114U);
    msg.validity = 209U;
    msg.x = 0.164717363308;
    msg.y = 0.108681774124;
    msg.z = 0.964348495429;

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
    msg.setTimeStamp(0.0382354118651);
    msg.setSource(32325U);
    msg.setSourceEntity(174U);
    msg.setDestination(4744U);
    msg.setDestinationEntity(146U);
    msg.time = 0.45616504646;
    msg.x = 0.91990533429;
    msg.y = 0.350491253201;
    msg.z = 0.450006607722;

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
    msg.setTimeStamp(0.762343980928);
    msg.setSource(54507U);
    msg.setSourceEntity(180U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(182U);
    msg.time = 0.229462754225;
    msg.x = 0.197700942451;
    msg.y = 0.0525165629565;
    msg.z = 0.71482836287;

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
    msg.setTimeStamp(0.803686590046);
    msg.setSource(31250U);
    msg.setSourceEntity(160U);
    msg.setDestination(18330U);
    msg.setDestinationEntity(244U);
    msg.time = 0.537587198801;
    msg.x = 0.523592098421;
    msg.y = 0.999070956668;
    msg.z = 0.0727728086048;

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
    msg.setTimeStamp(0.580615252642);
    msg.setSource(16283U);
    msg.setSourceEntity(148U);
    msg.setDestination(56783U);
    msg.setDestinationEntity(234U);
    msg.validity = 85U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.971349760441;
    tmp_msg_0.y = 0.834745209339;
    tmp_msg_0.z = 0.671786590154;
    tmp_msg_0.phi = 0.395342785901;
    tmp_msg_0.theta = 0.526392835265;
    tmp_msg_0.psi = 0.470866997636;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.410322296141;
    tmp_msg_1.beam_height = 0.044402003533;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.414014216619;

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
    msg.setTimeStamp(0.189990949979);
    msg.setSource(30690U);
    msg.setSourceEntity(48U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(35U);
    msg.validity = 27U;
    msg.value = 0.361762499889;

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
    msg.setTimeStamp(0.189470103124);
    msg.setSource(65480U);
    msg.setSourceEntity(95U);
    msg.setDestination(55762U);
    msg.setDestinationEntity(253U);
    msg.validity = 109U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0339412646783;
    tmp_msg_0.y = 0.148027268639;
    tmp_msg_0.z = 0.726384219211;
    tmp_msg_0.phi = 0.17446700678;
    tmp_msg_0.theta = 0.580054839618;
    tmp_msg_0.psi = 0.259923358505;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.400843347429;

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
    msg.setTimeStamp(0.348873866161);
    msg.setSource(53490U);
    msg.setSourceEntity(136U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(94U);
    msg.value = 0.804324446476;

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
    msg.setTimeStamp(0.449781917626);
    msg.setSource(25420U);
    msg.setSourceEntity(99U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(156U);
    msg.value = 0.165459233802;

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
    msg.setTimeStamp(0.858196299914);
    msg.setSource(62641U);
    msg.setSourceEntity(81U);
    msg.setDestination(50372U);
    msg.setDestinationEntity(181U);
    msg.value = 0.663472223411;

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
    msg.setTimeStamp(0.537698300078);
    msg.setSource(50946U);
    msg.setSourceEntity(250U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(108U);
    msg.value = 0.29143611393;

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
    msg.setTimeStamp(0.593831757571);
    msg.setSource(36338U);
    msg.setSourceEntity(106U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0369289570559;

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
    msg.setTimeStamp(0.731351389916);
    msg.setSource(39069U);
    msg.setSourceEntity(85U);
    msg.setDestination(59572U);
    msg.setDestinationEntity(76U);
    msg.value = 0.187969569823;

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
    msg.setTimeStamp(0.929815235367);
    msg.setSource(62694U);
    msg.setSourceEntity(172U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(111U);
    msg.value = 0.852033160011;

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
    msg.setTimeStamp(0.2942979825);
    msg.setSource(63878U);
    msg.setSourceEntity(169U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(219U);
    msg.value = 0.613653045547;

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
    msg.setTimeStamp(0.803331241389);
    msg.setSource(21681U);
    msg.setSourceEntity(54U);
    msg.setDestination(38553U);
    msg.setDestinationEntity(226U);
    msg.value = 0.73276829193;

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
    msg.setTimeStamp(0.953554293665);
    msg.setSource(11909U);
    msg.setSourceEntity(43U);
    msg.setDestination(57819U);
    msg.setDestinationEntity(137U);
    msg.value = 0.101734020991;

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
    msg.setTimeStamp(0.873112331968);
    msg.setSource(40561U);
    msg.setSourceEntity(106U);
    msg.setDestination(29473U);
    msg.setDestinationEntity(65U);
    msg.value = 0.468584489901;

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
    msg.setTimeStamp(0.117414234726);
    msg.setSource(11586U);
    msg.setSourceEntity(23U);
    msg.setDestination(455U);
    msg.setDestinationEntity(192U);
    msg.value = 0.97032047102;

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
    msg.setTimeStamp(0.120312507345);
    msg.setSource(31636U);
    msg.setSourceEntity(142U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(120U);
    msg.value = 0.217406526792;

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
    msg.setTimeStamp(0.958368580475);
    msg.setSource(43261U);
    msg.setSourceEntity(158U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0416292262605;

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
    msg.setTimeStamp(0.969329853079);
    msg.setSource(50073U);
    msg.setSourceEntity(97U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(222U);
    msg.value = 0.837271227206;

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
    msg.setTimeStamp(0.545441460251);
    msg.setSource(31712U);
    msg.setSourceEntity(11U);
    msg.setDestination(16444U);
    msg.setDestinationEntity(252U);
    msg.value = 0.234025842559;

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
    msg.setTimeStamp(0.309957811921);
    msg.setSource(45275U);
    msg.setSourceEntity(29U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(206U);
    msg.value = 0.966535272212;

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
    msg.setTimeStamp(0.840551176587);
    msg.setSource(40983U);
    msg.setSourceEntity(171U);
    msg.setDestination(60285U);
    msg.setDestinationEntity(26U);
    msg.value = 0.41510944165;

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
    msg.setTimeStamp(0.208637708007);
    msg.setSource(22253U);
    msg.setSourceEntity(17U);
    msg.setDestination(39102U);
    msg.setDestinationEntity(204U);
    msg.value = 0.885284066919;

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
    msg.setTimeStamp(0.124940003912);
    msg.setSource(59543U);
    msg.setSourceEntity(218U);
    msg.setDestination(13963U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0292908276381;

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
    msg.setTimeStamp(0.828853710928);
    msg.setSource(59224U);
    msg.setSourceEntity(201U);
    msg.setDestination(37944U);
    msg.setDestinationEntity(73U);
    msg.value = 0.462489614591;

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
    msg.setTimeStamp(0.999465924777);
    msg.setSource(53046U);
    msg.setSourceEntity(146U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(60U);
    msg.value = 0.904753720763;

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
    msg.setTimeStamp(0.399957530827);
    msg.setSource(2467U);
    msg.setSourceEntity(84U);
    msg.setDestination(8692U);
    msg.setDestinationEntity(150U);
    msg.value = 0.620464050545;

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
    msg.setTimeStamp(0.785677785515);
    msg.setSource(14789U);
    msg.setSourceEntity(158U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(93U);
    msg.value = 0.757416879984;

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
    msg.setTimeStamp(0.0759989530548);
    msg.setSource(16345U);
    msg.setSourceEntity(6U);
    msg.setDestination(23474U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.0893403743241;
    msg.speed = 0.113446036157;
    msg.turbulence = 0.980565184915;

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
    msg.setTimeStamp(0.626134028924);
    msg.setSource(46044U);
    msg.setSourceEntity(161U);
    msg.setDestination(12553U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.188869115218;
    msg.speed = 0.200409145624;
    msg.turbulence = 0.962254115784;

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
    msg.setTimeStamp(0.652858409298);
    msg.setSource(17438U);
    msg.setSourceEntity(0U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(82U);
    msg.direction = 0.691729961504;
    msg.speed = 0.0169420952551;
    msg.turbulence = 0.502411977113;

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
    msg.setTimeStamp(0.220596807302);
    msg.setSource(20939U);
    msg.setSourceEntity(94U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(122U);
    msg.value = 0.46633851454;

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
    msg.setTimeStamp(0.0122935344302);
    msg.setSource(42932U);
    msg.setSourceEntity(185U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(253U);
    msg.value = 0.19601809004;

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
    msg.setTimeStamp(0.140440206389);
    msg.setSource(45838U);
    msg.setSourceEntity(58U);
    msg.setDestination(57748U);
    msg.setDestinationEntity(79U);
    msg.value = 0.127846105136;

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
    msg.setTimeStamp(0.984706485634);
    msg.setSource(46913U);
    msg.setSourceEntity(1U);
    msg.setDestination(48190U);
    msg.setDestinationEntity(134U);
    msg.value.assign("KHXTECLIXPASMMFFDEFTYJMKEBTQGJCJQAHTPUVZUVFUWZYATADUDNQKAAVDOOBLPPSYMDWIHSGNKIEBTXWLXSZPMOZMKGBGUSNQZKIDHOCOWNFHCJGCWXKJIXCROJMOYORNGUYUBIHPDLSELKZXTCODARWTGACHTGIVDPTUHXLYNPQVVBPHESGEFRUQAIYEJFARJOPLWVRMKLMNNMFWZUBIYECFJRSZEIQVNH");

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
    msg.setTimeStamp(0.353587609754);
    msg.setSource(41658U);
    msg.setSourceEntity(133U);
    msg.setDestination(15226U);
    msg.setDestinationEntity(243U);
    msg.value.assign("SFGWRZMTLDQSVOGBVJSSTQPKCKEOTOUOVNPZBAOYUUZXGSASMVENJKFHXWNTNZHFRJVBHKDQWILNMXLWGDTFENZDRHIJITGIFQLZGEBKJIRYMWKRZASJNIYWBMPLQAHPQXVMLPGVRC");

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
    msg.setTimeStamp(0.0164449242795);
    msg.setSource(1071U);
    msg.setSourceEntity(235U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(16U);
    msg.value.assign("WHBSKGELZAGYXMLOJUFNCOPQWFWASGYFTDQCWQAQSFNSBCKVMVDTXWFMKCTXHDVIIXLXCGGJTZCVIEYTKHQJZCMOOUPGSMIHNCAGIBHRKMTRVOVXJLRTCWXETFVUUUJHSLLQKBSZMPHXUVBDYBRPOPMJMWENHZBF");

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
    msg.setTimeStamp(0.759774454871);
    msg.setSource(50232U);
    msg.setSourceEntity(43U);
    msg.setDestination(58016U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {-9, -87, -30, 80, 124, -25, -109, 109, -103, -92, 71, -93, -80, 2, -28, 122, 91, -101, 105, -42, -111, -64, 90, -83, 89, -36, -96, -31, 81, -108, -20, -78, -39, -84, -47, 12, 29, -115, -120, -106, 21, 9, -58, 68, 97, -31, 81, 40, -19, -10, -80, 63, -27, 25, 12, 8, -2, 70, 3, 120, 111, -58, 119, 110, -107, -100, 99, -61, -62, -124, 78, 89, -55, -46, -57, -60, 68, 40, -69, -17, -5, -89, 15, -117, 98, 86, 71, 112, -77, -107, 80, -63, 95, -2, 57, -12, -78, -19, 106, 33, 92, -35, -64, 124, -123, 117, 115, -3, -101, -62, 22, -68, -69, -116, 42, 25, 52, -53, 68, 8, 86, 59, -109, -97, -91, 52, 21, 39, 0, -48, -94, -90, 53, -97, -65, -124, -106, -103, -68, -23, 53, -35, -71, -76, 105, -79, 12, -108, 14, -46, 69, 57, -102, 0, -94, 124, -5, 67, 43, 26, 77, 45, 7, -18, 60, 84, -51, -114, -89, 3, -55, 95, 11, 19, -105, 31, 120, -31, -114, -123, 99, -67, -62, -60, -37, 64, -14, -118, 6, -7, -74, 99, -89, -36, 62, 12, 7, 11, -19, -31, 77, -27, 21, 8, -113, 114, -87, 21, 49, -4, -70, -3, 104, -96, 120, 92, 7, 117, 36, -4};
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
    msg.setTimeStamp(0.601203428676);
    msg.setSource(17230U);
    msg.setSourceEntity(236U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(91U);
    const char tmp_msg_0[] = {-69, 120, -99, 56, -78, -108, -42, -74, -58, -69, 114, -109, 102, 20, -14, 107, 32, 31, 34, 118, -77, 5, -46, -97, 81, 83, 89, 4, -81, 47, 55, 39, -113, 115, 26, -91, 10, 89, 19, -29, 8, 83, 42, 23, 64, -21, 119, -111, -103, 1, 40, 46, 15, -54, 75, 93, -127, 52, -91, 52, -49, 2, -101, -22, 102, 115};
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
    msg.setTimeStamp(0.510958349613);
    msg.setSource(15172U);
    msg.setSourceEntity(168U);
    msg.setDestination(56450U);
    msg.setDestinationEntity(77U);
    const char tmp_msg_0[] = {-53, -27, -38, -58, 33, 29, 112, -121, -19, 124, -102, 36, -106, -46, -126, 36, -93, 92, 126, -41, -7, -126, -32, -127, -112, 123, 24, 116, 84, 68, 57, -118, 90, -33, 86, 113, -37, 115, 15, -41, -38, 56, 123, -125, 47, 65, 2, -120, 28, 103, 45, -42, 86, 45, -119, -118, -67, 47, -55, 0, 74, -24, -52, 7, -50, 25, -113, 88, 62, 66, 44, 14, 80, -85, 106, 31, 38, -51, -122, -128, 12, 92, 116, -4, -75, 74, 56, -92, -64, 40, 52, 42, -58, 71, 39, -115, 56, -86, -80, 37, 107, 64, -48, -25, -122, 24, -54, -52, 122, -58, -67, -81, 61, -60, -105, 121, 120, -126, -49, -6, 74, -114, 73, -85, -128, 55, -26, -97, 58, -85, 111, 51, -25, 16, 89, -33, -54, -78, 87, 74, -88, 86, 20, -80, 84};
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
    msg.setTimeStamp(0.572387070985);
    msg.setSource(28880U);
    msg.setSourceEntity(252U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(211U);
    msg.type = 108U;
    msg.frequency = 3482195211U;
    msg.min_range = 6171U;
    msg.max_range = 33650U;
    msg.bits_per_point = 199U;
    msg.scale_factor = 0.278510720677;
    const char tmp_msg_0[] = {66, -46, 41, 21, 69, -5, 4, -88, 25, 52, -117, 22, -72, 84, -32, -113, 4, -3, 78, 93, -110, 95, -68, -36, 25, -73, -3, 82, -28, -34, 111, 118, 100, -127, 75, 11, 88, -8, -4, -128, -13, 109, -13, 23, -121, -81, 60, -123, 100, 51, 64, -76, 112, 96, -103, 92, -127, -38, 95, -5, -71, -44, -105, -122, -18, -47, -21, 68, 107, -28, 12, 116, -87, 34, 116, 74, -5, 46, -106, 81, -54, -57, 118, 124, 16, -122, -44, 2, 69, 80, -87, -29, 122, 63, 65, -43, -87, -59, 87, 35, 22, -27, 42, 93, 9, 57, -3, 28, -120, 0, -29, -120, -106, -61, -78, -62, -17, 33, -66, 52, -98, -12, -74, 85, -75, 30, -6, -62, 6, -71, 91, 63, -64, 61, -30, -74, -122, 45, -104, -1, 80, 108, -108, -98, -101, -51, 87, -49};
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
    msg.setTimeStamp(0.312311359818);
    msg.setSource(21221U);
    msg.setSourceEntity(146U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(0U);
    msg.type = 121U;
    msg.frequency = 1821484593U;
    msg.min_range = 37271U;
    msg.max_range = 29780U;
    msg.bits_per_point = 71U;
    msg.scale_factor = 0.00568363542738;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.617187741593;
    tmp_msg_0.beam_height = 0.724193579136;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-45, 3, -36, -61, -107, 27, 84, -117, 28, 117, -85, 90, -97, 104, -122, 34, 41, 45, -87, -17, -27, -50, -93, 96, -5, 24, 117, 10, -35, 22, 35, 22, -7, 48, 100, -54, -128, 72, -105, -76, 95, -126, 92, 28, 121, -47, -76, -17, 38, -25, 79, -14, -55, 112, -70, -14, 81};
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
    msg.setTimeStamp(0.660104635059);
    msg.setSource(10757U);
    msg.setSourceEntity(162U);
    msg.setDestination(65074U);
    msg.setDestinationEntity(176U);
    msg.type = 74U;
    msg.frequency = 2453067156U;
    msg.min_range = 53381U;
    msg.max_range = 57304U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.308486748592;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.567013608485;
    tmp_msg_0.beam_height = 0.00228194637492;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {34, -122, 96, 80, 80, -99, -21, 32, 16, -31, -75, 87, -6, -123, 110, -51, -47, 54, 47, -80, -111, 81, 88, -100, 44, -98, -127, -25, -44, -86, 113, -94, 56, -10, 40, -93, -11, 33, 44, 78, -50, -36, 71, -109, 96, -123, 35, 60, 7, -94, 98, -76, -44, -21, -66, 99, -59, -91, 23, 83, 27, -91, -119, 2, 116, -122, -54, 27, 23, 30, 81, -49, 121, -95, 48, 90, -31, 32, -7, -72, 76, 29, 106, -86, -104, 42, 65, 16, 120, -1, -93, -99, -42, -62, -114, -82, 114, -92, 104, 81, 58, 71, 30, -73, 108, -4, -111, -66, 122, 120, 62, 4, -109, -42, -1, 105, -103, -101, -111, -122, 102, -82, -73, -115, 22, 67, 46, -119, 28, 40, -62, -28, -125, -65, -95, 82, 41, 19, 123, -120, -56};
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
    msg.setTimeStamp(0.194232252695);
    msg.setSource(20364U);
    msg.setSourceEntity(130U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.46807252233);
    msg.setSource(40550U);
    msg.setSourceEntity(187U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.517575136275);
    msg.setSource(7952U);
    msg.setSourceEntity(38U);
    msg.setDestination(4996U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.937830135742);
    msg.setSource(52520U);
    msg.setSourceEntity(151U);
    msg.setDestination(63973U);
    msg.setDestinationEntity(102U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.681810023438);
    msg.setSource(57096U);
    msg.setSourceEntity(85U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(109U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.840791241384);
    msg.setSource(8892U);
    msg.setSourceEntity(137U);
    msg.setDestination(62638U);
    msg.setDestinationEntity(192U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.477570669428);
    msg.setSource(12652U);
    msg.setSourceEntity(203U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(37U);
    msg.value = 0.885274094195;
    msg.confidence = 0.57529432133;
    msg.opmodes.assign("ZDJCZQMUWQBTOQMKWATNTHZJ");

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
    msg.setTimeStamp(0.908751096082);
    msg.setSource(28757U);
    msg.setSourceEntity(41U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(102U);
    msg.value = 0.789322785024;
    msg.confidence = 0.585849603579;
    msg.opmodes.assign("WVFILGMKPDBBNIRYWWPGCJOKHODHTHQTSUIXMOGOI");

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
    msg.setTimeStamp(0.767601700211);
    msg.setSource(34916U);
    msg.setSourceEntity(110U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(221U);
    msg.value = 0.546316419374;
    msg.confidence = 0.893141512992;
    msg.opmodes.assign("UHBBDUTJOGVX");

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
    msg.setTimeStamp(0.613370153849);
    msg.setSource(41543U);
    msg.setSourceEntity(150U);
    msg.setDestination(38211U);
    msg.setDestinationEntity(228U);
    msg.itow = 1623307365U;
    msg.lat = 0.370133517531;
    msg.lon = 0.711405572108;
    msg.height_ell = 0.982836138392;
    msg.height_sea = 0.932308271885;
    msg.hacc = 0.562060870049;
    msg.vacc = 0.00121357809225;
    msg.vel_n = 0.340680409619;
    msg.vel_e = 0.461805657515;
    msg.vel_d = 0.963029650009;
    msg.speed = 0.618727874127;
    msg.gspeed = 0.333972465009;
    msg.heading = 0.917078736825;
    msg.sacc = 0.715423329438;
    msg.cacc = 0.737159615325;

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
    msg.setTimeStamp(0.655094448565);
    msg.setSource(9073U);
    msg.setSourceEntity(149U);
    msg.setDestination(65422U);
    msg.setDestinationEntity(251U);
    msg.itow = 3633452484U;
    msg.lat = 0.691694314213;
    msg.lon = 0.13811542754;
    msg.height_ell = 0.643601830125;
    msg.height_sea = 0.401921314991;
    msg.hacc = 0.423962350528;
    msg.vacc = 0.442919248745;
    msg.vel_n = 0.121800596586;
    msg.vel_e = 0.485921516578;
    msg.vel_d = 0.336617172199;
    msg.speed = 0.409389759905;
    msg.gspeed = 0.0679563235488;
    msg.heading = 0.632854774659;
    msg.sacc = 0.580832785619;
    msg.cacc = 0.028994871771;

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
    msg.setTimeStamp(0.939004897488);
    msg.setSource(46068U);
    msg.setSourceEntity(0U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(65U);
    msg.itow = 927912644U;
    msg.lat = 0.22876681065;
    msg.lon = 0.195434940068;
    msg.height_ell = 0.973216819703;
    msg.height_sea = 0.257955209111;
    msg.hacc = 0.811599741607;
    msg.vacc = 0.104496155004;
    msg.vel_n = 0.811776342303;
    msg.vel_e = 0.217572436425;
    msg.vel_d = 0.670244401276;
    msg.speed = 0.217278575394;
    msg.gspeed = 0.330752488578;
    msg.heading = 0.653629667941;
    msg.sacc = 0.618010173953;
    msg.cacc = 0.271091079037;

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
    msg.setTimeStamp(0.54623661691);
    msg.setSource(10675U);
    msg.setSourceEntity(132U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(118U);
    msg.id = 153U;
    msg.value = 0.221825028208;

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
    msg.setTimeStamp(0.407379478452);
    msg.setSource(2342U);
    msg.setSourceEntity(138U);
    msg.setDestination(38273U);
    msg.setDestinationEntity(35U);
    msg.id = 234U;
    msg.value = 0.217588676866;

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
    msg.setTimeStamp(0.659043704027);
    msg.setSource(41570U);
    msg.setSourceEntity(230U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(40U);
    msg.id = 88U;
    msg.value = 0.816056018522;

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
    msg.setTimeStamp(0.600129248163);
    msg.setSource(58170U);
    msg.setSourceEntity(103U);
    msg.setDestination(34866U);
    msg.setDestinationEntity(61U);
    msg.x = 0.173640836854;
    msg.y = 0.558397750627;
    msg.z = 0.450649663683;
    msg.phi = 0.345197108442;
    msg.theta = 0.942613190453;
    msg.psi = 0.10502430174;

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
    msg.setTimeStamp(0.582438947602);
    msg.setSource(32574U);
    msg.setSourceEntity(188U);
    msg.setDestination(27827U);
    msg.setDestinationEntity(6U);
    msg.x = 0.950009791715;
    msg.y = 0.90329418412;
    msg.z = 0.501097932112;
    msg.phi = 0.544612887062;
    msg.theta = 0.00474619316128;
    msg.psi = 0.00249275186196;

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
    msg.setTimeStamp(0.0734108446791);
    msg.setSource(20436U);
    msg.setSourceEntity(17U);
    msg.setDestination(25383U);
    msg.setDestinationEntity(128U);
    msg.x = 0.350266599613;
    msg.y = 0.905593939506;
    msg.z = 0.158332088559;
    msg.phi = 0.903725074384;
    msg.theta = 0.565269158379;
    msg.psi = 0.664468406474;

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
    msg.setTimeStamp(0.15211011654);
    msg.setSource(28754U);
    msg.setSourceEntity(211U);
    msg.setDestination(30503U);
    msg.setDestinationEntity(128U);
    msg.beam_width = 0.404296245444;
    msg.beam_height = 0.902527303158;

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
    msg.setTimeStamp(0.763581223928);
    msg.setSource(8423U);
    msg.setSourceEntity(39U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(166U);
    msg.beam_width = 0.526259502841;
    msg.beam_height = 0.824931733206;

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
    msg.setTimeStamp(0.237757530676);
    msg.setSource(18662U);
    msg.setSourceEntity(15U);
    msg.setDestination(8836U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.422741755653;
    msg.beam_height = 0.50790462388;

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
    msg.setTimeStamp(0.016668094736);
    msg.setSource(51669U);
    msg.setSourceEntity(252U);
    msg.setDestination(21608U);
    msg.setDestinationEntity(28U);
    msg.sane = 115U;

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
    msg.setTimeStamp(0.231555716504);
    msg.setSource(62921U);
    msg.setSourceEntity(68U);
    msg.setDestination(61454U);
    msg.setDestinationEntity(75U);
    msg.sane = 112U;

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
    msg.setTimeStamp(0.443855972857);
    msg.setSource(42607U);
    msg.setSourceEntity(4U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(235U);
    msg.sane = 224U;

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
    msg.setTimeStamp(0.277025158947);
    msg.setSource(36523U);
    msg.setSourceEntity(67U);
    msg.setDestination(48052U);
    msg.setDestinationEntity(107U);
    msg.value = 0.19186884733;

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
    msg.setTimeStamp(0.44791260054);
    msg.setSource(44779U);
    msg.setSourceEntity(50U);
    msg.setDestination(56382U);
    msg.setDestinationEntity(73U);
    msg.value = 0.716927154579;

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
    msg.setTimeStamp(0.327386348101);
    msg.setSource(39110U);
    msg.setSourceEntity(107U);
    msg.setDestination(22497U);
    msg.setDestinationEntity(1U);
    msg.value = 0.220735484985;

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
    msg.setTimeStamp(0.758798830207);
    msg.setSource(43576U);
    msg.setSourceEntity(1U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(138U);
    msg.value = 0.836890015327;

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
    msg.setTimeStamp(0.611262111718);
    msg.setSource(6598U);
    msg.setSourceEntity(167U);
    msg.setDestination(35706U);
    msg.setDestinationEntity(90U);
    msg.value = 0.716391501088;

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
    msg.setTimeStamp(0.389517612603);
    msg.setSource(28512U);
    msg.setSourceEntity(215U);
    msg.setDestination(19081U);
    msg.setDestinationEntity(5U);
    msg.value = 0.436717155101;

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
    msg.setTimeStamp(0.417681861309);
    msg.setSource(46706U);
    msg.setSourceEntity(220U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(26U);
    msg.value = 0.179040234154;

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
    msg.setTimeStamp(0.277814809902);
    msg.setSource(9146U);
    msg.setSourceEntity(210U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(53U);
    msg.value = 0.91041865979;

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
    msg.setTimeStamp(0.789749948584);
    msg.setSource(39866U);
    msg.setSourceEntity(66U);
    msg.setDestination(48270U);
    msg.setDestinationEntity(104U);
    msg.value = 0.948806506477;

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
    msg.setTimeStamp(0.305802637993);
    msg.setSource(10949U);
    msg.setSourceEntity(129U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(193U);
    msg.value = 0.862333858676;

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
    msg.setTimeStamp(0.575990809231);
    msg.setSource(64072U);
    msg.setSourceEntity(102U);
    msg.setDestination(47078U);
    msg.setDestinationEntity(241U);
    msg.value = 0.887573231091;

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
    msg.setTimeStamp(0.118777473488);
    msg.setSource(19803U);
    msg.setSourceEntity(243U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(86U);
    msg.value = 0.152723982999;

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
    msg.setTimeStamp(0.0355257459551);
    msg.setSource(34169U);
    msg.setSourceEntity(172U);
    msg.setDestination(26861U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0906023122294;

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
    msg.setTimeStamp(0.804412149392);
    msg.setSource(3020U);
    msg.setSourceEntity(17U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(219U);
    msg.value = 0.749103720082;

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
    msg.setTimeStamp(0.831267669901);
    msg.setSource(28686U);
    msg.setSourceEntity(45U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(167U);
    msg.value = 0.775802910263;

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
    msg.setTimeStamp(0.955460764752);
    msg.setSource(46534U);
    msg.setSourceEntity(204U);
    msg.setDestination(50641U);
    msg.setDestinationEntity(180U);
    msg.value = 0.989661031635;

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
    msg.setTimeStamp(0.0450144087132);
    msg.setSource(20631U);
    msg.setSourceEntity(80U);
    msg.setDestination(43497U);
    msg.setDestinationEntity(58U);
    msg.value = 0.932789645631;

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
    msg.setTimeStamp(0.0940403192133);
    msg.setSource(28806U);
    msg.setSourceEntity(96U);
    msg.setDestination(22117U);
    msg.setDestinationEntity(81U);
    msg.value = 0.28290306785;

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
    msg.setTimeStamp(0.282225295316);
    msg.setSource(3069U);
    msg.setSourceEntity(28U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(55U);
    msg.value = 0.639802419835;

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
    msg.setTimeStamp(0.105536677581);
    msg.setSource(50687U);
    msg.setSourceEntity(12U);
    msg.setDestination(35506U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0743997996277;

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
    msg.setTimeStamp(0.0907178139516);
    msg.setSource(56650U);
    msg.setSourceEntity(156U);
    msg.setDestination(17451U);
    msg.setDestinationEntity(188U);
    msg.value = 0.17042598249;

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
    msg.setTimeStamp(0.0763739097327);
    msg.setSource(19495U);
    msg.setSourceEntity(142U);
    msg.setDestination(4469U);
    msg.setDestinationEntity(221U);
    msg.value = 0.698813601365;

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
    msg.setTimeStamp(0.975256638908);
    msg.setSource(32376U);
    msg.setSourceEntity(239U);
    msg.setDestination(17213U);
    msg.setDestinationEntity(47U);
    msg.value = 0.00855395803621;

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
    msg.setTimeStamp(0.771366913725);
    msg.setSource(5271U);
    msg.setSourceEntity(56U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(36U);
    msg.value = 0.830598986369;

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
    msg.setTimeStamp(0.548473088647);
    msg.setSource(4734U);
    msg.setSourceEntity(207U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(3U);
    msg.validity = 17224U;
    msg.type = 9U;
    msg.tow = 2314255694U;
    msg.base_lat = 0.373001872599;
    msg.base_lon = 0.0895646303458;
    msg.base_height = 0.0460620470818;
    msg.n = 0.123933602738;
    msg.e = 0.667877786905;
    msg.d = 0.539250412646;
    msg.v_n = 0.446371067073;
    msg.v_e = 0.0680047208369;
    msg.v_d = 0.225492488095;
    msg.satellites = 101U;
    msg.iar_hyp = 34279U;
    msg.iar_ratio = 0.269063372888;

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
    msg.setTimeStamp(0.901020162128);
    msg.setSource(42417U);
    msg.setSourceEntity(105U);
    msg.setDestination(10942U);
    msg.setDestinationEntity(35U);
    msg.validity = 50269U;
    msg.type = 77U;
    msg.tow = 1647091758U;
    msg.base_lat = 0.967115226621;
    msg.base_lon = 0.446218015321;
    msg.base_height = 0.548458761332;
    msg.n = 0.992007651764;
    msg.e = 0.314830183605;
    msg.d = 0.995191901027;
    msg.v_n = 0.828676302424;
    msg.v_e = 0.180533382714;
    msg.v_d = 0.251424120457;
    msg.satellites = 1U;
    msg.iar_hyp = 40276U;
    msg.iar_ratio = 0.293364703992;

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
    msg.setTimeStamp(0.131305595906);
    msg.setSource(48809U);
    msg.setSourceEntity(24U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(20U);
    msg.validity = 34705U;
    msg.type = 14U;
    msg.tow = 3312926572U;
    msg.base_lat = 0.197218624454;
    msg.base_lon = 0.586787958922;
    msg.base_height = 0.58357649357;
    msg.n = 0.0869425279823;
    msg.e = 0.269537336216;
    msg.d = 0.173766902962;
    msg.v_n = 0.406690760827;
    msg.v_e = 0.840485647743;
    msg.v_d = 0.6003329794;
    msg.satellites = 158U;
    msg.iar_hyp = 27689U;
    msg.iar_ratio = 0.906302190853;

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
    msg.setTimeStamp(0.591271468522);
    msg.setSource(64134U);
    msg.setSourceEntity(55U);
    msg.setDestination(13982U);
    msg.setDestinationEntity(160U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.757414175603;
    tmp_msg_0.lon = 0.692192674435;
    tmp_msg_0.height = 0.494316611318;
    tmp_msg_0.x = 0.523540456339;
    tmp_msg_0.y = 0.833015411575;
    tmp_msg_0.z = 0.947160780468;
    tmp_msg_0.phi = 0.596981036442;
    tmp_msg_0.theta = 0.714308947232;
    tmp_msg_0.psi = 0.931106976612;
    tmp_msg_0.u = 0.180252973087;
    tmp_msg_0.v = 0.453591778361;
    tmp_msg_0.w = 0.193879416047;
    tmp_msg_0.vx = 0.711880436405;
    tmp_msg_0.vy = 0.614608809415;
    tmp_msg_0.vz = 0.0601674382336;
    tmp_msg_0.p = 0.392871494128;
    tmp_msg_0.q = 0.0421361657303;
    tmp_msg_0.r = 0.760987916625;
    tmp_msg_0.depth = 0.0777803484745;
    tmp_msg_0.alt = 0.312076561267;
    msg.state.set(tmp_msg_0);
    msg.type = 146U;

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
    msg.setTimeStamp(0.0870844967627);
    msg.setSource(22995U);
    msg.setSourceEntity(245U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(12U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.772776932086;
    tmp_msg_0.lon = 0.516204613163;
    tmp_msg_0.height = 0.115350053605;
    tmp_msg_0.x = 0.202515121418;
    tmp_msg_0.y = 0.922021224832;
    tmp_msg_0.z = 0.346323257158;
    tmp_msg_0.phi = 0.358837361054;
    tmp_msg_0.theta = 0.108341147186;
    tmp_msg_0.psi = 0.34975936197;
    tmp_msg_0.u = 0.174474319731;
    tmp_msg_0.v = 0.84165492613;
    tmp_msg_0.w = 0.0105399605031;
    tmp_msg_0.vx = 0.492055413485;
    tmp_msg_0.vy = 0.16006225077;
    tmp_msg_0.vz = 0.10103027085;
    tmp_msg_0.p = 0.425203846476;
    tmp_msg_0.q = 0.297920285051;
    tmp_msg_0.r = 0.301630418719;
    tmp_msg_0.depth = 0.684998534182;
    tmp_msg_0.alt = 0.165238609863;
    msg.state.set(tmp_msg_0);
    msg.type = 139U;

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
    msg.setTimeStamp(0.461779195875);
    msg.setSource(14870U);
    msg.setSourceEntity(54U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(54U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.559577517506;
    tmp_msg_0.lon = 0.874330456068;
    tmp_msg_0.height = 0.380761627121;
    tmp_msg_0.x = 0.652200654041;
    tmp_msg_0.y = 0.191181386955;
    tmp_msg_0.z = 0.656669774151;
    tmp_msg_0.phi = 0.468050314476;
    tmp_msg_0.theta = 0.76766026946;
    tmp_msg_0.psi = 0.667361877017;
    tmp_msg_0.u = 0.421808473862;
    tmp_msg_0.v = 0.868337071413;
    tmp_msg_0.w = 0.00818218430693;
    tmp_msg_0.vx = 0.908138627137;
    tmp_msg_0.vy = 0.507555529847;
    tmp_msg_0.vz = 0.526606913121;
    tmp_msg_0.p = 0.740827401421;
    tmp_msg_0.q = 0.724291179702;
    tmp_msg_0.r = 0.636003667293;
    tmp_msg_0.depth = 0.406390858241;
    tmp_msg_0.alt = 0.570706484231;
    msg.state.set(tmp_msg_0);
    msg.type = 135U;

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
    msg.setTimeStamp(0.749001135904);
    msg.setSource(13404U);
    msg.setSourceEntity(115U);
    msg.setDestination(61090U);
    msg.setDestinationEntity(162U);
    msg.value = 0.809277323504;

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
    msg.setTimeStamp(0.485155694971);
    msg.setSource(44146U);
    msg.setSourceEntity(183U);
    msg.setDestination(7666U);
    msg.setDestinationEntity(70U);
    msg.value = 0.320726758316;

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
    msg.setTimeStamp(0.973804367964);
    msg.setSource(60766U);
    msg.setSourceEntity(194U);
    msg.setDestination(61831U);
    msg.setDestinationEntity(120U);
    msg.value = 0.840894040091;

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
    msg.setTimeStamp(0.430565498564);
    msg.setSource(15537U);
    msg.setSourceEntity(121U);
    msg.setDestination(58747U);
    msg.setDestinationEntity(169U);
    msg.value = 0.235425257533;

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
    msg.setTimeStamp(0.0157461642763);
    msg.setSource(37064U);
    msg.setSourceEntity(105U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(228U);
    msg.value = 0.578818787189;

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
    msg.setTimeStamp(0.129219638015);
    msg.setSource(364U);
    msg.setSourceEntity(11U);
    msg.setDestination(27230U);
    msg.setDestinationEntity(139U);
    msg.value = 0.208403786634;

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
    msg.setTimeStamp(0.455298879659);
    msg.setSource(29224U);
    msg.setSourceEntity(93U);
    msg.setDestination(40793U);
    msg.setDestinationEntity(176U);
    msg.value = 0.341878518052;

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
    msg.setTimeStamp(0.480524056048);
    msg.setSource(44646U);
    msg.setSourceEntity(195U);
    msg.setDestination(41896U);
    msg.setDestinationEntity(9U);
    msg.value = 0.697313552995;

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
    msg.setTimeStamp(0.49361734415);
    msg.setSource(21585U);
    msg.setSourceEntity(15U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(88U);
    msg.value = 0.374188838975;

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
    msg.setTimeStamp(0.43223006916);
    msg.setSource(36465U);
    msg.setSourceEntity(44U);
    msg.setDestination(56841U);
    msg.setDestinationEntity(233U);
    msg.value = 0.713165734914;

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
    msg.setTimeStamp(0.10726189599);
    msg.setSource(26085U);
    msg.setSourceEntity(60U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(122U);
    msg.value = 0.126501000055;

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
    msg.setTimeStamp(0.872024882659);
    msg.setSource(5302U);
    msg.setSourceEntity(126U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(67U);
    msg.value = 0.054941772534;

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
    msg.setTimeStamp(0.511077767915);
    msg.setSource(58505U);
    msg.setSourceEntity(220U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(169U);
    msg.value = 0.416628380503;

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
    msg.setTimeStamp(0.646411574396);
    msg.setSource(50408U);
    msg.setSourceEntity(238U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(4U);
    msg.value = 0.699778745048;

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
    msg.setTimeStamp(0.642878307499);
    msg.setSource(33712U);
    msg.setSourceEntity(234U);
    msg.setDestination(38505U);
    msg.setDestinationEntity(239U);
    msg.value = 0.47686144924;

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
    msg.setTimeStamp(0.338258936991);
    msg.setSource(31899U);
    msg.setSourceEntity(73U);
    msg.setDestination(34580U);
    msg.setDestinationEntity(117U);
    msg.id = 207U;
    msg.zoom = 128U;
    msg.action = 148U;

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
    msg.setTimeStamp(0.0373142914852);
    msg.setSource(20918U);
    msg.setSourceEntity(248U);
    msg.setDestination(46227U);
    msg.setDestinationEntity(252U);
    msg.id = 107U;
    msg.zoom = 155U;
    msg.action = 173U;

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
    msg.setTimeStamp(0.880991544945);
    msg.setSource(21181U);
    msg.setSourceEntity(150U);
    msg.setDestination(52474U);
    msg.setDestinationEntity(2U);
    msg.id = 116U;
    msg.zoom = 165U;
    msg.action = 2U;

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
    msg.setTimeStamp(0.955083412251);
    msg.setSource(46924U);
    msg.setSourceEntity(153U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(236U);
    msg.id = 144U;
    msg.value = 0.348211299715;

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
    msg.setTimeStamp(0.376640304525);
    msg.setSource(17434U);
    msg.setSourceEntity(206U);
    msg.setDestination(63375U);
    msg.setDestinationEntity(217U);
    msg.id = 13U;
    msg.value = 0.71825905802;

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
    msg.setTimeStamp(0.537900297609);
    msg.setSource(61469U);
    msg.setSourceEntity(147U);
    msg.setDestination(30896U);
    msg.setDestinationEntity(61U);
    msg.id = 193U;
    msg.value = 0.282083182127;

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
    msg.setTimeStamp(0.811868022997);
    msg.setSource(17375U);
    msg.setSourceEntity(1U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(64U);
    msg.id = 189U;
    msg.value = 0.632966983791;

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
    msg.setTimeStamp(0.398082479071);
    msg.setSource(61871U);
    msg.setSourceEntity(143U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(59U);
    msg.id = 28U;
    msg.value = 0.384792555184;

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
    msg.setTimeStamp(0.56913102029);
    msg.setSource(38851U);
    msg.setSourceEntity(54U);
    msg.setDestination(22469U);
    msg.setDestinationEntity(182U);
    msg.id = 2U;
    msg.value = 0.581507920804;

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
    msg.setTimeStamp(0.319341994294);
    msg.setSource(6989U);
    msg.setSourceEntity(67U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(179U);
    msg.id = 244U;
    msg.angle = 0.538227941753;

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
    msg.setTimeStamp(0.509651945568);
    msg.setSource(47553U);
    msg.setSourceEntity(250U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(189U);
    msg.id = 87U;
    msg.angle = 0.800508059282;

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
    msg.setTimeStamp(0.0793069859969);
    msg.setSource(967U);
    msg.setSourceEntity(158U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(41U);
    msg.id = 61U;
    msg.angle = 0.797671383369;

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
    msg.setTimeStamp(0.0713411907663);
    msg.setSource(16203U);
    msg.setSourceEntity(62U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(192U);
    msg.op = 2U;
    msg.actions.assign("MOVQTXHEUULOUEMVTOLBPNWQYEWHIMDFYVTHUCZYZNRFPWRGPAJITHERUHJHTXDQORS");

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
    msg.setTimeStamp(0.116788514763);
    msg.setSource(56205U);
    msg.setSourceEntity(103U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(100U);
    msg.op = 218U;
    msg.actions.assign("YFHPEWZKJCMLN");

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
    msg.setTimeStamp(0.87393644146);
    msg.setSource(12042U);
    msg.setSourceEntity(91U);
    msg.setDestination(65166U);
    msg.setDestinationEntity(38U);
    msg.op = 181U;
    msg.actions.assign("TXWSURDDZHGORBMAGHKFJXUXJWOPKAIMMDRGVSVCDZVPFIPFQRLONNHDVXAEZPEVPWHHQZOTLECQQNJKGWNQICORBAMWFHQDDMRJIENNYYRBAPSQYYGQTXPKKZXWKWEBAXBKNDTQTCMIVAYUBRKHYZUYBYCFYPFLLLNDMELAZWITAPXDBOGEISXFSEOUGBZBUCKCGWCL");

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
    msg.setTimeStamp(0.129198873767);
    msg.setSource(46485U);
    msg.setSourceEntity(120U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(229U);
    msg.actions.assign("GYUXKJORLDVSVCCNSZGAOVFICGAFWVXAJYGYICGPSBGPXXQLWOJSASDEPWDORZNMKE");

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
    msg.setTimeStamp(0.901969032714);
    msg.setSource(52923U);
    msg.setSourceEntity(48U);
    msg.setDestination(42715U);
    msg.setDestinationEntity(28U);
    msg.actions.assign("ANFIOSMQHFQASSWTMJSVGFMBTACROVTENNZEQPJNIXDCOMRDLJPXAWWUZZIYBCZETGWGJWYGKRTYRSHVKVOJOLHDUKYWDEXBXRWGNVRUMBNRSDOMSFVDJLJDQUXJYEQCDNZPQICSXEFRMAQYCHPFLKLGKGCMIELSKVPWVLLCXKPYTITNOVCJOPNHENEDPZFUBICKXPBXAHZXWLKTTOHYHZUBIZFRYIHSIOUQUJWBZDBHQAGEFMF");

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
    msg.setTimeStamp(0.564928389693);
    msg.setSource(21084U);
    msg.setSourceEntity(226U);
    msg.setDestination(65102U);
    msg.setDestinationEntity(2U);
    msg.actions.assign("MYWFAPYDNUMJXEBJRLVBZALZXSJDTVNZHRIBKTGKLVKPQZMHCVOPQPANMXPIZIMXXHZXJO");

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
    msg.setTimeStamp(0.753384992804);
    msg.setSource(46411U);
    msg.setSourceEntity(214U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(7U);
    msg.button = 6U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.625300718035);
    msg.setSource(20780U);
    msg.setSourceEntity(64U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(37U);
    msg.button = 61U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.492765794926);
    msg.setSource(29759U);
    msg.setSourceEntity(138U);
    msg.setDestination(58540U);
    msg.setDestinationEntity(44U);
    msg.button = 206U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.0150169132785);
    msg.setSource(17776U);
    msg.setSourceEntity(98U);
    msg.setDestination(54292U);
    msg.setDestinationEntity(25U);
    msg.op = 30U;
    msg.text.assign("DNOFWWVHCHWVNCEJKKALXFPBTNIJGUYUPOJRQTWHAEYVNZPRIRYQLDVXLNSVLQAZJSAVVPVYEZDMQFLSWCSKCQMMCNILTCBYMLJHNXWFKRI");

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
    msg.setTimeStamp(0.468624022317);
    msg.setSource(19010U);
    msg.setSourceEntity(112U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(74U);
    msg.op = 22U;
    msg.text.assign("YBIMHJRWUASFKGOSGSWVWVXKDHLEXTKJEFIBORVXVAWJBHFJDYYDLKQJIBRWPGPEJMQGTXZCXLCUDTKAPUGBNPSROTTSPZBREOMQENSDTTYHAUXIVRIXNWLRBSIXZVRPUNQCRKVOIMLHZCQCBLHFBWLEFDYAGPYHAQVPFRNBWNLPSUYUVOTUJEECMPUTYOSKMDEEGMDICWCZFLGSXQONHOXOZHZFNZLCKHC");

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
    msg.setTimeStamp(0.35142502136);
    msg.setSource(10077U);
    msg.setSourceEntity(166U);
    msg.setDestination(29772U);
    msg.setDestinationEntity(158U);
    msg.op = 112U;
    msg.text.assign("IAXNPIQQXLVFMSEKZXNEWEXFJMNNVAAFUDXBGICLLLBKYDNXHYHVQGSGZMBXDEHRLWSIMKRCZOUAPRNJKVGUNPJPUNXUFGVRWKDSU");

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
    msg.setTimeStamp(0.44566098107);
    msg.setSource(32270U);
    msg.setSourceEntity(144U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(97U);
    msg.op = 89U;
    msg.time_remain = 0.584939349095;
    msg.sched_time = 0.929972540192;

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
    msg.setTimeStamp(0.651696998035);
    msg.setSource(42336U);
    msg.setSourceEntity(177U);
    msg.setDestination(59465U);
    msg.setDestinationEntity(153U);
    msg.op = 38U;
    msg.time_remain = 0.536118406364;
    msg.sched_time = 0.0484993271016;

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
    msg.setTimeStamp(0.0791544886057);
    msg.setSource(5530U);
    msg.setSourceEntity(229U);
    msg.setDestination(1331U);
    msg.setDestinationEntity(235U);
    msg.op = 91U;
    msg.time_remain = 0.698866078644;
    msg.sched_time = 0.438510277561;

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
    msg.setTimeStamp(0.803227884535);
    msg.setSource(30467U);
    msg.setSourceEntity(112U);
    msg.setDestination(56682U);
    msg.setDestinationEntity(125U);
    msg.name.assign("IOCOTRMELWLJREHRCVTFRAATBSUEKGUGSMNVPQNFYTYVMRPDIXLOXNPEWIIBXJTCGJWUNKDXLHFJJZWQWYFUJISMVNTGDFTEMSGP");
    msg.op = 118U;
    msg.sched_time = 0.349595917967;

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
    msg.setTimeStamp(0.120851364134);
    msg.setSource(62707U);
    msg.setSourceEntity(251U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(215U);
    msg.name.assign("LMJWSKQCVHPFMLAWCBMIGZYHYKYK");
    msg.op = 11U;
    msg.sched_time = 0.918889415046;

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
    msg.setTimeStamp(0.397234430212);
    msg.setSource(4116U);
    msg.setSourceEntity(154U);
    msg.setDestination(62257U);
    msg.setDestinationEntity(78U);
    msg.name.assign("ZKZLOLXOTJQXUNEOAZRHYOGPHNKRXAWJEBJMIBAHEPOVFJQYXWNGJLPZGMVDHPIBXWQRAKIGVUOKODECAIJVYTQRYAMNFXTDHTZFCKCFIKIRPLOMBTRCFILCDDMSBNIVHSQGCSDCWXLDCTYWVKZSLIDFEGJNUYPFRBWRSSWXSYQ");
    msg.op = 186U;
    msg.sched_time = 0.590545101877;

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
    msg.setTimeStamp(0.131772769932);
    msg.setSource(33749U);
    msg.setSourceEntity(245U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.843100326637);
    msg.setSource(60107U);
    msg.setSourceEntity(215U);
    msg.setDestination(35907U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.386322697797);
    msg.setSource(23001U);
    msg.setSourceEntity(167U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.82358553356);
    msg.setSource(13257U);
    msg.setSourceEntity(29U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(20U);
    msg.name.assign("WQCFUIQROTJUYXEEMJFYXHCSZSKBSERYCDCVBTCOVZZKCLBVHBPFHYXSPLSAJOQGJRKDDOKKVFRQNAWROZYVAZYPDDCPDTKISAETNTBXLLEUEOCHWVMIQGLFANIUPDABQPPNWJGNIJUNHUFINEORZBXGILYBNSKDJGIOQRPFFITWAOUYXGSHUKVLCWGTBMWXGMFYMVADZMXNUXEKWRDEVZIHQQXHMJWTSJGQHTLZFWMPSKEROLMCTLBNAUJ");
    msg.state = 173U;

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
    msg.setTimeStamp(0.647120615816);
    msg.setSource(17685U);
    msg.setSourceEntity(228U);
    msg.setDestination(16668U);
    msg.setDestinationEntity(66U);
    msg.name.assign("ENLYIAPXORLSLVOUDFGVIRQOPTTIPEWVFEFAVNFEUTNYZXXIMQLYKEIJEKOCSHJDTBNIGSSHDQETPRVACPKYULVNJGEFPRWRFBCQIWZLIYHCHASYUXGWCAOBPMOSMUOCNZWRHXCSUDYJJVMLDAFQXZTQOOKADHGUQNRPPMYWKMIJGVXYXWBRBUBJRSWQGCMWNZDXFIQDTKG");
    msg.state = 89U;

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
    msg.setTimeStamp(0.742827806041);
    msg.setSource(44057U);
    msg.setSourceEntity(238U);
    msg.setDestination(19439U);
    msg.setDestinationEntity(54U);
    msg.name.assign("QWEQNBYTTIAPRXJNUEBQYDTENEVXNZZRERQOMKADFRMNYALWHGLPFRRV");
    msg.state = 0U;

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
    msg.setTimeStamp(0.199626918803);
    msg.setSource(21468U);
    msg.setSourceEntity(116U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(204U);
    msg.name.assign("YZNRGQXERCFPTFFJTYRBDCIIFPJMENSCCSIHZHDNVQIOWLZJPYUTIIXHVUOIEWSUKAUHDFSYNLOSAHMQAEONLRZNYOUQXSMSUGMLEGTKUBNNBGZTIPMJHEEOKBLCZBBVRGJIEZTKHSQHWYKJOQRDGZHKFZYGOMLYVQKA");
    msg.value = 188U;

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
    msg.setTimeStamp(0.785829904417);
    msg.setSource(19850U);
    msg.setSourceEntity(131U);
    msg.setDestination(47972U);
    msg.setDestinationEntity(145U);
    msg.name.assign("OZUEVCQIYTGGPMWUXQGOXUSSWGTWJJFPXBXNRFEHNXNVHGAFHFKMOKQLIJNCNMYFZSSCTKDVKSONYJYHAJOAQFBWTMIYJBZURGOVZZCELCLDRWNISVURNUDMDIRRBBEQGSPPWSKGLEZIJLWWMG");
    msg.value = 170U;

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
    msg.setTimeStamp(0.770610307822);
    msg.setSource(2928U);
    msg.setSourceEntity(197U);
    msg.setDestination(8903U);
    msg.setDestinationEntity(58U);
    msg.name.assign("RXXXFMAYUVJMDRVLFDZFDPEUEXZMQHVYVTCJJJFSRWLYCWTLLWKUWRERAGIQQDRHQFIYFLIAKBGBNPRTDPAUSSTMCGDNCIXZSBMSALNEEJCVKVEAOMZWPIPZMRGVBAOOZHNFPKEEMKAQURUBFZSQDHFJXJT");
    msg.value = 77U;

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
    msg.setTimeStamp(0.682627923151);
    msg.setSource(58424U);
    msg.setSourceEntity(124U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(119U);
    msg.name.assign("DHKYLQIQMSDIDBKNORBEZUDSOYZMKBZCWOFTRLXECXEOLBPIEPMQPCDSJRFAWAZXGWQFGYDUV");

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
    msg.setTimeStamp(0.6190102741);
    msg.setSource(1613U);
    msg.setSourceEntity(1U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(184U);
    msg.name.assign("TYOLRBUCZPTBISFWOHVWNAKFRAXEOWEKQZEMSTHYWVIHMHDQCBTJJQRGRCCUAWGWCJYCZTGCRFJLMFPNLBISJXTICUHLHDLLHGPHKEZPAZIOUNANXDRNQSEIEPERELXSGQJRSSXBZMMVNGKVRYTDGMKDGFAOOYPYJXNZQDFUSWLUAQFQUPDARBQXDMGWXSKVIZNPFNIWTVBLADCQYZTVCGBMPAUXOIKXJNSYBYUVFKUHKWBVVILYODOHJJFEO");

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
    msg.setTimeStamp(0.0451913353356);
    msg.setSource(34622U);
    msg.setSourceEntity(27U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(140U);
    msg.name.assign("RRGYHLBFPOBKVMONQKDDYESWOOFXCPXNRQCTLDYHXWBMJBVQTNLWQJNWUJPIZTHYVMIGGRHMVLTVPXNLPSOBGLIVNSHQQL");

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
    msg.setTimeStamp(0.66274744483);
    msg.setSource(51120U);
    msg.setSourceEntity(1U);
    msg.setDestination(61404U);
    msg.setDestinationEntity(93U);
    msg.name.assign("PCEFUBCKWPJSTQFRYBHFZSPHLZQJKSHAWADPOZWGNXNJIGCCUYSPGTAYSYXUTTLAVDNMSISHRVFMKDGWVMWXOCBQELDLHHUJQAKKQXKBCDQDFFKLZIUTJNDTONBVNSMRBRSRUPEVEGJFJOGMWDOIZRCECLPZARQERIFGRMJHL");
    msg.value = 79U;

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
    msg.setTimeStamp(0.959479243152);
    msg.setSource(14367U);
    msg.setSourceEntity(128U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(196U);
    msg.name.assign("BOBWWPWMEGDXTPMZGFVONHSCUJLYGBMTFKDCAOEQJEJNGUJTMQXIVBFBLCALDCHIIZXHEDZNFCKYAAOYAQUSMFSUFSVTYRZHHEJVOASARQYQYPNOLHKPNIURSODQNVWIFXWBWOKJZQKCKJXSGEIFVFPJRUAYDPDCRZMVCZKIMXLLRPXQRTEBBFGEDNIAXROTURZEDKWJXNUUQIMBTXPPKLZCLR");
    msg.value = 29U;

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
    msg.setTimeStamp(0.0391406613985);
    msg.setSource(16487U);
    msg.setSourceEntity(96U);
    msg.setDestination(51766U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JGDWDOZRHIOQLUHRMUCDPBDWXMOOLQWCYWLGECRGZRSFZZXLFPQUQWUICBTSZINLKACZSCJEGQHHXIYETSKMTPIKFEUWNQSTVZLYIAXWONJESNRXNKESRFSKLMJENUSCPPAYYYWHUOJZVVVJPQHYKXQDARLBBJFDOMDMYSAIWPGVABTXUVATHNKGEPGBPLXDGLAIOXNPTTFCCFOHVVGKHKRFIY");
    msg.value = 110U;

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
    msg.setTimeStamp(0.543580965149);
    msg.setSource(20455U);
    msg.setSourceEntity(73U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(12U);
    msg.id = 11U;
    msg.period = 2275326263U;
    msg.duty_cycle = 546260787U;

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
    msg.setTimeStamp(0.848123196827);
    msg.setSource(65163U);
    msg.setSourceEntity(187U);
    msg.setDestination(27726U);
    msg.setDestinationEntity(217U);
    msg.id = 126U;
    msg.period = 2261070898U;
    msg.duty_cycle = 2093642910U;

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
    msg.setTimeStamp(0.535641661096);
    msg.setSource(1372U);
    msg.setSourceEntity(230U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(92U);
    msg.id = 199U;
    msg.period = 2158899298U;
    msg.duty_cycle = 1221390142U;

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
    msg.setTimeStamp(0.78080608494);
    msg.setSource(1991U);
    msg.setSourceEntity(251U);
    msg.setDestination(48124U);
    msg.setDestinationEntity(160U);
    msg.id = 124U;
    msg.period = 366934457U;
    msg.duty_cycle = 189475082U;

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
    msg.setTimeStamp(0.380582121461);
    msg.setSource(39806U);
    msg.setSourceEntity(76U);
    msg.setDestination(38054U);
    msg.setDestinationEntity(174U);
    msg.id = 170U;
    msg.period = 4028222266U;
    msg.duty_cycle = 3705773545U;

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
    msg.setTimeStamp(0.614583289243);
    msg.setSource(3412U);
    msg.setSourceEntity(51U);
    msg.setDestination(18823U);
    msg.setDestinationEntity(237U);
    msg.id = 249U;
    msg.period = 290652667U;
    msg.duty_cycle = 3929764732U;

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
    msg.setTimeStamp(0.649716397873);
    msg.setSource(34613U);
    msg.setSourceEntity(33U);
    msg.setDestination(52341U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.141594520519;
    msg.lon = 0.726256592774;
    msg.height = 0.212702075597;
    msg.x = 0.596780146366;
    msg.y = 0.585386181643;
    msg.z = 0.932949710075;
    msg.phi = 0.11603297563;
    msg.theta = 0.512243958068;
    msg.psi = 0.908890297863;
    msg.u = 0.481707395015;
    msg.v = 0.742315525111;
    msg.w = 0.352292962609;
    msg.vx = 0.592394163026;
    msg.vy = 0.86677388116;
    msg.vz = 0.313358618868;
    msg.p = 0.231527432884;
    msg.q = 0.0943911295534;
    msg.r = 0.778981723539;
    msg.depth = 0.418213522269;
    msg.alt = 0.581674024193;

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
    msg.setTimeStamp(0.591098089171);
    msg.setSource(50028U);
    msg.setSourceEntity(91U);
    msg.setDestination(29290U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.112176857337;
    msg.lon = 0.437917114588;
    msg.height = 0.40631992039;
    msg.x = 0.0626028193854;
    msg.y = 0.86662916215;
    msg.z = 0.830177459319;
    msg.phi = 0.934787998319;
    msg.theta = 0.0326627220262;
    msg.psi = 0.729155026068;
    msg.u = 0.67949597233;
    msg.v = 0.0476548080893;
    msg.w = 0.451519925633;
    msg.vx = 0.511061038018;
    msg.vy = 0.613033535593;
    msg.vz = 0.59128134735;
    msg.p = 0.45101863192;
    msg.q = 0.484482633485;
    msg.r = 0.152443657256;
    msg.depth = 0.000998350690567;
    msg.alt = 0.249010122935;

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
    msg.setTimeStamp(0.87382407703);
    msg.setSource(9593U);
    msg.setSourceEntity(35U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.99686064458;
    msg.lon = 0.461370019271;
    msg.height = 0.00890373517879;
    msg.x = 0.315030484447;
    msg.y = 0.852593179597;
    msg.z = 0.959695627668;
    msg.phi = 0.29494092932;
    msg.theta = 0.411325121064;
    msg.psi = 0.0950916299862;
    msg.u = 0.810976094275;
    msg.v = 0.420006709143;
    msg.w = 0.803740400572;
    msg.vx = 0.111947452037;
    msg.vy = 0.703327677891;
    msg.vz = 0.74184140359;
    msg.p = 0.986969919439;
    msg.q = 0.5644569314;
    msg.r = 0.843353374147;
    msg.depth = 0.751507553045;
    msg.alt = 0.445341791677;

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
    msg.setTimeStamp(0.376212375187);
    msg.setSource(7840U);
    msg.setSourceEntity(107U);
    msg.setDestination(123U);
    msg.setDestinationEntity(218U);
    msg.x = 0.153277932058;
    msg.y = 0.955662693434;
    msg.z = 0.769090162644;

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
    msg.setTimeStamp(0.657865781214);
    msg.setSource(35046U);
    msg.setSourceEntity(58U);
    msg.setDestination(55646U);
    msg.setDestinationEntity(249U);
    msg.x = 0.683063391624;
    msg.y = 0.438901206557;
    msg.z = 0.295418842483;

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
    msg.setTimeStamp(0.402941285776);
    msg.setSource(12971U);
    msg.setSourceEntity(83U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(233U);
    msg.x = 0.91712913517;
    msg.y = 0.764024611987;
    msg.z = 0.968653420737;

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
    msg.setTimeStamp(0.457342592756);
    msg.setSource(686U);
    msg.setSourceEntity(27U);
    msg.setDestination(20095U);
    msg.setDestinationEntity(180U);
    msg.value = 0.769978552637;

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
    msg.setTimeStamp(0.0810792560007);
    msg.setSource(34202U);
    msg.setSourceEntity(89U);
    msg.setDestination(36945U);
    msg.setDestinationEntity(228U);
    msg.value = 0.547403657228;

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
    msg.setTimeStamp(0.372077849575);
    msg.setSource(8172U);
    msg.setSourceEntity(75U);
    msg.setDestination(3858U);
    msg.setDestinationEntity(146U);
    msg.value = 0.456095763494;

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
    msg.setTimeStamp(0.831861264768);
    msg.setSource(15620U);
    msg.setSourceEntity(85U);
    msg.setDestination(45166U);
    msg.setDestinationEntity(167U);
    msg.value = 0.934160749097;

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
    msg.setTimeStamp(0.207408633393);
    msg.setSource(59422U);
    msg.setSourceEntity(5U);
    msg.setDestination(51515U);
    msg.setDestinationEntity(197U);
    msg.value = 0.261179477577;

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
    msg.setTimeStamp(0.402444669821);
    msg.setSource(20008U);
    msg.setSourceEntity(105U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(230U);
    msg.value = 0.190588106659;

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
    msg.setTimeStamp(0.013470376425);
    msg.setSource(27924U);
    msg.setSourceEntity(57U);
    msg.setDestination(30896U);
    msg.setDestinationEntity(182U);
    msg.x = 0.868004675825;
    msg.y = 0.398053235748;
    msg.z = 0.307947702057;
    msg.phi = 0.327502576758;
    msg.theta = 0.63894390268;
    msg.psi = 0.248325471074;
    msg.p = 0.450739814914;
    msg.q = 0.995355950951;
    msg.r = 0.093502059337;
    msg.u = 0.272025060977;
    msg.v = 0.794441763771;
    msg.w = 0.401861099548;
    msg.bias_psi = 0.830896800679;
    msg.bias_r = 0.536809760375;

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
    msg.setTimeStamp(0.642375556181);
    msg.setSource(2182U);
    msg.setSourceEntity(151U);
    msg.setDestination(62754U);
    msg.setDestinationEntity(181U);
    msg.x = 0.785694928476;
    msg.y = 0.750696184795;
    msg.z = 0.35904656541;
    msg.phi = 0.199672004335;
    msg.theta = 0.63100294353;
    msg.psi = 0.702192334448;
    msg.p = 0.15576635926;
    msg.q = 0.14965097479;
    msg.r = 0.118112613918;
    msg.u = 0.667656878473;
    msg.v = 0.505124261538;
    msg.w = 0.936268039881;
    msg.bias_psi = 0.908612277096;
    msg.bias_r = 0.310159454635;

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
    msg.setTimeStamp(0.864904048773);
    msg.setSource(44210U);
    msg.setSourceEntity(123U);
    msg.setDestination(45964U);
    msg.setDestinationEntity(158U);
    msg.x = 0.658893762621;
    msg.y = 0.243899922151;
    msg.z = 0.491783322103;
    msg.phi = 0.628499046667;
    msg.theta = 0.0107076931562;
    msg.psi = 0.501922918524;
    msg.p = 0.274938331025;
    msg.q = 0.961920160028;
    msg.r = 0.812691542421;
    msg.u = 0.279741124238;
    msg.v = 0.895456436776;
    msg.w = 0.391453335027;
    msg.bias_psi = 0.111720089131;
    msg.bias_r = 0.711106443607;

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
    msg.setTimeStamp(0.197121651111);
    msg.setSource(32738U);
    msg.setSourceEntity(179U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.292945798024;
    msg.bias_r = 0.806260967136;
    msg.cog = 0.50291557473;
    msg.cyaw = 0.821479208096;
    msg.lbl_rej_level = 0.554309200159;
    msg.gps_rej_level = 0.868395087345;
    msg.custom_x = 0.46608667945;
    msg.custom_y = 0.323268717975;
    msg.custom_z = 0.374928443964;

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
    msg.setTimeStamp(0.969428569789);
    msg.setSource(63392U);
    msg.setSourceEntity(139U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(68U);
    msg.bias_psi = 0.538105212215;
    msg.bias_r = 0.253631471869;
    msg.cog = 0.171456187807;
    msg.cyaw = 0.952104392557;
    msg.lbl_rej_level = 0.614075486535;
    msg.gps_rej_level = 0.137004686373;
    msg.custom_x = 0.449262006854;
    msg.custom_y = 0.95918886662;
    msg.custom_z = 0.102084253864;

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
    msg.setTimeStamp(0.406388549031);
    msg.setSource(39027U);
    msg.setSourceEntity(168U);
    msg.setDestination(64980U);
    msg.setDestinationEntity(113U);
    msg.bias_psi = 0.194135061121;
    msg.bias_r = 0.953470888075;
    msg.cog = 0.989443008382;
    msg.cyaw = 0.905054174425;
    msg.lbl_rej_level = 0.558402564111;
    msg.gps_rej_level = 0.162126926695;
    msg.custom_x = 0.786964060494;
    msg.custom_y = 0.967453680257;
    msg.custom_z = 0.733348216653;

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
    msg.setTimeStamp(0.130154272777);
    msg.setSource(42610U);
    msg.setSourceEntity(243U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(202U);
    msg.utc_time = 0.787569023655;
    msg.reason = 200U;

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
    msg.setTimeStamp(0.416833006551);
    msg.setSource(9821U);
    msg.setSourceEntity(83U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.486645408164;
    msg.reason = 241U;

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
    msg.setTimeStamp(0.940002120296);
    msg.setSource(28467U);
    msg.setSourceEntity(136U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(219U);
    msg.utc_time = 0.957253127706;
    msg.reason = 185U;

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
    msg.setTimeStamp(0.35409370499);
    msg.setSource(28652U);
    msg.setSourceEntity(172U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(105U);
    msg.id = 229U;
    msg.range = 0.330501569328;
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
    msg.setTimeStamp(0.759238179388);
    msg.setSource(32758U);
    msg.setSourceEntity(3U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(126U);
    msg.id = 111U;
    msg.range = 0.499769936968;
    msg.acceptance = 146U;

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
    msg.setTimeStamp(0.706333919597);
    msg.setSource(5134U);
    msg.setSourceEntity(83U);
    msg.setDestination(43358U);
    msg.setDestinationEntity(219U);
    msg.id = 45U;
    msg.range = 0.350623994486;
    msg.acceptance = 162U;

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
    msg.setTimeStamp(0.994232259276);
    msg.setSource(47638U);
    msg.setSourceEntity(122U);
    msg.setDestination(44131U);
    msg.setDestinationEntity(64U);
    msg.type = 5U;
    msg.reason = 171U;
    msg.value = 0.510314724728;
    msg.timestep = 0.359726445628;

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
    msg.setTimeStamp(0.178661154647);
    msg.setSource(47208U);
    msg.setSourceEntity(129U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(245U);
    msg.type = 122U;
    msg.reason = 64U;
    msg.value = 0.00168824427814;
    msg.timestep = 0.634802628156;

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
    msg.setTimeStamp(0.260875032467);
    msg.setSource(55099U);
    msg.setSourceEntity(139U);
    msg.setDestination(42088U);
    msg.setDestinationEntity(222U);
    msg.type = 38U;
    msg.reason = 85U;
    msg.value = 0.524190884939;
    msg.timestep = 0.070625509233;

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
    msg.setTimeStamp(0.299259469619);
    msg.setSource(1516U);
    msg.setSourceEntity(60U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(248U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LIZJNNJEJXKLXOQDGQWTGXZSGRZJODIUHTVKWFHIRVHTQMAILKWGSCMEWVZBZPEUNDCNEUBNCWQQSSPSFPYLACKTIKJACEEEUEMHRYGNPHPSSUXNCIAANLEYKRVMJBDGUMPIBXKFDJTKQCUOTVMMNFZRMPODMBZOAKFZTJVUFRXYQQIHPJOWLAFWVYFMVXXYYIRCLTRILXGFHZAGHYBYODTCDHAYQRJBDBDVESFRZPHGW");
    tmp_msg_0.lat = 0.422073865346;
    tmp_msg_0.lon = 0.910752526434;
    tmp_msg_0.depth = 0.870033850651;
    tmp_msg_0.query_channel = 105U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 187U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.124554018813;
    msg.y = 0.0363630720276;
    msg.var_x = 0.803915604059;
    msg.var_y = 0.177920441534;
    msg.distance = 0.130957696973;

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
    msg.setTimeStamp(0.787904050561);
    msg.setSource(4695U);
    msg.setSourceEntity(26U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LFEXWMCYQKJQOATIDXEHOGXBBRMCRGNMUBIHXSAAJUUHQLEWQCBXQHFKGCAKWLDXZXODJSF");
    tmp_msg_0.lat = 0.318078737247;
    tmp_msg_0.lon = 0.555503224904;
    tmp_msg_0.depth = 0.497153999416;
    tmp_msg_0.query_channel = 235U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 192U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.996970983635;
    msg.y = 0.0249888509779;
    msg.var_x = 0.776402112617;
    msg.var_y = 0.711664417175;
    msg.distance = 0.797300301534;

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
    msg.setTimeStamp(0.81052534272);
    msg.setSource(39398U);
    msg.setSourceEntity(188U);
    msg.setDestination(64487U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HQVNJQETYVKBITIOGDRFDPZBPVMJTZUDRTKYYDGGEVQBZYJNYRDKBPQHBMJHTNWLFHOIXVRXVJNFWXDGNG");
    tmp_msg_0.lat = 0.0203357719662;
    tmp_msg_0.lon = 0.625682557514;
    tmp_msg_0.depth = 0.60925238287;
    tmp_msg_0.query_channel = 41U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 131U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.659203426807;
    msg.y = 0.890099321342;
    msg.var_x = 0.334992618834;
    msg.var_y = 0.918823023429;
    msg.distance = 0.0336612091995;

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
    msg.setTimeStamp(0.520372448983);
    msg.setSource(39486U);
    msg.setSourceEntity(174U);
    msg.setDestination(61470U);
    msg.setDestinationEntity(56U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.71250237628);
    msg.setSource(58727U);
    msg.setSourceEntity(122U);
    msg.setDestination(46871U);
    msg.setDestinationEntity(19U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.968150346194);
    msg.setSource(3107U);
    msg.setSourceEntity(211U);
    msg.setDestination(50942U);
    msg.setDestinationEntity(205U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.23100650177);
    msg.setSource(49564U);
    msg.setSourceEntity(158U);
    msg.setDestination(24826U);
    msg.setDestinationEntity(244U);
    msg.x = 0.036992142047;
    msg.y = 0.0150435687764;
    msg.z = 0.0697144613983;

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
    msg.setTimeStamp(0.877009196089);
    msg.setSource(24772U);
    msg.setSourceEntity(165U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(244U);
    msg.x = 0.162082364098;
    msg.y = 0.433340672803;
    msg.z = 0.647725790372;

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
    msg.setTimeStamp(0.323560247519);
    msg.setSource(56017U);
    msg.setSourceEntity(6U);
    msg.setDestination(13947U);
    msg.setDestinationEntity(92U);
    msg.x = 0.468441598863;
    msg.y = 0.632579220405;
    msg.z = 0.523029611467;

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
    msg.setTimeStamp(0.819283653192);
    msg.setSource(46637U);
    msg.setSourceEntity(226U);
    msg.setDestination(62222U);
    msg.setDestinationEntity(176U);
    msg.va = 0.188247317695;
    msg.aoa = 0.641346162476;
    msg.ssa = 0.206342542821;

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
    msg.setTimeStamp(0.0139558402885);
    msg.setSource(47739U);
    msg.setSourceEntity(87U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(18U);
    msg.va = 0.611080761544;
    msg.aoa = 0.431453809075;
    msg.ssa = 0.673229816634;

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
    msg.setTimeStamp(0.0433797233666);
    msg.setSource(27792U);
    msg.setSourceEntity(160U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(189U);
    msg.va = 0.318437703825;
    msg.aoa = 0.0979412759727;
    msg.ssa = 0.789346123109;

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
    msg.setTimeStamp(0.88174357664);
    msg.setSource(33010U);
    msg.setSourceEntity(169U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(8U);
    msg.value = 0.126454798943;

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
    msg.setTimeStamp(0.0205722572794);
    msg.setSource(50782U);
    msg.setSourceEntity(141U);
    msg.setDestination(55083U);
    msg.setDestinationEntity(249U);
    msg.value = 0.274776040297;

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
    msg.setTimeStamp(0.585075629353);
    msg.setSource(8078U);
    msg.setSourceEntity(244U);
    msg.setDestination(34406U);
    msg.setDestinationEntity(116U);
    msg.value = 0.673047615629;

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
    msg.setTimeStamp(0.43892961972);
    msg.setSource(31350U);
    msg.setSourceEntity(208U);
    msg.setDestination(50551U);
    msg.setDestinationEntity(182U);
    msg.value = 0.659309501358;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.0665797247307);
    msg.setSource(16320U);
    msg.setSourceEntity(84U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0959754691306;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.771233494222);
    msg.setSource(41730U);
    msg.setSourceEntity(33U);
    msg.setDestination(39509U);
    msg.setDestinationEntity(252U);
    msg.value = 0.239272213834;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.486533766374);
    msg.setSource(33641U);
    msg.setSourceEntity(204U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(14U);
    msg.value = 0.776349850552;
    msg.speed_units = 10U;

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
    msg.setTimeStamp(0.825662398733);
    msg.setSource(19046U);
    msg.setSourceEntity(137U);
    msg.setDestination(46871U);
    msg.setDestinationEntity(178U);
    msg.value = 0.243603972631;
    msg.speed_units = 134U;

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
    msg.setTimeStamp(0.442896258464);
    msg.setSource(55238U);
    msg.setSourceEntity(205U);
    msg.setDestination(30323U);
    msg.setDestinationEntity(115U);
    msg.value = 0.329987785451;
    msg.speed_units = 84U;

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
    msg.setTimeStamp(0.542681952247);
    msg.setSource(60324U);
    msg.setSourceEntity(176U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0230810162199;

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
    msg.setTimeStamp(0.915207092087);
    msg.setSource(14123U);
    msg.setSourceEntity(74U);
    msg.setDestination(62872U);
    msg.setDestinationEntity(251U);
    msg.value = 0.110234698964;

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
    msg.setTimeStamp(0.192045260747);
    msg.setSource(27853U);
    msg.setSourceEntity(215U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(244U);
    msg.value = 0.356496040284;

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
    msg.setTimeStamp(0.730071174333);
    msg.setSource(1795U);
    msg.setSourceEntity(46U);
    msg.setDestination(58724U);
    msg.setDestinationEntity(148U);
    msg.value = 0.370270422802;

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
    msg.setTimeStamp(0.979269002016);
    msg.setSource(12877U);
    msg.setSourceEntity(17U);
    msg.setDestination(61896U);
    msg.setDestinationEntity(250U);
    msg.value = 0.784843838691;

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
    msg.setTimeStamp(0.743058256829);
    msg.setSource(377U);
    msg.setSourceEntity(177U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(120U);
    msg.value = 0.327311782894;

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
    msg.setTimeStamp(0.455092598088);
    msg.setSource(57540U);
    msg.setSourceEntity(89U);
    msg.setDestination(23165U);
    msg.setDestinationEntity(110U);
    msg.value = 0.863958180588;

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
    msg.setTimeStamp(0.169936034975);
    msg.setSource(41622U);
    msg.setSourceEntity(163U);
    msg.setDestination(64285U);
    msg.setDestinationEntity(12U);
    msg.value = 0.79583512687;

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
    msg.setTimeStamp(0.167720247689);
    msg.setSource(61138U);
    msg.setSourceEntity(242U);
    msg.setDestination(17143U);
    msg.setDestinationEntity(164U);
    msg.value = 0.95578318909;

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
    msg.setTimeStamp(0.648371311599);
    msg.setSource(37325U);
    msg.setSourceEntity(113U);
    msg.setDestination(56430U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 4081846452U;
    msg.start_lat = 0.565739441335;
    msg.start_lon = 0.979408511277;
    msg.start_z = 0.565912516665;
    msg.start_z_units = 120U;
    msg.end_lat = 0.763280837169;
    msg.end_lon = 0.82292480359;
    msg.end_z = 0.518659968973;
    msg.end_z_units = 134U;
    msg.speed = 0.25416597696;
    msg.speed_units = 16U;
    msg.lradius = 0.669089311891;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.404934192711);
    msg.setSource(62898U);
    msg.setSourceEntity(26U);
    msg.setDestination(9817U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 1636608407U;
    msg.start_lat = 0.363406781012;
    msg.start_lon = 0.720445626434;
    msg.start_z = 0.904753219735;
    msg.start_z_units = 122U;
    msg.end_lat = 0.263883815714;
    msg.end_lon = 0.944010875943;
    msg.end_z = 0.0669859772187;
    msg.end_z_units = 84U;
    msg.speed = 0.657728417342;
    msg.speed_units = 246U;
    msg.lradius = 0.500656234298;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.445394510798);
    msg.setSource(55869U);
    msg.setSourceEntity(234U);
    msg.setDestination(12545U);
    msg.setDestinationEntity(133U);
    msg.path_ref = 3893238725U;
    msg.start_lat = 0.388527478789;
    msg.start_lon = 0.889380237212;
    msg.start_z = 0.226026098718;
    msg.start_z_units = 183U;
    msg.end_lat = 0.882082135817;
    msg.end_lon = 0.688689880516;
    msg.end_z = 0.0702491829618;
    msg.end_z_units = 205U;
    msg.speed = 0.155375738942;
    msg.speed_units = 184U;
    msg.lradius = 0.61700957856;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.704618012676);
    msg.setSource(19461U);
    msg.setSourceEntity(37U);
    msg.setDestination(33828U);
    msg.setDestinationEntity(8U);
    msg.x = 0.804184991176;
    msg.y = 0.50094577437;
    msg.z = 0.938903600206;
    msg.k = 0.845306466268;
    msg.m = 0.594733899547;
    msg.n = 0.227385901683;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.387750465224);
    msg.setSource(41055U);
    msg.setSourceEntity(21U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(63U);
    msg.x = 0.551509513474;
    msg.y = 0.747782485463;
    msg.z = 0.104895603414;
    msg.k = 0.626383676903;
    msg.m = 0.807476581027;
    msg.n = 0.429618789059;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.447149979882);
    msg.setSource(31490U);
    msg.setSourceEntity(131U);
    msg.setDestination(49250U);
    msg.setDestinationEntity(213U);
    msg.x = 0.873191595697;
    msg.y = 0.268702104872;
    msg.z = 0.911469782062;
    msg.k = 0.264898580189;
    msg.m = 0.48478492859;
    msg.n = 0.611836227074;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.114736162173);
    msg.setSource(29254U);
    msg.setSourceEntity(214U);
    msg.setDestination(59933U);
    msg.setDestinationEntity(228U);
    msg.value = 0.215450458918;

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
    msg.setTimeStamp(0.686027622909);
    msg.setSource(65032U);
    msg.setSourceEntity(95U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(201U);
    msg.value = 0.229414292492;

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
    msg.setTimeStamp(0.560505930092);
    msg.setSource(4537U);
    msg.setSourceEntity(149U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0487482021976;

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
    msg.setTimeStamp(0.797133218732);
    msg.setSource(968U);
    msg.setSourceEntity(128U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(130U);
    msg.u = 0.838889113386;
    msg.v = 0.246230228221;
    msg.w = 0.464202793775;
    msg.p = 0.650821386207;
    msg.q = 0.202095616709;
    msg.r = 0.279490518443;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.21333232204);
    msg.setSource(16964U);
    msg.setSourceEntity(98U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(129U);
    msg.u = 0.472081191867;
    msg.v = 0.0936206782851;
    msg.w = 0.277596720569;
    msg.p = 0.718740869555;
    msg.q = 0.679512714197;
    msg.r = 0.173171879468;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.226786281707);
    msg.setSource(40235U);
    msg.setSourceEntity(188U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(82U);
    msg.u = 0.44868565077;
    msg.v = 0.891600255443;
    msg.w = 0.390091599441;
    msg.p = 0.228439108255;
    msg.q = 0.51703889219;
    msg.r = 0.0512263617693;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.73003587368);
    msg.setSource(49646U);
    msg.setSourceEntity(161U);
    msg.setDestination(20582U);
    msg.setDestinationEntity(71U);
    msg.path_ref = 636616808U;
    msg.start_lat = 0.493458773626;
    msg.start_lon = 0.0350572861633;
    msg.start_z = 0.0600629334013;
    msg.start_z_units = 235U;
    msg.end_lat = 0.216587414768;
    msg.end_lon = 0.964685867267;
    msg.end_z = 0.668562056208;
    msg.end_z_units = 215U;
    msg.lradius = 0.0720772188163;
    msg.flags = 96U;
    msg.x = 0.870240548008;
    msg.y = 0.122869736468;
    msg.z = 0.271847228978;
    msg.vx = 0.450527820244;
    msg.vy = 0.488861587636;
    msg.vz = 0.855854185998;
    msg.course_error = 0.993597992523;
    msg.eta = 8463U;

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
    msg.setTimeStamp(0.287510954066);
    msg.setSource(26580U);
    msg.setSourceEntity(24U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(242U);
    msg.path_ref = 3944707248U;
    msg.start_lat = 0.593099840979;
    msg.start_lon = 0.847934733858;
    msg.start_z = 0.343441876968;
    msg.start_z_units = 75U;
    msg.end_lat = 0.803733041667;
    msg.end_lon = 0.647399234327;
    msg.end_z = 0.188179898649;
    msg.end_z_units = 91U;
    msg.lradius = 0.276141820592;
    msg.flags = 86U;
    msg.x = 0.720286624948;
    msg.y = 0.394538605561;
    msg.z = 0.521751601284;
    msg.vx = 0.36841432426;
    msg.vy = 0.494178708263;
    msg.vz = 0.757546010917;
    msg.course_error = 0.401115383569;
    msg.eta = 763U;

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
    msg.setTimeStamp(0.69877094594);
    msg.setSource(33237U);
    msg.setSourceEntity(162U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 2800612659U;
    msg.start_lat = 0.210138956252;
    msg.start_lon = 0.486375311649;
    msg.start_z = 0.826399215025;
    msg.start_z_units = 192U;
    msg.end_lat = 0.398319534468;
    msg.end_lon = 0.521976837524;
    msg.end_z = 0.868141650128;
    msg.end_z_units = 223U;
    msg.lradius = 0.917002830293;
    msg.flags = 185U;
    msg.x = 0.488154455224;
    msg.y = 0.555510579996;
    msg.z = 0.846547088119;
    msg.vx = 0.664464130092;
    msg.vy = 0.356436379398;
    msg.vz = 0.626195172118;
    msg.course_error = 0.399976224666;
    msg.eta = 1518U;

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
    msg.setTimeStamp(0.49316684289);
    msg.setSource(12255U);
    msg.setSourceEntity(249U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(220U);
    msg.k = 0.411300311374;
    msg.m = 0.956122533325;
    msg.n = 0.427850307871;

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
    msg.setTimeStamp(0.768100012002);
    msg.setSource(5791U);
    msg.setSourceEntity(59U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(108U);
    msg.k = 0.241506888165;
    msg.m = 0.305997622477;
    msg.n = 0.266379827714;

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
    msg.setTimeStamp(0.568927151264);
    msg.setSource(34035U);
    msg.setSourceEntity(9U);
    msg.setDestination(29120U);
    msg.setDestinationEntity(15U);
    msg.k = 0.226686516866;
    msg.m = 0.241608591446;
    msg.n = 0.878798705814;

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
    msg.setTimeStamp(0.991040928675);
    msg.setSource(57480U);
    msg.setSourceEntity(36U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(158U);
    msg.p = 0.784935749406;
    msg.i = 0.561792634077;
    msg.d = 0.858195547503;
    msg.a = 0.536403547297;

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
    msg.setTimeStamp(0.670682065232);
    msg.setSource(17706U);
    msg.setSourceEntity(128U);
    msg.setDestination(36970U);
    msg.setDestinationEntity(226U);
    msg.p = 0.996843971034;
    msg.i = 0.139752196904;
    msg.d = 0.344041786443;
    msg.a = 0.081046626275;

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
    msg.setTimeStamp(0.639801922544);
    msg.setSource(35787U);
    msg.setSourceEntity(148U);
    msg.setDestination(35268U);
    msg.setDestinationEntity(246U);
    msg.p = 0.882778675101;
    msg.i = 0.241743359782;
    msg.d = 0.770834167922;
    msg.a = 0.470363956608;

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
    msg.setTimeStamp(0.0224065124657);
    msg.setSource(14577U);
    msg.setSourceEntity(140U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(184U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.921174366383);
    msg.setSource(40927U);
    msg.setSourceEntity(158U);
    msg.setDestination(64933U);
    msg.setDestinationEntity(127U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.540105111465);
    msg.setSource(41402U);
    msg.setSourceEntity(185U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(42U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.103169182042);
    msg.setSource(54321U);
    msg.setSourceEntity(206U);
    msg.setDestination(60459U);
    msg.setDestinationEntity(40U);
    msg.x = 0.331781720994;
    msg.y = 0.279751024734;
    msg.z = 0.876014860261;
    msg.vx = 0.00175575662191;
    msg.vy = 0.478384455485;
    msg.vz = 0.482500274491;
    msg.ax = 0.78876993591;
    msg.ay = 0.371039503119;
    msg.az = 0.630201327704;
    msg.flags = 10529U;

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
    msg.setTimeStamp(0.0644873593661);
    msg.setSource(32215U);
    msg.setSourceEntity(164U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(177U);
    msg.x = 0.592516047516;
    msg.y = 0.415027646085;
    msg.z = 0.35484275583;
    msg.vx = 0.424978115342;
    msg.vy = 0.238336651709;
    msg.vz = 0.253152378607;
    msg.ax = 0.818845007013;
    msg.ay = 0.483617795877;
    msg.az = 0.894779882398;
    msg.flags = 54465U;

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
    msg.setTimeStamp(0.522034773994);
    msg.setSource(9134U);
    msg.setSourceEntity(226U);
    msg.setDestination(5827U);
    msg.setDestinationEntity(117U);
    msg.x = 0.520698756475;
    msg.y = 0.637832497471;
    msg.z = 0.406509897258;
    msg.vx = 0.682554371225;
    msg.vy = 0.977716426812;
    msg.vz = 0.518996152065;
    msg.ax = 0.347904768728;
    msg.ay = 0.200845879794;
    msg.az = 0.748978448227;
    msg.flags = 11095U;

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
    msg.setTimeStamp(0.0933456293427);
    msg.setSource(27174U);
    msg.setSourceEntity(169U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(187U);
    msg.value = 0.478151350984;

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
    msg.setTimeStamp(0.187043008766);
    msg.setSource(25442U);
    msg.setSourceEntity(63U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(218U);
    msg.value = 0.35096384429;

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
    msg.setTimeStamp(0.827956014109);
    msg.setSource(58710U);
    msg.setSourceEntity(41U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(130U);
    msg.value = 0.216987879591;

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
    msg.setTimeStamp(0.515178749063);
    msg.setSource(62687U);
    msg.setSourceEntity(53U);
    msg.setDestination(48140U);
    msg.setDestinationEntity(87U);
    msg.timeout = 43378U;
    msg.lat = 0.391603488959;
    msg.lon = 0.148310645341;
    msg.z = 0.763434790536;
    msg.z_units = 244U;
    msg.speed = 0.559791985494;
    msg.speed_units = 70U;
    msg.roll = 0.652255484877;
    msg.pitch = 0.138960307034;
    msg.yaw = 0.183850665043;
    msg.custom.assign("STJCKTBLUSRCSXUGSRKPTXTQWFLANEIXNUFRJCJVWYAPTVOTRJYJOEUOASXVOAZOIIGQPLCNQDUSQZMDPKXCTUEFUWMMLOHYGLLVPMMNKFZQRHADBBVGGE");

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
    msg.setTimeStamp(0.287280331751);
    msg.setSource(7087U);
    msg.setSourceEntity(234U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(68U);
    msg.timeout = 15407U;
    msg.lat = 0.991164080977;
    msg.lon = 0.746602505487;
    msg.z = 0.776113975238;
    msg.z_units = 48U;
    msg.speed = 0.404922294139;
    msg.speed_units = 150U;
    msg.roll = 0.915898100825;
    msg.pitch = 0.735808957566;
    msg.yaw = 0.721551748189;
    msg.custom.assign("RTWGFTSRAIITPZILDVBTLAVONQVAXQYIHTCGMRCIYTYCNGXUEKDJQTZXCQTFYDKXQZHIDIFTPVLUVJPSHXBOAOPVPHMKCMOANEBCSQLZZQMWVEDFZDOGSROAOGIWXHNWBLZHLSBBYWKSNDPQKGKKUZJEIRZHNAPGHWBWBCJEXOEHYXBKKVMXHUTSPNRJRRCJVNORAZLVJPWDAWNFLBOULYMSQMFRFEGCXASQJWNUEMCDYMGMK");

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
    msg.setTimeStamp(0.684029582489);
    msg.setSource(14801U);
    msg.setSourceEntity(130U);
    msg.setDestination(22952U);
    msg.setDestinationEntity(170U);
    msg.timeout = 7927U;
    msg.lat = 0.483381691735;
    msg.lon = 0.51805231473;
    msg.z = 0.458781532815;
    msg.z_units = 89U;
    msg.speed = 0.57013070646;
    msg.speed_units = 88U;
    msg.roll = 0.568353921756;
    msg.pitch = 0.717123260789;
    msg.yaw = 0.624692254735;
    msg.custom.assign("NGISFHOOXFZMYCDJWLHEWWZBGIEUIAKXPTYOZPVLNFHCZYWRNLLNXQYCIYVHFJOCCLBTSLDIVAWRQAXYXZVRFWMMGFBMDMLPHRDSHBSAUNEMJKIMWGQYSWKIPMNRROUVJXBBIXPQKETUUVHESCXRUQOGOZLUHTHXJPKIKYROQWPUBRTEDDPT");

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
    msg.setTimeStamp(0.893726796237);
    msg.setSource(31986U);
    msg.setSourceEntity(156U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(66U);
    msg.timeout = 44331U;
    msg.lat = 0.0330731060215;
    msg.lon = 0.239974268785;
    msg.z = 0.762310918683;
    msg.z_units = 236U;
    msg.speed = 0.754531291592;
    msg.speed_units = 253U;
    msg.duration = 14005U;
    msg.radius = 0.135959918349;
    msg.flags = 40U;
    msg.custom.assign("VVWZUOUYQCLTPYZRGBTHBRYIGJLWUKS");

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
    msg.setTimeStamp(0.109219576765);
    msg.setSource(60165U);
    msg.setSourceEntity(64U);
    msg.setDestination(16013U);
    msg.setDestinationEntity(41U);
    msg.timeout = 60124U;
    msg.lat = 0.619388162925;
    msg.lon = 0.720044848537;
    msg.z = 0.131140468494;
    msg.z_units = 19U;
    msg.speed = 0.963766809605;
    msg.speed_units = 56U;
    msg.duration = 28823U;
    msg.radius = 0.106605820023;
    msg.flags = 63U;
    msg.custom.assign("ILFVTEFYPTJWCBSMVTPUJRHNNJOWZRLHQJNXCJUQNGEQCKIKNMKJHDFXCEKLASYMQMFMDIFQOEPANRBQURPJZYOYMIHTBPTLTCPKPUPAUVRYCIEFBZTEBVJGJCQSOZEXOBYXVZADLNOVTQGYDCAJHXWSYMABVINDAGXHSRAHILWIZDWSKDOWFMDOKXVGSOPKKKORQUEVEUGGMGXFPZHS");

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
    msg.setTimeStamp(0.938164310982);
    msg.setSource(45105U);
    msg.setSourceEntity(111U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(68U);
    msg.timeout = 26367U;
    msg.lat = 0.503695906371;
    msg.lon = 0.494057709074;
    msg.z = 0.47735910192;
    msg.z_units = 136U;
    msg.speed = 0.0359570541166;
    msg.speed_units = 20U;
    msg.duration = 18361U;
    msg.radius = 0.986649395941;
    msg.flags = 181U;
    msg.custom.assign("ANARGSJVUYUNIZJDKMYUEQWXLUXXQKSVGWGXBTDJVGVGEBFIQPPALNCTFFNLWCUKQNMQESHREPAIXXTRPPYDTDKJHWZPVKBSWJORVZDDUSLDSIMNCTQHVJTZOHDTQJTHPXYWBXMEOLKHWFBMDVCAEYEQLRWBKMBWUZWFKBBTYOHJIRIZGIO");

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
    msg.setTimeStamp(0.735699213989);
    msg.setSource(61263U);
    msg.setSourceEntity(73U);
    msg.setDestination(1843U);
    msg.setDestinationEntity(43U);
    msg.custom.assign("ATMTUWIQQUYTPJZIJFLEJBXZKRMMDKBLXUDECBZHVHXXQBIJAOIICLOTVMKCDNMNKXZXSUZPTKNHZWESCZVWHGNEAFYISQJDOVUDYNOCTAPLBPFLPRIKOVKQDEAWPHLNLFHUQUVOVVTHWBBYVCEKQNIIMEROPSBXDLMXUCAQJSMRBRGPJGULXACSYOHDMHLGSRGKEPAISTGFZJFBUTEDAKYNZFWGTQYNMFSRC");

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
    msg.setTimeStamp(0.640497349348);
    msg.setSource(36128U);
    msg.setSourceEntity(171U);
    msg.setDestination(39546U);
    msg.setDestinationEntity(102U);
    msg.custom.assign("SKDMKAENWDORKIVVUOSQYNXOGFDBICHLSRWVBREMKSLWAOIEQZNTFPMVJAUFTKXA");

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
    msg.setTimeStamp(0.0899925930592);
    msg.setSource(37108U);
    msg.setSourceEntity(115U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(62U);
    msg.custom.assign("UYPNJVEDSZGGUIJGQISRANTEJYNKEABNQDTACDVAKZQQUMMNKOBTFHWZVEQZELJLEIWYQMSGYPRRDOCMGBBSFSGZZBXDZWARMSONRZWJIABICWTSVMXLVHLDYXOUFFVZFIPHONRXRMCTVGIWXVCIUEQDAKOJWGHXKDJCYLFWKMKFXZYCXNHRPJCTBNPGLIPJCJATAUSHTCOQRFWYDOELDHPIFURLOPUVVLUOLPKBQHGQXHKNWBMTTKHY");

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
    msg.setTimeStamp(0.523377635481);
    msg.setSource(45863U);
    msg.setSourceEntity(124U);
    msg.setDestination(38108U);
    msg.setDestinationEntity(131U);
    msg.timeout = 32552U;
    msg.lat = 0.9551396646;
    msg.lon = 0.0413227005684;
    msg.z = 0.556773815401;
    msg.z_units = 71U;
    msg.duration = 18833U;
    msg.speed = 0.539486398235;
    msg.speed_units = 223U;
    msg.type = 0U;
    msg.radius = 0.516623304168;
    msg.length = 0.463292735911;
    msg.bearing = 0.759353068671;
    msg.direction = 170U;
    msg.custom.assign("XKHMGJKCDBRHANRISERORWCGTOOMVBWDKPBYXZZNZMMCUKLIXVDZPQIRLOWKTDWERVVUEXGLFMJYXCEHNFLCCWATNLBJFZAUDQMRJWSAYOPQGYNYWTDZJKPABIASPXYATSJHENGPAIBOKTLJMOEVKRMYEXPGONJEFOFMY");

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
    msg.setTimeStamp(0.976043252993);
    msg.setSource(22470U);
    msg.setSourceEntity(198U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(163U);
    msg.timeout = 28253U;
    msg.lat = 0.0928504688656;
    msg.lon = 0.354928333829;
    msg.z = 0.258166023395;
    msg.z_units = 240U;
    msg.duration = 10056U;
    msg.speed = 0.617062922585;
    msg.speed_units = 151U;
    msg.type = 140U;
    msg.radius = 0.729987069005;
    msg.length = 0.124008641088;
    msg.bearing = 0.299085469375;
    msg.direction = 45U;
    msg.custom.assign("TCBLJIKVIWHPDEHZOBNFMQCHCXGVAARFGLTUBRXEVNCRXMWVULATSGBZJEIYCONIDTGPPPJAKKZUNVFEMZFQWCKFEMWQDXIDAFBIXQWJYDCLOJZYURZEOZMUETPLPAQFCHXQXRYRWWVBYBWNROKNSNLGRTSCPUMHHDRWPKIZIJPWBYO");

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
    msg.setTimeStamp(0.307851983532);
    msg.setSource(54040U);
    msg.setSourceEntity(245U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(191U);
    msg.timeout = 39860U;
    msg.lat = 0.132781351428;
    msg.lon = 0.954559966393;
    msg.z = 0.109448405804;
    msg.z_units = 106U;
    msg.duration = 16166U;
    msg.speed = 0.35460323443;
    msg.speed_units = 20U;
    msg.type = 102U;
    msg.radius = 0.343630994773;
    msg.length = 0.335045680676;
    msg.bearing = 0.333624660021;
    msg.direction = 110U;
    msg.custom.assign("RNVWOGXOJTIYZDGGZRSUUDVOWWNRTNKRUECUXKHXNFDIQZTJOPGFBVHNCHEKFFGBFXXXCYZAKMSQOZTHLMKASENAJAAWIPWCPIVBVDWQZTRZLDABDEMKIOLXIEYHDYOSQNVABBGCXMDPBIAQFDQVWKJASLJWGTHJKOWLSGOZYQUSKRBMJRUSCHHDPCVPUQTERSPVYF");

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
    msg.setTimeStamp(0.96539008148);
    msg.setSource(43330U);
    msg.setSourceEntity(35U);
    msg.setDestination(49267U);
    msg.setDestinationEntity(2U);
    msg.duration = 4279U;
    msg.custom.assign("CTKMZVMJZLKVOKHHSIWYXEMWJFSXFBHKEWLRCZEJMACHLUGLLJJNDT");

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
    msg.setTimeStamp(0.867960053202);
    msg.setSource(44161U);
    msg.setSourceEntity(153U);
    msg.setDestination(61828U);
    msg.setDestinationEntity(204U);
    msg.duration = 46842U;
    msg.custom.assign("MDQRXBCRXTDXVPWZNNTDRMMKIVYOOLYIUEGIFKPEAKIQZHJYVQZCUOYGWDOREZYEQTZOZPBTGABBOMMYXTGXELAPKSDUFNWSVWBSCLFHPWLSLZJCCUHWEXWCHFPJEBRSBBODIT");

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
    msg.setTimeStamp(0.412092802646);
    msg.setSource(12160U);
    msg.setSourceEntity(167U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(29U);
    msg.duration = 50090U;
    msg.custom.assign("BGVUBHSEHPMDOSDYYHEXLURXXDIQTBFSEXVCWNZRJWIDBLAEOAZGPVJTETNUBAXKZYGHQFINXLKMMCMUTGRGLQPKGKOUCQZXISVOBFIYFMZHNOFYAPITEIBKHVCMYHFIUHVSDKNLFGEYLJVAKRWZRBCGIAVUABPCNNPJFHNXWEPFWZYADCQXLCSOZQODZMOJLRTJQUKXDRTUPMFQTAPLZWKSJCSGRTLJYYRGVDMCNWWJOWKNRWVHDUBISS");

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
    msg.setTimeStamp(0.06629533715);
    msg.setSource(27061U);
    msg.setSourceEntity(136U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(179U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.632138746185;
    tmp_msg_0.z_units = 249U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52653U;
    msg.custom.assign("AXILJOBTHSVMZDJZWZHXJHSVPGIYFWVCIGJSDDKNXYAXIMKPWQZXAXRMDGCVSQCKRFITSNAPRZPYVSWOPSZNHOKZTGLWULUWIDXDJDKMDBOEHUTOVQXRJUCOLEBLEFEYRSYFQNBVOX");

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
    msg.setTimeStamp(0.396352552942);
    msg.setSource(457U);
    msg.setSourceEntity(13U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(248U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.431817189619;
    tmp_msg_0.z_units = 21U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23033U;
    msg.custom.assign("DCMTSVIERFOLTZKAHQJZGHMMCUPQKHCJHMAXTLBTLYGERHSCADISUBRNUPIGEXMBLLGGVOCWZKKULDWJAJGNSNUORCPHKOTJWFOQYBYJOBYKXOZHCANXLVXDKUYZJEFSRZPJRVWSITDPSVGBHIOMEXFAMVNQANZCWWMFMVDV");

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
    msg.setTimeStamp(0.673099754314);
    msg.setSource(5004U);
    msg.setSourceEntity(100U);
    msg.setDestination(24325U);
    msg.setDestinationEntity(8U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.575175548945;
    msg.control.set(tmp_msg_0);
    msg.duration = 18790U;
    msg.custom.assign("TJGUPONPSFXNDKZQBRAIXTLHVAXFLVOVUQOMNSPTWIRCIRQOQIYFSPCZIUPSBKTZFOMMJLMKOKWHLDGNPSHGDHVDVEUEDHGDXZRICIAKLUGBWSLDMRYUYQAEZSXIWUJHZSNRUQTULARTVJJAZPKYCCFAJBTYHTCDYBHFJXHQONELGMWJKQTBYENCJIWTO");

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
    msg.setTimeStamp(0.437276405161);
    msg.setSource(12685U);
    msg.setSourceEntity(168U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(184U);
    msg.timeout = 42005U;
    msg.lat = 0.890940417822;
    msg.lon = 0.940833824392;
    msg.z = 0.391819036821;
    msg.z_units = 91U;
    msg.speed = 0.162710090887;
    msg.speed_units = 246U;
    msg.bearing = 0.772744362875;
    msg.cross_angle = 0.542083095091;
    msg.width = 0.670300875388;
    msg.length = 0.869194421946;
    msg.hstep = 0.24804924301;
    msg.coff = 206U;
    msg.alternation = 191U;
    msg.flags = 149U;
    msg.custom.assign("GPDSGHJIJLRBV");

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
    msg.setTimeStamp(0.179597378602);
    msg.setSource(43488U);
    msg.setSourceEntity(125U);
    msg.setDestination(49871U);
    msg.setDestinationEntity(28U);
    msg.timeout = 32149U;
    msg.lat = 0.510878079694;
    msg.lon = 0.864274750565;
    msg.z = 0.919445879403;
    msg.z_units = 199U;
    msg.speed = 0.916449853109;
    msg.speed_units = 198U;
    msg.bearing = 0.144348572048;
    msg.cross_angle = 0.467231529579;
    msg.width = 0.137878352934;
    msg.length = 0.0986504367626;
    msg.hstep = 0.0990538298426;
    msg.coff = 191U;
    msg.alternation = 159U;
    msg.flags = 206U;
    msg.custom.assign("DLQLQDCGXPVPHXOLSGJHCHNKEPKEHGERMUOUDKJIWMKTSQZZCRJAUNICJQKZFVSSUUJFVLFOPZGMWEHFFIXEPGMXYMTDKITYAAIQRANCBZHXAGTUMOJTIFHFOBKISPBYBXMGFCGINV");

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
    msg.setTimeStamp(0.362934169281);
    msg.setSource(47996U);
    msg.setSourceEntity(15U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(111U);
    msg.timeout = 14497U;
    msg.lat = 0.608046638972;
    msg.lon = 0.63514950875;
    msg.z = 0.798884896873;
    msg.z_units = 204U;
    msg.speed = 0.195225475279;
    msg.speed_units = 78U;
    msg.bearing = 0.61311987326;
    msg.cross_angle = 0.508194081025;
    msg.width = 0.481720457887;
    msg.length = 0.735217887798;
    msg.hstep = 0.619350804558;
    msg.coff = 115U;
    msg.alternation = 133U;
    msg.flags = 230U;
    msg.custom.assign("GAKHUIFVCODIUOSHHESQPYQKFADZHQFVYDFLSHXEDSJIQGNYAVFSTRMOFLMDNOALNMHGBDWBIEBRTWPDAUZVCGFBNRPNIQJCFVVRHDRBCTKBU");

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
    msg.setTimeStamp(0.0979153330344);
    msg.setSource(8138U);
    msg.setSourceEntity(250U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(184U);
    msg.timeout = 61856U;
    msg.lat = 0.531241336951;
    msg.lon = 0.335120683484;
    msg.z = 0.206621793762;
    msg.z_units = 90U;
    msg.speed = 0.952750010098;
    msg.speed_units = 8U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.341173910723;
    tmp_msg_0.y = 0.785984150421;
    tmp_msg_0.z = 0.28091023999;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KONMZYMNOBPDAMCXSBBYKRSDQCLNCZELYVWJQSDBICXWHIUYUORETURPJTUIEJUANCVLIERYDUAFSTHDALORMSPNRXGXASMOVKEPLIWXKCNJJHKOHRNGBLWGVWMTVAHHEHULLDQCZJHNBKSQFYMFFGZIXVBZWLQUKOZKTZJJCMSKOIFMLQWZBRJXCVXPZGGYUBVYTIDHQSXFABACRINVOSDTEEMPPAQKRTYQXFGTWFGNPFQPIAGEHYZDUGFTE");

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
    msg.setTimeStamp(0.985056022571);
    msg.setSource(37575U);
    msg.setSourceEntity(0U);
    msg.setDestination(45771U);
    msg.setDestinationEntity(231U);
    msg.timeout = 47088U;
    msg.lat = 0.842068420851;
    msg.lon = 0.26210408297;
    msg.z = 0.0362510052117;
    msg.z_units = 220U;
    msg.speed = 0.600404542531;
    msg.speed_units = 161U;
    msg.custom.assign("XVYOOAJLRWGEINOAQPRCYDDDPDELPUTYWAWDQCXCVXOLMUGHZBGFKHWROZXNCLMFSUBQ");

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
    msg.setTimeStamp(0.245269383365);
    msg.setSource(12639U);
    msg.setSourceEntity(28U);
    msg.setDestination(50623U);
    msg.setDestinationEntity(195U);
    msg.timeout = 20351U;
    msg.lat = 0.261182268388;
    msg.lon = 0.36432301345;
    msg.z = 0.773523402062;
    msg.z_units = 228U;
    msg.speed = 0.945535659411;
    msg.speed_units = 24U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.825249250135;
    tmp_msg_0.y = 0.0796886095446;
    tmp_msg_0.z = 0.136570562256;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OTFZJAJPHPVKDZJIKDBAFWQEGMENEWGFNHLTR");

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
    msg.setTimeStamp(0.57142117343);
    msg.setSource(26451U);
    msg.setSourceEntity(115U);
    msg.setDestination(28637U);
    msg.setDestinationEntity(47U);
    msg.x = 0.261264896487;
    msg.y = 0.806539349178;
    msg.z = 0.269890259681;

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
    msg.setTimeStamp(0.197415268267);
    msg.setSource(18375U);
    msg.setSourceEntity(209U);
    msg.setDestination(19321U);
    msg.setDestinationEntity(71U);
    msg.x = 0.52649191036;
    msg.y = 0.747193637444;
    msg.z = 0.614597131397;

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
    msg.setTimeStamp(0.119474134296);
    msg.setSource(62855U);
    msg.setSourceEntity(130U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(53U);
    msg.x = 0.219200108416;
    msg.y = 0.0547688084896;
    msg.z = 0.16746325939;

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
    msg.setTimeStamp(0.805096531251);
    msg.setSource(31743U);
    msg.setSourceEntity(188U);
    msg.setDestination(837U);
    msg.setDestinationEntity(163U);
    msg.timeout = 53084U;
    msg.lat = 0.825716388971;
    msg.lon = 0.753974494342;
    msg.z = 0.0578726983228;
    msg.z_units = 85U;
    msg.amplitude = 0.744658481467;
    msg.pitch = 0.813112468592;
    msg.speed = 0.228644445874;
    msg.speed_units = 112U;
    msg.custom.assign("ZBYVJBURNOHMHXDWKQVENJGHJEDLNRSTGOXVOCDHKNGDQWAFVCZZYNMPCKISTFWYHAHUCQDIPZIUEBIBZYFITGRUIKWZBSDCZJPMVJH");

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
    msg.setTimeStamp(0.20818927168);
    msg.setSource(8918U);
    msg.setSourceEntity(141U);
    msg.setDestination(3052U);
    msg.setDestinationEntity(238U);
    msg.timeout = 59874U;
    msg.lat = 0.829842510295;
    msg.lon = 0.7919397116;
    msg.z = 0.938152288362;
    msg.z_units = 83U;
    msg.amplitude = 0.24554479433;
    msg.pitch = 0.954616574145;
    msg.speed = 0.822813194191;
    msg.speed_units = 87U;
    msg.custom.assign("BGWSSEPUURHRHLLSWXXFSVDVDXTNULXOCZDWVRHHHFWKRAKGPMAJNJSGDCBAQVYYMBCAEWCXCCIMDRGBJRUJWKQESRTHLRPVYOXUGJMFSZIZCTAYGLBNWDYHIRQNAMTEZDODFFOYAWTFQULLNIPMZCOTBIIHXJMVAZVZVIJDZ");

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
    msg.setTimeStamp(0.00903049892823);
    msg.setSource(63001U);
    msg.setSourceEntity(233U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(63U);
    msg.timeout = 33604U;
    msg.lat = 0.787145036049;
    msg.lon = 0.23001667878;
    msg.z = 0.464037171426;
    msg.z_units = 80U;
    msg.amplitude = 0.661735502689;
    msg.pitch = 0.127772701129;
    msg.speed = 0.541842038276;
    msg.speed_units = 56U;
    msg.custom.assign("EYAQWAPYJVOGMTRBCXFPVNRBXSBUEKMRGFDYOLIQRUHHIUIVYEWTZQBPLWVCWDAECSEBNEIYIWISEVSFJMZNWOAGYWAMNSGJCMOCXBLGJFRXPROALXRCQHZBXQXHWVIPIEFCPWDFVSORQIKDORJKSCMHXFNZAIMNYUPDLRKUDOTGLYPYUJNLUFAAKAQJXSMZZWUHEUBHTZTTCGTDMHZKHVHKKBLOGQJMCEGJQUNJQLD");

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
    msg.setTimeStamp(0.728953193675);
    msg.setSource(6597U);
    msg.setSourceEntity(210U);
    msg.setDestination(42679U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.153119439181);
    msg.setSource(21795U);
    msg.setSourceEntity(119U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.320418784189);
    msg.setSource(60520U);
    msg.setSourceEntity(195U);
    msg.setDestination(32635U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.271282226913);
    msg.setSource(13680U);
    msg.setSourceEntity(24U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.172855917128;
    msg.lon = 0.0785442077817;
    msg.z = 0.874300131201;
    msg.z_units = 180U;
    msg.radius = 0.0636189607149;
    msg.duration = 2194U;
    msg.speed = 0.205260078305;
    msg.speed_units = 126U;
    msg.custom.assign("YZQTSYBCKDFBCMFZIUOBAOEAMXHSLRFVCRIVLSTKRTQPKOJIRGADNLEUPERFVUJVIPSSKXYENEHJHLMEYDZYQCPEYPFWOALTLUZKBNMOKWXNRCAGQFGMUFAMOEQCKVGPWRUWCYNCXGWJKPBITLHCZGVGLBBAWDKSSPAFUZMHXMIFYRVVXTOGQVZLPQSMPOFADTDNBXRGUONZUS");

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
    msg.setTimeStamp(0.255560787458);
    msg.setSource(46831U);
    msg.setSourceEntity(187U);
    msg.setDestination(45054U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.445087980945;
    msg.lon = 0.708226899915;
    msg.z = 0.97110948734;
    msg.z_units = 120U;
    msg.radius = 0.84829497508;
    msg.duration = 5333U;
    msg.speed = 0.437524670595;
    msg.speed_units = 251U;
    msg.custom.assign("BXJPHMRYWZTDASDJUAEWOVEPCNLJIPWNMCUKYIFSJOOIK");

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
    msg.setTimeStamp(0.522702980236);
    msg.setSource(15836U);
    msg.setSourceEntity(158U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.325234236986;
    msg.lon = 0.538981692281;
    msg.z = 0.435533037278;
    msg.z_units = 215U;
    msg.radius = 0.909656952346;
    msg.duration = 58982U;
    msg.speed = 0.899817684229;
    msg.speed_units = 247U;
    msg.custom.assign("IELTKRZAAXTXYBCWOAYDWESMJQELUDYXYNSTATWIFZENICBYWGGRLSITVXMHCHJQKJKFVNVOZCPTVBWURPLGZMVOQDWXEGBDYNTQHEDKLCSSBNSYDXOFRZMR");

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
    msg.setTimeStamp(0.0181278731268);
    msg.setSource(13175U);
    msg.setSourceEntity(203U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(151U);
    msg.timeout = 46833U;
    msg.flags = 253U;
    msg.lat = 0.711602877595;
    msg.lon = 0.61030351173;
    msg.start_z = 0.436048410996;
    msg.start_z_units = 40U;
    msg.end_z = 0.295079995384;
    msg.end_z_units = 115U;
    msg.radius = 0.903963908792;
    msg.speed = 0.724000876598;
    msg.speed_units = 44U;
    msg.custom.assign("SMXKSQGCBBDHVJRFSJEVFKVRMKDYMUAHEMWGLGZNWDAGLVNOQDCMFSYSPNLJBCAEVIEJIKFZQILBJSZHYJFNLBCAYTWPEUNOPCWPKHXQFKUXTQSOQWTXRDKPPJPDGIWEZVWXRTRQKNOOYBUPFVMIVCWUGBB");

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
    msg.setTimeStamp(0.697082641348);
    msg.setSource(36311U);
    msg.setSourceEntity(109U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(141U);
    msg.timeout = 2370U;
    msg.flags = 170U;
    msg.lat = 0.523144058979;
    msg.lon = 0.433429525226;
    msg.start_z = 0.604811369241;
    msg.start_z_units = 241U;
    msg.end_z = 0.851423022196;
    msg.end_z_units = 116U;
    msg.radius = 0.0383211713436;
    msg.speed = 0.190674552457;
    msg.speed_units = 123U;
    msg.custom.assign("MMFAZYIXJJUKMXOXEEECXKLVLWFJQGAWFXSNDCCYSTGIHZHXSROAAJTSUTCGZHORGMPNUSAJCPRDGIZYUGSQXZJTRPMHTPQQERAPNBYHBKAFWODDUBNBTTJCYNSCTWFFCZIKYQLGQMTFKEZUJOLQBHLEWKBNURWC");

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
    msg.setTimeStamp(0.676253197191);
    msg.setSource(54339U);
    msg.setSourceEntity(246U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(10U);
    msg.timeout = 34694U;
    msg.flags = 23U;
    msg.lat = 0.755910497783;
    msg.lon = 0.825995572807;
    msg.start_z = 0.868709241023;
    msg.start_z_units = 233U;
    msg.end_z = 0.784582791358;
    msg.end_z_units = 121U;
    msg.radius = 0.948279154451;
    msg.speed = 0.683338454594;
    msg.speed_units = 183U;
    msg.custom.assign("OEBXZTYGZYVARXAOALZTGHHBKIQDDCDRHRVJYUSY");

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
    msg.setTimeStamp(0.689934127543);
    msg.setSource(5314U);
    msg.setSourceEntity(160U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(195U);
    msg.timeout = 51194U;
    msg.lat = 0.53167004459;
    msg.lon = 0.154365644565;
    msg.z = 0.865475767138;
    msg.z_units = 115U;
    msg.speed = 0.443622138434;
    msg.speed_units = 204U;
    msg.custom.assign("GMYABUSDFELYOGBPDJWODIWLGATJGKDBIAIKEQMPWWWFJMQBXKFXHCOGUQIOQSUPVAZXNNEFSQMLOVGKBHLHMVAZFPJDVQSTZEHYXUGDZGGTNJELZDIOUMZUAFCNVHTZBOBRHYDTLCJHVCJAILISNUCTIUEH");

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
    msg.setTimeStamp(0.666234139986);
    msg.setSource(12463U);
    msg.setSourceEntity(153U);
    msg.setDestination(57806U);
    msg.setDestinationEntity(172U);
    msg.timeout = 49213U;
    msg.lat = 0.996756094014;
    msg.lon = 0.101278839307;
    msg.z = 0.755852731328;
    msg.z_units = 14U;
    msg.speed = 0.338834858637;
    msg.speed_units = 156U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.04844759592;
    tmp_msg_0.y = 0.262247508771;
    tmp_msg_0.z = 0.275302114036;
    tmp_msg_0.t = 0.0322923727257;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ECCBBVBUHSHCKXDNROZVPVFXZRJCJEDOLXHHPAZUOYQXOQISDGMPTPKQAFLAVPLDIXUWDSRPDIQFWWEEMHJJNYZMSEHKIIMCYIMBWKBXHNUJDIIUXLKQFLAZEJCBTJATVJFFAELBHBFHUXUNDSKYMWBKYQZNZSCSTNMCUEHLTSBPWRTOGOTQURFOOOGTATNXRJAFGVJRQX");

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
    msg.setTimeStamp(0.0103020960487);
    msg.setSource(962U);
    msg.setSourceEntity(167U);
    msg.setDestination(27932U);
    msg.setDestinationEntity(91U);
    msg.timeout = 32855U;
    msg.lat = 0.00154728331428;
    msg.lon = 0.653209628857;
    msg.z = 0.590646681529;
    msg.z_units = 221U;
    msg.speed = 0.820208955745;
    msg.speed_units = 86U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.739985818005;
    tmp_msg_0.y = 0.67380527705;
    tmp_msg_0.z = 0.0613766497098;
    tmp_msg_0.t = 0.230054310506;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ATIUPGKXHZHIAJFGSXRRACDNHNYNDPVEXRE");

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
    msg.setTimeStamp(0.99993510178);
    msg.setSource(34939U);
    msg.setSourceEntity(9U);
    msg.setDestination(56267U);
    msg.setDestinationEntity(45U);
    msg.x = 0.0124118071744;
    msg.y = 0.237358864797;
    msg.z = 0.371690964232;
    msg.t = 0.579839937933;

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
    msg.setTimeStamp(0.862979042303);
    msg.setSource(46014U);
    msg.setSourceEntity(223U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(181U);
    msg.x = 0.574975499261;
    msg.y = 0.714829897008;
    msg.z = 0.015287600621;
    msg.t = 0.454280829768;

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
    msg.setTimeStamp(0.427894123058);
    msg.setSource(60438U);
    msg.setSourceEntity(32U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(127U);
    msg.x = 0.13179295788;
    msg.y = 0.205314967601;
    msg.z = 0.666931366064;
    msg.t = 0.649137784907;

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
    msg.setTimeStamp(0.872229659096);
    msg.setSource(30974U);
    msg.setSourceEntity(188U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(225U);
    msg.timeout = 21988U;
    msg.name.assign("ACVXZXKSYPIMOWERGTLMPQXCWTOLRNYZNDQFZQWTDXOFOEWBDDMFGQQTHBUCKSCSIWOIUACHYDLRNDIZNYQHPFJYAITUNPAEXLFCQLWVFPBJPGXFQVLBRRFDUYFKUUVOSSRGMMVGKEYTOBZHMKVREJXWOGXHJWEHGNGCVPUNZZSJWVSUBPKWLNCAYCESLDPMHXVHISDABRMIKCMLGINVYIMBKOKABQHETHZTOASJNT");
    msg.custom.assign("UYYLOBANQEJSEXIHLALJLRXXFBZTKQSATVGIJLWYBCWLSDZRCOZN");

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
    msg.setTimeStamp(0.486383129709);
    msg.setSource(25476U);
    msg.setSourceEntity(63U);
    msg.setDestination(42766U);
    msg.setDestinationEntity(102U);
    msg.timeout = 60589U;
    msg.name.assign("KKNMEHDWASGRVKIOFHYJNFUPQOFWCLRJNMTCIODAHBJHUEZGAULXSJOTLEPOVAFIXODLETFEWAKDRPYAIQPEWTFDIMSPUZEIVKJYSVQZWZSSBXXGHIBNORNQ");
    msg.custom.assign("WPCDZFBRSACKLOUZUMCLDNPZNRHZTBLTPHIOJTUJSFNVBUCUIQHJYIRYJSJDMOXBWZLCPFHG");

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
    msg.setTimeStamp(0.808123141035);
    msg.setSource(33509U);
    msg.setSourceEntity(176U);
    msg.setDestination(39090U);
    msg.setDestinationEntity(49U);
    msg.timeout = 52284U;
    msg.name.assign("INEMUNLRGPUWTSPOWMMTECXWUEMVVZMARLTQXHUMBFCTELJAXLBMNRNVLNYWEYNEVTAXVHSTXBNJZRJUTZHPCZIWMZODSRBDAOFOUWYPMYPGFAIBZJFFVPYFFREBUICINHGPICKSJDOQZDCBPASAELVBHCPFKXXQLZQJSFDJYVUTQFKRHTQWIVVUZOQSIARRHEGCNTKHJCBQKHHIGEBOJKGGCYUIDKQ");
    msg.custom.assign("PZRYRPESXQUVNKDFTOWKIZHHPFVFRDFXHIQZEQADZQLNVKLNROUSTJJOGJBLFQOIZAGAIPEBQGNMVWYCJTBETMQRRZPXPINSMYMLZTGYWPHXOCSMGNDCMFXLOJOHWDSABYYWRWEZLDTRVAJKGKUJUNGZNWEVKTREQOLXAAQSYCFUBLIBGXCXFVZXDBJSUMTWEGAYWXJOKVHVCAMJPNYFCIICKCHUSPKIKYHBH");

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
    msg.setTimeStamp(0.0858416657678);
    msg.setSource(16575U);
    msg.setSourceEntity(106U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.862463024017;
    msg.lon = 0.960099899249;
    msg.z = 0.972494970106;
    msg.z_units = 220U;
    msg.speed = 0.919088128426;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0146845976715;
    tmp_msg_0.y = 0.0729145374137;
    tmp_msg_0.z = 0.159090200665;
    tmp_msg_0.t = 0.80951770299;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 25765U;
    tmp_msg_1.off_x = 0.0284725633327;
    tmp_msg_1.off_y = 0.756540848278;
    tmp_msg_1.off_z = 0.777134232827;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.251103417852;
    msg.custom.assign("RACHTOPMYHVPIKWTTDGFWUOQDZWXWMOPEJSKSQMIRMVYKPXEOLCZXPGEXMECFVBSSJZKCWFPWRLHEUIVJDDXLBDGTSAOJVMNZYBWEGNCSEDONWTBZENZTBGLLZFTG");

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
    msg.setTimeStamp(0.110164577436);
    msg.setSource(12589U);
    msg.setSourceEntity(198U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.740427295441;
    msg.lon = 0.819604237664;
    msg.z = 0.765699526198;
    msg.z_units = 238U;
    msg.speed = 0.87045710087;
    msg.speed_units = 122U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.547700621564;
    tmp_msg_0.y = 0.375171531061;
    tmp_msg_0.z = 0.606809957059;
    tmp_msg_0.t = 0.210577036483;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.74278883963;
    msg.custom.assign("UUGDVIRPXYNOZAZJXCSTHCGMUNWMZJXJFEYREDJKFGDVYURBCOLPRQAAFHICNKJVPLXSKODWWXCTZWPLNPBKTVALYHIGAWRNOWOMSAQFYZTDTVGLYKCHRXREVXIQBGBJGEIBNTFYZOOMPIHKVBUDVZFTPJOEGQLBPMLEHDOIRYMQMQEFBZBKNQAMWTEXJYUGFUFNIPESMQHZQIDQCSWHDAHSCSDXAVXWWBKEJNCSSMRHPNKUTTUJR");

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
    msg.setTimeStamp(0.43855909185);
    msg.setSource(2951U);
    msg.setSourceEntity(90U);
    msg.setDestination(24865U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.985823558305;
    msg.lon = 0.430605721188;
    msg.z = 0.264066599729;
    msg.z_units = 68U;
    msg.speed = 0.910430539839;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.660185173553;
    tmp_msg_0.y = 0.40024339733;
    tmp_msg_0.z = 0.590899643902;
    tmp_msg_0.t = 0.620741797013;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.477785155772;
    msg.custom.assign("HKXAFEKCLQUYHAYBHSRQEWKGWOZLMSKZTJVHEIJBVLTVCOCVGNBUTVDJZSPKXQVNFSPYJYALBTTLWWAVIRSSZROJMFJRIIPPPBHCUQRBE");

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
    msg.setTimeStamp(0.572213089296);
    msg.setSource(60799U);
    msg.setSourceEntity(238U);
    msg.setDestination(59009U);
    msg.setDestinationEntity(56U);
    msg.vid = 58302U;
    msg.off_x = 0.871458722307;
    msg.off_y = 0.725221420165;
    msg.off_z = 0.918747740983;

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
    msg.setTimeStamp(0.183822353185);
    msg.setSource(46671U);
    msg.setSourceEntity(87U);
    msg.setDestination(38140U);
    msg.setDestinationEntity(87U);
    msg.vid = 15626U;
    msg.off_x = 0.0743111729735;
    msg.off_y = 0.940350396284;
    msg.off_z = 0.935875167386;

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
    msg.setTimeStamp(0.52372151055);
    msg.setSource(57182U);
    msg.setSourceEntity(233U);
    msg.setDestination(23629U);
    msg.setDestinationEntity(173U);
    msg.vid = 59826U;
    msg.off_x = 0.635008083495;
    msg.off_y = 0.33493914975;
    msg.off_z = 0.29202017521;

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
    msg.setTimeStamp(0.675598437391);
    msg.setSource(49200U);
    msg.setSourceEntity(68U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.700691762381);
    msg.setSource(61563U);
    msg.setSourceEntity(117U);
    msg.setDestination(64377U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.723634207528);
    msg.setSource(48531U);
    msg.setSourceEntity(250U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.246519234647);
    msg.setSource(43481U);
    msg.setSourceEntity(87U);
    msg.setDestination(65075U);
    msg.setDestinationEntity(203U);
    msg.mid = 61354U;

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
    msg.setTimeStamp(0.738241740658);
    msg.setSource(61789U);
    msg.setSourceEntity(103U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(11U);
    msg.mid = 52705U;

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
    msg.setTimeStamp(0.727218223376);
    msg.setSource(20958U);
    msg.setSourceEntity(26U);
    msg.setDestination(57125U);
    msg.setDestinationEntity(136U);
    msg.mid = 51049U;

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
    msg.setTimeStamp(0.532194668197);
    msg.setSource(12110U);
    msg.setSourceEntity(217U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(153U);
    msg.state = 247U;
    msg.eta = 48377U;
    msg.info.assign("KOTYRPGOHPSDMQSVGPOAIUTFUQYTWMASNRERGCCI");

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
    msg.setTimeStamp(0.754498135939);
    msg.setSource(64469U);
    msg.setSourceEntity(46U);
    msg.setDestination(60133U);
    msg.setDestinationEntity(149U);
    msg.state = 49U;
    msg.eta = 13881U;
    msg.info.assign("HLYCTDZXCJHQIRKFSAHEVSYVZUUVQHNOIKXZOGOHQKBLNXACQUWYEJSLMEOITWTUDTLNEXXMNSFPHAWKZNUYIACIBLOVVJVSSVGZOJDMSQHYGFITDEXBFCJZHWXNEDJNOBLAAYIUYBFJPOYPF");

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
    msg.setTimeStamp(0.165612405902);
    msg.setSource(19012U);
    msg.setSourceEntity(94U);
    msg.setDestination(50140U);
    msg.setDestinationEntity(13U);
    msg.state = 122U;
    msg.eta = 41042U;
    msg.info.assign("SEWSBFXQJZUHXCBFOYTPKQTQABKPNAPCNHZFLCKZGTVMARUJVEDJCYUEIIDXBPCMNWVLGQXRTALBPLNFIOLZEXGCXLKNZWEJLWHQAFUSPBEXYEUCDVEHSDMUTNDOUKUWFOSTJIXSDVRYBIWTQOGDZVLYSQYUMTRBWFLHYCKSMWEMMPKZITRNTBKAHLOYMJHPOGRVOGIOZZUXZVMRJOIHRGSGPDIAVA");

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
    msg.setTimeStamp(0.989536000965);
    msg.setSource(25703U);
    msg.setSourceEntity(25U);
    msg.setDestination(38184U);
    msg.setDestinationEntity(56U);
    msg.system = 27501U;
    msg.duration = 51874U;
    msg.speed = 0.737576163286;
    msg.speed_units = 109U;
    msg.x = 0.500532043722;
    msg.y = 0.996845521128;
    msg.z = 0.299508273705;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.923705628488);
    msg.setSource(39276U);
    msg.setSourceEntity(49U);
    msg.setDestination(60890U);
    msg.setDestinationEntity(126U);
    msg.system = 53727U;
    msg.duration = 15943U;
    msg.speed = 0.615728220824;
    msg.speed_units = 220U;
    msg.x = 0.771607297331;
    msg.y = 0.321629627177;
    msg.z = 0.422453642431;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.0603722776738);
    msg.setSource(16306U);
    msg.setSourceEntity(244U);
    msg.setDestination(6270U);
    msg.setDestinationEntity(133U);
    msg.system = 21811U;
    msg.duration = 15213U;
    msg.speed = 0.903758611682;
    msg.speed_units = 205U;
    msg.x = 0.0293666205247;
    msg.y = 0.667008742523;
    msg.z = 0.94844163554;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.939343448755);
    msg.setSource(21227U);
    msg.setSourceEntity(1U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.687447661003;
    msg.lon = 0.873757163283;
    msg.speed = 0.0117346265284;
    msg.speed_units = 70U;
    msg.duration = 32979U;
    msg.sys_a = 10663U;
    msg.sys_b = 53986U;
    msg.move_threshold = 0.209098236206;

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
    msg.setTimeStamp(0.00872952625538);
    msg.setSource(63471U);
    msg.setSourceEntity(218U);
    msg.setDestination(59162U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.459486865766;
    msg.lon = 0.612320506719;
    msg.speed = 0.266242442613;
    msg.speed_units = 63U;
    msg.duration = 140U;
    msg.sys_a = 32717U;
    msg.sys_b = 45989U;
    msg.move_threshold = 0.837810397504;

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
    msg.setTimeStamp(0.290856707635);
    msg.setSource(4766U);
    msg.setSourceEntity(105U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.330537258247;
    msg.lon = 0.659010962585;
    msg.speed = 0.590274795397;
    msg.speed_units = 200U;
    msg.duration = 55224U;
    msg.sys_a = 62377U;
    msg.sys_b = 51468U;
    msg.move_threshold = 0.613661215727;

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
    msg.setTimeStamp(0.829152997559);
    msg.setSource(22985U);
    msg.setSourceEntity(205U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.765845024702;
    msg.lon = 0.101158209164;
    msg.z = 0.190056546052;
    msg.z_units = 186U;
    msg.speed = 0.944669275651;
    msg.speed_units = 69U;
    msg.custom.assign("JXFMZHJZZIPERUBNPDYENQXDMIMDR");

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
    msg.setTimeStamp(0.641221470871);
    msg.setSource(62964U);
    msg.setSourceEntity(204U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.154854456375;
    msg.lon = 0.368425637529;
    msg.z = 0.61725181676;
    msg.z_units = 36U;
    msg.speed = 0.292225423399;
    msg.speed_units = 171U;
    msg.custom.assign("FTPSDKXISFFWIBTHDUQXUPRJGAYR");

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
    msg.setTimeStamp(0.660069443666);
    msg.setSource(17082U);
    msg.setSourceEntity(231U);
    msg.setDestination(313U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.418162349017;
    msg.lon = 0.345522086624;
    msg.z = 0.579122165168;
    msg.z_units = 48U;
    msg.speed = 0.845164985322;
    msg.speed_units = 174U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.487043015747;
    tmp_msg_0.lon = 0.398970739119;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EPZZRORGYDXTMUZWESVFJUCVJWVJFZQGUTQPLFEMDLOXLKOMPKOXQIFPUHOJNSNHKYDITEVWDAEKTRLBOMCNYEBUXHTUKFRCXQJDAYREJXAIZDHOMIACFBPKSV");

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
    msg.setTimeStamp(0.195467446622);
    msg.setSource(21312U);
    msg.setSourceEntity(225U);
    msg.setDestination(41477U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.438019424627;
    msg.lon = 0.614677648927;

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
    msg.setTimeStamp(0.505029932187);
    msg.setSource(34759U);
    msg.setSourceEntity(204U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.324586532223;
    msg.lon = 0.952775990374;

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
    msg.setTimeStamp(0.14433035866);
    msg.setSource(50018U);
    msg.setSourceEntity(10U);
    msg.setDestination(50865U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.0480467242197;
    msg.lon = 0.542593375125;

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
    msg.setTimeStamp(0.243230818048);
    msg.setSource(63752U);
    msg.setSourceEntity(211U);
    msg.setDestination(18984U);
    msg.setDestinationEntity(164U);
    msg.timeout = 51497U;
    msg.lat = 0.571927277542;
    msg.lon = 0.329229576437;
    msg.z = 0.989675598452;
    msg.z_units = 103U;
    msg.pitch = 0.346763468248;
    msg.amplitude = 0.809256943957;
    msg.duration = 37506U;
    msg.speed = 0.823673348439;
    msg.speed_units = 217U;
    msg.radius = 0.522921092888;
    msg.direction = 111U;
    msg.custom.assign("XSNBOYAWPGULSJNPAUXLKHCMHHWRYMDBGNMLTIHEMEHCOOGFYVLSTUCUSHKNRBQGKKQWLBPICWZUCDTYTNQVNOFCFNUIIPISQFBPJZPOUJLLFMFTKVOGZKNYQXFDXFZDQPAJKAKDYDEZRJFBWCBCJINHVGKRSQDB");

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
    msg.setTimeStamp(0.961638326979);
    msg.setSource(31195U);
    msg.setSourceEntity(247U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(108U);
    msg.timeout = 45405U;
    msg.lat = 0.38654378451;
    msg.lon = 0.317809436295;
    msg.z = 0.552987059614;
    msg.z_units = 245U;
    msg.pitch = 0.673631237536;
    msg.amplitude = 0.450218023842;
    msg.duration = 16308U;
    msg.speed = 0.0525253864636;
    msg.speed_units = 252U;
    msg.radius = 0.683415408785;
    msg.direction = 91U;
    msg.custom.assign("JOIWQNHPOVGBXHRMQISGPCEJVKCLZPJNRWHIZVLFDHFOIRYLKWCOPUBXJQVJZSATNGZSDHQZIGFQQFDYGDNCBWWHFJZASEXEUUQKOXSLYXGABPNHAUVDRHRFKGRQWMKDTOSSJBELBRPPNPYFKCBVAMYEYNLETMZXXKATKMVSAVEM");

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
    msg.setTimeStamp(0.0405950597861);
    msg.setSource(24558U);
    msg.setSourceEntity(236U);
    msg.setDestination(56878U);
    msg.setDestinationEntity(86U);
    msg.timeout = 18011U;
    msg.lat = 0.663899520848;
    msg.lon = 0.246808946014;
    msg.z = 0.845936367084;
    msg.z_units = 166U;
    msg.pitch = 0.678300237893;
    msg.amplitude = 0.286502513642;
    msg.duration = 61243U;
    msg.speed = 0.858064046904;
    msg.speed_units = 151U;
    msg.radius = 0.753354196059;
    msg.direction = 207U;
    msg.custom.assign("AXJCFATDEVXEVFIQXNMDBTPEWJDVGEECSMHDMOGZYNQBNUSONPARZFHUULXWYLLFJIBXZWSKUITLPHQAHMLZFYURYRBGCWQHPIZTZHGFFDUMXPKLNPJOOUUZLLOLWJPSDNGFITFJZYNRMQYKDCCJKCXSCMZGRQWGGFAHRVDYRYNXTPESTWVYJNWIPSVSGWNBOQPCDVHJOWMBKRTYADQHEA");

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
    msg.setTimeStamp(0.368463658029);
    msg.setSource(39549U);
    msg.setSourceEntity(29U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("ONWGILAZRQAQGXJQKWOLYKBFEQHVJWFOSCDIVWRPRGQOISMXIDJYAUKNDJMCLWPSVCISREVUEARAPVIXDMOSXMKCNUPMKVLBBNZNLYLVPSHWFBZURTHMTUGMFYPZGUHNDEIHTAALFDWHWFQBQZDFXXPHPOYJQEEGMVKQBJFLGXYDYZEEJILZBCATRK");
    msg.reference_frame = 138U;
    msg.custom.assign("SRPWTKNHPFPIIXZENEOEABQDWSPTM");

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
    msg.setTimeStamp(0.785656099549);
    msg.setSource(26993U);
    msg.setSourceEntity(143U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("QGEXKJEITOJIOLEBBKIAKZTMRQEBJSPYGGMHYCTONFIFTDRHZVHDUKXOIOZURRDUMRKYQTPVMZLCOZNQHHWSVDGXPCEFSVCFMAWGGKLBDPACJNXGLQUSLNLQWCTAYCZWSSKYMWJEDWBXBNLOTHQEIWGGVUCQXXZPCVDNINIAJVAIPAAORA");
    msg.reference_frame = 98U;
    msg.custom.assign("KGFZXUXWMENESFOIBYWUGSVOUDOUSQFFCRDXAVDERWXZVQPKZYBLVEMLLQOAFRUOIEABOCTARRQQVOLXSGDKWINTWQNBQTYZCLKXJHGBKRDUVXQYBYH");

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
    msg.setTimeStamp(0.937877734485);
    msg.setSource(5733U);
    msg.setSourceEntity(37U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("OSSROKHMWKVQLEERSNAHHDA");
    msg.reference_frame = 106U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10710U;
    tmp_msg_0.off_x = 0.903084557717;
    tmp_msg_0.off_y = 0.911567203417;
    tmp_msg_0.off_z = 0.42480209943;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IGKAULBLUOKDZHSDNVBZMCOYWJRGCCCCMYKZOQMMYVFYHMQJDBCXPWBPUIQVSNSRCPGFEJKILFMAVTOSTDPUEM");

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
    msg.setTimeStamp(0.15413385625);
    msg.setSource(6224U);
    msg.setSourceEntity(121U);
    msg.setDestination(8808U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("MCGONAGJJBVCHGRJLVLOXDKPOPKMAZAEGDXXCGHBNGQUTUWQLHIYRWFBQBRUYXWSMPXLMRFUNJEVMSNFSOYTCCLEANRQZWATMLVZMZDAFYLKTNGIDISBBATSIDXYAWYEQRQWKXNKIHFOEPEKCYYXTOCQQJLEBZWSH");
    msg.formation_name.assign("ZXDIFDLQCUTABEFYTNRRSDLKYUFRHBYVTKCJKGATSFFCJLXIATVRGMYPMJGQJDIBIHUNMWBMRNCQWUGRJEHKHXSYGFTKRWAILEYCYQZEUKJZBOCOOHPMOUEFAKNZPSOAQXHLMQVJDVZBRULFMXNRMULINIZ");
    msg.plan_id.assign("YLGFTPRCSQABFPXMAJHZAXYSMCDVXXVEVOOSHNTWQRJHSBIGJDKXZITYP");
    msg.description.assign("FCVTSJDOWZBYSJFUFNADPPXNJGNBYZZJNEFPHACSBXJTOGLATPBDGAFIJHYCFQEGCYQHMSIXYKQUQEAYUIL");
    msg.leader_speed = 0.230702796606;
    msg.leader_bank_lim = 0.837603424116;
    msg.pos_sim_err_lim = 0.732964548349;
    msg.pos_sim_err_wrn = 0.994678775173;
    msg.pos_sim_err_timeout = 16397U;
    msg.converg_max = 0.10474677756;
    msg.converg_timeout = 28671U;
    msg.comms_timeout = 24876U;
    msg.turb_lim = 0.755411151021;
    msg.custom.assign("ZOIOIVEQXBRWBSJIXTPGBDSCIFYEBPIUYXLCYBJTAKGTIBUWGJVGZYNBIRAZASPUHZLKUFRMEDGPQYUPMSLNDKFPNBYTLNFADMNLDLAQZQCQZJHJSOHJKALORFAJGRZGSVIUXKOVYNVQYUSHCWWMWXUFEOQMCXEFDZJRVACRTADWFEGYMMVMVBWHBPELKOHCKJVGTRHDUWOXSPTZQEHQGSCZEFXMIOPTT");

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
    msg.setTimeStamp(0.460416405237);
    msg.setSource(9422U);
    msg.setSourceEntity(10U);
    msg.setDestination(9307U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("ATFWKODIMAUKPDUWASWJYZHITVTEFPROBCYDZMMONCKJ");
    msg.formation_name.assign("OJNJZVEFPSFAUCRJYZMJLXMIYWTOSCVTDPHZNQXUNDBHITGOCFAUKBMOSDWBYQDEKNSIIHJLALKHZERCLPEBQCWWBTBMWPVNKRSZCPRGXGGHXGULLWJONKTAIEGQEAKQMFFELKQVNOWDIQZHMPVNZSFYIPQIDJYPQGHUFRVNURMUWYMWBLBWDZXGEXFQDXPTXCGARHBJCJMOZPUKVZORI");
    msg.plan_id.assign("LSBXBIMUWHDWETQCYYROYBKQSGXCQJOIKOYGRXPCCVKTXZDHLSDAZPBIGVUGTMBOKVHTYMAADQFOBXQOGUYSEASMVVCPHZEVKHJHIATUOMXGJRETHNFWGBZHRTLUXQPFSZDLSRMXZNUOJSTLQINCXCGJUWLXWNFNZBMQRHVEAIQRLADVSZSNUBNUJVDFEPOWPTZWRMIEPJRKBDJEKFATCVMNAPLPKWNYRZLPJHMYUEJYLGWCKKDAFCDGIEYNFQ");
    msg.description.assign("HYFRENCDKKIYOXPPVLZPUVRVQDGSHJKTCVPBWLZYIANBGHQXWFPTFCQZMNUBWOTJIMHH");
    msg.leader_speed = 0.856033990965;
    msg.leader_bank_lim = 0.156904033915;
    msg.pos_sim_err_lim = 0.749596274254;
    msg.pos_sim_err_wrn = 0.235675782752;
    msg.pos_sim_err_timeout = 16791U;
    msg.converg_max = 0.547924532917;
    msg.converg_timeout = 3884U;
    msg.comms_timeout = 14132U;
    msg.turb_lim = 0.0646323364908;
    msg.custom.assign("NEQHHHRWISYSOBVETVUXFHFJFKKDHUMGKDYALXOIYXLGYNLSYLSNAOUMPRQZZRYMLCBSYPBGRJLEAXHSUMCVBVKHOUBRRSPZJPPJWADQUHKGQNJYHLONGMJWMIHVQTZUCOXSVBCGEZAMKREJEVNDPENAPLKLRCAKMEQZFGTTFZDBEAFYWIYRDZWXWUQLXXVPIUOQPWUDCBMSBGRXACWTEZOQIJFWINVTOGFKDZOTBSDIXITCNFTCGNDFIQKMC");

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
    msg.setTimeStamp(0.54905709105);
    msg.setSource(11983U);
    msg.setSourceEntity(189U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("JDOUANUVEHKEWYFWJTBTGEEALGRUCBXECOWZNVBNBMHFAMZAEVQJKCYRFRAOYXDOHHFLKTSXOBZQOVZJQSSMSMEICHQAVKJYHDIWQXTIJTALGWIFTTYQOFSRGPPKIDKB");
    msg.formation_name.assign("DVTEGUNQXKXNVONEJWIQLJOOSOWWLSEAQUXBCIKRYVVZREJKTMERHCV");
    msg.plan_id.assign("VQYJFFKYHMDABBPZVJXOXIOFCOCXKCHGXKVUBNSAGOZSSSRAFHPDYJAIENTZDWHQGSTBEGRGEJJOYGQVTLYUOVTMWBINXEMPUDNYALCPSZOYFQXRNMPXVLKPCIPKTITKA");
    msg.description.assign("FXJPSPLZEMVMUYCMFCSNKUDZFJQJ");
    msg.leader_speed = 0.471257261289;
    msg.leader_bank_lim = 0.495458532375;
    msg.pos_sim_err_lim = 0.128423515597;
    msg.pos_sim_err_wrn = 0.192715762723;
    msg.pos_sim_err_timeout = 62959U;
    msg.converg_max = 0.805948000488;
    msg.converg_timeout = 33742U;
    msg.comms_timeout = 10697U;
    msg.turb_lim = 0.904613035732;
    msg.custom.assign("SDPDBFAHQTGUXEWYYNGGELGXZCZJICYZSJOMKIUEAXETAIHETOJQVHDVOSNSMKMBUKKBUWJHIYXSGTTUZEJLVGZVRYLZFFTNSCAPAYGTGBGORCKIJYUDFIUWWMPWFNFNOZIACUOIZXAJQSYVVCWFFPRLDPTFGVWVRXNTKXTUCLMCJPACQMJYXIWLLOMBECHWDAROOEZOQHRPSDSHH");

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
    msg.setTimeStamp(0.461164512267);
    msg.setSource(46688U);
    msg.setSourceEntity(23U);
    msg.setDestination(63518U);
    msg.setDestinationEntity(184U);
    msg.control_src = 18023U;
    msg.control_ent = 101U;
    msg.timeout = 0.608455704372;
    msg.loiter_radius = 0.800042155359;
    msg.altitude_interval = 0.569678146512;

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
    msg.setTimeStamp(0.124996228679);
    msg.setSource(46316U);
    msg.setSourceEntity(85U);
    msg.setDestination(6566U);
    msg.setDestinationEntity(206U);
    msg.control_src = 27092U;
    msg.control_ent = 97U;
    msg.timeout = 0.332385208689;
    msg.loiter_radius = 0.585860125107;
    msg.altitude_interval = 0.167649204558;

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
    msg.setTimeStamp(0.595311628373);
    msg.setSource(60726U);
    msg.setSourceEntity(224U);
    msg.setDestination(61181U);
    msg.setDestinationEntity(102U);
    msg.control_src = 5374U;
    msg.control_ent = 74U;
    msg.timeout = 0.338032162763;
    msg.loiter_radius = 0.00930447327035;
    msg.altitude_interval = 0.151997429523;

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
    msg.setTimeStamp(0.136823274513);
    msg.setSource(27477U);
    msg.setSourceEntity(204U);
    msg.setDestination(13633U);
    msg.setDestinationEntity(201U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.749951620668;
    tmp_msg_0.speed_units = 179U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.991075654206;
    tmp_msg_1.z_units = 62U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.238000335302;
    msg.lon = 0.554649364099;
    msg.radius = 0.0369495775304;

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
    msg.setTimeStamp(0.517130040716);
    msg.setSource(52797U);
    msg.setSourceEntity(6U);
    msg.setDestination(6653U);
    msg.setDestinationEntity(157U);
    msg.flags = 144U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.493279455248;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.58728161821;
    tmp_msg_1.z_units = 210U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.549372449971;
    msg.lon = 0.0178843813529;
    msg.radius = 0.687494200125;

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
    msg.setTimeStamp(0.166065965206);
    msg.setSource(8196U);
    msg.setSourceEntity(160U);
    msg.setDestination(45319U);
    msg.setDestinationEntity(209U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.16361489195;
    tmp_msg_0.speed_units = 177U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.506863734674;
    tmp_msg_1.z_units = 207U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.869229065865;
    msg.lon = 0.350427383094;
    msg.radius = 0.0535563166555;

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
    msg.setTimeStamp(0.498418506848);
    msg.setSource(418U);
    msg.setSourceEntity(248U);
    msg.setDestination(35064U);
    msg.setDestinationEntity(136U);
    msg.control_src = 42181U;
    msg.control_ent = 27U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.778986389427;
    tmp_tmp_msg_0_0.speed_units = 23U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.743846542775;
    tmp_tmp_msg_0_1.z_units = 92U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.077969900164;
    tmp_msg_0.lon = 0.915461374587;
    tmp_msg_0.radius = 0.6010870721;
    msg.reference.set(tmp_msg_0);
    msg.state = 225U;
    msg.proximity = 230U;

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
    msg.setTimeStamp(0.451818877923);
    msg.setSource(8779U);
    msg.setSourceEntity(120U);
    msg.setDestination(52688U);
    msg.setDestinationEntity(178U);
    msg.control_src = 19693U;
    msg.control_ent = 74U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.964020910577;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.418946958138;
    tmp_tmp_msg_0_1.z_units = 231U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.844316709375;
    tmp_msg_0.lon = 0.122961919312;
    tmp_msg_0.radius = 0.29494432218;
    msg.reference.set(tmp_msg_0);
    msg.state = 204U;
    msg.proximity = 85U;

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
    msg.setTimeStamp(0.615939378307);
    msg.setSource(6134U);
    msg.setSourceEntity(111U);
    msg.setDestination(48724U);
    msg.setDestinationEntity(93U);
    msg.control_src = 28622U;
    msg.control_ent = 96U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 15U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.529370212614;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.808159130594;
    tmp_tmp_msg_0_1.z_units = 75U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.396921744101;
    tmp_msg_0.lon = 0.524430052754;
    tmp_msg_0.radius = 0.430204600868;
    msg.reference.set(tmp_msg_0);
    msg.state = 107U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.832814927291);
    msg.setSource(56733U);
    msg.setSourceEntity(69U);
    msg.setDestination(22019U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.367273196991;
    msg.ay_cmd = 0.715432173029;
    msg.az_cmd = 0.280357365734;
    msg.ax_des = 0.384078540991;
    msg.ay_des = 0.42421837511;
    msg.az_des = 0.993980065438;
    msg.virt_err_x = 0.570030098634;
    msg.virt_err_y = 0.532619766891;
    msg.virt_err_z = 0.639709971454;
    msg.surf_fdbk_x = 0.771062219237;
    msg.surf_fdbk_y = 0.803702759254;
    msg.surf_fdbk_z = 0.3632701593;
    msg.surf_unkn_x = 0.0585018888368;
    msg.surf_unkn_y = 0.524122605409;
    msg.surf_unkn_z = 0.448403979236;
    msg.ss_x = 0.206883550319;
    msg.ss_y = 0.271386894836;
    msg.ss_z = 0.44459640693;

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
    msg.setTimeStamp(0.838953201132);
    msg.setSource(35982U);
    msg.setSourceEntity(212U);
    msg.setDestination(28434U);
    msg.setDestinationEntity(202U);
    msg.ax_cmd = 0.564961794631;
    msg.ay_cmd = 0.879275989773;
    msg.az_cmd = 0.164401244187;
    msg.ax_des = 0.309186165306;
    msg.ay_des = 0.00301072459888;
    msg.az_des = 0.0420640180497;
    msg.virt_err_x = 0.941189464846;
    msg.virt_err_y = 0.42197649158;
    msg.virt_err_z = 0.846829090955;
    msg.surf_fdbk_x = 0.221531306087;
    msg.surf_fdbk_y = 0.496702296684;
    msg.surf_fdbk_z = 0.613628990624;
    msg.surf_unkn_x = 0.637474961644;
    msg.surf_unkn_y = 0.151678959477;
    msg.surf_unkn_z = 0.20156711267;
    msg.ss_x = 0.997144647423;
    msg.ss_y = 0.304330616798;
    msg.ss_z = 0.0637808600681;

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
    msg.setTimeStamp(0.76598434914);
    msg.setSource(43128U);
    msg.setSourceEntity(1U);
    msg.setDestination(36269U);
    msg.setDestinationEntity(212U);
    msg.ax_cmd = 0.786745569735;
    msg.ay_cmd = 0.472395532481;
    msg.az_cmd = 0.197468111369;
    msg.ax_des = 0.154279455395;
    msg.ay_des = 0.172926965866;
    msg.az_des = 0.179714845653;
    msg.virt_err_x = 0.402209950084;
    msg.virt_err_y = 0.395515553101;
    msg.virt_err_z = 0.467427294895;
    msg.surf_fdbk_x = 0.456616583516;
    msg.surf_fdbk_y = 0.527755035334;
    msg.surf_fdbk_z = 0.418530396538;
    msg.surf_unkn_x = 0.286810921187;
    msg.surf_unkn_y = 0.906853612707;
    msg.surf_unkn_z = 0.307133508707;
    msg.ss_x = 0.582322463599;
    msg.ss_y = 0.512540573336;
    msg.ss_z = 0.656604385577;

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
    msg.setTimeStamp(0.36844574119);
    msg.setSource(23541U);
    msg.setSourceEntity(162U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(215U);
    msg.s_id.assign("TEMHIZGNGGPPIDJEXKNAWEWBUBEALQFJZYCYZAVRUUCZGFBWVHRPMPMOJVQIPYLVSQRVIVBZBWDTGGSTQXNFMAUHXHWUSFQAOUTNOLAUGGEETQTRBROMLWSZDYFFITYSLCIDXBRZJTKMBFYKDTNPEWH");
    msg.dist = 0.88045006379;
    msg.err = 0.108793767542;
    msg.ctrl_imp = 0.676345510733;
    msg.rel_dir_x = 0.600283266467;
    msg.rel_dir_y = 0.439874389873;
    msg.rel_dir_z = 0.955084756581;
    msg.err_x = 0.552568188723;
    msg.err_y = 0.63690757364;
    msg.err_z = 0.100368090635;
    msg.rf_err_x = 0.570404511211;
    msg.rf_err_y = 0.517202596425;
    msg.rf_err_z = 0.313155348611;
    msg.rf_err_vx = 0.510362569126;
    msg.rf_err_vy = 0.370968754333;
    msg.rf_err_vz = 0.217787843349;
    msg.ss_x = 0.578730535241;
    msg.ss_y = 0.669611438039;
    msg.ss_z = 0.687362916599;
    msg.virt_err_x = 0.343718184331;
    msg.virt_err_y = 0.439418644846;
    msg.virt_err_z = 0.785120409291;

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
    msg.setTimeStamp(0.133087267567);
    msg.setSource(58890U);
    msg.setSourceEntity(219U);
    msg.setDestination(8852U);
    msg.setDestinationEntity(6U);
    msg.s_id.assign("NPXZIKMNQBDYIPIIDQFJPXVTLVCUUOKXZRYNQKWIRUCTUHGNPHOXZCFBOGOKBASGSJSEIIJVYENEWGRFWKNRIDXLELVQYPZUYCGFYQWYEHVBWMFQFSGWAYSS");
    msg.dist = 0.804745991727;
    msg.err = 0.211939230387;
    msg.ctrl_imp = 0.72901570533;
    msg.rel_dir_x = 0.00644858224111;
    msg.rel_dir_y = 0.848466254511;
    msg.rel_dir_z = 0.86239019917;
    msg.err_x = 0.513976828364;
    msg.err_y = 0.414160049104;
    msg.err_z = 0.51200206798;
    msg.rf_err_x = 0.219815584594;
    msg.rf_err_y = 0.591349571747;
    msg.rf_err_z = 0.377401182322;
    msg.rf_err_vx = 0.154765767574;
    msg.rf_err_vy = 0.45588040383;
    msg.rf_err_vz = 0.870061003486;
    msg.ss_x = 0.926624580932;
    msg.ss_y = 0.25303701005;
    msg.ss_z = 0.613569305295;
    msg.virt_err_x = 0.0210191370842;
    msg.virt_err_y = 0.512485363622;
    msg.virt_err_z = 0.952611703237;

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
    msg.setTimeStamp(0.988366981963);
    msg.setSource(19449U);
    msg.setSourceEntity(110U);
    msg.setDestination(40305U);
    msg.setDestinationEntity(137U);
    msg.s_id.assign("NOVGFYCRMFJJGVFZEZPINFULRAUABEUGUILDCMXGOWNBVESZHMFHZOEYPWJRKCRKQXMAAIWKQLSJHPXLQHDLZDEGHDTEWYVFKQKWJCFJUNURELKIYRKVITPZAHJZXOXUOWJXLTSXKBOCSAOSPBBSVPNQIFMTKCVFHROQPBROQWGPSBUJICTGDYNSHARLIZDXTENTREDQALAWDVTNHLNKSPTHTZWISIDMGCEXQMCYCXPD");
    msg.dist = 0.481411541119;
    msg.err = 0.106799233417;
    msg.ctrl_imp = 0.0771668620921;
    msg.rel_dir_x = 0.312931826813;
    msg.rel_dir_y = 0.186594719661;
    msg.rel_dir_z = 0.302029302615;
    msg.err_x = 0.637640262256;
    msg.err_y = 0.222498170106;
    msg.err_z = 0.774177831295;
    msg.rf_err_x = 0.278481222012;
    msg.rf_err_y = 0.0715576309176;
    msg.rf_err_z = 0.332228017817;
    msg.rf_err_vx = 0.632306505675;
    msg.rf_err_vy = 0.190279791005;
    msg.rf_err_vz = 0.507203967308;
    msg.ss_x = 0.464016486113;
    msg.ss_y = 0.290784724795;
    msg.ss_z = 0.939963284879;
    msg.virt_err_x = 0.91245720809;
    msg.virt_err_y = 0.611108305242;
    msg.virt_err_z = 0.738403827712;

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
    msg.setTimeStamp(0.785116999098);
    msg.setSource(21039U);
    msg.setSourceEntity(35U);
    msg.setDestination(64802U);
    msg.setDestinationEntity(254U);
    msg.timeout = 17512U;
    msg.rpm = 0.828575795059;
    msg.direction = 170U;
    msg.custom.assign("QHKGBPSWAMKCROCMNIGFYZOBHWWPXGWJUNEBQTONPYMMFKZRUAKYSRWJRZLSSXYVPIHUJVGQHNBRZHXIWKOVTJEUSIZQKZWCLQDELIMOZPFEXYPNBDJAAVUEGRGFNRQAJUACODUNSBIEZOGHDKCTWCALDLLYYTUXWGNBXMSYLTSORJIPILDTVSLGYJKPQBQMCVIXVVXHQRZOLFPEMCUOPTXETHASDZADDFHVR");

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
    msg.setTimeStamp(0.801550058418);
    msg.setSource(25990U);
    msg.setSourceEntity(139U);
    msg.setDestination(29740U);
    msg.setDestinationEntity(103U);
    msg.timeout = 6689U;
    msg.rpm = 0.808704236803;
    msg.direction = 116U;
    msg.custom.assign("UIXOTSAXMZZXMPCOQMGUXUKWTHRSHZMOJVXCFKUBFAKSTATVYJGOWGAMYLYMRZEEBUTQWZEOQVHNIYYZKDTRMCHDTNBQALYECFYHIQCUEFXHGRKMQHFQPPPPVXNSZAINU");

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
    msg.setTimeStamp(0.389208799735);
    msg.setSource(3967U);
    msg.setSourceEntity(47U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(81U);
    msg.timeout = 46156U;
    msg.rpm = 0.0951190233295;
    msg.direction = 222U;
    msg.custom.assign("IPWZWPZMTJBPKACLXWOETSOMIKYCNRYNDHOUCLRRJBOEDERZALHJVRFPHPUXOIANZTGYCLSN");

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
    msg.setTimeStamp(0.775527971992);
    msg.setSource(53433U);
    msg.setSourceEntity(81U);
    msg.setDestination(23990U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("GGZMPGKZSIIENWLWYAFMVAJGSJQSHJYFLR");
    msg.type = 187U;
    msg.op = 50U;
    msg.group_name.assign("XWUWNUWFYOGNOYULNNRPIIKHFKYUTAPQDMZQIDOMJPQUTWVCPPXBZFSITWHHTGHFJGEYLRVGYLQHTEKKKMQKNJAYRDZPXBECZJRRZVLSMRTBXDADNUPYQB");
    msg.plan_id.assign("DXAMXKIYDPJVMUBYTFDHSVMVIGTHSZZRJPMDFLEJKGRQPQLRHOQZFMWZTYZNFDIJZUUTANAWNBEISSSVYPCSECWJBKZHZJKFNGXEYIDOMTOCBDREKSTAWVSQQVOABUVXGNLEXIBGVBNKGQANDHLQUNJACKWSGXURJWHCIOEQOSFKMDTUERJYVQXMPCLHCUFMWZAPEFTLXXY");
    msg.description.assign("KHWHCKUTSBSNXKDDCAUKBEJJSEPTJBDEEEEIBLYFWQTARORYPVUPQVZFEWIRLYWCDROPHLFVKDMRCQQXGITHBZZUTZIMABTGM");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45703U;
    tmp_msg_0.off_x = 0.749076319664;
    tmp_msg_0.off_y = 0.948753668612;
    tmp_msg_0.off_z = 0.441813367362;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.298222894668;
    msg.leader_speed_min = 0.0857213994384;
    msg.leader_speed_max = 0.311364672329;
    msg.leader_alt_min = 0.277115058296;
    msg.leader_alt_max = 0.7028353304;
    msg.pos_sim_err_lim = 0.602794951582;
    msg.pos_sim_err_wrn = 0.155814686665;
    msg.pos_sim_err_timeout = 3669U;
    msg.converg_max = 0.137742274219;
    msg.converg_timeout = 59956U;
    msg.comms_timeout = 19368U;
    msg.turb_lim = 0.260827666515;
    msg.custom.assign("TNOVBJYHWRJAPRFHYGEBKDBGVQFRELBXMMHTEUCSQWRBAUNDNAGRLCLPDRWORDZKQCQKPKZJMVSFYOQTNOKVBWIAPHMEMXYVJFOSLCILWCCPMPXNHHXILEYUCOYOQEZSGROJTQUNLZAMZGXDDQSUESVDIGXHMUT");

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
    msg.setTimeStamp(0.0857983258702);
    msg.setSource(24484U);
    msg.setSourceEntity(243U);
    msg.setDestination(41677U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("FPJLTNONBEQFPCGLSJFVWOZXUWBQRYMTYVKPGRBMSAUFAWLVRZGZUDWWQQBQMQQLKOVBFKVISSTLENZBUMDTPYAHVMHHVFCSVDAYAUZQCGCWCEGHNRRDUSTNBQAZZEXHGGNUFWOJGGKMIOOERCXJBBWSNIKDDXCPLTTBMDPYRKOKDFSYLHZXASUKFMZOYNJJYRUCREANHXOJPCVXTRLJC");
    msg.type = 149U;
    msg.op = 73U;
    msg.group_name.assign("KNBEAIENGOINWHJLONNTQMVAKVDEEPCDBSHPHHSUJXIYTKCOCQARZZTTSMXQRPHGJLEIJTFGSDZHPYBLTSPNKYXKEAUXLNJJZWKMFMRUFSQWTEVXACOMVRPZPMAMNMMZLMYYBTXYCLSCPXVUAEDGJZLBEIGYVIJFVFCZYTDRHOQSDPVODIUBDILJWDXAELHQGBVQBBWSHXYUAWBFR");
    msg.plan_id.assign("OIFVNVEDXDKUYNPAVKCZSJZJOXEBSCZQQUKENGBMMMRJXQTGWNVBPNWQDBRCIZLWXIOLLEOTGBVEEAPIHEYNTHFIYXWYUDAOHWYCIEIYMWMVLSLKQGRDUZXRSZAKUBGRVKYKFBKNCNELZ");
    msg.description.assign("RYQQDPOYWDARPSNKLBLJQZSMPIFPPRBFONMYYZONXBSYXFHSJZQFPGXAJJGQHEDKSICMBTLBFUUKWKZHOCWLDCRAVQTODFWYKAOJZJSLJKSNRDCJVYGULZIVDXMTGVZXTUHXRNQFKLELSKEHRQUTTIWFWEMLKNWGDFTCWUEAEBMAZNUUPWUCBNCHZGVOPHZYDBGMNMRCLNBGIXVIVEAWXVDQREKVSGBACGEO");
    msg.reference_frame = 184U;
    msg.leader_bank_lim = 0.556256471366;
    msg.leader_speed_min = 0.641399423263;
    msg.leader_speed_max = 0.00428180125671;
    msg.leader_alt_min = 0.738827400378;
    msg.leader_alt_max = 0.117998320546;
    msg.pos_sim_err_lim = 0.360713150664;
    msg.pos_sim_err_wrn = 0.805575766879;
    msg.pos_sim_err_timeout = 33075U;
    msg.converg_max = 0.750950725753;
    msg.converg_timeout = 53011U;
    msg.comms_timeout = 25090U;
    msg.turb_lim = 0.239800383684;
    msg.custom.assign("ARTOKYKSFPLBXNGXQQFMEDZWNZFBDYQUTUHODDWRTJYWHMAQUFHCBSJHRGLYNVSIUJWKLAUIPCJZCLMAOSLFQBHSXNAAPVRDGTNNIXEPWCRVRXRUVLNHNZPBMJRZHDIWKIKFBRQOQQJLUIHYMCFFXKJUDMAZOEIEUZMVMGSGGTIWAEGWTSVMAQOESIPKPFTMCOVVAEVCCJYOWXQDVLCSEZFELBTIKKBJBGTXRHYYNPJEGBNUHWDSK");

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
    msg.setTimeStamp(0.844687406133);
    msg.setSource(38350U);
    msg.setSourceEntity(219U);
    msg.setDestination(46335U);
    msg.setDestinationEntity(137U);
    msg.formation_name.assign("SNLOZLOTIFMXONZAFUPVPZMCDWAXQIKETZMNRLVIXPRGLOVGSSRKDBOQRJVTTTBSILGYUDYWGCEDNWWBZECKGVMHBJJENQGGKEKORYQAPTUBDELNVWJXCKFYGKZJFGXXVFWIAUPCJQQUNFTRKRJHSCYEWMSCMIVZNKJBUKWBVXMEHXX");
    msg.type = 231U;
    msg.op = 4U;
    msg.group_name.assign("IFVLPPUXRXUGZOVWUYFAOLLCHGGNANOABUCBVNJYETEYHEPZHUMFACAWBBRCVPCLZYDRXNDSSOHQPYBCRYINCJITDWLLXFEZNWKFQMKRJELZMFOYPVFMCVDRJOXZPKDTIMSKXTQXCFQSDMLSZKEWOEUMHHXBUEXWL");
    msg.plan_id.assign("NEDDJVSWFCROOZTLTIABHSPBSGCQLOPVNYZNBQYXGHEUEJEFWYXTSKXUACVXMVLCASINZWRXBGPMNZQUZGTBHSKMWYPKXTTMJQJQZERGVPXSLZLILFUMSBADBKAFLPUDFGTKYUENOKGGHTJQSCUDLCTYVJLIDHRHARQOZXZQVFOEXYWGADCR");
    msg.description.assign("OFKTTQBIVLZPPARAVCHYYFDZZSDPHWGANLBNXJEEJCFMBYOWBVGWJQNYTRNQCXCEQVWOOWPUKNIVOFMELITSNGZUMYQBIDRHCXLBASUJEKZNDIKTXGJUXSHTSNPVHHREO");
    msg.reference_frame = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30324U;
    tmp_msg_0.off_x = 0.892848634457;
    tmp_msg_0.off_y = 0.0696143476626;
    tmp_msg_0.off_z = 0.138994889621;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.727959611799;
    msg.leader_speed_min = 0.666940226792;
    msg.leader_speed_max = 0.990805920653;
    msg.leader_alt_min = 0.932734214263;
    msg.leader_alt_max = 0.325780150693;
    msg.pos_sim_err_lim = 0.727288943324;
    msg.pos_sim_err_wrn = 0.271310656525;
    msg.pos_sim_err_timeout = 3477U;
    msg.converg_max = 0.307401233986;
    msg.converg_timeout = 50385U;
    msg.comms_timeout = 17720U;
    msg.turb_lim = 0.399470906575;
    msg.custom.assign("GAMOFPGZBGUARVZJPTKZXVWGQIOCRIHTZALBLEBLOCFUNYOALICDVFRBDBNXNDVDOSAHQLNCIHSIRZKZEEWTALGQJNNGXQWYJXMPETMLJHYSXJSJVHRWXBFUFAEZKKSJKOFWHYQWSLN");

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
    msg.setTimeStamp(0.740854923881);
    msg.setSource(48080U);
    msg.setSourceEntity(216U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(54U);
    msg.timeout = 16130U;
    msg.lat = 0.466028578079;
    msg.lon = 0.820232711624;
    msg.z = 0.969363106525;
    msg.z_units = 239U;
    msg.speed = 0.889283978433;
    msg.speed_units = 226U;
    msg.custom.assign("MGTPMBGLNXWZHCPBUWESHYGSVHDGOONDEFNPXXOLLCPCKCGVNKIZ");

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
    msg.setTimeStamp(0.00717859214507);
    msg.setSource(17814U);
    msg.setSourceEntity(120U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(192U);
    msg.timeout = 29433U;
    msg.lat = 0.190391490142;
    msg.lon = 0.725227290584;
    msg.z = 0.673330520556;
    msg.z_units = 154U;
    msg.speed = 0.113436296127;
    msg.speed_units = 59U;
    msg.custom.assign("NTYRCMCFLXVEQFJXQAEZPGBIABDBSZRFOPCUGLSQMEWGUWDVKHLNJNHXPOXIAXJAFVMKXLYIJAQNLBMKEHNDKDECJBPJIDLTUTKSCVHMIOGAIBMHAWTKSVZOGTWPGSWZFSUJUYNSEYNUYEHKMDDXRDPZQXTKVFAPWBXZERBGGCZGFLSQABIEXWOFVJPQMUSERTAWIPRTPSCYLMIJVQRBFNLHNIUWHOR");

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
    msg.setTimeStamp(0.606975802489);
    msg.setSource(3851U);
    msg.setSourceEntity(235U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(39U);
    msg.timeout = 45501U;
    msg.lat = 0.277188854244;
    msg.lon = 0.12759661217;
    msg.z = 0.608811326179;
    msg.z_units = 41U;
    msg.speed = 0.512354167887;
    msg.speed_units = 73U;
    msg.custom.assign("SPADTZOKCCVOWFSYOBKHZHWEHJMKVWVKUEAHVLIEZDKUQVZNXWGVFU");

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
    msg.setTimeStamp(0.907689396377);
    msg.setSource(42947U);
    msg.setSourceEntity(249U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(243U);
    msg.timeout = 49664U;
    msg.lat = 0.411087673275;
    msg.lon = 0.114670615344;
    msg.z = 0.749880335835;
    msg.z_units = 205U;
    msg.speed = 0.305957048423;
    msg.speed_units = 213U;
    msg.custom.assign("GCCTWCVYVPOEZOUM");

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
    msg.setTimeStamp(0.756821255804);
    msg.setSource(33882U);
    msg.setSourceEntity(245U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(227U);
    msg.timeout = 2130U;
    msg.lat = 0.960185951842;
    msg.lon = 0.503819635303;
    msg.z = 0.104547211412;
    msg.z_units = 233U;
    msg.speed = 0.604315827289;
    msg.speed_units = 90U;
    msg.custom.assign("QVMJWHGNXHTTVUDXMUHXCZVGQYVXKORBFZFGFANOFGJDIKOBSCODP");

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
    msg.setTimeStamp(0.450310206708);
    msg.setSource(26601U);
    msg.setSourceEntity(25U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(151U);
    msg.timeout = 3690U;
    msg.lat = 0.533857984821;
    msg.lon = 0.18635975191;
    msg.z = 0.0212778748242;
    msg.z_units = 138U;
    msg.speed = 0.801939563564;
    msg.speed_units = 137U;
    msg.custom.assign("KNMAFTASCJTRZJGDSOKWFJZDJTUAVHGSQYGOZZYZQRXEMIHDKYPNFFWLDCQDKJWTWLHLSQTAUYPHMQSTPPARYYNVQUOHAKOUWGEKVMMBIEHDVDXJBTCEXTNDUNKPBNWKBPZAFKNEFMMRIARBYWYDIBVPZJIFMZZLRXXMLSLUZXVVOBYQITNIV");

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
    msg.setTimeStamp(0.188481833438);
    msg.setSource(2825U);
    msg.setSourceEntity(169U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(130U);
    msg.arrival_time = 0.875131012105;
    msg.lat = 0.132062702784;
    msg.lon = 0.229040185134;
    msg.z = 0.351756710132;
    msg.z_units = 93U;
    msg.travel_z = 0.477860962821;
    msg.travel_z_units = 215U;
    msg.delayed = 43U;

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
    msg.setTimeStamp(0.828464255434);
    msg.setSource(2539U);
    msg.setSourceEntity(240U);
    msg.setDestination(24197U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.738325585056;
    msg.lat = 0.213110507014;
    msg.lon = 0.808668487715;
    msg.z = 0.529514814685;
    msg.z_units = 181U;
    msg.travel_z = 0.989610727833;
    msg.travel_z_units = 149U;
    msg.delayed = 112U;

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
    msg.setTimeStamp(0.691578505969);
    msg.setSource(59359U);
    msg.setSourceEntity(44U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(248U);
    msg.arrival_time = 0.247694506873;
    msg.lat = 0.665011441169;
    msg.lon = 0.348725139102;
    msg.z = 0.276528480187;
    msg.z_units = 211U;
    msg.travel_z = 0.209861671788;
    msg.travel_z_units = 11U;
    msg.delayed = 29U;

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
    msg.setTimeStamp(0.928266726754);
    msg.setSource(36079U);
    msg.setSourceEntity(192U);
    msg.setDestination(26516U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.835746535469;
    msg.lon = 0.0115784980751;
    msg.z = 0.255128559652;
    msg.z_units = 94U;
    msg.speed = 0.396063120045;
    msg.speed_units = 129U;
    msg.bearing = 0.364759732;
    msg.cross_angle = 0.332594451666;
    msg.width = 0.12315049636;
    msg.length = 0.324100880576;
    msg.coff = 138U;
    msg.angaperture = 0.479959956356;
    msg.range = 12497U;
    msg.overlap = 111U;
    msg.flags = 93U;
    msg.custom.assign("DCHTDUFCMOYUDAUEZGJLZLRDZWNQIXSEPHLVSRDSSRLOZOM");

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
    msg.setTimeStamp(0.44361414501);
    msg.setSource(50723U);
    msg.setSourceEntity(185U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.668687181834;
    msg.lon = 0.791295414543;
    msg.z = 0.275390697253;
    msg.z_units = 164U;
    msg.speed = 0.10563101649;
    msg.speed_units = 254U;
    msg.bearing = 0.949150219533;
    msg.cross_angle = 0.387262013715;
    msg.width = 0.764772291322;
    msg.length = 0.200998540077;
    msg.coff = 160U;
    msg.angaperture = 0.340523907908;
    msg.range = 9186U;
    msg.overlap = 59U;
    msg.flags = 64U;
    msg.custom.assign("VCWNEEAYOJKIOVWYGYXOUHZZREBJDPGFBBENWWNOJPAEQKMDVTMCMKLGPHFLKUJLKDOZTXIFJUZGVCUHKVILXEQFPJCBUA");

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
    msg.setTimeStamp(0.152247852058);
    msg.setSource(4097U);
    msg.setSourceEntity(77U);
    msg.setDestination(55362U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.253412578372;
    msg.lon = 0.268296753727;
    msg.z = 0.725650910742;
    msg.z_units = 132U;
    msg.speed = 0.138208351436;
    msg.speed_units = 218U;
    msg.bearing = 0.0388007848635;
    msg.cross_angle = 0.713992426575;
    msg.width = 0.2958952367;
    msg.length = 0.278520547837;
    msg.coff = 111U;
    msg.angaperture = 0.214928667995;
    msg.range = 60095U;
    msg.overlap = 116U;
    msg.flags = 7U;
    msg.custom.assign("TMRYJJVQVZINDDBVZ");

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
    msg.setTimeStamp(0.0407420374432);
    msg.setSource(5278U);
    msg.setSourceEntity(90U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(159U);
    msg.timeout = 12251U;
    msg.lat = 0.729607866269;
    msg.lon = 0.835117967011;
    msg.z = 0.440209285891;
    msg.z_units = 200U;
    msg.speed = 0.785312866846;
    msg.speed_units = 94U;
    msg.syringe0 = 78U;
    msg.syringe1 = 122U;
    msg.syringe2 = 227U;
    msg.custom.assign("YCVTCNWCKOWEOMIDHFCJRURDGUCAIMGGEQ");

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
    msg.setTimeStamp(0.530382243933);
    msg.setSource(51561U);
    msg.setSourceEntity(190U);
    msg.setDestination(10715U);
    msg.setDestinationEntity(60U);
    msg.timeout = 46279U;
    msg.lat = 0.0250209053155;
    msg.lon = 0.353780614138;
    msg.z = 0.415886389605;
    msg.z_units = 67U;
    msg.speed = 0.821257663985;
    msg.speed_units = 43U;
    msg.syringe0 = 217U;
    msg.syringe1 = 145U;
    msg.syringe2 = 142U;
    msg.custom.assign("MDRHGIZOYZTPKSCOQGTYKJZANRSQMFWDFBKSKWRAJJZZKHHEIXRQNVREISMVVJVAQZAAGWXARJFVMXJSATSQNYBOHETEVSOHPOOTYMYNP");

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
    msg.setTimeStamp(0.961673488421);
    msg.setSource(36715U);
    msg.setSourceEntity(78U);
    msg.setDestination(39310U);
    msg.setDestinationEntity(133U);
    msg.timeout = 20172U;
    msg.lat = 0.270055392341;
    msg.lon = 0.502188452356;
    msg.z = 0.447814492701;
    msg.z_units = 88U;
    msg.speed = 0.689706420617;
    msg.speed_units = 56U;
    msg.syringe0 = 232U;
    msg.syringe1 = 220U;
    msg.syringe2 = 100U;
    msg.custom.assign("IMVKQDPXHMJESUCZZCLMDPTSQUHSFCAOKZOVCSYDBNHUPLZRSJRRSTGXPUAVEMCBHTXHXLNFPKMFMPZJOSJYJG");

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
    msg.setTimeStamp(0.598148548746);
    msg.setSource(53999U);
    msg.setSourceEntity(118U);
    msg.setDestination(28040U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.80325287137);
    msg.setSource(38996U);
    msg.setSourceEntity(64U);
    msg.setDestination(39004U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.631230890836);
    msg.setSource(52312U);
    msg.setSourceEntity(192U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.513459876868);
    msg.setSource(20003U);
    msg.setSourceEntity(33U);
    msg.setDestination(18339U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.656609757564;
    msg.lon = 0.0367737058065;
    msg.z = 0.249365911695;
    msg.z_units = 88U;
    msg.speed = 0.280938983749;
    msg.speed_units = 247U;
    msg.takeoff_pitch = 0.62278549104;
    msg.custom.assign("BABGPRPEVQNCCJXOJGNMAINKDXJRHWLROAYBGGQNOKBKTEOBUQLLHFHJBZGYZNQROHHXKKYWMEYBNBYDMOVYDIFAMAEFIXPFSCXCOIIWPLURVEQYSMDBLQSWJZDXQUJZRKTCSTLSUCTHZFEYEZCAWQUWWJRLMHVUSYSDNILUSWRZFJKNZGODZUARGHCMVAPETNBDDPNYJPQJFP");

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
    msg.setTimeStamp(0.546595341379);
    msg.setSource(36049U);
    msg.setSourceEntity(58U);
    msg.setDestination(16015U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.952762605243;
    msg.lon = 0.924817525157;
    msg.z = 0.285667066311;
    msg.z_units = 18U;
    msg.speed = 0.30884123862;
    msg.speed_units = 82U;
    msg.takeoff_pitch = 0.598871152295;
    msg.custom.assign("ZLCLQFXKAWUZTDSTHIEJZSSGZXETKFKRLSYJQTFVXWZJAGETWUYNPRDNOUJSMQRKFDJPLABVYJFCFWDTYNCIDCOHQMDUQPWWIQVMMBYULHTVKJEWXEISMZWRPBVNJRKULNSGNMPRYTGZNCJAMHXVRTQIZHZYLOBYLQDLSBPNXGFELEUGQVYOHPOGRARIGATKIPOBKFDBBMNXG");

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
    msg.setTimeStamp(0.903561130237);
    msg.setSource(41058U);
    msg.setSourceEntity(66U);
    msg.setDestination(21318U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.126078634544;
    msg.lon = 0.835885446184;
    msg.z = 0.610648656078;
    msg.z_units = 113U;
    msg.speed = 0.332282355997;
    msg.speed_units = 213U;
    msg.takeoff_pitch = 0.789175385237;
    msg.custom.assign("QSBWMZIAOODFKJEWZHYUDGEBSWZPGXNHLQOVIUAUAMWBIYYRZVOFXDGTQMCJKEXSKDRXVCGWODTWKCABRBBMVOCVGREFLOPATSHGUZMAFLGIBARLGXNMLNBAKMSRAHJPZJMYFXQKUIOXHXXVUYVNQZQFTQRJIPVNSJECCXSWENGYUYVEJDLEMBQLPRIPNEI");

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
    msg.setTimeStamp(0.0416661108487);
    msg.setSource(18507U);
    msg.setSourceEntity(55U);
    msg.setDestination(38223U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.866740750512;
    msg.lon = 0.488340236785;
    msg.z = 0.332666303105;
    msg.z_units = 234U;
    msg.speed = 0.752994136309;
    msg.speed_units = 60U;
    msg.abort_z = 0.834738817489;
    msg.bearing = 0.0212109456411;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.201912403674;
    msg.custom.assign("MXMHJPUYKKMWRLNIGHLRPWDDGJSNEGHUHAOUYYTFRFDFEAOVUYOKNOOJJYJPBZBOFMMDHHYXWXZKT");

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
    msg.setTimeStamp(0.727695020999);
    msg.setSource(55525U);
    msg.setSourceEntity(131U);
    msg.setDestination(45194U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.0383153947046;
    msg.lon = 0.805832503784;
    msg.z = 0.870417604458;
    msg.z_units = 199U;
    msg.speed = 0.491613186479;
    msg.speed_units = 153U;
    msg.abort_z = 0.0118204081654;
    msg.bearing = 0.00853164515091;
    msg.glide_slope = 164U;
    msg.glide_slope_alt = 0.363103763842;
    msg.custom.assign("SHMUBSFXHDPYLSKVTLRPLQDFEOZNXTPHNBEAIOMDVQNUGQUMCVYBTMISFFCCUOPNTGFOQEDWHSHKXDBJUXELKPZLR");

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
    msg.setTimeStamp(0.0415410376583);
    msg.setSource(53554U);
    msg.setSourceEntity(157U);
    msg.setDestination(47226U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.385273888766;
    msg.lon = 0.833451058638;
    msg.z = 0.56934159825;
    msg.z_units = 189U;
    msg.speed = 0.68093068986;
    msg.speed_units = 244U;
    msg.abort_z = 0.381763872949;
    msg.bearing = 0.778899398171;
    msg.glide_slope = 241U;
    msg.glide_slope_alt = 0.444839115775;
    msg.custom.assign("PSZTPMWQLJM");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.473662250047);
    msg.setSource(7792U);
    msg.setSourceEntity(224U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 24U;
    msg.error_count = 5U;
    msg.error_ents.assign("QDOVLWXIAYBDXCDZKOUWOXKSZHQIDSRLATGKKMYVXIOQMGAHWDNLIYYGAIMFUMKVNYTULUHDUJTFZPQCEFDPQSYAPGZAXPXZZOXMOSFLFWWJMHARCYHWALPSIEHSMBZDXJQTNBEBUNTQTVKRQGJJHMEKRIWGKGJZKEIB");
    msg.maneuver_type = 45528U;
    msg.maneuver_stime = 0.0850256459043;
    msg.maneuver_eta = 24370U;
    msg.control_loops = 1858938313U;
    msg.flags = 190U;
    msg.last_error.assign("MMDESPNAVMNKF");
    msg.last_error_time = 0.670243937699;

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
    msg.setTimeStamp(0.760719479491);
    msg.setSource(24370U);
    msg.setSourceEntity(124U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 19U;
    msg.error_count = 224U;
    msg.error_ents.assign("CYNVJKDCUWXILICNKFRZWWIAGWWQMTKPAEHAVANFZMPDNQEBOJLAQVACLPTVMAVRGEIHOOAIZCCCYNHKGEPUNPJJYVQYLBUOMHPATEFODBKSXNOUJXSSTYYFRGGMBXLMTSSHRHWZYZECLOINEZUFQPGKWXBEKDSABRBRCYKSRBIPFCUJXXPJHOQTXW");
    msg.maneuver_type = 4652U;
    msg.maneuver_stime = 0.412343556005;
    msg.maneuver_eta = 12783U;
    msg.control_loops = 2319244203U;
    msg.flags = 171U;
    msg.last_error.assign("JWZBUYEUOFVIEITFPMQVFJZ");
    msg.last_error_time = 0.161460891522;

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
    msg.setTimeStamp(0.610130043761);
    msg.setSource(53123U);
    msg.setSourceEntity(182U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(109U);
    msg.op_mode = 241U;
    msg.error_count = 200U;
    msg.error_ents.assign("WGARJXWOXPSEHTBMZTUWFUOJGDRBLSWEPCUIRWRFAM");
    msg.maneuver_type = 58948U;
    msg.maneuver_stime = 0.0195098001901;
    msg.maneuver_eta = 9163U;
    msg.control_loops = 4074596018U;
    msg.flags = 198U;
    msg.last_error.assign("ZJGMPCWEULJDDDQAGBKQLHCTOJMFBQOURDFNLILWNPPAPIVNAXNENKUNUMFAXCJYMEQHEUOJZGQZMDHBUPEVSBCGRUFGAQZTEWYHL");
    msg.last_error_time = 0.490789718803;

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
    msg.setTimeStamp(0.236507707994);
    msg.setSource(39093U);
    msg.setSourceEntity(117U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(132U);
    msg.type = 82U;
    msg.request_id = 10937U;
    msg.command = 64U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.257863067296;
    tmp_msg_0.lon = 0.695583197749;
    tmp_msg_0.z = 0.738649764176;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.radius = 0.284244361687;
    tmp_msg_0.duration = 61302U;
    tmp_msg_0.speed = 0.294281582502;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.custom.assign("UQEVQAWALRLJXEDUUNYYOPNJJEJSTLAPXMFRABLNCKHXMIKJXDEEIWURDFMIJCHWTLGVLKHYWIV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29855U;
    msg.info.assign("AQCNAKXFGUAKBRRQCNCCMFFBBZAHEPXCQNDGPLAGWRYUTLDKQKZGMNWSMIFQPSDNRBOKGMGCRVWSXUMOTZMEOPGDRNHOWTMYGTTCEXCMUZOZTJSNLNEHQKGVHDYLLJXWFIREVBODQRUZLVLIDNEAZYPYAHYBVJFRHSIPWJKTUPFPBXUIMJ");

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
    msg.setTimeStamp(0.592066381486);
    msg.setSource(35465U);
    msg.setSourceEntity(48U);
    msg.setDestination(6950U);
    msg.setDestinationEntity(44U);
    msg.type = 183U;
    msg.request_id = 54934U;
    msg.command = 158U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 65283U;
    tmp_msg_0.lat = 0.863345782079;
    tmp_msg_0.lon = 0.562284919496;
    tmp_msg_0.z = 0.107771476582;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.speed = 0.704273826723;
    tmp_msg_0.speed_units = 122U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.613796433465;
    tmp_tmp_msg_0_0.y = 0.572042238826;
    tmp_tmp_msg_0_0.z = 0.324934318178;
    tmp_tmp_msg_0_0.t = 0.598336973587;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("COTIOKRQFVZMJYDPVQCXSJXCGTOKVVKXYLGCKLPHWPGBLSIUJFWAFBOCRQWDLTPNJYLDIOHWLIFPFMEZKESBPMVRXOQGIZUYRJPEFOZHZBRLQRIFUTGALNMWAMMEDXUXEGNWEYEXXBKZPUDASSBOQUUFKTHTIJBERCBXHHNTNWGEWHODWMDZCZPINHUJEDQASVKSMDQFWXPINLJSUVVQZKYICVAOTAQVRNAGC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58753U;
    msg.info.assign("FYTWDAOBKQGGESDURICLXXIRYPGNESHIKSCOYSQPRUUVGEFMPVNLKKHCGJSVVOXJKBBIVWTRYFAJGANDYFSVFLPUIUBMKEMCOXSBMWDLPHHCWKLGYPPNJSXQAXTQEIMWLVDOZMWTQNBSQAUCDMNHJNOITOBEQWBLKACLINDRGYMOFHJRRQMEKRPAVZKCFYVWUZNGZYRTDJHZXUDPLVJEUBFAJYJZIHTZGAXQRSEZLWD");

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
    msg.setTimeStamp(0.564689090347);
    msg.setSource(60550U);
    msg.setSourceEntity(188U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(211U);
    msg.type = 210U;
    msg.request_id = 44906U;
    msg.command = 96U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.635251840498;
    tmp_msg_0.lon = 0.674142587729;
    tmp_msg_0.z = 0.668304618122;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.65828830501;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.bearing = 0.373950418335;
    tmp_msg_0.cross_angle = 0.89907932869;
    tmp_msg_0.width = 0.365495989749;
    tmp_msg_0.length = 0.778386187983;
    tmp_msg_0.coff = 135U;
    tmp_msg_0.angaperture = 0.0719800880403;
    tmp_msg_0.range = 31645U;
    tmp_msg_0.overlap = 109U;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.custom.assign("SMITFKIAHYWLNRQRBSRNCROKDDBQCUKFBYVVGZSGTXCPFTUAGIAHQZXGOPCRHDRZETZANMNOVMWRZVSXXQDQLSVWJDQTVTUIEVJZUXFMMTUEJEROXLWXYUUSLMGIGYFWFQBMFYIPMYKAKKBPRSNAZGTKKYMIPHWJO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 497U;
    msg.info.assign("HTWFXJOTHFZEPIQKSAHLZNSBFGHLWTAEUQMCNAHCHCTYPO");

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
    msg.setTimeStamp(0.921557519704);
    msg.setSource(44466U);
    msg.setSourceEntity(252U);
    msg.setDestination(62804U);
    msg.setDestinationEntity(44U);
    msg.command = 235U;
    msg.entities.assign("WQGMWCSSFUVLOWGXARDWXKKEKTXYLFBBUMFFYYIFIYXBRFYDZTPGXQOBRHNBNLQZUEKJDCOEAQWPVGQMMIKMBYONSCJFWCZVJHCFOZHRATLVHGSPWIHATMSNNRTNEAEOAZCTRWLHAXFLQBSGYJGJWSBDIAOPUYOMOPYRIUTGZHUVQDEVSKLUJEAVZIBUVXKGQT");

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
    msg.setTimeStamp(0.126671127081);
    msg.setSource(65450U);
    msg.setSourceEntity(247U);
    msg.setDestination(54815U);
    msg.setDestinationEntity(12U);
    msg.command = 110U;
    msg.entities.assign("SGQQLRNNKCMGZNPXOEVAVNBXIKPIBEAEYLVFNZOLDMIW");

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
    msg.setTimeStamp(0.181974336409);
    msg.setSource(57596U);
    msg.setSourceEntity(125U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(188U);
    msg.command = 247U;
    msg.entities.assign("DQUCPWJZGCHOYQZBKNIDSBQNMRCDFXKLSCIRCDFQVIGXRCSDKNRAAVERHIONHAXFGYGYTCOBAYBRYUHYZEHJJEWEATBBKDELIVMMFUOPJSNWNDQ");

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
    msg.setTimeStamp(0.752945408889);
    msg.setSource(21493U);
    msg.setSourceEntity(8U);
    msg.setDestination(28513U);
    msg.setDestinationEntity(156U);
    msg.mcount = 123U;
    msg.mnames.assign("CALLIJPSDDYKPLCHPYXVIQRCKVFTRAJWYOOFVNBJEZREACQWECWJTVFPJDRJNBTBDAGLHNEVBXF");
    msg.ecount = 241U;
    msg.enames.assign("DTVWYAREUSZXWBLELJARXGZYRUEBGCOYKXPMWRTVYIC");
    msg.ccount = 112U;
    msg.cnames.assign("ULLTSJCNPWMQRSOWWOLISBXVDLUGDMTDPFPCYIQXOOWWOOSGSIEAEYHENJLBFDHAEXIJSPUBZVFNMJZFZMBCYKEREKYMONMNWFPRMVTSUPORFIABRSSEPXHJZMUZNUTCZZPQOAREGRHQKPIYFGVQEUVDHBFBGTDNXTRYQWKXDBCLXQVGLADRGCKHXMNWQXFKQKSUHZCEAVTYWNUHUJVZNAHGKTWTYBJCAQTCYKLICFXAIJHKMAJLIVDDZLGPOV");
    msg.last_error.assign("FDXQBQDHSLPQKKWTATTYRZZXUPAYSBWVLEJCOYYXFAZQWERDULAHGBVOUBKOREFOLUXSXEINGBRRIZJXLUMWKWYGHOTUITJQMVNGAJLBTHGHSHUBPSAECVOVAEHDYXDVCRWOSKJJCANTMYAXZRNUURCITVPTYWJELMJVRGCGFMNDLNPPHXIYBNDKVRMHIZ");
    msg.last_error_time = 0.867734222437;

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
    msg.setTimeStamp(0.601932351169);
    msg.setSource(22507U);
    msg.setSourceEntity(205U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(235U);
    msg.mcount = 32U;
    msg.mnames.assign("TFIAGLUNLAZEHCBRPPJTNQAMEXYSQDPIWAMCOLZKKVGGTBEQYZDUGXVXUSDXOKIEMUPWYLXLZHIBEMUYMLQLDERHRTJBNWWVRAYOHOGEBNEVFDISNDUEPVYXVSNXDAMLRFFD");
    msg.ecount = 177U;
    msg.enames.assign("VIPSBTYXUZQZIXWZOHAZHYDZYGSKJNRIRMLHILPNWWKNAFLKVLQOEDSRKOKDSUYTTIXCVISGRVLHQTTIANGDMZMWJ");
    msg.ccount = 14U;
    msg.cnames.assign("ZNNOCXVYPFZXPKZCSZUHJGFQXJIKZLVRBBTMECOWUJCKSBTRTHYITMWASMLJMLDBRYTUPRHKJWBKJQERGYNEOLMZTADSKXUUWKXMIOCULFOHIKGGXEQTHSNICQSLTQHYYDWNQANJFHPGJTYLEFEDVCLIIRB");
    msg.last_error.assign("IKJPRQFEBZXOCAMYVTAICXWQIPHWSKEVXCFGCJXYXNPMGKIWNMAPBYALSENGQCXQGTLRBMDXOJRVOOSSTTWRFOITCRUEWVKUEUHUHWADCMPULETKPLGGISKIZMFRZYQJUCTYH");
    msg.last_error_time = 0.952092508482;

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
    msg.setTimeStamp(0.915249130338);
    msg.setSource(57405U);
    msg.setSourceEntity(69U);
    msg.setDestination(23558U);
    msg.setDestinationEntity(6U);
    msg.mcount = 143U;
    msg.mnames.assign("PKYHPERWJDLONDIVCILBFEBUQTFJWDARLUXZSVAILDWH");
    msg.ecount = 250U;
    msg.enames.assign("FFXRBXKROCSFSGXBHAOSTTACBZAVIKUNQOAVDOQGENUZCMZRSYSQLPKJROFJEWUTJMMSORPLTHDGTVYBFXYAUMZMREWEUQFIHAZQNEOYBLMRUUSWHZFFGGNSPIMWXUJCIVCLMGYPTSXEEBK");
    msg.ccount = 220U;
    msg.cnames.assign("IPOHFMJGRBPEBMMNKNLEPDHOHXGOYLSFGVYFSAJNZBGUXHOKLKNJZTUVCIZJZCDKTXQXVQGWJSUOUTOQIEMKDABEOZWJTYJRTIWVDAHRMUFYFEXBAOPHYSIJIVXVBKDEYCSGLWEMRYABFUUKRDLBPGLTEWULLUTXMNLAS");
    msg.last_error.assign("NJFSALOMMYNFXSKTFKUOVLDWRQTRPWLFBCFCGHQLVQWWBQJOBWIJETNABANBGSSQQYSKCIRXWBMOLBTOSXGJHWEEITYPICKZQOKNINZGUFHSZTPAVUPYDGLAYEZZMFFGKUVRQOHITZZDRHDURDREZC");
    msg.last_error_time = 0.758087026845;

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
    msg.setTimeStamp(0.22259084003);
    msg.setSource(63553U);
    msg.setSourceEntity(242U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(27U);
    msg.mask = 175U;
    msg.max_depth = 0.951130049616;
    msg.min_altitude = 0.436966104945;
    msg.max_altitude = 0.887473887255;
    msg.min_speed = 0.472918226606;
    msg.max_speed = 0.654274238782;
    msg.max_vrate = 0.495883376109;
    msg.lat = 0.0285823455993;
    msg.lon = 0.174752776284;
    msg.orientation = 0.293391920625;
    msg.width = 0.295108819551;
    msg.length = 0.42011869369;

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
    msg.setTimeStamp(0.756230914405);
    msg.setSource(27839U);
    msg.setSourceEntity(162U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(59U);
    msg.mask = 69U;
    msg.max_depth = 0.142258743886;
    msg.min_altitude = 0.126513651528;
    msg.max_altitude = 0.0173326621607;
    msg.min_speed = 0.246765850276;
    msg.max_speed = 0.12391707381;
    msg.max_vrate = 0.37120118629;
    msg.lat = 0.483689674324;
    msg.lon = 0.606681579998;
    msg.orientation = 0.783935465618;
    msg.width = 0.452208942461;
    msg.length = 0.586055788593;

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
    msg.setTimeStamp(0.522872525663);
    msg.setSource(28972U);
    msg.setSourceEntity(95U);
    msg.setDestination(58551U);
    msg.setDestinationEntity(131U);
    msg.mask = 184U;
    msg.max_depth = 0.832921276766;
    msg.min_altitude = 0.448598379072;
    msg.max_altitude = 0.0333906703083;
    msg.min_speed = 0.453303396141;
    msg.max_speed = 0.598242604829;
    msg.max_vrate = 0.723568398934;
    msg.lat = 0.00274105045254;
    msg.lon = 0.31733599602;
    msg.orientation = 0.728774717427;
    msg.width = 0.111592061886;
    msg.length = 0.843188626314;

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
    msg.setTimeStamp(0.872489160915);
    msg.setSource(23424U);
    msg.setSourceEntity(36U);
    msg.setDestination(16946U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.268197376114);
    msg.setSource(2093U);
    msg.setSourceEntity(70U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.278293949627);
    msg.setSource(32103U);
    msg.setSourceEntity(44U);
    msg.setDestination(43880U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.646304593655);
    msg.setSource(8858U);
    msg.setSourceEntity(254U);
    msg.setDestination(14417U);
    msg.setDestinationEntity(9U);
    msg.duration = 29686U;

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
    msg.setTimeStamp(0.594661634099);
    msg.setSource(9396U);
    msg.setSourceEntity(229U);
    msg.setDestination(63362U);
    msg.setDestinationEntity(119U);
    msg.duration = 51948U;

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
    msg.setTimeStamp(0.203350270226);
    msg.setSource(7829U);
    msg.setSourceEntity(223U);
    msg.setDestination(5478U);
    msg.setDestinationEntity(41U);
    msg.duration = 7909U;

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
    msg.setTimeStamp(0.512177137177);
    msg.setSource(43628U);
    msg.setSourceEntity(38U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(174U);
    msg.enable = 22U;
    msg.mask = 2434631352U;
    msg.scope_ref = 3995200574U;

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
    msg.setTimeStamp(0.515153356515);
    msg.setSource(51502U);
    msg.setSourceEntity(166U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(138U);
    msg.enable = 67U;
    msg.mask = 673915167U;
    msg.scope_ref = 1921689476U;

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
    msg.setTimeStamp(0.218665285516);
    msg.setSource(56065U);
    msg.setSourceEntity(3U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(121U);
    msg.enable = 16U;
    msg.mask = 4078413573U;
    msg.scope_ref = 3792068158U;

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
    msg.setTimeStamp(0.386820843498);
    msg.setSource(57062U);
    msg.setSourceEntity(200U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(143U);
    msg.medium = 179U;

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
    msg.setTimeStamp(0.718600113719);
    msg.setSource(57012U);
    msg.setSourceEntity(251U);
    msg.setDestination(19694U);
    msg.setDestinationEntity(62U);
    msg.medium = 234U;

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
    msg.setTimeStamp(0.162776598066);
    msg.setSource(51212U);
    msg.setSourceEntity(253U);
    msg.setDestination(63426U);
    msg.setDestinationEntity(183U);
    msg.medium = 231U;

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
    msg.setTimeStamp(0.470122458682);
    msg.setSource(36313U);
    msg.setSourceEntity(215U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(196U);
    msg.value = 0.285900528629;
    msg.type = 215U;

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
    msg.setTimeStamp(0.285749962912);
    msg.setSource(26181U);
    msg.setSourceEntity(86U);
    msg.setDestination(64927U);
    msg.setDestinationEntity(242U);
    msg.value = 0.831008146732;
    msg.type = 253U;

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
    msg.setTimeStamp(0.208444168665);
    msg.setSource(60189U);
    msg.setSourceEntity(213U);
    msg.setDestination(56100U);
    msg.setDestinationEntity(199U);
    msg.value = 0.980505940529;
    msg.type = 190U;

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
    msg.setTimeStamp(0.781435071666);
    msg.setSource(29530U);
    msg.setSourceEntity(53U);
    msg.setDestination(42159U);
    msg.setDestinationEntity(249U);
    msg.possimerr = 0.0042851940522;
    msg.converg = 0.452792827577;
    msg.turbulence = 0.900687073194;
    msg.possimmon = 184U;
    msg.commmon = 85U;
    msg.convergmon = 65U;

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
    msg.setTimeStamp(0.742993881165);
    msg.setSource(16386U);
    msg.setSourceEntity(161U);
    msg.setDestination(12042U);
    msg.setDestinationEntity(184U);
    msg.possimerr = 0.0816410872159;
    msg.converg = 0.821752734547;
    msg.turbulence = 0.227085065451;
    msg.possimmon = 122U;
    msg.commmon = 67U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.196190820009);
    msg.setSource(28726U);
    msg.setSourceEntity(166U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(48U);
    msg.possimerr = 0.396160392288;
    msg.converg = 0.860451577433;
    msg.turbulence = 0.597888302691;
    msg.possimmon = 145U;
    msg.commmon = 150U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.732206092027);
    msg.setSource(5583U);
    msg.setSourceEntity(100U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(145U);
    msg.autonomy = 27U;
    msg.mode.assign("TMQPALPPYCINRTKWIMKJGLDDBDTGLDLCTWQOBHIHOKYSSHTSELVZOAHRITQOLCTVRMKMICZEQZYEVAGYZOXDJWVGALANDQLEXUPRRTNPBTEFRJPIVNFACUNUMMFXDVHHSQYBN");

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
    msg.setTimeStamp(0.754172298875);
    msg.setSource(20869U);
    msg.setSourceEntity(195U);
    msg.setDestination(42359U);
    msg.setDestinationEntity(141U);
    msg.autonomy = 15U;
    msg.mode.assign("PUTLHINNGHIUHZVEQAHGGTUBVKZKFEOERWJLKMMMRIMMIZNMQBXGULBQERPNZFKMMDSJPTWRCJDDGJFWBRDQITZNBWFXOTEUMBLPAWSHOJDAQSOFNYHXZFYKBKPECYLAV");

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
    msg.setTimeStamp(0.542349139466);
    msg.setSource(55608U);
    msg.setSourceEntity(202U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(65U);
    msg.autonomy = 63U;
    msg.mode.assign("ZXJJCHOHERFCVYWLMEJQHUTKQCKEFDFHAJRKRUEUCBNSFGIZWCJI");

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
    msg.setTimeStamp(0.508405617784);
    msg.setSource(34093U);
    msg.setSourceEntity(15U);
    msg.setDestination(17136U);
    msg.setDestinationEntity(13U);
    msg.type = 81U;
    msg.op = 223U;
    msg.possimerr = 0.638706318947;
    msg.converg = 0.154520506419;
    msg.turbulence = 0.588669835954;
    msg.possimmon = 148U;
    msg.commmon = 180U;
    msg.convergmon = 174U;

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
    msg.setTimeStamp(0.558098298857);
    msg.setSource(334U);
    msg.setSourceEntity(68U);
    msg.setDestination(43254U);
    msg.setDestinationEntity(208U);
    msg.type = 33U;
    msg.op = 214U;
    msg.possimerr = 0.27666048178;
    msg.converg = 0.35264293634;
    msg.turbulence = 0.605047704707;
    msg.possimmon = 7U;
    msg.commmon = 18U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.858112424242);
    msg.setSource(49591U);
    msg.setSourceEntity(23U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(237U);
    msg.type = 87U;
    msg.op = 75U;
    msg.possimerr = 0.51128478348;
    msg.converg = 0.508793040839;
    msg.turbulence = 0.873314759479;
    msg.possimmon = 74U;
    msg.commmon = 60U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.460645057053);
    msg.setSource(62825U);
    msg.setSourceEntity(214U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(151U);
    msg.op = 61U;
    msg.comm_interface = 117U;
    msg.period = 31868U;
    msg.sys_dst.assign("RGNLKDHDAXHOEBDYZQJEAJWWNMUPMUIKQBDXVSCBGVITFDGRVCTTFPBMXLFGLUKTJHKALXNCOTYJNASADCHGPOLZVDDATRJUFUNJWZNMAZVJFXJBKSYE");

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
    msg.setTimeStamp(0.19456723619);
    msg.setSource(50178U);
    msg.setSourceEntity(57U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(147U);
    msg.op = 112U;
    msg.comm_interface = 54U;
    msg.period = 25744U;
    msg.sys_dst.assign("XMOCSTYZZYEMZJRDUTOCGXJSWJMFKUFWJMISPFWLMYXNNCKQGERRSE");

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
    msg.setTimeStamp(0.485000806493);
    msg.setSource(19073U);
    msg.setSourceEntity(219U);
    msg.setDestination(37838U);
    msg.setDestinationEntity(168U);
    msg.op = 165U;
    msg.comm_interface = 99U;
    msg.period = 64543U;
    msg.sys_dst.assign("PEMBXABEZNQDZYQHRSSZIRSYHRRBKSNAQLUXZQTKWMJTWFONIMHPKWDUOZQHLRCFFFCEHPHXICSXHKOGTONCJPGGVZJVADVGLGSKMVHJGUSFIYAUAYLZIMUJZLNXMPEYETMEGJZJTDCWDYEPKWBUFLWPWLDOEVTEJBNKKYRATRNDDIOILVFAIRKMBFPLVVTLKIHTCMQNCXRFPAMASRUXUDOCVQANTXPBYEFGCOWUGIQXHWUBYJCOBQXGOWJDN");

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
    msg.setTimeStamp(0.853069502409);
    msg.setSource(18787U);
    msg.setSourceEntity(39U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.92517564349);
    msg.setSource(12331U);
    msg.setSourceEntity(124U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.130578107306);
    msg.setSource(20584U);
    msg.setSourceEntity(88U);
    msg.setDestination(307U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.222561289128);
    msg.setSource(21204U);
    msg.setSourceEntity(12U);
    msg.setDestination(30386U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("TMQKAGIKELURLUFFYNCMZPRHLKQGVAMZMLELZGNPUBVUYPABQNTYRVEWHCPM");
    msg.description.assign("HVEPVAMQOUTVQIBMNZXWUBWSPGEWPEEJETWHKDCJKDVFSIOUYYQJHFAONOGYVRZCEYSTPPINWXIHWACOZURLCIOAJCJMUPMJSLSTGDLNTZBRIMKWNSRQCLEKJKQQURDHHTXFLPCAVWXNMVJKZSEWGJFMRGNFPPTWBODZFDLZGBGXDFVLTXNDRZMFJOMIYBPLAOQZYHEHANLUOASIGBYUVACXQETBUHXRXYUTDYFKXBKHZSGFANKRSRB");
    msg.vnamespace.assign("UTONTSEXMMFPWVXAMDOXKVYEGGSFVDLKJVHRNOPVNNHQKXDPKIKIUUQEQSJZFFOYLWCCUEGZYJUDOSBXHHOKMABLHAPSJNSRTIUOSTQMBRJGUFZGIBBQVTMXDZWBVLQRQHRPRDPGJWKWKNVGAERTYAEUYHPUMOXEFFWDWPZNMCIVI");
    msg.start_man_id.assign("ZJSHRZROFHLYLSALXEHQDGJRAGMUUMSIOJWROTMYSVBFTLERFRSCEBMMBZGUWILEYUOTJXAKSJAWPPFKGTLBOCDCIBDZDIIJKDUAVGXRIQAHAOTGMQLRWYPDUF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("URFHFDBWQRKHYBMXXYXIWPPYFDFLSCATQPQQJLOPZJFUWVMEZZTSXGYKASJKZVVCYNGCLVDRCKBMRSBGKSM");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 60008U;
    tmp_tmp_msg_0_0.control_ent = 87U;
    tmp_tmp_msg_0_0.timeout = 0.463586057476;
    tmp_tmp_msg_0_0.loiter_radius = 0.144830180032;
    tmp_tmp_msg_0_0.altitude_interval = 0.844317069361;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RemoteCommand tmp_msg_1;
    tmp_msg_1.original_source = 64308U;
    tmp_msg_1.destination = 42632U;
    tmp_msg_1.timeout = 0.971142776885;
    IMC::DissolvedOxygen tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.0446365754148;
    tmp_msg_1.cmd.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.351916310715);
    msg.setSource(6170U);
    msg.setSourceEntity(233U);
    msg.setDestination(33212U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("NTRGNHCOPHTJTDNPKQPVDLVYRRABWOJVQTFEOBEYTDLTNFXJDYNZHJJMZQGQLLMGHTAYURXAXKBHGRLRDQLKWSKBUKSOYAGCTLIEXIMGWQCUMVFZCVAKSOSKJIMLDVFGEJMHOBFJZOYEPEWWUCBZXANWITQRBMOMBRPXHCLDZUVFQWNIYUVFREZAH");
    msg.description.assign("RDELPDABVRHSJENDMEEGRRTKAOOYXZTKAQHQOWQXJDSWHMXFTYQNNZXXGXPWZJUFHVSDJOEKSIAMVTLPKDYYNAPRFKUISHOAFEBJFLALVCHOWDIWUCSQDBWWELARNCHDQEGGWPPPUCFGXFRUPTMZKJCGBSIJBBVUHTJTBNPGLOUBOUQN");
    msg.vnamespace.assign("FEXJMFHZMPKEXYRLUJTTYIIIMTUJWQOQQYQVSKYGYOEWEHARNMEAGCQFZRXRICDQYTPAKJYBARAPOQLNXPVVPIHJUVHZNIVZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ULJCYFJXSJIRTQYBPJCZDWYEPTMNDJCUREWVHCWDBAKRMBINOCAHIFJDMRATUZSPIECYHSFMGOVGZDSEWOHCLFLHNOJHARBLBWWOKQBULUJMTHUOXGAONTZISGPAUXNFYXNZOMBQHKMXVNAVQVFSUWKSVWLPZKKWLBLUYMDYAGZDMTNDQQTHAETCEFRXKEERLMSJVQPEOPXGKXXLVYXVTGRZNJKRTFPBZVFPGUSYCIYZCIIBQADNIDKWIQRHPS");
    tmp_msg_0.value.assign("RPBCSBAWHVIBVVVLLFTHJCQSLENJWDYHGATRNRFTLNGIYUWBEVKYNZVDFIJJUAODAKJXRCOUNXEQNTPXZZZJQCGOBMOXGYKAWSZZMBLTXINSGWDVQBZYJEYKVMUUOPUTNAORZPQEJG");
    tmp_msg_0.type = 31U;
    tmp_msg_0.access = 167U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MEBVFZARCJDSUTOQDZOVUBTXADPMPCXNWQRBIRECYHYWL");
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("UWHDDTZVGNWVGRQPEGXNARNCXYFBVRCDPWAIRWSOADYHBRACFIBGAZNWALWDJCMNVJTKQVQFZKAJVXHDTHU");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("ACAJBBPCUSZLOIDQSH");
    tmp_tmp_msg_1_0.value.assign("SRVDIQWQGTSYARZTMTHPHGCLZRJEYQDBFXAEHDRFWXPOWKDJZREOSPZLYFBFWEZFUGFIICFKLHAIBVIJTCXDCYNLVYMPIPQXAVUQJCWULDUYEGMBAQQVUNSJYMONHGOLIKCDVUXVVPGBLMMCQKRTLPBZGRJJKCMVATYIZPNXQHHOGMHSWNOMKRXDKAFERNGCMWXAOOCETEJKNABGFUNJSKSXHDWYISXPATNDYKUIOUWS");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.98863656008);
    msg.setSource(6677U);
    msg.setSourceEntity(48U);
    msg.setDestination(32709U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("PQOSNFWTAVZQGZNCXEMRCZWEODQFWYKEGTVWIOYSILEBXVKAMBVUDEZIWHTTJQZJPNLCBWNMYWJNRAFYGFJBMBHDF");
    msg.description.assign("WNHLGMCDRSMDYHUKZFYMYRNAFJOOZXZUVLQJSONQHTNXLHTQRZTQBULWTQAWCPBPGHKKSICTNAILMFDESYNFROPGVGAWABFBPACZITVMCQYNQXEOMVVLRGEXFTESBAQJNAIGKEXDEYDOUAWWRVXKMDJUTIKXNPYLXEBHPZJJDRRBYNG");
    msg.vnamespace.assign("IHGXNRIHATMEMXUAPBVWJTXRLTJSIFOCKUNAZHNQWPYIWCLFHBBQUKXDNPUAUOEXPRXFVZDJESQNQOKRYWGONTTRHSNC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LSKNVZOWYLDHDFNKHHNJKDCLVROBE");
    tmp_msg_0.value.assign("PYTTFJOPOHRXVBBNWNBH");
    tmp_msg_0.type = 253U;
    tmp_msg_0.access = 150U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GKINKFJLWVKYMYDQDMZODHTTEPVNFQVYXPJAONJHANEZWDDWKSMCSPXZIBIAKFGPHZRSEBOLICJUNKELDRRFXJIIZWZWVBTJCETQJIVXOMYLTCTYSAFHASGQLFGVAHOUSPLLEUZAEXCXZRNCOHSMPNWFPMKRUQGBTRDRUOYPZMB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ITYEUQRNDA");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 7824U;
    tmp_tmp_msg_1_0.custom.assign("AHMMTYVBPCCRPHAIESTKXIHIDFLWIZDHYJERZOLWHYKOSHYTPCABRWZGXGKREOBVHPJDOOGOIXFMALNZMTWZNE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MCYCUBNTBYSPHELIIKUSFDLAILLDVOMNKYUQSMVKMAJHRDWPSJGE");
    tmp_msg_2.dest_man.assign("ZIDELZAZHYWZRPMMMOELCKXRGTDXTFNNSBPXKXFAVEJGRETQBAJWBVRHTUWKPIRHNQICJRGXBNKSKVCHIWZJDAWFQMYGVFRPXNVIKBYSWIZQUXESCKYHMREGBDZVQBODURJTSIUFFEEVWLEYQ");
    tmp_msg_2.conditions.assign("XYKCQVFHGCBGMRWTJZKFEPDDSCEHPXEWYZHCEWOWGAJJPAITJKNOOLEUIIYAYJDPTMQZYLNCFACXTEZBQVSILEOFMDNTMGVWOGBHLTJDSVEADUFPHDWWZMGPHIIUUYMRVQAIIISLCKEGHRDBJVSNXMBCTBLHCAQTCMZKINBMBYWFYRSAGVVDPNZPUBVFYUBSSRGFKULPJNXAOSFQZRXLHJZL");
    msg.transitions.push_back(tmp_msg_2);
    IMC::PolygonVertex tmp_msg_3;
    tmp_msg_3.lat = 0.944322426036;
    tmp_msg_3.lon = 0.174417938124;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.39989288518);
    msg.setSource(31178U);
    msg.setSourceEntity(18U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("ZMSZUHADDHZVLKRDKFKMLPXXBQLRCVZBYQV");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 28940U;
    tmp_msg_0.lat = 0.971511883185;
    tmp_msg_0.lon = 0.495100029457;
    tmp_msg_0.z = 0.304364932038;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.speed = 0.737220003266;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.232529368727;
    tmp_msg_0.cross_angle = 0.668364460988;
    tmp_msg_0.width = 0.638480537641;
    tmp_msg_0.length = 0.29691572921;
    tmp_msg_0.hstep = 0.192924250172;
    tmp_msg_0.coff = 65U;
    tmp_msg_0.alternation = 14U;
    tmp_msg_0.flags = 114U;
    tmp_msg_0.custom.assign("FKCHOUSCPZQDPRJDWAGLWATUCVXNOXLCJDIQUAXUOEZYZRUDYBNZTRDBNRGSEBVHTKOMIFRFCUJYUAOVXWGEULRYBXPAYPSSBUFRFOTIGOPPJGPLIBQVIPFEKKNGFLKJUWJHLZVPEHQHMNXZAIAVMOBQHAMNFHXEKAMNMTCVJJQNQKKSESWGZRWTVIOYDSGNYHDLGTBMYZCKRGFAC");
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
    msg.setTimeStamp(0.769674335299);
    msg.setSource(22950U);
    msg.setSourceEntity(7U);
    msg.setDestination(59625U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("JKIMWEEUDBCXAQRXULTADWLNBLPRLNHENVUTASVGXGUWWAIWYBESRGZJZYIKZYA");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 59199U;
    tmp_msg_0.name.assign("MCCMCIDKDZDOWXVVMLYPHFBHFYCBRQEUJLJNQBIWEEIEQGHASIZJCNQVIGWGKNUYJUFWOEXAAZRKJTXQNRGWRXGSYKTDYWXQQUOUWAZDVHOHMMOTLXABTSSTW");
    tmp_msg_0.custom.assign("CZVGOBKHAXJEJTAFZGRXFDMOWCIALLONPKJREIGZUVUA");
    msg.data.set(tmp_msg_0);
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 248U;
    tmp_msg_1.error.assign("MCLMTIPFDZRVBVAZNDIFHOVBSQJANWNRVPWZUAHKRWPQTKNYDTMGWQZGCOAZTRXVENDUBXEOBWFAYIOUMDFJELUKIQQBWLCFXVJJXYDGDQFJICWGEDHSLUGHWCFXUHNSLOSNUMTAM");
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
    msg.setTimeStamp(0.0756292344572);
    msg.setSource(26754U);
    msg.setSourceEntity(27U);
    msg.setDestination(38170U);
    msg.setDestinationEntity(35U);
    msg.maneuver_id.assign("AZKBVHFOWQHISSQXHVPSTVMUPNYIGBZHOYOWSXSZZWNLTWPDEYVDRHTAYMOKRTDJBCQTUIABRUWHCMQFNYLZBJDVAIEXZCYKFLGFCCSRUCGKNBQOSGAUBWGDQFOKLSQQQEZLUDVLPKMUMCDCGAJNBRDZCMJIZNJVEFXXUYHQLDIRNUVKWFVJTXWIVX");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.355559853072;
    tmp_msg_0.lon = 0.596721505946;
    tmp_msg_0.z = 0.997866192519;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.speed = 0.496773579737;
    tmp_msg_0.speed_units = 1U;
    tmp_msg_0.abort_z = 0.902036783031;
    tmp_msg_0.bearing = 0.29025506116;
    tmp_msg_0.glide_slope = 32U;
    tmp_msg_0.glide_slope_alt = 0.450109276178;
    tmp_msg_0.custom.assign("NJFWFAGKLVJDUKNBHCYOTYJOKFOFGBEHCCQPXYVOHGWEQEMVKDNHMRAQWDP");
    msg.data.set(tmp_msg_0);
    IMC::SaveEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("TLRMVVGYAIWDWQGQRCXFDHAJBYRTERSIJDINWCEIUSQDFMVEITUPIZOAMLHOPSBNXXQUZKOKFPMSNWEXJZBMFHOCIFYVBSKHLBAAHCJDYGEACDQLUMZTPONGQXGNINLLYFKRPBQFZYEAJBVPRVIVTF");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("HOCPRLCBZY");
    tmp_msg_2.value = 190U;
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
    msg.setTimeStamp(0.979209719662);
    msg.setSource(19452U);
    msg.setSourceEntity(124U);
    msg.setDestination(48003U);
    msg.setDestinationEntity(106U);
    msg.source_man.assign("KGKMIRZESZGXYJJWGALHBPABDVYTLIYHUQKVNYKTPRUCCBABCMLXFUOFHWUNOEVSLAIRQXVRXYMUSNCPSNELEOJKFTKJDAWIYZUUSCGNKLFDUSSPAOZYONHHLLHIBMUBKTRQLYQZHDETKVYHDWVNAHOFXWTPFXWGJAWBTQMQDF");
    msg.dest_man.assign("PGNLRXTFTJLDELJVLSVORYUERSAYGWDVKTAJTDYINBIHVDKPZPGFFEGIDKWXRWZKDUCJKIPFEAGVQSKEONZLBVOFMYVAJTLXNRMTWQUWZVMZCNYFWQNOGBCXHBBYS");
    msg.conditions.assign("IKCUETHLABGAGALUMDOICCMGOJHNRGJWHIOYSYZKSTMUEOBVTYVLPWFXMWBSDVTMCHETRURDEURZBXWIFGFLWHKTVMXMCKMQVZNQGSPBHJJRVESAEOXYTOOWSTJYJMVWOZXDKCELOLPQRSYNWZXPYIGYFOQTTFBFNPJQIAAAIINIQKZDSMDXXLES");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 65U;
    tmp_msg_0.plan_id.assign("TUXARFWLKVDYHFHPBWJSVGBEFZINWROVDIDYGDQKZDIVSCLFASWMIVCGRZTQYERJKHJAUJEUEOKGPXLCTSXNUFHAMSGOFVMCHKOJUSIHBLATFAWUTNEQJDKOYOQBCUGBLXAPKYDJMRLAJLBAMMUXBHVNESXCPWJYVZVZNWQIMMTOOQFSRPNLYGRKKXGTXNEIBMP");
    tmp_msg_0.plan_eta = 1677832997;
    tmp_msg_0.plan_progress = 0.459308779301;
    tmp_msg_0.man_id.assign("RMLRBDYPHLWXL");
    tmp_msg_0.man_type = 43858U;
    tmp_msg_0.man_eta = 660080310;
    tmp_msg_0.last_outcome = 92U;
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
    msg.setTimeStamp(0.174374463073);
    msg.setSource(7787U);
    msg.setSourceEntity(38U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(108U);
    msg.source_man.assign("FSWMZXKSSUVDRDCQGAHTPPAKVOOJWIAZFWQKRMKETBHUP");
    msg.dest_man.assign("KBAZBPXDEFKPLK");
    msg.conditions.assign("WHZUEIFCMBZGPYZSGPETCKIPVAEWTXAZPZHIEASLGKFUPSBXUBOIIRNYKZKRLXHATJWAVPDYVFGDXZ");
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("NKUMPWOHLUBWYWRFSPGICYLKOJZPSRVKPUEXXBTCLYBGHZSBRUSXQOQMWKXAFZUJIVOFWAFVTZFIJGVEBHDHQXDCNHLTRHVTJJJDEZPPSXXFTHENUGEYMZVMOZWYRCZLQQKIPNPMDWIZDNNDOGTMOVCXRQKKSRONZJEFQBYAC");
    tmp_msg_0.x = 0.143172179913;
    tmp_msg_0.y = 0.313829056112;
    tmp_msg_0.z = 0.463484072265;
    tmp_msg_0.n = 0.96580146442;
    tmp_msg_0.e = 0.499071283999;
    tmp_msg_0.d = 0.553171021357;
    tmp_msg_0.phi = 0.949350214846;
    tmp_msg_0.theta = 0.482608517037;
    tmp_msg_0.psi = 0.885431317377;
    tmp_msg_0.accuracy = 0.531010677328;
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
    msg.setTimeStamp(0.321154919947);
    msg.setSource(52141U);
    msg.setSourceEntity(81U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(114U);
    msg.source_man.assign("OPPDWLYUXQTWEPEDGRYZEWAGZRAQKIUKVMIMIJAAVKMFVRBUEEBYOWJQZFIZWQVVMIOTFNNMCXMPOALHKEHAXWRYOQJYDUUTNVVKGHLZSPLOBKKLCMQSUKZLVMBCNOQSJITRBJXDTLVHYIXCHFDFBJPP");
    msg.dest_man.assign("GUOTMUVXSNWLPIAEXVTGGBLY");
    msg.conditions.assign("USSQYWEBZXAWJETRKPRRNCATOIQYDMGLPRZQPSBHAZKCCBDKEWSVXXCBMLJGDTNAJELMFTERSGFPYPXIPILZHEUTAARUZPTGCDIEQTZVEGNOGTYOBNMCCFHJMUJJMVYRWBNAURKIIVOIYFMDQGYVZDHF");

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
    msg.setTimeStamp(0.994375090433);
    msg.setSource(63278U);
    msg.setSourceEntity(173U);
    msg.setDestination(60429U);
    msg.setDestinationEntity(117U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZNLWOWCBHNHSWRTSRLEOYWXMEBHMIFXCUOFANUTYZSDDLYCPGECOXARVTRTITVRLYAVHVWHLBQFZEGIACLSGFDWXGQGKIQOCLKSDINXHWBJJDEIPYSQBFGMSDDJSPMYLNHGTTQXIGIOBS");
    tmp_msg_0.description.assign("USCUOMPXNRGNRLHOPWEHVTVPHSXJXSBCAFQAXMLTYSKMOGQKSLWVKSEATOYEITJCFFZLHKIENHDIHVYSJFZNCWXIPRXOEHGLUYBXQDPNKYBQFTGLZRYGJEUWTGUOWZZRSDWMKSJRNBLDIXPFYJYHLXDIQPUMBMRQOATUJBQDMPEAGVPKUN");
    tmp_msg_0.vnamespace.assign("RDRJXWOKHAZMARWPQOUUFPPYMREBGJXOBRRXSWJENNCSUQQJZWLMSATFRSVRLSKDBAUWZTCQWPMIJKMJJLDCCMIOIXBVQDEZIXTUNLHOSYFKBONNAJPOXOEZHSQXWDSAOUGGPHHTXQIFVMMYCNII");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YBWBNHLECXSDWBPBSNLNEKWTJKNVKBCHSZLOCGQDYYQGJKZLIFSWULMTJSGRNPZYUVUCDGFDPFDKFFTZOTWVFZRHWNBRARIIYLBUJXPGGWDCSOTXFICTSHDUPBMXQFTAVXRXAQJQAAUAPOIRGOTXAEIRJGLUBYOLRYXHEVDZZOOMW");
    tmp_tmp_msg_0_0.value.assign("JNCDHWKUCGHBCSVRICCQKBCYBJDBONNQWVQKSYTIRMWLMJQFXXZTJOBSTHVIYDRPEOXVXKPWYNUDGAAYLEIQXLEELZIFICSFXPEKWTFSHHGWYEBRGLOOKNUZRVCPTOWMRRGAAZEXAVJLNYTJZIQMFBUBKLUSAFDGQWG");
    tmp_tmp_msg_0_0.type = 97U;
    tmp_tmp_msg_0_0.access = 113U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HCEONAMRKGSBWJGNZLUOSWFJGZTSDYPVWLBCSJJMGXZPUFJVIVEHQRFVARNCDWHWBIUJVZZMUAXXHYLKZMHCMUDAQECYRBDXKPEIYHBMEXBOKKPXNZBYQIFLTPAITWFLSKWKCFKFLYSPUGXUYPGWUDCVIVCQO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GKYJLNSODXCTPDKXLCIHWVTHHFGTQNECLZGYKANUQUBESBOSTDPVSVCVIPLWRZKMZBQJLKHCGIWONWQFXNWZZAVLRPIAICDJFFOGQBRNOXPDXGUZXBDMEVPPYZUUVKNIJKRKBCR");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.446905707767;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.283881049231;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0794681354453;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 75U;
    tmp_tmp_tmp_msg_0_1_0.duration = 64188U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 57555U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 14003U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.247762753324;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CreateSession tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 4074437673U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.0551704030002;
    tmp_tmp_msg_0_2.x = 0.362637189246;
    tmp_tmp_msg_0_2.y = 0.213360492887;
    tmp_tmp_msg_0_2.z = 0.804782622366;
    tmp_tmp_msg_0_2.timestep = 0.748867497792;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.723700914248);
    msg.setSource(26404U);
    msg.setSourceEntity(218U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(193U);
    msg.command = 8U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GJVVXJPHADAZTXNKDYWRGFVTQCZBENGDIXXFITQEMMSHOPNAJCUJOZJZJIFALFWBPBENIKTCQJMLRIGSWLHTKNNMDUZYXEIVRTRXEMFPHMYQNKQZLGGPSKUPCPCNBCZSSWGDUVSSCRDXBSGUJLQTDVOLOMEWVYAJUBSDTUSRFHCBPNO");
    tmp_msg_0.description.assign("XMMETPDUINYHDUNMPKAXSLQSCAFJTLIUFWVNNQRYYNNRVYREVVHCLGOXHUKETRUZXLSOTZQWJSGPRKQACWKVNULZIEPRTZBGWWEHSONKXYJPMHCIHVABRPFLHRBGFJ");
    tmp_msg_0.vnamespace.assign("PHJREGSUVNVMYXQAOPFNUXAOQYDCMZFYMDOKMETLDZWDLWJKJIPRAAIVXHJESHCKOBPLBJKEGCFBSFOYCZGFUCWJTGLMGQKFRWBOHIIXTRTLTVVEJTQVNMQEBNLKNCZSWUZOAJWJZXSVYSVWLIHEAUUMEBL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KFMDLXMNQSHOXQAMCRYTICZCKLRHKHEDLVJTBGAHSALXEYYLWFWEIAVPJSBBNKYPSPHUOOZWGGVSZFNNYBDSZRLQWVROZSAXXMWGGAHBELRRNDUCAYUUGTLTXMCOLQNBKERBYVXOIOKEWPCTUQ");
    tmp_tmp_msg_0_0.value.assign("ANNRGPIJXZKXJWLHWR");
    tmp_tmp_msg_0_0.type = 203U;
    tmp_tmp_msg_0_0.access = 49U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FCZPKAQKFORPAVXQUXYARAIKSTECROEIWTXZRPJUZQGYUYUCEMDIFOEALNWFATZZMCLRPFNHVXGLYBJCQXXYNJIVLWGJHRAVHWJBWEKXOSPEOUGDCUOYWBJSNLVY");
    IMC::LowLevelControl tmp_tmp_msg_0_1;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.222101610491;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 127U;
    tmp_tmp_msg_0_1.control.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.duration = 51595U;
    tmp_tmp_msg_0_1.custom.assign("SEBCGUGRXBHLTAKMZAMAFDLKZQGYFBAHOLWXEROIIKGQKOUBKEDJIROZLQSYPGXSOPLJPFRVUFAWRLFSJTMYTJEKNWCUPXVIXNQZJHCJFDWRTSWLVMDUXTRYUVUFOLCTZSCHKYQTDQCICXIGPLPDBFYNMHYKQUVHIIVAD");
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
    msg.setTimeStamp(0.679075280785);
    msg.setSource(52383U);
    msg.setSourceEntity(236U);
    msg.setDestination(11470U);
    msg.setDestinationEntity(213U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RAUZMFQPOOBMRHAZLJQAHLXXJXOKNMGBTIKVRGQDPRCAAHSDTJISLCHJENSCHJNYWTRIZSNEDNIYVTQZCYICOUWFLBTGALGIWBKMWHLPKBKICSSJZHGYDAKVRPMLJ");
    tmp_msg_0.description.assign("XGUEXHUSDGVTVNRUSNJMLKVFCPZALIIOHMLZZDNABPYUQHQAPGCMUFMBHYFSDGTMOXMBZVUGCVDWNA");
    tmp_msg_0.vnamespace.assign("HEUBAGYWWYVEHIYGAIUQWNODMDSFBQAXHWYKKZEKEZBLMNIQTUHSTNQXHJRCZET");
    tmp_msg_0.start_man_id.assign("PRSXFOHMUPTMCAVFHPTEEKSFSOGBJPPRMUVHKLNLPZHGNCGLCKIOIAHLFAWIODWXFPLCYOQRXJCVWGBKEUMHIBCFELYDZJLLEQGTPJCGBDUJVUSUSLVZHAQENNRYJQXIJNIOMTUDQTWHMTYNVDBEXAIQJCZSRZJCXYAWBROYPUKYNRWXDQCRYSTGMWBIDSYPUKEVKGMAHYGQZSOTNKKZBNFVFL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WGUOLQCQASKRRJNLAAWEXYLDKPVEEYTEGBKMVFMOJUWZNIFCITSZLJQNHCDAUFUCWUO");
    tmp_tmp_msg_0_0.dest_man.assign("VANRQFCXSTMNPKJAZZKIXMWJAPGICPVWBWXGCKKZQGTJGMFKEOPBPDAOGIFFZMXBXCDFCSHKBZEREOIZRTVORNYVDECCXKKSJVXLUODOBYVNYSHM");
    tmp_tmp_msg_0_0.conditions.assign("CRUMRAPGOEJDBBUIDWXRXWLFSQFWPXPHLMFGFGFNITGGYMQQZZGNEKYHYAEIVKVRYITINYOXEMTADUQEPMNSNAIWRPUDFGDAVWGHRJWTXFLVOOLKOBNACCLTSMSA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.185294169142);
    msg.setSource(55866U);
    msg.setSourceEntity(29U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(25U);
    msg.state = 12U;
    msg.plan_id.assign("QWGETPEZIAAXAOEMIXKBKHVMMZDWPCVKUPQIQUJXFULMECZATDQWPWXQZIXXOKRNSNYHXQLHCYXIKCMDEGVOABQXDSRESCTMDCNARZYQZFNEZJSJHJBUJFDWRHTNKNBYGBUBPJSXSVZCHUFGHU");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.396124298898);
    msg.setSource(5194U);
    msg.setSourceEntity(122U);
    msg.setDestination(48928U);
    msg.setDestinationEntity(4U);
    msg.state = 44U;
    msg.plan_id.assign("TWJBVHIIICRTVNTJYLHIWNKYWYBVM");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.0496070591358);
    msg.setSource(29155U);
    msg.setSourceEntity(72U);
    msg.setDestination(22011U);
    msg.setDestinationEntity(208U);
    msg.state = 176U;
    msg.plan_id.assign("SPOMBCSWZNXUEANXNIZUZLXIAWDFDCCFELAYKQCAKRURHMUHXCGIEEEUVTFLMGXNTZYPSRNGKABGVYNWTBJW");
    msg.comm_level = 238U;

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
    msg.setTimeStamp(0.252709782311);
    msg.setSource(56944U);
    msg.setSourceEntity(69U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(91U);
    msg.type = 177U;
    msg.op = 189U;
    msg.request_id = 21502U;
    msg.plan_id.assign("GWHVODAXCGKKNQVTQRDXPNKEYWNWELLTWTRSOPHBZKIIVARBZGJOBJUQKIEZQYVLBNDIWAMTICTREURRYSFUHXPHTPYLYVDNJREBIJX");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EASXQBWJAIGMKUOHFXBXCXNNYHAROSBHEMBGONKITPKPMKRJEJIGZYVXQTLRLQZCHTDWBHQZUHZKWPKSZUYJZNLCCVBSVVYKJZCOEDFNAVZMVWQWIAJLVTQCQLUSBMSDCEBOGMPI");
    tmp_msg_0.description.assign("CEXZFWGDRBCMGIDABDRXWJPNLISKTIDEGWLYDAUQTOUJQDRYVOFHOQDNYHOHMVGUSPEYXGMCKUF");
    tmp_msg_0.vnamespace.assign("GZYYFOWUAFMWOAICCUPDIRBUSBQMJICJBZTATDIQUQNCYAZVQMNJTXZQNEVLRSP");
    tmp_msg_0.start_man_id.assign("SEKQUZKBLCBPNXKHWQIVSDSZQNVKMVPBIJCJOEPFZRUDVHNRJONVHLJKTNSHGPTEFWMJQFIANRATOTXBDQUEWGWORDXEFHGBMDEGWGLBHFSQFDCAYRLIAIQYLZERYMGYKPXKOSNGHGDBTUWLYSYVTAWCITRUUUSCMCVERIUZOBQKYUBMKQBLPE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AQINAKMPEFQBRKCYTLFFHWH");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 31501U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.278341201844;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.281810757997;
    tmp_tmp_tmp_msg_0_0_0.z = 0.924287645065;
    tmp_tmp_tmp_msg_0_0_0.z_units = 99U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.718250436726;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 134U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.347843572342;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.323272676066;
    tmp_tmp_tmp_msg_0_0_0.width = 0.0269029437836;
    tmp_tmp_tmp_msg_0_0_0.length = 0.552335424081;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.475360326954;
    tmp_tmp_tmp_msg_0_0_0.coff = 56U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 89U;
    tmp_tmp_tmp_msg_0_0_0.flags = 25U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LOVNEJJUNCFAWFYMXAFASIWACNIZLVIBQVKWIBCGQJVVKHEFSFZZODYKPYGAUNLHEYPYTERVUJDHTXZSSJLCYQUVRXAREPDLJDFJMQUGUOWBDZUSDGWTMADYXKZMXORZXMKNFPREJNQRVMONOO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YPNWJOXRHEQWVYZSQCXOFMERSXATZBNMWTGFLXUSWKJTUJGMGHMTBLHCXCFKWTPDKCAKBLUBIBNMAVUSWLYYIWLLFROPAAQGBIOTSALFHRDFIYHYEBZQNREERX");

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
    msg.setTimeStamp(0.761733867261);
    msg.setSource(36820U);
    msg.setSourceEntity(204U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(206U);
    msg.type = 18U;
    msg.op = 194U;
    msg.request_id = 60859U;
    msg.plan_id.assign("ODPKSIFBNTHADFYTIUFFQGITEOLOWUCYSKQHBOBAVBJVJRQPLDYBGFAQDARU");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.314511163125;
    tmp_msg_0.base_lon = 0.652437231936;
    tmp_msg_0.base_time = 0.225472284626;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 7434U;
    tmp_tmp_msg_0_0.priority = 36;
    tmp_tmp_msg_0_0.x = -9411;
    tmp_tmp_msg_0_0.y = -17397;
    tmp_tmp_msg_0_0.z = 30557;
    tmp_tmp_msg_0_0.t = -15088;
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.system = 24257U;
    tmp_tmp_tmp_msg_0_0_0.duration = 20783U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.121800527872;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 102U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.922994414825;
    tmp_tmp_tmp_msg_0_0_0.y = 0.653568283305;
    tmp_tmp_tmp_msg_0_0_0.z = 0.56751016075;
    tmp_tmp_tmp_msg_0_0_0.z_units = 156U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BQUHSPKRHCRDSPHAAJVVGXLAKNFSUSXUOZKMIGTXQMMOETXIPZHHYUBZPYLCBRUKTA");

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
    msg.setTimeStamp(0.122768424595);
    msg.setSource(64960U);
    msg.setSourceEntity(133U);
    msg.setDestination(56042U);
    msg.setDestinationEntity(113U);
    msg.type = 76U;
    msg.op = 4U;
    msg.request_id = 60525U;
    msg.plan_id.assign("JBRWAYYOSGFGADRJFHHKURINQRLWDOZHDYNUPRJDHCHXMQAECTCMBZJFECBEIUNNNVPLSTDQZHIBMJPGIPSFJDELRATVKXIRYXSXSYONWWJKFATMXFCOLCAOTMZNIPWTCTUISTMSMZQWHBKYQLFJGIEGSDDQKVXYKQBCUBKHLLFEPPMKRAZYOGKZUSFEWXWBDQUMMSZPQRVZEJEVHVEZLAVXCLBBXVVDIQOGRAAGWOPCYTOVHWGXJPUGIULNNU");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 55189U;
    tmp_msg_0.type = 241U;
    tmp_msg_0.tow = 1782009413U;
    tmp_msg_0.base_lat = 0.460829023559;
    tmp_msg_0.base_lon = 0.12192210776;
    tmp_msg_0.base_height = 0.184494654539;
    tmp_msg_0.n = 0.0824002844124;
    tmp_msg_0.e = 0.0700688905118;
    tmp_msg_0.d = 0.14289910945;
    tmp_msg_0.v_n = 0.755993330204;
    tmp_msg_0.v_e = 0.514141376491;
    tmp_msg_0.v_d = 0.177012280263;
    tmp_msg_0.satellites = 83U;
    tmp_msg_0.iar_hyp = 47595U;
    tmp_msg_0.iar_ratio = 0.762716190064;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GVAAOUBSWODBEBEEMQGJMDHPFCISJXPFKLGOUFEKQCVDMQYFZJWBYWPNNCHXSNUGVONCVTTSHZRQAKFDHRZTCREXZYIRZMKDRPLXTDBTYIMOXRLXXWWMABFUIGJWLHRFSLXDENGVTIQEBUIGNXIKAOQZGTHWPUJDGJCDJPUCHOVMYJFCIQSCOKSJYFESRSKBZVMTKPNYCYBLPAUYNXFLAZPEVMZUIQ");

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
    msg.setTimeStamp(0.670368648211);
    msg.setSource(21342U);
    msg.setSourceEntity(57U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(132U);
    msg.plan_count = 42948U;
    msg.plan_size = 2142556243U;
    msg.change_time = 0.061027198274;
    msg.change_sid = 4229U;
    msg.change_sname.assign("LJAAVICGJDFQDCNXTNMKRKGEECUCJDNOMKHWMYYLXPFMWZLVSWNCNOKXNFGAICIIEGKHSYEPTX");
    const char tmp_msg_0[] = {64, -72, -10, -62, 33, 52, -37, -70, 36, 86, 36, 14, 84, -108, -111, -119, 29, -126, -62, -105, -94, 56, -128, 54, 94, 96, -79, 57, 34, 83, 89, -48, -29, 80, -103, 15, -117, -102, 28, 1, 115, -10, -31, 71, -117, 50, 105, -123, -53, 117, 100, 4, -79, 47, -43, 58, -108, 109, 50, 39, -46, 12, -127, 67, 120, 126, 8, 78, 71, -18, -99, -100, 81, 124, 0, 10, 9, -93, -82, 42, 13, 91, -96, 43, -28, -90, 32, 104, 94, -80, 91, 122, -30, -100, 74, -58, 91, -93, -57, 106, 62, -3, 41, -35, 95, -101, -97, -105, 102, -25, -65, 7, -98, 101, -36, 14, -79, -62, -55, -89, 104, -41, 13, -120, 61, -102, -19, -62, -125, 116, -39, 46, 28, 21, 67, -99, -81, -105, 121, 11, -51, 115, 28, 16, 0, 106, 4, -56, 18, -91, 18, 5, -12, 88, 43, -117, -4, 119, 9, 56, -121, -88, -70, 53, 80, 50, -111, -83, 112, 83, 50, -49, 75, -76, 61, 18, -57, 21, 97, 62, 63, -119, 81, -31, 59, -24, 2, -53, 64, -59, 31, -125, -51, -14, -37, -94, 9, 80, 85, -126, 3, 82, 15, 70, -86, -98, 3, -18, 78, 56, 16, -4, 39, 5, -91, 93, -124, -90, -12, -42, 55, 121, -83, 86, 119, -75, 74, 58, 17};
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
    msg.setTimeStamp(0.0312137057912);
    msg.setSource(50222U);
    msg.setSourceEntity(225U);
    msg.setDestination(58410U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 10103U;
    msg.plan_size = 516189948U;
    msg.change_time = 0.0788336103127;
    msg.change_sid = 50824U;
    msg.change_sname.assign("PTBVDCLMIXJC");
    const char tmp_msg_0[] = {-116, -80, 107, -72, 38, -118, 14, 72, -53, 28, -92, 54, -68, -97, 50, -98, -2, -75, -38, 18, -64, 109, 95, -115, -67, -122, -30, -32, -26, -66, 103, -61, -117, 5, 93, -104, 58, 61, 87, 17, -80, 4, -99, -87, 68, 125, 77, -101, -47, 90, -82, 2, 108, 104, -66, -89, 1, -82, 48, 9, 45, 39, 52, 21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FVWVEJKRGTXCBEHBDKVFZWYZDXASVMJLEOZONCHICFNFOGMXDLDNMKAWMOAKAFUFIDSYGMZPQRMOUUQXAQKWRIVXZMREGRNLOBMNEHRNWNZEERFSIKPYYTBJVOAUTCFD");
    tmp_msg_1.plan_size = 60738U;
    tmp_msg_1.change_time = 0.878816673432;
    tmp_msg_1.change_sid = 54294U;
    tmp_msg_1.change_sname.assign("IQZVAZMZUXTTEMVAJCBZPAYTUAYQAOFTSGPDKNKYRXRUPDGGZTMYJJKQWSUBRWNIXQVJZHIEZXXCKYOECVILUFORWYHUWOETCYQSUFCICFZFFRZNQVNEVNWOWAHBDTXCHPFVBQIXY");
    const char tmp_tmp_msg_1_0[] = {5, 64, 113, -120, -87, -79, -49, -11, -34, -128, 23, -6, -110, -88, 114, 73, -83, -51, -87, 104, -14, 106, -102, -117, -64, -73, 8, -120, -2, 123, 119, -67, 71, -65, -84, -125, 105, 40, 51, 8, -67, 95, -39, -30, -16, -21, -114, 95, -58, -23, -98, 67, -87, -9, -28, 19, -69, 82, -103, -87, -111, -96, -12, 39, 114, 115, -109, 121, -10, -8, 5, -64, 55, 126, -80, -3, -96, 115, 63, 122, 89, 70, 11, 84, -18, -12, -43, -37, 11, 26, -51, 71, -27, -17, -13, 63, 85, -48, -74, 88, -16, -18, -94, -108, 88, -63, 12, -108, 70, -97, 31, 54, -15, -10, 125, -75, 109, -104, -92, 120, 24, -99, 71, -10, -44, -74, 95, 6, -126, 81, 43, 32, -85, 9, 43, -99, -38, -70, -64, 122, 88, 51, -121, 34, 83, -85, -64, 8, 21, 59, -56, -81, -45, 74, 56, -93, 77, -127, -45, -17, -8, 124, -85, 115, -101, -93, -113, 94, -19, -73, -34, 125, 126, -109, -5, 95, 79, -76, 125, 92, 39, 30, -61, -52, 81, 3, 8, 66, -35, 123, 45, 108, 98, -4, 99, -50, 35, -121, 15, 126, 116, 5, 113, -84, -90, -115, 126, 52, -85, -43, -57, -49, 22};
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
    msg.setTimeStamp(0.668057033721);
    msg.setSource(30733U);
    msg.setSourceEntity(139U);
    msg.setDestination(28081U);
    msg.setDestinationEntity(180U);
    msg.plan_count = 5416U;
    msg.plan_size = 1637245081U;
    msg.change_time = 0.74800307214;
    msg.change_sid = 10882U;
    msg.change_sname.assign("TFSDGQOXVAWVASHXEBHFDPYZZXSEIJWTUTDPDKCZSBEKYJQIFFMKSXNZGTWFANFXGPDURNRBMUVQTHCVGLYWPTDXVGGMXAUNDOC");
    const char tmp_msg_0[] = {126, -5, 114, 115, -78, 54, -44, -102, -34, 88, -23, 124, -73, 108, 19, 98, -43, -56, 115, 66, 3, 24, 83, -20, 11, -126, 126, 79, 34, -106, 90, 96, -44, 53, -38, 54, 117, 120, -121, -20, -30};
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
    msg.setTimeStamp(0.763040646377);
    msg.setSource(1813U);
    msg.setSourceEntity(119U);
    msg.setDestination(27824U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("VZVOPPYTGKIMBJEMAGEQRBUNOWFATOPTFBIGOHCIXJQAEKZFVTVHIIXZUX");
    msg.plan_size = 26969U;
    msg.change_time = 0.282457053178;
    msg.change_sid = 29211U;
    msg.change_sname.assign("BXOLLKEBFEHHMCNTBZLRFSZYBGMIZWGAYZQQMYVQNTUQDLJWSMHHPDVNGWANWJFRROPKBFPIZEIEQZDEHDDPXUEPSXIPIGLNLCQDYOTAXCBZKWVRGQVHOFKECFKKDJGPEMCDRVJFGVCMACBYOOMRJQOJSBUTHOQ");
    const char tmp_msg_0[] = {-117, -113, -58, -75, 98, 74, 19, 4, -43, 126, -114, 2, 51, -120, 25};
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
    msg.setTimeStamp(0.538529685988);
    msg.setSource(19218U);
    msg.setSourceEntity(203U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("QUBEJGPAPYMZXEWBPUXZTXSGJDOESEBRV");
    msg.plan_size = 9438U;
    msg.change_time = 0.31154952821;
    msg.change_sid = 38607U;
    msg.change_sname.assign("HOHVDGNLXBPNZPFLHWQRSMZSZQZMUXMNFZXBFWDMMYXPPQKPGFILYFXVSKZTZKJFVJTXODOECOZKBVJTGTALLDQASDJAISZHDVCGLYOFVXCBOGTSRJMAADJUWLHERIEAQP");
    const char tmp_msg_0[] = {27, 5, -49, 59, 13, 109, 58, -67, 98, -35, 91, 125, -97, 93, 0, 101, 63, -64, -62, 111, -57, 111, -10, 96, -115, 122, -111, 40, 100, 106, 35, -69, 30, 46, -125, 34, 108, 25, 24, -113, -25, -114, 67, -60, 121, 125, -116, 80, 109, 83, 91, -9, -16, 110, 113, -112, -100, 18, -117, 80, -120, 98, 19, -24, -71, 2, -110, -48, 24, 28, -105, -68, -87, 77, -68, -80, 90, 13, -35, 9, 61, 24, -104, -58, -23, -69, 115, -68, 94, 109, -106, 14, -6, -21, 74, -99, -15, -1, -77, -43, -2, 25, -110, -77, 120, 111, 34, -112, 114, 110, -9, -82, -69, 22, 103, 23, 14, 68, -101, -120, -79, -78, -103, -85, 27, 124, 57, -30, -64, 61, 118, 96, 58, 29, -106, -19, 28, 9, -12, 20, 56, 118, 89, -91, -76, 11, -120, -32, 86, -43, -9, -12, -112, -8, -15, -25, -57, 61, -119, 79, 116, 121, -39, -68, -3, 77, 18, -44, 14, 125, 126, -67, 95, 10, -1, 50, 101, 104, -21, 45, -119, 5, 47, -3, -27, -100, 4, -103, 90, -58, 12, 59, 110, -106, 73, -8, -108, -94, 99, -81, 100, 33, -36, 49, -80, 15, 12, -61, 121, -17, -10, -110, -77, 52, -5, -72, -32, -66, 107, 123, 41, -78, -101, 36, -78, 114, 98, 47, -38, -113, -37, -15, -98, -54, -76, 8, -110, 39, -99, 117, 66};
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
    msg.setTimeStamp(0.194547254752);
    msg.setSource(16077U);
    msg.setSourceEntity(197U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("WVLPXRBDVCKSLIKCJYNZGRFVFXJGPJNJWEOFGVCVSMTPUVXGBFWKQRYHXTXVNBFNSMJSOHQYBECYDUVOSDTXJKBETHRZICXAEKEASTINZUASGLDN");
    msg.plan_size = 33396U;
    msg.change_time = 0.559707735216;
    msg.change_sid = 53960U;
    msg.change_sname.assign("EVJOOSYTNZIQMH");
    const char tmp_msg_0[] = {125, -126, -65, -113, -103, -42, -92, -112, 56, -90, -19, 38, -82, 122, -62, -111, -93, -113, 53, -4, -118, -25, 31, -85, 39, 101, 22, -53, -79, 35, -12, 5, 68, -67, -128, -37, -95, 20, 70, 10, -68, 120, 72, -43, -46, 15, -87, -33, 124, 14, 24, -91, 50, 105, -71, 99, -94, 14, -105, 38, -79, 17, 26, -26, 82, 85, -115, 77, -66, 43, -101, 112, 11, -26, -23, -17, 39, 30, -58, -4, -91, 96, 47, 29, 113, 40, 61, -65, 48, -70, -40, 92, 15, 6, -23, 112};
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
    msg.setTimeStamp(0.641892201002);
    msg.setSource(45216U);
    msg.setSourceEntity(174U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(83U);
    msg.type = 77U;
    msg.op = 163U;
    msg.request_id = 57984U;
    msg.plan_id.assign("VUNFVMPXIZNXXWEJDSZQTKSTETFSXOKSUPTTOGNRAUAVPVWCHHKJFHNOV");
    msg.flags = 24018U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("HKVAGGYTJMKSWXPNBEWBUIBGFOYYVVIPQSSPTTPCCQVAQQOMOQCNVTSMGUEMBWNFCOTBWWBSJRPFIDJDEGJILWOSHDEROACGEJAZHHOZUERLVGSKZDOUKUJNIDMUZWZMMVBSHMRJQVHNYXXCTAKDRIXDFQKYBNMYMLIW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HPDASUQKFAIFTDHFAGEBXVFTDLURNPBHCXCVJJKBSOPPOZUBRVZWGPLMEZVWOGLUJMRGERWKSMXEFXDCKYXVFLDMLDJFMWVTTUWQYSYKZUUIBOVYYTOKRQPMJKPDNIOGKAGTTNZQOHJLZKYSTCIYYRRHIPUTXHCUCMBHSWCLIS");

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
    msg.setTimeStamp(0.200167207995);
    msg.setSource(20353U);
    msg.setSourceEntity(224U);
    msg.setDestination(1312U);
    msg.setDestinationEntity(16U);
    msg.type = 208U;
    msg.op = 97U;
    msg.request_id = 28160U;
    msg.plan_id.assign("MAVUMFDZDWTSVHCNVZKVKDTQTLAOZYYKVMMAJGPSQPPYKOVNDFOZUOOXZGJKCCGKNADCYZYOIKODLRNTSQREHBGBYBYXRTRALXRXMJIXRCSJDMGPBMXCRNIUISGAIEICVJWJHLETJNLDYOIPQOHBYVZYEPEWEKQFFBAWMTXDVJHDFLWRWNCEUUMHFGL");
    msg.flags = 52448U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("MWRPCAZZOPHGROFGNKETJYMDIWHXRKCJSKZFVYGOGIFRULWDQUQHXQZRIVDLLCUAFVSQHSUUWAMVJSNJBEXNHTEPPEHZECYFZALAOGAJSGPDKUPOVWSVJWYSCBSINBIQSTBNHCTRTTFQBSCHJMGGNEITNYR");
    tmp_msg_0.value = 152U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RQHADQTNYVHZIYJBZBIERZSNKHASXDRMTCSEKYMTUNEQRPWVIGUSQZGJWLGMJUPMGKTHPZECFFKLIWQQGKYOJCTETVHZPKZFVDWCYVFYWDIFLRFPLOTJEDMMBVLHLESQANGAEVBJZFRPBAOMNXVUMDSWLDKGANCYSWDIDGJLNQQYXAFHIUGKXOSA");

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
    msg.setTimeStamp(0.932202258631);
    msg.setSource(383U);
    msg.setSourceEntity(39U);
    msg.setDestination(18429U);
    msg.setDestinationEntity(186U);
    msg.type = 192U;
    msg.op = 18U;
    msg.request_id = 26858U;
    msg.plan_id.assign("ICNMEQHUQFAPMVQKSBTLGXQNBGQFLZWAABIRPC");
    msg.flags = 59349U;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 112U;
    tmp_msg_0.angle = 0.30353105839;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JTENXDLOBVZGVXCIVKXEBHMQLIGRWVBNXDKSFUKUQDGSTHIAJYZTAYQHKBLZALPRRKPWISWRWCADUCPILCSMPAPHXGTYWNNPVUXWGMSFJPTUDQYQMAMAKYELFBHJZVGOUKFWAVDRHBYWQLQHDONRCDWNQGZZY");

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
    msg.setTimeStamp(0.585111745738);
    msg.setSource(14071U);
    msg.setSourceEntity(155U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(17U);
    msg.state = 236U;
    msg.plan_id.assign("SHNRUOOZCKQNLFHCGVWIKHYIMBEGMULZYYGDHYBPSEEPJSESJFTJGQOEPFANUITNFSXMCQXOWCDQMOKJHLLRVRQADKBRCTCEPRKDXTWVYSSCQPPMYGIXJJHMHXVZIREGZHFG");
    msg.plan_eta = -1033026436;
    msg.plan_progress = 0.89292158761;
    msg.man_id.assign("LTTPPRIYELYKJOPMVOUHLGGDLWPNPYEIRXIXQOXGRXVEHCTPOAHLVUKUHSVOFWIOSXLFVIZOIQICKGANRPRWHQZEFTNULZVCEMTXBCDTKGWGRSBKWABIUWLJZZDGSVSRXFFKWQQJFAWLSAJJSIBTMPZOQXKZBXYCUJNYOYYXFCTPVMKVLCFGMSNDQUQNYJGTNHHKPESYUFJFMEAACAZBNAHDNDMMRCUQBAQBDIDBG");
    msg.man_type = 5874U;
    msg.man_eta = 575417862;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.208183774789);
    msg.setSource(21109U);
    msg.setSourceEntity(231U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(167U);
    msg.state = 97U;
    msg.plan_id.assign("JBOTWXYGKPYVBLFFEBATOUKZOQQSHVBKCCJGKRLGOGWXRZYZRMEJHTAASFQPMMUTMHINXRVQPRDXSPFUTZRSFLIUWOLXLZANCYJXFNMPBECJPMZDGXISWGPQJLUECUOSFO");
    msg.plan_eta = -29826144;
    msg.plan_progress = 0.12147463725;
    msg.man_id.assign("SUPODSUVPNJMZWAVHDKRUIWLGDXCXECUXDLDSJGPXLKYTGTNAKJGFMIZCVNCITRNQSWNRVHLRGLMOJZEIHHUGEOBZXZLEHAABLNFMHFLUSPHXICGONKDOZPGJURMXHYTTWMHMENWFFMWLTBQYHMADBZALOPEPUOTSORBPQZVKUYKQCVYJXQJFVROAWQREPNGJMDXATWCCYROUIEGFWCIDFTFRIINVBZQSBYZYSW");
    msg.man_type = 1752U;
    msg.man_eta = 919605587;
    msg.last_outcome = 217U;

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
    msg.setTimeStamp(0.21694834094);
    msg.setSource(33930U);
    msg.setSourceEntity(101U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(53U);
    msg.state = 119U;
    msg.plan_id.assign("CZDHBBIBDCGKEBJYBOKJKYSAYQZLVRPUADGIWWLRFAYOURONNPVLHTHPKGZMEKZGULXTYXDBNRRMHEQGAJRSVTQBFRXOQNVAKBCNJDCMWEADECNHTVVSJLHSVIGKOVIXVVTTAWGRHSJPJEDLPGQNUMUDSSXBHOLPIBFIIXHRJAQXIXFQMUFNFPYLWTTMUYKNCMOGKUOZQJUZZHCJFFUMAWOYMTEEDFQSCASISPEOIFWKZ");
    msg.plan_eta = 1913207088;
    msg.plan_progress = 0.0509604024819;
    msg.man_id.assign("XCBMCTUNRMSIFYKIAZJHVAQDPMIOHXEXOXGCAPNYYWSZNTSEQPPGCQLLVOVHEDKGDZFUYWCWBGBQOKE");
    msg.man_type = 12129U;
    msg.man_eta = 1461768818;
    msg.last_outcome = 206U;

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
    msg.setTimeStamp(0.520343283021);
    msg.setSource(56612U);
    msg.setSourceEntity(142U);
    msg.setDestination(64942U);
    msg.setDestinationEntity(239U);
    msg.name.assign("VUQWMWVUKRNCEOWCKQWHVLCLLQXDKASIAZDUMOCZKIXDVYWJPDEWLYVBOBMFDESYRALZLOISJOSXFNFNHIWXLGXATVPUVBIBTSTDKNVWNHPGUXINNOUVPPOHIMEEFXGEXLEKTRJMGZFSJJ");
    msg.value.assign("SBVSDKDMXFONULLGUVAFGJGYRDXVCELUOIKRSQOKSCKPJOGWYDDFJIGDHSEZXRVJWKHFCYAIDDTNMOETXLLWGNLVQFQMWJERDUOTXFRGRNSEIYNBJOMMUKVZJCPIACWZGWCBDFJAPMVBEYGZQLTABKIFQTHCQVOAUZZHZXBLIYNRJZKPPBMWUTEQCUZVSTXNPAIKLTRGQWSENYFLZIYESEBHAMORPHBXPUOYKBXRMPAUCNSWYMP");
    msg.type = 81U;
    msg.access = 198U;

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
    msg.setTimeStamp(0.338158966156);
    msg.setSource(29979U);
    msg.setSourceEntity(201U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(133U);
    msg.name.assign("EQBUFBNEIVVQOVLKBYCJZJPDKNXLWWXZIJBFCTNSPUPTQTWQCVIMRHEXHGKSUBLZAANRIYMZRTDGHOVKURLCGBOIGMQXTGCUXYBOJRMKGPFEJDFIBURSDNSJMMCERDUYFUEFJOMIWZGYZPNCRSSYZYEOTNALQOSCSWPXEHXNFLDBTGNYCJAHOAHLPHUAQKWWPFL");
    msg.value.assign("YEMYVKHGDUXJMEMVKOUJCIURQCMVWSJPYLVYYMWTCUBXIUPSETWGERKFSDMFIEJVUIZDELRJGYXGFNAYFLQVNWCYDHPHKCAAPSTKFLXNLTXCLNLZZJYFKIPHBWKNOEADHJFFARUHELQCHKPNGB");
    msg.type = 156U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.691494637778);
    msg.setSource(153U);
    msg.setSourceEntity(27U);
    msg.setDestination(21304U);
    msg.setDestinationEntity(158U);
    msg.name.assign("AYQVNXUYVHTBSVHHZIBPAIZLBDJOMIOXNBKEDZNCKUTSICUWMPQDQCYQPXGGNXTBLVLCVZA");
    msg.value.assign("WPKQYGBSHPCUWEUOZYKYWLTRSRTHIKNVSDNVHGVDFVINSDAONAQIZUGQJUKTOYYXTFXFNDHLOXTDRCWUUJRAYLGZVVKZFXYZRPGLOWEMCIDYLBKRUFJMPYKAWPQSIBNEVLEWQUXNAGEFSBWTBQAHRAQFAOUEBGYEHCCKJFQRJQGRSMTXCMZOXCTCJPTZJJNKMODIDTMVFPHHQBNBILUGAIFALLLEPJCBSMZCNWWHV");
    msg.type = 127U;
    msg.access = 159U;

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
    msg.setTimeStamp(0.579742640918);
    msg.setSource(6780U);
    msg.setSourceEntity(233U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(205U);
    msg.cmd = 192U;
    msg.op = 108U;
    msg.plan_id.assign("YYJZWETMSBBGIRLQREDJJWUTHLKAVBNYLNSFZAYXRCEBQMMEEPOGBADQIHALSDSCACUUPCVASYZICRLZCIQNPKUTRVYWVFXMHTLOYHJKAFVNEZLGDUZKQXWZUHMOAWOBDFKHPGDVXJSTPESGJQFIGWQGCBWTXXHVNWPUJTOZHS");
    msg.params.assign("OAALNJSYFLAANUKQHOJAWSBJDCPPUWNFFVSBIGGMTWHGBXQKOQEVUYIEAXKIMHBSGRLEUCMXVFPKJJKJZWWDXNBYGTRLFLREJNSOMOIVEKMHMGR");

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
    msg.setTimeStamp(0.914040465432);
    msg.setSource(44894U);
    msg.setSourceEntity(48U);
    msg.setDestination(28295U);
    msg.setDestinationEntity(78U);
    msg.cmd = 195U;
    msg.op = 187U;
    msg.plan_id.assign("DCNAVBHMFBGKJITZKJEGATOMWYHUYTZRQWTEDEJZSDYJ");
    msg.params.assign("DJBUMVJSWZGKMOUVTDORZRNQTSKHFRDJKWXVTPUXZASONTXAIFHAXPWDMXVICPHGCQHFDQDEXPFACKKBLYZLYOEELGMIRBUNIQVPXRFPGLJSMCSUGMBIWGLYCRBIQOMDYXYXFTRPMHQFLBNSJOEWKKWRENFENCVUEZQAVRRMHGNLBLTJCZQYZJQNTCWMSIHCATFSPDUOPOJ");

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
    msg.setTimeStamp(0.0298206085369);
    msg.setSource(47384U);
    msg.setSourceEntity(66U);
    msg.setDestination(12820U);
    msg.setDestinationEntity(206U);
    msg.cmd = 188U;
    msg.op = 189U;
    msg.plan_id.assign("CADRCXQTDOSLPSJZMMJGOUUZJMUQFEJBXWTOAOXXIVOVIQZULMSRAFSXYTSEKDCRWZMGXCVZKBUQKWRRHYKLIKG");
    msg.params.assign("UKARYSFHHUZRHRMIWPPTJEFWMOZEGQWNCGQXROTPIRBGTWCMINMFSJCVVTLPBCYEEPULVQDDMHFJSZLHAYCKDDVIODIXWVIOLGOWIGMQTUGCJLLSPKAEUPCSQTHOYJMAQOYPNNREGKIENNMNDYZAECCXGFTXURRBHQUFLZYTKAMYFVXGOADBLZNUYEHPOJ");

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
    msg.setTimeStamp(0.783040978808);
    msg.setSource(55985U);
    msg.setSourceEntity(167U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("KCFKUSMYVMIHFOEIKNLZUJ");
    msg.op = 209U;
    msg.lat = 0.418127740595;
    msg.lon = 0.923127449117;
    msg.height = 0.236342924692;
    msg.x = 0.245082129529;
    msg.y = 0.884564157313;
    msg.z = 0.428021697168;
    msg.phi = 0.113654459705;
    msg.theta = 0.236718019694;
    msg.psi = 0.209198363536;
    msg.vx = 0.474891474589;
    msg.vy = 0.566218681946;
    msg.vz = 0.897397582069;
    msg.p = 0.369079705182;
    msg.q = 0.516445914418;
    msg.r = 0.328732179152;
    msg.svx = 0.674488962481;
    msg.svy = 0.766037421035;
    msg.svz = 0.961333470265;

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
    msg.setTimeStamp(0.357837614507);
    msg.setSource(61998U);
    msg.setSourceEntity(22U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("FIOONBDFITEVDDBFJAEBMUZHOJAHWKSLQBJVDXNCSPXFFWCINTJUCUAZVJTWQYVCOAGXTGGOUMHEQLTIGZWNMKXMYFSZIYZXHYOGNSCEVUMLQRTHWVZHLHDXPO");
    msg.op = 250U;
    msg.lat = 0.593082793616;
    msg.lon = 0.809845757188;
    msg.height = 0.793399911924;
    msg.x = 0.168214648455;
    msg.y = 0.764994919063;
    msg.z = 0.49399177889;
    msg.phi = 0.746664267677;
    msg.theta = 0.617391076624;
    msg.psi = 0.976903548856;
    msg.vx = 0.140181474308;
    msg.vy = 0.780182074518;
    msg.vz = 0.193630411879;
    msg.p = 0.565729993201;
    msg.q = 0.195824072635;
    msg.r = 0.891747421693;
    msg.svx = 0.618594653681;
    msg.svy = 0.663399032274;
    msg.svz = 0.380555204343;

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
    msg.setTimeStamp(0.592162840108);
    msg.setSource(5960U);
    msg.setSourceEntity(156U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("ONZGQSWNSZNRZIBEDQIMXRJOJXPADFEEJKHGKRWOIODCSCGUIMJQYVYFVELHWNUNXSMZAKPBKTKKFJYEFBMFCMPRLFFXZPPDXLDQMCPBHUIZLOWYRWPTVSMTFWSEOPYSAGJESRIHQUYCPWTGUIZAHRSMCKBNAEAFJBOILHR");
    msg.op = 186U;
    msg.lat = 0.273752310312;
    msg.lon = 0.897510254499;
    msg.height = 0.647071312506;
    msg.x = 0.163679790456;
    msg.y = 0.884689529734;
    msg.z = 0.486443883849;
    msg.phi = 0.621230028089;
    msg.theta = 0.0888669521538;
    msg.psi = 0.984226159598;
    msg.vx = 0.588614127897;
    msg.vy = 0.689674576449;
    msg.vz = 0.788032203525;
    msg.p = 0.917816544502;
    msg.q = 0.387987884255;
    msg.r = 0.695481698676;
    msg.svx = 0.221802250711;
    msg.svy = 0.101255487871;
    msg.svz = 0.365178137432;

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
    msg.setTimeStamp(0.422264320761);
    msg.setSource(64525U);
    msg.setSourceEntity(216U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("MXKNUFITDWGNDRWZQDTJKHYIOWIVADIOYSVJLZLCYAMDH");
    msg.type = 104U;
    msg.properties = 181U;
    msg.durations.assign("YVQXAULCDPTIUPKDRSFOZCVUKTPLOZJQLUBAEMEPZNVHNRQMLGYROJBTHAQFHIDTOVLXK");
    msg.distances.assign("QLNQCXVEROQLGEPYXQTBEEDPZ");
    msg.actions.assign("JMJGXZIYTZPBIALRKTBXSPGQRCUDKWXQSODUXYELDM");
    msg.fuel.assign("PJDEBWEQKLBODXBSNIXAGTU");

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
    msg.setTimeStamp(0.489361678324);
    msg.setSource(1710U);
    msg.setSourceEntity(42U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("SCABZEFEIHWOJOPSLKZCUGMSTSETUDWGVYLJBEZDFSSDXULHCWDFZQASNWAWASWXRIQXKRKQJDDGCMENGIVKKBBLZVLZOHGVPRBRDYEQFPYUKJPTMLRNLAATGMUNTORXYBBNPJATICACPXHKYYWHYKO");
    msg.type = 11U;
    msg.properties = 51U;
    msg.durations.assign("QMIZALOTIKRJAFAISKVSCZNOAFYHYDCPEXQRWOUKXJDZKQWKKQOJXOZDFMIPEFLZRTMBIUEDWRUYCLZVSYRPEUNAVHBPLQKSXEYIGNFVWETJJTSAHCBDRWSGPXZTHDTEIBCJAHIOQKNPRCNMOQLNFXRXAGQGFZWSDGKGHFDFGMPXPTPYBXIYVHSTLBZHJQGUUCBWHNRWGVTASQ");
    msg.distances.assign("IOZAAWYDRTDTJFRJVKBCXLQYRPWFVDEINKIOFMJBBUSRDCHPRIAUYGHFIMTEEDBLWKYQTBQRMUJHZCRXNPQXTWDXZRSOPVCHIUCGUEJZZUTSWOAUDLFTGHHWPASGVLZPBKPVQJCXBGIAOFYZLAUGRSDFKYIFHZLJPVTNLPEEVSEYAWNIJNBKCXMHLGMNVEWOABYSFMWHENJTNQOQMYQMKYKODPXVALCMMXSKUQG");
    msg.actions.assign("AZTJCFSXGFCNQKLMISHGZJLQNEUJESVW");
    msg.fuel.assign("JBTJHBHGUUXXHJEQRSGZTVYLDPBYLVZGJSGACJCQNKSLDOUQQKWMPOXIMRIMCVXUBADLLWZHGLQSWSPOAJVDRYKMKVBHSDUJVFYCAOPCIRH");

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
    msg.setTimeStamp(0.286641215622);
    msg.setSource(38647U);
    msg.setSourceEntity(37U);
    msg.setDestination(48683U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("ICOPEXARPXEYPYCUTLMBYXXCMESCPQAVAFSMGGFVQPJSOHOKATKYLVZGSBUDVLVNMNPNDYCJTHTROFEQYNVHTDBBYPBYQKQFBVKLZIRFKNBXUAIXVJHUOGJXNJGSSJFNQBRHPGZZKTCHVZRQKNIJZOCQYMUKIOLLJOWUAUWDMGAMDIFDMKQTEZXESWUOHBRFAZNWWVLMICAAGJZSMERTUHBPWEDRTQLDSUDTHEPS");
    msg.type = 91U;
    msg.properties = 207U;
    msg.durations.assign("SPTAXJECRCCCTNUOIWACQAKIILUXHSYOHLDWTDKURVQFMOHEVVDPRTJBQQGIWCLEOHONZNJPFHJEQHSPPMEORWGUCDFKLYABPKBEUBVLGCNEHWILFYM");
    msg.distances.assign("VCZDYPXUKTWSAHNEIYLJLTJWFDSHPOIIUQZMDSWFQVIAXDECAXTQAHTJBUOPTKQKLCMNFVQCPIGGWYGROEWLZBXDRSJZZNYUMPMOHNGUAKTIXYKRGLACCRMBNVQTJRHSMLICVEIZYWUOQOPQEGHBYRRRSJAGMTFXHGFFOSVGLEIFOANWABEPOUMDZXZHNIFBLKZWXTNNCESWJJPBJKMDUODYCHSWYKYSRZV");
    msg.actions.assign("YYLCUJVOXBPTDZMFIMDRJNDFPANDMBYFAHROWTTFWXSPRKDVQIMBQEFUSRTXVPHARHRSGULJFSVYTVEDJFATCGHIZHYNWIWMXOOIHWCAUAQIETBXSRJPAJECKPKP");
    msg.fuel.assign("IEYAUMMWRESPQQCWMUPZDFDKWVXDFUKMIBR");

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
    msg.setTimeStamp(0.341089138914);
    msg.setSource(62282U);
    msg.setSourceEntity(16U);
    msg.setDestination(40584U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.346462616887;
    msg.lon = 0.288849825933;
    msg.depth = 0.637216087262;
    msg.roll = 0.358707230388;
    msg.pitch = 0.0687533062885;
    msg.yaw = 0.931040709408;
    msg.rcp_time = 0.212833484522;
    msg.sid.assign("KINNCZRKUBCBBPNRCMFJSRLVRMFQLJJTIEAQIPTSODYWVLTEDAWLBWPURDOYZKHELYTIAJFWHHLLECINKUPEOZXMPWFXGBEADKYHLTONWCUZOHKVOGTNMEUSDFVUDVFOVKAMNYUHFOQNBPRSQBUJSXTKGHGHPXZZNIIAGTADAIPQNXMJWDIETORFZYOBBMTXGRCZSGQKHSJGWMVEVVGYXQXSSDRYPJSMFWCDYQHICALXVZJWLZ");
    msg.s_type = 124U;

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
    msg.setTimeStamp(0.147564169252);
    msg.setSource(6676U);
    msg.setSourceEntity(204U);
    msg.setDestination(26U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.447991616768;
    msg.lon = 0.542728137907;
    msg.depth = 0.771656263101;
    msg.roll = 0.237308238813;
    msg.pitch = 0.516332403268;
    msg.yaw = 0.768360536791;
    msg.rcp_time = 0.951225155627;
    msg.sid.assign("BICWBEXJSKVGNLVMHAYTFKXYQNDNANPTRYCVGTSLGSJEWXDPPXJKACHJGXWFRXZNNWNIXGULSMQIUSKLUZDPKHRTZUNTKTWXBLYEEAFJOTQKAFUQYELBGYHJOOZFBUADFRFVDJLYHZCAPWHJYPIXQHPRWNIJOQMKSRMBHSJU");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.4248507235);
    msg.setSource(65411U);
    msg.setSourceEntity(121U);
    msg.setDestination(64971U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.134189075055;
    msg.lon = 0.737777956942;
    msg.depth = 0.544186529923;
    msg.roll = 0.170979946556;
    msg.pitch = 0.747683239069;
    msg.yaw = 0.0282523557774;
    msg.rcp_time = 0.765625988139;
    msg.sid.assign("GZWZOBGIRFPMIVATGGBNMECBFSGSZRRKDLXDARWKNHITVKWCNNQDDUNLBAQPLEECCKAXADGLAHYTFRHUEWCVRDWQBZUTSGSHTYHEUKYQLXVFFTHKUYRWFRZLJSHPURMVFTFVINDOXJZHKYOPDWJVIJAWNMCEXZBOYTYOZGVNZOAGMOXSJXFLDPSE");
    msg.s_type = 64U;

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
    msg.setTimeStamp(0.631648594237);
    msg.setSource(9876U);
    msg.setSourceEntity(11U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(89U);
    msg.id.assign("QJBIKHRVNHSWHWCVRVHHZKPKDBYAVEOEQMDUEHKAIQHSOFJMDUKGDPPTZDBYEVCHROJZMFYLULGDCZSFMUTYXSYPNTATKBTZPBWMKWQAQFEYHKPXCCAIUBIOFOSXHFJGMAGQXWTIYLULVGRVXFWUJIRYCJLEFNNNNUOXBXEXLDJAWFQTOPMCUZDXZQV");
    msg.sensor_class.assign("AQGPRNLVAIUNDRYNPPHDTAXETRMVAYFPPWZXVUCODGMTMMEOWYPYPDGRJBCHRBKZXFEJRKWQCQZYGMIKCDTFUBFAVWNOZYEOWXNUSOCOTITCDVIXTYOAIHVYNOEVEQVOGIU");
    msg.lat = 0.167704386137;
    msg.lon = 0.870266768537;
    msg.alt = 0.211401744986;
    msg.heading = 0.389307836414;
    msg.data.assign("JIQNRLBHSPLEFNBVCFIQMHWS");

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
    msg.setTimeStamp(0.7956518246);
    msg.setSource(54498U);
    msg.setSourceEntity(175U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(107U);
    msg.id.assign("YZVJLIKVQJWDQWHNETPCQEOBETDSMIFJEYJKMMAOOFRWMQPUEKUMDZLUITGMELGJZCNHNIHLOYOFROYDTIZUYPRYSBFNTQTZHBGCWYCDXAXBQBIUZIXSTCLPRUQHOAZKDPVYPMLANUFXNCVPXXKOGUNSTFGJMCHYHXVATWILWSGYFVWRHCVDNEXOTZRSEGSOXGNBVWECDWIQAFQKBKSABGJZRURJVPASKRKHXSZIFALBELNCMPBGVQFMRHAL");
    msg.sensor_class.assign("ESNNTTLLLBYUXYOHBSWXBBNJXQYJDPQZRWSDQPIQXZHFJKIFPPLOLARPOEYKMYKMAMUZGAXXDLCEAPCKHRMMWCVMAGLQDOQSJATKRHGENRCDVWBKCZGISIULCBUWBUVPLWVNDUKHUUOQWZFIWMGFOECARHVDBSGYFZEOJHJCXOVAUIPICEQDGVWTHGYFODKZULJJAXJZRNTTFFIEMYKGAKRGCQBPSMXIESNNTHSPTRFQHXTSRTBYJZVFZWNOIN");
    msg.lat = 0.0186371898282;
    msg.lon = 0.856955469723;
    msg.alt = 0.261535903305;
    msg.heading = 0.732957908301;
    msg.data.assign("CFNSXZVGPUFNMXAEBWBEFZLTWIXCDFSEGCGLZVARHDEM");

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
    msg.setTimeStamp(0.851723684079);
    msg.setSource(25036U);
    msg.setSourceEntity(1U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(219U);
    msg.id.assign("AFJUJBATDHBOPDECHNZEIGQWYHSLIFRKBGXWNIOCPZNMDWKPRUFWVCVBFMEVGPFAZZAJTOXZSRMNNXTQKTTLPQQGROWUXEPUPKEWCYAPAFGFVHKOPIQIRMXJQJSFJITHIWLOCXEFWTSMQ");
    msg.sensor_class.assign("CMQBUIGVPEKQIPCRMXHLJUOIBJOWXMGKVOXIENZHVKBKYCRXWLMNSSOANGWNIYWKXSZGHQCYCNEAPRTAUROLCQLJDBUT");
    msg.lat = 0.208626054085;
    msg.lon = 0.846383136278;
    msg.alt = 0.580703660188;
    msg.heading = 0.568430056373;
    msg.data.assign("ZWYWJCOBULCKIQJVRHKUKQWPJREKCMQJNHDHB");

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
    msg.setTimeStamp(0.811537600051);
    msg.setSource(18739U);
    msg.setSourceEntity(92U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(10U);
    msg.id.assign("OZQYOXMUOQZQITZDPHRZLDHDYFNSVIXDSBPTG");

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
    msg.setTimeStamp(0.434835351033);
    msg.setSource(9476U);
    msg.setSourceEntity(26U);
    msg.setDestination(26113U);
    msg.setDestinationEntity(42U);
    msg.id.assign("CNMXPOIKSITPWRQJIMGOHMBOFCSEZLXCGCTVQFJBBHRJNMIDFUUHGCGEDZPGEBTQZOKPAHLZDCTLNNDXAFPYLOURWYMJSLYUJNVVWSSDVRQPKPJTYMCEKAEVDQMXCFFBMALJBXXIERYPDXOQSCELVELJPAANTZOKRXKWWVAXALRMDJBKZTTCPOIGVBJUHKFHSRIUZYKHTSDNBWUGMWZNIIBHFZQXYUYRSHGIYFFU");

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
    msg.setTimeStamp(0.845369315554);
    msg.setSource(59688U);
    msg.setSourceEntity(80U);
    msg.setDestination(55377U);
    msg.setDestinationEntity(117U);
    msg.id.assign("ZVBYDCOIQEFRYNRJIXDKQCVIWMPCMTJHMEGCHLOSOSKDTDEGUPPPLDTJXTUJNHHNKXBMACCYZFICLXEIOTOEQZZTAOCBJQSHRGBXANBLROSNAXDVLZIZEFJFXGZIAPMAUWSDGDQMSKUKMWUYYOPXPQLUSKGEHVVNUNWEWBVG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CHDLFVSFTCGFRTBVBRWKOMBBNWPHSCRYHMAXCAFJGWEJMCDWQXIZMLUHDJEIYLITHFEOOIBPHFTZWFEVHGIUUSQWRVXNNXZFAWOLYKYPKDPNCLHBAJOZFSUJBQVITYLASYKGGHORQVTAIBQNSRRPCPQWYOYYZOZXNXZKZWQGMIUMMBTVCOXYGIUELHCMTCSKZQLRDPUAUQSGDLZEVAXTJJEJNGEUNXS");
    tmp_msg_0.feature_type = 40U;
    tmp_msg_0.rgb_red = 170U;
    tmp_msg_0.rgb_green = 0U;
    tmp_msg_0.rgb_blue = 138U;
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
    msg.setTimeStamp(0.412316808209);
    msg.setSource(26116U);
    msg.setSourceEntity(43U);
    msg.setDestination(37441U);
    msg.setDestinationEntity(83U);
    msg.id.assign("NXFKODOJTCTUJYKJMANFRTMRYGTXRIHBPXBRFQAHGDVIDQCJWLXIENGCZJFKTQSIAQPNTZLEFEJNORYURYKDPIPCWKCLUZHJJHVUKSBHYCWUHBEMOGZVHIZIEZSZAWQDDUVBLXDPEQOELVGFSOYLSDVZSSYCKMNTOBYVTQBNOKASGDTXAMULNPHMWQWPQKZKVYXQWIULSCYNOFMBCMFGMRHPZOLAUWTXMWPGERUNXAWRVJBJXAPHGIRBFDA");
    msg.feature_type = 114U;
    msg.rgb_red = 203U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 139U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.27032767857;
    tmp_msg_0.lon = 0.0666600200717;
    tmp_msg_0.alt = 0.68474491913;
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
    msg.setTimeStamp(0.370340440882);
    msg.setSource(46714U);
    msg.setSourceEntity(79U);
    msg.setDestination(19599U);
    msg.setDestinationEntity(19U);
    msg.id.assign("WUWYDKMZSXCWYKSHURXXPQUFFULEIDKHVVHETXPLXUYXHMFAGJHCYGQVEWEVRBFABVDSUWCCDHBKTIPRYNELRLIIKMJKIORZ");
    msg.feature_type = 176U;
    msg.rgb_red = 20U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 29U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.289442820209;
    tmp_msg_0.lon = 0.768435184845;
    tmp_msg_0.alt = 0.17574062031;
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
    msg.setTimeStamp(0.602274193193);
    msg.setSource(51382U);
    msg.setSourceEntity(157U);
    msg.setDestination(61270U);
    msg.setDestinationEntity(132U);
    msg.id.assign("ZNSYXJYPSXLGXUVUYBC");
    msg.feature_type = 62U;
    msg.rgb_red = 186U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 69U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.176957613954;
    tmp_msg_0.lon = 0.511676182494;
    tmp_msg_0.alt = 0.934134000518;
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
    msg.setTimeStamp(0.600537148804);
    msg.setSource(32049U);
    msg.setSourceEntity(123U);
    msg.setDestination(36718U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.00469214000481;
    msg.lon = 0.38342971868;
    msg.alt = 0.209815849594;

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
    msg.setTimeStamp(0.126318006489);
    msg.setSource(42506U);
    msg.setSourceEntity(62U);
    msg.setDestination(61336U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.726377573697;
    msg.lon = 0.457615229922;
    msg.alt = 0.400064399266;

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
    msg.setTimeStamp(0.66530931818);
    msg.setSource(58314U);
    msg.setSourceEntity(124U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.538515957537;
    msg.lon = 0.674925561651;
    msg.alt = 0.329129570027;

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
    msg.setTimeStamp(0.745251574632);
    msg.setSource(8859U);
    msg.setSourceEntity(140U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(85U);
    msg.type = 158U;
    msg.id.assign("OGRHQBMJKIBRDNXRKDSFHHTOPCGEFVUVGEEMTJYEFDIOBQNXSWAKNCITYSZHGZRCDQRMUCYRFWFAZVYWKBUUJPMCBNZIRPQZHRJFFHLDOBHUVLHXGKVGERNMIIZIWUALXDXYICTJTEZ");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 651657822U;
    tmp_msg_0.value = 32U;
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
    msg.setTimeStamp(0.107835296367);
    msg.setSource(17010U);
    msg.setSourceEntity(218U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(248U);
    msg.type = 206U;
    msg.id.assign("VOPKOBQKMBVZCRALMZYJFGTTWVKJXYECKPCORVYXZXWWODMYFKUWHDJIACTDHYBJVEABPLSQVFTTWEDPXPGKAGKHOIRHMJOCDNOZEAKMXQGTVOJVDPYGAYTFBADWUGSXGTRFSMHKFCPCUYUNDQHREZWNUIGQISXVOJHXAXZHNLYNLDUSMYGIWRSTRPEJHUPLISQEBLIQELFMGLBXNZ");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("QLOKHXWOSESGOOFIMZDEBSKDMUHUINYRNUYWGTKQCDLBQBUPHLIGIJMVXVAEPIWDFETZLTPNHARVDFYWDXGCNDGZLHPXBOORUDRSELSCSQBKKSGYZPKMHTQFJERGEWECGPXAYBKTSPFVOIFRLQUHLPWAPJNSACCEOMAUQHGXYMFFLCQUBVNKYXZSMJFCJHBVFMILVXANQEJ");
    tmp_msg_0.service_type = 27U;
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
    msg.setTimeStamp(0.0635723198843);
    msg.setSource(59083U);
    msg.setSourceEntity(61U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(207U);
    msg.type = 61U;
    msg.id.assign("YJTLNFQBGOOICHCDNQPDWBXVDLWQZHTOUXRFRPVCYVYKGQEKUPOLTSOQRCGXDZEOIENBYXRBGJTTUSMZLNXYWNGEMWMWGGKQSOSMIAJHJI");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 40819U;
    tmp_msg_0.plan_size = 2718719888U;
    tmp_msg_0.change_time = 0.0986007635102;
    tmp_msg_0.change_sid = 27801U;
    tmp_msg_0.change_sname.assign("VXLNKLOIJKBHZOVSEFSWTIWYDBQLGTKLDPRQCTGLIDVXBCCSFMJUPPPTVRBEXMWSFDOXDSMORTVTXXMATYKPHFCCLIAIAHXYPSKYAVABWJPZJENNRLRJRROWFLNZCFDNPUQJGSQDFUVUDOTAENIZMYHOMYEZWACJTBIPJXALQTUZZAUP");
    const char tmp_tmp_msg_0_0[] = {20, -95, -102, -50, -59, -31, 93, 87, 97, 86, 75, -63, -63, 62, 33, -32, 65, -99, -85, -45, 81, 74, 115, 29, -18, 109, 65, 125, 101, -86, 5, -36, -39, -54, -102, -8, 90, 27, -12, -67, -13, -32, -16, 31, -67, 92, -123, 2, -8, -40, -14, -123, -127, 57, 53, -81, 103, 89, 114, -26, 66, -72, 123, 60, 49, 53, 100, -47, 78, 88, -33, 18, -78, 1, -94, 25, -49, 56, 60};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("FYFHAFABNYEFLEIZDCPCQEUKFTTMTSOWWZUNTZMQKSAQAEGZEVFTRILHSHGMDNELVBPHMXBXSRXDNQAZJTKCCCXSPGBDGBISMBJFIAOOIJHRMNDWXWINUVWHGHSXEKBRKQHZ");
    tmp_tmp_msg_0_1.plan_size = 708U;
    tmp_tmp_msg_0_1.change_time = 0.749835614604;
    tmp_tmp_msg_0_1.change_sid = 65147U;
    tmp_tmp_msg_0_1.change_sname.assign("RZVBDVQLIQRCLXKWGKWUEZZNMPMI");
    const char tmp_tmp_tmp_msg_0_1_0[] = {46, -19, 40, 123, -96, -115, -60, -115, -97, -71, 12, -122, -122, 121, 110, 5};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.711651529308);
    msg.setSource(26617U);
    msg.setSourceEntity(198U);
    msg.setDestination(26726U);
    msg.setDestinationEntity(45U);
    msg.localname.assign("EPUIADCATFNRBBSUQJAJMNMIQLPCORGEVSIPQDJVGJGEDDULCWVMKGBFJRRJCHNVWOALJXEOEOPFHLFEZYWVFUTKEQNGDRXTSRNWKRLWFPHALPZXLZVWDQAQBHOTHHKYCFOGVTHULQIMXJIMPAXOPSCEWRXOBDDMNFQSBMABYVRSXTWFYDQKTZYCQKCLCWBIPKAZUUZDOFYXCIELMIBYINISTGGMYBYSUZSHKNTK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LGNYAOIPYNDBHWSPGONZSVCFFOINUQDFMGVMKTTZRCAVHXXRLUFWFIGZAOCELHPBYSTXNANQBUECOVVXBDCIGRTSDWUSKSJDRENWZQSGULWGLHLBKZXXXQIEQY");
    tmp_msg_0.sys_type = 131U;
    tmp_msg_0.owner = 17189U;
    tmp_msg_0.lat = 0.108053388854;
    tmp_msg_0.lon = 0.422913087063;
    tmp_msg_0.height = 0.737940595724;
    tmp_msg_0.services.assign("BISLLNOKSUDR");
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
    msg.setTimeStamp(0.108696988646);
    msg.setSource(35124U);
    msg.setSourceEntity(86U);
    msg.setDestination(20601U);
    msg.setDestinationEntity(171U);
    msg.localname.assign("UXIJIDMEEBUEXTSJAPYEOKFJAHIOWBQUQSGGDDQTRATLUEREJOWLMWXGHCOYZSYFPNKZSVSUNCGTEHBYVSFJJGRDPOCYCCKNHEKCZ");

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
    msg.setTimeStamp(0.0443481878843);
    msg.setSource(15395U);
    msg.setSourceEntity(186U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(67U);
    msg.localname.assign("NNXVGJOBTTKNPKTYRIURJXBFBRGESRGLZQMOTYPPDUYORWZPNNGFNUKAMCCIIMVKKWZHPNXWPKELZWAUIAGPSMMXYEDYGQBHKUYMHLXWJKGLCMYDUQTGFCPSLDQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YEHTMFBUYMMIHXWINHMXIHLFEMQRAFMQOLWPCNEJCWPBWORXBKRLVJFZKAVWTSSDNLRMFHZJQIHRMKPEWDTPRNZSDIBVYEBCUCZGVNPQGDXNCXHGIKTAVCTDVYTAKOWZWXCQEKWCERBGFZJZYJJPGEXUSBTLLYAJYXNSGGGTHEOUAQSPUANGIOYNZZPI");
    tmp_msg_0.sys_type = 73U;
    tmp_msg_0.owner = 23354U;
    tmp_msg_0.lat = 0.44986856051;
    tmp_msg_0.lon = 0.289370144667;
    tmp_msg_0.height = 0.638422631808;
    tmp_msg_0.services.assign("YPXDSGMAYCAAGRSWVVXAMIRQLEGKECXOQNZNAEKKKEGZUITWOQRLWZETKBQILVGVBZSDZLIAOGBEWBOYABUNIVMOYERHFUOQLZOZ");
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
    msg.setTimeStamp(0.145646527925);
    msg.setSource(39923U);
    msg.setSourceEntity(245U);
    msg.setDestination(63996U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("KNDOGUEBNCKRJXILPFBHAFSEPBHEGFXDXYATQOJPKCCUMYSAFARCTRSYNDJENOPIUVARQDKYLBEQTP");
    msg.predicate.assign("NAVDNMAKQFZVIPEYGQFMHCHBXJAUYTSZMMDDPBJKOBXJMPEIOVCSWOIGNTORROTDHXYCVZQJIWRAKGGZVLSEODZQZGMWBLVQFGPSBWSXSOQKPICIPDTIDEXSJQXLJZYRERFXURYUQYACYXCMTRNHRBFDLVLBKABRYOIPRNQDZWKHE");
    msg.attributes.assign("DMMIJQKPFXNKACUZEVLHDDBAXXXWKENMEUKRIHUJZFWJQRRGUGANENFVPMRBLHTWIPRYJFAPBYBPDORTHTAJCJMYTHLPLTVDAPIUEQDXFSOOAZIAVCSOGZQHXKDCZLDWLIFWUONGYMXTHCWSKBUNQOQXIYWXACWMNCVFVEQWKZIVRBGBLGRLSCCDOUTBEZIQCSYSFKROJEUWSMNPUTZGHSKGQMNLSOHVPT");

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
    msg.setTimeStamp(0.658336403021);
    msg.setSource(46291U);
    msg.setSourceEntity(96U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("IHDDFNNCDTRCCAIKXUJCXILTYAKGAJJBOOSSSHYYWKRWLQCNFGFXBQDNDWJFMUPVBVHREUDYRP");
    msg.predicate.assign("CWFLBGNPFJJXKPMVEEMVAOKANPNCYROBICRGPNVASZHTVQGEDPXWSPJYVOUYUFWNHTTYXUOCHXLFIQWTQFWB");
    msg.attributes.assign("YJKQMAYVWXXFKHKGESIXRZCJURONKILXHAOJYZCCDYZXTVEWWNONXUGSSWIKVDMDOJZRQREAPFNFEJRKNGLPEPJSQZDVMRKOQPPRQLFHRCPBTSILTANGBSDLFJGO");

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
    msg.setTimeStamp(0.224554691464);
    msg.setSource(26588U);
    msg.setSourceEntity(197U);
    msg.setDestination(63064U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("BADNFFOHRISFLWOAAQKJBJWCUTUMWCYKDFGUMELETODHKMSWLOEVXBIUQFDPRIEUTQSVXADUPCKNXVBAKLPVDG");
    msg.predicate.assign("IRWHDZECOPMOWKSZLIONTFWIMWDEVNKEZTBSHYUCAJEIXXZEMBWWUCSQYQLSBSUVRTLEFOXPNQEJPQGNMKGFDHYCPBRMTHVXFNHRQUYAGQZALXPARFTTYEHCAAZYWNVVRCSBBNMOJQFSUGLULPJRGVXQOCXDPUKVTMRUGPLLSJYMJFPKIRDNOZIYJGGRAYDSBVFYOSEIEHBIJUKFCXOWBKCUKQZDOTZDGZHPQ");
    msg.attributes.assign("EGIRSVNFMGTWOTRSKTPKVNEKLYDQNOLHACNCEGQBQRYMUDCRSGPQDDWTFZOXDBAIFVNURHYHENECJAIGLYCZIUWABVXDBZXMTWIXFGHOUFZSPATTLSSUBXCEBRARCWDPBMQYTDPHYZBKFFYOPZMOLXJNWCIMMJAEUWIZJQQUEJVFMNONGHQKZSEJKCRDQJGFJUKIWLTEPXPVAPASJBGXHWCQ");

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
    msg.setTimeStamp(0.621988386302);
    msg.setSource(48756U);
    msg.setSourceEntity(32U);
    msg.setDestination(32850U);
    msg.setDestinationEntity(134U);
    msg.command = 89U;
    msg.goal_id.assign("BEUIOWVNOMDLKAOSSSBRFDUHVVJYUZCTBZRJAKQHESMZMTQKPRLWUWCPTBZINJPRSWCHXDGRJYPQGCVUPUISQEXQURJOSXFMEHNBAANYDXGYKKEL");
    msg.goal_xml.assign("SHKAPBWCMMDRRFGQAVQGKGKJNICZQTLYIXGXXPQCTBKVXUMTNPZXFOXTAMQJPCEYMJXSCSEVDKRAZCJONNHRHHICNGGLOZYUNLTPTWRSEYDOFQSPHZPJWADLTFOVOFIYWRDMWAZJJYJNBDOUSBHFKV");

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
    msg.setTimeStamp(0.720739427022);
    msg.setSource(11040U);
    msg.setSourceEntity(22U);
    msg.setDestination(57571U);
    msg.setDestinationEntity(231U);
    msg.command = 214U;
    msg.goal_id.assign("UYPUPGVSWJNCUFDNIOREJXLMZCDKMRCPSHKFAECLJKQUVWRBQPUUHAJIFOIWGQEVPCDGAQDMMEOLLFFGZDLNKPPHTQQOHROPHNSOFBVOVYIBHHHTURBETKPYXVBNTRKXVSJTKQDJLAGZVWTVBVWXBAOSIWOTMGEQXHXCNJDAIQWEZRXUYRLIFCFGJMYGZTCBZKCDASUWYMADMEFZRYSSCZMNBFIDWBASKYXEGNHATPQZUJINWLXEIOYKSYGN");
    msg.goal_xml.assign("EDOBPUSMSWLTEJCMGBFADFLPIHUYJFGCUWNXTVOGZXHZNABPZZQEKMDHMNHTCQDKXVAXIELNVRGBTIHBEPYCFHRJJXEYZSLUHLQUZXOBYTYASGITZRLXYOOQFDUTUBCJQQMKIDWNWRVVYKNAQAGQAPWRJOXDCKRLDJWKLWFWIUJFZECIIESDSPMPGET");

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
    msg.setTimeStamp(0.925493527778);
    msg.setSource(28458U);
    msg.setSourceEntity(130U);
    msg.setDestination(437U);
    msg.setDestinationEntity(50U);
    msg.command = 192U;
    msg.goal_id.assign("UMVZIRPBHQEWYZKXDMLEIPDCQUVMQTCHEYKLNLPJWUYNIEXRCAVOULCOFBPTIOJIOGNZDOSEVECAMSFOBJJBRDXOHADFKJDRCYQOPNDQRVGGTXMRMYRJGSOPGYUTQCLWXZRKBOYWPZIUMFSXPUSZIVQBWICXLYYABNSNYMXTLJGLGRVLCJFAIZUKFMSA");
    msg.goal_xml.assign("CNEHMIECYQMFBFIHNHLBLOVMNPSCBJVSGXWHVXXLNNOKTEUOEGTMYYIPLXZIIJRVPEYABJJBYBS");

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
    msg.setTimeStamp(0.0673713811135);
    msg.setSource(16675U);
    msg.setSourceEntity(27U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(222U);
    msg.op = 117U;
    msg.goal_id.assign("MSQXQXNIQLRBYMWWUNUREAKFDBHSHLWFGNFEJVDFGZCLDKJZIDVRWAUMYSVHPIWQTRZPZNPBXWHAZXBJJLTSR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CQPSUXDHFTOEQYEMNDQZTBPEKYOGIGLURROMYAXTYVJFLCBFJLSVZKJLIJPVHRCUKDTGBSLXHHTMPQHVXXUNAWXPXBEWCZBLYZMWWEBJLYFYQDEKRNEVFSKGIFTBGIALVNJHGATSMPSOFUANONAQISFRWWEHSDNUOXCWELSQRKDZA");
    tmp_msg_0.predicate.assign("LRHYHOBQFIHICACOAXJDVPMJNOPFDUWIULA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KKWKCAIZAYRFINBGHFDOVRAVXMTJGKHFMPRPIJJFGBMABSZAFOUCHEUZOZQWGLODYMCGSLUQUPNNXDLQVLMYPYDRKNHGTKBZWIRQBTCTEIEOVQZSCPNEOVGSPWEUUMHIEGPHRAOBKVFHLHVRDSJYVGCGPYCNLJFIJTIUDQOOSTNXPFAAJHIODWESSZZXRLXXNEKLYT");
    tmp_tmp_msg_0_0.attr_type = 89U;
    tmp_tmp_msg_0_0.min.assign("RUMFXHBNAWMLMHHCZSOXNVODADCPKZOJQPHQUAJEHTBQORXKNEVSKLNVWKOUEJABPYSBWPDRHXYRGTHZQWWNTBSTO");
    tmp_tmp_msg_0_0.max.assign("ZFJEEQHDMRIFIRNNLDJKTTEMMHDHMFIUCUNUSQGAJFGVUTMFQTYRJZCVNAOHYRYGMEMWVCGYZLJECPDNDRUWASOPIOVAVKCAPQKZAMHXJVSCWKHVAIKABVXXQRWFORWCHCBQSYDSPSEOUSWXFZBYGJLZFWTLNUJFWBABTHGEBYOZ");
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
    msg.setTimeStamp(0.168552763498);
    msg.setSource(63552U);
    msg.setSourceEntity(200U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(235U);
    msg.op = 80U;
    msg.goal_id.assign("VJKIQZGSOHHGIXJEWSCELDHTUWPBJSPAEKKSXDDUKUFPIFCBNHRCCWVAPDCNMFNNUNGDDUODOAAWBRQOJLGSRUHPZTYXWXJZAEQZWAVSIIETZHVILIYTPBPMDQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XKJCOEKOVX");
    tmp_msg_0.predicate.assign("UMESOBCPOXKHWUXBWOUCNVYOLAICNDFDPBAQKIETLMKCJWGLRUZCQOLJORWZQMZXJHTWIJAHYGZBHIWHFNYBITDWXCLPOWOKIXS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GFMWJCWVDEEQUBNDPQJNROFORKPNBVUGCGVQWCYPURLKIRVGLTVZLHVEGTSBYVDUADBQITLYMTFXNUSPODZXIMJKSWTCYRHDZRWGROKNKPPMIJVTRELWWKFWZZML");
    tmp_tmp_msg_0_0.attr_type = 249U;
    tmp_tmp_msg_0_0.min.assign("CJFDNLVVCJOLHYQWLPADHXUOHJFBVMLWNTEXZFNQXRYBBZAWCMVZCPVREXBTLBG");
    tmp_tmp_msg_0_0.max.assign("KTKTDKUUNWTGQYTGJDQHCODOIBDIPMNHGFIMMQYWUJWBUSGVAZVOIMKYPMGHLEYRIRZUFNYHOPECSSQZVZFLBAGQHDRVCXBNHRYSPUQFXYXSOABZRGLYPEWSCPJFPACLZSNXUGLBELCRTMJIJWEBRFXBLADETET");
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
    msg.setTimeStamp(0.0919922465896);
    msg.setSource(2238U);
    msg.setSourceEntity(191U);
    msg.setDestination(21285U);
    msg.setDestinationEntity(69U);
    msg.op = 249U;
    msg.goal_id.assign("KQDWMVXPSOQCIPEGQTNLVDNBFWXSWNGIRJDBQFTBYYFUMMVLVVZLXPUCLGZMPEXUESKZLNSVMGUWVRRCJSEMBMTWVHZVADCOUOEXUHOVRMGYHRZBCYAZNTJKKCNIEKQEQODHCHSTXLOJUJJDPHTRWKBPSWYYIKADRGZBUAFEMAPWEZTCTYTFOHYTQDXQXYHRSFPWJUYBDANAHSOKRAXIZGQLGSOFUNBDILNBEGGIIJMCXFZLPPWKRAILFAKFJH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZAYRBVDMILURXPTBQAJUUMGBUXDHXCJTYCMFPELGHVIMPDWQOTGQROGTYOGURKRBQLSDAYYDUJWMCOCECSOPTZSCWJNBFDGDKVZNREPWQZFSGFS");
    tmp_msg_0.predicate.assign("DJNNZXFVTQCDWEKLNSTPYZINKMVCZGQENMAHNRRSZFRSUSBATCGMJHMLUUBTCLURBVTDMLLQJZHKSMVBAPLOTXEBVDAWQOUXBYDIVXQIBGRLKFWIFHYARSWAJKUHCUUYSOSAROZEVVQWJXGICIEOHWPYLFSEYOXPHDTPXJOUGHTEIFCSHJLEJBOCWQTOKWKPCY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PCGKXNBUJZUTBMMJXNZCWVWGCQHYKPBQIVZQTDGXASTDIHLWQTGUEALSZNKWYIDNEOATDQYRHZWFVJTIVQXODCKVSRWGOPVLMRTAGESBYSUPNNBSSNLREFLTLIDNSFRXDKHRPGIEDYUIRBJRQ");
    tmp_tmp_msg_0_0.attr_type = 111U;
    tmp_tmp_msg_0_0.min.assign("NLMAGUUGDKKMZLXIPDTWBXHFMLXHFNGVRKIWEYPWZWQBGPFEFGDZKEDBQJZANECRQSCJTJUUEDXGNTSTZUINPWVWOSBQXYSLGEOEKRUK");
    tmp_tmp_msg_0_0.max.assign("MBQEVISXDG");
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
    msg.setTimeStamp(0.151449991404);
    msg.setSource(22786U);
    msg.setSourceEntity(16U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(179U);
    msg.name.assign("DJZVLQIWESAROEBHJTIFBF");
    msg.attr_type = 47U;
    msg.min.assign("OPVASNEYZLFUOFYMZJIZAWRNCYAAENIJJXQQWPSBYCDQCUMVNWRYTUGFZRFTREMSLHTHTBUQJGROCKBVOIXDURSMUAANDZBDWVTVLPKHHIVNRXGOOEXYPDZUKGGBLCRGQO");
    msg.max.assign("XACLILJQXMLXUPHQVBGUBZFRANDYCVGSLDXIDFEPORSYWYJKKSVXUJYYHWKLMTZTOFQDJHZTFZURJVHPEOXPBKFVIEXOIUWAORJPCYAFVGOBXUEIQEYAENDGKOWTXDDLBJJJWCADSESUQMCMQATAHGIKBFGSRSIDORPMVZHMQFNLWNVLBIWUPHGSNLACCMGZNXWTDAZNOYITEENPIRLZVVCZBBSUPOQGTMWYNJPSKUNCQTFRFHGMH");

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
    msg.setTimeStamp(0.722232429909);
    msg.setSource(5445U);
    msg.setSourceEntity(181U);
    msg.setDestination(33139U);
    msg.setDestinationEntity(23U);
    msg.name.assign("KHBLGTOVEZTGGVFIZXEXXNQGKYOUXJUMIQUJYDVUETRYZVHDAAJXCIZNDBNNSNCLTWBPLQTDBMQOEKKURL");
    msg.attr_type = 196U;
    msg.min.assign("SCOTZAMQMACFDQSKLFUTWJBSOMBZTVCAZLINGJXFRSUVSOKDHLSYJPIRY");
    msg.max.assign("HSPGSHWIHOOCEEPUBLSFGWUNRTQNIKTEIDMRYQOOQQCYVEKLYYXVIKHQYJFUAIYONLHSDOHXLFAUBZRUMCHVBGCZLNDMXMLUUDFVKGQJEFLRXWJJCFZZIMIPYBGAOIYNAKLNNEAGFXKCMNGZATWBUSWRTBQPCTJXP");

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
    msg.setTimeStamp(0.681041396122);
    msg.setSource(42079U);
    msg.setSourceEntity(222U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(38U);
    msg.name.assign("PKFHCNBKKCDGRIHJYQSHGVXASGZGJABNTJQZXLOJLLSFBFVZWMYLNRLRTGRYAJTZXIYGUVBCPYCMSVAJSOITV");
    msg.attr_type = 12U;
    msg.min.assign("YTHAYSUCVYSPAKIPGUWXWETDOXZNCUVXNLYWNAMOMBNDZHQMVDMQJUTCAKVCODGGRRFCOFKMSQQQJJIJOBHMYLRNMWKKSQTWLQVYPAPTIQYPGEEROUARHJVIIZOHHKYXRPELBTMTZUFUMFXDDMSABIVBKNSISARLEKUFFJBOVEJH");
    msg.max.assign("SSIZVJNYHCMFSVHUONWVCKCQFIQNMETBZFRWFUNUHLLOMDOQKHFRVRJPYLXGYBFGDYCWZZFJSMXMVWBQCZOLCBQUGPBARTDINKOXMGIACERILLEYXGJDWMBMGZXFEB");

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
    msg.setTimeStamp(0.0932990605856);
    msg.setSource(11954U);
    msg.setSourceEntity(4U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("QKHKQKIXFNVDYSHQIGWJYYBVQOPQTAUCIUFMHNNNQEHJJDYGEXTCNJCYTLTBXEOSOMTGZSEZGDQRDJHQNDVVXSLGXMRISWVPCCIGJBYRPXOHAWFRPVZDARIMMGQARUWPMTIEWREBBLLUIWPPFGMOPULITOLJB");
    msg.predicate.assign("XUSMOQKPYZVIQZVXLUGMFJKCHVUFJTNXQJVVEQKEYCAFTZBNHFSRHIFTSPLRSMLQONFXBGJVDCMZXAESAMNWMYWWQKTSIUOQEPHCZGKPJBMKRABPWIRBAOKAYAHIZNGFTUUUOXLQLNNBNZTDCCSOFJRXRSMFILIYWRPSFRKDDQXBDWWSLCCLJEBPTYEAPYOTUOVPMAEBVGYDQZZXTGHHPBMCARGVELHDEGUUYICHNJYGOJWGDW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OAJKGDCFFIXCUVYAHYHNUBMWGMTUEXLAXXBNLMPGLERZEVLOQJSPBLTGNYSKRCAQLFFUDWMDTTA");
    tmp_msg_0.attr_type = 169U;
    tmp_msg_0.min.assign("RUJDGNEATMDBESEQNTMKHCBXPEPNKXFRXAQSHAUYUXUOGHEQORMKDIWGADKXFCHYZHNYNBTPJVKDVMNCQFFWCGKWIMSZPQNRLDJZISJRPCERXSWZBJQCQLLMCYZFMUSOSVPEIIVCKKDXGMDHJLAOZGIPTFFTAHCQTUOPISLWAYBOBVTXJWMYXBZFOZLCYTWBLTYORWAEQBHLGYAURFVFKDGRKEIGNYDSUOSQAURB");
    tmp_msg_0.max.assign("DDDFIWXQQEZVNECEYTMMLCGESRZXJQFAWCRLOLMNYFNARQBEMUSCSSIOPFGUUXAJZIPVJSZEISLVEHRRXTOMBNQHWCJVENWTBKIGECUGYTVINWCJQHXJYXKHFUDSSSIFCWQLPAUHAZWAOGBRXLDGPTHJXJMDOHMZNUKOOZKUHTQBXO");
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
    msg.setTimeStamp(0.180071112518);
    msg.setSource(9360U);
    msg.setSourceEntity(243U);
    msg.setDestination(56825U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("KNHMNTGPTXOZOXUXPFNVXUYVNAJZWEIWWUMYCKBUFZYLUTCPQXURQISXUAGKJGYSLVIBKLLXDXGVMOJJQJIDKVRHBBIBKBCFNCQMWETPIKAEHZRNZGRSFMDYRJEACFBNXDMLGAOLWQNSVINAQEFYHTORODNUPQVVSVEFCTPASPGGYZUSLKWBUMMWYWARHPZLRDFCQOGODMJIHSETOXEYZPCMBPTSADBGWQEIFSWIHRHQOLJVCADJRZZLDFKCT");
    msg.predicate.assign("EUCHHEVDVFUOOLLXOVEYIJVRPSZLVMZDHDOLDIVSXSMAZUJRYCXGCXQGUTTQWQDXWIKHVSAPZQATBJCYYNUBNNKGPMZFQRJDYEMZYFVUPACZHFSALGFGPPTNMKTCWWJFLSPBARYEXMTIGMBSBJICWREMLAOKWEKRJHIXV");

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
    msg.setTimeStamp(0.422025026207);
    msg.setSource(56568U);
    msg.setSourceEntity(41U);
    msg.setDestination(51811U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("ULXNWTLMEJZZHDVXYDKSACEQFDDQQWNBJCTRFAIFJGUOMANWSOBJGNFSFQGFUERRWHKKIBOSGAIPZVCIZPQKBCRVFPJSHMDLIFLXDBDKVYMTPWDLUHOPCZVSNDBOPIAXKOXGHECHWMTDHJCTEVNLKUVYXYMCUNGYXWHJIBJIULJZPLKVNQSIHLKFRSRVUOGRBTSJEZZZYGOWVBCTOMSRXQXEYQEKANQYMNIAZBCR");
    msg.predicate.assign("RMXFOLXTGCAREQSCIJSYCFWAFGLMNLMYYICVOPTEGHYWEKU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HJVPHPXDOPQRAXAYGRYIUXZIRKROWSKZRZBNCTJMBTHNSHESPTAFMAJDJPHJWZVAIPRBNEXUZUTBAJBUMPFCQLSGREIVFGGMUSTHBKEJEHWOALWWFMHKEBYXRWVXCHEBCCLIOOQSKQGWUIFWZDKYUFKRWVAPNVPSZHEAMFXYOXNZADFSODIYUXVNDUIMTYGQLFPYSZRLNQSMQBEJTCLWXOQVLLTONOBQJQVKKNJDGCFTLVN");
    tmp_msg_0.attr_type = 229U;
    tmp_msg_0.min.assign("QVKYWRDUZRJOCYRGNZWVPPUUJFWGMTPGICCTPLPEHFXNCTOUMNQHXIBFFDXCZFSAJEALZFTPLEDKYCQCPQHLYXWWVEVIXRZSSUMEVUVLVHJIJFONRGWCBNOKEOUDNUVOZIBSUIQLZTTYWPLIIZWOSMGYSYGHAETWNLAKMABRRZZPSECMOALXQBOQDKVDEMBRSHMQDYGABNMBIJGYNRKXDNDGBHHJWJJKKFGFJSXMIUK");
    tmp_msg_0.max.assign("DCWDLDQZBOUZVGKUZRLMCYMFNKVUNTRDQOKFXYEXGLTEYMSCNWBTKAAZJZHKNNUHHFCKRAWIG");
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
    msg.setTimeStamp(0.613467160622);
    msg.setSource(43914U);
    msg.setSourceEntity(182U);
    msg.setDestination(52797U);
    msg.setDestinationEntity(201U);
    msg.reactor.assign("YQYHLWEUILMITIKJBHOKNFKVXCRJOWTYOQYLYNMAYWAPGGPAIXVQNCRTGFGZHBFUBWFRVTSLPNDAPCSFJSEIGBSKRQMTBHIZTHDBUBUMZSGVQDMLJVDOUBPILKSXKOSDQMXJNOFRCEWAKP");

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
    msg.setTimeStamp(0.805974385264);
    msg.setSource(34314U);
    msg.setSourceEntity(63U);
    msg.setDestination(50671U);
    msg.setDestinationEntity(41U);
    msg.reactor.assign("DJCLQTDUBOVHWOHKLVSEDTRCZNZTOBGERBYFYSIRQQXAANVXCTCILYDKFFGEUOLSKVFIBAIVBXQOPDXXZNIFFRHJWUOJMNWSNMVYTKRNCKBOHUEBMXSJLRVFLPAEGVNFPIPYNEUTRYKUGHZUGJEHCYTHRNXZHTMEGIWBASYPGZMSQKFCLGXGGQZYFDXPDEXPMRSMWTCASIDMWLPQWJCAOUWVDQBQDKJPYAQKJ");

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
    msg.setTimeStamp(0.249973302944);
    msg.setSource(43157U);
    msg.setSourceEntity(136U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(193U);
    msg.reactor.assign("EHMOWZHBDLYNMIYKMBJNIXXDEOCOVKTXTLZMVBVTOUYETUTRVPGLEEERSGKIMCQDEMRKCCWVAJKUWTAJBQJAWSHXDPNAJFMBYJXOBHAISQNKYPVCDLBXXHLPAFHNOUWSZFVFRKIJ");

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
    msg.setTimeStamp(0.565594509992);
    msg.setSource(39197U);
    msg.setSourceEntity(55U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(106U);
    msg.topic.assign("NPNUPVEHHMBQZACOIFYEWDMTLIJIAKHRABRXRFUWPJSFXENUQGYLTDUDTGIYXWTBOJRMHTWLZNHFINGMEROFMMYINYALFDJNXAYWETCEVGWLHCYWAOGZXZKBKVZELMVPJJBGMKUDUDKJJNSWZYAVDAOMSRFQLCHQRIJMAXBZYKTCEDDOZISRLDPKUQLKWBSHCTGUQQVCXOXCSKPTSGSUTXCLBRHSQKVQXFOZGSHQFBWU");
    msg.data.assign("TWMDKGQLXTCVIQTOMGXFFVXMMJSWOVBUWZHWRWYDAPNKPBIVFSHMYZMSKTCYSLWKQGPPZAGCHUTBYHCTGBCYUUANJXIPMFAJPOQYRIICORRNOLLRZJZOOQTCCKIUNFFBDRABQVQVAGXDNDVIYCBKHZYJXRSDENLQJDINKJWGJMIPMMVBRIEZWLEYHSDKJBWBZEAXQKWETFEUFTELHOYUKGGUZHOSVAHZUVFEFEADLREGLHNOCSAS");

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
    msg.setTimeStamp(0.125458593688);
    msg.setSource(14768U);
    msg.setSourceEntity(8U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(247U);
    msg.topic.assign("RYJFEXNYAHKWLZOAWLVRZECLXXMSQJSHCYBBWWKLFXFHXT");
    msg.data.assign("RNSQYNJVLDWTNPMQFWZMZYAVFRUHGCGPIFWNNFSIZDKLDQKIUZPXJHRBVWVATEUENYXVGYBIEDYSPSHLBMPBCBTZRMXAOOXFPUHSBWXJOOANYTDREGGVQRRCBLFECKEWINXKADKWMPEFDLOZHJFMTXQNFT");

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
    msg.setTimeStamp(0.222493254418);
    msg.setSource(6726U);
    msg.setSourceEntity(152U);
    msg.setDestination(61811U);
    msg.setDestinationEntity(58U);
    msg.topic.assign("VMUFWFLBNUJANQULKEFXSOOLQGADNSYOCOOIQXLVBUZERXDMOVGYAYFLZH");
    msg.data.assign("RNWOOFBESIUXBCPYTTFI");

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
    msg.setTimeStamp(0.523138004463);
    msg.setSource(55304U);
    msg.setSourceEntity(177U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(218U);
    msg.frameid = 205U;
    const char tmp_msg_0[] = {111, 61, -116, -116, 112, -42, 120, -86, 95, -95, 84, -96, -35, -74, 32, 113, -34, 70, -64, 73, 21, 26, -102, 49, 95, -12, -117, 51, -42, 100, -122, 101, -105, -67, 40, 35, -73, 85, -106, 9, 49, 28, -78, -81, 17, -16, 63, -24, -65, 104, 28, 71, -101, 80, -14, -24, -11, -29, 10, 93, -56, 79, 56, -53, 28, 28, 27, 48, 62, -87, -61, -112, 91, -112, 39, 11, 73, 103, 94, -62, -14, 17, -127, -119, 90, 12, -53, 62, -51, -10, 91, -75, -15, 121, -34, -71, 17, -68, 23, -13, 40, -19, 125, 94, 98, 35, -29, -18, 107, -71, -116, 72, -54, -47, 67, 107, 52, -23};
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
    msg.setTimeStamp(0.742770021178);
    msg.setSource(17223U);
    msg.setSourceEntity(198U);
    msg.setDestination(46279U);
    msg.setDestinationEntity(240U);
    msg.frameid = 227U;
    const char tmp_msg_0[] = {33, -70, 67, -118, -30, -17, -36, -55, -98, -69, -115, -13, -92, 91, -72, 1, 103, 56, 121, -99, -119, 7, 116, -119, -104, -35, -99, -42, -22, -24, -123, 73, 99, 77, -49, 46, 112, -75, 26, 84, -32, -76, 55, -98, -81, -91, 13, 70, -50, -65, -111, 43, -30, -61};
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
    msg.setTimeStamp(0.751712711428);
    msg.setSource(51189U);
    msg.setSourceEntity(83U);
    msg.setDestination(53519U);
    msg.setDestinationEntity(86U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {-18, 30, -107, 126, -92, 70, 36, -128, 88, 32, 53, 41, -10, 12, -44, -84, -103, 54, -64, 38, -19, 33, -3, -34, 90, 80, 73, -107, 121, -23, -44, 126, 65, -32, -89, -116, 94, -99, -58, 78, 44, 12, 93, 86, -8, -37, 72, -120, 19, -80, 79, -48, -62, 85, -87, 13, 93, 117, -11, -75};
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
    msg.setTimeStamp(0.142646547876);
    msg.setSource(9287U);
    msg.setSourceEntity(42U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(88U);
    msg.fps = 7U;
    msg.quality = 180U;
    msg.reps = 235U;
    msg.tsize = 98U;

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
    msg.setTimeStamp(0.855455513889);
    msg.setSource(34005U);
    msg.setSourceEntity(22U);
    msg.setDestination(20228U);
    msg.setDestinationEntity(139U);
    msg.fps = 154U;
    msg.quality = 8U;
    msg.reps = 110U;
    msg.tsize = 88U;

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
    msg.setTimeStamp(0.893781972175);
    msg.setSource(11838U);
    msg.setSourceEntity(192U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(18U);
    msg.fps = 210U;
    msg.quality = 184U;
    msg.reps = 55U;
    msg.tsize = 79U;

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
    msg.setTimeStamp(0.365167361021);
    msg.setSource(25911U);
    msg.setSourceEntity(112U);
    msg.setDestination(16589U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.94496436935;
    msg.lon = 0.352126404958;
    msg.depth = 200U;
    msg.speed = 0.445070672171;
    msg.psi = 0.522682896757;

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
    msg.setTimeStamp(0.907922712647);
    msg.setSource(39028U);
    msg.setSourceEntity(220U);
    msg.setDestination(63458U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.121819345694;
    msg.lon = 0.644969630806;
    msg.depth = 134U;
    msg.speed = 0.338510380613;
    msg.psi = 0.624859902329;

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
    msg.setTimeStamp(0.431049061666);
    msg.setSource(32787U);
    msg.setSourceEntity(143U);
    msg.setDestination(33020U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.898837807091;
    msg.lon = 0.404705013801;
    msg.depth = 33U;
    msg.speed = 0.408043007738;
    msg.psi = 0.275719767989;

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
    msg.setTimeStamp(0.460970664238);
    msg.setSource(34829U);
    msg.setSourceEntity(135U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(5U);
    msg.label.assign("PBRCESHNEWNTUNOCDKCZJYWQJLFRKRQKAXZWYRIW");
    msg.lat = 0.201679559303;
    msg.lon = 0.021217981444;
    msg.z = 0.409143706352;
    msg.z_units = 185U;
    msg.cog = 0.898263274935;
    msg.sog = 0.865513507701;

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
    msg.setTimeStamp(0.436774848777);
    msg.setSource(29930U);
    msg.setSourceEntity(234U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(47U);
    msg.label.assign("KONDGGCLDIRFQHTFHPWWSMGBBEABVDPXLSETDKCAUIHVKLZQGKRNNZLICWMDTNFFUEXUEZYRZCVWRTIJGXLLMMYOXBYDSUIPTHZFUCZSGOCCXBZJHWNAEYHUQTYTYQESAJVSMYLZPQPVRUNWEHLROCEJTLCIODVESXZYPRGBWBOMHCRWVFAKFKMQASAQOAP");
    msg.lat = 0.908402352938;
    msg.lon = 0.0307569189593;
    msg.z = 0.68281737474;
    msg.z_units = 27U;
    msg.cog = 0.477625542291;
    msg.sog = 0.245713792427;

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
    msg.setTimeStamp(0.902612477234);
    msg.setSource(58556U);
    msg.setSourceEntity(209U);
    msg.setDestination(52178U);
    msg.setDestinationEntity(3U);
    msg.label.assign("PVWQPWYVILODUGVQWBPMSBECQPTZTABXMKTMKXYTPPGMMJLRMCGFHWHLFZDCFREFWDNMNTQFYPNFFRAAJHKXRFTQUBXR");
    msg.lat = 0.574298757766;
    msg.lon = 0.885733286639;
    msg.z = 0.546472678163;
    msg.z_units = 56U;
    msg.cog = 0.754882915173;
    msg.sog = 0.359915907351;

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
    msg.setTimeStamp(0.290906842945);
    msg.setSource(776U);
    msg.setSourceEntity(161U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(108U);
    msg.name.assign("LBEWHPLUAMYMBITFFTDJZDWATXSAGKUCZD");
    msg.value.assign("AMFNCHMTPISKYFVKBJJGTSQBVWXMYGQJRYTOKIAPEBUOBLKZJPBVRKDZFEIKOARSLVDUAMSQGHVSR");

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
    msg.setTimeStamp(0.367979340606);
    msg.setSource(40323U);
    msg.setSourceEntity(183U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(46U);
    msg.name.assign("UEFVOJTKEQMFSFJHPGSGVYWBGGNUWAHCUKYPPOCXUKVWZWCDEVGPBINQWTLAMCQVTQLOZQYMSYOQHKCUSHSBXL");
    msg.value.assign("HKZIRJCXWDOHPJVAKCEHRTDGKRYLRRIHQUNMHNFCWJSFWTUCEFFKUWZEMBJQVOJCQTLLGRHAFLPAGBDJFZSMSIRZTSDQCDJBJDTKNMPOVUGRNSCAOPRMFSGOWMGANIXLAUCGOLKXJDPBMVVWQAYXMMBLYIZETVLNOHWSLFUPTZEBZCQQXVPPHTYASXVKXEOZEF");

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
    msg.setTimeStamp(0.88841408399);
    msg.setSource(39525U);
    msg.setSourceEntity(72U);
    msg.setDestination(3248U);
    msg.setDestinationEntity(74U);
    msg.name.assign("CKPGQEDHIWMFGAFHPRLTQVUBOZFVDWNGECKGPUKANDXBWVRTIXLMQMQRY");
    msg.value.assign("ENFQXLUSBBDWUSIYIGKRW");

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
    msg.setTimeStamp(0.478680211403);
    msg.setSource(13092U);
    msg.setSourceEntity(179U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(83U);
    msg.name.assign("QHFZAFSEGBUMLASQUIAZZLMGJYORUHGFEKPCTWZCVBKAQIOIZVFYRMPVKYZCVNEJWNRSOONNBOKQBHCKOAEOCTLDELAQJJSRCHIBYMFLQDZSNCMZTLQKKHFZGOWXYUTJMP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EOGARQUEVUSYTDIAPYCCNEDMFABELLPBUXMLZIRMZCXLSRXJAYXODREOGTAHAKSDMETJVNYNFHWPDXHHGTMVI");
    tmp_msg_0.value.assign("QRGIWHZMIQMSHGGLWSUQFZRZIFEDTQJNPUHLJBVQPJLFXBUAVYVQDVXPGECRJUAHRQKDSYNPFPBGLTQZTYWHKMJDPU");
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
    msg.setTimeStamp(0.773551867099);
    msg.setSource(49785U);
    msg.setSourceEntity(41U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MBIYTYCCEXXUOXUVIHAVHQOTUDIMEZJPHQSIEYGPXPQZQMITYCBJUGZLOPAPD");

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
    msg.setTimeStamp(0.355108286075);
    msg.setSource(63803U);
    msg.setSourceEntity(199U);
    msg.setDestination(53624U);
    msg.setDestinationEntity(190U);
    msg.name.assign("SRFRDMSWKHZFZIPKVTDCWOG");

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
    msg.setTimeStamp(0.381841140386);
    msg.setSource(14242U);
    msg.setSourceEntity(199U);
    msg.setDestination(44082U);
    msg.setDestinationEntity(46U);
    msg.name.assign("AMXIPUEVCLAUXBIFNESKHQQBEMTBJGCPXHVTFCGRMRIFMVYAHWSDPDVRZITSEGJZWWSNLABQRUMKJPGBNBYIUDSIRRKOWNH");
    msg.visibility.assign("XXLTBUEFQNHQDKSKPYXJONUAVFLRYOOTRPXPS");
    msg.scope.assign("YOJQVADQKFEKVDLZGRYITHBDIRUOUHSJPWMAGFKLPYOWEXPSFDABXLDWQIMEPNAIWDAMVHUGRMOHWXXTODQWQESXNLVHTSLIGDZWWCHYAGJFAPPBVLZTIHREIAMOACTZRUFNMBLOZFKCLMBWECQZYKJPNJYMUGXLZNKWYIVTFQMCZJVOYLQGDTSNGENBBUEVVCCZRBHRSR");

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
    msg.setTimeStamp(0.503536534073);
    msg.setSource(55930U);
    msg.setSourceEntity(86U);
    msg.setDestination(40246U);
    msg.setDestinationEntity(161U);
    msg.name.assign("ZAFVOJKSBNHMRTVBSJTJYCGADIYYNAMUODSNEYTDIUVWSZ");
    msg.visibility.assign("UNTUTCJGMUXGJOAPTTHRKSYBXGMKSMRQHEYYCXUQHDZLNMMVBVRYXQQCKGOVZYAXDPDLICAKLYGNHETSZEWBVKPVKJNOOQZZLFOGEUWCXHXPWFABDROTDJQRXATHYUMLBLFIWPSFFDLZSPARGJJONICLRXALNZMPNVUKTRPFIFOBMWUCGJISSQGBSXBIQFAVMPMAJEVYWEUEDNWVNZVKC");
    msg.scope.assign("IZLGBRFBZONPPWYROYCWVQZDEUQTZUHHCQLSPZGQPWFPVCWXWXDKONUJFDGEEQPWVUBHNFKSIZTQLRISDLJHHYDXCHRCWFQEMNSJJMMQMMDBFGUREMLKTRCZWYOSNYRLXLAUZKOBFCIIGNGLXOUDFHFVIKISYNVBJUTYLQT");

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
    msg.setTimeStamp(0.579658555884);
    msg.setSource(52082U);
    msg.setSourceEntity(89U);
    msg.setDestination(44663U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DAFGTVAYCRRQCSCPMAKRXMHJQONJIEKRHKJNCKVOSCFMPXMGUYTADKTESWXAMPQTIUWZIEWRGKTFYCSAQBHGIFLWLPYTRQLDSYKIQZBDKFFUPNEVBWEEYSPHZVVLWPDBLHCOQNSHHNMJNVRIW");
    msg.visibility.assign("CIPDFWZROIITEIYHHOEAGJERHSWWLEQEVTMDUPFKSRGPSKJMWLFLAHMUBSFKCVRULNTOBDBBIMMUZHNEHDACXBJCTKAIFKWSZRWSKXKZQAVPNGPYXIEYMLBOXVAQSLHCDWQLPSGQTVHNOVDTVUFQTYCKLGCWBPPMXFTGUAIFZYUDRDYJJXNULUOVFYOGSUKNVIXYWGBAVEDCFXEQCJZQHOOZRZNXQRPQCMPHZSRDAXTNMIGMBRTJ");
    msg.scope.assign("HXCXHZCVPMXREAZCOIUZKBMCIJJKQDYUOQVJUENOGGLXJDVUVEBQTQSNLLYOCTUOKFFMMHBKWLSQHHBNPAKQOKSFZFZNXYNDAPAUVCSGRAGDYCGOBECVSIQOADIKTRJTUFBWDRLDMJVXJYFAZBILFMOLZTFTEFWMNSNHDYQNGQKPIDMXWUVUPSAGYYKSPWRPWPRZRTESHYJGBHBGZIAPINZREELETU");

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
    msg.setTimeStamp(0.925518830337);
    msg.setSource(14826U);
    msg.setSourceEntity(243U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(195U);
    msg.name.assign("HFBDMLOVWPWMFDENTXPKIZOWUBSCIJTQCVLHDOWQPDPUTIIVFRKFTLZIEIUOJNGWZHGVBJXVEOJRSTN");

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
    msg.setTimeStamp(0.0251487871775);
    msg.setSource(4292U);
    msg.setSourceEntity(30U);
    msg.setDestination(44127U);
    msg.setDestinationEntity(33U);
    msg.name.assign("WDQYUENHJJKBOXLLHZOTALBJCOTHEGDTKMCFXRMMTCQQDYTVLQUIZCSPAKUMQMQHXWXPCSIDVCCNVCWJZEHBYAFAEZXLDTBHXVVCUZGOYBVRFYRUULVRADNHPVPTUNDXTMYJJZHRFSNKABIKGQMMNNPZIOLFEVFNPQWSJJDFJODFSPUOIAYRMXIGPRIWAZRBOGEWXJKOIKXETMSUSOAKUBZKZLTEGFWEN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DSMUBHZNSVCJJCCJJVRLQJSDYPGAYUDVIUY");
    tmp_msg_0.value.assign("UJFSKHIPVJEDYBEKVGCJZXDPSFXERWSBSRQKLZMTPIWOMGTYEYYYLLXOAEQBALQVOCZQKJRVMPQFUPHKDMLRQBEZUSTAXEDNIWABYZWIZNTHCWARGWRKYOPFGYUNPJNMFUNSONYIQMWBQANXHTAZJVZIDHFPGKWSJXQVIKHNCBZLOPQDXMVUTTAMJTWOUKEGEXUSB");
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
    msg.setTimeStamp(0.86116805677);
    msg.setSource(35145U);
    msg.setSourceEntity(111U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ISWPTKMKVSR");

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
    msg.setTimeStamp(0.630874674411);
    msg.setSource(62812U);
    msg.setSourceEntity(75U);
    msg.setDestination(53554U);
    msg.setDestinationEntity(38U);
    msg.name.assign("QUJNVWOQNEITXVQMFDUSGCBOUNRJWHAGVHOYRTCTRYHBRXTOPVHBGNGIDYXWHWQIMUVAPLNEZIGGWGTNQVLNYCMMPKLQCOUURBOBIHTFXVOHROJZRLLKEKFIUSNLEFKJUBNPKTLLZCFDHOYXKVKTEZCXDJBJAUESCCVHYSDLDVMKQTYSAPMALQFWASARNDXGPEMOIJGZFTYYRUSGMQKXSZIWYPEAWQZJDCIBSAZJXCZBDMPZ");

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
    msg.setTimeStamp(0.146481938858);
    msg.setSource(55487U);
    msg.setSourceEntity(220U);
    msg.setDestination(18002U);
    msg.setDestinationEntity(19U);
    msg.name.assign("UTVDNPSCKDQKQTHOWJKFXCTSSMUTINHDXZZMQQIEXYRLTTVJ");

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
    msg.setTimeStamp(0.744661216755);
    msg.setSource(50432U);
    msg.setSourceEntity(156U);
    msg.setDestination(3124U);
    msg.setDestinationEntity(245U);
    msg.name.assign("ZOGFIRNQFNATMBJKIJAUWLHMVOJEANTXFGPPBCDJYRLYSMMERPPOHDGYASBDUYWDZEMEXQQVCOMQEQIJVAVFQNFDTPHLTRZKCVJWLV");

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
    msg.setTimeStamp(0.944233259876);
    msg.setSource(46510U);
    msg.setSourceEntity(233U);
    msg.setDestination(22709U);
    msg.setDestinationEntity(36U);
    msg.timeout = 1221554512U;

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
    msg.setTimeStamp(0.62578342108);
    msg.setSource(50949U);
    msg.setSourceEntity(192U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(105U);
    msg.timeout = 2278042128U;

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
    msg.setTimeStamp(0.829457355589);
    msg.setSource(10362U);
    msg.setSourceEntity(153U);
    msg.setDestination(60647U);
    msg.setDestinationEntity(69U);
    msg.timeout = 1319443405U;

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
    msg.setTimeStamp(0.916764482973);
    msg.setSource(49877U);
    msg.setSourceEntity(97U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1451194032U;

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
    msg.setTimeStamp(0.346700246867);
    msg.setSource(4771U);
    msg.setSourceEntity(185U);
    msg.setDestination(3016U);
    msg.setDestinationEntity(107U);
    msg.sessid = 655988162U;

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
    msg.setTimeStamp(0.284920489469);
    msg.setSource(42769U);
    msg.setSourceEntity(88U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(58U);
    msg.sessid = 88269826U;

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
    msg.setTimeStamp(0.487264444926);
    msg.setSource(14179U);
    msg.setSourceEntity(89U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3514068152U;
    msg.messages.assign("QMIHBNDOISDKRULWXPIJDAIDWXTISBWYFDSACEJNJFPBUPHWGHTVJECFNYJANMEMALRTRKBUVKSDKIHEYOGDGTOHPOUNQKPQBYTFEYZCOEZRQCERHBGFVTDUHKVZXANQAXNUUCWILKSLWLTQUCIXAFZBVTBYENVZBZQYQGNZLCXPXJRACQ");

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
    msg.setTimeStamp(0.79778939685);
    msg.setSource(15568U);
    msg.setSourceEntity(66U);
    msg.setDestination(32949U);
    msg.setDestinationEntity(126U);
    msg.sessid = 3308055162U;
    msg.messages.assign("PHLWFZCHKNKHCRQTUSBVAAVIJXMRYXWRFQSVMNRUZZJOZNIAKMIKWWOBRXYSRFSPZ");

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
    msg.setTimeStamp(0.345843848374);
    msg.setSource(49435U);
    msg.setSourceEntity(221U);
    msg.setDestination(62755U);
    msg.setDestinationEntity(127U);
    msg.sessid = 422173326U;
    msg.messages.assign("ZIFISOJMHCHAAUDAVUEDOHEJOQMSELXBRDFTRHKVPNLBUTVDKFRTBVUXRLYDHWAICHYMXJSCZSCY");

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
    msg.setTimeStamp(0.426541216735);
    msg.setSource(65493U);
    msg.setSourceEntity(123U);
    msg.setDestination(22417U);
    msg.setDestinationEntity(164U);
    msg.sessid = 3492851132U;

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
    msg.setTimeStamp(0.755750450322);
    msg.setSource(24462U);
    msg.setSourceEntity(7U);
    msg.setDestination(14165U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1957313593U;

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
    msg.setTimeStamp(0.502965083475);
    msg.setSource(61430U);
    msg.setSourceEntity(115U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(169U);
    msg.sessid = 4077376220U;

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
    msg.setTimeStamp(0.417680611887);
    msg.setSource(53912U);
    msg.setSourceEntity(136U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(166U);
    msg.sessid = 681888882U;
    msg.status = 119U;

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
    msg.setTimeStamp(0.409405767078);
    msg.setSource(43581U);
    msg.setSourceEntity(132U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(213U);
    msg.sessid = 1677034950U;
    msg.status = 126U;

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
    msg.setTimeStamp(0.401519252501);
    msg.setSource(26139U);
    msg.setSourceEntity(238U);
    msg.setDestination(62056U);
    msg.setDestinationEntity(141U);
    msg.sessid = 2745023323U;
    msg.status = 201U;

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
    msg.setTimeStamp(0.179955318129);
    msg.setSource(56488U);
    msg.setSourceEntity(156U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(218U);
    msg.name.assign("TDWCTHOINRETVXJYLMQCPWMWAHMZXUYSBVJJXRLNSFYJT");

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
    msg.setTimeStamp(0.741535129642);
    msg.setSource(43680U);
    msg.setSourceEntity(143U);
    msg.setDestination(60527U);
    msg.setDestinationEntity(196U);
    msg.name.assign("VUXUGJRMEVCSQQZSWCJUDSJEQSDNETRBERYXBXGGAJGLYAMDNZHPFKYEZQDYDEAPTSCLLESICONHTKZXTCOTFPFFOTKWMKCMEVYIHRNJOHXNTSWYLFNKOIFIVOBZSAMLCJXBJPWNAXGQNDPHKKU");

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
    msg.setTimeStamp(0.489846287198);
    msg.setSource(42739U);
    msg.setSourceEntity(53U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(118U);
    msg.name.assign("QTJHUXFGEFRKKBJXMDCPNHWIZKZGA");

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
    msg.setTimeStamp(0.899706820927);
    msg.setSource(27368U);
    msg.setSourceEntity(38U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(198U);
    msg.name.assign("XPFXVMXYURRFPRDSCZZGXWOPQMHNDZCNLPBSVTLABQEICYWMVFIXSEHAZPESBNFMJSQUGBPJVGKIDIROXQMLBLUFHFDOIYROWVZLKTWLXAYZHCGSHDZOAJEKJA");

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
    msg.setTimeStamp(0.622475547699);
    msg.setSource(33839U);
    msg.setSourceEntity(175U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(119U);
    msg.name.assign("CXNENCMJZSFIOWCSGRAARNVPDVWPTFZWCTFWCGPTHQYELDYPOHAIZSKWKLSFARGGUUVQWUCROPTNVFMLCXMBBNAQOYRHYRLAURVPQMQKDXPABIGCQIHMHLZZGE");

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
    msg.setTimeStamp(0.606297841086);
    msg.setSource(15877U);
    msg.setSourceEntity(67U);
    msg.setDestination(7619U);
    msg.setDestinationEntity(244U);
    msg.name.assign("IAELPYBCVQ");

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
    msg.setTimeStamp(0.214397029905);
    msg.setSource(33462U);
    msg.setSourceEntity(78U);
    msg.setDestination(60102U);
    msg.setDestinationEntity(96U);
    msg.type = 166U;
    msg.error.assign("WXDYJAUOMKRAFXGEFSQVEBWQWFDHXKGCXKBRQJSMCTIZXLEUZTTPBHNWTLQRVNX");

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
    msg.setTimeStamp(0.191598539422);
    msg.setSource(33577U);
    msg.setSourceEntity(110U);
    msg.setDestination(61269U);
    msg.setDestinationEntity(120U);
    msg.type = 247U;
    msg.error.assign("TSYKRHOFWKUQXVZWYYAHKVGASMBOJSOBEAJMBRKRDALPEEXADJNPCLYUPLXXMEAGBBGTQWBIAEC");

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
    msg.setTimeStamp(0.480651656876);
    msg.setSource(12935U);
    msg.setSourceEntity(25U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(6U);
    msg.type = 49U;
    msg.error.assign("NYSBWITLWKXQZCEDFIVUQVDQIIIFTUALBOMBDAXFISNZDELAYRSWNMIFVXQTPVSYBHMBZHWXNMOXWKGZKHKKGGSGXC");

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
    msg.setTimeStamp(0.175593703736);
    msg.setSource(31130U);
    msg.setSourceEntity(170U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(12U);
    msg.seq = 57794U;
    msg.sys_dst.assign("COPTFNSKQOYD");
    msg.flags = 190U;
    const char tmp_msg_0[] = {56, 92, 113, -6, 82, 104, 114, -85, 22, -128, 45, -120, -123, -41, 22, 5, -95, -51, 97, 46, 54, -83, -117, 104, 36, 6, 35, 17, -72, -75, -29, 6, -14, 14, 22, -109, 3, 39, -32, -5, 43, 12, 6, 45, 14, 68, 64, 96, -34, -72, -47, 120, 65, -82, -104, -88, -29, 20, -96, 64, -111, -13, 8, -88, -77, -116, -96, -52, 22, -77, 59, -9, 9, 15, -56, 32, 112, -73, -13, 34, 40, -56, 0, 22, -49, 83, -121, 29, 9, 14, -61, -40, -122, -69, -33, -115, -120, 85, -74, -53, 56, -119, -41, -5, -122, -29, -45, -103, -123, -48, -77, 77, 20, -43, 3, 9, 61, 107, 31, -111, 103, 72, -13, 99, -29, -128, -125, -110, -42, -8, -21, 78, -25, 80, -36, 77, 15, -85, 50, -81, -19, 83, 14, 45, 60, -117, 64, -34, 63, -68, 71, 121, -73, 34, 56, 98, 15, 57, 29, -97, -6, -22, -82, -116, -70};
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
    msg.setTimeStamp(0.253235295584);
    msg.setSource(32536U);
    msg.setSourceEntity(45U);
    msg.setDestination(48293U);
    msg.setDestinationEntity(33U);
    msg.seq = 60528U;
    msg.sys_dst.assign("SYNGJNGHZGUNDGVHJNLPHAITKMCIXHXWESMQMNKWFPLEJTMLIURRMHPBXONAKFRVRZXIZEJYKGYEVIHDKSVSBXEVUFYCKYLIUTKVULDTLRJWCYDJFQZROCDMGQVHQADGOFXIZUWWZSLMJPNWMOEUYQGARFGVURQQWARDYTLCIC");
    msg.flags = 194U;
    const char tmp_msg_0[] = {86, 107, -9, 8, -25, -23, 87, -56, 66, 112, -114, 71, -60, -7, 83, -93, -52, 48, 16, 121, 26, -32, -83, 71, -126, 38, 78, 97, -84, 101, -46, 10, 96, -19, -101, 3, 31, -58, 0, -93, 53, -119, 108, 124, 126, -71, -67, 121, -8, 125, -11, 60, 18, 76, -33, -10, 27, -123, 93, -103, 19, 67, -103, -109, -65, -73, -64, 8, -33, -117, 55, -97, 8, -18, -1, -43, 25, -119, 110, -70, 54, -16, -104, -7, -120, -28, -46, 112, 82, 64, -26, 64, -117, 45, -90, 42, 15, -60, 88, 55, 104, -43, 86, 6, -75, 36, 31, 110, -55, -124, -4, 37, -111, -80, -24, -97, 29, -86, 2, -116, -105, 25, -70, -13, 34, -76, -12, -98, -70, -23, 73, 110, -87, -98, 102, -10, -27, 119, 85, -41, -52, -4, 56, 37, -61, 61, -72, -21, 83, -19, 8, 49, 53, 54, 20, -88};
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
    msg.setTimeStamp(0.497613743608);
    msg.setSource(17853U);
    msg.setSourceEntity(88U);
    msg.setDestination(6647U);
    msg.setDestinationEntity(64U);
    msg.seq = 50193U;
    msg.sys_dst.assign("TBPTNTLOONQHNYQSSDRKKINIRNMYAUJNAOCQKJZYXWMUJFVXSMBECJWZTVPNUDBVHRYYIGDEDWHQZVHFWGLQPHAPZIEAWSHNBBDEAWCFAMVMVYBGTCEGUZZCU");
    msg.flags = 25U;
    const char tmp_msg_0[] = {58, 42, -89, 6, 85, -82, 94, -82, -60, -64, 27, -74, -110, -3, -73, -121, -30, 26, -74, 74, -44, 76, -87, -34, -46, 47, -80, -48, -111, -5, 7, 62, -45, -84, -111, 20, 38, 36, 49, -115, 81, -38, 4, -12, 47, 97, -81, -64, -47, -44, 77, -84, 42, -104, 34, -42, -31, 27, 122, -120, 125, 43, 35, 1, 82, 64, 0, -43, -127, 30, 107, 68, 49, -50, 21, 46, -112, -100, -43, -125, -124, -123, 43, -55, 100, -82, -96, -56, 112, 32, -102, 29, -32, -19, -78, 75, -91, 62, 63, -57, -124, -68, -18, 94, 66, 110, 38, 61, -97, 78, 45, 68, -31, 22, -90, -55, 16, -76, 17, 107, -113, -44, -49, -66, 32, -110, 42, -67, 25, 97, -90, -4, 31, 51, -64, 15, 41, 39, 123, -2, 81, 25, 119, -53, 35, 126, 51, -18, 45, 84, 29};
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
    msg.setTimeStamp(0.558421268566);
    msg.setSource(23199U);
    msg.setSourceEntity(31U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("YTHGOTNHICJAFVRQGLSMRJFKOXQAWLGIEBELRKBPYLWUUSXKNPJMTDTTWQYCDTXQKKXMWQQNFDNHAXGXSLCNLBNZFBVUCIUDNEUYGSLAPJWIGYVFVFCODKPZOEWPZBOADZEOEYPPMZCGUNRBDCBGWSYORNJVWV");
    msg.sys_dst.assign("ITREAOLTOCOJJHHEYJHIQ");
    msg.flags = 144U;
    const char tmp_msg_0[] = {-114, -43, 105, 76, 50, 57, 68, -113, 46, 57, -40, 95, -14, -106, 34, -15, -57, -99, 46, -89, 79, 93, 23, -106, 1, 119, -114, -92, -99, 7, -60, 56, -106, 14, 80, 48, 104, -6, -91, -83, 116, -55, 28, 101, 71, 49, 30, -35, -5, -124, -103, 87, -28, -100, 37, 74, 25, -48, -105, -39, -61, 75, 59, 65, -72, -112, -29, -31, 41, 88, -79, 84, -126, 76, 5, -3, -6, 86, 67, 24, -45, 55, 18, 13, 115, -4, 41, -60, -36, 83, -18, -11, -11, 22, -58, -15, 125, 39, -12, 124, -49, -79, -56, -54, -123, -39, -43, 53, -73, 45, -48, -37, 43, 118, 1, 40, 125, 34, -17, 111, -65, -75, 47, -113, 38, -120, -81, -1, 29, -100, -22, -49, 23, -100, -22, 10, 49, -112, -16, 86, 117, 112, -50, -25, -67, -110, 30, 50, -19, 42, 2, -1, 75, -62, -12, 64, 97, -51, -71, 49, -97, -103, 62, -31, -58, 29, 108, 76, 26, 86, 26, -11, -102, 26, -41, -50, 104, -1, -24, -121, -8, 63, 55, 107, -27, 102, -82, -73, -12, -127, 23, -51, -29, -79, -113, -52, -5, 61, 71, -101, 102, -110};
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
    msg.setTimeStamp(0.415364175076);
    msg.setSource(39635U);
    msg.setSourceEntity(14U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(29U);
    msg.sys_src.assign("WZMQCMGHYQEXXUAGLORVZEFFUYOTDHWDUVWNRXZTPXOVAAIGTEXMTGMCOGHNSBDIISCLCUKSJFTHCIJVPJYFLCRQWOAYLBFISETEUUNWZBKY");
    msg.sys_dst.assign("JOCBUYZMODMNTJPWLBOSLROTHURCOFWGCZDZUTYXIPQKJWICBFQYLOFXEYHYPJGKLBOEGBLISP");
    msg.flags = 132U;
    const char tmp_msg_0[] = {-121, 72, 38, 100, -80, 95, -8, 126, 59, -52, 106, -97, -37, 37, -91, 108, 86, -87, -115, -79, -47, 96, -14, 105, -3, 107, -15, -60, 62, -52, -82, 69, 25, -13, 10, 11, 56, -127, -81, 83, 73, 53, -50, -16, -88, 73, -75, -7, 0, -37, -118, 9, 72, -119, 60, -29, -12, 97, -22, -32, 63, -32, 114, 4, -22, -56, 118, -51, 43, -20, 11, -98, 115, -112, -70, 25, -29, -120, -102, 13, 73, -44, -84, 33, -36, 103, -42, -74, 29, -116, -39, -44, 22, -92, -73, 105, 57, -52, -11, -116, 112, -14, 70, -54, 116, 41, -10, -30, -84, 80, 27, 90, 39, -114, -28, -122, 106, -21, -50, 1, -53, -2, -7, -36, 126, -83, 27, 14, 69, -12, 124, 104, -114, 38, 32, 9, 76, -101, -86, 30, 77, 73, 106, -11, 120, 49, -104, -43, 72, 123, -79, 13, 126, -19, 48, -106, 28, 10, 9, 82, 47, 97, -71, 26, -23, -51, -8, -71, 13, -13, -16, -13, -31, -88, 84, 86, 27, 74, 65, -126, 107, 16, -74, -75, -115, -97, 25, -95, -102, 1, -127, 55, 80, -31, 11, 59, 1, 11, 31, 41, 44, -95, 12, 54, 81, 113, 78, -46, 66, 87, -64, 106, -4, -104, 87, 81, -49, 20, -48, 32, -60, -100, 115, 28, 6, 57, -24, 115, 116, 91, 21, -99, 34, -111, -70, 53, 76, 74, -97, 96, 29, 102, 79, -50, -40, -116, -93, 48, -79, -41};
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
    msg.setTimeStamp(0.803971329419);
    msg.setSource(13226U);
    msg.setSourceEntity(39U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(73U);
    msg.sys_src.assign("BEQMVTLBBZLXRWQFEMXJOHMBXERZRHCNEWOHTWZZAFJOSPBLZHJCLVYDSGWOWFTJLNEAIGVIQHQVBCSL");
    msg.sys_dst.assign("NAHNGEWPBCLKXNLUCBHERICSMBTGMJPDLZJBGLGGJCQVDHNAPTYHIEMWLLXGQPKAOHXJZCVSDJIFRBBYBDJSYQPMRAYTVEOFCPYEFZEHYVXVEIDFUWRZNJKKOPJVEKUDSFWLXRGQGCERTTBULHFOODURTXNHNDMKHQWJZKIZIOEYXZPWVNTUWYWLSVPRBKHTASOAICQGNKGRTZUTBLFSWOMXQQIIUMASFVYXOUOV");
    msg.flags = 210U;
    const char tmp_msg_0[] = {-23, -100, -128, -75, -33, 54, -23, 1, -107, 39, 46, 124, -83, -84, 55, -66, 37, 52, -38, -35, -93, 17, 20, -94, -76, -96, 3, 123, 32, 76, 36, 107, -5, 110, -112, -104, -86, -124, -7, 49, -65, 74, -89, -79, -19, 122, -53, 83, -38, -80, 111, -8, 0, -40, -128, 15, -27, -40, 78, -120, -14, -125, -126, -72, -54, 38, 104, -49, -43, 62, -60, -75, -127, -120, -67, -126, -117, 85, -38, 6, -125, -38, 102, 81, -47, 18, 69, 55, 122, 85, -53, 5, 4, -4, -58, 9, 63, 108, 20, -47, 15, 17, 100, -79, 9, 10, -35, -84, -81, -72, 46, -102, -41, -1, -77, -101, -110, 85, -106, -45, -124, 92, -119, -33, 22, 92, 67, 4, -94, 82, 117, 19, 61, 54, 21, 33, -8, 39, 12, -79, 81, -77, 100, -8, 58, -72, -40, -49, -69, -19, 71, -111, 33, 63, 97, -22, 119, 2, 103, 45, 70, -55, 74, 115, -27, -95, -22, 76, -89, 15, 0, -99, 91, -73, -83, -98, -8, -119, 96, -14, -35, -111, 124};
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
    msg.setTimeStamp(0.0609925662244);
    msg.setSource(28911U);
    msg.setSourceEntity(76U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(44U);
    msg.seq = 5301U;
    msg.value = 3U;
    msg.error.assign("MRELHLKDZLHWUSHDSD");

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
    msg.setTimeStamp(0.265464357622);
    msg.setSource(23000U);
    msg.setSourceEntity(121U);
    msg.setDestination(2480U);
    msg.setDestinationEntity(192U);
    msg.seq = 59651U;
    msg.value = 245U;
    msg.error.assign("NZVSIODFGQZKDVTTAQJCMAXCWLJBLSCYVEABQGDZWFXLYELCKZUSPJHNMFTDFANHGXIXRNTTMQSKBUSUZWQPHBIQCNHTLAIMLWKRWBALKXXYGGPBFOISGXGFSMPJHDZZAEFYSSMVMCQDREQRIHYXKWITAYWVUUAILOAJCDWHGOMGNYCUKETZTBOVDPLOXIRJLNPRRBCWMPWXPERCNOHIHKDYYUZUGNVSVDEJFKEZEKQV");

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
    msg.setTimeStamp(0.617950408769);
    msg.setSource(56264U);
    msg.setSourceEntity(239U);
    msg.setDestination(37383U);
    msg.setDestinationEntity(229U);
    msg.seq = 62873U;
    msg.value = 19U;
    msg.error.assign("PTCHDJZFAQAGJYVQNISEMZEOTVJIYWWFFYWXBLHDAHBJJDHUEZVNLUY");

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
    msg.setTimeStamp(0.634928230634);
    msg.setSource(59649U);
    msg.setSourceEntity(55U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(112U);
    msg.seq = 64812U;
    msg.sys.assign("QSXUOIJHUEJIQVNHUHFLDENJSRBOWGWTDVTPWRQCUXKXDZGYWCYDJKUFZVYPLRPEJCMYATILCPLFIKHCQLWCNVVOGHBGEZTRTEJVYMTDPCYONBXMLXFMMWDZMPOQNFXTNKCAIASXRCYGTUAZYFKEERTQPRHE");
    msg.value = 0.837471545978;

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
    msg.setTimeStamp(0.185381745057);
    msg.setSource(59436U);
    msg.setSourceEntity(235U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(113U);
    msg.seq = 59610U;
    msg.sys.assign("PZSVNBABBYRVXJYHUTDNFRVEZHOIXBIFENJGFBEDWXEJOXZKHDSWOQFGPQTWTYHSZSDJPOLSFKVJVVERQOGOAZMNSWS");
    msg.value = 0.568488540131;

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
    msg.setTimeStamp(0.968692868206);
    msg.setSource(23139U);
    msg.setSourceEntity(88U);
    msg.setDestination(40917U);
    msg.setDestinationEntity(207U);
    msg.seq = 48215U;
    msg.sys.assign("GHLMVBRTGIFVWJOINWFMKNUZNBLOTPRSOBATGAADFZRQIAGSEMVCGNJKDNICVXSDVZMQTLJOQWEHBBUFRJIXMISTSCSXJUWAREUAXVLUVPYEDJDSLKVUTXGTHZJYCZLHNYUANXHBGOQCYQQPYEJPGYCXKTTPZSIWDSPYESRKHADKCRKMILCPQLWUQMNVJZNIFFZWHMYHYUQEMXROBTU");
    msg.value = 0.776749269893;

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
    msg.setTimeStamp(0.440790214095);
    msg.setSource(34258U);
    msg.setSourceEntity(140U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(72U);
    msg.action = 24U;
    msg.longain = 0.488960214019;
    msg.latgain = 0.263868553236;
    msg.bondthick = 147201745U;
    msg.leadgain = 0.875870267757;
    msg.deconflgain = 0.384956242141;

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
    msg.setTimeStamp(0.756323451986);
    msg.setSource(51439U);
    msg.setSourceEntity(128U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(38U);
    msg.action = 158U;
    msg.longain = 0.739483189186;
    msg.latgain = 0.871448840613;
    msg.bondthick = 2389314505U;
    msg.leadgain = 0.757986693838;
    msg.deconflgain = 0.730147192843;

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
    msg.setTimeStamp(0.0963255942178);
    msg.setSource(38099U);
    msg.setSourceEntity(132U);
    msg.setDestination(51096U);
    msg.setDestinationEntity(165U);
    msg.action = 211U;
    msg.longain = 0.0177810096509;
    msg.latgain = 0.768988699162;
    msg.bondthick = 2030497846U;
    msg.leadgain = 0.937993773116;
    msg.deconflgain = 0.578616546817;

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
    msg.setTimeStamp(0.833969425565);
    msg.setSource(6539U);
    msg.setSourceEntity(141U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(142U);
    msg.err_mean = 0.560146390198;
    msg.dist_min_abs = 0.131282697908;
    msg.dist_min_mean = 0.759338200692;

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
    msg.setTimeStamp(0.798819718345);
    msg.setSource(9935U);
    msg.setSourceEntity(201U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(118U);
    msg.err_mean = 0.365571517054;
    msg.dist_min_abs = 0.414148437151;
    msg.dist_min_mean = 0.459534587787;

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
    msg.setTimeStamp(0.517185685246);
    msg.setSource(770U);
    msg.setSourceEntity(179U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.934909293889;
    msg.dist_min_abs = 0.402881376404;
    msg.dist_min_mean = 0.378834405637;

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
    msg.setTimeStamp(0.436621383581);
    msg.setSource(47010U);
    msg.setSourceEntity(215U);
    msg.setDestination(459U);
    msg.setDestinationEntity(96U);
    msg.action = 18U;
    msg.lon_gain = 0.222785514606;
    msg.lat_gain = 0.611925146957;
    msg.bond_thick = 0.313860097116;
    msg.lead_gain = 0.183775701746;
    msg.deconfl_gain = 0.906454845135;
    msg.accel_switch_gain = 0.592466780721;
    msg.safe_dist = 0.78048403027;
    msg.deconflict_offset = 0.79864026568;
    msg.accel_safe_margin = 0.47269496584;
    msg.accel_lim_x = 0.560377046544;

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
    msg.setTimeStamp(0.0688300372397);
    msg.setSource(46230U);
    msg.setSourceEntity(148U);
    msg.setDestination(51075U);
    msg.setDestinationEntity(226U);
    msg.action = 252U;
    msg.lon_gain = 0.169251716273;
    msg.lat_gain = 0.229296663694;
    msg.bond_thick = 0.808955685556;
    msg.lead_gain = 0.553928474684;
    msg.deconfl_gain = 0.174462899988;
    msg.accel_switch_gain = 0.709480038525;
    msg.safe_dist = 0.586863402292;
    msg.deconflict_offset = 0.782115939794;
    msg.accel_safe_margin = 0.738947424291;
    msg.accel_lim_x = 0.048687659716;

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
    msg.setTimeStamp(0.180798131109);
    msg.setSource(16726U);
    msg.setSourceEntity(181U);
    msg.setDestination(32891U);
    msg.setDestinationEntity(6U);
    msg.action = 11U;
    msg.lon_gain = 0.957226780156;
    msg.lat_gain = 0.087696187967;
    msg.bond_thick = 0.682473602092;
    msg.lead_gain = 0.78502541765;
    msg.deconfl_gain = 0.821278780082;
    msg.accel_switch_gain = 0.855636883553;
    msg.safe_dist = 0.472640630973;
    msg.deconflict_offset = 0.498281236482;
    msg.accel_safe_margin = 0.435337221683;
    msg.accel_lim_x = 0.575958879784;

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
    msg.setTimeStamp(0.172168706021);
    msg.setSource(26654U);
    msg.setSourceEntity(115U);
    msg.setDestination(64351U);
    msg.setDestinationEntity(18U);
    msg.type = 139U;
    msg.op = 237U;
    msg.err_mean = 0.374536337777;
    msg.dist_min_abs = 0.743316879692;
    msg.dist_min_mean = 0.331167932697;
    msg.roll_rate_mean = 0.717990408396;
    msg.time = 0.703429970941;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 78U;
    tmp_msg_0.lon_gain = 0.744386758935;
    tmp_msg_0.lat_gain = 0.195551481397;
    tmp_msg_0.bond_thick = 0.212671373636;
    tmp_msg_0.lead_gain = 0.610418225302;
    tmp_msg_0.deconfl_gain = 0.880847492109;
    tmp_msg_0.accel_switch_gain = 0.309933041482;
    tmp_msg_0.safe_dist = 0.527713280356;
    tmp_msg_0.deconflict_offset = 0.437014854848;
    tmp_msg_0.accel_safe_margin = 0.52933103802;
    tmp_msg_0.accel_lim_x = 0.592672055853;
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
    msg.setTimeStamp(0.157910481614);
    msg.setSource(4184U);
    msg.setSourceEntity(67U);
    msg.setDestination(15434U);
    msg.setDestinationEntity(131U);
    msg.type = 154U;
    msg.op = 144U;
    msg.err_mean = 0.861984545106;
    msg.dist_min_abs = 0.496184713838;
    msg.dist_min_mean = 0.712374153721;
    msg.roll_rate_mean = 0.506189958195;
    msg.time = 0.172916402147;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 77U;
    tmp_msg_0.lon_gain = 0.453737537911;
    tmp_msg_0.lat_gain = 0.555924315899;
    tmp_msg_0.bond_thick = 0.723892284207;
    tmp_msg_0.lead_gain = 0.596734512278;
    tmp_msg_0.deconfl_gain = 0.581760307326;
    tmp_msg_0.accel_switch_gain = 0.111004269096;
    tmp_msg_0.safe_dist = 0.607235486428;
    tmp_msg_0.deconflict_offset = 0.882355606657;
    tmp_msg_0.accel_safe_margin = 0.0534966479239;
    tmp_msg_0.accel_lim_x = 0.422229643101;
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
    msg.setTimeStamp(0.541349379755);
    msg.setSource(54095U);
    msg.setSourceEntity(34U);
    msg.setDestination(23356U);
    msg.setDestinationEntity(233U);
    msg.type = 220U;
    msg.op = 3U;
    msg.err_mean = 0.799407906035;
    msg.dist_min_abs = 0.660364846094;
    msg.dist_min_mean = 0.614963673476;
    msg.roll_rate_mean = 0.658433213487;
    msg.time = 0.91964781227;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 193U;
    tmp_msg_0.lon_gain = 0.701086430915;
    tmp_msg_0.lat_gain = 0.189630096391;
    tmp_msg_0.bond_thick = 0.906150151921;
    tmp_msg_0.lead_gain = 0.826740180985;
    tmp_msg_0.deconfl_gain = 0.718272800575;
    tmp_msg_0.accel_switch_gain = 0.79364328781;
    tmp_msg_0.safe_dist = 0.271233037335;
    tmp_msg_0.deconflict_offset = 0.0294865833254;
    tmp_msg_0.accel_safe_margin = 0.778568421993;
    tmp_msg_0.accel_lim_x = 0.341349185443;
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
    msg.setTimeStamp(0.57227041677);
    msg.setSource(4649U);
    msg.setSourceEntity(230U);
    msg.setDestination(28656U);
    msg.setDestinationEntity(31U);
    msg.uid = 25U;
    msg.frag_number = 118U;
    msg.num_frags = 206U;
    const char tmp_msg_0[] = {19, -68, 22, -2, 113, -78, 97, -25, -101, -120, -58, 19, -115, 71, -76, -99, 0, -124, 24, -70};
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
    msg.setTimeStamp(0.0744416920563);
    msg.setSource(54237U);
    msg.setSourceEntity(45U);
    msg.setDestination(60438U);
    msg.setDestinationEntity(30U);
    msg.uid = 120U;
    msg.frag_number = 16U;
    msg.num_frags = 128U;
    const char tmp_msg_0[] = {91, -7, 7, -82, 33, 89, 123, 115, -128, -57, -3, -55, 52, 8, -40, 112, 0, -64, -36, 122, 108, -107, -58, 48, 69, 50, 42, -60, 93, -24, 69, -81, 62, 92, -52, -14, -40, 123, 49, 112, -92, 85, 125, 58, 115, 41, 55, -81, 121, 91, -33, -53, 113, -34, -88, 114, 68, -49, 59, 5, 26, 55, -78, 11, 32, 24, -12, -97, 82, -75, -56, 104, -112, 44};
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
    msg.setTimeStamp(0.865676773322);
    msg.setSource(1312U);
    msg.setSourceEntity(60U);
    msg.setDestination(39770U);
    msg.setDestinationEntity(1U);
    msg.uid = 35U;
    msg.frag_number = 102U;
    msg.num_frags = 55U;
    const char tmp_msg_0[] = {-99, -110, -90, 59, -64, -15, 38, 39, 120, -57, -128, 122, 2, -101, -86, -5, 100, -21, 84, -124, -3, 72, -20, -5, 49, 117, -26, 49, -102, -52, -29, 91, 50, -49, -128, -48, 89, 68, -57, -59, -37, -88, -116, -98, 25, 35, 52, 120, -105, -35, -116, -91, 107, 109, -96, -43, -7, -91, -9, -124, 9, -126, 37, -19, -22, -100, -113, -58, -69, -71, 20, 35, -54, -29, 106, -66, 15, -123, 60, 32, 121, -22, 3, -49, 107, 61, -43, 63, -45, -108, 46, 37, 67, -43, -69, 104, 106, -50, 95, 19, 69, -91, -117, 0, -75, -51, -57, 24, -28, 50, -28, -111, -95, -123, 67, 57, 32, -8, -63, -108, -27, 63, -124, 18, 74, 3, -72, 52, 95, -24, 123, 83, -113, 12, -85, 96, 0, 65, 0, 108, 52, -112, 15, -80, -83, 120, -19, -88, 40, -24, -7, 67, -45, -17, 105, -40, -99, 1, 34, -107, -80, 121, 98, 81, -82, -47, -126, 29, -55, 101, 56, -92, -70, -109, 80, 109, -11, 43, -108, -95, -126, 69, -109, -77, 87, 64, -8, 21, 94, -89, -40, 55, -84, 18, -80, -72, -96, -28, -55, 42, 105, 21, 67, -12, -39, -7, -59, -128, 21, -123, -105, 100, -5, 67, 113, -86, -19, -124, 36, -80, 40, 83, 80, -68};
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
    msg.setTimeStamp(0.595526239189);
    msg.setSource(38751U);
    msg.setSourceEntity(23U);
    msg.setDestination(39904U);
    msg.setDestinationEntity(71U);
    msg.content_type.assign("LDEAAKYXWVLJXEIRBMKWGKYAZKQMQOTBQLPWARRKYLAAURVHUNMOGPIFUEXNBPXXHFJVVWKRJMLYPIEDHTTPFXAKURUGAWTZNIVSZEZGWJHYXVVGLFPGDHVTOQESZSOUSSGDYILCWNBDUJYUFMMEYTV");
    const char tmp_msg_0[] = {-52, 73, -71, 86, -105, 67, 123, 62, -104, -29, -126, 13, -49, -44, -51, -18, 98, 78, -14, -111, -46, -47, 52, 98, 125, -111, -6, -7, 25, 23, -122, -96, -57, 88, 116, -56};
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
    msg.setTimeStamp(0.200510465537);
    msg.setSource(27527U);
    msg.setSourceEntity(233U);
    msg.setDestination(23113U);
    msg.setDestinationEntity(220U);
    msg.content_type.assign("KHLABUAMXJQRESNIPMRAKBNAJXYHQMZEFJAXZONUATEOWRDVZWRJRYUNALTIBDIFHYFSRQHPJHWJOSRGZMWOYCYVRPUXPZPSKXKPQEPKFDVMCIBGENXRBLBLKCNYGCSVEUWGHNTKAWUTCONABDFCLNTKOHMDTVZIBQ");
    const char tmp_msg_0[] = {-4, 14, 57, 64, -96, 106, 8, -117, 77, 110, 119, -93, 77, -86, 42, -64, -29, 29, 34, -49, 121, 78, 32, -12, 20, 95, 12, -32, 99, 68, -115, -17, 91, -85, -49, -17, -15, 84, -13, 103, -69, 122, 121, -49, -40, -15, 17, -16, 123, 20, -41, 96, 76, 68, -2, 100, -29, -14, 95, 77, -95, 34, 5, -128, -11, 98, 95, -118, 108, 82, 38, 34, 22, 29, -23, -8, 110, 70, 12, -104, -32, -70, 22, -70, -31, -53, -65, 62, -31, 25, 25, -77, -42, -105, -103, 63, 118, 93, -51, 23, 94, -17, 57, 35, 36, -118, 70, -57, 119, -71, -83, 45, -21, -16, 86, -118, -12, 15, -109, 28, 7, -21, -46, -119, 119, 113, 89, -40, -117, -110, 1, 70, -16, -77, 36, 58, -127, -51, 10, 82, -105, 77, -7, -58, -75, 2, 120, -26, -105, -55, -121, -58, -84, -125, 63, 81, -71, 11, -17, -119, -34, 111, -100, -74, -76, -19, -111, 18, 36, -76, 2, 55, 79, 123, -112, 87, 71, 22, -126, -71, -120, 125, -128, 87, -50, 80, -112, -71, -36, 24, -123, -15, 93, 53, 72, -71, 8, 44, 90, -79, -121, 51, -98, -55, -108, -26, -40, -120, 18, 126, 26, -112, -26, -102, -80, -87, 126, -9, 17, 81, -61, -29, -47, 74, -98, -59, -26, -47, 12, 47, 41, 76, 52, 45, -39, 103, -10, -17, 63, -109, 118, -10, -37};
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
    msg.setTimeStamp(0.847241935703);
    msg.setSource(62652U);
    msg.setSourceEntity(46U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("ZGXFEMNKXRITHTSQUEBNVTZKUWAHCGPDFXDBICMDWPYLIOJEFNOLFYVCBQBOZXDPPJMSGIEMHCSGSIOWZWEKKZLEPMLSMAVKUGFMQOBXGYVBYILPLULPYZYRQQFZCAJJKRCOEGTANMTYNVLTTDGAWTCFBSXVUCQQVGCXRFSLQRXJHUFOWJOTJFBKKLIYDPIVORIBA");
    const char tmp_msg_0[] = {-86, 79, 73, -58, 81, 23, -78, -104, 60, -71, -102, -121, 78, -101, -18, -1, 97, -88, -2, -124, -33, 43, 49, -127, 62, -66, -10, -57, -45, 43, -29, 3, 103, 14, -71, 85, -10, 40, 99, -92, 18, 114, 80, 89, 7, -47, 62, -69, -25, 60, 11, -25, -80, 61, -52, -112, 26, -114, -44, 20, -35, 124, -27, -79, 47, 74, 110, 60, -80, 94, -56, 17, 98, -67, -61, -75, -118, -60, -119, -96, -105, 122, -86, 47, 94, 96, 83, -108, 49, 30, -51, 2, -8, -75, -81, 83, 39, -46, 122, -71, 110, 53, -105, 105, -124, 42, 38, -58, -96, -5, 59, 73, 9, 37, -27, -70, -40, -36, 23, 67, 88, 120, -36, 72, 28, -2, -119, -42, -81, -84, 49, 113, 5, -90, 100, 101, -82, 91, 109, 10, -83, 81, 14, 60, 13, -64, 64, -23, -103, -7, -93, -47, -45, 117, 45, -25, -124, -7, -110, -55, -22, -86, -126, 79, 48, 11, -98, -109, -53, -41, 72, -100, -57, 95, -49, 20, 73, -16, -76, 116, 34, -118, 19, -29, -10, 64, 53, -96, 112, -126, 104, 13, 68, -39, 122, 12, 49, 64, -102, 17, -50, -43, 100, -17, -60};
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
    msg.setTimeStamp(0.655472774342);
    msg.setSource(24629U);
    msg.setSourceEntity(91U);
    msg.setDestination(32619U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.296508894301);
    msg.setSource(43163U);
    msg.setSourceEntity(54U);
    msg.setDestination(51507U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.904312032311);
    msg.setSource(10145U);
    msg.setSourceEntity(50U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.0940653814073);
    msg.setSource(60522U);
    msg.setSourceEntity(234U);
    msg.setDestination(29842U);
    msg.setDestinationEntity(137U);
    msg.target = 28988U;
    msg.bearing = 0.856226709576;
    msg.elevation = 0.36613891097;

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
    msg.setTimeStamp(0.176782231111);
    msg.setSource(52120U);
    msg.setSourceEntity(233U);
    msg.setDestination(20864U);
    msg.setDestinationEntity(106U);
    msg.target = 24996U;
    msg.bearing = 0.887484733276;
    msg.elevation = 0.0751856799026;

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
    msg.setTimeStamp(0.838909999279);
    msg.setSource(44192U);
    msg.setSourceEntity(143U);
    msg.setDestination(33741U);
    msg.setDestinationEntity(234U);
    msg.target = 37935U;
    msg.bearing = 0.0452621177366;
    msg.elevation = 0.572552479438;

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
    msg.setTimeStamp(0.182524420006);
    msg.setSource(391U);
    msg.setSourceEntity(177U);
    msg.setDestination(27653U);
    msg.setDestinationEntity(40U);
    msg.target = 55881U;
    msg.x = 0.51185702911;
    msg.y = 0.716093582847;
    msg.z = 0.85102430251;

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
    msg.setTimeStamp(0.411108771467);
    msg.setSource(24140U);
    msg.setSourceEntity(235U);
    msg.setDestination(47635U);
    msg.setDestinationEntity(221U);
    msg.target = 40290U;
    msg.x = 0.669164759131;
    msg.y = 0.6613790639;
    msg.z = 0.78143133087;

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
    msg.setTimeStamp(0.204051517132);
    msg.setSource(58503U);
    msg.setSourceEntity(163U);
    msg.setDestination(24142U);
    msg.setDestinationEntity(224U);
    msg.target = 7657U;
    msg.x = 0.0572411539057;
    msg.y = 0.292093741769;
    msg.z = 0.981101963961;

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
    msg.setTimeStamp(0.874794571578);
    msg.setSource(65272U);
    msg.setSourceEntity(213U);
    msg.setDestination(25124U);
    msg.setDestinationEntity(6U);
    msg.target = 63342U;
    msg.lat = 0.404367484473;
    msg.lon = 0.299286008981;
    msg.z_units = 48U;
    msg.z = 0.601490390232;

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
    msg.setTimeStamp(0.573702458748);
    msg.setSource(34597U);
    msg.setSourceEntity(206U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(231U);
    msg.target = 51893U;
    msg.lat = 0.873214552603;
    msg.lon = 0.952157611429;
    msg.z_units = 76U;
    msg.z = 0.699167626307;

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
    msg.setTimeStamp(0.0437408498645);
    msg.setSource(61502U);
    msg.setSourceEntity(119U);
    msg.setDestination(53861U);
    msg.setDestinationEntity(88U);
    msg.target = 14379U;
    msg.lat = 0.229217335991;
    msg.lon = 0.880220167472;
    msg.z_units = 45U;
    msg.z = 0.0922464763433;

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
    msg.setTimeStamp(0.204788967799);
    msg.setSource(47729U);
    msg.setSourceEntity(171U);
    msg.setDestination(59534U);
    msg.setDestinationEntity(83U);
    msg.locale.assign("QJUCGYZQGMZEV");
    const char tmp_msg_0[] = {16, -50, 79, -124, -107, 62, -6, 113, -48, -96, 117, -11, 60, 19, -8, 96, 99, 76, 7, -89, -48, 114, 68, -9, -60, -89, -84, 93, 82, -2, -38, 99, 60, 121, -22, 78, 126, -75, -86, 96, 120, -44, 18, -101, 82, 67, -13, -97, 49, 81, 39, -125, -26, 112, -30, 71, 114, -98, 15, 4, -85, 2, -7, 77, -32, 59, 19, -102, -47, 101, 104, -38, 98, -7, 92, 12, 47, 110, -22, 114, -128, 107, 19, -100, 103, 25, -13, -52, 46, 83, -38, -57, 30, 27, -64, 95, 54, -81, 82, -16};
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
    msg.setTimeStamp(0.475987088828);
    msg.setSource(43499U);
    msg.setSourceEntity(250U);
    msg.setDestination(299U);
    msg.setDestinationEntity(129U);
    msg.locale.assign("KBALVGFMKRVDAEUZHOYQSODTBKYYWBNXAVCGUFBRUEVBNPFRAOKCDOHSHCAYAOYUPFIIVETLQOQMNLSGYZNTIUPGBDAARGCASPYHNCJGPJSQNKVVDRPRWBIKKMUPGOVLWDHTXKEMLGCEIJLFTIVPHQRRZQYOEECJIHZFJQPUIK");
    const char tmp_msg_0[] = {-98, 68, 17, -8, 103, -39, 10, -7, -28, 52, 32, -128, 50, 8, 58, -48, -65, -46, 0, 109, -25, 105, 40, -41, -21, -116, 88, -92, -36, -10, 25, -52, 43, 42, -21, -83, -113, 77, 123, -62, 4, 89, 89, -70, 41, -106, 53, 84, -110, 53, -105, -19, 6, 5, -50, 44, 87, -107, 45, 115, -10, 6, 18, -100, 126, 93, -54, 4, -20, -68, -92, 40, -21, -8, -97, -11, 34, 20, 109, -68, 110, 29, -119, 94, -2, 110, -127, -124, 108, 5, 118, 92, 101, -66, -111, -44, -71, 62, 56, 41, -83, 23, -118, -56, 75, -115, -121, 124, 84, -125, -56, -42, -4, 126, 3, -93, 5, -61, 122, 44, 48, -80, 115, 31, 96, 0, 101, 0, -95, 84, -20, 60, 7, 89, 21, 1, -91, -28, 20, 34, 14, -88, 123, -29, 35, -109, 1, 39, 121, -74, 19, 111, -22, 66, -69, -6, -2, 114, -5, -40};
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
    msg.setTimeStamp(0.493907999681);
    msg.setSource(40866U);
    msg.setSourceEntity(60U);
    msg.setDestination(38243U);
    msg.setDestinationEntity(238U);
    msg.locale.assign("AGGTYVINXLLFDGMQQIEDDLPQMSYHOPWPJPKTRNWHOENKNKSJVLRKBZUBBUGKYAJIYFBCTOJZBWVKSGMRPVMOAOBXHEWJHCAOJDALQZSMOMYLG");
    const char tmp_msg_0[] = {84, -71, -33, -70, 81, -54, 125, 42, 98, 3, -46, 70, -126, 17, 34, -62, -23, -114, 42, -27, -14, -76, 120, -10, -25, 52, -125, 45, 117, 23, 51, -25, 65, 51};
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
    msg.setTimeStamp(0.643514930294);
    msg.setSource(63730U);
    msg.setSourceEntity(116U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.111283862267);
    msg.setSource(50118U);
    msg.setSourceEntity(17U);
    msg.setDestination(58295U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.0276858970594);
    msg.setSource(38701U);
    msg.setSourceEntity(68U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.150293507507);
    msg.setSource(62367U);
    msg.setSourceEntity(9U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(150U);
    msg.camid = 231U;
    msg.x = 55047U;
    msg.y = 36225U;

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
    msg.setTimeStamp(0.480340410659);
    msg.setSource(56700U);
    msg.setSourceEntity(1U);
    msg.setDestination(63107U);
    msg.setDestinationEntity(58U);
    msg.camid = 192U;
    msg.x = 54U;
    msg.y = 62146U;

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
    msg.setTimeStamp(0.97664354331);
    msg.setSource(2338U);
    msg.setSourceEntity(102U);
    msg.setDestination(18260U);
    msg.setDestinationEntity(172U);
    msg.camid = 125U;
    msg.x = 50088U;
    msg.y = 48778U;

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
    msg.setTimeStamp(0.706751682048);
    msg.setSource(5207U);
    msg.setSourceEntity(94U);
    msg.setDestination(21368U);
    msg.setDestinationEntity(6U);
    msg.camid = 162U;
    msg.x = 53803U;
    msg.y = 20652U;

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
    msg.setTimeStamp(0.0499262797342);
    msg.setSource(60349U);
    msg.setSourceEntity(188U);
    msg.setDestination(19124U);
    msg.setDestinationEntity(175U);
    msg.camid = 26U;
    msg.x = 61316U;
    msg.y = 6832U;

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
    msg.setTimeStamp(0.0578396426224);
    msg.setSource(3578U);
    msg.setSourceEntity(114U);
    msg.setDestination(27407U);
    msg.setDestinationEntity(8U);
    msg.camid = 18U;
    msg.x = 27368U;
    msg.y = 40192U;

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
    msg.setTimeStamp(0.498468096938);
    msg.setSource(45233U);
    msg.setSourceEntity(191U);
    msg.setDestination(60947U);
    msg.setDestinationEntity(249U);
    msg.tracking = 209U;
    msg.lat = 0.979942922899;
    msg.lon = 0.494226715017;
    msg.x = 0.0142128282641;
    msg.y = 0.205322666542;
    msg.z = 0.746641092987;

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
    msg.setTimeStamp(0.405833391759);
    msg.setSource(26294U);
    msg.setSourceEntity(33U);
    msg.setDestination(52222U);
    msg.setDestinationEntity(177U);
    msg.tracking = 55U;
    msg.lat = 0.154507661139;
    msg.lon = 0.171968192086;
    msg.x = 0.256781520746;
    msg.y = 0.139462154858;
    msg.z = 0.625695699895;

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
    msg.setTimeStamp(0.179978903994);
    msg.setSource(39174U);
    msg.setSourceEntity(76U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(142U);
    msg.tracking = 78U;
    msg.lat = 0.435943990539;
    msg.lon = 0.683346118207;
    msg.x = 0.484951433151;
    msg.y = 0.860098003157;
    msg.z = 0.46923470881;

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
    msg.setTimeStamp(0.998197416796);
    msg.setSource(59078U);
    msg.setSourceEntity(202U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(246U);
    msg.target.assign("YRCXVFDRMRCBGOYAKCXASBUTCEOFRIVOFFGQTMYZFXKZXJJYLUITATNBSSWDNQZEDDNHKFCKWXZQCKYPWANPJPZDBSRIENTOLPWNBYPFSOMSMIVGTLSUNIXYRZVIBEEHFNOVVFEEKKVHPTMAKLHGBMWUFKLIBNHYLWJQONSBRCOYULJPGPJRDRQWPCGABAUEMVUQWHCZKUJLZLQHTZLTHYXVAQSSWIDUPMHGWXCVGOZGQAXMDEQDJGDAIMOIJ");
    msg.lbearing = 0.00625374750535;
    msg.lelevation = 0.862164779337;
    msg.bearing = 0.116895077156;
    msg.elevation = 0.64454039735;
    msg.phi = 0.00236159651424;
    msg.theta = 0.198827114787;
    msg.psi = 0.875064581813;
    msg.accuracy = 0.483658124075;

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
    msg.setTimeStamp(0.587689318404);
    msg.setSource(27982U);
    msg.setSourceEntity(130U);
    msg.setDestination(17516U);
    msg.setDestinationEntity(35U);
    msg.target.assign("HXWBCLBENZQZMFVAFXSQUWFPOKQZPTTHHKZOWLSJJFYZKGGICWJMVOFTDZRSIDZUZ");
    msg.lbearing = 0.213274941296;
    msg.lelevation = 0.732168630104;
    msg.bearing = 0.574340975464;
    msg.elevation = 0.0179514334978;
    msg.phi = 0.226891974202;
    msg.theta = 0.32663113255;
    msg.psi = 0.283945972185;
    msg.accuracy = 0.993108089032;

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
    msg.setTimeStamp(0.706346836243);
    msg.setSource(36610U);
    msg.setSourceEntity(83U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(171U);
    msg.target.assign("BDPNPJLCRXGTJZBARROHJHLEFLLBKJGPYUZVEQXBYXOSUPWSDQVVZNVCYKADKGUSKVMNEIZVEJDDZWWFKTMNFYGMM");
    msg.lbearing = 0.908193761983;
    msg.lelevation = 0.548070795207;
    msg.bearing = 0.463679537682;
    msg.elevation = 0.530808724805;
    msg.phi = 0.907149568631;
    msg.theta = 0.990645389003;
    msg.psi = 0.677253834494;
    msg.accuracy = 0.145688388385;

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
    msg.setTimeStamp(0.745465734955);
    msg.setSource(50608U);
    msg.setSourceEntity(162U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(201U);
    msg.target.assign("FJFGFRIEUQSPBQQINLCHUGBEVHWIUXDMWQONSLUZCDMXBDNOVDOKJDZWJKYLDPBLTFSJJFTCZOAILSZXXRQOHRTEJAFCTUKFOGCTHSQBKOYQNDUIZPYHJVTAWIKZVHMPUSVMTOCGYRCBNRAYKGJINZEOCARQFROVTEVBGWCXBYKWXYKJHHYIERETQTZQUMZU");
    msg.x = 0.629391917258;
    msg.y = 0.501619223873;
    msg.z = 0.0432632332606;
    msg.n = 0.745693118471;
    msg.e = 0.680201642569;
    msg.d = 0.93507903892;
    msg.phi = 0.190250255769;
    msg.theta = 0.413294135528;
    msg.psi = 0.011702752019;
    msg.accuracy = 0.290057670253;

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
    msg.setTimeStamp(0.349553349709);
    msg.setSource(51360U);
    msg.setSourceEntity(15U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(95U);
    msg.target.assign("WGXKCBDQDVPTWTKRNQTRGBGPHYDBUCYLFDMUPRAUAFJWDVETQRLKMYIHFBYDKMGJJZTMFQSTOAY");
    msg.x = 0.016856963169;
    msg.y = 0.752783954031;
    msg.z = 0.398848758763;
    msg.n = 0.133999866253;
    msg.e = 0.543204162098;
    msg.d = 0.95852801605;
    msg.phi = 0.375123334204;
    msg.theta = 0.459243670861;
    msg.psi = 0.240718652181;
    msg.accuracy = 0.863476340149;

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
    msg.setTimeStamp(0.586134146534);
    msg.setSource(62672U);
    msg.setSourceEntity(222U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(60U);
    msg.target.assign("QKPJRXAMYACJKQEVRWJ");
    msg.x = 0.29153514957;
    msg.y = 0.637299796106;
    msg.z = 0.0455367344547;
    msg.n = 0.470404911148;
    msg.e = 0.936126050252;
    msg.d = 0.745721199275;
    msg.phi = 0.772194207253;
    msg.theta = 0.284913073388;
    msg.psi = 0.899783439096;
    msg.accuracy = 0.865006319739;

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
    msg.setTimeStamp(0.11988445122);
    msg.setSource(41978U);
    msg.setSourceEntity(93U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(246U);
    msg.target.assign("SARWLUCZWRUUHVTVXQQBAEHIPGDUNHANKSVCVPFRNYIOZVPJNOKEPLQXYVMFTHAZGYBSZCPUZEHZMIOOWWBGZMHNAYXBFAMMXGRDDISDTGHYNKIJJXBOLLABTRNMIRWJSGDQYGWUNXIKQFOIJVEPXJBNTEAVQERIKTVIMCVXTLCMODKWKYSEHCFZOJEYXEUPMBPHLFJGFKGQSFDLDEPOXBPUCSZWYOURQMZTWWCQULQAGFDY");
    msg.lat = 0.252014912736;
    msg.lon = 0.971091521922;
    msg.z_units = 153U;
    msg.z = 0.490436250637;
    msg.accuracy = 0.37020098177;

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
    msg.setTimeStamp(0.116072435286);
    msg.setSource(52116U);
    msg.setSourceEntity(23U);
    msg.setDestination(14881U);
    msg.setDestinationEntity(0U);
    msg.target.assign("JRPMYZFNMERYHBKVYXQKZEJZJNBGQVEFCROEJFTSNNRYPZBGJPCIKCBMIZXVWYHETZINJANJRBPMSXREVYHZSXUAZAWFVKUVAGJQCTEVTZACF");
    msg.lat = 0.327861068381;
    msg.lon = 0.576319807619;
    msg.z_units = 92U;
    msg.z = 0.595529040901;
    msg.accuracy = 0.800402423819;

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
    msg.setTimeStamp(0.500864609356);
    msg.setSource(15355U);
    msg.setSourceEntity(110U);
    msg.setDestination(44136U);
    msg.setDestinationEntity(97U);
    msg.target.assign("ZUSUNKDJQTSRZORUGDADXVHTPYLXGPYAZAUWOMXTUTCSKMDVVNB");
    msg.lat = 0.623983388338;
    msg.lon = 0.752214035896;
    msg.z_units = 92U;
    msg.z = 0.309630211777;
    msg.accuracy = 0.0868461691021;

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

  return test.getReturnValue();
}
