//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 91b1de5614c2e30b62cbeebf40ed8611                            *
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
    msg.setTimeStamp(0.7973426618795333);
    msg.setSource(21035U);
    msg.setSourceEntity(35U);
    msg.setDestination(37430U);
    msg.setDestinationEntity(64U);
    msg.state = 103U;
    msg.flags = 121U;
    msg.description.assign("VOAGKCPIDKNPGXRBZOLVLOCITKUPHDQXVAWNZIPKWTQKJXFBCOJHXFACUDFAZE");

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
    msg.setTimeStamp(0.5096713541475395);
    msg.setSource(46855U);
    msg.setSourceEntity(29U);
    msg.setDestination(16481U);
    msg.setDestinationEntity(168U);
    msg.state = 158U;
    msg.flags = 61U;
    msg.description.assign("UYPHBVUZRVLZEODLKSYLQVUMCZARPQJRWOIAPMCKQGWYNEJCOOWBVHAWFBTHQIPGZKTAJYWNIYMPFZTAJNGOCBGOPSSNVXUCEIEJBHBUCHWTZWDJXDYVKEQRYHHTUQCOWEPSXVXKLPRLSSMLGVLTQDEFMFGRGRAHKKZFLDSVGWBRYJCGNIQSTDNGNPOEUZLB");

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
    msg.setTimeStamp(0.0396665460963912);
    msg.setSource(46152U);
    msg.setSourceEntity(190U);
    msg.setDestination(51437U);
    msg.setDestinationEntity(26U);
    msg.state = 23U;
    msg.flags = 243U;
    msg.description.assign("STQEHSFLVONPOINFYCCSAVILADKBSPSDVPXRYBNBNIQFJABFPMEKCTYRCZPYKDTDFTZKTYKCFHAROGHUCRJYQXUKRPADIYLVYZWMLGZXMEZLMOBEXESJUUEHAUBLVQAPFWUNXPWRTIAWKICYBJJVWJVDGSLW");

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
    msg.setTimeStamp(0.8857925565382733);
    msg.setSource(61765U);
    msg.setSourceEntity(157U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.5681156835824743);
    msg.setSource(587U);
    msg.setSourceEntity(220U);
    msg.setDestination(46163U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.9940639892749571);
    msg.setSource(49951U);
    msg.setSourceEntity(173U);
    msg.setDestination(17761U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.7474009960352759);
    msg.setSource(41572U);
    msg.setSourceEntity(215U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(13U);
    msg.id = 13U;
    msg.label.assign("FQQVNRPDZJOLJSXEYSIZDJVOEFKPNKSRAJAYAGZMGLJOFPBQIYSJPPEWDCOKBMNJEWXRHYISDXZELAHKGIUYUFWBWXREECTOQBKUXUMWFLLGNCYWZCHVTTKZDDGONWGSCZEZDPOUHMWVLDSWVFALXYDLGAFTCBQYTAIOGGCNKEVHGMCQQXFTZMIEPRACBUKQHMX");
    msg.component.assign("EYPKHHNABDTUYSESJETESGBFFYNOCNTAXVGLNQOIYSRMPFJQRZABXCZEWXDRULOXMHSCPXVBPAADTVPPQMZZUTSSSZQXUCJOIZUOJBVHGWMYDIPYVPRDWTMQDHVOAORLRVBKIJCJFHMFJCDUPQIWXORANXHRBYBKLAQKQUTWTELZKCKMZHKSLCKNWNCGGJLQMVYIDFGL");
    msg.act_time = 34976U;
    msg.deact_time = 27292U;

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
    msg.setTimeStamp(0.4487875015452625);
    msg.setSource(53702U);
    msg.setSourceEntity(165U);
    msg.setDestination(27209U);
    msg.setDestinationEntity(205U);
    msg.id = 180U;
    msg.label.assign("WHOOZSLGSTLLZZZIRKW");
    msg.component.assign("TBUQPREQZJLLOIAVFKLFRAVTFWYBMRPZTZMFQEKRHRSUAQOSGNSZDNCGNXCIWSRZONNDXIJZELQJTUSPMVGEVNOQEGLKYYXAWHFLZCBEVHFGKIMWPZSCXPPCBRJBDBJDLSNLUEWJSAPAKJVDTTTLXOKTHDIAEBVGUHCQNBGZXKXS");
    msg.act_time = 21306U;
    msg.deact_time = 64010U;

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
    msg.setTimeStamp(0.877143233996435);
    msg.setSource(29529U);
    msg.setSourceEntity(224U);
    msg.setDestination(21430U);
    msg.setDestinationEntity(38U);
    msg.id = 20U;
    msg.label.assign("ZNQOLKVAWCGXMXMECOPFUCGGPRIFJEROJBVRMYMQINBEIUFUSYNTXLGJSHJAEXPLOTHBUJDHZUDTLAJMFRLURAKQBWVMVBOGPHYHAUUDUJWNGTTQOBDIWKGTWHWB");
    msg.component.assign("FNZXEAGIQCZMSEKNIEBNDZMPBUTVCONJTYSBKYTWPXHUAHZDOZTRFBIWQCNOAMKKVMSCXFILDHPNMNAWJYUAPNLUIPLKLYQJGZAZXEUOLXMAWTISRWVGHVGDFXLFWRTTQWKHVZYFH");
    msg.act_time = 12805U;
    msg.deact_time = 56370U;

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
    msg.setTimeStamp(0.0987641408360137);
    msg.setSource(13183U);
    msg.setSourceEntity(106U);
    msg.setDestination(9832U);
    msg.setDestinationEntity(172U);
    msg.id = 67U;

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
    msg.setTimeStamp(0.6592910395419016);
    msg.setSource(25508U);
    msg.setSourceEntity(10U);
    msg.setDestination(1896U);
    msg.setDestinationEntity(4U);
    msg.id = 244U;

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
    msg.setTimeStamp(0.44984934779588537);
    msg.setSource(33840U);
    msg.setSourceEntity(60U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(13U);
    msg.id = 143U;

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
    msg.setTimeStamp(0.7691966404475569);
    msg.setSource(25426U);
    msg.setSourceEntity(114U);
    msg.setDestination(56630U);
    msg.setDestinationEntity(252U);
    msg.op = 197U;
    msg.list.assign("UFRUYHOYKECSAKQLNBCMHTWLTUPJMFVWEMZRDQELMJJZYP");

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
    msg.setTimeStamp(0.9541686817092232);
    msg.setSource(53294U);
    msg.setSourceEntity(39U);
    msg.setDestination(16406U);
    msg.setDestinationEntity(218U);
    msg.op = 2U;
    msg.list.assign("PEWXFCHWIYETADQBEGWWDFBVMLSKNNVTSDZDPGGUZCPXWNLTBIGXSOSSCEECARPYNAODHYQMYHJWKAYLWXIMFLFFIDQHNBVPRDUUFKZPJCQYGZKURBYNJBGLPGSQJKDRVMSZOTMMNBIPKCHCWXHHOMJAMXZRANREJGJXFXSHHTFOLMKKYNKBLKTVIQINAOAQDRAXLUPYFAFIOTLISTDGBQVPQZRVVUCJZURTZCOTEJEWZ");

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
    msg.setTimeStamp(0.46569461813565705);
    msg.setSource(50687U);
    msg.setSourceEntity(81U);
    msg.setDestination(47531U);
    msg.setDestinationEntity(165U);
    msg.op = 173U;
    msg.list.assign("LGKWDZPCLCDGLQAMVDNIPWKWUJOHUERYUBRYOTEKMLPNDYLRJKVAEGDZXHQHSWRVATOBTEQKGASSJUESKYMJLZQTLTUJUJYIUONNXRTXOCOWBCHISPVWMKSSFGABHGMFHBCJYLUPFAZVXZZMJJIMDRCHYTEQWQEFYTOFNDGWGXYDAHCRNPQABSVRPYICNIISFXKFXSPGBEVQVTLIOXFDPANUWCTRQNPZOVENZMWII");

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
    msg.setTimeStamp(0.9480793833161296);
    msg.setSource(46485U);
    msg.setSourceEntity(60U);
    msg.setDestination(35947U);
    msg.setDestinationEntity(248U);
    msg.value = 126U;

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
    msg.setTimeStamp(0.15204509173888137);
    msg.setSource(42962U);
    msg.setSourceEntity(30U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(78U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.716750922263275);
    msg.setSource(3147U);
    msg.setSourceEntity(150U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(208U);
    msg.value = 189U;

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
    msg.setTimeStamp(0.5868921010775681);
    msg.setSource(9141U);
    msg.setSourceEntity(12U);
    msg.setDestination(43208U);
    msg.setDestinationEntity(41U);
    msg.consumer.assign("EXVPCSLZGZMSGBBOTNPRRJEDEIEGSUIWFIMLPKBGNVALODZWMCHMQXNUPBOPINEFNSBWYVFHUQJOQBOLBHIUAYZYZRAKQLRDSKPBWLGRWLIRHOMTUJEFMCREDXJATEMOAQ");
    msg.message_id = 39014U;

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
    msg.setTimeStamp(0.358135105818983);
    msg.setSource(3096U);
    msg.setSourceEntity(113U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(102U);
    msg.consumer.assign("ZENSGLEVHAGSHXYHCOKHZJMWUQNOPAQMRINUHREANOWISPXVQJCXGEJXCZIGPLXWNEITPCVQMJQYTCWHREFBITULBSRGMNFYZCTNTBSGXLCUJTMIRDEWFMVHXZDHAAWBOFMURAFKXDCCTWSDYSUBSKZATDZROZEDBTZBVNLGSWJLFQFYKFJLWEMMPNKZOPPRQIBJMKUIKFGOJLBDYVPUHQPNGKFROU");
    msg.message_id = 6952U;

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
    msg.setTimeStamp(0.27910618113542673);
    msg.setSource(14407U);
    msg.setSourceEntity(95U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(154U);
    msg.consumer.assign("EPDUFASLXWALCCQOQEPSEGDXPWRGPJSWTBFZKFACIEIVNAFHPYILRZDSDPKUZRHWVUGGGKTVLLGWNKMZYJROJBTCJOQVVTNFXVUBBFACLGYWTOMNYEYZEWDRSNAIJAHLOYMDTESHCQDG");
    msg.message_id = 41197U;

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
    msg.setTimeStamp(0.760533611222013);
    msg.setSource(53455U);
    msg.setSourceEntity(229U);
    msg.setDestination(31899U);
    msg.setDestinationEntity(230U);
    msg.type = 254U;

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
    msg.setTimeStamp(0.04388676957163973);
    msg.setSource(6543U);
    msg.setSourceEntity(42U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(122U);
    msg.type = 100U;

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
    msg.setTimeStamp(0.70162248438028);
    msg.setSource(57587U);
    msg.setSourceEntity(247U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(163U);
    msg.type = 80U;

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
    msg.setTimeStamp(0.6731823096662438);
    msg.setSource(20469U);
    msg.setSourceEntity(131U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(99U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.7141112544496268);
    msg.setSource(38779U);
    msg.setSourceEntity(104U);
    msg.setDestination(10141U);
    msg.setDestinationEntity(71U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.7216338098428061);
    msg.setSource(40749U);
    msg.setSourceEntity(120U);
    msg.setDestination(27150U);
    msg.setDestinationEntity(107U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.4466371354952231);
    msg.setSource(45852U);
    msg.setSourceEntity(219U);
    msg.setDestination(29764U);
    msg.setDestinationEntity(86U);
    msg.total_steps = 52U;
    msg.step_number = 1U;
    msg.step.assign("XYDTHZAIXJNLXOZMXTNTSLSHIHPMKXVKULJLTVFQYXVGADVVVGPUFIKNGRDPOSRWFYITUEOZPCHCQDWLOWUBMPVAPKEQRMXIYCAKFJXOPBNQGBUGLPBZBFTDKHGNMEWRZQQJJLYJMARCQQNKGZIHHKZITEBRESGYVDUWQTMCMAUWAKFAXMNSAOWUGFBGOJNCJZSFVTHCYIFCSJZIYYXLB");
    msg.flags = 212U;

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
    msg.setTimeStamp(0.7798934898396465);
    msg.setSource(46779U);
    msg.setSourceEntity(63U);
    msg.setDestination(24604U);
    msg.setDestinationEntity(67U);
    msg.total_steps = 192U;
    msg.step_number = 232U;
    msg.step.assign("NHAMSATNGFULQWCIOWXFQVGAZNNECPKKRILDLCYBWUTJHXHVAOBFQAYOCRMOPQRGUFUKGDGRLJEZNHDJDQBHJPDKZWPNAETONEVAVGXHJJRGSFDAFUVNZSJKDSYJYBMSLMYAEXQDMBOIXWNYTZRXVBOTHRQFOQLHUSLTZLZMCOEYYMLKWFPBDPQIPAWNEIUIRQSMSKXWITKVCCJSVCWPTHKRYBGFUXCMOI");
    msg.flags = 37U;

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
    msg.setTimeStamp(0.16299116634366273);
    msg.setSource(2639U);
    msg.setSourceEntity(184U);
    msg.setDestination(39270U);
    msg.setDestinationEntity(197U);
    msg.total_steps = 122U;
    msg.step_number = 238U;
    msg.step.assign("LNIYVETNQOWYRKYIJWOXBYIRLDFDIVWCBUJGTXZSCXXUGUACWEHTPECGNMGLIKTTLOXLMDUPQPPFKQHKBIBQABUDBOGZBOHYCFIVUWJZAVDUZASLRUWFASJHYWSXJPRVNZHZMMGACQKOHPJTFRHPJCNIFIVYVVFKSEQGEDXHSSITZMOGEKXOMLEZUPDDZR");
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
    msg.setTimeStamp(0.4723395888761668);
    msg.setSource(56527U);
    msg.setSourceEntity(57U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(66U);
    msg.state = 23U;
    msg.error.assign("SUVZLMBONJFUDPCK");

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
    msg.setTimeStamp(0.6938975676156006);
    msg.setSource(13988U);
    msg.setSourceEntity(167U);
    msg.setDestination(26463U);
    msg.setDestinationEntity(163U);
    msg.state = 56U;
    msg.error.assign("WONXLFQASYQYWTGDMFRVRHJEIHFGNACMNBCTUDORBFZDLWGXAPNBDEUXTIXPVZLFBGPSPHM");

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
    msg.setTimeStamp(0.056573395061430665);
    msg.setSource(3154U);
    msg.setSourceEntity(98U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(69U);
    msg.state = 23U;
    msg.error.assign("LWPIEIAEXOUDIQUEMYGTLAMMKGSHUBJPYVFLNVSZNQBZCYEAFIYMQWRLOWCKKWGNOXTRKWNOCCMLQHLGPMWBCONHRRHOEJSKMNJJSYNYBVXPDEHQGTUXWNAYQUJERRYPTVIRSPJDIVFZCAODDTYDZQMQCZGDRZPWFWAVGVVSWOFLVULKBVPHTYUZJNPIXTAGNJEZBQKAFLXSUHUCHSHRKBCIDAMLQXJEXGR");

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
    msg.setTimeStamp(0.18702459369839797);
    msg.setSource(3486U);
    msg.setSourceEntity(212U);
    msg.setDestination(38350U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.2757258095348981);
    msg.setSource(5856U);
    msg.setSourceEntity(12U);
    msg.setDestination(15486U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.42311537587784254);
    msg.setSource(2590U);
    msg.setSourceEntity(128U);
    msg.setDestination(36653U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.0823881596859738);
    msg.setSource(50122U);
    msg.setSourceEntity(216U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(252U);
    msg.op = 254U;
    msg.speed_min = 0.85699262141555;
    msg.speed_max = 0.02466904713469875;
    msg.long_accel = 0.623895241703571;
    msg.alt_max_msl = 0.7324000203375419;
    msg.dive_fraction_max = 0.15418210548584832;
    msg.climb_fraction_max = 0.34792346714487543;
    msg.bank_max = 0.3342051278194256;
    msg.p_max = 0.8250320043118208;
    msg.pitch_min = 0.3658718218371453;
    msg.pitch_max = 0.4553011340969716;
    msg.q_max = 0.1481491388459122;
    msg.g_min = 0.2645824576873287;
    msg.g_max = 0.279250391644683;
    msg.g_lat_max = 0.05485145186349749;
    msg.rpm_min = 0.7231059262954879;
    msg.rpm_max = 0.34024385483086605;
    msg.rpm_rate_max = 0.6990764112125436;

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
    msg.setTimeStamp(0.15530751435081303);
    msg.setSource(53346U);
    msg.setSourceEntity(91U);
    msg.setDestination(57860U);
    msg.setDestinationEntity(45U);
    msg.op = 176U;
    msg.speed_min = 0.5370788588598376;
    msg.speed_max = 0.9537065712015318;
    msg.long_accel = 0.5305970012299821;
    msg.alt_max_msl = 0.1385947740740504;
    msg.dive_fraction_max = 0.9298249014277052;
    msg.climb_fraction_max = 0.23485300686906596;
    msg.bank_max = 0.08587039778211714;
    msg.p_max = 0.7490467729627083;
    msg.pitch_min = 0.08883792900815746;
    msg.pitch_max = 0.6068626710170356;
    msg.q_max = 0.7548306137950895;
    msg.g_min = 0.677929249733502;
    msg.g_max = 0.06096603456189331;
    msg.g_lat_max = 0.24353128681514413;
    msg.rpm_min = 0.3286576800281916;
    msg.rpm_max = 0.46543221109622035;
    msg.rpm_rate_max = 0.12422996291001609;

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
    msg.setTimeStamp(0.002703822658135846);
    msg.setSource(34139U);
    msg.setSourceEntity(146U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(202U);
    msg.op = 194U;
    msg.speed_min = 0.8931400685367907;
    msg.speed_max = 0.17066997843234522;
    msg.long_accel = 0.7499591929190114;
    msg.alt_max_msl = 0.35565878502495374;
    msg.dive_fraction_max = 0.5426116321666574;
    msg.climb_fraction_max = 0.004032339871507862;
    msg.bank_max = 0.6180945055111772;
    msg.p_max = 0.39358146526966475;
    msg.pitch_min = 0.6194798284637602;
    msg.pitch_max = 0.7969240150836607;
    msg.q_max = 0.6648691310644165;
    msg.g_min = 0.06001606275631288;
    msg.g_max = 0.14074176531444282;
    msg.g_lat_max = 0.6706161367930387;
    msg.rpm_min = 0.5069331143817717;
    msg.rpm_max = 0.5508086340628664;
    msg.rpm_rate_max = 0.7354122037788696;

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
    msg.setTimeStamp(0.06301194448012393);
    msg.setSource(46550U);
    msg.setSourceEntity(20U);
    msg.setDestination(56626U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.35728865252117925);
    msg.setSource(60311U);
    msg.setSourceEntity(232U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9866190757038139);
    msg.setSource(2505U);
    msg.setSourceEntity(210U);
    msg.setDestination(52571U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.111064419274846);
    msg.setSource(28147U);
    msg.setSourceEntity(102U);
    msg.setDestination(57517U);
    msg.setDestinationEntity(219U);
    msg.value = 0.882287458086709;

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
    msg.setTimeStamp(0.9539926332425953);
    msg.setSource(8424U);
    msg.setSourceEntity(211U);
    msg.setDestination(8842U);
    msg.setDestinationEntity(6U);
    msg.value = 0.5490644130167041;

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
    msg.setTimeStamp(0.275856698354324);
    msg.setSource(2671U);
    msg.setSourceEntity(106U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(110U);
    msg.value = 0.17926080896468033;

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
    msg.setTimeStamp(0.1558098387238882);
    msg.setSource(32176U);
    msg.setSourceEntity(85U);
    msg.setDestination(37886U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.4127680759705683;
    msg.lon = 0.8044528687897784;
    msg.height = 0.9810445934269987;
    msg.x = 0.43509126142966725;
    msg.y = 0.501482339461207;
    msg.z = 0.8334449369360638;
    msg.phi = 0.10259345532908726;
    msg.theta = 0.6504585290467523;
    msg.psi = 0.6924046078291958;
    msg.u = 0.2131137466564219;
    msg.v = 0.09368792185086205;
    msg.w = 0.618888957873923;
    msg.p = 0.6844244203474079;
    msg.q = 0.32361767475295256;
    msg.r = 0.2734552510754946;
    msg.svx = 0.223842817759223;
    msg.svy = 0.23193790159051775;
    msg.svz = 0.9703879132985089;

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
    msg.setTimeStamp(0.5867197908350501);
    msg.setSource(39631U);
    msg.setSourceEntity(107U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.7703909094246302;
    msg.lon = 0.43974041312491674;
    msg.height = 0.0972439467212649;
    msg.x = 0.6197988331030818;
    msg.y = 0.5987828062359292;
    msg.z = 0.4903238873524671;
    msg.phi = 0.3845353672581714;
    msg.theta = 0.8402662230556953;
    msg.psi = 0.5910774912801265;
    msg.u = 0.5071660628439459;
    msg.v = 0.8871148889365308;
    msg.w = 0.1514960148768255;
    msg.p = 0.29365674641268413;
    msg.q = 0.8745469853690618;
    msg.r = 0.29767334456538364;
    msg.svx = 0.4116995355823718;
    msg.svy = 0.33277850795245556;
    msg.svz = 0.5702415388524688;

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
    msg.setTimeStamp(0.40057511029575765);
    msg.setSource(12093U);
    msg.setSourceEntity(140U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.2490947419713233;
    msg.lon = 0.3875223255227843;
    msg.height = 0.4238160322509501;
    msg.x = 0.8858818335905941;
    msg.y = 0.36187951820131603;
    msg.z = 0.5354845031813591;
    msg.phi = 0.40455782054978684;
    msg.theta = 0.5446938973657643;
    msg.psi = 0.5777512331986788;
    msg.u = 0.25876764122073914;
    msg.v = 0.7705212224378863;
    msg.w = 0.08819846740267168;
    msg.p = 0.8136539365686374;
    msg.q = 0.5254531256850759;
    msg.r = 0.18589812196070155;
    msg.svx = 0.3311094677350276;
    msg.svy = 0.622050558962421;
    msg.svz = 0.7834122441032599;

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
    msg.setTimeStamp(0.6846205625791757);
    msg.setSource(48291U);
    msg.setSourceEntity(104U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(169U);
    msg.op = 212U;
    msg.entities.assign("QIENHOSDJLCDHJNIXADVJYAYNSVLTVXYOEIZZNFPGUENCLEQVRQQYWRHNJINSJKARZXYRXUXKMQBKZQAJTODWSFPCPFCFUGUUXVEBYXLTFGDTXBCLWPPDOMDKTSRARKZIBTYMOH");

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
    msg.setTimeStamp(0.19930878444419065);
    msg.setSource(8464U);
    msg.setSourceEntity(187U);
    msg.setDestination(38008U);
    msg.setDestinationEntity(116U);
    msg.op = 217U;
    msg.entities.assign("CMADMFRVDXWZKSMLVNWMNTKYOSQMHZLLFQACXEAEDUPOQEUEUDUILOBLASHTDRMNGVFAAWDZPCGDJDBVQSQBYRHCFCSYCGYGOTXFXJNZJNKRJJLOTAXVWVBISNGIVGQPVNYTWYAVMHBBKUNHUMNLTGZSJPOQOEBUJWRZIRIZIRKWGJPWKOXEKOLUAZFGYJKEKHPFICDBYHUKERDHAQPTFIBLLWPXECTXSBTQIGZPRSMXRCUIOQFYSZMFNTE");

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
    msg.setTimeStamp(0.21816171715734334);
    msg.setSource(54437U);
    msg.setSourceEntity(125U);
    msg.setDestination(18602U);
    msg.setDestinationEntity(250U);
    msg.op = 29U;
    msg.entities.assign("HFOEGQOXVUSUTTRSVIFPQSOAQGKAJVXCBSDYAYLYWFZBVLHRUDDMXNDQYIDACWRERTVEILECFGLHPZTXCAKZJISJOZZNOFCLPEWDTYNXWEKKNDMWHMBTNKIRYHYPJQZMVKMMBIILTGOBUHWYIPCVASVOWCTJNSLNAGFUZNQNRMVRPSDLRFIBEVJZEYGSGTUJJOGAFUKUOXMBHMXWCNQZJPKDRQTPAHKFHUXX");

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
    msg.setTimeStamp(0.30841612844906585);
    msg.setSource(10738U);
    msg.setSourceEntity(246U);
    msg.setDestination(809U);
    msg.setDestinationEntity(33U);
    msg.type = 114U;
    msg.speed = 58890U;
    const signed char tmp_msg_0[] = {68, -82, 6, -103, -33, 116, 34, 76, -118, 91, 13, 15, 41, -124, -10, 104, -110, 101, -63, -2, -74, 56, -85, 28, -60, 37, -72, -89, -127, 42, -57, -22, -98, 56, -87, 39, 123, 96, 106, -68, -93, -112, 99, 63, -102, 84, 48, -68, 92, 5, -88, 117, -106, 74, 26, 4, -120, -111, -53, -30, -94, 97, 73, -14, -98, 98, 18, 67, 96, -113, 1, 103, 79, 45, -93, -110, -5, -115, -118, -118, 88, -18, 41, -49, -111, -93, -1, -29, 41, 88, 43, -112, -84, 82, 24, -84, 5, 1, 3, -106, 97, -96, -21, -24, -86, -58, -88, 62, 30, 85, 59, -110, -27, -67, 101, -12, 86, -99, 10, -16, -72, -38, 11, 68, 118, 46, 86, 109, -45, 18, -26, -94, -123, -36, 52, 72, -42, 42, 30, -125, 45, 32, -47, -56, 24, -28, 116, -18, 67, -2, 25, -89, -96, 55, 113, 96, -19, 93, 57, 18, -58, -123, -48, -62, 66, 50, 23, -8, -27, -121, 17, 60, 75, 66, 106, -69, 113, -95, -30, 50, 24, -94, -19, -63, -61, 64, 102, -66, -41, -106, 70, 13, -76, -37, 35, -37, 34, 82, -109, -76, 28, 58, 55, 21, 86, -60, 37, 59, -3};
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
    msg.setTimeStamp(0.2362988258551204);
    msg.setSource(15839U);
    msg.setSourceEntity(105U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(224U);
    msg.type = 192U;
    msg.speed = 20155U;
    const signed char tmp_msg_0[] = {-8, 109, -67, -47, 26, -32, -27, 96, -18, 124, 38, -24, -127, -79, 73, 9, 65, -65, -37, 122, 119, -102, -34, 21, 10, -26, -3, 99, -114, -6, 39, 126, -49, 29, -60, 71, 8, -42, -80, 85, -102, 51, 41, -92, -32, -57, -81, 65, -73, 39, 56, -69, -4, -10, -122, 107, -11, -9, 29, -91, -24, 110, -80, -66, -26, 92, 3, -62, -55, 42, 79, -75, 59, 63, -69, -98, 37, 111, 100, -94, 27, -95, -81, -38, -105};
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
    msg.setTimeStamp(0.7446726933346568);
    msg.setSource(60809U);
    msg.setSourceEntity(12U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(62U);
    msg.type = 26U;
    msg.speed = 17557U;
    const signed char tmp_msg_0[] = {-67, -44, 45, 100, -80, -126, -90, -3, 39, 14, 65, 61, 91, 25, 6, -88, 11, -23, -90, 9, 110, -122, 71, -91, 56, -84, -66, 75, 75, 117, -75, -47, 71, -58, -10, -95, 79, 17, -14, 77, -71, -15, 52, 66, -114, -32, 90, -67, -126, 36, -76, -109, -23, -86, 6, 63, -75, -20, -125, -17, -67, -93, -106, 27, 26, -83, -123, -41, -61, 55, -122, 126, 105, -34, 70, 124, 2, -75, -32, 66, 91, -74, -39, 21, -45, -65, -38, -69, -28, -25, 4, 107, 113, -82, -16, 6, -69, -118, -79, -65, 0, -41, 38, -71, -52, -30};
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
    msg.setTimeStamp(0.5186240046781329);
    msg.setSource(17854U);
    msg.setSourceEntity(115U);
    msg.setDestination(6854U);
    msg.setDestinationEntity(169U);
    msg.op = 67U;
    msg.tas2acc_pgain = 0.4377757139807531;
    msg.bank2p_pgain = 0.9093829700383089;

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
    msg.setTimeStamp(0.27122240889016935);
    msg.setSource(36777U);
    msg.setSourceEntity(3U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(132U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.058749799039986894;
    msg.bank2p_pgain = 0.4010605918218798;

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
    msg.setTimeStamp(0.6563566571053038);
    msg.setSource(31238U);
    msg.setSourceEntity(74U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(131U);
    msg.op = 32U;
    msg.tas2acc_pgain = 0.4409197760915393;
    msg.bank2p_pgain = 0.33053340065181036;

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
    msg.setTimeStamp(0.9919714148449139);
    msg.setSource(49305U);
    msg.setSourceEntity(73U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(108U);
    msg.available = 1853398257U;
    msg.value = 73U;

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
    msg.setTimeStamp(0.9716829478747937);
    msg.setSource(881U);
    msg.setSourceEntity(20U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(165U);
    msg.available = 3886684203U;
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
    msg.setTimeStamp(0.3252666988131727);
    msg.setSource(60286U);
    msg.setSourceEntity(146U);
    msg.setDestination(21471U);
    msg.setDestinationEntity(250U);
    msg.available = 749623233U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.43344870346588205);
    msg.setSource(60690U);
    msg.setSourceEntity(180U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(227U);
    msg.op = 52U;
    msg.snapshot.assign("KTDBKGDMJYFWSPSQOUUYUQPAUGWWDETRECAPXEVFYTYZHJJNECNQUHYMOLEJPIAGDCVTPTWHLUQOGLGCTXGCWSWCXFRZPJKVNTVDZPONIRZOMSIOBEPXGADLBVORMTBHLIAAEBNNBVQFDEUOQVJGIQSKFNZXJDIFSJYDGNKPZKRMSYVAFKIHTZUQUIEIVCKNNQYSBWETOIR");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.09668957425885538;
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
    msg.setTimeStamp(0.6165132072619273);
    msg.setSource(14546U);
    msg.setSourceEntity(55U);
    msg.setDestination(25270U);
    msg.setDestinationEntity(155U);
    msg.op = 83U;
    msg.snapshot.assign("YWXKYHEIANWBJFGRLSVPEOOSEXMBCXEEKKIVLDBQAPZROGSDZLKRQZINIGJPKUMJOBFLNAUFDICFLTMPAXACQPWYCZTQJDPWSSQUZPKMRWXSGCJHBVFDVDLKFQQMXWYYUUXCABEHQZIYNFBGHKPMYTGOVJORWVKVCTNUMWEXDRINJYHALXTOIMEBHTIATNSTVRPZYAIRZAJUWQNLDOVYUMENHWGDSZ");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.4119720094884911;
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
    msg.setTimeStamp(0.16483253448767055);
    msg.setSource(28432U);
    msg.setSourceEntity(112U);
    msg.setDestination(14446U);
    msg.setDestinationEntity(77U);
    msg.op = 89U;
    msg.snapshot.assign("RKSSONFCYYZGFAHVMRYMBKNQTIFQHUGCMBENXXHWQAZUBAJLMREMQYPICRYTQOBAYFVAAXGQOJMAKOBKRVHWKWTTVEQMIAPPWRGFVGZUIHTTSTHDXCELZDJXKZFIITDLEPJWRBXNEOWKALSZXBGOCUJCNDPDJSOLVGUMYHOXXITGVWZOMDPNNSQADEQUEUOQWPXBBWGUPNCRIHLBYCGTCRZFNVJZLCILEHDNSUFFJKJK");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 32632U;
    tmp_msg_0.rpm = 0.23447820582697843;
    tmp_msg_0.direction = 210U;
    tmp_msg_0.custom.assign("VIUDQXKMAGEPALNSMCTJDHQOAOCGIKNESAQBBGKIQYU");
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
    msg.setTimeStamp(0.46955354978869557);
    msg.setSource(44215U);
    msg.setSourceEntity(63U);
    msg.setDestination(7882U);
    msg.setDestinationEntity(32U);
    msg.op = 230U;
    msg.name.assign("QODHXMPOHWKZSDIPETEUVUSXJUPTLGCNZERGXCGXYMWARERHQJAJAKHDNIYGBDVJCCOXFNCBPHFWVXY");

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
    msg.setTimeStamp(0.6327569884996125);
    msg.setSource(6520U);
    msg.setSourceEntity(163U);
    msg.setDestination(28582U);
    msg.setDestinationEntity(234U);
    msg.op = 237U;
    msg.name.assign("BXRBXCSPHIAAXFSXCQFYDCZVOVRQKBBCRMPKKJOERTPPLWNRJWTOOYQYDEOETWGYWMAJJJBFNGLVVJYYHMW");

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
    msg.setTimeStamp(0.7533330907409184);
    msg.setSource(33307U);
    msg.setSourceEntity(182U);
    msg.setDestination(18886U);
    msg.setDestinationEntity(118U);
    msg.op = 108U;
    msg.name.assign("BGIENWLDFADXRAVGJHEUSZROUYTLDHQSCGXQXOUGIHKTICCWOWZUMGYZAPPWLMNPHXSOTYEUXZCASNDCDYRTXZRJPWSRGSOMCCLPQLRIQGMZAEYWOJIXVDQFZMKFYTUNJKIJLJNAXNUGRTGARWJOAWLKBLICQBPVMKPBQOHBJWFVDHOEMLMFZTEAVSBJKENWYDFMVFKIHEHSBFVJQOGVHEUUFTPR");

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
    msg.setTimeStamp(0.2756523981816431);
    msg.setSource(54636U);
    msg.setSourceEntity(53U);
    msg.setDestination(5318U);
    msg.setDestinationEntity(130U);
    msg.type = 103U;
    msg.htime = 0.221631319430465;
    msg.context.assign("XCIRAYTFUMZPONWKOHUXNDBDZOOGKKKQESDW");
    msg.text.assign("YXUIVIUBNFGMQHVTVHEDMAMWRZXJHKOSPZPJKNHHZFSLPVYRMWLIUDHAMTFIOSKSNGRUFMTWZPYHD");

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
    msg.setTimeStamp(0.5565462651274623);
    msg.setSource(19223U);
    msg.setSourceEntity(217U);
    msg.setDestination(57143U);
    msg.setDestinationEntity(190U);
    msg.type = 130U;
    msg.htime = 0.7035201166153113;
    msg.context.assign("LFCMTOWUAKROMHVGVDBXJTKMPGKKEIFDPIGASYLAIINUNFXNYOWNEZYXVNHAHENRYZJDNKPTYWXRMVZSBZRUSIBXILKPLDFZJDEJHVDZWAWMFAVCVMHMHTPIQJCCEGHDBVCBMVCYTSZWSOOCGFYUSSPJAFZLPRQKTXRHRMWXNDHUBEOTQAQRQYEMQXILWRSLZFFJNCWLLGABUDFOPUUEVXJGOGQZOKITJQ");
    msg.text.assign("ZLVXQMVEKRBCCVEXTYFWNPNRCITKFFWQOQKVJTKCDBHRGIEONSUOIBGUBQSUHJYXSPDXEYJPCDQOWORHRENXDYWPULODYQRIKZIANPORCDUJANMNMKGJLKMUTVZRHODATQISFGMVLHEDAZBNIPUTWMFYGYHMYX");

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
    msg.setTimeStamp(0.1592739175263006);
    msg.setSource(45603U);
    msg.setSourceEntity(64U);
    msg.setDestination(5991U);
    msg.setDestinationEntity(128U);
    msg.type = 13U;
    msg.htime = 0.2575835669456613;
    msg.context.assign("QGWDHUCYNRVZMCLGWUITMZDUKGWLXTFEQPSQTPSYZWDVBFDOHAMEURMDMQINNSRUSSTRQVHHYTMFVJOFIWMYXJDSKKWBCGZCOPNVTJZJJOVNABGAKJYFDNSKVZYISDRPMPX");
    msg.text.assign("BUBZPIDXNTMEDOYHOCGKNCVTKIALJMXFQFJHUIUHAIRELNOMQVTLGDDZLVFHADYIRIPUKTAXJPOHMOQGSAIRNXREBPBMPYENYTCMBJXKZRCAAQODTBEJMCPFVPUZLGFXGWFOSTCCQ");

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
    msg.setTimeStamp(0.6365149039378247);
    msg.setSource(49344U);
    msg.setSourceEntity(171U);
    msg.setDestination(43701U);
    msg.setDestinationEntity(31U);
    msg.command = 108U;
    msg.htime = 0.050657689857104504;

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
    msg.setTimeStamp(0.43234073474712853);
    msg.setSource(30175U);
    msg.setSourceEntity(162U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(111U);
    msg.command = 241U;
    msg.htime = 0.9620409733937189;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.htime = 0.2644745798343754;
    tmp_msg_0.context.assign("HPKRVAUYZJOPFLHUBMWNLOWGYGSZRDYIPCNSOMILYKIMYREEKWIEFOTBXHJVGXLTVDNTBWKXXYGJBJFBHYEJEEGCNGLCXMHKDLKJYRNRATFNDCPHSAOBCKSRXYNZVLEBMVALNUCJOGVSCUAZIGANDPQFFVZUW");
    tmp_msg_0.text.assign("IRFXJOXAFIMFYCIDJDEZBUMMIGCXZEXDCMSPKDTABKMEROANBVSIZHYSLATFRPWMDELIEQWSVOCMVCNCYSVTVRDBCAHIPKYXJKOTYZRIOHJQNGNKIJYALHQSQGZBONVUKGCQZEQPLGYUYWWSFWTZGFLH");
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
    msg.setTimeStamp(0.8714091003336377);
    msg.setSource(9268U);
    msg.setSourceEntity(72U);
    msg.setDestination(1375U);
    msg.setDestinationEntity(148U);
    msg.command = 135U;
    msg.htime = 0.6075651706957389;

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
    msg.setTimeStamp(0.8158217502692852);
    msg.setSource(40164U);
    msg.setSourceEntity(173U);
    msg.setDestination(35072U);
    msg.setDestinationEntity(13U);
    msg.op = 194U;
    msg.file.assign("GMOZDBUBRXJZYNEDUODRTGQHKLCFAQECHISZPEZBKODYVTURGLAWAJAKKWBLNPSM");

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
    msg.setTimeStamp(0.5615690825219861);
    msg.setSource(52054U);
    msg.setSourceEntity(186U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(230U);
    msg.op = 9U;
    msg.file.assign("MPVDDDOGWLRWNWACABVJDSHFHSKSHIMVDQQLTMWEOKRHTVUNIAFLBOGUNEMSRBPCEJNXIKKXLGCRRYHLZUZSDAKRWTNZXXLLIJ");

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
    msg.setTimeStamp(0.7743744024026088);
    msg.setSource(3838U);
    msg.setSourceEntity(88U);
    msg.setDestination(17041U);
    msg.setDestinationEntity(60U);
    msg.op = 144U;
    msg.file.assign("CWDEBWIRKKLMLT");

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
    msg.setTimeStamp(0.05935307985444083);
    msg.setSource(34794U);
    msg.setSourceEntity(179U);
    msg.setDestination(32877U);
    msg.setDestinationEntity(29U);
    msg.op = 107U;
    msg.clock = 0.009250510598886375;
    msg.tz = 23;

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
    msg.setTimeStamp(0.13124908416720749);
    msg.setSource(1207U);
    msg.setSourceEntity(17U);
    msg.setDestination(51803U);
    msg.setDestinationEntity(185U);
    msg.op = 148U;
    msg.clock = 0.6125997861396655;
    msg.tz = -43;

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
    msg.setTimeStamp(0.5484067161745356);
    msg.setSource(45448U);
    msg.setSourceEntity(238U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(218U);
    msg.op = 1U;
    msg.clock = 0.9204497152175523;
    msg.tz = -79;

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
    msg.setTimeStamp(0.8529331318588012);
    msg.setSource(12921U);
    msg.setSourceEntity(228U);
    msg.setDestination(18812U);
    msg.setDestinationEntity(164U);
    msg.conductivity = 0.4655305531322935;
    msg.temperature = 0.47103247649930224;
    msg.depth = 0.7230147075133939;

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
    msg.setTimeStamp(0.04265102378692476);
    msg.setSource(46162U);
    msg.setSourceEntity(116U);
    msg.setDestination(3403U);
    msg.setDestinationEntity(233U);
    msg.conductivity = 0.5777813636891568;
    msg.temperature = 0.6463497219860656;
    msg.depth = 0.2573285882802724;

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
    msg.setTimeStamp(0.9586092501808691);
    msg.setSource(57398U);
    msg.setSourceEntity(146U);
    msg.setDestination(25242U);
    msg.setDestinationEntity(129U);
    msg.conductivity = 0.5399480515294153;
    msg.temperature = 0.20353934043351607;
    msg.depth = 0.4549208227158711;

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
    msg.setTimeStamp(0.6968312852751689);
    msg.setSource(14407U);
    msg.setSourceEntity(145U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(242U);
    msg.altitude = 0.32075025968062176;
    msg.roll = 47277U;
    msg.pitch = 52159U;
    msg.yaw = 10239U;
    msg.speed = 7156;

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
    msg.setTimeStamp(0.7764535844089723);
    msg.setSource(26425U);
    msg.setSourceEntity(177U);
    msg.setDestination(62814U);
    msg.setDestinationEntity(146U);
    msg.altitude = 0.4125734206728332;
    msg.roll = 20494U;
    msg.pitch = 40545U;
    msg.yaw = 51197U;
    msg.speed = 9434;

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
    msg.setTimeStamp(0.5578428647015394);
    msg.setSource(65482U);
    msg.setSourceEntity(253U);
    msg.setDestination(48476U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.6156342578607982;
    msg.roll = 34581U;
    msg.pitch = 52484U;
    msg.yaw = 41568U;
    msg.speed = 17647;

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
    msg.setTimeStamp(0.09537834823964608);
    msg.setSource(52961U);
    msg.setSourceEntity(228U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(128U);
    msg.altitude = 0.37602674981904005;
    msg.width = 0.39808350036546836;
    msg.length = 0.6293938674738292;
    msg.bearing = 0.3054978743343648;
    msg.pxl = -9863;
    msg.encoding = 19U;
    const signed char tmp_msg_0[] = {107, 30, 80, -108, 30, 99, -48, -78, -107, -72, 123, 99, 71, -115, 99, 22, 6, -97, 108, -49, 99, 123, 11, 105, 90, 8, -54, 77, 19, -5, -75, 25, -125, -84, 87, -112, -83, 29, -120, -78, -54, 31, -21, 28, -113, -82, 52, -21, 67, 66, -62, 0, -106, -122, -6, 88, 88, 17, 71, -58, 88, -52, 14, 55, -1, 86, 113, 49, 7, -67, -25, 73, 93, -82, -74, 70, -24, -41, -126, 34, 4, 114, 58, -24, 117, -28, -90, 80, -116, 121, 88, 72, 120, -112, 42, 7, -36, 23, -84, -40, 102, 65, 66, 112, -101, -42, -118, 21, 104, -117, -52, -26, 54, -8, -107, -24, 62, 2, 0, 21, 5, 76, 110, 101, -76, 110, 116, 72, 54, -32, 54, 95, 72, 73, -107, 110, 28, -23, -87, -67, 78, -46, -128, 78, 49, -11, 10, 92, -111, 18};
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
    msg.setTimeStamp(0.16576802799680446);
    msg.setSource(60071U);
    msg.setSourceEntity(236U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(49U);
    msg.altitude = 0.22994651656844545;
    msg.width = 0.7247631429463576;
    msg.length = 0.7655867113495644;
    msg.bearing = 0.49264609691771544;
    msg.pxl = -17702;
    msg.encoding = 15U;
    const signed char tmp_msg_0[] = {-95, -83, 118, -35, -81, -8, -53, -91, 50, 17, 85, -31, -82, -123, 7, -38, -100, 29, -53, 11, -88, -122, -29, -118, -27, 40, 17, 104, -99, -125, -110, 7, -120, 21, 59, -69, -112, 18, 59, 120, -122, 97, 42, 65, 35, -122, 47, 55, -79, 50, 66, 124, 12, -81, 48, -22, -78, 47, -64, 91, -128, 119, 109, 40, 27, -65, -68, -115, -63, -80, -23, 3, 33, -43, 122, 59, 22, 14, 18, -86, -128, 14, -76, -7, -67, 69, 12, -116, -108, -110, -6, -13, 5, -48, 69, 58, -19, -58, -13, 56, 37, -113, 80, 10, 117, 116, 44, 48, 40, -14, -74, 45, -128, 44, 105, 112, -108, 120, -120, -94, 115, 75, 19, 84, -45, 80, -20, 27, -58, 123, 88, 22, 114, 39, 66, -73, -56, -35, -123, 53, 90, 48, 101, 51, 95, -39, -30, -45, -47, 20, 1, 12, -59, -105, -36, 45, -16, -16, -62, 105, -38, -32, -85, 44, -123, -26, -70, 113, -28};
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
    msg.setTimeStamp(0.5804392956659375);
    msg.setSource(45348U);
    msg.setSourceEntity(10U);
    msg.setDestination(10370U);
    msg.setDestinationEntity(132U);
    msg.altitude = 0.5105388449154707;
    msg.width = 0.9705120614483084;
    msg.length = 0.3709469629609934;
    msg.bearing = 0.07264722767693976;
    msg.pxl = -8105;
    msg.encoding = 3U;
    const signed char tmp_msg_0[] = {-33, 94, 57, -101, 103, -4, -68, -100, -24, -23, 2, -43, 57, 21, 30, -49, -13, 29, -6, -7, 54, -14, -47, -103};
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
    msg.setTimeStamp(0.6336422592623959);
    msg.setSource(38096U);
    msg.setSourceEntity(22U);
    msg.setDestination(18796U);
    msg.setDestinationEntity(63U);
    msg.text.assign("XEQUYGNWBTHYBSZPNOHPQIMDCUMLJYIDDOCJAFCBALFKNYAO");
    msg.type = 223U;

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
    msg.setTimeStamp(0.8322792033212872);
    msg.setSource(11836U);
    msg.setSourceEntity(153U);
    msg.setDestination(11836U);
    msg.setDestinationEntity(181U);
    msg.text.assign("ZNYTUKDUCZTHNOWAYSZGXSRLZWMYSQSTFLLOUZJULWEZHVPBBVACOUIGEVHKUEPFKMHIXIWXPNAAPOFIXGDHODFPGDAWYIFQGOBLYGXMCMUQYPEHIJNZZRKKTEDXQDOWRREYJNMWPJJ");
    msg.type = 222U;

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
    msg.setTimeStamp(0.0956404470528589);
    msg.setSource(9193U);
    msg.setSourceEntity(191U);
    msg.setDestination(48768U);
    msg.setDestinationEntity(186U);
    msg.text.assign("MYTZWYPNKQCYODTQDTIBDDPIJRVSYWNQMJXEPPLECDUXQVZRTNCCONCFNDPMXELVHCJWXOWQOGHDUZVAIRTNORTJCBWGKUYUNBPQHEGPWGBMVHLFZQJMBYRLAMQSHWVESFAKSHBJSILBIFSEALSUBLSKYMGV");
    msg.type = 43U;

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
    msg.setTimeStamp(0.0005854516289439671);
    msg.setSource(11854U);
    msg.setSourceEntity(179U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(90U);
    msg.parameter = 37U;
    msg.numsamples = 136U;
    msg.lat = 0.15346382805743186;
    msg.lon = 0.05484387654593048;

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
    msg.setTimeStamp(0.34849830953939676);
    msg.setSource(20239U);
    msg.setSourceEntity(126U);
    msg.setDestination(19464U);
    msg.setDestinationEntity(169U);
    msg.parameter = 197U;
    msg.numsamples = 189U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45096U;
    tmp_msg_0.avg = 0.25882309956524596;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.44150977790280443;
    msg.lon = 0.5996627026013392;

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
    msg.setTimeStamp(0.962971436900985);
    msg.setSource(4162U);
    msg.setSourceEntity(226U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(27U);
    msg.parameter = 16U;
    msg.numsamples = 155U;
    msg.lat = 0.6873809130027401;
    msg.lon = 0.7496859217669599;

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
    msg.setTimeStamp(0.7380968718429843);
    msg.setSource(10592U);
    msg.setSourceEntity(81U);
    msg.setDestination(10488U);
    msg.setDestinationEntity(16U);
    msg.depth = 50951U;
    msg.avg = 0.972333908090807;

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
    msg.setTimeStamp(0.5717933925858244);
    msg.setSource(35953U);
    msg.setSourceEntity(48U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(215U);
    msg.depth = 62254U;
    msg.avg = 0.2079129993687433;

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
    msg.setTimeStamp(0.001084454596982365);
    msg.setSource(59997U);
    msg.setSourceEntity(182U);
    msg.setDestination(20635U);
    msg.setDestinationEntity(229U);
    msg.depth = 1366U;
    msg.avg = 0.7988054921684572;

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
    msg.setTimeStamp(0.6211253654131338);
    msg.setSource(22156U);
    msg.setSourceEntity(104U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.9123157640703293);
    msg.setSource(56927U);
    msg.setSourceEntity(182U);
    msg.setDestination(17030U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.29291521325723335);
    msg.setSource(63256U);
    msg.setSourceEntity(227U);
    msg.setDestination(19139U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.5203384790096436);
    msg.setSource(37433U);
    msg.setSourceEntity(62U);
    msg.setDestination(24718U);
    msg.setDestinationEntity(3U);
    msg.sys_name.assign("VGKDVWNKURFHRUQSHNBXQCPVTLDZONLLNZVYPTETSVLUKEIJZUXIAAOBCRMXCGFKGFFCLAIRICSBQUOESAS");
    msg.sys_type = 21U;
    msg.owner = 3927U;
    msg.lat = 0.7417684577043206;
    msg.lon = 0.7191114192262263;
    msg.height = 0.6308481598926803;
    msg.services.assign("ZITEMWPZGKMSYWIOQBPA");

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
    msg.setTimeStamp(0.7862822121571326);
    msg.setSource(64086U);
    msg.setSourceEntity(211U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("KJHXEAXEDWASSLMCZDHGZZQUAAJUCAZTMVTBORGDNUANFJTUHOSQPFWFHPKEMILIRCOONMXV");
    msg.sys_type = 2U;
    msg.owner = 25435U;
    msg.lat = 0.712312943066365;
    msg.lon = 0.7980693557251584;
    msg.height = 0.8703599629513278;
    msg.services.assign("GHKLXIPQXBZTQDSKATACHIEJXNKOZUFVQOQUUKPH");

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
    msg.setTimeStamp(0.040236268826947974);
    msg.setSource(4768U);
    msg.setSourceEntity(60U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(133U);
    msg.sys_name.assign("RVHVPWUGOBNJVKHTOPABYWJQMLJQIFGOTLRUCPDSELRYLYCEVWEOWSACSKAXFFDHQJXQTYMZUBZMDOUPHZQBMTIYKSKBVMTRFQHX");
    msg.sys_type = 164U;
    msg.owner = 21196U;
    msg.lat = 0.9974009954832908;
    msg.lon = 0.24654965116367167;
    msg.height = 0.5191223761771594;
    msg.services.assign("DJNFRPIPSGVRUPKQLFYWVUADRJSCYTUHLGXTTNWQDPVBEJMXFAIXASCUVAVNDQCPOZWINECPGKWHUKQVHHOIOIZKASKVAGTKHROMJTOVNZAMLKBQSOBVHMWJFATSKBIMSOFHIHMBKXTGIYMZNULLGJDFCMNSWBYOYPNVOBUNZCZAGWPTJRMPSQYPFLFRXGRRYYXYEXXLEJLHCGZRCHKYXTEIDEEMLUWGBQF");

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
    msg.setTimeStamp(0.6098043317144716);
    msg.setSource(62771U);
    msg.setSourceEntity(15U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(73U);
    msg.service.assign("FGOPQTTCPMEENJKEDYDGTBEJCRQZJQFWLCIMVSBUXJDDFQZTYMYBPYIDQUXXIGTKONAHNCVXRUWVNDMJFDNCHXWYIRVFFVUIWLVHWZTAJNRGYAZIOLAAMOHPYRUGNMCQXOPRERNLPJSUKABRXSLSSSBXEYAICBQHTWCPKZIRWGTZFOXWEZUKHOZUULMALSCVISTHLPKVVS");
    msg.service_type = 32U;

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
    msg.setTimeStamp(0.358533074024204);
    msg.setSource(65046U);
    msg.setSourceEntity(125U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(152U);
    msg.service.assign("UCYGAPWGRPVMBSIDMFPFGYENIPHQHQQITPSGRZOUXKTLCMTSGGUSBCRUQFTLEELUZEQDHOMZXJBHICYAZVLOUKYSVWKOWNOUBQPAEOGIQNRNUOBLAAHXYXMLTVJHIMVMLKSTSGPDFIBRNZGVWOINXXZDFKCLKALKRODNECKNBZYIZGPWCVRNTKFJVNSPWCH");
    msg.service_type = 26U;

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
    msg.setTimeStamp(0.047342746623795895);
    msg.setSource(23883U);
    msg.setSourceEntity(44U);
    msg.setDestination(55426U);
    msg.setDestinationEntity(161U);
    msg.service.assign("KRTWAIOVESFEMWYYWIGHCRBKQPFAKTBXGDNCYLSOFIYHPYEQVJTHXZZILGAQXRBRCMVPDSDZUM");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.11970271546041367);
    msg.setSource(58480U);
    msg.setSourceEntity(59U);
    msg.setDestination(46562U);
    msg.setDestinationEntity(168U);
    msg.value = 0.28283428234718455;

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
    msg.setTimeStamp(0.11726986510585213);
    msg.setSource(14288U);
    msg.setSourceEntity(205U);
    msg.setDestination(2941U);
    msg.setDestinationEntity(221U);
    msg.value = 0.526189999326169;

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
    msg.setTimeStamp(0.06848562511302125);
    msg.setSource(14694U);
    msg.setSourceEntity(88U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(192U);
    msg.value = 0.3528392048208444;

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
    msg.setTimeStamp(0.3200196006139191);
    msg.setSource(53613U);
    msg.setSourceEntity(222U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(97U);
    msg.value = 0.1334385402970203;

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
    msg.setTimeStamp(0.5122821970042013);
    msg.setSource(25104U);
    msg.setSourceEntity(23U);
    msg.setDestination(34538U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8007887754599148;

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
    msg.setTimeStamp(0.02818470022876174);
    msg.setSource(44322U);
    msg.setSourceEntity(90U);
    msg.setDestination(20194U);
    msg.setDestinationEntity(204U);
    msg.value = 0.11967371429370266;

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
    msg.setTimeStamp(0.5800374922293847);
    msg.setSource(40832U);
    msg.setSourceEntity(133U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(47U);
    msg.value = 0.03754769779892464;

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
    msg.setTimeStamp(0.8516648265576668);
    msg.setSource(44255U);
    msg.setSourceEntity(40U);
    msg.setDestination(155U);
    msg.setDestinationEntity(55U);
    msg.value = 0.4984561703975252;

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
    msg.setTimeStamp(0.6764684965631849);
    msg.setSource(63203U);
    msg.setSourceEntity(167U);
    msg.setDestination(41174U);
    msg.setDestinationEntity(35U);
    msg.value = 0.2262426636481304;

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
    msg.setTimeStamp(0.43978676659699345);
    msg.setSource(38040U);
    msg.setSourceEntity(123U);
    msg.setDestination(49455U);
    msg.setDestinationEntity(85U);
    msg.number.assign("QOJCNKTOGENZOVXZDRVATJLKVYUVSFMKCEYIPDNNTYLZPOQWLVD");
    msg.timeout = 56742U;
    msg.contents.assign("LQVRWIMRDASMGQKPVOXOETJBVBZRIXQZTCSHRWHGI");

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
    msg.setTimeStamp(0.2644691909524046);
    msg.setSource(53657U);
    msg.setSourceEntity(251U);
    msg.setDestination(4180U);
    msg.setDestinationEntity(247U);
    msg.number.assign("ZIZPYGWWIKFEEASCULCSUBEHMCAQBZMJXBFJMUJKDEJAQYNSNPONYAIVTZIRTRKZLQNYAYRLBFZRSQDUGBNHLHZRUQMDKXGGGFTOOAFBCPGXBTDTXVJVHIFRREYNOSHSKVOPNEVWCCMFFFLDDMGWRGTOWKEOQQHDPVWLYGTOJRBMPBUXSIHJJNSXYUCTPESXNTVAAQTODLKWCAUYUKJSBAIUYMZPVW");
    msg.timeout = 47165U;
    msg.contents.assign("XBJGJAZHEGSBVQEBDNTGQWWRAICXFDXHPCNHFPZNUPVXWYSLVLRWTRYQVHNEICFQIJBTEHOKJAATYURBJMTDPNVNZFHDUVGLKMITZZTZKCSOMFURAYWOYBIWHZEPACEHDGJLNUVBXPJROOLXNKLSPXQKDTJEBBIKLQILPAYXDWZRFEDUOHKIYGIGOGUJLOMVDUAQTCJSWGMOFNQZGHMSARLOXFKKMYKTSVWMSWRNBAMEQYMQIFUCZXESURFP");

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
    msg.setTimeStamp(0.43522534133656343);
    msg.setSource(26860U);
    msg.setSourceEntity(5U);
    msg.setDestination(37168U);
    msg.setDestinationEntity(46U);
    msg.number.assign("OCFKUTXOUUXYTGCBOTPFRSQHGSQLVBFGLNDNBRQVMMOFTDESNJTPLADYDEEMPHKYCSICSTHAJLFJICBSBZSVHPROYZYAUOWZHUBIPHOXVZWXFXBPDIGAGXWEVWZLRJGPJWYIRTKUZNADWTFIGXXRARJGNTDZLEAQQEBABIZMKCKCMNFFLOSQNVNCZUQJHQPJEAQGWMRLPQPSDGMVIIMLEHLWKYDUYYRTE");
    msg.timeout = 23413U;
    msg.contents.assign("NKDMVIKRQJWPQOBLWQVFOUEDTAYZBKYSKGXNPUUDJFBNAHWFZHRGLSSYPTCTYIOADAQPDXTBOIYANTXQTWBGHUONRJUCMMGXHVNYZXLCFTIOCUPRVKWNXKLZZLNMHJQLRWCIXNGWGCXSJYHAJUVEORQGUMKGMAAVTPKMEIHIFESYKCODOBMQFCCRXSZELVJJKEQUPJDAESYSPEOFVTJWLBINTHRR");

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
    msg.setTimeStamp(0.23751390305740439);
    msg.setSource(58457U);
    msg.setSourceEntity(219U);
    msg.setDestination(13751U);
    msg.setDestinationEntity(161U);
    msg.seq = 1917457786U;
    msg.destination.assign("TKJLJWDAJIYPGJSBANWURCTVKYQLUZWOPRAVLQGKUSAEWSVSVGLVDYFMQTZDHGOHUETRMGOTEBIABKIBCKTJSPVZDRVXTRCBMEABUQGIHGYXQYNEDMZHXYKCDFOZOSFFIOXWJCHPMPKTJQMNAZEYSYWXKZWWFELXJFMHGRCLRINIRNQNSUEBWOAPMLPDVYPZIFCAPNXVBQMRGUHNUNHXSOBTKDUHGFZDLEFIHREISP");
    msg.timeout = 11694U;
    const signed char tmp_msg_0[] = {18, -61, 20, -66, -61, 7, 60, 21, 24, 71, 51, 40, 13, 83, 71, -34, 24, 110, 106, 122, -103, -68, 10, -63, 85, -9, 79, -81, -78, 62, 57, 49, 4, -24, 96, 69, -48, 97, 91, -36, 46, -1, -116, -24, 4, 22, 16, 93, -62, -33, -48, -6, 41, 93, 15, 29, -107, -99, 96, 65, -109, -81, -38, -128, 92, -65, 44, 3, -70, -30, 121, -60, -21, -60, -37, 113, 73};
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
    msg.setTimeStamp(0.8400863646660045);
    msg.setSource(61323U);
    msg.setSourceEntity(193U);
    msg.setDestination(14055U);
    msg.setDestinationEntity(213U);
    msg.seq = 286969948U;
    msg.destination.assign("TQRALCXIUNNAUXHZGGGLNAWSHKCPCLPWJRTSWGXBUIMSDQOENFISDTAOJWIMTVVBTFRLRBQVMEEQOJUYIRJRNXWQBFNPEKPJNUFMBKOZDUFTEAJHHZQESVJODLEBHZXYVFALDIUCDQKPMWDFLREXFGLBUTAYDVGXUDQNOLXSSMHJECPWTMYGZBAZIYYWDCHWCIYPSPXPRFTKYRZQCITLZNSS");
    msg.timeout = 28055U;
    const signed char tmp_msg_0[] = {-126, 61, 14, -32, 27, -10, 28, 92, -32, -3, 118, -85, -4, -121, 96, 77, -15, 93, 44, 62, 27, -123, -90, 69, -51, -71, -18, -67, 126, 45, 40, -7, 87, 1, 94, -2, -31, -98, -65, 66, -57, 22, -48, -57, -111, -78, -11, -111, -119, -66, 113, 80, -39, 62, -10, 45, 119, -59, -97, 86, 9, 99, -81, -58, 64, 35, 112, 74, -74, -32, -60, 107, 68, 119, 10, -108, 37, -30, -60, 25, 55, 81, -47, 58, -25, 82, -85, -68, 0, -82, -115, 125, 82, -82, -102, 111, -36, -82, 116, -70, -35, -86, -60, -112, 32, 100, 99, 9, 21, 96, 20, 113, -14, -87, 68, 22, -56, 76, 16, 92, 26, -69, 39, 62};
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
    msg.setTimeStamp(0.6551604116146459);
    msg.setSource(21873U);
    msg.setSourceEntity(140U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(138U);
    msg.seq = 3296248046U;
    msg.destination.assign("JVFNZBNHJXGITPPAZVNFHBEUVACRZSZQLWCHVADAYOAEXDDXGPZTHPNGNKULNVJMJMZPPQMSGXILXYFHQWMNTYWJBDEBTJAROUYKIAVTMWITMBKPJZMVESORARKCDTGMLAOBZQJSRZIILQDWEXDTGOOHUCCKYULITSFCWNF");
    msg.timeout = 29953U;
    const signed char tmp_msg_0[] = {55, 97, -33, -37, -85, 63, 12, -31, 47, 44, 13, 39, 111, -91, 4, 102, 57, -20, -81, 46, 55, 72, 8, -70, -15, -23, 115, 98, -85, 85, -39, 48, 117, 126, -79, -23, 15, 117, -29, 59, 111, 97, 56, 24, -68, -52, 71, -55, -74, 12, -120, 4, 60, -125, 102, 38, 47, 34, 47, 99, 57, 103, -96, -94, 85, -50, 58, -5, 13, 60, 36, 71, -123, -83, 119, -122, 109, -96, -46, -19, 51, 2, 81, -106, 3, -77, -125, 38, 106, 31, -5, -51, 53, 71, 26, 82, 8, -99, -76, 36, 123, 92, 120, -124, 16, -86, 73, 45, 77, -117, 125, -47, 81, 63, 92, -21, 64, 78, -1, 95, -31, 3};
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
    msg.setTimeStamp(0.02074915899598273);
    msg.setSource(9671U);
    msg.setSourceEntity(4U);
    msg.setDestination(26084U);
    msg.setDestinationEntity(141U);
    msg.source.assign("VHTQFLZQZDGMRWEXHNJRSXWYNGZSKBLJQOUWWRSLYZL");
    const signed char tmp_msg_0[] = {104, 76, -37, 22, 125, 60, -9, 52, -80, -24, 40, 74, 101, 126, 91, 4, -5, -40, 76, -94, 112, -102, 28, 56, -9, -113, -122, 87, -118, 34, -90, -99, -101, 86, 104, 40, -121, -28, -29, 117, -105, 51, -84, -58, -115, -33, 88, 19, 89, 106, -80, -105, -102, -125, 88, -15, -35, -28, -23, 48, 77, 0, -107, -100, -51, 55, 115, -112, -26, -112, -101, -14, -37, -10, 53, 87, -77, -58, 21, -66, 108, -45, -38, -113, -50, 102, -39, -50, -86, -79, 102, 30, -40, 87, -97, -33, 85, -92, 6, -128, 40, 63, -45, -122, -9, 79, 26, 67, 57, -57, -65, 49, -2, 112, 20, 89, 33, -77, 59, 14, -34, -101, -21, 34, 109, -29, -89};
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
    msg.setTimeStamp(0.8762478384885787);
    msg.setSource(36839U);
    msg.setSourceEntity(178U);
    msg.setDestination(51231U);
    msg.setDestinationEntity(173U);
    msg.source.assign("OXGBMVCSVALTMZSQVGSCHRPCNNZGASLJTLAZKFCGGJMWYXLKMRMARDZIDUAQCEOPUGF");
    const signed char tmp_msg_0[] = {-51, -95, -62, -30, -26, -40, 20, 46, 57, -59, -90, -1, -19, 1, 56, -53, -11, 107, 73, -40, 100, 102, 49, -79, -56, 39, -61, -48, 50, -41, -100, 56, -61, 39, 13, -118, 9, -82, 59, -99, -91, 44, -9, 62, -102, -18, 115, 44, -6, 38, 50, 47, 20, 91, 109, 13, 45, 1, 81, 64, -14, 124, -25, 109, -104, 124, -57, 56, -125, -33, -84, -84, 126, -122, 84, -114, 78, -109, -7, 73, -52, -29, 39, 105, -126, -60, -73, 57, -47, 80, -41, 88, -100, -14, -82, -86, -73, -12, -13, 90, 117, -8, -98, 1, -35, -47, -48, 13, -55, -104, 123, 55, -97, 75, -123, -84, -45, -60, -23, -66, -26, 57, -41, -67, -87, -120, -114, 124, -4, 21, -74, -42, -5, 122, 85, -43, -22, 31, 122, -42, -105, 56, 60, 54, 45, -10, -127, 31, 34, 4, -103, -122, -101, 37, -119, -71, 49, -24, 102, 122, 69, 75, -53, -35, 7, -96, 116, 66, 7, 72, -41, 50, -84, 65, -62, -33, -9, 32, -58, -103, 8, 78, 21, -95, -100, -16, 78, 84, -41, 19, -21, -44, -126, 1, -9, 62, 57, 12, -13, -121, 81, -74, 51, 44, -77, -11, -109, 27, 32, 117, 35, 78, -51};
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
    msg.setTimeStamp(0.9188352014848534);
    msg.setSource(6257U);
    msg.setSourceEntity(165U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(28U);
    msg.source.assign("FXYOVUXIQHIHL");
    const signed char tmp_msg_0[] = {113, 114, -69, -20, 61, 82, -62, 29, 90, 17, -118, -85, -41, 10, -17, -87, -124, 55, -1, -96, -43, 123, 65, 49, 82, 123, -32, 92, -12, -13, -2, 126, -56, -47, 80, 102, -105, 114, -97, -119, 115, -80, -13, 89, 95, -81, -123, -3, 116, -66, 109, 13, -33, 62, -62, -97, 59, -31, 43, -17, 15, -98, 89, -111, -13, 4, -76, 41, 110, -85, 97, 97, 104, 61, -107, 87, -116, -80, -73, 45, 104, 96, -85, 54, 94, 100, 65, -121, -115, -1, -120, -26, -3, -26, 2, -127, 120, -87, 106, 72, 5, 108, 120, 33, 33, -43, 34, -22, 63, 50, 28, 26, -29, 66, -93, 54, 37, 61, 75, 45, -46, -52, -75, -120, 17, 69, 99, -111, 28, 2, 126, -34, 53, -60, -67, 67, 100, 16, 90, -126, 103, -70, -6, -112, 70, -91, -89, 30, 6, 100, -52, -123, -75, -79, 122, 42, 79, -67, 47, -99, -27, -48, -53, 33, 111, 70, -28, -100, 86, 17, -36, 125, 26, 93, -43, -5, -106, 100, 36, -73, -11, -84, -95, -118, -64, -11, 124, -111, 90, -72, -34, -15, 49, -105, 71, -62, -27, 33, 53, -111, -103, 50, 65, -38, 42, -122, -57, -124, -111, -122, -44, 45, -116};
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
    msg.setTimeStamp(0.3242466000109957);
    msg.setSource(44039U);
    msg.setSourceEntity(161U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(102U);
    msg.seq = 4049471667U;
    msg.state = 203U;
    msg.error.assign("DPANIXSROMTZGWJAMYBXTVCJUWZPIODJHZSUBWEXSLERQPQLCBNKOLNVNHOXLYBAPKASSPRFGTEVUCISFGQYJFWHJICF");

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
    msg.setTimeStamp(0.8665909608544363);
    msg.setSource(47061U);
    msg.setSourceEntity(37U);
    msg.setDestination(62064U);
    msg.setDestinationEntity(119U);
    msg.seq = 53951218U;
    msg.state = 174U;
    msg.error.assign("BRQQRJLEYGIJPMUNYXDHFHFPGUOIMDENTFDMNSLCPOCSDYOTOMRNVTXBKCQSZDFMRTWYRKFOARIGVTZLJWVKOSDONAMTQHFRWCGZSSMWBJKHZZCQCWAAVVWXBYDQODQMUWKFNRUKXLEHNNPPASOPXGKCCPJUUBKBUMIEGTULEYRROTGZBGWIXZBDKXFEKFHZIEYEVCJXIHAPELTMHDASGPSFCQAJVIQHESXXVALPQUUIBJGYWNILJZZTLBJY");

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
    msg.setTimeStamp(0.4746785825801053);
    msg.setSource(56795U);
    msg.setSourceEntity(147U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(116U);
    msg.seq = 214081135U;
    msg.state = 215U;
    msg.error.assign("CWUQZZWYXNXHAFUHCPYPCGRVYWHGAAUBJQMUFIFFWJVPFRSIXDXYILKGEZYOATTSZOKEF");

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
    msg.setTimeStamp(0.01327020821716729);
    msg.setSource(15512U);
    msg.setSourceEntity(19U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(87U);
    msg.origin.assign("QWSOSJNGLXXJFZQNYJFBIZRXBNFQBESLZMPGATRSYUOWWFOQDVNKHHDZTKRETZXPAHFZQBUYNMTZMAUTGVPOIMIUKYTRUJEPHSBFXDDUITWLQAVPNTWXPKXDIYLCKJEFAAIMGEICOHPVAQPCMIGSICGZDGXJRPGQALJVHFBGKMXHWSFE");
    msg.text.assign("TKSSOCKYGTEXCOOLEOIFCLVFDASNKSDWYLBXSQZHWTBJYPAHXMDZPFIUABEQSNEHPTHJUZRWMVVATCPRIQYBXYOMZJAEQNKPEBSPRBYAPTCIGHIJTXKVDWBIOBGKARZYVUCXCGHAZSLLPVN");

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
    msg.setTimeStamp(0.05295858572844703);
    msg.setSource(21991U);
    msg.setSourceEntity(39U);
    msg.setDestination(5042U);
    msg.setDestinationEntity(35U);
    msg.origin.assign("DDETMUFJCABBMNGQMZOTIIJMWHUKWDNYCEHXYRXELZXHDWEWJSRVGOPFSVRJROLKAIUTVIRPGLGUAVINRFLNECKXIWUNYWZVFNUVOQDGURGJHHKPNMSMQTNPOOEUZAHLGXDLXBPJNTRFZAWZCFYGTWSHGMXDLBJSYV");
    msg.text.assign("RVEHKHGEYGOXTSFLKQEICMDEKLDRJQIZAOYADWHTONLSZHLBBNVLMUVAPHGJIFEELJRFRPDTTPMUFKZUSJZWOZKSGVXVYCQACZKOWVYAUFCPSFRIXYPYOQOHBKBUAIHNPGNFUFQRNBTTMAJKXRSBJYILUOUIJSTOVADBUU");

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
    msg.setTimeStamp(0.04868999696056464);
    msg.setSource(9973U);
    msg.setSourceEntity(99U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("OTCKZRNXBPHECQKSPFXFWCKUWEIQAFKMUJYFCYKLXHAUYQRUCWAWATKBHMZZVRIBNTERPLAGVAMSIOZEJDRNISSTKHBABECSRYHNBWUPPWQXJRPSPNQOOGQHIGEENTNSVNWOSLDDVGBVJJBGNASXSXXLF");
    msg.text.assign("JXIBOESMJFHVUXFPVONDROIWHMDFPEOWRPOBXAMDQTABAFGHWGRNMVCWKSEUJLWYYIUXJTMCBLVQZTPGTGSZLUVEOHLBZJAPKRZGSNNRFNIDRFNEHCPRBEDYAMAUYQNVDQLGCBOZHJLKMADJXTUPGWHHKKPJFFKDKBWLIXAMIUCSYALYUXMRZDUQSTKLQHTYTXEUCWWTMOPZWPEBJQICGQST");

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
    msg.setTimeStamp(0.5514852421428991);
    msg.setSource(42861U);
    msg.setSourceEntity(238U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("TTEBZXBVIVJGYBEUYZOOXSHLSGPMDRWUELHD");
    msg.htime = 0.5873765604729115;
    msg.lat = 0.18045337264959282;
    msg.lon = 0.9985413708115537;
    const signed char tmp_msg_0[] = {111, -17, 119, 15, -23, -81, 23, 90, -66, -61, 99, 55, -82, -1, 105, 73, 105, 39, -12, 122, -128, -67, -57, -11, -93, -111, 39, 122, -27, -72, -8, -73, 34, 26, -106, -72, 57, -81, -48, -89, -106, -26, -111, 119, 35, 98, 64, 57, -42, -67, -123, 10, -106, 81, -10, -71, -33, -63, 35, -67, -82, -43, 92, 40, 84, -14, -65, -85, 44, -127, -11, -78, -54, -55, 71, -76, -14, -122, 41, 75, -60, -41, -76, -71, 58, -87, 63, -72, 118, 120, 121, -103, -34, -104, 77, 122, 62, -40, -37, -47, -84, -69, 57, -30, 78, -59, 115, 98, -87, -24, -52, -43, -111, -105, -87, 54, -71, 74, 114, -96, -30, 85, -68, 98, 30, 114, 31, 70, 103, 84, 101, 41, 8, -78, -126, -93, -50, 29, 51, 64, -89, -113, -4, -67, 120, 32, 38, 51, 85, -68, 63, -13, -97, 88, -5, -70, -77, -23, 2, 40, -110, 122, 35, -58, -29, 46, -11, 16, -60, 35, 10, -82, -6, 6, -83, -2, 64, 93, 64, 25, -113, 42, 78, 106, 116, -101, 62, 7, -71, -17, 18, 112, 1, 98, -125, -55, -32, -41, 82, 19, -51, -118, -50, 13, -105, 66, -33, 1, 79, -82, -124, 120, -58, -8, -78, -103, -95, -82, 6, -22, -9, -98, 78, 7, 107, -34, 26, 100, -124, 7, 92, 103, -125, -35, -16, -25};
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
    msg.setTimeStamp(0.41394242809401527);
    msg.setSource(50104U);
    msg.setSourceEntity(240U);
    msg.setDestination(58214U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("NIFDVSRNSWPFCHNLKHWBAOUTJXWSFIAHUHXUMKBOMZCADIETJQQUSEDZXSPKNJOUSSJGLLYNMUCGDYODEVAZQQEBEKTEWDEOPLHLGXXIKCKCOWRODFMRWNBWLRGYLRBKWPFXZQGVWMU");
    msg.htime = 0.44052095908707145;
    msg.lat = 0.6972032336670748;
    msg.lon = 0.6631707263038266;
    const signed char tmp_msg_0[] = {-12, 90, 95, -97, -38, 105, 55, -88, -75, 43, 67, 68, 17, -1, -22, -3, -107, -118, 13, -49, -75, -89, 105, 45, -110, 45, 26, 49, -125, 79, 18, -109, -25, -125, 108, -76, -101, -76, 79, -119, 24, 15, 103, 9, -62, -110, -77, -14, -56, 98, -12, -9, 6, -64, -85, -113, 102, 101, 116, 43, -23, -27, -69, 2, -61, 34, 120, -49, 116, -16, -14, 55, 24, 99, -45, -8, -54, 8, -104, -37, -94, -116, -84, -94, 90, -95, 40, 85, 9, -60, 81, 35, 7, -41, 40, 29, 11, -50, 73, 122, -119, 58, -4, -97, 89, 98, 11, 107, -111, 80, 37, -88, 81, -18, -30, -112, 96, 30, -124, -85, 73, 25, 4, 77, 76, -77, 82, -49, 19, 9, 68, -67, 11, 42, -28, -96, 49, 37, 67, 37, -11, 15, 1, 54, 51, 70, 81, -75, -121, 11, -53, 39, -58, 10, 92, -78, -123, 108, -2, 2, 36, -120, -5, -121, -73, 92, 33, 91, -23, -6, 56, -43, -117, -26, 116, 1, -90, 4, 116, 30, 45, -44, -65, 116};
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
    msg.setTimeStamp(0.6112949323713703);
    msg.setSource(3806U);
    msg.setSourceEntity(190U);
    msg.setDestination(11661U);
    msg.setDestinationEntity(170U);
    msg.origin.assign("UFZYCZWZCZTQGSLCDGXFNABEYVJLQBORKIMVVQWASXKZISYEDJKTJEMCRSXLDTJYCLUSIRMEJHYWBQTIFGMQPERBBDUZLFWONJODYCEFIPTGBFOTAHTRBYVSXPEKKZHNVYWOZNFMLGMPUJXLWCBDMOBTHDVNUXIVAWBANYHXJKPOQPUQOUEGQHRXNKVVAFATWDLXPWENHOGKRJGIGMHREZHDCCAKRFAWMMPYLKPZSP");
    msg.htime = 0.9850054789816158;
    msg.lat = 0.2974916058665088;
    msg.lon = 0.024428750733591964;
    const signed char tmp_msg_0[] = {-66, -54, -111, -29, -26, 16, -37, -52, -49, -85, 2, 74, -38, 71, 105, 61, -57, -14, -97, 52, -52, -103, 34, 37, 18, 89, 62, 52, 71};
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
    msg.setTimeStamp(0.7166399291535227);
    msg.setSource(52157U);
    msg.setSourceEntity(148U);
    msg.setDestination(64247U);
    msg.setDestinationEntity(75U);
    msg.req_id = 17376U;
    msg.ttl = 33436U;
    msg.destination.assign("QKZPFYEXPEEUDMUEZYUXVDHHXBRBTGAEOYWDCCMTUIAVUHXGKYLDDPOTJFCRVWFKLIMOJVMXCKOCZYWTNEXYTTGZCSJTONKSAGEQYLRKQUJRBDVFUSWCMWMXNPZSYCWHDMPGZAQHQAONUNWJSBLEGBBTPMSJGBIGMUYRRJPHRJHKCNIQPOPSFXYTBILAZLQSZEFNODU");
    const signed char tmp_msg_0[] = {71, -37, 1, -44, 20, 68, 76, -101, -25, -121, -13, -76, 97, 8, 51, -49, -4, -79, -11, 41, 113, -75, 60, -112, -68, 39, 36, -102, -55, 125, -97, -36, -55, 24, -100, -13, 3, -32, -46, -78, -74, -85, 26, 75, 108, -6, 4, -39, 123, -119, -82, 56, 56, 46, -11, 80, -59, -28, 114, 69, 37, -83, 66, 123, -51, 7, 63, -66, -13, 41, -46, 115, -32, -27, 11, 13, 56, 116, 126, 92, -38, -23, 82, -107, -69, 89, -118, -91, 9, -59, -90, 107, -83, 85, 89, 50, 97, 118, 11, -80, -73, 12, 126, 72, 23, 96, -92, -4, 79, -80, 113, -70, -57, -46, -124, -24, -40, 111, -84, -34, -74, 12, 87, 92, -3, -8, 41, -69, -105, 22, -59, -96, -74, 5, 83, -107, -105, -95, -25, -124, 100, -31, 118, 90, 83, -60, 62, 75, 115, -56, 37, -78, -86, -109, -54, 79, 125, -118, 21, -45, 13, 0, -92, -94, 2, 114, 122, -119, -117, 36, -84, -101, -56, -100, -3, -119, 53, -48, -71, -110, -104, 12, -109, 125, 77, 84, -81, -24, 104, 66, -20, 121, 123, 1, -111, 110, -56, 44, -30, -66, 31, 6, -63, 106, -47, -40, 117, -86, -121, 115, -34, 124, 11, 49, 22, -80, -126, 29, 80, 94};
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
    msg.setTimeStamp(0.21288370201978224);
    msg.setSource(8308U);
    msg.setSourceEntity(144U);
    msg.setDestination(38283U);
    msg.setDestinationEntity(254U);
    msg.req_id = 14070U;
    msg.ttl = 62502U;
    msg.destination.assign("WIRNIPLHFELFAVXEVHPSHOYQDDQOLISTABQKKPSXINBUUJLQUPMYMXQVFZKVO");
    const signed char tmp_msg_0[] = {-32, -128, -88, -110, -11, -70, 78, -76, 93, -99, -43, -89, 86, -111, 118, -84, -120, 70, 41, 44, -45, -125, 84, -117, -54, 125, 93, 94, 106, -12, -38, -27, 71, 56, 66, -96, 83, 91, 116, -66, 104, 16, 27, 103, -93, -14, 27, 113, -16, 43, -111, -18, 21, -77, 5};
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
    msg.setTimeStamp(0.578197438727733);
    msg.setSource(2327U);
    msg.setSourceEntity(30U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(184U);
    msg.req_id = 54542U;
    msg.ttl = 1436U;
    msg.destination.assign("FLKUOFFLJZAWVRQMVVRWGHDTYWIPBKACXDNDUYNVXLWNPCMNZQFJZVERHPKQEWOUJHVHJIFNXOLSSEIGJKOTOTJWIMZTTBJHQUCBZMCPHEOAWITUTAQJPEIRGVDSLRUZNCRMPSYBYBXSYCFCDMGIQIGWXKVNYCKTTMEWINGFKLGCMRDYZYSFLJSAR");
    const signed char tmp_msg_0[] = {-32, -82, -5, -24, 34, 57, -3, 124, 96, 60, -104, 124, -1, -8, 80, -30, 56, 34, -29, 109, -7, -85, 24, -58, 122, -46, -58, 63, -2, 20, 54, -111, 5, -48, 49, -95, -41, 98, 107, 67, 73, 70, -82, 20, -82, 97, 37, 15, -21, -111, 47, 28, -11, 67, 5, 88, 101, -34, -113, 32, 91, -16, -79, -121, 125, 44, 52, 101, -82, -105, -57, -124, 118, 50, -81, -76, 103, -73, -123, -107, -41, -78, -37, 47, 75, 57, 104, -124, -123, 29, 14, -99, 97, 73, -62, -78, 7, 98, 52, -116, -84, 57, 109, -92, -96, -78, 118, 92, -52, -128, 76, -102, 0, 113, 20, 45, 66, -94, 48, -93, -82, 1, -74, 37, 112, 26, -16, -58, -61, -26, 1, -117, -22, 101, 94, -82, 65, 87, -107, -27, 39, 58, 32, -35, -58, 111, -106, 10, 92, 99, 89, 80, 43, -68, -98, 96, -75, -65, 9, -122, 43, 44, 98, 88, -87, -18, -15, 92, -8, 28, 12, -78, -28, -117, -57, -56, -32, 78, 92, 103, 117, -64, -49, -51, 11, -105, 53, 7, 95, 9, -56, 5, 14, 83, -110, -83, -25, 57, -107, 68, 62, 126, 69, -90, 85, -128, -94, 94, 113, -24, 98, -53};
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
    msg.setTimeStamp(0.24303071687373212);
    msg.setSource(2589U);
    msg.setSourceEntity(140U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(38U);
    msg.req_id = 64016U;
    msg.status = 64U;
    msg.text.assign("BSMRNOZJDLQBEFDJWCWEHGUPMVKVETTJYACCZOHDKINQUNKEEYNYYSXFYSMZXPSSNOCJDMBCBAKHPHPUSWIBPTVOAPWQQHFFAXKPRGMLZXMJFGXCKDKGHFYDGMBTBJJEUGMSRROLJAOCHESUYUNIXDBIOCLCZWTEQFGKAQCIPLIMRDNVOUZLWPWIXUAZIJQMQGTVGVARZVDXRSBNLPAWIOHSOHZZXH");

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
    msg.setTimeStamp(0.9373320943872137);
    msg.setSource(10138U);
    msg.setSourceEntity(111U);
    msg.setDestination(38219U);
    msg.setDestinationEntity(148U);
    msg.req_id = 18365U;
    msg.status = 145U;
    msg.text.assign("VSJDCZKUBDPBDWLXEZYFQXSXEGZMLANUGJJBTJYAUXKJPISLOLMHQDHGNTEJGCFYDGJWFBZNOAYWHYBTMRSOI");

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
    msg.setTimeStamp(0.04852170070301853);
    msg.setSource(44595U);
    msg.setSourceEntity(2U);
    msg.setDestination(32934U);
    msg.setDestinationEntity(92U);
    msg.req_id = 15734U;
    msg.status = 21U;
    msg.text.assign("RQFOTLMGZGVLYONKHPNGRHDLZLDMKFFEDBSFETUBKCWRJXSOJDBRYAMUPRTUAYLDWYOIEWIQGIT");

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
    msg.setTimeStamp(0.2549504480302045);
    msg.setSource(43711U);
    msg.setSourceEntity(229U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("YZACFEDIDHCCGJWLONRVACKIJLDGLYGFIVBOBUPNCWLEGPOFWEEMMGUIDTHQODMSCAMSRROQTEIKSERQNMIKBSLOTXSGBORB");
    msg.links = 2938474092U;

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
    msg.setTimeStamp(0.17373541495692923);
    msg.setSource(60513U);
    msg.setSourceEntity(252U);
    msg.setDestination(3886U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("VBVQJRFWIHMRQLNHKGGKYHCUHKJPXEJYKTPHMVBENDTOWPUAWKEBILFTCOLQZRAJTDUEKNGQ");
    msg.links = 2811907287U;

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
    msg.setTimeStamp(0.5994681619937335);
    msg.setSource(20961U);
    msg.setSourceEntity(213U);
    msg.setDestination(14448U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("HHDTIUCAYBLWCVZUQQDOJEPUCAHOQMWSBWGBWUBLLORYCMBJBTHYBQERHJHRGQYKMHLNFTLETRDHYEXAXGUDWASWZBSIGTHDKNMMOEFRDGDFWJKCJRPPIJXFVYIESLRWUNSGXVXMOQQKWZSNYFAPFCTPOUFBSOAGMOLUICNDKYMTZFAXOIKDP");
    msg.links = 3598352975U;

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
    msg.setTimeStamp(0.3514155652350881);
    msg.setSource(34247U);
    msg.setSourceEntity(87U);
    msg.setDestination(4748U);
    msg.setDestinationEntity(162U);
    msg.groupname.assign("WQFSJXWQUVOW");
    msg.action = 219U;
    msg.grouplist.assign("MIWDRFXFIWAMPHPJHSMTBFEOPYTJAWHFLNHSPDTOLJVYDHWGPSIOBLERZIXRMKHOUBXQRKOLIZCJKLGYCCKGDFJXQZWZOALFBEHKBOVGBGEVJASYRAQUNPCSRUG");

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
    msg.setTimeStamp(0.30869400168605543);
    msg.setSource(20486U);
    msg.setSourceEntity(166U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("QBJFNGYVYAXEPOHBLDKEFXDEDDZSSPUGUYTNEMJQCWQAIHMGUGARIVFPJOUNUOMHFWJGOSYXXXCQPEITTZPKDGPLBPZHOKGLDNWKDAQQSMVSCYVFLTMSUUTTZFZJIHZVSCWVTKCRBZOCPRQXETXMSCBRFTQHEWRBHNAPKIVMNEGRTVKNIBDOVEIAKCABGIWLJZMHSRWYOKWDZMXQLYJQARCLIJOXLBRCLFA");
    msg.action = 151U;
    msg.grouplist.assign("OKPLMXUXJMZJMOGMPMTXZZHSEMSYEIEDAMXDCDSPQWCVWHZSFLUWQQCJTPGGBUGNXUSYTGSDRHZQOHLOKZHZQQTBKHMBPHFAWXKDAWQGVKWBIEGVUZNZJDGTRFTRSRPVKMXRBXBUBPFWADKLLCUTFOEVSJNEOAXAKQYTINRUPHSQBJNCHLEIVCEIGFFPJJAIOFFZSDNYOEARDK");

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
    msg.setTimeStamp(0.19901023602896717);
    msg.setSource(19586U);
    msg.setSourceEntity(44U);
    msg.setDestination(3557U);
    msg.setDestinationEntity(23U);
    msg.groupname.assign("WLHTNMBSVJMJRMQSCFJERTYCZKZICBCEX");
    msg.action = 206U;
    msg.grouplist.assign("LGZVUNVKXWKQXHGVHPNRSQCKISOZLEHZSPICAET");

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
    msg.setTimeStamp(0.6449913886947196);
    msg.setSource(1444U);
    msg.setSourceEntity(79U);
    msg.setDestination(42601U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6934950322707848;
    msg.sys_src = 36841U;

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
    msg.setTimeStamp(0.2360939535193276);
    msg.setSource(5188U);
    msg.setSourceEntity(43U);
    msg.setDestination(12289U);
    msg.setDestinationEntity(210U);
    msg.value = 0.19781468815642733;
    msg.sys_src = 24007U;

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
    msg.setTimeStamp(0.4813463748057597);
    msg.setSource(58424U);
    msg.setSourceEntity(27U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(23U);
    msg.value = 0.4089910920835882;
    msg.sys_src = 37368U;

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
    msg.setTimeStamp(0.05729712790358532);
    msg.setSource(14828U);
    msg.setSourceEntity(90U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(49U);
    msg.value = 0.8057072857430891;
    msg.units = 237U;

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
    msg.setTimeStamp(0.9875987881128079);
    msg.setSource(64935U);
    msg.setSourceEntity(163U);
    msg.setDestination(58491U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5211701797466219;
    msg.units = 33U;

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
    msg.setTimeStamp(0.7375751543408321);
    msg.setSource(11999U);
    msg.setSourceEntity(107U);
    msg.setDestination(54765U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8245258541999881;
    msg.units = 57U;

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
    msg.setTimeStamp(0.15869846352583084);
    msg.setSource(2985U);
    msg.setSourceEntity(194U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(157U);
    msg.base_lat = 0.5264462737005999;
    msg.base_lon = 0.3739090178935063;
    msg.base_time = 0.06083823775760622;

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
    msg.setTimeStamp(0.12281523695776686);
    msg.setSource(8646U);
    msg.setSourceEntity(129U);
    msg.setDestination(25002U);
    msg.setDestinationEntity(174U);
    msg.base_lat = 0.1100498943494973;
    msg.base_lon = 0.3481524159938214;
    msg.base_time = 0.6787177692574538;

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
    msg.setTimeStamp(0.2625576216322676);
    msg.setSource(29316U);
    msg.setSourceEntity(249U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.6894010501191405;
    msg.base_lon = 0.6250719109659062;
    msg.base_time = 0.6841485025293412;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 10163U;
    tmp_msg_0.priority = 81;
    tmp_msg_0.x = -10576;
    tmp_msg_0.y = -15515;
    tmp_msg_0.z = -18960;
    tmp_msg_0.t = -29951;
    IMC::EntityActivationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 48U;
    tmp_tmp_msg_0_0.error.assign("RLSHHVJKLKMSTNPIFIOADZQJCGZQCEUUXXBXQPFKDZUFZDXIXLODNFHBCXNDHJQMMOIKTWPBONAWKXQUCFKHTMSRDGLQVPR");
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
    msg.setTimeStamp(0.42414636819660756);
    msg.setSource(62391U);
    msg.setSourceEntity(73U);
    msg.setDestination(48787U);
    msg.setDestinationEntity(153U);
    msg.base_lat = 0.22478638012618868;
    msg.base_lon = 0.5369302550574068;
    msg.base_time = 0.6661949586885733;
    const signed char tmp_msg_0[] = {125, -91, -51, -101, 112, -119, -82, 28, 12, -13, -55, -14, 53, -106, 86, -11, -66, -41, -66, -72, 119, -47, -86, 20, 45, -31, -35, -35, -62, -107, -121, 36, 124, -97, -91, 90, -112, -78, -52, -101, -82, 67, -45, 118, -43, -72, -66, -66, 20, 52, -92, 17, -27, 11, -112, -102, -98, -74, -1, -55, 34, 62, 109, 108, 45, -41, -15, 21, 7, -92, 51, 57, -15, -60, -45, 15, 33, 126, 43, -105, 75, -119, 45, -33, 51, -123, 13, -75, -20, 54, 48, -53, -28, -109, 58, -63, -108, -110, -9, -113, -94, 60, -99, 28, 106, 65, 123, 92, 96, -29, -61, -121, 67, -15, 2, -92, -102, -40, 10, -115, 45, -119, -110, -41, 101, 23, -20, 50, -108, 100, -121, -65, 75, 16, 1, -113, -15, 95, 54, -56, 4, 90, -68, 80, 25, -97, 122, -53, -36, -44, -44, 70, 109, 46, 93, 16, 85, 81, 119, -24};
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
    msg.setTimeStamp(0.3696416382472043);
    msg.setSource(8176U);
    msg.setSourceEntity(161U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.3145932369024653;
    msg.base_lon = 0.2352815871108329;
    msg.base_time = 0.08887802635907083;
    const signed char tmp_msg_0[] = {-43, 68, -35, 86, 110, -125, 61, 8, -105, 110, -95, -18, 82, -106, 102, 66, 33, 37, 65, 102, 50, -121, 39, -89, -64, -42, 116, 74, -111, 62, -32, -101, -74, -117, 77, -34, 35, 34, -9, 113, 30, 32, -86, 57, -38, -14, 77, 57, -116, -13, 0, -116, -106, 61, -109, 21, -30, 76, 20, -65, -42, -64, 19, -16, -110, -2, -89, 20, 95, 126, -72, 110, -47, 6, -87, -96, -87, 100, -26, -86, -27};
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
    msg.setTimeStamp(0.7645882038450537);
    msg.setSource(59759U);
    msg.setSourceEntity(146U);
    msg.setDestination(64909U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.523631669097556;
    msg.base_lon = 0.625491033613389;
    msg.base_time = 0.5434037293180798;
    const signed char tmp_msg_0[] = {19, -28, -71, -119, -14, -79, -18, 29, -127, 115, 86, 4, 108, -112, -62, 48, 65, -105, 78, 63, 124, 12, 88, 23, 82, 24, 57, 66, -108, -19, -73, 88, 77, 4, -63, 105, -58, 56, 49, -4, -29, -29, 38, 121, -32, -4, -36, 56, -67, -69, -74, -122, 58, 31, -72, -126, 18, -36, -26, -30, 121, -52, 121, 64, 110, 43, -92, 62, -85, -96, -82, 35, -17, -119, -13, 23, -111, 123, 21, -115, -99, -82, -126, -75, -123, 88, -91, -6, 27, 112, -24, 126, -125, -104, -3, 17, -113, -49, -61, 47, -101, 33, 66, -108, 103, -61, -106, -114, 28, 40, 75, -65, 10, 103, -15, -73, -71, -23, -47, 101, 47, -36, 0, -86, 21, 40, -30, 98, 4, -125, 80, 27, -92, 126, -53, -57, 123, -40, -80, -109, -25, 58, -118, -109, 46, -107, 95, 116, 126, -32, 5, -110, 76, 28, -47, 118, 18, -63, 21, -111};
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
    msg.setTimeStamp(0.9217160288696161);
    msg.setSource(29348U);
    msg.setSourceEntity(31U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(183U);
    msg.sys_id = 42422U;
    msg.priority = -55;
    msg.x = -23069;
    msg.y = -23177;
    msg.z = 12944;
    msg.t = -3277;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 27648U;
    tmp_msg_0.destination = 8217U;
    tmp_msg_0.timeout = 0.12001502320622015;
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 215U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.865138930950255);
    msg.setSource(139U);
    msg.setSourceEntity(131U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(35U);
    msg.sys_id = 47122U;
    msg.priority = 9;
    msg.x = 12268;
    msg.y = -16074;
    msg.z = -110;
    msg.t = 23449;
    IMC::WaterFlow tmp_msg_0;
    tmp_msg_0.value = 0.3957567938448836;
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
    msg.setTimeStamp(0.3466900374801396);
    msg.setSource(41154U);
    msg.setSourceEntity(38U);
    msg.setDestination(3795U);
    msg.setDestinationEntity(142U);
    msg.sys_id = 5969U;
    msg.priority = -118;
    msg.x = -23868;
    msg.y = 18867;
    msg.z = 29499;
    msg.t = 1089;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 152U;
    tmp_msg_0.htime = 0.994400575529542;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 176U;
    tmp_tmp_msg_0_0.htime = 0.9504449793355608;
    tmp_tmp_msg_0_0.context.assign("TVBXPZDEFGHDJHDJURKTRBLNNFAKAOVPLWHLWRRWHMBLVWXGBAGOVNCFOTVVNRPZPRQUPJUELNCWXHIXDCTEFMUYTKJTTHHQWYYUPFAQDRXNCTOVSHLMSOFYWQYZHKSGBXNEUQEKXMRN");
    tmp_tmp_msg_0_0.text.assign("QOFCPZBKOLCIDGXTTZUVSSXNUGUCQBXNQOXCBYHNJKUNNDFCIXZMOIMZRHYCJALRYPWEUHEPFMREKHDDXMXARCZVVLJGNDOA");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3634089004932477);
    msg.setSource(12751U);
    msg.setSourceEntity(202U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(28U);
    msg.req_id = 28972U;
    msg.type = 21U;
    msg.max_size = 52075U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7787707607449704;
    tmp_msg_0.base_lon = 0.49845194462159836;
    tmp_msg_0.base_time = 0.7535641389508991;
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
    msg.setTimeStamp(0.8474602186492911);
    msg.setSource(54895U);
    msg.setSourceEntity(221U);
    msg.setDestination(59946U);
    msg.setDestinationEntity(44U);
    msg.req_id = 3319U;
    msg.type = 194U;
    msg.max_size = 2758U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.627164666263298;
    tmp_msg_0.base_lon = 0.9377800835278803;
    tmp_msg_0.base_time = 0.5106409215256442;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 13550U;
    tmp_tmp_msg_0_0.priority = 48;
    tmp_tmp_msg_0_0.x = -12932;
    tmp_tmp_msg_0_0.y = -12440;
    tmp_tmp_msg_0_0.z = 6695;
    tmp_tmp_msg_0_0.t = -26906;
    IMC::Temperature tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.86339550993188;
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
    msg.setTimeStamp(0.9462090383185069);
    msg.setSource(5869U);
    msg.setSourceEntity(221U);
    msg.setDestination(32932U);
    msg.setDestinationEntity(26U);
    msg.req_id = 49852U;
    msg.type = 80U;
    msg.max_size = 21051U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2775814376041069;
    tmp_msg_0.base_lon = 0.9017507863403498;
    tmp_msg_0.base_time = 0.3806084942002461;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 16695U;
    tmp_tmp_msg_0_0.destination = 52758U;
    tmp_tmp_msg_0_0.timeout = 0.002134263098915845;
    IMC::EmergencyControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 252U;
    IMC::PlanSpecification tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id.assign("MADMXAAZYKHQVLLNIDIBIHKJNJLBQDXPGIYWEDOETEOKHEEUAHIHXQDMYRHRDGLVGWYOJEMQWANVMSEKVZZFEKZXCOBRBYGCSPKICXTBCFN");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("NKIBNFMOZKJDMNLJXFZRFETDUPXDXQKBBBDYFTOXZJZHDGTEVOLVNQHDILZPIRDLURTNNVHMCZRQGXYOVJLMFCINRSPUSAMEJLUBJSYYKRIHSHCYKDWGNEMTZYPCKWCGQPVCSYJVZJTDUHWMIGXBGQTSVQJIFVOUEAAWEPHAEHVRIGCOMCUAOPGQXQYFABXKRWGQCOPBHYPZSELXHDEALROYLBIANJUNWUITQZAWXSCSWEFWUTGSLKPKMAMTFW");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vnamespace.assign("SBXZTJZLDHODQNRTJHKEVRRPSQPDMZXXBHLOVAGEAOIUEBQKPMWMMLIGLXBWEVGHYXWSTYAEDOEKWHCYMRECEURUAYFILATIQBYIYTGNCNKDUOWFIXFUQCJAZKZTPJIXTNQNSOVHCYXKBFVRPUGFXUJSEJZDOGMZQAVCYFPPEZRDJVOTPRYHKSNNIGHQAGBWCBXBCCJNSQU");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_man_id.assign("DVDLVMGSNXVCWLRMHYNQJQOTOKMBPUBWGXXVWGSSAEBYIWLFCLENGHXKYQOUVIZZJEDWHGROUZMYTDDUDFVPJZQAIPJMYZAVDUEHUSNAXAZHCQCNJFPGLOXBTRKCXPWOUESOWIBWAWAHNPPTAKJYTFZXSXYUDKDIEVOIZIVSFLINKTUQRFPKJA");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.maneuver_id.assign("VNNENQGSCAHIAUDSPEHYEVNMQQCEHPXKXKGQUVMECQVMFFPPSFFNGSJZWVYWOOZIMJRKLQTHEDJDHCDBSITLZJTOKLCTXQQFWBPWUDBJLASWJJQKZYPSPCRIZCIAYZISXEOUDFIVADYXAXWHNCHMKMZGXMIBGYDRONTSAOVFJSIWBXILHUEROFULLZ");
    IMC::CoverArea tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.lat = 0.7202900644534743;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.lon = 0.7252060575584205;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.z = 0.5364378401481582;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.z_units = 168U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.speed = 0.25569085226089094;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.speed_units = 245U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0.custom.assign("JXOWODRDSFLGXLQFRMQFQXYYZHMMHCFOUEGRPGWHVMIYXKRBKWMOPRZXMDUEETWCEAADGUWLQQTZJNBAYENYJVAITXGXESTSFXXDZVQQSPKIAQULIPMUPXIJEYGKYHANGPHVPBESLUVCLSOHHZCGHGBTDJJDARYKAC");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.data.set(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_0);
    IMC::StateReport tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.stime = 939026530U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.latitude = 0.5984362443429512;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.longitude = 0.6369090065421512;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.altitude = 23477U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.depth = 36255U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.heading = 7461U;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.speed = 6917;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.fuel = 58;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.exec_state = -58;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1.plan_checksum = 35339U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_1);
    IMC::Rpm tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_2;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_2.value = -32475;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0_2);
    tmp_tmp_tmp_tmp_msg_0_0_0_0.maneuvers.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.plan.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.3699378107119282);
    msg.setSource(16736U);
    msg.setSourceEntity(66U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(245U);
    msg.original_source = 38690U;
    msg.destination = 49676U;
    msg.timeout = 0.4953659028303088;
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.42876238876113293);
    msg.setSource(23011U);
    msg.setSourceEntity(176U);
    msg.setDestination(16325U);
    msg.setDestinationEntity(253U);
    msg.original_source = 20254U;
    msg.destination = 64467U;
    msg.timeout = 0.7630047791593396;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1002778006U;
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
    msg.setTimeStamp(0.9806979417427971);
    msg.setSource(47774U);
    msg.setSourceEntity(48U);
    msg.setDestination(56386U);
    msg.setDestinationEntity(133U);
    msg.original_source = 16292U;
    msg.destination = 33984U;
    msg.timeout = 0.6411808874102438;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 62447U;
    tmp_msg_0.type = 229U;
    tmp_msg_0.tow = 4113377817U;
    tmp_msg_0.base_lat = 0.7098725194048235;
    tmp_msg_0.base_lon = 0.6868568332363335;
    tmp_msg_0.base_height = 0.10280454754926671;
    tmp_msg_0.n = 0.9834823448289749;
    tmp_msg_0.e = 0.12733385928895102;
    tmp_msg_0.d = 0.11010469962847891;
    tmp_msg_0.v_n = 0.3920577749080937;
    tmp_msg_0.v_e = 0.6410547795541092;
    tmp_msg_0.v_d = 0.9892820312655934;
    tmp_msg_0.satellites = 116U;
    tmp_msg_0.iar_hyp = 15782U;
    tmp_msg_0.iar_ratio = 0.22684547234624253;
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
    msg.setTimeStamp(0.5064915219861624);
    msg.setSource(469U);
    msg.setSourceEntity(117U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(52U);
    msg.type = 196U;
    msg.comm_interface = 19593U;
    msg.model = 54316U;
    msg.list.assign("ZBXWJMAWMWPNVYPRZETSHCRBQCGBDPGREXEQARCYEUTLUHEJIZLFLFRRYNQSKIRTJPSNSIBOTVXQDAARVJZXDMQBLISJOXAZDYKNWXPWBKAWBSBCYBXMYOQQKNJNUCYTKGSHEPYANHGYSFWEPDIOKHZCZUSDY");

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
    msg.setTimeStamp(0.6920209903904017);
    msg.setSource(11341U);
    msg.setSourceEntity(174U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(192U);
    msg.type = 101U;
    msg.comm_interface = 36268U;
    msg.model = 62641U;
    msg.list.assign("NCRASFCSLJLXVBYXIBJNBTMELXQXJTNUQNZWXHQRTSVEROPXTFPQFFMEHOFZSGHHICZJUBRWSAJXZVOZOYKQHKRUWMNNHODMMRSCXBUEUHEDGHDNWKQAGOVYHEGUGQMFUIPIVJGQYDKTLADMNVYXIYDDQCIAILYRTJOPBPKFUNZBTYBPYACTZWFAPGGZALWIGKVJIYPNTZULFQWFAVCSCELMRWCZLOVAWKJS");

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
    msg.setTimeStamp(0.8294239483080557);
    msg.setSource(7122U);
    msg.setSourceEntity(151U);
    msg.setDestination(52134U);
    msg.setDestinationEntity(186U);
    msg.type = 129U;
    msg.comm_interface = 24950U;
    msg.model = 27523U;
    msg.list.assign("VAKJQCTQOFRDQDFGXQWHRKFTPQJJSPGHTOBDTVNYOLGQZXROHZSHITICMEKSLMLDLOLNAYXGEBFGFNXVMMPHPDSZVHFXZCGRTSLCEYSDHIKULOIDPFIRTBMNFPJFBCWIVLCUPJKMXSUYCVKQEEYYZNZRQLGUBAACRBDWXEAAIAKJPIJTSRYVFHEVAWBUHKMOJZNNUWHTSZZKQTBUBVQIWOEBENMGWNRIAJCWRXMNS");

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
    msg.setTimeStamp(0.06727708326348181);
    msg.setSource(57294U);
    msg.setSourceEntity(218U);
    msg.setDestination(51908U);
    msg.setDestinationEntity(50U);
    msg.type = 17U;
    msg.req_id = 2799138671U;
    msg.ttl = 30093U;
    msg.code = 134U;
    msg.destination.assign("CHOULDEAPT");
    msg.source.assign("KUYPUSQNREZISRHCJECGGRUCPMQSYOGFQAAAUPKAYINYGCJHWIAIRXOCHTOTCLYDFQRKVBIBDNFPMQIMTEIOZPJTUSJZOTJWIKVEOZMNATGXMQRKVMHKFEJQWHKPVLDC");
    msg.acknowledge = 68U;
    msg.status = 60U;
    const signed char tmp_msg_0[] = {10, 52, 47, -124, 99, 17, 118, -125, 120, -96, 56, 91, 101, -84, 93, -41, 84, -64, -109, 74, 113, -64, 31, -108, 87, -21, -94, -66, -119, 95, 24, 28, -126, -111, 59, 76, 66, -52, -101, 66, 89, 20, -47, -124, -76, -47, -112, -26, 88, -126, -113, -76, -62, -88, 16, 122, -92, 10, 33, 119, -5, -72, 110, 21, 67, -19, -85, -62, -5, -128, 79, -63, -78, 125, -15, 18, 28, 2, -26, -92, -80, 108, 84, -3, 8, 42, 75, -77, 74, -38, 72, -59, 78, -86, -123, -2, 1, 109, -24, 18, 96, -115, -86, -128, -114, 13, 101, 6, 14, 26, 41, 4, 42, 48, 82, -6, 30, -39, -112, -57, 87, -77, 11, -5, 20, -48, 103, 23, 3, -24, 97, 33, -93, -106, 4, 3, -55, 18, -23, -80, -107, -34, -123, -27, 61, -58, 32, -73, 116, 71, 30, -40, 19, 77, -57, -101, 109, -55, -47, 90};
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
    msg.setTimeStamp(0.35035277042082635);
    msg.setSource(29218U);
    msg.setSourceEntity(178U);
    msg.setDestination(413U);
    msg.setDestinationEntity(161U);
    msg.type = 220U;
    msg.req_id = 3466511711U;
    msg.ttl = 3423U;
    msg.code = 4U;
    msg.destination.assign("BNRILYYMNKXPCXFTUULDMFBRTSGEZCLVISTOEEUUORUVWMCIYLQZHOYSHCOFBTBHAOOMIFWWAEZLJAJJMBKOHFXGXJNRTNQCDNMYHMXWTVCAVJRSNKIORRVNBPAYKFKTWEIDAZCQKXDITERLWQHLWBAQGLYPONERHHMQIZPVJ");
    msg.source.assign("EWYHSFQKKNGWCOOXMHXFQWEHHRALTMVAFJFCRTTHOIODMQPGUBBNVZRJNCPISWHZYOGOQPZDVZAUNQXESZNJYYIHVINMMIPBKCSLWBBTEIZGALKEAVTBAVXIKRSULJXJETPJGSQGBVNRPY");
    msg.acknowledge = 159U;
    msg.status = 161U;
    const signed char tmp_msg_0[] = {-119, 49, -31, 33, 38, 38, -15, -61, -44, 101, 12, -11, 72, 67, 44, 61, -126, -121, 109, 56, -12, 119, -56, -99, 106, -11, -125, 64, -83, -29, -86, -27, 87, 36, -62, 63, 54, 6, 21, -108, -22, -121, 12, -107, 2, -14, -93, 38, -10, 33, 69, -46, 0, 19, 33, -105, -3, -60, 101, -72, -104, 8, 23, 115, 23, -79, 25, 27, 5, 1, -63, -112, 55, -13, 108, -7, 81, 126, 78, -100, -8, -53, -83, 53, 48, -94, -99, -93, 65, 96, 63, 6, 114, -76, 93, 126, 85, -18, 54, 69, -21, -78, -80, -122, 17, 74, -10, 3, 60, -36, 119, 93, 41, -87, 53, 72, 39, -78, -31, -89, -79, 92, 115, 19, 55, 77, -40, -94, -122, -106, -108, 83, -55, 11, -65, -109, 15, 75, 92, 102, 24, -94, -108, -72, 71, -21, -72, 11, 119, 100, -12, 57, -33, -122, 56, 84, -26, -116, -116, -63, -6, -44, 35, 63, 89, -44, 7, 17, 120, -32, 71, 59, 41, -69, -79, 94, -24, -25};
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
    msg.setTimeStamp(0.8840732591816203);
    msg.setSource(34137U);
    msg.setSourceEntity(238U);
    msg.setDestination(32939U);
    msg.setDestinationEntity(156U);
    msg.type = 36U;
    msg.req_id = 2473867285U;
    msg.ttl = 48639U;
    msg.code = 22U;
    msg.destination.assign("XXAKVMBPJBVNKNVVWHCTCXWYQDZTUBPJWAAXUVGJNWJRWZDIBPUZRPMYUAEKBXLOKIGIOEVDLOTSOCPFQUILAUEMCSHOSNUBEJQGTIRLZJFGDVUESIRQZIZSFGJMJFFRAGVQPTWVBAMMLCEWQRTLNQUHSIHXHEFHYYDOTMBFZXRYTYDCYATPYJKOMWFOHAJL");
    msg.source.assign("KDCKJMAVYOWVLSZULOZDXAQPMPCXBAIITIEPEUDGRWFNFGJMVAZKCXKYVFUGPANINUHLWARPWMHMQHZPCUEJKIMEZUVNGTZDYADHXBGNZAAWMHYJMBTOBDJLVIRLEIZCYTOZUQHKGPUFRTSTFYOOJNEOXOXGRKSBPPTZRERRENEXWKCSQXPFQVVIKHUFLIKSWADWWBLQNOLYOJCCBHRSRGQVUSYDDTWSNYLDBBIVS");
    msg.acknowledge = 110U;
    msg.status = 87U;
    const signed char tmp_msg_0[] = {-80, 8, 108, -46, -99, 99, 90, 78, 16, -126, 64, -46, -59, -19, 115, 111, 116, -48, 29, -2};
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
    msg.setTimeStamp(0.0311501676842032);
    msg.setSource(35340U);
    msg.setSourceEntity(60U);
    msg.setDestination(3572U);
    msg.setDestinationEntity(33U);
    msg.id = 97U;
    msg.range = 0.24142686962379412;

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
    msg.setTimeStamp(0.5915116559873473);
    msg.setSource(49403U);
    msg.setSourceEntity(74U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(106U);
    msg.id = 27U;
    msg.range = 0.8089517181881944;

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
    msg.setTimeStamp(0.95840914269165);
    msg.setSource(26299U);
    msg.setSourceEntity(49U);
    msg.setDestination(57645U);
    msg.setDestinationEntity(103U);
    msg.id = 88U;
    msg.range = 0.5518088869206113;

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
    msg.setTimeStamp(0.7032582445735148);
    msg.setSource(21941U);
    msg.setSourceEntity(114U);
    msg.setDestination(55797U);
    msg.setDestinationEntity(45U);
    msg.beacon.assign("UIERKGBLVYNKTEGFXDLDMERBEIFCJPSNOIPUWGKNIRAGXVVMJYSPVXOXHSGTOTWJLUAWGFDEATSZOFMCQLMBJMHXGDGWYFBLIXUKPZQTWJDYHZKSWETRNMDLFCTPPLFYJRWSHDZRAOLPMXYBHUIQNHOEZZDIADNHQGWUIGRWTJSUOVAHBSXKLBUQMNIBHCMOAYAVKVPJVASHBOMZQCPFSCFNRKYATIUQNJKZRVCKEDQXQFECQZRUT");
    msg.lat = 0.11816824865681186;
    msg.lon = 0.5418163931889671;
    msg.depth = 0.49681528816595666;
    msg.query_channel = 77U;
    msg.reply_channel = 128U;
    msg.transponder_delay = 209U;

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
    msg.setTimeStamp(0.9640616176666427);
    msg.setSource(42484U);
    msg.setSourceEntity(79U);
    msg.setDestination(13464U);
    msg.setDestinationEntity(79U);
    msg.beacon.assign("AQVZHKUGBFEKWRUQIIFGRFCRUNVXVALJCZOFCQGAIBMKHFOVOMPMSICKQIHJZXUEOXBXWHCJBYVSHZUZYQNEQGSWWGDXDLYJXOPPEDHZYDTJSAOLRMAHRLYQNUMGRWXAGFOTRHVGWJYERMYBXLOPPJNOCEBMPASZPKKDQKTOZNTEDWYRSSHJNFTCNWWZIIALKULFYUXSNMFSAWLRJDCNUTXQDBSTZLIKYVTCVDTJPFPQBLMBIKB");
    msg.lat = 0.6242786748671809;
    msg.lon = 0.01597045550928866;
    msg.depth = 0.2851363719820069;
    msg.query_channel = 189U;
    msg.reply_channel = 217U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.3966946710108118);
    msg.setSource(4761U);
    msg.setSourceEntity(161U);
    msg.setDestination(33895U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("JTTULOJRMQDVRSVNWOFGIFAYGPZ");
    msg.lat = 0.10838937695032613;
    msg.lon = 0.42798771606714314;
    msg.depth = 0.9611093576229537;
    msg.query_channel = 42U;
    msg.reply_channel = 35U;
    msg.transponder_delay = 2U;

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
    msg.setTimeStamp(0.6172316506451647);
    msg.setSource(719U);
    msg.setSourceEntity(154U);
    msg.setDestination(18651U);
    msg.setDestinationEntity(240U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.779270957545193);
    msg.setSource(32025U);
    msg.setSourceEntity(111U);
    msg.setDestination(18036U);
    msg.setDestinationEntity(149U);
    msg.op = 239U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RBYXIQPAYJCAZQHIKVUREDZIJQQTBKHXFSKQJJSITDODLHFGIFTSEGFUHKFJCGMNPBZMLJVSKDUVZBHTBGMVVCUOVRTQALRXRGENDABNAEMYNXNWWNWPMJDZFTTIRACCOPGQPGFOZYSAJD");
    tmp_msg_0.lat = 0.685299698019454;
    tmp_msg_0.lon = 0.22408516707133463;
    tmp_msg_0.depth = 0.9717753824686859;
    tmp_msg_0.query_channel = 35U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 19U;
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
    msg.setTimeStamp(0.5433909658502158);
    msg.setSource(5813U);
    msg.setSourceEntity(134U);
    msg.setDestination(10345U);
    msg.setDestinationEntity(166U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.8759037339799415);
    msg.setSource(4280U);
    msg.setSourceEntity(76U);
    msg.setDestination(33616U);
    msg.setDestinationEntity(237U);
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 29351U;
    tmp_msg_0.destination.assign("HUFXDLJYRODQUKVKACBXASLKZBRYJMUSNTKOIBJMXTIWTWAPQDGAUSEZLQHLZKAYYSLTFSXDGZFVQHVDCZMBPMWTNSLXLCGCDJXQNSVUCMIBOHWVQGSHNWPDWUIKTITPMZVCRMRKIEFAPRFQBAKIVCJYRSVMPUFDVYFRGGIYMQKXNFJCGCWENNIDJHNKLFTEHEBLJGEZCMBWODEUGXVWPEBGPZPQBPAHAXHAOSRTJYZHOOLNWFIUTE");
    tmp_msg_0.timeout = 0.09212124729458537;
    tmp_msg_0.sms_text.assign("DCNFVPYLZJYGMSDBTPT");
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
    msg.setTimeStamp(0.398583738659117);
    msg.setSource(25906U);
    msg.setSourceEntity(139U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(35U);
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.3739083306525396);
    msg.setSource(28315U);
    msg.setSourceEntity(228U);
    msg.setDestination(12245U);
    msg.setDestinationEntity(186U);
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.08157402425170857;
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
    msg.setTimeStamp(0.0071551476375146805);
    msg.setSource(23762U);
    msg.setSourceEntity(247U);
    msg.setDestination(26567U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6512094382916112;
    msg.lon = 0.8680692728058583;
    msg.depth = 0.21076387820765308;
    msg.sentence.assign("PFJXEMPHEBQZYAVOADCHJXGKYSHKTHVFVRIDDUSAJFFQLLKLBWINRHUKQZLAAHLWMLMWCBVWQUZYNWRSXRZTONMOJDCBPSSRXMXMTDLCIUVEZCPYRYTAEOYWYLASGWPNSPGSJBKZGPGWDUZMRIBODLPXGORESFWZYAEHCWTEVQXJNOHICYDQXBCTNLGUFBVINVGQRQBITRGNFDBTNOCZJHNIEPKQJUGJUSKTKUFXEDAAUHIK");
    msg.txtime = 0.8922547883257343;
    msg.modem_type.assign("WNXIVPOYQCXLUYHBMKMNYLISDRMAFINWBLDBJRXCEYMCUJJNHCNPRNZTUOVVNIDWEKZPFWRQXCVTZDUROSQJSHQFGFABVJOUIMALDEXQPOFTKYBIOUEXCVSJFWHMSLZPTOESKGACGXGAZBWHXGPEDABSEFCRMZIQTNKBAVHQYGCDJPVJNJXMQLVRAR");
    msg.sys_src.assign("ZFNSRMBVHIJZPAABRQTELSLMFRJFHEHYBXHTXPTIWZRWLERFIJWEPAODBWNVSGZJTNCSUCNDYVWQCEVMXJOLVTNYKNPEFIOBMFUGHOTNGSTBFZXVMRVKAAUKLDKBCFZGQXSYPYOPULMKYPPKEYMOQUCXQGPCIBQ");
    msg.seq = 13575U;
    msg.sys_dst.assign("LFMCISCBDENJAWGBHIKBNKJQJZCDVAPABGBFZOOYGKRZDLPHJPMNSMACANLIWUPVHOHDSAMYQUIUBUQZNFKXEFPNGLYUJMFKJFJBHLOSOVEOTTFRTIWNRMWABFWQYSEEJOMHNXXSIRVIMXOYKWWQHVUTYXTEUNDCULVNDVKTEAEGIGZWSVUJSZSDVBXHORXOPXQG");
    msg.flags = 17U;
    const signed char tmp_msg_0[] = {5, -64, -23, 111, -111, 87, 120, 110, 19, -120, -125, 80, 10, -34, -6, -90, 56, 99, 53, 106, -60, -120, -68, -47, -44, -52, 102, 81, -106, -18, -109, 99, 37, 40, 8, -112, 27, -19};
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
    msg.setTimeStamp(0.42805178185258297);
    msg.setSource(37987U);
    msg.setSourceEntity(6U);
    msg.setDestination(8845U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.6838211844901443;
    msg.lon = 0.7245138578700397;
    msg.depth = 0.7264236448547551;
    msg.sentence.assign("NEKDHRUGYACHCEELKDYJFCOYFHKWYMNGUAMVTXNDJKHCVULBSULICUFODBBQATISFFRWGYHDVUFRYWZTBKTOFVQPRNZOJZIGMXSZXNIMJIAOBBKTENNJBWEMJSVWQHPZCPESAXNLJFWJHTBIAONXFTLIMKCLWQQPRNRMXCBXFJZIBVOPTWQCQTKIGDAGOPQPCPWOMPYEUS");
    msg.txtime = 0.5297792405904596;
    msg.modem_type.assign("TQUMTXOQMYVLAWQTQQDZVHGUQPCKGWESFMDONZDCHOPFGEWOAWLJMNLYYOFALMAPTCHXURDVXWDKFXEJQBKFBFWHKHNKKXBOZEZNUIGJCNYHCI");
    msg.sys_src.assign("ISFDHKDCJXJOEYNZVTTSHDQVDYJOKUXURFOONAWMHTXHSBPOCRUJIXPVKELEOXWXENYAFOVSVPHYPGYBFGHEWZDLAACWWTLDWLCLVDXIONLFPXUGMESXW");
    msg.seq = 30823U;
    msg.sys_dst.assign("HLUGRCYRSHXYFDNCKUDTDKQVTMITGYAOVVZNAHPORJOCIREQVBUSUEEVGQJAEFKFPEUHVGKXDVBHMINSRKFIKBKIPYWYAEFYRSHA");
    msg.flags = 168U;
    const signed char tmp_msg_0[] = {-73, 57, -29, -60, -49, -92, 105, 73, 11, -93, -106, 43, 9, -87, 77, -38, -59, -31, -40, 21, -18, 85, -100, 81, -116, 70, -110, -54, -1, 70, 96, 25, 110, 101, -120, -54, 75, 67, 24, 16, 76, -5, 4, -14, -128, 3, 124, 62, -117, -31, 69, 99, 42, -8, 7, 108, 47, -24, 116, -121, -81, 41, -116, -123, -118, -84, -80, -50, 88, 96, 55, -35, 46, 82, 103, 95, 118, -3, 123, 24, -52, 38, -113, 59, 104, 85, -127, -38, -34, 36, -71, 60, -71, -16, 7, 51, 58, -127, -89, -102, -56, -83, 22, -66, 10, -25, 89, 4, 39, 80, 109, -20, 99, -33, 6, 17, 32, -31, 97, 109, 77, -48, 104, 84, -9, -36, 54, 54, -69, 108, 56, -14, -75, 115, -14, 18, 97, 64, 112, 104, 75, -81, -4, -87, -43, -76, 37, -29, -124, 74, 22, -51, 48, 39, -32, -53, 115, -109, -67, -88, -109, 61, -74, 111, 74, 20, 93, -65, -8, 96, -18, -44, 102, -44};
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
    msg.setTimeStamp(0.2949572246230585);
    msg.setSource(26304U);
    msg.setSourceEntity(137U);
    msg.setDestination(36822U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.038653489436695554;
    msg.lon = 0.45689930620720964;
    msg.depth = 0.9769217699739442;
    msg.sentence.assign("LEJSMPVPZNPJXOFMLZATURWBXIPCJLVMHZDKKPKLCXLPQYZKHTGUPZSOIFAIAKUMMHOJUNCKXNONWYUNESQWZIJNDUCTVGPAHYRVHESNXRGTNWGSQOHNMSCUEAREFJKYBJBWDIDMTHLVXON");
    msg.txtime = 0.7702711213230518;
    msg.modem_type.assign("TQSHOHEPDXVVKFWXAQECSPPPNJIKTGIXYTYWIFNLHSZLGVPJRXQVIPHBWMHSTJIXCTTRVWBLOWLKDNAZKOEYQASNFNCDJTZMMXELOWEJBULUKMQHRKUQAKDUXJTXROYVVUDGORECSMNGNOTPATGZELGCSCOKDYGBIBANOBYAFEIJ");
    msg.sys_src.assign("GBYOGVBJPDYHCRPPHYALIWQ");
    msg.seq = 39838U;
    msg.sys_dst.assign("MLMAHMXULSTNHAJBNGOXNJZMQXOTFRWNVSPXBMGYPPADASMYIHISEMWLASHYYKWXZLCGLBBMONJSTAGYWRVFKBRCTULVFYVXGACRLBFKOQQTEDFICQKSWZJXSJHDRPDPIVUXKIOJAZEFJECGSWABLKJRTKZEUWUYCZUTIWVUIHVHETKOPQPWOYFGEUVCMHURPIHRFKZXDDZOLFSHNCGGFBMIDNA");
    msg.flags = 75U;
    const signed char tmp_msg_0[] = {36, 53, -10, 64, -9, 57, -15, 119, -2, 72, -54, 33, 119, -71, -72, -42, 61, -34, -3, 7, -52, -104, 36, 54, -126, 31, -101, -75, 42, -81, -56, -102, 42, 61, 47, -126, -67, 122, 106, 33, -95, 22, -14, -58, -29, -61, 101, 61, -68, 93, 12, 64, -106, 7, 36, 122, -49, -128, 4, 67, 114, 79, 92, 1, -2, 35, -30, -52, -95, -89, -88, -41, -62, -127, 71, 118, -28, -91, 55, 34, -92, 16, 98, 111, 113, -74, -12, -91, 40, 6, -58, -45, 60};
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
    msg.setTimeStamp(0.773251293421035);
    msg.setSource(41324U);
    msg.setSourceEntity(142U);
    msg.setDestination(19784U);
    msg.setDestinationEntity(120U);
    msg.op = 162U;
    msg.system.assign("AQFDANKYFUYRLPBUCWLTZYPTIHCNEUZOBNMUKHVVWRHLQJJYGZICMJJPFPBCKZWMPMBJZIVAVYHECKNFGVKDKEVKDA");
    msg.range = 0.9201432855098256;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6832421794183349;
    tmp_msg_0.y = 0.4203656461169477;
    tmp_msg_0.z = 0.8850584798928257;
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
    msg.setTimeStamp(0.9451260559084254);
    msg.setSource(54476U);
    msg.setSourceEntity(51U);
    msg.setDestination(33294U);
    msg.setDestinationEntity(171U);
    msg.op = 193U;
    msg.system.assign("VNJCCCOMBBCUWKLRGYFNVRJJQHSGTHUGEWWCPAHXXDWTWEQTFUTLVMPFTHWVMUHBILUSZDIYYVBQPCDZOEIYNKJAVSMKDNGYNVKBQOLEZBLGYZOZQSDOXADIDTMDBIUXACJHRKEJSTGDOHQUAJULZKYRCTAXPLCJQ");
    msg.range = 0.6961699804509178;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 146U;
    tmp_msg_0.period = 259036151U;
    tmp_msg_0.duty_cycle = 2083911429U;
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
    msg.setTimeStamp(0.18809108471630254);
    msg.setSource(50786U);
    msg.setSourceEntity(241U);
    msg.setDestination(29813U);
    msg.setDestinationEntity(131U);
    msg.op = 19U;
    msg.system.assign("PWWOELAZRASQCOKKEFDMDXBYAKDFHHGFKSTMCQELSENXSLLTFDJITQOEGTDCVZYOQCUKMJOUDRAZDINIUONFCJLHMNZTBBENRAPMTUBFAXVCJFZPRHMKTLAIZIGJRURRELJIALDWVRPEVVISGURWRUQG");
    msg.range = 0.8577804819472487;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.39577162882685846;
    tmp_msg_0.lon = 0.4053371877458525;
    tmp_msg_0.z = 0.7911069129829043;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.radius = 0.6254818525566892;
    tmp_msg_0.duration = 3236U;
    tmp_msg_0.speed = 0.680979484987208;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.popup_period = 59916U;
    tmp_msg_0.popup_duration = 28320U;
    tmp_msg_0.flags = 254U;
    tmp_msg_0.custom.assign("MERGHZLMESWOQFYADFBHXZHXF");
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
    msg.setTimeStamp(0.8060760740869235);
    msg.setSource(8465U);
    msg.setSourceEntity(175U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.33158746155352226);
    msg.setSource(29930U);
    msg.setSourceEntity(171U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.08001941183049333);
    msg.setSource(41073U);
    msg.setSourceEntity(98U);
    msg.setDestination(11462U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.7294386325546321);
    msg.setSource(8558U);
    msg.setSourceEntity(121U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(201U);
    msg.list.assign("HBYLDGIBZOUMKSUHRHAACREBRSWQXHTHQLTUOERAPHWELYRALCKDJMFZREYMSGCSWACVDSDDURMHPMIWXTNIMCICKYLJKXMUALPBGJGPWZDKEVXQXYVFYZKGCXDKPJZUZTGJGBSDNMAZDLXPLMLTCRIOVBSOXOTHVPAEFVCVWNOODLHBVETQNONGFBSWWIJJFPFIFKXMTFASORZWCQUQR");

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
    msg.setTimeStamp(0.5989880739655187);
    msg.setSource(14971U);
    msg.setSourceEntity(209U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(51U);
    msg.list.assign("PTJKXOSVQRBVAVUTBEUTETGOWWUWWFPHNIUZICYITFZPGVCYDYFEYNKRQEJJJSJTGPNRXSSMFGOKBWGFDWDZHLOJJZCADLIQLHMGJOAYRNHXYXWVRTNLHGIZNFTOQSQMODKYORSWCR");

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
    msg.setTimeStamp(0.30407265220703816);
    msg.setSource(56950U);
    msg.setSourceEntity(73U);
    msg.setDestination(41432U);
    msg.setDestinationEntity(142U);
    msg.list.assign("LRLKHIDHFPYTMXRGGULNQFTAASOCVLRJCTBKXBJIPIRQLYPALOOPXIMUJFFUIFPBVELTCYDRDAISTZQAFONTCQLZWESSBPCGUZERZXHKGDZHGMMQLSZXBJXGZDBRSNTNIDNZSKXOJUHIBFWJGUDFSYVQWWVPGEBAVZQRUNNTEMMJMWKSWYKKMQRHDOKQXWEWKYNY");

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
    msg.setTimeStamp(0.026817108979812043);
    msg.setSource(50219U);
    msg.setSourceEntity(2U);
    msg.setDestination(41400U);
    msg.setDestinationEntity(236U);
    msg.peer.assign("WAVSBVWMCIJHMKIZPGHCZLSTVTQMHUQMXRZSLGDKSICYKFIXZDUZUWTQJAPHYDDKFRTNXZQWBNSUCZKFDMYGOTHAQSNPGVZBQOCFOPCEYLCVBHJRBHPTCRMWDAJAEPJDURFPIJYTRXEYJMQXLTEFYQKECGHMGECFYLIEGWWGYWVQAXMAEVJPNXOVLRMRHVUEAATINLKIKSXNNA");
    msg.rssi = 0.8162041731675718;
    msg.integrity = 47278U;

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
    msg.setTimeStamp(0.5060461351544785);
    msg.setSource(30104U);
    msg.setSourceEntity(247U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(90U);
    msg.peer.assign("LUKCHORCWIJ");
    msg.rssi = 0.300195791620839;
    msg.integrity = 22173U;

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
    msg.setTimeStamp(0.744130909355626);
    msg.setSource(3721U);
    msg.setSourceEntity(187U);
    msg.setDestination(6685U);
    msg.setDestinationEntity(15U);
    msg.peer.assign("SPJJUBDOPBXSZGYEUNFAIVOZIWJFANITFHIUGYVGXVAKIRPQFDSSZHQWERNWIERVZJECAOOLLVQXNHGBKQXZPKNDVDKCGAYLYPPMYJNSMBMWRMKEDMNIXHR");
    msg.rssi = 0.5406453184765884;
    msg.integrity = 1723U;

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
    msg.setTimeStamp(0.9947453235481604);
    msg.setSource(45263U);
    msg.setSourceEntity(113U);
    msg.setDestination(38347U);
    msg.setDestinationEntity(135U);
    msg.req_id = 14985U;
    msg.destination.assign("LUNVQBSGGCPHFIITBLMICMTPRYBBIEDJFKLSARXYOAWFOCEKFTNHFHCOYPATWIWIENQGXOKMIWCJLSDMNJXSVQAUDSXSXEJKI");
    msg.timeout = 0.9462941930227076;
    msg.range = 0.49833349492421275;
    msg.type = 250U;
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BDSZVSLRMAZVFHMEMLMSITTMRYIEYHCYVNQBJNQMLJCLHVBQEVMUBBKKWHYKSHQUOTVQKWZXAGHGOFIWAPUIOGDVRZBHGZZLNUSSFTNWDSWCLCJYGOLNJOOPDGSPQDZCAPPYOUFGUADQUWUWDJIESJMNTNNBAYLPRCRGZQUXPKKDVTFKTXIKXRIFLFFQNNOABHAGICCRAJEXCULATWKPOEVEHYREXMDEXODTMHISVCY");
    tmp_msg_0.type = 243U;
    tmp_msg_0.default_value.assign("KLOUHGVYCWRQGRCHDUHFWOYHQNTFCTOEEAPXBCNGNOVYUAEDIVKZAFVZEEPLYBBQVCUAIBXLQSFKVZKVQPYTOGJZFTXSRUOKUOCRQGTABJJMMOZEEVWNULPPXSMJHAWSHGYIXZIDSBJDKHNGSMYWFKDEIYSRSQCUIGOKCMINDWQNRXPBBDSBASHWQGZPWLL");
    tmp_msg_0.units.assign("ZVBODUPSHBKJNLSAYNAICFTBQABFPFAYDHXAZEZIDGPZINSVOWNDPHXTHUQTVJUNUEJEECGMWLUFUECBTLPHWEXTJIXDJZHKYCXGQHJPHGLBC");
    tmp_msg_0.description.assign("DOFQCHYNHTDQJMSEYRJQNUVOQSQYRPEVWCIIVNYYCXZPPNMZOISJXITFNGLSZNSETWLEQHWXPRELRXXZAUXJYEBSHWUOSCWOXRATPLLVBQKWIPALCBBEGIHCQJTARMFVSUCOKKDZGHSMDZXIMUYBKGSGUQOCONLKIVYJPWYAQVMKNCLZIEKGFLMVZFTJWBLHHDGKHHDZGJZDVBAAOPFAWGKUFETGDCOJMXFARPJUFMBR");
    tmp_msg_0.values_list.assign("FEUWRGRWGRTWMZPLHDUGAPRZXXESWPICHNCXLB");
    tmp_msg_0.min_value = 0.05615312142829565;
    tmp_msg_0.max_value = 0.7454317972528448;
    tmp_msg_0.list_min_size = 94U;
    tmp_msg_0.list_max_size = 63U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("CSJYFNNFXNJNTLLINPFDJIMSYUHWBGCBUNDIMHOOREWJKGRAMUIFVQHSBPWVZBVLDPQAQMDUOIGCTAMOKRZTZOYXXMLTHFXJQZCQBLAQPXUKEUDXHXECADEXPLUZYBVZLKDAGWIIKHUJGYWOVZUKXNBHHIMFTFYKVREALPCDRRWRQCARS");
    tmp_tmp_msg_0_0.value.assign("MWZIPNVURWRYLWBEYXHOMEILMKRALXEVVRAJUUNZXQABBUMPXRWGFSDMUPJDPNJAXPJHFWANMHEWXUIELJQFGRVYICSGNYIRKJKRVIZXSHFCICOQZEDPMKHGWOEUKVZLKBISSQYCGDOVXNVSHKBCFJNFQONCYBOTZPXQCFCXFYZLNCVGHYTKHALFBJYHAZ");
    tmp_tmp_msg_0_0.values_list.assign("CLNUJPLPDWATBGYONJUOBQBOSMKICXLMMMYBDIPMSGOKVNSKYLROEVOXHICONCAPDUHPOVSVKYNIAJGRGFYUKJHZGCGWTDTITAFURMQMUJZBAKFJZBIEZSVMBNFMYHBFDQXATKQCLINIWYJKOKQNZCHUEBHSVXZDZMVANTHDWF");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 12U;
    tmp_msg_0.scope = 152U;
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
    msg.setTimeStamp(0.46319865042988495);
    msg.setSource(22903U);
    msg.setSourceEntity(172U);
    msg.setDestination(23664U);
    msg.setDestinationEntity(199U);
    msg.req_id = 51384U;
    msg.destination.assign("BONDWZQCPEJDKUFFBDHQROSNKKJGGNHRLMJOIJXUASVWYOXDZYEXKOQVFFKSGESCPVUORCXIHWBMLTNIRTWDJAUCDVWSNDEJGTFYHBHEIZWXEGRZJSBTNAAOYCIWMYTZXMRAUIYPRPTIZGPMKPGVEVGLTTALGMLVGHVNUACQSCQCEIMQVFZYTWVFRFLDUNLYFELHDMDZNSRUBPIOXAKUTHEACNQSKCSZKLJHYHWAJWKBOUOBJRMXQFIMXQQXZ");
    msg.timeout = 0.700294387052252;
    msg.range = 0.9708667458775355;
    msg.type = 110U;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 3U;
    tmp_msg_0.reason = 28U;
    tmp_msg_0.value = 0.8340925363104853;
    tmp_msg_0.timestep = 0.9782527110492694;
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
    msg.setTimeStamp(0.7287447235272165);
    msg.setSource(62167U);
    msg.setSourceEntity(63U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(10U);
    msg.req_id = 45218U;
    msg.destination.assign("FKPGHKSUWKLSAWRARHNBJZYORJPXGEWIBA");
    msg.timeout = 0.73035535481087;
    msg.range = 0.5481405426995113;
    msg.type = 128U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SENMUGCQGXTEULIFNKVTGMQVEAFONUPHWFASCFXBOLIBDMYRDWPPKIICAMMVMRVWZCXQZPDJUAHSLHTURBKCYMSLZXBLTNNGWKJPOGZOXRSUHDYAYGLSFYEFJZJGKBOMSOEBUDZAWEHMPO");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 108U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 107U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5468141431151144;
    tmp_tmp_msg_0_0.lon = 0.425785026476864;
    tmp_tmp_msg_0_0.alt = 0.907820581789134;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8548041603163872);
    msg.setSource(38217U);
    msg.setSourceEntity(21U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(33U);
    msg.req_id = 48114U;
    msg.type = 33U;
    msg.status = 43U;
    msg.info.assign("KQGIDUHEZOXPNJMRPDXHUBRYIBFYMFLVIMICTRSJVXLCVYBNLDENBIBSGCELFFVAFHGYJKNEXHXWDUUKARGMCOYBCWPJWLKBZOAJJTKQKNWDQAVLQQOSZSFTAKSFUSXTQZIMZRJRWJTFBCTGHHPSDMTPXXVAOQULW");
    msg.range = 0.6958471956676437;

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
    msg.setTimeStamp(0.16231354395044595);
    msg.setSource(26734U);
    msg.setSourceEntity(180U);
    msg.setDestination(21130U);
    msg.setDestinationEntity(200U);
    msg.req_id = 37415U;
    msg.type = 189U;
    msg.status = 96U;
    msg.info.assign("CHVEUINOPWYWYOGIGDZPAKSMQFNBKBOMMHDFXTMSEVCQSPICAWMAQTNYFRQXHRKZQBHUVBMYVWUSDXEGTVHRDNTGXAIFYYKUCXISIMFRNWGYFXFJJDCRLSXBEHUVJKWAWKPJAGLAIBPIAHQTCSZZLFARBPYXKKLDKUOIOEHOJPTR");
    msg.range = 0.16401899188662505;

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
    msg.setTimeStamp(0.09652292028317189);
    msg.setSource(55398U);
    msg.setSourceEntity(115U);
    msg.setDestination(63465U);
    msg.setDestinationEntity(8U);
    msg.req_id = 65483U;
    msg.type = 252U;
    msg.status = 27U;
    msg.info.assign("AAIGLCZPFJWLJUMEURTTFLTKUTOBKKHGWEQMBBKRSHDQAZXKXZGIWJAHTHOFZGAOJCWUDTZPYCOWNECWGMMBMNZNVDUN");
    msg.range = 0.10231188970062943;

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
    msg.setTimeStamp(0.6173414242158755);
    msg.setSource(44575U);
    msg.setSourceEntity(93U);
    msg.setDestination(59282U);
    msg.setDestinationEntity(150U);
    msg.system.assign("EFSVGEGRDHXIGIAPHWJAIKOBFTICPFGMCBQRVYLRXIDSQLIZMZPFMOHJTWCYEQZYPQOECWSKOWJOTOVWNEVPFXWPAMTKOZVKCNXFVASLYHKUHTSADL");
    msg.op = 28U;

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
    msg.setTimeStamp(0.156537144354978);
    msg.setSource(38658U);
    msg.setSourceEntity(41U);
    msg.setDestination(59036U);
    msg.setDestinationEntity(129U);
    msg.system.assign("VFLMQYOSDQELCXOBRJPWVAPLXSCNZPSSMYSDKTFAYKHLVTPQQCMRGCWJDIW");
    msg.op = 79U;

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
    msg.setTimeStamp(0.5082938991372912);
    msg.setSource(59480U);
    msg.setSourceEntity(168U);
    msg.setDestination(10047U);
    msg.setDestinationEntity(204U);
    msg.system.assign("RFQMJISZBNYFIEHPJSZTGBKCPDYDQJEJCWXUARYLMCGCSRFARKVZTNEJEMVTVFLVHEYGVZRAUOCXXXDZUDSCNBSBDKSQJYDUUZTNVEGOEDPMUWBO");
    msg.op = 157U;

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
    msg.setTimeStamp(0.14353745983618538);
    msg.setSource(19253U);
    msg.setSourceEntity(193U);
    msg.setDestination(55864U);
    msg.setDestinationEntity(123U);
    msg.value = -12247;

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
    msg.setTimeStamp(0.8966048319412373);
    msg.setSource(54163U);
    msg.setSourceEntity(6U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(196U);
    msg.value = 22261;

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
    msg.setTimeStamp(0.033841334940794776);
    msg.setSource(63520U);
    msg.setSourceEntity(241U);
    msg.setDestination(63393U);
    msg.setDestinationEntity(245U);
    msg.value = -5370;

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
    msg.setTimeStamp(0.763480982067736);
    msg.setSource(15162U);
    msg.setSourceEntity(97U);
    msg.setDestination(19415U);
    msg.setDestinationEntity(93U);
    msg.value = 0.4361677066628018;

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
    msg.setTimeStamp(0.3113521312119869);
    msg.setSource(46113U);
    msg.setSourceEntity(61U);
    msg.setDestination(45088U);
    msg.setDestinationEntity(152U);
    msg.value = 0.13483947902018745;

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
    msg.setTimeStamp(0.0248483808329667);
    msg.setSource(40106U);
    msg.setSourceEntity(234U);
    msg.setDestination(6494U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5677006519434101;

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
    msg.setTimeStamp(0.3155592771464393);
    msg.setSource(6424U);
    msg.setSourceEntity(221U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(204U);
    msg.value = 0.2838886268984039;

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
    msg.setTimeStamp(0.26655014662218024);
    msg.setSource(29212U);
    msg.setSourceEntity(213U);
    msg.setDestination(21917U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9467947885366347;

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
    msg.setTimeStamp(0.6499307683141613);
    msg.setSource(21072U);
    msg.setSourceEntity(220U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5958472791203473;

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
    msg.setTimeStamp(0.3512023443857578);
    msg.setSource(13016U);
    msg.setSourceEntity(69U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(29U);
    msg.validity = 26536U;
    msg.type = 96U;
    msg.utc_year = 6372U;
    msg.utc_month = 119U;
    msg.utc_day = 41U;
    msg.utc_time = 0.9488373435537328;
    msg.lat = 0.9978957318600364;
    msg.lon = 0.03401459996977174;
    msg.height = 0.7014803127339204;
    msg.satellites = 35U;
    msg.cog = 0.7197727729755103;
    msg.sog = 0.9500452322969652;
    msg.hdop = 0.28005433290847026;
    msg.vdop = 0.7116874151698611;
    msg.hacc = 0.670537852121545;
    msg.vacc = 0.9312572961638047;

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
    msg.setTimeStamp(0.4352269589484752);
    msg.setSource(8713U);
    msg.setSourceEntity(70U);
    msg.setDestination(44352U);
    msg.setDestinationEntity(205U);
    msg.validity = 3477U;
    msg.type = 216U;
    msg.utc_year = 49234U;
    msg.utc_month = 7U;
    msg.utc_day = 168U;
    msg.utc_time = 0.9280018461637901;
    msg.lat = 0.19730006885332552;
    msg.lon = 0.6640134726348165;
    msg.height = 0.5864166599196089;
    msg.satellites = 165U;
    msg.cog = 0.6540536165169739;
    msg.sog = 0.4739496316655357;
    msg.hdop = 0.42912643905230297;
    msg.vdop = 0.05573967009107628;
    msg.hacc = 0.7460948275961395;
    msg.vacc = 0.1641709802699841;

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
    msg.setTimeStamp(0.9811497611563111);
    msg.setSource(43345U);
    msg.setSourceEntity(46U);
    msg.setDestination(48910U);
    msg.setDestinationEntity(241U);
    msg.validity = 39168U;
    msg.type = 204U;
    msg.utc_year = 44255U;
    msg.utc_month = 7U;
    msg.utc_day = 163U;
    msg.utc_time = 0.9038485172647298;
    msg.lat = 0.6332433849848949;
    msg.lon = 0.42146578957607006;
    msg.height = 0.4455651278505809;
    msg.satellites = 202U;
    msg.cog = 0.480231154170191;
    msg.sog = 0.651585138746221;
    msg.hdop = 0.1475083961289998;
    msg.vdop = 0.7172880001027263;
    msg.hacc = 0.8933841372261915;
    msg.vacc = 0.9778738825541728;

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
    msg.setTimeStamp(0.20185659494928987);
    msg.setSource(55162U);
    msg.setSourceEntity(89U);
    msg.setDestination(8985U);
    msg.setDestinationEntity(46U);
    msg.time = 0.2129736610349603;
    msg.phi = 0.7045390968177316;
    msg.theta = 0.3080888120528149;
    msg.psi = 0.18759331304618654;
    msg.psi_magnetic = 0.18318792961780095;

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
    msg.setTimeStamp(0.4658106250667332);
    msg.setSource(35342U);
    msg.setSourceEntity(207U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(145U);
    msg.time = 0.07676990630797775;
    msg.phi = 0.16558741594479132;
    msg.theta = 0.19502517737587444;
    msg.psi = 0.7856444750811894;
    msg.psi_magnetic = 0.1999375309055016;

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
    msg.setTimeStamp(0.043603018166256);
    msg.setSource(17402U);
    msg.setSourceEntity(228U);
    msg.setDestination(23698U);
    msg.setDestinationEntity(230U);
    msg.time = 0.10257003681439869;
    msg.phi = 0.20524576202081135;
    msg.theta = 0.6045391786334627;
    msg.psi = 0.595564188008726;
    msg.psi_magnetic = 0.9616471562027198;

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
    msg.setTimeStamp(0.4828641428325924);
    msg.setSource(48585U);
    msg.setSourceEntity(102U);
    msg.setDestination(33074U);
    msg.setDestinationEntity(43U);
    msg.time = 0.3358275179574576;
    msg.x = 0.19077770803134886;
    msg.y = 0.47912014194197416;
    msg.z = 0.12658629153607315;
    msg.timestep = 0.4963887574692709;

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
    msg.setTimeStamp(0.10886837288075202);
    msg.setSource(2347U);
    msg.setSourceEntity(249U);
    msg.setDestination(21328U);
    msg.setDestinationEntity(147U);
    msg.time = 0.6261052361091891;
    msg.x = 0.47263846779531116;
    msg.y = 0.4490399662881762;
    msg.z = 0.9801169102235029;
    msg.timestep = 0.8703078106982179;

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
    msg.setTimeStamp(0.8219481642730866);
    msg.setSource(40216U);
    msg.setSourceEntity(127U);
    msg.setDestination(65052U);
    msg.setDestinationEntity(254U);
    msg.time = 0.9148424191555381;
    msg.x = 0.31934097437378073;
    msg.y = 0.12465281928275462;
    msg.z = 0.49173323491779797;
    msg.timestep = 0.6763628730361464;

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
    msg.setTimeStamp(0.6326704408695992);
    msg.setSource(29571U);
    msg.setSourceEntity(93U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(52U);
    msg.time = 0.5227851620638555;
    msg.x = 0.9013973276514164;
    msg.y = 0.9242803102619834;
    msg.z = 0.45904166313528094;

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
    msg.setTimeStamp(0.33064633137820376);
    msg.setSource(23516U);
    msg.setSourceEntity(148U);
    msg.setDestination(20096U);
    msg.setDestinationEntity(145U);
    msg.time = 0.0648568421729031;
    msg.x = 0.9395320738358225;
    msg.y = 0.1896907891915388;
    msg.z = 0.03707381488749406;

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
    msg.setTimeStamp(0.32881516918466547);
    msg.setSource(64575U);
    msg.setSourceEntity(160U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(206U);
    msg.time = 0.6476176246845279;
    msg.x = 0.765584068019719;
    msg.y = 0.016913118152887652;
    msg.z = 0.5979916823137514;

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
    msg.setTimeStamp(0.09836604645735059);
    msg.setSource(33142U);
    msg.setSourceEntity(46U);
    msg.setDestination(64560U);
    msg.setDestinationEntity(237U);
    msg.time = 0.35866138997529473;
    msg.x = 0.36251183910597895;
    msg.y = 0.03477471546523747;
    msg.z = 0.7742076267138517;

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
    msg.setTimeStamp(0.6870828578734584);
    msg.setSource(9241U);
    msg.setSourceEntity(234U);
    msg.setDestination(57107U);
    msg.setDestinationEntity(161U);
    msg.time = 0.11544465688320871;
    msg.x = 0.7596661815809286;
    msg.y = 0.07788500381804009;
    msg.z = 0.624913629179165;

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
    msg.setTimeStamp(0.9325460487347764);
    msg.setSource(46929U);
    msg.setSourceEntity(158U);
    msg.setDestination(57781U);
    msg.setDestinationEntity(182U);
    msg.time = 0.1882723922000883;
    msg.x = 0.8888479087129485;
    msg.y = 0.72722436247617;
    msg.z = 0.07888054047357085;

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
    msg.setTimeStamp(0.5495772639696901);
    msg.setSource(31609U);
    msg.setSourceEntity(248U);
    msg.setDestination(21140U);
    msg.setDestinationEntity(220U);
    msg.time = 0.18308801332502656;
    msg.x = 0.554187895381215;
    msg.y = 0.9717196766637997;
    msg.z = 0.46717405607228246;

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
    msg.setTimeStamp(0.8210917708792171);
    msg.setSource(43672U);
    msg.setSourceEntity(126U);
    msg.setDestination(2342U);
    msg.setDestinationEntity(4U);
    msg.time = 0.5110279012944092;
    msg.x = 0.9010297082032097;
    msg.y = 0.089757999585237;
    msg.z = 0.8973651154486921;

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
    msg.setTimeStamp(0.020379373826670433);
    msg.setSource(24033U);
    msg.setSourceEntity(181U);
    msg.setDestination(7701U);
    msg.setDestinationEntity(248U);
    msg.time = 0.7475206450280233;
    msg.x = 0.2987682084224257;
    msg.y = 0.5916872022021072;
    msg.z = 0.44305966172303224;

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
    msg.setTimeStamp(0.9139468115275627);
    msg.setSource(20433U);
    msg.setSourceEntity(76U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(142U);
    msg.validity = 76U;
    msg.x = 0.028909584887747086;
    msg.y = 0.8907213941246793;
    msg.z = 0.9724844069623434;

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
    msg.setTimeStamp(0.5105727263210343);
    msg.setSource(32873U);
    msg.setSourceEntity(89U);
    msg.setDestination(45744U);
    msg.setDestinationEntity(210U);
    msg.validity = 135U;
    msg.x = 0.13439294060629925;
    msg.y = 0.16257018297549108;
    msg.z = 0.20032260629572285;

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
    msg.setTimeStamp(0.8070732676664372);
    msg.setSource(62403U);
    msg.setSourceEntity(154U);
    msg.setDestination(32113U);
    msg.setDestinationEntity(177U);
    msg.validity = 62U;
    msg.x = 0.8417663613477715;
    msg.y = 0.550868310658449;
    msg.z = 0.320979761101845;

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
    msg.setTimeStamp(0.7814024262376106);
    msg.setSource(33620U);
    msg.setSourceEntity(92U);
    msg.setDestination(49244U);
    msg.setDestinationEntity(20U);
    msg.validity = 74U;
    msg.x = 0.0088065727741663;
    msg.y = 0.7822863134514616;
    msg.z = 0.534296955617526;

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
    msg.setTimeStamp(0.9031665658315);
    msg.setSource(24675U);
    msg.setSourceEntity(166U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(22U);
    msg.validity = 172U;
    msg.x = 0.7171806999545233;
    msg.y = 0.015690762881633735;
    msg.z = 0.9922735178240016;

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
    msg.setTimeStamp(0.3790820033997966);
    msg.setSource(43574U);
    msg.setSourceEntity(91U);
    msg.setDestination(61554U);
    msg.setDestinationEntity(88U);
    msg.validity = 95U;
    msg.x = 0.5504610564253893;
    msg.y = 0.8544424940178524;
    msg.z = 0.6893936260692278;

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
    msg.setTimeStamp(0.6936317128475863);
    msg.setSource(41160U);
    msg.setSourceEntity(253U);
    msg.setDestination(55575U);
    msg.setDestinationEntity(58U);
    msg.time = 0.8163684859812126;
    msg.x = 0.7992939754320623;
    msg.y = 0.1379398668115559;
    msg.z = 0.37224020377418876;

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
    msg.setTimeStamp(0.9863634176900311);
    msg.setSource(23536U);
    msg.setSourceEntity(210U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(219U);
    msg.time = 0.3753226814968317;
    msg.x = 0.7461147224354839;
    msg.y = 0.7867783670025823;
    msg.z = 0.5428567063489904;

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
    msg.setTimeStamp(0.6828292463193191);
    msg.setSource(19466U);
    msg.setSourceEntity(151U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(72U);
    msg.time = 0.03797962597495197;
    msg.x = 0.2634771265647089;
    msg.y = 0.9684884110315957;
    msg.z = 0.4816293376007861;

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
    msg.setTimeStamp(0.6052075576147095);
    msg.setSource(63961U);
    msg.setSourceEntity(193U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(66U);
    msg.validity = 20U;
    msg.value = 0.7130820225852884;

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
    msg.setTimeStamp(0.914315599430168);
    msg.setSource(56515U);
    msg.setSourceEntity(211U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(197U);
    msg.validity = 213U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8172842399658267;
    tmp_msg_0.beam_height = 0.7958050553118481;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1380705648176106;

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
    msg.setTimeStamp(0.12711327738496325);
    msg.setSource(38946U);
    msg.setSourceEntity(145U);
    msg.setDestination(37555U);
    msg.setDestinationEntity(92U);
    msg.validity = 252U;
    msg.value = 0.3350219073038868;

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
    msg.setTimeStamp(0.027154878491372547);
    msg.setSource(24495U);
    msg.setSourceEntity(11U);
    msg.setDestination(3387U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6707159693755372;

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
    msg.setTimeStamp(0.4663533405788597);
    msg.setSource(57942U);
    msg.setSourceEntity(89U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(9U);
    msg.value = 0.14624934633672826;

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
    msg.setTimeStamp(0.3121303756222463);
    msg.setSource(14905U);
    msg.setSourceEntity(186U);
    msg.setDestination(3115U);
    msg.setDestinationEntity(140U);
    msg.value = 0.0642076052659315;

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
    msg.setTimeStamp(0.04439783993618596);
    msg.setSource(8996U);
    msg.setSourceEntity(210U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(85U);
    msg.value = 0.6245781176234745;

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
    msg.setTimeStamp(0.20156844839982302);
    msg.setSource(56385U);
    msg.setSourceEntity(78U);
    msg.setDestination(60107U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9739402175823704;

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
    msg.setTimeStamp(0.7925106519270259);
    msg.setSource(16451U);
    msg.setSourceEntity(228U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(116U);
    msg.value = 0.4168074944219903;

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
    msg.setTimeStamp(0.5171531248244015);
    msg.setSource(54087U);
    msg.setSourceEntity(112U);
    msg.setDestination(40369U);
    msg.setDestinationEntity(157U);
    msg.value = 0.347819571167706;

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
    msg.setTimeStamp(0.2213251571612571);
    msg.setSource(63926U);
    msg.setSourceEntity(125U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5706799921296184;

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
    msg.setTimeStamp(0.11219763530021121);
    msg.setSource(26014U);
    msg.setSourceEntity(186U);
    msg.setDestination(11082U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5324547509192459;

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
    msg.setTimeStamp(0.6943738917555793);
    msg.setSource(39980U);
    msg.setSourceEntity(72U);
    msg.setDestination(11433U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6888596825384317;

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
    msg.setTimeStamp(0.2985719142964085);
    msg.setSource(30632U);
    msg.setSourceEntity(251U);
    msg.setDestination(3248U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5956574630070801;

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
    msg.setTimeStamp(0.0864850589113293);
    msg.setSource(19252U);
    msg.setSourceEntity(210U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5780732534696937;

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
    msg.setTimeStamp(0.29295094830260116);
    msg.setSource(1357U);
    msg.setSourceEntity(25U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(87U);
    msg.value = 0.033224470532008166;

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
    msg.setTimeStamp(0.6646176427916168);
    msg.setSource(53956U);
    msg.setSourceEntity(17U);
    msg.setDestination(6301U);
    msg.setDestinationEntity(71U);
    msg.value = 0.31887188311512327;

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
    msg.setTimeStamp(0.07619856937019043);
    msg.setSource(19427U);
    msg.setSourceEntity(121U);
    msg.setDestination(57205U);
    msg.setDestinationEntity(162U);
    msg.value = 0.7258735049135723;

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
    msg.setTimeStamp(0.894760895828026);
    msg.setSource(37452U);
    msg.setSourceEntity(149U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9192825742785774;

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
    msg.setTimeStamp(0.3098562589119638);
    msg.setSource(41133U);
    msg.setSourceEntity(168U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(194U);
    msg.value = 0.06537582515842244;

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
    msg.setTimeStamp(0.66077787352323);
    msg.setSource(38548U);
    msg.setSourceEntity(73U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6563965136656248;

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
    msg.setTimeStamp(0.5282624417746873);
    msg.setSource(28850U);
    msg.setSourceEntity(15U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(183U);
    msg.value = 0.1339884517129084;

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
    msg.setTimeStamp(0.5218342293664218);
    msg.setSource(31886U);
    msg.setSourceEntity(75U);
    msg.setDestination(57515U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5558209883896391;

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
    msg.setTimeStamp(0.7868693555876224);
    msg.setSource(61820U);
    msg.setSourceEntity(99U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6336693099084212;

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
    msg.setTimeStamp(0.45045245831057346);
    msg.setSource(51631U);
    msg.setSourceEntity(168U);
    msg.setDestination(27397U);
    msg.setDestinationEntity(236U);
    msg.value = 0.43111939244233655;

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
    msg.setTimeStamp(0.8122537219840634);
    msg.setSource(30713U);
    msg.setSourceEntity(99U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(204U);
    msg.value = 0.1968945519199462;

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
    msg.setTimeStamp(0.5434517647747343);
    msg.setSource(22429U);
    msg.setSourceEntity(156U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(2U);
    msg.value = 0.18932214644309564;

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
    msg.setTimeStamp(0.8969277031535373);
    msg.setSource(26515U);
    msg.setSourceEntity(41U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.045420457929928326;
    msg.speed = 0.8115019134144124;
    msg.turbulence = 0.5288360223282396;

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
    msg.setTimeStamp(0.7615212499858384);
    msg.setSource(53847U);
    msg.setSourceEntity(197U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(79U);
    msg.direction = 0.9030196053990973;
    msg.speed = 0.08756844835332567;
    msg.turbulence = 0.7037927722592399;

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
    msg.setTimeStamp(0.8589397412698407);
    msg.setSource(49341U);
    msg.setSourceEntity(183U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(99U);
    msg.direction = 0.1554981440729175;
    msg.speed = 0.9545581770272454;
    msg.turbulence = 0.5985730543513951;

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
    msg.setTimeStamp(0.6142627209605315);
    msg.setSource(57270U);
    msg.setSourceEntity(97U);
    msg.setDestination(56815U);
    msg.setDestinationEntity(71U);
    msg.value = 0.842401857781364;

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
    msg.setTimeStamp(0.15891081440605326);
    msg.setSource(31803U);
    msg.setSourceEntity(47U);
    msg.setDestination(56559U);
    msg.setDestinationEntity(141U);
    msg.value = 0.804043997523592;

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
    msg.setTimeStamp(0.9530091715133842);
    msg.setSource(15855U);
    msg.setSourceEntity(35U);
    msg.setDestination(47424U);
    msg.setDestinationEntity(24U);
    msg.value = 0.9386732640589088;

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
    msg.setTimeStamp(0.7988380227689649);
    msg.setSource(38400U);
    msg.setSourceEntity(41U);
    msg.setDestination(2975U);
    msg.setDestinationEntity(87U);
    msg.value.assign("THVYQYTPWHGDKAIHKFLIPOJEATDOWARRZGCPNNXFGGUWXKVNCTVSEMNZQUIBAJSXOVTWLDRJJXEGFAEZIUXEBCWXSLKDUUUCDCYVLEVJ");

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
    msg.setTimeStamp(0.23389661189574784);
    msg.setSource(8017U);
    msg.setSourceEntity(247U);
    msg.setDestination(41084U);
    msg.setDestinationEntity(133U);
    msg.value.assign("GVMIDCVDMUAQBMDYMYGYXPVCOKOSNKZHFSJXJVKOMFQWPJZULPILRSUCQPDFLWSMCYEUBMFVFRTDNATOCGHKCVQTYHNRYWAGIYQLWDELXJJYJXALDSIVMYBAXNHIGFGBEEHYPUWTHBXSWIUCQNGAWHCZKGZKNVTKEREWZAOXZGPGJHJOBLTEUNNPRHHTRS");

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
    msg.setTimeStamp(0.27131436600787373);
    msg.setSource(7846U);
    msg.setSourceEntity(112U);
    msg.setDestination(64352U);
    msg.setDestinationEntity(229U);
    msg.value.assign("AGMBANMDZYGHEZILQRYLYQNDBYVSQGNPSURLDTBVUAAJXZHQTZVFTOOXOMZBKFEZFCA");

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
    msg.setTimeStamp(0.6380961331728899);
    msg.setSource(50396U);
    msg.setSourceEntity(8U);
    msg.setDestination(53583U);
    msg.setDestinationEntity(216U);
    const signed char tmp_msg_0[] = {-94, -55, 110, -26, 54, 26, -26, -32, 39, 55, 73, 123, 3, 124, 10, -63, 122, -30, -98, -72, 56, 95, -26, 116, -108, -33, 39, -113, 68, 44, 33, 88, 11, -108, -63, -84, -113, -84, -105, 29, -89, 92, 79, -79, 76, -99, 107, -97, -80, -77, 74, 2, 5, -118, 39, -121, 44, 30, 86, 62, 103, -92, -47, -103, 41, 69, -46, 6, 87, 98, -16, -73, -49, -95, 27, -125, -49, -63, 51, -44, 124, -72, 77, 97, -81, -32, 44, 6, 47, -78, 53, -97, -99, -64, 76, 96, 70, -21, 75, -65, 108, 96, -109, 123, 6, -15, -124, -61, -26, -22, 43, -114, -90, -1, -66, -128, 39, 5, -55, 6, -57, -3, -71, -79, -34, 15, 122, -70, 15, -69, 93, 124, -29, -50, -64, 75, -118, -81, 81, -111, 4, -33, 47, -2, 8, 110, -91, -37, 34, -83, -102, -60, 52, 53, -41, -10, -126, 24, 90, -80, -73, 125, 15, -52, -20, 51, -119, -32, -119, -26, -127, 65, 60, -49, 117, -92, -29, -122, 85, -99, -74, 26, -68, 82, 114, 122, 102, -10, -11, -122, 7, 32, -98, 40, -105, 82, -51};
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
    msg.setTimeStamp(0.30016360635516093);
    msg.setSource(60326U);
    msg.setSourceEntity(70U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(158U);
    const signed char tmp_msg_0[] = {118, -123, 45, -86, 94, 4, 43, -106, -52, 93, -17, 123, -128, 61, 100, 72, -105, 29, 12, -98, -116, 69, -120, -113, -23, 93, 60, -15, -94, 17, -4, -6, 68, 105, -127, 64, -69, 68, 83, -118, -30, 2, 33, -91, -43, -39, 120, -37, 3, 85, -32, -100, -21, -111, -72, 43, 107, -74, 108, 20, 96, -58, -101, -69, 7, -42, -82, -115, -41, 31, 16, -109, -83, -41, 105, -92, -52, 28, 97, 22, -120, 57, 69, -112, -81, 34, 99, 67, 50, 54, -114, 125, 87, -79, -12, 64, -106, -63, -116, -123, 78, -71, -102, -60, -69, 30, 61, -84, 123, 34, -67, -98, -122, 37, 100, -77, -10, 69, -28, 31, 112, -50, -12, 117, 40, -125, -97, -20, 55, -95, 3, 26, 72, 73, -66, 57, -111, 8, -39, -35, 91, 31, 39, 119, -128, -110, -63, 75, -113, 22, -71, -96, -33, 29, -62, 113, -27, -56, 97, -20, 95, 84, -18, -68, 98, 40, 37, -53, 62, 104, 5, 60, 56, 95, 4, -13, 20, -115, 40, 68, 26, 90, -107, -81, 69, 117, 93, 20, 23, -115, 52, 53, -92, 33, 76, -27, -1, -72, 40, -38, 117, 44, 50, 42, -80, -87, 34, -47, -115, 55, 41, 74, 69, -94, 7, -33, -78, 94, 2, 68, 72, 21, 73, 56, -73, 94, -42, 17, 25, -82, -69, 4, 43, 81, -53, 117, -44, -77, 71, -58, 21, 76, -42, 106, -89, 46, -118};
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
    msg.setTimeStamp(0.33829437399332385);
    msg.setSource(46135U);
    msg.setSourceEntity(243U);
    msg.setDestination(14041U);
    msg.setDestinationEntity(113U);
    const signed char tmp_msg_0[] = {-11, -98, 49, -44, -108, -76, 90, -45, -82, -28, -114, -20, -3, 19, -61, -126, -72, 88, -60, 12, 37, 73, -80, 50, -41, -68, 12, 126, 30, 92, -44, 76, 46, 98, -86, -41, -87, 11, -37, -121, 100, -92, 105, 31, -61, -127, -38, -70, -61, -104, -26, -70, -111, 89, -69, 61, -14, -43, 22, 101, -93, -91, 117, -123, 70, 52, 18, 48, -62, 116, 78, 79, 35, 74, -69, 111, -114, -13, -57, 85, -48, 119, -98, -99, 79, -38, 98, 56, 80, 105, 37, -34, 109, -1, -67, 123, 105, -13, 65, 7, 82, 58, -63, -107, 11, 31, -66, 70, -38, 6, -1, 99, 45, -55, -110, -25, 92, 33, 88, 8, -13, -10, -122, -11, -12, 42, 36, 86, 26, 14, 17, 33, -110, -112, -34, -127, 35, 89, 116, -88, 64, 89, -58, -13, -59, -30, 31, -44, -127, -36, -103, 70, 47, -9, 21, -121, 33, 83, 107, 47, 33, 105, -11, -103, -20, 39, -79, 19, -68, -52, -125, -115, -34, -16, 82, -127, 41, 38, -114, 5, 125, 105, -112, 46, -112, 22, 59, 42, 34, -54, -12, 116, 113, -13, -119, -127, -88, 90, -46, 119, 56, -114, 120, -127, 91, 25, -35, -38, 99, 122, -54};
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
    msg.setTimeStamp(0.4881479473896715);
    msg.setSource(3407U);
    msg.setSourceEntity(164U);
    msg.setDestination(25746U);
    msg.setDestinationEntity(218U);
    msg.value = 0.29084930028826017;

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
    msg.setTimeStamp(0.3240081949972935);
    msg.setSource(51506U);
    msg.setSourceEntity(254U);
    msg.setDestination(61503U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3113654366268903;

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
    msg.setTimeStamp(0.5172293797416212);
    msg.setSource(44974U);
    msg.setSourceEntity(24U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(102U);
    msg.value = 0.2238611000632975;

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
    msg.setTimeStamp(0.5176317476205158);
    msg.setSource(27364U);
    msg.setSourceEntity(189U);
    msg.setDestination(55494U);
    msg.setDestinationEntity(235U);
    msg.type = 69U;
    msg.frequency = 2453918168U;
    msg.min_range = 61623U;
    msg.max_range = 60666U;
    msg.bits_per_point = 45U;
    msg.scale_factor = 0.5360231463851662;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0037282864940435534;
    tmp_msg_0.beam_height = 0.8014990237423646;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {53, -19, 96, 124, -52, -11, -123, 33, -18, 1, 62, 59, -112, -21, 91, 47, 67, -16, -119, -73, -84, 85, -65, -8, -107, -39, 60, -13, -98, -125, 25, -72, -127, 78, 93, 10};
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
    msg.setTimeStamp(0.7234475235050842);
    msg.setSource(14754U);
    msg.setSourceEntity(32U);
    msg.setDestination(32742U);
    msg.setDestinationEntity(182U);
    msg.type = 19U;
    msg.frequency = 3512424632U;
    msg.min_range = 48782U;
    msg.max_range = 53753U;
    msg.bits_per_point = 46U;
    msg.scale_factor = 0.9373174198756306;
    const signed char tmp_msg_0[] = {-41, -35, 46, -95, -42, -65, -35, 14, -88, 108, 99, 102, 30, -17, 63, -58, -61, -55, 44, 44, 109, 5, 38, -31, 120, 89, -63, 116, 34, -109, 121, 74, -36, 36, 126, -67, 70, -121, 93, -3, 12, 49, 57, 24, 60, -87, -125, -67, 64, 86, -60, -120, 5, 92, 92, -56, 28, 65, -126, -4, 30, 22, -88, -58, 69, 54, 45, -3, -45, 64, -68, -10, -58, 12, -44, -80, -18, -125, -40, 87, -101, 52, 95, -61, 9, 36, -91, 59, 66, 71, -31, 106, 103, -36, -89, 67, -77, 27, -63, 66, 109, 75, -47, -74, -34, -60, -62, -61, 45, 86, 113, 98, -95, 110, -75, -15, -5, 86, -25, 120, -72, -114, -48, -51, 32, -12, 16, 78, -31, 93, 52, -21, 114, -85, 16, 20, 89, -93, 63, -51, -26, -75, -122, 34, 14, 18, 27, -55, 103, -93, -30, -100, 25, 65, -22, -27, 14, 77, 65, -45, 67, 59, -88, 12, -91, 49, -36, -58, 101, 47, -83, 42, 26, -120, 95, -66, -53, -22, -33, -128, 76, 28, -104, 30, 57, -5, -70, 62, 70, -33, 115, -59, -64, -56, -43, -86, 92, 118, 67, -122, -111, 63, 78, -3, -96, -42, -103, 10, 40};
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
    msg.setTimeStamp(0.8844330054476914);
    msg.setSource(39762U);
    msg.setSourceEntity(87U);
    msg.setDestination(61455U);
    msg.setDestinationEntity(239U);
    msg.type = 52U;
    msg.frequency = 1993042710U;
    msg.min_range = 9323U;
    msg.max_range = 47443U;
    msg.bits_per_point = 160U;
    msg.scale_factor = 0.38205597731695173;
    const signed char tmp_msg_0[] = {26, 30, 62, -124, 72, 3, -92, -79, -82, -33, 61, 65, -117, -96, 101, -125, -52, -102, -126, -44, -22, -39, -44, 6, 57, 34, -48, 40, 58, -17, -110, -95, -56, -5, -122, 27, 123, 124, -52, -109, 125, 86, -32, -48, -47, 82, -10, 81, 82, 43, -78, 79, 60, -2, 18, 75, -94, -63, 43, -122, 88, -62, 62, -58, -87, -30, 57, -46, 117, 55, 20, -125, -121, 93, 30, 53, -16, 95, -35, -38, -96, 9, 10, 30, -89, 52, 32, -60, 28, -48, 51, 103, 61, -120, -78, -80, -5, -4, -14, -76, -68, 26, -1, -50, -35, 22, 76, 60, 79, 46, 64, 93, 47, 53, 91, 13, 32, 79, 65, 56, 120, 34, -36, 15, -37, -100, -43, 84, 117, -117, 20, 13, 65, -45, 17, -63, -32, 39, 43, 59, 10, 76, -4, -117, 65, 76, -95, -118, -41, -27, 65, 45, -56, -89, 82, -60, -42, 122, 120, 80, 121, 123, -54, 97, 120, -101, -102, 20, -74, 16, -68, 123, -33, 58, 89, 45, 106, 64, -14, -17, -123, 23, -84, -63, 69, -92, 90, 89, 104, 55, 54, 1, 5, -4, -28, -66, 0, 51, 80, 58, 56, -58, -65, 107, -96, -51, -116, 82, -108, -62, 121, -99, 37, -96, -84, -107, -69, -75, -57, -33, 126, -121, -43, -118, -83, -22, 126, 48, -84, -14, -6, -74, 111, 4, 67, -9, -34};
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
    msg.setTimeStamp(0.895590197793467);
    msg.setSource(24282U);
    msg.setSourceEntity(231U);
    msg.setDestination(22361U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.4213252755651117);
    msg.setSource(26682U);
    msg.setSourceEntity(171U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.2786338536777616);
    msg.setSource(31507U);
    msg.setSourceEntity(124U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.8574565545058869);
    msg.setSource(32935U);
    msg.setSourceEntity(246U);
    msg.setDestination(49557U);
    msg.setDestinationEntity(155U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.19612164847373792);
    msg.setSource(54058U);
    msg.setSourceEntity(80U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(51U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.6816715555514316);
    msg.setSource(20598U);
    msg.setSourceEntity(119U);
    msg.setDestination(60930U);
    msg.setDestinationEntity(247U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.35378871932624834);
    msg.setSource(49829U);
    msg.setSourceEntity(11U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5853022501541679;
    msg.confidence = 0.1734591380185312;
    msg.opmodes.assign("IJNKNXCAJTJBKSFRWYURTGUTRATVUUCVLPARVAOCEDIZGRQGABZPV");

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
    msg.setTimeStamp(0.8326755279454755);
    msg.setSource(22928U);
    msg.setSourceEntity(115U);
    msg.setDestination(32708U);
    msg.setDestinationEntity(167U);
    msg.value = 0.015004636308751151;
    msg.confidence = 0.5915511782696934;
    msg.opmodes.assign("TGDBROMJGIILQLFVDCENHZUDOWLNRHKOGXZOYQWODDOMWWZIKXFVITVOAKMQS");

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
    msg.setTimeStamp(0.3134704790520928);
    msg.setSource(4937U);
    msg.setSourceEntity(18U);
    msg.setDestination(63755U);
    msg.setDestinationEntity(57U);
    msg.value = 0.6698802543664268;
    msg.confidence = 0.8565968643081788;
    msg.opmodes.assign("MNEGTYJDUHPMARYDCKLJWMUZXLVJVDPRRWTBRGNWLURGDCNKIIZFTDQMGPHRFESWMQUWOLPETJLKLSVYKHNECSUILHOEACAHNRAUIAJVJGAXFDMSKIUSPFLLLXEWKVJKZIBNFWAABTZBBPKZ");

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
    msg.setTimeStamp(0.030000439846495697);
    msg.setSource(47253U);
    msg.setSourceEntity(213U);
    msg.setDestination(13794U);
    msg.setDestinationEntity(199U);
    msg.itow = 342644357U;
    msg.lat = 0.35136095841046144;
    msg.lon = 0.21914699722517217;
    msg.height_ell = 0.6778462612484749;
    msg.height_sea = 0.6460792164454914;
    msg.hacc = 0.5155804360194634;
    msg.vacc = 0.6545339746906976;
    msg.vel_n = 0.6049948248379702;
    msg.vel_e = 0.15344494466015224;
    msg.vel_d = 0.2493716765381705;
    msg.speed = 0.7278491130617217;
    msg.gspeed = 0.7049881855600884;
    msg.heading = 0.24040232639660708;
    msg.sacc = 0.9564772242044688;
    msg.cacc = 0.5208483862553019;

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
    msg.setTimeStamp(0.547749813296966);
    msg.setSource(17418U);
    msg.setSourceEntity(138U);
    msg.setDestination(49966U);
    msg.setDestinationEntity(63U);
    msg.itow = 2867351519U;
    msg.lat = 0.23835334994080937;
    msg.lon = 0.8337983993178254;
    msg.height_ell = 0.8175745400748887;
    msg.height_sea = 0.6312920293269176;
    msg.hacc = 0.4983486756999148;
    msg.vacc = 0.25143021485395245;
    msg.vel_n = 0.2750472050319953;
    msg.vel_e = 0.17710088273509672;
    msg.vel_d = 0.18852995704201103;
    msg.speed = 0.2101885267186706;
    msg.gspeed = 0.2795860428806113;
    msg.heading = 0.2778303208809707;
    msg.sacc = 0.4195925022264486;
    msg.cacc = 0.23685281533282743;

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
    msg.setTimeStamp(0.11286454446942962);
    msg.setSource(63992U);
    msg.setSourceEntity(166U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(246U);
    msg.itow = 479911127U;
    msg.lat = 0.8781022091345091;
    msg.lon = 0.8402379342829276;
    msg.height_ell = 0.5671838796758554;
    msg.height_sea = 0.6933648996063366;
    msg.hacc = 0.0037407152693536005;
    msg.vacc = 0.6100334124639293;
    msg.vel_n = 0.18178850534251045;
    msg.vel_e = 0.5062530589954412;
    msg.vel_d = 0.11836913658708326;
    msg.speed = 0.8159933481701181;
    msg.gspeed = 0.7045728777761108;
    msg.heading = 0.8538330782599229;
    msg.sacc = 0.47534267992172086;
    msg.cacc = 0.12586125703245854;

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
    msg.setTimeStamp(0.4533186885828214);
    msg.setSource(8045U);
    msg.setSourceEntity(48U);
    msg.setDestination(57504U);
    msg.setDestinationEntity(83U);
    msg.id = 16U;
    msg.value = 0.217405297397382;

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
    msg.setTimeStamp(0.08468072487354239);
    msg.setSource(49592U);
    msg.setSourceEntity(84U);
    msg.setDestination(58175U);
    msg.setDestinationEntity(64U);
    msg.id = 16U;
    msg.value = 0.0024505138858308406;

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
    msg.setTimeStamp(0.03137132373452711);
    msg.setSource(20036U);
    msg.setSourceEntity(157U);
    msg.setDestination(25206U);
    msg.setDestinationEntity(187U);
    msg.id = 118U;
    msg.value = 0.8144460879523131;

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
    msg.setTimeStamp(0.507477407393501);
    msg.setSource(42254U);
    msg.setSourceEntity(24U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(198U);
    msg.x = 0.9198085530465081;
    msg.y = 0.18408894049968205;
    msg.z = 0.40283766358541395;
    msg.phi = 0.9567515441116956;
    msg.theta = 0.4541659629505993;
    msg.psi = 0.7331366566450895;

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
    msg.setTimeStamp(0.484921036850701);
    msg.setSource(24364U);
    msg.setSourceEntity(166U);
    msg.setDestination(55606U);
    msg.setDestinationEntity(37U);
    msg.x = 0.9895805324477108;
    msg.y = 0.13287577745439005;
    msg.z = 0.24186217642693253;
    msg.phi = 0.07860816265989579;
    msg.theta = 0.12855443337193362;
    msg.psi = 0.5392472969875168;

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
    msg.setTimeStamp(0.4260081808796573);
    msg.setSource(4902U);
    msg.setSourceEntity(23U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(113U);
    msg.x = 0.10031784736308835;
    msg.y = 0.3258031101882566;
    msg.z = 0.21589283056681208;
    msg.phi = 0.9729615372385211;
    msg.theta = 0.6506876170479946;
    msg.psi = 0.7649550579786788;

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
    msg.setTimeStamp(0.4165418108376473);
    msg.setSource(38729U);
    msg.setSourceEntity(233U);
    msg.setDestination(49314U);
    msg.setDestinationEntity(22U);
    msg.beam_width = 0.6810863103951951;
    msg.beam_height = 0.10854359051415452;

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
    msg.setTimeStamp(0.4258576814088211);
    msg.setSource(35449U);
    msg.setSourceEntity(194U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(70U);
    msg.beam_width = 0.24008830765451394;
    msg.beam_height = 0.545635667470439;

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
    msg.setTimeStamp(0.9814751396484286);
    msg.setSource(28760U);
    msg.setSourceEntity(189U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(7U);
    msg.beam_width = 0.09098914983880346;
    msg.beam_height = 0.15054654137026025;

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
    msg.setTimeStamp(0.7773896103698316);
    msg.setSource(7440U);
    msg.setSourceEntity(9U);
    msg.setDestination(53201U);
    msg.setDestinationEntity(103U);
    msg.sane = 183U;

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
    msg.setTimeStamp(0.28664118041182907);
    msg.setSource(30253U);
    msg.setSourceEntity(1U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(194U);
    msg.sane = 221U;

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
    msg.setTimeStamp(0.6395609411449573);
    msg.setSource(59070U);
    msg.setSourceEntity(175U);
    msg.setDestination(57435U);
    msg.setDestinationEntity(135U);
    msg.sane = 135U;

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
    msg.setTimeStamp(0.09601639473567869);
    msg.setSource(17109U);
    msg.setSourceEntity(221U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(100U);
    msg.value = 0.15832823253934813;

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
    msg.setTimeStamp(0.28004422101235693);
    msg.setSource(5002U);
    msg.setSourceEntity(130U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(154U);
    msg.value = 0.9530873085574855;

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
    msg.setTimeStamp(0.7953285317279594);
    msg.setSource(4843U);
    msg.setSourceEntity(140U);
    msg.setDestination(14101U);
    msg.setDestinationEntity(239U);
    msg.value = 0.3481054554624968;

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
    msg.setTimeStamp(0.23881860138854105);
    msg.setSource(948U);
    msg.setSourceEntity(209U);
    msg.setDestination(40871U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7877915588764324;

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
    msg.setTimeStamp(0.7119759377928923);
    msg.setSource(56244U);
    msg.setSourceEntity(125U);
    msg.setDestination(17786U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5761321273541091;

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
    msg.setTimeStamp(0.8306227837624155);
    msg.setSource(45241U);
    msg.setSourceEntity(196U);
    msg.setDestination(18537U);
    msg.setDestinationEntity(156U);
    msg.value = 0.06460187622857982;

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
    msg.setTimeStamp(0.09524034668254455);
    msg.setSource(62979U);
    msg.setSourceEntity(201U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4891566518244934;

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
    msg.setTimeStamp(0.3902579589094939);
    msg.setSource(27433U);
    msg.setSourceEntity(251U);
    msg.setDestination(47148U);
    msg.setDestinationEntity(155U);
    msg.value = 0.48277765519988725;

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
    msg.setTimeStamp(0.20252933650766058);
    msg.setSource(18283U);
    msg.setSourceEntity(196U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8790056352204988;

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
    msg.setTimeStamp(0.8197590111276197);
    msg.setSource(34183U);
    msg.setSourceEntity(35U);
    msg.setDestination(64961U);
    msg.setDestinationEntity(102U);
    msg.value = 0.831581751140969;

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
    msg.setTimeStamp(0.8986306413258646);
    msg.setSource(39950U);
    msg.setSourceEntity(161U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(13U);
    msg.value = 0.176476124689523;

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
    msg.setTimeStamp(0.6400045395196743);
    msg.setSource(50517U);
    msg.setSourceEntity(187U);
    msg.setDestination(36471U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7765497675572709;

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
    msg.setTimeStamp(0.2794387441932473);
    msg.setSource(39595U);
    msg.setSourceEntity(142U);
    msg.setDestination(30811U);
    msg.setDestinationEntity(244U);
    msg.value = 0.40497505971664227;

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
    msg.setTimeStamp(0.07667687532181833);
    msg.setSource(9271U);
    msg.setSourceEntity(31U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(179U);
    msg.value = 0.42317587571654003;

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
    msg.setTimeStamp(0.3437133506782969);
    msg.setSource(124U);
    msg.setSourceEntity(103U);
    msg.setDestination(26993U);
    msg.setDestinationEntity(180U);
    msg.value = 0.43678112600039654;

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
    msg.setTimeStamp(0.9542242322271657);
    msg.setSource(63220U);
    msg.setSourceEntity(129U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(52U);
    msg.value = 0.27882138551499147;

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
    msg.setTimeStamp(0.7849228301493759);
    msg.setSource(2289U);
    msg.setSourceEntity(111U);
    msg.setDestination(40998U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7178669854486288;

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
    msg.setTimeStamp(0.9075430426701382);
    msg.setSource(61377U);
    msg.setSourceEntity(225U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6853770865507153;

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
    msg.setTimeStamp(0.9342440023466786);
    msg.setSource(51494U);
    msg.setSourceEntity(224U);
    msg.setDestination(17637U);
    msg.setDestinationEntity(68U);
    msg.value = 0.26143766836361937;

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
    msg.setTimeStamp(0.37510140094620714);
    msg.setSource(27798U);
    msg.setSourceEntity(237U);
    msg.setDestination(9637U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6931290643832577;

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
    msg.setTimeStamp(0.4181229682559484);
    msg.setSource(20618U);
    msg.setSourceEntity(227U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(160U);
    msg.value = 0.37578224621192;

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
    msg.setTimeStamp(0.3105065715855124);
    msg.setSource(44985U);
    msg.setSourceEntity(122U);
    msg.setDestination(63943U);
    msg.setDestinationEntity(254U);
    msg.value = 0.09582150181521598;

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
    msg.setTimeStamp(0.07371000058351695);
    msg.setSource(61120U);
    msg.setSourceEntity(142U);
    msg.setDestination(24376U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9264733783678368;

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
    msg.setTimeStamp(0.9255765639064691);
    msg.setSource(27876U);
    msg.setSourceEntity(198U);
    msg.setDestination(49349U);
    msg.setDestinationEntity(41U);
    msg.value = 0.2578712266890798;

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
    msg.setTimeStamp(0.27371665254861566);
    msg.setSource(20085U);
    msg.setSourceEntity(3U);
    msg.setDestination(30443U);
    msg.setDestinationEntity(114U);
    msg.validity = 37781U;
    msg.type = 174U;
    msg.tow = 190002140U;
    msg.base_lat = 0.11062251156463443;
    msg.base_lon = 0.8609337702634767;
    msg.base_height = 0.8191125254711317;
    msg.n = 0.36127633607822174;
    msg.e = 0.32787599737725115;
    msg.d = 0.650913072717101;
    msg.v_n = 0.0016761998351803031;
    msg.v_e = 0.1006471386846236;
    msg.v_d = 0.13657701342785722;
    msg.satellites = 160U;
    msg.iar_hyp = 43488U;
    msg.iar_ratio = 0.6214334727853249;

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
    msg.setTimeStamp(0.9619746653832104);
    msg.setSource(19859U);
    msg.setSourceEntity(25U);
    msg.setDestination(49542U);
    msg.setDestinationEntity(236U);
    msg.validity = 26990U;
    msg.type = 39U;
    msg.tow = 1519960895U;
    msg.base_lat = 0.5397195683627588;
    msg.base_lon = 0.5712687876122207;
    msg.base_height = 0.025038649106451483;
    msg.n = 0.19899947015844843;
    msg.e = 0.7689038949524358;
    msg.d = 0.9050745655118614;
    msg.v_n = 0.6958191789879956;
    msg.v_e = 0.858309848948518;
    msg.v_d = 0.7993242792697305;
    msg.satellites = 207U;
    msg.iar_hyp = 360U;
    msg.iar_ratio = 0.1939772641852361;

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
    msg.setTimeStamp(0.5416838067849488);
    msg.setSource(15362U);
    msg.setSourceEntity(147U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(143U);
    msg.validity = 59812U;
    msg.type = 144U;
    msg.tow = 1294823108U;
    msg.base_lat = 0.4810786742245735;
    msg.base_lon = 0.5204252256445904;
    msg.base_height = 0.18214726070875542;
    msg.n = 0.2799439175600903;
    msg.e = 0.24118752882913597;
    msg.d = 0.785032502309841;
    msg.v_n = 0.6898380993462049;
    msg.v_e = 0.08414878049762697;
    msg.v_d = 0.6356649219323904;
    msg.satellites = 159U;
    msg.iar_hyp = 50639U;
    msg.iar_ratio = 0.8138035892106819;

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
    msg.setTimeStamp(0.6957844889657986);
    msg.setSource(11505U);
    msg.setSourceEntity(21U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(236U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6367394792066201;
    tmp_msg_0.lon = 0.48471102678726696;
    tmp_msg_0.height = 0.15562482885170703;
    tmp_msg_0.x = 0.6961626212951573;
    tmp_msg_0.y = 0.7572809872482601;
    tmp_msg_0.z = 0.8794763945104702;
    tmp_msg_0.phi = 0.9578404465824777;
    tmp_msg_0.theta = 0.12480341125102312;
    tmp_msg_0.psi = 0.47745239002512097;
    tmp_msg_0.u = 0.8777255322346574;
    tmp_msg_0.v = 0.7830615365077396;
    tmp_msg_0.w = 0.25603031737537996;
    tmp_msg_0.vx = 0.9474860933367978;
    tmp_msg_0.vy = 0.025092782154396143;
    tmp_msg_0.vz = 0.3056894091117164;
    tmp_msg_0.p = 0.29673866489969025;
    tmp_msg_0.q = 0.20536711268840735;
    tmp_msg_0.r = 0.7817781544071962;
    tmp_msg_0.depth = 0.7822842066710043;
    tmp_msg_0.alt = 0.032312751025953435;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.32184022417087665);
    msg.setSource(46085U);
    msg.setSourceEntity(227U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(191U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6678853840985038;
    tmp_msg_0.lon = 0.8594111384032661;
    tmp_msg_0.height = 0.5482500876515617;
    tmp_msg_0.x = 0.8004423288882727;
    tmp_msg_0.y = 0.9961487441980005;
    tmp_msg_0.z = 0.6389164645302718;
    tmp_msg_0.phi = 0.24112255016674156;
    tmp_msg_0.theta = 0.5735353791027411;
    tmp_msg_0.psi = 0.052962708125583124;
    tmp_msg_0.u = 0.5360716396770093;
    tmp_msg_0.v = 0.9296854677198362;
    tmp_msg_0.w = 0.6359262959013462;
    tmp_msg_0.vx = 0.0445004910404051;
    tmp_msg_0.vy = 0.4761787668390508;
    tmp_msg_0.vz = 0.7169390302251812;
    tmp_msg_0.p = 0.33300847926108335;
    tmp_msg_0.q = 0.2570728499393442;
    tmp_msg_0.r = 0.7681029388642041;
    tmp_msg_0.depth = 0.8095213589151685;
    tmp_msg_0.alt = 0.5493779837736548;
    msg.state.set(tmp_msg_0);
    msg.type = 206U;

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
    msg.setTimeStamp(0.6951440450571024);
    msg.setSource(32370U);
    msg.setSourceEntity(155U);
    msg.setDestination(49706U);
    msg.setDestinationEntity(213U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8693556365348439;
    tmp_msg_0.lon = 0.17905966777409332;
    tmp_msg_0.height = 0.002005396843641427;
    tmp_msg_0.x = 0.42067701848475536;
    tmp_msg_0.y = 0.9093885674570928;
    tmp_msg_0.z = 0.32533852543820807;
    tmp_msg_0.phi = 0.6961468296692118;
    tmp_msg_0.theta = 0.8138255671588785;
    tmp_msg_0.psi = 0.7130260056574609;
    tmp_msg_0.u = 0.7483456314133479;
    tmp_msg_0.v = 0.9306647179539849;
    tmp_msg_0.w = 0.18459415125208833;
    tmp_msg_0.vx = 0.7997890135975839;
    tmp_msg_0.vy = 0.42740918576461895;
    tmp_msg_0.vz = 0.1176190482184265;
    tmp_msg_0.p = 0.9231834810017855;
    tmp_msg_0.q = 0.9535415125666596;
    tmp_msg_0.r = 0.4912116983227185;
    tmp_msg_0.depth = 0.9927714733893985;
    tmp_msg_0.alt = 0.1397840610747053;
    msg.state.set(tmp_msg_0);
    msg.type = 115U;

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
    msg.setTimeStamp(0.735567767849996);
    msg.setSource(46853U);
    msg.setSourceEntity(177U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4763125728647548;

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
    msg.setTimeStamp(0.9098046648462443);
    msg.setSource(11596U);
    msg.setSourceEntity(160U);
    msg.setDestination(52535U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9107818420194067;

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
    msg.setTimeStamp(0.29902600948792346);
    msg.setSource(6429U);
    msg.setSourceEntity(140U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(77U);
    msg.value = 0.27341411623303435;

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
    msg.setTimeStamp(0.22575882078348664);
    msg.setSource(26968U);
    msg.setSourceEntity(242U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(210U);
    msg.value = 0.8493341619981382;

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
    msg.setTimeStamp(0.22956787285878566);
    msg.setSource(32593U);
    msg.setSourceEntity(223U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(68U);
    msg.value = 0.1580818086344773;

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
    msg.setTimeStamp(0.7290965281617913);
    msg.setSource(30894U);
    msg.setSourceEntity(7U);
    msg.setDestination(50821U);
    msg.setDestinationEntity(184U);
    msg.value = 0.32459640250470567;

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
    msg.setTimeStamp(0.4896603670445726);
    msg.setSource(38198U);
    msg.setSourceEntity(80U);
    msg.setDestination(38384U);
    msg.setDestinationEntity(80U);
    msg.value = 0.49354376451430093;

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
    msg.setTimeStamp(0.3186301211087572);
    msg.setSource(49042U);
    msg.setSourceEntity(127U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(119U);
    msg.value = 0.5732240943800516;

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
    msg.setTimeStamp(0.24957966217212357);
    msg.setSource(14485U);
    msg.setSourceEntity(63U);
    msg.setDestination(33262U);
    msg.setDestinationEntity(172U);
    msg.value = 0.1489139210584114;

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
    msg.setTimeStamp(0.8612634940002255);
    msg.setSource(13287U);
    msg.setSourceEntity(73U);
    msg.setDestination(16490U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9826162266063821;

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
    msg.setTimeStamp(0.31183429735166657);
    msg.setSource(55186U);
    msg.setSourceEntity(160U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(41U);
    msg.value = 0.37084125314802696;

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
    msg.setTimeStamp(0.9077877666116408);
    msg.setSource(50147U);
    msg.setSourceEntity(240U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(37U);
    msg.value = 0.926958187706695;

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
    msg.setTimeStamp(0.13523817596119514);
    msg.setSource(39452U);
    msg.setSourceEntity(46U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(3U);
    msg.value = 0.5780260270390193;

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
    msg.setTimeStamp(0.7108377184744683);
    msg.setSource(41363U);
    msg.setSourceEntity(137U);
    msg.setDestination(22304U);
    msg.setDestinationEntity(225U);
    msg.value = 0.2201800944020611;

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
    msg.setTimeStamp(0.27376847345707533);
    msg.setSource(55396U);
    msg.setSourceEntity(162U);
    msg.setDestination(23831U);
    msg.setDestinationEntity(65U);
    msg.value = 0.018575884653163066;

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
    msg.setTimeStamp(0.8867936360557604);
    msg.setSource(11811U);
    msg.setSourceEntity(198U);
    msg.setDestination(51521U);
    msg.setDestinationEntity(248U);
    msg.id = 44U;
    msg.zoom = 242U;
    msg.action = 209U;

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
    msg.setTimeStamp(0.21591134404905776);
    msg.setSource(43583U);
    msg.setSourceEntity(165U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(39U);
    msg.id = 143U;
    msg.zoom = 156U;
    msg.action = 128U;

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
    msg.setTimeStamp(0.04484019406900719);
    msg.setSource(39567U);
    msg.setSourceEntity(205U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(45U);
    msg.id = 23U;
    msg.zoom = 66U;
    msg.action = 49U;

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
    msg.setTimeStamp(0.054853059588084285);
    msg.setSource(44890U);
    msg.setSourceEntity(107U);
    msg.setDestination(36497U);
    msg.setDestinationEntity(99U);
    msg.id = 72U;
    msg.value = 0.14859395410306808;

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
    msg.setTimeStamp(0.40451308093096516);
    msg.setSource(65075U);
    msg.setSourceEntity(254U);
    msg.setDestination(35135U);
    msg.setDestinationEntity(91U);
    msg.id = 200U;
    msg.value = 0.5247885189917343;

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
    msg.setTimeStamp(0.7227673994923964);
    msg.setSource(64463U);
    msg.setSourceEntity(184U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(134U);
    msg.id = 239U;
    msg.value = 0.17776057243643084;

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
    msg.setTimeStamp(0.41243558828766846);
    msg.setSource(22221U);
    msg.setSourceEntity(131U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(248U);
    msg.id = 41U;
    msg.value = 0.7057241017112352;

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
    msg.setTimeStamp(0.03953180470980033);
    msg.setSource(23548U);
    msg.setSourceEntity(125U);
    msg.setDestination(26396U);
    msg.setDestinationEntity(20U);
    msg.id = 219U;
    msg.value = 0.33689792838775945;

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
    msg.setTimeStamp(0.9811803121379618);
    msg.setSource(49016U);
    msg.setSourceEntity(15U);
    msg.setDestination(26391U);
    msg.setDestinationEntity(179U);
    msg.id = 73U;
    msg.value = 0.38850946719346946;

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
    msg.setTimeStamp(0.5837103877912019);
    msg.setSource(64938U);
    msg.setSourceEntity(97U);
    msg.setDestination(7017U);
    msg.setDestinationEntity(66U);
    msg.id = 19U;
    msg.angle = 0.3102408213688367;

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
    msg.setTimeStamp(0.49572669413133486);
    msg.setSource(15128U);
    msg.setSourceEntity(220U);
    msg.setDestination(44290U);
    msg.setDestinationEntity(253U);
    msg.id = 53U;
    msg.angle = 0.7314938686579997;

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
    msg.setTimeStamp(0.8896112038994503);
    msg.setSource(21584U);
    msg.setSourceEntity(232U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(29U);
    msg.id = 184U;
    msg.angle = 0.7769562514365338;

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
    msg.setTimeStamp(0.4407280573094198);
    msg.setSource(34707U);
    msg.setSourceEntity(226U);
    msg.setDestination(31069U);
    msg.setDestinationEntity(142U);
    msg.op = 98U;
    msg.actions.assign("ELSMNBOFGZKEODSIWJVETLJSRXZYRZNDAALCLOPWDDJBIJONIDJENCKPTYQZBKXDJIMGXMIVPWHHLXBNEIPUUULGKVQFPXQREIPAISKPWFIXXYPDGFJGGKEFQHBHQNUKHOLOCUFMWNCAQHASVTNQCCCTOBCCFSAWQYUXJAZDSHEDYZKCVRBKVMBSMMYGUV");

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
    msg.setTimeStamp(0.18498586286945906);
    msg.setSource(16987U);
    msg.setSourceEntity(133U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(232U);
    msg.op = 192U;
    msg.actions.assign("PHNMIFOOZNEVTODJSQDUXGSVRICNZHUKFRAGNLQMAYCEHYBAUBJCCJUQFXHMYGLVAZWJWAMZFARRPNRFRSKSHPKBMGFXEIQWVWCNWVLQDTMIVWUIWVUDSSWVTYQVPGZSSSKTBOKLIBJIEPNCMGARLQIKOEOETPTLUTJXDEGHGOFTJZYQDYWURZOJLXKULPQTZAMQYYLZKWDXFBPRAIDMEBASXDXNUOCXTIHXDOYLB");

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
    msg.setTimeStamp(0.5676497076068777);
    msg.setSource(61055U);
    msg.setSourceEntity(28U);
    msg.setDestination(3349U);
    msg.setDestinationEntity(142U);
    msg.op = 66U;
    msg.actions.assign("WYONABQCQCJQETHWBETUXEZCBHXKZSZDYCMACDKNAMPRIUQLQJOKGQZSEILLSWBCSJNYVMSTZAPTZZVDHNUNRYLGXGTKXJPAIXLWSXPKRDEHOHPGOHXABYNYICYVURBRWYPVOPOMDUWUXLIVVOKAGIJQQTMIQEFMKHOIBSMLDDOFMFTKYVWGAUGDBFRWNQDTLZCRFGCZSYARXZPEIDJH");

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
    msg.setTimeStamp(0.36583558855005527);
    msg.setSource(47508U);
    msg.setSourceEntity(110U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("LFEAZRJAVTMDVXWCWTGKXBHLUUWIFYNTCWIAWOGALAJRBQHDMLUBYGJBXDHIAVIVCJGKXFMSMWVMPXZNLTSLPQOHOJPNHTDOXITNKDZOAQQRUKXZFOISXIGBNLKHHAANJEETCWUUQOXLQKCUBEZKLVGAKGEGIYBTHDTYFENNDDZJRUMWISJPFKSCERMHUYOISKNZMPEPHMGWRFDGVOWYVEPYCJC");

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
    msg.setTimeStamp(0.6233108435899248);
    msg.setSource(46774U);
    msg.setSourceEntity(33U);
    msg.setDestination(39058U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("TPDMYAPCSYJUWRLJICIOWHSPEQQXOZMLOSGVNMVVUUBTKBFVBZNKNRIGVLLDOEADIJVKUBXCPINSYWNRZFUTTTFUWBKNZHJKAAFOLQMTGYXUYEKGUAYOXNIVXXLZRHGKWQKHGIEUNCCRMWYTVEASNFPLIMLRTLPXDBKRYWIDMDFHOUDZDFJBAX");

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
    msg.setTimeStamp(0.09915809467437575);
    msg.setSource(34623U);
    msg.setSourceEntity(138U);
    msg.setDestination(9987U);
    msg.setDestinationEntity(207U);
    msg.actions.assign("SIEFJZNZKLBODLJZORWTGUPHCZINVHQJCUWXNASYXEJWQQYMQ");

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
    msg.setTimeStamp(0.5744958783283721);
    msg.setSource(18832U);
    msg.setSourceEntity(142U);
    msg.setDestination(38609U);
    msg.setDestinationEntity(218U);
    msg.button = 149U;
    msg.value = 154U;

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
    msg.setTimeStamp(0.8305326050842037);
    msg.setSource(7876U);
    msg.setSourceEntity(224U);
    msg.setDestination(16365U);
    msg.setDestinationEntity(12U);
    msg.button = 166U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.09862012664538322);
    msg.setSource(9109U);
    msg.setSourceEntity(232U);
    msg.setDestination(40950U);
    msg.setDestinationEntity(207U);
    msg.button = 124U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.2779640181882792);
    msg.setSource(14734U);
    msg.setSourceEntity(37U);
    msg.setDestination(3167U);
    msg.setDestinationEntity(112U);
    msg.op = 181U;
    msg.text.assign("NNYEQPRABRWSZZVSZTASRYXCSZRVVJPLIOJZDXQALZLCOHURGGEPEKAFCMRGFGDGENGIQKATKKLIJFMGJBZKAHVJCKAYNRNYQQHDXANBMUBXKOLIBYWTPSEPJESVJGVIUMQOFIJOPLMWFTVUWOIIBLKY");

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
    msg.setTimeStamp(0.23280837726475456);
    msg.setSource(20152U);
    msg.setSourceEntity(203U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(148U);
    msg.op = 229U;
    msg.text.assign("ERFVODOPBGCTDVTECRKSSDF");

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
    msg.setTimeStamp(0.6216224320871222);
    msg.setSource(3362U);
    msg.setSourceEntity(104U);
    msg.setDestination(189U);
    msg.setDestinationEntity(171U);
    msg.op = 177U;
    msg.text.assign("UAFTEGASIBWIFMPDGRJYWQJZNCXFCIXCWOKZKKNCRPWBURNSUJWYWPJTOPRDTLYBEATMYQBYCNIQXMXVJFXAKBIKVKBIEARIVVFXFMMWPPWPQCLSKKYHUVVEJBZSLFLMASOADFSFWVEAYLUGSZQGHKEGTQUQZPLJOQCLHU");

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
    msg.setTimeStamp(0.8888942214951023);
    msg.setSource(56518U);
    msg.setSourceEntity(167U);
    msg.setDestination(37740U);
    msg.setDestinationEntity(125U);
    msg.op = 95U;
    msg.time_remain = 0.530784969932625;
    msg.sched_time = 0.9554116032075853;

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
    msg.setTimeStamp(0.23594433685820093);
    msg.setSource(20058U);
    msg.setSourceEntity(86U);
    msg.setDestination(56345U);
    msg.setDestinationEntity(175U);
    msg.op = 241U;
    msg.time_remain = 0.524946110981801;
    msg.sched_time = 0.5463867139955648;

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
    msg.setTimeStamp(0.7641078713573304);
    msg.setSource(24596U);
    msg.setSourceEntity(80U);
    msg.setDestination(55275U);
    msg.setDestinationEntity(137U);
    msg.op = 188U;
    msg.time_remain = 0.8643137664789318;
    msg.sched_time = 0.39153441686250556;

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
    msg.setTimeStamp(0.9344966259484745);
    msg.setSource(54292U);
    msg.setSourceEntity(231U);
    msg.setDestination(24953U);
    msg.setDestinationEntity(2U);
    msg.name.assign("GUTYUUNWTOABYDSHJXLVGHQXYLDAAIFVWYDBWUHZLUFOCOQJBGMABKFILCJLSTATMRBQYEHFMDQAZRNTPBCWNNMNVRJLICGPJOBIRAQWGPHEPTCDNUWSQHNFZVJKUDSFIFHQQKVXITOMPEHIFMASMCGQEZYIQCDYSKKPZXEYJSVNWJSXAOVUSALKCLWRTCZ");
    msg.op = 200U;
    msg.sched_time = 0.5715701249817866;

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
    msg.setTimeStamp(0.17397717199099016);
    msg.setSource(24254U);
    msg.setSourceEntity(177U);
    msg.setDestination(23672U);
    msg.setDestinationEntity(168U);
    msg.name.assign("MRFZYJEMWXMAFVZKOIUTLXMFLDOKYXYLJAZPGVMRLKOLPPNTUQWBDLVTHYZEQW");
    msg.op = 22U;
    msg.sched_time = 0.22681661220763816;

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
    msg.setTimeStamp(0.9876372229037872);
    msg.setSource(33068U);
    msg.setSourceEntity(21U);
    msg.setDestination(25336U);
    msg.setDestinationEntity(48U);
    msg.name.assign("JBWNIAXTPAEXYVNXRFHQCBCEFLRMM");
    msg.op = 47U;
    msg.sched_time = 0.08015347946294515;

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
    msg.setTimeStamp(0.2624676120770959);
    msg.setSource(43907U);
    msg.setSourceEntity(50U);
    msg.setDestination(25692U);
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
    msg.setTimeStamp(0.05916789563478775);
    msg.setSource(6738U);
    msg.setSourceEntity(235U);
    msg.setDestination(34680U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.21467341970024734);
    msg.setSource(16925U);
    msg.setSourceEntity(21U);
    msg.setDestination(6513U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.006220412789504137);
    msg.setSource(36650U);
    msg.setSourceEntity(13U);
    msg.setDestination(6618U);
    msg.setDestinationEntity(239U);
    msg.name.assign("NNZLLFAORWPIJDFCOFJSVMGIQGCQDJTFJUZBLROGPYCCNGZWWHGQHTITXUQINCJBOQGDENGOQHJDAIIHHRXPSVSBTANAAJPKVCSZXDAKFWRLBDCVDFDLUAKBMULOHUUTQWSPXMBQPMYFVNVKYUPGJWYLNLSSTGIEXPYLCEEYYVCKRQZDMKXHMUSWMUXV");
    msg.state = 43U;

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
    msg.setTimeStamp(0.7648245672680881);
    msg.setSource(58568U);
    msg.setSourceEntity(40U);
    msg.setDestination(14514U);
    msg.setDestinationEntity(78U);
    msg.name.assign("RXPCSMOFRDOHYXNTRJWUPDIXCMPMLXG");
    msg.state = 229U;

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
    msg.setTimeStamp(0.9824294342091254);
    msg.setSource(56212U);
    msg.setSourceEntity(42U);
    msg.setDestination(4475U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LRHZFOWALWRKMKDWTGMXMIBIACYCPUXBIQGVZPJISDOWXSQYFVGFRTGEHXIYWFBSRSXKOIDQEVFDAWOLXVTNHUSSHMDSYYQNCZMZIRVZNBIHKGFXCLMOURJK");
    msg.state = 21U;

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
    msg.setTimeStamp(0.14479876371127465);
    msg.setSource(25936U);
    msg.setSourceEntity(249U);
    msg.setDestination(18534U);
    msg.setDestinationEntity(224U);
    msg.name.assign("XPQZOJSKUPMQQFJYVDFZHNDGGJLFMLLPURWVAOIGCCHAPPIHVRGWNHDQYLMZRWUSNSAUBSXDLETMXFSWBXMGBCUVWFDZWFPIQXHFJDCKKWYZKUNDJFGCRCVEYHXOFTTSPIXYTQUAHOIHKRENIPVYCQOBWJMBXBWBAAUAIOVMGWPNAKSINJRYREIURSHTKZQMMETTEIZZSLJDMHYEGDLTYZXROEJQESXLLVACOOENG");
    msg.value = 143U;

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
    msg.setTimeStamp(0.6124045765418629);
    msg.setSource(39617U);
    msg.setSourceEntity(78U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(184U);
    msg.name.assign("UMIWJAIGEHCAKFNFRXTVPIJKUVCKGAYB");
    msg.value = 198U;

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
    msg.setTimeStamp(0.3415808342565151);
    msg.setSource(33379U);
    msg.setSourceEntity(65U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(244U);
    msg.name.assign("OFYEETMEYKUVZMGTXRGAWIPJRNORWECYOWGVBNGAJQFAKZLMYDHXTUJBOBSHIFKMWGCBQXTTMPIVXTRLSTHKYCOMXFAMDRJKGMAWXDUXEJJSUKXPUPSHHISPYFFJFZVSDIZHBWGDNSZLLPHJSUXVVREEBZLIDLUMZWWOTYCTRVUNKFTDWVNJQRVXQAQNNYOGIQNH");
    msg.value = 137U;

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
    msg.setTimeStamp(0.6702294874608986);
    msg.setSource(30814U);
    msg.setSourceEntity(82U);
    msg.setDestination(52309U);
    msg.setDestinationEntity(198U);
    msg.name.assign("FISGHBCNJROBYNPXRVLRKZECLKGKCQMZTLBFWTCVWGPGJUTCDPSXPMKNGGDUKSPBYINOIOWSYOCIDDMBYXSHTPLXMBUNUQFUFLBVLHGXWWQXMADWJWJEAFQOVSIXLCZKUZQOHTOQWYYPDEE");

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
    msg.setTimeStamp(0.5097913691830988);
    msg.setSource(1363U);
    msg.setSourceEntity(125U);
    msg.setDestination(30839U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QGWOOPKTIGJTPSVGBOQSQLKWYSWDDAXMDMTIYSFMQOHPTOHEUUUDYSRELPMXRKHYFJYVGZCVBHDPIKCZYLXEESOIVRWFBCOLBCWTRCHWSZYNGPYZXKTFHLMYBCZFUBMXVCCMRBLAOITZNUAQKRPJIXHQBNFFENLSJZRKIHBANEEJWCJWUNRDNTSYVINANJVURLJGSZRCEFXFVPDDK");

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
    msg.setTimeStamp(0.772483861194092);
    msg.setSource(26086U);
    msg.setSourceEntity(182U);
    msg.setDestination(25367U);
    msg.setDestinationEntity(87U);
    msg.name.assign("BYZBHYJRIHBDLNTCTFFIXVMNAWQJPMGWJSKGIZLZADFCZLUJRTIOHGLPMQZPKIWAARUVIDIASHNNVOWWEGJDYUWSBZEQKKJWSLICVIQMDHHCVTZEGKHRQMESKMBBRNX");

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
    msg.setTimeStamp(0.14008671530513306);
    msg.setSource(8297U);
    msg.setSourceEntity(153U);
    msg.setDestination(57080U);
    msg.setDestinationEntity(13U);
    msg.name.assign("MRBWEEGGQKEXPMCYEJHHRAUMKDZZCWOFJFHLYYNTJTDQUXLBMQRFBLOAVDDJECRZXJMTWKCXUNVRNCNWFZFAKGLBGDRQISDMYVPJYQMFVRYEHTGENLTKXAHMJHPSXKWVBMUQFAXAUPHIILIGCUTVDCBPSHLPSOOAOIZNIQBRXSPYEWGBBIWFAVHPOVYSTPCJEQTPLDFZ");
    msg.value = 117U;

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
    msg.setTimeStamp(0.409361183070892);
    msg.setSource(63688U);
    msg.setSourceEntity(254U);
    msg.setDestination(24511U);
    msg.setDestinationEntity(186U);
    msg.name.assign("VVNHMJRYPBCKIFPEAHMPXDUBGUXVXBIUINGVOCPYPFOWVLIIMENABQIUYHLBNHLNUPXJHXNJZFLVFEAFBAZOZGWGKRUFLCMBGJMDDGTLIPTOWGKTFYWYXBKYETSAEREDLKSWKOYBQDCAOQTELHEREQQATJZFQCKVSRMTHSXKFIUSZLINXIVATUXUQSDZYVZ");
    msg.value = 199U;

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
    msg.setTimeStamp(0.7575215243346117);
    msg.setSource(40414U);
    msg.setSourceEntity(195U);
    msg.setDestination(60722U);
    msg.setDestinationEntity(217U);
    msg.name.assign("JQHURCSIGIBVQEKKVKZUNYMD");
    msg.value = 183U;

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
    msg.setTimeStamp(0.44683416355539307);
    msg.setSource(37005U);
    msg.setSourceEntity(134U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(214U);
    msg.id = 132U;
    msg.period = 326068323U;
    msg.duty_cycle = 40512933U;

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
    msg.setTimeStamp(0.4765890233526392);
    msg.setSource(58092U);
    msg.setSourceEntity(227U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(40U);
    msg.id = 214U;
    msg.period = 1126256689U;
    msg.duty_cycle = 2669096182U;

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
    msg.setTimeStamp(0.26107455881242403);
    msg.setSource(59357U);
    msg.setSourceEntity(110U);
    msg.setDestination(41525U);
    msg.setDestinationEntity(125U);
    msg.id = 8U;
    msg.period = 1057573293U;
    msg.duty_cycle = 3369053020U;

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
    msg.setTimeStamp(0.48033283787829195);
    msg.setSource(30728U);
    msg.setSourceEntity(3U);
    msg.setDestination(31002U);
    msg.setDestinationEntity(141U);
    msg.id = 172U;
    msg.period = 3903530956U;
    msg.duty_cycle = 4031328541U;

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
    msg.setTimeStamp(0.6442639419523802);
    msg.setSource(20100U);
    msg.setSourceEntity(122U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(174U);
    msg.id = 114U;
    msg.period = 723575970U;
    msg.duty_cycle = 3464606646U;

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
    msg.setTimeStamp(0.04516854198355824);
    msg.setSource(44901U);
    msg.setSourceEntity(222U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(48U);
    msg.id = 179U;
    msg.period = 3608020616U;
    msg.duty_cycle = 3025916739U;

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
    msg.setTimeStamp(0.7859997140711124);
    msg.setSource(13914U);
    msg.setSourceEntity(16U);
    msg.setDestination(47554U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.5984868533766163;
    msg.lon = 0.4084200913844631;
    msg.height = 0.588751213481918;
    msg.x = 0.14155123328560737;
    msg.y = 0.0723371551506532;
    msg.z = 0.2339103770300549;
    msg.phi = 0.065871398162058;
    msg.theta = 0.949927785750918;
    msg.psi = 0.45357137274202064;
    msg.u = 0.8324961630222664;
    msg.v = 0.18615676476476872;
    msg.w = 0.3117165944115322;
    msg.vx = 0.09211369365996225;
    msg.vy = 0.0535311386650823;
    msg.vz = 0.9990395349737871;
    msg.p = 0.7763818983668082;
    msg.q = 0.8615920432106488;
    msg.r = 0.4808335396354452;
    msg.depth = 0.9950639784554873;
    msg.alt = 0.3476474654016266;

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
    msg.setTimeStamp(0.3566188769962815);
    msg.setSource(17329U);
    msg.setSourceEntity(36U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.2836903715891065;
    msg.lon = 0.7104754718158932;
    msg.height = 0.4302196640818773;
    msg.x = 0.6689619841367643;
    msg.y = 0.5255003315275383;
    msg.z = 0.9760928027875849;
    msg.phi = 0.8149238304230624;
    msg.theta = 0.521582739355925;
    msg.psi = 0.6698083014453254;
    msg.u = 0.6799744263014502;
    msg.v = 0.5649262205136552;
    msg.w = 0.8138768056515147;
    msg.vx = 0.5849747823715463;
    msg.vy = 0.34460872343918736;
    msg.vz = 0.5063485250109349;
    msg.p = 0.9160232535323956;
    msg.q = 0.6481620472209285;
    msg.r = 0.8082422451115047;
    msg.depth = 0.8771564210663008;
    msg.alt = 0.097883290311922;

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
    msg.setTimeStamp(0.3429307342835326);
    msg.setSource(61934U);
    msg.setSourceEntity(192U);
    msg.setDestination(7111U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.6683803869695464;
    msg.lon = 0.4779896305415834;
    msg.height = 0.21364769354647484;
    msg.x = 0.3580689730185681;
    msg.y = 0.9014594555174354;
    msg.z = 0.9120328084130659;
    msg.phi = 0.33113365745697154;
    msg.theta = 0.6734684015581657;
    msg.psi = 0.8667129442434636;
    msg.u = 0.026249661484953668;
    msg.v = 0.23177568453514374;
    msg.w = 0.5390930604132469;
    msg.vx = 0.28872450586104614;
    msg.vy = 0.05823864959397518;
    msg.vz = 0.577335680513165;
    msg.p = 0.06170755840300324;
    msg.q = 0.5508326076840446;
    msg.r = 0.061777472481202356;
    msg.depth = 0.8002422124304044;
    msg.alt = 0.18141708120240152;

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
    msg.setTimeStamp(0.5055752076313298);
    msg.setSource(29381U);
    msg.setSourceEntity(155U);
    msg.setDestination(35709U);
    msg.setDestinationEntity(44U);
    msg.x = 0.5378373077479242;
    msg.y = 0.893038259114709;
    msg.z = 0.9645378214298241;

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
    msg.setTimeStamp(0.5438713801639367);
    msg.setSource(37351U);
    msg.setSourceEntity(88U);
    msg.setDestination(22557U);
    msg.setDestinationEntity(194U);
    msg.x = 0.9616135125677266;
    msg.y = 0.4461195938072352;
    msg.z = 0.11161666830089267;

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
    msg.setTimeStamp(0.39382927369714493);
    msg.setSource(22824U);
    msg.setSourceEntity(131U);
    msg.setDestination(37736U);
    msg.setDestinationEntity(197U);
    msg.x = 0.5269288174032841;
    msg.y = 0.4877323295880326;
    msg.z = 0.7157668466542002;

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
    msg.setTimeStamp(0.8780493330645751);
    msg.setSource(30879U);
    msg.setSourceEntity(34U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(215U);
    msg.value = 0.29500578131257194;

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
    msg.setTimeStamp(0.7221022420522817);
    msg.setSource(10021U);
    msg.setSourceEntity(95U);
    msg.setDestination(33358U);
    msg.setDestinationEntity(161U);
    msg.value = 0.17377887422963967;

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
    msg.setTimeStamp(0.11039472036062714);
    msg.setSource(19048U);
    msg.setSourceEntity(111U);
    msg.setDestination(11765U);
    msg.setDestinationEntity(204U);
    msg.value = 0.23976969868559084;

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
    msg.setTimeStamp(0.25858951456008616);
    msg.setSource(53788U);
    msg.setSourceEntity(89U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(34U);
    msg.value = 0.4338654674348087;

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
    msg.setTimeStamp(0.3119548670265869);
    msg.setSource(12708U);
    msg.setSourceEntity(145U);
    msg.setDestination(17515U);
    msg.setDestinationEntity(56U);
    msg.value = 0.1656656582618492;

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
    msg.setTimeStamp(0.3022100393039001);
    msg.setSource(5253U);
    msg.setSourceEntity(218U);
    msg.setDestination(244U);
    msg.setDestinationEntity(216U);
    msg.value = 0.2765865052402383;

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
    msg.setTimeStamp(0.7989536411977621);
    msg.setSource(38420U);
    msg.setSourceEntity(20U);
    msg.setDestination(14238U);
    msg.setDestinationEntity(31U);
    msg.x = 0.7121257183519939;
    msg.y = 0.2564082368983477;
    msg.z = 0.3481722978982331;
    msg.phi = 0.5044854158182365;
    msg.theta = 0.42643796770891995;
    msg.psi = 0.0664009645977014;
    msg.p = 0.12029630990206786;
    msg.q = 0.816381414447011;
    msg.r = 0.298392756751927;
    msg.u = 0.4369918129958219;
    msg.v = 0.32277943482447025;
    msg.w = 0.6273062870723419;
    msg.bias_psi = 0.7844528993080754;
    msg.bias_r = 0.8846875421471608;

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
    msg.setTimeStamp(0.02507210614709776);
    msg.setSource(38344U);
    msg.setSourceEntity(48U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(65U);
    msg.x = 0.7417652452839597;
    msg.y = 0.03702905598583994;
    msg.z = 0.5336550321302939;
    msg.phi = 0.16158248776303863;
    msg.theta = 0.413051200312637;
    msg.psi = 0.77634517288455;
    msg.p = 0.9355695064863241;
    msg.q = 0.5466546957788778;
    msg.r = 0.011504114863560955;
    msg.u = 0.5914488437456469;
    msg.v = 0.5635796833099271;
    msg.w = 0.7928820768690903;
    msg.bias_psi = 0.9936376518154567;
    msg.bias_r = 0.8813477881799147;

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
    msg.setTimeStamp(0.09500914783742143);
    msg.setSource(5492U);
    msg.setSourceEntity(79U);
    msg.setDestination(47406U);
    msg.setDestinationEntity(18U);
    msg.x = 0.5911905972412014;
    msg.y = 0.9701027284858628;
    msg.z = 0.3227510683530028;
    msg.phi = 0.4347263364927707;
    msg.theta = 0.5288396038706267;
    msg.psi = 0.6393459960820658;
    msg.p = 0.7632503485204156;
    msg.q = 0.8345551533382775;
    msg.r = 0.45633298118788046;
    msg.u = 0.43253795868599154;
    msg.v = 0.984105432143873;
    msg.w = 0.009297923358649318;
    msg.bias_psi = 0.11180625026109103;
    msg.bias_r = 0.45451817861206845;

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
    msg.setTimeStamp(0.5438775656171487);
    msg.setSource(45220U);
    msg.setSourceEntity(191U);
    msg.setDestination(62544U);
    msg.setDestinationEntity(154U);
    msg.bias_psi = 0.9722541695233111;
    msg.bias_r = 0.4002938014832266;
    msg.cog = 0.09211794692378694;
    msg.cyaw = 0.5981357569403991;
    msg.lbl_rej_level = 0.9751572485397227;
    msg.gps_rej_level = 0.4955984486727735;
    msg.custom_x = 0.634038201005653;
    msg.custom_y = 0.9149006543055396;
    msg.custom_z = 0.8363501814561862;

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
    msg.setTimeStamp(0.2100802106150338);
    msg.setSource(13097U);
    msg.setSourceEntity(98U);
    msg.setDestination(52434U);
    msg.setDestinationEntity(123U);
    msg.bias_psi = 0.3481883204595707;
    msg.bias_r = 0.5125811302744155;
    msg.cog = 0.021853105321782307;
    msg.cyaw = 0.3268951242376932;
    msg.lbl_rej_level = 0.28708080574069406;
    msg.gps_rej_level = 0.5494659068977453;
    msg.custom_x = 0.19800387064756397;
    msg.custom_y = 0.03334621247592151;
    msg.custom_z = 0.9886905323983969;

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
    msg.setTimeStamp(0.562213878982176);
    msg.setSource(33642U);
    msg.setSourceEntity(17U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(233U);
    msg.bias_psi = 0.8739752983033678;
    msg.bias_r = 0.16018757947062034;
    msg.cog = 0.160512421200799;
    msg.cyaw = 0.7786825610679847;
    msg.lbl_rej_level = 0.9431949773349908;
    msg.gps_rej_level = 0.8996098257050777;
    msg.custom_x = 0.5960746593455751;
    msg.custom_y = 0.6681715543504516;
    msg.custom_z = 0.6742913126551522;

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
    msg.setTimeStamp(0.3986196364309872);
    msg.setSource(18913U);
    msg.setSourceEntity(53U);
    msg.setDestination(16022U);
    msg.setDestinationEntity(120U);
    msg.utc_time = 0.666234361348286;
    msg.reason = 53U;

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
    msg.setTimeStamp(0.6603706446311323);
    msg.setSource(52836U);
    msg.setSourceEntity(198U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(40U);
    msg.utc_time = 0.8289258308541795;
    msg.reason = 143U;

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
    msg.setTimeStamp(0.6490007510999484);
    msg.setSource(47161U);
    msg.setSourceEntity(57U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(226U);
    msg.utc_time = 0.6047696005293652;
    msg.reason = 107U;

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
    msg.setTimeStamp(0.5659919007653839);
    msg.setSource(25884U);
    msg.setSourceEntity(207U);
    msg.setDestination(49125U);
    msg.setDestinationEntity(20U);
    msg.id = 144U;
    msg.range = 0.757283515671891;
    msg.acceptance = 201U;

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
    msg.setTimeStamp(0.7018549827363588);
    msg.setSource(7717U);
    msg.setSourceEntity(17U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(29U);
    msg.id = 60U;
    msg.range = 0.024571228656608435;
    msg.acceptance = 136U;

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
    msg.setTimeStamp(0.3663258107847196);
    msg.setSource(27320U);
    msg.setSourceEntity(90U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(32U);
    msg.id = 238U;
    msg.range = 0.641766695530319;
    msg.acceptance = 114U;

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
    msg.setTimeStamp(0.2930604574684257);
    msg.setSource(43231U);
    msg.setSourceEntity(222U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(13U);
    msg.type = 114U;
    msg.reason = 81U;
    msg.value = 0.5983046383828803;
    msg.timestep = 0.10298153685041211;

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
    msg.setTimeStamp(0.885344186781304);
    msg.setSource(49939U);
    msg.setSourceEntity(218U);
    msg.setDestination(41704U);
    msg.setDestinationEntity(37U);
    msg.type = 230U;
    msg.reason = 140U;
    msg.value = 0.6065016571572555;
    msg.timestep = 0.42467673910110015;

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
    msg.setTimeStamp(0.6469366774547549);
    msg.setSource(18366U);
    msg.setSourceEntity(12U);
    msg.setDestination(8200U);
    msg.setDestinationEntity(77U);
    msg.type = 254U;
    msg.reason = 216U;
    msg.value = 0.8512267484369189;
    msg.timestep = 0.08857625263506885;

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
    msg.setTimeStamp(0.0966938243742782);
    msg.setSource(40971U);
    msg.setSourceEntity(80U);
    msg.setDestination(528U);
    msg.setDestinationEntity(159U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FJTSQONOMINURVZVUEXXAPZSFKHHACDABLQKGDSOYYXDQTKVPUAPZFAXBGOCEUKVIWTZBSQTRWDIIWWFNLJ");
    tmp_msg_0.lat = 0.7293124126495546;
    tmp_msg_0.lon = 0.6734964875977676;
    tmp_msg_0.depth = 0.5262327592825845;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24083715332343625;
    msg.y = 0.2071618274597954;
    msg.var_x = 0.5915634301592139;
    msg.var_y = 0.7813755870914578;
    msg.distance = 0.3931438345461704;

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
    msg.setTimeStamp(0.08700696988668566);
    msg.setSource(42675U);
    msg.setSourceEntity(89U);
    msg.setDestination(56760U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BHUOIRPAOYDKTDUYNMSSQZKEATFKMGMJYXBDMVC");
    tmp_msg_0.lat = 0.49308913484093797;
    tmp_msg_0.lon = 0.16897314416764175;
    tmp_msg_0.depth = 0.727320840003855;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 125U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2553735101807335;
    msg.y = 0.6499383921006827;
    msg.var_x = 0.9760458048048444;
    msg.var_y = 0.7722962702211358;
    msg.distance = 0.7461045725255475;

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
    msg.setTimeStamp(0.1352313495024614);
    msg.setSource(5774U);
    msg.setSourceEntity(90U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(16U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RSAYRCNJLJPJGNJFNUBZBFDDVDKIEQHVYDAKJMXLJSIHNJTCZJHEYWABTULQRQHSYDLQYTVKAVOPOVSXVAEMXEOGBIYXPMSELLNPPHBKTGTVQYGINTFRBFTCIZSPHSLQDYSGMOGUMWXCOVTZPGILWZUGZMWKGXOOQNCPMFOY");
    tmp_msg_0.lat = 0.7284122058210043;
    tmp_msg_0.lon = 0.8879683337497764;
    tmp_msg_0.depth = 0.2981237957228362;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 48U;
    tmp_msg_0.transponder_delay = 22U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7691515745600629;
    msg.y = 0.8742013863130402;
    msg.var_x = 0.08317273592569474;
    msg.var_y = 0.47480865270910566;
    msg.distance = 0.31062976519440466;

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
    msg.setTimeStamp(0.7266133086746442);
    msg.setSource(2825U);
    msg.setSourceEntity(77U);
    msg.setDestination(11359U);
    msg.setDestinationEntity(18U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.47884417019621917);
    msg.setSource(14574U);
    msg.setSourceEntity(165U);
    msg.setDestination(39818U);
    msg.setDestinationEntity(67U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.7190994632291811);
    msg.setSource(22690U);
    msg.setSourceEntity(127U);
    msg.setDestination(54236U);
    msg.setDestinationEntity(82U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.15232428982804802);
    msg.setSource(6822U);
    msg.setSourceEntity(140U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(24U);
    msg.x = 0.004259014461325594;
    msg.y = 0.351173718844643;
    msg.z = 0.23840102334309177;

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
    msg.setTimeStamp(0.05682781688058236);
    msg.setSource(9663U);
    msg.setSourceEntity(37U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(189U);
    msg.x = 0.8268628584140056;
    msg.y = 0.6793644756061817;
    msg.z = 0.17193009479395127;

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
    msg.setTimeStamp(0.17407294030049947);
    msg.setSource(30191U);
    msg.setSourceEntity(154U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(10U);
    msg.x = 0.31074558770075644;
    msg.y = 0.36048665701327254;
    msg.z = 0.44259508407261383;

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
    msg.setTimeStamp(0.9215689677294062);
    msg.setSource(20125U);
    msg.setSourceEntity(96U);
    msg.setDestination(52626U);
    msg.setDestinationEntity(0U);
    msg.va = 0.9603128380401686;
    msg.aoa = 0.9811600379384087;
    msg.ssa = 0.8723937117122832;

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
    msg.setTimeStamp(0.6424926581471282);
    msg.setSource(63623U);
    msg.setSourceEntity(169U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(234U);
    msg.va = 0.6704673388368806;
    msg.aoa = 0.24269952977877607;
    msg.ssa = 0.052848472914906686;

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
    msg.setTimeStamp(0.19626080195025608);
    msg.setSource(56768U);
    msg.setSourceEntity(32U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(191U);
    msg.va = 0.18332619151433882;
    msg.aoa = 0.9547188720237128;
    msg.ssa = 0.46271820617727843;

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
    IMC::Power msg;
    msg.setTimeStamp(0.45634891515117093);
    msg.setSource(22235U);
    msg.setSourceEntity(213U);
    msg.setDestination(42793U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7481744085655168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.17650427544522374);
    msg.setSource(18752U);
    msg.setSourceEntity(220U);
    msg.setDestination(34794U);
    msg.setDestinationEntity(28U);
    msg.value = 0.9045665319143389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Power msg;
    msg.setTimeStamp(0.9432382222455512);
    msg.setSource(23890U);
    msg.setSourceEntity(184U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(193U);
    msg.value = 0.28360199900686267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Power #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3800793080270243);
    msg.setSource(37495U);
    msg.setSourceEntity(150U);
    msg.setDestination(58074U);
    msg.setDestinationEntity(35U);
    msg.value = 0.12548922984553623;

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
    msg.setTimeStamp(0.2853177406271742);
    msg.setSource(64767U);
    msg.setSourceEntity(173U);
    msg.setDestination(59608U);
    msg.setDestinationEntity(10U);
    msg.value = 0.32279198297903655;

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
    msg.setTimeStamp(0.09627144062609883);
    msg.setSource(51635U);
    msg.setSourceEntity(244U);
    msg.setDestination(35675U);
    msg.setDestinationEntity(220U);
    msg.value = 0.2634245607489163;

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
    msg.setTimeStamp(0.40092451136055973);
    msg.setSource(1264U);
    msg.setSourceEntity(44U);
    msg.setDestination(50537U);
    msg.setDestinationEntity(149U);
    msg.value = 0.013236921894170361;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.2955682986069954);
    msg.setSource(18866U);
    msg.setSourceEntity(158U);
    msg.setDestination(28629U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7219755834942609;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.6861446682688048);
    msg.setSource(10123U);
    msg.setSourceEntity(19U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7204661417791796;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.9433700831132591);
    msg.setSource(8991U);
    msg.setSourceEntity(139U);
    msg.setDestination(7149U);
    msg.setDestinationEntity(99U);
    msg.value = 0.32308298050204876;
    msg.speed_units = 179U;

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
    msg.setTimeStamp(0.8750174912558505);
    msg.setSource(53211U);
    msg.setSourceEntity(165U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7119923737064564;
    msg.speed_units = 139U;

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
    msg.setTimeStamp(0.8997948897960318);
    msg.setSource(4370U);
    msg.setSourceEntity(178U);
    msg.setDestination(16539U);
    msg.setDestinationEntity(34U);
    msg.value = 0.943640186188354;
    msg.speed_units = 4U;

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
    msg.setTimeStamp(0.6599878906526285);
    msg.setSource(37881U);
    msg.setSourceEntity(176U);
    msg.setDestination(3946U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8984264930460761;

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
    msg.setTimeStamp(0.8019563377859344);
    msg.setSource(41226U);
    msg.setSourceEntity(148U);
    msg.setDestination(49137U);
    msg.setDestinationEntity(231U);
    msg.value = 0.30357694335440066;

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
    msg.setTimeStamp(0.35331649004197796);
    msg.setSource(47286U);
    msg.setSourceEntity(108U);
    msg.setDestination(53886U);
    msg.setDestinationEntity(47U);
    msg.value = 0.36678587880808833;

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
    msg.setTimeStamp(0.4544967551806697);
    msg.setSource(63638U);
    msg.setSourceEntity(37U);
    msg.setDestination(27993U);
    msg.setDestinationEntity(119U);
    msg.value = 0.8785596003052688;

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
    msg.setTimeStamp(0.042586243852569816);
    msg.setSource(2515U);
    msg.setSourceEntity(27U);
    msg.setDestination(44559U);
    msg.setDestinationEntity(190U);
    msg.value = 0.22147600646244492;

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
    msg.setTimeStamp(0.063424015624724);
    msg.setSource(12660U);
    msg.setSourceEntity(15U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6265476744684393;

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
    msg.setTimeStamp(0.9918109487742557);
    msg.setSource(10205U);
    msg.setSourceEntity(105U);
    msg.setDestination(27941U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5050898018705784;

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
    msg.setTimeStamp(0.12655709218839228);
    msg.setSource(8292U);
    msg.setSourceEntity(186U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4217136410586658;

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
    msg.setTimeStamp(0.4202077147971025);
    msg.setSource(63214U);
    msg.setSourceEntity(64U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(112U);
    msg.value = 0.03695279203260582;

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
    msg.setTimeStamp(0.9899532726732011);
    msg.setSource(45644U);
    msg.setSourceEntity(76U);
    msg.setDestination(56307U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 1228365504U;
    msg.start_lat = 0.5886047906454109;
    msg.start_lon = 0.8688076805910094;
    msg.start_z = 0.5922649520957946;
    msg.start_z_units = 191U;
    msg.end_lat = 0.9839733769706449;
    msg.end_lon = 0.5726201965317459;
    msg.end_z = 0.5757693389688835;
    msg.end_z_units = 46U;
    msg.speed = 0.7913630220360339;
    msg.speed_units = 231U;
    msg.lradius = 0.32915879382294466;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.6481380015177327);
    msg.setSource(64538U);
    msg.setSourceEntity(138U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 2740287002U;
    msg.start_lat = 0.9550407522309248;
    msg.start_lon = 0.4552526086101737;
    msg.start_z = 0.747228518112658;
    msg.start_z_units = 244U;
    msg.end_lat = 0.48899652781436886;
    msg.end_lon = 0.6979524182269402;
    msg.end_z = 0.0861977435766551;
    msg.end_z_units = 77U;
    msg.speed = 0.35435545981465555;
    msg.speed_units = 13U;
    msg.lradius = 0.08894424455682193;
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
    msg.setTimeStamp(0.49119472670922515);
    msg.setSource(8510U);
    msg.setSourceEntity(254U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(147U);
    msg.path_ref = 1921506499U;
    msg.start_lat = 0.85474076485709;
    msg.start_lon = 0.9328353069632838;
    msg.start_z = 0.9966664859269698;
    msg.start_z_units = 122U;
    msg.end_lat = 0.032800267269868066;
    msg.end_lon = 0.05073604136004073;
    msg.end_z = 0.7328065974773942;
    msg.end_z_units = 88U;
    msg.speed = 0.6222637914957997;
    msg.speed_units = 165U;
    msg.lradius = 0.25016373389442415;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.016751706310693337);
    msg.setSource(5520U);
    msg.setSourceEntity(74U);
    msg.setDestination(17771U);
    msg.setDestinationEntity(34U);
    msg.x = 0.3452983097426501;
    msg.y = 0.2759550062700008;
    msg.z = 0.8733751646108647;
    msg.k = 0.9832547879065983;
    msg.m = 0.6542325896348015;
    msg.n = 0.8655755221886807;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.5072657693351188);
    msg.setSource(45155U);
    msg.setSourceEntity(100U);
    msg.setDestination(20586U);
    msg.setDestinationEntity(63U);
    msg.x = 0.29610216612291285;
    msg.y = 0.44588931035946455;
    msg.z = 0.7928097271310977;
    msg.k = 0.24238056815519027;
    msg.m = 0.4971879504535074;
    msg.n = 0.5607128908080471;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.594384581053051);
    msg.setSource(344U);
    msg.setSourceEntity(21U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(181U);
    msg.x = 0.6632670784331851;
    msg.y = 0.35505187624216916;
    msg.z = 0.5769392612558351;
    msg.k = 0.7009818423873188;
    msg.m = 0.9629763825917519;
    msg.n = 0.9343436910973728;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.3859432838999024);
    msg.setSource(28975U);
    msg.setSourceEntity(29U);
    msg.setDestination(64121U);
    msg.setDestinationEntity(176U);
    msg.value = 0.04942906096299804;

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
    msg.setTimeStamp(0.544789632746265);
    msg.setSource(9856U);
    msg.setSourceEntity(55U);
    msg.setDestination(3449U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9517555584600639;

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
    msg.setTimeStamp(0.26808883429057107);
    msg.setSource(63077U);
    msg.setSourceEntity(147U);
    msg.setDestination(1025U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6231108517248819;

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
    msg.setTimeStamp(0.5554867823044872);
    msg.setSource(10878U);
    msg.setSourceEntity(155U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(217U);
    msg.u = 0.5092248278313019;
    msg.v = 0.5649599577615327;
    msg.w = 0.14258619155029784;
    msg.p = 0.018782683130079247;
    msg.q = 0.3422636595292059;
    msg.r = 0.4427436554340035;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.6034810303727881);
    msg.setSource(23388U);
    msg.setSourceEntity(220U);
    msg.setDestination(30516U);
    msg.setDestinationEntity(43U);
    msg.u = 0.7854224168173369;
    msg.v = 0.9646101852556677;
    msg.w = 0.2831951787990008;
    msg.p = 0.25332327205879035;
    msg.q = 0.9544194064056064;
    msg.r = 0.9421124531553425;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.1791214876569408);
    msg.setSource(40759U);
    msg.setSourceEntity(156U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(226U);
    msg.u = 0.49693467447463524;
    msg.v = 0.958809605146946;
    msg.w = 0.009225927150988245;
    msg.p = 0.9649400864341514;
    msg.q = 0.766045781925534;
    msg.r = 0.6323252560349454;
    msg.flags = 36U;

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
    msg.setTimeStamp(0.07668580154959603);
    msg.setSource(29726U);
    msg.setSourceEntity(146U);
    msg.setDestination(40256U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 3713361447U;
    msg.start_lat = 0.41914948122109563;
    msg.start_lon = 0.8542298030273494;
    msg.start_z = 0.4791607317351684;
    msg.start_z_units = 67U;
    msg.end_lat = 0.8408323599979252;
    msg.end_lon = 0.7955123005109261;
    msg.end_z = 0.017541203690402796;
    msg.end_z_units = 234U;
    msg.lradius = 0.923242136291928;
    msg.flags = 166U;
    msg.x = 0.3139986970961678;
    msg.y = 0.3676668776351688;
    msg.z = 0.29783930350611143;
    msg.vx = 0.9245375825194727;
    msg.vy = 0.42859972019173387;
    msg.vz = 0.4813597240767149;
    msg.course_error = 0.11678997955370407;
    msg.eta = 48136U;

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
    msg.setTimeStamp(0.12628225172994068);
    msg.setSource(7222U);
    msg.setSourceEntity(198U);
    msg.setDestination(25541U);
    msg.setDestinationEntity(195U);
    msg.path_ref = 12053449U;
    msg.start_lat = 0.9038163957262384;
    msg.start_lon = 0.9078089996749127;
    msg.start_z = 0.2893221603643441;
    msg.start_z_units = 164U;
    msg.end_lat = 0.6330077485074648;
    msg.end_lon = 0.48320690981932146;
    msg.end_z = 0.007585637840449633;
    msg.end_z_units = 68U;
    msg.lradius = 0.9083900924497234;
    msg.flags = 202U;
    msg.x = 0.706458012468922;
    msg.y = 0.9611643053741276;
    msg.z = 0.07152742490047259;
    msg.vx = 0.5842917355538758;
    msg.vy = 0.27520258729146574;
    msg.vz = 0.9318599446143957;
    msg.course_error = 0.21356865079231957;
    msg.eta = 46306U;

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
    msg.setTimeStamp(0.3974940227247893);
    msg.setSource(12147U);
    msg.setSourceEntity(166U);
    msg.setDestination(6217U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 1408546815U;
    msg.start_lat = 0.2090469395682033;
    msg.start_lon = 0.6059644194681647;
    msg.start_z = 0.2936385895476581;
    msg.start_z_units = 190U;
    msg.end_lat = 0.8605917536072785;
    msg.end_lon = 0.21549393767257108;
    msg.end_z = 0.42209864680937825;
    msg.end_z_units = 7U;
    msg.lradius = 0.32892542415759607;
    msg.flags = 142U;
    msg.x = 0.24814419907433516;
    msg.y = 0.8879024660391844;
    msg.z = 0.4100766394398675;
    msg.vx = 0.6881408324801437;
    msg.vy = 0.03962245731215419;
    msg.vz = 0.034571045161510106;
    msg.course_error = 0.6279164607011319;
    msg.eta = 38898U;

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
    msg.setTimeStamp(0.8277203698135192);
    msg.setSource(29710U);
    msg.setSourceEntity(218U);
    msg.setDestination(16267U);
    msg.setDestinationEntity(245U);
    msg.k = 0.30672535228897757;
    msg.m = 0.855827179192052;
    msg.n = 0.7264638239752449;

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
    msg.setTimeStamp(0.6862810799128238);
    msg.setSource(33330U);
    msg.setSourceEntity(208U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(129U);
    msg.k = 0.06769897983292172;
    msg.m = 0.38133612412501494;
    msg.n = 0.5089933070579724;

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
    msg.setTimeStamp(0.9523493049945424);
    msg.setSource(49971U);
    msg.setSourceEntity(211U);
    msg.setDestination(59210U);
    msg.setDestinationEntity(96U);
    msg.k = 0.9677676318763739;
    msg.m = 0.8931702046703742;
    msg.n = 0.602891203823852;

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
    msg.setTimeStamp(0.48100853726531);
    msg.setSource(39428U);
    msg.setSourceEntity(88U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(16U);
    msg.p = 0.019096563666935795;
    msg.i = 0.2327160493821694;
    msg.d = 0.9904134993854121;
    msg.a = 0.29469049812697334;

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
    msg.setTimeStamp(0.00699000330929378);
    msg.setSource(32144U);
    msg.setSourceEntity(169U);
    msg.setDestination(44099U);
    msg.setDestinationEntity(249U);
    msg.p = 0.5983339809953037;
    msg.i = 0.5874110932214931;
    msg.d = 0.7877192083930435;
    msg.a = 0.4618441128444857;

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
    msg.setTimeStamp(0.8019443563031889);
    msg.setSource(26655U);
    msg.setSourceEntity(236U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(207U);
    msg.p = 0.39865638501598133;
    msg.i = 0.23256337458622955;
    msg.d = 0.9428107336374163;
    msg.a = 0.07021857834448686;

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
    msg.setTimeStamp(0.9315139867224929);
    msg.setSource(17846U);
    msg.setSourceEntity(212U);
    msg.setDestination(32545U);
    msg.setDestinationEntity(181U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.6660894340068041);
    msg.setSource(52644U);
    msg.setSourceEntity(57U);
    msg.setDestination(22178U);
    msg.setDestinationEntity(32U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.7721596005807785);
    msg.setSource(48907U);
    msg.setSourceEntity(99U);
    msg.setDestination(17227U);
    msg.setDestinationEntity(72U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.8710126332614957);
    msg.setSource(40626U);
    msg.setSourceEntity(55U);
    msg.setDestination(50318U);
    msg.setDestinationEntity(73U);
    msg.x = 0.08887014959520378;
    msg.y = 0.8097489292294336;
    msg.z = 0.2302236805065867;
    msg.vx = 0.2785555675140089;
    msg.vy = 0.026084855966307385;
    msg.vz = 0.569213404948365;
    msg.ax = 0.6850161647606432;
    msg.ay = 0.08626424487590623;
    msg.az = 0.3921647583991148;
    msg.flags = 44038U;

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
    msg.setTimeStamp(0.1178057233318548);
    msg.setSource(32806U);
    msg.setSourceEntity(61U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(23U);
    msg.x = 0.5333843253986915;
    msg.y = 0.33916545877465265;
    msg.z = 0.5186659681206119;
    msg.vx = 0.7710090861952829;
    msg.vy = 0.6998960098896078;
    msg.vz = 0.8124468656454571;
    msg.ax = 0.5821278672696689;
    msg.ay = 0.4613228160171666;
    msg.az = 0.33825628375791683;
    msg.flags = 59677U;

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
    msg.setTimeStamp(0.5208765991016516);
    msg.setSource(23143U);
    msg.setSourceEntity(13U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(72U);
    msg.x = 0.7455670312413685;
    msg.y = 0.882496610240777;
    msg.z = 0.7800731415644829;
    msg.vx = 0.7592966937359813;
    msg.vy = 0.6569052058438322;
    msg.vz = 0.9622785165527713;
    msg.ax = 0.98090058340197;
    msg.ay = 0.4336518187548012;
    msg.az = 0.3983224993803106;
    msg.flags = 19933U;

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
    msg.setTimeStamp(0.3834523610248727);
    msg.setSource(9316U);
    msg.setSourceEntity(37U);
    msg.setDestination(47608U);
    msg.setDestinationEntity(213U);
    msg.value = 0.03132718057626782;

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
    msg.setTimeStamp(0.029144109820036346);
    msg.setSource(63667U);
    msg.setSourceEntity(150U);
    msg.setDestination(58519U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3577865602500333;

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
    msg.setTimeStamp(0.9957815281585255);
    msg.setSource(53619U);
    msg.setSourceEntity(219U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7409488186888972;

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
    msg.setTimeStamp(0.3364057151066584);
    msg.setSource(9910U);
    msg.setSourceEntity(65U);
    msg.setDestination(33226U);
    msg.setDestinationEntity(35U);
    msg.timeout = 43930U;
    msg.lat = 0.4620065449405406;
    msg.lon = 0.5973161242901827;
    msg.z = 0.47582219963372596;
    msg.z_units = 243U;
    msg.speed = 0.7657463119438306;
    msg.speed_units = 243U;
    msg.roll = 0.6870615749707676;
    msg.pitch = 0.8648238677901235;
    msg.yaw = 0.15731647931306947;
    msg.custom.assign("XMMBCTIVJBGZVIAULTOAMXSMTJSAQBRUROXSDNHUBTUIZDOZVQMHYNNIKAYZDKDRYJNIDKHPKYZOAHHLGPOJEVFPFXOGINTAXEDPQWRKMPLJUQAIYYCFWGNEDHIBKXWYISKSPNDPJFZWREOGCWBZQFHGEJEMBDHZVGKTLKUGHBCARCCCSFNQGZEXVWCUWYMVPBNFKROWIAXNRRXTMLVTLT");

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
    msg.setTimeStamp(0.6625812912768277);
    msg.setSource(16296U);
    msg.setSourceEntity(226U);
    msg.setDestination(30768U);
    msg.setDestinationEntity(157U);
    msg.timeout = 51327U;
    msg.lat = 0.15671511396366145;
    msg.lon = 0.48799251516612696;
    msg.z = 0.7462677893587298;
    msg.z_units = 82U;
    msg.speed = 0.1026849249955688;
    msg.speed_units = 22U;
    msg.roll = 0.4157556665397193;
    msg.pitch = 0.6040085005741571;
    msg.yaw = 0.9968987662812159;
    msg.custom.assign("EWGKMYNXJFLVCYBKNOVEEJUEEQCSGPKMWZKLLPDXLIJUDOFYXULBNJHLHOPSSFAPQWOPPAZJCZFLCZNRXXAUYWRBHMSFTVVEBYMSSJQQUTYYDCNVDUZFEOTTHMWSJCGWIYKIBFVKTAQQMDUHDZSQAZDPJUCFNHNOGNRTDLTOBAN");

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
    msg.setTimeStamp(0.8228010506208852);
    msg.setSource(44590U);
    msg.setSourceEntity(63U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(187U);
    msg.timeout = 8307U;
    msg.lat = 0.56720516701531;
    msg.lon = 0.21961084303323042;
    msg.z = 0.916403246566102;
    msg.z_units = 226U;
    msg.speed = 0.8037739022451831;
    msg.speed_units = 105U;
    msg.roll = 0.2325926886098627;
    msg.pitch = 0.9143244321272501;
    msg.yaw = 0.7023445699430545;
    msg.custom.assign("YZQROAAXJLBXRWNSHWKKEXJDDPYALIXLRBKYJCHENITVUMDGMJOCXWFALURIGAQYFSRSOAIGQYCWEKUEEDOQDHFIBHHZTVOBZPRELUVFVGBMFZZMYAPBNJXTKZIVR");

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
    msg.setTimeStamp(0.9607970318988145);
    msg.setSource(39419U);
    msg.setSourceEntity(189U);
    msg.setDestination(6015U);
    msg.setDestinationEntity(19U);
    msg.timeout = 48079U;
    msg.lat = 0.6841214312241979;
    msg.lon = 0.9642040705095312;
    msg.z = 0.22421123041780355;
    msg.z_units = 87U;
    msg.speed = 0.37626467402857566;
    msg.speed_units = 64U;
    msg.duration = 46265U;
    msg.radius = 0.06335582427032016;
    msg.flags = 137U;
    msg.custom.assign("HNOKTARWVJWQXHBMPDGVWAREPLVAMNHXBJEVHLEHGSMFRXNDSQLDSGAJCTOUKBQFLZFPDIUYMZWVFNIXLUJMYZONYNDAPGCLUQOTEQEDSEFIZTPJJWILEXDOKKAOQZPRVFXSGUQCCTJTJWVBYYTKRYDNTAZRIRBMYWYXWANXZESVASBQBGYKKOD");

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
    msg.setTimeStamp(0.43545327772338216);
    msg.setSource(4038U);
    msg.setSourceEntity(151U);
    msg.setDestination(44510U);
    msg.setDestinationEntity(97U);
    msg.timeout = 52422U;
    msg.lat = 0.09216102785981006;
    msg.lon = 0.7970002415837403;
    msg.z = 0.07603159060929199;
    msg.z_units = 90U;
    msg.speed = 0.5602841148662693;
    msg.speed_units = 117U;
    msg.duration = 42063U;
    msg.radius = 0.1848734068976764;
    msg.flags = 151U;
    msg.custom.assign("LSOOEFKWJQTVGQSYIRHSJFVRRWFNPPTJLACMSSFHXKMWOUEOWNHVFBRDERDLXIACMNNGJVCWYPJBLIJQJCKPCTRFASKMZMZGYQWHMYXBPEZICGKHLACLQGLTHFSNUYPBXWPVCOPRZGTUWVAGGBFEIOFEQVDZM");

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
    msg.setTimeStamp(0.4520843415338621);
    msg.setSource(1939U);
    msg.setSourceEntity(134U);
    msg.setDestination(49833U);
    msg.setDestinationEntity(250U);
    msg.timeout = 25967U;
    msg.lat = 0.39516310877906746;
    msg.lon = 0.4138792345238166;
    msg.z = 0.18815510283050607;
    msg.z_units = 27U;
    msg.speed = 0.6766626789078719;
    msg.speed_units = 210U;
    msg.duration = 10385U;
    msg.radius = 0.06785469173614278;
    msg.flags = 199U;
    msg.custom.assign("BCDWGMDXPYQLMVAJCHTTCIRWENMFURKAFGIKJIBGCQAVEFFZJJIUZIGBNQJOUYZMWEXLKYXKURJZOQMVSFXXQXW");

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
    msg.setTimeStamp(0.016459616513727515);
    msg.setSource(29053U);
    msg.setSourceEntity(98U);
    msg.setDestination(9406U);
    msg.setDestinationEntity(54U);
    msg.custom.assign("KPZNMXYHFRASIWDJDPPZMERHNCIWOGTQIGUROJVPHVZWNMXBLFKKOHXNJUYATYUPOOEEGMNMLSYZPDB");

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
    msg.setTimeStamp(0.039916437366243396);
    msg.setSource(5699U);
    msg.setSourceEntity(88U);
    msg.setDestination(20381U);
    msg.setDestinationEntity(54U);
    msg.custom.assign("SJUKCIVFEGIZVXYAVWHHZCCIFPHVJDBLWWUJXQHMIRIXAMHAHUXAHLTPTWJQSNRBUKYNUIYEFQDGOLFRACKCXAQXTEQGSYBTWTOWNGLGUPGEPBVCBZPNLFKLOWEQZCYWXCTMDJEWORZZJFGNAQPDFPLNRDQISJRMVSEYIOPKKBRCNLEVDGABSKCZSJFNBXLMYJOHDKBYSUXFYLVO");

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
    msg.setTimeStamp(0.2974240009370872);
    msg.setSource(12850U);
    msg.setSourceEntity(58U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(112U);
    msg.custom.assign("KDRQMDTPDRESBMQLGTZVFWHAJPELDWWHZZMKJCIXFYACUHUJJOIAMSUCLTBFZCFPHKGGQEQYNUSFBVXEXAWPYRHOEKLZFYCRIMZBAZNSYKIJCGBOTAXTGAMFGMRIWCJKCOSVBBESYNUDFIHUQYOUGORUZJBALNKSVDGQMRLKFDXVKFCTIPTXDJPTPLTAWLWJUVXWGEYKQRYEBJONQLSVHNXVAQXDVYOCHERBMNXWQNTILIPSDZEO");

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
    msg.setTimeStamp(0.6921415603059456);
    msg.setSource(34284U);
    msg.setSourceEntity(200U);
    msg.setDestination(40360U);
    msg.setDestinationEntity(136U);
    msg.timeout = 4721U;
    msg.lat = 0.5958538580714503;
    msg.lon = 0.40479911720673956;
    msg.z = 0.41770445321202687;
    msg.z_units = 140U;
    msg.duration = 64014U;
    msg.speed = 0.5987471263001022;
    msg.speed_units = 184U;
    msg.type = 12U;
    msg.radius = 0.6116869144940763;
    msg.length = 0.6773503605754916;
    msg.bearing = 0.08107079528276029;
    msg.direction = 193U;
    msg.custom.assign("KACHSHCUOMIWJYBPGFQRBRAIFGRXAPODHUGTVCPZQMYFYZOJFWQPPTVPMOAYPAHMQXLVZCAIQURLQBCDXCZQNXYGNGJGLULTIQMOMNWEHHZCXXJGBGTFAEZVGMFSWEEGFHVHKALQD");

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
    msg.setTimeStamp(0.3088969705739527);
    msg.setSource(60495U);
    msg.setSourceEntity(101U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(158U);
    msg.timeout = 43924U;
    msg.lat = 0.6125591484550046;
    msg.lon = 0.4456145121405377;
    msg.z = 0.33407780518875796;
    msg.z_units = 124U;
    msg.duration = 26338U;
    msg.speed = 0.037955979229063797;
    msg.speed_units = 157U;
    msg.type = 182U;
    msg.radius = 0.9435002333149486;
    msg.length = 0.323746064057033;
    msg.bearing = 0.983353684397721;
    msg.direction = 62U;
    msg.custom.assign("RQYMEOPHEQLVCNZP");

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
    msg.setTimeStamp(0.011910309084074644);
    msg.setSource(49468U);
    msg.setSourceEntity(110U);
    msg.setDestination(11463U);
    msg.setDestinationEntity(252U);
    msg.timeout = 489U;
    msg.lat = 0.13525183279827346;
    msg.lon = 0.5545529488528029;
    msg.z = 0.1945741194914703;
    msg.z_units = 112U;
    msg.duration = 48602U;
    msg.speed = 0.10257554900567767;
    msg.speed_units = 167U;
    msg.type = 109U;
    msg.radius = 0.6160515132683695;
    msg.length = 0.5707467246104976;
    msg.bearing = 0.5699624674669118;
    msg.direction = 139U;
    msg.custom.assign("TAPFFHALFSKUUYGXL");

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
    msg.setTimeStamp(0.9341544889073798);
    msg.setSource(20270U);
    msg.setSourceEntity(81U);
    msg.setDestination(40142U);
    msg.setDestinationEntity(118U);
    msg.duration = 13805U;
    msg.custom.assign("GARYXMFNLICXVUVCDDUUYPYPHHHBGCSDVVGMAQDUNORIBLEQJDPKFWMLGNXQSSRHBUHMP");

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
    msg.setTimeStamp(0.8738537713329931);
    msg.setSource(42162U);
    msg.setSourceEntity(181U);
    msg.setDestination(47038U);
    msg.setDestinationEntity(184U);
    msg.duration = 40877U;
    msg.custom.assign("PXGGYFPYWPFABDCJOXUYEHZXLRXFMEKWVAYJFUMVIRVOHBEFOJXIIQFZA");

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
    msg.setTimeStamp(0.8696913501391653);
    msg.setSource(59592U);
    msg.setSourceEntity(4U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(146U);
    msg.duration = 50834U;
    msg.custom.assign("RQRSHKNQCJBLTFADXUMPQNMOJAZWPYVXFFXLPBGMVROPDUZDLCMZIOASXGIQBMYFXRSUKRJRRUYSSMKOJGAWADVIETJZVNIJCVNRBSDFLNTOGEHEOWYCTDU");

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
    msg.setTimeStamp(0.8199862875449827);
    msg.setSource(27130U);
    msg.setSourceEntity(133U);
    msg.setDestination(18493U);
    msg.setDestinationEntity(105U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5073952143132883;
    msg.control.set(tmp_msg_0);
    msg.duration = 45848U;
    msg.custom.assign("SEUOYMWYGQXTGZRVLVFEJKECHPCTYGQNOLMHAKPKZNIDZLONSYLDAJBEWWPXVFAZJYWHQCAASIXZOARGSXR");

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
    msg.setTimeStamp(0.3774966115973839);
    msg.setSource(795U);
    msg.setSourceEntity(90U);
    msg.setDestination(42841U);
    msg.setDestinationEntity(97U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.9305615814185335;
    msg.control.set(tmp_msg_0);
    msg.duration = 63102U;
    msg.custom.assign("ABDIWAMGMQFSZMKWKOFUKWEOFBIFHLMEFGJYEIBPRJGXPHINAZPDYTXRKHLLNVQFHUUOYKVEAPI");

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
    msg.setTimeStamp(0.02126741492653228);
    msg.setSource(48726U);
    msg.setSourceEntity(31U);
    msg.setDestination(32106U);
    msg.setDestinationEntity(140U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.6326136958440625;
    msg.control.set(tmp_msg_0);
    msg.duration = 7076U;
    msg.custom.assign("LVRFIBMJGDNZDDOYEWVSNOFAUZACPMDAYOGUZWPSMLCIWRGZOHGJJOVVGESQOZHJAGJLWYTJBFCURDDBXBJBQCNIBHQJLDYYUQQDVSMHFVFXWHMOKDTMYKBSDCOKASAVQZFXNVPIMZINEEPPYIAUFSSZRTPGYPLNGKURTWTXOEG");

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
    msg.setTimeStamp(0.8342977440977177);
    msg.setSource(56549U);
    msg.setSourceEntity(198U);
    msg.setDestination(58843U);
    msg.setDestinationEntity(46U);
    msg.timeout = 27350U;
    msg.lat = 0.8138960589718145;
    msg.lon = 0.46244305217525694;
    msg.z = 0.08967182636259874;
    msg.z_units = 156U;
    msg.speed = 0.07752248975021792;
    msg.speed_units = 35U;
    msg.bearing = 0.772237845778108;
    msg.cross_angle = 0.11197545445501478;
    msg.width = 0.6279115557911437;
    msg.length = 0.45692643084401485;
    msg.hstep = 0.19929143186381126;
    msg.coff = 199U;
    msg.alternation = 143U;
    msg.flags = 12U;
    msg.custom.assign("WSGVBYGLJJBCVHUCIZBXFAAHWLTOQQGMKOCMMKGHQQGUZNRXYTGJNRTMFFPAGFZGRUVSJKTHWSILQYPIPMZNLVARFCWQSFWHQAYYUJSKDCSLEKOTYLHARAUIADXSWQVRQBDXNBCDFNPXYBOZDGKSQXERCTJNZJXHLIMNTAJICUPDWYXRLJDEOLDGZXFEHYEMKNPKXYH");

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
    msg.setTimeStamp(0.682922440312403);
    msg.setSource(16156U);
    msg.setSourceEntity(124U);
    msg.setDestination(17803U);
    msg.setDestinationEntity(230U);
    msg.timeout = 3446U;
    msg.lat = 0.5363025077238399;
    msg.lon = 0.7228133532413079;
    msg.z = 0.7317304689805106;
    msg.z_units = 181U;
    msg.speed = 0.026072122545716225;
    msg.speed_units = 246U;
    msg.bearing = 0.8536587778601712;
    msg.cross_angle = 0.1426684707763447;
    msg.width = 0.019229931357035768;
    msg.length = 0.5400426733000692;
    msg.hstep = 0.6672332508002117;
    msg.coff = 68U;
    msg.alternation = 87U;
    msg.flags = 141U;
    msg.custom.assign("TOUEZLHQLOEBMCFRLPZJGFHAVUFQUOLVOAHQMMESSRAPEBVNYQVDKWERNDOYPFLUZEFFORMMFWDM");

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
    msg.setTimeStamp(0.5226490860268497);
    msg.setSource(35162U);
    msg.setSourceEntity(126U);
    msg.setDestination(54100U);
    msg.setDestinationEntity(53U);
    msg.timeout = 33230U;
    msg.lat = 0.23532174357810387;
    msg.lon = 0.5972364808546057;
    msg.z = 0.9077016487354889;
    msg.z_units = 206U;
    msg.speed = 0.26662651286612016;
    msg.speed_units = 35U;
    msg.bearing = 0.48286440432932576;
    msg.cross_angle = 0.26183250960274995;
    msg.width = 0.8025387960432669;
    msg.length = 0.9603989103309235;
    msg.hstep = 0.6102363425288215;
    msg.coff = 78U;
    msg.alternation = 83U;
    msg.flags = 199U;
    msg.custom.assign("PQXZZAVFYEEHXGMJNERXSMVYXHCDPXLLGFHFNWTDQJHYPRXYPVSQLYYPEMETATDCGWNWFRMFBQLU");

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
    msg.setTimeStamp(0.6397667666761111);
    msg.setSource(608U);
    msg.setSourceEntity(30U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(115U);
    msg.timeout = 41806U;
    msg.lat = 0.30163286508032305;
    msg.lon = 0.29162465086370193;
    msg.z = 0.04370404630737701;
    msg.z_units = 75U;
    msg.speed = 0.8010020896651694;
    msg.speed_units = 107U;
    msg.custom.assign("VOJAKAAREQEWIZQMKSJWUCWBXHXCYIZHTMNGDIPVMFTBTHPRXHVNTRTCMLWVMRIABHGFCETDYDRKDCLHLWYNDQVGNHEDZGFNCXUDNQLKMVKVZUTJKEIYOLSIQWBUROUHAKGRGSMOPBYOXFOVPBJHZUJFUFUICQOYNZPCUBNWMTLIFXBXRSAEEQJFLKOAPWGXJIQTEPGPSY");

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
    msg.setTimeStamp(0.7018362853212762);
    msg.setSource(7308U);
    msg.setSourceEntity(109U);
    msg.setDestination(24801U);
    msg.setDestinationEntity(92U);
    msg.timeout = 10906U;
    msg.lat = 0.2972495399106929;
    msg.lon = 0.899259857541261;
    msg.z = 0.8442144245668269;
    msg.z_units = 110U;
    msg.speed = 0.4971997868862119;
    msg.speed_units = 113U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.16578616623912235;
    tmp_msg_0.y = 0.9592741441092736;
    tmp_msg_0.z = 0.713468316349461;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WQKBZIWAGJHLDGXHBLE");

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
    msg.setTimeStamp(0.6049878859460078);
    msg.setSource(62741U);
    msg.setSourceEntity(22U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(103U);
    msg.timeout = 42146U;
    msg.lat = 0.9250061045356447;
    msg.lon = 0.1307371818645383;
    msg.z = 0.9943172164159138;
    msg.z_units = 193U;
    msg.speed = 0.05808501448735126;
    msg.speed_units = 247U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.72384787603392;
    tmp_msg_0.y = 0.020933041235174588;
    tmp_msg_0.z = 0.2801980052077455;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MWLIGXVNDCYZMRLZWMJXQPGKRXZQEHNMYUYJBQXQNCNHLDKAEWVJERPPFNJHJWRKSNDFIGLBNUKUOQWDBJKSNVMOYTTFIBZMAQHDWOMWIIRMOHIELISDUSOFAICHVNKOSXMTKXOANXFECYJFQVZPTCAGSGWKWUCRHTG");

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
    msg.setTimeStamp(0.6033647342956399);
    msg.setSource(34384U);
    msg.setSourceEntity(191U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(153U);
    msg.x = 0.045600133656642394;
    msg.y = 0.8268185569030311;
    msg.z = 0.3665682224430593;

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
    msg.setTimeStamp(0.6410051133512172);
    msg.setSource(37630U);
    msg.setSourceEntity(71U);
    msg.setDestination(27410U);
    msg.setDestinationEntity(80U);
    msg.x = 0.2637881136257558;
    msg.y = 0.6782968283421593;
    msg.z = 0.6436634557248463;

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
    msg.setTimeStamp(0.21218563888011333);
    msg.setSource(7870U);
    msg.setSourceEntity(16U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(142U);
    msg.x = 0.2990466551506936;
    msg.y = 0.43953984935708235;
    msg.z = 0.4225045224679873;

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
    msg.setTimeStamp(0.8479149736195021);
    msg.setSource(56343U);
    msg.setSourceEntity(145U);
    msg.setDestination(56802U);
    msg.setDestinationEntity(102U);
    msg.timeout = 53720U;
    msg.lat = 0.4562797066140226;
    msg.lon = 0.29656502455755973;
    msg.z = 0.4684357814472443;
    msg.z_units = 226U;
    msg.amplitude = 0.07784102069211474;
    msg.pitch = 0.39750564557253754;
    msg.speed = 0.5031396014601326;
    msg.speed_units = 6U;
    msg.custom.assign("JPMFTBFFPWGSMKGJKDNTUNGXJERNWMLTTDKFAZQRGZGJIHYYLXWWJZQLT");

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
    msg.setTimeStamp(0.104903944514807);
    msg.setSource(9503U);
    msg.setSourceEntity(24U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(26U);
    msg.timeout = 50912U;
    msg.lat = 0.7805342035843265;
    msg.lon = 0.21705210039172318;
    msg.z = 0.5024320315678082;
    msg.z_units = 100U;
    msg.amplitude = 0.42945914832106424;
    msg.pitch = 0.9718906572296306;
    msg.speed = 0.42447496157853604;
    msg.speed_units = 210U;
    msg.custom.assign("ZOMNKHJDBFXGOYVWQZCPEWOOKVITWIZRHJSXFYRUCKVLDSCQZFRQUJGLYIEKNZPTXHDGNMJTWOJGNOIPFWRVRSQERKYYBBWHTACFIDCEGGSNGPLMTJ");

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
    msg.setTimeStamp(0.05903662371711782);
    msg.setSource(2806U);
    msg.setSourceEntity(167U);
    msg.setDestination(46004U);
    msg.setDestinationEntity(224U);
    msg.timeout = 58654U;
    msg.lat = 0.3582506930180587;
    msg.lon = 0.5508849865558887;
    msg.z = 0.8269354975659698;
    msg.z_units = 212U;
    msg.amplitude = 0.5213377331888517;
    msg.pitch = 0.7289858867065251;
    msg.speed = 0.9003467515898051;
    msg.speed_units = 134U;
    msg.custom.assign("FFTWVJBBOVKHGMWUCXVUIBNJRZCWGKNMEXIKPLMBAFUQFVSRLXZNUXGJTWOLNDLFYBDJAQIRFOXYGQOMRRQQAOPZZXRXCZCJMGDPNDDREVBYDVBCHAYVLUTRKAOSHSUVITYSGMUED");

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
    msg.setTimeStamp(0.672574766706912);
    msg.setSource(44955U);
    msg.setSourceEntity(11U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.6001024333342919);
    msg.setSource(38616U);
    msg.setSourceEntity(131U);
    msg.setDestination(29216U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.024184297328516458);
    msg.setSource(61563U);
    msg.setSourceEntity(205U);
    msg.setDestination(24447U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.5410714986006537);
    msg.setSource(20027U);
    msg.setSourceEntity(12U);
    msg.setDestination(36230U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.9439419611508791;
    msg.lon = 0.5996944290531612;
    msg.z = 0.3772941140157994;
    msg.z_units = 109U;
    msg.radius = 0.07609924787619593;
    msg.duration = 11671U;
    msg.speed = 0.40845010982037144;
    msg.speed_units = 119U;
    msg.custom.assign("FYGUYGKZCUCUDCVRYTULYTMSJSUIOGPCIFZGOQMAMESYQVUFRXXTLFMCMAUWZPRHLFYBMEDKMWBXKEKHVYJDIDGJIWKNPIPNOOSKKLAYEPMOIGQWZHNSUAOQNPZPTRWBLNSDFNOPMHZUTDXBVZLSJEKVPHTKJQPQRBFXHZAWKBVIJZWTAASZVFBCNIR");

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
    msg.setTimeStamp(0.5777597557787724);
    msg.setSource(59225U);
    msg.setSourceEntity(71U);
    msg.setDestination(38150U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.24436036529229777;
    msg.lon = 0.9390321120263433;
    msg.z = 0.5642787480251398;
    msg.z_units = 141U;
    msg.radius = 0.21117537051458857;
    msg.duration = 59143U;
    msg.speed = 0.7137974104803397;
    msg.speed_units = 85U;
    msg.custom.assign("SBOXNPQZJGGPNWSSALXLQMEWTOILEGCLJZVOQFHF");

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
    msg.setTimeStamp(0.6283863110252111);
    msg.setSource(61185U);
    msg.setSourceEntity(228U);
    msg.setDestination(47890U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.1315301871859731;
    msg.lon = 0.8108582561668148;
    msg.z = 0.11471738772111428;
    msg.z_units = 137U;
    msg.radius = 0.07391566571412778;
    msg.duration = 19987U;
    msg.speed = 0.4055196658605891;
    msg.speed_units = 101U;
    msg.custom.assign("LNJMYIWOXKHIBFGILRKKJAHVDAGFAVORPJQKZBMTGLVQMNJTOYSUDUVPEFBJDYBTDRSEWYDCIPCDZPKHVMTRKIBEQHQDAOBOHPNENOFFNGSXPCQDYZGNRCXSXMJTPBYUCMJ");

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
    msg.setTimeStamp(0.9712056349425673);
    msg.setSource(60109U);
    msg.setSourceEntity(198U);
    msg.setDestination(5751U);
    msg.setDestinationEntity(174U);
    msg.timeout = 8394U;
    msg.flags = 125U;
    msg.lat = 0.25758013284275316;
    msg.lon = 0.09559595672290533;
    msg.start_z = 0.6639339220138587;
    msg.start_z_units = 94U;
    msg.end_z = 0.9765019859385001;
    msg.end_z_units = 28U;
    msg.radius = 0.7857682590266041;
    msg.speed = 0.12711618316639672;
    msg.speed_units = 82U;
    msg.custom.assign("LQZXCIDGGPWKBFCEEKQFOXCTEQRJNZKBBAYWGKVFDVJPITWAOYVONNTUARFUMRIPANOUHMIKGUTTFRBTYEDNWJECXSULQMGFNWTZQLSXJSWCDVXXVPOJGIYMNLRMWRXPZMPRBEIFMIASKNMTXWLRDAUVOUCHDBYRKIKBVLJFQYDSSAGPEYCHCJZUTWLPHUPIBAJKMVXOODHQZNRQYEOZKYJLEGHYAZSHUGOSGIVSXDZBPAFMWEDL");

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
    msg.setTimeStamp(0.6925107660668763);
    msg.setSource(49560U);
    msg.setSourceEntity(45U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(189U);
    msg.timeout = 54699U;
    msg.flags = 58U;
    msg.lat = 0.7285246440193267;
    msg.lon = 0.23268776014608683;
    msg.start_z = 0.29360972899631954;
    msg.start_z_units = 67U;
    msg.end_z = 0.7888959621812994;
    msg.end_z_units = 81U;
    msg.radius = 0.02467265048477396;
    msg.speed = 0.01564987112533256;
    msg.speed_units = 237U;
    msg.custom.assign("PDZTMVHYSTDVBYEGECXROXHEIPPHBTGASBNYFZHMDVMVBAMJJNLXGWCNOCLWMYEPXACBJFLLJDTBYLAZBTHZDYHUOGO");

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
    msg.setTimeStamp(0.3129527798702867);
    msg.setSource(60668U);
    msg.setSourceEntity(19U);
    msg.setDestination(46977U);
    msg.setDestinationEntity(181U);
    msg.timeout = 55730U;
    msg.flags = 39U;
    msg.lat = 0.8324871135955019;
    msg.lon = 0.3368044062811887;
    msg.start_z = 0.11519725766251088;
    msg.start_z_units = 20U;
    msg.end_z = 0.17983994960852145;
    msg.end_z_units = 16U;
    msg.radius = 0.5623907836299863;
    msg.speed = 0.08924541960304555;
    msg.speed_units = 71U;
    msg.custom.assign("WGSEONIJRXJRBFKAOKMLIWQCNQDGYEDQTCUBGISELAROBVFKZUXIYVGIZWHUZDZHAKSNAMQEVEGHOXARBYXAJZTPLJRNYXFFCZSQOVZMBPZSZYBSIY");

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
    msg.setTimeStamp(0.8986920409540987);
    msg.setSource(50193U);
    msg.setSourceEntity(85U);
    msg.setDestination(39522U);
    msg.setDestinationEntity(0U);
    msg.timeout = 61498U;
    msg.lat = 0.8217366796322891;
    msg.lon = 0.9468520534586576;
    msg.z = 0.9472349410382392;
    msg.z_units = 96U;
    msg.speed = 0.3140821677720197;
    msg.speed_units = 21U;
    msg.custom.assign("KNBYQMHFNDXGDYXDLTFZVZERNDJBPGIRUUTEGDFMHWIPJRQQCRBUKQIIZJY");

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
    msg.setTimeStamp(0.3508344947345601);
    msg.setSource(17772U);
    msg.setSourceEntity(118U);
    msg.setDestination(52938U);
    msg.setDestinationEntity(176U);
    msg.timeout = 37214U;
    msg.lat = 0.08797149081978983;
    msg.lon = 0.3527607171014083;
    msg.z = 0.7433825587849352;
    msg.z_units = 84U;
    msg.speed = 0.4053102380064303;
    msg.speed_units = 44U;
    msg.custom.assign("IYDLKBGWUUZWGJ");

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
    msg.setTimeStamp(0.7322694735024102);
    msg.setSource(49730U);
    msg.setSourceEntity(204U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(41U);
    msg.timeout = 47010U;
    msg.lat = 0.7482485540503425;
    msg.lon = 0.5888093450455157;
    msg.z = 0.24587409002278982;
    msg.z_units = 203U;
    msg.speed = 0.676201642841992;
    msg.speed_units = 100U;
    msg.custom.assign("TQSYUKBCFET");

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
    msg.setTimeStamp(0.4842777167453426);
    msg.setSource(50257U);
    msg.setSourceEntity(163U);
    msg.setDestination(5942U);
    msg.setDestinationEntity(208U);
    msg.x = 0.5263167327733265;
    msg.y = 0.9194408438272491;
    msg.z = 0.9532421286257573;
    msg.t = 0.17778422919338932;

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
    msg.setTimeStamp(0.07929690017272673);
    msg.setSource(46407U);
    msg.setSourceEntity(151U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(3U);
    msg.x = 0.15926058751115513;
    msg.y = 0.15059423313427023;
    msg.z = 0.09775873965344051;
    msg.t = 0.4805849116214338;

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
    msg.setTimeStamp(0.8635459275033612);
    msg.setSource(22459U);
    msg.setSourceEntity(85U);
    msg.setDestination(47661U);
    msg.setDestinationEntity(72U);
    msg.x = 0.5462768954869011;
    msg.y = 0.7149010129197553;
    msg.z = 0.5901032666652956;
    msg.t = 0.7296987154413408;

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
    msg.setTimeStamp(0.693592750209777);
    msg.setSource(59229U);
    msg.setSourceEntity(58U);
    msg.setDestination(37928U);
    msg.setDestinationEntity(68U);
    msg.timeout = 35919U;
    msg.name.assign("CPBDEGYEMR");
    msg.custom.assign("AVIGITAXXUQPWHERFVEUDHGQVAFWWNWKMSENUKJTWPSRCLSBXFBYHVYQJHUOVRIILXXBFXPDPBYSGPMKSDJTMKXVBVAJCCBNIPFTMFJNKHKHTPJEMXXZMGLCZWEOZVGRHWYYLDLIUBDKAYRJRCGKRUSZKBJZNSKTGOMLMACLLYEOCRNOSAYYQSDITOQQEHEUOXUNWRZNOWH");

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
    msg.setTimeStamp(0.06451784080621092);
    msg.setSource(7189U);
    msg.setSourceEntity(29U);
    msg.setDestination(34105U);
    msg.setDestinationEntity(92U);
    msg.timeout = 27409U;
    msg.name.assign("DZJYRVOHMISTOKDCLGOPIRUXOYGRNAGTUFZRTJLCYYXWMZWEVYJARYRQGUDOZYZNOCENTBWULFYJMVRMNTIMLPCUGUPLZHVLVWGEFOXJKBVYVNTCKBMAZCHA");
    msg.custom.assign("QLAZPPOXNEMADTVGYLOZL");

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
    msg.setTimeStamp(0.6293425409381546);
    msg.setSource(18383U);
    msg.setSourceEntity(167U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(237U);
    msg.timeout = 54324U;
    msg.name.assign("ASFOICRUTAOAGKMSIBZRQPSWCAOXMXHLGMNVCLJZVWVHJYMZRKRSFJXOFYIAEJSVKNNWAGZWVJDCKQWPZPGZAPLDELBQKQAZQYXCEDNRUUW");
    msg.custom.assign("LXCCGYOKUJPQVOPBMLZTRIISAHTFTBJLUVNJCEUDS");

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
    msg.setTimeStamp(0.006194326018028606);
    msg.setSource(15327U);
    msg.setSourceEntity(179U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.5338367081493429;
    msg.lon = 0.4301051301601535;
    msg.z = 0.8936985179480603;
    msg.z_units = 109U;
    msg.speed = 0.1640329086417741;
    msg.speed_units = 213U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35008U;
    tmp_msg_0.off_x = 0.3780986199157248;
    tmp_msg_0.off_y = 0.07440647984285675;
    tmp_msg_0.off_z = 0.09747666655888632;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.04546755273767589;
    msg.custom.assign("RSFELDUHDW");

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
    msg.setTimeStamp(0.3101562364200078);
    msg.setSource(5172U);
    msg.setSourceEntity(242U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.7654111726203053;
    msg.lon = 0.08467824214635566;
    msg.z = 0.5805118398164604;
    msg.z_units = 80U;
    msg.speed = 0.5325151489037593;
    msg.speed_units = 76U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3691441226561427;
    tmp_msg_0.y = 0.4440253186189731;
    tmp_msg_0.z = 0.994842339114172;
    tmp_msg_0.t = 0.17013546386324618;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 19364U;
    tmp_msg_1.off_x = 0.8736513526662869;
    tmp_msg_1.off_y = 0.5085400331912566;
    tmp_msg_1.off_z = 0.7599407985121303;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.29688420638092183;
    msg.custom.assign("OPLZIHZGERPQPGBHKYFWWVYBIKSSKEFMPVLURQXKAAJ");

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
    msg.setTimeStamp(0.8005219713106534);
    msg.setSource(43030U);
    msg.setSourceEntity(249U);
    msg.setDestination(26289U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.1978942220848845;
    msg.lon = 0.7551513023685956;
    msg.z = 0.5087185714207344;
    msg.z_units = 207U;
    msg.speed = 0.42202267171629115;
    msg.speed_units = 76U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6545066173513711;
    tmp_msg_0.y = 0.01894239650943408;
    tmp_msg_0.z = 0.29162566749244645;
    tmp_msg_0.t = 0.11818497772038694;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6021566581821114;
    msg.custom.assign("YBYUQGZQDLAMSIMJLQGQPBFEBAKUNSSOQUPWMSWADMSW");

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
    msg.setTimeStamp(0.349660296820654);
    msg.setSource(39945U);
    msg.setSourceEntity(244U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(99U);
    msg.vid = 1039U;
    msg.off_x = 0.7179331336188816;
    msg.off_y = 0.13760055262249749;
    msg.off_z = 0.9642625783782147;

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
    msg.setTimeStamp(0.8198309942461757);
    msg.setSource(30268U);
    msg.setSourceEntity(249U);
    msg.setDestination(27322U);
    msg.setDestinationEntity(137U);
    msg.vid = 36251U;
    msg.off_x = 0.21453885554234897;
    msg.off_y = 0.20040612360993915;
    msg.off_z = 0.3066514648163784;

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
    msg.setTimeStamp(0.9528623744512508);
    msg.setSource(42790U);
    msg.setSourceEntity(105U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(249U);
    msg.vid = 18843U;
    msg.off_x = 0.23534227817805675;
    msg.off_y = 0.8679479788302521;
    msg.off_z = 0.429899321042469;

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
    msg.setTimeStamp(0.24867237640146334);
    msg.setSource(13023U);
    msg.setSourceEntity(84U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.6350727109667116);
    msg.setSource(57348U);
    msg.setSourceEntity(44U);
    msg.setDestination(43011U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.325115733845151);
    msg.setSource(31323U);
    msg.setSourceEntity(89U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.1849402807147813);
    msg.setSource(24058U);
    msg.setSourceEntity(70U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(34U);
    msg.mid = 16757U;

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
    msg.setTimeStamp(0.9013717861240059);
    msg.setSource(16529U);
    msg.setSourceEntity(204U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(247U);
    msg.mid = 14613U;

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
    msg.setTimeStamp(0.7625743251469614);
    msg.setSource(29368U);
    msg.setSourceEntity(26U);
    msg.setDestination(2262U);
    msg.setDestinationEntity(237U);
    msg.mid = 11544U;

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
    msg.setTimeStamp(0.8289011324007108);
    msg.setSource(60590U);
    msg.setSourceEntity(253U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(63U);
    msg.state = 190U;
    msg.eta = 59844U;
    msg.info.assign("OTKCFVHKTASLRCMZSNVDTOYVZLKHEBRIGVJLWMTSSGWRYKUYH");

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
    msg.setTimeStamp(0.9836875304540905);
    msg.setSource(10312U);
    msg.setSourceEntity(53U);
    msg.setDestination(13693U);
    msg.setDestinationEntity(23U);
    msg.state = 178U;
    msg.eta = 4916U;
    msg.info.assign("JXVETNLFUMZUGYHNZFDWOJPOZAJCZIVBIAWXCQFOJXQBULSWJNKFNDFYYEERDAGCSDKESYIRKMCPVTDOASPJTTUHUJXPRGAKOGUJNNVIAPZRBIQCWPSLYPNSOMHKWCXFOYCWHNWBQKJVBTQUYEDMHAXRIUIYHBSPRADMZHBGPEGBTLVLJFZVGMCFVROHDUUTZLOGEXBCQLIFQANVBDTSLTRHNKWSPFCXMRXQMZKQAIQYWEZVDLHWLESMOMKGGT");

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
    msg.setTimeStamp(0.9747960176883989);
    msg.setSource(57062U);
    msg.setSourceEntity(128U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(27U);
    msg.state = 62U;
    msg.eta = 3261U;
    msg.info.assign("VVKEMVAWAHTGPBCTCQHBHOUBGEVYFUXPSILFWRXAZLKALMRYOFONZYAGDSXYJWQAGXDYHQKMKEJSJLTMOSPILTFUQRDFCPYXBVORGRCNIAYTEOJLZPZ");

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
    msg.setTimeStamp(0.7857643402986325);
    msg.setSource(54535U);
    msg.setSourceEntity(239U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(71U);
    msg.system = 51959U;
    msg.duration = 61675U;
    msg.speed = 0.824470601582454;
    msg.speed_units = 186U;
    msg.x = 0.7008016792885735;
    msg.y = 0.9325945584588996;
    msg.z = 0.968050625638576;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.13219820765767187);
    msg.setSource(1671U);
    msg.setSourceEntity(175U);
    msg.setDestination(3273U);
    msg.setDestinationEntity(12U);
    msg.system = 8016U;
    msg.duration = 18184U;
    msg.speed = 0.14626475905531255;
    msg.speed_units = 247U;
    msg.x = 0.16656169302810997;
    msg.y = 0.8774569478842404;
    msg.z = 0.4701257181688172;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.38601505170932116);
    msg.setSource(31625U);
    msg.setSourceEntity(193U);
    msg.setDestination(42618U);
    msg.setDestinationEntity(123U);
    msg.system = 26441U;
    msg.duration = 49294U;
    msg.speed = 0.4201406524324379;
    msg.speed_units = 104U;
    msg.x = 0.6593000887061718;
    msg.y = 0.09544986178903148;
    msg.z = 0.7286993632021339;
    msg.z_units = 169U;

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
    msg.setTimeStamp(0.04844438875138235);
    msg.setSource(34866U);
    msg.setSourceEntity(245U);
    msg.setDestination(654U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.7700880419809553;
    msg.lon = 0.6745326042256935;
    msg.speed = 0.4611511329513719;
    msg.speed_units = 72U;
    msg.duration = 47597U;
    msg.sys_a = 56594U;
    msg.sys_b = 64548U;
    msg.move_threshold = 0.30648286904710453;

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
    msg.setTimeStamp(0.8125444644792696);
    msg.setSource(24053U);
    msg.setSourceEntity(178U);
    msg.setDestination(62132U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.176368490520747;
    msg.lon = 0.2310358044461881;
    msg.speed = 0.34251890318337386;
    msg.speed_units = 205U;
    msg.duration = 21029U;
    msg.sys_a = 24608U;
    msg.sys_b = 29265U;
    msg.move_threshold = 0.42505227302903503;

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
    msg.setTimeStamp(0.3454311858509671);
    msg.setSource(18322U);
    msg.setSourceEntity(70U);
    msg.setDestination(55610U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.5385819535875364;
    msg.lon = 0.45363858434645576;
    msg.speed = 0.5928757523672854;
    msg.speed_units = 50U;
    msg.duration = 37117U;
    msg.sys_a = 45141U;
    msg.sys_b = 26023U;
    msg.move_threshold = 0.232076286281389;

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
    msg.setTimeStamp(0.3442157889004215);
    msg.setSource(53065U);
    msg.setSourceEntity(102U);
    msg.setDestination(17623U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.6410511977132144;
    msg.lon = 0.6095660854807763;
    msg.z = 0.3996680046364659;
    msg.z_units = 122U;
    msg.speed = 0.3680509476798862;
    msg.speed_units = 96U;
    msg.custom.assign("SIULQUSXQDSBOQZPNGHVPQTWPPIPTZXCAVHDUCACJAXKVZY");

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
    msg.setTimeStamp(0.08410007999752178);
    msg.setSource(9351U);
    msg.setSourceEntity(8U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.1697356926140825;
    msg.lon = 0.36764462535967257;
    msg.z = 0.6986524319194204;
    msg.z_units = 175U;
    msg.speed = 0.882084024623266;
    msg.speed_units = 79U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8633735683516229;
    tmp_msg_0.lon = 0.4907818522326014;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BVXZESNLUOSGYEIYHLFZBQAATXBUFCTXCOVOLBYWUHEZPKRBVZCVCBOGIMDUWPNUMOJBJODGHINWKCMAJKHPYGNGBGCFUAYEEBXRXKDAWDRRHMQWJPRQTHLOVAJJEZWGNSSVKRGINZVMIKWTWKSKCQLHXZWTRKYPQJLN");

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
    msg.setTimeStamp(0.9220330204006064);
    msg.setSource(42646U);
    msg.setSourceEntity(216U);
    msg.setDestination(5059U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.2025300002719892;
    msg.lon = 0.5953190782417922;
    msg.z = 0.6691320211679154;
    msg.z_units = 120U;
    msg.speed = 0.12967353004444881;
    msg.speed_units = 125U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4763153468148116;
    tmp_msg_0.lon = 0.9028162283730589;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IBKSGOJQEARZHJZFSCUCUZPYOLOPJ");

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
    msg.setTimeStamp(0.482225387448063);
    msg.setSource(13138U);
    msg.setSourceEntity(58U);
    msg.setDestination(19422U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.9338251625693755;
    msg.lon = 0.6798897282628975;

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
    msg.setTimeStamp(0.7220699680939406);
    msg.setSource(62575U);
    msg.setSourceEntity(90U);
    msg.setDestination(8163U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.8247567791672689;
    msg.lon = 0.8903328959932992;

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
    msg.setTimeStamp(0.2195106252699094);
    msg.setSource(3479U);
    msg.setSourceEntity(52U);
    msg.setDestination(22328U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.935851309695492;
    msg.lon = 0.37070234297670346;

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
    msg.setTimeStamp(0.8228235299830093);
    msg.setSource(61814U);
    msg.setSourceEntity(109U);
    msg.setDestination(40122U);
    msg.setDestinationEntity(100U);
    msg.timeout = 61280U;
    msg.lat = 0.6605509202262021;
    msg.lon = 0.3632998889490261;
    msg.z = 0.7072164833509701;
    msg.z_units = 112U;
    msg.pitch = 0.14154797117896778;
    msg.amplitude = 0.5888154787423505;
    msg.duration = 3969U;
    msg.speed = 0.07115515680985995;
    msg.speed_units = 220U;
    msg.radius = 0.35264246761037255;
    msg.direction = 28U;
    msg.custom.assign("ATJYMVRHLZPIJFOKITBAKEXYQSWKLZDJLNIYTVPWEWVURCJSJXIMOBERMIDUNIVOFXLMUMWRBBQKGBJRMHWHUQTDSXTBADKAAFCBPYDJBZGPYHTLRWDPNHSOEBSQVIXZFYOCYDSVEFNHNAKFTRMLLGFVRZCQHWDAEXPJIICXZHGCKGJFCMEYSUXKEZDAXTWORFQORLBQH");

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
    msg.setTimeStamp(0.6956848354556134);
    msg.setSource(57422U);
    msg.setSourceEntity(43U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(195U);
    msg.timeout = 2886U;
    msg.lat = 0.4069969376467695;
    msg.lon = 0.9955147778607156;
    msg.z = 0.4680309571412784;
    msg.z_units = 210U;
    msg.pitch = 0.7051525239323203;
    msg.amplitude = 0.4911226787161934;
    msg.duration = 14970U;
    msg.speed = 0.5053062904722618;
    msg.speed_units = 157U;
    msg.radius = 0.7905673054973259;
    msg.direction = 249U;
    msg.custom.assign("CZDHKLHZYXBPEJZPDGVTIMKSXZXACLUEWGLBCNADCPTBQJBTQFNHEXZRDDKUJSWXFOAVHUBOGZIIOSKWSYCFTIORWGTWXQQMSYLSJROHRRQVRGTAYOGETBOYKNDLFGOAH");

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
    msg.setTimeStamp(0.9675711792336846);
    msg.setSource(11081U);
    msg.setSourceEntity(50U);
    msg.setDestination(1059U);
    msg.setDestinationEntity(154U);
    msg.timeout = 26012U;
    msg.lat = 0.8058785228560202;
    msg.lon = 0.8788937500272846;
    msg.z = 0.5645692468896817;
    msg.z_units = 141U;
    msg.pitch = 0.9110627345225168;
    msg.amplitude = 0.7191530634395583;
    msg.duration = 55606U;
    msg.speed = 0.40183322104207453;
    msg.speed_units = 83U;
    msg.radius = 0.7202612815139278;
    msg.direction = 245U;
    msg.custom.assign("TAVLSZYQJEHEVLJRVZRKGNPUQSACNBXPDOUNMXTOGDRVIWPFEBTHSQAKZRTJLTQITCGICGOSSGGYEORWBJUCPMDUFPQGVOIJBEBOGKAYLBBAWOWCVAYCKQZDELHGKZJKFWIJYRZXBPCCLDVQPNAFYD");

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
    msg.setTimeStamp(0.5410328939171876);
    msg.setSource(16452U);
    msg.setSourceEntity(90U);
    msg.setDestination(33384U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("QRKZCDZUERVPPJLFPENKSFTTNAFLKVKWBYFIOBMLKULQJYCWGYIUOUMSMLILXYLWBEXMBSAHPUZSSUBAREYHPTCTMXNDQQFRGAPOVOQZI");
    msg.reference_frame = 131U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55233U;
    tmp_msg_0.off_x = 0.9852797146632822;
    tmp_msg_0.off_y = 0.9319529864679655;
    tmp_msg_0.off_z = 0.3979707002120102;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GSUHFELMDYQBVKYNZQJJCSVPUUOIHAXKERKAXHOBQWTXJWKLHKDYSZDXJGTGMHCEZKXCNJQIDJIFXYSTOLZBHYWIY");

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
    msg.setTimeStamp(0.49622827852641094);
    msg.setSource(30478U);
    msg.setSourceEntity(249U);
    msg.setDestination(16894U);
    msg.setDestinationEntity(9U);
    msg.formation_name.assign("SQJWYXCSFZKJNXNJRMMXETHNYEKYSBKMNULHZGRJKDTZPUIWOZWAOOZYCABMAFIWQGTIMQRTUKGULFGENCKMCEPAYOVVBJXHEVWEKPQQJQ");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54698U;
    tmp_msg_0.off_x = 0.3172068799392672;
    tmp_msg_0.off_y = 0.35165882639298873;
    tmp_msg_0.off_z = 0.6028652281700044;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NNOXLXYMHUDPHUGSLLMAEXZXUPOGJFUVYMQAYXPBVLITOETVFLEUTUVV");

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
    msg.setTimeStamp(0.12997016017010599);
    msg.setSource(50970U);
    msg.setSourceEntity(240U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(19U);
    msg.formation_name.assign("INHXJTWTFXWZBGVVHRLDXWQCFNWSSVLYPPTSCURLOQUKASDPXXLYOUNKOTBOTNZBRSLRAXZDEDRMKEIOXVUBHVZJPVMLEDUBGMCIQLYJSLZDYYHFJCWGWJADCKFINBVFSBPASYTMAFGPGMOZECGGRQFUZJRCOKKSUUZTERECTFK");
    msg.reference_frame = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42634U;
    tmp_msg_0.off_x = 0.8677236843018344;
    tmp_msg_0.off_y = 0.699357021271965;
    tmp_msg_0.off_z = 0.42749165701180813;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BVAZEORANYEFNTBOYSBRBWGWNTTDSHWDDSDIQWCVRIPDYGFXIPWXMRGELCOUOQBMCWZEFZATQJEXMYLCLEAIZGLRTVVJANOCTRPKHUPSHUOMNFCJUIWMECRZIIGPZZIYKOKTUFMYGHVKANGXOVXTBRTUEAOHLUQHBXAFPDZDFTD");

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
    msg.setTimeStamp(0.743458312606013);
    msg.setSource(1882U);
    msg.setSourceEntity(232U);
    msg.setDestination(1351U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("JYZWDUQCAKIJQCFLOBXVEFWUCUPQYNJTQOPFFHROSULGDVJTEDSNHARLDUDBPXGBIQBRKND");
    msg.formation_name.assign("TJXKLOCNRZHVOKBTLUBNVXMAAWMAQGFBATRLQPEJUDHLCHBCNATUKZYNOPEZEEVUPZNJEBQFQIZVDGAHIXQSRCRSSSLIYBQRBSONJTNYWXIGHTMUFAPRGOSJYGHJRDYGPMBDTTUNXZSFQFXPIOKHMEZVLGYPKWNUSQZADBMFRGFWWIH");
    msg.plan_id.assign("ITDJFJHFVAMHVBTUFNXUBVPTWLRNRSZPKKJUVMGPSNLEBNUM");
    msg.description.assign("YESSRYCRZLJIIGJBFTRFXECNFIAUMDNHOYHZGFMEULWNWDWKQWQMNWJCRFTPMSAOCGJPUDDOGNDOVDZUFQHYSBKQTZSZPXBEDVZASCMAVJQRMJOEKXJMYIHLPXKFTJQNXBNSVRWEUFWHVFPPCVLESIXTABQXBCVTBKBQUKXZVXECRRVIGREFGPMYAGOSLQYZXOHLLBHYUKGTUKIWPDPHKZBNYORGETAKCLSVQNIJAMHNWMOJWHCUOPLD");
    msg.leader_speed = 0.630321922237058;
    msg.leader_bank_lim = 0.09984607065240758;
    msg.pos_sim_err_lim = 0.676422350570791;
    msg.pos_sim_err_wrn = 0.6065023153973701;
    msg.pos_sim_err_timeout = 59138U;
    msg.converg_max = 0.8129660078075153;
    msg.converg_timeout = 43255U;
    msg.comms_timeout = 56333U;
    msg.turb_lim = 0.748659075293737;
    msg.custom.assign("EELPSNRWVMBBBYBQZMTHTQOXGLMIZMUDGXDPRRCHNTXGYWDTPWDLJOHPLJAFTZKUJNKVKIGXRVUFLSAXRIIHSWGQZVQQNDBOANEUMJJJFZBASKHLDUWVUVDDMGPCHIEXJQSHWEFZH");

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
    msg.setTimeStamp(0.3653508524555311);
    msg.setSource(60350U);
    msg.setSourceEntity(49U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("GRXICNIDPYDOBQQXKXJZURWBWZNGVFSQAEAUXJLYQDTUNMTWSHRRLZHPPPESWFNAPDJTCWZEMCULEHCEIBYOVOJKYFMCYKIDLZJUQHTOBVQPEJAXFOIINCKHEZOQNYBXGBJLKVSSVKSCUGNMRWRTMNMCYAJGQSJDBICHKBHIUHDXLUOQHYMGRFCFEGPVLOFLIUAZWDVRTEYAZAISRLNJTMZPOSKQZTWMUNBXFFPKRMBDWLGVAVGOEXFWTK");
    msg.formation_name.assign("PFGSOIHXOHYXAWLTJKMPFYYZLBCASMCSMWMDUMULWYBYADRJBAZTNSBAZWUPQBLSFGEJDEHMVHORGLIQZNCKEQFFFPQORNOCTDQRXNYKOYK");
    msg.plan_id.assign("RXQTUWEOIXUSLQMVVTBQLPOTMBSEBRLEOFPZBNUAOGBZHHQEYXVCVDJMNMWNUYFMWFCMAMCTZCKYKTTSMZKLQXYFUQENSLPBZRPKHTIHUHKCXECEJSIAGGANGAJBDGXTLYPSKGDYOWOOUYUB");
    msg.description.assign("XFGKNLEBGKELBETCRSQTAQPTMQRYGEPDTVUDTMEBITYXERHWDCCQXAOKKKGFYNJVWJHKBKSDWUWLYBZPOXCOFGTNFAXURDEKFMMIHWAHIWPKQBWLCHAALROGLZQGBZJCUYSMYRCSUPDWEZZNMLQIMUPVRBSZOACHNJBTHIUCRXVSVAYSWMDGNIXFAPQMGONHS");
    msg.leader_speed = 0.5981944337644077;
    msg.leader_bank_lim = 0.1764180768866861;
    msg.pos_sim_err_lim = 0.9500570372244127;
    msg.pos_sim_err_wrn = 0.3462332177291759;
    msg.pos_sim_err_timeout = 15250U;
    msg.converg_max = 0.07079326015991971;
    msg.converg_timeout = 31023U;
    msg.comms_timeout = 58866U;
    msg.turb_lim = 0.02954485139835028;
    msg.custom.assign("TNJGFEWUQHGUDPGVHOKIXXMWWSUTUGLMAENJYAVRKBLCRNMJUHISKSZONWXJQGODMKNPRPYSCWZUXXWUIAMVIGIPZBMTLHQKJYPHBFOYPKWIVQKHFELIVYHMLNCBPQJBQBAEBXCICFGRO");

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
    msg.setTimeStamp(0.5100603967963506);
    msg.setSource(27001U);
    msg.setSourceEntity(206U);
    msg.setDestination(52839U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("SCVKLFOKMASLBGOXQECFAZQGCEHXRRGHZPPUNVSBTKIJETONFQABQTIYUMXYQSHJWKPXOLFMKUJWUKZLWREZTFGTHDWWDAMBSCOFMNVIUNSNXXQMVOXCXNHBVOYPZDLOIWLCGAEZQKJVJCGIYPRAIJGJAXWBHDOTCQVDEWYNRQNYCKKBWC");
    msg.formation_name.assign("QSDOVXZARARMLNKRQZVHEBDIWNXXYNBJWEHHJMFCPCYPWXBNPUBNYJANJHTBJUOVSRNEWQWINRZOUFPOLHKOTUMXUTAFYBUGUZZXBKFILKYZQSFDIQUEUECVRVFRPYNTDPIHSKJZTOAGTTMGQQFOZWATAXLAJDHXWRCMYMHSAOGKSCTPGONLZDWLCIKYBGIPEKMCWXMGLVLJLDSSEURQJGDIFVVQVCFSDFEVCHIKPHMYJSMBKE");
    msg.plan_id.assign("NVHPGSHVPPFVLMOXFHZCEVCPPYMYDUXWNOEQHP");
    msg.description.assign("PSCICFOFXWEKUJPHQUAKNFPTTRLDZLRKXGBSKLHFOCPW");
    msg.leader_speed = 0.9626698567217767;
    msg.leader_bank_lim = 0.1945824662746597;
    msg.pos_sim_err_lim = 0.4006622466415025;
    msg.pos_sim_err_wrn = 0.46669366461032913;
    msg.pos_sim_err_timeout = 50363U;
    msg.converg_max = 0.23671782005178432;
    msg.converg_timeout = 22946U;
    msg.comms_timeout = 43646U;
    msg.turb_lim = 0.6171883288970282;
    msg.custom.assign("VETXJHHFUNBN");

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
    msg.setTimeStamp(0.48996742360740064);
    msg.setSource(39299U);
    msg.setSourceEntity(109U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(98U);
    msg.control_src = 35272U;
    msg.control_ent = 165U;
    msg.timeout = 0.5400503320191364;
    msg.loiter_radius = 0.1913060318028904;
    msg.altitude_interval = 0.13529028319064762;

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
    msg.setTimeStamp(0.06288506510792546);
    msg.setSource(64897U);
    msg.setSourceEntity(161U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(172U);
    msg.control_src = 54790U;
    msg.control_ent = 206U;
    msg.timeout = 0.9152905847818867;
    msg.loiter_radius = 0.25153903688163826;
    msg.altitude_interval = 0.0822128043767647;

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
    msg.setTimeStamp(0.04595580206175143);
    msg.setSource(47021U);
    msg.setSourceEntity(54U);
    msg.setDestination(37684U);
    msg.setDestinationEntity(114U);
    msg.control_src = 19988U;
    msg.control_ent = 117U;
    msg.timeout = 0.3364463496227761;
    msg.loiter_radius = 0.8735041238116577;
    msg.altitude_interval = 0.6193144549859947;

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
    msg.setTimeStamp(0.8934862253548581);
    msg.setSource(26952U);
    msg.setSourceEntity(29U);
    msg.setDestination(56792U);
    msg.setDestinationEntity(138U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1462077972836774;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8728559666360861;
    tmp_msg_1.z_units = 206U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1184969288342198;
    msg.lon = 0.46342045013983313;
    msg.radius = 0.24547958609043152;

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
    msg.setTimeStamp(0.6758047419030041);
    msg.setSource(21924U);
    msg.setSourceEntity(214U);
    msg.setDestination(37835U);
    msg.setDestinationEntity(196U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.04194121691337027;
    tmp_msg_0.speed_units = 60U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7853027898130645;
    tmp_msg_1.z_units = 27U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3259998180520267;
    msg.lon = 0.7858247265014655;
    msg.radius = 0.1745557930372611;

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
    msg.setTimeStamp(0.25313995918635057);
    msg.setSource(47154U);
    msg.setSourceEntity(149U);
    msg.setDestination(15581U);
    msg.setDestinationEntity(141U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7320879901948669;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.50508175863947;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.11067563644426281;
    msg.lon = 0.5259586795586026;
    msg.radius = 0.17421267730314494;

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
    msg.setTimeStamp(0.815108749674305);
    msg.setSource(41032U);
    msg.setSourceEntity(216U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(53U);
    msg.control_src = 63644U;
    msg.control_ent = 160U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.617367917951452;
    tmp_tmp_msg_0_0.speed_units = 124U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5118525758581088;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0969703289595999;
    tmp_msg_0.lon = 0.3542806461753313;
    tmp_msg_0.radius = 0.7494432803965987;
    msg.reference.set(tmp_msg_0);
    msg.state = 22U;
    msg.proximity = 160U;

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
    msg.setTimeStamp(0.836919174579526);
    msg.setSource(16387U);
    msg.setSourceEntity(34U);
    msg.setDestination(3215U);
    msg.setDestinationEntity(253U);
    msg.control_src = 64540U;
    msg.control_ent = 90U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 85U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.50009164795876;
    tmp_tmp_msg_0_0.speed_units = 60U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8657387076089368;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.36333551634368444;
    tmp_msg_0.lon = 0.10052102857872236;
    tmp_msg_0.radius = 0.020110327372851455;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.053927525847137);
    msg.setSource(34701U);
    msg.setSourceEntity(85U);
    msg.setDestination(4327U);
    msg.setDestinationEntity(35U);
    msg.control_src = 22156U;
    msg.control_ent = 241U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 226U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5815166799606956;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5054162210904044;
    tmp_tmp_msg_0_1.z_units = 137U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08843588477791453;
    tmp_msg_0.lon = 0.6008754512124683;
    tmp_msg_0.radius = 0.14145548354981985;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 6U;

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
    msg.setTimeStamp(0.08645024939003731);
    msg.setSource(29475U);
    msg.setSourceEntity(174U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(217U);
    msg.ax_cmd = 0.3571847512717339;
    msg.ay_cmd = 0.758510778187825;
    msg.az_cmd = 0.17537813857547768;
    msg.ax_des = 0.988441647176079;
    msg.ay_des = 0.25301556274966464;
    msg.az_des = 0.6252545251214586;
    msg.virt_err_x = 0.8962513913086713;
    msg.virt_err_y = 0.44949645883613554;
    msg.virt_err_z = 0.23274287545360017;
    msg.surf_fdbk_x = 0.9918633586251664;
    msg.surf_fdbk_y = 0.06513899799018485;
    msg.surf_fdbk_z = 0.26135097670897467;
    msg.surf_unkn_x = 0.7364862361789929;
    msg.surf_unkn_y = 0.4740693531705896;
    msg.surf_unkn_z = 0.4539081723164753;
    msg.ss_x = 0.605065007014397;
    msg.ss_y = 0.7916859987314337;
    msg.ss_z = 0.5270324634806923;

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
    msg.setTimeStamp(0.8077708640822655);
    msg.setSource(1134U);
    msg.setSourceEntity(196U);
    msg.setDestination(14031U);
    msg.setDestinationEntity(65U);
    msg.ax_cmd = 0.910704057168586;
    msg.ay_cmd = 0.3154512455454257;
    msg.az_cmd = 0.6883170047584711;
    msg.ax_des = 0.2567574195387694;
    msg.ay_des = 0.7587529619663163;
    msg.az_des = 0.5416533454207759;
    msg.virt_err_x = 0.39598742408094645;
    msg.virt_err_y = 0.5724369273084498;
    msg.virt_err_z = 0.3097420351773995;
    msg.surf_fdbk_x = 0.8688111381770516;
    msg.surf_fdbk_y = 0.6377264001105354;
    msg.surf_fdbk_z = 0.6535826000880481;
    msg.surf_unkn_x = 0.14827003983749065;
    msg.surf_unkn_y = 0.6285980318163598;
    msg.surf_unkn_z = 0.25428161324509946;
    msg.ss_x = 0.7213401585689473;
    msg.ss_y = 0.6769171627910896;
    msg.ss_z = 0.0683150364636761;

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
    msg.setTimeStamp(0.7283631807619927);
    msg.setSource(24417U);
    msg.setSourceEntity(169U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(224U);
    msg.ax_cmd = 0.4230764584899439;
    msg.ay_cmd = 0.1420160646873423;
    msg.az_cmd = 0.3833642831395272;
    msg.ax_des = 0.0501851728181707;
    msg.ay_des = 0.9318721223090963;
    msg.az_des = 0.4094681184825526;
    msg.virt_err_x = 0.7088225432841614;
    msg.virt_err_y = 0.5073347452934712;
    msg.virt_err_z = 0.3566572681542144;
    msg.surf_fdbk_x = 0.032944758715278466;
    msg.surf_fdbk_y = 0.7769638059249304;
    msg.surf_fdbk_z = 0.6546574732917861;
    msg.surf_unkn_x = 0.3859368198348304;
    msg.surf_unkn_y = 0.9890570852972695;
    msg.surf_unkn_z = 0.18225540421713293;
    msg.ss_x = 0.8850188741323407;
    msg.ss_y = 0.3958813686513504;
    msg.ss_z = 0.20018098848138477;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MJXHUDJUVKZNKDCBLAUZAQVNCZPWIGDBAXNKOMCPQEFTJWZTMRJZQVBZSZTREOCYGIWIWGXKKFGDYEORDDINNWZRSIGFZHVYHKBTBSTTBCQYTBPDXYSQPVSIMOMNQETDAKLRUWKRVWHXTDE");
    tmp_msg_0.dist = 0.5260332864491266;
    tmp_msg_0.err = 0.22601950617171007;
    tmp_msg_0.ctrl_imp = 0.41649326486302574;
    tmp_msg_0.rel_dir_x = 0.8866275065127308;
    tmp_msg_0.rel_dir_y = 0.5939099998665616;
    tmp_msg_0.rel_dir_z = 0.47781949446775374;
    tmp_msg_0.err_x = 0.20793053614252632;
    tmp_msg_0.err_y = 0.8909444054886484;
    tmp_msg_0.err_z = 0.13960514786119738;
    tmp_msg_0.rf_err_x = 0.6818549133750276;
    tmp_msg_0.rf_err_y = 0.34658384427806677;
    tmp_msg_0.rf_err_z = 0.7962098707314187;
    tmp_msg_0.rf_err_vx = 0.5110939353433044;
    tmp_msg_0.rf_err_vy = 0.2547005493901886;
    tmp_msg_0.rf_err_vz = 0.20668948353112293;
    tmp_msg_0.ss_x = 0.03538959555903287;
    tmp_msg_0.ss_y = 0.4049864404950573;
    tmp_msg_0.ss_z = 0.10556593381426094;
    tmp_msg_0.virt_err_x = 0.5655132504241669;
    tmp_msg_0.virt_err_y = 0.14564509006273663;
    tmp_msg_0.virt_err_z = 0.9996346954001211;
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
    msg.setTimeStamp(0.9129493196857241);
    msg.setSource(10865U);
    msg.setSourceEntity(251U);
    msg.setDestination(53615U);
    msg.setDestinationEntity(173U);
    msg.s_id.assign("WVPCINABQXFQWGLOQIAXOUXLYNHTRLGTISDIHATWWVAIHISXGRJJMPVHKDKZUOUVZEDLCR");
    msg.dist = 0.885500041925006;
    msg.err = 0.11524715359180993;
    msg.ctrl_imp = 0.5717505950023888;
    msg.rel_dir_x = 0.9218252004483269;
    msg.rel_dir_y = 0.8158536167818965;
    msg.rel_dir_z = 0.2908072795287344;
    msg.err_x = 0.5474355169814914;
    msg.err_y = 0.6822816847212555;
    msg.err_z = 0.14520250933805046;
    msg.rf_err_x = 0.5053420266620501;
    msg.rf_err_y = 0.30798791610498255;
    msg.rf_err_z = 0.4853009786782153;
    msg.rf_err_vx = 0.24077334872308498;
    msg.rf_err_vy = 0.3503819418377456;
    msg.rf_err_vz = 0.18140051075793062;
    msg.ss_x = 0.3322477674791454;
    msg.ss_y = 0.9710905193138802;
    msg.ss_z = 0.13437848386578566;
    msg.virt_err_x = 0.7132222902414446;
    msg.virt_err_y = 0.31999498837188267;
    msg.virt_err_z = 0.10985798365207344;

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
    msg.setTimeStamp(0.7701137794053133);
    msg.setSource(30146U);
    msg.setSourceEntity(212U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(37U);
    msg.s_id.assign("AQUOALXYXWBRVIFWSYPKPURXYLAHNQSJLO");
    msg.dist = 0.14744085447884459;
    msg.err = 0.9709003381123404;
    msg.ctrl_imp = 0.041888294705355045;
    msg.rel_dir_x = 0.1831727695459201;
    msg.rel_dir_y = 0.3187894823614962;
    msg.rel_dir_z = 0.9058766459681543;
    msg.err_x = 0.16687783050654725;
    msg.err_y = 0.2775071161924727;
    msg.err_z = 0.11289381768233497;
    msg.rf_err_x = 0.6745648031254288;
    msg.rf_err_y = 0.6573464571737445;
    msg.rf_err_z = 0.6624350453898986;
    msg.rf_err_vx = 0.20675113289262625;
    msg.rf_err_vy = 0.19134413540665396;
    msg.rf_err_vz = 0.08586454791857101;
    msg.ss_x = 0.9020655860617297;
    msg.ss_y = 0.8830687435543623;
    msg.ss_z = 0.14998990247837773;
    msg.virt_err_x = 0.3566813659714668;
    msg.virt_err_y = 0.9885955473753301;
    msg.virt_err_z = 0.6387518100362587;

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
    msg.setTimeStamp(0.36037408690076367);
    msg.setSource(38177U);
    msg.setSourceEntity(240U);
    msg.setDestination(34370U);
    msg.setDestinationEntity(120U);
    msg.s_id.assign("TNBQOMRLBPNZCQHTGBQOWDXAHDSELPMKDNSMNVIQIYFEQFHUBRTJYVTUBCDMNZYVHKEQIIZUDAOKSDZMPOPNVZNKBQMMAARXTPREILXHEDRDEJFAEGLYWMGGOCNSVOOXCFERTFVNYHVOQFURBCJZXWNSJY");
    msg.dist = 0.24941583904000653;
    msg.err = 0.29922643007067806;
    msg.ctrl_imp = 0.5209866665921153;
    msg.rel_dir_x = 0.40328907843653694;
    msg.rel_dir_y = 0.024137153838195036;
    msg.rel_dir_z = 0.8075242063887338;
    msg.err_x = 0.5306022911301215;
    msg.err_y = 0.5693567792594744;
    msg.err_z = 0.046904309950100864;
    msg.rf_err_x = 0.9417322822913597;
    msg.rf_err_y = 0.4937626026531068;
    msg.rf_err_z = 0.3858851446572402;
    msg.rf_err_vx = 0.9162442764753355;
    msg.rf_err_vy = 0.41279940193810916;
    msg.rf_err_vz = 0.9287939312602662;
    msg.ss_x = 0.7629022067973814;
    msg.ss_y = 0.9348305913441608;
    msg.ss_z = 0.5173835871083013;
    msg.virt_err_x = 0.8922444698834032;
    msg.virt_err_y = 0.8228999588318416;
    msg.virt_err_z = 0.5204794707101225;

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
    msg.setTimeStamp(0.9047807188453965);
    msg.setSource(6574U);
    msg.setSourceEntity(156U);
    msg.setDestination(51724U);
    msg.setDestinationEntity(116U);
    msg.timeout = 30433U;
    msg.rpm = 0.3433106974689545;
    msg.direction = 144U;
    msg.custom.assign("JINERXSDNSVPQPIABWQPBSATOBMRKZWMFZKSRTLBRFLIHRYWQMWHVEXVYHXSLVIXUXEZVDEXNIGOZIGQXDTKUHGOMOIJEPCLTVFFNDLJNZCMLTXHTOSOWDOTAPDQRUWACJBCDERDGYAECYUOPQBBCZNFSALMIGVPJFQAQNUKUCRVXJNPSCLMPKGEJUFKBWYAMQNGWORBAMYTSWBHZHVFYSPKUCZ");

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
    msg.setTimeStamp(0.41347408372557015);
    msg.setSource(12272U);
    msg.setSourceEntity(221U);
    msg.setDestination(50313U);
    msg.setDestinationEntity(186U);
    msg.timeout = 17204U;
    msg.rpm = 0.9655709614479101;
    msg.direction = 109U;
    msg.custom.assign("GIYKQBGRVMFWXBCFSXWLFIEEYUGXSWSSYRWBYPHQJMJKAPTBQHPXFUUGSPOHHXTHHABOKCRZEYTTUYLMJFYTRIKZVNCMRNKDQJALAVGQXJRDXOVUFQLTVQWVLDWGSIRCFSQCDLYNEPRMECTFWDLXUNLJ");

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
    msg.setTimeStamp(0.2892030618278969);
    msg.setSource(36186U);
    msg.setSourceEntity(211U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(243U);
    msg.timeout = 40080U;
    msg.rpm = 0.5103334234713759;
    msg.direction = 182U;
    msg.custom.assign("XKKYTVYSSQYBQPGBIDFQMTVVQHFFQJRZSDJNAUVFHDXVRHAKXECGQGUKPLSVLSWOREWTYCKWQAHWJLQVAIYBZGHZUP");

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
    msg.setTimeStamp(0.3670767663518283);
    msg.setSource(56613U);
    msg.setSourceEntity(176U);
    msg.setDestination(7634U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("DZJRBWFYEGUGADETDUQHPBBHDRGXMKHMUQSATYPEVVRYPFIJNDWOMJWUOFGSNRVCLNNJZBFJYUKVZATVFAONSMOIJWKIOTKDRLLGIZLZKFYJTBABTWRUNOEWKLZXFHOFCNBQOAFKXWXWECICQRYMKIMYGVSCNJEPCBMEAOHSXPKDJNAQHGVSICEROMSTKXLTTVTLCGARCBEZBYXDQVYWQJIANEDM");
    msg.type = 14U;
    msg.op = 111U;
    msg.group_name.assign("YQHNEJKKMBHZBGRNBRCEVWUDBHXEKYDKPAANIGJHFLHECMRDTIOSPKNZXQLQTTIXXSOLVGHJZRDDLZTAJNYTS");
    msg.plan_id.assign("EJFUNZCYOALJTVPDNEOBNSMBNUMNHAIXGCHBWFDKYUSKEAOHZYOZXVFRSOLKRCLWVWDRTBGOAVCELUSIANTNAFVAISJIAHDSTCLHGTWQLSOMJXUQMCZNJZRJBJMMCIOHFDTFKMXDGJGVIKLYZYBKKUUQVWZTUEMUODWEPAZUYFBBERXWFNRKZFBXEPGXGHCRGESWQPXCVCRDHBSQFRTPEKHIGDJIQPYVMQYDOVTPQWKXJLSPQYITGPNYHLR");
    msg.description.assign("EFAYIJBMZRMZFURAHHYDHCSOLIXDQBHRVDNFMGUUVTDLONLQSXTJC");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46544U;
    tmp_msg_0.off_x = 0.74106427432855;
    tmp_msg_0.off_y = 0.23319431921699474;
    tmp_msg_0.off_z = 0.13601881373356972;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9378465035132334;
    msg.leader_speed_min = 0.10302616566179168;
    msg.leader_speed_max = 0.3212818211459181;
    msg.leader_alt_min = 0.9085675849230321;
    msg.leader_alt_max = 0.7008540141732654;
    msg.pos_sim_err_lim = 0.47245709404869385;
    msg.pos_sim_err_wrn = 0.32522411519302974;
    msg.pos_sim_err_timeout = 62841U;
    msg.converg_max = 0.6497289392366474;
    msg.converg_timeout = 39830U;
    msg.comms_timeout = 20086U;
    msg.turb_lim = 0.9511991862296894;
    msg.custom.assign("GUAZDMNTOGUXMSBPCTKRGKFIYFUGZQKCFGLKMYLXYBWTDJTRFXFHYPHFSJNXLWHOWUSXIQIGWACQQMNEJOVHGXPVIZLYOIVVWLPPSLHHWEBDNPMRWQXZJUZKEHUBMNTHWJOQTSABZCTKACRUANNRBCUGPQEVJJGIJZWHVVESPQSNSFDHGOVFQATOAFWJJEXLBRAEMRIODEMQRUYTYZZTPYBDKKADMCFYDBLCKIXYCPKO");

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
    msg.setTimeStamp(0.6945323597444243);
    msg.setSource(22490U);
    msg.setSourceEntity(55U);
    msg.setDestination(61196U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("YYBFZTJNVGLNGOOWDQFEXRMKOLWNZYUXLZIBLOXOWBPMRIGDLBMIGCMTNBQVXCBWJRDIFRNMSNA");
    msg.type = 133U;
    msg.op = 205U;
    msg.group_name.assign("TAZYJDWFZRCPRAXHMVOVEQNUZOXWGIODSMMAGHEESNRCLRQCFRUMKDYVKFAXOYZKVMWQXZJYNKCVTWHPFLHYAXMJXJRWIELWILXJSPLPJIBAKI");
    msg.plan_id.assign("ILOXJRUKLZOPHFOVXRRNPLJFBSFKMNRUGQWFJLHYJSPWJVJWNMSBXAVATDSMFOCMHJULRFRROAGOAHEZALMZVDQESDZTMHVGLFRCBYSGSULJIECTPAENBUGIQZPSQTDYEBCMNCYYXNHVASNDELOGQIGWNQJYHFZAYBMCTRBZABIVSYKOKXXGTQCIUOIULWCVBFNWXHVVDMYAQPTDPRTPT");
    msg.description.assign("ROCWWGYDBAIKHVFXBDVDJOPTVVGLRBKGQPOTRPNPEZOERBSO");
    msg.reference_frame = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17435U;
    tmp_msg_0.off_x = 0.9758523152323574;
    tmp_msg_0.off_y = 0.1761511034770764;
    tmp_msg_0.off_z = 0.7988501569829507;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0995152215830154;
    msg.leader_speed_min = 0.6808954354660689;
    msg.leader_speed_max = 0.44681754723304545;
    msg.leader_alt_min = 0.33290855865749513;
    msg.leader_alt_max = 0.5504287805174007;
    msg.pos_sim_err_lim = 0.6447267477510075;
    msg.pos_sim_err_wrn = 0.24007795245629626;
    msg.pos_sim_err_timeout = 31538U;
    msg.converg_max = 0.5741743936528232;
    msg.converg_timeout = 19886U;
    msg.comms_timeout = 60771U;
    msg.turb_lim = 0.02368645595987051;
    msg.custom.assign("HKBDTVUCHPTJBZKQCYXUAVZKDJBKOQKERVMWDBFDELCAHLKMBGILWPQWWMXVTOMIWBZHCUWXKGZFYISZMOEIUVWIFTOBDYRMBESHZAAEOHQCHLSRHNJZGANFHNSAHNSSYPENQLWCEUL");

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
    msg.setTimeStamp(0.24918778640140848);
    msg.setSource(10724U);
    msg.setSourceEntity(178U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("JQCPFNERGXHADYVHPDVGOELAMEIZCWZVKLNGFBJWKCMBFYBIYYSJNIZHKYHVHXTLOY");
    msg.type = 45U;
    msg.op = 196U;
    msg.group_name.assign("MEOJEWMVNUZZOIKYJOQODYFSRCBJBEYDU");
    msg.plan_id.assign("NDUVTNIXQVYAEHTQIUGWSHKSMPMMAHEOFFYWUDPTE");
    msg.description.assign("RJLSMZBTGJNRXUSDQGRBFWYLHGTEXYVFCNKBVNJIIJAMVGCODWYGHPKHPQCKEBDSHJYBZLHMXWFZVFKZWZUNONDLGMRGMPAKSXRRRVPAABOEFYEKPJVRUQJOUBHIXWFEKNAAPITWISRFLMUWMTQCUFMTQQJOTQUSSDKSPNEAOZZOLVGHCSFCLIBQLIHCLATPFEPWXYXKBZNHMIYBWVTXCHQAZCSCEGDDEOEIYINGJPYLNVOUVDUXOQWAMD");
    msg.reference_frame = 62U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37525U;
    tmp_msg_0.off_x = 0.1387386389203481;
    tmp_msg_0.off_y = 0.10224257697675199;
    tmp_msg_0.off_z = 0.22945409887611856;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9740334132741787;
    msg.leader_speed_min = 0.4318134645335817;
    msg.leader_speed_max = 0.5429982273120321;
    msg.leader_alt_min = 0.40211543323790155;
    msg.leader_alt_max = 0.9843435206908324;
    msg.pos_sim_err_lim = 0.8079611033676068;
    msg.pos_sim_err_wrn = 0.9169618930268746;
    msg.pos_sim_err_timeout = 8763U;
    msg.converg_max = 0.9974577208525118;
    msg.converg_timeout = 17401U;
    msg.comms_timeout = 19434U;
    msg.turb_lim = 0.3303506756124376;
    msg.custom.assign("IBIJLMDXDSTCEOKTHFOHTYYYUOCGZOLHAMZNSKGCWGVELBRXBBTJNQMTNAEKFTEOWFCNHIHSRLRCYAYYEYETDQFYJISQSGJPEHNTPQUSRBAWPQGQFVBBLLHKGZRLQWCXRJUGMIARYUHCBTIJHJXLRJZSPDZBVKWPWFGJKRVIDADCQKINAXUWUM");

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
    msg.setTimeStamp(0.8350871012905996);
    msg.setSource(37651U);
    msg.setSourceEntity(45U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(22U);
    msg.timeout = 42291U;
    msg.lat = 0.35951983564314804;
    msg.lon = 0.1364568983465746;
    msg.z = 0.5187944184910371;
    msg.z_units = 84U;
    msg.speed = 0.9467613704753872;
    msg.speed_units = 140U;
    msg.custom.assign("KBAENWPTGZIGDOHPISUCVBLZDJEWDXFRUZNKVGNKOJWEEXECMVJUZWPFZJEOVIZYHPFWVGEYEMOAARROBALJWXDMUDRLAMFSNFXBPBYPYIHMGCQGZQAKXUIIHOZRRVDUBJULIFXRPVPNNDGFHMUISLMWSOHITTTQDJGLCWWPHCZXOQYAAYNTYLSSHMMJCKLBHBUKFXPSALQQKTCOJTCNBIOVEEVVYXH");

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
    msg.setTimeStamp(0.6196787955316623);
    msg.setSource(37155U);
    msg.setSourceEntity(89U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(143U);
    msg.timeout = 11247U;
    msg.lat = 0.06404429274394641;
    msg.lon = 0.34753643406072743;
    msg.z = 0.8714580714618483;
    msg.z_units = 142U;
    msg.speed = 0.6840346403649463;
    msg.speed_units = 191U;
    msg.custom.assign("RLYGVZZAAPWBROUEVPADZBTZLDPFOYVSXZXMXCDISVXHCFLSQOSXFDKCUAVXNKNCNIUEEJQRQRJIPSKVQYZHKMMOVEZJOFNGKQYDZIGRSLEABTOMWNVSVLBGAIOPUGETPSOEJTCIMBXUJGKHLEHFWLRRJPCIHUIWFKTNMGPJLKYFMOKWFHLQZWDCLTQDSPDWHMNBSAWXDYVNJUYNA");

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
    msg.setTimeStamp(0.3246576673094933);
    msg.setSource(55599U);
    msg.setSourceEntity(165U);
    msg.setDestination(62606U);
    msg.setDestinationEntity(136U);
    msg.timeout = 32730U;
    msg.lat = 0.7605254549300711;
    msg.lon = 0.14996253534780168;
    msg.z = 0.0010974153945101373;
    msg.z_units = 53U;
    msg.speed = 0.018671056737930458;
    msg.speed_units = 54U;
    msg.custom.assign("JCJTRCJOMMFLQIXHSWOAWKLSOPDZHJABDXQBPFIBYNWLRPKXIOOPKOWDYHAAEZKPLGSADNEFJRJLQLVVMVUCGXCVWSIGUXLESVJKERTKWSUNKFSZNGQYMEPYYXTTZDDNWRQHTEICSBFEDCPIVHYHGMBVFXIWNXOTOUORFGCYNXCNRZTFRZDTNZJHUABDEGMEMISOGCPTFIWSVAQMXNBVWKYQZLMAYURRZCDYUUBPAUPGEQZHQM");

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
    msg.setTimeStamp(0.2969873921045587);
    msg.setSource(34010U);
    msg.setSourceEntity(101U);
    msg.setDestination(14967U);
    msg.setDestinationEntity(192U);
    msg.timeout = 28628U;
    msg.lat = 0.8555343523878612;
    msg.lon = 0.7741373950926435;
    msg.z = 0.18703061169283297;
    msg.z_units = 144U;
    msg.speed = 0.49863593042330634;
    msg.speed_units = 54U;
    msg.custom.assign("POMPCGXUZJUCDLYWPAUMGTJQOKXVRFHIRYYZRCRVXOWJWOAZNFLREBIMBHAIDHWAYJZLKLKYHCTKVNGQFRQAYXJIBHFSZHUMEBDTFODEWQMQECEFNMZXFAUULHVCQWODPVIJLNTNPOSBPFPYGOLBNGMACNBISXOEJHSWHRAUBRFTQHTIGMPXDFUEQVYOIEGKKBNZKWBDWZRIWTCJVSGJTCGSSU");

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
    msg.setTimeStamp(0.26631186375485416);
    msg.setSource(48985U);
    msg.setSourceEntity(65U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(191U);
    msg.timeout = 59276U;
    msg.lat = 0.19973804249513072;
    msg.lon = 0.8074054270257245;
    msg.z = 0.166290869468797;
    msg.z_units = 27U;
    msg.speed = 0.14583755479305638;
    msg.speed_units = 107U;
    msg.custom.assign("CDSOJRKZSRJEJENVMTGCXOJMSFYSJYYUIFULQMFOPCUMDTBYKXTNJIPPTCJPTDIMZCXHYXWLMZSVILVHRWKLXALQIOBEAZWWFHIPBOWGDIXAURAAFHHNUWWHNDQXBUSTHRKUNLQIZVWURKCEMJUZNFPSXAQEOVZKFVCYZYYBEYQFWMRCGBOGRKNNIVGLDYLKGIGPCXHZGBL");

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
    msg.setTimeStamp(0.9815124516373575);
    msg.setSource(3783U);
    msg.setSourceEntity(238U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(213U);
    msg.timeout = 63418U;
    msg.lat = 0.7130054496457936;
    msg.lon = 0.025342362827785125;
    msg.z = 0.05235785090243261;
    msg.z_units = 10U;
    msg.speed = 0.4797444342287308;
    msg.speed_units = 82U;
    msg.custom.assign("QDWTFRTQGVMJZREZQLIVJBZ");

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
    msg.setTimeStamp(0.6786715901500004);
    msg.setSource(20543U);
    msg.setSourceEntity(124U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(220U);
    msg.arrival_time = 0.9127907100686812;
    msg.lat = 0.9998795842682076;
    msg.lon = 0.8897834443344155;
    msg.z = 0.8624758410949648;
    msg.z_units = 65U;
    msg.travel_z = 0.21478230197915804;
    msg.travel_z_units = 36U;
    msg.delayed = 149U;

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
    msg.setTimeStamp(0.5410976803653607);
    msg.setSource(7085U);
    msg.setSourceEntity(21U);
    msg.setDestination(37876U);
    msg.setDestinationEntity(184U);
    msg.arrival_time = 0.04229782066002219;
    msg.lat = 0.9303226834818321;
    msg.lon = 0.018729741689769486;
    msg.z = 0.1809458102782492;
    msg.z_units = 138U;
    msg.travel_z = 0.6331786641006404;
    msg.travel_z_units = 95U;
    msg.delayed = 169U;

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
    msg.setTimeStamp(0.2126156274163311);
    msg.setSource(58416U);
    msg.setSourceEntity(51U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(106U);
    msg.arrival_time = 0.6834412969800207;
    msg.lat = 0.46351333976353926;
    msg.lon = 0.2023160635529313;
    msg.z = 0.3177205333652303;
    msg.z_units = 40U;
    msg.travel_z = 0.8362647939200968;
    msg.travel_z_units = 55U;
    msg.delayed = 142U;

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
    msg.setTimeStamp(0.2826560749164362);
    msg.setSource(1719U);
    msg.setSourceEntity(127U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.6421078400634531;
    msg.lon = 0.42294860529418477;
    msg.z = 0.1252608815661962;
    msg.z_units = 125U;
    msg.speed = 0.8764568651663147;
    msg.speed_units = 239U;
    msg.bearing = 0.9886258310853113;
    msg.cross_angle = 0.7673105765904489;
    msg.width = 0.4819851669888292;
    msg.length = 0.7833360479386444;
    msg.coff = 151U;
    msg.angaperture = 0.09569787465357549;
    msg.range = 53642U;
    msg.overlap = 103U;
    msg.flags = 74U;
    msg.custom.assign("LDTAEHCIYUHFKYVUMMVPTWIYFNEFYTIWQBLOQAAQQUMEHZQXZRTPBMZEFPPUQGSMPLBGMTIJRNIHWALYKUKPGUCJIWNOXSWIXZBQZYLGJICCLURFOTJDKASNDYQQVXEKWKRAESBFRNGKSTHGXMWMDUAWXOVFOSRDDKGFGKDHCSSDXSYVVAXYBKG");

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
    msg.setTimeStamp(0.27221859930551096);
    msg.setSource(858U);
    msg.setSourceEntity(226U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.9105746217176244;
    msg.lon = 0.8698130043518556;
    msg.z = 0.22523957777479142;
    msg.z_units = 70U;
    msg.speed = 0.8913852659884985;
    msg.speed_units = 30U;
    msg.bearing = 0.2383917958315388;
    msg.cross_angle = 0.08937304517566014;
    msg.width = 0.3171775284236631;
    msg.length = 0.7730452365200355;
    msg.coff = 175U;
    msg.angaperture = 0.04850391757684425;
    msg.range = 63785U;
    msg.overlap = 52U;
    msg.flags = 249U;
    msg.custom.assign("VWWCINLITKUOWAZEBYDOJEGSHRUOSSYIAXCXQNZTWSLQOPBYBRWWPXTGFFRDOTRHANOXVJLYFAMERRXAHLEUOGQZMUNHMGDOAVDGZKCLFMUQEITSINKAPJZSBQNBJKSYDZILTFVQFEBYFOMHHJTLVNWZNA");

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
    msg.setTimeStamp(0.5855731176376873);
    msg.setSource(27359U);
    msg.setSourceEntity(137U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.8999631077207954;
    msg.lon = 0.3376941704091255;
    msg.z = 0.5841679231819096;
    msg.z_units = 211U;
    msg.speed = 0.6393654642331762;
    msg.speed_units = 201U;
    msg.bearing = 0.15897538160118885;
    msg.cross_angle = 0.1448013136958206;
    msg.width = 0.12369065532302803;
    msg.length = 0.4040741242296282;
    msg.coff = 211U;
    msg.angaperture = 0.656618765905451;
    msg.range = 29448U;
    msg.overlap = 8U;
    msg.flags = 214U;
    msg.custom.assign("SKZHTUFGOPNMLNEQHCFIUSZGWSHNAVOIDVIEVDXTQQNJEPGDHWNOZTFPOMVPQIWJAOOFBMFRXKCWIGSVPKDQJJUFYCCJBWMTKTXTBRDSZDFYRCALSRYUGTWCKCUOGMHGCOAGYYJMAGKVIWCYYSBAILUXNBHLVQDZYALJRRTISKBXXZRTOXJNHVMJOMEUPFYEMVPGAZQFYQDTHKEPLHEAPLBWINMRDJNE");

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
    msg.setTimeStamp(0.8333251108517591);
    msg.setSource(3650U);
    msg.setSourceEntity(173U);
    msg.setDestination(63896U);
    msg.setDestinationEntity(19U);
    msg.timeout = 30635U;
    msg.lat = 0.14229658171585347;
    msg.lon = 0.6873763349017871;
    msg.z = 0.8843520781993692;
    msg.z_units = 252U;
    msg.speed = 0.9108465036534642;
    msg.speed_units = 165U;
    msg.syringe0 = 139U;
    msg.syringe1 = 28U;
    msg.syringe2 = 131U;
    msg.custom.assign("DRLTCWFWMIEPKCKAGXMOUNXFYOPRTHJONWGXVEXCEBQKYIEHGFMCVGLQOWGKOVUBVYLARVFEIFYADTRZQMWNBRITXWIYCJSZMJHHFTITIMBMDYKOPIGHVZCJIGRKOGALTLHSXPUNUKDBMPFUHLUDQZSPBASUSKQRVQCTUWBNOAOFEDLTCQZSCJJWYZZAJVZMSXJXXAUGYNRKSITPWBDFACQVLEKNQBEHSMYNE");

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
    msg.setTimeStamp(0.7015932932761874);
    msg.setSource(20111U);
    msg.setSourceEntity(152U);
    msg.setDestination(65272U);
    msg.setDestinationEntity(3U);
    msg.timeout = 54758U;
    msg.lat = 0.9270658114075307;
    msg.lon = 0.009546073145370926;
    msg.z = 0.5076017443492952;
    msg.z_units = 114U;
    msg.speed = 0.8568169539808723;
    msg.speed_units = 239U;
    msg.syringe0 = 225U;
    msg.syringe1 = 63U;
    msg.syringe2 = 246U;
    msg.custom.assign("MZASOQGJZUPNOBFKRKCGMONBTXRDAWABANHFHOHZXHLMUWCCPQRWCGGLRPFZSFFVZHYODRNWRBYXWWCPYAKOXURTOBUIPAWOKPMVWDCJCBQRHKPVSDN");

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
    msg.setTimeStamp(0.9810751850551533);
    msg.setSource(45565U);
    msg.setSourceEntity(176U);
    msg.setDestination(24700U);
    msg.setDestinationEntity(96U);
    msg.timeout = 9133U;
    msg.lat = 0.672487883487121;
    msg.lon = 0.30653229492275247;
    msg.z = 0.5597320672443474;
    msg.z_units = 186U;
    msg.speed = 0.3239443232566912;
    msg.speed_units = 56U;
    msg.syringe0 = 180U;
    msg.syringe1 = 142U;
    msg.syringe2 = 240U;
    msg.custom.assign("JCLGLLFVZMVXLHHNMWRYXUDDDARHLGASO");

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
    msg.setTimeStamp(0.12470475598904873);
    msg.setSource(49659U);
    msg.setSourceEntity(142U);
    msg.setDestination(18593U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.884686505526908);
    msg.setSource(33615U);
    msg.setSourceEntity(170U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.35338423965678833);
    msg.setSource(42225U);
    msg.setSourceEntity(115U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.46488435029743846);
    msg.setSource(41812U);
    msg.setSourceEntity(185U);
    msg.setDestination(27839U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.7251847671962919;
    msg.lon = 0.04886294546016634;
    msg.z = 0.14618333542557438;
    msg.z_units = 212U;
    msg.speed = 0.30803757855293223;
    msg.speed_units = 164U;
    msg.takeoff_pitch = 0.25266324375156135;
    msg.custom.assign("RDEYNFGEVXLWTFDIIWHBEOJNGGQNCGLPGHQLKBUQBGHKOHSWITNSWXPWKGBVYVTTFSII");

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
    msg.setTimeStamp(0.5982181501662882);
    msg.setSource(32444U);
    msg.setSourceEntity(222U);
    msg.setDestination(32643U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.9217478139626079;
    msg.lon = 0.947540327666122;
    msg.z = 0.9744474997623264;
    msg.z_units = 4U;
    msg.speed = 0.5463421503004003;
    msg.speed_units = 179U;
    msg.takeoff_pitch = 0.29464696033166404;
    msg.custom.assign("LDSOFRRJAXXBALODHJDQROYMICVHVBAGPNDRUSDUVJBCFCNLPRVXTQVJZMKYGESQYHQXOFFNLTZXAKZDIZRQNKWGKPPJWYWSGFTBZHCGEYIQAUJWRSAZEBCPUW");

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
    msg.setTimeStamp(0.7557570510588464);
    msg.setSource(15622U);
    msg.setSourceEntity(213U);
    msg.setDestination(14138U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.1840638951844895;
    msg.lon = 0.6780817529353103;
    msg.z = 0.8262776768907614;
    msg.z_units = 173U;
    msg.speed = 0.07711126565531579;
    msg.speed_units = 92U;
    msg.takeoff_pitch = 0.43868733421617223;
    msg.custom.assign("IZMSDVOFKKJWTQGARBTKOZSGMVAPLXTUJXSPIYGNANGFZKKWTTDHHERYDXDYYNHATJXZIRJVBBMLMJKMJPOLMRREXJQLDVWNEZPWKFQGUSMHCBLFVGPEWOTUWFPQGHLDIHCSXQNWBSYCMNOEORAIVGRHCEMUHWICVDVEQPJSXXDHTARRPIKCXBBVQGIOQAY");

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
    msg.setTimeStamp(0.7355375155027426);
    msg.setSource(55469U);
    msg.setSourceEntity(253U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.5153251455264982;
    msg.lon = 0.8606410953611725;
    msg.z = 0.8108152365315893;
    msg.z_units = 238U;
    msg.speed = 0.7400130173884302;
    msg.speed_units = 27U;
    msg.abort_z = 0.8769521410737126;
    msg.bearing = 0.5349393384502462;
    msg.glide_slope = 221U;
    msg.glide_slope_alt = 0.5234311259719148;
    msg.custom.assign("QJIDEXHMZSPNUCSRSHNDOSBRQDVEVSFAWSUBXAJZDERWQYEGKHFXTYCVTYHWJHGPDOGRXNXICOQLFUJZOWJLEONKBTYXDVMLPLXPKOHMCXMCQAQTUAAEPTCZRLIVRS");

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
    msg.setTimeStamp(0.337613404680836);
    msg.setSource(54363U);
    msg.setSourceEntity(186U);
    msg.setDestination(50911U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.5676087827676574;
    msg.lon = 0.5304296703955028;
    msg.z = 0.8941909546310439;
    msg.z_units = 198U;
    msg.speed = 0.09396089702472354;
    msg.speed_units = 105U;
    msg.abort_z = 0.33183176287192206;
    msg.bearing = 0.1531474792405082;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.8660264628615;
    msg.custom.assign("GQVCLYKBQQWBZIMBOTIYFOLNEFTZHVPCGPORGJNXPWNZZUNGCSWLMAAMENKZTONVZGRMGFXEOALJIVXODTFMCTDQZYRVEFIGSRYCNIPPMJOXJMJDEJVNFFUVFBAIRPIWQQTQELUKTCKRFURNODLSDWSAHJUUS");

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
    msg.setTimeStamp(0.9942782405360548);
    msg.setSource(45370U);
    msg.setSourceEntity(137U);
    msg.setDestination(29946U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.8402141236944969;
    msg.lon = 0.14879019912052116;
    msg.z = 0.37762622053953754;
    msg.z_units = 122U;
    msg.speed = 0.5738746910634709;
    msg.speed_units = 108U;
    msg.abort_z = 0.08884680233411058;
    msg.bearing = 0.2841536115137293;
    msg.glide_slope = 15U;
    msg.glide_slope_alt = 0.22145675072778248;
    msg.custom.assign("YODYAFZHRELHZJIIHALSQVLPALPOIKGZVJYXNKNRNEQRBPVEGBDKHKGTRBKGYBAYYXWPDRKWLCIZXJERJVXSTOOAWZSPQHWNWKXMDIDCUHFNJWMMUUCBFENZIXAESUGXMZPCFTVHFTZQXCXLRWOUTANMYLVFWSJOUMJAOSJMUNVGFRCGITTDSJATWNZRBDDETORUXCEMSYMZCLESIPHHIYFCDCUVKSTPPQQAMIBKWKNYJBUVGQO");

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
    msg.setTimeStamp(0.6338292509630024);
    msg.setSource(16834U);
    msg.setSourceEntity(18U);
    msg.setDestination(47595U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.7470578322738045;
    msg.lon = 0.5043987724380707;
    msg.speed = 0.7869293788354934;
    msg.speed_units = 154U;
    msg.limits = 104U;
    msg.max_depth = 0.2694136513402574;
    msg.min_alt = 0.13236434384576112;
    msg.time_limit = 0.3761271637348168;
    msg.controller.assign("ZBWXDCVZKWOHLRRDBXAJWDSFYHSLMGJKCCBQOGEIDGCZMJ");
    msg.custom.assign("JRJOACZABNUBQVQKDAXKSAMWMVHHEYUEYRBYPTLZGUAHMFANQPJBHDXGWVEGEMQMDFVOOZBXTNUHWRAIQQDTZCHCLBNWDERSFJEZGKDOUSIOMFUJMYODGSFJYJXPRRSCXQTINRGYVXPYMQINJLNWDIUFHGSKKPLWWFDRNIH");

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
    msg.setTimeStamp(0.156280848191372);
    msg.setSource(2219U);
    msg.setSourceEntity(71U);
    msg.setDestination(57178U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.9417088135661159;
    msg.lon = 0.8979539919017805;
    msg.speed = 0.6526732553044525;
    msg.speed_units = 156U;
    msg.limits = 43U;
    msg.max_depth = 0.0015195786209404316;
    msg.min_alt = 0.7379183569691894;
    msg.time_limit = 0.2424713493692492;
    msg.controller.assign("TVOCXVSFPQWWHPAVCYJRIHHFJMWHEXZROYZSOLKBIADNYVGBWJRSFBPBOUPZHHNKCLGICYLKSFXDUREMZFHCYTBRDXQPUKTVAEZ");
    msg.custom.assign("TKJMSFOGHEWIBPIEKAYGWTRSSCSGYYREYSEHWQYDQQFUZFNMTZOPZOVCUXHBFMXABPIBTVAZFDTYFKQXLNQAZUEX");

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
    msg.setTimeStamp(0.009350842828922512);
    msg.setSource(11695U);
    msg.setSourceEntity(126U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.4364866709818568;
    msg.lon = 0.6327066915821089;
    msg.speed = 0.6009431572823445;
    msg.speed_units = 47U;
    msg.limits = 238U;
    msg.max_depth = 0.2962034557806431;
    msg.min_alt = 0.3603922941388301;
    msg.time_limit = 0.7230592791947085;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6197908989247036;
    tmp_msg_0.lon = 0.5862464108704442;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YBNMXTDKPSIABDHUOTWODKSYYAQVZWDNURHBTQJIMTBKFKLJKKYSSDOIPGHLCPZUUSEDCJGVHCPAOJBO");
    msg.custom.assign("HMOQVAFKXVKHFKPDRGHAXDONZGGETWZPBVUWCTGELWOXPHVJNLJYEZIWXMPBYEWIDJCHBAYXMFOWHWPXGUUBZSAVRSNMNGKZJHDKRJLQVZQUKFPFQWTJHUBMQQLAYLHAIHLCIJQWVTEFKDGYOYRLNSRDSED");

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
    msg.setTimeStamp(0.382990977778366);
    msg.setSource(10229U);
    msg.setSourceEntity(95U);
    msg.setDestination(34794U);
    msg.setDestinationEntity(187U);
    msg.target.assign("BQCJLWDRVHKQYEAMOYAFUIHQGXHLENVNTOJSPGGPSSDJZETJKFRNZFSSTRMASQCEKVYZWKYCIQDNZMVXBUHR");
    msg.max_speed = 0.5109740601316697;
    msg.speed_units = 104U;
    msg.lat = 0.5601914520226128;
    msg.lon = 0.8573275991343811;
    msg.z = 0.4849371216924605;
    msg.z_units = 240U;
    msg.custom.assign("PAIMDBUBFWLYMQRFESKMCAOHAYYBONKWRUXNXUYTDFDFNZRGYWATLBOS");

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
    msg.setTimeStamp(0.8075371069819097);
    msg.setSource(25083U);
    msg.setSourceEntity(67U);
    msg.setDestination(33787U);
    msg.setDestinationEntity(71U);
    msg.target.assign("UCBHHKSEJIFQXAHOIMTBEIMNVNLVJPDSNVTNGDQKPMNRQGLFZDCLXATWKFQDWMBQDHZGCTLOXYCQUTIZIKUYISWCADFOMXAVEESZCZYSFZOLOLHKONBXTLRAZAYRWSUPJCDYIJWJXMSRSUZENNBBQYOJTIEVDZAYJPXFWDMLRFIKGJJDBGXHFKVSEMUNGEXPGHYRPHZKGRVVYUQVMPBHNQ");
    msg.max_speed = 0.984720832214259;
    msg.speed_units = 164U;
    msg.lat = 0.6817621273827803;
    msg.lon = 0.8805800326537874;
    msg.z = 0.4962477323372988;
    msg.z_units = 118U;
    msg.custom.assign("GGGYDTCOIYNVRJOFEWQFKEIPZDMHEJRQTBQKQDYJFGNMFSNSRTJTNLOYTIRZXOYWUBUWVDAKSVWWVJLBJPMPJLVXAEGNSCHDWXNPHUHIHKTQZYJSRPWNZCULOUIGMRVVKLZHCSOXJHKAQPZPIITILRBXCPXVFOXRVYRSHXM");

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
    msg.setTimeStamp(0.5583859633659147);
    msg.setSource(7864U);
    msg.setSourceEntity(223U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(169U);
    msg.target.assign("QXVBCMLTAWNUZCVCVBUNTSTOLZMLIQOEGTJQPCYNPKFQWKGYJCDHVWTSWIMSZPQZERPXHXSKFTAJRTOOHPAKDBWMBWAIVPZXNQGIMVYGMR");
    msg.max_speed = 0.8868995414619976;
    msg.speed_units = 236U;
    msg.lat = 0.431732188482834;
    msg.lon = 0.8323950562940987;
    msg.z = 0.376265073934116;
    msg.z_units = 188U;
    msg.custom.assign("KPMURFNGDOBCEGOFNCZREUAJSDBSNQMBTLXEAWCACOJAHVQBHVSARXTEVIODPHEYOAVNWVPAMXZPMXQPUJMCWRQGGYFPDMUOIIXVWDLLHIORGQRBHTWWWIXYLSDODFTXFORNDYUBISJTKYURGMZKULTTCVZZBZVNQKCDLHJPFACIDEYGWZMYKLRHJTGTLXPXQYYVKJWXLIEJGMCS");

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
    msg.setTimeStamp(0.7756822146936696);
    msg.setSource(39450U);
    msg.setSourceEntity(185U);
    msg.setDestination(20827U);
    msg.setDestinationEntity(21U);
    msg.timeout = 16459U;
    msg.lat = 0.5400301488930201;
    msg.lon = 0.11155530131511693;
    msg.speed = 0.6584065882318186;
    msg.speed_units = 176U;
    msg.custom.assign("LEMQAHQIELCXOJKNNHXUJHCZMJVGYBWKLGSYWPFRYLWZPBIVTDYEZFTJDZNRVGGCTSWZQKGXWINEIDCQCVMXNQEUCWAPQKXTJIASSZHLDAHOBTRPHYVTPUJSKWFWKUED");

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
    msg.setTimeStamp(0.07661112037662277);
    msg.setSource(9118U);
    msg.setSourceEntity(27U);
    msg.setDestination(9987U);
    msg.setDestinationEntity(187U);
    msg.timeout = 1995U;
    msg.lat = 0.4097951984688012;
    msg.lon = 0.15695500167667786;
    msg.speed = 0.9263299589017957;
    msg.speed_units = 209U;
    msg.custom.assign("LYQNWYWCXPFOMZJMPWYNIDTHURYFEDKQYLRBUPFZMBGFLIKIEVBJHRLGRPKWNTGFTBPOKBQEYHGVKCNGFOTZWXQSMYMSEGRBAMSTHNERHRKINEZQALMJINSWXHMTOVDZOXUORPPISAGHRYSSJSQVLNZHZKZDOSVGDZVQIFJILLVCUAUPAVGUOPQTVCIDCWEJDVATMQIMDSUBLXXAFOYUKQXJWNBEZJKCRAXFCTXOWHEWUGCCBUPHDKADN");

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
    msg.setTimeStamp(0.25000904539269475);
    msg.setSource(47518U);
    msg.setSourceEntity(250U);
    msg.setDestination(52387U);
    msg.setDestinationEntity(66U);
    msg.timeout = 304U;
    msg.lat = 0.916245224120428;
    msg.lon = 0.4288184464688576;
    msg.speed = 0.3622048614655631;
    msg.speed_units = 71U;
    msg.custom.assign("QAQHBILSAIQERUMNEPLTICOETFCMVQSAREHGFPTORJKPSKMYMZYEGRI");

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
    msg.setTimeStamp(0.8336777899381572);
    msg.setSource(53486U);
    msg.setSourceEntity(26U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.43670925684763184;
    msg.lon = 0.5220962135827714;
    msg.z = 0.7679409257679282;
    msg.z_units = 128U;
    msg.radius = 0.6264202318726474;
    msg.duration = 65513U;
    msg.speed = 0.7325851853428006;
    msg.speed_units = 135U;
    msg.popup_period = 29283U;
    msg.popup_duration = 42652U;
    msg.flags = 178U;
    msg.custom.assign("XJHQWJEKCUGJKLLNGAQBNTFRNDKDKZNPWKXSLPHIHEYJELGBKMUZCZQWOQXYNGLERKAZTJCVYJDOHGZANNDPUUATIZZWSXMLFXOMIIPKJTSGCPQRYFYHOGUWRIIOWNVEQQ");

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
    msg.setTimeStamp(0.23743706953931254);
    msg.setSource(55460U);
    msg.setSourceEntity(128U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.03344284533986486;
    msg.lon = 0.8841826309400204;
    msg.z = 0.2753515924526114;
    msg.z_units = 241U;
    msg.radius = 0.509192605864322;
    msg.duration = 63369U;
    msg.speed = 0.3844401209266095;
    msg.speed_units = 52U;
    msg.popup_period = 49235U;
    msg.popup_duration = 37070U;
    msg.flags = 6U;
    msg.custom.assign("LSZKVDCDJNATYXBJIUDEQCUMYFIHQPNOBHPTVQHZZSVYHZTYPAPUITHXXJKHLWISXLJMWKRYSCQSJKANVVMRXOMLDOUFFGQHZPCWUFCTYEMYKLZUVXOXONBRFDIGMWVYCIFBEKFPDQEBMWUOUGNSCDPHTRAHZBFLLSRIABKNQEMPJPKHZOGGNWROWFBJELYSJXS");

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
    msg.setTimeStamp(0.1332604720051196);
    msg.setSource(18666U);
    msg.setSourceEntity(44U);
    msg.setDestination(26409U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.576425412651437;
    msg.lon = 0.815104646413448;
    msg.z = 0.345186156956491;
    msg.z_units = 152U;
    msg.radius = 0.3261698467156332;
    msg.duration = 50997U;
    msg.speed = 0.49316028191399486;
    msg.speed_units = 25U;
    msg.popup_period = 43298U;
    msg.popup_duration = 18881U;
    msg.flags = 50U;
    msg.custom.assign("FZAEWARCFXKQXAYHHZLCCPMWMULMWNGFORGOETUGAUYMDSTVNVGOBR");

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
    msg.setTimeStamp(0.7939937395239406);
    msg.setSource(65164U);
    msg.setSourceEntity(120U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.953437181733066);
    msg.setSource(34894U);
    msg.setSourceEntity(201U);
    msg.setDestination(30203U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.9281011184286);
    msg.setSource(16026U);
    msg.setSourceEntity(53U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.2355432202856721);
    msg.setSource(64650U);
    msg.setSourceEntity(124U);
    msg.setDestination(2135U);
    msg.setDestinationEntity(34U);
    msg.timeout = 20722U;
    msg.lat = 0.0701268280721854;
    msg.lon = 0.5973683759363607;
    msg.z = 0.10909364034422642;
    msg.z_units = 21U;
    msg.speed = 0.9457305234174018;
    msg.speed_units = 145U;
    msg.bearing = 0.3812982300445952;
    msg.width = 0.356687210124508;
    msg.direction = 78U;
    msg.custom.assign("CJITLJFYJSWLPDUGLDOSLTZTZWEAGFIDHAQGVKJAIUPWURFCPJKQPXNMCZENWMYMAEEBNPTOEHAJEOUOSHKSZBMHJXJXHNIGKUGQZZGHSZWX");

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
    msg.setTimeStamp(0.9765373634320371);
    msg.setSource(34988U);
    msg.setSourceEntity(22U);
    msg.setDestination(1999U);
    msg.setDestinationEntity(113U);
    msg.timeout = 329U;
    msg.lat = 0.7147539828435578;
    msg.lon = 0.4627966630673255;
    msg.z = 0.3266432177380809;
    msg.z_units = 14U;
    msg.speed = 0.5992783778678668;
    msg.speed_units = 205U;
    msg.bearing = 0.02011966855220726;
    msg.width = 0.706468847499632;
    msg.direction = 182U;
    msg.custom.assign("ZIBZLFEPMIQYHLVAGWVYUIDSKHVNGYQGVRJTECHREDNRYAACOQUMTWETYKNOHJTMWASDYPLLLEGFFDEEKFHGWSNAVCCWGEBCNSDTFFIUXJKOQSHAKDOLBJHXX");

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
    msg.setTimeStamp(0.7469406125826575);
    msg.setSource(5273U);
    msg.setSourceEntity(248U);
    msg.setDestination(14786U);
    msg.setDestinationEntity(0U);
    msg.timeout = 56621U;
    msg.lat = 0.7613033013329569;
    msg.lon = 0.17478624268236131;
    msg.z = 0.8117982827153339;
    msg.z_units = 151U;
    msg.speed = 0.6183884885967077;
    msg.speed_units = 67U;
    msg.bearing = 0.9293664383840737;
    msg.width = 0.9650854167864388;
    msg.direction = 93U;
    msg.custom.assign("NUCMZIMLDGJOUTINLPKSVHIBLNDIXBBSCBMORWVBGVQXPBRKVMNGHYFWTPWYVPPQZVFLURGSYJKLESADGLZERWWERCMFEQFUXDBEYYLDNDQHZTKNEUJQKMXUYSDMOHUFZAPOOGNIWZRSTJFSOUEPIKJSTIRHOXATLFLGBJHDGOVAENZCFTBKKQMNAIAPVOGZRJCIMUQRYDMGHW");

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
    msg.setTimeStamp(0.1254324807016748);
    msg.setSource(29U);
    msg.setSourceEntity(90U);
    msg.setDestination(4322U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 168U;
    msg.error_count = 67U;
    msg.error_ents.assign("APHYOPZBMRSVLEXEDLPNJPFITQCCEVQAJSOYZQHDFOLNXTRUDVEAYXFPJHMBIISFRQLWHKWITZHVOHNYDMSJDTWMTFGVHOIFCWCTJXWGZSJVUAYCKLBUKFIXBGKKBHMJOKGANNTCPUKAEJSEGAHBBIVSWYVLNBMZFOYIABHZREXPRGUEJLQLNBDYYOCZWUXUTFNEMCSMNZMZQWOGUQAYPNCKGGEGRJDLQFZPTRDRUXVV");
    msg.maneuver_type = 42619U;
    msg.maneuver_stime = 0.5762540645571654;
    msg.maneuver_eta = 60447U;
    msg.control_loops = 471469134U;
    msg.flags = 123U;
    msg.last_error.assign("TLGFBWWBMCLGIEHCITGMIYTVHBFSFEIAAKEBLIWLONOOUVSHZAVKXKDXBUUMOTDWHOCKXHFBPJYHQOLJRRNZQPVHGPPOCDKPKVFZYJTVXZSRSBRWZGLROMGRABXEIUJKQNUSYGRAYLIHIWCQ");
    msg.last_error_time = 0.5058117451184244;

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
    msg.setTimeStamp(0.8333284619179798);
    msg.setSource(29582U);
    msg.setSourceEntity(40U);
    msg.setDestination(22438U);
    msg.setDestinationEntity(176U);
    msg.op_mode = 195U;
    msg.error_count = 124U;
    msg.error_ents.assign("MBMWLDAGUFEBAGQJKWJHSOMKMPGZPALUULERYBISQAFNVSHPVVEBOMWSUFZAKYOUZTNFCFSTQCDPGLRGBTNBPLHLJQUYTAXNLTJELIDWYNXESTHXTDUDBZOVRZSMEXYKRIKQOWLUPIXGDWWSDZGJIEZJBTFRKCBICMCVQGVFIOZQCYJTIHLKMKUYGOQYQKJFRFOWSKNHHCNCC");
    msg.maneuver_type = 2320U;
    msg.maneuver_stime = 0.5227865417790226;
    msg.maneuver_eta = 55116U;
    msg.control_loops = 1160031561U;
    msg.flags = 10U;
    msg.last_error.assign("OYPXBCVWTZEZHEUGWQHVRLKZNKFEZWGCIJNFKPCQLANVBFJTDJHFMGKDIUDJYVFKSMMDSIVQNYEXFMWSMJVNLURJGBAFEEXZKNODLXLJPMUVAWGBMXHOEERGJAIUIQPXOPPMSGHCOTXERALRFHMQDSYAGTRQFYHIDYCTWCFKB");
    msg.last_error_time = 0.5034636629761001;

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
    msg.setTimeStamp(0.49377147784502007);
    msg.setSource(63102U);
    msg.setSourceEntity(37U);
    msg.setDestination(54522U);
    msg.setDestinationEntity(96U);
    msg.op_mode = 72U;
    msg.error_count = 249U;
    msg.error_ents.assign("MLURZKUICPMNJSJMDSATSWOYNHZOEBEBJEOACIAKAHIJJRURCLEWYIXSWTBVHUNVKOJZTVGVWVQALGQHRMYKGCEKDIHRUVRIZQFAMFPPPGOSTZWLVVDFBFDSBVMRJXEDDQRLUNCWJGXYBXNZAWPDTLBXKRDTSEGAWNWTACPUYITSUOIEPNBONHRKKXCYJEFGNYCXP");
    msg.maneuver_type = 12342U;
    msg.maneuver_stime = 0.8648119465277012;
    msg.maneuver_eta = 21513U;
    msg.control_loops = 2290860829U;
    msg.flags = 73U;
    msg.last_error.assign("CUXGTBEMHQHTBDSMDWZROCQLQYHMCEZIUSHIDUB");
    msg.last_error_time = 0.32596666398179985;

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
    msg.setTimeStamp(0.6068640767394463);
    msg.setSource(22339U);
    msg.setSourceEntity(137U);
    msg.setDestination(59402U);
    msg.setDestinationEntity(40U);
    msg.type = 244U;
    msg.request_id = 32337U;
    msg.command = 94U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.4309339538950677;
    tmp_msg_0.lon = 0.6051527605267356;
    tmp_msg_0.speed = 0.3799230419144801;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.limits = 35U;
    tmp_msg_0.max_depth = 0.2584622041582446;
    tmp_msg_0.min_alt = 0.11250806085116649;
    tmp_msg_0.time_limit = 0.612077705737242;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.027381673055401845;
    tmp_tmp_msg_0_0.lon = 0.7220318510637529;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("IDPJOMBLYSUDRVIQBRVNLWJTIMJVMLXABEJMZDPYGAPWHTKSBTXZOFMDNLSFHOVFMITXJZEV");
    tmp_msg_0.custom.assign("FYUURWCILDAOOHZYXLOYEFTDLUICJIQWPVMBUVHTPLFQHNOXFDSXMECOEKAKSNZAJUBXMPJLNGCTCWIRVOJVMHGRYWFEOMALQWPKSWAPMLIJERIUUYBLZQWQYZXTYRQCJJKDCSHOZDHKPIBDGQFXUVBNSTIZIXAHNKMGBQAMFSDYPGVFCGBAVSMWGKXBLIKXSHHVQZENNBSYERHTFLURDCMPPKJGJZERWTVRGZJAUZPSTX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45784U;
    msg.info.assign("VHDVDCXATPNNDKWKYOTFO");

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
    msg.setTimeStamp(0.9868580141983135);
    msg.setSource(9352U);
    msg.setSourceEntity(236U);
    msg.setDestination(14483U);
    msg.setDestinationEntity(58U);
    msg.type = 93U;
    msg.request_id = 56062U;
    msg.command = 242U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 29565U;
    tmp_msg_0.name.assign("JEHXLRQOHSEVQNABKSIDPCWXBELWTQWHGOOGAFDPSYQHMXJHIACCNVSFKYJVIGUAUAZKFRWRPDLJAUUNRSNSLRKETMMIGLXORPIVOZZNTEKUJYWYWIMDEFMLUVDYJIRHJHADTFYPCXECEVBPTMSPEGOIGQZVSJLMANNUDUBMUAPLODWZCF");
    tmp_msg_0.custom.assign("KVYTMKMXJBIHUSNZRVXB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35767U;
    msg.info.assign("BVEMMAQWDNWWZTCQIEGUKWSBLTHSWSIZGYWPVCWHUVCKPEHKYKRCCSZUZMZXRPIUOILSOLYUQZPQVEALPNTXBFOGJBRQBSHXPUBLAVJQXWYJOFEJVGGYWULTAJDKCAVXDCXTXYDOZXHDNFRIJITLUARVREOFLIMNDLR");

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
    msg.setTimeStamp(0.39076612942733746);
    msg.setSource(5973U);
    msg.setSourceEntity(195U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(58U);
    msg.type = 130U;
    msg.request_id = 15057U;
    msg.command = 237U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6597899529640094;
    tmp_msg_0.lon = 0.7998966364926472;
    tmp_msg_0.speed = 0.6933031421618988;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.duration = 43391U;
    tmp_msg_0.sys_a = 42387U;
    tmp_msg_0.sys_b = 22827U;
    tmp_msg_0.move_threshold = 0.6550450974754495;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50507U;
    msg.info.assign("OOTOQGZDNFMLVNGVVAYWQPNOKOVIEUDGRTNSBIMBYSYPCWVAAPSYFOWMWPAVIQBXSANMXZYERUMZSERTJTMRICQLIIKBFXKDBZDUKLVEENESAFLAUPT");

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
    msg.setTimeStamp(0.9910135297258174);
    msg.setSource(1324U);
    msg.setSourceEntity(112U);
    msg.setDestination(41376U);
    msg.setDestinationEntity(102U);
    msg.command = 197U;
    msg.entities.assign("DSVIEOLGIJKUCXMEZJQUXCNKMUEWDFMOGYQXOTFLZNRRHXMRCPKGGCUBYAVNYSNVATFWNVPJCAGLMTKPVLTZLIQFQTXDZKBOMRNLKQQSSBYUAPPSSGYIQNTGEVYTMCTGABBJYNJYUWIVDZZDAFQKHSCWVRPJJLLAPCVEHXDPXODIOLHQUJCEGHXZDMRYHFNFPRBVINWTABOZUH");

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
    msg.setTimeStamp(0.5568353550305186);
    msg.setSource(29259U);
    msg.setSourceEntity(254U);
    msg.setDestination(53643U);
    msg.setDestinationEntity(170U);
    msg.command = 167U;
    msg.entities.assign("XNWEJWQCBBHMRBUIEBSYTCBODBIPPONGVVMDLDTRHLAFYTFMFVQSOYXNBTSZVZLEJNYSZCSPZZEPDEHMYWDQXTRWELAEEGAFIMCWVHCQOGRAIJVHUUIOFYLRMOAFKKWAXFGOMYFGJCNPTULUGJICN");

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
    msg.setTimeStamp(0.17111903428555897);
    msg.setSource(31513U);
    msg.setSourceEntity(157U);
    msg.setDestination(33313U);
    msg.setDestinationEntity(71U);
    msg.command = 252U;
    msg.entities.assign("XBHXFYRHAAPCVSVQAOMCKLUZVJEBEMKXEJRNTIKJIFPDOWGDHXNRUENOIBYADOLZSSCMFPYLXWQDUNPZCYLKUTNIFRHDYCSFPHQTGVLBTMMKGQIPVCDVUALQUMDXOQGEJBWIOZHYNKTSMMBXTQZAUWKKPJXIXLFTOLKDJSZAVJNFWTPRNHARDRPAOSEJUIXSFBQHWIYUZZTDVEVHZVRCYCUMRFCGQSBNGQZGCOWMJYLGIJGLBGTWRPY");

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
    msg.setTimeStamp(0.40432112819060984);
    msg.setSource(20853U);
    msg.setSourceEntity(203U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(251U);
    msg.mcount = 106U;
    msg.mnames.assign("TQDOVAXCTNAKIOIAWECHVZMSWXRGWDBLEMQIGNYSFRWLP");
    msg.ecount = 118U;
    msg.enames.assign("KQPYDXHZCSFLHGPPKPDKHIXTTYRWQWLCNRRISXWJRCEOMEDJKIHQABKNMJUODWQCFGOLLICQRSGZYBBZFKYMLLGDDOPDWCGSTODRSETQIOURVVCPMCUVHAERYWASMAHHZINGTLCJJAWPGOKYEHDSFIVMYBCWKFNZWXUJUNUTNFARBTOGYW");
    msg.ccount = 2U;
    msg.cnames.assign("ZSSFGGWMGVXHBUKFOVJMCIZZXYXIWIMASECGBHPPFJDUTZVIAVHKYUWJBOOQKNDZNLCFMVKNJKXLQETDDBGODMTYMOGYQNNJERBPHLARSCLLGTQZPTAUTNYBEFIPEJCEAZYDWMTSKVSQVHPOIEDMFQKCOAWYJE");
    msg.last_error.assign("HEYZZGCDRMIKZZYDOPLSW");
    msg.last_error_time = 0.6831159241926514;

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
    msg.setTimeStamp(0.06392514114818493);
    msg.setSource(19646U);
    msg.setSourceEntity(72U);
    msg.setDestination(27809U);
    msg.setDestinationEntity(157U);
    msg.mcount = 49U;
    msg.mnames.assign("LNKCMTIFDHLQTKKXVUPYMDQMWBLGLBKZDOZBURQERTCPRFQMKXACNRNEPYNVKCWBEDEUGHIVPHFZZEXKXOWDWGEZTMBUNAXBCDZVLSVFQMJJOTSPDMVCHHHLOWWRMTYVJXZSCBKOWRZESBCYUSUFYJIDUIEJIISGAASOPFUPGMLTNGQOLPNEJQOIDZFHZAUXVLCFPTJABSYQWRJYXTNNRWIJJ");
    msg.ecount = 182U;
    msg.enames.assign("SHQNGGMDQLLKIIUUSODZANXVTCKNCZZQQXSEVKFWJMYSARWADDTJWROANKLTRUUYIQXZYERCFBWWSEEPAOBOEPCNXNUTKWHMCNBGEYQWHBPQGBNLROGINXC");
    msg.ccount = 16U;
    msg.cnames.assign("NBEUWGWSVATFYJHGMTLBRTSIHYZZVIXHVUYIGREPGTNAMWAMOIXBRRPEVSBFNSWEPLIAQALBTURJIPCQUZXWNCCLELWVYRFYCPMDVWOVUOTQAQBOPZMZMZPDSSFYECNLWZLPGKRXJHCZ");
    msg.last_error.assign("VCVQZJXCHKXMUOPGWIBASEKRPIQIQDEFYEJHKGZGBXZCDNKNOQPCRYTOUXKAWALSCUIFHZOLZ");
    msg.last_error_time = 0.4715095434865575;

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
    msg.setTimeStamp(0.05335519304528591);
    msg.setSource(59937U);
    msg.setSourceEntity(8U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(234U);
    msg.mcount = 24U;
    msg.mnames.assign("GRMGBDHZHMERNKSLYXCHDGPKWTPHWIYJNLCENLSPPKODZEYEVNRTATPSDGBLBLVPQODZUYMHYXBWLARKESJFSRSBFFOQZAAGBBJMMNAUIXKDMPROAVGIQOKTUZVCWFIKKVQZODDHPEVHOITZNGFSUSEPXCIMQLWYAQ");
    msg.ecount = 149U;
    msg.enames.assign("TIIYFEIEZOAWZCFQFNSDOGDBPKOIEXAFATTLEKEZBCTRUQLNSFJRRAQDJUMPUBPHAUZFWTUBPOSZBTLGSKJKERREYACVMZCCJJMSQJVGXCPVSBHMYKGPPVKQONAXVLABHUMZQJCNVONUISXCIFVEONT");
    msg.ccount = 157U;
    msg.cnames.assign("EFRRGIYLSTSOWWNCAXOBFAEORXESFUNCMHHVPVLPZXRTPLGMXSKTUEDILZWYORNIAMSKJUQBQCCMDNHKGWHZXAELUUECXCWUSCEFONMZIIMFYSNNFBYUGYETJGVNPYMVVTLJGLZPZTHKSFCQVT");
    msg.last_error.assign("MSEIBJRTDXWYSBMEHECKZZWPUNDMFFVPXRBPPKHBLUCIOOGPKGBSJXPCIAJWSZBXVZMGPTUXWTNUDSBOLSBDUAFXFLVQNHAQUTVTJHGIUSASDZDYYFDYTYB");
    msg.last_error_time = 0.8519907584816958;

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
    msg.setTimeStamp(0.23571008132231153);
    msg.setSource(51393U);
    msg.setSourceEntity(215U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(52U);
    msg.mask = 250U;
    msg.max_depth = 0.632749735772948;
    msg.min_altitude = 0.06413299243823023;
    msg.max_altitude = 0.41425478970262164;
    msg.min_speed = 0.6150212527327349;
    msg.max_speed = 0.7289415325700493;
    msg.max_vrate = 0.7321266700561762;
    msg.lat = 0.5113946141738654;
    msg.lon = 0.6741452826856271;
    msg.orientation = 0.6850949223577507;
    msg.width = 0.28129804223632693;
    msg.length = 0.4850919284972648;

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
    msg.setTimeStamp(0.6853374337974151);
    msg.setSource(41654U);
    msg.setSourceEntity(230U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(146U);
    msg.mask = 253U;
    msg.max_depth = 0.9386311690986509;
    msg.min_altitude = 0.391611440709591;
    msg.max_altitude = 0.9261325810119126;
    msg.min_speed = 0.4404973658491279;
    msg.max_speed = 0.7081217444209107;
    msg.max_vrate = 0.4039040185602141;
    msg.lat = 0.10024580687968565;
    msg.lon = 0.06663487700557458;
    msg.orientation = 0.7896756514923621;
    msg.width = 0.24589096510976538;
    msg.length = 0.9048449730684468;

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
    msg.setTimeStamp(0.6291949701327455);
    msg.setSource(16037U);
    msg.setSourceEntity(162U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(32U);
    msg.mask = 10U;
    msg.max_depth = 0.6584536649168953;
    msg.min_altitude = 0.004515375618260875;
    msg.max_altitude = 0.7126298132389646;
    msg.min_speed = 0.45150910067110916;
    msg.max_speed = 0.6871776029558758;
    msg.max_vrate = 0.3616636598912203;
    msg.lat = 0.007597108574510902;
    msg.lon = 0.38845161719160926;
    msg.orientation = 0.8074050140496843;
    msg.width = 0.2653812420302343;
    msg.length = 0.06567077157086276;

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
    msg.setTimeStamp(0.1336752592151056);
    msg.setSource(57679U);
    msg.setSourceEntity(247U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.2858171703878296);
    msg.setSource(523U);
    msg.setSourceEntity(132U);
    msg.setDestination(5802U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.06430063904843453);
    msg.setSource(1092U);
    msg.setSourceEntity(54U);
    msg.setDestination(47416U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.07909828981118405);
    msg.setSource(61741U);
    msg.setSourceEntity(225U);
    msg.setDestination(37188U);
    msg.setDestinationEntity(87U);
    msg.duration = 34577U;

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
    msg.setTimeStamp(0.17407185807867764);
    msg.setSource(12585U);
    msg.setSourceEntity(186U);
    msg.setDestination(37021U);
    msg.setDestinationEntity(34U);
    msg.duration = 48819U;

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
    msg.setTimeStamp(0.7337098121825819);
    msg.setSource(28700U);
    msg.setSourceEntity(86U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(127U);
    msg.duration = 58291U;

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
    msg.setTimeStamp(0.2932447972159553);
    msg.setSource(13177U);
    msg.setSourceEntity(75U);
    msg.setDestination(58533U);
    msg.setDestinationEntity(29U);
    msg.enable = 58U;
    msg.mask = 241138661U;
    msg.scope_ref = 3820933891U;

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
    msg.setTimeStamp(0.12790418178193252);
    msg.setSource(44796U);
    msg.setSourceEntity(231U);
    msg.setDestination(6838U);
    msg.setDestinationEntity(57U);
    msg.enable = 4U;
    msg.mask = 3815638588U;
    msg.scope_ref = 481071621U;

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
    msg.setTimeStamp(0.283946945507332);
    msg.setSource(19966U);
    msg.setSourceEntity(245U);
    msg.setDestination(56972U);
    msg.setDestinationEntity(20U);
    msg.enable = 171U;
    msg.mask = 236622249U;
    msg.scope_ref = 1751145989U;

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
    msg.setTimeStamp(0.32243790946451945);
    msg.setSource(47396U);
    msg.setSourceEntity(121U);
    msg.setDestination(51848U);
    msg.setDestinationEntity(63U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.25395164536168147);
    msg.setSource(20240U);
    msg.setSourceEntity(14U);
    msg.setDestination(38587U);
    msg.setDestinationEntity(205U);
    msg.medium = 235U;

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
    msg.setTimeStamp(0.24078867394257375);
    msg.setSource(61900U);
    msg.setSourceEntity(187U);
    msg.setDestination(50059U);
    msg.setDestinationEntity(238U);
    msg.medium = 167U;

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
    msg.setTimeStamp(0.8517346658162878);
    msg.setSource(23527U);
    msg.setSourceEntity(66U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(55U);
    msg.value = 0.919475106139324;
    msg.type = 78U;

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
    msg.setTimeStamp(0.8763423271572653);
    msg.setSource(42058U);
    msg.setSourceEntity(146U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2663033769111487;
    msg.type = 99U;

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
    msg.setTimeStamp(0.13673057094254448);
    msg.setSource(54758U);
    msg.setSourceEntity(75U);
    msg.setDestination(46080U);
    msg.setDestinationEntity(48U);
    msg.value = 0.502286397618117;
    msg.type = 60U;

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
    msg.setTimeStamp(0.08171124012638153);
    msg.setSource(54188U);
    msg.setSourceEntity(73U);
    msg.setDestination(61933U);
    msg.setDestinationEntity(220U);
    msg.possimerr = 0.10371970087555926;
    msg.converg = 0.1692699494108305;
    msg.turbulence = 0.8650046241318343;
    msg.possimmon = 63U;
    msg.commmon = 195U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.5644690989705599);
    msg.setSource(59203U);
    msg.setSourceEntity(68U);
    msg.setDestination(29784U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.5071309706473747;
    msg.converg = 0.8233826556020114;
    msg.turbulence = 0.351513185682948;
    msg.possimmon = 241U;
    msg.commmon = 219U;
    msg.convergmon = 116U;

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
    msg.setTimeStamp(0.7459766930422518);
    msg.setSource(58857U);
    msg.setSourceEntity(96U);
    msg.setDestination(2613U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.6638825767996083;
    msg.converg = 0.42716596813135077;
    msg.turbulence = 0.0008723054319713652;
    msg.possimmon = 146U;
    msg.commmon = 241U;
    msg.convergmon = 244U;

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
    msg.setTimeStamp(0.16934011743583066);
    msg.setSource(14928U);
    msg.setSourceEntity(206U);
    msg.setDestination(63439U);
    msg.setDestinationEntity(56U);
    msg.autonomy = 197U;
    msg.mode.assign("YVKWVYUNYWFWFJPQJVBICXKOYEFSTCMRTHBDMJALPBNUEAZAXYOKQSACUIFWZCTHWAQGPIZRXFMQZGDTEOCGLSWVCKQHKZHLVSXPNOXXPM");

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
    msg.setTimeStamp(0.3901382177276659);
    msg.setSource(16815U);
    msg.setSourceEntity(186U);
    msg.setDestination(55419U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 162U;
    msg.mode.assign("IAQCGWBTLMKKEPLGTLRCUJHTWCZWOPVKIDGNIBEPKERCAZPOFQSXTYAXTYKNOIPOZSONXALYRWPFGYHKJHSSITOQSBWJFXDXECOOCUQUVKQWZMMBIFUEZUKGYEIKVBNNIVHGHJVNXFMDHRDRYMDOQLNJZBTJSJURKJUGXGBTMHOWWHADSRTARFLMQPJLRCMEVHNDFQBNYVEADCYFVCPAINFISTZSCWZGBLDJGXA");

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
    msg.setTimeStamp(0.8523869773203235);
    msg.setSource(10260U);
    msg.setSourceEntity(224U);
    msg.setDestination(56020U);
    msg.setDestinationEntity(67U);
    msg.autonomy = 43U;
    msg.mode.assign("PYZKTOTDBKORFSUSJAAFRDWAJMHWXUUDKOQGTJGAMNHPICYWRVEJFNLAPVEUPNNDBVNOYXMUBWKSLWKTULEX");

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
    msg.setTimeStamp(0.1466039623176676);
    msg.setSource(4209U);
    msg.setSourceEntity(100U);
    msg.setDestination(61859U);
    msg.setDestinationEntity(200U);
    msg.type = 112U;
    msg.op = 193U;
    msg.possimerr = 0.7606998439532955;
    msg.converg = 0.24180020939689728;
    msg.turbulence = 0.2861025022505014;
    msg.possimmon = 91U;
    msg.commmon = 159U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.07358395274708807);
    msg.setSource(48398U);
    msg.setSourceEntity(212U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(33U);
    msg.type = 27U;
    msg.op = 227U;
    msg.possimerr = 0.6554590715941452;
    msg.converg = 0.5736351134924843;
    msg.turbulence = 0.1465900187964122;
    msg.possimmon = 48U;
    msg.commmon = 21U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.7233544125373228);
    msg.setSource(30295U);
    msg.setSourceEntity(217U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(6U);
    msg.type = 194U;
    msg.op = 21U;
    msg.possimerr = 0.35807181942538546;
    msg.converg = 0.8464518435175354;
    msg.turbulence = 0.3575171872789159;
    msg.possimmon = 141U;
    msg.commmon = 86U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.37267372714586045);
    msg.setSource(41997U);
    msg.setSourceEntity(73U);
    msg.setDestination(50327U);
    msg.setDestinationEntity(221U);
    msg.op = 103U;
    msg.comm_interface = 86U;
    msg.period = 60688U;
    msg.sys_dst.assign("RULVVPQFIBMCGUNJOZRYFLXFRFUQKGQZBMEJDBSITPECTUTEGHXXMOYENYQGNECBKNHYWTZWPUJOTCAXQGTMHAZIZOUCMJKRKIIUFRIDLMPKLDVDRPYLIUTJOYLGMKLEVBVHESFMACNTYKQSVRGSTXFHPQBBLAOKAODGENYQBXIROONCCYDVHPVQDFDNWSCZDIFZHUUWSKABSXPJNSWWBDMSAHYJVGO");

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
    msg.setTimeStamp(0.9451753083537227);
    msg.setSource(46956U);
    msg.setSourceEntity(222U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(55U);
    msg.op = 184U;
    msg.comm_interface = 117U;
    msg.period = 60835U;
    msg.sys_dst.assign("WYYKRSCKHVQZZDTGTINYDBKMVFWPMJCIUWAMGSLLLRMWZUWSSMKLWPQYUKDDTNBWQWKMEILZAONZOZUEVQXOGRJTAJPFFZQJAXLDFVPNDFCGXOAZTY");

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
    msg.setTimeStamp(0.41709107069978824);
    msg.setSource(18760U);
    msg.setSourceEntity(149U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(221U);
    msg.op = 54U;
    msg.comm_interface = 35U;
    msg.period = 41180U;
    msg.sys_dst.assign("AEDZWZOVUNOQMMRXKCQZTXRKLSIPUSYSKVJMKGGGIGJBWNUEONYMOEBBKWTELPFRACPIUGJHPZFOAIVHHQWAXZFEWLEVPVAUZQLCUCIFGCRYPBLFIJJHBQNMBIMSIXDKNNZTCCRDXWWDDYQ");

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
    msg.setTimeStamp(0.010812461321780709);
    msg.setSource(23704U);
    msg.setSourceEntity(48U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(174U);
    msg.stime = 1894114014U;
    msg.latitude = 0.22864230236524097;
    msg.longitude = 0.6770292981808171;
    msg.altitude = 51332U;
    msg.depth = 662U;
    msg.heading = 35889U;
    msg.speed = -7328;
    msg.fuel = -23;
    msg.exec_state = 68;
    msg.plan_checksum = 2196U;

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
    msg.setTimeStamp(0.04495303310735954);
    msg.setSource(58032U);
    msg.setSourceEntity(206U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(72U);
    msg.stime = 1843019998U;
    msg.latitude = 0.33975009555433355;
    msg.longitude = 0.11665107134829844;
    msg.altitude = 9981U;
    msg.depth = 37764U;
    msg.heading = 45537U;
    msg.speed = -8798;
    msg.fuel = -95;
    msg.exec_state = 30;
    msg.plan_checksum = 8366U;

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
    msg.setTimeStamp(0.7888300312827853);
    msg.setSource(49586U);
    msg.setSourceEntity(215U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(157U);
    msg.stime = 4262392419U;
    msg.latitude = 0.14832226321154485;
    msg.longitude = 0.06562482720367158;
    msg.altitude = 51520U;
    msg.depth = 33937U;
    msg.heading = 849U;
    msg.speed = -6911;
    msg.fuel = 71;
    msg.exec_state = -84;
    msg.plan_checksum = 63253U;

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
    msg.setTimeStamp(0.865233079634206);
    msg.setSource(18350U);
    msg.setSourceEntity(116U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(35U);
    msg.req_id = 64985U;
    msg.comm_mean = 161U;
    msg.destination.assign("RISGJZJFHPAUHMCLFSWKFQEOBSLBSEKCTMDTYOAVNPNTDZTHUBKUCDZRXHFWMNIFWXFEABY");
    msg.deadline = 0.5085045447056128;
    msg.range = 0.8230235963187336;
    msg.data_mode = 203U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.37121818303381027;
    tmp_msg_0.speed = 0.5981977696496381;
    tmp_msg_0.turbulence = 0.8384781282295847;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EXFIITPEWICLBQMOGGKSKWBLSJIRIFGFSSSTZDXBFYYYDLOEROHDSCHXJLYCXJKEUTVIALPXZZSRQPKULGGQERNLGDNKIBCMVTWRXXWRPNAQZWXPJHYVNVUQIBOUSYEHDVZCFCTTPMBRFGCJDHBVNHRZKKAWALFEJMJOTDPDEPGLVZACBMOYHORGMEANMZWCTAUWNQMQZUXGDTHTOSISWPAWHZKKNDOJJYH");
    const signed char tmp_msg_1[] = {-111, 65, 2, -30, -60, -76, -59, 8, -119, 4, -112, -40, 54, 125, -104, 109, 90, -91, -7, -28, 6, 10, -114, 98, -59, 80, 99, -118, 119, 42, -53, -3, -31, 37, 89, -23, -1, -61, -3, -7, 23, 121, 1, -68, 48, -83, -54, 114, -117, 102, 54, -43, 67, 21, 122, -39, 105, -21, -120, 27, -88, -5, -28, 24, 54, 78, -63, 41, 116, 16, 105, 53, -29, 110, 95, 106, -42, 4, 87, -55, -121, -17, -11, -6, 116, -86, 89, 86, -55, 19, 79, -113, -93, -6, 2, -70, -77, -43, 4, -14, -115, 97, 88, -39, -89, -97, 64, -54, 92, 47, -39, 91, 110, 117, -90, 109, 29, -126, 57, 51, 94, 126, -105, 30, 7, 76, -94, 3, 82, 3, 43, 80, -33};
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
    msg.setTimeStamp(0.2569193685940484);
    msg.setSource(63275U);
    msg.setSourceEntity(6U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(126U);
    msg.req_id = 11084U;
    msg.comm_mean = 227U;
    msg.destination.assign("XDYKALPEUZBWNGNDUMCPJFTCB");
    msg.deadline = 0.28092668560669143;
    msg.range = 0.21743074093739456;
    msg.data_mode = 164U;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 37176U;
    tmp_msg_0.type = 254U;
    tmp_msg_0.tow = 3816172546U;
    tmp_msg_0.base_lat = 0.01953214759490496;
    tmp_msg_0.base_lon = 0.3213659830767156;
    tmp_msg_0.base_height = 0.5461804653589091;
    tmp_msg_0.n = 0.9200195339109952;
    tmp_msg_0.e = 0.1724293437277954;
    tmp_msg_0.d = 0.42363687441897824;
    tmp_msg_0.v_n = 0.2436521427623125;
    tmp_msg_0.v_e = 0.06422194955606797;
    tmp_msg_0.v_d = 0.7336412255737206;
    tmp_msg_0.satellites = 218U;
    tmp_msg_0.iar_hyp = 5621U;
    tmp_msg_0.iar_ratio = 0.31566956268614277;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("INPXTSQERIRNGRIQKPSYWONEMQSHFJLUUUXMDQSXVIDLABLEYA");
    const signed char tmp_msg_1[] = {62, -127, 114, 10, 90, -111, 40, 29, 16, -29, -68, 116, 88, -66, 65, -91, -26, 56, -55, -53, -36, 72, 93, -70, -78, 12, -87, 116, 51, 102, -100, -73, -52, -10, -48, 74, -19, -17, -76, -25, 109, 101, -11, 43, -107, 19, -53, 4, 112, -8, -89, -123, 3, -74, 86, 104, 37, -83, 75, -8, -82, 39, -110, -60, 121, 122, 69, 94, -15, 67, 102, -116, -128, 65, 117, -116, 70, 91, -57, 5, 1, 124, -47, 62, 13, 73, -92, -106, 16, -15, 79, 90, 41, 4, 47, 104, 107, 87, 89, -78, -117, 76, 5, -8, 96, 4, 54, -55, 99, -81, 115, 104, 94, 109, 30, -39, 62, -124, -42, -60, 15, -99, 70, -108, 110, -64, -105, -125, 85, 36, -46, 81, -52, 55, -11, 32, 70, -1, -57, 14, 49, 111, 41, -94, 92, 101, -100, 100, 47, 81, 53, 109, 21, -116, -119, 45, 23, 12, -3, 31, -111, 66, 51, 91, 55, 26, -1, 77, 58, 7, -39, -76, -127, 87, -92, 118, -75, 104, 37, 93};
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
    msg.setTimeStamp(0.2949273473344656);
    msg.setSource(43394U);
    msg.setSourceEntity(194U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(56U);
    msg.req_id = 60721U;
    msg.comm_mean = 34U;
    msg.destination.assign("WUIMSVFXTJDMFGDANUOXPCAVTWAHLNGREONVFOVHKGERH");
    msg.deadline = 0.7282893261386237;
    msg.range = 0.9096361724534816;
    msg.data_mode = 230U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.824198193156576;
    tmp_msg_0.y = 0.7504352140952474;
    tmp_msg_0.z = 0.4646350203360643;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QQBREDGPHSCIVTQJVQNAJZZPNTIBUYXXCIUOOCSYMEVNURTARLQWHLLDUASMPKFWCUAIYPZRKBPNQIYPGJYFVGTFJSHQSGOGJFWHGRWQIXIPMKEULWJHLMNEYHDBJKHZRFAOKDRWKAWKRVBCXXFZFVDVYLBCTLGWGQBGILUDNAUSOPHKDOJSJLMUAYTEPBMAOOTWDTZTDVMOBCSKNKERVRXOZMXVCNFMFENHSYJXEIAIYNLC");
    const signed char tmp_msg_1[] = {-125, -112, -96, -40, 69, -65, -128, 37, 54, -43, 57, -54, 66, -104, 70, -117, -15, -64, -16, -30, -31, -35, -61, 89, 50, -64, -102, 73, -9, 118, 88, -44, 13, 10, 12, 61, -4, 62, 2, 109, 116, 97};
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
    msg.setTimeStamp(0.014446609854854797);
    msg.setSource(13676U);
    msg.setSourceEntity(73U);
    msg.setDestination(60725U);
    msg.setDestinationEntity(178U);
    msg.req_id = 32303U;
    msg.status = 216U;
    msg.range = 0.2606596603952652;
    msg.info.assign("FJIDQCBMMJUOIXZUBGCSUAXJKQVVBAOUNRMKZWRNTEZUSOMLPVGVICXHBATSSVYDUNUBWLFTNXGEAKXYRODDHINPPMLOBDHZULXVLJNUMXLOBVCZFNEQGSYCRCHIJQFIQPPSELGGDCAZIXINYNMYIJWZTEXZCTTKQVXPWGSFRGDHFBPAARWWFJFYTRQMHARO");

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
    msg.setTimeStamp(0.30354033400979175);
    msg.setSource(40373U);
    msg.setSourceEntity(250U);
    msg.setDestination(4248U);
    msg.setDestinationEntity(248U);
    msg.req_id = 15786U;
    msg.status = 213U;
    msg.range = 0.057896828239099696;
    msg.info.assign("SSVTUJNWSAFJSOESOQMUXRGHBBFDPBEMLPTOIAAFPITKGLCKZMNXAMVDCJVCXPVESPQGKBDRWTZJSEMZSVQWQDCYYQDQYTVNZUMLKQJZPFDRRGLKHICYAOGOFUZRTGWHRVKNSUMHKDLYFWYOBXYQDOLPNRMWFZEILCPCJHEQYGPINGNBDUDOZITENTLKXKCOAXRUI");

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
    msg.setTimeStamp(0.19534654141001273);
    msg.setSource(86U);
    msg.setSourceEntity(143U);
    msg.setDestination(9649U);
    msg.setDestinationEntity(246U);
    msg.req_id = 14203U;
    msg.status = 131U;
    msg.range = 0.8349151968553399;
    msg.info.assign("DZKNBYFKOMTLHMZHHWCISROBYXNFMYIWGSKXQJIL");

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
    msg.setTimeStamp(0.34984770709058377);
    msg.setSource(24715U);
    msg.setSourceEntity(181U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(240U);
    msg.req_id = 19586U;
    msg.destination.assign("NUHSWXZOXDGSWAYHFMVLFBYPGBUXOYPTCBOKRAQAWRTFHOJAQQYAYDQHFXCJCJDEKSTEYSINJPOTJOLJMCCJMSRMVGEHPMXABQVTMZXKTLYGKPOVOWFMNAQFITXUIZJXYKNWGZNEIINBJGRZXKKTPEESBOEMBWLEDQGIUDZUPVQKDRPHLGDIEYFXKMLVTMPCNINBSRNUAVDCVRBEOQHIUUZWHWYGSCBAZFHVLUAWVFNRGLWRDCIHKZJFQ");
    msg.timeout = 0.18318343006432014;
    msg.sms_text.assign("JAHMSJRFBAZDABYZVTMEOCZVPAWTZWYRARKYTMYYGAPQWFQBUKLVVAPDGLKQOLCNPBXDILDSRKPTEPNXAUOB");

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
    msg.setTimeStamp(0.44516018091991216);
    msg.setSource(8551U);
    msg.setSourceEntity(130U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(103U);
    msg.req_id = 39326U;
    msg.destination.assign("SRGYXEMFULYGWEOBAKRSANYOCUACPYTPZSDQLCIGXQNEQIWFSTJUHWHPPJHZXTRDVKBNZLNFCSFXLEMQHNEGSSUQWEOREAFVVEPRHSYNLTZFLBAVJKBGCJHIUJXMFTCVJNYWGQWGARBUOITRTDEDXPVLHAKVZEIBRXLMHNMOQSIWYSUXQCPITGBNDUJCFYAAXUYMMJWJIBZVCMNDKMQFAGZZTWGOHFOOVOZ");
    msg.timeout = 0.585943098617834;
    msg.sms_text.assign("VUFNOROEHCZJRBXRDWEULYIGCOFSVFSXJSYD");

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
    msg.setTimeStamp(0.794606606332238);
    msg.setSource(57262U);
    msg.setSourceEntity(86U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(124U);
    msg.req_id = 13328U;
    msg.destination.assign("RHTRFFRDKJBHEIFIIAESXYEZP");
    msg.timeout = 0.4921887230276386;
    msg.sms_text.assign("NRUXFIAPHOTFMBXEERLLVGAEOEJNCBZIVXSHSGPXFUQGZIGLMDDRVOFPIGSQYZKCYFMJIJUZEYPWQKDAQHXIKGUBDIIIZPEHAVLGFRFBOUQQZSPOECRDNHEHULYTKWDBJJAOQVKXONWJCQWBXNQVSRMSZCLVYHSCKRNARTRUAJHYVMYDOGAULBZNNWWAOTTYVXXVSNSYDCWMLMKBTUGTCKEAZMZQMT");

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
    msg.setTimeStamp(0.3248371316920069);
    msg.setSource(53883U);
    msg.setSourceEntity(147U);
    msg.setDestination(28135U);
    msg.setDestinationEntity(36U);
    msg.req_id = 52759U;
    msg.status = 94U;
    msg.info.assign("VTXUNBEYHJQLCOBPLZMQARCKIWRLWCEHHJFIFLIKUIPGFEWZACMVKSPDWVORDGCQZZPUJKHQCDGEKUTOIGHPDXBTBSCCWLYFNUBXSEOAXWLOXPYDGTGZYKDAMMQBPNFYWHHLHTOMGSJVBRAFAGSDUNFTWDKJNKNQ");

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
    msg.setTimeStamp(0.0445273708757129);
    msg.setSource(40992U);
    msg.setSourceEntity(220U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(98U);
    msg.req_id = 32172U;
    msg.status = 216U;
    msg.info.assign("SMPLDBURHPNTLQYFSCGVXFOXPGNDEQSSCFUBRXQVBTWGMQKRGHJBSMNBFAVKGSXFTMEYIWMPLDBOUHYVYIPXTHOVXTYTEFSAITOORGMLBHEKEUWYABQAWINOMEENMJNPXVCAJDKCDZMFLFYIELKHJUVTAFCOWJOGCZAZUPSDSWRGNNOWDQHTG");

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
    msg.setTimeStamp(0.18342520487516822);
    msg.setSource(63289U);
    msg.setSourceEntity(77U);
    msg.setDestination(29695U);
    msg.setDestinationEntity(139U);
    msg.req_id = 38697U;
    msg.status = 0U;
    msg.info.assign("JMYGUEBRICXTKWBYDKGFHMRJIEEWNKDELOODKSPIPUPZADWMAQLBNWBPDVOJ");

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
    msg.setTimeStamp(0.5470231936640033);
    msg.setSource(33205U);
    msg.setSourceEntity(53U);
    msg.setDestination(47291U);
    msg.setDestinationEntity(3U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.035510626711249715);
    msg.setSource(61462U);
    msg.setSourceEntity(16U);
    msg.setDestination(35210U);
    msg.setDestinationEntity(195U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.19378942683169664);
    msg.setSource(31263U);
    msg.setSourceEntity(210U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(99U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.9264732732101384);
    msg.setSource(2518U);
    msg.setSourceEntity(129U);
    msg.setDestination(44811U);
    msg.setDestinationEntity(151U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.3416035878053514);
    msg.setSource(22241U);
    msg.setSourceEntity(153U);
    msg.setDestination(47763U);
    msg.setDestinationEntity(8U);
    msg.state = 104U;

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
    msg.setTimeStamp(0.5545715676558931);
    msg.setSource(24275U);
    msg.setSourceEntity(217U);
    msg.setDestination(3835U);
    msg.setDestinationEntity(248U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.9400907684814139);
    msg.setSource(49791U);
    msg.setSourceEntity(146U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(233U);
    msg.req_id = 53331U;
    msg.destination.assign("YQPHDLHNJEYCYCTODABKKZTENBJDLDOTQLIIPMEZIZWXVTLWQQZYUSSXRFFKENTXJZQIWDJVUERTNPXKROTNAWUJAHOSFBTMJXNVDWUSPKKSDGIDKXOVJPSQBWYXZFPYNEZBBZQYJBGMUJMLXICKHERTUIC");
    msg.timeout = 0.44831336455199977;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.3430757978243899;
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
    msg.setTimeStamp(0.7075586708924582);
    msg.setSource(20290U);
    msg.setSourceEntity(73U);
    msg.setDestination(61563U);
    msg.setDestinationEntity(166U);
    msg.req_id = 47197U;
    msg.destination.assign("DNBCCXZCQXIGYYXVJJZJHSRAEICUBAUEMXTYTDZBFQOCQWMPCBORKDE");
    msg.timeout = 0.6174122133059569;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("TQGHJPBQONVLSSRZYYYHSLHNXRJGJVSABVWXGOPUQNJFVAOATRETUYVAZITRYICGXJMWTVWITWLQDHKLBKZOIAXIBVWXUXFCTZBNMIHSBPKXZBBDJZQAMXPBTPMRMRQVIARNKVQKIBOFMJUCFCJQFWMEMCOCWYVLMGPUESLEYDHOFGZPYUPAGHJYXNSWELERNALNUEEGKZDDEJCDFFZOHQILHUDFANNRDELTST");
    const signed char tmp_tmp_msg_0_0[] = {-106, 74, -89, 100, -105, 73, -6, 17, 15, -4, 36, -122, -120, -33, 86, 99, 43, -107, -51, -44, 73, 93, 33, -56, 112, -15, -7, 33, -118, 94, -121, 34, 106, 98, 40, 23, 68, -73, -116, -45, -11, 7, 34, -43, 65, -125, -3, 30, -114, 100, 3, -94, -32, 72, 14, -57, 123, -15, 81, 54, 25, 30, -91, 75, -86, -35, -122, 97, -74, 5, 12, -64, 95, -19, 69, 24, -82, 121, -71, 120, 107};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.37381682075869893);
    msg.setSource(4548U);
    msg.setSourceEntity(147U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(220U);
    msg.req_id = 37106U;
    msg.destination.assign("PPYSOQOSBPXMXZRHCLPWGJKZIYZAAGZFNRVBPNVFBYOHEOJUMRMULUURKDVKCBEDXXAAXTJQFWRKEWUSUJOWQHMPASWQDMIUWCZGWJYSEWTNRUGDMSNPNAHTVVOCVNCJSDCATQKYCDTFXNGHFMFRMKIDLYEFJQBHHIZQEHDVRKYFXKTGTRGYILUELIBJK");
    msg.timeout = 0.9516886182696072;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.35360997130725247;
    tmp_msg_0.lon = 0.5612296040841125;
    tmp_msg_0.z = 0.5281142447323519;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.radius = 0.8793712056350258;
    tmp_msg_0.duration = 44486U;
    tmp_msg_0.speed = 0.8791555341568289;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.popup_period = 4652U;
    tmp_msg_0.popup_duration = 51600U;
    tmp_msg_0.flags = 68U;
    tmp_msg_0.custom.assign("POMRYFFVTKGONRSYHYXWFFCGYOBUXVNQEOTHRMHIUXOLJCCKKDHSBPHLWTZZDZAJOARJQBZLOTYPDXTGSFWFANRMJVTHXQCNEYTUCRMWEALVQKPSXPSLDYDBQPFBMUGDAYPHXQGEQQKDIMFTEKJGVJNWDKOMNZNWMHEURXCRIMWLOTEGBKIJIXAWEVIMB");
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
    msg.setTimeStamp(0.0567164658701339);
    msg.setSource(11907U);
    msg.setSourceEntity(123U);
    msg.setDestination(12625U);
    msg.setDestinationEntity(171U);
    msg.req_id = 51242U;
    msg.status = 0U;
    msg.info.assign("FIVKSDVVMWJJJAVGVVHFEQYUAPITAKGZYTEOXGVZ");

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
    msg.setTimeStamp(0.5364110273847823);
    msg.setSource(10283U);
    msg.setSourceEntity(249U);
    msg.setDestination(26720U);
    msg.setDestinationEntity(26U);
    msg.req_id = 50439U;
    msg.status = 70U;
    msg.info.assign("IXGHQPMWFAWDCIBYAGTSRRDRTKAAUBHESBJEMFODVXPWKZKDWHBBNMZRLAUICNOZPCCJHEZGOYEEHLCNQPZMKMWVNOVTFQTKUGFYHSRUWGEEWLDGOYABHPLPQMCILIIYGQUTTQFGIOXKPJIWKJNZSENTSSVQVBJTJYROWDUHYAPRCUXQCCMXKFMZZQVGGJBIXFUDNLVSLFRNKTOAJKDDAXYWOHJPLZAMLVRXDFRYTIYCXBHVEPZMQ");

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
    msg.setTimeStamp(0.06351262762831422);
    msg.setSource(51161U);
    msg.setSourceEntity(86U);
    msg.setDestination(52176U);
    msg.setDestinationEntity(231U);
    msg.req_id = 207U;
    msg.status = 181U;
    msg.info.assign("WIOGRPEOXAXSPMYMCBDADIPKHTBFYGDPEHLQPVXJRRDWLWLHJOBGDKSQVHWNUSOIHPCLEBXTLIHIEREBWMARCSKZFUAVAGYUBLCQJEZARAZLNFKFMLIHSPEMFTWQKRUHMPUKBJGRGZMXCICTUFNXYNADGSFZVDCGOQSTZVNEGKTLBGUNJVNBYOUTJONXFQZCKXDISQUWNAYEVKYZSPZCAVWPFVRJWWIJEYRJXYQTT");

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
    msg.setTimeStamp(0.14632185650248408);
    msg.setSource(6806U);
    msg.setSourceEntity(107U);
    msg.setDestination(27661U);
    msg.setDestinationEntity(34U);
    msg.name.assign("LYDAYDSBSVPBRESVHHIHJTOGUNAMNGUZISZUOZKTRSFCLPMCAQUNSMGJJMUCUOT");
    msg.report_time = 0.4075914670124956;
    msg.medium = 249U;
    msg.lat = 0.6631876581342433;
    msg.lon = 0.7384936372599239;
    msg.depth = 0.6383025076932887;
    msg.alt = 0.682307163682186;
    msg.sog = 0.39132627851683377;
    msg.cog = 0.9911561513500063;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 12U;
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
    msg.setTimeStamp(0.9442763270732866);
    msg.setSource(49559U);
    msg.setSourceEntity(225U);
    msg.setDestination(62430U);
    msg.setDestinationEntity(217U);
    msg.name.assign("OZCJOQVSLFTBKSCAQAKIDIEECDMFYAEIPZLEJBHNWDVYHVWP");
    msg.report_time = 0.3408452698033174;
    msg.medium = 151U;
    msg.lat = 0.31507518690658665;
    msg.lon = 0.3143118264605552;
    msg.depth = 0.5055539635278485;
    msg.alt = 0.9387144783252515;
    msg.sog = 0.05389551473454268;
    msg.cog = 0.1520503410217472;

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
    msg.setTimeStamp(0.574607305540144);
    msg.setSource(46496U);
    msg.setSourceEntity(139U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(233U);
    msg.name.assign("FPZLHDSIIERYGCZENZPDCKOOWEBQVXNSYPCXBJWMSYAYNDHHAUJGKMFWXAOIUKGUOEWKDWSFUGTNUQCKRVEOPWUJIQS");
    msg.report_time = 0.1664892134540621;
    msg.medium = 160U;
    msg.lat = 0.16811719492926747;
    msg.lon = 0.4149519686836467;
    msg.depth = 0.3939428000420847;
    msg.alt = 0.13987983646591073;
    msg.sog = 0.6168318661612266;
    msg.cog = 0.03235014684076798;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 16U;
    tmp_msg_0.htime = 0.07473515182659396;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 238U;
    tmp_tmp_msg_0_0.htime = 0.9398200425755288;
    tmp_tmp_msg_0_0.context.assign("UYKDOTAPJRFYZQHEKBUSRCYJJVYZTYNENOFAXEAVNEHYKPYXIJBXCPHGQRRWVSJNKQPBELYCXWZBPGBEBBJOZQOIWNSFBOUDWDTGPUHPZGXSIFHUTSELDNAVOHMQWCBIJZZQNXHYEJMZFNSOXVGLIOPBTFRLLMXADLLNSRGCRKLACJSPTGKIQDAKMMALMWQMXVPIIVZHFHGVVKUTRFTFFWWYUCZCRUTU");
    tmp_tmp_msg_0_0.text.assign("ACZAYHRIQGPMZNXKWBYGVGDXFASYXHKTSAAHYZNKJJBEMRHTDMEVVFRIBUDDLSANDUCXCHULREESEKNJFREXHVRPZCIKULGQUSQHDMZEEFYFJFIBLMWYTWWSECFWYOIPTONQZQIDQNLFKRPJ");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6942960964663702);
    msg.setSource(18692U);
    msg.setSourceEntity(157U);
    msg.setDestination(39907U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.40589482636540486);
    msg.setSource(15U);
    msg.setSourceEntity(199U);
    msg.setDestination(44153U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.8583772958258682);
    msg.setSource(9008U);
    msg.setSourceEntity(4U);
    msg.setDestination(161U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.06755021044087917);
    msg.setSource(58368U);
    msg.setSourceEntity(65U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("CPALCZDFTQXSUVQAFWGKNYWSQIZOOPSLZGVQCRWRKIKZRMBWOKEIHDMMLOUJBMGGRDTECFFLTYEUXSLTNKMJDXJFMYYZVKKIVTTNBXPJRIHAUXERQLKELQUKCRMMXZEA");
    msg.description.assign("ZFDJOHUOTQFXZJUAQFBORRKBFAQXYARKRWTERITHQLXMVPDTUEKLUNLUYBPEYLZPRBNPFDXCYYKJCVZGPXLWEVDENSOPGOJNXCCSMSBZRNGNXWJDM");
    msg.vnamespace.assign("PWBVCTFJFSUGPYERUKFCFANDSETVXEODAPVQKEPKOGIMYXJGODDLMTRNQRSQEFCGHBDDRQHKBYSCXMZAFIGVVGEWHTRSOHNZNLUFXBWBWQAMBYAGRWGYFNIOLIGSXFJMUPBZLLHVHHCJW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FPUBDAFWGCIYRZYHROOZFFAVFMITGTDHZORJPARXFXNYTMXRLJKGZ");
    tmp_msg_0.value.assign("TYJDSTKNQXLOOIBGWPZXBUGENTWBZPAPKIHLHUEBINXLZJVSQVELEWMWUCSPRYITQHUHBYNKNSOAUZRGWCDJKVMCCXTCOBIESRRQYQIMASWOCJCOMQSRBVWMUEWTRFYKDLMEFKERXGVDBKWJYCAZGYIADHPPHJVVFHDKXPEDSLXXNTBJMDUONHGCJESZAFGCQZYHXIFSJ");
    tmp_msg_0.type = 89U;
    tmp_msg_0.access = 104U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OESNWKVQPFUNUTVZNIVS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WVNOPKSVTISPJFGWQHEAZAHIJVWIGAOTPYILQCDYMJRKGCKZHFNFUAUULCMYITICMZLRTEQPSVTCWXVBWZBXZFCQDXLJAQREROMSFNMBUMGZGUSEXLPQJHLDXREXSUKSGEXNEHOZICXYYRAODEQSSHHVNAENRZPBNKLBVUIPDTUEJCKWFBOYXYRNAPYTNJMMOUTYYGDWWLFFRQBUVMJLALWQFIDRXHBPBHAGTKJPSJZMHOBQGVODCTDNWZKF");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.5426828327570988;
    tmp_tmp_tmp_msg_1_0_0.z_units = 177U;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 28482U;
    tmp_tmp_msg_1_0.custom.assign("MMVNFHRCCQBLEWUAIZDVXOKRXFXCDFQIKGVORHIHHRPFPAMECVZRXTXTIAUHQVXBAPTYPG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("HAGWOGZZJKCDWJYCCVLTZQGRVDZA");
    tmp_msg_2.dest_man.assign("LQZTHSRKVGUJUVPOLRGUDTICNIIYIYUEOTQCJUSMQEHIEWANCXBPOAXALPIVHUSBJRSUP");
    tmp_msg_2.conditions.assign("MTQKISSLPJACFBZTJVPMEVCWDEKRYDAHVCTKAUKSYUYROHOLFRHPDHNHYWNKOPZGNXTAFHGVXGUPSJFXVIYPWGESRIBVBPZQOEUCLDPY");
    IMC::WaveSpectrumParameters tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sig_wave_height_hm0 = 0.54207963345926;
    tmp_tmp_msg_2_0.wave_peak_direction = 0.6194687690888564;
    tmp_tmp_msg_2_0.wave_peak_period = 0.1587932937838712;
    tmp_tmp_msg_2_0.wave_height_wind_hm0 = 0.5699560093192627;
    tmp_tmp_msg_2_0.wave_height_swell_hm0 = 0.5565385769075817;
    tmp_tmp_msg_2_0.wave_peak_period_wind = 0.07514673955846429;
    tmp_tmp_msg_2_0.wave_peak_period_swell = 0.4560467448729416;
    tmp_tmp_msg_2_0.wave_peak_direction_wind = 0.6164872246644614;
    tmp_tmp_msg_2_0.wave_peak_direction_swell = 0.1988173277834694;
    tmp_tmp_msg_2_0.wave_mean_direction = 0.7476941966359392;
    tmp_tmp_msg_2_0.wave_mean_period_tm02 = 0.07965799313068267;
    tmp_tmp_msg_2_0.wave_height_hmax = 0.9630047785074101;
    tmp_tmp_msg_2_0.wave_height_crest = 0.9303831556418793;
    tmp_tmp_msg_2_0.wave_height_trough = 0.1353371658877197;
    tmp_tmp_msg_2_0.wave_period_tmax = 0.6349321897685797;
    tmp_tmp_msg_2_0.wave_period_tz = 0.4402686979023538;
    tmp_tmp_msg_2_0.significant_wave_height_h1_3 = 0.9300698439575685;
    tmp_tmp_msg_2_0.mean_spreading_angle = 0.8336141564920028;
    tmp_tmp_msg_2_0.first_order_spread = 0.9529723440834883;
    tmp_tmp_msg_2_0.long_crestedness_parameters = 0.4036642961144147;
    tmp_tmp_msg_2_0.heading = 0.4898592060080016;
    tmp_tmp_msg_2_0.pitch = 0.7874902767678276;
    tmp_tmp_msg_2_0.roll = 0.13845494682347825;
    tmp_tmp_msg_2_0.external_heading = 0.3707838188883038;
    tmp_tmp_msg_2_0.stdev_heading = 0.3118018075981759;
    tmp_tmp_msg_2_0.stdev_pitch = 0.6520766083702684;
    tmp_tmp_msg_2_0.stdev_roll = 0.865709336903679;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::RestartSystem tmp_msg_3;
    tmp_msg_3.type = 115U;
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
    msg.setTimeStamp(0.16566601851520057);
    msg.setSource(19510U);
    msg.setSourceEntity(162U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("DMOUGBZRSJKDSLNANWZLVCUMCAOGVFLBNYBETRTASIRMWPJKHXUVOTPONOFEPQRRCGDXIYUIAQTOAMGBDYUMDJTTUYPEFUERBRSTIMQBCSQTRNKZEAXMDFPGYVZHLCVWHEGXFNVXHXSBMGKZHXFZPAFLNYIYKJQSEEVLJCJVJIFFCNUWOQZDHKOZELWAGTZVHUYBIWP");
    msg.description.assign("WEXEAEZVRBMTENJWQFSVWSDUPMKJIDUQBKYZNGJWNTNUGYMDMYXKODAVMPBBTEFOPWSMFIJWGXADFHHFBQLDPSRQZGLAAOTKJZFEVYCNCRVERPUUUKZIGROJRTKSWNLUOTCYRPSZHRMJCDCFACLQHOJNMLNSHPEZVUGJHSVLBPZLXPMDICKLXT");
    msg.vnamespace.assign("NDTREOFGVSUXQTZPNGSHPAHJHNSEVRRYVAKLHSIMKCNZDPNDDGTKBAQJREMGUTNIQZKYDTYFBHWOCMDUAVBWPSJLZXJAITAFMZVKSXOUTYFKPFYYVJENBGLWHDMLRJYCGUCBTIBPAPEBVFTSGOKPJICLHVOAGPRLJYOCYERXSWZUQGEVLCMQIWSXKCWXXUHLDEFKDOJNVQFCFNPXWXABWTLIOCEZWQBB");
    msg.start_man_id.assign("HUYKMTLIHCDJLYFRTHVMFYCJHDTZZBQPPIWDCWJDANPVPNOAUGRQRLYQFSXSZEFLVDBOVLLIKIKKSXAEHAMNMBBVSFAXGLTERJNBTQHJURRVJRWDSMCBJVWWKPZVWCQMGLUQPECGTSUSJSFUEASWTFDFPXZTANQN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EBQJMQSRGHAOTYSFFKALLRBGQQBTITGXEKXRJKUYXQBKQFREMXXWLPPTNJM");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.05212660527518709;
    tmp_tmp_msg_0_0.lon = 0.5493261479654689;
    tmp_tmp_msg_0_0.speed = 0.4936168193767033;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_tmp_msg_0_0.limits = 116U;
    tmp_tmp_msg_0_0.max_depth = 0.9057587286365595;
    tmp_tmp_msg_0_0.min_alt = 0.9178764362746976;
    tmp_tmp_msg_0_0.time_limit = 0.029513988940720326;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.30819008865089115;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.22790886087073003;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("DEHQDROHCPCKNATSBETMOUIBVZBTCBVXPXRLYDZJBZKPMXTHSIGHUWAWTXPUFOSFFMQLZTMDCDXNUJEVQG");
    tmp_tmp_msg_0_0.custom.assign("MVENRNDMLSDXPCFILFKWWDQURADASTRSPHUHWIZDEVJKKXRPCOAWUPTQGJNHBYQIPRXJZUDBXOVFTTECNGZXEYOOHLLEUFYTAMIVJPZYAOWKOIRIBL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::StateReport tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.stime = 3934846381U;
    tmp_tmp_msg_0_1.latitude = 0.04592495552266296;
    tmp_tmp_msg_0_1.longitude = 0.2259745090385208;
    tmp_tmp_msg_0_1.altitude = 63210U;
    tmp_tmp_msg_0_1.depth = 10722U;
    tmp_tmp_msg_0_1.heading = 19139U;
    tmp_tmp_msg_0_1.speed = -27858;
    tmp_tmp_msg_0_1.fuel = 105;
    tmp_tmp_msg_0_1.exec_state = 88;
    tmp_tmp_msg_0_1.plan_checksum = 34932U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EMJBNQTRISHULPVGGWYPQKPATEYKTIUSWBZOOKATIQIWYYMGVRFXWVGQSCFHELFSLOAMATBUDLVYYDANGIBCGESIAHPUE");
    tmp_msg_1.dest_man.assign("XTGODELJYCEPTYUMMUZNIALSOANHRYRVYUQDVJAKNXRZOLPRGKZMTHASFLMDCSTJYEGGJFRVCSPJNEGNRAQZJXSIPVSQFMIWXBFIAHPSBPLXULNYECWTQKRDWZBCPYIJBZGRPTKDVLEABYOWTDCUNQQIXWHPPOOLXXQJEUUHOUGGWDWHTIK");
    tmp_msg_1.conditions.assign("KVMUZHQWDEOMFVIUAWARXYZPASMRNHFOQPBIQRHNFWIQHCDKWMGUKUNQSFCHO");
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanControlState tmp_msg_2;
    tmp_msg_2.state = 200U;
    tmp_msg_2.plan_id.assign("PDFUNYNMUJOXIKOGBOOUHFVOEBZYFJHCULVQCFJCYRWVPMGPGRKPDGIZSSOHXOHCLRHRTJHLHUCEMNZVZYDXWWBIDIAUVJKSWZAEWOBKDAWXQTRQQCVABSHKQNWMSVEEXTPZVZRYMGBQMGQIXKMLCATSJNZONAP");
    tmp_msg_2.plan_eta = -51404697;
    tmp_msg_2.plan_progress = 0.864499746840605;
    tmp_msg_2.man_id.assign("XDBVDFZILMPLIHWXWCTZHAFB");
    tmp_msg_2.man_type = 41852U;
    tmp_msg_2.man_eta = -2141585727;
    tmp_msg_2.last_outcome = 189U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VtolState tmp_msg_3;
    tmp_msg_3.state = 116U;
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
    msg.setTimeStamp(0.03418803083687316);
    msg.setSource(51228U);
    msg.setSourceEntity(191U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("CYYGUTKQUHDTCWVDZEFAVNDMJWVYXDFEWHFQSFDEHEUECSSWFVBBXBZQZPNLTMZSCIZHKNLPUSVPXQUAYOQNJKBNILGGKWUEOLRNZCURTTTJPSBLSEWGLRMEIQQQFLAALRZGHJUOMAJHWFIEXLGIZDYCOHYJNKPGYZDJYBNKYPVIOYANBAOAMVRACUHMJZJDWRXREQVAKIRKQGXPWFTRTNFG");
    msg.description.assign("WZYWSMXPSPPJLMZBFDBQFKDQMXMCXWAEHVLNGIGNCFRSDTTRYIZXAGGWRZNYLCKPQUWLVCUIIEPTCRAOSGJEGDQOZNAONKRCBJIDEMATYUYHUUUBSHJHDQSKTVUTCKFPELWRRFBKJXFMBOGNXHXHEIUKOYPLQFKXOMATOBBULRDEOBHVJQAEOEDVQJBSNFOLTAZGMSXQYTQUVZKGWIRTVZNWJIJGDHPCPLCIFXVWMLRFZNHCVPIZYMYY");
    msg.vnamespace.assign("EAPSBWOAYEZTCXYSGUIAWYPJQMHZMCERKW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YCVRFZWBCVHMTXKHOIDFNTXPLQMBTZEFVVTNHJUAPRDKVJBFOAEGWUCSNWPPSDABWUJUIGZONITYIAMJDRFOGEBCXVQGPOAKCWXIKLESMNUGGDYQOYFZURQDKMSOMQQVHSOYUUVTWQYZTMJWCFZXIJEVCLEBYOLLBHSYNJHGBLIRHIXOECKEPPQJFTTESDNQVIFQKMFNRZRAHDLDPLCDHPG");
    tmp_msg_0.value.assign("GMSMNTOTQKNBMFZPGFPIJNZQQVDRTIIIRXDUABPYHPABXDWYZGOHBJTKRAJFMLJVBAEGSASCHZWTQLWHZSWUJVOTDPXNFCLWEVSOOWAKYVJEOJCLULHDEQEZPDCFZUFQIPGRKYCFFSDKGQNEUGMRQQZRGBMSEXIUCIEZMLIHGJKKMKTIMOVRUBPEYTHZXTXNLONURQDGFYAWBNYHXVBYVASDONPLAPETCMHCXIHWRVD");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 128U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CUROTFVPAHQBWSGRADLALUTMNTFZDPUZFEOMECGEVBWHFHILYYFLENGACVYDZYVIWQZSWFKEBPMIRQBESTULVXPIVQFCFIOGDYVJGTUWXGAMSJPQZREHXJSEHIZYKTBBMKCILAYNJLHKLDSGDBMJHIUONYGQXMHWLMDKUKUEOYCVDRFNQKGNOACBT");
    IMC::StationKeepingExtended tmp_msg_1;
    tmp_msg_1.lat = 0.8519115371711564;
    tmp_msg_1.lon = 0.7762552712961887;
    tmp_msg_1.z = 0.37428661074649283;
    tmp_msg_1.z_units = 165U;
    tmp_msg_1.radius = 0.16761900465453883;
    tmp_msg_1.duration = 25513U;
    tmp_msg_1.speed = 0.8710177490009803;
    tmp_msg_1.speed_units = 179U;
    tmp_msg_1.popup_period = 52451U;
    tmp_msg_1.popup_duration = 58034U;
    tmp_msg_1.flags = 134U;
    tmp_msg_1.custom.assign("HXLZPJGLCRXFWBPJMZRQGMLTNJYBYLKAQAJPSNZWKLNIVULTADCAIOBEDPFJFLCTRHKTSHNAHVHEXSKAKVBUDIVKSPMQPCUYNYMKIFCENIUWMRMFETXASTIALXBRHLUGFYHOSXUFOJWYJXEDYIGIABOCMDMCHSKPQHOZKYWCLTYYZIGGVEGRQXDEQWFDROUXJOMGVTQNRZUOJOCRZAHU");
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
    msg.setTimeStamp(0.1157239513582543);
    msg.setSource(63908U);
    msg.setSourceEntity(31U);
    msg.setDestination(59480U);
    msg.setDestinationEntity(230U);
    msg.maneuver_id.assign("UIQLCZUNSPYARMJWKGZGKZFBOEDXWGODTLMUKPJMYHILPLFIUJNEQQGVSQVKRXSIOAC");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 51768U;
    tmp_msg_0.rpm = 0.6965401905477239;
    tmp_msg_0.direction = 135U;
    tmp_msg_0.custom.assign("UIXUVBIYDIQLMXRFXKHTICDQGSLNYOBWTGIFSJLKZPUAODEAAHDWPWBQNPGZEWASVXLPKHIRDMDTADQACPQRYGYCWMFGJULKTYRCJFNOGTCBCJRKNQCZEMFHPLVL");
    msg.data.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.32845674551451165;
    tmp_msg_1.x = 0.34603179360845693;
    tmp_msg_1.y = 0.3516788079791814;
    tmp_msg_1.z = 0.6906209651975962;
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
    msg.setTimeStamp(0.6727689077179606);
    msg.setSource(41317U);
    msg.setSourceEntity(95U);
    msg.setDestination(50224U);
    msg.setDestinationEntity(55U);
    msg.maneuver_id.assign("EHMTYSBZKUIOWGFOXBUKIGVGVBMXXECQFBYITFGSIUDHTNBIIPPYNKFWTECMSRKLIWALXTBJIUNFGQANP");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.30685271827141736;
    tmp_msg_0.lon = 0.2293778970948971;
    tmp_msg_0.z = 0.025808033711169354;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.speed = 0.7055630250522519;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.abort_z = 0.48198886320909895;
    tmp_msg_0.bearing = 0.07789309423316915;
    tmp_msg_0.glide_slope = 187U;
    tmp_msg_0.glide_slope_alt = 0.04111612250380059;
    tmp_msg_0.custom.assign("ZOMLCSSZTXNJUJXGRTBICALGRDUNGAXSNOGTIQCPNVEDLGNBPCYRBYEIBZUBPIQYNHVKQFRRQHIFE");
    msg.data.set(tmp_msg_0);
    IMC::TCPRequest tmp_msg_1;
    tmp_msg_1.req_id = 28476U;
    tmp_msg_1.destination.assign("RMETQHTSTEOAP");
    tmp_msg_1.timeout = 0.8196809372933567;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.5432537205497037;
    tmp_tmp_msg_1_0.beam_height = 0.1312344425651979;
    tmp_msg_1.msg_data.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamRxRange tmp_msg_2;
    tmp_msg_2.seq = 32084U;
    tmp_msg_2.sys.assign("ATRMAFVIMCZYALHBJRQNKXAVCTUOYMDNJXDELQWNGBVUWPYLGISRMPLKSORTEJSEHGGBMTDTQHCKDZSGORGUDMBAUUYSXQZOVXJOKGYPXEUYPSUILHYLIAZFRTRNRGZYVUXMTLPKVH");
    tmp_msg_2.value = 0.6233848825082937;
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
    msg.setTimeStamp(0.05375333551958905);
    msg.setSource(114U);
    msg.setSourceEntity(129U);
    msg.setDestination(45893U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("DHVMAQDAMQYJIHWVSYI");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("LBVAWCLZKJISKYCGJJBVRBPFFAABNGWRMXOWXAIXPTUNWLHPRPGURFQVIDPYJMAPPDXDCAFAUVHWTWMOC");
    tmp_msg_0.max_speed = 0.897801715987098;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.lat = 0.5769454475106292;
    tmp_msg_0.lon = 0.07111741498102542;
    tmp_msg_0.z = 0.3413068546256748;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.custom.assign("WFVRYYXFHUBGVCAYRVCNGDEBGIXICMLESXMDMKUWAAPJQPJWLHXRYJDHTBJRBHCNLDPOVCOMEMNSZ");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 383;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3927757591556147);
    msg.setSource(33758U);
    msg.setSourceEntity(232U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("DJWDMOXKBURI");
    msg.dest_man.assign("ZWFNUFVDWIFYKUXKXPVCFSQGTGJXOFKVLGLIBNWFKWTQLHESMM");
    msg.conditions.assign("EMPLTOGUTQIADXFKEGAZRAGPPILWMWKNXCLAOEQIRUTLWFWTBQKHJIDYFSBFDGGFIQHEMHCQCYYCVJXZRQHSKVGZTERWIJRDNYJQQVOMDSJOAUOWMLNBYOLPREKJXMXJMESATCIZHEJBPRIBVVZYZUPKSOTNPULIKNTZXWASXYJYPHQRSFCHHKUCZBVPKLBDBESHWLNQGALSVCBYDKUWFORNXJOM");
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 24438U;
    tmp_msg_0.status = 253U;
    tmp_msg_0.info.assign("GCTLNHPPXXIZYCZYKMFJNRAPOIQZSXWTSBHXINVUKDOHYGBCTVTOMVSEVRJREUMNVSPKWEKCGYGGVQWFNFOLETANQAPRHBAGZURAJBQFLUFMYSKCDOQYIDGOSCPEQUMFTOXPLZRNJQYBXJDRYEAQBILBGUVQVYQHSZHARLKPACFZHXTGPCH");
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
    msg.setTimeStamp(0.5715649551177318);
    msg.setSource(49313U);
    msg.setSourceEntity(75U);
    msg.setDestination(3498U);
    msg.setDestinationEntity(234U);
    msg.source_man.assign("RIFEGDFSOHLZDQNKRWFWOZDHKDXVTPJTHJJFXJAQSCDEQBIUXQLVPMIXMGLJGIYXBOBVMUTBCMCBOITTKAHKMQLTGDUOVLJQYEUWUFUWSPDESXXCECCVYLONG");
    msg.dest_man.assign("VOWZAETBQEBYJOTODWKNOMPXTQMTIPAJCWSIZVWMAPQXDQRFKXYBWEXKMNGRIIPSBJMYLSOQRVJOLXEUNGSCBKINBAHERZVUMFKABVZXURAHAVUMTKCIHYCUDNJIHUMCOKJRKTUNEXNBRIIEFCLPYBQGOWOHLMJGGDWPOLYUDTWRUZFLDYKNZYFFLELGFQCQVXSSQZP");
    msg.conditions.assign("YEUFQOCVHZHVKTGCCFYLXD");

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
    msg.setTimeStamp(0.802759375079811);
    msg.setSource(12364U);
    msg.setSourceEntity(52U);
    msg.setDestination(46644U);
    msg.setDestinationEntity(89U);
    msg.source_man.assign("ORELWTJZDQCUHJXGDRAPVHJZINZPRRRMTPGGKLYCJGCGYDCXAGZIFGTLDXTMIOEDRWALENBQXXQDXRYPUXXGCOVIEFSABKZBPFWIACEBYSTEOKFHVZBFHMRJLNYOWUAUWNWQGSFHAKVKJWQNYLBCHMIKTH");
    msg.dest_man.assign("EWBJNLWPIAROYBLAJFVHWWKDWXYEHRIBYWVAEQQVGJMQWYVYGEUJNPCGRMURDXLHOIKLLNVMSOCFXTFRKFUSEUERHGTTHMFJDJNGSTSHTOHSGKJDMSTZSUDAKDMNOEPNPPXHMIPRZCVLCAQE");
    msg.conditions.assign("XLKETARGUICIOCRHAKHSEECGZWZTMFGOVQOTJC");

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
    msg.setTimeStamp(0.299817006810595);
    msg.setSource(52114U);
    msg.setSourceEntity(223U);
    msg.setDestination(8107U);
    msg.setDestinationEntity(18U);
    msg.command = 100U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PIYCAIHCCZNGPALJKSHAYPGNBTGIXXKFKRKUSNODEUJELUQATWFULVXLVYSPMBTBOGZEJWFYCDSZIVZDULRAITAYUDXTNQCOML");
    tmp_msg_0.description.assign("OBLGQGUVGDYNASSFKHBEBUTWETGIOTEZWDTLPJKTHXMCIIDMWEJOGJRXVBCLKFVAFOWNZRKVQWPPRRSYXCTPGAXDYCQYNLRVKIYGRFNCDAVRLDNDJMTVBKKWASCLQKPSMDQOJXSHXWYHLACWOOTIVQEBFLJGVIYESJLZMIRKFGGURZBQQUBZZUUSJEYFSUYPXJCONFMMNNTPIAZXTXBQAUWIVNOLZFKXHHBFWDZPENQHEMAU");
    tmp_msg_0.vnamespace.assign("WCARRHEHOIZKWQXNWQXOCNARRFDDHGIVQHJWXYMZZOLKFBCYNBGOTHMWYFWILYBEXWSZTANEINGMOFKAUGQMVXPEXFGHDLFTIDUJQPUJVPLTGUOUOZJIRLOIVJCIWBCERSUKRNAALSSUVCLSRGHCKNYJENTPJDVYKLJCJTWLBMDLEMJYMAZFQKXIFXFBKMAHPNTMQBCBXVSAYKHSUSDSTZPYVVRIMDEUGBOAZWGOTBXYCFRSQDNGPPE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BYIFWDJSHKIIPMBFGEAXKGWPYLWUNSIJAUANPUERWMKMSDCJJADYLICUOGOFKBHACVBPYXJLHIQLNLEDAYESYQMPVPZXKFSHTYTNNSACCUKZLTEVSHQOBEHYQZ");
    tmp_tmp_msg_0_0.value.assign("QAFBXYCIOIRQXMUBMUKKXJ");
    tmp_tmp_msg_0_0.type = 169U;
    tmp_tmp_msg_0_0.access = 32U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DUTJASAHCJJKPLAXOGJYXTZVZEQPXFMMVWOPZZRYCERNFFWQOIXTLSDCMAYCRUWUDWCEIOABVNISMSYQRSINSFXXUKTOJTYQNFDGKLBVZQKYXQADRAJEHRABXWWRWUGPVBUTGHOEFS");
    IMC::FluorescentDissolvedOrganicMatter tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.23156995195849406;
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
    msg.setTimeStamp(0.730893375835669);
    msg.setSource(55643U);
    msg.setSourceEntity(129U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(197U);
    msg.command = 205U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UJETTGZCJUGNURHYFNGESTCEOGNTWXNPATVGSSGAWQRRRAEOHAZXMYJGRRVWCQN");
    tmp_msg_0.description.assign("OQRHJRTDBTSKRGQKCIVOFBRTHNZQFEIAZGTCVTXULUTEKGGQLTMWCLFWVQCOHJBCOHSOLVAFZGAGIWCFAZONNBOUCPXNDYXXFXBYRRVNGWWGQFWFMKUPVKDCYKSXSUHUEEADKANBMYIOGKVCMJBRLPZHPLTKMNVEFMWRJOWLJZULOTQHJEYUPDDFZBIVXISJPWBSRXER");
    tmp_msg_0.vnamespace.assign("RKFZVYRFRDWNDLKLFWVPMMYLKRAINMWQPHSECBFKCZPZWOJOL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YDUVYVXQSKFIRSBKDOPNFDPYFMVKXIFQKJVBSTSEFIOBGHGOOIMFBHQWAMNAYOSNVPBLRXHCRZJOUJGGEYSCCYYIGOTTUKZRUELMJOTIFSFSELVDNNOQZVZCADUYLJZAXVHMKT");
    tmp_tmp_msg_0_0.value.assign("RXSGXTPIKSPAXVUSCNTPBWIPRFZAGGDKUHOASMSIUFMKQHNYMDBXRMBCLJJDAMASTTQBINJHLIACWOSWJHEFEYFYIOFEVPZAYKRQMHDECMMWLGKAYYFOOPOMQCWRNXLBFCPUUNEVLZRJWEXHKEZTLTVJLVZXCIRQOQQPUELJNVRGBSNKWDLPRJFVHCDOTYXZTZQZIDUWSZNRVJB");
    tmp_tmp_msg_0_0.type = 116U;
    tmp_tmp_msg_0_0.access = 198U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UHARIYGLINPMZJOVGOUXBAJFPOELAXNVWVHODJLFLSIHOEKSNIOASGGJTCEYYUGTHDAKIKRSTMXGZLCGMZUZCIQCBANZHFWHMOQBMLGJBPSPVUKWONBBOCULQDWVJYYEEADWVSRYJESMVLRNUYOMWBQDHLETFTXJVCJXWFGPCWXFPQPHDRKINDFFQDZRRJYAZQLPFWFBTCKCEHZIXATAKSQSV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DSVNOMIXSNWDAUCRHFAKLHHZPBSEOXZRYDLHGIQCNZAKLFGJLREJFGGYLLCUYCXVOUWSTHKZRGJJDEHBSALTDT");
    tmp_tmp_msg_0_1.dest_man.assign("JOTCCROJBBWVVTIOVTKOZZFDFVY");
    tmp_tmp_msg_0_1.conditions.assign("CMSHABBOFWBQHKSVNVWZCMGBOFKOBIKQTFCM");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.916214407258538;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9677911780917804;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.12408525031501094;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 243U;
    tmp_tmp_tmp_msg_0_1_0.limits = 213U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.7011619383707418;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.3516884954529609;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.2547295518448164;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("CNMQLNLYTHWRMDVORDKFZKQEPTANQQTHPXDTYIZBLSPEEPHLYRCDSMQYUWZNIVGYSUVYHUQYARCMNAEQWGEEXTJDYKUTZSFVMBIJBRIXIILDQUCXNBSIHWZGODGMKUGIRCVOLAUXSAJRCCCAPHFQTWBJOHZHUAHVBFUINPFQEDWOJEABWRGGWJP");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LMSZKGCYPRKQACNKFRMRVYLRXICJJIEOTFCHHXGSBZEUBQJGYWMGIVOMXNIQHGXQVJUHJDYPKWYYXOJLBEDEXIDSONEEPYHHAHVTZTVIYNHQSSOLEBRPMPTFTGTJKMZOLOCOWWBPDLWZUTKDUSJVGZXMUERJHENUZNNTASWPPANZVRUYMBFILFQOXEV");
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
    msg.setTimeStamp(0.3661560859111165);
    msg.setSource(10561U);
    msg.setSourceEntity(109U);
    msg.setDestination(51853U);
    msg.setDestinationEntity(206U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DLBUNUBPQUZAYPYNGTAVQQUHGJVDQMDQTLWKRUEJFPYFOVDANKCMFGAQAXMKGFMTCLIINWRGOWJSWEPCGVCXKBLOWYNWXSVHU");
    tmp_msg_0.description.assign("FZUCTFRIMHYHNEOQOZFWPRUNZEKFDPVJUEGTEKSJQTKUWCOHPDSDOYLXUMYXGZFMCQHDXUMCVMRBDCYKB");
    tmp_msg_0.vnamespace.assign("JWMFBHHMFSBTGUVRZZJHURFWNCHNFALEUVURTUMNFMBACRKQZFJIDZRUMQEPRGEYMWJGSVEPYVZXOBWXHSLCPJKQN");
    tmp_msg_0.start_man_id.assign("XGVPTXUODQQIAXHKKRPPWRW");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("ZLMPWVYWXWOLUZQHCXTHVENRUJHDZSPZVKXFASKKLNLRSQNLJDFTXOOGQYJCJFNVVBGTLCUQRIVLYXJFDPJYWIRGFTOCGFYNRLURKGSTXAYKMHVPGLXBUSEWACDSTBZOMAJKBPQWTUFZDQCJEDOHRKKCYLCIMCIJCNBZGMHSGUKWWKIMEQVEUDNQYRIZDHMHPZUFVNMPXHGNBXVBWBQAWYPXUJEENOFPATPS");
    tmp_tmp_msg_0_0.dest_man.assign("YROPMSBACAXEXOOKAQLHARZMBXJTJQSUGBCHAPJKLKIIJQJNEDLYUHFUUHEBDDRCBAECBFWTLPIDUTSVRYZIIXASMNIOBDIUBQAFHPYZVEWFWXGNUWUMNAXVE");
    tmp_tmp_msg_0_0.conditions.assign("LDOLYSCWTQRAAVXKIEXFGSNEUOJAYGZYPXCLFVNRAKMCUGRNHSMTLVEPKBTYZOXPPBSIHYJUFRSTIPJZHXTTBRUJYDKMKPAVVPQCJIOTGEWGYODHAOHIKUT");
    IMC::GetParametersXml tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SmsRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source.assign("XBHNXFCIDUUDQLZMOLMQEDFDWEVFAWAJEVWGYETFJMHYGLEKTLOEOKPPZFUUAFYHMKXXWPRKURSKKFNLLBVJLHBPAAIZYJGGUGCQBDOZOVDSNQG");
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {51, 126, 59, -61, 76, -124, 109, -76, 5, -76, 104, 31, -109, 54, 78, 18, 115, -76, -114, -121, -103, 95, -39, 71, -11, 92, -49, 66, 90, -41, 84, 104, -20, -7, 75, -50, -90, -78, 86, 124, 49, -119, 53, -89, -101, 34, 104, 102, 27, -127, -72, 26, -108, 34, -24, 72, 110, 1, 54, -49, 125, 89, -102, 20, -118, -48, 106, 70, 57, 28, -47, 50, 43, -59, 1, 89, 35, -21, 39, 91, -10, 56, -84, 38, 59, 95, 123, 93, -82, -88, -37, -28, -3, 123, -32, 101, 0, -21, 87, 122, 101, 17, 78, -95, 75, -17, 95, -89, 43, -11};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SessionSubscription tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 4085918387U;
    tmp_tmp_msg_0_2.messages.assign("MOWWKJBIYEKTUQIZYKQZMOXQFTIFLZVOZAFVRCHMJPCACOIOZMEDGMGYOYVBZEAPDXYHVNLODPTBUBASSHDDGJCHJDSQLWSRNSKJDYYUWCVBEGNKAKZUFVYXGSPR");
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
    msg.setTimeStamp(0.6606318219568026);
    msg.setSource(23192U);
    msg.setSourceEntity(183U);
    msg.setDestination(16959U);
    msg.setDestinationEntity(39U);
    msg.state = 76U;
    msg.plan_id.assign("WOIAYKGPWYYKUGQITKZKCTMPNGNYEVBVSZBFIREOOIWOMFBJCUJBZ");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.6337219680204198);
    msg.setSource(22941U);
    msg.setSourceEntity(208U);
    msg.setDestination(9248U);
    msg.setDestinationEntity(175U);
    msg.state = 37U;
    msg.plan_id.assign("MJAZTNHJBMQHCJVSMKQYWZPGQYHNGXZKIZNYFHCUXXDWVRHOBUCZRNFCOEPEHRCITSMAFVTC");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.8340561093510526);
    msg.setSource(38585U);
    msg.setSourceEntity(233U);
    msg.setDestination(9506U);
    msg.setDestinationEntity(247U);
    msg.state = 233U;
    msg.plan_id.assign("RNNQXQLWIOUFCZFYMKRBCVAHVEGPEMSLPDGJQYHHYIOREVAZMKOTHKPXCDAJYMCLNKKGTVTFBOQSNDCZKSIXP");
    msg.comm_level = 87U;

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
    msg.setTimeStamp(0.7174904367299806);
    msg.setSource(9313U);
    msg.setSourceEntity(234U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(178U);
    msg.type = 93U;
    msg.op = 253U;
    msg.request_id = 7551U;
    msg.plan_id.assign("ZNNWSAOJCJSKFKWZUACXUYEOOBIJTGVEQRUXTUUDGCOYCTMYEKKPGTJZIJIPXLFDDHBKFPVIHIWQBEHLWPBYLODGBCSEMPF");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 99U;
    tmp_msg_0.entities.assign("YKOPJFGZIDIYGFKDJDLUMCSUQRULOVFEYSDBXKRKJAHAUTZJTHJRQEJFCVAMUHQFXYCIDXOSWNPHQBBAVAGILLKRSKFNXWNHNEEOPEXZPZOVQNZEKUEAUIQJWLOAO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSDBYKRXATOPMWFIETPYKLIVBGHNAGVZZFDMMQXAIUHYFWAWKPQWDLRACDJCUOLKCXYFGEHASQUPOSRDTGWTMHOWQGNYAYYGJKUZVFMMLNEVPLTBYMVVRQZECDXGOHMVNVUJINQMXWXHZWNVCJDPFKRRZSPHOCTTDJWOAT");

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
    msg.setTimeStamp(0.03581474093106085);
    msg.setSource(58760U);
    msg.setSourceEntity(48U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(69U);
    msg.type = 59U;
    msg.op = 146U;
    msg.request_id = 38199U;
    msg.plan_id.assign("KFRWXJUZZALGYOTWUEZLNOCDVGSRUALUYTNLYPWSXTHQFAQAQVZHUQXIWOYCEWEQOKBJLLRGHXBYACPHODPTFSBVZTTMESXWLJWINPAMCYDQKKCUIEINUEFSCHQMDAGEWPXKKMWJZNHCBXZVMXQFBPDF");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 32862U;
    tmp_msg_0.status = 191U;
    tmp_msg_0.text.assign("EIFTOPDXHGVATNHEBPLIYFZVZCCDRWGFEEUFBHNEFJCFESSNXVQIJSKAKOTLRQQDCPRJMNSQQJKPUVEJIWROXPCONUBVOBLFHUIZBSYJOPTDAPGDKKZLZJAFNGZSDWAXPHSMVYVWDXXJDYRLYCIKCABNLVIMHUHYXOUWRGAPDEBWMAUKYLBQKSQWJQGGESURYHMSQYMWOCNBIBTVLYGNOTIAIZHRMLEWZTMNXJWMOKVZARTQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VYYJXKBJFOTKKQDISLBBQLJOREVVVNOKFBSIQRCGJSSXFIPPEEWQSUQQUNYDSDCWYHIW");

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
    msg.setTimeStamp(0.4174670241579629);
    msg.setSource(51001U);
    msg.setSourceEntity(136U);
    msg.setDestination(4371U);
    msg.setDestinationEntity(251U);
    msg.type = 183U;
    msg.op = 248U;
    msg.request_id = 16147U;
    msg.plan_id.assign("HAMHTRDZOAVOKDPADTMFASXDCGGMEUAGYCBMCKLDNBOGZEYROSTVEJQJQZXQXGGNHJRKCRLTIETPUHMDVWEDRZLYVOLVWAJUWOOPPRAQEEMEKYW");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("DGWDVCHKENYZPVMXDKEVKTRMVQXBAVUMNMOITCBICQAETUWZAWUIXJXKUVEMHBMZZYUSUCAXNJPZJIVWWSNWAJHPYLBIKLSRQTIPYGXOJWUPCQFKAYQKPWXSGHYUGPFNFWBOZ");
    tmp_msg_0.lbearing = 0.330225981187534;
    tmp_msg_0.lelevation = 0.4854211946249989;
    tmp_msg_0.bearing = 0.9689783978773437;
    tmp_msg_0.elevation = 0.22363085429457885;
    tmp_msg_0.phi = 0.7233632136536675;
    tmp_msg_0.theta = 0.6464073195475004;
    tmp_msg_0.psi = 0.1996382393416296;
    tmp_msg_0.accuracy = 0.8153743970380418;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOBJWSUPZSYDEPGFQCQAFCZARQTHOFOIPWILWZOMRFANDIVIPCIWWURZXYMAVMXUROIZDUSBVTHNIZGFEKFVOESELKJGSCTZLSPSUODCHLENATQBQVRZJXBKKNYRYXJNVEGAXRLHQXJGXLJMKZHWYKQCRDIXGQNEONCCKYUVPVMXMKXFYDQUWSODWNLFNCUFGZUGHBPPEIOTPJJBWCMAKDLBRWBYJTGKRBDIHQTULSLAJVHNPEEMFSATGTY");

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
    msg.setTimeStamp(0.7833864464261302);
    msg.setSource(30140U);
    msg.setSourceEntity(195U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(250U);
    msg.plan_count = 50291U;
    msg.plan_size = 2552456277U;
    msg.change_time = 0.03265433613522195;
    msg.change_sid = 53812U;
    msg.change_sname.assign("RIKUZDFPVZCYPNDOMOBMGKWPMTKUHSFYLJXEWOUTFSKGWVFQIIAQNAHVMYEBAMFFRM");
    const signed char tmp_msg_0[] = {39, -8, -125, -101, 12, 94, -53, -9, 39, -6, -113, -56, 45, 98, 34, -65, -27, -82, 12, -99, -94, 78, -2, -20, -42, -63, -126, -96, 78, -99, -107, 91, 32, 81, -47, 49, -102, -6, 42, 123, 46, -55, -123, 75, -89, 77, -40, 103, 51, 42, -103, -34, -39, -120, 120, -115, -67, 86, 8, -6, 99};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PQWZYNFAILDYMURMFBXHULKSASAMWFHEQRPMUIGKOCVJYHJDMNSBAOLCKPLNPOYKUSEGXITRFIPAGSQBDXQGUDDTHRNIITTBQCBHOBVQSJEPVTNMKRYBJWHEKSOEVZZYKJJBVMEMUWZZEUWIHLCVXNIGAGTQJZUNRXYPXTRPVCKQCOUOMFXBRFDYWDAXCQAIHSLCGEUVXDFCWOGNJGTGFHJXEZDZYVLIVWSAFMKLCZJWQZKHRLOEWPF");
    tmp_msg_1.plan_size = 6844U;
    tmp_msg_1.change_time = 0.08444970410700692;
    tmp_msg_1.change_sid = 15673U;
    tmp_msg_1.change_sname.assign("EKAAWZEILSTARRBBZOOHCIDRGHPHMPYOJBSKHRFBEOJBTUOQGKABFYYGLYIYWXPSPSIWLSXHZGORTUDXX");
    const signed char tmp_tmp_msg_1_0[] = {94, -103, 14, -25, 39, -5, -48, 71, 104, -65, 28, -103, 4, 59, 82, -31, -23, -114, -4, 30, 48, 14, 69, 99, -78, 114, 120, -35, 5, -84, -37, 78, 114, 7, -109, 83, -55, -71, -128, 17, 126, 64, -69, -89, -60};
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
    msg.setTimeStamp(0.5969124777214413);
    msg.setSource(1607U);
    msg.setSourceEntity(176U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 45630U;
    msg.plan_size = 2107671173U;
    msg.change_time = 0.5241526793072002;
    msg.change_sid = 4998U;
    msg.change_sname.assign("KZLYVOOHFDGLWRAVOGLZTIWSVBZXZHFXQBXRYMTANGQLNLPJDEZLDDTAZNRHEJIAIFHECEBRCYHQTNIYSLXCVCWWOSUMBPUGKFQXXDHKJFPCVGKCEXWLUTOFBOMHYOBNJPQCSRNEMBEPKBHHWUJTGJZDOITBVWFMAXLAJRZMNFYQLFMZVPANOITNGMUYCOTIMPSJHR");
    const signed char tmp_msg_0[] = {71, -61, 64, 119, 16, -95, 76, 118, -113, 57, 53, 13, -81, -45, 101, 28, 12, 105, -30, 72, -41, 113, 85, -92, -61, 25, -124, 124, 120, 98, -48, 86, 88, -107, 59, 34, 87, 70, -97, -60, -101, 82, 62, -70, 80, 87, -59, 83, -26, -20, -118, 17, 104, 22, 104, -21, -121, 8, 89, 83, -30, -33, 41, -106, 49, 37, -4, -81, -71, 53, -125, -71, -76, -28, 121, -104, -66, 11, 104, -103, -40, -103, 16, 103, 118, -88, 68, 55, 11, 18, 42, -74, 89, -50, -16, 30, 33, 65, -90, -3, 108, 10, -59, 25, 81, -44, -62, -110, -62, 118, -87, 28, 118, -93, -108, -59, -7, -99, -48, 10, 95, 80, -24, 122, 49, -32, 111, 114, 90, 3, -24, 99, -41, -111, -97, -99, 52, -95, -79, -3, 80, 93, 53, -110, 72, 10, 86, 73, -98, -118, -60, -46, 40, -114, 67, 105, 80, 57, 48, -105, -126, -53, -20, 55, -78, -88, -32, 55, -70, 122, 87, 20, 125, -93, -44, -45, -52, 45, 101, 4, 57, -43, 50, 46, 46, -94, -70, -22, -54, 105, -12, 93, 61, 42, 65, 86, -126, 45, -110, -61, -86, -54, 96, 33, 57, -88, 75, -65, 16, 56, -121, -104, 42, 93, 0, -41, 2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZSKNSBLCVMWLQQVXLETHPBXDSQFZNGQJDMUMOESIYYNRYNWDBZUAIH");
    tmp_msg_1.plan_size = 64457U;
    tmp_msg_1.change_time = 0.7442254715956236;
    tmp_msg_1.change_sid = 37225U;
    tmp_msg_1.change_sname.assign("XFURXDWEHMUGMKCGMHYWOITAWYTCXVDBYSZSXYZDPTJPTKWKRGCFEMNYIFFGHNBBSKKKZNUYOZSHFDBNFPKXYTENVWUZJMVCQACOQIFDULHQTTEAALXFSLBLEEQCVEMQIINTZMJLEMDJWYLKPIPCHOJRDNVHROJSIBAZPOOASCHISDXPBPHAUGEAUWOBWLIFNVZLAQLOWXRCMRJGQ");
    const signed char tmp_tmp_msg_1_0[] = {-62, 70, -6, 86, 30, 26, 112, -47, -34, -48, 97, -88, 24, 21, 66, 45, 33, 41, 87, 46, 5, -97, -83, 121, 8, 51, -102, -90, 89, -12, -22, 94, 83, 105, -51, -52, 126, 85, 32, 28, -26, -95, 118, 123, 117, -86, -51, -59, -119, 36, 28, 41, -43, -28, 61, -64, -38, -90, 41, 5, -44, 43, 72, -69, 78, 12, -103, 110, 90, 121, -27, 94};
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
    msg.setTimeStamp(0.24261758201094696);
    msg.setSource(41485U);
    msg.setSourceEntity(193U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(7U);
    msg.plan_count = 16281U;
    msg.plan_size = 3255243841U;
    msg.change_time = 0.10703553681580524;
    msg.change_sid = 60666U;
    msg.change_sname.assign("BDVKMJFDPFOERMVIJUZHTTEBPXZAVBOHQQAIWBGPOCYYKFEMLFWPGCRYUDMLLKPVXJIPNQPFWWCRIIHNGBEAWEMFYARYURINOESOIFZLBUPQFSNSKKOOXTJNZAQTWRIVRMSXTEDDSQGXBUXUHKNTNUZLRRDBCSJXLQZQLKBGVZJ");
    const signed char tmp_msg_0[] = {-107, -45, 89, 14, 28, 65, -121, -83, 17, 47, -106, -117, -102, 21, 34, -97, 94, 2, -96, 123, -42, 21, -117, 118, 86, 13, 95, -50, -14, -118, 94, -2, 73, 105, -12, -103, 87, -90, -38, 92, -67, -42, -125, 74, -87, 110, -100, -94, 106, 13, -89, -44, 109, -47, 32, 76, 78, 1, 54, 68, -100, -57, -113, 117, -31, -29, 122, -41, -7, 57, -31, 16, 50, 107, -88, 120, 7, 2, -72, 102, 107, 59, -51, 107, 93, -23, -103, 123, -26, -13, 5, -86, -3, -84, -121, -19, -62, -26, 84, 0, -111, 76, 58, 95, -96, -32, -81, -66, -98, -119, -58, -19, 21, -39, 2, -80, 2, 113, -18, -38, -10, 37, 49, -40, -98, -69, 103, -9, 100, 30, 18, -111, -102, 19, -77, -64, -106, -87, -12, -77, 104, -16, -32, 88, -49, 62, 106, -66, -86, 94, 4, -119, -128, 15, -126, -101, 43, -114, 91, 19, 32, 106, 34, -127, 56, 121, -36, 21, 1, -88, -25, 61, -93, -1, -31, 23, -116, -50, -72, 2, 68, 22, -43, 27, 1, 62, -92, -45, -58, -15, 59, -100, -126, -46, 87, 106, -95, -11, -58, 70, -123, 105, -43, -61, -24, -11, -75, 25, -41, 68, -4, 25, 48, 56, 87, -50, 13, -102, -44, -60, 119, -2, -90, -84, -84, -33, 85, 55, -35, 18, -108, -4, -46, 87};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KSLSUHHHNAHWQQPAGJHXLBYYULWKIJIXEKONTOXYRFLEGJEFNQANKVYMBYGCLHCDTAJEPNCYRZZPDXCGEMZEJNOMCZVRUTPAKWVGMFOBJDWDKNFBISVJZWBFHEPGRUACDXJLWNRVYYQQSPGWMPJ");
    tmp_msg_1.plan_size = 51198U;
    tmp_msg_1.change_time = 0.5325980406704635;
    tmp_msg_1.change_sid = 61115U;
    tmp_msg_1.change_sname.assign("TWVOSUJVOFXSUARWSJDBELSLBYBLXPYZXNBCYOYNDHKDDGSPALIUFYMZGOFNPYEDLUBNFIQJGFSILJIGLGKINJMQFRPHLGKQSDKIIAHPEILZVTYQWMXOCDCCAUFCHESETVJNHCROMUEARPXMPNXHMEPFJTTZUBXWKGAPKDYZSQHVKRBTORZUJCCWAQOVZMQATNKWVMQM");
    const signed char tmp_tmp_msg_1_0[] = {58, 112, 118, -56, 96, -77, -119, -59, 105, 31, 88, -63, 33, -124, 6, -71, -64, 97, 2, -25, -70, 103, -49, -50, 105, 72, -109, 14, 59, -89, 39, 84, 98, -49, 72, 49, -79, 11, 12, -29, -77, -64, 41, -69, 91, 22, 25, 22, 110, 32, -38, 114, 40, 3, 23, -14, 40, 69, -13, -97, 106, 115, 65, -101, -123, -96, 51, 13, -123, -46, 122, -79, -102, -45, -47, -120, -60, 92, 74, 45, 32, 85, -63, -19, -45, -50, 93, -48, 107, 80, 58, -12, 8, 67, -81, -49, -103, 46, 25, -97, 96, 43, -120, 5, 56, 5, 100, -121, 28, 48, -61};
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
    msg.setTimeStamp(0.9481917643052785);
    msg.setSource(56906U);
    msg.setSourceEntity(143U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("KJFEYGJTQFPDVKFCUPMDNXJGVKWWEXBBEQFMKFKFSJKVLLTXDAZAPRYYETWXGJVSXHKAJUUUXWSNXABSJDHLBBOKNITAMWHP");
    msg.plan_size = 44588U;
    msg.change_time = 0.7228439337395455;
    msg.change_sid = 30446U;
    msg.change_sname.assign("YLXCKOWFVEFKBJOGAPBWXSGIRLKPKCOVQQYIGYMSNKKVQEORMIGZOFNTLXPHSKIAEAUDJOWNTNEJUJXANYJQWHBIDZVOSDMCZUKUAZIIVYZYVEHWBTZHBQGSNPB");
    const signed char tmp_msg_0[] = {126, -108, -91, 9, 30, 79, 83, 126, 109, -122, -15, -31, 17, -105, -35, -67, 53, -78, 125, 60, 2, 52, 43, 12, 36, 3, 60, -77, -100, -70, 34, -115, -77, -69, 16, 123, 4, 101, 52, 43, 93, -104, -68, 52, -98, 41, -128, -125, 43, 73, 81, 69, -84, -81, -95, -29, -50, -89, 90, -104, -21, 7, -78, -20, 60, -27, -103, -64, -77, 93, 10, -128, 98, 22, 78, 33, -122, 60, 100, -1, -47, 45, -106, -14, -115, -59, 17, -30, 31, -121, 21, 41, -85, 96, 27, 90, 119, -55, 26, -54, 88, 42, 44, 59, 30, -81, -74, 95, 87, 85, -31, 103, -6, -73, -10, 117, -95, -29};
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
    msg.setTimeStamp(0.7599991227034307);
    msg.setSource(55307U);
    msg.setSourceEntity(73U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("VRZJPADXOLHQFBHKRUPESCCAMGXUNQEDKSUUI");
    msg.plan_size = 28733U;
    msg.change_time = 0.6804992254893358;
    msg.change_sid = 12109U;
    msg.change_sname.assign("XDBHHEWUBYWNJWNQMXYBVHVTAQAOIZGHNEQVAWSPTCLVVGKOFTPIBFTGYNYMIBUWNEGYSXRLYHJSMWGTRBWULNQEEDLKFGYCMQOTROM");
    const signed char tmp_msg_0[] = {-106, -18, -73, -128, -27, 25, 77, -85, 60, -11, 100, 30, -21, -55, 14, -23, -80, 0, -31, -11, -22, 81, -20, -128, 99, -116, 89, -50, 7, -69, 64, 17, 114, 43, 37, 118, 61, 79, 122, 78, 28, -59, 56, -30, -13, -2, 126, 35, -39, 91, -90, 117, 81, 83, 106, -40, -82, -4, -58, 2, -89, -28, -63, -75, -123, 0, 92, -101, -65, 62, -103, -100, -36, -34, -72, -38, 28, -97, -127, 8, 100, 70, 49, 86, -28, -37, 61, 82, 30, 10, -16, 124, -112, 30, -81, 55, -63, -19, 95, -27, -116, 29, -5, 51, 94, -5, 100, -101, -112, 90, 28, -111, -117, -68, 75, 28, -78, 82, -107, -112, 58};
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
    msg.setTimeStamp(0.7672380733908881);
    msg.setSource(63256U);
    msg.setSourceEntity(98U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("XFRFDFGGRKJZMTIRHVTTVPQNQLWXUWZCOCPSSFZDWAQUJBMVYGITEGNOQIHKSGTUDQHHAHPRWIVTOXWMUQMIWIEVJXNCIOKRXIZJVNFGAKOKGMLLLQORPZSULBXQHDPSZHEITJQFUABCYAOBTBVFMHEDZWZPBNFVGYYSLNFPXUTGVWKAELBJXMHNRCMAMOLPBVNYCDCKBGDZRRYXFOSCUELBYYSPKUJWXAENWEDTCAIYLMSHJPKDE");
    msg.plan_size = 31185U;
    msg.change_time = 0.8739651140887162;
    msg.change_sid = 40686U;
    msg.change_sname.assign("JTPFOAMHPLOLPUKKRIXJIKTVAHDIHTRBIWZDRGECCMVXRXRXHAPFQQXUAQAMZPRBNCVNHSCZAEGPOUSKFXPVGQTBQFJSAGNFZTJDNEJLTHELBHWJOWMDVFCMRUUKXZWZELM");
    const signed char tmp_msg_0[] = {-34, 83, -30, 53, -34, -67, -57, -99, 56, -64, -28, 27, -28, -10, -1, -21, 44, 38, 77, -92, -96, -47, 35, 122, 76, 122, -93, -66, 51, -3, 81, 32, -74, -21, 112, 45, 60, -34, 22, 104, 51, 60, 29, -30, 51, 123, 22, -29, -7, 13, 126, -109, 112, -55, -68, 65, -64, -4, -89, 33, 58};
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
    msg.setTimeStamp(0.29860533054845206);
    msg.setSource(3931U);
    msg.setSourceEntity(182U);
    msg.setDestination(59880U);
    msg.setDestinationEntity(178U);
    msg.type = 158U;
    msg.op = 231U;
    msg.request_id = 63938U;
    msg.plan_id.assign("QAKHIPXEOAWZNMJCUSLKHDTKXSJETUVKORXYISBPYTUOQNCZSTFRGBLORYRMHRMSGLRKVHRGNTWUMGQBSUPDZJLPSEVCAUZOLJIZXQDJEIOCADJSNQYZMAPIADTFQMFOHXPKUFDCLSGLTXJYRCLWHAKWHXNUQGZTGEAM");
    msg.flags = 23272U;
    IMC::BmsData tmp_msg_0;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("OOSYFEWEMHOVWEVNHTNFJRLOZRDLFVPETOMRPLPQDIFKMAYSAAORXUZFLZMEPQBVNSC");
    tmp_tmp_msg_0_0.description.assign("CMZXIAAIYOXDKYRXUWUDSQDTXFLHFYJDKTBRXNOWNPPTFKTBHSQCTJWZYSKEUTTCBNDREMUQDJYLOGQFMGVLVGBEGWQQMXDHEFOSTJIPBVKJLVBOGZBPWGCGPXTLAKUAICZKEKICPXDWZTFCJNAZFSFDISQESXNIREEGHVIYALWLHYZFAOOQWQWVJJMIYKNPKSHOCWNRNSPALBMGZGNLJBZJHMNUIURBHUVPRRPUHSMFA");
    tmp_tmp_msg_0_0.vnamespace.assign("AKWQCATSYNXVMTOHTAZGKPMMQLWHNDZIUHBDCJODYTCDHROUTJCLPRXLNQWFTESJMDSNPUNIVFMXZUWSFFNTUFURPKBBIXOPZUAOEHQSCLMKNBQNKUQQGWPPOSXKUZZRBVZMCQLRGJERZYGLVXIKHXDIIGJOTXHPOEALPKGGFVQBBGDW");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("QLFKYGRDWVBOZAXXKATOURDIGFAKQVWMPTHKFYHVIHMOGUNGNNCNYCNPKIJIPYLKTSFJTKLMESZEJTFLEZLAVRCLLOJMUSOZJZEVPRRWTSNBIORMPUHZPW");
    tmp_tmp_tmp_msg_0_0_0.value.assign("HSYXXXUEORWVRGEJFGUBMOVYQGNTIKHVAKDKMDTAAZCPQABETSMMYZWPZTJJYBGSICRLZYEBLWTSPCCQNGJJIWNRUHBIORDCFHTWCKWGFZVXCNKOITODEWPIXIYZFPQXJUVPSJVWYUSUKHBDBZSOIUTMQVAQYLOCNTAQCTNRZM");
    tmp_tmp_tmp_msg_0_0_0.type = 159U;
    tmp_tmp_tmp_msg_0_0_0.access = 101U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("ZIDFHYZQSGHFDNQCRUWPUZIGLFLJDDITXWCZJBXUMSBYTGRCJHBGZCHXTKXVVRPRPNXOYIVLDQKSRYNHVDOGUPNMGEZVKBQNEGJAJQWTVXOMKEXOXWCTVLKWAFYWZVLHFWSAYZCMANWCKEBQELEUDECRILAOUDOUHFJJJAPIFSJVEOTBHCGABSXMRTMLQHPKJNURDTIVSIOKRHBBXKNAFILPOYNTGMLUYGAISFSETKRAMQZFQCYWPPY");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("GTSTHSDNPIURHBZGTNETBISLAWJFUSZXMYYVRXMFPCMDWRBYONWVIJYFKELVJUPVZQFJOABFKIOYBMEUAXJ");
    IMC::Land tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.14400477551629765;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.8568996526889324;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.5564699466240325;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 254U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.8745811433603311;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 207U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.abort_z = 0.40394271588684494;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.bearing = 0.07263641713120927;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.glide_slope = 132U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.glide_slope_alt = 0.8473131449669838;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("KMVEMRTRKWFUVIAJ");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::CpuUsage tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.value = 241U;
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.original.set(tmp_tmp_msg_0_0);
    tmp_msg_0.req_status = 163U;
    tmp_msg_0.pack_idx = 212U;
    tmp_msg_0.temperature = 0.7057175019758191;
    tmp_msg_0.voltage = 0.20063365399199462;
    tmp_msg_0.current = 0.6313163695124828;
    tmp_msg_0.rsoc = 26U;
    tmp_msg_0.asoc = 173U;
    tmp_msg_0.soh = 131U;
    tmp_msg_0.remaining_capacity = 37801U;
    tmp_msg_0.full_charge_capacity = 11463U;
    tmp_msg_0.cycle_count = 25754U;
    tmp_msg_0.time_to_empty = 65065U;
    tmp_msg_0.time_to_full = 46986U;
    tmp_msg_0.battery_status = 32881U;
    tmp_msg_0.serial_number = 41701U;
    tmp_msg_0.fet_status = 42675U;
    tmp_msg_0.safety_status = 598205680U;
    tmp_msg_0.pf_status = 3592341967U;
    tmp_msg_0.operation_status = 3948991091U;
    tmp_msg_0.charging_status = 48142U;
    tmp_msg_0.gauging_status = 53699U;
    const signed char tmp_tmp_msg_0_1[] = {-104, 90, -39, -15, -70, 54, -108, 84, -58, -100, 81, -19, -124, 18, 109, 31, 51, 122, -86, -13, -46, 95, -4, 60, 52, -21, -79, 42, -56, -55, -100, 98, -70, -90, -37, -39, -117, 87, 9, 116, -1, -53, -109, -58, -55, 78, -63, 32, 57, 45, -123, 41, 89, -89, 44, -111, 97, -89, -102, 89, -83, 41, -52, -35, -91, 113, 57, -81, -50, 63, -103, -15, 109, 72, -73, -52, -77, 109, 110, -70, -99, 62, 55, -103, -45, 25, 31, 46, 47, -117, -3, -25, 64, 60, 93, -49, -82, 119, -117, 27, 90, -23, -119, -108};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MXWIFPPAUHEKYCUGBJKYTUFNSPVEMSDLFBFQVZBIHBCNFDMDNQTI");

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
    msg.setTimeStamp(0.41011411190024283);
    msg.setSource(14327U);
    msg.setSourceEntity(252U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(65U);
    msg.type = 62U;
    msg.op = 141U;
    msg.request_id = 26227U;
    msg.plan_id.assign("WYHZCVCQVJEXSWIOBRK");
    msg.flags = 19101U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7248011865732346;
    tmp_msg_0.lon = 0.4639867772945203;
    tmp_msg_0.height = 0.8210037830905043;
    tmp_msg_0.x = 0.7079991894609383;
    tmp_msg_0.y = 0.061342794793466715;
    tmp_msg_0.z = 0.19257362301103198;
    tmp_msg_0.phi = 0.9989528269982616;
    tmp_msg_0.theta = 0.5619322670331007;
    tmp_msg_0.psi = 0.8225367451564891;
    tmp_msg_0.u = 0.6643336149803863;
    tmp_msg_0.v = 0.028062272036591063;
    tmp_msg_0.w = 0.24441603028753378;
    tmp_msg_0.p = 0.4437334356839724;
    tmp_msg_0.q = 0.5554256340997036;
    tmp_msg_0.r = 0.1644098391706219;
    tmp_msg_0.svx = 0.7708871880810662;
    tmp_msg_0.svy = 0.3396907480082296;
    tmp_msg_0.svz = 0.8589968559259291;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GLDPQKXONN");

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
    msg.setTimeStamp(0.26971554212571136);
    msg.setSource(17823U);
    msg.setSourceEntity(190U);
    msg.setDestination(50002U);
    msg.setDestinationEntity(37U);
    msg.type = 58U;
    msg.op = 58U;
    msg.request_id = 30336U;
    msg.plan_id.assign("PKXMXNXBXECILPVCBGMHUILWWLIMUQABYQOKOYWLAHLAA");
    msg.flags = 44832U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.6254641965560211;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQEZZUPHRBQQDNBEEGPCJLPMETHSEGWBIAYOLKBWDAFUFDQISSDLOLMTHXKDVCWKHDVPQJXZFRLMWAYHL");

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
    msg.setTimeStamp(0.6723055191008499);
    msg.setSource(58300U);
    msg.setSourceEntity(181U);
    msg.setDestination(53985U);
    msg.setDestinationEntity(235U);
    msg.state = 120U;
    msg.plan_id.assign("YGMVRAIXGBYDZVZIJWLNXEOFLERZPFMCSJUQHTOFFWDHDVNVUKACCRPAGXHBFPFPLDATBDUVCNBWEFKRPXHAUBTGYNQXTHZXJIORAPNMJNMWDYWCIJRZGJEKXFUQDIQQMSEJSTZRMTNFWYALKXNNHWHYCETFGU");
    msg.plan_eta = 2108100505;
    msg.plan_progress = 0.5508236512066794;
    msg.man_id.assign("BCKTHHYLMYEWZHSIFMMSZEUUVGRXDCBLACPYSPP");
    msg.man_type = 46195U;
    msg.man_eta = -408863603;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.9701533359047604);
    msg.setSource(55473U);
    msg.setSourceEntity(239U);
    msg.setDestination(40440U);
    msg.setDestinationEntity(8U);
    msg.state = 250U;
    msg.plan_id.assign("RLXYKNYGLBUMIVDFFBNODLMKFOXQBLEBIASKTNMQWUOOYELWTTSUEJAJWUHDGRWSTPMNVRLWPVKCMRNYHGHEBXZDGQVQDQQAKDXXKSUNG");
    msg.plan_eta = 1106986918;
    msg.plan_progress = 0.434865296163097;
    msg.man_id.assign("OVBIAIMRSLVUJJEEWZXSHOSGKYWXLLRLPAPHVUFJDVPQEYIHMCEYAMAXLHVYNDSKDXTGNMXJUDOZNGKJSVOOUOSRHKTQTCWGQTAOFQFYKIBPDFJQZCAPYOGZGNXBCWKHQQCCFSWVWBZAINOXCWDRGSVQXWOSIPRFRUJYLGWDJN");
    msg.man_type = 47249U;
    msg.man_eta = 380484886;
    msg.last_outcome = 39U;

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
    msg.setTimeStamp(0.9916939114808654);
    msg.setSource(23162U);
    msg.setSourceEntity(48U);
    msg.setDestination(13584U);
    msg.setDestinationEntity(29U);
    msg.state = 139U;
    msg.plan_id.assign("VEFZQMFCODPZSWLYSUGLJAKKLDCPQVSCJFDRGDOXBYQOYAKJKAUBMVLKGVXVHVMWEUYGAMXFYLMOSMBDPRCUFSZFPGWAECZIIHTHUNMESUCLRTFIWZNHURUPXHSDZBNTIYTMBWQFRZBVZODXWERHFDAIAGTEGQIOOCIHPXNGBXOE");
    msg.plan_eta = -437778179;
    msg.plan_progress = 0.0265557256524781;
    msg.man_id.assign("POXAXKSYSAPHBDCDAAEOUFOVWYB");
    msg.man_type = 8115U;
    msg.man_eta = 671922076;
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
    msg.setTimeStamp(0.9020471531170751);
    msg.setSource(44425U);
    msg.setSourceEntity(2U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(100U);
    msg.name.assign("PHLREOTKPBUTHQVHNNZDJYLZNAYSMSZEMERQEOWJWTQUGALFKDXKBMVGIFYGDTUEYQOHPTVMCIDEGHMQAIPVASBWLQYONWXCRENKSWBCALWAISUCTYHDIKCSGRDJKPNZGJWYVNSPMTCWIPORXAXPFKMXNVRTEBTLSKZRSUDFACFO");
    msg.value.assign("UIIMEQMAPFKJWKQRFZNXHGZRWEAMYQVULUCRTGRABEDZSUWBFONPXKUKMWZCSQGTOLCOMQFYCVYSJUDWHPAAGLZTUGBQYVLEBJLWSOJFYVIRKXMVIHAURBGTOMTRPJZSXNCRILXKOCJYQFAKAYLDFDCVEIQBHVJVTOSXNGDMVBNXETPZPBYNEJHDEHYHMOPSJSCONWWHDZPXXTGDXBFCITSLQAZ");
    msg.type = 96U;
    msg.access = 166U;

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
    msg.setTimeStamp(0.10034385008281654);
    msg.setSource(57685U);
    msg.setSourceEntity(131U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(126U);
    msg.name.assign("ASLWBQPYKOYABCVLZGPKYFHVHDBIIZUOPMOHFQOETBLYHYWFMZJVGUDWYIBGWNLRXQPCCSZDKNNDJGVWKYDUEGFZNPQKKGEWZTVQJTRBRGWNFLXMGODSJNPMUMLVKECSFJIJTIAFSYEIPBHVQEUWKRXBEXVTGEDHALUNFOO");
    msg.value.assign("VMONBQEHXKJIRBJOZWGWDZFPHEYDJPVLUUOXVMVSTHMU");
    msg.type = 201U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.8280078434646382);
    msg.setSource(20153U);
    msg.setSourceEntity(149U);
    msg.setDestination(16657U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NULEGWMKUCWIBBZUOLNOOBLEMZCAOTNKFHDXNSCMDWFLMZQEOBVVZZFUNHLKSAYKCGMRAAEZHJMRVUKRMHITUBCPDGYYKZNRHYWECXPFZPVYXHIJPIQVXAAVTHFYVXGSDSWACIW");
    msg.value.assign("RORLXMVOTMOKHGYUXEKVYJATYEAYNZTKHCZTWUFBPGXCPZRSAOUETZ");
    msg.type = 19U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.02747891340965458);
    msg.setSource(153U);
    msg.setSourceEntity(114U);
    msg.setDestination(11813U);
    msg.setDestinationEntity(180U);
    msg.cmd = 0U;
    msg.op = 242U;
    msg.plan_id.assign("JKJPMUJJQVRPSWVUWPUTYYUGALXCWMXBOEOCSGAQROGFFUECPZGWQKQHEIXGZAGFBLFMNWHTUHLCXOKEZNKYTKLJRRZ");
    msg.params.assign("JZXCPQUCDZYHKHMRNIWFLAGQAOOADCDLYQCZXGMAKTQUPGQEGDNINPWMLSGMOAEJWISVBPFNHLBJAGYJRPYWPCQISUJYHJELRYAAPFRYDKRXUNVHZRRWECHFUFUEMEJVIAMLPIIYGMBWCEFOKENLKJVHUDQONLSBHODAPTZVMWJKGFOTFQXCMJGDEDZFZRUVVTIXWWX");

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
    msg.setTimeStamp(0.16931021439224236);
    msg.setSource(27146U);
    msg.setSourceEntity(112U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(126U);
    msg.cmd = 137U;
    msg.op = 47U;
    msg.plan_id.assign("MGZUUXEERYYERLKCVVIZYYOOOSBZMQYLEKATTTAFSIKETQWQMLETXCBDMWNPCFHKDJZDIPVBGTTYXKNFKRZAAHKNHHFHHSUU");
    msg.params.assign("JMFRYKXBIXDYQVDWWYMZDPDJRPSTJWMLPVHMBUZFFACUXOEDECSGZLIXEJVAKQKARKUCWZVRIXDZMLFGCOSWZDRWECGBCNVLLBTHNQGWADGIHHKJSYQHHJSRYSUZLZBRPIMMKISXNB");

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
    msg.setTimeStamp(0.38555302359472643);
    msg.setSource(7617U);
    msg.setSourceEntity(161U);
    msg.setDestination(40219U);
    msg.setDestinationEntity(48U);
    msg.cmd = 154U;
    msg.op = 5U;
    msg.plan_id.assign("FPGPNQTWXWCMZLDFGJNSHTHQDGBGYRSVKWVAC");
    msg.params.assign("CWJHCWAKCILTOQMURIQESKUNXVPMACDHHHYMLSZMQUMFLGJTSVRZPRNOJRQOUACQFXYQRNDTITXBYDRTNEGLDWKDFQFOQMCVVSJXVOUBPNXVHZXHFPSUYRZELCFDUKEDYEYONIKGAVPYRNUBXRAETLMWFIOCJ");

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
    msg.setTimeStamp(0.35723261276122253);
    msg.setSource(60654U);
    msg.setSourceEntity(36U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("CXITWITTBWYQXFUKVEXJNBODTWLENYVXNJGXWFKSZPUIEXZOFLKHNJCOLYOGEUWDRVFKBRBDLHBSCAGXEZFPJWLFGUOWUHTNVGBQYQN");
    msg.op = 227U;
    msg.lat = 0.9520880988825651;
    msg.lon = 0.1446166232269912;
    msg.height = 0.6747157289419184;
    msg.x = 0.36626776321397925;
    msg.y = 0.40748261082965387;
    msg.z = 0.8250781269185878;
    msg.phi = 0.41538814125002155;
    msg.theta = 0.6955982185440432;
    msg.psi = 0.29132664699906663;
    msg.vx = 0.03631435779780556;
    msg.vy = 0.7239710201641472;
    msg.vz = 0.14260959113688298;
    msg.p = 0.8637884362477259;
    msg.q = 0.013126642114154263;
    msg.r = 0.9568028403259323;
    msg.svx = 0.39985167580103176;
    msg.svy = 0.1586932967055349;
    msg.svz = 0.49796625482395485;

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
    msg.setTimeStamp(0.3962110074541614);
    msg.setSource(61576U);
    msg.setSourceEntity(227U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("PCTGYQUDQAMCMUESVLBUHKCAZDEBQFAQTHGYXFNWUQCRMZCURPCJYDPLWZOLWNGNKONVRLWJBIHHFFAPFXKBAMYLLZHMZBEQGPRSHAHCODKJGXSWJDIYTNPVJSDIOOBZWQLAGKFINVTRUMNDATERHTXNFHBMRPIRROTFCILBPAUGTVEYNNMIEKSXJXSWZKEPS");
    msg.op = 139U;
    msg.lat = 0.5288653062646353;
    msg.lon = 0.7136155071255743;
    msg.height = 0.04936406564830975;
    msg.x = 0.7998835199356136;
    msg.y = 0.5269333048229562;
    msg.z = 0.22387745150198257;
    msg.phi = 0.9832896857558256;
    msg.theta = 0.8413416916670257;
    msg.psi = 0.244591427066291;
    msg.vx = 0.44827068881147547;
    msg.vy = 0.2530660621666039;
    msg.vz = 0.33492522226727384;
    msg.p = 0.818686930072026;
    msg.q = 0.7241308764049055;
    msg.r = 0.5797480659454052;
    msg.svx = 0.2842692178790992;
    msg.svy = 0.6684859031400253;
    msg.svz = 0.7899581105825544;

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
    msg.setTimeStamp(0.41634656026236694);
    msg.setSource(13994U);
    msg.setSourceEntity(199U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("HCENJUOLDFFTIRXBOUDXMHVD");
    msg.op = 133U;
    msg.lat = 0.954833830821243;
    msg.lon = 0.9233564248414273;
    msg.height = 0.7033067327947978;
    msg.x = 0.9132988956453406;
    msg.y = 0.7524382268351582;
    msg.z = 0.7174048017102838;
    msg.phi = 0.08670855391712695;
    msg.theta = 0.2640744355988198;
    msg.psi = 0.03005099327686278;
    msg.vx = 0.6761231760685409;
    msg.vy = 0.2244275779721474;
    msg.vz = 0.11807049892676302;
    msg.p = 0.7563232477640636;
    msg.q = 0.6191392977859906;
    msg.r = 0.9263709607222022;
    msg.svx = 0.20062691892663254;
    msg.svy = 0.1117989215430355;
    msg.svz = 0.637617766625145;

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
    msg.setTimeStamp(0.04812304230994502);
    msg.setSource(64310U);
    msg.setSourceEntity(238U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("IDERMHHTXKFOBNFEURVFMYNWYXGSWFVVAGRIILWDRTNOJOYYWMTPMNJJFRQUOPHSLWOQWRPIZUQDHBNPYPXHPC");
    msg.type = 23U;
    msg.properties = 210U;
    msg.durations.assign("HKXATGOZVFGFHQDBERMRAPSROBBERJOKYJNRODCPBILQRYKQCAEAAPVNGSHHJJZWTAKNCBKDYOIZTFZMGTUDVHXUPWMRKFCITTRXMLFNKVJQNDIVSIBYUTZNIAGPIYGIBGOHXXKLMDANMDHTUPGQJUPIBPOHWNNEEECQSWEAJPJARTUWMDRCLYXXL");
    msg.distances.assign("RCWWXBJWWGSCJRDRQRWZEDVDNSXBXGTPDOPGBJRAQLNOHYONKBFUUKXBTHARUSHWLCNSPQYVMVHEITHDZEIMKLGWVSDSKWZMIMNBCYXGQWKTXKCYJOEYIDJEBQMBYPKLXBFVNZOFPVMPFYNJVNDILOXAEFMCZG");
    msg.actions.assign("KNFMAVMISXQROVGUDYGAC");
    msg.fuel.assign("IUEMMXFIDHZCUKUPGCVUKWOFILZXAKZXWWSOGHNCNLPWNBILCETEQGDULPGCQLOIJDLRKOPGHAIMRQBTNXMMRASSXELPOOJVJZEULTHXDFBPZRMEDQHEFKAJYUSWBWNNOXWVXWYVCYQPDDWRHIHADYUGJZMGZNVRQSMAKRMXNJCK");

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
    msg.setTimeStamp(0.9455842641136422);
    msg.setSource(20877U);
    msg.setSourceEntity(199U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("BRHFYKJPCNOSYWNVSEWMCGQRHTUOMLTYYXLJGDVAIFXBEMYCFRKWDZEUWWSHNRQWWHIHXZNTCFUZRIBMXXDRSOAOWTMHLDLZABYXYTQUULRBJZDPDWIMPKUPOYZMJOQMJRGTTFKFJVVHIXIZAVZIIGYTLPVQTIGNORACAQKEOUOVJAGLZSLCFFPPZJGVEPEEHYCOJMLKDCNGDKCEQUQABSUVAXBBVBKXHNPSJSGDTXAMKGBWQ");
    msg.type = 106U;
    msg.properties = 254U;
    msg.durations.assign("RNIPJLNTQXBAFCUBHUMLWXYOEBMULEQYUVGALYHNRKZTSGSJMZNFRNVYXCPTSJWTKFVFZSEXPOXDQFMZ");
    msg.distances.assign("QGXMFLLGFFWXIVYARPHLJUILHJWVBUCKMDLHWFPTVIASPTUZHGULSCNVMQQXMJDQYRLQBZPOYAHZXHECEDPBNKTHNNBXSWKYOEDFTNXGTKMDBYJKCHNWZESYCJTMULIIFGTKNOWXZOIXPDEQVGRERPZICAKSXOGBUIVVMCVESXTTWJEAJVVBFODGKAPUDMBGLERZQIQS");
    msg.actions.assign("FTSCRXEFDZXQXUFDQKIVFAQOTTAHPTZFBWZVHYLVUEYGFCOTGUPBSXLDZTSGEVRYRWKGHCUQKRWPIDULHAVUNAZBPGLPFKCEZJZMCSIGGMEPYBREQOIRIYJWBJNJQGEACYRANAOCZNOKJTALVCUIJBDSTUXRMPJBUDNNIICMZMBVOIWDHNOMLGMWNWXSQMHSCVLQBTDXLOXTZPNWYWVNJGHXKKLRSHXM");
    msg.fuel.assign("FNWOUATLYAQAPSIPGPENFDXEMOFFSM");

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
    msg.setTimeStamp(0.2937884417402977);
    msg.setSource(28843U);
    msg.setSourceEntity(0U);
    msg.setDestination(15191U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("DHKBIFPHDRNYOJTSDGJRQTVJYWZQDEIO");
    msg.type = 223U;
    msg.properties = 215U;
    msg.durations.assign("PZGLZQVLRKHBIYGMYHLWGRKPXNYXWLVEUEORMNUDCANJAVDUWHFTBYSFXTPAHVVQNAAQHBJOXNSAQSYCRZLIIZSEZQHXIWQCQYTMFUHLODYWXXNKRJOMKPDXEVKGVCRWFJKFIZDFIKIYTMFDQKUPRDAMELBXZWASNJSQRBTDGIHJG");
    msg.distances.assign("HWQDKCVCORNQNAZBZZDVAHUVJGSOPAFCQVLAMRTZPMLETPECJDYRQTDNOSXWRXKIELIVSLOWEJBCIZNBKMGJMYEKQVXBZZTTAJCXOHZKTGXDCFIFYRLMVQFLULPQAWSXEGAFWRDSMCDORGLZHOQUKWDJGRKPKFHBDWNYHABUBRIOWHRVWWPYUQNMXGNBPNMXGOFSGSNJJUEMUNMPFKYFJZSOXSPLTPGUYICK");
    msg.actions.assign("SFWGOGGBYVHGJZAPGXKZJKNHMUGPSFARLJQPMLULCXMJEVOFMXWPRAIUAKH");
    msg.fuel.assign("JDRQCLJDWGIVKMGTLHGYHMPNTXHPIC");

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
    msg.setTimeStamp(0.24757769983647637);
    msg.setSource(50786U);
    msg.setSourceEntity(129U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.1128299521637115;
    msg.lon = 0.8454270907241326;
    msg.depth = 0.8139736406535297;
    msg.roll = 0.14472111215600603;
    msg.pitch = 0.2577639632340931;
    msg.yaw = 0.6956362646354995;
    msg.rcp_time = 0.35419621585945604;
    msg.sid.assign("VZRKLCITJVGLYLBEVOGOWDRDKSDJWXNZUQCDWEJOXPPAFFVEBVJYUZFWKCKMEYTTTCFNHHMKYIPTLNIJCQNVBNOFAXAZAQLAMYXOHDSFIRNUJPAHYPKQQEZYLEHWRWTOCHRGMSUANCGRMXYAIGVWYJSSFZPGPFTGHPIDCPRNSOVBKFMXEZPKDUSARDEJBGZRUVXEUSQFBHUIZLSLICQGDUUDIVQKXTOM");
    msg.s_type = 137U;

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
    msg.setTimeStamp(0.770580436216862);
    msg.setSource(51590U);
    msg.setSourceEntity(171U);
    msg.setDestination(35969U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.7756848789646152;
    msg.lon = 0.9286796432542282;
    msg.depth = 0.9204541621672441;
    msg.roll = 0.25632854089372636;
    msg.pitch = 0.3107119925134203;
    msg.yaw = 0.6328874624296087;
    msg.rcp_time = 0.4087645753531549;
    msg.sid.assign("XRXEQLCRXLTA");
    msg.s_type = 217U;

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
    msg.setTimeStamp(0.276988917723194);
    msg.setSource(6959U);
    msg.setSourceEntity(40U);
    msg.setDestination(41142U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.4675217609029295;
    msg.lon = 0.6202717807374722;
    msg.depth = 0.5271145215302744;
    msg.roll = 0.8705380849869093;
    msg.pitch = 0.696411486229245;
    msg.yaw = 0.11935564846048552;
    msg.rcp_time = 0.9735584457414681;
    msg.sid.assign("NEYHAFAWZLYOSMCAFPTRBPCYWGWKDURCTDKXYCTFDPJJGEENOGGSDEFSIJRMNVTDKSLWQDRWJSHUSGLZNJOCVLBGWAAZHACARISHBBWFPLXGFODKYELMPCTJILVTQWHXEQNKBTGVORDHPXXVDHFKNUUVBAFBJNMNVJKIVQGWCSIZMXUBQMJMYRPCXXZZBKEMELIJMQGUFPVX");
    msg.s_type = 189U;

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
    msg.setTimeStamp(0.4168341610042414);
    msg.setSource(61908U);
    msg.setSourceEntity(207U);
    msg.setDestination(45701U);
    msg.setDestinationEntity(102U);
    msg.id.assign("IRBYYGPTJSZCKSFITWZQBCFRGDGGQCRTTKKYFJLADMNZOUUHNWFWHRAMXSDESCQZZVIMGYFVTIONSVWKWUIQBMEIZKJOSYUGEGKHIJXLADFBMLSTYKEIXLPCEDNMJMQKWUAOOLTSFYQQCNAOIDHPEQMYBKWBUZBNXNJQVTVXWVUSANPZJVVXNAGRXXCAFRHKXPPMHRTRZUECVPSLEHDIJLYRWOLHFFUGJ");
    msg.sensor_class.assign("WCOBOIAOLFLMPCLKMY");
    msg.lat = 0.5204019015849761;
    msg.lon = 0.8687103382106715;
    msg.alt = 0.8396008131676318;
    msg.heading = 0.13912043150887798;
    msg.data.assign("QRESGCOTBCFZCINCWWSZMONUVPVHWHNTZLQNAW");

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
    msg.setTimeStamp(0.6749027400928373);
    msg.setSource(37671U);
    msg.setSourceEntity(28U);
    msg.setDestination(9596U);
    msg.setDestinationEntity(139U);
    msg.id.assign("IJSTEGVMJSINTXAJIAQBLJLQEKLYALUBPWGJPTWDXOGYSDQDQOCERIOGMZIRWKWCYTAFJMYQHBVAVHXLLFSCSUKBMMCPKNORATDCIBUTGFANQSOGYUDHUHDCYGNWFTZVIHVKUNBAMEDRPUZXLUFBLNBZHEVJQVWTNOKXCSNMTHJPRXHMBXFAOYSIZWRRWGFYBAGIWDQVCZOCPZSEEFHRZPKQPKNVLJPOERSPUEGYCXXZQL");
    msg.sensor_class.assign("YAATVSDCBHYODRYPNZGKOWLMTYCAFFUSFCNKXUSBQVIEFMRLTJDDKVBNVVOQICGHSRRQFDQMJFMWZUKMXBGLJRGTVGEJBOJUASREJZWCRYTHKXBCCKNSHWKIAEVUDABIXUWUQXXHDMACTNZFXHEORUWPLRYTGMREWLKULZXGBNELSQIKCPCPPYYODIOWJQSFYTBJWHOLADYMJHLOIM");
    msg.lat = 0.7085650708100043;
    msg.lon = 0.12340683085015303;
    msg.alt = 0.8777601071394425;
    msg.heading = 0.06290149797187294;
    msg.data.assign("GLAUBJJHWOHAQTJBGSAHPNCOYWSFVWFJTPITBJNXJLNADPICXROWFPDFIZZJNMUFCTDRGEKQSDEUEAJZQAYSGOOHZBFLD");

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
    msg.setTimeStamp(0.392162157363955);
    msg.setSource(31095U);
    msg.setSourceEntity(216U);
    msg.setDestination(50837U);
    msg.setDestinationEntity(123U);
    msg.id.assign("JAYGWINZPXBXHARWGZXKMBQPDCQONESX");
    msg.sensor_class.assign("KMDXCLABHWRTYQZKFLUWPGMSGBMUIVGKUUQSBFDYPRQHNGAZXXWT");
    msg.lat = 0.6498566297722832;
    msg.lon = 0.7142443851072507;
    msg.alt = 0.949285769813194;
    msg.heading = 0.42541371997314237;
    msg.data.assign("OPXCRRVAOECXKTOEFLBKZYSNUAKXUOKONARTVKFNCRGEQHROPDLMXUHNLQBHUDSOJTGSKHGJGJMIYWSZEHJCQWZRGXSSNBNMBOIMKPMNCGBHUVSZWZIVEIWSXEGGERFPRXCLUKFTRJYCXTZDMXDISYAOLNGDQDHHAUBPAAWTKPZYFKVBYEZIVQNQPLNJVBWIWFJQFFFCEUODWQESULMQTYVTTWHFITVIAVJMLAJIMZBLBYDDDGCRCLPQ");

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
    msg.setTimeStamp(0.928778466588082);
    msg.setSource(33791U);
    msg.setSourceEntity(54U);
    msg.setDestination(26134U);
    msg.setDestinationEntity(32U);
    msg.id.assign("ZWKHBAXMYXQHEFKHMQOKAMCSBWIEWQJUWRUVTSQOXTECHXFYFKAQJSFNWCRJJFKDKXRPYLYVDUFRVGUIPSSWROXMMOSYZBBDVZKPCIYWALKIRDOBOCNQIBWOJPLTJFBPTJLZEMIZTXNNLWNDDODLHGTORQEUCUEAERJZCTAHFHSMCQPYBNULZGICGDSUIDBQKVHPYMFPHVYPMV");

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
    msg.setTimeStamp(0.4427441141958226);
    msg.setSource(46531U);
    msg.setSourceEntity(228U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(218U);
    msg.id.assign("NHECZZAQTTBDYDJSKWDUOWLOMBSNYRKFPGQYXOGJWGLLPIOAZNBHWMVDMLUUXSNZPRJQZEJZNGIAUCNWPQSTQVDF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PNCIFDUKYBXHEEFYXKJSCLHCUQLN");
    tmp_msg_0.feature_type = 115U;
    tmp_msg_0.rgb_red = 236U;
    tmp_msg_0.rgb_green = 55U;
    tmp_msg_0.rgb_blue = 31U;
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
    msg.setTimeStamp(0.7455915764760418);
    msg.setSource(38811U);
    msg.setSourceEntity(63U);
    msg.setDestination(47659U);
    msg.setDestinationEntity(120U);
    msg.id.assign("NRDUDGYTETCCLWPTYTEVUVSALGTRJNZIKBJDLRMBOUUQGDXKRRTEVNPJSOCMQAFKXDLUQIHSKYPVYNFSTAYBVPASIVWWZWMCKOGXJYYHWWFZHODKEDEMMJYHWJBCGKQXCTQFNOGSLBNDGMJCIOXXOESBQSPBCSWNLZMUMMDZWPJFTOPNHULRAQLZURVWVKRRSIAZXPFFGMFRGJPXHQKVDBQEKZPNAX");

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
    msg.setTimeStamp(0.6375767139901238);
    msg.setSource(45095U);
    msg.setSourceEntity(200U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(27U);
    msg.id.assign("QIPDAABEVPQFDWMUHHLZGVLSMIEJAPHMJZYXWETJVUTNIZMJOIFZMANUBGRLRFUHYPDRALGSRVXGNITKGXNTGGWYATHHEUCDBNYWDHFMDEWQOPVBSKJQXHVIRGCPACVRCDSJXKOKVCKZBCBDMPEWQOVBUTJIKUDFTAOQBKFEFXIBCQTIMKQCOZLQEXZGRWSNGTJYZUKFJMYNBTZSESDLCXYLNQRVURYN");
    msg.feature_type = 55U;
    msg.rgb_red = 169U;
    msg.rgb_green = 229U;
    msg.rgb_blue = 171U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.16454773518962762;
    tmp_msg_0.lon = 0.3477345173972213;
    tmp_msg_0.alt = 0.784423211421706;
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
    msg.setTimeStamp(0.5890456974419437);
    msg.setSource(34003U);
    msg.setSourceEntity(115U);
    msg.setDestination(22677U);
    msg.setDestinationEntity(137U);
    msg.id.assign("XYXFBPRDGWOX");
    msg.feature_type = 67U;
    msg.rgb_red = 232U;
    msg.rgb_green = 110U;
    msg.rgb_blue = 231U;

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
    msg.setTimeStamp(0.001880658462593443);
    msg.setSource(34540U);
    msg.setSourceEntity(79U);
    msg.setDestination(30922U);
    msg.setDestinationEntity(179U);
    msg.id.assign("YZVNPXPMRXTQSNTOXTPJMFOXLZJLDQBJCXUTBBTHCXLGPTRWNDFAERVNSFTIPPSCQHEVHBMZOEYBUARKIZWOWIVLLBURHXFYMZJFJKAYMKHUBRDNIKBAIIHOCIMFPVULGXNQDFKREGNGWLUIVOSJWMENYCWHHZWEHYQJKSUD");
    msg.feature_type = 218U;
    msg.rgb_red = 188U;
    msg.rgb_green = 20U;
    msg.rgb_blue = 7U;

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
    msg.setTimeStamp(0.31192666178660033);
    msg.setSource(21483U);
    msg.setSourceEntity(182U);
    msg.setDestination(51927U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.7361965421053879;
    msg.lon = 0.6981313698795897;
    msg.alt = 0.05924942831107061;

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
    msg.setTimeStamp(0.4398088247128773);
    msg.setSource(34555U);
    msg.setSourceEntity(154U);
    msg.setDestination(33866U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.7939937603789678;
    msg.lon = 0.21119424993765268;
    msg.alt = 0.0012273859396064735;

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
    msg.setTimeStamp(0.7257244362197234);
    msg.setSource(57398U);
    msg.setSourceEntity(234U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.2082580941660015;
    msg.lon = 0.7829037261453052;
    msg.alt = 0.6275373163965409;

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
    msg.setTimeStamp(0.5030158089395834);
    msg.setSource(52004U);
    msg.setSourceEntity(63U);
    msg.setDestination(55197U);
    msg.setDestinationEntity(16U);
    msg.type = 17U;
    msg.id.assign("MNAXFOGGDEFSNCWJUGAYJIIDSMYBWVLXAAHZBNZXKMLTAPPRNBRYPAQSRGMNEPWKRQTQTSLYKZEYYLGGMQFIXUZKEORBJIYCJBOQULWRVCIKBDCKGGNTQEFYYUKNPFHHPPFFAICZSAXFOUREPUHZPUCBHJLOKDVMWIAQWYDUJLUGMODEIACTTTFNIVNWJXQJSWTLHHSZDOLSDEVTOBMWCUQJGFMXQVLDIJVRERCXZVKWCZMXDEN");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.5522243194809293;
    tmp_msg_0.context.assign("CEQFYFYQXPROHTSFUBGFXCOLWILSEJYWWMRUBKZIFHBXOYDJMQZLG");
    tmp_msg_0.text.assign("OSSKJLHNGUGELHDIRGRTKYWXKULPBWLBJHTIRABBUXJXDIYWNCZEOMSCJMAVAYKYPRGFWLAJWUESJNF");
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
    msg.setTimeStamp(0.4665791126496208);
    msg.setSource(53778U);
    msg.setSourceEntity(152U);
    msg.setDestination(21249U);
    msg.setDestinationEntity(97U);
    msg.type = 239U;
    msg.id.assign("MBCCOTNUMNXIH");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("XMTFFMYWTRPNGVPADBWWACTLXZUMQJEGARKBGFQXDWLTNGEDKKEHJZISEOBSYYSQZPILHUQXYHIVKBCSHZYEUPBHNSTCGXOUPLLESOMZHDUUFQAVQWTTTYINVMJGXLPICUUJFNRGZLKLANMGWKYNYBLJZDPROCCSEGOEDIBSDVJQVAJPSCIAKZEGWPHZBEIVHXRXBYOUBMNFNQDWJIMPQCRDITJCOWFMXDRW");
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
    msg.setTimeStamp(0.13174313041832897);
    msg.setSource(37015U);
    msg.setSourceEntity(124U);
    msg.setDestination(26913U);
    msg.setDestinationEntity(60U);
    msg.type = 197U;
    msg.id.assign("XHIAPJEVTUTIEREQMCFJJUGGVUOYWXHGVLLNOCJBQXZXILRVGGQESMQQYGZDCEWPFMBIDAONWHSTSTFPAVKKXBRILCFICGMDUHSXIITCTEKEOWMRAVSUPFVERBJJRZEUUDMIKANKUKAFLTDQDWZNZUZAHOURWBCOANQMHJ");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.19723335596117997;
    tmp_msg_0.lon = 0.12172471441167554;
    tmp_msg_0.speed = 0.666691395789064;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.limits = 119U;
    tmp_msg_0.max_depth = 0.944791082842084;
    tmp_msg_0.min_alt = 0.7832479359923413;
    tmp_msg_0.time_limit = 0.9131251117937449;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6412273961050848;
    tmp_tmp_msg_0_0.lon = 0.2079641107468544;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("JGJENWZABFPQRCLOQVPMZQAAYIJQFGTRDDBRUQPZYAICOPFOICVYMAHFNRBMILWIHTDUCLTDETSMVVOKKGJCOXKLJVRWWYLRIJANNKMXUFZAJYEHUKTAZCIWLBFFBZYHVBWSPDEJLDTYXNXKBFSBUMHZMVWSKEGDCOZVCNOKQONKYVXEGWMDKPFPHGOJSBEWH");
    tmp_msg_0.custom.assign("JWNPTDGDOXVBEAMYMCOGRSVUMXEDEPKINCJGITLBLBXAQYIMIZHTZFKEPARRGPJIFTMLDESYVOASAAFGRWCZQWTUVVQJXSJGHRIZHSXDASRWTTRADLTANDKQRPKONMVQCHEG");
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
    msg.setTimeStamp(0.5631629984845257);
    msg.setSource(4687U);
    msg.setSourceEntity(99U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("BUPZMCRRADNAPLHPUUQGFYMOPATHHPDLTXYNWZVIVNAYSYLMUCPUKBGLLISWRZIRJGOEXWXDSPKFGHVLY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PDRFOFSXCJTJRPVRTUKPFMOPWXADSVOAZGFQHHMTWGHBPIYFAIWJNLUMNQAYSEYEMTDVELGYZUPWQZSQCBIOUKHYZPZXTNAHKFNYKQJNQJOKOBCAEPWIQNRVZSBAYUEGUXXODSRKRCJ");
    tmp_msg_0.sys_type = 53U;
    tmp_msg_0.owner = 31571U;
    tmp_msg_0.lat = 0.36264950278944286;
    tmp_msg_0.lon = 0.23831057268751132;
    tmp_msg_0.height = 0.1634456270308573;
    tmp_msg_0.services.assign("NINUWFOKCKORSBINTSOYEPQOZXZBNISZITLJSXIMNVVBLBBDCAAPAKDRAOIFLFCJYPCECLHQWWZADJFZLJNSWDVNGQHTJHWZTUQHXUKMGGRRYRKBVUMOISW");
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
    msg.setTimeStamp(0.6522405041389977);
    msg.setSource(11914U);
    msg.setSourceEntity(87U);
    msg.setDestination(1173U);
    msg.setDestinationEntity(49U);
    msg.localname.assign("ITKSYHDZOQUWNAMBGWQAUTSEPXMUNLQFECWHVQH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EPOKVIJHVSVESWJHUDZMC");
    tmp_msg_0.sys_type = 86U;
    tmp_msg_0.owner = 24073U;
    tmp_msg_0.lat = 0.41788851931330184;
    tmp_msg_0.lon = 0.2300998142362064;
    tmp_msg_0.height = 0.8466018505142113;
    tmp_msg_0.services.assign("KILAIBQJZHPHXICXXDCEKNPUZBDHBJLYIKDRABYPBNAFLUPSSBDQRPUZRFTXVENMXIFANLRTCUSCJRNAYRBMXXOTTKWCOO");
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
    msg.setTimeStamp(0.1946884851094034);
    msg.setSource(34204U);
    msg.setSourceEntity(142U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(183U);
    msg.localname.assign("FHNPHLHGUFCLMQRMYMFIUNOIWEQVFSNIWSDQAJTWRVEQQAWVNMNESTXLAAACQUYXWXPLTBSALDIKUGYUTBKBOJTDCOBEZUOHCT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YREULZUQSFWXFXBFKTFTAUMDIWPJFY");
    tmp_msg_0.sys_type = 106U;
    tmp_msg_0.owner = 41485U;
    tmp_msg_0.lat = 0.7710162562711179;
    tmp_msg_0.lon = 0.617669494532405;
    tmp_msg_0.height = 0.040443163997073595;
    tmp_msg_0.services.assign("THDGIGYKXJKBPUPQIKFYJVJKGWKEAIJTICDQOLTYGPMHKYXGEMZJSBFMDMFBGZHNTYVZJUEHGLO");
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
    msg.setTimeStamp(0.9964597500610198);
    msg.setSource(49262U);
    msg.setSourceEntity(192U);
    msg.setDestination(12861U);
    msg.setDestinationEntity(154U);
    msg.timeline.assign("WDIHBAOOPXJNEBMJDOCKRNYVJTRXZZSAIRVMPKGIOYTMZZHSGQETOEIQQOEDPUWEVRKNBGKJJCYZIFFTEOUFSUHBFUEIQSMBENGUMWLGAAHZCFSBOQMVLFHWXASVVPGSSEDEHLYXWNASYCYDZSRHDNJQZBBTIQTKFZM");
    msg.predicate.assign("LGSYJXATRIMOXELKDRJLDCZJOKQEGXHECEQMOQCPQWRGXNYQWLFUUDMTYKVYMYIANLLIWFAKCEKBOHOUSJHGSJZJXBUEBAYYCDZGOHRKAYRIQYPZBOPUMRVRIDDMPWPWVNPQTTNFNAHHJVZGVUWKWXMSJFIXQOZTHIXUSLKLGWZTZHHGBMUVZOXTAFCQSFFFABXVCNZEEODHDAWKRS");
    msg.attributes.assign("DBZRUYXMZNJILNNRWEEOLSUFYJRKALXEVUCGITBEFKJGLDAJOLTUMMEIBSEHVYJQBESAGIXMCTOKAPMHCBWYRJFJPVWSPWXHFLTKTRNUGTDKPWDGNSXFDNUMCCSOPXMTISZQWGMKQZPFSNOIHHVLBGOUVHFRADBZNTTWUJLVRCFDYMNLROFYJAQCVOXBKVGDCVHQXYQIXY");

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
    msg.setTimeStamp(0.7772128840277847);
    msg.setSource(49174U);
    msg.setSourceEntity(79U);
    msg.setDestination(26408U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("UPIZLTYNKEWZWSXSQJHOAJIREDABHXBPMEGEFQGTHZKVSWPBCJOHDBZ");
    msg.predicate.assign("UFZALPWBKCWBGAPFBIHUKOIINOBSSHEKJMCRPZZETQDDFDEYCBQTVUJRHPAXLXMBYNLVEDTSGGJOGLWAQTAWVHEPLPPNWZZQKMKCSUZMUVYJIFIHXNHOLNJXZBCFIADUGCSSYXTRNVLFGKBESFUWPQYMBORJDFSZMLNWYSOHZVCKRQDDEOLDEJXN");
    msg.attributes.assign("FNTLBOSWAYGAFXEEKDJTVJJAYYSWHXTRDHDWSVEOWZYHVOOVFPICIFQXGUXYIKNEWAZUOTKRNCBEGRHNKNUOSPMINDARIABGIBCMPFUWVXSNQBBBPEGHBLDCEEMKNUPHLCMQXJVMMTIRDVXKQMUMJPSQOZLKANHLILTFADPUBYNZCJHUMZIGUZJFUAICZVQOMVKGDRSFHGQGLCYPREJZQFLGJPSPAOWTKCJOTBWXLHDZWWTYDZCYSK");

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
    msg.setTimeStamp(0.5159919116506362);
    msg.setSource(15808U);
    msg.setSourceEntity(186U);
    msg.setDestination(17217U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("MJSQCEJUZPYWYAGYYUDAYIMMKPGANUKJJXNRKAIUVLOJVMXLTSBVHABDZRDGUWAMRHFDTEZNGHWVLHRVXPZMPLQXZTKFJVHDWFVUNJNAZGJERIYETMIKGJYGNLYIOBXQCXXRDMZCORMBC");
    msg.predicate.assign("ECCWJFPOWMPNYYSBBJJTIDGJQEBPVILFXONRQYIKHGTNIUWEZLRKFDMWMAOAIXTOSEVLQUJDHTZAGJGAFGMNXXHABRBUXPJDLBNPAEZNLEMBQCXSELDHUTOASTRMONGALWSCINCQFFYKVPCMTWXKAJEYMFVFNTQKYUCSIBPXKVYZZKFCVVHDYYHSWLHKFZRODAZRTIHQJMGUHWXKTIZDELURCJOPOSXBUQSYR");
    msg.attributes.assign("NNIPMSMKTOEPICROODPCSEQGFGIIMKQCMIGKKUXWCBYCZRUWWSYKJXZOHYYKLQDNDLRWZSVWJAUYMKQBYTYYEIFJASFSRXQSKLCBFNLSLULUMVEFGTQNOETKHGQAKXZLQWOFQACWZWJZXVBPUGIAPJOXALZJJAC");

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
    msg.setTimeStamp(0.37389456408614097);
    msg.setSource(53051U);
    msg.setSourceEntity(126U);
    msg.setDestination(27470U);
    msg.setDestinationEntity(177U);
    msg.command = 180U;
    msg.goal_id.assign("UXADYDBAGPEOCJFUFCTMNIDNDYZPUWASZUPCKMHJFUHMUIERQNLXYIJYGEXXEROAEBNJDKKQNWTZVQLYKDFRXDIELOSOOPVTSAQXGPKTURNCMXCBARWGUAGTOKGFLKFVTFDRSFJRHLHCQJSIBJSLEAVNMHIGAITERVVHPZDXSWTINEQMOJQWLLZBRPYIYKHCPUOLA");
    msg.goal_xml.assign("SNCUKAWFQVWDJGJLJECNGEJCNARTMAGCPHWJPUAZVFGYCSLLUOLGLKPYIJKINYTZXIJRZHKRWHFPAYZVKMYZMQJQYMFYURHUOSBLOLWDCQC");

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
    msg.setTimeStamp(0.6488291352264128);
    msg.setSource(59722U);
    msg.setSourceEntity(144U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(24U);
    msg.command = 223U;
    msg.goal_id.assign("ZBLPASDRESGITLNUOXHJYEQWJSRJPYCIXEGWCDDTPYBNWOIXUQWOLAMKFSAMZPAHVYHEBNQZXNCAKRTVLZITKISWLJSQOTJKHDUMCXGXUJGKGNIVZIRTFRGCWRRDVFWKVOSWQFOJASPBJUZMOBSMNWAVWCRVHALNDUDSGPOECMTPBMOQGCHRPURTADLOHYZQYELTZY");
    msg.goal_xml.assign("VWHJKSWNDKXGABQBIBFUKBWRAXK");

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
    msg.setTimeStamp(0.15099341766254037);
    msg.setSource(10639U);
    msg.setSourceEntity(189U);
    msg.setDestination(41772U);
    msg.setDestinationEntity(174U);
    msg.command = 140U;
    msg.goal_id.assign("KMMCZLLVKYJFKGGSIZEJQSBTQZFIWFOYSXSFGKOUMBZENQDBQTFTMIGKXCPDBJPDARQOAXTDCGDMYSVRHHKIOLZVAEEBEOWDTEVBBPSUFDGZJKLCNMOYBHQRUIDIVOUGU");
    msg.goal_xml.assign("KYQRVBFAZPOTEQYAZERSVJORZNZEVDVGJEYTIWXHMFMUBYBJQAYBCJTAIMLCNVSZXEADEMKXIOVWWNLJYOCDKUHKTIQKQJLWLMXKWLGYAIPBXDZITKDNDLZEHCHLVOSDOYMUURLMXUFFPBPRUXGTOJWVGKHBNZSEQMUVAZEISVGQYNJUGIRPCHPPDHDQJSXASCKFTORKISUBHBNRTIOXWSGBEAMFXGTFJPWRGUCCQFSPNCRQHLWHADCTLFN");

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
    msg.setTimeStamp(0.6321881230621511);
    msg.setSource(30100U);
    msg.setSourceEntity(203U);
    msg.setDestination(25605U);
    msg.setDestinationEntity(86U);
    msg.op = 26U;
    msg.goal_id.assign("PJHHEOXIUDSGDGXUPLYZAAMVYDE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QBDKWSLAWBXUERFKKSHAYVHLEJTOOEAMVMPQIPZEHYYVFRTSGUGFBVINORHUTADBPBTQYVJDRIZNWQUJDUZMGHD");
    tmp_msg_0.predicate.assign("KMXJOSXLQNGOMQEEPJZDBSRFZTISVONKXRJNPWKTOHHBKDYPTEDWRCLQYUIFQXZCRZOZQPAPTZPIBSXPEMMT");
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
    msg.setTimeStamp(0.022353284467364176);
    msg.setSource(41120U);
    msg.setSourceEntity(249U);
    msg.setDestination(49056U);
    msg.setDestinationEntity(178U);
    msg.op = 195U;
    msg.goal_id.assign("IZSGTFXXMIIJOSMMVZYAIWCACWSBLPKJNAMFACEFKPNM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EBHHUDRKCWFYRLUNQTOLDSMWOLYQVHTWJFWPGLSCXWPGBQVVVJHVZKCXPIEJKTNDICPDFGQMMEZBZZBBWXJAIVGUNGNDHDPYOCAHGNLHZPNMVCONSYPYOJFWXTDSQFWDYBWSHYXFRTMLCRFPJKBSIZMIVNKRKISCDEHBQRLPZUFGUTLGOBEGYUTSVSTBKRAZT");
    tmp_msg_0.predicate.assign("OXAGDSKQVEAVIEJYZTUZAWYKCLDPPTVMWUTLYUUSCNGPJFEUFVIMOVVSJSPMGGJZTKERIVULQTZJHYEGKCLJXUQNABCNFBALUYLWBMVXHTUOOEOIJCIWHZIYEPNNRBBKSNKMYNANNKYTDQHRWUECRLDOQHBMXZGQOHJZWPFYWGQLFCOSSZPMBPII");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KPWIJPYAFDDKDRSAJLNJLBOZLAKMOZCHQWHAPOTVJRJLBPTSDICUTBDGGLAKUXFEJSUFIBPCTUGWRODEOGEREMOBHIGIAFMLYTLNMYHQOTFWRZRTJUQYKTGNQJMIGCZ");
    tmp_tmp_msg_0_0.attr_type = 129U;
    tmp_tmp_msg_0_0.min.assign("LJKKRZAOYYPJKXJSTPXZCGPEGVBFXGDZIILMEVPTIUAAKNCLEDCBKTRVSRFFXZOOZGDUADLHWQFQMSGSHLORFPMRVZWXCFRMKYEALIIIQYAGNCXUQIWDUBEYDRENNCHIVKUHXTBOJBATQOGZUMPJOGBVRYKKETUXVUHZBQVTURXNJZCLWJTQHWBVFPQOSOQYFEZCGEDNPTSWMLDGLHJNAHSQBKVMDMUISBWHSNAYYWWFTMPPFJCJIMNWANS");
    tmp_tmp_msg_0_0.max.assign("RMVJNZYFBWCQZQIIVPJE");
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
    msg.setTimeStamp(0.040711897848727086);
    msg.setSource(31439U);
    msg.setSourceEntity(144U);
    msg.setDestination(496U);
    msg.setDestinationEntity(124U);
    msg.op = 78U;
    msg.goal_id.assign("VWYGHJPOQMMLKNCADLCMHGDCDUKVSPMSDRDHAXJAIYTUEVBBRFFSFZCNHBHXQZJHEYLEUCYZTOFTJHLYZVSCURDLAQOYIKPBJMULSOLTENMPAACKKEIQSTNXNGRGAPBYOWQJZZUIEJKSXXVHNGQGDEMVUWUWFVHZKKGBWTDQBXMOVWWWYISAZZUDNKRFLXIFAGBMORRYBJSMOCYW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AQPJJQSQNPOEJERDTEDWXZFVTQEKWKORPMRXAZHLVC");
    tmp_msg_0.predicate.assign("FSNBRKCTLEWECJOTQSLRWQDDHUAZGDXOILLSCZGFBOHUHXOVYEYPHJIRTOPGDXIAGMAKYJCMINUIGHRKPHYGDONTXB");
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
    msg.setTimeStamp(0.683288560718486);
    msg.setSource(3824U);
    msg.setSourceEntity(238U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(115U);
    msg.name.assign("ZPWVDSJABSUNFCBVPFEXFZVXLYUKILNRORZKIZEHESBGJTBCLCTWXTXSMBTLCYDOUSQIFPFIUKQMNCTAGRHBKOLHMPYAUJELQOXWRMNFPPRJNHYMZGUDGSGDZHKJJJWQFXDBVCJRZDAWMLQXQHXFGEVERPEWKEJCEZOHUYXHPKUYAVZTKDDQSI");
    msg.attr_type = 57U;
    msg.min.assign("SQUVZTMUSAFDGPNSHQITEOJZXSUYRAWKZFUBVZJDLERWJEVJETDWMQMMIUSCFWYNSOYJAFASOTDFZVXNECZTZGWHCAWRITGQYODPKQEPMQPGFGNBOJCINARIHURGHVVRTLHMTNWJDQOYXRUGBANAHJEYPBAFPLYRROAHPBBMEZVFBCQMWOGCKKIGDUOHZXXLB");
    msg.max.assign("MSZYPLUKWDVRZUWJIZYLJWUHNYTGNANHBHYS");

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
    msg.setTimeStamp(0.7085629689089673);
    msg.setSource(29659U);
    msg.setSourceEntity(232U);
    msg.setDestination(20530U);
    msg.setDestinationEntity(95U);
    msg.name.assign("KWXSMZRUXGGFPSITZQOKLCNYRZZOWPGFVJGRFOYHHOWTAJLYZILEGUEZGUXXLLTSHSVQFUMYUBVTOQRQOPPVIMBUCRCHYMBDDPCKNHUMIIXWGELOTAZEYUJJJSWELEFVNAMYERGCWKVNYRODIWDAKBWPSNOAALZCHDRXQCAKMJNLJTJXEQKYMNVNWIWCKTAFNGZSDVBIBGF");
    msg.attr_type = 221U;
    msg.min.assign("JMNHUWZLMHLDEDJFNYZNWPNZNRGKOUHDAPBSTLFYCRCBQXBGQIMLKNX");
    msg.max.assign("GQIYZXZXPFOMBAQTCHYOMDLURBGGIXACYNEKCBJWFPEDDOZBWLYRRLSJPWXLUGLNUTHHMATFGGEWZRWCGLVEFVDUJCEYJTQVIJTVIPPOTPNOTFEWSSWVXTFK");

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
    msg.setTimeStamp(0.4579120288673729);
    msg.setSource(63267U);
    msg.setSourceEntity(43U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(139U);
    msg.name.assign("BYBEERAUCSNAATARFQLATKHIRQQKLZDZAVXETWDLQNBGBDCVMCCVFYNNGHJFKBWGVYEMZOSOFJYBNNLDJQLUHGWXDFJXUQYVCCUEMVLVUTOKZXIWSOPAYEWZG");
    msg.attr_type = 9U;
    msg.min.assign("CCPWQZPPAVQUKQVCEKOCMBHXUDENRNPGJGDKPIAMYTLXXDMBFARGRZYADJIDUDZFWVPXUOBEQIXWVGWZELLBJEYMXKZYWGTXSESESKEIGJCOWISJLUYLJYSHQTPBFFNATHVDBNAHRCAFNNIYNAOALFSGOYRWGFBMFMQJHUURTPJJMHXQKDNBRFUMXYZCOPXBWVDUTGTWMRH");
    msg.max.assign("LLNOOIZLXGJGIQOPPNZBFKWNRTSYWICEFUJLGYXMIVSVEOIFSGZWSHUIJABQXYTZVHWQNLGHVWHOZDHNSCEBMWRBYVKKVLXXZARKAUTISPCUHOGAAQFUFOABRNTVLBGYNPDQPLRTRCWMMPET");

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
    msg.setTimeStamp(0.9088398780042781);
    msg.setSource(21453U);
    msg.setSourceEntity(202U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("TMZHPKDQNUDARNKLBBFOEOGSPHCVXDTMCZVKOQXBPINUCAFSWNGZAAGVOKTJGPHCBSXJOEGRPYTZSKNJXAATOLLQMEGWMRZWUWYCJIWFFGJGHLMFDBYKDQZUIGVTWRWURDS");
    msg.predicate.assign("SYXZTTJIQBPARIHWUONQWZPNZX");

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
    msg.setTimeStamp(0.31483490423093774);
    msg.setSource(38172U);
    msg.setSourceEntity(110U);
    msg.setDestination(19215U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("JXXNBYZMLAVEWQHJRFOFXTVMFKOZHQPCECXEQUEANKKZTVCXTODUFIWGGYHDHHVWYSBCZZLYJSHXPZDCQWTARRZHJTDYKGIXEEUVBALSUWAJGXWFOSEAZGQMTQAYRPIHHZBOMYOICSPISMJMLUUOCRCUONAJLLNLWF");
    msg.predicate.assign("CCOROLXUHGERGFNBVQUSSIKCFVJXQVXYWNEXKGEYKFWJKRJTGEGRUNOCPAVHGQFXTIRAVIKNSQHMMKAIYABJPKTGA");

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
    msg.setTimeStamp(0.5931062656719691);
    msg.setSource(23465U);
    msg.setSourceEntity(166U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("FQOOBLNQCVIXPQHCDTHTMNSFEOQVGRYRZDVPRGRETHCDJFOQGWNLAZYLRBKNIGDXFQUAMTJFXXSJLIPNPYGYEWVXZOEBKHSGMTJMDLWRLGWVXMAPEOXHRFVISNRUYGPMSSZIXKOMNUYWAZSPOEZSEVZKZJATMBJCTOJIDVHYEHJPUNCZVKCKBHAGSVRAJTCFDASTTFQ");
    msg.predicate.assign("TPEXMTNFGBRJYTZXJOMSJAQJBFGYCACQDHAIIJREFZOEREUVHLQVTQAGKDIPFICSBXKVFLUHGTMMYUGUEUHPWSZROBARYZXBDJOJNXGYCRIWCFYHLSJBTESNKLTRYDTZDOUI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JBUTLUQSRASJVYBSACTODQUBEUACPWPZVWTRXOAXQOISTOVKYRYIOMMVLHVBJOESHDQZMCAOJUQIUNQGECEUCWMOFPYFRXHAAFXLIRJQDEZHIHZZQDKTGFIULPVS");
    tmp_msg_0.attr_type = 145U;
    tmp_msg_0.min.assign("OQVCPTTFXHMXAOUWCXZJEZWDQNHACBWEOTRGRGTMHHQJLBRVHBZDKWLDYTUYQJTOVOIVULZRPSGIFBAWYBYLJUZGYDBBSTTUCRHWHVKVZFAASDAMSNEVIOWIAWMFVOCPYFGDENHDIVKITZGJZFXGANKMFLRKGRPNDHELWGPUQQQOMZFMCXKSOMDJCLEJJTPUSMNNEQMLQABCPXBWIRCINPFXZYFXENXKUKPHGOARYSDQRUBIXVKSSCUNLYS");
    tmp_msg_0.max.assign("HUIUQZVYPQMOMVNOBUGFEETLEOOTCB");
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
    msg.setTimeStamp(0.6416493687558065);
    msg.setSource(26702U);
    msg.setSourceEntity(197U);
    msg.setDestination(27713U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("XKUWITFYXPZTRNAFBPDZKTWLRXZRSFQBJZUYENUJYHDPCGEHASNSRAFVVOHGQCRVFBKFZVHLPLAVSKGEDFBNTJELIEPDQXXTSGWWARAVIDZWWBIHJHT");

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
    msg.setTimeStamp(0.44902403921537604);
    msg.setSource(17661U);
    msg.setSourceEntity(96U);
    msg.setDestination(32358U);
    msg.setDestinationEntity(8U);
    msg.reactor.assign("AHVOIZNCARNFFUDEUCJYYBGFLGQEQPCXPNNUOWSERONZPNZJRCAULSHQAJWZTWSJUEHWWRSRCBBOUGTGIAKKHFXVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VAJUBMLDWHZNMGCUCINAFMFQLUVYPORARTELBOHYIHXWMEAQGTVAQVFYWSDDLONBPTXEYXZDXETPKTQTKFABPKJUOLZMFAWJQDMNYUNTOJVWEQJSNPIAKKDGJRMXOROGTSPRHNENJOLVZKCZDACVUZFARHUJOGBCPRIWZI");
    tmp_msg_0.predicate.assign("NXQSFNHBZPGLHHBMGIJHGMXOAKPCWV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VPOXHBIGJUOTQWXCKLQVMSZUNHFKPUVEKUPQCIBPRPYUNNYVGQBJYKFWWYKTBXTIBUWHAJOJSEHORNRYMAPQNZHPAHEBANLIPMTXDBZZCLVXHKEFGDCTMZDDJNNHMSYJF");
    tmp_tmp_msg_0_0.attr_type = 157U;
    tmp_tmp_msg_0_0.min.assign("QLQCKEBEGDXQGMGJPEOKFTGXJJULNQFCIKWYAZHOVOALWCEJHJHSNDXLDPVGNILFSCMQSCJLUAIYVDOMYFK");
    tmp_tmp_msg_0_0.max.assign("LNWREXESYQBJQMVEVGVITENGZKMLMCMVMPHO");
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
    msg.setTimeStamp(0.7601720762891873);
    msg.setSource(61653U);
    msg.setSourceEntity(167U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("KLFTLKTWKJATXYNYIGOSQFLQLFRCHDOFRGOQYHHBNDQAQLDDFRBKGXLPV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TBQBIOKFUPFGV");
    tmp_msg_0.predicate.assign("MJCQLESCDHMBHCRAJMUFUFEKYPYMEGDGYRNYRAIOCUVDKRDNGADXTWTZPOTCYCVSKOPTPJVMRKLSRYATLTVMHHJWNLWFXIKPTYBAFACQRNOMYMBGJRAKUXVGMQZMDHLWNTQSPBIQGEFKBITDDQWWPQLVGONCHLRNFQYHBSKEYOZEZISJXJVZIUKXIIODLIASIFUAPEJWUHXUQVSBEFCWNGXNQFXBBKEAHZJZZVTZOZ");
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
    msg.setTimeStamp(0.1614701322732175);
    msg.setSource(2157U);
    msg.setSourceEntity(230U);
    msg.setDestination(45920U);
    msg.setDestinationEntity(236U);
    msg.topic.assign("BZTUMPMVXSNKTPOQXTFODIWSHASLBSSBWSANIKXMVQILQAWDNVFABGCGOUZMYDBCMOYGUMHHJHPEPTYLNGOOBERZTRUJQSXCIEZPHXVBNRUZLYTJXRNCJDIYKSNFFKEROMZTRMJPAQOKSGKNVVYRDUEHKFGTOEUWVHQPEXEBLAGCJWUZMRACQUDQRELFZCWDYWAHJLUVIVQFWGIPGQFJIXZSIGZPKDRKTITLLHYDNJFXYPCBMWH");
    msg.data.assign("EKKYGUNIBUGQWLISAQKNPIROVBFGYQFODSHBUNLCPLFAHOWFTGFHDOCKSHYKBVQMOXUTPTJMOIAYHTJLWIEALHDIXECUFFSDVWOBAUHJSRECRTXAXTJORBDYAYNTZWTBNMZELY");

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
    msg.setTimeStamp(0.7652048962945548);
    msg.setSource(13366U);
    msg.setSourceEntity(196U);
    msg.setDestination(13318U);
    msg.setDestinationEntity(186U);
    msg.topic.assign("TIDCAGKAFTPTEXBHYQDPIHLEXLZVQSWLVYPFDEOGMGJWMKXUSONWKUDUTQYKFHNCXJDNZHY");
    msg.data.assign("SKAHUOOPIXTZBGBJZAPTUSEHEGEOINFRWPQKSFGWACDOYNDNBMNQKTLGPTKZG");

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
    msg.setTimeStamp(0.18958576344858935);
    msg.setSource(37027U);
    msg.setSourceEntity(35U);
    msg.setDestination(40691U);
    msg.setDestinationEntity(59U);
    msg.topic.assign("SMSXRNPHWVBIQYCKDJWPTGQWKAETYNBJNGAPRQELGVZYPROLZCSHWYKAHDNYECMYJPLGYVUWLGUVRIOIVINIWDSHMBLFPPEYLTHZCUKUPJDCKABHTAOCDPZWCZXRGXZQEFHXQLUTLAKIXEEFFDNVQDFJVOHASGHJNUFWIFFNGMQNXKRBRMUKZJIMXDOEFQHCZRLTXTGVRUSAYPMJMROMEYV");
    msg.data.assign("MSELLRPIAWYBJMVHZZOWBGLBQTCUCWZLAADWKXFSMJHRSGFPBGRJEIHDVEUBJWIVQOSJWDVXWIQAHKPWYRG");

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
    msg.setTimeStamp(0.6844154892539225);
    msg.setSource(42733U);
    msg.setSourceEntity(86U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(188U);
    msg.frameid = 145U;
    const signed char tmp_msg_0[] = {-22, -60, 39, -92, 91, 40, -116, 18, -124, -52, -14, 107, 57, 92, -119, -12, -120, 23, -86, -57, 47, 109, -50, 64, -65, 113, 118, 74, 89, 42, 4, -26, 10, 76, -72, -22, -128, -28, 90, -8, 113, -94, 69, -57, -50, -82, 28, 109, 36, -15, 84, 103, -61, -126, -57, 61, -93, -84, -19, -27, -108, 91, -100, -109, -37, -21, 26, 13, 20, -107, -8, -84, 56, -48, -70, 25, -76, -71, -81, 116, -82, 75, 102, 58, -24, -126, -10, 39, 11, 84, -69, -124, 24, -88, 0, -53, 27, -20, 9, 3, 124, 1, -52, -120, 61, -50, 10, 74, 27, -30, -56, -47, 115, -4, 117, 33, -8, 68, -57, 126, -104, 21, 78, 87, 18, -116, -64, -21, -32, 33, 124, 125, -44, 46, 33, 19, -12, 1, -29, 4, 47, -37, -71, 113, -12, 117, 67, -43, 49, -88, -90, 124, -36, 5, -24, -115, -64, 12, 17, -2, -87, -77, -103, -8, 15, -29, -70, -92, -51, 90, -122, -28, -85, 70};
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
    msg.setTimeStamp(0.11447061145101145);
    msg.setSource(47280U);
    msg.setSourceEntity(64U);
    msg.setDestination(56417U);
    msg.setDestinationEntity(81U);
    msg.frameid = 136U;
    const signed char tmp_msg_0[] = {-59, -118, 23, -8, 106, -91, 6, 4, -87, -97, -67, 60, -17, -91, 112, -51, 37, 44, 14, 44, -75, -8, -74, 7, -83, -3, -18, -92, 107, 70, 41, 75, 41, -17, 71, 57, -42, 18, 46, 119, -62, -50, 19, 24, -67, -12, 27, -92, -56, -74, -89, 73, 65, 94, 86, -80, -105, -38, 122, -97, -65, -52, -82, 124, 111, 83, -39, -85, 80, 44, 63, 16, -60, -125, 113, -86, -54, -30, -41, -122, -112, -82, 14, 20, 124, -51, 28, 84, -65, -93, 6, -21, -90, -62, -90, -125, -38, 43, 34, -109, 50, 85, -8, 87, 104, -110, 12, 9, -26, 46, -32, 116, -126, 22, 4, 64, 104, 20, -9, 60, 42, -8, -17, 11, -57, -26, -17, -63, 34, -122, -58, 64, -82, -3, 106, 3, -83, 53, 92, -11, 8, -109, 12, -121, -35, 67, -17, 40, -81, 74, 55, -47, -15, 26, -85, 113, 47, 63, 107, -106, 123, -19, -97, -77, -84, 88, 17, 64, 17, -89, -73, 30, 48, 11, 8, 18, 25, 92, -50, -49, 53, -45, -113, -18, -49, -92, -78, -124, 91, 52, -52, -100, 115, 15, -10, -3, -7};
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
    msg.setTimeStamp(0.49809774855536515);
    msg.setSource(40481U);
    msg.setSourceEntity(128U);
    msg.setDestination(283U);
    msg.setDestinationEntity(252U);
    msg.frameid = 125U;
    const signed char tmp_msg_0[] = {-2, 64, 60, 23, -119, 78, 112, 13, 88, -111, 47, 97, -36, -46, -20, -11, -38, 6, -45, -48, -42, 57, -51, -19, 41, 54, -100, -29, 40, -43, 10, 19, -65, 65, 56, 12, 66, 97, 14, 79, -101, 121, -17, -25, -95, 9, -114, -83, -126, -10, 96, 21, 12, 103, -118, -74, -93, 43, 4, 50, -79, 50, -82, -47, 85, -39, 83, 86, 103, 91, 118, -117, -36, -66};
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
    msg.setTimeStamp(0.9463450727604547);
    msg.setSource(21818U);
    msg.setSourceEntity(15U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(96U);
    msg.fps = 8U;
    msg.quality = 243U;
    msg.reps = 86U;
    msg.tsize = 186U;

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
    msg.setTimeStamp(0.08850967112449482);
    msg.setSource(51802U);
    msg.setSourceEntity(222U);
    msg.setDestination(22044U);
    msg.setDestinationEntity(108U);
    msg.fps = 86U;
    msg.quality = 191U;
    msg.reps = 215U;
    msg.tsize = 8U;

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
    msg.setTimeStamp(0.9690329197018865);
    msg.setSource(34146U);
    msg.setSourceEntity(232U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(219U);
    msg.fps = 4U;
    msg.quality = 118U;
    msg.reps = 164U;
    msg.tsize = 84U;

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
    IMC::Sampling msg;
    msg.setTimeStamp(0.6673564527708123);
    msg.setSource(38711U);
    msg.setSourceEntity(206U);
    msg.setDestination(8127U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.4897918179249473;
    msg.lon = 0.030688348731758297;
    msg.z = 0.07125923187684202;
    msg.z_units = 112U;
    msg.speed = 0.2418717336769487;
    msg.speed_units = 228U;
    msg.sampling_type.assign("PUUDZRSEOKKJRUOYMBMLDMBZZGVRCTAOLPMWJNCSEOBFQCYBVSJPWBGLASWCHTKTCLRNIWADGRIPLCPCIDSTFSFWNOQYSHYKMHKLPTFUWOHONOEQLXEVKAAUHDGUTMTWRIKFKSVRNQYFJQNJVQNRKXUEXIGXDHFUZXHBEUMBBDIXWTANLKOCECLGDTGYJMFJQMSPQHDAZJZTEIAXSIFGXBJUZWGA");
    msg.sampling_args.assign("BUMYRHCHSFPHRDTXXSWAHRFKWUTIGHUDEBXSZKPDYKHVPCULMQGQDXLTNCKVGVXQJVTLGVYBMXZVTU");
    msg.custom.assign("EMOYSIEWXZKQKNGBFTPOMFKSCIGNWIQTDFXABHLZNUPEXBLAOLHMLLOQXHAKPJNCIFFUSBBLCEJWRHNMMFGSUQGOAOXYDRCTEJXVIUXYYNTRXOQRTBURKBQZRGQJTVVDLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sampling msg;
    msg.setTimeStamp(0.44571370993526715);
    msg.setSource(14898U);
    msg.setSourceEntity(202U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.8552601102241146;
    msg.lon = 0.18299047806937774;
    msg.z = 0.11874411841112309;
    msg.z_units = 56U;
    msg.speed = 0.9190602371750425;
    msg.speed_units = 169U;
    msg.sampling_type.assign("QSIVXQPZHMESTSGWHJTDJZSFPSCOJSAHYMVHEXFPRFITAMCYKEUCFAXYLGKVRUBWMRIIOWYRYHXQUXTVLLLRAJROUACZDNVPMTXUSQVNNDXKMNIZHZLSNOVXAYICAELGIIGSGTKGSPFXBYJOEMYJBNBKJTMRPBIOCBETZQGMMDAKPOB");
    msg.sampling_args.assign("TEMBSMKRULZNNAYOGBPYC");
    msg.custom.assign("VAZADATCEGDXEKVDNXINUPCIGMVLSTUPMXPJOEYSRQFXVKHQACMZBBOBJGLEVKJQJXZTERYWWMWZTRNQNZBWGNOBJRDKVDTRYGQCVFTFDGOIKODQYOR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sampling msg;
    msg.setTimeStamp(0.29442550581670235);
    msg.setSource(50159U);
    msg.setSourceEntity(190U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.5429218280937641;
    msg.lon = 0.07269342225119135;
    msg.z = 0.11174075245857473;
    msg.z_units = 227U;
    msg.speed = 0.7359694628319859;
    msg.speed_units = 115U;
    msg.sampling_type.assign("YYWBOSNACXEEQTRXITWEPCJRPKTQJYBPKJRQQLWJJBGISXJEWLZAHKYPFOCEAZRYTNVZOUWMKSNMAQHAHLJDJKAYCHLIDGFQCLSRTTBUOFHDZONZRORHKMLLFQVWWBFQMJVCVJZHFKNVIIOCINXAGZNXRPTBZXBKWEVUXMPOSPGQNU");
    msg.sampling_args.assign("QEMMBMBSHFLARLKUDMSXJPEASMPNGHDGFHXYWUDVFRJXVECCEVH");
    msg.custom.assign("FYLUBUZVMEGRJHGTODPLEWHRCSOADAQLDYWSDBRXJMEMQCGIZTEIUHFKZPTRJPHMWTHBZMRSJYYJIWDFNRSACBQGUNCSUKWIYKCQGJESNBBJFIYUACWICBMZEEOHNKWNEVVBEAZTUXJARFYLFFAIDSMXYKODJIOLGXHHJFISZPGXFCQOXBVHPYHGKGLLPUVOZTKKSDDGLCVYNQTQVZPPASMOXXVQZRQWKTIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.444647842450406);
    msg.setSource(10171U);
    msg.setSourceEntity(198U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(176U);
    msg.action = 84U;
    msg.type = 117U;
    msg.description.assign("HUTFFWTTJYSFREOBKTDNQFVOGRIRQULXELKYTVVDYSDPATBMIGWIYPFWKPSQWZTUHQXWIYBQMNZTXDBUWIRNNAIXJDBQNLHRCFCHBMFCBSGHNDJDYLUANPMSUOHWACFVSBMHQAAFOJVKMNYVUKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.6259913705341549);
    msg.setSource(64723U);
    msg.setSourceEntity(195U);
    msg.setDestination(46529U);
    msg.setDestinationEntity(27U);
    msg.action = 145U;
    msg.type = 109U;
    msg.description.assign("WKNVFFIFDYCEMHOUMYBPHGKAIETFJVHJHXAYSDBMCYLXBXIFOJXAZCPPMENHKSQLOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.6599012581209079);
    msg.setSource(45463U);
    msg.setSourceEntity(100U);
    msg.setDestination(38327U);
    msg.setDestinationEntity(252U);
    msg.action = 119U;
    msg.type = 222U;
    msg.description.assign("JYGXPPANLFUAKNDCAUAHFIKSCQTLORZHSBWGAGGKJOFUAWERYRMEIYQSMDBKDIQNLVKAONFSYHNHEQLGZDONDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3900284059822243);
    msg.setSource(40713U);
    msg.setSourceEntity(15U);
    msg.setDestination(55743U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.14408090837819654;
    msg.lon = 0.8767178325498782;
    msg.depth = 130U;
    msg.speed = 0.3917489084767942;
    msg.psi = 0.2657830012561333;

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
    msg.setTimeStamp(0.6791849854075926);
    msg.setSource(52835U);
    msg.setSourceEntity(67U);
    msg.setDestination(16509U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.026415587542037766;
    msg.lon = 0.791185271016627;
    msg.depth = 54U;
    msg.speed = 0.7776930564570443;
    msg.psi = 0.6008421091329733;

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
    msg.setTimeStamp(0.44940311243847275);
    msg.setSource(5317U);
    msg.setSourceEntity(89U);
    msg.setDestination(9826U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.4385633386140644;
    msg.lon = 0.7671774355449172;
    msg.depth = 109U;
    msg.speed = 0.24957151269759126;
    msg.psi = 0.2865558823305656;

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
    msg.setTimeStamp(9.63633650069573e-05);
    msg.setSource(64800U);
    msg.setSourceEntity(242U);
    msg.setDestination(20998U);
    msg.setDestinationEntity(121U);
    msg.label.assign("RENHTJPQNKLPDGXWEERVHFMAYMONDACUPOUIQDL");
    msg.lat = 0.8643363504937868;
    msg.lon = 0.9150758069314635;
    msg.z = 0.4358292057935569;
    msg.z_units = 158U;
    msg.cog = 0.9015302451566011;
    msg.sog = 0.1809486576869095;

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
    msg.setTimeStamp(0.25197753794722366);
    msg.setSource(43497U);
    msg.setSourceEntity(16U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(46U);
    msg.label.assign("LXIBNOWVHDMSQLYMRARTWNBFEEKQSZPESOEQAHLQSJUZWJSCMGSCOCBJCIOJOFTFIBUXIVDZBNQXQDMKCMHGLTHADVQWFKURWAODKIRTZAXYMDIGEMPWTAHRBVUIRXFJVZGDOSUODZJBLGEKTCRYFHFNZNGCPHCNJLKNRJVSSWMDELLEGOXQRYVQBCUXBYRVUNKEZNYYAYLKICTJXPTUOXGNBPZAMFAWAIUIKHLPEVK");
    msg.lat = 0.7104765760899441;
    msg.lon = 0.6261331008779377;
    msg.z = 0.6194877490432774;
    msg.z_units = 35U;
    msg.cog = 0.16300014160932097;
    msg.sog = 0.6354577788274639;

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
    msg.setTimeStamp(0.9843977509649027);
    msg.setSource(6215U);
    msg.setSourceEntity(242U);
    msg.setDestination(10017U);
    msg.setDestinationEntity(84U);
    msg.label.assign("PIJPDJYTCSXAHXYGIWLLWFPAAVLQJXSNFKORWHWMHXVOJENDCMIZMYHGIVREDSANBIPCXVVTKTMAZMUNKRFPNBZMUUAUQQCGVLBSMAXXQGGKJNNOCOBWMSETVTURJQLZIGKOOMDKLWGITJDCDILGDBVTSVWYEYUCDFQEBVALJQUKKAZCJIPHSCBRXDQHEHDHLZQEFFBOFTSTEWSWNPJENZHRHZLCIPEFROYYRYUWKOBZG");
    msg.lat = 0.606737936553594;
    msg.lon = 0.23283732017621983;
    msg.z = 0.3147132452353415;
    msg.z_units = 162U;
    msg.cog = 0.9462935588394655;
    msg.sog = 0.5013494748472486;

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
    msg.setTimeStamp(0.04585153822076116);
    msg.setSource(37305U);
    msg.setSourceEntity(49U);
    msg.setDestination(64735U);
    msg.setDestinationEntity(113U);
    msg.name.assign("RABUBYPUFMPDOCDDHWNAAZXXIFBQTDOAWBMEEWXDUQXZPHBMFKLGOREKMG");
    msg.value.assign("IHAXJIKPEKINXWPQHPLYQMXRHFBUICTCPRSKPMCIDABODNUWFLBZOSWNOCWEUAAMOETLCZEXXDFXHWRSASQJNYZGWYKQNSRSIDRCEOMIHUJKMFTHFYJNVIZVQTQEIIPOMYZAACHAMVLOZGKLWLRXLXWHERTOGDPMZFUYGWBTQNKJFKUQMBXSJSPDDVJETMB");

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
    msg.setTimeStamp(0.9456415478875705);
    msg.setSource(9453U);
    msg.setSourceEntity(226U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(201U);
    msg.name.assign("LCFKXDIYLMNFXZPZUWSBRGJLMRG");
    msg.value.assign("SYYNTVDMLRGGAREWDCZQCHDYSPGJOSWTKQTOMQJVRHJKCMNBFOBKFHUNQRJDNTRUKUXFOZGTEHQNESFUNPIGHCIAWRHDEVWVKMTHHGAKCUZMQVOBBOIQQULQYWLQPCPTYIXRIRPPXFDRXAMSJFZCSFMYWGZYDVTLYUSUISOWNVPZVYWJAZGTUXWJCLBGJXBIUHL");

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
    msg.setTimeStamp(0.1788882452294892);
    msg.setSource(51416U);
    msg.setSourceEntity(145U);
    msg.setDestination(5283U);
    msg.setDestinationEntity(58U);
    msg.name.assign("PPEOSDSYRPWCODZYMVAKKODJMGTCKZAXNLCZYXFFHIGNJUCJZKXVCWENEHJAMLBSBVZFWEBHUQTKMRUVOFHSJJMHDRKRLGXXASVCFRSBTGUTVLMWEARFOTDBNWB");
    msg.value.assign("VWBYGRJKJCMJDOIMZHMCCXGIVKQRQAFEUSOTAFAIIXNIEJLQKPDCBMGKE");

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
    msg.setTimeStamp(0.41536502780077533);
    msg.setSource(53150U);
    msg.setSourceEntity(228U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(139U);
    msg.name.assign("HCXINLRQYAZNLVCSJXRWYKCNTCOEQFWGWYUAOUXXERAWVMAHIWBGTREZAJAKPXIKWCIYLJZFJYYNUXETSOVFPXPHUHSLDGUKOECO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XVVRARSWGCBNEVWMQAUOJHWFPHGYPDXBUIJNQCYRDOEDOZKFBRPAVQHWXXXIHOCYVEOHJACPTCFPTUTZOSFTKRMBRWARSWTDXFUNVZBHCFXVMJCURLKETMVETQAENYMJBJBEJAMBIYYAQMQMYLHIDVOWYWNPKXZNSXNLVIEZISQKQIDMAFSKKGUPGLNKQFGKWGFRJHTPTZROOYYJIZLZLLLKHLFBLGBCHUZGCDUIDSEGSP");
    tmp_msg_0.value.assign("GBDDFGEPPXWVCNIHXWVPFNFV");
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
    msg.setTimeStamp(0.9488932702991935);
    msg.setSource(2707U);
    msg.setSourceEntity(231U);
    msg.setDestination(36270U);
    msg.setDestinationEntity(27U);
    msg.name.assign("VHNUEIKPVWEXYKTJPOKOJPDVBYSIVRTFAOTLNHZSXAJGAJZEIJMZWASDKCRXQTOXXEBLZJNQXBVUMQFHYWDDHHKISMFEGCICGEOLPOFADGQBFGIGWRRNUNQRMNKPGKTWHQVJYSLOIAUGJFXKYDLJVNULSZPCSWZYQYPGMUUOZPJOBDEB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OWUBKGJEAQLSPQOECJMYOLHRCZMTZHNAOYXFRTGCFZBIIVQNRHAIKDHFJDDVGYKVGEMIINPKCSMUYSJPEFLRYJPDBMJOWLGCNYGWDMCSPZGIRLORAPWYXSNBQVUKGWBBJTATBUXPVZZSUZXAKUWAQZHNPCHDTFTLEEEFPBUTMPCAYQZCTXXNDFBIBSELD");
    tmp_msg_0.value.assign("GFAANWBNLJKDYOVTZTEMQRDQLHIHRCBDQLAWTEKJZRZEP");
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
    msg.setTimeStamp(0.028715363470040334);
    msg.setSource(8033U);
    msg.setSourceEntity(95U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(230U);
    msg.name.assign("COPIEJVDRJFQWBUOPKIHDQPVLZVQSANLTGWSTKTCGYBCRSVPKCRWPTCGQXCVZMKMFWYUECECJHYVIKQKLOXLVFLJHUMHGHBNKCANRQPIXWAIXAUNOATMCUYHZZDNFRBOOQJRYZBJLJMMBASDYHBVLISENUEIUBUDBPWNAXOLKFTSQSYIGZXKDZKMXNYXLPAEJSXINHZRDBAGJDEDMMGZPHQFVETRIUWWSRNTPRHYXETWTWEOGFGDMOU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XGILLQGVCWSHQRLEYJZADNRFOQPAWUDGFNHHOCTQOSGQVTMAAOEYUXMGZJECKWECLOEIJHQOSSAMWJMTYXKCJOCNDHTTGUCWYJTKIGTWYKWJQGBZUZXMFYIFXSDKVFSLCIUVAPYNZXFYIZLMBJDUJPFPS");
    tmp_msg_0.value.assign("OVGHXWDVSWTWJUMHDOOUTMERCUIDSCTFNYUEMBRJMUXJEPJEEQCXYQXXKHKZDRIZROPTXMQHOSWQSVRCHVRGTNYYGDILIAKVCFRXYKFSZLDATVSWQZLBSHTEAJAIKQFBVGXJLHCFVGIPJEPLYOGBLTPKKRABWKXSVCAGFUYIQCMZBCYNBWQBRZOHNELYLNCQOHEJFEDXIHUPNNUGVFWNYWLRUANKBPZTAJDFGMPILPJUZM");
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
    msg.setTimeStamp(0.5453121883136327);
    msg.setSource(53181U);
    msg.setSourceEntity(131U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(160U);
    msg.name.assign("XCQWAHZDQBUEPCDJGMIDNTOXPRNRQAWODKZ");
    msg.visibility.assign("UQVTRLFABDPWUVWGEMFBCJHLMCJCAEGWFSIGTNGBYAZOHWZADDYKJLGSRLVOTONESOEKVHYKABLARPMSGXOVQJCVICAZTHGURSUXBXBTXZZQOIIQFQSUQMXCUNDVAMCDJFPTTGIULPELZHVECDHKQTBPNBVKSDWFZNYSMNBNANTOYLNYIRHKIVXPMPXDWJLDNPWIPYOQSXHRGWGIKREZCEYSTQMDUXBYUIJEWFOZ");
    msg.scope.assign("IHRULAQUZVKDUMZLFKYOHPXEOFJQRWEADYOPLKITDXDJFF");

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
    msg.setTimeStamp(0.5689186154180901);
    msg.setSource(15203U);
    msg.setSourceEntity(245U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(161U);
    msg.name.assign("PZWBUUIVSYNBEX");
    msg.visibility.assign("MZGZHODOTTQPREUOQAYPKGNXLKBRZVH");
    msg.scope.assign("OAACWJZBBBJFXMAGKXQUFLXFVWRLQGBUYUNSDQEJWQFATYTCVBVCXHCRUHIFUKGOGBIFQTLWDSYPHPKVTUYPWRUIBNRVEWLUOTXC");

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
    msg.setTimeStamp(0.14729256545562153);
    msg.setSource(55846U);
    msg.setSourceEntity(85U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(112U);
    msg.name.assign("CTTSTGQQUBZZICBXJH");
    msg.visibility.assign("ADAFWMILQOEVALWSTHEGXCFYODOQMJLJTBGQIOBHNPVILPIQZVEDTVLHCTJBYRYJZRZBHFJDBNWXGUCHYRKMYRMCHOKQLXOPKBMCOMVAUYAVGIXKWYUHOIUKWCRTJBEXVUZSDYELZGPZNGTMZIRYDTMEFPNXSQENFEQKPVSCUPHFTDOQWSKHCRJHRLBMASCBOZAGDPKGWMNSSSRWQNUTKXEWKLESVTJFQXYIGWUACRINBPZ");
    msg.scope.assign("MAKDAILAHZNIMVHAGJUKUTYIUAELFCXPWPRGXKVEQCCJDFWSMHWXKBBJNHHDOSJYTVERNVPICFVBCKIXMGBJXPASLAIEZOVICVZVUIBKQHRWYWPMZLEDJGQSAQMNDMOIFFQRADCUDEZSZFTLQ");

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
    msg.setTimeStamp(0.5183240047487823);
    msg.setSource(61211U);
    msg.setSourceEntity(68U);
    msg.setDestination(43830U);
    msg.setDestinationEntity(68U);
    msg.name.assign("NYHVYRBZCTNKXYUBPATRDMBDMZYMQXJWJDYEAGNCGBFZ");

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
    msg.setTimeStamp(0.35126022847891936);
    msg.setSource(26438U);
    msg.setSourceEntity(5U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CNBSZQYXDBUC");

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
    msg.setTimeStamp(0.5121859514535615);
    msg.setSource(1609U);
    msg.setSourceEntity(73U);
    msg.setDestination(52657U);
    msg.setDestinationEntity(67U);
    msg.name.assign("TIQFALLAJLSMVWYTFQIQOFYMDYQJOZHGSHGCZHLVWSWNXQZGCMUTHAGSNMREZRVPDFDZTVCNSDLJPXZYKSJAVJDQANGORAAFR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LEEGYCGKGUHASNL");
    tmp_msg_0.value.assign("UZNZWCYIAIAOVTUBGDRGENZCANDBWPYEFWUEYVVTDULCAVTFQMQFIMYBXMRBXMIJJ");
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
    msg.setTimeStamp(0.8302004527798764);
    msg.setSource(2031U);
    msg.setSourceEntity(37U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(114U);
    msg.name.assign("JNJQLRZTOGGHPCRWDNPTEPSRPIELQFJTFOVDTMUZWJYVQDOVFAPXJNMAAHPBHXVGFGAUYFZRXWOSCCIWSRICBJXGDNHKWLKTOBVSCVZRYQMLLNRGDQBGWQQWHHXIFLBBQTDWILYACPMKQPFVBEZLUXFDZLINUWCONUAYSZUONJBYCKVEIIEMCKHGKNATCSGTKYZERWDRKYUQOEUXRMSKMHDAVIJSBF");

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
    msg.setTimeStamp(0.9884444332825244);
    msg.setSource(46943U);
    msg.setSourceEntity(49U);
    msg.setDestination(17622U);
    msg.setDestinationEntity(104U);
    msg.name.assign("DMSVLNUXPGFVKRVZQOBNGVQYEMUPUILJUVCZJHVCYCKCUPOCYPIONBSTKQIUMDJHSDEQGFGPRW");

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
    msg.setTimeStamp(0.990997463793192);
    msg.setSource(7945U);
    msg.setSourceEntity(57U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(128U);
    msg.name.assign("EDIOZRYAXJEXGJXOKALUTKTZAUHGNEDVQQOPPTVALZJIVVRCECQFPEWLIJNNGRHQRUYKKHFV");

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
    msg.setTimeStamp(0.27820530281068956);
    msg.setSource(43340U);
    msg.setSourceEntity(109U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(50U);
    msg.timeout = 1912291381U;

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
    msg.setTimeStamp(0.527276334680835);
    msg.setSource(38828U);
    msg.setSourceEntity(10U);
    msg.setDestination(34663U);
    msg.setDestinationEntity(116U);
    msg.timeout = 1028779258U;

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
    msg.setTimeStamp(0.6324318677078804);
    msg.setSource(34404U);
    msg.setSourceEntity(96U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(81U);
    msg.timeout = 3371718401U;

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
    msg.setTimeStamp(0.19526634157955292);
    msg.setSource(11725U);
    msg.setSourceEntity(191U);
    msg.setDestination(48091U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3198339492U;

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
    msg.setTimeStamp(0.6973972519335543);
    msg.setSource(49188U);
    msg.setSourceEntity(111U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1931462079U;

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
    msg.setTimeStamp(0.6763358161281174);
    msg.setSource(19356U);
    msg.setSourceEntity(186U);
    msg.setDestination(39025U);
    msg.setDestinationEntity(104U);
    msg.sessid = 1798305033U;

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
    msg.setTimeStamp(0.16542079204995885);
    msg.setSource(48627U);
    msg.setSourceEntity(215U);
    msg.setDestination(60080U);
    msg.setDestinationEntity(158U);
    msg.sessid = 1847161277U;
    msg.messages.assign("SIEPKTFYQIAPJJOSDTFCJROHMRGEBZ");

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
    msg.setTimeStamp(0.7847799277860648);
    msg.setSource(24173U);
    msg.setSourceEntity(92U);
    msg.setDestination(12296U);
    msg.setDestinationEntity(56U);
    msg.sessid = 2619072U;
    msg.messages.assign("SHRGNSNGOPOIMUBOYOFTKOFNQDBVGFPYOIJFCKPZYOWATSJQUDMBDRJVTGVXHLYQPEXAQJSYJMKULALMXGLARUTEUJGSLBZFPRAPDSPWZMQSMLMWTVR");

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
    msg.setTimeStamp(0.23073585411043696);
    msg.setSource(4604U);
    msg.setSourceEntity(238U);
    msg.setDestination(58126U);
    msg.setDestinationEntity(66U);
    msg.sessid = 4203960567U;
    msg.messages.assign("JCPVTCVRJHRXYRMGFLQKDLRWFQTFJKWQ");

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
    msg.setTimeStamp(0.6331644237539045);
    msg.setSource(36486U);
    msg.setSourceEntity(227U);
    msg.setDestination(37627U);
    msg.setDestinationEntity(56U);
    msg.sessid = 1749137380U;

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
    msg.setTimeStamp(0.840535389944124);
    msg.setSource(45219U);
    msg.setSourceEntity(43U);
    msg.setDestination(7366U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2285406497U;

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
    msg.setTimeStamp(0.07359239380800409);
    msg.setSource(63567U);
    msg.setSourceEntity(202U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1725814822U;

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
    msg.setTimeStamp(0.7622176019629271);
    msg.setSource(2499U);
    msg.setSourceEntity(201U);
    msg.setDestination(9679U);
    msg.setDestinationEntity(140U);
    msg.sessid = 3878918131U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.8100608097832246);
    msg.setSource(45582U);
    msg.setSourceEntity(49U);
    msg.setDestination(4864U);
    msg.setDestinationEntity(130U);
    msg.sessid = 1215659611U;
    msg.status = 188U;

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
    msg.setTimeStamp(0.043109648422336555);
    msg.setSource(29856U);
    msg.setSourceEntity(59U);
    msg.setDestination(17215U);
    msg.setDestinationEntity(69U);
    msg.sessid = 1723488106U;
    msg.status = 248U;

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
    msg.setTimeStamp(0.6734197088913635);
    msg.setSource(11315U);
    msg.setSourceEntity(55U);
    msg.setDestination(28387U);
    msg.setDestinationEntity(116U);
    msg.name.assign("JBKYUPRDIIPSEBOFMWMHRQFCMHAEORLQXDTQKCRLNFHSPIHJFPOPUFURCYHTYXGSCKVHVLPDITYGRAFDVUVWXNTBTKATNJGMQXQQMHRZVVACGNIFJEHTYWUNSIKDVKJXZSLBAOBWGUEWYENWECBKFKSPOIKZMMWQXDRKNOVFNTQGIEAXOYLJDGELUJOUSJECJCLZAMIZYWNSPZGYQBXOUVISQMCT");

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
    msg.setTimeStamp(0.7532339359684418);
    msg.setSource(27258U);
    msg.setSourceEntity(33U);
    msg.setDestination(18598U);
    msg.setDestinationEntity(73U);
    msg.name.assign("DTIVQLCURZSTYKKPMRDORBNKZYFINKWLABBXWHYUCAS");

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
    msg.setTimeStamp(0.0885030538689272);
    msg.setSource(2861U);
    msg.setSourceEntity(172U);
    msg.setDestination(8936U);
    msg.setDestinationEntity(52U);
    msg.name.assign("TFJTNMGOGCWEVCIIYZZVMWFUIRAJUQVEHKULYSACELOAVYKPYVTJOKUKLXZSRASJCXQPBSOMLGVJBTLDORRMBXFGTBDJNXCDDZRQHTRHBFBZQAPKFAHKFDPXGJLHQJSQYZCKXMIWXAMWPYQO");

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
    msg.setTimeStamp(0.2840650679514828);
    msg.setSource(43466U);
    msg.setSourceEntity(71U);
    msg.setDestination(3078U);
    msg.setDestinationEntity(130U);
    msg.name.assign("XYHLSXGJAWULNJRIGXQWTEBIAJTDQCNJATXZPUUTCCJDIKWWORJEHIGVUUOUGILPZDHPPHXPUIOSWKTONEGOKQBYFZGOGHGKBFREBMSYWVLYQIGGFDAMMMXRAUEBTDCVFMPBFLNKSDHMOQTXVPODZHVARQKNLLKIQRCERTWAYVOWBMDCZMIQSTRVWYOSFFCSNMUZAJVEQVIZSYJDFNTFPSRXPDLRLYBQWKZMFJZNCNYYNCZAEHXHLUEKCJAP");

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
    msg.setTimeStamp(0.0362328112187279);
    msg.setSource(46545U);
    msg.setSourceEntity(241U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(168U);
    msg.name.assign("WPINUAXMLDFPRQRIGJHAFZWRQWLBDKDMAWCTXSZBNJYVSEZICYEITFSWAHJCMVEDOZCECKSRFNOOEYUKUXTLWVBPFIOEWYZLAHCOTQDHNL");

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
    msg.setTimeStamp(0.21826458969542029);
    msg.setSource(61352U);
    msg.setSourceEntity(198U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BVOXFGKEHHBCLWSZNGRFTEGJCLZKBKWLFXEDSMKQORSHJPLGJTXHKKQSQBMEOHQVGMICUUOKIKNUHWWXZNJOWAGACCAJLKZTUPBVXAREFUXVIHSCOIOCZQELANNTPULP");

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
    msg.setTimeStamp(0.8329318329203241);
    msg.setSource(24520U);
    msg.setSourceEntity(93U);
    msg.setDestination(19623U);
    msg.setDestinationEntity(142U);
    msg.type = 244U;
    msg.error.assign("NQXMJQIDBWXARNUJTSCGGSAVZMFSLOOEJOYTQPLBAKOJXGQOCMKXVLQBTESTRFXAPMMWCIBHREDAYBOROPFIFLTXCPARQTHVGKVNDHYKRIIRJLUGSPXVIZAJWHKXNSZFQZCICZTNADBNDCWMCMMZOHKLQKYSBQWYWUVSKWUERACWALVZFHFDVEBPKEEHKRZUGRJIDNHUDOYZCYNDHTXSSPVFGFBETNIDZB");

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
    msg.setTimeStamp(0.541131607715871);
    msg.setSource(38152U);
    msg.setSourceEntity(94U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(19U);
    msg.type = 59U;
    msg.error.assign("PVMDKFTAONDTGRIFZTLWIFYZHSLENQGHFAVFSLHJKHJKUBBPSWCIOXGELNQPXUNTRECHSDYNDGRIYJZIABVWITL");

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
    msg.setTimeStamp(0.3378991725264562);
    msg.setSource(34752U);
    msg.setSourceEntity(82U);
    msg.setDestination(10487U);
    msg.setDestinationEntity(136U);
    msg.type = 173U;
    msg.error.assign("YAICDBLSONHIFPUSDMRXPQWVSXYKVIEOXUJSNBFJKVPMQILYUYFBJOEWXTRTSGGFLMGKJPHHVZIEMOMKHIOUGSWQNDEARSEDGWCTALNNMLNIJYXDFVKWLCRQREKBOBC");

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
    msg.setTimeStamp(0.21432159222543978);
    msg.setSource(43366U);
    msg.setSourceEntity(101U);
    msg.setDestination(51681U);
    msg.setDestinationEntity(183U);
    msg.seq = 63480U;
    msg.sys_dst.assign("IDMOJITBCGZAQGMLYEHHKWVPCGWCBDKXYGNVOSMFZTRPFNZSPBKBBPEJCCWTKABMYLUTAKDPYADRQSIFZWHEATVSBFAQTRUEUPLZPGRQVJDSFRQPRETWOUMEVWWKOD");
    msg.flags = 107U;
    const signed char tmp_msg_0[] = {-121, -7, 109, 89, -103, 65, 8, -6, -125, 26, -69, 78, 57, 36, -88, 3, 68, -42, 49, -8, -16, 2, 43, 5, -15, 120, 28, -82, -3, -115, -23, -117, 69, 44, 41, 100, -45, -126, 24, 102, -72, 75, -16, -109, -55, 100, -95, 86, 120, -126, -116, 108, 71, -123, 98, 65, 23, -39, 15, -118, -44, 64, -127, -8, 6, -76, 118, 13, 101, 43, -37, -106, 65, -58, -115, -126, -121, -123, -99, -56, -128, -123, -72, 34, -118, -100, 123, -11, 33, -26, 15, -13, 111, -109, 47, -121, -21, -115, 13, 62, -44, 5, -94, 114, -50, -71, 91, -66, 6, -58, 53, -57, 74, -15, -72, -68, 112, 82, -17, -14, 62, -23, -63, 24, 104, 101, -116, -65, 75, 74, 83, -128, -10, 80, -101, -36, -122, 36, 94, -77, 8, 40, -19, -15, 99, -23, 30, -68, 119, -37, 67, -82, 109, -39, 35, -75, 17, -95, 34, 74, -97, 66, 9, 108, -3, -88, -100, -71, -126, -3, -64, 40, 86, 68, 6, 124, -109, -102, -45, 123, -9, 72, 102, 107, -77, -94};
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
    msg.setTimeStamp(0.920437502447183);
    msg.setSource(40080U);
    msg.setSourceEntity(181U);
    msg.setDestination(51945U);
    msg.setDestinationEntity(150U);
    msg.seq = 45628U;
    msg.sys_dst.assign("CCBUMYCNSPHXURPBZLISLNERWTKFNDRILUFSJHCABUOGFLNUZXHGVRYSDOAPDJMZIIBNIPEHTGXOIEGLHSYQTMAWQBDAGALPUPRKNZWTYWYYBSJXEMDJDANXIWFXVHQOKLNQZGOLGRJSZVCVPOZRJWVTPBYCPVZYWMUFGTBI");
    msg.flags = 57U;
    const signed char tmp_msg_0[] = {0, -107, -83, 10, -41, 3, 85, 5, -57, 101, 70, 87, -49, 25, -31, 81, -128, 100, 101, 24, 20, 68, 0, -67, 50, -36, -34, -86, 104, -9, -113, -125, -108, 89, 17, 16, 69, 75, 107, 125, -77, -36, -76, -65, -13, 19, -8, 21, -87, -49, -115, 90, 38, 104, 53, -89, 81, 78, 17, 126, 86, 63, -102, -94, -69, -22, 55, 10, -106, -59, 12, 111, -121, -45, -45, -94, -80, -128, -45, 54, 55, -63, -88, -31, -15, 48, -41, -117, -1, -107, 97, 88, -79, 29, -88, 115, 123, 120, 119, -60, 14, 92, 62, -44, -125, -95, -15, -110, -122, 18, -48, 53, 124, -115, -62, 15, -21, 99};
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
    msg.setTimeStamp(0.3037133310086422);
    msg.setSource(47119U);
    msg.setSourceEntity(39U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(82U);
    msg.seq = 11608U;
    msg.sys_dst.assign("MLJSYRFBPGEMNVVPILMDUHEZDCCVYYDHENOZADQSVOFSED");
    msg.flags = 233U;
    const signed char tmp_msg_0[] = {-55, 82, 62, -20, -123, 101, -124, -58, 5, -118, -125, -120, -70, -90, 104, 113, -13, -94, -25, 25, 56, 46, 36, -51, -76, -46, -100, 2, 69, 5, 46, 74, 60, 52, -60, -69, 50, 55, 1, 27, -40, 68, 103, -90, -27, 22, 24, 4, -77, -28, -80, 37, 8, -114, -5, 85, -54, 52, 92, -96, 117, 57, 3, 121, -80, 67, 4, -9, 13, 89, -81, -41, 63, 116, 63, -44, 42, -15, -44, -104, -70, 23, 87, 121, 120, -42, -7, 42, 80, -64, 101, 88, -92, -82, -31, -119, 45, -6, -67, -100, 31, 118, -17, -16, -58, -5, 53, -1, 7, -117, -124, 64, 99, -124, 101, 106, -66, -126, 111, -78, -56, 65, 49, -52, -52, 58, -122, -67, -31, 112, 20, 46, -43, -113, -62, -92, 58, 67, 125, 82, 116, 62, 39, -48, 74, 52, 6, 53, 77, -79, 29, 87, 88, -53, -127, 15, 109, 91, 30, -87, 107, 28, -2, 105, 28, 21, -82, -104, 25, -62};
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
    msg.setTimeStamp(0.8375355381193802);
    msg.setSource(65353U);
    msg.setSourceEntity(97U);
    msg.setDestination(51278U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("QQGEWDGNIRWXWYFZIWWXGGRFNHWEMRTSFCPGXOIKDOVNXHOJEXFTZWYZCSSC");
    msg.sys_dst.assign("DATDIUQEVQGBVPWJNCBYLHVLKESJLZHPHFZLOSLBBTRRKXZNTFGOIXSMMCBJDWUQHPXWGEJBXSQLCNRFZTBGDCUONHRYFFEMZTZYEPRRGZINYJUPWG");
    msg.flags = 88U;
    const signed char tmp_msg_0[] = {-108, -90, 73, -109, -38, -17, -80, -15, -95, 10, -90, 3, 15, 5, -59, 54, -106, -103, -43, 84, 65, 39, 63, 70, 41, 68, -61, 12, 24, 106, -107, 20, 64, -12, -75, -30, -20, -40, 77, -3, -53, 123, 56, -107, -42, -110, -114, -118, 67, -116, -18, -55, 106, -6, 124, 116, -79, -21, -59, -17, -112, -75, 63, -63, -115, 13, 48, 22, -42, 5, 106, -109, -87, 82, -101, -42, 95, -63, 12, 18, -79, 103, -40, -84, -123, 34, -93, 45, -19, 102, -82, 98, 23, -17, 125, 7, -27, -80, -68, -23, -30, -12, 71, 0};
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
    msg.setTimeStamp(0.07076809343992863);
    msg.setSource(5254U);
    msg.setSourceEntity(35U);
    msg.setDestination(1731U);
    msg.setDestinationEntity(133U);
    msg.sys_src.assign("TURWRQLKRWKKRCWSYBVNHIUMGMGGWBEQBBOPQJIPDOMZKNNHDEUGTNEMYCFBDXQXVSJTNZOUSAYSFM");
    msg.sys_dst.assign("MHQXKEGFQONEKBURQLWSCBXLXSEPHZYFIGVJTMOUUBXTWVKARLVOFEHBPDXSMSDZPEXNJFUYZHW");
    msg.flags = 137U;
    const signed char tmp_msg_0[] = {-112, -108, 61, -2, 24, -28, -53, 91, -68, 33, 26, 51, -50, 81, 66, 63, 59, -85, 0, 116, 54, 106, 32, -106, 58, -109, 121, -26, -31, -67, 23, 48, -21, -40, -97, -96, 2, -122, -80, 41, -92, -51, -90, -17, -53, -25, -14, 34, -127, -17, -39, -67, 47, -124, 1, 123, -42, -67, -104, -27, -100, -94, -45, 68, 26, 45, -74, -30, -40, -121, 67, -122, -49, 39, 21, 82, -97, 13, -104, -29, 55, -20, 46, -87, 42, -53, -27, 65, -90, -128, 90, -80, 60, 109, -6, 105, 107, -97, -109, -88, -105, -40, 40, 3, -119, 82, -89, -23, -42, -45, 9, 70, -41, 35, -119, 116, -77, 29, -40, 65, 112, -11, 48, -57, -79, 81, 36, 17, -20, -55, -1, 93, 74, 115, 79, -116, -48, -40, -8, 110, 19, 93, 79, 82, 111, 16, 65, 70, -31, 75, 90, -78, 27, 80, -16, 124, 54, -10, 18, -44, 79, -64, -126, -42, -109, -6, -33, -56, 77, 85, -15, -127, -119, 92, -7, 56};
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
    msg.setTimeStamp(0.3872689399428525);
    msg.setSource(22799U);
    msg.setSourceEntity(211U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(63U);
    msg.sys_src.assign("SUZZTWCFNBWLTHBEVXIR");
    msg.sys_dst.assign("SKJZCWLRMDUHPBKKZQHWNXCIWPFJEAWUGKBHBDKWTPMGCJGLIUVNXGQALMYEWNAIBYGYGPUKSFZYZXFKOVWSKYCLCLELQQOXSSVZISMWLCXQBTKNOFYUQPFNEIJKAGPTBIOMHJOXEITHRTYZUARDVUPBXXVZATSDMVCMECLJJBMVDIAFTFOWOALCJJZPEIZNDBHDSWZUGCBLYUOOHQJRFUSAQDVIRYHSOXAMERQPNTVFRE");
    msg.flags = 117U;
    const signed char tmp_msg_0[] = {15, 4, 38, -98, -113, -86, -92, -80, 82, 74, -54, 76, -119, -27, 119, 67, 37, 102, 89, 21, -81, 13, 34, 123, -41, -85, 92, 116, -94, -54, -88, 124, 56, -52, 0, 26, -97, 69, -91, -15, 111, 41, 44, -65, -106, -95, 65, -71, -63, 65, 67, 29, 24, 108, 103, -23, -94, -110, -78, 36, -58, 78, -92, 3, -25, -74, 113, -36, -81, -11, -76, 47, -70, 73, -8, 34, 9, 68, 110, 123, 96, 117, -4, 2, -50, 117, -87, -87, 98, -21, 83, 104};
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
    msg.setTimeStamp(0.20137548677231054);
    msg.setSource(15237U);
    msg.setSourceEntity(137U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(30U);
    msg.seq = 10209U;
    msg.value = 201U;
    msg.error.assign("OVRSJVDHHOYMQVRYXQNNDGAPPGBSKPDYNYHGPJZQUNREGIGMAZIDUETGCJTVGKMCZFLFFIKHLMFCSVVCCRUWEPHMBKFUJSOBBNOQWAKYSRZTFCWXAPMDHJCOPVRFJNXZGRWHWADKAZTNLLUMPZQTOELJEWLKHFTKNBOWZPYVFBRBDCQJURXQWEBHXZQAXHUXEAULISVNYTQSRASXYSKEDPXFMCEEYILBVXMUJNYAOWLTI");

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
    msg.setTimeStamp(0.04304484126116992);
    msg.setSource(35779U);
    msg.setSourceEntity(148U);
    msg.setDestination(59069U);
    msg.setDestinationEntity(181U);
    msg.seq = 6757U;
    msg.value = 240U;
    msg.error.assign("LGDAPDUDIHHRQWKSYMKTOGSBKUMYWIFOUNPURVJSSWTBDJGIWCXDRSRNNJQAZLUIIRQWKABZDOKXMJEACTFNNLZBQZPVPGRLOVOGJLQSCEVMZUYACVJAXNUOYDIYTIXPQKOBCQCDVSMEDBHVOBPAHXSGEACFCVTJYGEQNXMTVRYGYKHMSKBZVHHILEWJZIPFMJMPFMTLUHDQWTKRCNA");

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
    msg.setTimeStamp(0.3920428153765856);
    msg.setSource(18576U);
    msg.setSourceEntity(133U);
    msg.setDestination(13053U);
    msg.setDestinationEntity(18U);
    msg.seq = 32116U;
    msg.value = 251U;
    msg.error.assign("JUNXSRHEVCILSMEFLPANFGDDMQWOFUOBBYIXEUMLKXTBDGIAAZMVJWSGLTWTSLQUMZJQRTACZBSHEYDBPKCHYFZYRKSHFNDCCACDERVXHMIETDGEKPWTTNIJXZBOPRTYOIRCNQHUZXKBYQEMFYQMJKALUIUBXPPVOVQGJHQUMJFRGFSDNVWCAIFGYOLLKTKWAWPJESCQPZVERAZNWBCPUMHXPLAZBXNVWUXHSDSYVZOOLROTQHNVGDGIWI");

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
    msg.setTimeStamp(0.2204145270010469);
    msg.setSource(50936U);
    msg.setSourceEntity(151U);
    msg.setDestination(6512U);
    msg.setDestinationEntity(251U);
    msg.seq = 10512U;
    msg.sys.assign("PZOTXIGHYRGVXQUHHMFYROEHIPTPSAVMFBTYAHDWGZJQRNWXWOREDYKTTMOMWTNGMGWESFVFMSYROQSLNBQQDKEBOXCXXUCJAEYRIWCWQUIJCTXIVHUBPAELZAINLGYSEBYWPZPHRARGLLITFFGLNSJMDKTBKFDAJDVDSMIBQOOJPUUQBZSKDNCUAHYHCNDAZVCONPEKBUCJJNVVZJMISZZVKLOEJXRPALUDGQQECIKPZFKRTXUWSLKBMXVN");
    msg.value = 0.17264129084387236;

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
    msg.setTimeStamp(0.9473055643538907);
    msg.setSource(40104U);
    msg.setSourceEntity(158U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(86U);
    msg.seq = 22411U;
    msg.sys.assign("GSQNDVJYCAFUKWNQDLHREZAAYSGVXTQGR");
    msg.value = 0.003317700056212902;

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
    msg.setTimeStamp(0.12771768260526228);
    msg.setSource(46463U);
    msg.setSourceEntity(47U);
    msg.setDestination(28981U);
    msg.setDestinationEntity(64U);
    msg.seq = 60153U;
    msg.sys.assign("EHTWZZDKRAACFKTEZIUUMAPYVEN");
    msg.value = 0.6450052165724415;

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
    msg.setTimeStamp(0.6766698089289582);
    msg.setSource(41858U);
    msg.setSourceEntity(150U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(246U);
    msg.seq = 2968U;
    msg.sys_dst.assign("RCMHAHODCPISXEWEBJSABVQCXYEVKHQXFCFHBLVRENDS");
    msg.timeout = 0.21294522596126253;

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
    msg.setTimeStamp(0.4065394003190058);
    msg.setSource(13828U);
    msg.setSourceEntity(111U);
    msg.setDestination(29830U);
    msg.setDestinationEntity(67U);
    msg.seq = 11453U;
    msg.sys_dst.assign("TXQJDJPSORCBZVYKWOQWMZSHNNZHGKOBPCSNUTQAWVEFVEPBTEGVMGCEFOYKXOHWYXDIIMRZXXMOLJXYLRUFPQSUNZSUTHNHUKWUQMCIDFDEWAMWCXLFQCSGQIBGFJYLITPILOPWBSEKYKAXVRXZYCDNNHJRASPBEIGFKEKWUGHKJCZDZYTIMPOFHAUYOQTAPFB");
    msg.timeout = 0.649514162592048;

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
    msg.setTimeStamp(0.693208352655503);
    msg.setSource(32750U);
    msg.setSourceEntity(182U);
    msg.setDestination(38269U);
    msg.setDestinationEntity(26U);
    msg.seq = 36543U;
    msg.sys_dst.assign("GSZZJLWZGYTQHRWCDKRMHXECSJBEPNGVFVZLNANLADDKQYTYICQTUVMQHRZLSAEARPWXSIUMERHNDMUNOTQKLGZAMRXDTOPLWEF");
    msg.timeout = 0.6200666678777963;

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
    msg.setTimeStamp(0.002022777553614241);
    msg.setSource(25480U);
    msg.setSourceEntity(204U);
    msg.setDestination(24554U);
    msg.setDestinationEntity(81U);
    msg.action = 11U;
    msg.longain = 0.7784371974287247;
    msg.latgain = 0.01843723381183704;
    msg.bondthick = 3946284757U;
    msg.leadgain = 0.30659691665512545;
    msg.deconflgain = 0.39378573141828743;

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
    msg.setTimeStamp(0.19434196249143676);
    msg.setSource(41806U);
    msg.setSourceEntity(112U);
    msg.setDestination(43886U);
    msg.setDestinationEntity(58U);
    msg.action = 147U;
    msg.longain = 0.32081469758699044;
    msg.latgain = 0.9741406044325055;
    msg.bondthick = 2573494817U;
    msg.leadgain = 0.4430914046908848;
    msg.deconflgain = 0.8867989569007705;

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
    msg.setTimeStamp(0.5629263238026613);
    msg.setSource(64942U);
    msg.setSourceEntity(152U);
    msg.setDestination(6535U);
    msg.setDestinationEntity(57U);
    msg.action = 233U;
    msg.longain = 0.6927364045665314;
    msg.latgain = 0.07089706371262983;
    msg.bondthick = 2564996763U;
    msg.leadgain = 0.14199727849217436;
    msg.deconflgain = 0.45500618589659625;

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
    msg.setTimeStamp(0.17494336947190958);
    msg.setSource(9710U);
    msg.setSourceEntity(84U);
    msg.setDestination(33557U);
    msg.setDestinationEntity(154U);
    msg.err_mean = 0.8782378254525494;
    msg.dist_min_abs = 0.07029030909657752;
    msg.dist_min_mean = 0.9915948387575757;

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
    msg.setTimeStamp(0.8818112228533483);
    msg.setSource(17910U);
    msg.setSourceEntity(250U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(6U);
    msg.err_mean = 0.02071951558846863;
    msg.dist_min_abs = 0.9701734156492258;
    msg.dist_min_mean = 0.5537188564314807;

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
    msg.setTimeStamp(0.9094008506482927);
    msg.setSource(44425U);
    msg.setSourceEntity(18U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(125U);
    msg.err_mean = 0.3591678415984857;
    msg.dist_min_abs = 0.08872046257877875;
    msg.dist_min_mean = 0.7662730108126349;

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
    msg.setTimeStamp(0.48496626322751246);
    msg.setSource(28918U);
    msg.setSourceEntity(199U);
    msg.setDestination(14482U);
    msg.setDestinationEntity(119U);
    msg.action = 221U;
    msg.lon_gain = 0.872235105602397;
    msg.lat_gain = 0.7750426562151007;
    msg.bond_thick = 0.3908913298377026;
    msg.lead_gain = 0.39423238135127636;
    msg.deconfl_gain = 0.833708248068304;
    msg.accel_switch_gain = 0.3242442734452907;
    msg.safe_dist = 0.6259912244492795;
    msg.deconflict_offset = 0.7651631707612023;
    msg.accel_safe_margin = 0.4084446794231428;
    msg.accel_lim_x = 0.432092080441559;

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
    msg.setTimeStamp(0.5635929545897475);
    msg.setSource(51889U);
    msg.setSourceEntity(75U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(45U);
    msg.action = 142U;
    msg.lon_gain = 0.2511953951651379;
    msg.lat_gain = 0.8542323277831276;
    msg.bond_thick = 0.0481752690767171;
    msg.lead_gain = 0.6906405710830129;
    msg.deconfl_gain = 0.25464218026545116;
    msg.accel_switch_gain = 0.6312895595107074;
    msg.safe_dist = 0.17573026587908536;
    msg.deconflict_offset = 0.1725283760523273;
    msg.accel_safe_margin = 0.22570696172527127;
    msg.accel_lim_x = 0.9573593180856371;

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
    msg.setTimeStamp(0.38125447921571354);
    msg.setSource(16370U);
    msg.setSourceEntity(87U);
    msg.setDestination(53730U);
    msg.setDestinationEntity(193U);
    msg.action = 103U;
    msg.lon_gain = 0.34493296060268064;
    msg.lat_gain = 0.44129757623319665;
    msg.bond_thick = 0.21681047635803774;
    msg.lead_gain = 0.2680081230190987;
    msg.deconfl_gain = 0.36227063843468854;
    msg.accel_switch_gain = 0.44761231335698304;
    msg.safe_dist = 0.9893730006336889;
    msg.deconflict_offset = 0.8087065058209433;
    msg.accel_safe_margin = 0.8861997588028423;
    msg.accel_lim_x = 0.9310248408547036;

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
    msg.setTimeStamp(0.6056706816399239);
    msg.setSource(17015U);
    msg.setSourceEntity(141U);
    msg.setDestination(32510U);
    msg.setDestinationEntity(198U);
    msg.type = 2U;
    msg.op = 71U;
    msg.err_mean = 0.7555369816680859;
    msg.dist_min_abs = 0.30023086201103644;
    msg.dist_min_mean = 0.2843139168287645;
    msg.roll_rate_mean = 0.5023749263716777;
    msg.time = 0.0039354937247111366;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.009688602994331497;
    tmp_msg_0.lat_gain = 0.25558176340614924;
    tmp_msg_0.bond_thick = 0.5781059746551193;
    tmp_msg_0.lead_gain = 0.12993050014719698;
    tmp_msg_0.deconfl_gain = 0.5657158729986275;
    tmp_msg_0.accel_switch_gain = 0.880896267743135;
    tmp_msg_0.safe_dist = 0.17304763139686874;
    tmp_msg_0.deconflict_offset = 0.6245000359160199;
    tmp_msg_0.accel_safe_margin = 0.3730182547239723;
    tmp_msg_0.accel_lim_x = 0.8142371606181013;
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
    msg.setTimeStamp(0.23522983894988736);
    msg.setSource(32096U);
    msg.setSourceEntity(170U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(77U);
    msg.type = 58U;
    msg.op = 10U;
    msg.err_mean = 2.11588924475814e-05;
    msg.dist_min_abs = 0.009302165474925683;
    msg.dist_min_mean = 0.07227949899530384;
    msg.roll_rate_mean = 0.9882753081022941;
    msg.time = 0.6189230457326679;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 89U;
    tmp_msg_0.lon_gain = 0.16279103696252717;
    tmp_msg_0.lat_gain = 0.8286428599539406;
    tmp_msg_0.bond_thick = 0.6950996357099879;
    tmp_msg_0.lead_gain = 0.44837792019817235;
    tmp_msg_0.deconfl_gain = 0.8057899467885788;
    tmp_msg_0.accel_switch_gain = 0.08001379171857126;
    tmp_msg_0.safe_dist = 0.14324926173397612;
    tmp_msg_0.deconflict_offset = 0.3339793977740467;
    tmp_msg_0.accel_safe_margin = 0.8879300721132101;
    tmp_msg_0.accel_lim_x = 0.41119113322717704;
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
    msg.setTimeStamp(0.030974001550515218);
    msg.setSource(32348U);
    msg.setSourceEntity(197U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(124U);
    msg.type = 76U;
    msg.op = 52U;
    msg.err_mean = 0.18162654337095718;
    msg.dist_min_abs = 0.2909840920307064;
    msg.dist_min_mean = 0.6803810120418349;
    msg.roll_rate_mean = 0.4400421832643603;
    msg.time = 0.5568609878061933;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 26U;
    tmp_msg_0.lon_gain = 0.02128651992252595;
    tmp_msg_0.lat_gain = 0.26594819105949596;
    tmp_msg_0.bond_thick = 0.46400447632994746;
    tmp_msg_0.lead_gain = 0.7395983576942576;
    tmp_msg_0.deconfl_gain = 0.660844157034092;
    tmp_msg_0.accel_switch_gain = 0.8951322441424412;
    tmp_msg_0.safe_dist = 0.9721398295969449;
    tmp_msg_0.deconflict_offset = 0.6872035404636446;
    tmp_msg_0.accel_safe_margin = 0.5071916220534916;
    tmp_msg_0.accel_lim_x = 0.6370333166754538;
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
    msg.setTimeStamp(0.8237163263661859);
    msg.setSource(9841U);
    msg.setSourceEntity(134U);
    msg.setDestination(222U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.9584121582938795;
    msg.lon = 0.8460304524676164;
    msg.eta = 3800808636U;
    msg.duration = 61606U;

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
    msg.setTimeStamp(0.5002514301659511);
    msg.setSource(44392U);
    msg.setSourceEntity(19U);
    msg.setDestination(38906U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.43904344498396397;
    msg.lon = 0.9947050590804347;
    msg.eta = 46602921U;
    msg.duration = 19830U;

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
    msg.setTimeStamp(0.8001867020358154);
    msg.setSource(25731U);
    msg.setSourceEntity(71U);
    msg.setDestination(14992U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.7655328897655689;
    msg.lon = 0.3492412132151621;
    msg.eta = 1317330533U;
    msg.duration = 52721U;

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
    msg.setTimeStamp(0.013710286047874831);
    msg.setSource(13148U);
    msg.setSourceEntity(180U);
    msg.setDestination(38696U);
    msg.setDestinationEntity(151U);
    msg.plan_id = 17492U;

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
    msg.setTimeStamp(0.19678675402461476);
    msg.setSource(3856U);
    msg.setSourceEntity(247U);
    msg.setDestination(48702U);
    msg.setDestinationEntity(151U);
    msg.plan_id = 43936U;

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
    msg.setTimeStamp(0.5351811200759653);
    msg.setSource(31096U);
    msg.setSourceEntity(15U);
    msg.setDestination(22791U);
    msg.setDestinationEntity(189U);
    msg.plan_id = 19443U;

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
    msg.setTimeStamp(0.041194651980164476);
    msg.setSource(4178U);
    msg.setSourceEntity(63U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(167U);
    msg.type = 84U;
    msg.command = 81U;
    msg.settings.assign("IDUHAUOYLORFUMDOEYGDVSXATXAYDWXFFRRZYLLIAVZIIKCLCHOPZCNJMRBMGPNWLXMUUTQCZYUBZUQEYFPRJTTBKKIMEQXXDAWQLDQYCWONEWKSUVQQXLSSHOCBKZMMHGGJABKHOWKXTVVYEBFRTPBAGUPZPONQNEUVQLRFPEWJEBSCMXPBSSNZFNYISKVHSTJVJINBGOTLCDDHJIJCNEFJFIGFTVMPWEKAPRZY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5812U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FIMIJZBDABLEKQUQCTNUVNNUMNPGYNKYUWLFJAGCGBLTESDABCVUNCHTIRGISJXWMADOGPAUMPAXTFISPFCAHFHZOYWIDKBHRLQWFIYUKMSVXOXCXIEZSOGHZBFLGUZNLMDRAZCIHMWVSOBRQRGWJRQBCYOZFADYVYFEMQLZPOTTTOKQXLSZKCRDYHWXKPODYUESSVVCPNHTRPVQNXWXXJRQLPEERIKY");

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
    msg.setTimeStamp(0.14519647961331794);
    msg.setSource(51564U);
    msg.setSourceEntity(40U);
    msg.setDestination(51612U);
    msg.setDestinationEntity(41U);
    msg.type = 79U;
    msg.command = 229U;
    msg.settings.assign("PLURMHZYJAFYPJRKDKOAKUEKLWVYYVSWIWEBKWDYUTHAJXAPICRFBSBOTXRZTWEJEILKOXDJZMVXKPQEKLPCNNNCIUCIXDWRQZJRCUPIAIQWQGYUVCABXHVYMSQEMMIEGUNEXQJSGFLTXZNVHGCVSGDALMQHDZBTNDZZCRMILVFOGSGBLKVHDMOESLUVMPRTXOGCTJPYHFWJHKONTZSENYLFUFAGFSCQBSROQMDBNTFXPFRWOGDTPHAZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 44380U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KEVEQGBITMRUIONUXZQLXOS");

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
    msg.setTimeStamp(0.7898969162524998);
    msg.setSource(60680U);
    msg.setSourceEntity(70U);
    msg.setDestination(16804U);
    msg.setDestinationEntity(204U);
    msg.type = 136U;
    msg.command = 43U;
    msg.settings.assign("JASWLGOVJVFPFVGYKEWRICPZJVLQVRHKDTQKFYGGSYEACTWGIHQSOMCGKLAWAXBDFZUPYHODOIDTDJUZFUZHMPYXFBDOADJBBOMNQNRJLITHXCNEWUBJIPKLQCXQVTRIJSBTVMRNTNZUTEAPVSALHZSELIMCBRBKXNNEZIXICWOGHNRUMCFGHZENHZEWPQGQLPQPDSNHDASLWMSYV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16598U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QETPVLJGDJFZHEBWWJUUQYFIYFWZVNAUCGCHXBCKZRDXOSYKSXAWTDOSVIXLZYYEHFICBHDVSQFNUOHQAABGLPGKHNPIQELGUVLBPGYNTXDTIRGRJBAJWLZSEQMMZOUYEDLDFHUIBZCLXCUABHWWBSDSRXKMHEPYGZNGKQAYEQVMIFJKODFFTJNAENRPSXVMQRJYODKLPNUKOVWNMXBU");

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
    msg.setTimeStamp(0.43947443807913);
    msg.setSource(43233U);
    msg.setSourceEntity(30U);
    msg.setDestination(53344U);
    msg.setDestinationEntity(49U);
    msg.state = 245U;
    msg.plan_id = 19231U;
    msg.wpt_id = 169U;
    msg.settings_chk = 31820U;

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
    msg.setTimeStamp(0.09868889408415105);
    msg.setSource(11439U);
    msg.setSourceEntity(61U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(37U);
    msg.state = 52U;
    msg.plan_id = 4842U;
    msg.wpt_id = 198U;
    msg.settings_chk = 38987U;

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
    msg.setTimeStamp(0.51630223711053);
    msg.setSource(37215U);
    msg.setSourceEntity(66U);
    msg.setDestination(55442U);
    msg.setDestinationEntity(97U);
    msg.state = 201U;
    msg.plan_id = 50548U;
    msg.wpt_id = 224U;
    msg.settings_chk = 33448U;

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
    msg.setTimeStamp(0.065871305484548);
    msg.setSource(62437U);
    msg.setSourceEntity(180U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(146U);
    msg.uid = 13U;
    msg.frag_number = 8U;
    msg.num_frags = 61U;
    const signed char tmp_msg_0[] = {-40, 31, -125, 20, -4, -93, -12, -15, 81, -62, 82, -113, -72, 12, -67, 112, 56, 119, 117, -5, 102, -44, -96, -3, -64, -24, -70, -89, -25, 99, -111, 37, -89, -22, -107, 82, 18, -30, -77, 113, -41, -47, -65, 91, -22, 10, 123, 118, -64, -91, -66, 5, -75, 39, 59, -107, 100, -54, -112, -122, -124, 89, -36, 77, 93, 34, -21, 55, -29, 57, -18, -82, -128, 119, 73, -28, -2, 125, 36, -73, -92, 113, 115, -93, 86, 10, -80, -79, 126, 16, -113, -21, 26, -63, 122, 91, -106, 71, -7, 88};
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
    msg.setTimeStamp(0.600262089604246);
    msg.setSource(31602U);
    msg.setSourceEntity(154U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(74U);
    msg.uid = 76U;
    msg.frag_number = 105U;
    msg.num_frags = 100U;
    const signed char tmp_msg_0[] = {-11, -127, -7, -41, 32, -3, -61, -53, 117, 14, 41, 68, 71, 68, 126, -14, -126, -56, 24, 29, -110, -90, 114, -30, 44, 123, -121, -20, 96, -2, -117, 78, -116, 117, 31, -104, 115, 66, 6, 124, -29, 33, 17, 37, 118, -120, -107, 115, 92, -42, -51, -55, 35, 11, 126, -128, 93, 123, 43, 73, -36, 13, 89, -85, 18, -57, -38, 53, -99, -103, -31, 92, -27, -56, 126, 50, -89, 51, -80, -69, -56, -109, 71, 117, -6, -104, 122, 8, 10, -26, 116, -124, -105, 118, 73, 91, 121, -121, 13, -36, 61, -57, -50, 11, -107, 113, -123, 104, -125, -88, 71, -44, 87, -108, -24, 22, 126, -90, -39, 86, -98, 113, -18, 0, -116, 92, -85, -45, -113, 43, -92, -14, 11, -43, 0, -125, -89, 109, -65, -109, 92, 82, -96, -67, -93, -36, 95, 102, -112, -82, 41, -43, -22, -79, -29, -47, -104, -57, -75, 42, -103, -127, -14, -28, -87, 48, -83, -93, -17, -128, -37};
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
    msg.setTimeStamp(0.5117610610676898);
    msg.setSource(39267U);
    msg.setSourceEntity(128U);
    msg.setDestination(16811U);
    msg.setDestinationEntity(125U);
    msg.uid = 186U;
    msg.frag_number = 174U;
    msg.num_frags = 78U;
    const signed char tmp_msg_0[] = {38, -6, -83, -2, 57, 52, -110, 126, 70, -31, 40, 118, -10, -83, -83, -127, 108, 7, 106, 109, -67, -55, -37, 2, 20, -120, 59, -36, -76, -123, 90, 125, 68, 105, 1, -10, 13, 48, -98, -43, -87, -55, 119, -5, 72, 110, -80, -69, -58, -56, 18, -109, -97, -9, 60, 26, 77, 96, -99, -23, -85, -29, -98, -90, 70, 69, 16, -25, 7, -111, -104, 89, -44, -111, -114, 120, -119, 120, 106, -5, 95, 52, -55, -113, 7, 126, 1, -123, -111, 84, 97, -77, 91, 77, -125, 61, -23, 51, 50, 71, -106, -98, 102, -65, -16, -35, 0, -113, -64, 31, 63, 39, 17, -92, 124, -110, 123, 93, -46, -108, -105, 54, 126, -75, 71, -66, -94, -119, -35, -23, -74, -36, 35, 108, 68, 25, 83, 59, 62, 90, 5, -35, -5, -27, -87, -43, -117, 26, 120, -55, 95, 111, 6, -54, -54, -113, 95, 29, 42, -79, 13, -59, 101, 94, 14, -125, -38, -15, 45, -57, -31, -30, 74, -109, -113, 72, 100, 44, -10, 71, 44, 84, 86, 97, 13, -128, 111, -45, -66, -71, -13, -88, -16, 87, -113, -84, -88, 64, 87, 44, 24, 51, -88, 81, 93, -95, -43, -103, 49, -55, 44, -28, -111, -107, 104, -105, 29, -117, 64, 19, -87, 92, 109, 65, -71, 8, 125, -117, 11, -29, -80};
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
    msg.setTimeStamp(0.5931805536907185);
    msg.setSource(14381U);
    msg.setSourceEntity(238U);
    msg.setDestination(257U);
    msg.setDestinationEntity(169U);
    msg.uid = 240U;
    msg.op = 125U;
    msg.frag_ids.assign("ZLOEKQNSFOMQBJEELRGIUCCADDBUQCAIAJYMHYKZUARLSSGPHWFVTMDEFWPSLUAMEQNRBLBJJDMFEXNFSXMPXWPGWCQOXCQVHRLLBSENUKBONEFTJXZSO");

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
    msg.setTimeStamp(0.4066706110327668);
    msg.setSource(63160U);
    msg.setSourceEntity(174U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(18U);
    msg.uid = 48U;
    msg.op = 77U;
    msg.frag_ids.assign("EZDCPXXAXTCKIVVSGHTTLVMZLPTOBWXRIWUWZYUTYVLYBHAXPMHIVCSSOZLOJVIUUYRAFYEEQHXCPHGNNCXGBXLGGTLZTCSYDBSFBCBGOKDYFLMCTWVRFOKQJELOBAMENAKNDWEXBPJZEJJQNHLHUNJMERZDWZMCJMQGMAPJOHCBRFDFDZPRAUWWDOTUUATEFIIPNHFGEII");

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
    msg.setTimeStamp(0.818496244861829);
    msg.setSource(11900U);
    msg.setSourceEntity(181U);
    msg.setDestination(32207U);
    msg.setDestinationEntity(144U);
    msg.uid = 94U;
    msg.op = 191U;
    msg.frag_ids.assign("VGTANRSVBZYLZZPXCUQEFSNNCCUOWQFTWPSADZROUOQYBTFXIRRLZAHPZGLMDYVHJRMLPPKGLYXQJWVJGEODZGNIMKEEPJOAQNVEKJTIPFGBTFHCKDZVUOSNJXFCQORBZSTPUIMWZKQYXFFLAWDBEHKKQXKBIXUHXRATMVNNGEOLUGMULBMTXRIMUBLTINWQKASYIJCYPHUNOSABSVVCWXDSYCEBTVYAJASEF");

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
    msg.setTimeStamp(0.3934721671984279);
    msg.setSource(51638U);
    msg.setSourceEntity(1U);
    msg.setDestination(28389U);
    msg.setDestinationEntity(166U);
    msg.content_type.assign("UHMTXWKAXESXCUYGFNDCHKJSMRPRHEKPLXEMZRUOINULCRLLRNXKMLZBVLYGWODINNOTLACOYTFXWEPWASOXNUGMKSAIQSHBCYKIVYJDUWSZWGZWDLHGVYJMZSHTSITJRUEBMPANHTDYEIGMCWXOZHIQXJDGRKQLPVEYHIPTTCG");
    const signed char tmp_msg_0[] = {-35, 104, 62, 46, 34, 74, 73, -86, 114, -88, -15, -63, -71, 29, 121, -115, -3, -63, -125, 53, -116, -8, -17, 51, 111, -106, -125, -54, -126, -44, -17, -14, -42, -78, -107, -95, 84, -122, -109, -112, 115, -63, -34, -97, 18};
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
    msg.setTimeStamp(0.622410705618796);
    msg.setSource(10617U);
    msg.setSourceEntity(17U);
    msg.setDestination(46373U);
    msg.setDestinationEntity(59U);
    msg.content_type.assign("IINXRGAEQIHNFWFEJUHLDIVBMEKKADHMPYEHCPIWGKBWARYUHANXWKPMWVTPYETPPQRQLWYXZOCCBSTRHTKXRNGJDVPOFXNYOQYHWTFEOEQKJDBGVYQFSBWRFTZMNDFXXUGJHDMUMKGIOCUHJSYMOJZRMJWLSSJNLAS");
    const signed char tmp_msg_0[] = {-93, -47, 4, -69, 66, 13, -12, 28, 119, -62, -49, -79, -45, 5, -71, -107, -20, 89, 23, 69, -35, 80, -2, -97, 66, 62, 23, 94, 62, 57, -104};
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
    msg.setTimeStamp(0.760239524084692);
    msg.setSource(22957U);
    msg.setSourceEntity(21U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(11U);
    msg.content_type.assign("DPTPNDROAWCBTREUQMTQFNCVLAOOEKYVBHFQSDKGXITZIMYRJQFMRHTITPQCVRJWZJOPPIHCRJFJWLVEXDJEWKSNGISALAGOLUDFXEAFPEDUHZAMVDNHMKBBHYYXHEDDPMLBJARCMIJPTNGXCGXKXEETDMWYNAUFLQIBCGPVMBWTLFIUNXGXRFZNWGVKQAZQOH");
    const signed char tmp_msg_0[] = {88, -1, -4, 5, 61, -34, -66, -23, 120, 37, 30, 17, -85, -1, 109, 85, 110, 53, 113, -68, 126, -45, -45, 31, 70, 76, -94, 102, 98, -23, 21, -60, -3, -39, 116, 71, -117, -31, -29, -114, -45, 82, 121, 21, 24, 15, -24, 76, 94, -28, -113, 56, -76, 75, -33, 117, 101, -49, -11, 49, -44, -35, 35, -50, 62, 111, 24, -79, 80, 6, -20, 10, 113, -56, 121, 106, 26, -26, -11, 119, -42, 90, 84, -31, 9, -100, 78, -91, 78, -47, 97, -87, -56, -99, 105, 6, 41, -38, -40, -103, 98, -4, -56, -75, 56, 29, -88, 57, -8, 111, 7, 21, -117, -85, 55, -25, -39, 66};
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
    msg.setTimeStamp(0.46575594385411156);
    msg.setSource(12932U);
    msg.setSourceEntity(134U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.4321990066044742);
    msg.setSource(34819U);
    msg.setSourceEntity(143U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.7225762289730184);
    msg.setSource(41152U);
    msg.setSourceEntity(92U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.8830500018168473);
    msg.setSource(27422U);
    msg.setSourceEntity(70U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(172U);
    msg.target = 47484U;
    msg.bearing = 0.3906781629401762;
    msg.elevation = 0.2596273802521699;

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
    msg.setTimeStamp(0.9910672041625692);
    msg.setSource(25510U);
    msg.setSourceEntity(172U);
    msg.setDestination(56845U);
    msg.setDestinationEntity(215U);
    msg.target = 44013U;
    msg.bearing = 0.37737593336934894;
    msg.elevation = 0.23917517236217356;

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
    msg.setTimeStamp(0.42284825702120177);
    msg.setSource(15786U);
    msg.setSourceEntity(79U);
    msg.setDestination(42620U);
    msg.setDestinationEntity(197U);
    msg.target = 48952U;
    msg.bearing = 0.5246120152949303;
    msg.elevation = 0.7495423305666686;

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
    msg.setTimeStamp(0.04249548306080719);
    msg.setSource(55296U);
    msg.setSourceEntity(144U);
    msg.setDestination(28664U);
    msg.setDestinationEntity(45U);
    msg.target = 14853U;
    msg.x = 0.2733152809566376;
    msg.y = 0.023866977382653753;
    msg.z = 0.9483183905113094;

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
    msg.setTimeStamp(0.22240904450951327);
    msg.setSource(20940U);
    msg.setSourceEntity(103U);
    msg.setDestination(51535U);
    msg.setDestinationEntity(204U);
    msg.target = 3864U;
    msg.x = 0.3686154026656492;
    msg.y = 0.6847101838415197;
    msg.z = 0.2434713009930568;

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
    msg.setTimeStamp(0.29474350303015284);
    msg.setSource(57639U);
    msg.setSourceEntity(240U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(103U);
    msg.target = 19236U;
    msg.x = 0.7816352989669181;
    msg.y = 0.23459055237580095;
    msg.z = 0.9952626623081053;

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
    msg.setTimeStamp(0.4566052606683376);
    msg.setSource(24987U);
    msg.setSourceEntity(214U);
    msg.setDestination(59178U);
    msg.setDestinationEntity(178U);
    msg.target = 44171U;
    msg.lat = 0.8949548334157083;
    msg.lon = 0.28804305494734184;
    msg.z_units = 82U;
    msg.z = 0.5724507134389243;

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
    msg.setTimeStamp(0.21806286746752246);
    msg.setSource(51191U);
    msg.setSourceEntity(154U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(23U);
    msg.target = 50391U;
    msg.lat = 0.10682640784227027;
    msg.lon = 0.3189091904157054;
    msg.z_units = 139U;
    msg.z = 0.813965478407472;

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
    msg.setTimeStamp(0.46678439551973694);
    msg.setSource(37815U);
    msg.setSourceEntity(12U);
    msg.setDestination(18626U);
    msg.setDestinationEntity(12U);
    msg.target = 14830U;
    msg.lat = 0.860627651868828;
    msg.lon = 0.5534020064590176;
    msg.z_units = 31U;
    msg.z = 0.26947831170496983;

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
    msg.setTimeStamp(0.28393084817642633);
    msg.setSource(49610U);
    msg.setSourceEntity(50U);
    msg.setDestination(48448U);
    msg.setDestinationEntity(20U);
    msg.locale.assign("DPAFLSLIRTFEUZFMTEXKYRYCNIWLBQMLNSISRYNXRJIUBWIOBUGZGNKBGCVVXKQBTPUSEAZJOIXYZJMZLZJLGMQEFJWVEAUKIWUHQGUCOEUAXVSGIRGACDVLMPALYFMFAVNODT");
    const signed char tmp_msg_0[] = {116, -91, -75, -88, 83, -74, -15, -121, -64, -37, -86, -23, -124, -44, -128, 124, -29, 78, 14, 26, 29, -109, -81, -96, -75, 82, -123, 66, 55, -60, 93, -100, -100, -58, -116, -47, 0, -50, -17, 126, 45, -31, 43, -58, 1, 14, 26, 117, 52, -101, 62, -37, 78, -48, 15, -72, 121, 20, -47, 79, 26, -114, -82, 97, -95, 44, -67, -118, 121, 38, -121, -2, 10, 37, 7, -110, 51, -65, -115, 56, 123, -102, 83, -50, 117, -40, -9, -94, 53, -48, -7, -25, -63, -76, 103, -43, 45, -29, -110, -71, 38, 121, 4, 71, 62, 104, 81, -91, 45, -28, -44, -18, -86, -83, -123, 44, 19, -38, -13, -114, -5, 47, -2, 105, 73, -9, 107, 29, -109, -42, -82, -63, -1, -88, 67, 65, 6, -119, 49, 106, 25, -9, 19, 68, 16, 102, -30, -84, -5, 33, 110, -127, -78, 5, 20, -45, 67, 104, 18, 6, 122, 116, -119, -93, 29, -61, -18, -11, 4, -73, -75, 54, -89, 0, -35, -109, -77, 63, 25, 67, -56, 21, 11, 59, -89, 10, -110, 83, -88, -16, 10};
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
    msg.setTimeStamp(0.8246109783651926);
    msg.setSource(35904U);
    msg.setSourceEntity(122U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(74U);
    msg.locale.assign("XKVSPHPXFECWKAS");
    const signed char tmp_msg_0[] = {-125, 97, -118, -16, -35, -98, -121, 9, 118, 41, 0, 61, -44, -59, -37, -11, -81, -65, 68, 68, -102, 0, -45, 26, -123, -27, 87, -16, 6, 37, -38, 63, -72, 61, 23, -89, -107, 25, -108, 116, 69, 99, 2, -23, 37, -8, 95, 120, 35, -123, -60, 80, -1, 89, 102, 12, -49, -24, -90, -121, -59, 100, -96, -14, 59, -64, -65, -99, -23, -113, 64, 10, -52, 15, -105, -106, 13, -126, 22, 94, 3, -1, -17, 119, -43, -30, 5, -52, 84, -116, -60, 111, -34, -126, 115, -77, 100, 107, 16, -18, 117, -19, -110, -35, -13, 39, 118, -33, 78, -126, -80, 28, -76, -110, -43, -107, 67, 71, 33, 56, 82, 45, -71, -70, 102, 103, -23, 89, 25, 3, 95, 25, 87, 115, 5, -46, 4, -103, 31, 63};
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
    msg.setTimeStamp(0.16000403960445952);
    msg.setSource(48806U);
    msg.setSourceEntity(80U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(29U);
    msg.locale.assign("PGQSJTIUBCUMQISURSKSUPNOVBNLOPMBOCHTDYZVTUTWOLRKUZYQAV");
    const signed char tmp_msg_0[] = {98, -39, 16, -95, 90, 1, 114, 111, -68, -94, 10, -127, 59, -94, 22, 1, -5, 116, -24, -92, -30, 126, 34, -103, 76, 69, -114, -31, -83, 9, -42, -122, -98, -113, -77, -82, 48, -108, -32, -27, -125, 43, 25, 33, 16, 118, 113, 90, 20, 40, 99, 36, -13, -100, -66, -50, 15, 10, -67, -109, 59, -57, 79, 66, -53, -50, -86, -118, -116, -33, 65, 54, 13, -34, -30, -7};
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
    msg.setTimeStamp(0.2642238356780535);
    msg.setSource(3289U);
    msg.setSourceEntity(45U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.8934216113805763);
    msg.setSource(40063U);
    msg.setSourceEntity(66U);
    msg.setDestination(43591U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.28357988138959);
    msg.setSource(35723U);
    msg.setSourceEntity(235U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.18728116441289244);
    msg.setSource(49910U);
    msg.setSourceEntity(25U);
    msg.setDestination(11920U);
    msg.setDestinationEntity(36U);
    msg.camid = 41U;
    msg.x = 3196U;
    msg.y = 40380U;

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
    msg.setTimeStamp(0.11338348047319635);
    msg.setSource(54398U);
    msg.setSourceEntity(11U);
    msg.setDestination(62543U);
    msg.setDestinationEntity(211U);
    msg.camid = 26U;
    msg.x = 55919U;
    msg.y = 55042U;

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
    msg.setTimeStamp(0.33611916218411686);
    msg.setSource(17695U);
    msg.setSourceEntity(17U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(106U);
    msg.camid = 156U;
    msg.x = 24215U;
    msg.y = 58748U;

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
    msg.setTimeStamp(0.8652080862444674);
    msg.setSource(13109U);
    msg.setSourceEntity(12U);
    msg.setDestination(25129U);
    msg.setDestinationEntity(161U);
    msg.camid = 176U;
    msg.x = 54631U;
    msg.y = 36789U;

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
    msg.setTimeStamp(0.2932602515192575);
    msg.setSource(31858U);
    msg.setSourceEntity(11U);
    msg.setDestination(29432U);
    msg.setDestinationEntity(2U);
    msg.camid = 103U;
    msg.x = 23313U;
    msg.y = 26769U;

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
    msg.setTimeStamp(0.9969949011408115);
    msg.setSource(19554U);
    msg.setSourceEntity(62U);
    msg.setDestination(17505U);
    msg.setDestinationEntity(65U);
    msg.camid = 221U;
    msg.x = 20036U;
    msg.y = 36911U;

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
    msg.setTimeStamp(0.7188865409932453);
    msg.setSource(40305U);
    msg.setSourceEntity(36U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(34U);
    msg.tracking = 74U;
    msg.lat = 0.777612446574652;
    msg.lon = 0.4061533160747556;
    msg.x = 0.4865479859924582;
    msg.y = 0.7623650959013683;
    msg.z = 0.1005548395888557;

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
    msg.setTimeStamp(0.5548794332633826);
    msg.setSource(26607U);
    msg.setSourceEntity(27U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(56U);
    msg.tracking = 160U;
    msg.lat = 0.8771418990058915;
    msg.lon = 0.09677507626161863;
    msg.x = 0.7809126862773438;
    msg.y = 0.4368725197624911;
    msg.z = 0.6091034283984801;

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
    msg.setTimeStamp(0.8148788408304113);
    msg.setSource(36784U);
    msg.setSourceEntity(42U);
    msg.setDestination(19733U);
    msg.setDestinationEntity(53U);
    msg.tracking = 190U;
    msg.lat = 0.4052073104189685;
    msg.lon = 0.2674206685645609;
    msg.x = 0.30993457548015957;
    msg.y = 0.7628830575214695;
    msg.z = 0.3952780896956176;

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
    msg.setTimeStamp(0.8069471344715801);
    msg.setSource(632U);
    msg.setSourceEntity(211U);
    msg.setDestination(6068U);
    msg.setDestinationEntity(94U);
    msg.target.assign("XYMFTKLAGEVSRMNRJMISYZYDHQNJQFIXVALLRJCGSUHJLZZLQISCPOSEPIJLTKOGKPNZQKXRPTAAOUOFADCGMKBUYGVHBZPTVKUEBODJNXIVUHVBGSWPTPRXNATDEMREWIZCFWMBBUDLJXIKKLVFNKHVCUAHFRLOJFROQZRWTCPUPGWXCDXHIYPGWHDBVGTMTXZWQDILEHMSEIDAMGBQKUYBAWUZQAZFCNERNWYXOWOBHDYE");
    msg.lbearing = 0.1584238646506364;
    msg.lelevation = 0.9088039813527167;
    msg.bearing = 0.8467815265771369;
    msg.elevation = 0.4352134669924689;
    msg.phi = 0.4999907992178818;
    msg.theta = 0.1253071919523856;
    msg.psi = 0.647564351398594;
    msg.accuracy = 0.5502687739844375;

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
    msg.setTimeStamp(0.008717096267780944);
    msg.setSource(5731U);
    msg.setSourceEntity(68U);
    msg.setDestination(54372U);
    msg.setDestinationEntity(201U);
    msg.target.assign("YXERRMFABVAAPYMSEXVGHMCAQPI");
    msg.lbearing = 0.9057245897418907;
    msg.lelevation = 0.24235398553379706;
    msg.bearing = 0.9147672889888862;
    msg.elevation = 0.3003211051096686;
    msg.phi = 0.49923937435446264;
    msg.theta = 0.19366970140580253;
    msg.psi = 0.07827291844254458;
    msg.accuracy = 0.2648559864808788;

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
    msg.setTimeStamp(0.08472663317400908);
    msg.setSource(43908U);
    msg.setSourceEntity(163U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(69U);
    msg.target.assign("QCVIULFRJXEUL");
    msg.lbearing = 0.008777444782700594;
    msg.lelevation = 0.4443531778934213;
    msg.bearing = 0.29389197526206967;
    msg.elevation = 0.7953562966110854;
    msg.phi = 0.21016000249880684;
    msg.theta = 0.7816217973133979;
    msg.psi = 0.3954458978294487;
    msg.accuracy = 0.32751279247972165;

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
    msg.setTimeStamp(0.09067681103859726);
    msg.setSource(28799U);
    msg.setSourceEntity(185U);
    msg.setDestination(39919U);
    msg.setDestinationEntity(94U);
    msg.target.assign("ULLMVITYBVFIJCWTZESWKDPKJBOTQYWCNNOEVCCIUKPOIHEJZIADUANKTHADEYBWDZUWUZLYKKPLBTNDWGULXLONZRVIZQFQNBASMGEVBMLJPMFTNNVOPNWUKHCGQQEESPGZHXQOOMCZZHFDVZ");
    msg.x = 0.9432095227115529;
    msg.y = 0.7424144375032823;
    msg.z = 0.16119288334430726;
    msg.n = 0.08678264128227953;
    msg.e = 0.0742090273750805;
    msg.d = 0.16888268726265332;
    msg.phi = 0.5856826753532216;
    msg.theta = 0.17869896585803946;
    msg.psi = 0.09879077627529753;
    msg.accuracy = 0.30852046512096554;

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
    msg.setTimeStamp(0.33763799332138544);
    msg.setSource(53535U);
    msg.setSourceEntity(193U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(175U);
    msg.target.assign("SYMYZHSNPGUEMUULBC");
    msg.x = 0.9216844965830491;
    msg.y = 0.9098507120528785;
    msg.z = 0.5484910445706423;
    msg.n = 0.7002996576979441;
    msg.e = 0.36561556754976987;
    msg.d = 0.36841189706097655;
    msg.phi = 0.5477430455180566;
    msg.theta = 0.6820577204157365;
    msg.psi = 0.7115015190083767;
    msg.accuracy = 0.013809228668291595;

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
    msg.setTimeStamp(0.21956571388386248);
    msg.setSource(10601U);
    msg.setSourceEntity(43U);
    msg.setDestination(567U);
    msg.setDestinationEntity(61U);
    msg.target.assign("DHKDKQWTOWDRRBXYGDGNMTQGACCESVMPETSDBWSDNKQOFWPGQJBHNQRAXYOPGUAFQBPHNJEEMPYSGWQROCECZXVADRCAJWYITRVSIVCZICGBZUXUBFFHRJJXKFKUTVTDLFELSZQIZBDOAHCGPHFQPLIZVWMLIMZAJNNYYOYORKKJPLVWXAXJIOS");
    msg.x = 0.9175259872682683;
    msg.y = 0.9027718183481703;
    msg.z = 0.7521372037550691;
    msg.n = 0.6654179669774787;
    msg.e = 0.7492194444784595;
    msg.d = 0.162116746759567;
    msg.phi = 0.20685651795772741;
    msg.theta = 0.3347241186980888;
    msg.psi = 0.08671413829914254;
    msg.accuracy = 0.29612622872516015;

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
    msg.setTimeStamp(0.5081090012727957);
    msg.setSource(62667U);
    msg.setSourceEntity(40U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(123U);
    msg.target.assign("HNEJCEZWTCLQBQDZCQQPGNHBXNFYUAVYRZUAJGWAQNCSAFNOWKZPGDZTJEGVGLDDUFSKFIKSMUURIHIWPFFKJLZMKQMDQTYAFIJOBAVZMKOXQMEOFAVPMEHUBWVOOYVRCJLDWWRHBNXNVBVFSSRIIKSORYULXNPXKHDELGWYAEQSAIPLZBPTVMTXUENCGDLOKEHYIWTWR");
    msg.lat = 0.5715467000917278;
    msg.lon = 0.21722044308139077;
    msg.z_units = 243U;
    msg.z = 0.7098337694679334;
    msg.accuracy = 0.7337356548453595;

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
    msg.setTimeStamp(0.8881802960444739);
    msg.setSource(44739U);
    msg.setSourceEntity(140U);
    msg.setDestination(44291U);
    msg.setDestinationEntity(12U);
    msg.target.assign("CAPPOHYURZPGEFZSMAZWITVHIEPCYASUPMNJZSEQXGNCOZTWOCCADIMGXXUJNAZDNELYQAAFZKZPWFJMOOENHSVUOKBQTCCWUVNZDPMEDOWLRTRUCLEXBUIBWQDUGVAFKWNBYFSTFYKHGFEMQHMBPONR");
    msg.lat = 0.550860815678429;
    msg.lon = 0.7771974600581033;
    msg.z_units = 82U;
    msg.z = 0.2905841425789648;
    msg.accuracy = 0.26203674346199235;

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
    msg.setTimeStamp(0.433791598766341);
    msg.setSource(9223U);
    msg.setSourceEntity(110U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(186U);
    msg.target.assign("EVGFLGTZPTWAEIOKWJAYYBUXXCVGWYIYEUCDQGNBESBMLGCZXOMOTVNKHNHGBFWQSWZHPPQFPDOLUUCPOZIWEXFSDLROXMHYUICLABDZBEFMJJ");
    msg.lat = 0.6200447036596272;
    msg.lon = 0.10494096945178344;
    msg.z_units = 128U;
    msg.z = 0.9839692231700188;
    msg.accuracy = 0.13573197701535578;

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
    msg.setTimeStamp(0.27979751788385576);
    msg.setSource(5275U);
    msg.setSourceEntity(229U);
    msg.setDestination(52362U);
    msg.setDestinationEntity(233U);
    msg.name.assign("MCWWKBEPGSLZAYINKRSYXAQHMTOCHOUTHJRRLEBABJVEWADBDWALCNCRXXNRVBGNDHTZELFMKGRIGJXLHJSUTJBYRTSYJPFHPPZDQQGEXDEULVDFMVFFTPSKGRWBAAGQHEEQQTZCGNCYWQHUUIMGPIEZUWKOJKOTHCLAGWBDZNDIRNAY");
    msg.lat = 0.8934306772217325;
    msg.lon = 0.42146932654119373;
    msg.z = 0.7758487974629397;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.8668544259393783);
    msg.setSource(1131U);
    msg.setSourceEntity(240U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(8U);
    msg.name.assign("TZDVVLHPSBUPGNBQHBQVDNQZCBAJCPWIKTOKTXDAFRSKFNOFEIPAWWUGBSIGQCBBQTCUHFMTQOLXRRPFFVJFORVQWIURCKVULXJEDEZMAXJYKBQNAGHWHMEANBMYZIJBUYERAQLHZDMMSEFJOPZYTJQDELUWLRCVHHEIOLKXYIDO");
    msg.lat = 0.9179828007449957;
    msg.lon = 0.7473715451024286;
    msg.z = 0.7170400421120837;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.49135566057344593);
    msg.setSource(53785U);
    msg.setSourceEntity(146U);
    msg.setDestination(36328U);
    msg.setDestinationEntity(39U);
    msg.name.assign("ZXURFSBPUQSSUZSHLYOXYHEECXBAEYMIFYWSDWDBZVCXIGL");
    msg.lat = 0.27203684975870257;
    msg.lon = 0.9845040295376272;
    msg.z = 0.4458540942512893;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.15172596957421425);
    msg.setSource(18434U);
    msg.setSourceEntity(85U);
    msg.setDestination(1106U);
    msg.setDestinationEntity(70U);
    msg.op = 148U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CWVJUXHEUMIENBXOZMOXPYTVGZQLYJSHLWRJEQGUWNXSDKCFR");
    tmp_msg_0.lat = 0.5039980095210354;
    tmp_msg_0.lon = 0.9381494680368002;
    tmp_msg_0.z = 0.739449555121277;
    tmp_msg_0.z_units = 1U;
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
    msg.setTimeStamp(0.8797237455085792);
    msg.setSource(38017U);
    msg.setSourceEntity(248U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(209U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.016327124679506144);
    msg.setSource(34406U);
    msg.setSourceEntity(126U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(152U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.479654850483597);
    msg.setSource(28364U);
    msg.setSourceEntity(129U);
    msg.setDestination(1269U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8687441678747506;
    msg.type = 188U;

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
    msg.setTimeStamp(0.9063806249382501);
    msg.setSource(56186U);
    msg.setSourceEntity(138U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5831571657181853;
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
    msg.setTimeStamp(0.5003271285378867);
    msg.setSource(63504U);
    msg.setSourceEntity(8U);
    msg.setDestination(51378U);
    msg.setDestinationEntity(87U);
    msg.value = 0.4025212143737469;
    msg.type = 98U;

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
    msg.setTimeStamp(0.044982338334754846);
    msg.setSource(56691U);
    msg.setSourceEntity(35U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7448500697075178;

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
    msg.setTimeStamp(0.3082922803178131);
    msg.setSource(2852U);
    msg.setSourceEntity(74U);
    msg.setDestination(19248U);
    msg.setDestinationEntity(173U);
    msg.value = 0.4752854335331731;

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
    msg.setTimeStamp(0.7682122650890263);
    msg.setSource(31277U);
    msg.setSourceEntity(110U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(35U);
    msg.value = 0.03651389949671424;

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
    msg.setTimeStamp(0.26869300946180175);
    msg.setSource(33157U);
    msg.setSourceEntity(63U);
    msg.setDestination(29461U);
    msg.setDestinationEntity(8U);
    msg.timestamp_last_service = 0.8253539169264057;
    msg.time_next_service = 0.6034640592752579;
    msg.time_motor_next_service = 0.8983479434577157;
    msg.time_idle_ground = 0.4890725563202658;
    msg.time_idle_air = 0.08170555408403923;
    msg.time_idle_water = 0.7368759010354565;
    msg.time_idle_underwater = 0.16327516692227895;
    msg.time_idle_unknown = 0.3794503429082262;
    msg.time_motor_ground = 0.668619823718311;
    msg.time_motor_air = 0.6641069974465602;
    msg.time_motor_water = 0.04133421965902395;
    msg.time_motor_underwater = 0.48386086366877423;
    msg.time_motor_unknown = 0.57801697588952;
    msg.rpm_min = 8978;
    msg.rpm_max = -15161;
    msg.depth_max = 0.9551515087075261;

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
    msg.setTimeStamp(0.27301505090052947);
    msg.setSource(40868U);
    msg.setSourceEntity(200U);
    msg.setDestination(55731U);
    msg.setDestinationEntity(84U);
    msg.timestamp_last_service = 0.8809383795590348;
    msg.time_next_service = 0.7946280910372827;
    msg.time_motor_next_service = 0.7758639210205323;
    msg.time_idle_ground = 0.05184203490786454;
    msg.time_idle_air = 0.7165266950683561;
    msg.time_idle_water = 0.008795440273867361;
    msg.time_idle_underwater = 0.6240753681901169;
    msg.time_idle_unknown = 0.8423508897107611;
    msg.time_motor_ground = 0.5104122925888899;
    msg.time_motor_air = 0.992201008780679;
    msg.time_motor_water = 0.26203138470733145;
    msg.time_motor_underwater = 0.8178178676569019;
    msg.time_motor_unknown = 0.8226111525825843;
    msg.rpm_min = -6170;
    msg.rpm_max = -14851;
    msg.depth_max = 0.5104496666224944;

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
    msg.setTimeStamp(0.28017816227546133);
    msg.setSource(5970U);
    msg.setSourceEntity(146U);
    msg.setDestination(28099U);
    msg.setDestinationEntity(236U);
    msg.timestamp_last_service = 0.8082077826423014;
    msg.time_next_service = 0.17059517803353896;
    msg.time_motor_next_service = 0.4536479918593743;
    msg.time_idle_ground = 0.17049526356948275;
    msg.time_idle_air = 0.8243794884624892;
    msg.time_idle_water = 0.585538258204885;
    msg.time_idle_underwater = 0.6447164501215537;
    msg.time_idle_unknown = 0.8825122918038003;
    msg.time_motor_ground = 0.6741988965014836;
    msg.time_motor_air = 0.7627498405909117;
    msg.time_motor_water = 0.6286703928119536;
    msg.time_motor_underwater = 0.7887306701334809;
    msg.time_motor_unknown = 0.9393156678525334;
    msg.rpm_min = -9794;
    msg.rpm_max = -766;
    msg.depth_max = 0.061540676493581636;

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
    msg.setTimeStamp(0.801040017523479);
    msg.setSource(59391U);
    msg.setSourceEntity(124U);
    msg.setDestination(22642U);
    msg.setDestinationEntity(79U);
    msg.severity = 193U;
    msg.text.assign("GXJSGJXZITXETWNTJPDLZOGYWSYXIBOEELRAIGWUXVPOPABQLUAGJSXNYLOOGTWEWDDCQLMZIJHUURZHANVSSPIWKMEEGUAMTRBPPDHOMBHTKBVUOUT");

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
    msg.setTimeStamp(0.7112022494709196);
    msg.setSource(63348U);
    msg.setSourceEntity(236U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(37U);
    msg.severity = 236U;
    msg.text.assign("GVPLABULTHNYBOHNUMYDSFBHJNKR");

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
    msg.setTimeStamp(0.12033461003794965);
    msg.setSource(15783U);
    msg.setSourceEntity(63U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(215U);
    msg.severity = 37U;
    msg.text.assign("PPBDSTRHZMDUVZDSFWZCEEVWOQWYROBIXPPFGEMPRHIHLYZMJVHRBDGUCRRKQCWNZAGGKFSLTBTACMXALPTXILYATKXPMECXUSERUUNBWJAGRTCGKIIYDLSEOUZZBFQLQNBQJITWPNECIXFNJUOKSIHBDMLQSUHZNANWFQCPQZFOAWHXXDEVLQNOTKHRGSYVBVKVOALAMWYJVYJMOKSJYJUABKDLNZXJ");

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
    msg.setTimeStamp(0.150384726896737);
    msg.setSource(22448U);
    msg.setSourceEntity(48U);
    msg.setDestination(56333U);
    msg.setDestinationEntity(236U);
    msg.channel = -75;
    msg.value = 1809278986;
    msg.gain = 76U;

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
    msg.setTimeStamp(0.9345253557915653);
    msg.setSource(24794U);
    msg.setSourceEntity(88U);
    msg.setDestination(40860U);
    msg.setDestinationEntity(160U);
    msg.channel = -13;
    msg.value = 1795722161;
    msg.gain = 137U;

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
    msg.setTimeStamp(0.49585348324351874);
    msg.setSource(20640U);
    msg.setSourceEntity(169U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(141U);
    msg.channel = -42;
    msg.value = -379046504;
    msg.gain = 155U;

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
    msg.setTimeStamp(0.5386691271944715);
    msg.setSource(29650U);
    msg.setSourceEntity(25U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(146U);
    msg.ch01 = 0.265725055222196;
    msg.ch02 = 0.5222328967126194;
    msg.ch03 = 0.44433819960394927;
    msg.ch04 = 0.8061068935888117;
    msg.ch05 = 0.7111009876130956;
    msg.ch06 = 0.2671810332868695;
    msg.ch07 = 0.7659815923017155;
    msg.ch08 = 0.6326817398410033;
    msg.ch09 = 0.3684046532090339;
    msg.ch10 = 0.7455369830925302;
    msg.ch11 = 0.5038785310532772;
    msg.ch12 = 0.26049080584785145;
    msg.ch13 = 0.41769106493134267;
    msg.ch14 = 0.35536298440897685;
    msg.ch15 = 0.9109594972520761;
    msg.ch16 = 0.9225655150750999;

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
    msg.setTimeStamp(0.8525426257078674);
    msg.setSource(40408U);
    msg.setSourceEntity(232U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(85U);
    msg.ch01 = 0.7411701673592846;
    msg.ch02 = 0.5083855252593257;
    msg.ch03 = 0.8460837271745718;
    msg.ch04 = 0.1776149584976493;
    msg.ch05 = 0.9458618893133778;
    msg.ch06 = 0.542857831108641;
    msg.ch07 = 0.28888665269894886;
    msg.ch08 = 0.2857696473340259;
    msg.ch09 = 0.1799040661101896;
    msg.ch10 = 0.05398587041786884;
    msg.ch11 = 0.1608689983310021;
    msg.ch12 = 0.48817467116193947;
    msg.ch13 = 0.5711982058372477;
    msg.ch14 = 0.8739627306416073;
    msg.ch15 = 0.5217490369017335;
    msg.ch16 = 0.5771033066297676;

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
    msg.setTimeStamp(0.899853386074369);
    msg.setSource(37860U);
    msg.setSourceEntity(187U);
    msg.setDestination(60121U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.35981527331071717;
    msg.ch02 = 0.8354278032158599;
    msg.ch03 = 0.009905769350938232;
    msg.ch04 = 0.20957299690265563;
    msg.ch05 = 0.918603606651408;
    msg.ch06 = 0.9554900353982204;
    msg.ch07 = 0.8901475971592624;
    msg.ch08 = 0.4262030534160529;
    msg.ch09 = 0.8282140027977655;
    msg.ch10 = 0.9116537724387274;
    msg.ch11 = 0.7994594125351762;
    msg.ch12 = 0.06195055965109986;
    msg.ch13 = 0.5971473460831707;
    msg.ch14 = 0.1590767946260696;
    msg.ch15 = 0.6244155028826753;
    msg.ch16 = 0.483981405058478;

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
    msg.setTimeStamp(0.29521707497006344);
    msg.setSource(50320U);
    msg.setSourceEntity(131U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(247U);
    msg.op = 242U;
    msg.lat = 0.3513091190288483;
    msg.lon = 0.4555309045400898;
    msg.height = 0.23160900940230322;
    msg.depth = 0.29729666938289945;
    msg.alt = 0.24933750825939238;

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
    msg.setTimeStamp(0.10256425401950875);
    msg.setSource(44172U);
    msg.setSourceEntity(159U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(150U);
    msg.op = 221U;
    msg.lat = 0.2026192038250897;
    msg.lon = 0.5853906230708925;
    msg.height = 0.9126594412944997;
    msg.depth = 0.957966252464343;
    msg.alt = 0.7922246122249115;

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
    msg.setTimeStamp(0.7099732415822945);
    msg.setSource(30725U);
    msg.setSourceEntity(164U);
    msg.setDestination(57285U);
    msg.setDestinationEntity(211U);
    msg.op = 200U;
    msg.lat = 0.9242992022456962;
    msg.lon = 0.7002853312686624;
    msg.height = 0.04356396573917776;
    msg.depth = 0.9439662930035151;
    msg.alt = 0.8802905672712462;

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
    msg.setTimeStamp(0.4781185885140079);
    msg.setSource(60477U);
    msg.setSourceEntity(117U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(229U);
    msg.direction = 0.10563336348724406;
    msg.speed = 0.8026590918516032;
    msg.turbulence = 0.5154539491791211;

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
    msg.setTimeStamp(0.5439039903786088);
    msg.setSource(26551U);
    msg.setSourceEntity(238U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(134U);
    msg.direction = 0.18451779371554355;
    msg.speed = 0.6971141532526854;
    msg.turbulence = 0.2776958964419547;

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
    msg.setTimeStamp(0.225599161798691);
    msg.setSource(60952U);
    msg.setSourceEntity(251U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(250U);
    msg.direction = 0.16036228294883736;
    msg.speed = 0.11235884690583331;
    msg.turbulence = 0.6073786794554294;

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
    msg.setTimeStamp(0.7630068413627491);
    msg.setSource(44061U);
    msg.setSourceEntity(79U);
    msg.setDestination(35731U);
    msg.setDestinationEntity(115U);
    msg.msg_type.assign("UIFDCSLHPUJNUXTIZQECKLWWOOPZLFZYWFQEMLFFCJZXPGOVXSBTPBUKWKVJQTMWWHNUYVDHEPGDXRYKJGYVOZXRVOINXGIBNBEQVCARADURMBXYHYFICZYEMI");
    msg.sensor_class.assign("HOKPBAKFMIUCCPYHHDHMBZBPCPMRQUWJPOUFCSENLRQICJTKLITFGAYTQJTPCUUDQJYOWDHGLEWQWFKGDBZQRNGVLOTXALXTLSUKCRBOIKSGEMEZGHRQWXZUXFNLKOPSIBSDAAEPN");
    msg.mmsi.assign("HZMKXRHQEMTUGRQDVNKLNZAKQQFNDUHOUHOXGMPUZYIYLDEOROILF");
    msg.callsign.assign("XZEVIMUZCJMAFJNRJCMBCTVQPFEBRSKSFPMULRUJMEJLQIUWBUCYVFXDBBZFOQDNSLEGZWRVLQQZDLHWXYPTHHTDNPXGNMYSVOPZJSBVOXSSIDKWMVUIBEOZWTYIKURGKCAHGAPQCQERN");
    msg.name.assign("IMUBOCCCWPUSGBWTNIZFVPWETRSEWWPAMOWNSXLZXULGCRQKTFMMPVIFFGUIGIHUHQIEYZSXYJKGIAECKFNJBZZFTTEPVFHYOJXMUZEE");
    msg.nav_status = 37U;
    msg.type_and_cargo = 6U;
    msg.lat = 0.05874456767065084;
    msg.lon = 0.43912996187365505;
    msg.course = 0.4693449480190276;
    msg.speed = 0.5162338977831941;
    msg.dist = 0.5444645945274152;
    msg.a = 0.8606271491828396;
    msg.b = 0.3207461579880565;
    msg.c = 0.8664662673572799;
    msg.d = 0.5047737156060731;
    msg.draught = 0.8546374723450405;

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
    msg.setTimeStamp(0.7691175602233152);
    msg.setSource(40872U);
    msg.setSourceEntity(41U);
    msg.setDestination(64048U);
    msg.setDestinationEntity(102U);
    msg.msg_type.assign("NULDSAKFCDMZZIMATETREOPJNIPTDGEIRFXAQLAMQOMELWRWIXAZFZKLBKRNPHEBUHEGPYVSAJJUWHRHFYINJJ");
    msg.sensor_class.assign("NLZKUSGJWMMYFMLCTGTALITVVLOWDQYFZDLBKDLYKSBOAYTQSKOPMCOZWFWRDRJAHSJJADGERSOPDCWFEVTOZHHKJMWPFMMKYGCISEBWHAFRXPSYYC");
    msg.mmsi.assign("ODSEXUGJFIGLSQVSKFMCGMQFIAUZBIBUTAYYTZDBCEJPIBIZONTIAPXMLTIKYTGBXHKNYBABDHUXPLKYN");
    msg.callsign.assign("JWDTWQMPYKQDZGGUGNEHKFBTLFZYRIHCQIVDIMYUSLGIROGEUDOPJAKHTLIJQMMENRVYMXIXFZGOGEPZVOZRSGWLZRYJDESLCTFSUFAVOASCXDMRFUCDAFVPBHQICMNTTEPPAYYSVZVBNVRSHHSQYXNMLLXPAUQNECMNKAIGBTI");
    msg.name.assign("KWWCAMROFPUVIIOSMHLCZWLANESEWAXNCCFUBQSEEXBNWKTFLFXOZFDBJNLTKYKSDYJUGIMMJDGLMHQHDHTNMGYM");
    msg.nav_status = 47U;
    msg.type_and_cargo = 185U;
    msg.lat = 0.11766707623058081;
    msg.lon = 0.11678344214393432;
    msg.course = 0.7031602963186555;
    msg.speed = 0.9426306600768887;
    msg.dist = 0.5445493774662228;
    msg.a = 0.5675094350823091;
    msg.b = 0.7241999729323931;
    msg.c = 0.7983937026332741;
    msg.d = 0.8324797525006048;
    msg.draught = 0.6172891918118468;

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
    msg.setTimeStamp(0.05084853224392716);
    msg.setSource(5814U);
    msg.setSourceEntity(112U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(112U);
    msg.msg_type.assign("TBRTRMEZOAZFZUDAWMLDFKIRARSBQFIKQLZQNILHHZFMFLPCCHJHTANFGUFKXLKQECKLQWMNNXECNZN");
    msg.sensor_class.assign("XTKVXINASEBYJPRXLPATTLUTOSPECQVJVTHGHNDZLLIACWDKYQSIQBGNFDACOHYMUBTYZJMPJODTSGLEYKMNRRXJBWC");
    msg.mmsi.assign("ZIEJAWYYMBFSUSTTLRPQXGLHNNRGVCDRNLNNJIMUCHXDZLIAJRHVPBROFPMBAZIDGXBSSKNLRQUXEERJPNOFOZCWJDKOEVYMPCJLXXQGWKDZTPYABUWHKHGPBUCTGSVVQXGZTLMHMIZIMCGODKZTQRSKO");
    msg.callsign.assign("ADAUXEJYHKCKCIOVWUHFZXRKLVBCWGZDAJDOZZOCKEJMMKWTDQIIIWPZJQWCERUKNYWDFYBKUXAMJGIXNSRXSKMHIUNHLRBEMVTOHYQILTJLBXYRZZAIJOUMLPBAXMREGKCOAECSLAKYGPUPLMQSQSRTHLMDENUSYATQQELCZIMFRHTWUTNNVTQPOTGJXZVFOCSVVGYGJBWEPAFUVGTFDJXBNDLFP");
    msg.name.assign("CYKMNXQFRBOHYLJRHOVLHLOMPAKWNINQNHAWJSUNENRPTVVQDVFJVWTCPMEMVUOUYIYEFCRTTMKODMLEZM");
    msg.nav_status = 25U;
    msg.type_and_cargo = 58U;
    msg.lat = 0.43517599459439393;
    msg.lon = 0.9732881920387692;
    msg.course = 0.6193905178794396;
    msg.speed = 0.8332344886111865;
    msg.dist = 0.1612816673676194;
    msg.a = 0.03455318801169138;
    msg.b = 0.11408114221451038;
    msg.c = 0.7461470154792156;
    msg.d = 0.1593641708609016;
    msg.draught = 0.48780497767317976;

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
    msg.setTimeStamp(0.3107844322488452);
    msg.setSource(8193U);
    msg.setSourceEntity(159U);
    msg.setDestination(1162U);
    msg.setDestinationEntity(112U);
    msg.depth_at_loc.assign("QGJYRLHEKQWLMKKBXXWFHAUNYGSDBJXUIMACTMFKPZIDTUBPNBAAOFXWXGLHKJPJOH");
    msg.danger.assign("LSQXELRDSHPTVWXHOLUTLDEMHVGMZDWLEUNILPGNXKWDEPOSTXATWPMLKTFOUCKHWLIUTQZRWQFXVNQFERXFRJKBANVHJCYNAHZOOZZVCKRCYJQZYPWQZSRMMOGWEEMYUCLSKVFBAJOVYBTLEKSBNFGHGUBVCAFPJARFJBRRTMISNQPJPX");

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
    msg.setTimeStamp(0.9743695400174015);
    msg.setSource(58319U);
    msg.setSourceEntity(213U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(18U);
    msg.depth_at_loc.assign("AEKXYXLBVSZOJPIULGCVDOFGHZHUIFBRAHWLTHAWHPMQQDBUGGIJKUWFLZUDEPINMVLTWJTDIYZCIQXOOUKPEODZJFNJRNTIENTHVNWWOXNPA");
    msg.danger.assign("LQXRMMREHTRSSNEJMXQDXWIPIKACEQTZAABLGDJSCPUSHCIQILGQPDSDZNCNRUIROXXHVLKIGIAHYVBQMXVNJVOTWEVHTNKEPFPUYOEJPVDBXGBJPLSYOBGRYHFAQSEIMTYCEAODLJORBIGQBZUEAWXFWTSPRIFWNGWYCCMWEJVUNZKUAZLUFCZXFDFKKGDVFGYJHYYLFZZWBJUMGSFOMPAKCUOQMBVYHNCWXLBAHNPKKURH");

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
    msg.setTimeStamp(0.790350806884209);
    msg.setSource(55241U);
    msg.setSourceEntity(85U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(111U);
    msg.depth_at_loc.assign("COSIBABYEULOQCCOUSTJL");
    msg.danger.assign("BVCBYULHZWWVVIZZAYJHLDUGPHYPHULBEREHVQDDALMFIYESSLTMUWCVGUFGIWXXEOGPPTSNTRDSJAPOBUKCKXJYMHNABBISLCMBNSQBOUEXYGMXIKRKNXKOQPKZPFLZXAALNSRJZUBYZECCFNODCWJJWC");

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
    msg.setTimeStamp(0.9111791824250516);
    msg.setSource(256U);
    msg.setSourceEntity(218U);
    msg.setDestination(60231U);
    msg.setDestinationEntity(214U);
    msg.time = 0.22696230702198938;
    msg.x = 0.3575743245444015;
    msg.y = 0.7329187652022491;
    msg.z = 0.023565679084313174;

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
    msg.setTimeStamp(0.4456104590946557);
    msg.setSource(56792U);
    msg.setSourceEntity(120U);
    msg.setDestination(63619U);
    msg.setDestinationEntity(187U);
    msg.time = 0.5782211268417681;
    msg.x = 0.2885392246766594;
    msg.y = 0.19519375860813093;
    msg.z = 0.20877630678631864;

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
    msg.setTimeStamp(0.41044430179959845);
    msg.setSource(46656U);
    msg.setSourceEntity(58U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(0U);
    msg.time = 0.5901870384888973;
    msg.x = 0.9820357589845228;
    msg.y = 0.34173549639998324;
    msg.z = 0.7604843079204546;

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
    msg.setTimeStamp(0.7625782845654999);
    msg.setSource(26695U);
    msg.setSourceEntity(207U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(132U);
    msg.nbeams = 40U;
    msg.ncells = 51U;
    msg.coord_sys = 34U;

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
    msg.setTimeStamp(0.9894477318979906);
    msg.setSource(36549U);
    msg.setSourceEntity(129U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(41U);
    msg.nbeams = 195U;
    msg.ncells = 237U;
    msg.coord_sys = 46U;

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
    msg.setTimeStamp(0.6454353603985701);
    msg.setSource(8695U);
    msg.setSourceEntity(123U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(142U);
    msg.nbeams = 219U;
    msg.ncells = 219U;
    msg.coord_sys = 2U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.23473656200505566;
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
    msg.setTimeStamp(0.03301277365413291);
    msg.setSource(49015U);
    msg.setSourceEntity(151U);
    msg.setDestination(48317U);
    msg.setDestinationEntity(236U);
    msg.cell_position = 0.11987982978361245;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.993559472222898;
    tmp_msg_0.amp = 0.6252495002547694;
    tmp_msg_0.cor = 208U;
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
    msg.setTimeStamp(0.0751183145771055);
    msg.setSource(8052U);
    msg.setSourceEntity(72U);
    msg.setDestination(12705U);
    msg.setDestinationEntity(158U);
    msg.cell_position = 0.9149724848347447;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6713655875396908;
    tmp_msg_0.amp = 0.9052718638025192;
    tmp_msg_0.cor = 123U;
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
    msg.setTimeStamp(0.7882859838018641);
    msg.setSource(7756U);
    msg.setSourceEntity(246U);
    msg.setDestination(14121U);
    msg.setDestinationEntity(77U);
    msg.cell_position = 0.5817087314074678;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.940269102620564;
    tmp_msg_0.amp = 0.3533121784189942;
    tmp_msg_0.cor = 95U;
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
    msg.setTimeStamp(0.8152215952829788);
    msg.setSource(46684U);
    msg.setSourceEntity(4U);
    msg.setDestination(37955U);
    msg.setDestinationEntity(37U);
    msg.vel = 0.6908786541641552;
    msg.amp = 0.24820518121231216;
    msg.cor = 191U;

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
    msg.setTimeStamp(0.14196316906525275);
    msg.setSource(41172U);
    msg.setSourceEntity(230U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(55U);
    msg.vel = 0.1692340358760862;
    msg.amp = 0.1514308869871117;
    msg.cor = 150U;

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
    msg.setTimeStamp(0.5532453266876991);
    msg.setSource(23861U);
    msg.setSourceEntity(229U);
    msg.setDestination(38562U);
    msg.setDestinationEntity(26U);
    msg.vel = 0.27779882020522084;
    msg.amp = 0.30406713106626615;
    msg.cor = 105U;

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
    msg.setTimeStamp(0.5962036621697187);
    msg.setSource(12010U);
    msg.setSourceEntity(159U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(140U);
    msg.value = 0.046432997670717735;

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
    msg.setTimeStamp(0.8583255493757217);
    msg.setSource(60063U);
    msg.setSourceEntity(237U);
    msg.setDestination(30297U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5503703532066935;

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
    msg.setTimeStamp(0.6155176652224256);
    msg.setSource(53644U);
    msg.setSourceEntity(140U);
    msg.setDestination(29682U);
    msg.setDestinationEntity(19U);
    msg.value = 0.30813904938003944;

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
    msg.setTimeStamp(0.31578408981366446);
    msg.setSource(2104U);
    msg.setSourceEntity(23U);
    msg.setDestination(37027U);
    msg.setDestinationEntity(171U);
    msg.sig_wave_height_hm0 = 0.16554220886515603;
    msg.wave_peak_direction = 0.44802300898452374;
    msg.wave_peak_period = 0.7734243852817669;
    msg.wave_height_wind_hm0 = 0.027225716115462317;
    msg.wave_height_swell_hm0 = 0.5083604722740481;
    msg.wave_peak_period_wind = 0.21294632362893184;
    msg.wave_peak_period_swell = 0.18942665624605104;
    msg.wave_peak_direction_wind = 0.16277690064231398;
    msg.wave_peak_direction_swell = 0.8076628999251023;
    msg.wave_mean_direction = 0.4580940849223174;
    msg.wave_mean_period_tm02 = 0.11679020439835663;
    msg.wave_height_hmax = 0.19440360508293675;
    msg.wave_height_crest = 0.7550219007273923;
    msg.wave_height_trough = 0.23400008611593215;
    msg.wave_period_tmax = 0.26310140557688355;
    msg.wave_period_tz = 0.5908877872306942;
    msg.significant_wave_height_h1_3 = 0.7299089132300749;
    msg.mean_spreading_angle = 0.09978253505995871;
    msg.first_order_spread = 0.6767977029523987;
    msg.long_crestedness_parameters = 0.775151475997265;
    msg.heading = 0.32163283565594036;
    msg.pitch = 0.6863098218653743;
    msg.roll = 0.7436925212571744;
    msg.external_heading = 0.08974260980159099;
    msg.stdev_heading = 0.5610185768427232;
    msg.stdev_pitch = 0.42692591720332396;
    msg.stdev_roll = 0.25900853456378514;

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
    msg.setTimeStamp(0.5176273948113538);
    msg.setSource(38331U);
    msg.setSourceEntity(209U);
    msg.setDestination(61216U);
    msg.setDestinationEntity(119U);
    msg.sig_wave_height_hm0 = 0.258045503958642;
    msg.wave_peak_direction = 0.9540986840659806;
    msg.wave_peak_period = 0.5779217854130021;
    msg.wave_height_wind_hm0 = 0.25704724117569633;
    msg.wave_height_swell_hm0 = 0.20760194565374301;
    msg.wave_peak_period_wind = 0.19490501370200042;
    msg.wave_peak_period_swell = 0.8030858661322656;
    msg.wave_peak_direction_wind = 0.5728483537772264;
    msg.wave_peak_direction_swell = 0.07079589953315146;
    msg.wave_mean_direction = 0.10235212506326885;
    msg.wave_mean_period_tm02 = 0.2839268105076592;
    msg.wave_height_hmax = 0.2232908345958533;
    msg.wave_height_crest = 0.41343336604395164;
    msg.wave_height_trough = 0.016465016151767986;
    msg.wave_period_tmax = 0.05290790908043774;
    msg.wave_period_tz = 0.06942919950901882;
    msg.significant_wave_height_h1_3 = 0.8131115510966729;
    msg.mean_spreading_angle = 0.11738067380672113;
    msg.first_order_spread = 0.8054968030194417;
    msg.long_crestedness_parameters = 0.5046531278517234;
    msg.heading = 0.15551715912486297;
    msg.pitch = 0.7148148701508238;
    msg.roll = 0.7053607347315018;
    msg.external_heading = 0.9348238540393664;
    msg.stdev_heading = 0.5813986934083816;
    msg.stdev_pitch = 0.4292058704727807;
    msg.stdev_roll = 0.8682146973232273;

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
    msg.setTimeStamp(0.33359625847585106);
    msg.setSource(2983U);
    msg.setSourceEntity(133U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(113U);
    msg.sig_wave_height_hm0 = 0.4039547348248784;
    msg.wave_peak_direction = 0.42554885648075036;
    msg.wave_peak_period = 0.45459963366873546;
    msg.wave_height_wind_hm0 = 0.8457496056244349;
    msg.wave_height_swell_hm0 = 0.25371525622429425;
    msg.wave_peak_period_wind = 0.8231570343422845;
    msg.wave_peak_period_swell = 0.9923906135196763;
    msg.wave_peak_direction_wind = 0.4390011346193633;
    msg.wave_peak_direction_swell = 0.010727042053047975;
    msg.wave_mean_direction = 0.5203642217310579;
    msg.wave_mean_period_tm02 = 0.7308346900049929;
    msg.wave_height_hmax = 0.9960476182575057;
    msg.wave_height_crest = 0.20117183515004988;
    msg.wave_height_trough = 0.06842221099615953;
    msg.wave_period_tmax = 0.4624165977024205;
    msg.wave_period_tz = 0.2927873441223151;
    msg.significant_wave_height_h1_3 = 0.6918304721021368;
    msg.mean_spreading_angle = 0.11016682089331498;
    msg.first_order_spread = 0.5731581408457187;
    msg.long_crestedness_parameters = 0.8947968447281448;
    msg.heading = 0.6249522713507318;
    msg.pitch = 0.43400173811916976;
    msg.roll = 0.5860543928157769;
    msg.external_heading = 0.30734747648540095;
    msg.stdev_heading = 0.5137927459346234;
    msg.stdev_pitch = 0.5146414564826827;
    msg.stdev_roll = 0.11128913428967224;

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
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.385781492136138);
    msg.setSource(35207U);
    msg.setSourceEntity(102U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(240U);
    msg.value = 0.19653093479610573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.06344556878304564);
    msg.setSource(10037U);
    msg.setSourceEntity(23U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(176U);
    msg.value = 0.6875447224805734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.5411100275477514);
    msg.setSource(16609U);
    msg.setSourceEntity(252U);
    msg.setDestination(8218U);
    msg.setDestinationEntity(49U);
    msg.value = 0.36895422372072684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #2", msg == *msg_d);
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
    msg.setTimeStamp(0.24275702443339053);
    msg.setSource(60341U);
    msg.setSourceEntity(222U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(253U);
    msg.name.assign("GGFBAZTGTJALOGDRIMCXBNPYVTVCKBUJPWMMYJCSSXOODFXVWAWQNTMUVQZBAUSJYFYRFJWOYAVLZQBGKNSJOJGDOSIQIPUBCRHBACESPEKGDEYETOXUUFIGHEMWVSMPKHKZFLIHPEWRAAZEVTTPQMPCJZMQCBFKCERIJLXVLDPNULEYZLXLUMWCNWOUQVRJNBKGHXYKQDATYTOXBDVRHFDOZZKQNHZXDGSLWPINIDFTXYEHLSUWNQHRFNICH");
    msg.value = 85U;

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
    msg.setTimeStamp(0.4873606794211065);
    msg.setSource(10960U);
    msg.setSourceEntity(242U);
    msg.setDestination(56500U);
    msg.setDestinationEntity(194U);
    msg.name.assign("VUGVQNXHSJNGYWYGTOFKTUYDAQRGBRBNWQAYJRJOKJAMSHWKMHRCXLMRAPNUQQHSPUWNSVVLBFVIMZUSBABJSKPCTYXQDFVBYSIZKWIZLKXTB");
    msg.value = 105U;

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
    msg.setTimeStamp(0.8756733675985822);
    msg.setSource(57453U);
    msg.setSourceEntity(217U);
    msg.setDestination(32332U);
    msg.setDestinationEntity(18U);
    msg.name.assign("DNNOHHHCSPLIRJHYZGLAACJSOGXGHEKXTBDSUTXQUWAKQPRQQWBLPNYWANMOZXPVFQKAIMKLHVDGPSCXXLENBTOERUJZYTWECNNEJVWWJPRTCVMRKMZDVFYGOHUBJFAPYVVISEMTQSAARTBSPOLQHKVWNZGIYCFVUAKLMFJLJUBUBWJYDRNIIPUMKBCMKFXIDBFIAPHZYVRJDELZDEBICUDSXRZYRDQTEZHNWGXYFLFQOWMGOC");
    msg.value = 63U;

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
    msg.setTimeStamp(0.45085125858415054);
    msg.setSource(43215U);
    msg.setSourceEntity(196U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(107U);
    msg.name.assign("ZEXCXHKHDUJPZVVVQISXWNALUOAQLZWHMEOQFLGQBRQZY");

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
    msg.setTimeStamp(0.9058979796717221);
    msg.setSource(3773U);
    msg.setSourceEntity(128U);
    msg.setDestination(63414U);
    msg.setDestinationEntity(213U);
    msg.name.assign("YMYGLUCZXQMSNWFZVJQFUVELTMTWPHLQUWFJJBQZGCMWBPLTWSHBNUDEBICIMKFHJZJEMXZRWDQAICJDXHUQMLKVDRSMHTAZSVRIETGKYPVEDXXKDNGVQSYKERJACPVFMXPYBPLAPEOLGTDTHNNOHBKIRYPY");

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
    msg.setTimeStamp(0.24395166765417076);
    msg.setSource(57845U);
    msg.setSourceEntity(29U);
    msg.setDestination(62386U);
    msg.setDestinationEntity(106U);
    msg.name.assign("JZWQVFTRQHUODSOXLAGAIUXQLNPNOFTCMHELHNQIQOKGZTHZIHBQWWWRRFSEGOJYEFXVXKUJSKUZBQZTYA");

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
    msg.setTimeStamp(0.3078545234509482);
    msg.setSource(28412U);
    msg.setSourceEntity(11U);
    msg.setDestination(40037U);
    msg.setDestinationEntity(234U);
    msg.name.assign("DTAATFEXLMHZYSHLJNRHUHQDBKIOXJHQKBNYFEYGXOVMMVUZWVOUFCZOQNR");
    msg.value = 52U;

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
    msg.setTimeStamp(0.017843334769920727);
    msg.setSource(36320U);
    msg.setSourceEntity(14U);
    msg.setDestination(18818U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ZQRSDMXJMTNGZHRSCGPVOSTCWIRFXLDYDMPPMDHALCGQXFIYSVUKBVNLOZICDNNVJXXLECZYFWQHDFTHWOTBCPHYUEUMPKLRYKFYUBAPEKRBWATERUWXBQNMNZRBQQSIGQTZXNFK");
    msg.value = 59U;

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
    msg.setTimeStamp(0.32636082644580455);
    msg.setSource(35554U);
    msg.setSourceEntity(148U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(218U);
    msg.name.assign("XYNQBUVSIEXGEVPOMRHUSIBOOOHSWMCIQEQMHZGMFBEEEFLUHUMDIIJZSWSANHTNBLDUPARODG");
    msg.value = 61U;

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
    msg.setTimeStamp(0.6380703198386878);
    msg.setSource(4419U);
    msg.setSourceEntity(217U);
    msg.setDestination(20655U);
    msg.setDestinationEntity(15U);
    msg.value = 0.999264127571008;

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
    msg.setTimeStamp(0.4211541046356362);
    msg.setSource(33378U);
    msg.setSourceEntity(136U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6760768610040043;

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
    msg.setTimeStamp(0.2726166020571441);
    msg.setSource(2890U);
    msg.setSourceEntity(133U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(121U);
    msg.value = 0.36219458565466034;

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
    msg.setTimeStamp(0.4442534062661858);
    msg.setSource(61072U);
    msg.setSourceEntity(122U);
    msg.setDestination(10365U);
    msg.setDestinationEntity(60U);
    msg.value = 0.3037927832351556;

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
    msg.setTimeStamp(0.3028743950856023);
    msg.setSource(50925U);
    msg.setSourceEntity(243U);
    msg.setDestination(18109U);
    msg.setDestinationEntity(97U);
    msg.value = 0.16270479656047332;

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
    msg.setTimeStamp(0.5752180771042393);
    msg.setSource(22555U);
    msg.setSourceEntity(89U);
    msg.setDestination(18858U);
    msg.setDestinationEntity(185U);
    msg.value = 0.5644388760853739;

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
    msg.setTimeStamp(0.9901853811831364);
    msg.setSource(44258U);
    msg.setSourceEntity(233U);
    msg.setDestination(3692U);
    msg.setDestinationEntity(95U);
    msg.value = 0.09035291256049038;

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
    msg.setTimeStamp(0.7473136805105766);
    msg.setSource(64764U);
    msg.setSourceEntity(105U);
    msg.setDestination(13243U);
    msg.setDestinationEntity(168U);
    msg.value = 0.3847608283579078;

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
    msg.setTimeStamp(0.4660211930582845);
    msg.setSource(4273U);
    msg.setSourceEntity(46U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7025663407454636;

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
    msg.setTimeStamp(0.7294060765673205);
    msg.setSource(26079U);
    msg.setSourceEntity(222U);
    msg.setDestination(9184U);
    msg.setDestinationEntity(214U);
    msg.restriction = 162U;
    msg.reason.assign("HRAUFRZBPYKAOBGZHWIZGWBXEDHMLVTHGBSGYZEIRHOPOLXOCLAFAUNKKRIQNUXVKTMEPGBJFLZUMRMGQWSCVWDJWTCVQGSSCSVDROCAMEVLVCFUNKZENON");

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
    msg.setTimeStamp(0.6943684613915322);
    msg.setSource(44732U);
    msg.setSourceEntity(80U);
    msg.setDestination(17573U);
    msg.setDestinationEntity(1U);
    msg.restriction = 66U;
    msg.reason.assign("ZONUPYQGQYBEMBWKYHNWEJUEJDBSVAIDPUXHUAMZNYWIDSANHGHLIBMTDVBEVOEQGBDCMFHJKCSEGLQAUMPJUVAGHOQBGCMPDMWOYARYGTRSSWDJPRVMXKJOICAVHLSXZUVHRXYZZOKRKTDPOKZIHUZCKAOCRFSXPMMSYLBDCPJUIJQITLZXIPKTAQTLVDUCO");

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
    msg.setTimeStamp(0.17542598997682457);
    msg.setSource(13644U);
    msg.setSourceEntity(161U);
    msg.setDestination(53800U);
    msg.setDestinationEntity(171U);
    msg.restriction = 136U;
    msg.reason.assign("JLOWQHIIUEEDUNFDTUDHPESHVSXIFPMJHSJBFXAKXGDHRYNTGQYSAIRNNERZFEWZRJGQCADXKJYJVKTILTWAGLFYMLKAUXQNWBAMMKBLDWMUEFGJOLGHCBRZWPQWCZPCOBCVNYBRQETHSLZXFKBFIDMXRSCPMSOCCLYVEZQIW");

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
    msg.setTimeStamp(0.9337913778815542);
    msg.setSource(36140U);
    msg.setSourceEntity(33U);
    msg.setDestination(44114U);
    msg.setDestinationEntity(140U);
    msg.op = 247U;
    msg.request_id = 2441123746U;
    msg.entity_name.assign("TGLNRWMPYVCLCVIVXOLLGVWCSKHKRBUSAAQURJQXGSEJJNISSEYCRGRGXSMWEPBXXPQFJDOJMTFKIYUYVZLIHDHFUPPTSCHOFAWMMENLNDAHPOFFLGRWBJXAYJKZNOCXRUOAXJEPXSDMLLGWI");

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
    msg.setTimeStamp(0.7785898562622813);
    msg.setSource(57257U);
    msg.setSourceEntity(160U);
    msg.setDestination(64439U);
    msg.setDestinationEntity(199U);
    msg.op = 9U;
    msg.request_id = 738872523U;
    msg.entity_name.assign("QCTYVIWVYOOWEAIZNWJBPUMPDCFLGGFSVRTDMBJUEVOKUXXSLDKQQFUFOXGKUXEGEBUIAWQLZHSEXVCOHMHKLRRUAQAYKLYKISIZPZTLRNRNXRUBDTCYPFOGVWOGTZVPLMHJJPRAVCBESKOTWPCMFCGPQZKHNMQWWDDTFNVMXNKBFLKRAPMLHOVIYTGYIFJJFHYEGSDEQXEIQIGCDNZXSCAOPYSLWJRTAMUHHAYUMXHBBZTJA");

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
    msg.setTimeStamp(0.5295991147334135);
    msg.setSource(23965U);
    msg.setSourceEntity(127U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(11U);
    msg.op = 39U;
    msg.request_id = 3066247357U;
    msg.entity_name.assign("RGAABUQXWXIGSTDWGSEVPYVYUOZSVTVLPUCUCDHGZNRVLFTYIFECPJWHSWOGQOEZEPRZSUIHPFHWMIJLNBSPJUTOAMJMQRBGDEXXMDBKLZLRILBMTYNHAQYLNHALFQRNZBUJXDHIHBWVUBQTNHBKCZMSNJKCTFVKYTPZOYVNSRJEYQFEFTKPJUGCOTXVXIXNASVEKUKKWWWOCDFMGA");

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
    msg.setTimeStamp(0.06073977583177237);
    msg.setSource(12896U);
    msg.setSourceEntity(210U);
    msg.setDestination(5920U);
    msg.setDestinationEntity(86U);
    msg.name.assign("SYJTJEBGTRQKGQKSEFEPPTPGB");
    msg.type = 62U;
    msg.default_value.assign("WIXIXHYMSOZHDSERPSCVTQTBWFANJHQGLJDNLIBFNMWSZJSLWRDOEZOBCFKNBEAVUESGEZHAURDKURTTWSQ");
    msg.units.assign("GWTGZKATXCHMPJZIDXTXVJNXSPPXKOUQRALGTMMQXEFALOSRHPRUPBAQKTROUFEFAFYU");
    msg.description.assign("LTLXRIVULWAVANGCMATVXKXLLAELXAIYUJWNZKSZIBYFAHGHOYQEMLJSVKTBQUDSEF");
    msg.values_list.assign("KJDQMCENFRKOLOLOCVGLHBFXMKMHJRAWDGLM");
    msg.min_value = 0.5782869894432071;
    msg.max_value = 0.6297790084017214;
    msg.list_min_size = 211U;
    msg.list_max_size = 130U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("PHKDNLNNJSKFNGWWITYNSVABPJNGYTVGXKFGGDUSYZXEDTFUBHGQWEVWVFPDMZQYBZQVONLOEWVEPRISZPGBTWXQWTJCZASAJEQKFDAJUHJXEKGYQLCYIKXPAMLEAOIRPOXUBFRSNHYCHIGBZRSICFJDYOTMCTUBAOJVQZBWVXJMQQZTOARCHRKBLLSZNYKTPNUUXQLFDCFULRYMIMRLBOHZHCHMOLIMUKEATJMARPWDXPUVRICWXSSVME");
    tmp_msg_0.value.assign("RADXECRMNRYLQZQHEZTDUCIBEHVWXIAUQGDYHHXTHZFTVVFSXYMTI");
    tmp_msg_0.values_list.assign("SWVXRETRFHDNSEVFMXOTAPLOZFUYZVAHQXXWUAMSMJWQQVJJHD");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 254U;
    msg.scope = 98U;

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
    msg.setTimeStamp(0.2727005595619074);
    msg.setSource(56812U);
    msg.setSourceEntity(249U);
    msg.setDestination(42390U);
    msg.setDestinationEntity(166U);
    msg.name.assign("RLQDCWKEBFULECQBCOJGIUUOYAEQIPLRHUHAYPMYOKWTEXRQZJTWTHXUBSCUCOQMKRCSTBAIDWGVQASDDZZMZBNMPWTESLLQIAGGIDPUCSJVSJSVHLPXXXVEPGLIFWQJNIXBJQYHCIAXRLNAOXZVNOPZFTHKFEOYMOVSBRDFDKYNHRMGVEJDKZVLTXNTQMKZNDHMGFWPGSPKWFBFJKIHFPFUWCYNOX");
    msg.type = 39U;
    msg.default_value.assign("NMSIMIOQXHOPAFHVRUJVMDEFWEUTVQKUFAOKXRUXEKJAKLBDVFTGCNZMRDCVZKJHGTOFGCZAWBPWNJTQOHZDITBQCKSZEEUCYCGCHE");
    msg.units.assign("QCUGJEUFRHMFXQTYEFHRRQIDKIGNDJHRJRGABFCMEQJWSPFCDAPSCMUIGADANFPHUZWVKVHUWZJPOZKRDIAHWWQOKZRRGNHXCVYIWWNOLMYZETBNMOXLQFIUOBDDXASTFMQUTVVKAJPYXWELOQCBXZOIYXYEPITEOZKTADPSVRYNNXLBQFKVGMBZLEPSRGXKVBYBEHSBMNPCS");
    msg.description.assign("FCSKZABUDPACWVBDXHSIXLWEGCBQCCXBMLWADPFLVBHKVIMXWKEUHZCJOR");
    msg.values_list.assign("RIBZIRYZSBQXVALNPVUIEQWAXFWFNAQBUJTQLCRJLYWRHTKSFCEBVUVRYTHLDKKESLEWYOKOICYFTZNVDTUSUAODMZFWVZWZCAMJVEDUTDSNICLFRVPECXHMOEPLAHOPJRFFSUTTNQMGYMOWMJMPNNZIGQROPHKKYGJQYSTLVNQPYEGCNDXUDXCBPSHKAAKLMWSMGGWUXEXLRHCPQGHGOIYOKIXBFBFJBDNOHZS");
    msg.min_value = 0.21248947819338715;
    msg.max_value = 0.5995913294560239;
    msg.list_min_size = 161U;
    msg.list_max_size = 242U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("QVIKJTRWNYQNFHSJJIVHVDMLDHXAXTNVOMRYJTIIGOXFEXEHANEYKICJELUXWTJWERNYQVBQQHLKTYPYZOKCGDBZVUMSSRGONWFARGNBVQUHGMAKDOZZKOJLSVFQMZQEQBGMDDRPXYZ");
    tmp_msg_0.value.assign("KWZWLAGKRYMAJBVHFAUKKMFSOMGWIQQAIEJJUQUGRMKTRIPSZGXRXWHQQRZWDTFCVPDOZQXAUZQVINGSDUBVKOEYCEPULPBSOTWACDBTZXHFFEPVFMTOCGVMLHINZRWBEGOMJGBFXPYLRLXPNNICPLZYISFUHDDXEXSOJQMYNOHPJDEXSIV");
    tmp_msg_0.values_list.assign("WFFKCYKGMHQRCQJHVVRMVGUUPAIRUPDNBCHVXTQLEDACDZXR");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 106U;
    msg.scope = 125U;

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
    msg.setTimeStamp(0.19995400201538105);
    msg.setSource(51600U);
    msg.setSourceEntity(64U);
    msg.setDestination(7841U);
    msg.setDestinationEntity(126U);
    msg.name.assign("CIWESPLQTYUJIGBFOKDJLMYHWYOCUGLTQIDCACHMJLKHHNKUISQSDJAJJHTHPFBNGXZRKIDILEVBTM");
    msg.type = 197U;
    msg.default_value.assign("GMUMFOXVWFIMRUQWPPZNWDYSREH");
    msg.units.assign("FVLCLKGQTBNGQGXUSVCOTOXYMMIDOMYHMYDEVCGOFTOKQYS");
    msg.description.assign("LKIHKMDODDBDFSGYYNLMRKXYFPXONYCKIMCOMDBBRCZVIMXGLZJZOGWXHTQWUGXSBYHHAJELDICKRGZPUSIBTAQWPXJXNNWZ");
    msg.values_list.assign("FTTBPGGIWEKFZEYMMXYKUUSEQWXHCQENOEBIYJPTNVFRQIZABMBVLSATJQXFHTFZMMANPWTFOJXCXXDKUBIYZPSRXNVJCGWSZGMULEWOMKLVJVDKRHDBRELRFYOJARHJZCVOZAAMLQYXGTUMVCBSKFRIJNDLDE");
    msg.min_value = 0.10816142052987487;
    msg.max_value = 0.8667466204876823;
    msg.list_min_size = 149U;
    msg.list_max_size = 135U;
    msg.visibility = 74U;
    msg.scope = 251U;

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
    msg.setTimeStamp(0.1964381722800711);
    msg.setSource(54553U);
    msg.setSourceEntity(32U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(19U);
    msg.param.assign("QDLJBXJMOTWWKRMDZBTSNSGCNSEVVNGMXXAIRUJDHOELXAFOYPKGFROXOURUDYJBFHUJVXVWLPNKAQOEYIZPEVW");
    msg.value.assign("TIQPIQKUVVFCFYWNPEYSUQZWIOCJWYNYBFJUHDNZXAUKNIJILZRRVOPGPBMWJZVGMHWCSDTNQWJDMISAFLRFXKVGPBQCRIHFSL");
    msg.values_list.assign("HNQZKALNFAISPYGUUVQBKXEBOVBVZPXNTCDZYLTFNOJHBMYSADXMCPZEKLFKTIRSQZIEVXLXJMUHXNSXGURMLYJWQLGAWDVYIDFPCMAQONPIHIJTSZUWGGAUAEMBJGLMOOWLUJRECQQHPH");

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
    msg.setTimeStamp(0.3095015657158935);
    msg.setSource(4364U);
    msg.setSourceEntity(224U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(142U);
    msg.param.assign("HEEMYUAIOSOSGPGQLFXHRUKRWYBJIIOKDFNVQYBWZVRJOBFMDSKUOCILYZWRPVEMTQXRKPYHFEJHMZJXEENXPXZAQHVOKLVPIVAFPLILHGWUZWPPSCSGCBUDOVWTKRYDHBVONSHHNACLAGTDHDBBNKQSZAGUEUFKLTJWRLYICVPFOAAUMBURCFJXDZENCC");
    msg.value.assign("DNIXXLMUERMZJUCLFGX");
    msg.values_list.assign("QTCPNZJCZNDVVJJLUHQMJPDUFDIUUIJPTZCLYWUKFJSYQHIOPWZVLOERWPKT");

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
    msg.setTimeStamp(0.4246074976787838);
    msg.setSource(20807U);
    msg.setSourceEntity(173U);
    msg.setDestination(42561U);
    msg.setDestinationEntity(21U);
    msg.param.assign("VAOAHEIMYDTKORISDDBUAXIOEZIMCYNTOKFYXBEFGISORGFKWLAPCJFIAMXRGVFNVCVWQDPZWOEHCJHSAAGNVKLZFTPYSWYNJAFFRXKUCULAWTKLCGGH");
    msg.value.assign("NRHBPGDQKNCNKHBKXOTSRGYUIAYOWTNXCDVZPFXMOQQDVSEPDJJMJAAOINBDOLWQFHJVXERQGSKVFUIRXWLHVIUJZIYBNCMKHWMHNZVTFURUPEOXIUAUCZPDSPRNLVZEUHAGGKIVXKYTFBLGHAR");
    msg.values_list.assign("RCBKANTZOFXQHVCHBMEGSDQGUPEPXFSXGLPHIOJHWIITTUYXVFODVCKLZCPSTAUKVWAOLWIJJQWLNNUUMEDXOUYLCBZCBQMOGWVBEKNNQXCORJJTEFDCERDZQXPGRYHNEDRAOMSADAMMHREITLHTFTRKPBLYSNQTSHENWJWQRHJUIJYYMZZAIXAPAPBUDSVGIIJYGYOVLPRHYVCAUEKLFFMBKZKNWZSNWPVGTDWXZIJBRGLBQFGYUCOK");

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
    msg.setTimeStamp(0.3700992802021139);
    msg.setSource(31476U);
    msg.setSourceEntity(32U);
    msg.setDestination(18454U);
    msg.setDestinationEntity(48U);
    msg.op = 159U;
    msg.version.assign("BHNPWQKPADKRLSCBFFYFFZUSYCKVHXSAGAEHVEGPBIZTPCWRLUXYKNMUJUAOIHENVKBLWXM");
    msg.description.assign("QMNHLLBLICTCUPEQETBBUSXOZVKRABMFDDNTEEAPMXGJKNSYRXSMYEFZOKZYUJDBIVLBPBQNJYSOKXRVNJZEXKNRZKWVHEOAQLWAUPFVJDZIHVSEGQENTUVGBIKWRCOBJZCDDJNYI");

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
    msg.setTimeStamp(0.8185221794348909);
    msg.setSource(25810U);
    msg.setSourceEntity(156U);
    msg.setDestination(65296U);
    msg.setDestinationEntity(89U);
    msg.op = 139U;
    msg.version.assign("ZJJEAGOSHRKOXGUIOLPHIOGNWCLZKLJJMMGUEADGYNKHYQQEGOANMYNGFDSGYXHUNMDUPSKILQKDYDDMTLAKTOCCWVFURAWQBBYZWBCHTJGMQEWXBICBRZFCSONIKHXZMRUSEYZFQZQAFEREBMPLAVNWXSNCUITPAPSDVHPQHBRXVCUERPTJWQJEJCDMLIWLVXKIC");
    msg.description.assign("HQKNRBHMVQDVKBEDTYDAIPZLDLUMNIRPIHMKHCNZCELPQRLFFFOHTFUHMRMVMTBMFNBIYINTSWADXWJXKYYTHCOGOEGRNPLPWGSWACUGLNGEEZCRJGTAJ");

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
    msg.setTimeStamp(0.520441870495592);
    msg.setSource(31566U);
    msg.setSourceEntity(86U);
    msg.setDestination(33932U);
    msg.setDestinationEntity(84U);
    msg.op = 233U;
    msg.version.assign("FEKARBAREURPNSWUNZHWJDNTQKDGZBVFOSMQSDAJIQTLIWTMBXOVXJQXTOOTMCFFIZJYKZIESLRHZYHMVKIRMBRGSSLHXQGYPIXGRFGBOVGNFACWPYSLMBVWHTVEWUIQLCMCYYLNDJAXAIFIOCHYUUFXAYJWTM");
    msg.description.assign("YLBKFPRNDZADYUMEKGOJQDELSIQICNVXUYXLXTVSOHPOCZBNUTPEENJOBCSWGUWAHGDTQCRFDCIJRZN");

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
    msg.setTimeStamp(0.8115440524923333);
    msg.setSource(44995U);
    msg.setSourceEntity(245U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3608623775646699;

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
    msg.setTimeStamp(0.136710728028552);
    msg.setSource(17807U);
    msg.setSourceEntity(2U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(145U);
    msg.value = 0.18019643796576934;

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
    msg.setTimeStamp(0.4981937045794951);
    msg.setSource(55448U);
    msg.setSourceEntity(205U);
    msg.setDestination(923U);
    msg.setDestinationEntity(239U);
    msg.value = 0.24235164998882386;

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

  {
    IMC::BDI msg;
    msg.setTimeStamp(0.9942279142419683);
    msg.setSource(32746U);
    msg.setSourceEntity(87U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(9U);
    msg.soh = 12180;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BDI msg;
    msg.setTimeStamp(0.6663785459718258);
    msg.setSource(40963U);
    msg.setSourceEntity(149U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(30U);
    msg.soh = -7280;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BDI msg;
    msg.setTimeStamp(0.4990641055905769);
    msg.setSource(9685U);
    msg.setSourceEntity(17U);
    msg.setDestination(13976U);
    msg.setDestinationEntity(240U);
    msg.soh = -8145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BDI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.20895009457895153);
    msg.setSource(41913U);
    msg.setSourceEntity(107U);
    msg.setDestination(51687U);
    msg.setDestinationEntity(8U);
    msg.value.assign("MWEMUFUKXLKHMBSXVWJOGYHFYJOPYSBKEEXOKLFQTINNWOIMJNHRVAVTQTZDLJQRIXGXVDZSSDVTMLENRJWKBUYNGDKBATTYHXTGFHWPESFMQCSLYPNQVFRIJCRIYNCWAECOYPHZGIZUICNSDLUWGVMBFBSNLMHHDEVCIETLWIOLJSGAHRLVKHQMJODCFZMKPKOCTRXBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.3455001312050746);
    msg.setSource(64475U);
    msg.setSourceEntity(228U);
    msg.setDestination(34435U);
    msg.setDestinationEntity(219U);
    msg.value.assign("DSPXMCIYYWPAMDLRQGUMXYFVFLZPZPTVRYTLLKYOMBIRRWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.6999730856187467);
    msg.setSource(48323U);
    msg.setSourceEntity(194U);
    msg.setDestination(14521U);
    msg.setDestinationEntity(107U);
    msg.value.assign("OGITVZGMORRKWEBJISAVCIBSBUXRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AckMsg msg;
    msg.setTimeStamp(0.09182232365174359);
    msg.setSource(51054U);
    msg.setSourceEntity(13U);
    msg.setDestination(45782U);
    msg.setDestinationEntity(114U);
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4090588207U;
    tmp_msg_0.destination.assign("OEYJTXINABDDPIDHOCLATECFWKZVANJVZXJDXOGRKXUKQNPREMZHURNLFQXZVQUCSPOSMS");
    tmp_msg_0.timeout = 36682U;
    const signed char tmp_tmp_msg_0_0[] = {-72, 41, 122, -49, -65, -103, 74, 85, -112, -82, -60, -68, 23, -85, 116, 120, 82, -73, 82, 120, 3, 44, 120, 59, 71, -36, -54, 42, 23, 111, -105, 64, -110, -45, -77, 102, 93, 122, -20, -28, -95, 84, 113, 121, -128, -24, -60, -108, -75, -69, -64, 80, -96, 66, 38, -24, -125};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.original.set(tmp_msg_0);
    msg.text.assign("QZCOXMIDSBBKZWYWMSNXUQMYYFVJHKMNKWZKSTNFSAAYFWRXYLUUTCIJCHPJHVSKJQZQCXBYDYRQILUKDGXFUTQCDUEWGPEPFGHZJOVUPPRGOWUEDISDTCABBXBMPOWBRUTZYPGVJEKIRMCGSNFNGALFONSRTMQXREWENQHIKNRXAVHFOIMINZGHTQLOJLIMGRZBZBBQEK");
    msg.status = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AckMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AckMsg msg;
    msg.setTimeStamp(0.16433179085814098);
    msg.setSource(42587U);
    msg.setSourceEntity(188U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(22U);
    IMC::QueryTypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 132U;
    tmp_msg_0.request_id = 4019660688U;
    tmp_msg_0.entity_name.assign("VKPSYWCWDEOAMWHDUZHJRFXGWBKEERFHLMHGNVPDXMROPZODENZODQTUPPGZGCLEDV");
    msg.original.set(tmp_msg_0);
    msg.text.assign("ZODYKPCRJCBPLOYEBVYUTANGUDDLEUXCGBAMRSFDMTYVFOFVNQODHSTEJULFZBKJETPMNOGZZUZXPJOQIIAKXQATLPQMWUZOBUUMSQWIVKAJCWDNBIZRXPXHSRMGSOPVMCGQXITNRSWTZEWZACH");
    msg.status = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AckMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AckMsg msg;
    msg.setTimeStamp(0.44261491977514034);
    msg.setSource(55879U);
    msg.setSourceEntity(252U);
    msg.setDestination(50695U);
    msg.setDestinationEntity(174U);
    IMC::TotalHeading tmp_msg_0;
    tmp_msg_0.value = 0.9821297922619048;
    msg.original.set(tmp_msg_0);
    msg.text.assign("EURJCFXCMSMTKBSOEAZDRRIOACVYKMJTXJPBCUPIUCVKDPBJNFZSTSUPMLHLEAODEYTRNFSYXILSYZMFSXVQSVWFFLIIFHMZBJPPYQQWVLGKDOXAEEHCXBYMDJNQNOHQNJGCGVVCFNZHODPGSAJPWAWZLEWWXVADGUKHRNUMTWWWOJYEHBGUUEZLXRTTZNPIGXPGRFVMKKKUDQHXAQQAHFLGNYVCIOSBIORGOJZD");
    msg.status = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AckMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.8820503381368828);
    msg.setSource(48404U);
    msg.setSourceEntity(47U);
    msg.setDestination(46251U);
    msg.setDestinationEntity(125U);
    msg.op = 179U;
    msg.pack_idx = 149U;
    msg.sbs_register = 35U;
    const signed char tmp_msg_0[] = {-85, 122, -82, 121, -21, 107, 113, -6, -22, 39, -56, -96, 46, 126, -77, 117, -41, 68, 13, 120, -110, -72, 45, -32, -127, -126, -24, 111, 112, -76, 115, -84, -87, 39, 78, 74, -112, 21, -58, -28, -5, 34, -108, 16, 18, 107, -75, 55, 80, 39, -1, -106, -71, -39, -74, -40, 44, -13, -120, 108, -99, -36, -89, 91, -35, 90, -54, 6, -38, 87, -2, -76, 13, -95, -62, -123, 101, -123, 119, 70, -7, -80, -22, -2, 46, 25, 77, -27, -72, -29, -65, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.7956969981021658);
    msg.setSource(34399U);
    msg.setSourceEntity(236U);
    msg.setDestination(57502U);
    msg.setDestinationEntity(159U);
    msg.op = 145U;
    msg.pack_idx = 172U;
    msg.sbs_register = 137U;
    const signed char tmp_msg_0[] = {-29, -82, -13, 103, 100, 96, 99, 97, 3, 115, 22, -73, 61, -76, 114, -91, 100, 34, -53, -62, -118, -51, 120, -29, -51, 78, -41, -122, 117, -109, 103, -57, 24, -127, -15, -97, -87, -123, 109, 85, -121, 117, 119, 124, 55, 31, -80, -125, 76, -64, -117, -123, 32, -37, -87, 70, -11, 46, -62, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryBmsData msg;
    msg.setTimeStamp(0.17037210271071646);
    msg.setSource(12285U);
    msg.setSourceEntity(117U);
    msg.setDestination(10716U);
    msg.setDestinationEntity(246U);
    msg.op = 181U;
    msg.pack_idx = 229U;
    msg.sbs_register = 176U;
    const signed char tmp_msg_0[] = {-98, -53, -61, -40, -69, 19, 68, 99, 25, 68, -65, -100, -25, -98, -96, 92, 97, 119, 48, 18, -90, -27, -11, -15, -59, -95, -105, 120, -76, -96, 6, 22, 13, 34, -101, -84, -51, 2, 86, 22, 87, 5, 45, -47, 26, -95, -121, -30, -61, -102, 101, 27, -69, -100, -15, -30, -61, 63, -59, -90, 4, -53, 101, 80, -48, -121, -92, 73, -15, -13, -14, 94, -32, -98, -127, -19, -115, -64, 64, -42, -22, -58, -116, 50, 31, -50, 121, -118, -109, 47, 53, -1, -17, 121, 52, -80, -87, 12, -7, 12, 123, -35, -126, -67, 0, -94, 101, 19, -3, 46, -112, 112, 57, 125, 38, 28, 17, 3, -14, -109, -121, 29, -41, -66, 73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryBmsData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.28868147798812926);
    msg.setSource(65350U);
    msg.setSourceEntity(251U);
    msg.setDestination(60652U);
    msg.setDestinationEntity(134U);
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.3719846794673606;
    msg.original.set(tmp_msg_0);
    msg.req_status = 230U;
    msg.pack_idx = 236U;
    msg.temperature = 0.7213683132167298;
    msg.voltage = 0.24402259361172796;
    msg.current = 0.2501694904699928;
    msg.rsoc = 78U;
    msg.asoc = 94U;
    msg.soh = 158U;
    msg.remaining_capacity = 4915U;
    msg.full_charge_capacity = 11256U;
    msg.cycle_count = 29154U;
    msg.time_to_empty = 62805U;
    msg.time_to_full = 8157U;
    msg.battery_status = 34579U;
    msg.serial_number = 50247U;
    msg.fet_status = 7755U;
    msg.safety_status = 3139785828U;
    msg.pf_status = 2886379199U;
    msg.operation_status = 3181190629U;
    msg.charging_status = 11212U;
    msg.gauging_status = 59123U;
    IMC::BmsRegister tmp_msg_1;
    tmp_msg_1.reg = 129U;
    const signed char tmp_tmp_msg_1_0[] = {-54, 58, 32, -15, 40, -81, 67, 63, 95, 121, 117, 108, 28, 24, -119, 84, -99, 90, 51, 47, 38, -49, 30, -98, 5, 3, 48, 94, 22, -5, 106, -40, 17, 68, 41, 17, -44, 18, -44, 122, 57, -74, 98, 17, 118, -45, 53, -21, 121, 101, -76, -113, 31, -46, -75, 70, 124, 10, -20, 49, -93, -75, 47, -70, 56, -17, -34, -82, 111, -110, 50, -70, -47};
    tmp_msg_1.value.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.registers.push_back(tmp_msg_1);
    const signed char tmp_msg_2[] = {21, -2, 1, 122, 67, 27, 121, -8, 100, -11, 71, 10, -78, 121, -119, -63, -56, -12, -56, -102, -26, -82, -114, 50, 126, -126, 55, -47, 64, -91, 26, -2, -126, 9, -95, -28, -76, 34, 13, 21, 26, 87, -67, 19, -127, 77, -27, -12, 22, -61, 31, -118, 87, -92, 73, -86, -72, -19, -3, -36, 66, -68, 70, -52, 12, -117, 100, -22, 5, -15, 77, 102, 3, -56, -77, 113, -55, -61, 114, 93, 15, -92, -7, -58, -58, -83, 86, 77, 46, -96, 36, 13, 16, 68, -7, -92, 109, 89, -23, -77, -13, 88, 65, 43, -96, -9, 120, 93, 16, 71, -109, -58, -86, -82, 51, -97, 116, 35, 119, 89, -50, -76, -34, 0, -70, -27, 37, 6, 117, -4, 54, 104, 81, 110, 124, 10, -70, -40, 24, 52, -35, 27, 39, 89, 105, 2, 36, -76, -14, 33, -51, -111, 97, 60, -57, -11, 22, 115, 62, -8, 2, -75, -24, 17, -19, -127, 16, -78, -9, 42, 97, -24, 6, 69, -109, -90, 62, 45, -32, -19, -43, 46, -85, -29, -117, 11, 48, 7, -87, 4, -61, 113, -59, 98, 59, -86, -103, 30, -112, -111, 84, -16, -69, 62, 49, -72, -69, -96, -74, 126, 2, 126, 70, 8, -85, -73, 43, -40, -62, 10, -57, 0, -10, -44, 73, -5, -33, 59, -104, 91, -30, 60, -91, 79, -55, -107, -48, -118, -84, -73, -73, 97};
    msg.data.assign(tmp_msg_2, tmp_msg_2 + sizeof(tmp_msg_2));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.32540752589831534);
    msg.setSource(62512U);
    msg.setSourceEntity(242U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(253U);
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.14929999544872474;
    tmp_msg_0.i = 0.31486310861730726;
    tmp_msg_0.d = 0.14563237980376054;
    tmp_msg_0.a = 0.23567644825892153;
    msg.original.set(tmp_msg_0);
    msg.req_status = 23U;
    msg.pack_idx = 189U;
    msg.temperature = 0.25243294318871556;
    msg.voltage = 0.6921823295528996;
    msg.current = 0.36982303535432426;
    msg.rsoc = 43U;
    msg.asoc = 74U;
    msg.soh = 36U;
    msg.remaining_capacity = 4597U;
    msg.full_charge_capacity = 44618U;
    msg.cycle_count = 18977U;
    msg.time_to_empty = 42183U;
    msg.time_to_full = 42168U;
    msg.battery_status = 11468U;
    msg.serial_number = 61767U;
    msg.fet_status = 21239U;
    msg.safety_status = 1357016712U;
    msg.pf_status = 1530708963U;
    msg.operation_status = 380838006U;
    msg.charging_status = 6124U;
    msg.gauging_status = 48911U;
    IMC::BmsRegister tmp_msg_1;
    tmp_msg_1.reg = 68U;
    const signed char tmp_tmp_msg_1_0[] = {36, -87, -79, -72, -56, -83, -6, 90, -83, 50, 77, -73, -21, -62, 83, 125, -68, 69, 64, 70, -97, 87, 72, 27, -111, -63, -23, 25, 100, -74, 72, -76, -57, 123, 32, -120, 116, -17, 90, -75, 9, 88, -65, -64, -73, -101, -3, 82, -30, 74, -25, 29, 31, -91, 120, 79, -14, 11, 40, 3, 54, -93, -49, -120, 92, -14, -25, -65, -35, 40, -77, 72, 91, -36, 75, 77, 56, 9, 70, 118, -127, -97, -91, 9, 34, 66, 90, -45, -71, -60, 48, -98, 126, -48, 6, 119, 5, -114, 28, -112, -108, -102, -42, -100, -73, 16, 16, -58, 123, 61, 126, 44, 83, -49, 85, -73, 112, 36, -113, 72, 91, 115, 46, 124, 76, 77, -109, -98, -31, 47, 4, -20, 100, 21, 109, -113, -70, 1, 66, 86, -112, -106, 53, 98, 37, 43, -100, 93, -25, -64, 108, 104, -124, 71, -103, 65, 14, 102, -9, -50, 58, -18, 63, 14, 61, 71, -6, 39, 67, 80, -103, -120, -20, 16, 1, 84, -102, 52, -95, -53, 57, 30, -59};
    tmp_msg_1.value.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.registers.push_back(tmp_msg_1);
    const signed char tmp_msg_2[] = {-66, -95, -80, -9, -43, 89, -46, 83, 67, -31, -9, -110, -119, 39, 64, 72, -25, 71, -113, 20, 80, -62, -35, 45, -20, -27, -126, 88, -50, 40, 83, 69, 1, -98, 36, -25, -107, 117, 27, -122, -125, 28, 58, 44, -42, 95, 122, 22, -75, 110, 16, 83, -70, -6, 86, 25, 13, 6, -94, -17, 94, -69, -43, -64, 46, 23, -11, -4, -11, -19, -128, 85, 82, 67, -28, 65};
    msg.data.assign(tmp_msg_2, tmp_msg_2 + sizeof(tmp_msg_2));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsData msg;
    msg.setTimeStamp(0.9820098074573365);
    msg.setSource(59803U);
    msg.setSourceEntity(154U);
    msg.setDestination(24802U);
    msg.setDestinationEntity(239U);
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 19113U;
    tmp_msg_0.status = 81U;
    tmp_msg_0.info.assign("BQLJOEMUTPLCIQSDYWHTTLTXKEHARJXKHXZVFAOCXYJNLWMXKSCDLFLZTMPPWKYXGYCFYWABVOCNJIHXVOTHOOUWPIPHIBRFDEUFQK");
    msg.original.set(tmp_msg_0);
    msg.req_status = 8U;
    msg.pack_idx = 25U;
    msg.temperature = 0.3131536945549779;
    msg.voltage = 0.7678755221135433;
    msg.current = 0.29339626657563567;
    msg.rsoc = 152U;
    msg.asoc = 90U;
    msg.soh = 13U;
    msg.remaining_capacity = 25279U;
    msg.full_charge_capacity = 387U;
    msg.cycle_count = 30706U;
    msg.time_to_empty = 9200U;
    msg.time_to_full = 37723U;
    msg.battery_status = 16383U;
    msg.serial_number = 35354U;
    msg.fet_status = 4005U;
    msg.safety_status = 1631431383U;
    msg.pf_status = 3106975892U;
    msg.operation_status = 446009745U;
    msg.charging_status = 11791U;
    msg.gauging_status = 6365U;
    const signed char tmp_msg_1[] = {-85, -115, -60, -100, -84, 99, -20, 11, 61, 104, 123, -34, 68, -35, -12, 39, 1, 0, 31, -121, -83, -111, 97, 32, 3, -55, -76, -76, 104, -46, -106, -27, 122, -72, 72, 96, 87, 34, -74, 76, 82, 92, -81, -78, -42, -13, -61, -43, 119, -54, -92, 39, -99, -75, 118, -57, -53, -90, 113, 103, 91, 22, -51, -83, -90, 51, 121, 11, 76, 126, -77, 119};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.03641682780353861);
    msg.setSource(18251U);
    msg.setSourceEntity(41U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(114U);
    msg.cell_number = 179U;
    msg.voltage = 0.7163474850447938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.8094871295036471);
    msg.setSource(3314U);
    msg.setSourceEntity(111U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(132U);
    msg.cell_number = 241U;
    msg.voltage = 0.023343453918128976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsCellVoltage msg;
    msg.setTimeStamp(0.0709151215238577);
    msg.setSource(38584U);
    msg.setSourceEntity(148U);
    msg.setDestination(41U);
    msg.setDestinationEntity(59U);
    msg.cell_number = 206U;
    msg.voltage = 0.4177104716472827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsCellVoltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.6292157308996799);
    msg.setSource(15094U);
    msg.setSourceEntity(206U);
    msg.setDestination(57373U);
    msg.setDestinationEntity(169U);
    msg.reg = 254U;
    const signed char tmp_msg_0[] = {-115, 12, -126, -61, -3, 16, -117, 34, -79, -26, -35, 12, 122, -109, -92, 57, -40, 109, 52, 16, 57, 35, 100, -76, 84, -123, 77, 87, -46, 95, -115, 23, 46, 125, 54, 26, 52, 29, 52, -70, -90, -42, 9, -77, -41, -27, -65, -123, 15, -90, 17, -111, -85, -17, 37, 125, -40, 42, 119, 23, -25, 91, -5, -30, -101, -19, 41, 70, 15, 38, 119, -128, -30, 83, 20, -41, -67, -95, 36, -128, -94, -125, 81, -61, -20, -4, -94, -86, 43, 41, 65, -11, -92, 18, -5, 105, -31, 23, 81, -4, 78, -67, -18, -9, -125, 126, -127, -119, -116, 98, 48, -15, 65, 73, -113, 43, 22, 125, 44, 58, -72, 72, -60, -58, 78, -16, 16, -58, 43, -12, 48, 88, 66, 14, 123, -105, -50, 1, -56, 101, 9, -55, -64, -91, -13, -96, -115, 58, 45, 25, -67, 98, 69, -65, 105, -118, 79, 45, -28, -29, -67, -53, -76, 80, 106, -115, 123, -6, 27, 57, 83, 54, -24, 2, 41, 96, -38, -91, -36, 67, -109, -57, 73, -119, -98, -18, 35, -57, 44, -4, -44, 33, -43, 96, -123, 23, -57, 118, 7, 93, -68, -2, -94, -92, -59, -81, -37, -2, 22, -65, -36, -94, 35, -65};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.818428789987596);
    msg.setSource(52042U);
    msg.setSourceEntity(71U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(22U);
    msg.reg = 72U;
    const signed char tmp_msg_0[] = {-66, -32, 15, 33, 12, 19, 0, -34, 92, 112, -48, 5, -54, -106, -87, -65, -67, -70, -71, -27, 93, 107, 109, -72, 57, -27, 45, 74, 94, -78, -16, 18, -87, -93, 84, -54, 97, -51, 1, 52, -23, 14, -80, 122, -69, 67, -25, -16, -75, 67, -78, -119, -78, -39, 74, -83, -24, -24, 14, -126, -75, 122, 97, -54, -114, -63, -39, -108, -105, -58, -37, -2, 10, 96, -103, 41, -4, -78, -29, 9, -1, 108, -38, -29, 49, -124, 58, 37, -79, 107, 85, -77, 114, 31, 75, -63, 111, -54, -49, 1, -29, -78, -51, 52, -121, -12, 86, -84, -37, 17, 43, -101, 54, 31, 91, 69, -20, 43, -69, 43, -19, 102, 123, 47, -77, 0, 36, 61, -37, -122, -17, 85, 85, -38, -120, 51, 7, 43, 94, -100, 52, 115, -16, -67, 81, 56, -40, 51, -94, -39};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BmsRegister msg;
    msg.setTimeStamp(0.21927516407325454);
    msg.setSource(58759U);
    msg.setSourceEntity(20U);
    msg.setDestination(6941U);
    msg.setDestinationEntity(3U);
    msg.reg = 53U;
    const signed char tmp_msg_0[] = {41, 36, -35, -124, -10, -67, -92, -13, 51, 44, 92, 82, -74, 58, -7, -79, 45, 118, -20, -98, 88, 59, -48, -97, 15, 15, 1, 28, -32, 1, 77, 118, 115, -104, -86, 115, -42, 52, 123, 84, 68, 105, -30, 121, 104, 57, -125, -74, 55, 61, -121, -28, -117, 105, -46, 124, 67, -102, -11, 53, 109, 111, -59, -96, -9, 96, 14, -19, 39, 55, 79, 111, 10, 118, -125, 30, -90, 73, 90, -44, 109, 89, -29, 108, 11, -99, -54, 21, 122, -59, 14, 97, -95, -18, 115, -85, 6, 29, 33, -105, -54, 33, -43, -28, -87, -62, -40, 86, 90, -78, -66, 105, -29, -60, -40, 66, 22, -122, 77, -75, -80, 2, 115, -87, 120, 44, -92, -31, 123, -21, -68, -114, -22, -50, -114, 124, -52, -45, -122, 21, 8, -71, -5, -76, 101, -53, -50, -13, 105, -3, -108, 6, -32, -12, 90, -51, 36, 31, 71, 74, 46, -4, -15, 57, 85, -104, -85, -70, 67, 106, 90, 27, 11, -77, 123, -93, -41, 68, -124, -22, -101, 47, -42, 106, -94, -50, -97, 45, -43, 69, 120, -20, 3, 43, 100, 79, -101, -96, 70, -49, 7, 106, 47, 12, -120, 49, 6, -89, 92, -75, 94, -55, 46, 44, 22, 9, -58, 82, -33, -89, 60, -18, -125, 40, -82, -82, 102, 94};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BmsRegister #2", msg == *msg_d);
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
