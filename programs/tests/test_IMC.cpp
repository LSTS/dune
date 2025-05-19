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
// IMC XML MD5: 525bed614d94c59fe195f5b037a5270c                            *
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
    msg.setTimeStamp(0.14817939863338714);
    msg.setSource(62558U);
    msg.setSourceEntity(22U);
    msg.setDestination(12000U);
    msg.setDestinationEntity(79U);
    msg.state = 198U;
    msg.flags = 116U;
    msg.description.assign("XSLHTJBCIEYPRASPQBMRGLCMBWKAXJPSMNOTQMUZYEXHTGWVJGTHDCBIWT");

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
    msg.setTimeStamp(0.20738816751445965);
    msg.setSource(47821U);
    msg.setSourceEntity(48U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(239U);
    msg.state = 172U;
    msg.flags = 53U;
    msg.description.assign("ZXUBRFLBDVWLTSTIBLCALFAGKZMWVELKSRFFMOUWDJLXSCXVUSCJOVBJUINKPDQWBRPEENEPQTAOJZIVOCYTYWHACOFGPXIGJOYOCDSQPFMNQREBRXTGBCLIHGQHHBDTJDBSRHAAYWZMCNUJXINXUYYMPIZJUNDFVGHVYKZEOGEJYKKWRKFHPEBZPYMMHYTGXZSNVQNHFFWSWIDVOQAHKCSQMUDTUTXLCRJLTOIGUKLNAKG");

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
    msg.setTimeStamp(0.10580025311451902);
    msg.setSource(23790U);
    msg.setSourceEntity(88U);
    msg.setDestination(60690U);
    msg.setDestinationEntity(43U);
    msg.state = 52U;
    msg.flags = 20U;
    msg.description.assign("QHPDHDGKYITPLCTQVKPZMFSKIXKHKXEROTNRVZLGQAOIRKWNGQNUUYIMXATFBZEWLEHVSJJSFUPZMPMRMNNURJIBBGFVZCDFEINRHRVHDWQQICGKLWGXXMSZYBCYVASBVWOAPGURDYIHCSCJMLZDJXUOSJLWSLUFAEWXOAALBYSZOKGIEQFDJWDFTXQAVJEYUDQUGTTESHPLBVYNBKLTVKXFRYWDMBPATPECCO");

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
    msg.setTimeStamp(0.02468969653157671);
    msg.setSource(65447U);
    msg.setSourceEntity(203U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.7111891487131904);
    msg.setSource(18378U);
    msg.setSourceEntity(34U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.12872475448674947);
    msg.setSource(43488U);
    msg.setSourceEntity(212U);
    msg.setDestination(37790U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.5093222836920193);
    msg.setSource(54469U);
    msg.setSourceEntity(192U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(33U);
    msg.id = 90U;
    msg.label.assign("JMAGTOOSCETGZTJVDDGPFQLFGXBCINMLDYKZCPLWUDNJIIHAPQCYSWTROIKIFAXWBCGWTRPYGKVYIXKBVAPNTCKKNSSBAVUDFSH");
    msg.component.assign("LNBANVXRNRFADHCCIXSSCRGUZHPMLAFHYQFEEKLBZIQEQCZGGWPWODOJRYUMUJUFPGIBSHHPARJBPXRSVVGXLLOVBNTIHWMZYFBORSEEBIUNUSZYLFVMNJECBKPJNDJMGECWSTKBTEYQXMLPXBHYDTEWNVYRAHSKVCZAXFCIATGYQWGTQKQIXMDDJLPOAZJUFNZQOCUDRLISDUTYICPTOVJGOKWHNYTJZZ");
    msg.act_time = 4951U;
    msg.deact_time = 27815U;

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
    msg.setTimeStamp(0.5630120261881342);
    msg.setSource(6139U);
    msg.setSourceEntity(214U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(156U);
    msg.id = 70U;
    msg.label.assign("BXRTDZWEYVAQMSPKVZKTDELEZTQEBNNSTFBERWTVCJXGDXGNNKRFGCXXIZFMLSWWJUIQCHBAMJQUUOGRBGNXOKYVVWXHSQIJXMZOQPSCOFGYBHRKQUGJPC");
    msg.component.assign("OVSDBCDZJYFSIFGRPYXPXHASYFWWICERXTVYHWGGQGRIZHFJCXMVORCKKUPBTGNOAMGTMJEQEHVGKDXLJAPCWLDPTUHONLZNAOLMAYHDENMKSUZNJRVLDOQIYMWQTPWFMFPSUKHMPXYZLUKQDOUXDAWAJRXEZRVMQWBCRAIQH");
    msg.act_time = 39584U;
    msg.deact_time = 37045U;

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
    msg.setTimeStamp(0.46545239334170385);
    msg.setSource(62860U);
    msg.setSourceEntity(100U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(215U);
    msg.id = 133U;
    msg.label.assign("GBKUYPNXKNPQBAVKHHCATQJPZDFMMYLCOAXEVAYEWAJXPVLALUFDRHYPJOQLEWITRRWGNABPFCFXDKPKPIEGEZLQSGFBIYBUOMCXLHTJFVIMTQLSMTYBESNQXARXRIKWSZDCYQKSTIVLRYMDGUPYKUVDAOHENCZEIKSUCGGEMBCDWUJWZQQZWVJDBWLKTMHHJCFIFNXLZNWDOMIFRDGEZVXVJURBUNNVJAHOORQBHHZOPM");
    msg.component.assign("YHLLZKWUIMMMPDUJIOJOZAYIACBTNLVHJXSRPAMJDMBTRCULYWKOKWMDXNJWYPBMHWXEPAWIFHIVCMVNAXKSRAYMWUEGPDLQGBQETYSGCTRPTHNGWLOSGKOIUNURRHUZB");
    msg.act_time = 5911U;
    msg.deact_time = 25277U;

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
    msg.setTimeStamp(0.18479720465033078);
    msg.setSource(19572U);
    msg.setSourceEntity(137U);
    msg.setDestination(5736U);
    msg.setDestinationEntity(34U);
    msg.id = 1U;

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
    msg.setTimeStamp(0.8184597861518718);
    msg.setSource(2559U);
    msg.setSourceEntity(230U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(125U);
    msg.id = 91U;

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
    msg.setTimeStamp(0.6452481332626211);
    msg.setSource(33185U);
    msg.setSourceEntity(243U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(215U);
    msg.id = 203U;

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
    msg.setTimeStamp(0.09245760292842564);
    msg.setSource(36063U);
    msg.setSourceEntity(198U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(234U);
    msg.op = 39U;
    msg.list.assign("VBVWTZGOFVKJPEISCYIUNAMPUIHCUIQXOQDTUHVFAPNDMCWTGQHLHQLTGSARJALDUXSACYLTFIRZKCTIPTGDEJKKLBUHYTHQRCKZMMPCMPDKIBSDWEJDHLGBSQOTEFFQPLDFRQAJEKSPVJFVKXNJIXXWYEBPBMF");

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
    msg.setTimeStamp(0.34505065578197236);
    msg.setSource(28188U);
    msg.setSourceEntity(163U);
    msg.setDestination(16228U);
    msg.setDestinationEntity(41U);
    msg.op = 224U;
    msg.list.assign("OHAEHOLOAEKJDDFGWXKLZFQUMJZPUPSDRAUSJNTJGXOIIZVF");

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
    msg.setTimeStamp(0.7310292931941912);
    msg.setSource(12103U);
    msg.setSourceEntity(69U);
    msg.setDestination(40224U);
    msg.setDestinationEntity(131U);
    msg.op = 250U;
    msg.list.assign("YVFVIDPJUIEDYHPOTQWALIDNHKCZCMXYOJNWVWOJULGUKAWCGRNZLSENTNFWECTBEZ");

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
    msg.setTimeStamp(0.43485690740471716);
    msg.setSource(8602U);
    msg.setSourceEntity(134U);
    msg.setDestination(41174U);
    msg.setDestinationEntity(209U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.45076475567320784);
    msg.setSource(9137U);
    msg.setSourceEntity(233U);
    msg.setDestination(34033U);
    msg.setDestinationEntity(97U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.8789214416663236);
    msg.setSource(37316U);
    msg.setSourceEntity(209U);
    msg.setDestination(27295U);
    msg.setDestinationEntity(106U);
    msg.value = 9U;

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
    msg.setTimeStamp(0.9537484342591283);
    msg.setSource(40539U);
    msg.setSourceEntity(225U);
    msg.setDestination(65290U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("UNGTJONGXQXMZFFKOIZRKJNRMGULFTYQNBUOMCVYWCXHTDTSQWRTUEPQVGHJOJZDJOXBFUJSLVMNPKKEWT");
    msg.message_id = 23318U;

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
    msg.setTimeStamp(0.8420358595241647);
    msg.setSource(3018U);
    msg.setSourceEntity(134U);
    msg.setDestination(28471U);
    msg.setDestinationEntity(34U);
    msg.consumer.assign("XDHETIGKTTTVENUTEWOZUUFSIMZRKWNLBNQRUNSPRNKENMMWPSYIMRIPESXCYMPCODZFBLJEVYIZKJTCQWQQRV");
    msg.message_id = 50483U;

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
    msg.setTimeStamp(0.5478032459855338);
    msg.setSource(41733U);
    msg.setSourceEntity(129U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(234U);
    msg.consumer.assign("ACNHKVDZLKPNVLPUEYSTTOKRNHLVWIRIAJQVFKYOCTOBTRJVUFIDBWWCAXGZJTFBYMGSEDDDCRPTXAKPLPICISGBUPLGUXXYWJGVVCYEWHEYJQMYAQMNLIPOLNEVKKF");
    msg.message_id = 58521U;

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
    msg.setTimeStamp(0.5937340660924632);
    msg.setSource(50357U);
    msg.setSourceEntity(53U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(150U);
    msg.type = 201U;

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
    msg.setTimeStamp(0.6086559498865054);
    msg.setSource(50947U);
    msg.setSourceEntity(146U);
    msg.setDestination(31896U);
    msg.setDestinationEntity(71U);
    msg.type = 60U;

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
    msg.setTimeStamp(0.02830944285488246);
    msg.setSource(12626U);
    msg.setSourceEntity(216U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(123U);
    msg.type = 143U;

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
    msg.setTimeStamp(0.877201091697589);
    msg.setSource(48014U);
    msg.setSourceEntity(20U);
    msg.setDestination(47690U);
    msg.setDestinationEntity(102U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.8946636497909575);
    msg.setSource(51325U);
    msg.setSourceEntity(129U);
    msg.setDestination(32387U);
    msg.setDestinationEntity(253U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.39699778093143756);
    msg.setSource(56594U);
    msg.setSourceEntity(199U);
    msg.setDestination(46669U);
    msg.setDestinationEntity(196U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.8024799937228106);
    msg.setSource(63047U);
    msg.setSourceEntity(79U);
    msg.setDestination(18962U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 73U;
    msg.step_number = 241U;
    msg.step.assign("NFQSYFGCWURZXLGTFJOEXPAXNJZBWDYLUBWHVNODIUMGZPQTGTKPVPNXLXPVSICJPNOYWACCYHQRKMCXFRYHNLIMDDBERXIIQMKSAJBZSMIPLDFUUEWKEAJGQTBNDSSKUYQKOTZHOSYNVJFTLBPMFBPVKKRIUDDOVKNWTAVZ");
    msg.flags = 214U;

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
    msg.setTimeStamp(0.25072146289941866);
    msg.setSource(62U);
    msg.setSourceEntity(85U);
    msg.setDestination(34256U);
    msg.setDestinationEntity(34U);
    msg.total_steps = 25U;
    msg.step_number = 111U;
    msg.step.assign("EXQDITMMYO");
    msg.flags = 245U;

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
    msg.setTimeStamp(0.5197768604406612);
    msg.setSource(62916U);
    msg.setSourceEntity(149U);
    msg.setDestination(8210U);
    msg.setDestinationEntity(118U);
    msg.total_steps = 189U;
    msg.step_number = 17U;
    msg.step.assign("GIQPMAHYOKTCMVRLBELUISSTSSODVTNHTEQOGBSWDGMABFBWWXITSAIANYIYOMNEZTKUEFCHVDJWCFJDDAVMJKSLEIMRCWGQXYPHKUHGZLKQYNENQAXHKERWNUJVEB");
    msg.flags = 32U;

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
    msg.setTimeStamp(0.9694932133698053);
    msg.setSource(53631U);
    msg.setSourceEntity(159U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(139U);
    msg.state = 162U;
    msg.error.assign("RNJELDRMSJMPZXDFOOZUQFVGZTKQTSRPWPXLHGHNUVXFZBWBMXVODCAMKHPZQWATWQJZIANZNYDLJQEPNXMSLKGM");

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
    msg.setTimeStamp(0.13767337870863317);
    msg.setSource(152U);
    msg.setSourceEntity(180U);
    msg.setDestination(4274U);
    msg.setDestinationEntity(221U);
    msg.state = 4U;
    msg.error.assign("IGKOLWPDQEXWOOBULEAECEVFBZWTFXXLILZZRRVSPMMEJGUTARHUMIRXYHDCNQTPVPQRYWTRFVBQZJMJHKLPFDSMMUMNNHSEEKDYADXITVJNZCTIKKWHSQZSOMDJYZNVBARFGWYUZCYGJFDHHEAKAABLAGLPTPSOUFDRFLCUNYTQBINEHJIWQASYEDRTNGSJGQMFOCKGBXOZIWOWHUPWKSJXLUICXQBYKCJIFZGD");

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
    msg.setTimeStamp(0.14084772251412614);
    msg.setSource(48600U);
    msg.setSourceEntity(217U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(137U);
    msg.state = 146U;
    msg.error.assign("CNICKRQBLHTGYKXJXCPZAYRWGAUMRVOTYQDMOEFTBVUDDKRAMUBZCMIIWALQUMYEZYGZLNKCROBUZBHISXQKFQJOEIGQXXDJGGIZLVDNRGNPZPBVLRMNPLPLQUCVMDCGKTIQYGTQIWLWPJKADNPAHAUMVSETAMTWCFWALOFN");

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
    msg.setTimeStamp(0.2725250582058062);
    msg.setSource(24696U);
    msg.setSourceEntity(171U);
    msg.setDestination(35163U);
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
    msg.setTimeStamp(0.3939412943141253);
    msg.setSource(32U);
    msg.setSourceEntity(239U);
    msg.setDestination(13723U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.1961175019549546);
    msg.setSource(27041U);
    msg.setSourceEntity(56U);
    msg.setDestination(61786U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.30915574136463864);
    msg.setSource(64470U);
    msg.setSourceEntity(254U);
    msg.setDestination(46484U);
    msg.setDestinationEntity(238U);
    msg.op = 17U;
    msg.speed_min = 0.3316451290070652;
    msg.speed_max = 0.4054819098626822;
    msg.long_accel = 0.257102736857429;
    msg.alt_max_msl = 0.805599695118124;
    msg.dive_fraction_max = 0.781089587035551;
    msg.climb_fraction_max = 0.6601473085101702;
    msg.bank_max = 0.8294376852298349;
    msg.p_max = 0.22167474222152517;
    msg.pitch_min = 0.5156522193777312;
    msg.pitch_max = 0.6063262132814865;
    msg.q_max = 0.5687328801525595;
    msg.g_min = 0.18076316839377504;
    msg.g_max = 0.9941710164472896;
    msg.g_lat_max = 0.4813119450650958;
    msg.rpm_min = 0.9416385749138849;
    msg.rpm_max = 0.04465640778203539;
    msg.rpm_rate_max = 0.5911525845071582;

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
    msg.setTimeStamp(0.29069568847674154);
    msg.setSource(3648U);
    msg.setSourceEntity(78U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(86U);
    msg.op = 24U;
    msg.speed_min = 0.8125886780486735;
    msg.speed_max = 0.7247305204185246;
    msg.long_accel = 0.7974241877665926;
    msg.alt_max_msl = 0.213797243452036;
    msg.dive_fraction_max = 0.7930165810058297;
    msg.climb_fraction_max = 0.7161910155996175;
    msg.bank_max = 0.12854094110030678;
    msg.p_max = 0.3377104727796133;
    msg.pitch_min = 0.18205499183847185;
    msg.pitch_max = 0.6696445326810311;
    msg.q_max = 0.5449167558254644;
    msg.g_min = 0.16679695729685062;
    msg.g_max = 0.5870294123002597;
    msg.g_lat_max = 0.09113511366555904;
    msg.rpm_min = 0.2388537453277959;
    msg.rpm_max = 0.6228542063941357;
    msg.rpm_rate_max = 0.6896860740565136;

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
    msg.setTimeStamp(0.4775327977606306);
    msg.setSource(47513U);
    msg.setSourceEntity(192U);
    msg.setDestination(35708U);
    msg.setDestinationEntity(174U);
    msg.op = 194U;
    msg.speed_min = 0.42791479719499037;
    msg.speed_max = 0.01597507156049105;
    msg.long_accel = 0.2033698382453335;
    msg.alt_max_msl = 0.8106784138729408;
    msg.dive_fraction_max = 0.11457090142493864;
    msg.climb_fraction_max = 0.6837854637595362;
    msg.bank_max = 0.3309376356378194;
    msg.p_max = 0.20775696728414517;
    msg.pitch_min = 0.8386768928832125;
    msg.pitch_max = 0.3558863894269988;
    msg.q_max = 0.12768523520489117;
    msg.g_min = 0.17214345623507932;
    msg.g_max = 0.4123996181282149;
    msg.g_lat_max = 0.6297069521803625;
    msg.rpm_min = 0.1418244806621235;
    msg.rpm_max = 0.6228598472114769;
    msg.rpm_rate_max = 0.2823686527834335;

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
    msg.setTimeStamp(0.5691505839355543);
    msg.setSource(61662U);
    msg.setSourceEntity(11U);
    msg.setDestination(35923U);
    msg.setDestinationEntity(159U);
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.reason = 230U;
    tmp_msg_0.value = 0.7963501037685452;
    tmp_msg_0.timestep = 0.4643345633808945;
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
    msg.setTimeStamp(0.4375444424433599);
    msg.setSource(54461U);
    msg.setSourceEntity(227U);
    msg.setDestination(26636U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.7797506861269309);
    msg.setSource(39545U);
    msg.setSourceEntity(178U);
    msg.setDestination(39168U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.07339845967279801);
    msg.setSource(19880U);
    msg.setSourceEntity(132U);
    msg.setDestination(48255U);
    msg.setDestinationEntity(101U);
    msg.value = 0.48100699293447335;

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
    msg.setTimeStamp(0.691478243292156);
    msg.setSource(53057U);
    msg.setSourceEntity(176U);
    msg.setDestination(28445U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6796018402555638;

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
    msg.setTimeStamp(0.4342718646932223);
    msg.setSource(16834U);
    msg.setSourceEntity(98U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(141U);
    msg.value = 0.4907282448152571;

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
    msg.setTimeStamp(0.6663374011898618);
    msg.setSource(44201U);
    msg.setSourceEntity(221U);
    msg.setDestination(36326U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.7201647056212427;
    msg.lon = 0.5600838919393732;
    msg.height = 0.5765777051040684;
    msg.x = 0.21995947426546514;
    msg.y = 0.3894701954788161;
    msg.z = 0.9181221553350661;
    msg.phi = 0.6838146305520603;
    msg.theta = 0.6892698671114676;
    msg.psi = 0.2551506372432689;
    msg.u = 0.009574564884646142;
    msg.v = 0.8678345078361818;
    msg.w = 0.17840937457016492;
    msg.p = 0.641662043539297;
    msg.q = 0.21919848380580476;
    msg.r = 0.699759598686585;
    msg.svx = 0.7098238831436069;
    msg.svy = 0.20320964785713636;
    msg.svz = 0.7403576256312674;

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
    msg.setTimeStamp(0.4109712526780931);
    msg.setSource(28102U);
    msg.setSourceEntity(88U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.8769449587406152;
    msg.lon = 0.35232747747799686;
    msg.height = 0.9428462302595002;
    msg.x = 0.21576772607659367;
    msg.y = 0.3013614412500303;
    msg.z = 0.6459002785886904;
    msg.phi = 0.7208704378774193;
    msg.theta = 0.47703536367728105;
    msg.psi = 0.32718693763144524;
    msg.u = 0.915994211601844;
    msg.v = 0.28105851279513216;
    msg.w = 0.050026421337211247;
    msg.p = 0.04324909365953089;
    msg.q = 0.502314001545164;
    msg.r = 0.4435647761188739;
    msg.svx = 0.0770363539532607;
    msg.svy = 0.15139601053981733;
    msg.svz = 0.882249721641043;

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
    msg.setTimeStamp(0.978362077354377);
    msg.setSource(16066U);
    msg.setSourceEntity(205U);
    msg.setDestination(59455U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.553777640630448;
    msg.lon = 0.2730425782311474;
    msg.height = 0.37842003345183806;
    msg.x = 0.8056354819042756;
    msg.y = 0.6729658377659152;
    msg.z = 0.1948740051383696;
    msg.phi = 0.3851544231188284;
    msg.theta = 0.38125912738610956;
    msg.psi = 0.912208021590656;
    msg.u = 0.2900880605518963;
    msg.v = 0.5124079975349084;
    msg.w = 0.15494946439191015;
    msg.p = 0.008641081800655592;
    msg.q = 0.6336762217209074;
    msg.r = 0.8642939040027381;
    msg.svx = 0.829741482941163;
    msg.svy = 0.24120654759789306;
    msg.svz = 0.6828667454423628;

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
    msg.setTimeStamp(0.6073712250163493);
    msg.setSource(34264U);
    msg.setSourceEntity(197U);
    msg.setDestination(39881U);
    msg.setDestinationEntity(40U);
    msg.op = 128U;
    msg.entities.assign("LEACMOSIAGJKINHXVUZIEZEDZBXKEUCERWHMYTZDSHBINWVFHTPYZPBBPPAGEHFOVHNECGPZGFWQZKXQTUIDECUXHBHVSSSGCVDYNQCSNRYPWYHLQRVAYSYUEZ");

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
    msg.setTimeStamp(0.6264261108768597);
    msg.setSource(647U);
    msg.setSourceEntity(241U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(233U);
    msg.op = 203U;
    msg.entities.assign("UHGOKQWIMRDOQMDJRLDZDTGSRKSWEZUSKENPGOGBT");

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
    msg.setTimeStamp(0.301386450896749);
    msg.setSource(18195U);
    msg.setSourceEntity(39U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(254U);
    msg.op = 15U;
    msg.entities.assign("NEIKSULDGXSQVJMOIARSLPBVLQHHTTMDANSPFWVKMZUTXNQFGDGWZOUBGCMFICNPLZJYVMYWHIDMFODXWRRLFAREYEHPXJDAKYXNWC");

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
    msg.setTimeStamp(0.27162945227349244);
    msg.setSource(25719U);
    msg.setSourceEntity(166U);
    msg.setDestination(11140U);
    msg.setDestinationEntity(103U);
    msg.type = 114U;
    msg.speed = 37727U;
    const signed char tmp_msg_0[] = {9, 26, -41, -119, -51, 68, -77, 52, 75, -124, -59, -15, 62, -55, -33, -70, 16, 102, -88, 31, 15, -8, -123, -85, 113, -36, 20, 33, 34, -25, 35, 32, -102, -89, -9, -80, 12, -110, 31, -33, 11, 64, 86, 36, -117, -2, -18, 29, 112, -23, -120, -105, -116, -79, 83, -128, -88, 8, -83, -106, -90, -27, -58, -76, -48, -77, -5, -83, 44, 18, 40, -125, -84, -81, 93, -87, -20, 81, 63, -89, -9, -121, -10, 34, 91, 23, 29, -43, 81, -58, -108, 125, -88, -11, 30, -54, -32, -62, -64, -33, 63, 84, -88, 126, -97, -42, 45, 12, -58, -27, -63, -106, 7, -125, -74, 98, -59, -93, -116, -18, -71, -61, -71, 103, 34, 116, 85, 16, -69, 124, 7, 81, 65, -35, -61, 6, 112, -40, -20, -125, 32, 6, -93, -33, -92, 43, 102, -88, -5, 102, -78, -7, -4, 124, 68, -8, -52, 12, -127, -82, 7, -99, -80, -105, -114, -102, 8, 99, 52, -63, 121, -8, 113, -9, 59, -38, 95, -103, -34, -47, -104, -52, -14, -81, 124, -82, 9, 69, -39, 52, 102, 9, -90, -100, 87, 107, 26, 121, 6, 66, 74, 61, 120, 59, 15, 49, -88, -128, 70, 30, -10, -98, 77, 29, 2, -110, 58, 96, -114, -89, 11, -127, -122, 14, 88, 32, 2, -96};
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
    msg.setTimeStamp(0.8095949270029341);
    msg.setSource(63752U);
    msg.setSourceEntity(143U);
    msg.setDestination(34371U);
    msg.setDestinationEntity(114U);
    msg.type = 176U;
    msg.speed = 25133U;
    const signed char tmp_msg_0[] = {-100, 27, -22, 28, 82, 125, -101, -127, -5, -124, -46, -116, -23, 42, 89, -84, 73, -13, 88, -74, -91, -126, 66, -50, 79, -105, -56, 67, 41, 43, 96, -56, -123, 36, 76, -37, -116, -45, -92, 34, 22, -22, -90, 66, 107, -123, 105, 35, 80, -125, 60, 42, 67, -97, 35, -18, -62, -81, 5, -53, 89, 90, -47, 30, 32, -14, 106, 24, -61, 106, -126, -55, 89, 42, 103, 48, 61, 91, -93, 30, -96, -35, -1, -100, 59, -1, -118, -97, 105, 40, -35, -119, 11, 86, 76, -22, 93, -8, -81, 72, -14, -122, -76, 1, -5, 104, 92, -53, 99, 11, -83, 42, 79, 25, -93, 69, -58, 7, 24, -57, 71, 48, 18, 4, 76, -112, 125, 5, 54, 92, 90};
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
    msg.setTimeStamp(0.8712067305175434);
    msg.setSource(13942U);
    msg.setSourceEntity(230U);
    msg.setDestination(13856U);
    msg.setDestinationEntity(81U);
    msg.type = 146U;
    msg.speed = 7085U;
    const signed char tmp_msg_0[] = {99, 32, 36, 112, 121, -34, -123, -19, 93, 117, 30, -11};
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
    msg.setTimeStamp(0.020205638309544804);
    msg.setSource(44790U);
    msg.setSourceEntity(74U);
    msg.setDestination(22070U);
    msg.setDestinationEntity(103U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.2289167929434459;
    msg.bank2p_pgain = 0.06552372112928251;

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
    msg.setTimeStamp(0.9263556782257515);
    msg.setSource(34518U);
    msg.setSourceEntity(236U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(75U);
    msg.op = 140U;
    msg.tas2acc_pgain = 0.5362289160686845;
    msg.bank2p_pgain = 0.6646989267602749;

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
    msg.setTimeStamp(0.5722565271501273);
    msg.setSource(10898U);
    msg.setSourceEntity(69U);
    msg.setDestination(48525U);
    msg.setDestinationEntity(190U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.4976531963370152;
    msg.bank2p_pgain = 0.11230599256746676;

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
    msg.setTimeStamp(0.38795602552641506);
    msg.setSource(11937U);
    msg.setSourceEntity(106U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(234U);
    msg.available = 1622315982U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.3088211384775422);
    msg.setSource(55135U);
    msg.setSourceEntity(18U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(155U);
    msg.available = 1155478013U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.5899710171034014);
    msg.setSource(47958U);
    msg.setSourceEntity(93U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(48U);
    msg.available = 2839247458U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.15266916680666032);
    msg.setSource(56932U);
    msg.setSourceEntity(178U);
    msg.setDestination(50268U);
    msg.setDestinationEntity(194U);
    msg.op = 61U;
    msg.snapshot.assign("COIJGFKHHYTFFOREKKJDBLQGDTEUSUMVB");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.4918264198433073;
    tmp_msg_0.lon = 0.3240350841462879;
    tmp_msg_0.z = 0.6809718439261107;
    tmp_msg_0.z_units = 51U;
    tmp_msg_0.radius = 0.4501705535780598;
    tmp_msg_0.duration = 4959U;
    tmp_msg_0.speed = 0.472885379120631;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.custom.assign("UUBQHVIMVXQDRESATJKAYINSHEFXBJQNDGCZTHXTJJEPYRXRJDMEWGPGPRPKCLBWIWYJHTTDVDAZZSZHLZEYAKJIRCFUAFRWUDBDEHCTVOSFVMYXWSKKWXPCXJIMSLLSLOWHVBLJFUGUECPFNKBFNXQPKDXMBRYKYOQNCGELAGFZIGRRTAWAODGVOPCKPLONEVNGQOYZIAMLTGRNMODI");
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
    msg.setTimeStamp(0.4556215358996373);
    msg.setSource(58268U);
    msg.setSourceEntity(133U);
    msg.setDestination(35421U);
    msg.setDestinationEntity(254U);
    msg.op = 120U;
    msg.snapshot.assign("UCVHOZTDZRQMSHJWUCBERIPRWNHNKLDIAHNKZAKCCGCGDOUFYFHQQUEUGMMSMZCGFSTDDJNTSBINLNPVPUAEKXTYYVYEZSEPHVNQIOPWEBGIWEYOWOZRGMADKLFBJVJBNVWGHYVYIKWIMCCXNOMQRXV");
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4250822855345171;
    tmp_msg_0.amp = 0.2955365231245962;
    tmp_msg_0.cor = 152U;
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
    msg.setTimeStamp(0.6015591559353025);
    msg.setSource(57088U);
    msg.setSourceEntity(118U);
    msg.setDestination(61266U);
    msg.setDestinationEntity(8U);
    msg.op = 248U;
    msg.snapshot.assign("KYGHAYPVDDFQOTNTWOHSTJMBCZMOTYXXIWLVATCIXVGFNEZRXYFPQZNWHOABERGKEGMYZKJUBVAJDROSOLGFUZAWFPMBIQEBARVARKNJKEBEISJBXSNSJFNNHLETGSTYULSADIIXDPJUGYCZVUHWMTQXLROFRMRHEUGQCVFLMXDXHDNTKYEQCWDCIPQKMAKBMHTZPZVYHWGLLUCDFNYKIULQOJZQMCQLUSJPENJIBOSPFOCBUCWS");
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("KPLYTEQORYBXAONUSIRIVCBJUANXLNSXBSOVNFQXIUWXJTTWPDMPFJXBDKRPKOXDBDEEOCFLJGNYIWSLCZFNMTHRWKHLCQNXHBHGFMVDVGEQYAOHPUVZPVBARXTKTPDEFRMINJUZLECHUWOKZYLICHBWGWQVMHWYMQOSRWGFDKVJGDGUJNTCYYZGQUJK");
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
    msg.setTimeStamp(0.44866973251532805);
    msg.setSource(44827U);
    msg.setSourceEntity(204U);
    msg.setDestination(44135U);
    msg.setDestinationEntity(102U);
    msg.op = 60U;
    msg.name.assign("KOTMRFDZQCIRLQXDHRWJDSUZZAFVPHTTYMQGWCHIYDHTOLBXFRNMZXTKBCCMOGJGALNVFFWUZCPSVPPJW");

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
    msg.setTimeStamp(0.22500106077191262);
    msg.setSource(34141U);
    msg.setSourceEntity(174U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(212U);
    msg.op = 239U;
    msg.name.assign("GTZALDHNPOZUSIUICEBBYPXKPPVNAKPUAMEMQHWMBQGRNZKVVFIDQJ");

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
    msg.setTimeStamp(0.6054329980917342);
    msg.setSource(53398U);
    msg.setSourceEntity(210U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(218U);
    msg.op = 47U;
    msg.name.assign("JSGWTRDMOAYIAODITCOECCVFMHEEZQQUPFOUIORGPEEYRBQISKNLZRKDTQFXJFEWVBVJNKPVOCWYZRHISVTVQSXJGZOVTDXVTLGZARHPCBMZADBHJSIFEUYPFTDUBSVUKDKYTIXKCBMAGLDVTLBTKSXGWMZLAQQJHRICCWWUWHYGLWWGXSYNPFBIZOBUJMKCPUGXMPNYWLXQMYXMOHICQODAYHNXSNDKFPLFNZBSAERMANPEJNE");

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
    msg.setTimeStamp(0.9546462411365096);
    msg.setSource(34658U);
    msg.setSourceEntity(89U);
    msg.setDestination(5982U);
    msg.setDestinationEntity(154U);
    msg.type = 43U;
    msg.htime = 0.15705158320419454;
    msg.context.assign("YZSOHBEZSWGQHBNZYSCQDCLEPS");
    msg.text.assign("AOWOMFZJQJSYFEDSYRIJACHGBPCWBMHVIGXUYQBAZQZFVMXKLLVHYNKXJRBKAQHDYRJSLSNFXASXGPJLUIAHKOGBOUV");

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
    msg.setTimeStamp(0.6854580386675253);
    msg.setSource(16607U);
    msg.setSourceEntity(113U);
    msg.setDestination(64082U);
    msg.setDestinationEntity(33U);
    msg.type = 37U;
    msg.htime = 0.1119445218166959;
    msg.context.assign("CUAMFPRGWQIRCKTSBZQFNFUXFPUHKMCBKAUGRCIFGNDDIKMCDTJJBDBRQTEXFZCHJIMSGPHFPVEUOWRZPQBJKJIEQAYUUOOVAQWLJUKRHDHPEVZJJNVZLFZPHWEGYTMMGBYNHWBJYSXVEIIGOTYSKXEXARLQSBXCT");
    msg.text.assign("PXYDHGJGLZRNDBBVCIROUEFDNAOYICHYZRXROSXT");

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
    msg.setTimeStamp(0.8235576046839506);
    msg.setSource(17196U);
    msg.setSourceEntity(78U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(230U);
    msg.type = 185U;
    msg.htime = 0.6568452175650665;
    msg.context.assign("YLLKZVWXPRPXVKEYFQOCKWGIAWDGFXSBNARZERINPTDDLKBJEQCUAXMCYYOZXSUKBJSEMDNCMLQHNDVOHCPYKYYQUNGUGROPVVVGWGYQFZPKXLINWMOJLSTHACUMJVFNHSAWOUSEDGTIWIQLJHBTURNSZVCPAZPZELEGRKDJ");
    msg.text.assign("HSJZDYRGNVILXVTBLQVKRVWOAFRPIMPQEFTLJMKHXFNRDOSVWDBKTDROAIVDZQBORBEKSDPEULCPRUBFECXOUAWRLLIBZRMIJQOATSQEPIXZEEZGGFZLNNTYBYDQSWCCWIJKZJMIVJPVGYFHFXMSXTQYYWNFDYMDSTUZHQJXLQUSYWMNVRKGKLHJKPTMOKUCXLDHSBABITQWNSEJPAHUJZNGPBFMCCPHUAKG");

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
    msg.setTimeStamp(0.5713150594538943);
    msg.setSource(35531U);
    msg.setSourceEntity(116U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(68U);
    msg.command = 66U;
    msg.htime = 0.13596914477000321;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.htime = 0.8645946032480971;
    tmp_msg_0.context.assign("MWPZNGUSZMYRZFXJGOSKSPDSMHIIKSKRXCYPBCVATCXDHUY");
    tmp_msg_0.text.assign("YBQWUVWVSDHZPOTCRGYMCPNXTOFJJKJBHCNAWINUHNGRNCEDAVRHFRETAVLHZRYOIJUYRMKW");
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
    msg.setTimeStamp(0.6001679704102897);
    msg.setSource(25309U);
    msg.setSourceEntity(64U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(211U);
    msg.command = 74U;
    msg.htime = 0.933382444052249;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 242U;
    tmp_msg_0.htime = 0.2720674789763122;
    tmp_msg_0.context.assign("WFNZVDRQWRVBVCQSWSELRNHOMPNCSIBEZNUPQABRKJFUXLTKFLHNXOGTHAYCZSWARRGITXVHZJVMGRKUCDOIFJDYUQG");
    tmp_msg_0.text.assign("YCBWESEFERXNAEHISJOCMVMVHRRXQANLEOHRDUJOIAXLNLWSMMPQWGWIQUGYFCYCABPZBXACVRZULTHPRWSMNDUEDQOOSOLDKKAGOFAXFKJFHTCUIEBVTGIGCSSQTFXTUZZIFYPWHRVOXZMDCRZYLXJUCJSQWDIBAGJWMUJHJMSVH");
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
    msg.setTimeStamp(0.2791474948097258);
    msg.setSource(31030U);
    msg.setSourceEntity(118U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(209U);
    msg.command = 21U;
    msg.htime = 0.37421863120950305;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 40U;
    tmp_msg_0.htime = 0.7802450313627376;
    tmp_msg_0.context.assign("PRRJWQFSOBSRGVJDJXQDGJAUKPYFMBRTCNLEBCXFVTSWSKQYAUMKFKBCWZJLMWZMNXLURAAVNNGLHIXVGZEHOORSPJUKXMSTTITRMLNVEDYJZGMHFYYAQFEYWUIIOCLOVXPIUUBPHOVFTPSJIPJFRQDZARKKAAJVEBZPQDIWTEMLBCHVKQZWIWNOQOFDOGHTGVTFXQDDIXCHUGBXLXNWHZMBKNAMSYOHTCCGIYUENPEPALYR");
    tmp_msg_0.text.assign("LZJXULLCBAMQLMPQOGUORJCQXNGKNHTHBAIMXVZBJNP");
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
    msg.setTimeStamp(0.8470027380701391);
    msg.setSource(7427U);
    msg.setSourceEntity(246U);
    msg.setDestination(12047U);
    msg.setDestinationEntity(134U);
    msg.op = 110U;
    msg.file.assign("CCFZPNIRROEUPHMGBHYAOYZURQHNQZUXESXDIUQSQYPYTZVFMFRNMIAMFRDAWEVONQBIUHARHASOSZEBUAEPSOQZDFWBBLYWCVJZSNXXNOBTGVKTJKKMCZZNGTFNEDSPALOGJMX");

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
    msg.setTimeStamp(0.6764426517390812);
    msg.setSource(40440U);
    msg.setSourceEntity(90U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(152U);
    msg.op = 98U;
    msg.file.assign("FKNPMYLXOZYBSYYJHNJOFJVSMGNFRUXYEQWMLHFKQBTLHXLTLQRFDSNRINCQQOAHAQEYUYSKETXXGBEIPNQPMMRREHISCJPWIWCOJTXODAUZWUIFYBMJHEBTNUOFCTPJMVXLCTKEDLDVGKAHHPOLSNVTUEWPJA");

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
    msg.setTimeStamp(0.962135003070251);
    msg.setSource(11839U);
    msg.setSourceEntity(169U);
    msg.setDestination(32974U);
    msg.setDestinationEntity(159U);
    msg.op = 7U;
    msg.file.assign("BFZEARJNNYZMSGEGBVYGAMTIWFPZMGGKONFKTSSZKGJDQCQJUUSXRHVIPFERZFTDKXVVBAXRSHCASCFTAFICQEPGDSPIQWZDXYKVUXENJPOUHHWIFBIZDQKULKRPYLEIYBTNYWTNLDCVMUSBRJUCOXFQULSPBWMVOJMDQXDMOHTWKUKKQHJYAVDERXYCHIEXLCWENRPLSXLGLJL");

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
    msg.setTimeStamp(0.9288971324233807);
    msg.setSource(10222U);
    msg.setSourceEntity(29U);
    msg.setDestination(23572U);
    msg.setDestinationEntity(131U);
    msg.op = 169U;
    msg.clock = 0.3088438668600523;
    msg.tz = 121;

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
    msg.setTimeStamp(0.3920841559912789);
    msg.setSource(41955U);
    msg.setSourceEntity(148U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(40U);
    msg.op = 49U;
    msg.clock = 0.05531558765798572;
    msg.tz = 3;

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
    msg.setTimeStamp(0.854473694744684);
    msg.setSource(45083U);
    msg.setSourceEntity(233U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(124U);
    msg.op = 65U;
    msg.clock = 0.046597677183536135;
    msg.tz = -128;

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
    msg.setTimeStamp(0.189254248411727);
    msg.setSource(36247U);
    msg.setSourceEntity(134U);
    msg.setDestination(41472U);
    msg.setDestinationEntity(55U);
    msg.conductivity = 0.10802501043101576;
    msg.temperature = 0.2817934432769944;
    msg.depth = 0.3538263735332918;

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
    msg.setTimeStamp(0.4521445658191766);
    msg.setSource(12545U);
    msg.setSourceEntity(149U);
    msg.setDestination(60833U);
    msg.setDestinationEntity(14U);
    msg.conductivity = 0.6464320714807846;
    msg.temperature = 0.9174964716853318;
    msg.depth = 0.692837867343895;

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
    msg.setTimeStamp(0.6117552403842524);
    msg.setSource(47396U);
    msg.setSourceEntity(93U);
    msg.setDestination(40608U);
    msg.setDestinationEntity(80U);
    msg.conductivity = 0.8525590649981145;
    msg.temperature = 0.4377777956850907;
    msg.depth = 0.2675982612131832;

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
    msg.setTimeStamp(0.504910744395887);
    msg.setSource(5308U);
    msg.setSourceEntity(12U);
    msg.setDestination(51057U);
    msg.setDestinationEntity(223U);
    msg.altitude = 0.5840473001208141;
    msg.roll = 50694U;
    msg.pitch = 57074U;
    msg.yaw = 18913U;
    msg.speed = 4095;

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
    msg.setTimeStamp(0.21850714043820918);
    msg.setSource(57547U);
    msg.setSourceEntity(29U);
    msg.setDestination(13681U);
    msg.setDestinationEntity(212U);
    msg.altitude = 0.9755176210753616;
    msg.roll = 30899U;
    msg.pitch = 45191U;
    msg.yaw = 47362U;
    msg.speed = -4503;

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
    msg.setTimeStamp(0.8408876623989994);
    msg.setSource(32100U);
    msg.setSourceEntity(122U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(7U);
    msg.altitude = 0.20763276292900035;
    msg.roll = 3810U;
    msg.pitch = 4833U;
    msg.yaw = 26253U;
    msg.speed = -15530;

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
    msg.setTimeStamp(0.5762130567022575);
    msg.setSource(18280U);
    msg.setSourceEntity(169U);
    msg.setDestination(64877U);
    msg.setDestinationEntity(128U);
    msg.altitude = 0.9030692947131586;
    msg.width = 0.33201864635449596;
    msg.length = 0.6719618970741524;
    msg.bearing = 0.28056063586514135;
    msg.pxl = -9389;
    msg.encoding = 158U;
    const signed char tmp_msg_0[] = {3, 83, -106, 55, -38, -23, 52, 107, 10, -38, 120, 113, -117, 88, 55, 100, 41, 37, -53, 41, -63, 48, -73, -84, -107, -47, 118, 54, -57, 89, -90, 95, -78, -31, -45, -6, -90, 57, -95, 91, 55, -103, -72, 23, -2, -75, -53, -127, 104, -58, 110, 104, 113, -114, 3, 25, -43, 4, -118, 85, -94, 59, -83, 21, 93, -61, -114, -6, -127, 111, 98, -71, -53, 115, 111, 101, -33, 30, 25, -122, 107, 37, -4, 124, 105, -35, 21, -73, -61, -122, 50, -44, -67, -77, 73, -93, -128, 2, 73, -113, -116, -60, 23, 33, -64, -56, 12, 49, 108, 2, -118, 65, 93, -128, -47, 100, -16, 85, 74, -123, -30, 42, 40, 6, -5, -62, -71, -125, 116, -72, -20, -56, 101, 126, -72, 52, -82, -28, 111, -67, -81, 116, -111, -52, -4, -91, -31, -18, -121, 113, -10, -74, 22, 118, -58, -93};
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
    msg.setTimeStamp(0.7768292826482889);
    msg.setSource(37755U);
    msg.setSourceEntity(196U);
    msg.setDestination(20530U);
    msg.setDestinationEntity(68U);
    msg.altitude = 0.6862705125849116;
    msg.width = 0.1693152675005889;
    msg.length = 0.4638515266660994;
    msg.bearing = 0.23032831963646627;
    msg.pxl = 25561;
    msg.encoding = 10U;
    const signed char tmp_msg_0[] = {-51, -10, -109, 34, -54, 23, -66, -96, 7, -92, 5, 40, -89, 62, -79, 107, -20, 41, -92, 122, -51, 43, 67, -61, 89, 63, -28, 126, 44, 113, -30, 95, 28, -94, 63, -94, -20, -110, 23, -62, 32, 117, 57, 15, -127, -5, -114, -68, -102, -19, -89, -66, 1, -52, 6, -58, 19, -25, 122, -21, -122, 81, -46, 95, -44, 38, -51, 121, -116, -122, 121, -56, -20, -104, -75, -40, 92, -104, -69, -54, 20, 63, -126, -91, 124, 86, -78, -98, 71, -100, -3, 97, -1, -111, 27, -91, 4, -127, 16, -81, -107, -75, 89, 40, -20, -103, 64, -85, -109, 58, 8, 83, -89, 16, -51, 120, 82, 94, -69, 126, -113, 81, -80, 124, 71, -80, -3, 67, 35, -37, 39, 110, -117, 56, 50, -58, -92, 43, 123, 66, -8, 67, -29, 77, -70, -81, -115, 82, -116, 15, -63, -61, -125, 87, -119, -6, -15, 6, -110, -36, -44, 37, 82, -96, 21, -107, -80, 69, 32, -92, 49, -40, -40, 126, -67, -9, -102, 56, -73, -101, 68, 65, 64, -99, 53, -69, 64, -82, 3, -100, -39, 89, 78, 25, 92, 0, 95, -78, -73, 125, -49, 87, -25, 100, 71, 112, -56, -21, -6, 125, -80, -3, -91, -88, -38, 86, -90, 11, 83, -107, 37, 63, -9, -77, -102, 41, -111, -85};
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
    msg.setTimeStamp(0.6754197793125452);
    msg.setSource(53799U);
    msg.setSourceEntity(6U);
    msg.setDestination(44139U);
    msg.setDestinationEntity(192U);
    msg.altitude = 0.57610447613361;
    msg.width = 0.1461185733854916;
    msg.length = 0.6762479574522406;
    msg.bearing = 0.24841237384548576;
    msg.pxl = -17973;
    msg.encoding = 220U;
    const signed char tmp_msg_0[] = {119, -83, -73, 91, -56, 65, 29, -94, 123, 40, 98, 51, -32, -115, -42, -13, 111, 7, 13, 58, -81, 109, 36, -12, 58, -58, -79, 110, 123, 107, 87, 29, 105, 52, 58, -64, -38, 29, 119, -119, 99, -114, -14, 77, 62, 48, 116, -11, -89, -63, -54, -93, 99, -69, -95, 33, -126, 76, -120, -91, 110, 35, -52, -19, 97, -64, -11, 21, -48, 103, -101, -7, -117, 56, 101, 33, 18, 54, 41, -47, -104, -83, 20, -59, 49, 89, 70, 8, 20, 54, -102, 36, -123, 116, -78, -15, 13, -99, -102, -81, 16, 62, -42, 42, 101, -65, -91, -15, -2, 20, 29, 31, -105, 69, 114, -43, 77, 90, -101, -39, -70, 13, -50, 27, -128, -16, 97, -35, -61, 22, 124, 122, -53, -33, -5, 90, 3, -107, 101, -50, 17, 5, -16, -72, -125, 1, -1, 14, -94, -9, -66, 19, -45, -57, -95, -21, -6, 16, 65, 85, 52, -91, -23, -53, 123, -82, -7, -5, -19, -18, 106, 70, 69, -85, 4, 3, 1, -95, -81, -26, -77, 68, 61, 10, 90, 52, -77, -123, 36, 70, -2, 103, 69, 30, 52, 58, 116};
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
    msg.setTimeStamp(0.42413404265762944);
    msg.setSource(35847U);
    msg.setSourceEntity(172U);
    msg.setDestination(38334U);
    msg.setDestinationEntity(114U);
    msg.text.assign("XQWJLUXDYOVUPEFQDUTUZBHKRAREGRYCRLYBFIN");
    msg.type = 58U;

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
    msg.setTimeStamp(0.17032834043704614);
    msg.setSource(22684U);
    msg.setSourceEntity(61U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(59U);
    msg.text.assign("CQUGZTKRXAVMFHYLAARFPPIADYIMVXFKDLGCWKJLYKULOEORVXPFKMJEVTJXTPQDXYOAITAHMPPSRPTOREYJSUUZYBJZXEQLBQQHSSIVVMGFKFIRJWTTSHYCDTNNOHOBEVJCRJCNXCKAENNFCOSVYSGUPNMZCMIQIPUDWWILRYGXALWWGGGSJPBVEWZXUSFQHYLUQEQOKGFZSZINOL");
    msg.type = 226U;

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
    msg.setTimeStamp(0.509366347066092);
    msg.setSource(22857U);
    msg.setSourceEntity(26U);
    msg.setDestination(48804U);
    msg.setDestinationEntity(115U);
    msg.text.assign("ARHNVUTWPNVZZNFSYLCOSSBRAOQMEAMITYLALRLHWIBMKMGFIKEHCKYITTSEEJPQVBVLPSRUVFVUUHFXSQATXKJVMADUXIWUFXKPJICWOMMJCCGWOZWODGRCQYZUTKJWZOYXNCAVNNAZWYZISPOSZGPANGOFBGFYQDQNJEEDTDBIJHTVPFOCQQYLBNSQPWCBFMMEHYUPXGQLDXUJDWBKYFHBZTHVXJEIZGRHBTKMDLPRRKO");
    msg.type = 232U;

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
    msg.setTimeStamp(0.07062254424372605);
    msg.setSource(1373U);
    msg.setSourceEntity(20U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(21U);
    msg.parameter = 0U;
    msg.numsamples = 12U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 2626U;
    tmp_msg_0.avg = 0.29813796475048904;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8622789255427641;
    msg.lon = 0.6493094193826003;

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
    msg.setTimeStamp(0.5480935988489154);
    msg.setSource(25187U);
    msg.setSourceEntity(85U);
    msg.setDestination(20803U);
    msg.setDestinationEntity(243U);
    msg.parameter = 205U;
    msg.numsamples = 176U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47735U;
    tmp_msg_0.avg = 0.20904022671804445;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.36889137166115493;
    msg.lon = 0.27669530255563224;

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
    msg.setTimeStamp(0.2587859869850475);
    msg.setSource(214U);
    msg.setSourceEntity(188U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(28U);
    msg.parameter = 215U;
    msg.numsamples = 194U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55362U;
    tmp_msg_0.avg = 0.058316255727516086;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.2108333487670595;
    msg.lon = 0.900950568999141;

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
    msg.setTimeStamp(0.8657891212210189);
    msg.setSource(41356U);
    msg.setSourceEntity(228U);
    msg.setDestination(27470U);
    msg.setDestinationEntity(174U);
    msg.depth = 51925U;
    msg.avg = 0.599689714114035;

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
    msg.setTimeStamp(0.7338368229184864);
    msg.setSource(27354U);
    msg.setSourceEntity(224U);
    msg.setDestination(1407U);
    msg.setDestinationEntity(29U);
    msg.depth = 14952U;
    msg.avg = 0.12572379151579283;

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
    msg.setTimeStamp(0.3680977757553384);
    msg.setSource(40150U);
    msg.setSourceEntity(30U);
    msg.setDestination(34373U);
    msg.setDestinationEntity(225U);
    msg.depth = 43018U;
    msg.avg = 0.2139026045764062;

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
    msg.setTimeStamp(0.601730703859154);
    msg.setSource(19266U);
    msg.setSourceEntity(156U);
    msg.setDestination(11212U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.7852061188456658);
    msg.setSource(48078U);
    msg.setSourceEntity(122U);
    msg.setDestination(23770U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.03713907623846768);
    msg.setSource(12449U);
    msg.setSourceEntity(90U);
    msg.setDestination(40320U);
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
    msg.setTimeStamp(0.6964136872564912);
    msg.setSource(7303U);
    msg.setSourceEntity(252U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(7U);
    msg.sys_name.assign("KAVBSWRMLBEENGXDNWTHOUTYUEJBUYTSITIWFHDGFKOOVZVCPJFDCHKGLXGRJXHTGTLTDENZS");
    msg.sys_type = 61U;
    msg.owner = 39364U;
    msg.lat = 0.703295513677032;
    msg.lon = 0.7696971587607375;
    msg.height = 0.5165356874064901;
    msg.services.assign("EWPWUJKKOAOWYIREOXFBWPCHXVPFJMNHKXICIJSUQUFRIDHPJVYSVBZAZAPKMALBU");

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
    msg.setTimeStamp(0.07529391812707542);
    msg.setSource(17514U);
    msg.setSourceEntity(61U);
    msg.setDestination(3064U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("KUNGTDAPBGV");
    msg.sys_type = 70U;
    msg.owner = 48210U;
    msg.lat = 0.4882130053944216;
    msg.lon = 0.29783731089011645;
    msg.height = 0.6292072594047478;
    msg.services.assign("PGKHNQKRZEISTDQUAY");

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
    msg.setTimeStamp(0.582947387988655);
    msg.setSource(52702U);
    msg.setSourceEntity(192U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("VWHTCBYKCMHJVMMNFRFOUGSXYHSBZUXLHVVQLSEMUCEQLJRAQZGMZNDNWISRRBFIITEECLLJGDUKTLTAAEYUTLASANXVOTRYXBECAYYOWXBUJRMXHPHVKINSIPBEYFXPXWZIKJKOFDEZGIDZDOSOHUVJYRJBFOXDZPBDYGKKTGPKNWBADPKHXNULLJZQVMQTNHTVFRGWUZIWMBNIYCGOVDSFLDRQFPMSGQCZECSGQFWOTAPJCHW");
    msg.sys_type = 49U;
    msg.owner = 8015U;
    msg.lat = 0.6416361384464895;
    msg.lon = 0.9160551956519318;
    msg.height = 0.06823587525768704;
    msg.services.assign("DFBVADJEREKEJFCFGXIHYMSCQIMYJJXKTBCTMTSYZXUNGPTOCKBFJSQOZQQWXRCLAESBGAGWUAXNRBDZZZKVGUBVJTESIYXFVFUKQSLJHPLDJUAQOBOOVILJEAKKWIUNAPHPSREPGRXHCIUPFYAXYTQWVHDGD");

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
    msg.setTimeStamp(0.9414862537449152);
    msg.setSource(29969U);
    msg.setSourceEntity(155U);
    msg.setDestination(62309U);
    msg.setDestinationEntity(166U);
    msg.service.assign("DMKFUTZROWRBXBGLDVSJLTIXECBYLJNHGJQVSOBMILOIYUQNJZUSRXTEOFTPFAVXDPLCYFVKOTVTIPFPKJOPOQMDEBRBQRGQMNACKMQVSYERHZXVWKNMCYCGHPSHSZDSACYGELQIGOWLXYXRSZQSLFSJLDGHTKEAPBZBYMUNMDIXIWJKNLUWEVQUZWIZCUNATFOEAJAYFXHDTEGJKFYZGXNWIRRPHFHWEWUIAHGMPWMJHORUNBTZKPCK");
    msg.service_type = 105U;

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
    msg.setTimeStamp(0.7425421800607379);
    msg.setSource(46939U);
    msg.setSourceEntity(71U);
    msg.setDestination(35962U);
    msg.setDestinationEntity(204U);
    msg.service.assign("JUHDRCZUMDCMRVSTNQBKKZVMWQNUTUORGMUTOXOWZQPTBVFBAAESIMNAYZMIQXFSHKYXGRYJKUNHCDABOMFCRMPDKDJQ");
    msg.service_type = 82U;

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
    msg.setTimeStamp(0.24734139471162075);
    msg.setSource(14357U);
    msg.setSourceEntity(64U);
    msg.setDestination(45252U);
    msg.setDestinationEntity(201U);
    msg.service.assign("QWOPYODWGTEHZZBLDEMPTRWHKHOSVHZDMHLWCXKLQGGJFMZUJTFQGSIUWVJBSJPFDABDB");
    msg.service_type = 159U;

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
    msg.setTimeStamp(0.07373558373513145);
    msg.setSource(19992U);
    msg.setSourceEntity(43U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(75U);
    msg.value = 0.7344719119478903;

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
    msg.setTimeStamp(0.6586962334844935);
    msg.setSource(16410U);
    msg.setSourceEntity(145U);
    msg.setDestination(58852U);
    msg.setDestinationEntity(10U);
    msg.value = 0.43772001082780276;

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
    msg.setTimeStamp(0.26721579397017403);
    msg.setSource(41372U);
    msg.setSourceEntity(229U);
    msg.setDestination(42850U);
    msg.setDestinationEntity(11U);
    msg.value = 0.14233111922022346;

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
    msg.setTimeStamp(0.292575453475444);
    msg.setSource(52265U);
    msg.setSourceEntity(12U);
    msg.setDestination(59281U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9771590408664012;

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
    msg.setTimeStamp(0.09472151826546038);
    msg.setSource(53695U);
    msg.setSourceEntity(240U);
    msg.setDestination(11991U);
    msg.setDestinationEntity(144U);
    msg.value = 0.9595364921198115;

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
    msg.setTimeStamp(0.557521162161042);
    msg.setSource(26676U);
    msg.setSourceEntity(227U);
    msg.setDestination(11527U);
    msg.setDestinationEntity(164U);
    msg.value = 0.20965577432649618;

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
    msg.setTimeStamp(0.4300422728840435);
    msg.setSource(33003U);
    msg.setSourceEntity(141U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6947274225616399;

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
    msg.setTimeStamp(0.5336115119106882);
    msg.setSource(7447U);
    msg.setSourceEntity(125U);
    msg.setDestination(64675U);
    msg.setDestinationEntity(246U);
    msg.value = 0.21154165079051823;

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
    msg.setTimeStamp(0.34733428442262226);
    msg.setSource(58073U);
    msg.setSourceEntity(245U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(170U);
    msg.value = 0.5939477574210317;

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
    msg.setTimeStamp(0.7645354432363943);
    msg.setSource(45190U);
    msg.setSourceEntity(160U);
    msg.setDestination(30793U);
    msg.setDestinationEntity(58U);
    msg.number.assign("IDVKQZTWYOBEZBNYXVCDCPIBAWGEDQTGKUNNJWWMNOEFPDLQHLCLVCYAHIHSXTZFMGQVTYVQYKTPELRIAVQOHUJJDBSNCIBDBSTISPYHAHLJISMOEMBKVUCYTXZBXKWIRVCHRQIWTLARF");
    msg.timeout = 64345U;
    msg.contents.assign("VHYPJTPCVJZFXB");

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
    msg.setTimeStamp(0.05636802887607606);
    msg.setSource(32576U);
    msg.setSourceEntity(12U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(135U);
    msg.number.assign("LMPPPPICXFAUUDUDZPSRULWAEYJJXBMQYCXZFAERTWOSUOBVDHOCMVKTGSFXJAFGLIKYHSCZJJLSBWNOVQFBCIJOHSTCVWDYUBVMRLYDZNGHTDZHJQXECAXRMRJKJAZXIEPKSNNBCGTYZMVNHKTBMWXHKNICFEJILGONRSEFXUQITLLIPGOGVNAEMDQREBFUYGCPVQRKPAXZPFBTUUGSTVNOAWYWARWFKW");
    msg.timeout = 38250U;
    msg.contents.assign("GBOCAVVLOQQSTPLBUXJSZCHFFEFWWDRCGOMCCUZXOHUCZDIJXMGANVFVWEEBWZDPCISGKCQENTTGQYPZSPWWIRYGPCZXVDQQNGRUEAGBFIGSBROJRBTYTHMTVINBIALHTNKLAUHN");

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
    msg.setTimeStamp(0.5550171309434268);
    msg.setSource(11253U);
    msg.setSourceEntity(205U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(65U);
    msg.number.assign("BXHWPUAZNFPUVLNHNQIPYGVUNKWMIDESDRFAIGNUREJILVAIYRTDDJRWFOWCBYQCOMJZSHYQNTINSATUJEGSDYBPGVSJYGMFVXHETKLEGTZPEKFDXFNKMAOOBGCVUIRMBAOVDRCZMBZFVNGVTYWQMGIPWXAAWSWLMQEGFXXCQELCBLZJOVMKSJQOXYDYUHLQSBHIEXIHC");
    msg.timeout = 24108U;
    msg.contents.assign("REFYNKOXQZQGLFTSYGOJCYDAQNVIOKKHJGLAEUGMF");

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
    msg.setTimeStamp(0.43174922830687834);
    msg.setSource(57924U);
    msg.setSourceEntity(156U);
    msg.setDestination(22487U);
    msg.setDestinationEntity(161U);
    msg.seq = 2786239024U;
    msg.destination.assign("ZFRICJJBADVIKCWNOWXJJFFOQXGZITHRDKZHWOYNEPAQYYCMPOETYSFXRLMENL");
    msg.timeout = 56542U;
    const signed char tmp_msg_0[] = {-122, -61, 11, -32, 1, 101, 107, 37, 31, 100, -117, -113, 55, -6, -36, -26, -59, -120, 72, -67, -98, 2, 55, 83, 76, 83, -58, -96, 92, -127, 58, 107};
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
    msg.setTimeStamp(0.16111412692823768);
    msg.setSource(17857U);
    msg.setSourceEntity(209U);
    msg.setDestination(38141U);
    msg.setDestinationEntity(146U);
    msg.seq = 440631524U;
    msg.destination.assign("MUHCZTOSJXIOTQPXIZJCOBCGIERTRMDBPTYZDKKOPJFFSJYWVZTPYHAXGHAHFHACXDOZSDBVBLWCQHRJOHBUMKXMYNSGOMSURFDULUBDMSYKFENNETVYILHSXXLPAOEPQWMTMPDNBKGCLLOGAJWDIWNBFSYACIKZBMUQNQPEJXMNVAVWALAXTJDLSZUGNRIYVRVPVNIDGGLEHTOZTRQREKIYAZWKVFIWRVFUCQCRQQJ");
    msg.timeout = 21472U;
    const signed char tmp_msg_0[] = {-82, -93, 87, -66, -99, -63, -102, -63, -11, 67, 73, 57, 69, 34, -102, 16, -73, -70, -92, 46, -38, -16, 93, -123, -91, -30, 17, 99, 90, -113, -23, 77, -28, 70, -119, 81, -95, 24, -10, 122, 89, -108, -58, -37, 77, 117, 9, -1, 54, -96, 40, -39, 40, 114, 95, 86, 95, -30, -39, 86, 42, -68, -67, 87, -12, -48, -82, 31, 123, 93, 71, 83, -44, 98, -79, -48, 55, 86, -45, -32, -27, 110, -121, 107, 113, -106, -101, 23, 65, 101, 50, -84, 5, 52, -2, -79, -36, 13, -29, 51, -31, 19, 98, 2, -71, -5, 119, 0, -37, -44, 32, -22, -1, -18, 45, 116, 73, 70, -75, -98, 105, -79, -49, 79, -126, 14, -29, 82, -8, 4, 86, 31, -73, 98, 62, -117, 9};
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
    msg.setTimeStamp(0.35689389702800334);
    msg.setSource(40405U);
    msg.setSourceEntity(211U);
    msg.setDestination(24183U);
    msg.setDestinationEntity(130U);
    msg.seq = 1091052536U;
    msg.destination.assign("STTXZLKEIVKCGPSFUVQBNANENOYKTZOOGJTOTQWXGEFBJUPQLSWKOBKCCPDDMHNYRHJGDGTFJLS");
    msg.timeout = 45029U;
    const signed char tmp_msg_0[] = {-104, 62, -23, -15, -123, 1, -38, -99, -2, -71, 49, -65, 87, -117, 43, 38, 97, 103, 35, -19, -85, -70, 25, 6, 5, 71, 120, -44, -111, -65, 34, -50, -42, -10, -22, -20, 109, -98, 54, -74, -57, 120, -93, -56, -65, 50, 88, 90, -21, 102, 3, 59, 77, -93, -15, 62, -115, 53, -122, 96, -72, -74, -112, 5, -123, 82, -120, 28, 33, 0, -101, -38, 69, 6, 30, 4, 125, -20, 19, 120, -37, -76, 53, 5, -63, -46, -126, 8, 122, 116, -109, -12, 103, -58, -75, 97, -55, 37, -16, -7, 105, 112, 70, 102, 116, 61, -61, 85, -65, -105, -58, -58, -60, -90, 108, 109, 4, 113, 93, 19, -67, -74};
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
    msg.setTimeStamp(0.5406533669925562);
    msg.setSource(5506U);
    msg.setSourceEntity(205U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(9U);
    msg.source.assign("ACYAQEALMPNWUKCDSTQFBQWGGCGYRYYNNFBVOIRFIFUNDAYWMRSKREHTOVLLSHGILES");
    const signed char tmp_msg_0[] = {62, 107, 3, 22, -66, 4, -63, -73, -117, 9, 56, -31, -108, 99, 38, -47, -34, 15, 101, 29, 91, 22, -85, -117, 110, 96, 49, -67, -74, -124, 96, 17, 80, 115, 2, -82, 19, 53, 38, 34, 124, -89, 1, -22, -49, 74, -85, -58, -19};
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
    msg.setTimeStamp(0.968650214242397);
    msg.setSource(23884U);
    msg.setSourceEntity(207U);
    msg.setDestination(58602U);
    msg.setDestinationEntity(242U);
    msg.source.assign("NQEGTVZOSFNNGNAVRXTRQZLYUDBKBQXDVHHRTXIFFDTAYCCZOGYJSUBX");
    const signed char tmp_msg_0[] = {123, -20, 38, 91, 9, 49, -108, -28, -1, 65, -7, 80, 97, 87, 88, 20, -2, 60, -28, 96, -107, -4, -121, -68, 109, -44, -104, 66, -1, 7, 82, 95, 61, 113, -69, 66, 107, -54, -38, -36, -10, 30, 19, -94, 116, 5, 29, 85, -22, -77, 95, -41, 37, 63, 50, 29, -48, 91, 96, 122, -103, -40, 37, 101, 49, -78, -40, 85, 86, 7, -30, 106, 48, -90, -43, 33, 91, 79, 45, 21, 16, -100, 50, -40, 88, -101, 65, 8, -70, 19, 77, -99, -48, 3, 75, -44, -55, 53, -61, -62, 40, 83, -75, 43, -92, -54, -9, 44, 116, -65, 19, 67, 109, -125, -73, 74, 84, -68, 116, 117, 99, 117, -98, -87, -47, -71, 75, 90, -19, -45, 37, -68, 105, 116, 82};
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
    msg.setTimeStamp(0.14653876324985005);
    msg.setSource(34375U);
    msg.setSourceEntity(23U);
    msg.setDestination(14693U);
    msg.setDestinationEntity(249U);
    msg.source.assign("OEENMRWLTSUMJKDOPRDEMJHZDRDZWKBMXQLIUWQXJNIXIODZHBPRQNUPWVPBRZVNHDKKYYKXMTXSSCHEQWHWGEFIGYQFWUFZUGTNJIVQVSJSNGLXOTVPLNAKLIOBYRFXHYBVTUVJOFFNYYAPSTOLPATQVCAKJUCJRFHZSYMDCACGBPYFRUSRIBLKSKXJWAHEXD");
    const signed char tmp_msg_0[] = {-1, -3, -57, 12, -9, -117, 102, -97, 31, -48, -16, -68, -86, 17, -122, -6, -33, 117, -29, -126, 50, -126, 122, -117, -112, -109, 92, -90, -72, 34, 30, 69, -26, -23, 25, 116, -53, 88, -100, -15, 79, 0, -62, -97, 22, -44, -30, 101, -106, 72, 38, 18, 30, 107, -100, 61, 89, 111, -28, 17, 3, -109, -102, 42, 38, -78, 95, 27, -16, 23, -18, 97, 68, -66, 103, 116, -113, 12, -71, -117, 60, 123, -93, 31, 53, -69};
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
    msg.setTimeStamp(0.19910095686825358);
    msg.setSource(62179U);
    msg.setSourceEntity(55U);
    msg.setDestination(4547U);
    msg.setDestinationEntity(73U);
    msg.seq = 1292112831U;
    msg.state = 218U;
    msg.error.assign("TDNRPYGUKUVTVLYWWJJFWKIKYGADAXHKNAZBDLIMGXZVMMHKZXRFNIKSVEU");

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
    msg.setTimeStamp(0.7339585290144165);
    msg.setSource(44102U);
    msg.setSourceEntity(44U);
    msg.setDestination(50875U);
    msg.setDestinationEntity(121U);
    msg.seq = 2328332681U;
    msg.state = 46U;
    msg.error.assign("IABUXSFKEVJPSYBDQIKME");

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
    msg.setTimeStamp(0.633118290302334);
    msg.setSource(3873U);
    msg.setSourceEntity(166U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(109U);
    msg.seq = 2940178984U;
    msg.state = 78U;
    msg.error.assign("VIHNFETKJGKZZTLLEOOHCFTRAFMAOEIEMGDJQWKFDUARFJGUFSGPUTAKJPVKHVFWQIXEYIQIZGAWXIGICESWWMABDXNKUGBLXHRQJVZTPLBUQJNNDQPNBYSOZKQASASVTXITGZZVHVOXVFDMREQRNLYPRUCCYEYBJQALZOHCNYWBPRSOGKSBDXFEMJYCWUDSVTYKBL");

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
    msg.setTimeStamp(0.5531727893337721);
    msg.setSource(43927U);
    msg.setSourceEntity(235U);
    msg.setDestination(31400U);
    msg.setDestinationEntity(91U);
    msg.origin.assign("AZVKJFBHQXQFXTJQVCKDHJBFTJSWNJEUIZOMFBNPIKXPRSHLNPIXDSCTGYCSLMNGMGMLWDZAAFLBGWCIYTYFHVRXKIIJOPWENENBDTVQWYHWNZEICTBYBYQBXEMCLDTJFDZOFQUOVAFZRFSNEJCEEMUHGQMYKDVUMURRHPHRKUCPSKGSQICIWG");
    msg.text.assign("GUAYFWZVAPTXDXMCHVGAJUYGBSVUSNSCZKVZBRBKXDVHZJMBZPZCJELOPXFQJFPWAFPTPYHWQWPGZLDEMQACXIHDDDVQKSGCNPBSVYFEUWQALVHPNZQLTOWE");

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
    msg.setTimeStamp(0.015799065460571637);
    msg.setSource(16774U);
    msg.setSourceEntity(83U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("UMWWIKFVAEHJYALHGJCZWDOOCYHXNZUIRFLODWFUAGZPZQHJBRNXEKEEPSOMOROJMRYOKOVDHJDAGLAMBJQREDGSVMRQCHTFAKQNXMQDAESZRCBIGDZGIUFYEISAWZXGLVWTHQZNPFXDJVZXVUUKSIHBKRTTMQKGSL");
    msg.text.assign("ANRKJFDUFQXMLVFIGZNHVTWWILCEIDPMVOXTBLJANVHPIYYELLIJRMXURIMHLXZTOZHGGYDGQOSQCPFOJZCBTDBMPQPLCSVWJBCDUKEYPMSQJSAAXBKYXVZUFJSTGWHEDKZJEGFZPTI");

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
    msg.setTimeStamp(0.30495793804474214);
    msg.setSource(49215U);
    msg.setSourceEntity(209U);
    msg.setDestination(34192U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("LGQJAROBFDFAYEMZGSYTVIOEHMQKOKYJWEJMNSXGKBTMKGGDVQZPSWQUHJMRLDAPPGOYYGHAXTJZVJPOCKLVYWWKESRZIMTEFDBIEALVWYLNPLLFDWMURTNSAKSZTVSZPVDXCWFXEUFOTURZWULNODORQXJQXUQPUMCCRRHHXVHQ");
    msg.text.assign("OGIEMDXFMUADTQNULTMVIRQCGEZOKKABTKIPNDNOTXYNTEUEHKNHYTTSKZEDBZJSGANWPWPWHOMAVQUKJISFSZZOLEGWLCFOLRMXXHJHFLRAFVYNAPJHCBEUISSAUQUCUGBFIRXFKSWNDUILJXEGFZBCPPXPQMMCHEWQLMGRRQVQMGXYKOAVBIBDGHMFOZSYRJVTWOYFSQRKOTWDIPWGZZQHWLKCHL");

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
    msg.setTimeStamp(0.2847850326675153);
    msg.setSource(6076U);
    msg.setSourceEntity(121U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("VFUOYBCZBVOYEZSUOCOBCYYJTSJPVXNKQNHIMUPUKGZEUWXWTLIBQITYFZCIFFRWPIPSZKWDDXMKMJLKVPLCOETMGAVZTNGJIVGNSAEDWYEHCBNMAHHISDKXGUUVVRHHMBODHURGEYMLUFEZBGGCWAAQKOPRZAJASLDICMQYKTJYJKVFLQJGOCIDFXDZNXLTKBWRF");
    msg.htime = 0.8011406829522674;
    msg.lat = 0.35169668760527706;
    msg.lon = 0.09749050486819077;
    const signed char tmp_msg_0[] = {60, -68, -73, 51, -23, 12, -86, 61, -58, -34, 58, 106, -87, -61, -35, -63, -85, 35, -72, 80, 61, -35, -4, -100, -15, 110, -21, -44, -59, -14, -19, -23, 100, -28, -72, -76, 97, -51, 72, -125, -97, 116, -31, 102, 16, 123, 70, -105, 48, -68, -83, -106, 46, 95, 61, -66, -105, 75, 124, 1, -3, 84, 116, -75, 6, -81, -107};
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
    msg.setTimeStamp(0.3647833351878049);
    msg.setSource(42161U);
    msg.setSourceEntity(106U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("OTCPFBTYFBCKAMWCIOQAQIOPWLBGZUPUBETQETSGVEEJUVFTLZYPYLHFSRGYQIBHGNSREREUWJMRMSXUYLAAIHTQODSDGLDFGQJPLNXMIDHSSNMCRUGHKXJGZAYEMRZGKOHUF");
    msg.htime = 0.3122990486715287;
    msg.lat = 0.30027484017924;
    msg.lon = 0.640099678968592;
    const signed char tmp_msg_0[] = {32, 34, 42, -118, -100, -4, -61, 2, 18, 7, -31, -111, 108, 17, 49, 77, -13, -39, 21, -61, 15, -9, 74, 94, -73, 58, -85, -121, -58, 105, 125, -115, 0, -103, -4, 113, 73, -47, -16, 62, 2, 71, 121, -65, 30, -110, 99, 112, 72, 68, -21, 13, -102, -114, 107, 43, -103, -50, 52, 102, 30, -120, -52, -104, -83, 45, -11, -87, -45, -4, 1, 126, 77, 112, -51, 115, 48, -92, 50, -26, 9, 42, 118, -26, 0, -17, -40, -55, 23, -62, -81, -30, 29, 121, -62, 48, 45, -99, 43, 75, 31, 90, 86, 12, -89, 14, 22, 44, 1, -92, -112, -113, 58, 69, -20, 6, -48, -29, 23, 108, 88, -18, -124, -109, -100, -80, 92, -90, -10, 94, -49, -5, -87, -34, -41, -50, 52, -90, -80, 2, 108, -38, -82, -127, -83, 1, -23, 117, 123, -60, -99, 29, -85, -94, 101, 0, 46, 38, -7, 60, -78, 93, -118, -43, -60, -33, -9, -13, 77, -20, 28, 33, -4, 118, -28, -86, 76, 41, -21, 72, -104, -63, 97, 34, 124, -61};
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
    msg.setTimeStamp(0.4105947049954175);
    msg.setSource(30647U);
    msg.setSourceEntity(178U);
    msg.setDestination(48143U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("JUKVKDCIPTQDTZWDMVRLYBSECJYYNSMVZQANJCVHZALBVYQEYHIBJHOODWQEUFBCUTAUMVROADUNOOBTZGXDXGYFECPSQJFERXIMGWGFKONNUWQMHAP");
    msg.htime = 0.3722747410947873;
    msg.lat = 0.15844577368075474;
    msg.lon = 0.6204873339442281;
    const signed char tmp_msg_0[] = {61, -94, 19, -103, 5, -15, -17, 44, -46, 16, 10, -118, -20, 34, -108, -29, 37, -21, -4, -38, -62, -109, -48, 3, 72};
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
    msg.setTimeStamp(0.09238660612852045);
    msg.setSource(14852U);
    msg.setSourceEntity(196U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(218U);
    msg.req_id = 54782U;
    msg.ttl = 39384U;
    msg.destination.assign("NXAHYHZGPBQMPWIOFQHOZYCBZOYWXKEZFTRQRQPEJVJBODVDGLRXVYTYVQSRQHVZKVHYPWKCGGTEXNMCVHTGXKMYOURLIIZOGNDCFMPKQMLVSNPBERLJCHSN");
    const signed char tmp_msg_0[] = {11, -12, 27, -88, 91, -71, 38, 36, 108, 110, 59, 10, 75, 121, 125, -74, 82, 70, 62, -84, 56, 44, -110, -42, 73, 3, -15, 0, 66, 60, 86, -7, 37, 109, 78, -74, 60, 43, 100, 59, -37, 79, -76, 95, -89, -32, -18, -13, 76, -14, 8, -102, 71, -92, -47, -19, -62, -65, -51, 37, -28, -106, -80, 85, 25, 82, 62, -80, 61, -32, 83, 42, 31, -11, 8, -33, 83, -70, -18, 31, -55, 79, -72, -8, -27, 117, -81, 120, -120, -96, 57, 93, 4, 37, 71, -68, 105, 83, -4, 30, -93, -26, 81, -56, 30, -52, 13, -15, -104, 87, -64, 0, -127, -85, -82, -45, -56, -52, 116, -112, -19, -124, -96, -34, 75, -118};
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
    msg.setTimeStamp(0.544605163133832);
    msg.setSource(1250U);
    msg.setSourceEntity(100U);
    msg.setDestination(18456U);
    msg.setDestinationEntity(213U);
    msg.req_id = 19925U;
    msg.ttl = 58098U;
    msg.destination.assign("YPENDTQERQJRXYADXFVBIUZTKFFFGWBMDHQWRRBSLDUCGDRNKWWZBILADSXVIUBOCYGVMPVYDQXKRBMYIIZTFEFLQCMJBOEKFYUKZIALKJHXAUPHUONOCGSZJEXFUAPNIOYPQJGTJSPCHZRHMGZW");
    const signed char tmp_msg_0[] = {-36, -57, -97, -95, -46, 0, 39, -108, 86, 70, -121, 38, 12, -42, 104, 101, 94, 0, 120, -27, -104, -126, -89, -36, 38, -114, 105, 41, 15, -45, 70, -16};
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
    msg.setTimeStamp(0.6156990459102222);
    msg.setSource(40546U);
    msg.setSourceEntity(142U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(19U);
    msg.req_id = 60124U;
    msg.ttl = 28997U;
    msg.destination.assign("ZFPXRDJAXYYRPHUCTKXYPIVKLQWOMDDQHCTOJGQZDGMLVOPGCBLXVREHHTTPAMMZTODVZKJPGSGUSROPNWGBCBNIFINMFKEGKRYADNBT");
    const signed char tmp_msg_0[] = {43, -96, 59, -7, 91, 0, 70, -73, -111, -127, 29, 122, 8, 109, 89, -53, 46, -41, 109, 38, 35, 69, 37, -125, 13, -123, 63, 95, 26, -50, -62, 81, -77, -94, -51, 41, 52, 116, 114, -4, 61, -3, -90, -76, -16, 10, -18, -67, 110, -55, 113, 87, 74, -85, 116, -4};
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
    msg.setTimeStamp(0.9573957164920353);
    msg.setSource(6865U);
    msg.setSourceEntity(213U);
    msg.setDestination(23452U);
    msg.setDestinationEntity(0U);
    msg.req_id = 26558U;
    msg.status = 209U;
    msg.text.assign("OFKUSVNYVXMICETNOTSQYONXA");

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
    msg.setTimeStamp(0.7614009174044238);
    msg.setSource(59388U);
    msg.setSourceEntity(236U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(188U);
    msg.req_id = 62660U;
    msg.status = 95U;
    msg.text.assign("VBJYIGLCXRVWYMSREXXPLTYNVUNUWOMDPQLHFNWTBRAYAZ");

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
    msg.setTimeStamp(0.123324272539584);
    msg.setSource(61624U);
    msg.setSourceEntity(167U);
    msg.setDestination(25179U);
    msg.setDestinationEntity(176U);
    msg.req_id = 23132U;
    msg.status = 248U;
    msg.text.assign("LPNTDPEVMZGDVJUWBMZODKLSHIOCHYDEEBYKOQYSEFAXYAMKYLPFNWMJQIAIJBPZQOTMJOLANTVQWPGQVRFBUGLFRWFJPTOREH");

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
    msg.setTimeStamp(0.8114207373415776);
    msg.setSource(13765U);
    msg.setSourceEntity(54U);
    msg.setDestination(17997U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("JHWRAUIGODAUXCZWGFBRQMYKKLSWWSSFDMMPKTACNSIZIWOFYVIFZXNSGUUEZCCHSWPAKMMQNJUTLXEORLDUAHSLSWRBJFYXYVAGKDEZHUBEFAXQBXQLVFBLFIDZHVNYQGSDVCTRQPPRYDVHU");
    msg.links = 3950400894U;

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
    msg.setTimeStamp(0.6760462419316328);
    msg.setSource(2481U);
    msg.setSourceEntity(162U);
    msg.setDestination(41932U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("TXMJXILVRHCGMARQSHZBTZKTVYINQNELOGKVMHNVXWQJIDDAPMQCZWBPLILDVMHRXIBSSCAOBMMVYSRGWKZUYFPDGPOTHGAVANWSCQBETFJQ");
    msg.links = 3720755816U;

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
    msg.setTimeStamp(0.2328464016908336);
    msg.setSource(13959U);
    msg.setSourceEntity(10U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(86U);
    msg.group_name.assign("WPVIPWWUUDKSZEBLQSJDGUKIZHKSSCAZNDQSPMOTPVEUASPODLXSZTBFMCOBRGIFPQIUPCZOB");
    msg.links = 2534259951U;

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
    msg.setTimeStamp(0.45968138282815296);
    msg.setSource(41589U);
    msg.setSourceEntity(235U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(208U);
    msg.groupname.assign("LIYKHHNIJTNQJSFSQXTHSUJYOWRJPEPCESBRQBDVCKNXPGFOVZRPDXLBVJDMWBOIWPYALTIZKUCJFBCARSMIFQFBVSZZWXFIXGEAVJFNGYYVGEZMVDCOUBOYONGQLLDAZTTRZNOTMHS");
    msg.action = 43U;
    msg.grouplist.assign("XIIHZSAHAJAODVZBSSWBGMPHPJUFQNYZSWXUQQVLPMAIXYZBWRYPLELDPJYXHLQZNBDWIHXKERUWVPNGUCLTTYCFWCTXMKYMCDEBTJOOELFDEMCXNJIXJTSZKRYRCGKVDFXKSCSORPZGKKHGVFVNQLASBFQOZPYOUWUDOTHTRETOHDWONGOPMBJNB");

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
    msg.setTimeStamp(0.8317816068043421);
    msg.setSource(25061U);
    msg.setSourceEntity(47U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("JMTTYFSAKWHIFQ");
    msg.action = 213U;
    msg.grouplist.assign("GHFRVXNEVUIZFOJPIWDSRLKOCMEMHFOCCBFSVBJCUPGKHVVZTYJJXAHHIRCEYRYBCZZNHFQHFCGTTDXGBYMNAHDXQPLDGIYNQHDQNJOHRVBMJRCFJQTUDYWOAITUEGPXZMKTWMGALANSUKSYZTQKKPXJPUFSOADMWWCKIGOLGQVLSRDJEQAIEBWFWVMWPVKALTWESNTNOUEJIGOLXPPITWYZLMAMSOKRLPXXFAUUBVBE");

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
    msg.setTimeStamp(0.41158677028109214);
    msg.setSource(37881U);
    msg.setSourceEntity(221U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(177U);
    msg.groupname.assign("XZGSEWTARBSOYCEDMBWZPRTYGKAIORZTBAPUNKYODYGZYAVVKJNCHTWCWXLVWQYDPSRLLWCEEKFMEPLDSRCULKFIKXPNFFQXPHIDBTFAREUOHVTJDRNPLKVDSBHONOCITMDLEMGTPFVGBEQQLBFQUWNYZQAHSDXZWVBUYUGNVMZJSIHAOXBGUDUJEZKSASMEAHGWQUHHGRLKVQOWBIYCMHNRJOMRMNIXICPICJKSAXUOJYTIFMLJZFXQPGC");
    msg.action = 101U;
    msg.grouplist.assign("ZXVGWMWVJIWFLMJIMVZKCVCHAYOLXPFNPMWTOSHTHPLSYDDMJLUPKZXAWFGQYIZUAQQQSVUHTIGCRUAVNXXICRSGSNZNGIRFPGKYULQJLHDGTQBAQROXAFXPLQCIDWVIAZWYOTCNENNHJEHEBKCLWBHMTQASCBHOUCFEKXWIKVRHOROMNFBSNDPDRBPROFMSYBEYSMTMXRDPUUYAOIDGVCJJLNJZSADZFYT");

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
    msg.setTimeStamp(0.268933914500319);
    msg.setSource(60498U);
    msg.setSourceEntity(57U);
    msg.setDestination(61809U);
    msg.setDestinationEntity(150U);
    msg.value = 0.12436301390048032;
    msg.sys_src = 32382U;

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
    msg.setTimeStamp(0.28500835657286194);
    msg.setSource(47810U);
    msg.setSourceEntity(203U);
    msg.setDestination(51424U);
    msg.setDestinationEntity(36U);
    msg.value = 0.2168610678740419;
    msg.sys_src = 37123U;

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
    msg.setTimeStamp(0.6510214792821274);
    msg.setSource(7450U);
    msg.setSourceEntity(33U);
    msg.setDestination(38562U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7078533801932219;
    msg.sys_src = 42618U;

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
    msg.setTimeStamp(0.6146633461844521);
    msg.setSource(32120U);
    msg.setSourceEntity(133U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5281963602054915;
    msg.units = 18U;

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
    msg.setTimeStamp(0.39325006818768793);
    msg.setSource(20382U);
    msg.setSourceEntity(221U);
    msg.setDestination(4005U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2557856071769493;
    msg.units = 91U;

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
    msg.setTimeStamp(0.20164571511537122);
    msg.setSource(19962U);
    msg.setSourceEntity(181U);
    msg.setDestination(34514U);
    msg.setDestinationEntity(239U);
    msg.value = 0.06492670007662815;
    msg.units = 136U;

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
    msg.setTimeStamp(0.6438796396865358);
    msg.setSource(6928U);
    msg.setSourceEntity(227U);
    msg.setDestination(44154U);
    msg.setDestinationEntity(30U);
    msg.base_lat = 0.5452586997110059;
    msg.base_lon = 0.5253985692874655;
    msg.base_time = 0.585747336318826;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 62010U;
    tmp_msg_0.priority = -117;
    tmp_msg_0.x = 500;
    tmp_msg_0.y = 17246;
    tmp_msg_0.z = 11435;
    tmp_msg_0.t = 17945;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9216831796978061;
    tmp_tmp_msg_0_0.y = 0.5393771977293746;
    tmp_tmp_msg_0_0.z = 0.10269960260863487;
    tmp_tmp_msg_0_0.phi = 0.9767876173987916;
    tmp_tmp_msg_0_0.theta = 0.0866634146179045;
    tmp_tmp_msg_0_0.psi = 0.6387740994008569;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6344882084601047);
    msg.setSource(52302U);
    msg.setSourceEntity(63U);
    msg.setDestination(8847U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.3377412945285545;
    msg.base_lon = 0.07309363448844963;
    msg.base_time = 0.6014984530867243;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 64408U;
    tmp_msg_0.destination = 56916U;
    tmp_msg_0.timeout = 0.10701437137465863;
    IMC::CompressedImage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.frameid = 175U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {62, 16, -76, 73, 96, 83, 8, -28, 58, -107, -79, 41, -96, -90, 52, -43, -121, -101, 111, -66, -30, 99, -31, -26, 32, -117, 126, 48, -52, -120, -9, -11, 121, -37, -7, -125, 13, 118, -119, -9, -41, -108, 1, -63, 111, 51, 80, 73, -27, 115, 9, 44, -113, 96, 87, -77, 32, -65, 93, -17, 1, -41, -41, 71, -22, 6, -104, 10, 65, -87, -86, 28, 47, 40, 52, -10, -2, 72, -120, 120, 74, -120, -25, 122, 24, -26, -70, 32, -17, 42, -41, -37, 26, 50, 45, -106, 18, 45, 62, 122, 84, -67, 81, -53, -81, -17, 65, 3, -2, -32};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.8970092663654134);
    msg.setSource(23333U);
    msg.setSourceEntity(79U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.20787806445732915;
    msg.base_lon = 0.6298101100378131;
    msg.base_time = 0.5776209076687544;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 42580U;
    tmp_msg_0.destination = 64563U;
    tmp_msg_0.timeout = 0.7403088774707758;
    IMC::DynamicsSimParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 96U;
    tmp_tmp_msg_0_0.tas2acc_pgain = 0.076971981221587;
    tmp_tmp_msg_0_0.bank2p_pgain = 0.31524445633551523;
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
    msg.setTimeStamp(0.5387024256446499);
    msg.setSource(55801U);
    msg.setSourceEntity(152U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(149U);
    msg.base_lat = 0.5940866568816501;
    msg.base_lon = 0.4440304147042696;
    msg.base_time = 0.5869841633122461;
    const signed char tmp_msg_0[] = {-35, -11, 123, -99, 103, 99, -86, 16, 81, 16, 97, -54, 102, 14, 85, -111, 54, -75, -79, 57, 126, 41, -41, -98, 23, -58, 13, -64, -76, 44, -93, 112, 77, 37, 119, 10, 121, -46, -78, 24, -109, 81, 9, -68, -119, -50, 52, -122, 35, 81, -114, 8, 100, 12, -112, -115, -85, -5, 13, -9, 56, 119, 79, 69, 62, -75, -121, -127, -57, 93, -18, -63, 104, 77, -38, -111, 89, -42, 56, 9, -47, 58, -128, -39, -31, 97, -68, 83, -21, -30, 90, 61, 88, 20, -117, 8, 7, 23, 57, -110, 23, -40, -99, -108, 16, -18, 67, 39, 37, -39, -75, 100, -120, 61, 52, -46, -19, 10, 72, 94, 86, 77, 124, -96, -44, -111, 96, 105, 43, 52, 1, -92, -98, -23, -50, 24, 31, -49, 42, -69, 59, 98, 77, -67, -54, -13, 116, 83, -87, 29, -77, 37, -44, 123, 105, -85};
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
    msg.setTimeStamp(0.1097797747167516);
    msg.setSource(29295U);
    msg.setSourceEntity(26U);
    msg.setDestination(15784U);
    msg.setDestinationEntity(64U);
    msg.base_lat = 0.3156320742936284;
    msg.base_lon = 0.1214493845221426;
    msg.base_time = 0.9286562699568405;
    const signed char tmp_msg_0[] = {0, -95, -69, -119, 48, -112, -24, 26, 74, 24, 102, 90, 97, 12, 39, -60, -64, 122, -102, 117, 7, -22, 64, 19, 45, -80, -117, -84, -46, -71, 0, 35, 87, -77, 117, -128, -106, 72, 69, -11, 13, -62, -81, 34, -99, -89, 25, 68, -64, 60, -10, -24, -92, -123, -85, -22, 96, 20, -113, -88, -99, -76, 67, -106, -10, -74, 5, 78, 76, -69, -74, 29, -22, -64, -113, 121, -124, 85, -11, 55, 7, -31, -9, -50, -38, 103, 15, 39, 11, 79, 126, 111, 9, 8, -31, -119, 19, -68, -19, 98, -88, -88, 29, 34, -109, 117, 31, -12, 92, 94, 57, 31, -75, -57, -108, -101, 95, 70, 121, 29, -115, -22, -8, 57, -43, -27, 18, -78, 76, -15, 71, -104, 59, 65, 5, -90, 23, -4, -6, -7, -111, -128, -24, 81, -97, 33, -93, -71, -112, -109, 54, -28, -95, -24, 63, 30, -81, -126, -41, 36, 72, -85, 113, 5, -43, 3, -57, -55, 10};
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
    msg.setTimeStamp(0.6249983872235897);
    msg.setSource(17431U);
    msg.setSourceEntity(128U);
    msg.setDestination(63495U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.45053134009086204;
    msg.base_lon = 0.5886037077134924;
    msg.base_time = 0.9838005867706444;
    const signed char tmp_msg_0[] = {-92, -51, -116, 45, -109, -32, -45, -118, -39, 114, 8, -89, 2, 6, -123, -94, 75, 42, 45, 55, -71, -96, 88, -30, 79, 5, -32, 126, -45, -122, -32, -85, -43, 84, -56, 28, -108, 126, -121, -24, 22, 54, 101, -16, -115, 106, 47, 96, 41, -48, -128, 61, 61, -13, 109, -61, 31, 85, 2, -95, -68, -41, 55, 20, -15, 116, -51, -22, -42, -119, -69, -32, 75, -17, -79, 77, -111, -64, 123, 92, -74, 54, -115, 107, 100, -23, 89, 15, -61, 33, -50, -85, -99, 65, -46, 123, 23, -61, -95, -110, 125, 16, -123, -62, 16, 119, 87, -66, 0, 41, -40, -47, -89, 41, -81, -68, 107, 91, 32, -9, -27, -62, 125, -72, -87, 92, 123, 44, 110, -68, -58, 37, 57, -73, -57, -91, 90, -34, -13, 0};
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
    msg.setTimeStamp(0.0761080114365369);
    msg.setSource(56586U);
    msg.setSourceEntity(203U);
    msg.setDestination(522U);
    msg.setDestinationEntity(17U);
    msg.sys_id = 14409U;
    msg.priority = -34;
    msg.x = -3864;
    msg.y = 2354;
    msg.z = 5550;
    msg.t = -22025;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5512822849964375;
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
    msg.setTimeStamp(0.382310953024418);
    msg.setSource(59663U);
    msg.setSourceEntity(213U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(22U);
    msg.sys_id = 65531U;
    msg.priority = 47;
    msg.x = -9303;
    msg.y = 13928;
    msg.z = 26958;
    msg.t = -14747;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 9184U;
    tmp_msg_0.plan_size = 1866756068U;
    tmp_msg_0.change_time = 0.26105522074223764;
    tmp_msg_0.change_sid = 13253U;
    tmp_msg_0.change_sname.assign("EJRRGEIYBIXQCTHFJRHSZWWPIFRAFSYOAOJVDMEGDLTBDFNMPHCNSRVBVRLOZYLKACKWGJZWHQRJATTVISEUDPAKYOQZMPHGMWUPBVUTSHWUMWZZBQGCSZQFPDENIXIFWXASYJMUTBLYVICNXHOBNNDFEQAIQLKWAKEXVMO");
    const signed char tmp_tmp_msg_0_0[] = {-46, 23, -7, 55, 106, -90, 84, -86, -107, -128, 115, 71, -8, 27};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.976581241909914);
    msg.setSource(29124U);
    msg.setSourceEntity(134U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(57U);
    msg.sys_id = 21373U;
    msg.priority = 124;
    msg.x = 14632;
    msg.y = -4024;
    msg.z = 14462;
    msg.t = -2864;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YIAUSJWJKKFPSLRVOAOWFRSQRRTBDTSPHTUHGLVYLHYWBDCMWGZSAWOBXFYTLEMPTPHAXEKMGMVZCGIDCSOZICQHUQFHDXAWHKXXVDGIJOVLZHFPNFXYWWFJYEJNEGGPCBYLNUZGUBKKCZPMMEULLQRTXDOEYWOQTDRIXOOTANRJAJRDLJGIBINZBIZYDF");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.8392715859197694;
    tmp_tmp_msg_0_0.lat = 0.7874110580474062;
    tmp_tmp_msg_0_0.lon = 0.6971202793501068;
    tmp_tmp_msg_0_0.z = 0.9423227894363101;
    tmp_tmp_msg_0_0.z_units = 169U;
    tmp_tmp_msg_0_0.travel_z = 0.06542662779652586;
    tmp_tmp_msg_0_0.travel_z_units = 152U;
    tmp_tmp_msg_0_0.delayed = 122U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6483753367512581);
    msg.setSource(14127U);
    msg.setSourceEntity(93U);
    msg.setDestination(22868U);
    msg.setDestinationEntity(222U);
    msg.req_id = 31515U;
    msg.type = 91U;
    msg.max_size = 22217U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9948360160471296;
    tmp_msg_0.base_lon = 0.7955850918738012;
    tmp_msg_0.base_time = 0.3960680917165318;
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
    msg.setTimeStamp(0.31887392106417767);
    msg.setSource(58820U);
    msg.setSourceEntity(222U);
    msg.setDestination(11661U);
    msg.setDestinationEntity(228U);
    msg.req_id = 28600U;
    msg.type = 61U;
    msg.max_size = 43081U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4807326700127511;
    tmp_msg_0.base_lon = 0.8423226747231031;
    tmp_msg_0.base_time = 0.7765159637481842;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 20427U;
    tmp_tmp_msg_0_0.destination = 18305U;
    tmp_tmp_msg_0_0.timeout = 0.3887706239769453;
    IMC::Displacement tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.4813807148646637;
    tmp_tmp_tmp_msg_0_0_0.x = 0.43949053717163356;
    tmp_tmp_tmp_msg_0_0_0.y = 0.7793488057060589;
    tmp_tmp_tmp_msg_0_0_0.z = 0.1524965249513789;
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
    msg.setTimeStamp(0.36039090782768046);
    msg.setSource(5946U);
    msg.setSourceEntity(40U);
    msg.setDestination(35381U);
    msg.setDestinationEntity(175U);
    msg.req_id = 10533U;
    msg.type = 149U;
    msg.max_size = 7152U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9274260734978244;
    tmp_msg_0.base_lon = 0.06749684957237623;
    tmp_msg_0.base_time = 0.8769768238321407;
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
    msg.setTimeStamp(0.3631615586014433);
    msg.setSource(29942U);
    msg.setSourceEntity(229U);
    msg.setDestination(63977U);
    msg.setDestinationEntity(250U);
    msg.original_source = 20233U;
    msg.destination = 30910U;
    msg.timeout = 0.8673919559529103;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XJNVIHRFFCZBTLFGGHOZNNGRYMBOWWDSAJGQBZKJCPKCDIUNDZSHXUNUQGDWYFAFXTWH");
    tmp_msg_0.lat = 0.18920944749154767;
    tmp_msg_0.lon = 0.009762294370930458;
    tmp_msg_0.z = 0.43523592611502127;
    tmp_msg_0.z_units = 123U;
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
    msg.setTimeStamp(0.7080424218951696);
    msg.setSource(59823U);
    msg.setSourceEntity(190U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(47U);
    msg.original_source = 10460U;
    msg.destination = 61675U;
    msg.timeout = 0.6799505878077001;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 132U;
    tmp_msg_0.frag_number = 222U;
    tmp_msg_0.num_frags = 49U;
    const signed char tmp_tmp_msg_0_0[] = {104, -12, -50, 121, 98, -119, 78, -39, -56, -113, 20, -92, 82, 19, -72, 78, -124, -97, 65};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7235451737845933);
    msg.setSource(24590U);
    msg.setSourceEntity(112U);
    msg.setDestination(5106U);
    msg.setDestinationEntity(98U);
    msg.original_source = 16286U;
    msg.destination = 9977U;
    msg.timeout = 0.6902708326520111;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("DKFPLXXMDFQYBEDPSQWCKDNVGKWGEOBLAFREOOWJITJAFBUCMILDHXDITRZLHEGNDLPYJBYECXGZXJCJTJNQVKZNZXMTESINXVDILCUSGCQFARBANZGYDTKHBAUGTSGZPPSRXUFU");
    tmp_msg_0.value = 83U;
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
    msg.setTimeStamp(0.7651345171339037);
    msg.setSource(5473U);
    msg.setSourceEntity(73U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(14U);
    msg.type = 18U;
    msg.comm_interface = 51984U;
    msg.model = 43448U;
    msg.list.assign("DHKEKOLRWVGBNFQRVNXKPMRNELXVBTMPIODWXNIDPFLZLFFLPINVAVEKSSOJSVXKTARZTVRRSQDUOZMHAUMBIECIESFCYCSGUJAJPUKJLKYEZWHVTHMYCWTRPWYXGCTTDILFTNOOPXJHWNNQAKQBSYYLZPCGXSAJUBFMOIMZEPCBGJWEZMBLM");

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
    msg.setTimeStamp(0.44752578070223525);
    msg.setSource(49957U);
    msg.setSourceEntity(236U);
    msg.setDestination(10518U);
    msg.setDestinationEntity(203U);
    msg.type = 83U;
    msg.comm_interface = 24080U;
    msg.model = 14207U;
    msg.list.assign("LCYNVBHKHHTKAITRCQDQWYJZUYWSGTWSHPEHRBBIQRFBKGMKTAZCAEQLWAEDXAKEXYSTDC");

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
    msg.setTimeStamp(0.07162088374194508);
    msg.setSource(28898U);
    msg.setSourceEntity(52U);
    msg.setDestination(51219U);
    msg.setDestinationEntity(199U);
    msg.type = 104U;
    msg.comm_interface = 46409U;
    msg.model = 2862U;
    msg.list.assign("JTGCUKQONMDTILMEISNOJHRHXODZUBQIKIICXPHBNIVQLTSZULAQBOVRQWGGQCRCZYUPJKVAYKSUONEVGFJHVDYLUTKJFUYBAWCQXGKDZVXBWYJPCLYWFAE");

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
    msg.setTimeStamp(0.5626818914703182);
    msg.setSource(6005U);
    msg.setSourceEntity(167U);
    msg.setDestination(61499U);
    msg.setDestinationEntity(129U);
    msg.type = 11U;
    msg.req_id = 646472376U;
    msg.ttl = 12984U;
    msg.code = 235U;
    msg.destination.assign("CELTBAAALSFMDPXWKBOUHWSDYAHGHCMKYCAKOXUCXVKKAIHSOMTTXMYXFZRIHDSJJTPDTHZIJGJRNMWUPEPVGNESXDVTIXERZWWOJMHPFCQUNVJWYGDQXUUZGJNGQNUENNBRRZBUIIFFPNCYWYWQBHGLLVKDTRORKRDQZFEAMVVUVCBIIZLJEEAKIRHMGGEISJLFYVPAHTPUZQGPDENSSMOOSYBLTLOCQY");
    msg.source.assign("SWBFXDYSUUVDYQHOBJVPACEOEYOHFPCKAVTIVIBJHNQIZZFSWHTALAOVICROEKUKAHEKEIAMPKGHMVVBMSIFVGWKALSLRXYBSAUMZPGFOUPXJTHPFJNLYENXSDMBGCOMDMRTQKFNNGZJLCDWXKMJXWWLMHGCQSYGIGNHRFFZNQQJRYUTABJTE");
    msg.acknowledge = 193U;
    msg.status = 179U;
    const signed char tmp_msg_0[] = {64, -36, -76, 9, 63, 84, -108, -79, -73, -46, 57, -11, -53, -7, -119, -29, 13, 107, -13, 57, 68, -103, 88, -41, 121, 111, -113, -40, -54, 42, 96, -104, 123, -51, 100, -51, -111, 102, -102, 101, -104, -67, 32, -17, 79, -86, 99, -78, 76, 16, 29, -43, -38, -122, 71, 124, 48, 115, 118, 60, -29, -120, -55, 111, 24, 75, -20, -99, 106, -117, -56, -1, -101, 56, 83, 2, -44, 35, 116, -101, 49, -53, -77, 68, 66, 67, 72, 122, -96, -87, -70, -30, -27, 79, 37, 58, 109, -47, -68, 0, 81, -38, -36, -99, 95, 77, -91, 100};
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
    msg.setTimeStamp(0.08865196613276516);
    msg.setSource(17190U);
    msg.setSourceEntity(46U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(53U);
    msg.type = 55U;
    msg.req_id = 2697320522U;
    msg.ttl = 17945U;
    msg.code = 0U;
    msg.destination.assign("WBQKCGQBMURYBDZPPRGHSSOCHIJJQXDNULBXVMXXHNEJRPXYTVHADDJNVXFGILKPDQFZNUDUJKNCGAWPXGQYFQEWNUMWKGPWIDSOCZZAZERFBJKHRRLAETAJJQRMSPAIEMJMAKPFQRLEHNXIZANOTFYYSTXV");
    msg.source.assign("TYBZAETEWBHM");
    msg.acknowledge = 180U;
    msg.status = 157U;
    const signed char tmp_msg_0[] = {-97, 99, -17, -57, 96, 56, 28, 27, 32, 62, -70, 25, -33, -57, 79, 91, 79, -30, 69, 73, -35, -83, -32, 75, -24, 116, 29, 40, -126, 108, -104, 10, 25, 118, -80, 94, 13, -114, -75, 112, -22, 107, 26, -80, 124, 106, -62, -57, 30, 11, 52, -6, 11, 19, -103, 24, 11, 93, 24, -8, -55, -125, -96, 76, 104, -53, -9, -112, 29, 22, -49, -77, 4, -42, -81, -100, -47, 120, -40, -97, -58, 70, -107, 107, 35, 100, 7, 102, -66, -31, -48, 5, 76, 85, -26, -100, 119, 3, -2, 41, -21, 14, 72, -44, 72, 32, -55, 64, 49, -126, 98, -77, -83, 78, -78, 116, -45, 38, -54, -72, 69, -64, -1, 96, -77, -127, 41, 52, 14, -48, 53, -98, -128, 82, -15, -59, -78, 36, -67, -37, -43, 44, -4, 49, 61, 60, 59, 45, 114, 9, -61, 52, 86, 44, 70, -127, -73, -91, 33, -45, -39, 80, -2, 114, 6, 74, 18, -91, 39, 29, -91, -33, -72, 99, -42, -17, -98, -118, -90, -29, 74, 84, -43, -115, -36, -7, 105, -21, 6, -8, -68, 22, -97, -28, -111, 126, -62, -18, 47, 108, 107, 105, 22, -31, 29, 105, -52, -79};
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
    msg.setTimeStamp(0.8534251598059346);
    msg.setSource(43662U);
    msg.setSourceEntity(117U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(239U);
    msg.type = 204U;
    msg.req_id = 1869252100U;
    msg.ttl = 43417U;
    msg.code = 33U;
    msg.destination.assign("NKMTUAFOEJCCVXQRTIVRJALTPFCOLFPSACLDKTQVPUDIRJTDSRZBGXAMQZXBJBMXBQTZGPKNBYSUTXXRIALELOJLWNZZQQDOUCFPRBSNHBEEHEOOVMHVDEZUAYIXRRCICEGEWTGBWVGJMSPVMSMDAYWOUMWH");
    msg.source.assign("WVMZPXQDEMFVUHVRUNDHRQCHHAMODGPQZTNBYPABVMLTBAGOXVTAQVAZSLBWFEGPHSGFRTIEENKISXDIWFCAXKEVRPUEOAMCELRRDQNOGBJJYOMCKTRFYBEDFYFIKNUEBPHLMLSAQZVOSNCSVHPUFLXYNXGKKMLZMDIYCQPTVIQJIQAWKYKRTXKJUFASZKWLWSIHGNPXJLLYGWZJESWZ");
    msg.acknowledge = 253U;
    msg.status = 5U;
    const signed char tmp_msg_0[] = {-57, 12, -76, -31, -26, -7, 105, -93, 124, -37, -61, -92, 28, -32, 92, 94, -89, 67, -67, 42, 48, 103, -57, 53, 83, -6, 78, -44, -126, -97, 53, -27, 36, -59, -7, -15, -120, -56, -18, 104, -110, -16, 16, 75, 100, -108, 91, 91, -81, -105, 56, -72, -2, -58, -41, 118, -63, 62, 2, -112, -12, -72, -64, 89, 16, -11, -113, -17, 7, -124, -49, -28, -76, -27, -123, 59, -85, -86, -3, -92, 10, 2, -125, 26, -51, 67, -9, -98, 75, 94, 53, -28, -106, 48, -4, 34, 64, -11, 54, 46, -75, 6, 62, -16, -61, -100, 111, -29, -52, -72, -109, -56, -91, -15, 54, 103, 90, -3, -90, 20, -42, -77, -17, -53, -79, -89, 14, -83, 97, 69, -39, 0, 99, -95, -76, -116, -30, -57, 44, -95, 86, 44, -127, 35, -116, 64, -82, 49, -77, -40, -84, 42, 98, 67, 34, -100, -92, -110, 35, 2, 37, 73, -109, 52, -46, 66, -38, 33, -122, -12, -17, -107, -70, 102, -6, -20, 24, 58, -17, 64, 58, 108, -53, 123, -49, 26, -90, -49, -24, -85, -119, 51, -100, 63, -106, 116, 23, 81, -63, 43, 111, -17, 83, -67, -117, 35, 67, 97, -110, 56, -111, -123, 47, -121, -98, 53, 102, 43, -119, -56, 23, -39};
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
    msg.setTimeStamp(0.6537724062115999);
    msg.setSource(9359U);
    msg.setSourceEntity(226U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(99U);
    msg.id = 143U;
    msg.range = 0.351975746395466;

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
    msg.setTimeStamp(0.07847696839160367);
    msg.setSource(58052U);
    msg.setSourceEntity(114U);
    msg.setDestination(32658U);
    msg.setDestinationEntity(23U);
    msg.id = 18U;
    msg.range = 0.2748463139209141;

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
    msg.setTimeStamp(0.08464867088198436);
    msg.setSource(15167U);
    msg.setSourceEntity(38U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(134U);
    msg.id = 37U;
    msg.range = 0.13726120073189818;

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
    msg.setTimeStamp(0.07363792922301082);
    msg.setSource(30692U);
    msg.setSourceEntity(144U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(195U);
    msg.beacon.assign("NDZRTZXVZNHLPWHMWOADPTRJJZMQZSUJBOTKZEEEIPGYVNCPQFLNUCVUBALMNXQQPSWTQRXVFCMRBEROMWWAYLPFVFLNUFSKHXAXBRSKYOHZMLCZAKYLJAKNOEAUOZMYTKIUBDITQTGXSKNKFEPIGYUEQIDXRCPNLBCHAHEVOWIROTJXXBCD");
    msg.lat = 0.8764253127078594;
    msg.lon = 0.6418021273013735;
    msg.depth = 0.31431691894001834;
    msg.query_channel = 9U;
    msg.reply_channel = 160U;
    msg.transponder_delay = 253U;

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
    msg.setTimeStamp(0.11988712439329385);
    msg.setSource(3510U);
    msg.setSourceEntity(79U);
    msg.setDestination(64201U);
    msg.setDestinationEntity(77U);
    msg.beacon.assign("FYGCUDMGZWPDXMSZKERFFOLSDOZRPVUTWUMEGZCGOIRABDADQEKCNCJYPPXHIGAXLNVFQWRSXHBZHIYEKQITJNVFRDCTZQKZAOKFRIXVERMEWNOWCBXFQSYEYXOHCTYXJGNTYMNFJQXCUZFUEDDPJYHHMMLVBEUPSIJJHAOBKBMWLQHIZQCSPGNO");
    msg.lat = 0.17936654889285886;
    msg.lon = 0.8358573423118018;
    msg.depth = 0.5451730572869671;
    msg.query_channel = 44U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 221U;

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
    msg.setTimeStamp(0.5663435007490698);
    msg.setSource(46990U);
    msg.setSourceEntity(99U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("LZMUJKGDBUXDNVBEDCGPPKEEQQYLZYBYPTXVHNCZISDUMQTMOBDWRBVACMJFPGAQYEZXNANTBLMXTKHILAGHEYLXRJOESMNCQTGTKDJZWNHQBAOWPAZKCASTXUMIFORSKWEUGTSYOLSCXVNUZLFNJWFREPRORVFVFYZHILMVISSCKTLABXQMEVQIPVFBFBHGJUNKPEGY");
    msg.lat = 0.01569997376731813;
    msg.lon = 0.8631525068632638;
    msg.depth = 0.12841953736061473;
    msg.query_channel = 245U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 60U;

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
    msg.setTimeStamp(0.9614296053169981);
    msg.setSource(5813U);
    msg.setSourceEntity(136U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(108U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.00026162285125774787);
    msg.setSource(60494U);
    msg.setSourceEntity(43U);
    msg.setDestination(40162U);
    msg.setDestinationEntity(35U);
    msg.op = 50U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QGLZAFVKXZESPGNETCQBVUKSPIEJFIQLWQYPJUHZRCYKJAWSIOHTGGCUOQVDALHASUZXXTB");
    tmp_msg_0.lat = 0.2799095564558588;
    tmp_msg_0.lon = 0.40133011017275366;
    tmp_msg_0.depth = 0.41941355344893116;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 144U;
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
    msg.setTimeStamp(0.16859373734525063);
    msg.setSource(27814U);
    msg.setSourceEntity(248U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(47U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.43335165819866495);
    msg.setSource(3029U);
    msg.setSourceEntity(79U);
    msg.setDestination(31549U);
    msg.setDestinationEntity(220U);
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HLGSFBSYYUQDMAZXYYBRTXQKRNKPERCXMQNDSQZLPNXTAOOUCLQWMMLTWWSJBHAAQDRHINVQLZRALJBIFYDHELLFMVOKGSQNONGDDHOJYSLTGMERCKOZVPARITYAJDXZIJTUIKYIBVDBXFBGODLXEEUXOJECNFPZKUDZHVUCTPJTRSCPHZVNWKZUXIPYSGFBBPPHKVFWWJRMCWTEEGOSBWTVAEIMAMKOVYPCKUIWGIJUCUSEJWFHHNMFQNZGV");
    tmp_msg_0.dist = 0.3176043216250153;
    tmp_msg_0.err = 0.04529678362916456;
    tmp_msg_0.ctrl_imp = 0.40998214788602116;
    tmp_msg_0.rel_dir_x = 0.5508606687780356;
    tmp_msg_0.rel_dir_y = 0.700043612062174;
    tmp_msg_0.rel_dir_z = 0.6598624836137195;
    tmp_msg_0.err_x = 0.16300796755974434;
    tmp_msg_0.err_y = 0.8780647415998772;
    tmp_msg_0.err_z = 0.9121634278296394;
    tmp_msg_0.rf_err_x = 0.8308237022565048;
    tmp_msg_0.rf_err_y = 0.5641460078040266;
    tmp_msg_0.rf_err_z = 0.67291908767442;
    tmp_msg_0.rf_err_vx = 0.863641549180854;
    tmp_msg_0.rf_err_vy = 0.7552986876667006;
    tmp_msg_0.rf_err_vz = 0.8538213479158805;
    tmp_msg_0.ss_x = 0.5353040334672198;
    tmp_msg_0.ss_y = 0.8996953363835567;
    tmp_msg_0.ss_z = 0.6634587619321045;
    tmp_msg_0.virt_err_x = 0.2166581233970759;
    tmp_msg_0.virt_err_y = 0.5125416864936452;
    tmp_msg_0.virt_err_z = 0.7974981720661886;
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
    msg.setTimeStamp(0.913761282122538);
    msg.setSource(24272U);
    msg.setSourceEntity(119U);
    msg.setDestination(57894U);
    msg.setDestinationEntity(47U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.28697260655751067);
    msg.setSource(40513U);
    msg.setSourceEntity(228U);
    msg.setDestination(7336U);
    msg.setDestinationEntity(151U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.25576109015173953;
    tmp_msg_0.lon = 0.3717969887100815;
    tmp_msg_0.height = 0.5749351926731642;
    tmp_msg_0.x = 0.10711000997501596;
    tmp_msg_0.y = 0.5161530998390906;
    tmp_msg_0.z = 0.8505382519641952;
    tmp_msg_0.phi = 0.4845814677125957;
    tmp_msg_0.theta = 0.9263069060678161;
    tmp_msg_0.psi = 0.02815448333604209;
    tmp_msg_0.u = 0.9011988388486317;
    tmp_msg_0.v = 0.11782484992806008;
    tmp_msg_0.w = 0.14185279401353157;
    tmp_msg_0.vx = 0.42348181580185573;
    tmp_msg_0.vy = 0.8144505008201842;
    tmp_msg_0.vz = 0.5833218912786392;
    tmp_msg_0.p = 0.3784127257116693;
    tmp_msg_0.q = 0.597141823819828;
    tmp_msg_0.r = 0.8443014193258856;
    tmp_msg_0.depth = 0.995013537972797;
    tmp_msg_0.alt = 0.9592900250961983;
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
    msg.setTimeStamp(0.6767066823557049);
    msg.setSource(34154U);
    msg.setSourceEntity(204U);
    msg.setDestination(28070U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.44498541385610013;
    msg.lon = 0.38795935649815017;
    msg.depth = 0.16868139553913453;
    msg.sentence.assign("XQJULQDWVAOSYPKTYJLAKYRDTDZORHFCRUICWGUAYYIRTHBDMPLZIMHCJHIXZGNZBFDMNBVEPKGEFCHOGLIUREDRXJXYKSNSTWBDMWEBYCMMLHNFWZ");
    msg.txtime = 0.4774136246973575;
    msg.modem_type.assign("TVVMOTPHYGIYROSXLSIBLOTJKBFIMIKLEUXGKHZXGTQLRAVICOSLXWQYERTQJPDCCWDDCNHPWXRCVNEZEAYKWUIBFIWYYUDDQDGOLJJBQEONBNSAHTFRFHJYUCM");
    msg.sys_src.assign("DGSSGWTRTDSRPSLVUHJHUEWVMRWZDRRMSCEIFSUJAUGFHMTHNOGLVGZKJQSTJPIQOXZKFTUPQQFNZCIWCCGHAFWQCC");
    msg.seq = 26450U;
    msg.sys_dst.assign("MHZAHUDITPFHACLZTKRGZJVJPIJQYBRRXCRYPGNLAIXLGGMSHSOTMOYVVLCCGRVQ");
    msg.flags = 42U;
    const signed char tmp_msg_0[] = {115, -12, -126, 60, -25, -7, -86, 24, 20, 114, 47, 66, 3, -94, -125, -43, 32, -30, -113, -94, 117, -8, 60, -119, 123, 99, 16, 49, -89, -126, 78, -102, -48, 92, -14, 119, 40, -98, -113, 112, -49, -71, 108, -31, 116, -64, -12, 85, 108, -42, -58, 63, 63, 63, -70, -102, -22, 59, -81, 47, 102, 100, -107, 82, 50, -112, -40, 25, 90, -79, 35, -25, -32, 52, -23, 78, -58, -8, 123, 65, -67, 102, -24, 17, 123, 111, -46, -43, 21, 59, 98, -112, -49, -83, 87, -37, 52, 114, -19, -84, -18, -116, 78, 74, 6, 82, 8, -79, -118, 11, -99, -98, 107, 11, 112, -108, 68, -59, 23, 108, 21, 21};
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
    msg.setTimeStamp(0.5210280092296018);
    msg.setSource(4843U);
    msg.setSourceEntity(147U);
    msg.setDestination(22180U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.4936338150058942;
    msg.lon = 0.7947966033234767;
    msg.depth = 0.382529561827639;
    msg.sentence.assign("TKSSANXOTXCAFWCLQBMKIEEYKNYLUQFYBYRMTQLLEHBNESHOHVAJGDIHCGDQJPNSBPFLIH");
    msg.txtime = 0.2591436789770485;
    msg.modem_type.assign("TZKCKJEAYGBPBWWUXRJRHKANNVTAGEGXRLHIZLQQKFSJELOKDZXSKWOSYUZBLANAROIOOWIIAMPDMQNZLMEPIWSDNWAHCPVAZUDTGEHLJRJ");
    msg.sys_src.assign("NMFPLLJARDTMRWCAIJQNZCXIQQVOKUHLPANVKGWPVSQZCPTTDZBSQ");
    msg.seq = 34493U;
    msg.sys_dst.assign("BHLIPUVRKLFPFUEOFMGMCJDWBKRHZXWDDBSNMHYWIAIDPFLTUYIOTSZSLQYUOZJOVGTAAZEHCHPKEXVWVMBTDNSCCBRJXJUWSMSIHZWIKNLQPMKLBXQRSYODLYCJCJNEQGVDQKCUZKNZXVJPFLGSTRRNOGANFMZZPABXTFBBUWXEYOUDENOHMSFOYJTQQXTTAWGZFVECIQPQCKYIEHGT");
    msg.flags = 244U;
    const signed char tmp_msg_0[] = {-71, 111, 3, -94, -63, 73, -53, -27, -58, 62, 78, 87, -32, -59, 69, 101, 61, 84, -96, -8, 100, -16, -102, 9, 15, -100, 58, 34, 74, 85, 83, -31, -55, -10, -37, 73, -30, 18, -93, -47, -83, 40, 40, -19, 86, -91, 9, -22, 30, 68, 121, 6, -106, -8, 103, -45, -107, -119, 104, 72, -69, -18, 74, 87, 63, 90, 70, -17, -40, -70, 25, -61, 31, 41, 35, 110, -5, 110, -67, 11, 66, 77, -103, -99, 79, 45, 116, 1, 68, -78, 96, -25, -15, 100, 67, 87, 82, -96, 3, -124, 114, -14, 55, 52, -54, 102, -40, -85, 107, -54, 41, -26, -77, -27, -14, -35, 97, 19, -65, -16, 126, 49, -98, -49, -72, -64, 111, 15, 124, 13, -57, 126, -124, 68, -77, -102, -45, -56, -50, 8, -67, -64, -106, 19, -90, -119, 28, 52, -88, 36, -58, -105, -123, -100, -40, -127, 5, 101, -86, -32, 121, 115, 27, -27, -5, -6, -75, -49, 74, -32, 118, -98, 32, -78, -66, -34, -43, -51, -73, 110, 80, -111, -118, -76, -57, -7, -70, -95};
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
    msg.setTimeStamp(0.6255452244152736);
    msg.setSource(20778U);
    msg.setSourceEntity(125U);
    msg.setDestination(3402U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.5067792334087017;
    msg.lon = 0.4719055367548509;
    msg.depth = 0.13239536355884474;
    msg.sentence.assign("ACBRHMQHISUWFQCYVZUVRNIBHEADAXWZGYAZFYIPGWGEFQOBHUOFRGR");
    msg.txtime = 0.19346514221102662;
    msg.modem_type.assign("FJCLMIHULAUJRVWHBRAFAIZBZAGQFWNTNXBYXPQRWYAIXCVRZKBEGNWLRDRGMKWUPVSZVQKHMQNMPZYOOHXWEHRYQXELSSZTISGDXJHUGLINIJFFAKCHVPRQLGQZXIJBNUABKVJEDGRDFOUWYCSLKQKKNXSQETYJ");
    msg.sys_src.assign("VGYSBCYEXJWIIMHIDURIRMCGLHUTDBFVFPZPZKDGSMQHRFCDPHRCDGLQTNZWERREXSYNDQ");
    msg.seq = 23454U;
    msg.sys_dst.assign("UQMJTLYZSYEUBAXFVAUTXFSYROOULVJGFOSDZHHLPVOHEBKHIFBPKRQYWOGTPWPLBIFSYQDMVCAXFILQQENRSYCBXAGWQDSJTEJQEGCBKRDMGYNDYBLZEMWATODXRJJTXIEUNVIDOMLPAZDNAJLKSSZZXNYLAWTEIWXJGPJPAXIHCVVHQCIYVHBKU");
    msg.flags = 83U;
    const signed char tmp_msg_0[] = {-85, -67, -16, -91, 38, -35, -46, 75, 22, -33, 89, 31, 88, -123, -39, 99, 124, 83, 124, -8, 69, 45, -68, -90, -119, 126, -44, -56, 84, -15, -86, -114, 125, -120, 20, -46, -90, -110, -66, -65, -55, 67, 79, 71, -56, -99, -53, 21, -118, 7, 49, 117, -78, 113, -116, 15, -48, -69, 3, -119, 3, 14, -37, 67, -28, -46, -108, 68, 90, -97, 78, 68, -124, 15, -99, 121, 6, 108, -88, -81, -75, 80, 22, -73, -121, 17, 62, -127, -96, 88, -125, -90, -74, 63, -50, 33, 64, -111, 79, 49, -54, -42, 17, 101, 55, 61, -26, -64, -42, 46, -35, -23, 78, -27, 35, 62, -117, -110, 117, -96, -50, 99, -49, 108, 3, -72, 123, -88, 80, 45, 1, -70, -125, -102, 94, -106, -93, 33, 115, -82, -2, 2, -85, -9, 10, 4, 25, 124, -115, -14, -110, -95, -11, -26, -2, -95, 111, -36, -121, -4, 29, 119, -7, 80, -71, 49, -119, -14, -21, -95, -72};
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
    msg.setTimeStamp(0.6311772109130896);
    msg.setSource(10164U);
    msg.setSourceEntity(33U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(241U);
    msg.op = 16U;
    msg.system.assign("UXOFSEDCMWAFZDKFSKLVGKQXMATJZFRCBIYDFBGOEWMQQMKCZERSKUULNUKBOPLAOBRDPNBQIESIAUFEICKNNRLHPPYJYXYPXVXBZQAHWYYREJOVIOHWSVWJGMBZTNLIRDACSMQLCGAFSDCXMNZFPVKKJTQPVZNDHIJGWNRGTCOEGTTQRUAYTGVHTSCQPJVIENSRMUDHAHBKJSLPJMYWEFABNWXVTBUUGXEIRLHTJZWYOLDWOXCZIYOUHMQG");
    msg.range = 0.09510609809136072;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 758469753U;
    tmp_msg_0.start_lat = 0.8143339175257454;
    tmp_msg_0.start_lon = 0.4889225778830769;
    tmp_msg_0.start_z = 0.24521553167588328;
    tmp_msg_0.start_z_units = 207U;
    tmp_msg_0.end_lat = 0.3481883331066694;
    tmp_msg_0.end_lon = 0.6444410226158025;
    tmp_msg_0.end_z = 0.4811955642491279;
    tmp_msg_0.end_z_units = 124U;
    tmp_msg_0.lradius = 0.6138285741185073;
    tmp_msg_0.flags = 10U;
    tmp_msg_0.x = 0.7659244283305036;
    tmp_msg_0.y = 0.8956704756553727;
    tmp_msg_0.z = 0.6011641011921321;
    tmp_msg_0.vx = 0.2310235587437851;
    tmp_msg_0.vy = 0.8314887835277635;
    tmp_msg_0.vz = 0.5785944921239828;
    tmp_msg_0.course_error = 0.4448816126712909;
    tmp_msg_0.eta = 11700U;
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
    msg.setTimeStamp(0.08642603540524285);
    msg.setSource(50021U);
    msg.setSourceEntity(151U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(100U);
    msg.op = 112U;
    msg.system.assign("OXWXMNKMEMHZGTAQTNVTOZCPCNWZIDIFZXEJE");
    msg.range = 0.7891041321709558;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 27613U;
    tmp_msg_0.lat = 0.17331386908478397;
    tmp_msg_0.lon = 0.627743696807568;
    tmp_msg_0.z = 0.22620430135985303;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.speed = 0.45039194371406965;
    tmp_msg_0.speed_units = 107U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5022388904822296;
    tmp_tmp_msg_0_0.y = 0.12210205280904596;
    tmp_tmp_msg_0_0.z = 0.5095346312778829;
    tmp_tmp_msg_0_0.t = 0.03161418411547401;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CJHJCVORBFFRQVUCVNPGUAXMIMAARZQVSWYSSVKGUFZVGZJMJBTTWKQINLYBXDZLAOUYOKEJXWFUDANDHUNKTKTJPYLKHLOJMZOZMWPWZYYRMHEQHCYOVTISSIFZFGAALMDQLXEEQBSBFYUVBHKXHFNEQHGOIWYEQDBDLGIJ");
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
    msg.setTimeStamp(0.29048421512465006);
    msg.setSource(1773U);
    msg.setSourceEntity(23U);
    msg.setDestination(58890U);
    msg.setDestinationEntity(234U);
    msg.op = 4U;
    msg.system.assign("QHGQUSTORTCMJDNXPSMTACQUNYPGHGJBWLRBMAQSEAEUOHIUIGDOXNCQFRUSBIXHWLTHODYUFWOEXYIERBPGPISBMJBYRFGMFFOFUQXDGDZADCHXMICGDVSENLVJFICZTXSVZKWYLVVCVKRCBQMGTEFNHBEAMOJTMWQLKRLVEWTWPKPOKYHBKZUPKPNLGIYWAZEVJZDVOXEZQYKRZDQIRUJ");
    msg.range = 0.8184923405797;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.8554671145972996;
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
    msg.setTimeStamp(0.5690765153992339);
    msg.setSource(33722U);
    msg.setSourceEntity(47U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.8799454207116182);
    msg.setSource(31018U);
    msg.setSourceEntity(116U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.49072861291043957);
    msg.setSource(58602U);
    msg.setSourceEntity(130U);
    msg.setDestination(49596U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.4204161952533916);
    msg.setSource(21590U);
    msg.setSourceEntity(241U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(5U);
    msg.list.assign("NHRORQECDTMTCFLCTDBINGZQJRUXSHQPUIXSYNBDDSUWGZFZLDJLLZRFKUIYJLDXOMLRGBXIROJTVOGDWEHJTOZEJBCTHIWDRSTFXVFPYBXQEQALTVWMXVPLSPPQWVPTHCAIIYKTFGOPKZHBQABPCFWOXUWSURHYMXIPQNGKAZYAWYWKCBJUSKUVCYENHLKOENDBVVKMUDMFBURCHK");

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
    msg.setTimeStamp(0.07565957520816691);
    msg.setSource(10698U);
    msg.setSourceEntity(177U);
    msg.setDestination(48383U);
    msg.setDestinationEntity(232U);
    msg.list.assign("BEKQKYMSMKDWUIDTENQSLWCCYIXNFVJYHXQJIACTFAYMTAPLYBXWOCOJZBVVEXKYGBHPJTFLOZGALCBUZPQJEEUZCOVDWNLLRSNUHXRHESVRDIKUTIDHMPOKGGXUCIKOWBVTAWSZHECPDAREXOOVSBVXNQPDUJWFXQONRMCUKZIAPTNHTWLJPNYQFLMSGGHMUJJFQGAQNJHLXKARUZPEQRFWRZBDAGTFMVBHMZGYSCFRDZIFGTMBYYIOPE");

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
    msg.setTimeStamp(0.11785582138688411);
    msg.setSource(53022U);
    msg.setSourceEntity(223U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(232U);
    msg.list.assign("DCLFNIEBJKRZBJTCWNISYFITTZOXBYLZYGOXGAXCFQLLBFRQCWSPXWAFZXRDUKKFIQHDJMEUEZAPZDSESVDWEVWEMLNBGYUYVNMULPYWTMLTDJVQFJKNEIZJPZNCLXUBPONASBZVSQEYITGRKOWOH");

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
    msg.setTimeStamp(0.647784704554099);
    msg.setSource(62579U);
    msg.setSourceEntity(19U);
    msg.setDestination(34281U);
    msg.setDestinationEntity(249U);
    msg.peer.assign("HGRXMICQHGFOAAOXMIHRENJNQCGDBHMXRPDMFSSSTEFTVBJWMIBPTVNUGCUQTSDNZUELPOUSIJPEHYXFRLNOUNOXTDRIVZPSRDYQMPJYJXKZOKAQWVXGSYBTLVOJILLIMSBNOCPUPBZLCKJYAFZGXFAWOSQBNVYDDMWXWZBUFLYREKGDOBAKVXMYQZJVTAWLUUYCPZQEWFIWWE");
    msg.rssi = 0.9075565439883956;
    msg.integrity = 24009U;

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
    msg.setTimeStamp(0.4008964332415539);
    msg.setSource(56929U);
    msg.setSourceEntity(33U);
    msg.setDestination(50845U);
    msg.setDestinationEntity(241U);
    msg.peer.assign("DNFYONEZQMOAEGRIJDKERIDSYMSBHCFJRLWXAJKKKMWTVICYKHHQGTGGSNSSY");
    msg.rssi = 0.5742497223577994;
    msg.integrity = 23795U;

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
    msg.setTimeStamp(0.40405355417572597);
    msg.setSource(19023U);
    msg.setSourceEntity(67U);
    msg.setDestination(51991U);
    msg.setDestinationEntity(229U);
    msg.peer.assign("NADWPXLRKQJMOWUFQBMOEAJCDIVYNIEGEEYJSTJRRRDMPFAIIIJACRHYMFQVVKINNWMRPPWBSFQVOOONGGSKNKZHWGGCROXFAWSPXUTVPBKKMZLWCPZZDMYCUYBHTYFSZZRELLULSLIUAVRGVQEJYYOTETWLASXNILNLGVHJBAZATKNZBGBKCCHBNFOPDXDEQUZXEUJCHTBJKD");
    msg.rssi = 0.5566507293968248;
    msg.integrity = 49088U;

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
    msg.setTimeStamp(0.08777879871428007);
    msg.setSource(6852U);
    msg.setSourceEntity(237U);
    msg.setDestination(61538U);
    msg.setDestinationEntity(153U);
    msg.req_id = 34629U;
    msg.destination.assign("ADRJAVQRPSZSDPPVXVEZVHEOXFGCYVXKDHWFBNWFFCAMKSPMMGLNPTRTQBWUUBQGJMEDMBZFRNPLKLLFYRXVYRJHHYYROCDGHSSWNNZZJASVGIABYZYHRZIO");
    msg.timeout = 0.673355840417807;
    msg.range = 0.45921550848723947;
    msg.type = 22U;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 208U;
    tmp_msg_0.name.assign("PLXUKXULYGYQSWLLUCYTRPXOGOFVQNYYDINUCXWEBAKSSXRQDFRFXIJOVDXXJHIIGWWDJELNMICYJPSDBHMGWJGKUVFPRCEBRNRGJEZHKTYNZJQZVABBAUZUFPCODQECTEMUDNIMOZQVMGIPTH");
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
    msg.setTimeStamp(0.3028227604710634);
    msg.setSource(57730U);
    msg.setSourceEntity(156U);
    msg.setDestination(51920U);
    msg.setDestinationEntity(65U);
    msg.req_id = 27862U;
    msg.destination.assign("UWJCTXRIOYMBINHEBNTXSZZJPYYIUHMFVZZQBKBCZNLXAPKXMHRDAYKVLYDTOJTJWREOENSGUUKMFYLZWFCIOQSVZMELRAQLDIGVVQQBDTXPSICDJRKKKVVRVAWKUWKJHEQABFELAVBOBSRBTSGFSMMMLUWIZAGQYCAUGY");
    msg.timeout = 0.5137113845463855;
    msg.range = 0.663729866751401;
    msg.type = 204U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 201128105U;
    tmp_msg_0.start_lat = 0.7220040143822625;
    tmp_msg_0.start_lon = 0.7057735540426427;
    tmp_msg_0.start_z = 0.7031786070122458;
    tmp_msg_0.start_z_units = 65U;
    tmp_msg_0.end_lat = 0.8070229426099821;
    tmp_msg_0.end_lon = 0.2371188487050413;
    tmp_msg_0.end_z = 0.3296084803308711;
    tmp_msg_0.end_z_units = 140U;
    tmp_msg_0.lradius = 0.1773895787651878;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.x = 0.69128502209775;
    tmp_msg_0.y = 0.1530266629491156;
    tmp_msg_0.z = 0.39447976607971613;
    tmp_msg_0.vx = 0.45665795515497887;
    tmp_msg_0.vy = 0.8658910939623782;
    tmp_msg_0.vz = 0.23421164922040305;
    tmp_msg_0.course_error = 0.4839028399930929;
    tmp_msg_0.eta = 61247U;
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
    msg.setTimeStamp(0.5578167201223564);
    msg.setSource(53904U);
    msg.setSourceEntity(10U);
    msg.setDestination(56439U);
    msg.setDestinationEntity(15U);
    msg.req_id = 65245U;
    msg.destination.assign("BWKCSPHTEGNPTOHJZWNMFUSRVLQMCDFFDJJGYNKZLVVIXOWRODXTYBENBZDWHPYHSIQOHEUMIIBNLZVFACYULKOPEHPERQXWFXTGYNWCZECBCAFHEAFZGFDTQLKSSIJPYHTALBVKINQDXIQDRKXYUPBWWOAQMJGLAJSXMUZIKMWALATCPFJEUCSREJFUBGOTSRAQUYPRCGXOBYZBOXMUUKRZVDRZHDGJNELVIDVOKMQCJKWAGNLMSHTVYSV");
    msg.timeout = 0.8648610414602583;
    msg.range = 0.28583917542762693;
    msg.type = 232U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7962742867442292;
    tmp_msg_0.z_units = 139U;
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
    msg.setTimeStamp(0.17121606130099754);
    msg.setSource(30753U);
    msg.setSourceEntity(173U);
    msg.setDestination(6001U);
    msg.setDestinationEntity(172U);
    msg.req_id = 31167U;
    msg.type = 32U;
    msg.status = 125U;
    msg.info.assign("YFIBBCLZULOAZRTQEAQFFWIWSLFJGGPVMRJQIPFYSIXBKQLRDGKVOXLNWNXXEXIIZNPKHYYRYWMQCQJQZFWARHDZGAJTYPMIUDSDOENTTLWZKZOJJCJEWOUXNIGVSYDJUKUGTPAHURFIHV");
    msg.range = 0.4473770914357621;

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
    msg.setTimeStamp(0.06179734821963989);
    msg.setSource(58992U);
    msg.setSourceEntity(243U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(47U);
    msg.req_id = 29861U;
    msg.type = 206U;
    msg.status = 69U;
    msg.info.assign("EFTINNCPZJWMHCAAASDSLWBDIDMMXYZZRTVZOIHQSGWPBOEMQLKURFISBGTEDQXXRNYKLIOJKHXUYEHICDLFBHUFBSBYLUPNFOHKTXJXCJMMVRQPTRCXDDCBJNVONXMTXOIOPRJHUMLLQFSPESUGVEYBTGFWCTZG");
    msg.range = 0.3863375237925035;

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
    msg.setTimeStamp(0.8407601680668212);
    msg.setSource(52690U);
    msg.setSourceEntity(83U);
    msg.setDestination(7537U);
    msg.setDestinationEntity(33U);
    msg.req_id = 28183U;
    msg.type = 238U;
    msg.status = 250U;
    msg.info.assign("PEMVABOFIKMLOQIKQAGKHRTEYIAAMERWYRYIZNBRJNNLWSVBKIMKGWPCKGTRXYJSQHODCLPPDSBMVLLTLHHRWHEEXABRUUDUULQZSBYDCWJFIQGVCFTRGVDLVYBNQZHDKXCYJUHRAUJOZKQUTZEAVGQCCCNTJXUIEFSBFCNYANTOGUVDHHSXPFGIWMNBPSOEWXJDPKXMCWN");
    msg.range = 0.48006856788543284;

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
    msg.setTimeStamp(0.47575711620241923);
    msg.setSource(47907U);
    msg.setSourceEntity(15U);
    msg.setDestination(36380U);
    msg.setDestinationEntity(227U);
    msg.system.assign("GFPSGIHYBXNIALRYWZCHATIPIQUMQJINXNOLBNEQOOCAPGPPMOGTYVYXIXPZTNTPOKRLZGSDYCUSHHCVKMEBRXLSXBEKOZPKMBDEFDZGQVSGMURFFBKKCLYWMSCH");
    msg.op = 69U;

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
    msg.setTimeStamp(0.9446278490167782);
    msg.setSource(29052U);
    msg.setSourceEntity(41U);
    msg.setDestination(44936U);
    msg.setDestinationEntity(98U);
    msg.system.assign("USJOFTOBFOYZSXKNKIPYUUACKEQJBSJZCHIRGQJVSQKTPKGCUJOWGYJFRNXVTJTWSFQDXNIPYBVALTBLRQUXOWHKC");
    msg.op = 230U;

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
    msg.setTimeStamp(0.2927438069294117);
    msg.setSource(29334U);
    msg.setSourceEntity(43U);
    msg.setDestination(44124U);
    msg.setDestinationEntity(15U);
    msg.system.assign("VRQVELCTEMYUIUIOTCYTDXQOFFXWWKXITQMOJBUFKTQNDURCYAVXXGWTJPXDCWQVKDWZYODALTSAN");
    msg.op = 165U;

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
    msg.setTimeStamp(0.9926847475817526);
    msg.setSource(36909U);
    msg.setSourceEntity(144U);
    msg.setDestination(37558U);
    msg.setDestinationEntity(252U);
    msg.value = 11948;

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
    msg.setTimeStamp(0.2419570064138895);
    msg.setSource(3992U);
    msg.setSourceEntity(46U);
    msg.setDestination(45784U);
    msg.setDestinationEntity(126U);
    msg.value = -21467;

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
    msg.setTimeStamp(0.7322927149310869);
    msg.setSource(44483U);
    msg.setSourceEntity(209U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(71U);
    msg.value = 11391;

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
    msg.setTimeStamp(0.2551351680489856);
    msg.setSource(28737U);
    msg.setSourceEntity(253U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(241U);
    msg.value = 0.14201074343678854;

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
    msg.setTimeStamp(0.7615015840201995);
    msg.setSource(2416U);
    msg.setSourceEntity(214U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(149U);
    msg.value = 0.035754873778884644;

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
    msg.setTimeStamp(0.8674203238136035);
    msg.setSource(23871U);
    msg.setSourceEntity(123U);
    msg.setDestination(64535U);
    msg.setDestinationEntity(131U);
    msg.value = 0.2714274416081175;

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
    msg.setTimeStamp(0.42918477888996);
    msg.setSource(1843U);
    msg.setSourceEntity(203U);
    msg.setDestination(63328U);
    msg.setDestinationEntity(51U);
    msg.value = 0.2583238665201617;

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
    msg.setTimeStamp(0.4634048607536886);
    msg.setSource(50765U);
    msg.setSourceEntity(41U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(184U);
    msg.value = 0.14923610854836677;

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
    msg.setTimeStamp(0.20171781112120113);
    msg.setSource(2033U);
    msg.setSourceEntity(82U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7419813940823162;

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
    msg.setTimeStamp(0.9902087223656765);
    msg.setSource(63922U);
    msg.setSourceEntity(152U);
    msg.setDestination(32616U);
    msg.setDestinationEntity(187U);
    msg.validity = 28993U;
    msg.type = 215U;
    msg.utc_year = 48332U;
    msg.utc_month = 250U;
    msg.utc_day = 69U;
    msg.utc_time = 0.8133106953791616;
    msg.lat = 0.06892050561567675;
    msg.lon = 0.027619904897870806;
    msg.height = 0.4846119012767356;
    msg.satellites = 43U;
    msg.cog = 0.9007874002785803;
    msg.sog = 0.0784617265808425;
    msg.hdop = 0.001682239918618711;
    msg.vdop = 0.13821953850815405;
    msg.hacc = 0.9541975028953696;
    msg.vacc = 0.01410705468457929;

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
    msg.setTimeStamp(0.13432385058730967);
    msg.setSource(56423U);
    msg.setSourceEntity(238U);
    msg.setDestination(64261U);
    msg.setDestinationEntity(175U);
    msg.validity = 56926U;
    msg.type = 208U;
    msg.utc_year = 44569U;
    msg.utc_month = 205U;
    msg.utc_day = 93U;
    msg.utc_time = 0.4672953033065863;
    msg.lat = 0.30006852756492497;
    msg.lon = 0.259239047663513;
    msg.height = 0.6700451253938939;
    msg.satellites = 42U;
    msg.cog = 0.16409597694253164;
    msg.sog = 0.2428805907189051;
    msg.hdop = 0.7610128171407071;
    msg.vdop = 0.9014671924701692;
    msg.hacc = 0.4560659839373121;
    msg.vacc = 0.030411906905710717;

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
    msg.setTimeStamp(0.37193323495380226);
    msg.setSource(62063U);
    msg.setSourceEntity(120U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(26U);
    msg.validity = 34183U;
    msg.type = 139U;
    msg.utc_year = 13065U;
    msg.utc_month = 212U;
    msg.utc_day = 252U;
    msg.utc_time = 0.887591869604848;
    msg.lat = 0.7722906280621972;
    msg.lon = 0.17446701229438766;
    msg.height = 0.9335060600226361;
    msg.satellites = 162U;
    msg.cog = 0.791988624765039;
    msg.sog = 0.3987029285042687;
    msg.hdop = 0.30179282362720683;
    msg.vdop = 0.9455818547450346;
    msg.hacc = 0.8754959642685073;
    msg.vacc = 0.3066781255051929;

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
    msg.setTimeStamp(0.11025147360619392);
    msg.setSource(9792U);
    msg.setSourceEntity(166U);
    msg.setDestination(17631U);
    msg.setDestinationEntity(200U);
    msg.time = 0.7466240787634043;
    msg.phi = 0.7106772835305115;
    msg.theta = 0.9018251611538896;
    msg.psi = 0.06503090782010035;
    msg.psi_magnetic = 0.7757551708247427;

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
    msg.setTimeStamp(0.6206290983292932);
    msg.setSource(26491U);
    msg.setSourceEntity(169U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(90U);
    msg.time = 0.5085065656188262;
    msg.phi = 0.032787300942366704;
    msg.theta = 0.6277078416172384;
    msg.psi = 0.2379638833935761;
    msg.psi_magnetic = 0.6004124143208714;

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
    msg.setTimeStamp(0.19748423384127556);
    msg.setSource(28844U);
    msg.setSourceEntity(146U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(161U);
    msg.time = 0.3242438184630895;
    msg.phi = 0.3928921725919482;
    msg.theta = 0.7732006276722305;
    msg.psi = 0.9260489404569593;
    msg.psi_magnetic = 0.14342787837771098;

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
    msg.setTimeStamp(0.3857761566113528);
    msg.setSource(5017U);
    msg.setSourceEntity(7U);
    msg.setDestination(19051U);
    msg.setDestinationEntity(66U);
    msg.time = 0.6028577671270764;
    msg.x = 0.7655704923580404;
    msg.y = 0.911156639909113;
    msg.z = 0.11498684109178603;
    msg.timestep = 0.02571979157885418;

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
    msg.setTimeStamp(0.042817290775907235);
    msg.setSource(37043U);
    msg.setSourceEntity(114U);
    msg.setDestination(28390U);
    msg.setDestinationEntity(254U);
    msg.time = 0.7760146812250605;
    msg.x = 0.8286916648211877;
    msg.y = 0.7150509344707748;
    msg.z = 0.9366555128576933;
    msg.timestep = 0.30404197692851354;

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
    msg.setTimeStamp(0.9314984208299435);
    msg.setSource(516U);
    msg.setSourceEntity(224U);
    msg.setDestination(31450U);
    msg.setDestinationEntity(85U);
    msg.time = 0.2640278296963112;
    msg.x = 0.939271907422335;
    msg.y = 0.9901243794577134;
    msg.z = 0.9670827186067537;
    msg.timestep = 0.8802816349945389;

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
    msg.setTimeStamp(0.5959321676336807);
    msg.setSource(58281U);
    msg.setSourceEntity(251U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(133U);
    msg.time = 0.7561196764356375;
    msg.x = 0.383814214522336;
    msg.y = 0.5820272511143553;
    msg.z = 0.24838584488132287;

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
    msg.setTimeStamp(0.19642807692947695);
    msg.setSource(50180U);
    msg.setSourceEntity(158U);
    msg.setDestination(62872U);
    msg.setDestinationEntity(180U);
    msg.time = 0.8849091539235536;
    msg.x = 0.19555161159506196;
    msg.y = 0.9360134838494558;
    msg.z = 0.644985114105005;

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
    msg.setTimeStamp(0.30027133925768856);
    msg.setSource(34959U);
    msg.setSourceEntity(173U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(187U);
    msg.time = 0.9295274632015589;
    msg.x = 0.7663158316550108;
    msg.y = 0.4301339755324185;
    msg.z = 0.4174166517977227;

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
    msg.setTimeStamp(0.32361374074563254);
    msg.setSource(26015U);
    msg.setSourceEntity(56U);
    msg.setDestination(29570U);
    msg.setDestinationEntity(37U);
    msg.time = 0.8442221153268646;
    msg.x = 0.8450358804011795;
    msg.y = 0.2894093174209801;
    msg.z = 0.8013936280540814;

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
    msg.setTimeStamp(0.43148979610393945);
    msg.setSource(43264U);
    msg.setSourceEntity(7U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(162U);
    msg.time = 0.20800440894329253;
    msg.x = 0.7598012401352318;
    msg.y = 0.3424819221090888;
    msg.z = 0.8717513088931917;

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
    msg.setTimeStamp(0.8187373765180574);
    msg.setSource(43331U);
    msg.setSourceEntity(24U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(60U);
    msg.time = 0.7611129749228563;
    msg.x = 0.9344155183090846;
    msg.y = 0.6605502060577071;
    msg.z = 0.2487853724580691;

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
    msg.setTimeStamp(0.2453154513906728);
    msg.setSource(54181U);
    msg.setSourceEntity(232U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(63U);
    msg.time = 0.4493511473404467;
    msg.x = 0.7764584528107263;
    msg.y = 0.2136465078611749;
    msg.z = 0.5774625921118719;

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
    msg.setTimeStamp(0.2728881565246447);
    msg.setSource(35194U);
    msg.setSourceEntity(184U);
    msg.setDestination(18321U);
    msg.setDestinationEntity(73U);
    msg.time = 0.7238187906658714;
    msg.x = 0.19883033596976274;
    msg.y = 0.933231826952549;
    msg.z = 0.17170247951079132;

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
    msg.setTimeStamp(0.2056784371286361);
    msg.setSource(22435U);
    msg.setSourceEntity(39U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(79U);
    msg.time = 0.1011866115713359;
    msg.x = 0.7656069062854984;
    msg.y = 0.6115321196437634;
    msg.z = 0.8263999251405909;

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
    msg.setTimeStamp(0.8877860437861191);
    msg.setSource(53184U);
    msg.setSourceEntity(159U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(210U);
    msg.validity = 73U;
    msg.x = 0.8272063262947233;
    msg.y = 0.33128500049627185;
    msg.z = 0.4208038081635761;

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
    msg.setTimeStamp(0.3980669665430765);
    msg.setSource(41689U);
    msg.setSourceEntity(130U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(195U);
    msg.validity = 142U;
    msg.x = 0.8625210685525542;
    msg.y = 0.1867484058575848;
    msg.z = 0.20553322544921537;

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
    msg.setTimeStamp(0.4238540068487927);
    msg.setSource(62990U);
    msg.setSourceEntity(102U);
    msg.setDestination(6575U);
    msg.setDestinationEntity(37U);
    msg.validity = 192U;
    msg.x = 0.7825493677320061;
    msg.y = 0.5973948994459086;
    msg.z = 0.9980394202093397;

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
    msg.setTimeStamp(0.5982277592021402);
    msg.setSource(35584U);
    msg.setSourceEntity(30U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(224U);
    msg.validity = 231U;
    msg.x = 0.07094632625851416;
    msg.y = 0.7728725067794504;
    msg.z = 0.3317185400311228;

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
    msg.setTimeStamp(0.40520683264897517);
    msg.setSource(63578U);
    msg.setSourceEntity(214U);
    msg.setDestination(34408U);
    msg.setDestinationEntity(236U);
    msg.validity = 117U;
    msg.x = 0.7646216887583318;
    msg.y = 0.35216208160690743;
    msg.z = 0.3120503439289084;

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
    msg.setTimeStamp(0.16820004366666597);
    msg.setSource(22078U);
    msg.setSourceEntity(184U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(133U);
    msg.validity = 251U;
    msg.x = 0.7931552824714968;
    msg.y = 0.8668082654296685;
    msg.z = 0.8500383239388052;

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
    msg.setTimeStamp(0.9665647458825922);
    msg.setSource(62091U);
    msg.setSourceEntity(29U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(236U);
    msg.time = 0.2571385078877222;
    msg.x = 0.42231231641515987;
    msg.y = 0.13091194482370805;
    msg.z = 0.32502768858052766;

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
    msg.setTimeStamp(0.34188149407313595);
    msg.setSource(29720U);
    msg.setSourceEntity(147U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(86U);
    msg.time = 0.7777336231092699;
    msg.x = 0.0734558997450685;
    msg.y = 0.22023461489376805;
    msg.z = 0.0902859147110795;

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
    msg.setTimeStamp(0.2709903509332716);
    msg.setSource(34888U);
    msg.setSourceEntity(14U);
    msg.setDestination(394U);
    msg.setDestinationEntity(150U);
    msg.time = 0.5335424175949597;
    msg.x = 0.22625505933086965;
    msg.y = 0.8549899672082251;
    msg.z = 0.2006480441032099;

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
    msg.setTimeStamp(0.47908522798280606);
    msg.setSource(46812U);
    msg.setSourceEntity(110U);
    msg.setDestination(37433U);
    msg.setDestinationEntity(229U);
    msg.validity = 203U;
    msg.value = 0.8800429569680495;

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
    msg.setTimeStamp(0.9601430238920429);
    msg.setSource(8189U);
    msg.setSourceEntity(214U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(206U);
    msg.validity = 144U;
    msg.value = 0.8744628140850382;

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
    msg.setTimeStamp(0.35363782544317957);
    msg.setSource(25976U);
    msg.setSourceEntity(76U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(119U);
    msg.validity = 52U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.680342274570097;
    tmp_msg_0.beam_height = 0.16670831065750003;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9925742236054218;

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
    msg.setTimeStamp(0.4807224621922537);
    msg.setSource(54985U);
    msg.setSourceEntity(239U);
    msg.setDestination(27445U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5629050093635798;

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
    msg.setTimeStamp(0.6918083438208167);
    msg.setSource(3554U);
    msg.setSourceEntity(227U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(137U);
    msg.value = 0.30137243414731896;

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
    msg.setTimeStamp(0.3798725465732715);
    msg.setSource(3035U);
    msg.setSourceEntity(145U);
    msg.setDestination(39352U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7403079706835085;

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
    msg.setTimeStamp(0.05603021058021196);
    msg.setSource(6909U);
    msg.setSourceEntity(69U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(163U);
    msg.value = 0.3192070341164138;

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
    msg.setTimeStamp(0.9380420247150282);
    msg.setSource(37139U);
    msg.setSourceEntity(23U);
    msg.setDestination(30945U);
    msg.setDestinationEntity(193U);
    msg.value = 0.045442596930378;

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
    msg.setTimeStamp(0.3622332539022697);
    msg.setSource(20742U);
    msg.setSourceEntity(6U);
    msg.setDestination(56U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9759104518222674;

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
    msg.setTimeStamp(0.6961243920046899);
    msg.setSource(21326U);
    msg.setSourceEntity(135U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5870823659710807;

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
    msg.setTimeStamp(0.9781907965930416);
    msg.setSource(19062U);
    msg.setSourceEntity(105U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(0U);
    msg.value = 0.10663191979110376;

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
    msg.setTimeStamp(0.519853014142363);
    msg.setSource(25542U);
    msg.setSourceEntity(183U);
    msg.setDestination(26100U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7264193078633028;

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
    msg.setTimeStamp(0.7664869212561173);
    msg.setSource(51972U);
    msg.setSourceEntity(157U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6577099489389137;

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
    msg.setTimeStamp(0.2925099815017236);
    msg.setSource(7764U);
    msg.setSourceEntity(253U);
    msg.setDestination(38483U);
    msg.setDestinationEntity(191U);
    msg.value = 0.4901710000688383;

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
    msg.setTimeStamp(0.8593144884662);
    msg.setSource(16504U);
    msg.setSourceEntity(18U);
    msg.setDestination(36818U);
    msg.setDestinationEntity(26U);
    msg.value = 0.43272742584098056;

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
    msg.setTimeStamp(0.12227511113729528);
    msg.setSource(63994U);
    msg.setSourceEntity(215U);
    msg.setDestination(31278U);
    msg.setDestinationEntity(190U);
    msg.value = 0.46827514426589;

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
    msg.setTimeStamp(0.4718288894053496);
    msg.setSource(26229U);
    msg.setSourceEntity(170U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9771385177567368;

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
    msg.setTimeStamp(0.43489965807111963);
    msg.setSource(10618U);
    msg.setSourceEntity(242U);
    msg.setDestination(5545U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8112062417368939;

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
    msg.setTimeStamp(0.27741801081317785);
    msg.setSource(18312U);
    msg.setSourceEntity(114U);
    msg.setDestination(35621U);
    msg.setDestinationEntity(172U);
    msg.value = 0.005502953363026752;

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
    msg.setTimeStamp(0.41651658981211925);
    msg.setSource(20163U);
    msg.setSourceEntity(1U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2339731158103131;

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
    msg.setTimeStamp(0.7380397547000791);
    msg.setSource(2150U);
    msg.setSourceEntity(84U);
    msg.setDestination(39858U);
    msg.setDestinationEntity(68U);
    msg.value = 0.6783497908942037;

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
    msg.setTimeStamp(0.898240930213799);
    msg.setSource(46403U);
    msg.setSourceEntity(151U);
    msg.setDestination(47256U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8669088606733396;

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
    msg.setTimeStamp(0.0014646073122422942);
    msg.setSource(7681U);
    msg.setSourceEntity(186U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3548849111841714;

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
    msg.setTimeStamp(0.4239337138477681);
    msg.setSource(26924U);
    msg.setSourceEntity(167U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5673865510135444;

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
    msg.setTimeStamp(0.9652673229167128);
    msg.setSource(16591U);
    msg.setSourceEntity(193U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(10U);
    msg.value = 0.21007947800487836;

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
    msg.setTimeStamp(0.8517927044505804);
    msg.setSource(58769U);
    msg.setSourceEntity(242U);
    msg.setDestination(53328U);
    msg.setDestinationEntity(30U);
    msg.value = 0.20849315922462153;

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
    msg.setTimeStamp(0.8150610265331201);
    msg.setSource(20317U);
    msg.setSourceEntity(218U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(251U);
    msg.value = 0.40904661865872816;

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
    msg.setTimeStamp(0.3996428921506139);
    msg.setSource(61503U);
    msg.setSourceEntity(239U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.045494569991622935;
    msg.speed = 0.7758978983055508;
    msg.turbulence = 0.9374271041742204;

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
    msg.setTimeStamp(0.3883411772406501);
    msg.setSource(21631U);
    msg.setSourceEntity(34U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(21U);
    msg.direction = 0.7144047119619874;
    msg.speed = 0.5219570234168531;
    msg.turbulence = 0.26410190539736833;

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
    msg.setTimeStamp(0.8106700718204731);
    msg.setSource(1524U);
    msg.setSourceEntity(250U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(83U);
    msg.direction = 0.20528923092639773;
    msg.speed = 0.9279123532893186;
    msg.turbulence = 0.7550637630664674;

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
    msg.setTimeStamp(0.7404766256359804);
    msg.setSource(27144U);
    msg.setSourceEntity(184U);
    msg.setDestination(55686U);
    msg.setDestinationEntity(81U);
    msg.value = 0.10293080261651655;

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
    msg.setTimeStamp(0.2684179211535054);
    msg.setSource(45841U);
    msg.setSourceEntity(220U);
    msg.setDestination(39276U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7926509397764441;

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
    msg.setTimeStamp(0.4621731352455867);
    msg.setSource(34195U);
    msg.setSourceEntity(237U);
    msg.setDestination(37107U);
    msg.setDestinationEntity(66U);
    msg.value = 0.4679884891543903;

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
    msg.setTimeStamp(0.9770798923634727);
    msg.setSource(47584U);
    msg.setSourceEntity(232U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(116U);
    msg.value.assign("KZUAGYKQCWFXEQLCLUHFFVVZJIJMXTBFTCJWGHHHKKNHBFUZTYIKIYSKZ");

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
    msg.setTimeStamp(0.029479167468100198);
    msg.setSource(32669U);
    msg.setSourceEntity(51U);
    msg.setDestination(51744U);
    msg.setDestinationEntity(135U);
    msg.value.assign("LCFAQGODCVIHWPXWJTLZVESPWSDJRJUSRHL");

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
    msg.setTimeStamp(0.7178570311976724);
    msg.setSource(12894U);
    msg.setSourceEntity(151U);
    msg.setDestination(53829U);
    msg.setDestinationEntity(42U);
    msg.value.assign("UGQVREOEOGMUMRVJRGRYVXQAOQRTIXZGHZSVXYZGBDEYQJQKDPMSLSJOFJFVOUZCHIADNZNKLZFUEEIKXLRJTIII");

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
    msg.setTimeStamp(0.864247247981282);
    msg.setSource(35107U);
    msg.setSourceEntity(143U);
    msg.setDestination(31883U);
    msg.setDestinationEntity(24U);
    const signed char tmp_msg_0[] = {-54, -115, -102, -71, 55, 99, -125, 75, 10, -79, -39, -15, -78, -121, -88, -78, -108, 89, 98, 38, -18, -122, -93, 45, 105, 68, -104, -73, -122, -65, -22, 6, -85, 98, -22, -110, -50, -21, 123, -89, -59, -33, 24, -116, 82, -17, 52, 68, -66, -121, -122, 126, 68, -121, 82, -79, 93, -61, 66, 76, 79, -30, -10, 61, 117, -119, -124, -120, -12, 62, 76, 95, -65, 29, 62, 43, 12, 87, 114, 27, 100, -107, 81, 34, 113, 104, 91, -89, 8, -118, -50, -45, -45, -69, 93, -80, -57, 101, -100, -60, 91, 0, 21, -127, -30, -106, -91, 94, -6, 53, 35, 63, 58, 51, -68, -106, -17, -102, -76, 86, 10, 10, 38, 6, -98, -82, -103, 109, 81, 59, -125, -49, -79, -65, 20};
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
    msg.setTimeStamp(0.399694304880052);
    msg.setSource(22411U);
    msg.setSourceEntity(32U);
    msg.setDestination(16150U);
    msg.setDestinationEntity(222U);
    const signed char tmp_msg_0[] = {34, 15, 62, 100, 59, -74, -117, -14, -11, -66, 43, -83, -51, -15, -34, 48, 90, 26, 3, -31, 20, 88, -54, 18, -96, -109, 47, -108, -86, 113, -78, -100, -70, 38, 28, 124, 111, -36, 106, 82, 74, 3, 66, 8, 64, 85, -80, -93, 89, -45, -51, -25, -32, 86, -76, -40, 105, 38, 69, -37, -58, 117, 43, -38, -120, -94, -10, -11, -36, 62, 7, -69, 102, 48, -7, 66, -112, 104, 120, 118, -93, 67, -28, -109, 101, 94, -81, 91, 66, -120, -31, -34, 18, -40, -94, 100, 59, 27, 11, 2, 13, 117, 11, 41, 44, 2, -12, -44, -47, 108, -86, -34, -47, -49, 50, -113, -111, 119, 117, 48, -124, -78, 76, 56, 3, -30, -119, 50, -97, -117, -111, 65, -31, 119, -113, -9, 112, -52, -80, 13, -8, -67, -95, 47, -48, -101, 45, -43, 82, 51, -50, 94, -13, -124, 91, -112, 15, 76, -68, -39};
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
    msg.setTimeStamp(0.09338148391688383);
    msg.setSource(50328U);
    msg.setSourceEntity(217U);
    msg.setDestination(20504U);
    msg.setDestinationEntity(70U);
    const signed char tmp_msg_0[] = {-79, 122, 96, -76, -11, -60, 7, -84, -71, 59, -17, 70, -12, 96, -5, 5, -125, -52, -125, -103, 46, -100, 67, -98, 66, -17, -52, 18, 55, -41, -20, -73, 26, -128, 120, 78, -21, 36, -92, -102, 24, -5, 113, -76, -64, -30, 123, 37, -123, 94, 78, -61, 118, 54, 18, -98, -56, 27, -116, -49, 36, -20, -94, 12, -120, 60, -92, 54, 54, -28, -74, 0, 73, 118, 30, 50, -69, 20, 11, -47, -82, -39, 86, 109, 33, -64, 68, -78, -61, 120, 51, -100, -34, 48, -29, -101, 20, 115, 8, -83, -108, 47, 60, -38, 119, -121, -12, 78, -11, 125, 60, -15, 66, 114, 34, -68, 105, 34, 45, 50, -43, 42, -22, 93, -98, -53, -55, 64, -94, -69, -64, -81, 104, -16, -55, 53, 50, 6, -50, -22, -8, 33, 14, -71, -6, 122, -104, -74, 109, -63, -63, -79, -79, 113, 81, -124, 14, -114, 96, 114, -69, 118, 42, -80, 39, -72, 81, 39, -52, -126, 104, -70, 39, -100, 67, -74, -80, -38, -119, -73, 82, -33, 111, 25, -127, -18, 12, -92, -83, 71, 34, 57, -42, 91, -57, -56, -6, -12, 85, 46, -54, -48, -76, 37, 43, 31, -110, 121, 33, -5, -27, -107, 69, -98, -86, -24, -112, 105, -7, -26, 35, 61, 89, -98, 119, -106, 62, -17, -66};
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
    msg.setTimeStamp(0.027172241566706834);
    msg.setSource(38785U);
    msg.setSourceEntity(197U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8433349200085166;

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
    msg.setTimeStamp(0.09373851380911158);
    msg.setSource(20813U);
    msg.setSourceEntity(101U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(55U);
    msg.value = 0.002257098133269131;

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
    msg.setTimeStamp(0.10477888124030876);
    msg.setSource(15989U);
    msg.setSourceEntity(179U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(147U);
    msg.value = 0.786683472059877;

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
    msg.setTimeStamp(0.6685042195303451);
    msg.setSource(61123U);
    msg.setSourceEntity(189U);
    msg.setDestination(6503U);
    msg.setDestinationEntity(5U);
    msg.type = 86U;
    msg.frequency = 3005844243U;
    msg.min_range = 23647U;
    msg.max_range = 6808U;
    msg.bits_per_point = 36U;
    msg.scale_factor = 0.8517468472438056;
    const signed char tmp_msg_0[] = {118, 69, 68, 70, 98, -97, -65, -61, -88, 77, -68, -5, -86, 31, 48, 70, -48, -120, -118, 50, -17, 14, -64, -100};
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
    msg.setTimeStamp(0.19192982510034207);
    msg.setSource(44389U);
    msg.setSourceEntity(213U);
    msg.setDestination(20041U);
    msg.setDestinationEntity(9U);
    msg.type = 150U;
    msg.frequency = 959927520U;
    msg.min_range = 58458U;
    msg.max_range = 16124U;
    msg.bits_per_point = 116U;
    msg.scale_factor = 0.8830905689710613;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.012947951333935226;
    tmp_msg_0.beam_height = 0.9860530043028214;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {63, -36, 37, -55, 21, -89, -9, 27, -126, 40, 106, 57, -119, 74, 52, -105, -66, 99, 53, 62, 101, 20, 89, 39, 72, -126, -17, -92, 44, -35, -48, -48, -13, -89, -48, 2, 71, -22, -106, -73, 52, 56, 105, -99, 5, -98, -67, 71, -112, 121, 18, 29, 96, 115, -57, 90, 23, 67, 18, -87, 35, 43, -28, 50, 100, -6, -62, 41, -113, -81, -3, -76, -85, -57, -4, 88, -61, 111, -33, -25, -83, -124, -44, 95, 71, -102, 75, -67, -86, 12, 70, 108, 24, 99, -115, -65, 99, 66, 48, 6, -8, -74};
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
    msg.setTimeStamp(0.024239082150836477);
    msg.setSource(45592U);
    msg.setSourceEntity(134U);
    msg.setDestination(46287U);
    msg.setDestinationEntity(148U);
    msg.type = 60U;
    msg.frequency = 3896011719U;
    msg.min_range = 22361U;
    msg.max_range = 23022U;
    msg.bits_per_point = 215U;
    msg.scale_factor = 0.6658703495014829;
    const signed char tmp_msg_0[] = {-20, 69, 40, 112, 0, 107, 68, -34, 40, -96, -36, 89, -99, -67, -12, 99, -113, -115, 7, 90, -13, 76, 58, -30, -17, -87, -75, 66, 112, -27, 49, -116, -63, 87, -122, -71, 106, 24, 37, 102, -20, 8, -104, 99, 125, -69, 22, -4, -110, 10, -11, 78, 47, 86, 126, -24, 15, -118, -24, -120, -107, -52, 68, -12, -17, 23, -14, 85, 71, 11, 85, -105, -54, 27, -111, -34, -92, -99, -66, 14, -47, 109, -100};
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
    msg.setTimeStamp(0.7671121891055581);
    msg.setSource(56106U);
    msg.setSourceEntity(164U);
    msg.setDestination(23309U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.09928732105667315);
    msg.setSource(35125U);
    msg.setSourceEntity(214U);
    msg.setDestination(32188U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.021894807054595566);
    msg.setSource(46332U);
    msg.setSourceEntity(237U);
    msg.setDestination(10410U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.9840610063613178);
    msg.setSource(18681U);
    msg.setSourceEntity(199U);
    msg.setDestination(62093U);
    msg.setDestinationEntity(5U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.20940828459535854);
    msg.setSource(28892U);
    msg.setSourceEntity(5U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(156U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.15497395260384372);
    msg.setSource(124U);
    msg.setSourceEntity(92U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(36U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.2099862400151563);
    msg.setSource(32502U);
    msg.setSourceEntity(30U);
    msg.setDestination(905U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6098411187113083;
    msg.confidence = 0.5795987829848763;
    msg.opmodes.assign("VOEGSFDYKSOSRHIMDFWHCZFAMVMAOAIQYRIFCNEYHXRKQJOHZLRXTNBKYELEUIBZOZTFNBWYAOBLHXHYWSLVIWBPNKMADTGGRQRQINWPAEDHQDCVJSQELGZDCUCBSZWSAZBUIQIZQBPFJJMPNPWRKEWX");

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
    msg.setTimeStamp(0.9834448679799187);
    msg.setSource(3329U);
    msg.setSourceEntity(209U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(15U);
    msg.value = 0.44341637534486866;
    msg.confidence = 0.09984430701274027;
    msg.opmodes.assign("MODDGNXVFUYQS");

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
    msg.setTimeStamp(0.9526551143019415);
    msg.setSource(55836U);
    msg.setSourceEntity(90U);
    msg.setDestination(13122U);
    msg.setDestinationEntity(250U);
    msg.value = 0.35271088750259927;
    msg.confidence = 0.36158550018675684;
    msg.opmodes.assign("UDPRIFTHMRTRXTHIJYNSSRAOHEYOPVRUPXIPWGNGXUHKEHBDLVEEGDQVCLJVKGYGTVEZRUADPKFDFPYWMKXVOFEJTIZQAKMIMEYWJDOSXAQASXOMQM");

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
    msg.setTimeStamp(0.7664587788518752);
    msg.setSource(55054U);
    msg.setSourceEntity(93U);
    msg.setDestination(15431U);
    msg.setDestinationEntity(50U);
    msg.itow = 3626655153U;
    msg.lat = 0.8890532595261172;
    msg.lon = 0.2106680458842708;
    msg.height_ell = 0.9480365394226639;
    msg.height_sea = 0.989500391134513;
    msg.hacc = 0.12360024832801564;
    msg.vacc = 0.2043291181966801;
    msg.vel_n = 0.25518808018669725;
    msg.vel_e = 0.627840263008111;
    msg.vel_d = 0.6665132235339681;
    msg.speed = 0.959029282272615;
    msg.gspeed = 0.6917399343794464;
    msg.heading = 0.28055193903675657;
    msg.sacc = 0.6003100044744503;
    msg.cacc = 0.6369085327079556;

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
    msg.setTimeStamp(0.7612204974085927);
    msg.setSource(34639U);
    msg.setSourceEntity(238U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(223U);
    msg.itow = 683821455U;
    msg.lat = 0.07918082894608325;
    msg.lon = 0.8058903050209821;
    msg.height_ell = 0.34848555856002617;
    msg.height_sea = 0.4637896951723175;
    msg.hacc = 0.8243397742606026;
    msg.vacc = 0.22104887732838086;
    msg.vel_n = 0.5846587785493208;
    msg.vel_e = 0.7867105828855757;
    msg.vel_d = 0.5477973290548221;
    msg.speed = 0.3806228744789143;
    msg.gspeed = 0.25923592274913276;
    msg.heading = 0.3871977563455834;
    msg.sacc = 0.49959341004166924;
    msg.cacc = 0.7829962419753639;

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
    msg.setTimeStamp(0.6522898494261136);
    msg.setSource(13238U);
    msg.setSourceEntity(63U);
    msg.setDestination(56195U);
    msg.setDestinationEntity(244U);
    msg.itow = 873154953U;
    msg.lat = 0.7958842608469618;
    msg.lon = 0.8420526509153236;
    msg.height_ell = 0.991248785823683;
    msg.height_sea = 0.23440674518215276;
    msg.hacc = 0.5392496513304811;
    msg.vacc = 0.5598448204169864;
    msg.vel_n = 0.49764012978024796;
    msg.vel_e = 0.49234849681236925;
    msg.vel_d = 0.7817468745561884;
    msg.speed = 0.7545040676811335;
    msg.gspeed = 0.1837750928697458;
    msg.heading = 0.6514051679646611;
    msg.sacc = 0.08381274892875756;
    msg.cacc = 0.2617242775136669;

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
    msg.setTimeStamp(0.9759815039248306);
    msg.setSource(53350U);
    msg.setSourceEntity(11U);
    msg.setDestination(40640U);
    msg.setDestinationEntity(208U);
    msg.id = 113U;
    msg.value = 0.9318318299797906;

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
    msg.setTimeStamp(0.7489583894644597);
    msg.setSource(19431U);
    msg.setSourceEntity(60U);
    msg.setDestination(62169U);
    msg.setDestinationEntity(197U);
    msg.id = 66U;
    msg.value = 0.1344671620988328;

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
    msg.setTimeStamp(0.6106080382325129);
    msg.setSource(49600U);
    msg.setSourceEntity(101U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(142U);
    msg.id = 64U;
    msg.value = 0.029989795291480048;

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
    msg.setTimeStamp(0.8703381914672044);
    msg.setSource(21600U);
    msg.setSourceEntity(183U);
    msg.setDestination(50556U);
    msg.setDestinationEntity(210U);
    msg.x = 0.9326243556183144;
    msg.y = 0.006400297169139257;
    msg.z = 0.16844819780127585;
    msg.phi = 0.07117963733890087;
    msg.theta = 0.10564735031160855;
    msg.psi = 0.9183727486508472;

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
    msg.setTimeStamp(0.937612720758623);
    msg.setSource(40601U);
    msg.setSourceEntity(27U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(21U);
    msg.x = 0.5061719902751863;
    msg.y = 0.052926829643952455;
    msg.z = 0.6740095261123605;
    msg.phi = 0.7630324731634418;
    msg.theta = 0.7539997078926399;
    msg.psi = 0.47979939361271917;

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
    msg.setTimeStamp(0.8452195670676982);
    msg.setSource(54485U);
    msg.setSourceEntity(243U);
    msg.setDestination(4857U);
    msg.setDestinationEntity(107U);
    msg.x = 0.75418595593159;
    msg.y = 0.2220448866141823;
    msg.z = 0.06153769439291512;
    msg.phi = 0.5832288363535214;
    msg.theta = 0.9633726476903869;
    msg.psi = 0.3068374711644789;

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
    msg.setTimeStamp(0.010517631071404132);
    msg.setSource(59076U);
    msg.setSourceEntity(39U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(227U);
    msg.beam_width = 0.6188727580173635;
    msg.beam_height = 0.9260462581751039;

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
    msg.setTimeStamp(0.996310082450372);
    msg.setSource(2890U);
    msg.setSourceEntity(182U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.0015720816684169359;
    msg.beam_height = 0.380287084267673;

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
    msg.setTimeStamp(0.7074688114324054);
    msg.setSource(35924U);
    msg.setSourceEntity(203U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.5044179209892238;
    msg.beam_height = 0.07195567811028358;

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
    msg.setTimeStamp(0.7450077354338823);
    msg.setSource(12946U);
    msg.setSourceEntity(175U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(137U);
    msg.sane = 23U;

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
    msg.setTimeStamp(0.2534131847949168);
    msg.setSource(29509U);
    msg.setSourceEntity(242U);
    msg.setDestination(43027U);
    msg.setDestinationEntity(60U);
    msg.sane = 129U;

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
    msg.setTimeStamp(0.17416196085645264);
    msg.setSource(49090U);
    msg.setSourceEntity(143U);
    msg.setDestination(57532U);
    msg.setDestinationEntity(39U);
    msg.sane = 100U;

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
    msg.setTimeStamp(0.09254594237569125);
    msg.setSource(3897U);
    msg.setSourceEntity(42U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(33U);
    msg.value = 0.1278767382750332;

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
    msg.setTimeStamp(0.7418202638569197);
    msg.setSource(5501U);
    msg.setSourceEntity(46U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8364974953008143;

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
    msg.setTimeStamp(0.38124029291655126);
    msg.setSource(57929U);
    msg.setSourceEntity(227U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(238U);
    msg.value = 0.42510521626531983;

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
    msg.setTimeStamp(0.7617600552446047);
    msg.setSource(65380U);
    msg.setSourceEntity(134U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(246U);
    msg.value = 0.1766817511430443;

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
    msg.setTimeStamp(0.2377327561652195);
    msg.setSource(38858U);
    msg.setSourceEntity(72U);
    msg.setDestination(3395U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8532065263364822;

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
    msg.setTimeStamp(0.3706912513019518);
    msg.setSource(41949U);
    msg.setSourceEntity(243U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3562389707386996;

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
    msg.setTimeStamp(0.0037370194669067436);
    msg.setSource(28513U);
    msg.setSourceEntity(116U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6663009995680848;

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
    msg.setTimeStamp(0.9214267393926084);
    msg.setSource(7307U);
    msg.setSourceEntity(73U);
    msg.setDestination(39579U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7600730883978286;

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
    msg.setTimeStamp(0.07402664890144062);
    msg.setSource(50400U);
    msg.setSourceEntity(19U);
    msg.setDestination(27174U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9178363859615368;

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
    msg.setTimeStamp(0.04685543914287338);
    msg.setSource(19392U);
    msg.setSourceEntity(225U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(110U);
    msg.value = 0.09159723616897031;

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
    msg.setTimeStamp(0.7343347289327962);
    msg.setSource(63283U);
    msg.setSourceEntity(22U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(203U);
    msg.value = 0.6502087941755387;

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
    msg.setTimeStamp(0.3434334985460986);
    msg.setSource(38675U);
    msg.setSourceEntity(79U);
    msg.setDestination(39526U);
    msg.setDestinationEntity(133U);
    msg.value = 0.05466531866030744;

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
    msg.setTimeStamp(0.38714826192892704);
    msg.setSource(20008U);
    msg.setSourceEntity(59U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(97U);
    msg.value = 0.3932701320072478;

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
    msg.setTimeStamp(0.3715297794574439);
    msg.setSource(58932U);
    msg.setSourceEntity(104U);
    msg.setDestination(53908U);
    msg.setDestinationEntity(41U);
    msg.value = 0.872859717634413;

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
    msg.setTimeStamp(0.6054935360753092);
    msg.setSource(48806U);
    msg.setSourceEntity(41U);
    msg.setDestination(60291U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6711200902405619;

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
    msg.setTimeStamp(0.6867088949119418);
    msg.setSource(43558U);
    msg.setSourceEntity(81U);
    msg.setDestination(703U);
    msg.setDestinationEntity(47U);
    msg.value = 0.30675534127512794;

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
    msg.setTimeStamp(0.31134096068758654);
    msg.setSource(17407U);
    msg.setSourceEntity(10U);
    msg.setDestination(599U);
    msg.setDestinationEntity(78U);
    msg.value = 0.02810644320471567;

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
    msg.setTimeStamp(0.424719960884272);
    msg.setSource(64195U);
    msg.setSourceEntity(163U);
    msg.setDestination(20008U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5878777662825915;

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
    msg.setTimeStamp(0.7538735777538554);
    msg.setSource(16485U);
    msg.setSourceEntity(126U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8205372062782421;

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
    msg.setTimeStamp(0.7700016731927364);
    msg.setSource(47043U);
    msg.setSourceEntity(100U);
    msg.setDestination(62295U);
    msg.setDestinationEntity(91U);
    msg.value = 0.2909942567263134;

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
    msg.setTimeStamp(0.4374393882892206);
    msg.setSource(13719U);
    msg.setSourceEntity(92U);
    msg.setDestination(14151U);
    msg.setDestinationEntity(20U);
    msg.value = 0.4799637302434251;

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
    msg.setTimeStamp(0.5252049398406718);
    msg.setSource(34595U);
    msg.setSourceEntity(227U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(72U);
    msg.value = 0.07169293339424376;

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
    msg.setTimeStamp(0.10753944531262516);
    msg.setSource(2527U);
    msg.setSourceEntity(212U);
    msg.setDestination(52607U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5758891745489619;

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
    msg.setTimeStamp(0.38134836033272146);
    msg.setSource(31147U);
    msg.setSourceEntity(245U);
    msg.setDestination(23452U);
    msg.setDestinationEntity(77U);
    msg.value = 0.14738877064786793;

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
    msg.setTimeStamp(0.9866581382850742);
    msg.setSource(46062U);
    msg.setSourceEntity(1U);
    msg.setDestination(62145U);
    msg.setDestinationEntity(64U);
    msg.validity = 63874U;
    msg.type = 220U;
    msg.tow = 1031946851U;
    msg.base_lat = 0.07015285705371477;
    msg.base_lon = 0.8616166517511649;
    msg.base_height = 0.9472538884622452;
    msg.n = 0.4894726427173699;
    msg.e = 0.3540125485077652;
    msg.d = 0.7818929736615838;
    msg.v_n = 0.659748191328097;
    msg.v_e = 0.5929529407298927;
    msg.v_d = 0.02025859121829765;
    msg.satellites = 235U;
    msg.iar_hyp = 62974U;
    msg.iar_ratio = 0.7468607594403366;

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
    msg.setTimeStamp(0.1746872280495977);
    msg.setSource(38176U);
    msg.setSourceEntity(147U);
    msg.setDestination(65318U);
    msg.setDestinationEntity(58U);
    msg.validity = 63327U;
    msg.type = 201U;
    msg.tow = 1663932501U;
    msg.base_lat = 0.49591718083351677;
    msg.base_lon = 0.8416163770066712;
    msg.base_height = 0.4264081049537959;
    msg.n = 0.32957732949057783;
    msg.e = 0.9857137176789247;
    msg.d = 0.3090770924252074;
    msg.v_n = 0.3832663243678306;
    msg.v_e = 0.5829353785073266;
    msg.v_d = 0.3856658528583067;
    msg.satellites = 49U;
    msg.iar_hyp = 3939U;
    msg.iar_ratio = 0.9907363119185156;

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
    msg.setTimeStamp(0.4308720108834301);
    msg.setSource(57882U);
    msg.setSourceEntity(242U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(133U);
    msg.validity = 1002U;
    msg.type = 149U;
    msg.tow = 3610018184U;
    msg.base_lat = 0.9695124188867749;
    msg.base_lon = 0.26450611206325614;
    msg.base_height = 0.900114248995979;
    msg.n = 0.9868223423686557;
    msg.e = 0.15708840345907615;
    msg.d = 0.08854800917017669;
    msg.v_n = 0.27360406009084504;
    msg.v_e = 0.7167203545096145;
    msg.v_d = 0.12969594850472377;
    msg.satellites = 109U;
    msg.iar_hyp = 20332U;
    msg.iar_ratio = 0.012995601999210349;

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
    msg.setTimeStamp(0.41706465261764136);
    msg.setSource(43670U);
    msg.setSourceEntity(80U);
    msg.setDestination(22178U);
    msg.setDestinationEntity(223U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.026285690305188902;
    tmp_msg_0.lon = 0.3344764544661488;
    tmp_msg_0.height = 0.2048734803074379;
    tmp_msg_0.x = 0.7946741089721451;
    tmp_msg_0.y = 0.7721454874876266;
    tmp_msg_0.z = 0.5829982568843416;
    tmp_msg_0.phi = 0.13596957251815056;
    tmp_msg_0.theta = 0.821228665574271;
    tmp_msg_0.psi = 0.19814183856491896;
    tmp_msg_0.u = 0.15372554807263217;
    tmp_msg_0.v = 0.979160039796727;
    tmp_msg_0.w = 0.054543802563756794;
    tmp_msg_0.vx = 0.8827390481370411;
    tmp_msg_0.vy = 0.7832854873784375;
    tmp_msg_0.vz = 0.4346589649027848;
    tmp_msg_0.p = 0.763415409550025;
    tmp_msg_0.q = 0.8746608755146138;
    tmp_msg_0.r = 0.6240148455397236;
    tmp_msg_0.depth = 0.21687076968018015;
    tmp_msg_0.alt = 0.5768619437945254;
    msg.state.set(tmp_msg_0);
    msg.type = 39U;

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
    msg.setTimeStamp(0.4549549100441862);
    msg.setSource(62829U);
    msg.setSourceEntity(213U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(108U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.20502785213853836;
    tmp_msg_0.lon = 0.8934811113752491;
    tmp_msg_0.height = 0.08465970633218023;
    tmp_msg_0.x = 0.28454433569318827;
    tmp_msg_0.y = 0.7187079548185539;
    tmp_msg_0.z = 0.29456975958787734;
    tmp_msg_0.phi = 0.17563460531079356;
    tmp_msg_0.theta = 0.7345880535077726;
    tmp_msg_0.psi = 0.8681548516788812;
    tmp_msg_0.u = 0.9016152847049772;
    tmp_msg_0.v = 0.7937413360346514;
    tmp_msg_0.w = 0.8443578829671655;
    tmp_msg_0.vx = 0.18382759930341774;
    tmp_msg_0.vy = 0.891612051507483;
    tmp_msg_0.vz = 0.9310293368356319;
    tmp_msg_0.p = 0.8790164781680886;
    tmp_msg_0.q = 0.008034110502998626;
    tmp_msg_0.r = 0.7837385749600374;
    tmp_msg_0.depth = 0.5504145659975146;
    tmp_msg_0.alt = 0.7421546514928139;
    msg.state.set(tmp_msg_0);
    msg.type = 98U;

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
    msg.setTimeStamp(0.42576734751628187);
    msg.setSource(10960U);
    msg.setSourceEntity(237U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(182U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.06046907651200695;
    tmp_msg_0.lon = 0.42332945826348267;
    tmp_msg_0.height = 0.07908973943587605;
    tmp_msg_0.x = 0.0020023127591315415;
    tmp_msg_0.y = 0.16562894658009453;
    tmp_msg_0.z = 0.31971084551331885;
    tmp_msg_0.phi = 0.8829060303085183;
    tmp_msg_0.theta = 0.5474087466215695;
    tmp_msg_0.psi = 0.21581619283352205;
    tmp_msg_0.u = 0.09807201353364337;
    tmp_msg_0.v = 0.24439138147870376;
    tmp_msg_0.w = 0.6154757478091958;
    tmp_msg_0.vx = 0.23829352892348654;
    tmp_msg_0.vy = 0.5133413439290642;
    tmp_msg_0.vz = 0.9385833692494294;
    tmp_msg_0.p = 0.21563235578846107;
    tmp_msg_0.q = 0.6793036386886101;
    tmp_msg_0.r = 0.6201889962783328;
    tmp_msg_0.depth = 0.5488042898516373;
    tmp_msg_0.alt = 0.8882128862175557;
    msg.state.set(tmp_msg_0);
    msg.type = 247U;

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
    msg.setTimeStamp(0.9456463635769212);
    msg.setSource(58130U);
    msg.setSourceEntity(146U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4124180322074046;

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
    msg.setTimeStamp(0.4098451201387028);
    msg.setSource(16832U);
    msg.setSourceEntity(37U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9313533419557933;

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
    msg.setTimeStamp(0.2683751465345511);
    msg.setSource(53131U);
    msg.setSourceEntity(212U);
    msg.setDestination(26628U);
    msg.setDestinationEntity(248U);
    msg.value = 0.962286779441858;

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
    msg.setTimeStamp(0.7496878494190913);
    msg.setSource(1914U);
    msg.setSourceEntity(245U);
    msg.setDestination(32161U);
    msg.setDestinationEntity(100U);
    msg.value = 0.15083756023817996;

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
    msg.setTimeStamp(0.8978464574976354);
    msg.setSource(17985U);
    msg.setSourceEntity(212U);
    msg.setDestination(2457U);
    msg.setDestinationEntity(76U);
    msg.value = 0.40585013302357664;

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
    msg.setTimeStamp(0.17102376633803806);
    msg.setSource(1412U);
    msg.setSourceEntity(63U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3981310108347821;

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
    msg.setTimeStamp(0.4261387114259466);
    msg.setSource(19366U);
    msg.setSourceEntity(88U);
    msg.setDestination(55637U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5006491705523215;

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
    msg.setTimeStamp(0.3517502923902355);
    msg.setSource(48889U);
    msg.setSourceEntity(59U);
    msg.setDestination(18652U);
    msg.setDestinationEntity(215U);
    msg.value = 0.12166841674894191;

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
    msg.setTimeStamp(0.17595121881608);
    msg.setSource(25288U);
    msg.setSourceEntity(22U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(62U);
    msg.value = 0.09872521048153793;

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
    msg.setTimeStamp(0.3895870491509359);
    msg.setSource(10886U);
    msg.setSourceEntity(84U);
    msg.setDestination(59123U);
    msg.setDestinationEntity(10U);
    msg.value = 0.17735182327810706;

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
    msg.setTimeStamp(0.4240244870779567);
    msg.setSource(46798U);
    msg.setSourceEntity(64U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(129U);
    msg.value = 0.886152274911502;

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
    msg.setTimeStamp(0.1896414806884369);
    msg.setSource(55753U);
    msg.setSourceEntity(108U);
    msg.setDestination(938U);
    msg.setDestinationEntity(137U);
    msg.value = 0.13905644652894522;

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
    msg.setTimeStamp(0.6846555079559257);
    msg.setSource(14534U);
    msg.setSourceEntity(52U);
    msg.setDestination(46385U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6609249905376459;

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
    msg.setTimeStamp(0.0853797541634882);
    msg.setSource(15979U);
    msg.setSourceEntity(99U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(11U);
    msg.value = 0.9717574566549063;

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
    msg.setTimeStamp(0.01907306525397312);
    msg.setSource(61473U);
    msg.setSourceEntity(216U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(135U);
    msg.value = 0.32436115670850496;

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
    msg.setTimeStamp(0.05518174901676376);
    msg.setSource(29075U);
    msg.setSourceEntity(7U);
    msg.setDestination(47130U);
    msg.setDestinationEntity(149U);
    msg.id = 186U;
    msg.zoom = 126U;
    msg.action = 18U;

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
    msg.setTimeStamp(0.4979301056992351);
    msg.setSource(32458U);
    msg.setSourceEntity(203U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(136U);
    msg.id = 189U;
    msg.zoom = 96U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.1167218339462801);
    msg.setSource(50554U);
    msg.setSourceEntity(97U);
    msg.setDestination(19894U);
    msg.setDestinationEntity(227U);
    msg.id = 16U;
    msg.zoom = 66U;
    msg.action = 152U;

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
    msg.setTimeStamp(0.0580296876664238);
    msg.setSource(7424U);
    msg.setSourceEntity(31U);
    msg.setDestination(28293U);
    msg.setDestinationEntity(22U);
    msg.id = 24U;
    msg.value = 0.8363698003581344;

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
    msg.setTimeStamp(0.06119832238920753);
    msg.setSource(45950U);
    msg.setSourceEntity(239U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(216U);
    msg.id = 181U;
    msg.value = 0.8911790061111117;

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
    msg.setTimeStamp(0.45439171151941193);
    msg.setSource(23323U);
    msg.setSourceEntity(205U);
    msg.setDestination(32579U);
    msg.setDestinationEntity(35U);
    msg.id = 51U;
    msg.value = 0.8029738194263268;

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
    msg.setTimeStamp(0.3340787257489951);
    msg.setSource(22371U);
    msg.setSourceEntity(133U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(103U);
    msg.id = 66U;
    msg.value = 0.9132598900994753;

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
    msg.setTimeStamp(0.6441110792709612);
    msg.setSource(45054U);
    msg.setSourceEntity(156U);
    msg.setDestination(48415U);
    msg.setDestinationEntity(106U);
    msg.id = 224U;
    msg.value = 0.760520011891314;

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
    msg.setTimeStamp(0.1511112057148809);
    msg.setSource(63358U);
    msg.setSourceEntity(50U);
    msg.setDestination(13239U);
    msg.setDestinationEntity(123U);
    msg.id = 120U;
    msg.value = 0.6038590779101788;

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
    msg.setTimeStamp(0.5383639544297936);
    msg.setSource(38501U);
    msg.setSourceEntity(251U);
    msg.setDestination(49287U);
    msg.setDestinationEntity(154U);
    msg.id = 16U;
    msg.angle = 0.7823575822857985;

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
    msg.setTimeStamp(0.5063465265732346);
    msg.setSource(35592U);
    msg.setSourceEntity(131U);
    msg.setDestination(50524U);
    msg.setDestinationEntity(151U);
    msg.id = 174U;
    msg.angle = 0.2810712334886484;

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
    msg.setTimeStamp(0.8356240711729798);
    msg.setSource(52308U);
    msg.setSourceEntity(57U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(124U);
    msg.id = 190U;
    msg.angle = 0.6227652923213776;

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
    msg.setTimeStamp(0.1861524710275858);
    msg.setSource(7950U);
    msg.setSourceEntity(229U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(173U);
    msg.op = 182U;
    msg.actions.assign("XZGEYDACWESDGORNU");

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
    msg.setTimeStamp(0.20931911646470513);
    msg.setSource(12335U);
    msg.setSourceEntity(150U);
    msg.setDestination(17994U);
    msg.setDestinationEntity(213U);
    msg.op = 107U;
    msg.actions.assign("QJHTPUKFAFSTVJXOZBXDVJCEFBGRVAMRLPQDVPLJMWHGSKCBOJZDFIOUNBRZYUNJJFILEUBIMFVNFKRUKOHTCRWGNSRZQCFBLSBGSSGDLICZPDXTPAINCUWXLTICKUNHHDWYTCOKQVRFFVXYMYMERIEOVDHZGKTEUYUXBYMAHXDHKTKMYYHENLJEMQWOIVZJQJQLSAAWGQWSPATRGYNNOXXGSTSKYZWRZU");

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
    msg.setTimeStamp(0.5788230169742988);
    msg.setSource(36772U);
    msg.setSourceEntity(153U);
    msg.setDestination(53737U);
    msg.setDestinationEntity(1U);
    msg.op = 144U;
    msg.actions.assign("PKUVIEYJVZNWFPLDHYOJCWITJGWVP");

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
    msg.setTimeStamp(0.8334174104537744);
    msg.setSource(45604U);
    msg.setSourceEntity(196U);
    msg.setDestination(39736U);
    msg.setDestinationEntity(48U);
    msg.actions.assign("MZQHYVZICTHUUNFDZQVDDZQHCXPGXVHUYLTKTCDPAYBMKTKLWANQCHEBHKALWBFGZNJGIVNMSOMPSZDBVTQRBJJOVCSYEFZFOPGGNMRSVSHIPAFNKPMXRRDCYEAXCNRUWVQYITCXBAGQIMYKELKUIPDNTOZMHOVVHICWLFZXZTDIWKLJOKWXTANEYKXPQWQBO");

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
    msg.setTimeStamp(0.6574581350729468);
    msg.setSource(16772U);
    msg.setSourceEntity(254U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(253U);
    msg.actions.assign("CMZMJEROLHWYEZBTEJZJPKKUQPWCVBLQGUWSCCMWTRXNNSJGBJPXSTACTNTOQEBMVVWDXWWUJTXAVKPMJKXHQOVVYFHOYRAPROHPAUQGDZUXSGIRNRXLYQDDTRWATVVI");

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
    msg.setTimeStamp(0.8523205370999555);
    msg.setSource(64938U);
    msg.setSourceEntity(197U);
    msg.setDestination(6303U);
    msg.setDestinationEntity(36U);
    msg.actions.assign("LEBFVEFLNRGSRESOTQJCQVURTWUOOLIOUAYCPUCQMPTSBGLXQWHZIIGBLTTCDEVKSMFCEGWCHKPPMNXPRARXRSUHHHFNCDKDGTYULQYSUVTKHVZHFEVBJZDBOPYWDZKYWBFFJQNRKPYTMDRJWVRGNXOTXCGNQEXDAIMAUZKSDIIMHXZQVFVABLPONJLVYAAJFPGQJKGCKUHWYPSLXCSWNDXYBXAHOAFUZNOJWQROJZBZ");

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
    msg.setTimeStamp(0.7115023557148353);
    msg.setSource(18700U);
    msg.setSourceEntity(236U);
    msg.setDestination(34808U);
    msg.setDestinationEntity(175U);
    msg.button = 227U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.8387503733090284);
    msg.setSource(30600U);
    msg.setSourceEntity(136U);
    msg.setDestination(59084U);
    msg.setDestinationEntity(173U);
    msg.button = 116U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.42004222257135426);
    msg.setSource(63582U);
    msg.setSourceEntity(158U);
    msg.setDestination(57445U);
    msg.setDestinationEntity(254U);
    msg.button = 214U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.8496680888388463);
    msg.setSource(1742U);
    msg.setSourceEntity(250U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(227U);
    msg.op = 46U;
    msg.text.assign("EWWZSIAOHKCCAHXKDLGVPUNUWZUTJZMPLIHQPBDONZWFMKIDXA");

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
    msg.setTimeStamp(0.367682818704687);
    msg.setSource(45645U);
    msg.setSourceEntity(5U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(212U);
    msg.op = 231U;
    msg.text.assign("UNTLDGVOSEK");

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
    msg.setTimeStamp(0.6821402483380079);
    msg.setSource(17866U);
    msg.setSourceEntity(113U);
    msg.setDestination(36918U);
    msg.setDestinationEntity(25U);
    msg.op = 232U;
    msg.text.assign("XICWIDEOAULEYPNC");

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
    msg.setTimeStamp(0.9277424845371753);
    msg.setSource(6873U);
    msg.setSourceEntity(98U);
    msg.setDestination(48522U);
    msg.setDestinationEntity(188U);
    msg.op = 48U;
    msg.time_remain = 0.26243124924896566;
    msg.sched_time = 0.1620687277310784;

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
    msg.setTimeStamp(0.3140116277891257);
    msg.setSource(51460U);
    msg.setSourceEntity(120U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(122U);
    msg.op = 92U;
    msg.time_remain = 0.10989986212572711;
    msg.sched_time = 0.7547882036856904;

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
    msg.setTimeStamp(0.2696851015918489);
    msg.setSource(4610U);
    msg.setSourceEntity(182U);
    msg.setDestination(13992U);
    msg.setDestinationEntity(171U);
    msg.op = 88U;
    msg.time_remain = 0.022919348627007397;
    msg.sched_time = 0.5651801133859892;

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
    msg.setTimeStamp(0.6186292591325856);
    msg.setSource(23652U);
    msg.setSourceEntity(23U);
    msg.setDestination(54933U);
    msg.setDestinationEntity(19U);
    msg.name.assign("LBDTEBPRLPZCEVPXIDLDEEXTFUIXVAQYSGHOXDVMDZYPSWKWNCHTUKOIIYYKSHYBCIJWAEZLKFLAORYLIJMETQXGGCUNKTWAIIKMXOAJKLCGPOWHLJJRJWVSVLDYSNOCMWQPXVAMKCWFDXZFMSCEPDBUPQETHXGNQVUUH");
    msg.op = 113U;
    msg.sched_time = 0.955008844132906;

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
    msg.setTimeStamp(0.9939464580610993);
    msg.setSource(64580U);
    msg.setSourceEntity(54U);
    msg.setDestination(55286U);
    msg.setDestinationEntity(23U);
    msg.name.assign("ADRKAKJHFDHKVBRXPXCPWTSGGTGMDANIAMVCFYCHYVWLVUZTSVLOZGERWHESSSBJUXNJGDF");
    msg.op = 185U;
    msg.sched_time = 0.45824067175113525;

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
    msg.setTimeStamp(0.8482400145212052);
    msg.setSource(16367U);
    msg.setSourceEntity(5U);
    msg.setDestination(18796U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XMBTVCNLAWOWCPHENOEOHTWESXLTDASJUFQFCYBMAHNZAXZKRXSRXDJBQIBRZDKINQJHCGDCSFDKCPWKIFEJGYBAEZJWZGZIFUVHNEUS");
    msg.op = 28U;
    msg.sched_time = 0.6337424559338446;

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
    msg.setTimeStamp(0.4158294084217877);
    msg.setSource(39737U);
    msg.setSourceEntity(125U);
    msg.setDestination(24089U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.19021904116157962);
    msg.setSource(7119U);
    msg.setSourceEntity(211U);
    msg.setDestination(63921U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.917337547344855);
    msg.setSource(14399U);
    msg.setSourceEntity(90U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.435236089684754);
    msg.setSource(62863U);
    msg.setSourceEntity(59U);
    msg.setDestination(18255U);
    msg.setDestinationEntity(85U);
    msg.name.assign("CVVJFLWASAFSMOXDVZDHGQCNWTLPGSLKTUBQKJNZBQOUBLGEAQTHOSXKRYXBLIYQVVGNDSUZIJWRSWDMLYFCHLUWJRBSHRARDEEQZZTCIRMVUKPMQKZYUMILYAKUXNKZDJFDJPDSECVACFPRKWFPYICPDFRUOPHXGMJAFVTOGQPBHATIXXHLYJUAXMIMCCETHOIENKIPEZBMEWWDXIGHQRONLKJFTBZJEOYCNOVNSGTRBUFHWWBX");
    msg.state = 251U;

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
    msg.setTimeStamp(0.6341698846524121);
    msg.setSource(16571U);
    msg.setSourceEntity(209U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(15U);
    msg.name.assign("GTCCYDYNKEHXI");
    msg.state = 155U;

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
    msg.setTimeStamp(0.03959489975558439);
    msg.setSource(16110U);
    msg.setSourceEntity(108U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DFKZYDPOWYDTXCOCTLXNLOGQZHQIQVRXYBGTZKOXMEFHPYITYJUNVPJSKOVJTIBOCBALSSMXKYEQDUMCTWRCROPQNRADHAZNJUCNCLMUBPIHKAGNBMGETRWOGZSSFEFEBBHJZIXRKEVFALWRMLWMXBVHKKQOVLPYMNLYNEJZSKWHRCTFCFSAFQJLVZTU");
    msg.state = 120U;

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
    msg.setTimeStamp(0.9419328016522709);
    msg.setSource(48981U);
    msg.setSourceEntity(23U);
    msg.setDestination(40227U);
    msg.setDestinationEntity(191U);
    msg.name.assign("SUOLQZOUXTTFYEROCNHWNOONUPERILKROLSCVZZMIHWJIZGEYPOGKFXRSCMYPMIAHTWUKFBFCHXGDTWOTVTKLMMGUDJRNFNNRNLQXPLUIBPHDTLKFVWDQCGBTEDBROMQV");
    msg.value = 150U;

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
    msg.setTimeStamp(0.963037382603012);
    msg.setSource(742U);
    msg.setSourceEntity(178U);
    msg.setDestination(23592U);
    msg.setDestinationEntity(166U);
    msg.name.assign("YGBQZNQFESIPATOOVRHETWLXAZEWYIMGSRDUHSUKKMJQZLHQMXLYWATUDDARCURXFGHYZEKVAIKQOCENPXQDGFBSIKEHVJXBLIHPBQVLXLSZKOBULEJONMAJAGMGLGOXJAMWNFNFHVYXSUTXKZBCOJWMLZRRSBUBMSPCLRSVWNRPJHDGCTMCUPYUOEYODWFVTDRTKZFZZUWBSDIICRWFHNEBXKYEYVNDGJTCCHYIICDKQPWATN");
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
    msg.setTimeStamp(0.35991712641828133);
    msg.setSource(31172U);
    msg.setSourceEntity(152U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(136U);
    msg.name.assign("WSBVNMKJKBUMPASKCOGGXJXLHSDQPUGDQMXAGIPMFOXVMRDTKIOTFZWYWZWHOTLDQRILLVVIZLUB");
    msg.value = 90U;

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
    msg.setTimeStamp(0.32381838477891733);
    msg.setSource(23239U);
    msg.setSourceEntity(14U);
    msg.setDestination(64798U);
    msg.setDestinationEntity(235U);
    msg.name.assign("GIWLYFGYPEBPPHHLNLQZEGYYKEQHUNHINIKDBEAZMXJVQVRMMODXLVQUJKHSLKVIFRKUEMBBUAPZAVFLASTHZDNBXYMTQZKGJRNJDPPCKLHHCNAOGCGRCQXCFCGOSYFWABAZOTJFRTOZQCRRZYLTRWRTYWXQXNUDJSGHULMWBKJIDFXPBAV");

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
    msg.setTimeStamp(0.3354536974190816);
    msg.setSource(18940U);
    msg.setSourceEntity(1U);
    msg.setDestination(47385U);
    msg.setDestinationEntity(103U);
    msg.name.assign("VJIHTBMEJSDCFIIEZUZEQKDAXEMYPPUHVZUOGLXWAXDKNWCNERCXTYQARQOKBEXCULTVFOZVIJPPBHIOMCRDGZABSUBFFTOGOVUFXLZKMRFWCUKKDNCWMGQKGPCKJCIQYORSPDQAWYBSQHHFFEVJPOIAZUYICVDWXJGBITWIMANRNGWBAALFSEPHVZSYZVLTSEHJMTPTMLMJWXYTRONDRANSQJFLSHKYNYGWVRJMUGHTP");

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
    msg.setTimeStamp(0.5264213398391484);
    msg.setSource(18867U);
    msg.setSourceEntity(105U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(208U);
    msg.name.assign("LWMDLZMOFDSVGOQOPGVHNYXUAVFFQMROODHLXSNQUSZNGRIKGHCH");

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
    msg.setTimeStamp(0.6084140191939021);
    msg.setSource(54332U);
    msg.setSourceEntity(20U);
    msg.setDestination(65320U);
    msg.setDestinationEntity(63U);
    msg.name.assign("BJAPJLDGAFYIINIDENCZLIOOZNMQEGTWRLIBRSIUDHEXZXTKJGWUVFXWSRKXAVLCSKRRRXNCSTJZGMLGHBYMOPYPKPUGBSPHANEHOQPBGAZYPEICFJOFOGKOYMFWGMBTVCPUYOWHTDCCROKARWHIXNAITMSZPCUHUBNKSDUTKMJLBVMZQBPWUETWUNAEKLJXQFHQVYRSLQZSIJFFJXVEHQBDYXLUVFVSHEWGDTKQZQOVCNAXZLQJ");
    msg.value = 1U;

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
    msg.setTimeStamp(0.5163921509817659);
    msg.setSource(52540U);
    msg.setSourceEntity(219U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(18U);
    msg.name.assign("KUHZEJCXORLZZCGVBHIRDAYMEPHZTZYAKXKYBBCYNXHDIJJDVPZZFINRRORDPYGSIVOGLWFJESNQXAAXWLFTCEQIGPZYBTXLFYMJEVJYOPAGVQBUSLSVNSXWMZBMTSFTSMBQORLQWDUJIVRXDUHDKVMWHNLUACJUHXMSOGCTHWQURKNCLFKIKDHPWFNXPLMEGAAVWQZMIUGVLYCNOEWMAGQEESNBONBEAJGPTYSDTDPIQCRKQFJ");
    msg.value = 207U;

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
    msg.setTimeStamp(0.11866943641629202);
    msg.setSource(14137U);
    msg.setSourceEntity(194U);
    msg.setDestination(51314U);
    msg.setDestinationEntity(215U);
    msg.name.assign("WWYIMSASANVMQAPFAHGOECKF");
    msg.value = 148U;

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
    msg.setTimeStamp(0.09467642188892178);
    msg.setSource(52919U);
    msg.setSourceEntity(210U);
    msg.setDestination(44048U);
    msg.setDestinationEntity(210U);
    msg.id = 30U;
    msg.period = 3831294953U;
    msg.duty_cycle = 4003610626U;

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
    msg.setTimeStamp(0.7809402490086277);
    msg.setSource(39686U);
    msg.setSourceEntity(116U);
    msg.setDestination(34806U);
    msg.setDestinationEntity(41U);
    msg.id = 178U;
    msg.period = 2515788587U;
    msg.duty_cycle = 3307383675U;

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
    msg.setTimeStamp(0.5871101921392319);
    msg.setSource(12032U);
    msg.setSourceEntity(252U);
    msg.setDestination(16231U);
    msg.setDestinationEntity(0U);
    msg.id = 225U;
    msg.period = 3991987224U;
    msg.duty_cycle = 3361918193U;

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
    msg.setTimeStamp(0.42824851355759286);
    msg.setSource(24180U);
    msg.setSourceEntity(97U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(175U);
    msg.id = 224U;
    msg.period = 2288426763U;
    msg.duty_cycle = 297166093U;

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
    msg.setTimeStamp(0.05597580935630608);
    msg.setSource(2833U);
    msg.setSourceEntity(22U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(213U);
    msg.id = 125U;
    msg.period = 1861074175U;
    msg.duty_cycle = 140960355U;

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
    msg.setTimeStamp(0.8352914634391319);
    msg.setSource(41182U);
    msg.setSourceEntity(3U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(231U);
    msg.id = 192U;
    msg.period = 303200542U;
    msg.duty_cycle = 2683477861U;

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
    msg.setTimeStamp(0.24618196814346016);
    msg.setSource(57585U);
    msg.setSourceEntity(42U);
    msg.setDestination(34930U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.7566790620236603;
    msg.lon = 0.1891347705320141;
    msg.height = 0.3652204526628098;
    msg.x = 0.2583627985098116;
    msg.y = 0.09779559352461387;
    msg.z = 0.9500055580976627;
    msg.phi = 0.7787127040387959;
    msg.theta = 0.9562294611516697;
    msg.psi = 0.41976691783803266;
    msg.u = 0.25041782073908636;
    msg.v = 0.3306771376786337;
    msg.w = 0.4997194250719639;
    msg.vx = 0.6546672715937799;
    msg.vy = 0.6821241297205566;
    msg.vz = 0.32645861449447466;
    msg.p = 0.3659004271587806;
    msg.q = 0.8840174779468813;
    msg.r = 0.06288091570470888;
    msg.depth = 0.41224404234726897;
    msg.alt = 0.826869439355527;

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
    msg.setTimeStamp(0.8050697968434879);
    msg.setSource(52796U);
    msg.setSourceEntity(131U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.3430209806032877;
    msg.lon = 0.5435307994005026;
    msg.height = 0.050477295943050615;
    msg.x = 0.6828847390848043;
    msg.y = 0.30647636379380483;
    msg.z = 0.3412544981056842;
    msg.phi = 0.388805783083917;
    msg.theta = 0.9243826998442924;
    msg.psi = 0.2836828690772001;
    msg.u = 0.6371420352446404;
    msg.v = 0.053490877709224005;
    msg.w = 0.3037199426824617;
    msg.vx = 0.27683332315370746;
    msg.vy = 0.0671017372155116;
    msg.vz = 0.4557298617579779;
    msg.p = 0.5649901298628135;
    msg.q = 0.7615702689824704;
    msg.r = 0.7952652419531197;
    msg.depth = 0.7090458459490742;
    msg.alt = 0.813914990207798;

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
    msg.setTimeStamp(0.7568098260887721);
    msg.setSource(55518U);
    msg.setSourceEntity(108U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.4246156096616809;
    msg.lon = 0.6810985783889726;
    msg.height = 0.7628873932668114;
    msg.x = 0.9579312488870092;
    msg.y = 0.5456775728089737;
    msg.z = 0.614164905636919;
    msg.phi = 0.14101327288335042;
    msg.theta = 0.5117807682553845;
    msg.psi = 0.9472124969488912;
    msg.u = 0.20477055688917167;
    msg.v = 0.6003681920433542;
    msg.w = 0.031012893791209417;
    msg.vx = 0.8358432964904067;
    msg.vy = 0.7473664124787439;
    msg.vz = 0.45913061878893446;
    msg.p = 0.02964040450000449;
    msg.q = 0.0695697422995496;
    msg.r = 0.4115395922181152;
    msg.depth = 0.3263352456168348;
    msg.alt = 0.14845205647052462;

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
    msg.setTimeStamp(0.21584900112409877);
    msg.setSource(9405U);
    msg.setSourceEntity(114U);
    msg.setDestination(45251U);
    msg.setDestinationEntity(17U);
    msg.x = 0.33840530024974935;
    msg.y = 0.23540530890186095;
    msg.z = 0.7318927502144943;

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
    msg.setTimeStamp(0.904254670378506);
    msg.setSource(108U);
    msg.setSourceEntity(46U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(109U);
    msg.x = 0.34657314226156455;
    msg.y = 0.4111154844404187;
    msg.z = 0.7712582463493673;

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
    msg.setTimeStamp(0.721413116134087);
    msg.setSource(11746U);
    msg.setSourceEntity(65U);
    msg.setDestination(64591U);
    msg.setDestinationEntity(204U);
    msg.x = 0.784934137416857;
    msg.y = 0.1040697805958557;
    msg.z = 0.6544327978894675;

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
    msg.setTimeStamp(0.8665902557502259);
    msg.setSource(37515U);
    msg.setSourceEntity(50U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5091847565532397;

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
    msg.setTimeStamp(0.06991900759365566);
    msg.setSource(62387U);
    msg.setSourceEntity(38U);
    msg.setDestination(39682U);
    msg.setDestinationEntity(231U);
    msg.value = 0.1118298082393493;

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
    msg.setTimeStamp(0.2626885361574527);
    msg.setSource(48979U);
    msg.setSourceEntity(87U);
    msg.setDestination(20136U);
    msg.setDestinationEntity(175U);
    msg.value = 0.7488227640903056;

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
    msg.setTimeStamp(0.19597909565200333);
    msg.setSource(49567U);
    msg.setSourceEntity(3U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(93U);
    msg.value = 0.7591596342278195;

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
    msg.setTimeStamp(0.9642505308423838);
    msg.setSource(45122U);
    msg.setSourceEntity(151U);
    msg.setDestination(43819U);
    msg.setDestinationEntity(101U);
    msg.value = 0.698895344925665;

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
    msg.setTimeStamp(0.19410071587605815);
    msg.setSource(57327U);
    msg.setSourceEntity(221U);
    msg.setDestination(3213U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6345665605704522;

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
    msg.setTimeStamp(0.5128545788495388);
    msg.setSource(62532U);
    msg.setSourceEntity(118U);
    msg.setDestination(12413U);
    msg.setDestinationEntity(119U);
    msg.x = 0.8436787077830747;
    msg.y = 0.5288851210617811;
    msg.z = 0.05884896403382556;
    msg.phi = 0.8711622761817052;
    msg.theta = 0.860036604931633;
    msg.psi = 0.748944762517625;
    msg.p = 0.18497981848009992;
    msg.q = 0.572573494977832;
    msg.r = 0.9535835270341324;
    msg.u = 0.7521727857086506;
    msg.v = 0.9652841755623363;
    msg.w = 0.34711404550647407;
    msg.bias_psi = 0.2584666168305392;
    msg.bias_r = 0.948432878325955;

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
    msg.setTimeStamp(0.6032480386525838);
    msg.setSource(43777U);
    msg.setSourceEntity(144U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(53U);
    msg.x = 0.819074713309209;
    msg.y = 0.8419339403354024;
    msg.z = 0.9035866667157058;
    msg.phi = 0.7983447688175755;
    msg.theta = 0.2768621997335132;
    msg.psi = 0.8567238230857455;
    msg.p = 0.4000124269046016;
    msg.q = 0.015058393889932575;
    msg.r = 0.8751536369583052;
    msg.u = 0.3077808172406705;
    msg.v = 0.6141244004708201;
    msg.w = 0.9853727279841558;
    msg.bias_psi = 0.7437093577136434;
    msg.bias_r = 0.6690514075696874;

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
    msg.setTimeStamp(0.731997265684137);
    msg.setSource(43490U);
    msg.setSourceEntity(194U);
    msg.setDestination(39480U);
    msg.setDestinationEntity(6U);
    msg.x = 0.9413952767001671;
    msg.y = 0.7746481877929857;
    msg.z = 0.974909170178972;
    msg.phi = 0.21915958357327026;
    msg.theta = 0.5809621882109005;
    msg.psi = 0.1250984939634141;
    msg.p = 0.08911318257367373;
    msg.q = 0.44975338482545657;
    msg.r = 0.023544416704384674;
    msg.u = 0.7467317578762194;
    msg.v = 0.7461244938408129;
    msg.w = 0.05990344501253331;
    msg.bias_psi = 0.6301104628199372;
    msg.bias_r = 0.14250557300680355;

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
    msg.setTimeStamp(0.3950063156406931);
    msg.setSource(33518U);
    msg.setSourceEntity(170U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(97U);
    msg.bias_psi = 0.523442913986198;
    msg.bias_r = 0.8897512274299286;
    msg.cog = 0.9850208578498437;
    msg.cyaw = 0.897816486670665;
    msg.lbl_rej_level = 0.3521342389750679;
    msg.gps_rej_level = 0.1491586757747756;
    msg.custom_x = 0.6993473018428369;
    msg.custom_y = 0.48354324558023254;
    msg.custom_z = 0.6983468555529129;

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
    msg.setTimeStamp(0.49207608161220107);
    msg.setSource(61747U);
    msg.setSourceEntity(41U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(248U);
    msg.bias_psi = 0.561516929435246;
    msg.bias_r = 0.6218179913255202;
    msg.cog = 0.9840526542698481;
    msg.cyaw = 0.29123426122074425;
    msg.lbl_rej_level = 0.2719960234663774;
    msg.gps_rej_level = 0.35533585431682246;
    msg.custom_x = 0.597196979303452;
    msg.custom_y = 0.48776365072578465;
    msg.custom_z = 0.636227544486754;

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
    msg.setTimeStamp(0.4354263263557233);
    msg.setSource(52399U);
    msg.setSourceEntity(19U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(159U);
    msg.bias_psi = 0.4099184164071831;
    msg.bias_r = 0.8179292484082659;
    msg.cog = 0.270637101324645;
    msg.cyaw = 0.8981472659824384;
    msg.lbl_rej_level = 0.9564496772091011;
    msg.gps_rej_level = 0.6878110397798339;
    msg.custom_x = 0.43779036851566855;
    msg.custom_y = 0.716540066173778;
    msg.custom_z = 0.9823443743184267;

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
    msg.setTimeStamp(0.5231901496284808);
    msg.setSource(37431U);
    msg.setSourceEntity(114U);
    msg.setDestination(54071U);
    msg.setDestinationEntity(92U);
    msg.utc_time = 0.7919105921393917;
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
    msg.setTimeStamp(0.12144391406186705);
    msg.setSource(58838U);
    msg.setSourceEntity(217U);
    msg.setDestination(60930U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.8929427245874707;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.9769390176823756);
    msg.setSource(38625U);
    msg.setSourceEntity(16U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(79U);
    msg.utc_time = 0.9476834400729082;
    msg.reason = 149U;

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
    msg.setTimeStamp(0.003289216874098);
    msg.setSource(8882U);
    msg.setSourceEntity(27U);
    msg.setDestination(20007U);
    msg.setDestinationEntity(67U);
    msg.id = 152U;
    msg.range = 0.986434606066835;
    msg.acceptance = 106U;

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
    msg.setTimeStamp(0.5686650665871229);
    msg.setSource(26051U);
    msg.setSourceEntity(165U);
    msg.setDestination(23593U);
    msg.setDestinationEntity(42U);
    msg.id = 35U;
    msg.range = 0.8102853706922003;
    msg.acceptance = 176U;

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
    msg.setTimeStamp(0.41075851926309814);
    msg.setSource(47015U);
    msg.setSourceEntity(73U);
    msg.setDestination(26306U);
    msg.setDestinationEntity(53U);
    msg.id = 251U;
    msg.range = 0.062293122442944715;
    msg.acceptance = 122U;

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
    msg.setTimeStamp(0.46457702563716274);
    msg.setSource(59924U);
    msg.setSourceEntity(141U);
    msg.setDestination(16922U);
    msg.setDestinationEntity(101U);
    msg.type = 145U;
    msg.reason = 57U;
    msg.value = 0.04561252230628843;
    msg.timestep = 0.6118854015694156;

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
    msg.setTimeStamp(0.7439992542789085);
    msg.setSource(57343U);
    msg.setSourceEntity(58U);
    msg.setDestination(8888U);
    msg.setDestinationEntity(250U);
    msg.type = 157U;
    msg.reason = 16U;
    msg.value = 0.5446455281857093;
    msg.timestep = 0.13225220465161047;

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
    msg.setTimeStamp(0.4496613478388676);
    msg.setSource(1000U);
    msg.setSourceEntity(113U);
    msg.setDestination(4745U);
    msg.setDestinationEntity(157U);
    msg.type = 187U;
    msg.reason = 222U;
    msg.value = 0.6308125406605999;
    msg.timestep = 0.23741895643849065;

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
    msg.setTimeStamp(0.5217332395709495);
    msg.setSource(53995U);
    msg.setSourceEntity(177U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(49U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AKYHVXDZRXMUJCHIPYOKEMKPQKVGNIVMDECHZJPWGVWYBWMBCKSPDBFFGSAOPDXERTAHSLOGVXQYJPLUDXEHNBGPYUIBJDSJMDQVVIWOOGRDURTGTSACVRLPSHEURXDKINUWHLPZMZUJLBTUJFNVANCCRVQFYJCLYWQQMCXWMPQLIEOAQENTXF");
    tmp_msg_0.lat = 0.8496268354282757;
    tmp_msg_0.lon = 0.6072420634033996;
    tmp_msg_0.depth = 0.5180497656345181;
    tmp_msg_0.query_channel = 211U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 44U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9416887187249505;
    msg.y = 0.8667437892075702;
    msg.var_x = 0.859152059510271;
    msg.var_y = 0.184127875012156;
    msg.distance = 0.6604544883140021;

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
    msg.setTimeStamp(0.1184459503590427);
    msg.setSource(24975U);
    msg.setSourceEntity(172U);
    msg.setDestination(41663U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DMTODJDTUQGYTHCSFWCPGHUOADEZSZPFOSDNEXUYABUKZSNEKFQFPRZVCUAFJXGKPOGWRAVQXHWOBXHJUXGMGGSKDXIVWWHSPNVGNLVROLJLZIBNNXQYICSLFHNKRIFGZBMQKJJUVREVYUNETTRRWMBJQLJCIXIYAARZHSYOBVULQHQQYJODPKCUMSCTITOVWXEIZBJNQWLKPCEMZLEHLIIDBXKMNFKTCWPMBRDYVAPMWFZC");
    tmp_msg_0.lat = 0.9448245458570821;
    tmp_msg_0.lon = 0.13750549581256866;
    tmp_msg_0.depth = 0.8461003807579481;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 27U;
    tmp_msg_0.transponder_delay = 108U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.03946913724836654;
    msg.y = 0.13759825378224577;
    msg.var_x = 0.8167279832073385;
    msg.var_y = 0.9802340741808616;
    msg.distance = 0.24721773300031247;

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
    msg.setTimeStamp(0.9923096764983816);
    msg.setSource(15594U);
    msg.setSourceEntity(61U);
    msg.setDestination(57768U);
    msg.setDestinationEntity(175U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCIYDEWNNOISUDAMLRHCQGQAWXAAEFYUWJLFATYFBKRNMTOUXSBSSHYSXNWWGCVBGXMDMPRQLULBAFEEQUCOLCUENGIMSFGSDDVVIZMYHKPPJBOGCXXZOVFROVJVDJENOLBMBCDBNPOY");
    tmp_msg_0.lat = 0.10683546470376215;
    tmp_msg_0.lon = 0.224167189750186;
    tmp_msg_0.depth = 0.3617629443639506;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 165U;
    tmp_msg_0.transponder_delay = 32U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.70325966245991;
    msg.y = 0.8012829457635081;
    msg.var_x = 0.7829096687196225;
    msg.var_y = 0.6053719599070586;
    msg.distance = 0.42639134924885647;

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
    msg.setTimeStamp(0.15009075295364338);
    msg.setSource(50979U);
    msg.setSourceEntity(3U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(55U);
    msg.state = 29U;

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
    msg.setTimeStamp(0.30895293838986104);
    msg.setSource(53107U);
    msg.setSourceEntity(107U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(135U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.853596973336763);
    msg.setSource(38265U);
    msg.setSourceEntity(91U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(249U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.7674923521641656);
    msg.setSource(7091U);
    msg.setSourceEntity(49U);
    msg.setDestination(49538U);
    msg.setDestinationEntity(86U);
    msg.x = 0.5982469583620073;
    msg.y = 0.7044087709830819;
    msg.z = 0.10695128947275179;

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
    msg.setTimeStamp(0.06798273592610704);
    msg.setSource(46524U);
    msg.setSourceEntity(21U);
    msg.setDestination(16717U);
    msg.setDestinationEntity(26U);
    msg.x = 0.16935932620126293;
    msg.y = 0.08109987880500358;
    msg.z = 0.44046513508739127;

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
    msg.setTimeStamp(0.5879412054114727);
    msg.setSource(3735U);
    msg.setSourceEntity(28U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(65U);
    msg.x = 0.11313708954821455;
    msg.y = 0.8034948973383914;
    msg.z = 0.21428660521975607;

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
    msg.setTimeStamp(0.15679040777625108);
    msg.setSource(23113U);
    msg.setSourceEntity(138U);
    msg.setDestination(54483U);
    msg.setDestinationEntity(58U);
    msg.va = 0.5939844697075444;
    msg.aoa = 0.8332361387307198;
    msg.ssa = 0.6359794851213464;

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
    msg.setTimeStamp(0.8308062165626083);
    msg.setSource(876U);
    msg.setSourceEntity(139U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(31U);
    msg.va = 0.37383506862487725;
    msg.aoa = 0.7460962312822186;
    msg.ssa = 0.9598047160526119;

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
    msg.setTimeStamp(0.30562208754073783);
    msg.setSource(8244U);
    msg.setSourceEntity(59U);
    msg.setDestination(49928U);
    msg.setDestinationEntity(114U);
    msg.va = 0.9795490731668004;
    msg.aoa = 0.8853626788855985;
    msg.ssa = 0.7014682040341049;

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
    msg.setTimeStamp(0.15051363423718955);
    msg.setSource(12156U);
    msg.setSourceEntity(217U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2843340478770813;

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
    msg.setTimeStamp(0.18222736304522302);
    msg.setSource(60426U);
    msg.setSourceEntity(3U);
    msg.setDestination(3037U);
    msg.setDestinationEntity(193U);
    msg.value = 0.2993189991474282;

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
    msg.setTimeStamp(0.5443347092315117);
    msg.setSource(2550U);
    msg.setSourceEntity(97U);
    msg.setDestination(48453U);
    msg.setDestinationEntity(55U);
    msg.value = 0.6899624486409063;

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
    msg.setTimeStamp(0.33974230663620075);
    msg.setSource(44787U);
    msg.setSourceEntity(165U);
    msg.setDestination(402U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8177937737987745;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.5351652085924509);
    msg.setSource(24084U);
    msg.setSourceEntity(233U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(107U);
    msg.value = 0.05710876129382558;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.7442111258891266);
    msg.setSource(49567U);
    msg.setSourceEntity(56U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(240U);
    msg.value = 0.3216482677721212;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.4307636296252283);
    msg.setSource(28544U);
    msg.setSourceEntity(136U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(129U);
    msg.value = 0.6584708320140543;
    msg.speed_units = 230U;

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
    msg.setTimeStamp(0.7679503466446851);
    msg.setSource(17038U);
    msg.setSourceEntity(211U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5313450075497738;
    msg.speed_units = 242U;

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
    msg.setTimeStamp(0.4655692852833836);
    msg.setSource(54086U);
    msg.setSourceEntity(116U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7847963595842858;
    msg.speed_units = 159U;

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
    msg.setTimeStamp(0.925238618896891);
    msg.setSource(33171U);
    msg.setSourceEntity(235U);
    msg.setDestination(45708U);
    msg.setDestinationEntity(96U);
    msg.value = 0.688830022131149;

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
    msg.setTimeStamp(0.292200927493777);
    msg.setSource(39208U);
    msg.setSourceEntity(95U);
    msg.setDestination(22033U);
    msg.setDestinationEntity(35U);
    msg.value = 0.1706629799309728;

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
    msg.setTimeStamp(0.19220808907520903);
    msg.setSource(58880U);
    msg.setSourceEntity(38U);
    msg.setDestination(54847U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5744300232711395;

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
    msg.setTimeStamp(0.5528830953182048);
    msg.setSource(2976U);
    msg.setSourceEntity(80U);
    msg.setDestination(14066U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6178052630699281;

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
    msg.setTimeStamp(0.12857035016924112);
    msg.setSource(35005U);
    msg.setSourceEntity(239U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(108U);
    msg.value = 0.21421809350221166;

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
    msg.setTimeStamp(0.9366810163553334);
    msg.setSource(48369U);
    msg.setSourceEntity(169U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(171U);
    msg.value = 0.08171306811281909;

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
    msg.setTimeStamp(0.45981744642328204);
    msg.setSource(62558U);
    msg.setSourceEntity(103U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6869281327669546;

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
    msg.setTimeStamp(0.8625346049114797);
    msg.setSource(60463U);
    msg.setSourceEntity(236U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(14U);
    msg.value = 0.4622278452075299;

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
    msg.setTimeStamp(0.19361952898322154);
    msg.setSource(18725U);
    msg.setSourceEntity(109U);
    msg.setDestination(61225U);
    msg.setDestinationEntity(161U);
    msg.value = 0.6092995263286077;

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
    msg.setTimeStamp(0.47159576325109365);
    msg.setSource(46715U);
    msg.setSourceEntity(201U);
    msg.setDestination(5754U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 799068754U;
    msg.start_lat = 0.9383156340647087;
    msg.start_lon = 0.16705153493442848;
    msg.start_z = 0.23048233407853402;
    msg.start_z_units = 135U;
    msg.end_lat = 0.9150035998866936;
    msg.end_lon = 0.11958372835161513;
    msg.end_z = 0.17275776227310946;
    msg.end_z_units = 47U;
    msg.speed = 0.4363708943548925;
    msg.speed_units = 93U;
    msg.lradius = 0.8979255217852277;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.24916129470332438);
    msg.setSource(19362U);
    msg.setSourceEntity(142U);
    msg.setDestination(62670U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 2661783766U;
    msg.start_lat = 0.4806047526963282;
    msg.start_lon = 0.7770036221874825;
    msg.start_z = 0.14484771867603552;
    msg.start_z_units = 172U;
    msg.end_lat = 0.3375780878406325;
    msg.end_lon = 0.8980629422730187;
    msg.end_z = 0.5266909496133311;
    msg.end_z_units = 47U;
    msg.speed = 0.3239133302997055;
    msg.speed_units = 54U;
    msg.lradius = 0.5432499447061211;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.3773548078479745);
    msg.setSource(8614U);
    msg.setSourceEntity(107U);
    msg.setDestination(7157U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 997253071U;
    msg.start_lat = 0.259706829551418;
    msg.start_lon = 0.42380159865260303;
    msg.start_z = 0.07027540328823056;
    msg.start_z_units = 42U;
    msg.end_lat = 0.8727174894637703;
    msg.end_lon = 0.20148649628239101;
    msg.end_z = 0.6865809935002718;
    msg.end_z_units = 33U;
    msg.speed = 0.5144336841187904;
    msg.speed_units = 202U;
    msg.lradius = 0.12331924035384556;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.18343215438397498);
    msg.setSource(13738U);
    msg.setSourceEntity(210U);
    msg.setDestination(40639U);
    msg.setDestinationEntity(36U);
    msg.x = 0.9101920500645102;
    msg.y = 0.2171352914884177;
    msg.z = 0.7472333880238374;
    msg.k = 0.6165238460207775;
    msg.m = 0.4164564230185036;
    msg.n = 0.5848451224095986;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.07309547555313467);
    msg.setSource(37292U);
    msg.setSourceEntity(35U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(21U);
    msg.x = 0.5056217879149933;
    msg.y = 0.6477638383150005;
    msg.z = 0.9088417579967786;
    msg.k = 0.7508839710563532;
    msg.m = 0.7084263492125334;
    msg.n = 0.23090298703903311;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.873957417504428);
    msg.setSource(25511U);
    msg.setSourceEntity(132U);
    msg.setDestination(37669U);
    msg.setDestinationEntity(165U);
    msg.x = 0.579795324507748;
    msg.y = 0.9599677006831789;
    msg.z = 0.3063492128190336;
    msg.k = 0.34136994960823075;
    msg.m = 0.4138779541657117;
    msg.n = 0.30833289398427943;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.7364545054268148);
    msg.setSource(25500U);
    msg.setSourceEntity(229U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6323149794107883;

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
    msg.setTimeStamp(0.07935267736988094);
    msg.setSource(15471U);
    msg.setSourceEntity(125U);
    msg.setDestination(31533U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9322936600048071;

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
    msg.setTimeStamp(0.42063715213518604);
    msg.setSource(9064U);
    msg.setSourceEntity(190U);
    msg.setDestination(15917U);
    msg.setDestinationEntity(89U);
    msg.value = 0.057419313168173836;

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
    msg.setTimeStamp(0.9546067610600721);
    msg.setSource(47488U);
    msg.setSourceEntity(128U);
    msg.setDestination(16447U);
    msg.setDestinationEntity(91U);
    msg.u = 0.737850006262085;
    msg.v = 0.9577613400573752;
    msg.w = 0.2571806268965926;
    msg.p = 0.44916789302095683;
    msg.q = 0.8117153916032491;
    msg.r = 0.10035852741455598;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.6966220783624113);
    msg.setSource(61032U);
    msg.setSourceEntity(4U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(127U);
    msg.u = 0.21955380421757342;
    msg.v = 0.9396187390568578;
    msg.w = 0.11573139369610419;
    msg.p = 0.4178256215687839;
    msg.q = 0.710015165513201;
    msg.r = 0.5697521649038482;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.765240483982364);
    msg.setSource(32850U);
    msg.setSourceEntity(172U);
    msg.setDestination(46365U);
    msg.setDestinationEntity(170U);
    msg.u = 0.5386217403779295;
    msg.v = 0.8151812500004861;
    msg.w = 0.027443233921086163;
    msg.p = 0.5391393823482699;
    msg.q = 0.2379192733243196;
    msg.r = 0.9371112877646341;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.49084117877632905);
    msg.setSource(25097U);
    msg.setSourceEntity(42U);
    msg.setDestination(26950U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 1350578949U;
    msg.start_lat = 0.8819399970944067;
    msg.start_lon = 0.47894221385492475;
    msg.start_z = 0.3554303537024802;
    msg.start_z_units = 219U;
    msg.end_lat = 0.11941667553076418;
    msg.end_lon = 0.4302648181499136;
    msg.end_z = 0.5147344352220192;
    msg.end_z_units = 69U;
    msg.lradius = 0.6673055865157805;
    msg.flags = 106U;
    msg.x = 0.6823420858328263;
    msg.y = 0.42534501410410275;
    msg.z = 0.8165468602471095;
    msg.vx = 0.5247494834178538;
    msg.vy = 0.4635173861490254;
    msg.vz = 0.3388517874534922;
    msg.course_error = 0.7494662732603533;
    msg.eta = 27389U;

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
    msg.setTimeStamp(0.5348540248196535);
    msg.setSource(50446U);
    msg.setSourceEntity(89U);
    msg.setDestination(5693U);
    msg.setDestinationEntity(194U);
    msg.path_ref = 2753672318U;
    msg.start_lat = 0.929636264608688;
    msg.start_lon = 0.7333055953761327;
    msg.start_z = 0.8282816620566078;
    msg.start_z_units = 102U;
    msg.end_lat = 0.40074107882053966;
    msg.end_lon = 0.982908559698962;
    msg.end_z = 0.3665841794403799;
    msg.end_z_units = 204U;
    msg.lradius = 0.6144536399699084;
    msg.flags = 236U;
    msg.x = 0.959184027349225;
    msg.y = 0.30263723641507234;
    msg.z = 0.5879451680278357;
    msg.vx = 0.8856409068389014;
    msg.vy = 0.8291284970495003;
    msg.vz = 0.13447266435700467;
    msg.course_error = 0.06141339829597203;
    msg.eta = 33870U;

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
    msg.setTimeStamp(0.9935303089005181);
    msg.setSource(41641U);
    msg.setSourceEntity(36U);
    msg.setDestination(27087U);
    msg.setDestinationEntity(10U);
    msg.path_ref = 3027630801U;
    msg.start_lat = 0.6949924273635957;
    msg.start_lon = 0.48456286558492623;
    msg.start_z = 0.7718768520634205;
    msg.start_z_units = 35U;
    msg.end_lat = 0.02704434566649494;
    msg.end_lon = 0.38749080453309614;
    msg.end_z = 0.9870743068261456;
    msg.end_z_units = 219U;
    msg.lradius = 0.19512935002884635;
    msg.flags = 111U;
    msg.x = 0.0982140969287636;
    msg.y = 0.1863583948200933;
    msg.z = 0.7041931956434785;
    msg.vx = 0.49020598025246676;
    msg.vy = 0.6572225267220657;
    msg.vz = 0.3691949760474674;
    msg.course_error = 0.4854453213653728;
    msg.eta = 26814U;

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
    msg.setTimeStamp(0.573422458541762);
    msg.setSource(27425U);
    msg.setSourceEntity(109U);
    msg.setDestination(54525U);
    msg.setDestinationEntity(204U);
    msg.k = 0.5928169441238467;
    msg.m = 0.2799630500144723;
    msg.n = 0.25692574013210123;

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
    msg.setTimeStamp(0.6854457419313017);
    msg.setSource(59351U);
    msg.setSourceEntity(4U);
    msg.setDestination(37150U);
    msg.setDestinationEntity(155U);
    msg.k = 0.27607833128734516;
    msg.m = 0.6103715152964418;
    msg.n = 0.7649117640276603;

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
    msg.setTimeStamp(0.4020638459450496);
    msg.setSource(59093U);
    msg.setSourceEntity(221U);
    msg.setDestination(44800U);
    msg.setDestinationEntity(214U);
    msg.k = 0.9598765476608325;
    msg.m = 0.49112765603050945;
    msg.n = 0.5006252627488419;

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
    msg.setTimeStamp(0.9117250083117063);
    msg.setSource(15046U);
    msg.setSourceEntity(139U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(248U);
    msg.p = 0.007498684750123608;
    msg.i = 0.02461942128362249;
    msg.d = 0.28171578569443123;
    msg.a = 0.291557021328661;

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
    msg.setTimeStamp(0.4996941109244193);
    msg.setSource(32978U);
    msg.setSourceEntity(167U);
    msg.setDestination(48839U);
    msg.setDestinationEntity(237U);
    msg.p = 0.8486454206036784;
    msg.i = 0.810736800828277;
    msg.d = 0.6435288782119308;
    msg.a = 0.2644292969008082;

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
    msg.setTimeStamp(0.5446729565691051);
    msg.setSource(52413U);
    msg.setSourceEntity(15U);
    msg.setDestination(20814U);
    msg.setDestinationEntity(229U);
    msg.p = 0.7471089328165578;
    msg.i = 0.6365111914079071;
    msg.d = 0.9866163735652518;
    msg.a = 0.15265446145593253;

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
    msg.setTimeStamp(0.6012239547637195);
    msg.setSource(59401U);
    msg.setSourceEntity(126U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(2U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.8164539439118907);
    msg.setSource(48302U);
    msg.setSourceEntity(160U);
    msg.setDestination(44903U);
    msg.setDestinationEntity(77U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.8585680556825465);
    msg.setSource(32835U);
    msg.setSourceEntity(95U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(98U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.7265948044116046);
    msg.setSource(16773U);
    msg.setSourceEntity(91U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(148U);
    msg.x = 0.2583284932707104;
    msg.y = 0.9271445458700652;
    msg.z = 0.8248989490703419;
    msg.vx = 0.16602472015713454;
    msg.vy = 0.6842239917211658;
    msg.vz = 0.4255686175497272;
    msg.ax = 0.25600332360799005;
    msg.ay = 0.20665887836356067;
    msg.az = 0.15537584310260733;
    msg.flags = 41287U;

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
    msg.setTimeStamp(0.494608474121055);
    msg.setSource(8076U);
    msg.setSourceEntity(170U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(99U);
    msg.x = 0.9525736243895424;
    msg.y = 0.21248925768869242;
    msg.z = 0.3114051778881446;
    msg.vx = 0.19786676928792502;
    msg.vy = 0.5498972302189709;
    msg.vz = 0.8353208367782193;
    msg.ax = 0.5621585561255008;
    msg.ay = 0.4322664305361922;
    msg.az = 0.7207759962854611;
    msg.flags = 2574U;

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
    msg.setTimeStamp(0.8645861035190785);
    msg.setSource(37021U);
    msg.setSourceEntity(61U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(214U);
    msg.x = 0.7985834755962115;
    msg.y = 0.7645141805677563;
    msg.z = 0.9079746320657466;
    msg.vx = 0.7819925586614804;
    msg.vy = 0.6247305506801953;
    msg.vz = 0.8326679538099631;
    msg.ax = 0.12235895727940493;
    msg.ay = 0.5103117715199643;
    msg.az = 0.5674617679532217;
    msg.flags = 21605U;

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
    msg.setTimeStamp(0.7991388237982626);
    msg.setSource(59243U);
    msg.setSourceEntity(182U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5126952648453892;

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
    msg.setTimeStamp(0.4913066894025814);
    msg.setSource(6236U);
    msg.setSourceEntity(199U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7574149233999131;

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
    msg.setTimeStamp(0.7996063169294348);
    msg.setSource(30835U);
    msg.setSourceEntity(248U);
    msg.setDestination(31939U);
    msg.setDestinationEntity(48U);
    msg.value = 0.8457826654933626;

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
    msg.setTimeStamp(0.13807968176307783);
    msg.setSource(57478U);
    msg.setSourceEntity(17U);
    msg.setDestination(31252U);
    msg.setDestinationEntity(76U);
    msg.timeout = 1550U;
    msg.lat = 0.9369806903336801;
    msg.lon = 0.2334129985979997;
    msg.z = 0.7036866061714183;
    msg.z_units = 202U;
    msg.speed = 0.5176616837505783;
    msg.speed_units = 92U;
    msg.roll = 0.6964303277255391;
    msg.pitch = 0.1090717673066619;
    msg.yaw = 0.4430670067991971;
    msg.custom.assign("DDHUESHJNEQDPQLGKQQAIGLJQDUGTQFXZUSSVKCGQVPHKCIOUCHFYZATJDBPRLIQLRCZXBLBAAMNJIIYAKRSPHYQBMWRHOHAPRYCABFZRMZXOVNWYJTSSWMEBOFOPMFIWJHYIXSPMKTWOPHPNWMIMFMFDNCFRMTCGTFZVYLUJY");

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
    msg.setTimeStamp(0.40877866410738517);
    msg.setSource(44112U);
    msg.setSourceEntity(100U);
    msg.setDestination(37536U);
    msg.setDestinationEntity(115U);
    msg.timeout = 56790U;
    msg.lat = 0.8357174156547802;
    msg.lon = 0.5751934749255918;
    msg.z = 0.39612134148899036;
    msg.z_units = 69U;
    msg.speed = 0.3103362620744632;
    msg.speed_units = 81U;
    msg.roll = 0.8081727116662768;
    msg.pitch = 0.10403933247599306;
    msg.yaw = 0.5495890625846832;
    msg.custom.assign("PEMHLUVFHQHOFQAZJLFJKXGJZZPDSAGR");

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
    msg.setTimeStamp(0.5434684137043716);
    msg.setSource(55049U);
    msg.setSourceEntity(232U);
    msg.setDestination(56779U);
    msg.setDestinationEntity(252U);
    msg.timeout = 56788U;
    msg.lat = 0.4749040483635717;
    msg.lon = 0.856108960871389;
    msg.z = 0.48653936747894233;
    msg.z_units = 33U;
    msg.speed = 0.4529759783897188;
    msg.speed_units = 119U;
    msg.roll = 0.7648937328313288;
    msg.pitch = 0.8500868323717778;
    msg.yaw = 0.45242784047612916;
    msg.custom.assign("BUQDDGEAEOTJVZBBWTRKCVMVKLLWFJVDOSJCYEUXRYNKIXEAOEPROQTUWUBLABIHMPJVONBACMGOPHYXNQAJKXLOSZTBHVEGDMFNKHCY");

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
    msg.setTimeStamp(0.5569062037801126);
    msg.setSource(58061U);
    msg.setSourceEntity(103U);
    msg.setDestination(59507U);
    msg.setDestinationEntity(106U);
    msg.timeout = 3404U;
    msg.lat = 0.9825455949598259;
    msg.lon = 0.5692730858412915;
    msg.z = 0.16269712091986954;
    msg.z_units = 97U;
    msg.speed = 0.33761253327309093;
    msg.speed_units = 253U;
    msg.duration = 38780U;
    msg.radius = 0.5460169421945287;
    msg.flags = 157U;
    msg.custom.assign("PKGCROLZKVUMIDEVRQJZIAKRNGLXONVRMCTPWLCSOUZKMYMODRJJRBSCFTSEMADGKPYRBHBPVAUDJJFJJLIHEZWMNMHXVWEVSTJFOVYSAMHLYEQQXJYVBAUDWIPXQNAPNRVPOCGXUFZUHIKFWOTFBMXGIYUQZSBHWQXCBROHJNVXYKYEEQIATGZEAYKRPWZXLCCCQTUNTXZQYIGWBFGN");

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
    msg.setTimeStamp(0.6691136524057624);
    msg.setSource(9107U);
    msg.setSourceEntity(15U);
    msg.setDestination(25158U);
    msg.setDestinationEntity(79U);
    msg.timeout = 1260U;
    msg.lat = 0.13197200469874837;
    msg.lon = 0.7858118506089445;
    msg.z = 0.06815086860853081;
    msg.z_units = 52U;
    msg.speed = 0.41211943943299045;
    msg.speed_units = 50U;
    msg.duration = 48311U;
    msg.radius = 0.09770257284741601;
    msg.flags = 110U;
    msg.custom.assign("YOJQZOKNLPETJMBFZHGQQQBADJSFGKDUMZKHYMDLETVEKAHUJCMOFUMTAKSKJVWPKPTIRUYAHZRPVTGS");

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
    msg.setTimeStamp(0.6229981155933808);
    msg.setSource(64530U);
    msg.setSourceEntity(199U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(254U);
    msg.timeout = 61621U;
    msg.lat = 0.3066962655789819;
    msg.lon = 0.17182235612364605;
    msg.z = 0.9506626121346394;
    msg.z_units = 193U;
    msg.speed = 0.3382466848407659;
    msg.speed_units = 56U;
    msg.duration = 56076U;
    msg.radius = 0.14482931401023913;
    msg.flags = 5U;
    msg.custom.assign("HINOXSIMJAKUMBOEGWEOHYWGMOWABOTDJ");

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
    msg.setTimeStamp(0.02256040467869358);
    msg.setSource(14664U);
    msg.setSourceEntity(115U);
    msg.setDestination(14430U);
    msg.setDestinationEntity(90U);
    msg.custom.assign("YAQFVYODPKGSEEVAWRRQERTMNMHHHIDRLFOTZKVGSUUAAVUIIGWLJCTXGNCUSFWAPMSOQWMUDLGFLMBIAIYONQWKBLCUTRJESFPJGDXVECBNTHTZZHUWOCRGYJJBQZYLOQOVMNVEIDKPWZIFNHARGKJYCVHFOTYXOLPNEXJJKZKCDHJXZIIPQDQDXQEMFKSWPINGRCDWBUKVXOMBUDRPZUHSHBJZMVEALN");

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
    msg.setTimeStamp(0.4702337709340797);
    msg.setSource(60158U);
    msg.setSourceEntity(171U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(121U);
    msg.custom.assign("IDFEYETHQCJARQMORRAQJILQOAE");

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
    msg.setTimeStamp(0.5944043665658545);
    msg.setSource(5609U);
    msg.setSourceEntity(156U);
    msg.setDestination(43227U);
    msg.setDestinationEntity(116U);
    msg.custom.assign("KQUNTQWLCREXRJYBNCYISUNEXYGIRMLLZTDOPWRHWILPOVOMC");

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
    msg.setTimeStamp(0.38827899726642734);
    msg.setSource(51728U);
    msg.setSourceEntity(156U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(125U);
    msg.timeout = 18728U;
    msg.lat = 0.9748134241042461;
    msg.lon = 0.4051838346545972;
    msg.z = 0.6776333742682522;
    msg.z_units = 129U;
    msg.duration = 45121U;
    msg.speed = 0.560916032731652;
    msg.speed_units = 52U;
    msg.type = 193U;
    msg.radius = 0.6866952568083513;
    msg.length = 0.3325055230309325;
    msg.bearing = 0.849691437405921;
    msg.direction = 204U;
    msg.custom.assign("YDTGHFYIYIPLLAJSRDBJGJPTDGZGFWGTHELOLQAZYNJAWTECNCBUWEXHCBXBSNTNWLZOLCWMZNWFVDMZIHYBZXQRKTHCZXXUBKMDLNHBRVMBDUTDVVICYEXVRMENLKNUUTEQEPSXJKVIOVPIGGOQGXQHFAMZDMKRFTYKUOFCWKNFJCEZPISUXPMHOG");

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
    msg.setTimeStamp(0.3109787911015599);
    msg.setSource(14604U);
    msg.setSourceEntity(84U);
    msg.setDestination(48921U);
    msg.setDestinationEntity(126U);
    msg.timeout = 51069U;
    msg.lat = 0.23245120598901625;
    msg.lon = 0.5653444425973507;
    msg.z = 0.7641420769667587;
    msg.z_units = 233U;
    msg.duration = 39503U;
    msg.speed = 0.02857139451018531;
    msg.speed_units = 55U;
    msg.type = 22U;
    msg.radius = 0.25495556012176823;
    msg.length = 0.31497432140215986;
    msg.bearing = 0.7192463935478681;
    msg.direction = 112U;
    msg.custom.assign("XLQWXBHOZJNASIHQTWHKNZYFFKSRETCXVAOTYPVBYRYQGLSCGPIZNIQAJXKETSPQHSVETVFCOTRKAPRILEWYPOQGBNBJSCPWKLUCFRTDMNJPRYSMMQRHGDCNGWOVUQLDOBAXHIJEYAGY");

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
    msg.setTimeStamp(0.29462115474867323);
    msg.setSource(26373U);
    msg.setSourceEntity(228U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(211U);
    msg.timeout = 5888U;
    msg.lat = 0.814374430431612;
    msg.lon = 0.7603298805683598;
    msg.z = 0.12929770567227028;
    msg.z_units = 34U;
    msg.duration = 17991U;
    msg.speed = 0.8954327170127337;
    msg.speed_units = 148U;
    msg.type = 60U;
    msg.radius = 0.5984988488709347;
    msg.length = 0.4054306100120275;
    msg.bearing = 0.04589102808967005;
    msg.direction = 157U;
    msg.custom.assign("ENJZTUZMRVYKGJMNLFJJZAWWQOUEONVHEAEANOAKQYGIZFZBZIQBALETEFUKRPASBOTJPHQMXARUHSDUILFJTMTPUMNHPBYNSPYGDSVQVZFSWGWLHKKYDREWXHTTAQABARD");

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
    msg.setTimeStamp(0.7179993369454543);
    msg.setSource(30591U);
    msg.setSourceEntity(184U);
    msg.setDestination(34588U);
    msg.setDestinationEntity(91U);
    msg.duration = 49964U;
    msg.custom.assign("XZDRAULRJYTAUIKJCWLTZHATJBTYKKQBDXDCXWOGHGZMFENIULSVHYERZCWHZOSUYNPMSPIVTENKQGFFFDGGZUJTVKREQERJMNTCWAKSLUTMJQOKSZSULFHKDAZCRILZYEAHNXEGFVQNIETFVNAGQMBXYRZKQLJDWEQIABXOFPBPYPXO");

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
    msg.setTimeStamp(0.3077342629427786);
    msg.setSource(49531U);
    msg.setSourceEntity(211U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(5U);
    msg.duration = 59450U;
    msg.custom.assign("ISNXSHVJWJAZQAWVJDYUWARMPQDQHSKPFVZIHNEFKRWYHHYNBBSDDBFTWEYZFPCGSBWRTCXMUWCISVRHGAODENCLPEBEEEMXNQJFGHULUOBTVLHNVMGJQAUSIXACBQEFTVHPBODQSUYEIFYTNXYLHYTL");

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
    msg.setTimeStamp(0.5498184312011432);
    msg.setSource(14783U);
    msg.setSourceEntity(89U);
    msg.setDestination(4978U);
    msg.setDestinationEntity(183U);
    msg.duration = 16507U;
    msg.custom.assign("XFMABQXLLGZVCYUUIOCNOIXFINZWMEACNTXJUGJBWPDPPPTOAPLJRIDSDQQVANTHJQEOALYTCIXMASYTKHPGFXSRZMEYQKMHKAUNTPRETKSZRIFQIKUZGUYVYIDJEMKUFPZSCDEKBEWSNHYBWRLYANLBXZVDVZOACVCEBSSQD");

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
    msg.setTimeStamp(0.8116578086345623);
    msg.setSource(17924U);
    msg.setSourceEntity(126U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(127U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.107852168499732;
    msg.control.set(tmp_msg_0);
    msg.duration = 56589U;
    msg.custom.assign("WIKGUXPAHEBRPYBZDENAXCYU");

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
    msg.setTimeStamp(0.35952751848764686);
    msg.setSource(63769U);
    msg.setSourceEntity(85U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(170U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3510147784U;
    tmp_msg_0.start_lat = 0.3753225844337036;
    tmp_msg_0.start_lon = 0.8572127499149138;
    tmp_msg_0.start_z = 0.6988257731706076;
    tmp_msg_0.start_z_units = 229U;
    tmp_msg_0.end_lat = 0.6497511372270965;
    tmp_msg_0.end_lon = 0.35590847234961465;
    tmp_msg_0.end_z = 0.5037915256758727;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.speed = 0.4364094570061058;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.lradius = 0.9310358331354254;
    tmp_msg_0.flags = 174U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12087U;
    msg.custom.assign("KMSZWWCWWLJTLZXFURPRCFBYLOXLWTRMOOVDHOS");

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
    msg.setTimeStamp(0.45648013697286494);
    msg.setSource(55223U);
    msg.setSourceEntity(0U);
    msg.setDestination(15619U);
    msg.setDestinationEntity(8U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.44570781919501834;
    tmp_msg_0.z_units = 99U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51934U;
    msg.custom.assign("GPYYWFMOSCNGZJIMMFCIMLBZXIQGMTUACOUIQYDQVWXVWRYVYZVIKMGKFXLEVJZRBYZEPZFRQHPQGSLMDDESFPFTOJKAPLUTZDRQPOJHRFAJJNQDWGHSLAPMKONNEFKBKVSAENEQHOSFHXVYMZOBSDSBUWBCAXBCUGPHXCTPRXWUHZCJOHBLTUHTKDKEOKXLXPTYUAN");

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
    msg.setTimeStamp(0.4273665426778065);
    msg.setSource(62765U);
    msg.setSourceEntity(126U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(58U);
    msg.timeout = 45556U;
    msg.lat = 0.7130811232532989;
    msg.lon = 0.745405003768077;
    msg.z = 0.20169071179095954;
    msg.z_units = 52U;
    msg.speed = 0.8771156467725189;
    msg.speed_units = 149U;
    msg.bearing = 0.811754271107327;
    msg.cross_angle = 0.7417958829649062;
    msg.width = 0.19210928620120926;
    msg.length = 0.08895929329638097;
    msg.hstep = 0.7154917258802124;
    msg.coff = 32U;
    msg.alternation = 38U;
    msg.flags = 148U;
    msg.custom.assign("TYRAOEXRPXFGTSYXQKKLKJKJDELMSOZNQIPWSOULOMRYFZUHAUDZJYEVRWLEVIWVUVMVGBGJHVFEJDGXZEQXCXADNOCCSMSANJTHPBCPELSQQMPSCRZKJEWGFHTOQBVPSZLJLMAJPMDHUVAYAEBBHXCIWCGUCKWNKURCDGNILZYDWARRWKEWTJBCGQPINIXFOKFVYNDFBQTBNKFRQUTXVLINBBHTHONYHIOPZLUHFYYPDMXS");

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
    msg.setTimeStamp(0.4141761669776738);
    msg.setSource(10955U);
    msg.setSourceEntity(171U);
    msg.setDestination(39852U);
    msg.setDestinationEntity(231U);
    msg.timeout = 45591U;
    msg.lat = 0.7331104705340186;
    msg.lon = 0.8446582137342937;
    msg.z = 0.8303292859731374;
    msg.z_units = 175U;
    msg.speed = 0.17544583194070063;
    msg.speed_units = 117U;
    msg.bearing = 0.9654476136336129;
    msg.cross_angle = 0.8840970231750854;
    msg.width = 0.6482119757568138;
    msg.length = 0.8426291551162273;
    msg.hstep = 0.011264474026230431;
    msg.coff = 196U;
    msg.alternation = 122U;
    msg.flags = 245U;
    msg.custom.assign("VEDHGFJHBUFZPMLXFGYJKQBQTJTCFNNTFUNDPZOQESMCVNNDLDWTABC");

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
    msg.setTimeStamp(0.24051884876543916);
    msg.setSource(17154U);
    msg.setSourceEntity(21U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(200U);
    msg.timeout = 36103U;
    msg.lat = 0.06509419692653862;
    msg.lon = 0.44701593066428524;
    msg.z = 0.37919831221802935;
    msg.z_units = 159U;
    msg.speed = 0.32265098790836555;
    msg.speed_units = 248U;
    msg.bearing = 0.47870816844532804;
    msg.cross_angle = 0.6621437453777995;
    msg.width = 0.006713118901574444;
    msg.length = 0.8527946342807393;
    msg.hstep = 0.7805151247970306;
    msg.coff = 202U;
    msg.alternation = 117U;
    msg.flags = 128U;
    msg.custom.assign("RXLIHHPSVTPAEZEKLAXOKLZJZAAMODEYZKFQHFCVMDYRIWEHLBGXCFKBEVUZIIXJMRKUDTZWNNWRQMDFDXLFEAJENJVGSCOHEURURWWNYXCKTPGIBOJSNQHYHJARAPSKZQPBJMACQPKYHPQHWMNYKGIRRTNXYIBTACRVMBFGFNLGJDLCCJLDBQPBPNWLYPOSITXQTOTSZYZUEQHDGJIQVILWSMMZEDSSGTBWUTNWMVCFVVUBSDGXOUOOYVFKU");

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
    msg.setTimeStamp(0.6509880865715707);
    msg.setSource(5226U);
    msg.setSourceEntity(108U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(155U);
    msg.timeout = 17895U;
    msg.lat = 0.5670737505110182;
    msg.lon = 0.98826064547635;
    msg.z = 0.38265400916591497;
    msg.z_units = 91U;
    msg.speed = 0.9786985598917235;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2827033748876766;
    tmp_msg_0.y = 0.7130371837175736;
    tmp_msg_0.z = 0.9331132103752999;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NLLYMHOQTJAPNDGSVIBMVNLELCEUEMIRWTBVKWMEKIJIPAXCZWCPUHBWMILKYYHIHOGOXACAXPTOQVFXTCMKPZCGXUUJMZADQYBVNSYHRTLJYCTAOQUMVNKZNZLLVOVUQRRFKARPATUDNBRFXSF");

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
    msg.setTimeStamp(0.649466637132901);
    msg.setSource(22907U);
    msg.setSourceEntity(203U);
    msg.setDestination(60811U);
    msg.setDestinationEntity(79U);
    msg.timeout = 40337U;
    msg.lat = 0.4192186811788443;
    msg.lon = 0.42025766389223573;
    msg.z = 0.5990020605369233;
    msg.z_units = 163U;
    msg.speed = 0.9553043845580773;
    msg.speed_units = 16U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7742993122610959;
    tmp_msg_0.y = 0.3196966186836022;
    tmp_msg_0.z = 0.8884233161099316;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UIHVXEGEJCNWXRYZEHTZHGKBLILAAMRBECNXGNPDUVPJOJSJQHYGEHDBRSAYMMGJUDDFVTUXONKBAFTF");

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
    msg.setTimeStamp(0.1684694953610868);
    msg.setSource(41532U);
    msg.setSourceEntity(170U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(194U);
    msg.timeout = 37137U;
    msg.lat = 0.3659527502364964;
    msg.lon = 0.3521661914439932;
    msg.z = 0.6969862162220244;
    msg.z_units = 77U;
    msg.speed = 0.8100376742750545;
    msg.speed_units = 45U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8441416224524892;
    tmp_msg_0.y = 0.10309241630625643;
    tmp_msg_0.z = 0.044198897787765534;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FAAEGSVOJFFDHPKHKNYDKUYZZVRBRUIQBRHULRPSAQSQVPOIMZIHIYYKXNSWLISEBSJUWNNWDEMCLITWZACFZJTPYWERXSDPMVXLXCFIBTKSOQUOPBHPVMZSVKCQDXMTOLWZNCKYWKAYZBETTGTFJGMXRHYGRVWUQDCLAGANGUZCXQPJOUTXEGV");

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
    msg.setTimeStamp(0.7616755810220286);
    msg.setSource(62166U);
    msg.setSourceEntity(96U);
    msg.setDestination(18026U);
    msg.setDestinationEntity(51U);
    msg.x = 0.10300723210706697;
    msg.y = 0.7141885209606107;
    msg.z = 0.17046359767431363;

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
    msg.setTimeStamp(0.015217999179053088);
    msg.setSource(63722U);
    msg.setSourceEntity(46U);
    msg.setDestination(4756U);
    msg.setDestinationEntity(1U);
    msg.x = 0.8516515101731515;
    msg.y = 0.47754637491635155;
    msg.z = 0.48677787899225566;

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
    msg.setTimeStamp(0.10621537376095713);
    msg.setSource(49652U);
    msg.setSourceEntity(21U);
    msg.setDestination(14222U);
    msg.setDestinationEntity(23U);
    msg.x = 0.7650829949409207;
    msg.y = 0.10438890470716722;
    msg.z = 0.1109381758425928;

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
    msg.setTimeStamp(0.015969922301065864);
    msg.setSource(5991U);
    msg.setSourceEntity(50U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(80U);
    msg.timeout = 14143U;
    msg.lat = 0.3931529459234713;
    msg.lon = 0.7362706584411408;
    msg.z = 0.9756655888511758;
    msg.z_units = 239U;
    msg.amplitude = 0.12627593403859405;
    msg.pitch = 0.9005011906426298;
    msg.speed = 0.9339264078004814;
    msg.speed_units = 224U;
    msg.custom.assign("JKICXPJMYOULRFTQYYJFEXJTPZUNXMNAPUWQKINQEMMXBGMVDXKSNGDHBVVYXKNEIOAZFGQZCHZDJFZBRRASXQSITBNNWTYH");

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
    msg.setTimeStamp(0.9556719265589679);
    msg.setSource(42362U);
    msg.setSourceEntity(131U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(90U);
    msg.timeout = 42256U;
    msg.lat = 0.910956056694331;
    msg.lon = 0.9325675796936433;
    msg.z = 0.7352576820559403;
    msg.z_units = 206U;
    msg.amplitude = 0.09423229699257973;
    msg.pitch = 0.5216692433567391;
    msg.speed = 0.0721069176584006;
    msg.speed_units = 169U;
    msg.custom.assign("DGCULLPZBQTAKMCRNQXFBEONIYWVHSFYLDOEQPFBYWYPBXRQHTCTADIJVHBXIWXPEMGLMHADEQZKAECZVRRUOFJNOYGTBNXDCGLQOVYSVMPIZCZOTVMHRADUDLKZSKHSKJAYIFULGAAWNYGXFEAQJLITWYIRFSBTHGUSNBENSQWHJXOUUMGBFDCOEAJMKMMRLDEBTXMFFSIWRWHWGVNQZNKRCSGVZVKUPRZOYXCVHOJTPUQPKSJXI");

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
    msg.setTimeStamp(0.3124033576507146);
    msg.setSource(59350U);
    msg.setSourceEntity(143U);
    msg.setDestination(41886U);
    msg.setDestinationEntity(92U);
    msg.timeout = 7071U;
    msg.lat = 0.44074170738341245;
    msg.lon = 0.29654519138252344;
    msg.z = 0.7224976572042126;
    msg.z_units = 33U;
    msg.amplitude = 0.7389445025194803;
    msg.pitch = 0.037052945569611584;
    msg.speed = 0.08126389816889101;
    msg.speed_units = 43U;
    msg.custom.assign("HCDGJDYDHFKYEVWQFUJKQDFWRSIJOIGPHCEL");

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
    msg.setTimeStamp(0.5688175362923009);
    msg.setSource(52044U);
    msg.setSourceEntity(153U);
    msg.setDestination(16760U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.22225552751660727);
    msg.setSource(13791U);
    msg.setSourceEntity(69U);
    msg.setDestination(30029U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.7428989202322328);
    msg.setSource(3527U);
    msg.setSourceEntity(46U);
    msg.setDestination(38620U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.8464547740372805);
    msg.setSource(33074U);
    msg.setSourceEntity(129U);
    msg.setDestination(53853U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.9609795548896709;
    msg.lon = 0.8944295552841776;
    msg.z = 0.4181354785507505;
    msg.z_units = 169U;
    msg.radius = 0.2099230024382689;
    msg.duration = 47760U;
    msg.speed = 0.40874496939207505;
    msg.speed_units = 152U;
    msg.custom.assign("FEVVAROTAIKRURHUELOQINASYFVGJXCMLTQWJMNTEDZOGCORFAPUBOSLJEYXVGMFGKZXIWRTY");

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
    msg.setTimeStamp(0.8693017123297867);
    msg.setSource(12503U);
    msg.setSourceEntity(200U);
    msg.setDestination(39118U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.2395241257640911;
    msg.lon = 0.47674716310655374;
    msg.z = 0.3837623954672795;
    msg.z_units = 217U;
    msg.radius = 0.2741530382065477;
    msg.duration = 8727U;
    msg.speed = 0.15909731726083332;
    msg.speed_units = 19U;
    msg.custom.assign("RTKOIMXCJSVIKEZUUTRICANRQASFEBFFZGLOPWCNPLZWEZHMPYRXECYZDHIJQRVNPKWYUJX");

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
    msg.setTimeStamp(0.19517829436157996);
    msg.setSource(23637U);
    msg.setSourceEntity(70U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.3259176382889962;
    msg.lon = 0.10259035507683478;
    msg.z = 0.5237284689874465;
    msg.z_units = 81U;
    msg.radius = 0.17237227934886823;
    msg.duration = 50889U;
    msg.speed = 0.0312605515254617;
    msg.speed_units = 68U;
    msg.custom.assign("EZRYEBLLDIZIMFTOICNNCFOSHBAGODMSZQTHXIDIJCMYFRQZNQJSZBSZOMRBYNUFREYWDCXCMSVEXPIUDQBJBTTRPCUFVIJHKNHOALPOTAMAWSKTGLGGVISKSOQQYPLOBHAJWHNEAUGUAL");

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
    msg.setTimeStamp(0.32817214263068273);
    msg.setSource(27049U);
    msg.setSourceEntity(228U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(38U);
    msg.timeout = 34090U;
    msg.flags = 174U;
    msg.lat = 0.9277328530681698;
    msg.lon = 0.8677377089063126;
    msg.start_z = 0.5743529610279412;
    msg.start_z_units = 113U;
    msg.end_z = 0.6913990970249928;
    msg.end_z_units = 44U;
    msg.radius = 0.3141203702662091;
    msg.speed = 0.3612390170867892;
    msg.speed_units = 18U;
    msg.custom.assign("YPXMAPYNHITCLZGLHBSVGDUJVCEUKJMGPQZWWBZYCGNEROGGRBTTHDUIEHYQDWFJNXOXWLKQWLHOCHIIRADXBNYMJIFLSNFVNHZROQSFWOMQRWCPZPAVSFKEJQNOVDRGXXBAZPZJETDLFNSKSIEFJLUMUHRSTVYEADBKOYLUJQYLVXMAMZIKVUDCNUSKCWBGCBEDTBDMRPMLYWEKSXPCFXHJ");

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
    msg.setTimeStamp(0.5569499316863481);
    msg.setSource(40284U);
    msg.setSourceEntity(197U);
    msg.setDestination(3861U);
    msg.setDestinationEntity(133U);
    msg.timeout = 12648U;
    msg.flags = 95U;
    msg.lat = 0.03018346470018274;
    msg.lon = 0.8044151286072118;
    msg.start_z = 0.7143372484036199;
    msg.start_z_units = 37U;
    msg.end_z = 0.765934862970745;
    msg.end_z_units = 150U;
    msg.radius = 0.18255680653777107;
    msg.speed = 0.5669827382624156;
    msg.speed_units = 125U;
    msg.custom.assign("QKAXPJIBVZHJHGSDNAIMSGEOAGHFBYQLTJWNTIZBQHADWGCLVRAMRLEPUMHVLZCVKHYKBBEPAPOZTYEQJCUJTMQGWASVLLKXIPOYPZKXWVXBWYDQANKCGIXKOUYRTUOPFDEKBESBVUJZMWCNYVDSWSFNUNOJLITQCCRUCMCWYIRYRHSITPJFYXEIFD");

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
    msg.setTimeStamp(0.2403244632286089);
    msg.setSource(263U);
    msg.setSourceEntity(164U);
    msg.setDestination(45765U);
    msg.setDestinationEntity(91U);
    msg.timeout = 14177U;
    msg.flags = 103U;
    msg.lat = 0.6986500381627561;
    msg.lon = 0.9786774759328052;
    msg.start_z = 0.7479106934909258;
    msg.start_z_units = 129U;
    msg.end_z = 0.7286846081687258;
    msg.end_z_units = 104U;
    msg.radius = 0.05287334607631711;
    msg.speed = 0.8708680917064257;
    msg.speed_units = 227U;
    msg.custom.assign("XCZYLLDSQYSERTUZAGUUVCBHRIEDAERAXVRMARKCYVLBWLVKHCRLPGEFUBNFJLTMVOSUXNPJ");

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
    msg.setTimeStamp(0.18732517226537904);
    msg.setSource(684U);
    msg.setSourceEntity(99U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(230U);
    msg.timeout = 13221U;
    msg.lat = 0.43858573527846456;
    msg.lon = 0.2847810976346369;
    msg.z = 0.30818611769757553;
    msg.z_units = 103U;
    msg.speed = 0.3012878490660873;
    msg.speed_units = 223U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.04229902267599228;
    tmp_msg_0.y = 0.3093439543410529;
    tmp_msg_0.z = 0.6020231282357856;
    tmp_msg_0.t = 0.9022958566386136;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HYCTREVOWEZGGAAGOUZSANEJBKBPVFPQNCXHYEROLTHPVJEYP");

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
    msg.setTimeStamp(0.751484948253894);
    msg.setSource(17593U);
    msg.setSourceEntity(144U);
    msg.setDestination(63027U);
    msg.setDestinationEntity(19U);
    msg.timeout = 51888U;
    msg.lat = 0.9903408073593171;
    msg.lon = 0.8761300479851887;
    msg.z = 0.9142619670199718;
    msg.z_units = 98U;
    msg.speed = 0.30596853502584453;
    msg.speed_units = 154U;
    msg.custom.assign("CYOVGCMLHQEQTAYQSTSHJHBRBHVVCEFILRZBIZXNXKHGINHOVKJLDWGSGYMTNMVDPDPFRUSMXQCZ");

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
    msg.setTimeStamp(0.04883525951086998);
    msg.setSource(40743U);
    msg.setSourceEntity(228U);
    msg.setDestination(43721U);
    msg.setDestinationEntity(36U);
    msg.timeout = 17228U;
    msg.lat = 0.535848970699003;
    msg.lon = 0.8114361693608726;
    msg.z = 0.6284683489985498;
    msg.z_units = 174U;
    msg.speed = 0.6481156477340319;
    msg.speed_units = 216U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9694151174424914;
    tmp_msg_0.y = 0.2993983464422073;
    tmp_msg_0.z = 0.8835454051310493;
    tmp_msg_0.t = 0.16681450868830805;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KBPHQUAPUQOBCSHWYFPNAFMRRAEAKTJKIAZCFQHLVKWPVPKKRLUXJSVSWSSVYRAPBIRVUMIVHHTUGIIH");

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
    msg.setTimeStamp(0.9858217967459986);
    msg.setSource(28318U);
    msg.setSourceEntity(5U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(76U);
    msg.x = 0.498205044499326;
    msg.y = 0.13728401924934786;
    msg.z = 0.6413959998832017;
    msg.t = 0.33421466274599576;

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
    msg.setTimeStamp(0.24677486136835136);
    msg.setSource(53408U);
    msg.setSourceEntity(62U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(150U);
    msg.x = 0.1294445656626242;
    msg.y = 0.7509997249493297;
    msg.z = 0.6371678914534682;
    msg.t = 0.7254938408264878;

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
    msg.setTimeStamp(0.27965387950102705);
    msg.setSource(35221U);
    msg.setSourceEntity(247U);
    msg.setDestination(6533U);
    msg.setDestinationEntity(69U);
    msg.x = 0.2671686102721128;
    msg.y = 0.4560858342891264;
    msg.z = 0.22212828508969873;
    msg.t = 0.7186686326054108;

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
    msg.setTimeStamp(0.5958021169841623);
    msg.setSource(42410U);
    msg.setSourceEntity(45U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(241U);
    msg.timeout = 11901U;
    msg.name.assign("UAMWTHIMOENAWCFRPKIHHZSULTGXYVGVGOZYKCNXRGSGNZUADSZESLFMLSPXUWVPHAIXLWTIJRUKFJGBPMMCIBHEXEBMSOEBWOQKKKIXZPORZFEHNPYNED");
    msg.custom.assign("MXKOZPNEZAIDFBFVPEGESOJURZQQFGENVLJTBTBNSSQVCZWZUZNQNSFAHMZUKCXPBRLREILUVOGMMCDBWPIIOPQDKHYXYLBTEGTIAANLQAUNWWGDVHBIFQUOAATPIHFPHCHYVCJGBJLOWMXOQTWEVZTVTDRYDPLXCKGHDGULKOMTQQHYVAROYYRERDESORFAE");

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
    msg.setTimeStamp(0.25181756526348875);
    msg.setSource(20543U);
    msg.setSourceEntity(33U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(81U);
    msg.timeout = 51994U;
    msg.name.assign("FNZTOIATAFVPRRJSQWXGAVUHHWVQBDEOGAWBHKROPVALIQNDPBQYRXKITPILCSGQWEISSZSSNFMFLGMZBXMUSXDDHZKAFOMBGWXURMJPVYCBUTFVEFXITJUZCOLMNPWHLSSDLYDJVNPYRMKCVEYVCRJHKJPUHZGONXUNYYSZBDKAJKZ");
    msg.custom.assign("COCVQLDGVHIFOESHFKZRLBOOUUJBDWQZNITMAHCEKSPITXXIMOZRWWPPTVXECDKMXFFTRGRJMLKZVEPHTHCZXMEBZZOVGRAFJTMUUJNVATSHZOIHUXQGEDIGGKNLGPAOHDSBFMYJVFLQWBMPDMZTBXJXCKLPMRBNNUO");

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
    msg.setTimeStamp(0.13632234407026755);
    msg.setSource(36623U);
    msg.setSourceEntity(199U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(202U);
    msg.timeout = 13024U;
    msg.name.assign("URKAAOMOGOMEQSXTBZUJGPXVCKFMZNWPTFSDEKBIZWMGWAVQRZGYYPJPQDBLPDXXBOLGSCWZVROUUYEHRISOTHBUXJWVAWHBFSIYHAXTRXGEJKRRMGCHJNKDJDNGLFXIYIUCWMLBQESOTAEIGCDRRJWFLUIKZMOYYGMDSQAPCXCNFKLVZBFIHVNYPWULOJNUNQLZETYJHTPJBSVXLKFMAKHDSKUHHEQFEQCPNIT");
    msg.custom.assign("YHAGUYSFWFXNVIWHOKHZDQXOPHRVGLRGGJKEKWGSJCJQYTHPZNAPIGRMQXLKVOZQNTESOFULQHJTLGSYOVQOYWHXAPJBCPLYCCHCEPXWXINPBHGDEIIMDFUWFIQTISMFAXTERNJNAJWKBRUFSARCAKAYEAVKSOBROVTBXZFTIONBRZVZDCRBFCBENKXT");

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
    msg.setTimeStamp(0.08786201928428605);
    msg.setSource(42969U);
    msg.setSourceEntity(63U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6848378829906492;
    msg.lon = 0.8615608954930207;
    msg.z = 0.11651424099626306;
    msg.z_units = 6U;
    msg.speed = 0.2030250644564312;
    msg.speed_units = 167U;
    msg.start_time = 0.38250164381416474;
    msg.custom.assign("KIIKCVBNWDZYWIOTJNIRXSHUZGDLRAOMVLMBNBEDRIQBPHOMAJSXMEKTBDNFXATTGDLEURBOYUEVTUSEQCOCOZLFYXWAFPMKJWVOKNRZVIKUPPFEWUUKWIJSVWRBVRJ");

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
    msg.setTimeStamp(0.053253207651776435);
    msg.setSource(55921U);
    msg.setSourceEntity(168U);
    msg.setDestination(22082U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.8765880812147167;
    msg.lon = 0.6576937681957689;
    msg.z = 0.04150149536289549;
    msg.z_units = 1U;
    msg.speed = 0.14751208256593318;
    msg.speed_units = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18527U;
    tmp_msg_0.off_x = 0.21431503526027718;
    tmp_msg_0.off_y = 0.05866864660214677;
    tmp_msg_0.off_z = 0.4697387836461552;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.835458734265535;
    msg.custom.assign("DDDCHCYNAJQM");

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
    msg.setTimeStamp(0.8281442330250971);
    msg.setSource(38291U);
    msg.setSourceEntity(63U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.13508294922418052;
    msg.lon = 0.6515334344836984;
    msg.z = 0.7873865994605139;
    msg.z_units = 198U;
    msg.speed = 0.024080835946881818;
    msg.speed_units = 73U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.293365152008353;
    tmp_msg_0.y = 0.9464114766973253;
    tmp_msg_0.z = 0.45428165572247603;
    tmp_msg_0.t = 0.09415507923984379;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 47615U;
    tmp_msg_1.off_x = 0.4994369074746645;
    tmp_msg_1.off_y = 0.232451614433568;
    tmp_msg_1.off_z = 0.4585207938388075;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7559812537867486;
    msg.custom.assign("ATOKNSYBIIVQFHJNNHJADRQMKCEBNCHYRKTBDSJQSREMGWUCMBKGRXDIQUTNFMRUCTBAEXIOJFTLVPATTUQYCZGLJQNQGMFZVHTYESLSDOXBJVFBZSULUOVZAWXEXXGCEXEYPKRZIAUPZRYILCEVGVENBOKUNHOQMPAZEPZKFBKFQHDAXPLWAWMMCSIKVFIZNUCFTGPLGPWPNHXGCDPVK");

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
    msg.setTimeStamp(0.30084082385208644);
    msg.setSource(16408U);
    msg.setSourceEntity(174U);
    msg.setDestination(54905U);
    msg.setDestinationEntity(116U);
    msg.vid = 62943U;
    msg.off_x = 0.7518806627376462;
    msg.off_y = 0.8433506884579581;
    msg.off_z = 0.35670206912707736;

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
    msg.setTimeStamp(0.44050775722428626);
    msg.setSource(61494U);
    msg.setSourceEntity(61U);
    msg.setDestination(36944U);
    msg.setDestinationEntity(195U);
    msg.vid = 30334U;
    msg.off_x = 0.9096211365462071;
    msg.off_y = 0.449412469914651;
    msg.off_z = 0.06617067948622446;

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
    msg.setTimeStamp(0.8969346025304984);
    msg.setSource(57916U);
    msg.setSourceEntity(37U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(237U);
    msg.vid = 20067U;
    msg.off_x = 0.4890446101649415;
    msg.off_y = 0.8193389336477512;
    msg.off_z = 0.943198805821386;

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
    msg.setTimeStamp(0.06354416893428305);
    msg.setSource(50344U);
    msg.setSourceEntity(38U);
    msg.setDestination(56934U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.5694306895806794);
    msg.setSource(11771U);
    msg.setSourceEntity(173U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9211034480107235);
    msg.setSource(50679U);
    msg.setSourceEntity(97U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.18343690375441268);
    msg.setSource(14911U);
    msg.setSourceEntity(159U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(102U);
    msg.mid = 12238U;

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
    msg.setTimeStamp(0.5265399089473237);
    msg.setSource(53578U);
    msg.setSourceEntity(51U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(203U);
    msg.mid = 30103U;

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
    msg.setTimeStamp(0.5347387599084505);
    msg.setSource(52024U);
    msg.setSourceEntity(195U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(92U);
    msg.mid = 41210U;

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
    msg.setTimeStamp(0.6731507781535225);
    msg.setSource(6325U);
    msg.setSourceEntity(246U);
    msg.setDestination(47559U);
    msg.setDestinationEntity(131U);
    msg.state = 77U;
    msg.eta = 30441U;
    msg.info.assign("EDGDGACMYXKJNDCAGRCXLHZJOJBKUI");

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
    msg.setTimeStamp(0.6140642471011004);
    msg.setSource(52178U);
    msg.setSourceEntity(249U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(7U);
    msg.state = 77U;
    msg.eta = 47235U;
    msg.info.assign("GRXCHPLASUITKFOFDVCUGSMKNXEMOHMYFWZVFHCWVYFFXBBOCJPHCJZUSEIRXXNULLYDSWASAEETYMVXKSBZLEXJZGQHUNJPUXYLVEKKTILMTDVVZBPKVGHFQBBDUIDQOMJOCJJLICPQETNLJRRI");

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
    msg.setTimeStamp(0.11534130417473065);
    msg.setSource(26311U);
    msg.setSourceEntity(9U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(140U);
    msg.state = 205U;
    msg.eta = 47632U;
    msg.info.assign("OXFNJURJQRJUWYAXYBYFXLUCDPPVTELQANDUBCYFPSMGHGVMIEIJCZYZOHASIHSLOZLSSQRXCXTRONWNHXTEKOFIERZNMWXDQHWANJGKGHERRIRMFLHWIWQABGETOAFR");

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
    msg.setTimeStamp(0.08764840371974758);
    msg.setSource(16161U);
    msg.setSourceEntity(4U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(153U);
    msg.system = 42613U;
    msg.duration = 4555U;
    msg.speed = 0.6786626351371422;
    msg.speed_units = 36U;
    msg.x = 0.7474596668992661;
    msg.y = 0.39083836603664335;
    msg.z = 0.7722855015121144;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.3136697506316798);
    msg.setSource(21861U);
    msg.setSourceEntity(3U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(159U);
    msg.system = 43162U;
    msg.duration = 26386U;
    msg.speed = 0.6764164793014653;
    msg.speed_units = 62U;
    msg.x = 0.9503896101054611;
    msg.y = 0.7758630778108778;
    msg.z = 0.5077175987200658;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.559051599331064);
    msg.setSource(10208U);
    msg.setSourceEntity(13U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(1U);
    msg.system = 43394U;
    msg.duration = 26852U;
    msg.speed = 0.541204370342144;
    msg.speed_units = 57U;
    msg.x = 0.7079567353650084;
    msg.y = 0.5426618068128303;
    msg.z = 0.4251115116591251;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.6277028119270408);
    msg.setSource(63424U);
    msg.setSourceEntity(202U);
    msg.setDestination(60965U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.5424412418990177;
    msg.lon = 0.6061162540497487;
    msg.speed = 0.7897021067304899;
    msg.speed_units = 127U;
    msg.duration = 29734U;
    msg.sys_a = 43773U;
    msg.sys_b = 34955U;
    msg.move_threshold = 0.98079026124702;

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
    msg.setTimeStamp(0.7569952308754718);
    msg.setSource(53355U);
    msg.setSourceEntity(211U);
    msg.setDestination(54449U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.7434249950780621;
    msg.lon = 0.11497783717934507;
    msg.speed = 0.635378333595899;
    msg.speed_units = 67U;
    msg.duration = 21769U;
    msg.sys_a = 55745U;
    msg.sys_b = 49389U;
    msg.move_threshold = 0.6762094961681657;

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
    msg.setTimeStamp(0.20906275921785522);
    msg.setSource(8742U);
    msg.setSourceEntity(88U);
    msg.setDestination(59456U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.668119402108308;
    msg.lon = 0.3029898140849624;
    msg.speed = 0.6736092260783998;
    msg.speed_units = 127U;
    msg.duration = 13851U;
    msg.sys_a = 2749U;
    msg.sys_b = 31769U;
    msg.move_threshold = 0.5454474097814928;

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
    msg.setTimeStamp(0.010155165314520653);
    msg.setSource(8302U);
    msg.setSourceEntity(75U);
    msg.setDestination(64737U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.2177606682236013;
    msg.lon = 0.10757727761633429;
    msg.z = 0.27509264665920974;
    msg.z_units = 57U;
    msg.speed = 0.5191792595661958;
    msg.speed_units = 201U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8504740297697615;
    tmp_msg_0.lon = 0.5459159509994348;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IQCOXCHSEZWVJXRZAWJUDEMPWNPUTMIDIKCLUCMETHJQNPMGOGAVAXAIOQKYSFELOPDWZLVZFSGWGXKHZNJWCTITMRYHYTFKQBVBSLVSEELAIAVBDRGBCYDRCNUIYXDRBJLPTCVCAINMHKBOHR");

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
    msg.setTimeStamp(0.23065234178428495);
    msg.setSource(2426U);
    msg.setSourceEntity(71U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.48486419541560555;
    msg.lon = 0.7519277985087853;
    msg.z = 0.9814510385139091;
    msg.z_units = 95U;
    msg.speed = 0.06456378699346166;
    msg.speed_units = 137U;
    msg.custom.assign("JRUBBVRSLINRJKEMIEAIFDOZCAACCXKLJYPTJLZYXBLQNXYTHISRKNAQKOOZHJZVFTBYTDAVRKYUWWFYCYBABCUWPMNWNELQUJSGXGNRMVCUQETEBHHSPFDPSWXCTRUFVDIWAMGXDRYEYDUDVOCQSVMW");

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
    msg.setTimeStamp(0.5099566071642044);
    msg.setSource(6786U);
    msg.setSourceEntity(36U);
    msg.setDestination(55297U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.7731386902991058;
    msg.lon = 0.389243026782888;
    msg.z = 0.43191049986032004;
    msg.z_units = 217U;
    msg.speed = 0.9271214902812343;
    msg.speed_units = 111U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9234762324500284;
    tmp_msg_0.lon = 0.8264184353399063;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ACCRTFLXINHEUYWEFOQSSHAYUOAJUHXICJVSKJSZZGTOSBOHXNFEBGLMQMHLDXINGTXEMFZDRWUUZTSGOQV");

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
    msg.setTimeStamp(0.5550223375076909);
    msg.setSource(19539U);
    msg.setSourceEntity(170U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.8941140355912159;
    msg.lon = 0.21926481904371475;

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
    msg.setTimeStamp(0.4005650460241251);
    msg.setSource(18190U);
    msg.setSourceEntity(236U);
    msg.setDestination(2056U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.5566315298341753;
    msg.lon = 0.6546730875582265;

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
    msg.setTimeStamp(0.9443171021845461);
    msg.setSource(38766U);
    msg.setSourceEntity(25U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.6123871248263152;
    msg.lon = 0.6003517704269814;

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
    msg.setTimeStamp(0.8703468373693111);
    msg.setSource(52981U);
    msg.setSourceEntity(183U);
    msg.setDestination(38028U);
    msg.setDestinationEntity(26U);
    msg.timeout = 24006U;
    msg.lat = 0.7483296466450401;
    msg.lon = 0.9788795289534801;
    msg.z = 0.00557262653014079;
    msg.z_units = 173U;
    msg.pitch = 0.924605997245511;
    msg.amplitude = 0.05195255664749876;
    msg.duration = 29118U;
    msg.speed = 0.4898219605157007;
    msg.speed_units = 54U;
    msg.radius = 0.1357758919397185;
    msg.direction = 239U;
    msg.custom.assign("ZXVDQXZGSJGFCCNUFSMLIWPWOCWKSUYKPZLVEDMHMYDZOVOOQXZQAYF");

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
    msg.setTimeStamp(0.09539285429698097);
    msg.setSource(26761U);
    msg.setSourceEntity(198U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(26U);
    msg.timeout = 5626U;
    msg.lat = 0.4718716927674068;
    msg.lon = 0.25080863894770533;
    msg.z = 0.8835013546733381;
    msg.z_units = 155U;
    msg.pitch = 0.3391419630720991;
    msg.amplitude = 0.742381445797552;
    msg.duration = 61014U;
    msg.speed = 0.928219180951567;
    msg.speed_units = 241U;
    msg.radius = 0.49546776165510453;
    msg.direction = 127U;
    msg.custom.assign("NYMEUESAAJEMEAHPUNXCCAVJYYBFPGTRVHQETOZHNROWEZQFXMAFJKFKLKRJPMBWKHIGFUWMRCXKIFBOGWIFLHRXDBRIMSLOEPVDDQILEXCLTSQZZUMFGYBKZMQNSIOQHSKPWNLUHVACSDBLTJTRYCSYMAHCTXNNSUPDTABWGLSOJYGPRYZHKDEJFIZPOWWKIJQKOCDQXBDLRGJVNPVMXRBZGUYYTJZHDCNAUIBP");

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
    msg.setTimeStamp(0.4692093141993877);
    msg.setSource(2264U);
    msg.setSourceEntity(93U);
    msg.setDestination(56227U);
    msg.setDestinationEntity(163U);
    msg.timeout = 963U;
    msg.lat = 0.8159421858728586;
    msg.lon = 0.16173397462461825;
    msg.z = 0.08457248665858041;
    msg.z_units = 141U;
    msg.pitch = 0.9468952850244894;
    msg.amplitude = 0.5440106004524052;
    msg.duration = 37951U;
    msg.speed = 0.8442416186116559;
    msg.speed_units = 161U;
    msg.radius = 0.6173880300345764;
    msg.direction = 142U;
    msg.custom.assign("JOIXULWMLGWXECDZWZBOWOYLTBKZZEVDSKHLCFSCATGWXAELJVBIJRSRMKQCIYFLQIQNBVROTVPFWKKGNKINOAWJMCQMAURVODJBENUJDQZSDGZUADMQZZSIXUP");

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
    msg.setTimeStamp(0.647855180448829);
    msg.setSource(23682U);
    msg.setSourceEntity(155U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(167U);
    msg.formation_name.assign("RKSPVBMWODDCJOSUVQCDWALMGFGIVZSAQABTXNOZEAJHZYEVGKCOTBVREYCRAPEAPWLBOHPXJLXXTPVDEUQKSVWIXOBVQYSNTNNHQIIVSPELNHVXJUIUGGZLGYCTMTMRGYEHFBBQJPFHNDNYLOZFTQRGNQEZTDJMMWWFHJAFFUXHZF");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25568U;
    tmp_msg_0.off_x = 0.5398217259194223;
    tmp_msg_0.off_y = 0.16658127977577553;
    tmp_msg_0.off_z = 0.4459460899116652;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LZVWDXOQLMCQACTOHIWZDMYMULJTLIIQCOBUXZWCTEMZURBXORDVPTPYOGCFEQRDAVEWJCDNHTVBRHVNMPTRTNGVQPYZSDQJBRGQUFRXIHELANOFYLCSNMXYWKHIDERKGVFSSAQZCUWFMUUPSFHFYWRSBXHAKLTSGBKLKG");

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
    msg.setTimeStamp(0.5256237812433572);
    msg.setSource(26658U);
    msg.setSourceEntity(91U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("GXXVNERXJBONCJZDMPHTNRRTELFNJAOGNEDKFPHGGEGQMEFOMIOTSTUXICZGBZWYSMAUQSBLHNBKQSTLGYKIETUVJFXYOXDWYEVVSRWHXASJOQHCCNVJOFPPIDUWHEZFVYFFHQWUMWPDIKQLZALBMONVBPXWIHRTXUTPDJQLVE");
    msg.reference_frame = 185U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32406U;
    tmp_msg_0.off_x = 0.35215963088345204;
    tmp_msg_0.off_y = 0.3075795260363847;
    tmp_msg_0.off_z = 0.3833281536058143;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CNVMVDBGRFGIMKJMPHUIGTQZCGLOAWHTHMWBOKSZUENNBMXJIVAPYXHVUXFDOPCJTPZPUEOQNAWLRNGVFSFCBKRCIUDRXKYEXSRUEVTBVOYHMPAWIPNWJHJCDLDMJRHJCHAUDSYT");

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
    msg.setTimeStamp(0.5637552249634232);
    msg.setSource(15769U);
    msg.setSourceEntity(124U);
    msg.setDestination(46696U);
    msg.setDestinationEntity(183U);
    msg.formation_name.assign("ACDBORFUATYJZROJNQZUMRUFPGNBNCYNRSEXCITBKYLNUETQSGUWWEPVIKPHFEZVPMAOFNWLOQTHWVKZMIWXUADDEZCDIYSBYSOXPMZIWEVTOFKHQRKZMXXTNQGBBHJOWIXYEEVXIHYDGPTJQOQILNVQELIYSLZ");
    msg.reference_frame = 166U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18874U;
    tmp_msg_0.off_x = 0.7226507418783478;
    tmp_msg_0.off_y = 0.5020141592663402;
    tmp_msg_0.off_z = 0.8535797352045773;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UZACYJCZSLJDKMQEKBRGRPTOXSYTNESQMTBVMLLKMCOUNVQNUMEUWMFZIXLGY");

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
    msg.setTimeStamp(0.4315022723071773);
    msg.setSource(41463U);
    msg.setSourceEntity(158U);
    msg.setDestination(47356U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("QPUDTZURGCEXDGZUQIVRBGLGMNSLFHVKAUBUACOSDAEJZTWUERHVKXAMZQFNFKBDWBIUQKBQTMSIQHLUVAFXFHHCWTEMOTJNPYRDAPCIYVHXAJENLBQYMVXFJPJKUTYLNGXTZSERJFVSNYEBJLEOUWYKAHBMQMVKGZSPXDFGNIBHRISRLMOXWEDJYCYGDCCYDPIHXOQNMTVCABWLZ");
    msg.formation_name.assign("EJVONUQOXWEPZYGNTCHSKXGYDUNCGPFXYYSTAWESNFBLADSKZKDOXZSDOZUVQWGGNBJQEOWERYILXMRBEWBMNMDAXTUWLRORIOMLTACUUXRLFQVMHYIHSBFRNFCQNIXIJHHLQBDLVMCAIEVESBMXCGKVPKBSWPZGOTLRWTFIPYOHINAFHUPWJHJ");
    msg.plan_id.assign("PAQSZIYAJPQXHFAEJHGOXLIJLEPLHBXGFBLWVSSNZDMPDWUZQSTKOARHOBZFQIKCFXKNCHOGTZYCWNNYVLQMSLJTPYYESCMKVBRCEDDYJFXDWZCVBMPLSUKDGWPJUTOUTGMUIEFQGFRNRSNTDOXVODYAIUTUTTNRMFWWPSQQIYIHBGKAHCXGXJINBOJJAXIWAKMKRLZWTQKHEIUKLMBVBDRARXE");
    msg.description.assign("SWVOJWOYEAVVHSNKGMZCCCUYRIWPBLGYEXYHLZHSAOTTBBGQYVVAEAECPQZXDFPSDVBMAWXQOGXKQTNQRNLSXMNRLCRTHHMTLGWUIHFIFZ");
    msg.leader_speed = 0.10668080173067718;
    msg.leader_bank_lim = 0.7827074855124034;
    msg.pos_sim_err_lim = 0.6483596464868557;
    msg.pos_sim_err_wrn = 0.7418713637811711;
    msg.pos_sim_err_timeout = 21659U;
    msg.converg_max = 0.17091721733820564;
    msg.converg_timeout = 50280U;
    msg.comms_timeout = 58071U;
    msg.turb_lim = 0.7339630837386899;
    msg.custom.assign("DSOWOWJVSVWQAKUWYQJWBWBZHBOFOVYXIXYRAJDHPSVLVOYDPBUZFDECMZRPZDYFRKYNRHSFTFNQJELVZBXHEKUPNVMTRIPAMTDZXEUAICIHXXNFEOGCEGFYEXTYULTFZELDSYVRXGRZBGIQQMISSQLLSIGJLZIENHHMAPMTJUDETWJWCVFLMQAGCODKVKLBGHBNKPCOUOWCGTCJQGPWAMIJUN");

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
    msg.setTimeStamp(0.2888209529103678);
    msg.setSource(35762U);
    msg.setSourceEntity(185U);
    msg.setDestination(37155U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("IELBGMSZSQBZACVLTZMAVQCSEKYQPROEQFVDUHYOUXMMGIVQTLOZKCXMXXSTFAFBCWVPJQLPSYQYCNWWNRJXEGZOLYTGGRZHROUIIEOUEOFJZNOTMBTFILSGKGWPNCDMTKRRWPIYCYUYXFTACTBSHUNBHDFYFUEKJACZEDUANBUJRPSNLQXERPBMBJOUWVDFMRGFIOL");
    msg.formation_name.assign("GNHWZVQKMBUA");
    msg.plan_id.assign("CVNYQYHXFWDFMRZWUBXVOFCBYHIZVQMZHVYRTXQOGJRAE");
    msg.description.assign("JALPKVZQFLFMODCKBNTDNTVITJKOGPJBUXWVBFRSATEOQSALWSYMPDQGXQJAKWELZIPWYOLGOARRTWLYXSMHGIAMJVWDNEXHVEBFVHSGVSHPQYUBDQAIERZPNBETAUZLIBHFNRXUXIGRCKRFCYKIHCTHUBYPSMATBGTLMIGEMDPXEHJRAXNQFK");
    msg.leader_speed = 0.5672489555660375;
    msg.leader_bank_lim = 0.8164556418923719;
    msg.pos_sim_err_lim = 0.017993784553106407;
    msg.pos_sim_err_wrn = 0.7175811158677735;
    msg.pos_sim_err_timeout = 62U;
    msg.converg_max = 0.5585418368816596;
    msg.converg_timeout = 16175U;
    msg.comms_timeout = 34050U;
    msg.turb_lim = 0.6593108826130929;
    msg.custom.assign("IBZVTARSGIHZVAUXRBVXCLYMFBGTRO");

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
    msg.setTimeStamp(0.08320148378444892);
    msg.setSource(39635U);
    msg.setSourceEntity(74U);
    msg.setDestination(9234U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("PCPUKSLWXDWRLQXZVMYJDBDOMXOKEDFYUNHCTWCHKOMSKUEROIRQVMRCHXJVXXGOPGSVEHJFMKSJZARHFADGPAOZFJZUUWTQUOVRPDCCAIQSBZIXWBFVRVNALLFOIPJHISHQMAQLQTWMRAUCCLESLTGOYDJMIVBYZCEBHBPUTNRITOLUBZTTDQEWFKVNIB");
    msg.formation_name.assign("RVFFGBTRDYVYAQPZEGDXJOCILUMFCLDDIMTJGEGFTFPYLZRKUUKEARQRMRHJTJIBIUWHHAQKHQKTRJTQZCMGTHPWWEKGETAPLOAFSLVHGHIUUPVBJNEOLXVRODFHBSURUWPZBEICXYGBQSILAXFZKIWJRFZXJNCCLVMUXNYYCOKBSBVBSCSCLSOXFKDNPIMZSJLKYMXNWKHZUPDVYWAMBTECSWZQGOXODDSOQA");
    msg.plan_id.assign("CJEFWDKPUBOIWTMIHWQNYAXGWFFISTHIFSPDQIPGGUFBCITNLOWOBNKGPLTLDCVZKHGUYDFAZBYONTXAGUVRKRBVDCLLWFSQTOXMMOAEWKFZXRAGRZBQALDWOEFRSKYXLECVEKPYLQGFKPJHEBALIWMSRVMHNSTHQRZVS");
    msg.description.assign("ESZYQOZZSSYPOWMLWVETXQDBKFYBEBIPUHKSVEPYLLUMAOKVCDGSQMRYFFHCQFTVIDNXSNRJADFHHNCARPZBZRKLQDMFBFKNWJOMZUYTSJAROWHAOXLGXJJBZQRLXYTFWWYXHXVBHJVWGPGTNVMIQCGIURSAJDKLSNEAULKUTRMCIEDEROATCOADTIXPCRTDNLVXWGNVZHUHOQCECPEIHWTJPMABFFUKNZJUUIMKWKQMQVIEIXOCYB");
    msg.leader_speed = 0.7997296761339491;
    msg.leader_bank_lim = 0.5124462108548394;
    msg.pos_sim_err_lim = 0.49550617445207257;
    msg.pos_sim_err_wrn = 0.8723065286485822;
    msg.pos_sim_err_timeout = 28740U;
    msg.converg_max = 0.41737304018661714;
    msg.converg_timeout = 22631U;
    msg.comms_timeout = 4808U;
    msg.turb_lim = 0.12644813990232262;
    msg.custom.assign("XYNMSCKAKLRGAPTZVEBHNSVQEKRKTOINSDAKWHFFZOTSPBZXABUUPLEVJYMMGMCEINCNLLJYBSPRSMIOFZEAYTOUKIDNDTFRZWOLOBUUUCPWDDCWAHGGSHERMBIGXOXQJQPMHVKTNQYMVOYCBLYZOMILARJFBEGEZJIGRLFSHUVCZJEXKNPXCJPGLADTQQFYWFHWBTZJOGDSVCJDQTPPRSHVBXVKNQWHYNFLDZUIJEMX");

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
    msg.setTimeStamp(0.06398046210512187);
    msg.setSource(22089U);
    msg.setSourceEntity(121U);
    msg.setDestination(32500U);
    msg.setDestinationEntity(78U);
    msg.control_src = 51759U;
    msg.control_ent = 224U;
    msg.timeout = 0.7657530622226203;
    msg.loiter_radius = 0.22834094458935117;
    msg.altitude_interval = 0.38769120114865907;

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
    msg.setTimeStamp(0.6278608048611695);
    msg.setSource(17947U);
    msg.setSourceEntity(165U);
    msg.setDestination(51243U);
    msg.setDestinationEntity(199U);
    msg.control_src = 32637U;
    msg.control_ent = 226U;
    msg.timeout = 0.6577452725896282;
    msg.loiter_radius = 0.16972753525511775;
    msg.altitude_interval = 0.8613607493232919;

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
    msg.setTimeStamp(0.8698425809806601);
    msg.setSource(25936U);
    msg.setSourceEntity(246U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(162U);
    msg.control_src = 3063U;
    msg.control_ent = 207U;
    msg.timeout = 0.9317546979331837;
    msg.loiter_radius = 0.1826606002430915;
    msg.altitude_interval = 0.0803286598108035;

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
    msg.setTimeStamp(0.18015325871848642);
    msg.setSource(9686U);
    msg.setSourceEntity(139U);
    msg.setDestination(45982U);
    msg.setDestinationEntity(159U);
    msg.flags = 173U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8434218443817862;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8043219331728312;
    tmp_msg_1.z_units = 28U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.911518559601299;
    msg.lon = 0.7924742323187048;
    msg.radius = 0.3770275478518188;

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
    msg.setTimeStamp(0.2504013779091937);
    msg.setSource(824U);
    msg.setSourceEntity(143U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(126U);
    msg.flags = 175U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.37894644187259396;
    tmp_msg_0.speed_units = 101U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.060110135006552046;
    tmp_msg_1.z_units = 157U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2295145605047887;
    msg.lon = 0.3380341555000812;
    msg.radius = 0.9978926904320293;

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
    msg.setTimeStamp(0.2234109318704689);
    msg.setSource(57737U);
    msg.setSourceEntity(41U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(54U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0450154694293976;
    tmp_msg_0.speed_units = 111U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9548486098924724;
    tmp_msg_1.z_units = 207U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8385492372885176;
    msg.lon = 0.26574724904062963;
    msg.radius = 0.36566574513935024;

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
    msg.setTimeStamp(0.9941656064563547);
    msg.setSource(30640U);
    msg.setSourceEntity(133U);
    msg.setDestination(29119U);
    msg.setDestinationEntity(16U);
    msg.control_src = 21129U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 242U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8573137169075822;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4938652045062517;
    tmp_tmp_msg_0_1.z_units = 73U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5859095646736213;
    tmp_msg_0.lon = 0.32052356904996204;
    tmp_msg_0.radius = 0.4425817234471361;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 231U;

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
    msg.setTimeStamp(0.07546640035929109);
    msg.setSource(9225U);
    msg.setSourceEntity(172U);
    msg.setDestination(1112U);
    msg.setDestinationEntity(153U);
    msg.control_src = 8659U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 41U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.594814939543931;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7625633327188509;
    tmp_tmp_msg_0_1.z_units = 55U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20173541772429004;
    tmp_msg_0.lon = 0.7719309226796517;
    tmp_msg_0.radius = 0.5851013907816637;
    msg.reference.set(tmp_msg_0);
    msg.state = 83U;
    msg.proximity = 194U;

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
    msg.setTimeStamp(0.160486457605164);
    msg.setSource(29326U);
    msg.setSourceEntity(81U);
    msg.setDestination(11917U);
    msg.setDestinationEntity(154U);
    msg.control_src = 11503U;
    msg.control_ent = 97U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.01649443510690851;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.34416930356070663;
    tmp_tmp_msg_0_1.z_units = 15U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6249865097760253;
    tmp_msg_0.lon = 0.8970934711869848;
    tmp_msg_0.radius = 0.9342067757271459;
    msg.reference.set(tmp_msg_0);
    msg.state = 36U;
    msg.proximity = 144U;

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
    msg.setTimeStamp(0.43606842243247057);
    msg.setSource(38344U);
    msg.setSourceEntity(26U);
    msg.setDestination(7607U);
    msg.setDestinationEntity(102U);
    msg.ax_cmd = 0.2262511679474386;
    msg.ay_cmd = 0.11870866540965996;
    msg.az_cmd = 0.49308969553407866;
    msg.ax_des = 0.261260331151423;
    msg.ay_des = 0.9870636425520295;
    msg.az_des = 0.27463504096185776;
    msg.virt_err_x = 0.3078257915104793;
    msg.virt_err_y = 0.40461541208578133;
    msg.virt_err_z = 0.7618364725558471;
    msg.surf_fdbk_x = 0.0002644426593235716;
    msg.surf_fdbk_y = 0.7360554447523872;
    msg.surf_fdbk_z = 0.5160017194848029;
    msg.surf_unkn_x = 0.9511071893321649;
    msg.surf_unkn_y = 0.4585569564861183;
    msg.surf_unkn_z = 0.20762556185938208;
    msg.ss_x = 0.768159178528083;
    msg.ss_y = 0.3042641306096372;
    msg.ss_z = 0.876927248213631;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BEKWRCOOIYLUSVXCPHMEDUROAQOKXFLXUTWQPDKGUOVZLHKMVTVGZZMOXEERXWDGSOPSVQMJYZTPIEBSMSEJZRBNDNXVFRUWKXGPMJTPYPSAGCRNLCYXSLRWJRDDLPJQVYUWHCEQHMAINIWXNAMBTZNIHHSFBATUEIVNDHJUFAQLOCYYYXNUVFEQWARBGYFVOYRTJZGSUFMKBWSDIJIBKLPB");
    tmp_msg_0.dist = 0.41280493430887566;
    tmp_msg_0.err = 0.9488506550901309;
    tmp_msg_0.ctrl_imp = 0.6172522985014737;
    tmp_msg_0.rel_dir_x = 0.9295734213927807;
    tmp_msg_0.rel_dir_y = 0.010112909335364018;
    tmp_msg_0.rel_dir_z = 0.26501759513571177;
    tmp_msg_0.err_x = 0.19051436362140695;
    tmp_msg_0.err_y = 0.2674120403499286;
    tmp_msg_0.err_z = 0.278233785387062;
    tmp_msg_0.rf_err_x = 0.4895956090144;
    tmp_msg_0.rf_err_y = 0.7307520335133203;
    tmp_msg_0.rf_err_z = 0.9043715929352615;
    tmp_msg_0.rf_err_vx = 0.7418196512028319;
    tmp_msg_0.rf_err_vy = 0.6316925128882646;
    tmp_msg_0.rf_err_vz = 0.6518459781761256;
    tmp_msg_0.ss_x = 0.7839202794000409;
    tmp_msg_0.ss_y = 0.5262030810505636;
    tmp_msg_0.ss_z = 0.65562792620048;
    tmp_msg_0.virt_err_x = 0.6644696883356489;
    tmp_msg_0.virt_err_y = 0.5985166513098027;
    tmp_msg_0.virt_err_z = 0.32994551869071853;
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
    msg.setTimeStamp(0.247770056132132);
    msg.setSource(30745U);
    msg.setSourceEntity(197U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(109U);
    msg.ax_cmd = 0.5225355433958432;
    msg.ay_cmd = 0.08747988877374768;
    msg.az_cmd = 0.19521610271997003;
    msg.ax_des = 0.6109829991415231;
    msg.ay_des = 0.43855619694662573;
    msg.az_des = 0.9271144454336847;
    msg.virt_err_x = 0.5536922976209339;
    msg.virt_err_y = 0.3256747675833902;
    msg.virt_err_z = 0.9820302672824404;
    msg.surf_fdbk_x = 0.9945483291378294;
    msg.surf_fdbk_y = 0.689759263475492;
    msg.surf_fdbk_z = 0.42283599355134927;
    msg.surf_unkn_x = 0.6725546238460729;
    msg.surf_unkn_y = 0.03924445907315244;
    msg.surf_unkn_z = 0.6863903338802597;
    msg.ss_x = 0.013066428777176897;
    msg.ss_y = 0.04923413857209169;
    msg.ss_z = 0.6242829896106009;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZNZISYEXFDLIRGZHGDPAARROWWCZNKVBQFSCIHAHQAXKSSQGRJBWVNYXVULSBGAXUJKCVPTALNPBROL");
    tmp_msg_0.dist = 0.6425486609196824;
    tmp_msg_0.err = 0.7288868660627214;
    tmp_msg_0.ctrl_imp = 0.22998112309691765;
    tmp_msg_0.rel_dir_x = 0.205035196498366;
    tmp_msg_0.rel_dir_y = 0.9722553522973271;
    tmp_msg_0.rel_dir_z = 0.027751464377893997;
    tmp_msg_0.err_x = 0.7228595167210876;
    tmp_msg_0.err_y = 0.90913755646679;
    tmp_msg_0.err_z = 0.13980875419785022;
    tmp_msg_0.rf_err_x = 0.768316054339851;
    tmp_msg_0.rf_err_y = 0.2731981666895448;
    tmp_msg_0.rf_err_z = 0.30717020456342436;
    tmp_msg_0.rf_err_vx = 0.7466823222334885;
    tmp_msg_0.rf_err_vy = 0.9749011917691903;
    tmp_msg_0.rf_err_vz = 0.2679445297240022;
    tmp_msg_0.ss_x = 0.23628595520048934;
    tmp_msg_0.ss_y = 0.6318616953748895;
    tmp_msg_0.ss_z = 0.7516019511841967;
    tmp_msg_0.virt_err_x = 0.5827545073091457;
    tmp_msg_0.virt_err_y = 0.013156353784392172;
    tmp_msg_0.virt_err_z = 0.22901837333443098;
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
    msg.setTimeStamp(0.26840649312850673);
    msg.setSource(60042U);
    msg.setSourceEntity(183U);
    msg.setDestination(58963U);
    msg.setDestinationEntity(188U);
    msg.ax_cmd = 0.7801995447714977;
    msg.ay_cmd = 0.4137592717664208;
    msg.az_cmd = 0.1939685539918241;
    msg.ax_des = 0.7307951882273542;
    msg.ay_des = 0.060358032952848584;
    msg.az_des = 0.3324327377354038;
    msg.virt_err_x = 0.722989595909566;
    msg.virt_err_y = 0.31118934295619527;
    msg.virt_err_z = 0.6620097250367988;
    msg.surf_fdbk_x = 0.41301325122715293;
    msg.surf_fdbk_y = 0.003909082871309866;
    msg.surf_fdbk_z = 0.8620356861657029;
    msg.surf_unkn_x = 0.09757153601955959;
    msg.surf_unkn_y = 0.021087967370959526;
    msg.surf_unkn_z = 0.7319345992075601;
    msg.ss_x = 0.0675433992967871;
    msg.ss_y = 0.459736226718779;
    msg.ss_z = 0.6976551845955528;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AFMBHACKFJIXNWKPOSZREJBRXZYTEPILAJAGWFYOQASHKQCDNDVSPMVSNGEHUEGALLCXXTZGJURAQC");
    tmp_msg_0.dist = 0.1079980610607052;
    tmp_msg_0.err = 0.4172982834198049;
    tmp_msg_0.ctrl_imp = 0.5432783828039882;
    tmp_msg_0.rel_dir_x = 0.6051123675512156;
    tmp_msg_0.rel_dir_y = 0.03676864259488788;
    tmp_msg_0.rel_dir_z = 0.41601825229369294;
    tmp_msg_0.err_x = 0.9931189886556723;
    tmp_msg_0.err_y = 0.5114512897055038;
    tmp_msg_0.err_z = 0.6914093369983784;
    tmp_msg_0.rf_err_x = 0.01613579072310578;
    tmp_msg_0.rf_err_y = 0.15006759050644292;
    tmp_msg_0.rf_err_z = 0.8999409140189182;
    tmp_msg_0.rf_err_vx = 0.1110309062835898;
    tmp_msg_0.rf_err_vy = 0.9012912831100874;
    tmp_msg_0.rf_err_vz = 0.9669459662813192;
    tmp_msg_0.ss_x = 0.9257933299740353;
    tmp_msg_0.ss_y = 0.5108453860492821;
    tmp_msg_0.ss_z = 0.48672457529805424;
    tmp_msg_0.virt_err_x = 0.37640290012226074;
    tmp_msg_0.virt_err_y = 0.5000913786865905;
    tmp_msg_0.virt_err_z = 0.9100049436431782;
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
    msg.setTimeStamp(0.47119313800962914);
    msg.setSource(64168U);
    msg.setSourceEntity(41U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(203U);
    msg.s_id.assign("QFCQTQILGEOLXVREIVYXWLMOLWATJNRBAXTCBAWKWGSUOMVZJBMXQTHYYGYYDGWRBFCRRMPSEQZHNFMPZGPPMALGWYRTETPVUJAISOULABGZXPPJWVKSCZJOHSDOWCNDKOC");
    msg.dist = 0.8453964484848159;
    msg.err = 0.7901089211376664;
    msg.ctrl_imp = 0.23680760339090168;
    msg.rel_dir_x = 0.4066388673131772;
    msg.rel_dir_y = 0.25735785453029614;
    msg.rel_dir_z = 0.9193188242445262;
    msg.err_x = 0.0063291405963588065;
    msg.err_y = 0.51174669056495;
    msg.err_z = 0.4847346496455214;
    msg.rf_err_x = 0.8662970334378411;
    msg.rf_err_y = 0.9145978786477468;
    msg.rf_err_z = 0.8727844531245259;
    msg.rf_err_vx = 0.33796151829335974;
    msg.rf_err_vy = 0.19658707116771423;
    msg.rf_err_vz = 0.5525265858046614;
    msg.ss_x = 0.4922481165572843;
    msg.ss_y = 0.2893178434666104;
    msg.ss_z = 0.1979165868916576;
    msg.virt_err_x = 0.9184619569566123;
    msg.virt_err_y = 0.3774074388207319;
    msg.virt_err_z = 0.11299698567700833;

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
    msg.setTimeStamp(0.18320730987260136);
    msg.setSource(24414U);
    msg.setSourceEntity(48U);
    msg.setDestination(31104U);
    msg.setDestinationEntity(208U);
    msg.s_id.assign("NAKUDLWLAFOQUFSIDYFNCYUWACWPNQOKEVFMVSMRHYQJNNVPSZEUXFTSXJPOZJTKQLMJIQDGBOLCCVVGZYNZJPHIPRJEOLDSMAPLFPLOKVJRYUBOJXXKPVJMBSBDRANUETIRVEIKHLYKTQYWEEURUFNWUANWQXDDUWBXWRTACSMCRVTBKOKDQGWYCIHXTGQCPFMEGIHHNGTHATMYHHHMBWXEICYQEBZFAIRGPBLGSBVZTGFXLDIZJMZ");
    msg.dist = 0.47366834563631965;
    msg.err = 0.45924547230428614;
    msg.ctrl_imp = 0.149094318848089;
    msg.rel_dir_x = 0.6797867979483111;
    msg.rel_dir_y = 0.5702616307180011;
    msg.rel_dir_z = 0.5531816535453378;
    msg.err_x = 0.6193632870027316;
    msg.err_y = 0.12378049399447233;
    msg.err_z = 0.5354919480859014;
    msg.rf_err_x = 0.16304572927584982;
    msg.rf_err_y = 0.5869127021795864;
    msg.rf_err_z = 0.26435855900129435;
    msg.rf_err_vx = 0.1090637897987562;
    msg.rf_err_vy = 0.5305415107230221;
    msg.rf_err_vz = 0.90687772269728;
    msg.ss_x = 0.9255100352729135;
    msg.ss_y = 0.30913268095555013;
    msg.ss_z = 0.07488710255567255;
    msg.virt_err_x = 0.9129650325105536;
    msg.virt_err_y = 0.29932549564808286;
    msg.virt_err_z = 0.6255302062041975;

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
    msg.setTimeStamp(0.5974608264697248);
    msg.setSource(50105U);
    msg.setSourceEntity(215U);
    msg.setDestination(4137U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("BEIGMNLOUIPELAUSGIHNHTLGYXDIBMENYCQNNRVSAYGDQGMCVVAPIQLARKWVZJKSQNRYFVONURIKMXKZEUYCRIYTRSEFYUDDLWJDXNYOPBOGSZASDFBWVCMJPUVLROUDHPQJQQWTFAABPTTCPHRAXXDFWMKLFFAJSVYIWBHCGNZUTITSFETSVRMXZDKJYRBQFZZFKGEHJZABLIOHHEC");
    msg.dist = 0.7620323607527285;
    msg.err = 0.23030482433717903;
    msg.ctrl_imp = 0.9002763314518767;
    msg.rel_dir_x = 0.9600496657566506;
    msg.rel_dir_y = 0.30199656725621027;
    msg.rel_dir_z = 0.8680065314806408;
    msg.err_x = 0.48508187460804086;
    msg.err_y = 0.7393122681540635;
    msg.err_z = 0.735357569520497;
    msg.rf_err_x = 0.9499235641596866;
    msg.rf_err_y = 0.9498783067362983;
    msg.rf_err_z = 0.7979975951968901;
    msg.rf_err_vx = 0.20600647595449562;
    msg.rf_err_vy = 0.8763887102274823;
    msg.rf_err_vz = 0.7166605398566477;
    msg.ss_x = 0.07425358879454225;
    msg.ss_y = 0.13020786321800693;
    msg.ss_z = 0.6145880582105148;
    msg.virt_err_x = 8.063333236318915e-05;
    msg.virt_err_y = 0.6933375837503383;
    msg.virt_err_z = 0.2439654389991367;

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
    msg.setTimeStamp(0.42801908690524004);
    msg.setSource(27034U);
    msg.setSourceEntity(152U);
    msg.setDestination(60232U);
    msg.setDestinationEntity(178U);
    msg.timeout = 24640U;
    msg.rpm = 0.5059628101037335;
    msg.direction = 169U;
    msg.custom.assign("UCQKBEVCCRKKVEDLWNVJLRRITFQXDTFNLJPIFFSJABAPOAPRMKIPOGQWLJRWQQCXXOLDKTDKJXIHPEOCWUYNSGWAVGRUGUCCSGVPVZELHHZSGBOMIWRPFIEPMEWZUMUPQMWY");

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
    msg.setTimeStamp(0.3525523061206477);
    msg.setSource(8579U);
    msg.setSourceEntity(180U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(86U);
    msg.timeout = 1511U;
    msg.rpm = 0.36103064751812075;
    msg.direction = 220U;
    msg.custom.assign("LLIABWXSYAVTOCKXJUYJHKCNRFFNBCJOPXIBSGFKDALFQRIHQIEYKWPERDNTFBKKJRFSULXHMEIKDXZZEMXQMGJWWOOGQRNGJESTAPZGFMSDOFZXNVZYUGVIAUWTZPPQVZHCHALBFRLOEEYJGHMRDBKVNIKTHPUZONJQEMWUWICQNZCABPOPPWICDELTLGVVRXACMU");

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
    msg.setTimeStamp(0.40011119101678827);
    msg.setSource(10838U);
    msg.setSourceEntity(207U);
    msg.setDestination(46169U);
    msg.setDestinationEntity(49U);
    msg.timeout = 1095U;
    msg.rpm = 0.49809463306539403;
    msg.direction = 92U;
    msg.custom.assign("QCPSLDHNJUQZDTHKTYLGUTSEUGRYAWWXILNTAOMGNMVFVOCOILMEXFFEUVTCRFPJUEBHISPAJLBDVAKGPSWNZYEPWGHRQKTUNMWCZWILQXIKOFRIZJPTJDMVURPOXVZGMVJFNZNNYRSYYIUDYUGZGSBYQMWUSHGXAJKFISKEXPNKOQVOHAHVBZWMPAKKMCOQCGCDEVXOEKDLBJYCIXCJAMJDQTSXDDRRZS");

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
    msg.setTimeStamp(0.3014107439137649);
    msg.setSource(61506U);
    msg.setSourceEntity(78U);
    msg.setDestination(40424U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("GGDUOTJALPMTJNLFNEFZEEMRSICHIZVVZVUXYFBAXGEYBCSJQRTDGJVAZYIQVAYVJPBWROHTWQCUDKXLGRBLNOZAYVNPTDUSSXBKTDBEUVOMLCJSBHCTENKHKICJIXUAFLWPKKUSFEIYQQLHIBSZHACSXMDKZTKVMNUOWZBFCLQJYIHQQWDSAGPYOPNQIYAFIMLWTKDLXGGDRONJZVUFMXQ");
    msg.type = 216U;
    msg.op = 2U;
    msg.group_name.assign("VINVOKZWYTUCEZMNZJHNIYXBAWLQSGHAAVB");
    msg.plan_id.assign("WWILUUIPXPCOFRDGGWEERUXHVYVZPLEGLPNUBAIJCOAXPIYAKFCFMBSNUGHIFDAZYVSLHIXABOMUOCODJNKGMNEWTPNZZZRYRSWKRGTWVUHIEDBFYBUWZBKAQHOMUXBQNJOMIQSTYRWPBJFJPEKLHVCTTLZGHLGDDBDZQTUFKFETATLRFYYSYACRLJZKAFOVSQGERZXVACMDCOQLMQVNRCDVMWXYMJEQXOQJSKKSBTHEIJWNQXTHXK");
    msg.description.assign("TXHRMJZHUPRHKRPEGUSOTPFWIWSOLEHVZADFLUGNKWLNFPJODDLZJJGGFMELOKUFRINHFIHDKVFDCCZEUSINXIPCAXWAERCYYPLSWBZNZPKWPFZRVVWWZIMDFKGXBXCLQNYUMTXYLCPOQCBXMYGVEAMAAERGTVMSHTBCWIXEO");
    msg.reference_frame = 174U;
    msg.leader_bank_lim = 0.024036745335394127;
    msg.leader_speed_min = 0.6255741360785355;
    msg.leader_speed_max = 0.8697912436870432;
    msg.leader_alt_min = 0.11585518722194632;
    msg.leader_alt_max = 0.1731974382239353;
    msg.pos_sim_err_lim = 0.19738894603067292;
    msg.pos_sim_err_wrn = 0.15096272107663034;
    msg.pos_sim_err_timeout = 50756U;
    msg.converg_max = 0.7256060127989781;
    msg.converg_timeout = 37721U;
    msg.comms_timeout = 16930U;
    msg.turb_lim = 0.6732967134231126;
    msg.custom.assign("CUOXWUBXVTHYRZBDTWQHDQIDJFONKMPGGILFQFMKBTZXFEVPDRKOLZBRCHHXZRNLUHORGMBASYYIPYGBAICPTDZSSNDXDVGRQNCEUXJPIUXVDXCLTMRFQLHOJCWJNURIPDFOOKELBEBFEES");

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
    msg.setTimeStamp(0.2863620044541211);
    msg.setSource(56059U);
    msg.setSourceEntity(64U);
    msg.setDestination(9903U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("QLUYGCLPJIPZRFAOVXXQUKHLLSONBBBLTFONPHWUAVGQSFSTMRBFWARTWXPPFOJYAACXRJWMQLZUKMTEZZPMNVSLQGJWIYWREDVOXKJQBKAXJGDTAPOWEMFQROIDWGSCNKGDVNZXNIEGSLVYFCYCHUAQIBPUETBFJZCHRISDRHGYCIYXTFMHGDWKWZVUSCRQPNNJEMNAYALHCHEJHBOSN");
    msg.type = 72U;
    msg.op = 151U;
    msg.group_name.assign("QFXAKZZJOVIRBTMDNBZEKASURTJVNMRCDEBTSUVCWVIOOMCAZCTFYWCAOUHVDGWPHINGWPZVTUQPAOADKXHISLBDIADBOBUIIFPSGAQMGUAVNEGKGXTNRDTFHCLQWPTHHRHEGPL");
    msg.plan_id.assign("CRBQJQWLWNUTPOUPXRQKRSPYXBKFBMCWAXHBOYJIGSYOUFHLPVJJRVJLMRZCIWZABGYTETVIHVMORKCSKHCMIDDANMVXGKAKEBSRHPNNGZIKGFGLSBBDNFZYQZWDWELUPLNPJWQRLFHYETVKDJPAQUSITNMHTXIGIHAMNVDYOAULUYWVODXSDCPWMXINBADCHETTFFNFAALZQRESMPTDKQJKUITSH");
    msg.description.assign("KAYDCUAKCTDJZGIIBXLLBKJZYOXGHBJSELWDFPQCZIOP");
    msg.reference_frame = 235U;
    msg.leader_bank_lim = 0.8094297534673041;
    msg.leader_speed_min = 0.294566691038203;
    msg.leader_speed_max = 0.16361102327575283;
    msg.leader_alt_min = 0.4663776680351781;
    msg.leader_alt_max = 0.7047140685999476;
    msg.pos_sim_err_lim = 0.7863703547066985;
    msg.pos_sim_err_wrn = 0.6927958561068485;
    msg.pos_sim_err_timeout = 49182U;
    msg.converg_max = 0.6434942492216738;
    msg.converg_timeout = 36791U;
    msg.comms_timeout = 5344U;
    msg.turb_lim = 0.8782036244337723;
    msg.custom.assign("OFBVBHLJXPUTEWDQGNVKYYEGHMXJZKFXHUNMPJVQCIXZWZALPLFHOGCWBAUKDWIYYCUQAXDQMBXACUGOEWSWHUGXPNEHGWNQZHNXTSZCYBYBVZDFBMJRTYIKZGFIMVEIFSUZYKSILLHARUTEPNPOSOYNILCKRKKERGZREJSCLBPAYQIDVDADHWWAWEOJSDVMBROMTXTHPBQVISQOLPUMSFQCVRMLVFGJCTTNZDIKNQRRAJF");

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
    msg.setTimeStamp(0.1858243945164948);
    msg.setSource(39800U);
    msg.setSourceEntity(95U);
    msg.setDestination(47626U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("BLTVIFJTKAYXNOGLPVBVIDMXDIQSDDGSJOTLGBRAYMWIEJMOHWRFXDEHUFEQNVLUQYTHPZACZCJAMY");
    msg.type = 190U;
    msg.op = 139U;
    msg.group_name.assign("ZASEEPIIQLLPQICTWRHJEBRXOUYAICLKOUNHEFVPQQGTVVBOMIPVALRRSNBYSRFBXDADKADXOJGCXDJHQFDZEDWQPNJPAAEOJWQMYUXKQRCAWCLOEITPHGDZ");
    msg.plan_id.assign("SCBTARRAWYEOANIVAJDFLVNZBPGOYHDPHXWKNUUOESVKMJLYUAMERESXJFLJEBEPSILCNIEBNNOZZCSXLTXQUFTGKGVLG");
    msg.description.assign("TGHDOHQEGQSISUGOXPDRXJGJUMHLNIETFMEYKBEYHQIKVRTENHBYLABNFTQZEQRTILXZBARWDXKJYZHPIZUAYBJBCMFNJQJAOWOUMWTNKKGXHPCSTMGXRKEXDCFIPTXCAOWAPGOYMICKLHWWRDSISSVSMCYSSUFPZFKZZAZOVPYURLHVEXXLMKOVWRNYZNNGLURVWILMDQJORVEPWQAGLWFDBJVG");
    msg.reference_frame = 49U;
    msg.leader_bank_lim = 0.1487875223799141;
    msg.leader_speed_min = 0.28173267643282596;
    msg.leader_speed_max = 0.7259663312755249;
    msg.leader_alt_min = 0.12371829065067974;
    msg.leader_alt_max = 0.5036990700981786;
    msg.pos_sim_err_lim = 0.4195785114160183;
    msg.pos_sim_err_wrn = 0.5793828406846615;
    msg.pos_sim_err_timeout = 50994U;
    msg.converg_max = 0.4808352821427605;
    msg.converg_timeout = 61240U;
    msg.comms_timeout = 53137U;
    msg.turb_lim = 0.6212123699103437;
    msg.custom.assign("SITDMNWYEZHHVVPBWPRQHPAQMNSBNRRACTQNYNXCUJKJTOZYVISEHEVGABOELGXJLBUCAQXXXDBDUVGSMFHCQELSWDITYMHFAUVPQNDFSJWGJRIWYMOLQUBKEFKUTSYIWFIMXQGOVVZZZYLFXOMOUWOELKSYLMAFFZKXCTGKHB");

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
    msg.setTimeStamp(0.21777141784991738);
    msg.setSource(49263U);
    msg.setSourceEntity(220U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(199U);
    msg.timeout = 37090U;
    msg.lat = 0.9164828682501512;
    msg.lon = 0.5617841171104468;
    msg.z = 0.2157538435690597;
    msg.z_units = 222U;
    msg.speed = 0.767248590180693;
    msg.speed_units = 204U;
    msg.custom.assign("QOOQXYTLVGEHVOWZSFQKDXQFPNNGRRSEJXWGUSRUYPQYSSQ");

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
    msg.setTimeStamp(0.15775798653649076);
    msg.setSource(13558U);
    msg.setSourceEntity(86U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(140U);
    msg.timeout = 30445U;
    msg.lat = 0.9065302633293696;
    msg.lon = 0.056567625595266624;
    msg.z = 0.42854861402211153;
    msg.z_units = 73U;
    msg.speed = 0.5184651051810057;
    msg.speed_units = 111U;
    msg.custom.assign("LWXRNGRTVAVKVPFQLZJQOTWJBSGUKFNZOLIZJUBIYMOQDOZGVZTIQCSWZPBNEUXZCDFUIFHIVBTKDCUQ");

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
    msg.setTimeStamp(0.6907335613555906);
    msg.setSource(45054U);
    msg.setSourceEntity(203U);
    msg.setDestination(60963U);
    msg.setDestinationEntity(45U);
    msg.timeout = 39078U;
    msg.lat = 0.1597886399479872;
    msg.lon = 0.5659258864381148;
    msg.z = 0.22746798155437542;
    msg.z_units = 154U;
    msg.speed = 0.2905937939630733;
    msg.speed_units = 9U;
    msg.custom.assign("CGIYBSBUZJSBGCPNAGMMAUOOQDYBBITHDUMUJHGXEKXTZIWAEJMABRKWTUTH");

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
    msg.setTimeStamp(0.2622448823652662);
    msg.setSource(20416U);
    msg.setSourceEntity(154U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(95U);
    msg.timeout = 3860U;
    msg.lat = 0.27214335010268353;
    msg.lon = 0.596247712723024;
    msg.z = 0.24446411918386846;
    msg.z_units = 104U;
    msg.speed = 0.4941081290173881;
    msg.speed_units = 39U;
    msg.custom.assign("IOQOSXAQYJDKFGSNCPITFKHCMRUQRMMFVRNGWQFQNJLXNZJUSXSUEHZMWHVZHUABJIMWRSGTQYQTEKVRYVLLFKDMBRGGTVFWNOOBOZWAIJLPKAACSWBHWHHIUYQZXAVESRDBYLMOYCZEKKCCLPAIPYLGYJTKNXPPMEJTUTYPIFMJIEUEKSZBVJPYVLENKDGCWPHUWDTVUHZROOXXIVBDBCOLODDZBMNTSTPIQSNAUHCXAFEF");

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
    msg.setTimeStamp(0.2925842601511466);
    msg.setSource(21831U);
    msg.setSourceEntity(184U);
    msg.setDestination(10556U);
    msg.setDestinationEntity(225U);
    msg.timeout = 2701U;
    msg.lat = 0.7877614212469575;
    msg.lon = 0.6741346526288087;
    msg.z = 0.8480141363292405;
    msg.z_units = 147U;
    msg.speed = 0.028867733309635546;
    msg.speed_units = 183U;
    msg.custom.assign("GLHMJHVZGFKBBCITXZDUEOMEKSIEUEHHKQQVPTLLJYGISFVWJHCUVDPESFQCVWOQYPQJVUQWVKBNANJSDHTBJQXLRGGCZHOKCNDQPAIJMTWZFSRBMVXRTSERLWDSDBTAENYXKXEVZAYOLNRIKIUH");

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
    msg.setTimeStamp(0.11660193342915126);
    msg.setSource(57151U);
    msg.setSourceEntity(56U);
    msg.setDestination(50068U);
    msg.setDestinationEntity(190U);
    msg.timeout = 58920U;
    msg.lat = 0.8631485471867973;
    msg.lon = 0.5058334076225288;
    msg.z = 0.7161147797278081;
    msg.z_units = 199U;
    msg.speed = 0.09377120768977043;
    msg.speed_units = 196U;
    msg.custom.assign("TDQZGJOWOQXELSJZMTYTXULYDFQKRCEXVPKLHWIMGCMGVHXDZPUHUSSBNM");

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
    msg.setTimeStamp(0.8936660431182526);
    msg.setSource(9718U);
    msg.setSourceEntity(209U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.6650501217103412;
    msg.lat = 0.6330681125937394;
    msg.lon = 0.10057518366321572;
    msg.z = 0.4111632880340179;
    msg.z_units = 20U;
    msg.travel_z = 0.15316603948177743;
    msg.travel_z_units = 68U;
    msg.delayed = 87U;

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
    msg.setTimeStamp(0.9100530238175008);
    msg.setSource(31778U);
    msg.setSourceEntity(224U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(212U);
    msg.arrival_time = 0.32403793236709655;
    msg.lat = 0.42508032586395195;
    msg.lon = 0.46655819196501336;
    msg.z = 0.36647886861084955;
    msg.z_units = 141U;
    msg.travel_z = 0.46961076085100095;
    msg.travel_z_units = 88U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.9408816234526961);
    msg.setSource(28122U);
    msg.setSourceEntity(111U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(22U);
    msg.arrival_time = 0.7732550088719071;
    msg.lat = 0.7214019785075747;
    msg.lon = 0.6937004637315348;
    msg.z = 0.5577989907002754;
    msg.z_units = 171U;
    msg.travel_z = 0.22265226461739052;
    msg.travel_z_units = 0U;
    msg.delayed = 106U;

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
    msg.setTimeStamp(0.47610704943154236);
    msg.setSource(53854U);
    msg.setSourceEntity(21U);
    msg.setDestination(4368U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.9146855026734236;
    msg.lon = 0.5727761025752066;
    msg.z = 0.31468665885242153;
    msg.z_units = 229U;
    msg.speed = 0.2711534326618946;
    msg.speed_units = 134U;
    msg.bearing = 0.37595779310456934;
    msg.cross_angle = 0.6205093647472949;
    msg.width = 0.2906190117799493;
    msg.length = 0.6600853472680076;
    msg.coff = 181U;
    msg.angaperture = 0.06589885204014989;
    msg.range = 63695U;
    msg.overlap = 197U;
    msg.flags = 207U;
    msg.custom.assign("AMRUNODAEPJABUWGHFUCLXKPVWKDBPLNYGLKHGKZZKYQUDVLGKBTPTYFRCZUHWHBYKJMITNV");

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
    msg.setTimeStamp(0.15693436223112);
    msg.setSource(11005U);
    msg.setSourceEntity(5U);
    msg.setDestination(5578U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.057651681848807534;
    msg.lon = 0.5018406445357212;
    msg.z = 0.5085741351119333;
    msg.z_units = 112U;
    msg.speed = 0.5965997700004042;
    msg.speed_units = 217U;
    msg.bearing = 0.06345888467003269;
    msg.cross_angle = 0.39992865997782245;
    msg.width = 0.009230207769531207;
    msg.length = 0.7887910568335309;
    msg.coff = 2U;
    msg.angaperture = 0.15339491715630305;
    msg.range = 688U;
    msg.overlap = 110U;
    msg.flags = 178U;
    msg.custom.assign("RLYUPDAEBTERGDQNGNKDHELPXFWAWANF");

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
    msg.setTimeStamp(0.4217931195864114);
    msg.setSource(19356U);
    msg.setSourceEntity(68U);
    msg.setDestination(39724U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.649115954469543;
    msg.lon = 0.6014005535948234;
    msg.z = 0.5894238985553529;
    msg.z_units = 76U;
    msg.speed = 0.9341203446861871;
    msg.speed_units = 200U;
    msg.bearing = 0.02944300472826733;
    msg.cross_angle = 0.017120894146443355;
    msg.width = 0.6950037778037701;
    msg.length = 0.3573964955724972;
    msg.coff = 176U;
    msg.angaperture = 0.9718587638904784;
    msg.range = 48580U;
    msg.overlap = 106U;
    msg.flags = 235U;
    msg.custom.assign("ZJDVPXPKQNPDWFNBSISXHGRMIMTGIICCCFAOUHIRTNOAQNFAZMCFWUMPREJPJXHMGOUEYFHFEVLIFJTWHOVQEKMUMBTZGDXLIESYGXKBLCYNZIXYDVRTHJWGBAZETHAAQOADWDMMLZKBNPTBUPXHLQSCBSMWNCOGTO");

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
    msg.setTimeStamp(0.209091613453244);
    msg.setSource(30005U);
    msg.setSourceEntity(248U);
    msg.setDestination(21513U);
    msg.setDestinationEntity(234U);
    msg.timeout = 39650U;
    msg.lat = 0.23264929439708593;
    msg.lon = 0.26096790405662573;
    msg.z = 0.5106680877053207;
    msg.z_units = 203U;
    msg.speed = 0.11275836819418661;
    msg.speed_units = 173U;
    msg.syringe0 = 175U;
    msg.syringe1 = 208U;
    msg.syringe2 = 127U;
    msg.custom.assign("YFJVZOLKJDBRQHQGYPVIVMTXLVGVPMAQZTNZJCMZRHYXPUMGRSJSOMSRMMQRNQDGBSAQKWRDQGETELWHAXJENACKLLZUKHZPRMNHXSGJIDAVBFNCCFWVVAIDOCWJEOXURFOYMRGMJUFPHSTYFCQDPPPVKXIYLUXIYTRGWKOXEVTUAJKBCDNNELFSELUCWZHHTNFYSKIDHBLOQHESATIJBWINFGAUTZCXOWQGCPEWNOWABBIDEZ");

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
    msg.setTimeStamp(0.7647958748601876);
    msg.setSource(59090U);
    msg.setSourceEntity(246U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(30U);
    msg.timeout = 33268U;
    msg.lat = 0.6623168454999864;
    msg.lon = 0.7186381669682032;
    msg.z = 0.7065198086560153;
    msg.z_units = 236U;
    msg.speed = 0.7007108463996155;
    msg.speed_units = 67U;
    msg.syringe0 = 120U;
    msg.syringe1 = 30U;
    msg.syringe2 = 26U;
    msg.custom.assign("NSDWHVLZFHWSKMJTFYAYTYYQBCZCHSLZQPXGTIXPHHWOPOASBJNEWEMIJGORSRYWSAURAJFRABCHZPYKRQNXCEDHWJUBETBLLYURACIRDCDTGPGVCXTYBAHJKPUEFMCLVNKNZZUSLZMDDTESUJVDKGWUVNLQGEBRSFKOLIFMKLHZXQWNGIGZAOCOKWFFFIMX");

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
    msg.setTimeStamp(0.7416573622327464);
    msg.setSource(37509U);
    msg.setSourceEntity(147U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(14U);
    msg.timeout = 12239U;
    msg.lat = 0.23252874821063985;
    msg.lon = 0.6919594467364146;
    msg.z = 0.494149984333908;
    msg.z_units = 177U;
    msg.speed = 0.49155237790735706;
    msg.speed_units = 9U;
    msg.syringe0 = 1U;
    msg.syringe1 = 101U;
    msg.syringe2 = 234U;
    msg.custom.assign("CPCDORXGHSMHYEYHUHXTYNWTUGDBWTWKV");

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
    msg.setTimeStamp(0.3953746308337246);
    msg.setSource(4915U);
    msg.setSourceEntity(12U);
    msg.setDestination(64417U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.24902741654042693);
    msg.setSource(13489U);
    msg.setSourceEntity(110U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.8627195602372447);
    msg.setSource(36429U);
    msg.setSourceEntity(104U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.37631247484678343);
    msg.setSource(63191U);
    msg.setSourceEntity(24U);
    msg.setDestination(29291U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.6683396266012287;
    msg.lon = 0.9066087825916734;
    msg.z = 0.32408367627135304;
    msg.z_units = 241U;
    msg.speed = 0.3566487254994136;
    msg.speed_units = 181U;
    msg.takeoff_pitch = 0.7981586175599397;
    msg.custom.assign("XLTFGNWKEDDFBQOMDSDHSGZWZKAXZYIGBNGHVAWMNJTACRVTAR");

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
    msg.setTimeStamp(0.3271985048685837);
    msg.setSource(26065U);
    msg.setSourceEntity(230U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.4846883580215362;
    msg.lon = 0.461596365272156;
    msg.z = 0.28267424862980983;
    msg.z_units = 164U;
    msg.speed = 0.5081674184104505;
    msg.speed_units = 250U;
    msg.takeoff_pitch = 0.846379385300975;
    msg.custom.assign("BTMJDDJXDUWYSGNQAMOFIHPLLRHEZGCHSWDWUJIXUIBSGCMWCDBRTLYEAMYGZMXRUWKNDBHVBGFZFGOHOJRYAEQYVKPBEFPUTIKKPCPSXKEPJSFOIZOUWQUZWZASQVLODALUCJIHNSWAXSPGMBPRH");

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
    msg.setTimeStamp(0.9803161884032842);
    msg.setSource(21782U);
    msg.setSourceEntity(202U);
    msg.setDestination(19334U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.7682352453418302;
    msg.lon = 0.7457215847523639;
    msg.z = 0.6491175327736718;
    msg.z_units = 42U;
    msg.speed = 0.3139934023863985;
    msg.speed_units = 156U;
    msg.takeoff_pitch = 0.9003539535914457;
    msg.custom.assign("WQACCPCRWFRJZWREKATTZEHYSWLQHYFACVFISMGAIBSIZZXMZCHUJURFBSABFKDLLSTZNCTNKMLGIMXRNNBPSYCEJETOYBWFCXJXCOLAONTLITKAKWZNMHDSYVLXFOUHYBUGUQAGADYELBOXYXDLUQWEHVFKDKMLMNOVKNBSHWDMDGTPVUODHZQZEMQVOQRJXGIZPJJIITBSUYPCFMHJPGGAYVRQRKUVFKNOIDUBOXERPTSWEPEWPPHVRVG");

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
    msg.setTimeStamp(0.19522392565054303);
    msg.setSource(14633U);
    msg.setSourceEntity(167U);
    msg.setDestination(50996U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.042131275190431694;
    msg.lon = 0.7353984323343433;
    msg.z = 0.23335499117669123;
    msg.z_units = 21U;
    msg.speed = 0.3615718598706462;
    msg.speed_units = 251U;
    msg.abort_z = 0.48371700134937334;
    msg.bearing = 0.25601687238131987;
    msg.glide_slope = 94U;
    msg.glide_slope_alt = 0.08250077750761275;
    msg.custom.assign("CKGNOVXHVDJCABHQWDNDFLPXIESGUMROFGBWLCQFFWJJBZCXOAQMYXYSCFISVYDZBAVYHTTJKOWXAPJDSRHNJEUFEMISLHMGBWIKHVOXAWJT");

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
    msg.setTimeStamp(0.3806525789594005);
    msg.setSource(31421U);
    msg.setSourceEntity(108U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.5961600595602041;
    msg.lon = 0.8839643403821517;
    msg.z = 0.42682053226174677;
    msg.z_units = 139U;
    msg.speed = 0.37765362822392834;
    msg.speed_units = 38U;
    msg.abort_z = 0.344309059906871;
    msg.bearing = 0.7795621639692236;
    msg.glide_slope = 42U;
    msg.glide_slope_alt = 0.4124635687116376;
    msg.custom.assign("OTDPUWSJBJVCYUGJIUFECARFDNXBRZRED");

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
    msg.setTimeStamp(0.03768967440976112);
    msg.setSource(47220U);
    msg.setSourceEntity(85U);
    msg.setDestination(7753U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.7379600064353697;
    msg.lon = 0.07967727956303416;
    msg.z = 0.47126746744734327;
    msg.z_units = 254U;
    msg.speed = 0.6734673036803352;
    msg.speed_units = 175U;
    msg.abort_z = 0.8982373603240603;
    msg.bearing = 0.6292313597382339;
    msg.glide_slope = 182U;
    msg.glide_slope_alt = 0.09503807930390151;
    msg.custom.assign("QJPUDWWCACREOHQSY");

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
    msg.setTimeStamp(0.9737652073157612);
    msg.setSource(53800U);
    msg.setSourceEntity(227U);
    msg.setDestination(1994U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.8404774964768943;
    msg.lon = 0.10453092212576298;
    msg.speed = 0.5495857246938022;
    msg.speed_units = 79U;
    msg.limits = 21U;
    msg.max_depth = 0.18260156665577687;
    msg.min_alt = 0.43006703971803706;
    msg.time_limit = 0.04097794514034003;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5913544790717323;
    tmp_msg_0.lon = 0.6042450924860763;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FEXEKDUCYPSBTUTTQOJQHRHVKUEKAIGJQYQYVJZLDGPXGVWYGDVIWCAISNSOCYZIDFLWFFWTHBRGDWJJHKGMNQNVDEBFUHMIWZBPDSTEWLJOFBPBXIXONQTNUSNHCYMAHRIEXMU");
    msg.custom.assign("YGBHVNBECTHOIDBWPVYLPNKEJDOEIONPJUTOYQJZYEWOADJRQOHAYSSWICTUOAMVNWQMXBIKAJGXGCMAPCGSRXARPVQWFCMKZQNDTXHFOKECWJWUIZEDWLFLNIMLTHZFJTKPUGUVCFIEMVJSJRQXOVNRKQRFHVQIBXPPFKAKMUSDKXXWTFSVZDSXCYSMNGUYUDSGATGACHR");

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
    msg.setTimeStamp(0.5135192669246241);
    msg.setSource(29566U);
    msg.setSourceEntity(92U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.18601285837484893;
    msg.lon = 0.9876675520682282;
    msg.speed = 0.03284902055849703;
    msg.speed_units = 16U;
    msg.limits = 11U;
    msg.max_depth = 0.4032620953347986;
    msg.min_alt = 0.8303542984052644;
    msg.time_limit = 0.06528955852375529;
    msg.controller.assign("LFIXNBRLPHOARNICJQKYSCKMEUOQYXAPEXEZSZTPNTTQNZHSKFUAVZSBGW");
    msg.custom.assign("QGEESNEGPZHXGGQHMDYBGSSJVJPRVVSEKRURJNMCAKZUWIZCZSPUSCBIFXHZMHDTJURAOMVDQILRJLAEFBWBNNXNJAFARTYLWYWOWLSVLIYKKOE");

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
    msg.setTimeStamp(0.010519477942278588);
    msg.setSource(65032U);
    msg.setSourceEntity(142U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.1515035935168102;
    msg.lon = 0.544883724597599;
    msg.speed = 0.5475371626795248;
    msg.speed_units = 6U;
    msg.limits = 141U;
    msg.max_depth = 0.1249860655824595;
    msg.min_alt = 0.07751527433595895;
    msg.time_limit = 0.18798049588236387;
    msg.controller.assign("JPEWVAWAVHVZUHBWVKNADOHTLWJTIEDNDIHPMUWBIINKCVCGUVXCLETOOQJBSMRGHJMKQINDUGCCYROBDSOEZFXLHWDQDYMYKEUBYLUTAAXCWRYLQGATCJVXPQFVRYNZOYBSZAMYRFXTWGNRQNVFNQLWQFCPFIUKUJZZLKXPUIKTSOJDQSBGMMGZXRZHVITNU");
    msg.custom.assign("RMGYNBUHVJIJYEPGGPJRJPBPFBGTATFQQMOPZZBVXYRZQVAWCZNKMEMAFOBQENXYGHYLALDIXSKBWCCJLASSDPBQNVAUTVKUTYMRIOLLZDEHSDEIYMLRNFBNWWSETLEEQDUCOXHIXTQLWZLRRJPMPTCCDUMGUPHW");

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
    msg.setTimeStamp(0.46960770989506473);
    msg.setSource(11782U);
    msg.setSourceEntity(167U);
    msg.setDestination(3683U);
    msg.setDestinationEntity(109U);
    msg.target.assign("SKGLAEMTHWLATMCXOYTRWKXEXIQMJZVJRGUDGGOSYPTLRZVZQCNGJUCRFCGPZXHSHSDFIDDVDZKPOCVMKWKSQLIYBQTPJIVKGAKHSZUINHHYRLBANPWAEQEQBJPJNNYXYCMLQVBWBSHHCEIJWMUXWMODIPFOLSAHCGJUQPJBUDEUYOBLYRGOTFBFIIFYOIBCYRAVWQNDQANWDHSRPLLZKFXUNVZUR");
    msg.max_speed = 0.6562423728456798;
    msg.speed_units = 158U;
    msg.lat = 0.21110568553817066;
    msg.lon = 0.38515693258646344;
    msg.z = 0.43955747977316584;
    msg.z_units = 159U;
    msg.custom.assign("UAUINPUOUQUJEGXKDYIQJKWJWLMWZYWLXAUZHVIXEFBADZJBWGGYFQRQOSDAIRIJNCBEAVKOXEFHHHVZYMBGHSNTVJESSQSFFRAWPGRAFYMVVRMNHNJMSCDLMOKTQXECJGZXLOEXTPZHCBPJUWOSGBIBKUSNHOGHDTNXMAYJRYIISTDXTEGDCYTRZLQPAVSFOLAMNHIK");

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
    msg.setTimeStamp(0.2838013001819869);
    msg.setSource(34824U);
    msg.setSourceEntity(219U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(177U);
    msg.target.assign("NZWSVMMULJTIRIUXIFIKVRNNECWMHNCYKKTUPUPULXIJMEHTCXJNKOVPJFSNOWZCMAELWQPIDMQHOQECDBPKHVBMSRLFSJPGGIDIBAEPUKJCFGXLFQFFWHOBTVFMTEVIYQBZOZXGXZBCXBZWTORRAZBRLULQVYNELAWVBQTBAEDADGYYDDJSYLHGVGGAAMRCQVCRKTFU");
    msg.max_speed = 0.04340236047919177;
    msg.speed_units = 73U;
    msg.lat = 0.8342183664646168;
    msg.lon = 0.47776965426044116;
    msg.z = 0.7979368894175944;
    msg.z_units = 248U;
    msg.custom.assign("GOPLDHPTXOAYPTVPBUVVGNXEPKCDZMEFXJWAQXWURDNASGHALRUVCJH");

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
    msg.setTimeStamp(0.9582855801435723);
    msg.setSource(54652U);
    msg.setSourceEntity(222U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(193U);
    msg.target.assign("YASHQMGPKJOGBBHYATQQCMFJTEXOWZIZCT");
    msg.max_speed = 0.9482114993627658;
    msg.speed_units = 47U;
    msg.lat = 0.872090052310586;
    msg.lon = 0.787505317461803;
    msg.z = 0.728468567722291;
    msg.z_units = 143U;
    msg.custom.assign("FGSBTZNIQPPSHYUIMRWRASOIQJLUXDLYRB");

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
    msg.setTimeStamp(0.4442444502282872);
    msg.setSource(42865U);
    msg.setSourceEntity(62U);
    msg.setDestination(55868U);
    msg.setDestinationEntity(208U);
    msg.timeout = 43882U;
    msg.lat = 0.527387007493388;
    msg.lon = 0.3599300284952419;
    msg.speed = 0.8516870406066956;
    msg.speed_units = 228U;
    msg.custom.assign("AKGQLOOGMMSFDRJOPYDAWLGYMHPTZCVRUTKBBFKBZEKHYYXLUYUXCDVSZBOKZDJXLWHOQXNJNJIETAX");

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
    msg.setTimeStamp(0.9477166957482327);
    msg.setSource(29567U);
    msg.setSourceEntity(1U);
    msg.setDestination(3434U);
    msg.setDestinationEntity(107U);
    msg.timeout = 133U;
    msg.lat = 0.8001663340759841;
    msg.lon = 0.9791637373950902;
    msg.speed = 0.9757252990131956;
    msg.speed_units = 35U;
    msg.custom.assign("TRPIAKEMIVSTBOILFQGJAXBWIENAUHEWFERRLLFGVICCBFJVUMGMFTSYJPOWBPTFDYUQRIDVXLBJYAYMCYARNXGHBEFJQTXZXNQOOLBWRFZJXVWDZXJKOVHCISKVHVAAYNXSZPMLPNULUDZRVLMEHGSSKZDTIKNLPQOICQSJDCBQZFGOXQZNWFKNPJUUMVAWXPIHMOLKKUCNTYYWWHKCPETRSKPWGRCENZD");

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
    msg.setTimeStamp(0.10188081010309391);
    msg.setSource(28297U);
    msg.setSourceEntity(150U);
    msg.setDestination(1592U);
    msg.setDestinationEntity(217U);
    msg.timeout = 14782U;
    msg.lat = 0.014552312814166912;
    msg.lon = 0.01542440091440489;
    msg.speed = 0.24955072159987912;
    msg.speed_units = 230U;
    msg.custom.assign("VZDBZIETWXN");

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
    msg.setTimeStamp(0.4736676930825331);
    msg.setSource(34041U);
    msg.setSourceEntity(225U);
    msg.setDestination(9873U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.6946650882014829;
    msg.lon = 0.11759792284957271;
    msg.z = 0.9418099342397448;
    msg.z_units = 206U;
    msg.radius = 0.07172755844744438;
    msg.duration = 3142U;
    msg.speed = 0.4196104297147133;
    msg.speed_units = 217U;
    msg.popup_period = 26956U;
    msg.popup_duration = 29494U;
    msg.flags = 47U;
    msg.custom.assign("VAUGDPYSQPYCXOTMEPUZVRQAD");

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
    msg.setTimeStamp(0.5697529344854656);
    msg.setSource(31070U);
    msg.setSourceEntity(191U);
    msg.setDestination(43469U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.4239469723955014;
    msg.lon = 0.9814815769869003;
    msg.z = 0.7819278643231347;
    msg.z_units = 85U;
    msg.radius = 0.013394570772321535;
    msg.duration = 19135U;
    msg.speed = 0.34238719784207483;
    msg.speed_units = 131U;
    msg.popup_period = 14376U;
    msg.popup_duration = 50151U;
    msg.flags = 98U;
    msg.custom.assign("THTKTAJKUTZSJMAIPWSIOPHMBQONIKQSNOVMYYYRYWXGSOMXJFAJLMVCNYGYRXPBLRURCPPTRIGQB");

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
    msg.setTimeStamp(0.06852093446079666);
    msg.setSource(59030U);
    msg.setSourceEntity(136U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.1745912166040795;
    msg.lon = 0.8628756004451165;
    msg.z = 0.6567132443121505;
    msg.z_units = 142U;
    msg.radius = 0.43009497647981976;
    msg.duration = 6548U;
    msg.speed = 0.040671192269975176;
    msg.speed_units = 99U;
    msg.popup_period = 28646U;
    msg.popup_duration = 23259U;
    msg.flags = 62U;
    msg.custom.assign("TNEKSIECRUDDZOHLIRCPUVAVNWHJZIYSZFPWEZNBWFRYQZMLOAADMCUVSIIWVKUFTTGJFTPGNNSGEZIKIPOJSXMSOEYZOAIBQWIKZPNRCXWQRMLQEXHLNVOKERAFKGPRKHWXDUOGJSFHPLGXATTTBGJYUUHYWDFJVXPXQGVYDFDBRGHIQUDVWDMFVLZQBMSTYRWRANCKCJBCMLQLHMMBCYJTXYUXCSV");

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
    msg.setTimeStamp(0.03276476154531993);
    msg.setSource(31089U);
    msg.setSourceEntity(120U);
    msg.setDestination(4057U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.33570386292293064);
    msg.setSource(31766U);
    msg.setSourceEntity(215U);
    msg.setDestination(61763U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.46949724464302844);
    msg.setSource(61554U);
    msg.setSourceEntity(213U);
    msg.setDestination(29208U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.9938976664136735);
    msg.setSource(45541U);
    msg.setSourceEntity(235U);
    msg.setDestination(13381U);
    msg.setDestinationEntity(215U);
    msg.timeout = 56315U;
    msg.lat = 0.9140040504442074;
    msg.lon = 0.5203853434430001;
    msg.z = 0.1391011742363173;
    msg.z_units = 245U;
    msg.speed = 0.12982462861331812;
    msg.speed_units = 14U;
    msg.bearing = 0.40158252064738065;
    msg.width = 0.9912540823243009;
    msg.direction = 84U;
    msg.custom.assign("DNZWVDSDLBLKDCXAKXRYGUSRHSMBJNIRAJYWNMZHVOXJCAIBMYLITVTACHLIOTIGOYOSAFDCGKBTFERFNHEMUPUPWONVAKTNFWTAIHCIMPXZNQQQVHBEQDDXSURKGYKFZLWOLLHWWFOGUJWC");

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
    msg.setTimeStamp(0.661110273738761);
    msg.setSource(7581U);
    msg.setSourceEntity(95U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(100U);
    msg.timeout = 7638U;
    msg.lat = 0.17576081485131378;
    msg.lon = 0.16267502674981038;
    msg.z = 0.4710130509946757;
    msg.z_units = 90U;
    msg.speed = 0.1230841970881773;
    msg.speed_units = 19U;
    msg.bearing = 0.1075534440599456;
    msg.width = 0.5003045403650942;
    msg.direction = 226U;
    msg.custom.assign("NQFHSVFLUURMIGWACPWXURGWXXBZAUGCFZTTOWBPSUNEFKIYLFSBRGZEDWQTKRRROHCUPLSZQJMFLNVCODZKIDAHJTTUFGRSYHBNOERZLECIMJXYRVDPIEHRVWPXQJADMWGPYKEGJPBYCULNKLESVCEHW");

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
    msg.setTimeStamp(0.5587054736263862);
    msg.setSource(35143U);
    msg.setSourceEntity(140U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(36U);
    msg.timeout = 55712U;
    msg.lat = 0.02889182111240529;
    msg.lon = 0.986065145507972;
    msg.z = 0.10565213320050393;
    msg.z_units = 124U;
    msg.speed = 0.4712456666622926;
    msg.speed_units = 45U;
    msg.bearing = 0.5881944779103959;
    msg.width = 0.07508848406076152;
    msg.direction = 251U;
    msg.custom.assign("LIPZRYYFPFWCEXKMDIKIZTQFTHLROOTIYUCVEADSJTSGAUXMIRHOXINEJQSABUNOYGCBQDNDMRUPUTQFLMWWIBLZDYXBWNRXQJSELOHJGBRMHETFGPVMFQHKPTTFOJLZAXFKNURWJNGRSKJBPVUKNDAXLKCJVRAWVOARXNPGHLXKVDQWJNMCBZLVYCPBQFGASWGDSUZSHHUGPCSJWUQAPEZZGBQEFMHYBY");

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
    msg.setTimeStamp(0.7416498161494033);
    msg.setSource(53498U);
    msg.setSourceEntity(107U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 206U;
    msg.error_count = 189U;
    msg.error_ents.assign("VDJKXZBDBNOWRVSGXZYMRSOFGEHGDQESGXTAXBNLEPJOWLYLTLJACVNFDDJZPLQXNESFXLEXUMEIAWSPGKLWEOAKMRLWHQPRGIKOBCFJYZPJR");
    msg.maneuver_type = 29871U;
    msg.maneuver_stime = 0.7770448801127228;
    msg.maneuver_eta = 62954U;
    msg.control_loops = 3661377525U;
    msg.flags = 33U;
    msg.last_error.assign("WPWZCGPCSJLMRKHFJZIYPAOCUZCTMDXPGYZKTOOIXXEONPQQNBZLMYTLAKSDSEPRBVQMLEFDFAKVIIBTDQEMMKVDHQDCSFKDNUJZPQMLRWTSIDAHURJFSGJNCMUCWLAUESHWUVOGUTCAHJLRUFNPQOAQLWGCSGBHQNOAHZORERJJYTPNZPXITJAT");
    msg.last_error_time = 0.7998463769463562;

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
    msg.setTimeStamp(0.4960793165269862);
    msg.setSource(682U);
    msg.setSourceEntity(56U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(105U);
    msg.op_mode = 221U;
    msg.error_count = 112U;
    msg.error_ents.assign("DEWHDQBYKEDPKKGFSZBZINZIKXOFTXETTRLOWNOVCFMAZLNRHTDKLWBPXWPTEJNKMSAIJMYJYRDSKCMXFGKBLHXRMQVUXHIFRWYJDCGCDTLXQCQSGNGRHHBYWXCATPYZXVTCGMMAHQGNYLJVOVDGONCIDRUAPIPAUITJSMEAYZOLA");
    msg.maneuver_type = 57562U;
    msg.maneuver_stime = 0.45353217317878236;
    msg.maneuver_eta = 26832U;
    msg.control_loops = 1930172991U;
    msg.flags = 189U;
    msg.last_error.assign("KNLHCDIKQAGVNQZWYEFLXEADZBSHTZABWYQDYFIGVSWKIVIZDXNMMPAFTXNFUPHCLJPUIGWIMRHDHQQUMPPORHIUQROMKWCXYRAAZTLDTYKIGFSONQLWROSZFVVEPVNUSJQOTWFELNDDUXGGLIHLSAQSMMOGZM");
    msg.last_error_time = 0.44266715208735885;

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
    msg.setTimeStamp(0.3905057753263196);
    msg.setSource(61460U);
    msg.setSourceEntity(221U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(45U);
    msg.op_mode = 224U;
    msg.error_count = 40U;
    msg.error_ents.assign("XFGONEKTNZLYSYECRTRPQBWEJSBFYIWQIGMVDZJPSINGZRGLJBHVZKHWCUYBITTKXBHXGFTFNMYFQHWNVMAEAJPBFZPDGAZSKQHKGDWYKTLCGUDWXZBXOTURFLUBDYSOSLPQUPJVEDRUIBFXARCMYMPVHTRNSIJKKWODAGXDMVHCCOCSVCFOLHLEVQLYITPUEMOQGRJHLM");
    msg.maneuver_type = 49784U;
    msg.maneuver_stime = 0.9805669837885348;
    msg.maneuver_eta = 13368U;
    msg.control_loops = 2739481878U;
    msg.flags = 227U;
    msg.last_error.assign("TBWGVXDJASHFFURBGKRQALRZYUGPYFUYJNFVUOZLASXATMGSXECGXOGLAUDULVTGQPMHPOMDKACCGFXHHLABOMQZUJEFFTNWDURHHBMQPWCKKNDKZ");
    msg.last_error_time = 0.3267291295698437;

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
    msg.setTimeStamp(0.8337205977733849);
    msg.setSource(58124U);
    msg.setSourceEntity(39U);
    msg.setDestination(22679U);
    msg.setDestinationEntity(154U);
    msg.type = 179U;
    msg.request_id = 31752U;
    msg.command = 29U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.9513869801989813;
    tmp_msg_0.lon = 0.22827956143643036;
    tmp_msg_0.speed = 0.023460673297209134;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.duration = 19777U;
    tmp_msg_0.sys_a = 46190U;
    tmp_msg_0.sys_b = 39705U;
    tmp_msg_0.move_threshold = 0.7510430813567699;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20870U;
    msg.info.assign("NLFIUCUKPSFPZYYBFPWROUOCH");

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
    msg.setTimeStamp(0.6228859049618358);
    msg.setSource(32554U);
    msg.setSourceEntity(203U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(49U);
    msg.type = 181U;
    msg.request_id = 52635U;
    msg.command = 101U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.1487740727932293;
    tmp_msg_0.lon = 0.15398016167323358;
    tmp_msg_0.speed = 0.1237101860957176;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.duration = 9559U;
    tmp_msg_0.sys_a = 4025U;
    tmp_msg_0.sys_b = 3093U;
    tmp_msg_0.move_threshold = 0.0912365478399717;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35492U;
    msg.info.assign("LFXCABIVTBYWBYESLJOURDRYCWOGAFMCTRITILHLKQHXDAJGHPKTBFGQJGNMNMYDUUBZQXUGFFJXOJVVICMNITVEQQASRXXXCABOJKK");

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
    msg.setTimeStamp(0.9931244502429769);
    msg.setSource(28166U);
    msg.setSourceEntity(85U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(82U);
    msg.type = 142U;
    msg.request_id = 37270U;
    msg.command = 200U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 2144U;
    tmp_msg_0.lat = 0.5488836203448876;
    tmp_msg_0.lon = 0.8923224901818582;
    tmp_msg_0.z = 0.5610663421014142;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.3978806734136219;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.syringe0 = 104U;
    tmp_msg_0.syringe1 = 130U;
    tmp_msg_0.syringe2 = 50U;
    tmp_msg_0.custom.assign("HRJHWZFUMTERWLHFNSKNQWLTEDSUOWUKUWXVOPADWVGKGQJYEUONWTQAVMXNXCFSKGIYQEOGQYDEBXZSUEDI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34140U;
    msg.info.assign("YFIRYMLHKQHWAAFWZLXVBFSPCDVMSAPETUAXKWHGCJIZYDVIRABUKVQMZHYOGSUKPXRQQJKFUTREIITLBDYLOXKNQWQBNEUQHILVTQJPBZXWSDBZFNNWVTYVSEENEGVMDOPDOLWPRPMCFOXHTBZCTCACRSANMUHIOZMZKJGYREPDMKKILXTUAEUPGKTBYVQYOJFQRCNDWOGVXGRJWSOSJOJZFUMMZEIJNJSEWATR");

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
    msg.setTimeStamp(0.47747806575449847);
    msg.setSource(53774U);
    msg.setSourceEntity(24U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(178U);
    msg.command = 148U;
    msg.entities.assign("CWKTAALDGGASHRUKMQVKZAODYESQXHFMFLITESICAFUD");

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
    msg.setTimeStamp(0.24764277081105135);
    msg.setSource(58407U);
    msg.setSourceEntity(3U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(189U);
    msg.command = 35U;
    msg.entities.assign("JMQTDIVTFUIHWRAQQWIQCQELBLWLKCWNJYKTZIAIPJJATHSLCXWFNGFNQKCEOHBDMYIHGUGEOZYMWLDSPKAFUZRBEJUFWRXHXLDZXYVRSVYZDGIWSUPURUKCARLGLVULWPTMBXOKCESKYAANMEGNNYDDJMYFDZCFPIXQCHGTOTOCSNHRZDTOZIOUXRPXJJWEBBVRJOZLKNQBGACVSARKVTJTVGVZUPMFMBA");

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
    msg.setTimeStamp(0.31405000123373283);
    msg.setSource(9923U);
    msg.setSourceEntity(115U);
    msg.setDestination(30166U);
    msg.setDestinationEntity(107U);
    msg.command = 242U;
    msg.entities.assign("IKNUYTAGFQXOHBWKIXVXCDZUAZHGKYRFCFMMUKEHOLGMTNBNYFYLCWICGWOQAHPEQAPQPBOEZWSF");

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
    msg.setTimeStamp(0.13983286142782614);
    msg.setSource(28448U);
    msg.setSourceEntity(205U);
    msg.setDestination(43215U);
    msg.setDestinationEntity(190U);
    msg.mcount = 31U;
    msg.mnames.assign("IZTVNTPYEULASZODQSGHRTAAWQLNCGXOPZPTYTMQVUNWKADESELJMCCWBKJCIRXNQHMUGOLNHWFMVJZCHPSTNGVYRQOEIQJXCVBODCQJHILKBIAIUZKVAPABUXLRXOWRBTPDOIJMYYMFXFKYGIQLKBVGJZKMRSPGEVIJJLBORGTXLRFAWDQFFUUEDHLCRSZNMYIDXGRSYNFOXHYCEUZFWDPAWEGYPMDHMUFHDFKZNSO");
    msg.ecount = 47U;
    msg.enames.assign("ITVGKLGISNGKHZSK");
    msg.ccount = 62U;
    msg.cnames.assign("SAXAZLFOLSPBPQGHFBHCILSCNJRFJYECLMACZXMYZNTPSYDRVXXKGUBXWAFBXKRBQMTOUFFXNUUQVOOPSJCJXOIIFGBIGILYBDEJWWCETKQHMDLTDGOGBELSUKFKMSNKEWMGRYAORJTHPKISEYATDCFHZMYFWZQVGVQHKI");
    msg.last_error.assign("UZUYPTFQDAUCBEMUKLAMDQUAJVBWDPSVNRUCPFOXJQICHIVIIRZVWXALLGOXBAPTJPGFKVOPXASQNXXBHDQCBSNBBHEEEIJKTKKYATZCMWSYPIILPEWGYODKNTEYTZL");
    msg.last_error_time = 0.7481710902914586;

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
    msg.setTimeStamp(0.15018017497689318);
    msg.setSource(34735U);
    msg.setSourceEntity(206U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(157U);
    msg.mcount = 201U;
    msg.mnames.assign("KRQXWRQFNNCYHKOKTRZWLGAWORPBGFVRKXSWJUOOWPJFLGWHUGNSMXCMJIIIRQCFYKCQLHDAQVVPMEWECUNCRNJPLXRBBUMUYNBAKCADQTSERACQEYDRAJPUBQAAUIVUTVHMTMYMYGKFXFLTFLKSMGDSVOYESPBYVBLLEOZXCHDYIINZDLPEXVB");
    msg.ecount = 39U;
    msg.enames.assign("TLLVGJTRHQMAXIZNSPSWJDPHHDNDNFFZNLQCMZBIEYSRPYAGZLUNJGKSSQYOITDWVCDLAFACPWBSERXRVDFKMERWJHXWYCAUNBP");
    msg.ccount = 240U;
    msg.cnames.assign("ZVKWMWDMZAPPJNRDKHJTZDDPLZZOGFEDMHXDMQRNCBTPLLPSJGJXTJIKKEWVONEDWJESNGNUDVSTXNWBBVBCYGHKICRVAHKWJKCPRUVLXQLTHEQSBZANLZYIFKLTHFZXJRCIXHJGCOUFRAIMFGYIRDCXIEAVTYBUABUUYTUTIBFSRGYUWYAYYODMQQTWOFSXQUAMLECBAZMHWHCEZUNRWQPK");
    msg.last_error.assign("FCWEXYOXGLGZPTPNMFFRBCGGDRGUYVHSCYRNZKJIVXOWETXTPZYIZFUKLHJ");
    msg.last_error_time = 0.6304020845338818;

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
    msg.setTimeStamp(0.8861207072132559);
    msg.setSource(2000U);
    msg.setSourceEntity(140U);
    msg.setDestination(6829U);
    msg.setDestinationEntity(185U);
    msg.mcount = 117U;
    msg.mnames.assign("EBIBVGXKYOZOUSWSPNBOSXROSTNDEMRWDEMDWVJLFHVLXJTHUQFHBPSTBQH");
    msg.ecount = 92U;
    msg.enames.assign("NTEPRSUKEIYINLUBOVFNGMQVPQJMLKUWPXJCRQMFNOMVVDNLQK");
    msg.ccount = 137U;
    msg.cnames.assign("GHQIZBVZNJMJBLZKGRLSAPCXLDAXSOKRPYYGDEWTTXWKPSTNHEGUHAGLFSIJDQTQGPMQWUDXLKYFHBAWFGMSMEBYUOEGVXMJAWKHCOCDOUOJSCZEIRVVFVTLBHRBLNJHCIUYMCSWCYDWCZKOKNVNODKPKYSQHTCUELXIAMHUEQYNAUTEJKFWDIBCJNROIRPZDXTNBQJVSYPQAFGEVTBAZMXQ");
    msg.last_error.assign("JUFUVNAMKXGYOXF");
    msg.last_error_time = 0.4287504828902138;

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
    msg.setTimeStamp(0.5608659560492387);
    msg.setSource(36963U);
    msg.setSourceEntity(77U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(229U);
    msg.mask = 139U;
    msg.max_depth = 0.6359490710067224;
    msg.min_altitude = 0.09471492560926253;
    msg.max_altitude = 0.6206380971296221;
    msg.min_speed = 0.5118083705242606;
    msg.max_speed = 0.37399722472469965;
    msg.max_vrate = 0.09979701798121487;
    msg.lat = 0.37028799580607363;
    msg.lon = 0.6934512996927152;
    msg.orientation = 0.8303672947644245;
    msg.width = 0.2360349215054639;
    msg.length = 0.9877802359906207;

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
    msg.setTimeStamp(0.02920588426978543);
    msg.setSource(57563U);
    msg.setSourceEntity(210U);
    msg.setDestination(9667U);
    msg.setDestinationEntity(200U);
    msg.mask = 57U;
    msg.max_depth = 0.5935843286248768;
    msg.min_altitude = 0.6753747170453003;
    msg.max_altitude = 0.7092597190866972;
    msg.min_speed = 0.05176131790722871;
    msg.max_speed = 0.8396727939455988;
    msg.max_vrate = 0.546016881565348;
    msg.lat = 0.788466578432485;
    msg.lon = 0.22589585594568573;
    msg.orientation = 0.16348448087899747;
    msg.width = 0.13771902370605482;
    msg.length = 0.9137953958049573;

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
    msg.setTimeStamp(0.5836937598198674);
    msg.setSource(47210U);
    msg.setSourceEntity(153U);
    msg.setDestination(27896U);
    msg.setDestinationEntity(197U);
    msg.mask = 96U;
    msg.max_depth = 0.14610252265723322;
    msg.min_altitude = 0.771011536957644;
    msg.max_altitude = 0.3421371340332805;
    msg.min_speed = 0.24613683892926497;
    msg.max_speed = 0.052381867960004436;
    msg.max_vrate = 0.4160058205276793;
    msg.lat = 0.6428874578477863;
    msg.lon = 0.6076456479248713;
    msg.orientation = 0.7626434748822806;
    msg.width = 0.9203356164371651;
    msg.length = 0.15188670925744152;

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
    msg.setTimeStamp(0.33930807875906355);
    msg.setSource(4185U);
    msg.setSourceEntity(78U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.447773869494406);
    msg.setSource(18144U);
    msg.setSourceEntity(79U);
    msg.setDestination(35931U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.8887356169811075);
    msg.setSource(48012U);
    msg.setSourceEntity(127U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.057029519649713256);
    msg.setSource(41646U);
    msg.setSourceEntity(6U);
    msg.setDestination(60611U);
    msg.setDestinationEntity(126U);
    msg.duration = 38374U;

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
    msg.setTimeStamp(0.6018834161938705);
    msg.setSource(53575U);
    msg.setSourceEntity(214U);
    msg.setDestination(33135U);
    msg.setDestinationEntity(96U);
    msg.duration = 19219U;

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
    msg.setTimeStamp(0.5339025223398673);
    msg.setSource(22320U);
    msg.setSourceEntity(22U);
    msg.setDestination(53966U);
    msg.setDestinationEntity(128U);
    msg.duration = 65075U;

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
    msg.setTimeStamp(0.6703786349171319);
    msg.setSource(41028U);
    msg.setSourceEntity(146U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(122U);
    msg.enable = 39U;
    msg.mask = 2072193845U;
    msg.scope_ref = 2367042856U;

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
    msg.setTimeStamp(0.32572058405902826);
    msg.setSource(29354U);
    msg.setSourceEntity(98U);
    msg.setDestination(54052U);
    msg.setDestinationEntity(96U);
    msg.enable = 126U;
    msg.mask = 1048177599U;
    msg.scope_ref = 3715067079U;

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
    msg.setTimeStamp(0.6954357585786392);
    msg.setSource(46997U);
    msg.setSourceEntity(57U);
    msg.setDestination(13626U);
    msg.setDestinationEntity(68U);
    msg.enable = 189U;
    msg.mask = 2185994824U;
    msg.scope_ref = 1806943786U;

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
    msg.setTimeStamp(0.9443638333548784);
    msg.setSource(53611U);
    msg.setSourceEntity(71U);
    msg.setDestination(38284U);
    msg.setDestinationEntity(153U);
    msg.medium = 28U;

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
    msg.setTimeStamp(0.6153410277842862);
    msg.setSource(55190U);
    msg.setSourceEntity(163U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(82U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.13591927905697876);
    msg.setSource(64088U);
    msg.setSourceEntity(167U);
    msg.setDestination(60985U);
    msg.setDestinationEntity(251U);
    msg.medium = 37U;

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
    msg.setTimeStamp(0.5296977295014222);
    msg.setSource(23051U);
    msg.setSourceEntity(200U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(232U);
    msg.value = 0.499712478415117;
    msg.type = 40U;

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
    msg.setTimeStamp(0.853872236307016);
    msg.setSource(46974U);
    msg.setSourceEntity(113U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3803294029830613;
    msg.type = 76U;

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
    msg.setTimeStamp(0.8087472868283829);
    msg.setSource(1212U);
    msg.setSourceEntity(45U);
    msg.setDestination(52240U);
    msg.setDestinationEntity(31U);
    msg.value = 0.051675300071030605;
    msg.type = 224U;

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
    msg.setTimeStamp(0.010120528015742147);
    msg.setSource(60958U);
    msg.setSourceEntity(8U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(254U);
    msg.possimerr = 0.504616961875907;
    msg.converg = 0.19683686960134994;
    msg.turbulence = 0.49598185425914654;
    msg.possimmon = 187U;
    msg.commmon = 27U;
    msg.convergmon = 162U;

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
    msg.setTimeStamp(0.6604003334141713);
    msg.setSource(3614U);
    msg.setSourceEntity(63U);
    msg.setDestination(5985U);
    msg.setDestinationEntity(151U);
    msg.possimerr = 0.3553677163600907;
    msg.converg = 0.6029364464627482;
    msg.turbulence = 0.31515332804571394;
    msg.possimmon = 108U;
    msg.commmon = 208U;
    msg.convergmon = 207U;

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
    msg.setTimeStamp(0.9128986169010721);
    msg.setSource(62106U);
    msg.setSourceEntity(243U);
    msg.setDestination(40626U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.8811908020518029;
    msg.converg = 0.11904827067995216;
    msg.turbulence = 0.32998235661637987;
    msg.possimmon = 112U;
    msg.commmon = 227U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.841927526258246);
    msg.setSource(1929U);
    msg.setSourceEntity(21U);
    msg.setDestination(62681U);
    msg.setDestinationEntity(171U);
    msg.autonomy = 50U;
    msg.mode.assign("SFIKHVLZEAJDQNXXDBEPPAHOQCBBNYUJXEJJQAWJUFWGRFEDQCHAAEYQLQDJCOHKLMSXGVPMUFZLYEKMSFC");

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
    msg.setTimeStamp(0.07704150090453166);
    msg.setSource(38271U);
    msg.setSourceEntity(124U);
    msg.setDestination(7090U);
    msg.setDestinationEntity(149U);
    msg.autonomy = 172U;
    msg.mode.assign("GRXHHVHXICETJLRRIYXTCDHFGIBXQAKVZERHWVNXLVKYPIKJUHTUBOSEUZGESVPSWBQAJUSHQUWKEOGZSWKBRKYYOSQPSFGCXKVNGDACFPEMXQPLTKGZDMGJTKBZFAQAJHTNFAMZYMMUTZVBFAVFILNBQJECXNAREQRKMMRV");

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
    msg.setTimeStamp(0.6950833050340595);
    msg.setSource(39410U);
    msg.setSourceEntity(56U);
    msg.setDestination(41158U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 140U;
    msg.mode.assign("ELOHXDHPFQUYNPEZDRCNNBPLZPIPUKJWSGCAUECKMACXTIGMSLFJEWWRKXDNYAOONBKYVUMIOBZFHQQVQFNREVWTFQCPZPKVEOAUDJKGHEVAZRRBNMFFUSSGMAPJIIQLWNLERLYSJTBSZGGZKIHYVMNSCDOCXJXSGBKQZDOHGOYJTQOPUYYZVFXFWGBCLPVQQBYLRERKVIUXFUHWEAXICRATTABVX");

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
    msg.setTimeStamp(0.2700798771172316);
    msg.setSource(54018U);
    msg.setSourceEntity(72U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(63U);
    msg.type = 122U;
    msg.op = 54U;
    msg.possimerr = 0.9780619477380541;
    msg.converg = 0.8183311515855421;
    msg.turbulence = 0.15112193691064724;
    msg.possimmon = 251U;
    msg.commmon = 161U;
    msg.convergmon = 200U;

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
    msg.setTimeStamp(0.03243179202387769);
    msg.setSource(24078U);
    msg.setSourceEntity(226U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(22U);
    msg.type = 202U;
    msg.op = 83U;
    msg.possimerr = 0.9735861387269286;
    msg.converg = 0.26177072697583625;
    msg.turbulence = 0.3663536930922584;
    msg.possimmon = 176U;
    msg.commmon = 6U;
    msg.convergmon = 224U;

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
    msg.setTimeStamp(0.7773111112709655);
    msg.setSource(55047U);
    msg.setSourceEntity(46U);
    msg.setDestination(31544U);
    msg.setDestinationEntity(4U);
    msg.type = 157U;
    msg.op = 63U;
    msg.possimerr = 0.9197572230299661;
    msg.converg = 0.5481055117030417;
    msg.turbulence = 0.6171177331548423;
    msg.possimmon = 248U;
    msg.commmon = 237U;
    msg.convergmon = 174U;

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
    msg.setTimeStamp(0.2397721804092069);
    msg.setSource(15249U);
    msg.setSourceEntity(163U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(125U);
    msg.op = 181U;
    msg.comm_interface = 138U;
    msg.period = 20092U;
    msg.sys_dst.assign("LJFVMMQYDHYDYUQOKSBJVFXTDGGBTMZXC");

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
    msg.setTimeStamp(0.9758593762265052);
    msg.setSource(21899U);
    msg.setSourceEntity(61U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(200U);
    msg.op = 69U;
    msg.comm_interface = 190U;
    msg.period = 64763U;
    msg.sys_dst.assign("KSIMRAQZUTSWGRLMNFDFPZJOKILTFCGCEAFQUWUTIDHQGKUZCAMKNZTPOSMTCWEYMDTSGVFEXBOGZRQRFRZDWNUUXIEAYGCNCARPDAFBHJBJASVOKYYSJIFYFOVMTIHWHBLERNCNDEIODIMKJQJ");

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
    msg.setTimeStamp(0.9647048637279327);
    msg.setSource(53393U);
    msg.setSourceEntity(6U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(10U);
    msg.op = 195U;
    msg.comm_interface = 58U;
    msg.period = 62292U;
    msg.sys_dst.assign("RDQIKOMQBAMMAKLEVFVRKTMUQVPOXFWSWTMFHLCBAZTHDFAJXWIHLCBVYOWDCUVWMERQEYZSFICXAUJRTLQRZHRTLAGHCLDQHGQDULDVXOVQSFXCJAPOJETTYCURTZRBNPOYJXKNZUHLJBKQVSLOYBRNNXFDWNPXEWIDIGNUHKNUUSVHFQSEZYJPBWWGEOJPSRFBCNEEPYSAZKKGGKPGZTBGNAOUIOPYG");

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
    msg.setTimeStamp(0.9485228495028706);
    msg.setSource(58684U);
    msg.setSourceEntity(142U);
    msg.setDestination(39131U);
    msg.setDestinationEntity(201U);
    msg.stime = 2834604744U;
    msg.latitude = 0.5982611414021697;
    msg.longitude = 0.5453798366130924;
    msg.altitude = 52698U;
    msg.depth = 60533U;
    msg.heading = 60998U;
    msg.speed = -13993;
    msg.fuel = 28;
    msg.exec_state = 74;
    msg.plan_checksum = 6806U;

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
    msg.setTimeStamp(0.8475924104784369);
    msg.setSource(59904U);
    msg.setSourceEntity(16U);
    msg.setDestination(47389U);
    msg.setDestinationEntity(80U);
    msg.stime = 770488869U;
    msg.latitude = 0.9723441258937469;
    msg.longitude = 0.37121764460974316;
    msg.altitude = 3390U;
    msg.depth = 38212U;
    msg.heading = 25056U;
    msg.speed = -22155;
    msg.fuel = 5;
    msg.exec_state = -69;
    msg.plan_checksum = 54985U;

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
    msg.setTimeStamp(0.6101027057172062);
    msg.setSource(40U);
    msg.setSourceEntity(137U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(129U);
    msg.stime = 35203801U;
    msg.latitude = 0.871776599149504;
    msg.longitude = 0.68790211712718;
    msg.altitude = 33638U;
    msg.depth = 64556U;
    msg.heading = 43283U;
    msg.speed = -25806;
    msg.fuel = 113;
    msg.exec_state = 3;
    msg.plan_checksum = 45482U;

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
    msg.setTimeStamp(0.25390799185202884);
    msg.setSource(55218U);
    msg.setSourceEntity(69U);
    msg.setDestination(19844U);
    msg.setDestinationEntity(206U);
    msg.req_id = 18724U;
    msg.comm_mean = 252U;
    msg.destination.assign("EBHCOVZIAUYPXCENPQZWSXQOXMYDZOAZRATFVTKALNTKJSOXILTRSGOWJYVBUMPFTUJUUSZUHPQDYGKWYWOZRIEITNVFKQZHYTDQYPCTVDVWKOMWLZCFJLKAXHDBIMDEOQNWWHWBOKPNOGXFHLAGRFPMIVHDJBFMVDCCNGFAEVLXMKXULPUUBSIESJNSSRHPTNRCGBQGLRQDREJ");
    msg.deadline = 0.47944805445961725;
    msg.range = 0.10380766682991815;
    msg.data_mode = 131U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 78U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("ZOKDDBHDWQTCCWNNGELGWJISDYZYHAMVTVVZAXQXRXPJUETJBLIOQASKRLECRSJISVAUMXKBNGSFARNQGOWVMJYSFXLYJTEDQXOBIWHFAZQYIATLSWBMOTPXQQDGZJQPEPMRJNHZFJBCSKOELVGIXUTUYDWIFZHWJOMLEYRSFCBKUUYMYKPVNFNCGXSTCEZKHPFROH");
    tmp_tmp_msg_0_0.description.assign("JCRGVGFKFIERRKCJBANYMQYDOPIEGKSMBPOGIUYWKFABTLXFTDLQUPLONGXGICS");
    tmp_tmp_msg_0_0.vnamespace.assign("NFJMHQBZJDRDFGMTHPXFGNTNCMLBWALSZTOXPUYCMIMKEBNROFSNUKKSXLHIZANFJEGJGCVZETTCLURPVWYKIIAOXGDBKMRKWBQUCALRAADVIJEVOPWZPWUGUFU");
    tmp_tmp_msg_0_0.start_man_id.assign("CKYZNNGWKSMGNJWBRSEGBXERSHWAFQLXOCAPRGIMCZKEDKIUOAYCKMTRDGTCOFOCTILKPGVRLGYAWOLJZUHVWVCZINLMSMGFXFEMCQMNQDHTFBNXYWQWILOQYW");
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BUSJQZAXAMYNHNHTXOKFPBBQDHNLTHEIAZODIKMUYFPFOPVOQQXVQGNCHGWDRXGIWTDAUGLLWUMHZMEXLRXECXGLSWMDSUCQIQLNBQYYZSVKKAGFYVGRDTJFTJCLDUHNLLDFSOSZBNTAFOZEPJFRTCEV");
    const signed char tmp_msg_1[] = {59, -4, 71, 14, 38, 57, -53, -90, -95, 93, 36, -64, 40, 120, -18, -124, -69, 29, 1, -52, 77, 81, 86, 90, -127, -94, -61, -19, 26, -64, -88, 111, 27, -56, -13, 14, -54, 1, -34, 3, -93, 36, 88, 103, 82, 115, -113, 36, 21, -24, -44, -35, 96, -45, 19, -76, 122, -60, 85, 100, 83, 122, 38, 109, 103, -15, -88, -98, 12, 15, 120, -44, -9, -113, 80, -24, 50, -127, 68, 125, -69, -36, 115, 88, -23, -121, -75, 21, 94, 46, -19, -51, 23, -64, -74, 9, -82, -49, 22, 54, 14, -113, 5, 64, 89, -64, 114, -20, 26, 61, 13, -91, -93, 33, -106, 53, -82, -92, 94, 95, -110, 126, -70, 84, -16, -17, 4, -79, -88, 76, -74, -89, -58, -101};
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
    msg.setTimeStamp(0.0926501285720921);
    msg.setSource(13749U);
    msg.setSourceEntity(200U);
    msg.setDestination(40364U);
    msg.setDestinationEntity(79U);
    msg.req_id = 48326U;
    msg.comm_mean = 176U;
    msg.destination.assign("KIFAVWZGNDHPUSMATRUJRXGEJRGAEQHEAYCMCVCFTAKVSWDAGHX");
    msg.deadline = 0.5425540963640134;
    msg.range = 0.3586278657085614;
    msg.data_mode = 203U;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57318U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6249841056819144;
    tmp_tmp_msg_0_0.lon = 0.867286766596741;
    tmp_tmp_msg_0_0.eta = 3754110088U;
    tmp_tmp_msg_0_0.duration = 3048U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ANZEHWOXGFKNLUSYHKYQQPPEIAMVZRVOZLVQPXIFRRMDTEGIDACMXJVSLXYMBKHZHUWATACCPAOEFJVFDJBKHOFUQKDIGESHTUSBGVQRYCFWXKRNYDT");
    const signed char tmp_msg_1[] = {102, 115, 43, 97, 42, -49, 84, -69, -107, -25, -18, 1, 92, 110, 13, 35, 107, -79, -4, 81, 12, -36, -124, 82, 36, -106, 19, 117, -108, -94, -7, -9, 121, 99, 116, -123, 29, -123, -9, -26, -37, 108, 118, -11, -9, -120, -104, -87, 41, -21, 18, 20, -102, 22, 35, 47, 57, 111, -111, 74, -92, -33, 124, 83, 18, 42, -17, 51, 88, 123, -9, 36, -35, 38, 41, 77, -79, 15, 117, 119, -108, 58, 17, 57, -13, 64, -122, 99, -96, -18, -62, -40, -26, 35, 90, -59, -10, -11, 7, -9, 49, -101, 74, -31, 119, -102, -37, 21, -45, -71, -98, 29, -39, -45, -21, 53, 64, -35, -41, 18, 101, 74, 67, 76, 87, -122, 106, 55, 42, 81, 38, 102, -89, -82, -7, -27, 77, 21, -44, -126, 96, 45, -7, 20, -98, 116, 49, 98, -23, -91, 12, 83, 124, -98, 6, 24, 85, 48, 30, -114, -29, 29, 3, 28, 13, 12, -36, -24, 79, 5, 70, 7, -41, 5, -111, -40, -90, 124, -101, -16, -15, -109, 32, -22, -105, 102, -120, 93, -103, 29, 119, -115, -28, 85, -118, 97};
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
    msg.setTimeStamp(0.0970188210496401);
    msg.setSource(5580U);
    msg.setSourceEntity(227U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(74U);
    msg.req_id = 30211U;
    msg.comm_mean = 228U;
    msg.destination.assign("UXAJZJVFNFVNQGEHPSMHVAQKEMRPXZBHIEPLBRIUCJDUAJZQUIOVSKBCVXRKASYTAQEMMERKJCRTNDCYHYBSWWNXOUSSZHBGSLIRFCXGNWBLVWWMOGXYLVCSCTHZFQLHTBMAWFKVEGYNGWYTLKDLQOZODAOCLINZUIONKP");
    msg.deadline = 0.5909097878946933;
    msg.range = 0.9154221550966826;
    msg.data_mode = 130U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.0062733342911832635;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UQYSHNTQVMWLJJWSZIBNIYMICKROMNHFWDHORUNOZPJFBLHTBCLRRSSIAQFNA");
    const signed char tmp_msg_1[] = {-70, 93, 99, 34, -121, -87, 13, -128, -54, -94, 92, 31, 109, -86, -108, -16, -22, -6, -73, -2, 40, -70, -50, 47, 4, 105, 114, -9, 72, 83, -99, -3, 112, 88, 33, -116, 30, 74, -10, 95, -122, 114, 6, -58, 84, -52, -71, 108, 99, -5, 2, 106, -13, -3, -119, -37, 57, 72, -28, -58, -105, -15, -23, -105, 29, 73, 99, 36, 76, 38, 79, -34, 106, 106, -45, -10, -105, 17, 8, -70, -69, -103, 105, 12, 77, -68, -124, 106, -17, -97, 113, 91, 26, -113, 15, -44, -13, 94, -40, -76, -108, 103, -34, 9, -30, 98, 7, -87, 9, 90, -11, 87, 74, 65, 90, 53, 68, -66, -118, 4, 110, 88, -97, 124, -9, -102, 79, 21, 42, -2, -20, 105, 20, -106, -15, -62, 122, -90, 98, -33, 113, 123, 73, -55, 89, -104, -55, 93, 48, 124, 87, 24, -82, 18, 110, 87, -54, 26, 60, -72, 31, 18, 16, -53, 109, 49, -44, 95, 98, 87, 34, 112, 81, 103, -20, -23, 55, 6, -83, 113, 55, 73, -96, 105, -54, -97, -57, 42, -36, -44, 19, 42, 50, 80, -66, 51, 52, 4, 2, 99, 95, -58, -127, 91, 116, -57, 69, -121, 64, -110, -79, -122, -30, -48, 93, -52, -99, 115, -44, 116, 26, 1, -101, 3, 20, -20, 22, -120, -42, 12, -8, -64, 91, -47, 44, 56, -76, -52, 110, 67, -76, -14, 61, 32, -55, -13, -71, -39, 50, -21, -80, -72, -26, 37};
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
    msg.setTimeStamp(0.7952970675099955);
    msg.setSource(39241U);
    msg.setSourceEntity(254U);
    msg.setDestination(52464U);
    msg.setDestinationEntity(206U);
    msg.req_id = 19721U;
    msg.status = 10U;
    msg.range = 0.3651180258592158;
    msg.info.assign("RKHAHGOKTEGVWIDFSFEFUANOYIZPYCXQRILLKDT");

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
    msg.setTimeStamp(0.2019142731758955);
    msg.setSource(10235U);
    msg.setSourceEntity(252U);
    msg.setDestination(42318U);
    msg.setDestinationEntity(101U);
    msg.req_id = 37543U;
    msg.status = 181U;
    msg.range = 0.1579783873587608;
    msg.info.assign("OJEPUTVOOQFVSRNGIIFKXHUJNLIBZQUPWCMHWZOKQTDEEYSQRXMEDWCPGZMEMJPKXGIMZYQRFGCYOKNZUAIUEUSILDAKBNCVFYSCOLKSTMBWTLTJGSVALRNSQUBOVRKIJTPFVDVZSBPADGRKXXABEWJAVWNJXFPGPHEEYLUUXGXHXA");

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
    msg.setTimeStamp(0.3032287452118535);
    msg.setSource(25870U);
    msg.setSourceEntity(200U);
    msg.setDestination(31649U);
    msg.setDestinationEntity(83U);
    msg.req_id = 51254U;
    msg.status = 8U;
    msg.range = 0.8502042975042905;
    msg.info.assign("ILUZRQDDSFTRJEKKEVMSGUNAHTSGILFNYIDUTQFDXGMQQPKPSUEZSZFNIMAXWWYNEWCPRCFPDDFBRBVNTFTRKMJUOPBOOZBIWAYGVACDKTBVPNZVZMLCOGHHIXBWRZSIGEYHSZQJ");

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
    msg.setTimeStamp(0.8811711766936114);
    msg.setSource(6133U);
    msg.setSourceEntity(134U);
    msg.setDestination(21580U);
    msg.setDestinationEntity(37U);
    msg.req_id = 52723U;
    msg.destination.assign("RNYCJIMSPMBWQZORLJXHKCBZTSSKJJXAUAIHGYHVHMNGEYIXSOEYTPLOGROZHNKQUPQXAEKCNAVURONPQIVEMQUTEYYPARIEUCQFXPZCDCLDSEEVPGPJZHNJXYAZRLRWOTZBLJFDMRSWUZLAAOKLEF");
    msg.timeout = 0.6792006760057816;
    msg.sms_text.assign("BUUAKAWXPBGANJANYRDKXTGSUFOQKBUFLFWXQJBRMXSETKWGMYDKSDSDNO");

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
    msg.setTimeStamp(0.4693430821227854);
    msg.setSource(17815U);
    msg.setSourceEntity(163U);
    msg.setDestination(53980U);
    msg.setDestinationEntity(11U);
    msg.req_id = 42829U;
    msg.destination.assign("JBESYSNQYAYGPKDWBCBROHWMKUXJYFWTHLMDQFIQNRUDIIWRZPXOLPEVMAJNMTDAOURMWGRWOBXCZAHOCRXESYKZDEZNDFFUAXGJZLCEJ");
    msg.timeout = 0.6585049599893996;
    msg.sms_text.assign("QQVINGDYHUZALMUODAFTSWYGZZTEOFEWMVJ");

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
    msg.setTimeStamp(0.04666156234751462);
    msg.setSource(18257U);
    msg.setSourceEntity(22U);
    msg.setDestination(7942U);
    msg.setDestinationEntity(178U);
    msg.req_id = 2317U;
    msg.destination.assign("HJWNIMDUXKSEWGYTRMAKLUQAYSRNNFAUPBZICVJVCPMYXZGHOSTWKAVLBSDUQAIHMUHMUMOLSULGUPTMXCATYXQAXXWAJGNIETRGEGKZMDHBFIYXLVEVKHO");
    msg.timeout = 0.010738231170734025;
    msg.sms_text.assign("JNHKJZGEDJQ");

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
    msg.setTimeStamp(0.02424152773882271);
    msg.setSource(13379U);
    msg.setSourceEntity(32U);
    msg.setDestination(62176U);
    msg.setDestinationEntity(72U);
    msg.req_id = 13944U;
    msg.status = 11U;
    msg.info.assign("WNIXNPOLHALWXXMJNBNGATKRNUTYKPFTMSIJMRHDZWYDZQZPOSGHRJQETSXSWWBORDPJYCABDNKQUUBACRPGCDCSSDXHFBYLAYHQMBQVGTMIDZFXKAFXVFVOOGHJCEI");

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
    msg.setTimeStamp(0.7593191403171049);
    msg.setSource(13205U);
    msg.setSourceEntity(203U);
    msg.setDestination(42499U);
    msg.setDestinationEntity(170U);
    msg.req_id = 43343U;
    msg.status = 58U;
    msg.info.assign("EBDWNCJVIPALNCDRTPGEYLORFYGGHERYNTJEVEDKBFLBXPZSBAXRZHWVDZDTCQLEWYOZKUCIMMOSANDZNHMLRYKSDIPNOYWIFBCXUOFETLPXTUIXRYNCEOJIYODAYKLVWHIXMKIXSKFNCPIGRZUGXQLKBGJSSTJBKUPAAZBVQLXZSMHUTJWOPDPBVTAYPUIXAFQGVVFTLQHZWFJKMKSGV");

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
    msg.setTimeStamp(0.33509335615491176);
    msg.setSource(39205U);
    msg.setSourceEntity(108U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(250U);
    msg.req_id = 27322U;
    msg.status = 26U;
    msg.info.assign("JJYDSFMNRHCAXFVLTAAKUNHWQTEQIIPYZSFRZNESJMWGYIKGFHLRGZPRGJNOMKUASMPKJIUEKIBZQONYAVAOHSCLBUWGKUIELUMCTSBQAMOGDIB");

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
    msg.setTimeStamp(0.9245441212933043);
    msg.setSource(46620U);
    msg.setSourceEntity(211U);
    msg.setDestination(22315U);
    msg.setDestinationEntity(185U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.6697303447631361);
    msg.setSource(8974U);
    msg.setSourceEntity(139U);
    msg.setDestination(16511U);
    msg.setDestinationEntity(191U);
    msg.state = 250U;

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
    msg.setTimeStamp(0.0637985417973671);
    msg.setSource(60185U);
    msg.setSourceEntity(4U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(97U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.4611547825694047);
    msg.setSource(1790U);
    msg.setSourceEntity(212U);
    msg.setDestination(13622U);
    msg.setDestinationEntity(194U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.0329190726216374);
    msg.setSource(58773U);
    msg.setSourceEntity(153U);
    msg.setDestination(44824U);
    msg.setDestinationEntity(107U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.7573207129448983);
    msg.setSource(65275U);
    msg.setSourceEntity(240U);
    msg.setDestination(44565U);
    msg.setDestinationEntity(28U);
    msg.state = 106U;

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
    msg.setTimeStamp(0.06046012222320185);
    msg.setSource(63498U);
    msg.setSourceEntity(154U);
    msg.setDestination(16126U);
    msg.setDestinationEntity(74U);
    msg.req_id = 20499U;
    msg.destination.assign("GAPMFPOSHWNILBKIWFNNPWSCSDAFRZDYTGUALCUMULGVZDOEQCCPMKSYVVXWTQJEFIKSKOR");
    msg.timeout = 0.8607450014950302;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 60424U;
    tmp_msg_0.lat = 0.7108787389758261;
    tmp_msg_0.lon = 0.9767402643494687;
    tmp_msg_0.speed = 0.6545720556247819;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.custom.assign("RFMIUSZQVPUAADMWCOEIOQRUKRCPNFACEFTQLFROUSHYGMPYOVJVZJEAUJNXDLIWEBLLWGJQILYYFQZBQLVBDXVPMSWQSKMFTUMXIQCECGNYGEXABDRVBXJSKINVENCHEVGGAJIANLXYMAHKKPKWAWPTOFXDBZHPLRYNCZYJRTMOVBGIRKZWCPEGTSWLHFZDQMHWOKOTOSXTXHSTCE");
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
    msg.setTimeStamp(0.36100146252237675);
    msg.setSource(13295U);
    msg.setSourceEntity(102U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(224U);
    msg.req_id = 60284U;
    msg.destination.assign("CCOMSEKNDXANSNVRTZPWEXPNQNEZYAYEKBFKGKKRTJUJMTAYTYMMTTGGLAGRVLSDSRHLTETKLPSZBOB");
    msg.timeout = 0.032161063994311734;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.9248870628121033;
    tmp_msg_0.temperature = 0.38943023360079576;
    tmp_msg_0.depth = 0.7892944682889349;
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
    msg.setTimeStamp(0.9372648983074723);
    msg.setSource(12567U);
    msg.setSourceEntity(74U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(118U);
    msg.req_id = 45516U;
    msg.destination.assign("BCPLYHONUCVSMVFEXWLXOAYJAMQTQYVDHLKEPGLBODIZFOJTOVQJUIJMK");
    msg.timeout = 0.05568265940877393;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QTTGXCCITQZWPNSSLKKIFNCWOZOVFZQRLRDJXLCFHTZHRJRODZNBXGBKDZJMVSRGXBDUGEHEKZAESAUJIWQMNMMQZJPYNHSDASIUQYGTDHGWNEYEWWLSOIBMUWHXXIGOQLJPLSBJUKAAJXQEIUBEKITKFBTMUOYVYWQYRVUZGLMPCKCMYGTAOUERLIDBNOFLRHQCKFXBBNYGADUNTHFHWWVESATPXVPCDFOFZPVRRECKFAOYVPMPCJPMJI");
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
    msg.setTimeStamp(0.39790304729374326);
    msg.setSource(51274U);
    msg.setSourceEntity(202U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(21U);
    msg.req_id = 64832U;
    msg.status = 152U;
    msg.info.assign("QYDACGMULOSFODUVOIMISYQNTEENOQVTWXZIIHKVFGWPVLOAMWKHXWJAGPNDKSTXNRBBNCSFEAQQUSEZWNRPHMEBFNWGDTLEZJCXJICODRLBZDCXHJGTKSXIBYTLUQSWZFLKCFIXXPJRJBYBIYQFVGZTEROUUHBAGYDFMCZHHLURGACOOVLPDLMLMBRSNPZJYBHSVAEVQPASIWHVWKQRNPPRAZFQIFAUCCKDYJJZYMGEPDKUMTX");

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
    msg.setTimeStamp(0.005204092700247354);
    msg.setSource(25351U);
    msg.setSourceEntity(43U);
    msg.setDestination(3298U);
    msg.setDestinationEntity(3U);
    msg.req_id = 39035U;
    msg.status = 66U;
    msg.info.assign("RZCGJDESNEYARPDIDKXGRTUZVKSNVPBOKGSBARNCCITBFQXXPWLDCYRQWAJFQAATSUZAIKFSZTYVHKFVSQRJWHPEXIFYOELRTGUQPDOLMF");

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
    msg.setTimeStamp(0.6938193615995026);
    msg.setSource(51684U);
    msg.setSourceEntity(14U);
    msg.setDestination(13775U);
    msg.setDestinationEntity(234U);
    msg.req_id = 35524U;
    msg.status = 202U;
    msg.info.assign("AZUHXJGTWKUFVCMREOJOWBYUKTWEHSYOOQYRGYVCLAADKCMLQMEXLKNZSPRNELALEUHAZUFWRCDNVFJBEPNFBDGXYKYZJBXIJSHQGNGFMRIXDVFOFBHDHPDZOBOXRLCQOLETYCCSUZRJIWPRUMLURPQB");

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
    msg.setTimeStamp(0.4279051703431582);
    msg.setSource(29035U);
    msg.setSourceEntity(254U);
    msg.setDestination(62154U);
    msg.setDestinationEntity(233U);
    msg.name.assign("MFXNQTGXEDLCLANFZJECPRMQJUDLPUWBVHRNUFCMXTQJVAYHSUZOZBLZAFCDPKQXKKBVWMPBNVTTWFGIOOQXKPTVMTIEXYMWMROUPHZAWUQOACWQXIGFWASWZZISVRGVOPVUPCEHVTGNBXSFEICSBSFMGLSIETNOJDRDPAHBGEUJEHRCJBVKMYQNHZKYHLEOTKDNOYZCINAL");
    msg.report_time = 0.12484809677147468;
    msg.medium = 180U;
    msg.lat = 0.8291487233584199;
    msg.lon = 0.8140854610085918;
    msg.depth = 0.1183152376396478;
    msg.alt = 0.6417673660727841;
    msg.sog = 0.4429581628674677;
    msg.cog = 0.1810440274772448;

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
    msg.setTimeStamp(0.8015129466425033);
    msg.setSource(57762U);
    msg.setSourceEntity(208U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(8U);
    msg.name.assign("AYTFVEXELHTOWWYQDDB");
    msg.report_time = 0.10647591845288462;
    msg.medium = 4U;
    msg.lat = 0.6701504952760622;
    msg.lon = 0.5819277638190714;
    msg.depth = 0.006743705056496796;
    msg.alt = 0.8256454271209337;
    msg.sog = 0.01657977925500098;
    msg.cog = 0.40108946450325134;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.10246569351594859;
    tmp_msg_0.aoa = 0.8999348658965709;
    tmp_msg_0.ssa = 0.32773804468587053;
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
    msg.setTimeStamp(0.8459418411614509);
    msg.setSource(49008U);
    msg.setSourceEntity(84U);
    msg.setDestination(517U);
    msg.setDestinationEntity(136U);
    msg.name.assign("XXLWLSMMUPVKKPLMIOAABYRUOHMNEZRUMMLYTNSAXASCRDNIYXZXKGDBPYEIDCFNTIJIOPCHBTPPZEOUFXCTWMASZLDNEKFLFFWSWDVNXEUKOVHPWOUUOVKSYKJSITOWRBMQKEGDIGAQJSZVJMIP");
    msg.report_time = 0.294437398520378;
    msg.medium = 3U;
    msg.lat = 0.3776912242744127;
    msg.lon = 0.40274974609376657;
    msg.depth = 0.19099035848903845;
    msg.alt = 0.7438500255387891;
    msg.sog = 0.7471756663526539;
    msg.cog = 0.07090634525842932;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 51922U;
    tmp_msg_0.control_ent = 41U;
    tmp_msg_0.timeout = 0.3256298165120397;
    tmp_msg_0.loiter_radius = 0.4726115457619917;
    tmp_msg_0.altitude_interval = 0.8695258882567162;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8714733106239404);
    msg.setSource(19382U);
    msg.setSourceEntity(102U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.03445268217212183);
    msg.setSource(29623U);
    msg.setSourceEntity(138U);
    msg.setDestination(28543U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.013113686554125148);
    msg.setSource(14083U);
    msg.setSourceEntity(73U);
    msg.setDestination(19090U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.2145687984251602);
    msg.setSource(891U);
    msg.setSourceEntity(9U);
    msg.setDestination(45047U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("JSPWKQYDUCHSEBDJPYJUWKPHNWCCTAPIGQKFOWHHTAMEMFZXJXUZRKWSSFLIOCSJPOQEPAZCAUBBLGFNOVVFQSEXIRMZIEYWTDKLWMDHQTFQIAXSKQVVNVJNVCDMBJHCGGHUIZMTDD");
    msg.description.assign("AYJTGQBNOOSIXINVJREUPYVUMQKZOFWRDDOJQHHJMBNKURFDYTYRXBOTEXYYBZLTIPEHSLGZSICJZTGFPFMRXKPABOBITGVWEXLNHAWHUZVTWVGCKSQZQWLRDEDWXLBAKDZDMMPXSCZLQKUWJIRPVGYPJTUWLSJBEXUGWCFXMDHKCVINRCNNUEACOGJFUYOVSMCHNJGQVFSCBMXFMEWN");
    msg.vnamespace.assign("DGKAQEHZFINXQRXTZUECGCUGJSMSDFUPJLURHOWOOAYZZYRQNGAGOQDIHHRZTYDAAFOYKMCSENMBOWVUAGWRTFKVGCYNN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CEAUARBWDIVZYZDUVDJPJFSIQHXDJEHXRPLVTLROZZQOAWFZONKNYMTQKWJFKPUPBETLGVVDEZUTOHIAECFVGBNZAGTVHWDRUFYTOFO");
    tmp_msg_0.value.assign("TFQKMRTKZJBTFWCNLDVMJJRDUBWVAIBPSJJOHQPEGVXLFBKRFCGPLBABOONKFYWRPVZAHNMBRSVUUYQTJEWHWZFVIDZCQPIREETDHPZAOWXCGHBTYRBJANKGLCGDXVFLVYZIMCH");
    tmp_msg_0.type = 216U;
    tmp_msg_0.access = 206U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EMWZPIKISBCXMWUROZFYZKVQQQHBYGEHDAUNIRCX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WDXSPLKYIBIFBGAMLNJQAOJFCOHVBLJMZTXMFKEQZDCAKPMOMZWVEWNPTTPZROBSSJTFQRRZTVNOZBKBMXIXVWSRDLXUVNGJVBHWYBMPUASWCDJGONRUHXUGXYI");
    IMC::Drop tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 60989U;
    tmp_tmp_msg_1_0.lat = 0.3804850562867498;
    tmp_tmp_msg_1_0.lon = 0.594289764099654;
    tmp_tmp_msg_1_0.z = 0.12106713130633784;
    tmp_tmp_msg_1_0.z_units = 140U;
    tmp_tmp_msg_1_0.speed = 0.1893105703254292;
    tmp_tmp_msg_1_0.speed_units = 71U;
    tmp_tmp_msg_1_0.custom.assign("MMQWHNWBKDDDWBFXPQAYUZGNTRGPZCQXFRPPOWYYCFIULNVNOOREKGHEQQSTQYATVAESBVUFHACVTGKRKNCFBQWTDGMTOBITZOEZMJXBVHVOGYGRICVKVFJZDN");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RelativeState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.s_id.assign("LWWQYTYNEOBCVDBRBIBHSMCIVDZMDEOBMOKSQCVHZMIFEXIWCNSOWMZXVFSPTYFCBAKEDDHPZFESIAUCFGUBKSAUXRGWLSCTTPLUQDKTLAIRKKCZWSUQTJPGCOEIPHNVNYEPFQPAIENJJPYRXHXWVLRDDKOJMNRZJXKGVNQVGXYWUXQUHURYZNZKEZHJJGHMRVJGDTJIKEHWJYUSTZ");
    tmp_tmp_msg_1_1.dist = 0.3339778005397389;
    tmp_tmp_msg_1_1.err = 0.7076633868605239;
    tmp_tmp_msg_1_1.ctrl_imp = 0.9922836736714387;
    tmp_tmp_msg_1_1.rel_dir_x = 0.8640346853186086;
    tmp_tmp_msg_1_1.rel_dir_y = 0.21438230665313862;
    tmp_tmp_msg_1_1.rel_dir_z = 0.3601997584315998;
    tmp_tmp_msg_1_1.err_x = 0.2932298039763377;
    tmp_tmp_msg_1_1.err_y = 0.6061031268096296;
    tmp_tmp_msg_1_1.err_z = 0.4651516732436748;
    tmp_tmp_msg_1_1.rf_err_x = 0.2591605752055911;
    tmp_tmp_msg_1_1.rf_err_y = 0.2728721218751795;
    tmp_tmp_msg_1_1.rf_err_z = 0.8615859662113319;
    tmp_tmp_msg_1_1.rf_err_vx = 0.10831102731987352;
    tmp_tmp_msg_1_1.rf_err_vy = 0.2540100846309816;
    tmp_tmp_msg_1_1.rf_err_vz = 0.887877545904873;
    tmp_tmp_msg_1_1.ss_x = 0.26025945805177986;
    tmp_tmp_msg_1_1.ss_y = 0.15460369360295045;
    tmp_tmp_msg_1_1.ss_z = 0.6906740673463828;
    tmp_tmp_msg_1_1.virt_err_x = 0.07031065257718516;
    tmp_tmp_msg_1_1.virt_err_y = 0.3387550217831047;
    tmp_tmp_msg_1_1.virt_err_z = 0.9262539791656523;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::UsblFixExtended tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.target.assign("PZXFBEAEIKQZJUJGWXWFFRXEW");
    tmp_tmp_msg_1_2.lat = 0.345635658293711;
    tmp_tmp_msg_1_2.lon = 0.30265080101001596;
    tmp_tmp_msg_1_2.z_units = 153U;
    tmp_tmp_msg_1_2.z = 0.6087261153186058;
    tmp_tmp_msg_1_2.accuracy = 0.588450930545996;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MLZBBDTAOFGJPSNSQMEJZWJRECLICPYWYDAPRAVJNMCRB");
    tmp_msg_2.dest_man.assign("SACBUJQXMHYKTFCUEFEDTQZEPZTGIRCSZYMINPAXVYLGNWHYKXOEBZ");
    tmp_msg_2.conditions.assign("PJDGQCULWYJFPIBRPHXDTGJWZVYKBTCNXAUFBHEFANLCSGLIKMDUMNECOROSLTQFQLQETZEMMNKUEZSFANGOYACTYYYOUZHFEMUIZBSGATVXOUPLWEHKYUPDDZVKLRTFQHZJJAKYQWVIXVXBEFWTESDXGVSCPIWGXARPCMXMVHBBKGWEKARBSJZILPBUXQOLUSYVHSMWMOALBZINIDGXRRQIF");
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
    msg.setTimeStamp(0.22871901107828851);
    msg.setSource(65465U);
    msg.setSourceEntity(207U);
    msg.setDestination(58213U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("MCLYHBWBYEOZJOOEBUYYPEDRMGANXQTJCFNKIVWMGIOFXSAQSKTVVVEMBWFBSPZDCVJAHIIOPXKMNFXLTFXEQPJSUKQKKBTEQDCAGUYNQDPMMJKDJVDPSXMQUBLGMCEZFGQIREYO");
    msg.description.assign("HGAKTBBHQGMWPJGEJIGNCCZEYPPHAFQHOELTGATZSGJZTCRPFNWSFORTOVPUYOSFJYUDAZZZTKRXDWIBKZQMCDJEDNEAJVMBFUKVCLNCJWCWSMPTPKHVISINSBCPWBZFUXRIXODYQGLJMWLEAVLQEXLQYXNVAUWXKKXSAZALEKDQXKBGMKIDYRVUCFWZQDFLJDRQFIUCMNMTAWXVRIRVOSOHULEPTIQN");
    msg.vnamespace.assign("SPJHRAUQYSQJYOFYZSXEPEBTICUDTGTWYUKNAHLTKECMOAMBPAVRDILMCKFVCCOCJGSQODZUXIQPZTZKHHUIEWIZWHXVGCCGOMQSXQKDBNKGXTPAMTSBKVRZFEYYFNNDRUOHRBZXLPRWSLEOIIGXBVUXFPWTJIQRJVFMMNYQWEXWZPGBNQRJRGMTBNFKBKZSUUJFKSALCW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BNEZHSDRJHEWTIVFCSBLKQYCFKWGEOBGQXTNVYIXWAMQJATTDMKXGSOPUAURHVFJMVLEYMUTXIEVWFZICWNBLRRHIMNDGLTALUZYHOJLZGXTLMOAFNTNEFMDKNBJSPUYNFHQGQJGHBSBEPNQGCPZPDNWOSZIDSLCIXQKDVBORYURKIYWLXKSARUQKYSUYRZKXOPVOMDMIZXXHJDOSJGRVFEKMVPWUWDG");
    tmp_msg_0.value.assign("SIHNAROMFJRZQUFMKJUBHVYZFTOMKTGGGPXPGKISYIMQCCXXIMDTTZA");
    tmp_msg_0.type = 60U;
    tmp_msg_0.access = 41U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LXAMAOUPMYTETGKJOKTYHSQVOLECVDGFDOLXVORLPIZMEYDNSMLSBEIAGZJKBHCDXPYBURJUQUZGFKPOIOXJCGHTYSJDPZPNFVCUICADFJEXSLQXFZTEKTHRLTVNDUUIZPBUQEFKAKGZOVQFSQWDMIGHXYYFKCBJDHJWLTHAGKYALVEMRWWASQOYNJWMBNPHSNXWXRWFQRCEHAPPQUZWQDZNYBVRVKNRILFMHCVCBWIXSNSBAUONCIRRTWGB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ANNJCABYAGIXOZCMZMQPWQWWGHHLJOERNYIVOUYDWSNZUTYQPLONMSVNTPEEPJFCHKNCCJLQNZYAWPVPJELGVQFUBLTXYDQDUZIOGTDHXRXFERCXMMEKEGDWFHNTPGCVRTMOZFSYIZKHWOXZTTBBWPXMIYSKBUSIPKKOUCOXRBGSHKVFIGHJQXMHHVYDAUSDBFEUKVKSRYLQCRBZGTUQRFRDGASFALBZJPUALWIM");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 39714U;
    tmp_tmp_msg_1_0.lat = 0.9268510537759377;
    tmp_tmp_msg_1_0.lon = 0.4278273344950382;
    tmp_tmp_msg_1_0.z = 0.37616640867883555;
    tmp_tmp_msg_1_0.z_units = 58U;
    tmp_tmp_msg_1_0.speed = 0.40240192143386944;
    tmp_tmp_msg_1_0.speed_units = 122U;
    tmp_tmp_msg_1_0.custom.assign("DXVRWSQIVAKPBWHYBSENQZYDCJAMFPZUMMKJBUUVVJHDBGBPWTCRWAOEQFMOSKTINWTICCUXGOOASHFHAPUOLEVIOSOLXRAVJLLIFSERGJAHNWUGQROEFNDLNBFVJBKAHCYFVWGNXRJGZZVD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MPSTWEEEUXALTWIFHHLSNGHCRNQBDVRCMDZZQ");
    tmp_msg_2.dest_man.assign("NASLXDAXGXTSRAEKOY");
    tmp_msg_2.conditions.assign("WWAQRGLHEAAYNXLSNWSXAKRVNLMPNBUTTXYMBHRWKTDQFSVXUOKADEOPEBDMLJHDUQOFZJQMEVQIUFHIWWRWHQMJIKPXVIWOPZAFBXRGJHSLVTBXLLGJBCAPZGOIRKHBSWNUUJSFGMVFPOCZGTTLTTADYSJVGSFESJPRHRMKVDIDONCPTIJMESNXKREKZGCG");
    IMC::DepthOffset tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.7463206669351199;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::UsblModem tmp_msg_3;
    tmp_msg_3.name.assign("BAWGKBQADQKLTN");
    tmp_msg_3.lat = 0.341738305926796;
    tmp_msg_3.lon = 0.41808023774900394;
    tmp_msg_3.z = 0.7434343304306034;
    tmp_msg_3.z_units = 128U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.33111299036153796);
    msg.setSource(38401U);
    msg.setSourceEntity(128U);
    msg.setDestination(54588U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("PVWLAICEUSNNHMRESNOWJNBVTTODRCYRROBAKFHUZJCGUDIBSYJSGJGDWYRSQARWEYHSBPJDVDJXMHNUKBZRKEZQZKZTQJGZCAOTRWQWPFOXFKXEEAMELQSHVKMLIPJPTOZRLXXSINQLWWACDDIYYBGTIZXYMIMSVRDDFTTJXXCVOTUEGHFHUQIVNJUGPAXCUNLBBYKLPGFEHUGUEHVNKILFMFGWVVNLAYHZOTOLWFPKXAPBOSB");
    msg.description.assign("MXGUDUYOPSOILOLGZSCCAAJIJXOHDMWCZUSLDRENOFVIBSOGSKUK");
    msg.vnamespace.assign("WTYCZMNREEWHQTTCSDJXQLRHVTAXZSEYBIXUFIPWQVGYGRCKBUVMJVQKNMKLPJQHFGZFPSNTMWOOJBZPBWVXPPEYFZEVQLTFBJNMRKZYUKVYYHCIJWJKAWQKTIAOTKIGHEDVUWDCLOEADBGOHCGLHFZZNIXLOBMIYXJKMSLZCUFOOYUPDANQSINANGDSSGDSMPAFUCRSLJQNROQLMNAUWYBI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GIRNMFHFHUHMEIVPRGBMYWLTXOYNRSJOWEVSODNVXDLODRXJKIHGLDEOLTUACMIFJGMZFVJACFRZYXFKQJABSJYAPWYOQZYSWWVNBBXDUVIAUEONIAQEIWIXHCILVQQPQSVLEMOOMUTXSRGKMSKQGJSTARBPPXPHAK");
    tmp_msg_0.value.assign("FDQJSYDHDYIGQBICVNHZRNDK");
    tmp_msg_0.type = 245U;
    tmp_msg_0.access = 70U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SMJENQBZUQOBDMIUGXIYNEETXLPTOQVMMUJTENPHAWXZDORWATNUPDPHFWZYIUARFKCAXAVALGWPVBIUKCXJDVBRSOHAIKOZBSUMHPWOKCSSCLNUGKTUBMUVXYCQPJOCYYHYAIIIGBZLLXTNMNOYQYGDKRJDTRGXQKBVGSLHKQRRDLDRFJEJHKEQOHPLETYKWWNBILXSYBTSCFACFWJDJGPVWV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CBUGOEAQUJZBYUMCWUHPZZVTZVQNJKXRJRBDQZBSLSJRESAJMBTHKODULGQYSEBAPCKSDCAPGCTJYCRQNHMYFODDLNZMYCVLLWJWMFPAXABVERKAXSMNZVY");
    tmp_msg_1.dest_man.assign("VDYIZYABRVPNDLVWGGHANYPPDBTCRSOYSGBFRJVHVUVTXZQVTOFLRCLJNESYRJAQREWASJULBBZJOZZMGMYUMMOFLAFWCDUPZNHEKJOEDFIEFGKKYOSATCEMOIDLBDBZFXPRXKYEWBITXHCSUYLNRXQHNFRCPLQKZFWWTOGM");
    tmp_msg_1.conditions.assign("UXQZXPXLCTGVRYQXKGDLWONIONOUSOALKEDPIJTKJRDZYQSPNNTAFYMZSRSGFSKTBHGVQQH");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Sms tmp_msg_2;
    tmp_msg_2.number.assign("NCEQOUYNZAJVPTCDGBATXVHSBFZHKBVKGOOUMADMOJGUOQNBEVFQIUGRXNCLINDJSZHQUYVKLWSGVEKFJRPSTREPJYDPJIZQHVCFAIBWJYLGCAMMHKSLJYWXHHFLCWHKIIDWXBFMQGXRUWGEMQSFMJARPTYKHNZOEQXIVVLZLUOVFPCRMATTXXCKTLYLDNPAPYZAILPWZBRNAUMGTHWNSEDEXDSTJGSODYFRCIIQCZUXEEQPBUWMBKSRTY");
    tmp_msg_2.timeout = 11541U;
    tmp_msg_2.contents.assign("IAVYJQPCPHIJWTKSIQIIQTDFCZKVNLDICNZUIWMPKXVLKVNWARTDFBAQEZGIHEPAYFNCOGRXUDYNLJVTTQDJTXZYT");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.28112740224411326);
    msg.setSource(49567U);
    msg.setSourceEntity(59U);
    msg.setDestination(27216U);
    msg.setDestinationEntity(90U);
    msg.maneuver_id.assign("CQZQOAREJRIWVPUGBMTCIVFGANCXHJVOKEUJDWZVWLAXRZTQBSNHMIKX");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.09423724947832701;
    tmp_msg_0.lon = 0.02891578189332178;
    tmp_msg_0.z = 0.4990106123298548;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.10793617082676099;
    tmp_msg_0.speed_units = 166U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 49928U;
    tmp_tmp_msg_0_0.off_x = 0.7513359991452042;
    tmp_tmp_msg_0_0.off_y = 0.041234133447556776;
    tmp_tmp_msg_0_0.off_z = 0.4093406235643634;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.313358883151848;
    tmp_msg_0.custom.assign("UFXLRMCHCHLIBQEODEQIRYHBIPMDUTNFSRNHXZDVWGANLMQIAIVLJYDBJIROYPSEFXXHAUTOLLZLTRIEGWKSZBNMQPHOUEKHSBVRUWJWWMMSVZQUKHXSRCMEPIFIXKRAYPDTIOVDCPUYYOPDEZXG");
    msg.data.set(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.5287059418858059;
    tmp_msg_1.lon = 0.5853377584404926;
    tmp_msg_1.alt = 0.7251807368439989;
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
    msg.setTimeStamp(0.3794813714757933);
    msg.setSource(60879U);
    msg.setSourceEntity(124U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(115U);
    msg.maneuver_id.assign("WAFXZMJHGODQNXJFCVHHZURBNGKFLLSRSRZNVM");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 56254U;
    tmp_msg_0.control_ent = 186U;
    tmp_msg_0.timeout = 0.2833482703645195;
    tmp_msg_0.loiter_radius = 0.9631801292663916;
    tmp_msg_0.altitude_interval = 0.10174237449314172;
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
    msg.setTimeStamp(0.37489590007839935);
    msg.setSource(49694U);
    msg.setSourceEntity(207U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(31U);
    msg.maneuver_id.assign("VSTKQNJMMWRTHIMUYVMAYIKAVXBZMQNUCCRCSYHDWFTDXFPZPCNEOEYAXZBAVCFSJXSFBIWAJOJYAZPORWMNHETPOUGBFTIRXRSZPJYLHSUN");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 62939U;
    tmp_msg_0.lat = 0.7216459751105883;
    tmp_msg_0.lon = 0.46164996875632813;
    tmp_msg_0.z = 0.8463199687982146;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.duration = 56875U;
    tmp_msg_0.speed = 0.9631012890073632;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.type = 171U;
    tmp_msg_0.radius = 0.10825610652119488;
    tmp_msg_0.length = 0.5274758415163424;
    tmp_msg_0.bearing = 0.5358313144794411;
    tmp_msg_0.direction = 160U;
    tmp_msg_0.custom.assign("HVJYKXMQWWGZWGDQALOZVMZUEOPKTPQZHQAXSJRKVROVBISADNILWIJRBCDDATJTYXBXFLFQRGXVECXRTUMAZLYAOCBKYVNINNZPVGWSOCGFDHIUSWMFRGKTPJDJYBNLIJFUCLKLSBFUZREUIUBHBLFIROSPDKZJKEYSQAWCOYIYGG");
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
    msg.setTimeStamp(0.8383968775160144);
    msg.setSource(24875U);
    msg.setSourceEntity(95U);
    msg.setDestination(48040U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("LMKFJZBTKVDTODXRQZMXWKAMOTXXRUMCMUYHOUHS");
    msg.dest_man.assign("BLDIAJMVPEZJVZLKEQMNASBHAJNRQYHGLDQFOJCNXMSCTPMGEERKGOWWAEOSOBRVYQPUWJWRCAKWQFKGNGCKRXLZUYDMDBXANYLJUODHVFPLIIUNIRGTTPKIHYECGCXPXXRHAWMBKQRNCTFKSBOAATEMWSFREWKOLFVZJTZWQCVDQYXOPDJBTLATQYMQHFOPLDCKZZPMTFIIYZUWDXBDRHYNJSCZLSU");
    msg.conditions.assign("MRXETMMYBITTFRSVMMAYVNDTZCVXJODESLISSUAKHIFMXAWRSVEYIPDYEENCKVUPDDDGXYAQIIWZQBLUHWJYBTHWFAGOFFULWDCBZJTUQAFOGCXKNPEOSSEGGLVWMQKHLSKRKKHYFYRZSTCNPJUWPPBGOLWQBNJIBBUYAJBZOOCRICHGECCPILVQXISVBLPNTGGREDROZNAJQLXUMHR");

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
    msg.setTimeStamp(0.21462308852910172);
    msg.setSource(43351U);
    msg.setSourceEntity(28U);
    msg.setDestination(37486U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("ASUNVHKIUGXPUWIFIRWVNTZQMEQTYBNGXLYCGOXSKKIOWWGEJGZGMQJJVCNOESKYAYBMKGMBIRWOHAPQZ");
    msg.dest_man.assign("PFDMYLFNVKKGVHFBZVFQLOVPKFENGUOERNRKZHCLPLWSICEHIJQAXTYHEAQTTZYIRFLHBCAYOPDMTGQIPGZRUJKIZIIBMKVOCTQRSAGCDIXJZVBEMZFDNTUXPXXRXZYRHNYWMENSDFVNEPDYGCXOUVXYRCOQWAAQWFCTMZHOGMEJSG");
    msg.conditions.assign("ATUXQNCDGMDSOGYFVRRBEOPWLRAWFKCGUARPBCDUBYCIBBEUAALTEOYNZWLOUF");

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
    msg.setTimeStamp(0.9573794650740195);
    msg.setSource(51718U);
    msg.setSourceEntity(115U);
    msg.setDestination(6318U);
    msg.setDestinationEntity(87U);
    msg.source_man.assign("SNKUOQPBHNSAMGACENUQWLHXIMVPGFKVNHEXTLYWHHKMSIQXBJCELMQDUCPD");
    msg.dest_man.assign("XTIFXTIVPUUKKCEOYOGKHJVYKQOWJOPRZVVPIWQLJAABNLCZIENOGYMAWYVUIXPQPFNYZNPJAIHNVIWJUUEDKKDVRZTQAMWRAWJCLXOXSQSGMNYCFSO");
    msg.conditions.assign("GTXQTKDZMBDMGLJVGYHOHYTXCIYXLYLRZAPBPRMIBCTAWZDVRVNKCIAFMEZQQLSVBBCHUUILRIIOJJTSGFMTPQUNWFISSSWNERVHLYOQVQAAPFKBOZUHBECVYOCZWGZGYJZLVMFGMMCETHBKPMWXLHDEKOWSYYFGKPKUXQHPETHPWAUNXBVJCBQFNOJSXCNDISTAKNVDEWNPUR");

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
    msg.setTimeStamp(0.8977427895513662);
    msg.setSource(11909U);
    msg.setSourceEntity(254U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(245U);
    msg.command = 97U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWIYMLHDCBWEAVAOSYJCVLPRIJSHYUTWCUVMLGYWZINBGYQGXZJSTWZTSXQYISRRZXENEIVMZZGWG");
    tmp_msg_0.description.assign("SXTTMHFUCPQJIHFSKVHP");
    tmp_msg_0.vnamespace.assign("GFJTDGRLOPLMYDSDYJZKTZWBWWQCFQMDRIERXXJOVVWUUPOPBCIJPXYVFIHTVNPZJVHDAHHGNKKJLMIAOQKKUXKSOFIPBLDMEQAUTLETQQETHJDXNBILDAEXVUU");
    tmp_msg_0.start_man_id.assign("IKUTDZYFCNQNYS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IXJPOJOZTRVHVDQJNBAXKGHMUQKEYOESVGMKWOHBFTQSEYQJDCMNSFDPKZGCRXHCWCFTYPEOINUQWDVSWWHFGMASVBEAEHTUFOQYBNTLLFVXAVCTXPRSUEXIYHEPPBVZAYJIYCCCAKMNWLRIUCUWJIDKLQONTMXYFBXSPRVAPUDZQLGKISZLBAUWCELJDQZYJUHRNMNHBBXLIXLPGKFBVIMJGGNRKFSRMZNHAARQTZDDFSMGWKLYWIJTGDZU");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.18524559482558622;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.455408877684212;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5682467848078245;
    tmp_tmp_tmp_msg_0_0_0.z_units = 161U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.06769753066312933;
    tmp_tmp_tmp_msg_0_0_0.duration = 19794U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5297693517530586;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 107U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HSOJSVRUULBEUIELAAQXENHMYACEWNVHEJRVPXITNMDSBRROUKCCFCDCAFDZVLRTHLKWDPXJGWFFCQWOAZAYONRYOJUIFBLNAWJKYVNNJPTIOYGPLKATBYOMPLGESBSJHPZWWDTULGZGBNIQRRHJYRKMKPCFRYNTDSDVAXO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticSystems tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.list.assign("DLVGXWNOYFEWZWEOFKVAASRHEZPKEJOYHXRV");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.action = 79U;
    tmp_tmp_tmp_msg_0_0_2.lon_gain = 0.26210700418251265;
    tmp_tmp_tmp_msg_0_0_2.lat_gain = 0.11794698552800076;
    tmp_tmp_tmp_msg_0_0_2.bond_thick = 0.13979004705703413;
    tmp_tmp_tmp_msg_0_0_2.lead_gain = 0.5073764973269406;
    tmp_tmp_tmp_msg_0_0_2.deconfl_gain = 0.514209771736318;
    tmp_tmp_tmp_msg_0_0_2.accel_switch_gain = 0.11930890481587408;
    tmp_tmp_tmp_msg_0_0_2.safe_dist = 0.9529650690094307;
    tmp_tmp_tmp_msg_0_0_2.deconflict_offset = 0.18755625628041428;
    tmp_tmp_tmp_msg_0_0_2.accel_safe_margin = 0.39234518434072063;
    tmp_tmp_tmp_msg_0_0_2.accel_lim_x = 0.02560262193246765;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RBKNPRGSOWCPIPMAJXZKMPYFFDNTXAGJCEYTVOPBRC");
    tmp_tmp_msg_0_1.dest_man.assign("NWKKJRCEPTYRDFVSHMTTZAIQGZBNRZLLWJYEHVRGNCNTMLEJJPGNZVVWDUPSBCIPMWTXJOPOYISXOBEOUNZQPWRBLTHVVNYNICIDMPTEIATCQAZZAWKBLUCINCSSSUXHKYCAZTQURJYOMHIOMEZAXJIDRAEAXSFLPOAGGHISSXVXXP");
    tmp_tmp_msg_0_1.conditions.assign("NQWLSGZOXBXRHOLFAKVPAKARYJVMMPGFDKZWGTSBNQXTPUQFECUEJTUMUQSJWMAPCQLXQYTTIWBBXSKDZTEUNBOTDVIROMLZKGVOPASRGCAFPJSDXMLYCSHZWHAWKEOYEUNMAKPFTCVKGLFMHUGDZZVUWSVPWSDNFEIEZKMVXIYYNIJTGPBNADWIRTDRBFCXQEIQGJORYRNBMLREJOHYHJEHKSCQVDIIJLYNXBPQBIVNOJYCU");
    IMC::VtolState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.state = 58U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ADCPBeam tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.vel = 0.8280686517033412;
    tmp_tmp_msg_0_2.amp = 0.7150822447987163;
    tmp_tmp_msg_0_2.cor = 138U;
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
    msg.setTimeStamp(0.5747407270088771);
    msg.setSource(3705U);
    msg.setSourceEntity(159U);
    msg.setDestination(4947U);
    msg.setDestinationEntity(185U);
    msg.command = 235U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DRFVZPOHMEQDOYOHKKLVIEFCMAUCUTJIFLTJITFOZSEODUPWKQCNXIMEOQIFEWQMTHQYCFBHQYGYEMAJYYALTEKWHWJZUYXALVRBQUMRXFKBLKLYNUXIKDCPBSWEINUZSLTJVSFBRKUWPGPJPZSRSTGDZZNNVBTBGAIGARWTMYHAPLNGMWSUJLXZMRSVPHKSNNXCCVRGHDXSOFVDCEMPCWCDLBQHIBOJOPWAHIJ");
    tmp_msg_0.description.assign("PTURYIMDBTLJCIPSSHXMDNYJJQL");
    tmp_msg_0.vnamespace.assign("EGBIKAFSBEQFDJSJHKUJCXTDAVORLMINDWRRHYNQPMFCUIPYHIKGQDEZSRLNZCNCKUSLVHZOGLWZWNGETZVRQKZMLVX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WMYRKCHOBVOMJHGOXPUZTLLBIBRNGQDAQYSYQTNINXPCDRIPWYCATLEWXSEIVQJXEGUTSNAXBGVACZHWWGNIMRHBJJOLZHHDYBTQHZJSDMGKRMKGZIAKMQABLMXKASGURGPAJQJPEXPWZSTWSATDTNOOHV");
    tmp_tmp_msg_0_0.value.assign("XVFFPTZELSGVBNLVQTOWFBHWVDJXFEUNMBEPMODFBEOMBWPRAZXGKHFRSKRLKAMSDDQXFKETZYVIHPUIFYKEOMCYDXZXUCBDYLLUOPNGGQCGUKCVACTJPAIMNWVRVIIWZWESQPOFHVRCLCNQBXPAHTAYTSXRBDEQ");
    tmp_tmp_msg_0_0.type = 149U;
    tmp_tmp_msg_0_0.access = 25U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MCLSYOHIXYAFHCFTQQBIUXLXJZWFFJGVITWBCQDTNDPNMVHFCAJCVOLEPQKOKPUJBKDWRNARMUIVMNVTFAQELHLWHFYHWZGNCFYMXSGZZXEDERWWUVUKIMBNEPSCTYJOIKCPOGVELYM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ENIQHICTUYOZYNQUWYMBRWPIVCAWXENEAJVRYZSTXPWFRDDMVWLJJGUDVCHSEODWGRSUBYBGUZXIGFUVLQMPFTENLBFLQBQYZQO");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 32490U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("ZJOLSIKSCGQWCWRFUZEYUARAXZLOUGVANRXPUTHBPDVFTRSSRCVVDEAFMGWINGUSHFONYRWIQFKLHVJRUXEXGIAFWDVAUYDPGGSJZVAPEJXBRXCIVMLOTKHRKZSOIPOWHDSREMBQTMEOLYPYIQMLNDZJFYLUPYTMFGMIWJZBYBTDBQKOAHNZBLEDDLFBCNGJZXQTQHFJSXVHWKKOMB");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZXSTHBHUAJKQYYZWWLPXNXLSOTNFVMEEIPJEDGNCDLOAXKZHZKGGUCTMYXOQABVIPCSCVMSAVBHSCZWSIFQJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.6939184948613326;
    tmp_tmp_tmp_msg_0_1_1.z_units = 245U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::HistoricDataQuery tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.req_id = 13122U;
    tmp_tmp_tmp_msg_0_1_2.type = 65U;
    tmp_tmp_tmp_msg_0_1_2.max_size = 61117U;
    IMC::HistoricData tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.base_lat = 0.9868339031037365;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.base_lon = 0.315338913235484;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.base_time = 0.8441169887340971;
    IMC::RemoteCommand tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0.original_source = 16531U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0.destination = 27408U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0.timeout = 0.0765214293529829;
    IMC::AcousticSystems tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0_0.list.assign("KJXYVQEGRHB");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0.cmd.set(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_1_2_0.data.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_2_0_0);
    tmp_tmp_tmp_msg_0_1_2.data.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WGSYYBUNTGOMTIULLPKLOYBSODAGQQCFJXKGSDPTMN");
    tmp_tmp_msg_0_2.dest_man.assign("OSXEARKZFUCXEKDMRQPJXRSIUMVIHJCUOSKDHQONLBHGSPDAAXWWYDYLMERCCTRLBNAYWAWTOOKUGISBFRBQHMTNCQUQZTPXNBVZEYRLPBIVCAVACBUGVSIHFTCHWOPXGNDKUXYJZAIYUWGQOWJATOKQGAEZVFPONHNDXPLBHJRJGLGQSKTBGFPEMDIFLEPNJGVUMRZCVQTOX");
    tmp_tmp_msg_0_2.conditions.assign("JMQSYYPYQMNVIHWHLBAYNFPDTTFDSMZMQIDEITYQXHLXGSHXXUVKMNWBTNVWREKDBGWPONDFXOUQNBKJCQXTZUJLTNBCZESLDGEGVAJGOUOLAHAOUHRMOKIPIDDOZFVRUCIXYNCGMWTARRKAVFBJOAUKVHKJRDWZOHTIZWPXVGIAZPYSEGYZPUWQSMVHSBCZEPBKUQRFPLFBLDJJLMVRJYEK");
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("SWSRJOYLGNOBRIVDBRZIHXDGZQTCVWKASJWFRQUBWZNUMILRQAGDENESBFOCSBSJOFZUCBRBTVMEHNICMPASCPSGKG");
    tmp_tmp_tmp_msg_0_2_0.visibility.assign("DKZSQLNXJO");
    tmp_tmp_tmp_msg_0_2_0.scope.assign("HNGDMDYOUMQPVBDMZPQUCANGMYZSISNNENYUGHDVXRRLOXIVMEAOUCJBIJRMKRWYUIKXNCHYIFESTZLSJETMPJZLKSGJELRLLEVAIGWOHDXIWSTGAUDIJVOFBCNKYQQHDEWTJCKWQDNPTZVAHKXWBXAFZQGPQKGBVFV");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.x = 0.3137827864957041;
    tmp_tmp_msg_0_3.y = 0.6620462771110718;
    tmp_tmp_msg_0_3.z = 0.11538623248109436;
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
    msg.setTimeStamp(0.02403737514648352);
    msg.setSource(51307U);
    msg.setSourceEntity(104U);
    msg.setDestination(29090U);
    msg.setDestinationEntity(96U);
    msg.command = 241U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GDVADUSLUINZWIMXJDAUSECBCUROANHSYKIPEMTRRQTHNGM");
    tmp_msg_0.description.assign("EALCZGCJMIVMKKEKBQHRVXSEDZRWJGSDLYJRT");
    tmp_msg_0.vnamespace.assign("FCJESTDSZPDIIXOUHKHYAVWWDYDMQBSHUEKTJCUVXLPHNVWNEKCZGEAUZZJOGKJMMCJZMQWPQAIEKTSXAEGCYGLRFFZCYIWBFBIJBLURQBWMLGTGTXPEXRBGNYUIOSERLYWOQVMXIIFMLHAHFBDCFJQUYVYNNQZVYLCMKPMNUGADPOTQSZXXRMWTAJISRHNTAAYFABUORVBVLGDOSRPPRFGXHWDKZFNLDWQTVXPJNETOC");
    tmp_msg_0.start_man_id.assign("CMCTMKQVPPRHTGKISNGGGYASUZZSNRBSJJORHUHQEBDWRCMNHUVDEHONXJNI");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SNFEFFWHBYSUCFPVWVXWTRGLDDONVJEQOFMOSLKQVMQMUTLPBKNAGKCKUKEYVNIGPJXBEJUPSMIYHUMTRQAFYBXAOGQUCDDTKHPBAGCHQDRNSZARAKJYQMXFRTNXROYSHITGLCJPRKIATJCVEGZYNFBDTOULEKOM");
    tmp_tmp_msg_0_0.dest_man.assign("FNAPBZCWHSSFMTPLLOKTGHWRGWJUBOISYLZVHLUMRTZMBOXGHVWEELJKCBEQYVCXKSPBZGQOILTIXUFNYQYXZPQCRFTGPNSKOWJEIFAIYVSKRHAAYEXLUUOPSRNSHMMDUBLGEKOZUCUZJOKIDDVBUCDOETCGQDNPZNAIBHMTGQMRSHNNVEFVXRFIXPFJUAVKDJRTXWOQCVMCJMEPKYKWDZTFATSYDIWB");
    tmp_tmp_msg_0_0.conditions.assign("IMGFKXYETRFALKWECSYIKAMUFNSGCDYTOMKYPHWBIGDSUSZFYFWFOOQZZRRLZMNYGHRQYTIXGJDSSFLDBMVCUCGJAULWEXPMRPDCRKPVHACQMXVTVJPAJDNEHGIBMKIPPFTKAUVVOUEEOEXTJIUCYE");
    IMC::Current tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.9075033616102202;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TCPStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 7795U;
    tmp_tmp_msg_0_1.status = 114U;
    tmp_tmp_msg_0_1.info.assign("SWTAFKQMGDHIPVOLUBFEOELKRXJKQVERRNZGFXROSSFGGIMDFCMDAMQMWAYUKVXIRUBUTTOQSTHVJRCRMVZYISKRQCAHTDDMIEPUOBGLJCKDDGELZVPNAUKLBHNACHZXRQFCYMQEAXESIKGDBHILYFQPPBJWNCEBNXCJPAZQSLPBOHTXTTQICEZXHPFJJGWNYZJXZSKJMVO");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 58U;
    tmp_tmp_msg_0_2.flags = 189U;
    tmp_tmp_msg_0_2.description.assign("LFTJPGJKMBNVIYLQOQJTQQKRXLZJIMKTMAKJVQUWWMFTTHVCMFHGWLHPQBTGPVJPEFDEOYFESIWUYVSBCVNNYOUBUZSDPXGMFLJPAYWCRIALURTWHKWDRIMIUCBWAOEPEDGHSANLDDORKZZCJX");
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
    msg.setTimeStamp(0.6767411305494013);
    msg.setSource(38230U);
    msg.setSourceEntity(1U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(176U);
    msg.state = 61U;
    msg.plan_id.assign("XAFONSWGVNZKNBDJUSRULLVTDOVCWYKAJDXHIYAVZFAUNXUKCZCJEDQEDNDVOXZNEVXSUFXEPKRHJMASPRHWAMYMXBHIFSGQCJPPXBGIWQPFIORQLEBMXBPMCJRGCCDFFHTBUVGPTGHNWYKMKKORJSCQWEQZBZMHONXMLDYTUEWHVVPZUFJWTNUOAEYDTIRGRUWZKBIZLBAABLMTQSGISOCILDIQGRPNA");
    msg.comm_level = 13U;

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
    msg.setTimeStamp(0.8169545364070631);
    msg.setSource(5295U);
    msg.setSourceEntity(4U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(52U);
    msg.state = 68U;
    msg.plan_id.assign("IAAHEVHMSJCTQQYVKDHTHYRVJIYLVRPNCRJKYFABQWGCKWJYRACJIDHVHOWPCXOVFRIDQJVUEYPLWGTIHDMBQKWVNFTKKCOFZBGBSPUROUVBULKENGFGZIOJLCW");
    msg.comm_level = 147U;

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
    msg.setTimeStamp(0.5801477053620444);
    msg.setSource(48259U);
    msg.setSourceEntity(51U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(161U);
    msg.state = 39U;
    msg.plan_id.assign("SCXBAZTNPFENMFANZSYAXESGFUHRNZRTPQMNESNXKSSAOWCEABUZLURKGOBVWFHICYYQTWOMFERWPGKHQRPDQ");
    msg.comm_level = 1U;

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
    msg.setTimeStamp(0.3901475286353143);
    msg.setSource(34611U);
    msg.setSourceEntity(15U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(254U);
    msg.type = 165U;
    msg.op = 127U;
    msg.request_id = 17880U;
    msg.plan_id.assign("QKTYXICGFRCHVFAZXBBNQPZPLUJTNCHLYOJRLGHHJQZWXTPKXCMJEBUYFLZDEDOKIMSZHISVRFYPVFCYKWXWTAWRYGQQULHWDDLANREMMVIXZKTMMHXNOCPHAUBQUBZQLSWUGCRNKKJJGMWASOGNEBAQBVODQDC");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("VGBDDHVSEEAXDEZCKNBWTLOMNQCZHBQYULFVQHHTHONAJKLWEOT");
    tmp_msg_0.op = 165U;
    tmp_msg_0.lat = 0.12082880518476025;
    tmp_msg_0.lon = 0.12997840070099242;
    tmp_msg_0.height = 0.9960196206928854;
    tmp_msg_0.x = 0.04143172537676609;
    tmp_msg_0.y = 0.002835247348379033;
    tmp_msg_0.z = 0.00795865245420102;
    tmp_msg_0.phi = 0.6511293833262424;
    tmp_msg_0.theta = 0.627262606339668;
    tmp_msg_0.psi = 0.3769079530448185;
    tmp_msg_0.vx = 0.09197166417887193;
    tmp_msg_0.vy = 0.6242852782982543;
    tmp_msg_0.vz = 0.46006914643225594;
    tmp_msg_0.p = 0.09354938162896964;
    tmp_msg_0.q = 0.6669304874952908;
    tmp_msg_0.r = 0.388200867608556;
    tmp_msg_0.svx = 0.05249919487163335;
    tmp_msg_0.svy = 0.05548826090703729;
    tmp_msg_0.svz = 0.6035291667286166;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KKCXHCDGXXIMUEATHFYIRLPQQNOWGYYCFTJFFFYGYKTDWTUUELIOPZDRFVCEBIBYAB");

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
    msg.setTimeStamp(0.531838988056029);
    msg.setSource(19484U);
    msg.setSourceEntity(252U);
    msg.setDestination(40884U);
    msg.setDestinationEntity(161U);
    msg.type = 32U;
    msg.op = 169U;
    msg.request_id = 18563U;
    msg.plan_id.assign("WGEYFJTSBHKSSBKVTJKWNOGXADDUPFRMARBHWXEJGXELIWYAUQGJRIPDCFGGIQPIVDBZCCNETMVODTEJIOCLFXURANNVCLGGNQFTLQSDZKURDNKHIUVOLMAPZVMMJSIPYOQWTXBEONHEXLRRJSIEWWZEHFMFCFPQSVKUKAWBRYHAYIZUOTMVYOHMQCAFXNZMTMQFLXSWYJAJPPUQAGSX");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("HGKRVEOIXKXRAFLGOODFTCOTDVHKGYYHGCUQXUBIUOPOIZIKEFSAZZPCPYLVUMVWVNZLCRKWTEFRXPBVQPEYJGLNQQLIGTHFDSSJARNBJZCYPBKMQBBFVVHTRMQWHBYMJJIAIPFYEWMTLPRYRDMZWNTIGNOUTGSJYBWEHSIQHUAECXHWUOBPDADKCCCRESXNJONGMSMDSZDJXAUASVAZFKEKCOTRIQMNLXTWJV");
    tmp_msg_0.text.assign("WHNXLYPBULWBNEHTDMUXVLQIWODVNERKQCVCKNGFMXZCTRAQZPJNMRYMFQLHYJCGQMXUFZJDFDMHIBPFCSX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZCLPVIMETFDOXOVHNEUBYSLJNMKCRBSWEIACWWOIQID");

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
    msg.setTimeStamp(0.7270653188759114);
    msg.setSource(18468U);
    msg.setSourceEntity(42U);
    msg.setDestination(57045U);
    msg.setDestinationEntity(254U);
    msg.type = 247U;
    msg.op = 197U;
    msg.request_id = 1434U;
    msg.plan_id.assign("SWHZVTSADIORUWJFTUFBIZYCYDSNLXIODCNNGEJWCQSLQMZKYKSAYYLKEIHOHTTNAZPGPJUBXKLKAFROBIFQEJFVWGREPRYCMPTXUBCQMJNOVXOAMMJMCGAXXZFEFFZGVRUEWVIPJEJDXEAISOZUWXGBSJQGKNLWKHZQUVVPDNPQCDMBVERGKPTQZMXHWHRRTCECSYBICUPOYXDLTZBQ");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.3443378631368168;
    tmp_msg_0.i = 0.9363881570043838;
    tmp_msg_0.d = 0.33896871581267574;
    tmp_msg_0.a = 0.2400510958049894;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NYCKVLXDLJYKHJSULPYDTBAKCVJXYXTJRMQNFZIPPOSCCNKVZIWELYWQNQBUTDZTXOQXHOMCBYFHGMXRDUWSEEFDBOSPEWSZOMKITAYOIEIAAPUTUDDEFMGAWDQJGAUUMNWIBVSAGJVCPTSSNYSVLLILCOKPFFDRNRZMQIGBZXDNFTGOHUJFQLPZEGJKTVAU");

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
    msg.setTimeStamp(0.1571814030799925);
    msg.setSource(16844U);
    msg.setSourceEntity(226U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 25890U;
    msg.plan_size = 2779574247U;
    msg.change_time = 0.21283231257554103;
    msg.change_sid = 59299U;
    msg.change_sname.assign("NYPUUUFBTTODHBLEVCHKLLTSSKMXRFGMBLHPOUIMJTHFZSVIIKSPQGRYKEYILIASWYQJQBFVGMJEDMPQPEOWVKGPAIDKZAMNAFVCWLFZJNBNQVECLWCYTJWNOPNZWAABSMKUGIZQMHJMJFOKZ");
    const signed char tmp_msg_0[] = {93, -18, -58, -119, -60, -16, -21, 94, 67, -68, 125, -65, 22, 63, 35, 20, -18, -67, -4, 14, -2, -47, -70, -102, 88, 45, 73, -100, -114, 46, 118, -16, -99, -41, 75, -1, -120, -93, -75, 75, -72, 115, -101, -118, 79, 77, -43, -93, -85, -57, -47, -86, 91, 100, -59, 121, -60, 113, -116, 28, 83, 90, -30, 56, -48, 64, 10, 68, -96, 7, 63, 103, -52, 73, -114, 108, 101, -35, 41, 43, 60, -94, -127, 41, 11, 108, -78, 40, -57, -101, 89, -1, -83, -98, -81, -26, -112, 122, -57, 49, -21, -71, -26, 62, -38, -25, -7, 116, -102, 12, -71, -115, 112, -4, 9, 46, -30, 13, 94, -34, 49, 51, 7, -33, 69, 20, -100, -65, 118, -91, -81, 23, -9, 64, -76, 52, -106, 68, -96, -108, -94, 19, 92, -81, -95, 36, 28, 67, -89, -54, -63, 32, 103, -32, -56, -23, -78, 92, 45, -30, -23, -68, 44, -74, 104, -40};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XZLMEZLNQUTSCWYICAQTFMAWTDWGBYKJGSVLVURTFPJFPLBDXKFYDRMFCBUNELNPMPYJVPSWSUTGTNEOOLHNCZUBYDZMAVXTOYCJKLOMVTHIDIELSQOIPHOWRSEBUSGAJLUZZJVEOQRSRFDYARUXBQA");
    tmp_msg_1.plan_size = 37513U;
    tmp_msg_1.change_time = 0.8042192043342613;
    tmp_msg_1.change_sid = 34435U;
    tmp_msg_1.change_sname.assign("FSHLKVEQVNOCSTPSFFMMPPNRGVJEOLRNBWCAUYYVOPHGCOMVACJRIQLLEJWTKRNRJWWKQDBRLUEDDGIHEMWVIXJYWJPDBDCBZNXHMBLSHHYDUGOCFJQUXPHYUUDZMFZOPIAKCM");
    const signed char tmp_tmp_msg_1_0[] = {72, -78, -105, -54, -82, 98, -95, -66, -58, -26, -4, 74, -2, 84, 36, -103, -77, 4, 95, 54, 15, -82, 121, 82, -65, 54, -21, 125, 97, -115, 30, 57, 114, -53, -21, -67, 78, 16, 10, 53, -45, -108, 30, 13, 126, 120, 23, 124, -44, -116, -30, -56, 26, 63, 36, -54, 22, 78, -117, 87, 34, -7, 52, 44, -54, -63, -29, 37, -117, 71, -7, 80, 125, -40, 103, 114, 53, 53, 30, -105, -54, -69, -125, -31, 15, -114, -126, 90, -17, -84, 116, 31, 6, -53, -119, -113, -6, 53, -81, -59, -108, -105, 103, 64, -66, -49, -61, -53, 108, -93, 91, -86, -57, -127, -13, 48, 42, 30, 8, -35, 5, 90, -108, -109, -55, 73, 19, 37, -48, -106, -60, -105, -112, -61, 115, 1, 64, -82, 29, 72, 93, 43, -23, -77, 82, 40, 44, -14, 55, 46, -111, -46, 88, 102, 114, -113, 90, 69, 121, -12, 25, -44, 33, 25, 126, 70, -47, -60, -23, -125, 40, 87, 78, -10, 117, 61, -11, -10, -17, -111, 11, -82, -81, -80, 36, -97, -33, -98, -14, 52, -38, -20, 83, 54, 77, -49, 90, -71, -98, 53, -33, -99, 61, -54, -104, -42, -103, -109, 21, 119, -55, -24, 75, -112, -127, -76, -17, 65, 82, -101, -47, 2, 74, 0, -80, 28, -25, -9, 83, -128, 33, 111, -102, 66, 62, 98, 125, 99, 115, -41, -109, -101, 56, -61, 29, 25, 122, 92, -23, 55, 7};
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
    msg.setTimeStamp(0.551962494089561);
    msg.setSource(12565U);
    msg.setSourceEntity(150U);
    msg.setDestination(34194U);
    msg.setDestinationEntity(228U);
    msg.plan_count = 33584U;
    msg.plan_size = 78755532U;
    msg.change_time = 0.2080049715945016;
    msg.change_sid = 51046U;
    msg.change_sname.assign("FWZYCGYVJXYVUIFMIFFNUEZLIRVRNOWYTARJXNHSJUIOTKTFMXSDXJUEYXUJABVCOQARATWXLEGZHZWPHJDGAKWEPOLVODIWJASMCUDEVLENDPSKKQPMLQTQUDCDCMAKCGBORSDYZKUMGBAJRZHRSFGCLMIKWGHJCDYNIRBFEXHQ");
    const signed char tmp_msg_0[] = {-74, 37, -17, -20, 37, 116, 31, -59, -29, -6, 78, -76, -12, -44, -58, -93, 28, 122, 111, 102, 86, 116, -58, 62, 23, 40, -111, 21, 83, 41, -111, -55, 100, 50, 90, -72, -63, 59, -106, -27, -118, -100, 30, 41, 40, -48, 66, 55, 115, -73, -111, 86, 80, -121, 35, 82, -98, -128, -45, 106, -99, -45, 30, 46, -103, -35, 60, -17, 4, 22, 33, -89, 63, -5, 67, -85, -118, -54, -35, -30, 108, 125, 56, 62, -14, -109, -93, -126, 88, -28, -78, 59, -26, 67, 104, 15, 56, -2, -121, -103, 103, -4, -19, 36, -9, -26, -99, -116, -64, -40, 75, 99, -123, -87, -81, 33, 61, 99, -111, 126, -93, 47, 83, -113, 43, 97, -8, 45, -6, -91, -85, -53, -68, -10, -94, -72, -122, -40, -33, 78, -122, 46, -114, 59, 2, -56, -53, 23, 59, 75, 106, 126, -86, 24, -110, 92, 94, 126, 66, 112, -3, -22, 95, -78, -61, 73, 22, -109, 15, -16, 34, 117, 78, -87, -61, 30, -87, 3, 48, 85, -22, -35, 75, -45, 18, -39, 63, 17, -104, 7, 121, 105, -54, 13, 72, 110, -1, 113, 54, -94, -121, -35, -29, -45, -18, -39, 39, 0, 40, -31, 113, -86, -11, -83, 118, 36, -30, -74, 81, -5, -90, 8, -111, 6, 79, -87, -41, 52, 16, -93, -23, -30, 56, -96, 113, -70, 28, -73, 80, 9, -23, 85, 87, -94, 34, -18, -110, 40, 24, 20, -1, -96, 112};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ITNBNVSGMBCNQQWDSENYWZKTCQWDOKHISTQGRYTAJWELFIBOAWHZBHENDLOWYZEZXAEKIKCFTMGZFUZCJRDDACDVSRERBNLXJQSBYJXCFDIQXVPLKZLGYVGXCZJGLTPPKQMABUSUUHMLMHGDPDJQJVPHBJFHEAWVMNNMSZUORTXYHTEFPYRFDUOGAJTANBPWCUXKWCSPFIYXKOUOAXAKVYHRIRLFEEQWULPBIVHOIOTUJCFYQZN");
    tmp_msg_1.plan_size = 13985U;
    tmp_msg_1.change_time = 0.34410767935124076;
    tmp_msg_1.change_sid = 50646U;
    tmp_msg_1.change_sname.assign("JYXCUWXUAFRVAFZLCWUVSGBCBKE");
    const signed char tmp_tmp_msg_1_0[] = {73, 93, -8, -88, -11, 111, 125, -30, 74, 108, 117, -35, 81, -33, -104, -94, 19, 66, 15, -42, 24, -38, -73, -103, -4, 7, 31, -34, -38, 53, 1, 53, 52, -56, 13, -66};
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
    msg.setTimeStamp(0.6917092901585506);
    msg.setSource(7720U);
    msg.setSourceEntity(210U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 18687U;
    msg.plan_size = 1097985467U;
    msg.change_time = 0.882300506628436;
    msg.change_sid = 55806U;
    msg.change_sname.assign("ABGETYNFPQLXGUJSKKJZSFKNNNZVGMKXLBTFOHVCHOWSJRCMKIFUW");
    const signed char tmp_msg_0[] = {-17, -65, 27, -105, 13, -62, -127, -34, -9, 104, -52, -127, -22, -107, 92, -52, -94, 64, -122, -48, 43, 49, 69, 37, 20, -125, -97, 88, -68, 111, 12, 19, -127, 49, -95, -109, -53, 101, -54, 125, 56, 19, -21, 41, 55, -113, 80, 48, -102, 87, -98, -115, -54, -84, -61, -31, -8, -122, 89, -55, 119, 43, -120, -106, -8, 86, -73, -26, 68, -50, -85, 37, -35, -113, 109, 85, -86, 71, 101, 9, 44, 23, -91, 99, -61, 37, 90, -30, -78, -98, 102, -84, 61, 76, 8, 63, -128, -76, 53, -79, -109, 69, -65, -102, 58, 85, 47, -41, -45, 77, 20, -118, 41, 78, 60, -53, 81, -99, -1, -33, 93, 45, -83, -65, 29, -93, 43, 69, -48, -78, -41, -70, -93, 92, 45, 17, 57, 31, -59, -34, -51, -64, -6, -121, 7, 84, -36, -11, 9, 70, 97, -57, -111, 42, 23, -11, -70, -105, 51, 32, -35, 34, 5, 61, 111, 95, -49, -44, -37, 47, 81, -46, -127, -19, 61, 102, 40, -39, -82, 36, 85, -10, -107, 91, 42, -83, -88, 75, -23, 8, 110, -69, -99, 29, 36, 17, -49, -50, -119, -77, -58, 72, -101, -87, -24, 74, -117, -88, 13, 97, -67, 13, 31, 94, 29, -33, 89, -85, 12, 2, 62, -34, 28, -121, -75, -57, -6, -22, 41, -61, -28, 10, 57, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HAZZLUTCPOJYEFOQDLLJSOFLBVHEYVLSEVKIDOXZEICWRWPNJPVMGHRHYSWX");
    tmp_msg_1.plan_size = 62163U;
    tmp_msg_1.change_time = 0.46534118673061897;
    tmp_msg_1.change_sid = 4585U;
    tmp_msg_1.change_sname.assign("NONDZOSSVOJAWBJDWJSOQUYXDARBSLVCUCWHBIHXHBTMJZRUJIUFNBPHOOUSVCIYOEEIFKBNTLCMCYXQQYKPXOPHFWJQLZYRQIMHAANHQJYEMPNUNLYTDPOZESY");
    const signed char tmp_tmp_msg_1_0[] = {34, -104, 52, 119, -94, -125, 76, -3, -21, 10, 122, -35, 108, -10, 78, 50, -89, -10, 86, 56, -70, -3, 48, -12, -102, 119, 73, -77, 95, -87, -20, -49, 46, 4, -1, -30, 63, 54, 29, 100, -8, -125, -25, -35, 9, 93, -37, -14, 121, 101, 126, -55, -70, 34, 32, -45, -83, 39, -127, -111, -2, 35, -90, 104, 58, 23, -45, -20, -91, -102, 102, 72, -105, -126, 56, -63, 104, -119, -103, 123, 13, -50, -106, 47, 36, 116, 14, 101, 17, -123, -120, 58, -118, 114, 94, 120, -10, 48, -19, 122, -95, 69, -29, -18, -8, -28, 100, 111, -36, -92, -66, -67, -71, 0, -82, 63, -35, -45, -52, -7, -125, -87, -93, -113, 119, -103, 37, 33, 110, 106, -79, 35, 84, -13};
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
    msg.setTimeStamp(0.7737907496824366);
    msg.setSource(9357U);
    msg.setSourceEntity(28U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("KREBRUIBUEARPWIGCNWPNM");
    msg.plan_size = 37967U;
    msg.change_time = 0.7590772558955685;
    msg.change_sid = 58552U;
    msg.change_sname.assign("PDQWGHAPEMMVGXGTPBSGQNGSFMBHPADIRAJLHIOXIVRDTTWCFAKKLQDYWNKOVJFHCDLEWRCKTMQYAXDVSXQYVHROBMJTNUJCCZBGYOEGNFHTABRNBRHYNIZEXQULXOLEKCDCSFAUJTKZMOPQNIPYFRTLRRKSWHYMBIQXAGFUCZFCVWKQIIJKVZUAVLZCZZUPBENWAHEDVIJGOVDOSQ");
    const signed char tmp_msg_0[] = {-65, 28, 112, 56, 24, 39, -114, 19, 27, 108, -73, -122, -41, 47, -59, -43, -26, -6, 101, -4, 37, -105, -23, -16, 65, 69, -54, 91, 83, -68, -76, 72, 121, -44, 104, -127, 67, -68, -100, 126, -65, -16, -23, 2, 72, -99, -53, 36, -33, 118, 15, -31, -78, -25, 11, 82, 46, -97, -76, -17, 104, -93, 62, -12, -84, 45, -70, 23, 91, -127, 107, 100, 22, -102, 44, -9, -127, -51, 39, 119, 94, -4, -104, -86, 82, -61, -26, -22, -2, -51, -99, 105, 68, 77, -10, -29, 54, -103, 84, -106, 44, 46, -20, 68, -10, 79, 48, 9, -73, 62, 80, 44, -111, -29, 18, 70, 42, -77, -125, 16, 58, 17, 67, 35, -49, -64, 69, 14, 12, 81, -115, 85, 74, -6, 19, -31, 7, 58, -10, 97, 37, -99, 115, 38, -105, -75, 7, -15, 92, -72, 77, 88, 38, -96, -11, -7, -25, -111, 91, 75, -5, -128, -84, -34, 90, -11, -48, 31, -3, -61, -88, 68, 81, -90, 38, -42, -94, -79, -15, 37, -12, -62, 59, -23, -107, -123, 114, 114, 69, -35, 104, 109, -112, 13, -17, 77, 65, -7, -30, -63, 54, -37, -121, -21, -59, -79, 84, -33, 111, -100, 97, -103, -85, -66};
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
    msg.setTimeStamp(0.25830879346638846);
    msg.setSource(8081U);
    msg.setSourceEntity(185U);
    msg.setDestination(38780U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("UUQJWPLXWBORDWQYRFXITFYAPECAQHEMHDVOCXXMCIEJKVQEGSYSGPNTVCEZWNEALCWALBUQEOODHHYZDOWLUNALCDSKDSXZXBHHXKIBKAOLKLBTWPMKRFNUOTYDQUKLNM");
    msg.plan_size = 26242U;
    msg.change_time = 0.7280930647933213;
    msg.change_sid = 47310U;
    msg.change_sname.assign("UTUWABTEDLFZYYWACCJRSIPZHCMNQNSSMQLVUNCSFXLALJHDJQPNISVAWXXVJVQKRFMJXAGPFURSYKOPZLEZTAWNIGNRHGUTRITCRYLCFGSDYBOIXBVTBOBQIINYKCMBOXXWUKFMOOAEHOBTCZLZAGQJHVPKSBERUK");
    const signed char tmp_msg_0[] = {-74, -119, -119, -82, 119, -19, -62, -122, -25, 8, -42, 113, 14, 110, 38, -4, 26, 55, -82, 62, -8, 29, -7, -87, -93, 22, -9, -105, -96, -24, -50, -113, 119, 4, -94, 6, 63, -35, -29, -122, -103, -52, -17, 12, -52, 24, -63, 95, 110, -43, 66, -121, 93, 9, -11, -53, -16, -93, -80, -29, 107, -32, 7, 52, -102, 99, 31, -114, 108, -46, -67, -70, 36, -60, 124, -80, -78, -96, -12, 31, -88, 85, 26, 83, -95, -52, 73, -37, -76, 18, -39, -125, 93, -90, 14, 119, -103, 88, -90, -116, -92, 90, 107, 107, -35, -99, -46, -36, -62, 42, 70, -88, 107, 23, -67, -14, 68, 3, -104, 115, 41, -15, -91, -72, 63, -32, 109, 42, 30, -71, 82, -112, -60, 120, 65, 108, 57, 68, -18, -109, 96, -50, 95, 19, -121, 19, 25, 44, 36, 24, 41, 2, -18, 101, 32, 87, -35, -68, 80, -119, 53, -64, 40, 124, 107, -20, -68, -43, 10, 45, 55, 81, 105, -59, -1, -40, -51, -38, 5, 31, 45, -43, -123, -7, 2, 107, -80, -109, -57, 110, -63, -117, -6, 52, -34, 89, 87, 43, -55, 15, 119, 100, 1, 69, -68, -24, -53, -94, -82, -28, -85, 77, 83, 28, 24, -110, 61, 50, 28, 70, 45, 33, 73, 74};
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
    msg.setTimeStamp(0.38702480484052526);
    msg.setSource(1663U);
    msg.setSourceEntity(85U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("ISWIBSABOLIEZFOPDIDXPMUDCZVWMCQMXSWOYNZVINLPEOAZQLAQRTOFAUXKJXSXZBYKRVMETVVHYOVSCZYWRAVHGFABBLCBAGRJJSUWAKDNXTCTOYGEYTDRLZNHBLYHTRSGGQPWNZUPVVFQEGORI");
    msg.plan_size = 56334U;
    msg.change_time = 0.42829411464811795;
    msg.change_sid = 22964U;
    msg.change_sname.assign("VPUPRXGOCSOOIDTAUJMKCNMVMJYCMCCJSWWZPSVMFQGZKLPBVIGSUHNCIHFTZFJYLNRCQYHZASEYATKXFBXUIBAHREKMHIPFKIHCYUWUTGEDNMGANZROQFCBJLNZTQTQXAPXGBBADLJRZMGKDAMJEGBJJYXHMXZQEFDBXZVBZAHDDFKWOVFCNQDWPPEXVWSTIOWLETRSGSOREBUKNSQQOQHGLW");
    const signed char tmp_msg_0[] = {118, -67, 7, -27, -47, -107, 39, -61, 74, -5, 20, -97, -10, -75, -14, -32, 22, -77, -18, 6};
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
    msg.setTimeStamp(0.993496918689562);
    msg.setSource(35258U);
    msg.setSourceEntity(56U);
    msg.setDestination(59606U);
    msg.setDestinationEntity(138U);
    msg.type = 40U;
    msg.op = 150U;
    msg.request_id = 2957U;
    msg.plan_id.assign("BYCVWPQRUDKTAWEXYMMHZJLBHYBSWXHFLYHDVXAEOVOPMTFBIGITRSMMQRLVBXLRHZQKUXKYSKIJMEJEIUZNPPLDIHPFCGPFUZBUHPMGWGBVANTFEKGYTPRDAFQUBGNYQRMSKMECOENXNOGNQGXQNZCDIACATBRDQZZAAGHTATVFWLJDAQOLFSCKKJXZLPHNONYXJZFRWUDZWSXDWVRIULEL");
    msg.flags = 33604U;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("WSSDCKNWZTKQOADMCFGVBQNHJFIUNRECZFVMJDXWTOLGLSDXZYBUDKDQAMMBUZYXLTLCODOUHXQNHPWRHROTRWFMKSLRRGAGVHVXIOVWYNHAIZFEGICTLLSYHVYSHSBYUCEVPNVQJIBESOPRWDYJUKSUCBYXVTWAKGBSQBIDWJHAMIPKAPFMLGUFNNZGEZJYPPKEEKLXJGUQRYOJJQAGPINIFFCPXZMOZQAPWRMREKEXECJBHATTTCIZODUV");
    const signed char tmp_tmp_msg_0_0[] = {39, 22, -83, -94, 71, 62, -61, -101, 55, -124, 89, -77, 69, -48, -20, -49, 38, 126, 10, -102, -52, 85, -81, 41, -24, 52, 64, 53, -103, -63, 23, -85, -81, -87, -21, 54, -36, -126, -43, 109, -126, 39, -104, -112, -36, -42, -35, -128, 72, 29, -59, -81, -51, 61, -120, -107, 14, -37, -103, 93, -117, -59, -65, -81, 83, -68, -90, 47, -128, 81, 50, 74, 54, -18, 122, 33, -46, -76, -116, 71, 56, -112, 12, 47, 86, 103, -85, -68, -100, 125, 18, 99, 45, 86, 17, -83, -62, -35, 63, 15, -12, 23, -78, -11, 25, -97, 93, -117, -54, -75, -95, -33, 123, 67, -126, -48, -126, -20, -50, -29, -4, 99, -18, 36, 98, 64, -44, 27, 112, -86, -37, 113, -99, -74, -100, 47, -37, -10, 2, -22, 34, 2, 1, -48, -120, -46, -2, 94, -23, 85, -58, 108, -38, -91, -59, -84, 43};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OXXZWZZWHYVHXJMDAJMNTAAJOFXCSFWQXAPBWTADIUDKWQPROTVIYCQRDUVGTORNCQXHKTQCPMEZEMHAVBBEXGHJJLENKZYVEPHSYRWSHUYFJIGIXROAMDKEUSNFTDGFODQOHRARZCJZSBUUWRMSMXTSBRSILTJGPHUIPJGLYIPYKLKLQVXETOGLDFWBNZEZZMNCVDNGLSLWKYUKKRUFCSTIGIIVPUNDMHPCFWAYBYQMGNPVLE");

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
    msg.setTimeStamp(0.8614115346621588);
    msg.setSource(57298U);
    msg.setSourceEntity(149U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(2U);
    msg.type = 85U;
    msg.op = 215U;
    msg.request_id = 37454U;
    msg.plan_id.assign("DAIJQKLHDPQJNZZHLQEZLAQWNEOWYWMNSNMATOIVLBUWZTLGYGBORSKVQJGVQGEMIJLLCKPUVZGIVCUGAPFREZQAGLCRFMPXKSPXBXDSWCBHMYGCBDDDRTWHYXFJJIUEWMKHTTNZIOIVU");
    msg.flags = 52898U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LMDMJLOYLWSRKCWQAPVQKPBXXQDBFONQPGZQLCLTVESHSEHRIAUEIGOJKGWANYIDXIFGYCEMAYNCKSBEKTZGZOHDUZMUDGOYMHABDUWPVEFDYYPBOWUGXKPSXTQAMTRSUDJQCSIVKUFNVUGRGHBIFBTKVELKUMNNSZATNFLEHPRWHABJWJMADYRYZRCJPKROBAJWOTCXCNWRCGZNEXQZOIXVXF");
    tmp_msg_0.attr_type = 177U;
    tmp_msg_0.min.assign("KIYVWTJQJUHORUBABFYIRWETNRZEXKRTYLSGYSBYDPENCWYKEKDLUHRIHHGNNUXPHKDFQGUPIOBOCDWBVSFOZFZKAB");
    tmp_msg_0.max.assign("XLLNHVZVYMZTSURCGBDMJGNDHBBAOEWXRZIJLHQOYFEWZIHTGMDKQMRHQLISIKMWNDQYYPPGFTHNYLRDXTNAKHSCORKFTZGGJOWXVCMOXRQIADBRSJYFCXWJPESMGPKEAPLVTVKUN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KAPXOKAOZIRVVOEZQPGZADOZJHJVGEGCEXJZRWVZXCRCYFNGVARVOFDWBITEBPWWSWYPRERHHDPGPBAQGFTYLLCCAJKJCBNOMRTGSDQDTIPSFLUJDNY");

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
    msg.setTimeStamp(0.6697447408145591);
    msg.setSource(31681U);
    msg.setSourceEntity(218U);
    msg.setDestination(10054U);
    msg.setDestinationEntity(18U);
    msg.type = 140U;
    msg.op = 0U;
    msg.request_id = 59896U;
    msg.plan_id.assign("ONTNMRPARPWFAROAPQOLUZCHUZPQPKHAGMFZSRDZADXDUBMENYCWNWSTSYGSIFOIFNNUDBCJSQDVNEVNKRYCXEAJT");
    msg.flags = 30653U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("DYAWACJLRXCTUOKYKFBLOUSTCAJIQUDVSGRPJHUOWLOKSICSPQQMARLCNEZVRHEHQGHVMPWUCFXHGMSVXIJTBOUYPDMUIYY");
    tmp_msg_0.reference_frame = 150U;
    tmp_msg_0.custom.assign("EBHMAGNQQPAXTFBHHWTZTKUIUJAWFEITGIGGINPNJFDTZBIGGJWCXZFDHEBSSQJSGHJVJSYTVMALSTMTLYWCKLRIRXMOUVVFFZGQEWQJHSLELCVHZORXOUQNIXDNEALDOAZQVMHATAVSQIRARCJKYPIAPPZDNCDJVKCOPDS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CQGOVQHTOXAAIRGVZRMWTQXOQFQZIQTSJHVJCUNYNXYNKLALITWWMUBZVBDTYMWXZZELHTLJIFOTXYAVGHDIRRFJQOJULPMZPFLXKADCIOYOESLAGEHBHTZIFFDAECEFSHYUNBUMMIDAPKUXKOGUHXHMJVSDDWQGZYEVJUPDPSEMUTKGMYYIBGJAOSRPAECKWYCMRFENKRVXZB");

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
    msg.setTimeStamp(0.09046624709361384);
    msg.setSource(56873U);
    msg.setSourceEntity(93U);
    msg.setDestination(60894U);
    msg.setDestinationEntity(176U);
    msg.state = 141U;
    msg.plan_id.assign("EFFEAQXYWJEDMLFGCPPSBYCXRUASOJWSOHMUJUTVKFSMCQRUYRHAUBHRFSUQZTVJXEVGTTUTZVPHZNLSSOFQSTZDQMQNPEBCUITWGNWTVQLFJEKXPGGWDIRFZOCAIARKIQIBNSONEJKDAXBABNGNOZPBMWNWLOECMLXAONVIYWVKGYDVFCOSICUYWYPKQGPPARKC");
    msg.plan_eta = -891445056;
    msg.plan_progress = 0.8536573886059646;
    msg.man_id.assign("AYMMDLGNHHYFJKNQVUQBMPTDNVNERCZNFWWYCBZJXUDIXOIMLVBUBFZTOTVTQMHCPVOA");
    msg.man_type = 55882U;
    msg.man_eta = 1311922150;
    msg.last_outcome = 157U;

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
    msg.setTimeStamp(0.5241378215898423);
    msg.setSource(34321U);
    msg.setSourceEntity(61U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(154U);
    msg.state = 155U;
    msg.plan_id.assign("BCTLJKDWRZQGAPSYVYZTXQDECRCLRUXQBLSFFGOKGXMHPRXKUCNXEWWKSCJDLWBJWYQHBYVEMFVDK");
    msg.plan_eta = -249421254;
    msg.plan_progress = 0.08096423690440369;
    msg.man_id.assign("FLRSAQWITLMBSVLDAAWJZTPEMVCOMNCDNGROGREFFOYNIPWPDGITZEWJOBXYUINJSXTQBSOLUSYESKHKGMXDJKJZDABGMSDEJYBPCYUPDVTWDJHRTYOUQVRQYCBCYZBNXIGTPSQHWAUQLCEHUWGECIXMVAXPMKSVXZXSMHUAFNKOZCTVBLDMCRLHEYQAKATZBMUHZOPHFRFOEIKDPGTWZJWFUXLYIF");
    msg.man_type = 55629U;
    msg.man_eta = 1703375139;
    msg.last_outcome = 44U;

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
    msg.setTimeStamp(0.17438797773232018);
    msg.setSource(29364U);
    msg.setSourceEntity(99U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(178U);
    msg.state = 33U;
    msg.plan_id.assign("NXFYTKAMRXEDYSMNCBRIRWZIUQHHAMXVPMBFCZXIHIRZQPUYFVZVVELOKHWTRACUEFQMTRTOKLTPNDGPBZQMOSAZDWKYHEMPRMKUEDCNUUQ");
    msg.plan_eta = -523040133;
    msg.plan_progress = 0.8645592666181128;
    msg.man_id.assign("PRDIWNEMPEOYNKBKJBLBAGLYORUQBGPUOSITZXVETEKUGQDXTTFEPZJCNCSOKZXBAOADCQ");
    msg.man_type = 23835U;
    msg.man_eta = -1727430299;
    msg.last_outcome = 238U;

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
    msg.setTimeStamp(0.7483176903378905);
    msg.setSource(34905U);
    msg.setSourceEntity(76U);
    msg.setDestination(10114U);
    msg.setDestinationEntity(200U);
    msg.name.assign("WNRZPGTTDZJEKFVWRKXKKDNOYOUIFBV");
    msg.value.assign("TWADMMQRSQCRVJOWXIWBAINUKCQSRMDWDUYAIJTUZHGEJIZXLUOPWQQJEKZPOLEMEAPWDQUYUWMPXUCGIEHFBVSDPOALIEPPZBVQEBAKRRCKOFBCUIDWSZIHUHILRJSSXVGKGBYQTGTPENLCTZPQLUNFNZIOFJRNSOGKNHYVW");
    msg.type = 204U;
    msg.access = 234U;

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
    msg.setTimeStamp(0.0763192267604823);
    msg.setSource(23770U);
    msg.setSourceEntity(56U);
    msg.setDestination(4012U);
    msg.setDestinationEntity(85U);
    msg.name.assign("HVKTIQSODRKLGDTIB");
    msg.value.assign("YPJKZABATNWBCMUQURHKSOGTSBMCXATEISZQJGVFATVWMHYNXFFDWNGHILOYOEHZRWRBDZFUHPYIGMUEUNWVAYGUIDBNMQCOZSVSDEOABMLQWDAQDK");
    msg.type = 43U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.4856596418158138);
    msg.setSource(34153U);
    msg.setSourceEntity(80U);
    msg.setDestination(7619U);
    msg.setDestinationEntity(119U);
    msg.name.assign("LSZMFXIQFGMSQHAIRWNTUQNBZCPDHOZYUGHKDDUTUEKAEELUENSKNXSTVYMICVISHLWCWYRZIMDWBYWJFWMFOJBKMDOIKZDLFGGTAGREQKJYRAGNYPIRSPDJWBMQXVJZCPLNBANHKJWAMBNHEXBZVEPXALETTRNJIUDHSPQQPQLKHXVWJJFORFVMALBTTFRJEXTOGHUVSOGCZKYOEVVWPCCKXXDZROFPUACTQOXQYUOFMULIHPNADGYCSRBYBV");
    msg.value.assign("MTCWQUTRJDCXVKNDBHIOQHCPULXR");
    msg.type = 118U;
    msg.access = 168U;

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
    msg.setTimeStamp(0.11224080905221334);
    msg.setSource(33024U);
    msg.setSourceEntity(118U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(25U);
    msg.cmd = 43U;
    msg.op = 115U;
    msg.plan_id.assign("JXNNTGWKFZJXKYAXCWHYVBGCMTCJYPISFDKPMVPVGYOZNZNQQREHRFYNGRKQSKLACTHDMUBZYERLRTZOZMPFJHHGWLPAMNXUXWAOFLVUJOCBTAKADVIUDBSHZOKTHPUDRKMQTBWWLXLCD");
    msg.params.assign("GLIZQEXNGNANSCBYWBFHESSZUGMWGTXONCUHEAPAVJTFFZPUTGAMNNMFMKKYDJSCDKI");

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
    msg.setTimeStamp(0.25640719821802327);
    msg.setSource(660U);
    msg.setSourceEntity(82U);
    msg.setDestination(60756U);
    msg.setDestinationEntity(49U);
    msg.cmd = 242U;
    msg.op = 35U;
    msg.plan_id.assign("DHKZVMNCEYIJVAWXOMGUYGHQMORHTJZMEOSMZDVPVECPFQBDWFBBSPGMUASDHKJNXPJNYZQBIVLUTHREDMRSLFPACTTSHKGANPKMQEAJANFNNRLZGQXEWVTBSKKOTGRDPBTXURQCIUCZXIGNYQOFKYNFPUUXAJKDCWOQOWJRVEYJMLCWKGKRZELWWHPLCAHIYZSMOLVTRBFBLRFYXUFQCDIY");
    msg.params.assign("BUCRDTCXUPXVKGARJMAOBGQOKHUDKVLVHZBYRIAWEFYSQQSTIKUULUDVZSXYOWFYS");

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
    msg.setTimeStamp(0.1390241247547287);
    msg.setSource(38140U);
    msg.setSourceEntity(235U);
    msg.setDestination(24287U);
    msg.setDestinationEntity(195U);
    msg.cmd = 129U;
    msg.op = 178U;
    msg.plan_id.assign("TSZMFROXHDNYDAKXHWRXNRPCBQNMKWIAVUNVFVHWHDGLSZLBPUDULVXUEYJAEEQKBRATJYWGEOGDJBGKJBQFWPPOEMBPQLLBXDLMDOJMUADMTXUBHWHIUGUJTXNBZNZHQALLXUSTJFZOEYGFFALCWRWQTFKKKCINEQQZY");
    msg.params.assign("CUIAJOMLGXHRORRAPMSYLGWQUQBSWUBAKPHOPOKMZAGHMYICTLUGHVLDUSW");

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
    msg.setTimeStamp(0.04797966141209109);
    msg.setSource(48937U);
    msg.setSourceEntity(43U);
    msg.setDestination(19308U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("XDQSTWFCWDAEADCLYMVMXIJQLWQPQPPBOCTQVWXJPARCJZNUSWSJONVYKKKFASKRMIVHBDOPHWRKUCXEUMNQIIBCXHGGBBKUOEJFJVNCKEDSJNKBOVWXXZYFOESFVUMZLHBWYXQGAIURFTETUANGTOAYPNFFTIDZARKAJISRYPCMWMAHQUPLUQLNOTIGGPGGZMBPXLGUW");
    msg.op = 33U;
    msg.lat = 0.19916426887475036;
    msg.lon = 0.19432376481217817;
    msg.height = 0.015774418062070916;
    msg.x = 0.9723841542574958;
    msg.y = 0.8543510376409031;
    msg.z = 0.798239031041578;
    msg.phi = 0.52779594714301;
    msg.theta = 0.21045157283376092;
    msg.psi = 0.8640512675985605;
    msg.vx = 0.4269088647876291;
    msg.vy = 0.5463981355998736;
    msg.vz = 0.40772186843122604;
    msg.p = 0.03675326809651591;
    msg.q = 0.2233595663845922;
    msg.r = 0.7723462372183093;
    msg.svx = 0.7378875784557754;
    msg.svy = 0.1675401986592724;
    msg.svz = 0.2564750310176278;

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
    msg.setTimeStamp(0.8015184867191794);
    msg.setSource(16903U);
    msg.setSourceEntity(63U);
    msg.setDestination(7367U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("RHIXDTZGOLTNKMDJTZQVPES");
    msg.op = 167U;
    msg.lat = 0.4584891286003542;
    msg.lon = 0.7127740749582809;
    msg.height = 0.3240837142560612;
    msg.x = 0.002977283147358123;
    msg.y = 0.7112554325033656;
    msg.z = 0.9124787663761852;
    msg.phi = 0.9564364300840688;
    msg.theta = 0.02599211847055727;
    msg.psi = 0.23545857772219747;
    msg.vx = 0.8838135886951024;
    msg.vy = 0.23018219751239644;
    msg.vz = 0.8081697382206804;
    msg.p = 0.8841393867998706;
    msg.q = 0.7057514159588099;
    msg.r = 0.2892207431279876;
    msg.svx = 0.35867033497207057;
    msg.svy = 0.02321161284729034;
    msg.svz = 0.7464400541680006;

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
    msg.setTimeStamp(0.38560320330224773);
    msg.setSource(33779U);
    msg.setSourceEntity(116U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("CVFDHYHVHKYQEFWAOGYQNPFEHLEMAKBATGKCXCQAFPJUZWZZSWNDJOJHMZSJGNBBINTTMABWCXJKUVYDYPJEIVTZIXEJFXYMOEULOKLDFDTAEVICTZQBVBSUDIPFMXKILGRQSZEUVULSXVSDUWNRPAPRAJVWGOKBOONRSZHIIKYQMLMRQGEOXGTXLDWSVEMCUYPGLHFWFHNIRPNURKRTLPQZGNOZCIYTRBKAYMS");
    msg.op = 97U;
    msg.lat = 0.004613021638375181;
    msg.lon = 0.7147366212277003;
    msg.height = 0.11287679540096052;
    msg.x = 0.5782266358724171;
    msg.y = 0.5686036877235559;
    msg.z = 0.7275568783979319;
    msg.phi = 0.586803287747604;
    msg.theta = 0.3070211520259296;
    msg.psi = 0.42554060829921736;
    msg.vx = 0.6947687027995687;
    msg.vy = 0.4004851141372969;
    msg.vz = 0.8665213051161725;
    msg.p = 0.8754014064042565;
    msg.q = 0.15167436770019527;
    msg.r = 0.07979035829097503;
    msg.svx = 0.7708350678909998;
    msg.svy = 0.06316827517432433;
    msg.svz = 0.28900469646009674;

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
    msg.setTimeStamp(0.49770831779898395);
    msg.setSource(5293U);
    msg.setSourceEntity(93U);
    msg.setDestination(31044U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("HANRPCDSLUBTQWUAZLTUSYVETKPPZGOHPLYLEOCBRNUGXYRMRGPQJOFYXLOUYHTIAUJQTTHSBQSKHPOMWCNLTUXHSIIXDJLEFXZYVDZORDBYXIBGYWMDGAKZXAQYEMNDQAIDKCAZMVYKWVTAEOEFUBRIBGCGPHGVFKVWJNJNFIWDIDQUTCVCSLJNXJVQZPBNIFWJQJVRFPCWWNRMQAPFOMEHHCLOSFFVZSHXSMOEZNKUCZMTKKMSD");
    msg.type = 133U;
    msg.properties = 66U;
    msg.durations.assign("FPJKMFIWPYTQEFLIGIRHTAJMWGPXCJEEAOYUTFDNDEDHTZWTYQOYSECZQRIFVQVYROCDYXVBPACAKNZVXDWOIGEHOYJSLAULMFFBSWKQKTGZSZRANQQGAHUWZBTZNCXRGBWWMTHRGVNEDPNNSIBSGPVSDLPHXQACNZMMUIMVUROBCBHMKKSKIKODLBXLJXYIUSLNCJDPVITKWEJUDGBOVS");
    msg.distances.assign("JAZOSLHCJVZDXKNLVCSXYURYEAPNTWJPSKSUMIHVEIWHPRRYBSMFUBVQUQWGOKUNKBFLEYIGMKIXUXZGBGTRCRJMCGMBSSNTVQRAOLBDXLGPANUXEURRKCPHFIOVGRTDAQDMXANWIOWJWAEAJIZTEGYHTEAWHFZWTTQNJAHSFBOCQCZMVKVDVLCIKDFFEYPXQJDLZYDYBHTWZRZUKN");
    msg.actions.assign("PTHJLPTRUZOANCUCPZXSUATIVAIWNSCAXBFLICIVXHVSEXHTUFWJQZRFSUVRZWBGQYKEGSDFZOGBYAHZGYKWUZXYXBHAMOYBQFFXIDOFLCYQIGFQDOMSNHQGSCJN");
    msg.fuel.assign("PVSQKBZLXGNGFHAPGHMTSXVCVTRXCYLKYTXPGOVBYYFNCPYADXRVEMCEHJRITLIIQRSBZKNJZFDJSHRNRMOV");

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
    msg.setTimeStamp(0.9578355014684752);
    msg.setSource(33827U);
    msg.setSourceEntity(108U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("DYITQGUMLOSAYFIZMTVNQJNOMLLJWAAQVUOXAVFYKQHHCLPIUJJZWAUDQMBRGHWGKEPDQCIBVARHAZWYCSLXSAEAPJCKTIXBSCXZOXQSNYFFRVYNOPLVLEMMRCPHROFGESOCGODKRTMUUILPDFRJVJKHRSHBUXMQQFWOCKDZZNRNFNEAWOPBDSIXTIYWCVVEFPHH");
    msg.type = 242U;
    msg.properties = 26U;
    msg.durations.assign("VSEOGVCBTPCTJKZBCQYXJYFWALLD");
    msg.distances.assign("GVOZKGZEBTXNYGUWUKSIVFFHPUOUJDCEZRTQRXALUOLXBLEDYVHRBVXNWRABGUVGRSHFDWRTZQCANPBTDUSMNZMDEIKMOTXIOWYQNTAPPEEIESZQFXMQPZEZFIIHFSW");
    msg.actions.assign("GKQCZKJYPPBEUDMYMIFHYFUJEMEXFLCSEMZNDHIETRLNVUHNJOTFGUTLMOALAVSITSWXZVVGXRTYYCSYGQBVZESSNOLRQIKUQDFRQICQWDXDWXFTPYTKMFVVYRCWRDJLQJRXJBJNCXYHPEXLATQPJNODSFIKWJTODJKPWOZIBCBGIL");
    msg.fuel.assign("HCTNRTYNJKLRVBSGFTGOLRIDZPXWHSNCPJHZMQMQOBEUVHTPZKDNLGXECVQLSRLPPHVVNWDQHDSQOFNBYFJOTPULBFMWLBHKJXZEYLSSYHIZIDOFAUVPPIIRPTGILXGZWYTKIKZXWCFYZCEQVD");

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
    msg.setTimeStamp(0.3255917558649598);
    msg.setSource(43302U);
    msg.setSourceEntity(117U);
    msg.setDestination(41531U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("HQLPEXJPKHIBCIEXIFHZVZKEYJKFRNLDYDALPVVSYEPNUWHCROQYUDVOKFPJZCNGBXMMLVWOXNCUUPBDRZBCEQOGMOWQWDAIVSGZGONGTMTCOYAGVQJTBUKUSJSRAPONXRCKFEMFBDXWPXUUN");
    msg.type = 106U;
    msg.properties = 10U;
    msg.durations.assign("SRMCYZVAXIKTVYSGHMLLWOOXDDFRYRHGAOVZRBKVITQOGBPGOGWJZXQLNASJPCEVUAFUYXMYDNQPODPYVKXIIWOJHWMAITSOLRDJKKRXMTSFQVKTBGUWLUFUZDZNJJI");
    msg.distances.assign("XHLJHWRSKHXTWBXTAYLFUZUAHUUIHMXNGODMPRFYBECGYIQXGIGECQAFECFZWNAUOAOUOIZYRRWTXV");
    msg.actions.assign("CYKXWATGLVVKZPFKTYYDCLRHBNGWSMCZVREHWWPMLOYIPFIFFQUZKOMXNVIVZLMSOFHSXZZCWYKHXZAATYPTUFBJDBEJKZXUNQGBGSRWCAMNJGNTUJBRMSMHQZTCZIRDCVHYFJRJWCAUQIGFPFKHGMNNBOROOTJOQHHEKGWLBNBFXDKCYVLALUDBCXJKIESWEDOVIQNQPEUSLQJO");
    msg.fuel.assign("IZOEKIIZPIZGNBLQOSAQRYVXGTCUAFIALXGWWHYHOMBAFBRXMBTPLPAYRJKJCAGDEYCCACFGVEQGAGRUKHPQZDQKJNVCNSZJYKGDRRDNBMJUIVPZPFRYTEHWHWLQNKTSAOEZSMOFVQWLDLBYRLBOPRPODDFIWBSTZKUHGTNWBGCEHFICSMYICFAKZLNUMTXEWNOEOYVIKHLVTNVSWLUJQMFVSMJEMXMXNHEZWHCXTSXUT");

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
    msg.setTimeStamp(0.627157546568144);
    msg.setSource(52124U);
    msg.setSourceEntity(132U);
    msg.setDestination(48108U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.5826565160874345;
    msg.lon = 0.2012449518221523;
    msg.depth = 0.586840679426349;
    msg.roll = 0.4864778872921953;
    msg.pitch = 0.6969825412849739;
    msg.yaw = 0.705064851530328;
    msg.rcp_time = 0.2370389037789754;
    msg.sid.assign("VXDHIXFJUJTNEJYJPBZXCRAWAJKZYLPHGMZAKASHJNBUIOJHOIWKVLKOOVEEOLZWTCYAPSZUQQJECAGWNGDVNPLWPRGAYFRHNCFKIMMDXLKDIFZPZCOXMFNKUBBSZBGWUVWRQTWQWDKDIFMLCFJ");
    msg.s_type = 81U;

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
    msg.setTimeStamp(0.7883152488717723);
    msg.setSource(13059U);
    msg.setSourceEntity(112U);
    msg.setDestination(29660U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.016700868366096744;
    msg.lon = 0.0006372335003628216;
    msg.depth = 0.09586357413306235;
    msg.roll = 0.1698578932286975;
    msg.pitch = 0.7669268142313092;
    msg.yaw = 0.46275657844708173;
    msg.rcp_time = 0.793648009870241;
    msg.sid.assign("VIQQIMATLRNIEJBLDJUUTKWGZJGZARRSSXHPUYACQPXXHGXJAQHGNRWDELCAKTQOMPUXUVZAGXENBBSNIRQDCUNKTTSEJHSKFFGLEWPOKROHENFYCYYHWOBBVVMCDTRYOVLPOSWXRXPKLSZKPWBIEQMYOCAMTDMAOPWFACCHIPVSUEVOIDGNDIBWPTZHJNKOFLNVSZIRJUUUYFKCXX");
    msg.s_type = 72U;

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
    msg.setTimeStamp(0.14020607084341852);
    msg.setSource(18024U);
    msg.setSourceEntity(173U);
    msg.setDestination(23923U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.9807945894884035;
    msg.lon = 0.7459921788448063;
    msg.depth = 0.7539358640772402;
    msg.roll = 0.28283047186731036;
    msg.pitch = 0.9483740915682315;
    msg.yaw = 0.6038693155174367;
    msg.rcp_time = 0.4325552510760976;
    msg.sid.assign("VRBVCFXDIKLJCPKWPPTWNNBJOVYUTPYMTGGWWAKCNIKSIHOHJBQJPLTKGKJLBZYGZOMNEQGOAEBZROQTFLSBNROIZVBEUJPRUKJVXMYIWD");
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
    msg.setTimeStamp(0.7669763949365839);
    msg.setSource(16656U);
    msg.setSourceEntity(23U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(79U);
    msg.id.assign("MCFFOZQWWCRALTIOWYKLOVFIQQGUFBIZIBKJKRRYVATYHUZPGRKPHWHMQTAEPLOLSTMXEECZNDRJNKHTXJMGYGGSCZQOZVYFKMADDWHXJOBNSXYVKVADMXFNSYEXSGWAHLJEISAZNGBITMSDVOURURMDDUIPIXVBXSBP");
    msg.sensor_class.assign("LRSFZTXGICJOFHVWFTMFGTZGHRAPEJDLVIACEUVGXPMAFBORBVQQBJLDNMSNTCSZBXRPNJPNRZNHHMRCFXGYUPWOITWSAYKPKYMWIXTJGDGMEXHIZQOSAQUZYZUSCXVMOWOJDZUGCTIVROBIYOGYVPARBMZMKEIWVSSCEQKWELSWAMQYWAKFTGLNZUUA");
    msg.lat = 0.35085427764342514;
    msg.lon = 0.3350057285743404;
    msg.alt = 0.5078145538314759;
    msg.heading = 0.049643575038810894;
    msg.data.assign("ALSIMDGHPHDSKBPEDCESDQZGAGZSACIQJMKXMLSWTDTJYHGXOOCLYVTRXUBKURQAWJBTDUSRJYKOGRVXPZWBKMLPGXIAJVMMUAQUHBJYXKZVSAPLFBTNWALNXIWQLEOXBNEOAYUWNLPFXOKZTQIU");

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
    msg.setTimeStamp(0.39053613513679475);
    msg.setSource(44190U);
    msg.setSourceEntity(97U);
    msg.setDestination(60409U);
    msg.setDestinationEntity(167U);
    msg.id.assign("YXFPHXKSBBXMTQHUXBYEUZAKBA");
    msg.sensor_class.assign("GEEAWLRRFPYRHTYNSKDSGVDZOTAVMOJTTXNQLNUVLPFBKLPFMSWJMHZUFHVLCDWRYSWWMGKRANASXKCEGNXDGOVVLTOJEFLAOLAFIEQZEXEDXUCBKXUPHGVUNDWCWJOLTYPOWIK");
    msg.lat = 0.08516113945645754;
    msg.lon = 0.381026826833214;
    msg.alt = 0.8481633005738022;
    msg.heading = 0.24610940760312638;
    msg.data.assign("SMMCFZIIFUHSCUNHCMOFL");

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
    msg.setTimeStamp(0.13357218919893077);
    msg.setSource(4369U);
    msg.setSourceEntity(72U);
    msg.setDestination(33921U);
    msg.setDestinationEntity(60U);
    msg.id.assign("QLAMYPYVZIXMHIPCMSZFSRGHHOUJZMJJGPHKSTQALQQQAEOBAOOQCARVHXCTIENNLP");
    msg.sensor_class.assign("NPSMYHSUPBNGLBKUEFLFIBNAMUZDXPNRYKTRPIVOFVHGBLDEJGMDFJDPIEMZ");
    msg.lat = 0.5972561547877537;
    msg.lon = 0.6776829252076261;
    msg.alt = 0.45201293568284706;
    msg.heading = 0.5014655175175482;
    msg.data.assign("UTUERLKMJSAQVYMVTQRNKOAYIJKCIFPDSZFUBSHFYGMZENWLBBMOCGZFXKTYNPBJXKIQVTQULTJIANLZKYXONTFVEDUWJIDDYHMQDYHBREOPRUZBLGKXATQPHWXVGCDFEVKSHKGHWAMXVRVQHWCGVJOXAUAPXLECSNMUCCPLQUJIGZMPCYSGRFZRWOVYCMPYDOUEAJJSDDWTWRSZWISFEHEGHTFHGNXXSKNELQBRWCTILAZLZOMFOD");

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
    msg.setTimeStamp(0.7152363734199755);
    msg.setSource(61309U);
    msg.setSourceEntity(1U);
    msg.setDestination(25578U);
    msg.setDestinationEntity(203U);
    msg.id.assign("IJMROWRJXHWDUMBMWKJKSFDPYXQGCIZSVWABZSQYFFYWPPTHVGTNOLABUYLICS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KFIJLSRJTCZBXMWTHWZHOJEHVVDRHOYWKFDDMBPIAQIAZYLYPAHIWYSRCOVJNPGRGLHQLVUVCXKATURQJPDOYBRDTRXDQWAQVTORANUTCKSMQSEFDBQJIEZGPFXFIUHCSDMGJERBCAOQQKWNYMZPO");
    tmp_msg_0.feature_type = 59U;
    tmp_msg_0.rgb_red = 93U;
    tmp_msg_0.rgb_green = 87U;
    tmp_msg_0.rgb_blue = 28U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4164550812348966;
    tmp_tmp_msg_0_0.lon = 0.9653429091044197;
    tmp_tmp_msg_0_0.alt = 0.6888982167132685;
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
    msg.setTimeStamp(0.34434599929510346);
    msg.setSource(23763U);
    msg.setSourceEntity(55U);
    msg.setDestination(18296U);
    msg.setDestinationEntity(98U);
    msg.id.assign("KRPSCNXYADKQETWAKKFXNJIJRZXGGVZHGLLKIWINXGJYIQRJLNSOBQDTPPLSMRUTYCOANUWPRHUMJYBYTUDVJIAYOLHEEVWFKUZRFTYIDSCQFQLQMXKNHBZFEOGBCBNCIHOELCBBSIZMKEYRLSIUSQJEJDPOOUHWBTMDGZDNOQAZSFGZQXMJCPPUSAHEWPMVGVLRACHDWUXNBCMEUADJLVEVWGBOXVHVAVFPTMZOF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OFCOLWIKWVIQBRHWOVGUNNCVEXVWMTDHAFEXWBZYZPERSHBAGDVCDUYNKXMLFNGRKCHJLRHZSAJMXGAPJEWDWLYJCJZPJAMN");
    tmp_msg_0.feature_type = 70U;
    tmp_msg_0.rgb_red = 120U;
    tmp_msg_0.rgb_green = 223U;
    tmp_msg_0.rgb_blue = 167U;
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
    msg.setTimeStamp(0.9311010315922214);
    msg.setSource(35667U);
    msg.setSourceEntity(153U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(102U);
    msg.id.assign("LNKOZIOVDAIHYQEABZJZVVPJSDBJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XGKAWOIIIEDXHSGSVCMNYSGZYYXHWFPMPKMVAFXZJRDBBIWMXNYRCPGPLHASDTCEKTIKQEJSZONVYUNHRMHXERSNOLKRFKXTNXOJDNTGUJGAKINUDJUUWWTQRJMEOZYEZCQALXHOMZUTUALBWZGRAIPCWKMAECTLDWRLNVYFYGABCSWDIBMLBYEOQQJRISOJVPKHCTHXPSKFUPLE");
    tmp_msg_0.feature_type = 96U;
    tmp_msg_0.rgb_red = 169U;
    tmp_msg_0.rgb_green = 52U;
    tmp_msg_0.rgb_blue = 79U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8568943464133683;
    tmp_tmp_msg_0_0.lon = 0.887798667920849;
    tmp_tmp_msg_0_0.alt = 0.7501343490364291;
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
    msg.setTimeStamp(0.3160273890972639);
    msg.setSource(36682U);
    msg.setSourceEntity(44U);
    msg.setDestination(22222U);
    msg.setDestinationEntity(81U);
    msg.id.assign("YYWFGNVEWNFLTDSUZDFQACTHPMKREOPFYLDJAACSRWSWCUROZAKXOAQRTSACJECEENGBVVFSFIQQMPPZRSOLNFCZKRGTPVKJEEIGBSBJCHINOMXEWCADEMQYBRVKJXPCXXLZUIROZIYHHDISDQZVQPGZAOTMFXFWTIXWBJNZTKNMTHBUVOBQWWZUUDPGGRLNMGHMUYGIBYXKVTFMHLLQQTHRWXUKXNJHJSDGOJJVBSIDYPKDYVHUM");
    msg.feature_type = 120U;
    msg.rgb_red = 132U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 182U;

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
    msg.setTimeStamp(0.04159028181235802);
    msg.setSource(28115U);
    msg.setSourceEntity(198U);
    msg.setDestination(7703U);
    msg.setDestinationEntity(100U);
    msg.id.assign("YKUPGNUHCYDEXZGHTDPWCJVGAFTWLULKOFPJULBFJWOMBMXLHBOMDOHYCGPVSPIZLYFASGJRZARIAEGOMRBQCEEIUJFNQJPEEMNHZDXKKVGSEEKRLVHOWAUQZJSOYWSFFTOBUSGMFJJCGEGVZRULCPQNHKNTYVIAXDKRXTAKYQXPTFVWDCDNU");
    msg.feature_type = 89U;
    msg.rgb_red = 135U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 32U;

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
    msg.setTimeStamp(0.7715825343356153);
    msg.setSource(55128U);
    msg.setSourceEntity(203U);
    msg.setDestination(46249U);
    msg.setDestinationEntity(215U);
    msg.id.assign("OANKASSYLUUZWWBDXQHDFZOIBSKRNZMLMQUPQRHIPWWTZGHPYNYSXCQDQPERABYOTKJPDZCVNYFTEHJFTJLUGNVIDOSGRVMAGELCSIJOADMWKDPREYKURXKZKTBJOSMJUBPIZJSCNQWYVRWAVDYJMCOTTAGV");
    msg.feature_type = 47U;
    msg.rgb_red = 239U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 74U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2840402644530553;
    tmp_msg_0.lon = 0.5328871782397914;
    tmp_msg_0.alt = 0.46877845480082003;
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
    msg.setTimeStamp(0.005723191919424386);
    msg.setSource(50354U);
    msg.setSourceEntity(94U);
    msg.setDestination(12200U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.9459521737577496;
    msg.lon = 0.4853523290734608;
    msg.alt = 0.2696617535917192;

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
    msg.setTimeStamp(0.9396530603654333);
    msg.setSource(45979U);
    msg.setSourceEntity(88U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.6232686680405062;
    msg.lon = 0.09709213340080969;
    msg.alt = 0.3064090923063736;

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
    msg.setTimeStamp(0.2753360745506671);
    msg.setSource(6120U);
    msg.setSourceEntity(105U);
    msg.setDestination(22321U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.07697298057448998;
    msg.lon = 0.5770873555904827;
    msg.alt = 0.4529790296929529;

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
    msg.setTimeStamp(0.18105829638231996);
    msg.setSource(53809U);
    msg.setSourceEntity(159U);
    msg.setDestination(28289U);
    msg.setDestinationEntity(244U);
    msg.type = 64U;
    msg.id.assign("SOLRPVOVBBOYZYNTOEQIRHHSPUXGIVPMWNHLSVIDSBKCLEFCVKHZPGKTCJWTRMRCUNKEBZBPKJDCFIWPEGGGAEZULGEFXI");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 250U;
    tmp_msg_0.period = 1380299252U;
    tmp_msg_0.duty_cycle = 734926115U;
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
    msg.setTimeStamp(0.7670428475017792);
    msg.setSource(14429U);
    msg.setSourceEntity(50U);
    msg.setDestination(42446U);
    msg.setDestinationEntity(84U);
    msg.type = 219U;
    msg.id.assign("QGJDEVFLGZWQIYXJMUQFNHIQLHOKIDPEBZEHPTDGBVNUASPLOWKTCFHVDGREUKFYFGPOOTNLXNNRBTWSIUGPUKRKAAFOAIJUTAIVCRMBCVCJKEMQBAMLERZIGCLKHCPAQSOAQSWRSTWEYDYZLFTSJYYTKPJJSXQBOSXXDNZAHKULXBRBVSLFCMAXMBEINKUIYVZRPFFUVOWMGOCJUB");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("NCVEOVMOWSNQCGQKDEDYPFGYLFVXKIWFWMHBOOCXQIADEKPTZUWHNZMOCUILMLHKQPEROBYXWPSSSTQTOGCVS");
    tmp_msg_0.formation_name.assign("NKUCVGFWCWUDPRDGAKTRGVACNHPNOTWMQAOUGWTQIMDLPUZKWYIUVPBPQBJXXPMMJQHWZLONRDRBYHLHJSMIDDYDVEKCYQJBPJLIGBFWOMNRNECDIZUPVVSXSAJHFIWTDIXGZUCYTIUCHPFTPGGZNLTLKHSNBVOOHAXZKXOLITME");
    tmp_msg_0.plan_id.assign("VQHXGLVSTYFTTDXQZBEDEMQHRGAEOLWOXZEGXPHOMZXCDLRFVSDIQFEQXYIOQVLUKMIIRGRHEGNFUCUIBEHQCSAMNBRYJBSPVLKPMVIMWZTAFFXKYBQEOTZVLCMHMFLGZDONGJHNYICIWXTOCAASSCLWTPBTBOIPNHKRBSRAPQIXFTJKJYUAYYVUDUJNPHLGKRDUWFHUONNRZJMGOWWK");
    tmp_msg_0.description.assign("CBPAGJTKTBMQPQXDQQCVBZCRMSMXHQZOGNMFGCVPUHTMEUDPOFENXRNYFSU");
    tmp_msg_0.leader_speed = 0.9497145258840334;
    tmp_msg_0.leader_bank_lim = 0.4804890341670651;
    tmp_msg_0.pos_sim_err_lim = 0.7193541457353629;
    tmp_msg_0.pos_sim_err_wrn = 0.4766464720692696;
    tmp_msg_0.pos_sim_err_timeout = 10573U;
    tmp_msg_0.converg_max = 0.9458901926815111;
    tmp_msg_0.converg_timeout = 39965U;
    tmp_msg_0.comms_timeout = 54118U;
    tmp_msg_0.turb_lim = 0.9241098096951342;
    tmp_msg_0.custom.assign("BXJDCSGQEKEHNVZQLEHZCRYKRGDYFEOCFOAHMVBCJMWTUDSZVPLFS");
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
    msg.setTimeStamp(0.7014575464951519);
    msg.setSource(13413U);
    msg.setSourceEntity(84U);
    msg.setDestination(55354U);
    msg.setDestinationEntity(213U);
    msg.type = 161U;
    msg.id.assign("FVJVIZLYFOANEDWAWZLFHVXORPFPTORKDZXJLWGVEDEIBGOTCKLQRIOABTVZLBWRLWDAKMOUUXQGKZSIERPCHSIOQVHUIHIZTGDGCOSYUDVSVIPMSIZWQOJQNCMTLXRKTSMFWHBGRFJSNKBUWYHAYCSGYMOUJLLEUCNDUCZ");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 46068U;
    tmp_msg_0.lat = 0.9369005722975409;
    tmp_msg_0.lon = 0.6127730351853445;
    tmp_msg_0.z = 0.37755876475387207;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.speed = 0.2926438895993472;
    tmp_msg_0.speed_units = 134U;
    tmp_msg_0.bearing = 0.46660460010372373;
    tmp_msg_0.cross_angle = 0.20300834039521742;
    tmp_msg_0.width = 0.44250614220043405;
    tmp_msg_0.length = 0.9223001863269089;
    tmp_msg_0.hstep = 0.7537917520482305;
    tmp_msg_0.coff = 217U;
    tmp_msg_0.alternation = 152U;
    tmp_msg_0.flags = 178U;
    tmp_msg_0.custom.assign("GIHCORPTBTKPAGHLNQIGFOUQYFUHCPPWNVOUJLSSMAXXVZURORLLKI");
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
    msg.setTimeStamp(0.18048232990080393);
    msg.setSource(19118U);
    msg.setSourceEntity(5U);
    msg.setDestination(36004U);
    msg.setDestinationEntity(82U);
    msg.localname.assign("BOCYCAJRNZAWVWFCTECZILPULJXOQFNXXVCSYLSCUBTITKYZDUZZUNBBOQAMYOOHOMMYTAHZDBDNEHDJTPKRCWPMKUNMIRPOEGKTQYTCDAJWVRZLHWWEXIIZEFMGHFVONZIAUVSFDCFEVQMX");

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
    msg.setTimeStamp(0.17607546787796247);
    msg.setSource(63035U);
    msg.setSourceEntity(187U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(251U);
    msg.localname.assign("UCSYOOBCBETQXDXSRQIMUVOYQHZXNDPFCCJZASFOFXFSUDFBVEIPGWFQWXRULYRMBHZURWRBZQVXJIUPJKPNAWDDIETMWFGOYMGTZLWYJNLCXNKTCFGALKUEKLHXMNBDQSSPJYDGCUVVJSOTM");

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
    msg.setTimeStamp(0.9146234069439931);
    msg.setSource(13075U);
    msg.setSourceEntity(233U);
    msg.setDestination(49989U);
    msg.setDestinationEntity(79U);
    msg.localname.assign("NVESZHPAGYRNAEAZMJWELCYEMUMLDVTOKAFVXFRTVRLPJPOGKWKBFSRNLVVBDYIMXSIDSPJHHFCHFYVTBGZGWCRWSKZXEHEWNFZCUXZIOGIIITXUUNEJVISDIPUFCUEROFBKQGBXTMUBRXKHHNKYJDTGLCATONIIGGKAWRHVCDUMPLQTGQYUQQDCBDPDSQALJOVMDSNNJQMQQMFBZOUAL");

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
    msg.setTimeStamp(0.9511528869573654);
    msg.setSource(11147U);
    msg.setSourceEntity(219U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("QJSFJRTETRVLQ");
    msg.predicate.assign("KCWFIGREDPLPZFIRQCVMARJKUAUTSJCXCGQVEDVRYFNUOVOQQTRVNHKHPFTWGBTKMJMMGSYLEFAWDUAYDHVSMBNBNYCBQMKAQDHBMEGGTLPFAFBBEYALVGWNEPZCFBWDWBZWXCIHCTBCEJMIDQYHDYNNZYSGPFQQOELINVRJHITUXJUVJNPAKMEWUIQXJRDLKHSZSVUOLXCZISTDXGOHKTRUKLATSROEUGPYORSJHOLPIIXLFSNOZWXWMZXXZ");
    msg.attributes.assign("VMCAEGCQURNZQQOZ");

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
    msg.setTimeStamp(0.21000995857469174);
    msg.setSource(3892U);
    msg.setSourceEntity(204U);
    msg.setDestination(17519U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("LYTHTGZHCVISZMDBREXADEPZAEYVPVPGKCTOHIALEPHFBBGHKGNVONOVBIKOFMZRWNJFWMVJSDOLSQFOPZWKXTTZIEAHBWLUADFQHFISGQYGJRCJEUZMREPHRKGLKKGXTBTWVJRKQBOXDIQJULCIDHDAZODXWSXFQPUSE");
    msg.predicate.assign("MLPHHMFNXBOBLVIAVNJJMZVUTJDOWTEGQOYKJYZFVJWCCPENECITFCLDXTISVNCWUASDHWKHBQJSFRYBPLONUYSVYAAGXZZMRUDREYUHAKVMPSBWOPGEIGEWTLFITUNWLSKBPMQVRNIZZKOGKPKIJIFDESZREHPAEQBMOAXQGZGKYIDZPQOUGSCDRHDVOIGHTTRHJNJH");
    msg.attributes.assign("ZCJSYLCBZORJMWKPUKJUNUPHCSABZURMTDRITWERVILIMPAXJAXCPUQXNKDTBYPBBWINNOGXLZVVMBFEXGHRVQNWFHHISQOAWMPLTVKIHHGZTAGRREDEKYFMYOEZWNOTQOJZSGTGHNOCSRFAJKYCWXMNFTEODSPYUNBDTHDJHHLKWBLACDQFIFPSZKUYIBSVJJWRLAEQVSDGMLZQCXOEXFYKUGFMTCAUIQD");

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
    msg.setTimeStamp(0.4748036575235086);
    msg.setSource(4722U);
    msg.setSourceEntity(68U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("ELGVOCWPKXHATVNHTQTCQYTVZOKOLUJZUVMLDVPVIGDBARVGUQGGR");
    msg.predicate.assign("XUYKNSUTIMTKLSGNUEHXTTLBWRMZYJAIXOMLIPWNAKZFMMDXOQJCBOWVV");
    msg.attributes.assign("VSFTQJCNTMJEVCXYXDHPVNRUOYFJZORPAURWPZRJNMTCKJIPHTBWGFZTNGKYBOSFKQFIUFMBFSARGJLDBLAPNXXGMEFGMTSBWDLGPAHLZVWCXYIXVMZSOU");

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
    msg.setTimeStamp(0.06812750788677169);
    msg.setSource(56709U);
    msg.setSourceEntity(88U);
    msg.setDestination(48392U);
    msg.setDestinationEntity(170U);
    msg.command = 161U;
    msg.goal_id.assign("JEQNHVYBAOPNMFLZHSPUPQXJUCTAQNJZR");
    msg.goal_xml.assign("ZGCDWDCJFLQHEVZHONQTVXIICWJLMPBWABIVBFQVIZWDUISHISVXTMDXOHUVPHRBUZCCQKEQXQRPMUSFSCENGGZOGRAMWGBDJYUMNIXOYAQZYDIABKNJNLTQEOQNSBJDTBMKTEYHFORZRNGSRWMPNGXNEGHATIYUYYKEZLLYPHFUTFXFPHGRSEEVSZLXCEXLRPTSVVGUAOJKYLMDLAJDKFKKWFCHJKLCTWUNORVJPAAZWTPIMPM");

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
    msg.setTimeStamp(0.5728262186916275);
    msg.setSource(61456U);
    msg.setSourceEntity(110U);
    msg.setDestination(25099U);
    msg.setDestinationEntity(189U);
    msg.command = 215U;
    msg.goal_id.assign("LRWAPUHFDSTFPHNBFDQLWAZITYOVFGIOZHDHXXZRTGJZQMIFCDAWWUCSDKMDSESULZGXWBGJCA");
    msg.goal_xml.assign("YLLOVGIULXASRIYXPPVESHETUMFPLNAHSZTSWQMNLGBXRHYFCEDQGMMYXVZHLKYPIABFYBNGONCQDYXGVXBKTUCKWKCVLZUPMSJZQNKDKDOMJQOWFGRAQNJZTTREUUHIXAIGUHVWILBPNRSJFWALCCBSQUHRFTYOVJGCAYRTHAHGDDMOWOCPAFFOWBYKVBZSDMITXXDNHBL");

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
    msg.setTimeStamp(0.6561351497886867);
    msg.setSource(34390U);
    msg.setSourceEntity(129U);
    msg.setDestination(37094U);
    msg.setDestinationEntity(94U);
    msg.command = 168U;
    msg.goal_id.assign("AMBAIYIAYDINVOXCPQTWFJJLDUGOEOJOLNLQTROTCSRUUZXFNFUVXPLXFKVTHCZKBGIEMIFEHIADBZDWWPJCLRQRCIKUNZNXCNZ");
    msg.goal_xml.assign("BOSWBICEYOFMIBLRVLCAJQRRMSBXFGVDMQWXZATVLTUGHSKAUTDHAUZOHFJRZWNMLDFDOFGHPXTXBEQVURWZVQOJRICJWFAEMXMLYVXIJPLHMYGYOTLKMYWGAENFOSZJSHPUIQCNFVTEVYNEIXDPYVKKNASCWPCEDZCGXMNSLQKWSCMNYLQAJDEBRYHRBFPOXJXJWSAUFB");

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
    msg.setTimeStamp(0.05330239919540902);
    msg.setSource(25010U);
    msg.setSourceEntity(112U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(12U);
    msg.op = 157U;
    msg.goal_id.assign("JZUDMAHNMMXGDVRYYSDEQCBQWHWLHXYZMEMCCMUZGFCSJUUGARGWIHAFVHBTPGGZYQWUHYLOLNRGDVREFXASIOBVODIFLMDONAFLONNQGBZQIJQTSCHVWRUKPANBIUJDIRKULYIYFTULGAE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GEEJGOXVJLCKMSWURLRWRWLYPSUMXDFNBIV");
    tmp_msg_0.predicate.assign("JEODWNIFVZUDQNAQEPKBRAJMCTKRGXITHLVMYDKIPTAVWJFYVTQDHNBISCLGHOSRLQKMBJXCBFHFNULZKIYPUXIWHPWYGROKTRQHYGXBOHKGPJIFBFLMTQECSAEMSFJJVAPMSVHIGZLHNVVQGEEVZAUBDCUPULCGNPSHNKEKNCLGZNNWSWOFUUVCMFYJDROTDWCXSMDXULMYYZPFZWZOJZASXWTRDYPIMQZLAJRBAEYDSQOWBUCTEOXATG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VFWGOCGZUHOVWOTBTAXZCGPUPRPUGBDRWOHSKROWRLIBFXQDQRKUQBENIUVSMRBFWHPQWNRXECTNMLCQCSNJMXIVYXFYEUMEPFIMWTCYKZMYIOJDEUHDGVKAPNLSAASJLVORYWBZKYPJNOOCEUZLGIHVZDSKTYMQXDVGBZLKEAQIKTDBHDMJAAIECYPXQMIWFZSVFNFTHDP");
    tmp_tmp_msg_0_0.attr_type = 51U;
    tmp_tmp_msg_0_0.min.assign("UYXGMOYXBUATHFYMRUNDJPIKPIKJLRYEZTMMTHVXKBYIHQDELQBIWABXWOKJGCXHTEJDJSXECIESUSJZPBBPMHZDTETWUMVFFRGGSSBRHIPXPNXOSRZAMEVZFWCNRGVWPUKAAGHBNHUCLPBYWLCOOULDIDYNTJQVLNWWOTREIFQQKVTNWFCYAMQAQUNQZGVPKEUJGFNCTRDCDDLZOLYVNVOZYXFJGOFCSQZPOBDSQAAMSKMRES");
    tmp_tmp_msg_0_0.max.assign("ANNHEFJHNIXRXQTTBNGBOBUCWOCINWRGPUQUMHJZBBEYNVXANQYUDGZAOCUAXEVLJCWPC");
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
    msg.setTimeStamp(0.010855715635999408);
    msg.setSource(34663U);
    msg.setSourceEntity(167U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(89U);
    msg.op = 7U;
    msg.goal_id.assign("SIMJBFNDXUIHJPUBZMJZMVBVPCTNKKFEFDOTRAPQVESUYCQYTRIZHGYPXOUBUJWSTUZQHVDDINTCGCCKRKONDYDSSQNDKZKKGEGBNHJSRGQPMCQLZXBFDEOMXWXXFYXWWAQMIVFMMLHRGWJSFARUARQJIOAPLYTAHTUEWCYGALIJILEDZVHAXAVSHTPQPZUWSORDWZLCLGFVLYTEHBMLOLOHNKJNZIPXKGOQTMAIVJVNWBY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WURTUOTDBSLBBJCKVJNODXXSTNJWBEZWSHAFOQUDQCIPLJWXRVEWZLJHQUAIDKNEKNIEQPNMCHPOMZAADCYIOCZKEITAUAYBUWRTMUXLLSIRGPXVBGWKMVTIRQCJQWFAXEZJHJCCJFGXACVGRZOGVFWNFFZKNGOMRTVPULZPMQKYUPHSIPZBSYVIWFVHLZFRNINO");
    tmp_msg_0.predicate.assign("GLWYYBIZRAFGXVUUAOZSPNIMSJLQYIFKTUBFETGGQNECCXNRTHKPUDGAERDSKQNOPBWNDOAWXRQOKAEZWZAWMPKASNQCVFRNZBJTDVVGIUDEDVZYDZRUOXWNGIQTOQJYTBUNZPXG");
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
    msg.setTimeStamp(0.200753998532765);
    msg.setSource(46371U);
    msg.setSourceEntity(187U);
    msg.setDestination(33178U);
    msg.setDestinationEntity(193U);
    msg.op = 194U;
    msg.goal_id.assign("QJFMWZACFEXWVUMYMPCMECJYBKTSFFCRHDTAVAPUWBAKCVDMYAXKTLWMXWTVBHUHBXQPGHMTINRARVDBGFRNQXL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZWAHOEEQJIMHZRRZDWTFFTYOZRKCOGAWWNYSJCGALAPKIMTISRRFUPIBARBMGGZPNFOUPXRBOIHLGMNCDQAAIUDLEMTPEYZOKRTKBHZUDXWPNVQSIVKPXMECFLGVSLBFJRUGQHGETDBYKTEJYXCIPSNVKUNYNDVPBH");
    tmp_msg_0.predicate.assign("LVHBIUTHZCJVODZAHEFDSUPCZKITPTFUOLROSPGVSKOAIEABXNKLMETDCHYDMFJGCXRMWRBQLFSIMYDWMXOVNDYWPCKQLUVJBBYKFJWIGRRRGWXLEGELRCVXJVGTJSOEUOUKBLXJXZPECAJVQFDNQVNWHTUPIPBJEYZIEOYIQFXZNDQFMMHKQCFIKYFRMQSGWYTPABJMPDZBBNGQIHA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NVBSOAZLQCTEHBTIX");
    tmp_tmp_msg_0_0.attr_type = 236U;
    tmp_tmp_msg_0_0.min.assign("DQBLMGHYFDCWEALGQJHFOZISCYQBDKGKGCPMOYXDQJUKBRVUYWCEYZHOSWQTD");
    tmp_tmp_msg_0_0.max.assign("PSKCSIPTGFKNOJIFQDJNTRCILKMHBPHCXZJRXLVHVYNCGTCFFZDVZMIOELZOXVGWCHXXHITOHTEKVWUHVTETOHNPJFVACEBSKHQINBWIXUVALUXYMEPCSZDYFBWUXIBYIAABWQQAMJSAFSQMLAERYSLOERPMKKNZVYGDSDMNGEFOXZCGAZNKLQUBDSCMUMKREUYPSORGQMQAURTTDYPDZTEYAJQDFFLJWYZX");
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
    msg.setTimeStamp(0.3256512267068937);
    msg.setSource(6053U);
    msg.setSourceEntity(136U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(234U);
    msg.name.assign("YSBDMOAECKPZOEXSATLUFLCFUUUKMEHUOPGIEPLKTVJYHLNYPLLAMTBKSIJWQCRQRRVWYMZQBVJJLYLXBYSPDR");
    msg.attr_type = 102U;
    msg.min.assign("KEJTKSHTLXAXGUZYUAGTODOVUZRWQEWYFVMJXIFKEHAXYDOGWUCVRHELNXRLOHWCMSOQHDYIWUJNZNTSDGXPNTSETVMNBCWJBQFKIDIIPYLQGEUGMVRGXMSASOPUAZAVVOPLWZPCJJKNKBXYKVNGQHJMAKHZTHHBVKUBUEFGDWFIHAZEFUSQQCDBBMDCRJQNQXPLVZPISKNFROCNOCEWMDIFDLPZRRIPIAQFGSLTEFZYTLYRBYLCTSW");
    msg.max.assign("OIFUJZWFRBMHMVEFIOPZEWVJMWUDBSQHBYSSZAEEGNVVZKDRYJOYUWHXHMDUXQPEMSVFXCUXLGFLRQAIRVVNXNBGLGTETSCHTZCQBOHHFNSOFWPFSKSIQCMNYMNQYKRKBIPVNUCWVOZPRZJEBLDIKCUYAOCXWTAEMKNHJCYRXTYLADIPTGGAQJDOED");

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
    msg.setTimeStamp(0.47723591029804);
    msg.setSource(45543U);
    msg.setSourceEntity(88U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(20U);
    msg.name.assign("JQRLQHJKFRFZDIUMPIRLZKXRAVTBQKLAFGNYYDTDHHEXXJOTLJWQXSLDMOOCINQRHIQZOBPQMEVNFMYDWXIATNTBMLVRCCTDKBUVPFXNWSGUFMOAAGGUDQFVAPCIUTCYUOEJISNYUKPZTJHMWMJGDMVWHZSWXPBE");
    msg.attr_type = 193U;
    msg.min.assign("RAHDZLPYQJRUSKBWQJVNDEACIWAKBFUUMSJYEACSAMYPMFIEIUCQZSYTNCHZZKYCDIKRXJIZJOMPJJXLXVWTDNPETXTAIPGOUBSNPFVGWEHTWUNWIMIPFDVSHQVOQLOCPMNXYZJZXNHKVGFHSRLLZFPKTQECLOUGVETMUZWSVGOBG");
    msg.max.assign("ZGRPKAVHYHXJZMKVADQKGJJZOPZIWYTDUREDZGILUYVHVWARXBDDENGYSOEIZZMQVICNKHHOJCTXTGRCWYEXUPFVHMWQTJNDFPBGOWQMEMQKMAZXXYPSITEBFSNPFSFDGICJOKTGSLJUVKI");

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
    msg.setTimeStamp(0.11657309463773302);
    msg.setSource(48219U);
    msg.setSourceEntity(131U);
    msg.setDestination(15004U);
    msg.setDestinationEntity(112U);
    msg.name.assign("XGEYPGGHLIIWVWEAOZZDTWKNYNSNLONRHLKBYEDHXIUPOLCGVRSIINNZHBMITSTLTKKVASNMAGOSOTOUAAHDGXBAVFXOGZSKIZHRSWZFVKXJJYUJBMCWKBRMKMDMXWYDLNJJQFFPZAQLURFYERRAIXLTCUEDYCZPJDWEITSUUOUBDLPGIJGPCBQNEFKHQNPTVCSBVAKJJXFCRYWQWFCFU");
    msg.attr_type = 31U;
    msg.min.assign("NDDBYLZAIRSCBYAKNKHUBTQRNPGQHYFFZNYCEQFEIKSSKFXXZBOUZFLASGEMETDS");
    msg.max.assign("YYMDJSGEQRZZZQXHKHIICLHEFPYCKUPFUDXORWGAMHKQGXHKYEMGBSWQMDVHLWAPTXPQPCRNJBTFOCYFEEAOVSLZUWOMQWRAMKGOSVDIJELTZLXJHEDDNVZJSCSORUOANNFTAOUTFFSKBNYLWQFKGFJSHAUKIABYSKNIVTZUFCBLTGGTEQEBTQPWSOJPKGCYYDZWNUCBLHXNIRC");

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
    msg.setTimeStamp(0.8898913834831775);
    msg.setSource(36178U);
    msg.setSourceEntity(63U);
    msg.setDestination(3191U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("HWSOIIXUARLJWPBHMGUVDPQRZQATXWVHZSYKWXVXTPXUXONJFYKBMCCKPRUTRSGPBYYBQAHPFEIZEFCVGLMGQTDBRPLADKKFEDHZOEZVFTJUWVRIOBWMCFDKCJTVYSIYUHCKAINVHZSTAQGWPNFMBOJDHMEPRCGKALBQCAWWURFXYSSVXNCKRRNTDVLGWHESMGILLUMNMNYPQJOCZBJQTNIDEIE");
    msg.predicate.assign("RXTHBLUJFEXHKUBMSPPFZOFWLZOVZIUUBYWMVZPSCGRHEIGECEUBQDZNFYZGBLVRAHCPXWOMYMTJVEZEDHFWJXBVPVYDYYRPFKNYMUSRSEDQAMHJBAPSQL");

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
    msg.setTimeStamp(0.9286668000649566);
    msg.setSource(13875U);
    msg.setSourceEntity(29U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("JPIFCFASAGMXWDRGBXDVQJATNJLWHFGNTH");
    msg.predicate.assign("PXNXXJFWHYZRDBSBCRMSXRUNNHCSUREDGEZTLLHODCSUCMUDMSDBBWELKFPACTNBOQNVVFVJNUVWKGDOJSIKHQAYPRADKFYXOLIFVBEXHBXPQGPOJHFWFVHYMMCHMESZRIJGQFYVSDIIOMYAXYWRPLCTELEAVOPKCYGBUNZTIMOJQMHEDNNGTTLKOWTODYYKQCJQJKRAPXHJLIWTEZSZUGPUVMWBLFGUGUCAWQRZLTZKFV");

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
    msg.setTimeStamp(0.12518686570214543);
    msg.setSource(30646U);
    msg.setSourceEntity(202U);
    msg.setDestination(9221U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("FSUFNIJRXESGHXYOQTRFSTRVIQCWUGJUZBMJVDXXFVCA");
    msg.predicate.assign("AIFPSOCDABZMUSJMCOCBUCPZQHLUMQBTSKWPBOYCRBXACWQUHWXXJNHEFQEASGEQPPEJTXKWBGLZOVZZVVRNRNMFWZISINEZMFDGLOYJTVYYIINKDBGYFFLPJKXVGPVAGRZKXGEIPXKVJMGYKHENLKADUIIDILDAQQQSAFTWWNFGYTCCK");

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
    msg.setTimeStamp(0.0973228808419766);
    msg.setSource(58334U);
    msg.setSourceEntity(151U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(164U);
    msg.reactor.assign("RWLPKQBCJHHASCVCPIYKEUHFIYNEZFBSQXDFPZVONEGPLXUFLAWQJSSZQBEYVSYBSHEMGEMVGKVCXSMLFJWILNWEYTLEYDOWB");

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
    msg.setTimeStamp(0.1368960309985897);
    msg.setSource(56117U);
    msg.setSourceEntity(48U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(136U);
    msg.reactor.assign("WULRPDEAJBZXAJGBUKCIBVTACBBKKNQVXQSGHGFAYTDKEJUISXWFTXLVZOSEFBKFRZBQWAYHUUJVMKKMDDZDSCFTZXSRUQJRFJRVXGTDNMAAMVQYMHTPVENLLOJPLWRNSDHJSZFZUUTXGABOPHMYZKMBHGCERAIRNETDISPBWPYZKOPCWERSHRHXGVXLCOIQOQIUOTIWULCOEWQQNQMYWEGPFVYIYYZSLWOJNKFINHXJLCNTC");

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
    msg.setTimeStamp(0.1277071549299318);
    msg.setSource(5578U);
    msg.setSourceEntity(55U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(162U);
    msg.reactor.assign("UNYKJOZKLNPGMFGWZIJUOUNNYICRINXIAZIDCFXBJLUWLATLDFJAVJKTYVHPVAOVEBCEFHXPFOHBRYMDQEHGAPWIRXKXJLPBRVPKPNESEBATTLIMUUCBWDQKHGMZHKWJFGSQDPVXYNCGDFQLHHGKISMEZBCALRQQZHQWXCRAIJSGQAVVTDUSS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XOGBWPNYSGOFAVABEBGFHWADHKYZPCLRDKAMPBGXUSNXDACQPLVYRUPJTKTPZKKQSNFIDLOORDYLZRFNWBIKSNZNCFLZQWHLMEZSPVOTCGRUVFKOXJLAWAUTOFNQELNMJIQPWEUYTZKDDJXHAQSXCMIVSCJUYGHXUFXXUWYDRGPRTJFIMOIVBFETAOXMHHJQCVIEJTGQGRUELPUJHWKSNBQWHBMOKGTEVCIEC");
    tmp_msg_0.predicate.assign("EMHKXPZDTUBQHKZRPMAMHESVHYRYJOMSUTNCDGHXBWONHFUPFQEFQUREEMZAEDYTMNJUWKWGAKFOBTVVFOGIBDIMLNCZL");
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
    msg.setTimeStamp(0.3255156535133197);
    msg.setSource(20073U);
    msg.setSourceEntity(126U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(151U);
    msg.topic.assign("HZZAJLUBBWHEBDVVBHGQ");
    msg.data.assign("DZQYQEUVUEKHCYKIPHKOKNXDRSZEPQHEIQKYUAGTMOWIULYZHOFRZONFEJPRDPTOXXERSVGFKTRNFIBXUDQFLPZLGLEJOKGCBAYVUNS");

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
    msg.setTimeStamp(0.8852888572352887);
    msg.setSource(46489U);
    msg.setSourceEntity(87U);
    msg.setDestination(48442U);
    msg.setDestinationEntity(49U);
    msg.topic.assign("NWWUBQIUNOAQRXJTHZRPMXSZNQVFKMASJLCCAFNDMFEXGOGFNSHRQYVFKAHGEOOWTPDZCGMSJFKHVHWXIUVJVQBPBGUSEVBMCDNZFWWVYGGYYXINLZEKRNAELDETYSSXDTCMYRKHOZBAJLGSCIEJSMUNXKRLAQRVBPXPHKMPJCEZPUIJHPVIZDBAWFJDOYVGURUIQAOKTLLYBO");
    msg.data.assign("ACBXZTEIHFLGMPBPPVIYRLWVCBRTJMLFQGCENWHPNWWKVCDZFGSBUMAOQEKADALUMSUOHFZTMLWFECHLYOVZSMOXYTKNKQCRDOTZKBFNJORNQSBSYGSTGK");

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
    msg.setTimeStamp(0.93757378669512);
    msg.setSource(223U);
    msg.setSourceEntity(157U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(236U);
    msg.topic.assign("EGVRUJPZINPZHLGSZPVJXCEXGENRUSJBZTBDKOINHJXYOBFCGQAWTDZQFDVLHMNEQDBDYIEJYXAUQLERCHLZQTMUKUUIXWRVSCJODBNLWMTYZWDTXFMEHKIWOXWQVCGWSOSUULTBPPJIHLNOFJKGYGKSVGYMRIGBIMSZIMLSAYKOCCATOCKBPHKJCFRP");
    msg.data.assign("USWBXEKTRALNDJBQKSKXHVPNLRYJXVWJQCAGRKUYQHZAXKQGBLWCYPZUYLSOCPYGINHEWLOBSQQJERZCEAPIPLAOQVFFXDHIZVYBDTXNTPTNOLZVNCPESUODDQM");

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
    msg.setTimeStamp(0.5598944239291418);
    msg.setSource(46613U);
    msg.setSourceEntity(110U);
    msg.setDestination(33293U);
    msg.setDestinationEntity(3U);
    msg.frameid = 39U;
    const signed char tmp_msg_0[] = {-90, 45, -38, -53, 60, 95, -86, -10, 2, 24, -50, -56, 5, 35, 60, 101, -10, -100, -84, -6, 46, 109, 54, 91, -110, 43, -12, -72, 58, -22, -87, -53, -106, -48, -45, -105, 68, 115, 75, -78, 20, -8, -97, 30, -89, 35, 2, -28, -69, 115, -103, -116, -117, -97, 20, -31, -118, 31, 14, -126, -59, -17, -26, -89, -9, -81, -125, 92, 61, -50, -66, -67, -104, 12, -33, -107, -107, -19, -72, 106, -65, 81, 39, -22, -75, 63, 105, 123, 92, -91, 49, -12, -36, 98, -83, -26, 58, 87, 20, 94, 81, -122, -61, -1, 0, -127, -21, 26, -83, -107, 47, 78, 43, 49, -70, -62, 120, 60, -66, -5, 79, 108, -48, 13, 73, 34, 63, -11, -54, -109, -123, 84, -14, 90, -31, -91, 40, -100, -78, 32, -87, 84, 50, -127, 22, -85, -57, 47, -59, -111, 40, -32, -30, -86, 73, -84, -42, 125, 89, -29, -115, 75, -122, -93, 84, -8, 24, -128, -86, 87, 41, 35, 25, -13, -74, 5, -41, 60, -52, 26, -20, 39, -84, 75};
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
    msg.setTimeStamp(0.2044840321429281);
    msg.setSource(28016U);
    msg.setSourceEntity(107U);
    msg.setDestination(5427U);
    msg.setDestinationEntity(67U);
    msg.frameid = 64U;
    const signed char tmp_msg_0[] = {-22, 118, -125, -35, 48, -87, 84, 68, 75, 45, 18, -68, 108, -125, -29, 72, 9, 85, 17, -38, 91, 0, 44, -96, 100, -86, 48, -18, -7, -90, 91, -105, 89, -12, 7, -26, -128, -105, 120, -65, -47, -61, -72, 26, -45, 6, -28, -6, -55, 63, 15, -50, -28, -5, 83, 87, -90, 14, 74, -117, -79, -11, 27, 33, 101, -97, -77, -70, 19, 126, 108, -110, -95, 95, 89, 31, 53, 95, 95, 9, -95, 81, -1, -114, -117, -87, -88, 84, 76, -54, 91, -112, 78, -115, -73, -56, -49, -127, 97, 113, -70, -55, -127, -37, -36, -105, -4, -64, 24, -5, -123, -44, 115, 0, -52, -84, 111, 119, 78, 57, 82, -70, -26, 88, 0, -40, -20, -64, -16, 38, -89, 116, 6, 116, 82, -29, -16, -11, -91, 13, -111, 42, -67, 3, 114, -1, -91, 37, -19, 111, -112, -126, -51, 27, -36, -13, 2, 27, -71, 20, 7, 53, -59, 52, -1, 100, 113, -38, 4, 123, 80, -75, -60, -81, -57, 93, 11, -108, 61, 57, -87, -73, 104};
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
    msg.setTimeStamp(0.3855391934942235);
    msg.setSource(45566U);
    msg.setSourceEntity(151U);
    msg.setDestination(14537U);
    msg.setDestinationEntity(187U);
    msg.frameid = 27U;
    const signed char tmp_msg_0[] = {-63, 64, -24, -40, -87, -12, -84, 76, 1, 72, -80, -20, -90, -6, 114, 114, -114, 17, 91, -46, 74, -111, 8, 78, 106, -128, -101, 59, 74, 21, 64, 55, 30, 57, -78, 88, 4, 2, -93, -14, 74, -68, 116, -3, -63, 31, 95, -37, -44, -5, -42, -83, -115, 49, 79, 111, 12, -39, 56, -35, 115, 25, 52, 22, -62, -110};
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
    msg.setTimeStamp(0.7533268016758567);
    msg.setSource(53485U);
    msg.setSourceEntity(187U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(173U);
    msg.fps = 250U;
    msg.quality = 235U;
    msg.reps = 105U;
    msg.tsize = 45U;

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
    msg.setTimeStamp(0.2166317586632488);
    msg.setSource(11562U);
    msg.setSourceEntity(2U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(223U);
    msg.fps = 86U;
    msg.quality = 211U;
    msg.reps = 156U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.0005559936404664345);
    msg.setSource(40702U);
    msg.setSourceEntity(7U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(17U);
    msg.fps = 173U;
    msg.quality = 56U;
    msg.reps = 223U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.5961176330012189);
    msg.setSource(4868U);
    msg.setSourceEntity(171U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.6647862589975111;
    msg.lon = 0.18151608355302584;
    msg.depth = 215U;
    msg.speed = 0.08849727729666135;
    msg.psi = 0.3820749501712898;

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
    msg.setTimeStamp(0.7319395302971989);
    msg.setSource(28086U);
    msg.setSourceEntity(28U);
    msg.setDestination(24694U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.5935015889981776;
    msg.lon = 0.47572272976784924;
    msg.depth = 91U;
    msg.speed = 0.9537065216477452;
    msg.psi = 0.14600360443850624;

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
    msg.setTimeStamp(0.2978080277988002);
    msg.setSource(49340U);
    msg.setSourceEntity(61U);
    msg.setDestination(13777U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.1434955765921162;
    msg.lon = 0.46234857075738534;
    msg.depth = 158U;
    msg.speed = 0.5715549030372559;
    msg.psi = 0.5443547849572768;

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
    msg.setTimeStamp(0.8119609569129257);
    msg.setSource(23968U);
    msg.setSourceEntity(104U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(15U);
    msg.label.assign("UDJKKGMQZMOXBRKQNKHIIGWRZNMFYHJ");
    msg.lat = 0.3172570752401246;
    msg.lon = 0.6699645027487303;
    msg.z = 0.362806901587314;
    msg.z_units = 178U;
    msg.cog = 0.3613340217868922;
    msg.sog = 0.2576262834091344;

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
    msg.setTimeStamp(0.1459386830113063);
    msg.setSource(7131U);
    msg.setSourceEntity(213U);
    msg.setDestination(31468U);
    msg.setDestinationEntity(145U);
    msg.label.assign("SYPTFEGAUNFELJGZCXHXYWARPDUDZBDPYUIEOVNIQCJVAWILHSJHLQKHOUBBCIMXKXFMFFTWHLFKCYQZMIQQPLJOXPXFEXZTFKZJSBYGTMZUDVNBOAXWLWKZDZERBVGWDABWVJRZVESVMOGJINUTAJUROTWRCLWHANYIKQJBYNACNN");
    msg.lat = 0.1819700635651338;
    msg.lon = 0.80893154718613;
    msg.z = 0.8562738065222159;
    msg.z_units = 123U;
    msg.cog = 0.9123350276860959;
    msg.sog = 0.4543598900520822;

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
    msg.setTimeStamp(0.7027693338568912);
    msg.setSource(9155U);
    msg.setSourceEntity(222U);
    msg.setDestination(44913U);
    msg.setDestinationEntity(39U);
    msg.label.assign("GVPRRGZHQBJQYXNSPUNFAWQULPRGLQOXCMVSJ");
    msg.lat = 0.8175226217776123;
    msg.lon = 0.926633300933193;
    msg.z = 0.8426911137935874;
    msg.z_units = 246U;
    msg.cog = 0.799465150029577;
    msg.sog = 0.3521134500571893;

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
    msg.setTimeStamp(0.6890593387922056);
    msg.setSource(6707U);
    msg.setSourceEntity(97U);
    msg.setDestination(52823U);
    msg.setDestinationEntity(54U);
    msg.name.assign("AMFULOKMCYFQZFXIKVOPEYMDWLGFGBJXWBTQULCAEYQTQTQRIMUVAZMFGHMZRHPSWBXHKGAXHZRNXDDKWLZHHBFMLWBOUKB");
    msg.value.assign("DAUUXNOTSITNTFSTYHFCUAEMHXPLPBFXQOOVBSRSDFWLYKIUMHRKOANEBCFWNLBCHPHQXLJXDAKDNMIKOVMLAXGFFIOQMPSYIBTYBASZJCNWOMADZYUVHXJYRMRCEUGFNDMSHIHZZJEZPWGXGIKWPEWLYVQJRLCMLYZHGFVONGPVOJQGKJUUUDVANGTPISEIQREXRQSCAMBPVQJNLKEGKQAGCOKJEZUZRTCWLTYZKWERW");

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
    msg.setTimeStamp(0.4064335838051669);
    msg.setSource(61681U);
    msg.setSourceEntity(47U);
    msg.setDestination(41062U);
    msg.setDestinationEntity(139U);
    msg.name.assign("UUWQKBZFNXSOQLJIHLPQFFZQXMXHQDLYPWFXRVMSAWVTJRGIJHFPLEMWLKDYBCUVHCMKCBZURHNTEVHCZNZITZACZPXWDXOQUTIXKCEQXEVLAAESEFQFGSLVNEFYINJPZMZKNSLXIPRMKZUOEKHKTEPBKJJGBMXOVGBYSIUWGATAQIRSYJLUYCHCJPGKRGWBNJFSWSDOIMOGOP");
    msg.value.assign("KBEGOGRXTSPHGRKISHQPMHA");

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
    msg.setTimeStamp(0.9458738455964766);
    msg.setSource(48027U);
    msg.setSourceEntity(246U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CTWNESJVYLTTOFOROOHXHQOARGEILMHLVZLWMOAAW");
    msg.value.assign("LNVMDNEJYVZPQKCEQZXYEASYWWHJUCQYDKKDLVSXAJAEATJWFURDBWMBAW");

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
    msg.setTimeStamp(0.016530972184619408);
    msg.setSource(15071U);
    msg.setSourceEntity(126U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(17U);
    msg.name.assign("HGICOYPVUXXRLAJZPNYRLBGVMPXNGQVNXJYQTZMIZXGOLCGTNTYLIUABPJFQQNWWVGDFJQGCYAKTIZITOQZEANZERSTOOQOBSFBLWCDFESPHKPKRBKJUKZESARUBCVHFUSAMJRSMEKOYXYHPNWTVGJQNUICLEBDHFDQINMUWOPEUKMLXYL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JBIMGGSTJKXJVUYAQSEOCYWYVFOJLRADAKYIAWGHTZVVRNLXVZWKFIALUDQGPPWJWKNKCTUWHRZNAPPTJPQSRFEATQVGK");
    tmp_msg_0.value.assign("VVPETSBYKMJABSXQKWURYVXTTYKMRHIHOPHJTECTQDGMFESEYFDCZMNDZMEOLYXSCBNPTPHZTKJFQFNWUZYMOECBWTGUQIFXQGNTILCEJWEN");
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
    msg.setTimeStamp(0.9123552779316837);
    msg.setSource(34014U);
    msg.setSourceEntity(242U);
    msg.setDestination(47718U);
    msg.setDestinationEntity(123U);
    msg.name.assign("JBIDXPGMHXUKWUQWZPUHBFQUMLIENXTJGIUMSGZBCDJEQBPKQVBYNJNQHVQLMQSDJLFMTGZZAXFSMJWOLCJMWXRZPEMUWCEJFC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WPYHAMITLUJEHAUQYJVIHAIVXFHCEKVPTZXNTAHDYSRIGVBJYLKZSTCRIEPUEZMUNBQJQ");
    tmp_msg_0.value.assign("SNWNAFZRJMAAFIBVFSWWRPKKOEHLKGBGTVTZMRIISXOCZDSHWQXPIIZYPQSEOXJNBUFHPXXCJWQKNEDPAJWHUYLLFUYTUQYPRVXMBADRIJUYNAFHQHWW");
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
    msg.setTimeStamp(0.30558982168033577);
    msg.setSource(36652U);
    msg.setSourceEntity(58U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(86U);
    msg.name.assign("MYHSTRTNJTAJZCCBJRBPHVZDGOOFRGADGLHFDIYNEWPWXULBLKNNUWXZGOWLAGVCTQWURCCBKATNYTKIVLBXJHUKEAUPKHBXROQIEEWAZQQATTEOLLVMFESZNSDUJFBSLMVYMMDXQA");

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
    msg.setTimeStamp(0.8598053061642668);
    msg.setSource(36148U);
    msg.setSourceEntity(240U);
    msg.setDestination(12525U);
    msg.setDestinationEntity(84U);
    msg.name.assign("GRYBAMRSNQLBKSVSLUDTJEUOMQEPHOFPTNISMEENPUZOUYWAREXBOHLYDAOUFVMZFCIOWCBIJGNYRXRQWSBZZSPVLUFGWRCOIHJJMACXNTKPAUASBZYGYNVZMQMFPKXNQAHLIRQWDFGTKGKUHJ");
    msg.visibility.assign("WCVWXMRCYZNXWU");
    msg.scope.assign("HHYZLOVVKBQDTPWNWLJMINIOYJPRXBBAIBLNWEYDXIPCBHTJPCJHFFPDMBNOQENIRCZNKRSNXAFVQOXKGKLKFUNVGTGQEEQCBAPGSGRRZAYYMWSLMCGMGXVSMXMSZNOTTUQHAIZWFKEOINVMBEBRXAJYGHWUQUJYCFFPRUMFHKOUIXSKZWSJHPORZQDLUTKKGZTMLCA");

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
    msg.setTimeStamp(0.1740633540087837);
    msg.setSource(25155U);
    msg.setSourceEntity(134U);
    msg.setDestination(10167U);
    msg.setDestinationEntity(240U);
    msg.name.assign("EFSSXGUYOOZGLUUJQTWTULPSHHCIFACZPZJKWZYIUVDL");
    msg.visibility.assign("TOILQDIKYIFKHTKJRSNJPQVAOPRDLYCFHMKARRWRPASZVZAZBOAITRMLCSOXJGFDUPIJZWRDSBABWOUZQNOBJJDCJPYZVELZGSKHGQHUMZCJWKKESXLHHENEYYMJYKEUVBZNHGFLXW");
    msg.scope.assign("OXXVRFNIKZMCAEBMFVLVWAZWQJLESIAJOWNRAHDTDLWESPHHZKACFYSDHPQMRXAZFQYRSXNNVXVYFCIVCRNDQQTSATPMUJTKPBFRYGHSEVCITGWTMMFPJXIHAKX");

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
    msg.setTimeStamp(0.8757781957215102);
    msg.setSource(40466U);
    msg.setSourceEntity(229U);
    msg.setDestination(191U);
    msg.setDestinationEntity(208U);
    msg.name.assign("ABWRAMZHAENJIPIRUBXYEPVUVVMWCUAKALJYOOLMOWUZNNW");
    msg.visibility.assign("QEQIXEPDWCYKQIDTHFBHMYHQJDLUNSTCTIOKPGCAXSMNFCLEDYUQOGODAOBFDGTIXTDCXMGEERKJMAGJKEOWRGYXWRFVCWUNMCKUVUTYMZAPKEPLRU");
    msg.scope.assign("ZFPKYPDQKFNQROJOGJRFUDATSEXCWGTEDCRLSXBQAUSKWCTSVUWNQZIOPFDQMRYRBWXHEPBULJKWLDMTUBHVXG");

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
    msg.setTimeStamp(0.6597030187743096);
    msg.setSource(28896U);
    msg.setSourceEntity(106U);
    msg.setDestination(12487U);
    msg.setDestinationEntity(28U);
    msg.name.assign("QNMFNZKSFWJVJOLCBATAOMQJBDRXRFAOAYVUVJHPZYHIDHEHRYGBZUVBUVVKUDBYCOOTONLPFJMMQNRAQQGCXITKMBTUCELSKDGVMKTJIBUTJNIXUCRSIEDKBYGWSRGXUXLMURJQCFQFGIPGGEOVHLQAKENFCBXWBYEKEDZJXOSPECFAPYOISSPCMFHDKREIXYZQXTSNLTGWNIPYTXZICZVJZHWA");

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
    msg.setTimeStamp(0.8649905687805951);
    msg.setSource(24930U);
    msg.setSourceEntity(32U);
    msg.setDestination(40783U);
    msg.setDestinationEntity(5U);
    msg.name.assign("YJOFYXRITPQPVDGBCAZVUIKBMWIDSUMSSCWQLTFIFKFQYEDVUYWQLTCNZBBGNHBHUFF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JLCMSGPFHYASHNDJCBKSYWOYUIGLYXBHDIAKDREBUODZWCZKVTFJIHBTTUCQMWDIMGUSOOFMKENRUVQHZARZIQOOCOXXDXIJTGA");
    tmp_msg_0.value.assign("LOLESTBCJKGZXRUECXFUKYJOQHNOOQUVPCZIVTHGARIBSHMVNKJVOECOAYRILDWOLBLXRLZZWVAVASRFKPHMSYDPTZTIANITYWRDWTQSJEYOPGKCYOKFEQISADETZGASVBDSFGRTWUPZWPZYBGAEVHQKBWHCHNUKLZHBXBVGGSRDNINHCMVPLXMUUABYXOCFYJWKHMAYPIQJBUPNUQXDLJXMTEDEMNFLC");
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
    msg.setTimeStamp(0.33110960440002324);
    msg.setSource(29856U);
    msg.setSourceEntity(64U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(48U);
    msg.name.assign("BVTFLANGCAUOGISKKUMTVTQBNIDFBIELKBLNXWZXZUBHPURWWYKNDFMHFXDQYVRBAHDYMZOYVGEFFLQTQKZFLQJIXBMWPOGUOMYEZYMHRWTOWSPLKCVCWMETAXVIYLXQDLOYRFDMHDPUDZEVHCTNSBIEPSUNGQKPAWQXRTYAOOCZYEEMRZWEJCAFJPCPJSRXLJSDBQJSSNCUWHIPNTXFHSEVVJSXTLPKOQRKNZRAAIKOHCZJGANJM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BECPEYFRGHOWDPOCGZBUMAOJCTKUFLTYQOSGDNJZLXIPFFPHYUSVOKTLVHJFFQEXTALCPXWQMFKYUAVAXDJDDZINOADXLIGTNQNWCSDEYQRTIBUWOQMVGBMFYBPUYEZSUTLSOYONRISWKISVZZHXRNAMQVNKAULBSMVWVKKZKQGJSNRAMPTXCLZHAJ");
    tmp_msg_0.value.assign("LIGHYNVLMELLXTHZKWZEKIAKFNISTVPRPAFPGRHIBXNJIFR");
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
    msg.setTimeStamp(0.6335931006351058);
    msg.setSource(43314U);
    msg.setSourceEntity(110U);
    msg.setDestination(39751U);
    msg.setDestinationEntity(96U);
    msg.name.assign("UGDDJEWOMXAAEJNKPPBAACWGGZITIZNLZNPVBFJSLNTHTRCHYDTJGUVXBZFELRONJEHZSCMUGLXVXDYKBIPWBWAYXYCVFVQFRPKSSEVWTHBZJAVLLUAVWQDEYPHYMHGLDQDFALOCRGMXWJKBOZIFIDBKJOUQGIWCFPFEBKSOSKON");

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
    msg.setTimeStamp(0.8827089494077656);
    msg.setSource(42191U);
    msg.setSourceEntity(154U);
    msg.setDestination(11894U);
    msg.setDestinationEntity(11U);
    msg.name.assign("CEYZPKIRJDIJGYSMTXBSFMNPZDUIFLXCAXUJOZVZQVTKMUGJRTKLHLPXTFVHIOWDMXJOAWEEFIHOVCQGAM");

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
    msg.setTimeStamp(0.7180986362832013);
    msg.setSource(32573U);
    msg.setSourceEntity(182U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(34U);
    msg.name.assign("UYRKKEJYQSORCJSOEGFSEZNLEYTJAFDJWOFVZAVQPBHBWRUMMHFBOYJUOOCEVPPOOHYTSUZLNENKFQOVCBHPWDEPCIGTGTPQGVTQKQMILQJDGDSRCDVZMINMWCYDXIJPPSYVKXZAHFTGXQSTUCAPGRXQESTXBHHIUJCIZVRLTUHVNWKMZJUEMKWRLKZAEFRHTBMVNBNQCRAYUMBBASHZLDBIWXALWXXDAINFRNCILDWJFKYMSXXGLDZAULG");

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
    msg.setTimeStamp(0.6566632308939012);
    msg.setSource(20346U);
    msg.setSourceEntity(56U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(143U);
    msg.timeout = 1231484480U;

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
    msg.setTimeStamp(0.1185821160551952);
    msg.setSource(64820U);
    msg.setSourceEntity(61U);
    msg.setDestination(56077U);
    msg.setDestinationEntity(71U);
    msg.timeout = 672199707U;

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
    msg.setTimeStamp(0.025992217826482866);
    msg.setSource(16198U);
    msg.setSourceEntity(235U);
    msg.setDestination(58361U);
    msg.setDestinationEntity(149U);
    msg.timeout = 465131905U;

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
    msg.setTimeStamp(0.5779060231910687);
    msg.setSource(50552U);
    msg.setSourceEntity(65U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(253U);
    msg.sessid = 3431259922U;

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
    msg.setTimeStamp(0.4443227117645331);
    msg.setSource(36268U);
    msg.setSourceEntity(55U);
    msg.setDestination(9305U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2774453585U;

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
    msg.setTimeStamp(0.8747367609836696);
    msg.setSource(7115U);
    msg.setSourceEntity(83U);
    msg.setDestination(57226U);
    msg.setDestinationEntity(228U);
    msg.sessid = 2419871781U;

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
    msg.setTimeStamp(0.9346561818835388);
    msg.setSource(12261U);
    msg.setSourceEntity(46U);
    msg.setDestination(58733U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1997511042U;
    msg.messages.assign("SWYXDMFTWGJSKCLMPOBWRBWGTNMOCLGNYEHAEZSVOFZPWFMCLHLLGHRNDKNGS");

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
    msg.setTimeStamp(0.29300842704791485);
    msg.setSource(5197U);
    msg.setSourceEntity(173U);
    msg.setDestination(49281U);
    msg.setDestinationEntity(251U);
    msg.sessid = 2677588379U;
    msg.messages.assign("IUOJVHYJOXPYVJHMFQUBBBMOSSSMRIGSBFIEWAUACEDZNOEXFFPTOPBGVIPMSOQFNVZVWLDKKMYXBLHNHZYUCPTMXRGYLJJYLANSNNLGCFHDXCSQTQVRCUWKSCHOUQZIUWBEUCGKJIM");

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
    msg.setTimeStamp(0.8887132087736802);
    msg.setSource(3530U);
    msg.setSourceEntity(225U);
    msg.setDestination(50758U);
    msg.setDestinationEntity(202U);
    msg.sessid = 2721159931U;
    msg.messages.assign("SLJJBGCYHBAPNYBHTIXXVJWNMUTOQIURJRJGDKGGMKIUQQPPWCENBDJWEHYMOTIPPVUHUSEBIEDLVXZWZQBTERIZTOWSTKMAOPGFHXOKIAXTLOMRNYXQLXMWGYBDAFFDZCEHDOVJSIGYACSFUIOBVKPZURSKVCZMCWJNDFMCRPQHQXTRRNFZWQXQRNRXHOLZZVSYVTMQF");

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
    msg.setTimeStamp(0.4966826146603255);
    msg.setSource(53766U);
    msg.setSourceEntity(166U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(26U);
    msg.sessid = 2800724657U;

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
    msg.setTimeStamp(0.8110974331458827);
    msg.setSource(7154U);
    msg.setSourceEntity(134U);
    msg.setDestination(49400U);
    msg.setDestinationEntity(191U);
    msg.sessid = 3332050745U;

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
    msg.setTimeStamp(0.603176064350111);
    msg.setSource(46643U);
    msg.setSourceEntity(1U);
    msg.setDestination(48407U);
    msg.setDestinationEntity(251U);
    msg.sessid = 926037413U;

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
    msg.setTimeStamp(0.8921302470550014);
    msg.setSource(27313U);
    msg.setSourceEntity(207U);
    msg.setDestination(1938U);
    msg.setDestinationEntity(249U);
    msg.sessid = 3504417976U;
    msg.status = 233U;

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
    msg.setTimeStamp(0.3403060658452357);
    msg.setSource(31416U);
    msg.setSourceEntity(122U);
    msg.setDestination(56390U);
    msg.setDestinationEntity(71U);
    msg.sessid = 1934450241U;
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
    msg.setTimeStamp(0.1370245507718374);
    msg.setSource(3171U);
    msg.setSourceEntity(165U);
    msg.setDestination(31958U);
    msg.setDestinationEntity(249U);
    msg.sessid = 2788201788U;
    msg.status = 187U;

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
    msg.setTimeStamp(0.5393468663621541);
    msg.setSource(18755U);
    msg.setSourceEntity(63U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(137U);
    msg.name.assign("OMVZDZNHNGMIJWM");

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
    msg.setTimeStamp(0.8398520582665339);
    msg.setSource(56044U);
    msg.setSourceEntity(102U);
    msg.setDestination(63045U);
    msg.setDestinationEntity(95U);
    msg.name.assign("NPJIDLMVNLVTOOVXUXPEKENVLJEZDIPCCEGXHCFPSQCIQVDKLEAQDBRESLTSOHZDNUNTKCWAWWHTORHYIYVPYGFJFBAFQWMBYDXGYK");

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
    msg.setTimeStamp(0.386921869790681);
    msg.setSource(5469U);
    msg.setSourceEntity(11U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(86U);
    msg.name.assign("KBFSFQUYQEIWBTDQUTHABKALDXXFSVSSSYRIMXZCMKWQQDGWIHIZVZRILILWQSBNTNISJLQUKDCVNKMGGLZCSUMPUTPOHLXNJEVGKFZTQTHLERPYHCUJNCVVOLZIHPINMYVNADRYFMNCDAADPNZGWRCBTEJJPVYDOZAWXXYBFPOFCRZSESXOXMGMGWCOOPHTEWJBVJKWVRWTXQBRPGHIMCUOEDFAUJKRHELATYGBFYLANOKBPHQEJYEFA");

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
    msg.setTimeStamp(0.5666123116030477);
    msg.setSource(42289U);
    msg.setSourceEntity(246U);
    msg.setDestination(30650U);
    msg.setDestinationEntity(242U);
    msg.name.assign("SMFQTPAKCIOCAHPQJMYFOCURUDNQECNOXSUORXPGWKRAZDEDOLIANUZVHNXIRTIPKCZBYLEFHZVHLTPIBYAECEDXLNZJWBAHQMQWJJGFHTXSESCVXYKJBMMIRHLFGWDDZKJOKFWBLTNVKIVRJFJYBVDMUTIOBSEYKOBGUEQDADZXSSRWMGEZQVQPRPIXWWFQJVMFVXWMG");

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
    msg.setTimeStamp(0.4156095935384485);
    msg.setSource(34683U);
    msg.setSourceEntity(36U);
    msg.setDestination(16845U);
    msg.setDestinationEntity(150U);
    msg.name.assign("VQGSPMVXMJIZYWQAQAGUSNXKHEAWOGDELDPVDEKUVOIQCWBWGLDBESKHZYBLXKAFUOCCSQVWKFONVKGHHISROYUHMZTJI");

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
    msg.setTimeStamp(0.620424685306012);
    msg.setSource(50308U);
    msg.setSourceEntity(6U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(58U);
    msg.name.assign("IWVJLMJZRRKIESSHMPUWKGMNLPNJMBGDZIMFUQPKEFYUOHFRJCKKKMHPDBCZJYJFXNXVNVPVCHAYBLXULXCZWNEJONNJWZXIZAQEIILPKVFENVSDOAETWUCBEGSBHOLTDVBXCZYXTAGYUQMELHPWGXD");

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
    msg.setTimeStamp(0.20298285550779438);
    msg.setSource(42307U);
    msg.setSourceEntity(129U);
    msg.setDestination(56047U);
    msg.setDestinationEntity(104U);
    msg.type = 12U;
    msg.error.assign("KABQZESNGWCDRYWDHFBVYNIZQXFHJQICASEXLDYKYLSEQBTMIQWYQOTIPOBGORUFLZSHOOTMVUZHZCLRLGFXDJOWKEUXMDOJXKSSBSXWJEBZUNFOCKKVCBASEWWRGCZLJVNHTYTFTTXDUAERGHLPYGCCOXYIMTUNAFQLYVMVOPKPPWMSUBEKARHAJBTDCMVNPJ");

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
    msg.setTimeStamp(0.6402049279374159);
    msg.setSource(4755U);
    msg.setSourceEntity(202U);
    msg.setDestination(43407U);
    msg.setDestinationEntity(143U);
    msg.type = 9U;
    msg.error.assign("DDBMRISWFLYMNZRLEBQYDHUIQKEODVYUXBRMFXXEEBTFJSHMENDVUG");

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
    msg.setTimeStamp(0.10272923560093694);
    msg.setSource(31966U);
    msg.setSourceEntity(152U);
    msg.setDestination(36067U);
    msg.setDestinationEntity(94U);
    msg.type = 42U;
    msg.error.assign("VZBLUSLLEHHXGAIMRBTWZEHIOMGDFNFXFPSCPKADTYRIXDDFJSJIXKNPITSYQQYWOQHCWSHDJVNDTQLXDJFUXGYWSKESFCKLWXBTJAPZYYAPKIFMMWRKIKEGYOMOBTVDC");

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
    msg.setTimeStamp(0.3688659351598981);
    msg.setSource(50319U);
    msg.setSourceEntity(97U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(148U);
    msg.seq = 6535U;
    msg.sys_dst.assign("KRKSRMQLGBXPNTSBDDCMGEBHWXMVQUPAVTJLCAYEKYSOHRWKQQNNIAVTSFSKJHCOJYUAEPOGLYUHBHODLHWXJYFZSVJFKLEIFTORJHDJYVBKLZOWYCWTZBIFHBLECVIUMPEQUTBGAZXDMSFWQH");
    msg.flags = 152U;
    const signed char tmp_msg_0[] = {-102, -74, 59, -85, 40, -88, -6, -123, 117, -2, -16, -23, -125, -8, -44, -70, -4, -65, -94, -60, 73, 7, 112, 18, -40, -71, 13, -10, 90, 27, -5, 47, 72, 13, 29, -69, -4, 51, 0, -76, -80, 60, -75, -116, -63, -123, -31, -21, 120, -60, 35, -7, 111, -108, -45, 43, -125, -127, -63, -78, 99, 104, 15, 12, -25, 90, 94, -11, 62, -77, 77, 107, 42, -127, 125, 15, 97, -109, -2, 26, 71, -92, -28, -31, 36, 19, 38, -53, 9, -118, 25, 89, -63, 115, -102, -53, 34, -48, 38, -5, 122, -64, 94, 77, -22, 48, -6, -11, -91, 63, 124, -38, -56, -58, -42, -95, -78, -95, 116, -12, 44, -76, 71, 21, 30, 90, 87, 4, 25, -56, -38, 106, -36, -40, 48, -26, -10, 49, 97, -98, 13, -34, -102, -54, 60, 72, -37, 111, 107, 48, 61, -11, 72, 60, 16, -42, 67, -67, 4, -20, 71, 0, -83, -117, 38, -110, 93, -120, 59, 44, 89, 99, 106, 77, 31, -3, 96, 119, 52, 71, -94, 111, 92, -100, -29, 38, -93, -113, 92, 122, -101, -19, -107, 2, -9, 26, 112, -1, -10, 10, -51, -2, 68, 102, -116, 83, 126, -95, -118, 27, 23};
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
    msg.setTimeStamp(0.24457110191603582);
    msg.setSource(58337U);
    msg.setSourceEntity(226U);
    msg.setDestination(63485U);
    msg.setDestinationEntity(125U);
    msg.seq = 65295U;
    msg.sys_dst.assign("NLXLVWCRZDCVHVJOXHAJZFYWVDFSVGOBMXOUYXKGYXXBKOURNUIJCQGRWKIELCHRHAZWMLMSZZCKSBSSDQDVGQKTNUUGDUYTBRNFQEDXBOZAQRRNGBYXJEN");
    msg.flags = 228U;
    const signed char tmp_msg_0[] = {-124, -59, -113, 41, 110, 28, -23, 42, 76, 65, -15, -14, 33, -8, -51, -100, -19, -41, -78, -105, -122, 20, 28, 79, -82, 70, 51, -8, -82, 14, -20, -73, 110, 16, 88, -37, 99, -92, -68, 67, -36, -90, 12, 20, 61, 50, -14, -120, -2, 83, 97, -70, 3, 31, 118, -24, 3, 35, -105, 101, 108, -42, -111, -12, 46, -125, 115, -85, -34, -102, 79, 63, -32, 48, -25, -53, -92, 123, 3, -118, -104, 31, -14, -60, 118, 123, -49, 74, -95, 3, 113, -64, -5, -33, -118, 84, 44, 117, 108, 7, -43, -46, -94, -81, 24, 63, -88, -2, -28, 29, 81, -118, -23, -115, 35, 60, 31, -101, -77, 43, 43, -72, -3, 86, 85, 98, 114, -25, 82, -119, 7, -92, -38, -15, 19, -110, 9, 124, -3, -16, 3, 123, 20, -28, 70, 33, 51, 88, 32, 121, -32, -44, -111, 16, -17, -7, 46, -3, 124, -14, 50, 39, -70, -9, -75, 44, -104, -120, -76, -32, 26, -58, 61, -40, -106, -46, -77, -38, 20, 37, -95, 37, -89, -50, 92, -81, 72, 119, -64, -77, -83, -90, 86, -61, -73, 17, -116, 47, -52, -10, -77, -127, -5, 10, -81, 126, 103, -32};
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
    msg.setTimeStamp(0.37250920684877287);
    msg.setSource(9210U);
    msg.setSourceEntity(181U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(163U);
    msg.seq = 18995U;
    msg.sys_dst.assign("HONVDCKAUQFRIBKGBDFQYQZQSCZZQPSCDKESUAMGFBOXSINAVNDRJSFUWRBZMPOIKPNBEEBFAPJASRAYAJKLEWNUHJEJSKXNVTJAXRYOIVZUJVTKLBHMTUFFQTTECMWFADPXBHNYHJUZRMUOKHNZAZXFQWLVHLEWGGVGGICLWDTYXKPICSHLCDCXJQLVMVLHTXBTXMUKDOVEOPLCIYGRDIRENPMQPFH");
    msg.flags = 138U;
    const signed char tmp_msg_0[] = {66, -122, -97, -42, -11, -63, 113, -120, 126, 79, -16, -95, -72, -65, 0, 119, 122, 101, -107, 120, 30, -52, -17, 87, 113, 46, 101, -86, 92, 34, -18, -5, -83, 69, 97, -3, 19, 65, 93, 2, 99, 114, -88, 115, 77, 54, 3, -97, 38, -76, 81, -4, 97, -114, -46, -48, -106, -113, 66};
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
    msg.setTimeStamp(0.17281844885157938);
    msg.setSource(61646U);
    msg.setSourceEntity(73U);
    msg.setDestination(20208U);
    msg.setDestinationEntity(245U);
    msg.sys_src.assign("GYUVNXMZBLAXRIBGCWDPSSODRSKJFJRJNEVCXUFSGYDRWOIAWHAGSHFKGESGJNKOLJVINCTUZVKIBMEZIKVWLYCAZQPOZZDBPIFPAEUQEAKLVTZWJDJIHFNUVMEAUEMAYGJECTKFFQPJSMSWHQCQYETDTUGOMXHPRLBKDWLOAFMIORROCSUUXNCPXHRLBV");
    msg.sys_dst.assign("MREJSMIOPMKWYWHZXDGVOUXMDHRMBPIICABEFWULFBJCONVSFNGPYZAAZTGWNWBBWYAPVVRADRXLCOTBHXUDRSSCSTDIFRRYOQHTRKYUZKEPWYHILLQZUWLEFRISXXJQBZVKAGNCOUENCPXKJMFYBFQLKJUT");
    msg.flags = 249U;
    const signed char tmp_msg_0[] = {28, 79, 121, 59, -119, -3, -23, -85, -49, 9, -85, 111, -18, -33, 74, 54, 2, 123, -113, 125, 72, -1, 115, -67, -18, -22, 85, 19, -63, -59, -57, 35, -102, -100, -42, -105, -17, -86, 59, 4, 26, 24, -112, -4, -82, -93, 30, -93, 1, 44, -114, 61, 22, 73, -100, -9, 78, 82, -60, 19, -41, -94, -85, 124, 58, 125, 61, -31, 95, -40, 104, 112, 124, 104, -55, 85, -41, -23, -82, 41};
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
    msg.setTimeStamp(0.9603812536318636);
    msg.setSource(1683U);
    msg.setSourceEntity(165U);
    msg.setDestination(49303U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("SXYEXGLIJURVHO");
    msg.sys_dst.assign("DCTABOEFKIUAPIPEBFRYHPLXWKZRVJRWUILALWGGUDZOSVZLXYVRYNYYE");
    msg.flags = 176U;
    const signed char tmp_msg_0[] = {48, -83, -32, -62, -102, 1, 52, 92, 21, 59, 115, 26, 18, -110, 113, 4, 116, 9, 61, 1, 113, 89, 103, 55, -33, -22, 21, -124, -128, -53, 48, 23, -18, 0, -69, 3, 99, 76, -11, -58, -75, -73, -121, 54, -89, -82, 26, -106, 9, -58, -72, 115, -5, 107, -33, 51, -76, -26, 54};
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
    msg.setTimeStamp(0.9855112219106258);
    msg.setSource(942U);
    msg.setSourceEntity(226U);
    msg.setDestination(30226U);
    msg.setDestinationEntity(132U);
    msg.sys_src.assign("WUMQWSAMYUUQJKDPGFWXQRCGIPVAFPWHOBNDJGJUPOHGBZBRUHWJRFSOQXBEXMRKINZSKRTIDSAABRYL");
    msg.sys_dst.assign("UWPYJVHOXVKAENGIQMYQQVGVBLZVSUKZHPYJEWRQMPPKCFBCRLDVHQNRLZTCGAFDHZIMEYICVRWUKAHGTFSNHWKPEWEQJJBWPBFJWBHBJ");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {13, 46, -51, 100, 14, 100, 63, -28, 74, 113, 116, -41, -68, -112, 78, -119, 51, 53, 84, -72, 83, 40, -98, 37, 40, -4, -64, 59, 125, 98, 105, 48, 0, 85, -37, 13, -27, -119, -104, -122, -103, 36, 56, 11, 64, 46, 38, 36, -84, 20, -56, -127, 45, -107, 88, -109, 28, -114, 111, -77, 112, -40, 64, -18, -80, -85, 2, 55, -65, 81, 82, -59, 4, -12, 24, 121, 118, 29, -45, -103, -8, -27, -18, -34, 96, -52, 18, -81, -61, 118, -10, 20, 29, -52, -117, 13, 80, -30, 70, -93, -26, 43, 105, 46, 1, 47, -124, 28, -5, 31, 117, -41, -59, 49, -12, 40, -108, -56, 78, -19, -43, 46, 71, 107, -36, 99};
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
    msg.setTimeStamp(0.0823590284343717);
    msg.setSource(40704U);
    msg.setSourceEntity(35U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(32U);
    msg.seq = 39148U;
    msg.value = 72U;
    msg.error.assign("PVUTSIIILPRCAJXIYDHKGZWRARFJSNKCJJXVASFQMTWOLLNWFHARHNJXWUWVSSOPQQFBGZCOCVAYYQZBTXOGQBPKJKJBCBESBTGF");

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
    msg.setTimeStamp(0.26734822684397597);
    msg.setSource(32542U);
    msg.setSourceEntity(120U);
    msg.setDestination(11472U);
    msg.setDestinationEntity(120U);
    msg.seq = 3697U;
    msg.value = 185U;
    msg.error.assign("KBUQRBWHGNZCVVZZAPPVLGPIKSOVQTOHLLQYNVDTBOCAXWLIGFLJWGYHKMLMCWQRJARYWFJSHBADOHZEPLODHRERUXWMRSYNQUCEGOFNDIZPZYHAPJXKRZFTIEBLZQFINPTCMGIVMPDYYVSTZXFXENKKTBDFTRXCBGFCFSRDEOMINBBXCSEP");

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
    msg.setTimeStamp(0.03200504689813888);
    msg.setSource(6407U);
    msg.setSourceEntity(1U);
    msg.setDestination(1104U);
    msg.setDestinationEntity(246U);
    msg.seq = 6541U;
    msg.value = 32U;
    msg.error.assign("SHGMLVVDZNPIRIR");

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
    msg.setTimeStamp(0.5336483570462222);
    msg.setSource(15553U);
    msg.setSourceEntity(54U);
    msg.setDestination(19308U);
    msg.setDestinationEntity(43U);
    msg.seq = 1652U;
    msg.sys.assign("LOSAWCHBOSWLBTKDHSBJORZAHUVJBMZNKTWANEPTITEPQICZGRLMZKVGOYJBASVRIFWKQLNGRGDXEFNRCRFILVIWAJNWYQSQ");
    msg.value = 0.7768528752423355;

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
    msg.setTimeStamp(0.1291655579322013);
    msg.setSource(42901U);
    msg.setSourceEntity(174U);
    msg.setDestination(59788U);
    msg.setDestinationEntity(53U);
    msg.seq = 37577U;
    msg.sys.assign("NQZUCWSCAAZQFO");
    msg.value = 0.05437064558921234;

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
    msg.setTimeStamp(0.9524134665990908);
    msg.setSource(39492U);
    msg.setSourceEntity(140U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(194U);
    msg.seq = 9409U;
    msg.sys.assign("RJRQRPDEJBVREBJPCZUAGNWAGUYTDSEGSMVKTNUDBQQAYYVYOFECVXMOMSUCSEHAMLBZIQXGOMKNMBSHCUJLXOMFEETDFZXDIXRGVPTWYWHPICEANKDTDZSVDVWT");
    msg.value = 0.7607810827641414;

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
    msg.setTimeStamp(0.9214257104669912);
    msg.setSource(61515U);
    msg.setSourceEntity(177U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(169U);
    msg.seq = 63655U;
    msg.sys_dst.assign("FXNHQOSWRITJVSIHFRYHKMWYOQFOBJPZTNQGEKMYRWUMFLDLZOSIDLXRKPAFWUYSDWOITAEBEBACNQZPWCUGSOWYRKBXPGIRVIWDNHPPLHGGOKFVUNESCJTJSJCQZEQPKKPUYPGRZBCCSRURDAUVCYFTDJQGSZLDMYXZCEJKEBZ");
    msg.timeout = 0.5838866936813807;

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
    msg.setTimeStamp(0.8164963447641558);
    msg.setSource(25265U);
    msg.setSourceEntity(184U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(167U);
    msg.seq = 55728U;
    msg.sys_dst.assign("OKDFSQJBILVAAASOUNZDUVDRTEEYFDXVXSNBWACKRSHOHYGCVEWURDLIBYMWTQCTTBMGJMHXRKRNTZIXMOJKPZSDWORNDAMCWQXULSXVCHOIGQLSBDOPIXPIQFPWNHVBCHEEMVYSBOZPAZQOJPGYLBGQMFCEAWIKRXKYLEUFGTHTVZGVNGYJCUKUJYLENMWSW");
    msg.timeout = 0.792257723226801;

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
    msg.setTimeStamp(0.849885282767086);
    msg.setSource(35677U);
    msg.setSourceEntity(145U);
    msg.setDestination(31835U);
    msg.setDestinationEntity(166U);
    msg.seq = 50290U;
    msg.sys_dst.assign("UKAYDEMJJNNMLQZLIOYMFOELKPCSJCCOGWNBGVRVIZKPDQTESVZWTFXBDXDTHYBYPLYFNTQOHJBGEIREJMXGZUNKZRASYIXWCFPATDGSUAGUVSUWEMTXDUOXSBLNQHTTWLBSIWAQQRYACHAIKKTWCZHXULP");
    msg.timeout = 0.6445438928849461;

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
    msg.setTimeStamp(0.5953211884512931);
    msg.setSource(52220U);
    msg.setSourceEntity(59U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(244U);
    msg.action = 30U;
    msg.longain = 0.756162473260834;
    msg.latgain = 0.7023444892136981;
    msg.bondthick = 808672471U;
    msg.leadgain = 0.07023948899772836;
    msg.deconflgain = 0.9551154326141128;

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
    msg.setTimeStamp(0.25791617895458097);
    msg.setSource(5074U);
    msg.setSourceEntity(97U);
    msg.setDestination(29492U);
    msg.setDestinationEntity(30U);
    msg.action = 173U;
    msg.longain = 0.07664905988695558;
    msg.latgain = 0.9732889424039728;
    msg.bondthick = 979338938U;
    msg.leadgain = 0.08696461108066589;
    msg.deconflgain = 0.917070163638544;

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
    msg.setTimeStamp(0.645333058973263);
    msg.setSource(52832U);
    msg.setSourceEntity(237U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(186U);
    msg.action = 108U;
    msg.longain = 0.8363662381760524;
    msg.latgain = 0.06286555682677153;
    msg.bondthick = 2335054766U;
    msg.leadgain = 0.13315449498757748;
    msg.deconflgain = 0.3674587942904406;

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
    msg.setTimeStamp(0.48098240174981477);
    msg.setSource(9431U);
    msg.setSourceEntity(144U);
    msg.setDestination(15980U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.18138742117054096;
    msg.dist_min_abs = 0.9373136786416312;
    msg.dist_min_mean = 0.8658242380834889;

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
    msg.setTimeStamp(0.1903411708254339);
    msg.setSource(53372U);
    msg.setSourceEntity(13U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(26U);
    msg.err_mean = 0.14710701700368;
    msg.dist_min_abs = 0.766187647527247;
    msg.dist_min_mean = 0.7482127158552633;

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
    msg.setTimeStamp(0.9730250777464922);
    msg.setSource(13338U);
    msg.setSourceEntity(89U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(224U);
    msg.err_mean = 0.3710586924879443;
    msg.dist_min_abs = 0.12650200477576445;
    msg.dist_min_mean = 0.1893408304962807;

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
    msg.setTimeStamp(0.6808141141266747);
    msg.setSource(10161U);
    msg.setSourceEntity(82U);
    msg.setDestination(24264U);
    msg.setDestinationEntity(29U);
    msg.action = 16U;
    msg.lon_gain = 0.12556885427027542;
    msg.lat_gain = 0.8566092069558622;
    msg.bond_thick = 0.06459409288991547;
    msg.lead_gain = 0.6718683786558749;
    msg.deconfl_gain = 0.8550990402058948;
    msg.accel_switch_gain = 0.9748377460658373;
    msg.safe_dist = 0.5866014242494365;
    msg.deconflict_offset = 0.8398604066191708;
    msg.accel_safe_margin = 0.45343870885641946;
    msg.accel_lim_x = 0.9169272117515093;

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
    msg.setTimeStamp(0.2648518621602749);
    msg.setSource(39046U);
    msg.setSourceEntity(22U);
    msg.setDestination(49969U);
    msg.setDestinationEntity(91U);
    msg.action = 66U;
    msg.lon_gain = 0.07889144665867931;
    msg.lat_gain = 0.42491511420200523;
    msg.bond_thick = 0.2845660287504088;
    msg.lead_gain = 0.7478124664782633;
    msg.deconfl_gain = 0.610174139630958;
    msg.accel_switch_gain = 0.27885454261402187;
    msg.safe_dist = 0.10945049452570677;
    msg.deconflict_offset = 0.5896792334332898;
    msg.accel_safe_margin = 0.05084671013826192;
    msg.accel_lim_x = 0.14671949790570316;

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
    msg.setTimeStamp(0.4318945163551833);
    msg.setSource(7475U);
    msg.setSourceEntity(217U);
    msg.setDestination(57310U);
    msg.setDestinationEntity(198U);
    msg.action = 55U;
    msg.lon_gain = 0.6756150228240604;
    msg.lat_gain = 0.8945823749779508;
    msg.bond_thick = 0.6062803173490952;
    msg.lead_gain = 0.6216024832170721;
    msg.deconfl_gain = 0.43783986982020995;
    msg.accel_switch_gain = 0.018952059755890205;
    msg.safe_dist = 0.08354971622964291;
    msg.deconflict_offset = 0.43653419141685934;
    msg.accel_safe_margin = 0.440751800235327;
    msg.accel_lim_x = 0.8005138385884883;

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
    msg.setTimeStamp(0.1355864084153685);
    msg.setSource(18365U);
    msg.setSourceEntity(167U);
    msg.setDestination(36426U);
    msg.setDestinationEntity(253U);
    msg.type = 6U;
    msg.op = 131U;
    msg.err_mean = 0.45612549311794903;
    msg.dist_min_abs = 0.9816504247530236;
    msg.dist_min_mean = 0.9251290697688497;
    msg.roll_rate_mean = 0.7365985274658138;
    msg.time = 0.8643212259022216;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 166U;
    tmp_msg_0.lon_gain = 0.5170652901499555;
    tmp_msg_0.lat_gain = 0.5649010569449648;
    tmp_msg_0.bond_thick = 0.4453578971738863;
    tmp_msg_0.lead_gain = 0.9182782607920439;
    tmp_msg_0.deconfl_gain = 0.7801473589928624;
    tmp_msg_0.accel_switch_gain = 0.7629656038161898;
    tmp_msg_0.safe_dist = 0.3380172520804473;
    tmp_msg_0.deconflict_offset = 0.8421696104107043;
    tmp_msg_0.accel_safe_margin = 0.16311386376668546;
    tmp_msg_0.accel_lim_x = 0.18413945553846922;
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
    msg.setTimeStamp(0.7301373915146216);
    msg.setSource(22780U);
    msg.setSourceEntity(99U);
    msg.setDestination(65489U);
    msg.setDestinationEntity(35U);
    msg.type = 180U;
    msg.op = 121U;
    msg.err_mean = 0.5784360201378347;
    msg.dist_min_abs = 0.9581989926832766;
    msg.dist_min_mean = 0.4500722346226862;
    msg.roll_rate_mean = 0.4055176877892679;
    msg.time = 0.10824587065931801;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 196U;
    tmp_msg_0.lon_gain = 0.8093216708150134;
    tmp_msg_0.lat_gain = 0.9865501373843288;
    tmp_msg_0.bond_thick = 0.28697630633910065;
    tmp_msg_0.lead_gain = 0.864527536932601;
    tmp_msg_0.deconfl_gain = 0.13961342485986128;
    tmp_msg_0.accel_switch_gain = 0.4932165272524528;
    tmp_msg_0.safe_dist = 0.11180606266579107;
    tmp_msg_0.deconflict_offset = 0.008561304490659949;
    tmp_msg_0.accel_safe_margin = 0.021380567148489904;
    tmp_msg_0.accel_lim_x = 0.012715295901814971;
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
    msg.setTimeStamp(0.7885810292502395);
    msg.setSource(52750U);
    msg.setSourceEntity(24U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(81U);
    msg.type = 169U;
    msg.op = 4U;
    msg.err_mean = 0.12044401241700309;
    msg.dist_min_abs = 0.9247026238330648;
    msg.dist_min_mean = 0.7584898445355751;
    msg.roll_rate_mean = 0.2994141472532448;
    msg.time = 0.7925749980242136;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 244U;
    tmp_msg_0.lon_gain = 0.37768493636811473;
    tmp_msg_0.lat_gain = 0.7044875876600075;
    tmp_msg_0.bond_thick = 0.3234542181143395;
    tmp_msg_0.lead_gain = 0.16126315301668392;
    tmp_msg_0.deconfl_gain = 0.8742339503644478;
    tmp_msg_0.accel_switch_gain = 0.7619501707806932;
    tmp_msg_0.safe_dist = 0.11043521591612182;
    tmp_msg_0.deconflict_offset = 0.5001157054792983;
    tmp_msg_0.accel_safe_margin = 0.4774231871838196;
    tmp_msg_0.accel_lim_x = 0.6523812177915881;
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
    msg.setTimeStamp(0.24240454411056644);
    msg.setSource(51059U);
    msg.setSourceEntity(179U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.6599331353933167;
    msg.lon = 0.03255125283280125;
    msg.eta = 1919398462U;
    msg.duration = 12360U;

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
    msg.setTimeStamp(0.026351228120103487);
    msg.setSource(46831U);
    msg.setSourceEntity(85U);
    msg.setDestination(59984U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.15034160803137897;
    msg.lon = 0.6578928406870833;
    msg.eta = 1085368886U;
    msg.duration = 26828U;

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
    msg.setTimeStamp(0.036286442050444734);
    msg.setSource(8272U);
    msg.setSourceEntity(57U);
    msg.setDestination(52601U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.5441376209798858;
    msg.lon = 0.7213718024044087;
    msg.eta = 1468196315U;
    msg.duration = 15048U;

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
    msg.setTimeStamp(0.08171549214034057);
    msg.setSource(4009U);
    msg.setSourceEntity(188U);
    msg.setDestination(17871U);
    msg.setDestinationEntity(157U);
    msg.plan_id = 22832U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.17938915829517543;
    tmp_msg_0.lon = 0.9731112606870057;
    tmp_msg_0.eta = 2659110942U;
    tmp_msg_0.duration = 12537U;
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
    msg.setTimeStamp(0.015896656408539434);
    msg.setSource(7121U);
    msg.setSourceEntity(91U);
    msg.setDestination(6689U);
    msg.setDestinationEntity(88U);
    msg.plan_id = 47103U;

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
    msg.setTimeStamp(0.20250605385937892);
    msg.setSource(51843U);
    msg.setSourceEntity(61U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(100U);
    msg.plan_id = 42530U;

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
    msg.setTimeStamp(0.6698945491482612);
    msg.setSource(29864U);
    msg.setSourceEntity(61U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(103U);
    msg.type = 28U;
    msg.command = 155U;
    msg.settings.assign("CQSJQQEYEIUUOHLXIJKGJGZBSCKVJCBQWZFXJERTXJBMGFPEYMPNFUSJMYZIEGVVHDFNYDEIPBRPC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50032U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.766380036892747;
    tmp_tmp_msg_0_0.lon = 0.8055772143132843;
    tmp_tmp_msg_0_0.eta = 1343767195U;
    tmp_tmp_msg_0_0.duration = 7670U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AIDVBWQZTPQRXYPCFTLWSTFHMOCGPSCBRIIXKOWXBHVODSKNNOFQPHYDGWAAJFENDGPAGTQCHNLDLWZIAFXYLCVVTKKQYLNXTHERJKDEULZZETTWMORUVRAUVJHYLDJKMKUWFMZZAITVEJRSEZSKLBCUDNEURGVINKYPSOUWFZJIHUWTGVCGIGYKVOMHXABBESFXPBWZMOYFNQOBUCSJIXSRP");

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
    msg.setTimeStamp(0.6604767160062404);
    msg.setSource(44829U);
    msg.setSourceEntity(42U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(237U);
    msg.type = 71U;
    msg.command = 128U;
    msg.settings.assign("ZAXCGMUVYNTBCHWWDVJQDBBHQTGUULCZOINRZLSCMOSJZNFECQXEQUDKOUXOMGWSYIY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64735U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6884987504543459;
    tmp_tmp_msg_0_0.lon = 0.7838429092272433;
    tmp_tmp_msg_0_0.eta = 3562110119U;
    tmp_tmp_msg_0_0.duration = 47600U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UVMZHEYHNOQMWGEXCTWGKLUJMFVJMIRYNIBAOQAAKJQODOHCMLNZRVKCXIBBEUTBFVWPCPKDBBTQRWXYNVDEAQXSLKLWZKUBQZNJOJUYNMYPODVATAAWJPXSTSVWEKNPHZHESQCXEUDREGXTZHUDTSGFRQWSMAOL");

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
    msg.setTimeStamp(0.15337113576988182);
    msg.setSource(18350U);
    msg.setSourceEntity(166U);
    msg.setDestination(32947U);
    msg.setDestinationEntity(208U);
    msg.type = 187U;
    msg.command = 151U;
    msg.settings.assign("OPTDWYKMHHLTZVUDGXIFC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59387U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.07107513867790227;
    tmp_tmp_msg_0_0.lon = 0.11319391557128955;
    tmp_tmp_msg_0_0.eta = 3856511216U;
    tmp_tmp_msg_0_0.duration = 54226U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WEHVDTOIYUKRYRTVWSFDIMXVVHEGWVYLGGWHEUJMBZMEUFKJRSCPEI");

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
    msg.setTimeStamp(0.5168632578995114);
    msg.setSource(17158U);
    msg.setSourceEntity(35U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(49U);
    msg.state = 234U;
    msg.plan_id = 20071U;
    msg.wpt_id = 121U;
    msg.settings_chk = 41086U;

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
    msg.setTimeStamp(0.31076502687948737);
    msg.setSource(51592U);
    msg.setSourceEntity(66U);
    msg.setDestination(40177U);
    msg.setDestinationEntity(233U);
    msg.state = 136U;
    msg.plan_id = 39133U;
    msg.wpt_id = 134U;
    msg.settings_chk = 19872U;

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
    msg.setTimeStamp(0.43662307643418774);
    msg.setSource(63513U);
    msg.setSourceEntity(227U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(220U);
    msg.state = 238U;
    msg.plan_id = 56470U;
    msg.wpt_id = 123U;
    msg.settings_chk = 52078U;

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
    msg.setTimeStamp(0.21819837776277518);
    msg.setSource(28U);
    msg.setSourceEntity(201U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(88U);
    msg.uid = 39U;
    msg.frag_number = 227U;
    msg.num_frags = 47U;
    const signed char tmp_msg_0[] = {-12, 76, -38, 74, 13, -17, 95, 38, 2, 27, 101, 115, 7, -67, -17, -95, -42, -97, 32, 50, 10, 71, -18, -1, 91, 86, 110, 118, 90, 62, -16, 66, -67, 1, -104, 80, 87, -7, 10, 81, -44, 112, -53, 25, 93, 86, 31, 82, 44, -94, 89, -61, 121, 115, -108, 121, 65, 71, 106, -71, -88, -122, -76, -85, -6, -25, 83, 81, -125, -67, -97, -5, -32, 51, 51, -77, -109, 17, -120, 84, 0, -72, 50, -1, 11, -53, -99, -73, 39, -2, -110, -6, -76, 66, -41, 6, -21, -106, 16, -126, -28, -53, -67, -110, -59, 99, 11, -46, -54, 99, 8, 124, -46, -33, 100, -51, -10, 44, 86, 53, -77, -39, 88, 35, -111, -121, 46, -111, 103, -98, -110, -64, -126, -20, -109, 75, -63, -38, -118, -24, 120, -41, 57, 13, 55, 78, 5, -44, -16, 67, 109, -70, 57, 117, 32, 19, 54, -12, -13, -5, 102, 119, 107, 52, -56, -74, -124, 36, -79, 102, -107, 76, 39, -92, -20, -34, 59, 29, 122, -37, -11, -81, 61, -26, 23, 11, 84, -120, -55, -14, -35, -78, 51, -121, 37, 93, 90, -15, 76, 105, -50, 93, 11};
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
    msg.setTimeStamp(0.45419286881910537);
    msg.setSource(53758U);
    msg.setSourceEntity(71U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(174U);
    msg.uid = 202U;
    msg.frag_number = 156U;
    msg.num_frags = 209U;
    const signed char tmp_msg_0[] = {82, -90, 53, 11, -79, -127, -7, -109, -59, -52, 64, -7, 3, -98, -18, -110, 8, -15, -6, 126, -109, 22, 0, 87, 27, -61, -50, 8, 89, 102, -42, -96, -55, 2, 108, -28, 58, -28, -70, 9, 51, 46, 71, 3, -76, -38, 117, 79, 59, -105, 71, 41, 52, 82, -76, -11, 125, -114, 107, -27, 29, -127, -53, -112, -93, -24, -107, 83, -106, 69, -14, -32, 99, 71, 93, -1, -106, -54, -99, -50, 47, -115, 22, -103, 75, -54, -74, 52, 31, -18, 66, -67, 117, 21, -36, -93, 81, 125, 125, 74, -99, 56, -122, 8, -54, 66, 1, 102, -57, 90, -46, 51, -98, -21, 54, 73, -110, 54, 83, -96, -91, -53, 85, -37, -121, -87, -96, -105, 66, 44, -58, -28, -7, -43, 75, 84, -55, 65, 63, -123, -4, 84, -26, 81, 23, -29, -125, -128, -87, 120, -104, -108, 35, -122, 35, 125, -103, 90, -73, -64, 81, 19, -52, -101, 9, 105, 94, -5, -115, -14, -13, -39, 45, 21, 94, 106, -120, 77, 17, 99, -87, -41, -24, 43, 112, 60, -36, 98, 53, 73, 65, -56, -85, 75, -85, -15, 26, 80, -96, -100, 88, 43, 74, 22, -10, 59, -78, 8, 120, -52, 28, 76, -26, -123, -77, -54, 35, -63, 8, -115, 70, 30, -95, 60, -86, -1, -82, -94, 52, -85, -59, 39, 60, 104, 118, -38, 15, -13, 116, 108, 69, 79, -118, -46, -118, 3, 123};
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
    msg.setTimeStamp(0.9175431010273672);
    msg.setSource(17163U);
    msg.setSourceEntity(232U);
    msg.setDestination(4240U);
    msg.setDestinationEntity(130U);
    msg.uid = 161U;
    msg.frag_number = 174U;
    msg.num_frags = 49U;
    const signed char tmp_msg_0[] = {-7, -92, -121, -102, -30, 108, 116, -58, 122, -22, 105, -12, 9, 119, 9, -78, 45, -75, 42, 9, -63, -118, 23, 109, 109, 102, 54, -121, -38, -67, 13, 62, 99, -39, 21, -60, 58, 97, -43, 11, -96, 20, -90, -1, 95, 26, 87, 32, 121, -5, 25, 91, -33, -18, 49, 0, -85, -7, 68, 45, -22, 20, -13, -95, -7, -79, -119, -101, 34, 35, -73, -77, 126, -94, -66, 0, -57, -88, -40, -112, -66, 120, 100, 24, 117, -86, 111, 13, -115};
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
    msg.setTimeStamp(0.4464738843422825);
    msg.setSource(17092U);
    msg.setSourceEntity(171U);
    msg.setDestination(28444U);
    msg.setDestinationEntity(47U);
    msg.uid = 8U;
    msg.op = 5U;
    msg.frag_ids.assign("LNBNYEFMQAITEVTUME");

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
    msg.setTimeStamp(0.8923181290217599);
    msg.setSource(26115U);
    msg.setSourceEntity(155U);
    msg.setDestination(20008U);
    msg.setDestinationEntity(160U);
    msg.uid = 209U;
    msg.op = 166U;
    msg.frag_ids.assign("ERDQVIZKPKRTNYTNHJYRBMBJBNVYEQHVUPNTBXKGNEIBGJAVKDBEJAOZVFMSTZOWJTCTJKULBEQGLIUSRMAMSQVRGQLCZLMDAIGDQZXLUHWVRKTIASHIYHMLQUYCKAINRMRUUDPMOPYZQFHEXIFCGBSJOCNPKZQXOWAZXSVHAR");

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
    msg.setTimeStamp(0.33693174660312075);
    msg.setSource(56699U);
    msg.setSourceEntity(160U);
    msg.setDestination(22237U);
    msg.setDestinationEntity(113U);
    msg.uid = 4U;
    msg.op = 94U;
    msg.frag_ids.assign("IEVZEQUXPMLNCMAXNFHSDCMYABEDKYDFDIWMGTYFESGGWWJEHEWYH");

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
    msg.setTimeStamp(0.15924440161788256);
    msg.setSource(56427U);
    msg.setSourceEntity(131U);
    msg.setDestination(24712U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("PRCWODTQGJPIZSIQDNGKQFEJEYOOUPPWPTVHVDNABKLZUCBPTXHFEXGWIVRUYNXFUMUXNLDEJDIKRFVRTAOQKJWASNYBQTZBQVLQMTDI");
    const signed char tmp_msg_0[] = {24, 71, 77, 29, 32, 109, -116, -74, 23, 25, -37, 1, 108, 101, -57, -17, 12, -113, -7, -68, -41, 98, 83, -42, -41, 81, 33, 6, 31, -28, -123, -24, 33, 7, 81, 81, 85, -93, -67, 57, -86, 64, 112, 54, -114, -114, 86, 120, -8, -26, -51, -25, 94, 28, 15, 105, -37, -32, 13, 106, 73, -43, -44, -64, 14, -65, -18, -53, -20, -123, -99, -117, -79, 108, 105, 102, -67, 64, 46, 28, -121, -23, -123, 70, 18, 59, 49, 80, -71, 37, 94, -42, 30, -26, -101, -22, -2, -92, 71, 29, -39, 31, 87, 83, 33, 103, 24, -37, 53, -95, -42, -14, 76, -62, 30, -115, 111, 116, -3, 31, 63, 83, -94, -12, 115, -66, 106, -68, -45, 25, 82, -34, -126, 31, 3, 74, -43, 97, -98, -26, 115, 2, -89, 64, -74, -52, -37, 40, 81, 125, 90, 65, -110, 83, -41, -60, -33, -17, -69, 98, -79, 125, 75, -11, 46, 83, 20, -42, -13, -23, -43, 110, 87, -59, 123, -113, -77, -67, -94, -92, 18, -28, -12, 38, -69, -80, 45, -102, 64, -110, -73, -5, 46, -83, 63, 45, -106, 100, 122, -53, 40, 36, -84, 12, 125, -3, -120, 24, -69, -56, -39, 83, 100, -79, -79, 70, 69, 125, -103, -25, -128, 18, -93, 87, 12, -114, -38, 23, 76, -103, -118, -10, -123, 71, 76, 12, -25, -64, -88, -16, 107, -15, -89, -105, 31, 116, 14, -3, -103, 34};
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
    msg.setTimeStamp(0.5715314840483092);
    msg.setSource(2546U);
    msg.setSourceEntity(210U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("HWFEJMBNVXVDYSMUEMKAHDSWABQIZBEEXQMGXWWJGRGVIUZUOLMCBIULHUKISIVDLBFZICKPLGZVFWRHKNUUNSBCWXVIJDUPDLHKGETSYONBBSZQGOQWXOHPJRCYTVJJFAWIIXLTQPRLMCHGCFRKQQDHMOBAOHDLSGYKBYAXNRE");
    const signed char tmp_msg_0[] = {-91, 114, 67, -28, -93, -96, -52, 15, 98, 113, 12, -83, -64, 107, 14, 124, -96, -50, -102, -58, -70, -20, -87, 90, -28, 43, -39, -48, 125, -56, 22, -2, 39, -119, -78, 86, 85, 106, -23, -40, 57, -35, 13, -83, 111, 90, 84, -127, -119, 121, -44, -77, -2, -41, 24, 66, 12, 46, 34, 26, -6, -100, -99, -120, -115, 58, 96, 61, -57, -16, -88, -76, 45, -59, -47, 63, -113, -29, -116, -76, 126, 43, 116, -100, -110, -65, 96, -16, 1, 40, 28, -52, -31, 30, -53, -30, 59, 35, 43, 101, -20, 25, 68, -48, -12, 15, 88, 66, -47, 38, -40, -90, -61, -117, 12, -120, 1, -40, 91, -55, 89, 46, 83, 87, -28, -21, 43, -114, 86, -37, 105, -121, -41, -46, -121, -24, -29, -29, -105, 82, 66, -121, -124, -53, 10, -29, -100, -124, 10, -51, -44, 2, 26, 126, 70, 82, -18, -114, 108, 24, -44, -60, -36, 104, -99, 85, -5, -3, -102, -15, -126, 42, -12, -48, -95, -125, 86, 62, 38, 117, -11, -47, -83, 91, 83, -120, 28, 88, -30, -64, 67, -113, -42, 45, 56, 71, -68, 44, 98, 99, -50, -17, 32, 98, -20};
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
    msg.setTimeStamp(0.2442400065419884);
    msg.setSource(16950U);
    msg.setSourceEntity(87U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("BOLOFNBEQHWAWHHSVJAYPIOXMMSUCIVNNBBGWNLFIZQRTKQCHZXMDOZDFYHWDMK");
    const signed char tmp_msg_0[] = {-18, 87, 85, -109, 98, 36, -117, -68, 100, -27, -118, 84, -9, -55, 103, -1, -15, 48, -89, -89, 42, -107, -5, -79, 84, -15, 105, -26, -113, 28, 18, -48, 18, 22, -102, 124, -71, 83, -66, 59, -10, 76, -109, 4, 52, -80, -105, -88, -60, -45, -5, -68, 89, 42, -114, -51, -120, -71, 104, 93, -25, 70, -64, 23, -106, 111, 30, 1, -102, -61, 68, 53, 111, 77, -24, 116, -69, -122, -113, -29, 115, -38, 47, 100, 58, 53, -30, 1, 91, 38, -104, 36, 42, -26, 75, 101, 27, 125, -47, -101, 18, 65, -71, -84, 72, -33, -78, 87, 78, -113, 54, -80, 78, -48, -18, -78, 40, -7, -114, -99, 122, -30, 111, -44, 4, -77, 22, 10, 15, -124, -76, -102, -68, -38, -107, 107, -16, 71, 74, -95, 86, 15, -51, -3, 22, 107, 73, -1, -65, 9, -104, 74, 9, -34, -49, -89, -20, 93, 19, -15, 29, 119};
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
    msg.setTimeStamp(0.6305494123383641);
    msg.setSource(62313U);
    msg.setSourceEntity(20U);
    msg.setDestination(11895U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.3059216703361055);
    msg.setSource(19925U);
    msg.setSourceEntity(16U);
    msg.setDestination(39903U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.43847682997025317);
    msg.setSource(43647U);
    msg.setSourceEntity(24U);
    msg.setDestination(4206U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7110390540182199);
    msg.setSource(59474U);
    msg.setSourceEntity(250U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(31U);
    msg.target = 50615U;
    msg.bearing = 0.16005568838686313;
    msg.elevation = 0.1435027547736618;

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
    msg.setTimeStamp(0.6596717331596635);
    msg.setSource(47161U);
    msg.setSourceEntity(23U);
    msg.setDestination(3380U);
    msg.setDestinationEntity(151U);
    msg.target = 57085U;
    msg.bearing = 0.48893601990455227;
    msg.elevation = 0.6673663643616348;

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
    msg.setTimeStamp(0.6314175035279839);
    msg.setSource(24812U);
    msg.setSourceEntity(9U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(253U);
    msg.target = 26447U;
    msg.bearing = 0.8652631910525183;
    msg.elevation = 0.21716272549995697;

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
    msg.setTimeStamp(0.17587012691453607);
    msg.setSource(23692U);
    msg.setSourceEntity(142U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(49U);
    msg.target = 19751U;
    msg.x = 0.8143187890107974;
    msg.y = 0.613478950422802;
    msg.z = 0.5554149191124892;

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
    msg.setTimeStamp(0.37212293334045277);
    msg.setSource(40756U);
    msg.setSourceEntity(53U);
    msg.setDestination(44461U);
    msg.setDestinationEntity(223U);
    msg.target = 13736U;
    msg.x = 0.5599340563877694;
    msg.y = 0.9453553924277924;
    msg.z = 0.4555940522592028;

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
    msg.setTimeStamp(0.5902972461055925);
    msg.setSource(18559U);
    msg.setSourceEntity(220U);
    msg.setDestination(25918U);
    msg.setDestinationEntity(97U);
    msg.target = 20536U;
    msg.x = 0.18510138101262164;
    msg.y = 0.903312202450769;
    msg.z = 0.5807426933853849;

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
    msg.setTimeStamp(0.5989738131703071);
    msg.setSource(37770U);
    msg.setSourceEntity(146U);
    msg.setDestination(59401U);
    msg.setDestinationEntity(43U);
    msg.target = 54344U;
    msg.lat = 0.8137151977884535;
    msg.lon = 0.392607573436754;
    msg.z_units = 104U;
    msg.z = 0.6806580422011859;

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
    msg.setTimeStamp(0.6833525000480783);
    msg.setSource(41542U);
    msg.setSourceEntity(233U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(151U);
    msg.target = 49188U;
    msg.lat = 0.7155713048206322;
    msg.lon = 0.03511768419995698;
    msg.z_units = 180U;
    msg.z = 0.7528992286690933;

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
    msg.setTimeStamp(0.5964242710821754);
    msg.setSource(29198U);
    msg.setSourceEntity(234U);
    msg.setDestination(16603U);
    msg.setDestinationEntity(32U);
    msg.target = 50692U;
    msg.lat = 0.6088199608281143;
    msg.lon = 0.8283732372791689;
    msg.z_units = 72U;
    msg.z = 0.4962788146264274;

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
    msg.setTimeStamp(0.008188186835413891);
    msg.setSource(1483U);
    msg.setSourceEntity(115U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(63U);
    msg.locale.assign("GHYSNABUWNMDKLEQTXOQVGKSUKLLPQNR");
    const signed char tmp_msg_0[] = {10, 33, 117, -80, 7, -10, 113, -83, -83, 123, 2, -29, 28, 13, -25, -105, 58, 64, 103, -31, -37, -15, 91, 79, 78, -23, -6, 12, 60, 83, -26};
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
    msg.setTimeStamp(0.6482852063492938);
    msg.setSource(52644U);
    msg.setSourceEntity(25U);
    msg.setDestination(20175U);
    msg.setDestinationEntity(26U);
    msg.locale.assign("YQJUWBLNDCGXNZWRUXTBHUVRBHVCHGFGZEJKLDVCMPNKSJJILCQYHSFQYZQSGBQAAEXEIASFOSMPWJROAWNGKVWLDOMMITIOFPSNYXFGKYKBCOMICCTOLRTKNAJDFXUDJUEWERYYHQTKUPNVVJEDWGSCDXXMJUZMWTUQZL");
    const signed char tmp_msg_0[] = {32, 83, -63, -104, -59, 107, -72, -103, 56, -128, 79, -45, 63, -29, 80, 10, 53, -16, -83, 117, 9, 49, 89, 33, -79, -52, 23, 123, -7, 106, 116, -44, -30, -67, 84, 86, -109, 62, 51, -85, -59, 74, -35, -55, -6, 5, -128, 43, -61, 1, -76, 114, -38, 48, -3, -70, -110, -36, 41, -81, -19, 51, 88, 110, -74, 114, 25, -67, 33, 3, -22, -22, 54, 118, 70, 114, -97, 96, 33, 65, -100, 15, 8, -111, 41, -8, 99, -89, 5, -19, 48, 36, -87, -83, 37, 103, 31, -82, -17, -92, 29, -71, -23, -71, -57, -55, -6, 3, -97, 73, 43, -122, -88, 61, 23, 125, 105, 16, -101, -59, -54, -40, 68, -33, -96, -92, 19, 52, 59, 55, -123, 36, 121, 52, -41, -128, 50, -58, -86, 51, -100, -29, -126, -91, 71, 112, 100, 43, -100, -56, 15, 49, -100, 30, -32, -88};
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
    msg.setTimeStamp(0.44238404553342936);
    msg.setSource(48694U);
    msg.setSourceEntity(163U);
    msg.setDestination(12404U);
    msg.setDestinationEntity(17U);
    msg.locale.assign("UVJDWJZCWGMSAENFSDNVNELLWOEEFGJPGMYOPSYPYRQZSJHCAMAVBTGDDRHTVFOHOBLHNKICFHDVSFOTDUXBOZVTBMDPUMUNWHMAIACLVGQZYEXWHOIJVSZXUJKJGHZKWBXSQTLAKASKCEIRNGNCKUOLDQNWSZRBYITHJBCCRPXHSFGKALQYTYBIYAFUIEPDOFMZQXQEJJYFZRXMZMUXMRGFYCKUW");
    const signed char tmp_msg_0[] = {-118, -49, 41, -117, -69, 25, -45, 109, -58, -13, 0, -54, 46, -95, 49, -86, -71, -124, -77, 14, 105, 79, 89, -1, 103, -101, 109, -16, 23, -36, -30, -50, -88, -1, -119, 120, -59, -96, 6, 82, 4, 108, 27, -22, -39, -73, -2, -126, 73, -11, -36, 18, -126, -20, 61, 76, -103, -91, 90, -107, 48, 51, -113, -52, 75, 68, 31, -5, 73, 95, 55, -73, -48, 45, 11, 32, 99, 22, -94, 59, -107, 52, 112, 24, -94, -9, -101, -26, -99, -91, -56, 19, 28, 62, -46, 60, 61, 78, 29, -2, -28, -71, 2, -59, -55, 99, 115, 21, -41, -7, 22, -46, 37, -60, 7, 32, 16, -85, 7, 20, -9, 93, -119, 92, -12, -20, 54, 44, 98, -83, -113, -94, 98, 73, -18, 40, 125, -82, 58, 58, 109, 43, 78, -85, -75, 57, 14, 64, -48};
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
    msg.setTimeStamp(0.33867609414183186);
    msg.setSource(47601U);
    msg.setSourceEntity(226U);
    msg.setDestination(62812U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7887308460075316);
    msg.setSource(42966U);
    msg.setSourceEntity(109U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.5510747375758285);
    msg.setSource(53488U);
    msg.setSourceEntity(138U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.24594727224088264);
    msg.setSource(40738U);
    msg.setSourceEntity(168U);
    msg.setDestination(59999U);
    msg.setDestinationEntity(17U);
    msg.camid = 49U;
    msg.x = 56079U;
    msg.y = 6203U;

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
    msg.setTimeStamp(0.5954384636962677);
    msg.setSource(45976U);
    msg.setSourceEntity(162U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(209U);
    msg.camid = 100U;
    msg.x = 7715U;
    msg.y = 25264U;

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
    msg.setTimeStamp(0.22789814249001472);
    msg.setSource(48528U);
    msg.setSourceEntity(40U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(150U);
    msg.camid = 148U;
    msg.x = 57272U;
    msg.y = 57685U;

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
    msg.setTimeStamp(0.23061948898436202);
    msg.setSource(53287U);
    msg.setSourceEntity(193U);
    msg.setDestination(17938U);
    msg.setDestinationEntity(119U);
    msg.camid = 242U;
    msg.x = 18072U;
    msg.y = 63394U;

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
    msg.setTimeStamp(0.6838256465955352);
    msg.setSource(47509U);
    msg.setSourceEntity(34U);
    msg.setDestination(17171U);
    msg.setDestinationEntity(83U);
    msg.camid = 60U;
    msg.x = 10075U;
    msg.y = 28050U;

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
    msg.setTimeStamp(0.21247568337382217);
    msg.setSource(3777U);
    msg.setSourceEntity(97U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(171U);
    msg.camid = 68U;
    msg.x = 40154U;
    msg.y = 13993U;

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
    msg.setTimeStamp(0.7332062829282184);
    msg.setSource(61347U);
    msg.setSourceEntity(69U);
    msg.setDestination(65022U);
    msg.setDestinationEntity(160U);
    msg.tracking = 91U;
    msg.lat = 0.33962153430563524;
    msg.lon = 0.6490538429300399;
    msg.x = 0.9485241344420987;
    msg.y = 0.4968128236701156;
    msg.z = 0.24829564991117836;

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
    msg.setTimeStamp(0.530755786337583);
    msg.setSource(16655U);
    msg.setSourceEntity(56U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(109U);
    msg.tracking = 78U;
    msg.lat = 0.32297966418960977;
    msg.lon = 0.18219576444705343;
    msg.x = 0.9893501327676352;
    msg.y = 0.9246546402843134;
    msg.z = 0.028101078169899152;

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
    msg.setTimeStamp(0.49135767314057877);
    msg.setSource(4731U);
    msg.setSourceEntity(212U);
    msg.setDestination(827U);
    msg.setDestinationEntity(2U);
    msg.tracking = 12U;
    msg.lat = 0.5974040336184094;
    msg.lon = 0.4509648461003247;
    msg.x = 0.28580519220625;
    msg.y = 0.11286591663144918;
    msg.z = 0.41294266873778307;

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
    msg.setTimeStamp(0.5088424740388077);
    msg.setSource(36618U);
    msg.setSourceEntity(10U);
    msg.setDestination(37583U);
    msg.setDestinationEntity(144U);
    msg.target.assign("YRUQAZAPWCMMKNFGQTAFJPYPDGWPWDXIMVXOWJQOXHDOGXIRRJHUWDBEYZLRMVOAGSUCTQOHLAKVHTVRUDUBBMVPURSFQBIWWTMGXUGJNYZKMRCLEEXDTHGPBEPASVCKBDQKFYTSKMNNQLEJDUMNOFIDIXLYNCMXGEBXKHJYAQZAZYLCVJOQYJSIWLFNZJNELBCOOUEGAVSAWZWZHHSKVZZEPTFIT");
    msg.lbearing = 0.13860735982825445;
    msg.lelevation = 0.9373945844384911;
    msg.bearing = 0.32073669491085777;
    msg.elevation = 0.32580893239581654;
    msg.phi = 0.9473536126007154;
    msg.theta = 0.28791410613346735;
    msg.psi = 0.3297618175727388;
    msg.accuracy = 0.7888191297299306;

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
    msg.setTimeStamp(0.7482614380212816);
    msg.setSource(9482U);
    msg.setSourceEntity(201U);
    msg.setDestination(40760U);
    msg.setDestinationEntity(60U);
    msg.target.assign("TZAHLOFVRLQAXCIHOYNRAEDPFVXHJBARLUCEWSUBAQMCXDKZRN");
    msg.lbearing = 0.7969363845984206;
    msg.lelevation = 0.19267551822735207;
    msg.bearing = 0.8264335017807858;
    msg.elevation = 0.07251865093745113;
    msg.phi = 0.45664828745335617;
    msg.theta = 0.5672392074223586;
    msg.psi = 0.19695604939530253;
    msg.accuracy = 0.6354737054123005;

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
    msg.setTimeStamp(0.9153934325684892);
    msg.setSource(41666U);
    msg.setSourceEntity(201U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(75U);
    msg.target.assign("LNAHQDPGTDPDBRZAWRXYMGIJDFJZKQWWIWXIOUTCLRHYFSKLUGEZKSRMOGBRPEVWAKIKZLVUZUOIBDFOMYHDRRUVOYPGZUPQQMCXVBPTBGEHHFHRZCOPFVNV");
    msg.lbearing = 0.6477190464500417;
    msg.lelevation = 0.736497926971845;
    msg.bearing = 0.3976856924598169;
    msg.elevation = 0.4174881281913633;
    msg.phi = 0.8708981906267534;
    msg.theta = 0.36133845501553086;
    msg.psi = 0.7577638039826652;
    msg.accuracy = 0.32936866430924483;

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
    msg.setTimeStamp(0.49938610207530965);
    msg.setSource(41684U);
    msg.setSourceEntity(204U);
    msg.setDestination(63260U);
    msg.setDestinationEntity(43U);
    msg.target.assign("INCXFHSIYQVVMYLMLCZIVICYFJTQSFABWKRUDBLFNZJEABGOMKQQNHPBSRDQVVZTAQTESCFLPELRXQUMWWGNDCXKKYJDKMVUZBWXUOIGMSOMWEGNGNUHZUPCNUDJCGOJUSPDAVAPWNMQKITIDEROOIAHIHHHAYFSYZTTXPHWRJWKJBVRLXYRPNYXDTEVODMRGOP");
    msg.x = 0.24615557634977125;
    msg.y = 0.3697909378947738;
    msg.z = 0.4594982363217416;
    msg.n = 0.35427623258838714;
    msg.e = 0.7054584298116502;
    msg.d = 0.8886828414551979;
    msg.phi = 0.1374473952812605;
    msg.theta = 0.3840313828240225;
    msg.psi = 0.8435542690924694;
    msg.accuracy = 0.24416116874131033;

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
    msg.setTimeStamp(0.859600392084737);
    msg.setSource(10845U);
    msg.setSourceEntity(66U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(186U);
    msg.target.assign("TTUOKHXGNLAXITXHEOGQZIOLWPBWTHIYKEITDKAHJUUHKLSRBMBJCJWEAGQSIKFHRHPNFMTAIYMOIELCLLBFGCDNDZADMFBUXBVQZSRCENWDYGTLAKCFEQZYLZVYXBVZIPUMQPVRJVIZCCRPVJMQWDTFWKRYEGBSFUGDQORAUMRPJURWOBHQJYXJCZEOBVNKSHNRFXK");
    msg.x = 0.4899143267205982;
    msg.y = 0.8480044042569836;
    msg.z = 0.8188268983382371;
    msg.n = 0.5631964630153907;
    msg.e = 0.4233859545911517;
    msg.d = 0.8487769251301897;
    msg.phi = 0.6573008259163012;
    msg.theta = 0.9084756719465168;
    msg.psi = 0.8714933461434938;
    msg.accuracy = 0.18711725488561415;

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
    msg.setTimeStamp(0.7522943360569131);
    msg.setSource(57826U);
    msg.setSourceEntity(216U);
    msg.setDestination(20475U);
    msg.setDestinationEntity(161U);
    msg.target.assign("GGGRTXQFTIVUPFXPLZABCYOQKEUUCVETISERWISMSHFXNDLWWGJCMYYD");
    msg.x = 0.8219533839916113;
    msg.y = 0.3282610907549397;
    msg.z = 0.8952946191818967;
    msg.n = 0.8863665206914096;
    msg.e = 0.06672964111139557;
    msg.d = 0.6432985202677681;
    msg.phi = 0.5218826987525759;
    msg.theta = 0.6365923266958505;
    msg.psi = 0.7095197492372218;
    msg.accuracy = 0.5432641001500178;

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
    msg.setTimeStamp(0.8959289469134311);
    msg.setSource(49004U);
    msg.setSourceEntity(67U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(135U);
    msg.target.assign("DXUJKPXAOAOVSKXZLSNREYEBHVSLVTGPCOMZKOWWQYYKVODEPAVDKCAUBTDATCFKORPDJOJAJATXMMW");
    msg.lat = 0.8677011055955007;
    msg.lon = 0.06928716624323095;
    msg.z_units = 132U;
    msg.z = 0.2240651917471984;
    msg.accuracy = 0.5709870497266848;

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
    msg.setTimeStamp(0.4770633833258613);
    msg.setSource(4814U);
    msg.setSourceEntity(195U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(17U);
    msg.target.assign("RSLJDBSMSTHVSTNYQLMKTCUBRFXGCDBYEAHWBNWHMISTWEVZIODSGJCKQONNQUTLHWRJQFXVGVRCLDYZIWEIZMECJWFSYDDWHCZEGISPMQUXQLJUUMOFIOAPKHQRHDDPCKBNPVDPOBGWBU");
    msg.lat = 0.8350267441514333;
    msg.lon = 0.7075196156932007;
    msg.z_units = 210U;
    msg.z = 0.8621995927686192;
    msg.accuracy = 0.6857738488071546;

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
    msg.setTimeStamp(0.21126515850661698);
    msg.setSource(10493U);
    msg.setSourceEntity(147U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(192U);
    msg.target.assign("MSPFVBZPJDTHPGBTSEOGLARKEGGNWTDRBHEMUOOKJJUFRUBIIXPJRNLDFKMAUAQIOBKDLWHOEEBIEKRSJIEDDVQRYPFNBUJYCUXUZASHMQVCKQVCABYWTXNMZDFLCNJTWJTHOWWSPUYSLROXXQASFEGHTYHCOHEWSUZBXYKLZHOPOYIRPLNFUZFKYBJRWLMRQIGQSLTVTSMHJFXVCNEADNXTVIFAGQGVWNCLQWYZYCX");
    msg.lat = 0.039272117768153536;
    msg.lon = 0.5684350696933771;
    msg.z_units = 86U;
    msg.z = 0.4147082417539566;
    msg.accuracy = 0.9814475887830499;

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
    msg.setTimeStamp(0.36776702578831044);
    msg.setSource(58012U);
    msg.setSourceEntity(246U);
    msg.setDestination(54688U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JNYIWFLHOCQSEMALXIAHDRNJUBUVCEDAGZCTRRCXUDQFRCEQGVUWIFZITECFAMYZXBUOANSQSKPH");
    msg.lat = 0.3661557452143216;
    msg.lon = 0.2837305093033332;
    msg.z = 0.6299691291107291;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.26051130682043244);
    msg.setSource(12665U);
    msg.setSourceEntity(89U);
    msg.setDestination(2495U);
    msg.setDestinationEntity(222U);
    msg.name.assign("GCDGQEVMTIBCTIMLMKPITTGZZVHQHPBTDXMNXDDZWLNHRGQLHEMZIRJIDBCSWVFMPRRBGPIGAPOWURAOQNWHZTPLVEBBJCOONUPFEUAOHJCKRDZVDCUVSTNMGOQSCVBBHYQXFF");
    msg.lat = 0.6889648888494841;
    msg.lon = 0.3952415999987301;
    msg.z = 0.9777538482547795;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.5256764249998378);
    msg.setSource(33283U);
    msg.setSourceEntity(253U);
    msg.setDestination(931U);
    msg.setDestinationEntity(238U);
    msg.name.assign("ACOSOXHRMUDYNIFVANATKHGEDHCGWWTWRX");
    msg.lat = 0.7879241491254533;
    msg.lon = 0.18168364368999756;
    msg.z = 0.6872496299692064;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.2017967531043745);
    msg.setSource(20332U);
    msg.setSourceEntity(75U);
    msg.setDestination(12335U);
    msg.setDestinationEntity(214U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.20035678264019408);
    msg.setSource(41033U);
    msg.setSourceEntity(54U);
    msg.setDestination(55168U);
    msg.setDestinationEntity(137U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.6548638138200834);
    msg.setSource(61455U);
    msg.setSourceEntity(90U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(201U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.7137558727057575);
    msg.setSource(60386U);
    msg.setSourceEntity(39U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2545061221222159;
    msg.type = 158U;

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
    msg.setTimeStamp(0.1410358334253078);
    msg.setSource(50827U);
    msg.setSourceEntity(242U);
    msg.setDestination(45709U);
    msg.setDestinationEntity(184U);
    msg.value = 0.971329968899351;
    msg.type = 157U;

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
    msg.setTimeStamp(0.03689661177297887);
    msg.setSource(26398U);
    msg.setSourceEntity(168U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7214349848738305;
    msg.type = 106U;

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
    msg.setTimeStamp(0.97247777208592);
    msg.setSource(18933U);
    msg.setSourceEntity(118U);
    msg.setDestination(61712U);
    msg.setDestinationEntity(183U);
    msg.value = 0.39214251150321733;

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
    msg.setTimeStamp(0.009093719973574999);
    msg.setSource(23241U);
    msg.setSourceEntity(99U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(238U);
    msg.value = 0.39067139717438026;

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
    msg.setTimeStamp(0.9554062390811133);
    msg.setSource(23259U);
    msg.setSourceEntity(76U);
    msg.setDestination(17935U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5963686482741879;

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
    msg.setTimeStamp(0.7744219635199449);
    msg.setSource(32242U);
    msg.setSourceEntity(127U);
    msg.setDestination(13801U);
    msg.setDestinationEntity(83U);
    msg.timestamp_last_service = 0.363103443672227;
    msg.time_next_service = 0.8883323323113921;
    msg.time_motor_next_service = 0.951567800971391;
    msg.time_idle_ground = 0.8990091355555616;
    msg.time_idle_air = 0.4859305097816584;
    msg.time_idle_water = 0.8356134043833987;
    msg.time_idle_underwater = 0.48730736269855923;
    msg.time_idle_unknown = 0.21914747425532732;
    msg.time_motor_ground = 0.06593766590903938;
    msg.time_motor_air = 0.4422427751159429;
    msg.time_motor_water = 0.6708224973308408;
    msg.time_motor_underwater = 0.23169463479853913;
    msg.time_motor_unknown = 0.7677573885025193;
    msg.rpm_min = -12638;
    msg.rpm_max = -27040;
    msg.depth_max = 0.35747189493351184;

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
    msg.setTimeStamp(0.029485417328326657);
    msg.setSource(13895U);
    msg.setSourceEntity(144U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(140U);
    msg.timestamp_last_service = 0.9409169932300638;
    msg.time_next_service = 0.03278306338119441;
    msg.time_motor_next_service = 0.5438250792691101;
    msg.time_idle_ground = 0.39846523352305785;
    msg.time_idle_air = 0.18850507214776469;
    msg.time_idle_water = 0.1557427199680026;
    msg.time_idle_underwater = 0.5567198713147996;
    msg.time_idle_unknown = 0.2029493357988721;
    msg.time_motor_ground = 0.5072640707592297;
    msg.time_motor_air = 0.6409413310760264;
    msg.time_motor_water = 0.44535398613064703;
    msg.time_motor_underwater = 0.019744098141271982;
    msg.time_motor_unknown = 0.9238827129276432;
    msg.rpm_min = 20126;
    msg.rpm_max = 3986;
    msg.depth_max = 0.34356594457946;

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
    msg.setTimeStamp(0.9821527141645482);
    msg.setSource(25699U);
    msg.setSourceEntity(184U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(149U);
    msg.timestamp_last_service = 0.9767269193861711;
    msg.time_next_service = 0.7394332012469826;
    msg.time_motor_next_service = 0.7446681421798761;
    msg.time_idle_ground = 0.6539022875851083;
    msg.time_idle_air = 0.5940660096924223;
    msg.time_idle_water = 0.28558617886181514;
    msg.time_idle_underwater = 0.7892654365357814;
    msg.time_idle_unknown = 0.1442664326057712;
    msg.time_motor_ground = 0.3063423006502797;
    msg.time_motor_air = 0.2999885978079828;
    msg.time_motor_water = 0.3065639686785233;
    msg.time_motor_underwater = 0.39169024130995755;
    msg.time_motor_unknown = 0.8647785933020345;
    msg.rpm_min = 6060;
    msg.rpm_max = -19761;
    msg.depth_max = 0.7746458786509475;

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
    msg.setTimeStamp(0.37768763419824325);
    msg.setSource(36447U);
    msg.setSourceEntity(9U);
    msg.setDestination(62090U);
    msg.setDestinationEntity(100U);
    msg.severity = 28U;
    msg.text.assign("QNIYSBMQVYBFAFSICJNMOLSBKWXJGUXALOKTCSBRWDBOGHPPVGXFNSRAGAAEMILKCHKRXEPFRHWAJOUZYPOELNRQ");

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
    msg.setTimeStamp(0.017783141792559687);
    msg.setSource(64749U);
    msg.setSourceEntity(232U);
    msg.setDestination(57892U);
    msg.setDestinationEntity(44U);
    msg.severity = 239U;
    msg.text.assign("QVDSPGLYEMWEHRMNLOZDZSOAWUHQPCUYRDRUDFUTZGFWSSPUMJFFLUJMZUHFIVLMLAFMBLGWWLBJCKDTZPFPQJTACMHKPBIHNJZYVRIVQTEIBFZZXIRKGPXOKCOWTSHAVOYROXOXBPXTIKQFMILXHPEJFNNGSLVRZVGIDCAAEDVSXKHXDEHGSTYTNWXWRUCCAVOCQRYYNTBUJES");

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
    msg.setTimeStamp(0.9355351383471392);
    msg.setSource(16414U);
    msg.setSourceEntity(10U);
    msg.setDestination(39701U);
    msg.setDestinationEntity(48U);
    msg.severity = 231U;
    msg.text.assign("UBVQIPEHQEDEQRHLDRNWRZNWCSCVSMOFMGKITYEAJIZEGPMRFUCHGPTCRPTBYJLZAOFTIMHJXUZDBONGADOOLGFNDJWUJLLFYSSAIJXHDBVAZPFYVJNKIWHLPTYHGRUQXVIZDBEQKLSGYIHQWLQXCTKERKKVUJTGWRNDFUPCJGAUXCPWLBMBCLTVKTHYHDNMXXWVEQONUSQSKY");

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
    msg.setTimeStamp(0.8943144840400485);
    msg.setSource(27438U);
    msg.setSourceEntity(205U);
    msg.setDestination(51319U);
    msg.setDestinationEntity(47U);
    msg.channel = 43;
    msg.value = -1226251179;
    msg.gain = 253U;

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
    msg.setTimeStamp(0.8497457573750673);
    msg.setSource(23672U);
    msg.setSourceEntity(100U);
    msg.setDestination(26927U);
    msg.setDestinationEntity(187U);
    msg.channel = -91;
    msg.value = 1391206778;
    msg.gain = 36U;

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
    msg.setTimeStamp(0.5772040836621322);
    msg.setSource(25543U);
    msg.setSourceEntity(167U);
    msg.setDestination(47198U);
    msg.setDestinationEntity(95U);
    msg.channel = -57;
    msg.value = -1236105796;
    msg.gain = 106U;

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
    msg.setTimeStamp(0.7322565870889696);
    msg.setSource(5090U);
    msg.setSourceEntity(7U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(151U);
    msg.ch01 = 0.09580507543025196;
    msg.ch02 = 0.11354529943417357;
    msg.ch03 = 0.8994461711649708;
    msg.ch04 = 0.6731321453335326;
    msg.ch05 = 0.015639409616363564;
    msg.ch06 = 0.5362021980443332;
    msg.ch07 = 0.16148577285229293;
    msg.ch08 = 0.34930696205508327;
    msg.ch09 = 0.9515605256681826;
    msg.ch10 = 0.31421707703099955;
    msg.ch11 = 0.36938979209249834;
    msg.ch12 = 0.5160531553576444;
    msg.ch13 = 0.37634820891451226;
    msg.ch14 = 0.2615132510711432;
    msg.ch15 = 0.5982263913571819;
    msg.ch16 = 0.23639648614059994;

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
    msg.setTimeStamp(0.6757257973429834);
    msg.setSource(56099U);
    msg.setSourceEntity(133U);
    msg.setDestination(21867U);
    msg.setDestinationEntity(19U);
    msg.ch01 = 0.6003389550492121;
    msg.ch02 = 0.7085204236849483;
    msg.ch03 = 0.704313432254602;
    msg.ch04 = 0.9373346922508323;
    msg.ch05 = 0.24520079536336004;
    msg.ch06 = 0.3248790440776982;
    msg.ch07 = 0.03580947329580053;
    msg.ch08 = 0.40276009964547077;
    msg.ch09 = 0.3952033910009043;
    msg.ch10 = 0.4846881267616894;
    msg.ch11 = 0.5196033481714687;
    msg.ch12 = 0.39270790531184174;
    msg.ch13 = 0.8969306353329592;
    msg.ch14 = 0.540418289105846;
    msg.ch15 = 0.8732546260055347;
    msg.ch16 = 0.2858394774393316;

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
    msg.setTimeStamp(0.2884453611047282);
    msg.setSource(36024U);
    msg.setSourceEntity(48U);
    msg.setDestination(45148U);
    msg.setDestinationEntity(130U);
    msg.ch01 = 0.8099365971439061;
    msg.ch02 = 0.058262212811102;
    msg.ch03 = 0.16644887158938393;
    msg.ch04 = 0.34805972256902795;
    msg.ch05 = 0.822144258226672;
    msg.ch06 = 0.7918245576287838;
    msg.ch07 = 0.4719992753772889;
    msg.ch08 = 0.31851612348681646;
    msg.ch09 = 0.5098182276287038;
    msg.ch10 = 0.4706361213102239;
    msg.ch11 = 0.04994612780668761;
    msg.ch12 = 0.6574936225774057;
    msg.ch13 = 0.18381104828691053;
    msg.ch14 = 0.8541518010952145;
    msg.ch15 = 0.8542249272853173;
    msg.ch16 = 0.0387399499833363;

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
    msg.setTimeStamp(0.6699898935025217);
    msg.setSource(61601U);
    msg.setSourceEntity(161U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(131U);
    msg.op = 23U;
    msg.lat = 0.6183336849153486;
    msg.lon = 0.2037143153138935;
    msg.height = 0.5236279425499166;
    msg.depth = 0.6395165139323205;
    msg.alt = 0.9506606392619618;

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
    msg.setTimeStamp(0.6314998560278368);
    msg.setSource(65216U);
    msg.setSourceEntity(72U);
    msg.setDestination(45723U);
    msg.setDestinationEntity(238U);
    msg.op = 41U;
    msg.lat = 0.3014016341647553;
    msg.lon = 0.5936252793340124;
    msg.height = 0.7615784549175719;
    msg.depth = 0.8953202819538274;
    msg.alt = 0.334635633241155;

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
    msg.setTimeStamp(0.34231555468958086);
    msg.setSource(44881U);
    msg.setSourceEntity(102U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(139U);
    msg.op = 238U;
    msg.lat = 0.4097894916402942;
    msg.lon = 0.021164447401458064;
    msg.height = 0.10869118276738365;
    msg.depth = 0.16156461957479784;
    msg.alt = 0.5431943280230167;

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
    msg.setTimeStamp(0.9951981770510323);
    msg.setSource(132U);
    msg.setSourceEntity(97U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.5923867488556837;
    msg.speed = 0.617058363859995;
    msg.turbulence = 0.9091876354762704;

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
    msg.setTimeStamp(0.09451633873400844);
    msg.setSource(62913U);
    msg.setSourceEntity(237U);
    msg.setDestination(59957U);
    msg.setDestinationEntity(81U);
    msg.direction = 0.6654042242343832;
    msg.speed = 0.39156226229363755;
    msg.turbulence = 0.05605959073666167;

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
    msg.setTimeStamp(0.7007684319601906);
    msg.setSource(14044U);
    msg.setSourceEntity(85U);
    msg.setDestination(43670U);
    msg.setDestinationEntity(239U);
    msg.direction = 0.0707519581859537;
    msg.speed = 0.061208632543285235;
    msg.turbulence = 0.3738439099970734;

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
    msg.setTimeStamp(0.35222984230605503);
    msg.setSource(15438U);
    msg.setSourceEntity(223U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(66U);
    msg.msg_type.assign("IDYGBYQIYLEDWIVWQIGAUMPZMTAFNHBENFSWTLKEZLINBRKZEJQBMHRKGJGNZGHFXUYDUDTHSECUHOYOUFXZKTOQNZLLQRCXEAMAAJSSDOMJLDOCNGVUMPTWYFIZESLRWNVRUIJRYHLBBATOLRBYXAESRVPCPCEJBVAQXRMMNSWTLSPMVDNHTRPBUPKOUHDCWDKOJIOHSAIHAPJXZMGOFQNKQVCETPWVVYITXCFUGKFSGBVZ");
    msg.sensor_class.assign("SRSMUWJYRQBAQXGPWFHFELEOTESGZUOFTTFVKIQJZHBKSQFJDKVBEXZQBRMHWIYNZHUVJDOBBTVBRDSCHPXEYGNMZNKFLLGNJLAEKOSUMOFELVCOADXDGRIUZAIEJUOTMOLWCNNWKCSAHPQTHYPPRD");
    msg.mmsi.assign("SQOCQHWPZODTTVJMLAJLHZSQWPRLMBSLWCYVESDJSQBNMKCGRFXIPZJOFCLNWXVPDHOFMSUAG");
    msg.callsign.assign("IUZWXZTHIYXYRMVAWJDZHOYKGCRNOVKLWWFFQAJHWKGYFPKNXSYESVBOTASHPOAFMPLJJKHLZCXMSVSBHESZXBEUGRBTKLSEFCAKWILFHMHCUKTPYCWTMZNSFBYMLHBFRYCFTMDAQPPDX");
    msg.name.assign("NBUFKMRJJNFEZCJBIHNRILQFRWHZOTMFTBAWKLMVPNBBDADPUPKNEJAITFEEFH");
    msg.nav_status = 203U;
    msg.type_and_cargo = 226U;
    msg.lat = 0.011742772956364722;
    msg.lon = 0.6603549320683809;
    msg.course = 0.49788585912909;
    msg.speed = 0.24519208578493967;
    msg.dist = 0.84752390509713;
    msg.a = 0.7702513424624691;
    msg.b = 0.7654139147673956;
    msg.c = 0.046492104766704845;
    msg.d = 0.7306213234120558;
    msg.draught = 0.03854428072026783;

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
    msg.setTimeStamp(0.737768052998996);
    msg.setSource(58289U);
    msg.setSourceEntity(212U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(70U);
    msg.msg_type.assign("PKCYIIBABRPEOAMSAMBLGJLJZODLVFIMILGWWMZKWQNPNXXAPSFAJJKOILTQHFHGZXVBUUZTVEYFUMQSUEVSRJXUNRQEHXWWOYTHCHCDPLNOLCGNZOTJVKMQCC");
    msg.sensor_class.assign("SGKYOJDBLZZTGVUCWLZNKOBXUDREEKHQPIZUACXKIXHJJZFRAWWISBRMSESNNEROVVWLFINMYRYCJVPXDCGQRUJIKBYAUBDHIPQTIAJQVRYNYDLRTPGGJENWXLPUFIAVOFWOWPEQQRWWRAHJNLMEHSDMVLPEFUTMSKXFNIFSQKMYGUMZKABLTLEPWYJOJENHBCTVDOZBTMZGACYMHQMVK");
    msg.mmsi.assign("HHWCKJERNXNPTUKSSZDPTRLPHNBCTENZSVBCJXIBQYQLZWYZMUBVBQTJHGFIZGKNWIVJYEYEWLILTDPCSUPPDUUMFTEWLJJFDMXLVSZATXXXNWMSSRYLIAWXGFJOMJOJHRRPIFEAXSRFLUVQGDRDNIPOWTWGF");
    msg.callsign.assign("FSAENVFPOJNBRFWYAQG");
    msg.name.assign("DMXAPXQLEMTNIFPJZO");
    msg.nav_status = 119U;
    msg.type_and_cargo = 42U;
    msg.lat = 0.7446756672502168;
    msg.lon = 0.45188722885675126;
    msg.course = 0.259065889685391;
    msg.speed = 0.35680820385270584;
    msg.dist = 0.3237844878518048;
    msg.a = 0.836349467998389;
    msg.b = 0.7372953171054479;
    msg.c = 0.3067537381026878;
    msg.d = 0.9231004415638456;
    msg.draught = 0.19712620175836526;

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
    msg.setTimeStamp(0.04610600892578043);
    msg.setSource(57979U);
    msg.setSourceEntity(84U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(247U);
    msg.msg_type.assign("DWBGABHCBPQMVPHECNJXQFEDSREQDOMDPRJZFFYDITSMTQNFBULIHMROAAKGVBSVJDYTOHXUIFGKYVELZQOOIULAVVMVJVQALCBTCEMSTEYTBUFARGXPBXRWCKXMEWOWGDZCKRJKMFZWJWRCQVIYIIRLFVOUQATEXFMBJRHIANWLP");
    msg.sensor_class.assign("VOPJUULZDLEYRPEYLXBLRTSBRAWNVQZCQCISQUDCATROFVYSIQNVWHQHEAPQYMDEVGNIEKOPTBKJKVFZMTWCDYDBOUHQRHGERMNIUTFLQTOVYUVNCUGWRZLKFIXZFLCSXAOQEILJVKILGIJCAPTJSPKYZXRBHQTHRYMNCNUYPKUWGOJIHJELXDDOOAZBWJAM");
    msg.mmsi.assign("UDSLBGKOPPHPEMVBMLELCHFXZFGSKLIQNYWRNYXMNRQZBCYWMTGCEHUJEUXDSVZOPOUBEWMNIGHWXCTDIYCVUXBONVHFKABOOFGQWTTKVNJAKPOBAUERAVXWKHSGPHTLUDCRMUTBDIVFZGFIKRCFIDZRICGFCXSARARDJHCJVOMXDHPOQJIOYMAGQBXLLSEKTIDNEWLTGVYXZWVNYAALFNFMYTMZKPQSQUSNSKYQYPQUJWJRDPEJHBJLTZIAZJ");
    msg.callsign.assign("ZAQAHFZLKUNGGUBSUDYIVXBRQODXDUCMJNWTHNXCGGUUQKVFLSEDBLFEYTCNUMUNBSZWRZCRYOBNRTZAWDTEPHRPGFMOVEWMVRSJKSYJMRIPRGYXYVOKLEQWFI");
    msg.name.assign("ZVJKMJKIMYIKUNPPARRYYTENNBBLXTNNDXIQERRWPVUFGSUAFQHYDHOQCLLKRDDYIZVKSDEXOMBAXCGJBPREGUQXXJOPPHLQTVTPTLIORBGKORNFQGZIMNXBQYFDANWOETWEOBMWARYYSJCPHLMSAIKFYZWADGWGHMULLSBSWOVGFUOLTPJVKCCWZKQGRXSNZBHFCXCVPTZKUSWLYSZMTVMCVDIUOIDQEEC");
    msg.nav_status = 92U;
    msg.type_and_cargo = 86U;
    msg.lat = 0.09705600683102877;
    msg.lon = 0.17590198332913587;
    msg.course = 0.27548797665542846;
    msg.speed = 0.033654811495262615;
    msg.dist = 0.21980856438158702;
    msg.a = 0.44354282869384876;
    msg.b = 0.8069256441307637;
    msg.c = 0.4043197934952012;
    msg.d = 0.1788411213358715;
    msg.draught = 0.48897059548003174;

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
    msg.setTimeStamp(0.3829195401407647);
    msg.setSource(58760U);
    msg.setSourceEntity(61U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(199U);
    msg.depth_at_loc.assign("ILBSJOLYQDAIXHKPVZQKKNGSDYSPOLIINTONJEUQWFHRZHCKVDNGRKSIORRAXNVNUPDELXHYRTBVJDFWCWGWBCTFTZVMZEHDPPAMMGTZGRDDGUBWOJSCGHSBSWTOXMEUWWSQXEJEQUWBRMPJVEMSMCTQVOJCCPLPYGLRUCKKFANFBKGVIQENNJHJUEZBQAVCYQFIILXCRADYUDLOZHLZWJ");
    msg.danger.assign("PHTVLJEAQNNJURXBSCBTIELSNPRVYVDBLLRVPLWGFMWWFMDRAZFMJUSPWQTKKHPURRIULOOVOZKOZIGHGXCHIZWHYGMSXWCOGMVFWGEJGBZSTAFQCBHKIEFAHCDWRLPKOKOXNPBKZVBXJJFXYDTNMARZXUYQVFKSDOMJUDAFSKLGESDLTAVYSZMMDIATJCGEBLIQGPXHNYTCEUNCQMANQATRXEKCSBIIWOEJRETYQJXFQNDZBPHDIUNOVHY");

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
    msg.setTimeStamp(0.06538262996850219);
    msg.setSource(31182U);
    msg.setSourceEntity(65U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(21U);
    msg.depth_at_loc.assign("RNCGLTFKCKGRCPKYUSJDDUHHTSNXRJLTIWFXQCDMXBWEVTACOWD");
    msg.danger.assign("UQWRYTQJIUFEXQZWURZJWKGAVKKBHGKCNBAPJDKAZOZDWBYTANCOIMSWYBSDGRDPGZPGNXTYFKVEAJORTUBJEBJLDQVGQS");

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
    msg.setTimeStamp(0.06747846562097082);
    msg.setSource(55127U);
    msg.setSourceEntity(244U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(243U);
    msg.depth_at_loc.assign("HKYDZFIWBJVAOEMXDERPWILEXUFFIRZPMSCGQPRTHDZALXDYUREU");
    msg.danger.assign("LINQMHMSGPCDJWEBWUDRZZVJRXBWZIUBCFBNGTZPARWEGXBLBQYJHMYKPWKYSPJUKAWPHQCYXVE");

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
    msg.setTimeStamp(0.696070318458286);
    msg.setSource(49786U);
    msg.setSourceEntity(85U);
    msg.setDestination(30679U);
    msg.setDestinationEntity(136U);
    msg.time = 0.9190630874089912;
    msg.x = 0.15645038348802742;
    msg.y = 0.18784794024830365;
    msg.z = 0.25707155041485985;

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
    msg.setTimeStamp(0.2882593961070803);
    msg.setSource(39393U);
    msg.setSourceEntity(202U);
    msg.setDestination(65077U);
    msg.setDestinationEntity(14U);
    msg.time = 0.9835290282929491;
    msg.x = 0.5797608766997189;
    msg.y = 0.9313331153520921;
    msg.z = 0.9571312411880503;

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
    msg.setTimeStamp(0.5821008741648706);
    msg.setSource(59446U);
    msg.setSourceEntity(202U);
    msg.setDestination(26152U);
    msg.setDestinationEntity(59U);
    msg.time = 0.8299176943633634;
    msg.x = 0.11457009459350631;
    msg.y = 0.36357599971128973;
    msg.z = 0.8723703605166949;

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
    msg.setTimeStamp(0.8722942305861082);
    msg.setSource(47355U);
    msg.setSourceEntity(131U);
    msg.setDestination(54320U);
    msg.setDestinationEntity(124U);
    msg.nbeams = 61U;
    msg.ncells = 91U;
    msg.coord_sys = 164U;

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
    msg.setTimeStamp(0.8601869888425395);
    msg.setSource(23674U);
    msg.setSourceEntity(150U);
    msg.setDestination(16871U);
    msg.setDestinationEntity(242U);
    msg.nbeams = 200U;
    msg.ncells = 186U;
    msg.coord_sys = 84U;

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
    msg.setTimeStamp(0.5657153870473629);
    msg.setSource(28577U);
    msg.setSourceEntity(67U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(89U);
    msg.nbeams = 60U;
    msg.ncells = 78U;
    msg.coord_sys = 199U;

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
    msg.setTimeStamp(0.8256776606485905);
    msg.setSource(43844U);
    msg.setSourceEntity(248U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(188U);
    msg.cell_position = 0.7617556204926179;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3363042270422283;
    tmp_msg_0.amp = 0.5857992041977526;
    tmp_msg_0.cor = 148U;
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
    msg.setTimeStamp(0.08822579551165843);
    msg.setSource(50780U);
    msg.setSourceEntity(48U);
    msg.setDestination(59676U);
    msg.setDestinationEntity(39U);
    msg.cell_position = 0.3009530615672047;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.008682223963357827;
    tmp_msg_0.amp = 0.09840879753819476;
    tmp_msg_0.cor = 117U;
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
    msg.setTimeStamp(0.5064675702807759);
    msg.setSource(18709U);
    msg.setSourceEntity(218U);
    msg.setDestination(60420U);
    msg.setDestinationEntity(48U);
    msg.cell_position = 0.7886146486264688;

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
    msg.setTimeStamp(0.7232075953048013);
    msg.setSource(8641U);
    msg.setSourceEntity(83U);
    msg.setDestination(13268U);
    msg.setDestinationEntity(212U);
    msg.vel = 0.20826306211807077;
    msg.amp = 0.5624508213554489;
    msg.cor = 36U;

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
    msg.setTimeStamp(0.4165649459410572);
    msg.setSource(29445U);
    msg.setSourceEntity(247U);
    msg.setDestination(25136U);
    msg.setDestinationEntity(232U);
    msg.vel = 0.18090467829188095;
    msg.amp = 0.07602450148195206;
    msg.cor = 47U;

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
    msg.setTimeStamp(0.46457675931267683);
    msg.setSource(37788U);
    msg.setSourceEntity(58U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(132U);
    msg.vel = 0.31907989181220897;
    msg.amp = 0.29422190654380675;
    msg.cor = 191U;

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
    msg.setTimeStamp(0.3160279053957541);
    msg.setSource(36610U);
    msg.setSourceEntity(181U);
    msg.setDestination(41894U);
    msg.setDestinationEntity(21U);
    msg.value = 0.23729009856006456;

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
    msg.setTimeStamp(0.5973069675770407);
    msg.setSource(23802U);
    msg.setSourceEntity(242U);
    msg.setDestination(13175U);
    msg.setDestinationEntity(157U);
    msg.value = 0.15417327838552097;

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
    msg.setTimeStamp(0.2322051638861541);
    msg.setSource(5245U);
    msg.setSourceEntity(234U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(34U);
    msg.value = 0.021347961689256567;

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
    msg.setTimeStamp(0.4557690761089611);
    msg.setSource(4944U);
    msg.setSourceEntity(251U);
    msg.setDestination(14371U);
    msg.setDestinationEntity(7U);
    msg.sig_wave_height_hm0 = 0.833906952568887;
    msg.wave_peak_direction = 0.14211233535396794;
    msg.wave_peak_period = 0.11686739443687555;
    msg.wave_height_wind_hm0 = 0.32463688087070164;
    msg.wave_height_swell_hm0 = 0.25875624464034896;
    msg.wave_peak_period_wind = 0.14647544308354332;
    msg.wave_peak_period_swell = 0.8002380699434412;
    msg.wave_peak_direction_wind = 0.7778124432110132;
    msg.wave_peak_direction_swell = 0.07896727873494014;
    msg.wave_mean_direction = 0.7086340474165426;
    msg.wave_mean_period_tm02 = 0.9383710436755588;
    msg.wave_height_hmax = 0.7228264551404663;
    msg.wave_height_crest = 0.832538109692048;
    msg.wave_height_trough = 0.41470406286464145;
    msg.wave_period_tmax = 0.7188819037586612;
    msg.wave_period_tz = 0.5770536648696482;
    msg.significant_wave_height_h1_3 = 0.9217955198952057;
    msg.mean_spreading_angle = 0.8038869272303328;
    msg.first_order_spread = 0.47948018828057914;
    msg.long_crestedness_parameters = 0.5866516518102978;
    msg.heading = 0.293735929926633;
    msg.pitch = 0.8120747532393068;
    msg.roll = 0.10975224697268282;
    msg.external_heading = 0.9719301145467694;
    msg.stdev_heading = 0.584884639744352;
    msg.stdev_pitch = 0.008728241063695297;
    msg.stdev_roll = 0.46929134118096816;

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
    msg.setTimeStamp(0.23344986152141856);
    msg.setSource(55384U);
    msg.setSourceEntity(174U);
    msg.setDestination(30864U);
    msg.setDestinationEntity(250U);
    msg.sig_wave_height_hm0 = 0.6234212537983792;
    msg.wave_peak_direction = 0.6077355310803491;
    msg.wave_peak_period = 0.07585216532431915;
    msg.wave_height_wind_hm0 = 0.9681736621470307;
    msg.wave_height_swell_hm0 = 0.06696351862615801;
    msg.wave_peak_period_wind = 0.6059802889233925;
    msg.wave_peak_period_swell = 0.9161112816435476;
    msg.wave_peak_direction_wind = 0.41616201011619025;
    msg.wave_peak_direction_swell = 0.9856345508770311;
    msg.wave_mean_direction = 0.06430232446195872;
    msg.wave_mean_period_tm02 = 0.564693847887919;
    msg.wave_height_hmax = 0.29862499303445933;
    msg.wave_height_crest = 0.1740412399715493;
    msg.wave_height_trough = 0.34043874914086314;
    msg.wave_period_tmax = 0.19442034590766166;
    msg.wave_period_tz = 0.2377402015928346;
    msg.significant_wave_height_h1_3 = 0.6458199080623227;
    msg.mean_spreading_angle = 0.5040986199746431;
    msg.first_order_spread = 0.41812181759706357;
    msg.long_crestedness_parameters = 0.19395871334368064;
    msg.heading = 0.8372249647972458;
    msg.pitch = 0.9703314793004343;
    msg.roll = 0.9777030228874443;
    msg.external_heading = 0.6590908249690919;
    msg.stdev_heading = 0.7835191357729642;
    msg.stdev_pitch = 0.2639913739510107;
    msg.stdev_roll = 0.6854225880950175;

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
    msg.setTimeStamp(0.1890293661953354);
    msg.setSource(18149U);
    msg.setSourceEntity(67U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(163U);
    msg.sig_wave_height_hm0 = 0.8592561572037624;
    msg.wave_peak_direction = 0.4911546118347896;
    msg.wave_peak_period = 0.8996932475619611;
    msg.wave_height_wind_hm0 = 0.36248950994105755;
    msg.wave_height_swell_hm0 = 0.8907687438799695;
    msg.wave_peak_period_wind = 0.9741740656669686;
    msg.wave_peak_period_swell = 0.6496507293339341;
    msg.wave_peak_direction_wind = 0.923852314656061;
    msg.wave_peak_direction_swell = 0.7420150024459607;
    msg.wave_mean_direction = 0.19141144975179325;
    msg.wave_mean_period_tm02 = 0.9968469976341376;
    msg.wave_height_hmax = 0.284883962917886;
    msg.wave_height_crest = 0.20356697385935363;
    msg.wave_height_trough = 0.5641593296635788;
    msg.wave_period_tmax = 0.1106980434715763;
    msg.wave_period_tz = 0.33769966220285896;
    msg.significant_wave_height_h1_3 = 0.5138307326568448;
    msg.mean_spreading_angle = 0.06830765978970676;
    msg.first_order_spread = 0.6810297320928452;
    msg.long_crestedness_parameters = 0.6482851972606393;
    msg.heading = 0.32146335065967135;
    msg.pitch = 0.0477163645995623;
    msg.roll = 0.5852834596803891;
    msg.external_heading = 0.6022145999210827;
    msg.stdev_heading = 0.27134725442509;
    msg.stdev_pitch = 0.5032784254304753;
    msg.stdev_roll = 0.9785246882131431;

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
    msg.setTimeStamp(0.2923576873384156);
    msg.setSource(38579U);
    msg.setSourceEntity(41U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(179U);
    msg.name.assign("LRASCYHJNOLECSZWIZQYPFVHXVPMLJPVRKRMEZXFWLJUGNDPHRNOHTPQB");
    msg.value = 33U;

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
    msg.setTimeStamp(0.33430849959656306);
    msg.setSource(38821U);
    msg.setSourceEntity(218U);
    msg.setDestination(25779U);
    msg.setDestinationEntity(177U);
    msg.name.assign("JFIQRUDIWARMTKMVKTSXEYGRUZWXUKLBZQVWACAWEDVZXLHJYOERVYJJKBVQSVIGNCGUPSHUANMXFYQWOORISGYNNUTIRDFWRIQMEIGJO");
    msg.value = 100U;

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
    msg.setTimeStamp(0.5185820281339382);
    msg.setSource(7649U);
    msg.setSourceEntity(95U);
    msg.setDestination(36973U);
    msg.setDestinationEntity(52U);
    msg.name.assign("HXUULOTHFBNBNFMLASSFVOONGAMKDYUTKXMWCYKMJZQDKONQVRCPVUVHGSKGCVSTCSWURVRLGYGZHWDUQIZGMKHXNTBAGIUPYHOYBUJ");
    msg.value = 133U;

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
    msg.setTimeStamp(0.9832448621577567);
    msg.setSource(30575U);
    msg.setSourceEntity(147U);
    msg.setDestination(20179U);
    msg.setDestinationEntity(67U);
    msg.name.assign("LUZKPLSKSISOUTZERIZDGAWLCCWBNXVQGVUAOCZRKXEQYVQHMFVGONGFQEBDQREYYHLPUIEVDLGRNBWITFXXRAYYQJ");

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
    msg.setTimeStamp(0.6459001516830272);
    msg.setSource(11348U);
    msg.setSourceEntity(211U);
    msg.setDestination(822U);
    msg.setDestinationEntity(143U);
    msg.name.assign("VKUQBIYATHPDDTOLZKRAMKPCNVNDPMJXCGCSVVIPQMQQXLRAHFXGYYUJFSDMUKGWRLZMYPBKFTVKJLOEFQIDWFLGESWFAHQOCHSPUEREJJWIQAEHLYZGLALXNFDHKIRNVMVFVCTCPGYYTWTIGXIXYZBZOWYSBWNVOAZMNCJTDQUEPRGNROSODCPFSLHTUXIRECIGMNXBBOUXDTEJZEMZQUSTWPYBOKKZWGB");

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
    msg.setTimeStamp(0.29814740633392367);
    msg.setSource(47304U);
    msg.setSourceEntity(244U);
    msg.setDestination(4888U);
    msg.setDestinationEntity(44U);
    msg.name.assign("VBOWAOFUGFDGZBPPSUMDUHULGJTZKTVJWHSHYFXUKQWLYNPNNMRKMOVXMXAYLOBHLSOUBEHZPJWWRKEBIVVNSNRGAIYZPEBXXKBCUUTMTKNUOIEYSVEQDGCITMZRAKIDJWFHAFEFAQTXMZPNKKPKIGYXVOH");

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
    msg.setTimeStamp(0.9462088679932044);
    msg.setSource(49691U);
    msg.setSourceEntity(201U);
    msg.setDestination(29822U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RULGNYAUXQHYKZCJACKMBWPFXPXRSQWPDPJGVVZVFGZOHIYORATCNDATTIWMNHTYDHJRJLQFZNEJNTOMCMHVOIEEYNSUPWFDEDWTKKPDRGEIAZFQSNQSIQ");
    msg.value = 61U;

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
    msg.setTimeStamp(0.5088184554978721);
    msg.setSource(63120U);
    msg.setSourceEntity(180U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(126U);
    msg.name.assign("ECRMKILHQZZWMUONQCLDEKSPQKGZXOWYISPGHEVXMBGMBMMJFEWEFTFBPCNHXCRJPAATDGSLJMVSRPYVQRIPVABTYTFXIQBHYUYXQZJNHUNOGJIXSEINADFAOKUFVWSLYGHJITHGBVLOGWENGHRMBCVMLBYIQETEQRHVQYC");
    msg.value = 55U;

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
    msg.setTimeStamp(0.8752220197579783);
    msg.setSource(58328U);
    msg.setSourceEntity(201U);
    msg.setDestination(57370U);
    msg.setDestinationEntity(52U);
    msg.name.assign("FNAOMCICZALDGKGENJPFDYYQNQJAVDKQBTPPHOUVHOYNDNGWJBJWOSHXKFIKLLXOBMPDCITNHVWUFZKVVUXBMKRCXFGABWZWUMFKIPCQSDMLERDPLXJEMFBMVODXXTMOAAJQRGUGHCCUGLUERRTUPIWQPCJTIRQKYWLHBSRRTESVICG");
    msg.value = 77U;

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
    msg.setTimeStamp(0.6734442097782377);
    msg.setSource(23935U);
    msg.setSourceEntity(252U);
    msg.setDestination(45650U);
    msg.setDestinationEntity(61U);
    msg.value = 0.12522222861234422;

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
    msg.setTimeStamp(0.21059519522098968);
    msg.setSource(57847U);
    msg.setSourceEntity(163U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(173U);
    msg.value = 0.3351996106582985;

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
    msg.setTimeStamp(0.5406778891040837);
    msg.setSource(17114U);
    msg.setSourceEntity(103U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7812210034255046;

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
    msg.setTimeStamp(0.6109127282959038);
    msg.setSource(55831U);
    msg.setSourceEntity(165U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4799833966552711;

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
    msg.setTimeStamp(0.302248471544183);
    msg.setSource(46725U);
    msg.setSourceEntity(219U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(226U);
    msg.value = 0.06697578643809088;

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
    msg.setTimeStamp(0.6117064887242226);
    msg.setSource(27337U);
    msg.setSourceEntity(185U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(101U);
    msg.value = 0.3772138263688811;

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
    msg.setTimeStamp(0.6708336603986625);
    msg.setSource(31142U);
    msg.setSourceEntity(218U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(63U);
    msg.value = 0.550231225969716;

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
    msg.setTimeStamp(0.38188158265006733);
    msg.setSource(810U);
    msg.setSourceEntity(240U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(207U);
    msg.value = 0.657480361428352;

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
    msg.setTimeStamp(0.3629312454233098);
    msg.setSource(52754U);
    msg.setSourceEntity(90U);
    msg.setDestination(31542U);
    msg.setDestinationEntity(189U);
    msg.value = 0.2624449891744518;

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
    msg.setTimeStamp(0.3395882465908677);
    msg.setSource(47584U);
    msg.setSourceEntity(238U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(37U);
    msg.restriction = 232U;
    msg.reason.assign("YMLQXAIRNNDGFQPSIGABCSTELJISNAHUBTAIZOPEHUBJWTQXMRXDXONAGMHJKBEMTGO");

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
    msg.setTimeStamp(0.05960302534011086);
    msg.setSource(32917U);
    msg.setSourceEntity(93U);
    msg.setDestination(32445U);
    msg.setDestinationEntity(62U);
    msg.restriction = 217U;
    msg.reason.assign("AFKOPRYJOSVDAQRSHNTTSZOGFNAGBEAIXYBJGMZNKKHVDDBXUMSNCZIWEUHTNXJRKNZZITZBQDNYEYBMZ");

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
    msg.setTimeStamp(0.18193704679441602);
    msg.setSource(26759U);
    msg.setSourceEntity(174U);
    msg.setDestination(56169U);
    msg.setDestinationEntity(29U);
    msg.restriction = 62U;
    msg.reason.assign("QATHIUVBJYIQXFHAFASBHNKCALTMIDHDRBZWWZQEMGSXRXJQGPPPDEWUJZUUZFNYJDABZYKUYNTSOIGFPGUCVRPXAWMEILITRLDBLISTRFUTGDVOYYCKFVKCRYFRKVHMGPSDCOLQEWNJ");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.08840259016326624);
    msg.setSource(47969U);
    msg.setSourceEntity(185U);
    msg.setDestination(57503U);
    msg.setDestinationEntity(144U);
    msg.op = 216U;
    msg.version.assign("VBNBCFIIIMMIWNZSXOFELVGZNQYLDGFXLJRDRQRAYSSEHBTGRKXJUVQSWIPRTNBBCVPOGMFBTESXTCQMYZYKKQWPFJAWVINPGUHPPPTYCUHJTINLTJLEUEXKMHWKKRUOXAOAJZQIANAVSOBGBHVKCQFMUDXQYACUQSHOLHOXKWUEFCLPFKEJFZEYETZENCZQPDIWCOSBRCWADNHOJDDZLJSXUYZSYGGR");
    msg.description.assign("FYUFHNOECRXBNJBNQGCRRJAPMIZBTGFZMTNJXSKRQMYKWLCDQIATHJPVBJFSOGVXFMQPGJGOEMWTTZLTIKHDVWBYLAGBOLTGNCIEVUCBIINZHAUZVXEAHSAOJHOCSCBZXWPUYJBUYLWSSPDAEWSRPVKHKRZFXHK");

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
    msg.setTimeStamp(0.3648736690204829);
    msg.setSource(14023U);
    msg.setSourceEntity(195U);
    msg.setDestination(20499U);
    msg.setDestinationEntity(56U);
    msg.op = 137U;
    msg.version.assign("GSBVHHZDJNHNCFMSRKQMCHWURXFKJGYTYEFMBGHTLEPXJXSXWSCOICHRSZUGYMVLWXSIXNEEGVNFIWHVIFAMAYWHKQTVNQNZKQDOQXSZUIBDSWUGVZFDJPULWAERPAWAEJ");
    msg.description.assign("DONXQVOOPBSJTSEDLNVJYAEJCCJDHWPNWJBCCWYGAILKYOCFIKFJBTXZQZZYUPRDUYUTGOZZIHGHAJREMMKGASNSFMXIFFHIUCFYARYAKANPYCTBBBJZBFUQUXQOANDSLCXNXQIHZOPPVLWJGH");

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
    msg.setTimeStamp(0.7674234050231696);
    msg.setSource(32223U);
    msg.setSourceEntity(9U);
    msg.setDestination(2543U);
    msg.setDestinationEntity(58U);
    msg.op = 221U;
    msg.version.assign("YHTPJXXFDTWGWDRKXKHEEPUSJURKESNCBAFBPZEYPMQFJJBYQYZTPLTVIXTFOHVHAQBFTAZQIKOSJQYDSTLLMZGRAXRZSKZWUICQDVIARAXGMCUBUCUGHODKJFOCECIPNWFSNSGWMGLX");
    msg.description.assign("GHMVLXYIEVJXSXAPISPDQHGJKSRKJKJLAPWIULMYFYBUEFJZBCRFLKJGGJKYZRNAENWOVPAPPQCUTQROAKQQQYGSGTQDBPRZYZRPLSOFBIVIXCIWAUTWUVQIJCUVSGDPOBFDXNYTANRENZUHOWYD");

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
    msg.setTimeStamp(0.9708574501269512);
    msg.setSource(65328U);
    msg.setSourceEntity(131U);
    msg.setDestination(14579U);
    msg.setDestinationEntity(72U);
    msg.value = 0.09230808902628751;

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
    msg.setTimeStamp(0.7910274233973299);
    msg.setSource(5400U);
    msg.setSourceEntity(224U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(165U);
    msg.value = 0.608753360693993;

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
    msg.setTimeStamp(0.510132012644515);
    msg.setSource(6258U);
    msg.setSourceEntity(121U);
    msg.setDestination(46273U);
    msg.setDestinationEntity(128U);
    msg.value = 0.03375012432107727;

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
