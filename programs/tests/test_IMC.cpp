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
    msg.setTimeStamp(0.11100550046787427);
    msg.setSource(43199U);
    msg.setSourceEntity(113U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(145U);
    msg.state = 96U;
    msg.flags = 59U;
    msg.description.assign("LEMCWHGZBVBKVSIKDYRMVWKHCDHWRNLCFFHALSTARAFPRCLYGYJSIEUJKYYLXACRUXYXPDTSWAXKCNFNQQNSZAIOWHJQGCNKLBQNGEUTGINVSMMQIEZAOPTSFOZSJMEHMHNBOPETADFGOXMUSUQIQFVTUVTDDXOQIHLJNYWOLJDXYWPFDEZIOSNERKBVQBGWWORXTBGZEJRJZHFUMPUVZZEIPVYDYBBVRCCHTAQPUJXC");

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
    msg.setTimeStamp(0.6186853358507711);
    msg.setSource(51433U);
    msg.setSourceEntity(217U);
    msg.setDestination(47138U);
    msg.setDestinationEntity(75U);
    msg.state = 52U;
    msg.flags = 87U;
    msg.description.assign("OOPRYGDRIWVRNLXWCLMKWDRQSQSZZBDZFFXPLZCTJFLOUURUXGFNSDKOUYTWHJHOKYSFVSBGRIMIVQTERNBDUEMKPJHYLVUWCNICUFPEMAEWBNCJXSL");

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
    msg.setTimeStamp(0.2066708501734108);
    msg.setSource(53136U);
    msg.setSourceEntity(212U);
    msg.setDestination(64806U);
    msg.setDestinationEntity(79U);
    msg.state = 95U;
    msg.flags = 17U;
    msg.description.assign("YAVYPPKOJOCKIDQYSXBEWCZTSSCFXDKQNWMGRTLWWJZLUBCRXHU");

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
    msg.setTimeStamp(0.6104677886649242);
    msg.setSource(23428U);
    msg.setSourceEntity(211U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.16716838149752777);
    msg.setSource(5446U);
    msg.setSourceEntity(210U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.5497809503878859);
    msg.setSource(10446U);
    msg.setSourceEntity(205U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.681972796671435);
    msg.setSource(13215U);
    msg.setSourceEntity(54U);
    msg.setDestination(55331U);
    msg.setDestinationEntity(82U);
    msg.id = 104U;
    msg.label.assign("BXLVXASTRWIPLMXZUEYDYHDGCJZYLDRPZQAQRGUXUDNJFUMSHWKWFDWOGTPKNEJBCGQMQSAREGEVXREFIMHDCFTHTILHYUVJWBICBMETDDSTYCNGBZUFPJSPVGOXPZQERBOMSKIVM");
    msg.component.assign("JIDCTSLROFFJMVCLHYKHRRYYQPGCODHBXWSNBRFSIBDNCEJWWWPMYKHAPDGOHWQUPPIIRJDFCXMXBEMYQCZXIHUUTLWUUFVWPJKPBBTMGDHWROPNKEAEIZBRVNUTVQIZTLUGBSJKZRMJQLZYDRKXJMIOJEVXPXQNHZDMKGNXYXLNGDAHLZSVHAUUQQVSGAONLXTOGTETAEYSZZYMVTGFCKILLFSWZBPOEICMACQEAETFG");
    msg.act_time = 47645U;
    msg.deact_time = 36655U;

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
    msg.setTimeStamp(0.41451577383920857);
    msg.setSource(32453U);
    msg.setSourceEntity(123U);
    msg.setDestination(17997U);
    msg.setDestinationEntity(32U);
    msg.id = 76U;
    msg.label.assign("FGIKSCGVSBDUUBGTZBTWFFNUZINDSWZZYZNITCFKBBKAMBQZRTMQOFPIXJGJPNFDGAOKEYLGJNLPMFLDLFQWUZHYDKSWMWTQYIYCANRRKLMXTAXARVOVVXEHUQQKRVCHDGSZCTGDSRUHSYUISMNUMXHOJWIRPJXJEHRKTHGHNJVESQOZMCEEELFDRUOBOWKQAIQIOPCDV");
    msg.component.assign("WXKMFACAXUJFYNUSJUQSCUALKEBBBVYUSSSPF");
    msg.act_time = 13701U;
    msg.deact_time = 30123U;

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
    msg.setTimeStamp(0.7656464528471134);
    msg.setSource(3223U);
    msg.setSourceEntity(202U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(10U);
    msg.id = 33U;
    msg.label.assign("SYTWUWHVMOCCOHSZLJQAIMEEWLRNYROUFNWB");
    msg.component.assign("VKGIADAYZUYYPUSFRUXJEVWSERYERISRUGSSDOCHLVWCRNOWQJ");
    msg.act_time = 25687U;
    msg.deact_time = 19323U;

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
    msg.setTimeStamp(0.6062315115476163);
    msg.setSource(55816U);
    msg.setSourceEntity(72U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(58U);
    msg.id = 204U;

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
    msg.setTimeStamp(0.22144421726383878);
    msg.setSource(9432U);
    msg.setSourceEntity(104U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(38U);
    msg.id = 242U;

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
    msg.setTimeStamp(0.1420579540389577);
    msg.setSource(32516U);
    msg.setSourceEntity(92U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(24U);
    msg.id = 184U;

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
    msg.setTimeStamp(0.7613084865102109);
    msg.setSource(42934U);
    msg.setSourceEntity(119U);
    msg.setDestination(35820U);
    msg.setDestinationEntity(143U);
    msg.op = 229U;
    msg.list.assign("IVVUNBLFWWPOMXJWQRKHNUSIGQEZRXOLVSXPAZXMLAJTGZKALEHKWBLCGOWWAXHUGNTTLDJPWZDEOFIPHPLYSHQGDGBJSARVSCKXGLVGSEMEKOCTENRMAHTIEZWMIWZBRCHNZUWSPOFNYSKJMCVQDJYURSYPBGKQIR");

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
    msg.setTimeStamp(0.010067456193308733);
    msg.setSource(54560U);
    msg.setSourceEntity(72U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(167U);
    msg.op = 17U;
    msg.list.assign("BRWJTIYFPIHWGOGIOYPJAFHRKFETXBFKJRWTDPEWJDKHZLOCYUDEAUMGEEXGNJMCNFQBRSVBCNKUHLDPJAXTSOUMLVSTZQCUAFINHSANXDSUBCAPJVZLQJAVDVRCNWSOBBGVLMYTQK");

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
    msg.setTimeStamp(0.6335696083772323);
    msg.setSource(42331U);
    msg.setSourceEntity(109U);
    msg.setDestination(35596U);
    msg.setDestinationEntity(33U);
    msg.op = 220U;
    msg.list.assign("FDZYYWIDLMVHGCQJNGEMADVHWYRJCTDBETNMVDPFLZFKVPOP");

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
    msg.setTimeStamp(0.1281291148142073);
    msg.setSource(45851U);
    msg.setSourceEntity(128U);
    msg.setDestination(54480U);
    msg.setDestinationEntity(72U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.7407957593799182);
    msg.setSource(26491U);
    msg.setSourceEntity(139U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(70U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.710308677814832);
    msg.setSource(691U);
    msg.setSourceEntity(167U);
    msg.setDestination(33587U);
    msg.setDestinationEntity(77U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.5416957458091515);
    msg.setSource(25475U);
    msg.setSourceEntity(247U);
    msg.setDestination(48715U);
    msg.setDestinationEntity(134U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.8210173895949031);
    msg.setSource(40703U);
    msg.setSourceEntity(121U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(106U);
    msg.value = 127U;

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
    msg.setTimeStamp(0.7020421059906152);
    msg.setSource(13268U);
    msg.setSourceEntity(77U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(140U);
    msg.value = 237U;

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
    msg.setTimeStamp(0.26611613353713015);
    msg.setSource(49870U);
    msg.setSourceEntity(33U);
    msg.setDestination(61897U);
    msg.setDestinationEntity(57U);
    msg.consumer.assign("ONPEGLPZNHMVYITZUDOCLDIHKMNIBTWELVRSAJFNLBMYZYGKMJVDGXAUONCLOXWSIDTFQFGKJBTAFYPSUQCFKECGURDRRWRYPLWKEPDINVMUBUIZPWSHDFUAQCNQJWSSWXYYAEMTCXTKJGKDDHZYPVIMHEJTYAEXSMHQSMGHGZZKJINSETCTOULVFXPBHRU");
    msg.message_id = 26238U;

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
    msg.setTimeStamp(0.2853573934859446);
    msg.setSource(63505U);
    msg.setSourceEntity(209U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(33U);
    msg.consumer.assign("OGJHSEFWBPFHQSFGJRPTXLSHKPPENWPMGQLMCJJEVVSXOEFSNLWDYEMNOUIKIJMZWKRQDSHPKLHVFBYWLYBIXJGCVPDKVVAQMIATQTPLWTGZUENIHUKZPZHYMCDYMZOGZXECUUKYHJKFRDBTBFAKOEZLUIHUNXWCSDYTGCVZTUQINGRLNRJRCOUWFTNWEDXIQJYPZKBYUTMFIVAANITXXOVQSWRDMODZOCAADABB");
    msg.message_id = 50069U;

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
    msg.setTimeStamp(0.7605572591737055);
    msg.setSource(34450U);
    msg.setSourceEntity(79U);
    msg.setDestination(5901U);
    msg.setDestinationEntity(107U);
    msg.consumer.assign("TACMLBGLWMLNPZZNFFBQBSYNONHSUSUTOYGNDEGSRRRLDIJTBVFYEIHYEATHQXUMOKLBVSJKOQSJEJLGJRHCCPVCGVSWWHNXDCOCBXKETRZMZKCMCDXHDFJHBFXPFTEYMEWXOBWUYNWGTCGTRXDAXAMQIBCKDFOFWWAMXRVREISQGAWMHODJRVAQVPYAKGZYKHZBFSPPGVKLTOUQENIILTQHIDJUFMRLZVOIIKJAPZ");
    msg.message_id = 43559U;

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
    msg.setTimeStamp(0.7747560556221655);
    msg.setSource(56626U);
    msg.setSourceEntity(8U);
    msg.setDestination(5104U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.9830477288875774);
    msg.setSource(65184U);
    msg.setSourceEntity(205U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.948695834900905);
    msg.setSource(49824U);
    msg.setSourceEntity(176U);
    msg.setDestination(57679U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.17617809508183535);
    msg.setSource(58764U);
    msg.setSourceEntity(88U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(178U);
    msg.section.assign("IGIOXMVHIJTTPWSAOCDBJVSYBBMPDUVSGFZUEKLNNDTQJUCNZNKZKXVTRYIBSXARIGQXKUSUPKGZADYEDETPEWIUTKGBLMYOUXKGHPEFYJOLBDUMQSXWYZFVNZRYHDHEQTGILCACDCB");
    msg.param.assign("UUWVTOSCMGGALXFNZRTJQEPVKRYPWGHUXPLPEUQSGAOMZBECQRFZNKLUWXLFGQHYHTRBCKAOUOVWWNZNCKBFRJAJIOFDDQTDNOSCKDAWTMJKWCVIYOLVJNTSVEEUGTZDYPPKKPTZGMMCZRMAFYJXNXQNZQITEGZRJBVJIZAAXXHISXPFUVLKYGIHLBQYVYHHFCMFHO");
    msg.value.assign("SYGFQDYZLGTRCXIIVKNOBRZGTDZZEGIIUJGOQGJHGBTWTAMFIZXFWUCMKBAHPEKJHYMGWTRELMZFGQBYMTMSNRQSNXDYWVFUSTBLARFNKHIVXYRAXYCTADIJLPOMZEOUCDSWVSKXIQBEOWEPFURNUSBDFETVPQYSCXHKQSNJZLXDPBWPDDNUAOCEIHAQFNELOQLVVJUXOPNBVJBRIYPHWCLJWOLZNRCJCKZKLRTWAYMAEUHHCHMVKJUQGMFP");

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
    msg.setTimeStamp(0.6336225370911156);
    msg.setSource(52118U);
    msg.setSourceEntity(101U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(183U);
    msg.section.assign("KJLXNDWHMVWGTFCKJWUNVOEFRAZHAAIESYFMUFFNHMDJRRNOOVPRCPXHRMTGILJSOXRDFTVQSIHBKGPMISLURNTKFFCMEHBAIWSTELMCQYYNDJUAVMEBPQSRNGHPOJZWZBDPCURGIHBJQNHOKDZZSQBXFGGLLTECYGCWWLBDYUVN");
    msg.param.assign("DNGHJYPDSKLJVXMTNZBMOAKDRJFDVGXSJWMXDHIRWQTVDHCBCOGFKBACVSALSWYWNUTWYJJEEPSANDRMCUUIPESVHWVFEFOYQQYENPCTMBYNXQFCHNGIQWOYAQUABTJAFKDZOEROWOZMA");
    msg.value.assign("EPSSLAGVGLYZGAGGAGTTSHASRWRRGSEBQOFLVANMFQDAJWNIVQFDTTCWRWUEWXQEWCSSUHVHEODMUXZZZOHBBQZTPYHOWQNCAQAFDPLJHLCJHDENPXNBACNLXNPVBIRVIVTLKWIELFUNUBRBSBIZVUYJZXYXFHUXGRORGTADJJIVPXNPUCNFTLOYMOJEXRVDIOFTSUILCIYHYYOZMFQYJJKDCWEKBMSKCKQXMHQ");

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
    msg.setTimeStamp(0.41666092114543796);
    msg.setSource(31300U);
    msg.setSourceEntity(221U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(234U);
    msg.section.assign("NTIFEBEWXAJAIXPIOONHDYOHQUWMDALNUUDIPVHCMCGMLSKZSZSKIUYZKPOETZLDZFCBBYYOMRNZWTGMAJXOUCBTBZIMVKXNSJAQGYSQGXGNVTLUFLEWFDKURYIPHQWQHUNPGZZOGWVHUVRQWKJRSCBGZCRETRJOCPHMJTPEBNDTTJCVQBIABEGTXSDLAQPHNXFFRLEVJHFRCVYMFSDQRADRKAFSOEW");
    msg.param.assign("GDMCFJXZXEWAFACBUNSQIAPSEZPPVIHOINYDPJWSYSRHEQMJMTHKFXHYPOLKLMVKNDPAORRBAKVWQGKDLZVFDGXEVRGOTBUIEFWIOCULQDTRABFQJCWFTHVSCKEKZTNUTPMNRXZBJNHMHXYGBOSDSGQACWSOJSNAVUMFDERWMDEZIMKGXCLWQJIJLYWHVBQSGEUHLOXPLEGYAZRLZBPUILYWJCZBZKVYFXGOCDINJTNU");
    msg.value.assign("NHJNQJGESBOWKVRZNLGGHFTKALSVZGCGTAVHZWMYRHCEMBGTRUCCSBYZGLLFLGSWSNIJDJBVBZQIHXXHAWTPZVHFIKUIUIOKJBOLOJEEAQMNAQCKINWACFEKKCSEKQREHUOJNDYZPQLAFDMVULMRPQHTRQDXYDBZA");

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
    msg.setTimeStamp(0.734783943843339);
    msg.setSource(38377U);
    msg.setSourceEntity(15U);
    msg.setDestination(26927U);
    msg.setDestinationEntity(25U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.27696614518887597);
    msg.setSource(60686U);
    msg.setSourceEntity(193U);
    msg.setDestination(13876U);
    msg.setDestinationEntity(8U);
    msg.op = 122U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("NGINAOIJKUVAJWNNETDKLYIAWVHWUGUSGIFTLSKTKZYPEIBYDFOPBUQUEARUTCZUESQADCRYYAOXRKMCNYGZPFZGDKWVMJDSFQPBOVFFVLMLCDCZXYMTQRQOQCHMKDOHWEBGSBCRXHOBLVGTIACHZHTVJHEH");
    tmp_msg_0.param.assign("VRVRNFHTNICAKNLCIEYONYTPTBPVXKXQHMLQXVWOEGDJXDPJKKOCULKGVQMWBACJXUGHGNINIHYDHRQBMJSKQHJSDCVZALQWCGHVTBYIFGFCUZDYMVLKXFUZTXBGVJZIPACGPCFVLYRRBWTSHAJAXMPLPPKYRJQSLNQREOUNYZDZHEALUBPYTNTWWOFOMESIUQFUZMEOCWLBZKFOAUHFRSEAMWX");
    tmp_msg_0.value.assign("YIGQLEHSMTWFOZPDW");
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
    msg.setTimeStamp(0.2886857589251166);
    msg.setSource(64656U);
    msg.setSourceEntity(139U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(102U);
    msg.op = 77U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FXXNFSQVQIGXJRRIEJRKBLSFUNGEREQZSVCVLVDQNIBWUBFFOIHZYUGOPGVSVMVDTBOQCOKEPZXEXELOWXPAJWFKWCNH");
    tmp_msg_0.param.assign("QZNXEICPPJXKOXOSOVWZJFESJLZSXZVKRDDXCPBPUDQITTLVMXCGIAGQJSUQCXPMZRYUQKGSFNYGDLPVNASAESEVEIHYVWQKFPOTNPMLL");
    tmp_msg_0.value.assign("HDNRRMECDFZOWFOVYIMRWFIGCKENOBXZPNPUGCBRCBOMEJWHNDETITHYUSZJEVNMGVTJRFQASCWWHUQOJ");
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
    msg.setTimeStamp(0.39795006965134916);
    msg.setSource(34931U);
    msg.setSourceEntity(47U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(224U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.17655876491263678);
    msg.setSource(60747U);
    msg.setSourceEntity(136U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(133U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.5326292896692733);
    msg.setSource(51307U);
    msg.setSourceEntity(23U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(87U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.8229359261964101);
    msg.setSource(58365U);
    msg.setSourceEntity(25U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(174U);
    msg.total_steps = 116U;
    msg.step_number = 52U;
    msg.step.assign("MEOVBZKSLZSFSUDAQMOLYQBJGPYCOOYMRYQRPKANWSDWAXIDGNFJTAXEWTHPVKXXKFBXUOGIUQZYMLQQIIYOVRNTDTJSXBYZCGUSHNERUPEAPFGT");
    msg.flags = 87U;

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
    msg.setTimeStamp(0.94223414076041);
    msg.setSource(54616U);
    msg.setSourceEntity(11U);
    msg.setDestination(29854U);
    msg.setDestinationEntity(143U);
    msg.total_steps = 216U;
    msg.step_number = 131U;
    msg.step.assign("XRAPTPBOXNYKYAUBPFXBSVXHUAAWQVTE");
    msg.flags = 241U;

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
    msg.setTimeStamp(0.0010674314239698113);
    msg.setSource(31870U);
    msg.setSourceEntity(241U);
    msg.setDestination(13806U);
    msg.setDestinationEntity(137U);
    msg.total_steps = 135U;
    msg.step_number = 197U;
    msg.step.assign("AOIYLFNYOUGSJBSESSNXRKRNWVAGHADWVWYHOLAAMZCAPFIKVBEUSOZNHXPSTMRHSDYKSDZXUOQTIGILZRRKHIOMZTXZPQGCTXUNPYGLRKMMETHNFDCFWHCDCVDYIMDBAVJCRTLMPGKXIVHMLWIDJPQBWTWWEUNKZWRGLJZOKBKRCIYNQLUECEHF");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.6623832972250082);
    msg.setSource(34211U);
    msg.setSourceEntity(82U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(199U);
    msg.state = 139U;
    msg.error.assign("QSOSPMJQEWIWGKS");

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
    msg.setTimeStamp(0.13982257832574507);
    msg.setSource(22635U);
    msg.setSourceEntity(191U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(121U);
    msg.state = 132U;
    msg.error.assign("FKDPXGGDBCLXJAFWPPUCFXBZXYPYZTWYCLMJVFNENZJIQGLSOXIUKUT");

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
    msg.setTimeStamp(0.5988260707233227);
    msg.setSource(6749U);
    msg.setSourceEntity(65U);
    msg.setDestination(12523U);
    msg.setDestinationEntity(220U);
    msg.state = 150U;
    msg.error.assign("LBEVIHFIBLVOWHALHSARMHVSUUGNFKWHIVNLY");

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
    msg.setTimeStamp(0.5689291132400318);
    msg.setSource(32564U);
    msg.setSourceEntity(41U);
    msg.setDestination(25741U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.825464523742279);
    msg.setSource(3946U);
    msg.setSourceEntity(236U);
    msg.setDestination(33747U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.38679518914423006);
    msg.setSource(42144U);
    msg.setSourceEntity(53U);
    msg.setDestination(20164U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.9480201993984723);
    msg.setSource(23303U);
    msg.setSourceEntity(33U);
    msg.setDestination(2061U);
    msg.setDestinationEntity(48U);
    msg.op = 137U;
    msg.speed_min = 0.05437570579301443;
    msg.speed_max = 0.3836756944620654;
    msg.long_accel = 0.15237928137485468;
    msg.alt_max_msl = 0.17087914379054514;
    msg.dive_fraction_max = 0.6514593990658228;
    msg.climb_fraction_max = 0.5902795120447933;
    msg.bank_max = 0.2770097217351579;
    msg.p_max = 0.8398189001330839;
    msg.pitch_min = 0.7331163897144226;
    msg.pitch_max = 0.11521961890829335;
    msg.q_max = 0.007831380762688633;
    msg.g_min = 0.39104943437624473;
    msg.g_max = 0.8993047192015954;
    msg.g_lat_max = 0.14295759327755087;
    msg.rpm_min = 0.7039120284499576;
    msg.rpm_max = 0.4579905408290079;
    msg.rpm_rate_max = 0.5517427169919664;

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
    msg.setTimeStamp(0.2445213296264488);
    msg.setSource(19570U);
    msg.setSourceEntity(170U);
    msg.setDestination(37047U);
    msg.setDestinationEntity(2U);
    msg.op = 121U;
    msg.speed_min = 0.8684580003873271;
    msg.speed_max = 0.08284414390914074;
    msg.long_accel = 0.16740934989902456;
    msg.alt_max_msl = 0.2504250630324778;
    msg.dive_fraction_max = 0.5750185725375584;
    msg.climb_fraction_max = 0.2631858993424475;
    msg.bank_max = 0.8525779967467974;
    msg.p_max = 0.3870560907505358;
    msg.pitch_min = 0.43775014017529357;
    msg.pitch_max = 0.2563960630930997;
    msg.q_max = 0.3576309956110749;
    msg.g_min = 0.42528212484930505;
    msg.g_max = 0.5284602549588108;
    msg.g_lat_max = 0.20323090049326253;
    msg.rpm_min = 0.6024664890526984;
    msg.rpm_max = 0.5006164186346337;
    msg.rpm_rate_max = 0.8128175601086729;

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
    msg.setTimeStamp(0.5858272244083264);
    msg.setSource(47032U);
    msg.setSourceEntity(192U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(199U);
    msg.op = 179U;
    msg.speed_min = 0.9249695070356481;
    msg.speed_max = 0.8196515819210289;
    msg.long_accel = 0.1693424820627475;
    msg.alt_max_msl = 0.14615290558978056;
    msg.dive_fraction_max = 0.5309510087692043;
    msg.climb_fraction_max = 0.3419997206661147;
    msg.bank_max = 0.7905633416235707;
    msg.p_max = 0.047717230415129874;
    msg.pitch_min = 0.36339717996888665;
    msg.pitch_max = 0.9704436855239137;
    msg.q_max = 0.12653454353310223;
    msg.g_min = 0.25433889075305993;
    msg.g_max = 0.2857307335403463;
    msg.g_lat_max = 0.023907630619509623;
    msg.rpm_min = 0.5706585023276903;
    msg.rpm_max = 0.9921208298936779;
    msg.rpm_rate_max = 0.03372157202033177;

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
    msg.setTimeStamp(0.3725387010182962);
    msg.setSource(8408U);
    msg.setSourceEntity(59U);
    msg.setDestination(44882U);
    msg.setDestinationEntity(84U);
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DUAAFMYBTDZFMYCPXNLOOUDTFENXRCKDSPYFEMGJDFLCYUNHJKULAKBCNIVLRGGSOGPKZOQIKAZJKJQPVCWPGQRKIOXTEWPJZRAAFTSJIUFHDVMCRWPRLYVIFTYWJHKYRHUIGMWTSIBPWLUXXLVAZATCYMIOJDELSKDBEXXEHAISBEXYRHBGUEEWHTWNL");
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
    msg.setTimeStamp(0.75716506295262);
    msg.setSource(50390U);
    msg.setSourceEntity(213U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(26U);
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.6129483459195945);
    msg.setSource(27511U);
    msg.setSourceEntity(119U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.3127201777439008);
    msg.setSource(44267U);
    msg.setSourceEntity(165U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.7045032244396702;
    msg.lon = 0.832184222968936;
    msg.height = 0.7699298972084392;
    msg.x = 0.3687087980546191;
    msg.y = 0.3059670225505955;
    msg.z = 0.05617787320381684;
    msg.phi = 0.3569142313193777;
    msg.theta = 0.7802753538425585;
    msg.psi = 0.4781084183118359;
    msg.u = 0.950420711365907;
    msg.v = 0.7633182014932196;
    msg.w = 0.6392376987765638;
    msg.p = 0.20603069673470553;
    msg.q = 0.655384221913322;
    msg.r = 0.522392666833092;
    msg.svx = 0.589929661942775;
    msg.svy = 0.874221327951785;
    msg.svz = 0.16373023894458116;

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
    msg.setTimeStamp(0.34760822798707436);
    msg.setSource(19691U);
    msg.setSourceEntity(224U);
    msg.setDestination(38658U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.5542894248626921;
    msg.lon = 0.3599338634511692;
    msg.height = 0.4829479018251611;
    msg.x = 0.16142202429284014;
    msg.y = 0.5555351311544058;
    msg.z = 0.44230719570424404;
    msg.phi = 0.13913652015939915;
    msg.theta = 0.37727982872680843;
    msg.psi = 0.9767653550329104;
    msg.u = 0.3805905842951991;
    msg.v = 0.24862384331562792;
    msg.w = 0.7511648238899348;
    msg.p = 0.22318297480212335;
    msg.q = 0.4108916954031908;
    msg.r = 0.5367861792091521;
    msg.svx = 0.1919258908933862;
    msg.svy = 0.46319574186239154;
    msg.svz = 0.8459327588419943;

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
    msg.setTimeStamp(0.8421825302762665);
    msg.setSource(48160U);
    msg.setSourceEntity(192U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.8527244109094885;
    msg.lon = 0.7849723106452786;
    msg.height = 0.28884978517648163;
    msg.x = 0.5352619071272081;
    msg.y = 0.7949156606235385;
    msg.z = 0.6532967921324513;
    msg.phi = 0.17993464036158513;
    msg.theta = 0.40279921963906373;
    msg.psi = 0.5774974808003063;
    msg.u = 0.08295173854214133;
    msg.v = 0.8090028049786256;
    msg.w = 0.5454825043166553;
    msg.p = 0.7657223662794393;
    msg.q = 0.2506598767994057;
    msg.r = 0.7375186964224294;
    msg.svx = 0.7986627168588758;
    msg.svy = 0.20831139926308362;
    msg.svz = 0.09815568288392207;

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
    msg.setTimeStamp(0.6032876637996262);
    msg.setSource(18737U);
    msg.setSourceEntity(162U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(250U);
    msg.op = 97U;
    msg.entities.assign("WEJJWDYRQLTNHRSGVVLCOUAEELUAKTGGJNFTMXQNUEQIRUDNVIHVCKAANXNKSFDGQPZFIRRVTCDJSRMXTXLXAKHQCCUGGPCXBATAZPIWOKRBDZIBKCGUXAQDXOPZOBKBYSFVOMZSHPKQDVOEBCIUECZXOSERJWMNFMGFGPHLWYLUHBSYSZTSHZMPPTTJHYLLEBYZIYEFQCWZBXYOVMULFDRSMJOJOAWWIFDTPWRWNPVJIABYFMLNMGKUYHIKE");

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
    msg.setTimeStamp(0.8028900104842296);
    msg.setSource(35599U);
    msg.setSourceEntity(44U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(241U);
    msg.op = 221U;
    msg.entities.assign("JSMSGAHTKYTDXUXZHIWEJPDBZWLEIZKFSCSQMNOPZGHGZMMRIKNFVTBOJZANHCPSXHEIRTFJDGPONNEMKRCUAVIYLWLCFEOXHIBTAARYMFOJJQWQTPRKCXLJFPDJYLWGSUBGWYUTUVVCMNEFGAKUSIYWRQEFOBZOAIJYNPKMQTL");

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
    msg.setTimeStamp(0.8463801490365807);
    msg.setSource(27192U);
    msg.setSourceEntity(174U);
    msg.setDestination(13371U);
    msg.setDestinationEntity(207U);
    msg.op = 38U;
    msg.entities.assign("PBYKNWCQHQBOSODWQKXWTGSAXJHISUNIJTVATPOIPPULAFFSDQQEKMFZFLSXNQXESDCLQSZLYFORPYNDGBRPOYEBTILKBUFMTNLRPJSYEZTKRIGDBJIXZOMYVXZMXKSEUPAGZJYRCCJPUMEFOWILTVAQWUWCJMYJV");

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
    msg.setTimeStamp(0.8281124781387004);
    msg.setSource(26650U);
    msg.setSourceEntity(128U);
    msg.setDestination(50757U);
    msg.setDestinationEntity(19U);
    msg.type = 163U;
    msg.speed = 19309U;
    const char tmp_msg_0[] = {11, 10, -74, 17, 72, 97, -107, 12, -72, 85, -108, -78, -29, 113, 58, -30, 115, 100, -87, -70, 60, -90, 22, 73, -110, -121, -18, 12, 17, 0, -6, 0, -56, -5, -96, 106, -9, 101, -42, 55, 0, -42, 31, -25, -60, -112, 7, 16, -126, -71, -66, -24, 53, -118, 109, -4, -18, 15, -65, -106, 115, 39, -115, -125, 26, -17, -57, -87, 66, -125, 126, -68, 20, 90, -94, 61, -7, -37, -58, -28, 17, -66, 33, -55, 96, 85, 15, 123, 121, 87, 122, 37, -43, 105, -109, -18, 39, 16, -40, 91, -29, -8, 96, -107, 65, 77, 55, 32, 91, 53, 9, 115, -55, 65, -97, -102, 0, 115, 84, -123, -3, 20, 67, 84, -49, 57, 22, 95, -44, 90, 90, -115, 105, -61, -108, -96, -18, 96, 39, -21, 87, -118, -52, -67, -111, -114, -44, 84, 45, 49, 46, 14, 7, 43, -10, -31, 2, 19, 38};
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
    msg.setTimeStamp(0.18457915202448016);
    msg.setSource(27439U);
    msg.setSourceEntity(103U);
    msg.setDestination(60062U);
    msg.setDestinationEntity(254U);
    msg.type = 156U;
    msg.speed = 59164U;
    const char tmp_msg_0[] = {11, 0, -71, 70, 46, -112, 44, -119, 118, 2, -74, 114, 90, 43, -59, -30, -12, -115, -37, -89, 115, 6, 11};
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
    msg.setTimeStamp(0.723437553378176);
    msg.setSource(51276U);
    msg.setSourceEntity(218U);
    msg.setDestination(53802U);
    msg.setDestinationEntity(20U);
    msg.type = 191U;
    msg.speed = 9163U;
    const char tmp_msg_0[] = {123, -98, -9, -49, -9, -81, 23, 88, -20, 92, -105, 60, 42, 35, 5, 49, -126, 77, -49, -58, 113, -120, 76, -50, -111, -56, 35, -48, 86, -112, 27, 115, 25, 93, 4, 108, 77, 24, -14, -5, 94, -55, 2, 14, -108};
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
    msg.setTimeStamp(0.2586592269733107);
    msg.setSource(58115U);
    msg.setSourceEntity(192U);
    msg.setDestination(24783U);
    msg.setDestinationEntity(62U);
    msg.op = 140U;
    msg.tas2acc_pgain = 0.8505397727072672;
    msg.bank2p_pgain = 0.20882309810156952;

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
    msg.setTimeStamp(0.46047648396302276);
    msg.setSource(23655U);
    msg.setSourceEntity(121U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(243U);
    msg.op = 200U;
    msg.tas2acc_pgain = 0.5673315109584844;
    msg.bank2p_pgain = 0.5521658290899282;

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
    msg.setTimeStamp(0.8829954172346791);
    msg.setSource(13812U);
    msg.setSourceEntity(59U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(206U);
    msg.op = 103U;
    msg.tas2acc_pgain = 0.2416630111153365;
    msg.bank2p_pgain = 0.12388534178598776;

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
    msg.setTimeStamp(0.31715044350957);
    msg.setSource(5687U);
    msg.setSourceEntity(208U);
    msg.setDestination(62733U);
    msg.setDestinationEntity(202U);
    msg.available = 1655501093U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.3772904157884941);
    msg.setSource(22188U);
    msg.setSourceEntity(222U);
    msg.setDestination(3821U);
    msg.setDestinationEntity(152U);
    msg.available = 1620055719U;
    msg.value = 235U;

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
    msg.setTimeStamp(0.6384585058733252);
    msg.setSource(18012U);
    msg.setSourceEntity(139U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(63U);
    msg.available = 4000829209U;
    msg.value = 240U;

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
    msg.setTimeStamp(0.5447056843693081);
    msg.setSource(46581U);
    msg.setSourceEntity(230U);
    msg.setDestination(43798U);
    msg.setDestinationEntity(252U);
    msg.op = 191U;
    msg.snapshot.assign("WULTXVREPECKZPLQFDNMMXNALRGPYDAUYRIUROGTNRONXHJLNIJZUOBHOSAMBSMAFOKDVYXWBFABONXHPBPHEIWRQOTTIHYSHEAZHCBRRKCCPAWWDTVSATLCUFUJVUZOYPODYTPQQTWPEWSJFAERVNSMMDWQGYCZMJCUAOIXCNFLGBEJLTLKVHBECZ");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("BUUUCEZCBZFZBNJQQIBFICFXSUGRCCXDKRPFOHAPIPHPKH");
    tmp_msg_0.state = 42U;
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
    msg.setTimeStamp(0.005495343565790289);
    msg.setSource(30564U);
    msg.setSourceEntity(61U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(220U);
    msg.op = 150U;
    msg.snapshot.assign("LBDVIZTGWGIFQXQQETBTQPEXJGGCPDGFKNOKCBIUNLFEPISAWKQDSIXKMUDSHAZQAYJVHRRYBYOQDMQOJEGOTZNERUZIZEWRYDTWCXBEFRILCNUVZOHNSJZQTXSYUXABDOHPRUMSTOFHLKEQVLWJUMUIX");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.6237259787882979;
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
    msg.setTimeStamp(0.11205532856625045);
    msg.setSource(6461U);
    msg.setSourceEntity(16U);
    msg.setDestination(55895U);
    msg.setDestinationEntity(105U);
    msg.op = 41U;
    msg.snapshot.assign("BISTOLJEAZCZNNKCOPLSWHFODPKBSCIJOMPYPAFFZYYCMQNBRBVDXVAVQLLDATNNVASQJDHAMWQHQBFUMYIBHBTYVVEEWFGSKPTZYOEDTJUDIJSBNMEZFXUICGUBHSZLMT");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2664297379U;
    tmp_msg_0.start_lat = 0.2956151913403887;
    tmp_msg_0.start_lon = 0.05678700664539349;
    tmp_msg_0.start_z = 0.15631674305525822;
    tmp_msg_0.start_z_units = 147U;
    tmp_msg_0.end_lat = 0.03145049239716591;
    tmp_msg_0.end_lon = 0.7343082340311632;
    tmp_msg_0.end_z = 0.09006001039732514;
    tmp_msg_0.end_z_units = 24U;
    tmp_msg_0.speed = 0.9471518614917024;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.lradius = 0.9103110244528423;
    tmp_msg_0.flags = 15U;
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
    msg.setTimeStamp(0.13757534456223341);
    msg.setSource(35441U);
    msg.setSourceEntity(216U);
    msg.setDestination(48071U);
    msg.setDestinationEntity(24U);
    msg.op = 247U;
    msg.name.assign("TZRTFLYOHOSCPPUFBVSMIAFCLSVRRNOZLPIRKJXERSPMUJEANCCZFNPIKAJBBYMQWTABBGBWHGJXTZRVNJRABOTDHKBAAZZNLRWOIGXFOPUUDHKGOFJZSXEOVYHEQXWDWJKEGMEQKLPUVKHXKIQVNGSANYYXZDNKHDSQVYFVIMSCHLZAEGEJOVNKCBSPHTFCXTGCOZATMG");

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
    msg.setTimeStamp(0.382319004463874);
    msg.setSource(3036U);
    msg.setSourceEntity(191U);
    msg.setDestination(34806U);
    msg.setDestinationEntity(174U);
    msg.op = 216U;
    msg.name.assign("XKDXKXSRNGIYRGFDZFAANODPWVQRTEZKKWKDCYASPXPKALGPUHQVOWTQLEXSMCBJOUNHYPDDTSRHHWDGSCYMGDHVQLXOKPJJNTIQIQCBXTILTEXTMHYNOWGCLKELFAMUIVFWSZZFQOECZTZRNAHVOHLGIJOXUFNNCCJKZYMEBEIVRFOBWUVCEJZSQSNRJLWYGBWPRB");

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
    msg.setTimeStamp(0.9400219620999082);
    msg.setSource(9428U);
    msg.setSourceEntity(145U);
    msg.setDestination(49511U);
    msg.setDestinationEntity(183U);
    msg.op = 168U;
    msg.name.assign("ODOASMXEHGHZLHBQXHRSQDCILUOMBXFCARQTBNIL");

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
    msg.setTimeStamp(0.04400885327054216);
    msg.setSource(56486U);
    msg.setSourceEntity(146U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(73U);
    msg.type = 18U;
    msg.htime = 0.8629271870299778;
    msg.context.assign("QRLFKRROBMLALIQXGOOFVDVBJCTBXMTAWMUZPMWCCZXECMNUAAJAKFJDZBYXESPBLWHHSUNWOLQGYFPVYUQYDIQGWEZFILCQNJNKDCABWWHNSECROSJEEXINBZIPMRQGYESUMCOADTMBFETFBSLESVNUJWGQXXRTKYRJYHODIRYTNOUXDHBUVNCKYXTVGDKIQVDIALGRVJHKUNKTSTPPGHQKMZXCJEZLWLGAOKJZFHISFTPUFGHHA");
    msg.text.assign("FVKQPJJMZASSVZPBLCCMYLTGFBTSCIBCWEKUXWDOFGOEZITXASGCLDUVBBSKQAYYNTUMJWDPNRY");

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
    msg.setTimeStamp(0.4909467558098143);
    msg.setSource(35988U);
    msg.setSourceEntity(65U);
    msg.setDestination(56588U);
    msg.setDestinationEntity(224U);
    msg.type = 151U;
    msg.htime = 0.9639547321708264;
    msg.context.assign("QFXLIGBUFHFFVIESDQZVCDSIZIBNWNQCSADFYNNEJNRKKVZLWWKUPNMKKMPHGUMRMQREJCLPWEOXAVZIRXF");
    msg.text.assign("LLFHPVXHYCSYNPOFFZWAZMUWVMIEMLRCLXQKXTQACDIVXZYDYUAVIBFTCNIWITBPX");

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
    msg.setTimeStamp(0.014125638478045488);
    msg.setSource(33464U);
    msg.setSourceEntity(41U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(155U);
    msg.type = 87U;
    msg.htime = 0.45326716209834306;
    msg.context.assign("NHQPCXTYLMETKSJKWNSNHYPJOEFTFKGOIUPLMVXTBIAK");
    msg.text.assign("TBVZECWYXUFUPRQIGCKOBWGSNOWAHDJHRVZDGQMCPUKUYUNACBBPQBUTDVJLMWCRYDKFREXETSTCPPDDRKBAAETSZHKGYNIXJGJYGHZLIJTZHOLQQRZVJDHCIFOOEMJPMABYDWFAGUWQKXELAAVLLQBNMZIEFBHIVOSITXSFBGFMCATUPWIYQVTOWMQNYXIXNJHNEE");

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
    msg.setTimeStamp(0.7236845690665411);
    msg.setSource(48695U);
    msg.setSourceEntity(248U);
    msg.setDestination(56775U);
    msg.setDestinationEntity(46U);
    msg.command = 27U;
    msg.htime = 0.6205868465783969;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.htime = 0.3842410001797908;
    tmp_msg_0.context.assign("LBGLFHPLLDRNNMZIDBGTKKQVYSWXPQFPXSKLKIHGBYMPFVVJUHWHZYNIRUHOWRPPIMXZOAAXUGAOEYFHSMREYYWTFBCAMTJIMKIOEZJQWKOVJOTQQRVVGIXEOGRIBEZJUCFUCNRHOAQTVCZDYAMWDSCNKFHSGWNDJEJLSQSFXNTLTAAAGIVSPXPBZALTUHCRUWVUMUYKCUSDQNI");
    tmp_msg_0.text.assign("YNLYPBRMKADOGAWRKURSJFFEDSHZNJFKTMBLBVLHTAWZIFTEDMCIWKYJGMELIDXDXMJORQINWLXQNCSEPHVSIWTCIRGOBOXEYIVWRZUNVYJUNODVUPSQHCMWFAWIQFLATEMRSPZTVZYAGPDGFAUTLUBVOIYBXKWDXUPHPQGGHCHAXKKQBJKOEYSUZIK");
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
    msg.setTimeStamp(0.11683102361116116);
    msg.setSource(14046U);
    msg.setSourceEntity(88U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(244U);
    msg.command = 53U;
    msg.htime = 0.9291365210510906;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 202U;
    tmp_msg_0.htime = 0.9712448715306334;
    tmp_msg_0.context.assign("KZADRARMJAMOYCVIZOZFNQUASYCOKGVFXFVFIGHYKTIPGAGZDULGHBSDFSOQJMCQDOGYLTJXYWXBKKVQEJVRABVTZQJOGKKRHLXSMQNCTHSWWJYPUAAZPDGRBHSINAWUDENVKPXELTWHBTEBXWIPECDCPWNDGINWLSFUMHOCTUKSBEUXMQR");
    tmp_msg_0.text.assign("AFVKGGAYWEDOQJOOWHWJEDUPGFBLYCEJZNPKQSZZPVTDIFOUXQYCDIKHIMNOXDJCPRRHBQLOBVLWAMTFGNLKAGLPKQUKPPLMBUHNOTWIPCKBFXPHDZDX");
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
    msg.setTimeStamp(0.9102828878282527);
    msg.setSource(8425U);
    msg.setSourceEntity(165U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(203U);
    msg.command = 131U;
    msg.htime = 0.16675864985266065;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 173U;
    tmp_msg_0.htime = 0.6579198782548706;
    tmp_msg_0.context.assign("JFGULYLOIXETJCQGHDYZXGHNPFEZJRBTYDZQBUOAJMYGNXMWSGNAWCOCZLMEIKNWFBJIOBROTHTPLOKOWBJASDGTOFAEACMHXPMUUPUWOKHVBJFNLIDCDNRYGGAVYVIBBQTUIRCOPMAZXPXEUJDHTQVHNATUSDBQKRIBANVSXGQLYZKWWCHQLRSMKKXDSEKQPWQSWYVR");
    tmp_msg_0.text.assign("WKENEXFRDKBXMQIXSON");
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
    msg.setTimeStamp(0.4952714405404266);
    msg.setSource(6303U);
    msg.setSourceEntity(213U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(185U);
    msg.op = 32U;
    msg.file.assign("UWNVJFCXHZUGOVGMVTFWXEKHNEWKATBLMZQLRPCFPMNPILBIYOAGCFBWNQQJJPJFQEGVBONUUUXHSSISRYZKNWDYLLQFSLHYVQWIZCZMRHPDEXMDQIXZACMIUCEHPAJFESRYUS");

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
    msg.setTimeStamp(0.1731577212762172);
    msg.setSource(56673U);
    msg.setSourceEntity(138U);
    msg.setDestination(23641U);
    msg.setDestinationEntity(240U);
    msg.op = 60U;
    msg.file.assign("NVOKLFZSWRTSTWLCPPIDMLEJWQJDKGTKJWODKGWYOLOBAUWAHIEMDCLDEQKSFUQGYVTYNUWLGRQKZHIEOEAMAYCTCBBXNODSYMPNYPJIU");

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
    msg.setTimeStamp(0.15294851938833343);
    msg.setSource(10322U);
    msg.setSourceEntity(3U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(205U);
    msg.op = 55U;
    msg.file.assign("JVNWHPITKLSNJRHISHAGXTDKSPZCGVQULJIWEJNPQAJDVWFDOFSXFEPEWOENQMYXHGZKRISYUIVPFEAIOHRPGWABOZTGNXJVMSBNCOEHZHQKOKRSRDAGBKQJFNGTARAZLXJDJUMUWZIBFWCQZPGYMZCUFECRXKLZXFFKOUALNZMQMQVYXLDSCMTSMCKIOINXTVTLLEHEYDDTUORVDVMQLBFHPGCITKPUYYYLWBRXJUBBAYYBMUBCGNACV");

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
    msg.setTimeStamp(0.9074971234801175);
    msg.setSource(32532U);
    msg.setSourceEntity(88U);
    msg.setDestination(2847U);
    msg.setDestinationEntity(55U);
    msg.op = 101U;
    msg.clock = 0.3345490545078833;
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
    msg.setTimeStamp(0.8067230867995181);
    msg.setSource(61380U);
    msg.setSourceEntity(47U);
    msg.setDestination(15504U);
    msg.setDestinationEntity(246U);
    msg.op = 226U;
    msg.clock = 0.4311427295160499;
    msg.tz = 94;

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
    msg.setTimeStamp(0.20921343095039602);
    msg.setSource(15948U);
    msg.setSourceEntity(189U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(155U);
    msg.op = 27U;
    msg.clock = 0.6127693140518717;
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
    msg.setTimeStamp(0.26335074105996026);
    msg.setSource(51548U);
    msg.setSourceEntity(33U);
    msg.setDestination(12892U);
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
    msg.setTimeStamp(0.19446275106660682);
    msg.setSource(53272U);
    msg.setSourceEntity(246U);
    msg.setDestination(396U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.6594676675895582);
    msg.setSource(35165U);
    msg.setSourceEntity(106U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.5342734675960082);
    msg.setSource(56990U);
    msg.setSourceEntity(232U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(95U);
    msg.sys_name.assign("KPIRUQADTXUPLJKPSNLNSAXRDMKXEAKLQDEMSNPCVFPJNRHWCZXXCWFHODXWKSS");
    msg.sys_type = 119U;
    msg.owner = 50719U;
    msg.lat = 0.020999744323763392;
    msg.lon = 0.3854174493528071;
    msg.height = 0.3202074937999976;
    msg.services.assign("FWEPEWLSDSNQZQJMGGQAYOBEICCJWZDGQUXPIKYKBFHYVYVKNPMTHGANCPHPTEFAOVQYHWBBKSOQOILKTJANUJWXDRTWELCDBFWFHMGXLDMPNCHATONLADRDDRBPKUXFBMBVTCKHABYSXFJWOSNQMEDTVUGNRUCURVZILBPORRFIGPILCRHILWZEECSAGMVJLIIOJOQXHFZYZCAXEKQROSWZMMSX");

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
    msg.setTimeStamp(0.8833640872263567);
    msg.setSource(11155U);
    msg.setSourceEntity(53U);
    msg.setDestination(55179U);
    msg.setDestinationEntity(51U);
    msg.sys_name.assign("HFNCYOEFQLOCNZJY");
    msg.sys_type = 211U;
    msg.owner = 18314U;
    msg.lat = 0.9117523343384866;
    msg.lon = 0.01345748772745381;
    msg.height = 0.7704302479715256;
    msg.services.assign("NNQDWYKHHUAMJNUKJGZVXETXLZHPGYBJEJSMBYPFVGSJWALAMPGRPQHUAYHUKCEMZROQRZJSGYBRJTYBWSRGVSAVPUSNEKIVDLOHBWMTOILQWUBIAKLVZFD");

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
    msg.setTimeStamp(0.6077153900137334);
    msg.setSource(56836U);
    msg.setSourceEntity(85U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("YVNHIPLIZABUQJZLAXCOTELTJMHGVBUHVYSGGVFASZPSVXBQAOUMTCMLECJSBKXIBXYEJEIOTFFLMYMCTBOKKGGYNJDHWKBRARTEHINTWOSNYTARKVRWQDHLFJGDDIOZEUQAXNZPPPZAPVGEKCD");
    msg.sys_type = 151U;
    msg.owner = 61873U;
    msg.lat = 0.2444968798611954;
    msg.lon = 0.6178880002797629;
    msg.height = 0.33835787171507037;
    msg.services.assign("QYKFHZZOVULGHRKQMYVYDJHGSHXYUVJTDKWRXIOSGVHXBHIXCHYQIPLYWIPKENGIQKNAXSGTFIDCMOZAFBTARLVQGGWFAFXFCWPBMWHUVPMCKMJUXNZTRTOMKPDLTFCBQYITNLFMRJPLSQNCDAODEEZPRNEJSOLSELEXPRXCASVWAWEZLUNLPISICKNZTZUBDFKVOXEBKBIBSJVOGDJQHUDAY");

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
    msg.setTimeStamp(0.29419323807514175);
    msg.setSource(50251U);
    msg.setSourceEntity(80U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(249U);
    msg.service.assign("OBFTEGIFVVZNXBYHLWLTURPYRHNPLIUUQRJVWMOEIPGBZRSDWPLNJEYJFPTCKRHTTCSFKAOMGUVKSCYZRW");
    msg.service_type = 213U;

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
    msg.setTimeStamp(0.7299729709463315);
    msg.setSource(45734U);
    msg.setSourceEntity(236U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(208U);
    msg.service.assign("FIRPZJTFAKKBLJQBBWRBUVNBRZTUSPWPMSFPHQDLOZGISRWUUFMNYIXMFPDIDZHSOADKWJUTCEOBFSNHXVGKDVBDEYYK");
    msg.service_type = 161U;

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
    msg.setTimeStamp(0.3047271168376392);
    msg.setSource(61245U);
    msg.setSourceEntity(246U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(20U);
    msg.service.assign("IRKYBDSMXIGZFZPLENFKJFHSVVKQUCQICGJXLVLJCSVBFELXXAZQYOFXCGVQRCZTQKCNQ");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.784572759602208);
    msg.setSource(10243U);
    msg.setSourceEntity(73U);
    msg.setDestination(14414U);
    msg.setDestinationEntity(104U);
    msg.value = 0.08900890639931558;

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
    msg.setTimeStamp(0.45254144067682356);
    msg.setSource(48477U);
    msg.setSourceEntity(136U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(119U);
    msg.value = 0.6823729446080539;

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
    msg.setTimeStamp(0.2123307991459621);
    msg.setSource(46074U);
    msg.setSourceEntity(39U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(96U);
    msg.value = 0.34697339088635726;

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
    msg.setTimeStamp(0.8497461337984861);
    msg.setSource(29383U);
    msg.setSourceEntity(236U);
    msg.setDestination(58971U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9834003811202894;

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
    msg.setTimeStamp(0.10897200343672675);
    msg.setSource(45535U);
    msg.setSourceEntity(240U);
    msg.setDestination(384U);
    msg.setDestinationEntity(231U);
    msg.value = 0.868924367890936;

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
    msg.setTimeStamp(0.4656250590582972);
    msg.setSource(7991U);
    msg.setSourceEntity(27U);
    msg.setDestination(45851U);
    msg.setDestinationEntity(112U);
    msg.value = 0.487961860506828;

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
    msg.setTimeStamp(0.11329886035819281);
    msg.setSource(56910U);
    msg.setSourceEntity(171U);
    msg.setDestination(30208U);
    msg.setDestinationEntity(245U);
    msg.value = 0.411656539862331;

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
    msg.setTimeStamp(0.39622324744915527);
    msg.setSource(2769U);
    msg.setSourceEntity(41U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6890039782281845;

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
    msg.setTimeStamp(0.81735065189216);
    msg.setSource(58512U);
    msg.setSourceEntity(10U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(41U);
    msg.value = 0.39157775465048383;

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
    msg.setTimeStamp(0.4894499117407606);
    msg.setSource(63727U);
    msg.setSourceEntity(32U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(23U);
    msg.number.assign("MDTEVRCEIYLKAAXNEFMETLANHPVXRVLAXPLNUIXKDBLUDFAQLIVUBCZJHWOQIJTDCWIXMZYWADKCASCHM");
    msg.timeout = 35444U;
    msg.contents.assign("CYIRWSSUAQBDNTPRQSEHSNWEPP");

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
    msg.setTimeStamp(0.34704785825547446);
    msg.setSource(10456U);
    msg.setSourceEntity(188U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(204U);
    msg.number.assign("JQNUTEBJFZFKYRLIDECGAKJJTYVYIHNQLTZWKBUYPWMMRTHWFUWLCBSYOSADXRUZWNDFKLIGWONOHPXDWQAZJIXYOSSVRQFRUPVXSDHNMHHAYCRURHOMRPCBNZNXHFGKOGOFEDGPSBVZZACETIEUNAXVSYMSMEOILEFDBABZLYYXMGLPVTEVXCUCPQKOP");
    msg.timeout = 42223U;
    msg.contents.assign("VTGDFMJBGBSFHAZUEUGOPBSKIYYLZWXINWQWQELXQHWLHNBJPWAELCMHEIGFVJRRDZKGAJKYTTUXVJFESUIJBNYAYHJSCNRONHDMODLQJLIFYZZOSRKHQAYDVJEUIWCFPOFHKBNCWMSKXQRXFMRYUDJVKZMBHNXSWOCXXMCSCPQTLVTCKGVBDGGRMAPZFUMIKIRWVXATMNSYPRGEXUZOIAAKSGPPVDEETPETLCLOFWZH");

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
    msg.setTimeStamp(0.4243646760453288);
    msg.setSource(59244U);
    msg.setSourceEntity(192U);
    msg.setDestination(3911U);
    msg.setDestinationEntity(189U);
    msg.number.assign("DCBAMMIABVBLYQJBMJWVLVZFGOXMAYKJRICQNYOGDNKLTWNBPDWSMLRNLWGBFHFRAYMTHRNCJGDEBOMFYPXSMQEDXVEUOTMEQZQPSNJZJGIHJOFJBHUZRIYZLXXCUNRKMCIPBHGPLJGENOHKDUCDKDLRVKSTYLFGYHQYLBTWWECZXEATFQPVWZIUOOOTIVFKZXCGUURUHSCSSAIVXQF");
    msg.timeout = 29493U;
    msg.contents.assign("WPGRUXDMIYDULIKLIEKMAEOOPTEJACFMCRFZYKUZYYZQMOUNYABJVNWGJTOGBXQMHGDRNLVTODFPUENKEAHSTOJKNVXCVEZVARODNUWTCBAYSRHSTVSRZFHTONJWUQGEBMJIJXTYLJUCGFWNLDPLZXYSCGKJSMAGCWXEWPKIXYHFDHRRXSVLSCSNNBYQLWQBQMPZKCPWIQIVFLIHAH");

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
    msg.setTimeStamp(0.11416102320197996);
    msg.setSource(52555U);
    msg.setSourceEntity(30U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(154U);
    msg.seq = 3299479245U;
    msg.destination.assign("UYZNAVYTQOGXYVAXNUZTWSDCPOSTMEHIJMPHXIYTBVYOMOAVGVVJEOAZNIHGXLGHZKQERWICSMFKGMDFFYCGSTEGOAPQKHNXEBEIRQCBYUOXXDPRLXDEFKBSIWFKHVVLIQTCUKNEBJASPWONPDHUHLBNFWADJTRGQUQAKJJQDPQDRIIXIARLVHKVBZLPCZLSTUCYSLLOROWMCKDSPTUJMZXWWQBYNAPTKZWMJESGRZFDHERMFRGBJUBCLWY");
    msg.timeout = 30015U;
    const char tmp_msg_0[] = {117, 45, -36, -52, 16, 113, -36, -71, -26, -98, 45, 69, -84, -48, -28, -33, 11, -61, 41, 91, 123, 10, -62, 32, -42, -10, 14, -107, 23, -38, 40, 52, 121, -4, 77, -46, -61, -76, -40, 116, -108, -17, -64, -86, 46, -11, -39, -80, -32, -45, 62, -99, -87, 62, -7, 111, 52, 66, 1, 64, 103, -83, 36, 118, 5, -40, -122, -12, 109, -18, 106, 69, 0, -55, -17, -93, -26, 81, -114, 2, -106, 122, -32, -29, 55, -13, 110, -50, -126, 33, -72, -81, 17, 58, -115, -126, -7, -101, 75, -70, -57, -98};
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
    msg.setTimeStamp(0.4987395421626405);
    msg.setSource(7660U);
    msg.setSourceEntity(104U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(0U);
    msg.seq = 4169368370U;
    msg.destination.assign("LYKOJYWTWIOGPOCILBGJYORLUIAKKDWDUUWBCTNHOYWULHSFAGFNSQKUVAXBRZMZDADZBPWYJLZPVJUEHFHWSIEHQSMBWYXYRZOAYERZTILRCGPFEEDOFGHCJOVTXDQXBNEMGSQDTUXBAEYNWRYJXCMFJQP");
    msg.timeout = 41375U;
    const char tmp_msg_0[] = {-24, 23, 109, -94, 117, 83, 66, 44, -60, -49, 79, -33, 19, 5, -15, -46, 25, 43, -70, 42, -60, -18, -75, -21, -108, -83, 63, -62, 120, 35, -113, -12, -90, 125, -73, -41, -121, 15, -25, -87, -104, 99, 45, 25, -108, 107, 62, 101, -53, -119, 6, 110, -71, -50, 117, -40, 102, -13, 31, 34, -86, 72, -69, -42, 66, -32, -27, 109, 11, 109, -66, 83, 84, 45, -73, 126, 55, 31, -34, -110, 30, 9, -123, -92, 126, 39, -106, 67, 101, 68, 51, -1, -65, -101, 21, -70, -72, 8, -116, -54, 104, 19, -61, -50, 31, 47, 14, 95, 82};
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
    msg.setTimeStamp(0.25548245393970437);
    msg.setSource(8150U);
    msg.setSourceEntity(214U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(0U);
    msg.seq = 2222917142U;
    msg.destination.assign("QVJWWRSOAEXAJPXZHGKTQJBQNAYULINEUYYIRAMUXVKPZHKYAYSLXHLMMGAGHLJIPPEFSZRFLOKCJDOVLRITRPNGJICWGOWYDHDXDMDTGGIMJRFTBWOEFCIKAZQGTTIOVZJHPKWUEZQACYEMZUSYHMTPVABDOTLTNLNADOFBPCSNJVBIYGEKNIBECHXZNBXQVVM");
    msg.timeout = 50048U;
    const char tmp_msg_0[] = {-64, 37, -8, 10, -67, -119, -10, 60, -108, 42, 19, -111, 35, -14, -17, -42, -27, -17, 63, 4, 103, -9, -19, -24, -118, 15, -65, 100, -2, -76, -93, -109, 35, 41, 66, 43, -113, -88, -113, -99, -67, -33, -41, -107, 44, -100, -1, 1, 10, -116, 43, 71, 1, -127, -89, 87, -10, -47, 37, 84, 2, 34, 14, -78, 92, -54, 54, 66, -13, 120, 79, 21, -26, -45, -125, 98, -2, -22, -16, -23, -9, -27, -120, 106, -113, -114, -88, -86, -23, 106, -35, 84, -40, 80, 9, 16, -71, -121, 109, -116, 98, 4, 47, -22, -110, 100, 101, 113, -87, 18, -18, 111, -97, -89, 64, 80, -75, -42, 34, 108, 17, -80, 120, 69, -94, 92, -5, -60, -116, 22, 115, -64, -81, 31, -113, -8, 85, 10, 123, 122, -118, 43, 67, -18, -91, -37, 5, 112, -98};
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
    msg.setTimeStamp(0.9158571115449916);
    msg.setSource(43308U);
    msg.setSourceEntity(4U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(110U);
    msg.source.assign("MFYTLGSYOBWXXVLFOJRBBUHFHJHNLQCTLDKPLRCXKOKYSRYHKZFGVLDHDXNOMPQRZMKCREZVKXAJUYCPOUGAQPIUUBLDOWNTGFTAVKHWZADKKNZZVZNSXNAPBCHQJWBHHDXASEDPBAVDGISDCMTWNJGJGNGHOEMWCLXTIRWTEEVEQ");
    const char tmp_msg_0[] = {65, 52, -9, 84, 84, 99, -114, -81, 81, -36, -82, 125, -41, -125, -112, 15, -22, 58, 30, -49, -80};
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
    msg.setTimeStamp(0.48776688703117355);
    msg.setSource(9873U);
    msg.setSourceEntity(66U);
    msg.setDestination(10446U);
    msg.setDestinationEntity(25U);
    msg.source.assign("PNYROIYAEKLECTLGODCPWZCMMHOSQRJTKISCEJKTFWYGIHDQBDIHTAVLJUIPQLSNGNGCXOKZYBBPTUZERZAYFNSGDWSEOLCYQUVIMXAXDAFUTFWXHXPATBIQLQGDUVFVGLGVRRYOJMJFD");
    const char tmp_msg_0[] = {20, 60, 69, -91, 85, -45, -84, -66, 104, 21, 76, -74, -77, 88, 102, 94, -103, 74, -53, -69, 10, 3, 61, -117, -118, 0, 62, 19, -116, -49, -100, -104, -104, -117, -3, -42, 39, -69, 120, -2, 41, 50, 67, -29, 39, 80, 107, 74, -128, -28, -6, 11, 99, -120, -100, 7, 10, -105, 59, -18, -5, 28, 14, -45, -35, 114, -124, 84, 2, 1, -62, 64, 16, 42, 66, 29, 101, -48, 48, 8, -73, 86, 87, 24, 113, -20, -127, 89, 29, 7, 31, -85, 16, 61, -70, 62, 50, 28, -49, 124, -71, -45, 51, 56, 85, -36, 57, -127, -55, -37, 79, 123, 16, 11, -26, 35, -33, -77, 61, 43, 38, 92, 27, -89, 8, 56, -63, -60, -59, -5, -47, 110, -64, 38, 58, -36, 8, 19, -41, -32, -62, -43, -111, -48, -108, -66, -88, -12, -6, 25, 103, 11, 76, 102, -43, 126, 91, -89, -82, 95, 31, -35, -125, 6, -45, -125, -74, 122, 115, 4, -90, -62, -114, 25, -88, 80, -65, -69, -118, 77, -25, -25, -101, 20, 87, -31, 18, 124, 39, -42, 18, 43, 104, 104, 93, -65, -67, -86, -18, 119, -80, 111, 66, -1, -44, -127, -60, -42, -110, -125, 69, 25, 36, -11, 64, 91, 20, -33};
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
    msg.setTimeStamp(0.3199537144821637);
    msg.setSource(45784U);
    msg.setSourceEntity(44U);
    msg.setDestination(60701U);
    msg.setDestinationEntity(84U);
    msg.source.assign("YMILZLCPTJRUNNKUJSTREXRQNSHVGSXBXGQLDAPJZJPGAQGAVELBUFIXTBPKVPVOUCFPBWDLTXXXXYIYHHUUAYBWGIUCPEWTDZNQFDMTTBBSVNRBYVSBFCQOIRHHHUENLFNAMFONWOHYUAZLJYGAOERQKDSCFZZRPCFVQPZQH");
    const char tmp_msg_0[] = {81, 57, 61, -78, -20, -66, -45, -13, 12, -82, -99, 14, -54, -93, -32, 68, -62, -53, -19, 126, -91, 118, -113, -55, 119, -60, -70, 105, -112, 73, -54, 31, -6, 40, -121, -113, 31, -28, 109, -61, 22, -117, -110, -47, 66, -81, 113, -49, 112, -32, -128, -89, 55, -117, -39, 44, 19, 84, -46, -30};
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
    msg.setTimeStamp(0.7803873533748248);
    msg.setSource(38755U);
    msg.setSourceEntity(36U);
    msg.setDestination(57750U);
    msg.setDestinationEntity(233U);
    msg.seq = 2581625109U;
    msg.state = 39U;
    msg.error.assign("JWNYFSTGNAFPIUQRRQINDDXNOCDEGVGMHYHEXONMZXMKLNCMZKFZIKUTJFYTCJFJYRMEZNFPMPBHRLYQNCZSLOUSCPBLJAMFMXTCKXTAYWQRPUWOAULVAEKRBZUPDVIXVDQMTGZJZJQOWRXYWITXZIEPHJADOQPGUNCFDWKKBSHYHHQVTBAXSGWGVBGRYTUHFSUOWDLHWVDBQRPSVKIAXYSWEEKMOOPCQGHUEVGJJBCZ");

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
    msg.setTimeStamp(0.3211987216294935);
    msg.setSource(42489U);
    msg.setSourceEntity(131U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(171U);
    msg.seq = 2727087225U;
    msg.state = 92U;
    msg.error.assign("SJKSSILNAMPTRQBSAHHRUVHHVIEZJOOHVCCODGJZDERDEIZYWSBKLDPXOFBIRARJPJUWNWWVANDCQZPXWBNFREXPABBAIMTOBQQCAILVBEQJFUZMLELIKVDCEJAVLKGUYLWYVFYFTXTHNGPMWCOVOLZKHAFUCAKITMMDGLTSXPNOGNUDDQMYGCBOKMFWEBS");

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
    msg.setTimeStamp(0.84388690834623);
    msg.setSource(63126U);
    msg.setSourceEntity(84U);
    msg.setDestination(4380U);
    msg.setDestinationEntity(57U);
    msg.seq = 969316588U;
    msg.state = 168U;
    msg.error.assign("WAUDOEBQNWPURDYOZFQLKXFOGMUMSEJEAPLUCRVSDYVBTQVSLKFIKVRTDPYNYMOREDKVESHTANREGJIFXUXFSFPQFIWHTODQJIZAHQZXFLHONIKONBHVLEMNZGYWBUKZZXWWMFLHSAOAXQAYMTDSZWQCIBHLGBOUEIPSUCOCIJGWJVRDEVYRGCIBUNTXUDCYVAKLGMXQZWNMHSRCEGTXLGJCXCVZJD");

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
    msg.setTimeStamp(0.22864453438054622);
    msg.setSource(8727U);
    msg.setSourceEntity(125U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("CHDUPCZIZAKDRRVHQIHHLQYQIBXFTDKRAFBUZXETSNYRRELAPAGZGPDMCXTRWIKTMIRAZQSBKXMYQLWDJGOUZG");
    msg.text.assign("OTOSUXZJIDMFOBUWXFMETJNCZGHVL");

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
    msg.setTimeStamp(0.6723180861017695);
    msg.setSource(24940U);
    msg.setSourceEntity(170U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("QCENFASZAEPOHKACROOLGDVXOGJDDUABYQUF");
    msg.text.assign("HYUERZPTPIEWWTNLIFIQFQHKCABBHDUPBECHMFXYVSBZAU");

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
    msg.setTimeStamp(0.8776860293218725);
    msg.setSource(49762U);
    msg.setSourceEntity(16U);
    msg.setDestination(38584U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("FJAISUIRROA");
    msg.text.assign("RCSXKOSULBEGOLSFWFZPTJZCRXMGVBKQDKYTUEVLINLXZFIXOIM");

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
    msg.setTimeStamp(0.03747552937706111);
    msg.setSource(53066U);
    msg.setSourceEntity(140U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(18U);
    msg.origin.assign("SDWZZSPTOXNXEJWYQFWCKKBVMWUMLKSCDZYLDIINSOTOEEJXWGMKVK");
    msg.htime = 0.9104679141544975;
    msg.lat = 0.9774167676624401;
    msg.lon = 0.2068919368473784;
    const char tmp_msg_0[] = {-116, 18, 114, 112, 59, -24, -4, -51, 123, 3, -27, -78, -127, -107, 34, 51, -63, -128, -111, -34, -22, 115, 22, -122, -75, -42, 8, -46, 20, 46, 50, 9, -87, -109, 88, 118, -116, 32, -33, -74, -34, -124, -111, -31, 78, 63, 57, -101, 60, 28, 66, -103, 110, -4, -33, -69, 123, 91, -126, -4, 107, 67, -99, 91, 79, 123, 64, 18, 29, 21, -112, -113, 77, -106, -4, -50, -106, 9, -70, 59, 75, 97, -102, -16, -120, -39, -127, -82, -46, -115, 69, -109, 115, -102, 100, -16, -18, 113, -46, -124, -2, 12, 94, -103, -34, -36, -90, -5, -79, 123, -90, 80, -29, 121, -47, -33, 45, -39, 118, -81, 49, 49, -37, -71, 33, -106, 22, -104, 8, 3, -102, -90, 78, -87, -38, -76, 103, 104, 30, 90, -70, 116, 52, -2, -36, -27, -105, -35, -65, -41, 62, 73, 83, 99, -33, 1, -36, -26, 86, -48, 17, 102, 55, 31, 87, 44, -4, -12, -21, -49, -106, -37, -73, 61, -63, -36, -63, 88, -53, 113, -47, 11, -54, 104, 126, -58, -101, -127, -65, -29, 78, -69, 23, -88, 85, -61, -54, 91, -59, 7, -6, 33, -107, -98, -5, 2, -53, -17, 10, -102, -119, -64, -68, 103, 45, -62, -47, 78, -23, 39, 22, 46, 58, -96, 62, -33, 80, -93, 98, 16, 45, 100, -44, -91, -39, 125, 79, 90, 51, 113, -85, 23, 18, 65, 15, -28};
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
    msg.setTimeStamp(0.48103509155714785);
    msg.setSource(32187U);
    msg.setSourceEntity(253U);
    msg.setDestination(55670U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("KXBSABKYQJIWYXGROCFONYPAYTTJUINEXOTSLEQWGQFOZTJZOALKLHZPYXMPKUZEIASRIQOFOCLNWDPXAFGTRQAVGOSNSEMWCDGTTMQFCBMXAVINSEKYNGXVZZONUVASRRJUNHLMMSJFNPFYOJMBTLBPQWLWVPPHCBSCHVVQBUXJZFGZREYIMVUKYCKKWRILVBDUHHWRWEKQUQIDD");
    msg.htime = 0.7438506880580701;
    msg.lat = 0.21680373489165639;
    msg.lon = 0.8279740326970843;
    const char tmp_msg_0[] = {-99, -109, 72, -126, 102, 102, 65, -113, 121, 67, -68, -121, 14, 61, 6, 121, 42, -88, 20, 88, -41, 72, -43, 48, 119, 81, 100, -47, 37, -15, 110, 66, 57, 67, 79, -95, -108, 51, 65, -4, 16, -17, -79, -78, -102, 108, -77, 55, -121, 76, -40, -40, 39, 108, -7, -127, 68, 29, 22, 89, 122, 57, -113, -61, -35, 97, -23, 27, -105, 70, 35, 92, -27, 77, 19, 6, 66, -38, -98, -20, -99, 115, 85, 1, 2, 97, -116, -124, 45, -46, 36, -108, 96, -66, -86, -95, 16, -124, 37, -98, -62, -42, -104, -109, 99, 37, -26, -99, 102, 99, -7, -22, -28, -68, 59, -79, -108, -122, 12, -51, -41, -54, 4, 71, -112, -93, 95, 56, 81, 107, 5, -30, -6, 107, -29, -123, -14, 117, -100, 51, 12, 94, -116, -26, -44, -113, -32, 58, -103, 119, 49, -112, 46, -14, -105, 112, 52, -94, 41, 114, 73, 18, 103, 94, -9, 29, 4, -54, 35, -10, 48, -81, -32, -5, 93, -117, -90, -18, -72, 41, 69, 120, 25};
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
    msg.setTimeStamp(0.2576223632061655);
    msg.setSource(32968U);
    msg.setSourceEntity(16U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("XGNBMNEAXUKBEOUZUZEGPNTBQRBZHLUUTIKGQPHROVWZVMXKAIJJOGEGQYNSJUIVPSHEWDOCOPHSGNJBRYYROTUYZQOBFGVIDPCISSA");
    msg.htime = 0.9910320073761557;
    msg.lat = 0.24513729782866267;
    msg.lon = 0.6813004695282792;
    const char tmp_msg_0[] = {51, -102, -101, -118, 55, 62, -27, 39, 59, 30, 97, -7, 0, -106, 104, -89, -100, -44, -22, -75, -32, 13, 30, 73, 102, -101, 101, -12, -61, 18, 61, 122, -21, -84, 13, 125, -122, -124, 46, -110, 116, 87, -3, -44, 94, 75, -84, -102, -122, 101, -118, -93, -26, -31, 117, -64, 61, 102, 12, 67, -7, 11, 10, -57, 22, 40, -8, 83, 83, -109, 123, -54, -122, -109, 10, -20, -31, -22, -70, -119, -68, -81, 111, 55, -111, -31, -108, 97, -119, -77, -74, 96, 118, 85, 100, -95, 52, -117, -46, 16, -86, -82, 109, -123, 116, 114, 124, 75, -4, 112, 101, -56, -85, 36, -26, -46, 26, -82, 68, -96, -115, 122, -49, -19, -117, -16, -108, 88, -105, -67, -37};
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
    msg.setTimeStamp(0.33978040863653525);
    msg.setSource(26631U);
    msg.setSourceEntity(150U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(176U);
    msg.req_id = 5589U;
    msg.ttl = 14129U;
    msg.destination.assign("OUVTHXJDOHQTLLQHVBAEWBWWITZDRACJWOTLJRAVQHLQYRMLCXGSNAGGMKZCGPSEGDVCXKODLUUQIIWSPYAGFQYBZOJMUNNDGEFBZIMSESJWAVFYVJCTKQYFZPXQMOAIMPSVUZZYNOTFAHEDNEWZANDHNDLFOHCOTCHPLU");
    const char tmp_msg_0[] = {13, 25, -85, 101, 123, -125, 37, 16, -35, 91, 67, 104, -31, 120, -39, -86, -105, -4, 86, 97, -78, 34, 37, 65, -88, -100, 125, -100, 55, 29, -46, 52, -56, 29, 107, 111, 3, -83, -48, -54, -59, -30, 38, -98, 54, -27, 91, 83, 77, 50, -90, -93, -51, 87, 30, -89, -2, -37, -120, -115, -66, 117, 68, 33, 30, 121, -125, 73, 114, 124, 121, -122, -92, 56, 72, -52, 96, 95, -70, -37, 110, 41, 30, 37, 126, 13, -100, -111, -23, 77, 82, 25, -62, 11, -74, 70, -30, -29, 15, 118, 104, -86, 2, -80, 115, -65, 64, -127, 91, 61, 115, 71, 1, 40, -13, -81, 118, 34, 44, 88, 52, -67, -20, 55, 80, -23, 101, -31, -105, 115, 102, 108, 31, -88, -87, -92, -48, -117, -109, -34, -70, 55, -28, 49, -10, -4, -80, -80, -38, 117, 70, 68, -60, -122, 6, -85, -70, 51, 36, -68, -36, 10, -91, -24, -75, -87, -127, -124, 124, -44, 62, 16, -27, 84, 74, -69, 68, 67, -84, 90, -11, -75, -91, 126, -122, -70, -40, -79, -28, 18, -23, 66, -63, -47, -68, -82, 37, -69, 83, 66, 101, 109, -7, -20, -128, -118, 76, -117, 60, -46, 113, 86, -71, -38, -67, 68, 101};
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
    msg.setTimeStamp(0.5751033090773512);
    msg.setSource(37442U);
    msg.setSourceEntity(77U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(101U);
    msg.req_id = 46317U;
    msg.ttl = 442U;
    msg.destination.assign("DKNHGEZTNTWIXZBJXMOKIOCGLQFDSWQOKVOYBKTEDULDMKZKGQXYYMHECKVCUVTUTLDXUHZPDNCJVSBEQSDTUWHNUGGQLRHQUIL");
    const char tmp_msg_0[] = {-24, 65, -19, -50, 90, -65, 40, 38, -32, -57, -112, 22, -25, -5, 3, 103, 26, -62, 89, 122, 44, 79, 60, -115, 13, 103, -109, -94, 54, 80, 119, -85, -23, 33, 68, -28, 111, -88, 1, 11, 121, -36, 96, 64, 76, 37, 45, 67, -21, 52, 84, 76, -13, 126, -93, -3, 4, 1, -21, -30, -6, 91, 59, 93, 77, 41, 74, -30, 89, -125, -77, -88, 62, -7, 72, -82, 81, -29, 58, 118, -23, 0, 64, -39, -23, 53, -7, 62, 21, -16, 35, 122, -92, 91, 54, -76, -71, -32, 92, 64, -122, 66, 47, 16, -7, -26, -94, -39, 33, 14, -45, 43, 6, -91, 69, -128, -76, -38, 58, -71, 23, -114, -27, -115, 17, -48, -52, -123, 43, -18, -46, 9, 0, -50, -80, -128, 24, 50, -112, -50, 23, 25, 57, 80, 120, 24, 36, -99, -12, -77, -3, 28, -108, -56, -46, -23, 123, 100, -58, 64, -40, 15, 21, 115, -53, 4, 54, -86, -36, -67, 105, 31, -58, -38, -49, 1, 2, -64, -3, 51, 70, 25, -125, -127, 56, 59, -67, -121, 86, 107, 91, -90, -55, 75, 24, -6, 84, -61, 33, 75, 13, 20, -5, 13, -60, -128, 11, -27, 14, -87, 38, -128, -67, 73, -106, -88, 76, 47, -3, 70, -47, -70, 32, -76, -110, 70, -116, -109, 98, -51, 120, -127, 93, -68, 108};
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
    msg.setTimeStamp(0.28930683245778055);
    msg.setSource(22919U);
    msg.setSourceEntity(158U);
    msg.setDestination(37372U);
    msg.setDestinationEntity(188U);
    msg.req_id = 62316U;
    msg.ttl = 46944U;
    msg.destination.assign("DEPAHSVYCHPMAWAQFVTUWWDBOXHDOPMVNNTSFDYJTEBCCLZOQOJUJPMIANHIXFRBIMDXIXGAPPZYKUWKTJDKLJAXOOWNRQXGOUUDLVHQG");
    const char tmp_msg_0[] = {100, -33, 59, -111, -87, -43, 91, -31, 46, -79, -74, -47, 90, 103, -110, 66, 15, 18, 81, 35, -67, -73, -122, -38, 65, -72, 34, 48, -95, 13, -53, -57, 34, -79, 108, 9, -127, 87, -113, 80, -91, 74, -76, 19, 106, 66, 83, 19, -39, -81, 114, 7, -77, 50, 80, -53, 44, 116, -44, 97, 31, 111, 26, 18, 28, -72, -114, -31, 2, 23, 51, 58, -16, -88, -7, -39, 90, 88, -128, -25, -40, -19, 70, 105, 66, -49, -115, -94, 75, -119, 47, -114, 79, 44, 71, 74, -36, -109, 49, -93, 119, 77, 34, -21, 31, -104, 86, -26, 36, -57, 29, 95, 101, 0, 15, -6, 101, -83, 16, -41, 38, -90, -75, 8, 120, 118, -98, -44, -5, 69, 42, 8, -96, -12, -98, -9, 37, -25, -83, -40, 124, 23, -56, 118, -27, -128, -19, -47, -19, -122, -14, 105, -18, 113, 52, 71, -83, -84, -103, 79, -62, 51, 118, 88, -46, 60, 74, 119, 113, 88, 122, 27, -84, 13, -88, -85, 16, -79, -90, 75, 64, 3, -45, -64, 21, -38, -71, 118, -110, 113, -43, 33, -128};
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
    msg.setTimeStamp(0.09005859463101618);
    msg.setSource(52230U);
    msg.setSourceEntity(32U);
    msg.setDestination(45900U);
    msg.setDestinationEntity(62U);
    msg.req_id = 41332U;
    msg.status = 177U;
    msg.text.assign("HVYDTIWIHLBPHLTROKTVGNKWEQJRADULQURWNNGSVCSUETWGMTYWGZYWLZTAPYHDJXORDLUFWIPNUQJLFDAFIAPCPIFVZKAQBCDGYWCYLPSBHEQEJRFXSMSGVKYFOTXADMTBFXJFDZXIPXQQVKRYBTGHMZNEJGSVUI");

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
    msg.setTimeStamp(0.7828162861618853);
    msg.setSource(44459U);
    msg.setSourceEntity(49U);
    msg.setDestination(44307U);
    msg.setDestinationEntity(154U);
    msg.req_id = 8347U;
    msg.status = 153U;
    msg.text.assign("PHOZWORGHMFKSYAUCPPLFINTHMMIJZCDYLJSSIJBX");

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
    msg.setTimeStamp(0.21672428288220957);
    msg.setSource(19017U);
    msg.setSourceEntity(6U);
    msg.setDestination(62588U);
    msg.setDestinationEntity(180U);
    msg.req_id = 7132U;
    msg.status = 193U;
    msg.text.assign("FXJJPKVQBLIENAVVAMYJJQFFQQCNHHOTBIPQGELJOJSBWVZPUASZDMTYXXTUPJOOEZMLIJD");

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
    msg.setTimeStamp(0.40604007761401506);
    msg.setSource(40571U);
    msg.setSourceEntity(58U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("QPENXDMARJREYMKRJLLXNWAPTIMHUNGVDXHFVEUVVJSXAOURUGMQSEKDDTJELYOSZKRMHNRC");
    msg.links = 2957269588U;

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
    msg.setTimeStamp(0.8314494686225168);
    msg.setSource(18042U);
    msg.setSourceEntity(95U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("CFPIBOFWMDSPOVLGDPCTSCRUWTELWHRECUDNIZNZBHXMKVX");
    msg.links = 572104056U;

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
    msg.setTimeStamp(0.6867631710948173);
    msg.setSource(40709U);
    msg.setSourceEntity(241U);
    msg.setDestination(11329U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("MVRYEOOYIRBGBQIWUKRWDBFCHDWHXVHUNQFSRQMWLLSZPHKRXEFZKQNLMATGZDPBDPBSNASZFWVFCOAGKWRBOGPGXHZLHTVSCUWTAEJMINFNMEGMXTDSYLVVBVCOCNELKR");
    msg.links = 4010385220U;

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
    msg.setTimeStamp(0.0981591770624064);
    msg.setSource(44139U);
    msg.setSourceEntity(21U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(123U);
    msg.groupname.assign("VLWGJIKESWRWSTXBLQPQQDPANFQNEAIKKFUWMOUVJXFRPIYOLJVAVCDBCTIYFVGBFWAZZIXMCQKONJUNHDSVGZDYSQTHCCTYWFECUHUDJQCNOZXHLWZROMPYILQFBESBAWJBEVPTDEHBGOIFRXPSKEWTEQIFLRXZPXEZLKTGTNMJVODXBOUYTANHMXKZYRAJRCYLSNGPRUMHMHCKU");
    msg.action = 150U;
    msg.grouplist.assign("JGTQXZHIPZRCLPZXMVX");

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
    msg.setTimeStamp(0.5122340869578798);
    msg.setSource(28177U);
    msg.setSourceEntity(96U);
    msg.setDestination(46680U);
    msg.setDestinationEntity(14U);
    msg.groupname.assign("GABBOUFAHLMWRSMBQIOGXQPEFITIFEVPRAUCIXMJAEJPMLGBLTNHEGLSXNSDZWYGWCDIEZFTGOKUTFYRNOJXKZJUNTJCGLHVZUCZLIFJHOJNSRAEVWLEKFEUHCNVYHJP");
    msg.action = 56U;
    msg.grouplist.assign("UFKIOIFORSJSXPLCILPKAZOQVDLQMYYNDXVDNVNRKWTSXFUFIFVNPJQVFIESUZGAMDUAPHLVAAEWZUEQMCCJBIOONDYPREKZUORGHDDQGBCSDWNTZXEMXNJGHFKTCCJFLIAHXHLFQSZYFCIYGYCORMLUESYRBWNWKZVANUDPRWCBSKIRBTVPOUAEJYHWM");

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
    msg.setTimeStamp(0.07963105359312972);
    msg.setSource(18744U);
    msg.setSourceEntity(254U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(173U);
    msg.groupname.assign("AFQMATWZXLIODHBPGDXBFUDEPBIVPBVWDKKDFKMWCSCNQYHPHGOVUCHAPTOZNKNUGJCYJNRPXCGTXFDFBHZIQYEHSGOFLPBQGRTNEPWVYMVIIGXQAVSNPKMLSFYDEXQDVQAZDQABZSZR");
    msg.action = 55U;
    msg.grouplist.assign("VRGZNCSXQMRGKURGXXYJWQUTMVDQIUGOOBDTELNXHTBUHKMPWRIAPKPLQUVZM");

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
    msg.setTimeStamp(0.054880518028521785);
    msg.setSource(51832U);
    msg.setSourceEntity(130U);
    msg.setDestination(2907U);
    msg.setDestinationEntity(252U);
    msg.id = 80U;
    msg.range = 0.9701872140092331;

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
    msg.setTimeStamp(0.14644700341803185);
    msg.setSource(3342U);
    msg.setSourceEntity(201U);
    msg.setDestination(8128U);
    msg.setDestinationEntity(106U);
    msg.id = 178U;
    msg.range = 0.2925152146134007;

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
    msg.setTimeStamp(0.3337508244277473);
    msg.setSource(24148U);
    msg.setSourceEntity(176U);
    msg.setDestination(52061U);
    msg.setDestinationEntity(251U);
    msg.id = 169U;
    msg.range = 0.8025287534666359;

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
    msg.setTimeStamp(0.8113382310023334);
    msg.setSource(13709U);
    msg.setSourceEntity(126U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(59U);
    msg.tx = 218U;
    msg.channel = 77U;
    msg.timer = 28708U;

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
    msg.setTimeStamp(0.947748420489529);
    msg.setSource(7819U);
    msg.setSourceEntity(180U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(114U);
    msg.tx = 218U;
    msg.channel = 44U;
    msg.timer = 33999U;

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
    msg.setTimeStamp(0.706270747859891);
    msg.setSource(39421U);
    msg.setSourceEntity(184U);
    msg.setDestination(61118U);
    msg.setDestinationEntity(21U);
    msg.tx = 17U;
    msg.channel = 98U;
    msg.timer = 4017U;

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
    msg.setTimeStamp(0.4026126505208011);
    msg.setSource(19243U);
    msg.setSourceEntity(151U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(167U);
    msg.beacon.assign("ULAITWFXMFOKQXUICYOIYEIPRKANUIQEBDDKNBCWBFNPWLPYQZRSBDJOFKCLMPWUHEGEKKZXXQEGCSGMPKMHIIZMDAXVJWOGZHOIAZQSDNLKGBAZUNKLSYVBQTSMZCM");
    msg.lat = 0.23502714165600969;
    msg.lon = 0.6964277066440351;
    msg.depth = 0.28784241998430726;
    msg.query_channel = 250U;
    msg.reply_channel = 141U;
    msg.transponder_delay = 177U;

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
    msg.setTimeStamp(0.7615214736866791);
    msg.setSource(36846U);
    msg.setSourceEntity(55U);
    msg.setDestination(8028U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("YBCEJFSRIJENNNVYMPRDGGPURHBDPTXSWVCODUCIAINFAQJIUGLXLATEBSYMDBAHYJLGVXPZMH");
    msg.lat = 0.6910006462905215;
    msg.lon = 0.8456508006720251;
    msg.depth = 0.7236878616024499;
    msg.query_channel = 18U;
    msg.reply_channel = 12U;
    msg.transponder_delay = 214U;

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
    msg.setTimeStamp(0.6415415781997879);
    msg.setSource(51830U);
    msg.setSourceEntity(236U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("OVHBZSOECZGFJRRCZLAQLPUNGWLSEPTHCQJXKMZOMQWMOMQKJXYFBGFORSBDAHVWVCVTJTYBPQISNMLAPJRTGALUXCSBXZHWMBPYKLUEYWWVKVHQBRROGXRVKKIPIHNGV");
    msg.lat = 0.5212287511739742;
    msg.lon = 0.001402036506581883;
    msg.depth = 0.8235460369956014;
    msg.query_channel = 141U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 63U;

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
    msg.setTimeStamp(0.07704697613226308);
    msg.setSource(20370U);
    msg.setSourceEntity(228U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(2U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.8457252444441422);
    msg.setSource(16077U);
    msg.setSourceEntity(218U);
    msg.setDestination(51995U);
    msg.setDestinationEntity(43U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.9055682014255968);
    msg.setSource(35965U);
    msg.setSourceEntity(219U);
    msg.setDestination(51021U);
    msg.setDestinationEntity(56U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.5998739886786477);
    msg.setSource(64204U);
    msg.setSourceEntity(80U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(114U);
    msg.address = 178U;

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
    msg.setTimeStamp(0.40076593600789545);
    msg.setSource(53209U);
    msg.setSourceEntity(201U);
    msg.setDestination(19462U);
    msg.setDestinationEntity(42U);
    msg.address = 215U;

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
    msg.setTimeStamp(0.5252737421058545);
    msg.setSource(4867U);
    msg.setSourceEntity(4U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(180U);
    msg.address = 155U;

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
    msg.setTimeStamp(0.6296837700974209);
    msg.setSource(35839U);
    msg.setSourceEntity(41U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(206U);
    msg.address = 241U;
    msg.status = 154U;
    msg.range = 0.9171887689567475;

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
    msg.setTimeStamp(0.2596863977122421);
    msg.setSource(31733U);
    msg.setSourceEntity(21U);
    msg.setDestination(12325U);
    msg.setDestinationEntity(95U);
    msg.address = 151U;
    msg.status = 247U;
    msg.range = 0.9848126469733106;

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
    msg.setTimeStamp(0.45863217394401967);
    msg.setSource(60727U);
    msg.setSourceEntity(222U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(33U);
    msg.address = 64U;
    msg.status = 26U;
    msg.range = 0.3638330630732828;

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
    msg.setTimeStamp(0.6386127036999966);
    msg.setSource(57594U);
    msg.setSourceEntity(93U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(52U);
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 124U;
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
    msg.setTimeStamp(0.2326299239362457);
    msg.setSource(23713U);
    msg.setSourceEntity(236U);
    msg.setDestination(37962U);
    msg.setDestinationEntity(62U);
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 159U;
    tmp_msg_0.name.assign("LXBPLKXREOKKRHHAQMKZEYBUJEDVLQQLWAQREFDJTJRX");
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
    msg.setTimeStamp(0.329906118496349);
    msg.setSource(55695U);
    msg.setSourceEntity(151U);
    msg.setDestination(28341U);
    msg.setDestinationEntity(18U);
    IMC::MsgList tmp_msg_0;
    IMC::LblConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 91U;
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
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.06555185149377962);
    msg.setSource(59123U);
    msg.setSourceEntity(81U);
    msg.setDestination(56542U);
    msg.setDestinationEntity(169U);
    msg.enable = 205U;

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
    msg.setTimeStamp(0.9874000952310144);
    msg.setSource(43147U);
    msg.setSourceEntity(176U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(118U);
    msg.enable = 38U;

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
    msg.setTimeStamp(0.4761259045762606);
    msg.setSource(51017U);
    msg.setSourceEntity(228U);
    msg.setDestination(36562U);
    msg.setDestinationEntity(53U);
    msg.enable = 52U;

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
    msg.setTimeStamp(0.841055966481679);
    msg.setSource(36308U);
    msg.setSourceEntity(41U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(216U);
    msg.summary = 125U;
    msg.level = 38U;

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
    msg.setTimeStamp(0.8775432789001172);
    msg.setSource(3023U);
    msg.setSourceEntity(15U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(62U);
    msg.summary = 132U;
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
    msg.setTimeStamp(0.6582340554402714);
    msg.setSource(42760U);
    msg.setSourceEntity(63U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(47U);
    msg.summary = 56U;
    msg.level = 5U;

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
    msg.setTimeStamp(0.7417503156978339);
    msg.setSource(26719U);
    msg.setSourceEntity(90U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.8131768013052778);
    msg.setSource(849U);
    msg.setSourceEntity(166U);
    msg.setDestination(7546U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.4191724533230988);
    msg.setSource(54890U);
    msg.setSourceEntity(24U);
    msg.setDestination(12494U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.6009991409655523);
    msg.setSource(41319U);
    msg.setSourceEntity(3U);
    msg.setDestination(20022U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.6035596671444289);
    msg.setSource(28929U);
    msg.setSourceEntity(78U);
    msg.setDestination(30229U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.3542971471884193);
    msg.setSource(11780U);
    msg.setSourceEntity(12U);
    msg.setDestination(1654U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.381313737974452);
    msg.setSource(55129U);
    msg.setSourceEntity(148U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(44U);
    msg.op = 78U;
    msg.system.assign("NWINQPHJXFCHABGAJXUSUBKXKGZVKFXJKNDKTDJTINFHGCLICETLGLZQ");
    msg.range = 0.9682646535494854;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.03616882937814281;
    tmp_msg_0.speed = 0.7316012304467;
    tmp_msg_0.turbulence = 0.69561495156148;
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
    msg.setTimeStamp(0.006987947287314111);
    msg.setSource(25972U);
    msg.setSourceEntity(83U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(201U);
    msg.op = 235U;
    msg.system.assign("OLBRMQYROFMJ");
    msg.range = 0.5096909562942905;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.9220810080132856;
    tmp_msg_0.m = 0.5087216928255104;
    tmp_msg_0.n = 0.8989554781304572;
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
    msg.setTimeStamp(0.9772913027514406);
    msg.setSource(1979U);
    msg.setSourceEntity(95U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(151U);
    msg.op = 153U;
    msg.system.assign("EJTESOZGLXVIEZDNXBRXWPAASCVYAIORLXWFKQAMOD");
    msg.range = 0.8276942274521705;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 54670U;
    tmp_msg_0.name.assign("VFJHBDOSIKZSDJFKHGFQWBGWPYE");
    tmp_msg_0.custom.assign("UYFWAXCOIWKYBKZGMLPPFMDHQJDZVHVVVEMGKTQGCJQRYLXGCJAUPUEYLFRUNOEHLQNVNMDJDREPUKRQWROXHNAESDJCXBIDFPQDOLJZZZBTONYTKZSUFBPDXUGMVASOFELEYQVSCCYIOPIZLMXMUXACAVCAWNQLARHZRPBIWGBESOZEKFHWBXFTJTIXLBONBRZSPIIKQCGNHSMFLXTDAU");
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
    msg.setTimeStamp(0.23132392579819594);
    msg.setSource(10616U);
    msg.setSourceEntity(94U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.7023489874662481);
    msg.setSource(37629U);
    msg.setSourceEntity(22U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.12418094951785674);
    msg.setSource(4986U);
    msg.setSourceEntity(236U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.9795001236585823);
    msg.setSource(1617U);
    msg.setSourceEntity(54U);
    msg.setDestination(18017U);
    msg.setDestinationEntity(203U);
    msg.list.assign("OXOSUTAQLMEWXHNWBFSDXSNRTSPPVOBZDHMBQNWEYSLKPQAUOZEGMJFAGBICZRVKFAMSIXVHMRTFFVWLWZUFYFUTFDTSQVTDFEYVVJSCYEGYNNDVLTECQCNEJCSXDUCZYWOJWLZJQTCXAOYKXJBOSADLYPHKFNYKRDIWETRPNQXGIMOBJVJKWUPIKRPGLNQXGUIUDKADMGVCLQCEKPAHCABMYJPRGOEWZBKIZIPOHIGHRARZQ");

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
    msg.setTimeStamp(0.829505310018915);
    msg.setSource(7995U);
    msg.setSourceEntity(179U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(55U);
    msg.list.assign("EXBVOBYAPJNCMDIYKGLHCOHQEJPJPIDUSZBBNMNVEVLTMCSVBSKACOXQTRHENXKNRTQVGFBQWZQALNOGFBKXFHTZQWTUHGROGOCLHUIEEULTSJWZRMIAIEOFWAJMGTNGFSAALYWZGCULHFDMNRHKHOZJYIYXUFVUEZPUGWVTPQBWXWHNULLTIDDVDOJSGZSQMYDQKIAJVROYXJCKIPDSA");

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
    msg.setTimeStamp(0.3148337721713992);
    msg.setSource(30097U);
    msg.setSourceEntity(123U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(146U);
    msg.list.assign("JVHTBTXTWFKQIGEYLQUPMWSDJRKELNODQELHAIGACTYBNCRUSEYUVMIUPZAKMGUYYEHCRJOUHGJQRFEWXXAENICOOXOPOBIBHDVYEVLTZ");

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
    msg.setTimeStamp(0.31514584708628113);
    msg.setSource(28722U);
    msg.setSourceEntity(29U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(15U);
    msg.value = -21005;

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
    msg.setTimeStamp(0.7615764447661459);
    msg.setSource(51365U);
    msg.setSourceEntity(85U);
    msg.setDestination(18929U);
    msg.setDestinationEntity(54U);
    msg.value = -25891;

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
    msg.setTimeStamp(0.60952464435863);
    msg.setSource(55925U);
    msg.setSourceEntity(149U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(167U);
    msg.value = 7517;

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
    msg.setTimeStamp(0.5940084810179034);
    msg.setSource(45433U);
    msg.setSourceEntity(153U);
    msg.setDestination(40714U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3991316442654038;

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
    msg.setTimeStamp(0.7277938163350517);
    msg.setSource(26008U);
    msg.setSourceEntity(7U);
    msg.setDestination(23997U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8873681468125036;

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
    msg.setTimeStamp(0.7537795227357482);
    msg.setSource(34586U);
    msg.setSourceEntity(54U);
    msg.setDestination(39968U);
    msg.setDestinationEntity(73U);
    msg.value = 0.7443955821816887;

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
    msg.setTimeStamp(0.648867945458828);
    msg.setSource(40634U);
    msg.setSourceEntity(227U);
    msg.setDestination(22879U);
    msg.setDestinationEntity(148U);
    msg.value = 0.47364430289903725;

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
    msg.setTimeStamp(0.6945854340872939);
    msg.setSource(25151U);
    msg.setSourceEntity(41U);
    msg.setDestination(12575U);
    msg.setDestinationEntity(24U);
    msg.value = 0.4152542460067936;

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
    msg.setTimeStamp(0.952472290358385);
    msg.setSource(40844U);
    msg.setSourceEntity(183U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(39U);
    msg.value = 0.296198657230314;

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
    msg.setTimeStamp(0.12427780037888414);
    msg.setSource(3206U);
    msg.setSourceEntity(172U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(118U);
    msg.validity = 40161U;
    msg.type = 233U;
    msg.utc_year = 29402U;
    msg.utc_month = 107U;
    msg.utc_day = 33U;
    msg.utc_time = 0.6617787901131187;
    msg.lat = 0.5360275867450669;
    msg.lon = 0.4365387290210744;
    msg.height = 0.31040937615571484;
    msg.satellites = 86U;
    msg.cog = 0.22434080793231814;
    msg.sog = 0.4545881118140871;
    msg.hdop = 0.7334733154845149;
    msg.vdop = 0.36136452954169684;
    msg.hacc = 0.18594509743981202;
    msg.vacc = 0.5077062228816791;

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
    msg.setTimeStamp(0.015371833923710332);
    msg.setSource(40685U);
    msg.setSourceEntity(90U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(121U);
    msg.validity = 33581U;
    msg.type = 238U;
    msg.utc_year = 2017U;
    msg.utc_month = 97U;
    msg.utc_day = 17U;
    msg.utc_time = 0.5446027966777913;
    msg.lat = 0.9297015315534811;
    msg.lon = 0.39539555350765443;
    msg.height = 0.5377353635574973;
    msg.satellites = 11U;
    msg.cog = 0.6266231482571898;
    msg.sog = 0.3002629423100418;
    msg.hdop = 0.3498414067926502;
    msg.vdop = 0.9420451736937897;
    msg.hacc = 0.3415363287093317;
    msg.vacc = 0.3774751407845136;

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
    msg.setTimeStamp(0.24339219700488812);
    msg.setSource(57413U);
    msg.setSourceEntity(130U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(51U);
    msg.validity = 33575U;
    msg.type = 108U;
    msg.utc_year = 42407U;
    msg.utc_month = 186U;
    msg.utc_day = 159U;
    msg.utc_time = 0.6105012117239444;
    msg.lat = 0.5355997823286545;
    msg.lon = 0.488705599528631;
    msg.height = 0.9672337942640921;
    msg.satellites = 135U;
    msg.cog = 0.8741863376771984;
    msg.sog = 0.7671085846038697;
    msg.hdop = 0.2592112782586573;
    msg.vdop = 0.8123931153433288;
    msg.hacc = 0.8889231888732407;
    msg.vacc = 0.22315509848022297;

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
    msg.setTimeStamp(0.8187233113352801);
    msg.setSource(35346U);
    msg.setSourceEntity(5U);
    msg.setDestination(47238U);
    msg.setDestinationEntity(242U);
    msg.time = 0.060017734911190224;
    msg.phi = 0.6310888977913321;
    msg.theta = 0.011723515424612918;
    msg.psi = 0.743797432729893;
    msg.psi_magnetic = 0.29218827575811135;

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
    msg.setTimeStamp(0.5361649200096119);
    msg.setSource(13331U);
    msg.setSourceEntity(87U);
    msg.setDestination(55900U);
    msg.setDestinationEntity(134U);
    msg.time = 0.46691581177386254;
    msg.phi = 0.9315520679240438;
    msg.theta = 0.004267737873338118;
    msg.psi = 0.19179817040074087;
    msg.psi_magnetic = 0.858118644623615;

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
    msg.setTimeStamp(0.46772371607236085);
    msg.setSource(56981U);
    msg.setSourceEntity(243U);
    msg.setDestination(10760U);
    msg.setDestinationEntity(171U);
    msg.time = 0.7222951696901591;
    msg.phi = 0.866371353077836;
    msg.theta = 0.3557641199564101;
    msg.psi = 0.936767608836572;
    msg.psi_magnetic = 0.29385516781764354;

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
    msg.setTimeStamp(0.8796162078914072);
    msg.setSource(825U);
    msg.setSourceEntity(0U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(218U);
    msg.time = 0.8671139160121376;
    msg.x = 0.6483035492257413;
    msg.y = 0.15859281753751842;
    msg.z = 0.568062756567756;
    msg.timestep = 0.8311523812851256;

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
    msg.setTimeStamp(0.968951722081605);
    msg.setSource(45185U);
    msg.setSourceEntity(85U);
    msg.setDestination(31195U);
    msg.setDestinationEntity(129U);
    msg.time = 0.8415238934120002;
    msg.x = 0.16557726281497198;
    msg.y = 0.7397238460686313;
    msg.z = 0.49306773607017396;
    msg.timestep = 0.8541503075756808;

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
    msg.setTimeStamp(0.8760131057947922);
    msg.setSource(6800U);
    msg.setSourceEntity(149U);
    msg.setDestination(16031U);
    msg.setDestinationEntity(241U);
    msg.time = 0.6528300984949007;
    msg.x = 0.29454726583126667;
    msg.y = 0.1683725299429405;
    msg.z = 0.7390518883697551;
    msg.timestep = 0.093289942563208;

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
    msg.setTimeStamp(0.5428478549771407);
    msg.setSource(5869U);
    msg.setSourceEntity(87U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(14U);
    msg.time = 0.8910780191532685;
    msg.x = 0.146907088152899;
    msg.y = 0.434085911804848;
    msg.z = 0.5194606397670066;

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
    msg.setTimeStamp(0.7391501953340662);
    msg.setSource(43141U);
    msg.setSourceEntity(45U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(218U);
    msg.time = 0.12583690680521287;
    msg.x = 0.6102588845770025;
    msg.y = 0.8265479410302036;
    msg.z = 0.3368179412950921;

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
    msg.setTimeStamp(0.022043059130458564);
    msg.setSource(20250U);
    msg.setSourceEntity(132U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(144U);
    msg.time = 0.5287175545467196;
    msg.x = 0.0009418060522572436;
    msg.y = 0.7574885673680962;
    msg.z = 0.9345454052120457;

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
    msg.setTimeStamp(0.36470798177495267);
    msg.setSource(20232U);
    msg.setSourceEntity(156U);
    msg.setDestination(54315U);
    msg.setDestinationEntity(117U);
    msg.time = 0.9375025351162606;
    msg.x = 0.041302968247601934;
    msg.y = 0.9459308929993934;
    msg.z = 0.7308112439245189;

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
    msg.setTimeStamp(0.10774885999762684);
    msg.setSource(32566U);
    msg.setSourceEntity(35U);
    msg.setDestination(32064U);
    msg.setDestinationEntity(104U);
    msg.time = 0.5477830442817062;
    msg.x = 0.13418732358067187;
    msg.y = 0.5519084304808667;
    msg.z = 0.21801470151578461;

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
    msg.setTimeStamp(0.09407242925336712);
    msg.setSource(43865U);
    msg.setSourceEntity(42U);
    msg.setDestination(5221U);
    msg.setDestinationEntity(1U);
    msg.time = 0.5559305850549551;
    msg.x = 0.09704564667772075;
    msg.y = 0.45197550446392154;
    msg.z = 0.06053539436257649;

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
    msg.setTimeStamp(0.6748925071275244);
    msg.setSource(34126U);
    msg.setSourceEntity(35U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(42U);
    msg.time = 0.6404318252505051;
    msg.x = 0.7805622449001851;
    msg.y = 0.6869701653444356;
    msg.z = 0.6871679537702567;

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
    msg.setTimeStamp(0.09155090364683072);
    msg.setSource(7998U);
    msg.setSourceEntity(102U);
    msg.setDestination(59741U);
    msg.setDestinationEntity(79U);
    msg.time = 0.11633013293858774;
    msg.x = 0.37660281604744195;
    msg.y = 0.4270454377573294;
    msg.z = 0.7384838261293574;

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
    msg.setTimeStamp(0.2379047867130265);
    msg.setSource(39263U);
    msg.setSourceEntity(41U);
    msg.setDestination(40369U);
    msg.setDestinationEntity(162U);
    msg.time = 0.05184109429466954;
    msg.x = 0.8947194170549454;
    msg.y = 0.7297155489149509;
    msg.z = 0.8870862144822343;

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
    msg.setTimeStamp(0.33045270106896163);
    msg.setSource(45443U);
    msg.setSourceEntity(253U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(178U);
    msg.validity = 247U;
    msg.x = 0.3625879393200713;
    msg.y = 0.5898378319700721;
    msg.z = 0.9188165366146391;

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
    msg.setTimeStamp(0.8567886109170488);
    msg.setSource(18376U);
    msg.setSourceEntity(126U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(123U);
    msg.validity = 208U;
    msg.x = 0.6381794030640472;
    msg.y = 0.03057945459248379;
    msg.z = 0.8112678666499975;

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
    msg.setTimeStamp(0.00029382897858976076);
    msg.setSource(2373U);
    msg.setSourceEntity(175U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(56U);
    msg.validity = 112U;
    msg.x = 0.31879266068073164;
    msg.y = 0.6099403328773743;
    msg.z = 0.8695634439371454;

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
    msg.setTimeStamp(0.9927520882787721);
    msg.setSource(20893U);
    msg.setSourceEntity(112U);
    msg.setDestination(58595U);
    msg.setDestinationEntity(178U);
    msg.validity = 79U;
    msg.x = 0.7795828872873335;
    msg.y = 0.07304640541040108;
    msg.z = 0.08701581009866999;

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
    msg.setTimeStamp(0.2573433934218363);
    msg.setSource(5132U);
    msg.setSourceEntity(134U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(147U);
    msg.validity = 225U;
    msg.x = 0.6456752567763447;
    msg.y = 0.7605047408813037;
    msg.z = 0.9904208740825707;

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
    msg.setTimeStamp(0.22815052489603727);
    msg.setSource(22448U);
    msg.setSourceEntity(253U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(186U);
    msg.validity = 162U;
    msg.x = 0.10540711187606144;
    msg.y = 0.48342477849956333;
    msg.z = 0.9560350744944855;

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
    msg.setTimeStamp(0.19574251253732056);
    msg.setSource(38025U);
    msg.setSourceEntity(37U);
    msg.setDestination(16305U);
    msg.setDestinationEntity(33U);
    msg.time = 0.7211263256826843;
    msg.x = 0.39420819554276976;
    msg.y = 0.46723134709909486;
    msg.z = 0.6314854177357431;

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
    msg.setTimeStamp(0.646925868515517);
    msg.setSource(26195U);
    msg.setSourceEntity(161U);
    msg.setDestination(40265U);
    msg.setDestinationEntity(55U);
    msg.time = 0.24113166098563643;
    msg.x = 0.09148107269827654;
    msg.y = 0.7150443467911677;
    msg.z = 0.3313734607374227;

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
    msg.setTimeStamp(0.2163290002437699);
    msg.setSource(16071U);
    msg.setSourceEntity(209U);
    msg.setDestination(15948U);
    msg.setDestinationEntity(210U);
    msg.time = 0.9404003601579238;
    msg.x = 0.1549902755584679;
    msg.y = 0.17387904328959702;
    msg.z = 0.3667706434029341;

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
    msg.setTimeStamp(0.9828775444729728);
    msg.setSource(45310U);
    msg.setSourceEntity(104U);
    msg.setDestination(12773U);
    msg.setDestinationEntity(95U);
    msg.validity = 83U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9123998000576503;
    tmp_msg_0.y = 0.011849176010730544;
    tmp_msg_0.z = 0.0008141110465915702;
    tmp_msg_0.phi = 0.45269849076238255;
    tmp_msg_0.theta = 0.4395761160227005;
    tmp_msg_0.psi = 0.16563135312144672;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.15336194230651867;
    tmp_msg_1.beam_height = 0.9168456959591119;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8609427461342893;

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
    msg.setTimeStamp(0.8743838747107247);
    msg.setSource(57553U);
    msg.setSourceEntity(252U);
    msg.setDestination(5250U);
    msg.setDestinationEntity(195U);
    msg.validity = 122U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4154772826141907;
    tmp_msg_0.y = 0.45728342588211046;
    tmp_msg_0.z = 0.9777163830382786;
    tmp_msg_0.phi = 0.8183145891431176;
    tmp_msg_0.theta = 0.5355398493514745;
    tmp_msg_0.psi = 0.926959518543174;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7941213146957994;

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
    msg.setTimeStamp(0.23588276782345097);
    msg.setSource(8621U);
    msg.setSourceEntity(197U);
    msg.setDestination(42275U);
    msg.setDestinationEntity(1U);
    msg.validity = 218U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7566359866864016;
    tmp_msg_0.y = 0.058575241432775815;
    tmp_msg_0.z = 0.3691250768737854;
    tmp_msg_0.phi = 0.8373953685771774;
    tmp_msg_0.theta = 0.9363390311903416;
    tmp_msg_0.psi = 0.17647767600686626;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9363719589017668;

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
    msg.setTimeStamp(0.6676669195555374);
    msg.setSource(38496U);
    msg.setSourceEntity(244U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4503084742380027;

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
    msg.setTimeStamp(0.4074124387505168);
    msg.setSource(58192U);
    msg.setSourceEntity(94U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(18U);
    msg.value = 0.2223365370400302;

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
    msg.setTimeStamp(0.3686477432137327);
    msg.setSource(46790U);
    msg.setSourceEntity(140U);
    msg.setDestination(33993U);
    msg.setDestinationEntity(233U);
    msg.value = 0.37258033920638833;

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
    msg.setTimeStamp(0.24710649286656816);
    msg.setSource(37182U);
    msg.setSourceEntity(118U);
    msg.setDestination(3874U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6007895620062801;

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
    msg.setTimeStamp(0.15606453019221633);
    msg.setSource(42601U);
    msg.setSourceEntity(165U);
    msg.setDestination(24598U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7395367647358267;

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
    msg.setTimeStamp(0.9081435460025427);
    msg.setSource(42167U);
    msg.setSourceEntity(200U);
    msg.setDestination(57117U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5480628057067293;

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
    msg.setTimeStamp(0.7769634039610633);
    msg.setSource(29106U);
    msg.setSourceEntity(53U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9482453515882873;

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
    msg.setTimeStamp(0.03206974318378153);
    msg.setSource(28378U);
    msg.setSourceEntity(108U);
    msg.setDestination(15507U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8694511943401302;

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
    msg.setTimeStamp(0.7559195372210636);
    msg.setSource(23210U);
    msg.setSourceEntity(41U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9153496106017432;

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
    msg.setTimeStamp(0.019782313697738974);
    msg.setSource(438U);
    msg.setSourceEntity(29U);
    msg.setDestination(9223U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8665432555860548;

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
    msg.setTimeStamp(0.8296828679034245);
    msg.setSource(53975U);
    msg.setSourceEntity(179U);
    msg.setDestination(21894U);
    msg.setDestinationEntity(207U);
    msg.value = 0.026664789204288164;

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
    msg.setTimeStamp(0.10518108746354116);
    msg.setSource(22257U);
    msg.setSourceEntity(24U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(69U);
    msg.value = 0.2648102922947241;

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
    msg.setTimeStamp(0.2720692688061911);
    msg.setSource(3479U);
    msg.setSourceEntity(192U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(88U);
    msg.value = 0.25215213342649956;

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
    msg.setTimeStamp(0.549083452056773);
    msg.setSource(53530U);
    msg.setSourceEntity(196U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(226U);
    msg.value = 0.3974518973042209;

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
    msg.setTimeStamp(0.5759473445437779);
    msg.setSource(31676U);
    msg.setSourceEntity(252U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(155U);
    msg.value = 0.3445702213940375;

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
    msg.setTimeStamp(0.9552495987702978);
    msg.setSource(37046U);
    msg.setSourceEntity(22U);
    msg.setDestination(13876U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8844569203964706;

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
    msg.setTimeStamp(0.41228008802584803);
    msg.setSource(56615U);
    msg.setSourceEntity(152U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3632923405633375;

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
    msg.setTimeStamp(0.33239950259712103);
    msg.setSource(53284U);
    msg.setSourceEntity(108U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(66U);
    msg.value = 0.650494620757272;

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
    msg.setTimeStamp(0.8444173982869158);
    msg.setSource(56281U);
    msg.setSourceEntity(135U);
    msg.setDestination(36665U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9149623118992611;

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
    msg.setTimeStamp(0.8990442248955061);
    msg.setSource(35961U);
    msg.setSourceEntity(194U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(238U);
    msg.value = 0.18066784995520868;

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
    msg.setTimeStamp(0.39756436952851215);
    msg.setSource(5359U);
    msg.setSourceEntity(226U);
    msg.setDestination(9221U);
    msg.setDestinationEntity(110U);
    msg.value = 0.23586320585717335;

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
    msg.setTimeStamp(0.3865185010545462);
    msg.setSource(40080U);
    msg.setSourceEntity(194U);
    msg.setDestination(32647U);
    msg.setDestinationEntity(106U);
    msg.value = 0.3482020626083381;

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
    msg.setTimeStamp(0.11805967623443425);
    msg.setSource(11862U);
    msg.setSourceEntity(176U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9046107741211449;

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
    msg.setTimeStamp(0.8695452716572866);
    msg.setSource(8685U);
    msg.setSourceEntity(98U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8146237522532831;

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
    msg.setTimeStamp(0.218946173127317);
    msg.setSource(65459U);
    msg.setSourceEntity(18U);
    msg.setDestination(63596U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.6606647842857734;
    msg.speed = 0.13766534200652492;
    msg.turbulence = 0.4785784695463525;

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
    msg.setTimeStamp(0.24110990310050906);
    msg.setSource(56520U);
    msg.setSourceEntity(86U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(59U);
    msg.direction = 0.5361199916066619;
    msg.speed = 0.38224474356077787;
    msg.turbulence = 0.2741733057670427;

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
    msg.setTimeStamp(0.06075777926397952);
    msg.setSource(14582U);
    msg.setSourceEntity(137U);
    msg.setDestination(22442U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.0694271521013371;
    msg.speed = 0.5038191233446198;
    msg.turbulence = 0.1670483737452484;

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
    msg.setTimeStamp(0.6057318943936013);
    msg.setSource(6864U);
    msg.setSourceEntity(104U);
    msg.setDestination(16786U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4816636307006865;

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
    msg.setTimeStamp(0.25776099171604894);
    msg.setSource(24370U);
    msg.setSourceEntity(81U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(139U);
    msg.value = 0.3663623636882032;

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
    msg.setTimeStamp(0.824395486660787);
    msg.setSource(21079U);
    msg.setSourceEntity(79U);
    msg.setDestination(45985U);
    msg.setDestinationEntity(55U);
    msg.value = 0.654735473458616;

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
    msg.setTimeStamp(0.7968881629278178);
    msg.setSource(62837U);
    msg.setSourceEntity(143U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(229U);
    msg.value.assign("BYREHGTMPVFEQSETFEGSCXEFUMLYDMOHQHCTEQCYDPGKUWDIVCFVZQMGWIOUWHXVT");

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
    msg.setTimeStamp(0.4623527561043853);
    msg.setSource(20720U);
    msg.setSourceEntity(78U);
    msg.setDestination(21526U);
    msg.setDestinationEntity(204U);
    msg.value.assign("LXQWISFBLDHOHKBIWKOTUDVBYZSMMQAJLISRPUSMUGFJOLYPEOXHCOANQQVLZFDGVZEXMNGARIJTUQGBBFGEEDQTXYGBFKKLHPXF");

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
    msg.setTimeStamp(0.16926302552154826);
    msg.setSource(28777U);
    msg.setSourceEntity(254U);
    msg.setDestination(272U);
    msg.setDestinationEntity(150U);
    msg.value.assign("UYQROFDJCEZPHFMNIGBJMJSQAVETMVFSSFFNBXSVTANHRUUPOQVFEIQTCZYIELTXJAHGYPXUBSNR");

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
    msg.setTimeStamp(0.062165743668309736);
    msg.setSource(21455U);
    msg.setSourceEntity(12U);
    msg.setDestination(17458U);
    msg.setDestinationEntity(219U);
    const char tmp_msg_0[] = {-32, -31, 70, -22, 110, -49, 13, -14, -77, 63, -117, -33, -28, -57, 51, -101, -5, 47, -22, 16, 78, -56, 106, -10, 74, 49, 14, 99, -74, 42, 47, 28, -58, 51, -95, 26, -128, 12, 69, 27, 48, -12, 56, -28, -79, -13, -52, -105, 82};
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
    msg.setTimeStamp(0.29723305555530755);
    msg.setSource(43613U);
    msg.setSourceEntity(170U);
    msg.setDestination(38239U);
    msg.setDestinationEntity(153U);
    const char tmp_msg_0[] = {-66, -122, 82, -28, 121, 72, 98, -18, 33, 67, 119, 8, 121, 101, -31, -103, -89, 5, 79, 68, 79, -1, -92, 126, -119, -15, 99, -19, 82, -114, 9, 110, -98, -41, 64, 61, -88, -103, 87, 70, -67, -35, -94, 22, 9, 121, 88, -113, -6, 122, -72, 80, -44, -31, 66, 23, 113, -14, 67, -111, 90, 62, -107, -37, 8, -100, -51, -21, -100, -5, 35, 114, 98, -99, -43, 59, -124, 124, -94, 10, -42, 92, 89, 17, -48, -12, 93, 5, -125, 84, 118, 38, -111, 124, -23, -74, -126, 53, -35, 18, -102, 114, -98, 25, 9, -6, -27, -29, -82, 46, 111, -73, 108, -16, 59, 88, -120, 112, 49, -21, -37, -120, 69, -77, 58, -73, 17, -52, -51, -76, -16, -21, -122, -91, 125, -126, -10, -72, 78, -93, 13, 76, 98, 40, -11, -80, 44, 64, 39, 20, 101, -47, -6, 66, 18, 75, 9, 12, -15, 96, -102, -77, -89, 73, 14, 68, 43, 112, 42, 4, 105, 88, -117, -15, 41, 32, -90, 87, -109, 52, -73, 41, -3, 24, -74, 111, 8, -34, 126, 65, 109, -111, 45, -48, -6, -1, -33, 83, -40, 104, -45, 50, -47, 8, -60, -58, 70, -48, -123, 66, 24, -32, 10, 112, -69, 67, 119, 62, 79, 3, 23, 29, 42, -76, -41, 71, -58, 43};
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
    msg.setTimeStamp(0.21924656464679138);
    msg.setSource(11711U);
    msg.setSourceEntity(87U);
    msg.setDestination(48482U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {-14, 113, 35, 70, -60, 95, -95, -109, -38, -6, -120, 13, -35, 114, -67, -120, 47, 77, -34, -121, 24, -116, 22, 105, -119, -69, -38, 124, 72, 108, 99, -59, 46, 38, -88, 15, -115, 92, 38, 70, 51, 125, -85, 76, 126, -107, 94, 109, 89, 107, 74, 69, -74, 101, -79, 104, -128, 63, -77, 126, 109, -59, 47, -37, 80, 47, 122, 18, -32, -100, 16, 59, -6, 91, -69, -86, -64, -107, 82, 5, -77, -58, 21, 62, -100, -49, -36, -42, -103, 124, -82, -62, 37, -1, 16, 33, 106, -94, -34, -126, 20, -115, -113, 72, 41, -100, 25, 3, -116, -93, 12, 66, -3, -123, -99, -2, -108, 16, -54, 22, 77, -96, 80, -33, 53, 28, 32, -87, -20, -30, -50, -29, 15, 64};
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
    msg.setTimeStamp(0.04267397932354866);
    msg.setSource(59268U);
    msg.setSourceEntity(145U);
    msg.setDestination(28338U);
    msg.setDestinationEntity(37U);
    msg.frequency = 2871996441U;
    msg.min_range = 44612U;
    msg.max_range = 43767U;

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
    msg.setTimeStamp(0.23098797245940117);
    msg.setSource(28542U);
    msg.setSourceEntity(63U);
    msg.setDestination(53395U);
    msg.setDestinationEntity(230U);
    msg.frequency = 2981127749U;
    msg.min_range = 56344U;
    msg.max_range = 40358U;

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
    msg.setTimeStamp(0.4082157982204021);
    msg.setSource(28038U);
    msg.setSourceEntity(187U);
    msg.setDestination(58672U);
    msg.setDestinationEntity(115U);
    msg.frequency = 160377506U;
    msg.min_range = 14047U;
    msg.max_range = 65407U;

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
    msg.setTimeStamp(0.04688379185532854);
    msg.setSource(37578U);
    msg.setSourceEntity(60U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(19U);
    msg.type = 98U;
    msg.frequency = 1962137781U;
    msg.min_range = 2548U;
    msg.max_range = 54869U;
    msg.bits_per_point = 30U;
    msg.scale_factor = 0.656331055386048;
    const char tmp_msg_0[] = {96, 100, -99, 92, -18, 99, -102, -18, -125, -81, 108, 111, -62, 88, 111, -41, 80, -89, 44, -124, 18, 32, -96, 112, -16, -96, -119, 47, -80, -128, 97, -38, -1, 103, -44, -36, -55, -37, -32, 37, -45, 73, -126, 55, -107, -100, 18, -31, -45, -19, 50, 123, -12, -112, 4, -89, -117, 84, -4, 125, 80, 120, -12, -3, 24, 124, 119, 99, -12, -63, 73, -72, -120, 16, 78, -11, 27, 43, 108, -83, 0, -4, 88, -3, 40, 77, 5, -50, -84, -11, 95, 49, -41, -45, 88, -128, -49, 85, -118, -96, 37, -97, 91, 42, 63, 110, -22, -101, -17, -118, -91, 6, 49, 5, 10, -127, 81, -128, 124, 94, 41, -103, 126, -126, 123, 125, -39, 56, 120, 56, -112, 19, 55, -33, 106, 76, -67, -22, -27, -64, 107, -116, -77, -21, 72, 80, 20, 86, -76, -28, -39, 34, 94, 85, 19, 118, 31, -96, -8, 100, -119, -122, 62, 70, 40, 94, 103, -118, -3, -76, 29, 40, -96, 113, -48, 101, 38, 7, -8, 124, 114, -88, -32, -76, 19, 14, 80, -16, 45, -96, 121, -34, -106, -37, -48, 110, -119, 60, 81, 45, -40, -20, 49, 79, 16, 91, 47, -12, -5, 26, -25, -79, -37, 64, -111, -108, -120, 126, -86, -109, 67, 8, -62, -118, 68, 76, -85};
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
    msg.setTimeStamp(0.000271253972058072);
    msg.setSource(8756U);
    msg.setSourceEntity(126U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(147U);
    msg.type = 225U;
    msg.frequency = 1471639418U;
    msg.min_range = 29289U;
    msg.max_range = 1U;
    msg.bits_per_point = 19U;
    msg.scale_factor = 0.9525317531197425;
    const char tmp_msg_0[] = {-31, 6, 17, 23, -73, 50, 64, 7, -98, 105, 51, -115, 75, 27, 113, 115, -25, 110, -72, 21, -120, -51, -41, -3, -87, -69, 48, -41, -64, -116, -120, 88, -110, 87, -41, -95, -34, 100, -126, 103, 63, 117, -79, -29, 103, 14, 99, -79, 69, 49, 33, 47, 105, -58, -105, 30, 63, 123, -102, -27, -113, 35, 102, -110, -28, 125, 55, -50, -8, -20, -8, -45, -49, -3, 34, 95, 30, -116, 71, 38, 124, -37, -10, 21, 30, 78, 23, -122, 8, 124, 71, -13, -97, -19, -45, -22, -45, 117, -5, 68, -63, -72, -97, 96, -94, 94, -58, 36, 30, -1, -88, 55, 55, 5};
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
    msg.setTimeStamp(0.9232701722634464);
    msg.setSource(35446U);
    msg.setSourceEntity(117U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(104U);
    msg.type = 202U;
    msg.frequency = 299520500U;
    msg.min_range = 26482U;
    msg.max_range = 64213U;
    msg.bits_per_point = 232U;
    msg.scale_factor = 0.5980986257089252;
    const char tmp_msg_0[] = {-65, -13, -111, -40, 89, 101, -22, -19, 31, -19, 51, 36, 8, 126, -118, -60, -51, -68, -69, 93, 49, 15, 59, 36, -25, -108, -89, -73, 103, -102, -125, 120, -97, -117, 15, -90, -83, -18, -29, 1, 93, -76, -113, 84, 103, -23, -3, -116, -14, 6, 28, 87, -58, -56, -8, 11, 4, -12, 44, -7, -65, -45, -64, -83, -20, 90, 121, -122, 123, 54, 124, 5, 6, -102, 23, 21, 100, -1, 115, -11, 41, -10, 107, -51, 116, 32, -60, -77, -86, 113, 124, 7, -48, 11, 24, 68, -16, 27, 13, -84, -98, 54, -23, 29, 2, 103, 61, 95, 30, 8, -115, -113, 6, -72, -97, -125, 50, 44, -127};
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
    msg.setTimeStamp(0.6904508294625163);
    msg.setSource(57691U);
    msg.setSourceEntity(113U);
    msg.setDestination(35318U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.30712466770344005);
    msg.setSource(15676U);
    msg.setSourceEntity(80U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.6007985753055618);
    msg.setSource(54388U);
    msg.setSourceEntity(185U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.28993580666399643);
    msg.setSource(56407U);
    msg.setSourceEntity(18U);
    msg.setDestination(7740U);
    msg.setDestinationEntity(205U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.2293364378686944);
    msg.setSource(23686U);
    msg.setSourceEntity(170U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(168U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.8219942217562807);
    msg.setSource(49018U);
    msg.setSourceEntity(197U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(158U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.44862918873578284);
    msg.setSource(18858U);
    msg.setSourceEntity(197U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0013112341948789963;
    msg.confidence = 0.5289903833465596;
    msg.opmodes.assign("KWYTSPSLJVHUNYATPFILKLUEWONHKQCYMYHQGKSJYNDXDFYKCHKBGPBQXOAJTMFUNSAAMAWEVNSNJYDPTXXKTZQBFDWJSKTZHFEMQVLCAXBOJHJPPMRFCEJRKTABRZEQTPLVCSXZGRHBYCPUJXVHOBLRLBQMVNIFWZNEVXMGPBYZSUOSZDFIIDLIOZGXSORINOFREVMETCGIMDLQY");

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
    msg.setTimeStamp(0.5296670136601832);
    msg.setSource(64122U);
    msg.setSourceEntity(11U);
    msg.setDestination(49202U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5241783972579009;
    msg.confidence = 0.10582479241906706;
    msg.opmodes.assign("KSDHXVKHUXPUGZLOJJDPRSTJQKNDKIFXFKGDQMDBELSGPALDZWTHIOC");

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
    msg.setTimeStamp(0.18994145126783657);
    msg.setSource(16012U);
    msg.setSourceEntity(160U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9542844066216388;
    msg.confidence = 0.5438657845709517;
    msg.opmodes.assign("YGYPQEZZCOHWWYBHBRWERDTBA");

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
    msg.setTimeStamp(0.6436634871476716);
    msg.setSource(60652U);
    msg.setSourceEntity(108U);
    msg.setDestination(9967U);
    msg.setDestinationEntity(237U);
    msg.itow = 456201242U;
    msg.lat = 0.09331914421864329;
    msg.lon = 0.3690951616810687;
    msg.height_ell = 0.40219559474929334;
    msg.height_sea = 0.3682509244771226;
    msg.hacc = 0.5794619707763133;
    msg.vacc = 0.8274508846306454;
    msg.vel_n = 0.5239962722615477;
    msg.vel_e = 0.24969951771344567;
    msg.vel_d = 0.8639447568070492;
    msg.speed = 0.6553769796984871;
    msg.gspeed = 0.43115665319906327;
    msg.heading = 0.44106712427475203;
    msg.sacc = 0.07144792636486486;
    msg.cacc = 0.02442684246138782;

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
    msg.setTimeStamp(0.7742991989786169);
    msg.setSource(44810U);
    msg.setSourceEntity(93U);
    msg.setDestination(16796U);
    msg.setDestinationEntity(158U);
    msg.itow = 1725973218U;
    msg.lat = 0.43971417301798177;
    msg.lon = 0.17133550892443217;
    msg.height_ell = 0.5589970135574115;
    msg.height_sea = 0.5721071795043615;
    msg.hacc = 0.10730194666369852;
    msg.vacc = 0.642516991460616;
    msg.vel_n = 0.5541600503248006;
    msg.vel_e = 0.40137238094830796;
    msg.vel_d = 0.6292879319742718;
    msg.speed = 0.3773862275244805;
    msg.gspeed = 0.4733924913802998;
    msg.heading = 0.8339391778037056;
    msg.sacc = 0.8729350162640115;
    msg.cacc = 0.9669814858068658;

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
    msg.setTimeStamp(0.5153216867662079);
    msg.setSource(22697U);
    msg.setSourceEntity(155U);
    msg.setDestination(3348U);
    msg.setDestinationEntity(205U);
    msg.itow = 2210788524U;
    msg.lat = 0.7150193888747151;
    msg.lon = 0.7273318582061192;
    msg.height_ell = 0.6681765256897945;
    msg.height_sea = 0.19021372616729448;
    msg.hacc = 0.3229713964768024;
    msg.vacc = 0.9754978684747656;
    msg.vel_n = 0.7450765909162118;
    msg.vel_e = 0.3171261245120348;
    msg.vel_d = 0.057785153547285195;
    msg.speed = 0.6102621797035647;
    msg.gspeed = 0.7907191898396325;
    msg.heading = 0.40063798660082195;
    msg.sacc = 0.6243940467936812;
    msg.cacc = 0.3542933270884414;

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
    msg.setTimeStamp(0.13806684115009127);
    msg.setSource(54976U);
    msg.setSourceEntity(109U);
    msg.setDestination(46279U);
    msg.setDestinationEntity(75U);
    msg.id = 52U;
    msg.value = 0.34953687933955646;

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
    msg.setTimeStamp(0.30051347370401604);
    msg.setSource(47754U);
    msg.setSourceEntity(200U);
    msg.setDestination(51799U);
    msg.setDestinationEntity(37U);
    msg.id = 182U;
    msg.value = 0.1715960371240538;

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
    msg.setTimeStamp(0.3339207994946911);
    msg.setSource(42549U);
    msg.setSourceEntity(92U);
    msg.setDestination(35959U);
    msg.setDestinationEntity(144U);
    msg.id = 111U;
    msg.value = 0.4658986733259064;

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
    msg.setTimeStamp(0.4130443264674022);
    msg.setSource(6259U);
    msg.setSourceEntity(183U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(81U);
    msg.x = 0.31762098625415625;
    msg.y = 0.282941882718714;
    msg.z = 0.5956923718923264;
    msg.phi = 0.11032709958890141;
    msg.theta = 0.16522585135800016;
    msg.psi = 0.9751624308436257;

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
    msg.setTimeStamp(0.8910433119002773);
    msg.setSource(3014U);
    msg.setSourceEntity(233U);
    msg.setDestination(4908U);
    msg.setDestinationEntity(188U);
    msg.x = 0.28654105556868303;
    msg.y = 0.353207942457913;
    msg.z = 0.06225322430240432;
    msg.phi = 0.01986791334754834;
    msg.theta = 0.8979957831230199;
    msg.psi = 0.09556375641721593;

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
    msg.setTimeStamp(0.19994629822109988);
    msg.setSource(56006U);
    msg.setSourceEntity(194U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9198523507776047;
    msg.y = 0.7300377562858001;
    msg.z = 0.39352002747709125;
    msg.phi = 0.5900468017950662;
    msg.theta = 0.945200755354605;
    msg.psi = 0.31974153711330844;

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
    msg.setTimeStamp(0.8941850375823208);
    msg.setSource(5052U);
    msg.setSourceEntity(100U);
    msg.setDestination(64555U);
    msg.setDestinationEntity(149U);
    msg.beam_width = 0.9282313287633985;
    msg.beam_height = 0.7407998082077522;

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
    msg.setTimeStamp(0.8449419807649449);
    msg.setSource(9033U);
    msg.setSourceEntity(178U);
    msg.setDestination(20017U);
    msg.setDestinationEntity(88U);
    msg.beam_width = 0.6838563561740303;
    msg.beam_height = 0.2115528341995353;

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
    msg.setTimeStamp(0.11191435579410958);
    msg.setSource(40015U);
    msg.setSourceEntity(87U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(198U);
    msg.beam_width = 0.62600960385779;
    msg.beam_height = 0.751282453723862;

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
    msg.setTimeStamp(0.9000147028426514);
    msg.setSource(13897U);
    msg.setSourceEntity(52U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(252U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.49618724259425095);
    msg.setSource(19234U);
    msg.setSourceEntity(199U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(239U);
    msg.sane = 28U;

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
    msg.setTimeStamp(0.12553517440828765);
    msg.setSource(36077U);
    msg.setSourceEntity(179U);
    msg.setDestination(36696U);
    msg.setDestinationEntity(154U);
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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.15845285683017585);
    msg.setSource(64813U);
    msg.setSourceEntity(156U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(196U);
    msg.id = 190U;
    msg.zoom = 126U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.15784924093368213);
    msg.setSource(18554U);
    msg.setSourceEntity(143U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(205U);
    msg.id = 57U;
    msg.zoom = 109U;
    msg.action = 211U;

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
    msg.setTimeStamp(0.7390293591548799);
    msg.setSource(34854U);
    msg.setSourceEntity(115U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(57U);
    msg.id = 154U;
    msg.zoom = 251U;
    msg.action = 86U;

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
    msg.setTimeStamp(0.1670751774659911);
    msg.setSource(52636U);
    msg.setSourceEntity(158U);
    msg.setDestination(36697U);
    msg.setDestinationEntity(93U);
    msg.id = 147U;
    msg.value = 0.900791624281349;

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
    msg.setTimeStamp(0.4337863440387848);
    msg.setSource(31010U);
    msg.setSourceEntity(101U);
    msg.setDestination(46404U);
    msg.setDestinationEntity(222U);
    msg.id = 134U;
    msg.value = 0.5784648796051245;

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
    msg.setTimeStamp(0.13912961544234048);
    msg.setSource(20283U);
    msg.setSourceEntity(99U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(36U);
    msg.id = 70U;
    msg.value = 0.7033640135624424;

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
    msg.setTimeStamp(0.07401715000736109);
    msg.setSource(33124U);
    msg.setSourceEntity(170U);
    msg.setDestination(6996U);
    msg.setDestinationEntity(127U);
    msg.id = 247U;
    msg.value = 0.22276681722197034;

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
    msg.setTimeStamp(0.9337587405261807);
    msg.setSource(4259U);
    msg.setSourceEntity(120U);
    msg.setDestination(5532U);
    msg.setDestinationEntity(163U);
    msg.id = 165U;
    msg.value = 0.7694019159224771;

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
    msg.setTimeStamp(0.9088509353985799);
    msg.setSource(30419U);
    msg.setSourceEntity(54U);
    msg.setDestination(57599U);
    msg.setDestinationEntity(78U);
    msg.id = 100U;
    msg.value = 0.12211418614885383;

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
    msg.setTimeStamp(0.5421858516405801);
    msg.setSource(30287U);
    msg.setSourceEntity(126U);
    msg.setDestination(10660U);
    msg.setDestinationEntity(37U);
    msg.id = 55U;
    msg.angle = 0.7220954262122544;

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
    msg.setTimeStamp(0.7634252710882153);
    msg.setSource(38331U);
    msg.setSourceEntity(46U);
    msg.setDestination(1435U);
    msg.setDestinationEntity(135U);
    msg.id = 13U;
    msg.angle = 0.6251928080376837;

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
    msg.setTimeStamp(0.16723526726648263);
    msg.setSource(21046U);
    msg.setSourceEntity(87U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(245U);
    msg.id = 211U;
    msg.angle = 0.7224630639234287;

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
    msg.setTimeStamp(0.42912519468256916);
    msg.setSource(6623U);
    msg.setSourceEntity(89U);
    msg.setDestination(381U);
    msg.setDestinationEntity(115U);
    msg.op = 30U;
    msg.actions.assign("NCRFILJCCOFBVTOYNUMWOTVKROTBGQHQQGPTYJZHZUKDELWSGTBORZPKXDUYIVTMUPGIZ");

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
    msg.setTimeStamp(0.24877229172552073);
    msg.setSource(64655U);
    msg.setSourceEntity(182U);
    msg.setDestination(21334U);
    msg.setDestinationEntity(180U);
    msg.op = 236U;
    msg.actions.assign("LRDWOPSYCAQMRCCOXSFLUYZNUATOBAISKWOOQNLZXDOVXKGDJHZFWYHIEUMTZDJIZMQULVSNBIQHZMWVCQDVUMBFVFXWAKQKGLPIAXEYMXOWFRHSJUQBKASTMIFAZBNETTRFTEBOVCAHFQNGOZNGKWMXPBUPJW");

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
    msg.setTimeStamp(0.19231028013392293);
    msg.setSource(5557U);
    msg.setSourceEntity(75U);
    msg.setDestination(24210U);
    msg.setDestinationEntity(171U);
    msg.op = 64U;
    msg.actions.assign("QEYFLPCTQAVSHSFLRYGXSCIZQODFCIUBMYDQRWVJNTYKBJOEUFEPAAMUEZSKKKNDZUCQPIGBJILIVPVGGJUMCNBPYHKQRGZPLHCJPWGKZXNOYFRIWBNVLCOTXBDCILPDWFYKYRMOJWQPWSHDQMFRBBWMFQNTAVWDNOLCLTSZIUHURRZXZMKHMWYYZJALDDISJHSLXAEPORZJURXSXOTTIEXTHNABUG");

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
    msg.setTimeStamp(0.3569553874446809);
    msg.setSource(157U);
    msg.setSourceEntity(136U);
    msg.setDestination(1969U);
    msg.setDestinationEntity(111U);
    msg.actions.assign("QYNXQVFQWJNGVAMZHAXCVPLHYEZJLXVHAKTDEZOLJGCEAUJTRSQZWSORFBBWZQDSXFMIJDQ");

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
    msg.setTimeStamp(0.9131864065102632);
    msg.setSource(54275U);
    msg.setSourceEntity(107U);
    msg.setDestination(61334U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("KHBBYKMGMBXOPNOJEXPPKDOQYXLNSGYSANWHIUPKIAXTFDHXTEHRAKRTFLIJLDJTUWVRGAPZILBPZ");

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
    msg.setTimeStamp(0.8953442468211673);
    msg.setSource(26500U);
    msg.setSourceEntity(130U);
    msg.setDestination(338U);
    msg.setDestinationEntity(89U);
    msg.actions.assign("ISPQQNTLJKSEQKMJWBNZKPOLGRAZKFSFQUXCGKCTKWRGYHBGEEFBILECVVMOTCLOCPUWRZMWTXSGCNZNJRVXVSXFQYYDCNSRPEJTAZZALEYIQBIIQPRTWPGIHJFIXWBVAITXIYNAGMRLDKAGMIDTUHJAWRTLFJAUZXWHW");

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
    msg.setTimeStamp(0.5761936321584712);
    msg.setSource(25342U);
    msg.setSourceEntity(98U);
    msg.setDestination(36932U);
    msg.setDestinationEntity(33U);
    msg.button = 79U;
    msg.value = 185U;

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
    msg.setTimeStamp(0.7985231534266949);
    msg.setSource(47204U);
    msg.setSourceEntity(78U);
    msg.setDestination(1680U);
    msg.setDestinationEntity(87U);
    msg.button = 212U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.9526578293640715);
    msg.setSource(58519U);
    msg.setSourceEntity(171U);
    msg.setDestination(35932U);
    msg.setDestinationEntity(226U);
    msg.button = 214U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.7614207798809143);
    msg.setSource(27779U);
    msg.setSourceEntity(66U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(65U);
    msg.op = 148U;
    msg.text.assign("NMREVQIAWQFYDMPODSGBAHKYSTGKOHEMLJIMEEYAPLMUWDLBWGDKUEZGPPWUFZYCGITVXMJZVQOUPKZBAVNCCAHEIUCLUKPXYHUXEIGBDQSBOXVJLRVGAIMSQNTBYBYGNCNXTHUIVXPQTOCRJPEYDJRFAVAWQ");

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
    msg.setTimeStamp(0.06111253050609622);
    msg.setSource(62850U);
    msg.setSourceEntity(94U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(9U);
    msg.op = 7U;
    msg.text.assign("MNJEUDKFQPBKXGGIZUJHNPGRXGHACKUHCKSVEPXDFDYBCOPPFARF");

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
    msg.setTimeStamp(0.680634187939348);
    msg.setSource(49406U);
    msg.setSourceEntity(25U);
    msg.setDestination(25807U);
    msg.setDestinationEntity(245U);
    msg.op = 192U;
    msg.text.assign("UZAFHEUCIQNISMKYRPYNTCZUTOCFKULCKMXREKWTDVNPADSHXUVFBJJHNKLAZJVDBNEOEJIXGWWXEKEDRNCDTIJCGUSCTDHVYZGPMXLPOYEYYWOSGSVFHDLYJYPNCMLAIWDRAPXVAMUTTLJPZXGZGFAZRNMRQWSVQUOSMBAHPHZWO");

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
    msg.setTimeStamp(0.6333627147302777);
    msg.setSource(15330U);
    msg.setSourceEntity(140U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(95U);
    msg.op = 245U;
    msg.time_remain = 0.559892939814717;
    msg.sched_time = 0.07036106624236016;

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
    msg.setTimeStamp(0.9891390857607758);
    msg.setSource(47049U);
    msg.setSourceEntity(235U);
    msg.setDestination(34774U);
    msg.setDestinationEntity(158U);
    msg.op = 172U;
    msg.time_remain = 0.3835482876065197;
    msg.sched_time = 0.0920379242806112;

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
    msg.setTimeStamp(0.9976878794892976);
    msg.setSource(1153U);
    msg.setSourceEntity(175U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(130U);
    msg.op = 65U;
    msg.time_remain = 0.49190255363160607;
    msg.sched_time = 0.3789175870662047;

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
    msg.setTimeStamp(0.8201944901194045);
    msg.setSource(4614U);
    msg.setSourceEntity(121U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(159U);
    msg.name.assign("KFZIQHOMZBGKGJITPSCZDSIBKLPPESIQC");
    msg.op = 202U;
    msg.sched_time = 0.7422328242722886;

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
    msg.setTimeStamp(0.08347043487498362);
    msg.setSource(14206U);
    msg.setSourceEntity(223U);
    msg.setDestination(40995U);
    msg.setDestinationEntity(217U);
    msg.name.assign("COBANXNUSFTFVQVFLBMLZKMTNQAEKDDLIPVHFOSOAHKWSGOSMUQHUDFXDVMECYYDGRXCEDRMKTTCBQYPOTCPKYODOGNIOJIJITRAUBTSPHPHUVMSEAMCRIHORCLUIDBNQKSYIWLNSTRPPJARQSKMIFXZDVXQHIZLXWJVEEFRWZEAKJRGKZVZMCCRFGAZKAJQWPQYGJNWYUPEZATJFJMHUOLFBGVWHLTXBJUGXXYZVBGWDBY");
    msg.op = 226U;
    msg.sched_time = 0.609544103960135;

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
    msg.setTimeStamp(0.9174344021443563);
    msg.setSource(24074U);
    msg.setSourceEntity(22U);
    msg.setDestination(2958U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LFZHURNHNIDWZGLRFKFPHCESLBSZZABTCOQAVPPZBJLKECMBPXMJCQPVBMPYWUIPAXYGYFWQVGSVTHITYHXNWQEXTYRITZXJPNBTZDOIBHSNSQUMGISXRGYHELSJCOGYNRAYUUCSUXIDKOKUKJPDPLEQXIVFSQFNKAERTLQRTSMWCLX");
    msg.op = 100U;
    msg.sched_time = 0.08983647880959;

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
    msg.setTimeStamp(0.45595580269424296);
    msg.setSource(55331U);
    msg.setSourceEntity(84U);
    msg.setDestination(23306U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.6823275471995959);
    msg.setSource(3396U);
    msg.setSourceEntity(14U);
    msg.setDestination(34984U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.4618083902065633);
    msg.setSource(32417U);
    msg.setSourceEntity(220U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.242701388281804);
    msg.setSource(25692U);
    msg.setSourceEntity(213U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(190U);
    msg.name.assign("QMGFOBWVTNMZEPMQPGQBMSXXCTKIHLTUBHIISKDWUAAXPDTEGRAZNDVRVZPPZQTUREXQBCSHIMDJYZGCXKOFLVJZEVWOXKPMPUYWAEJNYNHKPCKUTWKKLJDYTWDCUYRBZZMNHDSDNRFCGJYLQVSGPIQ");
    msg.state = 189U;

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
    msg.setTimeStamp(0.8179237725040124);
    msg.setSource(16723U);
    msg.setSourceEntity(126U);
    msg.setDestination(27046U);
    msg.setDestinationEntity(130U);
    msg.name.assign("LUMAVZNDGWYSDZFNCGEMLKLAQWCRVDDJBIKZZTRVJYUHWKLRTOTZMOXNJMCOOEYFRZJBPGIVZETBWLEQHL");
    msg.state = 26U;

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
    msg.setTimeStamp(0.41752801931384853);
    msg.setSource(41730U);
    msg.setSourceEntity(150U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(195U);
    msg.name.assign("CKDJBFNMKLRPVOSEHIVQLUAJMEZPHSLYWUBKNXUABZYAUYDBLKXSUGTQFCFFZLHCLAZRWOOVQWGKITCHBMMVMBUENKGCJDKXERVZHXAQTYLQVSHNUKJOHVYXGQOIMTWXDTQYSNDCEZOPJEG");
    msg.state = 220U;

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
    msg.setTimeStamp(0.7808322509409507);
    msg.setSource(6312U);
    msg.setSourceEntity(151U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(254U);
    msg.name.assign("RZLPCTKDCNPBUBIAQVNJOXBKRY");
    msg.value = 32U;

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
    msg.setTimeStamp(0.14373562203569046);
    msg.setSource(26942U);
    msg.setSourceEntity(40U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(166U);
    msg.name.assign("JNYPMYCXJUELAWHXMPMGFFKWTSHBCNVTFOPYWZILFZGNVDNAVRBTISPNKXQDEZIPFMKXBRNKNYEZNDOQBAOQOPQWYDDHUXTHFMACZSOXHRPWTVBSSIIQTKWFATTUAYAKLBAHVZMMWGEQFVZNGTSIJJPSBCY");
    msg.value = 14U;

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
    msg.setTimeStamp(0.231496508338482);
    msg.setSource(38162U);
    msg.setSourceEntity(24U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(217U);
    msg.name.assign("VHCTDEGJMSYLLZRETUFIRJDYOFKJNGIVXIWMYBQGIBQCCMPZBRHAOXKSNXZYCQVIQMLGWBCVSIFPACTJKDWTRHRNREMTDPDRSJQNDUMRKMWZXJVKHZEGULWCWIVSBYOBSOSCDGLFMQNPLWBEHSYKZCTJMUXJQQNMFAKYAEEKZWNQVPAHBSACTUIOVESOOZDGFAOLLXUFLZGUAWRADVPUXTHHRXBYAHZ");
    msg.value = 139U;

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
    msg.setTimeStamp(0.7732379469178623);
    msg.setSource(22864U);
    msg.setSourceEntity(233U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(25U);
    msg.name.assign("BENSHXHFLABZOKGYIISUOAXBCHZUNJXDJCPVFCMFALLHBZEREHYBLPMXTOJPHRPMGLKRINXZQQYATGXSSKPKMBVHEJDSRBKXZTZFQAXBQNBLDGWQGHFFUWUPLRGRLIMSIOAFWDK");

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
    msg.setTimeStamp(0.9998207542824202);
    msg.setSource(35665U);
    msg.setSourceEntity(81U);
    msg.setDestination(53875U);
    msg.setDestinationEntity(128U);
    msg.name.assign("TCPMTOAYMYOKGCHWQCIYPSDSTEJNGWLMTPDYBGJVOGVBLURENRPLXWLOAZYSOMTDNXWBSUVQUZDHCVP");

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
    msg.setTimeStamp(0.13713226882621088);
    msg.setSource(29352U);
    msg.setSourceEntity(250U);
    msg.setDestination(41660U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GSADXBQIASMPFAEQQUCDH");

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
    msg.setTimeStamp(0.9626240895656887);
    msg.setSource(30666U);
    msg.setSourceEntity(224U);
    msg.setDestination(38751U);
    msg.setDestinationEntity(159U);
    msg.name.assign("INPIOOHRZAYYQOPCKNLLDXDVWJFMZUMXRVPYPBFEWZ");
    msg.value = 73U;

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
    msg.setTimeStamp(0.8128532847507227);
    msg.setSource(61154U);
    msg.setSourceEntity(122U);
    msg.setDestination(29923U);
    msg.setDestinationEntity(18U);
    msg.name.assign("UXEEICIPJJYDEVKPRZJVUHPMNPARQOKJRUWLZLJCDTVFESWIXLATOJXBLTMMUSNPHEXNYZMTSAUQNTPEJWUGCQDZQLMYFIZRLUKZBYXXQVUMRQDAZIBFYLSHTSOWRWOSQMBGSFCMRZDAOOKYMSSQOEYKGBWDDGQOJGVTWSKFAYOCNFKBGVEBIUTXDJANRAEZXLICCZFFBMFAWGLHOHQTRICHBGNNKBKDYPIGHWPFGWTLXVUKRPHNEY");
    msg.value = 164U;

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
    msg.setTimeStamp(0.33697027113971934);
    msg.setSource(39860U);
    msg.setSourceEntity(182U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(93U);
    msg.name.assign("UIIZKNPCYNAATPKWWUMDJQDPVEMHWGMRKOIZJPTPFLVTQXBUHQDB");
    msg.value = 128U;

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
    msg.setTimeStamp(0.16344948639859247);
    msg.setSource(20957U);
    msg.setSourceEntity(240U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(129U);
    msg.id = 164U;
    msg.period = 428436216U;
    msg.duty_cycle = 3972729843U;

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
    msg.setTimeStamp(0.1521808187609387);
    msg.setSource(23603U);
    msg.setSourceEntity(130U);
    msg.setDestination(45499U);
    msg.setDestinationEntity(149U);
    msg.id = 232U;
    msg.period = 3585007524U;
    msg.duty_cycle = 4025400917U;

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
    msg.setTimeStamp(0.5951036003107272);
    msg.setSource(56530U);
    msg.setSourceEntity(92U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(199U);
    msg.id = 72U;
    msg.period = 3083795442U;
    msg.duty_cycle = 1569778786U;

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
    msg.setTimeStamp(0.0917083204954734);
    msg.setSource(50242U);
    msg.setSourceEntity(60U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(191U);
    msg.id = 135U;
    msg.period = 3238354248U;
    msg.duty_cycle = 3214855133U;

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
    msg.setTimeStamp(0.015402359345150884);
    msg.setSource(41965U);
    msg.setSourceEntity(100U);
    msg.setDestination(9853U);
    msg.setDestinationEntity(121U);
    msg.id = 30U;
    msg.period = 752811849U;
    msg.duty_cycle = 2631213181U;

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
    msg.setTimeStamp(0.715981537730644);
    msg.setSource(35203U);
    msg.setSourceEntity(155U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(1U);
    msg.id = 114U;
    msg.period = 3355168560U;
    msg.duty_cycle = 2488229197U;

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
    msg.setTimeStamp(0.5223003372512778);
    msg.setSource(728U);
    msg.setSourceEntity(113U);
    msg.setDestination(27100U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.46807560221237643;
    msg.lon = 0.06780934941484495;
    msg.height = 0.21055985030616087;
    msg.x = 0.7870427919186128;
    msg.y = 0.3845028433144604;
    msg.z = 0.3658935792323519;
    msg.phi = 0.7676607479499823;
    msg.theta = 0.511348458376184;
    msg.psi = 0.906409046736493;
    msg.u = 0.5009945702916347;
    msg.v = 0.5121372450975985;
    msg.w = 0.47351552226795124;
    msg.vx = 0.5986382735102269;
    msg.vy = 0.008529576685819995;
    msg.vz = 0.9283138213497427;
    msg.p = 0.6017072258999312;
    msg.q = 0.8643918333063664;
    msg.r = 0.42160523594122556;
    msg.depth = 0.7075494970937847;
    msg.alt = 0.6097774642383785;

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
    msg.setTimeStamp(0.9548369853111727);
    msg.setSource(16349U);
    msg.setSourceEntity(243U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.7361879061212218;
    msg.lon = 0.8740446296894114;
    msg.height = 0.7103124050215048;
    msg.x = 0.4075549454710442;
    msg.y = 0.2644829278636116;
    msg.z = 0.10191316323763189;
    msg.phi = 0.8431499967748748;
    msg.theta = 0.10235283680840401;
    msg.psi = 0.9350222675491692;
    msg.u = 0.8386728175290534;
    msg.v = 0.6090921406198379;
    msg.w = 0.41484612989368586;
    msg.vx = 0.7879259111824236;
    msg.vy = 0.27450040459477254;
    msg.vz = 0.4014121842634689;
    msg.p = 0.28338412225212584;
    msg.q = 0.7150602411579451;
    msg.r = 0.3421493343052988;
    msg.depth = 0.8071128537784662;
    msg.alt = 0.15873635142122478;

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
    msg.setTimeStamp(0.4140510192494248);
    msg.setSource(1324U);
    msg.setSourceEntity(87U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.10449027346773454;
    msg.lon = 0.3342323044062784;
    msg.height = 0.040536648681512855;
    msg.x = 0.4485627162720095;
    msg.y = 0.2864731288832688;
    msg.z = 0.5878667520269761;
    msg.phi = 0.4042158205797225;
    msg.theta = 0.3199509936903586;
    msg.psi = 0.10350714018019702;
    msg.u = 0.7929965692641797;
    msg.v = 0.47748858310342135;
    msg.w = 0.12992364049100535;
    msg.vx = 0.22745801129596332;
    msg.vy = 0.652921841142589;
    msg.vz = 0.058744819135776005;
    msg.p = 0.06427089161425537;
    msg.q = 0.3959118504831377;
    msg.r = 0.9654300834676635;
    msg.depth = 0.6090845323746018;
    msg.alt = 0.4947970541058999;

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
    msg.setTimeStamp(0.538948222242073);
    msg.setSource(59046U);
    msg.setSourceEntity(98U);
    msg.setDestination(43604U);
    msg.setDestinationEntity(109U);
    msg.x = 0.17924500247145647;
    msg.y = 0.4684919726289115;
    msg.z = 0.9709732105384689;

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
    msg.setTimeStamp(0.6574186748276492);
    msg.setSource(41967U);
    msg.setSourceEntity(6U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(102U);
    msg.x = 0.030137986423848018;
    msg.y = 0.02997320363405287;
    msg.z = 0.7591413058349125;

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
    msg.setTimeStamp(0.8241574310386743);
    msg.setSource(57917U);
    msg.setSourceEntity(244U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(5U);
    msg.x = 0.21719193486653499;
    msg.y = 0.059907117591943004;
    msg.z = 0.11797626619803692;

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
    msg.setTimeStamp(0.9839643952872639);
    msg.setSource(47746U);
    msg.setSourceEntity(52U);
    msg.setDestination(49990U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3567257647115849;

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
    msg.setTimeStamp(0.3000297344526911);
    msg.setSource(1336U);
    msg.setSourceEntity(160U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5451813828882135;

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
    msg.setTimeStamp(0.5844887092333091);
    msg.setSource(63987U);
    msg.setSourceEntity(16U);
    msg.setDestination(6968U);
    msg.setDestinationEntity(67U);
    msg.value = 0.1165626866911409;

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
    msg.setTimeStamp(0.7596287959767011);
    msg.setSource(49665U);
    msg.setSourceEntity(254U);
    msg.setDestination(61899U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9116298986749257;

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
    msg.setTimeStamp(0.24195949258555083);
    msg.setSource(37205U);
    msg.setSourceEntity(133U);
    msg.setDestination(63660U);
    msg.setDestinationEntity(1U);
    msg.value = 0.2657641483519886;

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
    msg.setTimeStamp(0.4405752808152055);
    msg.setSource(61557U);
    msg.setSourceEntity(23U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7075528596221634;

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
    msg.setTimeStamp(0.6045119158927954);
    msg.setSource(52395U);
    msg.setSourceEntity(153U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(254U);
    msg.x = 0.6021539672262631;
    msg.y = 0.4881231748143653;
    msg.z = 0.40755336627058314;
    msg.phi = 0.34262472168698777;
    msg.theta = 0.792749401655596;
    msg.psi = 0.4239672742940158;
    msg.p = 0.23918649566217132;
    msg.q = 0.052841032260317;
    msg.r = 0.13808335393431115;
    msg.u = 0.32362127075450753;
    msg.v = 0.6192864884044053;
    msg.w = 0.05798600938112464;
    msg.bias_psi = 0.9558034790998724;
    msg.bias_r = 0.6837509598776768;

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
    msg.setTimeStamp(0.7311807968780534);
    msg.setSource(54663U);
    msg.setSourceEntity(147U);
    msg.setDestination(20207U);
    msg.setDestinationEntity(165U);
    msg.x = 0.1291452363512854;
    msg.y = 0.7303620033924951;
    msg.z = 0.5683443787879414;
    msg.phi = 0.06888095714940112;
    msg.theta = 0.7330221015344432;
    msg.psi = 0.9649782119061185;
    msg.p = 0.40009995217177785;
    msg.q = 0.32378117905240567;
    msg.r = 0.9738228012839404;
    msg.u = 0.9996461032686227;
    msg.v = 0.1306644964975635;
    msg.w = 0.870601713933664;
    msg.bias_psi = 0.4777534382782943;
    msg.bias_r = 0.45897504292497227;

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
    msg.setTimeStamp(0.7205461621813112);
    msg.setSource(52791U);
    msg.setSourceEntity(226U);
    msg.setDestination(22677U);
    msg.setDestinationEntity(11U);
    msg.x = 0.21511874599111214;
    msg.y = 0.37967944335835146;
    msg.z = 0.197200180189245;
    msg.phi = 0.6658736901611675;
    msg.theta = 0.2630373103304453;
    msg.psi = 0.9727037951597264;
    msg.p = 0.43013021164738074;
    msg.q = 0.3355813789978238;
    msg.r = 0.7791810912468267;
    msg.u = 0.6571765087480659;
    msg.v = 0.3597488852496046;
    msg.w = 0.33659152620186883;
    msg.bias_psi = 0.713191232950141;
    msg.bias_r = 0.8571374160346505;

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
    msg.setTimeStamp(0.5568523135565354);
    msg.setSource(46198U);
    msg.setSourceEntity(3U);
    msg.setDestination(26615U);
    msg.setDestinationEntity(192U);
    msg.bias_psi = 0.7635204870643791;
    msg.bias_r = 0.3854999127182285;
    msg.cog = 0.3051234545443209;
    msg.cyaw = 0.8147293309329859;
    msg.lbl_rej_level = 0.7311654030039392;
    msg.gps_rej_level = 0.46455320216841955;
    msg.custom_x = 0.5044342110044645;
    msg.custom_y = 0.7435222882370669;
    msg.custom_z = 0.9594977192106421;

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
    msg.setTimeStamp(0.16788908709145545);
    msg.setSource(27351U);
    msg.setSourceEntity(72U);
    msg.setDestination(18921U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.6420814508333746;
    msg.bias_r = 0.8283361586726871;
    msg.cog = 0.9590284882925095;
    msg.cyaw = 0.4293850763651925;
    msg.lbl_rej_level = 0.838577426257966;
    msg.gps_rej_level = 0.12865499814121917;
    msg.custom_x = 0.16125959055460348;
    msg.custom_y = 0.29680578776145816;
    msg.custom_z = 0.5573514571047252;

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
    msg.setTimeStamp(0.26861999025834515);
    msg.setSource(57787U);
    msg.setSourceEntity(160U);
    msg.setDestination(3762U);
    msg.setDestinationEntity(106U);
    msg.bias_psi = 0.6836023985563003;
    msg.bias_r = 0.38902712370377446;
    msg.cog = 0.9217610877264482;
    msg.cyaw = 0.04100314612691336;
    msg.lbl_rej_level = 0.5439253126080783;
    msg.gps_rej_level = 0.8505783935176111;
    msg.custom_x = 0.3958793250462822;
    msg.custom_y = 0.7442211069879043;
    msg.custom_z = 0.6981045847584673;

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
    msg.setTimeStamp(0.34942993047345405);
    msg.setSource(3565U);
    msg.setSourceEntity(230U);
    msg.setDestination(61217U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.28888601017589544;
    msg.reason = 119U;

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
    msg.setTimeStamp(0.13330247326314393);
    msg.setSource(62169U);
    msg.setSourceEntity(225U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(209U);
    msg.utc_time = 0.02647764543994857;
    msg.reason = 51U;

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
    msg.setTimeStamp(0.17626245201781998);
    msg.setSource(39515U);
    msg.setSourceEntity(15U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.19600502209752801;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.697609866299777);
    msg.setSource(25712U);
    msg.setSourceEntity(202U);
    msg.setDestination(9292U);
    msg.setDestinationEntity(98U);
    msg.id = 164U;
    msg.range = 0.521324073088997;
    msg.acceptance = 162U;

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
    msg.setTimeStamp(0.34454193068641326);
    msg.setSource(26006U);
    msg.setSourceEntity(248U);
    msg.setDestination(42549U);
    msg.setDestinationEntity(32U);
    msg.id = 165U;
    msg.range = 0.5314775858641068;
    msg.acceptance = 63U;

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
    msg.setTimeStamp(0.6569464111843722);
    msg.setSource(49636U);
    msg.setSourceEntity(209U);
    msg.setDestination(36659U);
    msg.setDestinationEntity(143U);
    msg.id = 174U;
    msg.range = 0.09733898979645494;
    msg.acceptance = 243U;

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
    msg.setTimeStamp(0.8454377025104042);
    msg.setSource(64080U);
    msg.setSourceEntity(142U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(97U);
    msg.type = 225U;
    msg.reason = 146U;
    msg.value = 0.30501929122560356;
    msg.timestep = 0.3161324924777118;

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
    msg.setTimeStamp(0.1794178699346053);
    msg.setSource(25303U);
    msg.setSourceEntity(86U);
    msg.setDestination(50229U);
    msg.setDestinationEntity(121U);
    msg.type = 112U;
    msg.reason = 254U;
    msg.value = 0.5097759993230356;
    msg.timestep = 0.9624215447640738;

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
    msg.setTimeStamp(0.015241099205886344);
    msg.setSource(44677U);
    msg.setSourceEntity(52U);
    msg.setDestination(57821U);
    msg.setDestinationEntity(37U);
    msg.type = 32U;
    msg.reason = 171U;
    msg.value = 0.6763117820986649;
    msg.timestep = 0.8162255715795114;

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
    msg.setTimeStamp(0.9629718715587421);
    msg.setSource(27688U);
    msg.setSourceEntity(238U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.7324493545028553);
    msg.setSource(59554U);
    msg.setSourceEntity(166U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.5619237026626532);
    msg.setSource(37015U);
    msg.setSourceEntity(17U);
    msg.setDestination(32676U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.14969561760333938);
    msg.setSource(29655U);
    msg.setSourceEntity(220U);
    msg.setDestination(32163U);
    msg.setDestinationEntity(33U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TQUAXMWTJINLBEJBPIMWFCSYCGDYHGGKQUGAFVJOPHIZXNROLGBMWXYEFYPMZCJRUCMKWVXBDSKYMCKVPQAWPJFZKOUBOTAUZVUDODDBKSPDDLYQEWKJSFXCNZTCLOIXHMRISLBEBNOGSFTRPOHAQJUFCGZGCSMQLHETRNVBSGDILMKFWDIQHKHLVFRVVR");
    tmp_msg_0.lat = 0.4663253623887902;
    tmp_msg_0.lon = 0.02015002025932655;
    tmp_msg_0.depth = 0.9765020788913746;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 198U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8664910919753007;
    msg.y = 0.9272114805249196;
    msg.var_x = 0.9613937591421464;
    msg.var_y = 0.8550622484758579;
    msg.distance = 0.25327884704332093;

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
    msg.setTimeStamp(0.6504726969543194);
    msg.setSource(20573U);
    msg.setSourceEntity(239U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BXDMWGJMOX");
    tmp_msg_0.lat = 0.68401868852845;
    tmp_msg_0.lon = 0.29063790252858357;
    tmp_msg_0.depth = 0.8270028738015339;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 245U;
    tmp_msg_0.transponder_delay = 96U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5235397257888248;
    msg.y = 0.13817135525594493;
    msg.var_x = 0.8042483563400339;
    msg.var_y = 0.3471091175530041;
    msg.distance = 0.20583368250558987;

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
    msg.setTimeStamp(0.8957931519384692);
    msg.setSource(13466U);
    msg.setSourceEntity(78U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(136U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EQMKNHRZLNMDATRDNSLWTECYVLTAICUVGFOPWQDANGQXGVJOGZKFMTSQGRNAFEXCNUWGJWKBUEJYHIFMJTLZQE");
    tmp_msg_0.lat = 0.0944652239150483;
    tmp_msg_0.lon = 0.473039049978365;
    tmp_msg_0.depth = 0.479831867352547;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 197U;
    tmp_msg_0.transponder_delay = 246U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5887745486618631;
    msg.y = 0.7882649234961217;
    msg.var_x = 0.3139386629443264;
    msg.var_y = 0.083332406263392;
    msg.distance = 0.8402410647757432;

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
    msg.setTimeStamp(0.7229945204053684);
    msg.setSource(32214U);
    msg.setSourceEntity(70U);
    msg.setDestination(9845U);
    msg.setDestinationEntity(37U);
    msg.state = 117U;

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
    msg.setTimeStamp(0.8292898203606963);
    msg.setSource(6173U);
    msg.setSourceEntity(196U);
    msg.setDestination(51281U);
    msg.setDestinationEntity(124U);
    msg.state = 32U;

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
    msg.setTimeStamp(0.1415228464459608);
    msg.setSource(33370U);
    msg.setSourceEntity(136U);
    msg.setDestination(14696U);
    msg.setDestinationEntity(192U);
    msg.state = 97U;

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
    msg.setTimeStamp(0.9214472389403529);
    msg.setSource(3604U);
    msg.setSourceEntity(110U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(104U);
    msg.x = 0.7949621914945506;
    msg.y = 0.14479637377539445;
    msg.z = 0.3014576936455251;

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
    msg.setTimeStamp(0.6696463995923536);
    msg.setSource(10035U);
    msg.setSourceEntity(40U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(126U);
    msg.x = 0.023155615001750895;
    msg.y = 0.8418673622609948;
    msg.z = 0.888323904037627;

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
    msg.setTimeStamp(0.9424778606376036);
    msg.setSource(8065U);
    msg.setSourceEntity(77U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(42U);
    msg.x = 0.6819493664810351;
    msg.y = 0.20233631540917085;
    msg.z = 0.7861784703824009;

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
    msg.setTimeStamp(0.14013595428102088);
    msg.setSource(49405U);
    msg.setSourceEntity(184U);
    msg.setDestination(42242U);
    msg.setDestinationEntity(29U);
    msg.value = 0.5257340936509964;

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
    msg.setTimeStamp(0.13691944745993245);
    msg.setSource(47453U);
    msg.setSourceEntity(198U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(252U);
    msg.value = 0.39245827051012727;

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
    msg.setTimeStamp(0.5642962857176045);
    msg.setSource(24213U);
    msg.setSourceEntity(184U);
    msg.setDestination(55473U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6134740576076517;

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
    msg.setTimeStamp(0.05083552177245576);
    msg.setSource(27063U);
    msg.setSourceEntity(117U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(50U);
    msg.value = 0.7563304753306626;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.1684062492278413);
    msg.setSource(12803U);
    msg.setSourceEntity(230U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6286822280630574;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.06412304205387664);
    msg.setSource(16782U);
    msg.setSourceEntity(234U);
    msg.setDestination(29583U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5527883214957912;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.26497625754861376);
    msg.setSource(13269U);
    msg.setSourceEntity(155U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(98U);
    msg.value = 0.27130607556673725;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.8612800292819909);
    msg.setSource(64463U);
    msg.setSourceEntity(23U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(175U);
    msg.value = 0.053256309892033116;
    msg.speed_units = 120U;

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
    msg.setTimeStamp(0.6719444089825194);
    msg.setSource(23714U);
    msg.setSourceEntity(195U);
    msg.setDestination(48985U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7714986021767689;
    msg.speed_units = 166U;

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
    msg.setTimeStamp(0.7762254046908231);
    msg.setSource(9013U);
    msg.setSourceEntity(21U);
    msg.setDestination(57448U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8303009942073302;

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
    msg.setTimeStamp(0.6154660829162918);
    msg.setSource(15307U);
    msg.setSourceEntity(252U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(92U);
    msg.value = 0.31698415453999085;

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
    msg.setTimeStamp(0.7822161578614099);
    msg.setSource(11719U);
    msg.setSourceEntity(230U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(223U);
    msg.value = 0.3175531233548231;

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
    msg.setTimeStamp(0.5005184654595397);
    msg.setSource(30367U);
    msg.setSourceEntity(139U);
    msg.setDestination(37445U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8157715643950039;

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
    msg.setTimeStamp(0.1422937564225607);
    msg.setSource(24663U);
    msg.setSourceEntity(54U);
    msg.setDestination(10632U);
    msg.setDestinationEntity(236U);
    msg.value = 0.5731120009753157;

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
    msg.setTimeStamp(0.016783986713106103);
    msg.setSource(35684U);
    msg.setSourceEntity(163U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(10U);
    msg.value = 0.33540408339829764;

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
    msg.setTimeStamp(0.017422134595110328);
    msg.setSource(11696U);
    msg.setSourceEntity(70U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(199U);
    msg.value = 0.06806226022070139;

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
    msg.setTimeStamp(0.5534042042662335);
    msg.setSource(59656U);
    msg.setSourceEntity(114U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(132U);
    msg.value = 0.047923191353611005;

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
    msg.setTimeStamp(0.6431175491412044);
    msg.setSource(59897U);
    msg.setSourceEntity(150U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(246U);
    msg.value = 0.18885760465700774;

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
    msg.setTimeStamp(0.8206823274171585);
    msg.setSource(55829U);
    msg.setSourceEntity(120U);
    msg.setDestination(46639U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 3133965540U;
    msg.start_lat = 0.42993361404275776;
    msg.start_lon = 0.9285322112770249;
    msg.start_z = 0.6691469490902332;
    msg.start_z_units = 15U;
    msg.end_lat = 0.7980591071941748;
    msg.end_lon = 0.03682739962884729;
    msg.end_z = 0.8407279712174802;
    msg.end_z_units = 44U;
    msg.speed = 0.6632188657136282;
    msg.speed_units = 137U;
    msg.lradius = 0.7485159595784431;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.5996253314706393);
    msg.setSource(49541U);
    msg.setSourceEntity(210U);
    msg.setDestination(39244U);
    msg.setDestinationEntity(250U);
    msg.path_ref = 1887804777U;
    msg.start_lat = 0.337318236558535;
    msg.start_lon = 0.5153042233000811;
    msg.start_z = 0.16632415690571345;
    msg.start_z_units = 44U;
    msg.end_lat = 0.8302882467927261;
    msg.end_lon = 0.9587420613724801;
    msg.end_z = 0.2963573514635649;
    msg.end_z_units = 52U;
    msg.speed = 0.7296060958518926;
    msg.speed_units = 179U;
    msg.lradius = 0.29481681490989253;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.34385697112312996);
    msg.setSource(416U);
    msg.setSourceEntity(132U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 2274354359U;
    msg.start_lat = 0.6108734958087063;
    msg.start_lon = 0.45261960835396786;
    msg.start_z = 0.7553783824418004;
    msg.start_z_units = 84U;
    msg.end_lat = 0.6912663346352641;
    msg.end_lon = 0.3066001995988732;
    msg.end_z = 0.8891328693371601;
    msg.end_z_units = 109U;
    msg.speed = 0.9026142173623684;
    msg.speed_units = 75U;
    msg.lradius = 0.1012635137226976;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.32672174514652974);
    msg.setSource(55021U);
    msg.setSourceEntity(130U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(39U);
    msg.x = 0.48119800719798644;
    msg.y = 0.30552185022726897;
    msg.z = 0.9103188885971831;
    msg.k = 0.25300988819414916;
    msg.m = 0.9240102474043609;
    msg.n = 0.9981845370107344;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.9346915293601694);
    msg.setSource(52155U);
    msg.setSourceEntity(48U);
    msg.setDestination(49469U);
    msg.setDestinationEntity(143U);
    msg.x = 0.9352361099864482;
    msg.y = 0.7713074488210059;
    msg.z = 0.630171151548382;
    msg.k = 0.435604192494213;
    msg.m = 0.12712136630276827;
    msg.n = 0.20769589297943258;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.14374589531381077);
    msg.setSource(37891U);
    msg.setSourceEntity(76U);
    msg.setDestination(26521U);
    msg.setDestinationEntity(225U);
    msg.x = 0.5283130431511402;
    msg.y = 0.10843129141362862;
    msg.z = 0.21987302512386298;
    msg.k = 0.11467556307475679;
    msg.m = 0.06462881854641445;
    msg.n = 0.05318319632017765;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.9650182733468456);
    msg.setSource(36062U);
    msg.setSourceEntity(225U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7168953943199845;

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
    msg.setTimeStamp(0.520581280076383);
    msg.setSource(16995U);
    msg.setSourceEntity(222U);
    msg.setDestination(23375U);
    msg.setDestinationEntity(232U);
    msg.value = 0.014692039451237648;

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
    msg.setTimeStamp(0.9976901521832471);
    msg.setSource(25773U);
    msg.setSourceEntity(44U);
    msg.setDestination(38689U);
    msg.setDestinationEntity(100U);
    msg.value = 0.2845437127711866;

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
    msg.setTimeStamp(0.7562766481162859);
    msg.setSource(58129U);
    msg.setSourceEntity(75U);
    msg.setDestination(39111U);
    msg.setDestinationEntity(195U);
    msg.u = 0.7799009042981128;
    msg.v = 0.428835208337613;
    msg.w = 0.6990136142728446;
    msg.p = 0.2831604440271882;
    msg.q = 0.58570773512945;
    msg.r = 0.9580502775690442;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.9189774027110056);
    msg.setSource(34168U);
    msg.setSourceEntity(153U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(117U);
    msg.u = 0.6380411640208923;
    msg.v = 0.30771328835075584;
    msg.w = 0.08280454354425959;
    msg.p = 0.18642180330794245;
    msg.q = 0.8555782845403482;
    msg.r = 0.29572961682943877;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.0162649587255973);
    msg.setSource(43968U);
    msg.setSourceEntity(44U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(233U);
    msg.u = 0.6841362705219453;
    msg.v = 0.3941645032393961;
    msg.w = 0.7760127889334;
    msg.p = 0.03405459718082349;
    msg.q = 0.5155602847025431;
    msg.r = 0.3693118543328632;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.13204584485533533);
    msg.setSource(34431U);
    msg.setSourceEntity(156U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 3880964294U;
    msg.start_lat = 0.719249034916513;
    msg.start_lon = 0.5017124947215249;
    msg.start_z = 0.4491610296201104;
    msg.start_z_units = 77U;
    msg.end_lat = 0.89412477491354;
    msg.end_lon = 0.2811665434105407;
    msg.end_z = 0.10114385407577797;
    msg.end_z_units = 158U;
    msg.lradius = 0.7795231903846743;
    msg.flags = 162U;
    msg.x = 0.53698046146596;
    msg.y = 0.9731265261735432;
    msg.z = 0.4557697509312485;
    msg.vx = 0.2807706173961486;
    msg.vy = 0.9280486060007185;
    msg.vz = 0.9672522348824845;
    msg.course_error = 0.9601709148026786;
    msg.eta = 56890U;

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
    msg.setTimeStamp(0.25306640074973374);
    msg.setSource(33619U);
    msg.setSourceEntity(242U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 3063963650U;
    msg.start_lat = 0.1607445250319548;
    msg.start_lon = 0.8046037023903022;
    msg.start_z = 0.6236209216672418;
    msg.start_z_units = 45U;
    msg.end_lat = 0.8084959885153424;
    msg.end_lon = 0.8992600381837146;
    msg.end_z = 0.915754762732891;
    msg.end_z_units = 241U;
    msg.lradius = 0.6587852359875713;
    msg.flags = 229U;
    msg.x = 0.057062019459303004;
    msg.y = 0.9757169911125122;
    msg.z = 0.015625724396192475;
    msg.vx = 0.17252939206317452;
    msg.vy = 0.48100539080126736;
    msg.vz = 0.49905103305716514;
    msg.course_error = 0.6408634063261324;
    msg.eta = 8191U;

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
    msg.setTimeStamp(0.8356872577731462);
    msg.setSource(35422U);
    msg.setSourceEntity(135U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 182012623U;
    msg.start_lat = 0.9682007200274274;
    msg.start_lon = 0.7820359552664301;
    msg.start_z = 0.2960051712448911;
    msg.start_z_units = 84U;
    msg.end_lat = 0.8673607385200763;
    msg.end_lon = 0.15339655095751648;
    msg.end_z = 0.3036967288671547;
    msg.end_z_units = 96U;
    msg.lradius = 0.022500253181991225;
    msg.flags = 37U;
    msg.x = 0.1870114210527779;
    msg.y = 0.5411159221790283;
    msg.z = 0.24424906990242623;
    msg.vx = 0.33005602363380104;
    msg.vy = 0.9138948640865041;
    msg.vz = 0.8013288461414548;
    msg.course_error = 0.4966698954377794;
    msg.eta = 56247U;

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
    msg.setTimeStamp(0.6023010565860835);
    msg.setSource(46508U);
    msg.setSourceEntity(28U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(241U);
    msg.k = 0.06088608860072886;
    msg.m = 0.640080027164554;
    msg.n = 0.46981989372363786;

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
    msg.setTimeStamp(0.5198651566336191);
    msg.setSource(32725U);
    msg.setSourceEntity(115U);
    msg.setDestination(58566U);
    msg.setDestinationEntity(45U);
    msg.k = 0.9127250476899025;
    msg.m = 0.5834887182799509;
    msg.n = 0.3335591220282197;

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
    msg.setTimeStamp(0.1794579087474616);
    msg.setSource(34889U);
    msg.setSourceEntity(49U);
    msg.setDestination(40587U);
    msg.setDestinationEntity(119U);
    msg.k = 0.18541566957409872;
    msg.m = 0.09199517017025549;
    msg.n = 0.7867332867597617;

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
    msg.setTimeStamp(0.9728225216009989);
    msg.setSource(5409U);
    msg.setSourceEntity(92U);
    msg.setDestination(63196U);
    msg.setDestinationEntity(38U);
    msg.p = 0.023852754007213872;
    msg.i = 0.10681990477177283;
    msg.d = 0.1706272694529768;
    msg.a = 0.26889624149598346;

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
    msg.setTimeStamp(0.2767747343353847);
    msg.setSource(1487U);
    msg.setSourceEntity(178U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(170U);
    msg.p = 0.3041872883228708;
    msg.i = 0.49488729874509396;
    msg.d = 0.22602306990979837;
    msg.a = 0.8570996784225887;

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
    msg.setTimeStamp(0.5816165079256481);
    msg.setSource(59254U);
    msg.setSourceEntity(23U);
    msg.setDestination(40842U);
    msg.setDestinationEntity(152U);
    msg.p = 0.18699351059101788;
    msg.i = 0.5770443372554269;
    msg.d = 0.6624910886023958;
    msg.a = 0.465527045859493;

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
    msg.setTimeStamp(0.8829647948738558);
    msg.setSource(63315U);
    msg.setSourceEntity(232U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(47U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.7350953476455653);
    msg.setSource(33660U);
    msg.setSourceEntity(157U);
    msg.setDestination(24246U);
    msg.setDestinationEntity(132U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.6827321230442247);
    msg.setSource(16559U);
    msg.setSourceEntity(92U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(160U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.015884519238686057);
    msg.setSource(17853U);
    msg.setSourceEntity(220U);
    msg.setDestination(60269U);
    msg.setDestinationEntity(93U);
    msg.timeout = 42832U;
    msg.lat = 0.4738737965009957;
    msg.lon = 0.6271984503202543;
    msg.z = 0.3551679802039328;
    msg.z_units = 254U;
    msg.speed = 0.6180703016621253;
    msg.speed_units = 217U;
    msg.roll = 0.6661885749777444;
    msg.pitch = 0.29406212357059025;
    msg.yaw = 0.8346018358966794;
    msg.custom.assign("HGJNEYADRYEGWXXBIWMHBVNWHCCSIJEPJMDDFSKOV");

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
    msg.setTimeStamp(0.5623551052367403);
    msg.setSource(6763U);
    msg.setSourceEntity(118U);
    msg.setDestination(45422U);
    msg.setDestinationEntity(189U);
    msg.timeout = 50216U;
    msg.lat = 0.40639825823907827;
    msg.lon = 0.5342048595618616;
    msg.z = 0.6790315291347051;
    msg.z_units = 49U;
    msg.speed = 0.8245573905793349;
    msg.speed_units = 40U;
    msg.roll = 0.8140786138287319;
    msg.pitch = 0.935626268377695;
    msg.yaw = 0.9728568320422414;
    msg.custom.assign("JDWJHMNYDXDNSEUISHUCOHYCYIAIBFCBKSACKDH");

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
    msg.setTimeStamp(0.9177260908575077);
    msg.setSource(49875U);
    msg.setSourceEntity(106U);
    msg.setDestination(34835U);
    msg.setDestinationEntity(103U);
    msg.timeout = 39227U;
    msg.lat = 0.82580445381297;
    msg.lon = 0.69641024822688;
    msg.z = 0.38269078761353204;
    msg.z_units = 9U;
    msg.speed = 0.4064242536661179;
    msg.speed_units = 141U;
    msg.roll = 0.2653455798746909;
    msg.pitch = 0.5319322346175891;
    msg.yaw = 0.1136891235195312;
    msg.custom.assign("TWRFKRTCBUVFDDICHWCIYWZTYKTXCZYSMUCDCAHBDYBNXVYKUSEBWDJQWSRSOGVLVLTYFBMJJPLLTXVPTPMOUCKHROEEHMXVNPMUKYAILUFMGNQKOAKYUEFYDKETYBQXQSBIWQAQWC");

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
    msg.setTimeStamp(0.9806077925519628);
    msg.setSource(21943U);
    msg.setSourceEntity(219U);
    msg.setDestination(14193U);
    msg.setDestinationEntity(177U);
    msg.timeout = 60235U;
    msg.lat = 0.1872344228582925;
    msg.lon = 0.3043219381563169;
    msg.z = 0.38100021198041234;
    msg.z_units = 71U;
    msg.speed = 0.5460283314714283;
    msg.speed_units = 167U;
    msg.duration = 25740U;
    msg.radius = 0.42757095004670653;
    msg.flags = 247U;
    msg.custom.assign("XZUOMLANMSOFFIMHPULACQBWYCXHTDLFALBZPENTXFXPD");

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
    msg.setTimeStamp(0.8662462951075799);
    msg.setSource(45065U);
    msg.setSourceEntity(131U);
    msg.setDestination(48903U);
    msg.setDestinationEntity(231U);
    msg.timeout = 35194U;
    msg.lat = 0.9289158975552871;
    msg.lon = 0.7356715120081934;
    msg.z = 0.6135594710466352;
    msg.z_units = 203U;
    msg.speed = 0.6142135646562462;
    msg.speed_units = 193U;
    msg.duration = 309U;
    msg.radius = 0.8037505528468342;
    msg.flags = 148U;
    msg.custom.assign("KVMMULPGTIVBEWAOLJJXEHIRBVCHCQRKFYAFQWJDQSWQEBXNRZEWNFPPXZKLIEDMQNSP");

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
    msg.setTimeStamp(0.08824499157342025);
    msg.setSource(50815U);
    msg.setSourceEntity(11U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(205U);
    msg.timeout = 1286U;
    msg.lat = 0.11538660967282621;
    msg.lon = 0.3271895313270917;
    msg.z = 0.08896540807686948;
    msg.z_units = 207U;
    msg.speed = 0.9984238638835362;
    msg.speed_units = 172U;
    msg.duration = 31422U;
    msg.radius = 0.9543401605174354;
    msg.flags = 52U;
    msg.custom.assign("VUXXAOEDCFZBSSTTEQUUZBWMTXFOZEJVHXPBZTPIZWFPXNFWCIUSXEDVVLEHVOAZSNNLQJROKDJXPUDWACT");

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
    msg.setTimeStamp(0.4225465078212399);
    msg.setSource(16088U);
    msg.setSourceEntity(67U);
    msg.setDestination(6647U);
    msg.setDestinationEntity(87U);
    msg.custom.assign("DLAMTCOJXQZKYJCVHWVHHVAITXPNJZOERRRIJSGNMTRAFCTDRTMJHUQPIWAKFLVSMJFCFZMPCBHHNZOPGEMGUUYLRBWXQXWQITPQUUUGTWQPOKOLFREBLUNGVGPAVQPSGDRNMXBDPLXKZKDRKTJAAVGYQMYEFYSDUBNNYOECYSZCLHDJOJCOIHDORYFCIUDAHFFSVDMAGEZ");

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
    msg.setTimeStamp(0.5039969437786971);
    msg.setSource(23018U);
    msg.setSourceEntity(145U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(175U);
    msg.custom.assign("ECUDWMVQXZBLOZNRWEJSHZFCERLVPAZHNCWKYWVLRLWBHXFUATYFGGAOHOGVSGKQQMCLHJEQAGSEZSVNDBJKRYDBXFKLXIGOJPRKMQYXNWNXIGMHIAMKEWUMXJYBIELJSB");

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
    msg.setTimeStamp(0.10695811874088712);
    msg.setSource(47259U);
    msg.setSourceEntity(193U);
    msg.setDestination(15576U);
    msg.setDestinationEntity(100U);
    msg.custom.assign("BYNNWGREDNYZJPOYIAEPTMXJITDVEDVJLLNKINHGGHCTFNJGAKQXLEVAZQSFVLQDUAOUQAMBBYGWMAHJWZGOLAJOOTGZUJNUVPTEBMUZSKIDQLSAPCYNJWCWIPFVKJXDBRFWEXRDCVZKRQQULLCLVSEXFMGAIHDLQQGPOGESRHCBFONFPCFMZCFSRSERXPK");

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
    msg.setTimeStamp(0.05337433244765721);
    msg.setSource(3405U);
    msg.setSourceEntity(202U);
    msg.setDestination(6873U);
    msg.setDestinationEntity(122U);
    msg.timeout = 35481U;
    msg.lat = 0.12375325152720484;
    msg.lon = 0.3736810253052232;
    msg.z = 0.2266761735947147;
    msg.z_units = 134U;
    msg.duration = 46272U;
    msg.speed = 0.462566823198968;
    msg.speed_units = 178U;
    msg.type = 220U;
    msg.radius = 0.25516820490714454;
    msg.length = 0.9479874671858532;
    msg.bearing = 0.5387417829664866;
    msg.direction = 106U;
    msg.custom.assign("SPRVKOEAUFGUQSIACVJMOAA");

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
    msg.setTimeStamp(0.8979708302448244);
    msg.setSource(23515U);
    msg.setSourceEntity(134U);
    msg.setDestination(60098U);
    msg.setDestinationEntity(53U);
    msg.timeout = 26589U;
    msg.lat = 0.39548989616725927;
    msg.lon = 0.12555029171773602;
    msg.z = 0.5064418094434945;
    msg.z_units = 129U;
    msg.duration = 58015U;
    msg.speed = 0.5766733913020907;
    msg.speed_units = 0U;
    msg.type = 197U;
    msg.radius = 0.9005022751189635;
    msg.length = 0.7690927437708261;
    msg.bearing = 0.5132507709655176;
    msg.direction = 246U;
    msg.custom.assign("IECREZADHDNVVTVWTLZCLLUOREEZRWRUQLDJIMLCZMAMZOARQTPMBWXHKPXVHMNBYQRQNQECJXIDBZEEWSNRRJQWGWBDUKVMHYXAQXHLSHOKBSCSGSLUWDVTOIPYSSUCOTYYBMFF");

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
    msg.setTimeStamp(0.951361656308851);
    msg.setSource(28209U);
    msg.setSourceEntity(122U);
    msg.setDestination(50160U);
    msg.setDestinationEntity(67U);
    msg.timeout = 4381U;
    msg.lat = 0.26853540988188296;
    msg.lon = 0.8223446274390335;
    msg.z = 0.4853551736064088;
    msg.z_units = 210U;
    msg.duration = 63279U;
    msg.speed = 0.9244507927540362;
    msg.speed_units = 92U;
    msg.type = 117U;
    msg.radius = 0.53467224534353;
    msg.length = 0.012013738333612523;
    msg.bearing = 0.73793522607128;
    msg.direction = 224U;
    msg.custom.assign("EPBJGQQRYBULZCLFFJXDSIKMIDKXYIWUGAYRZEKENHPLTEYBLEUQFLPLVFAHGNTUYZUPKTTXVSBJDPEPGXRAHGWABBYOIHOINOCFYGZQXPQWDSJGVVIVWETJZFTLUSARVAHVRXIZXZCIPNZDONQHENHGCBQGTOMSMRJBCOHNWNXMQKQMSWQURDYJNWAEOJOWRVHPFFCWYTVSSCPASJKVDAUMCXHMRJOCFMSDKDRGZMD");

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
    msg.setTimeStamp(0.9165432746824287);
    msg.setSource(51927U);
    msg.setSourceEntity(187U);
    msg.setDestination(24980U);
    msg.setDestinationEntity(136U);
    msg.duration = 47058U;
    msg.custom.assign("VEDNMYKZQDPJZYLJNPBTNOQKFQMZLMIXDDFOMQCPBVBIFTGZPDCOUQXZSZSLWSLYKRWARPIQVZXYGNBSGRWMDAPNXGZQJQSINSGTVCVSIORFCTGBJFNZWGJSKWKCUEKIJEXDZXKIDYHVAOERAJRLPERGVCOVBQTDUBHMKFJCNBATRHYYRWYFDOVCAPLHBHUIEXNEXTOVWYSJPEO");

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
    msg.setTimeStamp(0.6118105480350438);
    msg.setSource(32830U);
    msg.setSourceEntity(100U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(14U);
    msg.duration = 16359U;
    msg.custom.assign("TZZJHGVKKYFVLBXSQIJNUFIDSJQUIWCTFIXVIBDPQVGTRXHPIUQPZBAJETIVWLASLHHUMUNRMHQCMSWRYYKBGFRGJCRUNRTGFWBCDKYWGAODZKFVYXMTHSGQHJEEDIRXVBFARQOP");

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
    msg.setTimeStamp(0.5188143493464215);
    msg.setSource(26231U);
    msg.setSourceEntity(157U);
    msg.setDestination(4774U);
    msg.setDestinationEntity(143U);
    msg.duration = 10536U;
    msg.custom.assign("GCCZBWCQRLYKUKAOZIVIADTAUEJXRMRUPSNVDDJJBNMHAIYSPAKWYWCFHNWSJZPGEBTFGUMYRONZEDPTKRBSGHXAOKILPGMLEJVOWYCBMFPNLVIKJSZLLQIASSATLCDXMFHQDQITPURQOTDONGWROXZURZINSXCYFIJEDLFBPHKDJXGFGZXHWXYQESLMPCAEVQKQBBMUILUMONTHYRXUNSOPFQ");

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
    msg.setTimeStamp(0.8724882354554724);
    msg.setSource(8123U);
    msg.setSourceEntity(154U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(140U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.09562249833274017;
    msg.control.set(tmp_msg_0);
    msg.duration = 16417U;
    msg.custom.assign("DJJLAQDZCNFZITUJFIORUMJANLDWXRDMYUXPEPMGRLDYPSMUNTJILNTOSHTVZUSLBBXM");

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
    msg.setTimeStamp(0.5040644922765793);
    msg.setSource(20789U);
    msg.setSourceEntity(52U);
    msg.setDestination(37918U);
    msg.setDestinationEntity(125U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7518282163057896;
    msg.control.set(tmp_msg_0);
    msg.duration = 45653U;
    msg.custom.assign("RTERMHBXAVBQQXQYSFMRDTHEOEVHMZJZXSPZLCEZIZOYAKNTPCUEYVOIABBJKHJVFNGTFJQSLXQRJEMNUYDFVLXWXRHFRMXIHGGLWYCSCKCYOBMHIAGFOJU");

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
    msg.setTimeStamp(0.6352780923281963);
    msg.setSource(56107U);
    msg.setSourceEntity(230U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(57U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.05672066818909938;
    msg.control.set(tmp_msg_0);
    msg.duration = 9974U;
    msg.custom.assign("ZKPCTOEQGUWLEGOTOZSXSZSJYYHZJEDVTYBIQPLOSGHBQONCLUELVNRQPIBLDLOHTJFSWRJMGRHCVTJNQGZAAMFFCEKPWYRUTHVVKFPDOZRGMNKQINSCJMNRBGZOLSCLOKHYIYRSTEEXMUVRVPXHUEHUTQDTHYAFCAAXKKUGDABBFNXAXKEPWNTQAFWNIFFGYBRDKBEAUFSYYZJQRSUWZWXVMDNMLVPIOWWAXMJXDCHIDIKWDJU");

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
    msg.setTimeStamp(0.07951317906767852);
    msg.setSource(1682U);
    msg.setSourceEntity(230U);
    msg.setDestination(34320U);
    msg.setDestinationEntity(216U);
    msg.timeout = 30057U;
    msg.lat = 0.6236283248994839;
    msg.lon = 0.6648871772368112;
    msg.z = 0.08868777854518894;
    msg.z_units = 36U;
    msg.speed = 0.1230299731704051;
    msg.speed_units = 63U;
    msg.bearing = 0.4720983434437609;
    msg.cross_angle = 0.49908688936483714;
    msg.width = 0.7305901243553204;
    msg.length = 0.7355463031507641;
    msg.hstep = 0.08709920857299125;
    msg.coff = 156U;
    msg.alternation = 235U;
    msg.flags = 100U;
    msg.custom.assign("NJIATGDAHSMUASHNIZVTMKWOETHWWGEQUQMRHVOCFLCTFKMSREUCVBFYIXYVAZDGEFHKTZPLJXCBPRYNWTDVQBRPOXNOKERVXSR");

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
    msg.setTimeStamp(0.8476719829598769);
    msg.setSource(55885U);
    msg.setSourceEntity(99U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(26U);
    msg.timeout = 1410U;
    msg.lat = 0.6850987564602339;
    msg.lon = 0.6274316564503737;
    msg.z = 0.8530885164523592;
    msg.z_units = 57U;
    msg.speed = 0.6767773508752047;
    msg.speed_units = 164U;
    msg.bearing = 0.4465410422060412;
    msg.cross_angle = 0.9977459854861629;
    msg.width = 0.4043460186113861;
    msg.length = 0.031742168066936416;
    msg.hstep = 0.18276739555603405;
    msg.coff = 60U;
    msg.alternation = 20U;
    msg.flags = 71U;
    msg.custom.assign("HPNTDJRFSOWUYELDMBXMGLYYRK");

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
    msg.setTimeStamp(0.705372574565546);
    msg.setSource(5794U);
    msg.setSourceEntity(165U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(104U);
    msg.timeout = 51299U;
    msg.lat = 0.8253294899042004;
    msg.lon = 0.5035498437459051;
    msg.z = 0.09435680466999152;
    msg.z_units = 148U;
    msg.speed = 0.10405024100398885;
    msg.speed_units = 112U;
    msg.bearing = 0.6036060051435839;
    msg.cross_angle = 0.40356672888740475;
    msg.width = 0.919042102598097;
    msg.length = 0.6432471771009584;
    msg.hstep = 0.32151747921666385;
    msg.coff = 10U;
    msg.alternation = 210U;
    msg.flags = 191U;
    msg.custom.assign("OOLJSQORVTWQQGKIWLODTPEMWQDNYSGBWRZYKUIUKSYPWAISCESDANCZQBHVSEM");

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
    msg.setTimeStamp(0.34003417304848715);
    msg.setSource(3315U);
    msg.setSourceEntity(209U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(96U);
    msg.timeout = 56466U;
    msg.lat = 0.1494069489934713;
    msg.lon = 0.8648862341236642;
    msg.z = 0.542755139455861;
    msg.z_units = 84U;
    msg.speed = 0.7096170833171828;
    msg.speed_units = 39U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.18784320475712657;
    tmp_msg_0.y = 0.4405756235444497;
    tmp_msg_0.z = 0.12131778959336681;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RXTNXSJWTMKBXNKQKMZFYTQKCZTCXZGKOSSGPDMSMZNRYWFKCHZGKNGEITXMUJGPUWYUFJNAVZBXBHSDJRPIUJFNRRQVCVGYCLOBOWYOEGVPOEGFXJELZQADPHIVCY");

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
    msg.setTimeStamp(0.8167791980892851);
    msg.setSource(1325U);
    msg.setSourceEntity(154U);
    msg.setDestination(34422U);
    msg.setDestinationEntity(193U);
    msg.timeout = 48687U;
    msg.lat = 0.8769326270417533;
    msg.lon = 0.4361698247616339;
    msg.z = 0.8274146223764313;
    msg.z_units = 31U;
    msg.speed = 0.08981044541314798;
    msg.speed_units = 144U;
    msg.custom.assign("EEKDRPHSPNXQWTUNHCGGWVOFIXAJSIQOPJIEGQJNGQCTWQOTMUIRZTZYKFTCPERLJQWCZ");

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
    msg.setTimeStamp(0.14752749490539585);
    msg.setSource(19761U);
    msg.setSourceEntity(105U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(106U);
    msg.timeout = 1903U;
    msg.lat = 0.6010765084117842;
    msg.lon = 0.35141911463857456;
    msg.z = 0.0837223272234553;
    msg.z_units = 71U;
    msg.speed = 0.4533815577126885;
    msg.speed_units = 224U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6853333709355147;
    tmp_msg_0.y = 0.8038997221343102;
    tmp_msg_0.z = 0.2962814233494855;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ICPGNPZFICCOMKUJMRLWKBBYBSCTJPHNZGHHIQMKNDZXAQYWEBHXTSJPCBHBORYZATETLYWTUNITDFJSZRDPFYGPFUVPQUDMSJIOORXGWUROADKVBRZWDJCKJLINXCWQOALTKRXVIAIXFSULFVPOMLHRELZHJOPJZMOGFQUIYJWRASWQVYHMQXRFGXTLXMQDNZANVVUKDVQGBGKNCPUZKEHVYDASEEEVQKBSIFTTXEDECSBMWAA");

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
    msg.setTimeStamp(0.8912286782764731);
    msg.setSource(18623U);
    msg.setSourceEntity(107U);
    msg.setDestination(6173U);
    msg.setDestinationEntity(3U);
    msg.x = 0.12260824846635032;
    msg.y = 0.5663859753723749;
    msg.z = 0.831835154318343;

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
    msg.setTimeStamp(0.8938671064102164);
    msg.setSource(25869U);
    msg.setSourceEntity(58U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(222U);
    msg.x = 0.8734019027210475;
    msg.y = 0.020319652147504863;
    msg.z = 0.4729826920428506;

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
    msg.setTimeStamp(0.6379580516856573);
    msg.setSource(12213U);
    msg.setSourceEntity(246U);
    msg.setDestination(902U);
    msg.setDestinationEntity(80U);
    msg.x = 0.2463694408503615;
    msg.y = 0.9357222348395459;
    msg.z = 0.1931393314147991;

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
    msg.setTimeStamp(0.05169839156630307);
    msg.setSource(38704U);
    msg.setSourceEntity(203U);
    msg.setDestination(36359U);
    msg.setDestinationEntity(80U);
    msg.timeout = 53922U;
    msg.lat = 0.6567451580398392;
    msg.lon = 0.7457048685834247;
    msg.z = 0.02746004331792662;
    msg.z_units = 148U;
    msg.amplitude = 0.7734290265639338;
    msg.pitch = 0.1668056252821365;
    msg.speed = 0.17644323404713758;
    msg.speed_units = 56U;
    msg.custom.assign("FKFZYULUINRIPBTNDSNVWPUMVZKTFJREKAIIGAJHYXEVLWGNQCBMCNDUIOCRXWROAJFBLJKCMMZOKIJFVSGDPHXUWILYOQIWBQVFBJAADGOSWMSVXSEHFEBZEYJUGOMOQBDEPDSTCXHZXYUNPTELWNRAOJCVGJYHWMWBLNPTRGEVSTGSOZKUNLOITQZMTZJCLRSDUDZFYBCHPGQXKRYDHEGMLAQFKYSHPWBDAHN");

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
    msg.setTimeStamp(0.9505226950612425);
    msg.setSource(36155U);
    msg.setSourceEntity(192U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(241U);
    msg.timeout = 59928U;
    msg.lat = 0.10166093782064911;
    msg.lon = 0.6873108276736729;
    msg.z = 0.9628335262934796;
    msg.z_units = 6U;
    msg.amplitude = 0.8459959742069992;
    msg.pitch = 0.18650133307714423;
    msg.speed = 0.8655370236164053;
    msg.speed_units = 78U;
    msg.custom.assign("PTRYNLJJTINDACKOBNLBCKIUUXMPHZDXJHNSCNQYCCAEZOAXSGPQI");

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
    msg.setTimeStamp(0.9475878258103141);
    msg.setSource(12267U);
    msg.setSourceEntity(253U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(222U);
    msg.timeout = 36458U;
    msg.lat = 0.7306293022625429;
    msg.lon = 0.8851219742815932;
    msg.z = 0.01007242064316105;
    msg.z_units = 160U;
    msg.amplitude = 0.8536286511127409;
    msg.pitch = 0.009401931455170098;
    msg.speed = 0.3593647315552879;
    msg.speed_units = 63U;
    msg.custom.assign("LOQETHDVVQHFINDGIXUGYCJMWQZUSTCAFBTDYGJYMWWNZUVCOQCTTMEJIRBGOCBDZVMKTBRCDQAFLRJKXECTLFHHELXLWOKYYQSBCFASVMXIJGEZODEPCXHRFZMHGMPCAWEBITVBRLOFZAJDZSZFWKAMNEUGAHZOQDXIPRJWGNPUPAKPJRLOBLAKHTINWUMZJXSUOLVUFPWVNNGQTRPMUBNWUQK");

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
    msg.setTimeStamp(0.42717571193803283);
    msg.setSource(2745U);
    msg.setSourceEntity(151U);
    msg.setDestination(56651U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.008609947150312047);
    msg.setSource(7848U);
    msg.setSourceEntity(62U);
    msg.setDestination(64956U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.7083360618121454);
    msg.setSource(14983U);
    msg.setSourceEntity(55U);
    msg.setDestination(12998U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.7822133057950569);
    msg.setSource(52488U);
    msg.setSourceEntity(64U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.07154860453132916;
    msg.lon = 0.37114024125926515;
    msg.z = 0.38557542390859934;
    msg.z_units = 56U;
    msg.radius = 0.23077443739251902;
    msg.duration = 25138U;
    msg.speed = 0.3022860266275097;
    msg.speed_units = 71U;
    msg.custom.assign("AFPTPKBWVMAFHONFQXCHCG");

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
    msg.setTimeStamp(0.7199450164231862);
    msg.setSource(40072U);
    msg.setSourceEntity(83U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.4338790215163896;
    msg.lon = 0.02326770293602165;
    msg.z = 0.24290576750245252;
    msg.z_units = 203U;
    msg.radius = 0.30672824532245235;
    msg.duration = 4482U;
    msg.speed = 0.025479347346674786;
    msg.speed_units = 60U;
    msg.custom.assign("TDLQTURFSWDTYNZXETUYWFUJAZHRQEOPGECVVABHYKSLNCCZEHULHDFJKYGHPCKUYQHCAWPSJNMRQILQLCUBFNSBIHRGOZDVRWUCBXJINZVLOGWYXXUTHJIRDSMWITENMEVXJGJPXJRSWFYORGDWSFBLVPPQVJA");

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
    msg.setTimeStamp(0.5201608740267616);
    msg.setSource(48442U);
    msg.setSourceEntity(185U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.42812900676776455;
    msg.lon = 0.36581846958759234;
    msg.z = 0.11384718267539173;
    msg.z_units = 194U;
    msg.radius = 0.2278287553772118;
    msg.duration = 44495U;
    msg.speed = 0.9003465583123617;
    msg.speed_units = 77U;
    msg.custom.assign("WOTYFMXJCCCBFXROSMBBPFUXWZMUHIDUSIHEKPDKMGPFVCZBEAMIZLUIBANSIVKTAREOTZJJUDUZVMLTKRHHPVBVYYEFBXAQJHSPVLSJCQIGAHZKVLGZWLZDHSTUSUXKRXPMOYNGQYDWDYKJQFYPMWEWLUI");

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
    msg.setTimeStamp(0.8787510445992405);
    msg.setSource(54901U);
    msg.setSourceEntity(222U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(242U);
    msg.timeout = 1488U;
    msg.flags = 151U;
    msg.lat = 0.3299640633798254;
    msg.lon = 0.2586928462011999;
    msg.start_z = 0.1538958850549237;
    msg.start_z_units = 67U;
    msg.end_z = 0.5669409362624981;
    msg.end_z_units = 24U;
    msg.radius = 0.48309751513248744;
    msg.speed = 0.7805694155132614;
    msg.speed_units = 8U;
    msg.custom.assign("BAZLKUOLDBEOUYYLWKBUHYNRJCFFGXPEJAJGMWVGTKUKZGMBZJYGFACNGIVIVJZMQOAJDFIBUODPTNZRPPZQDRWSETASPLONHRQLQUWXLXTQSKJDXDXSHNEPYKCYNSCVMJMOYCQYSARQBNVEHUZFZGYLBQZZXHBUPWFDGDSNIFHEIRTRQYCMSV");

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
    msg.setTimeStamp(0.23853380269082292);
    msg.setSource(34210U);
    msg.setSourceEntity(25U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(190U);
    msg.timeout = 7333U;
    msg.flags = 31U;
    msg.lat = 0.820176163754039;
    msg.lon = 0.43337095200980713;
    msg.start_z = 0.11027498792723456;
    msg.start_z_units = 39U;
    msg.end_z = 0.5108065473215359;
    msg.end_z_units = 67U;
    msg.radius = 0.3908482661713002;
    msg.speed = 0.585731582013294;
    msg.speed_units = 66U;
    msg.custom.assign("MONLDHXWSQINTKZIZFHGPYUCQAVZVUCYOMKKGEONJRLDMBEGEYRXBZCBDSUZVGYNTPCDSYJENFNHLNLSMPYRQMLZIVWQLITJRCBMAGRWODIFDGWCVVZBAHTPQGFEPNEXLONQVGKSJKAVBIDSSJOMQXOURHTKZQXIMDTOXYERWAPABUHPXUUBJIHQJHROUDFCYAKFOLMPYJFLPUERWFIF");

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
    msg.setTimeStamp(0.15710545318759905);
    msg.setSource(412U);
    msg.setSourceEntity(174U);
    msg.setDestination(24388U);
    msg.setDestinationEntity(183U);
    msg.timeout = 9325U;
    msg.flags = 43U;
    msg.lat = 0.18781362059763174;
    msg.lon = 0.18893664510178254;
    msg.start_z = 0.6228167897823246;
    msg.start_z_units = 238U;
    msg.end_z = 0.7533137709063823;
    msg.end_z_units = 39U;
    msg.radius = 0.6478551140709922;
    msg.speed = 0.7926963368493581;
    msg.speed_units = 180U;
    msg.custom.assign("TEHZRKRUNILSQBKPYXRIVVZVGLXZVPYNKSBMCKTDBDOAPVHSTRSUCMZUIIOKCAALBLCMEFMQNQNFWFPNZXZYJASGRJJNVUDFGAJTYKNMHZDDPHAMXCKLQQTZEGWYN");

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
    msg.setTimeStamp(0.6022727884031479);
    msg.setSource(63431U);
    msg.setSourceEntity(59U);
    msg.setDestination(18593U);
    msg.setDestinationEntity(44U);
    msg.timeout = 65187U;
    msg.lat = 0.658756122342857;
    msg.lon = 0.20840216564886482;
    msg.z = 0.2438385671386164;
    msg.z_units = 81U;
    msg.speed = 0.9450632558775807;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.14184203412875107;
    tmp_msg_0.y = 0.16961244161083688;
    tmp_msg_0.z = 0.13361518459938204;
    tmp_msg_0.t = 0.5993979232085499;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OHAOPHYNRAOVVWFQBHWWPNNLUXDWPDYEJBTGYLSEBCRHNSBZKFMKEULESXGCMLQMFUPZVECNMSUXRIWIGMJGXRGVKJYPMTOCKRQNMHFQLWWOBOTAMOEUTUKAJSGGVGUNCTLRFBDUVESZAPISWBJLFIRONZYCVXEI");

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
    msg.setTimeStamp(0.29334009468799926);
    msg.setSource(17609U);
    msg.setSourceEntity(133U);
    msg.setDestination(44643U);
    msg.setDestinationEntity(52U);
    msg.timeout = 49419U;
    msg.lat = 0.8625232448966014;
    msg.lon = 0.08865839383610952;
    msg.z = 0.23766238022073494;
    msg.z_units = 4U;
    msg.speed = 0.8757735242189227;
    msg.speed_units = 140U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.775071706676925;
    tmp_msg_0.y = 0.49312878712792985;
    tmp_msg_0.z = 0.6404150030668663;
    tmp_msg_0.t = 0.5678615171124926;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NBPGMUQXAUWQCWYICYNJXHDPVNKLBOODPMAXNWSBNQRHLRNGDDJHZKAFJQQGWQTICYRRIUNRJJVCITZOBEVWYPYWUZH");

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
    msg.setTimeStamp(0.6213648299756);
    msg.setSource(49869U);
    msg.setSourceEntity(225U);
    msg.setDestination(13055U);
    msg.setDestinationEntity(65U);
    msg.timeout = 39052U;
    msg.lat = 0.32998446676319726;
    msg.lon = 0.30335606458837605;
    msg.z = 0.09428239360292934;
    msg.z_units = 150U;
    msg.speed = 0.5628520119626725;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5173820125844524;
    tmp_msg_0.y = 0.3956283260620327;
    tmp_msg_0.z = 0.7873733311041261;
    tmp_msg_0.t = 0.6056833015828427;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KJXCIIWEKSHEJBEOTLWTWFFLRV");

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
    msg.setTimeStamp(0.6722779385520153);
    msg.setSource(60006U);
    msg.setSourceEntity(38U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(44U);
    msg.x = 0.49638740088762134;
    msg.y = 0.8546754432610955;
    msg.z = 0.6463384632608661;
    msg.t = 0.4874698252141212;

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
    msg.setTimeStamp(0.43827905028827563);
    msg.setSource(51373U);
    msg.setSourceEntity(227U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(117U);
    msg.x = 0.7109465054380422;
    msg.y = 0.5938031675022944;
    msg.z = 0.004057968496035902;
    msg.t = 0.9800696290381847;

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
    msg.setTimeStamp(0.8202046150672289);
    msg.setSource(33144U);
    msg.setSourceEntity(25U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(40U);
    msg.x = 0.41842527281347686;
    msg.y = 0.5132352007934256;
    msg.z = 0.7619213735199529;
    msg.t = 0.5600096904291302;

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
    msg.setTimeStamp(0.9251429171354693);
    msg.setSource(4276U);
    msg.setSourceEntity(115U);
    msg.setDestination(48281U);
    msg.setDestinationEntity(253U);
    msg.timeout = 17925U;
    msg.name.assign("MHHEWPSJKIUNPNNZBMFIQLBWXSPHKDTMFACFXXNWYHLZADCXBLVONPRTACEQEISVBNVSVUYMCUBHREPDNZOLFQMSKWDPEJCMKGUDYCKABEAJIRVSGMKOZSMOWLITTDHXILZVTRLAXOIVIJQZKRGWGRGQTEWTDEGBVOQXTAQYFEHFROYYYGSFTNCDZMANOWIZQHUVDZGPRJPCJUVURXFMJWLNYGITYJKCFPJKQARUDOAKYUWCBP");
    msg.custom.assign("MNXBARKHFHISPFYYZCNRVPSDTHJJVPUEKGDFXVROYGTAQERHPVCC");

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
    msg.setTimeStamp(0.027686910785016727);
    msg.setSource(3273U);
    msg.setSourceEntity(34U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(1U);
    msg.timeout = 3361U;
    msg.name.assign("FGUNGLZUAPRCOZEAIQIWSRIXZBCSHQYDZAGFCRLDJSAYHWCIFJRNKAKSEOGPZUTSVMVGEAMWVFHYHJFZDIZUDSKBBWVBDXGGUULED");
    msg.custom.assign("EJUKJUTXQSLTGCLEZBVGFZTBNRUQHNBMPSDZQDEFZJFYXEAWMVRMRZLJOCUTMYSMTHZEXUMFBCXSCFHWPHNDOXFFZPOXVK");

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
    msg.setTimeStamp(0.8026273201998311);
    msg.setSource(58076U);
    msg.setSourceEntity(198U);
    msg.setDestination(49578U);
    msg.setDestinationEntity(196U);
    msg.timeout = 62864U;
    msg.name.assign("FDBFBRIBUALMUBSAMYHBTNLJNHDLHTOXLOTUSEHGKIIPMCWBHLMNMKGKVUGXIWIICJBOSRJYLFVMGEGEOXSLJAAEWOCZMWZPTAKLFEPSSAOXEYJIGIPRCHXZPTTSTIQDWKWJUDOYTWYJUQKOAZXBCVOHUBGHXHPUJEFTRRZAAZAOPKSCUDZFNCKPRVLCVYZRQYRYDNVQVDKVPEZCWYQJXNNGMRNZWVQBFLQGJFPXX");
    msg.custom.assign("ZFLIPIERTTJA");

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
    msg.setTimeStamp(0.8168075141406715);
    msg.setSource(48224U);
    msg.setSourceEntity(109U);
    msg.setDestination(30523U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.5643543722646386;
    msg.lon = 0.9882738597586851;
    msg.z = 0.4120117442371771;
    msg.z_units = 121U;
    msg.speed = 0.024746682995894997;
    msg.speed_units = 115U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8350214646480683;
    tmp_msg_0.y = 0.46206738225455246;
    tmp_msg_0.z = 0.5781117581297258;
    tmp_msg_0.t = 0.3908037261582874;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6688854341047757;
    msg.custom.assign("HHBUWSKUUDSZVDWBHPOWLVWQSNZXMCPMKDHZEQIEFNYSQTKGCXFCUJLDYIWFQGOJVVOERBSEOQPITVHOCQHUSTEVNRBNXXZOAGUACURMKVHRYNGOTTLBDQIYIXDPBYPIYNJTJQIZFDPARALGFZJLDCCSFHMOJMWQDMPNWMJRLNEINLLTYKUFGKUHYPKPRZJLBVAAPKZRCREXZJSKSZAGBCYQAFMWWKGMFANHSFBIEGGVBXIXJTTOXXAY");

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
    msg.setTimeStamp(0.027398147356353042);
    msg.setSource(58976U);
    msg.setSourceEntity(183U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.08361249491980982;
    msg.lon = 0.7184432968752019;
    msg.z = 0.22324303983990745;
    msg.z_units = 240U;
    msg.speed = 0.9200730017789319;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.379518697011231;
    tmp_msg_0.y = 0.22538842021216543;
    tmp_msg_0.z = 0.41639536215643314;
    tmp_msg_0.t = 0.519457686798162;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 46079U;
    tmp_msg_1.off_x = 0.7499323139414374;
    tmp_msg_1.off_y = 0.7549657804911405;
    tmp_msg_1.off_z = 0.6923081681337094;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.40618476089138567;
    msg.custom.assign("FMRXMTZKHDNQEEETIFNJJVQWAJXPPLPULPGWUCTQYGVJWSXCIGMKXZEENPSUJXKNVVRHMLZNXGRWYGATTXPOPPDQENDEUAUOMQDZVAFVCATGSZGNFBLOIOGGDQQMHYBIQAITIPFRDDDDICBCVYRTSLHHPZVBXJBRLSKTUIOHJNAZRSFFYMBICGOKLWXUEMBB");

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
    msg.setTimeStamp(0.8193944936873875);
    msg.setSource(6296U);
    msg.setSourceEntity(144U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.7193089831776206;
    msg.lon = 0.7563234322050502;
    msg.z = 0.18729941586845678;
    msg.z_units = 209U;
    msg.speed = 0.8689039520002214;
    msg.speed_units = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29158U;
    tmp_msg_0.off_x = 0.08949642310142591;
    tmp_msg_0.off_y = 0.5022128960650719;
    tmp_msg_0.off_z = 0.22518682164824189;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8964185436725675;
    msg.custom.assign("TYMFXKBIWOKQMZBUMTWAJLLG");

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
    msg.setTimeStamp(0.8771671820855009);
    msg.setSource(25227U);
    msg.setSourceEntity(165U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(253U);
    msg.vid = 55174U;
    msg.off_x = 0.05018987510360717;
    msg.off_y = 0.34362466759153365;
    msg.off_z = 0.25406022998697353;

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
    msg.setTimeStamp(0.9033441492477408);
    msg.setSource(55650U);
    msg.setSourceEntity(21U);
    msg.setDestination(23151U);
    msg.setDestinationEntity(66U);
    msg.vid = 37945U;
    msg.off_x = 0.11080237210493482;
    msg.off_y = 0.23743737023343348;
    msg.off_z = 0.749824155176783;

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
    msg.setTimeStamp(0.3342962859196038);
    msg.setSource(54351U);
    msg.setSourceEntity(42U);
    msg.setDestination(11623U);
    msg.setDestinationEntity(19U);
    msg.vid = 42363U;
    msg.off_x = 0.4015558834077272;
    msg.off_y = 0.6333802261131022;
    msg.off_z = 0.8897583966386923;

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
    msg.setTimeStamp(0.17066241707666496);
    msg.setSource(29294U);
    msg.setSourceEntity(207U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.680434556993963);
    msg.setSource(62151U);
    msg.setSourceEntity(204U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.20392192938034193);
    msg.setSource(2321U);
    msg.setSourceEntity(79U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.8276607228123826);
    msg.setSource(9374U);
    msg.setSourceEntity(25U);
    msg.setDestination(12541U);
    msg.setDestinationEntity(166U);
    msg.mid = 53873U;

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
    msg.setTimeStamp(0.5569049023568009);
    msg.setSource(37654U);
    msg.setSourceEntity(22U);
    msg.setDestination(25466U);
    msg.setDestinationEntity(125U);
    msg.mid = 52230U;

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
    msg.setTimeStamp(0.5874818975675428);
    msg.setSource(5808U);
    msg.setSourceEntity(166U);
    msg.setDestination(47447U);
    msg.setDestinationEntity(128U);
    msg.mid = 27153U;

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
    msg.setTimeStamp(0.6307381896061762);
    msg.setSource(54848U);
    msg.setSourceEntity(21U);
    msg.setDestination(21870U);
    msg.setDestinationEntity(46U);
    msg.state = 167U;
    msg.eta = 2920U;
    msg.info.assign("RTAZKAVZDNYLRYXEVQITLXHWXGMBEIOUPXAPWVMWYCUSJPDDGEYBTLHHQMNCLIMIHUPSQQUAJOUYCNSPSPFGLMMPBMCDZBSOZOFLZVVJGNYHMNJEXSOWHCKYWRFANERKUEBKZCQGTPBCFAIZBLZUIATBJJHXTWQMPNXGUYIGXCOUDKQBMHNSDKILOHZNQWTRBXH");

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
    msg.setTimeStamp(0.7371252922298331);
    msg.setSource(54389U);
    msg.setSourceEntity(40U);
    msg.setDestination(59797U);
    msg.setDestinationEntity(98U);
    msg.state = 174U;
    msg.eta = 32877U;
    msg.info.assign("MJBRUTQPYTKDENERAQGKQRNHJYMURPGGCREIAHKONDUDTCSZXWICQCMYQFLXBOWBDYIXVKJLAMLEVDSTQEUITIDOHGTGYLQVHAFPLOYFNWNSTYPNSZUPHWFWEXTHPWAHFMIYZPNVEXHBVSHWIBNVCLZBCOPDTGLMPICAGJAACVVZOVSJRGOKZKNRBOJFOJVSMZOZULMPQXZMXYLFBXCXEJKJKAQIXGK");

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
    msg.setTimeStamp(0.27276801379940174);
    msg.setSource(50406U);
    msg.setSourceEntity(128U);
    msg.setDestination(13431U);
    msg.setDestinationEntity(60U);
    msg.state = 37U;
    msg.eta = 8908U;
    msg.info.assign("BMLRUCYEIOQYJCQZGOUUJFSIYFFLN");

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
    msg.setTimeStamp(0.30755299765496136);
    msg.setSource(30351U);
    msg.setSourceEntity(18U);
    msg.setDestination(21264U);
    msg.setDestinationEntity(113U);
    msg.system = 974U;
    msg.duration = 41165U;
    msg.speed = 0.09391072734044381;
    msg.speed_units = 54U;
    msg.x = 0.8088893114247858;
    msg.y = 0.4280586347315998;
    msg.z = 0.9922470168127749;
    msg.z_units = 169U;

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
    msg.setTimeStamp(0.8996702290126972);
    msg.setSource(46477U);
    msg.setSourceEntity(193U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(223U);
    msg.system = 6662U;
    msg.duration = 47409U;
    msg.speed = 0.6011363786489801;
    msg.speed_units = 198U;
    msg.x = 0.1128329633090992;
    msg.y = 0.391701916843214;
    msg.z = 0.5634068857425732;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.9442057025228701);
    msg.setSource(45986U);
    msg.setSourceEntity(17U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(186U);
    msg.system = 64638U;
    msg.duration = 59476U;
    msg.speed = 0.20449999985898293;
    msg.speed_units = 228U;
    msg.x = 0.3512884731734044;
    msg.y = 0.07639112743784604;
    msg.z = 0.4807179277153062;
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
    msg.setTimeStamp(0.7094603402714946);
    msg.setSource(65291U);
    msg.setSourceEntity(98U);
    msg.setDestination(56084U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.8005446527995143;
    msg.lon = 0.38416581942295136;
    msg.speed = 0.38784878696335223;
    msg.speed_units = 25U;
    msg.duration = 32864U;
    msg.sys_a = 50182U;
    msg.sys_b = 63314U;
    msg.move_threshold = 0.30487223114919915;

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
    msg.setTimeStamp(0.14064490856980616);
    msg.setSource(33155U);
    msg.setSourceEntity(112U);
    msg.setDestination(31107U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.9460981375727678;
    msg.lon = 0.58181964539234;
    msg.speed = 0.38634080929988823;
    msg.speed_units = 159U;
    msg.duration = 64603U;
    msg.sys_a = 55958U;
    msg.sys_b = 965U;
    msg.move_threshold = 0.9884751893862682;

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
    msg.setTimeStamp(0.3639880163702386);
    msg.setSource(29028U);
    msg.setSourceEntity(188U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.2565101899857992;
    msg.lon = 0.2578141651870328;
    msg.speed = 0.9430579147439391;
    msg.speed_units = 91U;
    msg.duration = 41656U;
    msg.sys_a = 24437U;
    msg.sys_b = 47482U;
    msg.move_threshold = 0.6208349028801854;

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
    msg.setTimeStamp(0.5431058045390744);
    msg.setSource(13383U);
    msg.setSourceEntity(7U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.3919435875484074;
    msg.lon = 0.9217708667242717;
    msg.z = 0.9584254441847045;
    msg.z_units = 142U;
    msg.speed = 0.9114425798361067;
    msg.speed_units = 106U;
    msg.custom.assign("MOFOJAIGTLNDYNIRDZTECMAUJLMUSIPEIGFWJASXLFQOFIJRFSOBAXFLSHYMIEXRWCJWHTRKY");

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
    msg.setTimeStamp(0.9107206844711603);
    msg.setSource(10824U);
    msg.setSourceEntity(186U);
    msg.setDestination(19737U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.8015763033300637;
    msg.lon = 0.48657664012724333;
    msg.z = 0.20842553057489754;
    msg.z_units = 229U;
    msg.speed = 0.7087182678957982;
    msg.speed_units = 161U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.07755665331248718;
    tmp_msg_0.lon = 0.6604879983111767;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QEHHWKBDEQWGYPXJCMGXNAFERWKAHBITCGUWYEUMUZMDUFEUSCDNAXPELBTDMUNJAJUQZPRSVAOKYMJTORLLGSCYGRVLUJBMRHDILKTSNRHQGGLXBYDTSEKXHVNQFVCIXWIOZRFSVOIMUAZMQOSSGWBLZAVKFGVXHOOYJJCDPYTTINQHXPFJQLBYDHNUVPQLFILZORIPWDMPABGZNVRIKAPKSJEETV");

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
    msg.setTimeStamp(0.4017882442458157);
    msg.setSource(10097U);
    msg.setSourceEntity(21U);
    msg.setDestination(56273U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.2533788140892532;
    msg.lon = 0.44048398388485743;
    msg.z = 0.2610399142991705;
    msg.z_units = 183U;
    msg.speed = 0.7162902678324286;
    msg.speed_units = 109U;
    msg.custom.assign("TQGDTWKMJNTHRMNJWOCHP");

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
    msg.setTimeStamp(0.34713261002134777);
    msg.setSource(33136U);
    msg.setSourceEntity(233U);
    msg.setDestination(11261U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.11960784242329792;
    msg.lon = 0.6465174911632505;

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
    msg.setTimeStamp(0.8061093359845581);
    msg.setSource(51800U);
    msg.setSourceEntity(225U);
    msg.setDestination(40044U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.45880343562099946;
    msg.lon = 0.45410171342327577;

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
    msg.setTimeStamp(0.6707817687186671);
    msg.setSource(52978U);
    msg.setSourceEntity(14U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.9751170998013345;
    msg.lon = 0.8211146496390794;

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
    msg.setTimeStamp(0.9552326578992136);
    msg.setSource(2040U);
    msg.setSourceEntity(102U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(234U);
    msg.timeout = 2057U;
    msg.lat = 0.772550919384537;
    msg.lon = 0.7066047815494108;
    msg.z = 0.375920083705229;
    msg.z_units = 202U;
    msg.pitch = 0.4916399555442963;
    msg.amplitude = 0.6395728778752715;
    msg.duration = 2792U;
    msg.speed = 0.7406295097682603;
    msg.speed_units = 215U;
    msg.radius = 0.7250950687950592;
    msg.direction = 43U;
    msg.custom.assign("IJNEBOQTBKFIGNWGZXLPUNGJPMRRJLVTZKAARJSLBYZVUTYHVVTVZTOZPCMNGVOTYJFDDLCBPOKHXIQIMWHUBLXAAGMXURFFTZLKZWDAOAZQQLWHHJNIZWOFXVKGXVLSSYHDDRNBOYLHEEPYCXQOWPUMDPKMFAFX");

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
    msg.setTimeStamp(0.448586041070676);
    msg.setSource(35580U);
    msg.setSourceEntity(40U);
    msg.setDestination(18893U);
    msg.setDestinationEntity(135U);
    msg.timeout = 41979U;
    msg.lat = 0.38455615882414196;
    msg.lon = 0.6434832441446844;
    msg.z = 0.984670207977894;
    msg.z_units = 188U;
    msg.pitch = 0.7239636312646771;
    msg.amplitude = 0.6679383185442042;
    msg.duration = 54665U;
    msg.speed = 0.3677070527194022;
    msg.speed_units = 216U;
    msg.radius = 0.03973328406436483;
    msg.direction = 107U;
    msg.custom.assign("GROJBBNNODNWLSWGLUIHLYOSZTDKYVCFPBUTRTXQOCAQZJCJJSMQFCYUVCMKZBAIWXGWUKNABBRLISURHTEBIQZJGEXAMTGXMCGYCVDWTTFEXVWQUPSQZDQREJIAEZCSFGOXEOLKIKDYGGFPHJTADTPN");

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
    msg.setTimeStamp(0.7979549927976938);
    msg.setSource(16204U);
    msg.setSourceEntity(132U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(114U);
    msg.timeout = 63853U;
    msg.lat = 0.11072436546008813;
    msg.lon = 0.9599017966378466;
    msg.z = 0.42390190742080835;
    msg.z_units = 142U;
    msg.pitch = 0.8030288480026199;
    msg.amplitude = 0.7452402235119951;
    msg.duration = 51250U;
    msg.speed = 0.9089007034101375;
    msg.speed_units = 184U;
    msg.radius = 0.9204021737446283;
    msg.direction = 156U;
    msg.custom.assign("WISHGXWPEBAPHIGFPLSNNEHXXFZFZQMDCMUXVOKEEONYIVSLJOIONTIHDKJZKILPSIAMNCCJSLUCNVNOBKAVCSMXZGKKAFHDQYDKGCBNCFOGRRLQSYLMQNAVLWRTDDGYPOBJKZQUVHUEBDGEHXBBMRRWETKPUTLYFWMTQQIEAFWLJH");

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
    msg.setTimeStamp(0.21091615272843145);
    msg.setSource(32252U);
    msg.setSourceEntity(226U);
    msg.setDestination(59277U);
    msg.setDestinationEntity(60U);
    msg.control_src = 58336U;
    msg.control_ent = 45U;
    msg.timeout = 0.5388949398714816;
    msg.loiter_radius = 0.768527982317823;
    msg.altitude_interval = 0.1297238330008027;

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
    msg.setTimeStamp(0.7145260547092191);
    msg.setSource(10002U);
    msg.setSourceEntity(71U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(51U);
    msg.control_src = 19312U;
    msg.control_ent = 192U;
    msg.timeout = 0.8760076839448799;
    msg.loiter_radius = 0.138177031700772;
    msg.altitude_interval = 0.2164520980607384;

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
    msg.setTimeStamp(0.5749589901609377);
    msg.setSource(14699U);
    msg.setSourceEntity(234U);
    msg.setDestination(51054U);
    msg.setDestinationEntity(112U);
    msg.control_src = 32467U;
    msg.control_ent = 76U;
    msg.timeout = 0.21343319515840442;
    msg.loiter_radius = 0.21118612485636867;
    msg.altitude_interval = 0.9315733514295653;

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
    msg.setTimeStamp(0.4773938436835291);
    msg.setSource(8009U);
    msg.setSourceEntity(44U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(205U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9335092595792797;
    tmp_msg_0.speed_units = 236U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.32658168482515115;
    tmp_msg_1.z_units = 82U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.36640904625875337;
    msg.lon = 0.510777092488647;
    msg.radius = 0.8408537258205833;

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
    msg.setTimeStamp(0.13118469799168309);
    msg.setSource(56065U);
    msg.setSourceEntity(114U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(18U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4562922213904168;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7732582793864797;
    tmp_msg_1.z_units = 78U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5768667769320223;
    msg.lon = 0.013064353081749136;
    msg.radius = 0.15892669449151087;

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
    msg.setTimeStamp(0.697999890437199);
    msg.setSource(61178U);
    msg.setSourceEntity(55U);
    msg.setDestination(6828U);
    msg.setDestinationEntity(190U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4229500764758972;
    tmp_msg_0.speed_units = 254U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7904937967265221;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6190242941008427;
    msg.lon = 0.3283291340862756;
    msg.radius = 0.20009439538383234;

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
    msg.setTimeStamp(0.16940623411752043);
    msg.setSource(22699U);
    msg.setSourceEntity(138U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(229U);
    msg.control_src = 32318U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 7U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5545024607828934;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.42799687779611617;
    tmp_tmp_msg_0_1.z_units = 130U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4567859629029244;
    tmp_msg_0.lon = 0.00799762517715652;
    tmp_msg_0.radius = 0.15966366384547093;
    msg.reference.set(tmp_msg_0);
    msg.state = 210U;
    msg.proximity = 154U;

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
    msg.setTimeStamp(0.47392273631582016);
    msg.setSource(53174U);
    msg.setSourceEntity(43U);
    msg.setDestination(56243U);
    msg.setDestinationEntity(72U);
    msg.control_src = 63122U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 129U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7793400661328005;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5105480954469509;
    tmp_tmp_msg_0_1.z_units = 103U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9421479396576351;
    tmp_msg_0.lon = 0.9348885576796776;
    tmp_msg_0.radius = 0.4566052722136119;
    msg.reference.set(tmp_msg_0);
    msg.state = 165U;
    msg.proximity = 35U;

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
    msg.setTimeStamp(0.7330558546984247);
    msg.setSource(27969U);
    msg.setSourceEntity(120U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(104U);
    msg.control_src = 24695U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 147U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.24323139003421523;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5454424223529487;
    tmp_tmp_msg_0_1.z_units = 150U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.03871077045338678;
    tmp_msg_0.lon = 0.04459665174820471;
    tmp_msg_0.radius = 0.519187145156323;
    msg.reference.set(tmp_msg_0);
    msg.state = 165U;
    msg.proximity = 70U;

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
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9751267067010427);
    msg.setSource(30322U);
    msg.setSourceEntity(59U);
    msg.setDestination(25762U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("MGXRCRYQINAHURZUDEZPRWEQVIDUYBIYUUBNZSONHEZPOJPUTFOCALFVJSMGOLDKCNFGXAHZVWXDIMSTKKPGQCEZLDBWUGGMJTPBUFCFPRZLVPPVDYGVMHGTOJSQNWXVWFJQQKAISTFLXXNPWDSYJHVGYOCROWQAYYILWYTMHEJEJLWFQNIIEN");
    msg.formation_name.assign("WXDLTJZLWUQFRUDOCWBSNHFMBQCPRCTNXGMWNAVIRJTYFVPKXVLAHCBBSGINFLJMYUKMCMQPBGDGPYKLQHZJGWPSXKZXBKOEYEVDMNEFEODMFEJTTNPLGJGDJPDYNWERPTQIIHHJQQVEBABTTTALAMZFGNHAOUEYTOEDMKDUHAVKHBAILCNVVCKOHQDZYIUSLCRIMHXPQUFXSGGIARWSRISWLZXOBWVKNSYYFPXO");
    msg.plan_id.assign("BEGZGBIQTATQKQCUAMHBBNHXGGOJPJDEKSYJPLTMYOCSEDBQGWNUCAHKJNLBTXECZPWOKVPUYCVIBBHMFHSLLJL");
    msg.description.assign("ADIOTQAXLAQUUDVDHDRAJBNTPVKKZHBUFTEHAIQIAPEJXKWEYPNZQMKWJALQIIRBXGZCBJVCFYSHNCOMIGGOYYQBPWGNDROGEUYSCRUKCFNZSJHYXSMLONZMOYEYTFXSVSBVFAUCCHSMNQZTVLPEMGTEWPJUKOCUEWIS");
    msg.leader_speed = 0.8809008514706561;
    msg.leader_bank_lim = 0.2978600077359661;
    msg.pos_sim_err_lim = 0.7398898512447761;
    msg.pos_sim_err_wrn = 0.017902924087046856;
    msg.pos_sim_err_timeout = 28173U;
    msg.converg_max = 0.331804748239105;
    msg.converg_timeout = 38694U;
    msg.comms_timeout = 37950U;
    msg.turb_lim = 0.17606554603896285;
    msg.custom.assign("OONFXXTPCIUOGKBDWXFJLHSXABBFHKDAZMINDBGEIKCRSIZFYLLLWZGPJXVQXUAMALZEOWAJRYUTSJAEXSMFLVQYTLFQGIGPHTWJOIERVQRFIBSTKFHZNVBUEBCJNNHAFMKPRPMOVTCMUTCZVEQYEYFOUGDHRESVKAJNJNOWCJYMSZDKPQMM");

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
    msg.setTimeStamp(0.039539189604735125);
    msg.setSource(60558U);
    msg.setSourceEntity(115U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("QNASUZMXYDKHHNODKKALRFOXPYBPLKMLZNBHGRGJQSZFHKBFVVDSFJNWWKDQVXDWFLNETJVBMERNDXIINTCKTXZKIJTREMSPECWHTHEWKABMCPJFIBTVOZFZBRIDAGSRALPUSRTUILXFYUYELCHBPYCJNQGNPATGALUOPEMDBGUPWNQLUGWWCETAQZCYIXXZWCORJAOVVVUJAEXQSZYTSJYG");
    msg.formation_name.assign("QYNEPKCJYVKEJRDQWSHSLKDHZAYHVRZJGVEGYBHFEJAOHSIVNHOGGSQPTZCZUGJBMZTYIHFXUPXPLPWTGCBNRJZVLWAWHIWUOKDSJURNRQCZSBBENUJYPKYLLTWZYXXFMDDQLIKSDTDNVMGKUHMUPOFQKXCAPMCMRBQMVAEOPVXS");
    msg.plan_id.assign("LUCFYRPLGVZGNKMKVMXGKJWBZWDZNFHRYLJUNIUQZFNTUAGQOHFKQ");
    msg.description.assign("PNTLCREZTUXKWSBYFKMCCRLTHOOTVVFGNWPQCSFDLNVDHICMZIYLDKOJNMHNXESHTABIBPJCMMPQXUTKBJNKCLOGTXTLFWZFFEEGKZXUVLLAOKDENDSYQFBRGJRSNEAEAYSGZRAMEPZHXJHGYQUGTPEFRDBRZZIYPNUAUJOU");
    msg.leader_speed = 0.1862716666294958;
    msg.leader_bank_lim = 0.4093212093237819;
    msg.pos_sim_err_lim = 0.8112708112142885;
    msg.pos_sim_err_wrn = 0.21140861358536556;
    msg.pos_sim_err_timeout = 13865U;
    msg.converg_max = 0.027936372362686646;
    msg.converg_timeout = 18132U;
    msg.comms_timeout = 42498U;
    msg.turb_lim = 0.5124363630595942;
    msg.custom.assign("GQUWKCSGVTJVDJDFREBEVGLRRISHFJYXBBLMJBOLSSTLETSXYNZPWUDLECMQMLNQGDYAHWANAUFLLPVQCXVYDTUPOFXZBEXNZPCMPTKGWOMMDBGXJDWHIUGXZIXFHUOQQBRVEPUDCRJJTTLCZNVIEVYQNAXMCQZYCOZZBFQKIGIYQSSTMFIAXHMOEVMAGCZNTHGHJKJSYPSSLEE");

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
    msg.setTimeStamp(0.6259275136812561);
    msg.setSource(40769U);
    msg.setSourceEntity(144U);
    msg.setDestination(25345U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("AEYVBLCARWXNBHCXSMUVIZCQUMNA");
    msg.formation_name.assign("WRRLFODGOGJBOKLUNVJCRGAYWCXEPINWTSRHMBSVISAOYDNHEHKMALOKZMBWBDXVTOWGNYNNFLSSNCOTKXVMZXUPTJQPZPDRJAQXZBBDJTIOVJZERPUQFWKERMIGGHYZFZ");
    msg.plan_id.assign("RPKOYNTCIKTDRCGGTPZVZDUXRKFXJUIJFJVYONCMGQEIHGBDXYCHTSPBPUQBRJGHOEYLFOSWJWUFYPDCREZADPBYORECKGEUMUMVKQKPPGAXWA");
    msg.description.assign("QYKVUYELBQATRMQILGVYBFXGWLAXCYSUKKYJWTULHYSCOEPDZRABHHCABOTMMLHLVBSFQSLUFKZKXFWLTOAXDUFTATZAOZXENREHNGLDTWISUFCESKVGXSCBJOWEXAZNIRMORLKPKYXXTCOBQJJJGAMRUOICNNWZJPKJPPDXNHUHEZSIWQZBOBVV");
    msg.leader_speed = 0.004440259318366446;
    msg.leader_bank_lim = 0.713149452583909;
    msg.pos_sim_err_lim = 0.07014749978300927;
    msg.pos_sim_err_wrn = 0.2867841791713074;
    msg.pos_sim_err_timeout = 8107U;
    msg.converg_max = 0.4055686600277921;
    msg.converg_timeout = 42768U;
    msg.comms_timeout = 36570U;
    msg.turb_lim = 0.6875891071369616;
    msg.custom.assign("DTAIRTBNBMZQIJT");

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.9231090282732438);
    msg.setSource(57537U);
    msg.setSourceEntity(140U);
    msg.setDestination(55170U);
    msg.setDestinationEntity(82U);
    msg.ax_cmd = 0.38796601740656866;
    msg.ay_cmd = 0.02972369733004898;
    msg.az_cmd = 0.2638645548641525;
    msg.ax_des = 0.10426938557389709;
    msg.ay_des = 0.16126860172801927;
    msg.az_des = 0.925462295612985;
    msg.virt_err_x = 0.0834043458161724;
    msg.virt_err_y = 0.8754167775599733;
    msg.virt_err_z = 0.16866466651329182;
    msg.surf_fdbk_x = 0.9700621265201862;
    msg.surf_fdbk_y = 0.6818992386118111;
    msg.surf_fdbk_z = 0.9916485386109468;
    msg.surf_unkn_x = 0.31795873164122446;
    msg.surf_unkn_y = 0.5582990684348982;
    msg.surf_unkn_z = 0.5730360867981621;
    msg.ss_x = 0.33908299539640097;
    msg.ss_y = 0.3441333869847909;
    msg.ss_z = 0.039507566205704725;

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
    msg.setTimeStamp(0.5253276884596979);
    msg.setSource(39855U);
    msg.setSourceEntity(225U);
    msg.setDestination(53371U);
    msg.setDestinationEntity(48U);
    msg.ax_cmd = 0.8880187850674754;
    msg.ay_cmd = 0.45249824829067786;
    msg.az_cmd = 0.6108566331577144;
    msg.ax_des = 0.7472410161215653;
    msg.ay_des = 0.8268701840396564;
    msg.az_des = 0.4919521077606823;
    msg.virt_err_x = 0.07265789956117719;
    msg.virt_err_y = 0.2093714089829699;
    msg.virt_err_z = 0.2786212784179454;
    msg.surf_fdbk_x = 0.6056910099684002;
    msg.surf_fdbk_y = 0.14378813342706187;
    msg.surf_fdbk_z = 0.15400604605919122;
    msg.surf_unkn_x = 0.29642287379922416;
    msg.surf_unkn_y = 0.5914303995887774;
    msg.surf_unkn_z = 0.1914797312867731;
    msg.ss_x = 0.4871369605156076;
    msg.ss_y = 0.48210360458154067;
    msg.ss_z = 0.09068014454483508;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VMREDJLLOAZWNPYZBPNQHYZIURNQXMCCPQAGQCKWKMKXSSOTRHWAXKVWERTWDOSECNZCYYOADBTTAEWVEWAIIADDENLGWMOHZXKUBJFRKYSQDRHHIDBFCBSLHQQIPGPODAIPWLZFXQZRRCMUVLICPDFNFGHJLBTZT");
    tmp_msg_0.dist = 0.6019496967944648;
    tmp_msg_0.err = 0.5227981525320914;
    tmp_msg_0.ctrl_imp = 0.8363683083787447;
    tmp_msg_0.rel_dir_x = 0.3883673225929468;
    tmp_msg_0.rel_dir_y = 0.4859551435080831;
    tmp_msg_0.rel_dir_z = 0.15248427409667242;
    tmp_msg_0.err_x = 0.6368314098784373;
    tmp_msg_0.err_y = 0.12378820593782602;
    tmp_msg_0.err_z = 0.1284451085427547;
    tmp_msg_0.rf_err_x = 0.17949535995644528;
    tmp_msg_0.rf_err_y = 0.11369798040323309;
    tmp_msg_0.rf_err_z = 0.5895766213729479;
    tmp_msg_0.rf_err_vx = 0.22264577121816054;
    tmp_msg_0.rf_err_vy = 0.03466417752721407;
    tmp_msg_0.rf_err_vz = 0.6329962327195819;
    tmp_msg_0.ss_x = 0.6576456985282942;
    tmp_msg_0.ss_y = 0.29593793137932145;
    tmp_msg_0.ss_z = 0.10152090236293931;
    tmp_msg_0.virt_err_x = 0.019478344981443407;
    tmp_msg_0.virt_err_y = 0.12923661278538023;
    tmp_msg_0.virt_err_z = 0.08629148670061815;
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
    msg.setTimeStamp(0.022256839146623686);
    msg.setSource(38396U);
    msg.setSourceEntity(108U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(74U);
    msg.ax_cmd = 0.5604635189213389;
    msg.ay_cmd = 0.3792544460276761;
    msg.az_cmd = 0.3889190899309508;
    msg.ax_des = 0.07174711562773717;
    msg.ay_des = 0.672084159662453;
    msg.az_des = 0.574752785234656;
    msg.virt_err_x = 0.8902905656037027;
    msg.virt_err_y = 0.476835262259347;
    msg.virt_err_z = 0.4552369588820415;
    msg.surf_fdbk_x = 0.6363381993890194;
    msg.surf_fdbk_y = 0.46655673732980796;
    msg.surf_fdbk_z = 0.5463373815686148;
    msg.surf_unkn_x = 0.176935423449758;
    msg.surf_unkn_y = 0.08432633148548274;
    msg.surf_unkn_z = 0.032276602484441086;
    msg.ss_x = 0.050192496649010154;
    msg.ss_y = 0.5158881513222239;
    msg.ss_z = 0.9916960878394049;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NBPGZKRKVKFUFZZXLVUSKCVCSSTNOMOKBIELYUUGCSTCUPJXAWPYCRPBANDWLWDBYWKXIJEJMCDWBVAPNFEQQORJWQQNQJEKFHARXXBYDMOTOISWPMXXITLSOERQSXHULFJGELVGQCWPTRPNBZASAVDTLVREGIUOEDGAICTMOFPZJTMGOZHBUIHEDLZSTRGQBUQCAXWFZDZGI");
    tmp_msg_0.dist = 0.3582574372764177;
    tmp_msg_0.err = 0.14313731957411002;
    tmp_msg_0.ctrl_imp = 0.6308001574430505;
    tmp_msg_0.rel_dir_x = 0.2625651512895195;
    tmp_msg_0.rel_dir_y = 0.5521241534086533;
    tmp_msg_0.rel_dir_z = 0.7771914038157043;
    tmp_msg_0.err_x = 0.3366160558912833;
    tmp_msg_0.err_y = 0.7342277839563424;
    tmp_msg_0.err_z = 0.1828983194473801;
    tmp_msg_0.rf_err_x = 0.573527584465898;
    tmp_msg_0.rf_err_y = 0.297564095115488;
    tmp_msg_0.rf_err_z = 0.13260190599612132;
    tmp_msg_0.rf_err_vx = 0.05119137902024562;
    tmp_msg_0.rf_err_vy = 0.8682273330297681;
    tmp_msg_0.rf_err_vz = 0.24016633329565718;
    tmp_msg_0.ss_x = 0.5866406591380775;
    tmp_msg_0.ss_y = 0.6328175653651905;
    tmp_msg_0.ss_z = 0.05045408077404956;
    tmp_msg_0.virt_err_x = 0.2870823285693722;
    tmp_msg_0.virt_err_y = 0.8053992348358986;
    tmp_msg_0.virt_err_z = 0.6133751435126276;
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
    msg.setTimeStamp(0.9602033523711798);
    msg.setSource(37025U);
    msg.setSourceEntity(244U);
    msg.setDestination(62953U);
    msg.setDestinationEntity(17U);
    msg.s_id.assign("RLMTKRSUMYTPEUGLXMTROZBFHSCXDXDUQZFMKASFQEMYGDKWZLVNORELZZFVRPLCEDEYGBCSNKOGDHQEHBOWKCJJXWMFIWCNQQYRYHQPFVD");
    msg.dist = 0.22469515312038835;
    msg.err = 0.7161423051849108;
    msg.ctrl_imp = 0.464485049760913;
    msg.rel_dir_x = 0.8200664451905656;
    msg.rel_dir_y = 0.9616323837838651;
    msg.rel_dir_z = 0.8441994505671667;
    msg.err_x = 0.06461830205731067;
    msg.err_y = 0.66886402184101;
    msg.err_z = 0.12275265205750197;
    msg.rf_err_x = 0.5022981329756707;
    msg.rf_err_y = 0.34768962632835965;
    msg.rf_err_z = 0.5644080229517373;
    msg.rf_err_vx = 0.7890721266000585;
    msg.rf_err_vy = 0.34313022425972817;
    msg.rf_err_vz = 0.46476949200393114;
    msg.ss_x = 0.8356215456003112;
    msg.ss_y = 0.9674651544431871;
    msg.ss_z = 0.5953195294474157;
    msg.virt_err_x = 0.2763549901019404;
    msg.virt_err_y = 0.9138618814276382;
    msg.virt_err_z = 0.5858457961602154;

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
    msg.setTimeStamp(0.5644379287413447);
    msg.setSource(20166U);
    msg.setSourceEntity(212U);
    msg.setDestination(50282U);
    msg.setDestinationEntity(60U);
    msg.s_id.assign("WGZNDZNTWOCTTCWAFDZWIAENFKRFXVTBNSULSYXRCONJGDYFOYRZWMUU");
    msg.dist = 0.49312017561317156;
    msg.err = 0.3948525239219579;
    msg.ctrl_imp = 0.5695283122135796;
    msg.rel_dir_x = 0.032186254971725115;
    msg.rel_dir_y = 0.9370618805178559;
    msg.rel_dir_z = 0.9059313561605998;
    msg.err_x = 0.3032390488834247;
    msg.err_y = 0.1540620044939205;
    msg.err_z = 0.2743797169009855;
    msg.rf_err_x = 0.05874619431705663;
    msg.rf_err_y = 0.3791615762139282;
    msg.rf_err_z = 0.3521796249449094;
    msg.rf_err_vx = 0.60035795055333;
    msg.rf_err_vy = 0.8839454903696387;
    msg.rf_err_vz = 0.3658844901724969;
    msg.ss_x = 0.4484674011721561;
    msg.ss_y = 0.14530185819518338;
    msg.ss_z = 0.3543863067380104;
    msg.virt_err_x = 0.0331523248408494;
    msg.virt_err_y = 0.6431118901661826;
    msg.virt_err_z = 0.7791963623219919;

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
    msg.setTimeStamp(0.04335872772578431);
    msg.setSource(60810U);
    msg.setSourceEntity(168U);
    msg.setDestination(23419U);
    msg.setDestinationEntity(214U);
    msg.s_id.assign("EJRVIKKIKMNQNIQQAERPBEXCJTYWJMXWQOUMKBEUPFBXBYBLGOHLMTADTEWZCWYCKUFIHCGMSHZZSFOHQSGHJNTAIFVJCIUVRBKNMYNDCADMHHJVTOMELMGWNZGOFFUTQGEDJRPBIGITDAEKPWUSWUXNQYDHPOTJUPYFXLHTSARFSVUKVKZZMHGLBJYOPZXWRVQERVNZDYZXROODSBCLWWQCGY");
    msg.dist = 0.48186760020445507;
    msg.err = 0.2491531622021097;
    msg.ctrl_imp = 0.9595802370163184;
    msg.rel_dir_x = 0.13428057227801393;
    msg.rel_dir_y = 0.1981201435744454;
    msg.rel_dir_z = 0.5602128998985928;
    msg.err_x = 0.5386999810417598;
    msg.err_y = 0.6531966380528105;
    msg.err_z = 0.2642797221093578;
    msg.rf_err_x = 0.6290180639085924;
    msg.rf_err_y = 0.4458242536424071;
    msg.rf_err_z = 0.3929738083134139;
    msg.rf_err_vx = 0.36040223529705373;
    msg.rf_err_vy = 0.9146388668352751;
    msg.rf_err_vz = 0.3013270031504135;
    msg.ss_x = 0.9304500970823055;
    msg.ss_y = 0.4191188821392139;
    msg.ss_z = 0.3002016865155833;
    msg.virt_err_x = 0.8747004078724692;
    msg.virt_err_y = 0.7255038611444997;
    msg.virt_err_z = 0.8833041071621712;

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
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.2235524564446414);
    msg.setSource(3176U);
    msg.setSourceEntity(57U);
    msg.setDestination(45579U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("DRIHNWVRYJGLGXLULFEJYRRNSVAEDJWRHNIPGGDKJOCXHZQWWADNVVFLQCFCVMFGGCIUHHASDGHEFYNRHEQBODLNTDGFIPAQQVZTJPUTBSLIOQMJZZPBOXWSGQAYJJXRTZUZAWATTJSFMNAUBBIZPMKKVX");
    msg.reference_frame = 189U;
    msg.custom.assign("ZRCLEWWPRNRCCGMTLNQJCRVEUIPTQKWBEULPSQOGOXYVVMOHMVXXENNNEDLBHTMJCQOIAFNTMWAEZSYDIRIMGRMJBBTDRNEIHOZCWKQBSYKXPKSKPGFHJGPRUAQRQHEHGZWSUOUWDXOYESPASXAJLIAYMWRZABKTCMUSDLHJTFDWQBZBFCYZFJAYJVAKZG");

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
    msg.setTimeStamp(0.030329090632472355);
    msg.setSource(28417U);
    msg.setSourceEntity(183U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(208U);
    msg.formation_name.assign("IXLUGYUPFJUCQDCSCWNUFMKTZQBIZGUQNBWYQMSJLVPWSSHNYOWCAWJMXC");
    msg.reference_frame = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27464U;
    tmp_msg_0.off_x = 0.3334062420287881;
    tmp_msg_0.off_y = 0.4372908368451528;
    tmp_msg_0.off_z = 0.5379462711256392;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZVVTOJPAKRDUXFAWKDOMDZQOMGERVRCRFJGWQBZIDIKPOEGCYSUBGLDMNZWBEMQYUZEMUXEBPZCSVIQQFDJZQCFHOQUAQCBFHFGMTSXTPBAYUEBZXNUWJEALWGTEGEIOBJ");

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
    msg.setTimeStamp(0.517393886179123);
    msg.setSource(65310U);
    msg.setSourceEntity(184U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("HYVDLHJWYMUBATSIQOQEVXRXGHHAHYZWNIBAAWIMEZOLOLSQRWEIJPXNJDQKOZJNETVQBVNTFTCKVRKJDGYKDQNAGKMZLUTKIGXDISSJCNRMEBEGOJXDHYPELKOMRDCBXXYUFAGLGBSLAPRQTAFVMWFSSYOGAISWDOUTPQQQBGPUBZFCZHVFWBHTBVFUGEUAYJSPZZLSXMYLWVMDZI");
    msg.reference_frame = 77U;
    msg.custom.assign("RNRBVECPELLNQMWKGXDCTULWWLDDEDHENYYLRFWEVWORUDKNXTGDZUSOSLARIZFNJMFJGBKSKYLOJNUMTCQMOYGKHYTDHAEBXPG");

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
    IMC::Dislodge msg;
    msg.setTimeStamp(0.13632082082495423);
    msg.setSource(20965U);
    msg.setSourceEntity(5U);
    msg.setDestination(24434U);
    msg.setDestinationEntity(148U);
    msg.timeout = 8164U;
    msg.rpm = 0.7559110021167522;
    msg.direction = 156U;
    msg.custom.assign("MERYSSDRSEAXBTGYCKXMWDXMTDGWCGEZTKHJCERPNJOMTHXYPVSWUOFWEUANPCNRUYRLDFMTRBSIHAVPKLZSXXNBRLUIBIFOMQDKMXMUQBKBNXYFLFSKVA");

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
    msg.setTimeStamp(0.2427892900067985);
    msg.setSource(42113U);
    msg.setSourceEntity(89U);
    msg.setDestination(45609U);
    msg.setDestinationEntity(181U);
    msg.timeout = 53138U;
    msg.rpm = 0.2438071119637727;
    msg.direction = 99U;
    msg.custom.assign("HMWKKSFDLKYGGMDZBHYYNCAYCYGOBIWMGDZMGXCFCWWNABQLQUCIMYNJHWDLNEUGTWXUJAKEKJZZCIXPVRPHVLIRMKQMEBFOPNKETVDVTKOEADATQTJVOIXGTOQXIHBUJHCEIJSANARFMZVJQLGMBJEYZWRGWWQCBFLYZAMLJVHRVYIFIPKKZPPCPXOSHSEDIFNARRPVDXDNOFSUUSFLXGPNNVSHBABXRSBXTTJWHOSQUPDC");

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
    msg.setTimeStamp(0.053002322110334954);
    msg.setSource(7796U);
    msg.setSourceEntity(58U);
    msg.setDestination(17645U);
    msg.setDestinationEntity(123U);
    msg.timeout = 48797U;
    msg.rpm = 0.032813809863783794;
    msg.direction = 186U;
    msg.custom.assign("TZDJPPBTKIJBWBSECGEHAZZEUXOCDFAUWXLLQGZDAKQQQCFURDOCFGVSBSXBGPPVWSKAISBPNHRFBWVWMQLJSGRIWUHYGMDOQIUJWLFQTEXMADIJEBNMRYZREAPBQTDHTJJFOTZEKNANIQOXSDDHYQMXLHYJFYVOWBEKAHZJFRJVNYPMCHAFMIWOLNELHCKZCEZMYTGGYMCIIVUKVZRGOCKUNKYKSURNUCYPMULAVT");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5468745860633657);
    msg.setSource(6922U);
    msg.setSourceEntity(14U);
    msg.setDestination(18999U);
    msg.setDestinationEntity(158U);
    msg.op_mode = 228U;
    msg.error_count = 206U;
    msg.error_ents.assign("YDCXALYJTGMUIYLOXMVCKTKUERXPMCJFLXROBVHMUYLLOBHMNKBGECDMN");
    msg.maneuver_type = 64899U;
    msg.maneuver_stime = 0.34603928945026197;
    msg.maneuver_eta = 23116U;
    msg.control_loops = 3730778026U;
    msg.flags = 242U;
    msg.last_error.assign("OZMBLQHXXDEFHENQUAHXXDCPVSIHITUTFKUBZPDWVVFUOBLYZPAWYQ");
    msg.last_error_time = 0.9863889304806074;

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
    msg.setTimeStamp(0.9688923699340535);
    msg.setSource(20460U);
    msg.setSourceEntity(110U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(34U);
    msg.op_mode = 103U;
    msg.error_count = 169U;
    msg.error_ents.assign("ECEZZHGTLBOFDFEXHGPHUHDPMQUACJBGQYCZDHKDKYAEZVBGJJRRKMJQSDLYNAVTRINDAHIUMUZNPTGSQACBWUYIAVOSCEQRMZQGSCMUPOKTOFPMEXWALQJWFLLWLUTVTZOZRHNGTFLVEWVKOSRNPILSLIQANSXJPKWGXTIYBSXKEWEGFUYDCBDYCFFFBQUBYJMIMBJRXCCQKRIILAKWYEPX");
    msg.maneuver_type = 10213U;
    msg.maneuver_stime = 0.26100859563911216;
    msg.maneuver_eta = 32123U;
    msg.control_loops = 3235211566U;
    msg.flags = 46U;
    msg.last_error.assign("TRUTBLWVOXKGPFINTWRBNLXVOGSUWWAQHOVFNALCSGDEUAPEPFPT");
    msg.last_error_time = 0.5396547098566552;

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
    msg.setTimeStamp(0.6554604428903444);
    msg.setSource(15567U);
    msg.setSourceEntity(177U);
    msg.setDestination(2145U);
    msg.setDestinationEntity(155U);
    msg.op_mode = 127U;
    msg.error_count = 53U;
    msg.error_ents.assign("BTLSKNUQOKCGFLXMFVDWINQXXNXJTAULZHRLEHZQKZTUBPZRMBGYICMHRYFQJWGVGNLISMTKOPSDCOHCPFENVOAQWHRQLXIZIKAWVPWPZMCEPYOHBKCUDTITPADHCFURXARCJKMGRQUAGYLAQUHEEUAVYWLJYDNSTMXWZNMPBJSVWCAVOPJSXEONYBTGUBGOIFIBTQZLYHRBHFBJYJSEEJXNDZQ");
    msg.maneuver_type = 9475U;
    msg.maneuver_stime = 0.5630168441021964;
    msg.maneuver_eta = 49190U;
    msg.control_loops = 3758934090U;
    msg.flags = 211U;
    msg.last_error.assign("ZKFNJXSUJHZQFOIKSNCQUQTYYTUPQWRVLEAAJBVKXWHKNMRCYQEFEUAXZCRJBKADVQNZXLYVEYBLPIUSOKNZSTMFVOLOGWNKOXHBVXFWPAPCVGPNEHOVGHTSFRHMODGTTTRFCDEKSSUHKACYGAHXFZHZDCGMPEZGVPRYLWJYWWXALLPDYKTJBDWUUJDIJIDRLZMIMEGNXFQJNYIMEBOTQNDRSPMIQDCM");
    msg.last_error_time = 0.7853547705623019;

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
    msg.setTimeStamp(0.255028326447053);
    msg.setSource(27405U);
    msg.setSourceEntity(151U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(114U);
    msg.type = 193U;
    msg.request_id = 22454U;
    msg.command = 14U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5874U;
    tmp_msg_0.lat = 0.25945013771361947;
    tmp_msg_0.lon = 0.6170718165533751;
    tmp_msg_0.z = 0.4910842916767316;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.38381944530073875;
    tmp_msg_0.speed_units = 105U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.4771373817556581;
    tmp_tmp_msg_0_0.y = 0.4687733487562423;
    tmp_tmp_msg_0_0.z = 0.5416381755528791;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JKPQQHABTOOVLXYEUTAAGAXEMJLSIWMGMEIYTZYTKRRJXSFPRRIUDKHCBBBHDKEOQFVQCGPVMYDLGVJTWXHYTNNWLOBRFSDAUMUPHLDESQPHKRFWXIPQJNJLVKOZEPWUMGCSVASTRXLPKWLFBCAMYCRBJOBXHCOZGDUSIFGXGJVMYKQCZIOXYNLUEZTTUVFMOCKDKYAXYUJINVONRFACEBZQE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18714U;
    msg.info.assign("SJNHFCJWXMYOKEGVOVBUXLHOGLIJJSMALSFEMCTCXHQVQYUHKDLHUVDGHGNXRFPEBWXBUEUMIPEGLSAHRZZOFPSKTFIZX");

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
    msg.setTimeStamp(0.006430510178539461);
    msg.setSource(18298U);
    msg.setSourceEntity(202U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(250U);
    msg.type = 32U;
    msg.request_id = 13482U;
    msg.command = 156U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 30047U;
    tmp_msg_0.name.assign("KPMHJROSUCKZLRSULBOBTHXYEGVAVAADNDXRRJUDVFCOGCQWPXXIBEFKMFMDRCWVPBZTPOVFQHZHKUWEXIKSYGFW");
    tmp_msg_0.custom.assign("ANVOSDYMPOHHJIVEKWFNUXDGDHQEWQVORIVSJXZMHYQYXNOAJZACRPTXNMIDLTEXKSBUBWSGVWRVCAMDGBJJHWLLXHRQYYRUAVAICGGQLKOYCZTKLYJPOTVFGEQCNSEFTPEFQZTARTDVCXPBOEUERCM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32311U;
    msg.info.assign("BMXTVKKAROHNDJOMRSXCQQQUCPQBDUGSKOSEGANPHDNLNHVSEKGOMUZWABTPSYSGWYXAAIJDFBPCOVTZOSEAEONGYXZYTYJZRECDKJMRCKBXGZAQMUWBMSRPQZEMINAZLWECBIJKRHLLOZDPTTDJNXIVDFLSDIFWRYGNFVOHNFFQWRXXJZFVYCCTUGYJHLQYHVITTH");

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
    msg.setTimeStamp(0.6181350152830878);
    msg.setSource(17295U);
    msg.setSourceEntity(91U);
    msg.setDestination(5366U);
    msg.setDestinationEntity(180U);
    msg.type = 153U;
    msg.request_id = 52129U;
    msg.command = 136U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5693043220556083;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 60406U;
    tmp_msg_0.custom.assign("QTXFWNTTRADTAVSTESXSRUOARUFJOZDMPGKMGVBWKQGPIFALIQLWYZOCAAOLEBUQNJLEFQJTPZFPXYAHLUBCQHXYRNTLJMZTPPNYIRNWLCCEPGMSAHZCZFQPMHIWVIOSHKABVTMDOSUJBLHNKQLBSKSNYMCMKNOSVPAGNDKWKGBZEUYDHUMWLYBEMDYEXDD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64848U;
    msg.info.assign("HLXBGSIRVACIVINULJXMSBNAPVRUMQDKWJCWAJFKFLVPKV");

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
    msg.setTimeStamp(0.5233566464891136);
    msg.setSource(12594U);
    msg.setSourceEntity(171U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(19U);
    msg.command = 49U;
    msg.entities.assign("KGIDEBZPBIRBEDWIFALQSBXYZHTVJTWWIHWOZEMXKNYXVOVYODGBITWUUWNXDELLXRWFDRVSSZBBLGRZTPSHGIVHYMFELCCWOKQUHVUMVRRZTGEBTFILASNEZVMSKVZNJJLMUNIKRAACHGNJPSFJTFQDFXMQYXOXYDTSQEMMRCXCUDUUOPVEKJPRQOLYYCQCORZOGKYTK");

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
    msg.setTimeStamp(0.12699950241365954);
    msg.setSource(37774U);
    msg.setSourceEntity(1U);
    msg.setDestination(64414U);
    msg.setDestinationEntity(71U);
    msg.command = 126U;
    msg.entities.assign("DMXVXGBWJSMJEVCRFLKLSKOCYQUCGEHIPKHZNTBZCENQJPWAINTFVGOVEATBFOPHVEOBDIXSYRZQGZKDRYJQHFKSPKMQTBCMNHAQDHNWEMVCUKSRFPUUGKPIOPOLTDMNFMDJKFXUNLXBDOTAXDIJAQVNUZCXZLLHTWNIEBKYYRSJMJYZGGWQOUDQAF");

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
    msg.setTimeStamp(0.7721237400323149);
    msg.setSource(24489U);
    msg.setSourceEntity(40U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(228U);
    msg.command = 167U;
    msg.entities.assign("ECETSADYBBJLFUTANUDHLTPKWVRMYFXLUKPNUQKXQTYVJIPCJFHAUQIQMJRGMEPINRSGTWBJGZKIYMZDJAPFQEYDCHFARLIJRRLUVPXTQELDOAFSENJKPRIYEABGGSUTHDVQNSAWDPJDUYROWCXGCXMKXW");

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
    msg.setTimeStamp(0.4621781569476825);
    msg.setSource(45873U);
    msg.setSourceEntity(51U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(180U);
    msg.mcount = 233U;
    msg.mnames.assign("XFZDPRCESUFQOGLNQZTNCNIOFASXVKCSBHHSYHHMWVJHDHKOLUBPLSWWABPCQBTDEHGZEVIAKMYSOXPGZXCITTJMRQAXINKFVOWJAZRPJFYDYDZFIEUBWE");
    msg.ecount = 173U;
    msg.enames.assign("KFRTWUVBSXTJFGWIQGLCBLCVBZDQMGELFJHCZYAAPBVGD");
    msg.ccount = 252U;
    msg.cnames.assign("CNICRXIBQCVILEASGAYMVOXWDWBFTFPQLCLIGDNIAVKLTTGFPMPPUOWLJYZZSEKHCQJDNANNGCPDLJEWHVESGXMEIEXVVRTEUSDZGAJVBTCZOBXKUBREPKSVLLHZMVJUDYAWSRPHYJWRRDKZHOPRXHPYUTNAEXOBSEKFQNNJBQQZUSUDLTZKBFSOCLAFUICYPWDIKMGNJXMZDHYFSTXGQYMJTMQBXFOAGGVROOMCRIBNWIKFWHUYWQR");
    msg.last_error.assign("VVKQVORSAVXGYSRIZTYESNRHFLOZTRFFNQZZHQRWZJKMJACLIHQULKCEXALDDPPTBUIPVICMVCGSLSEMILBDAAXPHHCMUBNWZFQGOMUGOMIWEZJUEBVPGJYRKBHQWSWUDNMEJBNXCOERWIVPDRGQXPTFUXPOQIFOAMOEJTFTXPJDSBFWJNOBKDHNXEYHKCUDLSVEVAZMAYLCQLJKKKQFBWYTBXRTTMZDGWROJFNYGHICAICLKYTZAYG");
    msg.last_error_time = 0.4411522853918781;

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
    msg.setTimeStamp(0.7097219957904132);
    msg.setSource(53444U);
    msg.setSourceEntity(214U);
    msg.setDestination(39998U);
    msg.setDestinationEntity(147U);
    msg.mcount = 208U;
    msg.mnames.assign("IPQSKRXQLZRMVNTGENBRAWIAEQCMYRVWGBLSXHUSAIFQXRMQCBTMWTYLCK");
    msg.ecount = 0U;
    msg.enames.assign("BJCPOXZFGMMAFAHOXVJTQSYHXFYDRBGVMIISIRQQKMXHBZBTRFLRTECPKLOLJONIUEJQVJVXEBFMSONELCMOJGUVWWGORREPBSAXBUMUNAEHAIWPLCUDSKJMRXWDGFDLYMWNTUHBFTZZHKJZHKQBPDOWZAGCVGXIORNLQCKRYRUSCYQPTFLSHZDAKGXWEQPEADUNSQAUIICVT");
    msg.ccount = 46U;
    msg.cnames.assign("VDGRTKMJLLKUVOWIWHTSTGUMHXTQEFZSGETYXWEOCDCPDXVJDWQKLCMNCLZZPMIGHSSOIZMPEAEEACLRRXLUCRKZMUQMAFNPVYWHNOJQGNPLW");
    msg.last_error.assign("LJVCLZARDPVNLLBQNSZQYOFNDJXSTJZEUO");
    msg.last_error_time = 0.850155112740716;

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
    msg.setTimeStamp(0.07643139827657996);
    msg.setSource(46433U);
    msg.setSourceEntity(71U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(36U);
    msg.mcount = 86U;
    msg.mnames.assign("VHTADBWWCRNQWWWRCDNRBPGFBEPBEQIBWAMYJQFLIXTCDZZUMPZUXYPPCGNKBGLHRPHQDFJNDZMBZRELATUANEOKPVT");
    msg.ecount = 44U;
    msg.enames.assign("URBNKGXDTZEGFNGQPDPSAAADRVMPRMNCSUGNVAZJOHPWWZVHLRLONJIUFYBQLRCEINIAVXSFPBKWBTIYIOLPNZKVEPTCQEYEGVRZWDAAEDGFIYDVXKSZUXJVTBBMOXLIJQFJLUDOLHTTJZAEUWGCNOJHWMTYCOCPXHMSAMIBQKUOQHXGFWPTQRCPDS");
    msg.ccount = 243U;
    msg.cnames.assign("BRHQEVBRJUNYWCCXYNWVAVHIPZFSHBZNMRAVHSWUWULNPGWONAJGAMCGJNLDFBSCCLPZYEOPRLQQKMAQDUCWIJHQPPHBUBQCOOEITHSCYQPJWDWCLDNRVNQEUITIXNZABXZUFRFTHELXODTKJOBMJULGKXQJKES");
    msg.last_error.assign("MDBXFMPQKEXHVWIVNCRRGHBXROEB");
    msg.last_error_time = 0.4673320576098451;

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
    msg.setTimeStamp(0.12848457547088632);
    msg.setSource(63322U);
    msg.setSourceEntity(78U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(57U);
    msg.mask = 161U;
    msg.max_depth = 0.008317540529425682;
    msg.min_altitude = 0.1955500263859593;
    msg.max_altitude = 0.8143620835068319;
    msg.min_speed = 0.974838975347661;
    msg.max_speed = 0.1352603521493173;
    msg.max_vrate = 0.14539411595219376;
    msg.lat = 0.869962720084163;
    msg.lon = 0.6757075668984228;
    msg.orientation = 0.30795243731887;
    msg.width = 0.247217970827466;
    msg.length = 0.7149236533326611;

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
    msg.setTimeStamp(0.5193224841742282);
    msg.setSource(47363U);
    msg.setSourceEntity(250U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(40U);
    msg.mask = 120U;
    msg.max_depth = 0.44106624946447226;
    msg.min_altitude = 0.39871795173135316;
    msg.max_altitude = 0.26140232698570465;
    msg.min_speed = 0.9462290141643684;
    msg.max_speed = 0.8221496760499134;
    msg.max_vrate = 0.5133036178228662;
    msg.lat = 0.6434826529646386;
    msg.lon = 0.853652949356813;
    msg.orientation = 0.10858874507109328;
    msg.width = 0.5249010244432488;
    msg.length = 0.46869503558544834;

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
    msg.setTimeStamp(0.37967314228570825);
    msg.setSource(10570U);
    msg.setSourceEntity(138U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(114U);
    msg.mask = 128U;
    msg.max_depth = 0.3456777744449424;
    msg.min_altitude = 0.2500454486673719;
    msg.max_altitude = 0.17140957153955383;
    msg.min_speed = 0.5117166582005173;
    msg.max_speed = 0.278923571101205;
    msg.max_vrate = 0.910042380182337;
    msg.lat = 0.08232968330333035;
    msg.lon = 0.2571469438754077;
    msg.orientation = 0.3888996190311623;
    msg.width = 0.5420075558543811;
    msg.length = 0.539773928677258;

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
    msg.setTimeStamp(0.5348666672062251);
    msg.setSource(13881U);
    msg.setSourceEntity(217U);
    msg.setDestination(35176U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.9668549207683348);
    msg.setSource(10799U);
    msg.setSourceEntity(209U);
    msg.setDestination(26428U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.220188206411976);
    msg.setSource(14923U);
    msg.setSourceEntity(0U);
    msg.setDestination(46641U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.9501137079841854);
    msg.setSource(19427U);
    msg.setSourceEntity(226U);
    msg.setDestination(25799U);
    msg.setDestinationEntity(28U);
    msg.duration = 63679U;

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
    msg.setTimeStamp(0.9530191907279469);
    msg.setSource(38826U);
    msg.setSourceEntity(109U);
    msg.setDestination(20053U);
    msg.setDestinationEntity(12U);
    msg.duration = 37774U;

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
    msg.setTimeStamp(0.5263054721257282);
    msg.setSource(42046U);
    msg.setSourceEntity(84U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(71U);
    msg.duration = 44126U;

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
    msg.setTimeStamp(0.006096614567225989);
    msg.setSource(33161U);
    msg.setSourceEntity(204U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(50U);
    msg.enable = 144U;
    msg.mask = 1559279235U;
    msg.scope_ref = 3382929983U;

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
    msg.setTimeStamp(0.5987550933106579);
    msg.setSource(17497U);
    msg.setSourceEntity(179U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(80U);
    msg.enable = 94U;
    msg.mask = 3738792031U;
    msg.scope_ref = 3127599204U;

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
    msg.setTimeStamp(0.003577786995110799);
    msg.setSource(25204U);
    msg.setSourceEntity(236U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(226U);
    msg.enable = 236U;
    msg.mask = 378363634U;
    msg.scope_ref = 3268077383U;

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
    msg.setTimeStamp(0.9192613074027244);
    msg.setSource(2773U);
    msg.setSourceEntity(86U);
    msg.setDestination(9834U);
    msg.setDestinationEntity(183U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.9484779833623175);
    msg.setSource(53599U);
    msg.setSourceEntity(40U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(32U);
    msg.medium = 130U;

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
    msg.setTimeStamp(0.4891673975741997);
    msg.setSource(12449U);
    msg.setSourceEntity(103U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(46U);
    msg.medium = 249U;

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
    msg.setTimeStamp(0.910077790352579);
    msg.setSource(25064U);
    msg.setSourceEntity(220U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(8U);
    msg.value = 0.07930150425128824;
    msg.type = 48U;

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
    msg.setTimeStamp(0.14517967203141358);
    msg.setSource(5285U);
    msg.setSourceEntity(224U);
    msg.setDestination(23229U);
    msg.setDestinationEntity(56U);
    msg.value = 0.2389562261408652;
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
    msg.setTimeStamp(0.9781239822450555);
    msg.setSource(10740U);
    msg.setSourceEntity(212U);
    msg.setDestination(62307U);
    msg.setDestinationEntity(203U);
    msg.value = 0.2201735235847465;
    msg.type = 199U;

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
    msg.setTimeStamp(0.9950088548424322);
    msg.setSource(14882U);
    msg.setSourceEntity(179U);
    msg.setDestination(8123U);
    msg.setDestinationEntity(181U);
    msg.possimerr = 0.4379536665821355;
    msg.converg = 0.6658295142849496;
    msg.turbulence = 0.6533089557189005;
    msg.possimmon = 67U;
    msg.commmon = 139U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.7827057000615172);
    msg.setSource(10677U);
    msg.setSourceEntity(86U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.633951548220154;
    msg.converg = 0.013433175742748493;
    msg.turbulence = 0.570932979141941;
    msg.possimmon = 98U;
    msg.commmon = 253U;
    msg.convergmon = 142U;

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
    msg.setTimeStamp(0.5669192702467771);
    msg.setSource(18796U);
    msg.setSourceEntity(6U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(186U);
    msg.possimerr = 0.5651094604948502;
    msg.converg = 0.26769758567062707;
    msg.turbulence = 0.09197024910125362;
    msg.possimmon = 83U;
    msg.commmon = 213U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.09421691701497736);
    msg.setSource(53393U);
    msg.setSourceEntity(34U);
    msg.setDestination(34117U);
    msg.setDestinationEntity(159U);
    msg.autonomy = 117U;
    msg.mode.assign("MGSQJWEXWVFRSDMANQPPXLURGEHTFGXVBAIZPSJNPEFFPBUWYZYOFYCDMJQOMPLYADKJNZRLNIWCLIXWHORMSKLYQBREPLNTYMHXEHJXDVMSNXVQZGFMLTGWIRUFDKVTYXJCBRIDPMSUCFBULSAOJVKOTDIOTAWINCLTBUGCVFUWEQICDTRWZHUROSYBQZBSZPMARAODZJC");

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
    msg.setTimeStamp(0.3861107887019759);
    msg.setSource(46530U);
    msg.setSourceEntity(47U);
    msg.setDestination(39203U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 38U;
    msg.mode.assign("OCXXRAVTBUIJJCQGHAVTHYQRFTEYBTYWPPBZMZUXPVKRXGKQIMSUGRLXENGBMPUCEEYNYKNGHBBISFDJGNFKGRTZP");

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
    msg.setTimeStamp(0.7581729986502103);
    msg.setSource(23189U);
    msg.setSourceEntity(55U);
    msg.setDestination(34382U);
    msg.setDestinationEntity(29U);
    msg.autonomy = 196U;
    msg.mode.assign("VFCDOVTWANERMYJYHGSDFKZLREFJWXNSUDHPBYQTPKETWCAYVBTBKZQBCMGLRYQAAKAPIXOANQFFOQUXPZCCJQXDIJSVHINFSVHGGMZUOWOMTXSWFPOURPVIIDKRBZIKSLDSFVSFCNXMHNWRENWEMLQYXDCJOTPDQRHGHENRJXLGQETMVDTBNUAZBCXGOLMPURVAYUEWSVJEPBFAMUK");

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
    msg.setTimeStamp(0.6301604091457307);
    msg.setSource(57648U);
    msg.setSourceEntity(52U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.7844674395615232);
    msg.setSource(1194U);
    msg.setSourceEntity(226U);
    msg.setDestination(31306U);
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
    msg.setTimeStamp(0.45639689211114365);
    msg.setSource(49175U);
    msg.setSourceEntity(14U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.32414440117654264);
    msg.setSource(38260U);
    msg.setSourceEntity(234U);
    msg.setDestination(13044U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("GEOJOMEHRCZBOQSPQQGMRYFFPBXDFOJRESSPAUQPEIBLULFNNVWKFOXMPSUUWDVJUYZDFCMDRVQ");
    msg.description.assign("YHHJRNVZAVNVCOPMRKAILVGPDAXEYBAJPXUTVB");
    msg.vnamespace.assign("KTQTKTSDIWHNIZGWAXALRLWKLPGFHDHZYYOIGXFPBEOXSTOJYURMBZSFISGCVBUY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WDFOXKBSVKAWQUPCMTZDOTGCXKMWMHHFQREQEDKMRGLFKANBSSYEUEGDBUOGIOTRPSURSOCASBEINIVRLOILAYBLTKYPGXALNLYHIPFWNTYXWKAZWOCZJMQJLOVYIAYJWAHCIIDQWEMRUTXZXRUKIEXNBHVNNGEUZLZCNQBUORJFLHZHMFQGNPSNGDQUDJPCELCFVVATIJTHXFMJERAMSBSPXDBSZPMDWVHVYRTVJJ");
    tmp_msg_0.value.assign("PNDHZGVJPKQUWFFVOGNLLALCZAXQTDRILEJOJIZSZVTUDQWQOEBDJDFROBLURGUXTLSHEYXQIQNUWWCYTRMPMSXKFWKYGRPNAOPIXBVKTSSDZQIUANDK");
    tmp_msg_0.type = 196U;
    tmp_msg_0.access = 60U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZHPCWUVXNBKORVQUHKEXFYIFEXJKYPWGJXZQNECNLGPNYUPUSJNWPVBWUJIDRCBGRWHVMEDESDUPPMVLCVHRLEACHZACISCKKVLOGQRLHXBPJSATUEHMTYYZIGSYGJAVZEPUFALJFAFNAOTDFSNTTFMWWVWBXOQQDGCJDDSZBRODTKXBZRGYSFRQJZHYTMISTNOOMHULMKABATFRGELQOGINZKQWXRYFLZQUIIMBVWOJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AYUSTTPOCOWTSMBAIRVHKWGWDBTKJLIIWBTXKMXHGYJFCKZLSTQJWMKXAFBFIYENJJLRGLSUHDFQWJARIMAECNHXKSCPXQPBNQPB");
    tmp_msg_1.dest_man.assign("ERQCQOCLZHMJAHWDWSJPHBFNPDDQFGTSRSVEYWBUEZNHVHCUJWCUTJZKLMSQDSLHEIDPKJWTXWNLZPTMIACECFEYTWVVLFSGUOUPRRYAVYTCKGINWFREPSEDHARVWOACBCZLJUPAIVUIYBRPOXVPICYQGQKSLYGUMNHFNTKIZGQIAZG");
    tmp_msg_1.conditions.assign("CYLNPXNKNJKYQTISMJAIXPSIHETJHRHEMWQQXRGLMWWGRNSINJJTZVBHRQIBVLUNZVPNLZKWCPGDSQFLBRYIVYOMRDQRDOOXVFCTIAXULGO");
    IMC::AcousticMessage tmp_tmp_msg_1_0;
    IMC::Target tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.label.assign("JBLSSCVPTAJRBRLWGWQMASIHHTCAUOHSYOGIACLFLCJCEHVBGGJQEDMERVMXSFMGNVWZYPYBWKZDANISZKHBQRZKXWKJGLQYHFOWTZYGBQDDFRRVKMEI");
    tmp_tmp_tmp_msg_1_0_0.lat = 0.8252391393361079;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.9398277176405495;
    tmp_tmp_tmp_msg_1_0_0.z = 0.6442804572530899;
    tmp_tmp_tmp_msg_1_0_0.z_units = 53U;
    tmp_tmp_tmp_msg_1_0_0.cog = 0.6410431628504691;
    tmp_tmp_tmp_msg_1_0_0.sog = 0.24023471207714253;
    tmp_tmp_msg_1_0.message.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::EulerAngles tmp_msg_2;
    tmp_msg_2.time = 0.8381083402760875;
    tmp_msg_2.phi = 0.26991165592407484;
    tmp_msg_2.theta = 0.6372748953473395;
    tmp_msg_2.psi = 0.011600019676401119;
    tmp_msg_2.psi_magnetic = 0.9384567750231845;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.38281234348002646);
    msg.setSource(36359U);
    msg.setSourceEntity(27U);
    msg.setDestination(8856U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("AWXTUZZHXNYORVUSXZMMSNYRRUHIFWT");
    msg.description.assign("HJZPWQMTXDLBDAIIVWZMNEBSAOKVLBHYGQYYXGYYEFHDDYODNDQARLEKRXAKFCTH");
    msg.vnamespace.assign("LGJFDWYPXWUKOYJGITIYMRKRTSRQBALGBUZXPDMMVIANDQLTQEPEHXKELWNPXELSTGITQNOPJZBZECVKXLFQCHPEDAQSEOCCHGSHWFRMCWLKTQASHWJEYNFNAHFMZSVYYNLDAUQIJYCUOBRDNMRNRWGKBQAYMWRDFTHVUBAFEBWWTZFGGBZUXIZYZHTG");
    msg.start_man_id.assign("AZLDFLPJVWMFHEXCOLBEIJVNNTAFCSDBKUXMUPCKZSVKTYFUPAAAXJRUWGROPXHGWCKPFXIHXTCRJHOQOUXMCLZQBSQQUJGCJXPBZW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TPQCYZVJLYYFRHQNSEPCJUEDDDBNGBUUYLGKGXOMXBSRPQOHNJPQHOSHKKSGCJSKQRBUORSGRUZFLCLMSEWVHVANCCUIAZFEZNTYONQXPGWBMBNXCDHBNGVXVLPIAWZWPHIJJQVLVXUTJNJWLMADFLCEFTMVQJYOZGESTFXKRKPPTHCOBLMY");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("SAWTLEFQGFIYECJMLIJMVCXECDDFZVOKAZYQLCOFKEMNPATTPOKBOTRYXOTYRIMQSQVBUCNWNNRHLE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DevCalibrationState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.total_steps = 226U;
    tmp_tmp_msg_0_1.step_number = 233U;
    tmp_tmp_msg_0_1.step.assign("VONKBNZIKJTCZOAQEXUDLZMWKNXFTSIEMVWZDHEHSGNNRWUSVSGDLCJTEQGSLSKPENCVYYFXTWEGXAAAEOKJYDPJVZDDCFNKMMUHFYFRXFPXQJKWOITOAZBUBIQTOLQGHXKLYECQYNRWDMKTONJJBPQSCRWZUUFFRXDVFWJLPBCCTYQLVAQRHXPHRHZDPBAGZZBMRPXAQNKAIAHIBWMFIBSGOPCPLCGLBDM");
    tmp_tmp_msg_0_1.flags = 101U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("UQRXONXTIONQLBNUVCG");
    tmp_msg_1.service_type = 189U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevDataText tmp_msg_2;
    tmp_msg_2.value.assign("IHBOCYEUVYCMMILBQXUBFGWWIPQMAWPDHVLONODTOQWRYQNYFVIK");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.24830637506252984);
    msg.setSource(52737U);
    msg.setSourceEntity(56U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("EVWRDLPUUGVHNSIPRSGWFDBXVEJMCCKPLVVAAPQCCQYVKKTSHEXMUIEULFRRUYBNKXMSRBGLQQRRIAWFLWYFMQCOIHIAIGZBUHUNFEDZGCJXDKERRTWYNEZDQPTTUPO");
    msg.description.assign("ZQMFLQOAXJMCUTLKDCHQRDVWTPLDCXTJPJAPRTMPINSYDGOIHQJHXVZMUPRYWSNMEBNTRUUPLOBUOYVIKIBMGDSBKUIMAHACAWNVWQSLYUKZOAIGYCCMELSPLGEPFHBSFFVHXGNNYTYTYHBRECGDEVMGLSQXZMDEEWELOAZ");
    msg.vnamespace.assign("ABYGXNVWIIQCNRKCJXPUXSINRMOVGBWSLFJYUFXCYRAIWVFNMDFCWTEWOLCHWBTEPZCAHFHKWOUPGGLJXHRTRXYIITOWZYICSDEMBWMFLDTDXTJDVCYRKVKZHDPJVUEMMJYOUANMYOSFGNHMIVREUQKNCENKIGPVBLDRFLSQZSHMLQQNZJTCVGOZLKKEZTAUJBYOXSEAPID");
    msg.start_man_id.assign("VNRPSKEUYVBRXKGFLRKVTMALINQNLBUEJCHBXQGKWXQIVFADBVMUEPIBESDHJRPOGGPPZVJEYYANHORVNCLQNNDRRZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SAMAWRLBLYJFBYGOCGQEZXZPPNSVIXBQVQUFEWIGNBFKXZLLLOTONFQKM");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 62826U;
    tmp_tmp_msg_0_0.custom.assign("KROTCUVKCESSLETIGNBYQHACA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanGeneration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.cmd = 245U;
    tmp_tmp_msg_0_1.op = 103U;
    tmp_tmp_msg_0_1.plan_id.assign("NZROWLFZJUVCWFUPBDMYNMSGCBUITLWSECAIGQAEGKGHCPRFKKCMZGYNXINNTPIQAUOYJBZMUMVSHBDGRSVIUTSBPRIXIPADTUQJPTEBLJREZEPQDHNAMQWQVFLMYXQSOWJSGXETHRKGYOBFKBNVLPVK");
    tmp_tmp_msg_0_1.params.assign("BTMYIFQOSXTMIIOWOLUQAXUFZCXZIHAJTXLJOBCQKPMOJFTJWTCGVKNTWIDPUUNGGXQDRLVEZONBRJNMWOWRTLDVVRSVHQAIYRGGMCOSDHYJVWPCRCBEUZYOPQBDEJCGDYEEYEAYPRGHRWUNQPSDIZMKDXKSWHNSESNZHAQMSLDTCAJKQXKAMIOVMHUZFAEFUCLPBFFGAZXYD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.8223666808407798;
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
    msg.setTimeStamp(0.9529650330258257);
    msg.setSource(8259U);
    msg.setSourceEntity(148U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(199U);
    msg.maneuver_id.assign("YUVDRUZFVKFFLOLJPGXMJYAUPQQKWUFRHAAMJYETHBXIXOKVZAINKUVDRODVJSLCBIDGWITJF");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VOFRDJTWOJJCPGHTFYONGMGSKSMSCAQHHQVXCLHJYTXEZYZDAIYDZNOWOXXLWCARYL");
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
    msg.setTimeStamp(0.1973654125970582);
    msg.setSource(4857U);
    msg.setSourceEntity(98U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("LEZVYMCTHEUWTKRYYQRTMBGWWNUPXIHCOJANLEYVPXVBDZPIDDZG");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 55345U;
    tmp_msg_0.lat = 0.1735257464927853;
    tmp_msg_0.lon = 0.8839843103597056;
    tmp_msg_0.z = 0.7291341187238018;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.speed = 0.8183279241673597;
    tmp_msg_0.speed_units = 28U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.588949515235372;
    tmp_tmp_msg_0_0.y = 0.8922320585781114;
    tmp_tmp_msg_0_0.z = 0.5854059144085734;
    tmp_tmp_msg_0_0.t = 0.6440774082817317;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TBXRPJBALAWDRMWQPUQEPLYTJVUHXIDQNDIUBGQEOTPVKCXJGGWPXKMCTYKIKZC");
    msg.data.set(tmp_msg_0);
    IMC::GpsNavData tmp_msg_1;
    tmp_msg_1.itow = 1879105352U;
    tmp_msg_1.lat = 0.44276828069057383;
    tmp_msg_1.lon = 0.07908766432226011;
    tmp_msg_1.height_ell = 0.5591457579452912;
    tmp_msg_1.height_sea = 0.4542305341955277;
    tmp_msg_1.hacc = 0.07604244728215981;
    tmp_msg_1.vacc = 0.31425063021747723;
    tmp_msg_1.vel_n = 0.0920482513789983;
    tmp_msg_1.vel_e = 0.027412993649900907;
    tmp_msg_1.vel_d = 0.25606332105276675;
    tmp_msg_1.speed = 0.49580758205705056;
    tmp_msg_1.gspeed = 0.6165623152053996;
    tmp_msg_1.heading = 0.6412122730583838;
    tmp_msg_1.sacc = 0.5828579719798433;
    tmp_msg_1.cacc = 0.05971240712967052;
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
    msg.setTimeStamp(0.08132868134136795);
    msg.setSource(40399U);
    msg.setSourceEntity(19U);
    msg.setDestination(24091U);
    msg.setDestinationEntity(51U);
    msg.maneuver_id.assign("ERHRESNMEPTBUQOSQCWHWQLJFRLYANGUZPKVOFFTAJOGWMLUDYRNBQCDLIQZPJXXDVOCRLGXNDGDHJLYHMHYGCSYGVCWCITMBADVKOPACIZAUQFBVFXKEYOKQWHQGJEPAQERPHVXLTYJOUBUIHPIJXUKAZUXYZNIVWSSDSBNBWJIZPTSMIRVWQVHFNRUXPEFKGONHLPNSFMYOLMDDACNTVTIGXMRLSTFRMDTEEYZKATEKBX");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XWOOPTKLCKVPVJVFXZSABAFNNXAYLTUZGJNSLUBXNXHGSQRBERIGEDUAQVTDMTHBCQEEZUVSOHQLHMHARJHGHRBWLCWBNLYPPEFUYJWVTHQQPDTTIQRLTRAWESXLZJHAMYVMKJMNXPJ");
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
    msg.setTimeStamp(0.26110721281851623);
    msg.setSource(63090U);
    msg.setSourceEntity(101U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(49U);
    msg.source_man.assign("GPNYHYIGLNAPFASOQPEDFJNCHENHHTPEIMIZZHUYTGEBDBDNJYYBQMOTFTQVSZIOPMUEETWMLUWDVRKXCQSOGBGJFAGVTYUWGNCVNVODUUGGAZIPLYBFYLXAFWWDJOMEYNLVQQZRQKIZOOARFBSECWPKRXMEIRWJZZLWJSVQKJOLASSCXNXBRHDTTFXUGDMJHDPIKXOBCWYBCZVVEIUCJK");
    msg.dest_man.assign("HFORDPUVBNEVEKKXSAXEYZJNQFZLLNEOJRMGKRZTSINRZXQYEVHTCDMAOXIIELIVCANHZSMQEETRIOIVFWHGXOFGHALPBSCRLXTVWOFDNNDKCLKCGQAQMMKRYQVJQYBQHIPKGZBCQGNHOGUYFIAOUCYBKHGULMIYPWKRVWSWBWOX");
    msg.conditions.assign("NLBGTQEJUBLEGMWBCQRVSNGRORTPUEBZJFXNIVFWVSODVJBTOLHETDDZDMZHOQRLHTDUJYFHZQUMDUMBJFCIGEYFCVTVIQDRFIJMYNYIQMXGDJPZUYKODQKLOXSKLIBNSXZSAEWCGAACOVMUGKOIAUTJLOPGYFBXQXPLZOCASNWVKEPFMFSPUYTWCQRVKIGDHJHSLEVSW");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("SBMDNHYOJYBVXRYMTPTKSIIODEMBEXUHXJHVCKTXUTZWFOBWJRMEAXPWCCJNEHEJDLOGXGQUQOFNVSTGYAPSMAVUJHIIJGFTASBPUKLQSWNQMGNVFYJFLIFHGGGGAPKNVMOSOWLGFMXOPBAZEKYYVQUCKJXD");
    tmp_msg_0.action = 124U;
    tmp_msg_0.grouplist.assign("APFCVBNWEI");
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
    msg.setTimeStamp(0.7369235697314741);
    msg.setSource(11896U);
    msg.setSourceEntity(3U);
    msg.setDestination(56222U);
    msg.setDestinationEntity(146U);
    msg.source_man.assign("STHOPAFZFOGMOVMYHRGXBBSYUYUFSNNOIRYLGXHEHZZHDLSLPZFBLUAGBQCDQTXMSEET");
    msg.dest_man.assign("XSYEGUYXZODKMRHMFPJIWKCRLOELHQPTABXBVGYJWNRYEBTIZOFISBNWUHTYMMNAJGYAWXLRTEKEFUMBZFHLPNAEQVFFGJQPMLKIKQILJUKWCHBEBDFNTSZTIQUVTWZ");
    msg.conditions.assign("XJATCJNVHQQYOFQDHCWCWDPKJKVIKEAUMQPODYBDSLRUPOPUXVGBIQZVSUTJJWTXELMPOQFNMMBAAGGOMDFECXGAMG");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("EBNYAKYSMIQPVDPUBMRABGTHEKLVVUHGVPUAYINIBYJXWMNZNQHNQTKCUBQCJWUGHLL");
    tmp_tmp_msg_0_0.lat = 0.3190366742851751;
    tmp_tmp_msg_0_0.lon = 0.15333004144079165;
    tmp_tmp_msg_0_0.depth = 0.16083528150742055;
    tmp_tmp_msg_0_0.query_channel = 169U;
    tmp_tmp_msg_0_0.reply_channel = 196U;
    tmp_tmp_msg_0_0.transponder_delay = 168U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.7901574179166728;
    tmp_msg_0.y = 0.8209114266340877;
    tmp_msg_0.var_x = 0.1626005218287354;
    tmp_msg_0.var_y = 0.39922610938797876;
    tmp_msg_0.distance = 0.8356260216327571;
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
    msg.setTimeStamp(0.6248464948468273);
    msg.setSource(19645U);
    msg.setSourceEntity(21U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(39U);
    msg.source_man.assign("CFWPBGDWGSSHVTDXDNIJLZMXSTDNPVXOPOWBEYJAZUNGLMJIIOSNJQMLLQRVPBRALHNZBKQZYULPMOICTFASTWIHMXZJABODLLGTF");
    msg.dest_man.assign("ICQSTWUFYKMPSHOIEIBJGHIMGOZWWQNVLZMRNPKICASNWTBSUYGXAXFHYKXZDNAUHSKHPDLRYEDNJXTYPKNTDJDFEPSGOEVSPIQSGOCWCIFEWVMPLUQRUGOZYVLPEHKHCTMYJBMMNZRIQUVXVOZERCGZGCRJQLXODZCLDRWTTQXBJMKFLNGAKSDPXPFJJYNJTCYVVSUAKWKBFLAFOEJHFUYAMVQDVXLUMBIQRBTEBBCI");
    msg.conditions.assign("ESGYWFNTSICBCWFOSJYCTRBWOSIOQQAXQPDFCNYELNPLPVMIASHUVBORFWLFLMDMWTKHXOMKCJJGMMNRFMSHVITBDFCAQKZOLISYNONR");

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
    msg.setTimeStamp(0.9276036706288624);
    msg.setSource(11855U);
    msg.setSourceEntity(86U);
    msg.setDestination(44218U);
    msg.setDestinationEntity(204U);
    msg.command = 215U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MFEBOUTYTJGUBJVZLFUPHUWMDYVFSPBSZOLCAQNDVQGQSHFGDYMCZNVQGSTBEAEKEYNWHBSOKXHDKMJQFNMJCWPRHMIJGJKZWAXMLECPWVKPVKAEKXSXPIAQRGNBJGHJBALYLIIROXRGSDDMLQFHFKXNWALQDER");
    tmp_msg_0.description.assign("LWILSEXFJGDTALECGPNAEKVKXBSVAETHIWPPZLMQVELNARYUIRBCHRJQBSQPOHYIZQMITIPKYGRAUFOADBUJHDBMHNPKINGDUDVTKDWXKCEJYLWZHEZXKBCSVHSDNUYRZWLSUEFHTOVINFMMOQABEZMFJBAFMQFDVKUJWPCOQYXHGWLYXURNFVQOLSJQPMXJXYIPCLGWRBASXDJTFHGUMZWOMRRGWUNXTVTPDTSONQAKOVNROCTBYI");
    tmp_msg_0.vnamespace.assign("SKOWLETMZNGDNEBEQUJEAALYFLMXCQPQCDFGUGJTGBUSOHGYPYQKDZYUYEQUXVCOBPORBEXMNPBMLTPXLTXYRCKHMKTJAAWSQXFIPBVOGWHRFLMZBYZOMVCFGYISIHIRTNJJZHDTQGVQHOPWMTDVGFJPNRYOKUIJZNNLDR");
    tmp_msg_0.start_man_id.assign("ECQFSODZZGXRBAIZLRRMGPHRNLWOZSOARCALSJQNXCEPGYKBGENSPGNBHSIUBVXBZBXKACKUBEPJNGFAQDCPJZKIFAGIVNTSDHTZRMAELKVATVQTSJSPMIQJAKHMDEENKGYWKH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UBQSSKCRMVKGKSPQYVVCYHDDTFYHAXNW");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9945242388761052;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3303507971865284;
    tmp_tmp_tmp_msg_0_0_0.z = 0.05571042900951584;
    tmp_tmp_tmp_msg_0_0_0.z_units = 246U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.047726098741464607;
    tmp_tmp_tmp_msg_0_0_0.duration = 58792U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2784393908459336;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 94U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ABUFXTNWLHQUUBYFFYUMEROBPJONUSJLTIXNXPLMMQPOEIIQWTOXVRHZECFWGQCKNSOVODPJYJXOQXSDGLGKIZCASUDAGJDGFIAHYDDFZWZMERBAQYUCFTLRXPHLPEDCIVJJBYONZYNTBENGZCSNPEMTCAZKRDWKHMVLEZXGZMVMQGLPIWKKMCUCBXVSTASPHSKNTIAOAKRQKUCBSQHBMVLJNYBGGV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VideoData tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 15U;
    tmp_tmp_tmp_msg_0_0_1.width = 47215U;
    tmp_tmp_tmp_msg_0_0_1.height = 22121U;
    tmp_tmp_tmp_msg_0_0_1.widthstep = 12310U;
    tmp_tmp_tmp_msg_0_0_1.channels = 74U;
    tmp_tmp_tmp_msg_0_0_1.depth = 237U;
    tmp_tmp_tmp_msg_0_0_1.finaldata = 1U;
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-44, 70, 94, -120, 73, -5, 107, 123, 100, 29, 3, -52, 63, -124, -58, -99, -88, -88};
    tmp_tmp_tmp_msg_0_0_1.data.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::TransportBindings tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.consumer.assign("AUBVADAYASZTKPAPGOTPIFGHFSCRPCKGROBGGXDMJYRZDQSBNKSBQJQFGAFRJGLYBXLSCZUXWPTWEDODLOXZNAPEBTJUFVUKSVBXOFHUNZICCMQVMMRVOYJWOLGWHBDCETHZWZIKXVOEGUCAIYPWRVIZYNYJJRTQILEKIHLSXEYDMJNHOFPQXCCJBYLQMWWWMKETTCMDSXVQNWNUIAXFMPZLRE");
    tmp_tmp_tmp_msg_0_0_2.message_id = 58151U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PDOAAIFHNRAALUYKJCLXOSRAXXTLUMOZYBZOIVOKQFQEJSXLNGJQTKHESSXZNXGYMTVCTO");
    tmp_tmp_msg_0_1.dest_man.assign("SCTEKVJDRMCYNHTVORGVDIMXSAJPEMVYGNTDTLAAZTXPRUOIZBGVIOWICBQHUBWEETSFYQDJHKHLXSPCZZIWEJUPOWWIULGLQDQACBHNXODXJWBPGSOERMGOQUHPAKBUVASFULZRNSJTFXKDNROZFTSWYMQVIZCXNFKRYYYRJLICICAHZWNYLAQEKEHGXGXUGRFKDMSPATU");
    tmp_tmp_msg_0_1.conditions.assign("OLOYEFXPWUTMCGH");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SessionSubscription tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 43216222U;
    tmp_tmp_msg_0_2.messages.assign("SJNCHRMLOIJGPEFLSDTCSEARCWVJZAUTXGMMHXZHCVCQMEJTHLOSIUEAZWDTXXZKNRXPFBLKFIPQEYCNTPNGBKOCYLHACZBPTZJMLBOXQVPGPQJGRLXOYIDQPDLFCYKRFZNOCEXBXSIAIQYDAWWHXNMHVN");
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
    msg.setTimeStamp(0.7558583839480666);
    msg.setSource(12455U);
    msg.setSourceEntity(250U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(160U);
    msg.command = 215U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MTJMMOJNVFSRUASRLXTQLSHM");
    tmp_msg_0.description.assign("MVFCTXAJQYIACCBYKJVVRAMSTVSRRWMKDMZXCQGZIFUOLLYZGUEWFEQJNVCDXYYPGHLZVHIKNBFLTXPQHDFKIYLACFHPFIHBAFURWLUZWRBPBRFYOXGJCDVPBQJLXJTGMONIZXYSVDYDKRDHPWMSEXWOTZICMOZUDBPQSNJNBROTKLUUOEZOCJAPLALEKCEQVPSGAZTNWKPTGAU");
    tmp_msg_0.vnamespace.assign("DLDBVPDNPTDVGQCBQBYINBPRPHATSVBJMIPYEBKMAGSRHZAAUJOZI");
    tmp_msg_0.start_man_id.assign("GMDEMNIUKWVDRCEWKJYUOVAJUJOTWMGAAADALFHUCRXPCEXHOKLJSQNJDSLBTBLFMLQXLTWDAPBRWGWDYVCYECBDXRXIBDWFOSNNQTAFUKOUHIFNZIRENMCMOYGZFJITFMBSKZUGQLNTNUVRPIXJCPNUOHZX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("BFEXEKTYPQNZEUIWTBKSVHAVQZNA");
    tmp_tmp_msg_0_0.dest_man.assign("AIGRSPCIFMPGPJMVHFVRNCQFZNJZOXSJNURRYABODJESYSLZZFNYHPDKWGOHXNEGIQLYVMJEGDOADCZFOJEHZAUUVRCTEQMFWRLCADKPBDTWSTXWBYWCKBBLODGHOPIOUEAJKGENTWKXNXLVKKNPMZBUMTCSQJZCHXULQUMNXJVSQAPGLFFGEEHSMRQOLEBRIDYMFVYPNAVVCZBOHKAVHSYHTLWFILDGIAWXQUPQYIUDKSCTXJ");
    tmp_tmp_msg_0_0.conditions.assign("ATCJTLFMTECGZQGFJLNMEPIWKYHLDQKLWFXR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PlanDB tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 56U;
    tmp_tmp_msg_0_1.op = 0U;
    tmp_tmp_msg_0_1.request_id = 9608U;
    tmp_tmp_msg_0_1.plan_id.assign("VNGUDLZAWSLQTMYDXNFGXWRBZBURNFHNQIQIITDOJLDFGJTELCGISYKKGMWENRJGDPYHAIHVHAFOCXVMCSBZHLPYHHUHBEKMINFMSARKZTJRUWOATSUWGDMXBFBRMRUDXOXKVONYWAHOJWFKQANTVETJZPKUVAOCUFOMIVPGXCOIGPPTFCMAYEGRRWYBBLQTQPEFQJPNCJKILMDTEHDXX");
    IMC::LoggingControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 78U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("GJDQPMSVHJARVDWTLZNHZEPRQYEYUUDTKLOPNMEJAZAPTAMKSTPDVITFRBORWNFAWITVUGEQPQAFORSPYUSITBPMEYDGKMCDJLCKHZWEWGIUQ");
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("ABLSSVROLBOYSSEKQPPBNPPVPAITUEFXRFZOZ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::StopManeuver tmp_tmp_msg_0_2;
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
    msg.setTimeStamp(0.6303450034802915);
    msg.setSource(57531U);
    msg.setSourceEntity(186U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(65U);
    msg.command = 52U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LMTSSNHLICYDYLMDEWAMFJWPECVCQKZJYOSDTLGHZFOHTWJAJQXNZZIDCLSVSGZXYGMIOFIPFLUGSSPTNBWPDUQMTVRWOAVZHYAOIFDMNRTKRBPSREEUDHBOOEVQFGVRMTKXENPAJUGVCJNGJZEIBURXCWKIJUNIHFQIXAQH");
    tmp_msg_0.description.assign("FBTYNRTLERIWCSMJEGDOKMVUXQQXKVLXMYFVETQUBGZVIRKLZKLXRXOQKJABDXAWVMHCLQEKGZYHIOPYOSTZCSZLFFJLQZLODSPEWGHUGHDCPFJWYDPSKEIBQMMRZOAFREABGHKEIJGCODZIPWMSURCYFICDPNUNACJGIKVDINOAW");
    tmp_msg_0.vnamespace.assign("CNTSAFAWRXDGJFYBUSJIVCREIXBSBRGTHLBOMOXYGCJJIUCZIPXZEENNYOZKKGFVYKIAOAVMEZZBTTOZDRFLRYMVHHDVSOCTWECBPADRWSCOLPTSFKPQMMVNUDHKIMWIJTL");
    tmp_msg_0.start_man_id.assign("CGFKGNPYUDHLGQBZDNVXJZDKSSQXDZIWJBOYFAX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JKBBYFOUHDJATZWMYDPFWCBYKAJETOZMPKTQFBZPQDREIMIRPNENXNJGFJOCDJLGAMLBNKILVQRZLCAZWOFYFANJTCBBZJDP");
    tmp_tmp_msg_0_0.dest_man.assign("JGWPJGIFGWOWBABCEXLMISWNFQYXQIRRUHZTNXPODIJQUSBORXFRFJALVRSWEQHUUNTTYDCGDQAGWBOLZQZHKKFBROCLEKXHCHLNCOSUAGESMVYSGWEHMOPSJRXPORNEDYZVDEKBMVYHPPKEDHVMAIEAGGKTWZFNETXGDRCCBNTMWRYUXLTVMKDYZDQCSLZ");
    tmp_tmp_msg_0_0.conditions.assign("MTPITHOMAVKUOHZPFBGNAWSSYUIKWZGVIHOZVRCPUNSYAXYBREMXLDSPMQEWITLUROJGVKXJEZBFAX");
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.28113274739748384;
    tmp_tmp_tmp_msg_0_0_0.y = 0.26511383224393503;
    tmp_tmp_tmp_msg_0_0_0.z = 0.17964733807136035;
    tmp_tmp_tmp_msg_0_0_0.t = 0.6095815361546916;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::VelocityDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.11876035661010276;
    tmp_tmp_msg_0_1.x = 0.6641601593452816;
    tmp_tmp_msg_0_1.y = 0.9726110888938431;
    tmp_tmp_msg_0_1.z = 0.4976781298834827;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.12180579498616462);
    msg.setSource(18217U);
    msg.setSourceEntity(140U);
    msg.setDestination(17706U);
    msg.setDestinationEntity(250U);
    msg.state = 240U;
    msg.plan_id.assign("ANQBEZCNXZLDNKDOKHUSBIYKRLMIMPNLVMJVEMQOAIZKEJFASWRAOKGZDIHTASRFMVBXWPNYURWQZGQDGMBPFKCGEZGZIUUGSCTTYHYLNCIUBAOAPSBKARFMOAJXQTXEGXGHXCCJHHIFJIDLNYCQSHK");
    msg.comm_level = 109U;

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
    msg.setTimeStamp(0.9246031441424615);
    msg.setSource(33077U);
    msg.setSourceEntity(127U);
    msg.setDestination(32201U);
    msg.setDestinationEntity(183U);
    msg.state = 188U;
    msg.plan_id.assign("NJCWYKUBTJWOFGEOJXZVRXNSJIHKAFUVDVGSONDPBQIOJYPWJLGWZALEXASYQVOPNANXXYPUZTMWTMCWEO");
    msg.comm_level = 33U;

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
    msg.setTimeStamp(0.8424700814091296);
    msg.setSource(3095U);
    msg.setSourceEntity(137U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(118U);
    msg.state = 246U;
    msg.plan_id.assign("PHIEZZESMSIKXDKGRMPVMKUKGYTVWVCMOIUNNRDNEDDVKAYAPCAEKUZZWHFTMAABHMFSACZDGWPQALFEOTMFSMXSGFVEPZIBXPRVWLIOFWFKUFNTELETJYTYARJXQQUOCGXBHHKIOPWLNNMCDDOOSZLJOULXCJHWGRFPINQEOVJSZBNCPBDHGRJTCVZIYRWQKXNQYUQGAMYLITVDLNLIQEDFRQRWLYSCUUBWTGHQBBCHUJTOHZXRJVSBYX");
    msg.comm_level = 168U;

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
    msg.setTimeStamp(0.6481533060575817);
    msg.setSource(17555U);
    msg.setSourceEntity(190U);
    msg.setDestination(30392U);
    msg.setDestinationEntity(194U);
    msg.type = 84U;
    msg.op = 247U;
    msg.request_id = 9896U;
    msg.plan_id.assign("CJGWZKUIEANHEBDURKBGABHRNRMOMJRYTLRSGQPHKGJCCPPABLFNOACYMLWGXQDEXEXBVSVLDXMMNUYOQDNMOEOTRECJLMAHYHBSZYQJTJPYYLFPUIQTOBXGSCPXWOKCTFUDUZFSFZLMVTSCIUWIKXWIWKHBVQKHPZWLXOUQVOTRTZBPKEQVFURHXDEVLFYVFDUWMCAAWKIGJMAXV");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 16942U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULSLHKNLTSBUASIOQRFYQEEYKVXJCRFJRNPTDUBLSXNXMABKRBWXICBFPJEFAEIKONOAEBGBEGWQASZPOGXKXPWHXMHZTRALWZAOCHVAXRVWYITOJXFFSAIDPGIVBNRAUMWFKKMIZUEVPSSTDWPXCOSUOHMJBPYQNZDRDCNGQZNHYCLZDIDPOHZWBQWKQWPVEYCKDM");

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
    msg.setTimeStamp(0.20688291666635428);
    msg.setSource(3702U);
    msg.setSourceEntity(108U);
    msg.setDestination(26417U);
    msg.setDestinationEntity(17U);
    msg.type = 119U;
    msg.op = 141U;
    msg.request_id = 51031U;
    msg.plan_id.assign("NUEAIHCRLTBUIXBJXYKYYTZKULWDIOUVVQEISKQZSJJOSNFPHGXSFCQFNWDVLQGXFQZMBEKFGSBRXPZRMBIFMFKNNDPOKZDP");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 113U;
    tmp_msg_0.range = 0.43336328696204407;
    tmp_msg_0.acceptance = 230U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NTHAUQJXPAYHHMRSNDAOSHVEFGUMDYCROQUEIXVLH");

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
    msg.setTimeStamp(0.26641243618276733);
    msg.setSource(46905U);
    msg.setSourceEntity(65U);
    msg.setDestination(60593U);
    msg.setDestinationEntity(93U);
    msg.type = 112U;
    msg.op = 56U;
    msg.request_id = 21234U;
    msg.plan_id.assign("HVOVOFBUBSSDREYHRSXCMKHLWALULLWACQSVTQDBBDSIQWJZQMCJFUWYQ");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("KAHIXQAISDLBASYTDIWLZGFQUZWLQMTMHTWOPFKJKMCUEQEBTLSKPXEBCVVNQYFTHVNYPHFEYCZKZZLJHMJGNCKWARZSXXQMAUMJSCZCTIKETORNQAXJUATQFIGBFWEEJXHGILMGVURGJHBYIBKDOODRRVQADDWDDXUNMRPBVWRVRPSCIKEXESQBNJWGYEWBZONLCRPRUYLODIGSUVANLOFMF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ECZLXWMLYJBRMGATYTTUVWZFQJURUFIDNBSAKWNMJGMJVRYCPVFYKAYDWIHWOICQYQLCPAFQMELWZQEJGPXKNTZZCUVTPOFEONVBVIORCVHJSMBACLWYBGRXUDXSESVEEUJKZNRNEW");

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
    msg.setTimeStamp(0.9022309533715746);
    msg.setSource(16246U);
    msg.setSourceEntity(225U);
    msg.setDestination(59337U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 62662U;
    msg.plan_size = 206859281U;
    msg.change_time = 0.5946354102927544;
    msg.change_sid = 56835U;
    msg.change_sname.assign("KKVCCCUXYGSMPAKVDEBLOJPOKEIBGVZTYZQJDNUYAQGMEYVZXHRPJIQTLWCWHCUWSYOJDPHTZMBQKXFXILUEBVMMDRHIESZQCJDONDUXDTZYLWHKJAOTXIQAMFUJFSJSWOUYSEGBNGFKRZAFNPIWIVVFSTXDRHPCLGVOLWBTHURDEIDFVMYSISACFPAHNFBQVTAGWGMRAPOZQKNWNMNLBBGRYNOTUIJRSUKXXMLJZCALB");
    const char tmp_msg_0[] = {-102, -24, 33, -117, -66, 5, 39, -49, -58, 41, 80, 96, 22, -89};
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
    msg.setTimeStamp(0.2733356752496491);
    msg.setSource(46915U);
    msg.setSourceEntity(253U);
    msg.setDestination(59268U);
    msg.setDestinationEntity(212U);
    msg.plan_count = 5115U;
    msg.plan_size = 2381296945U;
    msg.change_time = 0.20996053507367185;
    msg.change_sid = 59246U;
    msg.change_sname.assign("EDGEYLJSOWQXTLYZHWCCYSZNNDKOZIEBOGUKSOBDDVZDJHGVYWCGRIGSSJZQJXPPBPTPMTHSGVJJNALIPWICTTKCMWVRFVQFXCBEWPOJBXCGKNFAPBXYGHZXVQ");
    const char tmp_msg_0[] = {118, 66, -70, 25, 62, -126, -38, -2, 85, -28, 6, -80, -25, 28, 57, 111, 77, 4, 31, -29, -91, -34, 25, 87, -107, 39, -24, 49, 3, 102, -16, -12, -48, -45, 116, -128, -112, 116, -30, 117, -30, -30, -115, -6, -53, 122, 84, -13, 85, 83, -52, 91, 32, 75, 118, -107, -15};
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
    msg.setTimeStamp(0.5068965242613898);
    msg.setSource(44639U);
    msg.setSourceEntity(62U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(16U);
    msg.plan_count = 32643U;
    msg.plan_size = 3341622631U;
    msg.change_time = 0.6728773535243647;
    msg.change_sid = 29319U;
    msg.change_sname.assign("MXWPFPZGVTWBUFPYYGRPD");
    const char tmp_msg_0[] = {85, 102, 7, -115, 45, 40, -22, -113, -35, 65, -39, -79, -2, 107, 47, -79, -123, 87, 95, 12, 8, 84, -68, 20, 114, -55, -128, -1, -20, -127, 16, 93, -96, -112, 22, -93, -13, 76, -104, -35, -47, 90, -68, -10, 76, 60, 118, 98, 35, 25, 5, 100, -14, 86, 9, -8, 59, -38, -126, 77, -68, -46, -122, -24, 58, -127, -24, 14, -120, 37, -121, 118, -69, -50, -101, 112, 31, 83, 45, 126, -34, -94, 82, 52, 126, 54, -99, 21, 79, -126, -4, -61, 21, -37, 83, -98, -65, 8, -30, 8, 80, -57, -35, 106, 4, 3, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZMNQKCFRUWBIIRGBBQPHLFVHQZVTKBKWNXAPBGUGCAOFRGCTHYIXESKRKOZTLWYAMUZMDDFKJEKMBPCEPWZIFHOMJFNGPGEADDFNHJEISSOFADAYQELVQQFNYMQZJWTXPCLPWALZJWIYCYEEJASWDSHMNIXRVHRONNVDSXWGAVBLGVRSPIXIAKVYOOP");
    tmp_msg_1.plan_size = 28559U;
    tmp_msg_1.change_time = 0.08473269165412922;
    tmp_msg_1.change_sid = 37769U;
    tmp_msg_1.change_sname.assign("FGUFHGPDBAQVQTJIGKRWBVQWUQARUCXYGHXXAFLUUNBDWPQNCYAZZHBKIXNKUDOVYRUNWDSAPTDRMEXMSMBTXAOGEFFJGEOLXALPFXRCXOAOEZGMEVIJMOJCRPEDVYVIKUFTZZCRJKBOFAPIGNJMQHKCCIIKTROESLHTYYTWPVSLLDWVYINQZIOWDLNNNENZBQCEBLWJWGMP");
    const char tmp_tmp_msg_1_0[] = {97, -67, -7, 112, 102, -75, -4, 99, -72, 39, -107, -16, 68, -76, -46, -105, -61, 93, -62, -2, 69, 93, -16, -106, -86, 21, -90, 110, 5, 107, -33, 83, 111, -126, 45, -18, -84, 73, -78, -88, -79, -98, -121, 36, 89, -120, 0, 62, 84, -112, -68, -88, 80, -115, 68, 29, 53, 22, -94, 95, -103, -42, -89, 66, 30, -94, 8, -61, -59, -5, 16, 54, 117, 101, -6, 82, -40, -36, 22, -80, 105, 23, 25, -53, -83, -14, 51, -71, 2, -86};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.915567746553741);
    msg.setSource(34433U);
    msg.setSourceEntity(28U);
    msg.setDestination(14223U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("ZVJHMBGGFHYCYOOSNYRRQMRQYZWJAKGWRSIZKBNSNWPNZOQNBNLDGCSDGCVMUKOKTTBFBJZPISTAGQZVIEEEKOVNMWQICIPCUYPKDSFMFDLCWULSDZWFUHUMGKADE");
    msg.plan_size = 64825U;
    msg.change_time = 0.5602255817668155;
    msg.change_sid = 41738U;
    msg.change_sname.assign("QRVDSVPOVQPLARBRJOYCBSVBUHUDUMRWBAMVEAMFYBOONZMLSITQVNPVZECHIIWOUVJYWMGMJTRQICLIYEBPNAXRAILRDSXA");
    const char tmp_msg_0[] = {-61, 43, -13, -61, 102, 117, -57, 56, 12, 91, 17, 46, 116, -115, -65, -5, -117, -43, -22, -48, 1, -122, 112, 6, 68, -86, -18, 16, -39, -26, 122, -26, 53, -93, 30, 13, 10, 7, -41, -54, 41, 59, 117, 52, -15, -120, -82, 39, 6, -116, -56, 57, -9, 74, 91, -3, -3, -100, 83, -46, -30, -21, -85, 91, -41, 2, -9, 1, 33, 22, -25, 38, 107, 42, -3, 56, -3, 66, -121, -5, 62, 9, -52, 15, -81, 39, 67, 95, 79, 20, 102, -112, -13, -121, -81, -88, 99, 97, -58, 80, 82, -124, -38, 49, -12, -77, 58, -91, -31, 119, -110, 31, 120, -93, -14, 2, 125, 58, -116, -77, 71, 3, -75, 4, 99, 62, -111, -49, -49, -68, 22, -52, -63, -52, -120, -13, -81, 119, -99, 12, 19, -30, -77, 6, -79, -82, 1, -120, 86, 89, -74, -73, -47, 7, 50, 123, 47, 83};
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
    msg.setTimeStamp(0.12899597471754332);
    msg.setSource(13448U);
    msg.setSourceEntity(176U);
    msg.setDestination(32529U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("HSLBMOMPUNWKFPI");
    msg.plan_size = 41958U;
    msg.change_time = 0.9370266811374258;
    msg.change_sid = 42051U;
    msg.change_sname.assign("ZHGHAMDDJJKCBXNAERVNFVCKDBOYHTYKCQUPUNIFSADQNUKELTIDPFFVCTLLPNKOCHNBAVORZEFPNXXAJBZZSERMGSHLEPEIHGTYKPZBWQXKSWDEGBOHZYTQAQTJRXJPLJAYQMVIWBEWIWQHGDBCVMYMQRMCULHJPFMWYXMDOZ");
    const char tmp_msg_0[] = {88, 101, -38, -84, 110, 111, -7, -10, -26, -3, -23, 115, 45, 38, 121, -49, 20, 44, 108, -48, -111, 62, 26, -79, 118, -5, 40, 27, 110, 4, 105, 67, -84, -122, -6, -96, 13, 39, 5, 96, 2, 24, -82, -115, -114, -21, -23, -26, 49, -8, 28};
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
    msg.setTimeStamp(0.557832418037656);
    msg.setSource(3576U);
    msg.setSourceEntity(47U);
    msg.setDestination(18759U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("APFEPFDOFWVDXKXZEHTTCNQUMASYGELZCKBNFRGUXRLFPVOB");
    msg.plan_size = 39601U;
    msg.change_time = 0.37136789081838917;
    msg.change_sid = 63503U;
    msg.change_sname.assign("BEHUOJZWESVJVUFPMELQBLEYKAMAMDVPVLVSPOMQJNSNAHXCODOCBZBCWSXSDRWU");
    const char tmp_msg_0[] = {39, 30, 4, -40, -93, -7, 84, 30, 63, 52, -103, 109, -48, 123, 33, -115, -62, 85, 43, 39, 10, 103, -14, -54, -41, 63, 68, 68, -53, 44, -79, -72, 47, -63, 119, 39, 114, -77, 25, 105, 19, -23, 117, -78, 119, -106, -20, -40, 45, 86, -77, 75, 99, -69, 61, 46, -32, -86, 30, 90, 82, 68, -125, 43, 95, -15, -117, -125, -58, -58, -72, -33, 110, 76, 35, -12, -6, -61, -52, 76, 26, 69, -97, 69, 13, -102, 72, 75, 16, 26, 106, -87, -23, -53, -45, -60, -6, 67, -29, -34, 41, 89, -92, 1, -60, -78, 108, -118, 87, -30, -26, -43, -80, 27, -110, 82, 13, -49, -26, -60, 46, 77, -89, 116, -8, -1, 46, 68, -90, -124, -49, 120, -21, -47, 110, 16, -47, 75, 102, -66, -65, -117, 113, -114};
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
    msg.setTimeStamp(0.3610414161007608);
    msg.setSource(59531U);
    msg.setSourceEntity(51U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(34U);
    msg.type = 73U;
    msg.op = 198U;
    msg.request_id = 58275U;
    msg.plan_id.assign("CRAGJGQWATEZPBEUSPAEU");
    msg.flags = 36101U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 179U;
    tmp_msg_0.max_depth = 0.9010291515604902;
    tmp_msg_0.min_altitude = 0.9148457844499563;
    tmp_msg_0.max_altitude = 0.0030273701235392636;
    tmp_msg_0.min_speed = 0.4282664625038194;
    tmp_msg_0.max_speed = 0.9087798755233591;
    tmp_msg_0.max_vrate = 0.421294125911746;
    tmp_msg_0.lat = 0.4451729244584006;
    tmp_msg_0.lon = 0.025148655744204773;
    tmp_msg_0.orientation = 0.3421079339618305;
    tmp_msg_0.width = 0.02328100590191451;
    tmp_msg_0.length = 0.8839944284626318;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PRWVQPICHYINKAGYLGGVFPBJTLDQJABHJKIDBXBHYXPUSVOTXEOZMFHTWVEQEWDSUNLAJXZOLGECBRWVDSRYHSSUCAJNSCFPIJSONXOTL");

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
    msg.setTimeStamp(0.4855379399294929);
    msg.setSource(37593U);
    msg.setSourceEntity(148U);
    msg.setDestination(40525U);
    msg.setDestinationEntity(103U);
    msg.type = 89U;
    msg.op = 129U;
    msg.request_id = 63694U;
    msg.plan_id.assign("UHPOIFXXELCVLOBYGSQCSNERXUYZRQBWESGAOYVVRJRRAUDHWVEOWKCVPUSOTZPWTWRKHMFDLIYCRGUNTVOHQMDCKKNRXNHNFAYHSPFJDIMTXPYXKBFZXWZHHSQOZBVFS");
    msg.flags = 28723U;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.9980810757734917;
    tmp_msg_0.y = 0.1909922456589731;
    tmp_msg_0.z = 0.6702805109425563;
    tmp_msg_0.phi = 0.22818022161721374;
    tmp_msg_0.theta = 0.33686887300193646;
    tmp_msg_0.psi = 0.09467775549252655;
    tmp_msg_0.p = 0.5584453838945747;
    tmp_msg_0.q = 0.36699652795841786;
    tmp_msg_0.r = 0.4330878103552611;
    tmp_msg_0.u = 0.8328794956360697;
    tmp_msg_0.v = 0.9927187295932972;
    tmp_msg_0.w = 0.8942031917860641;
    tmp_msg_0.bias_psi = 0.06170771078932413;
    tmp_msg_0.bias_r = 0.2564739625811836;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IMJBAMVFAXRGZDOPYLLVKWDEKNWORZHJJRLFLIOPWVBG");

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
    msg.setTimeStamp(0.327263223085807);
    msg.setSource(46658U);
    msg.setSourceEntity(220U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(213U);
    msg.type = 108U;
    msg.op = 126U;
    msg.request_id = 13473U;
    msg.plan_id.assign("ITVOSROUUUWDECMJUTHEUPMZXMKLELPGRSYKDMKVLFORPGTKGBVKJMOEPNCWPRVFQOFBSEWAWTJDEATYDSKDZXTWUNXWIQGAIATFAMXFWBFUNIKDEYDCWJRNNNMQOJXHCMPSIXLXLZGIBQDIQVKEYURCNIFHZZBAQBXIODSRJGHOGUPNW");
    msg.flags = 26680U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 217U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ULJGGGMSBDGFHCFHJBCBYHHPAUTMPFDIJIOYZBUHAXWGSTJPVENXZDTURNQPAVRVLMJYRYOHXETMCXBXRPKVFUILXQTKSRHNXEWYUYDCADEWWBXGMBSPQJODKJSOSJANNIQKNWEWQZSCEZLDIGMETBOKRFKCNEFEWVUOSNVCXGLPOHFSKLKVWAFKFJWYELIAVZNLFGZPQVYIUMLYZJQSBCYTGCOTPKQBDCQMRRXVLNHAQUORPMIAIZRIM");

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
    msg.setTimeStamp(0.2648758833141147);
    msg.setSource(36843U);
    msg.setSourceEntity(79U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(146U);
    msg.state = 56U;
    msg.plan_id.assign("GXLRAXWLUMXOMNWDYFTSVQHKWTBLDLXEAQTZJPKROTNLULICUHUPPGAEZGEFTLPEXAIOQEXJLFZUVKRNYIHCOSIGHERCLVZYUJSBANMTTWPDOWGHTRGQJRZRJPIDCTZHKFPKLHGXMJPEBWWZDDCBKJVYJKXVSHYPVVQSYBXMSQCBGDYIFNJUQIFVUNQSAMEWTBCVCZHIYKRQENFYOUDSB");
    msg.plan_eta = 238861688;
    msg.plan_progress = 0.27927081374630547;
    msg.man_id.assign("XWSKEPMWLVIVJFYPJPXTJNRUISBGJYMWJSAAKGDYNGUYSCDHTBAURHAZNTFRHIG");
    msg.man_type = 10785U;
    msg.man_eta = 482465067;
    msg.last_outcome = 2U;

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
    msg.setTimeStamp(0.4591825392222735);
    msg.setSource(13477U);
    msg.setSourceEntity(114U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(43U);
    msg.state = 74U;
    msg.plan_id.assign("CHILWOZXVEUQAGCTKXHHFEWYASZFRNMOGHJVEKTRBDETZDUEQPYILNTQRJASJVGVAKHLSEFRBCUSHCOTALZVYGOWGMRDNLJDUREDQPICHYXQETYTAK");
    msg.plan_eta = 360114473;
    msg.plan_progress = 0.06369274885365273;
    msg.man_id.assign("ARGEHDCLQFMNPTKVJLDMRDCFUJHYGYQDKVKYAFVNFUWXYBOISMGWLATUEACOIQWTLNXDERJ");
    msg.man_type = 20634U;
    msg.man_eta = -155130594;
    msg.last_outcome = 85U;

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
    msg.setTimeStamp(0.8810981000267788);
    msg.setSource(39169U);
    msg.setSourceEntity(249U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(47U);
    msg.state = 52U;
    msg.plan_id.assign("RPNDPKFQIBRKMNESEVZTLZESHJACDMDHNXHETWGZIHHBGMUYHNUIXCYYQUAMCLWCNXXFOHBIPTXVQFGUJMTVJQKCVPMLWJAFCORYFKNEEYRYPTZOMFPTIZDBRXEQSOJNEDRKSARGILWSKBRCQSGNSDUCJDT");
    msg.plan_eta = -250025274;
    msg.plan_progress = 0.011064535386373753;
    msg.man_id.assign("FSPTPJTYUQIXRTAKWUSZASOXXYIRRBDXZSEDHWHMIJXVLKHGSVFAUFLQCCOCRTXBVGLYAAYZSUYFTKCQPTXUCNNOQDWUDDBXOLLFDVGNZMRHJIGZSCTBHOGRDVPEWVOQPQXZKMGUFYCBZMIETQLAEVPHBWJMFZKQFEELHUPZOAALHXPW");
    msg.man_type = 2167U;
    msg.man_eta = 100867267;
    msg.last_outcome = 102U;

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
    msg.setTimeStamp(0.05735777413677301);
    msg.setSource(14341U);
    msg.setSourceEntity(236U);
    msg.setDestination(30967U);
    msg.setDestinationEntity(229U);
    msg.name.assign("YEOYHFXRYGJFWBUMTDJMNPOGXDYBAYPDSLVDZUWSLHHAWRNVPDKCWJSDVGHISQVLXPBNXVUBICBN");
    msg.value.assign("DNUGKDEANJJTZPPRNNHCVVTGZBELSYTKSLCCOASOOGJRXCKYIQYVKEHBHWVIMNVTHUNVMIZWAEUTCBTCFCWBAQVVHRRQMBMFJHBRDTQAZFDFIOCJKPVKTIQDJRUOLQEZOXDFRGGADXPUEBBVA");
    msg.type = 64U;
    msg.access = 154U;

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
    msg.setTimeStamp(0.6488253168498004);
    msg.setSource(64354U);
    msg.setSourceEntity(176U);
    msg.setDestination(2744U);
    msg.setDestinationEntity(184U);
    msg.name.assign("TTGLSOJOJVEKBPWPNKSDZAMBIEKYQYIZCRORGHRYJPZFCQUUWWNFD");
    msg.value.assign("PJUPBDVLWWACSNOWQBIBBGFEKDCPCQYDPJHGGBAZQXCFCAGUHLES");
    msg.type = 49U;
    msg.access = 165U;

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
    msg.setTimeStamp(0.018615594380690048);
    msg.setSource(54645U);
    msg.setSourceEntity(133U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(160U);
    msg.name.assign("DXSKNLICMNOIEJZGIIWEZSGMDJMSZHXLJUBQFOWVPRSEMQIZVKVSOTNCFECEGHCTODNZPIUKNXYJUHFANBRBQFDWZWKOKGSZOTAGMIYVKB");
    msg.value.assign("DICLKTGUTYXGQEWTEPZIZMPJCLHXBHDVZVOSTIMSMQPIBDVWDQNWMLLTXZXNSFRGLZTVFSDEJDVRAZRKHMLRRMHLEPFYZQDFOIYOOIGXPTXVRAAMPBCHPMIPTGWJSXCAUBSTRWGCFYBRWOKQNKAHOQPUEVLCAZLUIYNCBCYWJNFFRUSNOFGQWUTFEWUZAW");
    msg.type = 139U;
    msg.access = 203U;

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
    msg.setTimeStamp(0.1533208330602207);
    msg.setSource(19745U);
    msg.setSourceEntity(179U);
    msg.setDestination(4585U);
    msg.setDestinationEntity(229U);
    msg.cmd = 131U;
    msg.op = 218U;
    msg.plan_id.assign("DFUDWUNYGFRYUMCBDOIRGEFXJIWQKSSMGOTFUFJSQUHYTLYXECAKKKMZBLNWXYBWAGPFEOWXCTKAVJWRPDOKPOFXVDXVOPXAGUZVCSYMVTPBJSHJSMADQVBMLWISXNJISSWDPBQYCERYEQIUCC");
    msg.params.assign("INKLJABXKGZBOALCTCQNHLKNNZLZBDWGVXAUIAKGGYCVRZSJVENMJGNFVEHQHUSGDJTXPHZRPKUTPLQTHCTGRWMMEAPWQ");

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
    msg.setTimeStamp(0.8987022957420524);
    msg.setSource(56132U);
    msg.setSourceEntity(252U);
    msg.setDestination(19161U);
    msg.setDestinationEntity(135U);
    msg.cmd = 38U;
    msg.op = 155U;
    msg.plan_id.assign("SDBBVQEDAGQSOOUUBQTFGKWQJEMVFUHRIERLIRNOGYYAKNFKHFYDTTXPUPZCADKZRCWFSMTNUSSZPFSCLDGXJJEYD");
    msg.params.assign("XLENSNOQPTTROPEQUCMQXLFFVSWTUNAOYFMYVEHBIXZOUAMALHKLRJLVVKBVQCSTASMJPZQJCYGWFIQDXKHIFTHDUTYANGXLYFYFOHKOEGXSQZWNNIPSBDVFFIRTIWDVQUGPYGJRURBKRMEWKPZCUZHGHYLBCIUACDHJXEG");

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
    msg.setTimeStamp(0.4926110206687614);
    msg.setSource(32925U);
    msg.setSourceEntity(7U);
    msg.setDestination(20585U);
    msg.setDestinationEntity(146U);
    msg.cmd = 98U;
    msg.op = 123U;
    msg.plan_id.assign("YMOBCVBVSNBJEKJYINVMQUSMQGGOEXDFXLDO");
    msg.params.assign("BQPEXQDWWBRSYWTKTZECUMQUOFMIMKCKRJSPIHDZHZYATNJJZYOLTNHVQZKRJSYIAPVXLZAIINZFKBOVKXWICNJIPEMGNKVEODSQPWSUONBQFJHWEJ");

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
    msg.setTimeStamp(0.1117925483721588);
    msg.setSource(20867U);
    msg.setSourceEntity(48U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("JKIBFBFBNUKSGOPKSHTJOYXYTOCSRMHOSKXFGEZYRYNXXFKNZEWCWWDNQFEPHAIGURJNWHPIZSYRYNGWHQHBSBRMQQNLZNGKIMOUNVIVTGZBIEFQLCBLBDJZYWEMBQCUOLBJREDRWVZHFMPVFTWJQLVOJLDWEHLICOGAVAKSPXPR");
    msg.op = 39U;
    msg.lat = 0.5260159519953106;
    msg.lon = 0.2503610196955558;
    msg.height = 0.7797473432108323;
    msg.x = 0.8164415437336314;
    msg.y = 0.23060439976398572;
    msg.z = 0.663086297030023;
    msg.phi = 0.968428243802255;
    msg.theta = 0.36239914337522317;
    msg.psi = 0.9251692613006897;
    msg.vx = 0.2185147664762901;
    msg.vy = 0.46565126600174755;
    msg.vz = 0.09642307929372229;
    msg.p = 0.8535559564792758;
    msg.q = 0.0867038285375965;
    msg.r = 0.6396235589992443;
    msg.svx = 0.453280616177257;
    msg.svy = 0.3761844746982801;
    msg.svz = 0.706827865280981;

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
    msg.setTimeStamp(0.3987874262472728);
    msg.setSource(6624U);
    msg.setSourceEntity(133U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("ZXCOESFGKQPIHREDFLRKAIFNJOCVYFMUCEHBOEQPISUQMVELFMDZWDSAYUJKSRLRHSORNTDFCYXATXRXN");
    msg.op = 191U;
    msg.lat = 0.7769859143725165;
    msg.lon = 0.8464430554768503;
    msg.height = 0.8834411679591782;
    msg.x = 0.8205750959111625;
    msg.y = 0.44312163253417425;
    msg.z = 0.611804649687539;
    msg.phi = 0.18102276305691312;
    msg.theta = 0.7108566120072916;
    msg.psi = 0.7796630819035785;
    msg.vx = 0.6605915570817231;
    msg.vy = 0.8344886329670403;
    msg.vz = 0.044485208799945664;
    msg.p = 0.224955319847587;
    msg.q = 0.676420734778079;
    msg.r = 0.45954741931118237;
    msg.svx = 0.7888443932780443;
    msg.svy = 0.7435624311474862;
    msg.svz = 0.533561668304163;

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
    msg.setTimeStamp(0.4209948127262878);
    msg.setSource(38050U);
    msg.setSourceEntity(198U);
    msg.setDestination(54863U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("RYHHREDNWRMDSNAZAK");
    msg.op = 107U;
    msg.lat = 0.9588775111654049;
    msg.lon = 0.4044103311582611;
    msg.height = 0.20495147557882565;
    msg.x = 0.419806597173073;
    msg.y = 0.8096767204887573;
    msg.z = 0.012706541304761787;
    msg.phi = 0.5596170457158635;
    msg.theta = 0.6918189248962284;
    msg.psi = 0.5455503192662678;
    msg.vx = 0.9819130432749226;
    msg.vy = 0.18972490331615166;
    msg.vz = 0.23317963896625693;
    msg.p = 0.20048335995621647;
    msg.q = 0.5592717416767294;
    msg.r = 0.12456534979647049;
    msg.svx = 0.5165723632757908;
    msg.svy = 0.7454921388093362;
    msg.svz = 0.3260430756449254;

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
    msg.setTimeStamp(0.7558025248273049);
    msg.setSource(8302U);
    msg.setSourceEntity(95U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.4664777051672758;
    msg.lon = 0.5683187062184614;
    msg.depth = 0.7026878009793278;
    msg.roll = 0.19367988189466545;
    msg.pitch = 0.38425781875085574;
    msg.yaw = 0.25881654813598065;
    msg.rcp_time = 0.21590396920000998;
    msg.sid.assign("EPHQMBPDNMUVMZHFNRZFHIAHEPJOGGZMTPKXQFKAMPSLQXLGUHHZWWLQUGHAOPCYILXMBREDSHVAOPBJNUACKODGFDKLQBULCSDZBOXZEJUGIZBCAWWJUYVLPIHWERSLFEYYEVFUSIOZYJONRMRJCPJAQZVNAISKFJTKOJRTEBTRICNODDBCXTRTCQE");
    msg.s_type = 39U;

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
    msg.setTimeStamp(0.4429515453177342);
    msg.setSource(41707U);
    msg.setSourceEntity(215U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.8398398849171472;
    msg.lon = 0.22135441241133436;
    msg.depth = 0.29841776729304803;
    msg.roll = 0.11980736588500018;
    msg.pitch = 0.47858739273135575;
    msg.yaw = 0.38888142514776736;
    msg.rcp_time = 0.5791086149000978;
    msg.sid.assign("FPRXJELVJJVTKYHBOEDGIFCVIANMBUBWWZLMONHAKGDGOBRDPQGLKSNKNZJHQYGTFKFHWOSXXAVFCCWNJXRAMPGFLBYQSQDULVIISIMATQOYOUXZREUHGPQGKMZFMDZAZDCDCNJHZMBVTMBWSXEEAHJEYSDLWKUIRZIHITTSFCRLTNKMRUVEBVCTXLUOFPSLUCYJMBYVXPGRJNIPENQANRIHYEZDFXYORGUQS");
    msg.s_type = 50U;

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
    msg.setTimeStamp(0.7451639117395374);
    msg.setSource(38005U);
    msg.setSourceEntity(159U);
    msg.setDestination(8406U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.5418410957677667;
    msg.lon = 0.04134729141807569;
    msg.depth = 0.17393365105689151;
    msg.roll = 0.5323803576629107;
    msg.pitch = 0.6577081686625023;
    msg.yaw = 0.6704957403613121;
    msg.rcp_time = 0.8999513923547591;
    msg.sid.assign("NXMQPIXVZVWPXWLXJVHUGNJBGELUZISRKBEAPKCSBJNDTBRAUZDCYTORRRXSYSISGKQPFLGNHIHJDFJOFKQFVDQCEGORYFGIOTVAHHCLIYADZRFBYOZCXZSOPITZQOYXSHPGNQSZNELIGKELAKEEPDYUKAGQUUNBAULVYBCUXAXTEVAMDCWSAFJZUNDVLQFHWKWWOLMQQWBRSCMVWNNWFXMOHYLMRCJWJTOEJHJRICZPKMHTU");
    msg.s_type = 108U;

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
    msg.setTimeStamp(0.098275165236549);
    msg.setSource(38220U);
    msg.setSourceEntity(189U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(175U);
    msg.id.assign("PHIQYIKFSRGIPXHMWJVTZKVOAQCHOICBOYEWCQXZAFLKDNVMRMFRUNGWKYSHQKTIATFSBZPPZESSTGDULSUTJBJWHPYCUXLVMHZOKGWOJCUFCPDPEKBYEYWRZIEURVUSXMTLRTHXEBQNMKXHLUBNFLNXMAZNNLFNDDMSZELVANQAQITEAURAGGNWCXRIHXJJPQDDYBTLSBMJQCROEDYVFHQEVIARGCZWWADO");
    msg.sensor_class.assign("LNIMWMSPAGDOVFJWMBFXZEN");
    msg.lat = 0.7800268347717678;
    msg.lon = 0.9109290991258416;
    msg.alt = 0.3832856436050369;
    msg.heading = 0.5460040724907962;
    msg.data.assign("UJSVWJFHBEWJVFDCGDAHCAARITRTMKYKCDEEDYLTZBGJTGGZHVAIP");

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
    msg.setTimeStamp(0.7130217271715689);
    msg.setSource(50164U);
    msg.setSourceEntity(39U);
    msg.setDestination(11233U);
    msg.setDestinationEntity(239U);
    msg.id.assign("VUCCQDHNNOHROGDTYDKHADTQXOCGLKFXDCMZENUJILNKLESAKIOTIRULYXPGIEZYPMQNOWT");
    msg.sensor_class.assign("NMHCUVXMHVGYCPFWFGYLICUSOQTRGZWIDPZTGABNAOFSSMRMASYFFAK");
    msg.lat = 0.9262408480338771;
    msg.lon = 0.6766199650119238;
    msg.alt = 0.46656298897498216;
    msg.heading = 0.8261602656376745;
    msg.data.assign("EHOTUZRJDCJFQIVPLKVDRINILSWNTCWIGBFDTBEMUWEJNLHJLEKTRQZBOKUQTCIZDERBQEXXBBPGVNGKIXWJHMFKINAFWCXAHRVZDKTDVAMXYTPSIOLWZCY");

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
    msg.setTimeStamp(0.6427772499901664);
    msg.setSource(298U);
    msg.setSourceEntity(186U);
    msg.setDestination(55649U);
    msg.setDestinationEntity(51U);
    msg.id.assign("NGJGFITBZNFWCQXUJFKTDEDJZSFLIVPONUNAUTGCXDAWBLEPHLIMRCZNTZYORDJESRXVODBHJSSJWMEBBKYQPISELVKDZTXPMMFUKAXULVVIQJYCQGDCLRPKDNLSUDQCKYUXHRNHJASMJRQGBOYTFWQKECQWYEVEBFLQXV");
    msg.sensor_class.assign("VUVIHSUBOUFRKZAQMCJPTYAIHIZXQIDYNGILGJDEESTNIFONWBQTKFXLZQPYFQEXVREYABTDTEYKCHMKPMHCTHHSAMEFZPNUHVOFROIXKODBGLZLODEAFNQELUCJIGNURRDDNLSJMPEPVSCMVCVXUATRGDBAYJHQKYDHNUJJJPWOXIBVSXWFFYXQXMGNXMGSSAZCAWPLROWCVBJUBRZCWONMBHELKGK");
    msg.lat = 0.08443050466024626;
    msg.lon = 0.3486279723268373;
    msg.alt = 0.14469598059835054;
    msg.heading = 0.8888827391814245;
    msg.data.assign("DPZZRSPFPKLFIEFEQQPCFBGESMTREGCRBIYYMHJLMHATLBSZHGWNEXAVCYJKTWFDOIXJORSNKKNNSXCZICUYXXFPNUAFKDGMQHCZBQRCNVBORMTLSAJOLOYNMBLUSEQBOWDMSUMDLHZBKHBXTEPKAGPIITVNWUQYWXGUQCOJWRSLVIUKYVGTKOZWIDZLJRRVEYQXUAAMFDTNCHLAXOTHTIJF");

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
    msg.setTimeStamp(0.4392589945851336);
    msg.setSource(37492U);
    msg.setSourceEntity(148U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(23U);
    msg.id.assign("OFVHPEEANXRUBUIEJPXGQSLYCBVHPFWUCILDOLFCTQQNPWFGGQVFGJUYZSMVOHUBTZPJRXXILSKDWWHZBSCYOHLESSPYVYXKOZTCXMDUWLMNYQHTNQWGNSLRCVFNIQHKDFAKJMIPNPURBQMODUVSCZMYANOIAEUOBZRGNIYKEOBRJGJMGKANZLKSOWK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IXGOQDPSWEUOVCNLOLUPDUSEIDKKFIRPVGFMVCMHJPBAQRBNZVFVSTKJKPIAMMZABHN");
    tmp_msg_0.feature_type = 193U;
    tmp_msg_0.rgb_red = 25U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 42U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.48570366551123745;
    tmp_tmp_msg_0_0.lon = 0.3726320897683738;
    tmp_tmp_msg_0_0.alt = 0.28921386332145127;
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
    msg.setTimeStamp(0.45093965378313383);
    msg.setSource(23691U);
    msg.setSourceEntity(101U);
    msg.setDestination(11010U);
    msg.setDestinationEntity(136U);
    msg.id.assign("ZGGJAQYHHOJQAGNJYLNIGHOVWJGIDWMYKNXBJEFCGITKFOMUUBNJCSFTUKMNBEZFSKIENMNWAVOYSCBLUQHKALYRRERJVDLQRKEEWXEHMBCXHFTUGYFTFUPASXPFDMIDSXYHVTNTWRWTTXZGBCVZEWCAVPABOSDZIRLUQVLUMZYBGMSIXMKJXMVFDRJVQWKKLCDHRNFGTALSIYSEUPQPWUPDKZHHLBOI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KFPSIUOXXMDLWFSTQSDJABMATZTNTSKOJPVKRNGMIVEQUXJDSJIQLLCEXQADIKEWJCASPMMTFRNZABQBYHVSCTIEPAKXNHM");
    tmp_msg_0.feature_type = 239U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 142U;
    tmp_msg_0.rgb_blue = 121U;
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
    msg.setTimeStamp(0.9455290986776822);
    msg.setSource(49851U);
    msg.setSourceEntity(214U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(237U);
    msg.id.assign("EPPFHKXSKDGJVZCVBLCYUYXLMUSKBKBNSPJMFCTCYB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YNFUZNMDSAJVKNMOEPBHWUPVRMYJMSFIPITPAWZBGSRECWQRHBWCWSWAOLRTLJLXCQQKFEFDBEUAXAGQBSBKSIMCOYNGTBOEMHWCLSHWGHNKZOAPQDTSSZCDCYYTWVAZJNMXTUUCVFAZEKJDXPJVPIMVOFOGXYRBDQKJKGZXHZFDYQVDHQYVYRBJUXKXHEZAMKXCRIDQOFGPQPTNILGLRJOIOTEYMSRU");
    tmp_msg_0.feature_type = 251U;
    tmp_msg_0.rgb_red = 183U;
    tmp_msg_0.rgb_green = 217U;
    tmp_msg_0.rgb_blue = 41U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4609472622964136;
    tmp_tmp_msg_0_0.lon = 0.1070687110069296;
    tmp_tmp_msg_0_0.alt = 0.8002827164783034;
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
    msg.setTimeStamp(0.5295397337566102);
    msg.setSource(41436U);
    msg.setSourceEntity(247U);
    msg.setDestination(1019U);
    msg.setDestinationEntity(102U);
    msg.id.assign("ARMBXJJBYPQETVEMMZYWK");
    msg.feature_type = 210U;
    msg.rgb_red = 202U;
    msg.rgb_green = 172U;
    msg.rgb_blue = 135U;

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
    msg.setTimeStamp(0.8624800592930124);
    msg.setSource(26663U);
    msg.setSourceEntity(88U);
    msg.setDestination(22352U);
    msg.setDestinationEntity(188U);
    msg.id.assign("HIVRXOFHJAGABMGRIRAQV");
    msg.feature_type = 166U;
    msg.rgb_red = 94U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 173U;

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
    msg.setTimeStamp(0.2938816935743226);
    msg.setSource(16407U);
    msg.setSourceEntity(230U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(246U);
    msg.id.assign("MLNLORYQGIVOUSZRUQUWVJNTFABUWGSTRRCCIGEUDABPKQAFDFWGXWXCFBYKVMQGVCCASTEWJNKMPWHNOJGQILISNOQJMGHUYIEBWBVPOMOYVXYYHORLJXABNFRJPZXXQZKUSFDIMEXWXMEHAQSJNEBZPWYHNTFNDUASHLZAPT");
    msg.feature_type = 131U;
    msg.rgb_red = 89U;
    msg.rgb_green = 55U;
    msg.rgb_blue = 104U;

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
    msg.setTimeStamp(0.4936006630090859);
    msg.setSource(40921U);
    msg.setSourceEntity(173U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.9325570560592582;
    msg.lon = 0.15598992257945266;
    msg.alt = 0.17572950000764231;

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
    msg.setTimeStamp(0.9663272586587337);
    msg.setSource(32491U);
    msg.setSourceEntity(87U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.3731551700615826;
    msg.lon = 0.6249145291853104;
    msg.alt = 0.9285105509143989;

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
    msg.setTimeStamp(0.8141851604671869);
    msg.setSource(53395U);
    msg.setSourceEntity(29U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.20170881727178192;
    msg.lon = 0.6715240331813037;
    msg.alt = 0.041554988398991854;

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
    msg.setTimeStamp(0.6759947576780259);
    msg.setSource(10671U);
    msg.setSourceEntity(67U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(148U);
    msg.type = 122U;
    msg.id.assign("XQXBJPNKBFVFCMHFRSRCKYMLBPENXQHZYXDLWKJX");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 92U;
    tmp_msg_0.step_number = 97U;
    tmp_msg_0.step.assign("IPCTCSEKNDGSRTOTDEYLZIPSXVJFOKUNVBFKLUVDJOKZQGNWABHWPAHREQQZQWSPEEAAYVUKEWUMTBMPJFJT");
    tmp_msg_0.flags = 158U;
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
    msg.setTimeStamp(0.7116444918717315);
    msg.setSource(15702U);
    msg.setSourceEntity(235U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(187U);
    msg.type = 125U;
    msg.id.assign("BRQMTOTIZEGFYYUKXSTPWCTVCDEGFITVXHWUJNDVAZCLUDB");
    IMC::AcousticPing tmp_msg_0;
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
    msg.setTimeStamp(0.5610682430145879);
    msg.setSource(64843U);
    msg.setSourceEntity(137U);
    msg.setDestination(58694U);
    msg.setDestinationEntity(226U);
    msg.type = 232U;
    msg.id.assign("FVEYLWJXJYQFMGGJCMKPWJRXEWUJHPTCTZIOODQDNMTRZOSPAIEPZXIAGCFIBGNFLCXIMHGXKVQJNCDDBUIYNWEGGPCTLVVFARPKUZOVNHWDUL");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("HTCBNNLZWNFFLFZGOXILBVVIKNBVLLXLFTMYGNYKKWMPEMZDQRNCMPJQJTPCAIBHOERKDWSMQVPUYAWDEWMNCYBHSROZEJDKWIARHJGQKHLJXGUMTWTPHESDEGUMYPCRWTRFNKAUOVFOGULVVHDJOTAEUAZRYES");
    tmp_msg_0.value = 178U;
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
    msg.setTimeStamp(0.9222497800985687);
    msg.setSource(15208U);
    msg.setSourceEntity(72U);
    msg.setDestination(40118U);
    msg.setDestinationEntity(27U);
    msg.localname.assign("EUYHEDBJZOYPAPRRIMKBSVZTFGKPSODPRMURKPHVWWBLFXIKSLPIRXUZXZGUCALCLAFOKOWOQHGKQFNBGGZLBVWMAYPDMEHIQGEJWWYXQQQLDJTMRULSVAOAYJUUSQZTDEYJDTHHJNNLNIFXXPVSTYEBIZTCYKIVRENFPSIOUNFKCUTKAOERIJFXUYQDZNCSASBHVMMB");

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
    msg.setTimeStamp(0.5707090360526166);
    msg.setSource(63110U);
    msg.setSourceEntity(132U);
    msg.setDestination(54448U);
    msg.setDestinationEntity(77U);
    msg.localname.assign("TJMZMUPGBYAHOQGJIZCQLXXMUKZCTIKDBXHHILYTAORHKDIXNEFJRABYCQUZFZRNJEPCTIDAPQNWRMYLNUHQJDTFPNIEHVKGJEKASX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CQHPMZNFYGVBJLVQDOONMYWNCJGUJPYDBUTVHAMKRLNLXSCDYNUQGJXQJEAKQIQYWJGLWWZYQ");
    tmp_msg_0.sys_type = 196U;
    tmp_msg_0.owner = 2641U;
    tmp_msg_0.lat = 0.5639516478846454;
    tmp_msg_0.lon = 0.4243343700377107;
    tmp_msg_0.height = 0.680999823063407;
    tmp_msg_0.services.assign("VCNYZNESBVHJHCIQZQDYWALUEDZUZAVBMCYMPVLOTVJYIKWFLUTZXQMFHBARKCDQNHPOEYPQDJGAOQGXBVKBNBTEWJKCSZRFIUXXUSDMQMYSDRSRGWQSORUGDJNCMPTRHVHTJMTYDWDCFLNCWP");
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
    msg.setTimeStamp(0.9113964091792356);
    msg.setSource(23667U);
    msg.setSourceEntity(131U);
    msg.setDestination(2004U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("FWDILURAPWMFTCHPORINXKOXROQATUANUVYIBMDENWCBLFVBH");

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
    msg.setTimeStamp(0.9545082410239619);
    msg.setSource(62756U);
    msg.setSourceEntity(146U);
    msg.setDestination(18348U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("HAWORNRIAQKOYTFXBRSKJXDAPUENBNVFTYFJHFNOBTIULVIKHZQHURJZJTTOJBRLEPFJRRIBRMXFVGBPOPGWMZ");
    msg.predicate.assign("FSFVTIXQANXWRGVNLFNHYJBDOPTJGSQJVTXHTZGTKGMKAQRPIUEQQDERCCZLMRVYNQKXIRFVWHAAWWFCLDETKBOCXWNWTIZDQGMGWZJCP");
    msg.attributes.assign("SNEHQCWMQIJXMUG");

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
    msg.setTimeStamp(0.7970291047398119);
    msg.setSource(51098U);
    msg.setSourceEntity(216U);
    msg.setDestination(11648U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("BKSEVUCAQWEDNZBAXIZQQAEKLDTODQSNYWQUFVTLYHZMWAGYDQYSSTSXSUJNEIKVRPFHKLJNPMFJXVHWMSIPGXMUFAGPTABCPCDIZFQBALGIIHXECWUDVJHFYOMCVTLONBFLB");
    msg.predicate.assign("HAZQTLBFHRNPXLNEFMCOTBOTGAVOOUZWLUPFIEBJJOFGDBOESRNSJXGURSCLTTDYLJVIOVASLWKISUWQPHCDXSPMPKMCRYEFDMQQAPTYNNZLZMFUVJJXDFUILKYWPBPZOOGKRMAXHCOCXGYGJBUHYDNGXMKSVRWKIGNZZEZCQDNQGHHWZRFARXFKYHQMJNTUQJEFVXVKD");
    msg.attributes.assign("QMTWFUXXCRLMOBNGHVARQBYKPMPQKLESZLKDIQKNTFVELZOOQCQESWJHNMCUZKRG");

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
    msg.setTimeStamp(0.8858745982959831);
    msg.setSource(23192U);
    msg.setSourceEntity(145U);
    msg.setDestination(10213U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("XRASCQXSTJTAEEBECSSPRFPDFFCMBSSICO");
    msg.predicate.assign("OQIHPICJRQNOQMLDYKBLKVUEGWZOHOCHAJHVEMMXXSXAKEEXXIYEWZLJJCTGTILCKYDYTJUQTFRWSGGYEHNKQXWABBSGLUNPFYQFQXOBHNPCAORZJSJPMWDPVKEDSNYKVQUBUDUIKE");
    msg.attributes.assign("TSRXBQBXZAGHUKNRPQVSYNEJOIPVDIRAMIQKVVODOQHAVGZXODACSJZWEBALVMNPARORRQJFCUSXLODTYWBTLFCYWZCPGMUKMXCRINSHVKARUWDBLTWRKMAJUTLWCFPGVKFOEBANCFBDCLPWY");

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
    msg.setTimeStamp(0.7437200455493643);
    msg.setSource(24083U);
    msg.setSourceEntity(71U);
    msg.setDestination(34795U);
    msg.setDestinationEntity(206U);
    msg.command = 191U;
    msg.goal_id.assign("RMYYJMLCKOSIRSHNKSSGAWUCCLKBFZUPRTJOYKIYNEBPIARYJMDYEHVLXTLQAQMZNWFJRADAMNPBFBTJTCHVZGTZFRBQXDUHBCLUQQYUUUGKKGNHDYGDJCFIMHHOCPEBAJLFGTPKEQILZZZVHBOXXJRAPDNOMJBLFXFVPNWYXMQMEHOPFIPIOSKUCKFUWSTZSDPSQD");
    msg.goal_xml.assign("GJNJUTOOUMMBDVLHNIUWNEZBVPNDOPQQQEXCJTDJWSWXIIVVQRJPYGAMFPFOPZLOAZWNVEEBODFJUIJAXRFBCJHKFSMQOZS");

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
    msg.setTimeStamp(0.25185284326855606);
    msg.setSource(58859U);
    msg.setSourceEntity(173U);
    msg.setDestination(45038U);
    msg.setDestinationEntity(180U);
    msg.command = 210U;
    msg.goal_id.assign("XXVUTRDJAFRLFMGPVOABZKRFSIIEHRZZDENVUJWXBOGSWFFJHNVTYEORWCCUAYZCHGNIBBVVZCYVJSEVLXOJOMPLZKIUYJPPQIMMMEVSAGYJBQBTJPZKLKJKAUMWXTGMFWFOWYLXESCYHLQTPQUZOBUNPQUXXIIYADQHAIABNTJIWRNDGNKDNXPOXWDOHWCMCQQSEPQSMRABKLGCUFNKRMLDHDSDCWNVFEZLDARYPTHQYTKKIUEHGBST");
    msg.goal_xml.assign("GAEUFOQCNAPWMGGQLINSHNOLLRCTYXVVAVOFOGJYMGPFRWQQIJBKVIYPJEXULNBZARNOESCTBTJTUHNGTFMATZFDDLUUPAOXKEKXUYIHBETNDPSQUVJGPEZJVFKROTZWLOADVDZKBMNXXUZNMALYVWIWCUHJYSKZLHDYRPM");

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
    msg.setTimeStamp(0.7014770014668918);
    msg.setSource(59855U);
    msg.setSourceEntity(207U);
    msg.setDestination(29337U);
    msg.setDestinationEntity(211U);
    msg.command = 184U;
    msg.goal_id.assign("MOLNJABETVTFDNWRCVBLGHQTGSCWLXHUOKKYNEHPACODXHMDJDBZFIEVVFTQJOJHYIRCLVIIROSDTYMZQRSJCEAFQMXUYGGUFGLYTWMMPPSRYBZKTCAKEPJBOENXSKPRYKOVWLCRSJZNPWVYFHTLQFNHKWDZXCBZXNISWQUUJNUSDCAIOPOZLKSMBRTZ");
    msg.goal_xml.assign("MRKRZDMFHVKPNWZDGDCKXDHJKDCLOBDAVILEBTQKNZBEAZEQPUBHJFVESYATOQMQSOHRCBILAAVVFPHMQSIZLJJQAXNJYYJPWSUMHHWLJXUCAELTGUNWKAECTTCYQACTYIFSMQYPIGISRPROUFODQY");

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
    msg.setTimeStamp(0.20981652580152854);
    msg.setSource(17610U);
    msg.setSourceEntity(128U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(194U);
    msg.op = 228U;
    msg.goal_id.assign("RIQMCXKHFGYQAVLCLXPQKMOOUDDSDJIRIEGDDBZQTAXOV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TQICXARBQRXVSTWVRXCKOFTWLDNNWGUTFEJSAGUPMAPDHFLKIBGBYRCQIEVUSLOZNEIYLPTQVDMBVLOZNTTFEEOOOOKCPIQCZEZZYWHSZJMNAIAGVHFWM");
    tmp_msg_0.predicate.assign("WDXRJBBUICKPDLFMSAVBTEUMSMPCVLZUJSEBDSQGYMJWIATZ");
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
    msg.setTimeStamp(0.22793543462160026);
    msg.setSource(38254U);
    msg.setSourceEntity(12U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(242U);
    msg.op = 50U;
    msg.goal_id.assign("HXKFWFDMQGNZIOCUSOYZACRGLFIWOLPGGAPJEALHNAEVYFKMDQTFWCDGKJLHZIIWVMNYDXEQBZBYMJM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IBMGOVHUSPTOSPDVYFCQFJMOHKKHGHDBJQFOWIYZWGZBZTRTFKNBORYUEDKEZLWQNJJZSAZREUSBKYYEGLXISSQSRZWLTNPXFZMUVNGOVERWPDWUJCEGLMUOXRCBNFOCEQYPSNXMDXDMLEAPMFDIKAULQOJFYJQTJFWXTHSCVJRLLOQFRKVHAYMAIIHTXRDPTUKYJIQV");
    tmp_msg_0.predicate.assign("LKYPHQRNNTJQQHNDDDMALOHLGBHYYXFZOTWIFAGRQBHNIUMFPJSKEIOXVHTSMUGEFQRYGVCVHYHJSMJZENKXZPMMIDC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XZEHHQUJMSKPYKLKZKBXAMEGAHULTBIPZODCDUIWTXNDOZOTCLDISVKLQSVTPDHUHAIGDPQCBCBMJM");
    tmp_tmp_msg_0_0.attr_type = 76U;
    tmp_tmp_msg_0_0.min.assign("YEOYPBQVJFCQRGATFLBAJZLWFPBTFGTYKDVRFRHQANZTGGOKXBREOSPNEONDAMJCGVTNXCXN");
    tmp_tmp_msg_0_0.max.assign("OGWVMFYMAPZEBSWJHSJFEHKHTWXMOSBQDITXNEGTNHZIYACWQGDOCRQVZLWTKVYQAGUFQXASLWGLEIRUVJTIRJWLSMOXRCKUCQDJXCSKDIXLJRFYDHLGDPSANIBHKQMEXPRKCLUVCFQMDJXZJAAULZHIQYWLEYZXPFTVAPTANJPNUGHZMWUEGBHKBRYKRNWAPNSZYOFOHOFKTNYQUXZOVFBRIB");
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
    msg.setTimeStamp(0.22512230886755302);
    msg.setSource(40160U);
    msg.setSourceEntity(17U);
    msg.setDestination(16089U);
    msg.setDestinationEntity(57U);
    msg.op = 60U;
    msg.goal_id.assign("HXPXEYIZZXEQQACQIRMDTQV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DSVRYCKHTUYSVPUFWAAQUKLHQMJYQNQCCBRNMSQACAHNAMZVLONOXMAZBVMEJIVZLILORCPMWRZUKYYGRQBILDHZPMXJPTCIIXKZNQDOATEMGSXGRUDGJKUCHUTHTJDZBTMKTCPDIYIWFJEGJWHZLD");
    tmp_msg_0.predicate.assign("CNCFVTWMZAQQZSDAHFEMTXGPUUZXPCZCWLKCHSLDYNDFFXGQAVYIDOXUSJHPNCLGZVXNSNHZTAUAKOYWJZIGWGSFQXBQAYBZMOJJDLDEFTSVQVFEZIMTBFUTRRLOJBDHPQHYDMTLTEWZREVKBHLUERONFNXIWWMPIOUCYKRIOIVYNGMLGIROKIERPSOSWYXFEAJLKJLRQTSXGRIABNGPKMKQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AZOZASZHVQKEWRXJUXJSOUBCZWIKWLITTSIYCPWYKHCWKMBFQEWGVJATMYALLGZJTGIXHGRTPMHCYUFAWJOAQBMOGSMCTQYXPGTXKQBPRODJMERPZSDMGCFLVJAYJCFBKXXELRZQIPMHAIUVYINNYNSLNTOZUKUVKBSJTHDTPEUGFNNROZLBDHSCLBQURPFEROSDG");
    tmp_tmp_msg_0_0.attr_type = 102U;
    tmp_tmp_msg_0_0.min.assign("VOXQUYUJMAZZENJOYSZIDCMJDRSQLAFZRFWODCKFHWKVZCJAFBWAZPIGZRIUBTBPTEIHDSDNSPQRGEJXYIYTMNJHMQASEVOBRVEPPDGW");
    tmp_tmp_msg_0_0.max.assign("JACYUMSUJHKVCHHPXZWEQEQFBMQIJMIAWRKTODGPEFCZVLKGGPYRYZUBBKYHZZOEYITSODQBRWVLLFDXUCPEKIJWWICVFDHQNRGXLBOQJZXUGQPFAASZMNYJRJMTOYOEQXIUSLSHDCCTWETJUOIGPWFSDPENDCGNKDVPTWNPAMZKOKDKJAFXIAVXFBRNBIQM");
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
    msg.setTimeStamp(0.48125740991954424);
    msg.setSource(35450U);
    msg.setSourceEntity(92U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(82U);
    msg.name.assign("LYFZGQJKNYUACMSALEYVNRDTKSPQOVSZQMAISLQIFPUUGWQVOBLEUHJNBJQESJMOPZFYSAHTEDZCXMXYKGVMEHNVIOOYFHJUUXMYKEKKDRZPPHXUVJKKCIBWPBJMOXTHAQJNABGKOPUETYHNKZLITPHZWCIZRTELWVDVDXBODOZGBAEQSFFARRUGWDFGLSTXWICFJCLWAIOIDGRBRGWSXFLHBIMVWRZ");
    msg.attr_type = 95U;
    msg.min.assign("WVHCWEGCGAOYVIOWIIXYTLOAYSPGZPFUEWELODQYVEGODBALKLRRQBXZCZFFFFLRNMUHPXDWKQIKPMIEVVUPHLQEYXNPZLWNVMSNDUCEBCNRRQOTQYTGKSKS");
    msg.max.assign("XANEIULYYVGLHXGT");

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
    msg.setTimeStamp(0.2802139313951093);
    msg.setSource(27497U);
    msg.setSourceEntity(160U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(167U);
    msg.name.assign("QZZYCMGJMDTBLGSCCAYSVSIPUGSRTGMTQGIKVYVDUJIY");
    msg.attr_type = 73U;
    msg.min.assign("JEBXCEWJPHEOKOKIRZVIMAFHIODJNGMRXDYLABSGPMQNCVYHBTDUFANQTQSDHLATSIFLRGPQWJTXXSIAPRMRZUXQCKFZLFOUJXCLCCBONWHNPYAFZFWUQAVLM");
    msg.max.assign("NZRHCGUHHYMWEFEFEWGQVKPANVUXOKWW");

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
    msg.setTimeStamp(0.7778418329456996);
    msg.setSource(25587U);
    msg.setSourceEntity(227U);
    msg.setDestination(47289U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ZRWJLBDMJTMDTOGXUVNQYFKPIOCTBLCNQIOIKDUBKJUZUWNJXQUMDKNNYGZEPGHAULIXSFHXEYQAKXBRPFIEGRCZMJPHKNXPLOWISCUDPGAZVVICIVUNAWTBLZVRYWTOWCSCEXEZRVYVJTDHFMHMLYKSQMWAYOEMGAMBGDBQUOTODLLGZCBSWLNNPEFSSEHPCYYEPF");
    msg.attr_type = 188U;
    msg.min.assign("LLLGRBVNWPIFFRGGKJOCDXVHFCSHXUIIWMOVISVHTXWHUEWDPRJTIETNSQBRHGOJQKIEKYMJPTGYQSYUCPBLZTVZKAQEWSNAXELTZOUCDZOLFGQVGRAPNCAMZDNFKLLTOFYVQQPEWYSCZFWBNJRYWXMHLEPSISOKMXMUFRDNCWYOHTJWAKSCMMKDDUGHSDTPAXCBHQUZUDYZEARJAFMVYLV");
    msg.max.assign("EPJGTKBCLNVRJOKCGJWKAIJRHODLZSTZXYCMUQMCLXLLIMNGAZSILXHXRGPYHIYEDPFDGHCXHBJSVEKXQWOJPKLCNNWTBDJIWAVVBRYOHDVPOLJAQZSHZUXWHKWN");

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
    msg.setTimeStamp(0.5103980525727307);
    msg.setSource(14629U);
    msg.setSourceEntity(58U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("UPBFUKNNQGCWMOCAGFIZOYCFMLEOEOCAWUIDGPJPINWSYBEKFFXYZKRSCOJZWXU");
    msg.predicate.assign("KUODCJKAVKGQZGFWLOYOTVEIRJ");

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
    msg.setTimeStamp(0.22775431610097352);
    msg.setSource(49106U);
    msg.setSourceEntity(169U);
    msg.setDestination(1846U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("ZQYXFYRRWNEIWEBVQUCKWMATCRHLWGVKGAOFJIQJFQMVAOEITEGHINSJSFAPMICPCFJYCZNBPTPBIVNCXWZMVZPFWNEGGCVRIWKTLMVQSQAOUEQMSHDNSXCOSLBPXUJYYUDTXOKUBPMODYFHIDAIPDWZ");
    msg.predicate.assign("ISIRJVZUYRRMZIMHWDD");

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
    msg.setTimeStamp(0.4749270035802028);
    msg.setSource(10854U);
    msg.setSourceEntity(108U);
    msg.setDestination(24263U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("FOEEAECYQNUPHDQUHUTWSNCKYIQEHWEMMDVIRFGDPEBJBUFLOKQKLOTPLHGOBACZSUESVXMSROYARGARAVNEZMTAVXWLOULGNIPXSXMSVLFHTGOBZONDTZWBCJLWPVWMUKVUWCMIAJHDDBKGHFBRZBNVXMGGQRGKOKPWHFUNKYMIOGBYPPWDEYLIDTCHJTDRNQRUZJVFESYFNBQIILIJCHPXXYTXPTJMSVYJQCICZ");
    msg.predicate.assign("SPEHKVKNUMZCVNJBPLDYRNMYVPRDZNAYIFSAWWKBVVSMYLUGTIGYMFFYTFO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PJRMUKIMNCENEQKAUZMRVXSLFRTBUPIYXFEEQLPEGQKCGEVZLQYBAVNRYPWMKNNALELGCJHJOTMJSOKVTBZHOGNKNJQGDCNBPBLMEDPWWDVWIDLHRHTAWZMVTJFMTC");
    tmp_msg_0.attr_type = 13U;
    tmp_msg_0.min.assign("MRFJRXHUAGAHPLDHWMENRCTVGVDWQJTUFFBYVILMHMNBEVAZCGXXSFIZPLYLXEIIPFJIMEOFVTDYWCZMCQAEMKDRQBEJEQOAUWQJPOBNJOTVQYKINUXZYBXKRZPIARGSXDFSSGNAGIMGUTDK");
    tmp_msg_0.max.assign("TYIARELKCUONOTOKKTVKGMD");
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
    msg.setTimeStamp(0.38899619078671366);
    msg.setSource(6332U);
    msg.setSourceEntity(25U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("HFBAVOGOQCXYNXXDMBAEJDKOTQJWPNTRLVHTSWBKAELOVTNNLGEKXKGSJHMXBQGSQCKPKRUZJORQDWBBEMTMZFJHCGBXQPDWACQAPRFYYLXJDJWUIECCCLYYEGUWNUHOIFPHSIVETMFICVKNQFMIKSIIGUAINMYPWYXALUOTAHFVFAJOYZZELPJUCCTVQTKMZYDZXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RHBUTJWXLEXZJPSOKOFJHIHEZJGKMFDSHLPVMHHXKBISFJQWSTAEWVTIOMJFJQETFPGQFTNHNZQLMRZGVWACNCGNETDMRSQMNEYELOECIBEUIRPH");
    tmp_msg_0.predicate.assign("GGPXKDBBVCKTSOOJSECLBSEACAYNYEAHUXRPSAMIWPYOFWGZHNWRBHJFWFTQKPLXLKLDYOPZTCYFQNOXCIYHQBRDLGQGFVUJ");
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
    msg.setTimeStamp(0.9452170719584877);
    msg.setSource(45826U);
    msg.setSourceEntity(239U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(238U);
    msg.reactor.assign("JKHZAJCMTMNCAIVDKMKNFIHLXTFEFMNTGEQXYWGZSDBAUITFJAHVBGOUZGBLPQLCTMBDPSWRXLTTXRFMPIEPYMUYDNHHQAZODSPBJQIZYADTBZVJSUUEWFSANLIZRXVMSGJCNDBXSAKULROOPSVRUWVHOBQKFRTKYXGJHJPRTHWUHIUOZPZWKGCPYIOJKBNECQHXPOVWQMNQRRQYSOQEGYLIVFEFXNCWWNCXGLJCAR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UOIYCCWZXJQCVVGQBCRWLFZWSUYMHPAZDNPKMMCLGYDCGEVIEFXZOOXENAVASMMZDVXMZSNLZFTVEKOSHSHWFSETOUVKCXR");
    tmp_msg_0.predicate.assign("GBPPTABSAWXQMFMKZMMBFDNOFGFPDIXXORBIYFYDYJTRIAZNWBTJGPFVODAVJWGUOEWLXXOHKABHPKQSQCTUNORTJLRRRKXWBVEGOUCCEJZYWZDHZQOPFFYRITUHLSKSXFSMSSCWSQPEANI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EXGTCCWMZDYWQNCSXQZHZYRROQBRBBKPLFRWGEQHLFMYODQEXDBYGWWEAIMEIVYKYLIOZEQBXKRJAFVJVDRXLAXCIWGGGQUOCPDCTPBFTJSKMWSMR");
    tmp_tmp_msg_0_0.attr_type = 179U;
    tmp_tmp_msg_0_0.min.assign("SVQNLPRMZVDXQHSSKIIIPDTYDBGSDIDEPCANETHQNNZYRXXWAFAVRWLTLDUROQRVXQAWMPZLOVBHAMVUHVEJCYXPGULBOZCSJIJSGJMFZUUEQJOMVCNFUZGWKNODLE");
    tmp_tmp_msg_0_0.max.assign("GEVEKFXUBOWOAMAJBCLXGYSSPWLPSQYMIYHSQQBDIKRBCSRVLNVZGWUVJHBQRVYDRETHUNAWNXHBCUPPVGLKYOJKQNH");
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
    msg.setTimeStamp(0.4947476437235301);
    msg.setSource(37476U);
    msg.setSourceEntity(48U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(57U);
    msg.reactor.assign("BVQSCYELMLLRTMADISKKSCFQIOUARNQQOTSGSDCFWWAOJI");

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
    msg.setTimeStamp(0.6086309837943296);
    msg.setSource(50503U);
    msg.setSourceEntity(190U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(64U);
    msg.id = 98U;
    msg.width = 52022U;
    msg.height = 58732U;
    msg.widthstep = 15563U;
    msg.channels = 195U;
    msg.depth = 214U;
    msg.finaldata = 149U;
    const char tmp_msg_0[] = {-98, 93, -32, -78, 102, 111, -40, 119, -95, 116, -52, -128, 64, -92, 35, 77, -107, -91, 39, -47, -117, 84, -80, -22, -24, -31, -1, 103, -47, 62, -122, 22, 70, 109, 28, 83, 57, 29, -117, -92, 13, 85, -90, 47, 34, -83, 15, -53, 12, -121, 4, -91, -59, 44, 102, 47, -93, -100, -62, -118, 10, -93, -19, -43, 75, -63, 48, 59, -63, -39, 113, -91, -6, -92, -24, 88, 106, 27, 46, -74, 125, -30, 107, 82, 33, 34, 70, -34, -44, 124, -6, 28, 38, -73, -39, 42, 92, -24, -112, -43, -99, -55, 97, -29, -43, 62, 28, 66, 22, -74, 77, 20, 95, 37, 5, 11, 18, -106, -54, 71, 112};
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
    msg.setTimeStamp(0.11466014988301121);
    msg.setSource(34605U);
    msg.setSourceEntity(13U);
    msg.setDestination(22767U);
    msg.setDestinationEntity(21U);
    msg.id = 234U;
    msg.width = 3366U;
    msg.height = 35917U;
    msg.widthstep = 17275U;
    msg.channels = 244U;
    msg.depth = 127U;
    msg.finaldata = 143U;
    const char tmp_msg_0[] = {60, -32, -128, 78, -94, 64, 42, 80, -124, -11, -5, 107, 23, -110, -105, -19, -56, -9, -106, 48, -50, 88, -37, -87, 104, 116, -55, 54, 57, 46, -119, -96, 74, -74, 90, 21, 110, 40, 102, 90, 60, 93, -84, 125, 59, 68, -26, -104, 79, 3, -42, -115, -35, -51, -51, 90, -80, 115, -95, -36, -66, 18, 10, -126, -42, 124, -121, 82, -45, 62, 117, 89, -121, 53, -66, 38, 74, 126, 13, 55, 66, 81, -89, -105, -90, -54, -125, 52, -56, -126, -33, -88, -123, -58, -110, 24, -42, 39, -93, -105, -126, -44, -2, -86, 114, -65, 6, 10, -84, -68, -85, -74, -105, -32, 46, -31, -32, 109, 25, -112, -96, 98, 53, -87, -6, -95, 110, -3, 87, -55, -46, -109, -70, 125, -11, -38, 74, 29, 79, 117, -126, -85, -115, -42, 13, -68, -123, -66, 48, -104, 112, 91, 96, 42, 81, -85, 34, -102, -124, -88, 118, -3, 49, -3, 60, -30, 60, -12, -80, -109, -71, -110, 88, -50, 81, -85, -1, 54, -13, 105, -77, -21, -107, -87, 3, -35, -64, 116, 43, -100, -8, -106, -56, -1, 125, 115, -95, 81, -46};
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
    msg.setTimeStamp(0.8792068838009144);
    msg.setSource(36713U);
    msg.setSourceEntity(203U);
    msg.setDestination(4605U);
    msg.setDestinationEntity(207U);
    msg.id = 163U;
    msg.width = 31159U;
    msg.height = 62415U;
    msg.widthstep = 32553U;
    msg.channels = 224U;
    msg.depth = 122U;
    msg.finaldata = 111U;
    const char tmp_msg_0[] = {-118, 78, -50, -49, 56, -56, -25, -115, -58, -105, -3, 122, 12, -106, 91, -68, 80, 21, -65, 59, -17, 65, 51, 68, 105, -48, -111, 13, -55, 92, -108, 3, 36, 77, 20, 43, -98, -7, -102, 55, -76, 59, -27, 16, 101, 120, 6, -64, -28, -112, -127, -17, -38, -128, -100, -107, 94, -122, 51};
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
    msg.setTimeStamp(0.2816802603109416);
    msg.setSource(38794U);
    msg.setSourceEntity(186U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(72U);
    msg.width = 64348U;
    msg.height = 57441U;
    msg.channels = 48U;
    msg.depth = 161U;
    const char tmp_msg_0[] = {77, -59, -112, -36, -93, 22, -118, -89, 34, 50, -37, -125, 48, 118, 91, 18, 6, -107, -73, -96, 8, 12, -128, 47, -96, 20, -89, 0, -110, -125, -40, -96, 62, -14, 86, -84, 83, -73, -54, 93, 105, -57, -63, 30, -13, -65, 21};
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
    msg.setTimeStamp(0.8308972590001623);
    msg.setSource(27483U);
    msg.setSourceEntity(173U);
    msg.setDestination(58254U);
    msg.setDestinationEntity(140U);
    msg.width = 21900U;
    msg.height = 65083U;
    msg.channels = 75U;
    msg.depth = 249U;
    const char tmp_msg_0[] = {-76, -22, -53, -19, 53, -32, 56, -33, -8, 121, -16, 71, 32, -34, 95};
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
    msg.setTimeStamp(0.3730372818976645);
    msg.setSource(35048U);
    msg.setSourceEntity(26U);
    msg.setDestination(3849U);
    msg.setDestinationEntity(208U);
    msg.width = 22533U;
    msg.height = 3260U;
    msg.channels = 167U;
    msg.depth = 201U;
    const char tmp_msg_0[] = {-54, 85, -46, 26, 41, -73, -41, -3, 69, 58, -122, 41, 86, -75, 70, -6, 34, -28, -39, 125, -55, 74, -52, -98, 61, 24, 19, 52, 50, 49, -45, 76, 67, 53, 68, -117, -92, 4, 104, -48, 31, -11, 38, -7, -66, -28, -10, 106, -13, 64, 56, -102, 115, 60, 100, -15, -9, 3, -112, 113, -109, 112, -49, -38, 47, 93, -52, -29, -120, -84, -97, 15, -112, 105, -71, 71, -11, -127, 51, -116, -21, -20, 63, 96, -115, 10, 53, -6, 8, -108, 42, -127, -122, -2, -113, -96, 53, -77, 28, 124, -45, 3, 99, 64, 18, 48, 47, -40, -124, -5, 50, 79, 92, 37, -90, -75, -97, 72, 35, -39, 74, 96, -30, -101, -16, -30, 44, 92, -122, 10, 50, -9, 126, 106, -83, 99, 12, -57, -48, -100, -35, 47, -99, -43, 45, 87, 63, -88, -9, 110, -35, -79, 95, -51, -11, 82, -58, -98, -128, -19};
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
    msg.setTimeStamp(0.8587079166332863);
    msg.setSource(8347U);
    msg.setSourceEntity(84U);
    msg.setDestination(19776U);
    msg.setDestinationEntity(24U);
    msg.frameid = 38U;
    const char tmp_msg_0[] = {-46, -112, 51, 70, -60, -108, -74, -82, 57, -110, -7, -71, 6, 93, 87, -5, 1, -87, -90, 105, 50, 18, -15, 111, -82, -74, 113, -93, -43, 23, 126, 0, 30, 36, 17, -52, 71, 117, -88, 22, 74, -94, 126, -85, -86, 91, -122, -14, 26, -90, 119, 89, 126, 3, -53, 30, -121, 114, 8, -124, 71, -48, 123, -57, -12, -52, -74, 100, -107, -118, 14, 50, -102, 25, 119, 43, 31, -23, -75, -101, 126, -4, 124, -76, 83, -40, 94, 88, -32, 123, -24, 48, -15, 35, 84, 23, 117, -7, 32, -79, 65, -55, 24, -100, 9, -100, -5, -58, 77, -84, -80, 39, 88, -41, -74, 87, -41, 34, 53, -109, -66, -71, -78, -33, -65, 48, -65, 57, -122, 55, -76, 43, 70, 55, -118, -63, 14, 95, -81, -98, 52, 30, 53, 2, 16, 62, -104, -22, 27, -100, 68, -61, 100, 117, -6, -93, 111, 109, 93, -68, -74, -89, 85, 105, -116, -56, 0, 123, 71, 89, -106, 85, 47, -11, -55, -127, 70, 28};
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
    msg.setTimeStamp(0.7530876940500683);
    msg.setSource(56019U);
    msg.setSourceEntity(149U);
    msg.setDestination(62079U);
    msg.setDestinationEntity(56U);
    msg.frameid = 236U;
    const char tmp_msg_0[] = {3, -25, 75, -75, -30, 12, 63, -32, 83, 104, 19, -79, 89, -52, 125, -106, 52, -97, -103, 25, -1, -111, 21, -54, 22, -2, -55, -10, 16, 51, -4, 79, 6, -82, 97, 4, -115, -99, 39, 90, -3, 118, -23, -77, 1, -95, 91, -116, 114, 44, -76, -117, 68, 20, -89, -112, 109, 44, -57, -23, -114, 36};
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
    msg.setTimeStamp(0.5300006274721313);
    msg.setSource(56382U);
    msg.setSourceEntity(130U);
    msg.setDestination(14111U);
    msg.setDestinationEntity(4U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-87, -84, -77, 103, 104, 104, 123, -96, 66, 107, -62, 102, -87, 74, 77, 97, -52, 14, -19, -12, -61, -36, -66, -118, -72, -1, -21, -35, -52, 7, 126, 57, 43, 66, -51, 58, 3, 30, 13, -4, 16, -59, -68, -3, 109, -113, -42, -11, 107, -74, 71, -33, -51, 105, -14, -8, 57, -18, 5, -120, 78, -49, -22, 17, 38, 83, 26, 52, 62, 110, 101, -77, -55, -43, 54, -123, 67, 96, 23, -56, 39, -85, 34, 25, 78, -15, 62, 54, -53, -123, -59, -13, -67, -113, 22, 35, -81, -119, 110, -11, -18, -8, -6, -1, -68, -67, 68, 89, -117, -26, -57, -121, -101, -17, 71, 83, 77, -29, 52, 33, 75, -48, -97, 86, -1, 76, -128, 104, 119, 69, 68, -9, 21, 12, 22, 118, -29, 104, -29, 121, 37, 12, -93, 120, 20, 96, 39, 81, -104, 60, -123, -5, -107, 36, 22, 16, -100, -56, -122, 0, -15, 78, 114, 96, 114, -38, -35, 124, 62, 76, -30, -71, -110, -85, 77, -120, 114, -96, 66, 82, -7, 70, -47, 96, -47, -117, -43, -53, 45, 124, 108, 13, -116, -20, -45, -50, -84, 5, 80, -78, -82, 98, -40, -62, -94, -10, 116, -102, -66, 23, 36, -68, -109, -11, 117, 113, -98, 23, -71, 93, -51, 27, -96, -127, -119, 17, -83, -60, -31, -47, 15, 118, 74, -41, 44, 53, 37, -59, -59, 51, 37, -47, -117, -118, 121};
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
    msg.setTimeStamp(0.018681842317075814);
    msg.setSource(50031U);
    msg.setSourceEntity(54U);
    msg.setDestination(55034U);
    msg.setDestinationEntity(39U);
    msg.fps = 134U;
    msg.quality = 149U;
    msg.reps = 148U;
    msg.tsize = 246U;

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
    msg.setTimeStamp(0.28494610850748925);
    msg.setSource(14431U);
    msg.setSourceEntity(199U);
    msg.setDestination(11978U);
    msg.setDestinationEntity(64U);
    msg.fps = 182U;
    msg.quality = 244U;
    msg.reps = 9U;
    msg.tsize = 3U;

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
    msg.setTimeStamp(0.0979100317812781);
    msg.setSource(28104U);
    msg.setSourceEntity(190U);
    msg.setDestination(4666U);
    msg.setDestinationEntity(95U);
    msg.fps = 37U;
    msg.quality = 2U;
    msg.reps = 30U;
    msg.tsize = 104U;

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
    msg.setTimeStamp(0.7168300760462764);
    msg.setSource(12358U);
    msg.setSourceEntity(225U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.06395908612541246;
    msg.lon = 0.8525357625241526;
    msg.depth = 141U;
    msg.speed = 0.19692514431029862;
    msg.psi = 0.8883498211247509;

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
    msg.setTimeStamp(0.27570949249569254);
    msg.setSource(49083U);
    msg.setSourceEntity(229U);
    msg.setDestination(16335U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.1070038125841033;
    msg.lon = 0.37920098662051527;
    msg.depth = 28U;
    msg.speed = 0.5041335263632604;
    msg.psi = 0.7260764053851052;

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
    msg.setTimeStamp(0.0720344614226841);
    msg.setSource(47541U);
    msg.setSourceEntity(195U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.6878648735184487;
    msg.lon = 0.3680090896835856;
    msg.depth = 90U;
    msg.speed = 0.8734249427914687;
    msg.psi = 0.9994405135350523;

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
    msg.setTimeStamp(0.09077151228263991);
    msg.setSource(8936U);
    msg.setSourceEntity(150U);
    msg.setDestination(10204U);
    msg.setDestinationEntity(33U);
    msg.label.assign("MRJIYUUNEZGPANYWYHTMNQJVJOWQLXYQMZVRBKGWKWIBCCRQBNJAFJBZDEIEPLESXIICUHNSTZHMKRPPSVHYYESQXBRFOMWIJYEOWZYEITUSODTOTGUJTMHKDPXVQAXFZO");
    msg.lat = 0.8088989981597331;
    msg.lon = 0.37583727482041174;
    msg.z = 0.16853108213062795;
    msg.z_units = 238U;
    msg.cog = 0.18069475241174493;
    msg.sog = 0.17734888829657902;

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
    msg.setTimeStamp(0.9047671860830805);
    msg.setSource(11165U);
    msg.setSourceEntity(243U);
    msg.setDestination(34613U);
    msg.setDestinationEntity(59U);
    msg.label.assign("AZTDIVNXHWPHLKKNPSKTHUDJSAUWLWMXJFGKSRLLWUKHFJLFTZFVWIFQUHHRKPYXSBBCGOQNXITCEJPSZAPQXMRAYFVMOXCLEUMKZPV");
    msg.lat = 0.31957865667065977;
    msg.lon = 0.6262356695195253;
    msg.z = 0.34492353252528574;
    msg.z_units = 26U;
    msg.cog = 0.3549659277423396;
    msg.sog = 0.3058456930359227;

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
    msg.setTimeStamp(0.24588434665706216);
    msg.setSource(58346U);
    msg.setSourceEntity(83U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(64U);
    msg.label.assign("EJFGBXRQFRKBYNLHTETNBPLSSMBHKWDJTMPVSRAMTMLYOLDRJHW");
    msg.lat = 0.8839937584110447;
    msg.lon = 0.32193828420809845;
    msg.z = 0.6487290664860874;
    msg.z_units = 209U;
    msg.cog = 0.5680800671344777;
    msg.sog = 0.6750829024270366;

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
    msg.setTimeStamp(0.8988999851625119);
    msg.setSource(34309U);
    msg.setSourceEntity(216U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(196U);
    msg.name.assign("DHXWKGDWMZQBOQYPXVEQEFBEBINUYCPSRQKMMAMJZMZORCGXFQUZJZSJIRFZRATULIEELQ");
    msg.value.assign("KLNEMRAPWLYYKBQOXWYILIWIQHOMXRDAXUBHDWORSTFCDSMQGIBALMVCXEANPOHSLQVGVLCZRGWJJFAVKNOTRUIQSFMPPEBUAKMZOKGEWNAGQHJSVXSTJYSQJCPBZWXLXOBDGPVKEBYTOZHRJCYUXNFGYLXNURUSKHENFTCYUNDADOXIN");

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
    msg.setTimeStamp(0.9618602274191671);
    msg.setSource(10542U);
    msg.setSourceEntity(74U);
    msg.setDestination(52512U);
    msg.setDestinationEntity(85U);
    msg.name.assign("ZMZZSIBZGMRNTDKWRZGMPNIJTCKYIOPYJDQOKLXOVXMAKDXBMJMGCDWSSP");
    msg.value.assign("MCFRMHYMEZWKM");

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
    msg.setTimeStamp(0.04142186497103095);
    msg.setSource(61312U);
    msg.setSourceEntity(172U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(192U);
    msg.name.assign("SXZLKTVOGANGDOSHOYHCHSCJECCWCDBLZVWKCVJWHBYSAROIYDPFIEYYXXBADUVOFPRCPPNIVOWLLALB");
    msg.value.assign("JVCUXDCAFMDEUXEGEERDJRLPKUQGWUVWWRGWYAYIEFRUBCOAQJPZOHLQBPTTOENWNRAAXVSQKBBTCRXHSKHLBWTYSSTDFOKVFHRPNYZSNJCWISLOSGB");

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
    msg.setTimeStamp(0.978291449538541);
    msg.setSource(7240U);
    msg.setSourceEntity(124U);
    msg.setDestination(64455U);
    msg.setDestinationEntity(0U);
    msg.name.assign("TNOKUWDYBPQKUZZLFXVGPIODPCQBFEGUVWCWAGHRLIEOLBYEPIPEQCSVZERAEQAGXMAUFSIWDOKLCKXHMJQTPWKNMZPX");

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
    msg.setTimeStamp(0.7144392309154991);
    msg.setSource(33843U);
    msg.setSourceEntity(183U);
    msg.setDestination(19031U);
    msg.setDestinationEntity(161U);
    msg.name.assign("HUMLTTCWNHLNEDSFLAOSRAQHQZEUNYQWJPBSUUEOYVSKOVOTLSDSUUKDQIRQNTKHRCZHIDNFCXWVDFNFNKZMAPARNIRZSMYXWGAAROUIESYIFHCYKTJXJJBRGJYEWIAKVWVYYACEPBGZVDDILPBHDQXSSQPOEJG");

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
    msg.setTimeStamp(0.8240989158339821);
    msg.setSource(63017U);
    msg.setSourceEntity(74U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(83U);
    msg.name.assign("UFJESEKYCYCAHVUVLUFIVULXJRUJQLMYDFOGZXJEBSGTZECFIATBCYMYJYQEBDMHKMXUNRDWPAECOHIHDAAN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BWOSXVOZTKQEWYFVRCVCZMYOZHSLJRSGTZYDYNNJYNAWMSBEWPUHMTXXRUQQAZVFBDDLASAFBRJHLIONKURGQJYQNKAQJZCPOMCJV");
    tmp_msg_0.value.assign("IUIROCFZKMTLJVGRTMHTIECXIOICKQRLOMMUMNYHVSSFONDLAQDDGYBJWXPVXBLDOAHSAAIBRRFJFPJBZPKEMUPHWBGARPSXYZFOEQAGYWALUQZBQGCTNHLJHIBXZTC");
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
    msg.setTimeStamp(0.22264765851002133);
    msg.setSource(12683U);
    msg.setSourceEntity(116U);
    msg.setDestination(41655U);
    msg.setDestinationEntity(207U);
    msg.name.assign("KBMBOSYNWWSASJKIZVYSWMKVBKWCNQYVRHPIDDTQYMCTHSZFUILGLUHNKKHSWYATZDCGQWVXPGWUSULXUJGCUEJIHTXDDCDGXPGEXLAGNFOROHEOZIEVOHRFJOUAJQKNOPIPCYTQYUTNTPVZZOXDMZBNFAXFCIB");
    msg.visibility.assign("QYMQXMACYAZITZN");
    msg.scope.assign("JJPQGUNJDANMDFIVERAQTMDEHB");

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
    msg.setTimeStamp(0.46910859285204487);
    msg.setSource(62537U);
    msg.setSourceEntity(23U);
    msg.setDestination(40527U);
    msg.setDestinationEntity(134U);
    msg.name.assign("PCLNGSUKAFJURTLATAPWATBAKCQOMCWPPWDRMNYGHQAIDLVTQQKMOWJSFBBWGFOZGIOUHGNKCTIDQUZWRIHFGBEHKSZMOSEKJEXPINKSNSHNMZCNXSHZLRHDUSHUVCDSKGXFYKHWELFBYCOUYEAMPYYXZVJLBITXYXNIMYORUVTJBBWDYUPZKGAXJWNZOHRVTTMQNPVXDGFYZEIOVEUTDCBPRFLXDSVQDALQ");
    msg.visibility.assign("ZTPEFSOXLPTMBXSDCLEEZXRSVCFTUMPRGJJCOKLOWDCUMLKRGUYHEDWARJWRAXOMVPS");
    msg.scope.assign("BOCNKYUABJSDMHOXPVHBNTIGHRUDCPVLVQRZ");

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
    msg.setTimeStamp(0.4144822037163707);
    msg.setSource(21465U);
    msg.setSourceEntity(62U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LJIXQZBKXSTIUDMTAFQGWSMJRYRXBDFCNTHNONIQMMQEFQWMDHMBYUZCHRWWTOTPVECFQDBBAMXEDPNFRZLDDZRGVSSFYLJHZDWIXYBAXNLIUJAKTLKKKAGWNIPSYVOMPSOVFESUZGWXAYDXKREGGBGJEJEKAP");
    msg.visibility.assign("JOLXRQFMJBGPPLOMSOCBNPVLKRTVEZJLYLOATWFYWAELYNEHRCLQCAOHCBMKYZZTZBEUNBKXBURANSJZIDNTPITRYAQAZRIW");
    msg.scope.assign("LQZVGELZUXYYIEJLPOMGNGDBLQCQWYGLFPHDLGCQRWAUTVASZHLCMXPKPEJCKKCVFISXNTSICNXJJTRUHDKBCRAXNROYGDFMDPZRBHHQEBVAQJDKAYWZAVXQBNMWFMFIWUPV");

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
    msg.setTimeStamp(0.7352005877160029);
    msg.setSource(42445U);
    msg.setSourceEntity(252U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(171U);
    msg.name.assign("COZZNTMMHGHJUJOFRGCESFZUAMUQRMVACULQWEKAFAPXTMNHVWKDQOKBIVCDMZJCUQVEZZPHXYTJRMSECGXBPILWKYLTYUGHTIRWHQDWTYJFJSFDXDHFRBGPKBQPIZYJCKWLCERUSDKYQPSHIRAZSBRGUBOBVEKQNNFAUHZONNDPYGJSBTEDZFGQXAVPODKQYWXELVEXS");

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
    msg.setTimeStamp(0.06497283320260872);
    msg.setSource(14276U);
    msg.setSourceEntity(137U);
    msg.setDestination(25846U);
    msg.setDestinationEntity(2U);
    msg.name.assign("KVCEKGVFIHXDCTBGBSNESHFBDJTRBEHNKLHRAIMJDOUDNZYZUQRRCYDLMPOWEVYGLEXHPSVERZXPNSLJCYIBMBUEEMURHYSCIPNFTTWXQMQZRRULQXWKSJXJXQUUQYXJHGOFJGAIBTYQVGHOIGCIGWSCOGKMMHMSAWDEAAXBPBFMSKPKR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KDICPKKBTVNFAIBHCDFLZMIORUONHXEPWOZRDTANXWTNCCUCVJAWQDOFFZPQLFKEADTVXYGDVZJNPYLKMRGYQEMFLOOJSHQHNHSBGAUMTUYZMWSGHLUEGRXJSOCDQAEJKBMHBXSCUBLITLSORLJKXYBYPVCGEEQOLHZNIBAJWVIRANYFQNZTYY");
    tmp_msg_0.value.assign("YFJQHHBIFDZWHFRXWJBLEKWOCRVTZJADGQNHGDXAUMFIGWTSYOTRBKXRYIPIZOUPNGAUPELYYGOFCTKLBHEUMPGECNEMBQONSPJEMWLYBKZUXQHHCQWIFOMLAXKKNSLGTMZTARFUYIPIQNOZSDRVFJZNABUUUKTDLAQKCSPCSBLIVVDANRPETLJCWDPGWSCRVHMPXOTXVLCYDSWQREONSYZVAHVVD");
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
    msg.setTimeStamp(0.5511101452743363);
    msg.setSource(5255U);
    msg.setSourceEntity(142U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(250U);
    msg.name.assign("KZDFEKHEULJLDNWFKXOKYBENJQNZMVKSPWJUQPRDVZWGGAEYYGJQZBLJPXBDTEAVHEQAGCWEXGAOIGTRMSCOJYCLOTHSORUGUBRPYPUQVOSKXFCWCFSAPSXJMZGHHDKCKAXHZTBPJBJBUUMTKBWPVXDOMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FMLGNFRQTXSLYDNYWHJFEEYOSZWCVIKEIVLIMMVIJHOYNLUITSWSGUHDFZVJGYVOCBDHPIMWIXNBAAJVCOTEHNWMIATKKKKBJLQUPDOTQBYZPAQVUBAURTPIUXSXXQGGBESTFJRDWXCRFJAMKYXOXMOXQLMHNQGCDKNJPAHZGRZGZHUJDONCPVZFQSFLCPPUZAEWHRTWUDMYBADYBGORWHUVEBREPVNC");
    tmp_msg_0.value.assign("VHHIIZLVTBZUGWDPHNYLJ");
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
    msg.setTimeStamp(0.1043170594125784);
    msg.setSource(25077U);
    msg.setSourceEntity(19U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(106U);
    msg.name.assign("YNBXOAALAIRLFNAZHORJNOZNEXXBKRZMILTGONMSQLCPLKMQXFDWLMIESQZUINGNQQJHJVYBJTHIUME");

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
    msg.setTimeStamp(0.9276576740711127);
    msg.setSource(31330U);
    msg.setSourceEntity(154U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(145U);
    msg.name.assign("AMXSNLAPCLUBUDWUVIMDJKQPFTFPRBK");

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
    msg.setTimeStamp(0.1225440235925842);
    msg.setSource(54501U);
    msg.setSourceEntity(122U);
    msg.setDestination(17246U);
    msg.setDestinationEntity(66U);
    msg.name.assign("FBOFAATONVWNVULUXBQKFONHBPPDFBMGACKMATCKWGTBTHMWUHFYEJSIARZUGDLQIJILDQGXJQCSPGKDIGHEKMDXYSJTNECGVCPRDPGLDOZLVQEWMNYZJKMZNHLUHXSAVLNHHERYLWXCSQXZTKONYRKAEZROWWSVVWECBYGTYWRQIYUIUYSLZCJVFBPHEXMXZZNKJJRFXBBDCARFSMBAFVZPOJ");

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
    msg.setTimeStamp(0.6083477785712678);
    msg.setSource(14793U);
    msg.setSourceEntity(1U);
    msg.setDestination(59081U);
    msg.setDestinationEntity(25U);
    msg.timeout = 3622171143U;

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
    msg.setTimeStamp(0.3392237680337037);
    msg.setSource(16326U);
    msg.setSourceEntity(26U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(191U);
    msg.timeout = 315368065U;

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
    msg.setTimeStamp(0.20076992659762682);
    msg.setSource(33033U);
    msg.setSourceEntity(61U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(16U);
    msg.timeout = 1718459625U;

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
    msg.setTimeStamp(0.6313817247471674);
    msg.setSource(13974U);
    msg.setSourceEntity(194U);
    msg.setDestination(37369U);
    msg.setDestinationEntity(15U);
    msg.sessid = 2582608039U;

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
    msg.setTimeStamp(0.615287465674511);
    msg.setSource(8285U);
    msg.setSourceEntity(129U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2387651356U;

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
    msg.setTimeStamp(0.24485507030494214);
    msg.setSource(20654U);
    msg.setSourceEntity(191U);
    msg.setDestination(3121U);
    msg.setDestinationEntity(115U);
    msg.sessid = 1662608027U;

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
    msg.setTimeStamp(0.1765693732145851);
    msg.setSource(33830U);
    msg.setSourceEntity(253U);
    msg.setDestination(29025U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1926986826U;
    msg.messages.assign("WQZBSPWICRMCXBFWJCFRZJCVNYIDZVNHPNHAEUQFLBUAEMZXQMCEHDATUAUPRIJUBQXJMNJUWDIIWJYCLRLBVVBMVZOKQPGAGMTXRKSZEYSPZGWLYNIHUGCWTKOKCDPSUWODQPHOAXDQAGM");

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
    msg.setTimeStamp(0.7820307276316838);
    msg.setSource(59177U);
    msg.setSourceEntity(124U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(252U);
    msg.sessid = 1146707471U;
    msg.messages.assign("WLDPLSKUKVHKJUNARIYPSXELDZVZVBWVGWPQZEZBCCSSOFZGYPNOIXHUABDWFEVBMWAJHIBYUNONXHGJSMJZAUGUHRGKNTHATLRTNCODWAXKSYWQDIQKEVIWUNERLTAOPDVISXTBFNZQMTFGGN");

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
    msg.setTimeStamp(0.7328263108185649);
    msg.setSource(57257U);
    msg.setSourceEntity(146U);
    msg.setDestination(25822U);
    msg.setDestinationEntity(42U);
    msg.sessid = 2432236642U;
    msg.messages.assign("UWJMLHDXPFTKWVYMMDOTCSXUFAWRSDIFLJFJQUKCRXBAMQGFDKMGPQHRCEOZCXKLFNOAEMRFYNNVBZUCVOLRUUWSTTDQLNRSPOHKWGYNTBDKBWYZZDEGZLRJZJBPVMTNUVEANARHHXWYOHIXJIV");

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
    msg.setTimeStamp(0.58809723295143);
    msg.setSource(8670U);
    msg.setSourceEntity(62U);
    msg.setDestination(3212U);
    msg.setDestinationEntity(133U);
    msg.sessid = 2137800681U;

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
    msg.setTimeStamp(0.8550176636834256);
    msg.setSource(64366U);
    msg.setSourceEntity(146U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(185U);
    msg.sessid = 940294453U;

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
    msg.setTimeStamp(0.9776122645723496);
    msg.setSource(6650U);
    msg.setSourceEntity(231U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1784143432U;

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
    msg.setTimeStamp(0.21510891387731668);
    msg.setSource(63910U);
    msg.setSourceEntity(44U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(223U);
    msg.sessid = 3662784174U;
    msg.status = 48U;

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
    msg.setTimeStamp(0.21588866371683302);
    msg.setSource(23634U);
    msg.setSourceEntity(104U);
    msg.setDestination(37431U);
    msg.setDestinationEntity(39U);
    msg.sessid = 2006079766U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.7583026682829752);
    msg.setSource(19510U);
    msg.setSourceEntity(115U);
    msg.setDestination(1084U);
    msg.setDestinationEntity(197U);
    msg.sessid = 867925128U;
    msg.status = 65U;

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
    msg.setTimeStamp(0.5472577994942481);
    msg.setSource(52218U);
    msg.setSourceEntity(146U);
    msg.setDestination(27307U);
    msg.setDestinationEntity(12U);
    msg.name.assign("AKQUSIJRAEGEDRIBVXRCCHMTCMFOOVMXLKTZSKSMGEWXIKNCBUGYVAQMXWTDDSNZDRLTJOVPMVTNHWWMGMYLVPEUEYABPPHGCBNIOENBPEPDSHOXDHLNQLZIJOMJZTWZXVBUSWUZPEPJNGNHBWWAMCXBTOYIJRQJUJAEFPTXZYKGFFBQOQWSOIFTCDVIQH");

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
    msg.setTimeStamp(0.03285432228910845);
    msg.setSource(50248U);
    msg.setSourceEntity(5U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(165U);
    msg.name.assign("ACQPGBBHNCNKCYIOJZGTZEDTNWSLXLDKZLSMLKVUPINPUCRTONLKPFCGELZXJEDYYXMXCRPMQWWFRQGDQCPWGBYRUIMTAJQJR");

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
    msg.setTimeStamp(0.9194560405835864);
    msg.setSource(60036U);
    msg.setSourceEntity(232U);
    msg.setDestination(26710U);
    msg.setDestinationEntity(9U);
    msg.name.assign("LQWVNLBICEFNQXSDRAPTTDTKLLPWCVASZJIVDFSELJPQMPPCYSCRNOUWCHJFVYUODOZUAHOTALIJPRFPKGWLPGCOJSZXJAQGARHKWINCUHOIYLMVCWDDQCMOTMSXGJAHZFCROINRVNTWIUDPMGGKLUBXWURVYSVHSYDAUHSMWNEHEBKZRXJYQBZXNFKLBQZGKBGXQPV");

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
    msg.setTimeStamp(0.8073814078299959);
    msg.setSource(9977U);
    msg.setSourceEntity(205U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(140U);
    msg.name.assign("HKSGARZKVBCHWOJPMTDCOVLCBIHGVSBLNEEVSJZADIXAMQABRPRHRUBLJNLDAJRIKGTUKTZQPIRLXNFSZFKEIAVVNFDYENIW");

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
    msg.setTimeStamp(0.8004395233286431);
    msg.setSource(15743U);
    msg.setSourceEntity(14U);
    msg.setDestination(13187U);
    msg.setDestinationEntity(25U);
    msg.name.assign("OVPHBKOIBY");

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
    msg.setTimeStamp(0.47782430324780123);
    msg.setSource(18840U);
    msg.setSourceEntity(112U);
    msg.setDestination(39295U);
    msg.setDestinationEntity(120U);
    msg.name.assign("VZWKKWLFXEIFQJTRDXAQZAZVFCPQTFOBMSIMCXHHMDUZJODHWVLNDBSPBYUMWRRIEXPVNNXXEOHSSABYSDYYLYCNIUIEPCEZWKFPTUWPBNKQZEASMKFQBNRRGESRXGJBHJALAJNDOSTHVOPX");

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
    msg.setTimeStamp(0.8205697440450181);
    msg.setSource(6495U);
    msg.setSourceEntity(219U);
    msg.setDestination(21664U);
    msg.setDestinationEntity(135U);
    msg.type = 207U;
    msg.error.assign("GNHHELQMKFUMAAZXXCGDMITUQPZNDFBVGXOWCUADQRDKYVPSUBPPFTUMTEVAJXGTSNICHGIPKELKCACZEOVBILSAGMHMXAHEYKNBBLFBLYNVIPSCTMNYOZGKWJPHVXWOBLICTWDQTJUUKWEJSXERWPYRBVYKARHJOJDRVRCFDIRFFZZZGKUSKRPICASSNVSINOLHUJBDODWOCXWMQWFRUJBXQTZNYXWMED");

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
    msg.setTimeStamp(0.4603230807833385);
    msg.setSource(40138U);
    msg.setSourceEntity(230U);
    msg.setDestination(1963U);
    msg.setDestinationEntity(250U);
    msg.type = 165U;
    msg.error.assign("NLKFXAXWQECDNXPRTUCSXVRBZNDOBHJTILSKUREZGVVLTJYWYBEXGZCNIDPVOANYWPYW");

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
    msg.setTimeStamp(0.29110152042382365);
    msg.setSource(983U);
    msg.setSourceEntity(227U);
    msg.setDestination(5008U);
    msg.setDestinationEntity(18U);
    msg.type = 219U;
    msg.error.assign("AIRCRYVOQKGKZGTDXBJEIVFSWFPREFWKWWI");

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
    msg.setTimeStamp(0.10936032901717352);
    msg.setSource(26470U);
    msg.setSourceEntity(149U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(116U);
    msg.seq = 18079U;
    msg.sys_dst.assign("KGTIXXFMBMOCAEOKPWCFUMRMIJXSHUKDEKGVJIHWY");
    msg.flags = 227U;
    const char tmp_msg_0[] = {54, 32, 82, 99, -111, 102, 124, -31, -37, 41, 23, -114, -96, 19, 34, -18, 6, 75, -95, -56, 90, 37, -81, 65, -48, -110, -48, -125, -106, 114, 15, 23, 30, 82, 74, -59, 63, -58, 77, -126, -30, -28, -72, -106, 59, 62, -83, 62, 111, -82, 65, -101, -109, 60, 39, 35, 12, 22, 123, -37, -64, 115, -66, -113, -107, 54, -45, -38, 21, -56, 45, 54, -38, -58, 65, 111, -89, -43};
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
    msg.setTimeStamp(0.18394485796191573);
    msg.setSource(49178U);
    msg.setSourceEntity(226U);
    msg.setDestination(341U);
    msg.setDestinationEntity(121U);
    msg.seq = 23285U;
    msg.sys_dst.assign("TROZPEYVKOVJLNFLPSUDCFEJNRCNOPHWMBKNNGUEUVQCRPHYRJQMIRFQTYFDKTWGSYBKEQXISUBMGJDRQKEOFSNUCMCDUJIXAKMXGHTFDEMWZLKQIRASXJAQXOGAIPZVHZPCQDPVNFEMARUGWZIVFYCMCFEJDATOTNEPJUFVGIVTOUAGJMYZTSZNPTZUEDYO");
    msg.flags = 158U;
    const char tmp_msg_0[] = {14, -112, -71, -81, 103, -50, -72, -119, -92, 44, -42, -74, 123, -105, -97, 73, 90, 12, -26, 82, 56, 100, 29, 23, 92, 60, -91, 14, -124, -70, 38, -6, 77, 22, -45, 86, 52, -76, -127, 50, 40, 58, 125, -101, 58};
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
    msg.setTimeStamp(0.9317019450848492);
    msg.setSource(14698U);
    msg.setSourceEntity(190U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(108U);
    msg.seq = 36077U;
    msg.sys_dst.assign("JEMROGEZKZAHOAZYNAMMCJKPUCQHQLWHAVERWXPXFYEXGBTOYTZJVSAXDQWGYPJENLBJPDVIYNBFPPTLUHJRIIZAOVVZHEKCAQCTIQDOSHTCNFXDBGXYBNDEUNHFIMOYDGMXNXWUXBWUNROLNZQZHKCUISTEIYGUD");
    msg.flags = 184U;
    const char tmp_msg_0[] = {43, -125, 37, -46, 93, 68, -102, 59, 46, 82, -90, -123, -92, 113, -99, -78, 2, -79, -80, 105, 111, 8, 33, 31, 113, 19, 2, -103, 80, 74, -106, -83, 66, 71, 43, -72, 75, -117, -86, 7, 34, -54, 5, -38, 47, -121, -83, -13, -43, -110, 118, 48, 1, 30, -58, -109, 26, 105, -20, -83, 13, 81, -6, 114, -78, 106, 78, -54, 37, -29, -117, -65, 123, -34, -40, -91, 3, 10, 90, 89, 63, -115, -15, -16, 74, -25, 108, -6, -68, 39, -43, -20, 24, 110, 97, -2, -8, 65, 24};
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
    msg.setTimeStamp(0.27301170286701326);
    msg.setSource(1532U);
    msg.setSourceEntity(131U);
    msg.setDestination(52031U);
    msg.setDestinationEntity(137U);
    msg.sys_src.assign("AFBXACSCCEGCNYHPQLEITCROOSBWJMIGMNXKEODNPZHNILOIBDF");
    msg.sys_dst.assign("BEYZQEPPZXRZNGUYKSCHZBGVRSWNVHAMUFYFMLQNTDKRNWAIBEVDWVBOIVSOJDCCHGXZXXRHFLRCYCYXCYIDVPFXFTEELBEOCNVKARBPVNAVOSSUKSJYUTTLDLOCNOMGMFISLIELWQAHBEFUCMPHSQPWFDGTIZHTNKXQXXYSBE");
    msg.flags = 130U;
    const char tmp_msg_0[] = {26, 126, 106, 108, 108, 1, 99, -119, -47, 9, 70, -44, 9, -27, -47, -17, -61, -126, 114, 43, -68, -55, -34, 25, -97, -33, -41, 15, 9, -97, 50, 35, 55, -76, 125, 41, 118, 79, -8, -4, 30, 122, 2, 34, 69, 1, -84, -15, -11, 17, 10, -112, 119, -70, -14, 20, 78, 67, -116, -78, 47, -78, -77, 59, 15, -32, 54, 101, -33, 84, 64, -115, -7, -90, 13, -58, 33, 41, -99, -99, 119, 65, 82, 85, 91, 68, 76, -37, 86, -53, -86, 48, -56, 108, 100, -20, 42, -16, -14, -57, 114, 92, 72, 92, -101, 15, 38, -6, -72, -104, 119, -74, 34, 45, -63, 116, -83, -17, -19, 58, 58, -39, 49, 33, -50, 69, -95, -100, -57, 35, 104, 123, -40, -68, 93, -1, 73, 12, -68, 110, -69, -110, -85, 103, 107, -98, 30, -82, -97, -100, -19, -125, -126, 58, 87, 125, -25, 21, -90, 101, -99, -48, -60, 82, 63, -24, -96, 102, -9, -104, -40, -50, -39, -5, 20, -117, 123, 66, 113, -86, 16, 119, 57, 93, 42, 8, 18, -25, -72, 97, 9, 65, -34, -97, -124, -21, 96, -46, -22, 110, 9, -1, 11, 48, -39, -120, 75, 77, -102, -49};
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
    msg.setTimeStamp(0.5424295373642781);
    msg.setSource(64364U);
    msg.setSourceEntity(227U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(203U);
    msg.sys_src.assign("CEQSPHBRLCYRFNLUCZRYUIGAVZEATWRKNWULXEWJSAOPPYQWTOEDMZVLSKFKAIYKKNVCLOBNNBNIRVZZGMXYJTZCQORGDDZFNJKEQMQESKOWYVMWAZIFXXVGQBXCUVFHZBKSHAKVHHERYPUBJITXMOSCLWZBBVTUPLGOMJBGQSNOPEIDJHRQEXODGQU");
    msg.sys_dst.assign("HDAWWOQUOGENYBOXSTPJABODXNFYNYGSBAFPUSAHYXHACXFWDRMSKAYZGKLBLRQHCNMHXZMJITNQWRGVISKOAZFOCZXE");
    msg.flags = 219U;
    const char tmp_msg_0[] = {-45, 71, -106, 126, 77, 116, 46, 43, -12, -124, -109, 94, -77, 43, -110, 57, -35, -34, 123, 94, -114, -113, -80, -32, -28, -100, 84, -102, 33, -87, 108, 87, -99, 19, 34, 12, -29, 7, 102, 70, -18, -82, 19, 4, -12, -37, 69, -58, -55, 11, -115, 53, 25, -81, -8, -108, -2, 68, -50, 45, 104, -18, -8, 69, -99, 5, -64, -89, 47, -78};
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
    msg.setTimeStamp(0.7240049928379464);
    msg.setSource(31208U);
    msg.setSourceEntity(220U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("JOFYMXQAWPESXTKTWDEPTXQKHVBWCLFCBKNPUSTKQLDUBHMWKLIZYDZXCADJGFNHNTHEZAHQZSVCYZFAGZGXOWMXHVYRWLBECVBPMUQOPAPCUXNKMLOPA");
    msg.sys_dst.assign("QTVPSXVZVVELSUUSNYGSSWLWYDCHXJYBQPNTPCPNWMIMWEDIIPVUJKJJIKRECIFIHTWNZIGAECCPJFQOUYNQGKGGJSRDFXDBOLTXXLZTUCOGSJHTZRBLWEGHVEUSGOXKAPLDAOAHLCZCFBRDQQAFVMIHTLHFAQQMDZZRNUYLWRZHNPAHEDRHOKPFWWYKRUYJGEANNMBRLZEBTOOXMTQRFSBOXXMUYCYFVBCMNDIAIP");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-69, -70, -101, 50, -46, 88, -10, 90, 90, 102, -112, 11, 64, 89, -6, -4, -75, 64, -54, 120, 76, 33, -18, 4, -65, 69, 32, 116, -12, 12, -115, 20, -125, 2, 93, -108, 12, 57, -60, 25, -99, -18, 93, 83, -9, -15, -98, -56, 117, 48, -14, -38, -28, -57, -40, -24, 58, 65, -105, -14, 74, 99, -36, -16, 82, 0, 122, 86, 57, 100, -9, -52, 38, -35, -94, -54, -97, 94, 60, -55, 56, 95, -94, 109, -3, -69, -42, -65, 101, 60, -40, 15, -17, -101, -50, 43, -62, -51, -30, 102, -3, -78, 92, -82, -28, -5, -89, -63, -99, 67, 104, 69, -92, 66, 25, 51, 123, -93, -120, -58, -119, 125, 65, 39, -20, -101, 116, 61, -124, -65, -70, 7, -23, -20, 55, -11, 24, -39, 0, -36, 29, 96, 123, 79, 114, -91, 126, 47, -62, 37, 70, -94, 32, -4, -95, 29, 126, 103, -59, -45, -57, 34, -122, 78, 12, 25, 104, -102, -102, -80, -77, 6, 111, 115, -42, -32, -59, -73, 55, -67, -114, 113};
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
    msg.setTimeStamp(0.5783221045222806);
    msg.setSource(20004U);
    msg.setSourceEntity(198U);
    msg.setDestination(36750U);
    msg.setDestinationEntity(177U);
    msg.seq = 44344U;
    msg.value = 80U;
    msg.error.assign("OLOCEYMXGYNENQSKNUPQBXHUOFUOTATHSHDZNQQLQRNNMZCIYVTP");

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
    msg.setTimeStamp(0.394061113255738);
    msg.setSource(42810U);
    msg.setSourceEntity(71U);
    msg.setDestination(40265U);
    msg.setDestinationEntity(177U);
    msg.seq = 30397U;
    msg.value = 117U;
    msg.error.assign("XEYPBKBDJDKGFHBGIRPQFZEMNVEWTTBOQGJNNZBUWZYKVWTFGPKFCXVTJHQRJEAZQOCNGOCJKPACKDBLWCKRHVDQFEWRBOYHYUUKKURSTTQXSIVDHZZEUIDRA");

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
    msg.setTimeStamp(0.163394100139989);
    msg.setSource(23738U);
    msg.setSourceEntity(61U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(142U);
    msg.seq = 14967U;
    msg.value = 167U;
    msg.error.assign("CEGQLNTKOWYOFIPCMPEWAWXLDFYLSPTKLMFKHCMYYWAHAFPIGPUQXDICTKMGNRDBPADUZRZ");

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
    msg.setTimeStamp(0.6209787517949648);
    msg.setSource(65084U);
    msg.setSourceEntity(171U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(11U);
    msg.seq = 35349U;
    msg.sys.assign("YUSEWYIHMGCUCEXEBMXLELFLUMEJVVTPQGIFPJFJJVLCORYINKXQKGDSOAHHTYJFBNAOLJKAPSIRRMSATBLHZXPWDWHBCUVXKBOQKNSQCYRUSQWVRNHWSVFOWLBJBKMCIUEQNPZAPDDXHM");
    msg.value = 0.7820444919355029;

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
    msg.setTimeStamp(0.5694831848721782);
    msg.setSource(50594U);
    msg.setSourceEntity(195U);
    msg.setDestination(61346U);
    msg.setDestinationEntity(78U);
    msg.seq = 54909U;
    msg.sys.assign("FFUJDRIFKCOTIUSOEILXRCGTLCVAEUNBZNUPCRSDEPJMTWDOVGZEBMMZKMLYKJBWHNVAEJYWRZSXCUDLKCWDAKXPLHCGZKEKNXOREBUGDUPFJPBZXLYHBNQSKTLIOOHQSRMTHQOCWAJREPYFPUII");
    msg.value = 0.5803615326622215;

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
    msg.setTimeStamp(0.6414925871047211);
    msg.setSource(50898U);
    msg.setSourceEntity(82U);
    msg.setDestination(1547U);
    msg.setDestinationEntity(146U);
    msg.seq = 20157U;
    msg.sys.assign("ZEGCHGQNTPGLPSSXWCRKLZVNFEAUCNHCAZFBJYQZHXQBBEETRZVUUYHFJJIJIVTQYQSNHJVSLBODJLAWPKCKRPXIHWGIOXCJEYMMKVSLHEYUIIDODIGQBRQDSMDMXKSYYMDIRNTWVKPESNSMXZQSJACYVIPQQDWEEZBWKT");
    msg.value = 0.6744600022382362;

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
    msg.setTimeStamp(0.07665515116328592);
    msg.setSource(41136U);
    msg.setSourceEntity(213U);
    msg.setDestination(44922U);
    msg.setDestinationEntity(90U);
    msg.action = 150U;
    msg.longain = 0.5720617693597057;
    msg.latgain = 0.12650731104382806;
    msg.bondthick = 921698536U;
    msg.leadgain = 0.41610387841155183;
    msg.deconflgain = 0.03274490775414485;

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
    msg.setTimeStamp(0.4717809545084438);
    msg.setSource(9239U);
    msg.setSourceEntity(79U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(238U);
    msg.action = 87U;
    msg.longain = 0.6560204703771493;
    msg.latgain = 0.054504406927959104;
    msg.bondthick = 2467258609U;
    msg.leadgain = 0.4149505835709051;
    msg.deconflgain = 0.011419449621994704;

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
    msg.setTimeStamp(0.6723651373654745);
    msg.setSource(59610U);
    msg.setSourceEntity(63U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(129U);
    msg.action = 188U;
    msg.longain = 0.6777238752303198;
    msg.latgain = 0.21804285078674945;
    msg.bondthick = 1593000247U;
    msg.leadgain = 0.5009831463650061;
    msg.deconflgain = 0.5809159997847173;

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
    msg.setTimeStamp(0.617445118147794);
    msg.setSource(34589U);
    msg.setSourceEntity(62U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(51U);
    msg.err_mean = 0.931696123039809;
    msg.dist_min_abs = 0.37531076348502335;
    msg.dist_min_mean = 0.2884300897400621;

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
    msg.setTimeStamp(0.5833720009260324);
    msg.setSource(41719U);
    msg.setSourceEntity(232U);
    msg.setDestination(32872U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.6581959566795154;
    msg.dist_min_abs = 0.4469374703356529;
    msg.dist_min_mean = 0.9693153288219325;

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
    msg.setTimeStamp(0.33724481771007686);
    msg.setSource(13328U);
    msg.setSourceEntity(32U);
    msg.setDestination(30814U);
    msg.setDestinationEntity(109U);
    msg.err_mean = 0.4677902446641251;
    msg.dist_min_abs = 0.7970292538905014;
    msg.dist_min_mean = 0.597468993676414;

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
    msg.setTimeStamp(0.5516487583422816);
    msg.setSource(40341U);
    msg.setSourceEntity(73U);
    msg.setDestination(47120U);
    msg.setDestinationEntity(111U);
    msg.uid = 198U;
    msg.frag_number = 97U;
    msg.num_frags = 173U;
    const char tmp_msg_0[] = {113, -26, -24, 79, -1, -15, 71, -26, 122, -98, -86, 6, -63, 2, -103, -46, 14, -40, -101, -12, 80, 56, -113, 50, -37, 71, -35, 120, 19, 41, 113, 57, -46, 125, 66, -112, -128, -107, 118, -126, -44, 85, -39, -79, -1, -89, -31, -29, 49, 7, -28, 42, 49, -65, 22, 80, 71, -85, -93, -18, -128, -68, 119, 84, -57, 0, -93, 112, -59, 67, 122, -76, 116, 50, -54, 68, 1, 97, 40, 106, 39, -116, 46, -123, -25, -48, -33, -102, -128, -31, -68, 76, 121, 80, -20, 14, 79, -7, -119, 21, -48, 33, 66, 76, -87, 67, 42, 111, -121, -37, 15, 106, -122, 124, 20, 114, 38, -31, -119, -120, 105, -119, 116, -27};
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
    msg.setTimeStamp(0.11424087719464915);
    msg.setSource(27879U);
    msg.setSourceEntity(215U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(236U);
    msg.uid = 29U;
    msg.frag_number = 124U;
    msg.num_frags = 120U;
    const char tmp_msg_0[] = {-126, 41, 21, -59, -59, -124, 106, 28, 62, 107, -71, -109, -95, -85, -90, 28, 12, 34, -94, 83, -103, 72, -95, -29, 33, -15, 12, 37, -49, -99, 75, -74, -83, 6, -74, -67, 10, -61, 32, -20, -111, 88, -8, 6, 36, -10, 60, -23, 92, 102, 126, -4, -98, -65, -48, -60, -128, -29, -72, -114, 72, -79, 47, -3, 119, -26, -84, -65, 125, 36, -6, 36, 104, -48, 64, 115, -11, 29, 7, 98, -114, 106, 113, 97, -53, -15, -34, 69, 77};
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
    msg.setTimeStamp(0.9666028087230905);
    msg.setSource(52517U);
    msg.setSourceEntity(142U);
    msg.setDestination(38506U);
    msg.setDestinationEntity(220U);
    msg.uid = 122U;
    msg.frag_number = 111U;
    msg.num_frags = 154U;
    const char tmp_msg_0[] = {-108, 58, -5, 4, 8, 73, 91, 20, 41, -7, 80, 37, 6, -123, 84, -108, -49, 35, 6, 8, 35, 25, -125, -21, -20, 8, 6, -11, 58, 87, -89, -34, 40, -59, 18, -89, 48, 28, 122, 54, -79, -120, -4, -82, -3, 2, 99, 66, 14, 61, 21, -63, 104, -64, 115, -28, 40, 92, -117, -4, 5, 121, -48, 2, 41, 47, 108, -23, -101, -34, 96, 123, 77, -74, 55, 89, -59, -1, 124, -47, -29, 113, 5, -97, -41, -83, 114, 87, 85, -82, 95, -36, -45, -16, 107, 108, -84, -78, -117, -38, -97, 112, 63, 30, -89, -10, 53, -1, -26, -112, 115, 114, 24, 10, -45, -24, 36, 126, -15, 84, -120, -71, 21, 57, 81, 14, 24, -117, 50, 19, 59, -59, 29, 31, 38, -111, -31, 80, -83, -68, -28, -16, -8, -60, 74, 98, -26, -1, -62, -63, -43, -109, 42, -128, -116, -27, -59, -119, 80, 116, 64, -45, 113, 76, 11, 1, 96, 59, -81, 119, 104, 61, 117, -15, -20, 113, -118, -68, 61, -33, 113, 17, 117, 103, 83, -81, 67, 12, -32, -70, 36, -122, -6, -40, -77, -89, 86, -128, 55, 92, 49, 80, 15, -44, -68, -36, -42, -79, 48, 83, 5, 20, -6, -127, 87, -5, 56, 101, 81, -1, 94, 86, 72, -1, 57, -72, 10, 28, -26, 54, 118, 92, 115, 84, -17, 4, -70, -5, -21, -23, -111, 28, 6, 25, 22, 71, 38, -63, 14, -10};
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
    msg.setTimeStamp(0.29125643050125394);
    msg.setSource(65030U);
    msg.setSourceEntity(71U);
    msg.setDestination(17434U);
    msg.setDestinationEntity(28U);
    msg.content_type.assign("JRHADHQGXODDRYRGNOKVIGFSUYIHFLPQAXTLQPWTREFCGTVUOVGOXJVGZPMIDAQYUUBAIWDLJIDBDZCYJIKXFHMUSVCNCQWAETVMEUJXTWYYIMAMIEEYOQCPDZJNARPPBRERWWZUZUXVGHLKNNZABKEOKBEIKSQPFPXAHFXGBHHFSMAVZXZMHOZUVLWOWCBQNYVTCBGLXNSRLTLTGDCKFTJENOFNLSUTLFJSKKQYWSDWYOPNISBMQEJSHKPJR");
    const char tmp_msg_0[] = {-110, -123, 7, -76, 75, 42, 78, -77, 25, 17, 6, -42, 54, -46, -88, -5, -37, -127, -68, -69, 61, -47, -127, 62, -113, 61, 119, -87, -13, 125, -80, -89, -87, -86, -59, -65, 92, 22, -112, -104, 119, -117, -94, 106, -61, -36, -52, 58, -50, 85, 29, -127, -84, -9, -54, 40, 61, -25, 101, 64, 49, 53, -100, -113, 10, 28, -57, -64, 120, 33, 124, -74, 115};
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
    msg.setTimeStamp(0.4554568617281658);
    msg.setSource(60915U);
    msg.setSourceEntity(43U);
    msg.setDestination(3339U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("LSJNSMPZONJAXLRSLHBGKXQMYTVHDDQMICUWKFADJJHHMUPSNFJQFIYBGKFABDQSOWDBSBRFTZLIOEJPIVZVKPVAACGHRCBSRQCQWXEAUSQNWDVIXBEOIZKXETVGQRCRKFTCEVOAMLYDPPSNFXGCNWBIQAOCLGTJEYLTQJGTUURJYUWXOYETXKPHAGLMXBMXYZZFEPRGHFVFEDKYKHWCNWVYUTLGDCZUTNISBMVPUDOOIUIJEZAMHNPZWNL");
    const char tmp_msg_0[] = {-16, 74, 64, 93, -13, 83, 81, -49, 120, -83, -94, 78, -37, 108, 56, -52, -125, 64, -109, 116, -30, -105, -43, 35, 53, -121, 125, -82, -39, 7, 110, 25, -49, -76, -60, -66, 48, 92, -69, -107, -79, 112, 9, -101, -77, 95, -85, -3, -87, 111, 20, 69, 19, -79, 29, 86, 106, -93, -120, 70, -9, 31, -3, 65, 9, 106, -119, 14, 94, -95, -52, 126, 124, -119, 109, -38, -93, 54, 82, 92, 109, -86, -117, -68, -116, -8, 92, -74, 109, -93};
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
    msg.setTimeStamp(0.5318275505171385);
    msg.setSource(31447U);
    msg.setSourceEntity(20U);
    msg.setDestination(63253U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("ZHQMGZDBWMATLSYTMXZYRJJGLUODPKHBZAIXYTOGMHNPUJWEINQOHDNIYCJDEKPWCSZOFHYDTRUBGBXCOXHGNHLTVFUGAFQTBIQYCRIJIBKAHDWGLXCAOKEWFRNLNOEOLKTEZMLGSOSIWVIEDCCUZHSAPPUZREXQPADBQCSXRKYDVPVFEJMMFITCORWBUQVNQLRWEGJYZSMKF");
    const char tmp_msg_0[] = {26, -97, 13, 29, 82, -3, 76, 67, -108, -79, 8, 99, -13, -82, 126, 25, 64, -6, 19, 25, 28, -13, -16, -95, -117, -28, -72, 98, -114, 52, 8, 111, 55, -127, -75, -102, 16, 122, 34, -79, 16, 57, -26, -118, 17, -114, -78, 19, 96, 83, 56, -51, -102, 71, -33, 40, 3, -105, 56, -44, -103, -93, 18, 2, 44, -3, 40, -24, 101, -88, -64, -45, -82, -31, -26, 74, 34, -28, 68, -58, 122, 38, -25, 122, 13, 54, 82, 104, -25, 77, -127, -88, -34, -111, 72, 103, -81, 92, -116, -58, 83, -77, 96, -55, -111, -22, 34, 73, -47, 5, 50, -74, 21, -98, -50, -96, -119, -68, -31, -38, 66, -12};
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
    msg.setTimeStamp(0.8246062200959168);
    msg.setSource(49168U);
    msg.setSourceEntity(228U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.39443603525627213);
    msg.setSource(48387U);
    msg.setSourceEntity(75U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.04017822826636264);
    msg.setSource(6589U);
    msg.setSourceEntity(203U);
    msg.setDestination(11570U);
    msg.setDestinationEntity(51U);

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
