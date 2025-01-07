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
// IMC XML MD5: 6347d9defff7438e2a2031366a35e122                            *
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
    msg.setTimeStamp(0.8141818896108381);
    msg.setSource(588U);
    msg.setSourceEntity(61U);
    msg.setDestination(35897U);
    msg.setDestinationEntity(201U);
    msg.state = 127U;
    msg.flags = 162U;
    msg.description.assign("SVCLHRRMHVXYNDFDPSKOFUWGWZYNTEESIWIFLIRJFKFGHTHD");

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
    msg.setTimeStamp(0.43535273853265954);
    msg.setSource(233U);
    msg.setSourceEntity(127U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(209U);
    msg.state = 223U;
    msg.flags = 149U;
    msg.description.assign("WFFCNHJOWMOYHHYRHSZTZJWVKZEDULQPTIEMSMUGSOYSLVFKXUYMQPFIJRFOWNQWSGSXZRHYLIMXTABPPEGVNFSTXWVOTCMYBGAYPWNLZQHAJQOPYXBKBHIVYFRCUKKHTDAZGHGUPCMBAECXVDRLXHJKFAVGBIRIJBDBQLZEPAUDBXARVFLNCMEOZSCLPAIWMUJDBSEWJMDU");

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
    msg.setTimeStamp(0.878705245194825);
    msg.setSource(63348U);
    msg.setSourceEntity(43U);
    msg.setDestination(28831U);
    msg.setDestinationEntity(221U);
    msg.state = 44U;
    msg.flags = 178U;
    msg.description.assign("CCPXYTXFHUVLVMGCNTRNAGYFWUFNKKPSZNBTXPEVBYOKBWLVSUJEHHZJUTDLMVDOSSAARLJRPYJBRFJHUHIFYUAEVUKCUPOMZIESYIXMAGDVOTHZHJQXZOTQBQSYNMRZRBZCLDRELFCUGLNNQBEVWDHFOSSKMGIVKTZCIJOMPWTEAANFDCGDKSYQZQPWLEIMJAFIGWLVEAJRRKDXNAHWOMQKOGIKFWDQEGRCBXPYUXYQWMT");

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
    msg.setTimeStamp(0.0690258355205573);
    msg.setSource(42600U);
    msg.setSourceEntity(195U);
    msg.setDestination(3950U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.0891808431250084);
    msg.setSource(11968U);
    msg.setSourceEntity(171U);
    msg.setDestination(13278U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.732438473953598);
    msg.setSource(8649U);
    msg.setSourceEntity(55U);
    msg.setDestination(4331U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.9331597935912349);
    msg.setSource(48794U);
    msg.setSourceEntity(129U);
    msg.setDestination(18827U);
    msg.setDestinationEntity(19U);
    msg.id = 244U;
    msg.label.assign("JOKOZMLESFXXSZAUTCTUSCSLWFHDCOOPPZABQTEZICMARGLQ");
    msg.component.assign("ALRWRBTJUKQLRGMFDILMEXHMCBOQXDIMPHNNINIGBTRRISCGAOQEQUPENDOVEGHMXQJQUGQZEEYZKWJYXEBFDMVBUCCZYPGLHZCCIYJBFSGWPBASTAKORFLWJUWAQNMNOBZOMLKSUPWFAKRVXXUSZWEGJKFUMKDQIFVPYXSATGOBAZXLDTKMDWSJQYCHNNFZCTVBHDJPSTUFOJWKDHNZLOFJTTSURWRHYCPIARVOIVP");
    msg.act_time = 55063U;
    msg.deact_time = 47999U;

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
    msg.setTimeStamp(0.4947729777607974);
    msg.setSource(3982U);
    msg.setSourceEntity(20U);
    msg.setDestination(29252U);
    msg.setDestinationEntity(173U);
    msg.id = 108U;
    msg.label.assign("FPCRIXQKMZIWRBLCVIAGMIQZCGSECYAMTHCBHHKKBLEUXDAZNWIBEGOUMANTISBUBJQZFUYZAJYQZYAPNHEZTYBUEOVFVLPRFJHPDWANRYBFGASKLVRCIQWSTFJ");
    msg.component.assign("BIDGZFBUOPZUYRTMXHNQJNDDJXWRWHSPKGLGIABMSJQKWGFKOCKLVSHKTOXJZRBYUTOHARLDHZWULQAAGVCFKMTXEWLSECIBPVVSTQEWDEXORJZKZQFMVUOMQIKTEPSXDIZEMYHYNICLSCUOWAAFYPFGBEMGAXNNRJVIKRADDDAAKCFDXEUOLVUBPYWQVFIFSIRMUFCJJGLNQJNJQYW");
    msg.act_time = 11177U;
    msg.deact_time = 42492U;

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
    msg.setTimeStamp(0.1415296014396744);
    msg.setSource(22448U);
    msg.setSourceEntity(102U);
    msg.setDestination(65048U);
    msg.setDestinationEntity(171U);
    msg.id = 233U;
    msg.label.assign("OMDEOYYDCRBNTSFCQPXNHKBXTJTNHLFONQUHRYZNXDHOKCYLLPMFXJJYFSEHVBQUZTYLMIULAEFXHOWSNV");
    msg.component.assign("QQJXKIYYUILKWBVOEZFWBUOATQUCAEFKGLUQGSLMXOIRHLDDEPFGHJRJENTJYSJSYCZRYIYPSBTWADRSXKMYUWDFSTIFAVQHHKPCPFXFDNEQXALYVTWBDETFMIDGHMOBNYWVGTVO");
    msg.act_time = 9550U;
    msg.deact_time = 33163U;

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
    msg.setTimeStamp(0.46223856034917776);
    msg.setSource(64499U);
    msg.setSourceEntity(30U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(62U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.35123729060429265);
    msg.setSource(24162U);
    msg.setSourceEntity(43U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(71U);
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
    msg.setTimeStamp(0.0019041219984438085);
    msg.setSource(60958U);
    msg.setSourceEntity(89U);
    msg.setDestination(22578U);
    msg.setDestinationEntity(85U);
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
    msg.setTimeStamp(0.9230194266701182);
    msg.setSource(46834U);
    msg.setSourceEntity(167U);
    msg.setDestination(9531U);
    msg.setDestinationEntity(97U);
    msg.op = 159U;
    msg.list.assign("GOLBAKYGAATWLTVDFHKTNDQCQCPVELLFPBOJWLGPEMFWNUVHOBSBYVNFUNZNDODRZSKZWDYXLJGLPRZNSWWKRUEXKTSGPOPEQJHFAYZQQBXRDQAKICJMILVTF");

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
    msg.setTimeStamp(0.7435150514370179);
    msg.setSource(26438U);
    msg.setSourceEntity(98U);
    msg.setDestination(59223U);
    msg.setDestinationEntity(251U);
    msg.op = 212U;
    msg.list.assign("SYIBFAAUPJNGGCFYOWDDFIYYRHBTZQGRWTDTEZRFPFEBDLHSLXCCCPLKPFGCPTHSMXZPIKKTXWQMWLQZZPWUJELHFAVOQ");

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
    msg.setTimeStamp(0.923142041839648);
    msg.setSource(18278U);
    msg.setSourceEntity(23U);
    msg.setDestination(10151U);
    msg.setDestinationEntity(20U);
    msg.op = 172U;
    msg.list.assign("FBMASKKDWEZPJXOXHDIJJXLYRDJDORVBKKCSMBWETZBKACQFEPRATHPUYQCXJQVIJVSLHNEFEMWVUVOJITWUWOVSVUXHAPNKYSJIUUCAADNDGXTZERA");

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
    msg.setTimeStamp(0.2849625431951395);
    msg.setSource(36087U);
    msg.setSourceEntity(169U);
    msg.setDestination(42722U);
    msg.setDestinationEntity(49U);
    msg.value = 137U;

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
    msg.setTimeStamp(0.018463264055163187);
    msg.setSource(12585U);
    msg.setSourceEntity(37U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(175U);
    msg.value = 111U;

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
    msg.setTimeStamp(0.8985332091800348);
    msg.setSource(56493U);
    msg.setSourceEntity(55U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(214U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.7866143215470066);
    msg.setSource(60853U);
    msg.setSourceEntity(91U);
    msg.setDestination(30783U);
    msg.setDestinationEntity(38U);
    msg.consumer.assign("CTUGIGZQHTWBYOKQFEBQFPOXQQDASISFDTRKLNEILMTVTNLOGGJLXPWNCBXNIDDUDHSCFZFZJZKYMZQBSOGBRJMJYWPSWFCWRVBBKTOYRXYLWVTNPTZHUHUVPUHAPWHIMZAYIOKHFUZMKRWIBV");
    msg.message_id = 45291U;

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
    msg.setTimeStamp(0.5533576678700658);
    msg.setSource(22166U);
    msg.setSourceEntity(162U);
    msg.setDestination(53608U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("QAVEMEKAQCTYSYTNAL");
    msg.message_id = 19407U;

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
    msg.setTimeStamp(0.5489104909761543);
    msg.setSource(49571U);
    msg.setSourceEntity(203U);
    msg.setDestination(63615U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("IEMDTOYUGHBRBOGLNBXCCAHCSOUEHHWSFYGHTHKKPRWLNEZQPNLCTDJGNZMVIKKTWDQJFJVZZDIJZDYZATLQKCVEOAQNEFLLCWGJKVFHVVFPEAWAFSQOOUJKVFIUOTILCSRDIBNGYXYQABBQMFTM");
    msg.message_id = 34136U;

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
    msg.setTimeStamp(0.7494593014205464);
    msg.setSource(47272U);
    msg.setSourceEntity(57U);
    msg.setDestination(57561U);
    msg.setDestinationEntity(4U);
    msg.type = 234U;

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
    msg.setTimeStamp(0.8691368586417396);
    msg.setSource(1123U);
    msg.setSourceEntity(118U);
    msg.setDestination(57213U);
    msg.setDestinationEntity(64U);
    msg.type = 123U;

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
    msg.setTimeStamp(0.9509801672050117);
    msg.setSource(21852U);
    msg.setSourceEntity(50U);
    msg.setDestination(3218U);
    msg.setDestinationEntity(133U);
    msg.type = 106U;

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
    msg.setTimeStamp(0.2156599461945723);
    msg.setSource(16871U);
    msg.setSourceEntity(99U);
    msg.setDestination(17408U);
    msg.setDestinationEntity(35U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.24946579290381998);
    msg.setSource(41195U);
    msg.setSourceEntity(189U);
    msg.setDestination(57353U);
    msg.setDestinationEntity(159U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.17828730061163356);
    msg.setSource(19244U);
    msg.setSourceEntity(98U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(191U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.648579869178615);
    msg.setSource(6903U);
    msg.setSourceEntity(161U);
    msg.setDestination(61057U);
    msg.setDestinationEntity(221U);
    msg.total_steps = 38U;
    msg.step_number = 115U;
    msg.step.assign("VZCEUMNMCLWOBKQPTXWNOYIBKZZBJQDFYXDMGHYIAWLLDCARSBYNIGMDSBRQFILXEZJJYSKGPSGEJKHBMMHIMVGXSRNBFTTDCNZDIUQHQESGFZOPOJVDKHTPRBOXKJYREJKHBGPHFLTDBLIQX");
    msg.flags = 55U;

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
    msg.setTimeStamp(0.1268814131789493);
    msg.setSource(55457U);
    msg.setSourceEntity(67U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 211U;
    msg.step_number = 239U;
    msg.step.assign("BLCIETPKBIJFQCFEPULUPHNAIWWZ");
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
    msg.setTimeStamp(0.17986981029784788);
    msg.setSource(2401U);
    msg.setSourceEntity(245U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(4U);
    msg.total_steps = 179U;
    msg.step_number = 89U;
    msg.step.assign("EXEJPMNKPULZDFQNINRGSSYXHIMDHGMLXVTCKDXGKWUXOBYZXCHXSPAJNIPMBWYEHMJYVEUUOVQHIQKEPZOIJYHC");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.7032796481718842);
    msg.setSource(13122U);
    msg.setSourceEntity(176U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(147U);
    msg.state = 34U;
    msg.error.assign("VWOTMHIUDRDQPZEQHUUEDIAONFDPMBTUIKLEKHOXKETEUHHMJPMPDZOX");

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
    msg.setTimeStamp(0.860250922504741);
    msg.setSource(28213U);
    msg.setSourceEntity(110U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(67U);
    msg.state = 94U;
    msg.error.assign("ETTGRGLCUXNJHFXVSUVQSXZAEAZVNEEFTPYFABFVSQOEHQRWIBAXBRVBXRSSGTQPRGRGMKFDLOUKAZDMEOAOOARPWBUMJTJUCWCFZXUFESNSDAMMNBHYXPCYMNPBLJNOCQLXNPMPLGIRLTTWDBLVIORPVUOKYKDJBPCKFVTKOYHGBDEPNNIHZGJNELODCLZWJ");

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
    msg.setTimeStamp(0.3728213144481799);
    msg.setSource(51440U);
    msg.setSourceEntity(76U);
    msg.setDestination(42048U);
    msg.setDestinationEntity(188U);
    msg.state = 63U;
    msg.error.assign("CQRZMBSOVJGYKXQYQUEEBXEHJWKJILUOGRSSFATLHIARVJUNRPCRGIJKHIDRGFKAYRDPPOHLPOQUKHKTNCJPSOLBYWXZNVXUMVNXQMAEICTXVDDFSEWDNNBQDBFBZWH");

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
    msg.setTimeStamp(0.9394342081518395);
    msg.setSource(52844U);
    msg.setSourceEntity(38U);
    msg.setDestination(24700U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.5697553609685191);
    msg.setSource(45637U);
    msg.setSourceEntity(234U);
    msg.setDestination(46556U);
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
    msg.setTimeStamp(0.5767921241150769);
    msg.setSource(50177U);
    msg.setSourceEntity(32U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.253920011432906);
    msg.setSource(52749U);
    msg.setSourceEntity(72U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(103U);
    msg.op = 30U;
    msg.speed_min = 0.7913577185945156;
    msg.speed_max = 0.4623287155354575;
    msg.long_accel = 0.05630902508869551;
    msg.alt_max_msl = 0.14657580323401753;
    msg.dive_fraction_max = 0.4022587377657785;
    msg.climb_fraction_max = 0.22342442359709003;
    msg.bank_max = 0.6526657738356287;
    msg.p_max = 0.4612190168944795;
    msg.pitch_min = 0.3723921962057124;
    msg.pitch_max = 0.13135562438135406;
    msg.q_max = 0.5865086876314523;
    msg.g_min = 0.4553005727163185;
    msg.g_max = 0.31957578371877404;
    msg.g_lat_max = 0.18440424983537962;
    msg.rpm_min = 0.7082689778062048;
    msg.rpm_max = 0.34060836953969176;
    msg.rpm_rate_max = 0.7170099555984718;

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
    msg.setTimeStamp(0.6374174380602946);
    msg.setSource(47607U);
    msg.setSourceEntity(40U);
    msg.setDestination(47215U);
    msg.setDestinationEntity(231U);
    msg.op = 66U;
    msg.speed_min = 0.09220481839448313;
    msg.speed_max = 0.5332654350657254;
    msg.long_accel = 0.8079918422951561;
    msg.alt_max_msl = 0.6548672419427938;
    msg.dive_fraction_max = 0.45985743150494063;
    msg.climb_fraction_max = 0.7423806120285918;
    msg.bank_max = 0.6962440238886055;
    msg.p_max = 0.01581027096230736;
    msg.pitch_min = 0.10522216542950458;
    msg.pitch_max = 0.8025871087461786;
    msg.q_max = 0.28107269474040675;
    msg.g_min = 0.10200851359466256;
    msg.g_max = 0.9449913325615567;
    msg.g_lat_max = 0.4569382400557346;
    msg.rpm_min = 0.18133097230780637;
    msg.rpm_max = 0.971946595166395;
    msg.rpm_rate_max = 0.05258948365784377;

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
    msg.setTimeStamp(0.3653717637430173);
    msg.setSource(15317U);
    msg.setSourceEntity(233U);
    msg.setDestination(30464U);
    msg.setDestinationEntity(82U);
    msg.op = 6U;
    msg.speed_min = 0.8340662415971689;
    msg.speed_max = 0.5691799879635617;
    msg.long_accel = 0.6351725292347928;
    msg.alt_max_msl = 0.8265274819340783;
    msg.dive_fraction_max = 0.6684924296839811;
    msg.climb_fraction_max = 0.4788735883272709;
    msg.bank_max = 0.5571700716066721;
    msg.p_max = 0.3536868217437251;
    msg.pitch_min = 0.7076469465816573;
    msg.pitch_max = 0.6090050787158385;
    msg.q_max = 0.7591232054089521;
    msg.g_min = 0.39650747822081356;
    msg.g_max = 0.12260728051258407;
    msg.g_lat_max = 0.0392388106535283;
    msg.rpm_min = 0.6136046378980777;
    msg.rpm_max = 0.836479835194355;
    msg.rpm_rate_max = 0.6060678391922878;

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
    msg.setTimeStamp(0.018654355544339474);
    msg.setSource(55923U);
    msg.setSourceEntity(157U);
    msg.setDestination(58992U);
    msg.setDestinationEntity(160U);
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.8787834426961936;
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
    msg.setTimeStamp(0.25413715057777087);
    msg.setSource(34600U);
    msg.setSourceEntity(32U);
    msg.setDestination(33612U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.4936674532030748);
    msg.setSource(53871U);
    msg.setSourceEntity(196U);
    msg.setDestination(6922U);
    msg.setDestinationEntity(96U);
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.8166596704102084;
    tmp_msg_0.lon = 0.18280377732833264;
    tmp_msg_0.speed = 0.3539163867271835;
    tmp_msg_0.speed_units = 9U;
    tmp_msg_0.duration = 39945U;
    tmp_msg_0.sys_a = 36334U;
    tmp_msg_0.sys_b = 7150U;
    tmp_msg_0.move_threshold = 0.8752809445135747;
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
    msg.setTimeStamp(0.9908690860722366);
    msg.setSource(25930U);
    msg.setSourceEntity(144U);
    msg.setDestination(59483U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.929302521335196;
    msg.lon = 0.8629778605766406;
    msg.height = 0.7139269047546595;
    msg.x = 0.8458740016974329;
    msg.y = 0.19483681648412554;
    msg.z = 0.012816857122309955;
    msg.phi = 0.3947767606883852;
    msg.theta = 0.07171808736489349;
    msg.psi = 0.764183602245299;
    msg.u = 0.16322108126006307;
    msg.v = 0.11110245811602182;
    msg.w = 0.36322710738543207;
    msg.p = 0.636347300460437;
    msg.q = 0.6624906064065083;
    msg.r = 0.6744753439860555;
    msg.svx = 0.7663339563054727;
    msg.svy = 0.0763233769184608;
    msg.svz = 0.8326236751901597;

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
    msg.setTimeStamp(0.9299344356403878);
    msg.setSource(39858U);
    msg.setSourceEntity(81U);
    msg.setDestination(54141U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.5695700613736154;
    msg.lon = 0.5213237015970915;
    msg.height = 0.3229063438563373;
    msg.x = 0.6199900805659757;
    msg.y = 0.18142796819045237;
    msg.z = 0.9937231925744604;
    msg.phi = 0.7819611148926999;
    msg.theta = 0.9659908700757485;
    msg.psi = 0.38706912728191145;
    msg.u = 0.4013297557599743;
    msg.v = 0.272973351709623;
    msg.w = 0.8606224506701425;
    msg.p = 0.507900770560499;
    msg.q = 0.8561992556158778;
    msg.r = 0.27283565108810715;
    msg.svx = 0.9095457204901588;
    msg.svy = 0.022910187247063396;
    msg.svz = 0.2960973524672844;

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
    msg.setTimeStamp(0.780893723054162);
    msg.setSource(23311U);
    msg.setSourceEntity(42U);
    msg.setDestination(17673U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.09714292073735609;
    msg.lon = 0.6737911163151145;
    msg.height = 0.23294004286803394;
    msg.x = 0.11374861369552969;
    msg.y = 0.20451500538309886;
    msg.z = 0.006700120362999162;
    msg.phi = 0.5958947531271138;
    msg.theta = 0.22324818217168985;
    msg.psi = 0.6744062386065489;
    msg.u = 0.536558967482566;
    msg.v = 0.7432055438021367;
    msg.w = 0.33984870157555447;
    msg.p = 0.39791957030809877;
    msg.q = 0.06610526291141461;
    msg.r = 0.06724479842830233;
    msg.svx = 0.38572114051273854;
    msg.svy = 0.8921090851644832;
    msg.svz = 0.28731865455333727;

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
    msg.setTimeStamp(0.27739730980670874);
    msg.setSource(47642U);
    msg.setSourceEntity(98U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(189U);
    msg.op = 174U;
    msg.entities.assign("MIUVXHQQKGJKGMCWMFBCIKKRQBXKYSEYZNRTWJBAEETOUPGWJNDWETSBJSNGAZVGIOFYOWHANUFHNTJXDLLBUVQCITICOQMXYUJEJMYZPUHNKYYEWIHNXKHELWKPOSMSQZDOLFHAXTQJUCDVIBDTVTMUVOLRALUKGZFOFACDPWZFSJDHALODRBMMWFWSRRPLECVAVZTZPFQBQFXLSXIU");

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
    msg.setTimeStamp(0.18296505377588856);
    msg.setSource(48383U);
    msg.setSourceEntity(214U);
    msg.setDestination(7810U);
    msg.setDestinationEntity(40U);
    msg.op = 22U;
    msg.entities.assign("NZBUTQGVOUKLEBPSVJRGCDKSJHFOQXWEJGINXPKSTURCLZUTEMIBRYOMDMOKJJWLEYVWIUAKJGJRZNYQRCNTIZNKBWYRDHSQZVGBPTXKXDLMYHCGVYYCUHHDNMUVQNREEZVHBQZVDZSLWXXOPNWEVPRQORTJAOCOUIYIOQDSBMTHPYICSEFCULKLFAFPSBWHCDQM");

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
    msg.setTimeStamp(0.4051110385887745);
    msg.setSource(41494U);
    msg.setSourceEntity(96U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(152U);
    msg.op = 227U;
    msg.entities.assign("GNVIBBXJJKWETRFGEKTEUBLCWXNAIHPUGMCLITVVEZIEBQMQENPKYIRVOBDFNKRDRMGBXWDAUKSMPNGRZHOAPUPQQHYDJDBHGHYSPNJPMURTHEFQBZILODCWVCPQSGYXXMO");

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
    msg.setTimeStamp(0.4048569790907972);
    msg.setSource(53194U);
    msg.setSourceEntity(37U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(77U);
    msg.type = 112U;
    msg.speed = 45129U;
    const signed char tmp_msg_0[] = {-48, 59, -32, -36, -51, 11, -77, 92, -60, 60, -16, 1, -43, 63, -66, -101, 45, -114, -47, 63, 46, 7, 94, -20, -63, 95, -77, 102, 61, -3, -112, -10, 74, 58, 45, -85, -98, 73, 18, -76, 15, -10, -128, -108, 41, 27, -126, -12, 82, 16, 106, 101, 103, 92, 43, -104, 68, 95, -32, -104, 21, -44, -89, -83, 14, 40, -45, -45, 114, -106, -101, -120, 89, 34, 53, 84, 121, 75, 106, 32, -79, -65, 105, -120, 124, 38, -86, 25, 76, 67, 34, 74, -109, 125, -11, -88, 63, -101, -116, 52, -58, 46, -52, -78, -24, 112, -114, -97, -91, 123, 121, -86, 12, 10, 72, 88, 88, 122, -20, -29, 31, 120, -28, 68, 3, 0, -12, -91, 25, 46, -45, -61};
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
    msg.setTimeStamp(0.9426890285173576);
    msg.setSource(9848U);
    msg.setSourceEntity(148U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(67U);
    msg.type = 244U;
    msg.speed = 18833U;
    const signed char tmp_msg_0[] = {106, -75, -44, -87, 69, -83, 98, -55, -24, 95, -13, 7, 24, 60, -44, -92, -51, 4, -25, 49, 90, 78, -103, 67, -61, 70, 12, 93, -101, -114, 22, 13, -9, -117, 12, 121, -100, -75, 71, -37, -55, -12, 119, -41, -74, 85, 11, 88, 7, -37, 43, -61, -52, 12, 12, 78, 81, 98, -79, -82, -74, 39, -4, -31, 110, 91, -57, 122, -102, -126, 62, -14, -108, -26, 26, 65, -66, -92, -81, -41, 34, -72, -81, -113, 30, -38, -74, 17, -85, 107, -23, -14, -121, -105, 84, -8, 94, 95, 57, -69, -29, 64, 24, 119, 52, -78, 77, -8, -29, 94, -97, 9, -118, 74, -88, 93, -15, 38, -21, 74, 14, 95, 59, 47, -78};
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
    msg.setTimeStamp(0.6174922749847148);
    msg.setSource(44603U);
    msg.setSourceEntity(157U);
    msg.setDestination(37799U);
    msg.setDestinationEntity(12U);
    msg.type = 112U;
    msg.speed = 9985U;
    const signed char tmp_msg_0[] = {90, -8, -125, 48, 122, 51, 107, 8, 21, -11, 114, 111, 76, 108, 23, -125, 72, -109, 72, -90, 98, 26, 56, -91, 39, 25, 10, 50, 69, -118, -34, -57, -128, -1, -127, 73, 61, -37, 82, -94, -79, -30, -95, 95, -50, -24, 99, -113, 66, -67, 37, 27, 51, 109, 45, 91, 89, 49, -80, -92, 99, 13, -31, -65, -24, 1, -17, -2, 124, -21, -123, -125, -63, -44, -48, 42, -20, -15, -1, 3, -22, -9, 116, -15, 77, -117, 71, -62, 8, 121, 0, -126, 37, -99, -53, -97, -52, 61, -85, 100, -101, -54, -56, -98, -97, -48, -24, -75, 48, -80, 31, -10, 1, 125, 73, 18, -87, -34, -25, -7, -120, -7, 62, -128, -19, 3, -14, -115, 63, -61, 95, -124, -100, -12, 1, 47, -80, -70, -14, -112, 7, 33, -94, -2, 86, -89, -94, 32, 114, 55, 28, 64, -71, 100, 60, 116, 95, -11, 40, -59, 26, 68, 47, 17, 63, -118, 62, -63, -58, -6, -7, 106, 68, -15, -87, 116, 32, -87, 116, -47, -124, -26, 27, -49, -32, -74, 16, 100, 120, -56, 2, 40, -119, 94, 99, -105, 114, 65, 26, 111, 49, -82, -59, 82, 113, -54, -21, -45, 115, 118, -18, -53, -21};
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
    msg.setTimeStamp(0.8033804320829856);
    msg.setSource(18544U);
    msg.setSourceEntity(71U);
    msg.setDestination(10213U);
    msg.setDestinationEntity(107U);
    msg.op = 223U;
    msg.tas2acc_pgain = 0.5287892059115537;
    msg.bank2p_pgain = 0.0670031526653787;

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
    msg.setTimeStamp(0.08100354377405838);
    msg.setSource(13026U);
    msg.setSourceEntity(45U);
    msg.setDestination(29306U);
    msg.setDestinationEntity(229U);
    msg.op = 41U;
    msg.tas2acc_pgain = 0.5125376672809349;
    msg.bank2p_pgain = 0.6494928374078239;

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
    msg.setTimeStamp(0.3042725089732369);
    msg.setSource(54684U);
    msg.setSourceEntity(188U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(16U);
    msg.op = 186U;
    msg.tas2acc_pgain = 0.6445312554528875;
    msg.bank2p_pgain = 0.516231403903351;

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
    msg.setTimeStamp(0.5541393388279745);
    msg.setSource(38745U);
    msg.setSourceEntity(165U);
    msg.setDestination(43666U);
    msg.setDestinationEntity(156U);
    msg.available = 3829009323U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.780750002667015);
    msg.setSource(47758U);
    msg.setSourceEntity(146U);
    msg.setDestination(9970U);
    msg.setDestinationEntity(203U);
    msg.available = 3420725747U;
    msg.value = 93U;

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
    msg.setTimeStamp(0.5948939784858591);
    msg.setSource(21501U);
    msg.setSourceEntity(172U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(62U);
    msg.available = 186669038U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.5949000716429295);
    msg.setSource(29603U);
    msg.setSourceEntity(150U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(172U);
    msg.op = 102U;
    msg.snapshot.assign("GEGSMZXMUCQINCYTTWZBOKHXUUDNYFIKPJMMVAFQRLBCOJUNRQZAVGKPVOPALPSCNXHYTDIXEMYLQHABTXZKVLGUTAJUJRYBFCYFQBSIDOFSDPDNPZVCTHBIKEEADSYGZDDPUJURPFESHR");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 179U;
    tmp_msg_0.value = 0.14528073899346539;
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
    msg.setTimeStamp(0.30945669865326275);
    msg.setSource(25405U);
    msg.setSourceEntity(47U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(72U);
    msg.op = 170U;
    msg.snapshot.assign("ZOLBNGPATTRICTOGGJMLEEAWUGDEMZCANVMPIVSRZBKCFJWKEOACQPPVJCDRKDNBFFRVNKZVQZUDRJPUKZYTSNFHELBXJHBBULARCCXXGJOKIFSUPUWYJOSOIGZQOTXWKDLIYMUYAHOHXVNDRGEZOQRVTQLUMMMPIKWXCPTHFYXIWFFAXNUYAIYRSHNCUIHXMWBNPFQBDESQHKITAEYLGVDKJPLMSSRTEYWGJWDSFTCBVXHSQVMZWNHZLLQDBE");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 109U;
    tmp_msg_0.value = 0.8998756202848712;
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
    msg.setTimeStamp(0.5400092359726522);
    msg.setSource(54992U);
    msg.setSourceEntity(60U);
    msg.setDestination(39657U);
    msg.setDestinationEntity(245U);
    msg.op = 97U;
    msg.snapshot.assign("BCIQARIFXBPAUPRKBSWJTUIYAREFPBYMBKSPJTDZHESKUXOTOXZPDJXOCSRJXTWMUSFFBMEYGSWWYTIVQTKWDXMCNGZDFLHTCIEWDAYEWIZZPUYUCWLPDLDZMHGFGIQDMBXXBOWKSLQSVOCHKFEGJVAVHRRJVVJQNKM");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 70U;
    tmp_msg_0.x = 0.7611933457843623;
    tmp_msg_0.y = 0.5952469249945797;
    tmp_msg_0.z = 0.41705277598011803;
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
    msg.setTimeStamp(0.25671974621227556);
    msg.setSource(38471U);
    msg.setSourceEntity(95U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(117U);
    msg.op = 163U;
    msg.name.assign("AARTMIRMDZHOQKYKOJBOGNCOTTXUGISWPZIVGMNLJWCIOJDLGKZQXHPJFHBYRGJNYYFCDZOHTRPAAZTYLPOIQYPNLNTBSWUXJCYXAVIKCFKUHVSGFUTTJQBSSFXJDBXZFKRZARVM");

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
    msg.setTimeStamp(0.017256813436541507);
    msg.setSource(34810U);
    msg.setSourceEntity(154U);
    msg.setDestination(706U);
    msg.setDestinationEntity(138U);
    msg.op = 245U;
    msg.name.assign("HFLYQEVLJVSUXGR");

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
    msg.setTimeStamp(0.9412204875075476);
    msg.setSource(40133U);
    msg.setSourceEntity(136U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(136U);
    msg.op = 136U;
    msg.name.assign("TVAFLDIENGAOFXBYVSQHJHRXODBPDZTUH");

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
    msg.setTimeStamp(0.639255469920973);
    msg.setSource(50289U);
    msg.setSourceEntity(19U);
    msg.setDestination(23107U);
    msg.setDestinationEntity(193U);
    msg.type = 200U;
    msg.htime = 0.5584355343713125;
    msg.context.assign("FITKGEDPHBRGMQROUQRXDWEHTXLETFEZGMCUPBDNROPNYHUHMHOPRBUMYGDDXTQNWMXVT");
    msg.text.assign("PTJPHNRJYXLRQDCNWZUTUEUVMSBVMKPBSVIXUSFTSTWFXADCFSCOKHBQJPXDGQADMCEJPSXLEAPCXHRPIWBRUJUGQFVIQVCDPMBIKLFXQKAKJZYOLGHEMOEMYLKQFGUSCZEYBVLARWANBRRLNKOHWTAWZYTJJSZLTUEHPHLBZUCTNTEXUQGBJYRNIHOFDANRDGJYZXIDGFIOEMOKFWOVDHGMWMNKGICOAOVWBDRZXKCYS");

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
    msg.setTimeStamp(0.41448578995143737);
    msg.setSource(60468U);
    msg.setSourceEntity(60U);
    msg.setDestination(44945U);
    msg.setDestinationEntity(227U);
    msg.type = 4U;
    msg.htime = 0.8049441166615185;
    msg.context.assign("WWZXYXZKIRWIPLKVZDGDMNHLYHTRRYL");
    msg.text.assign("FBMLVMEQKSXFPMMFWIBMHKQSFIHPXTKJQOJCKQKQGBKSLDCWMJOWYUJCKRPLEYXOZDVLWETPGJAVNCOZDNHATCNYCJUGIXEUORXZKTTNELWQYFWINYGJZCOARVOXSATSHRGATRYAWBVBHRHZVNR");

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
    msg.setTimeStamp(0.21016792492454994);
    msg.setSource(22300U);
    msg.setSourceEntity(130U);
    msg.setDestination(33380U);
    msg.setDestinationEntity(107U);
    msg.type = 35U;
    msg.htime = 0.002918245014703391;
    msg.context.assign("FNXYHWEXADKITOVEJVGGMAXBBZHAKCPEMKUCEMLOOYHRFVNCGNXLRBPKIFIJDNGALDWABPEVKUMINGSNTVPHQJNJPBGYQLIEGLZXAJIIKYDFSUHTOJBALWVHHNTOCWURUVCMDCPRARFQHTRMVUFZYAJGUSDRXIFDBOOSZLIBDYZSQXMFZZQBSXEDVTYXZLWIXNKOERLWEQTCCHNWYKYRPUWZSTKUJQF");
    msg.text.assign("ZKXNUVFKJHQGIOVPNEFWUJAQGTWFGOFEGVNNTPWXSGKPRGHAKRPUYPLOHQBNJBFTDUWMZNTBSTTGFAWRDIUQJJTZWCUYVYBOYAHMEBBEMY");

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
    msg.setTimeStamp(0.5995120340474668);
    msg.setSource(29102U);
    msg.setSourceEntity(171U);
    msg.setDestination(57252U);
    msg.setDestinationEntity(127U);
    msg.command = 46U;
    msg.htime = 0.9472527602456562;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 193U;
    tmp_msg_0.htime = 0.2943718160411728;
    tmp_msg_0.context.assign("CXLCIGXUDWCULEPWSOXRBDVMZASUBSBMUYTWLNKHGNPXZIBBZDTLNFIRTPTINIEIRQCOQQSJODKHKYUEAKAUEKEZQXSCQYHSTLHJVPGFDZLOFWOFPACVFOGYKWCCLJPOBNJTDHVEFNTUJJXYKCPSQWADLTJPMYBRNCNHRJIVZFNBRZLQMWXUXEXGMANZEEGIHJMPADOKAWSHRUPOZYOTY");
    tmp_msg_0.text.assign("STNLRJXMDWMQSGANRXLBTOWNCNSTRDJUFWCEPJLROBGZDERXKADQJMPITVSJIEVBCKPKZTPHXCUZRNGSLUHVSEEHKFCVYTQWUIFOKZXRLZDDLBXHPKQVZGMTFUDSOYWRJZUAVGUKUTXXRODKONWIPCMOOZLHA");
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
    msg.setTimeStamp(0.7329555823759342);
    msg.setSource(56451U);
    msg.setSourceEntity(32U);
    msg.setDestination(7329U);
    msg.setDestinationEntity(59U);
    msg.command = 142U;
    msg.htime = 0.0034357788654815202;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 227U;
    tmp_msg_0.htime = 0.216349732848931;
    tmp_msg_0.context.assign("LOPDTJIDWAVLUUTLWUXSCTBLCMFHASMXQPZKFMIPGJQMQZLTTZOVPKIUQBKISWVAGNBWKWRNYGXMQTOUMEKCAVSYERJMEQEHLSVCEXBCNSLHFLHGOZCPZ");
    tmp_msg_0.text.assign("NRUESEDKRLFEQTALADNXMGOEXJBUSTUAGFTVWYBKFOIBYZCLTVQEHHIUILZPYUWOQACWOLDXDXLOJQOWTXYGSWIARRHZIIBARQZWIJKNHTBSXFKHGODTVYWVPGDHFWKANKVSCJJBJCCAVCYVNQMB");
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
    msg.setTimeStamp(0.181950994221032);
    msg.setSource(10575U);
    msg.setSourceEntity(74U);
    msg.setDestination(35799U);
    msg.setDestinationEntity(26U);
    msg.command = 196U;
    msg.htime = 0.7251428001417044;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 114U;
    tmp_msg_0.htime = 0.6537270737647525;
    tmp_msg_0.context.assign("KFTXIAOYZMPNGQRZIEHSKOGOUTQNMKLOJDALRNCGNVQWRPURQHUJDWZGWZQRGWCEVLDXDAFBIUAQZWVTDUPUXXTWKKTYWHHYODBXBSCAJBMIEKCNOQYFMSE");
    tmp_msg_0.text.assign("AQNVMZESBMYPTXTXLOTNOSQOBDKSGIWFKVHOOPZKVZINHDIJPYUEXNDCTEHAKMIAGYQUMRRFEBVXLGFLLYNEPSHAXFGBVZIUZASNOJRIUIYJSHBSZHXPEWAZWGFVPVEWJTJCCBCBDVHQDCJIJZOAMAYKGOGTRLTENYRNGXPRBUCM");
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
    msg.setTimeStamp(0.8321386572143367);
    msg.setSource(38452U);
    msg.setSourceEntity(164U);
    msg.setDestination(56593U);
    msg.setDestinationEntity(119U);
    msg.op = 47U;
    msg.file.assign("WIKMIGQOYRIDFYDHVXDZSMNCXXZJPXYUCVPF");

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
    msg.setTimeStamp(0.6250900306068353);
    msg.setSource(34766U);
    msg.setSourceEntity(133U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(239U);
    msg.op = 119U;
    msg.file.assign("ZFMMLFPDVRHOWYTIQVALIKJZDMNHVRAXEDHLAXONHQRZJNCTXWGLMUGEKXQZDIYSQLAGBFBQFDGQWIZXFREJVSMSTLWTEESYKUTPIPPOWWPNGIBLIJCBUAVURRQHNPDAHMJMS");

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
    msg.setTimeStamp(0.7359434090306606);
    msg.setSource(58806U);
    msg.setSourceEntity(59U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(105U);
    msg.op = 71U;
    msg.file.assign("SXFGFDVETCYWRENSXYCELKBDIRUZPNNHYRMAGXNGBHUVKRSALXWGOVPJLUDDTVZCMBXZYHAFXWRGKYETLOCWGAUSVILJVSKOYQBINUMTFDGRPVVQLGBRPJUWXTJLZDBSALAAGLONFHAUHXICEZ");

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
    msg.setTimeStamp(0.5204218074963967);
    msg.setSource(36466U);
    msg.setSourceEntity(194U);
    msg.setDestination(39002U);
    msg.setDestinationEntity(142U);
    msg.op = 220U;
    msg.clock = 0.5801575261768945;
    msg.tz = -1;

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
    msg.setTimeStamp(0.7858810296360008);
    msg.setSource(56801U);
    msg.setSourceEntity(55U);
    msg.setDestination(48779U);
    msg.setDestinationEntity(244U);
    msg.op = 2U;
    msg.clock = 0.5055758440923255;
    msg.tz = 17;

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
    msg.setTimeStamp(0.6310271056921535);
    msg.setSource(17908U);
    msg.setSourceEntity(34U);
    msg.setDestination(64021U);
    msg.setDestinationEntity(39U);
    msg.op = 126U;
    msg.clock = 0.6320207325484585;
    msg.tz = -91;

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
    msg.setTimeStamp(0.6259338734566255);
    msg.setSource(58489U);
    msg.setSourceEntity(233U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(127U);
    msg.conductivity = 0.27734989193220294;
    msg.temperature = 0.5848479025710811;
    msg.depth = 0.8364770472055558;

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
    msg.setTimeStamp(0.48407884008541835);
    msg.setSource(25741U);
    msg.setSourceEntity(126U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(57U);
    msg.conductivity = 0.3967626823884598;
    msg.temperature = 0.08061204679919887;
    msg.depth = 0.7739367583342698;

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
    msg.setTimeStamp(0.7352936732460237);
    msg.setSource(51068U);
    msg.setSourceEntity(215U);
    msg.setDestination(47575U);
    msg.setDestinationEntity(16U);
    msg.conductivity = 0.4416532503357745;
    msg.temperature = 0.8193487594361293;
    msg.depth = 0.9131323567517612;

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
    msg.setTimeStamp(0.6200647998862898);
    msg.setSource(53222U);
    msg.setSourceEntity(27U);
    msg.setDestination(6201U);
    msg.setDestinationEntity(208U);
    msg.altitude = 0.4460217818090294;
    msg.roll = 41529U;
    msg.pitch = 7107U;
    msg.yaw = 27752U;
    msg.speed = 5414;

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
    msg.setTimeStamp(0.8416345444471819);
    msg.setSource(4822U);
    msg.setSourceEntity(7U);
    msg.setDestination(19636U);
    msg.setDestinationEntity(241U);
    msg.altitude = 0.13230248517206056;
    msg.roll = 24425U;
    msg.pitch = 33733U;
    msg.yaw = 8655U;
    msg.speed = -14371;

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
    msg.setTimeStamp(0.07868201425002541);
    msg.setSource(56326U);
    msg.setSourceEntity(9U);
    msg.setDestination(13680U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.24783347002811162;
    msg.roll = 34997U;
    msg.pitch = 21898U;
    msg.yaw = 61958U;
    msg.speed = 22655;

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
    msg.setTimeStamp(0.8864157215322882);
    msg.setSource(35363U);
    msg.setSourceEntity(130U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(55U);
    msg.altitude = 0.5022280346814131;
    msg.width = 0.3689777073691821;
    msg.length = 0.7730371720237718;
    msg.bearing = 0.2415954047987049;
    msg.pxl = -14841;
    msg.encoding = 163U;
    const signed char tmp_msg_0[] = {-32, -6, 56, 121, 106, 99, 90, -122, -42, -98, -61, 15, -77, -110, 62, 5, 15, 78, -56, 27, -107, -53, 21, -121, -29, 29, 105, -36, 89, 90, 69, 120, -112, -53, -120, -59, 87, 52, -126, -61, 111, -45, 73, -53, 21, 122, -12, 71, 48, -33, 98, 96, 88, -98, -75, -101, -66, -45, -81, 61, -118, 125, -21, -21, -78, -1, 76, 53, -14, -11, 55, 123, -124, 20, -69, -20, 5, -20, -65, -43, 103, -95, -67, -2, -100, 36, -42, -83, 41, -91, 8, 16, -34, 34, -74, -117, -61, 49, -84, 1, -28, 58, -47, -113, 45, -34, -114, 52, 24, -19, -46, 104, 121, 45, 24, 21, 17, -100, 57, 87, -47, 86, -53, -105, 84, 72, -83, -104, 80, -92, 38, -106, 60, 126, 114, 99, -61, -10, 79, -3, -39, 91, 125, 39, 25, 61, 44, 46, -125, 58, 102, -41, 35, -103, 108, -12, -20, -68, -5, -46, -87, -125, 8, -60, -38};
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
    msg.setTimeStamp(0.16745187730588007);
    msg.setSource(42084U);
    msg.setSourceEntity(214U);
    msg.setDestination(56949U);
    msg.setDestinationEntity(112U);
    msg.altitude = 0.5129100664158327;
    msg.width = 0.968533774292698;
    msg.length = 0.6109747580483355;
    msg.bearing = 0.49837634612500425;
    msg.pxl = 2110;
    msg.encoding = 40U;
    const signed char tmp_msg_0[] = {-73, -116, -66, 76, 54, -120, -50, -66, 79, -19, 2, -109, 93, -3};
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
    msg.setTimeStamp(0.2108047071478758);
    msg.setSource(13540U);
    msg.setSourceEntity(120U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.05763268459797444;
    msg.width = 0.959711426935496;
    msg.length = 0.575559895815552;
    msg.bearing = 0.668500404380464;
    msg.pxl = 6212;
    msg.encoding = 220U;
    const signed char tmp_msg_0[] = {90, -52, -6, -89, 6, -83, 20, 14, -116, 31, 99, 25, -89, -33, -24, -114, 20, -119, -5, -119, 90, -70, -93, -72, 17, 108, 26, 114, -37, -104, 15, 105, 120, 34, 18, -44, 117, 81, 70, 81, -96, -55, -108, -81, 99, 109, -64, 95, 108, 113, -77, -34, -10, 75, 112, -62, -92, -3, -7, -13, -73, -37, -19, -112, -45, 6, -100, -88, -80, -47, -109, -97, -115, 119, -88, -61, 31, -10, -58, 82, 24, -36, 38, -71, 69, -64, -17, 63, -66, 20, -94, -103, 97, -63, -86, -25, -11, 117, -96, -81, -77, 41, 116, -92, -56, 79, 34, -44, -78, 113, 29, 113, -26, 115, 11, -66, 122, -112, 21, -34, 87, -69, -36, 99, 57, -3, 81, -45, -103, -79, 97, -67, 97, 87, 53, -8, 66, 124, -102, 5, -112, -65, -116, 96, -127, 79, -67, 116, -115, -98, 25, -82};
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
    msg.setTimeStamp(0.7993520620736883);
    msg.setSource(16105U);
    msg.setSourceEntity(182U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(7U);
    msg.text.assign("WMTWPHVMHAHSCSJTGISHQGWWICDPZNE");
    msg.type = 230U;

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
    msg.setTimeStamp(0.39476354502007827);
    msg.setSource(38885U);
    msg.setSourceEntity(112U);
    msg.setDestination(53640U);
    msg.setDestinationEntity(160U);
    msg.text.assign("WDCQYQVPBUYFODRKULOWIYGJRLJXEUCFBNDFAPLBATHISUCVHQUBOZSNKSPDZZXJGKRNMSLLARCXRKNNIQQPUHRVUJSLZVXWVBXZEITTFLECHKESSWPMGOZGHUNMIGAGELANSYHDIFXYKAEZLHMJTRRMIAQSBDOYVPXTCHQCJQVVWMPKBFFMIPQKYJHXNKDYWNTRWJQJWIOCCEOKMBPBLDHOIUFAWVEBFVDMEYXAXGPTSFZZANYZRUTDETGMJT");
    msg.type = 129U;

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
    msg.setTimeStamp(0.3182688546962501);
    msg.setSource(9272U);
    msg.setSourceEntity(113U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(221U);
    msg.text.assign("QCBPJZUGYTQJ");
    msg.type = 241U;

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
    msg.setTimeStamp(0.9173411276848957);
    msg.setSource(37036U);
    msg.setSourceEntity(33U);
    msg.setDestination(53503U);
    msg.setDestinationEntity(14U);
    msg.parameter = 231U;
    msg.numsamples = 30U;
    msg.lat = 0.4890463209445254;
    msg.lon = 0.2131677476160485;

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
    msg.setTimeStamp(0.1749452820341476);
    msg.setSource(41139U);
    msg.setSourceEntity(47U);
    msg.setDestination(12278U);
    msg.setDestinationEntity(244U);
    msg.parameter = 51U;
    msg.numsamples = 75U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 33061U;
    tmp_msg_0.avg = 0.5618350721377098;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9999634475976615;
    msg.lon = 0.07927270947183018;

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
    msg.setTimeStamp(0.9908503780505055);
    msg.setSource(42584U);
    msg.setSourceEntity(82U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(244U);
    msg.parameter = 53U;
    msg.numsamples = 114U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 42023U;
    tmp_msg_0.avg = 0.06417767460431612;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.46011352080003176;
    msg.lon = 0.7890342690308606;

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
    msg.setTimeStamp(0.5493893156434837);
    msg.setSource(1814U);
    msg.setSourceEntity(119U);
    msg.setDestination(33249U);
    msg.setDestinationEntity(1U);
    msg.depth = 36118U;
    msg.avg = 0.3250536640960302;

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
    msg.setTimeStamp(0.29565146631245653);
    msg.setSource(29844U);
    msg.setSourceEntity(24U);
    msg.setDestination(36449U);
    msg.setDestinationEntity(1U);
    msg.depth = 4238U;
    msg.avg = 0.5019719900265083;

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
    msg.setTimeStamp(0.7724034416584317);
    msg.setSource(25648U);
    msg.setSourceEntity(117U);
    msg.setDestination(40822U);
    msg.setDestinationEntity(26U);
    msg.depth = 94U;
    msg.avg = 0.7472125371855171;

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
    msg.setTimeStamp(0.31966577868322055);
    msg.setSource(2482U);
    msg.setSourceEntity(3U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.3782572087891132);
    msg.setSource(53118U);
    msg.setSourceEntity(160U);
    msg.setDestination(54090U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.6305045498211594);
    msg.setSource(53228U);
    msg.setSourceEntity(173U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.8904603893923176);
    msg.setSource(20121U);
    msg.setSourceEntity(189U);
    msg.setDestination(65030U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("LTAJWZKWULPCSZUYNCA");
    msg.sys_type = 105U;
    msg.owner = 43340U;
    msg.lat = 0.8322447232917942;
    msg.lon = 0.21858046292726785;
    msg.height = 0.812611550099451;
    msg.services.assign("UCHHZBRQVZEIRNNAUSIMFYXPSHHPMMXYITTTHJIHVBJCORTUMQWOWWBQJJNMRKZURZXHOWPFEUEAFRPUWGGZSWYVCLFONVIDMJXAYCMDIGYKQAACCRACVZTBNDOAQBSDMXUAJOBASTXSKNJHRGGKDEKKZP");

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
    msg.setTimeStamp(0.7323935082564434);
    msg.setSource(387U);
    msg.setSourceEntity(25U);
    msg.setDestination(56141U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("ZDYLMBTYZIGTIUHGIQNAAFLOHJTFKFUPYXKHRXGPWDOQLUKAAVFFCFVKQNJVWTWHDDXFICNTGJJBWFGJPGURASPSMROSUPWZRQLPEWNALESNNCTHNSCXCPYVUMTOPLGAVLMICJKZZDLFTEOHQZBVUEMSOMBQUISEGDTSEVBAXRHLPVUMWXZQJQRKJSNIECIQESKHDCQIRXBFNZJYMDERWBMCWHMXIORGBYVEXLAOHDGTYZKYUYYCW");
    msg.sys_type = 246U;
    msg.owner = 12118U;
    msg.lat = 0.009288161959657204;
    msg.lon = 0.4975164600435169;
    msg.height = 0.5919113485222671;
    msg.services.assign("CUQRVUZIMNMHTPTNYZTLFWGXBNQSMROZPUHRDEYREEIGVJJTWOFUHRWGALOASEBLMIUVCGAYROAWVGSHJYHKFEKOSUCQW");

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
    msg.setTimeStamp(0.35887104040618734);
    msg.setSource(3464U);
    msg.setSourceEntity(116U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("QSGJIJJUHFYXKVTBMXEWJGK");
    msg.sys_type = 50U;
    msg.owner = 23923U;
    msg.lat = 0.8156225968971691;
    msg.lon = 0.45869059666068834;
    msg.height = 0.23848373893085273;
    msg.services.assign("TMJYPAYYKBCIZLOLGLDEQPKMAOWNRJIU");

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
    msg.setTimeStamp(0.3960889571646541);
    msg.setSource(18003U);
    msg.setSourceEntity(49U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(123U);
    msg.service.assign("QVTJMSOAFWKVDFXIFQRQCCMIOXOJSMQNFBZWUBOYQVBILJTYKLDOWYPVMHQAJSNBYPBFOAXZCNLUERLVSSXINCEFOMRHUUQHPTLKIKTXPDJEWEKVZJFXLCZSWFYBEAPALJSPGWHRCHMHKMKXDSGNIMUFUDVQRZDJSQPZYRVPZIHZASUZDJUHWO");
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
    msg.setTimeStamp(0.8130380853422463);
    msg.setSource(36559U);
    msg.setSourceEntity(85U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(228U);
    msg.service.assign("WKXVVOIRNEMDHUBAHCCOMZIHKGORXNEIREEQWVYAUHTADKQORAPQTXXBBUOXMKYZBAGOCFPKPJNOGGEAAGLCTVZIMMVTCNSWEVPZEUSBINHTEJPZFZWUQHADMWJLMJDGSDJGTFWSMXJCREPFYUXOIZKXOQMWDSFFSBRUYIRLSZUYJTCLWYBKBDGYNJZFXIDQKLVYFEAGTH");
    msg.service_type = 123U;

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
    msg.setTimeStamp(0.8810214780096317);
    msg.setSource(23159U);
    msg.setSourceEntity(1U);
    msg.setDestination(46313U);
    msg.setDestinationEntity(105U);
    msg.service.assign("MQOHWAYDXKXENMKQSQYIRSHFECEHTINLVZLJCGPQVFXYNMLVJOJYCPDULIVKHCMFBYWAQUHDDWDGRGBRTTHIPLARXYTJJMURSMFSLTGZJPTKPONVSZUFGAOTDJLZWCOEADSZWHPTTYYVOPBIUPOUJURLGKCBVGREDAJXPXMGCHEZBIBSKKQDFDIZSJNCCURFNSSB");
    msg.service_type = 214U;

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
    msg.setTimeStamp(0.30264844570608085);
    msg.setSource(34539U);
    msg.setSourceEntity(167U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9580030860207914;

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
    msg.setTimeStamp(0.1896035119938998);
    msg.setSource(330U);
    msg.setSourceEntity(175U);
    msg.setDestination(47628U);
    msg.setDestinationEntity(77U);
    msg.value = 0.37593657723876095;

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
    msg.setTimeStamp(0.49968767496022004);
    msg.setSource(53879U);
    msg.setSourceEntity(160U);
    msg.setDestination(41833U);
    msg.setDestinationEntity(68U);
    msg.value = 0.2561072141711467;

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
    msg.setTimeStamp(0.9966228410291879);
    msg.setSource(23697U);
    msg.setSourceEntity(26U);
    msg.setDestination(2636U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8443042760118846;

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
    msg.setTimeStamp(0.9832331998591789);
    msg.setSource(23209U);
    msg.setSourceEntity(253U);
    msg.setDestination(33772U);
    msg.setDestinationEntity(253U);
    msg.value = 0.1583696673166919;

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
    msg.setTimeStamp(0.12175198393056119);
    msg.setSource(17182U);
    msg.setSourceEntity(168U);
    msg.setDestination(54113U);
    msg.setDestinationEntity(102U);
    msg.value = 0.442828549793986;

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
    msg.setTimeStamp(0.6030298858677187);
    msg.setSource(18928U);
    msg.setSourceEntity(210U);
    msg.setDestination(30910U);
    msg.setDestinationEntity(47U);
    msg.value = 0.13618125540003445;

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
    msg.setTimeStamp(0.044962483448038326);
    msg.setSource(872U);
    msg.setSourceEntity(37U);
    msg.setDestination(64919U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5977231675792305;

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
    msg.setTimeStamp(0.18443170047688562);
    msg.setSource(15U);
    msg.setSourceEntity(187U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(58U);
    msg.value = 0.10773467515743929;

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
    msg.setTimeStamp(0.8872179048982426);
    msg.setSource(40938U);
    msg.setSourceEntity(107U);
    msg.setDestination(44834U);
    msg.setDestinationEntity(27U);
    msg.number.assign("ROGXAPHYQZPXYWAQRGWBDFSFQOBIANJNOGTMLIPQABDHDGQTSKUVSOZACZCMZXKLOJNNCUDQYL");
    msg.timeout = 51836U;
    msg.contents.assign("RGUSCSNIBTTYWBRWKCAVKLXEOPFDVUDRCTDQLZFKXPYUIUNBJCEASTXNDLQIEVAUYJOGKLDLCAUHLR");

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
    msg.setTimeStamp(0.9293686899607427);
    msg.setSource(32273U);
    msg.setSourceEntity(116U);
    msg.setDestination(45319U);
    msg.setDestinationEntity(75U);
    msg.number.assign("WLEHDMFCBRLYCROXQLVQCVCSINWLYGFZKXCZTBTBJXFYPRIVQPUCXRJEOWXWUSRFDGHEXAJOESKMBUQSLITYZKSYCFPKLARTLVNJKEYUBSJIOQDJXAHXMXHNAMBPUVBVITWHYSW");
    msg.timeout = 23410U;
    msg.contents.assign("NJJGAHYOUNQIEYVVIIMSDNMLAVTQHHBCQGGKSLRGLLATQZWSWDGYPPFNVFDARXNEGBLUJGCXZWNCWQHUCETFWVPZJYULRRTYOFUZPWZYRSYKFMCXYT");

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
    msg.setTimeStamp(0.26162754559865997);
    msg.setSource(47886U);
    msg.setSourceEntity(207U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(48U);
    msg.number.assign("HNFBGVVFGB");
    msg.timeout = 50339U;
    msg.contents.assign("WDENQBVHQSHFPBUCVAQSBILBNQVEWHREDFFHQRCD");

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
    msg.setTimeStamp(0.5675944778906867);
    msg.setSource(23217U);
    msg.setSourceEntity(180U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(23U);
    msg.seq = 2898093517U;
    msg.destination.assign("BIWNXHLPSBGZVFCMTIJAUBYQAFGRSMDNWAYTHEVIMUYCVGDVAYKOZOROJVKZDDKEPEQSWOXJOKDKUDRTLEVFZLXFNELSCBSVIIPECDFRKCIQELZLXKPPTHRWGHQYHAWYELBZDNLGUZSHXPFIFJNRWCIHRHTPCMGZANYCBUARVDTJPQMJBXUCLBNX");
    msg.timeout = 3992U;
    const signed char tmp_msg_0[] = {2, -114, -126, -106, 74, -66, 83, -83, -3, -10, -36, -33, 77, -104, -52, -112, -71, 92, 49, 106, 118, -42, 75, 79, -59, -74, -48, 20, -73, 120, -85, -78, 52, 73, -102, 94, 57, -79, 86, -17, -60, 107, 101, 0, -49, -41, 91, 101, -49, -57, -65, -18, 75, -80, -103, -94, -54, -40, 103, 126, 52, 20, -2, 9, -60, 97, 27, -114, -22, 112, 52, 51, 42, -127, 75, -32, -38, -34, -76, 48, -78, 24, -37, -43, 96, -48, 120, 23, 98, -92, 41, -56, 33, 119, 42, -12, 37, -94, -27, 57, -74, -124, 30, 68, -21, -48, -41, -44, 10, 44, -7, -6, -104, 50, 97, -68, 97, -16, 4, 62, 67, 18, 13, -51, -99, 91, -40, 18, 81, -73, -121, -76, 25, 56, -49, -5, 102, -116, 57, 100, -111, 110, 13, -126, -7, 95, -37, -105, -45, 34, -121, -46, 110, -92, -113, -76, -51, 71, 41, 108, 108, 46, -30, 29, 84, -109, -68, 77, 7, -78, -57, 36, 44, 56, -110, -119, 24, 35, 103, -20, -84, 58, 121, -81, -38, 37, 49, 68, -63, -87, 89, 70, -128, -20, 86, -32, -108, 36, -125, 57, -111, 10, 92, 118, 123, 126, -74, 68, -111, -103, -101, -19, -66, -54, 52, -26, 83, -96, -61, 31, 21, -24, 96, 98, -16, 113, 96, 2, -9, 98, 32, 52, -112, 41, 62, -48, 47, 56, -127, 60, -127, -76, 64, 88, -109, 22, 74, -35, 19, 25, -116};
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
    msg.setTimeStamp(0.26399646078056305);
    msg.setSource(54400U);
    msg.setSourceEntity(199U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(81U);
    msg.seq = 2483607190U;
    msg.destination.assign("VFRHYVJGPZTWCTAYMWFSUHZSPSSXGWAJCQSMHCCCTRANIAQGVI");
    msg.timeout = 19216U;
    const signed char tmp_msg_0[] = {-91, -100, -19, -80, 41, -103, 17, -57, -29, 62, 110, 33, 71, -75, -110, -6, -58, -41, -31, 13, 41, -30, -6, -81, -51, -87, 7, 96, -55, 126, -113, -104, 86, 65, -124, 104, -23, 100, 99, 51, -47, -13};
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
    msg.setTimeStamp(0.7093354279564364);
    msg.setSource(37003U);
    msg.setSourceEntity(200U);
    msg.setDestination(25907U);
    msg.setDestinationEntity(35U);
    msg.seq = 3642328488U;
    msg.destination.assign("FFTYPVKWXHNQKDJBSAIDAPWLPJZCRZNLECCPXYBFVMSOKASVUZAZMMOSCGNGRWKTULIROFEGOEFXBXIQMHCAIPOGUYDLXPTTBUWXGKAGVIYMBSBOIQBMZXALKLJNVRVIDUVLOKJMJDYQFUQOTIFQSDLHNJGWAUQEJYKRUPEZEQFGSJERDBMNKDRNWBUGSQATHHHGC");
    msg.timeout = 1819U;
    const signed char tmp_msg_0[] = {-72, 8, -60, 84, -123, 88, -100, 95, 86, -113, -68, 31, -42, -122, -26, 124, -83, 103, 76, 81, 98, 124, -25, 60, 58, 67, 27, -71, -36, -71, 17, 48, 66, 10, -125, 91, -60, -106, -99, -51, -70, -18, -9, 116, 82, -62, 1, 114, 111, 9, -37, 79, -97, -89, 46, 114, -60, -106, 67, -28, 23, -69, 75, 94, -128, 67, 45, 21, -31, 53, -106, -41, 21, 85, 18, -29, 106, -113, -71, -96, 15, 98, -33, -32, -65, 111, -98, 116, -47, -68, 41, -52, -3, -65, 11, -119, -68, -18, 29, -83, 89, -17, -44, -38, 94, 22, -80, 108, 2, 126, 125, 9, 104, -85, 64, -31, -107, -33, 120, 54, 11, -33, -125, 2, -21, -106, -80, -34, 9, -97, -128, 58, -94, 8, -8, -64, 116, 24, 56, 29, 63, -126, 32, 14, -75, 42, -11, 97, -87, 76, 31, 120, -31, 104, 80, 77, -65, -12, 3, 42, -29, -106, 79, -39, -86, 109, 44, -42, -7, 125, 25, -110, 6, 88, -42, 95, 16, 46, 43, 104, 85, 19, 11, -122, 123, -3, 1, -104, 50, 108, 34, 115, 34, -20, -127, 52, -37, -7, -23, -95, -31, -54, 124, -54, -100, -49, 101, 55, -37, 50, 52, 77, 40, -80, -74, -79, 47, -65, -78, -120, -40, -68, -106, 57, -66, 117, 63, -89, 0, 71, -104, 21, -27, -39, 11, 95, -26, -54, 46, -8, 63, 18, -11, -95, -95, 93, 110, -50, 35, 89, 119, 2, -9};
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
    msg.setTimeStamp(0.5983619302577534);
    msg.setSource(60024U);
    msg.setSourceEntity(85U);
    msg.setDestination(37612U);
    msg.setDestinationEntity(59U);
    msg.source.assign("WPVTLUJXTAJFRMEJXBJBQUADHUWNNMROVEBNQPZDXEZGXYTCVJCVHXZFWDBBEXMKVFIIWKYIJKFHPKXPBNPSSZLDOTQIJVZYDUSXDTRNMX");
    const signed char tmp_msg_0[] = {79, 27, -123, 77, -115, 90, -13, 71, -33, -35, -45, -41, -11, 69, 50, 105};
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
    msg.setTimeStamp(0.244401954523231);
    msg.setSource(61406U);
    msg.setSourceEntity(141U);
    msg.setDestination(41262U);
    msg.setDestinationEntity(143U);
    msg.source.assign("HDNXKFVNWYIRKICCUUBEJKEFSALSBALZUYUYRTJMKXQCAWTQQSSEJHVQYZJFJAOJRUHIWPSUPAZPLP");
    const signed char tmp_msg_0[] = {6, -110, 18, -84, 17, 56, -59, 12, 49, -41, -12, 117, -2, -34, 36, 118, -46, -31, 120, -13, -104, 126, 77, 80, 71, 35, -118, 85, 111, -55, -71, 11, -42, 124, 78, 59, 71, 51, 22, 66, -115, -13, -38, 64, -56, 58, -81, 118, 123, 96, -110, -32, -81, -52, 121, -95, -13, -9, -113, -126, -44, 75, -126, 12, -57, 103, -89, 44, 80, -57, -94, 19, 74, -37, 0, 110, 14, 19, 93, -87, -29, 83, -16, -106, 93, 18, -31, -66, 114, 85, 94, -41, -93, -90, 92, -42, 125, 48, 67, -7, -3, -46, -113, -99, 75, -68, 116, 34, 106, 72, 9, -48, -20, -87, 10, -20, -112, -125, -120, -71, 57, -40, 65, -49, -113, -88, -34, 10, 10, -54, -6, -124, -37, -99, -20, 93, 68, 27, -123, -34, 126, -90, 18, -33, 6, 16, 45, 89, -52, -91, 4, 110, -7, -44, -1, -50, 15, 6, 71, 35, -55, -17, 36, -84, -27, -1, -51, -9, -11, 11, 60, -48, -41, -43, 85, 6, -39, 4, 56, -77, 79, -24, 40, -11, 89, 110, 5, -8, -100, -4, 125, 55, 17, 99, 117, 41, 78, 86, 68, -1, -41, -105, 83, 17, 113};
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
    msg.setTimeStamp(0.2564511850288764);
    msg.setSource(23791U);
    msg.setSourceEntity(239U);
    msg.setDestination(33345U);
    msg.setDestinationEntity(75U);
    msg.source.assign("IFJHVYQPHDVELSCJSRBPUKQNTQXKYLAURERHRYTABYGYZXDDVWLNWOPCTHYNUNTEAZHBUXFUAJVLKDGMQEVFCOQTOQZGTGVCVUQGQBPYYGTDNUKIWGWXWLZOEFRPOWDSEEMIMASOTXMUHEVRNIMOILREVWDBWHDMSSKOCIIJXJBZAJCJZGNJKLHKFEKJPSPCKXPMDLNFXISGYOBPLUBFFXATIQCCNXRISBSMMNRBOMADRQJFU");
    const signed char tmp_msg_0[] = {-17, 11, 8, 20, 101, 11, -99, 93, 33, 105, 70, -2, -34, 118, 99, 58, 115, 52, -82, 37, 31};
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
    msg.setTimeStamp(0.5720719285816822);
    msg.setSource(5594U);
    msg.setSourceEntity(135U);
    msg.setDestination(58865U);
    msg.setDestinationEntity(159U);
    msg.seq = 2466954953U;
    msg.state = 254U;
    msg.error.assign("WCPPHKYLNYTCPIJCQLDWMLXJVTMPVZDSCEIAMWLKDLSGAZTFMRFMAWCNOHWHCCMJWRVZHWVDSIOVIYKDFNTPIJGQYESXEVNBSEGBRZJIWYORPGNNBKYOCQPOQQHZDIWEQAKLQQZXAOMHUPURSUEYRKZMAGGXUGFIPUGKITQOJIVNOETXOEFXGALLRUBGRLZYDDXTDZRBUSFUXBBKVBTSNMHXRJTJFKFWUYZMPFTACSQJOK");

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
    msg.setTimeStamp(0.4283487258588895);
    msg.setSource(2295U);
    msg.setSourceEntity(205U);
    msg.setDestination(33333U);
    msg.setDestinationEntity(78U);
    msg.seq = 2848547361U;
    msg.state = 193U;
    msg.error.assign("UILKBORAJXCAVQJPFBMPSIPNQMZUEIFAYDUYUI");

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
    msg.setTimeStamp(0.19324722012960815);
    msg.setSource(41873U);
    msg.setSourceEntity(65U);
    msg.setDestination(35983U);
    msg.setDestinationEntity(18U);
    msg.seq = 355455668U;
    msg.state = 25U;
    msg.error.assign("TDXNUZNFXYJKRNOLCICFMYSQLBXIIAWMQYOPVXBJWVHZHFCGYMTPBFLLBSNKMAHWPWKUJSLWRIJADOBKQPCMIVYPEMFUKEAXCVXSNHSSONGGDHMKQERDAIPEHLWCUQESPTAZSJKVYPOLJIGUFUNZFTSGWOOGGZAQHNYUDXWRLTBBDLVCRZDUBIETGGEAZKBOFRIBPVCCMNMFOJTNJXXAZRMVEWLRTOTPFVYHXTRCQHDQURWGY");

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
    msg.setTimeStamp(0.32774299973814347);
    msg.setSource(65229U);
    msg.setSourceEntity(5U);
    msg.setDestination(42026U);
    msg.setDestinationEntity(15U);
    msg.origin.assign("SGDYAZOJECKDLOSLDRFKIRVMWSUICYWQMVNJSPOCEIJCYQSCVQYBLUYNBBALJERBSGIJCATQHDLLWBESHMTRVKAQIMTYBRXHAKUAPLWUGNXEWEFWTZVOGOPCUPRMFHROZPHCOLOTDEQTDYOCLGNKUZVZXZH");
    msg.text.assign("EWZVWADEMKHIXDDUOSICPPAOYAGHEIVJCKAYOYEFHQEREGRGCVPXXRXFLEMFEFLRNJRNUFNGTHRZVUZJUPFHSMQHJNVQZBBTKQLOXWCLNBBUWUBMENKDIAKGF");

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
    msg.setTimeStamp(0.7363534727147313);
    msg.setSource(9112U);
    msg.setSourceEntity(53U);
    msg.setDestination(47447U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("XRSUYZUTXBSVTCPAWCHNZLKFIVJI");
    msg.text.assign("AWXCZNOSJMIKZAQUINXZUSZMHOBLFCHNTRAJJUPTXHLAZQIDSGFYDAYBGSQUMGUIEEHVPLTNJLVEAIBWQDGOKVE");

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
    msg.setTimeStamp(0.8375876536055055);
    msg.setSource(25057U);
    msg.setSourceEntity(140U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(70U);
    msg.origin.assign("VIZVVUKKQWDTYGMFCQAYEZLRLVSZMRWSDIPFQOLGMYQMLSRKKNEEGTDBRMNBTCXHOENPQFBUQGHTVYJXJODAZTFLXNWBI");
    msg.text.assign("IPEFQKCKMCBI");

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
    msg.setTimeStamp(0.2422485033782923);
    msg.setSource(25382U);
    msg.setSourceEntity(123U);
    msg.setDestination(60201U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("WEGHERPOBMGCKQNHZXOPICQDELUUVUVMVDLALVOMHHIWGNXXAROTQTFCAEHYQGXOCXWMSQSCQNMRLZJQTRWJFLGLGNLXZJKKGWJNKEKGRYTDDYHNZYSPPOTNTBSZKWARFPHJFCRARDBIJYMIAVHFRDPCNBEGWSPVUXYJBQIZLWITOPYMUCLIJEBYKZIEEMBRVUJOMVZNXUHWTZHALPUDFPSXIBVGOIZAODXKFQWYCAEBS");
    msg.htime = 0.8374119752115059;
    msg.lat = 0.3682772488836875;
    msg.lon = 0.6443494731149068;
    const signed char tmp_msg_0[] = {-38, -68, -126, -42, -90, 77, -75, 97, -41, -125, 12, 56, 26, 45, 12, 58, -87, -6, -59, -20, -50, 80, 62, 120, -13, 125, -102, -38, -54, -111, -127, -12, -117, 115, 82, -43, -72, -63, 99, -84, 94, -49, 32, -125, 107, 20, -104, 109, 121, 60, -85, -123, 31, 112, -12, 39, -86, 34, 11, -75, -72, 63, 115, -32, -51, -100, -94, -94, 47, 79, -121, 56, 58, -91, -127, -15, 47, 96, -73, -43, 104, -89, -110, 73, -74, -86, 43, 53, 31, 114, -67, 56, 124, -18, 76, 35, 5, 83, -17, -90, 94, -65, -18, -59, 105, 120, 53, -53, -117, 12, -43, -123, 41, 73, 106, 38, -58, -125, 17, -95, -114, -73, -40, -18, -121, 121, 91, 120, -45, 63, -105, 100, 18, 25, -110, 65, -117, 32, -17, 56, 79, -127, 103, -82, -35, 14, 95, 115, -15, 122, -127, 113, 123, -126, -85, -19, -10, -46, -35, 14, 119, 64, 43, -95, -38, -44, 105, 68, -93, -41, 120, 90, -111, 46, -44, 93, 111, -48, 74, 8, 77, 90, 122, 8, 56, 84, 92, 79, -30, 102, -37, 70, -114, 85, 107, 67, -111, 102, 52, 95, -81, 0, 77, 122, -109, 39, -65, 121, 62, -7, 45, -104, 2, -33, -31, 116, 88, 71, 104, 35, -117, -23, -127, 9, -107, 23, -72, -128, -66, 56, 118, 87, -28, 91};
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
    msg.setTimeStamp(0.8065929640672466);
    msg.setSource(56199U);
    msg.setSourceEntity(197U);
    msg.setDestination(11943U);
    msg.setDestinationEntity(67U);
    msg.origin.assign("JZLXHFSEKEFBRGUSMTY");
    msg.htime = 0.3986801726559669;
    msg.lat = 0.29171868163222336;
    msg.lon = 0.980494733014885;
    const signed char tmp_msg_0[] = {-78, -12, -63, -72, -118, -32, 75, -126, 108, -103, -21, 42, 123, -74, -10, 25, -99, 80, 113, -127, 70, 2, 14, -1, -55, -99, -19, -30, 25, 56, 53, -117, -37, -50, -83, -117, 58, -33, -27, 0, -6, 65, -5, 100, -96, 1, 100, -41, 17, -102, 125, -100, -67, -47, -53, -19, 5, -21, -62, -11, 58, 76, -16, -32, 14, -27, 104, -106, -103, -16, 78, 101, -94, -63, 94, 8, -128, -31, 78, -67, -110, 52, 49, -89, 97, 118, -27, 54, 76, -25, -112, 112, -93, -79, -7, 82, -81, 14, 92, -44, -22, -25, -42, -109, 24, 63, -125, -99, 102, 22, 44, 41, 44, 47, -17, 118, 72, -93, -63, -100, 68, -118, -111, -30, -77, 117, 21, -96, 97, -23, -33, -90, -12, -112, -43, 7, -77, -109, 99, -107, -25, 23, -65, -25, 66, 70, -90, -128, 32, -127, -92, -128, 113, 58, 16, 80, 121, 118, -91, 90, -60, 8, 44, -67, -116, 60, 5, 1, 48, 35, -15, 105, 6, 50, -58, -43, 66, -41, 123, 36, -75, -4, 13, 9, 82, 25, -58, -51, -120, 31, 35, -4, 7, 22, -81, -112, -86, 86, -6, 28, -82, 87, 24, -44, -114, -109};
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
    msg.setTimeStamp(0.9551954113699304);
    msg.setSource(65509U);
    msg.setSourceEntity(78U);
    msg.setDestination(40440U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("RRRPTBVCVNXDONTAKNALYQIOEGHHDZRVTOKXGWWOTAFCIYOFWLSCEKFWSQERUXAEYSLXBNBPLHYFOIZNMNCDNLLQFQUSAPMRVLROIUANZTJPVIMKIEOVGJCSE");
    msg.htime = 0.8090558247392158;
    msg.lat = 0.09673521149000952;
    msg.lon = 0.6276537514556995;
    const signed char tmp_msg_0[] = {-94, -108, 14, 59, -28, 98, 95, -125, -58, 8, -91, 59, 30, -12, 87, -50, 111, 72, 18, 97, -61, -124, 75, 0, 12, -52, 115, 59, -99, -67, -65, 45, 46, 51, -42, 64, 47, -15, -65, 46, 91, -63, 68, 105, -75, -79, 76, 96, -54, -89, -84, -5, 3, -16, 2, 63, 124, 121, -58, 73, -31, -50, -69, 30, -92, 53, -70, -13, -105, 70, -59, -55, -16, -1, 114, -11, -24, -19, -98, 67, -107, 0, 57, 114, 107, 91, 1, 119, 19, 17, -34, 62, 111, -76, 56, 59, 11, -82, -102, -15, -52, 83, -53, -105, -11, -6, -13, 117, -74, -122, 82, -43, -75, -95, -44, 119, -3, -97, 85, 42, -44, 95, -116, 92, -36, -105, -42, 99, -78, 47, 64, 116, 5, -118, 111, 51, 55, -36, 42, -51, -64, 10, 27, 97, -41, 38, -66, 91, 85, 13, -88, 87, 56, 116, -46, 104, -98, 17, -120, 100, -43, 88, 67, 32, -107, -59, 40, -79, 63, 35, 86, 98, 36, 96, 121, -67, -30, 123, -43, 47, 91, 19, -38, -44};
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
    msg.setTimeStamp(0.5642136876487508);
    msg.setSource(56397U);
    msg.setSourceEntity(70U);
    msg.setDestination(18640U);
    msg.setDestinationEntity(68U);
    msg.req_id = 20451U;
    msg.ttl = 54334U;
    msg.destination.assign("HMEZGQFXUQTAOEWKXCRDKDJNBDXKVZFQMYEHGYPIRSBFJULLBBKNAQFFVLSTRRKMBESWDOZPVSMLVBUYITWGVJMQXNDGRQZAJJPLGOFCCXPKTQTYZGCFHXYPHSPZENPONOWOGROBIBQLUAWAWYEUGRDXXDIYNKYDLHOWMHXNOECUCGRUWIJIAVCAKZEMHNNZPFVKUASVLHPZAOLSBSLPGSJCIDFSEWVZRNTJTECKIJQVTYCRIQJX");
    const signed char tmp_msg_0[] = {-103, -64, -80, -60, 115, 49, -53, 75, -103, -72, 95, -79, 26, -82, 90, 93, 41, -38, 93, -33, 33, -42, 18, 7, 74, -117, -68, -128, 123, -102, 83, 65, 49, -42, 76, 75, 66, 34, -104, -57, -74, -119, 79, 16, 94, -111, -119, -85, 70, 15, -121, 71, 112, -128, 43, 55, 90, 108, 68, -98, 100, 0, -78, 3, -51, -125, -43, 26, -60, -45, 92, -94, 7, 9, -116, 81, -41, 106, -128, 49, -56, -94, 12, 106, 118, -7, 24, -86, -53, -82, 83, 83, -116, -110, 125, 120, -109, 35, -22, -33, 47, -84, 36, 21, -41, -17, 49, -78, -42, 101, 105, 22, -116, 107, -98, -81, 35, 78, -108, -46, -40, 9, -117, -70, 9, -35, -95, -103, -71, -5};
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
    msg.setTimeStamp(0.5119648283217068);
    msg.setSource(27690U);
    msg.setSourceEntity(221U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(51U);
    msg.req_id = 24599U;
    msg.ttl = 43972U;
    msg.destination.assign("YEGRLTUZPUHVYXGMRZOHZOZLQETKPXSGRSEGKLIUULZLDMNJDKOQTBAFQCDKPGNVTICBWLVWDBXJNCECEANILDPNXMZVCBJRTGHJTUDHAXPYNJCPEKJRFVRSXMGNJHASOMWYLAPBGQYUAFJOBCIPMXQOWKKKTF");
    const signed char tmp_msg_0[] = {48, -103, 58, 78, 90, 5, -127, -67, 87, 91, 115, 48, 18, -29, -77, -124, 28, -13, -97, -26, 93, -17, 12, -18, -71, 72, 91, 39, 25, 40, -18, -26, -85, -61, 111, 8, -19, 10, 111, 74, 45, 42, -25, 106, 55, 122, -20, -89, -7, 94, 84, -72, -127, 124, 75, -38, 15, 121, 98, 29, -11, -28, 12, 70, 5, 32, 22, -97, -75, -12, -100, -123, 122, -3, -71, -120, -83, -31, -41, 84, -18, -63, 116, 85, 29, 82, -118, 34, -73, -4, 45, -105, 29, 14, -47, 122, 58, -117, 123, -94, 12, -78, -80, 26, 65, 18, 27, -75, 22, -97, -43, -53, -101, 117, -81, -20, -16, -19, 89, 106, 40, 58, -78, 88, -48, 120, -126, -37, 18, 37, 79, -78, -6, -103, 59, -63, 7, -109, -100, -73, -90, 82, -113, 91, 13, 25, -85, -122, -110, 81, 15, -51, 14, -31, 66, 115, 59, -115, 4, 50, 91, 122, -91, -78, 116, -31, 53, 59, 89, 26, 104, 61, 35, 21, -25, -98, 100, -124, -69, 79, 50, -83, -63, 48, -55, -102, 6, -104, -11, 12, 39, -102, -55, 93, -94, -57, -9, -52, 98, -115, 113, -103, 27, 27, 11, -59, -115, 54, -8, 103, 126, -32, -53, -57, 105, -49, -120, 30};
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
    msg.setTimeStamp(0.8431064907402966);
    msg.setSource(12993U);
    msg.setSourceEntity(58U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(63U);
    msg.req_id = 33066U;
    msg.ttl = 13523U;
    msg.destination.assign("VTVUSZRAFSDKGYNGUYSRAWZCHWCPOXNBTLFHZRPKMMBXTHCJPQSHUWMPNERMONOEYXUQVUDBNRWJLIXTKLRQTEJEWFASPWGAQMYKXLXZGFADNWLJOYCEAOEEIVXLMIFVTQPDENKGLMAVMKFNIGOGTWGKSRZY");
    const signed char tmp_msg_0[] = {-48, 73, 91, -87, 43, -89, -43, 4, 28, -45, -30, -77, -14, -94, -25, 112, -115, -111, 52, 20, 48, 55, 63, 66, 40, 63, 87, 6, -76, -119, 15, -83, 65, -23, 29, -14, -94, 88, -11, 64, -57, 3, -40, 27, -66, 94, -89, 96, 98, 118, -12, 111, 116, 70, 32, -115, -39, -50, -51, 1, -63, 66, -43, 87, -76, -55, 105, -15, 8, -28, 62, 82, -28, -81, 56, -65, -7, -97, 93, 64, 74, 49, -121, 83, 72, 3, 42, 98, -53, -115, -37, 99, 34, -97, -104, -27, -70, 98, 115, 59, 0, -32, 114, -42, 74, 23, -124, 16, 35, -68, 78, 80, -28, 108, 7, -107, 72, -4, 92, -65, -79, -116, -63, 30, 43, -22, -85, 86, 68, 57, -82, -89, 5, 84, 95, 17, -43, 60, -52, 115, -49, 7, -82, 2, 112, -121, 31, -59, -107, -59, -108, 70, -69, -120, -47, -24, 32, -97, -84, -107, -55, -5, -98, 51, -52, 15, 97, 34, 35, -47, 68, -106, 25, -40, -123, 106, 94, -106, -27, -74, -52, 119, 119, 26, -82, -74, -97, -40, 112, 54, 40, 119, 16, -54, 37, -80, -52, 105, -112, 6, -107, 58, 61, 73, -60, 12, -12, -15, 88, -51, 98, -8, 113, -113, -12, -90, -49, 116, 39, 46, 49, 123, -116, -108, 29, -4, -61, -103, -60, 100, 82, 44, 20, 17, 24, 20, 10, 14, 35, -72, -60, 47, 17, -115, 73};
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
    msg.setTimeStamp(0.26351413868520224);
    msg.setSource(3141U);
    msg.setSourceEntity(23U);
    msg.setDestination(53711U);
    msg.setDestinationEntity(26U);
    msg.req_id = 61257U;
    msg.status = 190U;
    msg.text.assign("FWIDRPPTCUTAIEDYSVUKSXVGTFQUQFYZOHARFNFFOLZLIWZJJUCUPRJBPXRSCWUNJVURQMEZGMGHBGMTTFIGEEKJIIUWSYCBNWTMZPFBGPEZQELPKDJQDTMHIKHGVAYYKNVRFTGIHJNAKSTYLSICXNRKXLXOSWDBTQENNMLAZBOELBVYLGMAAWXCBRDC");

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
    msg.setTimeStamp(0.5743348231772671);
    msg.setSource(40646U);
    msg.setSourceEntity(162U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(16U);
    msg.req_id = 9277U;
    msg.status = 97U;
    msg.text.assign("CSBIDUXJQUAWCGOERHHSGNSAQKCOWSBSVTNDZFCTCD");

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
    msg.setTimeStamp(0.854988306336454);
    msg.setSource(24278U);
    msg.setSourceEntity(10U);
    msg.setDestination(8451U);
    msg.setDestinationEntity(103U);
    msg.req_id = 58666U;
    msg.status = 5U;
    msg.text.assign("XQIQPAOZGBLUNADONRKPZSOHWPSFQUMUB");

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
    msg.setTimeStamp(0.6452810813010169);
    msg.setSource(13439U);
    msg.setSourceEntity(207U);
    msg.setDestination(52268U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("OUDBXIEFQDYGKZQROFRBBVRZVNPQMGRPOLEFDTFUWILJKSUUNTKWMLPTUIGADSPIHXOQKYLPGKTKWCMUCLYHQKHJOJNNDARMVVLZZXGSQRZEICJTPJYESMSUYXQSELYDJZZKVCJRPXHLAWTLCZFJNMDDRQHVZVILGSDNABANQKUYGSCJPTNFCYCWMBPHEWBTQIHAGYBGOASWRO");
    msg.links = 3068130560U;

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
    msg.setTimeStamp(0.9526723242645464);
    msg.setSource(19110U);
    msg.setSourceEntity(147U);
    msg.setDestination(32334U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("HUYOZHGIVQDDALJOWDSNPCHVFH");
    msg.links = 2365227449U;

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
    msg.setTimeStamp(0.4124844692491427);
    msg.setSource(23407U);
    msg.setSourceEntity(84U);
    msg.setDestination(26277U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("KYEPATRHQEORCWWCOGINQGPNHUGHCJHKPUOMIJWQTCUQIYXOUHOWNYVZGBJBZXTSVARYUVFXGIEPDEVEYLRISKZSMWFOZJJVTYNGBGQRZKMCVMAWTBWMMFACOHBJSCIREKZXPREZGOVYDAHTJVSUSUAWLUDXRDMPCTFQNZFKDYQELKNNJXPDPYXOBCTHNIBMEILXIDKFALZJJLFAGSBDKZSLLVEALNPURFTTLDXWSQHYFKU");
    msg.links = 837055088U;

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
    msg.setTimeStamp(0.4960201471615677);
    msg.setSource(54625U);
    msg.setSourceEntity(91U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(181U);
    msg.groupname.assign("NIPMDMJODFUDDGKFTIEVAPRVGEWXDZLZKWXWUVPWKYTVPQZTHJZUKZFRVGXNXFDHCHABQMXUNHENNKEKRCYPRJWGLGGVWYSELJPQMZNCKRCSQAQEYCAMJUZAH");
    msg.action = 192U;
    msg.grouplist.assign("XIPPFMGPCNNPBRCDKRLJWGKGZIBCBQTEIWODJZXNTAKOBWVTJYDYSBASURSODMUGSETEQLHF");

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
    msg.setTimeStamp(0.28530353930536023);
    msg.setSource(38349U);
    msg.setSourceEntity(159U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(180U);
    msg.groupname.assign("MBYQSOVKXFKMCFTPTUFPJIAQPDCGDSMDGFVOVDYKGWSCVIPRTUDQCCRTYAEGSAXWZIBGZIRQIJSXBOIXHPHQJLNFYQIFZLQQZKKDNRNRLNJYTANEZSUBNCLSJNWWUWVHYVOCCJZMXBBAGELIECEBR");
    msg.action = 145U;
    msg.grouplist.assign("XQEZYCLPLVWGAPPACWRTXXEMHPLKKYUQFLEMMNBHJKVWYASBJSOQAQDTAGMZUJENUAGRMBQWVEPBKIOXBOJHUHKTTDDQSVMCWQFUHVPXGQZJCGXTISLNJEMKXDVYZVUIDYBCSONIUJRMNBFFLNWZDYIVUCILXHNURELRTFOFQPOHCRTJTGNKSRXYOGISADBVAGAYDWMYIFIUFEMHLEBWHNDSCXYCWQOF");

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
    msg.setTimeStamp(0.1370405298471904);
    msg.setSource(53910U);
    msg.setSourceEntity(86U);
    msg.setDestination(3411U);
    msg.setDestinationEntity(194U);
    msg.groupname.assign("XPGZYMMVPHPTZSVLKFZVCTCABJOVRDMDPJFYTGFOVBNXVPVJNUYONCSUCJIGFLMXMBAAHBZKADKZSYKDERLXTQENCJKWGHMNGWICHJBNQRQZXF");
    msg.action = 156U;
    msg.grouplist.assign("BYDDEBJUXGUO");

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
    msg.setTimeStamp(0.990856885800324);
    msg.setSource(35140U);
    msg.setSourceEntity(57U);
    msg.setDestination(1224U);
    msg.setDestinationEntity(38U);
    msg.value = 0.079185146504821;
    msg.sys_src = 10738U;

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
    msg.setTimeStamp(0.5392308957548521);
    msg.setSource(1699U);
    msg.setSourceEntity(55U);
    msg.setDestination(26151U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5157870654915374;
    msg.sys_src = 12600U;

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
    msg.setTimeStamp(0.19831662619255963);
    msg.setSource(5604U);
    msg.setSourceEntity(215U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(84U);
    msg.value = 0.16803174902829932;
    msg.sys_src = 39232U;

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
    msg.setTimeStamp(0.8492083999989091);
    msg.setSource(64U);
    msg.setSourceEntity(254U);
    msg.setDestination(16898U);
    msg.setDestinationEntity(225U);
    msg.value = 0.1007855269971798;
    msg.units = 54U;

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
    msg.setTimeStamp(0.47152026525393187);
    msg.setSource(15417U);
    msg.setSourceEntity(85U);
    msg.setDestination(23097U);
    msg.setDestinationEntity(245U);
    msg.value = 0.9928736311414158;
    msg.units = 21U;

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
    msg.setTimeStamp(0.9809427099185355);
    msg.setSource(7897U);
    msg.setSourceEntity(21U);
    msg.setDestination(20947U);
    msg.setDestinationEntity(65U);
    msg.value = 0.1136733988001386;
    msg.units = 250U;

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
    msg.setTimeStamp(0.12046902722609987);
    msg.setSource(35624U);
    msg.setSourceEntity(120U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(23U);
    msg.base_lat = 0.39311669185007037;
    msg.base_lon = 0.7089388606072106;
    msg.base_time = 0.2585522068668994;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19909U;
    tmp_msg_0.destination = 27090U;
    tmp_msg_0.timeout = 0.8846405114354179;
    IMC::GetImageCoords tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.camid = 122U;
    tmp_tmp_msg_0_0.x = 50889U;
    tmp_tmp_msg_0_0.y = 37390U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.21691174325828522);
    msg.setSource(63684U);
    msg.setSourceEntity(109U);
    msg.setDestination(36813U);
    msg.setDestinationEntity(211U);
    msg.base_lat = 0.9171432640011754;
    msg.base_lon = 0.9070733853229397;
    msg.base_time = 0.4606151056119199;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 7690U;
    tmp_msg_0.priority = 58;
    tmp_msg_0.x = 13908;
    tmp_msg_0.y = -23832;
    tmp_msg_0.z = -22015;
    tmp_msg_0.t = 7318;
    IMC::LinkLevel tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.044230528591709395;
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
    msg.setTimeStamp(0.3879507578022854);
    msg.setSource(24529U);
    msg.setSourceEntity(142U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(202U);
    msg.base_lat = 0.42812488389760195;
    msg.base_lon = 0.9432745203583489;
    msg.base_time = 0.8816180248678279;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28579U;
    tmp_msg_0.priority = -126;
    tmp_msg_0.x = -7723;
    tmp_msg_0.y = 14301;
    tmp_msg_0.z = -22015;
    tmp_msg_0.t = 970;
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 59U;
    tmp_tmp_msg_0_0.zoom = 202U;
    tmp_tmp_msg_0_0.action = 157U;
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
    msg.setTimeStamp(0.45243326631003);
    msg.setSource(20714U);
    msg.setSourceEntity(254U);
    msg.setDestination(37053U);
    msg.setDestinationEntity(178U);
    msg.base_lat = 0.3507331006397826;
    msg.base_lon = 0.9092482593541041;
    msg.base_time = 0.9707269196356553;
    const signed char tmp_msg_0[] = {47, 25, 53, 0, 28, 97, -106, 74, -28, 20, 39, -118, -23, 23, -55, -16, -63, 75, -102, -83, 27, -51, 80, -66, -36, 70, -50, 6, 102, -123, 16, 116, -110, -114, 124, 62, -114, -76, 108, 82, 69, -27, 15, 17, -109, 123, -63, 111, -94, -124, 2, 62, 104, -56, 108, 99, 37, -20, 51, -106, -127, 93, -90, -57, 86, -29, -124, -91, -25, 77, 66, 97, 96, -70, -5, 54, -91, 4, -67, -39, 95, 100, -55, 120, 37, 5, -10, -112, -11, -76, -58, -67, 94, 63, 51, -50, 118, 82, -95, 17, 19, -97, -27, -100, 93, 118, 79, 0, 76, 43, -13, -10, -68, -26, -17, -37, -31, -18, 6, 24, -53, -113, 110, 25, -53, 34, 113, -100, 2, -84, -82, 27, 78, 92, -116, -46, 41, 22, 25, -4, 101, 125, 95, -62, -103, 86, 17, -47, 27, -95, -97, -4, 30, -115, 78, 33, 30, 30, -83, 120, 76, 124, 19, 23, 107, 48, -52, -39, 94, 23, 65, -100, -55};
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
    msg.setTimeStamp(0.6969694699629544);
    msg.setSource(58934U);
    msg.setSourceEntity(57U);
    msg.setDestination(34061U);
    msg.setDestinationEntity(123U);
    msg.base_lat = 0.3317215512084214;
    msg.base_lon = 0.16006264917801738;
    msg.base_time = 0.9582564027798833;
    const signed char tmp_msg_0[] = {-110, -57, -39, 72, -24, 83, 60, -92, -49, 79, -16, 121, 21, -50};
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
    msg.setTimeStamp(0.7212851408918637);
    msg.setSource(23999U);
    msg.setSourceEntity(161U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.7207648723531583;
    msg.base_lon = 0.6491088230662849;
    msg.base_time = 0.047332556013834126;
    const signed char tmp_msg_0[] = {-88, 16, 5, 5, -29, -116, -96, -67, -36, -25, -13, 26, 116, -93, 59, 36, -80, 30, -66, -89, 125, -101, -98, 48, 108, -87, -76, -81, -72, 53, 104, 10, -4, -24, -111, 49, 23, -78, -103, -114, -109, -115, 85, -11, -82, 22, -28, 3, -103, -55, 34, 48, -77, -10, -128, 68, 57, -75, -18, 51, -85, -51, -1, 78, 104, -33, -99, 78, 99, 35, 108, -37, -60, 87, -108, -103, 104, 49, 26, 9, 99, -128, 84, 18, 28, 56, -1, 59, 99, -107, -70, -24, -36, -116, -100, -34, -9, 109, 35, 88, -117, 40, 91, 46, -66, -106, -30, -16, 76, 110, 107, -44, 94, 117, 16, 29, 64, -128, 59, -2, -70, 63, 69, 92, 24, -122, 120, 66, -51, -61, 8, 8, -118, 7, 25, -87, 88, 31, -92, -33, -53, 53, 55, -124, -83, 80, 58, 77, 66, -84};
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
    msg.setTimeStamp(0.41174440181990113);
    msg.setSource(56222U);
    msg.setSourceEntity(11U);
    msg.setDestination(32808U);
    msg.setDestinationEntity(138U);
    msg.sys_id = 21603U;
    msg.priority = 111;
    msg.x = 31853;
    msg.y = 28061;
    msg.z = -22836;
    msg.t = -6170;
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.39776571529275573);
    msg.setSource(33926U);
    msg.setSourceEntity(17U);
    msg.setDestination(48021U);
    msg.setDestinationEntity(158U);
    msg.sys_id = 61001U;
    msg.priority = -37;
    msg.x = 13474;
    msg.y = -22509;
    msg.z = 18934;
    msg.t = -7256;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 81U;
    tmp_msg_0.period = 2050065863U;
    tmp_msg_0.duty_cycle = 3929792771U;
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
    msg.setTimeStamp(0.5438881967803789);
    msg.setSource(65245U);
    msg.setSourceEntity(73U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(194U);
    msg.sys_id = 13597U;
    msg.priority = 13;
    msg.x = -11069;
    msg.y = 11562;
    msg.z = -17329;
    msg.t = 787;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.2083558232346694;
    tmp_msg_0.ch02 = 0.9072701284380111;
    tmp_msg_0.ch03 = 0.5062260399784161;
    tmp_msg_0.ch04 = 0.6442982011843373;
    tmp_msg_0.ch05 = 0.11632932500776616;
    tmp_msg_0.ch06 = 0.06546055790279293;
    tmp_msg_0.ch07 = 0.8046855986822842;
    tmp_msg_0.ch08 = 0.6422251594235493;
    tmp_msg_0.ch09 = 0.960487857950142;
    tmp_msg_0.ch10 = 0.2865591033321212;
    tmp_msg_0.ch11 = 0.49795322366607897;
    tmp_msg_0.ch12 = 0.3315070441408099;
    tmp_msg_0.ch13 = 0.12216931770053496;
    tmp_msg_0.ch14 = 0.24631796337747858;
    tmp_msg_0.ch15 = 0.8523875033091664;
    tmp_msg_0.ch16 = 0.5252375019892204;
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
    msg.setTimeStamp(0.953053873877385);
    msg.setSource(22259U);
    msg.setSourceEntity(10U);
    msg.setDestination(65040U);
    msg.setDestinationEntity(62U);
    msg.req_id = 28393U;
    msg.type = 248U;
    msg.max_size = 32166U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.15941875520439164;
    tmp_msg_0.base_lon = 0.5780406949338747;
    tmp_msg_0.base_time = 0.29396858266042714;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 19785U;
    tmp_tmp_msg_0_0.destination = 19250U;
    tmp_tmp_msg_0_0.timeout = 0.7954105291802334;
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 25031U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7598072544171475;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7994799895131661;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8404418089425582;
    tmp_tmp_tmp_msg_0_0_0.z_units = 43U;
    tmp_tmp_tmp_msg_0_0_0.duration = 44750U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2197930680239213;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 140U;
    tmp_tmp_tmp_msg_0_0_0.type = 64U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.6893579291814622;
    tmp_tmp_tmp_msg_0_0_0.length = 0.1853714847610699;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.025272780303029374;
    tmp_tmp_tmp_msg_0_0_0.direction = 169U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VNRUPYJQJPKYCHXESZMDPDPHIVZYTPHETHLEYG");
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
    msg.setTimeStamp(0.05394439147825536);
    msg.setSource(43959U);
    msg.setSourceEntity(137U);
    msg.setDestination(36967U);
    msg.setDestinationEntity(92U);
    msg.req_id = 59758U;
    msg.type = 251U;
    msg.max_size = 30380U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.08962209306957247;
    tmp_msg_0.base_lon = 0.8810178338201552;
    tmp_msg_0.base_time = 0.5332292822788229;
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
    msg.setTimeStamp(0.8833604009853984);
    msg.setSource(30597U);
    msg.setSourceEntity(46U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(211U);
    msg.req_id = 41783U;
    msg.type = 83U;
    msg.max_size = 58614U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.22944267588076117;
    tmp_msg_0.base_lon = 0.4958005518970158;
    tmp_msg_0.base_time = 0.9368993318755457;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 49420U;
    tmp_tmp_msg_0_0.priority = -89;
    tmp_tmp_msg_0_0.x = 17441;
    tmp_tmp_msg_0_0.y = 5208;
    tmp_tmp_msg_0_0.z = -18803;
    tmp_tmp_msg_0_0.t = 11999;
    IMC::DesiredLinearState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.9104049785370866;
    tmp_tmp_tmp_msg_0_0_0.y = 0.8943341970038923;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7218993346744015;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.2082115330592118;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.2709635059034289;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.085573074629123;
    tmp_tmp_tmp_msg_0_0_0.ax = 0.6239245882590292;
    tmp_tmp_tmp_msg_0_0_0.ay = 0.10516597630965141;
    tmp_tmp_tmp_msg_0_0_0.az = 0.14539145181533386;
    tmp_tmp_tmp_msg_0_0_0.flags = 53659U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.731600688060965);
    msg.setSource(47768U);
    msg.setSourceEntity(62U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(209U);
    msg.original_source = 50511U;
    msg.destination = 11875U;
    msg.timeout = 0.2844952385513311;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 58275U;
    tmp_msg_0.lat = 0.609408098958732;
    tmp_msg_0.lon = 0.9507281161961768;
    tmp_msg_0.z = 0.5441632855827967;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.duration = 860U;
    tmp_msg_0.speed = 0.7730853440345586;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.type = 6U;
    tmp_msg_0.radius = 0.6754955764009201;
    tmp_msg_0.length = 0.7932724176032164;
    tmp_msg_0.bearing = 0.3344789765226889;
    tmp_msg_0.direction = 188U;
    tmp_msg_0.custom.assign("EKPQLJFTLRRHTSXSRZQMAYHYJWQAAVABVEFDCOIPJINHZAAKTZPXLZFLPFQOBWJZPMCXT");
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
    msg.setTimeStamp(0.5464706756009822);
    msg.setSource(57231U);
    msg.setSourceEntity(224U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(230U);
    msg.original_source = 45547U;
    msg.destination = 28259U;
    msg.timeout = 0.20513277609035196;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 30164U;
    tmp_msg_0.type = 228U;
    tmp_msg_0.utc_year = 41965U;
    tmp_msg_0.utc_month = 59U;
    tmp_msg_0.utc_day = 69U;
    tmp_msg_0.utc_time = 0.17271194163344405;
    tmp_msg_0.lat = 0.4663038614261129;
    tmp_msg_0.lon = 0.833891603404075;
    tmp_msg_0.height = 0.36411343906795546;
    tmp_msg_0.satellites = 168U;
    tmp_msg_0.cog = 0.6402463078745213;
    tmp_msg_0.sog = 0.011058240507959116;
    tmp_msg_0.hdop = 0.9440314581754249;
    tmp_msg_0.vdop = 0.7820933820899634;
    tmp_msg_0.hacc = 0.7571816038312565;
    tmp_msg_0.vacc = 0.66897706225911;
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
    msg.setTimeStamp(0.642156998199653);
    msg.setSource(8179U);
    msg.setSourceEntity(5U);
    msg.setDestination(42198U);
    msg.setDestinationEntity(0U);
    msg.original_source = 7074U;
    msg.destination = 55668U;
    msg.timeout = 0.5404268816161256;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 162U;
    tmp_msg_0.lat = 0.44482167427754704;
    tmp_msg_0.lon = 0.994766471986447;
    tmp_msg_0.x = 0.3106765325014945;
    tmp_msg_0.y = 0.45088570862989497;
    tmp_msg_0.z = 0.9973642836618699;
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
    msg.setTimeStamp(0.47968808812848995);
    msg.setSource(34420U);
    msg.setSourceEntity(27U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(216U);
    msg.type = 91U;
    msg.comm_interface = 58995U;
    msg.model = 58637U;
    msg.list.assign("MTSUIMBOVDVMPGROQRICXYWHUFOAGDKTJAXPWNOQCZXLEJZNBFWTZAORPRQCYVYLKLOWEMBBSKVADRLWYKPHPHIQUNATZNOBXWYNYVEJBEIFXHLOHNJNXMCSQUPIQJRKPUVHIVIYUVDEBNLSHYSFOLQSRPAQOCDKFFZGDMTTKJUXIRRWEAEF");

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
    msg.setTimeStamp(0.12052259602732052);
    msg.setSource(40158U);
    msg.setSourceEntity(127U);
    msg.setDestination(50841U);
    msg.setDestinationEntity(233U);
    msg.type = 16U;
    msg.comm_interface = 17140U;
    msg.model = 64165U;
    msg.list.assign("CHQXSXFVGAQUWXOTDHRNXFTRMIDZKULMCBFTEXGPGLPEUIOEUHFWKTXXNPMY");

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
    msg.setTimeStamp(0.9252623761290893);
    msg.setSource(57201U);
    msg.setSourceEntity(160U);
    msg.setDestination(18172U);
    msg.setDestinationEntity(247U);
    msg.type = 123U;
    msg.comm_interface = 58711U;
    msg.model = 22871U;
    msg.list.assign("PFHJJIIPDWNJPVXYNHEDJWMMRVPONKAACOZBXYXTQOIEYVCVRNTXGWKSRYQOEEXKBNPLEZXZCWHIZHDTLLSOCRWYEBOIGMISULPRQAULTEMXCAMDDAXMYAYNCBCALIRQEFZZIROGUUSGWFVMGPWVVKKFUBQBKWGLDQGAWPHHXJZ");

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
    msg.setTimeStamp(0.9766083487081096);
    msg.setSource(46404U);
    msg.setSourceEntity(216U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(218U);
    msg.type = 93U;
    msg.req_id = 1617918687U;
    msg.ttl = 22792U;
    msg.code = 168U;
    msg.destination.assign("IWBVULGGXNNEKMINMUGQZNUDJSYRXCZZQMJFQYYJNTAMJYBFWRQPTCGAYMHTLVNRJYESTJIZNRFOXIPQEHQBTTWGWVPALCJFGZFDMKUCVFQDORHDJXIUVVWEWPBZSLFOKT");
    msg.source.assign("SBHTYTBQOT");
    msg.acknowledge = 137U;
    msg.status = 29U;
    const signed char tmp_msg_0[] = {-127, 82, 36, -86, 46, 117, 115, 69, 94, -117, 124, -100, 79, 35, 47, -23, -7, 2, 78, 52, -99, -15, -108, -7, -1, 68, -11, 74, -84, 68, 107, 14, -51, 116, 115, 43, -73, -17, -79, 121, -104, 43, 48, 47, 28, 16, 55, 75, -106, 58, 107, 110, -121, 19, -72, -90, -23, 80, -8, -3, -36, -45, 13, 39, 33, -122, -84, -8, 36, 61, 13, 38, 65, 11, -102, 37, 30, 45, -55, 20, 24, 80, 14, -39, 113, -27, -16, 77, -122, -77, -4, -29, 88, 93, -39, 117, 31, -32, 117, 7, 38, 124, -32, 102, -38, -91, -99, -12, -61, 78, -53, -48, 64};
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
    msg.setTimeStamp(0.7065480975080293);
    msg.setSource(39685U);
    msg.setSourceEntity(48U);
    msg.setDestination(10245U);
    msg.setDestinationEntity(45U);
    msg.type = 49U;
    msg.req_id = 2456720989U;
    msg.ttl = 52464U;
    msg.code = 148U;
    msg.destination.assign("WVNKJXMDOOOMSMEXKEYLYISWHOLYTNEFYHC");
    msg.source.assign("JOAYNSXQSPMSLHWQUBRMUXIKKMSCDJONPOMAEKHRNSTDLMNVVWDMCPUDCKDZNUXVFVLETADSAEQHFAQTWBINBYGLOCZKAUFFRXYRPWPCCTUKLSQEVNWRFZCHYMGFQSBIYXYMWZ");
    msg.acknowledge = 17U;
    msg.status = 221U;
    const signed char tmp_msg_0[] = {-34, -77, -107, -37, -97, -7, -44, -11, 47, 70, -22, 105, -44, 4, 49, -67, -57, 120, -17, 84, 53, -99, -67, -120, -126, -16, -70, -58, -115, 80, 64, -69, 21, -17, -116, -25, -45, 33, -107, 111, -125, 56, -100, 11, 102, 5, -125, -127, 124, -61, 89, -102, 26, 31, -127, 124, -118, 84, 62, 80, 74, -127, -54, 91, 35, 29, 84, -108, -104, 16, -42, -71, 62, -4, 44, 114, -87, -47, -39, -13, -10, 109, 44, -19, 80, 103, -112, -62, -127, 103, 25, -21, 11, 87, -89, 7, 57, -82, 110, 98, -27, 45, 113, 32, 71, -106, -8, 118, 3, -84, 6, -127, 103, -6, -36, -22, 117, -32, 42, 107, -41, 111, 73, -96, 44, 27, -61, 49, 69, 73, -15, -91, -50, -19, 101, 118, -30, -102, 19, 105, -44, 40, -34, 85, -32, 120, -50, -112, -26, 101, 71, -78, -60, 6, 13, -41, 118, 104, 50, -19, 90, 99, 4, 35, 6, 68, 102, -76, -46, -38, -123, 96, 93, -39, -77, -51, 65, 70, -121, 38, -126, 55, 81, 59, 106, 14, -18, -25, -42, 72, -80, 41, 58, -24, -104, 28, 125, 55, -102, 75, 51, 18, -26, 51, -34, -37, -104, -61, 71, -69, -57, 96, 105, -53, -66, -128, 97, -86, 73, 51, -76, -50, 38, 66, 80, 49, 107, -45, -96, 104, -15, 20, -10, -22, -21, -31, 20, 68, 47, -86, -41, 55, -16, 58, 57, 28, -86, 111};
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
    msg.setTimeStamp(0.39188021974296294);
    msg.setSource(20713U);
    msg.setSourceEntity(68U);
    msg.setDestination(9961U);
    msg.setDestinationEntity(94U);
    msg.type = 156U;
    msg.req_id = 616802307U;
    msg.ttl = 23080U;
    msg.code = 22U;
    msg.destination.assign("MVKPWWEBXGDFRQRGKQXTSKAJZYDYJLMTVNZWJCPBWKPMIRDWGQLZBUWZLLYQILECTIDOFNMQBDAZJHAZEASPIFBUICYHNFFOABCBTGHWGYGJOSVXSOZRBVIJYFHIBFETHMDFFYNLNAAQTJETNO");
    msg.source.assign("VVDRIPMGPJQNMC");
    msg.acknowledge = 63U;
    msg.status = 12U;
    const signed char tmp_msg_0[] = {-18, -96, 28, 2, 40, -18, 97, -93, 97, -89, -11, 80, -80, 59, 86, 17, 110, 33, -3, -86, -6, 120, 119, -8, -103, -16, 22, 22, 103, -32, -52, 13, -7, -101, -92, 122, 9, 89, 83, -63, 6, -38, -2, -63, 42, 30, -120, -24, -125, -70, -61, -1, -68, -64, 94, 92, -78, -54, 53, 109, 105, -89, 112, -56, 27, -67, -118, -116, -103, 110, -37, -107, 22, -86, -72, 84};
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
    msg.setTimeStamp(0.8028246421557261);
    msg.setSource(58818U);
    msg.setSourceEntity(87U);
    msg.setDestination(18001U);
    msg.setDestinationEntity(202U);
    msg.id = 174U;
    msg.range = 0.133561793495252;

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
    msg.setTimeStamp(0.3105429422404806);
    msg.setSource(16671U);
    msg.setSourceEntity(180U);
    msg.setDestination(18582U);
    msg.setDestinationEntity(41U);
    msg.id = 128U;
    msg.range = 0.8474905613532449;

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
    msg.setTimeStamp(0.41093829682515537);
    msg.setSource(22046U);
    msg.setSourceEntity(46U);
    msg.setDestination(12999U);
    msg.setDestinationEntity(251U);
    msg.id = 45U;
    msg.range = 0.4056300915601354;

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
    msg.setTimeStamp(0.4735279653511051);
    msg.setSource(6178U);
    msg.setSourceEntity(141U);
    msg.setDestination(46446U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("DEUTGDPFJLYVCNXHZNRHUJAOOEIBKEPDBLZVBCZPYI");
    msg.lat = 0.8809831435092873;
    msg.lon = 0.5905874948505485;
    msg.depth = 0.49181492125634707;
    msg.query_channel = 140U;
    msg.reply_channel = 6U;
    msg.transponder_delay = 234U;

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
    msg.setTimeStamp(0.7346292582908172);
    msg.setSource(18247U);
    msg.setSourceEntity(184U);
    msg.setDestination(28721U);
    msg.setDestinationEntity(110U);
    msg.beacon.assign("PGSXYOFOWFOUIHQFLLYOGQVQMMWVCCCSKGDNRUJKCMSAQWZCDNANLKZWTUBOGPYBDBXPHSRUMBYHSERFAIIQTCLZWOPCRDTEZHEFXWYQGVXOWAITNBIIDVLLUKNKXBYIJZURTNQ");
    msg.lat = 0.9738389362944463;
    msg.lon = 0.5455570396302364;
    msg.depth = 0.18399735135859674;
    msg.query_channel = 239U;
    msg.reply_channel = 164U;
    msg.transponder_delay = 122U;

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
    msg.setTimeStamp(0.4277270505339922);
    msg.setSource(42305U);
    msg.setSourceEntity(246U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(83U);
    msg.beacon.assign("KLDOERTHYPOQZZBGCUEOKJZDJDAPSQBBPWSHSWZTFSWTGZAYQJURBEKYVDNVCBFMUQPOGMDIVMQWEHGRZGATNIUNHPEKTESQGAMAXAXGUMPNIYIDPSTDERRVAMNMFGCOKUXISYFLLXCKUQYNDLWLBFAIFQTIWOAUELWOXFTNFVVJDRBZSCLOWHRJAVUJUOGVQMXRLFJYYMTBROPFNEKICXXPJ");
    msg.lat = 0.7002833221191791;
    msg.lon = 0.8439934542942187;
    msg.depth = 0.7981200272543307;
    msg.query_channel = 220U;
    msg.reply_channel = 190U;
    msg.transponder_delay = 142U;

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
    msg.setTimeStamp(0.2258643382606338);
    msg.setSource(17257U);
    msg.setSourceEntity(30U);
    msg.setDestination(17013U);
    msg.setDestinationEntity(155U);
    msg.op = 55U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AJCJINDOAHDZCSGZVOXMRBCHDCXEPGSRVOZPTEPRTIRBLNFYDPFNLFQJKIXJCGNMSRUMVPHLGTFDZUQDNRMRISSUMVANEBEMJORRBKSMVOCYXREAXKOPXWLJIZWPJVZSWNQIHEEQABKDBVWDBUYUFWFKOSHLOPQAQZZBKTNKYJUTVOTNGYKVXTDMEGMAWCZIATXKZLVLUPTSBYCAUHFEFXCQSXKLWWYULHYGGIUA");
    tmp_msg_0.lat = 0.1855070195294367;
    tmp_msg_0.lon = 0.48546887138997874;
    tmp_msg_0.depth = 0.41903091356049627;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 192U;
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
    msg.setTimeStamp(0.4722149961891776);
    msg.setSource(42244U);
    msg.setSourceEntity(140U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(138U);
    msg.op = 208U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NKXHAFXOQYIKALEZKBWGALLBVFJIGXTBTLBHFGCVRZXRTOPJQFHOWQAWKPRZIHLPSRBNUWQVJO");
    tmp_msg_0.lat = 0.14380458958587472;
    tmp_msg_0.lon = 0.9218259166699958;
    tmp_msg_0.depth = 0.14853565001399638;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 140U;
    tmp_msg_0.transponder_delay = 5U;
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
    msg.setTimeStamp(0.8186587748608275);
    msg.setSource(7495U);
    msg.setSourceEntity(71U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(16U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.4336654693255988);
    msg.setSource(30399U);
    msg.setSourceEntity(84U);
    msg.setDestination(63859U);
    msg.setDestinationEntity(111U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 97U;
    tmp_msg_0.op = 170U;
    tmp_msg_0.request_id = 8425U;
    tmp_msg_0.plan_id.assign("SBWTWANCWSGZFSBHHABGETLIRUHDODWLPCKASUMDVMZEGVQECEHWPCFPQQGFOMCUXLNFMFCQYIRVZLYWZRCSTGISIYQJIFKZHXPPBEYDEJXADIAVMLVSJZZZOOMELRQKMAKRXFKKQCTQDTEYXUUAJYJYEZKRYHKNXLETYNUNVOPGFXTHOIDBALVGBVUXUCATWDJIBYPVWULTNNHWHZGIPHFBUMRJSRDMJNBPLNVTCSRJXQPJKOQKBWXOGID");
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("THSLRATRKEARYWRPZPHY");
    tmp_tmp_msg_0_0.action = 107U;
    tmp_tmp_msg_0_0.grouplist.assign("WRMGBZQNZSUVAQCTEDJGDUKYIHOFTYODIZNNGFLTLSOIHBLNCEVH");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("NLYHAIXKJQPLZMJFWTVXKIRONFLUUPCSEMIKUYFZPCXPEJRMACIAYMYSQPENIQTMRYBYMVCTWLGRHHFPHSNHBNESVVOFMNGTVTKJYQPEDEUAHRNSKEQKWOCYBQKDCBRVFLPTBGWIRABJDBXLWGWUBZJXILXQMJBTMOUAZDKRCEDTEDFJGSHDXDIZVLUXTGOOZNNOISUVSDZRYHGUTJFNCIPQOGALHKZOEVJG");
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
    msg.setTimeStamp(0.7144050198770173);
    msg.setSource(19167U);
    msg.setSourceEntity(94U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(199U);
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.926225813438658;
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
    msg.setTimeStamp(0.1825286291420053);
    msg.setSource(53299U);
    msg.setSourceEntity(55U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(123U);
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.35440615704094847;
    tmp_msg_0.x = 0.30545341922790903;
    tmp_msg_0.y = 0.2887748253441894;
    tmp_msg_0.z = 0.48274165480467224;
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
    msg.setTimeStamp(0.2294204242410839);
    msg.setSource(54788U);
    msg.setSourceEntity(56U);
    msg.setDestination(15223U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.6104034185796785;
    msg.lon = 0.7790837502748188;
    msg.depth = 0.24063282642789707;
    msg.sentence.assign("IGARASWYBZYOSTXQZBQDOGOWLFFIXQAVCJUGVKHHKTMLDSVJRPNHCNEPRKHDQPJXAHWFCASFUNOSPMDQLFQMHNSATYIXKKLGNMOPGGRZXEFDUDFWJPBKLLTTHNTAXDWKCPIYYFBTCEXWJOJCHLMUWANDVMRZJQBUUMFSEOIRUJWVKVFOCBEITYUYAJIVC");
    msg.txtime = 0.8144071424164677;
    msg.modem_type.assign("JOREAQQFDFPMBXYTWQVBHMGUNVENFVXPOZUXENLSYFSQDDBSMWHSKAGMEWQJBSDIRGQZNATDFUPXLTDLPPTKJIZRHUIIOANUAUEWLTBORCPBOJDMIXCAOXMRLJKHCTRJROKIVJSFKVTQGCZYGOGYCZGBYKHARINOMWSFMFCHXQZVIGQPCLWYYVLCAUGNSEBLNWXMHJDUUOIVCEEDJSWQPWYBYAPMVIBFEXPDVNRUKHLKT");
    msg.sys_src.assign("RVQUDNWLBNTHHAFQBOFNGOPURKATMNATVERLDIVNAMGLWBWEKSVZQCAPIXUTTZCIVOOQVNSVZJMDCHCRYYMFDUNHGFKXTLBOCXXPYEQFRGAFZOTVKIPJFMBGEAQYGQOMG");
    msg.seq = 10667U;
    msg.sys_dst.assign("ZIRXZHNCQWOHDLYIFNIWYLZHLIFTJPHWNEUHRTRFOOXCADUUDIEIGTMSNJCQWKSPHVUTBVAQQTMHVLXMASIFPCWMOWEKOZYOVNLJLUKDDVLBITBGVQPFEOGRMZTJFLUDSKQTNZFZGFCIDOPUPGDCUMVAXXXQORBKABEYQKRSHFRJENSYPYXQZYOPHERAAECRGWCZVMXTKWSXRABKJAKAGMU");
    msg.flags = 95U;
    const signed char tmp_msg_0[] = {-53, 25, 113, -89, 35, 119, -108, 58, 47, -46, -119, -92, -61, 88, -110, -106, 55, -16, -23, -9, 113, 92, 82, 49, 28, -44, -119, 26, -90, -62, -46, -38, 28, 109, 120, 105, 6, -89, 82, 76, -99, -59, -63, 19, 110, -69, -67, 83, 1, -31, 13, -122, 35, -126, 120, -112, 57, 4, -115, 109, 82, 73, 81, -128, 47, -100, -5, -94, 46, -117, 50, 63, 63, -20, -59, -48, -116, -36, 76, -22, -31, -2, 75, -65, -60, 72, -64, 42, -2};
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
    msg.setTimeStamp(0.880434641707655);
    msg.setSource(63925U);
    msg.setSourceEntity(130U);
    msg.setDestination(48769U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.41272368527902425;
    msg.lon = 0.3253849393172278;
    msg.depth = 0.6429400799272446;
    msg.sentence.assign("YGKOLUTYZNQXNAJMBACNXRJFEJOZJZTBEEVIPBOQAGKHNSCYMYDNENYMVEQABBGTRXPLIEUFSOJBBZOWDZWFIZLYKTV");
    msg.txtime = 0.15919223343183575;
    msg.modem_type.assign("PRJLQKZNEPBNXMEFYQRZSMMZJKFEQTONJDHFDJYOSYCVJVWPJMITHEWCIAIHRFUNDUSOUHVVQGOUQIVUZWOCKBNTLACSLHXLSWXJIQGYAMNRXGLXGYHTLQMOOZMNPLRHIPZSBFMKJPJEDRBHTBDOXIVWAESVRYCYTGOPRNRSHUDZVBHSVWFCKCGPTGGZEEQQWWXJAGPBKTNMUZDBUDPAYUKTAX");
    msg.sys_src.assign("EQQRPVYQPHTZBYOUMZAWPDEYLDCGIGSCFRDFAEZPSYTGOYYSVKXWGLTUTJMTRHSNHUWIWDAHEYDORZLKSUAHFUYERNXPTAWAOVBBKVQJZDQCHNU");
    msg.seq = 49742U;
    msg.sys_dst.assign("BGOCNMTLQNPLNKIHFZFUKTMWFYGEVAKIBQKNNDRDCTYXPNZYVTMSFBACDEIVSXRMOHOURWVGUOPLSPXXAVXDHTORYXUOCRQWQGMGLJWFYCBTHMEEXZOFVNQQIPUSMWCGVUCXKJYWAKLIINZADERIGXGKLOWYMZWUIEZDCTHQGHHZESPSEABUADTZKAKVESJYAASWUFBONOYPMWRJDUQDLRHRFXTNCC");
    msg.flags = 3U;
    const signed char tmp_msg_0[] = {93, -6, -15, 58, 30, 115, -32, -86, -86, -99, -73, -42, 70, 67, 36, 40, -35, -13, -8, 44, 18, -35, 86, -95, -92, -29, -58, -88, -3, -95, 37, -79, 116, -128, -99, -92, -46, -1, -119, 62, 13, -75, 100, -105, 57, -72, -65, -98, 89, -2, 82, 82, 42, 93, 90, -78, 26, -75, 7, 90, -125, -43, 123, -116, 42, 64, -34, 9, -74, -53, -80, 99, -21, -28, -125, -117, 119, -9, -49, -108, -34, -54, -66, 60, 64, 58, -86, -42, 54, 5, 62, -22, -88, -125, 38, 93, -123, 3, 63, 70, -50, -4, 56, 47, 113, 5, 34, 34, 95, -27, 19, 4, 102, 123, -61, 10, -115, -127, -24, -100, 22, -49, -105, -26, -7, -104, -71, 52};
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
    msg.setTimeStamp(0.23478532410778363);
    msg.setSource(45551U);
    msg.setSourceEntity(96U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.20986227654653788;
    msg.lon = 0.276900807514889;
    msg.depth = 0.6188907516202478;
    msg.sentence.assign("RCKUQDAVLAXKLZKNFMRWBFWMFONUXBDCBYTXRSZDKPTESKYJOSPXUDDTDOIPNGFAQQICHILINLBKQJMBGVYLWKVHUEEBXMZLCRVXOYTCGZRUJEFTONPZRIDMXIMHMFAGCJRTIZJVBWEUQSYODCNUECJFRNMBKPBJJNEZSVIOHSGPOIXWOQSQAWHGFLMNRWHYVAXXWJKSPU");
    msg.txtime = 0.12456194537642729;
    msg.modem_type.assign("HJYLMCNMAFQQYJLWANDDJEGMOKIHOXGLZHENGAOGCVBSTZQUQZBSUJAKGHQWBTLRSEBFTCMPULKWIOEYYDZRWXIPTSYYRQCPNTVFVNUWOSFWKVEOXOMCHKUPYDSGCWJDRJVTIAQLPATKCVZXWBZWKUDXVJGRMXHZAIMKNIGRIGBADXCNFSOLQYZEDMPRIQZJJFBTSPCZPYUHKSUYNQAREGSWFE");
    msg.sys_src.assign("SAGBIKGOAVEEPBDULEIEELQSGMYGAICQATCHCLNDGMMRNQEVVRJUCDVIVWRKANXTEAKSQGPOCYSLYRHZVNGKCQOWKCCQLODWWPUXYLXBGREQEROFLOPUNKKFJDDMYPHHZBZDDXRUAPHRSBMHEXWFTNMMGCOJSTKYH");
    msg.seq = 36653U;
    msg.sys_dst.assign("DCBDBHUSEEWCYKXHGLADJXIGXOGSURNLQQYTUUDHCLUEJNKYEFNUDPQVPFARTMMIVX");
    msg.flags = 34U;
    const signed char tmp_msg_0[] = {-104, -55, 0, -112, 68, 41, 90, -75, -39, -31, 93, -50, 45, -31, -31, 10, -29, 40, 117, -2, 109, 2, -85, -128, -42, -67, 1, 114, -36, -52, 122, -119, 105, 49, -77, -21, -89, -127, -87, 81, -31, -115, 124, -91, 91, 112, 60, 65, 28, -60, 126, 63, -108, -83, 72, -104, -5, -88, -99, -84, 98, -65, -70, -56, -75, -81, -90, -45, 46, 47, -72, -40, -59, 90, -40, -34, -79, -37, -103, 38, 52, -55, -32, -11, -71, -2, -32, -104, 58, -126, -119, -122, 39, -3, -127, 94, 101, 80, -111, 28, 75, 108, -27, 21, 79, 83, 56, 18, 61, -45, 69, 62, -30, 86, 95, -59, 76, -62, -124, -49, 23, 33, -27, 15, -75, -96, -46, -86, 15, -46, 3, -96, 102, 69, -105, 97, 26, -40, 80, 32, 50, 105, -87, 74, 7, 25, 109, 111, -17, -95, -59, 52, 32, -81, -65, -25, -30, 107, 71, -81, 18, -24, 51, -28, 90, -61, -57, -46, -61, 60, 68, -1, 55, 101, 119, 12, 105, 64, -89, -6, -40, 105, -70, -7, -16, -66, -34, 119, 85, -92, -93, 91, 41, 54, -45, -34, -18, -76, 94, 85, 17, -33, -50, -100, 61, 107, -105, 24, -27, -43, -65, 38, -9, -23, -112, -92, 75, -115, 41, 106, -39, 89, -90, 108, -43, 70, -72, -71, 107, 122, -37, -87, 39, 38, 71, 118, -87, -46, 115, -72, 17, 75, 16, 123, 77, 113, 50, 94, 23};
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
    msg.setTimeStamp(0.02649723398464565);
    msg.setSource(34348U);
    msg.setSourceEntity(169U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(127U);
    msg.op = 141U;
    msg.system.assign("MNJHULKYPBZHPDSHDDFUOYSYTKWELILJLKLUOLVUYTFGMVRFMQXINEFNBGVLTJMWJCOHBTUQCRQODRBQIACUCXXFAWDPAXUJHTUYIITHAPUYJNOSSDREIMWSDNBWZGPHKEJBKXPCGEKZZNXVXWNAJNABRGRACROTUPFDKTZQWOVINFVSEVQYGDZZAVMOGPEVNIEGCVK");
    msg.range = 0.5956298828681408;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 11616U;
    tmp_msg_0.lat = 0.44518016929773563;
    tmp_msg_0.lon = 0.6337372410398218;
    tmp_msg_0.z = 0.8699076629931751;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.6048656690690498;
    tmp_msg_0.speed_units = 93U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.1904917370335505;
    tmp_tmp_msg_0_0.y = 0.1130597525961089;
    tmp_tmp_msg_0_0.z = 0.5954099662578163;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VRKZDSOOWWBWFPTZDAJVSHGSFFLJOBLKQWPAVBTFXXUYEIPLEQOISN");
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
    msg.setTimeStamp(0.45996219316559817);
    msg.setSource(25394U);
    msg.setSourceEntity(12U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(14U);
    msg.op = 254U;
    msg.system.assign("GRSNZPMWEEHBBSKNGWFZIPFTBXGPPCXLNPONGXVEIKWNXNDWCFQPRGCOBOEURVVFAJMZLDEMZCOYXUQUWSOHEYWHYTTCTLDSMQDMZSBFFYAUWORFIJTXYOJLSHUWPDVDDPYCAZGDJIFMERNZIGJFRYOHAIMKUPGQBAISZSKBGIUGKYUTDQQYDVVXBWPVLUKAJQLIMXROJXLJEQKEYQBJLCMALSAETAXFKRZJRHCVOHK");
    msg.range = 0.2549713638716955;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8428377663331711;
    tmp_msg_0.z_units = 70U;
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
    msg.setTimeStamp(0.7940921305018694);
    msg.setSource(24087U);
    msg.setSourceEntity(205U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(18U);
    msg.op = 164U;
    msg.system.assign("VBTPCXACJDDTIGKDZUDLPOAOXVRCVQNAVBSLPINQKSFJSKYXAVDDPGBFECRMSEWOPTREOZLJWJKVUNWGJIXGNWFXYHJLVAHOMHRFYDGMWOZEPXGGYKTQYOWHIFGVFBITYXEKVOTC");
    msg.range = 0.31497175305127256;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.552743881748961;
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
    msg.setTimeStamp(0.8092415151350332);
    msg.setSource(1171U);
    msg.setSourceEntity(174U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.47992064120085776);
    msg.setSource(15390U);
    msg.setSourceEntity(218U);
    msg.setDestination(9633U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.4696061702499128);
    msg.setSource(54409U);
    msg.setSourceEntity(234U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.12260475452007347);
    msg.setSource(5461U);
    msg.setSourceEntity(128U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(139U);
    msg.list.assign("NHKMYBJNXPGDVRPLKVQEFJPDEZUHEFBNMWOSDNMRBIECDIYZKXYRACRFMMANLLRBITPVOXHZOFUAGPJUPVHIXCWOLUIDKWETFQWCTSTRZSBJLXGYOAJSALYHJUVDDUJIPRVYISUIZXYTNVWQKNIBHVGLUONAWIFFGJOSQCYUFZETFPJKLQKGTPBESZFXKEBMESWGMVHGCTQCRBD");

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
    msg.setTimeStamp(0.7198824744615728);
    msg.setSource(44813U);
    msg.setSourceEntity(7U);
    msg.setDestination(65168U);
    msg.setDestinationEntity(227U);
    msg.list.assign("BOOYBFIFLPMYNRZGWLGMMLYBXBVSEYDEIBQWAYFDBMCCMRZXVJNNDHWOJQKRDITFLEVEEKCXVIQPOHDAGPQTMVPHFXINCZFWVZGAKSZNXVBXOPFCHAELPVM");

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
    msg.setTimeStamp(0.21669961761768852);
    msg.setSource(530U);
    msg.setSourceEntity(228U);
    msg.setDestination(6120U);
    msg.setDestinationEntity(179U);
    msg.list.assign("AYXWHYHFBJZRKGQGTACJMEZJDITNZUMFOOZJISXZJQPMDWNGBZPDTWGQYIUCCTNLRZHUEDHPDKOAKVKBEKLYLEHREDXPERVRFMFPJIMRRRJAUXSLVYVKFUXPSQQMCFHKLJCIZVWEFOMYIBVNOHW");

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
    msg.setTimeStamp(0.7212655569091593);
    msg.setSource(41716U);
    msg.setSourceEntity(75U);
    msg.setDestination(51494U);
    msg.setDestinationEntity(210U);
    msg.peer.assign("JTZKXYEAOWHAJGDZGMI");
    msg.rssi = 0.7981819689066798;
    msg.integrity = 14045U;

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
    msg.setTimeStamp(0.9772595959011927);
    msg.setSource(49660U);
    msg.setSourceEntity(160U);
    msg.setDestination(57817U);
    msg.setDestinationEntity(23U);
    msg.peer.assign("PSJWMFTYOGWRQBNYFTUCPLRDLVUOGMMJQPIVNSVCDWYKVIDEXLEAQJSQGYJQSWMTPNKBTHBXCVNDBFHZCZARHBUCLYSGFPDXDZDICIAZEMHHUSWNPAPCUUOKAMLSQYKOA");
    msg.rssi = 0.43954617197058865;
    msg.integrity = 7342U;

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
    msg.setTimeStamp(0.5495092189592243);
    msg.setSource(40470U);
    msg.setSourceEntity(118U);
    msg.setDestination(14372U);
    msg.setDestinationEntity(16U);
    msg.peer.assign("AHKSSYEXMTTUHYDNACLJVVSYITUVNBREGYPDHFDEXYPMIJQUGYNRYXXBKBTLKDJUZVLRZWJPSGCIVIWYJGFMIOIELCLEFPLQMPCKWMZHAGQPWMXQFEHJDUQNVRBOHDAGOKATQOWDPWHIUSNIOIJXRUHMLTKBNUSDLQWKSVKSOXZCPUYEZCASVLRGAMTWJZFKPVBTZUAXRBQOBWRQBAZEOFCSWTN");
    msg.rssi = 0.5461220535397937;
    msg.integrity = 33352U;

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
    msg.setTimeStamp(0.5473233501312502);
    msg.setSource(56125U);
    msg.setSourceEntity(22U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(152U);
    msg.req_id = 44337U;
    msg.destination.assign("BYDUPOXHUFYUSQNKOANQWHVIFNZZBBUTYTICDSUYWOEEFIXCOCKACJLYRQSAMXZWVPJVDCGYDVRGKUHTPANBUEIOFLZZPGVZTLUHFAEZYZCRDWLKIFNWN");
    msg.timeout = 0.49363111611206134;
    msg.range = 0.5164356601188802;
    msg.type = 8U;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.9329568641756111;
    tmp_msg_0.base_lon = 0.26833665842891663;
    tmp_msg_0.base_time = 0.6945636427631883;
    const signed char tmp_tmp_msg_0_0[] = {-87, 77, 102, -109, -127, -105, 74, 6, 32, 107, -100, 1, 91, -10, 31, 111, 83, 95, -59, 92, -78, 6, 56, -100, 93, 86, -80, -65, -27, -4, -97, 11, 53, 13, -73, -89, 25, 86, -107, -64, 98, 53, 79, 8, -9, -72, -114, -47, 14, -101, -72, 23, 105, -48, -73, 118, -32, 95, -101, 60, -10, 84, 48, -99, -105, -69, 17, -95, 9, 110, 107, -69, -15, -94, 121, -40, 35, -49, 4, -71, 90, -114, 126, 40, 24, 40, -124, 10, 83, -59, 122, -39, 35, 7, 68, 1, -18, -11, -118, 66, 112, -106, -13, 104, 113, -18, 119, -59, -38, 110, 47, 30, -49, 43, -84, -39, -46, -121, -128, -23, 15, 77, 92, 16, 8, 54, 122, -60, 111, 38, -122, -25, -125, -109, 67, 58, 23, -42, -48, -108, -45, 4, -45, 49, 32, 52, 28, 56, -72};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.28172139948518415);
    msg.setSource(25358U);
    msg.setSourceEntity(57U);
    msg.setDestination(62784U);
    msg.setDestinationEntity(55U);
    msg.req_id = 23857U;
    msg.destination.assign("ABHSEFCWKWMTUWNQVVYVMSJLCXKXIXOVOWRKZFEIDNFXPPISTWHMNJGUQSMARFSPUQBUZLIEUEPUOPPDJCHFKEXWAYJBZLQRBIACJBKYNEGBUAMYCGQACDKXAOCTVLQJSBGFFOCGWLKLNYUKEJMYSDZHRAZXPLJRHRRQYTOB");
    msg.timeout = 0.2102247850064749;
    msg.range = 0.8377174312939912;
    msg.type = 46U;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SYFAFPRUNFDEREELENVSQNEPQRQWMWZMRUDJADTKPYTPAAJBQQEGJNJKCTNUJIHXSOQDZDXKUZBIBHJOSRYLZTXVSCLWKVDVSWVSWTLUNSOTJGAGCDWDDJYIZXALLPHCXGFECWHOVZCMLUVDHQKBKZJLYEIXYMITPUBEPOOYVRCTTLNXNMIRQFPLFVORXOIKAZQTYUASAFXMVCHIUHAKHZKCMOMUIRMGFPYBZNJWWGFHROXGSGBFEM");
    tmp_msg_0.attr_type = 30U;
    tmp_msg_0.min.assign("IIJPSSVTQMVYXYMSKBMDWAHVVJX");
    tmp_msg_0.max.assign("LCUNFJYBEASVAXHCHCKBXUOQCZVKPUNXBHMTNXPTDAJYVEWUBOGJCORATGRLLUCRYMZEQGGGTIFVOFFAZJIAMNDRXBXHNCIYBWJWOQXIBSZPXJINDSPMJKOKSMNZYTXZZZYLYQCJIEJEMTPMHYDWTVQMHSIKOPGDYHQGVTAJIHWWQRDAMELDDMTKFVSLNNCQVZPEOXWKLGVGLUFURPUSITGBDVQSHPBRAOHEZKRWYDKEEWLRFUSFKSWCNU");
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
    msg.setTimeStamp(0.6468197766753586);
    msg.setSource(24990U);
    msg.setSourceEntity(210U);
    msg.setDestination(27948U);
    msg.setDestinationEntity(48U);
    msg.req_id = 9913U;
    msg.destination.assign("IYQRIOJEYKNYVUOXNQIBIJXGJGMKHKZWYHLECWUNANAZZQCSQMLFYCSSGKQDBLPZNVBMITIAGYAHSAZQYFCKGULREHURVZEUDBDFYLFCGLKMWWPWGVQLUREVASHSPFJZMNXJEKITSJBPZPOHUICCBPPFLXRTLNZKBBVEGAWBYRECGNAODWCMUFJOSUDSZWMKOGXDTMADOMN");
    msg.timeout = 0.019860091860194884;
    msg.range = 0.6448671689408814;
    msg.type = 148U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("KIBDSHEAYIHPIFIRMIECVRUMLRAEONSLYWZKTXCNKRUJDTQWADIBYFXKJEVYFNOZSXFOWGGTGJJMMGRYTEJQHEWNLZQXAIFLOB");
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
    msg.setTimeStamp(0.6424696564492043);
    msg.setSource(29597U);
    msg.setSourceEntity(63U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(204U);
    msg.req_id = 42474U;
    msg.type = 194U;
    msg.status = 29U;
    msg.info.assign("IVFBXTVZZR");
    msg.range = 0.9350840134249506;

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
    msg.setTimeStamp(0.8052707816208965);
    msg.setSource(46239U);
    msg.setSourceEntity(235U);
    msg.setDestination(12427U);
    msg.setDestinationEntity(100U);
    msg.req_id = 63653U;
    msg.type = 210U;
    msg.status = 4U;
    msg.info.assign("HHWNLKXRLWTGXRKCZOOOFMMBCTMXQNHTGMVLOLHLETQ");
    msg.range = 0.48436149052733657;

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
    msg.setTimeStamp(0.44149378924161986);
    msg.setSource(1466U);
    msg.setSourceEntity(27U);
    msg.setDestination(44032U);
    msg.setDestinationEntity(44U);
    msg.req_id = 54221U;
    msg.type = 26U;
    msg.status = 236U;
    msg.info.assign("VKRBECYNXIRXVMCVHUSHFFFSYBONWMHGPDFMWIYDSLXVLDQNNAGQZRESEJORAKDZZQPECVEPOTLDQYBEGPXWDLDJAFBYRMLZBQOWBQULTFPKEJMTQVEIGIPPVZTKOOIAPIHYULKCJZSNQUHUNADPEFLBXMKALJUIJOWWCGCYUXGAWASFGEGHSRVZSRBZYIIXCZTNMMMSJAXHAGWNC");
    msg.range = 0.523437565548204;

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
    msg.setTimeStamp(0.8385430360749208);
    msg.setSource(56033U);
    msg.setSourceEntity(69U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(50U);
    msg.system.assign("IHKROQBRAXFWERRVPUBEBJDGJKQIULYIOBRBLPUDYMYZMOZDSVIGQKQMHSQFVIQPJTJYZHIRPLZIWRLYDYLPOXULJQQCFJAKCEIFXUSNKWGMYNGOGKTSRYBHSXNTSHKOWWRFUWNGEFYIOHSXCVUDXETSMVFXE");
    msg.op = 45U;

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
    msg.setTimeStamp(0.041580361530988874);
    msg.setSource(38215U);
    msg.setSourceEntity(49U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(70U);
    msg.system.assign("JSKBGOOFELVXEZHHCYUORGKEVZFIGFGNUZBNVHLVYYCYUBHNBWRGGARHNVQWVNVXTVBXETTIKBTX");
    msg.op = 43U;

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
    msg.setTimeStamp(0.44477692473611896);
    msg.setSource(57579U);
    msg.setSourceEntity(251U);
    msg.setDestination(59159U);
    msg.setDestinationEntity(203U);
    msg.system.assign("LEIPNCSMTPPRUSJWOAOJQBQVTLGCAYSBULFRGXVUOHRMRWNOQTYLAPMDSJTWDULMTBOYQXPMKSHKJOURNJREHDMOTEXNQHYFPGETKPIQREKRZMSGHPNKGLZJZFNXAHVODGFNVBIZPHODDXBTQGCIZCFZQADCMFYSCVZANHNCSVLYYJXBUAVAWWXFWLCEXJOBJHZGJMSFMYKIBVFVNPIAKUWBKFDXXSU");
    msg.op = 183U;

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
    msg.setTimeStamp(0.3953725771686616);
    msg.setSource(58193U);
    msg.setSourceEntity(151U);
    msg.setDestination(35930U);
    msg.setDestinationEntity(41U);
    msg.value = -19485;

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
    msg.setTimeStamp(0.32739092863875763);
    msg.setSource(23959U);
    msg.setSourceEntity(128U);
    msg.setDestination(825U);
    msg.setDestinationEntity(197U);
    msg.value = 19170;

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
    msg.setTimeStamp(0.47064626143823696);
    msg.setSource(47107U);
    msg.setSourceEntity(167U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(11U);
    msg.value = -13461;

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
    msg.setTimeStamp(0.2555271086304015);
    msg.setSource(36582U);
    msg.setSourceEntity(37U);
    msg.setDestination(28225U);
    msg.setDestinationEntity(48U);
    msg.value = 0.51337733347904;

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
    msg.setTimeStamp(0.6608303415679533);
    msg.setSource(12423U);
    msg.setSourceEntity(127U);
    msg.setDestination(7328U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8782699098301936;

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
    msg.setTimeStamp(0.48842032109066613);
    msg.setSource(8437U);
    msg.setSourceEntity(228U);
    msg.setDestination(13422U);
    msg.setDestinationEntity(234U);
    msg.value = 0.7660436823168277;

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
    msg.setTimeStamp(0.17482854115563773);
    msg.setSource(1042U);
    msg.setSourceEntity(16U);
    msg.setDestination(4580U);
    msg.setDestinationEntity(36U);
    msg.value = 0.20551860356204554;

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
    msg.setTimeStamp(0.6768904752373245);
    msg.setSource(60866U);
    msg.setSourceEntity(159U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6958019563991616;

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
    msg.setTimeStamp(0.2622963329253232);
    msg.setSource(31824U);
    msg.setSourceEntity(163U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(44U);
    msg.value = 0.13804360452834874;

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
    msg.setTimeStamp(0.926651998520264);
    msg.setSource(1523U);
    msg.setSourceEntity(152U);
    msg.setDestination(31309U);
    msg.setDestinationEntity(148U);
    msg.validity = 59241U;
    msg.type = 126U;
    msg.utc_year = 11887U;
    msg.utc_month = 106U;
    msg.utc_day = 58U;
    msg.utc_time = 0.8692636233776586;
    msg.lat = 0.8077944082954486;
    msg.lon = 0.4662042407729502;
    msg.height = 0.5495375810653036;
    msg.satellites = 34U;
    msg.cog = 0.6835971220186347;
    msg.sog = 0.777172009357043;
    msg.hdop = 0.17484043301454888;
    msg.vdop = 0.08407463002214799;
    msg.hacc = 0.5112752303950909;
    msg.vacc = 0.3447281042613737;

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
    msg.setTimeStamp(0.7131425401743329);
    msg.setSource(21909U);
    msg.setSourceEntity(14U);
    msg.setDestination(17660U);
    msg.setDestinationEntity(180U);
    msg.validity = 30806U;
    msg.type = 204U;
    msg.utc_year = 15482U;
    msg.utc_month = 161U;
    msg.utc_day = 29U;
    msg.utc_time = 0.7220911561887958;
    msg.lat = 0.4533007643330905;
    msg.lon = 0.13387063037662406;
    msg.height = 0.9184898290344863;
    msg.satellites = 24U;
    msg.cog = 0.43443251491294776;
    msg.sog = 0.9675448988560785;
    msg.hdop = 0.40842929103581826;
    msg.vdop = 0.40118879075612623;
    msg.hacc = 0.2544322454646156;
    msg.vacc = 0.9933808395363962;

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
    msg.setTimeStamp(0.5579859822734399);
    msg.setSource(44549U);
    msg.setSourceEntity(161U);
    msg.setDestination(52815U);
    msg.setDestinationEntity(58U);
    msg.validity = 26501U;
    msg.type = 113U;
    msg.utc_year = 1636U;
    msg.utc_month = 10U;
    msg.utc_day = 202U;
    msg.utc_time = 0.7797027272194305;
    msg.lat = 0.20865907041486875;
    msg.lon = 0.05673325554787223;
    msg.height = 0.5865276073093358;
    msg.satellites = 35U;
    msg.cog = 0.9220276209056861;
    msg.sog = 0.6343592851717649;
    msg.hdop = 0.65412446846173;
    msg.vdop = 0.9173282140492822;
    msg.hacc = 0.8525173539400167;
    msg.vacc = 0.9318348147772313;

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
    msg.setTimeStamp(0.23405810761523138);
    msg.setSource(14791U);
    msg.setSourceEntity(12U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(20U);
    msg.time = 0.39366271853262047;
    msg.phi = 0.41274299696652095;
    msg.theta = 0.3505018023813502;
    msg.psi = 0.7480695198276034;
    msg.psi_magnetic = 0.8745288088990301;

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
    msg.setTimeStamp(0.14891481430377396);
    msg.setSource(10701U);
    msg.setSourceEntity(99U);
    msg.setDestination(7008U);
    msg.setDestinationEntity(201U);
    msg.time = 0.17875580911137579;
    msg.phi = 0.7181771107840104;
    msg.theta = 0.1341471648958974;
    msg.psi = 0.933301321327104;
    msg.psi_magnetic = 0.6121642661497819;

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
    msg.setTimeStamp(0.2632645230987606);
    msg.setSource(22249U);
    msg.setSourceEntity(165U);
    msg.setDestination(52591U);
    msg.setDestinationEntity(40U);
    msg.time = 0.0800712596706844;
    msg.phi = 0.2535623981494324;
    msg.theta = 0.7782580579557485;
    msg.psi = 0.8795703020819512;
    msg.psi_magnetic = 0.612711552567169;

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
    msg.setTimeStamp(0.35747815523812465);
    msg.setSource(25713U);
    msg.setSourceEntity(113U);
    msg.setDestination(50022U);
    msg.setDestinationEntity(231U);
    msg.time = 0.9877023376807169;
    msg.x = 0.1155980533255122;
    msg.y = 0.508483851808331;
    msg.z = 0.4906926637134281;
    msg.timestep = 0.5748248313450939;

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
    msg.setTimeStamp(0.94143456446878);
    msg.setSource(14473U);
    msg.setSourceEntity(19U);
    msg.setDestination(45351U);
    msg.setDestinationEntity(60U);
    msg.time = 0.777906995708598;
    msg.x = 0.8760232569768501;
    msg.y = 0.41468270945042873;
    msg.z = 0.6022247063556795;
    msg.timestep = 0.171922529663336;

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
    msg.setTimeStamp(0.6050311987899513);
    msg.setSource(39042U);
    msg.setSourceEntity(7U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(107U);
    msg.time = 0.8259981334851328;
    msg.x = 0.05070239868518123;
    msg.y = 0.8824923430167518;
    msg.z = 0.5952885684231095;
    msg.timestep = 0.5730256724287662;

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
    msg.setTimeStamp(0.21002851276756473);
    msg.setSource(35796U);
    msg.setSourceEntity(56U);
    msg.setDestination(56647U);
    msg.setDestinationEntity(31U);
    msg.time = 0.23536533546135485;
    msg.x = 0.7178169971636275;
    msg.y = 0.4254363073893709;
    msg.z = 0.43528574244221585;

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
    msg.setTimeStamp(0.21698925324780005);
    msg.setSource(21465U);
    msg.setSourceEntity(74U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(98U);
    msg.time = 0.05764464752033549;
    msg.x = 0.6045491709522527;
    msg.y = 0.0071574418729442035;
    msg.z = 0.21487279288535988;

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
    msg.setTimeStamp(0.9617168547952447);
    msg.setSource(27972U);
    msg.setSourceEntity(197U);
    msg.setDestination(39867U);
    msg.setDestinationEntity(175U);
    msg.time = 0.6700033725608605;
    msg.x = 0.14398692655017242;
    msg.y = 0.43773076549208023;
    msg.z = 0.29063656243440517;

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
    msg.setTimeStamp(0.2319857597383964);
    msg.setSource(15874U);
    msg.setSourceEntity(23U);
    msg.setDestination(32026U);
    msg.setDestinationEntity(80U);
    msg.time = 0.9677990963413389;
    msg.x = 0.15510128900051945;
    msg.y = 0.30871173180188316;
    msg.z = 0.47479397032721915;

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
    msg.setTimeStamp(0.40692782967810404);
    msg.setSource(34845U);
    msg.setSourceEntity(80U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(247U);
    msg.time = 0.4320290991603133;
    msg.x = 0.45449447384819286;
    msg.y = 0.7436322948376459;
    msg.z = 0.07093389551782969;

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
    msg.setTimeStamp(0.5741727825398417);
    msg.setSource(32533U);
    msg.setSourceEntity(14U);
    msg.setDestination(39087U);
    msg.setDestinationEntity(46U);
    msg.time = 0.3815357076186039;
    msg.x = 0.9927983876211071;
    msg.y = 0.8806992165959732;
    msg.z = 0.4761295495369099;

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
    msg.setTimeStamp(0.3807587444572572);
    msg.setSource(19956U);
    msg.setSourceEntity(238U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(94U);
    msg.time = 0.8342059469732843;
    msg.x = 0.1849427881482406;
    msg.y = 0.02145205285336904;
    msg.z = 0.16555699394562085;

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
    msg.setTimeStamp(0.47617901851024347);
    msg.setSource(47332U);
    msg.setSourceEntity(137U);
    msg.setDestination(21883U);
    msg.setDestinationEntity(15U);
    msg.time = 0.5330120758687621;
    msg.x = 0.980827834937616;
    msg.y = 0.7364650822303054;
    msg.z = 0.0008069851148327922;

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
    msg.setTimeStamp(0.4009460905984432);
    msg.setSource(16140U);
    msg.setSourceEntity(15U);
    msg.setDestination(62994U);
    msg.setDestinationEntity(146U);
    msg.time = 0.29909190671185004;
    msg.x = 0.8713712939220908;
    msg.y = 0.5092305067849143;
    msg.z = 0.052113176866038335;

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
    msg.setTimeStamp(0.9222941828867807);
    msg.setSource(29782U);
    msg.setSourceEntity(230U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(49U);
    msg.validity = 248U;
    msg.x = 0.8463161804118945;
    msg.y = 0.32245198499971994;
    msg.z = 0.8470200175301857;

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
    msg.setTimeStamp(0.44419072922278835);
    msg.setSource(48697U);
    msg.setSourceEntity(128U);
    msg.setDestination(57028U);
    msg.setDestinationEntity(252U);
    msg.validity = 73U;
    msg.x = 0.43752911970964237;
    msg.y = 0.970534096390977;
    msg.z = 0.19610000718392828;

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
    msg.setTimeStamp(0.7284138295134012);
    msg.setSource(21917U);
    msg.setSourceEntity(247U);
    msg.setDestination(17117U);
    msg.setDestinationEntity(45U);
    msg.validity = 80U;
    msg.x = 0.9878514079808741;
    msg.y = 0.2910962537560434;
    msg.z = 0.8347057500324024;

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
    msg.setTimeStamp(0.6912454542034886);
    msg.setSource(50174U);
    msg.setSourceEntity(148U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(136U);
    msg.validity = 120U;
    msg.x = 0.44788005306390655;
    msg.y = 0.26103726507733127;
    msg.z = 0.3914627201005426;

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
    msg.setTimeStamp(0.9256662563991429);
    msg.setSource(36055U);
    msg.setSourceEntity(172U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(177U);
    msg.validity = 148U;
    msg.x = 0.2812155559220809;
    msg.y = 0.7363041250518298;
    msg.z = 0.6399568266640134;

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
    msg.setTimeStamp(0.10359728211641772);
    msg.setSource(49810U);
    msg.setSourceEntity(9U);
    msg.setDestination(20864U);
    msg.setDestinationEntity(84U);
    msg.validity = 217U;
    msg.x = 0.18452267428858027;
    msg.y = 0.7440619452915379;
    msg.z = 0.579492422123824;

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
    msg.setTimeStamp(0.4710150046614845);
    msg.setSource(33549U);
    msg.setSourceEntity(82U);
    msg.setDestination(27877U);
    msg.setDestinationEntity(191U);
    msg.time = 0.16175773273427652;
    msg.x = 0.01961476764593839;
    msg.y = 0.3591436545584822;
    msg.z = 0.7608035399442933;

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
    msg.setTimeStamp(0.5214425761573622);
    msg.setSource(8677U);
    msg.setSourceEntity(243U);
    msg.setDestination(41340U);
    msg.setDestinationEntity(214U);
    msg.time = 0.21460237435572893;
    msg.x = 0.5957096671778155;
    msg.y = 0.6239686026207861;
    msg.z = 0.8914507498187427;

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
    msg.setTimeStamp(0.6333559268470479);
    msg.setSource(15322U);
    msg.setSourceEntity(63U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(23U);
    msg.time = 0.37031053049005036;
    msg.x = 0.17714021448992257;
    msg.y = 0.5873333809861991;
    msg.z = 0.821590700514936;

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
    msg.setTimeStamp(0.5852563093100616);
    msg.setSource(35678U);
    msg.setSourceEntity(206U);
    msg.setDestination(7046U);
    msg.setDestinationEntity(202U);
    msg.validity = 141U;
    msg.value = 0.3625793082637019;

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
    msg.setTimeStamp(0.8919937679146219);
    msg.setSource(54118U);
    msg.setSourceEntity(6U);
    msg.setDestination(36392U);
    msg.setDestinationEntity(252U);
    msg.validity = 136U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9005748338622288;
    tmp_msg_0.y = 0.33771688438446656;
    tmp_msg_0.z = 0.017677720593205604;
    tmp_msg_0.phi = 0.35014593448635933;
    tmp_msg_0.theta = 0.4501203876053027;
    tmp_msg_0.psi = 0.8767078570581599;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8728212972563705;
    tmp_msg_1.beam_height = 0.3428015254565546;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8043983078214587;

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
    msg.setTimeStamp(0.46224107310067175);
    msg.setSource(3287U);
    msg.setSourceEntity(2U);
    msg.setDestination(5048U);
    msg.setDestinationEntity(236U);
    msg.validity = 181U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.13118494734828112;
    tmp_msg_0.y = 0.7772971455065744;
    tmp_msg_0.z = 0.40359529673747274;
    tmp_msg_0.phi = 0.8797410592783805;
    tmp_msg_0.theta = 0.10406663826409146;
    tmp_msg_0.psi = 0.600458212662224;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7664797384568537;

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
    msg.setTimeStamp(0.28170711078712796);
    msg.setSource(60008U);
    msg.setSourceEntity(61U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(43U);
    msg.value = 0.6578385890388941;

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
    msg.setTimeStamp(0.6920741950207088);
    msg.setSource(24068U);
    msg.setSourceEntity(125U);
    msg.setDestination(38209U);
    msg.setDestinationEntity(224U);
    msg.value = 0.49969862552000976;

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
    msg.setTimeStamp(0.8500906243117464);
    msg.setSource(54990U);
    msg.setSourceEntity(99U);
    msg.setDestination(62753U);
    msg.setDestinationEntity(180U);
    msg.value = 0.48973469589819163;

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
    msg.setTimeStamp(0.5495538303670933);
    msg.setSource(57444U);
    msg.setSourceEntity(38U);
    msg.setDestination(35345U);
    msg.setDestinationEntity(114U);
    msg.value = 0.11859338306866762;

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
    msg.setTimeStamp(0.49077695730217863);
    msg.setSource(60894U);
    msg.setSourceEntity(197U);
    msg.setDestination(17246U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7152172144901611;

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
    msg.setTimeStamp(0.7801832449229006);
    msg.setSource(18283U);
    msg.setSourceEntity(209U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(245U);
    msg.value = 0.531878286221508;

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
    msg.setTimeStamp(0.588694395432159);
    msg.setSource(53082U);
    msg.setSourceEntity(63U);
    msg.setDestination(11207U);
    msg.setDestinationEntity(227U);
    msg.value = 0.3320337676235928;

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
    msg.setTimeStamp(0.5755132978301005);
    msg.setSource(24336U);
    msg.setSourceEntity(2U);
    msg.setDestination(35655U);
    msg.setDestinationEntity(127U);
    msg.value = 0.013419195867154454;

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
    msg.setTimeStamp(0.06952266739003077);
    msg.setSource(3143U);
    msg.setSourceEntity(248U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6988203191701577;

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
    msg.setTimeStamp(0.3806324357363451);
    msg.setSource(63554U);
    msg.setSourceEntity(235U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(134U);
    msg.value = 0.3182692269036028;

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
    msg.setTimeStamp(0.9389190642751085);
    msg.setSource(26187U);
    msg.setSourceEntity(2U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(125U);
    msg.value = 0.26614186583206545;

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
    msg.setTimeStamp(0.46756399643724167);
    msg.setSource(50046U);
    msg.setSourceEntity(150U);
    msg.setDestination(11818U);
    msg.setDestinationEntity(1U);
    msg.value = 0.16704585269603345;

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
    msg.setTimeStamp(0.896853361444445);
    msg.setSource(41601U);
    msg.setSourceEntity(105U);
    msg.setDestination(6451U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7943567764455914;

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
    msg.setTimeStamp(0.530671414843982);
    msg.setSource(445U);
    msg.setSourceEntity(239U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(152U);
    msg.value = 0.4207370861175027;

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
    msg.setTimeStamp(0.5498975112084808);
    msg.setSource(410U);
    msg.setSourceEntity(143U);
    msg.setDestination(33119U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9584027080145011;

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
    msg.setTimeStamp(0.26085257510844073);
    msg.setSource(49817U);
    msg.setSourceEntity(194U);
    msg.setDestination(56123U);
    msg.setDestinationEntity(226U);
    msg.value = 0.12105850115562822;

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
    msg.setTimeStamp(0.7680051939844598);
    msg.setSource(20692U);
    msg.setSourceEntity(235U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9486159849912877;

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
    msg.setTimeStamp(0.6623587019883822);
    msg.setSource(60615U);
    msg.setSourceEntity(229U);
    msg.setDestination(3380U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7666340296850168;

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
    msg.setTimeStamp(0.4355544860063649);
    msg.setSource(46721U);
    msg.setSourceEntity(177U);
    msg.setDestination(36401U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7820993553663758;

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
    msg.setTimeStamp(0.7138664133701472);
    msg.setSource(49858U);
    msg.setSourceEntity(156U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(207U);
    msg.value = 0.6233225936813591;

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
    msg.setTimeStamp(0.41786479897774587);
    msg.setSource(6648U);
    msg.setSourceEntity(160U);
    msg.setDestination(3538U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5765703143390984;

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
    msg.setTimeStamp(0.24816743498937088);
    msg.setSource(63716U);
    msg.setSourceEntity(223U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9007379820094096;

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
    msg.setTimeStamp(0.02054200818513041);
    msg.setSource(22789U);
    msg.setSourceEntity(16U);
    msg.setDestination(47058U);
    msg.setDestinationEntity(151U);
    msg.value = 0.6992466532162129;

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
    msg.setTimeStamp(0.6097621978861542);
    msg.setSource(1086U);
    msg.setSourceEntity(106U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9694428188691478;

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
    msg.setTimeStamp(0.1870652073350817);
    msg.setSource(22476U);
    msg.setSourceEntity(84U);
    msg.setDestination(30800U);
    msg.setDestinationEntity(12U);
    msg.direction = 0.5100759014297779;
    msg.speed = 0.08404713429907551;
    msg.turbulence = 0.8494854603505021;

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
    msg.setTimeStamp(0.9045405828791399);
    msg.setSource(57641U);
    msg.setSourceEntity(201U);
    msg.setDestination(628U);
    msg.setDestinationEntity(13U);
    msg.direction = 0.35252261722430644;
    msg.speed = 0.6337478923993064;
    msg.turbulence = 0.7919594855736276;

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
    msg.setTimeStamp(0.4387864755263069);
    msg.setSource(38108U);
    msg.setSourceEntity(213U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.6980788124707878;
    msg.speed = 0.9028136844650622;
    msg.turbulence = 0.47261145925757164;

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
    msg.setTimeStamp(0.46278725806268783);
    msg.setSource(2319U);
    msg.setSourceEntity(39U);
    msg.setDestination(36403U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5599788333736162;

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
    msg.setTimeStamp(0.4171898787619349);
    msg.setSource(63383U);
    msg.setSourceEntity(226U);
    msg.setDestination(5647U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6262523229947657;

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
    msg.setTimeStamp(0.6183209250854325);
    msg.setSource(9325U);
    msg.setSourceEntity(145U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5982798714284773;

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
    msg.setTimeStamp(0.6356882494633135);
    msg.setSource(16982U);
    msg.setSourceEntity(142U);
    msg.setDestination(50490U);
    msg.setDestinationEntity(154U);
    msg.value.assign("XJTNSFNZMDQEGNDPJVMJIGTHPVJYTKSHXKRIHKICNLLMTUDMDGYVFBDUOBCTQVCEPJIZZGVIAUMFEUHBWXMAXZITIMJJCLZMEPAPNWLOTKBKELNQDCZOUYFRSIXSHOIQGWLPSOCUECHKYAZQBAMEYQBTSFXYWGSNHQJOXTFIYRFMGDRJKBNVEWWOOXCGRUSYWHQUYFUWBXKRRKLAHEJDVABGSFFNPRVVAWC");

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
    msg.setTimeStamp(0.26412735952098976);
    msg.setSource(41372U);
    msg.setSourceEntity(247U);
    msg.setDestination(23806U);
    msg.setDestinationEntity(128U);
    msg.value.assign("IOOTLUHYYTEDZTVHZIQFRALAXVABXAFIMVWOLUNSJKDTIMMDAXRLZBXWZBLEXASCJPPVGGDOPFEMTNSEDFLOBPTCCQQDDZLWUPEONOESCQNOQXZGRHXJQYCRBRKSJEUVPZULWNDRBSMMFCNXHYMGCNFEURMUFIYTSBGOHTWBEGVPGQYNWJOQKYRKEXSIPSKMPUHGIJDDUJKHAWJCAMFIIA");

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
    msg.setTimeStamp(0.4369009842644257);
    msg.setSource(13208U);
    msg.setSourceEntity(85U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(111U);
    msg.value.assign("GGIAHYRWQZUXKIOMQUBHXJQAXKVLDGSRRWYPRCHPPWZUNLWRBGKJYKFLHCYJZKEUXQDSPUNTZCPGFRLDNRBMDDVTODYOUZPEOHFYRJASJZQTCF");

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
    msg.setTimeStamp(0.44088772421531475);
    msg.setSource(24157U);
    msg.setSourceEntity(128U);
    msg.setDestination(13099U);
    msg.setDestinationEntity(86U);
    const signed char tmp_msg_0[] = {110, -12, -105, 18, -12, 100, -25, -103, -94, 12, 66, 91, 67, -106, 39, 17, 35, -15, 53, 30, 22, 110, 33, -108, -9, -117, 5, -114, -79, 72, -115, 46, 34, -37, -78, -73, -40, 72, 2, 89, -113, -124, -96, 20, 1, 8, 40, -80, 8, 126, -15, -2, 82, -44, -117, 31, 25, 39, -57, 1, -101, 23, 56, 9, 82, -11, 86, 33, 52, -101, -94, 56, -65, 10, 21, -87, -123, 63, 110, -8, -33, 85, 18, -113, 28, -100, -77, -55, 106, 111, -14, 105};
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
    msg.setTimeStamp(0.682930605748747);
    msg.setSource(4107U);
    msg.setSourceEntity(212U);
    msg.setDestination(29969U);
    msg.setDestinationEntity(91U);
    const signed char tmp_msg_0[] = {-97, -125, -25, -68, 112, -2, -29, 8, 1, -31, 110, -120, 111, 78, -23, 107, -122, 83, -6, -15, 42, -39, 43, 22, 20, 66, 109, 11, 21, -78, 3, -16, 93, 35, 70, -93, 23, -73, 26, 114, -57, -31, -9, -102, 75, 59, 44, 96, 47, 114, -69, -125, 48, -71, 36, -72, 10, 3, -58, -121, 36, 90, -70, 42, -37, 38, -1, 89, -88, -39, -36, -42, -59, 2, -12, -8, -41, -28, -54, 75, -97, 65, -24, -8, -19, 98, 72, 62, -36, -63, 105, -60, 124, 91, 84, 68, -87, 81, -92, -24, 8, -119, -80, -49, 126, -115, 24, -87, 18, 8, 120, 87, 112, -88, 39, 114, 2, -124, 75, 12, -9, -101, 112, 117, -89, -80, 0, -14, 112, -119, 66, -52, 98, 61, 122, -11, 80, 50, 32, -21, 21, -63, 47, 79, -21, 123, -84, -99, -84, -122, -126, -36, -85, 46, -41, -4, 102, -102, 124, 44, -32, -25, -61};
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
    msg.setTimeStamp(0.16986556937413122);
    msg.setSource(64686U);
    msg.setSourceEntity(246U);
    msg.setDestination(63348U);
    msg.setDestinationEntity(101U);
    const signed char tmp_msg_0[] = {21, 58, 57, -58, -10, -13, -112, 24, 32, -99, -14, 109, 76, 67, -61, 36, -106, -69, 40, 32, -116, 7, -108, -49, -61, 90, 43, -31, 42, 39, -32, 29, 18, -107, 119, -50, -88, 13, -106, 2, -68, -27, -77, 47, 125, 112, -43, -125, -32, -13, 22, 117, -113, 3, -98, 83, 57, -30, -4, -72, -104, 53, 50, 21, -42, 98, -77, 74, 35, 125, -52, 64, 103};
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
    msg.setTimeStamp(0.9476093330988223);
    msg.setSource(1287U);
    msg.setSourceEntity(211U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(125U);
    msg.value = 0.24242208268027965;

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
    msg.setTimeStamp(0.9158707739674117);
    msg.setSource(47080U);
    msg.setSourceEntity(211U);
    msg.setDestination(31343U);
    msg.setDestinationEntity(155U);
    msg.value = 0.4600888170279648;

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
    msg.setTimeStamp(0.06823625638602926);
    msg.setSource(30895U);
    msg.setSourceEntity(197U);
    msg.setDestination(62769U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9694075270159552;

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
    msg.setTimeStamp(0.956939552659125);
    msg.setSource(20616U);
    msg.setSourceEntity(161U);
    msg.setDestination(14546U);
    msg.setDestinationEntity(51U);
    msg.type = 66U;
    msg.frequency = 1258601817U;
    msg.min_range = 39482U;
    msg.max_range = 32719U;
    msg.bits_per_point = 182U;
    msg.scale_factor = 0.16422893463805865;
    const signed char tmp_msg_0[] = {-115, 110, 48, 44, -74, 65, -42, -10, 70, 64, 39, 15, 88, -77, 101, 52, -8, 21, 14, -89, -5, -32, -107, 105, 22, -112, 38, 59, 43, 5, -68, -37, -95, 62, -30, 60, -20, 62, -31, -48, 58, -64, -29, 73, 25, 101, -7, -13, -82, -52, -59, -46, 108, -41, -53, 27, 35, -114, -111, 12, 55, -21, -27, 88, 0, -24, -38, 126, -30, 19, -56, 45, -71, 64, 37, 15, -7, 123, -110, -11, 92, -75, 1, 6, -96, 116, -12, -108, -96, 67, 84, 117, -126};
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
    msg.setTimeStamp(0.9473332611545272);
    msg.setSource(29916U);
    msg.setSourceEntity(170U);
    msg.setDestination(40530U);
    msg.setDestinationEntity(191U);
    msg.type = 159U;
    msg.frequency = 3417882383U;
    msg.min_range = 46556U;
    msg.max_range = 649U;
    msg.bits_per_point = 2U;
    msg.scale_factor = 0.357591118846015;
    const signed char tmp_msg_0[] = {3, -76, 46, -109, 82, 116, -11, -5, -71, -73, 92, -68, -126, 17, 34, -16, -4};
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
    msg.setTimeStamp(0.7377595179174438);
    msg.setSource(51114U);
    msg.setSourceEntity(100U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(193U);
    msg.type = 91U;
    msg.frequency = 2189461329U;
    msg.min_range = 38600U;
    msg.max_range = 13629U;
    msg.bits_per_point = 30U;
    msg.scale_factor = 0.7850142645019599;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.21537135125487517;
    tmp_msg_0.beam_height = 0.26776766195549306;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-45, -42, -114, 13, 104, -111, -20, -64, -69, 99, -119, -108, 30, -8, -10, 92, 118, 107, -64, -81, 13, 55, 10, -10, -97, 121, 126, 28, 10, -59, 44, -125, 70, 109, 74, 20, -47, 22, -128, 58, 107, -52, -99, 55, 115, 14, 65, 85, -51, 0, -88, 50, -61, 121, 90, -77, 121, -27, 76, 75, -120, 34, -38, -51, -66, 34, 23, -12, 83, -113, 105, 4, 1, 27, 104, -66, -109, 27, -68, -41, 13, 54, 92, 64, 102, 49, -89, -16, -1, 23, 58, 27, -67, -124, 79, -38, 113, 19, -110, 60, 65, -116, 36, 27, 26, 100};
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
    msg.setTimeStamp(0.32710854332475203);
    msg.setSource(41495U);
    msg.setSourceEntity(142U);
    msg.setDestination(39119U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.8272598554593261);
    msg.setSource(65309U);
    msg.setSourceEntity(116U);
    msg.setDestination(56868U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.8699030119914422);
    msg.setSource(55995U);
    msg.setSourceEntity(73U);
    msg.setDestination(60017U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.38157006409372973);
    msg.setSource(38114U);
    msg.setSourceEntity(203U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(178U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.29231819128697856);
    msg.setSource(2909U);
    msg.setSourceEntity(196U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(48U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.5720242020689952);
    msg.setSource(42586U);
    msg.setSourceEntity(156U);
    msg.setDestination(7935U);
    msg.setDestinationEntity(54U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.05055916228894297);
    msg.setSource(27790U);
    msg.setSourceEntity(33U);
    msg.setDestination(47992U);
    msg.setDestinationEntity(97U);
    msg.value = 0.5235091532853965;
    msg.confidence = 0.134434159103615;
    msg.opmodes.assign("OLESHYJDFPNYWQRGPKCTCUCCPOMTDTDYGXHVDGEDIEDMBGIXBMINJXXJULLIJZFNZGUAENQTAAXFSJPQEIDVRRSXBNWHEZFYYRM");

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
    msg.setTimeStamp(0.06090320477693845);
    msg.setSource(39820U);
    msg.setSourceEntity(165U);
    msg.setDestination(14523U);
    msg.setDestinationEntity(192U);
    msg.value = 0.5855942774501893;
    msg.confidence = 0.29736341404894306;
    msg.opmodes.assign("NQTGLAEBFKRFVFYOFVDVAZADDPSJBNSDTMMHQOPCJSXTHKWGBLIRXLNNQPCLEUKQLAKXIYOHUBLTUFVYAPLBGDFJNCM");

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
    msg.setTimeStamp(0.21903949171338943);
    msg.setSource(26028U);
    msg.setSourceEntity(49U);
    msg.setDestination(32922U);
    msg.setDestinationEntity(103U);
    msg.value = 0.4773852493780125;
    msg.confidence = 0.14086005667555057;
    msg.opmodes.assign("GTFRJDIRLLBHJLTVFJORAYWKTMCHTDCCOKRXQZJCIOQAY");

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
    msg.setTimeStamp(0.2632811753075909);
    msg.setSource(63692U);
    msg.setSourceEntity(155U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(46U);
    msg.itow = 996791223U;
    msg.lat = 0.6717768923400567;
    msg.lon = 0.6623672132025817;
    msg.height_ell = 0.10857003646226793;
    msg.height_sea = 0.3121911147295616;
    msg.hacc = 0.9743056968224212;
    msg.vacc = 0.7123108730903569;
    msg.vel_n = 0.5233755118390901;
    msg.vel_e = 0.38674266303179883;
    msg.vel_d = 0.8480014715505275;
    msg.speed = 0.5788500073014381;
    msg.gspeed = 0.26665188548103513;
    msg.heading = 0.5136590715738664;
    msg.sacc = 0.06891847717242139;
    msg.cacc = 0.2083668423578766;

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
    msg.setTimeStamp(0.3757342697811916);
    msg.setSource(54291U);
    msg.setSourceEntity(98U);
    msg.setDestination(13168U);
    msg.setDestinationEntity(48U);
    msg.itow = 1658311423U;
    msg.lat = 0.5421322894534624;
    msg.lon = 0.12941875219647514;
    msg.height_ell = 0.13338071393737794;
    msg.height_sea = 0.8447728204520174;
    msg.hacc = 0.39179489487136343;
    msg.vacc = 0.84519353570729;
    msg.vel_n = 0.15918272525577903;
    msg.vel_e = 0.7750776891027219;
    msg.vel_d = 0.06417128911533088;
    msg.speed = 0.6308619093812208;
    msg.gspeed = 0.2545335969546634;
    msg.heading = 0.5186827039409774;
    msg.sacc = 0.6866786726065502;
    msg.cacc = 0.714895479556473;

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
    msg.setTimeStamp(0.7165881867060225);
    msg.setSource(37866U);
    msg.setSourceEntity(129U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(158U);
    msg.itow = 1599129346U;
    msg.lat = 0.16394327460438463;
    msg.lon = 0.8240057646186492;
    msg.height_ell = 0.28512428525731315;
    msg.height_sea = 0.5034169042205014;
    msg.hacc = 0.777990743958229;
    msg.vacc = 0.19027324331316864;
    msg.vel_n = 0.7896582913179967;
    msg.vel_e = 0.4660308906708739;
    msg.vel_d = 0.5650232721489618;
    msg.speed = 0.8310888349083816;
    msg.gspeed = 0.6917652956698499;
    msg.heading = 0.5856990709401706;
    msg.sacc = 0.020731438503827748;
    msg.cacc = 0.8206232841301214;

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
    msg.setTimeStamp(0.7972487069551986);
    msg.setSource(21751U);
    msg.setSourceEntity(159U);
    msg.setDestination(40471U);
    msg.setDestinationEntity(188U);
    msg.id = 135U;
    msg.value = 0.9346247750165564;

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
    msg.setTimeStamp(0.6120842970460801);
    msg.setSource(33701U);
    msg.setSourceEntity(59U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(188U);
    msg.id = 113U;
    msg.value = 0.2494066887468639;

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
    msg.setTimeStamp(0.888298626944748);
    msg.setSource(51605U);
    msg.setSourceEntity(224U);
    msg.setDestination(47555U);
    msg.setDestinationEntity(238U);
    msg.id = 3U;
    msg.value = 0.5873076218332078;

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
    msg.setTimeStamp(0.05009569807745007);
    msg.setSource(28186U);
    msg.setSourceEntity(124U);
    msg.setDestination(41537U);
    msg.setDestinationEntity(170U);
    msg.x = 0.554294125536995;
    msg.y = 0.5993343486019407;
    msg.z = 0.559290932513771;
    msg.phi = 0.5670361170407072;
    msg.theta = 0.9757733941973517;
    msg.psi = 0.8014086276291382;

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
    msg.setTimeStamp(0.7782237390185368);
    msg.setSource(36993U);
    msg.setSourceEntity(173U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(142U);
    msg.x = 0.04161018241046299;
    msg.y = 0.8709372575073782;
    msg.z = 0.32582789426417114;
    msg.phi = 0.5034654640650582;
    msg.theta = 0.18480084672542618;
    msg.psi = 0.7542383166509907;

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
    msg.setTimeStamp(0.5844905278572324);
    msg.setSource(28463U);
    msg.setSourceEntity(220U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(224U);
    msg.x = 0.5507015182486066;
    msg.y = 0.3144539658467015;
    msg.z = 0.6343120515407029;
    msg.phi = 0.7017579892914908;
    msg.theta = 0.6586644453963947;
    msg.psi = 0.5173533547347219;

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
    msg.setTimeStamp(0.2981833857280921);
    msg.setSource(36732U);
    msg.setSourceEntity(190U);
    msg.setDestination(29750U);
    msg.setDestinationEntity(57U);
    msg.beam_width = 0.840459810874884;
    msg.beam_height = 0.3877312228877787;

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
    msg.setTimeStamp(0.022937053565249332);
    msg.setSource(33854U);
    msg.setSourceEntity(240U);
    msg.setDestination(59404U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.8830493865834426;
    msg.beam_height = 0.23400434498223743;

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
    msg.setTimeStamp(0.777370238287936);
    msg.setSource(7540U);
    msg.setSourceEntity(235U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.5118304681277677;
    msg.beam_height = 0.6692175980961543;

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
    msg.setTimeStamp(0.265590816463078);
    msg.setSource(10031U);
    msg.setSourceEntity(225U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(51U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.4419223919850016);
    msg.setSource(31316U);
    msg.setSourceEntity(57U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(216U);
    msg.sane = 246U;

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
    msg.setTimeStamp(0.7591182548746132);
    msg.setSource(25621U);
    msg.setSourceEntity(61U);
    msg.setDestination(22472U);
    msg.setDestinationEntity(135U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.22718949366858943);
    msg.setSource(55347U);
    msg.setSourceEntity(80U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(219U);
    msg.value = 0.10742913464478365;

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
    msg.setTimeStamp(0.22467390765888928);
    msg.setSource(1689U);
    msg.setSourceEntity(253U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6352241464881215;

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
    msg.setTimeStamp(0.17505319699890842);
    msg.setSource(52736U);
    msg.setSourceEntity(140U);
    msg.setDestination(7471U);
    msg.setDestinationEntity(151U);
    msg.value = 0.27106463210170095;

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
    msg.setTimeStamp(0.9683353041848545);
    msg.setSource(50285U);
    msg.setSourceEntity(102U);
    msg.setDestination(62515U);
    msg.setDestinationEntity(221U);
    msg.value = 0.13974265635000105;

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
    msg.setTimeStamp(0.6166853287622805);
    msg.setSource(57616U);
    msg.setSourceEntity(61U);
    msg.setDestination(2217U);
    msg.setDestinationEntity(222U);
    msg.value = 0.27342903247817363;

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
    msg.setTimeStamp(0.29583830545376655);
    msg.setSource(37170U);
    msg.setSourceEntity(111U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(127U);
    msg.value = 0.4018767601833839;

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
    msg.setTimeStamp(0.6941934424315024);
    msg.setSource(16221U);
    msg.setSourceEntity(181U);
    msg.setDestination(15609U);
    msg.setDestinationEntity(24U);
    msg.value = 0.9794381311832432;

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
    msg.setTimeStamp(0.48273215238090394);
    msg.setSource(58281U);
    msg.setSourceEntity(117U);
    msg.setDestination(32140U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7695085773502547;

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
    msg.setTimeStamp(0.5676625455636005);
    msg.setSource(61381U);
    msg.setSourceEntity(87U);
    msg.setDestination(6933U);
    msg.setDestinationEntity(168U);
    msg.value = 0.038671075029796165;

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
    msg.setTimeStamp(0.5558157906034475);
    msg.setSource(35862U);
    msg.setSourceEntity(203U);
    msg.setDestination(35875U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8096004043648236;

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
    msg.setTimeStamp(0.5166546898894095);
    msg.setSource(10604U);
    msg.setSourceEntity(119U);
    msg.setDestination(33470U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9579223129419292;

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
    msg.setTimeStamp(0.38607063230103766);
    msg.setSource(9458U);
    msg.setSourceEntity(243U);
    msg.setDestination(50702U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9009521371244473;

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
    msg.setTimeStamp(0.04901715717202604);
    msg.setSource(9651U);
    msg.setSourceEntity(43U);
    msg.setDestination(36775U);
    msg.setDestinationEntity(224U);
    msg.value = 0.20252162335617252;

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
    msg.setTimeStamp(0.13487850719577177);
    msg.setSource(29857U);
    msg.setSourceEntity(101U);
    msg.setDestination(52700U);
    msg.setDestinationEntity(156U);
    msg.value = 0.501093996008683;

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
    msg.setTimeStamp(0.7010140094782462);
    msg.setSource(41255U);
    msg.setSourceEntity(130U);
    msg.setDestination(7300U);
    msg.setDestinationEntity(102U);
    msg.value = 0.44397940261251945;

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
    msg.setTimeStamp(0.9740379485492414);
    msg.setSource(54269U);
    msg.setSourceEntity(37U);
    msg.setDestination(47063U);
    msg.setDestinationEntity(233U);
    msg.value = 0.39955842795040486;

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
    msg.setTimeStamp(0.4859683776385385);
    msg.setSource(44122U);
    msg.setSourceEntity(217U);
    msg.setDestination(37090U);
    msg.setDestinationEntity(46U);
    msg.value = 0.2209227507389755;

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
    msg.setTimeStamp(0.7997311547341232);
    msg.setSource(55235U);
    msg.setSourceEntity(21U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(173U);
    msg.value = 0.05992151310584393;

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
    msg.setTimeStamp(0.532168434046596);
    msg.setSource(63214U);
    msg.setSourceEntity(174U);
    msg.setDestination(26349U);
    msg.setDestinationEntity(234U);
    msg.value = 0.050331817962918635;

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
    msg.setTimeStamp(0.7156852619661931);
    msg.setSource(14270U);
    msg.setSourceEntity(118U);
    msg.setDestination(39859U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7671355558452619;

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
    msg.setTimeStamp(0.27647008021324104);
    msg.setSource(48326U);
    msg.setSourceEntity(34U);
    msg.setDestination(37401U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7484416769283283;

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
    msg.setTimeStamp(0.7118391803975289);
    msg.setSource(30241U);
    msg.setSourceEntity(242U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(20U);
    msg.value = 0.6761828332581437;

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
    msg.setTimeStamp(0.9032620065676314);
    msg.setSource(55394U);
    msg.setSourceEntity(84U);
    msg.setDestination(44023U);
    msg.setDestinationEntity(98U);
    msg.value = 0.7109046859481876;

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
    msg.setTimeStamp(0.639953159914435);
    msg.setSource(22009U);
    msg.setSourceEntity(68U);
    msg.setDestination(42327U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9352055380902952;

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
    msg.setTimeStamp(0.8499661532870898);
    msg.setSource(22759U);
    msg.setSourceEntity(59U);
    msg.setDestination(29013U);
    msg.setDestinationEntity(73U);
    msg.validity = 37610U;
    msg.type = 17U;
    msg.tow = 1758442687U;
    msg.base_lat = 0.4565980456373261;
    msg.base_lon = 0.8730291596906945;
    msg.base_height = 0.7399642679360164;
    msg.n = 0.5754537324629961;
    msg.e = 0.6385922834915702;
    msg.d = 0.7736723299114473;
    msg.v_n = 0.45663528931102804;
    msg.v_e = 0.6270226931765785;
    msg.v_d = 0.4048157468434619;
    msg.satellites = 185U;
    msg.iar_hyp = 10702U;
    msg.iar_ratio = 0.423770675857444;

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
    msg.setTimeStamp(0.6432073422512327);
    msg.setSource(58183U);
    msg.setSourceEntity(83U);
    msg.setDestination(51989U);
    msg.setDestinationEntity(139U);
    msg.validity = 26049U;
    msg.type = 117U;
    msg.tow = 92880019U;
    msg.base_lat = 0.8938016526778402;
    msg.base_lon = 0.37248710204777524;
    msg.base_height = 0.9474232948382187;
    msg.n = 0.20288116232480924;
    msg.e = 0.8686033299318145;
    msg.d = 0.22341987587870482;
    msg.v_n = 0.8983332113343582;
    msg.v_e = 0.4814031707801476;
    msg.v_d = 0.24742197195467486;
    msg.satellites = 73U;
    msg.iar_hyp = 38714U;
    msg.iar_ratio = 0.9664831832679559;

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
    msg.setTimeStamp(0.7136707702830604);
    msg.setSource(8410U);
    msg.setSourceEntity(17U);
    msg.setDestination(58079U);
    msg.setDestinationEntity(33U);
    msg.validity = 10728U;
    msg.type = 161U;
    msg.tow = 2911953020U;
    msg.base_lat = 0.35381812728847295;
    msg.base_lon = 0.6145376610728005;
    msg.base_height = 0.6741170308815722;
    msg.n = 0.8785298147118821;
    msg.e = 0.8590268750610631;
    msg.d = 0.08508538400668508;
    msg.v_n = 0.7844777323919672;
    msg.v_e = 0.36369347189955126;
    msg.v_d = 0.8149834973759775;
    msg.satellites = 81U;
    msg.iar_hyp = 21066U;
    msg.iar_ratio = 0.16110601579120865;

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
    msg.setTimeStamp(0.25795118484573054);
    msg.setSource(17692U);
    msg.setSourceEntity(224U);
    msg.setDestination(54017U);
    msg.setDestinationEntity(235U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5466942787558088;
    tmp_msg_0.lon = 0.6075934784528715;
    tmp_msg_0.height = 0.29321228418575995;
    tmp_msg_0.x = 0.11178604593090324;
    tmp_msg_0.y = 0.8063461427565056;
    tmp_msg_0.z = 0.2949753189292841;
    tmp_msg_0.phi = 0.06798642303972391;
    tmp_msg_0.theta = 0.3746179183917435;
    tmp_msg_0.psi = 0.7595026235095752;
    tmp_msg_0.u = 0.9861283350111558;
    tmp_msg_0.v = 0.8575511101465042;
    tmp_msg_0.w = 0.9223371844616517;
    tmp_msg_0.vx = 0.028057817544973718;
    tmp_msg_0.vy = 0.5650589341101451;
    tmp_msg_0.vz = 0.5773571371883657;
    tmp_msg_0.p = 0.3062411104805095;
    tmp_msg_0.q = 0.5504681924355593;
    tmp_msg_0.r = 0.8677299604146477;
    tmp_msg_0.depth = 0.059269526606822165;
    tmp_msg_0.alt = 0.7715661407802095;
    msg.state.set(tmp_msg_0);
    msg.type = 157U;

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
    msg.setTimeStamp(0.8678444077865944);
    msg.setSource(28707U);
    msg.setSourceEntity(163U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(69U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.05825353422617208;
    tmp_msg_0.lon = 0.8719399466918454;
    tmp_msg_0.height = 0.8941613493552489;
    tmp_msg_0.x = 0.425733007614543;
    tmp_msg_0.y = 0.5507277648958054;
    tmp_msg_0.z = 0.6607001249943191;
    tmp_msg_0.phi = 0.3401054399065494;
    tmp_msg_0.theta = 0.9530262546364618;
    tmp_msg_0.psi = 0.91046682746139;
    tmp_msg_0.u = 0.5511925504221501;
    tmp_msg_0.v = 0.8682244327439366;
    tmp_msg_0.w = 0.4839545483652643;
    tmp_msg_0.vx = 0.870668838339635;
    tmp_msg_0.vy = 0.39372185709015495;
    tmp_msg_0.vz = 0.7037046424862179;
    tmp_msg_0.p = 0.18801840238202172;
    tmp_msg_0.q = 0.8125966697324511;
    tmp_msg_0.r = 0.32967195132972205;
    tmp_msg_0.depth = 0.1886680183180881;
    tmp_msg_0.alt = 0.9113270550316456;
    msg.state.set(tmp_msg_0);
    msg.type = 64U;

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
    msg.setTimeStamp(0.5098633030703782);
    msg.setSource(60438U);
    msg.setSourceEntity(38U);
    msg.setDestination(28790U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6099194372708614;
    tmp_msg_0.lon = 0.5805649881192632;
    tmp_msg_0.height = 0.3749519941552537;
    tmp_msg_0.x = 0.48261730487208354;
    tmp_msg_0.y = 0.8226955804568593;
    tmp_msg_0.z = 0.8468732842446682;
    tmp_msg_0.phi = 0.9979877713693746;
    tmp_msg_0.theta = 0.9620371700216009;
    tmp_msg_0.psi = 0.2101644045771428;
    tmp_msg_0.u = 0.415861242953527;
    tmp_msg_0.v = 0.302416463043765;
    tmp_msg_0.w = 0.9695437425209857;
    tmp_msg_0.vx = 0.952615822268167;
    tmp_msg_0.vy = 0.5327108952645976;
    tmp_msg_0.vz = 0.09903672995101342;
    tmp_msg_0.p = 0.961522277977355;
    tmp_msg_0.q = 0.6362078188076215;
    tmp_msg_0.r = 0.9490965420441512;
    tmp_msg_0.depth = 0.24133220633377883;
    tmp_msg_0.alt = 0.029050222461166175;
    msg.state.set(tmp_msg_0);
    msg.type = 96U;

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
    msg.setTimeStamp(0.6799132462962995);
    msg.setSource(46433U);
    msg.setSourceEntity(38U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4519382954371911;

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
    msg.setTimeStamp(0.618140872498036);
    msg.setSource(33620U);
    msg.setSourceEntity(154U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9099536259646513;

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
    msg.setTimeStamp(0.6628500622905391);
    msg.setSource(36320U);
    msg.setSourceEntity(22U);
    msg.setDestination(55692U);
    msg.setDestinationEntity(150U);
    msg.value = 0.25771467837043793;

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
    msg.setTimeStamp(0.3096103203883399);
    msg.setSource(37072U);
    msg.setSourceEntity(240U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(225U);
    msg.value = 0.35439709704201827;

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
    msg.setTimeStamp(0.7386095544345757);
    msg.setSource(23579U);
    msg.setSourceEntity(7U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7699265072543555;

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
    msg.setTimeStamp(0.03390243881578503);
    msg.setSource(23110U);
    msg.setSourceEntity(210U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7112561986364108;

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
    msg.setTimeStamp(0.8267338742750395);
    msg.setSource(48941U);
    msg.setSourceEntity(167U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7607040026025201;

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
    msg.setTimeStamp(0.06444252585458743);
    msg.setSource(16374U);
    msg.setSourceEntity(239U);
    msg.setDestination(29684U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6620678995645279;

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
    msg.setTimeStamp(0.7858168263978523);
    msg.setSource(34501U);
    msg.setSourceEntity(19U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6390585161360759;

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
    msg.setTimeStamp(0.9441471301819805);
    msg.setSource(64672U);
    msg.setSourceEntity(82U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8746517678067746;

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
    msg.setTimeStamp(0.8395225326913746);
    msg.setSource(8840U);
    msg.setSourceEntity(72U);
    msg.setDestination(61766U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0835109068382317;

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
    msg.setTimeStamp(0.8091490160941849);
    msg.setSource(34537U);
    msg.setSourceEntity(88U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(198U);
    msg.value = 0.4426142788505091;

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
    msg.setTimeStamp(0.8553416984675649);
    msg.setSource(181U);
    msg.setSourceEntity(254U);
    msg.setDestination(36455U);
    msg.setDestinationEntity(142U);
    msg.value = 0.20824261877774686;

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
    msg.setTimeStamp(0.9817684582236709);
    msg.setSource(32268U);
    msg.setSourceEntity(157U);
    msg.setDestination(60630U);
    msg.setDestinationEntity(204U);
    msg.value = 0.9030417429695802;

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
    msg.setTimeStamp(0.2805576677156425);
    msg.setSource(47655U);
    msg.setSourceEntity(242U);
    msg.setDestination(42165U);
    msg.setDestinationEntity(209U);
    msg.value = 0.3565640693221218;

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
    msg.setTimeStamp(0.08438645410501577);
    msg.setSource(53692U);
    msg.setSourceEntity(0U);
    msg.setDestination(12031U);
    msg.setDestinationEntity(253U);
    msg.id = 103U;
    msg.zoom = 93U;
    msg.action = 113U;

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
    msg.setTimeStamp(0.7780684210667992);
    msg.setSource(32628U);
    msg.setSourceEntity(246U);
    msg.setDestination(9256U);
    msg.setDestinationEntity(52U);
    msg.id = 133U;
    msg.zoom = 185U;
    msg.action = 148U;

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
    msg.setTimeStamp(0.1281593987566142);
    msg.setSource(21023U);
    msg.setSourceEntity(35U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(83U);
    msg.id = 107U;
    msg.zoom = 50U;
    msg.action = 115U;

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
    msg.setTimeStamp(0.6532330193028653);
    msg.setSource(62037U);
    msg.setSourceEntity(102U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(101U);
    msg.id = 42U;
    msg.value = 0.568573425799008;

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
    msg.setTimeStamp(0.2973260452655252);
    msg.setSource(40200U);
    msg.setSourceEntity(119U);
    msg.setDestination(30560U);
    msg.setDestinationEntity(79U);
    msg.id = 129U;
    msg.value = 0.3838272192109484;

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
    msg.setTimeStamp(0.17824659448460278);
    msg.setSource(48151U);
    msg.setSourceEntity(253U);
    msg.setDestination(4770U);
    msg.setDestinationEntity(42U);
    msg.id = 159U;
    msg.value = 0.5889706871731649;

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
    msg.setTimeStamp(0.6385988638620532);
    msg.setSource(62180U);
    msg.setSourceEntity(63U);
    msg.setDestination(61623U);
    msg.setDestinationEntity(38U);
    msg.id = 156U;
    msg.value = 0.9106359673887786;

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
    msg.setTimeStamp(0.14543677755063578);
    msg.setSource(43209U);
    msg.setSourceEntity(169U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(174U);
    msg.id = 221U;
    msg.value = 0.09589077081904684;

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
    msg.setTimeStamp(0.9313504638457989);
    msg.setSource(2542U);
    msg.setSourceEntity(167U);
    msg.setDestination(48086U);
    msg.setDestinationEntity(232U);
    msg.id = 14U;
    msg.value = 0.2638138251684464;

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
    msg.setTimeStamp(0.7021955845399093);
    msg.setSource(36141U);
    msg.setSourceEntity(147U);
    msg.setDestination(57179U);
    msg.setDestinationEntity(108U);
    msg.id = 200U;
    msg.angle = 0.8577099931049618;

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
    msg.setTimeStamp(0.437190114349977);
    msg.setSource(345U);
    msg.setSourceEntity(141U);
    msg.setDestination(55828U);
    msg.setDestinationEntity(144U);
    msg.id = 239U;
    msg.angle = 0.8152815440043413;

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
    msg.setTimeStamp(0.17247346122997187);
    msg.setSource(55313U);
    msg.setSourceEntity(191U);
    msg.setDestination(52754U);
    msg.setDestinationEntity(223U);
    msg.id = 61U;
    msg.angle = 0.469936402567139;

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
    msg.setTimeStamp(0.2686815408005955);
    msg.setSource(55818U);
    msg.setSourceEntity(43U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(241U);
    msg.op = 231U;
    msg.actions.assign("XUKGZSMFZXMDHCUOIWMQZQPPXTDCGSPEKTBDVDIINNSVFWCYENSMHXLTWQRCLHOSXLUKABBEIPVUROFTYMHQUGXIKPZWKUNPIRYEZJFULLXDNEXWANTBJYMHDVGHMJAGYTMCGPMJWTYQCYUZLQDKRFVKRFGQFWJPWVBJDXBAAGRHPLZSENWHHO");

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
    msg.setTimeStamp(0.8094347431232547);
    msg.setSource(23951U);
    msg.setSourceEntity(176U);
    msg.setDestination(42613U);
    msg.setDestinationEntity(67U);
    msg.op = 165U;
    msg.actions.assign("CNOFMYYIPKULPGYFRKQJIZVEDJOCLUXUFPINPMOUKMDCRLAMXIFYMFRZNVSBIWPEXNUACBPYMHRXWLSOERZQNKNIJTUHBUQKHISKGZTCG");

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
    msg.setTimeStamp(0.37417439249006135);
    msg.setSource(7596U);
    msg.setSourceEntity(216U);
    msg.setDestination(9572U);
    msg.setDestinationEntity(115U);
    msg.op = 60U;
    msg.actions.assign("LJXRKSUJHUZEKDKHVQXWIXKRTSFQUAPRZBFEMEQGSJCMTUYGWEWPZDOMICNMIWUPSVIXJZTHYDBKJKJUQXCADNQVGNTTNPVXRREIGGDNEFZGFILTGDGESYEICAOZKPSAFRSAVVHQYDLOLSIZJLNVGBWMQZTPPJOLDOMCLHUWKAQYFKNTOVAOPUMARVHNXBAIBWTHCYUBFQZCEBMPGFNVLPWHYDCYDHCEBRJKLBORCYQSMXWSXRH");

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
    msg.setTimeStamp(0.07779843980838841);
    msg.setSource(17932U);
    msg.setSourceEntity(48U);
    msg.setDestination(36195U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("NAHXYOLRUYSAGZRVHDEKPKDAXMIGXWPLECMFHZMBSQZZMTDZQIXMCONRAKVFOYLAMYSWXTTCTRIZIBCDWTYWEHDOHFAUJKFGAIJFKSBVEFKJSNJPPSBKSWLKCPXNIRRQDNXUJYZTBJVFJINJPWRPLDJIBWGFNAHEUWUYLUENOIZPBUAMUCTYQYGFDLTHOSCPVEVPVNDLTMOGVKVQXSEQAEWQQCHHOCMR");

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
    msg.setTimeStamp(0.4161759929204757);
    msg.setSource(49867U);
    msg.setSourceEntity(25U);
    msg.setDestination(33495U);
    msg.setDestinationEntity(223U);
    msg.actions.assign("PSKVSQYTNNCIXWQYKZICNCYYRZWMQGTDGPFWDZMEJZJMLKGVLJWZWJEFXJHCMQREZMXHRTOOYNUYWROIGGBBXVCBLLQQVPDJXNSXVBORXKULCUTKEORMPDUDGIASVDPDQSESDFULQLYAUQYOLLVQJNPWLVCHBCEFFBYWPHEEEWMOXGVHITGXINKOKRXFNKFKRBSKMMZIACAOHPYEAOTWHPBFHNAIAGTRAINDVSUBCZTUAZSRPIDJJUZJTHFUA");

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
    msg.setTimeStamp(0.05419905112147749);
    msg.setSource(12248U);
    msg.setSourceEntity(206U);
    msg.setDestination(64874U);
    msg.setDestinationEntity(60U);
    msg.actions.assign("GCNGMFLMFQQIZWIPJCLPJTMWJEUDGTRESVGPEWZVQMDHKRZZWWYZOSPUUDKBYYZYNRRKFROMFYAWARPNLVAQKOCUQPHNVNBIESQFBAKHBZTCSNBTOEVVJYGNKCA");

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
    msg.setTimeStamp(0.5122215350396842);
    msg.setSource(38221U);
    msg.setSourceEntity(62U);
    msg.setDestination(53267U);
    msg.setDestinationEntity(56U);
    msg.button = 40U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.9248289195420121);
    msg.setSource(59875U);
    msg.setSourceEntity(74U);
    msg.setDestination(22647U);
    msg.setDestinationEntity(183U);
    msg.button = 96U;
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
    msg.setTimeStamp(0.7050858772840434);
    msg.setSource(52034U);
    msg.setSourceEntity(32U);
    msg.setDestination(38411U);
    msg.setDestinationEntity(154U);
    msg.button = 212U;
    msg.value = 78U;

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
    msg.setTimeStamp(0.9693681634963394);
    msg.setSource(45075U);
    msg.setSourceEntity(228U);
    msg.setDestination(24118U);
    msg.setDestinationEntity(194U);
    msg.op = 122U;
    msg.text.assign("KAQDNFVFLPAQFJXWYLVBJONLEAYKNRJFTNXFILVRTHMOZFWSDBLBTAZTXRIYDAIOFDVBVZASKPXWWJXKRGUWOUHQPOSAOQINPRZM");

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
    msg.setTimeStamp(0.4840266514804914);
    msg.setSource(18082U);
    msg.setSourceEntity(130U);
    msg.setDestination(34636U);
    msg.setDestinationEntity(77U);
    msg.op = 246U;
    msg.text.assign("DVXYYMLLUBXJZQATODNKQSRSBMRLTJJHMLJZBKYUPKXN");

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
    msg.setTimeStamp(0.7031674430241832);
    msg.setSource(28157U);
    msg.setSourceEntity(15U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(119U);
    msg.op = 192U;
    msg.text.assign("HZSGNWRVMADZJCFFMOCHZAUATBBCMCIYLMXXYQGVLPOOLBEJFQUVMPXTUKTJGLIJKALPGALHOMSFTHUPUBTKTMHOZYJZFUXJKCRVWJVWITDKNQYCAZBYVJWXWDODLOUFYZINZYDCKUDPQIRRBKQIHPHEUNXFFYKKHEWCGDXEASIMSQCXVORTQSNRSKNRLGRQQXIVWEEJNBAWBZPSOPBIYVYHESANDLGGFSINWAJZTGMPPMSBRWDVGLEXOCE");

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
    msg.setTimeStamp(0.3483135948556214);
    msg.setSource(45016U);
    msg.setSourceEntity(85U);
    msg.setDestination(40494U);
    msg.setDestinationEntity(158U);
    msg.op = 198U;
    msg.time_remain = 0.9505040230169561;
    msg.sched_time = 0.19704465232514967;

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
    msg.setTimeStamp(0.7455769885589225);
    msg.setSource(25895U);
    msg.setSourceEntity(219U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(29U);
    msg.op = 185U;
    msg.time_remain = 0.9058948593213363;
    msg.sched_time = 0.6910252799607934;

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
    msg.setTimeStamp(0.23341701662303382);
    msg.setSource(33673U);
    msg.setSourceEntity(127U);
    msg.setDestination(17716U);
    msg.setDestinationEntity(143U);
    msg.op = 229U;
    msg.time_remain = 0.42865990298080947;
    msg.sched_time = 0.7151027663477839;

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
    msg.setTimeStamp(0.24853636422860992);
    msg.setSource(41922U);
    msg.setSourceEntity(95U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(133U);
    msg.name.assign("JDIYGVTMFDRBJESOEYJBPQWOGORZCVNWARLTJK");
    msg.op = 166U;
    msg.sched_time = 0.25214197415362904;

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
    msg.setTimeStamp(0.2170576402697687);
    msg.setSource(3332U);
    msg.setSourceEntity(24U);
    msg.setDestination(7910U);
    msg.setDestinationEntity(153U);
    msg.name.assign("QJBLBKQHUYXRSYODJWHJPQSQROEACRNNBKVZOCJHZOMXENGWVTDWTZOKVSBMVUQVAGXKGUAAYRIWBDOZOWIGXUTJZQIFYAEGBHNMXUCAIEBKHUTGAGXFLYAUDPLTJJGC");
    msg.op = 177U;
    msg.sched_time = 0.06258501443670172;

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
    msg.setTimeStamp(0.2855907099101347);
    msg.setSource(61703U);
    msg.setSourceEntity(20U);
    msg.setDestination(12964U);
    msg.setDestinationEntity(95U);
    msg.name.assign("MJJCVBLTITUYEOGSJTVUMHDHFVVQGMLKKSDEQFFRCEBQLXGWWGHCCMFTYDNZPJHAKRVPXZVQCWAVSUY");
    msg.op = 251U;
    msg.sched_time = 0.2643304238451998;

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
    msg.setTimeStamp(0.9619959307501443);
    msg.setSource(58418U);
    msg.setSourceEntity(122U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.39911577367413253);
    msg.setSource(36307U);
    msg.setSourceEntity(81U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.2960315426994393);
    msg.setSource(50795U);
    msg.setSourceEntity(43U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.3221151399414761);
    msg.setSource(53822U);
    msg.setSourceEntity(191U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(30U);
    msg.name.assign("OCSNBDSRHGLALKBVLVBKGZISXNZWKDEPBUJEABRTCOXOXTIZEMYLPKQSJXGQAEQJAYGZUOYVIUHMGNPUFNQRQHTJWYPAWSICEDGTWUQEHPWOTIZMROIEGABXRXWHFVIKYYOFYQSULPZCCQWNHMJYYZUJESDRRSDNOVBNLUHRTCPFCTVCFFPJMP");
    msg.state = 46U;

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
    msg.setTimeStamp(0.028460263758473436);
    msg.setSource(26672U);
    msg.setSourceEntity(110U);
    msg.setDestination(40401U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ZNZFTGAPZYGBMFPWOYZFEVPDBZKUCBIONDQHJIXFKUBEIDKGQSCYSNONFGDRSRVYVQKLUETWSWHHUPEOEDWWFJSJSXQXHITFPHKYTNEJCMULQBFAWGOKHKHSNYNIBXDLFKRTHMLXMLARMCITQPBLQXRCHVRTWCERPIVJAEJDUGTDCMDGWVMZNCAOSLVGPFAY");
    msg.state = 209U;

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
    msg.setTimeStamp(0.5487437221305844);
    msg.setSource(51438U);
    msg.setSourceEntity(249U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(234U);
    msg.name.assign("HGLSMINKLNGWYSWTHAUOGZCOQVQLOQFDQZYGHDLFAFANEQMPSBUTZAJIXRVXFPIVOXXSFABEOVTZVBSFNKPJHHFPGFYMEJAXR");
    msg.state = 8U;

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
    msg.setTimeStamp(0.2071162957395858);
    msg.setSource(58454U);
    msg.setSourceEntity(8U);
    msg.setDestination(47199U);
    msg.setDestinationEntity(167U);
    msg.name.assign("YNJMBYMPTZCDHGTSWRQYIZFCMIPOZHCKIFMZRSEJNFFSSCQMXYXRCHTOJWKKUMWKVSTMXTZVJKWISXEVIADYHQUBBDADXLZUNVPYJUFFWMRELVOVDXNHEGBGPPAOBSJCWXTDDEEJAVLEAWRZGPF");
    msg.value = 133U;

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
    msg.setTimeStamp(0.8230528809193521);
    msg.setSource(39924U);
    msg.setSourceEntity(177U);
    msg.setDestination(32168U);
    msg.setDestinationEntity(98U);
    msg.name.assign("MYWOJZQPWQLMOJVSLQCXCOBUAGONCDHBBDIDGFNDMFXDCRXPTNDGATZNORABXMESIRCIFSPPFIAMZSWRESWUVHLWNARQVBMZHTWGMJQAOGQISRMCYVYAFFOXBUDUEY");
    msg.value = 203U;

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
    msg.setTimeStamp(0.615554360064185);
    msg.setSource(17148U);
    msg.setSourceEntity(204U);
    msg.setDestination(55214U);
    msg.setDestinationEntity(77U);
    msg.name.assign("GTIYCZZOAIABCLKSVZFDQQPORNWAFOJPMSXCZHSBOAAOSIP");
    msg.value = 82U;

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
    msg.setTimeStamp(0.08342689022951177);
    msg.setSource(21087U);
    msg.setSourceEntity(254U);
    msg.setDestination(52768U);
    msg.setDestinationEntity(127U);
    msg.name.assign("LHRPLCIWOSWC");

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
    msg.setTimeStamp(0.3736322822943462);
    msg.setSource(23849U);
    msg.setSourceEntity(236U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(84U);
    msg.name.assign("RDQRURLMFAYKHFGBENBQXUUFDKSXGHCHDYNTGTOVUNCFXNKKEMBBDCTIBZGUVDQLSZMELYNBPTKTWPZSAJSFZEJRAEDJAAFEIFMAFYWCBGSXAMMMBIJSWWTLUEZIAGRQUHEEXPCAROHCJOLNYDQJFJLZXKGQPWQWXQCGVJOASRSZXBNZLVPWHYODVPIVVFOWOXCPPPNWDETVKPOIRITJR");

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
    msg.setTimeStamp(0.6413446218038937);
    msg.setSource(38404U);
    msg.setSourceEntity(221U);
    msg.setDestination(64271U);
    msg.setDestinationEntity(234U);
    msg.name.assign("RIPPNXDDTXLFXDSPIYABMJIWUNEQMKZUYUOUKEKTGXYOCHOQOJAZAQQEONUBLZWWMQNRFGCDKRJVBHPADJRXCKSMCIWQPKSTAZVBHERVYEWTVWNAUAZDFOBRJZSFXSFESJIFHQLDGYLGCVVSPDVMNTKJAEVTCUSCIBPEEIGQYMZWXHDYGHZYYKKOLWNOMTBXPBWA");

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
    msg.setTimeStamp(0.9043240435699745);
    msg.setSource(56537U);
    msg.setSourceEntity(180U);
    msg.setDestination(42684U);
    msg.setDestinationEntity(195U);
    msg.name.assign("BAPOPWORABFLEDJZLGTQJWEROGZTUIMDEHVDVDFCOBXVHMJUYPGJRFAFXZMCCLAPGIQDWRAIHXLQSFYXEBBGMWFTXUPZXOAETQMLGXVLJXONYKNRUCJYYXIWKIMQEZZKDABVX");
    msg.value = 80U;

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
    msg.setTimeStamp(0.8027917908056478);
    msg.setSource(21144U);
    msg.setSourceEntity(161U);
    msg.setDestination(28360U);
    msg.setDestinationEntity(7U);
    msg.name.assign("FZFMDESXWXZPORLGLBUWAIDPXJSSQMEYGTRCLTCCRTHKSUXMIAKRAWENJXSZGCIAMYBVQZOTPALVHFWXWMWKBNAHTTFHHITJRDXBPDUHNBUVRDKMICAVJAUNRKDLLVBXFOOXFZJCNLOPUVCFYYJOTCHZDPQYXBNKGGMQCYSNEIVENBKHCTEKJ");
    msg.value = 11U;

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
    msg.setTimeStamp(0.0012473657634898272);
    msg.setSource(2663U);
    msg.setSourceEntity(66U);
    msg.setDestination(48999U);
    msg.setDestinationEntity(161U);
    msg.name.assign("RAQHHDVWEJHQMIDVGJWUFTWBJEGRFTTPAKAOOURZZNYCVEYHWIXZBDENPHNTYAPJTWOOEVYITDXKSXHWNHZYOPMXXGXPYTCMFMSYEHRKYLANWGLLWFRWQZQEHIDJQKDBDSLMIMLUZOKSKFFFBLZCVAGACKTMUBYECRJVXSSHAIKQUQPDNLPZEQGSRBMCRINGNADBMZORXLQJKFLCWJBVEUUICUGTVSXLBSZYPF");
    msg.value = 175U;

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
    msg.setTimeStamp(0.7098641463012748);
    msg.setSource(58671U);
    msg.setSourceEntity(239U);
    msg.setDestination(28911U);
    msg.setDestinationEntity(220U);
    msg.id = 21U;
    msg.period = 4146484161U;
    msg.duty_cycle = 3202081521U;

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
    msg.setTimeStamp(0.6148455974585735);
    msg.setSource(56723U);
    msg.setSourceEntity(218U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(71U);
    msg.id = 58U;
    msg.period = 3424395216U;
    msg.duty_cycle = 3751565565U;

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
    msg.setTimeStamp(0.3930163269252014);
    msg.setSource(50037U);
    msg.setSourceEntity(13U);
    msg.setDestination(6917U);
    msg.setDestinationEntity(172U);
    msg.id = 48U;
    msg.period = 2375375974U;
    msg.duty_cycle = 84242525U;

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
    msg.setTimeStamp(0.490905047658139);
    msg.setSource(49065U);
    msg.setSourceEntity(213U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(3U);
    msg.id = 241U;
    msg.period = 718337390U;
    msg.duty_cycle = 2326540481U;

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
    msg.setTimeStamp(0.1830630914328062);
    msg.setSource(57558U);
    msg.setSourceEntity(118U);
    msg.setDestination(867U);
    msg.setDestinationEntity(160U);
    msg.id = 251U;
    msg.period = 235488952U;
    msg.duty_cycle = 3780390694U;

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
    msg.setTimeStamp(0.6230939707215507);
    msg.setSource(5806U);
    msg.setSourceEntity(55U);
    msg.setDestination(21426U);
    msg.setDestinationEntity(73U);
    msg.id = 115U;
    msg.period = 612305100U;
    msg.duty_cycle = 2391138034U;

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
    msg.setTimeStamp(0.23527753232736426);
    msg.setSource(4667U);
    msg.setSourceEntity(115U);
    msg.setDestination(2364U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.3931031255559281;
    msg.lon = 0.6793557288501086;
    msg.height = 0.1495893454073598;
    msg.x = 0.6041121782690623;
    msg.y = 0.4138233187593333;
    msg.z = 0.41928077279748677;
    msg.phi = 0.3248187989940453;
    msg.theta = 0.9445132782480443;
    msg.psi = 0.21487999720993;
    msg.u = 0.7416941385331908;
    msg.v = 0.5124362925405799;
    msg.w = 0.08673367258708709;
    msg.vx = 0.22480171338547672;
    msg.vy = 0.9283950399758956;
    msg.vz = 0.8914491739668481;
    msg.p = 0.7483535889804341;
    msg.q = 0.014534779603673886;
    msg.r = 0.4402642529521983;
    msg.depth = 0.042125476018436525;
    msg.alt = 0.007255403853794196;

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
    msg.setTimeStamp(0.027245255706335403);
    msg.setSource(42407U);
    msg.setSourceEntity(45U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.37472747155120845;
    msg.lon = 0.652921943114909;
    msg.height = 0.6445810385923367;
    msg.x = 0.9929256917991302;
    msg.y = 0.388137419130669;
    msg.z = 0.6798098440545128;
    msg.phi = 0.6338626153285979;
    msg.theta = 0.2709271728790993;
    msg.psi = 0.9096144666884051;
    msg.u = 0.080180487858867;
    msg.v = 0.6769645377831661;
    msg.w = 0.512447184622129;
    msg.vx = 0.407532328797223;
    msg.vy = 0.7791456366666395;
    msg.vz = 0.08241072013515083;
    msg.p = 0.8581319341672614;
    msg.q = 0.5513036056755725;
    msg.r = 0.391527264204384;
    msg.depth = 0.9209708033788082;
    msg.alt = 0.10739749327531134;

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
    msg.setTimeStamp(0.12807864414026293);
    msg.setSource(46879U);
    msg.setSourceEntity(245U);
    msg.setDestination(50227U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.20571020373245164;
    msg.lon = 0.4176262734482813;
    msg.height = 0.26475920060510816;
    msg.x = 0.5065636973024418;
    msg.y = 0.9820701464240602;
    msg.z = 0.3952564943085083;
    msg.phi = 0.027058974100332644;
    msg.theta = 0.8443840541456289;
    msg.psi = 0.2116885083837533;
    msg.u = 0.3333528754413094;
    msg.v = 0.47352330251224306;
    msg.w = 0.029040889672930503;
    msg.vx = 0.26415892713543543;
    msg.vy = 0.6788217757291438;
    msg.vz = 0.7325135710285072;
    msg.p = 0.22545058437729226;
    msg.q = 0.06868533735477;
    msg.r = 0.391134857623053;
    msg.depth = 0.6507153652357671;
    msg.alt = 0.46186488942407544;

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
    msg.setTimeStamp(0.36803263253763396);
    msg.setSource(19416U);
    msg.setSourceEntity(6U);
    msg.setDestination(47162U);
    msg.setDestinationEntity(169U);
    msg.x = 0.3573593984967969;
    msg.y = 0.3011321756122626;
    msg.z = 0.11254691456926258;

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
    msg.setTimeStamp(0.26516692162446276);
    msg.setSource(62904U);
    msg.setSourceEntity(79U);
    msg.setDestination(59555U);
    msg.setDestinationEntity(100U);
    msg.x = 0.2699891996281947;
    msg.y = 0.36996008119484447;
    msg.z = 0.2623877696681536;

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
    msg.setTimeStamp(0.7450488659706774);
    msg.setSource(33360U);
    msg.setSourceEntity(177U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(117U);
    msg.x = 0.628882332384088;
    msg.y = 0.04767157454717896;
    msg.z = 0.18317803702420854;

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
    msg.setTimeStamp(0.6500506162200068);
    msg.setSource(15748U);
    msg.setSourceEntity(216U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(37U);
    msg.value = 0.39563305661195836;

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
    msg.setTimeStamp(0.24795122893734756);
    msg.setSource(18801U);
    msg.setSourceEntity(237U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9078244154290533;

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
    msg.setTimeStamp(0.07634683147871146);
    msg.setSource(2458U);
    msg.setSourceEntity(163U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(22U);
    msg.value = 0.002023380057451396;

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
    msg.setTimeStamp(0.2849320338640222);
    msg.setSource(12790U);
    msg.setSourceEntity(195U);
    msg.setDestination(15848U);
    msg.setDestinationEntity(33U);
    msg.value = 0.2820676587172486;

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
    msg.setTimeStamp(0.007714262462518051);
    msg.setSource(38196U);
    msg.setSourceEntity(155U);
    msg.setDestination(43928U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9087367826721925;

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
    msg.setTimeStamp(0.16915398466937137);
    msg.setSource(5000U);
    msg.setSourceEntity(121U);
    msg.setDestination(40244U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6181802147553975;

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
    msg.setTimeStamp(0.1640069038859815);
    msg.setSource(57929U);
    msg.setSourceEntity(131U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(110U);
    msg.x = 0.3125802150721638;
    msg.y = 0.5312792745690034;
    msg.z = 0.7103806289674697;
    msg.phi = 0.7682517200579317;
    msg.theta = 0.9737049912527262;
    msg.psi = 0.6608288639189933;
    msg.p = 0.8265614226862331;
    msg.q = 0.19853169966161877;
    msg.r = 0.913250291455573;
    msg.u = 0.9578909808892931;
    msg.v = 0.9333380633323849;
    msg.w = 0.7257723368410813;
    msg.bias_psi = 0.930202475134414;
    msg.bias_r = 0.6392640272796727;

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
    msg.setTimeStamp(0.14168412135998643);
    msg.setSource(24934U);
    msg.setSourceEntity(182U);
    msg.setDestination(64196U);
    msg.setDestinationEntity(204U);
    msg.x = 0.8117761865133791;
    msg.y = 0.8167422418701161;
    msg.z = 0.039855988851981605;
    msg.phi = 0.7453752196622407;
    msg.theta = 0.2130933183050554;
    msg.psi = 0.31979534485457595;
    msg.p = 0.105875460970974;
    msg.q = 0.9844652102512698;
    msg.r = 0.46853523226340843;
    msg.u = 0.8144370026531572;
    msg.v = 0.5716522484429248;
    msg.w = 0.8555704414871237;
    msg.bias_psi = 0.8145693755368001;
    msg.bias_r = 0.9659973984944902;

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
    msg.setTimeStamp(0.32391164864525757);
    msg.setSource(42060U);
    msg.setSourceEntity(98U);
    msg.setDestination(8883U);
    msg.setDestinationEntity(218U);
    msg.x = 0.8456077756228056;
    msg.y = 0.3001919778558667;
    msg.z = 0.5425045040957152;
    msg.phi = 0.6382349523492191;
    msg.theta = 0.11535214611140787;
    msg.psi = 0.5993555160248689;
    msg.p = 0.5316787458153713;
    msg.q = 0.484842738271013;
    msg.r = 0.6191897548899662;
    msg.u = 0.9477753051277892;
    msg.v = 0.4271226199568626;
    msg.w = 0.6990598070899725;
    msg.bias_psi = 0.4106087381014393;
    msg.bias_r = 0.9976174859118471;

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
    msg.setTimeStamp(0.7017184154106137);
    msg.setSource(23774U);
    msg.setSourceEntity(246U);
    msg.setDestination(16873U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.35662973665607745;
    msg.bias_r = 0.7054750954455518;
    msg.cog = 0.7334872753691195;
    msg.cyaw = 0.877162265836828;
    msg.lbl_rej_level = 0.0009715647493008239;
    msg.gps_rej_level = 0.7625222827612482;
    msg.custom_x = 0.45345576259692855;
    msg.custom_y = 0.12000243890227158;
    msg.custom_z = 0.2702373914042032;

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
    msg.setTimeStamp(0.044238010784780624);
    msg.setSource(33437U);
    msg.setSourceEntity(137U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(246U);
    msg.bias_psi = 0.4439119194404626;
    msg.bias_r = 0.4121693831081188;
    msg.cog = 0.9660551034008572;
    msg.cyaw = 0.6283713291201114;
    msg.lbl_rej_level = 0.48754506636238104;
    msg.gps_rej_level = 0.9311972752117321;
    msg.custom_x = 0.46639730584625005;
    msg.custom_y = 0.9614864868387482;
    msg.custom_z = 0.9378219528213506;

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
    msg.setTimeStamp(0.7996329131366783);
    msg.setSource(6830U);
    msg.setSourceEntity(76U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(32U);
    msg.bias_psi = 0.3373474372612677;
    msg.bias_r = 0.497721381606423;
    msg.cog = 0.17385779907291377;
    msg.cyaw = 0.7206941255073391;
    msg.lbl_rej_level = 0.5411359428774843;
    msg.gps_rej_level = 0.150505721798885;
    msg.custom_x = 0.9089603666743897;
    msg.custom_y = 0.2514978937495489;
    msg.custom_z = 0.9687307920362986;

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
    msg.setTimeStamp(0.2122535189330771);
    msg.setSource(6378U);
    msg.setSourceEntity(31U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.5427539794925493;
    msg.reason = 50U;

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
    msg.setTimeStamp(0.7363473063734309);
    msg.setSource(39845U);
    msg.setSourceEntity(51U);
    msg.setDestination(23390U);
    msg.setDestinationEntity(234U);
    msg.utc_time = 0.06057791315364336;
    msg.reason = 231U;

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
    msg.setTimeStamp(0.46816177825322747);
    msg.setSource(36489U);
    msg.setSourceEntity(67U);
    msg.setDestination(54799U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.0658940095724948;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.22048251077587389);
    msg.setSource(1028U);
    msg.setSourceEntity(128U);
    msg.setDestination(59948U);
    msg.setDestinationEntity(153U);
    msg.id = 83U;
    msg.range = 0.4646772939105721;
    msg.acceptance = 160U;

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
    msg.setTimeStamp(0.2256848891640597);
    msg.setSource(21792U);
    msg.setSourceEntity(46U);
    msg.setDestination(57384U);
    msg.setDestinationEntity(213U);
    msg.id = 162U;
    msg.range = 0.5290793914073496;
    msg.acceptance = 38U;

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
    msg.setTimeStamp(0.6200190537358637);
    msg.setSource(56600U);
    msg.setSourceEntity(52U);
    msg.setDestination(17850U);
    msg.setDestinationEntity(19U);
    msg.id = 250U;
    msg.range = 0.6102037802643714;
    msg.acceptance = 149U;

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
    msg.setTimeStamp(0.5288594542415623);
    msg.setSource(13970U);
    msg.setSourceEntity(199U);
    msg.setDestination(30335U);
    msg.setDestinationEntity(184U);
    msg.type = 72U;
    msg.reason = 186U;
    msg.value = 0.8853418612339428;
    msg.timestep = 0.5087814096462467;

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
    msg.setTimeStamp(0.33940218825872703);
    msg.setSource(57094U);
    msg.setSourceEntity(105U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(191U);
    msg.type = 204U;
    msg.reason = 189U;
    msg.value = 0.46109360914104847;
    msg.timestep = 0.749140755354633;

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
    msg.setTimeStamp(0.8736306857093913);
    msg.setSource(41623U);
    msg.setSourceEntity(54U);
    msg.setDestination(5333U);
    msg.setDestinationEntity(128U);
    msg.type = 103U;
    msg.reason = 102U;
    msg.value = 0.802345352555075;
    msg.timestep = 0.5209906541659481;

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
    msg.setTimeStamp(0.47774902875152625);
    msg.setSource(58630U);
    msg.setSourceEntity(155U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(72U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUFDJFDODVGBQPGWLZCLJJUAKBOHH");
    tmp_msg_0.lat = 0.11015649757146773;
    tmp_msg_0.lon = 0.14698059011585307;
    tmp_msg_0.depth = 0.354893291056372;
    tmp_msg_0.query_channel = 51U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 164U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9704934906588633;
    msg.y = 0.5738913490295211;
    msg.var_x = 0.7139609047617831;
    msg.var_y = 0.1667267140257579;
    msg.distance = 0.741095400644276;

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
    msg.setTimeStamp(0.007650205799347609);
    msg.setSource(58476U);
    msg.setSourceEntity(65U);
    msg.setDestination(63716U);
    msg.setDestinationEntity(41U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XGWTQNRFUDEOEXQHHHXJTACBZZBUYRZFCWEUPYBOIVIYJCSJRJINBBNEYHA");
    tmp_msg_0.lat = 0.9068293096965155;
    tmp_msg_0.lon = 0.8754523180952304;
    tmp_msg_0.depth = 0.44899165448655576;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 56U;
    tmp_msg_0.transponder_delay = 163U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.556220681285073;
    msg.y = 0.6678335407836337;
    msg.var_x = 0.390238155110481;
    msg.var_y = 0.6134638735291392;
    msg.distance = 0.419060339298128;

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
    msg.setTimeStamp(0.5102299493548438);
    msg.setSource(2295U);
    msg.setSourceEntity(58U);
    msg.setDestination(38950U);
    msg.setDestinationEntity(168U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SVCPINTFZYBUEJCLYQXCKLZKPNZAQNUDPVYUSBXGFZRBLKWEEWCDHIXXDYNIEOPMYOQLSDOKBNGWSPHOLFZFATBJHGNAFIBXBYVQJGFGRTAMGMCJZPHQVINBMJCJPOOMOWRFWMKZCDHTDYLXFHVLWMCIKYTC");
    tmp_msg_0.lat = 0.4264183904399821;
    tmp_msg_0.lon = 0.22865552418232493;
    tmp_msg_0.depth = 0.4282115800417283;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5519029717348435;
    msg.y = 0.18397922387708354;
    msg.var_x = 0.6954094266778592;
    msg.var_y = 0.3488369188510275;
    msg.distance = 0.41568344292927006;

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
    msg.setTimeStamp(0.5212095178929479);
    msg.setSource(48426U);
    msg.setSourceEntity(44U);
    msg.setDestination(30348U);
    msg.setDestinationEntity(161U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.9208678966431566);
    msg.setSource(14005U);
    msg.setSourceEntity(158U);
    msg.setDestination(55684U);
    msg.setDestinationEntity(117U);
    msg.state = 226U;

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
    msg.setTimeStamp(0.3342631937496897);
    msg.setSource(48184U);
    msg.setSourceEntity(120U);
    msg.setDestination(38030U);
    msg.setDestinationEntity(10U);
    msg.state = 20U;

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
    msg.setTimeStamp(0.3103614879506197);
    msg.setSource(61670U);
    msg.setSourceEntity(243U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(16U);
    msg.x = 0.8798310323938127;
    msg.y = 0.5465456081447303;
    msg.z = 0.9221186576113908;

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
    msg.setTimeStamp(0.5869219067964245);
    msg.setSource(38990U);
    msg.setSourceEntity(186U);
    msg.setDestination(56162U);
    msg.setDestinationEntity(131U);
    msg.x = 0.8417068647070464;
    msg.y = 0.16901967726791056;
    msg.z = 0.27999371112245297;

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
    msg.setTimeStamp(0.40634701058547895);
    msg.setSource(62400U);
    msg.setSourceEntity(237U);
    msg.setDestination(38882U);
    msg.setDestinationEntity(221U);
    msg.x = 0.9308023865926751;
    msg.y = 0.8201525164179344;
    msg.z = 0.5895475261694013;

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
    msg.setTimeStamp(0.5517225451325696);
    msg.setSource(45280U);
    msg.setSourceEntity(207U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(4U);
    msg.va = 0.7158487674225629;
    msg.aoa = 0.16917077125648572;
    msg.ssa = 0.441981063538761;

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
    msg.setTimeStamp(0.563238850688854);
    msg.setSource(3115U);
    msg.setSourceEntity(164U);
    msg.setDestination(54355U);
    msg.setDestinationEntity(155U);
    msg.va = 0.56325292093045;
    msg.aoa = 0.2259245798251941;
    msg.ssa = 0.21903046650467894;

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
    msg.setTimeStamp(0.6771970560748646);
    msg.setSource(30615U);
    msg.setSourceEntity(7U);
    msg.setDestination(24897U);
    msg.setDestinationEntity(92U);
    msg.va = 0.26116157828363473;
    msg.aoa = 0.2875123958598558;
    msg.ssa = 0.20380581429750777;

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
    msg.setTimeStamp(0.27159925838337007);
    msg.setSource(910U);
    msg.setSourceEntity(106U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(26U);
    msg.value = 0.09171705734515623;

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
    msg.setTimeStamp(0.7274554229320069);
    msg.setSource(45669U);
    msg.setSourceEntity(179U);
    msg.setDestination(46348U);
    msg.setDestinationEntity(34U);
    msg.value = 0.46997231998380284;

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
    msg.setTimeStamp(0.19224974604116374);
    msg.setSource(27184U);
    msg.setSourceEntity(223U);
    msg.setDestination(2514U);
    msg.setDestinationEntity(33U);
    msg.value = 0.711003526233889;

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
    msg.setTimeStamp(0.5504143542707582);
    msg.setSource(13432U);
    msg.setSourceEntity(76U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(186U);
    msg.value = 0.1266915104354377;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.9639634579855312);
    msg.setSource(10795U);
    msg.setSourceEntity(101U);
    msg.setDestination(32692U);
    msg.setDestinationEntity(237U);
    msg.value = 0.918888791705064;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.42172110164611043);
    msg.setSource(36804U);
    msg.setSourceEntity(116U);
    msg.setDestination(33170U);
    msg.setDestinationEntity(192U);
    msg.value = 0.4608988834190807;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.24780343832024487);
    msg.setSource(37711U);
    msg.setSourceEntity(71U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(2U);
    msg.value = 0.45190148691692134;
    msg.speed_units = 75U;

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
    msg.setTimeStamp(0.9229753414356149);
    msg.setSource(63023U);
    msg.setSourceEntity(9U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9516222410499232;
    msg.speed_units = 93U;

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
    msg.setTimeStamp(0.9112408646875609);
    msg.setSource(23996U);
    msg.setSourceEntity(60U);
    msg.setDestination(26301U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9464594815583001;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.15833573005801438);
    msg.setSource(10089U);
    msg.setSourceEntity(75U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(158U);
    msg.value = 0.22969498611807548;

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
    msg.setTimeStamp(0.4956713015494473);
    msg.setSource(13550U);
    msg.setSourceEntity(125U);
    msg.setDestination(16397U);
    msg.setDestinationEntity(111U);
    msg.value = 0.9391942117124205;

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
    msg.setTimeStamp(0.18489190658439636);
    msg.setSource(64977U);
    msg.setSourceEntity(26U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9876418539248131;

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
    msg.setTimeStamp(0.1587246216125603);
    msg.setSource(33334U);
    msg.setSourceEntity(246U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7989599516157629;

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
    msg.setTimeStamp(0.9650190598012887);
    msg.setSource(27178U);
    msg.setSourceEntity(2U);
    msg.setDestination(11240U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8735184676736921;

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
    msg.setTimeStamp(0.6507669630259463);
    msg.setSource(48308U);
    msg.setSourceEntity(224U);
    msg.setDestination(11907U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8187888220576719;

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
    msg.setTimeStamp(0.7071945578937261);
    msg.setSource(907U);
    msg.setSourceEntity(114U);
    msg.setDestination(37101U);
    msg.setDestinationEntity(56U);
    msg.value = 0.024369484366991934;

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
    msg.setTimeStamp(0.6055136013707977);
    msg.setSource(28204U);
    msg.setSourceEntity(246U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5606899274643652;

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
    msg.setTimeStamp(0.06311686468094257);
    msg.setSource(13573U);
    msg.setSourceEntity(227U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5458411538253334;

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
    msg.setTimeStamp(0.07299646653217096);
    msg.setSource(10532U);
    msg.setSourceEntity(172U);
    msg.setDestination(7383U);
    msg.setDestinationEntity(192U);
    msg.path_ref = 3154167133U;
    msg.start_lat = 0.1521055806146474;
    msg.start_lon = 0.2974423835560879;
    msg.start_z = 0.9270305857944514;
    msg.start_z_units = 182U;
    msg.end_lat = 0.5518305717513399;
    msg.end_lon = 0.1448242616944152;
    msg.end_z = 0.3778378084496362;
    msg.end_z_units = 4U;
    msg.speed = 0.2613345883839858;
    msg.speed_units = 91U;
    msg.lradius = 0.14063887291933286;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.7867756347071426);
    msg.setSource(63015U);
    msg.setSourceEntity(46U);
    msg.setDestination(59158U);
    msg.setDestinationEntity(194U);
    msg.path_ref = 3214683335U;
    msg.start_lat = 0.9274865698053022;
    msg.start_lon = 0.28959040685652404;
    msg.start_z = 0.23054290823614076;
    msg.start_z_units = 91U;
    msg.end_lat = 0.29581063943366814;
    msg.end_lon = 0.7879059424818071;
    msg.end_z = 0.5923226869197167;
    msg.end_z_units = 12U;
    msg.speed = 0.27031842540497997;
    msg.speed_units = 185U;
    msg.lradius = 0.48577843877899907;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.06206326553693875);
    msg.setSource(17436U);
    msg.setSourceEntity(182U);
    msg.setDestination(45955U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 3989455457U;
    msg.start_lat = 0.0798794412632382;
    msg.start_lon = 0.4293200507933721;
    msg.start_z = 0.6866073307704205;
    msg.start_z_units = 72U;
    msg.end_lat = 0.9061084332292415;
    msg.end_lon = 0.9291806103978575;
    msg.end_z = 0.19515021961434442;
    msg.end_z_units = 73U;
    msg.speed = 0.5127266834665509;
    msg.speed_units = 198U;
    msg.lradius = 0.47677766207853234;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.6687626878754548);
    msg.setSource(64971U);
    msg.setSourceEntity(171U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(170U);
    msg.x = 0.0125032787492656;
    msg.y = 0.9933534643249069;
    msg.z = 0.17012358367474278;
    msg.k = 0.116442046379438;
    msg.m = 0.49751319689669615;
    msg.n = 0.12950778193556145;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.1268603084797102);
    msg.setSource(53901U);
    msg.setSourceEntity(87U);
    msg.setDestination(12259U);
    msg.setDestinationEntity(103U);
    msg.x = 0.599209817312085;
    msg.y = 0.3477308924719511;
    msg.z = 0.5910093269098948;
    msg.k = 0.9574590037473791;
    msg.m = 0.001979715312054986;
    msg.n = 0.23738669421925307;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.5247633165208596);
    msg.setSource(43756U);
    msg.setSourceEntity(95U);
    msg.setDestination(18244U);
    msg.setDestinationEntity(52U);
    msg.x = 0.03702500510326778;
    msg.y = 0.5581053582214592;
    msg.z = 0.15204574041849195;
    msg.k = 0.41853684950414305;
    msg.m = 0.12165843172586233;
    msg.n = 0.7546126568657314;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.3387171845096597);
    msg.setSource(40305U);
    msg.setSourceEntity(221U);
    msg.setDestination(56223U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5985730217217409;

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
    msg.setTimeStamp(0.7853444185949577);
    msg.setSource(51148U);
    msg.setSourceEntity(52U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6830828935969244;

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
    msg.setTimeStamp(0.05154728266186981);
    msg.setSource(62161U);
    msg.setSourceEntity(168U);
    msg.setDestination(27622U);
    msg.setDestinationEntity(38U);
    msg.value = 0.3193986619592033;

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
    msg.setTimeStamp(0.02785766247799293);
    msg.setSource(57187U);
    msg.setSourceEntity(79U);
    msg.setDestination(16420U);
    msg.setDestinationEntity(120U);
    msg.u = 0.7794917151165912;
    msg.v = 0.032894501524973974;
    msg.w = 0.08670721888981503;
    msg.p = 0.6686135875505552;
    msg.q = 0.8896357437352306;
    msg.r = 0.2698290579874578;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.12700319491962786);
    msg.setSource(7382U);
    msg.setSourceEntity(231U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(152U);
    msg.u = 0.2589981062512978;
    msg.v = 0.6504403677440485;
    msg.w = 0.29143461325702424;
    msg.p = 0.09676494920031464;
    msg.q = 0.24195481246735373;
    msg.r = 0.12317717509952553;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.14539072780614715);
    msg.setSource(141U);
    msg.setSourceEntity(137U);
    msg.setDestination(35137U);
    msg.setDestinationEntity(80U);
    msg.u = 0.2411582487377525;
    msg.v = 0.7639324357487708;
    msg.w = 0.9388247273537863;
    msg.p = 0.5520919832985459;
    msg.q = 0.9605914846331741;
    msg.r = 0.44893771022283224;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.4627780577515733);
    msg.setSource(29392U);
    msg.setSourceEntity(104U);
    msg.setDestination(53153U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 2611870643U;
    msg.start_lat = 0.10029844083517947;
    msg.start_lon = 0.9369867568124011;
    msg.start_z = 0.33306712804961425;
    msg.start_z_units = 48U;
    msg.end_lat = 0.5663297057453733;
    msg.end_lon = 0.8828834672636308;
    msg.end_z = 0.3284112033498594;
    msg.end_z_units = 139U;
    msg.lradius = 0.786551338898316;
    msg.flags = 175U;
    msg.x = 0.7902019127811201;
    msg.y = 0.00503023737428232;
    msg.z = 0.912976317323046;
    msg.vx = 0.9697052496846805;
    msg.vy = 0.20773417448986364;
    msg.vz = 0.865446295735518;
    msg.course_error = 0.28633396762746244;
    msg.eta = 5896U;

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
    msg.setTimeStamp(0.3927724460887535);
    msg.setSource(3453U);
    msg.setSourceEntity(25U);
    msg.setDestination(52330U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 2485348479U;
    msg.start_lat = 0.4126758938349011;
    msg.start_lon = 0.5311214469668005;
    msg.start_z = 0.408010512436371;
    msg.start_z_units = 9U;
    msg.end_lat = 0.5529138680162987;
    msg.end_lon = 0.9151529608896052;
    msg.end_z = 0.4013396591115723;
    msg.end_z_units = 7U;
    msg.lradius = 0.020785746644665037;
    msg.flags = 94U;
    msg.x = 0.308956699354891;
    msg.y = 0.8858447570677107;
    msg.z = 0.5730318477934465;
    msg.vx = 0.7386165255965805;
    msg.vy = 0.8636878803503085;
    msg.vz = 0.16169759765770764;
    msg.course_error = 0.34516913186736875;
    msg.eta = 41836U;

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
    msg.setTimeStamp(0.16257138187408315);
    msg.setSource(37713U);
    msg.setSourceEntity(23U);
    msg.setDestination(57440U);
    msg.setDestinationEntity(249U);
    msg.path_ref = 1698084300U;
    msg.start_lat = 0.20325099440369265;
    msg.start_lon = 0.13509652700171415;
    msg.start_z = 0.3431402082272711;
    msg.start_z_units = 46U;
    msg.end_lat = 0.013648715257301713;
    msg.end_lon = 0.7357380315380506;
    msg.end_z = 0.18576510948276126;
    msg.end_z_units = 69U;
    msg.lradius = 0.986205798082843;
    msg.flags = 208U;
    msg.x = 0.653308684770039;
    msg.y = 0.213947894441184;
    msg.z = 0.5919120346932933;
    msg.vx = 0.9297922960025524;
    msg.vy = 0.6965802675719338;
    msg.vz = 0.23378759195514454;
    msg.course_error = 0.2888360975385005;
    msg.eta = 34448U;

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
    msg.setTimeStamp(0.1344745646052089);
    msg.setSource(36457U);
    msg.setSourceEntity(130U);
    msg.setDestination(57550U);
    msg.setDestinationEntity(208U);
    msg.k = 0.7785357999126726;
    msg.m = 0.534173373953896;
    msg.n = 0.5955098250249405;

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
    msg.setTimeStamp(0.2848750241102447);
    msg.setSource(32247U);
    msg.setSourceEntity(36U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(31U);
    msg.k = 0.17206066696663835;
    msg.m = 0.8599533334964622;
    msg.n = 0.14419091601922407;

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
    msg.setTimeStamp(0.7211747395419034);
    msg.setSource(39368U);
    msg.setSourceEntity(177U);
    msg.setDestination(65428U);
    msg.setDestinationEntity(52U);
    msg.k = 0.593208242729369;
    msg.m = 0.5577329675886243;
    msg.n = 0.11031872615008265;

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
    msg.setTimeStamp(0.9298513728859407);
    msg.setSource(14957U);
    msg.setSourceEntity(162U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(180U);
    msg.p = 0.02379146658350173;
    msg.i = 0.9504316690451344;
    msg.d = 0.04582374697088021;
    msg.a = 0.06049991991837911;

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
    msg.setTimeStamp(0.8221084263671081);
    msg.setSource(25957U);
    msg.setSourceEntity(24U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(222U);
    msg.p = 0.8975983946325755;
    msg.i = 0.16394934061954392;
    msg.d = 0.2598468493042234;
    msg.a = 0.5254555452338513;

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
    msg.setTimeStamp(0.7808869629317277);
    msg.setSource(40191U);
    msg.setSourceEntity(90U);
    msg.setDestination(53009U);
    msg.setDestinationEntity(38U);
    msg.p = 0.7225591345336554;
    msg.i = 0.7993318514561385;
    msg.d = 0.6303425714385419;
    msg.a = 0.9720844795019408;

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
    msg.setTimeStamp(0.9758871803951527);
    msg.setSource(21422U);
    msg.setSourceEntity(92U);
    msg.setDestination(1571U);
    msg.setDestinationEntity(249U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.717338715064969);
    msg.setSource(37792U);
    msg.setSourceEntity(247U);
    msg.setDestination(50765U);
    msg.setDestinationEntity(225U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.723306111012129);
    msg.setSource(49197U);
    msg.setSourceEntity(0U);
    msg.setDestination(37731U);
    msg.setDestinationEntity(93U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.7177507057093203);
    msg.setSource(27968U);
    msg.setSourceEntity(117U);
    msg.setDestination(57457U);
    msg.setDestinationEntity(46U);
    msg.x = 0.052766096549884844;
    msg.y = 0.7316339749412151;
    msg.z = 0.0007156603512611381;
    msg.vx = 0.7203144554846629;
    msg.vy = 0.6676612165805862;
    msg.vz = 0.32537336836171016;
    msg.ax = 0.5911987446083483;
    msg.ay = 0.40963648115571494;
    msg.az = 0.1422080404599163;
    msg.flags = 24679U;

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
    msg.setTimeStamp(0.9520611068568825);
    msg.setSource(13635U);
    msg.setSourceEntity(183U);
    msg.setDestination(7483U);
    msg.setDestinationEntity(253U);
    msg.x = 0.7868247611089841;
    msg.y = 0.6667110208464123;
    msg.z = 0.4667589626806611;
    msg.vx = 0.8911644302481208;
    msg.vy = 0.34454465056758854;
    msg.vz = 0.8477770370137968;
    msg.ax = 0.10234177851410686;
    msg.ay = 0.2594547534261572;
    msg.az = 0.684732470333532;
    msg.flags = 10851U;

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
    msg.setTimeStamp(0.10592434814153806);
    msg.setSource(2981U);
    msg.setSourceEntity(235U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(121U);
    msg.x = 0.8298801799739224;
    msg.y = 0.236735219222588;
    msg.z = 0.22019740649714747;
    msg.vx = 0.7751151861529041;
    msg.vy = 0.7775918915903588;
    msg.vz = 0.4167254575775896;
    msg.ax = 0.3286783339904139;
    msg.ay = 0.3542533913131025;
    msg.az = 0.3157403630837692;
    msg.flags = 31916U;

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
    msg.setTimeStamp(0.9131500323536649);
    msg.setSource(24014U);
    msg.setSourceEntity(194U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(161U);
    msg.value = 0.24666189920674653;

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
    msg.setTimeStamp(0.28290561372711864);
    msg.setSource(49786U);
    msg.setSourceEntity(122U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(32U);
    msg.value = 0.12686750709597905;

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
    msg.setTimeStamp(0.46125026281663606);
    msg.setSource(63062U);
    msg.setSourceEntity(145U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(22U);
    msg.value = 0.4940275048514007;

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
    msg.setTimeStamp(0.8737494517934553);
    msg.setSource(16572U);
    msg.setSourceEntity(0U);
    msg.setDestination(221U);
    msg.setDestinationEntity(153U);
    msg.timeout = 45115U;
    msg.lat = 0.47035889270047404;
    msg.lon = 0.34196421856813974;
    msg.z = 0.7624530281453606;
    msg.z_units = 250U;
    msg.speed = 0.4841144395227688;
    msg.speed_units = 91U;
    msg.roll = 0.00580404455029071;
    msg.pitch = 0.9245142581313133;
    msg.yaw = 0.33335959771973;
    msg.custom.assign("QRNCHSYXWYRTYYUVWXKPPJGQSIORBTVVKXMIIHNUEJUWDSFNALNAVVQZSYUEPMOFYEBRPAREANQESVFEMFRJRDXYBBITPUNJGOZYDQWADRTPNISZWFKHXHLZMCOJJSRLGUDXCKXCHWKJTADZCXQRVUHGPBGBHFLQUPAPGEOKOFCUTXGCOWJWBIZDFEDYPTGFFILQMQISHAMYJBOZCCKAKHZWLZMDVVBIMMLJK");

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
    msg.setTimeStamp(0.19982942347307409);
    msg.setSource(45277U);
    msg.setSourceEntity(75U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(126U);
    msg.timeout = 19171U;
    msg.lat = 0.5375101684602028;
    msg.lon = 0.41603375167626144;
    msg.z = 0.46087835555510714;
    msg.z_units = 122U;
    msg.speed = 0.3639985124662901;
    msg.speed_units = 234U;
    msg.roll = 0.6356472638864562;
    msg.pitch = 0.5227064084850003;
    msg.yaw = 0.20269433642593948;
    msg.custom.assign("TMVZNZIJDFUXRUQFIBKAKDSVQDHYFFCDSSBXDAQZAPSHIHRHTMJOFNGYQERBHPFJRYXPTIDVJKCTPCCSNNKPJKNNCNQIDLVGGLETBZCWIHFCLXZCIWEZHTYRJXTEJUYPDWTEWOMIYO");

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
    msg.setTimeStamp(0.7380577866143785);
    msg.setSource(13368U);
    msg.setSourceEntity(72U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(15U);
    msg.timeout = 54860U;
    msg.lat = 0.7485146096607513;
    msg.lon = 0.9553394498537247;
    msg.z = 0.8716013272152039;
    msg.z_units = 49U;
    msg.speed = 0.31314514075781075;
    msg.speed_units = 141U;
    msg.roll = 0.01040608347445049;
    msg.pitch = 0.12855470023538595;
    msg.yaw = 0.618573821351042;
    msg.custom.assign("CLOHRGUKGMXXIZRUFNPFZDPQRKCLMHCYXJVGJBDVKNQKKQCCSEMOXJPYHTAOTEFYIRTGQUJTGHGSKSFCNWPWIIDHTUYIRIJYWRHJMALLQFEHWSPINLVESZADAEWYRVCOHLPWVXFIMJUBLWBPOONJVEUOWJYDKCDVXQMFXQLGNBOCIQAUAXZYLLNVQVSUDSAIWHPTBTNTQEPFRACVM");

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
    msg.setTimeStamp(0.36579324489337406);
    msg.setSource(18437U);
    msg.setSourceEntity(115U);
    msg.setDestination(45206U);
    msg.setDestinationEntity(39U);
    msg.timeout = 49826U;
    msg.lat = 0.19486595364537762;
    msg.lon = 0.3850000504660879;
    msg.z = 0.34947494410115043;
    msg.z_units = 162U;
    msg.speed = 0.7108399455581094;
    msg.speed_units = 233U;
    msg.duration = 59788U;
    msg.radius = 0.12822013806182087;
    msg.flags = 37U;
    msg.custom.assign("GYHHNGIIOWLHZYDJNTUCUOXOSCJMMEVAUSFMUCPBVOTVQCNDTQIQEZNTLFASWICDNYKRRHXWFKEPNYMEUSLXTSCJGWVAZVPWMEZHNZKINTBXPQULQVYQPKMTUBFRJARAXDJJWDVIUHHXGBFRALZZRKFMOVOTGXEQPBOSEJXKYKLYLMFEGDADMNRTFSMCASWYRULQIXIITWZFGZVGNLPKOCAJUZPHEJRDACJBGDQFWYPBL");

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
    msg.setTimeStamp(0.9664887037633569);
    msg.setSource(35775U);
    msg.setSourceEntity(138U);
    msg.setDestination(58553U);
    msg.setDestinationEntity(4U);
    msg.timeout = 27354U;
    msg.lat = 0.37031478604265067;
    msg.lon = 0.870536747495665;
    msg.z = 0.920501619914941;
    msg.z_units = 159U;
    msg.speed = 0.7481666277833219;
    msg.speed_units = 185U;
    msg.duration = 27534U;
    msg.radius = 0.6719476062359813;
    msg.flags = 208U;
    msg.custom.assign("SESNMEYPERISXHZOZBDFPQLRZLRMVFPWCVWUGMOPDHQKMXAEGJZOOTTBOPYULHCXBSREOTGTQABSNBCANIDIPAVYBYMNQSWRDDKYFOTQAWAWEZFWFXFCDXBZKOCKLCYDJVVFJUYFHVGILTJQPTKJTWXXTBIPWZNDCQKVVNUVKMZXRYEIQIZEEWPGECNALHNXJOJYFRODQUHCHDKUHUSMHUKL");

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
    msg.setTimeStamp(0.5287713943584255);
    msg.setSource(36199U);
    msg.setSourceEntity(204U);
    msg.setDestination(63204U);
    msg.setDestinationEntity(11U);
    msg.timeout = 28283U;
    msg.lat = 0.3221378665931146;
    msg.lon = 0.5670407232278676;
    msg.z = 0.07447896605639359;
    msg.z_units = 22U;
    msg.speed = 0.1878223356005445;
    msg.speed_units = 110U;
    msg.duration = 28391U;
    msg.radius = 0.6496952095125033;
    msg.flags = 247U;
    msg.custom.assign("HNZPQCKTRSDCFFWPFGKFAVVXSOGZGFBVTRMXGSBOZPCDSYLYTDRNSEDEVCRIYBAPKLLESHWUIWTOJXBRXHCULSBQNYZFMLQPKIFTRMDVTNYQNZLDJEGUUQAXULJFOCRBNHPOGKIWIWXWBKCTWYMBEEEOZDGAZVSAKTMIIQHEHIOGJLNOQTKVPAUNNMWFNSZJXJDXOWCOAGMFRBPHVHQVCPPMGLVYRKAHECEYSILQUJXWXRJTZU");

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
    msg.setTimeStamp(0.16557985162233713);
    msg.setSource(36919U);
    msg.setSourceEntity(61U);
    msg.setDestination(47140U);
    msg.setDestinationEntity(138U);
    msg.custom.assign("FKZEUGFVPCSACMV");

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
    msg.setTimeStamp(0.7278304679946663);
    msg.setSource(32930U);
    msg.setSourceEntity(83U);
    msg.setDestination(45743U);
    msg.setDestinationEntity(33U);
    msg.custom.assign("AYANSSFHPVFJJRRUZERWWFBDKBGSTQF");

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
    msg.setTimeStamp(0.10984580340083294);
    msg.setSource(4493U);
    msg.setSourceEntity(145U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("MVKAQDBKLGUCZKOSFIUNZFGQSRBKERDGNHMMBHSDOXYLDOLIFEVXWCNUSYWBTQHFOYRDHFEJISCSMEDSTRPTMVBAJCOWXBAMAABGIDNQBLWUNBEWKVVRGPJITOVSJHQORKLQFTALFUXMMUGFCPZGZECPPYZYWHJOIKLSQUEARPTPVZRNUTQMYIYKVYYLWZUNXXIRACYAERJJDLPFGMIGXNXXIHJOEKAJGEZVPFQQNZVCBW");

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
    msg.setTimeStamp(0.5933122115521264);
    msg.setSource(106U);
    msg.setSourceEntity(96U);
    msg.setDestination(59346U);
    msg.setDestinationEntity(167U);
    msg.timeout = 23214U;
    msg.lat = 0.572344329175693;
    msg.lon = 0.541184355858378;
    msg.z = 0.5342986526874929;
    msg.z_units = 95U;
    msg.duration = 26650U;
    msg.speed = 0.2921372858762207;
    msg.speed_units = 199U;
    msg.type = 79U;
    msg.radius = 0.02222421886574988;
    msg.length = 0.23787834230798155;
    msg.bearing = 0.22572149396563368;
    msg.direction = 162U;
    msg.custom.assign("ZJNORZRPMRDTBMHTRPCTYJKSNNQGEVDOUIFBMGPHYXUCFRFVKKQWPQSQPC");

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
    msg.setTimeStamp(0.13705336458094297);
    msg.setSource(54979U);
    msg.setSourceEntity(204U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(177U);
    msg.timeout = 18335U;
    msg.lat = 0.6464801031365437;
    msg.lon = 0.06978422395877593;
    msg.z = 0.47201936538233413;
    msg.z_units = 104U;
    msg.duration = 53837U;
    msg.speed = 0.8036695168880276;
    msg.speed_units = 145U;
    msg.type = 156U;
    msg.radius = 0.7400774806543783;
    msg.length = 0.18231260991447928;
    msg.bearing = 0.8892391099972767;
    msg.direction = 107U;
    msg.custom.assign("IMUOZLQCXXMUGMGLNGNBGTSVKAOCDYDQWVBJDSDDHOIUSZRKQQHWLBJUCTTHMQTHGPNWSTXPARXJHMQWYFQVYQGAPCQUVZWICJDCGXBUEDRPHSUZMJWDWY");

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
    msg.setTimeStamp(0.5770388809904313);
    msg.setSource(12788U);
    msg.setSourceEntity(147U);
    msg.setDestination(31589U);
    msg.setDestinationEntity(81U);
    msg.timeout = 1039U;
    msg.lat = 0.1055321670758439;
    msg.lon = 0.02055577057136515;
    msg.z = 0.4154234663330304;
    msg.z_units = 70U;
    msg.duration = 33379U;
    msg.speed = 0.28841284757902563;
    msg.speed_units = 153U;
    msg.type = 69U;
    msg.radius = 0.27840712293521597;
    msg.length = 0.27501878731406393;
    msg.bearing = 0.6065030892282907;
    msg.direction = 154U;
    msg.custom.assign("RPVHDIOFXCGITTGBAXLHUWCPUWGVYJSEDGPDRTYPFQDONMCWQSQKQIZOMXFRLPMEYBLOGIAZYZCJSWDFPBUNVJTKNCEMDZXJEVFCLMHTMBZZGPQESRKQHTYRPTSHZV");

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
    msg.setTimeStamp(0.8488953475300143);
    msg.setSource(21446U);
    msg.setSourceEntity(109U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(104U);
    msg.duration = 40872U;
    msg.custom.assign("ZNSUGVJUYNQGFMYNHXTWIQZBCMPSSRYIBXHPWTBAQBXNBEOZNVUSIADSUHQKAXLOCXMZNJZMSLMZNAGCTONSJVAXNQFRBTQVDDWTGRULJCPXZFRJVBLJIMQFZLBCGLWKFTVGLDEYDQZAXDKPMXUYCOOFMRKRZKPPAFEJRMKAUSGYGPIIYTRCDHFWHILLOHYQQWTYIUEDWJTBFDRCJECIHUOFHVVHJYSIPKEVGKOW");

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
    msg.setTimeStamp(0.0034825566205900493);
    msg.setSource(38181U);
    msg.setSourceEntity(178U);
    msg.setDestination(4965U);
    msg.setDestinationEntity(107U);
    msg.duration = 8243U;
    msg.custom.assign("TAHKMXPNCIOMFHGFIQFNCKGYYATMUUFZOKVDBJRHIEHEUQSLDOJXPSNWCZGQMFGLPUOAWLAGSTBRLUTWRCUPIPKHFZTWAJEOREKDQNDDLYPPYQYPRXZGUVRKNXKVRMJQQRIUENLJUIPBMLSXWKXBHSSNBJARCBIBFWVQDKEDYSSVJWTIEZQYSTIEHOHOXTGCQMMVCUOPX");

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
    msg.setTimeStamp(0.9053709116462867);
    msg.setSource(17450U);
    msg.setSourceEntity(62U);
    msg.setDestination(3511U);
    msg.setDestinationEntity(253U);
    msg.duration = 7804U;
    msg.custom.assign("BAUREGTPFFGUXCCPBBQWPHOWXFXYPNRFQIHEIUOTIXDDJYWMBXFKXYWKJADZATKJARYOSQXVSRZHUJOTZVLJNXAWFQYEGROTELTZJKMOXAIDMINULERPYUHVAYPKIHTJJRQYUADUNCLROMJELLEHWQGQSKEMCKAVSIOFPDSIBZHNGSGHNCRKJUWMHIZBYTZSLNCTYBKMDQGLAZQNNCCFOKGDPVEWBCXPOVVGVFSBSSFBZWMDPTMIWQNZLV");

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
    msg.setTimeStamp(0.1073220368696034);
    msg.setSource(39109U);
    msg.setSourceEntity(119U);
    msg.setDestination(12521U);
    msg.setDestinationEntity(203U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5910816138066622;
    tmp_msg_0.speed_units = 207U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6424U;
    msg.custom.assign("JQEIULCBXNXNVJRECOZEWDDWGIPJMCUTGVRDSWOUJZLRDSOEUBBKMYDWQDKOLFNVAAVXEMSSFLRLZGVOQWQPAKMKZZMWJQZYONTHOQYYYJATHDHFUHCGHNXHNLTJKNXCPQBICIWCYSETDXAZJLAMPESPZRFYRVEBQYGHRGVCBATPADQCZIIJBXVNBPIEMHTTSZBFUWKFPYQNCURLHUEOMFXIVIMFFKGILKSA");

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
    msg.setTimeStamp(0.9588338511196323);
    msg.setSource(44612U);
    msg.setSourceEntity(112U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(159U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8150704684422695;
    msg.control.set(tmp_msg_0);
    msg.duration = 63564U;
    msg.custom.assign("QWMJMVLXLJQGBURDOQEXUGIMYRHLFXGFJKWPDWUVMNOUKZNQYGWBKABYZBTPLSCXKLRTZLVJHOKZZJAGAPAOVLECDMBPUZFTDWGQUCSCTANHQTBIGQYOUCVSBAKSPTESWVCDEGZMAKGDROBWFZQMHIPCXISJYNJYPNIPONLXHJNYOAPFSBTVKBEKHY");

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
    msg.setTimeStamp(0.9945304293678582);
    msg.setSource(26561U);
    msg.setSourceEntity(2U);
    msg.setDestination(48830U);
    msg.setDestinationEntity(76U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.7416225499785503;
    msg.control.set(tmp_msg_0);
    msg.duration = 38104U;
    msg.custom.assign("VYHFWVZUQVUJRMDNGSCPZAHGPZUUVWQDBVJWIFTXOKTMFIJBKCIZPNKQISTQLEFHEBZNYNXEHYVHSENDSJKRGVWUQOLEEZGMTDQATROWHUMLHFTDLOPGAKLEXTBRAMFEOJYLJUK");

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
    msg.setTimeStamp(0.8259338645034445);
    msg.setSource(27601U);
    msg.setSourceEntity(181U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(27U);
    msg.timeout = 42380U;
    msg.lat = 0.16118265703859092;
    msg.lon = 0.4701171784485674;
    msg.z = 0.4578284764595485;
    msg.z_units = 11U;
    msg.speed = 0.8637512435246536;
    msg.speed_units = 1U;
    msg.bearing = 0.7887126105767411;
    msg.cross_angle = 0.6896506714681373;
    msg.width = 0.8285428016548324;
    msg.length = 0.7769527190630924;
    msg.hstep = 0.7857965812154362;
    msg.coff = 137U;
    msg.alternation = 167U;
    msg.flags = 23U;
    msg.custom.assign("MNEMKIMMJQTZXJBZCTKUPXVSLXZCGOPWXIVXJLNFSNLQVBUOZOISAPUYPKBVIHFNKKDYRLFIJCXYCCTPGOVGMFYNEKUURZCHOEOGFPIFNLLKTJOLCWDVAGQFHEMYJDPZQKBUEDBBOLWDFYJRNZAGSPMYRSWRAGAKDVIUEEZXKAMNQPOCWWAYHRTYRWMR");

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
    msg.setTimeStamp(0.6951765594053376);
    msg.setSource(32360U);
    msg.setSourceEntity(8U);
    msg.setDestination(62769U);
    msg.setDestinationEntity(241U);
    msg.timeout = 56025U;
    msg.lat = 0.916293199486211;
    msg.lon = 0.2459944709952624;
    msg.z = 0.6856775541197837;
    msg.z_units = 18U;
    msg.speed = 0.4705671561639335;
    msg.speed_units = 69U;
    msg.bearing = 0.5749573430601594;
    msg.cross_angle = 0.5655928163801449;
    msg.width = 0.01596243792668317;
    msg.length = 0.7985260357975623;
    msg.hstep = 0.15114899909800195;
    msg.coff = 141U;
    msg.alternation = 243U;
    msg.flags = 235U;
    msg.custom.assign("QHIAMOXNXOHNTIMQHTEOAZDIMRWJLMIFVQFLRSVYHEBCDDCGUDBOYUWCRNCSURVMLNJJHGZTWIAWKEDJVQYSHTZAPDKXUZYNVWLOEQALSEPLYABKONFZGUUXZVXITPCUQSQEVJWPBSUYSOFZADENFTMDRB");

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
    msg.setTimeStamp(0.5753232378491561);
    msg.setSource(10585U);
    msg.setSourceEntity(197U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(123U);
    msg.timeout = 36432U;
    msg.lat = 0.6949027889472691;
    msg.lon = 0.457246432734837;
    msg.z = 0.13255040718998545;
    msg.z_units = 194U;
    msg.speed = 0.8603407182633082;
    msg.speed_units = 194U;
    msg.bearing = 0.24333694996849964;
    msg.cross_angle = 0.5299162651729613;
    msg.width = 0.17875245755658764;
    msg.length = 0.07372774151581452;
    msg.hstep = 0.5348037019271137;
    msg.coff = 206U;
    msg.alternation = 187U;
    msg.flags = 10U;
    msg.custom.assign("TBBARSAHQPLCHMDKVKAIETGPPKCQSJBWBOLJESUXWOBNODBPTJYZRBZQHLLCZBYAGXWSADJZTOX");

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
    msg.setTimeStamp(0.38311641300703225);
    msg.setSource(42259U);
    msg.setSourceEntity(128U);
    msg.setDestination(15911U);
    msg.setDestinationEntity(240U);
    msg.timeout = 50293U;
    msg.lat = 0.22737920099010744;
    msg.lon = 0.36327288031185934;
    msg.z = 0.5090698301424479;
    msg.z_units = 36U;
    msg.speed = 0.1277070851526788;
    msg.speed_units = 2U;
    msg.custom.assign("NLCVIAYARDDEEZUGOBPVMFMJLHHHSPXCMPZABEMGFWBEOHARYJVSPQVRFGDYZSZOBGTGXJDOINTLUFFHYYSTLEOWILGQEZAITTLCNIIVOCAVXWIELKQNPUTUKFSRPIWALQZVKDBBRJUXNFEIR");

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
    msg.setTimeStamp(0.3314901212974286);
    msg.setSource(30243U);
    msg.setSourceEntity(121U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(9U);
    msg.timeout = 51774U;
    msg.lat = 0.033674512248286215;
    msg.lon = 0.811753528021921;
    msg.z = 0.7300980165608075;
    msg.z_units = 249U;
    msg.speed = 0.00016164894843906374;
    msg.speed_units = 190U;
    msg.custom.assign("OJFTRAMVYZSWCNFKPFVRRMNQKNHLTBMXUURWMFQWVZDNCALLOXIACHQCALMVGAIVZDCKJNVBHODMOTPWWYCGEUYYJOHBGVEOOCXDBSYTRADZEFKMGKJZPXSZSPVSIIEDZSQUNWXWHTEMPEJCTTCFRMTJMFUSOEHWEYQHGRFNQQJTDWQJNYFVRIYLGKXLIZUOAVGXDWBSB");

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
    msg.setTimeStamp(0.07284904991998753);
    msg.setSource(32397U);
    msg.setSourceEntity(204U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(207U);
    msg.timeout = 18262U;
    msg.lat = 0.4169771866476929;
    msg.lon = 0.08584268641638815;
    msg.z = 0.927112243115254;
    msg.z_units = 184U;
    msg.speed = 0.7011842216276347;
    msg.speed_units = 80U;
    msg.custom.assign("WNCSTNTAPFZPPHJSVRNWDHXJDBEEIJNKCFVDMCTTYQNJFEKHXANLARPRMMDGHNFWAUNYVZVBDRQHVBJHWTIGKWZVOVOWHZTTWMPMFOGRXOXOZFNEURYXOLMJGLRGDBQETCUTQPLMS");

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
    msg.setTimeStamp(0.4080317532992279);
    msg.setSource(64874U);
    msg.setSourceEntity(103U);
    msg.setDestination(1154U);
    msg.setDestinationEntity(178U);
    msg.x = 0.033284441082233385;
    msg.y = 0.6802198480092768;
    msg.z = 0.014108372941058378;

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
    msg.setTimeStamp(0.6796731547653795);
    msg.setSource(51338U);
    msg.setSourceEntity(89U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(206U);
    msg.x = 0.6199809655077921;
    msg.y = 0.028416509427238834;
    msg.z = 0.8422990090030279;

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
    msg.setTimeStamp(0.6556025650850769);
    msg.setSource(52628U);
    msg.setSourceEntity(29U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(183U);
    msg.x = 0.6919160168060927;
    msg.y = 0.4595836277575094;
    msg.z = 0.25171469055367246;

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
    msg.setTimeStamp(0.46910049020232913);
    msg.setSource(51254U);
    msg.setSourceEntity(223U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(17U);
    msg.timeout = 25659U;
    msg.lat = 0.9607158968449354;
    msg.lon = 0.7762923213153363;
    msg.z = 0.7787136181921884;
    msg.z_units = 0U;
    msg.amplitude = 0.2684664710830723;
    msg.pitch = 0.3058157706172373;
    msg.speed = 0.17424409562833865;
    msg.speed_units = 210U;
    msg.custom.assign("XTZDGHMXCWHJFBLFYJSCELXNHFGSQFKAEGUDWBQRYICAWDPCNJUKBLYXPTMJVKPTPBTLBADHJFZOXHDGLCAEEERKFQZXKVVIONDXGAEDXUIBZSVWTYDJCNMENYZGTBHVFAVWQOFEGIQIQBBIKHPSOCPNMHZLHPQSUJTYYM");

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
    msg.setTimeStamp(0.7970524058595141);
    msg.setSource(29932U);
    msg.setSourceEntity(127U);
    msg.setDestination(34733U);
    msg.setDestinationEntity(250U);
    msg.timeout = 25415U;
    msg.lat = 0.2316158253630317;
    msg.lon = 0.1284056999006784;
    msg.z = 0.20571013935998073;
    msg.z_units = 98U;
    msg.amplitude = 0.7605906434579058;
    msg.pitch = 0.14670363791500718;
    msg.speed = 0.5539541154560056;
    msg.speed_units = 78U;
    msg.custom.assign("JMWRMXAVHKBBLIXEPSUUD");

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
    msg.setTimeStamp(0.5706676304048186);
    msg.setSource(30850U);
    msg.setSourceEntity(43U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(17U);
    msg.timeout = 58447U;
    msg.lat = 0.3915414559071363;
    msg.lon = 0.841215663785746;
    msg.z = 0.4549565455713832;
    msg.z_units = 25U;
    msg.amplitude = 0.02099363688769673;
    msg.pitch = 0.18448904090178664;
    msg.speed = 0.5155864500964785;
    msg.speed_units = 177U;
    msg.custom.assign("VCQOIZTLESRHFUJKOGVPAPALOJVFKTHUOUEMEOYRLOXMRBHCMXGGUBHCISUQSTKYN");

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
    msg.setTimeStamp(0.16273318412372217);
    msg.setSource(45824U);
    msg.setSourceEntity(2U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.14558989771967634);
    msg.setSource(9720U);
    msg.setSourceEntity(70U);
    msg.setDestination(45221U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0029713214744734318);
    msg.setSource(45325U);
    msg.setSourceEntity(149U);
    msg.setDestination(58843U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4118848755305866);
    msg.setSource(8405U);
    msg.setSourceEntity(252U);
    msg.setDestination(18598U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.8693532221007678;
    msg.lon = 0.3097880353403918;
    msg.z = 0.11961715826183661;
    msg.z_units = 160U;
    msg.radius = 0.9160639101109003;
    msg.duration = 35966U;
    msg.speed = 0.19764397301349557;
    msg.speed_units = 108U;
    msg.custom.assign("YOKIBBVJAWWCAUXPPIQQBGSCMKAZAAPJUGSFDMRVHTAFGEXEZLSJTKHUTSULFEEZMPPJXWNUMRZFULGBEBXDKOIRMDNIIVVVGYSPYLWJSOROWCMJYKXPAZRAEJSVDBGRVKJNCCHWLQRAWIUROJKGMADOZJCDTLWSYIYHEKFUQLESXPSCWKCDOFBMIEYYDGKZDZITLBQMXCVXMGFTQQQTZVNXLHONWPNFTRGHLCYHQFNENXPFUBOD");

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
    msg.setTimeStamp(0.9447642849171889);
    msg.setSource(63204U);
    msg.setSourceEntity(199U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.5647046151357712;
    msg.lon = 0.35970100473506417;
    msg.z = 0.9773098432001077;
    msg.z_units = 101U;
    msg.radius = 0.7038963120633044;
    msg.duration = 64296U;
    msg.speed = 0.13015065988808283;
    msg.speed_units = 57U;
    msg.custom.assign("CBTDKORJUPKPSIHNEMDNFCQUXOFUFUJYUAUKYHVANKKEMDWVQROOSWAFYZMLCSLVDSHJZOFLIZPEQZCYDGGTKIYMPSTZQIUTLNWGZKCWTBIMAACHABKCROXEHQSFFJIIHRWSFRWGMTVJQTGNNRXIOSJRFRPMAVDEBGWHJECNWPLPFNWZEKXROXYPHGZEVMWMZEAXGUBQCTLXJUPBLONDDSGBILGYTHQ");

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
    msg.setTimeStamp(0.3030120293784838);
    msg.setSource(7747U);
    msg.setSourceEntity(129U);
    msg.setDestination(30558U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.5827471267091036;
    msg.lon = 0.9888836608971218;
    msg.z = 0.10992943989007897;
    msg.z_units = 168U;
    msg.radius = 0.10930690722036529;
    msg.duration = 10682U;
    msg.speed = 0.4777453414557219;
    msg.speed_units = 254U;
    msg.custom.assign("AYOPUIZYCFMLEBOKBKBNVTJIRFSHAKKVVIWPJWI");

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
    msg.setTimeStamp(0.5721846505250712);
    msg.setSource(42317U);
    msg.setSourceEntity(55U);
    msg.setDestination(10545U);
    msg.setDestinationEntity(25U);
    msg.timeout = 19353U;
    msg.flags = 14U;
    msg.lat = 0.5739484838265484;
    msg.lon = 0.8999277237946225;
    msg.start_z = 0.249896595456366;
    msg.start_z_units = 143U;
    msg.end_z = 0.4073452306926314;
    msg.end_z_units = 198U;
    msg.radius = 0.5104880285555992;
    msg.speed = 0.9962080590333938;
    msg.speed_units = 87U;
    msg.custom.assign("ZOMRBYBCUVKITDGPFAARHSNYRDFUFLFSRJHQYBDWKLBCPSZTRNZFYPLVOAKYMDMEIADGJDFBYKEDHTYEXVZCPEGQHLPWIEZOGLOLQALINMIBQJNKMQDNYZTJKZOSGIFNISKURQZXSVUCOOWWSHLFFYTBAVPUMNTEXOGMCVNMXARGHCWVCJNWKRQVRXJNIAQKJQCWSSPBXPGGEETUMYLXUAIRBKZTASOVDQVUHXIWLBCWWXTDXUHCJHGHTEOUP");

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
    msg.setTimeStamp(0.9414811972411065);
    msg.setSource(29899U);
    msg.setSourceEntity(227U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(140U);
    msg.timeout = 28162U;
    msg.flags = 14U;
    msg.lat = 0.09103249686210069;
    msg.lon = 0.6957582036928686;
    msg.start_z = 0.5843248245308915;
    msg.start_z_units = 52U;
    msg.end_z = 0.6046214756189675;
    msg.end_z_units = 109U;
    msg.radius = 0.5930460495433241;
    msg.speed = 0.868051471099526;
    msg.speed_units = 93U;
    msg.custom.assign("AQVTQMKBYKUJVSGITRHAHUHAXLNFOOZNKIDCKB");

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
    msg.setTimeStamp(0.5730284860259051);
    msg.setSource(52178U);
    msg.setSourceEntity(67U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(39U);
    msg.timeout = 23165U;
    msg.flags = 218U;
    msg.lat = 0.7700758686914225;
    msg.lon = 0.8975091745241026;
    msg.start_z = 0.029357523537049457;
    msg.start_z_units = 92U;
    msg.end_z = 0.8298911394871126;
    msg.end_z_units = 82U;
    msg.radius = 0.26614247483025055;
    msg.speed = 0.07073055398498707;
    msg.speed_units = 234U;
    msg.custom.assign("YKMTJVMMNZWTDWGIYWOOOUMLCXQBKGNRSIBSLRBIYTQSJSXVRBEBOHEBZIYRGNU");

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
    msg.setTimeStamp(0.28447705900738685);
    msg.setSource(47535U);
    msg.setSourceEntity(93U);
    msg.setDestination(56325U);
    msg.setDestinationEntity(9U);
    msg.timeout = 2334U;
    msg.lat = 0.29230162530943615;
    msg.lon = 0.6725276062308498;
    msg.z = 0.24357335736927777;
    msg.z_units = 214U;
    msg.speed = 0.8236209188615765;
    msg.speed_units = 111U;
    msg.custom.assign("RBSAEJBXRMWZLZAWJYHPJFUIFXLLQYBKZYFVNMGOYTCMTXCPFOPSVWLSBZDNRLKBADJPGPXGSOKLDJPUDUHYLGVRRQASXZVXRIHWSAROABREWVTFCFWZXQAOOVVIQECIHQXGKWUHQZGYCGGNRPDMMSNTHVNGAJBNC");

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
    msg.setTimeStamp(0.7164317127506762);
    msg.setSource(4133U);
    msg.setSourceEntity(192U);
    msg.setDestination(43630U);
    msg.setDestinationEntity(81U);
    msg.timeout = 45449U;
    msg.lat = 0.5350025632263428;
    msg.lon = 0.09044835467853962;
    msg.z = 0.5336476367808168;
    msg.z_units = 119U;
    msg.speed = 0.6389699738313921;
    msg.speed_units = 41U;
    msg.custom.assign("KVSAZEPAETJQVTNTNOKHWSVIJXGGJASGUZNFYQWROZKWQOWSHDBIGFSWEUEDJAWBSKVCFUWHTYHYAMNYPZLKYLUTLKPMTPBHERRVCYXMJXVUBZXTDQOFARDMOCYONHXMDLCIBBRAKQOEGFFOKELXQPUHPEESBGDFYQNKFIIICVZWUSLIWCRFPULRNBCXDNHGGPFPJATVEZDLLAXVJJOIKLRYGMCNJQSTUIGCJBMYVQUWMZBDIPMXTDZZRM");

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
    msg.setTimeStamp(0.3735509108841244);
    msg.setSource(41976U);
    msg.setSourceEntity(73U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(52U);
    msg.timeout = 25882U;
    msg.lat = 0.05139330294066935;
    msg.lon = 0.8633797953893338;
    msg.z = 0.07596664852800161;
    msg.z_units = 171U;
    msg.speed = 0.39193536076539215;
    msg.speed_units = 96U;
    msg.custom.assign("QCEIUJGPWQYLFHINYXLJNVSEBASNBDZMUDLQHHYGIEMIGVTYUXKXBKMOZYUECMTDYQCBEJWJVIEMENIXAWGLKYKVLBDTLURDBXVZZOHNGSCBDFADPICGMVJCCHIPVVJFW");

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
    msg.setTimeStamp(0.7640137045521833);
    msg.setSource(7989U);
    msg.setSourceEntity(174U);
    msg.setDestination(48694U);
    msg.setDestinationEntity(169U);
    msg.x = 0.4720841202547864;
    msg.y = 0.9735728176470233;
    msg.z = 0.6159461624401923;
    msg.t = 0.21511745774143487;

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
    msg.setTimeStamp(0.6752733750159104);
    msg.setSource(61176U);
    msg.setSourceEntity(88U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(225U);
    msg.x = 0.7300588723629943;
    msg.y = 0.73917292494029;
    msg.z = 0.45355074094467407;
    msg.t = 0.17781585271119316;

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
    msg.setTimeStamp(0.5841814321553835);
    msg.setSource(28183U);
    msg.setSourceEntity(74U);
    msg.setDestination(50047U);
    msg.setDestinationEntity(202U);
    msg.x = 0.5172860975098741;
    msg.y = 0.43656806284878025;
    msg.z = 0.4339763800732922;
    msg.t = 0.7817707204088385;

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
    msg.setTimeStamp(0.2591605697468192);
    msg.setSource(8013U);
    msg.setSourceEntity(58U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(54U);
    msg.timeout = 40684U;
    msg.name.assign("JPYWRCNSXESEUMISHAULVAWLXHELCMXWXOOCLZRPBQAKGYKTNEHWPMGAHMRGDVFDSZZBUYAOKREKVLDMZY");
    msg.custom.assign("ITTVYHJDFUAAUEEQNSFARJTYFEUUMJBLBJWJLPWMVRKQYQBDCXKQTANZNLPYGL");

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
    msg.setTimeStamp(0.5561413552277393);
    msg.setSource(47865U);
    msg.setSourceEntity(88U);
    msg.setDestination(26734U);
    msg.setDestinationEntity(145U);
    msg.timeout = 56382U;
    msg.name.assign("DARSTBPKDZADHMHYQWAIKTPFSRUDGGBYUMKKZHCIJKOSGRRTGXHHWNXYVSUKEDWMQXDLYPGHWBLFACIGRCCLOOVXQTBBOUJWFICYDBPJDTZOVPZHNZQHIVYMZKRXJNZWJUTUIDELTPMMVQZGXAEKLUNHLAXBYLSRXUWTPFOOWJTYAMNKIBSJIYLREBPTXXCVQEOSQGUAFNJNEQSIVROZFQMFCNCNPSVECVJGPWEBUROAYFGNFMSEJHLZEQ");
    msg.custom.assign("OKTKOTHPSUMJYVNFK");

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
    msg.setTimeStamp(0.6251995977999326);
    msg.setSource(55495U);
    msg.setSourceEntity(78U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(188U);
    msg.timeout = 37143U;
    msg.name.assign("BWSMVYUYDMRXCILMJKVIZKUKYTWJVCLADNWBDQJEHKGXHOZPZVEFGDMKFAUWETRLEEQOOWMDYYRRGFSZQOVWCGZHFHCSJVTQHYUIHNNCQLSHRFRLFNRKZGYKEBTQJTWIDDQPMEBFTXZWAVOMQYIXAUNALIDCQNGHTPXSEKQND");
    msg.custom.assign("BKNWAQZDUABUGVKXCOJQOJQMSBOBZVILRSDIZKJYPKLLDDWMATLRWGMXCUZTWRFNNRKNBZVFXYMBYURGHZLJGHDRHSWHBMSGYZTNBXGSTBSROZEZCYWE");

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
    msg.setTimeStamp(0.1320989835458587);
    msg.setSource(34378U);
    msg.setSourceEntity(56U);
    msg.setDestination(261U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.015614935353529091;
    msg.lon = 0.33660156694593046;
    msg.z = 0.5169822055488168;
    msg.z_units = 77U;
    msg.speed = 0.48937485070376674;
    msg.speed_units = 251U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30583U;
    tmp_msg_0.off_x = 0.8717347678881181;
    tmp_msg_0.off_y = 0.597039516529098;
    tmp_msg_0.off_z = 0.6401336634414758;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.06053806166981668;
    msg.custom.assign("EJUHSZLVCXJZOMMCCYKPARPBNWDVYFSDLNCMRQLBLZGVUKOESNVMYRHTXKQXUWVJKEZWGFEQGBJKNXYFAZHYPTNBBGWRGUYUAAATXVVBDRBLB");

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
    msg.setTimeStamp(0.10265294585627371);
    msg.setSource(15165U);
    msg.setSourceEntity(46U);
    msg.setDestination(12937U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.11733961148136551;
    msg.lon = 0.12716534031397397;
    msg.z = 0.2716995467659403;
    msg.z_units = 252U;
    msg.speed = 0.8584210503739419;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5177151575751395;
    tmp_msg_0.y = 0.4390889504920975;
    tmp_msg_0.z = 0.5867638974676839;
    tmp_msg_0.t = 0.7350036015002712;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 833U;
    tmp_msg_1.off_x = 0.1440065249950634;
    tmp_msg_1.off_y = 0.8451668640437802;
    tmp_msg_1.off_z = 0.6696562932276472;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.03579962214040322;
    msg.custom.assign("QQGFELZIFQXUQPQPKPMJEHKMJSKRKGJBUZSBP");

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
    msg.setTimeStamp(0.12218465182647842);
    msg.setSource(11544U);
    msg.setSourceEntity(52U);
    msg.setDestination(36331U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.8928769600260142;
    msg.lon = 0.12200148767394559;
    msg.z = 0.6144745900416654;
    msg.z_units = 182U;
    msg.speed = 0.06907874814914927;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2336247821766272;
    tmp_msg_0.y = 0.24626852124094822;
    tmp_msg_0.z = 0.2912616593232281;
    tmp_msg_0.t = 0.257178007622763;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.403998513942201;
    msg.custom.assign("FWJEJLBYNTRCYYHNPGLGOLNADVDKXJQX");

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
    msg.setTimeStamp(0.18468032718297034);
    msg.setSource(29353U);
    msg.setSourceEntity(29U);
    msg.setDestination(42278U);
    msg.setDestinationEntity(113U);
    msg.vid = 8698U;
    msg.off_x = 0.9326611020216558;
    msg.off_y = 0.00505788109225036;
    msg.off_z = 0.5738246356081688;

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
    msg.setTimeStamp(0.1988038744844275);
    msg.setSource(24262U);
    msg.setSourceEntity(251U);
    msg.setDestination(63938U);
    msg.setDestinationEntity(200U);
    msg.vid = 44048U;
    msg.off_x = 0.5513420472953038;
    msg.off_y = 0.5632705628907405;
    msg.off_z = 0.33900841159291195;

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
    msg.setTimeStamp(0.8056569795080754);
    msg.setSource(14829U);
    msg.setSourceEntity(155U);
    msg.setDestination(58345U);
    msg.setDestinationEntity(72U);
    msg.vid = 38966U;
    msg.off_x = 0.6623014967957497;
    msg.off_y = 0.7930123194892846;
    msg.off_z = 0.7917296743801052;

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
    msg.setTimeStamp(0.20834499479082513);
    msg.setSource(61552U);
    msg.setSourceEntity(183U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.34487634428444924);
    msg.setSource(3222U);
    msg.setSourceEntity(184U);
    msg.setDestination(46790U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.7970918086253963);
    msg.setSource(50828U);
    msg.setSourceEntity(217U);
    msg.setDestination(17933U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.8203923379481161);
    msg.setSource(48329U);
    msg.setSourceEntity(246U);
    msg.setDestination(32663U);
    msg.setDestinationEntity(144U);
    msg.mid = 28081U;

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
    msg.setTimeStamp(0.19252310143869134);
    msg.setSource(32391U);
    msg.setSourceEntity(93U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(55U);
    msg.mid = 60289U;

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
    msg.setTimeStamp(0.48094361274998987);
    msg.setSource(46701U);
    msg.setSourceEntity(252U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(12U);
    msg.mid = 51947U;

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
    msg.setTimeStamp(0.2223221451983548);
    msg.setSource(53775U);
    msg.setSourceEntity(169U);
    msg.setDestination(16098U);
    msg.setDestinationEntity(119U);
    msg.state = 129U;
    msg.eta = 46940U;
    msg.info.assign("EZBMWCTODCQSHFOFDOCXPGBMQBPTQGVYCVKIWERJKYFGDGQNTSOUAKYPDXYQKXCHWJSGRAGDZMROIRXLECNRNQMDUAZFWUCIKLITXVGLUAZFVBUONCVIRHTEUHLPEBDSXKTXYWXNOTYIFPCTMAXJLSJPOJFYBLUJLWWYVTAQNYHAP");

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
    msg.setTimeStamp(0.22746801750648804);
    msg.setSource(8154U);
    msg.setSourceEntity(157U);
    msg.setDestination(43636U);
    msg.setDestinationEntity(91U);
    msg.state = 18U;
    msg.eta = 58037U;
    msg.info.assign("WPQYANCFUYLIBIYATPZQWUFRAVTNOCUORRPZJWAKLTJSPMFCLZDYLDKUDHXPQMKIWGMTXSHEYTXXWVYVOCFIYFEJUQGNFLVWULMKXEDASOMPQMGSWSQZABKDDSCHYBNDEPKHRHMIGEXZWZCXEJFQFCSRKIBAPDVTXUFMTZNGIVBTBENZIUUGISQQJUPJCOGBLTHRCMVJOPGENBFXRVBLAGLERENKARDONMRJVIVDHSYZOKBYOHHNGQHJAC");

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
    msg.setTimeStamp(0.6420537539887229);
    msg.setSource(16816U);
    msg.setSourceEntity(7U);
    msg.setDestination(7874U);
    msg.setDestinationEntity(160U);
    msg.state = 132U;
    msg.eta = 33842U;
    msg.info.assign("HSRVOXRBDEBLKPHOLTLWDYQAQBGETJUXEQVZUQSHXWPFHPCCKKWYHAWDFFNYFEWKUKJUEYUYKHSLJUHBFLIZMLGVTZHFKTF");

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
    msg.setTimeStamp(0.2750494982825836);
    msg.setSource(2468U);
    msg.setSourceEntity(240U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(153U);
    msg.system = 41225U;
    msg.duration = 35200U;
    msg.speed = 0.059931837854991676;
    msg.speed_units = 117U;
    msg.x = 0.2712510774717328;
    msg.y = 0.7467139527159687;
    msg.z = 0.9344590348106872;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.26709021679268663);
    msg.setSource(21774U);
    msg.setSourceEntity(182U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(126U);
    msg.system = 34607U;
    msg.duration = 39349U;
    msg.speed = 0.9052912338693615;
    msg.speed_units = 93U;
    msg.x = 0.3079585827758461;
    msg.y = 0.7013168266080346;
    msg.z = 0.53470566448812;
    msg.z_units = 5U;

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
    msg.setTimeStamp(0.3836479324742529);
    msg.setSource(33221U);
    msg.setSourceEntity(54U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(107U);
    msg.system = 27115U;
    msg.duration = 30052U;
    msg.speed = 0.7390872606727044;
    msg.speed_units = 211U;
    msg.x = 0.30539096388265996;
    msg.y = 0.050598561266332664;
    msg.z = 0.7573800014767065;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.936937183123248);
    msg.setSource(41878U);
    msg.setSourceEntity(176U);
    msg.setDestination(59984U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.6058581464741408;
    msg.lon = 0.9985337759334668;
    msg.speed = 0.25943371724171105;
    msg.speed_units = 137U;
    msg.duration = 21018U;
    msg.sys_a = 928U;
    msg.sys_b = 17520U;
    msg.move_threshold = 0.4098596355188602;

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
    msg.setTimeStamp(0.2708654829990623);
    msg.setSource(58664U);
    msg.setSourceEntity(229U);
    msg.setDestination(64748U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.07814106482708094;
    msg.lon = 0.6203645984690472;
    msg.speed = 0.044394059050738566;
    msg.speed_units = 91U;
    msg.duration = 55138U;
    msg.sys_a = 8809U;
    msg.sys_b = 50565U;
    msg.move_threshold = 0.3280611604596372;

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
    msg.setTimeStamp(0.009354598295172267);
    msg.setSource(60269U);
    msg.setSourceEntity(24U);
    msg.setDestination(862U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.5066529552834854;
    msg.lon = 0.062264268556854074;
    msg.speed = 0.9693182935992114;
    msg.speed_units = 98U;
    msg.duration = 36422U;
    msg.sys_a = 57485U;
    msg.sys_b = 35828U;
    msg.move_threshold = 0.32817025289188806;

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
    msg.setTimeStamp(0.5519699512286055);
    msg.setSource(11619U);
    msg.setSourceEntity(44U);
    msg.setDestination(12696U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.9529546328337186;
    msg.lon = 0.22427294433785738;
    msg.z = 0.3025432791945565;
    msg.z_units = 227U;
    msg.speed = 0.6754198481943741;
    msg.speed_units = 180U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2083099188683405;
    tmp_msg_0.lon = 0.122971000164946;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CGHYLWKPTEFYYLKPUNRIFPVCYNHLGJSQBQMDWZCSHQMG");

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
    msg.setTimeStamp(0.1590406587550789);
    msg.setSource(48836U);
    msg.setSourceEntity(29U);
    msg.setDestination(49173U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.6044969781656278;
    msg.lon = 0.33498552102072743;
    msg.z = 0.04580441791262313;
    msg.z_units = 63U;
    msg.speed = 0.900061885122335;
    msg.speed_units = 194U;
    msg.custom.assign("ODZRYBLGTYDIPANJKLRYAMOCACVSMIVOUFRHDQKUBHQBRVEIWPTJAWAFPDKWKZCUBCIAXNTJZQFMEGRWSJHBRONWZHXJLZCSGHPJOFNPLK");

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
    msg.setTimeStamp(0.30093477420139425);
    msg.setSource(7288U);
    msg.setSourceEntity(236U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.18936264066801012;
    msg.lon = 0.1759287252556988;
    msg.z = 0.37178895140250656;
    msg.z_units = 121U;
    msg.speed = 0.15999995104266673;
    msg.speed_units = 238U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.15120458374298884;
    tmp_msg_0.lon = 0.8571738446319997;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YKVQHKTKDEFZPHGBCRXUOGNIDTY");

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
    msg.setTimeStamp(0.912292404080768);
    msg.setSource(9518U);
    msg.setSourceEntity(211U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.5471479528452645;
    msg.lon = 0.7435344092547456;

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
    msg.setTimeStamp(0.6063442902599585);
    msg.setSource(1961U);
    msg.setSourceEntity(155U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.46755386414139566;
    msg.lon = 0.3546032430931647;

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
    msg.setTimeStamp(0.6935032149213172);
    msg.setSource(9685U);
    msg.setSourceEntity(20U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.2866385207501094;
    msg.lon = 0.16049604576320642;

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
    msg.setTimeStamp(0.6849722895631742);
    msg.setSource(1382U);
    msg.setSourceEntity(75U);
    msg.setDestination(994U);
    msg.setDestinationEntity(138U);
    msg.timeout = 39679U;
    msg.lat = 0.3363875882009427;
    msg.lon = 0.35489745140076445;
    msg.z = 0.14118606174587167;
    msg.z_units = 190U;
    msg.pitch = 0.0870948854367175;
    msg.amplitude = 0.9170553367401624;
    msg.duration = 42790U;
    msg.speed = 0.9891416536392302;
    msg.speed_units = 196U;
    msg.radius = 0.7568419388364145;
    msg.direction = 253U;
    msg.custom.assign("MSGEZKKANBDZHKPLKDZGNOOTUSZSNMGOXCIATKNRDM");

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
    msg.setTimeStamp(0.955948334779254);
    msg.setSource(2078U);
    msg.setSourceEntity(176U);
    msg.setDestination(7632U);
    msg.setDestinationEntity(137U);
    msg.timeout = 43601U;
    msg.lat = 0.7578736662018685;
    msg.lon = 0.3799433588655675;
    msg.z = 0.09751238656373473;
    msg.z_units = 25U;
    msg.pitch = 0.45875562780916623;
    msg.amplitude = 0.28088168732648555;
    msg.duration = 62086U;
    msg.speed = 0.1598520311171;
    msg.speed_units = 69U;
    msg.radius = 0.8410113973002483;
    msg.direction = 216U;
    msg.custom.assign("IEPOHITPWFJPTGWRSJLUQAOWIYYLRADHJKWYQLNDBKQMPRLVWCDVXHOOUTRSYRXZWGMHCSCVUZBHTKGFMKRUYOEXHF");

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
    msg.setTimeStamp(0.4060368185972345);
    msg.setSource(46733U);
    msg.setSourceEntity(128U);
    msg.setDestination(5909U);
    msg.setDestinationEntity(229U);
    msg.timeout = 25390U;
    msg.lat = 0.17240474806232853;
    msg.lon = 0.534467491484514;
    msg.z = 0.12271377584439314;
    msg.z_units = 0U;
    msg.pitch = 0.5878374757460719;
    msg.amplitude = 0.19438037895010662;
    msg.duration = 39389U;
    msg.speed = 0.6475983859284422;
    msg.speed_units = 27U;
    msg.radius = 0.9603442616293597;
    msg.direction = 183U;
    msg.custom.assign("TVKNIKQAANGSIVBJXEOQVHJWNKTKDHBZZLWBWHOICLYFEKTHHJYJGDXIBPMWRIVXTEJZLNRGYNHGUHUXFTZQEARAUPSZSSNAKACYJVICMGTWBVTMEQXFIKLXDLYYBEUMGLDYIIBDPJ");

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
    msg.setTimeStamp(0.14292783641624696);
    msg.setSource(65099U);
    msg.setSourceEntity(84U);
    msg.setDestination(25229U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("XMUEOQJXZGYQFADCYNKLJDIDKTVMUHFGLNAFYAUUVEBQDFDWVEVPVIUGCPISLMAGNNZKVMBKCCFLFCBTPEEXKQOFNFOTTHEAZIUFWBDQBYGLYOCFIMGNTKWQ");
    msg.reference_frame = 192U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61497U;
    tmp_msg_0.off_x = 0.6185847795371237;
    tmp_msg_0.off_y = 0.04867769504181818;
    tmp_msg_0.off_z = 0.15942019780326122;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JFADEKVPXCREQDVHRSNYXJATXETDOTFJLNGPNVMCIFMUQULQFHUOYKLBEAMWUBPWNYDLOCZKNBKKTNKIOKARGREWCUIEAGSVUXXIIXDIOHWCCQZYMACSRXQQWZTJRLGCXBFEBMYETSYHGYJGAPSBUBZWNCJWDPHQSFGYYSXOHTWZWJVMEMLSIPTHQQIYVAHOXMHFWJEZRNZMT");

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
    msg.setTimeStamp(0.644286965710858);
    msg.setSource(8179U);
    msg.setSourceEntity(48U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(113U);
    msg.formation_name.assign("VZWOVWPHLOGMQKORMYASNBGRCAUWQMZGUGWXLVUDBWJFAECEHCDTGCBENRZSNTQVSFAXHQOMULFVJOCJQBHFCVMISSQYDPRELJLDPOMZDHRNBVYWRDDNGHMIAASJTFJKQNSTPVHKISTAZK");
    msg.reference_frame = 200U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41635U;
    tmp_msg_0.off_x = 0.23098213112546007;
    tmp_msg_0.off_y = 0.386710083261813;
    tmp_msg_0.off_z = 0.28037685771413057;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JZZIRNIXKGPKWCELBWNHUQOWTEORDLWMBXHEVTQSEOPEJSKTWDXOFIVLYLEXRRPFNSABNOJMQVFWGZCSVBKQAPXSREGBQXKHPQHZZZRFCZLBTGDGQGUUGANHZAYMTMUPDEEKJIFPNVMWYRBQWFFXCISXLBNSGCKMCCAHLHCTHMIGOCEYJNJVSMKTOLNXYTIYJTVKVGLUIDWHOZRYYNCBLBUKUUDXYOAFOQMFDAPFQIRVPPUYDDJ");

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
    msg.setTimeStamp(0.8619508086098431);
    msg.setSource(63191U);
    msg.setSourceEntity(3U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("JOPCYKJGPMGVRFVHLVEBDEKOVDDSQNDVRRXKFNZXBOFBIVKSJMELGUSLOHRZUNKGWSLIJYUCCBXZCNTFFHDQOWIUWAPDPTAAHKYJBTDWHPESQWFRWBPVXAWFQXQMNOIAMSZGLCJQMYXHMUPIYCIJTEUMQGEMJRBIVNAJCKRLLZYXJ");
    msg.reference_frame = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47927U;
    tmp_msg_0.off_x = 0.3659737217947535;
    tmp_msg_0.off_y = 0.5304226285618997;
    tmp_msg_0.off_z = 0.5668385329877895;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XSMYTUORIMRGXWSTWMCNGLFSXGARKBKTKRZUDTQUHBPIABFHEPZZVWDIEYGEOJKFUYKHTCBBNAVCPONLKTCSUSIQMRATEKEDLHEJLEZNKJIWXXOCYRATVAHOBXLNXKWNZFJJHRGJBUQZLPVFYMDMWAMUUFMYQVPZGATDFNCGBJRDDBQXCEIWLPYCCMHDJVHJQGNQSGKYLOBPFOQNCSGOEPVFISALIXLHNWRITZPAH");

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
    msg.setTimeStamp(0.5318910923357696);
    msg.setSource(62984U);
    msg.setSourceEntity(176U);
    msg.setDestination(20012U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("PMITAYPODRPJWSHZXYQRXMVCSKVECJJHIONJGBTCMWKCUOVAWLZIRVZYJWJBWXAGVZPWXLKPTNOTXLSSPRJGNBEYTGPALCBUAUUWXMREKQXOKMPAGTLFCUNZZNUFPVCTQNUKDSDUUQREAYEJKKZJFQVRHMQBGZNYRLTDHDYEEFXMHSEIFIYLQLFHLBIHUGEAKBJGOBFDRMSDYOH");
    msg.formation_name.assign("FZLUHIMBQHDUFUNVRVARKGDOSMYKEQZKIOIZTTXMPFMFCKTNXNJWLSLOQVXZOMQCPJIAPLBJYVSGHAWORGVLASIOXYAYPDHIEYYTCWULVKJQFGUDVEGWJDBRHAHHJXWVCYPSDATJKMKEFXMFQQLXSKDBMALRRSOWAFRC");
    msg.plan_id.assign("VYFTPRBSXVRVTLBENOOCNXCVCTTSIMUEFYXAKPDZRXWYLONLKUTHIEUOUXZDERJUXMFCPQPLUBNOQKPDSQZWQLTDHREWTYSQLZSWEQVGBIGCSLPHDLJ");
    msg.description.assign("TBCLJHGBVHMPQUTCMITRABSWEPZKFXTLOFTZJXILBQUUBAVKRKIIYELVDKUMXHHBRYHDQZAESASNVRNVQUYFNBEQHXRGKJFWVWCBMAUIWDBXXWPEUVSDYSXDINUYOAITCLVRSDLMSJELNNGGJSTCLVQNFZDBOCJONUORMWYPZYIZHSLCMHEXYWGEZYIOIFPDROOSFFGNHHQZV");
    msg.leader_speed = 0.29371943741994344;
    msg.leader_bank_lim = 0.09934534791597649;
    msg.pos_sim_err_lim = 0.6473070893085037;
    msg.pos_sim_err_wrn = 0.16968676211243572;
    msg.pos_sim_err_timeout = 11660U;
    msg.converg_max = 0.22619903666893937;
    msg.converg_timeout = 32834U;
    msg.comms_timeout = 35543U;
    msg.turb_lim = 0.12954853881613748;
    msg.custom.assign("EHBIWPRQIICMONILITGTGAGFTCOBPJFEBUMXDDEBYZJQLKZUNRERYFMFGZRITJYTMHRJLRMVDCSDWLPDSQRXYXWHUOLJWIDDJENTIWPXVMCDQQCONVZZFRBLZHBLK");

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
    msg.setTimeStamp(0.20821281922305657);
    msg.setSource(10754U);
    msg.setSourceEntity(242U);
    msg.setDestination(30933U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("MYAKWILZDBNOBOKKYMICDHMREPCJTVWFRZODKPOCJSSIUQFSVRXVHVGRLZXHBAMFHBXACPIDNBHMYCSDQGVGSPQEEBEWWDAOLPXRTTGOLYYIVERKGYVAKFHZMIMYFRAKFULZFLQJVUPUNSZLFENOWVNTSGLTKQPKIISQANWTQMELCOJQTPNNUYGE");
    msg.formation_name.assign("EIKQMCDZMAEFLZZVSNMRKPXXKBSUGIRODIWBAPPGUNAJDXWY");
    msg.plan_id.assign("FTZDEFXLCSUYNVFMRFWZFSVZXPTUXLZBOAHMJLDPDRPBROUIWRJQWJFBFBHYRODMMPZGKJRUJ");
    msg.description.assign("DATJWLCQCNKPTHFXDIAPJLZDFALGYRIDBKXDUVHWHNNQWBPYSLTNQIGVOYWSLOUVYJDPBNFRZOTQMPSQCA");
    msg.leader_speed = 0.4442412820469168;
    msg.leader_bank_lim = 0.770943120118806;
    msg.pos_sim_err_lim = 0.10920930648394;
    msg.pos_sim_err_wrn = 0.41729872543900304;
    msg.pos_sim_err_timeout = 36509U;
    msg.converg_max = 0.6494055698819745;
    msg.converg_timeout = 45969U;
    msg.comms_timeout = 12950U;
    msg.turb_lim = 0.683728289708382;
    msg.custom.assign("CDIPIEKVAUBWMWBEPD");

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
    msg.setTimeStamp(0.23135015295316597);
    msg.setSource(45539U);
    msg.setSourceEntity(194U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("SMJMUKTKDGBXYHXJLCWKVWGCBKYOPTDFDHYXMNHMTAQLIULQARKSWQIOCXQFCZJPRLDKGAQMYKDFUDXTBULSESRWBICBNRTYPPPSVTEIQDLMAYWGISLGUZEPJAANEPDWOIVDXGGOALIQZJFEVJIBTEYYKXRTAAVZCJNUKDEZN");
    msg.formation_name.assign("MMBICOVKQAYVDJEWTORJXPVRRCWZEOJXXGUPTHEXASVNVNIHQKCGGUOLENQMDGZACJPTLXSNVBRYBNSMGUYDRURFMRHHCOWFPTZGJKADQJSMBOSEAWKFUEYSIKQXAPSJECXJUKRVMPKOPTGQOHHYPFSCEIWUBYBXZCDQYXFNZIZRQAZWGB");
    msg.plan_id.assign("XQCBMDSZRIBVXJPGOCRGKFWBZQNDTXDXBYOWLXZBNJTYKQQWGNTCCOMRPWANUPAYBCIOOTTWQIIVRYNCGWRXUCISKSAHHOTHUBJFEZDEHWRWUUAEDVYLEHIWQMVPFBGDNZTKRFAIFLRAUUPEGEGCHLPFYRJDHSBTLJK");
    msg.description.assign("PLEGMZZIBJNNDOWVLILMTJQGKNOGMUHKPKWYOGAZIXEXHGTBFGITNWFCWYYWDMLEDIDBXJSWRCKAPEPFBDUXDUWWXYSJKNSSFRHKCLPSDVZLHYUTXHZRRTVZOJKPTMHMAOPBSRNCZMAVTJTVQHHFVNLFUUFOHYGGSPUIJPJXRIQDWQ");
    msg.leader_speed = 0.3958965224868505;
    msg.leader_bank_lim = 0.6900458012662324;
    msg.pos_sim_err_lim = 0.5917339775460735;
    msg.pos_sim_err_wrn = 0.6150965011325658;
    msg.pos_sim_err_timeout = 64177U;
    msg.converg_max = 0.12771073895619212;
    msg.converg_timeout = 30416U;
    msg.comms_timeout = 35055U;
    msg.turb_lim = 0.22561734706140113;
    msg.custom.assign("NHZARVEYCLYVORIERCSJCBSTJCVEIASERNFRVQJWWWMCLKRILTENQMPMYCURODFUAAABDKSUJQHLGLZQGNIFDPNUOHJEMTXJYGNXPVWRIGTJHYOCHCYHFINIQTXKXPDKMZJSORZUDOUWXFVKBFJCAVKADSBYWZBVWBTPVKIMQCLGSMPFLQEDWUFHGGG");

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
    msg.setTimeStamp(0.672957222047469);
    msg.setSource(41855U);
    msg.setSourceEntity(115U);
    msg.setDestination(59171U);
    msg.setDestinationEntity(207U);
    msg.control_src = 65316U;
    msg.control_ent = 207U;
    msg.timeout = 0.8913840031211957;
    msg.loiter_radius = 0.7136228104447772;
    msg.altitude_interval = 0.5503498411904255;

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
    msg.setTimeStamp(0.15356368225672568);
    msg.setSource(53181U);
    msg.setSourceEntity(129U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(145U);
    msg.control_src = 15034U;
    msg.control_ent = 5U;
    msg.timeout = 0.9757106528357933;
    msg.loiter_radius = 0.1363460898354072;
    msg.altitude_interval = 0.13286031682054966;

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
    msg.setTimeStamp(0.37047447912105);
    msg.setSource(37830U);
    msg.setSourceEntity(14U);
    msg.setDestination(7471U);
    msg.setDestinationEntity(103U);
    msg.control_src = 54790U;
    msg.control_ent = 232U;
    msg.timeout = 0.08832064559467878;
    msg.loiter_radius = 0.39390151287976527;
    msg.altitude_interval = 0.27682448218558287;

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
    msg.setTimeStamp(0.377718523399561);
    msg.setSource(38694U);
    msg.setSourceEntity(157U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(202U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7125792980746591;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6127349818385511;
    tmp_msg_1.z_units = 238U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7281584994903593;
    msg.lon = 0.407541179861201;
    msg.radius = 0.4666049525819086;

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
    msg.setTimeStamp(0.6177551271576461);
    msg.setSource(60504U);
    msg.setSourceEntity(59U);
    msg.setDestination(32976U);
    msg.setDestinationEntity(26U);
    msg.flags = 189U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6600662859491772;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2498926029306361;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.019046755996703357;
    msg.lon = 0.9670005924748856;
    msg.radius = 0.596771665373533;

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
    msg.setTimeStamp(0.5083412071129525);
    msg.setSource(254U);
    msg.setSourceEntity(211U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(115U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7209298973493767;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5146843965904109;
    tmp_msg_1.z_units = 110U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.27781454090461766;
    msg.lon = 0.867468032027084;
    msg.radius = 0.804858831792721;

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
    msg.setTimeStamp(0.6114768961706791);
    msg.setSource(22107U);
    msg.setSourceEntity(151U);
    msg.setDestination(809U);
    msg.setDestinationEntity(58U);
    msg.control_src = 35090U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8555930665465571;
    tmp_tmp_msg_0_0.speed_units = 96U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.16118681646612087;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26584345826745825;
    tmp_msg_0.lon = 0.2679508638491923;
    tmp_msg_0.radius = 0.0360263043948118;
    msg.reference.set(tmp_msg_0);
    msg.state = 244U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.787755305080507);
    msg.setSource(25523U);
    msg.setSourceEntity(116U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(40U);
    msg.control_src = 29873U;
    msg.control_ent = 175U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 169U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3808633677717398;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8931804370173285;
    tmp_tmp_msg_0_1.z_units = 56U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20175503065763933;
    tmp_msg_0.lon = 0.9308566356853194;
    tmp_msg_0.radius = 0.07359055919382518;
    msg.reference.set(tmp_msg_0);
    msg.state = 236U;
    msg.proximity = 101U;

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
    msg.setTimeStamp(0.7038585028157884);
    msg.setSource(57923U);
    msg.setSourceEntity(216U);
    msg.setDestination(29728U);
    msg.setDestinationEntity(244U);
    msg.control_src = 25347U;
    msg.control_ent = 183U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 77U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2794956116948999;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9224648623948346;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.582074420907417;
    tmp_msg_0.lon = 0.5648316650794308;
    tmp_msg_0.radius = 0.7054051680729366;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 67U;

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
    msg.setTimeStamp(0.8818231777575928);
    msg.setSource(13517U);
    msg.setSourceEntity(121U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(124U);
    msg.ax_cmd = 0.5275305621615994;
    msg.ay_cmd = 0.3782584204796331;
    msg.az_cmd = 0.88540145421036;
    msg.ax_des = 0.39708699023377225;
    msg.ay_des = 0.10033159963044946;
    msg.az_des = 0.6628645788120494;
    msg.virt_err_x = 0.5251630119390871;
    msg.virt_err_y = 0.87043442784832;
    msg.virt_err_z = 0.795216448963375;
    msg.surf_fdbk_x = 0.13763919631113652;
    msg.surf_fdbk_y = 0.6645032968422444;
    msg.surf_fdbk_z = 0.6263366378896135;
    msg.surf_unkn_x = 0.7779462260232857;
    msg.surf_unkn_y = 0.9863874409277159;
    msg.surf_unkn_z = 0.20825985573473937;
    msg.ss_x = 0.29897802465842316;
    msg.ss_y = 0.5386907597172701;
    msg.ss_z = 0.6666603928871331;

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
    msg.setTimeStamp(0.5977675852819558);
    msg.setSource(60821U);
    msg.setSourceEntity(72U);
    msg.setDestination(19399U);
    msg.setDestinationEntity(28U);
    msg.ax_cmd = 0.3529212789033245;
    msg.ay_cmd = 0.7787708600385616;
    msg.az_cmd = 0.5900797477300981;
    msg.ax_des = 0.11085376268537783;
    msg.ay_des = 0.14220127746492306;
    msg.az_des = 0.6677999374595647;
    msg.virt_err_x = 0.1652905999365356;
    msg.virt_err_y = 0.7798453131596861;
    msg.virt_err_z = 0.11399305240207624;
    msg.surf_fdbk_x = 0.6126959306034431;
    msg.surf_fdbk_y = 0.7448695369480864;
    msg.surf_fdbk_z = 0.8981824703114907;
    msg.surf_unkn_x = 0.11223979996915356;
    msg.surf_unkn_y = 0.6176406788118086;
    msg.surf_unkn_z = 0.023049662014132388;
    msg.ss_x = 0.1620241341324533;
    msg.ss_y = 0.31309958452188735;
    msg.ss_z = 0.8751836244800385;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AZVINJXZFAGOYLTPEXBMXKYDTDMZSYWUIXHYUUYWBAPBEENCCRLWKDCMJRAFJMJILAZGTNKFFQKPEDLTMBIIZKKQWELHSJHUGFPJHHMTGWDKRXQRAVLEEZCUSLOJDPSDQZVSQWROQBFSYTVUTANIUMHJOQBRROY");
    tmp_msg_0.dist = 0.010313823391636445;
    tmp_msg_0.err = 0.6427344986024224;
    tmp_msg_0.ctrl_imp = 0.5060720720912112;
    tmp_msg_0.rel_dir_x = 0.9170841493109393;
    tmp_msg_0.rel_dir_y = 0.5821091742679325;
    tmp_msg_0.rel_dir_z = 0.08601622605195192;
    tmp_msg_0.err_x = 0.7374254124914589;
    tmp_msg_0.err_y = 0.6862189106998549;
    tmp_msg_0.err_z = 0.3630435693397681;
    tmp_msg_0.rf_err_x = 0.9166863687699933;
    tmp_msg_0.rf_err_y = 0.23329800226159514;
    tmp_msg_0.rf_err_z = 0.24387925647906905;
    tmp_msg_0.rf_err_vx = 0.2604335707860346;
    tmp_msg_0.rf_err_vy = 0.14489304068442843;
    tmp_msg_0.rf_err_vz = 0.9768117042909719;
    tmp_msg_0.ss_x = 0.4687986776750589;
    tmp_msg_0.ss_y = 0.4485549349144323;
    tmp_msg_0.ss_z = 0.7954125164691658;
    tmp_msg_0.virt_err_x = 0.973248534581584;
    tmp_msg_0.virt_err_y = 0.9078181646581653;
    tmp_msg_0.virt_err_z = 0.20250608191870634;
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
    msg.setTimeStamp(0.8494009221600745);
    msg.setSource(23707U);
    msg.setSourceEntity(175U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(76U);
    msg.ax_cmd = 0.902527700337581;
    msg.ay_cmd = 0.6934589339813984;
    msg.az_cmd = 0.7572855417261745;
    msg.ax_des = 0.48989590669498784;
    msg.ay_des = 0.8080651321606872;
    msg.az_des = 0.8720426457319224;
    msg.virt_err_x = 0.5102993935518674;
    msg.virt_err_y = 0.1908479767816328;
    msg.virt_err_z = 0.9508865811567855;
    msg.surf_fdbk_x = 0.3731286782767489;
    msg.surf_fdbk_y = 0.5015682475604414;
    msg.surf_fdbk_z = 0.6236502746871413;
    msg.surf_unkn_x = 0.8044389921719663;
    msg.surf_unkn_y = 0.5242912221923632;
    msg.surf_unkn_z = 0.8490669616214176;
    msg.ss_x = 0.9905607308298009;
    msg.ss_y = 0.8964828365139867;
    msg.ss_z = 0.5637539726541623;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OULRKRDTZMYGBRHXKAYPVUJKOHYXVMTHHMNREQJJQMUKPTGDMNFSTTYFWAVFVJSHOXDAIMQLQXKPJKDZEXRIQBTYIKMGLVPATIWCNWTLOVRSCVAFAHXGLVYNSLJEROEFSYNOZSDUNBRDAECXOVGCZGHZDYLBMHWWCSQLWUXBQUEYLEBGWIPZXDIKNWUJRGPNXCUICNSSFCLBZOJIOUZBGKPACTCPTSMFDGWZEVPFE");
    tmp_msg_0.dist = 0.5628083835521078;
    tmp_msg_0.err = 0.33178578947851045;
    tmp_msg_0.ctrl_imp = 0.9189821927636064;
    tmp_msg_0.rel_dir_x = 0.46079715576727964;
    tmp_msg_0.rel_dir_y = 0.542370133833377;
    tmp_msg_0.rel_dir_z = 0.9127149388513078;
    tmp_msg_0.err_x = 0.6148707566074925;
    tmp_msg_0.err_y = 0.09131689960524114;
    tmp_msg_0.err_z = 0.2170369082975021;
    tmp_msg_0.rf_err_x = 0.6657355442596935;
    tmp_msg_0.rf_err_y = 0.4173739607241286;
    tmp_msg_0.rf_err_z = 0.6763142363229168;
    tmp_msg_0.rf_err_vx = 0.634070088562676;
    tmp_msg_0.rf_err_vy = 0.4575513043690589;
    tmp_msg_0.rf_err_vz = 0.5705814551009603;
    tmp_msg_0.ss_x = 0.7695715198564944;
    tmp_msg_0.ss_y = 0.02914876103317332;
    tmp_msg_0.ss_z = 0.21060715193188162;
    tmp_msg_0.virt_err_x = 0.32278558653071443;
    tmp_msg_0.virt_err_y = 0.9708643623902824;
    tmp_msg_0.virt_err_z = 0.15481187770059457;
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
    msg.setTimeStamp(0.7533686924214745);
    msg.setSource(36305U);
    msg.setSourceEntity(189U);
    msg.setDestination(34697U);
    msg.setDestinationEntity(185U);
    msg.s_id.assign("IBSJEZMXAPWLLWYTKWVXIIJNNBMOHQJXSSCTLXUNGMYAFZITKMUDNVKZWVGICTIUQQUJJOLIQAPDGJMCEHIKGWCHEEVPSPDFAOWMRZTFUATSNUDFGRUQO");
    msg.dist = 0.1422836345516797;
    msg.err = 0.9261446770571936;
    msg.ctrl_imp = 0.998438342505202;
    msg.rel_dir_x = 0.4213577273907554;
    msg.rel_dir_y = 0.6366533185044836;
    msg.rel_dir_z = 0.054410011239738876;
    msg.err_x = 0.45565631431927456;
    msg.err_y = 0.13055290717758294;
    msg.err_z = 0.42904870647298643;
    msg.rf_err_x = 0.920175639656874;
    msg.rf_err_y = 0.6384433375843996;
    msg.rf_err_z = 0.5786015552566629;
    msg.rf_err_vx = 0.058275991437914065;
    msg.rf_err_vy = 0.8646664438338524;
    msg.rf_err_vz = 0.08691627273866875;
    msg.ss_x = 0.8379380695353431;
    msg.ss_y = 0.8006964584548929;
    msg.ss_z = 0.1595776767397693;
    msg.virt_err_x = 0.895594458334932;
    msg.virt_err_y = 0.49681564238228504;
    msg.virt_err_z = 0.1841611061483973;

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
    msg.setTimeStamp(0.6189290621481927);
    msg.setSource(63496U);
    msg.setSourceEntity(70U);
    msg.setDestination(16343U);
    msg.setDestinationEntity(161U);
    msg.s_id.assign("ORYRBHFQFQJHUKAIFLOIJHVTULKVRZOWBKTLWPJUZNWAKLGOKGHTDCZCNXPCIUHYTNOAQHDPCGCBPIFN");
    msg.dist = 0.03210331673910727;
    msg.err = 0.09932059539661375;
    msg.ctrl_imp = 0.648501035402628;
    msg.rel_dir_x = 0.34646165710706156;
    msg.rel_dir_y = 0.9782723120087373;
    msg.rel_dir_z = 0.7430043311138955;
    msg.err_x = 0.1969741750397429;
    msg.err_y = 0.007986447909336003;
    msg.err_z = 0.14799814135544054;
    msg.rf_err_x = 0.7034989768547506;
    msg.rf_err_y = 0.5222430833389988;
    msg.rf_err_z = 0.41743570590481305;
    msg.rf_err_vx = 0.5543916057731543;
    msg.rf_err_vy = 0.668972892455764;
    msg.rf_err_vz = 0.6305170163921748;
    msg.ss_x = 0.16910782151577508;
    msg.ss_y = 0.8193788411382494;
    msg.ss_z = 0.030939423086391638;
    msg.virt_err_x = 0.1358956443103989;
    msg.virt_err_y = 0.21320964260075925;
    msg.virt_err_z = 0.3211598394222942;

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
    msg.setTimeStamp(0.8905847100208998);
    msg.setSource(49883U);
    msg.setSourceEntity(93U);
    msg.setDestination(59121U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("LYNAXAWBJZXHRZFOBNIVDDFKYWGJGAZWVYDQCLFKOPLFZSOSBLXXUQSSTUVJITFEQVRXWJHDZJWHRSXNRPGLFPJGBPWLLDQZQYRUOWUCXMKTCDJHYIJABERNLHNSJYRVBXOAXIXGEEQMTPDRPZPSPFMKTCGEAOMWKBDETQRPYVDUCAATELIOKEEBWIGVBSCNQNKNQLGNWSOHCMBUJURUHOPYVGFFSHZNZAIQCMMMI");
    msg.dist = 0.7221428797942281;
    msg.err = 0.46146372407209146;
    msg.ctrl_imp = 0.07273044010091856;
    msg.rel_dir_x = 0.3675777784674549;
    msg.rel_dir_y = 0.10612376315598038;
    msg.rel_dir_z = 0.3299784523118643;
    msg.err_x = 0.6816262163017819;
    msg.err_y = 0.5091593943877207;
    msg.err_z = 0.11784817922559376;
    msg.rf_err_x = 0.4909777349589167;
    msg.rf_err_y = 0.05943961312138768;
    msg.rf_err_z = 0.519312603145787;
    msg.rf_err_vx = 0.6773950794456362;
    msg.rf_err_vy = 0.9556330108489818;
    msg.rf_err_vz = 0.6749634021885687;
    msg.ss_x = 0.013157410068963649;
    msg.ss_y = 0.9468319571248959;
    msg.ss_z = 0.26559237416534653;
    msg.virt_err_x = 0.2955339041563163;
    msg.virt_err_y = 0.6248608750109103;
    msg.virt_err_z = 0.883922538786073;

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
    msg.setTimeStamp(0.14684482293599366);
    msg.setSource(10914U);
    msg.setSourceEntity(52U);
    msg.setDestination(28877U);
    msg.setDestinationEntity(55U);
    msg.timeout = 27813U;
    msg.rpm = 0.41504206085217854;
    msg.direction = 53U;
    msg.custom.assign("FONARZMFLDEYRFWUSVPNQGWIIZDEBXSYRLANYCLQLODILXSJKJW");

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
    msg.setTimeStamp(0.20353605596066926);
    msg.setSource(45747U);
    msg.setSourceEntity(223U);
    msg.setDestination(50650U);
    msg.setDestinationEntity(82U);
    msg.timeout = 40641U;
    msg.rpm = 0.8334625448592019;
    msg.direction = 97U;
    msg.custom.assign("RCNRIZSEZOJETWFNVRSMZSCYVMMFYU");

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
    msg.setTimeStamp(0.4036456810409378);
    msg.setSource(30349U);
    msg.setSourceEntity(30U);
    msg.setDestination(13784U);
    msg.setDestinationEntity(33U);
    msg.timeout = 58857U;
    msg.rpm = 0.6276029351151361;
    msg.direction = 67U;
    msg.custom.assign("FAIKJBXDEXFDJMMPEHHIDAYPPLKYRYRGFTFLCSQUOMBWEKELIHFAAVBSNNZNMDVJXLTKRDCLPCHIYHNLPQVZVMWECAQBUOMFZEGTOAWHKSMZYPOBVESRTRBGBQVGAIEDZ");

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
    msg.setTimeStamp(0.056925595027129905);
    msg.setSource(6227U);
    msg.setSourceEntity(112U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("TUELLZZMWZQQXEAXZTUCPGIHKSQMUVIKVLUBSZUQRTYVNJBYWEMFECUUOPH");
    msg.type = 38U;
    msg.op = 213U;
    msg.group_name.assign("TTOYPGKWYRNSJFZFKQA");
    msg.plan_id.assign("ZHDBFYTBLVTZNPLLNKQKSHBCVIQQXAKRGEJVMSZTUALAZHWVMXDFSPYRETIVRMEDNTNPHWDFPGFYWHPCEIMLIXZCERRMGPBSAIFGPCTRGAXKVGPFTHUXQNPWFYOIEZGAOCIKCJJUZYFMOBKLJKHSBWXOUNXRSSFDGTLQDNIVEDRZRVJJGXUQBUYPZ");
    msg.description.assign("SWCWDOETTXXUOICFMHTASJAMELQBYPBUNIJTHXLWFCEFDUUYROIEVPPLVNDLMWJGIFKDLXNEQNSXSAQUDWRCQSWZKXDMOTPZRRZYNDZGPPKRKVQYJPCFLCNISMNYLZBRHAFKJZNFBBEKFJYKRFHJUZWGV");
    msg.reference_frame = 172U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32607U;
    tmp_msg_0.off_x = 0.18268870330471987;
    tmp_msg_0.off_y = 0.20513723896348968;
    tmp_msg_0.off_z = 0.8983019645227392;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.03115775664361986;
    msg.leader_speed_min = 0.34356933100983655;
    msg.leader_speed_max = 0.12302710173152043;
    msg.leader_alt_min = 0.44158110993564603;
    msg.leader_alt_max = 0.9469630868923979;
    msg.pos_sim_err_lim = 0.7715589137135105;
    msg.pos_sim_err_wrn = 0.9238789760359049;
    msg.pos_sim_err_timeout = 22186U;
    msg.converg_max = 0.6596924701751036;
    msg.converg_timeout = 34939U;
    msg.comms_timeout = 11673U;
    msg.turb_lim = 0.9866644736088508;
    msg.custom.assign("AJTUMHLUJBDHOMQHN");

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
    msg.setTimeStamp(0.02696095854608449);
    msg.setSource(19418U);
    msg.setSourceEntity(229U);
    msg.setDestination(37260U);
    msg.setDestinationEntity(22U);
    msg.formation_name.assign("MXRWBTXWPTSOTYXVCFHQSRJLVORMCNJTVCMKLLPLXUHRZUAEXZEASEPSTHUIPZICUVBTAMMGDLUUPMIOROQKBRGZIYZIYYSXXFRPFMHFCYSJQFONUIIQDRNNTBKWNJZVTHLEGWLOHJPAWFNVAVJNPUBQKOCAKMGICLFHDKPZJXNFWFSQDLBDEEVOXFDKQNJOYDQGDHECKJWAZHUGTIBMGDZREGVWWYPBBGYCCBXISTV");
    msg.type = 212U;
    msg.op = 90U;
    msg.group_name.assign("DCJELJJYXOKZTSVOAYAYUUSCFGFXUUBNOGMUPRVAXKICWFPZNRKTJNHYWJJBHQARSDGNHMAADVSZDINNOINGLUTZWWQHVJDRBMBXWLEDKZAQLTKSHVVPWYGQFDHQZDQ");
    msg.plan_id.assign("UUDRAWRMEVABBUNQLMZLAFDXLDMPLMSCGGKXZEURLVRWEYAXCONVMDTKVIJTQESWTUCPAZEECIFEZGCFJFXJHCLZOAKSYGIAWQ");
    msg.description.assign("ZNDTMDLONWLTRLOVVBKRALTKYXIXGXMCBRYTXNGINGBSOSKQRWDELPCQJTEHTGIZBJPHPZHASEKTPDUHBCWMHAYFNSFVKVQBXPQUUKOOWUDVUYVUHKYFMFYRPLJAXIDACWWOIBDZJXVJCQEZDQEMYZZCSLRTFEILLGXTSUNRCK");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50512U;
    tmp_msg_0.off_x = 0.26496153046711235;
    tmp_msg_0.off_y = 0.5954299632063185;
    tmp_msg_0.off_z = 0.2648976348356348;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.076636129990593;
    msg.leader_speed_min = 0.7139370159282442;
    msg.leader_speed_max = 0.8986793409635755;
    msg.leader_alt_min = 0.456865499061202;
    msg.leader_alt_max = 0.12374708583608107;
    msg.pos_sim_err_lim = 0.7605785708589042;
    msg.pos_sim_err_wrn = 0.169855840525713;
    msg.pos_sim_err_timeout = 60005U;
    msg.converg_max = 0.41426572331336653;
    msg.converg_timeout = 42820U;
    msg.comms_timeout = 19999U;
    msg.turb_lim = 0.9233962819941753;
    msg.custom.assign("RYICFNRIGXCZTVAXWIIKKVPAVNUGFIDZWPWXDOGSXDRZMJQWCYSEHFXBPUGKBLHALGUGMBNANJQLXUAYRKTVTRRSHJZSWEBTIJVYXFOQQORDZTYXY");

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
    msg.setTimeStamp(0.15874054192203213);
    msg.setSource(35577U);
    msg.setSourceEntity(206U);
    msg.setDestination(22319U);
    msg.setDestinationEntity(80U);
    msg.formation_name.assign("TDNSWWAJLKGULNKEKCVXFRECH");
    msg.type = 57U;
    msg.op = 231U;
    msg.group_name.assign("DJDGZXWYQOIMDDTQKDJVOCVHRWBMQUXAYCALJFWTZOUKRQJVPXWIJKAZSIZUTXKOOLYPARGPHLVUKJFMCDTNMSSZHEDCYTGLIKJZSVAJFARNQFFEENNDLXAODIRFBBSFRLREIEYHAWYEMCNTNLEGUMFSZHLQHMCGGZWLCPVKTSVPOJKHQEAOLZMVPGHHUTPBMSFEGKFTDNBAOYRNSBGMWVNENIXGQVYSBQYCQHUCJPIBKXBX");
    msg.plan_id.assign("SNLTZKIRHITIUOIRFVPLGUTUXZETPOMOYUWYOPYNKTZZFNCMXMWCQTJYNNEMXVJPAKHNIWFBAEJSCHVMRMJWYOSFGWEOYSDCMYDVNGLMYKTRXLQXHUFRBXEBFQJQWLISSGDUNVNTWARVGDOBMYWAKFXGUFCSVVOZCJWDKEBBQADQBBEEJMHDLLQHSEAPXDCRRG");
    msg.description.assign("UYVZIJGYGNMRMRUSAIFLKHAWSVGPAXOXOUCDXEPPTNEERGVSYAPNUEOHZRSCDMHHDMEBQBSYRFIJBDFKWYUKQMHQIDFWLPXTWRTGIVBLGSXCUHNNSQDORBCMPQGTPQTZMBGAWKZOICRTCCSEYENROZVKHFGMVULXYKKWPJPHQWIQJABKABT");
    msg.reference_frame = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41316U;
    tmp_msg_0.off_x = 0.5772113276064584;
    tmp_msg_0.off_y = 0.08071023276780387;
    tmp_msg_0.off_z = 0.17868534180091245;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3211537064993497;
    msg.leader_speed_min = 0.14773573703611176;
    msg.leader_speed_max = 0.5862582759111155;
    msg.leader_alt_min = 0.28206490359009495;
    msg.leader_alt_max = 0.6363978640351248;
    msg.pos_sim_err_lim = 0.9817344767886017;
    msg.pos_sim_err_wrn = 0.42632165065547345;
    msg.pos_sim_err_timeout = 59856U;
    msg.converg_max = 0.3940264547690049;
    msg.converg_timeout = 44656U;
    msg.comms_timeout = 9407U;
    msg.turb_lim = 0.8556238000026666;
    msg.custom.assign("RMPFVEMTHKWSXXYEPFLYDMOWYSFVGFTMQLNWPHTDQFEHNOXBGWGORCZOJITNKLSOLPSRTBYCGZEA");

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
    msg.setTimeStamp(0.5976430058680972);
    msg.setSource(47075U);
    msg.setSourceEntity(90U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(49U);
    msg.timeout = 30552U;
    msg.lat = 0.2676658979692764;
    msg.lon = 0.5152748783205081;
    msg.z = 0.8935159961415556;
    msg.z_units = 72U;
    msg.speed = 0.8911235101261075;
    msg.speed_units = 100U;
    msg.custom.assign("JCEMLODBDJKRWQGSLMWYXMUKJHUQBPAONSMZZQSBEVOGPUZLRSMFQVTIJMDXENXFTGSBZJWHFEYHKIVWREGJFHBPVNGASKLIDCMFGNAEUWSRHLXYCPZLAIYYVECWXWMFNYUNCAOKADXULBHGNRZPPBI");

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
    msg.setTimeStamp(0.776831415209644);
    msg.setSource(23657U);
    msg.setSourceEntity(139U);
    msg.setDestination(18986U);
    msg.setDestinationEntity(24U);
    msg.timeout = 37163U;
    msg.lat = 0.08871310536625032;
    msg.lon = 0.6189689333910523;
    msg.z = 0.5612561000081674;
    msg.z_units = 151U;
    msg.speed = 0.41962531341809794;
    msg.speed_units = 68U;
    msg.custom.assign("FSIFGWSOEFLUQRDILANRFJNCIJNEMHXEXJWQPFCWXVDGAHCGHYWAHOOICNKIVJMKZJGJJANICPBHMBFYZTJLTEHKYBEYFWHBATZUKUQZTSPIXRPXDOVOWASMNCRXBZALLGHZTUOSVNVJILDBDEROYZNQHTPWESUCYVGWMZXLEUMVDGDATKMTVLRKULQEEQYABVYKCIQBZKGIMRTSRCGXUKGNOPHWUPDAKUPOFQLMYMVBTQD");

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
    msg.setTimeStamp(0.753622022001056);
    msg.setSource(49788U);
    msg.setSourceEntity(142U);
    msg.setDestination(12583U);
    msg.setDestinationEntity(157U);
    msg.timeout = 3003U;
    msg.lat = 0.0023462028813356905;
    msg.lon = 0.9941185400311672;
    msg.z = 0.187276518808573;
    msg.z_units = 14U;
    msg.speed = 0.7819078012304026;
    msg.speed_units = 120U;
    msg.custom.assign("PLXHGURYXQNZSKVKORPRHDADMFLHMVTIBQOUBNRYHUOTEZPOVRCRVHNYWXSPQGWMWQFCICGJDAJLPJPMOMBLGVAT");

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
    msg.setTimeStamp(0.2192860564264656);
    msg.setSource(8304U);
    msg.setSourceEntity(104U);
    msg.setDestination(51128U);
    msg.setDestinationEntity(44U);
    msg.timeout = 2051U;
    msg.lat = 0.09898036296956736;
    msg.lon = 0.6152586909097683;
    msg.z = 0.5857271404974657;
    msg.z_units = 74U;
    msg.speed = 0.25443225899997535;
    msg.speed_units = 135U;
    msg.custom.assign("GPVFFOMUXSAYMEWJSMDCRYLBJXYWUHNNKEMTGPTNXFRUZTWVSLXZROEBQRYCAAPNDPBOYJEERPWUBWEGZXTLRNZUIJ");

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
    msg.setTimeStamp(0.39844269375027674);
    msg.setSource(14452U);
    msg.setSourceEntity(115U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(185U);
    msg.timeout = 58498U;
    msg.lat = 0.2932905988066459;
    msg.lon = 0.02080494818013423;
    msg.z = 0.01645168797814678;
    msg.z_units = 214U;
    msg.speed = 0.006149469322258239;
    msg.speed_units = 197U;
    msg.custom.assign("FTXTJRVUKYESTATHQHMASZBRTNVFVHBZHZYPIWPLIOWOMBLKARREWSWCQJKXZHNNNGCMSUMNDYJELJYRAVAITEDJGCOVAHGBUZCIFZFPKLPEWSRPQZQNRUFVDUKKJCWMSDBRLYVBDZG");

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
    msg.setTimeStamp(0.06755837700647471);
    msg.setSource(54152U);
    msg.setSourceEntity(133U);
    msg.setDestination(32230U);
    msg.setDestinationEntity(139U);
    msg.timeout = 65362U;
    msg.lat = 0.44099441638245485;
    msg.lon = 0.9128487661761966;
    msg.z = 0.8008252604402042;
    msg.z_units = 43U;
    msg.speed = 0.3331872505201692;
    msg.speed_units = 51U;
    msg.custom.assign("MLYRBVAFFYYJCHSXRNCFICYHEHNONLZCYOZKAUNQIDKWIOGDIPFGUDAELUGXIHKHVNHNWSGBBPSWERQEIUNWSMPWQRBJJHSSEQHWYEOSVAAKTSDXQTWAMWSBIPYZLVOMTHQMKMVYNLSGGDUVIJPEZQRZTRKZJPYQGXPBLJZXACKUZBRGJBFTFWNTJJDVEBFKOZLLPHPUWMMTZCATQDXACORNUKVUEXAVCPGJRXUF");

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
    msg.setTimeStamp(0.6586728495509001);
    msg.setSource(39537U);
    msg.setSourceEntity(25U);
    msg.setDestination(34162U);
    msg.setDestinationEntity(54U);
    msg.arrival_time = 0.6708915744198738;
    msg.lat = 0.8302278783396786;
    msg.lon = 0.0702641281298445;
    msg.z = 0.8820576126403199;
    msg.z_units = 224U;
    msg.travel_z = 0.39260479336014464;
    msg.travel_z_units = 248U;
    msg.delayed = 91U;

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
    msg.setTimeStamp(0.8633400132560406);
    msg.setSource(9183U);
    msg.setSourceEntity(158U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(238U);
    msg.arrival_time = 0.3324678422750472;
    msg.lat = 0.7818138009443237;
    msg.lon = 0.21473021327853015;
    msg.z = 0.5077788403608582;
    msg.z_units = 199U;
    msg.travel_z = 0.9955890779319947;
    msg.travel_z_units = 165U;
    msg.delayed = 37U;

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
    msg.setTimeStamp(0.9497625318254915);
    msg.setSource(6007U);
    msg.setSourceEntity(147U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(240U);
    msg.arrival_time = 0.18102784887187384;
    msg.lat = 0.1139773754362694;
    msg.lon = 0.2503360965234084;
    msg.z = 0.4736337491025544;
    msg.z_units = 217U;
    msg.travel_z = 0.44827453001323503;
    msg.travel_z_units = 78U;
    msg.delayed = 163U;

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
    msg.setTimeStamp(0.9008345363553621);
    msg.setSource(52367U);
    msg.setSourceEntity(229U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.617688009626955;
    msg.lon = 0.590506567125465;
    msg.z = 0.2532579057654488;
    msg.z_units = 254U;
    msg.speed = 0.043413842794351454;
    msg.speed_units = 183U;
    msg.bearing = 0.3371666894668597;
    msg.cross_angle = 0.949309562014164;
    msg.width = 0.4136363560968984;
    msg.length = 0.13530505976378615;
    msg.coff = 230U;
    msg.angaperture = 0.9662475812650871;
    msg.range = 42256U;
    msg.overlap = 155U;
    msg.flags = 80U;
    msg.custom.assign("VXVQZLGXTYRKGJVIIQOQMIDAELGXEWXHGPYBIHSSOPAPKMNRMTCKFOYARAMDJEMAFCJOGVBOVRUVEXYKHHBBOQYWNLZAZTBFTYWNRXGQJPOTHEDAGIZKGKPRMCGKREHSM");

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
    msg.setTimeStamp(0.8963179249716965);
    msg.setSource(36357U);
    msg.setSourceEntity(224U);
    msg.setDestination(18070U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.4026303843420934;
    msg.lon = 0.5723647958441775;
    msg.z = 0.35982436744290147;
    msg.z_units = 61U;
    msg.speed = 0.754333225010093;
    msg.speed_units = 87U;
    msg.bearing = 0.6393442674439608;
    msg.cross_angle = 0.886711979547659;
    msg.width = 0.8269998964014941;
    msg.length = 0.1534246367935581;
    msg.coff = 250U;
    msg.angaperture = 0.451117687378111;
    msg.range = 28571U;
    msg.overlap = 57U;
    msg.flags = 187U;
    msg.custom.assign("OHVYPZFKWXHZGLDBECPUERLTUKPGUNEVBSEMDXJITILHQDRJLPREHKMQZVGNJMZWXNATPEIPVMGJEBTNZIKNSJIAUWTDFVNOYBMRWYRFRXASHXQILWASCIQHBFJLFOQWUDHGCYSVKWCDCKHUFIMWYACFSUDFYKTQONCZOXCJUXIXFTBBQDLKRQAPVKVSAGMDVEUSNGTPCZYLYMSZOQJNBKZXR");

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
    msg.setTimeStamp(0.7282866038358273);
    msg.setSource(43583U);
    msg.setSourceEntity(71U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.5552166690865065;
    msg.lon = 0.3117388848718755;
    msg.z = 0.08366428071401921;
    msg.z_units = 192U;
    msg.speed = 0.5373811792555364;
    msg.speed_units = 115U;
    msg.bearing = 0.9014279637691126;
    msg.cross_angle = 0.39105239560465077;
    msg.width = 0.0016028995501353727;
    msg.length = 0.8744858305080752;
    msg.coff = 90U;
    msg.angaperture = 0.3822489533050307;
    msg.range = 23079U;
    msg.overlap = 170U;
    msg.flags = 239U;
    msg.custom.assign("OSYCRALGFEEAWTMNYYWJPEMCZPJFNDSEVTZLKXTWUNKLTSUQOLYTODUOVCVRHEQCKAVCJHBWKQLQZXFUVTSLNMDPZRCNPNEOGHAGBZIPCGIWPEMSABUDIUXNZFZBQCJVVFGPKFXXQSRSAVMRM");

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
    msg.setTimeStamp(0.060732256731221956);
    msg.setSource(11934U);
    msg.setSourceEntity(113U);
    msg.setDestination(33858U);
    msg.setDestinationEntity(195U);
    msg.timeout = 48980U;
    msg.lat = 0.5017284745011601;
    msg.lon = 0.8441129597948668;
    msg.z = 0.03285487836940848;
    msg.z_units = 199U;
    msg.speed = 0.621201012135149;
    msg.speed_units = 167U;
    msg.syringe0 = 121U;
    msg.syringe1 = 130U;
    msg.syringe2 = 75U;
    msg.custom.assign("CHTJTWSUTFHMKDOTVZAOYXNFMKGYZKUDESFPNIZLVXPEBKWMWKFNLSUMOONUIHVQQTVEIGQRLOJLMGWPXJFUKZIYTXUYAEOBEQPGORZRKRBLHNVWJSZCAPQUSFQIMDJMTKGQ");

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
    msg.setTimeStamp(0.31609674893606576);
    msg.setSource(64981U);
    msg.setSourceEntity(185U);
    msg.setDestination(33241U);
    msg.setDestinationEntity(69U);
    msg.timeout = 43147U;
    msg.lat = 0.31592567031666074;
    msg.lon = 0.02350979255675456;
    msg.z = 0.3115445333101847;
    msg.z_units = 193U;
    msg.speed = 0.25291933989187787;
    msg.speed_units = 254U;
    msg.syringe0 = 181U;
    msg.syringe1 = 248U;
    msg.syringe2 = 149U;
    msg.custom.assign("KWDHPHQDOTNQNDKWTKRFQOLYMSDYCKTUFIPXNGMCPSEKFGQNEICXOBYYJMXSDWTAVWHKVHWYCZRCZGIRPWAIXLOAGQZDRYQULLHORGMPIAAEOKRSBFWJHUEMRDLUVLGBLJCRFSSTM");

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
    msg.setTimeStamp(0.054793788820993394);
    msg.setSource(35010U);
    msg.setSourceEntity(156U);
    msg.setDestination(36405U);
    msg.setDestinationEntity(103U);
    msg.timeout = 45042U;
    msg.lat = 0.8367850527646179;
    msg.lon = 0.06992779195543386;
    msg.z = 0.29178715779171527;
    msg.z_units = 100U;
    msg.speed = 0.9008158898901444;
    msg.speed_units = 63U;
    msg.syringe0 = 53U;
    msg.syringe1 = 252U;
    msg.syringe2 = 67U;
    msg.custom.assign("PWNAHWASJKSFQZASIBGSKTSEIHVNUXHVPRLSBKCXRGPSZAVCJJIOJHOYUHPEWJGOWCUULIRIHNEMHXWNPONAZWKMYBXBGRZRKFWFCGLLYLIDQRUFYIKZPYQRYHMUTXUXSNVGDCQNXYJMNBOTPVLQKQDNLEQTRAXVOITEGCJSKUIPE");

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
    msg.setTimeStamp(0.21022896585870854);
    msg.setSource(51157U);
    msg.setSourceEntity(15U);
    msg.setDestination(18282U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.21739586483828388);
    msg.setSource(45939U);
    msg.setSourceEntity(144U);
    msg.setDestination(40476U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.15754360197404682);
    msg.setSource(56604U);
    msg.setSourceEntity(117U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.15639292252393866);
    msg.setSource(30188U);
    msg.setSourceEntity(231U);
    msg.setDestination(36879U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.654836634205314;
    msg.lon = 0.6613447013138389;
    msg.z = 0.9998580297639597;
    msg.z_units = 231U;
    msg.speed = 0.18726100926792155;
    msg.speed_units = 48U;
    msg.takeoff_pitch = 0.24288221805655885;
    msg.custom.assign("KVBCUQWLWJLJULEIOCNLLENBVXILCNHMTFTRXDQXRFAAKWXMIETRPZKAIVCFMMUNDVJMGJXWUTRHUCBUSJZYYQFRTZFZJITUFVSYKGAZYQJPAVPDVCIUBSHBEIBKODRGRCXSZWSLKZYMTNPIIXWIZQAWHSGYDWMBHADRFLHOFGHOA");

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
    msg.setTimeStamp(0.4710640697406283);
    msg.setSource(12232U);
    msg.setSourceEntity(35U);
    msg.setDestination(59078U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.24904923464973616;
    msg.lon = 0.3880278354257273;
    msg.z = 0.9908523903596792;
    msg.z_units = 189U;
    msg.speed = 0.9167042850479626;
    msg.speed_units = 44U;
    msg.takeoff_pitch = 0.8701148626997204;
    msg.custom.assign("FHNTPDBYVYWLXUSJTOFXOQRAGLJBGVTNIHZUNAIQRYJGNNAIUDESRPTLFZKSUPSCHIPYCWMUSJYZVLPDXRCEHJKOAWRDBICQWFQVOOFRXTVCKPMGEDZMQUKPFGRUUGOWXVVPVQTDKYLSEDUKEEXLKMQDAGMZYTJTLZFQXAKEDUXISOQCCOCNLDOWHMPZIJMZLKKZEYBCRLNHIBYWBSSEFSOJMJIBFXFAVENTGBTQG");

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
    msg.setTimeStamp(0.624118854996948);
    msg.setSource(11819U);
    msg.setSourceEntity(249U);
    msg.setDestination(30932U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.5848244190071424;
    msg.lon = 0.34807782866325565;
    msg.z = 0.12985550995171757;
    msg.z_units = 241U;
    msg.speed = 0.8706320582667103;
    msg.speed_units = 79U;
    msg.takeoff_pitch = 0.35509902031311835;
    msg.custom.assign("FHYRAVRVZHHVUFOUQLOHAKKVDIFCGPGCXXAAUHIKKZGJZGJGBBFIMBWJEFMOSHZTXDYLNWCXCTDZHJJYOLDTJMJSADLFYBRAZPICWQQMWQSPMQUNNZKOIDOQRCLITAKHOPUFBNDOBREXMYSUBIKJXLSPMGATETKHAPNRPYSTCFQWRKPWEUOWRSYXZBYRNDFWCBENBCSNMQDLGLVZ");

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
    msg.setTimeStamp(0.3634675004067369);
    msg.setSource(53103U);
    msg.setSourceEntity(128U);
    msg.setDestination(46600U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.4491518969541397;
    msg.lon = 0.6962450574862834;
    msg.z = 0.8223153010970056;
    msg.z_units = 55U;
    msg.speed = 0.7609535640859619;
    msg.speed_units = 137U;
    msg.abort_z = 0.7415132425492019;
    msg.bearing = 0.1438193312269792;
    msg.glide_slope = 211U;
    msg.glide_slope_alt = 0.9913115017809018;
    msg.custom.assign("JBNFBKFKNXWQORFODSQPKQRNUPVWYFGMAOHLRZGDCGJUSWKSGLFPATGMQZYCBHQAZXSBNILHIVGVEAAPMTXFPRMBFJEWWHRTDVHNQCLWZDMRCADSOMYSLVMOJIQAN");

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
    msg.setTimeStamp(0.1964828255464095);
    msg.setSource(81U);
    msg.setSourceEntity(125U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.5502822533819612;
    msg.lon = 0.38112390244405825;
    msg.z = 0.09676734422868682;
    msg.z_units = 93U;
    msg.speed = 0.8767399092554063;
    msg.speed_units = 187U;
    msg.abort_z = 0.007364632642039348;
    msg.bearing = 0.9469813737525269;
    msg.glide_slope = 191U;
    msg.glide_slope_alt = 0.7163276058618041;
    msg.custom.assign("DFLYGSSPOCMYEFYHFPTXVWYZYQEPATOGXMTOICVB");

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
    msg.setTimeStamp(0.8753910631301823);
    msg.setSource(60141U);
    msg.setSourceEntity(54U);
    msg.setDestination(57847U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.14275378265276617;
    msg.lon = 0.21015698457573828;
    msg.z = 0.09556196477333923;
    msg.z_units = 131U;
    msg.speed = 0.9999224326480946;
    msg.speed_units = 175U;
    msg.abort_z = 0.611770972306565;
    msg.bearing = 0.5094648074011517;
    msg.glide_slope = 167U;
    msg.glide_slope_alt = 0.29487341544808876;
    msg.custom.assign("BMYFOSPUMNFITBFABYEYTSEUZKKSZETVJZHMYPSXNBIPPFTCFRCYKJCTNCEUDDUQHROLALAZEVOHUHJVIVTZVXPDRMHMPNWGPKXYBSDMIQVTDZSEZCGEOPGTUDUVJAWOGPQWB");

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
    msg.setTimeStamp(0.12204606196693413);
    msg.setSource(5318U);
    msg.setSourceEntity(204U);
    msg.setDestination(40550U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.09892520003021743;
    msg.lon = 0.7980729821108066;
    msg.speed = 0.7102247426458257;
    msg.speed_units = 0U;
    msg.limits = 226U;
    msg.max_depth = 0.7605635707782125;
    msg.min_alt = 0.45170341156016613;
    msg.time_limit = 0.5511414707152219;
    msg.controller.assign("QLWTFOXUALPJWXGSSCKNGBAVIIPVCTRBAQVMCTMZRRMACDNXITEFIYUNIHSHWPNFMOWJEBFUSGCNHSIRWWPLKGYFSUEIDCDOVSOSIWXJCEEQERXXPIYEKZDAJSQYEHYXHDXLOLKMPFCBRRVFMXMOOZQSAULETWNDALYQLZDGDPVHTUQGYUMNZFTGBAVKYAVKULOBRQBY");
    msg.custom.assign("CUYNVMJSODOCOGQLKUAPQTFKHNJINDGCRRVYRLGDHNCVUZOLHBSXFCUTTURFFXNGJT");

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
    msg.setTimeStamp(0.19509955257180356);
    msg.setSource(9226U);
    msg.setSourceEntity(232U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.3262019861681701;
    msg.lon = 0.09243115693388038;
    msg.speed = 0.5915782917865458;
    msg.speed_units = 170U;
    msg.limits = 99U;
    msg.max_depth = 0.6457423807665604;
    msg.min_alt = 0.28070055525523585;
    msg.time_limit = 0.7735686007115621;
    msg.controller.assign("FZGOWOLVKSQEHWVCTMOCMBZLIFBEPGSWEPQWPCRLXQRNVSHAIAOXIFRUDCHKQYAXSSJBMNVPURKYTCRBLTZVEIZBXUELLHCUDAMZFTZKYUGEQQKHYQCCTNDGTZKHURIJUWMWKEJVSGFGBVIEAVYUZXOGI");
    msg.custom.assign("AWATETSKVAI");

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
    msg.setTimeStamp(0.6561179274576041);
    msg.setSource(15430U);
    msg.setSourceEntity(76U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.9118251372803182;
    msg.lon = 0.41591091466406394;
    msg.speed = 0.5301478808366421;
    msg.speed_units = 221U;
    msg.limits = 235U;
    msg.max_depth = 0.18148194436589438;
    msg.min_alt = 0.523499535510852;
    msg.time_limit = 0.734749197100964;
    msg.controller.assign("QQSNEDDHDCRWNETTFYSCVOWNQIMRIYTOVRDPVILPFSIHUPVKVUFJYCIYBHZOAGBKNXEDZQLYCURTUXBDCNFOZIPMNLMXACAUYYBHWEUNXGTITBKYGZKHFUVJGWAWLMOEJXFFMSHVXKPJCDXBMTOGGJXWDOJCHPZJZYHPRRRQAKDNGWRFLZHOSZLEOJELQQGQXVKGJFXHVYQUBB");
    msg.custom.assign("FDNMZXOWEPSEFIZDSXXTEAKRVTKSKSHGPBHSPOEQXZPCMPSYUKJWWGKXIWVEZKJOFVJNWIHJAVTI");

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
    msg.setTimeStamp(0.4899600381628795);
    msg.setSource(35682U);
    msg.setSourceEntity(95U);
    msg.setDestination(31653U);
    msg.setDestinationEntity(186U);
    msg.target.assign("OXDTHSDQEPZRSLRIPOFETFYJRPZSAULELPYDQHOTSQKCECPKZWXIRDOYXPJSGAUHMRIHBVGVMIZFGGVNMWAGTABUGDSWWHTFCHSVTYFNJLRIYNVXPEJHAOWIDO");
    msg.max_speed = 0.5461416084871392;
    msg.speed_units = 28U;
    msg.lat = 0.9062034754459721;
    msg.lon = 0.5709701236701363;
    msg.z = 0.0571235119095862;
    msg.z_units = 74U;
    msg.custom.assign("RLKQTFXOLNNHENJUTALSENYAFKWFPVSOBMTKRIAJBEKKOWWLSYQAKPWNGBQMZRBDEYJOUBPJXGCWEMQAZPDZMGRZZJJIIAIKUYHRYYXTPVXZNMJGUEHFZHXOOUARRWZVXCDCFVLSL");

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
    msg.setTimeStamp(0.4723478747864567);
    msg.setSource(27884U);
    msg.setSourceEntity(151U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(50U);
    msg.target.assign("PGONVFQGNIZVDBEZZUZTAZQWGRLFYJCQHMVLOQHFFPHDLHFTIKGOCOCHPXZCYHRMJKKOPVZLEOXFWGYCPPBBDUWSAJLAUSVPOUJMRTGYXYBCHQIJVAXAETSFNEQYFWXNSYUXVDRNYDCWRXWOHUIKMDJRUEWIPQAQFKVXGSXKSJTPLDTRLLSWRYCMTFXDUVHISAMNKBQZOEJEBMHZALNTIPGUK");
    msg.max_speed = 0.39827384646541975;
    msg.speed_units = 195U;
    msg.lat = 0.4033957054311872;
    msg.lon = 0.8673237123807517;
    msg.z = 0.4240014312904219;
    msg.z_units = 137U;
    msg.custom.assign("JQPBAOYYZRLCEADAMITLPFNIOGYUHNGUWAJFFRFHVTTQPDUCZEVYXDTXPKLZQMBCNWNGGVJRZMYQXTDJFHIWKC");

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
    msg.setTimeStamp(0.7590229304577163);
    msg.setSource(8491U);
    msg.setSourceEntity(78U);
    msg.setDestination(27564U);
    msg.setDestinationEntity(51U);
    msg.target.assign("SOXTFYWGEHREFLMJGEFCBWMUOHWGIDLSZVAZYXQNYNPAHSFBEKASICYHFYGPDPNTQZJWRUECMZMFJGQNWNAUIAKDZVFISKVIRTLQXRFITEENDKWOGSYOCTIJSSQQSRXOBHEQOGYVRIPDXUKANPQIOBMTVCC");
    msg.max_speed = 0.26688489747980904;
    msg.speed_units = 235U;
    msg.lat = 0.9242592344411537;
    msg.lon = 0.06610830291450243;
    msg.z = 0.6697009711835373;
    msg.z_units = 67U;
    msg.custom.assign("RHUCVOTEMOWJRLHDUPQJOXUCFUMCBFKGRMOQHQIUEZNVZBALCYOPBIKARXCPIYEWAQHBJDMNVUEIVFCTFCLDTSEANRUYERKAWGEMNOTJDHQDJJTXQFBHZTSAKZUNFOXGOZGXYVBZ");

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
    msg.setTimeStamp(0.5001050437775711);
    msg.setSource(42612U);
    msg.setSourceEntity(93U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(39U);
    msg.timeout = 50352U;
    msg.lat = 0.7557112323096175;
    msg.lon = 0.31562948983280337;
    msg.speed = 0.40421930797653904;
    msg.speed_units = 160U;
    msg.custom.assign("IWRABTBGNSGLETJDDHMRLMKWTZEVKEQJXIMTBRHKWEOZFDPQBUOXJCLGFYWIATOUKAUGGIITZPLCUVYCBWGELQINPVMVBVTUVPQXCJHVYWVOBNPSAYYHAUMHVMZGWDXPGHMCDUKXJJIXCAYQRMNLELKOANFZGQRJLBUTLAWJOIBPNCSDNEMNSWUBCCUXVPFFFDSOZDYJXRZFSZJXTOKPFRNFEETZZYGIPRSYYEOHWKD");

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
    msg.setTimeStamp(0.16504912871145383);
    msg.setSource(64726U);
    msg.setSourceEntity(30U);
    msg.setDestination(62305U);
    msg.setDestinationEntity(253U);
    msg.timeout = 10047U;
    msg.lat = 0.3631140879854685;
    msg.lon = 0.770311141450618;
    msg.speed = 0.20485079769918912;
    msg.speed_units = 12U;
    msg.custom.assign("IUMVZLTDWIPMFDNTSPQMJDTIVLBPDMRMUMKHUFOOSJEARCRXZCGRMJANJSSBVTWGXKHFEUOOXIBXBLFBBWKOLGGCZNECGIHCHGEASXKDJMPXVDLPEPLJCLSWGEOUCZJYPVQH");

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
    msg.setTimeStamp(0.6123372519919689);
    msg.setSource(27078U);
    msg.setSourceEntity(200U);
    msg.setDestination(5031U);
    msg.setDestinationEntity(165U);
    msg.timeout = 39305U;
    msg.lat = 0.9310905852472802;
    msg.lon = 0.5335677054296403;
    msg.speed = 0.15425449998695928;
    msg.speed_units = 205U;
    msg.custom.assign("TENVRZUGZMRZOHCLZXKEELMNLOFEGUDTBCRVVUWOPPHMBRZBSVCHQHNDDPBYXMZTALCFUJASXRYNX");

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
    msg.setTimeStamp(0.6131013371202582);
    msg.setSource(43798U);
    msg.setSourceEntity(128U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.1323725343973855;
    msg.lon = 0.24784078137975918;
    msg.z = 0.11612022132920263;
    msg.z_units = 11U;
    msg.radius = 0.2714593232555632;
    msg.duration = 35273U;
    msg.speed = 0.9930216446709785;
    msg.speed_units = 143U;
    msg.popup_period = 16578U;
    msg.popup_duration = 57453U;
    msg.flags = 74U;
    msg.custom.assign("CSBOJBVVSKLSSQDFQFDTDXWYNZUOPPBZGUDLEFAFMFCPTMNUWJZLAQDBWCZOVUGTGNBAZBZYVICBNRKKHBNAEIJOOGPWIIXJFYTCSJLTGDXDFEFGTXMQVESSXTPMRVRCMEWUILYEBWJANHXZHLOKWZXPLHEUNJRKQTVGTYQAHMQAPNPYRHFGXUMGIIWPKLVZODUAYVS");

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
    msg.setTimeStamp(0.19698941629796252);
    msg.setSource(484U);
    msg.setSourceEntity(200U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.23150982293285793;
    msg.lon = 0.8071097589358351;
    msg.z = 0.30823698655786547;
    msg.z_units = 68U;
    msg.radius = 0.5590090362851792;
    msg.duration = 10497U;
    msg.speed = 0.5265416195697874;
    msg.speed_units = 176U;
    msg.popup_period = 26228U;
    msg.popup_duration = 51555U;
    msg.flags = 163U;
    msg.custom.assign("KPJQMZMJXJAYSUIPECWGRIVZAMXZNJ");

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
    msg.setTimeStamp(0.0724051414090735);
    msg.setSource(48183U);
    msg.setSourceEntity(219U);
    msg.setDestination(10080U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.09901898748906257;
    msg.lon = 0.3280685068695798;
    msg.z = 0.5320026584300445;
    msg.z_units = 140U;
    msg.radius = 0.5957572510507366;
    msg.duration = 18168U;
    msg.speed = 0.21607187432816344;
    msg.speed_units = 88U;
    msg.popup_period = 27089U;
    msg.popup_duration = 36373U;
    msg.flags = 192U;
    msg.custom.assign("QMEJOYBDEXAUIHNTKCBRTHRCCPLYCUYNJZALGTQYZIJNKBMPFMYWQUYVJXGBTQIDZQTFMXDTDCEESWEXALYPDWIJYKSWPCMDNGSKCLJOGNKNQUAIOSUHEEIOMVABOAV");

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
    msg.setTimeStamp(0.46484814829947263);
    msg.setSource(43844U);
    msg.setSourceEntity(87U);
    msg.setDestination(34226U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.08455227666234444);
    msg.setSource(10278U);
    msg.setSourceEntity(157U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.4530757816398512);
    msg.setSource(18452U);
    msg.setSourceEntity(136U);
    msg.setDestination(53272U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.2420634662942036);
    msg.setSource(34894U);
    msg.setSourceEntity(60U);
    msg.setDestination(31919U);
    msg.setDestinationEntity(186U);
    msg.timeout = 63642U;
    msg.lat = 0.9133961103782423;
    msg.lon = 0.8098324806204513;
    msg.z = 0.9052036920954206;
    msg.z_units = 178U;
    msg.speed = 0.48036401969853026;
    msg.speed_units = 93U;
    msg.bearing = 0.7386304988727128;
    msg.width = 0.307443365169486;
    msg.direction = 92U;
    msg.custom.assign("EPYNRQKFYSRRGRFCNYWKLVVTTUJWOWTRLEBQJIYUFFMFOLLLUMICGZZDSETEEWGFWUAMHWGWGCAPRFNALKEHPIQUKBZMIPHKJYGOTALYMNGIBGWTZXNLQASSICOBJFXAVJDRXCADQGPHYZJCVMIDQJDUXXPNXIBBCBOSU");

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
    msg.setTimeStamp(0.3261743117060161);
    msg.setSource(27134U);
    msg.setSourceEntity(141U);
    msg.setDestination(23842U);
    msg.setDestinationEntity(13U);
    msg.timeout = 46318U;
    msg.lat = 0.12869972648841999;
    msg.lon = 0.05687189866112663;
    msg.z = 0.4397350518526286;
    msg.z_units = 183U;
    msg.speed = 0.877792284134529;
    msg.speed_units = 22U;
    msg.bearing = 0.12772051419052655;
    msg.width = 0.7636280667486126;
    msg.direction = 226U;
    msg.custom.assign("AKUGHCMPPEYWQLSBWYTHPGQUUZWSNNJPBYYMAMEWVOETIWXBGMIICGSZDUTXBVIFKFCKEAMPPFJNBZFHWXMHDNAIGRTQKIVYMBRAWXTFEUJVRZLPHZJOGDLVUKJQQRNMSMNQCTTGVFPOTNABLOXUOIRCDYTDCUHHAZEDSKGZJZQYLDLSRXIWDQVEOSNXDLRWCNBFSOKZ");

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
    msg.setTimeStamp(0.5987513412758932);
    msg.setSource(48805U);
    msg.setSourceEntity(211U);
    msg.setDestination(51283U);
    msg.setDestinationEntity(184U);
    msg.timeout = 233U;
    msg.lat = 0.8214881901427228;
    msg.lon = 0.6785443944254658;
    msg.z = 0.33570537788954424;
    msg.z_units = 203U;
    msg.speed = 0.7941259887903689;
    msg.speed_units = 152U;
    msg.bearing = 0.17390643791857752;
    msg.width = 0.338237812255056;
    msg.direction = 147U;
    msg.custom.assign("SHDZOSCVMLBRIYARSLPQJSNVHFQ");

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
    msg.setTimeStamp(0.027371986119238523);
    msg.setSource(57279U);
    msg.setSourceEntity(228U);
    msg.setDestination(22636U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 211U;
    msg.error_count = 85U;
    msg.error_ents.assign("DFYRVKJHLYWMLNOIFPUAKQFMZNYGSBUCYYAAGTIVJSMIXSFHHGQHFIQMUPNTKXXKJMYCTNVCZJPDFGZHCYBTCAXIGRVNVWQWHCIXCETZPFHHOGIQRQNAXDBKVAOPSEDPWVOXLTKGGLEWJJTWRCSTZZVZZYKCBCLXJNPVQISOMJUWDUUULWKDRRYMESTPBTLWERDHPEKESEBNNDRSBAROOIIFEXYNJDAMUUHABBQQGMOBGODZ");
    msg.maneuver_type = 2835U;
    msg.maneuver_stime = 0.22126567327585878;
    msg.maneuver_eta = 11013U;
    msg.control_loops = 1162366180U;
    msg.flags = 162U;
    msg.last_error.assign("IQCXZQKHOOIDSZJLENMYELITNVLXDSBEGNCUDHFAFINEZZWPCLUPRHYHVVSBVBDUYWRLHFHBYUOPVAUKIFMRRIYCMTFPOVQLTEJJORTXIGPGELINAKTTBQSJUQGJDRORYCJFTNYXZSPDGHCAZOHRGTYCJKSOD");
    msg.last_error_time = 0.16594143967118946;

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
    msg.setTimeStamp(0.6248204736451497);
    msg.setSource(46537U);
    msg.setSourceEntity(53U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(240U);
    msg.op_mode = 249U;
    msg.error_count = 2U;
    msg.error_ents.assign("HPTLFYFIWMUYJSYPEVBNGYEEFWKHLXLGWXHNGBKHECOTRYRWXLIXPGPIWSEVTAIXDGQUBVVLUUKGVZACHQKHMISAZTOJDXQZFZIBPBOOSMKBRHRTLSKJYAMOWSWOCBMGHZIVUDXQPNZVMDYGHQKENBCCPCYTRCERGRMOEUEATEVLKRNAVLSQNVFQIHAPWXSZFDTINKUUJCCTWJJRDADNLQNSSQGZBD");
    msg.maneuver_type = 36083U;
    msg.maneuver_stime = 0.06507971011301017;
    msg.maneuver_eta = 42743U;
    msg.control_loops = 148472188U;
    msg.flags = 158U;
    msg.last_error.assign("ROYMOXMAXJDVVCUQFVAIIABRNYMXNSBCFASPLCIJCFBUFHXVICPQKOIRNRMUKGCLMTADTHWCLKMKWGNXJYNQESZCTSKZLPBLHJDXHXNQGBDKFZIHOYLMYGP");
    msg.last_error_time = 0.39316305713672417;

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
    msg.setTimeStamp(0.42774653501733984);
    msg.setSource(20184U);
    msg.setSourceEntity(243U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(249U);
    msg.op_mode = 94U;
    msg.error_count = 132U;
    msg.error_ents.assign("KTQNJVFWDJZKHCKLDNJYQOVIZDHRHQPQTJYZSSWUCOWXCQQVMOCAOOXRPQYBFEFNJPEYALUCZPCRDHDHPTZMIYGPKHPEAUXLWVAROPGKMLTAXMBWKRJFEPIOGNMAZNXRRUGBBARSSFHOIGQCGDETVSEBLIBLMZKSUVZTYTDHBECIQVKH");
    msg.maneuver_type = 961U;
    msg.maneuver_stime = 0.0524473975066706;
    msg.maneuver_eta = 2108U;
    msg.control_loops = 3688762356U;
    msg.flags = 132U;
    msg.last_error.assign("TQAAOSIUNPNRFKCLMWSPPYUXNOSIZGRGMGWQTUMJYYVLYPNQLZQQITGHVPNRVDZBYTBFIOCEEHIXGGEDJVWZGKUABDSHRMKUQJPRECCBEFTVBJJWUGATEAXK");
    msg.last_error_time = 0.6997795425673992;

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
    msg.setTimeStamp(0.5321153149107349);
    msg.setSource(39658U);
    msg.setSourceEntity(166U);
    msg.setDestination(54530U);
    msg.setDestinationEntity(46U);
    msg.type = 180U;
    msg.request_id = 19469U;
    msg.command = 9U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 30670U;
    tmp_msg_0.lat = 0.8450531567557262;
    tmp_msg_0.lon = 0.40072397154518224;
    tmp_msg_0.speed = 0.49929659683663896;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.custom.assign("EQNGXYTTJJDOTJQTFRPJHJDOZMKSULLFGVUNIWOXKFFNSNCMMGWBPKZXMQLDCMWEZSIBAJQFHLPUOAGRLJGQCOXSZAFRQBEJANWPMXEEHOUVBFCHBMYHCIIGZLPYZVGVLVUGDEWQKTPAPTIRDYZKZWYDDNKOKUVLBWCHSTNFCSZSWICPRZNARLORNPDMTITLREUYRABGUESKUCEDKTXWOBHYVVIGHOFPSJHMQHAFVAKXMYYQXQWACIRD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32406U;
    msg.info.assign("ERYZSCHFKNBIWLSMOWVJXABMCBAFDPKCETRJKMEBJBYLXAZAUNTAUEGATDDEDVVURIDFPJIENHZLOQRPOSITVRGLSHOOPBKOWWYNFAMVLKXGIVVQYYZFXYSUBJLWYKNVFQOCUTRHMSDTLCW");

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
    msg.setTimeStamp(0.6875396050976029);
    msg.setSource(40707U);
    msg.setSourceEntity(76U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(228U);
    msg.type = 7U;
    msg.request_id = 33386U;
    msg.command = 205U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 252U;
    tmp_msg_0.lat = 0.31853167741174737;
    tmp_msg_0.lon = 0.43116587792945726;
    tmp_msg_0.z = 0.7286813058366183;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.speed = 0.9734420905392659;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.bearing = 0.3513312183432845;
    tmp_msg_0.width = 0.12156595443047802;
    tmp_msg_0.direction = 61U;
    tmp_msg_0.custom.assign("FVCHLNOMATLQCHKUZVKXLRHIAGVPLMYVIFDJSM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59557U;
    msg.info.assign("EPBIBFSWGPMIZNJUPFBQSDGRUTEPFGRFXBKDTWFXIPBGWAFGWTMRJTHPGBYPKMJRDXZVNQJXEFULJXEDKCKSWOXTVQYLNSZAIZIOKYLYTONAJTUHVUEDGHOLYRWZLRJHQQAIGXOUKLEMGKZNOPVDFFVVKONHQZWJCBABMN");

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
    msg.setTimeStamp(0.008752012687790689);
    msg.setSource(11112U);
    msg.setSourceEntity(181U);
    msg.setDestination(49173U);
    msg.setDestinationEntity(65U);
    msg.type = 5U;
    msg.request_id = 28188U;
    msg.command = 21U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MAKGRNOQXLMUJBPNTIXBOURLBMWDJTHYWDSZPZDMERRXBLRCRWVWUFRHSCDFVEPEBYVF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51353U;
    msg.info.assign("TUKBDHUYPFZLGEMWXFWFRYLTZMTXIGDHAHCVTMZRDXUJKPRIRWRVEUTHSKPWTJESJLGPEYGFBRYCGLQWZFZLIAAYYXOCAYWHINESLACSDRCCJYEFOJUIGPJQMGNDQPVKLSLINVHADIBNXNUMQAMCDZQJHJONXDBQKHKQUBLFBNPUNEVTYZWOBUMKVOTAVAWSFSMGOOBMTCIXQKXOEHQNRZFDKIWORVGIXZNUEDKCGCBJOSJYLSPQZHWASMV");

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
    msg.setTimeStamp(0.49232630057522664);
    msg.setSource(38280U);
    msg.setSourceEntity(123U);
    msg.setDestination(64018U);
    msg.setDestinationEntity(197U);
    msg.command = 154U;
    msg.entities.assign("IFLQTCWOGHBRYSKZXQZWWXFPZSGFGBCFPXEQIGHRZOFMIAADLMHNVRNOTTZTQHWOZTVRGLZUANTXXQCUZBNDXNSBXEKSNIPBHSWNMHUJDBVKJIUMDOYDKMFAIQUGCUVLPNUYTEYRGTPCAEXNSTVDBXZYAGJEJIRCSKJUYDGJAESPOKXZWLMSLRGWHMVPPOQJAOKVDLDIYCCAPQELENOFIRYLFBRFQVWTJPJEHKMHYOBVQYJKULSWM");

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
    msg.setTimeStamp(0.04832047748588919);
    msg.setSource(36516U);
    msg.setSourceEntity(40U);
    msg.setDestination(17135U);
    msg.setDestinationEntity(143U);
    msg.command = 163U;
    msg.entities.assign("JSFGTAIMJUXBVJVURNDSIRLXVWFRVBMWWGPHEXOSMOFJLGYNPQUMUVCCMZDQQRVXPAASDHOUIQMJNEYWNYFDDZTYEHUZGIZWIFNBLBZNRFSNZKXWWLADISORHJIVAAYH");

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
    msg.setTimeStamp(0.4411376966884406);
    msg.setSource(47557U);
    msg.setSourceEntity(168U);
    msg.setDestination(3759U);
    msg.setDestinationEntity(167U);
    msg.command = 201U;
    msg.entities.assign("ZKVZQYAXYHRJHRXEGRVHPXWLJTTSALKUBBDXCGKBIRXYOMFSXTJPKPZWAXZMWUTSESBRBEGQSXAVMWERUQIBPAJALYJJGJZQKSTWPHMFJQGVLFMKWTIBOYMVGSNGCQDKXFEVQQLPTULF");

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
    msg.setTimeStamp(0.6183608603643943);
    msg.setSource(47389U);
    msg.setSourceEntity(64U);
    msg.setDestination(23999U);
    msg.setDestinationEntity(239U);
    msg.mcount = 65U;
    msg.mnames.assign("NCQETCBWBZYWFZGYGIELRWJDHDUVZQTDHADSMGLWKLWEJZYWNNOVYUEQJVFJXAINLEKPMHMPLLBMAITVYFRGEUSNBHTBVOOUGKOGAMAIXNU");
    msg.ecount = 43U;
    msg.enames.assign("IDTEJKSYWTVOMESKOFNZQCKMLFKOKCVMDCEMNOFEFALJYXXZHYOBXOZHALLUZHUSJRDZYUWIQJHFTAJZXKFMXPANVZZCLUEQMDKBPGVGJYQXIROCTBFVUYNIPAJIAQQRDKBGTAUGOENAPICNNQBGDLQJWWLGFSYNUDTGILYSKWGRBBRNXPOPQHPTWVDTCSPSPSMIMWHTIXHFJYHUVCSXMF");
    msg.ccount = 145U;
    msg.cnames.assign("SLNKMICPUFCDNTEAWXTQNAISZIKVEXMACEHHDXCFYRISNCMQQKEQPXNBZUUZPOYVQFYLIUXGNVMTJQOLDQLZBMTPGSAUQODZXCTVCJSSZJPDHIXFZGLKIEPHOBWKDJHZMGBWXHPUJNPHAKUVLKRJGYOOWCNLBWPQOSNIGGYVIEWDLDJMOBEHRWAMPDYCFYITFGRUSTUJYBFAZEBBEMYFGAFHVRNRXQTRW");
    msg.last_error.assign("PVCWEIENSRIRFVECIKAPCMQVSXNDJDHOVRDPBGKLXKNHYUZEUPIBQXLGTVOOHCJGRXZOKZFTADPNQGGEWVSDAXUOOWCUJTMSIAYRPQFMTNWETALEXHNVVZYXHZOQTKRNBXRFGDSQVBHFFIQJYDLGHMDAFFEIQIYQZCXPWUMLYHPSLSYJBUBMOMWWZLZLKRFKDHAAZTMCZTGUS");
    msg.last_error_time = 0.5262917419073658;

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
    msg.setTimeStamp(0.561360908433898);
    msg.setSource(6226U);
    msg.setSourceEntity(4U);
    msg.setDestination(33141U);
    msg.setDestinationEntity(195U);
    msg.mcount = 163U;
    msg.mnames.assign("KNPKFYRAFVPCUETSKNJGDEUUFEOSAQAHLBOWZBCKITQZQUYNPXCRBSPIOMZGEOELAWRKCGLIYMLBNHPMJWPTSDISMSXPCDFGRPPXTMOJAODUYMNSIIQHGVWKKTVDGQZJXBCRVCXSDQZCLVMXLTURZTMSFHAJWKFNNHLZIZZZIFRQBGFVJMITTLBAGFACX");
    msg.ecount = 32U;
    msg.enames.assign("SZNAKJCYAFPERVRMROYCIYORFGNSNUOMBTNFTRKXHGDJODWEPCUIXNDLRDUGGWSKTGMFZPSIBXGLZVJBEGKSDEYZAIONFCAJQMYFJXAIROKWLEYMAEQMQTKTINHFMJVZMHZQJNPXVUHVRASDCWRQGBDOZPHWITEGYROMOJPKLIIUZTSPANJOYVQWELHZFPLLCHBQQXTXEFXAQVLVUTCQWWU");
    msg.ccount = 114U;
    msg.cnames.assign("OOQBASOYYGJDGLFVHJXPWOOZNVIOZIEANZCJWVBFRLFWWTJAGKWCJ");
    msg.last_error.assign("RPFDAZJFUPNZEUDDVNYXGKMXKHOSIUEOSOQZPXMFWVIWRVJDPGEYXLMTBKXFMLRGMBILTSJWCFQKTREVRMFQPBILSUVUNCFYLSCWCIJTPBNJLHZEZHSYKNKMDRBQUQTTKTRQWABNCAJRBDXXXDWVPYWUELWWZOBVNZKHDQJPNVWSTHPCONVYZEYDGOHL");
    msg.last_error_time = 0.5380734296501131;

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
    msg.setTimeStamp(0.3900603112018943);
    msg.setSource(48477U);
    msg.setSourceEntity(97U);
    msg.setDestination(43837U);
    msg.setDestinationEntity(3U);
    msg.mcount = 24U;
    msg.mnames.assign("NVZFBUDMJGZGDUXNJDNSGEUPQMFRNCFPOPNBJPKYWBYYCNYHGTTOZPBJMWTNYQKRCDYQIIRJPJVGIDTKTMLOFHTEOTXXQWCKXZLDVKBKHVZS");
    msg.ecount = 120U;
    msg.enames.assign("DUNMXYAHJRUIGCGGCUOEWCHUYVFEUQDFULNWNZPDIZVGYHKXOTKKIEOJEUOAPRAOSXWJHVIVKXZWKLGYTFEQJC");
    msg.ccount = 253U;
    msg.cnames.assign("IEXKCLEMZIUKVRBWXGCTOOQLXVHBOSISGESBAISQWURPXRQXMVIRQFGAZL");
    msg.last_error.assign("TODTXLTUXJHFFCXXXEGPNNVJQCCGWMZLPSOVAPTKQEBWCJYIPYEEREVAWXVHQHMGLKUPRLBI");
    msg.last_error_time = 0.7124901452309147;

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
    msg.setTimeStamp(0.016760088859311906);
    msg.setSource(23250U);
    msg.setSourceEntity(107U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(28U);
    msg.mask = 125U;
    msg.max_depth = 0.13928576499474898;
    msg.min_altitude = 0.3768069124689716;
    msg.max_altitude = 0.9500084657940363;
    msg.min_speed = 0.6241611084552123;
    msg.max_speed = 0.6094926587856812;
    msg.max_vrate = 0.5054188510897749;
    msg.lat = 0.5416059337339837;
    msg.lon = 0.28656459084773145;
    msg.orientation = 0.605848050219085;
    msg.width = 0.9954439159773966;
    msg.length = 0.2989243143335719;

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
    msg.setTimeStamp(0.5956970099519839);
    msg.setSource(10423U);
    msg.setSourceEntity(252U);
    msg.setDestination(54298U);
    msg.setDestinationEntity(88U);
    msg.mask = 200U;
    msg.max_depth = 0.3225725669667401;
    msg.min_altitude = 0.45927053686787256;
    msg.max_altitude = 0.3642374722437619;
    msg.min_speed = 0.5171294909671721;
    msg.max_speed = 0.3592391135997377;
    msg.max_vrate = 0.9367534815612607;
    msg.lat = 0.25203792618830645;
    msg.lon = 0.621604138989471;
    msg.orientation = 0.7115325310727936;
    msg.width = 0.474990851832371;
    msg.length = 0.10221816055994393;

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
    msg.setTimeStamp(0.5367807989339333);
    msg.setSource(32757U);
    msg.setSourceEntity(120U);
    msg.setDestination(9266U);
    msg.setDestinationEntity(219U);
    msg.mask = 74U;
    msg.max_depth = 0.9778161099650093;
    msg.min_altitude = 0.3275622698550483;
    msg.max_altitude = 0.5775869055102112;
    msg.min_speed = 0.3412849780156878;
    msg.max_speed = 0.03051201333113962;
    msg.max_vrate = 0.4766186185923986;
    msg.lat = 0.5689136621713231;
    msg.lon = 0.7866515005029824;
    msg.orientation = 0.2249306726122322;
    msg.width = 0.7207507486134288;
    msg.length = 0.8388123766697465;

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
    msg.setTimeStamp(0.6872549586858562);
    msg.setSource(41748U);
    msg.setSourceEntity(78U);
    msg.setDestination(8722U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.009065547227575466);
    msg.setSource(62756U);
    msg.setSourceEntity(136U);
    msg.setDestination(5714U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.33277476490823354);
    msg.setSource(44466U);
    msg.setSourceEntity(82U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.3841377137756318);
    msg.setSource(38852U);
    msg.setSourceEntity(203U);
    msg.setDestination(51416U);
    msg.setDestinationEntity(107U);
    msg.duration = 42818U;

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
    msg.setTimeStamp(0.45941099406184993);
    msg.setSource(26461U);
    msg.setSourceEntity(243U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(133U);
    msg.duration = 21742U;

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
    msg.setTimeStamp(0.30672621426888547);
    msg.setSource(25685U);
    msg.setSourceEntity(245U);
    msg.setDestination(58227U);
    msg.setDestinationEntity(2U);
    msg.duration = 41463U;

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
    msg.setTimeStamp(0.9876654846968159);
    msg.setSource(62237U);
    msg.setSourceEntity(175U);
    msg.setDestination(28133U);
    msg.setDestinationEntity(45U);
    msg.enable = 119U;
    msg.mask = 345729616U;
    msg.scope_ref = 2926758445U;

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
    msg.setTimeStamp(0.5602985024910556);
    msg.setSource(29645U);
    msg.setSourceEntity(108U);
    msg.setDestination(52307U);
    msg.setDestinationEntity(224U);
    msg.enable = 140U;
    msg.mask = 355391694U;
    msg.scope_ref = 1999557156U;

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
    msg.setTimeStamp(0.05140467837500928);
    msg.setSource(50966U);
    msg.setSourceEntity(51U);
    msg.setDestination(138U);
    msg.setDestinationEntity(143U);
    msg.enable = 171U;
    msg.mask = 2451300922U;
    msg.scope_ref = 2832759312U;

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
    msg.setTimeStamp(0.6036239362032747);
    msg.setSource(14626U);
    msg.setSourceEntity(3U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(27U);
    msg.medium = 96U;

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
    msg.setTimeStamp(0.06924348263233782);
    msg.setSource(40667U);
    msg.setSourceEntity(151U);
    msg.setDestination(6621U);
    msg.setDestinationEntity(168U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.8560972340746175);
    msg.setSource(22091U);
    msg.setSourceEntity(223U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(154U);
    msg.medium = 202U;

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
    msg.setTimeStamp(0.392659060000213);
    msg.setSource(16021U);
    msg.setSourceEntity(56U);
    msg.setDestination(44316U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6395179690945502;
    msg.type = 108U;

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
    msg.setTimeStamp(0.15321893483510407);
    msg.setSource(11618U);
    msg.setSourceEntity(234U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(146U);
    msg.value = 0.14142483216792645;
    msg.type = 91U;

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
    msg.setTimeStamp(0.005541069028196177);
    msg.setSource(15478U);
    msg.setSourceEntity(170U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(140U);
    msg.value = 0.024367047546246967;
    msg.type = 141U;

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
    msg.setTimeStamp(0.9371222894433697);
    msg.setSource(22330U);
    msg.setSourceEntity(237U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(66U);
    msg.possimerr = 0.5480608542442921;
    msg.converg = 0.2986936870139414;
    msg.turbulence = 0.8596148190264014;
    msg.possimmon = 26U;
    msg.commmon = 221U;
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
    msg.setTimeStamp(0.9589805773436971);
    msg.setSource(17040U);
    msg.setSourceEntity(1U);
    msg.setDestination(23310U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.5753752354359246;
    msg.converg = 0.5775775963679152;
    msg.turbulence = 0.7701456560577447;
    msg.possimmon = 197U;
    msg.commmon = 211U;
    msg.convergmon = 37U;

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
    msg.setTimeStamp(0.9123559174111544);
    msg.setSource(58850U);
    msg.setSourceEntity(29U);
    msg.setDestination(44099U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.3812335914725292;
    msg.converg = 0.7531179261803985;
    msg.turbulence = 0.9834096695278216;
    msg.possimmon = 136U;
    msg.commmon = 220U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.5182257742290011);
    msg.setSource(32048U);
    msg.setSourceEntity(24U);
    msg.setDestination(765U);
    msg.setDestinationEntity(247U);
    msg.autonomy = 7U;
    msg.mode.assign("CTHLUFWBMUKLVGJGQCT");

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
    msg.setTimeStamp(0.9836706733541559);
    msg.setSource(25877U);
    msg.setSourceEntity(136U);
    msg.setDestination(32719U);
    msg.setDestinationEntity(221U);
    msg.autonomy = 178U;
    msg.mode.assign("HWPUCZMNCLGGSRXGESOMRLZHDZIFWUOQQHIKDKYTATDGCBLWOUXYWOJWZFVQYYCEBMPNOTRVKSABZGOHEDTQRTZQVMYASJKJWVQFKQJPDYTCITYBNJPFMSSRUYLAGELAMIKGZVRLEKAPIWJFHJFNFNFSJJPWEEHOXITUDCQWOVNBBOYHLADGEUVLDXC");

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
    msg.setTimeStamp(0.9776666118949626);
    msg.setSource(47906U);
    msg.setSourceEntity(80U);
    msg.setDestination(51944U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 190U;
    msg.mode.assign("BOIENXDMMDPHTOQLPHRBREUSCXMVZNPITMTILRGJUUWEYGJTEKHYTCZZFJYBLDUSORZMMWHSFJSKRAXQSOVKCQZKWPDISGUFOIIAKXTDLCDBQNMOBNHGJCGZKCWFBZMTNPNGAVEORHYZGFUXRWLS");

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
    msg.setTimeStamp(0.7111372997371552);
    msg.setSource(4936U);
    msg.setSourceEntity(253U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(72U);
    msg.type = 135U;
    msg.op = 195U;
    msg.possimerr = 0.14514740700823237;
    msg.converg = 0.8871881083353074;
    msg.turbulence = 0.4960905657067305;
    msg.possimmon = 181U;
    msg.commmon = 3U;
    msg.convergmon = 235U;

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
    msg.setTimeStamp(0.04670125510404044);
    msg.setSource(27028U);
    msg.setSourceEntity(226U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(216U);
    msg.type = 39U;
    msg.op = 127U;
    msg.possimerr = 0.3736916394393869;
    msg.converg = 0.8040543411317216;
    msg.turbulence = 0.47275122473467557;
    msg.possimmon = 143U;
    msg.commmon = 47U;
    msg.convergmon = 188U;

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
    msg.setTimeStamp(0.23708563543879324);
    msg.setSource(29914U);
    msg.setSourceEntity(244U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(240U);
    msg.type = 101U;
    msg.op = 5U;
    msg.possimerr = 0.8474621067594392;
    msg.converg = 0.15494852832634265;
    msg.turbulence = 0.04338307280869702;
    msg.possimmon = 76U;
    msg.commmon = 246U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.07053162965454685);
    msg.setSource(53393U);
    msg.setSourceEntity(8U);
    msg.setDestination(15628U);
    msg.setDestinationEntity(242U);
    msg.op = 196U;
    msg.comm_interface = 88U;
    msg.period = 16589U;
    msg.sys_dst.assign("QRNCVTWLFKZNCMAJGTUUNBARWZKBHTZMBLLWWLARXXKXDJDSYXVXBYMANPCQRFXWUHLTGYFNECMLRDORSBWUGNNREJRDJZDHFQZWUEHMHLZVYUBXIIKBNCCJTPSSNHURJIJVAECDYQHUWCEALVGKGJHIITMOZBFEWAIKGSLFSAVPEDPY");

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
    msg.setTimeStamp(0.6825478843269784);
    msg.setSource(15353U);
    msg.setSourceEntity(135U);
    msg.setDestination(21537U);
    msg.setDestinationEntity(210U);
    msg.op = 237U;
    msg.comm_interface = 60U;
    msg.period = 48218U;
    msg.sys_dst.assign("FPCGHVSNTSPAMHYQJGKKMELKRHCQBJHYIESNOMKAIOYXSOYOIJIWOHHEWQXDZJGHKFNFWCSTNEPCQUZMUREVXMIVUBPATGTOZ");

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
    msg.setTimeStamp(0.7444281850232647);
    msg.setSource(46594U);
    msg.setSourceEntity(202U);
    msg.setDestination(34755U);
    msg.setDestinationEntity(30U);
    msg.op = 254U;
    msg.comm_interface = 240U;
    msg.period = 8333U;
    msg.sys_dst.assign("YIOEGGJDYZMJRVSDDPAOGIKFFFFDRHNUUSVUHGPAJWMMEOCIDTYUKTQUMKJWVBYTHUQVKPKWXHFSPLQLKZZPCOFUWKCXLGXQRRZYNXPNLWMYMNYHDCEBO");

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
    msg.setTimeStamp(0.8540524708640214);
    msg.setSource(48267U);
    msg.setSourceEntity(121U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(66U);
    msg.stime = 555468267U;
    msg.latitude = 0.5030133088865076;
    msg.longitude = 0.512952483959481;
    msg.altitude = 18505U;
    msg.depth = 55467U;
    msg.heading = 14521U;
    msg.speed = -20809;
    msg.fuel = -92;
    msg.exec_state = 8;
    msg.plan_checksum = 6753U;

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
    msg.setTimeStamp(0.12100051189847649);
    msg.setSource(42295U);
    msg.setSourceEntity(41U);
    msg.setDestination(38176U);
    msg.setDestinationEntity(39U);
    msg.stime = 45694565U;
    msg.latitude = 0.5524440863797628;
    msg.longitude = 0.620774711723083;
    msg.altitude = 29914U;
    msg.depth = 11902U;
    msg.heading = 65296U;
    msg.speed = 26781;
    msg.fuel = -68;
    msg.exec_state = -65;
    msg.plan_checksum = 33529U;

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
    msg.setTimeStamp(0.5920888172977663);
    msg.setSource(42272U);
    msg.setSourceEntity(197U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(69U);
    msg.stime = 3668363350U;
    msg.latitude = 0.9530455006689791;
    msg.longitude = 0.9412297694014989;
    msg.altitude = 62468U;
    msg.depth = 23307U;
    msg.heading = 46745U;
    msg.speed = -20128;
    msg.fuel = 29;
    msg.exec_state = 33;
    msg.plan_checksum = 3361U;

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
    msg.setTimeStamp(0.7415159684883339);
    msg.setSource(15508U);
    msg.setSourceEntity(241U);
    msg.setDestination(60792U);
    msg.setDestinationEntity(188U);
    msg.req_id = 13271U;
    msg.comm_mean = 244U;
    msg.destination.assign("VIUSOUFTHOPAENQCLNOBQINMDHNZRTDLASVOOFLZGUGPTKVAQAKACMMJPQUGIBFYHQTSPRSCAQXMYGEHYYWCHIJFLRA");
    msg.deadline = 0.9522938622847527;
    msg.range = 0.6919550127676247;
    msg.data_mode = 38U;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 74U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NDGTCUWCJRCHQPGTIOLMYJYMKORMPXFXBHBEVFKSZBDZFNUONBGDXIKVYUQZHXFXJBKTIYAWTEEACKFNDSQEVQYPHSYAERMGFNCAVMBLUKTQWYBZUMRHSMLMAAIRDSJCIYRONLXTCZHWCZAUOAAWKLLQUOLQKR");
    const signed char tmp_msg_1[] = {-123, 8, 83, -39, 33, -49, 4, 10, -26, -25, -19, -90, 70, 28, 61, -63, 46, 7, 21, 53, -119, -19, 34, 43, -4, 106, 79, 99, 10, -103, -101, -63, 63, -19, -77, -124, 8, -119, -92, -80, 48, 65, 64, 63, 111, 58, 119, -68, -36, 124, 29, -70, -59, 63, 107, -47, 26, -2, -55, 124, 65, -11, -42, 122, -71, -21, -72, 120, 7, 124, 73, -120, 98, 97, 109, 21, -25, -29, -4, 27, -1, 117, -2, 26, -98, -91, -46, 99, -60, -46, -56, 43, -40, 49, 15, -81, 30, -40, -19, 10, -56, -9, -62, -112, 24, -109, 43, -116, 62, 57, -107, 105, 63, 61, -110, 109, -53, -89, 46, -71, 12, -97, -15, 48, -90, -117, -9, -42, -90, 41, -121, 112, -1, 41, -78, 122, -83, 64, -113, 45, 83, -31, 75, 20, -122, 36, 49, -59, 62, 101, 102, -30, 33, -12, -11, -99, 45, 26, -58, -14, -94, -25, 52, 48, 26, -124, -36, -60, 1, -84, 84, 17, -43, 110, -3, -18, 72, 18, 45, -11, 82, 24, -42, 17, -90, -29, -38, 80, 94, 85, -77, 106, 51, -87, -33, 39, 80, -76, 2, 60, -46, -60, 6, -36, -39, -106, -102, -5, -97};
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
    msg.setTimeStamp(0.4149013676342499);
    msg.setSource(33683U);
    msg.setSourceEntity(30U);
    msg.setDestination(48516U);
    msg.setDestinationEntity(169U);
    msg.req_id = 39879U;
    msg.comm_mean = 146U;
    msg.destination.assign("MFDKFNDLUTRKLRPUCAZIQIPDLENQLOOGPNZFMDPMHUQAIUBPVPVCIXUFYGWRRWMBZYNVTWCHPQTQSBJXUZBCLGHHTGYWO");
    msg.deadline = 0.8787267622076298;
    msg.range = 0.4423891116906956;
    msg.data_mode = 172U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("INAZWGJXXIVJDMJZOKAJGDOXWLMEUCGQYBOFGWHOKHDDNZUTKDOTUEEIIQUGRTJCSPLZWIFLLECYDZBTNFGATQNPFQTRWEOPCGUKBRCRBRUNMD");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 29671U;
    tmp_tmp_msg_0_0.custom.assign("JMXSQCAUNTPEGOKWNIIYHBTYBSAIYAWSVQRIHRZTYPRFSPTVLZPBDDLWCGEREGHZMZPAVKVDTDWNNHGKEREDEHOFRLJMOHXSJXNWDELPRCLAPFSWQGNNODCYNIWSZMNTJRVKDKRDQQXMQGFEAVQFCVGZJXICVTZUXG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CloseSession tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 3143692020U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 163U;
    tmp_tmp_msg_0_2.label.assign("SKXLWZVCFHPIAAXMXWAXTOYPYRDONBWOENDVECHHTDGZOLMILZZEJMIUFTOXKKRSYFNZGMCSBQPBOCCUQSARJPVUOBDZQQAQQENADRWMUARPHTIEKIIRSTGUNTEHYJWJHLWFVBFUCDUXPPDIJYMFVIJJMFBDKTYJGAZUHOSSLVOJPAVGBZYHBQNGUMVTKCTWGMGDQFCSELFLHPNTUDYHILERWLEYRKGAKXWCXKXENOFSZGCXJVQSWLNNMBKY");
    tmp_tmp_msg_0_2.component.assign("PRREHXGVMFZUWQEVUSDLADAGMNDZCYNISHBAYQCNWDQTYTOINZXJWQUCTCLRKHOIEJXGZMKIEXAJGM");
    tmp_tmp_msg_0_2.act_time = 19377U;
    tmp_tmp_msg_0_2.deact_time = 462U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EVTIMXAPRGNZYLFFKTRLEYQNKXTGMBKZUYYXKMDGZYBOWJCAHQMEUOPWCSXYBAJOGFCRXLGUNPDLOSQFRCWVSHUBPUHKKBEIMFFVTH");
    const signed char tmp_msg_1[] = {-31, 122, -79, 115, 77, 74, -65, -83, 78, -103, -42, 80, 118, 61, -26, 83, 43, 30, 26, -48, 38, -63, -28, -114, -126, 70, -80, -25, -93, 102, 64, 23, 21, 40, -48, -28, 98, 54, 111, -64, 48, 62, 114, -96, -83, 18, 71, -74, -72, 106, 91, -120, 102, 37, 90, 59, 71, 3, -64, -83, 75, -68, 105, 18, -23, 24, 103, -2, -36, -61, 9, -95, -102, -124, -42, -33, -126, 109, 66, 39, -61, -123, -100, -24, -77, -118, -18, 31, -88, 48, -52, -104, -85, -75, 106, 123, 52, 115, 53};
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
    msg.setTimeStamp(0.7087198215068965);
    msg.setSource(25943U);
    msg.setSourceEntity(233U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(197U);
    msg.req_id = 13756U;
    msg.comm_mean = 12U;
    msg.destination.assign("WUAJDZUKRCBTMHOGVJEOPVAQMKNWASHWAWDIWJLICDOXBKODGMCZSXTL");
    msg.deadline = 0.6540841976391878;
    msg.range = 0.8443537047680612;
    msg.data_mode = 134U;
    IMC::Pulse tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BTLYWYKLBENVFIHPBTGLTLE");
    const signed char tmp_msg_1[] = {52, 80, 6, -33, -91, -114, -30, 57, 87, -7, -55, 31, 28, 57, -36, 70, -6, 35, 69, 69, 119, 123, 22, 10, -12, 11, -9, -57, -17, -32, -111, -35, -96, -97, -109, -50, -55, -84, 32, -74, -18, 122, -73, -23, 10, 52, 125, 113};
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
    msg.setTimeStamp(0.9912199755455465);
    msg.setSource(3390U);
    msg.setSourceEntity(88U);
    msg.setDestination(57218U);
    msg.setDestinationEntity(39U);
    msg.req_id = 42194U;
    msg.status = 79U;
    msg.range = 0.2992176398216225;
    msg.info.assign("JWJPTTHAZVQAIFEBRHDOHGGILQRXCKJHRZIQDNDXCJGZTNLZKONRQDVGSOLAUPGITXYBMGLEQCYGNKYISVEAZHSDWSXNPPEKPTUCEYKUOWPQATXIBUEBSBEXCEMVIEULOFVNIJYIJWKSFSPNZCMYYVGONQBBRTQZKSKXHFWUQDFSGZJHMBDOKLAHDNDMWFHCOYFLCFCQHGFMLDUWTZXWMJMXIURTVPULARWCLJWRPJAFKZYRY");

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
    msg.setTimeStamp(0.7938247352127288);
    msg.setSource(51745U);
    msg.setSourceEntity(49U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(98U);
    msg.req_id = 22589U;
    msg.status = 44U;
    msg.range = 0.022814689228043084;
    msg.info.assign("AGUYNDELRUGMNETNCYAYXLFWFFTINMAMVWNJVAQQZTLAYZDBDVBGJEPVAJWUZSUQEDBHCA");

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
    msg.setTimeStamp(0.5179098333211773);
    msg.setSource(7523U);
    msg.setSourceEntity(224U);
    msg.setDestination(17865U);
    msg.setDestinationEntity(51U);
    msg.req_id = 28299U;
    msg.status = 184U;
    msg.range = 0.6222050531602368;
    msg.info.assign("IDCDMEJRGPTIINIPFAHTEUVHIGUZDPOFMKGXLBKMNAHXBUNWXTPSSWDWGMLMDZNRVAZXEBKKJRTPIVWYYH");

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
    msg.setTimeStamp(0.5819723178161179);
    msg.setSource(33584U);
    msg.setSourceEntity(18U);
    msg.setDestination(46640U);
    msg.setDestinationEntity(43U);
    msg.req_id = 58984U;
    msg.destination.assign("OROKHSNQHRQFDVKRFLTWEZOVYIPRFBKZEQFOZUWWJQCQCRSTBZANKHUVOSIZEEISXUGYIOBOYAGVUGXRJGYZ");
    msg.timeout = 0.43078297658121145;
    msg.sms_text.assign("MZJUTOXTDDRLALDUNTKAPBQNZOXFXVAWZDWRIDFPQVBNHGKLHEFSNJKBUINTFYUTGIESBLIMSVGNZMLZCAYRKCBFJLSISQECUKGRTIUAWCTJUFWIGUBBRYYKHELGVQOYJCPMTVZJHMAXSNWHQBFJPLPMOQWXQXXPMXGSPRZEYI");

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
    msg.setTimeStamp(0.9193754035979331);
    msg.setSource(29727U);
    msg.setSourceEntity(38U);
    msg.setDestination(38040U);
    msg.setDestinationEntity(254U);
    msg.req_id = 2966U;
    msg.destination.assign("BTAJYOYYAQXFQYZGBAKMYTQVEFLWICSRAVNIEEZPKMSMFXZVPCVNIMUSTVPBWEPGSNXGUNGAXETJVSRNLRMTREHQTPQVSGPSTSBLKGKJJBOLFOGOGPWXMFHYWOACLJYIJEHBMEDAFOHRIZHZMDLHJDQKKQLRZJOATJDCNJCDRRUAIQLYWCQVPHRIUXUDDESHNVFZIUHNGGKRBONVXUYYSQWDZCBFWXWNICCBLFHCO");
    msg.timeout = 0.053915808092183104;
    msg.sms_text.assign("OTMXJGKBFWNELPRGQOPQACGRYVZVUYYKEGGWDQRXXNOQGTIKLCDELDEKWIFMRCDUJKSNZFODLPVFNSIFBWVKFEWDHVJUJAUPAAUFBMZUSNROHKNYQEKPJXQHZEXTMENGJBOKDPAADGUACPOTROIVSMWHHIUEWUSMXLHHBWFTMBRHTZMYIZJLPXICLVSEYOSIVQRBFNRNVWJZGLTXSXYAPGV");

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
    msg.setTimeStamp(0.618980433296193);
    msg.setSource(21148U);
    msg.setSourceEntity(14U);
    msg.setDestination(27824U);
    msg.setDestinationEntity(214U);
    msg.req_id = 54139U;
    msg.destination.assign("YYOGCKLAHUOQCBFLNDXWNCBHRKMMDCEEGBEPILQZNASXTLSOUPYIBYOYUNJSAMPZVWEVNGPWRFRALCAHCOZIKZEWJCMIKRGYMBWYSTJWEHIHLPUDQJOPWGTOWJDSVJXIHFGTEWCEQSAKQPJRAFTXRFXBKCSSTSKFWYPYZVULNJAFQQZMDAXULFIHVTQHBVDODUMLOXQPDJAXJGPIVMNZXIMZTMUGFVOZKHGTVE");
    msg.timeout = 0.064976529311912;
    msg.sms_text.assign("OTBRZIPBNAPJNHYMRXWLQCEHXRIVGDKTGWCYDHICKHVFVMYAOMQIXIUOZLOHSFKDHOVOABNMBTYJTILEYGMCVEWDQAIBNBPHDTGSWFSCXXKTWSGZYXNFOLDUSUIIGLGFLMKFURGONDTNMURZVIDWJACGKFTAEUSQNHNDWXEQFRKCTEOVLCPBJFWPRQAQLBYCXZMJPZUBWZZUDYVUPYMPJGPJHQRJJEXRZBKNFCSEVUTQVA");

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
    msg.setTimeStamp(0.5538629112058094);
    msg.setSource(52297U);
    msg.setSourceEntity(205U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(170U);
    msg.req_id = 43350U;
    msg.status = 212U;
    msg.info.assign("EARSJDKZNMEIANWBBOUZTZWRZBVYPHKBOSNBGAUFZIJOCRCAXYQGKYODLPHQDNWAHHGGHFJIPMSDBDTGQOJFBZEPXKRMPFRWLKDXFNVCDUZVJNIXRQFUFCTIHWSOSIPPUTMUAQSCNYRTAXTAHCHTYVWAYKCMRGDFQVLFOGLSWKIZTEVWQPVMMOZRLLLMXNMSHULOPCDUJXSELPVEGEJKJFWQGTKIYNISQJUALVCRVXQBYJKYXEZ");

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
    msg.setTimeStamp(0.8408525549940847);
    msg.setSource(20030U);
    msg.setSourceEntity(32U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(47U);
    msg.req_id = 7843U;
    msg.status = 58U;
    msg.info.assign("DCQBHXRAHFTNZPNSPJZEUTOMGUXXQTPCLNHWCRGERWHRBYNJXBGMUJWXLMOPHMZGIVVARDUWIZPTASGIMTTMCQVYOHESUQRMPGBLCPEZNMZBEXFBYKDAKCKYWTFJYGUHISUIQVLFORS");

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
    msg.setTimeStamp(0.5123363711315324);
    msg.setSource(61519U);
    msg.setSourceEntity(239U);
    msg.setDestination(59421U);
    msg.setDestinationEntity(218U);
    msg.req_id = 37029U;
    msg.status = 14U;
    msg.info.assign("BQZSFTZBFCHQFEYBXYFDUTPDLWUDKYJNMCAGROIQWPGMHRIWQCTHVGJMQRIONVWZHGAKYLTQIOLVGEOVCJBUBWMZDHHWBXUIMADPXPKLKAFESDSHQNQKHMFEOSBFTLLCLEXBTMEMFTPLURHVCUWNAAIRDPJXYKEOUIUVQYSJXZGVRINJVFPOZVNOZRLOMWSYPLYWJTSSBEFIDGAXGAXSCKYTAKUZZGTXNCVCKDSW");

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
    msg.setTimeStamp(0.26757189145668037);
    msg.setSource(21616U);
    msg.setSourceEntity(208U);
    msg.setDestination(42382U);
    msg.setDestinationEntity(78U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.45205720456506404);
    msg.setSource(1383U);
    msg.setSourceEntity(246U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(179U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.4408016639789798);
    msg.setSource(61925U);
    msg.setSourceEntity(243U);
    msg.setDestination(39564U);
    msg.setDestinationEntity(23U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.13202641037853313);
    msg.setSource(14207U);
    msg.setSourceEntity(19U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(83U);
    msg.state = 87U;

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
    msg.setTimeStamp(0.19415839067527052);
    msg.setSource(37967U);
    msg.setSourceEntity(226U);
    msg.setDestination(21333U);
    msg.setDestinationEntity(124U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.36201442700198416);
    msg.setSource(7762U);
    msg.setSourceEntity(188U);
    msg.setDestination(48780U);
    msg.setDestinationEntity(220U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.38563859038732384);
    msg.setSource(30221U);
    msg.setSourceEntity(109U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(165U);
    msg.req_id = 28660U;
    msg.destination.assign("AWGEHVNLJHHBDWUPBOMKSWJMVBZIAUTEB");
    msg.timeout = 0.49495019693977826;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.9749910140907592;
    tmp_msg_0.lon = 0.9804860123925534;
    tmp_msg_0.z = 0.7292957265138363;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.7503612892045569;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.abort_z = 0.5454980559344548;
    tmp_msg_0.bearing = 0.08695825942607793;
    tmp_msg_0.glide_slope = 111U;
    tmp_msg_0.glide_slope_alt = 0.16920883387132735;
    tmp_msg_0.custom.assign("MIEEPJOEYGDBMKVITQBDZBJEXFFCUJAICKKYYNCWSVJUHTCFPEIZQVZJMMATLDHCQEUTGSRRCBHKOFIGGWLSJNZDFOAKLSOOWYDRRSRWXHZQNVKNYEPKGQQAQOJDMNROUUIIRFGTGRSDSMBJPVGJLYTXZLNLKFEBSZITYPAUIUDWXEWSRHOQLHVOLNUFT");
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
    msg.setTimeStamp(0.8134312517826252);
    msg.setSource(30888U);
    msg.setSourceEntity(44U);
    msg.setDestination(38042U);
    msg.setDestinationEntity(79U);
    msg.req_id = 21209U;
    msg.destination.assign("KZCVUEEISONDHBGSYJCWFMDPNFNMYIZFDXYLNQCSUXBBOWPWCHGRRTBHVETAHRKBYIEJKIFQRHYHKHRCZJLFBPFUAPAZGSOJOMMPGIKTOBQXDKIUSLBNPTIYLVYRRZHYGUJKLOVUWUOEVLMOMNGNAPQGBODPKTLXNZZQHIRTCQARTNTMCELDAJPKFWQCVGUEWMEQQATWXP");
    msg.timeout = 0.272698777321999;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.9351283283829802;
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
    msg.setTimeStamp(0.6376930097554399);
    msg.setSource(44105U);
    msg.setSourceEntity(43U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(79U);
    msg.req_id = 25519U;
    msg.destination.assign("RNPPWPTZDEMWEUTISYMTEHVTZJ");
    msg.timeout = 0.1303603959862294;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.015534703864197641;
    tmp_msg_0.lon = 0.35788478412015057;
    tmp_msg_0.depth = 15U;
    tmp_msg_0.speed = 0.8442276636854839;
    tmp_msg_0.psi = 0.6670143576274516;
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
    msg.setTimeStamp(0.7042460949600556);
    msg.setSource(1907U);
    msg.setSourceEntity(136U);
    msg.setDestination(35427U);
    msg.setDestinationEntity(60U);
    msg.req_id = 39754U;
    msg.status = 129U;
    msg.info.assign("MALXRDTURIIPYREDWOZAHWZDRALOPQGRHZMNSXLSBYMXSVZWCAJKSVNIBSLQFSZXFMCGCEURYPMNOSUGWOLONVCTHEJXPVYPLCQBPTOVFUECKDIVHXKFJZRYCMHBJEPNILWFNKENBQBSCOFSETNWOKCKWJQKZVFNGAZQDTEYDHUTBPHTVIAQDUWOTHIEJEDRGVWFJKYMCKFQDIBZYBNMUYRXULTAHXGSJKDTPMPLAUFOGGHAIVGIX");

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
    msg.setTimeStamp(0.3172908410360977);
    msg.setSource(4985U);
    msg.setSourceEntity(60U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(72U);
    msg.req_id = 59865U;
    msg.status = 228U;
    msg.info.assign("JMEVAVLXGWVSNCQTDLIQGUFLKMBYJQSJEDHBNFYCDZUTGCDZBUPATPJHZYDSSUJEGRTBXOXKIRNRPBSZTZOJKYSZPNSPXMOOKMEUEJEOUFXFWNWWMHWRGSWKZIIRDVZIBYKGKFTXUOBYAQSOPCKLLEVGQTQIPAWAONXQVCNRLNFHJXAWGJICVTEMHYZAEUYELDMUPAVXBFFOQCHVCBKYFXDUYHHRTLCAJAMWPZL");

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
    msg.setTimeStamp(0.29035466528359766);
    msg.setSource(62771U);
    msg.setSourceEntity(111U);
    msg.setDestination(38115U);
    msg.setDestinationEntity(156U);
    msg.req_id = 8893U;
    msg.status = 99U;
    msg.info.assign("PELFZAWMFPUVLZDUITIFFAKHCEKLDXXRKTICFTGHQJGUGBYXQPPAMEIPFYKUAOTLAVSOVAOIBZPXVSQDZWLQNFEQMXVNFRUPHLNLOIYVRASNTDQDSGMUSHKVNREHJZWHPTCKGWCXCWXYJCKOJOKEOCRURSWBTLNTD");

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
    msg.setTimeStamp(0.10310124826749567);
    msg.setSource(64291U);
    msg.setSourceEntity(199U);
    msg.setDestination(56432U);
    msg.setDestinationEntity(241U);
    msg.name.assign("ZJTCLFRGWQBJYUZXZJJYSPITKTKNAFLUCCUINKHBHDLIPAEOZTHVQCQDAKKVHYURZRGPLWTEHYXURIVMHCABMYBNCEFOPHLYAPADDFQNZGQG");
    msg.report_time = 0.18456449111486972;
    msg.medium = 18U;
    msg.lat = 0.13589543005013194;
    msg.lon = 0.16006479938793072;
    msg.depth = 0.2998923713255831;
    msg.alt = 0.005108811506678856;
    msg.sog = 0.5966361830253044;
    msg.cog = 0.8512645674708189;

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
    msg.setTimeStamp(0.35139382104739036);
    msg.setSource(16100U);
    msg.setSourceEntity(181U);
    msg.setDestination(27475U);
    msg.setDestinationEntity(136U);
    msg.name.assign("JKLXTSIOIGPWLHOYZLMLYCXDJJQPHRIANDRUDLMUGIDPUVEBOZEHXXTKBZKKMAJWUDCEBJGMHZWNFWASSAHLCQVBXGRVLNVAPZVOWKWPQQGEWFMCYPNBCRGDCSJSXKBTZDV");
    msg.report_time = 0.8317906286725864;
    msg.medium = 24U;
    msg.lat = 0.008816825686596808;
    msg.lon = 0.5871157198175248;
    msg.depth = 0.007745801694159615;
    msg.alt = 0.06003387388827108;
    msg.sog = 0.8254910591531123;
    msg.cog = 0.9042509852155096;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 226U;
    tmp_msg_0.plan_id.assign("GLJXLTSPFPTSBEPAEHZUZOAINZMDSJSEFMIVFNKUSRCKYJDSUJMOXMTUAYIHHNCXXWAOSPZLABHHQHWLDYDHSAMYIOIEPSFVYAWMNRIZEXPWARUGKQDBFDRKEXTIMGKOBEPQQLPNEQAVKVNVLPNMDDABOJOSCDHXXULGTNROWZBUZLLWRXFUYMEWGCQVRBTQPVCCTLTZO");
    tmp_msg_0.comm_level = 70U;
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
    msg.setTimeStamp(0.5976348009790033);
    msg.setSource(45979U);
    msg.setSourceEntity(229U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(93U);
    msg.name.assign("TNFFUNVBBUJSOOXIILPFOJHGYSUJVBXAPVDSDGFLQVKUSNEPSZSYUPWLWRCQDCMMYXZGBFNUKIXTXHGSWXVRPNMEYOZLVGLHAHAIZSUXQEDGIYXKDQMDMEQPWRWBGKCRBAFUIBXRATDLAYKHBWOZOPIJKCSHJXFMCOUOBNNMMNEAJDRQTOZKYWECTCVLIUGKIPZSGVLEKPA");
    msg.report_time = 0.028200770411264675;
    msg.medium = 24U;
    msg.lat = 0.020996746154644863;
    msg.lon = 0.3036648657926647;
    msg.depth = 0.6021313700200668;
    msg.alt = 0.5200640739021404;
    msg.sog = 0.9099060186547882;
    msg.cog = 0.8532222262784556;

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
    msg.setTimeStamp(0.46006376906549185);
    msg.setSource(58635U);
    msg.setSourceEntity(121U);
    msg.setDestination(62724U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.021368476713630846);
    msg.setSource(59487U);
    msg.setSourceEntity(66U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.31078497996413834);
    msg.setSource(15101U);
    msg.setSourceEntity(9U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.8914664345343127);
    msg.setSource(12172U);
    msg.setSourceEntity(149U);
    msg.setDestination(55476U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("LGIBFMAGOFHGLFHZOFQAUPUDIISOOEDAYANFRMEHQCUVKVRNXZMJPWLCSQOERQBZCSPHULAKXVECIASEJISOPX");
    msg.description.assign("SZLUBTAWOAVRWGXIODJUXKFMNEAMQKYLK");
    msg.vnamespace.assign("JHMUSMYAYNWXJDGETGNPCTJKEHGFSAYOTGGOXRHEQPBXVRMMIJSWEDWSDFQZBZKHABZYUHQLWSYWRGOCWRVHREIFDCNOKIUYPTBLNCLXWLZWFZOIBWGGPYPZOMHPPLEBOSRUEMKHMLQCCLOITEBCZUDCVDMXAXTSUZGJSDIQUANTVTBZWEPJIQSZKUNNLAKVEFCMRXAJAMVTDTJNXPHIDUNYVYXDOAQRUPQLORKKVFQLFIBVISRYFHJXAKKFGN");
    msg.start_man_id.assign("MFPLYQEKDRHJWIHTJNVOYQOUYZHMPCJZIWGGSPZUSNRZWUYVWAKHUGWFEAXQTUPMKZIQIEXEBZXFCKQYQOGHFHDBKNBEXSATBPMJJBDMAXLJVVORRQEH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OFMHSIKXBXQXGNKAOUSTOREUCGPVJDYRVYCKSFXWRNMM");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0613197483018425;
    tmp_tmp_msg_0_0.lon = 0.02025305865930105;
    tmp_tmp_msg_0_0.speed = 0.28126745404476716;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.limits = 120U;
    tmp_tmp_msg_0_0.max_depth = 0.8100078767588063;
    tmp_tmp_msg_0_0.min_alt = 0.6157882537099909;
    tmp_tmp_msg_0_0.time_limit = 0.5123798130208217;
    tmp_tmp_msg_0_0.controller.assign("QZOMNDROTQISJYFVTFIWKQUFAOOBNIMJGSHQDWVBMAYNHMLEVBFJLFEPRFKXSOCUKROIDTOGVWYJXBLNRKGGVCNBXXGSQESBGLVZHAGUMYZLIAOCKHTQ");
    tmp_tmp_msg_0_0.custom.assign("OYIEBLRSVVNTPHNUMXLTATHGVJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TransmissionRequest tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 45429U;
    tmp_tmp_msg_0_1.comm_mean = 48U;
    tmp_tmp_msg_0_1.destination.assign("UZNIPIWTKGOLSFIIAXRYJPLNQONRMTUUAABOYVDRQHNVYFGPRMDZEAGJJRUWICWNPGGKJAONBQPXLZFBQSLXSSBXHLWUBYGKKMFKDRTCQXJDFHPKUIHENKJCOECTOBMXQSLZSDKQIGMWJNRPSWCPDOBAJCQSLTZHVJWNQVTZDCBUMLHFTZTRIPVLVCURIEWBKKQZEHXRXSCWODYHPXVBMMMSFLUTVGGEHYEXTEZWYYNJAEVVHIFGDZYDOAU");
    tmp_tmp_msg_0_1.deadline = 0.33532306121115285;
    tmp_tmp_msg_0_1.range = 0.09974746291572534;
    tmp_tmp_msg_0_1.data_mode = 236U;
    IMC::SessionSubscription tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.sessid = 293613916U;
    tmp_tmp_tmp_msg_0_1_0.messages.assign("ZJXSXTGZQISLKKXSGRPQBZLUHNZRZKNIBFCDLSQVDOFIWVVXSEMBJAPHGEKTNCUEYACXUPFCWPRGURZQFKNOEQBCXIWVYMHTPDCIAVOLVFOCQBTAYTSWSJTJIYGJKNHJVXORCEAEMIMATVBLHMBMGPUNDLOACLKEQAYBEMWTIELDOMRDBTFYZGKDUIJHHPGDRCPJANFYJDURZHEWUOQTNAFRGK");
    tmp_tmp_msg_0_1.msg_data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.txt_data.assign("ZDAHZIPNDUMYNZEIXRVQGATHYJKQGAEBQUVJHCCBQHUAFTZMN");
    const signed char tmp_tmp_tmp_msg_0_1_1[] = {-66, 44, 69, 15, 118, 2, 112, 3, -72, 80, 123, 28, 92, -16, -90, -56, 23, 27, -55, 43, -12, 27, 116, 45, -33, 84, 78, -40, -34, 94, -24, 90, 27, 50, 50, 114, 35, -93, -94, 9, 52, 64, -17, 10, 26, -65, 126, -79, -82, 109, -122, -121, 96, -81, 54, 64, 51, 20, 8, -53, 78, -54, 122, 98, -111, -96, 2, -40, 1, 99, -5, 99, -52, -21, 41, 116, 98, -26, 109, -104, -44, 59, 90, 121, 12, 80, -63, -5, -3, -12, 7, 86, -73, -53, 31, -71, 120, -14, -49, -53, 52, 27, -28, -37, -54, -102, 35, -32, 41, -8, -85, -70, -22, -56, 2, -71, -93, -56, -4, 42, 83, -33, 87, 64, -94, 53, -108, 116, -2, -96, 54, 86, 48, 68, -65, -100, -89, -37, 29, 55, 100, -85};
    tmp_tmp_msg_0_1.raw_data.assign(tmp_tmp_tmp_msg_0_1_1, tmp_tmp_tmp_msg_0_1_1 + sizeof(tmp_tmp_tmp_msg_0_1_1));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("DGXZAFWNCXPMHKUFZROIAWSCKYJZRSBZNQCVQCEFXBMA");
    tmp_msg_1.dest_man.assign("IEGZFEPJNBMQQRFYATFVIMJSSKEFDQHQJIWFHEHFBUBNJIDMFITGHTDAJRHYKMTCVPQLRCBZHVGRLHGXLQPIJKNCUVMBWNKYXSUVSOTINFCOAUHWGGKXGTMWCVQMJOH");
    tmp_msg_1.conditions.assign("TMAWHKQBKTQOFIPRUDNDWQSZJEATIGOKCXPZFSOZXCJULOBRMIHLCRQTSQDIDDPDPVQBCFRNAEPISYEUVVGKVLHGBWIWZV");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 37608U;
    tmp_tmp_msg_1_0.lat = 0.5535986147281158;
    tmp_tmp_msg_1_0.lon = 0.06873211359765741;
    tmp_tmp_msg_1_0.z = 0.12071187401189953;
    tmp_tmp_msg_1_0.z_units = 36U;
    tmp_tmp_msg_1_0.speed = 0.3045933464727464;
    tmp_tmp_msg_1_0.speed_units = 158U;
    tmp_tmp_msg_1_0.duration = 16972U;
    tmp_tmp_msg_1_0.radius = 0.7177945145203279;
    tmp_tmp_msg_1_0.flags = 56U;
    tmp_tmp_msg_1_0.custom.assign("VGFXGGLFBNLQUPXLPMUDPNRJATGSCQNGOBVBALUGCDFJHDKZXOHKFAQFNAPIYTWZSJYQWJTCQYNSSVABOUUDWIUQDRRXYVSHDBGEWYSFMIWIUPGRMTPHCNOOKCZEFZYAPLVMLTEXJXBRSMQYVLVOLHDIPUXVWCYIGRKXXVBKZOWSNWZNJCUBNQABZBSXFKIMPEOCEMTJFOPR");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5193462758247059);
    msg.setSource(45744U);
    msg.setSourceEntity(34U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("DZEKPBSOPBGLGAMFAEXLXWSTNVSHVENXTOPCGBXQWGVLJSTRTAMOQPUVOBFWEQXLVJNFCAGZKFKJODZHJLKELDZSUWILEYAHUZICPOWTOAFRJKPYCBTBIEQXXDAGNDRYQUODQ");
    msg.description.assign("MSZAYVZDQHEDXKWDKSEFIXLPBURYCXQMMEQVLENHKCCIPRJDKBQWUXGILQSDTBSMKPNGHPESWUEZVGBZYKJKOAENWPPULVPVZMRYATOKFTXJZHJHXYBAFLYOBMFNQRURYFUUIRPGLQJSTYIUABZDNWDMALFGUJISEXIWGWOCCTIGAPCGVGTBTDLENYYAVJDVXFWXJHWLCCAFQPNUHMTVTDISWSL");
    msg.vnamespace.assign("MFOLTKNVVEMWFFTSANNZBDXODZJSKLEWCYJELVKWRQPFFMJJLDYQFFSUHPZJLJRAQQXIVIVIUEIBOCWNXMNFMBPFGCVSQWRPINTOUASSGABTWIACLPRECBFWYRLJJKQOXGNIAZTAZRDORDYULSDXKRKGXBYNUCZJXVETPHLOTPRHQBVXYXOGSKNESXDBHAZMHGPKCQHDTZDVWSDBKQYTHUCMMU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XWYDUOJFCAGDVRDBNOULHAVRUWAWXHFOTCIELJQGKGPHNRFLICEDZISRNHCMHSREBHQSLKFAQPYXUYPGOVAYKTGIOLEMWVCQWFWSYKEEIOOFXSIZZBCIBUUQZMMXTVCVZCTMDLBTICDTKPJRXFSHRFJDRKMHNBSZUOWNUGNEWPBKJNNYSLMYVPXFNGLJIRQEXZDAJBNWTMZBKEEAIMWZKSVQABUCPPPQYGTJLXRZTOVMKQ");
    tmp_msg_0.value.assign("FPIVFBPJUTRMDHZLEJCOJVPYTUIPJWTTDBVFRMRYVXNBSKXWIIAUPINEXSWONDTBGLWMMOCHBCNAVAVKQLZREPDFAYUQIVISGYKNMZNDGTXZLHUUZXPCXUFUZWOGIEQENHHKJFUQZLQSIYWHAOTJNGMHWDJDDERFVLQOMCQLCHSHMBFRZXSAAACXSOKAFYNEETLESGQPLEJXKKODVBCGSCAQHNRFKYVWRIOYQKDRMCOTPZUZGXLGJSGWJWRPBT");
    tmp_msg_0.type = 254U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JCYROBNHIQTLWXIYDUYCOGBQXIRSOQAXQNUMZDBRYHKDEBFVSGFAWDCPQRHJIRMFPZKUTOEXUUVCJNHVSTCRJMKBHEQYNPIQILNGWMZEPABNMJAZTBLZWGGLHAPSYGROQODVXNSEFLNRFNGTWPLTCJAPUQRULFXKAFUAISLIXYRYZISDCJKXVPFNQCJUTJDLTXKO");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PCWBOKQSZNGYCXLVDLJNBPVMULUOTGAPDQMYYQWURYKIFQAIWYQFTAGZPDWFXEKUEEXYOOUJZFABICGPXVOYCGIATMWLZOAHVKHKBMFZRVEIROOVHPWJFDWPHSNJLKDJKOGHYERCULNAYSINRZQXTIGTZZBEUUSVTFMLLBNQOTIMMPDNYWETGXDEQC");
    tmp_msg_1.dest_man.assign("EGCWWPTGXLNAKCGXIEZZOMFNXKBJLVKISORXJRIUNIBFUZTDYYDKDNBHPIAXMZ");
    tmp_msg_1.conditions.assign("WVGZLSYMIDICTFRLUJO");
    IMC::ApmStatus tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.severity = 143U;
    tmp_tmp_msg_1_0.text.assign("GMMOIWTNPSVIWGFRRHVEZBGBPZBBHDNZLVSBUTLXXGXJAKTKRYTJHABPNVYNMMINDENKNSVRCPBZXUDEFNGMVXCRVMEWGPLMYULXTQHHCCRNIJLZSFRFRXWGLIAAGKZDFRONALKXYUAQACHHZTWWOCPEKUVOOOSUFQDDCHIJQUZJGQPBUYPIAFYEZETGQITLXWLSYXWKWKLSOOYACUPFTBQQOP");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Current tmp_msg_2;
    tmp_msg_2.value = 0.487734024728381;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CpuUsage tmp_msg_3;
    tmp_msg_3.value = 202U;
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
    msg.setTimeStamp(0.6646985373038453);
    msg.setSource(54029U);
    msg.setSourceEntity(97U);
    msg.setDestination(13745U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("JPFWEQVXEHKIZIBXPEZEDTCYYAYARQAIHMYLTFRVSQFAVYSHUBQGJMKIHRMPBKDNFKLCZFDTJWNACETHIKALELOVZWEUPXIHUWXBCFHDSRSKACOBWGTBCIZFJFKSMBSSMGVLHNBMRJCVYPJXBUPTNPUBTROFRMYUEDCLEZIXAN");
    msg.description.assign("WROHJVXZKFHCEAQBDCOSRWMNMFHUQSXUPEWWCDQGKRSNVFXQUWYVWLSNQBXBKNETXWZZOKEV");
    msg.vnamespace.assign("UJKNFHVIQJSGDCMXEVCBUUYWMOUGMMIQSNRQDDIMYRVXWCYUBILPGDLEVNCZJDRBLSHVSBLAFKNJCRSLTIYTHBHROEDDKREOUAPXQEKTMOAJTHPHSVSNWVTOARKZJXTQEWWDGBZENWQVUALJNAAXPHLCQGBRPJTVJNZQVKPZGGMLTBCCJKWICXZFWYFKFAP");
    msg.start_man_id.assign("RHSHLEZAZADMAMJPKEKGTRIYZXBXCEUVMEOGFSKQOMUBC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NTEPVTHDLWKMFYIKDJPJRCFUORQYBUVDXHSVCRNHCEHMWFIHZXMBBQSHFYGKZKZBETBBOHJVLENZJBPGCHTLJOKGCDIDIIEQDKAIWZUXGDMDGANFQXWZSTCRYGQKFREXHNOOATMIGEZKSIASSZPWMQUAVEUFVSQYTYPTKOPAWBMPUXJWFAFLGYHPRSNTNALAPMVWBJKOVBATQLMICLNRFUCRLCDLEOOERSYWXWYLQUINNPQX");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 453786641U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.02064567163326514;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.026985723256160776;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.4772737784357042;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 83U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.9747403153848343;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.3461362950688325;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.9230955913294573;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 70U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.14637243695324686;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 55U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.25398929392090397;
    tmp_tmp_tmp_msg_0_0_0.flags = 98U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 43670U;
    tmp_tmp_msg_0_0.custom.assign("JTHXSTMEYQBYMLPSNYANCEFJKPBMJRJHMZAHSFDIVJVUZLSFTPERWAIOHKPAYTGCFNFKVYHJUYIQJZEXGIMULGNUOBURXDORLPSZZRFHVAMOZWDLDGLZHTFAIQEUJKHWGIYXQKESGVVTADBFQGUZPFESNHCRAQICUGMMLWJASBWPWODKXOLXPYXTPSEIO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EENVZWXCJZKBWWHXZMBUYLQFVUDHLTIOCKBMCFRVQPCNPWYTWMMYOIVRDRSQXAOJFELAYNLGNGEUVUAOCSQLMGWVSABBHSAWQUSXHPTORKTJFAWPVNRDONYXFFQFKLJXJNHISIKDLCWCLKIVZLPMIQVWUGCVIGMUCRGAXDHTJNZOYTRHOGQUEPUIXSQMDFPPTFJBEDKIGHHGBAGMAZSCJXEUTSEOYFIHYEMOZDNRRKAZNPTBZQBTSJYBKDZYED");
    tmp_msg_1.dest_man.assign("HBAVJMOXRCZUMZXKKJVTOICQPMROLHMSPBYBEVLYIEMGCQPSSGDYPYANZIXBHUNXSXAJVYWGOLFBLKFPDDRAYFQMFOZWTUZTHCYTROUIQHKGCMRKRTHPVXTVRUYNLLIASEIGPOUHYWLDFSUGOFENNMNWEBZGHYESUKTCJ");
    tmp_msg_1.conditions.assign("KAMIWWEWBVSRCGJOGKIMJMZYGAQHEGSRZJJSEASHGDOFKSJYFUQCRLZIKPBOGUGWPMICHNGCQVDUDMYAMDTVYPQXNRUUUEDRNFXOETGXQABMDLMIJOVKBAPWFWCZTEMXYPJBUWLVZPZOAYPNUVHPXTJBOHEZNLQRENBTZYVFZARKPILHLCSBRDGESVIOHQTNWUXLYNDTBAXNBFJKRQCNSTUFLR");
    msg.transitions.push_back(tmp_msg_1);
    IMC::EulerAnglesDelta tmp_msg_2;
    tmp_msg_2.time = 0.5919758856231533;
    tmp_msg_2.x = 0.9741015174694242;
    tmp_msg_2.y = 0.22134682906617542;
    tmp_msg_2.z = 0.7624567918120537;
    tmp_msg_2.timestep = 0.9108890443050023;
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
    msg.setTimeStamp(0.3699046369229897);
    msg.setSource(52906U);
    msg.setSourceEntity(15U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(190U);
    msg.maneuver_id.assign("YQBRFZOWIPGENXXSPPHCQLVSVALODUEXNVMJHTWSVUYISDQLVQPXDCIJBLUTKJJFAXXXKAULUC");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 30634U;
    tmp_msg_0.lat = 0.8293084124510935;
    tmp_msg_0.lon = 0.05507094111087307;
    tmp_msg_0.z = 0.1600337770970094;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.2972222793414887;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.custom.assign("GOPNFOIAADAKYLMFXTVXPPPBIDVYWHUJLTSNAJLZPTLYTVJK");
    msg.data.set(tmp_msg_0);
    IMC::VerticalProfile tmp_msg_1;
    tmp_msg_1.parameter = 146U;
    tmp_msg_1.numsamples = 198U;
    IMC::ProfileSample tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.depth = 7683U;
    tmp_tmp_msg_1_0.avg = 0.41824668838826895;
    tmp_msg_1.samples.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.lat = 0.5632907346081555;
    tmp_msg_1.lon = 0.7321847045996386;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LogBookControl tmp_msg_2;
    tmp_msg_2.command = 99U;
    tmp_msg_2.htime = 0.8349145580679265;
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
    msg.setTimeStamp(0.08241881173415244);
    msg.setSource(19939U);
    msg.setSourceEntity(152U);
    msg.setDestination(5353U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("CNJPFDEUFQKANSIUXPYOQZHSRMPLQWQMXJNDBIESGOJIFANIZWNGTNZUQBTSDXLBQRNYOWZKFDUGAVKCAKAKHTXUZCQZVCLOLLVQISVBVBFYNJJTXHWWJQHJOLKOTSXTVGFKSNYAZFDMGRIQYDOOXWTKEMBYPMUZKVWVCEGMXWLVMARBYMFJGLJWETHDMHGFPXUP");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.5603071219393373;
    tmp_msg_0.lon = 0.571810177248661;
    tmp_msg_0.z = 0.8151069263858657;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.radius = 0.5499399541237214;
    tmp_msg_0.duration = 8970U;
    tmp_msg_0.speed = 0.6005346230921236;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.popup_period = 35664U;
    tmp_msg_0.popup_duration = 30844U;
    tmp_msg_0.flags = 7U;
    tmp_msg_0.custom.assign("FXGFVNMOSKNDGMYAVROLSKAUKCJLXIRCWLNVGSCMUYRNHUNEGXMDJUQPCJREFMZTALGTICVCLCYXOHEQWWOEEMCRBNDJQNVZSAVKWOFFXXPWRDZVJPGYURNSHETBDNIVPXZOLHXSJFMQGJUVISJLOACYGRDETSYKDIYOPZPQABSFMIIAECWTYLQTZDTWHFQTHBXEHKWPHNFZJK");
    msg.data.set(tmp_msg_0);
    IMC::RelativeHumidity tmp_msg_1;
    tmp_msg_1.value = 0.10623577238697646;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevDataBinary tmp_msg_2;
    const signed char tmp_tmp_msg_2_0[] = {-109, -120, -43, 125, 58, -112, 30, 53, 106, -116, -78, -97, 45, 118, 16, 108, -93, 107, 54, -6, -14, -3, -87, -20, 87, 14, 71, -88, -26, 23, 30, 102, -13, 36, 44, 114, -79, 120, -71, 50, 85, 59, -90, 44, 28, -3, 23, -50, 74, -119, -61, 110, 115, -116, 100, 67, -73, -89, 104, -11, 11, 105, -82, 124, -92, -91, 24, -14, 50, 126, -69, -17, 101, 5, 97, -107, 116, 71, -26, -11, 102, 82, -65, -57, -87, -125, -95, -17, 103, 72, 103, 50, -3, 125, -13, 88, 116, 120, -3, 24, -107, -100, -119, 98, 80, 98, 81, 122, 89, -63, -86, 22, 121, -70, -55, -94, 43, 102, 105, -18, 66, -119, 11, -87, 100, -35, -15, 71, -126, -10, 111, 6, 66, 124, -96, 41, -31, -109, 14, 73, -6, -9, -25, -39, -128, -77, 55, -86, -41, 65, 64, 111, 66, 97, -98, -63, 8, 81, -17, -24, 54, -13, -89, -40, -10, 17, 39, 63};
    tmp_msg_2.value.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.45150767839441064);
    msg.setSource(33646U);
    msg.setSourceEntity(100U);
    msg.setDestination(9464U);
    msg.setDestinationEntity(215U);
    msg.maneuver_id.assign("QSAIPIPLXKGTGFCPPEAPXWNFPOUYKLAHLNVOMQUSFHRVTIPPNFTDCTEHOYECQIGTJFKXNRQHQJZFJIXBDAGMTMSZLSXCZAYJKZFIMMWNJQSOPDZOTVVBZNQWZKOOBHRXWAWRXIASLQJROVNEGREGTUXC");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 35908U;
    tmp_msg_0.lat = 0.28709783253900556;
    tmp_msg_0.lon = 0.4663368419551689;
    tmp_msg_0.z = 0.4052506905880171;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.pitch = 0.6936383651199914;
    tmp_msg_0.amplitude = 0.12695698608743122;
    tmp_msg_0.duration = 43705U;
    tmp_msg_0.speed = 0.34586781391355803;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.radius = 0.39607629470802275;
    tmp_msg_0.direction = 199U;
    tmp_msg_0.custom.assign("VUKTTYJZEDXQVIEZLZUVM");
    msg.data.set(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 12634U;
    tmp_msg_1.lat = 0.1609672366026611;
    tmp_msg_1.lon = 0.41137091445772545;
    tmp_msg_1.z = 0.9893236093835769;
    tmp_msg_1.z_units = 163U;
    tmp_msg_1.speed = 0.38174490782097326;
    tmp_msg_1.speed_units = 79U;
    tmp_msg_1.custom.assign("OTVPRSDBFRZYTAZYVILGHSAWDQFTQJJMQKEFPZAKNCDBXFOJSCRGKLUCTAPSMCVWPYSWUDGBYYECLZCOPHGDYMXBUDRUOUNPVMQIBADBUXNMFRBVZIAWJECQKAWPIQFQELKHHKNKBZIGTTVHMSYUVQLOHYNCSXWHCZOXEMTXFNRHFJDAOCAVSGOVWJU");
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
    msg.setTimeStamp(0.5416792753687045);
    msg.setSource(37110U);
    msg.setSourceEntity(128U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("XTWPJSDTXFYVTQMWQGTWXZZUVNIFZUUPVKTVHIIWNSEYCFCGGIRARBIDPDOMVRGAWDFAQRYMKEOSPPBOJHDPXVGHSASQUYGREFCOLCXBWLLUCDJDEUJIPYICMZYZQKDPVSGEQSOHVYFQBAWENNXEMHON");
    msg.dest_man.assign("CTSLSVWVTFTTRSNJ");
    msg.conditions.assign("EKNFZSSFCMIHILJTAYLTEKVBXBTLXFDNURZIUPJMXONBWIPTXMEGFBMWHUMQURGLXTHHEZCBAEWPUUGRXLNTLPBLUQJSYIEECZRJQZHSEWWODMKJYVVTCRLGKOPCVOPVSMICVGOIAWNKYWHMHAYFSRGDCJAPGNQEUYQXSAPGNMFDPTZYHYKIAIGBZMRLDDXABIKUDJWDDZKWRZHQNQCZXESKQVJ");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 183U;
    tmp_msg_0.frequency = 4119794327U;
    tmp_msg_0.min_range = 39054U;
    tmp_msg_0.max_range = 54321U;
    tmp_msg_0.bits_per_point = 140U;
    tmp_msg_0.scale_factor = 0.5462866351541273;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.5315114165847888;
    tmp_tmp_msg_0_0.beam_height = 0.1605434468275485;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const signed char tmp_tmp_msg_0_1[] = {69, -26, -30, -66, 118, 10, 7, -124, 46, -121, 21, -96, 121, 68, 7, -2, -61, 120, 123, -1, 59, -60, -21, 54, 6, 25, -71, -65, 110, -121, 45, -40, 58, -19, 113, 65, -24, 63, -115, -106, 91, -64, -17, 83, 100, -47, 101, 47, -15, -3, -67, 104, -11, -91, 10, -97, 63, 41, -57, -96, -34, 78, 58, -107, 44, 100, 67, -126, -58, -92, -87, 20, 124, -49, -65, 73, -26, 15, 25, -114, -122, -79, -92, -37, 123, 78, -69, -106, -26, 47, 48, -103, 102, 58, -39, 17, -75, -105, 122, -57, -31, -12, 73, -97, 68, -9, -97, 82, -106, -32, 93, -118, 46, -72, 3, -103, 105, 22, 96, -79, 45, -95, 21, 17, -61, 108, 38, 60, -49, 37, 40, -78, -18, 8, -62, 27, 114, 31, 48, 36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.28223236760640846);
    msg.setSource(40304U);
    msg.setSourceEntity(87U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("SVEOKIFFBESJQXLFIUHJDCWRAOLEVXPHXWUHPGCCAGDFPYDLCAGYBVBMRNFAYAQPJIRAVNETNBLKBRLKHJIQWUBDGBOKWMHPONCCGRKBXFVOWEJRCFOZIUEEWUPIXHHNIUOMWDLORJVSUWKIETDBNAVYGTQZSPYTMQBVZZJXTNSHPKM");
    msg.dest_man.assign("OMVHKXIARHFSOLXTRGJDJPOWUSFMDPZOMDWERMJHAKEWOFYIFXGSBDPFVBZVLJKT");
    msg.conditions.assign("JVZOPQTVSMWXLQBXEHYCVBDDBSBGZTIJYDYLXDNUTWEWAINFOEICEZNGPBIPLMZIOBHKZMMFHOJJIENLKVTWQXHCUHAWRMTPKBAINCYQJQWWPDGSCRRESXWQUHOUUFDXZYPRYLVJSEYVUDGNZKWVONIOUMGFDLQA");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 20475U;
    tmp_msg_0.lat = 0.4992994154688004;
    tmp_msg_0.lon = 0.5776010182246186;
    tmp_msg_0.z = 0.8424241421369931;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.speed = 0.8933422964131564;
    tmp_msg_0.speed_units = 194U;
    tmp_msg_0.syringe0 = 221U;
    tmp_msg_0.syringe1 = 111U;
    tmp_msg_0.syringe2 = 242U;
    tmp_msg_0.custom.assign("EGBTNBFXQACVRIMIAKFMZPOPEJCDLBXJFOGSTGXTWJIORRSLQNORUHJTNZVSARMCDYHCOLNGWREVDKKNIZPMXVAAFYXHEGP");
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
    msg.setTimeStamp(0.18955504994848682);
    msg.setSource(42098U);
    msg.setSourceEntity(57U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("FVCFNUNYCEFDONJYBHIZIDHWIGTICQPNMMLANQBOBEXWWJWWJZZPGDTQFSYEDZWLVCCKWRQUSLAZQJLRAGUZVYPERFDVOUFTNAHVJMAAUEABLQNUNCDJUESZLRNTHRPDASKYSWTYCZSMTMSIMIZMKXAKGXDJEMEKPVLXHCHHPGRTJQFKBHNUXBBYOOGJW");
    msg.dest_man.assign("QWSDLWICSZDPRXPVYGOKVCGIYYWTSWEXKOXYLJNOOCASVMFFDHHDBKW");
    msg.conditions.assign("MDQKCOYWPINDGDCCSAJMRCLWVIOBXTOQAIXIIGXDSERFOPAKUFFCRVXXGPOTIHFJSBRBGBMZYMLCMJEHNZZVVTZYSEFAULAECLSTGOUGIUKOPHHEGNEBWUFWPEXDFHVALMQFBYHFTUUYNKXZKAKJVVXNT");

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
    msg.setTimeStamp(0.09509980834793574);
    msg.setSource(2679U);
    msg.setSourceEntity(197U);
    msg.setDestination(8534U);
    msg.setDestinationEntity(197U);
    msg.command = 157U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HVIIPBKVFBQKALGEZUIGRNYHRQXGS");
    tmp_msg_0.description.assign("CBCXTRJOECLIEFSHPLVSJSSTSJWRTMJKXCPCAVBLUXHGLEIGYIBQWXAJAIYJEUWWBZBNLZURWDXFGMRGYIJAFOWTBFDBRJWCZNRKZERPGTRNYOEXAZHHMWQKLSNKHXMQAQEFLUPFEPYKJCYXGYMBKAYRQVVDHLUBINQQOIECMUNTMPGTOPYRAHXSBPKOUVJIOADZQOYLDUWCKAVZHSKS");
    tmp_msg_0.vnamespace.assign("GBUIMLFSYKTSMLRZLHPBLAJEMRHEYZMMZOYGORYWUJYUCNSFJHMUITDVFUTIMZEUDJGQKBOPZPUKZIGWRJQCQGDFQEYGKFWNJVKAZHADBAFGPWSCQBEMFCNKMHWFPLLVNQSKPUINIJKZODSNQAZRXBGPEVSSCWVJHXCASHHSNHPTNNDY");
    tmp_msg_0.start_man_id.assign("VMWXTWBUTTNKHRZKTHQEMIKYFNGWLJLWFNSBLTDFLIGVKFAMCYGMANRXFXLYRHTAQDPHYPGGVLFCMPNSJFEPZGAKRSQOOZPOBVHIEDAYAQSKWGXUJMCNRVLZXUBYYSNQQOXCBMZUVSQRBXVNOAUXTZCJWVLIIGFJZREBFKFUPSBPSJCTDEMUPSAKEJUTBQEPWGLVJSUCRAOJKWDQWXBPIDXRIIOEHCWLCDOOZYYMR");
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.681529734455557;
    tmp_tmp_msg_0_0.y = 0.9512071507429035;
    tmp_tmp_msg_0_0.z = 0.4436669165107463;
    tmp_tmp_msg_0_0.t = 0.26731469389687945;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::EntityParameter tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("PHCRGGBOCRRCYSDWTDOMAUKVPKJYIGBAIBZVIDJLKMPPEFHFOCMFWYTMPQRKWZNOIIQTAIZBXQFLJMUTLUBEUEHFAYOVPAGCENSND");
    tmp_tmp_msg_0_1.value.assign("CSJCBPJCAHTRUDDVGFRSUIISNTEOZXJZULTGUXNGLPFWMUFXVFQSFHVVXVRQPKNNPFKAMMLLXNTTJKWRGAVJNQUREJPFAAUNDGASSEQQKWEYQKWAWHKVBOLHZKOGNKZECGLYHIYWRPLYZGXBAUOXRHUBXMEDRPLHOBHMUBYACIROYVIIMSFPLJRBDWHTQBKGMFQOTIWJZDCCTCVINEPOZJOEFBYBXZSDHDKWMGNOXC");
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
    msg.setTimeStamp(0.006351429443338885);
    msg.setSource(43658U);
    msg.setSourceEntity(173U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(24U);
    msg.command = 251U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KFSFZHRDNLFAFEKEINPTUEMRTITJLVPYRGXLSCOGKOKZYVFNCAEZSFGBBXSEWZGSPLWMCWMOVRWJAQWGZVEQIYXIZXIAEFMDWNQURHKDYCMEEBVQZPPNVUJUKOFBJIZLGMYHKKXOPGDWHPXBBYTOJUANWGVLQJVPHDIRSCAUDGWZOCJNHRATSTQHQBOJSYQTUUAQKYLGIKIMMBCNYURJXBHYFLQDZ");
    tmp_msg_0.description.assign("GXRGOLUJHOWORSFU");
    tmp_msg_0.vnamespace.assign("RDZPZVAABMBUAHSRLSNYYKDGLNOJPPWFCCSIJPHAOQRWVMUILFTVVJAWUNQBDCTHYPAGJIAVXXQYLMMLPAILUDLHWMKJKKMOUVOAKJWNOHGRSYHCVZVGIEASPTFBKMQORTKCTQTSX");
    tmp_msg_0.start_man_id.assign("PZCRJMGKQQWUQKBGOTPGBAAXKKKNNUDDWPCLGJWTYATPJYGVXJRYHYFUMSCDMHYUBQKTYDVNMHLBOLSSFRSCQLHTIPPFHNICJNZRUKCBEEFFLOOWGEMBYJRZBYNNQXZWWLDEGVDSU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BUMGLFQSFCZGKZMJLSKGDWDIACGIFYNTQPSSTSFYNMIWERTPRLREVKXOYZYVQDPYUSVGUXRBPTUOGUBPHTJUDIRKZHLVBGJNXHUXCVLPBYDVOQTEFBMJOMCWCZWFQEFZCYOMLPCAOPKCPHRSFWIGQOXJCYWJKEZBKFIIAUYBVZSANDJMMRUGMVVHHXXJRA");
    IMC::Alignment tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 21345U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.07538263297829462;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8398993761766671;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.07525616281718128;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 10U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KVHPYMIZATDSBRUMJNMDSDHOACMTTWXIRQQGTHEAUZHXNTENMZRLUHXSYDPFQHAPSFTWNIVACGCLWKDBRZXFRPBJUNKQOVDHOUJNEFTPXBSQHCKOLRVVAKERERGGDMATVDNZQLNPSCQBYACOQPLCSPDUFAOGJMOFYEKIIFXXKCIMZYJBGHRWJQJMHUGFYZWKIYLWONJXVUVZOEWTBUGEEYQFG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HISUGNBLBVZBUQVYXOWMFTWAAOSHXBMRGOILQKMBZNXUCKFQKMJPBEIFGGSJWEGILYNJUNWBNETYUDSTMCAMUBDDHYZEFZCGSPAQWUOSFVHZPTRJEDVYODYAPWHCWEXXRSPHWLCTZCQLVVOSRGXDKPCQDJEFBAKIMNTKTIXZPORZNOXVYRZKAQU");
    tmp_tmp_msg_0_1.dest_man.assign("XLZTUVLIIFCWJSHLXQRLPFFCMBBPGYLGNRZEFHFSA");
    tmp_tmp_msg_0_1.conditions.assign("YUQGIUJQHKDTUJEHGRAAZQNCOIZNBWLBUEHZMYPTBCDBXWJGFPEZYWPXUEPYUEFKWZVBNGERCZIASOOXMHSLQMJGSCGONKDBWYUCVLLXQKAHDAXFBYVFPDKRLSCX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SetThrusterActuation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 164U;
    tmp_tmp_msg_0_2.value = 0.21791165263844237;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::ImageTxSettings tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.fps = 52U;
    tmp_tmp_msg_0_3.quality = 240U;
    tmp_tmp_msg_0_3.reps = 91U;
    tmp_tmp_msg_0_3.tsize = 238U;
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
    msg.setTimeStamp(0.8749143734208676);
    msg.setSource(17593U);
    msg.setSourceEntity(24U);
    msg.setDestination(59769U);
    msg.setDestinationEntity(109U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PARMTUZPSACUMUXTNAFEBVRUDXGQAPNEFJBICGCJZGVEPMOPJAKNYYMDKODNZYZEKVRBULQVMVNAAWH");
    tmp_msg_0.description.assign("KEFMXRRZBVBTJDSNTMQOYCRNKFCTRXVLFQJWQEQOJXLMVIYBRDUAXGAASXTJTVREVKLZU");
    tmp_msg_0.vnamespace.assign("CSNJJFNVLOWGCJVIWOTTSLYIPKKAAHBDMDIKMWAKUPQYOTFYCXO");
    tmp_msg_0.start_man_id.assign("ZYGFNGNBTWNDAKOAFBUPEVWRJOECBTYMLPTKIISIKEPGDUUSGEJIRSIQMLOCBVCSFVXHKNVFSHLUEZPAUAHQHFTHSWOMJJUS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JZECCPHCNOAPBRHESPZVMUUFZWQTEKYDGHYUZSDPHDAMVSQAADEKLNZGNCEVISSZHRPZBTRZXTOWINBUJGRDVJMTIOJVVSWCWWYLMVKCGQVBLAIKOJFQSKSTGULNSLNKAGYGQRXTBDFKUQCIIRUGIWQLOLFKZHTTFBPMXWPNGIWHJFLWZYRPEEGFRCMXUDANQMBDAMYPBFJEJAXXVKYRTKHXCYXVSEFNQBNOWHOHPOOMBXTDIJYOLJFQRUC");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 7608U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6809720949812604;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9968077245801371;
    tmp_tmp_tmp_msg_0_0_0.z = 0.41098954329068194;
    tmp_tmp_tmp_msg_0_0_0.z_units = 160U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5562834296233746;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 159U;
    tmp_tmp_tmp_msg_0_0_0.duration = 43765U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.24711028490961773;
    tmp_tmp_tmp_msg_0_0_0.flags = 35U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NGVISESMDQNNKFFK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CpuUsage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 12U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 43839U;
    tmp_tmp_msg_0_1.lat = 0.5082661424602877;
    tmp_tmp_msg_0_1.lon = 0.6127068024614643;
    tmp_tmp_msg_0_1.z = 0.9956157403849942;
    tmp_tmp_msg_0_1.z_units = 39U;
    tmp_tmp_msg_0_1.speed = 0.24712328782812343;
    tmp_tmp_msg_0_1.speed_units = 204U;
    tmp_tmp_msg_0_1.bearing = 0.8943724643936946;
    tmp_tmp_msg_0_1.cross_angle = 0.5408857675086436;
    tmp_tmp_msg_0_1.width = 0.9332404960568124;
    tmp_tmp_msg_0_1.length = 0.49988202760937994;
    tmp_tmp_msg_0_1.hstep = 0.29333179272430265;
    tmp_tmp_msg_0_1.coff = 240U;
    tmp_tmp_msg_0_1.alternation = 4U;
    tmp_tmp_msg_0_1.flags = 226U;
    tmp_tmp_msg_0_1.custom.assign("OAOAXQGPIXFNGSSVLDYZIRMTDVYEZANOFCRUHBJXULDMBIUHRXKMQGJTOGHEKNDN");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.184837513688209);
    msg.setSource(26441U);
    msg.setSourceEntity(166U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(166U);
    msg.state = 104U;
    msg.plan_id.assign("LPEEISDAXJLEAXWBLDZDCUVDGGLIOKYOPSNIGNOMOAKTRBNRCHRSBTDZTIEIAKAYHONORVDGJGVLUYNJHLCOXBTDWSTGWSZBSGZYPBXGXPQFWWKFJMWUBXTNOGFJUMQZDUWRPNTMJQHRXMSCKSRZMEVULLQQAZHABKJMVZILYMUEPVJCSONHKIZFIEEPFIYCTHNYUFRCDJVQKQKFABQANYEPCKPFHTXQFBICVRDVYMVHZJWOHL");
    msg.comm_level = 36U;

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
    msg.setTimeStamp(0.25043603880589116);
    msg.setSource(44160U);
    msg.setSourceEntity(20U);
    msg.setDestination(22028U);
    msg.setDestinationEntity(254U);
    msg.state = 55U;
    msg.plan_id.assign("CDMQLDGZMDJNJXXDPSQDYQUEMAIFRGZYQSOUGESRYRVMBLLUHCPYLTOIJJMMRLCGFKWWUAYTCDJBCOHYHLTDVUHIZWHOZFFQNAABXAZKOVALRDMAEKNPGNGJTRJZNQRJXOGCKZTWHSGKVZNCSTKSFXIALXYTNSZBWPZVOVEHXXPNTFMCUIEBXWBGKNQHEPEEQPQBFCPYOIVCKHVSBEPRGBLYLTNVIUDRKFWSTFPIMAQ");
    msg.comm_level = 115U;

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
    msg.setTimeStamp(0.5176555643700909);
    msg.setSource(49315U);
    msg.setSourceEntity(181U);
    msg.setDestination(33037U);
    msg.setDestinationEntity(154U);
    msg.state = 3U;
    msg.plan_id.assign("QNRBSIRCJBGFVFBIFYXOICYXCZJBOSQTHWRSXTFKPRMMLUQBDGCLFDKIYRZGQKFAVKXVDRIULVGZWHZLEIYAUGTOGEMLDLENUNDVHASPOXUQIKQQTZNVMYUIMRPLXXIXOTCWVZZDOZGJMBNREVCEZEYEPIOPUTFTALHBKBHJRJVWYSXCEUXTSOJGVWDNMASHMJBQYWOWWDPKWGKKEAQPFCMRSULTYPPUCMGNNQFDEZNJYHL");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.7429105558724116);
    msg.setSource(21932U);
    msg.setSourceEntity(114U);
    msg.setDestination(5435U);
    msg.setDestinationEntity(164U);
    msg.type = 91U;
    msg.op = 143U;
    msg.request_id = 39679U;
    msg.plan_id.assign("RPQUXCTCXMLBSPIPJVUDVOCCOLXGRHNRJNNGWEDONGEIYEBBJESJWWXUZNTPTICTLAUQQMHKNMCCYDYMZLIYOEERXSMHGWKZTVKHJDFNRJIIKCZQGEUMOZVFOGLVAASBPLWRZFXADDATIKJFKSZYPUOHFQAIQYFWLGBJVHKLCEAFYRVSJJVNKXZQZXPPUWBZDWTQW");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 3U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("IKRYLFNFNTCNSBIIXWOPEFHBFRIDFCKMZLRETZQOLUIBBPMNYWZQNUDCHSYWFESWCKTSRCHBQYUUKIUGYJRTEXYFOLTCHLWQTKONBOOAVRJVKJDXMABMTWOPGBRGRYAJWQEHMTSDOTCMEZSLUVVEADQQCDMZIJYPHLXCVRNEFKWVZGNAJP");
    tmp_tmp_msg_0_0.description.assign("APEGRMODBDEGTXMKPEKHLSDEFYZKJJQGTFBNAMDRQSCVMRCEZOFICJYWIGQSMPCIGVKSGLNWXDTJLBKARXLOQCPEZKIZWKHXTYVARJWUYPRJOOHJWQMVPIQGCIACBCUYYFVTSNWSLNATUXFIKZLBZMRDGBXRHTHVUHODKCPWIFXZVPYLFLYSUEYNZNCFVLTMXWPONAUAAZQIQSRFGAJDSBQONLHSDHVIJNOEX");
    tmp_tmp_msg_0_0.vnamespace.assign("OKUORSFVJPEPZETEJBZMHFFYQTEPUATYQOKELUXVFWXRTZQIHZDRBAVUGBSYAVAMMWYFEGXCRLWLWIDPPWFXLMUPNBSGOFSZGLRJHBKSLGITYNVAKZMNZLYKGCRVMIOUWWXFKCJYXDOHTZDCIMCMMRNHAZQCPTIBEDIGTVXYJEBEPKDLDLOJXPRNUQLACA");
    tmp_tmp_msg_0_0.start_man_id.assign("BFNFSKZXIPVFAXGZMZBVSDV");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.source_man.assign("TAYERVIOHECYPHGDSPHKLALBSTJMUMPUPLGMFVEGXCSQMIYQCLRLNCPBKTKEOJAWVDINYBXWDQRRHXOVVZDAIWWBWLMYSXMDQITPUTACROSUZFQ");
    tmp_tmp_tmp_msg_0_0_0.dest_man.assign("PJHXQKRAZTFWABMXEINWPDKIBKJGLBWBCUJEYIDJYSNQJOLHVNWPZBCGOLQQHLTOGDVOOWNXEEOINPALEUZTBYVCSRXNZKTQHBITPPDSOHAGLUYJUQSNAGSGSRWZSDBYXMNMUQKFAQLSUWNRECKSJLGTAJTOEWQIPWVYTHCRUZBHMZFCMYJFAHDMFYCCTUIINKGTPVDDZCARFXPBRVUMXZMVZCSIERHEKEPVORM");
    tmp_tmp_tmp_msg_0_0_0.conditions.assign("MBDVREISUSLOYPRJBRZVOTIQUEPDMTCFKDWRFJXIHKQJOQUXXVISPSVFISODONUCRHNLLAGJKNDLJMOOPGQXPJMVUNFNEHFCMYHNSTZZAPLEWXEHANWKUJQLIKRMBAYETVSXWZPYCBASXYQCVBDCEPIVZGHYUCTCGADLGYWCRDYZGTWBCNJUEVTMKMOLRYKAIRGFTGKZQBMFQTLRIAFQHBMYBFSKOFWSXHIPAJUDGPDOUGWNXWL");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::EmergencyControlState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 191U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("GRJXZVUNROVLBXPBKHKQUGTTHSIMLDPHQSREMXMVWNLCOTJNXDTAZNUGPHIWTGXMAYFYTORVBGHFBLZFARVPUWYADBNMPFGWSSVKBNLORYEZUODFMJKA");
    tmp_tmp_tmp_msg_0_0_1.comm_level = 93U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KHJZOJKPLOKWEMNSYNZNDLLMUKAFDJTISRZLBNWLTQVVRCFNAVRYBZWKUMSDWR");

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
    msg.setTimeStamp(0.4280336718660517);
    msg.setSource(47256U);
    msg.setSourceEntity(144U);
    msg.setDestination(47795U);
    msg.setDestinationEntity(186U);
    msg.type = 136U;
    msg.op = 66U;
    msg.request_id = 22267U;
    msg.plan_id.assign("AGVLLUACFHJGJNXKIDHWBKJSY");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("XRYBXAISQMFKJJSDNDWLNFJLAWUNLOAXBIKLYZDYESOXZWFQCBRUCKGIHAMYLFEIDHCZFHTYTPTPIAVMLZWYHCDUYEVCWKJHQTDVQKLUBDKTYHQCWNATNBNWYRXPVPZOPORNHCGTVQPGKBXZMVNOBMJSQGSNNACGGFSBMFPLMOPHEWRFABTAEXPCOZ");
    tmp_msg_0.type = 175U;
    tmp_msg_0.properties = 14U;
    tmp_msg_0.durations.assign("NZABSWQBTERLDUHTLVBPIXFEJYHJIESPNHPWCBQJPKOCZMQFINZJEGWVQIUUSXAOFRTANAPNXTFKYCROWXJBQRXEDKWFGWNKEPYMCOOOSVGCASFYGZMVAXQVVHOYSDBYIRRQUZHIDBIVFHXUGDSPVNQCVMPTKGTUMBRELQKFAYLFMDWTLTZMMRBDMJNYBGDKTHXRLFLKJDOCPZKCJUCVUINYEXGSMPOTAULWCEANZIGYJHEQRZLUAWHWZLH");
    tmp_msg_0.distances.assign("LXITHQSGTZAUTWHAMNRCYGDYUERVHZMOSHOMWTLBVTVVIIUWBYXHNYGFJCKOJZONRGJLNOMZFJTWCSIUWNUBWKPIRMLILTDVAYUJSRVX");
    tmp_msg_0.actions.assign("ARXAQLXJZMDSPTXSXFUBUIYUMVHDSOUZRTAVSGVKKGFHCONNHHQP");
    tmp_msg_0.fuel.assign("NTJDCWJAWIGSJQPBQFHTCALYIFRSZQXRHHNUSGLTDXARAOTAPVUKVGDKADIHIXRHUYMVBESVWQYTNIBPOQZDUKOKMWSFZEDEVCZLPIFBAGBHYGPKXNTTLOPMGBTIEDIVWUKOMPZMWFONRLYVGPVQXEIHYNJCNCJKSXRCOZMAXSQVJANRKLEEUINOB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FOYXSFBJBBPYLNUOGWPWLUXCCBXGODTBFSHIARQLZABEVTJREPWSAYLTWVWTSVDGSPIVBEGMRTENMZUMFUETZWWWDVDPLKHMXDADMQFXSCAWJNBQZUKNKREKZCCMCFYKYHPQVROQPZYIJCEPDMUCTGAQHZJVYZHVRJMBUCQIALKMHJKMNIENIFNRHUYONFSGOVGBXTQOSXDRASTHSPLKVPOGFDJWXODGYYNGQZXCRJNQALJKRILIAKUUXIIL");

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
    msg.setTimeStamp(0.0951629698267924);
    msg.setSource(16774U);
    msg.setSourceEntity(120U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(33U);
    msg.type = 63U;
    msg.op = 210U;
    msg.request_id = 18600U;
    msg.plan_id.assign("AMEHBRLQBGTINPDNQRGQBXWJFKDFHLYSHRRMOOXBRIEJTVFVMRUVEMAVJWNDUIAWVGBSAWYSWOLBEOJXJCWDQHKHMURUGNKYYXZYWBAMC");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 183U;
    tmp_msg_0.mode.assign("EGORBVQHHFFMQODDBNQEKRXE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CTVGCNVNMUOLHWCQLWXGENWWBSXUVMKADLGKXRDFLVQLQUDYXRNWODANNCQQJKZZKTKEEWGSGWJSBNBVIGQMMZPKJDPFRJSNHGJOTOEZTJXTFCNPOOKIHGCWYVBIAYAUHMXCZKLYXBSQUUIQZHAPBJRPYTOZHLMSPQAAAUVJITOJWYQCOMIVYP");

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
    msg.setTimeStamp(0.4239141015376613);
    msg.setSource(34880U);
    msg.setSourceEntity(223U);
    msg.setDestination(41867U);
    msg.setDestinationEntity(65U);
    msg.plan_count = 9634U;
    msg.plan_size = 2338239458U;
    msg.change_time = 0.22423010429743873;
    msg.change_sid = 13665U;
    msg.change_sname.assign("DGJMSWDTCUUILLXXDFMTDJRPMAHCRTTNSVHZMHILUSHJEAKZFCRNJDYFUQE");
    const signed char tmp_msg_0[] = {26, -65, -99, 48, -74, 7, -41, 33, 56, 28, 10, 30, 28, 119, 8, 15, -80, -76, -16, 102, -60, 81, 111, -5, 109, -66, -48, 125, -56, 25, 60, -99, 8, 109, 41, 33, -53, 7, -23, 103, -120, 0, 108, -110, -84, -38, -12, 27, -68, 35, -87, -119, -43, -78, 114, 57, 77, 14, 123, 113, -63, -113, 18, -28, -89, 64, -30, 62, 104, 91, -39, 14, -100, -73, 68, 34, 4, -70, -30, 73, 45, -15, -107, 18, 46, 29, -111, 8, -5, 85, 28, -32, 116, 14, 5, 78, -104, -77, -3, 35, -72, 95, -113, -67, 93, -127, -125, 35, 39, 43, -50, 66, 97, 8, -35, 115, 66, -121, -93, 121, -92, 76, 61, -39, -62, 12, -127, -119, 13, 55, -8, -36, 5, 88, -10, -2, -101, 67, 18, 57, -123, -93, 15, 96, -104, -63, -118, -67, 5, 27, 106, 109, 80, 69, -5, 7, -15, -41, 103, 5, -86, 118, 33, -74, -66, 101, -34, 104, 123, 71, -60, 101, 102, -92, 126, -99, -120, 50, 83, 86, 80, 55, -90, 0, -54, 7, 91, 80, 117, -56, -3, 53, -36, -27, -26, -114, 86, 53, 88, 43, -80, 33, -1, -17, -119, 94, 115, -24, 29, 105, 29, -52, -13, 60, -96, -13, -84, 73, -107, 79, 44, 0, 17, 94, 119, -50, 0, -109, -35, 14, 3, -39, 71, -36, 72, 11, -19, -29, -102, 87, 82, 16, 125, 124, -36, -44, -110, -100, -22, -76, -9, -33, 116};
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
    msg.setTimeStamp(0.5816419638024822);
    msg.setSource(64857U);
    msg.setSourceEntity(236U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(14U);
    msg.plan_count = 21951U;
    msg.plan_size = 4195517932U;
    msg.change_time = 0.9808264494786318;
    msg.change_sid = 9957U;
    msg.change_sname.assign("WFALEWQQXRMJROI");
    const signed char tmp_msg_0[] = {3, -110, -102, 82, -19, 28, 51, 73, -125, -73, 27, 93, 15, 10, -91, -87, -63, -112, -5, 63, 102, 76, 51, 67, -90, 110, -62, 118, 37, -128, -54, 52, 111, -114, 107, 67, 78, 47, -86, -109, 75, -74, 54, 63, -24, -13, -77, 82, 1, -11, 110, -20, -26, -91, 80, -48, 25, -82, 91, 36, 37, -97, 60, 80, 121, -56, -53, 16, -94, -10, -82, -58, -7, 32, 115, 69, 30, -119, 21, 102, 105, -8, 8, -34, 66, 100, 53, 80, -100, -90, -86, -62, 1, 68, 124, -17, 114, 32, 86, 19, -105, -50, -118, 38, -70, -80, 12, 13, -25, -114, 27, 83, -12, -38, -19, -36, 57, -68, -65, 109, 34, 96, 111, 10, 82, 80, -76, -90, 20, -6, 59, 76, 48, -12, 2, 114, 101, 79, 18, -54, -77, -9, -18, -31, 105, 24, -69, 6, 67, -10, 73, -91, -91, -120, 3, 24, -121, 9, 30, 112, -118, -19, 102, 35, 22, 116, 9, -51, 38, 45, -79, -46, 24, 59, -116, -11, 90, -84, 77, -88, 25, -26, -34, -104, 49, 64, 18, -105, -20, -91, 64, -105, -78, -46, -74, 119, -5, -85, 70, -126, 107, 123, 1, 25, 28, 96, 5, -112, -28, 62, 34, -68, -82, -52, 24, 2, 38, 61, 57, 52, -122, 2, 50, -93, -25, -78, -38, 125, -14, 10, -19, 44, 94, 38, -44, -114, 62, -15, 120, 43, 8, 69, -96, 84, 75, -105, -73};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AYJXPOEHPCYYVACTKJMOVDZKUXQYMQPJAXNSDZOQSURQPETGXYMFTLASJGJCHWBTNBIJWQPKRCBFXNFEDQICSLKBYUZLHWESZCNUBUGOZVYJYFDES");
    tmp_msg_1.plan_size = 23190U;
    tmp_msg_1.change_time = 0.3645189535105583;
    tmp_msg_1.change_sid = 38223U;
    tmp_msg_1.change_sname.assign("YQDJOBTVLYZLJBKDVGY");
    const signed char tmp_tmp_msg_1_0[] = {13, -1, -92, 45, -62, -58, 125, -107, -47, 77, 69, 111, 116, 65, 102};
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
    msg.setTimeStamp(0.0461420792696694);
    msg.setSource(28980U);
    msg.setSourceEntity(115U);
    msg.setDestination(1564U);
    msg.setDestinationEntity(140U);
    msg.plan_count = 788U;
    msg.plan_size = 2588933647U;
    msg.change_time = 0.8367346457118311;
    msg.change_sid = 45148U;
    msg.change_sname.assign("QTOSHMPCRYQADIKLJRDLCHXSTKEDHGWYVNHSOUQOOJAL");
    const signed char tmp_msg_0[] = {-55, -9, -54, 62, 109, 96, -115, -42, -91, -4, -85, -100, -8, -88, 90, -75, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VIFSEYYFKUKQUORXDFXTIMZBNQSZCZKTAAPOIKPDGSPTIZQEMDFBZDIEIOYCBDTPEHBCRUFWMPNCJMLORFNUXVDNMVSEGZUUNLQMJOMDENOHSYGPRAPLAUBAXPHAVGDZEKAYISYRLXAIFOQXTTRTTGZVUNQKYGGBVWRYJKCEZVJJWRGJVAYNPUGTLZWVWUCIFJEVRNCWFFKD");
    tmp_msg_1.plan_size = 26579U;
    tmp_msg_1.change_time = 0.5935745095800058;
    tmp_msg_1.change_sid = 2335U;
    tmp_msg_1.change_sname.assign("JAWVYONZGML");
    const signed char tmp_tmp_msg_1_0[] = {48, -45, 19, -70, -85, 0, -66, -14, -34, 87, 51, -58, 7, -84, -8, 68, -84, 70, -13, 41, 109, 7, 76, -68, 36, 22, -31, -86, 84, -81, -99, 70, -111, 65, -117, -22, 98, 68, 80, 98, 67, -96, -51, 78, 82, 76, 69, 48, -78, -53, 17, -30, 107, 34, -7, 42, -76, 39, -66, 37, 45, 27, -84, 15, 66, 65, -45, 83, -98, 0, 88, -113, -7, -18, -84, 55, 1, 6};
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
    msg.setTimeStamp(0.45044200525211187);
    msg.setSource(46694U);
    msg.setSourceEntity(1U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("XNVYVGNFNUIPOROYWHZFSGBTZHZSKIPGSJXXJHWKHIOBELJSKIELQFSKOZXBNCEQLYHUEYVRMLPPFVYDWM");
    msg.plan_size = 50396U;
    msg.change_time = 0.748028998461931;
    msg.change_sid = 41488U;
    msg.change_sname.assign("MOKQFJQGRKJJFGKZKXDBPTWA");
    const signed char tmp_msg_0[] = {-100, 107, 4, 74, -78, 35, -86, -16, -65, 85, -91, 83, -37, -65, -8, 114, -66, -12, 120, -43, -63, -58, 11, 73, -109, -66, -106, -77, 71, 67, 87, -105, 2, 31, -50, 114, -102, 5, -73, 44, 75, -17, -114, 108, -121, -108, 97, -2, 13, 48, 67, 102, -110, -60, -52, 1, -117, -63, 43, 1, 109, -94, -101, 61, -43, -96, 117, 84, -70, -7, 122, 30, 16, 2, 10, 19, -100, -96, 91, 63, -33, -71, -45, -108, -70, 100, 33, -23, -53, 104, 31, -38, -29, 33, -125, 98, 70, 32, 104, -79, -38, -41, -35, 106, 19, 2, -17, 105, 95, -9, -63, 37, 7, 1, -84, -47, 25, 49, 81, -58, -23, 31, -36, 56, -99, -21, 6, 63, 79, 109, 13, -128, -17};
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
    msg.setTimeStamp(0.1078239758848506);
    msg.setSource(31553U);
    msg.setSourceEntity(114U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("VXYBRLBHWTFYDHPZBPJQGCNDRJEDIKLSPRHMLFTVHUVCJFFMGYWANOTTOP");
    msg.plan_size = 38510U;
    msg.change_time = 0.18716999552975488;
    msg.change_sid = 39689U;
    msg.change_sname.assign("HDRJSSYOVQIXIRGSKUYVLRNFMSGPNCPFEKKBWROMLUFKEBMHBVSXKZLKFZTWTWBVIIBCXHZDJHSTGWOYJTIQGDWXNQPOUYWVHRRIDHYVVCWMXNBAHGTHXUPTECRLQCJZJYLQMEAOIZXJBNCGKACDTYDX");
    const signed char tmp_msg_0[] = {-3, 34, -57, 2, 2, 106, -103, -92, 91, -97, -24, -57, 106, 53, -85, 58, 49, -109, 78, 114, -103, -72, -103, -17, -64, 2, 14, 4, -14, 43, -53};
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
    msg.setTimeStamp(0.7852142567994347);
    msg.setSource(39525U);
    msg.setSourceEntity(253U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("BAKJQDIXTZYXRHKEOVSZEXIIDCIHQFOLXSICWHYPYLUWAQSECVUNGGZKDRLFWTYFSJLMFNZJKVNNMDTANXPWSZZAYAOSBLGPWGPVEDOXCDTTGPCRWJGVUAIVBKCTJZDVEPQORQLNVMOUHEMJZKID");
    msg.plan_size = 2342U;
    msg.change_time = 0.7453792682214305;
    msg.change_sid = 55598U;
    msg.change_sname.assign("BGXIYNYWBZRWBGWWQKGLFWTUMBRONFIUEMLUUTKLDPNZMHIZMLXLXDAVZJMURFGCNKOVFOZISG");
    const signed char tmp_msg_0[] = {-48, -64, 87, -20, 63, 32, -98, -84, -36, 4, -13, -41, 78, -15, -19, -109, -37, 38, 27, -83, -39, 60, 126, 79, 93, 0, 68, 12, 27, 11, -37, -101, -125, 94, -115, 27, 30, -35, 101, -2, -73, 70, -92, -95, 88, 44, 71, -48, 96, -112, 109, -52, -69, 13, -2, -124, 126, 106, 45, 51, -43, -46, -120, -21, 82, 70, -47, -2, 96, 124, 16, 44, 88, -83, -122, -68, -104, 4, 67, -4, -120, -100, 38, -32, -71, -83, 86, -12, 48, 101, 126, -26, 105, -29, 22, 49, 11, -6, -87, -31, 46, 108, -7, -88, 106, 14, 55, 96, -111, 47, 107, -111, -45, 123, 15};
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
    msg.setTimeStamp(0.06617332895635875);
    msg.setSource(17857U);
    msg.setSourceEntity(241U);
    msg.setDestination(8808U);
    msg.setDestinationEntity(69U);
    msg.type = 208U;
    msg.op = 29U;
    msg.request_id = 39713U;
    msg.plan_id.assign("RHJWAVGPLDUFYAQXHKCHEWCUBKQGYFSJCAYHXVLEONQRAFKCMKSLDWKWOYTHBIJFIESLTBCPR");
    msg.flags = 18021U;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 157U;
    tmp_msg_0.range = 0.49219972306613224;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KARRKAPIJIQCYRNVHHQCJHFXBXAXGKGUANBDNEBMDZJGNNLFXMLTHQJSWGEPRPLWXSGCPRKRIGTJFEDZBRSUMIKHYYOZAYOQLLCSEYAVPTSELONICVEVVSTDTVKRHEWXNZVCMWUPZJPTEQXXZWLZXNHQDOOUIOPELMOGCICFLTIIFSVBGKNUYBWUWGVQFWBDTOFASJQYATBKKJHKQEDYBUDBRMUMZ");

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
    msg.setTimeStamp(0.20712119098571125);
    msg.setSource(56857U);
    msg.setSourceEntity(102U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(202U);
    msg.type = 249U;
    msg.op = 206U;
    msg.request_id = 55092U;
    msg.plan_id.assign("OLYCEFYKVTSSYEHITFYTBGRTMANXQHWVJJOGJUHJGCIZBNYNJWULBQCGMCTBKFMTAABZMBFLQULONRLYFWTPUIALHMRPNVEZQXVXSBXFVDLPEJDUDAZSLDWWJSSHKKDRUYOMGIQAPAZHGKXCCRKBCGTLX");
    msg.flags = 53161U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 163U;
    tmp_msg_0.value = 0.7385891942807987;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SAQWXFTEVIXIZJXHVSMFHKGMGIUNDOJPWYTHOEUZJKUJZXTPGOWXQHTKRNXTJOYVCUCMZMVBQMONCRIAKERUKDKUPVNJFKR");

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
    msg.setTimeStamp(0.8768273296814894);
    msg.setSource(26005U);
    msg.setSourceEntity(243U);
    msg.setDestination(33307U);
    msg.setDestinationEntity(11U);
    msg.type = 139U;
    msg.op = 234U;
    msg.request_id = 17219U;
    msg.plan_id.assign("CXGUXMFUAHWCXROHYPWZGWLZCEOPQFRNMFJYMSAYLYJIMJYDUIFOGKJXZQFBSAUDHMYVKHNDNDHSPQORNIRAAOSMWTSJTCUQTWUSJGPSBUXGKUNAELQTOKVNHBPKSIIXCLNFCZGZOTMPQLWON");
    msg.flags = 17206U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 12U;
    tmp_msg_0.longain = 0.39442086064854043;
    tmp_msg_0.latgain = 0.6645754714977149;
    tmp_msg_0.bondthick = 2772904418U;
    tmp_msg_0.leadgain = 0.9027164481903144;
    tmp_msg_0.deconflgain = 0.8301703824633725;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHDHNLPABEWGCMEOQHRUOLFMAOMUFTTFTQYBLIYIYFYNWCYESOHSFFVJOCENZCMXYIDJAKDVQAWAIGSZXUKBUWQDSAXZBSQLXRJVJTDNCKTHPYPTKJXWTPWBHPGGRDVGSDL");

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
    msg.setTimeStamp(0.49886891489819196);
    msg.setSource(9134U);
    msg.setSourceEntity(108U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(133U);
    msg.state = 129U;
    msg.plan_id.assign("JQAZNFCFTOSEQXHSWOHUKAWQVACECFJDBGKIXBUYUJRCPKE");
    msg.plan_eta = -1405238646;
    msg.plan_progress = 0.6794885303099891;
    msg.man_id.assign("KIYQKXXLVABACDMOAMFWLFEVBYHTJQSBXVJYSFZDVVUUODAHLZEYZQKLUUMQCGFUJRXXCXBSZPSQDHPYRKICDVXHREKHTIUQASBTWDUWKHIOCWPNGWCRUHWRBGCSLRYVOBYNRAPMAZAFNWSRTNJXPSNZPUQZABOTJIMFQRERYDICLNCTTNWVQZFGFFDEPJVGBOSLNDE");
    msg.man_type = 8616U;
    msg.man_eta = 1572972111;
    msg.last_outcome = 209U;

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
    msg.setTimeStamp(0.6323894524647012);
    msg.setSource(14289U);
    msg.setSourceEntity(191U);
    msg.setDestination(47376U);
    msg.setDestinationEntity(74U);
    msg.state = 121U;
    msg.plan_id.assign("BYHLBKLOXNSRCRRUIAQJTEFPFHAKVWJBABFUFVWFMMFSEXIAOVSDEDRMIOWWGPZDJVMBGKZGQCICKXTQRLVNXQGXTULYOVPMHHEDFPTATTLMCCQRJMEBQHGKZXNJNSAJQRMDOPZZWOHYLVBYWALPIODUEAZZGNBUSEMITDTCRFDEXIZSJFLCETKEXQBUHVWYYYPHTGYSNCBKPXNMWWUNIJF");
    msg.plan_eta = -1321181663;
    msg.plan_progress = 0.11564098597254424;
    msg.man_id.assign("XFUMXPVVLPBFQNUCRUVGKHGIEQMPWGYYSMCVLJSHLSAMGTENPEUOMLRFVRTCELROYUZTNDBTXEXRRIGUZFWQDALHDKEFFUMNSDEPBIHZIFHYHCT");
    msg.man_type = 53473U;
    msg.man_eta = 140725459;
    msg.last_outcome = 38U;

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
    msg.setTimeStamp(0.2624905382434819);
    msg.setSource(2419U);
    msg.setSourceEntity(237U);
    msg.setDestination(40101U);
    msg.setDestinationEntity(20U);
    msg.state = 25U;
    msg.plan_id.assign("AHBNHAWOTBCVOQSZPAQCENKOHJCNMSIQSJWMDHMBY");
    msg.plan_eta = -618104873;
    msg.plan_progress = 0.4829428652001927;
    msg.man_id.assign("FIDVXPDFIAIOCUCFFLWTEMDFOGMBDSAQAEJQNYWUMKRZPVGKVPJUSQDGRJZXQGEFMTINBHPCWUOGTLMRPHGSTKMXKAXJZAFZZUKQJMGMNTVSQLNSWDXZE");
    msg.man_type = 14833U;
    msg.man_eta = 1891150097;
    msg.last_outcome = 148U;

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
    msg.setTimeStamp(0.18959291369085796);
    msg.setSource(8834U);
    msg.setSourceEntity(46U);
    msg.setDestination(7065U);
    msg.setDestinationEntity(121U);
    msg.name.assign("GTWATRPGGQRQCDWERHEVOKUUCJROYSMNQEHKZDMWEFLQDSFHXSPEXQLWLRZKUDIZUGBAGJKAXJKIAEOFFRZJVPPAXYCAZDVJLCEFMWCPNYYYPXFIVFVBJZHAHKVTXKBOZIBJHNQQPROBYHQLGQTKNSKWMUNWICTJKEOWTMYTSPFC");
    msg.value.assign("TJAOXOYZXXPWJKMLS");
    msg.type = 173U;
    msg.access = 40U;

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
    msg.setTimeStamp(0.2454689223102976);
    msg.setSource(53704U);
    msg.setSourceEntity(166U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(243U);
    msg.name.assign("YTWSLMBJEXJXSRNDLBIJYRAGLCKCGZRNKUEKSYVWMLMUBSGPETJKGWPGHXIAWDCFBGTYZBCBJFGHYEPTUXBEHLJCBXPENQMDXLPTLMZZIXHNQUAWJFVWWRDPDYOFKFHXRKXYDTFERAOHOWVQKDNUEYJNAASTSIAZUZ");
    msg.value.assign("DSIWFWKXQCNQQPLFRRTWVFRWPCDWEJYUVRHIHTONYPOJZBNYOAVZSAUFEPPQKYCPCWQRCJKYVIHBQFKAAZRSADNGZYEMPIGSYXMUNHOGNEJCBSXODDYUBTXITTCLLSVQCELSEKRIOFZZBMMWTMRHBFANMYDFIGPWQUGQVVKJNALOUBHRDSLMTJBXXWQLBLZFCOVEXXEOSJGMGSPJNGZNVHEDTPMO");
    msg.type = 65U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.16359285928816603);
    msg.setSource(33527U);
    msg.setSourceEntity(223U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(114U);
    msg.name.assign("IZKGAIVVPHFJOUSHXNPUVBOHACTLSUNYUFULPJDWYCZEPWHKPLKSZCCNWHFFLILNZQONWDIYCORLXGVSPRSAERQQMKAUFXMDKZIAVANILDGYGTRXDDNBECFJUEMUGGPQWQXETCZLIPGMBTVZSQFXJDTQBBEZWEKVQKJERMTMQPOHLTVJYRNJYSGNDTLKADIXFZXBSHOVAKYAUJHRROBYEWWYEOXBMOGZURSCMDM");
    msg.value.assign("OTBIODCBXCKSILVBUJOQIQELZRFDAQPVFGMFNZSBGLWGMZBSCIJYLURVTDEZKKLACPWVVVTBQTHQXWDRVXHZEFXFWDXHCMWGYJKXFOOBBTCPLUIOYGOMNRDRJNUEMDRHRYYQSSTZUDWIPSNJGMRUNEXAOYNHJHMTAPJAGLYXZJHEJYQRCAXHKQ");
    msg.type = 190U;
    msg.access = 49U;

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
    msg.setTimeStamp(0.035843932701530745);
    msg.setSource(7018U);
    msg.setSourceEntity(224U);
    msg.setDestination(60826U);
    msg.setDestinationEntity(49U);
    msg.cmd = 132U;
    msg.op = 122U;
    msg.plan_id.assign("PWAGBSLTFBGBEFRNFOENSDWTLFKUVSHLYENAXQXVCZKBUHGTQYJKRRBFECIRTLYCXZHNCOIQWECOGOLYMHPMEWZCIXWIJPOKXVJHVDODZBWMQUBIRPXMKZMRTTUGLSLMSDZPPVXZMIBCDFDGED");
    msg.params.assign("SXPWIENVRQAVKDSSGHUCAEUVNVEAOHIQSWITGKSIBGCXWHMQJGYEONOBUYEOULRUYJHJZKXCLPDIPJTPNTLHQFPLVZFTKXANPEYIOLVGJLKSKWTQMBIRVRPATQBGNFNMFSXJYQYGASYOCHZKLBTACIJHCXJBFHWCZYVG");

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
    msg.setTimeStamp(0.7500065288959149);
    msg.setSource(57449U);
    msg.setSourceEntity(3U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(241U);
    msg.cmd = 93U;
    msg.op = 211U;
    msg.plan_id.assign("WMUEIHDAAGAFMFCSIEQLVSTYKQKNJCQYVYRGKIQTPXTORPJFNRCXSDUEKUXKCZLPAXRDZNUDZGEWCUAGTATHTQIGUVQJUXCRNPJLWDFIMBMLFTUBKFBPLXDXMOAHVSWQVGOHWLSACYGISCEVFFGMHUYMZOSHQFSMZLANJYDQPFLNYBITCGBVOXDZIIZKEPSZLRVDRKOCBBRKEWQHNJIORWL");
    msg.params.assign("FEHQQTARUVUHMVIDOMRABQRXYGOLGTKZVXHXNNTVITKAFBKSNYDAUEDJOFJOJZNKEOVCTZYIGQRZANQLYJUXYSNLAMFGDQRLPBSJCXGWPAQGWIBHHLTMYZKHTTSUXVOHWFFFJFJDPYIMWBPUSWVLBRKYCESNAZWUOLP");

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
    msg.setTimeStamp(0.0015062468637914161);
    msg.setSource(57502U);
    msg.setSourceEntity(225U);
    msg.setDestination(3617U);
    msg.setDestinationEntity(28U);
    msg.cmd = 50U;
    msg.op = 148U;
    msg.plan_id.assign("GWNFKPHUHPZGOLSGYVKQQXSMDTNJTIVIEMXXBKJBYBAVQOLNDWHTKUCVKKQJAOFOHWMAMLWLXDPQJXICVMYLIHDFGIMLFRFLYVTWQY");
    msg.params.assign("ENCIVGPRFROXUOTDEDTBVABKIIYKTMNUHKSRPOQCNOBUJEVJKTTYYVBDSLQKWSAXLWNJQPGJWOMJXUIAUCPROPURQCSDZYRWHHNZXDRJQALZTOBQSLFCDYWVCZHPZBFCQBOAIFICXMVZDYUQWYMGMFNMNTSPRZMGEZHYKVIAETJBCJILVGMGEKAMGHLNHOPFCNFSNKXVAMKUUELHFDQGPXWIAJYFJXETRPXBGLT");

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
    msg.setTimeStamp(0.1866899907075653);
    msg.setSource(50476U);
    msg.setSourceEntity(236U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("OVSEWCEFPGBLKSQAYMWJDPFIBJXSECQHHCPHWGJVYTSWCHZ");
    msg.op = 13U;
    msg.lat = 0.904828346821499;
    msg.lon = 0.6832102400823516;
    msg.height = 0.7591024379429056;
    msg.x = 0.613801677311121;
    msg.y = 0.6141961575856608;
    msg.z = 0.38604540857169145;
    msg.phi = 0.1428141779948794;
    msg.theta = 0.34998726650309586;
    msg.psi = 0.4880665998041238;
    msg.vx = 0.28804761002092727;
    msg.vy = 0.6083097054415558;
    msg.vz = 0.8934488237385199;
    msg.p = 0.4877877904401291;
    msg.q = 0.3291760364000078;
    msg.r = 0.02023623804191854;
    msg.svx = 0.7039438520893;
    msg.svy = 0.49368755256859986;
    msg.svz = 0.5917417541998902;

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
    msg.setTimeStamp(0.6319583275901474);
    msg.setSource(56084U);
    msg.setSourceEntity(245U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("PBPNXZOSSLJUXANYDRZIKOCFXBTWLGJEOTQNDMKPCUANZBZLSXGSBOVBRWPTCMICJZKKQKXAEVMGUSGWHILDHPFEHXKNIWMQWIHMBYXGBCRJRREMRUFABJA");
    msg.op = 128U;
    msg.lat = 0.6972655265023177;
    msg.lon = 0.11305471291468472;
    msg.height = 0.931443265468102;
    msg.x = 0.9830289969707583;
    msg.y = 0.957435233576604;
    msg.z = 0.39477690778837904;
    msg.phi = 0.577000193046205;
    msg.theta = 0.161212272684076;
    msg.psi = 0.6253689091155764;
    msg.vx = 0.592947834735965;
    msg.vy = 0.36281411066474956;
    msg.vz = 0.5297498201491109;
    msg.p = 0.3704822025909065;
    msg.q = 0.22792186530818204;
    msg.r = 0.22580705312001936;
    msg.svx = 0.406299075994211;
    msg.svy = 0.6028010882231758;
    msg.svz = 0.8642976286053539;

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
    msg.setTimeStamp(0.7042687015130507);
    msg.setSource(32526U);
    msg.setSourceEntity(84U);
    msg.setDestination(20691U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("XQJUOISPGUCPTVYNHCEYJKEKETHMBPWHHVKXDVAWJLFSUXFJDFKGKGXYTPOYXOQWDDOAIBZLQKIZOSDNRGEADQJZSSQDNUFYDCX");
    msg.op = 18U;
    msg.lat = 0.1997333381255989;
    msg.lon = 0.15714030754069241;
    msg.height = 0.745839096156637;
    msg.x = 0.9056303452510022;
    msg.y = 0.8858379850385086;
    msg.z = 0.33191341156212406;
    msg.phi = 0.40834033397880964;
    msg.theta = 0.2944543691320527;
    msg.psi = 0.4896371443981222;
    msg.vx = 0.7770436650559006;
    msg.vy = 0.8893720438971413;
    msg.vz = 0.1498063809584257;
    msg.p = 0.03880410807938617;
    msg.q = 0.9584032313453565;
    msg.r = 0.3702162863222537;
    msg.svx = 0.7822814253751057;
    msg.svy = 0.760580471680121;
    msg.svz = 0.6903087411377041;

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
    msg.setTimeStamp(0.8078511511310582);
    msg.setSource(29795U);
    msg.setSourceEntity(108U);
    msg.setDestination(41769U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("PCSKRFEHKCPPJFITGFJARGZFSNVPTIWN");
    msg.type = 15U;
    msg.properties = 82U;
    msg.durations.assign("VHECCWSCXLTRCYRYSFAOTBPREENZHJOABSQWTDXFLFONUUKMIBFFJINWCZVTIZAPTRSEIGCGOVJRCDLTPWLMNVGBJOXYIGXJYXHHUFFLMRAGUNSHUBTENDNUMB");
    msg.distances.assign("XCIHLWEZZDXTUNPKFTAEZBLLFGAVBQFRSDDGWAHTGSPKDOUPKBDJZDYKWM");
    msg.actions.assign("BWHFGIOXSRTZZVEYSSWXNGTODLJQEMUJSJWNWKCCUILWMYYFGRVDTPXCJVMQEIHTPNIVSMKYRPCGFAPCXPITVODOPZKEQLUADKPRECOIMRAUQJGRDSKXBAKLZUFYULQECOZWNOWJCLFBHXGYAGJGBZUZZKHDNQWEKCBMTB");
    msg.fuel.assign("QJHZRNKWGZCWFNRVOTDFGSCBANKNWNTMTOEYDKLPWOFLFUKFMQQDRPNBXUISOWUTMGBWPKIVCZABIGUUXNKYXDJCMHLIXZFOOARBYXDDPPLBCTXBTUHVYDHJTEZYRIVCLVIPJZLKGMGWQHNVZABX");

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
    msg.setTimeStamp(0.24374595586681058);
    msg.setSource(65301U);
    msg.setSourceEntity(147U);
    msg.setDestination(62475U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("ELPNDKFZGYMXFIQAFKRCPUMGNORIUZZVSVYKFMKDSSAXWMOZYFTXBWJCCLWSVUCNEITNUUNTYLUDNNYBJPBZQVWJKBWHNLAPYTLYQCAUVQXXFDIDGPLDJSJPYTGURVYWMPRRQZWODVYBCKEFPSXLIHMHOROWKERKQQHJXQMGICJPEHAJRFRZRGZCVSOHEEIABC");
    msg.type = 254U;
    msg.properties = 141U;
    msg.durations.assign("JQRTVPPIRZWKWMCHAUHYNEUAILRIFXFDVIXXVGNFQYFEHDPOLKSHZJWZFSNQBZSJHRLGTXUVRTAGHCLKUAUYPEFLBOCYRGAVTGDWNNMJCLELYVJWMAMNSSFQWIEBYIBVKIETKJKDOFANLVUPCQQXPMGYZTJOQTSXJQGTEMBAWXWSOOPDBJB");
    msg.distances.assign("XVPDTFERAGNTWKPHBHOGMW");
    msg.actions.assign("QRLFYHLWEGYZVGTXECXAOYHIBLNRHNIPKZRKGBLVCVOFLNZXYLFYIRTXONMCS");
    msg.fuel.assign("WNNESLYMUHDLVETOMQWOWLDBOBKHVWICSWJFBPIHNSKCXMTGBN");

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
    msg.setTimeStamp(0.03829149537439813);
    msg.setSource(33540U);
    msg.setSourceEntity(70U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("LFMAAUPLCNSVDJVEHGISQVSKLUDBCLEMUBLBQDZQBSBONOLNPMLPFIPXISRQRMPHNVAAOAZFXOTZZVQHJKCYZLDZNBKTZVWJTZJJPYYGCWARJOMROCWKXUQBDYDN");
    msg.type = 175U;
    msg.properties = 67U;
    msg.durations.assign("LNVVIEKDSXCZXJNNBFXVVCHRPUNWGPLZOUHEIGBGIJPFYIDCGEWDHKRFCVNIYWIPJYOSQZBUQLDPWOZFMHMGUKSQMCHMRSDN");
    msg.distances.assign("PVYGFVYATKDCNOAZYQZWDKXRS");
    msg.actions.assign("TJJBIQOPWYIDQ");
    msg.fuel.assign("HQBBTEUEUDLWTYWMPNTAKPAXJATODJUOKHRRZWBHUSQAMDNMGPRMUZJFDXJQLKFA");

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
    msg.setTimeStamp(0.41665834974445115);
    msg.setSource(41433U);
    msg.setSourceEntity(43U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.3360147974308605;
    msg.lon = 0.9425931316312256;
    msg.depth = 0.9718811192724903;
    msg.roll = 0.6644752988661895;
    msg.pitch = 0.8775161394706511;
    msg.yaw = 0.5611686429764422;
    msg.rcp_time = 0.8456213050929744;
    msg.sid.assign("EDAWRZYUXCTYCTJOMZWOJLDEHACDLOMGLDGSCHULDPZ");
    msg.s_type = 226U;

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
    msg.setTimeStamp(0.4992645481082033);
    msg.setSource(7514U);
    msg.setSourceEntity(112U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.7637798749727073;
    msg.lon = 0.7571744675271772;
    msg.depth = 0.583347333979594;
    msg.roll = 0.5209891449615213;
    msg.pitch = 0.598986959210421;
    msg.yaw = 0.37076233249166746;
    msg.rcp_time = 0.28839260414846435;
    msg.sid.assign("ZVUAZWRTNSGKNMJVPGJVMCAUQFZFHPRLIDVVLUCGTVJPJHLYLWMROUDHEBUTNAKOOOATXNBYXXUYZOMTWAADBIQDABVGBFQUJSAFSOMNUYRTREDCDGKZDDYEIPXVHRCGKRNLRXSLSXKRXUBCIHLNYTSMIJPPITUKJDHHQEE");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.40313560706322216);
    msg.setSource(44522U);
    msg.setSourceEntity(125U);
    msg.setDestination(19454U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.839189890961386;
    msg.lon = 0.4648166242525681;
    msg.depth = 0.7947855161990842;
    msg.roll = 0.8511670982414156;
    msg.pitch = 0.34030485809729794;
    msg.yaw = 0.40643580267678436;
    msg.rcp_time = 0.31233092185362454;
    msg.sid.assign("XHQWBZRAVVUSFSKKWIFWOTCOZRWWEYGDMEDRBBTYFMRYHHUDOANCUHY");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.5335964948251954);
    msg.setSource(48698U);
    msg.setSourceEntity(178U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(107U);
    msg.id.assign("MLZVNMZMAFZUBKIESGVGPKNWNEZDUCSMRAQNOUSEKSRHJQSYQGOHVTBQHOSOYTILFBPUWZBPMKPJCBXMWTNKCHAXXYLPRDCAWVIHZELGHFUSIWQBYHHADBXJHMDJGBVPBNEFXOLIYAOVCDKFUGNXPNFZWJILANIOQWVESCCRBURJQEDTWCZUFJRIUOWHXECCPFXPDEZYLIYSYQOEZYGFMMKTWIAJLTLYPDKRQSAMRTVQTFTORDVDGJJX");
    msg.sensor_class.assign("TSAOJYOPEKNSBCBSSLOZUMKSCDBQFAWYUACZKCYLPANUGRWIJJSFRWGKMTFTXIQJKPCZBBGKOLPUFURSGDTLBHFCNOXKOEPWGPX");
    msg.lat = 0.17651209039662974;
    msg.lon = 0.7464355650582729;
    msg.alt = 0.405158098681039;
    msg.heading = 0.1820178553670193;
    msg.data.assign("DFWNLIIOZMAGYFDZHUATVGYGKIZPWFRL");

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
    msg.setTimeStamp(0.742259753069605);
    msg.setSource(39754U);
    msg.setSourceEntity(168U);
    msg.setDestination(60841U);
    msg.setDestinationEntity(104U);
    msg.id.assign("JXVGOUKKABGSYNBZQQERZZFHCAUKZCGQSKGLKBCCCALMSIVDAEMXMIJIMHLWEINILUIARPCWWOUCQGRTHOFJCFRAQTSRIHZHMFTJNRPJBEYPTUWIPPVBBZDSTLYCFABEBNXVXDVVOUEZTDDELKLZPBSKXKPGEWFNWWSJDROTQMNGVVZPLOEQFDIUYXXHYOYGYSSTGJHQWFSOOYQRYLFNKMRCDLMNZWHNHTUXUAJRTKYAVOVJPADMDJXFNPXIM");
    msg.sensor_class.assign("AHHAMNGEOKZBSCPOZRTQHUXLSJZWJELNKVISLZYDYRVQFTWCBNTDKDGY");
    msg.lat = 0.2665921459647489;
    msg.lon = 0.912018869247046;
    msg.alt = 0.8486915796771043;
    msg.heading = 0.20627705797418572;
    msg.data.assign("RFOJPYGZNIEGPGPMIVFBKLTBQWKRVNJDOWRYCLXILOCXPAAYQYLXXJK");

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
    msg.setTimeStamp(0.6893596562210912);
    msg.setSource(58358U);
    msg.setSourceEntity(76U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(222U);
    msg.id.assign("CWHFARHTTXQWMCTIEMBSOZNAAQOKZSSJIVGZSBBVCVZTAFSFFBIVFNDCHOGSWXMIWLRYHYRRGWNOKJDQKAWYUXMWNVHQNGFHLRKKQZOMAEUYPEKDIPMZGDPUPSXQVIUDOKHWJPGUZNHDJJDPJZEOCCHNASYLELGBXGMZJGQROIKYFLPYABIMOJRTDDYLDWXATTVPTFEOQQINXRTCENUMBGMPCAUCFKREJBYHRLLVSJZEXWCUNUQSBEYIXUVF");
    msg.sensor_class.assign("IHWKMASUXPOXYBQJKIJTXXPCGCMUGADRRKZSQXHTCGHDKLLZJTNGLQSDNLSZHEZXEHWGWJANVVULABUDHPKWHCBJYDZNGMEAPOFTOPOIMQELMFYYIJQNURYFRIQLWSDCZUYVDYSFAGAFQOVRTOFJEKQTUXIEORPTWHNKQFJPRUZBOBSVMMDUBIEWVLFWOIZETDSE");
    msg.lat = 0.7553158308077037;
    msg.lon = 0.8448435739621062;
    msg.alt = 0.30965151376969124;
    msg.heading = 0.34184818427875663;
    msg.data.assign("ONOTWXUIUJSTHNM");

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
    msg.setTimeStamp(0.368851309283331);
    msg.setSource(23492U);
    msg.setSourceEntity(175U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(195U);
    msg.id.assign("XIYYURROJEHFPWEQTFBOYAYAUIXWMUEYVMAQCLDIETGKSHMUOBFVLZORTHWLGHQPCBFMQQNDLYAIPVJKOGJWMVRNNUGBCHCVDPZNTMSJXZMJFFHDOLXCKKEWTRQDWSZSWOFNKCULKTEV");

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
    msg.setTimeStamp(0.8916498313064732);
    msg.setSource(27844U);
    msg.setSourceEntity(17U);
    msg.setDestination(26020U);
    msg.setDestinationEntity(217U);
    msg.id.assign("JFQHQWCOXBAOQOMEWGKENTBFNEPPN");

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
    msg.setTimeStamp(0.08036256330304159);
    msg.setSource(3200U);
    msg.setSourceEntity(237U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(156U);
    msg.id.assign("RNHIPCPQUFMBRIBVFJGGTVSAAKAGDMVOQSWPNCJGOHTZCTVGDCNEEEIXXBUIGYFITFLGPWMKEQUGBLMAHCKLDVFJZRZLZUHLURJOFZNEDYEFXSQSRTWIREPCKHWJWJSPVBMUCBZYFNHHCDZHTZMWHDMGPMJSIVAQSNOYYKZOBKXRNIMRITNWYQXAAOTXNPEOUESBXEQOWBPVYLZAIWNQOLYLSJFAYJXJXTRUKMBPARTXGODU");

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
    msg.setTimeStamp(0.5984462343145794);
    msg.setSource(17390U);
    msg.setSourceEntity(206U);
    msg.setDestination(48139U);
    msg.setDestinationEntity(170U);
    msg.id.assign("YPXRQTELBPNCVPTVBJDJXOYEWCGLEGLRYJRARFDTDPVUPAMFNHKGOPQGNLEBDMIFRYEACZAWFLAQTHKWLSMUCVXQMSDGIKSUCVXCZRDNKKEHVRSYUZJYSOZODJOSZMKPKMCULTVLUIDORWNFKRYOQEVACBNQBKEFHZUHNIJSTFGYNKTHHEHBPINBMHAQTYWJBIJVSMQGJMXZZPRXMOUW");
    msg.feature_type = 169U;
    msg.rgb_red = 172U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 218U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4298033121526741;
    tmp_msg_0.lon = 0.24008318661220274;
    tmp_msg_0.alt = 0.04188183612926044;
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
    msg.setTimeStamp(0.35281083037139604);
    msg.setSource(15164U);
    msg.setSourceEntity(118U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(58U);
    msg.id.assign("OSTDPRNPCFIIMMFCFRUOKALZDCBJMITQBLWILHZPFPSTXEXGCOTEIQDGFVJAEOHSBUWZHRLPOHGZBZULVNETGDNDVMLRWHRUMXTHYLRHKSEMVYQYWWYKYMFAQKNJNQJWYFJVREAIMOUIBPSDQOYSPTYCBJEQLQFONMUDZCZCNVKCKSITOTMAENBPGRXNEJLIUVNLKDUBDQBYDYWSHWFQCCAGOXAVXZXJSAGUKHEFGVXXAIJZRH");
    msg.feature_type = 126U;
    msg.rgb_red = 171U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 123U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.03213046613374426;
    tmp_msg_0.lon = 0.6398402660240698;
    tmp_msg_0.alt = 0.65922416423553;
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
    msg.setTimeStamp(0.029332689131351786);
    msg.setSource(41191U);
    msg.setSourceEntity(21U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(194U);
    msg.id.assign("VKJQPFSDGLEVBNXRIINRFMGLNZHUAPLXEYBSGXVJJSKXTTBFPAQIOEICWACHVRWUSAJCBDBRULNGAMIIOKVIQQBEDWQPDACMUYAOHHBPZPIPCOEJJSXYSRAJDNZKMOFTPLUJAEWZQWWKVIKMEIV");
    msg.feature_type = 24U;
    msg.rgb_red = 27U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 102U;

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
    msg.setTimeStamp(0.27803758269043766);
    msg.setSource(39249U);
    msg.setSourceEntity(103U);
    msg.setDestination(39304U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.05922880362754268;
    msg.lon = 0.9240059992926201;
    msg.alt = 0.5401704864706832;

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
    msg.setTimeStamp(0.14572900007275724);
    msg.setSource(22424U);
    msg.setSourceEntity(206U);
    msg.setDestination(27791U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.39568700681139746;
    msg.lon = 0.08040357266208575;
    msg.alt = 0.10161204467304796;

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
    msg.setTimeStamp(0.33900046801744577);
    msg.setSource(20972U);
    msg.setSourceEntity(26U);
    msg.setDestination(31251U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.8041952944930165;
    msg.lon = 0.2616861912717775;
    msg.alt = 0.12069236447394638;

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
    msg.setTimeStamp(0.8309838397452458);
    msg.setSource(18805U);
    msg.setSourceEntity(74U);
    msg.setDestination(47235U);
    msg.setDestinationEntity(250U);
    msg.type = 77U;
    msg.id.assign("VIPDXMCKRDATHPRFXIYBCHC");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("UOHXOXFNRZOWHUJSNYCFQULMSXQPASYKGGLZGBFNDITDBCYZKAOSDMRSUFLZMUDZRVPXKXBFBHEETGHRBJDGVGQYWPPBYIOYQGXICHAVPUQKFBPKNASTYBVKARUWAZMHTLWJQILCPHGDGOEKBCRGFJHNXJNSHLOZDFXMMYTAIVWCVTKWNUOEAUSWIQBCHQZFNEXRNVJXCJWTSLJ");
    tmp_msg_0.lbearing = 0.9497811919061759;
    tmp_msg_0.lelevation = 0.3342028259192239;
    tmp_msg_0.bearing = 0.034663201934380106;
    tmp_msg_0.elevation = 0.520540925908294;
    tmp_msg_0.phi = 0.18943337173246177;
    tmp_msg_0.theta = 0.5695481617525728;
    tmp_msg_0.psi = 0.36203625572975084;
    tmp_msg_0.accuracy = 0.6222462264495606;
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
    msg.setTimeStamp(0.22908988909132866);
    msg.setSource(54638U);
    msg.setSourceEntity(152U);
    msg.setDestination(32441U);
    msg.setDestinationEntity(55U);
    msg.type = 177U;
    msg.id.assign("DPGFOLTYKRPQJDLMYEIGKGQIXBKGXMEGRKJMMLIFACTNTBINPTDQMDEXZZWICXZHOHKRLERVAFYUFEAQWHAVSIYMJRNCBEBQOOFWTFLOHSYORZNPCTXGKVQMWZPZDPAZWCKMROLHCXDQJYJJCUURULFPKILRVBIEVXIAZJAQFFTWZRSXWGJBONLDUWVKUCYBSDSPAHBFACWVNNYYSGKEMVPMVEAUNW");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.7005489294232429;
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
    msg.setTimeStamp(0.8945685791925599);
    msg.setSource(13955U);
    msg.setSourceEntity(250U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(19U);
    msg.type = 193U;
    msg.id.assign("BFTGYCZMUSUIOXVBQPRZXVBFBJQXAKWHIFPCGNFNCBMNUBXIVABSZQODOLWJQXJWHHAHEAQGCHTYZYKSRTORXNCLWGSATYDMWJYEEKMNDATEASXALFVUWDBFKOYNRHCRDGDTYPBONGZSNIRFQTCUZQMLRXIHUDQWURISVGHYSATVPKCCMEDJIJPLIUYWENZBZTLXKZIRDRFYP");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 54794U;
    tmp_msg_0.type = 160U;
    tmp_msg_0.max_size = 6684U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.8104431384298946;
    tmp_tmp_msg_0_0.base_lon = 0.4057114480088423;
    tmp_tmp_msg_0_0.base_time = 0.948814958132039;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 41488U;
    tmp_tmp_tmp_msg_0_0_0.priority = 24;
    tmp_tmp_tmp_msg_0_0_0.x = 10131;
    tmp_tmp_tmp_msg_0_0_0.y = 31521;
    tmp_tmp_tmp_msg_0_0_0.z = -18849;
    tmp_tmp_tmp_msg_0_0_0.t = -13420;
    IMC::DataSanity tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sane = 1U;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.026653837875178166);
    msg.setSource(43152U);
    msg.setSourceEntity(35U);
    msg.setDestination(35756U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("EQLDMTCCGDEOSWDPJZEDMOAWBTRYSAVIJVKDHBXKHPJZMFPRTPBQABGFYOSMWBIIQVPRJLHCQEGEWVASSYKYNUTPMYSEOFWQMSRTLAHUXXQJLXNWAIFNYDYUXROZVAEHOTUZHGNTIJNUNFUO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PLHQLRHCAYREBUVPWQPROXAKGPKJWTKTXKFZFSXKAOGTEVWR");
    tmp_msg_0.sys_type = 150U;
    tmp_msg_0.owner = 63522U;
    tmp_msg_0.lat = 0.276852599928866;
    tmp_msg_0.lon = 0.9643120238370833;
    tmp_msg_0.height = 0.9550763682930348;
    tmp_msg_0.services.assign("PHUBFMOLSRACENVCWHZWAGHNLVYMLSEMEWUWQBZJBQCFTQXANYTFKEZCRWBIJJKWQDTOCQPUJWUYMEXHSWQKACNEXEDBQZCXTTIKTXFQCRDMRBYIEZVZPFUREPIFFUZDYGBJAUNZBOPJWGNJBMPDLROYPGALOTDNHXGRILAQBSPNVDPJNTYQROSEXWIODOYUHNFSVPOGICVIIAAMKLFVMUXLSZDHTAKLIGSSGVZJLGXKMYK");
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
    msg.setTimeStamp(0.5995737450848941);
    msg.setSource(52977U);
    msg.setSourceEntity(16U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("BDANPJHNKQQDDLYJQGPI");

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
    msg.setTimeStamp(0.08914614666066334);
    msg.setSource(30708U);
    msg.setSourceEntity(185U);
    msg.setDestination(5183U);
    msg.setDestinationEntity(28U);
    msg.localname.assign("AFWZCARIATGNDAFNKVDWSEBESIGIEJXJRUILHVCLWSVWNGVDVOOCHTXONOCVQUETLHKZPYYPDQBJRTKJJVNIXNYZSMZFGXTBCFSQYJUXDMKD");

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
    msg.setTimeStamp(0.6139551560625448);
    msg.setSource(31493U);
    msg.setSourceEntity(241U);
    msg.setDestination(4649U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("OSQGVDTNXDPOALNXZDHQCTWZKFMXTVGSWUVWKSYPNRQBABXDKERXCUBMNAPFUCYWUEWJNOLHAQTKYFDYUCQZMIJTCSVYTNEIUFXUZSAIGAQPIOMXBLSGNKHZINICORDYKRZSMTGLMXEGMMYRUWHDFJTAQPORXGIIBZBHVRPDGWSIJEEKAVPWSLOFWBTHPYCEGLDBULKTDLZEJQOJNXFVJSUFHBCEPGWKKOLCP");
    msg.predicate.assign("LQPNDXMTOXRBRGTCJXHRQCBIGWJSSCZMUZMPUSKBMCEPGYZKQWIKXONDTWFVZSMDTVDZPXJDRXAGVJEDARKKJWXBGGALMYWHVAMNBPKZGFQVOWHHUKEIPVUZIVBFVLFXGLUYCLLVLGOQNHIPFBHKAT");
    msg.attributes.assign("JAYQWEFUHMTQOTHSHGNWVQAAZTWWIFIMBINVPWJZNNUYOCJKJMSGEMHBCWOVLZQNDGJFPUXODBQMAEXZVODIKHGCYPYOCAQIRTBMVMSTWTQICOLQUTKEMRYVRETHFHUDSASPLJPGAARRVUFUKCY");

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
    msg.setTimeStamp(0.21255867715249666);
    msg.setSource(36977U);
    msg.setSourceEntity(159U);
    msg.setDestination(18028U);
    msg.setDestinationEntity(15U);
    msg.timeline.assign("MHHQPJUEAEXVGXMLPAVKBFEJNPHHGMUYKRYRCBBQRNCNVUPQFAIHCYMNMKQSPYRHOKGJDAROSZZBTTQSRXFKDHPLKUEOVHAJVICRCGJUZOBMXICDVAOKITEYLRKRDTTXTDPBYJJILQPLCEOZZYSZJUIKYFHRGZYAVZSBUXZAUDJOTIBSWGLCICQNFOPQFEUSMLSXGDNHLZLDTWOJEQCGFQFINP");
    msg.predicate.assign("PXJZLFPWMXADDNFUVXHHNQVZVCYUFRJHTBLSZZCLESPGTZIUNSIJPBNVAMUPNWNOOXMSTTTVILRPYHHATQDYVAW");
    msg.attributes.assign("LZVUJPFWEIFHCOXTYLQHAVLOUGIKQDCRMQGDODWMYANXAUJYIVJIXFUTCEYBURKJMOUTJFLVMPAWDGGWSXFQKZYDEMJPLDCBREISNAORHNNVQKCQOHLPJUTIIFIMKFHGCEXGMNHHUVEIYVFRYNSJWAQPDZMPPSTXMJUOSPKBDOTGWTGTYBASIPCZXZRWSXKHDBRGHAUXLSLEJBKWQNCQWNSBTNBZFCGYEVEAABVMDNW");

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
    msg.setTimeStamp(0.3950717286353176);
    msg.setSource(36470U);
    msg.setSourceEntity(122U);
    msg.setDestination(13531U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("GVUYXDRSUSDSILICPWTVBTVBGERYMFOWGMPF");
    msg.predicate.assign("MIFIPFUBIYWDEUHEVDMTCALCZGYLJMENUOWDTMSOIJATZY");
    msg.attributes.assign("TJXGFEXFWYXNDYTJIVBURWQKZDVVYPXCPAMMIJTWBWDGOKUGDMHEENCBNVSJDVSWATGGPSULHHLQAPVSCOZFKZREOYMAQTIMLSBCRBOHUTTZVAOWHTNXIJRVERKSSIGNAFCKCXAZPBOCHMWAWLDKJRJOISNUUQIPLQXTNEIKCKQYEJQLZUZSYKBGIDZA");

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
    msg.setTimeStamp(0.11616689088952536);
    msg.setSource(18590U);
    msg.setSourceEntity(209U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(19U);
    msg.command = 136U;
    msg.goal_id.assign("YTEJEHAMBDYUOZEWQHAASBFXIPMZTJMRIUIMCWQUK");
    msg.goal_xml.assign("BICPPQFETENKUVQXEOHCFUWQYZYARSRJTSIDVDGCLIEPKHJAOXDVWMAONRRDJLZJQIBCULRKZRMWMRMNXBHVGRLAGXLNMYIHKSOABSATMUVSOTTCMKZABDNYEWJDNVLBEOACVGTILPOA");

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
    msg.setTimeStamp(0.09537296498926284);
    msg.setSource(48566U);
    msg.setSourceEntity(122U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(27U);
    msg.command = 187U;
    msg.goal_id.assign("BJETRPEWBUGGMSINIQKNRLUPXHMOSNFCKRJPKWWZVDDRYNUZUXFUERHRNPWTLGJTFBXZJIZXAVYWVWVSJYWGCRPNQJEAVEQFQVKGPCFQSLKOXBMLPFBYOILHLTURSSEHLHRTDOF");
    msg.goal_xml.assign("YPWBVNVOCFLHPYAJMFDAQHEPRROEHRKWDUFIZQM");

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
    msg.setTimeStamp(0.8147165413870324);
    msg.setSource(38255U);
    msg.setSourceEntity(84U);
    msg.setDestination(23406U);
    msg.setDestinationEntity(218U);
    msg.command = 99U;
    msg.goal_id.assign("GWAMAIYAPUJKPIGNFZIRHQFSQXBBOVXEZTBDADKQVECVKKPVCSNLCRXBUWQWEWBXUNJTRENAJPYFNGMHIOZPJKLYFWALSXCUTCZMEZHJYXIWVHFZCZCRSLSIEMTSROYNAPLVEPDHBTQOLXHTCLSBMITJZZAFUAINWOKODGNGBMQEMBFWUJROWIEJUNRZDUHVDQGGYDGRJRTPQYDTXDSSELMQHHMAGYJYOKP");
    msg.goal_xml.assign("TKNFSOQQEUNWUJETOHYRVYNUUKFBIAUSEYBIPVSGRHJCDLVDOAKOQCSGLEMVSMBZMNAFAZJPQWPXLNOELRUUKDRPCMOYDCBVTGXEIXBYEKCFCYLLLYWPKTPJXXHIYKZUTWVQTBFQDGIPHUFTXOQICCRGSQDRFEHJRQMMFZHSFBZKPKENHCXJYOWYZNOJBKXNWQNDMRVAAVWSBJISVBJGHGMGZ");

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
    msg.setTimeStamp(0.004479244106240787);
    msg.setSource(59342U);
    msg.setSourceEntity(30U);
    msg.setDestination(29341U);
    msg.setDestinationEntity(204U);
    msg.op = 59U;
    msg.goal_id.assign("XTBKVBZARYQXIOZWNYCINXVSBVNCDJPOK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PMVGXPHEWTTKOZAVQSIZNKXRGHDLRHUNXVPIBGKARPTRBFJAWYPUEQQWOA");
    tmp_msg_0.predicate.assign("VKUAEXEKHJBRMYYIUVHPICITWYZUEIGBCCQTWUIVANRVFCFJPJDFEOLCVXLJHFLAYMFRGBKLKMMAJJ");
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
    msg.setTimeStamp(0.16431467767355046);
    msg.setSource(18124U);
    msg.setSourceEntity(14U);
    msg.setDestination(37785U);
    msg.setDestinationEntity(119U);
    msg.op = 141U;
    msg.goal_id.assign("AXJBRCGLIUSFZBXBEIJGCEMVUXTFJMYNOKSJZITTIWQQJCADMBMNKZIOSRZDVGLOFZPXNWAHNIGKPWKYHGCSCZCLMDWWSVEZQJXVCNYLLFXRPYWB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ESWMFXNVYDIVNJKXWRGWCYCRYRIQLFHYFNOAXELNVZQARCMABBTTQFVQDTGPZJLNCURVOPQSVFPDTSGDHHSYEZPJLOEINWCCAKYZPCJVBFIIFXTWEMJLRGVGWKLUFGASSAZCZXMJODMOXBKOBFHLSTMITSXHKZTZOVAINUEYSUJPDIPIKUDYJPKPLBHKCDUQXUEJWKNAJWMYONLXGBURNHHSKTIYEVRHQMGGEFBARQZGZEHMWXPUMD");
    tmp_msg_0.predicate.assign("MAJLYLHDAJQYONDBQBDJMKERJEVBJZCRCXZSUNJVPNMYWQMXMGORGFCOUFSANRLVHMPGOZZCWNYSZCKLKFDOTPGFQTBUGLYAAWZBPQTPNQXSAKXHHFJEURIUNWVZQXEBJQWVICMWTIEGUPVJBOKRPTWSCEHRYXTAPFFASWAISME");
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
    msg.setTimeStamp(0.983719598678115);
    msg.setSource(22099U);
    msg.setSourceEntity(202U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(245U);
    msg.op = 125U;
    msg.goal_id.assign("CSEJYRKYDHWBRRFHQJWTTAALHSOQIGFAINVGLYYXFMNDQCUXRFADCPDUYKOOHSEVMMKXTJGMMBXGBSCXXHLZM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CLZNMNXJVDLJHJUFZZ");
    tmp_msg_0.predicate.assign("EMIMXFZPBVOSVDMKENWYXYLFBCCCAFRKXZKHMOQSBUPWAJIEKTKYLGXLVAYTHPUZSGRZZHPFVBHASAWECNWZBNC");
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
    msg.setTimeStamp(0.016245397743850365);
    msg.setSource(51761U);
    msg.setSourceEntity(124U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(92U);
    msg.name.assign("NXLDOWIBDOVXMPTMUFSIHHBKIVVSTTAZMODDKPVWMEIXHJRUJOCIGL");
    msg.attr_type = 149U;
    msg.min.assign("TZBVKGBTXSZDCOQNJYIDXNWUATANJJIMNVRWZJPDLAOBGCNLTCOAVKYONERVUSGRUIHSRQUWVLFTXWMUSEFZNPYKHIMGLQSNBGTBFUAOJPAQMHNQCTMFHPLQDEHDXCFHYMYDKFESHAKFIEWVDRMBPCJXMJIQKZGPSYWVERWCLZEGIXHUHAVBIZPUPZSESJAFMRAGYBKNOIHWRZKGOQFMESYT");
    msg.max.assign("JMEYWUQFVFEPZIQBABYAQNULRMFADCZTMWCYKRNYTLDQJAOINBKEKIVIPVERJPGIMNXLOQLKSRVTDQBOBURCCZWJDWZSCDQPVPA");

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
    msg.setTimeStamp(0.03985214481447508);
    msg.setSource(51963U);
    msg.setSourceEntity(155U);
    msg.setDestination(51616U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YPHHOIAPFZURHLTNWGBYKEAJQVACMPHQMGYJRODLBFFLEVXRKADQPMZSLITTJXLIKSIGWWKPTYWAISZKQLTVCFGZREFDFSFPOUZHRTBBKTRHDJSQSM");
    msg.attr_type = 14U;
    msg.min.assign("RIXTVMWZAJTBVMMPJAHQZIJATUGDGWOAVSDQFXSVHGKYOSGYEDFDABFSIDLTNUHTCLWQKJNMUZFKUJOQONSPJFGEPDBPDJMPEOADRXXXWUNGPSLWHFGMVWRKQTDUBPHGDNYBSVFICLGZCYERIUSZJZMKVLEYPNMCVEKELTVZNCLXICBQJBHEBFZURKRWWJLPICNRAYFHTCBQXRXGITLXKHCMZYNSUEOMCFVUZSYHY");
    msg.max.assign("CADMSGFZKBHZDSOIVDJAHWNNFTEELJMALUVIXLEMMOJULWRXEGYFNQMCGKMGRPPKBIAWOOGDADCHVSRIHDOSLMURLBFIHKUXQKUAKGJIRFEYPTPNHXUKARXPCJVBOUNQJFPNNZZRYZKWGOXKEASVVWEVJZXNYGXQIFVVMBBXAQOTCVTWPTHZCTSEKSQCMOQGZQUYHSLUBIOCJBMWDYRNYYLSEH");

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
    msg.setTimeStamp(0.4043406978490848);
    msg.setSource(8974U);
    msg.setSourceEntity(171U);
    msg.setDestination(45612U);
    msg.setDestinationEntity(157U);
    msg.name.assign("ALLYULCILPQTDECOVYAPWMCTHCYVJGIJKQJIVNXVVUGXUZNWPSOXESXLGMLRUXSYEDDEPNQWNMXAIJPTWLWPCRXUMSNDJILDGBTGWZTKIMZVVYGHXCOZEYRJNHPJQIMOGBNGAWBZKBIBKAQSWBVMAXTUERLDFFKQIYTQUWHFSYSKDTFNOFRM");
    msg.attr_type = 97U;
    msg.min.assign("MVMXFACDLHHFAQQXXOLQGUEDQUPCJMRGQVHXNBULHZHXIXWFIASZVSTTNGEMUVYEMNEKYWJIOABBWTNAAYSAJZZQBGOOGZCGBRVSWMPQCNIYODLTGXASTKUDSFXUKCWNDBQIFJESRVRKZAOOUDYWGRFCRSKZTPRCRPJUILLNJMBWPCENKCEFDVEZREJANBOIYLNPTEK");
    msg.max.assign("PUKFDTGAURKDTAKQEJIYLXSXKNYWYRJDJJUJLMWSLQZQEVREEHCGYPXTJENIEWZUMURWSVFKGBMICCDCCTDSUBVZBKNAOZGQXPRGAGUHQHSAAOBCGOLSNPYWFINAOMBBRRANRXFHWOULBGZFFILEIKVPCPKHMVZFMNEJHRDHSADUYQZICHIHXOMBMGSCWBXBKLDOLCIYOFVOVFQTMLXNTVJDVNVXHUEOSPWYQZNRIJPY");

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
    msg.setTimeStamp(0.5931272924816209);
    msg.setSource(46108U);
    msg.setSourceEntity(251U);
    msg.setDestination(63836U);
    msg.setDestinationEntity(3U);
    msg.timeline.assign("FLQHPGWSBPEKUKYNBRTUGKBXJTMWEQOVPHKI");
    msg.predicate.assign("GSTGOSOKFITKXDXKAZREDIVEUSHCBBFEITZFHGEWAQQ");

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
    msg.setTimeStamp(0.9675828102447522);
    msg.setSource(32567U);
    msg.setSourceEntity(46U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("FWWWHIHQGOMAKTREYEBKWPLBRIKOXJKVBTBELVBXLSZVMSFKPMHOACFSPMLRWJGUTJXCGDMK");
    msg.predicate.assign("CYPTVGOLSKDREZMPSURQWRLOACSSJDYEUPOLXPSGOKEHNUSESOKCEMPEXMQXEQZBK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KLFGXAENMBRCIALOVYWWOBZXVJMQXEGPIEQZIBTNIMOXFUSVVHWGALCLSTNDHVXPUYFNNVIKFDADIBIMXTIURREYBTZGBSDSOXDTSKQMVLTKUTBDCOPWMZZRQRLYHLNQZFCDZCWWVXPOCHWDLUKDCHECUYAETHJGOYMYVOJUJTPHJKROAGNLBSZPMYJNFUGGMHCJHEGJBNNJWCRSZOXIDRKHBSTAAEQUKQQPSQLPAWVYFJYRIPPQKURMKWEEX");
    tmp_msg_0.attr_type = 54U;
    tmp_msg_0.min.assign("XXDLCRMJVCPUOXVBDBAFWTIGAPCVNZXHFNSYTJDNDKNLHBQYGUMMQULBPPRHYLFSBBONKJEYOXDZOQYHVLESKGEKYOICTCA");
    tmp_msg_0.max.assign("DSGMADAFBWYKBIZKNRKYLFESZTTCTXOOWMMYZXDUZEUQXMRCWSXJFYNPYKYPNDPJATLXUGHDNABKFIVFUSNDLPHOQMRVMCUHQ");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9037599885742046);
    msg.setSource(13694U);
    msg.setSourceEntity(212U);
    msg.setDestination(28151U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("DKRRLLAVEGUNJVYPQUNLIPZVMIYLRFUTFOHYCWSXWYXGHPPLGZJBHDJJXETIVKVXIDJGEKGWDHXGMRPNTSOORITKGUXYBQNJAMMQRLZMUEVOFEKZCQBBEIYRFVLEDQWCWEAATTSAGQPTTXNMBEAXGIQIDTVWFECMTSFAKDSPJWSWWC");
    msg.predicate.assign("RSJLKTTZKPVCXWBLKSZJTSSRYMAQQWOVSEIIBQIUGLQJFFCPSMQZDJMFTEIROWCOWVWCIFEOGYIMVZDXAKUYEGVWHKMQNQAMNQAORNJAMBNKUJTVWBUNAGEGSYCGCPUPIGXEEPMKOHELLYDTVRQGBHANPNVYBVCLRDWSMDDTHSLPXHAORIZZFSAJNZIFLXXETFBAFQUXHFKRNLIDJEKGXYPYJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PVOIDMANPJPXWLLBTVFBOABQHSDZNEZAEUAXNXJQBHROLOTQEORSWTXPLIDQVYVMEKDZYPYCBMARBWIFGRLROKSMTHNSNHEIAYWPMMFJYXQUKHFGGLKANTBIAWUBRGDVJYCMANJSRKXZUZGTVZTQITKQIRGSCAJGCTIPTHBVKWXCWRJIIYKWLDCMNHULFSSYV");
    tmp_msg_0.attr_type = 123U;
    tmp_msg_0.min.assign("XPMAJYCAOPEBMBPQVLJQNJFWFDHPEANXRSG");
    tmp_msg_0.max.assign("UORLZSNWRFDAEERHOFKNXXOYMOZETXPVRUVUSKFGBPWMIGKBMKVQSQDCHVWGNRGPMMKGMJXGTIYVRIYZVJBVNEHCLTBFKSUZGNFUTCNMADLRJFCHDYZOYWUOPZJIISNQJGOAAKLQCEAPSTQXKWAOYQHCTPLTVIOWZTDXHDMFHSANAXFQREYILFW");
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
    msg.setTimeStamp(0.5474629210464121);
    msg.setSource(55291U);
    msg.setSourceEntity(233U);
    msg.setDestination(43878U);
    msg.setDestinationEntity(228U);
    msg.reactor.assign("JOKDVDZUBOYVZIEEIZIGYWWMZRORIKJIQUYPHHTSIBMRAJXTAFOBSBIYLMHETZQWKPINPOETWHAWEMBJBHWPQNBQ");

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
    msg.setTimeStamp(0.8198167201699061);
    msg.setSource(17793U);
    msg.setSourceEntity(243U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(126U);
    msg.reactor.assign("YNYTBJTHEGCKDBIRAFDOUKEDXTDXTSCIYKRWBYQLYVPOQFWEASHUWZYTHGDDHBGWQAIGXHUDGVCWOIVJNZLIDOVWDXCKJSQNXZAMCJGCJUJPYMZNMSOSOIGHULUAZAFAVELRAJIFLHUVNRSIQBMKTIVEFLNRFCJHAUCEUTBWTEJZMVMHSKOXJOXBCLCWWIEOXFLPFPMZZTQNPQXKOWFSTK");

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
    msg.setTimeStamp(0.5607395906427212);
    msg.setSource(41526U);
    msg.setSourceEntity(16U);
    msg.setDestination(46676U);
    msg.setDestinationEntity(100U);
    msg.reactor.assign("IQRXUNUYOIBOZFCLDPZSNJAPRKXTBJBBFUUIYCLEDODXBHHABPNHQHVLWPNAIT");

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
    msg.setTimeStamp(0.2548949636706037);
    msg.setSource(3326U);
    msg.setSourceEntity(74U);
    msg.setDestination(25046U);
    msg.setDestinationEntity(42U);
    msg.topic.assign("RLEZQPTTYMZZITVKWWLTZFSLOUFHBT");
    msg.data.assign("DBRQRPVISABQGRMZUJZOWVEFBELWBNYGIDRESDQMTVMFNCXEFIUJTJHOEAOXNEIRKYFKGCQAGUNAQYYWLDPIHRSIDAVLKZJPHIOVUOBHNDZMBP");

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
    msg.setTimeStamp(0.4042305768887513);
    msg.setSource(27521U);
    msg.setSourceEntity(203U);
    msg.setDestination(62835U);
    msg.setDestinationEntity(106U);
    msg.topic.assign("DKCBWFIHPCLOMYIREFIYTCNMRBLXHXBPMLYUWOGGLWVZNRFZGNZPJWCFCUHOFHKDEEVLKKSRSGPXJAGSOJNPDKNUUPZUYJMAIVTLMY");
    msg.data.assign("IDSSACFSLSYENLKOUXVOWOQKBTLLEZFNLKOMPFWREDFFBPFJYBIJEEHYYBTBAHQEBPKFYGNHONSUKJIHDTSBHNFZSEXTNYSRAGFAVRDVEAQIWYQUNQSLDAWTRPVXERZPOQZTBGKGZGKWURUTCODIKHWBNPYVXEHMDCCGRANDAXZMVTQJXGIKPMXWCXFZJOTHWLPLZMHRWXOCPL");

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
    msg.setTimeStamp(0.5251789237177396);
    msg.setSource(15853U);
    msg.setSourceEntity(67U);
    msg.setDestination(54475U);
    msg.setDestinationEntity(61U);
    msg.topic.assign("FJJFBYZRDXDFTEALIXABOPFXHWLKZUYXNETBNUT");
    msg.data.assign("TRCQUFCXQKJJTFEEFOFWIALMAEBAFTGGPJYHGEXQUEONILQOMVGXEOKJQILLOCRVZWSXRANSMZIUKXNAVCSMEILOJXTNDKVAZWXBBPRBNSINBDWZUIHBMJCHR");

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
    msg.setTimeStamp(0.2586892079016684);
    msg.setSource(32252U);
    msg.setSourceEntity(47U);
    msg.setDestination(28088U);
    msg.setDestinationEntity(4U);
    msg.frameid = 85U;
    const signed char tmp_msg_0[] = {-7, -53, 103, 89, -91, -59, -59, 91, 17, -23, -11, 39, -104, -101, 55, 59, -41, -9, -102, -75, 79, -14, 33, -4, 69, -28, -93, 50, 7, 97, -1, 72, 100, -17, -21, 12, -102, -110, -106, -26, 38, -16, -11, 77, -122, 53, -65, 109, 36, -104, -120, 37, -45, -127, -97, 105, -103, 12, -98, 57, -71, -3, 54, -92, 80, 105, 23, -113, -122, -124, -49, 89, 0, 30, -60, 88, -40, 116, 98, -79, -97, 44, -49, 17, 39, 61, 24, 112, 76, 105, 44, -116, -84, 1, 49, -68, -7, 52, -29, 75, 90, 55, 110, -65, 66, 72, 13, -61, 124, 69, 12, 98, -9, 92};
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
    msg.setTimeStamp(0.113321715946621);
    msg.setSource(19602U);
    msg.setSourceEntity(168U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(65U);
    msg.frameid = 107U;
    const signed char tmp_msg_0[] = {-23, -14, 73, 125, -24, 22, 105, 34, 104, 30, 124, 80, 17, -115, 72, -125, -80, 40, 94, -43, 116, 17, 81};
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
    msg.setTimeStamp(0.04243622655779378);
    msg.setSource(29716U);
    msg.setSourceEntity(151U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(20U);
    msg.frameid = 101U;
    const signed char tmp_msg_0[] = {77, -122, 3, 72, -111, 3, -28, 41, 120, -53, -16, 10, 99, -19, 126, 110, 101, -29, 67, 112, 26, -11, 99, 43, 16, -94, 71, 122, 74, -115, 61, 95, -114, -19, 4, 113, 83, -48, -121, 126, -47, 110, -24, -19, 76, 3, -90, 96, -17, -36, -90, 63, 12, 33, -68, 55, -89, 7, -33, -76, 63, 42, 98, -45, -4, 86, -4, 63, -76, -75, 18, -28, 24, -64, -25, 71, 71, -8, -42, 76, 57, 101, -113, 120, -38, 65, 69, -14, -81, 110, 14, 115, -50, -24, 110, -106, 27, 49, 56, 77, 104, 60, -89, 111, 69};
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
    msg.setTimeStamp(0.07539281741234716);
    msg.setSource(7835U);
    msg.setSourceEntity(216U);
    msg.setDestination(42335U);
    msg.setDestinationEntity(249U);
    msg.fps = 115U;
    msg.quality = 196U;
    msg.reps = 201U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.2778258743444857);
    msg.setSource(12379U);
    msg.setSourceEntity(26U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(226U);
    msg.fps = 202U;
    msg.quality = 49U;
    msg.reps = 7U;
    msg.tsize = 34U;

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
    msg.setTimeStamp(0.9094901721709493);
    msg.setSource(60178U);
    msg.setSourceEntity(21U);
    msg.setDestination(37433U);
    msg.setDestinationEntity(121U);
    msg.fps = 145U;
    msg.quality = 27U;
    msg.reps = 148U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.9578463838177498);
    msg.setSource(40093U);
    msg.setSourceEntity(216U);
    msg.setDestination(9541U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.2735964715677335;
    msg.lon = 0.22763974367866335;
    msg.depth = 64U;
    msg.speed = 0.31781560704508405;
    msg.psi = 0.2058381582631612;

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
    msg.setTimeStamp(0.4876455748471078);
    msg.setSource(8453U);
    msg.setSourceEntity(71U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.025914034778857342;
    msg.lon = 0.27649320403814215;
    msg.depth = 197U;
    msg.speed = 0.06792220837410712;
    msg.psi = 0.05362015428237643;

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
    msg.setTimeStamp(0.807268601302538);
    msg.setSource(61428U);
    msg.setSourceEntity(87U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.853164739260727;
    msg.lon = 0.2024385514874808;
    msg.depth = 42U;
    msg.speed = 0.2857792905647618;
    msg.psi = 0.8420463258496862;

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
    msg.setTimeStamp(0.7354509630501371);
    msg.setSource(12539U);
    msg.setSourceEntity(220U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(205U);
    msg.label.assign("CLBYQXEAHPMFPKVMANUZIAE");
    msg.lat = 0.20090482272991372;
    msg.lon = 0.9314453367582861;
    msg.z = 0.15576121398255238;
    msg.z_units = 186U;
    msg.cog = 0.9030975765275573;
    msg.sog = 0.4680087754468255;

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
    msg.setTimeStamp(0.7342675730292967);
    msg.setSource(7535U);
    msg.setSourceEntity(38U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(47U);
    msg.label.assign("JNGNAYSDVGEVYZWIQZMICWOHBLNZRWLYGHJPHUBCLTMZKUFNIJISBSWPJAMQPVNPLCVMLIRNEDADCKZGMTESFVTFWTROJNDLTVKRXQMHGIXHGRRSWEXLBBEHQCURGTUYZIJOFJYWYSVEKGHUPZHBXXKNCLQHEBIDAXLKEMBZVDWCOIJTAKCWRJFADAOQQAZEXDDKPOTQFCTS");
    msg.lat = 0.025870833171958263;
    msg.lon = 0.10963988763355881;
    msg.z = 0.9457030696327937;
    msg.z_units = 55U;
    msg.cog = 0.41313062571789194;
    msg.sog = 0.7150357243618097;

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
    msg.setTimeStamp(0.8835921263932148);
    msg.setSource(61202U);
    msg.setSourceEntity(93U);
    msg.setDestination(18224U);
    msg.setDestinationEntity(170U);
    msg.label.assign("TFNCHWYJQEWSFASKYMKRYHBPGFUXYAPBANHYTPVMDNTBOVHLURRVJNXPEHLMLINHUZIRKGGDFREPSUFSTCKOYYRXGCJTDBMRPFTKXHVKSVPJBPHTQSQECOJZOMXISEDWDUIQJLZFJQUOWWGZDXRDIGGLMMABXTOCEX");
    msg.lat = 0.45675822264393506;
    msg.lon = 0.17407801495414577;
    msg.z = 0.8304626481345423;
    msg.z_units = 187U;
    msg.cog = 0.3927460175130921;
    msg.sog = 0.3653491778998945;

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
    msg.setTimeStamp(0.43301917607608587);
    msg.setSource(7735U);
    msg.setSourceEntity(174U);
    msg.setDestination(53397U);
    msg.setDestinationEntity(5U);
    msg.name.assign("MHLRKLORBCFFOMNMOJQHKUJKXTYZHUIOJWRQCUDCNLBMHMKLVQINFASZUETPDFXGJVAVFVMEMJHKECFVBZJQXLTKUFJZLLPSUUPRJQEGTGCPAWWZUTNPDNSHNMSIXQYEXYRVYKHVAGEBCKILYDOYLCBTFXHWSTSDQBWFARLZDGAXZJDNNIZDCXXJTPOPGQBQAWIASRWGRFRWACGESOSSPIBCXDGYEHNYOGBOUZVYNMIMY");
    msg.value.assign("BVFBAQBNEUIMAPVHQACJUGAKKXBKVAGRWDBYKHUUQQLKRZPXNCGLSTILBRPGDNAHDIXDTEYFQXXWWUFLHZWZCRCDVJHLLUMLETZGBDBOOYXZGXRJPIEYPSTAYREOKACFOZIFIOCNSZMMYXQHUKSFZPSFMGTVQWTJMEHGTDSLQYCOMIBEECZVIWVMQSJXJRAJWZPJBYSPVOWPEUCJLIWRHOHKNOWVRKYOMTTJFKDDINNUUAHSLNRGNMT");

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
    msg.setTimeStamp(0.49110817007628216);
    msg.setSource(50824U);
    msg.setSourceEntity(78U);
    msg.setDestination(27658U);
    msg.setDestinationEntity(95U);
    msg.name.assign("VXWDDUTUVNGJHDOIDCIQCWTEUANHGHZJWUOCCBROGQZFLKKAYXGWFBOHCGQGNAFJFIWGKQZZKPSBVFENMLRHSSXPJBOJWEIJWNYSCHXYPPAROAZCMAKRXEYSUJDRLBWCKTXEVNPZTRPIVAFPVFNJYTNXBTZQMSHCYMDEDIQQLUJOCUYDSVFLGZETLRUQ");
    msg.value.assign("EIQDICBTXRBUQDZEAJLZKZJEHPJTBLPAWYWMXMJDIMFCWLTIFUQDAEJQSKQNWHFINRPHYWDFEVNPLZXKLOOAZHXBDFWMVDLZEXKBXLUGZRTNRMRDPRZYTUBTPFHKYAVWGYVLSZQFJAAKGPFJHNWRROIOESSWRSHKQUYYAOETFMNXBNJVQUKCEBPISGICGPDMTHIOYZHJTICCMVVJENRGNVGLACXQVHOAUQ");

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
    msg.setTimeStamp(0.6673091080285941);
    msg.setSource(45406U);
    msg.setSourceEntity(164U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(215U);
    msg.name.assign("XBKJGFZPQGRAILPCVRTGSYYSIZDFHFCEDPDEORWMIVSJTEOGEJPIKMQZKPYDAEVQBHNTJSUDTENPUJTFBMRABNSBZQOHHLHLOOSRFRYAGVQJOQPQOBAKUIMGXCXBEFNTAWIJJHYQUFAUMTTNPWPYLELYVDQRLXXOMDXTYVEVLNZBGIXCCZHCIOSWKQBGJFCUILKWRRNYAKWXVUNWYZMKCLSUVTAAPDNNU");
    msg.value.assign("YIDGIAJNRQWWYTFQRJCFHYSXTMGZPWUWGPTNNSISHIIYXLQZAMANUWPOHGKUWEWJDOODVHVEASOCLFJKZMAQPNZUNPCPGFZFEIRDEUCDXXRPEYVUJORYGPBEAUKRHUKGFXXWZMBGLBDZSADNOXJHTCIJPQTTJR");

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
    msg.setTimeStamp(0.9917118763235756);
    msg.setSource(63051U);
    msg.setSourceEntity(195U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(32U);
    msg.name.assign("RVEFUPVPSQOKXDKDYDJXGJFPLZMAWMHMQFSIXCHLQVBKWOJWIUCUPFSYENKUBKOYQNMNLYWBGRHLAIAGTBXKDCSQZBTVVWYCAHGRRBXMPJTSDKTAIVOXFXBBADGSDGIEPMVGHENLNEMTZLDEISVQBVJXWMYUOATNCZCSECPGZNYMAIXQKJZOFTQLCGTUFOSXIIDGRLJRJHENAY");

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
    msg.setTimeStamp(0.03810569167656719);
    msg.setSource(20827U);
    msg.setSourceEntity(167U);
    msg.setDestination(48277U);
    msg.setDestinationEntity(80U);
    msg.name.assign("PHGPUQTBFKLJAZGMARFHJUQDYSBWCWHQDHRFCLBDANRKJOJDOUWRCSVYIRTXLJCNZSHXARXOKZKKCCDKFSESINAELTESQMFXJHJQRBNVJZTGIGYDECPFFAOBMLTGIZNEJVQQMHIXGPYRUAWIVBMASMEZBBWODXIKWSDP");

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
    msg.setTimeStamp(0.7946950604434492);
    msg.setSource(25177U);
    msg.setSourceEntity(236U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BLNNKSOURTRVCXPVQLZZZXDMNQUMEQJRALSBCFWCBORJNDSXPHRTRJWAEGRTMXDGOJBCFXUAKUCDJCOORJY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLNLBPJHXATZVBSXQGKTSJCRKIVRSUKNRHIVTBKGOUTQGYLDPADQBQPQMAAEWXFTRMSML");
    tmp_msg_0.value.assign("GNLNHEKDVSOBVHYYZAMBSCIUXKOBJVACKPUYKTRXEJZDKOWFPJKQEJRIBNGSKYLCHWTVPCGWVMCQFEHQYIRAJHZXGRYGNARSMEDWWSSPZLPOTZUWUQMOZNXBZOPJUMQUNXPGSBWLYINFRBCPKIOJQATLHQDFFXTGEYVMFPLN");
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
    msg.setTimeStamp(0.9282046260878556);
    msg.setSource(43887U);
    msg.setSourceEntity(150U);
    msg.setDestination(37572U);
    msg.setDestinationEntity(212U);
    msg.name.assign("BHVKBHAECGLGBDVOPEMKRJFNXDPSHOBLATCZFYVVDLQZZMMKAROKWPUQTYWNINJQXSRIXIMWKLJYOWHAQCYUEFXNYNFMAUVRSWFFZJOGMGWEJTTTBOLRSOINKCJVI");
    msg.visibility.assign("PFESURLQGHFKKUTKWAWBHPVVFMMHSOARZOCLCPYMHJESTGNZZCGVVRFBAHEQKNSIKQAXPLTVXJJYKEVIDUBRZSHLXHWZFZUBXZMCYVTEYIPNWQEWNXTQDIJDLOFFGRGMGNSJNIPQLDYFWXTDLZJDMZPIEOAVDINJUGAFYDLCJARXBYNMZHHICVVKTUUQJYXRC");
    msg.scope.assign("OCYGYADJBECWNQZDZXSXNXRLVYTRKAFNLQWJAGLJYVHDBZKTFGRUVCQBSIRYQUJEYNBUMDUFDVZWVWCQWFJIJKSNIKMRTQCDTPGVPNDAOHGUFPZLNWKSHVOCMRITTBJQFIYSJYWBMFTHUXSTGAZMXZHJLBKZSHKECCXBPQKPPIQHNMLRIOPLUOEAHVXHE");

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
    msg.setTimeStamp(0.39275065458666536);
    msg.setSource(48660U);
    msg.setSourceEntity(195U);
    msg.setDestination(6705U);
    msg.setDestinationEntity(29U);
    msg.name.assign("ORHCILGJMGRBTRYGXADSQQADSTKGNYTFLJDSSHNZQZVKCUSGFRHTMJUEEYOWAPWLRPUFNIUIBEBGESOHMLQLWTSGZRJRXOGWPDBIDYPPRNFVVKMNAECCWIQXHNJMAYMVUZNWMOXELHOHOQNNZGVWITAKTLUJJXRVDEFGVKBXTQBSCXYZPEYHYNQKX");
    msg.visibility.assign("HLCKEODENZZYHHXQYHAOVXVPLRFIJZVSJQDNWYLFVWTCGOZCWBUYIGODJZGYCOZPBCACMXLUELRZRHXHWIRDZMXOMIFTWWRSIUWOYPSRDKTEUHSEXGPKJZMQUTZJMBYNNLNFGPXTJMCLHDWDFAJQOQSWUBBXXPUOTVKRYGFEHKFTDVMALGDQACIIPKAOCAPTTNJSQJBVPJNKREYRMIKIVETMQYR");
    msg.scope.assign("YIEPZPEOHMDLGYIKGXXRFZTFKQHOMTVGFSIBPNUEVFUPMWWLIFHVWWSUHTLUANLULSVXDYSKHOPIJQCOQZCWSRZGLSVXJJKATFPRVBVRAKPOQAHGMNPMFRJTJKUMIFVJXZOEJRTCVMXHPTCWEXUEDBALFKAKTIYZCDNEYQRBQCLXXAAEQWCGISTBKWMBYYCXAGQKPCNHLDIDDCRJNBDVFOYGZGYHBUEZZBEGHDRZYOSWIN");

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
    msg.setTimeStamp(0.20684585987342485);
    msg.setSource(11720U);
    msg.setSourceEntity(125U);
    msg.setDestination(45957U);
    msg.setDestinationEntity(141U);
    msg.name.assign("DGRSMVGIWBTEDUODOFZVHXJZXIOGISQWUKBZLRRNAYLNUPHIUJMYMWMTBNOQGQDSPNVIMVZKCDFTSKFTBCSJCLTBVLDTAEHCVAZ");
    msg.visibility.assign("KFKEWWNRXMLBQCNDAXYETOTURYQMUYQPHFIAXGFGCMXCJSXIQBSCUNZYCHJQVIPZOILZVAFGVLAFTJDKCTWMZNFXAGBCTLYJDQGQHGJOGDBFWHIYVNNRDOUMVSTKYJERTSXLPQEUORVESKSIEOXLGDDTFHWLWCAISDGLMNTD");
    msg.scope.assign("YZILIQJJXWNXDFYYXWWUHEFSWOMHILMYMBNPNZAHFLARVBWVFXKNTZRE");

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
    msg.setTimeStamp(0.1417305482669422);
    msg.setSource(51265U);
    msg.setSourceEntity(89U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ENRZQYMTMFKKPJZJJFZKPKZMYOLQXQPRKOBXDGFSUDYEZNHFAVMLVALGWBBMXUGAFHNJTTVMPJARSPSTZZHODCDVJHOAEGDIXYBHGNOCVQWXIARUVOTCIF");

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
    msg.setTimeStamp(0.8252118388257887);
    msg.setSource(1638U);
    msg.setSourceEntity(227U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ATTZSLWFCITABEGNVDFPVLGK");

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
    msg.setTimeStamp(0.2161084386263269);
    msg.setSource(824U);
    msg.setSourceEntity(112U);
    msg.setDestination(59550U);
    msg.setDestinationEntity(42U);
    msg.name.assign("MRLDZPHISITUOLENCUZJOVIGPNBSYKMWFHUIOXXQWUVL");

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
    msg.setTimeStamp(0.17611822044705128);
    msg.setSource(37721U);
    msg.setSourceEntity(122U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(123U);
    msg.name.assign("CEFGMPRNJXYSHMPLNOKXSZKIEBEPJQGSJHEZVHGFJURABPYQAQYTRXWAMOQWYMXTVAZOFDXBHZRIULBUZYXRLKDJWKBPGFUSUPFJAGKFWRJRPNEHOFMABTXWCJIXEZNTKITNFDSIBJLDWVBZDVDTGDEXUIGQIUXABSRIOMVDOQHSSEOVSDNHKRYTKKNGEVHLPCAT");

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
    msg.setTimeStamp(0.2912511477548748);
    msg.setSource(37969U);
    msg.setSourceEntity(13U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(196U);
    msg.name.assign("RCNPCKSEAZMPNMOYLOIWLOWKYRDEEJDWGFZRSXFNQXZYHIZNBUHZYUUWVPTAVNVUMSGLBTZEBHXISEPTVHPGSEMWJXITPNUKZFYWRTLSAAICWFGQGBFQCHOBJPLGAMYQYLIRADKAJAFTLROXHQYELVPJMFADRFTGUNJXUQJLNWMDKSDHGWIIEGQTGNWXVUERZDUCRNCOJQDHQVOCSBXJOVSDKMTHBCCITBVFPIEKPXZHLKBCKAVOQDSMFJUBZY");

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
    msg.setTimeStamp(0.18483265374481261);
    msg.setSource(42897U);
    msg.setSourceEntity(67U);
    msg.setDestination(24137U);
    msg.setDestinationEntity(236U);
    msg.name.assign("UWQAWBKQOCSFDHDAETXZZRZKKSHIPMJWKMXZZDWFCQMCEQBULLVYQILNHYDVMQGNZBLYOVVFJGPJWEADOSKUZETHXXFAKAVNDYTFLSNISTGUJZELOQPHAXOYYFTIHNEDMCYUHVRRBICVOKMGPAIJPQWIBFHHAIXPLPIGCFUQTLNPCTBBPNUUTZGOSSKO");

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
    msg.setTimeStamp(0.16875897491239567);
    msg.setSource(31521U);
    msg.setSourceEntity(41U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(13U);
    msg.timeout = 2927142489U;

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
    msg.setTimeStamp(0.10961517846222368);
    msg.setSource(44140U);
    msg.setSourceEntity(234U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(142U);
    msg.timeout = 2658150680U;

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
    msg.setTimeStamp(0.21086228001060248);
    msg.setSource(32464U);
    msg.setSourceEntity(98U);
    msg.setDestination(31008U);
    msg.setDestinationEntity(20U);
    msg.timeout = 847380319U;

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
    msg.setTimeStamp(0.7725248980925182);
    msg.setSource(681U);
    msg.setSourceEntity(125U);
    msg.setDestination(60697U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1866853020U;

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
    msg.setTimeStamp(0.848891169208697);
    msg.setSource(28236U);
    msg.setSourceEntity(136U);
    msg.setDestination(3301U);
    msg.setDestinationEntity(24U);
    msg.sessid = 971133058U;

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
    msg.setTimeStamp(0.1799117200752529);
    msg.setSource(31411U);
    msg.setSourceEntity(177U);
    msg.setDestination(40422U);
    msg.setDestinationEntity(16U);
    msg.sessid = 1731050506U;

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
    msg.setTimeStamp(0.9214927958585482);
    msg.setSource(62546U);
    msg.setSourceEntity(26U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2664945797U;
    msg.messages.assign("MOCTHAHRAXANWNJULSJENQNTWPNGOQJUVHOGGNMJTCKDOWLUMIBPGXXRWXRKBN");

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
    msg.setTimeStamp(0.16044054003521968);
    msg.setSource(49951U);
    msg.setSourceEntity(71U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1527199065U;
    msg.messages.assign("UZSOUGEHIYVEODZNDKPOTKXSGZZEDJWQCXOJMNZJEVCGKFTQHQJYXHEYSVOQWQOQUKYBMTIPNYPRYHJCHZJZIPARHZUGNLNVABKTJGXEFFFYGRPIIYBXMQULLWDCTTCJFTKUNDLWKMMVRAULHUFXRRLOVDISSVLDNXPJHGSMEFDNZCBNBXLYXSJADAACFARCQYBHWPQGVGAQRPSETSCMDRMIZNCV");

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
    msg.setTimeStamp(0.9190378396265764);
    msg.setSource(30738U);
    msg.setSourceEntity(114U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(56U);
    msg.sessid = 1888741894U;
    msg.messages.assign("ULRAUPVQAVPSHZTSLZUVSTJLIJYVLVWOWPQKDTNYSSEAIOTAMHWCWOGQDVBCUBPDLXDKBBQTRGMTRVFLMGICZOACJEUYMFIYHURREFXSAPMZMFLWUPZKSHHIFCZFESNJZUZEDXSMAGJNNKALXJMKXHFDEQGQSVEOOTK");

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
    msg.setTimeStamp(0.05625579484325072);
    msg.setSource(14762U);
    msg.setSourceEntity(162U);
    msg.setDestination(15375U);
    msg.setDestinationEntity(151U);
    msg.sessid = 155361139U;

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
    msg.setTimeStamp(0.618310625929277);
    msg.setSource(49258U);
    msg.setSourceEntity(29U);
    msg.setDestination(35943U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2267692776U;

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
    msg.setTimeStamp(0.7665238664587405);
    msg.setSource(52296U);
    msg.setSourceEntity(162U);
    msg.setDestination(40836U);
    msg.setDestinationEntity(33U);
    msg.sessid = 2273409756U;

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
    msg.setTimeStamp(0.8889461742026147);
    msg.setSource(59547U);
    msg.setSourceEntity(239U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(182U);
    msg.sessid = 3177197355U;
    msg.status = 203U;

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
    msg.setTimeStamp(0.11244929665533343);
    msg.setSource(38278U);
    msg.setSourceEntity(112U);
    msg.setDestination(29993U);
    msg.setDestinationEntity(242U);
    msg.sessid = 2173049916U;
    msg.status = 17U;

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
    msg.setTimeStamp(0.5055539857778794);
    msg.setSource(11487U);
    msg.setSourceEntity(102U);
    msg.setDestination(11645U);
    msg.setDestinationEntity(183U);
    msg.sessid = 3574102779U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.03652383730545461);
    msg.setSource(18751U);
    msg.setSourceEntity(188U);
    msg.setDestination(31587U);
    msg.setDestinationEntity(222U);
    msg.name.assign("KDKPENUSQICHHUSLMJFDAWIWEWKZNZTNOZFASXAYMUHXPTCVPLOHRYOZHGMSZCKTLRCSZOXYQAZDNPRWFWGEJJDAGQXOGXNZGEUZBVYQUAJXUTMPHCRLPQJBDQBRQYWNMTRMFULXNDJFVOMXKRYXTMLWYBBTQPAUEOBPDKSIIJIVHNVBEOMVCTJCGEGUACEKIHIAYRZGBVQAPVJFGLURTJMOWVNSHDGKYSDFVFQ");

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
    msg.setTimeStamp(0.791793532265793);
    msg.setSource(64407U);
    msg.setSourceEntity(210U);
    msg.setDestination(59844U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HIYUSMVPUWNKEFTIPNWCENXJEVJVQFBZ");

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
    msg.setTimeStamp(0.6422946410041324);
    msg.setSource(55200U);
    msg.setSourceEntity(109U);
    msg.setDestination(32372U);
    msg.setDestinationEntity(63U);
    msg.name.assign("FOCUXYXGGFBTXYPDSDSHBQKKTSKOBZOABHDDDZWEJCTLSVWRAFT");

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
    msg.setTimeStamp(0.4885252605316973);
    msg.setSource(46133U);
    msg.setSourceEntity(59U);
    msg.setDestination(50992U);
    msg.setDestinationEntity(220U);
    msg.name.assign("ZISHOHEVLHEIIWJJAUKRFTUZVDVGYDXXDDLKFFBCHQWPGQCJBAKAPLDEGCGYSKVOUBFELEXCYZVJQZVICSSYFNMJBARWSKMTMNDQXXHZNNVTOICMOKPJYEAMYHXPCFYTOKLGMRXQXLRSGSXGNMLYLRIZPSWWBPLUQMCNNEAWJBAWRCH");

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
    msg.setTimeStamp(0.0019164238149349533);
    msg.setSource(47570U);
    msg.setSourceEntity(5U);
    msg.setDestination(39711U);
    msg.setDestinationEntity(233U);
    msg.name.assign("NCIYXNLEDJOZJ");

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
    msg.setTimeStamp(0.41459845334511813);
    msg.setSource(55684U);
    msg.setSourceEntity(211U);
    msg.setDestination(4076U);
    msg.setDestinationEntity(178U);
    msg.name.assign("RRJOJZXLEKSJOKZNIZWBYTHHSIFXXXCDTFAOVPPRUZBQUCYWDYKOGEHYMHDZOQEJHALLBWLXDIMUSVTMYQIJTYSBTXNSECUMAOBNEFHUIGYPFPCSAGXZJMMYFQRVLGWWGZNCCEDQTPGBSPFMAQDBNACVEPVVFXRCOBHKGDOSJBAHIVMKKKC");

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
    msg.setTimeStamp(0.7510452159274336);
    msg.setSource(6062U);
    msg.setSourceEntity(149U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(27U);
    msg.type = 67U;
    msg.error.assign("CKUOXPUYRBXKMWKZPSBKNDEZRASWTWVUQKJFNVJSUOPOTXYEWKAVQSGCYAISIUCBPQDRQJQZNQWFIDRWDCIXFLMMJDCXYYSVSDTHDEWIGHIIZPLAOUXRRGKBSECYAOEGFNCVXQGVEFNNQ");

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
    msg.setTimeStamp(0.5841961942605775);
    msg.setSource(33333U);
    msg.setSourceEntity(89U);
    msg.setDestination(58278U);
    msg.setDestinationEntity(15U);
    msg.type = 85U;
    msg.error.assign("YCWXEPHIAKDFDYDXGLERVSMXJPZWWGHNULUTZBABLTCMQXYPRBWYRHHJQVVEQKHAJVNOLFUNTDEDDCOGQIMTDMFYLEPNSSPJVGZQNEANLBADISERNVAUIIGOFPGZNWOEHBWITCMAXMFOUSOZFFNVKUCGDURIQJLYSJYSKHUSORXXJRBCOKUJLBPCKSNDQQLIBFWAQCJBTTSREOWMCKCVAXBVZFPZIYRGXUIGAEKGOH");

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
    msg.setTimeStamp(0.8666137485977411);
    msg.setSource(29744U);
    msg.setSourceEntity(211U);
    msg.setDestination(11551U);
    msg.setDestinationEntity(201U);
    msg.type = 119U;
    msg.error.assign("PNDQDBDPCYCAXIVH");

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
    msg.setTimeStamp(0.2082820415003318);
    msg.setSource(64345U);
    msg.setSourceEntity(181U);
    msg.setDestination(27820U);
    msg.setDestinationEntity(12U);
    msg.seq = 17416U;
    msg.sys_dst.assign("YCXWKKBLJMJPODDCLVPPMLVFGIVOKKULIZ");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {-28, -81, 120, -60, -92, 58, -59, 85, 68, -32, -76, 74, -42, 59, 3, -85, 49, -74, 124, 25, 89, -17, -46, -29, 120, 47, 116, 95, -75, -65, -80, -66, 117, -13, -80, 74, -109, -29};
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
    msg.setTimeStamp(0.6979095655126333);
    msg.setSource(31856U);
    msg.setSourceEntity(30U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(223U);
    msg.seq = 13035U;
    msg.sys_dst.assign("VBSVKNLGCYMDWOPDWBLMWUFTCZAHPUYSSIQBNNGRCFPTCGMVEJAXLWOVVYDGXNCHGCKRSHRDVDPAHTINVLHPOADSOBKTUOYRZEIWRWPTPNJTFYIBUREOMZMDIZYEFSNUXSIXZBWELJCZIEXUXOXUXNQLFZVFZMUQUAOHIJAOMYNKQNZJPCIGBDHOQMAWSLJBRKYQTFLFWHGPKY");
    msg.flags = 126U;
    const signed char tmp_msg_0[] = {-123, 99, 89, -20, -52, -12, -4, -19, 77, -101, 12, -39, -103, -53, -48, -66, 21, 58, 47, 89, -66, 29, 32, -62, 34, -80, 73, -8, 101, -109, 123, 20, -24, 85, 8, 108, 69, -23, -96, 42, -42, -44, 28, 86, 90, 123, -100, 30, 92, -104, 104, 97, 87, 23, -124, 43, 74, -61, -27, 125, 65, 68, -36, 99, -116, 114, 109, 53, 85, -52, -68, -37, 11, -97, -17, -64, 16, -50, 77, 97, 70, -67};
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
    msg.setTimeStamp(0.4768609806677865);
    msg.setSource(27280U);
    msg.setSourceEntity(59U);
    msg.setDestination(20481U);
    msg.setDestinationEntity(247U);
    msg.seq = 24144U;
    msg.sys_dst.assign("SFFPAEGDYLWOHRJDNLIETRYGQNCPRSKEFFBGKJXEJUKUDBPGUYVTEPYQKHFJMWHVBDWABGXLEUEOBOZBISKAFDGRDJULGQQWRUSDFZGHVPHTENNCSJDBCTQNAWJACHMXIZAMCAXQANWRZXPMNALGZGTNPYPCILVPSFXWVLSIZQLPMZMYONJKTURYRVIAKYZOYCVOFOIJVWBCXMXWMTJETZBRQCUKMWNMKYRIVOZFUTUTSXESXHIDLS");
    msg.flags = 203U;
    const signed char tmp_msg_0[] = {-102, -110, 70, 2, -3, -66, -2, -52, 82, 123, 74, 75, 92, -85, 121, -68, 126, 66, 41, -47, -42, 115, -21, 122, 90, -107, -29, -111, -40, -97, -48, 42, 42, -42, 118, -83, 62, 111, 27, 34, 24, 55, 86, 69, -16, 50, 58, 66, 32, 65, -36, -94, -120, 68, -88, -117, 97, 40, 108, 59, 122, 122, 65, 116, -9, -3, 50, 75, -57, 84, -121, 56, -100, 39, 99, 80, 98, -45, 90, 47, -18, -12, 7, 44, -115, -96, -81, -125, -123, -113, -19, -124, -45, -13, 33, -14, 45, -111, -79, 89, 98, -99, -119, 92, 90, -6, -83, 68, 69, -24, 90, -66, -48, -11, 14, -116, -99, -125, 75, 37, 125, -112, 53, 92, -103, 79, -25, 98, -83, 35, -89, 5, 65, 10, 0, 7, 11, 64, 48, -61, -57, -59, 70, -106, 70, -92, 30, 29, -56, -80, 100, -125, 12, 124, -128, -16, -112, -85, -105, -35, 57, -102};
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
    msg.setTimeStamp(0.5984968345018556);
    msg.setSource(53869U);
    msg.setSourceEntity(79U);
    msg.setDestination(17039U);
    msg.setDestinationEntity(79U);
    msg.sys_src.assign("FIWQSSKPCDQTNBUCLHTWGCWWNCIRWECQDPFUYKVPQORPYVAKWRGRAYSFZZUFAQVYJIEVHLSZFKVTMDSBDFTMKOYHGLDFLMZBZQASCVMPDKBRUTPDAKMYTFBFMBPSEENUAIASBRRGWJMSODJNOAUIWPXVWQYOEHKQEZECGEOMJGIDUONHLWRHHOCXLILYBROVITSFJMXYRJUALUTXHYVEPGLJBZNZG");
    msg.sys_dst.assign("UEYUYFSLWHYVARZRBIFGUBIJYVGXBIVRFLAOOKTKNUPMQUYDWZJKTMGHDCAMUJLRLLOLIXUWSOQAHCQECAPDJDGDCGUFNZBVKMCDEQTFBISLFHNOBCGBPZTWYAKBWHGENVQPUNKKQPNMDAMOQPYOKGCEHMSVVZRWCNTCTDTFEAWAIGTHNZKXPLRUDWWEIDLJXVNZXQRXXHJZXHKVSLRYZIHEM");
    msg.flags = 157U;
    const signed char tmp_msg_0[] = {-111, 103, 72, -13, -42, 10, -125, -84, -89, 4, 113, 96, 15, -52, 70, -19, -49, -22, -49, -12, 48, -10, 1, 114, -19, 18, 79, -64, 25, -12, -52, -16, 88, 102, 55, 49, -89, 61, -24, 37, -5, 108, -67, -74, 113, 34, -45, 120, -121, -35, 95, -98, 99, 6, -41, 23, -45, -96, 63, 5, 15, 13, 90, 97, 36, 9, 8, -75, -3, -67, -33, 109, 111, 87, 64, -125, -103, -3, 125, 86, -114, 28, -54, -25, 50, -24, 4, -24, 99, 25, -12, 18, -4, -53, -57, -101, -109, -60, -106, -82, 18, 32, -53, 121, 78, -48, 96, 91, 77, 84, 105, -94, -54, 79, -41, -46, 12, -47, 9, -39, -58, -106, -112, 51, 80, 88, 112, -37, -32, -50, 91, -23, 36, 25, 98, -117, -57, -128, 40, 51, -53, 76, 27, -10, -27, -57, 28, -9, -112, 11, -93, 92, 18, 48, -71, 62, 58, 32, -123, -94, 123, 109, 56, -75};
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
    msg.setTimeStamp(0.4965703934048601);
    msg.setSource(55190U);
    msg.setSourceEntity(60U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(165U);
    msg.sys_src.assign("ESOXQPSFUDAHI");
    msg.sys_dst.assign("RUWIITOABVIUFPUNARARQAJBAWTJZCHXJFAHQJSWLPZJNMOZRFQEVAVEZQNVNFOTQRIHTQI");
    msg.flags = 55U;
    const signed char tmp_msg_0[] = {-127, 17, -98, 109, -120, -66, 60, -87, 1, -128, 3, 87, -110, 14, 38, -113, 6, 55, -33, 75, 49, -19, -72, 119, 74, -51, -21, -80, -89, 52, -36, -10, 109, 46, 45, -6, -53, 22, 2, -107, 13, 24, 26, 13, -14, 58, 111, 89, -25, -4, 86, 6, 59, -23, 49, 118, -112, 62, -35, -82, 100, -126, -6, 86, -104, -29, 66, 34, -52, 101, 121, 7, 59, 20, 98, -19, -76, -82, -85, -64, -10, -87, -93, 22, 67, 89, 6, -121, -124, 10, -21, -58, -72, -27, -50, 114, -58, -103, -32, -56, 33, -71, 46, -66, 25, 82, -66, -34, 110, 106, 118, -57, -11, -3, 74, -19, 11, -60, 96, 62, -71, -2, 1, -68, -65, -126, -42, -20, -73, -8, 92, -93, 122, 16, 32, -87, -18, -64, -105, 7, 117, 99, -80, 24, -14, -26, 29, 75, 5, -122, 7, 50, 126, 1, -90, 22, 55, -3, -5, 97, -54, 35, -86, 9, -82, 106, 72, -48, 57, -102, 28, -67, -68, -22, 46, 3, 7, 115, -30, 7, 89, 54, 75, -87, 124, -31, -124, 33, 25, 35, 72, -8, -64, 67, 89, -83, -86};
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
    msg.setTimeStamp(0.2570299540766642);
    msg.setSource(42830U);
    msg.setSourceEntity(253U);
    msg.setDestination(5957U);
    msg.setDestinationEntity(81U);
    msg.sys_src.assign("DLIDQRZXRBKYWHUHXTSDOKIJRLOFLMTULFGXHKODOASNQYGWKROHBAVCYKFDIGVTIISPGHXMFRIZYFEQBDNHFBVELWPZLNGUYQRSSJSVFUJBYTAFKNDPNAMUUUAOIJEVGUFCXKPTSPMEWGSZECZAZHUWZMJSGSJLOVBCPTBQJNLQOIOALXWCEXNYERRJRDXOTVHETAPBXAQHWPZYKTYVJUMLCMINEJZCZCCEWVKVGHFQNMPDQQBDIMNW");
    msg.sys_dst.assign("DTIFKNPWWBBITSXNTARUGGHCCEIVSAVTDZBBXAMHDOATJXYHMITM");
    msg.flags = 52U;
    const signed char tmp_msg_0[] = {121, -125, -41, 72, 89, -1, -10, 4, -59, -77, 73, -101, -89, -59, -61, -124, -70, -15, -121, 120, 48, 65, -104, -18, -78, -16, 4, 105, 110, -1, 13, 6, 16, -98, 34, 43, -22, -82, 21, -106, 117, 81, 57, 9, 82, 66, 20, 51, -13, -13, 55, 100, -33, 72, -122, -73, -92, 56, -81, 32, 125, 0, -7, 99, 55, 2, 99, 8, -57, -53, 100, -1, 96, 94, 56, -57, -37, 54, -71, 28, 78, 59, -6, 39, -87, 119, -76, 113, -120, -35, 61, 32, 46, 103, 61, 82, -64, 94, -68, -104, 53, 100, 10, -5, -2, 48, 93, 0, -106, -69, 27, -94, 25, 26, -70, 104, -73, -114, 116, 55, 47, 114, 51, 54, -100, 24, 5, 116, 118, -92, 126, -98, 9, 125, -29, 101, -12, 13, -33, 66, 120, -87, -1, 105, -8, 98, 118, -84, -22, -101, -72, 29, -104, 8, -5, 86, -86, 55, 119, -117, -120, -50, -38, 96};
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
    msg.setTimeStamp(0.8581953497525223);
    msg.setSource(32200U);
    msg.setSourceEntity(38U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(87U);
    msg.seq = 14380U;
    msg.value = 98U;
    msg.error.assign("PJOWAHCQZXNHOZZGPFGEMHUEDLOJFEDEIRCKSNFKANQSWTCPNBHLJHGKIFHMARJGVXFRRAJSOBYTEWKVSQUWIUIYNNUJAHYYVMPLWVZYDBZTEQBKBYFGRLUTNIGOHTTGHXFORAZN");

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
    msg.setTimeStamp(0.7181420809153858);
    msg.setSource(45753U);
    msg.setSourceEntity(250U);
    msg.setDestination(29371U);
    msg.setDestinationEntity(19U);
    msg.seq = 48541U;
    msg.value = 13U;
    msg.error.assign("SJILDDREEASFHEMYKISRZBRQTYQ");

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
    msg.setTimeStamp(0.4996420716270382);
    msg.setSource(52707U);
    msg.setSourceEntity(153U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(179U);
    msg.seq = 32841U;
    msg.value = 60U;
    msg.error.assign("PONKWYXJYVYHCGRPRIWTGPEOPJZQBDFTMEOPMJQSBJHPBSOPIDGXURAMDMXSKLAWJVRNVBLNU");

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
    msg.setTimeStamp(0.2240655981562849);
    msg.setSource(1956U);
    msg.setSourceEntity(34U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(54U);
    msg.seq = 6498U;
    msg.sys.assign("SQDGGNMNWOZUYPUVEVCFOQEVTQYLJUNZBQTHATLWPOSHRPRUWOAMJZOYJMFIJMWGKWLHXMTZBYVGTCNNXHYOQICVTZFVGVOWJSVDBUOIURISYFLXKYIHCDZYHUCAJL");
    msg.value = 0.3168209613154148;

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
    msg.setTimeStamp(0.560994772265926);
    msg.setSource(6948U);
    msg.setSourceEntity(99U);
    msg.setDestination(1950U);
    msg.setDestinationEntity(192U);
    msg.seq = 4170U;
    msg.sys.assign("OLYWVMTHWADRPUVIBZWZSWYWQGKWNFURWYFQGTAMQPDMTUAGOFGCQSZLVPZKBKIXMKVQBJJHYJAZALCSJMUTNGGISEXVRHPRIELWPKNGLHAITCEXBYBFRHANLXXSMQDNZVMCOJHQBBHOOJPZLUVRAXJFGNNQUODDSPHOGXTEOVJMNDCFRRTONAAETYCMCHKZUKTPQUY");
    msg.value = 0.1874048972517901;

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
    msg.setTimeStamp(0.17470029766390116);
    msg.setSource(7400U);
    msg.setSourceEntity(218U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(56U);
    msg.seq = 778U;
    msg.sys.assign("OYILIWAVBGVXFOENDCVVFXXJTPFHBQJCKLYJMKVNLKISOCWFCQEUPUXAHVQZRWNBJRTTHNYOBQRJRWHQNPTRFARAVUDDLASFEOLKUJYMWMDTSDGBMPGFWTEXYRFCOHWDMQIUVSKUOTMIZSBNPHJSGYASFQIAFLXPOZZTXNCCYGMGQAMHEZAJDMWDCLXKNEYXLMPZRKCACZUEWOJZUUIYHDUQLTZPHPIYBN");
    msg.value = 0.632862964850086;

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
    msg.setTimeStamp(0.9960934562775098);
    msg.setSource(5697U);
    msg.setSourceEntity(62U);
    msg.setDestination(36764U);
    msg.setDestinationEntity(206U);
    msg.seq = 19289U;
    msg.sys_dst.assign("YCHRLXHSCUCVPPUZXFTXKBSCMLENRQNKWTIXKZCINHJKBXDS");
    msg.timeout = 0.20544301444945945;

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
    msg.setTimeStamp(0.6475209153399343);
    msg.setSource(32890U);
    msg.setSourceEntity(92U);
    msg.setDestination(55290U);
    msg.setDestinationEntity(0U);
    msg.seq = 55592U;
    msg.sys_dst.assign("AKQIQRDGXKPJPFSJHTJGEIGZCRUCALZHXRYXQARLJRNAQWBSGQLTSKHYIDCAPDFIHMMNRWJLLEXSMSPJJXVXPVETHGOTHEBYETDTKNOBWZTZGQOCJWHSLIZYGVOSNDCYUMWCCWUBVIBUAIBMFKGHNBUELVFBZJOHWTEZAKKOGUFHDDSYKVXKBMZCDMIZDPGATRXMPFRLNFVRYUCWUSRQBYWEOOJLPDQFV");
    msg.timeout = 0.7960848252222663;

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
    msg.setTimeStamp(0.3271848026458001);
    msg.setSource(11721U);
    msg.setSourceEntity(92U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(163U);
    msg.seq = 37591U;
    msg.sys_dst.assign("QOTZQHGDHZIKVPAVJEHDNDQUTTADTAOFAFGWNDUPXBRJTUJIIMGGKLLHBYEKGFDUKDWPNYIJNAJSJXPCBRZQPSMFIGEXAWILNBXYMJGRRYERCLPDOTR");
    msg.timeout = 0.14042480120416811;

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
    msg.setTimeStamp(0.7176858783334461);
    msg.setSource(35635U);
    msg.setSourceEntity(66U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(71U);
    msg.action = 175U;
    msg.longain = 0.3931842857548571;
    msg.latgain = 0.28262391450953206;
    msg.bondthick = 729806240U;
    msg.leadgain = 0.3164409346949397;
    msg.deconflgain = 0.09484409838886865;

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
    msg.setTimeStamp(0.3356496444104985);
    msg.setSource(5157U);
    msg.setSourceEntity(251U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(37U);
    msg.action = 193U;
    msg.longain = 0.817065553185533;
    msg.latgain = 0.8466806218693229;
    msg.bondthick = 2770171071U;
    msg.leadgain = 0.21432339132063083;
    msg.deconflgain = 0.44877258125464603;

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
    msg.setTimeStamp(0.8650249562394453);
    msg.setSource(59448U);
    msg.setSourceEntity(35U);
    msg.setDestination(9817U);
    msg.setDestinationEntity(135U);
    msg.action = 170U;
    msg.longain = 0.33976461308330863;
    msg.latgain = 0.9591784324101664;
    msg.bondthick = 4283534531U;
    msg.leadgain = 0.45403618193174955;
    msg.deconflgain = 0.469861653173797;

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
    msg.setTimeStamp(0.5471874933012023);
    msg.setSource(25293U);
    msg.setSourceEntity(226U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(73U);
    msg.err_mean = 0.968606765405429;
    msg.dist_min_abs = 0.712735390351484;
    msg.dist_min_mean = 0.6410572577172486;

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
    msg.setTimeStamp(0.8372054430668574);
    msg.setSource(48513U);
    msg.setSourceEntity(18U);
    msg.setDestination(22530U);
    msg.setDestinationEntity(135U);
    msg.err_mean = 0.9818716005776502;
    msg.dist_min_abs = 0.30452158293944653;
    msg.dist_min_mean = 0.41877330092751686;

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
    msg.setTimeStamp(0.6081433929434334);
    msg.setSource(3855U);
    msg.setSourceEntity(87U);
    msg.setDestination(48456U);
    msg.setDestinationEntity(213U);
    msg.err_mean = 0.99426123868119;
    msg.dist_min_abs = 0.3074015549189203;
    msg.dist_min_mean = 0.3092951488049708;

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
    msg.setTimeStamp(0.6617141616311389);
    msg.setSource(19417U);
    msg.setSourceEntity(11U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(47U);
    msg.action = 123U;
    msg.lon_gain = 0.862921893480149;
    msg.lat_gain = 0.13421188620959212;
    msg.bond_thick = 0.49918904817626575;
    msg.lead_gain = 0.7703198214854364;
    msg.deconfl_gain = 0.7882662044508504;
    msg.accel_switch_gain = 0.945717314993282;
    msg.safe_dist = 0.15259281410631687;
    msg.deconflict_offset = 0.053213041410387296;
    msg.accel_safe_margin = 0.24713588901079642;
    msg.accel_lim_x = 0.7653219703721428;

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
    msg.setTimeStamp(0.25646484947520265);
    msg.setSource(204U);
    msg.setSourceEntity(67U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(171U);
    msg.action = 104U;
    msg.lon_gain = 0.2357156049665402;
    msg.lat_gain = 0.7194095116180631;
    msg.bond_thick = 0.20123064193596507;
    msg.lead_gain = 0.2774798110020841;
    msg.deconfl_gain = 0.957161822427999;
    msg.accel_switch_gain = 0.2910209721102699;
    msg.safe_dist = 0.8676870325320714;
    msg.deconflict_offset = 0.29263075347070444;
    msg.accel_safe_margin = 0.5779818408045383;
    msg.accel_lim_x = 0.059104982284030605;

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
    msg.setTimeStamp(0.4872491744046936);
    msg.setSource(35927U);
    msg.setSourceEntity(59U);
    msg.setDestination(1144U);
    msg.setDestinationEntity(152U);
    msg.action = 180U;
    msg.lon_gain = 0.4920919241346914;
    msg.lat_gain = 0.4497502900119217;
    msg.bond_thick = 0.3444584053997557;
    msg.lead_gain = 0.8800909818973252;
    msg.deconfl_gain = 0.9027293764238039;
    msg.accel_switch_gain = 0.40164745021525405;
    msg.safe_dist = 0.8106270572865838;
    msg.deconflict_offset = 0.251902497090715;
    msg.accel_safe_margin = 0.10588082405834398;
    msg.accel_lim_x = 0.5728616142388149;

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
    msg.setTimeStamp(0.6841536437886074);
    msg.setSource(37257U);
    msg.setSourceEntity(53U);
    msg.setDestination(61444U);
    msg.setDestinationEntity(113U);
    msg.type = 100U;
    msg.op = 65U;
    msg.err_mean = 0.9163210517614337;
    msg.dist_min_abs = 0.24264523531344817;
    msg.dist_min_mean = 0.8179109240344203;
    msg.roll_rate_mean = 0.5077489895739918;
    msg.time = 0.0180514251575421;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 46U;
    tmp_msg_0.lon_gain = 0.20165535391947986;
    tmp_msg_0.lat_gain = 0.6697247007637078;
    tmp_msg_0.bond_thick = 0.9682465576315693;
    tmp_msg_0.lead_gain = 0.43193331938720847;
    tmp_msg_0.deconfl_gain = 0.26376795426903665;
    tmp_msg_0.accel_switch_gain = 0.2741932301950689;
    tmp_msg_0.safe_dist = 0.8791909108621538;
    tmp_msg_0.deconflict_offset = 0.6205628181563176;
    tmp_msg_0.accel_safe_margin = 0.5036619024224283;
    tmp_msg_0.accel_lim_x = 0.11460398057858423;
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
    msg.setTimeStamp(0.3038262470180796);
    msg.setSource(2791U);
    msg.setSourceEntity(103U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(41U);
    msg.type = 111U;
    msg.op = 69U;
    msg.err_mean = 0.9561943868797174;
    msg.dist_min_abs = 0.8564841198454923;
    msg.dist_min_mean = 0.7789641167195368;
    msg.roll_rate_mean = 0.25227622493090984;
    msg.time = 0.04413785546563431;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 179U;
    tmp_msg_0.lon_gain = 0.7503932997776934;
    tmp_msg_0.lat_gain = 0.47508529956453127;
    tmp_msg_0.bond_thick = 0.7133146577714716;
    tmp_msg_0.lead_gain = 0.04515573852321486;
    tmp_msg_0.deconfl_gain = 0.5787077964764314;
    tmp_msg_0.accel_switch_gain = 0.5465191879285882;
    tmp_msg_0.safe_dist = 0.5914848721853684;
    tmp_msg_0.deconflict_offset = 0.48843196182916027;
    tmp_msg_0.accel_safe_margin = 0.20206752527765792;
    tmp_msg_0.accel_lim_x = 0.4410284855833606;
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
    msg.setTimeStamp(0.46050681545115846);
    msg.setSource(48335U);
    msg.setSourceEntity(24U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(207U);
    msg.type = 185U;
    msg.op = 218U;
    msg.err_mean = 0.19636113004931632;
    msg.dist_min_abs = 0.6318764788462504;
    msg.dist_min_mean = 0.6690233139086816;
    msg.roll_rate_mean = 0.37809843278106636;
    msg.time = 0.7931689630206757;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 58U;
    tmp_msg_0.lon_gain = 0.8886528479013214;
    tmp_msg_0.lat_gain = 0.5153182087392014;
    tmp_msg_0.bond_thick = 0.743622890119406;
    tmp_msg_0.lead_gain = 0.3109646091023629;
    tmp_msg_0.deconfl_gain = 0.9891934070809845;
    tmp_msg_0.accel_switch_gain = 0.327637065903985;
    tmp_msg_0.safe_dist = 0.9056543188598255;
    tmp_msg_0.deconflict_offset = 0.2908646323552021;
    tmp_msg_0.accel_safe_margin = 0.6133945148584679;
    tmp_msg_0.accel_lim_x = 0.6643441757983891;
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
    msg.setTimeStamp(0.21343021794803696);
    msg.setSource(57667U);
    msg.setSourceEntity(79U);
    msg.setDestination(60504U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.4174810957843439;
    msg.lon = 0.21333041127253516;
    msg.eta = 3856197522U;
    msg.duration = 24486U;

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
    msg.setTimeStamp(0.12460367272412487);
    msg.setSource(41985U);
    msg.setSourceEntity(144U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.2967109064069908;
    msg.lon = 0.8322036166462852;
    msg.eta = 2232070979U;
    msg.duration = 4553U;

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
    msg.setTimeStamp(0.4998255817669691);
    msg.setSource(26970U);
    msg.setSourceEntity(98U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.13062604759976326;
    msg.lon = 0.8700756583495616;
    msg.eta = 1635975645U;
    msg.duration = 22250U;

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
    msg.setTimeStamp(0.5309216905512509);
    msg.setSource(63336U);
    msg.setSourceEntity(111U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(122U);
    msg.plan_id = 54739U;

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
    msg.setTimeStamp(0.6398441166866004);
    msg.setSource(37610U);
    msg.setSourceEntity(12U);
    msg.setDestination(4182U);
    msg.setDestinationEntity(2U);
    msg.plan_id = 38626U;

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
    msg.setTimeStamp(0.9262174277850308);
    msg.setSource(10505U);
    msg.setSourceEntity(52U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(109U);
    msg.plan_id = 45590U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4366766227971154;
    tmp_msg_0.lon = 0.38857387042149494;
    tmp_msg_0.eta = 353888238U;
    tmp_msg_0.duration = 27U;
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
    msg.setTimeStamp(0.5114231206972337);
    msg.setSource(26835U);
    msg.setSourceEntity(136U);
    msg.setDestination(64375U);
    msg.setDestinationEntity(2U);
    msg.type = 251U;
    msg.command = 78U;
    msg.settings.assign("WGFZAHXDSXYAMWQVNGEHNSJMNYNOZANPGOFFRLFXECNXSUKYQKPLCQWDDZWSZGQTPMIGKOTBFRGCRLEYYQJAILBDMKTABZUCSDAXMNCENUVTKYVPKIKAIHHRZLRJZQEMKETJWFIHDOBHZONSEVNMJTAJVUEQGVCHWLSICRJCZCEBBPBJRWLIITARFO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43141U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.08201894476564942;
    tmp_tmp_msg_0_0.lon = 0.08851496677613935;
    tmp_tmp_msg_0_0.eta = 4285835457U;
    tmp_tmp_msg_0_0.duration = 25140U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CJBTAXTEJAZMRFRKDIQPPR");

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
    msg.setTimeStamp(0.7938636900057082);
    msg.setSource(61104U);
    msg.setSourceEntity(43U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(25U);
    msg.type = 182U;
    msg.command = 37U;
    msg.settings.assign("XXVPOQZDFJKTDIIGJUKXYPYCVZRLDBMML");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8704U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9254460856567679;
    tmp_tmp_msg_0_0.lon = 0.5780824428209775;
    tmp_tmp_msg_0_0.eta = 3297837216U;
    tmp_tmp_msg_0_0.duration = 52907U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VLXUMZXQHJNTRJPETQRNGCPOVPXQZZMTOFWVCSDLGSUDRGOUCHTBFNQAVNIEAZKFSOVCJJNLECNMFILIWHPBPQBQHXCYMAAIMXEFKJUGKMMODXNHWBDSELMHYRNVALDJGVKGCWXSRFHLEIIRBYUCTKWSKUJWDMFXRFUWXLWKKYZGZAHYLWRZBOQDJFYVHOIYBKTMLPSUYRYTGYPZAOZEUVHGBDISEXODV");

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
    msg.setTimeStamp(0.688847858429604);
    msg.setSource(10872U);
    msg.setSourceEntity(45U);
    msg.setDestination(6457U);
    msg.setDestinationEntity(234U);
    msg.type = 58U;
    msg.command = 232U;
    msg.settings.assign("CBQEMHNWHWFDOYWZGHLWWKOHBADXLLTFCTGBZEAKZYPSJUTGUVZRVKEWFBTUPQNAIYZWMEKMWOZLGOGPKXLLYVORHDCSBUJTVJGVUYXXGUAUHCZXNPAICSFMJYEDIOBHQSITQSFKZUCJGFILQPFFTCMGNSDRJNHRAPOOZQIANQRRLDTTFX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 63808U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.38953542046984446;
    tmp_tmp_msg_0_0.lon = 0.21357664009387134;
    tmp_tmp_msg_0_0.eta = 1382573536U;
    tmp_tmp_msg_0_0.duration = 4973U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QIKIBCLXUDUPIHEVWFEAWRBAOXHUPKHAEAYWGLCYDBEDWYWBYBLJREGFZKYESYFGHNQFRAZX");

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
    msg.setTimeStamp(0.3956282478863353);
    msg.setSource(6680U);
    msg.setSourceEntity(132U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(56U);
    msg.state = 180U;
    msg.plan_id = 55127U;
    msg.wpt_id = 206U;
    msg.settings_chk = 64987U;

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
    msg.setTimeStamp(0.7568980506491407);
    msg.setSource(19829U);
    msg.setSourceEntity(118U);
    msg.setDestination(28565U);
    msg.setDestinationEntity(208U);
    msg.state = 3U;
    msg.plan_id = 55966U;
    msg.wpt_id = 53U;
    msg.settings_chk = 59473U;

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
    msg.setTimeStamp(0.15355175403691523);
    msg.setSource(16402U);
    msg.setSourceEntity(150U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(72U);
    msg.state = 216U;
    msg.plan_id = 17347U;
    msg.wpt_id = 245U;
    msg.settings_chk = 51201U;

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
    msg.setTimeStamp(0.12815580239869717);
    msg.setSource(20432U);
    msg.setSourceEntity(53U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(149U);
    msg.uid = 27U;
    msg.frag_number = 19U;
    msg.num_frags = 134U;
    const signed char tmp_msg_0[] = {-20, 94, 28, 5, 65, -6, -35, -123, -7, -71, 75, -30, 101, 35, -73, -115, -71, 29, 119, -33, 104, -28, 109, -44, 110, -100, 42, -72, -57, 41, 78, -56, -117, 78, 92, 112, -78, -84, 18, 41, -49, -42, 19, -3, -13, -35, 116, -95, -27, -32, -4, 106, -75, -95, 99, -112, -22, -5, -103, -103};
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
    msg.setTimeStamp(0.7857698546681892);
    msg.setSource(32944U);
    msg.setSourceEntity(171U);
    msg.setDestination(39228U);
    msg.setDestinationEntity(181U);
    msg.uid = 88U;
    msg.frag_number = 75U;
    msg.num_frags = 241U;
    const signed char tmp_msg_0[] = {119, 76, 117, -91, -128, -74, 99, 74, 39, -25, -45, -33, 8, 6, -59, -72, -12, 96, 6, -88, 108, 79, -16, -17, -51, 8, -113, 70, -127, 73, -112, 82, -31, -53, 89, 83, 105, -112, 51, -36, 112, 40, -67, -18, -63, -16, -51, -75, -114, -14, 54, -2, 3, 122, 106, -92, 113, 89, -18, 25, -97, -14, 10, 28, -124, -6, 64, -6, 105, 112, 47, -5, 31, 14, 3, 73, -52, -23, -67, 31, 44, -113, -77, -43, 117, 121, 18, 20, -25, -43, 104, -102, 112, -57, 78, -56, 14, -44, -99, 86, -64, -18, -32, -26, -42, -46, 120, -93, 14, 124, 51, 6, 102, 97, 10, 24, 54, -94, 4, -19, 102, 20, -23, -3, 58, -59, -117, 75, 21, -7, -76, 106, -58, 56, 100, 17, 12, 50, -61, -97, 26, -43, -88, 122, -62, -61, -16, -70, -44, -21, -56, -40, -43, 50, -45, -39, -17, 18, 18, -33, 77, -89, -55, 14, 93, 10, 111, -71, -51, -86, 52, -60, -23, 9, -58, -71, 78, -123, 101, 35, 65, -112, 14, 40, 43, 126, 94, 109, -13, 126, -2, 125, 39, 106, -43, 24, -69, -63, -46, 16};
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
    msg.setTimeStamp(0.5799195482901031);
    msg.setSource(63209U);
    msg.setSourceEntity(87U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(41U);
    msg.uid = 26U;
    msg.frag_number = 72U;
    msg.num_frags = 59U;
    const signed char tmp_msg_0[] = {-84, -5, 117, -6, 105, 11, 15, 26, 61, 115, -3, -115, 111, 108, -125, -43, -84, -46, -87, 77, -55, 101, 7, -110, 12, -14, 94, -118, 116, 78, -18, -111, 58, 61, -80, 115, -98, 50, 44, 49, -1, 91, 95, -4, 1, 119, 98, -110, -117, 41, -81, 12, -117, -6, -102, 79, -103, -92, -2, -85, -104, -45, 120, 94, -67, 55, -76, -60, -46, 10, -98, -76, -51, -93, 118, 105, 71, -88, -11, -48, 109, 123, -89, -22, 91, -123, -24, -3, 99, 74, 81, -117, 91, 125, -54, -44, -91, -7, -93, -123, -20, -124, -128, -17, 37, -24, -7, -76, 49, 55, -3, -125, -9, 109, 50, 52, 125, -78, 103, 113, 16, 6, 2, 28, 28, 27, 29, 106, 11, -21, 114, 46, -63, 10, 98, 59, 123, -4, 57, 36, -86, 77, 103, 71, 52, 107, -1, -15, -118, 34, -70, -54, -9, 75, -116, 58, -58, -105, 76, 106, 93, -118};
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
    msg.setTimeStamp(0.999136038691824);
    msg.setSource(28670U);
    msg.setSourceEntity(213U);
    msg.setDestination(6840U);
    msg.setDestinationEntity(37U);
    msg.content_type.assign("KLFQUVHTVCXZEYTWIPPWNKXWBUKHXGDMBBFRWPKYWHIFFLSCNMSFCNTPSOQHACGZHPLIOIDRMQJDUEQVSGUCYIZDAFEYOZGTKLIQSVAMRYERAPZETNJMCPJRGAQSAOXSLEJAWHUYJWPEJTSUODFBJGTLHRVEIRFCLHVRJBRNLVPQEMQJVUTXYOPAXBMOCDMGZOFCBWWZWDNHKDY");
    const signed char tmp_msg_0[] = {-126, 52, -5, -60, 32, 2, 67, 61, 39, 34, -77, -117, 112, 4, 39, 58, 35, -33, -36, 38, 125, -4, -47, -61, -102, -22, 80, 120, -85, -27, -74, 80, 54, 41, -9, -111, -65, -25, -103, -82, -75, 56, -106, -82, 36, -57, 35, -31, 0, 13, 27, -21, -60, 51, -101, -85, -89, -10, -78, -22, 12, -21, 117, 126, 55, 65, -127, 95, 25, -65, -102, -74, 3, -118, 83, -100, -42, -109, -65, 82, 53, -61, 108, -15, -10, -17, -28, 12, 49, 67, -6, -37, -1, -100, -20, -110, -96, 78, -24, -74, -59, 27, -11, -102, -107, 22, 121, 113, 54, 76, -128, -43, -56, 94, 93, 88, -124, -36, 57, 51, -54, 36, 103};
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
    msg.setTimeStamp(0.9055873305276213);
    msg.setSource(13896U);
    msg.setSourceEntity(98U);
    msg.setDestination(8238U);
    msg.setDestinationEntity(88U);
    msg.content_type.assign("RQTMHOZCSVJTDVDBENYBVRL");
    const signed char tmp_msg_0[] = {-125, 4, 78, 67, 77, 16, 114, -62, 71, -72, -119, 43, 83, -99, 23, -36, 113, 115, -52, -100, 118, -126, -28, 82, -126, 91, -124, -93, -16, -113, -110, -106, 97, -57, 45, 82, -118, 66, 79, -28, -37, -56, -92, -59, 52, -13, -108, 122, -21, -124, 20, 117, 1, -80, 52, -127, 83, 118, 71, 120, -125, -41, 38, -31, 77, -61, 58, 73, -103, 25, 9, 87, 74, 83, 74, -25, -110, -92, -116, -56, -84, 32, -84, 73, 45, 88, -9, 112, 117, -102, -69, 43, -20, 5, 50, 76, 29, -51, 109, -2, -12, 93, -125, 103, 49, -28, -82, -27, -109, -82, 54, 37, -101, 3, 103};
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
    msg.setTimeStamp(0.02763448560518056);
    msg.setSource(46491U);
    msg.setSourceEntity(163U);
    msg.setDestination(19499U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("DKXOQKZBSNBAUEZICHBPJWHNYUTVGWDXROPEQZQKIUBOCWACAQKRNEDMGSFXMZXVMGRWJDYZ");
    const signed char tmp_msg_0[] = {2, 10, -1, 63, 36, 24, -10, 38, -106, 53, 19, 122, -121, 100, -53, 10, -112, 33, 38, -67, -107, 47, -88, -46, 84, -85, 114, 105, 53, 29, 19, -124, 122, 71, -108, 62, 88, -117, 79, 78, -93, -122, -112, 102, -27, 29, -119, -18, -69, -17, -4, -103, 16, -6, 118, -28, -39, 122, 66, 39, 107, 20, -24, 70, -36, -116, 104, -39, -71, -67, 116, 105, -118, 2, -60, -27, -13, -65, 62, -69, 107, -34, 78, 20, 122, -109, -49, -26, -7, -6, 11, -110, -96, 70, 7, 103, 12, -30, -127, -98, -78, 89, -63, -3, 106, -50, -50, 54, -78, -73, 29, 48, -77, -33, 114, 80, -127, -56, 41, -51, 2, -88, 79, 109, 60, -3, -77, 56, -107, 73, 82, 116, -117, -10, 13, -68, 107, 4, 34, 66, 58, -28, -19, 110, -56, -38};
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
    msg.setTimeStamp(0.8512083491778312);
    msg.setSource(10289U);
    msg.setSourceEntity(60U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.7286905350228692);
    msg.setSource(33397U);
    msg.setSourceEntity(141U);
    msg.setDestination(8525U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.08051885067559295);
    msg.setSource(15841U);
    msg.setSourceEntity(18U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.14402445726177127);
    msg.setSource(47948U);
    msg.setSourceEntity(120U);
    msg.setDestination(9384U);
    msg.setDestinationEntity(218U);
    msg.target = 25716U;
    msg.bearing = 0.5512499976292827;
    msg.elevation = 0.22372561544197356;

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
    msg.setTimeStamp(0.520731996972736);
    msg.setSource(48871U);
    msg.setSourceEntity(243U);
    msg.setDestination(55616U);
    msg.setDestinationEntity(59U);
    msg.target = 676U;
    msg.bearing = 0.7522907636144052;
    msg.elevation = 0.6055349306328576;

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
    msg.setTimeStamp(0.7555500175893592);
    msg.setSource(35944U);
    msg.setSourceEntity(60U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(19U);
    msg.target = 6619U;
    msg.bearing = 0.6400591304117528;
    msg.elevation = 0.9601863232714524;

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
    msg.setTimeStamp(0.6943108204552453);
    msg.setSource(14466U);
    msg.setSourceEntity(175U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(123U);
    msg.target = 7145U;
    msg.x = 0.12707036556634277;
    msg.y = 0.9883655976969701;
    msg.z = 0.6165900608902167;

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
    msg.setTimeStamp(0.17744393802638014);
    msg.setSource(10918U);
    msg.setSourceEntity(15U);
    msg.setDestination(26812U);
    msg.setDestinationEntity(152U);
    msg.target = 27380U;
    msg.x = 0.40402549310729396;
    msg.y = 0.11920078347039054;
    msg.z = 0.7582059212737684;

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
    msg.setTimeStamp(0.5453110482541115);
    msg.setSource(12670U);
    msg.setSourceEntity(115U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(85U);
    msg.target = 49360U;
    msg.x = 0.5498724520409948;
    msg.y = 0.2728793258791391;
    msg.z = 0.18535442676925373;

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
    msg.setTimeStamp(0.8657378042100569);
    msg.setSource(6545U);
    msg.setSourceEntity(19U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(130U);
    msg.target = 52970U;
    msg.lat = 0.16790414978548007;
    msg.lon = 0.710989360584481;
    msg.z_units = 85U;
    msg.z = 0.19179813877177798;

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
    msg.setTimeStamp(0.6331716957849931);
    msg.setSource(39439U);
    msg.setSourceEntity(61U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(51U);
    msg.target = 10414U;
    msg.lat = 0.05327519314094242;
    msg.lon = 0.8458984833343283;
    msg.z_units = 160U;
    msg.z = 0.4716263236863496;

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
    msg.setTimeStamp(0.7906982133065655);
    msg.setSource(51918U);
    msg.setSourceEntity(55U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(147U);
    msg.target = 52661U;
    msg.lat = 0.21264537815866236;
    msg.lon = 0.369851254728774;
    msg.z_units = 81U;
    msg.z = 0.7451977676202326;

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
    msg.setTimeStamp(0.8161790445207082);
    msg.setSource(32050U);
    msg.setSourceEntity(194U);
    msg.setDestination(50238U);
    msg.setDestinationEntity(141U);
    msg.locale.assign("MOHJIZKQTEERGTOSWFREAZKVVZSYITEYRYXXDGVCIJOBYYIDWUXNRWAWTBLLSEALPLMSNLCJCLRIABFNJZKPLOLMPDGVPGMPTSMTQGZZIQDNBSKMDQLBHZPCY");
    const signed char tmp_msg_0[] = {123, 37, 105, 73, -66, 96, -87, -107, 97, -95, -16, -32, -69, -36, -61, -94, 69, -55, 67, -126, 67, -20, 38, -35, -8, -48, 116, 35, -102, -8, -118, -93, 8, 116, -122, 99, 10, -81, -94, 27, -75, -126, -1, 22, 59, 23, -83, 105, 44, 73, -109, -38, -96, -27, 39, -77, 31, 106, -120, -66, 40, -53, -22, 90, -92, 65, -67, 104, -123, -53, 111, -30, 83, 75, -53, -24, 35, -9, -128, 15, -28, -107, 70, -61, -40, 27, 22, 94, 46, -52, 56, -90, 48, -119, -27, 57, 25, -122, -27, 100, 39, 24, 75, 35, 0, -90, 26, 53, 21, 99, 2, -91, 19, 83, 24, 116, 6, 105, 72, 14, -104, -11, 81, -42, 6, 98, -87, -39, 121, -120, 70, 59, -61, 5, -38, -60, -92, -78, -120, -85, -26, 23, 104, -124, 24, -18, -50, 25, 80, 71, 122, 72, 72, -45, -55, 112, -112, 106, -13, 106, 20, -125, -23, -39, 63, -67, -6, 96, 0, -47, -23, -124, -10, -83, 13, -123, 35, 35, 54, -87, -37, -43, 90, -50, 70, 33, -109, 103, -81, -70, 51, -67, 68, -99, 103, -3, -100, -17, -62, -47, -33, -2, 107, 72, 84, 89, -97, -66, 110, -96, 50, -83, -73, -122, -99, -112, -128, 118, -103, -100, -1, -61, 78, 58, -112, -113, 109, -126, 95, -89, -123, 35, 67, -77, 43, 75, -60, -32, -108, 61, 39, -100, 6, -115, 38, -112, 87, -83, -48, -10, -118};
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
    msg.setTimeStamp(0.3764766657049464);
    msg.setSource(6439U);
    msg.setSourceEntity(143U);
    msg.setDestination(9165U);
    msg.setDestinationEntity(54U);
    msg.locale.assign("IZSGEQNIZYCMYAHRSEUJMIPOKUMAOKZJHIEXUHCPBQWEABBFASLDYFHXMQDWQBONMMIGLGFWFDTRSGGLGCQIBKOMAUSAWTFBVCXHYZNVKMPXNYJHHOSSEUFUNYCHGPPPPZNUWBNFYDKSPALGOCKNRYJADENMLAIWZJKJCRQFPDRPLDXCELURRKVBGECIYYVLTDEZJQJDWIZUXKDZBTTQ");
    const signed char tmp_msg_0[] = {121, -21, -27, -85, -60, -35, 25, -79, -87, 93, 50, -108, 59, -51, -70, -65, -80, -73, 105, 85, -41, -45, 61, -4, -15, 55, -92, 85, -126, -20, -117, -12, -22, -63, -102, -84, 25, 126, -68, 51, 32, -122, -54, 97, 70, 57, -57, -13, -42, 48, -71, -110, -67, 52, 25, -21, -9, 53, 13, 32, -82, -50, -22, -78, 93, 36, -37, 27, -63, -89, -108, -2, 11, 111, 9, -7, -9, 43, -55, -71, -3, -61, 23, 114, 5, -34, 105, -14, 95, 104, 120, 2, 8, -56, 58, -34, -112, 52, -116, -12, -107, -122, 38, -18, -70, 39, 8, -103, 47, 35, -82, -99, -28, -68, 77, -108, 51, 49, -74, -26, 31, 54, 51, 100, -73, -6, 111, -75, 32, 8, 13, 37, 82, 125, 44, -82, -48, 5, -20, -123, -20, -108, -78, -100, -75, 58, -117, 103, -92, -98, 44, 23, 118, 103, -81, -118, 65, -34, -81, -105, 93, -33, -125, -8, -120, -9, 107, 4, -68, -124, -86, 13, -117, -84, 79, -15, -89, 85, -30, -76, 15, 24, 83, 120, -10, 15, 121, -69, 116, 9, -127, -56, -6, -83, 83, -124, 80, -46, 104};
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
    msg.setTimeStamp(0.16206266411209191);
    msg.setSource(16015U);
    msg.setSourceEntity(106U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(215U);
    msg.locale.assign("VMGKZFYAXNWZMPGKEKIUGVTNLMATEKOTMJSPRAOWYXZZSTPLNDUOIITVBYMFEXDXFUVLBSLYCIOSZCKRTZVGBDAXWALKQVHROAOJCWRRJGHDCTFSIPUOGLCCBBOOTNHMUUFKYQPCECWBIHJMPENGUZQLVHWKGJYVSBQIBVHEDZPGGODXNLIQTMYYCKWEXQRDTJZNRWFAXIEWHBMUDESRPLF");
    const signed char tmp_msg_0[] = {-99, -6, -70, 114, 113, 41, -105, -74, -78, -119, 111, -19, -103, 98, -50, 94, -53, -122, 4, 4, -104, 3, -82, -12, -77, 13, -13, -31, -124, -68, -71, -104, 28, -31, 53, -37, 36, -87, 75, 12, 79, 45, -19, -36, 99, -33, 108, -22, 14, -83, 28, 31, -39, -122, 86, 41, 53, 71, 103, 124, 64, -125, -59, 51, 117, -64, 103, 9, -2, -44, -98, -53, -94, -50, -59, 21, -75, 99, 109, -14, 74, -33, -22, 3, -86, 83, 16, 85, 95, -35, -91, 90, -1};
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
    msg.setTimeStamp(0.5416798936200137);
    msg.setSource(44534U);
    msg.setSourceEntity(85U);
    msg.setDestination(7705U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.3950673811192127);
    msg.setSource(339U);
    msg.setSourceEntity(237U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.8802651552332371);
    msg.setSource(58600U);
    msg.setSourceEntity(92U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.8181450382443989);
    msg.setSource(19031U);
    msg.setSourceEntity(250U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(96U);
    msg.camid = 32U;
    msg.x = 18029U;
    msg.y = 9381U;

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
    msg.setTimeStamp(0.2700396335608908);
    msg.setSource(35664U);
    msg.setSourceEntity(189U);
    msg.setDestination(13867U);
    msg.setDestinationEntity(212U);
    msg.camid = 221U;
    msg.x = 14162U;
    msg.y = 33226U;

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
    msg.setTimeStamp(0.013656818354946476);
    msg.setSource(5283U);
    msg.setSourceEntity(47U);
    msg.setDestination(9874U);
    msg.setDestinationEntity(136U);
    msg.camid = 239U;
    msg.x = 52677U;
    msg.y = 42146U;

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
    msg.setTimeStamp(0.7221255371942581);
    msg.setSource(18858U);
    msg.setSourceEntity(163U);
    msg.setDestination(58260U);
    msg.setDestinationEntity(87U);
    msg.camid = 110U;
    msg.x = 36741U;
    msg.y = 1001U;

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
    msg.setTimeStamp(0.8982007866260772);
    msg.setSource(32435U);
    msg.setSourceEntity(35U);
    msg.setDestination(59595U);
    msg.setDestinationEntity(133U);
    msg.camid = 124U;
    msg.x = 34490U;
    msg.y = 26220U;

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
    msg.setTimeStamp(0.7184162715079014);
    msg.setSource(60911U);
    msg.setSourceEntity(50U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(50U);
    msg.camid = 180U;
    msg.x = 22556U;
    msg.y = 44696U;

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
    msg.setTimeStamp(0.38849699363126644);
    msg.setSource(6454U);
    msg.setSourceEntity(33U);
    msg.setDestination(29362U);
    msg.setDestinationEntity(205U);
    msg.tracking = 193U;
    msg.lat = 0.2979957388740859;
    msg.lon = 0.37456355513819617;
    msg.x = 0.1510110331199236;
    msg.y = 0.9595518294059135;
    msg.z = 0.09181700736146114;

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
    msg.setTimeStamp(0.7545836137188651);
    msg.setSource(51730U);
    msg.setSourceEntity(249U);
    msg.setDestination(15223U);
    msg.setDestinationEntity(206U);
    msg.tracking = 233U;
    msg.lat = 0.17949064038071472;
    msg.lon = 0.48799131717039834;
    msg.x = 0.31944114076309604;
    msg.y = 0.5705897801286197;
    msg.z = 0.1484338798218463;

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
    msg.setTimeStamp(0.7145124772803143);
    msg.setSource(27289U);
    msg.setSourceEntity(24U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(244U);
    msg.tracking = 18U;
    msg.lat = 0.6738867162744907;
    msg.lon = 0.43781952285887693;
    msg.x = 0.5397502494442961;
    msg.y = 0.7627562408336038;
    msg.z = 0.49639460468771346;

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
    msg.setTimeStamp(0.8199000956581537);
    msg.setSource(29487U);
    msg.setSourceEntity(56U);
    msg.setDestination(48826U);
    msg.setDestinationEntity(140U);
    msg.target.assign("TNVZYHAWXHJWFKUDEAMPFGASBOELUNXDAAIJSGTIRLMGGMUSCTTIWCRKQWLDKDILEHNWNLPQEQHYILEHCVBRZJXTTGDZRMTXXGVZBODEYBRCGAUJIASLOCJAQFJKHPWSRDFFPJNEPXZPBFVQUWTFQBIBNAQHLJVYIWESHMRTFUEPSFMCKGMBYUZYRW");
    msg.lbearing = 0.30534420808032825;
    msg.lelevation = 0.057350903415762655;
    msg.bearing = 0.4548615920396075;
    msg.elevation = 0.06393389645442882;
    msg.phi = 0.4362606523612724;
    msg.theta = 0.7443520641532381;
    msg.psi = 0.5622227038161957;
    msg.accuracy = 0.5841223082755045;

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
    msg.setTimeStamp(0.894672805076108);
    msg.setSource(7253U);
    msg.setSourceEntity(160U);
    msg.setDestination(30395U);
    msg.setDestinationEntity(221U);
    msg.target.assign("GPPATBDUQDRQFCUFNEHVXOKFJZLHOXIDBYOVMRSTHIOWCLSZQH");
    msg.lbearing = 0.6900217801689407;
    msg.lelevation = 0.6984209742500583;
    msg.bearing = 0.9917917775767316;
    msg.elevation = 0.10599447098821957;
    msg.phi = 0.8806955766732879;
    msg.theta = 0.5084204744976442;
    msg.psi = 0.8484823620004152;
    msg.accuracy = 0.18456655722083815;

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
    msg.setTimeStamp(0.1503581156539594);
    msg.setSource(29134U);
    msg.setSourceEntity(247U);
    msg.setDestination(35907U);
    msg.setDestinationEntity(182U);
    msg.target.assign("XORJGRLAHDLGRAANZSPWWKEHYUNOABQILEFWGZSWIFXTPYEWNBYLKPBNIVOSQGVLTMKNRBHEMFCKQWXUZBRNVDJSYMKZIYQVFZFJHDGLLMWPQVYMIMSHRRFHZILVKMHBGEWXKEROTGUTDGOJMWFDYXTCNCODTBJAPSKDVCU");
    msg.lbearing = 0.10766292750819073;
    msg.lelevation = 0.6661927466861276;
    msg.bearing = 0.08901397840751168;
    msg.elevation = 0.16456630805984307;
    msg.phi = 0.4571758635140334;
    msg.theta = 0.739516952879071;
    msg.psi = 0.3853667246322623;
    msg.accuracy = 0.25304725145143625;

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
    msg.setTimeStamp(0.06550202313484865);
    msg.setSource(57926U);
    msg.setSourceEntity(157U);
    msg.setDestination(10365U);
    msg.setDestinationEntity(148U);
    msg.target.assign("GNYIIODGWAXUYAEZUZ");
    msg.x = 0.8300035007134142;
    msg.y = 0.8027421772477504;
    msg.z = 0.09032290392348885;
    msg.n = 0.25739243011614155;
    msg.e = 0.5920614578602057;
    msg.d = 0.2671762583593298;
    msg.phi = 0.9516013354168907;
    msg.theta = 0.5024763827669555;
    msg.psi = 0.4398467581063311;
    msg.accuracy = 0.38200621563272874;

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
    msg.setTimeStamp(0.9388810940346369);
    msg.setSource(24605U);
    msg.setSourceEntity(122U);
    msg.setDestination(61958U);
    msg.setDestinationEntity(142U);
    msg.target.assign("SFCBUAZSULECDUHUBIHANQKPMTKBIZDDXCANYPYUACSZMUYLRJWZEVQYUKBRDLMJXGPQHSLDNSHYGEHABDMWQISZXYQRTNQXRGVCPYGIYYWVXFOHFWTWIWLGBLCJJWMMHNURTLWTFSJDAONRCEVOVROJYEF");
    msg.x = 0.32823693104693086;
    msg.y = 0.34729390605108523;
    msg.z = 0.6243907848289432;
    msg.n = 0.5071562072039472;
    msg.e = 0.909444171056612;
    msg.d = 0.6975230698685635;
    msg.phi = 0.8501062563212695;
    msg.theta = 0.48521198241063845;
    msg.psi = 0.8943534967926012;
    msg.accuracy = 0.5625343185421876;

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
    msg.setTimeStamp(0.8297143372557964);
    msg.setSource(51717U);
    msg.setSourceEntity(160U);
    msg.setDestination(4704U);
    msg.setDestinationEntity(76U);
    msg.target.assign("OCJLXMYDCBTCGTXRBPTVVIKPSJQEVPVODUYABBOBFLRHRWQQCDNDAKBURMDDQYLOITFMBUITVUGEAXCZPFMZPXBHNSUCEEFYZGFGRYJRMGZWOSSPSLLHQHOIJGC");
    msg.x = 0.7829912871854422;
    msg.y = 0.8213060366007657;
    msg.z = 0.4767519218756746;
    msg.n = 0.5219565040053754;
    msg.e = 0.7298491695821064;
    msg.d = 0.11438783704093392;
    msg.phi = 0.626255631335104;
    msg.theta = 0.6100299832721722;
    msg.psi = 0.1953635459872498;
    msg.accuracy = 0.14298171196394505;

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
    msg.setTimeStamp(0.837319472673454);
    msg.setSource(16964U);
    msg.setSourceEntity(66U);
    msg.setDestination(15657U);
    msg.setDestinationEntity(237U);
    msg.target.assign("LXQQYWIYMVTLAJWVYRLYQHBVZPCYIQFMGPJANEOXHTGFCFSGYJDMNWHJAUWBZRWAILSKSIEJVPACVQYJZGXXIXAILPVNRFIUZESOHODOUKSJKHEBQCISPDMNYHMFTRMEUGIWZDXOPBNSAUUZWEBKEPFCHOWNENNZFKE");
    msg.lat = 0.06968555507252339;
    msg.lon = 0.7721881856051789;
    msg.z_units = 138U;
    msg.z = 0.6016854816971727;
    msg.accuracy = 0.31256466905163627;

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
    msg.setTimeStamp(0.7723626488252657);
    msg.setSource(53090U);
    msg.setSourceEntity(211U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(17U);
    msg.target.assign("SESZMXPHYMZPVBKFFTSUITYHGAMJCDLGCUIZHTXYKOBDVJWXJRCXYIKHGZVMBKKTLXETCQNPQCQHGKVDNMNGGOIANDYPAQRBMWWWYKFIAFJYOXTVQBVUUPPMOLUHYBZIIURMMNCTNHHADLOZFFFNVZSVAZBRNXGGWFLAQKZKRQRYLIQGMPCWCBFZJWRJNLTATJVPJBSDNWQOESLDDDLYCBXSIPODEROHEVFEEI");
    msg.lat = 0.04146150002507343;
    msg.lon = 0.07985030241260382;
    msg.z_units = 82U;
    msg.z = 0.08036691866282297;
    msg.accuracy = 0.6611098796698333;

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
    msg.setTimeStamp(0.38502207320830695);
    msg.setSource(20124U);
    msg.setSourceEntity(19U);
    msg.setDestination(63078U);
    msg.setDestinationEntity(81U);
    msg.target.assign("XJOFNNLMJRPLBIKYROCMYBBYAIXKNNDJIALNJNGIKFCAXMXNULGTIOCJQGBVAXSFTTPNAIQPKEZTSSPWEYEPJZDSAKIJLQWQYRDCMTVTRVOJHRFYFSOMMHIZAHRSXVTYBRDDNVRASGNKGPWXFHGWJPWVOOLTXZTUAUBZWQSEHFPHKWXKHBVLZGHZZMKOEQBEQWYBUXMVUEUGGCD");
    msg.lat = 0.5199720185920796;
    msg.lon = 0.5367679873224387;
    msg.z_units = 182U;
    msg.z = 0.7044986052324275;
    msg.accuracy = 0.03456992228183664;

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
    msg.setTimeStamp(0.2076061283077203);
    msg.setSource(48890U);
    msg.setSourceEntity(207U);
    msg.setDestination(55784U);
    msg.setDestinationEntity(35U);
    msg.name.assign("ECUVBVTFOWFQCHBMXDLSINQCSYDEKPXIGRQIOJPEHSRVIDNFKVUZGUMLZQPFXYZPFBKYJRSUJPHGVPOSNGAXZFNAOTAXVVAIGUXRBPEBTEOGPJWDQIKEEMPFFMYKXLAJCSRXUCIWLIJWAZDNQOORMGTWSHYZCMYAVNOQLQNCMZTIBLAHTOQJSWR");
    msg.lat = 0.9465547471610608;
    msg.lon = 0.6406648384199243;
    msg.z = 0.10355492239100395;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.12097166706194096);
    msg.setSource(40166U);
    msg.setSourceEntity(25U);
    msg.setDestination(53366U);
    msg.setDestinationEntity(1U);
    msg.name.assign("LFOVXOPJCIOSGYOFYRKSITVDYEKIUDKJWDVBBPYPWWTTBPJACCMXPFAXUBEFWXZMZGCQXGAPEYEZBGRJQNIDFAMXKYREQTVAACISRSYUX");
    msg.lat = 0.7797154761723178;
    msg.lon = 0.8788968083847273;
    msg.z = 0.3900402941310558;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.5062701995354296);
    msg.setSource(63306U);
    msg.setSourceEntity(132U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(69U);
    msg.name.assign("SDFNQUGRUYSEEEWZHTWKLIEBTRBYHFGBMWZDYUXAUFLZPOXLNCRSNZBEIVNGVSJPMKJRHGAEVOQAQYMIVUEHFGZACFTXZWBNNJPKLPFWLPWCBDYHEDUDGQSICQPMOKSQNTXUVVBO");
    msg.lat = 0.7914870996621698;
    msg.lon = 0.6509082207182844;
    msg.z = 0.9592749269432888;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.9743459379398125);
    msg.setSource(47497U);
    msg.setSourceEntity(99U);
    msg.setDestination(16691U);
    msg.setDestinationEntity(0U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.8479435586680487);
    msg.setSource(4700U);
    msg.setSourceEntity(73U);
    msg.setDestination(33354U);
    msg.setDestinationEntity(111U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.9870826641461868);
    msg.setSource(59438U);
    msg.setSourceEntity(69U);
    msg.setDestination(42354U);
    msg.setDestinationEntity(101U);
    msg.op = 252U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CQCMFNGUBYTMHWDANCXXDSYZCZGUFHBVUBGPGVNBSTBOCUJIVJNECLWODIKLIHZZIC");
    tmp_msg_0.lat = 0.5159162521953184;
    tmp_msg_0.lon = 0.2823523629893897;
    tmp_msg_0.z = 0.011594544055879674;
    tmp_msg_0.z_units = 220U;
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
    msg.setTimeStamp(0.24169175509535312);
    msg.setSource(63596U);
    msg.setSourceEntity(145U);
    msg.setDestination(52556U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9853079410222856;
    msg.type = 89U;

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
    msg.setTimeStamp(0.795235014088922);
    msg.setSource(61392U);
    msg.setSourceEntity(150U);
    msg.setDestination(44382U);
    msg.setDestinationEntity(80U);
    msg.value = 0.23940848631904954;
    msg.type = 43U;

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
    msg.setTimeStamp(0.30722281174217736);
    msg.setSource(41946U);
    msg.setSourceEntity(237U);
    msg.setDestination(49879U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4856799228807247;
    msg.type = 149U;

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
    msg.setTimeStamp(0.19142547092667894);
    msg.setSource(64699U);
    msg.setSourceEntity(182U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(84U);
    msg.value = 0.4455866380439445;

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
    msg.setTimeStamp(0.12106993963604262);
    msg.setSource(51232U);
    msg.setSourceEntity(162U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7004397590474236;

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
    msg.setTimeStamp(0.6433522149420124);
    msg.setSource(57722U);
    msg.setSourceEntity(18U);
    msg.setDestination(53645U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2371490334455688;

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
    msg.setTimeStamp(0.45945660611809835);
    msg.setSource(6477U);
    msg.setSourceEntity(73U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(122U);
    msg.timestamp_last_service = 0.07377837932577413;
    msg.time_next_service = 0.45224034995760976;
    msg.time_motor_next_service = 0.3748216042758985;
    msg.time_idle_ground = 0.49557979090588145;
    msg.time_idle_air = 0.37609245900336163;
    msg.time_idle_water = 0.49504158223047956;
    msg.time_idle_underwater = 0.58464248607036;
    msg.time_idle_unknown = 0.34488670212223804;
    msg.time_motor_ground = 0.1954792749949119;
    msg.time_motor_air = 0.6264554959078049;
    msg.time_motor_water = 0.9392084486705657;
    msg.time_motor_underwater = 0.15768838418191977;
    msg.time_motor_unknown = 0.6113362957064864;
    msg.rpm_min = 30108;
    msg.rpm_max = 2785;
    msg.depth_max = 0.9195238854286751;

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
    msg.setTimeStamp(0.4522453142596069);
    msg.setSource(33643U);
    msg.setSourceEntity(42U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(190U);
    msg.timestamp_last_service = 0.678829169714247;
    msg.time_next_service = 0.7821103382357457;
    msg.time_motor_next_service = 0.3925544609199162;
    msg.time_idle_ground = 0.1492562144902071;
    msg.time_idle_air = 0.19734465776135302;
    msg.time_idle_water = 0.9081288818838512;
    msg.time_idle_underwater = 0.4641395039830998;
    msg.time_idle_unknown = 0.3088141729563715;
    msg.time_motor_ground = 0.292998993744515;
    msg.time_motor_air = 0.0027919245157277395;
    msg.time_motor_water = 0.15398748104080795;
    msg.time_motor_underwater = 0.30315394606703805;
    msg.time_motor_unknown = 0.7929827853320688;
    msg.rpm_min = 3483;
    msg.rpm_max = 173;
    msg.depth_max = 0.7891685817717006;

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
    msg.setTimeStamp(0.5741554222854078);
    msg.setSource(43433U);
    msg.setSourceEntity(204U);
    msg.setDestination(57975U);
    msg.setDestinationEntity(160U);
    msg.timestamp_last_service = 0.6059850345587774;
    msg.time_next_service = 0.2995523868884412;
    msg.time_motor_next_service = 0.48116214707592375;
    msg.time_idle_ground = 0.6651012483218919;
    msg.time_idle_air = 0.36313330102010377;
    msg.time_idle_water = 0.8759257316407003;
    msg.time_idle_underwater = 0.5854520637717358;
    msg.time_idle_unknown = 0.18772738616868623;
    msg.time_motor_ground = 0.37820591991485497;
    msg.time_motor_air = 0.3383530012904471;
    msg.time_motor_water = 0.9806283895429546;
    msg.time_motor_underwater = 0.4064213500996965;
    msg.time_motor_unknown = 0.7525650524996105;
    msg.rpm_min = -31199;
    msg.rpm_max = 208;
    msg.depth_max = 0.17506545785190197;

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
    msg.setTimeStamp(0.0170873822299219);
    msg.setSource(50471U);
    msg.setSourceEntity(151U);
    msg.setDestination(24147U);
    msg.setDestinationEntity(3U);
    msg.severity = 61U;
    msg.text.assign("LSIGJOLBCYPECKSPRYHIBFLFHBATNXWLZJTIQAJIWUMAQSBKPHJRHKGFQOKXBNSMQETQWEJZSEDMYYIOQNZDCBJWUJFVJFKTHNLEDUKHXWZQIDYNMUOZSCMHTDXRVXMDZGTAUUOMCXTXNTXSXIKVSOTNMAUUMGYPWHVBPLGZOKBEYVNQOGVCRRCPFOTPBSCGPLVWPCDHGVJIWSADCK");

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
    msg.setTimeStamp(0.9174003126457556);
    msg.setSource(29486U);
    msg.setSourceEntity(193U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(35U);
    msg.severity = 115U;
    msg.text.assign("KJDGNFEOEFSYQZINBLQGSRQTIIUZCAJOFHCKZLEVLWCJRKFANQJBHJZGEOOCUYDMYJMGPG");

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
    msg.setTimeStamp(0.5860591653388996);
    msg.setSource(57895U);
    msg.setSourceEntity(27U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(229U);
    msg.severity = 130U;
    msg.text.assign("MRTNYYLAJXEDNJLPSDFKCINNOPZCHYDRJSTDFDTGJEYAROOVYSLZPPUKF");

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
    msg.setTimeStamp(0.11577873551756912);
    msg.setSource(28138U);
    msg.setSourceEntity(241U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(28U);
    msg.channel = 3;
    msg.value = 1806465580;
    msg.gain = 238U;

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
    msg.setTimeStamp(0.13210064749357509);
    msg.setSource(41379U);
    msg.setSourceEntity(20U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(150U);
    msg.channel = -47;
    msg.value = 274352368;
    msg.gain = 47U;

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
    msg.setTimeStamp(0.9958037686878539);
    msg.setSource(38296U);
    msg.setSourceEntity(237U);
    msg.setDestination(9189U);
    msg.setDestinationEntity(248U);
    msg.channel = 57;
    msg.value = 27202503;
    msg.gain = 22U;

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
    msg.setTimeStamp(0.12354838601650864);
    msg.setSource(65277U);
    msg.setSourceEntity(20U);
    msg.setDestination(884U);
    msg.setDestinationEntity(190U);
    msg.ch01 = 0.009374770042600677;
    msg.ch02 = 0.4774977500072842;
    msg.ch03 = 0.12390840569828265;
    msg.ch04 = 0.07539076820202817;
    msg.ch05 = 0.3436033945761039;
    msg.ch06 = 0.9480049164338125;
    msg.ch07 = 0.4366131226715052;
    msg.ch08 = 0.36241380743502916;
    msg.ch09 = 0.5849460277916356;
    msg.ch10 = 0.5586409402591732;
    msg.ch11 = 0.1502471815346048;
    msg.ch12 = 0.04758389512641603;
    msg.ch13 = 0.34785323119699296;
    msg.ch14 = 0.7478636299262927;
    msg.ch15 = 0.9995904712278576;
    msg.ch16 = 0.006907427648272568;

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
    msg.setTimeStamp(0.7878385522511324);
    msg.setSource(32980U);
    msg.setSourceEntity(150U);
    msg.setDestination(4878U);
    msg.setDestinationEntity(141U);
    msg.ch01 = 0.7606264656560975;
    msg.ch02 = 0.2167023576564071;
    msg.ch03 = 0.23074429836439736;
    msg.ch04 = 0.13718320325857436;
    msg.ch05 = 0.2632179487976223;
    msg.ch06 = 0.41465844820554065;
    msg.ch07 = 0.9992151836160383;
    msg.ch08 = 0.15444757139742749;
    msg.ch09 = 0.034902197504046995;
    msg.ch10 = 0.3326433183925067;
    msg.ch11 = 0.21809070779308892;
    msg.ch12 = 0.06488987214121822;
    msg.ch13 = 0.9168866148016307;
    msg.ch14 = 0.8618309582149658;
    msg.ch15 = 0.5871599768968313;
    msg.ch16 = 0.5673320447459335;

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
    msg.setTimeStamp(0.5818367746750073);
    msg.setSource(17750U);
    msg.setSourceEntity(182U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(233U);
    msg.ch01 = 0.7919006886784185;
    msg.ch02 = 0.8397602475543415;
    msg.ch03 = 0.20285051853917446;
    msg.ch04 = 0.9264032424759508;
    msg.ch05 = 0.7817460047742166;
    msg.ch06 = 0.5533476765489672;
    msg.ch07 = 0.4755862468531058;
    msg.ch08 = 0.2172289940050064;
    msg.ch09 = 0.6832543145288544;
    msg.ch10 = 0.023228293856920268;
    msg.ch11 = 0.8190323205782749;
    msg.ch12 = 0.035034155431860725;
    msg.ch13 = 0.5343175966508529;
    msg.ch14 = 0.3486272028314704;
    msg.ch15 = 0.12464273305043772;
    msg.ch16 = 0.5448101394164558;

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
    msg.setTimeStamp(0.3520012388526106);
    msg.setSource(12795U);
    msg.setSourceEntity(197U);
    msg.setDestination(56287U);
    msg.setDestinationEntity(114U);
    msg.op = 236U;
    msg.lat = 0.6423631130431567;
    msg.lon = 0.8838658184232369;
    msg.height = 0.9946540617842289;
    msg.depth = 0.6419569110974035;
    msg.alt = 0.2830056858730442;

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
    msg.setTimeStamp(0.960600916924672);
    msg.setSource(4286U);
    msg.setSourceEntity(91U);
    msg.setDestination(21955U);
    msg.setDestinationEntity(220U);
    msg.op = 14U;
    msg.lat = 0.34454976065047793;
    msg.lon = 0.31100958490804587;
    msg.height = 0.6876116930253433;
    msg.depth = 0.15386241172103843;
    msg.alt = 0.8564413856832827;

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
    msg.setTimeStamp(0.3534382800959175);
    msg.setSource(48514U);
    msg.setSourceEntity(126U);
    msg.setDestination(40904U);
    msg.setDestinationEntity(156U);
    msg.op = 143U;
    msg.lat = 0.43519440383173746;
    msg.lon = 0.19117373794066028;
    msg.height = 0.6575215902553913;
    msg.depth = 0.5952230852812177;
    msg.alt = 0.5200532535382445;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.4963911820392892);
    msg.setSource(48961U);
    msg.setSourceEntity(86U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(201U);
    msg.nbeams = 81U;
    msg.ncells = 155U;
    msg.coord_sys = 121U;

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
    msg.setTimeStamp(0.5297557633019745);
    msg.setSource(1985U);
    msg.setSourceEntity(251U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(189U);
    msg.nbeams = 232U;
    msg.ncells = 109U;
    msg.coord_sys = 239U;

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
    msg.setTimeStamp(0.11031570128807822);
    msg.setSource(47566U);
    msg.setSourceEntity(26U);
    msg.setDestination(10819U);
    msg.setDestinationEntity(200U);
    msg.nbeams = 59U;
    msg.ncells = 54U;
    msg.coord_sys = 3U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7769395694388908;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.16574683479230634;
    tmp_tmp_msg_0_0.amp = 0.5743817408200899;
    tmp_tmp_msg_0_0.cor = 79U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.004395315209602457);
    msg.setSource(38216U);
    msg.setSourceEntity(208U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(201U);
    msg.cell_position = 0.12983125359366754;

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
    msg.setTimeStamp(0.34050474787380425);
    msg.setSource(64382U);
    msg.setSourceEntity(77U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(25U);
    msg.cell_position = 0.032546194728885314;

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
    msg.setTimeStamp(0.21032288888142925);
    msg.setSource(21988U);
    msg.setSourceEntity(199U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(62U);
    msg.cell_position = 0.4162831911631961;

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
    msg.setTimeStamp(0.42401922372580014);
    msg.setSource(23469U);
    msg.setSourceEntity(29U);
    msg.setDestination(12741U);
    msg.setDestinationEntity(18U);
    msg.vel = 0.776202003193967;
    msg.amp = 0.4799914426345917;
    msg.cor = 106U;

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
    msg.setTimeStamp(0.7081130233757658);
    msg.setSource(19557U);
    msg.setSourceEntity(180U);
    msg.setDestination(622U);
    msg.setDestinationEntity(59U);
    msg.vel = 0.3437415851620158;
    msg.amp = 0.906642034071295;
    msg.cor = 14U;

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
    msg.setTimeStamp(0.7020856197647118);
    msg.setSource(21261U);
    msg.setSourceEntity(39U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(67U);
    msg.vel = 0.24324428278954346;
    msg.amp = 0.311447409178941;
    msg.cor = 167U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.26946219447197084);
    msg.setSource(22257U);
    msg.setSourceEntity(186U);
    msg.setDestination(35491U);
    msg.setDestinationEntity(151U);
    msg.name.assign("IDBVAMCXFKTIGYFFRPSIOJEBXPOKIORPLLHDBYWHUJEQSEKYARNKNYVSOTFDGHIMDOTGUNZXFPPWMSKGOZCJXIOHDKVSXOVJLLJRKUQKHKQTHNUNNCGYLQYWSBCBSWAEGEMAXQMMDWQEXFVACCAOJBZYSVFYBDVTAPQHLMVQTCJMWNQYDWTHWGKHUHLBXNFZYRRUTE");
    msg.value = 141U;

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
    msg.setTimeStamp(0.6345650214191418);
    msg.setSource(51527U);
    msg.setSourceEntity(68U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(221U);
    msg.name.assign("HJHLOGPIILGWFPUVBYGVMXCQIHRYUOEZXLSIVWQSUNQW");
    msg.value = 98U;

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
    msg.setTimeStamp(0.5822967267248038);
    msg.setSource(40255U);
    msg.setSourceEntity(178U);
    msg.setDestination(13700U);
    msg.setDestinationEntity(132U);
    msg.name.assign("XGNJPGDYBMCFYBRJDLUAHPIZUCWCKWFVQHZAKYEUQYIPMFBCZLSGZGUEPTSMQQTBFYTYSVHIDWHTXGTPKDGJDVRUVENNEULWFECKVDILBZVMOXYEYHLZWAWOTXSJJMXXNSQKYLYONJDNAHWPFMXVFMCTRMACABGAXEBPJECSMNIBVOGFAXDIJTRCTKRLQZKJOTQSSVLEQOIWIHPUHNONHMKJUUURNRCBBGWLIOILQEFHQPOZXDOSZK");
    msg.value = 185U;

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
    msg.setTimeStamp(0.9782179189132608);
    msg.setSource(49063U);
    msg.setSourceEntity(102U);
    msg.setDestination(16180U);
    msg.setDestinationEntity(189U);
    msg.name.assign("FACCRMRBKWYRVPPYSCTLMJVJZEQZBKYZDMCPWLECKELNUWITUOSYCQDFXMXPSZFFGORFGHPQXDLQTAEUZAULACTQJCKBIGOKPXYSQQTFBWPDPJMIULVGSBCFIHSNQRJFAGEOORAVNAULMEVWYXVBTMIBAGGOAHVWQBJOFDTHLNWKHGWIOGHYDGITYXEERJUZZHNIRBMMJPTIULJN");

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
    msg.setTimeStamp(0.18594933664535251);
    msg.setSource(33U);
    msg.setSourceEntity(217U);
    msg.setDestination(48092U);
    msg.setDestinationEntity(60U);
    msg.name.assign("EGSMPHFIPAYSORRGFJKAJIHDQJARQCXFUZQLDZBICHXNTUMYGLYNPLJUOBGOQYKPDRXUSGIUNTBWEDGHHRNLYETQILNKBBYQDOKATJADUJOYZHDRAVAVBEOEVPZVDMWWXMHWCOFTWZNLVLEIXSOQPPACTTCCWSERTGZGIMSPRGFL");

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
    msg.setTimeStamp(0.17628745564021064);
    msg.setSource(58491U);
    msg.setSourceEntity(71U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(80U);
    msg.name.assign("KGFCLAXDGRDHYTQUWYZKIORMPEGACINKMYTERWHQBKLEVILUJIUKMYISBJWQSHRNMDWTSFQJMHFCWUUCVNHNCX");

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
    msg.setTimeStamp(0.23721994240983968);
    msg.setSource(30539U);
    msg.setSourceEntity(56U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(159U);
    msg.name.assign("TZEMROKNFBTWCOGSXCSHJVKPPEYDOPWVCLRXAIOYMRAKBBTYPUNMLWBQBTIKGVWKDXHJZAJRXIQLMLBTLZGDATQXUEHALVCNUBFWKZPRPIJCEQKWJUMOEIOJISKRFSANUEHQC");
    msg.value = 116U;

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
    msg.setTimeStamp(0.799850290329189);
    msg.setSource(8535U);
    msg.setSourceEntity(205U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BRCQJTQIUSTQHXIESEGJKKHYMKAKWGLCIXUSNYZKHAXLEDDYVBPRFVCIBRRFZDCHVAOYLYIMPNPIYUSJJAMVFNEZSVWWTBGUCZXLIMRDYHLTLRHGGJN");
    msg.value = 250U;

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
    msg.setTimeStamp(0.9120044204904573);
    msg.setSource(37494U);
    msg.setSourceEntity(181U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(41U);
    msg.name.assign("IYGBSDQOKZWSSPGYTVKYVXUWCFQWIVPBSIGZJQKFBZPMHTHABHBXTYPVCEBBNTNZUMDBQRATNUOIMNWLOZKVXGOIXLYHBKVAJWWIGCNUXLDNVZGZNPQXARRNVSVNSLILECRGOBWWRDEZOSQIAFUQIYYRJZDHGXNUXLTEOJ");
    msg.value = 55U;

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
    msg.setTimeStamp(0.6596614052624937);
    msg.setSource(34252U);
    msg.setSourceEntity(239U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(96U);
    msg.value = 0.13371141568284006;

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
    msg.setTimeStamp(0.21132390549002478);
    msg.setSource(24281U);
    msg.setSourceEntity(75U);
    msg.setDestination(887U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9223669417764572;

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
    msg.setTimeStamp(0.3068733856034631);
    msg.setSource(3978U);
    msg.setSourceEntity(121U);
    msg.setDestination(49888U);
    msg.setDestinationEntity(117U);
    msg.value = 0.09547901427234529;

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
    msg.setTimeStamp(0.7919405004915246);
    msg.setSource(1044U);
    msg.setSourceEntity(39U);
    msg.setDestination(50636U);
    msg.setDestinationEntity(53U);
    msg.value = 0.42303254049874695;

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
    msg.setTimeStamp(0.7464274159749124);
    msg.setSource(51936U);
    msg.setSourceEntity(136U);
    msg.setDestination(20087U);
    msg.setDestinationEntity(77U);
    msg.value = 0.6511257299070022;

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
    msg.setTimeStamp(0.3043903130567488);
    msg.setSource(24412U);
    msg.setSourceEntity(208U);
    msg.setDestination(60938U);
    msg.setDestinationEntity(5U);
    msg.value = 0.0047053883001375585;

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
    msg.setTimeStamp(0.8770858737164061);
    msg.setSource(2381U);
    msg.setSourceEntity(143U);
    msg.setDestination(26746U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9028400224630756;

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
    msg.setTimeStamp(0.6225015436565565);
    msg.setSource(63018U);
    msg.setSourceEntity(247U);
    msg.setDestination(32067U);
    msg.setDestinationEntity(98U);
    msg.value = 0.4295448046588477;

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
    msg.setTimeStamp(0.461000186102386);
    msg.setSource(10177U);
    msg.setSourceEntity(23U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(180U);
    msg.value = 0.08107769254413699;

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
    msg.setTimeStamp(0.09431205182034985);
    msg.setSource(22682U);
    msg.setSourceEntity(176U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(117U);
    msg.restriction = 131U;
    msg.reason.assign("QEIDBPQSSYV");

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
    msg.setTimeStamp(0.6441036361284753);
    msg.setSource(45115U);
    msg.setSourceEntity(69U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(115U);
    msg.restriction = 20U;
    msg.reason.assign("PBTRSVGDLBJUNYJZJKPZALEEHUXZJZWAMNIDRPQYUMZQWRMFPYOFVNXUNLKNUBTFBEHFVSHNWLCALIEGCDCNBQRHLFCEQAKIFZTVQXOMCHASWOTQVYTOUUAYLKUWPXCGLSTWVWYOGPSSISXYVQXMDYGGRQMNZJHCFEQIBIDVJPYHREDYMULSJGTBPRLIONKPRDKDIKHNTTREWGAWBKBSCPMJMOTSGHEUFJG");

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
    msg.setTimeStamp(0.8540770795648788);
    msg.setSource(44915U);
    msg.setSourceEntity(200U);
    msg.setDestination(24943U);
    msg.setDestinationEntity(233U);
    msg.restriction = 200U;
    msg.reason.assign("FWIPLEZGVYPKKVXFSOFGQMXFKHPBDGIUCKCJRLYKBTTPDPRQIRHYRENAEAIWDMTZGCMYOBVMJKTXWSBEWDSJHQXNADVFEVIBKGSSWGCEJIUHTZWNUEGZQBWBGUXGVJINEZHMUAMBDPHMROSDOYSJIOSUXRMCCZYHAVPTKERSUSRWKXHTKLYAAGQJLQPXNRVFLQMNOCNDNYBLOLOJILPFTLAUHZRBVDYHDQLTWNOXJAFCQ");

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
    msg.setTimeStamp(0.8603128628352077);
    msg.setSource(35387U);
    msg.setSourceEntity(17U);
    msg.setDestination(26501U);
    msg.setDestinationEntity(142U);
    msg.op = 206U;
    msg.version.assign("EIGCCYHECMBFRZKXWIXCBOWBEXDFMZWWVKFDSFQIXJUWRAQONADHTMDLGZJITQHMDDCNZQULOHEGKRWUSGRFHSYNTVPVYVAFCVZKVWLMFNOBIGVZDTFS");
    msg.description.assign("CUJJFITLHTWQDGJCBQMZHEJZMAFQCWYNCWVVNQPSEAHOYXRIHRGJLMTZLIIZMHUXGQPCEEXGLMLMVUVQNMLNIRDRVWTKKKVJP");

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
    msg.setTimeStamp(0.7948075066152156);
    msg.setSource(53756U);
    msg.setSourceEntity(155U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(140U);
    msg.op = 72U;
    msg.version.assign("XSDJUNGRGBSZDALEHJWGFSPAJQZBUQOJBACNKHCDVVEYAHYZTDMCVFDKHZPSNNNFDAJUUQLBPOGLXVKDCJMJZPTFTCDFXEXHEZLCJRSHKGZIKIWPORSPOUXRQZIVNALSMQMKIGHSDROUZNRFFEYVBOPOLRTPOFKFYHCWIKYOVRTWDUWIIIGELGBSYHWLTMTEEYKLWLNMQMBEIXMCGYFPBJXNBUVZNYEIVRTXTHGXMCMBAQ");
    msg.description.assign("QCWVKCJCMPLFULXOHMASFKLXXNQDVQQUGVTMJRWNZBAMRJVBQPBGKVPHXNPSWKYOLRTOLBVDPCFGDDJGISHDGNPUAVVECEBHUYRHQZXOGBWCKNYZHSTNZDQCRVUZKLOYNZMPFATIRXUEDBYHYGXJCPYYRW");

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
    msg.setTimeStamp(0.11407430291042453);
    msg.setSource(22191U);
    msg.setSourceEntity(95U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(126U);
    msg.op = 112U;
    msg.version.assign("AHDTZIOCYUGLVTUBLQXZPHSPCZKUWPUQWFSENNERNYCZYZBGOSWCNFPSFNKDXNQROPMEFMSWIIOTJOCSEIVFHZCZIXWXMODDGAQMHMYGINPQCLMOSUTXJYGETJWJBBGNFSBDGMGIVZPADWISVJVAHFJXVOMLOA");
    msg.description.assign("PHGSRJQXNHOZYVKUEYCLWTDJJTAQUVNMEEXUICLLORKDAXBPOKHDHOBPGLUVKCRALSBFUMGJZINLUWIGXMNAAEWVFEBZBECSWIQTHCIWHTCFEDZLSUVTYYRYRZYSLNVJJPMMTFFYXGTPRKQOFAIORNWDXGSWGANBLUVUHTIWTVPFDXZQ");

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

  return test.getReturnValue();
}
