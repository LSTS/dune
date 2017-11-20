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
// IMC XML MD5: 4d8734a1111656aac56f803acdc90c22                            *
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
    msg.setTimeStamp(0.0596714155972);
    msg.setSource(35000U);
    msg.setSourceEntity(34U);
    msg.setDestination(8684U);
    msg.setDestinationEntity(219U);
    msg.state = 185U;
    msg.flags = 124U;
    msg.description.assign("NRNAXPKHIYPXUJGKLMTVFSNVSGXMZZJHARCLHLCETWTYFYNBAQLUGSORSJBSCPIDPIKETEGG");

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
    msg.setTimeStamp(0.403241160396);
    msg.setSource(21222U);
    msg.setSourceEntity(142U);
    msg.setDestination(49005U);
    msg.setDestinationEntity(11U);
    msg.state = 193U;
    msg.flags = 96U;
    msg.description.assign("UNDDFBMZIZVYOFBGPEBFCTZXLHJBIHCQESFMWXOAGSKEVPNTYJQPULAPIQHYKMLMHNCKDZKPSSGVDKIQJWEEVABVHTGSURFPANUSIWTXRZDKALRWGRMAYTMJIZYRAGNCYUNATDMAUBTVEGXLVRWJOPSMULZRVOTHXYTXWZJOMCQOXH");

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
    msg.setTimeStamp(0.551159299119);
    msg.setSource(17346U);
    msg.setSourceEntity(80U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(199U);
    msg.state = 116U;
    msg.flags = 78U;
    msg.description.assign("THRYJQPGTVJIPETXNOIMFEQOKFDFAUXDXMFSUJCGYVDOZPRNHZNCFFSVQGFLRGEESRROQCJGQHTBZNOIELUBDUTWJKMJEXDVYGBTDXPMDWPAHLRYOMUSHRAWQSO");

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
    msg.setTimeStamp(0.620337541105);
    msg.setSource(47004U);
    msg.setSourceEntity(86U);
    msg.setDestination(13396U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.164646899705);
    msg.setSource(21038U);
    msg.setSourceEntity(53U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.996452501286);
    msg.setSource(45567U);
    msg.setSourceEntity(245U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.490399100891);
    msg.setSource(19320U);
    msg.setSourceEntity(87U);
    msg.setDestination(41915U);
    msg.setDestinationEntity(54U);
    msg.id = 249U;
    msg.label.assign("YDGULCYSCANFNOWCIHMJOOOFMZYZGAAEHLCVXUREIWCQZJMSYJPWITYSHRPRGTVGMECXNRXSKV");
    msg.component.assign("SKCBTBNJZAAXRFUMEKKELISFXEIPNQDFQKCUMCLVUCGODRDLOBDNUTKLEJDOSHEZQWZKTTUPQIMHEMBGTXYUVYQORMFTIGYRNYHZPXDUYPPDEZRLJHPXAGDPWCLSCKENUQWSZJYAVPIMRXJFYIIQOFXOBBSVHUOKDACCITEHTTZNMJQHBMGPGVVGGTRMWYXWGHKJZJLSXVYNCBAHLQLFAWZPSROO");
    msg.act_time = 43053U;
    msg.deact_time = 60337U;

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
    msg.setTimeStamp(0.231292419074);
    msg.setSource(3101U);
    msg.setSourceEntity(18U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(82U);
    msg.id = 16U;
    msg.label.assign("ITKCQWHVEKMSLCXYWCSDPUCHFHKPLVZKZJDVFDFVYMJONJUXPOELODMPFQZJHURLRQEBZNKGAESYNPSFXINIFKVHGGNQVGAOWSMMW");
    msg.component.assign("ASTWHVQAHGNXRTRCHCFPBBNIDVEZIXIJOYMYIDANJXFQLKSRYAIFAAPMXPQNJXWHEBWOGLCDPQOESYUBN");
    msg.act_time = 53866U;
    msg.deact_time = 63356U;

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
    msg.setTimeStamp(0.889426745806);
    msg.setSource(24450U);
    msg.setSourceEntity(183U);
    msg.setDestination(52757U);
    msg.setDestinationEntity(69U);
    msg.id = 54U;
    msg.label.assign("EBLPETDOWLCZUQZSEWVZTMCTXYGOSBPPBMMCUZAWNFISGDKVXYUWYFUUQAZDRLLPWGONWDECXJKHDNHQYW");
    msg.component.assign("DWWCYPWYEUOCZKCKNNHZVSZXQMQMXVWHGQXENRZFWLWASBPLNRTUKJIPSHHVRPLBGOXDHHFOYRDHMFUAJRE");
    msg.act_time = 31245U;
    msg.deact_time = 16811U;

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
    msg.setTimeStamp(0.797219496636);
    msg.setSource(58518U);
    msg.setSourceEntity(83U);
    msg.setDestination(41466U);
    msg.setDestinationEntity(29U);
    msg.id = 248U;

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
    msg.setTimeStamp(0.38319115135);
    msg.setSource(16010U);
    msg.setSourceEntity(19U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(118U);
    msg.id = 250U;

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
    msg.setTimeStamp(0.969055039558);
    msg.setSource(63753U);
    msg.setSourceEntity(76U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(4U);
    msg.id = 40U;

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
    msg.setTimeStamp(0.764059634812);
    msg.setSource(59161U);
    msg.setSourceEntity(244U);
    msg.setDestination(28479U);
    msg.setDestinationEntity(126U);
    msg.op = 201U;
    msg.list.assign("HBXTZODMCDNVSINCCFQOXRVUGCDTXPLJNUGCAZZNZUMOPWSTYTYYJKFPOSVVQEUVSRMKZZPWKCGOSAKCHJFONNQODRWQZJWGGMBPGAMTHMFATLUVJYETRAWRQBLGHCYPJWJTDKZFRFNBQFRLVSMIAUTMBIPAPTNGNJLUXCPKUKVDWWXESDRBILKJMEEIUYEYQKOFBRLYAXIICANVSBYXRBLWMWIY");

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
    msg.setTimeStamp(0.995198208088);
    msg.setSource(17719U);
    msg.setSourceEntity(1U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(204U);
    msg.op = 240U;
    msg.list.assign("VXDILZBXLPKHCOETITDHGTPYTQUWHPBAEVCFMZFZWWUBHWXAATMUIGWPROYNCLJXUBYDDR");

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
    msg.setTimeStamp(0.756182188389);
    msg.setSource(51646U);
    msg.setSourceEntity(168U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(210U);
    msg.op = 18U;
    msg.list.assign("WONDUMPATBVIFYYSLJHMPFPHGWAOOBZFONJYYXUORAMQVSWKGRFHLXTAGDPYYKTZMKLRSYJMVWQE");

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
    msg.setTimeStamp(0.710555989397);
    msg.setSource(48956U);
    msg.setSourceEntity(254U);
    msg.setDestination(35861U);
    msg.setDestinationEntity(176U);
    msg.value = 130U;

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
    msg.setTimeStamp(0.959037000824);
    msg.setSource(16480U);
    msg.setSourceEntity(198U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(184U);
    msg.value = 130U;

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
    msg.setTimeStamp(0.289363120397);
    msg.setSource(60242U);
    msg.setSourceEntity(230U);
    msg.setDestination(57663U);
    msg.setDestinationEntity(138U);
    msg.value = 141U;

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
    msg.setTimeStamp(0.55327210887);
    msg.setSource(43988U);
    msg.setSourceEntity(212U);
    msg.setDestination(19311U);
    msg.setDestinationEntity(27U);
    msg.consumer.assign("UYXZIDXIKHUWPZKJIWCAOIPBXLGEPQLTQYAHWATFZALFXRRDOGYWQEENLRYCLMFAMUNKGPIQGMDDUQSRFLTDAQKSTJHSJFWIIANVRVHORBYHDUHVUOBCFKCYJXLSBDIXELFGJTPRGSYUCPGZYIXPOXAANFERNJWGFMHVVZOCWA");
    msg.message_id = 20463U;

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
    msg.setTimeStamp(0.277682542619);
    msg.setSource(27045U);
    msg.setSourceEntity(93U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(23U);
    msg.consumer.assign("SCRFCKHYHMXEPBXMLYUHPLBNNVMZEKSARKRERNKSYDEWWWJGDOTCSRWLFYYDXPUFSXCEQQTZAEWTZRHNVDLGIULDAMTNOSGUGQOEUFIMRJKGJTFXQMWRTTIDLKLAFVLBVSRFGVQHAPCXJUIGYYJIOEQBMBGZUJZWQQKXHTVS");
    msg.message_id = 33505U;

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
    msg.setTimeStamp(0.560350195017);
    msg.setSource(30464U);
    msg.setSourceEntity(49U);
    msg.setDestination(22102U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("TCFNRXCSIMKAQTIWGBAGAYUFGLBCMCTOYJYREZZBJQUCKNCJFCX");
    msg.message_id = 39851U;

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
    msg.setTimeStamp(0.50915661254);
    msg.setSource(1024U);
    msg.setSourceEntity(169U);
    msg.setDestination(54063U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.629936900667);
    msg.setSource(39260U);
    msg.setSourceEntity(145U);
    msg.setDestination(46594U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.182302415139);
    msg.setSource(33067U);
    msg.setSourceEntity(87U);
    msg.setDestination(33407U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.518806689111);
    msg.setSource(25835U);
    msg.setSourceEntity(59U);
    msg.setDestination(17067U);
    msg.setDestinationEntity(128U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.787076762759);
    msg.setSource(10239U);
    msg.setSourceEntity(187U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(74U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.208984588657);
    msg.setSource(17825U);
    msg.setSourceEntity(17U);
    msg.setDestination(58663U);
    msg.setDestinationEntity(87U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.922990700238);
    msg.setSource(44536U);
    msg.setSourceEntity(17U);
    msg.setDestination(52902U);
    msg.setDestinationEntity(184U);
    msg.total_steps = 104U;
    msg.step_number = 161U;
    msg.step.assign("IRTBJTNUQVTJFYOCOWNMRHIVISRWSZCUFEGOSAFODYGWBLILTZCUTRNIREJKPQFGYMEUTRZKWKEKFVSYE");
    msg.flags = 98U;

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
    msg.setTimeStamp(0.190623607741);
    msg.setSource(27968U);
    msg.setSourceEntity(208U);
    msg.setDestination(11472U);
    msg.setDestinationEntity(106U);
    msg.total_steps = 203U;
    msg.step_number = 59U;
    msg.step.assign("QILNJWMPJXQPXKTEBTMLHMYFDGDCUTKNEBIZXYEASYUSVHBJDBWCOBQRZRPINJDAKDIGIEHYAQFSXYLGNMYECPRIZOHPBFGRLPWKDJEGUSTCMTKDUJFVVBVUDQMWSWSZSZSKQGNIFGYRSOMXCVJOKPOWMNTIHJARODKXASRFBAUILHPVBTHNVUNZEHQMKLUDCIXVZNRCFFEYJYNBOUUJHGZROAOPWLAFTWYCCZQLQPVKCLGMTXLEA");
    msg.flags = 170U;

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
    msg.setTimeStamp(0.253874306079);
    msg.setSource(19977U);
    msg.setSourceEntity(185U);
    msg.setDestination(54831U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 84U;
    msg.step_number = 138U;
    msg.step.assign("VFINGBJGCRUASURYRYCDLFZKZGSDTGHFNWWQXMQGKXQUXNTZBTFVZIJLEKULDNOPHPSZFPPGZIMFALESPTDXIJCLRBUCQHOWDKNORGIOWKRGUIAYESOGIMOTWPKXYUWTXCRVWPLBHQEESKOKLWSNCTEGFVBVHCMFQYWIBVNVYXQJMCUQVBOMLHMKNOZJAEZNAR");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.643938975292);
    msg.setSource(54991U);
    msg.setSourceEntity(113U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(239U);
    msg.state = 119U;
    msg.error.assign("UATWQEXMNJYKWLFXNLCYZHDHLBKVOZIJMVUFZNUPKFMBWGOCEUOKJ");

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
    msg.setTimeStamp(0.00605006875668);
    msg.setSource(53132U);
    msg.setSourceEntity(119U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(91U);
    msg.state = 54U;
    msg.error.assign("VVIBGGSTTDFMLJTFQLXAZNYJKUIXQRMKLRQKHELCAMMJGEZKFDLIZSXIPAFAFLEHELWRZFAUJXBMWFQAFNOGNZEZMMRDOVWHJTNWQHYWNLBIKUJQBPAUZXACNXYDDXNIBXSVODUSMKNBIKJCUAGTQVPYYKCCUBSPYRFTMGYOTRPSRUY");

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
    msg.setTimeStamp(0.759597820343);
    msg.setSource(54843U);
    msg.setSourceEntity(105U);
    msg.setDestination(64891U);
    msg.setDestinationEntity(69U);
    msg.state = 107U;
    msg.error.assign("HSMGNRJABXJDPETWOCPCSTUMUGRPNFSOFDKRDFEDRSQMNASWWLCLPYRTYHRTCOKGYHNMCDBIZYJWOBUUUGOIYCWXDOKPBMPAITXRQUQPXULEIAZAGFMHDNVDVKHEJBAIBTEHQZEHYFKXFQFBQWAJZNXHWESBLQINOXDZASTQVNJKCYBMSVGPYOSZZLJIBKGVKNTHCXJUGOICTLFCRLQWKWXVFVSTYULRIKJVHEJOQNLDELVMVPUZYAMMZRWFGI");

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
    msg.setTimeStamp(0.515540699402);
    msg.setSource(58808U);
    msg.setSourceEntity(91U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.990212644182);
    msg.setSource(18770U);
    msg.setSourceEntity(135U);
    msg.setDestination(24029U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.561064823986);
    msg.setSource(33350U);
    msg.setSourceEntity(188U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.377877890567);
    msg.setSource(64147U);
    msg.setSourceEntity(165U);
    msg.setDestination(27904U);
    msg.setDestinationEntity(161U);
    msg.op = 193U;
    msg.speed_min = 0.277989718628;
    msg.speed_max = 0.542156615295;
    msg.long_accel = 0.442740879025;
    msg.alt_max_msl = 0.36198858234;
    msg.dive_fraction_max = 0.0605476282612;
    msg.climb_fraction_max = 0.501450642513;
    msg.bank_max = 0.0477528799968;
    msg.p_max = 0.588694434695;
    msg.pitch_min = 0.435725183408;
    msg.pitch_max = 0.522645315718;
    msg.q_max = 0.163454430051;
    msg.g_min = 0.25641785939;
    msg.g_max = 0.463591071675;
    msg.g_lat_max = 0.13980705659;
    msg.rpm_min = 0.540293746742;
    msg.rpm_max = 0.448389483237;
    msg.rpm_rate_max = 0.848393507857;

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
    msg.setTimeStamp(0.639695328511);
    msg.setSource(14896U);
    msg.setSourceEntity(176U);
    msg.setDestination(46237U);
    msg.setDestinationEntity(206U);
    msg.op = 26U;
    msg.speed_min = 0.280740189601;
    msg.speed_max = 0.0785986427256;
    msg.long_accel = 0.44022854327;
    msg.alt_max_msl = 0.553414461312;
    msg.dive_fraction_max = 0.958007133662;
    msg.climb_fraction_max = 0.872072986336;
    msg.bank_max = 0.336107335717;
    msg.p_max = 0.779291255922;
    msg.pitch_min = 0.771167883659;
    msg.pitch_max = 0.45691843434;
    msg.q_max = 0.586914650807;
    msg.g_min = 0.19942476467;
    msg.g_max = 0.681914708626;
    msg.g_lat_max = 0.422454444819;
    msg.rpm_min = 0.0754106940967;
    msg.rpm_max = 0.90392332512;
    msg.rpm_rate_max = 0.0475471119895;

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
    msg.setTimeStamp(0.995388479775);
    msg.setSource(30176U);
    msg.setSourceEntity(246U);
    msg.setDestination(14704U);
    msg.setDestinationEntity(178U);
    msg.op = 169U;
    msg.speed_min = 0.6434766857;
    msg.speed_max = 0.983484914885;
    msg.long_accel = 0.683992633125;
    msg.alt_max_msl = 0.458586270849;
    msg.dive_fraction_max = 0.981618318793;
    msg.climb_fraction_max = 0.982315463284;
    msg.bank_max = 0.125870876229;
    msg.p_max = 0.971220281639;
    msg.pitch_min = 0.519275837018;
    msg.pitch_max = 0.595719131906;
    msg.q_max = 0.739985481863;
    msg.g_min = 0.853481329958;
    msg.g_max = 0.550692247155;
    msg.g_lat_max = 0.919875883578;
    msg.rpm_min = 0.470046225088;
    msg.rpm_max = 0.429949654585;
    msg.rpm_rate_max = 0.109534544892;

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
    msg.setTimeStamp(0.624338514582);
    msg.setSource(58568U);
    msg.setSourceEntity(136U);
    msg.setDestination(47032U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.461229275266);
    msg.setSource(57424U);
    msg.setSourceEntity(231U);
    msg.setDestination(2919U);
    msg.setDestinationEntity(109U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.53257496063;
    tmp_msg_0.y = 0.693525357873;
    tmp_msg_0.z = 0.106368483155;
    tmp_msg_0.phi = 0.0103433858508;
    tmp_msg_0.theta = 0.00791141981009;
    tmp_msg_0.psi = 0.0690233168168;
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
    msg.setTimeStamp(0.620878494981);
    msg.setSource(10024U);
    msg.setSourceEntity(47U);
    msg.setDestination(46040U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.188810138576);
    msg.setSource(38848U);
    msg.setSourceEntity(111U);
    msg.setDestination(60567U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.0419932808245;
    msg.lon = 0.241500087567;
    msg.height = 0.987110022702;
    msg.x = 0.241499479914;
    msg.y = 0.343081864356;
    msg.z = 0.481166691627;
    msg.phi = 0.827538400746;
    msg.theta = 0.852788573625;
    msg.psi = 0.841325642286;
    msg.u = 0.439038188365;
    msg.v = 0.657897784187;
    msg.w = 0.660328937716;
    msg.p = 0.027439658396;
    msg.q = 0.859830315486;
    msg.r = 0.392155971841;
    msg.svx = 0.942633304742;
    msg.svy = 0.224314557647;
    msg.svz = 0.231694592801;

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
    msg.setTimeStamp(0.855082980362);
    msg.setSource(18666U);
    msg.setSourceEntity(187U);
    msg.setDestination(9518U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.792111671619;
    msg.lon = 0.414748610749;
    msg.height = 0.318438636073;
    msg.x = 0.992558995984;
    msg.y = 0.00252107026048;
    msg.z = 0.254264009322;
    msg.phi = 0.787267542009;
    msg.theta = 0.5527687832;
    msg.psi = 0.447095757545;
    msg.u = 0.712492037952;
    msg.v = 0.779810025027;
    msg.w = 0.178357240415;
    msg.p = 0.391163370205;
    msg.q = 0.292167941263;
    msg.r = 0.814718057433;
    msg.svx = 0.0025336726758;
    msg.svy = 0.497465763814;
    msg.svz = 0.602312085478;

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
    msg.setTimeStamp(0.665684847248);
    msg.setSource(51490U);
    msg.setSourceEntity(100U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.498160765585;
    msg.lon = 0.123144542973;
    msg.height = 0.806495688472;
    msg.x = 0.264611923086;
    msg.y = 0.75507974448;
    msg.z = 0.691716800264;
    msg.phi = 0.883365286747;
    msg.theta = 0.271850573118;
    msg.psi = 0.997368593797;
    msg.u = 0.0478452719408;
    msg.v = 0.592780831374;
    msg.w = 0.53088731076;
    msg.p = 0.0418118983128;
    msg.q = 0.903579101908;
    msg.r = 0.216551452987;
    msg.svx = 0.295609020424;
    msg.svy = 0.809802318777;
    msg.svz = 0.11259597133;

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
    msg.setTimeStamp(0.777617622956);
    msg.setSource(39261U);
    msg.setSourceEntity(35U);
    msg.setDestination(54964U);
    msg.setDestinationEntity(93U);
    msg.op = 157U;
    msg.entities.assign("MOGDLFIBNZJLAYMMJJLFVPBWQJYWDXPFBLFCWBDUBDAIKMQGQXKVIQKHACZAJTEFUDUMHQYYEXZKSPOEIRQWRVCXXICSFKPUGVERXOOJQYAHXNRJEZSTZZGVMNOQREXIPHNAKNHKMURZGKRSCW");

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
    msg.setTimeStamp(0.353445439805);
    msg.setSource(31362U);
    msg.setSourceEntity(210U);
    msg.setDestination(5983U);
    msg.setDestinationEntity(104U);
    msg.op = 104U;
    msg.entities.assign("WAZYEHBLDVCLZARDSUICTQZXP");

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
    msg.setTimeStamp(0.205160374683);
    msg.setSource(43066U);
    msg.setSourceEntity(192U);
    msg.setDestination(16781U);
    msg.setDestinationEntity(74U);
    msg.op = 185U;
    msg.entities.assign("AIXPQKVFXEIEDZUITPZMAKATVDJAYKDSZVUZXJOBVWHKXMXGUSUYLYIPBLBDKRMCVWFSUWCCBBRNCSEUVYQKLKHLYGOLYGNNWNCQMECTPCVSWLRANHQKPQAOGIEWHGXNXAICTPTZEJORDPOZXNRTNTCTUGREDGQQNFJVZTFZOGDSBBYTVIEQRYLBIFMLWKWVHSJHDEHJMIWHSMPEODFILSFZZNOBKGCOPBGWMHFYQHJFJ");

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
    msg.setTimeStamp(0.842985991107);
    msg.setSource(55021U);
    msg.setSourceEntity(245U);
    msg.setDestination(57615U);
    msg.setDestinationEntity(114U);
    msg.type = 80U;
    msg.speed = 26661U;
    const char tmp_msg_0[] = {94, 125, -105, 35, -64, 124, -68, -41, 43, -118, 104, 84, -5, -22, 120, -107, -40, -119, 18, -9, 98, 123, -113, -47, -2, -17, 17, -8, -39, -119, 88, -84, -87, 68, -103, -59, 23, 52, 37, 16, -113, 28, -126, 56, 54, -13, 45, 93, -49, 39, -43, 87, -11, 66, -37, -126, 35, -118, 26, 108, -116, -13, 101, 65, -32, -30, 9, 100, -98, -82, 46, 116, 16, -127, -83, -96, -17, -77, 45, -26, -93, -104, -121, 124, 40, -52, 15, -6, -57, 24, 97, 2, 30, -51, -81, -92, 116, -116, -71, -111, 57, 65, 105, 74, -86, 117, -118, 88, 114, -2, 27, -9, -52, -38, -72, -97, 60, 66, -112, 98, -32, 30, -111, -14, -50, 80, -20, 18, -58, 63, 96, 35, 83, -121, -105, 99, -57, 72, 103, 13, 98, -46, 36, -49, 39, 96, 27, -54, -12, 21, -11, -90, 117, -67, -11, -28, 16, -114, -6, -92, -24, -32, -109, 63, 66, -56, -54, -69, -15, -1, -7, 70, -46, 21, 119, 87, -82, 67, -108, -85, -2, -53, -6, -17, -76, -82, -59, -50, -40, 19, -115, 25, -12, 43, 79, 125, -112, 8, 74, 98, -62, -30, -36, 118, -25, 104, 62, -41, 71, -48, -80, 53, -58, 59, 89, -103, 72, -73, -58, -62, -34, -86, 35, -56, 11, -105, 26, 29, 3, 68, 120, -44, 66, 113, -15, -111, 16, 84, 97, -89, -16, -102, 109, 94, 92, 122, 72, -120, 17, -113};
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
    msg.setTimeStamp(0.778723067011);
    msg.setSource(918U);
    msg.setSourceEntity(46U);
    msg.setDestination(58119U);
    msg.setDestinationEntity(17U);
    msg.type = 233U;
    msg.speed = 17673U;
    const char tmp_msg_0[] = {-40, 102, 9, -115, 46, 46, -35, -26, -10, 15, -9, 47, -8, -30, -45, -79, -58, 32, 44, 118, -19, 68, -38, -55, -19, 50, -60, -125, 2, -16, -115, -68, 32, -33, -119, 22, -45, 43, 90, 104, -81, -50, -84, 93, 124, 51, 41, -46, 33, -125, -71, 61, 106, 106, 124, 100, 34, 114, -33, 95, 112, -95, -83, -121, 28, 21, 16, 20, 79, 16, 105, 75, 81, -113, 70, 104, -43, 30, -109, 118, 69, 60, -84, 120, 115, 25, 113, 80, 65, 35, 100, -115, 114, -52, -48, 120, -55, 97, -45, 97, -44, 39, 6, 24, -85, -21, 25, -87, -103, 24, 31, 108, -28, -36, -10, 23, 57, 74, -123, -45, -81, -108, -72, 119, -65, -80, -98, -75, -60, 31, 45, 85, 116, 72, -46, 3, 75, -51, 72, -126, 42, -117, 110, -47, -79, 70, 31, 97, -37, 58, 84, 9, 32, -19, -28, 117, -12, -42, -18, -61, 31, -58, 123, -7, -67, 63, -72, -128, -39, -71, -27, 95, -56, 33, -117, -20, -10, -97, 116, -124, -121, 3, 29, -10, -9, -54, -61, 44, 59, -26, 59, 98, -62, -3, -65, 63, 87, 29, 8, 80, -70, 95, 62, 75, -126};
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
    msg.setTimeStamp(0.147861677733);
    msg.setSource(45282U);
    msg.setSourceEntity(225U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(88U);
    msg.type = 98U;
    msg.speed = 100U;
    const char tmp_msg_0[] = {-125, 100, 44, 14, -14, -27, 28, -77, 43, 86, 14, -49, -90, 35, -106, 38, -14, 123, 115, -99, -29, 7, -52, 71, -102, 64, 66, -88, -98, 30, 85, -24, -90, 97, -126, -70, 49, 60, 62, -109, -5, 66, -92, -1, -6, -12, -115, 74, -81, -9, 122, 85, 55, 32, 96, 55, 110, 62, -119, -102, -12, 2, 66, -12, -8, 29, -7, 24, -53, 77, 85, -33, -109, -75, -17, 108, 42, 4, -22, 57, 39, 57, 18, 102, -7, 52, -21, -17, 57, 39, 120, 77, -47, 78, -110, 35, -6, -26, 122, 40, 4, 72, 101, 43, 56, -126, 80, 2, 72, 75, -110, 19, 2, -108, 98, -37, 106, 123, -127, -126, 45};
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
    msg.setTimeStamp(0.723550999733);
    msg.setSource(34769U);
    msg.setSourceEntity(146U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(87U);
    msg.op = 112U;
    msg.tas2acc_pgain = 0.537878112315;
    msg.bank2p_pgain = 0.000819138721512;

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
    msg.setTimeStamp(0.294767188994);
    msg.setSource(59188U);
    msg.setSourceEntity(169U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(179U);
    msg.op = 162U;
    msg.tas2acc_pgain = 0.214515886215;
    msg.bank2p_pgain = 0.879599204152;

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
    msg.setTimeStamp(0.68001787579);
    msg.setSource(58883U);
    msg.setSourceEntity(101U);
    msg.setDestination(30608U);
    msg.setDestinationEntity(32U);
    msg.op = 162U;
    msg.tas2acc_pgain = 0.231193050719;
    msg.bank2p_pgain = 0.435174243013;

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
    msg.setTimeStamp(0.00472862577774);
    msg.setSource(16641U);
    msg.setSourceEntity(151U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(224U);
    msg.available = 3681381481U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.986458044619);
    msg.setSource(62608U);
    msg.setSourceEntity(118U);
    msg.setDestination(46747U);
    msg.setDestinationEntity(35U);
    msg.available = 2364792067U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.682675874547);
    msg.setSource(39441U);
    msg.setSourceEntity(242U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(32U);
    msg.available = 3319844755U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.45494932612);
    msg.setSource(52243U);
    msg.setSourceEntity(33U);
    msg.setDestination(2339U);
    msg.setDestinationEntity(24U);
    msg.op = 137U;
    msg.snapshot.assign("AZJMVJDMEYPBDEJCHZNYENROTKQHDDNLBAHCVSMPWTLDTMRSSBGCLZDXUTGJQCKRPWAFYMQUJOQCSWWYDVMESBCFELZXYHWTZPFUWAIYHOOGXFRXBBNTXOUGHAVUCNIPBJIIJUKRYZSGSAGRPWQIVYKXXGNKWQAZXFIKEPLIVBKSSITCTVHTYUFAHUROFHJQOIEZDYDVRBDHFOLIXEXUZWRSWPCMVRMMLFNGOGPEKPLMBLFNEZAO");
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 133U;
    tmp_msg_0.comm_interface = 218U;
    tmp_msg_0.period = 39335U;
    tmp_msg_0.sys_dst.assign("FAURPCPNSNUMSKPZKBHAIDZDIHGNIYKUDWREVLRHJHTXJTABNLRIZCDHOBTMRNQBOWTVSZWGMLIGMGHAQCZPYZETWWPSXULPJIMVFMEERASAYZYRWDUOXBIDXICCOECOEAJJGWAPYLSNJAPFMSLZBKKGFJVXLQNLOVQUZEKYDDHYNUGDYCWZTRKDGVTIOTUYKQHEGSCSFFCLOVMUCKFFHJPPKBVXLNAQQITQVOWXHJYOEXXGMXTBMUBQQRVEWS");
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
    msg.setTimeStamp(0.118474367107);
    msg.setSource(58557U);
    msg.setSourceEntity(28U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(110U);
    msg.op = 75U;
    msg.snapshot.assign("AOXFTCKQHCDKTGLMAOIWWIGUHCGIXMNURWZOCOQHZENSRNSVAJNOHFXLTFJBSIGQJMYJPFYLGYTTCGYBQCTUJGUNVVYHVANBOFHEXMQUNLQWXBKEWEJSOMIREALPRDDOESFPCJNDEAUQDZDLKJLHSYFRVDKWYWBAPSXAGSNLIYXUQHFKRWETBRXKGEZZMPPAXXRMDJJZOHIZNRHITMVOUMQVCKZPMVLPKSCIIABQ");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IKIQAOJIWLYABRCKDYBDUOLNXWCVUBCPCZPWHBDMFSXURCZFSRTKGWOMPFEURSBDYZAMJSULOTNDMNDIWKGPAGQSZKRHHTGPTKVJOZHOQETNRQHEABPBJHGMFUFLCYREYNNAVVZIHWNWEVQCIVJIJZBPLIJGXCTFPYOQQWFH");
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
    msg.setTimeStamp(0.171863249472);
    msg.setSource(10142U);
    msg.setSourceEntity(151U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(203U);
    msg.op = 64U;
    msg.snapshot.assign("AQFKOORMNQVQCYWAPHKYRIQHHCTWJZTKKFJNTODCEUGCCRNUNBNFFSPGIMFJPMMAGEQJJGMETGSVVUZANVGXLZPHBYIYDJSUZIBICLPRETVMIWHOFFQEJIZBKVUSJQNI");
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("BOVAPYUKERQLLDYRMNCQAKFLZWMHDFEQNNLDTVEYWVJKBKYEBRCVQLTVRCVTFHFFWSSHPGUPCGKLIWSLJBEWIPOBNYGSXTRDKYXAMINNBLVJRQRHDZUIZSJHXTOEZURMJUCHSZTDHJMQTMZPFGQKYMBGCZUDFDNSKXXAUQPIMAGWOKZABXXINWASNZLJCYBGCOCTEVMYORIAANMIFTJEZHVEIJAGPFXSOWPJUWGQPBUTEUYHDCRPFGH");
    tmp_msg_0.rssi = 0.328569741213;
    tmp_msg_0.integrity = 7417U;
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
    msg.setTimeStamp(0.202230842923);
    msg.setSource(49319U);
    msg.setSourceEntity(68U);
    msg.setDestination(44192U);
    msg.setDestinationEntity(137U);
    msg.op = 109U;
    msg.name.assign("TIXTFHDRSOYKJWQWCMNKVPGKUBQALZQEGMIVGYCZDNFUDKHOWPLJTSM");

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
    msg.setTimeStamp(0.38922048813);
    msg.setSource(7551U);
    msg.setSourceEntity(24U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(40U);
    msg.op = 231U;
    msg.name.assign("WQURSEDAJXJIXVGCOWEUXYCWFHBUPETHOCEYBRZNJASDLHYGUXCEJDYJKOMAAHEIVKRRQENDZRLOJQTMSNLRLTSSMAVYGBCHCMBTLADPXVVKJHIFJLNCFZKIOBQUDFGCPQQHSZWIQZKGMXBKEZBVBCWMOXHOKOBGNFXYDTYXDNRSTFLPZPUGGLNBRGZQIVTHJNP");

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
    msg.setTimeStamp(0.187249850383);
    msg.setSource(25324U);
    msg.setSourceEntity(127U);
    msg.setDestination(30282U);
    msg.setDestinationEntity(32U);
    msg.op = 6U;
    msg.name.assign("RFASHWMJNQIVENUOCCFFHLDFDKRQQOYVUWXMQADBZGE");

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
    msg.setTimeStamp(0.120237299843);
    msg.setSource(53509U);
    msg.setSourceEntity(97U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(202U);
    msg.type = 137U;
    msg.htime = 0.460964380034;
    msg.context.assign("OCBIDCXCSCHQALGGSCIFYFVZQNICGKGMNAPIZJSVJBYINDZQATTCLTUGXOBWUPJUNJKZAJHCMHGNSGJBKNMIXGGJSEOYO");
    msg.text.assign("LBILSIFNFGVYELARDQBODRWAZYGUWQPBDQRNIQNKPZFZEKYJCPVXMBSZVUVBPJWSUTXAIHSRAIHXDTGGBZXEFDCJUQNLZEXPVPGYPPWDKOTMKHHIVBKNHASQGAHMMXVOKJNDFIUFWWEYUUMGRXREABMOQZIP");

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
    msg.setTimeStamp(0.308279573299);
    msg.setSource(46260U);
    msg.setSourceEntity(165U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(17U);
    msg.type = 104U;
    msg.htime = 0.482605924129;
    msg.context.assign("XYCBUXNLJLLLYIVIAMKPSWSGUUUTHLQZWWQYLGKJMH");
    msg.text.assign("MZHISHODEWNTKZKEWPQEIPXNVFKNPYEDYVXZCTDMFPUBLOSDYBUNASIBDCSYUXKVRXRJQODLUJGLXUAOLTBIPMUYRCMBARJFFTKKVJBDSLFWXMTHGICHCYVNWNGHTQIARWQQFBTCKOFFHZKDLJEVSCIQOWHXCTAQPCZZLRYMMPJUYDFWEYQAVDCZJOMSWEPVHAXJRQAWRBHGJEXXNHATYIBIEKNSVVLO");

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
    msg.setTimeStamp(0.980988992154);
    msg.setSource(57144U);
    msg.setSourceEntity(55U);
    msg.setDestination(64334U);
    msg.setDestinationEntity(22U);
    msg.type = 220U;
    msg.htime = 0.947965563523;
    msg.context.assign("RWYGSRWUGBKYPQAPEDBXTWEHGMXWXNHYXHMBRQIOKCGGVYAJTRCYITHQZULDNIMZXBASBJNWAKMYVBMLUCMRDCPDLXDSYZSECTZOGQZCNBHWJRQIUFKIHSDRNIZJZUCRQEHGPETTNEONAPSUWZXTSZLJRLKBKFFAQYVOAKPDUIVONLFQTAIGVKMMZVFXOWDEEKAYVRHNBBFWXFLEU");
    msg.text.assign("HGLSIDXKTFYPYOVLITBTNCPCOSVMJEIJQMERQUWHZYUUGDGZCWHUMSIGUZTUAAMNFPEIKQFJOGHYTNCGBAPFBDZODSRBKFCCBQQSEKNJWNXOYGSKEEFQWZSKJZRYJNUQHVFADMPSHPYNUMOVEAPYEIRKNBCJVQAAGPFCMRXPFLB");

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
    msg.setTimeStamp(0.275539382337);
    msg.setSource(64144U);
    msg.setSourceEntity(33U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(246U);
    msg.command = 38U;
    msg.htime = 0.468410719757;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 127U;
    tmp_msg_0.htime = 0.33736353862;
    tmp_msg_0.context.assign("HWECBQZLXIWPNQCMWHJXDUITVLSGRDMOMDHYQBPSPKDAKYD");
    tmp_msg_0.text.assign("KFXWUVBAWLVTOZBCQHGTSFMNYZFPCXIXEONUBNEYEPNAWXIDYDKXZOIKMPQKOJYPVTBXLBHTGGNTMDBJWTESNYAUGZAJOSZCENRICXIRHURBGSSDHKMAZADFLIOWHJVLKOTIPVJMQPMEURLDERKADUUDGJEZPVLVFVGECQGFRBBQZIKHXYVSRPQWYGFWKSHELNAXWDAKPUTZNZCNSLHMXTSCFRCQQUYRTPURVOYCOBMHML");
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
    msg.setTimeStamp(0.467617462497);
    msg.setSource(5419U);
    msg.setSourceEntity(61U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(134U);
    msg.command = 229U;
    msg.htime = 0.996897534877;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.htime = 0.585444629166;
    tmp_msg_0.context.assign("EJPENOHHXCU");
    tmp_msg_0.text.assign("NSPIGXQRDPYXWDQVWESIBCJMGPFNLXUUGEVQBOUACEWCZAMRGPTXZOFSDNSRQQELTVYOXKNGISFPBDCZHYKTHLHKDLGYQUUIS");
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
    msg.setTimeStamp(0.869645041698);
    msg.setSource(27966U);
    msg.setSourceEntity(8U);
    msg.setDestination(26167U);
    msg.setDestinationEntity(221U);
    msg.command = 182U;
    msg.htime = 0.478455804987;

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
    msg.setTimeStamp(0.198111614794);
    msg.setSource(4698U);
    msg.setSourceEntity(217U);
    msg.setDestination(22590U);
    msg.setDestinationEntity(149U);
    msg.op = 154U;
    msg.file.assign("KXKCMEJBPYLJABKXPGZOHAIMRBAQDYLEOFOJESCIUYKJMWQECBXITVESQWSHTJDDQORSRKEGLMJXDVNMEGNUGTZYQKHFMFP");

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
    msg.setTimeStamp(0.1723088657);
    msg.setSource(43613U);
    msg.setSourceEntity(107U);
    msg.setDestination(24493U);
    msg.setDestinationEntity(111U);
    msg.op = 35U;
    msg.file.assign("UVUKISHYLTHRUXBA");

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
    msg.setTimeStamp(0.957472466506);
    msg.setSource(27992U);
    msg.setSourceEntity(45U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(19U);
    msg.op = 249U;
    msg.file.assign("ZACDTSHEHZAWKTROMMITIDYNQZAUENPBLEXFMXJZNCGLIXFZIEUIDLNOVHQOQMQPJQPFNVBYDBOBQLYOSMYWKARSR");

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
    msg.setTimeStamp(0.993859898146);
    msg.setSource(3572U);
    msg.setSourceEntity(166U);
    msg.setDestination(2780U);
    msg.setDestinationEntity(69U);
    msg.op = 192U;
    msg.clock = 0.165553386795;
    msg.tz = -55;

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
    msg.setTimeStamp(0.260135132133);
    msg.setSource(41067U);
    msg.setSourceEntity(177U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(221U);
    msg.op = 81U;
    msg.clock = 0.659813319547;
    msg.tz = 8;

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
    msg.setTimeStamp(0.200238633816);
    msg.setSource(48258U);
    msg.setSourceEntity(20U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(169U);
    msg.op = 145U;
    msg.clock = 0.802427547703;
    msg.tz = -88;

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
    msg.setTimeStamp(0.230226161799);
    msg.setSource(33476U);
    msg.setSourceEntity(134U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(151U);
    msg.conductivity = 0.289987554152;
    msg.temperature = 0.439156762603;
    msg.depth = 0.286886442715;

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
    msg.setTimeStamp(0.438499052972);
    msg.setSource(53851U);
    msg.setSourceEntity(17U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.797927710006;
    msg.temperature = 0.985958128498;
    msg.depth = 0.637509256039;

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
    msg.setTimeStamp(0.481553534742);
    msg.setSource(21789U);
    msg.setSourceEntity(47U);
    msg.setDestination(35047U);
    msg.setDestinationEntity(189U);
    msg.conductivity = 0.936294755494;
    msg.temperature = 0.827324399242;
    msg.depth = 0.252993953596;

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
    msg.setTimeStamp(0.0666653018367);
    msg.setSource(38319U);
    msg.setSourceEntity(225U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.924795056528;
    msg.roll = 25603U;
    msg.pitch = 6998U;
    msg.yaw = 21417U;
    msg.speed = -6501;

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
    msg.setTimeStamp(0.351186878941);
    msg.setSource(41779U);
    msg.setSourceEntity(21U);
    msg.setDestination(47107U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.277796968546;
    msg.roll = 59017U;
    msg.pitch = 7748U;
    msg.yaw = 19425U;
    msg.speed = -15593;

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
    msg.setTimeStamp(0.263870641682);
    msg.setSource(63555U);
    msg.setSourceEntity(254U);
    msg.setDestination(16470U);
    msg.setDestinationEntity(179U);
    msg.altitude = 0.119975610802;
    msg.roll = 39376U;
    msg.pitch = 29852U;
    msg.yaw = 10867U;
    msg.speed = 28135;

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
    msg.setTimeStamp(0.758594897297);
    msg.setSource(42211U);
    msg.setSourceEntity(59U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(169U);
    msg.altitude = 0.439492441028;
    msg.width = 0.00956299173892;
    msg.length = 0.103104976349;
    msg.bearing = 0.0280197870084;
    msg.pxl = 18599;
    msg.encoding = 96U;
    const char tmp_msg_0[] = {-5, -46, -105, 58, -25, 69, -60, 52, 63, 77, 117, -23, -1, -32, 28, 90, -124, -101, -63, -118, -17, 106, -75, -47, -68, -90, -98, 79, 23, -2, 47, 50, -55, -121, 69, 103, -120, -27, 93, -52, -89, 1};
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
    msg.setTimeStamp(0.53426442108);
    msg.setSource(28501U);
    msg.setSourceEntity(111U);
    msg.setDestination(56820U);
    msg.setDestinationEntity(55U);
    msg.altitude = 0.239490491671;
    msg.width = 0.118103947709;
    msg.length = 0.910895590514;
    msg.bearing = 0.701356570349;
    msg.pxl = 30380;
    msg.encoding = 21U;
    const char tmp_msg_0[] = {-75, -82, 102, -70, 65, -71, 113, -44, 84, -95, -128, 96, -120, -119, 60, -124, 117, 48, 101, 13, 60, -67, 14, 106, -79, -89};
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
    msg.setTimeStamp(0.668246919761);
    msg.setSource(54973U);
    msg.setSourceEntity(167U);
    msg.setDestination(10387U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.555235994847;
    msg.width = 0.0838677515282;
    msg.length = 0.190150639304;
    msg.bearing = 0.461367346457;
    msg.pxl = -23795;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {15, -8, 5, 16, -24, -34, 85, -12, 51, 53, -87, 108, 47, -109, 69, 75, -55, -88, -60, -113, -99, 43, 96, -1};
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
    msg.setTimeStamp(0.506344102527);
    msg.setSource(25312U);
    msg.setSourceEntity(190U);
    msg.setDestination(15312U);
    msg.setDestinationEntity(66U);
    msg.text.assign("WIUESTCJYURMWGSHYCHVKRENLAOZHLATXISQFCAREJKCQPGHQFMLCBPRIBOAXWYCRLXJBGDEROIYDVFIXNGYZIQUFCJDXSBJWZUTHXNXGNSBBQBIQLEZZ");
    msg.type = 30U;

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
    msg.setTimeStamp(0.91873714348);
    msg.setSource(31775U);
    msg.setSourceEntity(124U);
    msg.setDestination(28999U);
    msg.setDestinationEntity(38U);
    msg.text.assign("IFIGWRQVLTKZ");
    msg.type = 229U;

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
    msg.setTimeStamp(0.115308234568);
    msg.setSource(30207U);
    msg.setSourceEntity(228U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(215U);
    msg.text.assign("ZNRABKPPTQIFBOIZGVXGAPEDYJYMADTPBGOIRLOMVQHHLSDTLTDAEAPURPCFKMQCIQGJWFARLWEZHIETOZSKYHWOVXUYPXUZIFZVKWFSBKMJSMMDNWMYQJCYFHYWSYYQNRBUPWJRHGXKIASVTSOIABHVXCFHDECNGAZNOCTEGORCKZN");
    msg.type = 13U;

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
    msg.setTimeStamp(0.670102733711);
    msg.setSource(40294U);
    msg.setSourceEntity(125U);
    msg.setDestination(30017U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.392196709756);
    msg.setSource(32324U);
    msg.setSourceEntity(53U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.669856729527);
    msg.setSource(22972U);
    msg.setSourceEntity(215U);
    msg.setDestination(54683U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.811497873946);
    msg.setSource(24879U);
    msg.setSourceEntity(3U);
    msg.setDestination(51964U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("NQFMXRLJRDZZDFGDWJFONRELVOCNNMFCRFMESMBXASUWCZKUWFUOGAXTQMFTDQMYZMLJJOKEDXVZNEXSVTTMRPTLZBCPAJDIHKLWHNGYASVOANWGPSUAYBXHGIIGBPQACQDQYULHUKTFVGUEIRKOSQBODJRXIJCFWVTEPKLNGGVXSZLYBJBVPFXSCWVPKIAESJRCBMIUJWGWSRDLQYQENZCDKHH");
    msg.sys_type = 105U;
    msg.owner = 5166U;
    msg.lat = 0.0371814652838;
    msg.lon = 0.816465973324;
    msg.height = 0.985038050306;
    msg.services.assign("NOYABXMOAIKWHYVSJRETSAOZFUOPNQZDNBNBGOKUKLRWDISPHJZOQVXXHYWVXLPDFLCAHGYMKKVPCKDYXABISBNHPIBRLRWJEQXBWNCVTLRT");

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
    msg.setTimeStamp(0.604722043604);
    msg.setSource(31357U);
    msg.setSourceEntity(191U);
    msg.setDestination(36633U);
    msg.setDestinationEntity(148U);
    msg.sys_name.assign("TJAPLHXIVTLRMYGJKPSUOAZWBGVWSWLYIFMZTOWADFHTKBLNYKHDYMUMQKJJCVYSGSGROMNNCPIMUJLFQERYCQBCBWPVLCDPDFOBUJNZHMSOBPIFAHREUTZGMNOGAZZE");
    msg.sys_type = 134U;
    msg.owner = 780U;
    msg.lat = 0.244044468817;
    msg.lon = 0.553539944589;
    msg.height = 0.853585991417;
    msg.services.assign("XQPXIVENEGMKHZWMTYIROWBQWIPRKZCBKGLHSNEJNVCBZSMASUJPZUUHPRAMNJKEXFZPLMMRRZFLTOAETHQKJWIBVEPIZOTTKKTWTZDACODFHZQNHBIGYLFGSMFVROFWGLRABCOFXHDEXIIIAHXAAFRJBGYJSCNYJDWFRQFYYQPQTUXOWCBUVLYOCANGLLMDMCTXDKGYSVUNWQENLOIKDV");

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
    msg.setTimeStamp(0.851862417748);
    msg.setSource(48811U);
    msg.setSourceEntity(160U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(50U);
    msg.sys_name.assign("HHRFOXGUVXOXBGYPQRRDRTCGIBNFLCWFICSYKPJYZOQMOAKHEQLVJAYLJZUDTBCFCWSCFW");
    msg.sys_type = 93U;
    msg.owner = 41860U;
    msg.lat = 0.0785153313373;
    msg.lon = 0.831820774868;
    msg.height = 0.0949683877776;
    msg.services.assign("OTOPSPPVZBSEXQYSLUGUWCVCWGFGQXUIXZEBMLIIVVVNZYLUBDYQJGWDJNWFIUAYDMQNHDURCHOGGVRITZLPNPJLMASPYQXBXFJRCSRPZEDUCMXAYHTZBNWGDIVIEFMCTHIBXMBLJAJSURKAWD");

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
    msg.setTimeStamp(0.132762770835);
    msg.setSource(65173U);
    msg.setSourceEntity(29U);
    msg.setDestination(35692U);
    msg.setDestinationEntity(48U);
    msg.service.assign("NNUEPHMSBNUPGVIJYKCFQHRYZSWCJWRDGEMFLONAWQBTQVTTBDTXUJFISYGTQBIUKXPDQSIQIGAXLVDTOXGWRLPHLCIEIRPVWPUKWJGJPWZVBAFNMKMNMNOALHJRUZYLAFOXSRXGMIHBHLJAKQAXH");
    msg.service_type = 223U;

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
    msg.setTimeStamp(0.7369575281);
    msg.setSource(30164U);
    msg.setSourceEntity(189U);
    msg.setDestination(26947U);
    msg.setDestinationEntity(246U);
    msg.service.assign("WTZWPMWXBLZIGAVQZGKNDJLVTIADVQNAFERIOPVEJQQGGIGLMEHSNZIYTPOTBYGHHHPDNLWMJZUQJMHALESJPVSZXGBMCJKRTILIXNKHGFHKTFEWSWVATWBCFYXU");
    msg.service_type = 243U;

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
    msg.setTimeStamp(0.100229309031);
    msg.setSource(9114U);
    msg.setSourceEntity(95U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(228U);
    msg.service.assign("DPFJGDBYSXJDDHQDVGTOWRULSUQVVLOSHHEWFPGIOOUURQXKHSXRGAEISDTTBRLIUIVAOHCIMEFFPGAACTAKLRIBKXTBMLQKQYYRMNFKXCUGBPRBEQZYAATNDIJKMVIF");
    msg.service_type = 67U;

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
    msg.setTimeStamp(0.664327854677);
    msg.setSource(15958U);
    msg.setSourceEntity(86U);
    msg.setDestination(44203U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0238478342477;

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
    msg.setTimeStamp(0.59254456341);
    msg.setSource(1710U);
    msg.setSourceEntity(79U);
    msg.setDestination(28116U);
    msg.setDestinationEntity(5U);
    msg.value = 0.937551220416;

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
    msg.setTimeStamp(0.428257646589);
    msg.setSource(61916U);
    msg.setSourceEntity(110U);
    msg.setDestination(58953U);
    msg.setDestinationEntity(200U);
    msg.value = 0.550856053769;

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
    msg.setTimeStamp(0.175810265334);
    msg.setSource(44456U);
    msg.setSourceEntity(93U);
    msg.setDestination(15984U);
    msg.setDestinationEntity(146U);
    msg.value = 0.663604549855;

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
    msg.setTimeStamp(0.403018800656);
    msg.setSource(61354U);
    msg.setSourceEntity(74U);
    msg.setDestination(28020U);
    msg.setDestinationEntity(92U);
    msg.value = 0.102756741881;

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
    msg.setTimeStamp(0.44126068306);
    msg.setSource(25560U);
    msg.setSourceEntity(44U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(98U);
    msg.value = 0.249349744833;

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
    msg.setTimeStamp(0.30579841727);
    msg.setSource(63887U);
    msg.setSourceEntity(69U);
    msg.setDestination(2120U);
    msg.setDestinationEntity(28U);
    msg.value = 0.914895122614;

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
    msg.setTimeStamp(0.187976084861);
    msg.setSource(57355U);
    msg.setSourceEntity(150U);
    msg.setDestination(55727U);
    msg.setDestinationEntity(13U);
    msg.value = 0.269062919925;

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
    msg.setTimeStamp(0.221072388204);
    msg.setSource(56080U);
    msg.setSourceEntity(232U);
    msg.setDestination(26146U);
    msg.setDestinationEntity(36U);
    msg.value = 0.698095915169;

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
    msg.setTimeStamp(0.864960405492);
    msg.setSource(47303U);
    msg.setSourceEntity(146U);
    msg.setDestination(46051U);
    msg.setDestinationEntity(116U);
    msg.number.assign("OVYNOTAXKDMJBUKJYEMHSVKVHTHZXCUWCNBBHGJCPDAOWAQLFLZKZWRDGPWQMARPPATCXTXTSHIVZMEMZBFYNSXKEFEJHLGRILVMQTXIIDEBTWZS");
    msg.timeout = 54937U;
    msg.contents.assign("TCQMLTJMFTJGAVQEBMCJEZEZHAUZFDDWQFCQGUYOOMRSDKPYSGBFAXMNVLKNVSMRHCZLMEAPAECYFQESEYBWSDENSITDUHOOOISJQQUVHHXCNZAQAZLQUWBYJNLGMARLVBFPGOKIYVVGAWVBTTDNJHOYXWZIEYIURIXWBGKCCDRBNLJHFFUDFCPHTGVYQVRASGXCRPUPXXMTHWMXSRKOZWNKBJJTPGFKKLKINK");

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
    msg.setTimeStamp(0.566576756986);
    msg.setSource(6313U);
    msg.setSourceEntity(67U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(136U);
    msg.number.assign("YIQKKGDNFUQYGMCOOGJXAAIROUWXTFIPMHSMLNRBCWPLGMVRCEMFNDMLSCYFFTLYZLBBJJPRZBQEIHR");
    msg.timeout = 35898U;
    msg.contents.assign("JZLONXGDWYLFYNAZRRHSWPIUBNRRHWMACBWDHRKQMLAXPWQXUUZCTBTXDDXUKTXIQSZGSNBTMZFITFSJSOHETJQY");

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
    msg.setTimeStamp(0.96365589297);
    msg.setSource(34806U);
    msg.setSourceEntity(83U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(241U);
    msg.number.assign("VPBEIWSMOCJCZIIDYXOMLOKSKLAWSMNCTKRFWPAENCGNLCYWYHHSSYRQZBLZTUEUQTFZWNQFBZWBJRWPAKDELMDZFYGFBNKRKLEPFJUNUXXDXUOFSEOZAEFSJGVPMEBSUXQEKJYQICMNOKYDZSSDIDEZUHRULXMHVNDVCORXYHYGAVQJCDGBP");
    msg.timeout = 22357U;
    msg.contents.assign("WDEHQEBMYEVILRTAQKJYNFRPWGKMZNJWSZBHCFCGHYNTZAUXEJCZASXGVWAHQISYDFVCPDOKJMSRRZBVLBNSHSUVMDTJQXLNKFXGPTLFGCOJMKNVEJPXUAKAGBQXFYCWXTNREKOPDWQDACZULLAWZHILONWBBRPRIYRRVNOEPVUSO");

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
    msg.setTimeStamp(0.452000307701);
    msg.setSource(48747U);
    msg.setSourceEntity(9U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(142U);
    msg.seq = 1421852667U;
    msg.destination.assign("LLGHHDHAZUMUURLTFLIEZWZASOVKWPWKMAPYGTJSOSVJQPKGFBCAMEUSQDXRKFURKERAQGWVICRUGYWKOSMQZBGQXDIEZFGTJBDOZGGYLUTMLHBJDHHVNZQFIYUOOJSTJCSRFQMERPEVMCNTNCRXIUYVWBNDJIOOIITNNNWXMBHTPPKZBFUPECXEYGQVBADXAFQXBWCZSCZLSJXVDVMXJPCYOBMFROSALDNXEKWKEVQTYJHYDHNAP");
    msg.timeout = 5185U;
    const char tmp_msg_0[] = {-53, -128, -67, 72, -89, -80, -119, -88, -39, -52, 126, -32, 28, -81, -68, -97, -72, 3, -15, 52, -70, 21, -108, -50, 114, -96, -74, 51, -65, 110, 42, 119, -49, -24, 77, -9, 117, -23, 96, -102, -121, -60, -9, -2, -28, 56, -56, -109, 89, -33, -113, 103, 113, -36, -118, -58, -29, -75, -57, -5, 117, -49, -90, -46, -6, 84, 8, -91, 58, 56, 106, 110, 100, -119, 38, -16, -125};
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
    msg.setTimeStamp(0.775069771778);
    msg.setSource(47596U);
    msg.setSourceEntity(137U);
    msg.setDestination(5511U);
    msg.setDestinationEntity(25U);
    msg.seq = 1460563944U;
    msg.destination.assign("TXYRNXAGWZMRONTJUNBJPAIEZZXEOHYRZRXNPBKGOHXLOVFRHBWUYYHKXHTCIPBECEUWFVHAGIANG");
    msg.timeout = 40704U;
    const char tmp_msg_0[] = {-106, -47, -8, -13, -100, 120, 19, -105, 20, 31, -55, 16, 96, -86, -24, 84, -103, 18, -8, 121, -22, -87, 96, 47, 33, 41, 80, 112, -31, 12, 21, 35, -50, 120, 70, -2, 118, -80, -76, -76, 97, 94, -12, -66, 65, 45, 112, -54, 2, -107, -68, -123, -118, 66, -54, 28, -21, 88, -80, -45};
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
    msg.setTimeStamp(0.363615143659);
    msg.setSource(48435U);
    msg.setSourceEntity(238U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(164U);
    msg.seq = 2959909036U;
    msg.destination.assign("SAUWRNXYDCOYJGASMFPDFWLMOPYGIBYSAZQMVRFCLUWACHVHOBVPZRXPENHKXMJUSFVMGDUERZSZXROLHQGWTEPTBGTYEKATCHNSUJJEZWTXIFCBBNJVHIGAOQDQUJSRIIWRVTKRXBUYNPRLBYVSUTINKOGNLZGGMGKIWJNYWLZK");
    msg.timeout = 54766U;
    const char tmp_msg_0[] = {61, 56, 6, -85, 35, -31, 120, -62, -23, -59, -5, -119, -120, 105, -36, -104, -83, -62, 0, 24, -46, -31, 113, 37, 33, 27, 108, -35, 16, 110, 91, 106, 111, 113, -120, -82, -68, 47, -33, -45, -104, 125, 71, -109, -117, 28, -71, 11, -114, -14, -78, -118, 19, 32, 122, 117, -99, -24, 125, 34, -113, -13, 59, 59, 27, 15, -108, 74, -11, -34, -87, -99, 126, -90, 6, 100, 117, -80, 82, -103, -67, 89, 13, -68, 106, -59, -86, 72, -2, 59, -11, 34, -21, -117, -88, 28, 125, -104, 25, 83, 115, 106, -9, 31, -121, 76, -108, 111, 50, -14, 96, -9, -66, 24, -75, -58, -23, 45, -15, -41, -52, -106, 31, 97, -42, 13, -98, 8, -50, -61, 111, 44, 115, 82, 73, 93, 105, 43, -76, 55, -66, -33, -16, 69, 68, -82, 46, 39, -19, 116, -38, 1, -75, -26, 41, -57, 55, 4, 96, -103, -22, -59, -92, 18, -51, -13, 116, -44, -95, 98, 53, -11, -98, 38, -3, 38, 78, -35, 104, 80, 95, -64, -68, -71, -17, -12, -36, -122};
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
    msg.setTimeStamp(0.229946148741);
    msg.setSource(26651U);
    msg.setSourceEntity(205U);
    msg.setDestination(19692U);
    msg.setDestinationEntity(34U);
    msg.source.assign("METGOUGSFYHOIKZQDSGNNMMWADOHLGXDGUOBLXFSFJJSIRTXWSGHXTIHXVWIWDCQNHGFAABPDZLUIYHWZYZWNVARYPYDPTBEEVLAJEFQCGQXZXKXQGVKHTPKNQLHSNJCTRBOCVORVPZFJAOQXM");
    const char tmp_msg_0[] = {-34, -110, 124, -118, -115, -52, 66, -53, -73, 87, 53, 39, 13, -122, -42, 11, 32, 49, -37, -122, 74, -99, 84, -8, 122, -90, 74, 111, -67, -68, 116, -84, -87, -112, 121, 14, -12, -46, 12, 41, 22, 99, 92, 121, 105, -57, 53, -107, -45, 77, -8, 30, -46, -30, -28, -31, -7, 54, 98, 9, -81, -105, 27, 27, 15, -21, 6, -9, -67, 14, -34, 105, 18, -64, 10, -6, 99, 27, -68, -55, -7, 9, 72, -33, 33, 98, -56, 12, -24, -118, -68, -13, -15, -110, 68, 110, -32, 34, -56, -95, 42, -39, 100, 107, 111, -113, -35, 121, 100, 114, -98, 125, -80, -23, 77, 53, 93, -47, 103, 45, 65, 45, -18, 113, 50, -21, -3, -78, 27, -127, 92, 92, -94, 90, 3, 73, -10, 28, 18, 119, -41, -36, 0, 79, 7, -125, 50, -62, -83, 34, 75, -1, 13, 57, -100, 107, -16, -55, -51, -71, 38, 55, 81, 85, 5, -55, 126, 50, 97, -32, 112, 118, -16, -94, 74, 28, 109, -55, 73, -69, -126, -25, -60, 83, -42, -47, 48, -84, -110, -30, 17, 83, 19, -18, 23, 88, -89, -118, -9, 75, -39, 99, 126, 21};
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
    msg.setTimeStamp(0.0627600779074);
    msg.setSource(4618U);
    msg.setSourceEntity(165U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(96U);
    msg.source.assign("CVZFTJGQQWTZJQGZFNSQWGWXKCSASUYKDGRJTWPKIXBEDRWZSXSTCGYEKCUJHMDRPZEPYNSDSDPQAEN");
    const char tmp_msg_0[] = {88, -15, -39, -88, 114, -104, -8, -60, -59, -120, 24, -96, 56, -49, -115, 27, -52, 32, -37, -64, 14, 82, 101, 87, -78, -63, -51, 85, -104, 85, 83, -5, -113, -74, 9, 107, -56, -97, 61, -90, 36, 0, -55, 106, 64, -87, -51, 86, -54, 34, -82, -75, -82, -118, -81, 117, 80, -34, -39, -106, -35, -31, -83, 107, -50, 8, 108, -113, -122, 67, -101, -59, 7, -4, -45, -9, -25, 125, 48, -45, 4, 76, -63, 24, -29, -8, -84, 58, -123, -8, -76, 98, -92, 74, 120, 17, 0, 36, 126, -12, 68, -83, -84, -58, -26, -85, 34, -26, 118, 99, 55, -49, 58, 2, 59, 66, -96, -53, 11, -117, 110, 25, -63, 13, -40, -98, 100, 97, 113, -60, 34, -80, 65, 12, 30, 100, -55, 108, -35, 85, 93, -2, -66, 72, -100, 100, -107, 41, -75, -104, 6, -107, -12, -52, 113, -33, 86, 53, -53, 7, 121, -101, -8, 42, 109, 62, -13, -35, -22, -74, 61, 95, -92, 72, 48, -7, 61, 110, 114, 10, -49, 83, 21, -97, 27, 41, 41, -79, -34};
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
    msg.setTimeStamp(0.449547121591);
    msg.setSource(19371U);
    msg.setSourceEntity(89U);
    msg.setDestination(31332U);
    msg.setDestinationEntity(114U);
    msg.source.assign("VTZCSRSQLNIEIIWVGGEGAVFDMAOYTILSMGXCUOUMLFVEOWCFFGEKCPCAANPOZSRCJDFDLZFBKTHEXELQZTDZPCQLGMZPYGKJPFWNZVLAUUYJLOGUMKMOREJSAJLSPI");
    const char tmp_msg_0[] = {-2, 117, -48, -45, 46, -120, -22, -3, -11, 48, 86, 85, -74, 44, -103, -5, -108, 119, -98, 57, -128, -127, 42, -10, -9, 109, 88, 121, -64, -103, -109, -122, -54, 37, 121, -79, 113, 123, -70, -59, -50, -114, -125, 21, 28, -82, -89, 40, 98, 125, -32};
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
    msg.setTimeStamp(0.400257672999);
    msg.setSource(41828U);
    msg.setSourceEntity(17U);
    msg.setDestination(22446U);
    msg.setDestinationEntity(201U);
    msg.seq = 756938203U;
    msg.state = 48U;
    msg.error.assign("CVGXTPKKRRIIVYICEYLEUNGJYXOSEOCKVWRHSLGAJNZFIOHDYIXKJSOQBUWUTRNEPYUQMDFPZEVFYPHMQIJJTNQITLMKXGZZEFJSNTQTUUUBCXDIZZUPVLBSJTCWRLBDLSWPRTBJVDAPYMOWUSBVUYLFMZXDVASEGTCCKMSOFVXCQNWIHFODFATFMQQG");

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
    msg.setTimeStamp(0.72395529285);
    msg.setSource(41556U);
    msg.setSourceEntity(63U);
    msg.setDestination(19888U);
    msg.setDestinationEntity(0U);
    msg.seq = 561909362U;
    msg.state = 106U;
    msg.error.assign("RGSOLOXGCZ");

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
    msg.setTimeStamp(0.240389566517);
    msg.setSource(14275U);
    msg.setSourceEntity(253U);
    msg.setDestination(62501U);
    msg.setDestinationEntity(41U);
    msg.seq = 167462966U;
    msg.state = 64U;
    msg.error.assign("FJOPMNTFVBLYKHZRJZQWSVUAJNEIN");

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
    msg.setTimeStamp(0.587854813293);
    msg.setSource(28738U);
    msg.setSourceEntity(168U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("FQPBCEDAFNTLYJOSSYPKNVATVJZRIJTJCLHOJNXOZXWTGRJBGHUMXRDKCZOAZIOSYSDUFNSTQIOZMGOPRLPXPBVYOSKM");
    msg.text.assign("KRBFOKHLWXDLDAKZAZRMOHZXAFUTUSTJSYEORTHDHPQLEBOFWOCRDEZFVGHDOWMVMRLLURZJNFNN");

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
    msg.setTimeStamp(0.846306664159);
    msg.setSource(6576U);
    msg.setSourceEntity(30U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("ZHAPAXKNCFZXVLRNRWKTESKXDYRYQQFJDCSIBMKTJBNLMSPEEQAQSYGFUTXOLHCNHVEVLCTOSJJYWWZHAQCHKPMALE");
    msg.text.assign("MHEGCVDDSSBFPZPJGVRYWLONTWMESNJGTXQJKVLJSNYBUOXCURCTJDGGXNXBPJQOXWZHUWBLVRRMWIRFHIDVKELXLNIFKVTZDFOFXKLIVVSDEHWDYYAIMLRBXICZQGDOVYAELNXPLTCWIUHHHWJRUFBAQERCABGPYZZHUADDTACTKKYHUOOWXIUEMTKZOETKCQGVNSJEMAJMPUQPNTUNMEFKGQPFHZSAGQCNYPLORSOYMBQMBWPJ");

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
    msg.setTimeStamp(0.720949292995);
    msg.setSource(49842U);
    msg.setSourceEntity(176U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(67U);
    msg.origin.assign("SCYPQWKNILFPKMEQXFQKKLCAFCHXA");
    msg.text.assign("MLRZEQGIEBCDOITLUILOAOGCFSHICNMMYNTVHJJCRNSFUGWEBXAQSKQUCCLTXIHRQYKOSEHBQDRUCRKOFEZZBWFAMJFJUHZZYD");

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
    msg.setTimeStamp(0.972448268556);
    msg.setSource(10091U);
    msg.setSourceEntity(207U);
    msg.setDestination(45119U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("WBWMGWKPXUTRIIORHHGJIXAMOKTCHRYBEDBYQMDNTNEKGCLKSJVUNIPXFJNVBLYKPNSABESGOMWTPAVBFLYCCQUZRXVOJKQZDWIHTYRMAYLSFAGXHUATBYZKENVUQRRSECMDODVUJJFNYVDTOZHPCMJYMKQHNHWPOOWXWB");
    msg.htime = 0.0250286888173;
    msg.lat = 0.372521314333;
    msg.lon = 0.997131002577;
    const char tmp_msg_0[] = {-96, -40, 31, 8, -57, 60, 60, 50, -123, 117, 3, -101, -89, -48, 90, 49, 76, -54, -36, -7, -116, 100, 103, -31, -76, 26, 55, -52, -50, -104, -117, -116, -71, 10, -103, 80, -86, -2, 92, 33, -58, -13, 85, -59, 24, 30, -59, -92, 22, -51, -54, 50, -106, 27, -7, -83, 126, -127, -101, 85, 44, 31, -49, 26, 10, 80, 100, -38, -116, -36, -113, -7, 48, -48, 76, -101, -85, -85, -22, -127, 100, -17, 17, 84, 34, 87, 64, -27, 40, -64, -16, 91, -79, 119, 95, -72, 50, -103, 119, -100, -103, 25, -20, 77, -97, -128, 21, -92, -29, -27, -24, 46, -49, -119, 106, 1, 30, 14, 3, 51, -49, -94, -113, -121, 49, -30, 43, -40, -37, 118, -22, -128, -71, 28, -76, 9, -90, -66, 115, 115, -54, 1, -82, 53, 32, 8, 15, 101, -66, -68, -3, 15, 119, -57, 126, -79, 36, -79, -90, 52, -102, -83, 89, -24, 70, 28, 109, 124, -104, 75, -18, 23, 120, -61, -29, 85, -107, -28, -100, 42, -26, -81, 111, -20, 101, -72, 81, -102, 27, -57, 87, -5, -105, -5, -33, -39, 58, -108, 44, 103, -50, 24, 126, 7, 29, 69, 16, -78, 25, -68, 75, -75, 109, 25, -127, 112, 60, 11, -53};
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
    msg.setTimeStamp(0.788259813022);
    msg.setSource(44254U);
    msg.setSourceEntity(43U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("TSZBDWUHKMGIIVGQLCFNUERSOOKCSOCWQMDUNCWWAMUYZPFDRNOGEPTBEEAFDEEOMUQUAEZAJZCWNBKUTJRSXYXLTLILFGKR");
    msg.htime = 0.50114058566;
    msg.lat = 0.40622775443;
    msg.lon = 0.847016083545;
    const char tmp_msg_0[] = {65, -79, 110, 41, 28, 92, 110, -4, -59, -37, 21, -52, 94, -15, -54, -6, -21, -110, -105, -101, -111, 0, -108, -121, 66, 77, 90, -2, 50, -128, 75, -102, -116, 89, -102, -118, 64, -3, -58, -37, 122, -117, -32, 100, 124, 28, 107, -88, 70, -124, -118, -20, -72, -45, -76, 72, -105, -93, 3, 106, 89, -18, -70, -46, 95, -121, 109, 36, 100, 42, -27, 69, 63, -105, 23, 36, 68, 121, -70, -87, -105, 101, -105, 13, 39, -96, 60, 23, -27, 119, -123, 35, -10, -58, 5, 28, -26, -84, -19, -50, 115, 72, 95, -25, 62, 44, 93, 112, -56, -64, -8, -122, 121, -49, 102, 121, -99, 39, -12, 87, -83, -111, -7, 96, 6, 71, -23, -59, 2, -112, 10, 45, 37, -100, -97, -114, -114, 60, 101, -114, -78, -82, 98, 45, 7, 15, -102, 98, -21, -44, -18, -39, 106, 54};
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
    msg.setTimeStamp(0.49732609382);
    msg.setSource(12826U);
    msg.setSourceEntity(232U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(221U);
    msg.origin.assign("PZKIMHFZCKAUVGPMJKAONTGSNJCAQZDXOELTKYNYPUVAHQWDOLZSSOIJGUJUVPGHCRADPOBANSJHAHRKZLXTMCNOMFWAEVSLNGTRZBXTUVQYHDHFB");
    msg.htime = 0.791308520885;
    msg.lat = 0.743726506784;
    msg.lon = 0.105317425978;
    const char tmp_msg_0[] = {-31, 10, 1, -71, 61, 54, -25, -7, -27, -28, 42, 86, 54, -12, -40, -95, -36, -24, 93, 42, 78, -117, 15, -9, -30, 97, -86, -15, 117, -13, -21, 97, -25, 112, 79, -91, -56, 1, -31, -117, -86, -9, -79, 32, -67, 94, 105, -73, 41, 98, -14, -87, -71, 120, -51, -68, -2, 103, 44, 57, -127, -92, -78, -121, 83, -13, -55, -43, 65, -90, -2, -73, 36, 105, -35, -39, -84, 92, 124, -13, 96, 104, -103, -77, -31, 30, -24, 16, -127, -4, -6, 78, 105, 31, -99, 46, -74, 46, -71, 43, 97, -73, -50, -11, 71, -82, 51, -42, 44, -57, 46, 83, 111, -40, -41, -28, 62, -127, 52, -74, 108, -81, 59, -85, 103, -1, -23, -1, -128, 2, -22, 74, 1, -78, -104, 0, -38, 41, -125, -36, -31, -50, -76, -35, -42, 107, -14, -70, -8, -83, -128, 106, 30, 115, -12, -123, 119, 123, -34, -54, -7, 119, 26, -6, -45, 106, -33, 86, 92, 87, 61, 56, -65, -123, -62, 74, 64, -65, 78, -57, 37, -55, 15, -98, 45, 112, 82, -70, 84, -99, 32, 46, 29, -122, 108, -29, 58, 119, 50, -107, 67, 49, 104, 92, 83, -6, 22, -79, -68, 7, -57, -121, 68, 78, 55, 5, 2, 111, -121, -76, -60, -87, 0, 112, 90, -97, -69, -68, -17, 43, 4, 110, 43, -79, 122, -23, 42, 69, -48, -87, 105};
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
    msg.setTimeStamp(0.522616774402);
    msg.setSource(3533U);
    msg.setSourceEntity(145U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(8U);
    msg.req_id = 37158U;
    msg.ttl = 63112U;
    msg.destination.assign("MGFHJIPCZCIOJPCPEWTYJPAUNLMNEAKNLOQZWXJPWDEESTJMOVIADRTERFKGKDNUCRUYQFKOMQQGCXSWMTQFVXWISCHUXURHEXJLQNTIKRJZKAF");
    const char tmp_msg_0[] = {117, 83, 17, -65, 0, -53, 115, -104, 122, 114, 0, 102, 24, 41, -26, -8, 52, 18, -68, 92, -115, 78, 57, 20, 80, -67, -33, -90, 4, 64, 21, -32, -10, 33, -69, 10, 35, 17, 43, 86, 50, 0, -26, -121, -41, 112, -39, -111, 44, 16, 42, 7, 69, 89, 54, 58, 32, 50, 9, -77, -50, -72, 17, 104, -64, -97, -58, -11, -61, -17, 92, -45, 67, 16, -93, -110, 11, 8, 113, 31, 26, -46, 35, -37, 32, -91, 62, 17, 40, -86, 73, -31, 9, -15, -24, 85, 32, -111, -44, -74, 90, -108, 99, 79, 37, 0, 79, 125, -104, 83, 125, -75, 105, 47, -7, 56, 16, -103, -74, 122, 65, -116, -44, -96, -48, -120, -43, -15, -50, -98, 28, -50, -64, -59, 100, -6, -22, -1, -4, -75, 59, 107, -67, -124, 119, -7, -98, 38, -18, -81, -71, 74, -43, -9, 123, 46, 105, -18, -3, -41, -83, 20, 13, 15, 117, -75, 75, -97, -27, 118, -43, 120, 34, -72, -52, 76, -18, -75, -120, -71, -73, -21, 76, -107, 94, -29, 123, 19, 99, -43, -91, 106, 125, 65, -52, 48, 28, -35, 50, 49, -109, 21, 109, 85, 84, -10, 83, 121};
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
    msg.setTimeStamp(0.180188525779);
    msg.setSource(5682U);
    msg.setSourceEntity(68U);
    msg.setDestination(8256U);
    msg.setDestinationEntity(21U);
    msg.req_id = 36737U;
    msg.ttl = 7142U;
    msg.destination.assign("VIKFCSWODIPAQMRJUJQZFGVZVMXHEYFIVEAQPRBLIGOFFIKJPBBMUBZGMYIFYHIMEFQGYTHWSHKOYIQNLXWWKTBOAZ");
    const char tmp_msg_0[] = {-109, 116, 40, -80, 68, 9, -30, -64, 56, 93, -29, -57, -54, 74, 40, 24, 65, 72, 126, -123, -13, -126, -74, -71, -58, -52, 78, 109, 12, 26, -118, -23, 85, -14, 53, 95, -68, 92, 62, -89, -45, 101, -78, 39, -122, -69, -108, -128, 59, 39, -42, 45, 30, 25, 28, -84, 49, 64, 66, -103, -39, 45, -111, -45, -99, -91, 17, 121};
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
    msg.setTimeStamp(0.676690837817);
    msg.setSource(21277U);
    msg.setSourceEntity(41U);
    msg.setDestination(11069U);
    msg.setDestinationEntity(67U);
    msg.req_id = 15090U;
    msg.ttl = 13584U;
    msg.destination.assign("KTCKWRPWAQQO");
    const char tmp_msg_0[] = {48, 111, -42, 4, 86, -99, -124, -83, 41, -102, 118, 16, -95, -22, 20, 43, 88, -81, -93, -112, 64, -6, -45, -13, -6, -109, 89, -125, -23, 30, -105, -105, 52, -20, 6, 88, -60, 17, -100, -87, -85, 51, 28, 77, -2, -71, 75, -105, -50, 113, -106, -96, -115, -28, -34, 120, 80, -56, -102, 40, -114, -117, -25, 93, 64, 104, -47, -24, 117, 83, 17, -55, 93, 8, -48, -82, -63, 18, -38, 126, -57, 11, -53, 125, 117, 29, -42, -20, -115, 79, 60, 4, 85, -79, 60, 119, 5, 17, 32, -1, 18, 21, -115, 81, -93, 28, -6, -48, 72, -54, 81, 62, 58, -15, 73, -61, -86, -80, 57, -100, 71, 72, -126, 12, 115, 97, 73, -63, -116, -66, 69, -47, -70, -40, 13, -6, -28, -53, -82, 51, -10, -68, -99, 91, -73, -40, 111, 109, -8, 93, 48, -8, 65, 126, -102, -64, 2, -98, -109, 4, 3, -71, -6, -63, 41, 84, 115, -33, -103, -13, 35, 49, -103, -116, -7, -70, -114, 82, -111, -8, -75, -72, 94, 86, 56, 67, -27, -51, -7, 61, 88, 111, -59, -28, 100, -54, -19, -104, -47, -48, -120, -93, -48, 58, -45, -45, 76, 17, 99, 83, 11, 78, -95, 3, -95, 39, -33, 94, -69, 74, -70, -81, 14, -101};
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
    msg.setTimeStamp(0.136906233406);
    msg.setSource(17241U);
    msg.setSourceEntity(31U);
    msg.setDestination(63258U);
    msg.setDestinationEntity(180U);
    msg.req_id = 34235U;
    msg.status = 193U;
    msg.text.assign("HCVRYKXPMDMBGXXETPZSHWUSCKZBSVZVUWKAYNEYVQBDLEMNDATFAUAOJYVIJUHTTFCQPMIRTAJZICIQRRYZWHANULNRUYFOHICZEDXLROCNPIWSLCGXYQUVQQGKJHXOL");

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
    msg.setTimeStamp(0.585510168319);
    msg.setSource(28891U);
    msg.setSourceEntity(149U);
    msg.setDestination(20782U);
    msg.setDestinationEntity(187U);
    msg.req_id = 11567U;
    msg.status = 156U;
    msg.text.assign("TJIIUFSOKLGBHKYHNZDYFUIWZJBAPMTBZQACRVRKEDENWUFSUJOPNFMYKCOLSPWEYSXKEVQPOOLQHEZLZOGFJSPSBGJLMNAIUKUEVIFGNPQVHPVTWMCLPBWZYHACYDXYNLMAAHTSURSBIGMOWBCYQROZYRDMSCSGKFXGXILGMTEGUXQJDAJCAPLNTOGDFVOQZAXCVWXHDZNIVJZTWIXHKPDTCLREYTIHDBTMDAENWJBMR");

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
    msg.setTimeStamp(0.0725850991791);
    msg.setSource(57772U);
    msg.setSourceEntity(146U);
    msg.setDestination(30927U);
    msg.setDestinationEntity(140U);
    msg.req_id = 13882U;
    msg.status = 77U;
    msg.text.assign("HDVHIJOCKJSBNXMOWAURGMFAZJRPBQBPHUGQVEOQHWNAKVNGMJMCITNZWWRSJXMWPSNPCOEMSIQNSRLDEQCCOPXTMBVDEHJYPAACDKEEJFDLFQIUGVUYBIRNYPMUMVSLDKGSETJNULWTWKRBOQGJRKTRZZAYXDGGZDJULTPCHTIETQOKWTVZDPXCVYI");

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
    msg.setTimeStamp(0.092041068334);
    msg.setSource(35334U);
    msg.setSourceEntity(193U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("WBMCONTADQRXGRLQXHQLFH");
    msg.links = 971484981U;

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
    msg.setTimeStamp(0.403160324897);
    msg.setSource(4783U);
    msg.setSourceEntity(90U);
    msg.setDestination(43532U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("VDNYHIQNTZMDVNGJNQOKPMZSXYZUGUEWURLRAORBZSGPKPCHSDOFHOZSPXYEMUGBDHIVPAPACEWVKXSCLF");
    msg.links = 1641550809U;

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
    msg.setTimeStamp(0.69100124194);
    msg.setSource(63734U);
    msg.setSourceEntity(173U);
    msg.setDestination(2095U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("HBHHUMXRUXTFDORGBOSSXNGJJWUWETENPIABTYITDQIDMNVQAGADSIFIEOXVFVQKAZSNZGWEARQFUDSLXYPZMBPCPQWFGSCVBSMYBKNCZLFGFFIWDOLVNCOHTRYCZBEQCTOOWPXZGPRMZRKSKTYSEUDAXWOZJFUKLCDKKJEIYLPGIHUCVWDLXVHVCSHRLVJKYPUNMCEWOOFNMHRXJPBKYQJ");
    msg.links = 3498847342U;

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
    msg.setTimeStamp(0.620986222578);
    msg.setSource(32647U);
    msg.setSourceEntity(195U);
    msg.setDestination(58274U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("XFBLBWODXJAMSERFHEAZJSZUOTGEDMQILFWJMSIXYGWGCYHECUADTQKBCPWCZUKLFRSEHOIWRCQZTTMGHYEAQUALJDKVGSJLZRFDMFQSCPEUNHWZJI");
    msg.action = 242U;
    msg.grouplist.assign("WPRHGLKUUEHMVJVHYAGMELIUEEYVXWCVJYSNBKIXLFMROCJLIXXWDDACCGBADPCDBNWGPWZANDUXLIMPXDQTZZRTIUSMMBGMVEFKVOKCMBYEZRPOEWQHHGRNKQKQNOFOUGFPFOLEANSOIYZFVUYBBXGNOTQRLJWQTMJSDLRFZSSJIGAHBJPABCR");

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
    msg.setTimeStamp(0.486462809337);
    msg.setSource(5942U);
    msg.setSourceEntity(158U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("HFMPZPAACJPEQDDF");
    msg.action = 23U;
    msg.grouplist.assign("RGJNJJIUQBMBUTZBLOXTFSVCYLDTETOVNJTOJRLJIPZEKFIZO");

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
    msg.setTimeStamp(0.429364257164);
    msg.setSource(4919U);
    msg.setSourceEntity(138U);
    msg.setDestination(35783U);
    msg.setDestinationEntity(189U);
    msg.groupname.assign("HBEADKMIHHIWGSLPQJEFBXPWYMLUSKRINDEVTOZTAFRIURAGDFQDGCXNQCZPKFAVIQSUCVMSGVSYJDOSQOOKHCQRYWJHDZDULKVLCTHRMNAHDRBNSFZYJHPFABWWIFJCQCNLUPKGZXVDZNURTJZEMYPLATHIBOOUYTOXXZPPMWJEWWTBYZMGPNCJBUPGCEFBXBEYJGECQEHIQIVVLUNW");
    msg.action = 146U;
    msg.grouplist.assign("ABRHURAKOKZFRCLWRMULQKIQMATVYLKMEDFVLXHPWYLYFWYANQGDMEIIAVWXBSKOVNSPVWJSIHZKHYKXTJZPXBNPNREBFYAJOAUPLCUIKKBBCORQZSNZFODMUMOJUCSGCXDBTJDALQGLWTNIOEGPHTOWFEUGSDGXFBTIZGPDLGHJZQNEVPCWPACDCMQ");

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
    msg.setTimeStamp(0.703168792882);
    msg.setSource(14884U);
    msg.setSourceEntity(135U);
    msg.setDestination(17933U);
    msg.setDestinationEntity(118U);
    msg.value = 0.202311081088;
    msg.sys_src = 1000U;

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
    msg.setTimeStamp(0.0554097142105);
    msg.setSource(45932U);
    msg.setSourceEntity(208U);
    msg.setDestination(56889U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0838199681841;
    msg.sys_src = 65352U;

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
    msg.setTimeStamp(0.766784302017);
    msg.setSource(3322U);
    msg.setSourceEntity(123U);
    msg.setDestination(35136U);
    msg.setDestinationEntity(113U);
    msg.value = 0.300708538154;
    msg.sys_src = 44265U;

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
    msg.setTimeStamp(0.0955221586763);
    msg.setSource(62535U);
    msg.setSourceEntity(52U);
    msg.setDestination(21153U);
    msg.setDestinationEntity(112U);
    msg.value = 0.482267842504;
    msg.units = 148U;

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
    msg.setTimeStamp(0.311031990356);
    msg.setSource(19112U);
    msg.setSourceEntity(178U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(114U);
    msg.value = 0.711979608332;
    msg.units = 217U;

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
    msg.setTimeStamp(0.976035985263);
    msg.setSource(17933U);
    msg.setSourceEntity(78U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(250U);
    msg.value = 0.777293405475;
    msg.units = 222U;

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
    msg.setTimeStamp(0.497680313111);
    msg.setSource(36607U);
    msg.setSourceEntity(181U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(44U);
    msg.base_lat = 0.319214842621;
    msg.base_lon = 0.0230255786061;
    msg.base_time = 0.114613587353;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13874U;
    tmp_msg_0.priority = -3;
    tmp_msg_0.x = 10727;
    tmp_msg_0.y = -6217;
    tmp_msg_0.z = 14156;
    tmp_msg_0.t = -15474;
    IMC::PathControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 3821040666U;
    tmp_tmp_msg_0_0.start_lat = 0.905040313352;
    tmp_tmp_msg_0_0.start_lon = 0.435102276738;
    tmp_tmp_msg_0_0.start_z = 0.0879063127239;
    tmp_tmp_msg_0_0.start_z_units = 95U;
    tmp_tmp_msg_0_0.end_lat = 0.962431222135;
    tmp_tmp_msg_0_0.end_lon = 0.667211155401;
    tmp_tmp_msg_0_0.end_z = 0.0379447170117;
    tmp_tmp_msg_0_0.end_z_units = 189U;
    tmp_tmp_msg_0_0.lradius = 0.209579126913;
    tmp_tmp_msg_0_0.flags = 4U;
    tmp_tmp_msg_0_0.x = 0.27795767327;
    tmp_tmp_msg_0_0.y = 0.741964205576;
    tmp_tmp_msg_0_0.z = 0.199306676595;
    tmp_tmp_msg_0_0.vx = 0.618542319845;
    tmp_tmp_msg_0_0.vy = 0.207763814821;
    tmp_tmp_msg_0_0.vz = 0.632955597051;
    tmp_tmp_msg_0_0.course_error = 0.32887817267;
    tmp_tmp_msg_0_0.eta = 35366U;
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
    msg.setTimeStamp(0.0135476825022);
    msg.setSource(19733U);
    msg.setSourceEntity(230U);
    msg.setDestination(37531U);
    msg.setDestinationEntity(205U);
    msg.base_lat = 0.268936001967;
    msg.base_lon = 0.865077079814;
    msg.base_time = 0.24901267936;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 33059U;
    tmp_msg_0.destination = 28248U;
    tmp_msg_0.timeout = 0.863811432112;
    IMC::UsblConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 143U;
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("LLSXSVNJELRTRQCNCCXGZWXOYYHQERGFYVEZSBPLZCRFTIHOOHMMQXHGJILVEUQKXKPOZFUWYKSWHJZJFQTIHTAZUTVAKWUVCLAMXNGUIUAFPAENUCHGNWRJAFWWSOMVHLTRPHOXGRDAQHOBIKXVKOTMCFYAEKPLFBFQYNIRDSZCPNFKRNLKZPDIGYWMSSVGITBZMCLPPJQJMJUWWMEZBDJDGEDODIPTTUEMBYNDOA");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.681161889865;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.650423900613;
    tmp_tmp_tmp_msg_0_0_0.z = 0.179028048601;
    tmp_tmp_tmp_msg_0_0_0.z_units = 173U;
    tmp_tmp_msg_0_0.modems.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.282188892221);
    msg.setSource(31617U);
    msg.setSourceEntity(206U);
    msg.setDestination(13225U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.992541710693;
    msg.base_lon = 0.625444289044;
    msg.base_time = 0.999065485309;

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
    msg.setTimeStamp(0.344131851714);
    msg.setSource(41189U);
    msg.setSourceEntity(107U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(197U);
    msg.base_lat = 0.220694044026;
    msg.base_lon = 0.684495281087;
    msg.base_time = 0.84475254722;
    const char tmp_msg_0[] = {-53, 81, 26, -63, 35, 2, 120, 112, 122, 19, -85, 115, -54, -55, 7, 15, -23, -109, -47, 5, 66, -68, -107, -121, -108, -119, 26, 85, -72, -56, -50, 118, 21, 75, -28, 10, 69, 115, 92, -2, 78, -17, 54, 29, 119, -78, -110, 69, 14, 125, -26, -74, 111, 91, -102, -89, -96, -69, 78, 76, -117, -102, 66, -8, 119, -20, 10, 57, 36, -48, -78, 6, 113, -32, 63, 43, 121, 9, -102, -19, -111, -87, 25, 49, 110, 117, -122, -36, 17, -94, -98, 103, 61, -92, 61, 126, 40, -36, 102, 82, -30, 120, -120, -112, -59, 20, 57, -76, 8, -4, 114, 32, 33, 41, 12, 87, 118, 113, 105, -17, -59, 89, 114, 2, 86, -19, -57, -106, -78, -122, 41, 90, 55, 0, -21, 92, 26, -60, 67, 22, 72, 24, -10, -75, -26, 88, 93, 19, -107, -13, -63, -121, 105, -45, 102, -119, 64, 55, -93, 53, 90, 63, -87, -30, -67, 124, -98, -99, -72, 58, 103, -5, 17, 67, 72, 99, 110, 102, -70, 21, 15, -50, -29, -22, 109, 79, -101, 57, -25, 93, -59, 21, 60, -107, -20, 8, 101, 71, -72, 4, -40, -33, 20, 118, 45, 25, -44, -28, 109, -21, -109, -40, -75, -24, 49, -8, 21, 65, -1, -117, 69, -119, -93};
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
    msg.setTimeStamp(0.90991725178);
    msg.setSource(48436U);
    msg.setSourceEntity(70U);
    msg.setDestination(46807U);
    msg.setDestinationEntity(123U);
    msg.base_lat = 0.852147957999;
    msg.base_lon = 0.0753672563957;
    msg.base_time = 0.430923262953;
    const char tmp_msg_0[] = {56, 81, 38, 50, 54, -57, 70, -98, 77, 53, -82, -35, 69, 78, 108, 0, 51, 95, -21, 94, -91, -76, -66, 60, -20, -18, 104, 43, -114, 35, -62, 77, -55, 23, -3, 113, -36, -40, 71, 120, -57, -45, 108, 48, -38, -124, -64, -82, 78, -21, 59, -26, 9, 42, 54, -35, 0, 104, -70, 9, 60, 59, -46, 34, -104, -93, 6, 104};
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
    msg.setTimeStamp(0.826175899145);
    msg.setSource(42041U);
    msg.setSourceEntity(242U);
    msg.setDestination(58434U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.961420409347;
    msg.base_lon = 0.102364047627;
    msg.base_time = 0.324132647822;
    const char tmp_msg_0[] = {2, -111, 5, -45, -94, 58, -8, -53, -118, -15, 38, 79, -53};
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
    msg.setTimeStamp(0.455202427688);
    msg.setSource(40265U);
    msg.setSourceEntity(145U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(26U);
    msg.sys_id = 2562U;
    msg.priority = -42;
    msg.x = 31441;
    msg.y = -23561;
    msg.z = 20822;
    msg.t = -2031;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.237139008144;
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
    msg.setTimeStamp(0.183778564585);
    msg.setSource(41221U);
    msg.setSourceEntity(131U);
    msg.setDestination(32697U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 8563U;
    msg.priority = -58;
    msg.x = -15880;
    msg.y = 26945;
    msg.z = -5909;
    msg.t = 12786;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.86102776835;
    tmp_msg_0.lon = 0.100183444628;
    tmp_msg_0.depth = 189U;
    tmp_msg_0.speed = 0.868983460471;
    tmp_msg_0.psi = 0.51815733744;
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
    msg.setTimeStamp(0.762539133914);
    msg.setSource(37472U);
    msg.setSourceEntity(82U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(132U);
    msg.sys_id = 16757U;
    msg.priority = -3;
    msg.x = -10683;
    msg.y = 10865;
    msg.z = 5383;
    msg.t = 13704;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BTRPEJAZQYURGZUDANPMHHCZEPCEDIUUJFUKHWXFHPVOSWERVGLTOEXCLBTLANIMWNWGBWYKZXRQ");
    tmp_msg_0.feature_type = 43U;
    tmp_msg_0.rgb_red = 224U;
    tmp_msg_0.rgb_green = 171U;
    tmp_msg_0.rgb_blue = 153U;
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
    msg.setTimeStamp(0.37344029719);
    msg.setSource(33073U);
    msg.setSourceEntity(220U);
    msg.setDestination(9822U);
    msg.setDestinationEntity(186U);
    msg.req_id = 43664U;
    msg.type = 222U;
    msg.max_size = 40288U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.807372044456;
    tmp_msg_0.base_lon = 0.237713860262;
    tmp_msg_0.base_time = 0.285204909691;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 645U;
    tmp_tmp_msg_0_0.priority = -11;
    tmp_tmp_msg_0_0.x = 11871;
    tmp_tmp_msg_0_0.y = -29381;
    tmp_tmp_msg_0_0.z = -28328;
    tmp_tmp_msg_0_0.t = -21087;
    IMC::RegisterManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.mid = 26059U;
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
    msg.setTimeStamp(0.435058696663);
    msg.setSource(43702U);
    msg.setSourceEntity(50U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(162U);
    msg.req_id = 12753U;
    msg.type = 4U;
    msg.max_size = 39363U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.762023343373;
    tmp_msg_0.base_lon = 0.624775245679;
    tmp_msg_0.base_time = 0.978052765564;
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
    msg.setTimeStamp(0.422939107086);
    msg.setSource(58963U);
    msg.setSourceEntity(66U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(48U);
    msg.req_id = 35824U;
    msg.type = 240U;
    msg.max_size = 65467U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.145741572767;
    tmp_msg_0.base_lon = 0.233232075361;
    tmp_msg_0.base_time = 0.790956562426;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 59234U;
    tmp_tmp_msg_0_0.destination = 15486U;
    tmp_tmp_msg_0_0.timeout = 0.61244187362;
    IMC::Heartbeat tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.800805246751);
    msg.setSource(36312U);
    msg.setSourceEntity(127U);
    msg.setDestination(1872U);
    msg.setDestinationEntity(254U);
    msg.original_source = 2515U;
    msg.destination = 13214U;
    msg.timeout = 0.0426975077037;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 45060U;
    tmp_msg_0.duration = 60722U;
    tmp_msg_0.speed = 0.449135244215;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.x = 0.837407507309;
    tmp_msg_0.y = 0.983322374876;
    tmp_msg_0.z = 0.380462967508;
    tmp_msg_0.z_units = 101U;
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
    msg.setTimeStamp(0.161423312608);
    msg.setSource(56235U);
    msg.setSourceEntity(192U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(197U);
    msg.original_source = 59307U;
    msg.destination = 3244U;
    msg.timeout = 0.803435585668;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.455950836266;
    tmp_msg_0.y = 0.238521464458;
    tmp_msg_0.z = 0.41683998402;
    tmp_msg_0.k = 0.298444551254;
    tmp_msg_0.m = 0.571929196107;
    tmp_msg_0.n = 0.575448442374;
    tmp_msg_0.flags = 236U;
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
    msg.setTimeStamp(0.203256591767);
    msg.setSource(59183U);
    msg.setSourceEntity(92U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(108U);
    msg.original_source = 63701U;
    msg.destination = 38695U;
    msg.timeout = 0.880883663374;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 34802U;
    tmp_msg_0.value = 168U;
    tmp_msg_0.error.assign("WGOVVYGPVWZKIWFBRMQKYCDLJPPTSIEOAEXAZRISDZCTBHFGETGVEOEKHXEJLRQJMFXTUEGFWUZJUPXJCWSULKNPROMSDTYSLVDXTPYEWAYIDBFMZDYCAKDPZIIFSYLFMPJCUZLSYPONQVLAKRMIRHMBL");
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
    msg.setTimeStamp(0.90196537788);
    msg.setSource(52018U);
    msg.setSourceEntity(119U);
    msg.setDestination(53165U);
    msg.setDestinationEntity(123U);
    msg.id = 127U;
    msg.range = 0.173280353693;

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
    msg.setTimeStamp(0.491531570287);
    msg.setSource(8054U);
    msg.setSourceEntity(69U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(182U);
    msg.id = 107U;
    msg.range = 0.00166455453387;

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
    msg.setTimeStamp(0.608040599118);
    msg.setSource(43437U);
    msg.setSourceEntity(120U);
    msg.setDestination(25461U);
    msg.setDestinationEntity(216U);
    msg.id = 70U;
    msg.range = 0.154296231883;

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
    msg.setTimeStamp(0.202924864699);
    msg.setSource(53306U);
    msg.setSourceEntity(75U);
    msg.setDestination(22092U);
    msg.setDestinationEntity(44U);
    msg.beacon.assign("MYQCGMMDKQHBPFSSRIOBHQUDULDZIOMAOMKMNHYPG");
    msg.lat = 0.70683814358;
    msg.lon = 0.708401795313;
    msg.depth = 0.320600104131;
    msg.query_channel = 108U;
    msg.reply_channel = 248U;
    msg.transponder_delay = 17U;

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
    msg.setTimeStamp(0.599958320091);
    msg.setSource(42166U);
    msg.setSourceEntity(218U);
    msg.setDestination(11097U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("QTZFCCFMRXDREXGPXUQYREUMMFSSRRKGCQISYJLGBIAJSRDWMTRANUBLMPEHPBOEDYBCDWVGAGJNJAZCNINYVHERKDHYUGKXVVKDZOPAJGBGZWCBWG");
    msg.lat = 0.909447008254;
    msg.lon = 0.636573430328;
    msg.depth = 0.935367573807;
    msg.query_channel = 12U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 168U;

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
    msg.setTimeStamp(0.886650052118);
    msg.setSource(20291U);
    msg.setSourceEntity(99U);
    msg.setDestination(25463U);
    msg.setDestinationEntity(141U);
    msg.beacon.assign("HOSJCZIQOTRGMHQEGPBFYBQXNCGEJKLCPRYANFXNVOZMIFODAJWBTEASKRKSOCQSMXKQGKDWLRDPSCWRAKFCMCUTHHUMVXETJCIRAOHPCZTIAZKVVGXJBLYOLPYSERVSWCIWPFTUA");
    msg.lat = 0.30299363392;
    msg.lon = 0.388156577561;
    msg.depth = 0.135700581604;
    msg.query_channel = 76U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 113U;

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
    msg.setTimeStamp(0.637275657498);
    msg.setSource(58850U);
    msg.setSourceEntity(40U);
    msg.setDestination(36149U);
    msg.setDestinationEntity(132U);
    msg.op = 112U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RHMNLBCNZJHHLBLVIBZKFARXHJPVNXGKMUEQYORWGOLQIUQIVHAPUEIOQNXDPKMEAMNGWPLONIUEJZIFRNGYTZSEPCSMRQUCLRTPIYWVAYVGZEXHEGTUTFACSVBJWIIUUCYHTPEFXSTKRSBMPGMJRYQVLTDCAEULCQGMWZBEADPIJKYFZVMVLCGDNJFGBDFTJXJSKXHQUWXBTJVAWALDBSCDDKPXBKKNKOWF");
    tmp_msg_0.lat = 0.152120491955;
    tmp_msg_0.lon = 0.112185950538;
    tmp_msg_0.depth = 0.364847509754;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 146U;
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
    msg.setTimeStamp(0.828125377095);
    msg.setSource(35134U);
    msg.setSourceEntity(3U);
    msg.setDestination(17313U);
    msg.setDestinationEntity(194U);
    msg.op = 55U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MOJZGWWMAAPNVRQNLPQHLLNLSINYPICCGPWJKYFDWXDZBGAESQCNSGMOEOCSVBDPXEVRTQVXTHIBPEVXSTCWIGLOHLRLTZUODPHASCVTSYAZIBDLIOJPBKZFWKYGTFGYOFUONCVXBRDYFXYCCZUJHLRXNAM");
    tmp_msg_0.lat = 0.784083168852;
    tmp_msg_0.lon = 0.563946178508;
    tmp_msg_0.depth = 0.160910724248;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 88U;
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
    msg.setTimeStamp(0.895092684515);
    msg.setSource(54812U);
    msg.setSourceEntity(249U);
    msg.setDestination(43265U);
    msg.setDestinationEntity(192U);
    msg.op = 84U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PUVSIOYVVCYMZKDXZJFSXWVJRCCPXEAKJOYFOYETJMTTGZQSGBHGCFOBGOYHFCRJHTPISLISAKNHPQEPGZDSPTIHIIBRDZUAKCXGBJNMBKQAYBDRHMPGNSOIVMWBRQBEXMEOWXDVGULQDNYANMMXBWCRWAJHOFXINTWWLLWRLOYGWPZRAFYMRDTDWGRLEJHLUCXVEVULFCTE");
    tmp_msg_0.lat = 0.548985931333;
    tmp_msg_0.lon = 0.394342194287;
    tmp_msg_0.depth = 0.317160662652;
    tmp_msg_0.query_channel = 118U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 89U;
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
    msg.setTimeStamp(0.102452414034);
    msg.setSource(33840U);
    msg.setSourceEntity(205U);
    msg.setDestination(56870U);
    msg.setDestinationEntity(135U);
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.210861044385;
    tmp_msg_0.width = 0.691644708443;
    tmp_msg_0.length = 0.326395589226;
    tmp_msg_0.bearing = 0.518031260105;
    tmp_msg_0.pxl = -19862;
    tmp_msg_0.encoding = 238U;
    const char tmp_tmp_msg_0_0[] = {-83, 78, 19, -43, -36, -121, 93, -1, -93, -118, -74, -22, 23, 49, 114, -26, -46, 28, 27, -87, 35, 25, 116, -81, 120, -4, -17, -98, 27, 89, -63, -62, 46, 49, 17, -109, 25, 16, 74, 119, -4, -19, -37, -18, -63, 1, -91, -74, -114, 85, 119, 73, 0, -13, 99, 41, 69, 57, 76, 36, -78, 14, -103, 71, 84, 88, -48, 75, 82, 61, -127, 118, 19};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0535475978631);
    msg.setSource(31771U);
    msg.setSourceEntity(120U);
    msg.setDestination(24604U);
    msg.setDestinationEntity(47U);
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.282563196809;
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
    msg.setTimeStamp(0.934120391309);
    msg.setSource(36448U);
    msg.setSourceEntity(202U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(197U);
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.434252953243;
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
    msg.setTimeStamp(0.426909171635);
    msg.setSource(54062U);
    msg.setSourceEntity(24U);
    msg.setDestination(33212U);
    msg.setDestinationEntity(162U);
    msg.op = 114U;
    msg.system.assign("YTHAVGGRTFNIFKVPOMKNEUZMJRVXBRUMFPUPUJISLHTZOYGIWYSTWAHAUUAIJNLAQSQOSSAMCGVSXLOREZZCMCCNMWBLUHBKKTZYQYKDYLZASNANCWFWPMJGICEPWJSHKXQDHZPDHQXFSCETFVPUJHVBRRKSAWDOLZBGWBZELCDIKVMGNDTEFFIYVLXKJQUXETRXVLCCPORYJXBHORYKOGFOWIUDNFTZEJEXQXNWGHABBLMDDY");
    msg.range = 0.151029256425;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.288669438435;
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
    msg.setTimeStamp(0.755621794183);
    msg.setSource(46828U);
    msg.setSourceEntity(201U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(185U);
    msg.op = 167U;
    msg.system.assign("DTSOYTXJMHCFERHCHKPIKLREEDCJHBVDOKLLTDKWBJTWMOMLJWRWCGBOUUBLWBASCZOBYQJQCCAVFOXIQSLNIPRDTCXJRKRRSHGHTKKQFQWJANVAHNSGVUBIRFYFTLUGFMWAUYENPATQMFVYMEABGIEYIUNXNAYYYXFDVPWRVMMBUEVEVGCDFYQTOZQKTP");
    msg.range = 0.606694741209;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.231879954728;
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
    msg.setTimeStamp(0.681720569838);
    msg.setSource(14663U);
    msg.setSourceEntity(159U);
    msg.setDestination(16873U);
    msg.setDestinationEntity(246U);
    msg.op = 4U;
    msg.system.assign("RDGQYZDCBZVDAYFHPDGYOEYZBAMLLVNORRJLXTWHIBVMRJRDRJHYCDSKGQHEUAWKFIHMTSDQPNYOSWWICXSTNTRRFXLMPEUEBLNPMBHFKDGXJZFZGCLCZIBTUEOPIDUUMVMMLQVHQLJGRNOXTAXKCCXMAWPJBCWFFUATOCIAVSAOOQLBYSTEKBJYNSZANBKFKFXUIHVSGIXYOAUZWVUQSJZ");
    msg.range = 0.884837368486;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.62851034569;
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
    msg.setTimeStamp(0.0532160132616);
    msg.setSource(18843U);
    msg.setSourceEntity(192U);
    msg.setDestination(24274U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.102137626726);
    msg.setSource(12192U);
    msg.setSourceEntity(6U);
    msg.setDestination(30283U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.227490324326);
    msg.setSource(36154U);
    msg.setSourceEntity(49U);
    msg.setDestination(45486U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.345603762908);
    msg.setSource(24355U);
    msg.setSourceEntity(10U);
    msg.setDestination(54727U);
    msg.setDestinationEntity(6U);
    msg.list.assign("VIBGBTPCYPNNEGDSDUXFJQAWTLBRQKNEQIFTVDTXVNPRCONFAIUDHENMRFGBUDTQMQKOZYIVOHBKJCEWZDGNZIOJILAUOP");

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
    msg.setTimeStamp(0.690877736272);
    msg.setSource(49211U);
    msg.setSourceEntity(114U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(49U);
    msg.list.assign("CLBLUPTMLXXETUCFVZIHDRVTFKOXJKRLREMPKXDAIWBFSHWIWAOXRTFYTQBL");

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
    msg.setTimeStamp(0.205257556315);
    msg.setSource(52829U);
    msg.setSourceEntity(228U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(145U);
    msg.list.assign("IFIRLWJVWALEFZTPWQQDJNOMCIZEWHXHVCIPGBXYMJYFPDLQSSSDWCKQBCXLKLJERCOZURVBXVTIGAQFOXRNABNPLOZZTBMEYKDDRUZKNMGNYLYUDVXDSCJJTTPWYVQXOHBXGWFOLDAPPNUMRNFMBHUEECCTKKLFTAYZDRBDFLMSIEPHUHAQIGPAZGESYVIJJSOOKCWI");

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
    msg.setTimeStamp(0.531779012037);
    msg.setSource(35231U);
    msg.setSourceEntity(78U);
    msg.setDestination(45528U);
    msg.setDestinationEntity(19U);
    msg.peer.assign("CVBBKMMBZWQWHCRZPUINIDQODCHUNUWHDHMUJUMQTLHEFJSVLRNYJPBACTCGTKKEOPHSNSRNIYZTDQXWMNPHMUCKKULRXNAVYCFVGPSBRXWIXSNTEBSKNTOVEZAOMFLVILDGDMNGQQZAFWEHQTASJPLMGGRIUGUTYGDHXIBAPYTJZWYZLYCXAVAFFBIFQGO");
    msg.rssi = 0.383772512534;
    msg.integrity = 37708U;

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
    msg.setTimeStamp(0.380509471421);
    msg.setSource(59062U);
    msg.setSourceEntity(0U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(78U);
    msg.peer.assign("CJBRLHIPNDIEOTSIGRXHXLZOGANBPEQXGUYMSFFJQUJDEZBWOEUQYEVTEPFKCGDIUON");
    msg.rssi = 0.456660410308;
    msg.integrity = 36898U;

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
    msg.setTimeStamp(0.952682360896);
    msg.setSource(23065U);
    msg.setSourceEntity(190U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(252U);
    msg.peer.assign("WQRDDBEHFSIIEYWVNYWBPRMJVZUFTJLMAOPIZQTHSBWLIKMDGSBVHJHDDWDUKXQFBXIOIMUYRKFMGWLIXLVLDHZYK");
    msg.rssi = 0.557998089877;
    msg.integrity = 61270U;

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
    msg.setTimeStamp(0.938353269858);
    msg.setSource(16536U);
    msg.setSourceEntity(78U);
    msg.setDestination(34467U);
    msg.setDestinationEntity(52U);
    msg.value = -17877;

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
    msg.setTimeStamp(0.321685572429);
    msg.setSource(47701U);
    msg.setSourceEntity(74U);
    msg.setDestination(41234U);
    msg.setDestinationEntity(82U);
    msg.value = 26113;

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
    msg.setTimeStamp(0.525829107737);
    msg.setSource(3038U);
    msg.setSourceEntity(73U);
    msg.setDestination(13122U);
    msg.setDestinationEntity(230U);
    msg.value = 26723;

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
    msg.setTimeStamp(0.781277300737);
    msg.setSource(26143U);
    msg.setSourceEntity(20U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(109U);
    msg.value = 0.135643894642;

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
    msg.setTimeStamp(0.886140773483);
    msg.setSource(5175U);
    msg.setSourceEntity(55U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(226U);
    msg.value = 0.930788653848;

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
    msg.setTimeStamp(0.851036100889);
    msg.setSource(24962U);
    msg.setSourceEntity(8U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(122U);
    msg.value = 0.642475799885;

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
    msg.setTimeStamp(0.262242570844);
    msg.setSource(45347U);
    msg.setSourceEntity(75U);
    msg.setDestination(40125U);
    msg.setDestinationEntity(117U);
    msg.value = 0.459081922762;

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
    msg.setTimeStamp(0.892696814734);
    msg.setSource(55411U);
    msg.setSourceEntity(6U);
    msg.setDestination(16242U);
    msg.setDestinationEntity(6U);
    msg.value = 0.806725691804;

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
    msg.setTimeStamp(0.619979915242);
    msg.setSource(119U);
    msg.setSourceEntity(158U);
    msg.setDestination(1564U);
    msg.setDestinationEntity(22U);
    msg.value = 0.117338286801;

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
    msg.setTimeStamp(0.795693318807);
    msg.setSource(6325U);
    msg.setSourceEntity(161U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(24U);
    msg.validity = 18863U;
    msg.type = 205U;
    msg.utc_year = 22432U;
    msg.utc_month = 72U;
    msg.utc_day = 252U;
    msg.utc_time = 0.635725261668;
    msg.lat = 0.193062817922;
    msg.lon = 0.703118133046;
    msg.height = 0.879165239806;
    msg.satellites = 250U;
    msg.cog = 0.325683571387;
    msg.sog = 0.273012898994;
    msg.hdop = 0.830595640099;
    msg.vdop = 0.391177683616;
    msg.hacc = 0.426336092297;
    msg.vacc = 0.227880488816;

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
    msg.setTimeStamp(0.860413425101);
    msg.setSource(46729U);
    msg.setSourceEntity(24U);
    msg.setDestination(29475U);
    msg.setDestinationEntity(85U);
    msg.validity = 5559U;
    msg.type = 217U;
    msg.utc_year = 59489U;
    msg.utc_month = 164U;
    msg.utc_day = 86U;
    msg.utc_time = 0.249040664324;
    msg.lat = 0.869969074771;
    msg.lon = 0.336949153318;
    msg.height = 0.450164587442;
    msg.satellites = 28U;
    msg.cog = 0.685054192852;
    msg.sog = 0.867048983445;
    msg.hdop = 0.82259591613;
    msg.vdop = 0.682686269981;
    msg.hacc = 0.882759454764;
    msg.vacc = 0.691386034172;

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
    msg.setTimeStamp(0.597641699842);
    msg.setSource(61867U);
    msg.setSourceEntity(86U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(205U);
    msg.validity = 34365U;
    msg.type = 119U;
    msg.utc_year = 63381U;
    msg.utc_month = 133U;
    msg.utc_day = 120U;
    msg.utc_time = 0.578376338468;
    msg.lat = 0.954917417621;
    msg.lon = 0.519310560912;
    msg.height = 0.393364250526;
    msg.satellites = 101U;
    msg.cog = 0.401366133923;
    msg.sog = 0.463117788061;
    msg.hdop = 0.579045430109;
    msg.vdop = 0.728229165373;
    msg.hacc = 0.310521455278;
    msg.vacc = 0.038234045131;

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
    msg.setTimeStamp(0.900885137194);
    msg.setSource(23079U);
    msg.setSourceEntity(51U);
    msg.setDestination(11029U);
    msg.setDestinationEntity(152U);
    msg.time = 0.117105943;
    msg.phi = 0.487760200827;
    msg.theta = 0.916212246948;
    msg.psi = 0.784543464422;
    msg.psi_magnetic = 0.936992351353;

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
    msg.setTimeStamp(0.237473677919);
    msg.setSource(36921U);
    msg.setSourceEntity(191U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(115U);
    msg.time = 0.675525520723;
    msg.phi = 0.229703037387;
    msg.theta = 0.147110828399;
    msg.psi = 0.473501901655;
    msg.psi_magnetic = 0.461972523823;

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
    msg.setTimeStamp(0.46810676849);
    msg.setSource(53130U);
    msg.setSourceEntity(65U);
    msg.setDestination(14883U);
    msg.setDestinationEntity(180U);
    msg.time = 0.776056020382;
    msg.phi = 0.588687025052;
    msg.theta = 0.364661264422;
    msg.psi = 0.365432555819;
    msg.psi_magnetic = 0.308467747858;

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
    msg.setTimeStamp(0.262277237596);
    msg.setSource(15260U);
    msg.setSourceEntity(170U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(138U);
    msg.time = 0.391994073525;
    msg.x = 0.638595807626;
    msg.y = 0.412859555115;
    msg.z = 0.606824196136;
    msg.timestep = 0.383324971975;

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
    msg.setTimeStamp(0.442847573351);
    msg.setSource(2905U);
    msg.setSourceEntity(207U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(205U);
    msg.time = 0.991380284323;
    msg.x = 0.963324009474;
    msg.y = 0.318302741034;
    msg.z = 0.842730510539;
    msg.timestep = 0.115153406854;

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
    msg.setTimeStamp(0.83697277385);
    msg.setSource(14519U);
    msg.setSourceEntity(7U);
    msg.setDestination(26390U);
    msg.setDestinationEntity(195U);
    msg.time = 0.406175793343;
    msg.x = 0.20162370115;
    msg.y = 0.364152338988;
    msg.z = 0.284886548067;
    msg.timestep = 0.627250495651;

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
    msg.setTimeStamp(0.329435355003);
    msg.setSource(57171U);
    msg.setSourceEntity(200U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(12U);
    msg.time = 0.869424845188;
    msg.x = 0.320463521449;
    msg.y = 0.203528931528;
    msg.z = 0.1697459159;

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
    msg.setTimeStamp(0.693471907918);
    msg.setSource(44959U);
    msg.setSourceEntity(253U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(113U);
    msg.time = 0.872588218645;
    msg.x = 0.743396900062;
    msg.y = 0.431293841595;
    msg.z = 0.0796735531996;

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
    msg.setTimeStamp(0.463197272174);
    msg.setSource(52132U);
    msg.setSourceEntity(225U);
    msg.setDestination(23227U);
    msg.setDestinationEntity(7U);
    msg.time = 0.9198415734;
    msg.x = 0.127981916795;
    msg.y = 0.854217111023;
    msg.z = 0.0744244062447;

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
    msg.setTimeStamp(0.916151947165);
    msg.setSource(51668U);
    msg.setSourceEntity(3U);
    msg.setDestination(61184U);
    msg.setDestinationEntity(0U);
    msg.time = 0.600163949919;
    msg.x = 0.925032973455;
    msg.y = 0.768437172032;
    msg.z = 0.345402073841;

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
    msg.setTimeStamp(0.437892947586);
    msg.setSource(18390U);
    msg.setSourceEntity(175U);
    msg.setDestination(57203U);
    msg.setDestinationEntity(104U);
    msg.time = 0.952811219855;
    msg.x = 0.135688513496;
    msg.y = 0.690582860128;
    msg.z = 0.68062615136;

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
    msg.setTimeStamp(0.93820776039);
    msg.setSource(28093U);
    msg.setSourceEntity(2U);
    msg.setDestination(58754U);
    msg.setDestinationEntity(217U);
    msg.time = 0.221150039697;
    msg.x = 0.443844016691;
    msg.y = 0.701328042065;
    msg.z = 0.583133732216;

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
    msg.setTimeStamp(0.892289616906);
    msg.setSource(17272U);
    msg.setSourceEntity(155U);
    msg.setDestination(44216U);
    msg.setDestinationEntity(43U);
    msg.time = 0.925358710144;
    msg.x = 0.531011465736;
    msg.y = 0.225291422191;
    msg.z = 0.665293513515;

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
    msg.setTimeStamp(0.35459034875);
    msg.setSource(4336U);
    msg.setSourceEntity(141U);
    msg.setDestination(40211U);
    msg.setDestinationEntity(37U);
    msg.time = 0.448918982739;
    msg.x = 0.421066001098;
    msg.y = 0.0491513376254;
    msg.z = 0.944410106429;

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
    msg.setTimeStamp(0.76426623512);
    msg.setSource(40341U);
    msg.setSourceEntity(31U);
    msg.setDestination(10569U);
    msg.setDestinationEntity(50U);
    msg.time = 0.958386859847;
    msg.x = 0.101449323666;
    msg.y = 0.341636107279;
    msg.z = 0.973307058983;

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
    msg.setTimeStamp(0.579327332382);
    msg.setSource(36216U);
    msg.setSourceEntity(131U);
    msg.setDestination(63380U);
    msg.setDestinationEntity(27U);
    msg.validity = 112U;
    msg.x = 0.769053855299;
    msg.y = 0.0892835062987;
    msg.z = 0.378802117146;

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
    msg.setTimeStamp(0.767304850374);
    msg.setSource(12874U);
    msg.setSourceEntity(235U);
    msg.setDestination(18715U);
    msg.setDestinationEntity(108U);
    msg.validity = 112U;
    msg.x = 0.05283974319;
    msg.y = 0.588568828545;
    msg.z = 0.413631865644;

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
    msg.setTimeStamp(0.362094910662);
    msg.setSource(12881U);
    msg.setSourceEntity(250U);
    msg.setDestination(125U);
    msg.setDestinationEntity(215U);
    msg.validity = 207U;
    msg.x = 0.949279920382;
    msg.y = 0.673205806217;
    msg.z = 0.505354910408;

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
    msg.setTimeStamp(0.525331567823);
    msg.setSource(19447U);
    msg.setSourceEntity(28U);
    msg.setDestination(48881U);
    msg.setDestinationEntity(204U);
    msg.validity = 88U;
    msg.x = 0.125917829104;
    msg.y = 0.263480179918;
    msg.z = 0.470295986855;

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
    msg.setTimeStamp(0.318786303161);
    msg.setSource(19627U);
    msg.setSourceEntity(52U);
    msg.setDestination(10522U);
    msg.setDestinationEntity(190U);
    msg.validity = 62U;
    msg.x = 0.72298379781;
    msg.y = 0.193531704526;
    msg.z = 0.0656141052022;

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
    msg.setTimeStamp(0.407849423006);
    msg.setSource(39521U);
    msg.setSourceEntity(38U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(224U);
    msg.validity = 148U;
    msg.x = 0.196565354536;
    msg.y = 0.35423110364;
    msg.z = 0.578906972692;

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
    msg.setTimeStamp(0.453246777395);
    msg.setSource(33139U);
    msg.setSourceEntity(118U);
    msg.setDestination(30759U);
    msg.setDestinationEntity(116U);
    msg.time = 0.95395571619;
    msg.x = 0.300994596975;
    msg.y = 0.689157777821;
    msg.z = 0.521404856278;

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
    msg.setTimeStamp(0.255686110695);
    msg.setSource(18392U);
    msg.setSourceEntity(84U);
    msg.setDestination(56186U);
    msg.setDestinationEntity(148U);
    msg.time = 0.0631731302273;
    msg.x = 0.118090719349;
    msg.y = 0.26922442613;
    msg.z = 0.642366981944;

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
    msg.setTimeStamp(0.141869157576);
    msg.setSource(37656U);
    msg.setSourceEntity(238U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(175U);
    msg.time = 0.122502212047;
    msg.x = 0.186286406857;
    msg.y = 0.28622548146;
    msg.z = 0.00564773903441;

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
    msg.setTimeStamp(0.98683238357);
    msg.setSource(316U);
    msg.setSourceEntity(150U);
    msg.setDestination(51840U);
    msg.setDestinationEntity(215U);
    msg.validity = 250U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0201401434267;
    tmp_msg_0.y = 0.74966893994;
    tmp_msg_0.z = 0.537814859541;
    tmp_msg_0.phi = 0.701597801546;
    tmp_msg_0.theta = 0.430610879354;
    tmp_msg_0.psi = 0.962602832972;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.543920735602;
    tmp_msg_1.beam_height = 0.0166894503255;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.117526150617;

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
    msg.setTimeStamp(0.66670485256);
    msg.setSource(18099U);
    msg.setSourceEntity(33U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(208U);
    msg.validity = 204U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47395090881;
    tmp_msg_0.beam_height = 0.156904616898;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.511707692472;

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
    msg.setTimeStamp(0.438544413275);
    msg.setSource(37071U);
    msg.setSourceEntity(14U);
    msg.setDestination(16086U);
    msg.setDestinationEntity(185U);
    msg.validity = 39U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7520941542;
    tmp_msg_0.y = 0.956216554732;
    tmp_msg_0.z = 0.52232939528;
    tmp_msg_0.phi = 0.717163104061;
    tmp_msg_0.theta = 0.474537692966;
    tmp_msg_0.psi = 0.756179240554;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.136415203704;

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
    msg.setTimeStamp(0.367774101986);
    msg.setSource(31374U);
    msg.setSourceEntity(21U);
    msg.setDestination(64225U);
    msg.setDestinationEntity(102U);
    msg.value = 0.53929713526;

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
    msg.setTimeStamp(0.0244747011987);
    msg.setSource(30061U);
    msg.setSourceEntity(214U);
    msg.setDestination(24915U);
    msg.setDestinationEntity(180U);
    msg.value = 0.971549137581;

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
    msg.setTimeStamp(0.347790552552);
    msg.setSource(10252U);
    msg.setSourceEntity(243U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(64U);
    msg.value = 0.181452655898;

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
    msg.setTimeStamp(0.735062144772);
    msg.setSource(8817U);
    msg.setSourceEntity(31U);
    msg.setDestination(46701U);
    msg.setDestinationEntity(170U);
    msg.value = 0.777180198012;

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
    msg.setTimeStamp(0.764165633952);
    msg.setSource(57131U);
    msg.setSourceEntity(191U);
    msg.setDestination(38856U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0810763056471;

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
    msg.setTimeStamp(0.58806006098);
    msg.setSource(13345U);
    msg.setSourceEntity(83U);
    msg.setDestination(9118U);
    msg.setDestinationEntity(137U);
    msg.value = 0.640961708512;

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
    msg.setTimeStamp(0.688351570705);
    msg.setSource(53992U);
    msg.setSourceEntity(92U);
    msg.setDestination(59201U);
    msg.setDestinationEntity(154U);
    msg.value = 0.723603423522;

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
    msg.setTimeStamp(0.797260839388);
    msg.setSource(64307U);
    msg.setSourceEntity(2U);
    msg.setDestination(49002U);
    msg.setDestinationEntity(150U);
    msg.value = 0.110183346633;

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
    msg.setTimeStamp(0.644105165323);
    msg.setSource(48605U);
    msg.setSourceEntity(238U);
    msg.setDestination(827U);
    msg.setDestinationEntity(155U);
    msg.value = 0.512954773367;

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
    msg.setTimeStamp(0.516350631082);
    msg.setSource(43112U);
    msg.setSourceEntity(96U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(248U);
    msg.value = 0.330212606675;

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
    msg.setTimeStamp(0.895342644217);
    msg.setSource(25017U);
    msg.setSourceEntity(223U);
    msg.setDestination(44361U);
    msg.setDestinationEntity(73U);
    msg.value = 0.917272364895;

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
    msg.setTimeStamp(0.0775788962582);
    msg.setSource(13733U);
    msg.setSourceEntity(206U);
    msg.setDestination(1330U);
    msg.setDestinationEntity(93U);
    msg.value = 0.834616840344;

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
    msg.setTimeStamp(0.73544661934);
    msg.setSource(32427U);
    msg.setSourceEntity(100U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(108U);
    msg.value = 0.939114370231;

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
    msg.setTimeStamp(0.879083879358);
    msg.setSource(53088U);
    msg.setSourceEntity(112U);
    msg.setDestination(514U);
    msg.setDestinationEntity(250U);
    msg.value = 0.600241563349;

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
    msg.setTimeStamp(0.384277569941);
    msg.setSource(28968U);
    msg.setSourceEntity(241U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0987781065258;

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
    msg.setTimeStamp(0.039585744239);
    msg.setSource(30506U);
    msg.setSourceEntity(80U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(45U);
    msg.value = 0.147808891795;

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
    msg.setTimeStamp(0.58111943181);
    msg.setSource(36880U);
    msg.setSourceEntity(78U);
    msg.setDestination(20868U);
    msg.setDestinationEntity(170U);
    msg.value = 0.529165293043;

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
    msg.setTimeStamp(0.837740347743);
    msg.setSource(37506U);
    msg.setSourceEntity(172U);
    msg.setDestination(51774U);
    msg.setDestinationEntity(243U);
    msg.value = 0.774238329911;

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
    msg.setTimeStamp(0.369109894292);
    msg.setSource(13314U);
    msg.setSourceEntity(244U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(229U);
    msg.value = 0.912027727229;

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
    msg.setTimeStamp(0.825191862905);
    msg.setSource(53014U);
    msg.setSourceEntity(116U);
    msg.setDestination(22691U);
    msg.setDestinationEntity(215U);
    msg.value = 0.0497830944924;

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
    msg.setTimeStamp(0.768705281877);
    msg.setSource(5594U);
    msg.setSourceEntity(232U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(166U);
    msg.value = 0.10619964439;

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
    msg.setTimeStamp(0.0409348027799);
    msg.setSource(31823U);
    msg.setSourceEntity(9U);
    msg.setDestination(35302U);
    msg.setDestinationEntity(55U);
    msg.value = 0.14522337816;

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
    msg.setTimeStamp(0.28110352355);
    msg.setSource(24185U);
    msg.setSourceEntity(154U);
    msg.setDestination(43086U);
    msg.setDestinationEntity(227U);
    msg.value = 0.277574630798;

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
    msg.setTimeStamp(0.338184402314);
    msg.setSource(55281U);
    msg.setSourceEntity(132U);
    msg.setDestination(45516U);
    msg.setDestinationEntity(142U);
    msg.value = 0.334574315566;

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
    msg.setTimeStamp(0.217470860066);
    msg.setSource(27366U);
    msg.setSourceEntity(251U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.088212802635;
    msg.speed = 0.550275499717;
    msg.turbulence = 0.788234224008;

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
    msg.setTimeStamp(0.494460613925);
    msg.setSource(54098U);
    msg.setSourceEntity(63U);
    msg.setDestination(59952U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.385390425594;
    msg.speed = 0.787597210678;
    msg.turbulence = 0.120915131658;

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
    msg.setTimeStamp(0.961258834201);
    msg.setSource(53180U);
    msg.setSourceEntity(213U);
    msg.setDestination(13592U);
    msg.setDestinationEntity(247U);
    msg.direction = 0.131514631665;
    msg.speed = 0.374069719221;
    msg.turbulence = 0.301662436744;

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
    msg.setTimeStamp(0.244314124928);
    msg.setSource(23218U);
    msg.setSourceEntity(197U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(100U);
    msg.value = 0.292278920634;

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
    msg.setTimeStamp(0.176314641005);
    msg.setSource(17083U);
    msg.setSourceEntity(240U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(58U);
    msg.value = 0.425400668035;

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
    msg.setTimeStamp(0.159329893254);
    msg.setSource(20543U);
    msg.setSourceEntity(37U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(168U);
    msg.value = 0.955110525256;

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
    msg.setTimeStamp(0.774259703019);
    msg.setSource(29089U);
    msg.setSourceEntity(40U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(5U);
    msg.value.assign("PKFSRCEHTXQIDTDQBYRGWRAMBBJMOECGBYARWCWWAZLXSQZXVHIUJWTMATLFINYQXJENHJGSOTXKEPDFFSIDKJYEQMXMWRMLIRUOAVKTJCKZZBQJTUWQOFCSPNYQSHZIVCLJKCYTLKPMVFMXHLXDLYPAEUWGZVODBYCGZNBWO");

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
    msg.setTimeStamp(0.250446038749);
    msg.setSource(39559U);
    msg.setSourceEntity(34U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(26U);
    msg.value.assign("OWKLYFTOGRSYXKPCVWCMXZVBZDQAJXYWZKSGNREUFANVQSIPCNTRYBRAYOVJDSFJWPDEJWMMGCIFHKKUHGGBAOILMHTNVEUICJFLMAGNSGOUJPHZOBPUTPNSMBZAULQQTLKHXBEYDCSACFETJRXNPIRTGURVEFFSVBDCKXFWSJMBFWNXHEUDAOVDLDYZXDWZOQITBLPHNCXEZWLGUP");

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
    msg.setTimeStamp(0.884713393458);
    msg.setSource(22858U);
    msg.setSourceEntity(127U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(20U);
    msg.value.assign("GBRYLUFCJVAYTDVAIVAGOWOXBLRWTGOJIJZNIQSIUVIDPLPYMAXUIEEHTNKYTWDKMTJZAXALFEXNMWCNTQSAPCRBFSIRZKWODYJFPXHPYGILZEIAOHQGQLVWEEQJRJZDP");

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
    msg.setTimeStamp(0.729062463863);
    msg.setSource(10530U);
    msg.setSourceEntity(75U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(105U);
    const char tmp_msg_0[] = {-114, 112, -102, 106, 95, -45, 8, -100, 125, 32, -117, -63, -88, 86, 85, -15, 47, 71, 111, -88, -110, 36, -42, 79, 37, -124, 103, -10, 1, 32, -82, 69, -99, -69, 48, 20, -88, 63, -2, 12, 80, -11, -72, 55, -118, -85, -6, -83};
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
    msg.setTimeStamp(0.110347375341);
    msg.setSource(1536U);
    msg.setSourceEntity(224U);
    msg.setDestination(22696U);
    msg.setDestinationEntity(54U);
    const char tmp_msg_0[] = {-82, -28, -20, 107, 7, -78, -79, -103, -80, -65, -89, -110, -58, 9, -65, 72, -83, 88, -27, -84, -79, -33, -62, 114, 94, -110};
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
    msg.setTimeStamp(0.708418674067);
    msg.setSource(61125U);
    msg.setSourceEntity(210U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {-51, -92, 56, -51, -18, -95, 119, 37, -81, 69, -35, 35, -73, 56, 102, 36, -58, -77, -13, 108, -110, -16, -26, 66, -118, 72, -58, -46, -25, 102, 56, -88, -78, 25, 57, 121, -50, 108, -72, -10, -42, 39, 9, -65, 94, -21, -57, -44, -97, 105, -106, 7, 107, -9, -25, -120, -82, -78, -126, 63, -84, -38, -125, -109, 52, -67, 18, 90, -45, -122, -98, 123, -33, 87, 51, -25, -6, -18, -32, -67, -83, 25, 109, 34, -37, -9, 76, 50, 55, -106, 110, 91, -62, 54, 71, -61, -106, -37, 29, -8, 91, 95, 94, -85, -91, 114, -36, -104, -3, 119, 6, 41, 104, -65, 22, 22, -71, 5, 19, -42, 21, 10, 1, -68, -62, 95, 95, 1, 113, 46, 69, -52, -95};
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
    msg.setTimeStamp(0.79554867503);
    msg.setSource(22880U);
    msg.setSourceEntity(12U);
    msg.setDestination(18010U);
    msg.setDestinationEntity(134U);
    msg.value = 0.214002202073;

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
    msg.setTimeStamp(0.504476083298);
    msg.setSource(18568U);
    msg.setSourceEntity(78U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(13U);
    msg.value = 0.966546946917;

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
    msg.setTimeStamp(0.382919709937);
    msg.setSource(4250U);
    msg.setSourceEntity(91U);
    msg.setDestination(51737U);
    msg.setDestinationEntity(224U);
    msg.value = 0.183067545817;

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
    msg.setTimeStamp(0.0865095567902);
    msg.setSource(3414U);
    msg.setSourceEntity(229U);
    msg.setDestination(352U);
    msg.setDestinationEntity(1U);
    msg.type = 70U;
    msg.frequency = 1754997802U;
    msg.min_range = 59259U;
    msg.max_range = 45353U;
    msg.bits_per_point = 236U;
    msg.scale_factor = 0.163114287379;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.85600674382;
    tmp_msg_0.beam_height = 0.680312484227;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-33, -19, 23, 82, 96, 39, 82, -111, 118, 85, 44, -25, 16, -81, -36, -73, -43, 3, 83, 0, -118, 107, 123, 72, -98, -126, -34, 11, 104, 13, -93, -70, -119, -85, -38, 51, 6, 62, 3, 30, 60, 118, -76, -52, -1, -97, -51, 101, 122, -71, -51, 45};
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
    msg.setTimeStamp(0.00216387768221);
    msg.setSource(27242U);
    msg.setSourceEntity(228U);
    msg.setDestination(57854U);
    msg.setDestinationEntity(143U);
    msg.type = 52U;
    msg.frequency = 3360282949U;
    msg.min_range = 2413U;
    msg.max_range = 44479U;
    msg.bits_per_point = 163U;
    msg.scale_factor = 0.274999623343;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.85834999195;
    tmp_msg_0.beam_height = 0.141835862803;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {77, -82, 103, 74, -47, -29, 119, 77, 114, -22, -110, -28, -34, -58, 34, -10, -83, -43, -125, -2, 40, -52, 37, -27, -68, -123, 126, -125, -31, 21, -123, 78};
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
    msg.setTimeStamp(0.263157548204);
    msg.setSource(60258U);
    msg.setSourceEntity(47U);
    msg.setDestination(3353U);
    msg.setDestinationEntity(180U);
    msg.type = 167U;
    msg.frequency = 872519377U;
    msg.min_range = 57375U;
    msg.max_range = 25219U;
    msg.bits_per_point = 149U;
    msg.scale_factor = 0.169269271236;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0809750380579;
    tmp_msg_0.beam_height = 0.39292007678;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {10, -18, -98, -100, -67, -90, -97, -94, -4, -113, -16, 21, -53, 114, -52, 52, -128, 91, 80, 37, -8, 53, -62, 94, -79, 35, -10, -69, -71, -35, -50, -42, -91, -121, -25, 3, 62, -36, -74, -115, -113, 103, -105, 19, -58, 25, 26, 100, -53, -97, 123, -62, -43, -27, -47, -43, 123, 9, 28, -66, 55, -105, 90, 26, -22, -71, -127, -74, -48, -21, -6, 119, -71, -58, 57, -25, -8, -42, 99, -119, 114, -38, -37, -28, -124, 120, -20, 15, -50, 90, -22, -66, -7, 50, -70, 32, -79, -61, 0, 35, 55, 82, 24, 8, 3, -23, -91, -36, 59, -87, -108, 124, 17, -11, -99, -124, -32, -50, 73, -84, 74, -29, -95, -98, 67, 47, -70, 35, 76, -100, 6, -103, 76, 75, -66, -25, -52, -13, 0, -80, -36, 70, -38, -44, -29, 73, -15, -77, -77, 21, -126, -101, 80, 4, -12, 107, -73, 120, 45, -62, 63, -125, 61, 18, -94, -60, -14, 63, -20, 67, -47, 87, -52, -119, -10, -116, -66, -32, -8, -53, 77, -94, -126, 103, 110, 3, 41, -95, -99, 66, 99, 107, -107, -101, -99, -4, 62, -9, -40, 45, -88, -68, -85, -63, -53, 97, 125, 35, -60, -110, -123, 62, -34, -48, 97, 72, -75, -106, -39, 90, 57, -48, 89, -62, 60, -62, -7, 19, 125, -16, 55, 111, 26, -30, -45, 67, 3, 28, -62, -119, -69, -114, -90, -98, 20, -29};
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
    msg.setTimeStamp(0.55619160221);
    msg.setSource(52091U);
    msg.setSourceEntity(142U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.134309327158);
    msg.setSource(33183U);
    msg.setSourceEntity(188U);
    msg.setDestination(2803U);
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
    msg.setTimeStamp(0.42252289226);
    msg.setSource(52885U);
    msg.setSourceEntity(142U);
    msg.setDestination(5855U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.108717352909);
    msg.setSource(24635U);
    msg.setSourceEntity(41U);
    msg.setDestination(34601U);
    msg.setDestinationEntity(105U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.74065302646);
    msg.setSource(64467U);
    msg.setSourceEntity(112U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(214U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.0371626274686);
    msg.setSource(1383U);
    msg.setSourceEntity(237U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(188U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.726814343953);
    msg.setSource(11688U);
    msg.setSourceEntity(248U);
    msg.setDestination(3826U);
    msg.setDestinationEntity(21U);
    msg.value = 0.786836165231;
    msg.confidence = 0.534172811412;
    msg.opmodes.assign("QLKZIOFPIMFHUWWUXQYAFPZHQBRNZJEDDYKMQPABWDMXPNXVUWNBJOXMIWRSTNJHHHVZVPRFZTHVEVZUIYKLCMCHXOKACOKTXCUMDLBCWEYBBDAGNSKZOQSBIHD");

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
    msg.setTimeStamp(0.132717674469);
    msg.setSource(15598U);
    msg.setSourceEntity(175U);
    msg.setDestination(14860U);
    msg.setDestinationEntity(41U);
    msg.value = 0.2597057083;
    msg.confidence = 0.190453941241;
    msg.opmodes.assign("UGTFNSDGIWRICQKQUMQAJPXUVSRRVHXAACMOIOYTMYJKBBTIPWVJZJWXGNQZJDYTBVCRXITEIRNSVHKOEF");

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
    msg.setTimeStamp(0.0537094584799);
    msg.setSource(57622U);
    msg.setSourceEntity(182U);
    msg.setDestination(23278U);
    msg.setDestinationEntity(130U);
    msg.value = 0.813804110104;
    msg.confidence = 0.70937237496;
    msg.opmodes.assign("AKVDJJEYGNZGXZNGYPYHIBIRQMDIMAETLTCZABKOBJTBQUSZFJOONPNRKGDMOOHEERTRKS");

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
    msg.setTimeStamp(0.212731241045);
    msg.setSource(26999U);
    msg.setSourceEntity(90U);
    msg.setDestination(41684U);
    msg.setDestinationEntity(225U);
    msg.itow = 2710429747U;
    msg.lat = 0.164740628981;
    msg.lon = 0.801884731523;
    msg.height_ell = 0.923128211622;
    msg.height_sea = 0.596503882516;
    msg.hacc = 0.164277792467;
    msg.vacc = 0.58880282687;
    msg.vel_n = 0.569510017462;
    msg.vel_e = 0.513237136075;
    msg.vel_d = 0.987667638156;
    msg.speed = 0.143917793624;
    msg.gspeed = 0.599822108635;
    msg.heading = 0.226933974666;
    msg.sacc = 0.337933189928;
    msg.cacc = 0.170405587536;

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
    msg.setTimeStamp(0.335021326093);
    msg.setSource(3641U);
    msg.setSourceEntity(36U);
    msg.setDestination(57023U);
    msg.setDestinationEntity(161U);
    msg.itow = 1868649094U;
    msg.lat = 0.881335070101;
    msg.lon = 0.532969211564;
    msg.height_ell = 0.235529080166;
    msg.height_sea = 0.552517125412;
    msg.hacc = 0.785531320357;
    msg.vacc = 0.0114574278331;
    msg.vel_n = 0.116208528931;
    msg.vel_e = 0.141441668259;
    msg.vel_d = 0.0364376814669;
    msg.speed = 0.067848006474;
    msg.gspeed = 0.37314993284;
    msg.heading = 0.423125552384;
    msg.sacc = 0.949313844965;
    msg.cacc = 0.314297763564;

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
    msg.setTimeStamp(0.651326531794);
    msg.setSource(52772U);
    msg.setSourceEntity(165U);
    msg.setDestination(20388U);
    msg.setDestinationEntity(145U);
    msg.itow = 2545410086U;
    msg.lat = 0.78547068289;
    msg.lon = 0.0530961826393;
    msg.height_ell = 0.361350334442;
    msg.height_sea = 0.303805081499;
    msg.hacc = 0.741059952965;
    msg.vacc = 0.7970953695;
    msg.vel_n = 0.131512084129;
    msg.vel_e = 0.583053733983;
    msg.vel_d = 0.546300533709;
    msg.speed = 0.901385000253;
    msg.gspeed = 0.357632778064;
    msg.heading = 0.829722075787;
    msg.sacc = 0.326162110606;
    msg.cacc = 0.778100372013;

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
    msg.setTimeStamp(0.879943520536);
    msg.setSource(23976U);
    msg.setSourceEntity(217U);
    msg.setDestination(44960U);
    msg.setDestinationEntity(39U);
    msg.id = 121U;
    msg.value = 0.77373224707;

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
    msg.setTimeStamp(0.171299811821);
    msg.setSource(18143U);
    msg.setSourceEntity(37U);
    msg.setDestination(40315U);
    msg.setDestinationEntity(21U);
    msg.id = 96U;
    msg.value = 0.97928338075;

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
    msg.setTimeStamp(0.558415717685);
    msg.setSource(22587U);
    msg.setSourceEntity(157U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(199U);
    msg.id = 42U;
    msg.value = 0.465144183249;

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
    msg.setTimeStamp(0.278876569855);
    msg.setSource(38267U);
    msg.setSourceEntity(220U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(154U);
    msg.x = 0.186141721699;
    msg.y = 0.152724712675;
    msg.z = 0.40984478502;
    msg.phi = 0.617098472655;
    msg.theta = 0.683096341675;
    msg.psi = 0.0975689042104;

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
    msg.setTimeStamp(0.824649830916);
    msg.setSource(31978U);
    msg.setSourceEntity(84U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(49U);
    msg.x = 0.663586290695;
    msg.y = 0.131991297836;
    msg.z = 0.715759370085;
    msg.phi = 0.162203587351;
    msg.theta = 0.757422247497;
    msg.psi = 0.748114883609;

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
    msg.setTimeStamp(0.0793118530902);
    msg.setSource(62051U);
    msg.setSourceEntity(37U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(230U);
    msg.x = 0.801397168016;
    msg.y = 0.12794579758;
    msg.z = 0.514742493629;
    msg.phi = 0.574051525675;
    msg.theta = 0.92569909161;
    msg.psi = 0.31020815746;

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
    msg.setTimeStamp(0.587463182274);
    msg.setSource(34446U);
    msg.setSourceEntity(29U);
    msg.setDestination(53290U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.0100003753129;
    msg.beam_height = 0.272288330509;

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
    msg.setTimeStamp(0.593009039887);
    msg.setSource(24130U);
    msg.setSourceEntity(34U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 0.804100820088;
    msg.beam_height = 0.380327558589;

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
    msg.setTimeStamp(0.841906117947);
    msg.setSource(53039U);
    msg.setSourceEntity(65U);
    msg.setDestination(27107U);
    msg.setDestinationEntity(46U);
    msg.beam_width = 0.510685530916;
    msg.beam_height = 0.684831359326;

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
    msg.setTimeStamp(0.987618417935);
    msg.setSource(63969U);
    msg.setSourceEntity(233U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(83U);
    msg.sane = 68U;

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
    msg.setTimeStamp(0.579881050984);
    msg.setSource(7348U);
    msg.setSourceEntity(55U);
    msg.setDestination(7618U);
    msg.setDestinationEntity(148U);
    msg.sane = 122U;

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
    msg.setTimeStamp(0.629174797051);
    msg.setSource(40232U);
    msg.setSourceEntity(124U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(222U);
    msg.sane = 6U;

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
    msg.setTimeStamp(0.32849103764);
    msg.setSource(13741U);
    msg.setSourceEntity(143U);
    msg.setDestination(50316U);
    msg.setDestinationEntity(29U);
    msg.value = 0.476126023571;

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
    msg.setTimeStamp(0.625909554636);
    msg.setSource(49926U);
    msg.setSourceEntity(143U);
    msg.setDestination(3070U);
    msg.setDestinationEntity(182U);
    msg.value = 0.263379112783;

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
    msg.setTimeStamp(0.996242310693);
    msg.setSource(33121U);
    msg.setSourceEntity(195U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(5U);
    msg.value = 0.20376062073;

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
    msg.setTimeStamp(0.723118303023);
    msg.setSource(17297U);
    msg.setSourceEntity(173U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(106U);
    msg.value = 0.269406043884;

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
    msg.setTimeStamp(0.283694690907);
    msg.setSource(34197U);
    msg.setSourceEntity(100U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(176U);
    msg.value = 0.241202241086;

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
    msg.setTimeStamp(0.558420216518);
    msg.setSource(17248U);
    msg.setSourceEntity(244U);
    msg.setDestination(34281U);
    msg.setDestinationEntity(14U);
    msg.value = 0.780557152823;

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
    msg.setTimeStamp(0.53559317619);
    msg.setSource(37667U);
    msg.setSourceEntity(217U);
    msg.setDestination(883U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0575521510088;

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
    msg.setTimeStamp(0.791607591505);
    msg.setSource(46527U);
    msg.setSourceEntity(82U);
    msg.setDestination(23854U);
    msg.setDestinationEntity(214U);
    msg.value = 0.651636695416;

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
    msg.setTimeStamp(0.261700879485);
    msg.setSource(3955U);
    msg.setSourceEntity(217U);
    msg.setDestination(50411U);
    msg.setDestinationEntity(115U);
    msg.value = 0.481961907268;

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
    msg.setTimeStamp(0.375627635861);
    msg.setSource(12403U);
    msg.setSourceEntity(32U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(141U);
    msg.value = 0.891248978608;

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
    msg.setTimeStamp(0.0839968587472);
    msg.setSource(58408U);
    msg.setSourceEntity(246U);
    msg.setDestination(25666U);
    msg.setDestinationEntity(135U);
    msg.value = 0.824840129851;

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
    msg.setTimeStamp(0.986643769282);
    msg.setSource(24154U);
    msg.setSourceEntity(38U);
    msg.setDestination(49803U);
    msg.setDestinationEntity(80U);
    msg.value = 0.862413194944;

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
    msg.setTimeStamp(0.652252816728);
    msg.setSource(36984U);
    msg.setSourceEntity(2U);
    msg.setDestination(9883U);
    msg.setDestinationEntity(151U);
    msg.value = 0.479209345749;

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
    msg.setTimeStamp(0.390295139875);
    msg.setSource(37274U);
    msg.setSourceEntity(68U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(118U);
    msg.value = 0.856035635816;

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
    msg.setTimeStamp(0.528305505385);
    msg.setSource(1786U);
    msg.setSourceEntity(150U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(50U);
    msg.value = 0.534501713434;

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
    msg.setTimeStamp(0.362537113978);
    msg.setSource(54268U);
    msg.setSourceEntity(199U);
    msg.setDestination(722U);
    msg.setDestinationEntity(203U);
    msg.value = 0.334520529525;

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
    msg.setTimeStamp(0.657436130837);
    msg.setSource(40477U);
    msg.setSourceEntity(217U);
    msg.setDestination(26594U);
    msg.setDestinationEntity(195U);
    msg.value = 0.723994199363;

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
    msg.setTimeStamp(0.986846717314);
    msg.setSource(25342U);
    msg.setSourceEntity(64U);
    msg.setDestination(4085U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0808577106235;

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
    msg.setTimeStamp(0.0548936273963);
    msg.setSource(3240U);
    msg.setSourceEntity(196U);
    msg.setDestination(55644U);
    msg.setDestinationEntity(11U);
    msg.value = 0.961224558638;

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
    msg.setTimeStamp(0.182328781599);
    msg.setSource(36675U);
    msg.setSourceEntity(12U);
    msg.setDestination(22985U);
    msg.setDestinationEntity(133U);
    msg.value = 0.542141702081;

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
    msg.setTimeStamp(0.710371011081);
    msg.setSource(40611U);
    msg.setSourceEntity(252U);
    msg.setDestination(60629U);
    msg.setDestinationEntity(239U);
    msg.value = 0.26333908393;

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
    msg.setTimeStamp(0.29247322687);
    msg.setSource(36496U);
    msg.setSourceEntity(114U);
    msg.setDestination(2104U);
    msg.setDestinationEntity(216U);
    msg.value = 0.336568639411;

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
    msg.setTimeStamp(0.231865545794);
    msg.setSource(40032U);
    msg.setSourceEntity(16U);
    msg.setDestination(52781U);
    msg.setDestinationEntity(190U);
    msg.value = 0.823416518269;

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
    msg.setTimeStamp(0.410469701465);
    msg.setSource(10068U);
    msg.setSourceEntity(98U);
    msg.setDestination(5439U);
    msg.setDestinationEntity(227U);
    msg.value = 0.272318688691;

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
    msg.setTimeStamp(0.532041698814);
    msg.setSource(23663U);
    msg.setSourceEntity(162U);
    msg.setDestination(42448U);
    msg.setDestinationEntity(119U);
    msg.validity = 23634U;
    msg.type = 46U;
    msg.tow = 1910653362U;
    msg.base_lat = 0.118603869095;
    msg.base_lon = 0.23487780032;
    msg.base_height = 0.738226926;
    msg.n = 0.192669585959;
    msg.e = 0.2320422259;
    msg.d = 0.203145671389;
    msg.v_n = 7.74703988476e-05;
    msg.v_e = 0.296402824207;
    msg.v_d = 0.808587930985;
    msg.satellites = 78U;
    msg.iar_hyp = 50619U;
    msg.iar_ratio = 0.0220801146821;

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
    msg.setTimeStamp(0.978091433829);
    msg.setSource(16186U);
    msg.setSourceEntity(177U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(18U);
    msg.validity = 56630U;
    msg.type = 204U;
    msg.tow = 1836829079U;
    msg.base_lat = 0.224235041871;
    msg.base_lon = 0.0994852847841;
    msg.base_height = 0.770883611668;
    msg.n = 0.376670830692;
    msg.e = 0.632300972284;
    msg.d = 0.736729175503;
    msg.v_n = 0.69526582772;
    msg.v_e = 0.0284727282024;
    msg.v_d = 0.155047664981;
    msg.satellites = 28U;
    msg.iar_hyp = 2495U;
    msg.iar_ratio = 0.99518275853;

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
    msg.setTimeStamp(0.949992338127);
    msg.setSource(18788U);
    msg.setSourceEntity(78U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(58U);
    msg.validity = 18500U;
    msg.type = 86U;
    msg.tow = 2459283383U;
    msg.base_lat = 0.751281959685;
    msg.base_lon = 0.333929608621;
    msg.base_height = 0.59505211888;
    msg.n = 0.559323716448;
    msg.e = 0.0223617584998;
    msg.d = 0.723591631102;
    msg.v_n = 0.705020358623;
    msg.v_e = 0.268039823769;
    msg.v_d = 0.0202636836084;
    msg.satellites = 128U;
    msg.iar_hyp = 51477U;
    msg.iar_ratio = 0.149292796669;

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
    msg.setTimeStamp(0.0440258209063);
    msg.setSource(14016U);
    msg.setSourceEntity(241U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(43U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0697337852846;
    tmp_msg_0.lon = 0.792845430534;
    tmp_msg_0.height = 0.502338673512;
    tmp_msg_0.x = 0.431034134363;
    tmp_msg_0.y = 0.742619541235;
    tmp_msg_0.z = 0.395207249108;
    tmp_msg_0.phi = 0.0859311490697;
    tmp_msg_0.theta = 0.80986502709;
    tmp_msg_0.psi = 0.291521479516;
    tmp_msg_0.u = 0.41737063311;
    tmp_msg_0.v = 0.754172424737;
    tmp_msg_0.w = 0.683420446558;
    tmp_msg_0.vx = 0.682732849768;
    tmp_msg_0.vy = 0.160617859129;
    tmp_msg_0.vz = 0.593681996445;
    tmp_msg_0.p = 0.593978622926;
    tmp_msg_0.q = 0.896252529256;
    tmp_msg_0.r = 0.140891599145;
    tmp_msg_0.depth = 0.877558544477;
    tmp_msg_0.alt = 0.801826975963;
    msg.state.set(tmp_msg_0);
    msg.type = 126U;

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
    msg.setTimeStamp(0.0398632040676);
    msg.setSource(20701U);
    msg.setSourceEntity(204U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(129U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.195078937458;
    tmp_msg_0.lon = 0.143912300343;
    tmp_msg_0.height = 0.810071871893;
    tmp_msg_0.x = 0.863856126483;
    tmp_msg_0.y = 0.0511670058469;
    tmp_msg_0.z = 0.398251107034;
    tmp_msg_0.phi = 0.370053946632;
    tmp_msg_0.theta = 0.851734754579;
    tmp_msg_0.psi = 0.752349860176;
    tmp_msg_0.u = 0.395556895454;
    tmp_msg_0.v = 0.186608626969;
    tmp_msg_0.w = 0.417953104221;
    tmp_msg_0.vx = 0.850892703244;
    tmp_msg_0.vy = 0.94222485613;
    tmp_msg_0.vz = 0.259984150344;
    tmp_msg_0.p = 0.0172617892423;
    tmp_msg_0.q = 0.269063505767;
    tmp_msg_0.r = 0.643489006256;
    tmp_msg_0.depth = 0.328100127167;
    tmp_msg_0.alt = 0.408592770565;
    msg.state.set(tmp_msg_0);
    msg.type = 128U;

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
    msg.setTimeStamp(0.68244929524);
    msg.setSource(5703U);
    msg.setSourceEntity(189U);
    msg.setDestination(27540U);
    msg.setDestinationEntity(69U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.25968283957;
    tmp_msg_0.lon = 0.234041309223;
    tmp_msg_0.height = 0.273817667787;
    tmp_msg_0.x = 0.11376446068;
    tmp_msg_0.y = 0.945294909331;
    tmp_msg_0.z = 0.580944832108;
    tmp_msg_0.phi = 0.949792022289;
    tmp_msg_0.theta = 0.120003039401;
    tmp_msg_0.psi = 0.0577566948091;
    tmp_msg_0.u = 0.687366031811;
    tmp_msg_0.v = 0.880012057011;
    tmp_msg_0.w = 0.972026422283;
    tmp_msg_0.vx = 0.581748441917;
    tmp_msg_0.vy = 0.106517855139;
    tmp_msg_0.vz = 0.407648904236;
    tmp_msg_0.p = 0.77001950622;
    tmp_msg_0.q = 0.739243124018;
    tmp_msg_0.r = 0.424996202804;
    tmp_msg_0.depth = 0.90192075602;
    tmp_msg_0.alt = 0.642309757026;
    msg.state.set(tmp_msg_0);
    msg.type = 56U;

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
    msg.setTimeStamp(0.224295492689);
    msg.setSource(417U);
    msg.setSourceEntity(146U);
    msg.setDestination(41534U);
    msg.setDestinationEntity(252U);
    msg.value = 0.89766894045;

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
    msg.setTimeStamp(0.387029307474);
    msg.setSource(38206U);
    msg.setSourceEntity(251U);
    msg.setDestination(53971U);
    msg.setDestinationEntity(204U);
    msg.value = 0.780653520013;

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
    msg.setTimeStamp(0.669449587024);
    msg.setSource(5540U);
    msg.setSourceEntity(6U);
    msg.setDestination(55570U);
    msg.setDestinationEntity(208U);
    msg.value = 0.330638137378;

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
    msg.setTimeStamp(0.437911527205);
    msg.setSource(61772U);
    msg.setSourceEntity(170U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(154U);
    msg.value = 0.620045047376;

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
    msg.setTimeStamp(0.69326899878);
    msg.setSource(13551U);
    msg.setSourceEntity(251U);
    msg.setDestination(44525U);
    msg.setDestinationEntity(199U);
    msg.value = 0.610683030898;

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
    msg.setTimeStamp(0.297697823196);
    msg.setSource(49388U);
    msg.setSourceEntity(20U);
    msg.setDestination(37884U);
    msg.setDestinationEntity(15U);
    msg.value = 0.542629723573;

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
    msg.setTimeStamp(0.0583451506844);
    msg.setSource(65451U);
    msg.setSourceEntity(23U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(83U);
    msg.value = 0.838715940318;

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
    msg.setTimeStamp(0.0493375629757);
    msg.setSource(5082U);
    msg.setSourceEntity(249U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(158U);
    msg.value = 0.149664446896;

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
    msg.setTimeStamp(0.414275572734);
    msg.setSource(34213U);
    msg.setSourceEntity(0U);
    msg.setDestination(21675U);
    msg.setDestinationEntity(237U);
    msg.value = 0.946434845923;

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
    msg.setTimeStamp(0.965220098829);
    msg.setSource(3786U);
    msg.setSourceEntity(143U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(225U);
    msg.value = 0.181222444584;

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
    msg.setTimeStamp(0.0415557104749);
    msg.setSource(8717U);
    msg.setSourceEntity(107U);
    msg.setDestination(25808U);
    msg.setDestinationEntity(250U);
    msg.value = 0.244311485559;

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
    msg.setTimeStamp(0.923916822695);
    msg.setSource(2047U);
    msg.setSourceEntity(225U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(36U);
    msg.value = 0.321275622358;

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
    msg.setTimeStamp(0.655629408409);
    msg.setSource(32831U);
    msg.setSourceEntity(1U);
    msg.setDestination(39436U);
    msg.setDestinationEntity(119U);
    msg.value = 0.902322430086;

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
    msg.setTimeStamp(0.0117681952047);
    msg.setSource(4831U);
    msg.setSourceEntity(240U);
    msg.setDestination(16571U);
    msg.setDestinationEntity(235U);
    msg.value = 0.441879866184;

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
    msg.setTimeStamp(0.6914926766);
    msg.setSource(6200U);
    msg.setSourceEntity(227U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(75U);
    msg.value = 0.244822914374;

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
    msg.setTimeStamp(0.699734762484);
    msg.setSource(42672U);
    msg.setSourceEntity(9U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(135U);
    msg.id = 235U;
    msg.zoom = 245U;
    msg.action = 28U;

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
    msg.setTimeStamp(0.865145681569);
    msg.setSource(13810U);
    msg.setSourceEntity(91U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(68U);
    msg.id = 246U;
    msg.zoom = 15U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.347813051471);
    msg.setSource(65144U);
    msg.setSourceEntity(17U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(74U);
    msg.id = 207U;
    msg.zoom = 70U;
    msg.action = 63U;

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
    msg.setTimeStamp(0.13197233286);
    msg.setSource(30335U);
    msg.setSourceEntity(34U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(61U);
    msg.id = 154U;
    msg.value = 0.809341724674;

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
    msg.setTimeStamp(0.0562062332701);
    msg.setSource(50577U);
    msg.setSourceEntity(19U);
    msg.setDestination(54119U);
    msg.setDestinationEntity(75U);
    msg.id = 210U;
    msg.value = 0.228147760964;

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
    msg.setTimeStamp(0.561317825619);
    msg.setSource(41521U);
    msg.setSourceEntity(194U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(180U);
    msg.id = 82U;
    msg.value = 0.753742161842;

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
    msg.setTimeStamp(0.156255967426);
    msg.setSource(38287U);
    msg.setSourceEntity(248U);
    msg.setDestination(9108U);
    msg.setDestinationEntity(253U);
    msg.id = 205U;
    msg.value = 0.149937780819;

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
    msg.setTimeStamp(0.816643845569);
    msg.setSource(13079U);
    msg.setSourceEntity(159U);
    msg.setDestination(62289U);
    msg.setDestinationEntity(75U);
    msg.id = 168U;
    msg.value = 0.0787553448596;

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
    msg.setTimeStamp(0.185739633382);
    msg.setSource(17247U);
    msg.setSourceEntity(171U);
    msg.setDestination(32334U);
    msg.setDestinationEntity(114U);
    msg.id = 110U;
    msg.value = 0.544263254291;

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
    msg.setTimeStamp(0.729038854852);
    msg.setSource(10417U);
    msg.setSourceEntity(26U);
    msg.setDestination(37161U);
    msg.setDestinationEntity(213U);
    msg.id = 224U;
    msg.angle = 0.144332694343;

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
    msg.setTimeStamp(0.231709203488);
    msg.setSource(30407U);
    msg.setSourceEntity(37U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(213U);
    msg.id = 168U;
    msg.angle = 0.848468836565;

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
    msg.setTimeStamp(0.782882753533);
    msg.setSource(58257U);
    msg.setSourceEntity(202U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(238U);
    msg.id = 98U;
    msg.angle = 0.570936971475;

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
    msg.setTimeStamp(0.740271665354);
    msg.setSource(11423U);
    msg.setSourceEntity(148U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(5U);
    msg.op = 31U;
    msg.actions.assign("KLGYMVJHURARAUZXRXOHMMXBACOSUOYMXUDSNYHSBEYDUBKOQPVDATAYZDVCJPMBEZNJOCFQMQWRTANTDLMVOTHGVGEMBXFSNSVEQVKUWJGSGRKIQJQGHKPXRVDJWYVCGZTPBCEZPQZEWRBGUDBWDWNTODVHJJFITSMGIUZCLPCJUYAKKGEXOAZWEWCFNFFINTSKLWCBFNXLTLNOLYSZXCFZARHLIFUIPRRPLIQHIYPQMKOQWLFNIEYHXIEAT");

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
    msg.setTimeStamp(0.649697850575);
    msg.setSource(10648U);
    msg.setSourceEntity(241U);
    msg.setDestination(40825U);
    msg.setDestinationEntity(166U);
    msg.op = 107U;
    msg.actions.assign("VFQACYMBUBSHSIBRRLDTZGTTAORFBSXEMTOZKPNSBWUXFCQUKUUVESMZCDXYALNJEHDEMZICPIYXZTVVWEKHJFZDTQGKLAOTCPFSN");

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
    msg.setTimeStamp(0.452601856378);
    msg.setSource(23414U);
    msg.setSourceEntity(208U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(65U);
    msg.op = 214U;
    msg.actions.assign("JDVSPVMHFRBIZEFIPDGFIFVHILEGTGGSPEYKBCFHHCNYMTPENWBDRJMNNEVJLDKQQDJZRTHAO");

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
    msg.setTimeStamp(0.928930039797);
    msg.setSource(26010U);
    msg.setSourceEntity(154U);
    msg.setDestination(58383U);
    msg.setDestinationEntity(103U);
    msg.actions.assign("OLWCBXZEIMMACCGLBURKTKTL");

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
    msg.setTimeStamp(0.0640176196023);
    msg.setSource(43938U);
    msg.setSourceEntity(176U);
    msg.setDestination(52062U);
    msg.setDestinationEntity(67U);
    msg.actions.assign("CYJUMKASXJMSGFTHZTBUAFXDWTAYZHZIUMOVKYSKQJOHQKUNRBEOQMCLTATNVFBGJWGHIRLIJEWSBFSBDXLLCEGHHZVWZOUHWHOOEPEBMRCGDAPPWDCCBNAOSXSVEZQVYTTADYTWIQ");

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
    msg.setTimeStamp(0.244443377899);
    msg.setSource(12695U);
    msg.setSourceEntity(224U);
    msg.setDestination(31680U);
    msg.setDestinationEntity(20U);
    msg.actions.assign("TLLNYOTLDJTHDPKRLDZGBFKNTYABQNGPAPAAHVSERDHUSRGXGDUXWMPVVQLNUSIZOEBPHZCJCMZPEUEOMNXNQNLDPIESOZQVUBFUKVRRFFYODWYBATUXSXITQYMZTZTPJKJQTBUSBUPXGFS");

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
    msg.setTimeStamp(0.0199107378763);
    msg.setSource(20902U);
    msg.setSourceEntity(192U);
    msg.setDestination(60894U);
    msg.setDestinationEntity(237U);
    msg.button = 163U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.576610422587);
    msg.setSource(42469U);
    msg.setSourceEntity(168U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(243U);
    msg.button = 208U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.920855696856);
    msg.setSource(40392U);
    msg.setSourceEntity(250U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(81U);
    msg.button = 127U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.85166677056);
    msg.setSource(8032U);
    msg.setSourceEntity(37U);
    msg.setDestination(29449U);
    msg.setDestinationEntity(216U);
    msg.op = 141U;
    msg.text.assign("WQISGGRANJLSPYHYXNIEGJZWYALFEQNREBIDKXZFZTKRCYDQNNZISRUPMQKWPAVBEXVQ");

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
    msg.setTimeStamp(0.297581246328);
    msg.setSource(28585U);
    msg.setSourceEntity(167U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(120U);
    msg.op = 206U;
    msg.text.assign("SOZWQSOCWOMACEXBNMBKNMVVROGOBHYWULYZJIUWUDBVVZEKUQKNGDIMJITXFIXRRBBEBPD");

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
    msg.setTimeStamp(0.990314950776);
    msg.setSource(20638U);
    msg.setSourceEntity(157U);
    msg.setDestination(33838U);
    msg.setDestinationEntity(176U);
    msg.op = 91U;
    msg.text.assign("QJKDBLKLGZYVKRQFWLPCXHSVQTIPRNNTTHCLNQKRVBDIPAICEJOTJMHUAWVDCIACDFLIYJUBWWOWJENCCVFCABSQCYSAOZPVSZFXXCWBNJXMRSGOUSQNZTYDTAF");

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
    msg.setTimeStamp(0.0545819801455);
    msg.setSource(6472U);
    msg.setSourceEntity(253U);
    msg.setDestination(62753U);
    msg.setDestinationEntity(59U);
    msg.op = 252U;
    msg.time_remain = 0.312826000977;
    msg.sched_time = 0.714999333857;

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
    msg.setTimeStamp(0.607738960997);
    msg.setSource(61856U);
    msg.setSourceEntity(228U);
    msg.setDestination(13285U);
    msg.setDestinationEntity(236U);
    msg.op = 86U;
    msg.time_remain = 0.722892375207;
    msg.sched_time = 0.54381754999;

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
    msg.setTimeStamp(0.158329459153);
    msg.setSource(33952U);
    msg.setSourceEntity(65U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(154U);
    msg.op = 212U;
    msg.time_remain = 0.937065337128;
    msg.sched_time = 0.180050391203;

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
    msg.setTimeStamp(0.850906766515);
    msg.setSource(7935U);
    msg.setSourceEntity(246U);
    msg.setDestination(48437U);
    msg.setDestinationEntity(250U);
    msg.name.assign("GFWVRZRGOVTVSQFQJBUEEKSNBLXZSYLKXTIHFSAUVEFZFERMSSOONAOBZVUFYLJUIKXTIFXZVPKVHPGJDDNHTONIMKAPNSK");
    msg.op = 36U;
    msg.sched_time = 0.603156874815;

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
    msg.setTimeStamp(0.880352968894);
    msg.setSource(32039U);
    msg.setSourceEntity(47U);
    msg.setDestination(27589U);
    msg.setDestinationEntity(208U);
    msg.name.assign("MNXWCBJSSPEMFVWHPUGVTMXFPEDVQRHLH");
    msg.op = 205U;
    msg.sched_time = 0.205505602647;

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
    msg.setTimeStamp(0.068749170916);
    msg.setSource(21875U);
    msg.setSourceEntity(131U);
    msg.setDestination(31567U);
    msg.setDestinationEntity(123U);
    msg.name.assign("HPMESYGHTNUA");
    msg.op = 84U;
    msg.sched_time = 0.324380919514;

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
    msg.setTimeStamp(0.700207020869);
    msg.setSource(10616U);
    msg.setSourceEntity(253U);
    msg.setDestination(26933U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.76389959399);
    msg.setSource(62044U);
    msg.setSourceEntity(235U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.945944922316);
    msg.setSource(39909U);
    msg.setSourceEntity(88U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.333331063273);
    msg.setSource(6951U);
    msg.setSourceEntity(90U);
    msg.setDestination(3946U);
    msg.setDestinationEntity(203U);
    msg.name.assign("KWVNJUHEASLQLFNQNVVXFTZLOYMLWBBRIVXOBD");
    msg.state = 229U;

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
    msg.setTimeStamp(0.697143444708);
    msg.setSource(33652U);
    msg.setSourceEntity(166U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(66U);
    msg.name.assign("SDWWBITASKGXMZFEIAVKCCMBZQRHWKAGNQHTTMJCHGFBEKDYOAQTFIOSNSPYONXFYVLFKVNSFZOUJAIKYRKQKMHUKEOCRLIBVMEQZQBSVDRWCZSZNBAJXRSVVXGO");
    msg.state = 46U;

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
    msg.setTimeStamp(0.0661777309517);
    msg.setSource(56945U);
    msg.setSourceEntity(237U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(245U);
    msg.name.assign("PZAZSXGWWTZIEEKXEUKFRIJBPKQJEUGNDDLNQTPYJANVHBBHCD");
    msg.state = 67U;

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
    msg.setTimeStamp(0.526305617352);
    msg.setSource(15200U);
    msg.setSourceEntity(103U);
    msg.setDestination(50906U);
    msg.setDestinationEntity(131U);
    msg.name.assign("NKFDSSLABJVKOGNISHTWHQFMNGQYPKJTTEGVMFIVHZPAGBZSPLEKQTHHSGSZYGWWXSYLDUNECKUUORMLADQUCCRJSLJLKORIYVKFTPWDGDDIYXRRNOIPDTCPPOGDAEKZCTUIZEFLJFCAEXLIDUXBUAOCRKAWZPBOEMWTQWCKXAVAHWFNJZVIMGRNSC");
    msg.value = 210U;

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
    msg.setTimeStamp(0.817071053654);
    msg.setSource(12723U);
    msg.setSourceEntity(86U);
    msg.setDestination(46124U);
    msg.setDestinationEntity(247U);
    msg.name.assign("KIBUHZCLOMIOLEXGBUKSQUGDQVHRYJCLKDBOGVPSMLHEYVVHMKIDAXWXWXDKCZPQOPGQDFETSHUQDMLYNBLQNPQZAOJGVACSNLEFKWQOKRSANDHMETUFUSERQLMQTNDWFYFBAKSRTMJLRTIPJKRBDAFHJJHYIFCYVXOHMIZFWIGCMCGGNUZPEJWWNBNHPNIOETFAXAZJDSZBXJYMXVPZBSYSFUAZYVKUTVWNRYZECTICPIXC");
    msg.value = 43U;

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
    msg.setTimeStamp(0.817947571719);
    msg.setSource(28069U);
    msg.setSourceEntity(95U);
    msg.setDestination(36910U);
    msg.setDestinationEntity(13U);
    msg.name.assign("DVGQNLDWSFZNNCKSBFJYEUUOYXSQQBSBRQONHBWRWZNTLQUPGXAYVLTANEHCGOJRDDMGBZLTEKCMWBHQNGHROHMQVOJXSLSTPLVOIGJIAIUNUXZMCHJPEYGKIFBLSAFBJKUJEYIHLJYCOEBPTZIPDFZLRWGSYQWFYVUIUERMSTEKTJYCWZOHXKGOXKTGMCCMMMDIIIPANQCFAZVHKTRDPDUKQWVHXVVXAPAAERW");
    msg.value = 164U;

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
    msg.setTimeStamp(0.547878112921);
    msg.setSource(15018U);
    msg.setSourceEntity(76U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DUALLXOCAQMYIVRSKNPWRQXULKEJITPSWFJUIGNNDZVTYZETCQFCQBXSJWKDFOJXKHZIMBEKQPHGHYVBXPEYAF");

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
    msg.setTimeStamp(0.788735025068);
    msg.setSource(29260U);
    msg.setSourceEntity(199U);
    msg.setDestination(63043U);
    msg.setDestinationEntity(63U);
    msg.name.assign("VGJSNMRPIXJSJUWNCSIKKFEMZNDEYRKDCOCYOUUZMNSHZEPWSNHUPPABCFOEEBAGHKHASKELVTWCRVABIYGWQALITSVVNDBYUXHDFLLDJSGHNCPZDGPWLKZCTITYGJYTQDFZBMYJVLHKTBLPYFQXGBRJULJ");

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
    msg.setTimeStamp(0.12078911356);
    msg.setSource(28198U);
    msg.setSourceEntity(203U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MPJDQTUFWXVSHNJPZLIKWSXSBTUYUUTBCCEOMJKFCYBTPRDNLMFBVNWFMCLORRAAMRFZQPJLYXHRRGBZVLIPDOQHMMSGTFXRGWNKTPVLTQQXFFIUHSZOGDNHYRSSMYUDAYZVXEIDEXGHVGNUAEJNZDUBSVPJ");

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
    msg.setTimeStamp(0.0765981234126);
    msg.setSource(59267U);
    msg.setSourceEntity(243U);
    msg.setDestination(52573U);
    msg.setDestinationEntity(201U);
    msg.name.assign("DQZCHXLUAZCVMKIHUBHJNTTJDGSIHRSRVNQUWKSGAMEKBFZYKGJRBFFFZDOZTBNAHOLVIZSYWDCMXKBPSMQVFTLXEUPXTNYQLIVAUWRADJDNPNWXPLN");
    msg.value = 227U;

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
    msg.setTimeStamp(0.373410077304);
    msg.setSource(10891U);
    msg.setSourceEntity(10U);
    msg.setDestination(34379U);
    msg.setDestinationEntity(54U);
    msg.name.assign("QLHPEUOSDBONPANNHJTSGIFOGFEAGETVUVGPWFLZUIYLDRYZSCFIYKHRZACUAXKZXVNAQBMYVGVRWJATTBJTPMUMVLNYYDMZRPQUBNBOOEWQCGBUMEFQEMQS");
    msg.value = 24U;

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
    msg.setTimeStamp(0.854356370525);
    msg.setSource(56280U);
    msg.setSourceEntity(202U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(73U);
    msg.name.assign("HCHMIXJUTHREBJBCXRJXOIONHDUSSRQNDAKVRZQJUXIZPPOBGZRSJUFZAOXJVCVBMKPMOQDTPAXCKVTQSWPNLPJUJRBWZQBFYLOTGZALDFALLAIGDTSAWMUKTYZCIARKHAQFFIYMPYFEYKZKWYYWEDYVLOMECNQFVUGXWGNTZMLSTGQEKHRTELNSHXPR");
    msg.value = 53U;

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
    msg.setTimeStamp(0.434228172038);
    msg.setSource(14292U);
    msg.setSourceEntity(242U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(152U);
    msg.id = 176U;
    msg.period = 3218021221U;
    msg.duty_cycle = 148649806U;

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
    msg.setTimeStamp(0.43183342175);
    msg.setSource(61320U);
    msg.setSourceEntity(119U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(25U);
    msg.id = 252U;
    msg.period = 3892017655U;
    msg.duty_cycle = 1018158092U;

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
    msg.setTimeStamp(0.627231718067);
    msg.setSource(29301U);
    msg.setSourceEntity(174U);
    msg.setDestination(26333U);
    msg.setDestinationEntity(232U);
    msg.id = 191U;
    msg.period = 3135620730U;
    msg.duty_cycle = 1603457637U;

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
    msg.setTimeStamp(0.823371427424);
    msg.setSource(4519U);
    msg.setSourceEntity(53U);
    msg.setDestination(12945U);
    msg.setDestinationEntity(165U);
    msg.id = 207U;
    msg.period = 1096799911U;
    msg.duty_cycle = 976755309U;

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
    msg.setTimeStamp(0.699110740318);
    msg.setSource(24147U);
    msg.setSourceEntity(186U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(189U);
    msg.id = 193U;
    msg.period = 2356632855U;
    msg.duty_cycle = 2045858602U;

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
    msg.setTimeStamp(0.193551219435);
    msg.setSource(17331U);
    msg.setSourceEntity(242U);
    msg.setDestination(48481U);
    msg.setDestinationEntity(165U);
    msg.id = 205U;
    msg.period = 1650695250U;
    msg.duty_cycle = 2458617576U;

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
    msg.setTimeStamp(0.840897501422);
    msg.setSource(65476U);
    msg.setSourceEntity(142U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.516984859146;
    msg.lon = 0.963638741456;
    msg.height = 0.910738212129;
    msg.x = 0.00831823524923;
    msg.y = 0.904259990303;
    msg.z = 0.0875795288868;
    msg.phi = 0.715752507963;
    msg.theta = 0.960502345518;
    msg.psi = 0.467033466408;
    msg.u = 0.461734572048;
    msg.v = 0.689227504163;
    msg.w = 0.223689591537;
    msg.vx = 0.527646763409;
    msg.vy = 0.721052587977;
    msg.vz = 0.174712515903;
    msg.p = 0.42902029488;
    msg.q = 0.77382834016;
    msg.r = 0.335369157461;
    msg.depth = 0.776427226317;
    msg.alt = 0.872983879639;

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
    msg.setTimeStamp(0.475753260405);
    msg.setSource(60691U);
    msg.setSourceEntity(25U);
    msg.setDestination(40589U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.133500247593;
    msg.lon = 0.930263232051;
    msg.height = 0.94818703727;
    msg.x = 0.665637382725;
    msg.y = 0.902317634233;
    msg.z = 0.753977601927;
    msg.phi = 0.787643543266;
    msg.theta = 0.88519874931;
    msg.psi = 0.0399269533414;
    msg.u = 0.70018498579;
    msg.v = 0.735324225429;
    msg.w = 0.804279260739;
    msg.vx = 0.400896105845;
    msg.vy = 0.31170880308;
    msg.vz = 0.732778457783;
    msg.p = 0.455666774033;
    msg.q = 0.7909331665;
    msg.r = 0.946939016248;
    msg.depth = 0.322088401943;
    msg.alt = 0.312388468898;

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
    msg.setTimeStamp(0.765000825638);
    msg.setSource(58616U);
    msg.setSourceEntity(72U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.994745585171;
    msg.lon = 0.821787784006;
    msg.height = 0.165255963883;
    msg.x = 0.590298981126;
    msg.y = 0.632906722417;
    msg.z = 0.75219086331;
    msg.phi = 0.0433766798518;
    msg.theta = 0.0526005649717;
    msg.psi = 0.783103645575;
    msg.u = 0.000439770804331;
    msg.v = 0.908925188292;
    msg.w = 0.262979208973;
    msg.vx = 0.663405658033;
    msg.vy = 0.777388390234;
    msg.vz = 0.0454628961811;
    msg.p = 0.930942727726;
    msg.q = 0.698977821399;
    msg.r = 0.188174011517;
    msg.depth = 0.437469190715;
    msg.alt = 0.882581546121;

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
    msg.setTimeStamp(0.597691126052);
    msg.setSource(36435U);
    msg.setSourceEntity(254U);
    msg.setDestination(60308U);
    msg.setDestinationEntity(173U);
    msg.x = 0.148798862368;
    msg.y = 0.575465158173;
    msg.z = 0.0771074928425;

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
    msg.setTimeStamp(0.986191719172);
    msg.setSource(30107U);
    msg.setSourceEntity(6U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(3U);
    msg.x = 0.254077346339;
    msg.y = 0.370999605172;
    msg.z = 0.613936818063;

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
    msg.setTimeStamp(0.0932527396405);
    msg.setSource(33607U);
    msg.setSourceEntity(234U);
    msg.setDestination(35741U);
    msg.setDestinationEntity(189U);
    msg.x = 0.509209814024;
    msg.y = 0.835074189617;
    msg.z = 0.0209505258924;

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
    msg.setTimeStamp(0.752575400088);
    msg.setSource(61141U);
    msg.setSourceEntity(141U);
    msg.setDestination(42106U);
    msg.setDestinationEntity(63U);
    msg.value = 0.159874011172;

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
    msg.setTimeStamp(0.566935611761);
    msg.setSource(47743U);
    msg.setSourceEntity(253U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0995693198894;

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
    msg.setTimeStamp(0.649965951928);
    msg.setSource(51579U);
    msg.setSourceEntity(126U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(58U);
    msg.value = 0.952363827613;

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
    msg.setTimeStamp(0.490117926851);
    msg.setSource(20613U);
    msg.setSourceEntity(1U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(169U);
    msg.value = 0.342188311601;

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
    msg.setTimeStamp(0.538222104251);
    msg.setSource(49821U);
    msg.setSourceEntity(50U);
    msg.setDestination(20432U);
    msg.setDestinationEntity(217U);
    msg.value = 0.947186652645;

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
    msg.setTimeStamp(0.661250116392);
    msg.setSource(22400U);
    msg.setSourceEntity(131U);
    msg.setDestination(540U);
    msg.setDestinationEntity(59U);
    msg.value = 0.499448136996;

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
    msg.setTimeStamp(0.712614656679);
    msg.setSource(6993U);
    msg.setSourceEntity(130U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(195U);
    msg.x = 0.0364650985884;
    msg.y = 0.331035675869;
    msg.z = 0.76187037798;
    msg.phi = 0.738197378451;
    msg.theta = 0.985059042644;
    msg.psi = 0.360670071787;
    msg.p = 0.341142447593;
    msg.q = 0.453239015228;
    msg.r = 0.258879927253;
    msg.u = 0.97548960589;
    msg.v = 0.879858523436;
    msg.w = 0.517292212613;
    msg.bias_psi = 0.344421576525;
    msg.bias_r = 0.888764405003;

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
    msg.setTimeStamp(0.0904293489342);
    msg.setSource(3001U);
    msg.setSourceEntity(14U);
    msg.setDestination(9344U);
    msg.setDestinationEntity(180U);
    msg.x = 0.301864817773;
    msg.y = 0.444575927333;
    msg.z = 0.31493473241;
    msg.phi = 0.146383467831;
    msg.theta = 0.806224319916;
    msg.psi = 0.531020702029;
    msg.p = 0.292650073041;
    msg.q = 0.566642221444;
    msg.r = 0.990502182527;
    msg.u = 0.295580866433;
    msg.v = 0.861716021798;
    msg.w = 0.969493025216;
    msg.bias_psi = 0.750263068115;
    msg.bias_r = 0.806329980535;

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
    msg.setTimeStamp(0.966562462099);
    msg.setSource(39733U);
    msg.setSourceEntity(195U);
    msg.setDestination(50236U);
    msg.setDestinationEntity(60U);
    msg.x = 0.504091039221;
    msg.y = 0.584725938495;
    msg.z = 0.445671813224;
    msg.phi = 0.880519739165;
    msg.theta = 0.830476911171;
    msg.psi = 0.541047251451;
    msg.p = 0.836491050314;
    msg.q = 0.161216209683;
    msg.r = 0.767453899319;
    msg.u = 0.0329685599772;
    msg.v = 0.520728121483;
    msg.w = 0.546478110752;
    msg.bias_psi = 0.472024191454;
    msg.bias_r = 0.416654138425;

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
    msg.setTimeStamp(0.810553800474);
    msg.setSource(39232U);
    msg.setSourceEntity(121U);
    msg.setDestination(30442U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.122847132293;
    msg.bias_r = 0.432018833249;
    msg.cog = 0.501018480296;
    msg.cyaw = 0.156995212999;
    msg.lbl_rej_level = 0.383105930778;
    msg.gps_rej_level = 0.678410513633;
    msg.custom_x = 0.142710649046;
    msg.custom_y = 0.411111990727;
    msg.custom_z = 0.0834834963629;

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
    msg.setTimeStamp(0.163574715992);
    msg.setSource(15271U);
    msg.setSourceEntity(171U);
    msg.setDestination(27194U);
    msg.setDestinationEntity(184U);
    msg.bias_psi = 0.955837834152;
    msg.bias_r = 0.850858844549;
    msg.cog = 0.245635684043;
    msg.cyaw = 0.315588021507;
    msg.lbl_rej_level = 0.655322974173;
    msg.gps_rej_level = 0.977270515074;
    msg.custom_x = 0.725299272086;
    msg.custom_y = 0.106464294724;
    msg.custom_z = 0.35762501101;

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
    msg.setTimeStamp(0.880531330607);
    msg.setSource(33876U);
    msg.setSourceEntity(210U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(46U);
    msg.bias_psi = 0.56596785049;
    msg.bias_r = 0.910262180822;
    msg.cog = 0.669061068978;
    msg.cyaw = 0.771799142283;
    msg.lbl_rej_level = 0.676710870499;
    msg.gps_rej_level = 0.21549883644;
    msg.custom_x = 0.972213650093;
    msg.custom_y = 0.994668892152;
    msg.custom_z = 0.044672408637;

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
    msg.setTimeStamp(0.0103782813066);
    msg.setSource(5579U);
    msg.setSourceEntity(132U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(40U);
    msg.utc_time = 0.451524373859;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.453643602086);
    msg.setSource(64855U);
    msg.setSourceEntity(2U);
    msg.setDestination(65062U);
    msg.setDestinationEntity(243U);
    msg.utc_time = 0.252112441039;
    msg.reason = 62U;

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
    msg.setTimeStamp(0.478744702657);
    msg.setSource(36651U);
    msg.setSourceEntity(127U);
    msg.setDestination(59059U);
    msg.setDestinationEntity(17U);
    msg.utc_time = 0.595958846171;
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
    msg.setTimeStamp(0.383079496995);
    msg.setSource(39325U);
    msg.setSourceEntity(212U);
    msg.setDestination(56821U);
    msg.setDestinationEntity(114U);
    msg.id = 19U;
    msg.range = 0.612537638254;
    msg.acceptance = 253U;

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
    msg.setTimeStamp(0.481241614292);
    msg.setSource(48762U);
    msg.setSourceEntity(113U);
    msg.setDestination(25098U);
    msg.setDestinationEntity(249U);
    msg.id = 82U;
    msg.range = 0.734207949718;
    msg.acceptance = 253U;

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
    msg.setTimeStamp(0.879466282794);
    msg.setSource(47248U);
    msg.setSourceEntity(91U);
    msg.setDestination(45483U);
    msg.setDestinationEntity(14U);
    msg.id = 155U;
    msg.range = 0.788027806529;
    msg.acceptance = 232U;

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
    msg.setTimeStamp(0.783009859727);
    msg.setSource(55519U);
    msg.setSourceEntity(23U);
    msg.setDestination(40505U);
    msg.setDestinationEntity(105U);
    msg.type = 216U;
    msg.reason = 154U;
    msg.value = 0.709913946583;
    msg.timestep = 0.573296936918;

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
    msg.setTimeStamp(0.500084806297);
    msg.setSource(9748U);
    msg.setSourceEntity(181U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(250U);
    msg.type = 253U;
    msg.reason = 221U;
    msg.value = 0.456953360554;
    msg.timestep = 0.380015607009;

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
    msg.setTimeStamp(0.590438552555);
    msg.setSource(60563U);
    msg.setSourceEntity(191U);
    msg.setDestination(27560U);
    msg.setDestinationEntity(188U);
    msg.type = 208U;
    msg.reason = 135U;
    msg.value = 0.425018083033;
    msg.timestep = 0.140776680587;

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
    msg.setTimeStamp(0.0692299510484);
    msg.setSource(35141U);
    msg.setSourceEntity(245U);
    msg.setDestination(981U);
    msg.setDestinationEntity(126U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VOLBFCSAGESPVXKKZUWPQJOJZAFWETZFSWGVSPHEHYWSDUIIRKIFOBCOQCBPDYZMRPZWDRWLBRBTRQVJSROGLJXLOYTFBAOEPVCDLAYUKMRXWAGCEGPDDGCQQQVITAUEVTQICPOGHHBMMRJBXCNNYZDXFHLUFMWKJTHEPLUYFBKHDJILUYLEAUSMHWNGQZKMNLJYGVUEVTQKANKAIFNYCXQD");
    tmp_msg_0.lat = 0.120159656225;
    tmp_msg_0.lon = 0.531570157779;
    tmp_msg_0.depth = 0.159918608619;
    tmp_msg_0.query_channel = 173U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 172U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.952920832624;
    msg.y = 0.635145534638;
    msg.var_x = 0.684576673257;
    msg.var_y = 0.790787790775;
    msg.distance = 0.191552754388;

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
    msg.setTimeStamp(0.307521559842);
    msg.setSource(16205U);
    msg.setSourceEntity(216U);
    msg.setDestination(5632U);
    msg.setDestinationEntity(134U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IKZBWZQFACOVTOZQKNORNFYBAYYTAMCIAGXBGJHHSBRJHJCDNHWTWKCGLIB");
    tmp_msg_0.lat = 0.638360975418;
    tmp_msg_0.lon = 0.96572840506;
    tmp_msg_0.depth = 0.211995799425;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 60U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.56309843189;
    msg.y = 0.787539382345;
    msg.var_x = 0.600168868069;
    msg.var_y = 0.453197593804;
    msg.distance = 0.402104438249;

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
    msg.setTimeStamp(0.736207920129);
    msg.setSource(36299U);
    msg.setSourceEntity(51U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(120U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("REPXJWCDDNCPQNBMDAPOKEINMAPVKWJWTPCNRSTTIYUPNPBMDFXAHCVLKTWYHAMUMULSQGOKZEESLUHGQZCCOJYHZJOXRZBDLYETQCDHOGZF");
    tmp_msg_0.lat = 0.522977109927;
    tmp_msg_0.lon = 0.774761588902;
    tmp_msg_0.depth = 0.762802082363;
    tmp_msg_0.query_channel = 99U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.514216770358;
    msg.y = 0.992607629728;
    msg.var_x = 0.0485740801408;
    msg.var_y = 0.505485341226;
    msg.distance = 0.748182036624;

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
    msg.setTimeStamp(0.699001200054);
    msg.setSource(22864U);
    msg.setSourceEntity(76U);
    msg.setDestination(47199U);
    msg.setDestinationEntity(156U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.56583461291);
    msg.setSource(28256U);
    msg.setSourceEntity(140U);
    msg.setDestination(1134U);
    msg.setDestinationEntity(198U);
    msg.state = 46U;

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
    msg.setTimeStamp(0.268558629213);
    msg.setSource(64187U);
    msg.setSourceEntity(212U);
    msg.setDestination(1272U);
    msg.setDestinationEntity(193U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.185091130358);
    msg.setSource(18000U);
    msg.setSourceEntity(209U);
    msg.setDestination(9047U);
    msg.setDestinationEntity(132U);
    msg.x = 0.676976628692;
    msg.y = 0.83477392002;
    msg.z = 0.24423386879;

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
    msg.setTimeStamp(0.552627136614);
    msg.setSource(22099U);
    msg.setSourceEntity(194U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(9U);
    msg.x = 0.677149126706;
    msg.y = 0.0362060453062;
    msg.z = 0.758230299285;

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
    msg.setTimeStamp(0.784184701816);
    msg.setSource(2518U);
    msg.setSourceEntity(110U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(177U);
    msg.x = 0.563207568107;
    msg.y = 0.347980231572;
    msg.z = 0.128038157808;

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
    msg.setTimeStamp(0.260094753235);
    msg.setSource(5331U);
    msg.setSourceEntity(113U);
    msg.setDestination(38006U);
    msg.setDestinationEntity(180U);
    msg.va = 0.886798168499;
    msg.aoa = 0.315614687833;
    msg.ssa = 0.986570173027;

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
    msg.setTimeStamp(0.655212078598);
    msg.setSource(36618U);
    msg.setSourceEntity(120U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(66U);
    msg.va = 0.307988182626;
    msg.aoa = 0.0244909563122;
    msg.ssa = 0.585687871253;

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
    msg.setTimeStamp(0.313014646793);
    msg.setSource(25167U);
    msg.setSourceEntity(205U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(151U);
    msg.va = 0.150244359734;
    msg.aoa = 0.880973504756;
    msg.ssa = 0.870106189147;

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
    msg.setTimeStamp(0.786847894068);
    msg.setSource(51452U);
    msg.setSourceEntity(153U);
    msg.setDestination(60445U);
    msg.setDestinationEntity(8U);
    msg.value = 0.516919930372;

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
    msg.setTimeStamp(0.0164995236191);
    msg.setSource(18336U);
    msg.setSourceEntity(96U);
    msg.setDestination(51753U);
    msg.setDestinationEntity(72U);
    msg.value = 0.906587265681;

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
    msg.setTimeStamp(0.553118793029);
    msg.setSource(7850U);
    msg.setSourceEntity(201U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(93U);
    msg.value = 0.662290657611;

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
    msg.setTimeStamp(0.285960477295);
    msg.setSource(27000U);
    msg.setSourceEntity(123U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(51U);
    msg.value = 0.300568169074;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.353389269308);
    msg.setSource(26414U);
    msg.setSourceEntity(149U);
    msg.setDestination(41731U);
    msg.setDestinationEntity(101U);
    msg.value = 0.416061954423;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.519835940346);
    msg.setSource(25860U);
    msg.setSourceEntity(34U);
    msg.setDestination(35833U);
    msg.setDestinationEntity(198U);
    msg.value = 0.38011410701;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.214716845384);
    msg.setSource(52764U);
    msg.setSourceEntity(29U);
    msg.setDestination(18903U);
    msg.setDestinationEntity(235U);
    msg.value = 0.482667517059;
    msg.speed_units = 20U;

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
    msg.setTimeStamp(0.80281278944);
    msg.setSource(30592U);
    msg.setSourceEntity(94U);
    msg.setDestination(53285U);
    msg.setDestinationEntity(243U);
    msg.value = 0.801182314541;
    msg.speed_units = 219U;

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
    msg.setTimeStamp(0.683807871977);
    msg.setSource(42670U);
    msg.setSourceEntity(58U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(54U);
    msg.value = 0.906196872255;
    msg.speed_units = 112U;

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
    msg.setTimeStamp(0.330185627267);
    msg.setSource(52717U);
    msg.setSourceEntity(183U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(85U);
    msg.value = 0.698725303027;

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
    msg.setTimeStamp(0.472195792376);
    msg.setSource(19617U);
    msg.setSourceEntity(128U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(27U);
    msg.value = 0.844289269287;

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
    msg.setTimeStamp(0.0937446584145);
    msg.setSource(42771U);
    msg.setSourceEntity(67U);
    msg.setDestination(43751U);
    msg.setDestinationEntity(12U);
    msg.value = 0.248589946666;

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
    msg.setTimeStamp(0.92376872821);
    msg.setSource(9350U);
    msg.setSourceEntity(12U);
    msg.setDestination(38543U);
    msg.setDestinationEntity(153U);
    msg.value = 0.484189475373;

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
    msg.setTimeStamp(0.312967568802);
    msg.setSource(23889U);
    msg.setSourceEntity(170U);
    msg.setDestination(3111U);
    msg.setDestinationEntity(84U);
    msg.value = 0.650103807685;

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
    msg.setTimeStamp(0.795820169219);
    msg.setSource(18600U);
    msg.setSourceEntity(183U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(124U);
    msg.value = 0.747797951207;

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
    msg.setTimeStamp(0.646528727977);
    msg.setSource(15950U);
    msg.setSourceEntity(195U);
    msg.setDestination(56210U);
    msg.setDestinationEntity(101U);
    msg.value = 0.322355701599;

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
    msg.setTimeStamp(0.309681482015);
    msg.setSource(49606U);
    msg.setSourceEntity(63U);
    msg.setDestination(5660U);
    msg.setDestinationEntity(194U);
    msg.value = 0.905865975633;

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
    msg.setTimeStamp(0.764367054559);
    msg.setSource(28685U);
    msg.setSourceEntity(59U);
    msg.setDestination(53978U);
    msg.setDestinationEntity(202U);
    msg.value = 0.716794577989;

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
    msg.setTimeStamp(0.671398710342);
    msg.setSource(61083U);
    msg.setSourceEntity(218U);
    msg.setDestination(1811U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 2913137806U;
    msg.start_lat = 0.640838934093;
    msg.start_lon = 0.0291634877986;
    msg.start_z = 0.835148863906;
    msg.start_z_units = 143U;
    msg.end_lat = 0.0445876354022;
    msg.end_lon = 0.984343210182;
    msg.end_z = 0.184648074548;
    msg.end_z_units = 193U;
    msg.speed = 0.389644690409;
    msg.speed_units = 22U;
    msg.lradius = 0.87906906816;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.811621807447);
    msg.setSource(3990U);
    msg.setSourceEntity(180U);
    msg.setDestination(64176U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 4266274850U;
    msg.start_lat = 0.0718955878809;
    msg.start_lon = 0.318514483368;
    msg.start_z = 0.648435778403;
    msg.start_z_units = 45U;
    msg.end_lat = 0.361747656208;
    msg.end_lon = 0.808899495763;
    msg.end_z = 0.0428655472568;
    msg.end_z_units = 47U;
    msg.speed = 0.164318794923;
    msg.speed_units = 207U;
    msg.lradius = 0.970328653519;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.749384141493);
    msg.setSource(19390U);
    msg.setSourceEntity(154U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 2217712110U;
    msg.start_lat = 0.448396311578;
    msg.start_lon = 0.106634430815;
    msg.start_z = 0.561953817206;
    msg.start_z_units = 244U;
    msg.end_lat = 0.31169744583;
    msg.end_lon = 0.395818156365;
    msg.end_z = 0.206589097026;
    msg.end_z_units = 71U;
    msg.speed = 0.112099178946;
    msg.speed_units = 178U;
    msg.lradius = 0.103072973673;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.737603270182);
    msg.setSource(14520U);
    msg.setSourceEntity(161U);
    msg.setDestination(64289U);
    msg.setDestinationEntity(100U);
    msg.x = 0.518071072695;
    msg.y = 0.991384774069;
    msg.z = 0.505691275065;
    msg.k = 0.640961249397;
    msg.m = 0.0335210776839;
    msg.n = 0.93131777966;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.800716907264);
    msg.setSource(17359U);
    msg.setSourceEntity(169U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(40U);
    msg.x = 0.198275832946;
    msg.y = 0.380075598852;
    msg.z = 0.173427547208;
    msg.k = 0.0137161183296;
    msg.m = 0.118286884821;
    msg.n = 0.557877357063;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.498180580908);
    msg.setSource(3341U);
    msg.setSourceEntity(158U);
    msg.setDestination(15124U);
    msg.setDestinationEntity(177U);
    msg.x = 0.327725706373;
    msg.y = 0.472523693015;
    msg.z = 0.867000126885;
    msg.k = 0.496811824703;
    msg.m = 0.463186419179;
    msg.n = 0.678652387491;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.493830913809);
    msg.setSource(33879U);
    msg.setSourceEntity(206U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(99U);
    msg.value = 0.370301602224;

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
    msg.setTimeStamp(0.569031034257);
    msg.setSource(6626U);
    msg.setSourceEntity(205U);
    msg.setDestination(58986U);
    msg.setDestinationEntity(40U);
    msg.value = 0.440405594892;

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
    msg.setTimeStamp(0.482669809567);
    msg.setSource(31560U);
    msg.setSourceEntity(128U);
    msg.setDestination(37864U);
    msg.setDestinationEntity(169U);
    msg.value = 0.446610212006;

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
    msg.setTimeStamp(0.187200107113);
    msg.setSource(2937U);
    msg.setSourceEntity(196U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(122U);
    msg.u = 0.415121376716;
    msg.v = 0.422038074421;
    msg.w = 0.759595879714;
    msg.p = 0.668871772089;
    msg.q = 0.805829386233;
    msg.r = 0.249696207628;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.973832140685);
    msg.setSource(6451U);
    msg.setSourceEntity(30U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(62U);
    msg.u = 0.111212307197;
    msg.v = 0.559458817397;
    msg.w = 0.581124935578;
    msg.p = 0.0126441433132;
    msg.q = 0.0577076714487;
    msg.r = 0.742693576475;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.875813059371);
    msg.setSource(30211U);
    msg.setSourceEntity(182U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(206U);
    msg.u = 0.758010233208;
    msg.v = 0.854956792356;
    msg.w = 0.280405283824;
    msg.p = 0.882432476845;
    msg.q = 0.689534086465;
    msg.r = 0.666855759652;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.138153827807);
    msg.setSource(37230U);
    msg.setSourceEntity(28U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 356617793U;
    msg.start_lat = 0.22464693069;
    msg.start_lon = 0.526042772502;
    msg.start_z = 0.471012798292;
    msg.start_z_units = 22U;
    msg.end_lat = 0.130554406586;
    msg.end_lon = 0.434295397381;
    msg.end_z = 0.242260888377;
    msg.end_z_units = 94U;
    msg.lradius = 0.183150970991;
    msg.flags = 6U;
    msg.x = 0.448860723003;
    msg.y = 0.305972870892;
    msg.z = 0.897148830375;
    msg.vx = 0.123954066993;
    msg.vy = 0.414786594999;
    msg.vz = 0.410531079143;
    msg.course_error = 0.990242408073;
    msg.eta = 27643U;

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
    msg.setTimeStamp(0.455303341726);
    msg.setSource(31664U);
    msg.setSourceEntity(168U);
    msg.setDestination(14137U);
    msg.setDestinationEntity(245U);
    msg.path_ref = 1707419230U;
    msg.start_lat = 0.23046969977;
    msg.start_lon = 0.414571091848;
    msg.start_z = 0.592611477704;
    msg.start_z_units = 75U;
    msg.end_lat = 0.804985319734;
    msg.end_lon = 0.0789193953812;
    msg.end_z = 0.51937805043;
    msg.end_z_units = 9U;
    msg.lradius = 0.0661873331476;
    msg.flags = 120U;
    msg.x = 0.815882456668;
    msg.y = 0.371494601647;
    msg.z = 0.901519589466;
    msg.vx = 0.992776525063;
    msg.vy = 0.757953329599;
    msg.vz = 0.383784566816;
    msg.course_error = 0.844107447717;
    msg.eta = 33188U;

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
    msg.setTimeStamp(0.238144792853);
    msg.setSource(14480U);
    msg.setSourceEntity(72U);
    msg.setDestination(50465U);
    msg.setDestinationEntity(40U);
    msg.path_ref = 1547474287U;
    msg.start_lat = 0.3576799025;
    msg.start_lon = 0.632759484661;
    msg.start_z = 0.517803991854;
    msg.start_z_units = 45U;
    msg.end_lat = 0.0404385911641;
    msg.end_lon = 0.294986006226;
    msg.end_z = 0.718947525604;
    msg.end_z_units = 84U;
    msg.lradius = 0.20931709133;
    msg.flags = 120U;
    msg.x = 0.329337936586;
    msg.y = 0.181567929013;
    msg.z = 0.260511111076;
    msg.vx = 0.344730232667;
    msg.vy = 0.913485667737;
    msg.vz = 0.128820125679;
    msg.course_error = 0.985202059757;
    msg.eta = 62307U;

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
    msg.setTimeStamp(0.545344160129);
    msg.setSource(55575U);
    msg.setSourceEntity(70U);
    msg.setDestination(36333U);
    msg.setDestinationEntity(147U);
    msg.k = 0.737913555549;
    msg.m = 0.713565294254;
    msg.n = 0.109288666972;

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
    msg.setTimeStamp(0.716077021669);
    msg.setSource(49138U);
    msg.setSourceEntity(186U);
    msg.setDestination(62646U);
    msg.setDestinationEntity(89U);
    msg.k = 0.378640088519;
    msg.m = 0.134658425396;
    msg.n = 0.898404677213;

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
    msg.setTimeStamp(0.762712550956);
    msg.setSource(24673U);
    msg.setSourceEntity(240U);
    msg.setDestination(22978U);
    msg.setDestinationEntity(111U);
    msg.k = 0.15201276395;
    msg.m = 0.408948055139;
    msg.n = 0.0456874421737;

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
    msg.setTimeStamp(0.674808202587);
    msg.setSource(30842U);
    msg.setSourceEntity(8U);
    msg.setDestination(22405U);
    msg.setDestinationEntity(6U);
    msg.p = 0.409758190534;
    msg.i = 0.698183316046;
    msg.d = 0.39932408711;
    msg.a = 0.518183449486;

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
    msg.setTimeStamp(0.909330627323);
    msg.setSource(24943U);
    msg.setSourceEntity(90U);
    msg.setDestination(10620U);
    msg.setDestinationEntity(252U);
    msg.p = 0.108681527045;
    msg.i = 0.911438197441;
    msg.d = 0.98677929548;
    msg.a = 0.775903721526;

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
    msg.setTimeStamp(0.537646698467);
    msg.setSource(30777U);
    msg.setSourceEntity(125U);
    msg.setDestination(38573U);
    msg.setDestinationEntity(64U);
    msg.p = 0.133107409883;
    msg.i = 0.528165699662;
    msg.d = 0.571541571495;
    msg.a = 0.240978626352;

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
    msg.setTimeStamp(0.609313840286);
    msg.setSource(47572U);
    msg.setSourceEntity(138U);
    msg.setDestination(25376U);
    msg.setDestinationEntity(73U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.831015101096);
    msg.setSource(4116U);
    msg.setSourceEntity(6U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(12U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.229387862742);
    msg.setSource(47249U);
    msg.setSourceEntity(169U);
    msg.setDestination(34094U);
    msg.setDestinationEntity(44U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.391109688754);
    msg.setSource(57996U);
    msg.setSourceEntity(126U);
    msg.setDestination(54336U);
    msg.setDestinationEntity(156U);
    msg.x = 0.667960217079;
    msg.y = 0.348090622777;
    msg.z = 0.0676378358535;
    msg.vx = 0.0159714812919;
    msg.vy = 0.581031444414;
    msg.vz = 0.336111105109;
    msg.ax = 0.650902727262;
    msg.ay = 0.107949387766;
    msg.az = 0.577957655223;
    msg.flags = 47817U;

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
    msg.setTimeStamp(0.671435596904);
    msg.setSource(49516U);
    msg.setSourceEntity(241U);
    msg.setDestination(20537U);
    msg.setDestinationEntity(58U);
    msg.x = 0.139750969217;
    msg.y = 0.925743854437;
    msg.z = 0.804133061596;
    msg.vx = 0.799930574411;
    msg.vy = 0.200915147868;
    msg.vz = 0.180086274436;
    msg.ax = 0.25092114494;
    msg.ay = 0.742034827822;
    msg.az = 0.619791675332;
    msg.flags = 58065U;

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
    msg.setTimeStamp(0.923833315999);
    msg.setSource(63931U);
    msg.setSourceEntity(154U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(57U);
    msg.x = 0.205109016955;
    msg.y = 0.207010339475;
    msg.z = 0.118834796454;
    msg.vx = 0.848668834799;
    msg.vy = 0.554488449027;
    msg.vz = 0.48726605408;
    msg.ax = 0.850109212447;
    msg.ay = 0.188634408178;
    msg.az = 0.064074342038;
    msg.flags = 53581U;

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
    msg.setTimeStamp(0.150505379247);
    msg.setSource(65421U);
    msg.setSourceEntity(44U);
    msg.setDestination(4012U);
    msg.setDestinationEntity(192U);
    msg.value = 0.425808552265;

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
    msg.setTimeStamp(0.690450575294);
    msg.setSource(45390U);
    msg.setSourceEntity(153U);
    msg.setDestination(26955U);
    msg.setDestinationEntity(160U);
    msg.value = 0.343776844507;

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
    msg.setTimeStamp(0.0551258233328);
    msg.setSource(11039U);
    msg.setSourceEntity(44U);
    msg.setDestination(17406U);
    msg.setDestinationEntity(148U);
    msg.value = 0.968642286521;

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
    msg.setTimeStamp(0.317937162435);
    msg.setSource(25309U);
    msg.setSourceEntity(38U);
    msg.setDestination(2640U);
    msg.setDestinationEntity(16U);
    msg.timeout = 60428U;
    msg.lat = 0.12377212776;
    msg.lon = 0.0435028954535;
    msg.z = 0.436143266127;
    msg.z_units = 183U;
    msg.speed = 0.0325809203781;
    msg.speed_units = 149U;
    msg.roll = 0.936792404442;
    msg.pitch = 0.387927956385;
    msg.yaw = 0.468465898205;
    msg.custom.assign("LDXWHGQDRLIVJLFCXCIXZBNCSLJBTSKAGRJQMWGGMBOUULWVOMDOWOVEMYDZQEEKQMIMIACRNXETKCEPAMNCTYR");

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
    msg.setTimeStamp(0.79364406458);
    msg.setSource(22372U);
    msg.setSourceEntity(168U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(163U);
    msg.timeout = 32228U;
    msg.lat = 0.253241424766;
    msg.lon = 0.648685698102;
    msg.z = 0.93388789801;
    msg.z_units = 159U;
    msg.speed = 0.697046370447;
    msg.speed_units = 51U;
    msg.roll = 0.0915594014908;
    msg.pitch = 0.342711165515;
    msg.yaw = 0.898460598345;
    msg.custom.assign("UNTEWCAZOOGDZGCKYZLMNXAJHKLNHOYVVOQNGWELMBUPMKBDAMRSIEXRCSDXRCBVJWKHZQZCYPBFGGLLXJPWJTTSMIKSAQDTPTASTTJGXPRIUEIXX");

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
    msg.setTimeStamp(0.807174670364);
    msg.setSource(54845U);
    msg.setSourceEntity(71U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(227U);
    msg.timeout = 49280U;
    msg.lat = 0.944716729962;
    msg.lon = 0.477684783248;
    msg.z = 0.856614186082;
    msg.z_units = 66U;
    msg.speed = 0.323526229581;
    msg.speed_units = 79U;
    msg.roll = 0.556485849164;
    msg.pitch = 0.945154177326;
    msg.yaw = 0.441963266674;
    msg.custom.assign("PTUVFIBAKZIYXFVSFSAWNZHGPNMBGWCQHVXYZLEVXNJDSVDCHXHAPEVWOJRETQBDEKCOKHJPQHVPHYUIRCTWWMUTSTEZWROMDMGXINSTCETRDLANMJAKOLLJBTERCYLLLRPOKEXCIDNIBNAXVIIBBURKDUIDJUMSQKCOKYGGPGFDQAAFZHJFQWBZVIQFKQXTORHPNSNGDGYLEBRJLFSXWMTEQYWLU");

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
    msg.setTimeStamp(0.497648949346);
    msg.setSource(49867U);
    msg.setSourceEntity(109U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(58U);
    msg.timeout = 44271U;
    msg.lat = 0.565098488676;
    msg.lon = 0.911176908804;
    msg.z = 0.487164245009;
    msg.z_units = 65U;
    msg.speed = 0.353705820243;
    msg.speed_units = 193U;
    msg.duration = 40233U;
    msg.radius = 0.143568272355;
    msg.flags = 109U;
    msg.custom.assign("ROROWNZUSHOYVWLRPPQDAHNMZHDEJNAWEQRCBSBTMUZCKLCGJUHHUEICHAZOIPIPOVPOWSNGLUXXVBHDOFKFJBDLBYPQKGNWJWWXDMTVMMMFDVNGRQZUHSZOYKFNXAVPOBRCCVUEWMAHELTKEIZQESJMKHRPJDFIJSLDBJBDBGXGYXIZ");

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
    msg.setTimeStamp(0.206435870296);
    msg.setSource(64290U);
    msg.setSourceEntity(200U);
    msg.setDestination(19885U);
    msg.setDestinationEntity(185U);
    msg.timeout = 48663U;
    msg.lat = 0.643224437649;
    msg.lon = 0.382563119211;
    msg.z = 0.289315398358;
    msg.z_units = 5U;
    msg.speed = 0.504556497987;
    msg.speed_units = 238U;
    msg.duration = 43998U;
    msg.radius = 0.0793487410109;
    msg.flags = 180U;
    msg.custom.assign("CMRACFODDLABQMDBBMITKSPFQHIVVWVGFCWSYIJRMFSWNNUETEXTVKBPZQOHPDDICQAXAYOWVRSUQIQFRIKABZTZUWVPUYSJHLFZLJCUGXDIPWEPTLDOU");

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
    msg.setTimeStamp(0.399202049509);
    msg.setSource(59149U);
    msg.setSourceEntity(83U);
    msg.setDestination(33313U);
    msg.setDestinationEntity(8U);
    msg.timeout = 17608U;
    msg.lat = 0.454677765003;
    msg.lon = 0.68261976345;
    msg.z = 0.891209555234;
    msg.z_units = 68U;
    msg.speed = 0.223151379276;
    msg.speed_units = 173U;
    msg.duration = 13473U;
    msg.radius = 0.359096500395;
    msg.flags = 67U;
    msg.custom.assign("GNZSLESJGRYLTCZUZKOUBVFQLIECNETXDFDULGBBHTVXVEDXVHWWAUACLEMOJDMRQMKYH");

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
    msg.setTimeStamp(0.459993764263);
    msg.setSource(65369U);
    msg.setSourceEntity(11U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(130U);
    msg.custom.assign("FYQPHVICXXJTDBKJHSTAPVARKFEHSHZJHEFTLICWOBUVNUAEYVMEONKTNURUCXSTPGWPQGAZGNSWFCSEZAMTMTQFTYNGCTZMGZOCMBAZOLHRSUDBYLDRGZXLYAVOZHYKBJBISPXOTLXAQONMVWVDUMRJORWEWCFRRZDDQNRUZKYUJKQQPIWIKDERJWC");

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
    msg.setTimeStamp(0.595002217854);
    msg.setSource(24149U);
    msg.setSourceEntity(122U);
    msg.setDestination(51144U);
    msg.setDestinationEntity(19U);
    msg.custom.assign("FIDCYVHLRJXOZKSOOCLSUPIZMOPSRCFCADNJEEXGQILUCGGFMPWIPNLGURICBRHQQSAQPLDBAOZCVVKBUXNHMFIGSPKBDBITYNVVZZXMAFH");

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
    msg.setTimeStamp(0.916731630859);
    msg.setSource(53529U);
    msg.setSourceEntity(221U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("JNCYISKZLKTGDUZOGJMTZZCUULLWQTMBQYEYUHHVZQOMN");

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
    msg.setTimeStamp(0.876268513456);
    msg.setSource(35878U);
    msg.setSourceEntity(55U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(13U);
    msg.timeout = 9299U;
    msg.lat = 0.246906570057;
    msg.lon = 0.832187307022;
    msg.z = 0.467981799903;
    msg.z_units = 240U;
    msg.duration = 31326U;
    msg.speed = 0.637031222595;
    msg.speed_units = 198U;
    msg.type = 86U;
    msg.radius = 0.381718870471;
    msg.length = 0.942457687967;
    msg.bearing = 0.676550038791;
    msg.direction = 135U;
    msg.custom.assign("DCLTWOHAELDULHAPWCDYHJMOCHJPBFXLKYTNZMEHSSWDKJTMVNQBPNDBPIZFXCDFRMLIZGOTUULAQHJYM");

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
    msg.setTimeStamp(0.366269108128);
    msg.setSource(19261U);
    msg.setSourceEntity(49U);
    msg.setDestination(39001U);
    msg.setDestinationEntity(235U);
    msg.timeout = 24310U;
    msg.lat = 0.493675154199;
    msg.lon = 0.27375669984;
    msg.z = 0.941306943212;
    msg.z_units = 17U;
    msg.duration = 48340U;
    msg.speed = 0.0330094289462;
    msg.speed_units = 200U;
    msg.type = 128U;
    msg.radius = 0.794208488926;
    msg.length = 0.110803315157;
    msg.bearing = 0.581552851612;
    msg.direction = 155U;
    msg.custom.assign("SVGKJCANFRCJIISNHQNYSOXCJXWUDBGXPEFKFUFUPZWLQMJDBBKITKUAXUGKWOYTCAZRVEVZSYHLGPAEIZIXSDTDWEBBPJMKXCLPUNIAR");

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
    msg.setTimeStamp(0.173215522899);
    msg.setSource(2359U);
    msg.setSourceEntity(167U);
    msg.setDestination(16925U);
    msg.setDestinationEntity(141U);
    msg.timeout = 30702U;
    msg.lat = 0.722386629812;
    msg.lon = 0.473889930601;
    msg.z = 0.388402121695;
    msg.z_units = 237U;
    msg.duration = 16154U;
    msg.speed = 0.481070908754;
    msg.speed_units = 67U;
    msg.type = 203U;
    msg.radius = 0.474546887931;
    msg.length = 0.976641209192;
    msg.bearing = 0.48910660037;
    msg.direction = 102U;
    msg.custom.assign("CBHHTUWPCBOIUV");

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
    msg.setTimeStamp(0.90445605912);
    msg.setSource(48832U);
    msg.setSourceEntity(32U);
    msg.setDestination(49892U);
    msg.setDestinationEntity(158U);
    msg.duration = 31123U;
    msg.custom.assign("QLDVXPMZQZDYGNKUEKXFYSCMKGRULBMJTJBUVEPVQBOIIAYUTZXNAHEVDNKERWMECIWUDI");

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
    msg.setTimeStamp(0.392188234381);
    msg.setSource(56183U);
    msg.setSourceEntity(121U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(100U);
    msg.duration = 2081U;
    msg.custom.assign("FGMVNANVKPWZTCDUEOMGZYGYFLBGAUPITLXJYEOHGPJHIURCPBVDECMHBFLFPIANKMCEJOBOQIZHHEYYXDFRRQZRWWOBHAIDVQBTEBKGWJZVQCWCZCNAMHIMSBXNTTSDJJODTSQZQQPLKQSBXHBIMUWKJVXKIRUPPKVVZUYMHGRQNKWSAGRGYOPFLJLCGYLFARDNZXAWDSMPSECWMYLTOYJLNDLKHERNSUUFAOTTKX");

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
    msg.setTimeStamp(0.450565313188);
    msg.setSource(59208U);
    msg.setSourceEntity(22U);
    msg.setDestination(41004U);
    msg.setDestinationEntity(76U);
    msg.duration = 50134U;
    msg.custom.assign("OYJHTAKUQIFRWPEWMBUQXWNDFIBXTLNNVIUPTZMXRHQPQZPKTVKHSRKKHMECYJDASOOAJUGZXQESRZCKDKFRSVHOHJLEJTTTHEXMUCPOBZEMIGGNGMQCVFEGFACDYINIYLVVHOVLWRGXADUFDKOYXPNLINRIAOWQWWSYDEMBBTQBTFXCNUSAGFRDVZLZKJXGGCYYCAENZSLUVPMPYKEHBAMZUWRNLJSSFJBOQPTJFPLBDUWADCJSMBO");

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
    msg.setTimeStamp(0.0653743206133);
    msg.setSource(38014U);
    msg.setSourceEntity(20U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(148U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.832814523045;
    msg.control.set(tmp_msg_0);
    msg.duration = 63384U;
    msg.custom.assign("QVHLZNIMJSVCKCQQUQESVKTYZOXKBGTDNZYCCMEMVDHCXWTHGTYGEIYREIORAAOPABQOUIMDALLPZLGRXUYGVUFHDEGPMPZTFQXWIJFSSUUUWBNRWQRLJDBVZOAYHOKSVNFDMCPYJTAQGLWPWOLNAEEBSCEZRAHUONKIFRFFMWYKXXWZJLHTGUCBYODKTKZ");

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
    msg.setTimeStamp(0.867525724065);
    msg.setSource(58225U);
    msg.setSourceEntity(18U);
    msg.setDestination(47607U);
    msg.setDestinationEntity(104U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.836011801764;
    msg.control.set(tmp_msg_0);
    msg.duration = 22871U;
    msg.custom.assign("DYPUXKJNEQHIKUBJMJONSBTOMHVDSN");

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
    msg.setTimeStamp(0.870498222061);
    msg.setSource(41410U);
    msg.setSourceEntity(14U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(10U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.126064538007;
    msg.control.set(tmp_msg_0);
    msg.duration = 36692U;
    msg.custom.assign("KABXCFHTYUWBGVWSFTWCFSGLXCRCOHOMDYINRLLCOPRPFJOFVCHJPCDNQUCQIAYFTOVSRSAUMDBBAYAKMLMETJEAVQQOOIDEXLKKZJAGVKBHZPTZGZIWXKMUHI");

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
    msg.setTimeStamp(0.251514606509);
    msg.setSource(26660U);
    msg.setSourceEntity(12U);
    msg.setDestination(38114U);
    msg.setDestinationEntity(159U);
    msg.timeout = 53509U;
    msg.lat = 0.488168342282;
    msg.lon = 0.254991214729;
    msg.z = 0.520930268573;
    msg.z_units = 182U;
    msg.speed = 0.331666004019;
    msg.speed_units = 179U;
    msg.bearing = 0.667010478876;
    msg.cross_angle = 0.648530508877;
    msg.width = 0.999531907273;
    msg.length = 0.837375167987;
    msg.hstep = 0.0880991594954;
    msg.coff = 166U;
    msg.alternation = 156U;
    msg.flags = 186U;
    msg.custom.assign("YBNXBAQWQJVOHLQOFMXJWZGKVSGOTLRCNXRJPWQGHKUGWCEAHDCTNMPLRDBUZICMUHEVYZTJNVEESVNALKCIFEDRLGKBIHTDQFFWYJPPIHIWXDCUQCCFWCZYXMBOSSPRYIIXMXJRMSBTTEQZUYVHJOIZJDFTUZUKAFOVFBZGORNAXEHAUTHKASASRYWPBYQLRTMFLEQDTNULRPKIPVBN");

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
    msg.setTimeStamp(0.876668100917);
    msg.setSource(36856U);
    msg.setSourceEntity(40U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(192U);
    msg.timeout = 33142U;
    msg.lat = 0.151552276761;
    msg.lon = 0.91164980419;
    msg.z = 0.867984687364;
    msg.z_units = 101U;
    msg.speed = 0.200701245538;
    msg.speed_units = 8U;
    msg.bearing = 0.318602663287;
    msg.cross_angle = 0.0320292662662;
    msg.width = 0.220753638383;
    msg.length = 0.886781446992;
    msg.hstep = 0.112732502463;
    msg.coff = 231U;
    msg.alternation = 86U;
    msg.flags = 107U;
    msg.custom.assign("ZLFHJMOVCWLAUKGLUDGHIJBRQOUFSMDGAANVCCISKOZLLFAWZDBBLJMLKVNDPOGHXXJEAPYZIQOCPYWUFIVTZKBYGRWPNAPBRTKESCHVKPDYVRTCMTMJVEDTDFXNNCSSHEESXKQNJHXICRRGYZGBVWJWXUJPMXDOVLRGIJQWZUACZYYFDHUWQPQNDMPTSLTBSRHQEKUWEMCAEBHZKOORKUNFALYGQZSOPITYQM");

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
    msg.setTimeStamp(0.981026715725);
    msg.setSource(11631U);
    msg.setSourceEntity(178U);
    msg.setDestination(33254U);
    msg.setDestinationEntity(180U);
    msg.timeout = 20511U;
    msg.lat = 0.266122976602;
    msg.lon = 0.395361240906;
    msg.z = 0.65820788095;
    msg.z_units = 168U;
    msg.speed = 0.459346915959;
    msg.speed_units = 216U;
    msg.bearing = 0.606568018887;
    msg.cross_angle = 0.318448798001;
    msg.width = 0.439824583456;
    msg.length = 0.962944313397;
    msg.hstep = 0.113809595001;
    msg.coff = 225U;
    msg.alternation = 159U;
    msg.flags = 131U;
    msg.custom.assign("GWGUAWRXUPUJNQMORZWFOLVXGAWKKQIWBCVKNHDNIJRPKYGXJYGSYDHZVZOBXCLXOLSEEHTDPTBNDMCCOJBPMFUPFNSTADYOHAAKYWWXFINOLXKKEQZDTLLVMQMUZZBFRJRCOSVGWSKTG");

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
    msg.setTimeStamp(0.907431934649);
    msg.setSource(14374U);
    msg.setSourceEntity(10U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(99U);
    msg.timeout = 58100U;
    msg.lat = 0.304327010009;
    msg.lon = 0.608448811757;
    msg.z = 0.870941093342;
    msg.z_units = 186U;
    msg.speed = 0.518762918756;
    msg.speed_units = 164U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0931442926552;
    tmp_msg_0.y = 0.201969975626;
    tmp_msg_0.z = 0.786216433288;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FYKMGUYTPUAHWHGHTFDRVLSMJRXRVZVDRLADMZFGZPYVCWBIPCBAXDSNBWWQGPFXJUAUJLUACXMZLUDQPNJSKKROSBBAHJTKYWRNEDHJEBEATIOGNCKQAYHRQOP");

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
    msg.setTimeStamp(0.263069724208);
    msg.setSource(13537U);
    msg.setSourceEntity(9U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(215U);
    msg.timeout = 48967U;
    msg.lat = 0.0537336274229;
    msg.lon = 0.462406352615;
    msg.z = 0.135515783355;
    msg.z_units = 121U;
    msg.speed = 0.0992452344787;
    msg.speed_units = 169U;
    msg.custom.assign("IBGDWFBINKNFWZEBZASKMBSZTUTFJIRCLEUGKABCPXHIFHIFNUMUJQRTFARRCFEZRDMJYKEZAQYVLXTJPWTTMWHJTMMJVXQPSMLOMGOISJKUVCKNDWHVEYWYHIUXAPVNMXYCPROLDONDGK");

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
    msg.setTimeStamp(0.0606835467332);
    msg.setSource(3022U);
    msg.setSourceEntity(166U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(133U);
    msg.timeout = 34818U;
    msg.lat = 0.341744674205;
    msg.lon = 0.077319604702;
    msg.z = 0.0127235032172;
    msg.z_units = 221U;
    msg.speed = 0.589409311987;
    msg.speed_units = 64U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.880593711462;
    tmp_msg_0.y = 0.414926712238;
    tmp_msg_0.z = 0.541238229456;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DIAOWTAJPSIAOVAZRPRGFFOMDEJZEXPHLZXPRHUZVSLSEDNLBCNFBKDCRJJVTQZUTLOATSKZUEHHARXOSFHUVIIGYWDEBJRDLYFUJLCNEYJVOIPCNXUVFIXKVFKTKMPQKBIHCBGEKFCMGWMQOHCZBHYLISZAQMNUPXWWHDOMQOSLQBCJSGGQPNESLZGBPYLQMVTSTQRTANYWNRHIOYWDIZF");

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
    msg.setTimeStamp(0.458467429632);
    msg.setSource(51405U);
    msg.setSourceEntity(24U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(254U);
    msg.x = 0.365868790048;
    msg.y = 0.572191435069;
    msg.z = 0.241562165516;

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
    msg.setTimeStamp(0.170767219822);
    msg.setSource(61366U);
    msg.setSourceEntity(246U);
    msg.setDestination(19642U);
    msg.setDestinationEntity(51U);
    msg.x = 0.153366194129;
    msg.y = 0.339627662918;
    msg.z = 0.180439198803;

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
    msg.setTimeStamp(0.84446581067);
    msg.setSource(8229U);
    msg.setSourceEntity(224U);
    msg.setDestination(22978U);
    msg.setDestinationEntity(38U);
    msg.x = 0.793593141773;
    msg.y = 0.360260736983;
    msg.z = 0.760684690023;

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
    msg.setTimeStamp(0.136259403196);
    msg.setSource(39602U);
    msg.setSourceEntity(28U);
    msg.setDestination(12795U);
    msg.setDestinationEntity(214U);
    msg.timeout = 61564U;
    msg.lat = 0.550157214339;
    msg.lon = 0.55940960224;
    msg.z = 0.665286735088;
    msg.z_units = 248U;
    msg.amplitude = 0.284289094018;
    msg.pitch = 0.655369915893;
    msg.speed = 0.0720007433551;
    msg.speed_units = 230U;
    msg.custom.assign("SJRZTBGLJHHNQPYIZCWKBXAHDRUCLHNLGNUURRXTUKNQULCLHZPZQVZCYRWTCRGZGFWMSWZVBJXTHAROSGSAGTXUQTABOOCJSOWDPSUIOTJYVKEJKPEFZGJNSOQPVLBTBGOYYQLKCMQIJMFMSFGPAFMAMNXIGTOMPFDVAKBHFDIEQUYIBRRYYDZLBHIHVPWEWVEWYVEDXVSVXUNTIPXURWNLIECDDOZQNEDCMAAXJEPNKKIJYMFAFEOSFWKCMK");

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
    msg.setTimeStamp(0.000381144051843);
    msg.setSource(22882U);
    msg.setSourceEntity(103U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(86U);
    msg.timeout = 62257U;
    msg.lat = 0.727272485696;
    msg.lon = 0.387383803779;
    msg.z = 0.554654417335;
    msg.z_units = 16U;
    msg.amplitude = 0.236449988742;
    msg.pitch = 0.965841844427;
    msg.speed = 0.727014193917;
    msg.speed_units = 196U;
    msg.custom.assign("LKPMZGMAIKDJXDMBVCPOOIFIXGQZFUDUCOWRGDDLXDQDYJCHBOEZSZJUIYNBWIHSVFEPEIRUQGBFZFHQCTZFCHTBREPSLSXWPSAMWDUYJFEHMRJEYNWTARYXSAAQBYMNRCHPXCBQZMKJJLDEOIRAZWBEFUHIPIFNKVUNOVNUKPRNROCTTLOVUGTQLAKGVKVAVDNJ");

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
    msg.setTimeStamp(0.298134183643);
    msg.setSource(46275U);
    msg.setSourceEntity(235U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(90U);
    msg.timeout = 60967U;
    msg.lat = 0.628461090379;
    msg.lon = 0.0897852787771;
    msg.z = 0.19266342773;
    msg.z_units = 208U;
    msg.amplitude = 0.229481724369;
    msg.pitch = 0.0734330508697;
    msg.speed = 0.888890239926;
    msg.speed_units = 189U;
    msg.custom.assign("RMNLVHQFKMIQFERWLVEJAFQDTPYLKTSLYYQBCPOUZKHHQXNPWAXWIYRQZGJCHIKGJOAWCGGZIRWTJRXDBLSDVQGFPXEFGWBZHDHMUNGKBECPXCLNOCPAKTEROOPZLUITFVUKDNJGAASSMEAUMPSTJDBUOCTQOLXIZDMDLSFCIYGUSVIYBFYVVN");

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
    msg.setTimeStamp(0.646612980505);
    msg.setSource(9274U);
    msg.setSourceEntity(210U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.66170167621);
    msg.setSource(17577U);
    msg.setSourceEntity(34U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.980600788389);
    msg.setSource(32595U);
    msg.setSourceEntity(50U);
    msg.setDestination(59278U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.0250414767634);
    msg.setSource(65110U);
    msg.setSourceEntity(100U);
    msg.setDestination(39464U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.190140228963;
    msg.lon = 0.19001973896;
    msg.z = 0.198005750162;
    msg.z_units = 196U;
    msg.radius = 0.49091830062;
    msg.duration = 36811U;
    msg.speed = 0.138090168897;
    msg.speed_units = 132U;
    msg.custom.assign("MMUNPWTZQBPQDB");

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
    msg.setTimeStamp(0.744742837151);
    msg.setSource(3666U);
    msg.setSourceEntity(208U);
    msg.setDestination(17457U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.303095452467;
    msg.lon = 0.539013713227;
    msg.z = 0.381466918328;
    msg.z_units = 143U;
    msg.radius = 0.332124637944;
    msg.duration = 37831U;
    msg.speed = 0.0486432235078;
    msg.speed_units = 12U;
    msg.custom.assign("DFCOIGJRQFJATNNDOFRCYQTTOBRKCGYDOSWYXPQMBXPUUSHACKOAEPKDFVRXRWYPWVOTPZQTMMBUZWEEMKKIMNGRNAAOGWSVIIPXHEH");

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
    msg.setTimeStamp(0.00530463304078);
    msg.setSource(18055U);
    msg.setSourceEntity(208U);
    msg.setDestination(2259U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.389115263248;
    msg.lon = 0.184931919981;
    msg.z = 0.0443865352417;
    msg.z_units = 58U;
    msg.radius = 0.283845886665;
    msg.duration = 14204U;
    msg.speed = 0.378685180875;
    msg.speed_units = 175U;
    msg.custom.assign("JMJRBRPNWACWLRHZUGQJEZWJZSVUIURYGYZAYOWKLBYKQIBPKPIHCPIDFOACBYHBIBXLSBVMLRQNFTEWCNMJDDUZFHKGSAUZSIMUKHPGSZGAQMOOYPHBKHLOJUDVCPXGTVPFKXOTE");

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
    msg.setTimeStamp(0.827001921761);
    msg.setSource(60865U);
    msg.setSourceEntity(114U);
    msg.setDestination(19708U);
    msg.setDestinationEntity(207U);
    msg.timeout = 64530U;
    msg.flags = 251U;
    msg.lat = 0.139746758832;
    msg.lon = 0.571601276986;
    msg.start_z = 0.73934627007;
    msg.start_z_units = 151U;
    msg.end_z = 0.249126768474;
    msg.end_z_units = 30U;
    msg.radius = 0.32687301379;
    msg.speed = 0.0667293737173;
    msg.speed_units = 231U;
    msg.custom.assign("WYZYFZVSCTMPVDUPTJNGGDVASUUELXGGDYAFZSRUAHMOXHCPGQLNLNYLITXATKOOSWJUZNRWNMJWDCMKYVOCBLKIQDXINQUTVOYJNJH");

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
    msg.setTimeStamp(0.726250959697);
    msg.setSource(43835U);
    msg.setSourceEntity(157U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(27U);
    msg.timeout = 16155U;
    msg.flags = 50U;
    msg.lat = 0.597699981257;
    msg.lon = 0.473631933175;
    msg.start_z = 0.560297415823;
    msg.start_z_units = 154U;
    msg.end_z = 0.707708483386;
    msg.end_z_units = 104U;
    msg.radius = 0.328664270189;
    msg.speed = 0.837262334172;
    msg.speed_units = 247U;
    msg.custom.assign("TKCOESXKFMLHENKUQXANTODGDCEDKAQLNQXSJVHBZQNWZWBZOMOSGDYBJEPCLWTIQROAQYXTDMFRAHDATXPVSUYMIBBDFGTIHZJWUMIAYQHRFUKYLQYOAXVAOHMSVCWWVHOVBKEBCWMXUXSUMRFDWFVRHLERDYEGXURNRBKNE");

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
    msg.setTimeStamp(0.839114414979);
    msg.setSource(20652U);
    msg.setSourceEntity(52U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(163U);
    msg.timeout = 30918U;
    msg.flags = 112U;
    msg.lat = 0.986850666285;
    msg.lon = 0.173885618995;
    msg.start_z = 0.399009893749;
    msg.start_z_units = 169U;
    msg.end_z = 0.738535078303;
    msg.end_z_units = 125U;
    msg.radius = 0.399345476876;
    msg.speed = 0.243531037554;
    msg.speed_units = 69U;
    msg.custom.assign("IQGOVQVWHMUACXRYYQJMLVQMBUZITOHSZOX");

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
    msg.setTimeStamp(0.045247759244);
    msg.setSource(32994U);
    msg.setSourceEntity(13U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(140U);
    msg.timeout = 40083U;
    msg.lat = 0.545850186094;
    msg.lon = 0.350307176988;
    msg.z = 0.377457835232;
    msg.z_units = 211U;
    msg.speed = 0.632386315204;
    msg.speed_units = 11U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.411879647266;
    tmp_msg_0.y = 0.626995362067;
    tmp_msg_0.z = 0.872723230237;
    tmp_msg_0.t = 0.0900638863;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HTVSVOPEVBNXJGSFNCLENNTBQYIHBJPOLWZRZWHMFBFHIXNBEKPSFWOIJIRDVRKZEJIUJNDWDNJCYNRCIXKJVSGFSUQDLXZBABRMTZFWXASIOUMLYMVVHRSUCDAOKACMPQFTAPWZGLQHNLCYUD");

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
    msg.setTimeStamp(0.659511393703);
    msg.setSource(32035U);
    msg.setSourceEntity(65U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(71U);
    msg.timeout = 18715U;
    msg.lat = 0.328558703403;
    msg.lon = 0.893518673437;
    msg.z = 0.284469876518;
    msg.z_units = 159U;
    msg.speed = 0.0127208056404;
    msg.speed_units = 210U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.296835937612;
    tmp_msg_0.y = 0.922217786268;
    tmp_msg_0.z = 0.641993625411;
    tmp_msg_0.t = 0.370270344509;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CFWYZQLHCRPNGVZVAKNBZXQRJOMMKFWLGZCDJJQAFEWDOAFZPTEJFHRBFZPHTSRSOKAITLDVYAMXUIXLZKTBNKLGAGDFQCXLDHMWOLPPXBNOREKFKBVTMGUJEYKDPONYSCRAZOINIWNJ");

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
    msg.setTimeStamp(0.100067269993);
    msg.setSource(6567U);
    msg.setSourceEntity(60U);
    msg.setDestination(41846U);
    msg.setDestinationEntity(110U);
    msg.timeout = 48493U;
    msg.lat = 0.867660258864;
    msg.lon = 0.401917574104;
    msg.z = 0.720120416267;
    msg.z_units = 19U;
    msg.speed = 0.531304777389;
    msg.speed_units = 189U;
    msg.custom.assign("GQKLXHXCGVDJIWYSSIJJVRUZQMWKUBRZBDITCRVFMOBXHEUMQODGJIAWDWCWTYEYSXFXAUVFZJNKVNZWTPDFTOOFGEPQRTLQASBPLUNIUNTUKZATGWIBBTKLVPODVSSYJXJMQUQGYHMRIEKOEZDGSWLLCABHHTSODLCNPIMJZXQPCNLKIBJLWNYOMCRRBEEKGAXHDFHM");

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
    msg.setTimeStamp(0.969960862292);
    msg.setSource(34351U);
    msg.setSourceEntity(40U);
    msg.setDestination(14425U);
    msg.setDestinationEntity(7U);
    msg.x = 0.351850274504;
    msg.y = 0.353021414081;
    msg.z = 0.00552012879669;
    msg.t = 0.900303515761;

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
    msg.setTimeStamp(0.802405456318);
    msg.setSource(27506U);
    msg.setSourceEntity(109U);
    msg.setDestination(41673U);
    msg.setDestinationEntity(106U);
    msg.x = 0.475480409433;
    msg.y = 0.81089596148;
    msg.z = 0.370443205492;
    msg.t = 0.0362999811706;

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
    msg.setTimeStamp(0.748198952126);
    msg.setSource(47745U);
    msg.setSourceEntity(37U);
    msg.setDestination(46507U);
    msg.setDestinationEntity(128U);
    msg.x = 0.601589118896;
    msg.y = 0.173118550524;
    msg.z = 0.873896145587;
    msg.t = 0.522099827238;

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
    msg.setTimeStamp(0.340468938635);
    msg.setSource(30081U);
    msg.setSourceEntity(161U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(148U);
    msg.timeout = 21885U;
    msg.name.assign("BJNCKAEHJJTAKRIYZK");
    msg.custom.assign("ICIHGHAZUJRQUXNDMCFRLZNRETXWBQHXZXOSDNVYDMNJOVWKNUGWSIMKDBVZCQUQMRKZBEZZEJEPUMMVKYHOPNLYKWQKZPOBFAVFXCFRJAHANBXTSVGRBWNYSSYQGTTGMKACPITXEFBEXQIUPESGOUBPVHPORUYPYAPVELDGTDCNEOAUWMOPGOXACIQTYSFTAQJICFZBORKLHRFLLSTXHDKGWSBYMDJNRHWZKICEFGIUTLWDJLCWMHDVLF");

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
    msg.setTimeStamp(0.833910260728);
    msg.setSource(15880U);
    msg.setSourceEntity(250U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(43U);
    msg.timeout = 58730U;
    msg.name.assign("WOODSRNEYLMAPHEGRAPKHNHJDTZNYPOUQQWVTHRWEWAISXXFHSWABLLGPFETAMIUQGYCSOZBFABIMJLTTDLKUAMYJZNAPBW");
    msg.custom.assign("TCFMWKARISNJFGFDXPWYKBPENZWUGLWMNHPBJVKEIOFNURLEPXQKGZVODHTMHILVQTOJPYDLDZMSBHYLZPZIXUJOFWMYNAAULOYYTVISEFLYJHBSJOYMACCJLQIDPAXIIGHQHWENHVKFPRGRXTCVSUKCDQILVVREONZELTSKGXEFYFDAUOCZCSNUBJURCQQSXDYUKDHACTGBTBWAQJASWZMVXZREJIGDBXVPBTRAMRWHBS");

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
    msg.setTimeStamp(0.359089768788);
    msg.setSource(38120U);
    msg.setSourceEntity(80U);
    msg.setDestination(51140U);
    msg.setDestinationEntity(119U);
    msg.timeout = 65125U;
    msg.name.assign("JNXOGQTIYLKYETGYRZYUNNX");
    msg.custom.assign("AVWCXQCRYLTJTMDXDIFZUUDJXNBUJPZOJKULSGVFBFBPEPEKJYPYLHACIZGQRG");

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
    msg.setTimeStamp(0.531396474622);
    msg.setSource(27380U);
    msg.setSourceEntity(184U);
    msg.setDestination(44712U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.202550337928;
    msg.lon = 0.34964849289;
    msg.z = 0.135849748301;
    msg.z_units = 49U;
    msg.speed = 0.275328473284;
    msg.speed_units = 112U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.221522702511;
    tmp_msg_0.y = 0.296809242292;
    tmp_msg_0.z = 0.631329389601;
    tmp_msg_0.t = 0.672311442847;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 60003U;
    tmp_msg_1.off_x = 0.145451113379;
    tmp_msg_1.off_y = 0.977732703983;
    tmp_msg_1.off_z = 0.617945327473;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.583944808078;
    msg.custom.assign("COFMOVFIBGXGKOZFUWNDJYDGGHYIUWBWTOFFNRIHLAOPKBDRXQNACQDQXRZFGDYVZOIAMQYLSW");

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
    msg.setTimeStamp(0.722728760972);
    msg.setSource(37638U);
    msg.setSourceEntity(28U);
    msg.setDestination(9360U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.492509057541;
    msg.lon = 0.340476587677;
    msg.z = 0.514437105394;
    msg.z_units = 236U;
    msg.speed = 0.288139176192;
    msg.speed_units = 160U;
    msg.start_time = 0.205438674645;
    msg.custom.assign("IUNNHCHLTFSTWHSGDDBJCMFFBFRAJQYWSQJDTNCTROXGK");

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
    msg.setTimeStamp(0.128843333925);
    msg.setSource(56911U);
    msg.setSourceEntity(143U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.596689608764;
    msg.lon = 0.164192198034;
    msg.z = 0.576440095734;
    msg.z_units = 142U;
    msg.speed = 0.461382473269;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.929062494232;
    tmp_msg_0.y = 0.272124086993;
    tmp_msg_0.z = 0.957440753685;
    tmp_msg_0.t = 0.925218424014;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 50956U;
    tmp_msg_1.off_x = 0.805191291736;
    tmp_msg_1.off_y = 0.303317920052;
    tmp_msg_1.off_z = 0.618514387794;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.218655267492;
    msg.custom.assign("OOLGSLBMSZORICBRUUJFXFEJJQSTXEHBMQZITDVBTIHXXABWWPYYZMEXZUYMZBPLSLKESYKQDTAMEDIRUVJF");

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
    msg.setTimeStamp(0.593544515906);
    msg.setSource(32087U);
    msg.setSourceEntity(243U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(167U);
    msg.vid = 32929U;
    msg.off_x = 0.152952339475;
    msg.off_y = 0.58875096633;
    msg.off_z = 0.484711376023;

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
    msg.setTimeStamp(0.949758356352);
    msg.setSource(20248U);
    msg.setSourceEntity(137U);
    msg.setDestination(34728U);
    msg.setDestinationEntity(198U);
    msg.vid = 41502U;
    msg.off_x = 0.598681155802;
    msg.off_y = 0.70615623505;
    msg.off_z = 0.603978838684;

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
    msg.setTimeStamp(0.13912968728);
    msg.setSource(852U);
    msg.setSourceEntity(103U);
    msg.setDestination(64134U);
    msg.setDestinationEntity(26U);
    msg.vid = 18460U;
    msg.off_x = 0.554905045579;
    msg.off_y = 0.438016086301;
    msg.off_z = 0.306666919204;

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
    msg.setTimeStamp(0.390326015375);
    msg.setSource(20490U);
    msg.setSourceEntity(241U);
    msg.setDestination(36368U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.676249184614);
    msg.setSource(51015U);
    msg.setSourceEntity(69U);
    msg.setDestination(28146U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.909087301608);
    msg.setSource(37356U);
    msg.setSourceEntity(189U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.114662775189);
    msg.setSource(3806U);
    msg.setSourceEntity(230U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(97U);
    msg.mid = 40649U;

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
    msg.setTimeStamp(0.833195205889);
    msg.setSource(63164U);
    msg.setSourceEntity(189U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(152U);
    msg.mid = 8442U;

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
    msg.setTimeStamp(0.478245576149);
    msg.setSource(8292U);
    msg.setSourceEntity(201U);
    msg.setDestination(53185U);
    msg.setDestinationEntity(78U);
    msg.mid = 54254U;

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
    msg.setTimeStamp(0.931312818215);
    msg.setSource(10196U);
    msg.setSourceEntity(90U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(29U);
    msg.state = 36U;
    msg.eta = 54939U;
    msg.info.assign("EEARPETTHLMQYJPAAQCXIBJGYVFWOVJDZCXMBWMRNYUISGWIFKAJZVSGMQGDDSCALLCNLPTUDBPWCOTBLHOICKZAXQ");

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
    msg.setTimeStamp(0.241174119788);
    msg.setSource(23498U);
    msg.setSourceEntity(146U);
    msg.setDestination(14541U);
    msg.setDestinationEntity(113U);
    msg.state = 27U;
    msg.eta = 44255U;
    msg.info.assign("CBKWKAHENHAHXNQERAKOWBUBTQYYFIWHIUGMWXZAFLCGLOZSKNVXJIDDULKAHDBWPVXPHPZLUZDXVMTIHIOQGLBVVNQCPBUKEZMYPFBWPEJUFCZDDENCBLOBRAZTRESXGIEVCNRPHQLCXDTQNFXRJTNIJCKPMOVWOQG");

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
    msg.setTimeStamp(0.572675525753);
    msg.setSource(36116U);
    msg.setSourceEntity(116U);
    msg.setDestination(4591U);
    msg.setDestinationEntity(192U);
    msg.state = 97U;
    msg.eta = 1004U;
    msg.info.assign("PNXTAGYHKYRAFSGKLPAVJWGBECUVEOVWITULLYFWNJSCXHZUQBSWMEQTBJTFKPUVYQRYVRCDGNDQDHBYUIJOXPDOJEHIUHPYFEDFLOLOLTLBSDXYCYOXESMUWQSWHZGMXULISNUGIRBOAZCCERZZPRQDAQGANLQBVCMEWVNXRTFACCH");

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
    msg.setTimeStamp(0.876453519331);
    msg.setSource(12680U);
    msg.setSourceEntity(241U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(1U);
    msg.system = 26467U;
    msg.duration = 13351U;
    msg.speed = 0.643379455293;
    msg.speed_units = 143U;
    msg.x = 0.683902646105;
    msg.y = 0.186798063019;
    msg.z = 0.867417408512;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.998637435958);
    msg.setSource(60916U);
    msg.setSourceEntity(79U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(131U);
    msg.system = 25058U;
    msg.duration = 8680U;
    msg.speed = 0.583523004699;
    msg.speed_units = 143U;
    msg.x = 0.879756577761;
    msg.y = 0.92129569552;
    msg.z = 0.373271713401;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.814740836914);
    msg.setSource(22094U);
    msg.setSourceEntity(198U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(98U);
    msg.system = 38429U;
    msg.duration = 33878U;
    msg.speed = 0.397603599634;
    msg.speed_units = 31U;
    msg.x = 0.502509568673;
    msg.y = 0.184157949005;
    msg.z = 0.619627926666;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.0652799233913);
    msg.setSource(11920U);
    msg.setSourceEntity(151U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.525514599449;
    msg.lon = 0.758495469257;
    msg.speed = 0.646923058372;
    msg.speed_units = 57U;
    msg.duration = 15130U;
    msg.sys_a = 12740U;
    msg.sys_b = 18284U;
    msg.move_threshold = 0.547307181821;

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
    msg.setTimeStamp(0.793949787329);
    msg.setSource(63319U);
    msg.setSourceEntity(234U);
    msg.setDestination(24856U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.972872659139;
    msg.lon = 0.118971392927;
    msg.speed = 0.924905821955;
    msg.speed_units = 140U;
    msg.duration = 17510U;
    msg.sys_a = 22209U;
    msg.sys_b = 23925U;
    msg.move_threshold = 0.730736599106;

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
    msg.setTimeStamp(0.955165352437);
    msg.setSource(53603U);
    msg.setSourceEntity(92U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.487229308329;
    msg.lon = 0.689747271444;
    msg.speed = 0.629720175751;
    msg.speed_units = 20U;
    msg.duration = 52304U;
    msg.sys_a = 1633U;
    msg.sys_b = 58262U;
    msg.move_threshold = 0.295603586638;

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
    msg.setTimeStamp(0.301093831525);
    msg.setSource(48921U);
    msg.setSourceEntity(99U);
    msg.setDestination(59275U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.173522818404;
    msg.lon = 0.00746374384897;
    msg.z = 0.364297163293;
    msg.z_units = 84U;
    msg.speed = 0.525844886033;
    msg.speed_units = 117U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.125340052628;
    tmp_msg_0.lon = 0.471390852476;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FTCANOVQTDIJOZGJFYPSTZJRQGDLKIWBLDEOZYZYUUIQFBJDYLCPQHLHHBGQNDAVFXKPCOECPQFMBLAGJHSHVNXKMJZXHSIXNLSUXCHTULSXLKUFACWTAWVMGESJNLYFOTQUVPNRFRBQXEANCPEBJAYDUSTOCEOHKORUKWQWERSMMGZEHVVDBMRAYT");

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
    msg.setTimeStamp(0.595084088146);
    msg.setSource(22311U);
    msg.setSourceEntity(8U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.652084734089;
    msg.lon = 0.0762648151645;
    msg.z = 0.263848723415;
    msg.z_units = 84U;
    msg.speed = 0.558928151827;
    msg.speed_units = 30U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.408205826266;
    tmp_msg_0.lon = 0.851589542116;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BCRKMAVQLCGZJRPENGQAUIFVMGNUFUNWXHETWEMTRJJBUALIBQPDBYNPRIWHOBIKSEZSPRDDNFTCUOXCUZFXZAXWHVJOJJVLNKOLUNFEMFYBSOAGWQRWNVFVXOSQNOETIDHNTPHMZEMMKFCAEAXCLHGLHPKHQLSRDMYEPGQKSSPJFBDWDWWUOMLYKEGTRAQCYZYIGTYKZDSVXYAVOIBJTHDGQXFZLUVPAKGQBYYPKSIUJXHJXBTTZIWRRCMS");

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
    msg.setTimeStamp(0.203991800548);
    msg.setSource(10332U);
    msg.setSourceEntity(192U);
    msg.setDestination(38569U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.202630396569;
    msg.lon = 0.673112551541;
    msg.z = 0.0530946145401;
    msg.z_units = 51U;
    msg.speed = 0.724828482721;
    msg.speed_units = 53U;
    msg.custom.assign("QMOJLKMRMBRF");

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
    msg.setTimeStamp(0.409938085082);
    msg.setSource(1703U);
    msg.setSourceEntity(113U);
    msg.setDestination(42416U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.903454595123;
    msg.lon = 0.440806593431;

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
    msg.setTimeStamp(0.584689279859);
    msg.setSource(41459U);
    msg.setSourceEntity(51U);
    msg.setDestination(15276U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.559609408391;
    msg.lon = 0.189669712424;

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
    msg.setTimeStamp(0.371315752498);
    msg.setSource(27602U);
    msg.setSourceEntity(227U);
    msg.setDestination(29875U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.451486947777;
    msg.lon = 0.193304854878;

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
    msg.setTimeStamp(0.672640904463);
    msg.setSource(40289U);
    msg.setSourceEntity(203U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(224U);
    msg.timeout = 57294U;
    msg.lat = 0.032395505622;
    msg.lon = 0.696820957798;
    msg.z = 0.92176617591;
    msg.z_units = 88U;
    msg.pitch = 0.12533513037;
    msg.amplitude = 0.205465560635;
    msg.duration = 59254U;
    msg.speed = 0.344036917307;
    msg.speed_units = 220U;
    msg.radius = 0.465191826623;
    msg.direction = 118U;
    msg.custom.assign("CNLNOCZPDROVYGWRBWMSNHUATBHLHPUKVVOHYMZASIFAUIKRAHTXKCWWGNPEFQTDPFIBAJVDHAIJBQBZTFVRQRVJHTQRQIFKRDCKXSIUFWXZSPSSXZNHBMWKDYRMWWAZMDVYQXFYTXXVUCPFLDOEZZTYEQEBIEPNOLYLPTXOXLKMGOGQXTWPSNDSNEOFLLJCSWPIKYCFVEROUZLJCNVMBGYAZQDCGUGEMR");

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
    msg.setTimeStamp(0.456313907678);
    msg.setSource(34172U);
    msg.setSourceEntity(63U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(214U);
    msg.timeout = 41246U;
    msg.lat = 0.798374897774;
    msg.lon = 0.0245251124847;
    msg.z = 0.245299463275;
    msg.z_units = 170U;
    msg.pitch = 0.295901827882;
    msg.amplitude = 0.639817888481;
    msg.duration = 21242U;
    msg.speed = 0.422388386375;
    msg.speed_units = 141U;
    msg.radius = 0.203109722657;
    msg.direction = 57U;
    msg.custom.assign("CYSCPXGLVVTOQQGINXJRRPTFCPNLRDPGMIDD");

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
    msg.setTimeStamp(0.404994037138);
    msg.setSource(24383U);
    msg.setSourceEntity(247U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(219U);
    msg.timeout = 42905U;
    msg.lat = 0.621448377515;
    msg.lon = 0.255131469872;
    msg.z = 0.0431849569861;
    msg.z_units = 56U;
    msg.pitch = 0.130119111362;
    msg.amplitude = 0.281501206998;
    msg.duration = 37383U;
    msg.speed = 0.733266892556;
    msg.speed_units = 59U;
    msg.radius = 0.393810947135;
    msg.direction = 127U;
    msg.custom.assign("MAYVQMWUMOYQREJYSLTJLZUZRNCINOHRNQEWXVBOZVTBTX");

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
    msg.setTimeStamp(0.628669651663);
    msg.setSource(3355U);
    msg.setSourceEntity(202U);
    msg.setDestination(22175U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("ASOUXJIMRTDAOCRCBSVINHXQDGKAIHUCLFBTPNDEBUJHHQATECUVUYVTTVED");
    msg.reference_frame = 153U;
    msg.custom.assign("LYXZRSUWBOINFCMFNAMJCHYEBKAMZXIJAPYHQXEAPZQULNBPKZUACFKSXZQMRELVZTJRYKSTWOBIYDGVLJCGKLHJOFPDZAAYGFIQXSQRVOBLESTKKMKYMXUCIIPHAWWBCGZBDDRSPEVZKVINWVNT");

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
    msg.setTimeStamp(0.72235469533);
    msg.setSource(37931U);
    msg.setSourceEntity(34U);
    msg.setDestination(20684U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("NXVGOBIDCUEQFITOCRVJWUYEDYCQHYFYLOKGRANRXQILGICHTSBLNXDNJQSTSPHBLVRVMFFOBIEOWNSQDTAEABHOKRMIHUIVUISGBGLRHZIQPIPMSLLG");
    msg.reference_frame = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29514U;
    tmp_msg_0.off_x = 0.993862502924;
    tmp_msg_0.off_y = 0.656205282381;
    tmp_msg_0.off_z = 0.788312167919;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RPNPUVAJUBGPDPJCLCFNHXSDYFXPABGIQZFETYOTUDSFAJWYCBNUFCBWVUJQGRAZZFDEANEOXSIORYUHUJZTFKWBMRLMQLZMAOQTTLSLVSIEFZOKZQRDUTMYMJSOEWDKVVYMHKIFTWGPYEGIBCIQAQTYEFXISAOMQBMIPWXSPETQLHDCDIWXJVXPRAZMHLB");

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
    msg.setTimeStamp(0.357736415807);
    msg.setSource(13985U);
    msg.setSourceEntity(3U);
    msg.setDestination(47925U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("ZKRUXUZEYNCFMNQGPCHNDNHPNXVYYYGAROWCBTQTSOIMVWRLZOWGWUAHEDYTQZSDIYRHACMEMXRKMGMISPNALJJJHDQLEOFIUZFCZLFOMQSE");
    msg.reference_frame = 5U;
    msg.custom.assign("YULSTBLCHWFRFJQSPMLJAWSICINDAJUMYGUXJUUNZJOMJFLMQNPTDWCJLOCDPGYRBVYYFWOCNXZVAJHOPDGMSBXSSERKKZDGVETMEVISQFAHFUUPCMUHAWFYKOSWVPPYQQHTTMDZKAXTOWPGQSNVWJELBTZIXDVDMZOUDXRIXHBZTOOXWRKRBIDQALRKEIFOLZAXNEGEYFQRCIGRUYPGGKZXJBPZIHCKVNKSREHEIGWACQHBNTNFB");

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
    msg.setTimeStamp(0.946830008714);
    msg.setSource(8751U);
    msg.setSourceEntity(144U);
    msg.setDestination(30861U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("AWIGMWEQDYDKGCNRAXTUMDHUKFRVJIESKUSQYEVLVXNCUUOVJMLZCFHBUPZSZPSYLZIWXBHFTBRGXOJEIYXXO");
    msg.formation_name.assign("WJHQCWZMRKHEGRUZJAGFRSLHZBLSTROGSWWYBQMMUKBGDKAMIGNBZKCY");
    msg.plan_id.assign("WRSKNDFGUNISHCICNYQERAEEVPUBOPRTCIFKOYZPDGPGUJGZOSDNKXTDETSYWSRUQCAZACATBRLYWAEVBJ");
    msg.description.assign("MQCCSLGJOBRESXFDPQWLTGPHTUSHXEONDOVGGSVCWTYSW");
    msg.leader_speed = 0.445159269055;
    msg.leader_bank_lim = 0.14551816396;
    msg.pos_sim_err_lim = 0.184005780259;
    msg.pos_sim_err_wrn = 0.0225854499186;
    msg.pos_sim_err_timeout = 44518U;
    msg.converg_max = 0.079831524104;
    msg.converg_timeout = 30420U;
    msg.comms_timeout = 18494U;
    msg.turb_lim = 0.906990246558;
    msg.custom.assign("UCBGGGUZZMLRRKPYEMVSHDTVFPYCZOGFIFBGDTZUWSCYOERXXWAUODCQGMMKDENYHJNDHIWQXFTHD");

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
    msg.setTimeStamp(0.813768926775);
    msg.setSource(26563U);
    msg.setSourceEntity(48U);
    msg.setDestination(18627U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("IYCOMEXYCPDUQFDLNRAFLZCODFUQPJETXTNESJRONEGSQKRLQIDMPOAKVWDSKVS");
    msg.formation_name.assign("QQDIFWOEXAGTLOLJGWPDUUOVWYEHRUHGGNOJSZEUFKEBFNSQIFWRMNHBHBBSULPKJGCURYQORXWHLIYHISPXXRMVCCFYAVCLCKXNQDJPOZAPNJVRZTHMJHA");
    msg.plan_id.assign("QHQDLCYJWGSFRPLWCDNQFTOOJXTUEZFGGREUWJTZUSDQAKBWIN");
    msg.description.assign("DBZYWJYMIWFKVFSMAJVNUUEDKXTNLHIFTUJNLLAIAXGZEBXPMMWFBXRJJXGUDJYDGQOZYQJCVZTREICNVGVPKVTTDWOFVKGUKYBUDKOJGQSMOSACBZRSIVYDHOSMKLGTLKFQ");
    msg.leader_speed = 0.792216833271;
    msg.leader_bank_lim = 0.381063209746;
    msg.pos_sim_err_lim = 0.922449697625;
    msg.pos_sim_err_wrn = 0.567918964144;
    msg.pos_sim_err_timeout = 32437U;
    msg.converg_max = 0.847662232516;
    msg.converg_timeout = 64310U;
    msg.comms_timeout = 6748U;
    msg.turb_lim = 0.836538476519;
    msg.custom.assign("HGEYVVLQQKDHZOBQDBCIHBSUHXVTJXKAQZICWSMBSRUXNIOUINUVVNUCRYYCAECJMVIDPOFAAELFWZNCIJEBCLDSTZIWCPVEGRERRCUSPNKPSUMGFSGJKJSOWPLMWVTWALOLKDJNSY");

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
    msg.setTimeStamp(0.618641945444);
    msg.setSource(29838U);
    msg.setSourceEntity(85U);
    msg.setDestination(44802U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("KZIPJEJECWBQKDSSHSYYDDWZBLPKFKQLFZKTWAOHJQRNOFGTWZBKLGZZYAIPFXEMXMMTVLDTQYNHDIHVVTUNOXBKLZNXHONXMIIGGRPWZSWJMMUUXVXUXDAHRYGCASRABWREQCCLNRSFKBXWQSAGMYKMUGYQVSHWEIHVJWOLDMNPYKOPEBPHATVNCINOPUFGBJVTFETAXBRSURNIQSOLQGJDJIJAVUYTFVDMBCOFYDGZQCLACPPLECHR");
    msg.formation_name.assign("AQXCVWUZKXVPYFCROSAYDXHJQINNZJMCPSAIKVVKXNUZYTJFXGUYVCEKQUPAKXMCFZRWG");
    msg.plan_id.assign("TSLVSOIMPGWUWSZKLEWVLQRUJJOSNKUCYKGAOZOYAPENFLTJFEMXSBRPWPSEAJSXAONIUNIXQIFOFZHULJPLHIPGYXZBWGNWYCRQKCROMNVHBSTQEDJLCXGBSTLAGLNZDQHGIMQBDPCC");
    msg.description.assign("MJAFCOMLBSFZJCSVKUWBXVPFYYHQHLUZXMRYUGZXBWINMWTCMRAGDWPTABANOQHLETCADHNYSYGCNHTGMWHIQHJEXOOQDMLSIERAZGIZDUNFYSBUVCVVHMDPEIXUDEQSAIKRTTWJPPUIFAAVQTMMEYQJGWENBKILKRGYAFVTDEHDKBXRQZJFDXIFPSVJQXPUKVLNOEWNTXCKE");
    msg.leader_speed = 0.0890226943993;
    msg.leader_bank_lim = 0.875974698828;
    msg.pos_sim_err_lim = 0.902751024292;
    msg.pos_sim_err_wrn = 0.727858870805;
    msg.pos_sim_err_timeout = 61724U;
    msg.converg_max = 0.0827080247418;
    msg.converg_timeout = 51076U;
    msg.comms_timeout = 63928U;
    msg.turb_lim = 0.405776459678;
    msg.custom.assign("EQORSZNSMKPAXENGXLVPDCCJAMAHBCBVKXOSYSXMMWELTHUZQWITHMBTWIXFHPRTSJRIZWTXAJERSGJCWXOVACFBYOZYLNEQYPXGVMBGGDVCLJUFVMDDRSCBNAFBBPJCDQRCKZKRZUHAZEUNNQWMFHTPNUWJVGZQPLL");

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
    msg.setTimeStamp(0.442969267078);
    msg.setSource(13010U);
    msg.setSourceEntity(15U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(209U);
    msg.control_src = 2750U;
    msg.control_ent = 38U;
    msg.timeout = 0.0846518666597;
    msg.loiter_radius = 0.449432173573;
    msg.altitude_interval = 0.0858189961313;

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
    msg.setTimeStamp(0.0216011542987);
    msg.setSource(34467U);
    msg.setSourceEntity(132U);
    msg.setDestination(25966U);
    msg.setDestinationEntity(194U);
    msg.control_src = 61539U;
    msg.control_ent = 217U;
    msg.timeout = 0.176963911861;
    msg.loiter_radius = 0.272702724011;
    msg.altitude_interval = 0.454375071978;

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
    msg.setTimeStamp(0.51896045402);
    msg.setSource(56550U);
    msg.setSourceEntity(253U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(80U);
    msg.control_src = 61833U;
    msg.control_ent = 251U;
    msg.timeout = 0.794378154092;
    msg.loiter_radius = 0.0172103061488;
    msg.altitude_interval = 0.745252121824;

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
    msg.setTimeStamp(0.372942551965);
    msg.setSource(43235U);
    msg.setSourceEntity(22U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(205U);
    msg.flags = 12U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.763618017361;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.177361058529;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.720802064617;
    msg.lon = 0.423349240777;
    msg.radius = 0.791955029915;

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
    msg.setTimeStamp(0.613697320013);
    msg.setSource(6364U);
    msg.setSourceEntity(106U);
    msg.setDestination(45624U);
    msg.setDestinationEntity(38U);
    msg.flags = 250U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.111832919058;
    tmp_msg_0.speed_units = 69U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.478082209432;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.344444431535;
    msg.lon = 0.255932012331;
    msg.radius = 0.587981289332;

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
    msg.setTimeStamp(0.223543990627);
    msg.setSource(54732U);
    msg.setSourceEntity(23U);
    msg.setDestination(51452U);
    msg.setDestinationEntity(71U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0850097065326;
    tmp_msg_0.speed_units = 131U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.974397070231;
    tmp_msg_1.z_units = 207U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.333534114622;
    msg.lon = 0.467455386886;
    msg.radius = 0.45667888958;

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
    msg.setTimeStamp(0.498464393632);
    msg.setSource(63917U);
    msg.setSourceEntity(64U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(124U);
    msg.control_src = 31960U;
    msg.control_ent = 139U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49402147713;
    tmp_tmp_msg_0_0.speed_units = 168U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.275921506115;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.902542322203;
    tmp_msg_0.lon = 0.946676366497;
    tmp_msg_0.radius = 0.272337640607;
    msg.reference.set(tmp_msg_0);
    msg.state = 17U;
    msg.proximity = 156U;

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
    msg.setTimeStamp(0.469163526548);
    msg.setSource(33972U);
    msg.setSourceEntity(247U);
    msg.setDestination(4912U);
    msg.setDestinationEntity(102U);
    msg.control_src = 27659U;
    msg.control_ent = 210U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.871318938839;
    tmp_tmp_msg_0_0.speed_units = 227U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.129954077918;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.456002150738;
    tmp_msg_0.lon = 0.389089239331;
    tmp_msg_0.radius = 0.683228188264;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 64U;

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
    msg.setTimeStamp(0.769343121347);
    msg.setSource(58001U);
    msg.setSourceEntity(190U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(217U);
    msg.control_src = 47336U;
    msg.control_ent = 111U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.616112015018;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.665891917814;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.000663575972992;
    tmp_msg_0.lon = 0.804995642967;
    tmp_msg_0.radius = 0.234748529751;
    msg.reference.set(tmp_msg_0);
    msg.state = 7U;
    msg.proximity = 96U;

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
    msg.setTimeStamp(0.00289552119094);
    msg.setSource(42222U);
    msg.setSourceEntity(241U);
    msg.setDestination(11838U);
    msg.setDestinationEntity(222U);
    msg.ax_cmd = 0.551005044222;
    msg.ay_cmd = 0.642163706219;
    msg.az_cmd = 0.0359336988569;
    msg.ax_des = 0.982115236253;
    msg.ay_des = 0.337650276981;
    msg.az_des = 0.771615224123;
    msg.virt_err_x = 0.669264171269;
    msg.virt_err_y = 0.147269072501;
    msg.virt_err_z = 0.451521232936;
    msg.surf_fdbk_x = 0.620444815184;
    msg.surf_fdbk_y = 0.673695675;
    msg.surf_fdbk_z = 0.569124908889;
    msg.surf_unkn_x = 0.115820834851;
    msg.surf_unkn_y = 0.914493847688;
    msg.surf_unkn_z = 0.692864529348;
    msg.ss_x = 0.945668792692;
    msg.ss_y = 0.280826413627;
    msg.ss_z = 0.818032044496;

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
    msg.setTimeStamp(0.610832217304);
    msg.setSource(25285U);
    msg.setSourceEntity(18U);
    msg.setDestination(26573U);
    msg.setDestinationEntity(135U);
    msg.ax_cmd = 0.317178300218;
    msg.ay_cmd = 0.0928329977908;
    msg.az_cmd = 0.0937785242084;
    msg.ax_des = 0.0944029389637;
    msg.ay_des = 0.601780794616;
    msg.az_des = 0.405933531614;
    msg.virt_err_x = 0.293745659391;
    msg.virt_err_y = 0.221731980594;
    msg.virt_err_z = 0.189484111626;
    msg.surf_fdbk_x = 0.394372160867;
    msg.surf_fdbk_y = 0.416396543578;
    msg.surf_fdbk_z = 0.347386284274;
    msg.surf_unkn_x = 0.529464973567;
    msg.surf_unkn_y = 0.0902676387217;
    msg.surf_unkn_z = 0.745457047191;
    msg.ss_x = 0.520369449621;
    msg.ss_y = 0.665987878402;
    msg.ss_z = 0.821671498869;

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
    msg.setTimeStamp(0.010747194743);
    msg.setSource(7140U);
    msg.setSourceEntity(194U);
    msg.setDestination(46244U);
    msg.setDestinationEntity(110U);
    msg.ax_cmd = 0.863556704348;
    msg.ay_cmd = 0.176877943555;
    msg.az_cmd = 0.677584183767;
    msg.ax_des = 0.767122587262;
    msg.ay_des = 0.774898640678;
    msg.az_des = 0.833699811865;
    msg.virt_err_x = 0.425890270229;
    msg.virt_err_y = 0.195734937409;
    msg.virt_err_z = 0.0798069503444;
    msg.surf_fdbk_x = 0.391856911718;
    msg.surf_fdbk_y = 0.546289171131;
    msg.surf_fdbk_z = 0.951516874346;
    msg.surf_unkn_x = 0.740477229134;
    msg.surf_unkn_y = 0.107317242059;
    msg.surf_unkn_z = 0.496910043583;
    msg.ss_x = 0.240496831554;
    msg.ss_y = 0.405987635112;
    msg.ss_z = 0.737282931019;

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
    msg.setTimeStamp(0.784368851912);
    msg.setSource(30962U);
    msg.setSourceEntity(151U);
    msg.setDestination(56021U);
    msg.setDestinationEntity(5U);
    msg.s_id.assign("INGOIYUSIMFJRVHCFPCKUEBCUVXTISKYMDPZCPTQAYGQVPGUWSONPEPBDNRDUXCURDZHAEJMEXMGYBXWVWXBJELURRPBHNWFDXTCTSKTAFVLTQBGJLZFWZSSQZOGAWRMNY");
    msg.dist = 0.260627053345;
    msg.err = 0.3873504157;
    msg.ctrl_imp = 0.770053420066;
    msg.rel_dir_x = 0.970119058804;
    msg.rel_dir_y = 0.0729087081419;
    msg.rel_dir_z = 0.424763201729;
    msg.err_x = 0.701541561931;
    msg.err_y = 0.305118072117;
    msg.err_z = 0.775507250205;
    msg.rf_err_x = 0.0173733560825;
    msg.rf_err_y = 0.384843380832;
    msg.rf_err_z = 0.169514170034;
    msg.rf_err_vx = 0.784140754239;
    msg.rf_err_vy = 0.282449979184;
    msg.rf_err_vz = 0.876758008684;
    msg.ss_x = 0.313511258926;
    msg.ss_y = 0.233205359032;
    msg.ss_z = 0.384442567424;
    msg.virt_err_x = 0.103425500605;
    msg.virt_err_y = 0.741146546861;
    msg.virt_err_z = 0.53208965759;

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
    msg.setTimeStamp(0.960001498327);
    msg.setSource(65382U);
    msg.setSourceEntity(84U);
    msg.setDestination(14479U);
    msg.setDestinationEntity(247U);
    msg.s_id.assign("YUGOXKPKUSEDIRIQYVPGSNLAEVIAIXUJXOFRUCPIMFYKPHZBJZUBYRZMNHNASVBNROECXKXPKFNAFFJOKIVDT");
    msg.dist = 0.193635414827;
    msg.err = 0.0385384573038;
    msg.ctrl_imp = 0.50183308211;
    msg.rel_dir_x = 0.946357404695;
    msg.rel_dir_y = 0.367028762909;
    msg.rel_dir_z = 0.65544335751;
    msg.err_x = 0.296058631115;
    msg.err_y = 0.32163630818;
    msg.err_z = 0.629253042245;
    msg.rf_err_x = 0.443331915094;
    msg.rf_err_y = 0.383388481579;
    msg.rf_err_z = 0.997739154063;
    msg.rf_err_vx = 0.0218183677128;
    msg.rf_err_vy = 0.603535028238;
    msg.rf_err_vz = 0.924038571638;
    msg.ss_x = 0.217199840938;
    msg.ss_y = 0.291083476871;
    msg.ss_z = 0.059762781449;
    msg.virt_err_x = 0.374310692559;
    msg.virt_err_y = 0.208080387608;
    msg.virt_err_z = 0.499031191801;

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
    msg.setTimeStamp(0.497785623013);
    msg.setSource(25416U);
    msg.setSourceEntity(120U);
    msg.setDestination(43647U);
    msg.setDestinationEntity(168U);
    msg.s_id.assign("GBNPSKDNUHAKMDWONTXZWIJWSGRIJHJWOQGXSVAYOYLNEDZLUNTUXWOPCIKRIJEBYSZHXPWVSVVBJEXEQURQORYORDQLRVCAMPFJGFGMIKRTNPTEBVYCZVHUNNGUNYHYVACACOCPZLFDZFJMTFYWFIDYTPMOWUFEZILIBAKWXHPEBSKXMHELXUVGTQMHFLKIFQQLMAOGKBXLMZSBCJGQUBQWZVTPDQXTZYUFKHNKHIDEDSDR");
    msg.dist = 0.286500785375;
    msg.err = 0.744459780013;
    msg.ctrl_imp = 0.774034251924;
    msg.rel_dir_x = 0.759750524241;
    msg.rel_dir_y = 0.349392101112;
    msg.rel_dir_z = 0.908693611944;
    msg.err_x = 0.793850586387;
    msg.err_y = 0.791388280643;
    msg.err_z = 0.330234572734;
    msg.rf_err_x = 0.766053403315;
    msg.rf_err_y = 0.464135643651;
    msg.rf_err_z = 0.0447582299791;
    msg.rf_err_vx = 0.595330762009;
    msg.rf_err_vy = 0.688874975872;
    msg.rf_err_vz = 0.602614875895;
    msg.ss_x = 0.0925212961106;
    msg.ss_y = 0.133620735875;
    msg.ss_z = 0.689466613584;
    msg.virt_err_x = 0.739344409162;
    msg.virt_err_y = 0.117542070602;
    msg.virt_err_z = 0.705482183274;

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
    msg.setTimeStamp(0.472745406998);
    msg.setSource(5724U);
    msg.setSourceEntity(202U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(128U);
    msg.timeout = 23901U;
    msg.rpm = 0.938011208817;
    msg.direction = 91U;
    msg.custom.assign("HVNUKDXDZDWRFQPYVZQVBUP");

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
    msg.setTimeStamp(0.350972507344);
    msg.setSource(13613U);
    msg.setSourceEntity(207U);
    msg.setDestination(26010U);
    msg.setDestinationEntity(20U);
    msg.timeout = 19749U;
    msg.rpm = 0.110137909441;
    msg.direction = 154U;
    msg.custom.assign("XOZFOMXCDJJBOCYUURATFNLIDKKMNWBGLQDJLOWNBAICIHWVHBUSJAKISYVMUXVBMKQZEHZRLLIFAIKNOURFMLEOSXEUVZMXUDEGGPRVZGIYSNHEXUHFCVYCBMPPJZCFYATVVWBSXZCIJOQATNLYRPPWPKYHWNGQAXFFEMZRJNDBPDD");

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
    msg.setTimeStamp(0.534942646839);
    msg.setSource(5392U);
    msg.setSourceEntity(227U);
    msg.setDestination(42342U);
    msg.setDestinationEntity(194U);
    msg.timeout = 52518U;
    msg.rpm = 0.750135850273;
    msg.direction = 228U;
    msg.custom.assign("TDOOPJBNTOISHVLTQERLZRV");

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
    msg.setTimeStamp(0.182416285357);
    msg.setSource(48992U);
    msg.setSourceEntity(214U);
    msg.setDestination(59329U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("RATVDYKQJFGHFYPQYDIXTKNSEBWUEOLCTVWRLPIOICFZCQQQTSYYUUWOMKKGGEJGUJRVHQFNGDNROHJSQLOWEZBIRXPVPXBPPMMLMBQSASAUPINRAHUHZTCOWR");
    msg.type = 184U;
    msg.op = 9U;
    msg.group_name.assign("MXEDPIHYPMQHGDRVANYSRBLBATWTHXQQMWOANLIUDIIRSPLHATBDFHVNDCTFOUKXGORVWUWCTUFLKEUDTKPENQYVXPMSSAWJPCIASESVTYRWEGPKURZHYJBKWCPFJFNRZVNBNQYTDEVOUVMIYXLIAJIOLPAUBUGFTMLSMBVCOEGIQXZN");
    msg.plan_id.assign("WLREJQXSKICDWTVZOQJUXBDFHHVXCSPSMLPZGDHVNPTRQPNCULWGPWPSUUT");
    msg.description.assign("BLTIVJHJWFCWOEFFGQYHAVSRQPKXCBXZGUTFWNKSYNOYZBOQCAJVDZEDRPGGKMTXEDZMHOFMRCHIRPTAJSLKAKOMHCGZOCIVMFDJUZBCVKLJLSVQAYLPYGQSJGYZPUXKUHDRDBWJYTILTSAPJYSWCXWOKIQHFHZOJRQDNULCK");
    msg.reference_frame = 239U;
    msg.leader_bank_lim = 0.565602137697;
    msg.leader_speed_min = 0.76846359303;
    msg.leader_speed_max = 0.743788775082;
    msg.leader_alt_min = 0.720823364853;
    msg.leader_alt_max = 0.562499291655;
    msg.pos_sim_err_lim = 0.492621655424;
    msg.pos_sim_err_wrn = 0.455102603413;
    msg.pos_sim_err_timeout = 396U;
    msg.converg_max = 0.831326492665;
    msg.converg_timeout = 40779U;
    msg.comms_timeout = 59877U;
    msg.turb_lim = 0.923801736748;
    msg.custom.assign("GVCXLZTEGNWBFRCFFBEYXLHIVZRMSEWZBCQLMKBENXSHNCSCUQPROFEFOJUWOQVAKQNWKKIILTVMDIEMISXGIMDJRKUMSUJOJSJDRCYRNDJKVJBDTAOPYSAHOPMYYCFQDOHYKTOBHPDPPYGMHTSPRWBXLGQIKTXGZYVCALVYBJQIXIHTUTESLPLZDAZYBNXAVFGRUDZQWZUFZHSCAOGJWUTBGVKDERXAQEWXMNLN");

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
    msg.setTimeStamp(0.669472056996);
    msg.setSource(40421U);
    msg.setSourceEntity(61U);
    msg.setDestination(29861U);
    msg.setDestinationEntity(12U);
    msg.formation_name.assign("JVDKRDRCJLDXOSIAVBGYYLYAEFXVZUSYAPNHZGSNIIDQPBTFJPIGROVQGOTTVHDYWOUKMWTHEBXKERMENCIZQEPYVDGFAFYTCNXRRXXIEB");
    msg.type = 102U;
    msg.op = 221U;
    msg.group_name.assign("EEYNYGKMREAJDVPKKRPMCSKDHCLCGGZUGRTBJDJKVVJMOQSXLVOOASANVSHCIATRZOKQLDCXOQYIAAUIDRBVRMNDFVTUIVSGUEQLURNUQJHOWHWYBZCLTOGIGZYXXCLPYJBNNEFMDWFAWMWFYAXWSSJUJWBOCABNPHJFLFQFUGEXHIHPLXQRXPSOBMKWPHDYQNEPSZVHUBNYQTIKPZIGTRTGCN");
    msg.plan_id.assign("MVMIZXFBXRCCHWGZCLQYHHMQJYWOGBGNOJJFFAPSUFNTPHCGUSKVEXNRVZQDQTNMFWVWLIVDXUBNYASDGOQOBRLZGIPESUFEDEDNEOPCQOUUPJLSXMEJYNWYMWPHBKXRVKBZODAMDUQSCUDPEEXZFPVBVVBINBGLHFAWTRTGYRFLOKKTDRZCKM");
    msg.description.assign("OHQNDIVBLVSYCYXAXHKDQRWDCULHVEFHRAFUGTPKXFLYASCKKDMHUQMIEFZEKWOPBPEVALRSGOYAAXDBBPLCGRGGQFJJOZPASQZSLUEMHMUPGNEXCNYDPSRNFKCOQDCECHIV");
    msg.reference_frame = 86U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35568U;
    tmp_msg_0.off_x = 0.105361634317;
    tmp_msg_0.off_y = 0.0996662939894;
    tmp_msg_0.off_z = 0.624686888622;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0844249274766;
    msg.leader_speed_min = 0.650486131359;
    msg.leader_speed_max = 0.470782024392;
    msg.leader_alt_min = 0.333438167816;
    msg.leader_alt_max = 0.185939325715;
    msg.pos_sim_err_lim = 0.713509764219;
    msg.pos_sim_err_wrn = 0.218065392241;
    msg.pos_sim_err_timeout = 20884U;
    msg.converg_max = 0.0397668935224;
    msg.converg_timeout = 12156U;
    msg.comms_timeout = 40502U;
    msg.turb_lim = 0.725251123669;
    msg.custom.assign("CZYJOURPOGKVBYUOGAKJWCX");

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
    msg.setTimeStamp(0.741790573128);
    msg.setSource(22804U);
    msg.setSourceEntity(246U);
    msg.setDestination(38189U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("IDSNJEZGDHBLRLWOLGVTSSRWXUJAKELUIOVRVWGAKMBNRJYOZOZTCXESPRXVQDFMNGUAAHLWQKZKPSOUKGNUGJPQPAYPEOHQJAPHWOJCCSYUHLLWUKYIVFCKNVFIGIAXSC");
    msg.type = 245U;
    msg.op = 67U;
    msg.group_name.assign("UBDTEIBQHRLFIMEERWAOODPONYQFTJSXIHUZRSZCZGZCJWJRCKLGYNCJPBMGAGVDYYERHQTOPIAUXHPKYFSIIGCWUZXCNZWSQEKKFOSODWTIBTSHPYUGVAXLEXUWTAAVLHKRKISVHMSUZLGMJJHJNPFTSUVLXCCKVXBBOBPV");
    msg.plan_id.assign("GYEMXRFRFETJHWEPYWQQDFLVUGXIWRUJMWLOUNMCTCJDWRVMLIDGKSWVNOCUNGSFRSCSZLVZUPNKUVFZRVQTLDXSDFQJXKOERMWIOJRQATABFHHSHMHOTTMZRUHAPZZXANAPYKEAY");
    msg.description.assign("ZFDPAQHLDFSLXXHENXTLWOYHWMMFUTNXTIZHGCUQZQAIVPRMREOBAIHBMQEPKJMFRKLTUGEFYYVQNBURIZBCYXJSONUJEWQTQRBZOJQPKXJTSH");
    msg.reference_frame = 178U;
    msg.leader_bank_lim = 0.253528911858;
    msg.leader_speed_min = 0.473861712972;
    msg.leader_speed_max = 0.914848655193;
    msg.leader_alt_min = 0.148396662335;
    msg.leader_alt_max = 0.871538047345;
    msg.pos_sim_err_lim = 0.907462802072;
    msg.pos_sim_err_wrn = 0.314655283463;
    msg.pos_sim_err_timeout = 1509U;
    msg.converg_max = 0.719950983171;
    msg.converg_timeout = 5461U;
    msg.comms_timeout = 46715U;
    msg.turb_lim = 0.637609855426;
    msg.custom.assign("PYTPNYWGZTCNQUVXMSLZNJWZSTGKAQUUUEHEQYVADCURNKGLCHRZEYSPDRJOQDPESXOYFLMBOMJIIGZCQZOBPVWSPFI");

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
    msg.setTimeStamp(0.157463607347);
    msg.setSource(14582U);
    msg.setSourceEntity(144U);
    msg.setDestination(42534U);
    msg.setDestinationEntity(232U);
    msg.timeout = 52767U;
    msg.lat = 0.512694332002;
    msg.lon = 0.0411988633793;
    msg.z = 0.933970199384;
    msg.z_units = 109U;
    msg.speed = 0.923225352515;
    msg.speed_units = 242U;
    msg.custom.assign("ZSRIVVRFLAPEZYZRDIPOLJSOPWNBSKKHXBHHBWFSVKDPVAQJZZHDYUMIPAHIJTVUEABAPZNZKVDKXNTZBTTOYRWXCESXLXGQWQDMZNMYUKBVYAGQBWGSCJBUTIFFQUJXRBGFALIMTQJTT");

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
    msg.setTimeStamp(0.324937779123);
    msg.setSource(22052U);
    msg.setSourceEntity(116U);
    msg.setDestination(19760U);
    msg.setDestinationEntity(160U);
    msg.timeout = 27767U;
    msg.lat = 0.00194453089667;
    msg.lon = 0.218537606492;
    msg.z = 0.0152634755087;
    msg.z_units = 96U;
    msg.speed = 0.111738482485;
    msg.speed_units = 77U;
    msg.custom.assign("TOUSFBCDVRFLOJCZZCEWPQUOBUKYEVSPQFISEHYXTVXTMGLQWNNJBQJNRSUGAPIOWVPGPVUYUIIXMESWLYDRNMNYDUTDJHJHUACEMFQNELVZVZGQFDSBEPVYRVOTXKJV");

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
    msg.setTimeStamp(0.312664245532);
    msg.setSource(40036U);
    msg.setSourceEntity(220U);
    msg.setDestination(51852U);
    msg.setDestinationEntity(208U);
    msg.timeout = 7548U;
    msg.lat = 0.370880366127;
    msg.lon = 0.927726341334;
    msg.z = 0.562946842138;
    msg.z_units = 242U;
    msg.speed = 0.316388285102;
    msg.speed_units = 12U;
    msg.custom.assign("YMOPSKMFSTYCXUNSDHQRPIDOTZJQUNOAYOLRXEHYMBHZLAJWHDGHIIQADGCAEVXMJBQLUITUKODVWZTFDOKSKKUYKFITUVAOISEAFPXRCFKGUEFJCWNYPTFTIPSGPWGMLNEWFWFZCBTSHCGYEJZGJPXBNLYERPHXCLTDAEAZNEBABSXONADZRMVGBCXKIMJPQWGLOMNPLQYKXUTVSRJZRXDRQ");

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
    msg.setTimeStamp(0.466623768719);
    msg.setSource(22238U);
    msg.setSourceEntity(29U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(112U);
    msg.timeout = 4838U;
    msg.lat = 0.83908890989;
    msg.lon = 0.167724035297;
    msg.z = 0.39669321739;
    msg.z_units = 149U;
    msg.speed = 0.722235962841;
    msg.speed_units = 110U;
    msg.custom.assign("FFGVQMSQHEVCQYBPGZQJWNDAOFGYIGCNXSVXUTULHAKOSZGJIUVETVAMTABWTCRZWNYRDFEPEDIPHBYWXLKFHDRNCULLPMSQNTENDMEWWXETXJKWZOGUTYHKZXSRVYDBGB");

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
    msg.setTimeStamp(0.510873415815);
    msg.setSource(30217U);
    msg.setSourceEntity(2U);
    msg.setDestination(21169U);
    msg.setDestinationEntity(39U);
    msg.timeout = 15165U;
    msg.lat = 0.658492138238;
    msg.lon = 0.319687274725;
    msg.z = 0.188845252894;
    msg.z_units = 131U;
    msg.speed = 0.428376074882;
    msg.speed_units = 114U;
    msg.custom.assign("PRIHKGGTBVRVWDLFXDOBMUBVZLQQITMLGJZMOICSQPIDNUTKLFFKWSYESOMOHVEUXGQWEPYHHJEDFMCHDZCPCFULTFNCBVTORXUMKWATKKURLDNHRINFQSXDZN");

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
    msg.setTimeStamp(0.152609785233);
    msg.setSource(57244U);
    msg.setSourceEntity(251U);
    msg.setDestination(4718U);
    msg.setDestinationEntity(216U);
    msg.timeout = 793U;
    msg.lat = 0.39415997408;
    msg.lon = 0.383726643796;
    msg.z = 0.650031058576;
    msg.z_units = 238U;
    msg.speed = 0.079821856245;
    msg.speed_units = 210U;
    msg.custom.assign("TNGFMCUSZZLIRZOPSJERVUARYVQJIVSBCUTKGJOTYMXXBBAVFHGLQERQDWCVEOKMTHUGQNIEYYGHXMJYIFRZJKBLZUGPHNERZBTSVLGIHBYBMPPREZBWOIWKAHPQCJBXMRISOGAOAVNNMNDKDPIWSADDHTOUXIUVJGJAOAKNSRMTKSJLXFFCEKTEWOHFDDQWPKPOLXRVCHFXYLZDBEIGCLNFXWQFPSQAZLCHQCFSMAWETTCWVQZ");

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
    msg.setTimeStamp(0.636050850998);
    msg.setSource(15815U);
    msg.setSourceEntity(138U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.98155147273;
    msg.lat = 0.658197669539;
    msg.lon = 0.621731837068;
    msg.z = 0.913081326821;
    msg.z_units = 253U;
    msg.travel_z = 0.959215152446;
    msg.travel_z_units = 133U;
    msg.delayed = 253U;

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
    msg.setTimeStamp(0.869172146917);
    msg.setSource(10055U);
    msg.setSourceEntity(73U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(126U);
    msg.arrival_time = 0.171398473101;
    msg.lat = 0.0628083282018;
    msg.lon = 0.140531429587;
    msg.z = 0.240491579622;
    msg.z_units = 169U;
    msg.travel_z = 0.337908429316;
    msg.travel_z_units = 209U;
    msg.delayed = 173U;

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
    msg.setTimeStamp(0.63204788723);
    msg.setSource(21782U);
    msg.setSourceEntity(102U);
    msg.setDestination(6157U);
    msg.setDestinationEntity(31U);
    msg.arrival_time = 0.536007331833;
    msg.lat = 0.895694778752;
    msg.lon = 0.842757344604;
    msg.z = 0.534874097139;
    msg.z_units = 23U;
    msg.travel_z = 0.849991225083;
    msg.travel_z_units = 49U;
    msg.delayed = 72U;

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
    msg.setTimeStamp(0.180460682794);
    msg.setSource(26770U);
    msg.setSourceEntity(220U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.172796189005;
    msg.lon = 0.747241203208;
    msg.z = 0.754031895926;
    msg.z_units = 29U;
    msg.speed = 0.0720121633378;
    msg.speed_units = 173U;
    msg.bearing = 0.53304906771;
    msg.cross_angle = 0.77342574512;
    msg.width = 0.0255697422462;
    msg.length = 0.218740047155;
    msg.coff = 34U;
    msg.angaperture = 0.786198377947;
    msg.range = 13910U;
    msg.overlap = 93U;
    msg.flags = 126U;
    msg.custom.assign("EUNEFOPBKTAGDOTTZBMNYWUDOONGGVKPWBDZYCXSLNIIXIVTABIHJXFSSPZRXSVCLESHQGZVGMPUAJKSSWXNQUYIPFKMYPUAVDIFSMUQOOLRQEIZIDVMQJZFJCTAOXYRIRKWGYQTUIEJFYDFJZPEHBLWUTLRVHHCXQNOCQLYSWHKJJ");

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
    msg.setTimeStamp(0.68922872028);
    msg.setSource(65428U);
    msg.setSourceEntity(181U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.0409632345469;
    msg.lon = 0.268070169319;
    msg.z = 0.396004356578;
    msg.z_units = 106U;
    msg.speed = 0.549491998009;
    msg.speed_units = 171U;
    msg.bearing = 0.992309638951;
    msg.cross_angle = 0.320791004034;
    msg.width = 0.568546492601;
    msg.length = 0.801162824054;
    msg.coff = 112U;
    msg.angaperture = 0.309240212325;
    msg.range = 41108U;
    msg.overlap = 242U;
    msg.flags = 13U;
    msg.custom.assign("VRZIZJAMDMZKEFDHNIYKLHUGUPQACROLGXGLKCEXRGFVORWMIMWHRCPRFFKUAWZSWMNXGMLTQWIPPSOYYQFTBWOUULHQNHMISWZNKKAENXDYYSIGPDROTNWCMKCYZEAOBKXZBJHFPEPQSTDRKPMFIDVNH");

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
    msg.setTimeStamp(0.869207987148);
    msg.setSource(31142U);
    msg.setSourceEntity(61U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.397872201445;
    msg.lon = 0.780752507492;
    msg.z = 0.671780048695;
    msg.z_units = 42U;
    msg.speed = 0.548368137768;
    msg.speed_units = 17U;
    msg.bearing = 0.401924344128;
    msg.cross_angle = 0.926253068386;
    msg.width = 0.470462502613;
    msg.length = 0.861062441519;
    msg.coff = 118U;
    msg.angaperture = 0.306137886071;
    msg.range = 28490U;
    msg.overlap = 49U;
    msg.flags = 94U;
    msg.custom.assign("IXGPJJLGJFYIQUTVSBLZRZHQAWLFCJZUFPLWEHUGNFFJDABDOIMCTSDPNTORSMKAAWBYRYSXFEPGRHAQISDYAKQFVYRGNKLDPLONETZJEYCDCGHTZNXRTTGXHMKWJENERFXUVCIVKSQLJONUURHZZGXDPXESQOMSYUIPJBUMKOZNVCAWOXVUHGERHPKOJENYUAEIDWHBBVSPKXQRAVCTNZWBWFQZIBLCMLTPGWLQSTDCMB");

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
    msg.setTimeStamp(0.830841618318);
    msg.setSource(10396U);
    msg.setSourceEntity(167U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(124U);
    msg.timeout = 40531U;
    msg.lat = 0.429880170279;
    msg.lon = 0.602170626617;
    msg.z = 0.30716060167;
    msg.z_units = 185U;
    msg.speed = 0.954958009382;
    msg.speed_units = 173U;
    msg.syringe0 = 21U;
    msg.syringe1 = 160U;
    msg.syringe2 = 161U;
    msg.custom.assign("AJJQNSLMTDFIBOJEVWDVWHAOZSJSCPICINACFTKXSXXIBZLYMERMFIKXGQLZZVVHQHRLRBWYDLTNBWGUIZGUDVROVNCWFMSQGCPKMJPGBWPIAGXDDJCXVUHYOEDLIRUSEYRZKYAHCCCFQHPEWFAUZFNQTNFPXMQEYVDMUYFKSNGKGBLMOLSWTJCJXNOHQKZATOPKBGQRBRIUKNRDMDHZ");

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
    msg.setTimeStamp(0.847895793096);
    msg.setSource(6779U);
    msg.setSourceEntity(189U);
    msg.setDestination(52509U);
    msg.setDestinationEntity(170U);
    msg.timeout = 27189U;
    msg.lat = 0.52386152832;
    msg.lon = 0.706743456606;
    msg.z = 0.0972467823804;
    msg.z_units = 69U;
    msg.speed = 0.250313798342;
    msg.speed_units = 92U;
    msg.syringe0 = 250U;
    msg.syringe1 = 249U;
    msg.syringe2 = 53U;
    msg.custom.assign("ZXTQARSWLDRPYYRJCAPDUJMSESJPMDIRBONFWVITNLXENDSHCZNDHSWYFCOZLYIUDKXMBWJHUAGMOPBGGTOMFSQQCFVNVLWIZGTNIMPLECYRVJRWVPAOMAOZNGAXHNMVZTCKJEIQETXBHIIPUVHXKEEOTUZZDYWKHUUDAPAHTFFKGKMOBQGQEFUPVAECQKXLKIGIXCCJYNLOBBBSJDSHVSOLWLFQZYTUBYERGTBSLJNXFWWRURGZFHKJ");

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
    msg.setTimeStamp(0.9289106793);
    msg.setSource(37815U);
    msg.setSourceEntity(57U);
    msg.setDestination(4855U);
    msg.setDestinationEntity(110U);
    msg.timeout = 1916U;
    msg.lat = 0.501785795814;
    msg.lon = 0.0384193473158;
    msg.z = 0.60498730856;
    msg.z_units = 127U;
    msg.speed = 0.735142917594;
    msg.speed_units = 21U;
    msg.syringe0 = 166U;
    msg.syringe1 = 72U;
    msg.syringe2 = 153U;
    msg.custom.assign("BLIRZWTSGYUHTJVEQDNHVOBDTDAZFWXICPTRCWUFIUJDERVXN");

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
    msg.setTimeStamp(0.548355089526);
    msg.setSource(35219U);
    msg.setSourceEntity(222U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.553781141001);
    msg.setSource(9167U);
    msg.setSourceEntity(241U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.495760666703);
    msg.setSource(30578U);
    msg.setSourceEntity(198U);
    msg.setDestination(56012U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.991091590895);
    msg.setSource(5424U);
    msg.setSourceEntity(37U);
    msg.setDestination(7659U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.58893938959;
    msg.lon = 0.632307850826;
    msg.z = 0.693259433893;
    msg.z_units = 55U;
    msg.speed = 0.637945233238;
    msg.speed_units = 37U;
    msg.takeoff_pitch = 0.200474410435;
    msg.custom.assign("XAEVJZJKNMUEUQMEFOZQYAXBUQOZEMHWKVFZMBFJCLLSEGJPWADHCFJOEMBWHYHOABQNKMZPFCHUBFPRGNPAUPOYJROSNEWHNZMGCUNWSXSSCFLRLPHIEATLCHMICGYZXCGDNNTFCGBKDDVJIPRKMTJBTLYGJTBJVI");

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
    msg.setTimeStamp(0.889528648314);
    msg.setSource(5920U);
    msg.setSourceEntity(153U);
    msg.setDestination(44640U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.180838462577;
    msg.lon = 0.314130515635;
    msg.z = 0.738919881114;
    msg.z_units = 76U;
    msg.speed = 0.495839441081;
    msg.speed_units = 32U;
    msg.takeoff_pitch = 0.632782827305;
    msg.custom.assign("RUCZITBYKUXBNDTAGYXLXXDQJTDYABJNEMHXSOPOWEBMFWEQUXWIWKYFHYVZSVTVGOUVXMTBSKQIRTOSUFELWQUMELGSVUHEYOVBFCTJJCOGNOCGTKOHRCRAJCIELPWGMJSCBUFXCJLUHPAQDYCSATIXHPGYDWQAMMOKKGPNDNFELGNDQ");

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
    msg.setTimeStamp(0.703086707545);
    msg.setSource(30172U);
    msg.setSourceEntity(198U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.681930666814;
    msg.lon = 0.432193865817;
    msg.z = 0.519573942617;
    msg.z_units = 254U;
    msg.speed = 0.947795942552;
    msg.speed_units = 94U;
    msg.takeoff_pitch = 0.67445321125;
    msg.custom.assign("MNNRELETIVEDLWVPRZXZAXJQJRHNCYHQFWRIKHTECYLBBUGKMCIBRGYBTDMKRNLYKYXHFEKBLXHJEUCVDLPYOUFVGWZNBRUFTBONIWOFGEIXXRKOTTQZAPOOPKCCLCMQVOIFDEQGJOTKITOMSASAERPJFSWPMVEZHCSVKMYZDNRVCGDXHAZJJFAHUOTWDIMPIUDSNYVSQXUZZDWBSGNBKAUQMQGIXSJSVL");

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
    msg.setTimeStamp(0.424406801102);
    msg.setSource(22442U);
    msg.setSourceEntity(24U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.500926450913;
    msg.lon = 0.0242572263357;
    msg.z = 0.262281817716;
    msg.z_units = 192U;
    msg.speed = 0.219300269889;
    msg.speed_units = 9U;
    msg.abort_z = 0.764960460755;
    msg.bearing = 0.540267385209;
    msg.glide_slope = 142U;
    msg.glide_slope_alt = 0.205634484423;
    msg.custom.assign("VEQYPXKIIXUPEZJRTQJAOBAFENCOPMTQBIVNX");

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
    msg.setTimeStamp(0.126599236074);
    msg.setSource(28662U);
    msg.setSourceEntity(130U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.187807383494;
    msg.lon = 0.913893014545;
    msg.z = 0.10861015867;
    msg.z_units = 241U;
    msg.speed = 0.44027152594;
    msg.speed_units = 96U;
    msg.abort_z = 0.594572793163;
    msg.bearing = 0.695249854724;
    msg.glide_slope = 15U;
    msg.glide_slope_alt = 0.331803859743;
    msg.custom.assign("KSKWXLDKVCMBFUFOHZAHRAZHGSYIEBKUOBVREKRYLCELEHBIIEHTEOJDWMQBAPDJFMTFXSWGPPEYIARUNPIPLEGNXUYDSCSTPAWNIDMOLJQZONWGKFXMBULCZHUSMIRUZFAFHVIDTETQLRIJEICMGRWDXHQDYGXUMOFXYPNMMACJJZCJQKTOBTDVRNVLVKRSNQAWUDGXOABCVHPXFYVGBTLAYOQXJJGZPTUZSOWVQQZNHCK");

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
    msg.setTimeStamp(0.202746063011);
    msg.setSource(9091U);
    msg.setSourceEntity(207U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.533500066798;
    msg.lon = 0.126439468843;
    msg.z = 0.792457995587;
    msg.z_units = 133U;
    msg.speed = 0.254012463872;
    msg.speed_units = 130U;
    msg.abort_z = 0.41733472566;
    msg.bearing = 0.985535991177;
    msg.glide_slope = 125U;
    msg.glide_slope_alt = 0.167560214528;
    msg.custom.assign("JBULJPIEGWMGNNGWUPTIKXVRYFEFRIZYFIQGSYFUVJLWUGPHQRCFUQEXOZPIXZWKVWITWJLIMTEEVEHBXVNMLGSSJNNIKZPZHHSAPCDCUKDSBTAECHODBGKZWOKDFCMLCXMEZJLBCFOZZOMNQPTRDAFGDJIOATRYTLDYUBXBFTYSGPMODXPHRQRKTWYDKHHOJSCRBUHUCVQYHTMIJARWGENBAAQJSDMRNQAAVXLUKVOZMSPENXVYX");

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
    msg.setTimeStamp(0.918330095668);
    msg.setSource(5888U);
    msg.setSourceEntity(103U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.798284758901;
    msg.lon = 0.702105489505;
    msg.speed = 0.861388641792;
    msg.speed_units = 66U;
    msg.limits = 2U;
    msg.max_depth = 0.796869067001;
    msg.min_alt = 0.653014363244;
    msg.time_limit = 0.9149296664;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.309294086965;
    tmp_msg_0.lon = 0.398300913955;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ILPOMSBTRTLTSRDEXKPYYLZNDQVMOEQSEPDUUWYNNEFSOLGTUJDZMWEDMSMGCXZPWLNEJENUAWFLAYNAIVQVLOGSUHI");
    msg.custom.assign("NPISQMWACIVDOUBADHGHKQCZSNOLZUECFRHSYYHWFMGOYHBSYCIKUKJAGVGNFCVVXVXRWJNYRWPCFOQVJJEBDTIBNXXZMLSLQBEHTIXMKRKQEINMLUSRNLSJUMBKIWDBOGYTVPLUKMBQKATDXFTLDDTGESLFMYKSJUXCXZKFXXEQVVTAMGQZNH");

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
    msg.setTimeStamp(0.363235524547);
    msg.setSource(14108U);
    msg.setSourceEntity(218U);
    msg.setDestination(65365U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.905870429121;
    msg.lon = 0.283405020539;
    msg.speed = 0.583442879414;
    msg.speed_units = 0U;
    msg.limits = 157U;
    msg.max_depth = 0.213990051281;
    msg.min_alt = 0.862792994929;
    msg.time_limit = 0.162712020295;
    msg.controller.assign("ZFTCCDFIMUGQYYAGJPCQDGTMVNMCDRCGLBBYTXYSYXAWBURWFWDVYYPTTXJIUOAXUDHHMAXOKVPVMLMKHTVIBPFUIVLIKRMPJERNIUHHCDAONNIQKBFLZKOWTKNMUXLKEFALIRSFYAIQTGANOBQDJVSGNLWPQXZHSEJZPHECNZJSFTVKEXUTLKMZLEFC");
    msg.custom.assign("JAVWZDQBHEASQZIPOZCDSGXLSOKFHYHSRLUWNRHPXGMPKCFDJTNGK");

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
    msg.setTimeStamp(0.754456164343);
    msg.setSource(1714U);
    msg.setSourceEntity(217U);
    msg.setDestination(65519U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.868234910358;
    msg.lon = 0.272527145804;
    msg.speed = 0.46100643465;
    msg.speed_units = 45U;
    msg.limits = 20U;
    msg.max_depth = 0.133100984776;
    msg.min_alt = 0.149329106986;
    msg.time_limit = 0.0623553269481;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.514030140118;
    tmp_msg_0.lon = 0.770356516641;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UQXBEPCFSFDZYBRQUERBPNUCGZSJCLHTJECWRTYGQAISBGTORNDSHIUDEKWAFWRJIIQQRKXXZMXHSMNIPAKNLLODYVPDHIKPLHOTAVCUUZPTINAVAMVHLTZRMGOUXMFEYFJGOIWNVLGDVQSLQQDFVOHXQBRCGOABSUWOVGVCSLKVYMBNSMXUEWGHLJCWEPYEJPDINWKPKZXWZQRAJCYXJYMBENJMDZRULODFHEJKKGY");
    msg.custom.assign("IZCMUUNWHBQBYLIURHQASIHVNOLUJCFOOFYVKAACLDKPBHSWMYTTWDJIJQZCIEFMLUFGSCNKFHIVQPWFPRKOSDJMFLUZGAQDUDMATHWGQTBZBRZCZKHZYNKEOICLTAUGPQYVTOAOWGSMPFEBTNKBPPBKCYVSRDQNIRXRXIGAXRSRZQMNVGRWVGEFBMXFK");

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
    msg.setTimeStamp(0.977584057389);
    msg.setSource(45877U);
    msg.setSourceEntity(129U);
    msg.setDestination(38309U);
    msg.setDestinationEntity(100U);
    msg.target.assign("EAWVOVLJVAUDZILRKVZPDQZOBIHDAQHYFPPQLXCEUESBJXSWUBCRMZGIUOLMEFHIFFSTXYSCNWTYIGIEYXVHNGXBRDGKZBILUIVNKQYEQWUWHTZCQBSMBVMKGYONTJUUNGRESNWEDSGKWWMCTNPKCCCRKAW");
    msg.max_speed = 0.573130274823;
    msg.speed_units = 50U;
    msg.lat = 0.305233422212;
    msg.lon = 0.0878574264645;
    msg.z = 0.133423247591;
    msg.z_units = 91U;
    msg.custom.assign("RPVDCWGXFIZFCVSTSEYEUMPQDJYSABRRYLJEECBJXRVDQRAQZZHGNCRRYHQLTEMZWEKSUMRGBYICONNLKPOVANLWBFQWCTAKEYTPPHICXBFWZOSLSTBKHXUYPJOFLJFAIKELMCJAQHEOXHCLNJFUUAQGHOTUIXMHYYQIRQGGOISDKPZVVXIEAMIWODHKWQXNMBBBUMZK");

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
    msg.setTimeStamp(0.691676047531);
    msg.setSource(47114U);
    msg.setSourceEntity(71U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(233U);
    msg.target.assign("VUZMSCKICLPDUXDDMVNGUQUYGKLAFQHHSVRANYIWUYTWXRQA");
    msg.max_speed = 0.413363505625;
    msg.speed_units = 13U;
    msg.lat = 0.0573282586638;
    msg.lon = 0.804046974672;
    msg.z = 0.598786795466;
    msg.z_units = 98U;
    msg.custom.assign("XRPEOUONTUQBUFLAVDSBWCQHQDVEAVPEQYXPHXQHYYEVSDEEIIJSWINIEZGMAZDLHZTGUMWZUZAXZBHUZGEDTMMHXCXJDJCAHNLJTXLOKBGISOAUPHIC");

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
    msg.setTimeStamp(0.053994852348);
    msg.setSource(13560U);
    msg.setSourceEntity(220U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(48U);
    msg.target.assign("UAXHGXUIGOCUFVLAISPVSHNMMZTNISTLMTYKKLBSFNIPRYYLUCNR");
    msg.max_speed = 0.0807201118405;
    msg.speed_units = 197U;
    msg.lat = 0.837644957361;
    msg.lon = 0.912739856924;
    msg.z = 0.077639126789;
    msg.z_units = 225U;
    msg.custom.assign("MOZIZYBILIUQSXUSPEXKDQLVIWYGUNWGMBXFHYBIYADAZGAAZQUYQFKQLEBPJLSKQMVUPYSMYMILRHGFORYCPOEQWPOLKDEDJJINZNKBDLTRRMHCWNQJTYCCOUXFFXBIAXFOZMZDSVSFWVUHFMEDWHXDCOLCSGQHTASAGDGANIEVNIOY");

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
    msg.setTimeStamp(0.570423150663);
    msg.setSource(2650U);
    msg.setSourceEntity(32U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(9U);
    msg.op_mode = 246U;
    msg.error_count = 25U;
    msg.error_ents.assign("HXYWRFXTTLAMICWHWJIQDPIWVMPGQMQVJEONR");
    msg.maneuver_type = 14668U;
    msg.maneuver_stime = 0.995158145844;
    msg.maneuver_eta = 48105U;
    msg.control_loops = 3803353274U;
    msg.flags = 186U;
    msg.last_error.assign("URSSDKTTCOPEZDHHXC");
    msg.last_error_time = 0.974819259038;

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
    msg.setTimeStamp(0.696312776548);
    msg.setSource(21215U);
    msg.setSourceEntity(79U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(177U);
    msg.op_mode = 35U;
    msg.error_count = 27U;
    msg.error_ents.assign("KAZAGISHAXXQCXVOCMTYKPKALW");
    msg.maneuver_type = 32937U;
    msg.maneuver_stime = 0.151761207341;
    msg.maneuver_eta = 26886U;
    msg.control_loops = 576839645U;
    msg.flags = 109U;
    msg.last_error.assign("WOXDADBLWQLZMDUXHIRTIILYUGZXEDYWZTXKSWHHNAYIZIIYSJKVOCRGEBSBHCMLUYWNBXHMTVJAVTKHCRZPVUKHAJ");
    msg.last_error_time = 0.117527018119;

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
    msg.setTimeStamp(0.694975755916);
    msg.setSource(38225U);
    msg.setSourceEntity(138U);
    msg.setDestination(23101U);
    msg.setDestinationEntity(71U);
    msg.op_mode = 131U;
    msg.error_count = 61U;
    msg.error_ents.assign("NYBCCFFURMOJVDSJPRHUILPWTEKYKQHILBYVUGZHVPEEWLDAWXIPSDNSGZFJJULYRUTGLUFPCEOTGJWQBUZWDIXWMPZZYKBMRIQVR");
    msg.maneuver_type = 65207U;
    msg.maneuver_stime = 0.406905595742;
    msg.maneuver_eta = 59627U;
    msg.control_loops = 516171991U;
    msg.flags = 223U;
    msg.last_error.assign("RAIQJZVTWDTHOZWQNMJAVDNYUTIMVNVPAMSKPOEXUJGZJOMCIGEOBLFTUIUNMNHIZZYTGEFDXXLGAFVWEWUZYPFYXSAQKWACHOQCWKRYYGMNUNBPPQUXLBARFKYXRHFOKDSQVCMKRQSKWNMCNHTIZFAPHRMZEBOXHJEVVOWDBZBGESOOJEFFCXASXLRYDCDTIYYABQCDLRSTSDKLQIBGHZLPGBCUPESVIDURWXJQNIPGFJGLLTMWJKHSUEL");
    msg.last_error_time = 0.59352451872;

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
    msg.setTimeStamp(0.61003069709);
    msg.setSource(58727U);
    msg.setSourceEntity(171U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(223U);
    msg.type = 190U;
    msg.request_id = 10271U;
    msg.command = 28U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 12734U;
    tmp_msg_0.lat = 0.257555230996;
    tmp_msg_0.lon = 0.173362474216;
    tmp_msg_0.z = 0.336909029137;
    tmp_msg_0.z_units = 114U;
    tmp_msg_0.speed = 0.951314838625;
    tmp_msg_0.speed_units = 93U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.367073790757;
    tmp_tmp_msg_0_0.y = 0.092075957764;
    tmp_tmp_msg_0_0.z = 0.652213565296;
    tmp_tmp_msg_0_0.t = 0.805055212354;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RIEKPEMLVXHXWWDOMLJVOLTYYTTJEIOUMCHNEBRFZZXXBIZGVVDLDSQNKKQHEWQXWARFFNTZIQKUAPI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31200U;
    msg.info.assign("NJBVTUUWIQQJPPFLERSUKZUOKRXZAYHCWBLWHFKDGNWBKEQCSGRGJCCZIIXMPKNPVMIYKZZLACDJXWAZCMXLTENMAFDKNTPBYEOJSGNYBKSWYYRVIOSEESETVXQAEUHGLGLQOOUIFJDJQORHPFDADOFBMWTQORBXVEYTRPHZTAPRIHQURNXXPCHRFCNCVGTKWJMUDATIGAVSBJDUFFLJNPIZYYNAWMSVHYCSHBEDXMZ");

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
    msg.setTimeStamp(0.367823511612);
    msg.setSource(62578U);
    msg.setSourceEntity(49U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(100U);
    msg.type = 41U;
    msg.request_id = 3736U;
    msg.command = 80U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 370U;
    tmp_msg_0.name.assign("DFNDANTIBICJMRETDVOYQVZLHHQXAKLSVTNWZWXMAFYWDNPWOCOZPDBUKSFEGRXTQJRAVWUUJGPMPUG");
    tmp_msg_0.custom.assign("VGONPWJSUPHJYRBVUWUDOXVLBPDOPTKECQFGFYHGWXYAHITHDHOJIBKIGKPXEGKQDLQHAN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57749U;
    msg.info.assign("VPAPNVSWABLKJHLICFJLQFUSZSHMPBQDTLIJFYBXNPQKOYX");

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
    msg.setTimeStamp(0.0254890073732);
    msg.setSource(7272U);
    msg.setSourceEntity(171U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(220U);
    msg.type = 134U;
    msg.request_id = 55461U;
    msg.command = 22U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.916322462213;
    tmp_msg_0.lon = 0.127831464845;
    tmp_msg_0.z = 0.0340899392821;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.speed = 0.541397731388;
    tmp_msg_0.speed_units = 80U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.266990004395;
    tmp_tmp_msg_0_0.y = 0.386990607223;
    tmp_tmp_msg_0_0.z = 0.73074407918;
    tmp_tmp_msg_0_0.t = 0.375037447062;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.589687336414;
    tmp_msg_0.custom.assign("UCBYPVZYTPLUIUOUEUWBNQJKMLNGVPZFBFJCCFAUUAQHPQEXAAGWNIYILYOCXHZELYAEQRHRJECQORWMVKIRGXZOISOULCXLBSKKMTXOYEXMGCSDMSITRDWTGWMYBWBGVQFGITMHVWNBAJRIYKBYBHULDTHCJERREXNQKSXZVDDJFHQIQGQPDPZDVSMSOOHZFWKTFNAJHXKVCSSOPZDFEDIUNSELAPDNW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8668U;
    msg.info.assign("HBHHZOTGEZDKSYKFCMUDIWKWOEUHLVVYYNJKHDWNGTVTMMRYFTWOUSZDXCWBTEMSBVUXLPZONLWLXIMLMJFYALITGLHYQBUMEPDWDCJVJ");

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
    msg.setTimeStamp(0.172279043186);
    msg.setSource(42501U);
    msg.setSourceEntity(222U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(82U);
    msg.command = 253U;
    msg.entities.assign("MPQZLUROZAXNOHLJSKWFIUNFEEIZUPPCGEZOUVFPPMVQCUDAVVNSBQTWKIREJQDHXGXDSOKYJSKITIOCQYGGGIBDJLN");

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
    msg.setTimeStamp(0.530198088081);
    msg.setSource(18533U);
    msg.setSourceEntity(154U);
    msg.setDestination(37476U);
    msg.setDestinationEntity(229U);
    msg.command = 217U;
    msg.entities.assign("YPKSSBXUJUGKU");

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
    msg.setTimeStamp(0.504114173401);
    msg.setSource(25155U);
    msg.setSourceEntity(129U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(113U);
    msg.command = 231U;
    msg.entities.assign("TDDNDPIBUDQHHNQXYCICFPUEZFSAYQJXORRGBSCMAEZWVXKVBOERXJWUECATPWUFRGJPVPQXXAZYXWTTEMKAARTSJODPVFIEKSQBUGLJMMCDWRISNONYZSJLUBZAEFLCLHXJDOGHLDKULZBKSWLICANQWGWXPLON");

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
    msg.setTimeStamp(0.8214063162);
    msg.setSource(26687U);
    msg.setSourceEntity(237U);
    msg.setDestination(4059U);
    msg.setDestinationEntity(29U);
    msg.mcount = 251U;
    msg.mnames.assign("JSXOTEYWBSOZTKDNWMEJDVIRTKMU");
    msg.ecount = 81U;
    msg.enames.assign("KWQWSOBCSELRUEOMBDYJQPNJSJMDWNQCTEEJJGZHPWVULAROHTESRFKAVGDAXWCZDTKQBEMQDOQSCYGBUZFMJSNEIMLYVDFDAHIRYMCUZJMZRYKHROPSUSRNNIHXVGZVZUXLARSPUECIVRDFCAPJHXPTXPTKEGKUEZOBXALUT");
    msg.ccount = 234U;
    msg.cnames.assign("DLKHPJYVTUMUIWBLIDMWOMQFIZOCJAAUHOLCNSDWWENMAMDJZWCSHOGECWYISWJRKOLMVPQJLGRAXYOAMPAKUPLXURDETAVORXPERESZJBGZPDXNPPATUZVKIBNNWNDNVQXORBPTOKJUGHLBULMRDJTXFTWYXFTAYSRTQ");
    msg.last_error.assign("UYIVNNFFCSUHLEUQUWYZCDSBMOXFVNRYWUMAWCXPUHMGQQGBLEHFVJTSWWDTUTVFCFXLTHZRAMZQAGNTEIFQKRODOWXJTQLKEPUABSJDIEJPRXZIUWOJYZPDGLCRMYKZRQYETIVJHLGDBHOCPCVXSSOLENIXXFFHTPKNKLOUYPRBBLYJYPVCWHG");
    msg.last_error_time = 0.856829893454;

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
    msg.setTimeStamp(0.0990630216227);
    msg.setSource(43612U);
    msg.setSourceEntity(103U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(102U);
    msg.mcount = 114U;
    msg.mnames.assign("CNNBTNMHVBYUYKJOBYWSHJMMPWDYIVPVZCRMOGRFINCRWCNRVQRIOLPFUABQAAJATRFOHGTDSXGTHFPLLBSUXLVMXEOEKKELXGOCNUDIGYQYNKZKMHWPXVELFAQUOAQKEZJDMLLXGJWCTWFSWJMCINJGZGPKFRMXSTWDTNUSXBUEZHBAHDKXRVRABBLJCQ");
    msg.ecount = 79U;
    msg.enames.assign("VWJQLADQIZEEIOGKNBTLPYYEPWNOEKTVRRBBAJFXESTTTGAGLYCDQHHKWGGWAWHOQGNINRCFNYSBVKJZNLPPUZSVULIWXAPNYJJCEJYOABMTXFKGDDHEPDFRDHPVCQSJMFLZBZFETPKUDHBMWIOUBFZPSKDVXRLXMSORXWQRXQZVUEVKMDSNRGOORUYEYMTCXJM");
    msg.ccount = 6U;
    msg.cnames.assign("LNGUWFKKOSGWMNSJVGBWTILDKTRCUELG");
    msg.last_error.assign("SKAJKVICFILHRCNOIPA");
    msg.last_error_time = 0.509636412469;

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
    msg.setTimeStamp(0.949145798823);
    msg.setSource(55879U);
    msg.setSourceEntity(58U);
    msg.setDestination(50161U);
    msg.setDestinationEntity(10U);
    msg.mcount = 19U;
    msg.mnames.assign("NBHVVMGYUCMMPVZJFHSIDKPWOVRXKUDMJOOYKHARVCDWWQZRFHKPTQQZNUMUESMIKUJFIQ");
    msg.ecount = 156U;
    msg.enames.assign("GNHGETQFLPJHMYMNAWZTPQTLHALGDZH");
    msg.ccount = 242U;
    msg.cnames.assign("XGBCGMEPVWKATDCAOPEIGAHCSOMUJGNQOJZNSUKRSLUDBAYIKMLZMJCCZUDJYSYYUZDQRTHMEDQNKOQAEPKCZFVVLQLMIIXHIEDK");
    msg.last_error.assign("GKVIAPHRXFRYNPCFLVDUSTISPOOWSCLDYWSLATIWBGAYQMBCBSWIFKRLFUEZNOZKTKMPNLVTGKEROSCGCEAVNXHMRQRTWGFDRVBGRBBE");
    msg.last_error_time = 0.161729168545;

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
    msg.setTimeStamp(0.544175926873);
    msg.setSource(39732U);
    msg.setSourceEntity(80U);
    msg.setDestination(30632U);
    msg.setDestinationEntity(175U);
    msg.mask = 75U;
    msg.max_depth = 0.664143759173;
    msg.min_altitude = 0.682584705969;
    msg.max_altitude = 0.653373742185;
    msg.min_speed = 0.264818431669;
    msg.max_speed = 0.0654257997887;
    msg.max_vrate = 0.311752872993;
    msg.lat = 0.846507990297;
    msg.lon = 0.165745536757;
    msg.orientation = 0.600830258983;
    msg.width = 0.080220586886;
    msg.length = 0.572819519042;

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
    msg.setTimeStamp(0.115738083692);
    msg.setSource(58564U);
    msg.setSourceEntity(117U);
    msg.setDestination(63069U);
    msg.setDestinationEntity(176U);
    msg.mask = 224U;
    msg.max_depth = 0.593398846552;
    msg.min_altitude = 0.398404722615;
    msg.max_altitude = 0.855321897306;
    msg.min_speed = 0.410062954862;
    msg.max_speed = 0.728387944348;
    msg.max_vrate = 0.410466424787;
    msg.lat = 0.881107314453;
    msg.lon = 0.363909380327;
    msg.orientation = 0.18324387053;
    msg.width = 0.832090598699;
    msg.length = 0.1792811326;

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
    msg.setTimeStamp(0.581251264805);
    msg.setSource(39517U);
    msg.setSourceEntity(208U);
    msg.setDestination(33078U);
    msg.setDestinationEntity(192U);
    msg.mask = 32U;
    msg.max_depth = 0.185666155737;
    msg.min_altitude = 0.241952015246;
    msg.max_altitude = 0.312144961716;
    msg.min_speed = 0.712502372322;
    msg.max_speed = 0.631726449354;
    msg.max_vrate = 0.00906831694541;
    msg.lat = 0.514266001484;
    msg.lon = 0.601871732545;
    msg.orientation = 0.795891945907;
    msg.width = 0.601780592348;
    msg.length = 0.634524914416;

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
    msg.setTimeStamp(0.583909256844);
    msg.setSource(7397U);
    msg.setSourceEntity(172U);
    msg.setDestination(51475U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.989027733354);
    msg.setSource(18668U);
    msg.setSourceEntity(43U);
    msg.setDestination(33351U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.686210321052);
    msg.setSource(49131U);
    msg.setSourceEntity(114U);
    msg.setDestination(5700U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.847314661606);
    msg.setSource(31666U);
    msg.setSourceEntity(73U);
    msg.setDestination(6311U);
    msg.setDestinationEntity(252U);
    msg.duration = 7471U;

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
    msg.setTimeStamp(0.94190890736);
    msg.setSource(38279U);
    msg.setSourceEntity(139U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(110U);
    msg.duration = 55513U;

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
    msg.setTimeStamp(0.258052919218);
    msg.setSource(61158U);
    msg.setSourceEntity(237U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(107U);
    msg.duration = 55160U;

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
    msg.setTimeStamp(0.34787517839);
    msg.setSource(25742U);
    msg.setSourceEntity(193U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(193U);
    msg.enable = 230U;
    msg.mask = 1868411980U;
    msg.scope_ref = 3847131407U;

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
    msg.setTimeStamp(0.212245617421);
    msg.setSource(14211U);
    msg.setSourceEntity(96U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(186U);
    msg.enable = 152U;
    msg.mask = 1279399976U;
    msg.scope_ref = 3919659601U;

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
    msg.setTimeStamp(0.232766808838);
    msg.setSource(15422U);
    msg.setSourceEntity(227U);
    msg.setDestination(42410U);
    msg.setDestinationEntity(181U);
    msg.enable = 14U;
    msg.mask = 3166776183U;
    msg.scope_ref = 3012483876U;

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
    msg.setTimeStamp(0.0967188740336);
    msg.setSource(65237U);
    msg.setSourceEntity(65U);
    msg.setDestination(4216U);
    msg.setDestinationEntity(246U);
    msg.medium = 225U;

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
    msg.setTimeStamp(0.437176036804);
    msg.setSource(8109U);
    msg.setSourceEntity(97U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(55U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.0681337148808);
    msg.setSource(15258U);
    msg.setSourceEntity(102U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(27U);
    msg.medium = 14U;

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
    msg.setTimeStamp(0.317170691567);
    msg.setSource(53002U);
    msg.setSourceEntity(164U);
    msg.setDestination(49293U);
    msg.setDestinationEntity(116U);
    msg.value = 0.20235785506;
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
    msg.setTimeStamp(0.35275398129);
    msg.setSource(41758U);
    msg.setSourceEntity(95U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(48U);
    msg.value = 0.945148923663;
    msg.type = 113U;

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
    msg.setTimeStamp(0.947153610677);
    msg.setSource(50526U);
    msg.setSourceEntity(78U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(3U);
    msg.value = 0.508307072374;
    msg.type = 66U;

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
    msg.setTimeStamp(0.583743029019);
    msg.setSource(49281U);
    msg.setSourceEntity(53U);
    msg.setDestination(5055U);
    msg.setDestinationEntity(217U);
    msg.possimerr = 0.556581713005;
    msg.converg = 0.733745295344;
    msg.turbulence = 0.509559359351;
    msg.possimmon = 231U;
    msg.commmon = 46U;
    msg.convergmon = 200U;

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
    msg.setTimeStamp(0.602107083398);
    msg.setSource(24087U);
    msg.setSourceEntity(72U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(192U);
    msg.possimerr = 0.195411700449;
    msg.converg = 0.495057075927;
    msg.turbulence = 0.334653233233;
    msg.possimmon = 211U;
    msg.commmon = 225U;
    msg.convergmon = 115U;

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
    msg.setTimeStamp(0.693616791905);
    msg.setSource(39025U);
    msg.setSourceEntity(254U);
    msg.setDestination(41928U);
    msg.setDestinationEntity(88U);
    msg.possimerr = 0.459042271399;
    msg.converg = 0.636051254559;
    msg.turbulence = 0.285206505019;
    msg.possimmon = 184U;
    msg.commmon = 12U;
    msg.convergmon = 138U;

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
    msg.setTimeStamp(0.880330019667);
    msg.setSource(39432U);
    msg.setSourceEntity(195U);
    msg.setDestination(32934U);
    msg.setDestinationEntity(202U);
    msg.autonomy = 201U;
    msg.mode.assign("UUZWKRSSLJPTOGZYEIWZXHVNNRFVDMVPGQNARMYQVMQPXNHQBBGJSOKDOQTZOYXIYBXICARKKYTTMNECULECHAIEULXZFQWEKFFVSOJDVUEYHUSMTNEYGLQARINDWWFTHQLHALLOCVJXVGPDUVOWMVSTNRDIEFERAXAKRPMMSFIUBPYSRHPGJYJORJODUBPJHTNPXCCFKEAHCUJHLIWGSXQQCBFTBAMZSCOZBWZKLI");

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
    msg.setTimeStamp(0.531526369146);
    msg.setSource(22163U);
    msg.setSourceEntity(184U);
    msg.setDestination(54923U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 84U;
    msg.mode.assign("USAFQZIDDJBCUTMTWELBNXXUPKMSHDKUWEZTUPSXQGBZFHYVNWNTLBZPPEGKVWWDVMKIH");

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
    msg.setTimeStamp(0.334480328923);
    msg.setSource(45446U);
    msg.setSourceEntity(214U);
    msg.setDestination(9402U);
    msg.setDestinationEntity(100U);
    msg.autonomy = 43U;
    msg.mode.assign("EDDSYAHSCVQOLYFQMMBQEWICDMWXRJAEPKBYWULZMTQHPPKCRUHYXVWMPWRGENWUVDHSFSKGIXLRRFZJKBSQPBILFWLJNIGBOPBVULNCNOSUXKDTKZQCMGFCTCUHMXMPLZAPJHEOQ");

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
    msg.setTimeStamp(0.762655069078);
    msg.setSource(62147U);
    msg.setSourceEntity(46U);
    msg.setDestination(33343U);
    msg.setDestinationEntity(73U);
    msg.type = 177U;
    msg.op = 95U;
    msg.possimerr = 0.0512458384186;
    msg.converg = 0.791918388705;
    msg.turbulence = 0.776683686866;
    msg.possimmon = 168U;
    msg.commmon = 113U;
    msg.convergmon = 204U;

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
    msg.setTimeStamp(0.576081689829);
    msg.setSource(10188U);
    msg.setSourceEntity(47U);
    msg.setDestination(15256U);
    msg.setDestinationEntity(175U);
    msg.type = 147U;
    msg.op = 175U;
    msg.possimerr = 0.170386392887;
    msg.converg = 0.563723391076;
    msg.turbulence = 0.436967090728;
    msg.possimmon = 225U;
    msg.commmon = 123U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.0636606246123);
    msg.setSource(1538U);
    msg.setSourceEntity(155U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(34U);
    msg.type = 237U;
    msg.op = 206U;
    msg.possimerr = 0.934481862477;
    msg.converg = 0.448105917068;
    msg.turbulence = 0.395056149881;
    msg.possimmon = 74U;
    msg.commmon = 133U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.552743271866);
    msg.setSource(2931U);
    msg.setSourceEntity(69U);
    msg.setDestination(8645U);
    msg.setDestinationEntity(141U);
    msg.op = 24U;
    msg.comm_interface = 212U;
    msg.period = 9413U;
    msg.sys_dst.assign("LODKYICQUAXQXGRWCIZSLSEHYBAZQGZAMBHVRAAIVYXFEQ");

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
    msg.setTimeStamp(0.256290079709);
    msg.setSource(37658U);
    msg.setSourceEntity(15U);
    msg.setDestination(567U);
    msg.setDestinationEntity(68U);
    msg.op = 191U;
    msg.comm_interface = 247U;
    msg.period = 8778U;
    msg.sys_dst.assign("RFPDEWERABRGRETFKYQAXWXIMNMYGINQTUJLGBWEFVUOYKOLTWSJYHRBXQUNKBARZBKSGCASIOLIHGMFBJVDJUFEIOMSMQUDEMGETKKOKCBSLWSCFJRTOEMLQPBNVUPOCFZGZUKHXYXLHNCJHGYFQHAEZCARHJTZZMABJUZPVGQPHCXNMWVVAHWLJQTNDPZCQYIIVUREOKSLIVODZAKYFDYSXPSLWPWIPTWMJHCBDZAXTVYNLF");

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
    msg.setTimeStamp(0.285291663359);
    msg.setSource(59890U);
    msg.setSourceEntity(36U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(147U);
    msg.op = 128U;
    msg.comm_interface = 35U;
    msg.period = 10709U;
    msg.sys_dst.assign("OEGKZDQTSCNBLACGXDMVPMGNFKVZURRBGBRKCEMYUFPPGHJWEVDYBRQSWQUNXPEAFPLURO");

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
    msg.setTimeStamp(0.75944199362);
    msg.setSource(32148U);
    msg.setSourceEntity(232U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(214U);
    msg.stime = 3906829247U;
    msg.latitude = 0.169835645065;
    msg.longitude = 0.356529027269;
    msg.altitude = 27302U;
    msg.depth = 28414U;
    msg.heading = 58253U;
    msg.speed = 25950;
    msg.fuel = -106;
    msg.exec_state = 97;
    msg.plan_checksum = 16804U;

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
    msg.setTimeStamp(0.0812134466105);
    msg.setSource(59719U);
    msg.setSourceEntity(188U);
    msg.setDestination(11114U);
    msg.setDestinationEntity(33U);
    msg.stime = 4231154810U;
    msg.latitude = 0.264139939851;
    msg.longitude = 0.197202782739;
    msg.altitude = 31474U;
    msg.depth = 27510U;
    msg.heading = 18017U;
    msg.speed = -27737;
    msg.fuel = 85;
    msg.exec_state = -115;
    msg.plan_checksum = 20692U;

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
    msg.setTimeStamp(0.0570484979767);
    msg.setSource(31243U);
    msg.setSourceEntity(38U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(70U);
    msg.stime = 538651755U;
    msg.latitude = 0.309577396258;
    msg.longitude = 0.225502030503;
    msg.altitude = 42434U;
    msg.depth = 28744U;
    msg.heading = 44405U;
    msg.speed = -26771;
    msg.fuel = -56;
    msg.exec_state = -73;
    msg.plan_checksum = 58012U;

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
    msg.setTimeStamp(0.847520980456);
    msg.setSource(41516U);
    msg.setSourceEntity(150U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(36U);
    msg.req_id = 61012U;
    msg.comm_mean = 25U;
    msg.destination.assign("YJBHSAQMVXGHPXXDQUKVSLYRYYEXSUSBAVIKGPFDVWNCFPTDJMYZQZOXCUCYTGHFXMPUOTUEVJVWMRUCBPWIYNFRNEHQQTVXPMWMQRTOBSCLPIZGTJZZWPLZQHNAVBOEHDKGNXJYWDAKKXEQKDWJOLIVGTRAKNFDPILUFLJIJGEMNUSLTAOBDRUWCZKZNCFCCNLHLREQZHAYMJXAOYORACFMSIUSWEBPBWOKGOJGHNFDTQE");
    msg.deadline = 0.771478601026;
    msg.data_mode = 173U;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.34100070757;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UQGMCQHAYLWBUSXXFIMEEMZMAFAXCDQKOJSZNCDZLDVURGTXUHBMERPRTJOKIPQPOMETEQDJXKCWHNVLTRIFESANQFZBOVOYDKETINVTNINF");
    const char tmp_msg_1[] = {-15, -126, 0, 103, 35, -117, -88, 109, -90, 100, -73, 52, -98, -17, -87, -23, 87, -81, -118, 93, -121, -56, 55, 44, 78, 81, -97, -42, -102, 68, -92, 106, -50, -42, -87, 10, 28, 40, -52, -4, -51, -104, 122, -85, -34, -67, -83, -109, -117, -91, 110, -101, -55, 88, -81, 38, -32, -104, -25, 102, 121, 78, -47, 44, -24, -60, 70, -118, -117, 87, 91, -74, -41, -43, 84, 60, -92, 21, -75, 80, 104, -39, 9, 72, -8, 72, -29, -56, 76, -93, -48, -106, -83, 98, 9, 45, 2, -11, -69, -115, 80, -22, -97, 55, -22};
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
    msg.setTimeStamp(0.713833901778);
    msg.setSource(9431U);
    msg.setSourceEntity(214U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(229U);
    msg.req_id = 4607U;
    msg.comm_mean = 130U;
    msg.destination.assign("CBMVZCBACJREYWFOADJDTCPFEPZUDXDLLTSQQMZOAYEMVTD");
    msg.deadline = 0.706348143585;
    msg.data_mode = 85U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 140U;
    tmp_msg_0.max_depth = 0.252357182715;
    tmp_msg_0.min_altitude = 0.515635928736;
    tmp_msg_0.max_altitude = 0.25869289293;
    tmp_msg_0.min_speed = 0.01934058669;
    tmp_msg_0.max_speed = 0.800597948535;
    tmp_msg_0.max_vrate = 0.227067076785;
    tmp_msg_0.lat = 0.446160292227;
    tmp_msg_0.lon = 0.256353343491;
    tmp_msg_0.orientation = 0.178043317852;
    tmp_msg_0.width = 0.777927903407;
    tmp_msg_0.length = 0.6478836881;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NWGJWPZQDXCILWHREEKPSIBMDHIKCVNCIJFKFTVRVDTMCXTRSUBWLDQTVSMGJPUSJBWXPEIOCXLJSWAGAYZNTCKJPYOBJYGFBMAAKHINFLMHNPBOXKRAPQPMMASUCYLLKRFIGORTVHFCYZEEUGIBWEVWIRCRXUGLFRHFNEQSMJHQQHYNKUTOZVQQQXZVDLVOUYASKSANTZXPBEIXOOWAUYBJWZXKD");
    const char tmp_msg_1[] = {74, 108, -117, 59, -51, 105, -105, 10, -59, 3, -10};
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
    msg.setTimeStamp(0.766309805728);
    msg.setSource(25674U);
    msg.setSourceEntity(58U);
    msg.setDestination(13835U);
    msg.setDestinationEntity(119U);
    msg.req_id = 45794U;
    msg.comm_mean = 230U;
    msg.destination.assign("GOSWJMFWCLYXMAEXNKHPMPWCIIVBRWXMJQQAOFTSHONMHAYNNXORUSZGCODSHVRDAYMJWIJXBJQBINVXAGXWJXXYVNYUYLGSLOOCAEMZNBOVBKRPIH");
    msg.deadline = 0.283622124945;
    msg.data_mode = 164U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3078713792U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LLZSFBDJIAGRMCWCBWSUHXZQEINJTJMUMOPECOYCEWTQFFUFPLTPBVAPUEMCXZXDJKZRTHLHZGLDZRORAOBHGQANGHVFQIVUNWIYEPSTBEVBDXQSVCWGYFWNPADWXFERQNDOVPIMKRWVCRHTJKDFSBAVWKVHVWLOMKXECKUXUYMANIY");
    const char tmp_msg_1[] = {-12, -82, -85, -88, -30, 98, -15, 104, 93, -124, 48, 75, -15, -30, -30, -59, 16, 125, 63, -120, 58, -21, -108, -32, -77, 71, 103, 51, 62, -76, 54, 29, 76, -3, -70, 22, -58, -125, 91, 23, 110, -126, 61, -107, 98, -27, -42, -53, -81};
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
    msg.setTimeStamp(0.270349332064);
    msg.setSource(12524U);
    msg.setSourceEntity(1U);
    msg.setDestination(25972U);
    msg.setDestinationEntity(205U);
    msg.req_id = 35673U;
    msg.status = 93U;
    msg.info.assign("PLJKKKLFSAOEQNCBAXGYQPILGKQRP");

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
    msg.setTimeStamp(0.720808801741);
    msg.setSource(6428U);
    msg.setSourceEntity(36U);
    msg.setDestination(33322U);
    msg.setDestinationEntity(55U);
    msg.req_id = 19814U;
    msg.status = 84U;
    msg.info.assign("VTUSKWOFOJHWBVWAUZDIYRPAVLVQWDNSTJXMLSGFGVFRCCFCIXIYQPMCAPZIYYKYMJUMOHGNPXKKLEGDTHBONHTHQAMHEQRJXEEMDODXQTXEXOOKQBBZIFBBHW");

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
    msg.setTimeStamp(0.97399532317);
    msg.setSource(8219U);
    msg.setSourceEntity(204U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(28U);
    msg.req_id = 38190U;
    msg.status = 213U;
    msg.info.assign("JDGCPQZVTTOFYYUGNOGQDMXDJHLEIAOTSOKTBCHXQCJKYSCGPUELDFVKDWIRNMNXIVXJULSVSGOMRDBDOPFMHDCAHIAKEZNWWMXSXFZWUIRFHYXKZNQVBWRKPBUVTTCFEBACIWLGJGGXRUVPACQRYKMNGXFWEDRTXJTUQSHIWQIQHLBDNPMLMSUTZYZUPOKRHNRMOJOQLAUHIHFYRFCBZ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.234215767638);
    msg.setSource(62956U);
    msg.setSourceEntity(216U);
    msg.setDestination(27521U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.812629809461);
    msg.setSource(46256U);
    msg.setSourceEntity(15U);
    msg.setDestination(36728U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.140308081624);
    msg.setSource(30062U);
    msg.setSourceEntity(19U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.99877440388);
    msg.setSource(5364U);
    msg.setSourceEntity(163U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("BHBMCBTRZONSLSWQMHBVUJEPXDSVJIQDLZNDJFPZGNUVQSYAANRSCRYJLWTLMMUXYPDLEOYGZMKZDXTGFCIFYKIHDMPXVQYHCJWLGINYGKRROHOZEPPKBELFVKGPWUZFCPYOLJKDFQMUNDRLMZIWIFBAEGTEABXYQQHRSKBAPOEQOUHDHVIJIJXDUIXWEQECAKTUUGS");
    msg.description.assign("IHHBICRXDLBLCLSIFWCKRITA");
    msg.vnamespace.assign("PKACHJMNALDGATXXGHFZJSGPNQERLIQIQATFBVOWEDUWFWUZURUJMWYEKWCHPBMYNUBAKTXPDQMEFZLDPKOBURIPNCEHCNZDCXDSYOFRIHGWMSOXRCEYKVDTXWZNVYHTZM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CDOPLWMBGGBFYWSKGKJBVIPPOZSTNBZFIUUFOKKCTJCUVYMFGWAIHDOOIAHWXAZDUAMRZKILINHQAEBNGJLVCERWJSNURQUIRNDKEBMDCOPTXMPZTTANLKSOGTFHQTWEHDRCKYDWEIYVYMYIRLCANEQCFESJJPYFKMWZFARFQSDOGTAXJJJBQUDMRWLV");
    tmp_msg_0.value.assign("WCXTBGLNZMHJZFVAQYGYPGQRLVRIWBIWCRUQOXERMPYBTUIAZQOZNCOFULOWAINCKXKFUEZPGHNTPCJUIBEPZNKSTCMTBQOHJVCTLOZAMSSEQIXMTJRESWVFLFZUHNDMBDPLEXJYHYIBDRLEGJXQKVEAXCAKHKSNYZMSXUMKMLJOKSQXWNGGTPPTJCFOWINQSGHJZARFFVFDUDDRRAVDOWVKHRBLPJXYNGIIYEDAQHE");
    tmp_msg_0.type = 17U;
    tmp_msg_0.access = 46U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KISNXZCPETWBJRTPMCVQTLPVGHIOMPYQWEWVFEVLBBEKVFAWOUXTFLAZGOUNMFTIDZHZIRHSHHMNYDQEKHORKBFTLELAOFFTYNFBUUXZXPILPQRAHBCNJYGSMHOLSJASXFEBUGNPCBWMDOXDJKSLXRSQJWMRDUDVHKXZTFAZCOIQDDZIKIVACWEUSIGYKJSG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DBKNTXWWOOAQWOCRVTMHMLSZRJRKYFVSPIUCXBBGHJQWYURNJNMKHEEUKPCSIWJWZHRKSJZAALKPYBSUZEMXJVWABLEUNPYITVEPQGZFIEHVDBDYINFQHFGFNDKHRCYYOCCZMNJQTVUZXFDDOLFTNMPQTLSBSQLFLWNUBAADLIORVZZYWTPETMCKGYY");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.9330314453;
    tmp_tmp_msg_1_1.z_units = 175U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::QueryEntityParameters tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.name.assign("ZKZUGSLSKNEXLPWZQCRDDMMAMKRVSMZOUCHSXTTYRZWXVWLAJIBNQJWSZLFGILOEVAFHVJQVJJGPWZCZFBJLTREFMDYJCAYSIBNCSGKDDMUZELWTMHTPNHUHWOF");
    tmp_tmp_msg_1_2.visibility.assign("OVSQEARFRFEAEQCAWBCVZQVNWUPMPZDIHYMXGBUDSFPYBTZAPH");
    tmp_tmp_msg_1_2.scope.assign("XNOHYAQOKHYGRCWFYBCXAAELFIXJPVYFIZAHERNMNDTPQYQICGSBHVLCDBHNOBUWHTCGESVIDDXQNTFWRPIBOJDTFKZJASUPKWWUKJARVSTQQZBIVTVFFGLPBLPUNLGTLUSNOCGRUDGWGMFJZNSOTEVAXJEMSKITYNQETMOLRQE");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.983808440464);
    msg.setSource(39823U);
    msg.setSourceEntity(45U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("UGYRSRULYXXMHFBNMZALAZAKISJKPWNFPBAOCNJICXPTRUXOVRIDSZPSGFMFWKJZZYRMOTTCEWPGRFNJQPLTMQAKVNQHQXEENYTGVZJFMDHQPFBGOJSBZXGIKDCFAKREHEXBNNLDUNLEYIDLEWYAPHEIGOGECCVRYWOCAFXQSNXAHWLHGTSMKKUKTSRRWODGYLDYDMLCDVVAZOOMSFWDWVZCTZIVYPQCSIJBHUPVWXIQTUJHHQUUQMBVTB");
    msg.description.assign("KUVCNMUNKVTQDFCXACVVANGBQTGGYWJCQLOOLXOBBKITD");
    msg.vnamespace.assign("NTOMIWMALJRVZKCGDPPTSEDFSXICHRRHNUBUHMABDWUEBOMGYQJSCDLCNKGJVVMVVHAYAWQTHOKIRYZIJXFCPAAIHTUUHTSHUGUTWCZMCEKLRKEDXNKGZCKDVFIZJPUNYRPQZNOJWGIQEEPSFIZABVDTXCDDYEEJXENKSBOMZPGLWXXXWANZFNYFMSMRBUOWBXLYFPQQANSGQMKPFRFOIBGLOFSTOLJHWXTQLSYLJIREVRBZYTL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SATQERPJNHQONLSOIGCXTCESDVQCBMKTKBLOEDVGYLVIEHGCPZWYTIHEHKAZUZPZAAWASXYPXVYJUTAUIRPCYRTCNXOPNHK");
    tmp_msg_0.value.assign("UGOZCLRSHKXVQXNUCJIPHVJLSDFFJFCHWVLKWQXCPBJSZKLOFHPLXTDPTPASYYMIILAVJUXGJMWBQULUSGKIVDZNTWQFZJCNJBWQADENBRKEPISIXMBNHRCHTWRNEKDJAQLRMIXZMQQGAMAT");
    tmp_msg_0.type = 139U;
    tmp_msg_0.access = 31U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UEUNQSCJCGSOWZBFLSIICYBEQGFURJWLYTSPHKYHJXKBPVNHCNGBXTILJWTTARQUAGOEHBOCAZCQXGZWNMITDZBLSHYUOJBIPMLVBHROAEIADMREZSQMDTWROVVXLHZJRUUSEELYYXSGAJCOKIABDMGNRQNRTKPGQPHXSFVYOYMDDGXWNMTMXLZWIMFKUFMLGPNJYVPSPFKEDATRACHZXKKVDWVBFUCQVJXKQFIFLCPZRIYNOPOZDVNWWT");

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
    msg.setTimeStamp(0.994604179952);
    msg.setSource(12177U);
    msg.setSourceEntity(242U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("WBXFTOBUZURHAXGKLYJ");
    msg.description.assign("QSYYKQWHGMLIOUFYBKEPUYGCUVXTKSYOZKENZ");
    msg.vnamespace.assign("IFVFHRCJMSZSNPGQYXYLZSJXNAVLQCCAWOCMFDNPHUIOLZIPOOY");
    msg.start_man_id.assign("QGKDBEVMJVOQJZTJFEAAAZLDDUIPPICPKUWTTOKCSOSIVWTGYZYFSREMXKUGGLNGNXMHKCDWTWYLJEQXZRFKALNLVXQUFWHOG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EZIXLWSOYXIIYOBCWZFNJKYIGRMKRQWKZVJNFCHSEJCTCPLBBAKPWPDBYMJ");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.943400453726;
    tmp_tmp_msg_0_0.lat = 0.977698149262;
    tmp_tmp_msg_0_0.lon = 0.317988021918;
    tmp_tmp_msg_0_0.z = 0.961060041782;
    tmp_tmp_msg_0_0.z_units = 29U;
    tmp_tmp_msg_0_0.travel_z = 0.696874299142;
    tmp_tmp_msg_0_0.travel_z_units = 27U;
    tmp_tmp_msg_0_0.delayed = 120U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ExternalNavData tmp_tmp_msg_0_1;
    IMC::EstimatedState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.973353292751;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.335724254761;
    tmp_tmp_tmp_msg_0_1_0.height = 0.189634418446;
    tmp_tmp_tmp_msg_0_1_0.x = 0.73311081445;
    tmp_tmp_tmp_msg_0_1_0.y = 0.772328396567;
    tmp_tmp_tmp_msg_0_1_0.z = 0.182618805699;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.808956063905;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.626121385526;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.447436875624;
    tmp_tmp_tmp_msg_0_1_0.u = 0.614797457085;
    tmp_tmp_tmp_msg_0_1_0.v = 0.976590065917;
    tmp_tmp_tmp_msg_0_1_0.w = 0.400688438011;
    tmp_tmp_tmp_msg_0_1_0.vx = 0.943082185803;
    tmp_tmp_tmp_msg_0_1_0.vy = 0.0159257063507;
    tmp_tmp_tmp_msg_0_1_0.vz = 0.365652277142;
    tmp_tmp_tmp_msg_0_1_0.p = 0.9227818345;
    tmp_tmp_tmp_msg_0_1_0.q = 0.0684926373452;
    tmp_tmp_tmp_msg_0_1_0.r = 0.332785272915;
    tmp_tmp_tmp_msg_0_1_0.depth = 0.166294991001;
    tmp_tmp_tmp_msg_0_1_0.alt = 0.14747320934;
    tmp_tmp_msg_0_1.state.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.type = 175U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YHTIBCFBLNXQFSPJCMHMJSBDKNPUTVDZASHZVSPXVNJCECAPNGOMUOWGEVQTRJYKERZYGXNTYEFFRWDIUQHJBPQKANWOVZ");
    tmp_msg_1.dest_man.assign("ZBNBIQCBUWXEIEBTMDODURFGFJOZTEAUGZIEWYKRIFVAVXCIKUHIDAFNSMVKCOGBGVFTCCZVUYXOTTHRAQHEHXWOUOWRQFLHP");
    tmp_msg_1.conditions.assign("IBLDVHYZOBWPSORFXIAKLCUMAPZXJLIYUNGFFKAMMZWFPTEKZHITUUTLRNCXBCRWOCXICATTEUJOZRAQAZREOLVVWTRZSWDDLXJBKSSXNXNQHUGPLFVEAMGEISDOSAPRKMNDCJMYQCEQFQVKPURGCMYUQPZCAE");
    msg.transitions.push_back(tmp_msg_1);
    IMC::QueryPowerChannelState tmp_msg_2;
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
    msg.setTimeStamp(0.273330007708);
    msg.setSource(9247U);
    msg.setSourceEntity(161U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("UKREQKMODNAUSYJVLXZBHPRYZWGVQPSLUAKMFXSUIDAYPSMSVNEQUEGBINIOFTJRZHKIWEKBGJFRNNMUMRYSESXZKAMEZGBGFDVQXCZIOWVYKRLTRDPTFZTOIYCMBEFDWUQLBOLSQVCJZCJHLYFWXVZHJCKOJVDDCUTYGBIHCAQJNHO");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.513105284337;
    tmp_msg_0.lat = 0.58609554188;
    tmp_msg_0.lon = 0.894102811759;
    tmp_msg_0.z = 0.144480969177;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.travel_z = 0.0817178131536;
    tmp_msg_0.travel_z_units = 78U;
    tmp_msg_0.delayed = 84U;
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("XRKINVIRZGXJPZFAEFJVCUODZHDFGMASUBEAWETLCWZMMVODNWWPIDKYEDXPCRJIDQRFHLPTPSHNDBNQMFJHXQSYPTSRQBZHRLBKSLSFBIAOWVCXUHKPUJLLEGSWTMRYHQF");
    tmp_msg_1.visibility.assign("GSYLVECEETVEOABJNEQXFRCWCWLRMLNZVZFOKKSSDPIUZRADGMVWXFEWMZCPLOCMOOOAYTUZMINIQAGYAZJINHEBDFPSUVJJUZT");
    tmp_msg_1.scope.assign("PPYKZUZJILGWNZWGRXZKDWNDVOHGPJNYPRTMPNQFPQSFRAEHTZJFSNSUUKMSVHQMOXWLIFHBOQOGWSLKLUCBMCWDYYVFAUTFCHSEJUWELDXQYAXQJPOVBQTHPOALFFKKEHNVKVCBMOHDUTIEWRIVZYUAQDNRRKQOITRUALVCXBZOACAGZIIZVVCBNJSXMGCIXMTPBQECLIUSGTJGFSKGYWYRKAJXYETMIBMXWJFTYNBLZDNEDLEGBDMHS");
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
    msg.setTimeStamp(0.194902444271);
    msg.setSource(25018U);
    msg.setSourceEntity(243U);
    msg.setDestination(36974U);
    msg.setDestinationEntity(38U);
    msg.maneuver_id.assign("WDRQURUMDRLUZQYMXDMEUSSVPXIXNAFJAWZKAIBBNKKRIYEGWXFSOSGISKYHQOAPHGKTJWFPLECYJOLNIGOHDHAZYZXCTATRRSLSRPYBUFCITNEQIVLEHNNOPIYWCJEPFBVVTTVWCJKEDLBVFJBCSPRSEPMUQTODUJSGKVQANXKQGWYMQPHFTNXLUBZHVUQXWDK");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("JTHQWUYTXZNSFUCEKNOWFBUZ");
    msg.data.set(tmp_msg_0);
    IMC::Event tmp_msg_1;
    tmp_msg_1.topic.assign("JFERFKPZVEDZZJWKHRUCOYQSRTTUQDCKIWLHELIFUCWXOJKKRNNZSMTDP");
    tmp_msg_1.data.assign("COXYHGUFYCNTFLSZAUWCDQPB");
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
    msg.setTimeStamp(0.802322078122);
    msg.setSource(26192U);
    msg.setSourceEntity(54U);
    msg.setDestination(20125U);
    msg.setDestinationEntity(248U);
    msg.maneuver_id.assign("YZLDXSRQUEFGHMNGTHBTUSSQOOCBVWIWAOMELWMJAJYMDZSZBARXVLLRCBJSJMKPBHCBTUAGWTAGNJOFYJSFDJQLIEPFZQKCZEJUDOIMAZPVKGIOXTWOXNDIPKZHETMQVHOYSBMSGRYQJXYAICKMHVFUSCVIJNNEYQRUZNHDPDYEFIYEBLMFGOVN");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 44189U;
    tmp_msg_0.control_ent = 214U;
    tmp_msg_0.timeout = 0.0725664924113;
    tmp_msg_0.loiter_radius = 0.644478623802;
    tmp_msg_0.altitude_interval = 0.138457651112;
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.305623947402;
    tmp_msg_1.x = 0.0052620078547;
    tmp_msg_1.y = 0.395403248018;
    tmp_msg_1.z = 0.390053416177;
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
    msg.setTimeStamp(0.557201557678);
    msg.setSource(11142U);
    msg.setSourceEntity(2U);
    msg.setDestination(26555U);
    msg.setDestinationEntity(216U);
    msg.source_man.assign("FXGVYRHFZSNFGLVNYSQURRMHVRRYNJBUQUWOAEYOKRVZONXIKTCHPDQESSWBMUWSLCOTHTPTCBQQLUHB");
    msg.dest_man.assign("NAPXUIGHZAWGXDODBLWQFLTRJOWVZIXODBYMVJERGZJPJCFCNZVTVWUQETDTTJQHUMSGEXLUHDUQSDMRSYTKHIVTFWBPTCFQYGPRAZAJYILVK");
    msg.conditions.assign("SBZNJPGVWOREMKXKL");

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
    msg.setTimeStamp(0.05774630459);
    msg.setSource(3903U);
    msg.setSourceEntity(195U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(149U);
    msg.source_man.assign("YXGAODULSQFDGYMJHGHNJKTNABEMWTBCGNSQLGVMUFCDOLELSXGJEBZCWJXEOIINFJPIIYIODBATRXKKLJUAKWXSOVYPWSGYKCPGXYQLXAQMYIYFVZQVCTUVYMSWKPHXPBZZIQKDSAXDBIGOUKNBHUZTEMF");
    msg.dest_man.assign("JACLZYMSUHKJCBADSLMLBVSNRAXXSJNNTJTXDGNCWAFZDOKETERHQAWJEFXLKPPPECBJAVGMYJKNBEQNTGGDWDHSDILRMXOOPMQNYIGVRFPCVKSZOWTUYNHPEXAYUQRJQBSZWGBKDADSICUWLGIFRFHUMN");
    msg.conditions.assign("JGRWQMYQNHPTSEWEUMFJRLITZSGPCYMQIFROFNJVOFSMAWWGDAWDBUBOUHSYREBHBCFEWZGATQKUTVKJIEJGUSVJHRKDRAYTYCYIZBODJUHKVCKNDTPULZFVNOTKGKXYZWLAFQJHXDOBUPVVMDLLXWLFEXNATSRWQCXWZNNXERSOZDACIHBHMKMPAVQZMVNEGCGIPNTSYPKMSXFGDSRBEYLCAJPIXQLPYODIFBXZEXLABOTCHJHRPIC");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("NADYGLEEQORNHRTVQKBANAYYLNUXNMJEFGYVQMMIVHFVEXHWGVWQNNBZDUGRCKLZKZPRITXGCTTQRPPSFMIDFXFLIGEZURFNAWWXWWPCJJMOWSPXIWUPORPHOHSLSIBBRKOFSSJAYCDLAMYBUGSAV");
    tmp_msg_0.type = 183U;
    tmp_msg_0.properties = 196U;
    tmp_msg_0.durations.assign("RSGIJPGACACUIGJVHHXZWUJYVKOPYNLYBGPQCHZDODLCEMSFRLRIDXAYWZOQCHUPCVTSAKRMMTLAXUBPNSJANVZCLWHDTJMTYLWVTBYSBLWEGINIQVZWRAXATYUNRBKWGHQCJWTTDIYQONEOWHURE");
    tmp_msg_0.distances.assign("PHJXPWZKUHYNBPQOBFUACJUEKXFKFKGPREQHTPLVYOMTKQBZSSCYHJRHFLIGQOVWXLMRYOTDBTXPMCJEPMWBLUMLFWSYRRWVVEHOGYNOZLBAOVNUAQIDBUKNUZYBMUQNTRCHUGHILECOWMEWSWIOIAJKRDAZTEUYGMCNCSVXIKGKDJXLRSRIFGFXVIVYVHNBJFZJZSFGZHNSTZFQE");
    tmp_msg_0.actions.assign("NGFXKSUFBKZQIGWBIRBHVSLL");
    tmp_msg_0.fuel.assign("HQPLNGKAXSZMMZHPODYIQELYVKJIVCWDAJRYOUZJUIAVVAY");
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
    msg.setTimeStamp(0.671454952887);
    msg.setSource(48127U);
    msg.setSourceEntity(104U);
    msg.setDestination(64828U);
    msg.setDestinationEntity(139U);
    msg.source_man.assign("SKEXNBWMGXKEARKTPTWKMUJVUTZOOTQOQNJIWYKVHWANDAOXHMHZQ");
    msg.dest_man.assign("FOVITMSXXWQIAYCFQ");
    msg.conditions.assign("VOQTZTVOCQRCPDNYSUAMYKEHXFEHTKAZLJPKIZHDQGXQNSBEHWSNTCKBIMAMGICICJUNMACOCDTZUWBCHYMHVGOELVIKWDIYFDLFBYLKLXJPUXBLFXZJDEUSHWGLEJVZFKYHRQVFUSKDWATPQPFHZUJRYGIMOPLNPSMNPAUKSRYYWMKAIWVGAOLWXQBGURBHSTTXE");

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
    msg.setTimeStamp(0.0867330578007);
    msg.setSource(10405U);
    msg.setSourceEntity(103U);
    msg.setDestination(49361U);
    msg.setDestinationEntity(87U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HMHDZYKPWEIKGRVPDNENBTWARHUADQXGNRITWCQRLBSXZYCSOAQBRDPNFSISWRTWACILIIOHGCWCSHKXONJVVWTOPIAXWQZFRJHEAQYZTKEHYCRXG");
    tmp_msg_0.description.assign("YVDAFZHJKUPGCAPGZHKITJCBOVUYVNUBXATYDJQFFAQLGYSOLNXEEMCEBSMBCZRKQYIFJXNCARHRQDAYHXDEAYORRXFWZUBMSVROLDHUWBIDEQGEIOKCGKXNJWCBDQDMHNXRWHQAXLTEWYWTFECIMDLSRGMOSZTXZWSNZPWDHQOQZJPHFBSUNVOPWKMGWXFNIRPTLULJVGPSTISVCAJRKKHUKJYCMTFOKJGLMNQIUGELMBVZZYVNFOVSI");
    tmp_msg_0.vnamespace.assign("FFIRNGCQJALJKNBDFJHWQUKDRAEDVVZBKIYVDTBKNGGMUFRSFQPJVIPUGGBCETRNCLXXWQUOHDEZHXXWUORZEYBFLRPZJQYOONXHPQQVDSEGXRQDOPLTSDYZXYJKNKMOMKBNWGCZLSSEAVTTDWPWSBI");
    tmp_msg_0.start_man_id.assign("XVKOCGQQINAUCSQTHSCEFCCFIDBNYSLAWJYYZFYRVLPJBNNHJLVQFPIGZBVHQMXZHQARTIVROBBBGWWMGPCZBKYYUKDFYQDRESOIJIORNRKEK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NDPGOZFPIZTDYTNDGIEJTQVJRKVUEZJJNXMXGUXLZYUGBOREVWAHMBWQXXBRSQDXOLLZVGUKPEKTHVEARHCCMYPEFDFXRCGUSNMNOVWYUNDOHJYQFFQJGFIFTVKIYCOHMFKEVHSUUILGJDJWPBKARBBGFHBLPZZQIVDWTWEOYIREWIDSXNXSZBSKSLTAUAQWDXCHYNHMCPAWQRCRPCZHKQMQMT");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HJPVUTIOVYEHAVLBAFTELKIKPGYYDCUKWTMICVWFOQWYWGWPSQBFGRXALVDBYRCFCOGPPHMFSIZBYUCUDBNOOXXHPSSTYRLQCQLIZOKXASRDVASUHDEZBSMGRUGWHYXRLZBQBIWJRZZOVCWISMTNPBPSFIQWJFLJNFLDRQNIFGZGLAETCHXEQPFXZOZZRDVKXYRUKDJIKUAOSNATUMWCJETMEEJJBEENJNHQTVX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PulseDetectionControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 99U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WQSLYQHKKLCPOEAGIHGYRMNEJPEPNMWCZGTGSQMPPNFHBAUKCOFVXXNJYEZNNGWADDSHRRJDVPUMEYHDXSBXRSGMRUXCLOHIDAQXAFBZIFQWBSZOXFQLFFTCVZNRELXDWTJUPRIUSLOHBDVHQKCNIUUWVTTJHJPLIBMJGURMKPEQGDWATKBJCEYBZMOJ");
    tmp_tmp_msg_0_1.dest_man.assign("EUNELEQHSVFCMXWGVJWFGIBYCVPHOAIYYZFNSKTOEVARXDQQRSWILHIHGDDQPCYCWUIKDZQSPZMROLVDALANENQTPWAAFUUUHDBMDKYXTCWSCZMIXOVLHNJQTHTBURKYPDCMHODVHWUM");
    tmp_tmp_msg_0_1.conditions.assign("OIXJDCKSVKKVUCBNYDWPGUINEVPSFAUGEWCSZJLRTCOMOMXVHMTCFHARQEKWTBCQUJLGSHTQEIJMJZAAQUIBRFUHWDZMSFZAYYQVEYMDYUAWXPTYZHNHVLZNBWHSLDRHSGNJNDOPGPKUYEUCFTQFGLZTUEAQDCSLQXBIGVZCBSXPJSNGBVXFLDDOJTOXHRBLRMNC");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EstimatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.0740363611116;
    tmp_tmp_msg_0_2.lon = 0.522284977341;
    tmp_tmp_msg_0_2.height = 0.746003214177;
    tmp_tmp_msg_0_2.x = 0.374051477481;
    tmp_tmp_msg_0_2.y = 0.327614630225;
    tmp_tmp_msg_0_2.z = 0.851703421123;
    tmp_tmp_msg_0_2.phi = 0.268067650488;
    tmp_tmp_msg_0_2.theta = 0.441772147584;
    tmp_tmp_msg_0_2.psi = 0.691130279728;
    tmp_tmp_msg_0_2.u = 0.583837072471;
    tmp_tmp_msg_0_2.v = 0.541677656087;
    tmp_tmp_msg_0_2.w = 0.856940965401;
    tmp_tmp_msg_0_2.vx = 0.192208290709;
    tmp_tmp_msg_0_2.vy = 0.331813810973;
    tmp_tmp_msg_0_2.vz = 0.972766407238;
    tmp_tmp_msg_0_2.p = 0.146408913506;
    tmp_tmp_msg_0_2.q = 0.350979728257;
    tmp_tmp_msg_0_2.r = 0.130009149504;
    tmp_tmp_msg_0_2.depth = 0.665189981416;
    tmp_tmp_msg_0_2.alt = 0.944247342045;
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
    msg.setTimeStamp(0.680449561072);
    msg.setSource(57756U);
    msg.setSourceEntity(31U);
    msg.setDestination(60787U);
    msg.setDestinationEntity(227U);
    msg.command = 164U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WIOMSFVTPZDGRSWOVZFGYFAHLNGGAIBCTINGDIRHCVSSEQYZAOIFYEFSUKPJFBBLGNYVTZXBKCWYUNNOKNQVRLSZIBXTUEMCHDHYCIDUHLAQGUAQAEYJVPMTPKELENCJLFMLURKJFPHMURJIDHASOVTKZWSGWZDOXIJ");
    tmp_msg_0.description.assign("PFMEUSWHKWLAYVXSMNUEHKEWDOALBKYCLBNFGSKTVBGXQDAFIOLTBJXJSLDNCAJPOZFUOMULRPZGHGIK");
    tmp_msg_0.vnamespace.assign("UIOUSJHPHFRPONLYKXAFVVDOEGOOHOGUKKWHVAKITZVOYHTXMNDUXKEYQRVDRVSZXYLONTBUYCDCCGKSDIJRWZEDSAXNDKGPDLCRIAEEWGJHEEHRLRJBWRFZTKCFBQIVFTCDSJXMRFUQACSWJCZPKZFUMTPQUJGZWYBPBICQBULSHMITXJMBJUVRYIQAAAFZLCKAVLEBNPNDPYMXWTWMBHQLFFBGQJTON");
    tmp_msg_0.start_man_id.assign("CBOILJATDXMAGJXRRXLZORQYNOKVLCUQCTQMZBIXAHKAJTPWE");
    IMC::RhodamineDye tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.857360853886;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.65765675056);
    msg.setSource(30636U);
    msg.setSourceEntity(0U);
    msg.setDestination(14876U);
    msg.setDestinationEntity(34U);
    msg.command = 138U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CBEBTRQHPQIHBLQIOLDDCEPACCJUBULYRQDZNVXDUSXZWA");
    tmp_msg_0.description.assign("WGDRLADRIHAVTJHTNOTYWMHFOFBQDDTQRUKURTLGAARBNEAHMSFIZKYKMSFEFELPMKJPXOWWDIPBEGLRRPUHHDEDFTZHQOVQDUYPLRNXJPFBYSAFYUBWSSJVYLIQLELXJQSTKXKGCOMBKXBBNJUMVFCWOYYCGCWIFGNCCBQORZEDQTCUMSUJIYECOA");
    tmp_msg_0.vnamespace.assign("UOXCCUFXZSCANLTSDBHQQATIGOYJFHUPDNXZBWPGXILZMCYRLXWSBJMJDCOAIDEMHEXVOVGYNPYJVPOODPGLYUJEGSLAQAKTGTVOZVOYFMGMWBJLDZFIKUCKESKBTVMPYRTPYERXTHRXMTVEGJZIFQHOKPRSQYRWEGIBSVTXNDFQZUPESMYWPAFWNIULDHILIKJBBHADZUCHZNUC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLVKXNICDHCQLXHWPUSFPGIMXTUHAPEISVOUTCSUVOAIWATQAUPPBRVPZOQUWCGTNMWMLQGFSDOASMCTHRLJHIEGBBZFFHBGJZDYKQAWQDNWZBRYVETNIJIZFBBTFKEGGWJLWRLOZDLGEJTMOEIRUBMCVXRMHAAZWKGPYNFXSXUDEHVKDNUNPXYKRNLMEHGYROUVBYJKXHRQPKJCNSAZIVCTQFSDQTDVZBOS");
    tmp_tmp_msg_0_0.value.assign("GLZGSGESDBYRNOIKPIBRGQVVHEUNCCWSXDMWTFQVBVEDOGRGYMHESEADJDKAQTTZOFAVNOBNNYQJLGIWARWYYTBSBICZUKNCMAYAJPKJWDAQLFIPJMWPZBGIDWPFQHORICIUSFXFHMCTXWZJYEOXMLECQLACSKMTHSQPEWEKPOTGJTVLZWXNPRKSVRNLJTBUFNRFXCLCDHBDLIUOMIMLDUZHKYYVXEHKVF");
    tmp_tmp_msg_0_0.type = 242U;
    tmp_tmp_msg_0_0.access = 235U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UZZPSAXBHMZYLNXCUCQDNIBPYHJIUVWBLNFVSRHQXIDGGCVPFEBQEXIZCHDNOCMORPKALQIJUWZPALMKSWUZTRKHTLFYGESZKAOCUQNVGRKHCBFNWSDCYHBDPUJRRNDVTQMUEJPDQYKLOYKVSRFJOSWAJTEAJQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DISFLXLVHGLRLZNJZXVKTFGHOEPDBKNIQRGIXJGLHYWGTXPCQTVGPGYKRACKOZAVFABAUIEPOQCKQDNIBQIQNLYYTUPCPAZNICRAJOHNSLBIUSMDRVGJUGIKFSVJPMHENSYLDCEOPZJWFABJXDVWEFMEK");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 37705U;
    tmp_tmp_tmp_msg_0_1_0.flags = 82U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.379730136489;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.666313293446;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.759289447518;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 127U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.522822174434;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 56U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.521341263688;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.455842632072;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 110U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NBUDHCGOXTYEESJZKDEGIVYHVLOGSZKJITREFDYXBOHPMFZIGJOMGXBLVMIHJRFUKYZYNXYUMAXCNFBCPUIJNZKOWZJDAFYCKMQIBSPGOVBSSGJOLTPNAKVPDAPYLABWDTQZAFXSQVFBSHVXDMMLWRVWKTCBNNRUPWCMURYEZUWEELNOTKJEPAVEUQLLAQIJHAWBIHCSRNMZPUORWXEGDQLHSZTGNMRVLCYIHKFQAUFWSDJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::HistoricEvent tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.text.assign("CPQNLRVDPVWUMMANLYWEZMCEGOWMYJHFHXINYHGWLIDTFGBYIFOGTJUOCRVAKEPTVIWAJZZBJQMLKSRSLPCEPHKFMGVIQSTSBSCICZKUHPIBXRAXAFYYKKHCUEUFDNXQBQSCWBSEKRLHOQMCUKNHNJFDUNIQLJRJTQTVXGBAJVYUPYFRUTBJTATXYNMOPMKGDQEOODRZDYJSDOCGOFGKBTOWSEVELUXVMAINXAFPZEDZPQRZZXLLWI");
    tmp_tmp_tmp_msg_0_1_1.type = 137U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::RemoteActionsRequest tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 88U;
    tmp_tmp_tmp_msg_0_1_2.actions.assign("WCZQEKOEVROOOLOBKKVLSTZTJLGKVBDXVZJDPVKUATJINFWHRNIMCYDTYUGNFEQDXYBXCOIUEGGIWSQZVLIAFRQLBSQAUBUHJFBKKJEJGVYMMXUEFAAIHSCWGTBSPSBXLEXPXAQOBCNGKCVHSIQFSEEYBMLMHHAFRVMWURTJLXIOINGQSRMMWSNNTXHLXPDRWJZTTJPHFURZMPWNUDCZHADNZDZMTRGIPOYDAYQYGFNKUVWJPPQEPKCOYZW");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Phycocyanin tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.780617203702;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.690075832048);
    msg.setSource(39302U);
    msg.setSourceEntity(76U);
    msg.setDestination(4381U);
    msg.setDestinationEntity(208U);
    msg.state = 176U;
    msg.plan_id.assign("HYGPQCWXZQSADKBLITIJHSUHNNSFMBSJJEJLGMFGAUFJBHTJECZOGOEQEARYZATCZCWXNYRHOMOHAJTMMXOIXRPLQDYMMDGYCQILGKJOLBUZHWHRNVNIEFFFVQBDKZLIWSYENPTVNFSSXZXZSMBYCPJADWDLUWUVWMREKOXIWHKVKKDDBYLBNQAXNVMPBQZTLPQERUOFRIVDUACUJXHB");
    msg.comm_level = 182U;

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
    msg.setTimeStamp(0.511351932174);
    msg.setSource(18551U);
    msg.setSourceEntity(155U);
    msg.setDestination(41305U);
    msg.setDestinationEntity(97U);
    msg.state = 90U;
    msg.plan_id.assign("WVJQFPNNLHKFXGGNELBZJNQPUMPKDMJEUBKZLETOHRDUSYMUQKEOGDYBLQCEWGJRWEEJICDVLIEXFRUJUDVZTVPZZUAMAPBAHSMAMWLCX");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.655886630927);
    msg.setSource(23165U);
    msg.setSourceEntity(117U);
    msg.setDestination(58357U);
    msg.setDestinationEntity(71U);
    msg.state = 226U;
    msg.plan_id.assign("EVYRCESFSMUUZSRYNVDABFPXCJQLDLEVOTEHLNIDGCQWMEHKGUAAQZLOQSDOZIAREZJKNBJXJBGXPCPLFXXRBJPFZDGVZKOVCDSADICHWEWUTFUOFVHZHRAPXCYNRQMYSOEQPBFKGVUSGNXVFBMEBRKYDMUGZOQGUKLSJANZKCVW");
    msg.comm_level = 5U;

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
    msg.setTimeStamp(0.315595839415);
    msg.setSource(19568U);
    msg.setSourceEntity(93U);
    msg.setDestination(53328U);
    msg.setDestinationEntity(245U);
    msg.type = 24U;
    msg.op = 27U;
    msg.request_id = 39300U;
    msg.plan_id.assign("NCGSQNAOWRUIKMOJNWIEMCIKGPSVWKYLNQUGTMDFFOMIHTOMFBJRARDCSFPYYXHQSETAORRBQLOMGXVZQQNAEDLJERYGCBQWAUUZULIDDLCKIKJVZNBHYJXTXBAWDUFTPPCGDKVWEZXIVRHKOTRQYUWZVHQYGENKYSPOQFKORWISILEVCBHEHMEJLXXVTTBCZCLIJAYGACFWPZDZOPBSJMHVXLJUFFNDHKSXUNGPHMASZVGFTMPBUBAJWE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BSOTBSHAZNBQBCWTECUSLLVEKAWCZQDIRXYIIQZGMYHREFQAQWICUVGIUNYQKQWVDVKDEGUPYWLLKLWZXSJUZVKMSFDXRCSAGVLWZOJENXLFQYTGNGZRNMXYMTMPIEAPXOBLHOPJTNBEVGUHZKYTOPJFZEIOAUCHYNKUOFZNLFWWXSHSKVMGVRAPXVMJNOMODIRQARPHESIYGXCDUPPXMRBMSDGNRCCWFDLHBTK");
    tmp_msg_0.sys_type = 39U;
    tmp_msg_0.owner = 3206U;
    tmp_msg_0.lat = 0.841615150366;
    tmp_msg_0.lon = 0.359223402676;
    tmp_msg_0.height = 0.524917531005;
    tmp_msg_0.services.assign("VLTIPWUBLSQIYIVRCXEAIXDQWQDCHNLXZHAPIHWOWZKRYBNALPVGJPVVPAGRSPJTTIUFVXAZCFJHPEYNCRDWUMBMVSXINTKABSUBGIWEPTMKHNFSHZYOWYJDLCGRYLZID");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBJXEPLMGCTKALDIIMJXEWDSXYFTDBFUIQLOCSJRKGYHSIKNGDPOKLDGLWAXHSLHZWTVQSMAYAVDYGTIEWJQNFXXBJWPCOWEFQDIRAGGNCIPSNJAAZBRZMVOJ");

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
    msg.setTimeStamp(0.581389926666);
    msg.setSource(64012U);
    msg.setSourceEntity(238U);
    msg.setDestination(9174U);
    msg.setDestinationEntity(26U);
    msg.type = 130U;
    msg.op = 97U;
    msg.request_id = 40996U;
    msg.plan_id.assign("HIUOZAYZYLZUTWMDQWIQBSRQBRFXYCTQJBMSWULMDFLJPHRBHHSBGPXCUIRRCIYPTQEXETMPXFFPDTZYGYSXRFIJPKSHWIGOJHVPMVYAMZYSEEWVKQMUQEDNVIQKC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EBIMRFWOAGUAPMFGQHLZPCPNVWECKZOMLMUTVQWCBASRDUDJRRLXKGQUGUICJFZGKBAHSHLFILRDYOSAOZEMZGSAINRCJEXJDXTKZJZYOUMBQTSUQABDO");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 31144U;
    tmp_tmp_msg_0_0.lat = 0.129107633995;
    tmp_tmp_msg_0_0.lon = 0.868233526076;
    tmp_tmp_msg_0_0.z = 0.281034059217;
    tmp_tmp_msg_0_0.z_units = 58U;
    tmp_tmp_msg_0_0.duration = 10697U;
    tmp_tmp_msg_0_0.speed = 0.73109145464;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_tmp_msg_0_0.type = 231U;
    tmp_tmp_msg_0_0.radius = 0.767193685345;
    tmp_tmp_msg_0_0.length = 0.754362589542;
    tmp_tmp_msg_0_0.bearing = 0.823641782959;
    tmp_tmp_msg_0_0.direction = 91U;
    tmp_tmp_msg_0_0.custom.assign("UBGDUWGHEWROHRLBXNKMMOYGZKOTZLJIVMXKUFCWQRMAKQQLAAJUTZTWSWOTJCFRHKHPXUCKLWMKSKNRSHJAKQGTQCDDLZOIDNEIPBHSQCIXSXZMYPFCFDCYASBXLEEVKDRDUEJBXPGDYVOXVFYVPVBCVCLIQGSRTNXSFNENESNIWZYHQHEZNU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrueSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.776377070329;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PulseDetectionControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 38U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWNXWQNAMESIWEXYMDNUPGQDRRSFKBLVTUBFWLQWXTEOVIZPNMYFPJAOHEKCZMFGDVPBKBMVOCMLNJACSWEZAZXTKDSVIPXEUFXHPTBJYZJUXVJGOSONIGIDKAPEHUZBCROJNVH");

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
    msg.setTimeStamp(0.468283471343);
    msg.setSource(54684U);
    msg.setSourceEntity(194U);
    msg.setDestination(45794U);
    msg.setDestinationEntity(195U);
    msg.type = 13U;
    msg.op = 162U;
    msg.request_id = 6746U;
    msg.plan_id.assign("HUCCZHZEHQSAGHCEGJXRUXJWPHMRYWYDRARLDSCOQNTOMWRQWGQPGDXAVOBQFMMUYSFAUNRTLRVVKKHISMMYJASAYSOSIEOKDFJKFVAVACVJTGBEWXHUCJAJKNDBPFQIPUIYLNZOWQYPCKCQLBEOJPGUPFURLMJFSWCOWWNGRUBVLMIJYTXHWEARSDTBNZ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.497069542422;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 20251U;
    tmp_msg_0.custom.assign("VICKXGVXQLOIADFGJMAWATCVFBELSVHRBXZLJWFXZYRWOEUTRAKRMFCDSBEYQYQWMAQUINHSMFTGPSVMXOIKZHADFSPEQCJOQWDLTPY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFPARINLGXXAOEEJWWZSAWZVAGHJYHZTMQYNCUQWWPACWVPURCMQTGFOXMJKAOTQSBFERBDNSWRHXFMWVJEBUFNNVLIOPKDOKSRSSBOKAZVTJAYVRPDIYTLLGJ");

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
    msg.setTimeStamp(0.165303444053);
    msg.setSource(53848U);
    msg.setSourceEntity(187U);
    msg.setDestination(50829U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 50342U;
    msg.plan_size = 1567656213U;
    msg.change_time = 0.199310711032;
    msg.change_sid = 28570U;
    msg.change_sname.assign("QLYRNJDEWVKCIBTSIIRQKNKGJWEIKHZACHSFEAMAJMZJONIEILWPOFRYWADGCCZAEXZZABMUYDQFOFMGMUAVUQAMDDPZCGTNPXFIXKMUT");
    const char tmp_msg_0[] = {-11, 22, 26, -8, -114, 55, -55, -17, 94, 103, 30, 51, -117, -100, 41, 60, -32, -8, 115, 110, 95, -69, 108, -96, 81, -69, 11, -60, -89, -8, 34, 112, 49, 55, -77, -56, 82, -37, 102, -55, -20, 126, -36, -28, -105, 10, 124, 39, 93, 91, -57, 19, -118, 46, -53, 35, 87, 10, -94, -59, 56, 82, 16, -80, 105, -106, 15, -46, 121, 29, 105, -54, -37, 53, -91, -16, -64, -19, -53, -22, -36, 112, 60, 97, 22, -10, 52, -19, 5, 7, -76, -79, -97, -29, -69, 35, -1, -84, 123, 1, -92, -13, 117, -99, 117, -33, -71, -124, 95, -96, -65, 21, -75, -10, -11, 99, 87, -39, -107, -79, 93, -13, -91, 34, -60, -58, -8};
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
    msg.setTimeStamp(0.635390292951);
    msg.setSource(44185U);
    msg.setSourceEntity(116U);
    msg.setDestination(23078U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 17613U;
    msg.plan_size = 3618784676U;
    msg.change_time = 0.456707209075;
    msg.change_sid = 18529U;
    msg.change_sname.assign("QEALABOZUMLWQECABSJLRCWNSUNZZIKLFCCRMBXYINXAPKPWGPEEJPUUBXRJBGZDXCIFWLCPPJMTDVUEAMGBAXUAIGHZILZOQQDUJHEOQEFIJTXOAPLOFVMHRTQIHMAFKUQGZBYOQSOOXNRVKG");
    const char tmp_msg_0[] = {-121, -3, -126, 27, 97, 64, 80, 83, -42, -63, 90, 52, -80, 4, -42, -18, -86, 82, -112, -116, -75, 78, 115, -26, -75, 91, 58, -47, -111, -96, 83, 106, -31, -34, -92, -97, 32, -90, -32, -65, -66, 118, -34, -112, -45, 71, -53, -122, -118, 60, -50, -95, 76, 80, 19, -92, -77, -48, 91, -25, -65, -102, -2, 88, 77, -41, 22, 13, -89, 31, -51, -71, 28, 89, 107, -66, 67, -82, 55, 27, -90, -18, 0, -128, -20, -128, 53, -99, -19, 87, 26, -100, 76, 83, 0, 7, -11, 39, -67, -82, -36, 28, 77, -36, 115, -83, -57, -34, -96, 63, 116, 93, -125, 116, -5, 74, 19, -47, -117, -107, 81, -88, 79, -66, 24, -82, -1, -77, 48, -94, 15, 11, -36, 10, 28, 57, 123, -128, 122, 126, -15, 83, 123, 122, -72, -92, -6, -37, -46, 106, -112, 94, -116, -101, -123, 78, 123, 114, -39, 72, -102, 92, 43, 111, 63, 19, -116, 86, -46, -117, 39, -22, -69, 30, 80, -66, -38, -35, 97, 88, 70, -90, 118, -14};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JTADKWPZTWYNWCNHRDRHGRTYYGOFCYKYPIABEFJQORRHCSRINHVSMSPRLIPWSCCA");
    tmp_msg_1.plan_size = 4741U;
    tmp_msg_1.change_time = 0.855495392734;
    tmp_msg_1.change_sid = 12100U;
    tmp_msg_1.change_sname.assign("WJCCLJUQHYOIHCULRTJWEIIYQXCUQNGAGDBHAKGYTWDUIVKFOJOTQBIIPPFEMVHOMBNISLYNKTALVAUVRQECHEECTOFLDYJEFVPAYAMQRDFFKPMXLSKRTNASHKSPHLRYYRNGXXCVDGPSU");
    const char tmp_tmp_msg_1_0[] = {-41, 80, 126, 72, -96, 13, -13, 2, -18, 2, -37, 46, -70, -92, 92, 57, -84, -118, 104, -71, -52, 61, 120, -70, 30, -125, -21, -119, -99, -69, 2, 32, 69, -121, 103, -38, -113, 8, -23, -94, -73, -84, 19, 120, 30, 60, -69, -44, -51, 22, 20, 104, -79, 102, -58, -65, 100};
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
    msg.setTimeStamp(0.639618624854);
    msg.setSource(16500U);
    msg.setSourceEntity(209U);
    msg.setDestination(12853U);
    msg.setDestinationEntity(150U);
    msg.plan_count = 43381U;
    msg.plan_size = 1161771068U;
    msg.change_time = 0.410305195664;
    msg.change_sid = 1871U;
    msg.change_sname.assign("SIAWSNQGBOXCGTXCPYFCVLJWBSWHQVAKVJGXYYIFZWLYMYRRMJQENOETYKEPXDMBSZTPXKWIVMQGWOCVJFONNXBDUMQEYUERZQFZKAVRBKICRPUAUJUWEULWTAFZTHBCBFDOSHMBYNZEEJAPWWOZVLF");
    const char tmp_msg_0[] = {86, 100, -67, 31, 2, 110, 112, -61, 49, -111};
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
    msg.setTimeStamp(0.591044804534);
    msg.setSource(60789U);
    msg.setSourceEntity(161U);
    msg.setDestination(34033U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("ATKKWMTWLCPQWJ");
    msg.plan_size = 10485U;
    msg.change_time = 0.897223593216;
    msg.change_sid = 54945U;
    msg.change_sname.assign("BDJIVUGGZXHIGHINEVPATFMOAPDADWNNDRALZSLGFUHMNPPJYHQLLOSQIHOTERODMWNVIZBAGJYTKHLRONNSAAVWEHFZKXIOODJBSGZKEKSLAQXM");
    const char tmp_msg_0[] = {-15, -116, -7, -82, 116, -90, -24, 101, -72, -89, -66, 112, 20, -4, -104, -95, -108, -22, -94, 86, -16, 11, 63, 16, -90, 40, -92, -42, 26, -81, 64, -31, 58, -69, -126, 40, -126, 61, -121, 37, -79, 37, -124, -112, -36, -119, -94, -55, 95, -97, 28, -27, -34, -17, 4, 10, 105, 21, 77, -33, 19, 34, 5, 43, 9, -120, -18, -92, -4, 92, 124, -118, 19, -54, -18, 74, 48, -6, 15, -120, -66, 99, -17, -37, 83, -21, 69, 103, 76, 119, -56, 23, 109, -114, 69, -102, -113, -63, -6, -18, 78, -31, -99, 61, -38, -63, -67, 100, 78, -76, -66, 67, 52, 56, -59, -3, 98, 90, -20, 12, 87, 24, -95, -54, -51, -33, -17, -71, -119, 21, 33, -14, 106, 30, -98, 76, 29, 105, 23, 85, -103, 1, -83, -22, 98, 31, 125, -87, -97, -112, 33, -105, -69, -115, 8, -2, -89, 11, -111, -62, -47, 77, 13, -8, -85, 118, 109, -51, -48, -86, -86, 70, -116, -40, 108, 4, 101, -81, 50, 56, -63, -126, 124, 97, 65, 41, 2, 101, 9, 34, -45, -104, 13, 20, 76, 78, -77, 65, -18, -55, -86, 118, 29, 26, 77, -14, -23, -53, 4, 108, 102, 92, -9, -71, -30, -86, 65, -125, -32, -1, 26};
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
    msg.setTimeStamp(0.407652742538);
    msg.setSource(53041U);
    msg.setSourceEntity(104U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("EQSMZMOKCDMDKZPYTJQUBLYJJLSXXNOLFRZKVIPDHIBGGWGCSBUOMJQDZPTKLAULERFHTBTLDUCGFXOHPXPJTKCVBGQENGVZYPMAANVXZWDIJYSSAIAIQMGOSFXRMLNCHHSDCVVINROXRGBVIAPEIKYLZJEHHRMXDYU");
    msg.plan_size = 37285U;
    msg.change_time = 0.289729764372;
    msg.change_sid = 49574U;
    msg.change_sname.assign("MOLGBBZWVFCQTDPNJQXFLBKHKUWMZLYKUXCGWAPLITWOYFFVRVJRIXIFOCAEHLGTGDQKTSULXWVPKBYANEFQBIAYAHXMMKKQISDCJPFK");
    const char tmp_msg_0[] = {28, -64, -38, -45, 27, 6, -98, -12, -109, 99, -18, 100, -65, 115, -99, -41, 40, 67, 17, -35, 102, -63, 27, 41, -105, -113, -69, -59, 71, -16, -83, -34, -18, 64, -1, -21, 70, -78, -127, -37, -80, -128, -86, 112, -113, 113, 53, 6, 60, 64, 107, 47, 57, -120, 115, 14, -44, -37, 78, 114, -31, 89, 114, -111, -79, 66, -63, 82, 18, -88, -5, 95, -76, 80, -71, 62, -79, 6, -104, 118, -18, 117, -77, -78, -94, 96, 98, 41, 3, -100, -39, 10, -77, 88, -120, -52, -14, 105, 75, -119, 34, 20, -26, -117, -65, -104, 74, 81, -106, 9, 35, 88, 76, -71, 109, 37, 79, 60, 71};
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
    msg.setTimeStamp(0.575789334818);
    msg.setSource(38617U);
    msg.setSourceEntity(111U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("SAHGZIDJVPPELNLPMHVXXAXUWQCSWBAJRFYEAMPFTOFEOWAUJTNCIRFQZUXJEKLZCCRSUHTZKINAKIYMQMFDJRVTKSFBQVJUYGVGFSJSKYDTKHBJFVHTRZQXCJBPUZIYMLGXJEPLQIKSBEXBMNNUMXKVTHSKIZMLWDPBXHQOBRLNVLMREAUQTAWHEGQGOTZCOELYDPOV");
    msg.plan_size = 10355U;
    msg.change_time = 0.0647583010256;
    msg.change_sid = 25511U;
    msg.change_sname.assign("FRKMEQQHTJADAHSLNVJSIFLVRQSQFNPUJEETKHSGLAYQDNKUZTDCYYOSKXWCIBUOGQHNRCKXUSCAVQRKSYUUGXIXTFJOMEHXZOCVQKUIZPMZDPDLRZJJPLPMEBDMSCYDMAGJNCAYMHTGRPMHBWATVIRCQHFJGZKTWVPHBW");
    const char tmp_msg_0[] = {18, -100, 108, 33, 46, -89, -41, 121, -3, 26, -87, 99, 36, 92, -80, -118, -50, 77, -105, 119, 5, 106, 56, 34, 96, 106, 106, 49, 84, 33, 28, 20, -56, 113};
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
    msg.setTimeStamp(0.0562244326553);
    msg.setSource(25690U);
    msg.setSourceEntity(15U);
    msg.setDestination(22915U);
    msg.setDestinationEntity(8U);
    msg.type = 163U;
    msg.op = 100U;
    msg.request_id = 53723U;
    msg.plan_id.assign("PBATLUKOQKBNJJBXVUBMEMCDJNUTXCZXHVUDUHLCGKIN");
    msg.flags = 14741U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 49465U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DMJTTZXKWJALKDITZVTSGXLCDH");

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
    msg.setTimeStamp(0.224079492532);
    msg.setSource(10692U);
    msg.setSourceEntity(25U);
    msg.setDestination(36596U);
    msg.setDestinationEntity(159U);
    msg.type = 33U;
    msg.op = 124U;
    msg.request_id = 52851U;
    msg.plan_id.assign("WITZNTCUKIBVOJNSRGHSDESPHBCGTOUREMEORRYVTHAUNGWFXLWXBTKJYMDLSWPHZEJUYOZUZCXLFXSBNELRZWDHDAVQHLJNQSAHKGRIJVCTQKVOZOPFNHBVQVWLAOXINQAZJPSYXDKRTVAMPTKEIUNQIBYDKBCPAWDXINRMBIMEKFWDAU");
    msg.flags = 8939U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 222U;
    tmp_msg_0.frequency = 1710721398U;
    tmp_msg_0.min_range = 44838U;
    tmp_msg_0.max_range = 11027U;
    tmp_msg_0.bits_per_point = 108U;
    tmp_msg_0.scale_factor = 0.986945463637;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.3698541104;
    tmp_tmp_msg_0_0.beam_height = 0.335046677738;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {126, 54, 69, 1, 38, -92, -42, -28, 102, -120, -61, 26, -31, -90, 72, -48, -66, -22, 27, 37, -57, -58, 84, 95, 50, 117, -12, 38, 47, 104, -26, -123, -80, -62, 121, -35, 118, 125, -8, -115, -111, 102, 78, 105, 70, -88, -76, 36, 56, -64, 92, 112, 123, -115, -46, -121, 76, 104, 54, -41, 73, -115, -59, 95, 83, -74, -64, 123, 61, -87, -115, -124, -1, 114, 13, 17, 6, 66, -10, 126, -56, -109, -31, -81, 107, 13, 44, 72, 29, 117, -40, 55, 9, -7, -126, 63, -116, 9, -111, 88, 96, -87, -108, -8, 93, -14, 18, 92, 64, 75, -81, 62, -46, -111, -104, 33, -9, -27, 13, -51, 71, -36, 66, 12, 106, -78, -16, 82, 22, 39, -94, -30, -106, 28, 67, -30, 90, 5, -107, 112, 93, -117, -27, -72, 46, -121, -119, -32, -100, -45, -49, 46, -54, -95, -107, 64, -57, 114, 69, 85, -95, -3, 10, -65, -118, 0, 60, 22, 78, -88, 44, -72, -73, 8, -105, -74, 1, 23, -30, 63, -72, -125, 13, 117, -44, -97, -111, -23, -70, 27, 25, 82, 72, -125, 57, -31, -43, 68};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DTUHXNEHWYHFKJNJQWZFOVLWMCMLKIRKEWDMWKSJGWIQDZEURODMBPVMOYHRTMPDKLCKFSZHOFITCTYNSIIZGQVUYKCAHLRESUMEDZZRXABCADUIPGRPWLQEGXFVXNYOHLKVSXXROUEKPXJPJTEUVGQSVXJBQ");

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
    msg.setTimeStamp(0.172351615252);
    msg.setSource(64351U);
    msg.setSourceEntity(29U);
    msg.setDestination(27044U);
    msg.setDestinationEntity(205U);
    msg.type = 107U;
    msg.op = 186U;
    msg.request_id = 64365U;
    msg.plan_id.assign("EXQNOCIPMLZDNJIATDLGZNIMJGYJOFECJZOIZLUXVSXYISMXGUPCHJCMOKEAQNZBQBHWDACDGWEUGVABXTWSCERFKHKHKXGUXGRCGOTNTHXFTFMEWVYYLTQSWSKBZEHQFRHUCPBDWWCYQBJDWSOGKCDLIXMLVLRKQJTWNSUQVMAZOREOGJLWFIDVRMRT");
    msg.flags = 37398U;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 51432U;
    tmp_msg_0.bearing = 0.0643524745597;
    tmp_msg_0.elevation = 0.270439957158;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KSYSMJBOBQIQLOWPYOAZMEKNKTVWZNHXXVNCWNLFDHSACYFNQZLGOBSFMPEFHJVVUNGGRLXGTUVBWBNBSEOYUTJDGFYBICAWLTZGPTYAIMOMVWDFHOEZCKVUEKBPRUCBIUPRZQTJXPWKSFTJHWJMFKZGRHEPJIGAAYOQMCZNOJSKGDACAIWUSTKMQ");

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
    msg.setTimeStamp(0.502607430483);
    msg.setSource(23727U);
    msg.setSourceEntity(148U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(32U);
    msg.state = 194U;
    msg.plan_id.assign("EVJHNJGRBSYILUSOAOTJUZIWBWXHRNEAFPPCGEYOUVHEBN");
    msg.plan_eta = 2136659241;
    msg.plan_progress = 0.351306079504;
    msg.man_id.assign("CXBATTCVSAZHCHTPGHLVRNQKARNPMGIIQUELWANPRUJNCBKTLUSIJKZMOIIJKNCPBHDOCJPARNNUHKDFASFTXLIPXZ");
    msg.man_type = 65250U;
    msg.man_eta = -1155071533;
    msg.last_outcome = 5U;

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
    msg.setTimeStamp(0.923725306297);
    msg.setSource(55232U);
    msg.setSourceEntity(123U);
    msg.setDestination(20633U);
    msg.setDestinationEntity(167U);
    msg.state = 39U;
    msg.plan_id.assign("RYXQOIJCDMROGSPJCWHLSLTZRLWYUOXUAJWCINDGLQJRMHUZNSVHBQXWDENPDPHSGEAEEMIQLNSBNNGYRZAXMDBIZOCBPTBYLGKSQHZKEKJIJMZZZCIYLVMFQFEAVHFFUZEFKADVTPCKRYTJQNSNFGINFGWWWBVBN");
    msg.plan_eta = 1195490888;
    msg.plan_progress = 0.167502611405;
    msg.man_id.assign("HYZADUBRDIKAGPHZPSOWEYFGHLYJNIEAFXYCOGOUIBVEUFRDBEKWFKDLFCBKKVOJUCTTSNBOLDWCYPDHIJTLANNQLTJJAHQWQVCEAXVIQNIAWKTAZLHUCTXZYVNEYUZRWXFKSYQBOZZPMVLVSSBXIMUSBRZGINMLMMUQMRGHVXMRNHKIGSJOQQRVKJJGQJUJFSLXNDEHPRCPZTWASFROMHFYCR");
    msg.man_type = 2864U;
    msg.man_eta = 1996453829;
    msg.last_outcome = 119U;

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
    msg.setTimeStamp(0.789193120998);
    msg.setSource(4788U);
    msg.setSourceEntity(204U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(141U);
    msg.state = 119U;
    msg.plan_id.assign("PXBZLIQFJWRSCGVMSUVQVCLDWUHOYJHKSZXNPXATHEMIHOYBAFNSASKDTUIBCBAAQPUIYCXGWPLARWJOLCYQUDHYRNGXWAGZUQEHJDEPJZIPTJFUWEKJKATMDQAEEYJGXVYBMNBZPNZEZFMLLBBNHORSTCRNFFURZILDDMNQMVWYTFTEJGGXKHOFJCIGDITFDBOATXRPNRQVZWNDRHGZEUKEGBCVKMCIWL");
    msg.plan_eta = -1134886033;
    msg.plan_progress = 0.652255058651;
    msg.man_id.assign("MUKLSZWMGEEYYBGZTAFJJLKDURKVHJWURQXBFXSGGNOHBUGDBNIZFAZQTPKDSFUXLLZMWMCWSQBYNRCAPHOFAICGRKLGJWCMKQIXFXWDDTTNMDTCRLIOUCKALPWSZRHMRNTIEDJBTXKPXEYRHTLAEIRVJJSNHMCQOUKTZIMOZEEI");
    msg.man_type = 51947U;
    msg.man_eta = -641076478;
    msg.last_outcome = 43U;

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
    msg.setTimeStamp(0.0129208068259);
    msg.setSource(16338U);
    msg.setSourceEntity(146U);
    msg.setDestination(61552U);
    msg.setDestinationEntity(202U);
    msg.name.assign("SDTIKMRJXNBAUYXETUNUZCWYEGIYDTHOGUDJSCGWLEPUPDOHDCIADVPDQSHGUKCCEQJFFCZVLWSFUFIVPLFPGMJBYYJQVZPFQBXBLSCIPRAOMYJQZLNGAHPWAPRUATYTQEKRXEACVWVHYSJIHXGSHFDYUBKSGXNXMEIWMPGNJLSVEXNGLCBO");
    msg.value.assign("PTQZLYHFSDWCKTKLXSIZAKHYECMSWWMGIEALTQNGPDAAFTEFCSGBUQZMTWOQFRWJUVZ");
    msg.type = 108U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.47467151621);
    msg.setSource(4485U);
    msg.setSourceEntity(173U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(66U);
    msg.name.assign("TSSDFCZDKHRKQWMDXBYXKFUCBLFVMNUXEXRNQJIRYFVXAFMMNRAVUPQWHICKPEOOZOEFQCRVQGVOYJMDCWQCGGTPBHVSSVIAOUAXRFFKQLEPGOYTLWWJZTPQRUINVDYCEKC");
    msg.value.assign("JSSHVTNUJJUUNUZLKAXCQWR");
    msg.type = 157U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.760562241219);
    msg.setSource(28208U);
    msg.setSourceEntity(60U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(88U);
    msg.name.assign("KCQYEVTGJHIWSOTRFRWEVEZPWNGRYZTAHRZJGTLNKIOFSKSIAAVZWJNZZYZHRVOWMOSQTQRKVUJOEIBRCPDNYLXVKQGFSKFETLAXFUUHTMMYZAIFEPHQTDGQNJYCPBRWEKSYWZAIIXUFUOAYUNLFCSGWYDOPWQXMJXLNXJDXDCTKUJDIEEBVULJUCMDRBRBXKAHOLHIKXMGVPQQNDOCMPWHCYCMEHVSMHBBZTMGDB");
    msg.value.assign("DFGXIVKLEVJONIQDLFCWKCOHYEMHMIISGMHFKIFNSWURLQVUTKOFDCDOOYNJSKVNWHFQAAKUOYBTSENCEQPTTMHPMLBZHDLRARDHWJLEPRDYURMNFRIGFKOPUAZZYUATDJUZLJTYLSHZCEJMVOQUQZVQHUCOMQXTBWAGPLYKFKIQEJWVBKBAXUSDETSGJDSIQGGMBFWSZPICGXEXPPZRCBWEJBXNTNZBWXMAGLW");
    msg.type = 154U;
    msg.access = 129U;

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
    msg.setTimeStamp(0.653583713987);
    msg.setSource(60525U);
    msg.setSourceEntity(213U);
    msg.setDestination(32579U);
    msg.setDestinationEntity(106U);
    msg.cmd = 34U;
    msg.op = 144U;
    msg.plan_id.assign("ZDHFUHPRPZRPKVTCCYJNDWABKIECMFNWDQCCBTRSQRFXDVEXZNYPPQUSYBONRQRUEXTUNJOYOHVKOKWIBUKWLZPMEJLCKBTUNU");
    msg.params.assign("OEPEGZKKHFLZSXFTOEIZYHTHFPBKZFEFGBZVUDSMWHSWDGAKJNMCQMETCKWPPADSXIGCQMTNBOWVIRQXNTLBZBWGYXJRR");

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
    msg.setTimeStamp(0.79422905028);
    msg.setSource(65189U);
    msg.setSourceEntity(26U);
    msg.setDestination(32836U);
    msg.setDestinationEntity(175U);
    msg.cmd = 118U;
    msg.op = 111U;
    msg.plan_id.assign("SAZFOUSAIOJJOCEXNMXSYVMMGKLIRZTSDTSBTLXTBNWCRFJPEYGPACGZYKYLGIQWKHMAVOVFRNZJZCPUNXPSWWDRLBIFMUKLMXYUTHDWUVORJGDCSKIOEHLIHFFQNJMEXQORBPQLXKRETTYPCAFKZWQDLHDMAD");
    msg.params.assign("ANBOBIJGIEYXDRCYXFHPQIOYOJNZMCLELMSQGUCNRBWETLLULXKHOVVXRSPEFXLTRTWYHWXUBIZSWRCVUGWFDOSPBKFEPQOTVTSVAXDRQOTAOMFMPSQZHLANKDYAYQJUYKRTJVCDJPJGBCBBNQFMUSMCETWZWUIZOINGSQGJGNGCKZUEAGZZGBKKAVKKUXYCNEWIIKDHHQZ");

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
    msg.setTimeStamp(0.107407273376);
    msg.setSource(3811U);
    msg.setSourceEntity(164U);
    msg.setDestination(12104U);
    msg.setDestinationEntity(38U);
    msg.cmd = 241U;
    msg.op = 140U;
    msg.plan_id.assign("ICIKNDKUPQPALYNMJYQGCCCRVAOCIBDYFJSTNPHBFFGAJIHIDDEDFHQYOOXKBYVXXKVUVYGKHWVMKECCITZHLDTLTBRRMGGGOOLGWMGMAXBRQEINXWAUPZZLYMLVCIJYZEDUUPSFWHENREHBOOIXSQJKTOPTKP");
    msg.params.assign("ZXVZVJWPHVGBOIYBMEVVABWFCMFZSSDGZKTDKBOXTXNOCXCRMROMMUPIEZHSWPAPJRQQGCMHHIIVHRCFBFLZRXZEETJLDXGSEYNLDFAOKJTUTXSYTNEKMVQPSXDACNNIUBFYLLMHKJBQDUPQAHYYSYUIUKKRJPOWJPR");

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
    msg.setTimeStamp(0.043500323762);
    msg.setSource(29702U);
    msg.setSourceEntity(162U);
    msg.setDestination(35473U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("GHEXWDFGGDXOYNEKTRMVMCCVIDWUMRTOYFQGQERBVMLGLTLYYZZNSBVAJJIBTRGOANGGSAHPTOVWSOIYJKNEWHCMPSFIPOBDHUURDLTKSVQUXIKFXNBMOQAHOWAKNLUZIDCMPWW");
    msg.op = 3U;
    msg.lat = 0.183281493294;
    msg.lon = 0.489095908125;
    msg.height = 0.548160405748;
    msg.x = 0.00643940690637;
    msg.y = 0.627667564507;
    msg.z = 0.075424536861;
    msg.phi = 0.51461998442;
    msg.theta = 0.867870338386;
    msg.psi = 0.634137956223;
    msg.vx = 0.696883334986;
    msg.vy = 0.704344428013;
    msg.vz = 0.754574285615;
    msg.p = 0.384887563983;
    msg.q = 0.719644210846;
    msg.r = 0.118222434055;
    msg.svx = 0.494766052087;
    msg.svy = 0.213782342152;
    msg.svz = 0.0102472688063;

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
    msg.setTimeStamp(0.141778130604);
    msg.setSource(30789U);
    msg.setSourceEntity(35U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("IQHLISDNQHYXWIFDBDJWWRMVWNCIXJWNPHSLXWHTVAQDYBQTZVUBSJFTRYZOSPPALGTKINDGQDWFGOCRRPPHELIYCGABJEISVUFKFJEHCEGUJZAAPLNVOZUOIBSPEEXPLEQ");
    msg.op = 72U;
    msg.lat = 0.697345218991;
    msg.lon = 0.3957171626;
    msg.height = 0.542812317929;
    msg.x = 0.290758876904;
    msg.y = 0.177804290101;
    msg.z = 0.512606595899;
    msg.phi = 0.775378882831;
    msg.theta = 0.548104910919;
    msg.psi = 0.814403337414;
    msg.vx = 0.0515745941024;
    msg.vy = 0.935042949545;
    msg.vz = 0.413466831068;
    msg.p = 0.267879679777;
    msg.q = 0.932479850548;
    msg.r = 0.0651732060533;
    msg.svx = 0.716234826553;
    msg.svy = 0.6657430008;
    msg.svz = 0.423495913103;

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
    msg.setTimeStamp(0.785816094575);
    msg.setSource(36254U);
    msg.setSourceEntity(138U);
    msg.setDestination(22295U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("NMUJRTZPXBSAZDPELHVWDNWBKUXJUWHYCCCSYVQMQJYRXUVBFRCYFVFQHLRYTFFKCUFTFQWTEBJKAWKDDSIDOZVSZKZMMAPLIKNGWNBXXOWNAMOAALSSLVZMJPAGOKJWEPGRPSDQPCQHIHMUGCJMABHFUXVRNYTABHOGLXIGDCRYMIQFZLSTXNUBRJNDCPLENAZTOBOYFIEPUVZHQJYIKV");
    msg.op = 143U;
    msg.lat = 0.0252824463328;
    msg.lon = 0.107090172282;
    msg.height = 0.698640166749;
    msg.x = 0.744218356067;
    msg.y = 0.340489891606;
    msg.z = 0.958912340124;
    msg.phi = 0.519388582784;
    msg.theta = 0.324449782554;
    msg.psi = 0.546429570549;
    msg.vx = 0.498225751196;
    msg.vy = 0.51609670609;
    msg.vz = 0.203341038502;
    msg.p = 0.072257701175;
    msg.q = 0.778030050181;
    msg.r = 0.91979121643;
    msg.svx = 0.436393677717;
    msg.svy = 0.910356638443;
    msg.svz = 0.344772861869;

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
    msg.setTimeStamp(0.0500485065002);
    msg.setSource(542U);
    msg.setSourceEntity(156U);
    msg.setDestination(16370U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("MDCTQEZFDPNXIXFZEFYCSAUOMEAKJKVFMAVWRHBIGNKWVUEIYLJHLSRWTANGIJWQQWTMIAYUYUAXFTHHJQTKMOGLWIKJWNOAGKFXBVTZSZMICXBWDRDOISHTFZGPSDXXGMVRMDOPRRPOSUBYWAEKD");
    msg.type = 7U;
    msg.properties = 105U;
    msg.durations.assign("BANVWYFIRXBKOMBZJARGSPDCDPZXHGEXNKEUBOOVVSLCVUHNBPJUQUEQUBXSZXVOELCFNACQIMGKJMOGWRUJAKDWEXOKKVSPLXAXVYDHOPJCZWOHDCXPAPNAETMLSGGMDQFBGHNIPETGRZZSTKZJDXKTYKTFGLFFDJWITWUQITYIJZCBYKLMNCYFHACLRQDILRE");
    msg.distances.assign("MWUVRKIRQIEOWCWKTWIAHMRXDRSRHLFUUPHSZJGZJRNXYWLQBDJENNHVPXQIHOGZFPI");
    msg.actions.assign("DUFWREGZVGRTNBTQTCQCUJKSMROOISVJRZDMNSXYOUWTXXYANVCHRAHLPBMHVSSAMNUGVKZCQYLJWVKLOSLWFLXOWRQDNVOIEPPSHBBDQWUOXPDK");
    msg.fuel.assign("ZJWKTDVDZYSLAXDPDVHRSAKJWLKYVZTOOMTZIGIFVABUAXDUYFFEIKJPM");

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
    msg.setTimeStamp(0.795193020952);
    msg.setSource(64425U);
    msg.setSourceEntity(177U);
    msg.setDestination(6338U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("KSVFNOONQAVKYZFCGNAPZQROEXKKWMJSYOUPIFMCWYMJFMOFYRHUYSPTCGBDKLNLYHSAGLJ");
    msg.type = 31U;
    msg.properties = 103U;
    msg.durations.assign("ADLYIZREAOBKMYJCENQLXVDBYFVXLDPTCIEPDZDHPUNOKWSMJUSOQCWSBMJHNNQLVNIPVEYYTDLCUKZRWPTHPEQHKXAHGMVZUPKSQMKFAZFTOIDWKGHHYWXFHEWOFNUJGSXCUTJYIJGXIEWGMGUQJDRWRZYXF");
    msg.distances.assign("ETXWNMNPHSIXDWQQDXGRUBBIOOPNKASGDCFEJIQZBCCBZZMIRWTFWWFLJZSALWSKKHRNRXLYLTCVHUUVTOYLFHMPPGLSPBKXTGSFMMWTUKUGXQEYCNFBHYAODQXCIECHEPKOFPCRNDWUCVVIASEAQJXRYAFTDGYHIXJBQKYAU");
    msg.actions.assign("FPQUJEUINFYPOLESMBMIUNHBCAVYIYTZCHYPXAPLHLNZDHATYCBSOLXECXPRTBCUKICDAKZEJG");
    msg.fuel.assign("EDDZOTODXNXKHAEEUGTTZRTPYKYSLTHIVFIBWCOAXKSRVCRJYYFZIUBLIKHRNKSFCZMNVUMRHPMCLBPOFQTLVGMESPJTENARJXWAALIEVQOUCYGKDNAGOWZWNCLHNFAABRKZBUYBQSVEJRSSNGSFZUUJWGSJTVZNWGXZFLWJQBXCMWYOGXMDHPCJIRCHBQAIPPGDVGONRLQSBWFXVJQ");

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
    msg.setTimeStamp(0.33035121388);
    msg.setSource(10676U);
    msg.setSourceEntity(196U);
    msg.setDestination(52512U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("KQTBCAXXGWEVNJEXWDRPTBYGONYGVMLCKORZKLZFLJJ");
    msg.type = 79U;
    msg.properties = 88U;
    msg.durations.assign("MAPDEKHFSLHNLWJADBENYNCTOFSKKHSFKQEYVLRYIZXZNFOMRIFVKMZDUYWCADJTZHUGOEIXWFFEPQRUJQYAXSJUGCEDWJLSWXN");
    msg.distances.assign("PXUJYIBDTIDQDJSKWENXWHGRPUMMLTNJUVZRLFNYDIOYVZXLIZZKVCAZSLVHAUCOXSRHSYDKCQBCAYPTEUFLWQKQOJPEFMBGANZMUKUEEFZOBWITOQLEAXMKMLSAFXJAWNJHREUDTTXQXFPAZROZEUFABKHXIPGFVHCPGBBJMIQLVMRJCIFSXG");
    msg.actions.assign("IKWFQLITJRGSBXCJVDTQXJUHTYQGOLIXXVRQMJEOEBNDFRFPVFYMMOUYRQL");
    msg.fuel.assign("JMRINYRGUBENWFQSPVPTNQXZLBGSTSAXLNRASVTTBJJKZIUFHYMEISTGDHDEVBECZUGGKMJBJZPAGKIXLQWDYTVBJNTSUOYGOZVNZOPJGXMAQFHEWWKOYJYAMOKQPYMZDPRWRCXTVHMYRYDKIOLLMNRIZHTNUGEHLEGPCJXUNALDHOHRFSLWFECOTNADHWAIICHVUSQOVBFCCPPMD");

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
    msg.setTimeStamp(0.357706920672);
    msg.setSource(16369U);
    msg.setSourceEntity(121U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.560186164381;
    msg.lon = 0.689802643929;
    msg.depth = 0.119024382501;
    msg.roll = 0.423305212965;
    msg.pitch = 0.501364846291;
    msg.yaw = 0.133153890278;
    msg.rcp_time = 0.831706709984;
    msg.sid.assign("NJCARWQOWRLXXNYUFASCOTUEFZZRSTJXUCJQMYAECUIFIQAMGPKAUQYSLHTSVOBRWAZGDKEDGHWRFTGJGZYRKVDSSKAXLYLFHWMVYJOJKIGBYZEPK");
    msg.s_type = 150U;

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
    msg.setTimeStamp(0.164751993863);
    msg.setSource(2405U);
    msg.setSourceEntity(30U);
    msg.setDestination(20522U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.647024940101;
    msg.lon = 0.519143303221;
    msg.depth = 0.658998695101;
    msg.roll = 0.0284078446328;
    msg.pitch = 0.0198862476245;
    msg.yaw = 0.790802481465;
    msg.rcp_time = 0.638259971455;
    msg.sid.assign("DVGXIUVMHIUBOANSKCWZFNDHBTEWYPBYHMRGRYVHIXNZKJSQGARRSWUSMCYLITAAFVGOLRWERJ");
    msg.s_type = 49U;

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
    msg.setTimeStamp(0.629837714003);
    msg.setSource(35511U);
    msg.setSourceEntity(90U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.29181715522;
    msg.lon = 0.361482927266;
    msg.depth = 0.836843794353;
    msg.roll = 0.110593040017;
    msg.pitch = 0.0241560700513;
    msg.yaw = 0.0131539436646;
    msg.rcp_time = 0.797138821404;
    msg.sid.assign("CHPCVOMBGBZSFKOFNARFYHIOGTQPNOXKOIYUELUJGEEUNGDAHFXXJPVYCBIFBYMTYGRAAMQLOXVKGIOZEERMWDHZJIRQZYQMTGDCUNJZWBGSSHCVDBXLLVPQYEEPJOFMPAYXTIANWPZCYQXKSQWHUKLWUCILARZSN");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.264743413415);
    msg.setSource(23585U);
    msg.setSourceEntity(206U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(10U);
    msg.id.assign("RGCMCKZTMXZMUBZMFFNHNREKWGPNYOCUWHMOSNADGZFNWXRBSZKJRRBPVFCVYGMYKXGQWEOZDDOLXORQUJQLJOEKMSAPTP");
    msg.sensor_class.assign("KNBLEGOLTIVRCJCHPEZNVKQTEWUBVOZLPSRABHTLSUUWDULMORXYCTUGNVKSSYEZJQIXPJIZYOZILAINDXWFJUHUIOJBRFDRQGHUPBEIFDZXJYEOKOCAFTCTQZGNWQBVGPNMXMFISXVKKWFGSRTIMWQBALAAPXDNGKIHHZYJTFXHZDHRKWMFLNAMDCLJAQSFPCGMXVPCQAADUBOKVYPNSXYRYZBJETKNWBUCDSWMOFHHOYSEWRMQEVMGD");
    msg.lat = 0.806750962028;
    msg.lon = 0.991211208368;
    msg.alt = 0.539881156905;
    msg.heading = 0.12403301091;
    msg.data.assign("YRKLFHYOBNPMQWUSHWJLKILZCSMURVBOKWFTMDFPUUJUYKMEMQZ");

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
    msg.setTimeStamp(0.323790686307);
    msg.setSource(47033U);
    msg.setSourceEntity(125U);
    msg.setDestination(54818U);
    msg.setDestinationEntity(217U);
    msg.id.assign("PKWENONQXLUDE");
    msg.sensor_class.assign("AXEYCCFTZLVYKLTDEGNABW");
    msg.lat = 0.952658230276;
    msg.lon = 0.243060976169;
    msg.alt = 0.289060113052;
    msg.heading = 0.593480465729;
    msg.data.assign("CSIFRUQDTZSGNGPHWCZUKXCHSLQFKWFMZBNXLIMJAKYTVMFREBZIPLYRWQOBXDZISHWUAYDDVBOOAKILCMFTZFLBPMZOBQPFYROOSEGDSPJIZYBOMFKXGDDFEYKALUNHARVTYLJZIFTOUJUKAPHGZJPETBEXRKHANVOAJWSHNVYSDPAJSDGLNVMUV");

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
    msg.setTimeStamp(0.545280759866);
    msg.setSource(47024U);
    msg.setSourceEntity(13U);
    msg.setDestination(30090U);
    msg.setDestinationEntity(68U);
    msg.id.assign("KIAFKXPGNJGAQMCDUBFXRRUUKQXQEQWELLZYBDTRPEUANNOXURHGUIQESBYMVMDEAWZJCPYGNTTDIVJBLNIXFGZYDILKK");
    msg.sensor_class.assign("UKIWURJZSXFONOXHJKSZHNVERVLISQPXMUUAMFMPYBTZGGBTYHZNQBUCOWSKRXJDZOMXEODSWXIEULBSNLXILCCCGLVFDIMFAFKIVLRKPVYCBSYFZAOOQWQBYWWPKPEBLPGHMNEDXPTJSQWDVNARVJCKKNEUHZCYAZMDIQYMRTJEDE");
    msg.lat = 0.0782119049015;
    msg.lon = 0.119475783089;
    msg.alt = 0.965647745125;
    msg.heading = 0.396302799585;
    msg.data.assign("DVZDVTCZDVEWXHZPYGLOUAVKCEZZRU");

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
    msg.setTimeStamp(0.821438092923);
    msg.setSource(18588U);
    msg.setSourceEntity(47U);
    msg.setDestination(61595U);
    msg.setDestinationEntity(236U);
    msg.id.assign("HOJGBMAJARPPBUHFIGSJGSXNTFNWKWRBRVTCNZAUGXCLRRNPTEZHDHEBPLVNNFKULAKRFJYCQNOXXVVXMQIKFXB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YRUQXTPFZSPDFHIMFDLWJFDOLPGLDQHWYIORYEJRYVFOJCZPRWTVVATRVKGAAGUUOZJSSEKNABDFLXVEZPMHRNOBGXWULMNBFUGBQGMSYPASURGHCTESKYZFLCQHBDQ");
    tmp_msg_0.feature_type = 119U;
    tmp_msg_0.rgb_red = 135U;
    tmp_msg_0.rgb_green = 162U;
    tmp_msg_0.rgb_blue = 23U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.813123458349;
    tmp_tmp_msg_0_0.lon = 0.838826240916;
    tmp_tmp_msg_0_0.alt = 0.569567732412;
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
    msg.setTimeStamp(0.198167276913);
    msg.setSource(51590U);
    msg.setSourceEntity(95U);
    msg.setDestination(50032U);
    msg.setDestinationEntity(151U);
    msg.id.assign("UWLBAWGTDJQJQENGSGAYKSZYVKPBDSBHLQLPUXLMPOFYVRTHTOTJFVIJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ONUWDBJLGXSRNTPUCHVCJZRIMKRKFAQUOCYAXQBTZVSHNZCZUILFTOTAPHQVANBVOXRYPZDTWEBPKACGZEZWSBLQVEMFGCLAXQVBGNWYNKSUTITWEQCYICGPXHAOITBJMENMUXOMBYGDSASDKQNDWDMMPFJURDMFGYALOHEGKDHDURXDVPSZUAKJLFRIFRNYLJZCMXGEXBWHHOPUFSEPYWYJIZTCWRRLOTKMLSLNFJYJQIH");
    tmp_msg_0.feature_type = 16U;
    tmp_msg_0.rgb_red = 169U;
    tmp_msg_0.rgb_green = 132U;
    tmp_msg_0.rgb_blue = 36U;
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
    msg.setTimeStamp(0.0913826555053);
    msg.setSource(43477U);
    msg.setSourceEntity(233U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(174U);
    msg.id.assign("HMCMBPLPOKIHQBMXZBLBTSPUQXPWSDSBEJIEZFWAAVLLKRVQAQGFRTJLOX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LNGYQLBOZXLMJQTMUFDIRITQRMWGXAZWAHCFJGOWZIPNNHSCQXKKUXWDMXLWQOCNNQDODHBPIZYEMFXSPTVVPRNTASRPYTKLKCBUXRFEYVSHHIWBIKJCSMUSCUJFAWPVORHEEQXJDANVVYPJVFBYPSCNCGNDTZIUXBVUTKEGZRQEMCFEIZDGUCSZZTTJGBBMGKYIELHLDSDO");
    tmp_msg_0.feature_type = 125U;
    tmp_msg_0.rgb_red = 209U;
    tmp_msg_0.rgb_green = 45U;
    tmp_msg_0.rgb_blue = 182U;
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
    msg.setTimeStamp(0.980158458074);
    msg.setSource(19544U);
    msg.setSourceEntity(204U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(38U);
    msg.id.assign("CSZCQQEAZJYFTSOLJNFPWPLIWURRZUNYDJQKVDWLYLLBTQIDORGWGSKHQACCDNXBUTBKGQXISMVJBJBWTPHFUNBIWEVNBJMNKTSTFUKHLLVOJQPUWWJVSFQIEOYNFXVGCVAGYAABPMIYDHRHPHQLGREZC");
    msg.feature_type = 206U;
    msg.rgb_red = 222U;
    msg.rgb_green = 239U;
    msg.rgb_blue = 238U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0309519937063;
    tmp_msg_0.lon = 0.228947980733;
    tmp_msg_0.alt = 0.899132040217;
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
    msg.setTimeStamp(0.0476938168771);
    msg.setSource(1414U);
    msg.setSourceEntity(56U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(164U);
    msg.id.assign("YSVHIJAODYCQLQUZHTFDXMCKSTMSMCHFGAYUBGHEBIGWWXSLYVGDXOMLCWNJRSNTXCLKHVZJHPCYEDUYYPTIWLCJTTRPKGNSUZOWZBAYDOVYJPAXRCBGQLMZQNIOIP");
    msg.feature_type = 70U;
    msg.rgb_red = 201U;
    msg.rgb_green = 253U;
    msg.rgb_blue = 1U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0614745386027;
    tmp_msg_0.lon = 0.610453214922;
    tmp_msg_0.alt = 0.94701835541;
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
    msg.setTimeStamp(0.896560273644);
    msg.setSource(14914U);
    msg.setSourceEntity(152U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(176U);
    msg.id.assign("PUOYHVULEOXFWDIDJXRZLTTPVSFKBBVVHMNEBUSZRXPCFCXPNKIGAHILPRTPSHWUBJHZBGRWMWOAJKKMVQJLTFDEAHNJJZTFOWBSVLKMSSFZNINYUODIMIBXLCPDEHCQIXJAWQFMUIPAEKH");
    msg.feature_type = 57U;
    msg.rgb_red = 119U;
    msg.rgb_green = 198U;
    msg.rgb_blue = 140U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.851764499132;
    tmp_msg_0.lon = 0.0306380410753;
    tmp_msg_0.alt = 0.914297599676;
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
    msg.setTimeStamp(0.598295268523);
    msg.setSource(55129U);
    msg.setSourceEntity(228U);
    msg.setDestination(36312U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.80180418521;
    msg.lon = 0.705175577218;
    msg.alt = 0.873372450892;

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
    msg.setTimeStamp(0.776706909668);
    msg.setSource(8075U);
    msg.setSourceEntity(121U);
    msg.setDestination(55751U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.61354475034;
    msg.lon = 0.330905739401;
    msg.alt = 0.941623409023;

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
    msg.setTimeStamp(0.733286876712);
    msg.setSource(722U);
    msg.setSourceEntity(136U);
    msg.setDestination(41562U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.591921901999;
    msg.lon = 0.769369941727;
    msg.alt = 0.884471808112;

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
    msg.setTimeStamp(0.296845269624);
    msg.setSource(56530U);
    msg.setSourceEntity(143U);
    msg.setDestination(54567U);
    msg.setDestinationEntity(168U);
    msg.type = 49U;
    msg.id.assign("EXJHBMCHFEHIIKJOVOMDANLLAGZEMOZTLKGYMOUDPZQLPGGLKZJNRTRYYKDSXNIMSQAFJLVFMUFXQQRJFXRKCSYAPEHOLXDHIKNBUCJBTGDGTMVRABTQVAJTGSVTWPZDWIVZHLOYBBFDRWBTKWFPMJOMEOZKBPQJSZEKGLVOQXTQARSKQAUSYXYEWBFWNSHAAUNZGVUN");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("AAULUPAQXVRGJTZKOYMHFCQBNSNBUHDAPTFDPRPCXDLXTFYSFEHEDJGKYHGSZGXPWNTZIDFNRJTBFZIRNKQIOECTIKSWWKTVFYIIQWEMCMHABMOPSJNROKOMSJOMEEYLNLNCZXRCRSILW");
    tmp_msg_0.op = 55U;
    tmp_msg_0.sched_time = 0.588966367459;
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
    msg.setTimeStamp(0.894219493109);
    msg.setSource(41352U);
    msg.setSourceEntity(106U);
    msg.setDestination(29335U);
    msg.setDestinationEntity(111U);
    msg.type = 192U;
    msg.id.assign("OIFDUYWBXZDFZKSEWXWPDBSFHDUODMINQGYTXPOTSIJHGLPTLZJSWQJTYDBCBENBIMXZFQPTAQUCXGWCGEDAIVKFUAARYDXEKOLWZZXOJRCFJBKVNZARBMRQIHEUJPBFSWRPEELQJUZAMSDTRMIQTQGNDVCHKGRTVQFOOUVUQGYWLEPMAYHLB");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.341766807706;
    tmp_msg_0.y = 0.290724065432;
    tmp_msg_0.z = 0.997732118597;
    tmp_msg_0.vx = 0.285802013457;
    tmp_msg_0.vy = 0.906519021078;
    tmp_msg_0.vz = 0.560005935693;
    tmp_msg_0.ax = 0.249741877854;
    tmp_msg_0.ay = 0.522474605683;
    tmp_msg_0.az = 0.824931576341;
    tmp_msg_0.flags = 11529U;
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
    msg.setTimeStamp(0.485555943002);
    msg.setSource(64995U);
    msg.setSourceEntity(34U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(238U);
    msg.type = 6U;
    msg.id.assign("WEOEHMJCCFUTBNUFLO");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 156U;
    tmp_msg_0.text.assign("DYWFLQHZUIECPAQONELGISBXSRVMATJCKESWUBAIMTLJQHTQFLHTNUKGBSVFYSGQOWKRZZCWVIJIFPFRPDKBGBHZWLQRYUULJOGPOZXGTHKNFJRHJCLVRWMDYQXQJSGBAZOGVPEMSUAJNEOTMSUYQXNAHVAOTNMFPKKKKFANCHRPYEEZQUSIYWOTTZEERUBCDCMDDBGCCHNICDIIMD");
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
    msg.setTimeStamp(0.3011948831);
    msg.setSource(17733U);
    msg.setSourceEntity(100U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(89U);
    msg.localname.assign("CIJEXRCNKWYIBDZATRBPZFVUSSKTMVFEYUHEMHEFCLGLRBLWBAHVRDLDGNSIYJPXTDPCGFKONISFWRNNBQOVAYXNKEDEXOIZPXQVKQWHAQWSWGSUJERDZMKJPLXJQCHCMVZUCSUMYMGHJMWOSNBPHKXDQZZJHLXBPFTHCOCDGTLVHPRDELPKYAALAIRGMTWFIUNYBVUYRTT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AKZOLXTDXDKEGYAPNHYJKQOIGMXDOLSTXWMQZZIVWNYREFPHNSTROYYPWRZIGLSPCOPIHYGJAUCESHCFFKROTRLLYKFBQIVGZKNWZCAUTQQLMICWFHALXEBJNSIQVGYCDNUWRKFDWSLKUMQTRFDBXGVBEDLALEPJDTVEPJHCHKVBSQOZAGWBYFRJDFMCPBZGOMEARFBBSBIMUCJ");
    tmp_msg_0.sys_type = 49U;
    tmp_msg_0.owner = 9935U;
    tmp_msg_0.lat = 0.356288859436;
    tmp_msg_0.lon = 0.323490898521;
    tmp_msg_0.height = 0.0614365364003;
    tmp_msg_0.services.assign("MEPUSTBYSUUHUNNICFBCASWZFWRTVFMITVTBGPXNWFJWQVOQRPJTELVMSJNDXDZOCHGYXQBLFKQYRPXQKLFWCPGQHKMTODCLIEURKANSMCHMKAXQIRUZGIDPUFHHKEGGJCYRSAWLXBCHEUGSYLLEWBZOBVPIVTGVNABYZSMAOMZLPKNTDWHSNYYRIGIOZDBAKEFRAAJDNHRSLKIGZMVWZOWOOIPJEJJMTQEAYJNXPVXZDOQ");
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
    msg.setTimeStamp(0.265229594452);
    msg.setSource(1383U);
    msg.setSourceEntity(180U);
    msg.setDestination(35593U);
    msg.setDestinationEntity(115U);
    msg.localname.assign("UMDVTXIRHHNAFACJYLHXIXBQQAHBLHBKYRJMAFPJBUASJDNRLGUQNXWOSIXDTRDDIKDZUEJOVJTVWJHNGQFGACNKVULVCFFSZOUZOANEHTSLESRWEFCERJYSRYDHOPLBVVYMMUPZQIXDRMRFSPFZWTGUTAHEZXSVTPGWNIQNCMCQPPBSTRQFKNEDMMIKGYZCDQJLXTIKWFXBPOKSEZYXYIZVKJLNHUOTGZYCWCYMGLOGQEBOBPAWAEKLIPO");

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
    msg.setTimeStamp(0.794709442573);
    msg.setSource(10411U);
    msg.setSourceEntity(116U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("PFBJFNHRKZPLTJWVZSGOVVOMJSVVAWBLPBDVKYDWWYKESRITQOM");

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
    msg.setTimeStamp(0.588979604315);
    msg.setSource(24335U);
    msg.setSourceEntity(33U);
    msg.setDestination(1644U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("LDJYJLHMLKUPSMSHYAUNBIUFMAESZFBURKYTEKRHLZJGPQQRCURFRPSQPTNQSSICEKLHIQYDKJAOQNANCPWQSQKBCCEZZHPDLDTCAXYIZYMXOVFRRXFSXOBOGTDUFFNXGMGJO");
    msg.predicate.assign("DZFOLALQEAXNXYQXLDOXEIATRDNVSNTNHDMHNFKWIWGWCKJNZTAOMXAVRCEPAJQCBVHYOHEJCUDYEUDFGYSYEUHSMBRGBCAIVXAMPJFKXOHNDHKKOGJQZASGISFCBPPPQJPKZSHUNWWLWHVTGGYWVRE");
    msg.attributes.assign("JGEDNEYLUAQYIKUBVCGNBRPATFBAYZOVXFPHTFVNJOTERICHZAEZUWXMPNMWZRGLRWLNBTIZH");

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
    msg.setTimeStamp(0.578094908823);
    msg.setSource(1901U);
    msg.setSourceEntity(102U);
    msg.setDestination(41719U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("NUFGHCGZJBHPUXEQLGMGISMBXHIVQKJKJTSRVDBZHKTMYZVJXGYBSZORGKPRIKQNCNNOTSVLCQWZUWCEPZBMSLNYPYAOHZFDARTYSYOFLKZFDIDWXBQGHTEVXWEJZAGPENFWWLDAQQJMPRNRTQEJNCWQIODSOLXPYUI");
    msg.predicate.assign("HUFRIUVUXYQDRXUSABGUSKCZFWIZKYDQXMFBIWQV");
    msg.attributes.assign("SRWBMTNAESSRPFBAPLYHZDNGWCVBLNAQWVCCAFJGYQKNHFNVWAXVMYKCTZXXILWPYRMMGHOGOJGKOEBIVHSSCPUDUSWUABQMLOUNVDYJKKZTUYRPETUIUIRSERXFEMJAZYBHCYYOBXFZRHHPSJFJQCPLOV");

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
    msg.setTimeStamp(0.186998528536);
    msg.setSource(47913U);
    msg.setSourceEntity(201U);
    msg.setDestination(34744U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("NVQIMLDIXHLYSDFFXUPNBJUHGNYCTTQAXRHGWGLEMHAOIVTOIXUKSYWAORSNSPKIQQFPQCWKXRISZWZOBJLDWQHOYJJBBHICWKUPZRKYBDDAMOFEMOGBVOFCJ");
    msg.predicate.assign("FSYGQEODFGZBPAQEEOCHKBTPNEXDANBMFWMNSXTFZYKUMTFBGZLLRUPSZSJLTACGIWUEJDXHBRHLSHKCRECXXQOQPRDYCHLTEIAKKGNTKJQRQPQZZURVORQENQTSGBRZIHXYVIZLIXHOBEFOTXPNDWIYVCNCIVWVASHFP");
    msg.attributes.assign("AIYWWKGVPCFLYQAAYBJGFEPTJOVHDTKGKXEVZPRRQXGS");

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
    msg.setTimeStamp(0.0117231675672);
    msg.setSource(8696U);
    msg.setSourceEntity(110U);
    msg.setDestination(63612U);
    msg.setDestinationEntity(95U);
    msg.command = 43U;
    msg.goal_id.assign("HQEYBGEXECPPAQUIIUFCXMAMHVNFOUBZQZ");
    msg.goal_xml.assign("TQETOASDDGPYVZBQNXJMPDUXUAHMVINZMTZHLQYUYSVLZBMWEAMQWTOAFVYXXGMNZGVMAWSOYPYMSHJAFKNKCKWHIOIBTKJHITSULREWQPMUFEXZUCJRLFGHWHUJCLNTSLWCRGJNWRYVPZRFZKXROPOUNZDSIDGDACJEHP");

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
    msg.setTimeStamp(0.354008217287);
    msg.setSource(26325U);
    msg.setSourceEntity(75U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(141U);
    msg.command = 46U;
    msg.goal_id.assign("BDEOUFUNGADHEEEXMVYEAYPVNRRPBKWXTJOCRJJBYJCVIHYUACLMVPUAZRDGVJNVJQKFBKSTBBMSLDZYVTMYYNDPAXIBRPNUVLLJNQFRQKFGOAGHXKUTWIWMNNLXDSMWPIBCKDZKSXCWWXGFXAWPVTFZODOROZAISNSKXKGSOHUDTLXRUZKJMOCPABHYVMELQWIISCJNQGMBGDLOCJPOTTUUTQFCLIHPZZGZMLHEYREZFYFI");
    msg.goal_xml.assign("LSRMOHACIVMEOTRYPWOIPNVIYRBBGTOHXBFPWEWTQHYQCANUYMEJHVONDWVHXMYJSJUPDTZRRFYEDGLKIHGCLPCCZEOWKFIJXNHSIKZJCUMSEZABAUEMBWVGMRQCNWCPYXVXRPHF");

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
    msg.setTimeStamp(0.939760985587);
    msg.setSource(42670U);
    msg.setSourceEntity(32U);
    msg.setDestination(19499U);
    msg.setDestinationEntity(97U);
    msg.command = 248U;
    msg.goal_id.assign("JBJNLBOMSFEKSPFZRORPSBVATCQPKBRXFQYVGWHJHRIXDFTJTWCFJQHGGOEVWQZCZESDYDJIDDAGHOINVGGBUMGLHJMKXULGFTCBNRUVNNKGMUDWHEMZILHZJYVLXOENSLVPAMXQVECASKTKBDHTERAFWQWZJIUXUYPFTYNOULMRGTMACYKMCIPAZZWRTNUQIAEIPHQBHYNBYDSOXPWDOSLKOZFJDSNZCXURPWOAVMECTQPQAYCLBYIFSWK");
    msg.goal_xml.assign("ZZPXYBOYFIKQIQYLQGIXTTDCUJXSYKMMNLKFVDLMRVBGFBJSJQDCPIYJTRBIVUHONQRUGKGCZXECYBVIVCOEFXHUHWEPVWEARCBUHKUDMWMQAIIAJZXNDGNPVSEJNZURMBBTDBTSGMPSSVNRHMKGWYQIPILWDQXKRGFXSOWWTAENQTUZFRTAYXFFJCPLEEF");

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
    msg.setTimeStamp(0.251883701104);
    msg.setSource(55795U);
    msg.setSourceEntity(65U);
    msg.setDestination(165U);
    msg.setDestinationEntity(172U);
    msg.op = 32U;
    msg.goal_id.assign("RGXFOWGXVBMIZOKKPKKJEVCRPAWYQJJBYMPSJHGZLHTVAZFHWTCDWGTBDTZJMFSYBYHYQHNSIVBEINKRDZLGWTNCUNSBYJLPUHROIQRZNUXHRWKGMPFXVHWCADNSMKISEQEZCHMRDKLPOQCADUXNAIAPAORJJVFLSX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JZZTBKASDROPRBLWGTOODFJFKXNWYYNPICEIBYTQOTFPUHHQIOAD");
    tmp_msg_0.predicate.assign("INTNPBIGBSMKDOCFWCUHPRDQJDSZFUNDCGGQQDXGYVYHBPXTYFVERJHFQAYSVJLKNBPSKWSOXBGTYWKVUAYVPGUKMCLZDAMHNENJRSPMGEEYFWTDNWUKPMQQOWCANDMZELPEKOCIAMGEGARTKRFJBWZTRJWZXKIUUKJOZLSOECLLADIXXQSPYCMLSIAFHLXOHOIHUTWZBTNCDJXLUFVXRSJBOGOPMBBFHZEIATQLAYHXTZYFH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KJRTKFCQKQFMBRARYZYSBSDDWAZOLKBTJCABTYKDPAFNEXWSIHSVWZIQAXOKPHMBEDIVJBNFGSDZRUYHABHVYLVQUEHWWPPGFRNYTGEBSIJQMTFUSNCHOLXLIIINZAGTUJLJMJPGCVXOPBFLZCKIODOHTVNMRAUCQVYHPCXZYEZRVKGFORPDAWGSSQTFGAMJMKJYMXNEVXZNUQRXEWPLQVOILHEYNDUUMLCXOHERDUTKLGSZXBGPNJETWU");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("BFIFVUBPVXHMHDGJOGJYKSAZVIUSCTQAKYPMXTQZKRUGJPAYHOEYWGUCVVKQRRTBIDMAIWEVKDAJKRUSMKALCKTWRRFQJUONCWQZUSYIDXP");
    tmp_tmp_msg_0_0.max.assign("CRXMRSGDBPLMUJEISVCQVTDKBRCOKRKJNLCQOEGYLGDOBADAZWAQYE");
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
    msg.setTimeStamp(0.729451701933);
    msg.setSource(10823U);
    msg.setSourceEntity(39U);
    msg.setDestination(43767U);
    msg.setDestinationEntity(128U);
    msg.op = 150U;
    msg.goal_id.assign("OVJDYYHCKFDUXERJUGKUIGNQIYLRYBJNBBTLVWPSABSDQDMKZCIAPPRSXWPXKYIMETFVFMMODBPBVOZWQKQNTWESDYGBNGTVOAHYYPMZETCDFGRDXVZCMPEEWLRTKXHUVCZVHMALKRSAFNDTQGRONOSFUAKVVWAWOLJJNBUJHCZIJHLHACFUIGHLXKTSBMWWJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JVQEYHORPMWHTSZFIPOKQFUGCWMKY");
    tmp_msg_0.predicate.assign("YODWEBELEHEEXFIMTTSFDUHYEHUWWXLEFMXBJNCIDSOKQGQLSJVFKFSSAHQUEQIVMISBZNJBHTKMGRLQRKDIAZQXITIYOGAQWJFGIJAVYBJGXJPOYDEIJURDZWQVLCFRZZGKRMKZQCAOIBTCHTNAKGPZDWSMZTRPYVAUMOHSPUNXOWKMTWFRODSNUCBPKLBLXZEUVVLGAMRUFNTBNYOYCRWAVPPPKVFASXVUZGTNPL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HXTFJHZOWILUXXPHPGCZVEBEZAAIJGWVNRVMSSSNNLYEFDHWVEFDPUGJGTPLDQHXUFKZPIFNMLTDBBOKBGJDPKRQBPYQGWROTDMTXBGWAGASRLWTQVLNZBWERFNXZIQHXHDYSYSIOFSOBRYQJVQUCDIGIJNRMOGABDKPPLRAIRPQLAKYUVXWAETEIKZMEFMWTYUXNSJLZNFCORYCKWOCJCAMCKLESFOMYYDZHHCJO");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("BNXAOCCGVQMZDAKCQMQI");
    tmp_tmp_msg_0_0.max.assign("VHQYFRBWGAXKKIUXCXAABRTJPYJLPHROTWDMIPCZSDNUGSNWMCHPRMNHCDUHMBXREGGUCJSEKESZCCXZNKTZIVJGMYXOFKFUZEOLEOQDTLZZUVFZFLFXMKVBTLWFISKEJQAUTUHMGWXASYIPPBTGOMNBRESLSJQPQVCYFJKOJOUESVJYCMTWNSNAIQFIYVLQGHFBGDNLVWAYIQHA");
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
    msg.setTimeStamp(0.50538317991);
    msg.setSource(38354U);
    msg.setSourceEntity(86U);
    msg.setDestination(19934U);
    msg.setDestinationEntity(43U);
    msg.op = 223U;
    msg.goal_id.assign("KQLDKZGDQBFLGYHAXUIZVBFTMDYT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CKYJLWDFTBWFFJQJWOLAYMDRZCYEYLO");
    tmp_msg_0.predicate.assign("AKITURFWDSYOSDPGTJKJSWYFZOGSNBWBQVMNABBZIKWSRUWDSJBNWHFUUXFCLEFTPLAZDJVIHXSPUPEGYPARPFMMVJNCIQHBLTSEKCAXIPNKVUOLBVRDWVEDNEBKXECJWVZQGRKQDIGPZTOKUGIRIQZRZPLCXYAKTFQOHCYSUAUOOOMHZONGXHKXOFIEJYQHDTPYMLLR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UWVPEUKELCDCSDOWFNOLYZFJXITGHTXQHOEKGFPQMDXFTUXQRAZSYBFSAPSIFODTJMQWBHWHZTIOKSRSCCRUNPDYLLAGJWLSNVZE");
    tmp_tmp_msg_0_0.attr_type = 80U;
    tmp_tmp_msg_0_0.min.assign("LDSEZSZTXMHPHOXABWHEKAMAWTNOFRZIWVPRQDMZJDYTBGRBAWERHSZIBWMGSUGPBXPVDCBJCNBEEEJKHQXLBXOSYAFIGNUKTW");
    tmp_tmp_msg_0_0.max.assign("OMZXIHEUAWDOAHZJCNFQLWXUBIHDQMFENOOCSYWGRVYIWIBDAZDBXPWQAYBIIAMKUMQUZIKFJMVVDTXPOKZFVHBVNDGCHLLDVTOHQMPJVXYHRJENYCWHFNMQFCUYNRNSVGFPPWMSDOTTLGKZRSTTRXLJQCBOETPGGEXRUXERKKGJHSAUOWDVQNACLKBBWGUYALZYZPERJKUFEFSSMUPYXKNKCHS");
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
    msg.setTimeStamp(0.118355537964);
    msg.setSource(60763U);
    msg.setSourceEntity(77U);
    msg.setDestination(10444U);
    msg.setDestinationEntity(89U);
    msg.name.assign("JWZHTJTETLCQETCNNNPQORFQGZIVHMYBPQUGLTSXKVEDVXFLTPDRWHMBHXIAKFUSEMWHJBZRTPBSUCOWPCOHDDWYNHOUHCPXBMMIQPAIRMAHVEAJJKXYRGBDBGKSAYRNXAINCDTPBKANZZGDFLJBADDUJKYOWVLIIWCIKRYSZKLJHELTVENCVY");
    msg.attr_type = 117U;
    msg.min.assign("SZYCFPWUYMFMOAZQVCJBDLOWWJXTPIRHQTXHCFRZNEOOOMFHNDANRDGIWTKDEULFQWDNFSGYUFCEYWKXDJYHGVTUJKBLUKI");
    msg.max.assign("KNLUSRGDFGTBKANTGFVELCFGQCJBIWYOULZWPKIYKWXBRLVVYBFZAJTOBHJXPITYNDYZNAQSLCWKHWQDUULMJEFB");

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
    msg.setTimeStamp(0.042082265815);
    msg.setSource(25596U);
    msg.setSourceEntity(254U);
    msg.setDestination(34266U);
    msg.setDestinationEntity(72U);
    msg.name.assign("SIATLXEZYEHYRRDBVRNNHOOYFCZCHZDFOKVLFSBBTMMJSXFCGESVNMPKVTYGKLIRSOBLWBZFNSYCAXJQNETOXJPGNEJYRAOKGIAXSCIHHGUOLQVJFUBNMWHGXXKCWJWEDOFQRGDYJPNFDHCPXZTYWNBXQKWPZUKMPMWVEGFOUDPIKZIZBPQJHDURQISCLQVUTMORMRMUNEIELUGLWVLFQZBWCJPQAYHDZAV");
    msg.attr_type = 225U;
    msg.min.assign("NKOCAFLUDKNESLLIZQBCWKVXDHLMZRDLLSDQMZRBHFAPUNBUMVJSGGTETXHGVVUJOKIKKTFHPYBAWWFVSBFORNPMMTWMWCBDPEZSLXOPOVHQPTCHNHCQJKEXXZDSJXIWYWOQKAAGRJTFJDRHXNUOLYZPVLZYYFUVTWNFNIOCQTIKBCKGGMAZSRNUIGSCFJEGRFHLYVAQDQIQXJVEAEROTN");
    msg.max.assign("KSEOJXPQODPGEZJIZYGQYECYCBRFVFVAVGMHFZIDQUOEZDAWVZPSKJLXWOTDRABHJPVXXINPGZIFKPKSTHEEIQBEHDWXBUMVBADHBNVQLZGTJUUCTTTRDMMONWEWASWOVGZAASGQSQPYDYFNTUCUPFJKGEIKARYKRXOYKMTWSTKMYKRCQIIMGNSBGLDUPXBFHLMMSPIOFWNNCVNXJBYZ");

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
    msg.setTimeStamp(0.211988079807);
    msg.setSource(28353U);
    msg.setSourceEntity(102U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(145U);
    msg.name.assign("NFTJZVEWXTCMYHPKQQEWXUFFTBWDBPKUQHOCJFNZIUITZPWXNICHPRHEKUMSQGJYMDIIMMEGMRBQEANLWLRLUKAJVLCIHHDOLVNSIDBWZRWRHHXULQCSLAGFTVYBXKHGVVRZEWFGSPBNTZMSPORZRYYQNIBYTVTYOELVUASEFBJFJAJKKBSMGPOPCECOMANX");
    msg.attr_type = 80U;
    msg.min.assign("JLQJOMBZAPIDGFKIFFBFTHHEZRDAXYMCJVHEYCIOLV");
    msg.max.assign("JNYHRJCGBGDUAMKVGJQPDTEOAUWHWNCKGSMGENYFGQKDZQJVXQQWZOTVQXPRQFIOYMFVFTLFKPIVHSHNEZMLRZRMLPUVBTSCHYWONMWBTCETPGYKJSZBPQIRCUVIBMOAUFHBLUFAGFHDMGNPGLNTXZIDUWZTDQNWJLZMABYTTHOHRWYSBXDADNDXVIWERXNXXIVSPIAMPC");

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
    msg.setTimeStamp(0.46637286);
    msg.setSource(26075U);
    msg.setSourceEntity(186U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("HSIPOITBXVNUXZGCAFKAPUVDFCUTRAQJKCWTNCHLTANCZOKC");
    msg.predicate.assign("SXNMXFCVALSSLNTDGSNTORDLAOBQXBMKEGPGVZUPYWSLREZADWPBGKRPMBHBQWQBCVHCNJFEIJMAEQVMXIHFMNTZKPYEHIMDRJTYOHXTWFWLBOSHBNNZCSFKWIMTEPDLWKJURQVQRXTEGUUCIOYDAL");

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
    msg.setTimeStamp(0.374341192254);
    msg.setSource(45852U);
    msg.setSourceEntity(243U);
    msg.setDestination(48213U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("RDYFHNNYIIBMKJZRCUOWHPKALOUFNJSYIZGOKRGZHEEDAQUPQPJLYUBXVLVJQTDUOOHWBUWFSQMGSPHIRQKZRPOOTTXSIERWPNIURJNBLVARQNXFXQAHQKZZGGZJYJLPD");
    msg.predicate.assign("QATYQFVKBBIUXWNGTAUXXBAKDPSQUDANPLQGGHZVMEL");

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
    msg.setTimeStamp(0.416696181765);
    msg.setSource(59769U);
    msg.setSourceEntity(213U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("BLYKKISVAGSQNBBLNUYFRKEUJLIDYRDSQMKFQZUKNGTLMNQCGWXBDEARKVDGAPXAJCZJQMJXKLOPICCUYOEJTNQUFTOAQLBA");
    msg.predicate.assign("ADSZUJKEHESERIDXUFNZJQIGWUJQGFKVCOJHNUFWAUTIXFUXTIXCYSUCSCVOPTFIOLPOGHWEXYHKMUNLDGBLBKQQAQQYLRBWMZAPVADBHRMTZUSXFGSMOFGKNMFCYYWDWDHAMJAKOLB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HECWDHZLPKQJPWIXRCKGNNQDQPKNOJILRHFEFFNYKZEYFODVXBNCITHMGUVIEAAGJPVRRHCSVGFVHENCXSNKMXFSOUZDBJHFFGLCXXVITYPSTUIEZLHRQPOHOWYIJMMSVKTITLJDULUDYSJBUMAAKJTLZYLWRDCWXHOOGUKTCBYFGGRJBSMSFQPETOEQOQZMPNMEBXWTSY");
    tmp_msg_0.attr_type = 0U;
    tmp_msg_0.min.assign("YFZOMBECITNQOWVDGZWHTTCACAYT");
    tmp_msg_0.max.assign("NBITBVCFWEAOBOMKVALPFIJQ");
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
    msg.setTimeStamp(0.991758861729);
    msg.setSource(6523U);
    msg.setSourceEntity(237U);
    msg.setDestination(36901U);
    msg.setDestinationEntity(32U);
    msg.reactor.assign("OSEQCJXTWNXKLDLWRGMBUBESETLAMISKAZFGDAHWBPQADBLCXCHOGTQESCFWTRYUNBWZPZQCMEICFFXBSOXOPZPITGIVAEYYUA");

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
    msg.setTimeStamp(0.523659948254);
    msg.setSource(6065U);
    msg.setSourceEntity(200U);
    msg.setDestination(13537U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("CJNNQKWIGLKFTGSODJJCQKBDZQQMUWXHEDMJYZOULWVYZGLQTUZITHVEMFFOEJRCKJALCDAGSXIFXOHZFDLDHQI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDPCUCVXZIIJNMDHEWVHPETJUKEKEHFPLAJGHQXKWASRIWAJCEDECHNRYKQWUEBLZHCWEJCZQFDUSBGZZHTVDNZYFOKMFWGGADNNAAROXWRRCLX");
    tmp_msg_0.predicate.assign("HVDFNYNAHQKMUKEZIGTEIRIZYJJBFWTPKGQWVBKILZNROHFYLEITGOZYXAPCVRVWCMDBMPUHMQDAYBQGQYDXCGWNXSCJTSDBDQMBXZLPCYYWAVHEQTILXBVEPUOCPEZMZDAHCTGGXHSURBKPOFJFFKOJFXPJRO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NKIHSZSQJCRLMHKAWRHOOJPIJMQSADNPNFQQBZYMQQCCUVZBGMELNDVNIBOBKCFLDPPNABEDFITMMOWHTPAIAEPPULXDSYMXXGJJBWGEZMKOAUHWKAFZWHZOCEXFXVHBDDGWYGCRFPUQNRCCCWGVFGXYFKIHKR");
    tmp_tmp_msg_0_0.attr_type = 183U;
    tmp_tmp_msg_0_0.min.assign("KZDBTEUXTRLYCJENAMREDCNFUNXMWXBLCPTFCHHPSZNFVVVJEBVQYDUYJXBPQLKVADAMKEOKUBEKGJWYEZSSHMSVXKHGPDVYQCKUEALHQOGFNQEHOPSWZHGCHBBLPFACJUGJSGPLWTLIXTFIXKQVLJISRIITTROFDGYBMQXBTMRYQOZMNGYZQVGOTUROGK");
    tmp_tmp_msg_0_0.max.assign("FQFUDRZUJIYJCVFPEWXYOFCLNVCIYTRQKMUDRWQEHSXYYFTRCLXIZJXFOVWNFHCZNJBLHDCDLNXUGMBCWTKBNGZFMJFZCDNUEUQVLVVENYYBGADJADAQNTKTMEREZTDHRGELBRQYSUWDKSSIXKWNPGYZHGCREIFKAPGOOLSOIQSATREUVWLOOPBXAKTKPHSJHJVTMITMPQLGDKLAOQPPGXQIYAZNHSBKHRMWXGJXBJSPVUMOZIWBEWBHO");
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
    msg.setTimeStamp(0.906902783336);
    msg.setSource(60186U);
    msg.setSourceEntity(209U);
    msg.setDestination(54808U);
    msg.setDestinationEntity(167U);
    msg.reactor.assign("WREUVHCOZYCAKQXKHWSOELZSEDVVMYTKCQJJZQZEHHIHKBKIVCDGVXHJZFZI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RUSYTXSHBVKOJCOHAN");
    tmp_msg_0.predicate.assign("NNTQCAGSVFYVSTSFSLFXEDWJVXNBLQYRTECWUEDHZHUMHRKDOSIFKJKBUKWTVBDRKNOPYLWAUMLRRBAHWVJRUYKGNGCURMKUXQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UXLWTABLNIGTGFPCMRYUAQPUDYADXJHUVFTFRJKZWIVTWGJZKHDJYNKVQOYURWBHONYKXGKEXNVOZUGOCMTSWGGSZFJVHXZKVDBWHZLSPTHHEGGPWXMNFFXFPZRZTBKINEIZBSIMREQILYMPEPIRCMAERXEAXVNEWQDKWEBYCBAALYPQBK");
    tmp_tmp_msg_0_0.attr_type = 88U;
    tmp_tmp_msg_0_0.min.assign("IOHGIHEGIHQAXAOBMUEWH");
    tmp_tmp_msg_0_0.max.assign("PQLZQHGCKSFLRJPQFKXEJBXHETVRCZAMVZKPROJGEWEZLIVPAGJQMSHJCKTONNACZWNIOIXPLEXBTLNRRIDGBQDTASSAWZCPNBUFTDAJULBYKSNFGGWXURAGSUHXMWNTUFCYYQEFEYWVXZMIPJXFNWRTHUOYABFYDMWFHOSKPKQEZDZCVPYRDKQASMGUJBOLWLMLTWGHQRIDIMTCHYVJJXDNUDMQUEAOLEBXHZFBOGIPIOVVMCCKVRYB");
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
    msg.setTimeStamp(0.773430599535);
    msg.setSource(19461U);
    msg.setSourceEntity(130U);
    msg.setDestination(50301U);
    msg.setDestinationEntity(251U);
    msg.topic.assign("ZABGBISLOLYOUQIXVQECJRPQFESSFJRWLHWVYRHJHPBBFJTYTKAYFDWPQLDIOZMRZWNVUZVOPTPHZXAGAFPIINHVTN");
    msg.data.assign("FOOZGGCHTPKTNQANJHUOMVYHPQDRCTNFMPVCFMXSGZGTCPKXWIDSPPNYPWIEYSVNMSTWNOMLKTRBZIIIBQBBWXDGKRRULAQGLZFJRZWMXYBUUSVG");

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
    msg.setTimeStamp(0.535522664068);
    msg.setSource(37481U);
    msg.setSourceEntity(57U);
    msg.setDestination(32651U);
    msg.setDestinationEntity(10U);
    msg.topic.assign("NQMVDOIEVBWKJSBQCGYABORBCFQPKOSKIGZDRQYPDSLKVCDNWKKMDXGHACEWMQMAHQTBQFWPGVEVEOTLZGEOZJTYZUHRQUSJYIKOCBTMTZGAXRHSHYSBNFUUGDLARQEGNAXYPSZWEORVIVVVTPNUTJHJERLLNJLGOWHAICGWJWHUZ");
    msg.data.assign("VGUOAWUGJCYUTDOVSBFGZTJKJILDMLLPDSPAVRDBZXAXDSGCYAILWJHKEWKONELRTKGZRKNKWVLVVTQYMBZFPRFHIQBTRXPYHSNUJTBJWPPFRCLZBFEOYPHMHSOEOSICIJULCPVXZYQBZKVQTAQUMLMCWNEOEFYQIMKXVSOUCUXNHAHBDQESKNTJCMWJKPQXAUNNO");

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
    msg.setTimeStamp(0.466463073632);
    msg.setSource(47623U);
    msg.setSourceEntity(97U);
    msg.setDestination(42606U);
    msg.setDestinationEntity(76U);
    msg.topic.assign("EMBKZBHLRHKGCQWFLKIVJNDCBKCJQTOWQSMZSXUNNUGIVPXVGXVKTAFYUAYDVKOOVZYQIBUWGYAIDTVRHKPLIUQXUEHNCTTMPNZRCEBZUNNXDZKWXSDPPZEAILSTGANAJOPDMOTWZ");
    msg.data.assign("FGDBFAATSJTTYQLOKJHYXDBIFIWDTKMEGYVOAFMCCSMQBVRUVULLHJJZGVKGQGWPUDPSXUPTYXNAHLZBXXSKKVHBXWSFEJWNQTUBXOUXAAUPZALGQCIDLSYODOVKJDYNPMEFAFRYUCSDVXHIGLWKEQKLSWPLTIUYVIYRRNHKMZEIRPZNPARJQBCEIXZJZVQHZHWGWHNLOOSJZDNWNOJTBPFTTFUGRDCAINREMMYCPQOKREMVCOQMNB");

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
    msg.setTimeStamp(0.667552094971);
    msg.setSource(1468U);
    msg.setSourceEntity(197U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(201U);
    msg.frameid = 210U;
    const char tmp_msg_0[] = {14, -110, 95, -52, 57, 30, 3, -114, -76, -108, 61, 111, -87, 119, 32, 3, -1, -65, -9, 82, -73, -34, 108, -95, 59, -86, -105, 110, 13, 122, -36, -98, -66, 51, -56, 99, -7, 91, 99, -69, -29, 18, -36, -9, 100, -81, 83, 84, 84, 48, 17, -92, -27, 80, 56, -87, -51, -41, -111, -69, 104, 38, 116, -122, -69, 14, -72, -108, 52, -14, 113, 78, -70, 33, 6, 13, -128, -127, 83, -46, -13, 92, 68, -103, -95, 102, -3, -43, 83, -1, -89, -79, 34, -24, -47, -104, 26, 117, 14, 106, -122, 62, -53, 39, -83, 36, -42, 78, 57, 74, 90, 125, -15, 121, 71, -56, 111, 46, 7, -19, -21, -35, -94, 78, 83, 14, 124, -17};
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
    msg.setTimeStamp(0.0595672175337);
    msg.setSource(28134U);
    msg.setSourceEntity(221U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(55U);
    msg.frameid = 70U;
    const char tmp_msg_0[] = {2, -110, -22, -121, -32, 4, 99, 16, 55, -102, -3, 67, 70, -106, 51, 56, -3, -59, -70, 38, 1, -62, 101, -48, 83, -101, 34, 101, 92, 105, 52, -91, -6, 97, -127, 34, 1, -114, -6, -19, 40, 94, -28, -34, -118, 102, 22, -85, -37, -114, -13, -99, -20, 82, 15, 23, 99, -49, 29, 57, 32, -3, 48, 23, 2, -56, -5, 58, -38, -119, 0, -25, 95, -21, -102, -52, -119, -18, -94, 47, -122, 45, 68, 113, -15, 70, 68, 29, -90, -57, -124, 15, -58, -61, 67, -100, 16};
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
    msg.setTimeStamp(0.714851302862);
    msg.setSource(55392U);
    msg.setSourceEntity(185U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(240U);
    msg.frameid = 51U;
    const char tmp_msg_0[] = {10, 119, 3, 48, -99, -80, -98, -7, -26, 84, -31, 68, 10, -23, -69, 68, 26, -93, -14, -102, -77, 126, -69, 104, 34, -108, 122, -122, -105, 16, 59, 7, -60, -47, -7, 2, -73, -125, -44, -25, 110, 25, -76, 38, -54, 15, 68, -97, -50, -3, -23, -46, -81};
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
    msg.setTimeStamp(0.742873301237);
    msg.setSource(19330U);
    msg.setSourceEntity(7U);
    msg.setDestination(37951U);
    msg.setDestinationEntity(139U);
    msg.fps = 73U;
    msg.quality = 56U;
    msg.reps = 195U;
    msg.tsize = 245U;

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
    msg.setTimeStamp(0.233672916284);
    msg.setSource(40265U);
    msg.setSourceEntity(28U);
    msg.setDestination(31615U);
    msg.setDestinationEntity(112U);
    msg.fps = 196U;
    msg.quality = 186U;
    msg.reps = 36U;
    msg.tsize = 110U;

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
    msg.setTimeStamp(0.878880520327);
    msg.setSource(39455U);
    msg.setSourceEntity(104U);
    msg.setDestination(18157U);
    msg.setDestinationEntity(183U);
    msg.fps = 250U;
    msg.quality = 205U;
    msg.reps = 169U;
    msg.tsize = 141U;

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
    msg.setTimeStamp(0.906438522319);
    msg.setSource(48296U);
    msg.setSourceEntity(28U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.644593325673;
    msg.lon = 0.232405188338;
    msg.depth = 27U;
    msg.speed = 0.778694371084;
    msg.psi = 0.462685010788;

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
    msg.setTimeStamp(0.757354830005);
    msg.setSource(59014U);
    msg.setSourceEntity(254U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.295056181832;
    msg.lon = 0.470244738587;
    msg.depth = 122U;
    msg.speed = 0.0847665757006;
    msg.psi = 0.491586676137;

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
    msg.setTimeStamp(0.983177544563);
    msg.setSource(44053U);
    msg.setSourceEntity(113U);
    msg.setDestination(52567U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.166511282105;
    msg.lon = 0.818422168663;
    msg.depth = 157U;
    msg.speed = 0.476390341469;
    msg.psi = 0.328345859048;

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
    msg.setTimeStamp(0.822056676216);
    msg.setSource(31361U);
    msg.setSourceEntity(81U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(192U);
    msg.label.assign("PNNDTQEXWJSIKUFZVKUYRYJVXYZOFDQVTBZXNEAEVQVRGIQIIGDALOEFLKBCEHEEXVTRW");
    msg.lat = 0.496565133346;
    msg.lon = 0.234948082013;
    msg.z = 0.354723657609;
    msg.z_units = 210U;
    msg.cog = 0.833081765627;
    msg.sog = 0.194176913881;

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
    msg.setTimeStamp(0.692901326527);
    msg.setSource(2809U);
    msg.setSourceEntity(129U);
    msg.setDestination(24738U);
    msg.setDestinationEntity(103U);
    msg.label.assign("DKPJRTFVLIYMEYJIAGVFKXNQXLRKABUGYDYFUTWRONDOZDGIZHQKWEPQZZSKMERIUSMEOYVIOTMGLVTJMSXZNXMHSBWVHJFHCJJBSQNHICKDTCCUADNTEFLANBWRNKOPXHOE");
    msg.lat = 0.222515381874;
    msg.lon = 0.695254762305;
    msg.z = 0.623885902699;
    msg.z_units = 156U;
    msg.cog = 0.158544435152;
    msg.sog = 0.840406748084;

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
    msg.setTimeStamp(0.341550510747);
    msg.setSource(27412U);
    msg.setSourceEntity(104U);
    msg.setDestination(32527U);
    msg.setDestinationEntity(219U);
    msg.label.assign("RCNGMBUQYJDCFOEKVCNTKIBNKO");
    msg.lat = 0.315432635302;
    msg.lon = 0.945646965091;
    msg.z = 0.946808485597;
    msg.z_units = 46U;
    msg.cog = 0.289686653709;
    msg.sog = 0.946616526119;

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
    msg.setTimeStamp(0.61377495259);
    msg.setSource(50222U);
    msg.setSourceEntity(250U);
    msg.setDestination(6175U);
    msg.setDestinationEntity(15U);
    msg.name.assign("NZCDQMQXMIUYQUKHJGEAVRUCLNJAVOXDFOKTLXHMSTVBVBWMIFYKSDPANHAZXRVGOVYUQMKNLTSWPMXJXPLUGUOJREVGENZCDJGXLIEJVWYARBADISMODZELCNQWPCTQHBHPRPCDBADDOAFVYXFOFSYCRLRRBYACELNASGNFCGHGKELBSMWWKRODVZOFULHTZIRUPMQIGEUBTKJUTNZSPIXISIFJMYWEHW");
    msg.value.assign("GVWKHAVIJKMLFQONQQZLJTUYSZPEBLDYDITGDEWJRLXQYNSLFYYAINMGOYCDKRVBQDSECVETAEHIIKTVAAMRDGUAPOVFGUBXJZBTRLAKPVSMEBGHYKHUDOJTEHOOLRFVPJUDPXHMOUQTDQMBWHZVZHXOWMNXXLYNAIKPIUZKWFQJFFCQJZQBMBNGLVRGSGFWWICOCTHPPKWAAZIRDJCSUPCSSJOXIFPZXXCERUBUKZBTESSL");

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
    msg.setTimeStamp(0.731838391707);
    msg.setSource(6659U);
    msg.setSourceEntity(127U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZWEJURCWPKXGJZXTUSDJLSNTDKOHVZHXUXQTLLBBVMUPCRNANCLKDKRGKQTZTFUOIRHEZAEIPQFTCKOAKMPFXHDSQBHXNBUCUWIOFNDYFOIQDXBXOIWRWUMIWOYHJCLGGMCAMSTAZGFEFAER");
    msg.value.assign("EZXSRWHMYJTBXNDMIWMIRHVNHQOVATPIGZRHLALIQXGCZUAGKCQTEIJXQNISVYRHKTKGMGUCJXVSFDEWQPELTAJIOLPAMPSIBBOYFONKSDWHUKUSONOGIHVYBKQTAWDXSQNRAXWJDWUSKXPERPWQDTTQIRPMDNFWDAVEMFEYFEHDYMNPZBTZJBGLCEYXURPLJLNYCUZUEDUKFCCGBHQ");

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
    msg.setTimeStamp(0.97739844882);
    msg.setSource(40853U);
    msg.setSourceEntity(110U);
    msg.setDestination(54968U);
    msg.setDestinationEntity(0U);
    msg.name.assign("JUCOPLCHZCVGHTUMOJDDHAIUSFTEHAHXCXUAMZFYTNWRMQSWBVFOVZJISFKBFZHDRDKMZBYRAQWG");
    msg.value.assign("GUJLEKOYMSHIPMYOVATOUJYSBRMKRNYGNFNDNFOBVVXJRFJLBXGDHOOCFVSXVAZZLKJYCXGFLOQQJYTWLSPZRGLQFIMDTEXKAMBQZUWSZSAWTMXENVDIRLEQSWDCUCXEFEVWJZGXTQCUDLAYPUBPAPZPPX");

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
    msg.setTimeStamp(0.0815893731352);
    msg.setSource(25782U);
    msg.setSourceEntity(194U);
    msg.setDestination(38610U);
    msg.setDestinationEntity(171U);
    msg.name.assign("OPVGRYBLIXAMGAEFYLRPDIUPQKWTULIGWMOKXGKZDBC");

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
    msg.setTimeStamp(0.0746232958532);
    msg.setSource(28058U);
    msg.setSourceEntity(206U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(47U);
    msg.name.assign("JDWUZUANRWRBVIEAURIIQNVZLNHFQTJGSBQXCIXNOQLZRICWMMJFGBUCYKBVWNXHWHSDEFQZEWTKHOJ");

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
    msg.setTimeStamp(0.0808624007615);
    msg.setSource(15054U);
    msg.setSourceEntity(193U);
    msg.setDestination(46523U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DAVOHWVJLPPYGPSDTUMNYONHGQUBZBILRJUFIYJTZVJVWSOPHWHHFCJXFXKVARMLAVUTXMGBQWWGVSQPBKLLAOQOKWPURWCBMHNZZNQCJUNYSYRDEANUMEKIDKXEXLCCKGAIXEIDDODTYZBQDHEZCNTWKTPRTEOMZHIJLRSCCZBRZFIIXTMOUMHLVTFUSNYPYGOYDJS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SATRGYUCADLJDOEWBHCSXFPODKOWXITGQRECZXWYJSIKEPEFCQAKBTJQCJQMDZFFIINAVOIVKWUJVQQQGXVDAVPKEUDGANWQDURSJPHJEBUZYBMRKYTPCWUFKLNDXGCSBK");
    tmp_msg_0.value.assign("VAJPZPZDCGKFPJUMSRUPZDZDTLGNIUYLIQYXLXYZJPMZAJRMOAEQKCSLEXHKYWFVUAHAQOUMBHXACFJVYJLXEOBTVFYLDFBHTBGHXCHNIWROHISEEEDACMQD");
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
    msg.setTimeStamp(0.81727420641);
    msg.setSource(32106U);
    msg.setSourceEntity(202U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(182U);
    msg.name.assign("YMLLFDLBNDKDFKTXLSUTREEZQSMIOAERGMJQQKKNJIDRZRPFLTAJJDJPSPKWDSHLXXHUQEVLNWNRJZBHOPTWYLAOYQXCHWJIOMYGMIEAUTHVWEURNUFNSOAPGNSEBXFVHNPNQCZLRUXQKAZMGRWHTEGTSNBCOZGVDBISYDKRYTCWWWDFCVCZTFAEPCSVUTXOCUFXDJAOIUYGZIIGEHPZUVKMIVOBASLJQMPVAQYG");
    msg.visibility.assign("IDMBOMYGHGBDPBAZWEYKXIHWKYVRQNVZVKWDNDSONXQVFHECSJMGKCAUTLFNOSNGZCFKREJPYWHAQSTZXUPGLVERGZLMIBIOQTNRWRBPKXAWUOSSGHAUQLRGDVWUJFRWBIMDOIXIXAJSTFTZEZJSKUEMGUHYN");
    msg.scope.assign("WPRKIWIWLMTITFRHXXPEPHKIIENSQZPLGEQJASNYAOILIFAGWUASTEBFMKS");

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
    msg.setTimeStamp(0.370531110703);
    msg.setSource(12130U);
    msg.setSourceEntity(113U);
    msg.setDestination(18834U);
    msg.setDestinationEntity(101U);
    msg.name.assign("VPUEIWKMMJWHVPZWORXKVOBCZOWIJRBYKSFQOOBZEPSIGG");
    msg.visibility.assign("TNMMGUQSEHXOEPLRHCRNMSRDGEGAVXHTCVJWLVFAPSPLOPWPDOWJWDENPHBXCANOVFXCPLITGVSKZSNQVLEFBHYJDHRWROLWINASGDZKJWKDUEKTMMJHDYYQYPYJZFUMEBBVBRIQNIZZDGCXPXIKAZBJIRAOSQFBCMKCKGXRHNJXNTMUEDYDZI");
    msg.scope.assign("CNUQNZUBOVTQCDREVEPTXVMKZFWTWSXCYIEFSWSNAICRSZLYPLGFJOPIDEVYSONVHFVZXXOTZAMGEOBGQATAJYESIXPALJDFWRWVUPMBKWYUHCGREJEKRDPWBWLIRZNBPYBORMWPMGMSNABRAIOEHFDVHXAACFJZR");

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
    msg.setTimeStamp(0.880687542741);
    msg.setSource(10720U);
    msg.setSourceEntity(169U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(48U);
    msg.name.assign("YDDYSZWZGYICVAAGFVEXDHWUGCVQISNUJKNJTKGMUIODJHTJEHEQVNIPRWHAUWUJGCVWKPAVUMTQYOHYBUDZTRQPFXYMXBJXFWSXONPTKDWFYUOENCHKZZEXOIOWTDQIKV");
    msg.visibility.assign("UGQDYMCVRCDKZBAHGHNAXUPPYBOSAUOIFLWSMXUDYXWBICLNRPOOMCMUFXEPTVNHSGPLYILMNZ");
    msg.scope.assign("UGCXXJYIOCBHWARRSJIEMLEZQQNUYLMAJGFERXQFCWHVLIVD");

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
    msg.setTimeStamp(0.0326257631206);
    msg.setSource(20683U);
    msg.setSourceEntity(234U);
    msg.setDestination(53704U);
    msg.setDestinationEntity(41U);
    msg.name.assign("RHEIPIAQNKRLFKQUVXWGBNMRY");

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
    msg.setTimeStamp(0.435569949401);
    msg.setSource(25657U);
    msg.setSourceEntity(50U);
    msg.setDestination(64464U);
    msg.setDestinationEntity(62U);
    msg.name.assign("WPUUJEFHYQWIAMVCXDQEMWEVRNVBZYWKBNFPQLFBUXPHLAJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KJIVWSFHHVOPXNUYQRLXBSEYFMOBVOCYDMVPEWIGMQEANPGXUDAJQGXZWQZWCHLSIDRXVBKYTRCQSUCAMANJEDDHGOVCAIKEHRURWHJUKSVGNSODKNCBFLFTYQYVRNJKLTQEQQAZJGZZFNUBJAPICFXOBBKXMAQIENTLXDYIRAHWWNDVUNTLKCLYXUSHCUZZBMBFPXORBMLZHOSREGFTTYDTIGPYKZGILPICRPFUPMMZPMWSDAJWT");
    tmp_msg_0.value.assign("FOLREMLDOXCLSALADLIGJOGHIBHYYIBNVFNRZKKHGFJVQQIQIAKEPSKXQUUHWWNZHIBSLTZYWR");
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
    msg.setTimeStamp(0.951132445612);
    msg.setSource(37954U);
    msg.setSourceEntity(163U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(231U);
    msg.name.assign("QRPTCWEOHIDAXXUGMMKKDREXZXBCLZHNVYYKNTQKLTSYJOWUQOOTOPVOQQFJLZGPDDVTDCOLDCZLMNHSVBFEPAQIPWVTGMWHLEHIYDYLADOSEBJSEUSKZLSPDLSYCXIVYUJUGSRJK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XEXJWAEKEILCHLOJSXKTKOVRBYYCLFDERYCWMWDUEQGZVSMZPYCPMULOWENJZSKADVTMOHOOJMDZQPVUZHRSGTQRUOAHKPITBLVQJARJRHYAXASQKXQJWXLCOGILVNHDWGFRIBHPBNEUPZSONPGQS");
    tmp_msg_0.value.assign("QRIWNTGUEIOMKIXHHWIIDCVMXNOVVJBDUXXELAEVN");
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
    msg.setTimeStamp(0.831965004903);
    msg.setSource(45914U);
    msg.setSourceEntity(32U);
    msg.setDestination(13792U);
    msg.setDestinationEntity(122U);
    msg.name.assign("BBBRPVKWFSSYORCCFDAVXDQFXTUKEGRQLOSOQXGALVETMWPGDCAHLWZFCJLKSNSDNZWIKJMMLGA");

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
    msg.setTimeStamp(0.665059051263);
    msg.setSource(38956U);
    msg.setSourceEntity(23U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(204U);
    msg.name.assign("AHKZIGYJYPNDWJKVKBIDUTQRTHGWQUMWMZZSHWJZHTKDKSFOYSTAEEGBOEVAWMBMCXMPPPNUCZHJREMYBYURNCHOOKBJZFQACNKHSYXUFPQTVXAETXXYLXTHAORGBWOILUEKVZMGDMRQGPJXERTKMQTGDFHCFCXPNQLZVIONVIDRPURCBAPERSCREEOGQCFVYIQWITWUSILJOWZGXSDOZDDJAVHBLSVFLLIYNVLJCUBUNKSLFAJDI");

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
    msg.setTimeStamp(0.852270400352);
    msg.setSource(10091U);
    msg.setSourceEntity(56U);
    msg.setDestination(21175U);
    msg.setDestinationEntity(203U);
    msg.name.assign("VYZKNJSXTWWKIBXPAGHHYQRSXMRSMPOIQLIVZLTGGMKZXHTYYBFYDSEURQPIGULWEVSSHTYZZWPZZVNWCCPYBMUQDPWIWMFZETKIQELGDKAKNWCRVOVAUBNJDSK");

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
    msg.setTimeStamp(0.406801983642);
    msg.setSource(32804U);
    msg.setSourceEntity(195U);
    msg.setDestination(53455U);
    msg.setDestinationEntity(155U);
    msg.timeout = 556216317U;

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
    msg.setTimeStamp(0.927799405612);
    msg.setSource(27392U);
    msg.setSourceEntity(102U);
    msg.setDestination(58364U);
    msg.setDestinationEntity(82U);
    msg.timeout = 4153695560U;

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
    msg.setTimeStamp(0.816758655675);
    msg.setSource(61875U);
    msg.setSourceEntity(120U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(128U);
    msg.timeout = 477913409U;

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
    msg.setTimeStamp(0.610662814942);
    msg.setSource(17120U);
    msg.setSourceEntity(59U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2086665578U;

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
    msg.setTimeStamp(0.913761816733);
    msg.setSource(31239U);
    msg.setSourceEntity(171U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(51U);
    msg.sessid = 3365791644U;

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
    msg.setTimeStamp(0.507037661896);
    msg.setSource(44241U);
    msg.setSourceEntity(139U);
    msg.setDestination(57288U);
    msg.setDestinationEntity(148U);
    msg.sessid = 3968683014U;

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
    msg.setTimeStamp(0.952193268578);
    msg.setSource(54871U);
    msg.setSourceEntity(31U);
    msg.setDestination(56342U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3022933025U;
    msg.messages.assign("KQRYRYTSCZLJZIDFCUDKDCLMWFVNKCOYOZNAAIRHNPRUSXXNLS");

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
    msg.setTimeStamp(0.565209340762);
    msg.setSource(32949U);
    msg.setSourceEntity(205U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(253U);
    msg.sessid = 154216235U;
    msg.messages.assign("OIICHYPGJRLJTNSYQDRKZBQERZBZCAQDUJKWTQLNZNELSLORPXVHGLXFCGWKXMKGMFNNIIWNZUSPZMRAMBBYULAFKHAXHYOIVRHVTBBXGHWMYSFPPXKYWODGFGZCPYUWLJZEQMTVDORCRPQCZMUBQUKCPDSXQSLVAITIJSXTKDMKVEYFEFZECTTNHIAYFGXEWQUAODHIMALIWNGFVMTUBYSVSDEVURDEPHXOACJJOTBFOVS");

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
    msg.setTimeStamp(0.350252015906);
    msg.setSource(63408U);
    msg.setSourceEntity(26U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(105U);
    msg.sessid = 1401636158U;
    msg.messages.assign("SXMKGOCBIANABMBZTNGHRNWHIIUJSFXOLLVCNACHMGXRXVLAQEFGAOIDIPRJUZIXZWOAYQFIHEGKIMOYETGSMZOOUDVZSWHKCWMRHCVTKCRAYTWVPDEBOBZVFENDLKMLILMYDYNBTDPCZUEGNBEGRLFPOSEKZNCOVHAWF");

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
    msg.setTimeStamp(0.586637307924);
    msg.setSource(55477U);
    msg.setSourceEntity(219U);
    msg.setDestination(5769U);
    msg.setDestinationEntity(110U);
    msg.sessid = 438949125U;

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
    msg.setTimeStamp(0.194378260974);
    msg.setSource(10252U);
    msg.setSourceEntity(248U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(238U);
    msg.sessid = 56771376U;

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
    msg.setTimeStamp(0.750370918983);
    msg.setSource(7319U);
    msg.setSourceEntity(50U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(59U);
    msg.sessid = 4040052070U;

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
    msg.setTimeStamp(0.723510504967);
    msg.setSource(55934U);
    msg.setSourceEntity(240U);
    msg.setDestination(55258U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3297532932U;
    msg.status = 141U;

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
    msg.setTimeStamp(0.116950359338);
    msg.setSource(35508U);
    msg.setSourceEntity(33U);
    msg.setDestination(26877U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3773265788U;
    msg.status = 87U;

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
    msg.setTimeStamp(0.307904901517);
    msg.setSource(12071U);
    msg.setSourceEntity(191U);
    msg.setDestination(7424U);
    msg.setDestinationEntity(69U);
    msg.sessid = 4236980064U;
    msg.status = 8U;

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
    msg.setTimeStamp(0.939327834759);
    msg.setSource(46657U);
    msg.setSourceEntity(138U);
    msg.setDestination(61131U);
    msg.setDestinationEntity(140U);
    msg.name.assign("IGRROAJOCFGHFDQALTVJITXMXWRSYQDPCMFJSMSZWWYFOLZXGJYJHMGIYDNUDUMAKQFSKWDBDNMBBCTPLTKBZJZAUEVUVS");

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
    msg.setTimeStamp(0.0130327559629);
    msg.setSource(48218U);
    msg.setSourceEntity(21U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(74U);
    msg.name.assign("UPQHTJZQDYJBCBFUVERMTPEDJVKXJSAKCXXNLZFTVCOAHQNPZYIEYGNYBDBIUBMDJYDFNFVSNPQIPLEISNSAD");

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
    msg.setTimeStamp(0.482732781894);
    msg.setSource(53701U);
    msg.setSourceEntity(76U);
    msg.setDestination(29481U);
    msg.setDestinationEntity(229U);
    msg.name.assign("BVPGEKHMQEDOXBCBQGFIUWGHIOLEDKYXFFPVWVRAALTBZQXSALSAWYZWKWPNCNOI");

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
    msg.setTimeStamp(0.363258993601);
    msg.setSource(54418U);
    msg.setSourceEntity(37U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(115U);
    msg.name.assign("HGABNQCRDPFSGQRFUICBCPJOMOGKZTSOTRQMLHSXXNAVMQCATQEAXYVCKIDGENFGKSPTHEDMORZAEJHUDLATMQBOAWEIWAFPZEBUMVLPAXYIKIPWFSDYNWKUUZNBMYCVRSUGCFSEM");

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
    msg.setTimeStamp(0.0486104059798);
    msg.setSource(48992U);
    msg.setSourceEntity(7U);
    msg.setDestination(52440U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SSBBDFPWFRDKBNQBEBPRQGBELMGWOEQXDYWNTGKTRABH");

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
    msg.setTimeStamp(0.233158017837);
    msg.setSource(9779U);
    msg.setSourceEntity(33U);
    msg.setDestination(60766U);
    msg.setDestinationEntity(69U);
    msg.name.assign("PMSCXKWMSYRIQFLTRDVFCRANHVFERHSTKUDOLPWWTBWQGOPEFGUEJILHZRZGBIRGZZOAJVOMZL");

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
    msg.setTimeStamp(0.407696673423);
    msg.setSource(44967U);
    msg.setSourceEntity(47U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(104U);
    msg.type = 35U;
    msg.error.assign("FFRJVTTCGECQWSKFOYSLOUOXLMBFKLTPMNIFALZMLVFAZEVPQWRXRAIFOLNUGCDMQLSGFKHVSAPIFBWDHGMNTUNVUYZYCAIRIJSOPKGUXHAKCYWPDGPZSDBEITQAJXCZYHGJKQHWZRUORVUJYJHUSBEDEWXVIEXGDIVSJWIDANLTGPTVHRBVYLMAWPBDNCZNJMROKWZIDMLBNHWTCPGXSABPQSXKQETRYQZEBXJQUHYQYMONEB");

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
    msg.setTimeStamp(0.304171119331);
    msg.setSource(6332U);
    msg.setSourceEntity(140U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(131U);
    msg.type = 147U;
    msg.error.assign("ZEPLIQRSNMGDDSMLWUDPSOTWJGLSRJJLHVDXGNHMCMIQTWQMLWBZXGPVKRFVGUVVMYOTUVNYQWBAGSKWVGCUNOHZOYFTQLSHEQCAKVECLILXZIRIAAXQQZUEQBKDPHDKPJIPEORFCYOGIOFLUOCXMBVRSWZUNQCJDVAWCILYFHTBFAKZDWEJE");

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
    msg.setTimeStamp(0.358490963366);
    msg.setSource(32308U);
    msg.setSourceEntity(152U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(179U);
    msg.type = 64U;
    msg.error.assign("JMGJUMTQAQZWZWRWIOUOVVVVIBVYXSIYUCERNAW");

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
    msg.setTimeStamp(0.072291920347);
    msg.setSource(61383U);
    msg.setSourceEntity(46U);
    msg.setDestination(62002U);
    msg.setDestinationEntity(132U);
    msg.seq = 21263U;
    msg.sys_dst.assign("RXLVIQAHQGNTCUZUDCZAQKBNSUFZYETXWWRCBVSYSCPYWNDGRJLRPEPOTEWFYIGNTZMLLOMQNCBOIMBEULMUSFZSDCRPMSDXVBRTECEOVZDEKJRTEGKYEIQYFHQQPBROF");
    msg.flags = 32U;
    const char tmp_msg_0[] = {77, 66, 62, -13, 54, -56, 83, 67, -113, 62, -92, -128, 41, -40, 20, 52, 122, 108, 95, 28, -11, -75, -113, -16, 43, 27, 53, 22, -82, -25, -60, 43, 1, 62, -47, 79, 85, 71, 110, 27, 43, 103, -125, 17, 30, 12, -24, 118, -40, -97, 108, -112, 122, -121, 85, -83, -92, -24, 102, -66, -74, 37, -120, -46, -117, 102, -120, 2, 52, 22, -71, 1, 11, 47, 122, -29, 118, 17, 54, -122, -99, 98, 54, -27, 89, 114, -67, 81, -93, -125, 109, 24, 31, -92, -37, 74, -16, -24, 30, 38, -12, 125, 61, 23, -75, -113, 60, -71, 113, 6, 99, -81, 65, -51, 124, -35, 21, -30, 70, -38, -10, 44, -108, 36, 126, 7, 24, -29, -121, -14, 83, 72, 110, -116, 89, -8, 10, 111, 17, 68, 103};
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
    msg.setTimeStamp(0.0399981922121);
    msg.setSource(23787U);
    msg.setSourceEntity(92U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(225U);
    msg.seq = 48456U;
    msg.sys_dst.assign("DJKHYULZCDWHNRLRJXWAMMOYCBSLVGMHYLVATVZOGXXBXNPXGJTGSIRTERGCZQQLEXEDGABZVUYRWCEECWTHONIRCQANHWEMQVPFNZYWYBPCBXFHDGGOYFEHGTTJVKSVNKVDAFDOMNCPQPWIMF");
    msg.flags = 143U;
    const char tmp_msg_0[] = {52, -35, 10, -2, 125, 84, 94, -46, -108, -13, -52, 82, 36, -38, -85, -69, -77, -102, -18, 56, -41, -52, 19, -126, 45, -12, -63, -45, 47, -2, 49, 37, 25, 62, 99, -14, 76, 62, -50, 111, 40, 106, -89, -107, -125, 86, -67, -80, -119, -16, 5, 107, 91, -108, -18, 23, -30, 42, 106, 112, 9, -86, 35, 97, -89, 3, -64, 84, -62, 98, 14, -30, -38, 60, 62, -83, 91, 96, -73, 21, 1, 120, 63, -90, 17, 98, -63, -3, -72, 6, 66, 64, -88, 40, -43, -15, -26, -101, -110, -127, -55, 49, 45, -67, -127, 27, 0, 126, -92, -62, 68, 104, 112, 10, 45, -41, -69, -61, 120, -26, -122, -48, 65, 61, -30, 10, 6, -82, 13, 70, -20, -22, 51, 113, 0, -124, -48, -75, -52, -67, -48, -29, -27, 91, -13};
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
    msg.setTimeStamp(0.240107966842);
    msg.setSource(55197U);
    msg.setSourceEntity(137U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(157U);
    msg.seq = 63880U;
    msg.sys_dst.assign("KPGJEEMMPZFMDKUGCKBNQIHDNPIYRAAFHIXWBCJYNETFPJETTVVYFQSZLJPAIFLCAPRWALJPJIYOHVZBDFOLVOVONBUDNGLMEJFABIAOKXOXMMWZGCDSWCPZPSSFJWSNZNKUACEXVUZINLZJBXYSTEHIQCORMUULZVNKCRDMS");
    msg.flags = 195U;
    const char tmp_msg_0[] = {94, 42, -91, -23, -41, 88, 28, 37, -57, 57, 36, -8, 52, 9, -75, -40, -113};
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
    msg.setTimeStamp(0.633896347581);
    msg.setSource(26859U);
    msg.setSourceEntity(137U);
    msg.setDestination(22109U);
    msg.setDestinationEntity(10U);
    msg.sys_src.assign("UFXHBUZAQKIXCIHYFXYXVVFPMXOIKUWAFECBAGKBCWHJROSLWPWYYFZOTSSHQJVQDQEAUUJDTXCMOSLQPIAZRLPWZECWXGYEJAKNYMWSUZNYMDSGMVDILAWNSOSTBKLKAVTXTWDRDQGEHHEUBEFJYTLOZOK");
    msg.sys_dst.assign("EOBNFKUYSDLDEKIPYTJVBFCSRJMZUHYGPJLVLFWMAWUTAPNGMIFDVQEJKWKTKPEMLAJTTDKKNHVCNIDDUYXNYTEUEHDNBNOYOGCSOIGSPSROPYKVLXBFFYOQSJ");
    msg.flags = 177U;
    const char tmp_msg_0[] = {64, 38, -111, 102, -72, 83, -71, -39, -66, 57, -114, -24, 78, 32, -54, -22, 119, -107, 84, 124, 89, -94, -18, -41, 108, 116, -10, 75, 47, 65, 43, 101, -63, 65, -21, 9, 10, -30, -80, -1, -68, 1, 69, 56, -120, 73, 19, 85, 126, -58, 84, 60, 24, 8, 6, -21, -97, 115};
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
    msg.setTimeStamp(0.999430139308);
    msg.setSource(41467U);
    msg.setSourceEntity(155U);
    msg.setDestination(44199U);
    msg.setDestinationEntity(134U);
    msg.sys_src.assign("CKYGQENFBSCWQKXAVAYPETJFNPDMNHLUETCZCOBELGLPWAXPTMCDUZOUZZNJIBPHXQDLYHYJVAIOXYFMSOMFMTTEZWSOFAGDUJKULMMXPRAWXEFDBBDICQSPXRFTJKXRMJJUVHWWFYNIZGDNHP");
    msg.sys_dst.assign("QDHMLJWGISDXMKEZPAUBISPOSZWZYJVPXSLWYEFJZGYQIXSAPNEHCJTBREQGWXKRKXLZAURRYHAQOSABIOEUQRXNJRDZVMFYCBKGDZFJDNWNTPEUROEMOCCFHTICEAMVBSRVBYVVLMZYIAWERQYDQATPKHPPNQMLFMZNVAGFHDBLF");
    msg.flags = 142U;
    const char tmp_msg_0[] = {71, -71, 75, 4, 19, 59, -5, 99, -108, 14, 119, 77, -5, 120, -30, -26, -50, 75, -128, 114, 6, -75, -24, 110, -16, -69, -84, -29, 36, -15, -10, -54, -10, 50, -101, 17, -11, 98, -102, -29, 100, 116, -19, -118, 45, 44, -126, -112, 78, 39, -65, -60};
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
    msg.setTimeStamp(0.210913162959);
    msg.setSource(52518U);
    msg.setSourceEntity(165U);
    msg.setDestination(55576U);
    msg.setDestinationEntity(85U);
    msg.sys_src.assign("BYSEOMRCEAYICPDQJJT");
    msg.sys_dst.assign("DXUMHVIAMOYSEAQIZZSTOQSFJSBKOLPXKMIFDUBCRCAUVLDTOKVYYVHAOYHTGAEWPREFCBPJPQRKGWFTAZGWCJXOQRV");
    msg.flags = 227U;
    const char tmp_msg_0[] = {-119, -100, 72, -122, 52, -5, 113, 79, -76, -42, -57, 55, 70, 72, -26, -59, -44, 101, 93, 23, 34, -8, 15, 98, 2, 60, 0, -27, 74, 87, -81, 33, 97, -36, 7, -12, -57, 90, 59, -91, -68, 103, -40, -92, -121, 75, -67, 58, -114, -108, 78, -108, -66, 41, 41, -67, 3, 17, -25, -113, -128, 12, -10, 81, 49, -77, 30, -31, -33, 113, -120, -128, -25, -105, 82, 14, 69, -80, 43, 2, 94, 86, 119, -107, 18, 31, -79, -64, -61, -76, -96, 12, 102, 15, 100, -54, 34, 77, 12, -110, 87, -93, -92, -94, 91, -110, -31, 109, -75, -59, 38, 110, -38, -120, -10, 9, -63, 80, -14, -51, -82, 91, -69, -10, 29, -62, 23, -37, -36, 91, 41, -92, 56, -51, 42, 111, -82, -62, -82, -104, -103, 102, 110, -18, 55, 108, 118, 85, 85, 13, 60, 115, -90, 90, -24, -97, 53, 67, 50, 64, 2, 87, -82, -82, 100};
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
    msg.setTimeStamp(0.31959082717);
    msg.setSource(2172U);
    msg.setSourceEntity(14U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(118U);
    msg.seq = 65000U;
    msg.value = 16U;
    msg.error.assign("XCPZLKNWKCVAKSKIZNRVGEZU");

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
    msg.setTimeStamp(0.651707217872);
    msg.setSource(48816U);
    msg.setSourceEntity(141U);
    msg.setDestination(54533U);
    msg.setDestinationEntity(66U);
    msg.seq = 12910U;
    msg.value = 150U;
    msg.error.assign("VFVUSUXLIVVGKKCWJYQGTNKW");

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
    msg.setTimeStamp(0.565456825076);
    msg.setSource(6464U);
    msg.setSourceEntity(189U);
    msg.setDestination(9948U);
    msg.setDestinationEntity(57U);
    msg.seq = 54985U;
    msg.value = 207U;
    msg.error.assign("SMDFSZKRXZLTRCMDWQEVNKQIHNWYDGXOCCZNPTQLLKAXPKXSAKBJPJTYWFYMRAETWIWKONFGDEQMOUDVXRXVROHLKNHDYKFCCQQDJYLHUBPOFMRIUTCCLJXODOOQYVMHEMIAJSXGGEA");

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
    msg.setTimeStamp(0.862126975689);
    msg.setSource(63097U);
    msg.setSourceEntity(131U);
    msg.setDestination(64722U);
    msg.setDestinationEntity(78U);
    msg.seq = 58359U;
    msg.sys.assign("PUIIJCFHCYWKSWSJGGNWAYKEZOTPYXDUVOXQGTVRQNAGTJMFZUOOZMTJCWDGTEKUZQDNBANPDFNIVGCMD");
    msg.value = 0.709827846652;

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
    msg.setTimeStamp(0.709716984128);
    msg.setSource(11694U);
    msg.setSourceEntity(1U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(72U);
    msg.seq = 53727U;
    msg.sys.assign("HCYDCTEAGIVXOYUGEJLVEASWNCUPUEZFWTIIUAYPXNIEJQMZGKZFWHKAOCTTLDACEGUUENPKHZKOATMSJDUNYVJNB");
    msg.value = 0.500484654397;

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
    msg.setTimeStamp(0.358321371987);
    msg.setSource(19570U);
    msg.setSourceEntity(201U);
    msg.setDestination(7838U);
    msg.setDestinationEntity(19U);
    msg.seq = 5785U;
    msg.sys.assign("IWVRZUKFQAHUOGXJQRICCVTFLDQKHAKACHFXXPSOMNROCASPLNVVIRAFYTIXWZCSVQYHWLRUAETNLYXTIGVONUIBEDOPBJOKENULTCMJGKQWRYPMCFGQYUOJWBODTQMYHJXXCTHVYWJYHFBDRWZADJFEMBRXSHVSNLDGSZJUICALIGCKVTEE");
    msg.value = 0.835179201589;

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
    msg.setTimeStamp(0.214460308334);
    msg.setSource(7256U);
    msg.setSourceEntity(176U);
    msg.setDestination(3346U);
    msg.setDestinationEntity(148U);
    msg.action = 91U;
    msg.longain = 0.879482162133;
    msg.latgain = 0.722043326787;
    msg.bondthick = 1737091304U;
    msg.leadgain = 0.0661217066467;
    msg.deconflgain = 0.469459779777;

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
    msg.setTimeStamp(0.833946847123);
    msg.setSource(10293U);
    msg.setSourceEntity(3U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(46U);
    msg.action = 84U;
    msg.longain = 0.151023101373;
    msg.latgain = 0.40000135162;
    msg.bondthick = 3509279564U;
    msg.leadgain = 0.414924020203;
    msg.deconflgain = 0.824482839602;

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
    msg.setTimeStamp(0.41040544604);
    msg.setSource(44802U);
    msg.setSourceEntity(70U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(191U);
    msg.action = 91U;
    msg.longain = 0.473297038702;
    msg.latgain = 0.843953071376;
    msg.bondthick = 2224434869U;
    msg.leadgain = 0.886168886407;
    msg.deconflgain = 0.0917732568515;

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
    msg.setTimeStamp(0.0980732559129);
    msg.setSource(8277U);
    msg.setSourceEntity(185U);
    msg.setDestination(35286U);
    msg.setDestinationEntity(42U);
    msg.err_mean = 0.769503557734;
    msg.dist_min_abs = 0.180631604305;
    msg.dist_min_mean = 0.301042652568;

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
    msg.setTimeStamp(0.646726650893);
    msg.setSource(13328U);
    msg.setSourceEntity(113U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(122U);
    msg.err_mean = 0.330852160357;
    msg.dist_min_abs = 0.525781303977;
    msg.dist_min_mean = 0.130333469677;

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
    msg.setTimeStamp(0.504782504437);
    msg.setSource(61239U);
    msg.setSourceEntity(177U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(162U);
    msg.err_mean = 0.745543199354;
    msg.dist_min_abs = 0.96027936783;
    msg.dist_min_mean = 0.213520738857;

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
    msg.setTimeStamp(0.322756467066);
    msg.setSource(25585U);
    msg.setSourceEntity(22U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(184U);
    msg.action = 66U;
    msg.lon_gain = 0.740474995542;
    msg.lat_gain = 0.636487017548;
    msg.bond_thick = 0.892371285372;
    msg.lead_gain = 0.312802919839;
    msg.deconfl_gain = 0.554379262732;
    msg.accel_switch_gain = 0.246571790998;
    msg.safe_dist = 0.641099400358;
    msg.deconflict_offset = 0.454644477926;
    msg.accel_safe_margin = 0.744805219161;
    msg.accel_lim_x = 0.79563312509;

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
    msg.setTimeStamp(0.162426549893);
    msg.setSource(4499U);
    msg.setSourceEntity(88U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(161U);
    msg.action = 193U;
    msg.lon_gain = 0.17633835483;
    msg.lat_gain = 0.50486489536;
    msg.bond_thick = 0.788870058664;
    msg.lead_gain = 0.519150247831;
    msg.deconfl_gain = 0.688496599449;
    msg.accel_switch_gain = 0.314583970317;
    msg.safe_dist = 0.6812882949;
    msg.deconflict_offset = 0.354922700663;
    msg.accel_safe_margin = 0.875393000596;
    msg.accel_lim_x = 0.975095676746;

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
    msg.setTimeStamp(0.603672722719);
    msg.setSource(55445U);
    msg.setSourceEntity(213U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(193U);
    msg.action = 69U;
    msg.lon_gain = 0.725298968812;
    msg.lat_gain = 0.580530151346;
    msg.bond_thick = 0.233899700679;
    msg.lead_gain = 0.586437474365;
    msg.deconfl_gain = 0.571173709833;
    msg.accel_switch_gain = 0.665861627819;
    msg.safe_dist = 0.384303200714;
    msg.deconflict_offset = 0.968836553445;
    msg.accel_safe_margin = 0.742514368172;
    msg.accel_lim_x = 0.817914652673;

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
    msg.setTimeStamp(0.0997755946701);
    msg.setSource(5609U);
    msg.setSourceEntity(232U);
    msg.setDestination(12926U);
    msg.setDestinationEntity(244U);
    msg.type = 176U;
    msg.op = 193U;
    msg.err_mean = 0.600450383213;
    msg.dist_min_abs = 0.70350264221;
    msg.dist_min_mean = 0.708341986594;
    msg.roll_rate_mean = 0.319387744221;
    msg.time = 0.566404721716;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 246U;
    tmp_msg_0.lon_gain = 0.348102335258;
    tmp_msg_0.lat_gain = 0.604837037805;
    tmp_msg_0.bond_thick = 0.192642641508;
    tmp_msg_0.lead_gain = 0.301652160177;
    tmp_msg_0.deconfl_gain = 0.787633008794;
    tmp_msg_0.accel_switch_gain = 0.764265188456;
    tmp_msg_0.safe_dist = 0.848976762207;
    tmp_msg_0.deconflict_offset = 0.391634195931;
    tmp_msg_0.accel_safe_margin = 0.172573262535;
    tmp_msg_0.accel_lim_x = 0.398830389714;
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
    msg.setTimeStamp(0.952023769307);
    msg.setSource(46738U);
    msg.setSourceEntity(149U);
    msg.setDestination(60836U);
    msg.setDestinationEntity(138U);
    msg.type = 233U;
    msg.op = 138U;
    msg.err_mean = 0.60374596257;
    msg.dist_min_abs = 0.164305694435;
    msg.dist_min_mean = 0.638948882296;
    msg.roll_rate_mean = 0.386234126275;
    msg.time = 0.513533240948;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 89U;
    tmp_msg_0.lon_gain = 0.622398593897;
    tmp_msg_0.lat_gain = 0.252001733892;
    tmp_msg_0.bond_thick = 0.177218610632;
    tmp_msg_0.lead_gain = 0.655648087147;
    tmp_msg_0.deconfl_gain = 0.979204172639;
    tmp_msg_0.accel_switch_gain = 0.154800736494;
    tmp_msg_0.safe_dist = 0.11197289692;
    tmp_msg_0.deconflict_offset = 0.175752475945;
    tmp_msg_0.accel_safe_margin = 0.189136150619;
    tmp_msg_0.accel_lim_x = 0.511526548425;
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
    msg.setTimeStamp(0.70199406901);
    msg.setSource(35231U);
    msg.setSourceEntity(91U);
    msg.setDestination(46785U);
    msg.setDestinationEntity(142U);
    msg.type = 207U;
    msg.op = 36U;
    msg.err_mean = 0.0248932467822;
    msg.dist_min_abs = 0.420758049345;
    msg.dist_min_mean = 0.198303597927;
    msg.roll_rate_mean = 0.965764402512;
    msg.time = 0.172878702582;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 165U;
    tmp_msg_0.lon_gain = 0.406057729485;
    tmp_msg_0.lat_gain = 0.283500070009;
    tmp_msg_0.bond_thick = 0.202303245766;
    tmp_msg_0.lead_gain = 0.0124602606378;
    tmp_msg_0.deconfl_gain = 0.417560622753;
    tmp_msg_0.accel_switch_gain = 0.719114459551;
    tmp_msg_0.safe_dist = 0.832420719753;
    tmp_msg_0.deconflict_offset = 0.623187488555;
    tmp_msg_0.accel_safe_margin = 0.229653037684;
    tmp_msg_0.accel_lim_x = 0.0825603221299;
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
    msg.setTimeStamp(0.186900856572);
    msg.setSource(14093U);
    msg.setSourceEntity(31U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(60U);
    msg.uid = 121U;
    msg.frag_number = 54U;
    msg.num_frags = 113U;
    const char tmp_msg_0[] = {-38, 123, 124, -49, -111, -37, -96, 119, -51, 37, 59, 11, 1, 31, 88, 110, 13, 87, -63, 80, -78, 33, 62, 22, -14, 126, 115, 11, 57, 75, -111, -43, -39, 68, 94, 44, -47, 104, -112, 10, 28, -5, 93, -88, -75, -63, 12, 72, 88, 42, -24, -16, -122, -128, -94, -56, 38, -87, 23, 93, -19, 45, 23, -72, -92, 80, -24, -118, 115, -61, -10, -14, 84, 85, -45, -74, -107, 22, -31, 16, -50, 115, -48, 20, 41, 26, 121, 113, 37, 82, 63, 26, -19, 92, 94, 91, 12, 66, -64, -66, -55, -70, -78, 21, 7, 18, 37, -95, -9, -112, 54, -85, 95, -76, 17, -106, 31, -104, 4, -60, -126, 38, 34, 43, -54, -27, 67, -75, 33, -23, 102, -57, -15, 100, -71, 3, 108, -112, 33, -48, -86, 23, -81, -47, -51, -33, 26, -128, 35, -37, -9, 48, -62, 64, -15, -16, -34, 13, 42, -27, -3, -2, 124, 97, -118, 44, -128, -33, -13, 89, -69};
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
    msg.setTimeStamp(0.907758389445);
    msg.setSource(48696U);
    msg.setSourceEntity(160U);
    msg.setDestination(274U);
    msg.setDestinationEntity(141U);
    msg.uid = 143U;
    msg.frag_number = 237U;
    msg.num_frags = 99U;
    const char tmp_msg_0[] = {38, -122, 99, 26, -8, -11, 80, -20, 63, 88, -33, -49, 96, -95, 90, -44, 59, -107, -28, -77, -122, 89, 99, -96, 91, -52, -114, -18, -103, 19, -22, 56, 53, -2, -24, -32, -24, -116, 109, 123, -29, 100, -11, 75, -17, 14, -65, -80, 44, 24, -106, 86, -23, -51, 119, -39, -37, 5, 17, -67, 32, 71, 84, -101, 73, 41, 32, -37, -2, -9, -8, -109, -78, -69, -64, 61, -108, 47, 94, -5, 96, -128, 66, -54, -62, 23, -102, -100, 33, 116, -57, -104, 61, -39, 23, 60, 119, -11, 16, 118, -72, 27, -72, 123, 83, -7, -86, 22, 21, 74, -30, 23, -59, 56, 79, 83, -9, -4, 98, 54, -8, 112, -19, 47, -45, -116, 10, -55, -31, -85, 57, -11, 64, 119, 100, -103, 23, 33, -81, 88, -52, 34, 81, -119, 103, 94, -33, -41, -101, -54, -128, -1, 54, 95, -53, -59, -70, -85, -36, -79, -91, 23, -62, 64, -48, -85, 102, 35, -117, -70, -52, 108, 98, 10, -10, 12, -103, 35, 88, 111, 69, -82, 32, 30, 77, -61, 97, 67, -25, -88, 79, 89, -34, 38, 52, -20, -37, 115, 77, 23, -11, -85, -93, 27, -113, -73, -32, -18, -128, 101, 118, 33, -13, -67, -122, -119, 74, 8, -99, -26, -55, -88, 32, -74, -25, -121, 55, 51, -78, 6, 5, -92, 64, 58, -44, 23, -123, -124};
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
    msg.setTimeStamp(0.741955401523);
    msg.setSource(3080U);
    msg.setSourceEntity(67U);
    msg.setDestination(10726U);
    msg.setDestinationEntity(245U);
    msg.uid = 222U;
    msg.frag_number = 122U;
    msg.num_frags = 155U;
    const char tmp_msg_0[] = {104, 61, 63, 118, 115, 17, 26, 76, -67, 114, -70, -47, -31, -83, -19, -116, -124, 30, -71, 58, 74, 94, -23, 69, -17, -44, 119, 64, 105, -36, -98, 122, -38, -64, 52, 126, -31, 31, 44, -3, -76, -38, -123, 99, 30, -2, -105, -51, -80, 38, -96, -30, 98, 59, -66, 44, 9, 33, -6, -110, 48, 54, -29, 112};
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
    msg.setTimeStamp(0.18413039669);
    msg.setSource(5300U);
    msg.setSourceEntity(24U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(251U);
    msg.content_type.assign("DAINRDRQKIVQYZXUFRGOXDQIDLBMYJSGATELJHSIBFZTQOUKYXIKZZRFPDCUSGQWMPOCWTMHHSLKDCJNVWCAUUNUGEXLMKXDWMTFOEQERKVKTLXGQGABSVTLTITDOUMAYOHH");
    const char tmp_msg_0[] = {75, 121, -99, -91, 40, 13, 114, 16, 45, 73, 80, -8, 47, -105, -55, -103, 106, 29, -15, 27, -9, 3, -85, 72, -93, -48, -50, -55, 109, -123, 111, -103, 23, -47, -36, 118, 19, 68, 59, 40, 94, 5, 8, 90, -42, -114, -80, 49, -101, 95, -124, 11, -94, 73, 8, 43, 113, -93, 38, -38, 31, -40, -46, 103, 80, -72, 39, -31, -121, 48, -61, -73, -6, 95, -6, -104, 118};
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
    msg.setTimeStamp(0.179372138449);
    msg.setSource(36456U);
    msg.setSourceEntity(124U);
    msg.setDestination(206U);
    msg.setDestinationEntity(77U);
    msg.content_type.assign("ZETGSSNFRBWIJGMYKPAMBFLUWHDSYSOXWTCLSDKVFCJCEMTBBCVFLHIWZXYKQRTALPPIU");
    const char tmp_msg_0[] = {-39, -102, -3, 5, -25, 73, -121, 52, -122, -88, 118, 57, 125, 102, 13, -125, -61, -59, -60, 80, 123, 23, 110, -26, -38, 27, -40, 31, -86, -66, -73, -34, -30, -29, 7, 3, 39, -55, 94, -29, 15, 113, -119, 4, 37, -113, 115, -18, 53, -34, -127, 126, -97, 87, 98, 83, 3, -69, -118, 26, 41, 39, -110, -117, 66, -8, -6, -15, 109, 8, 64, -39, -93, -64, 99, -54, -112, -125, 11, 50, 49, 4, -95, -122, -75, -117, -83, -51, -74, 66, -120, 19, -86, -10, 110, 46, -50, -2, -116, -26, -121, -55, 20, -88, -19, -123, 15, 25, 72, 58, -72, -6, 113, -54, -50, -56, -46, 51, 106, -123, -119, 5, -20, 14, 2, 101, -68, 70, -20, -61, 93, 42, -119, -120, -120, -46, -82, 54, 121, -82, -64, 119, -87, 112, -74, 41, 16, -105, 18, 10, -124, 87, 35, 85, -1, 32, 16, -75, -35, -100, -67, 96, -128, 97, -67, -69, -62, 49, -58, 40, -109, 68, 115, 121, 120, 6, -88, 43, 34, -42, 20, 30, -72, -81, 57, -71, -72, -12, 34, 121, -102, 76, -58, -56, 47, -60, -21, -23, 67, 36, -27, 116, 8, -128, 43, 44, -18, 32, 79, -51, 8, 121, 106, -96, 82, -42, 101, -113, -27, 60, -74, -63, -62, -17, -89, 95, 104, 80, 11, 126, 50, -126, 89, 110, -108, 57, 41, -19, 30, 65, -8, 114, -115, -51, 5};
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
    msg.setTimeStamp(0.471494403749);
    msg.setSource(65310U);
    msg.setSourceEntity(117U);
    msg.setDestination(45440U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("HSUIHLBUNXPMDZLVIGRGOUGTJCB");
    const char tmp_msg_0[] = {108, -83, -99, 59, -109, 126, 72, -94, -126, -128, -72, 41, 29, -9, 28, 106, 60, -19, -70, 29, -99, 14, -34, -33, -101, 30, -65, -119, 3, 65, -55, 31, -96, 43, 61, -32, 122, -25, 100, -15, -45, 125, -83, -128, -35, -75, 103, -60, -112, -56, 11, 45, 78, -124, 12, 33, -53, -104, 90, 84, 119, -77, -87, -106, 85, 58, -85, 60, -61, 31, -20, -119, -119, -24, -93, 80, 33, -19, -4, -107, -113, 12, -77, 99, -50, 2, 10, 62, -89, -49, 112, -29, -7, -102, 52, -96, 120, -75, -122, -53, -38, -103, -48, -124, 118, -39, 87, -20, 69, 110, -42, -111, -66, 17, 49, 59, 43, 51, -23, 1, 49, 41, -28, -11, -86, -51, -39, -112, 28, -93, -89, -19, -44, -78, 39, -59, 84, -98, 82, 69, 56, 72, -39, 76, -4, -29, -54, 38, 18, -128, 25, -64, -88, 105, -12, -14, 62, -65, -96, -127, 35, -107, -36, -9, 90, 36, 71, 84, -90, 107, -12, -67, 117, -41};
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
    msg.setTimeStamp(0.829396305486);
    msg.setSource(7471U);
    msg.setSourceEntity(178U);
    msg.setDestination(22621U);
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
    msg.setTimeStamp(0.28538287491);
    msg.setSource(17853U);
    msg.setSourceEntity(39U);
    msg.setDestination(55085U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.152639195113);
    msg.setSource(51516U);
    msg.setSourceEntity(28U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.325312297286);
    msg.setSource(46006U);
    msg.setSourceEntity(61U);
    msg.setDestination(48789U);
    msg.setDestinationEntity(122U);
    msg.target = 48871U;
    msg.bearing = 0.403715432976;
    msg.elevation = 0.909975198604;

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
    msg.setTimeStamp(0.584213273925);
    msg.setSource(57612U);
    msg.setSourceEntity(36U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(28U);
    msg.target = 38022U;
    msg.bearing = 0.905276237776;
    msg.elevation = 0.0984162125255;

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
    msg.setTimeStamp(0.718404977384);
    msg.setSource(22707U);
    msg.setSourceEntity(214U);
    msg.setDestination(47171U);
    msg.setDestinationEntity(226U);
    msg.target = 7928U;
    msg.bearing = 0.00390771475735;
    msg.elevation = 0.0540136224444;

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
    msg.setTimeStamp(0.747782413187);
    msg.setSource(11394U);
    msg.setSourceEntity(238U);
    msg.setDestination(63069U);
    msg.setDestinationEntity(64U);
    msg.target = 58480U;
    msg.x = 0.84566266069;
    msg.y = 0.733852917135;
    msg.z = 0.982829708084;

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
    msg.setTimeStamp(0.0451479571358);
    msg.setSource(38156U);
    msg.setSourceEntity(39U);
    msg.setDestination(41433U);
    msg.setDestinationEntity(156U);
    msg.target = 62982U;
    msg.x = 0.034020663118;
    msg.y = 0.790457604264;
    msg.z = 0.286683331724;

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
    msg.setTimeStamp(0.785650047974);
    msg.setSource(46693U);
    msg.setSourceEntity(103U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(43U);
    msg.target = 13782U;
    msg.x = 0.320291958398;
    msg.y = 0.00867124838442;
    msg.z = 0.708401857982;

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
    msg.setTimeStamp(0.381931616297);
    msg.setSource(584U);
    msg.setSourceEntity(106U);
    msg.setDestination(9436U);
    msg.setDestinationEntity(177U);
    msg.target = 7086U;
    msg.lat = 0.979115122981;
    msg.lon = 0.868518334149;
    msg.z_units = 242U;
    msg.z = 0.411890358625;

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
    msg.setTimeStamp(0.556600644126);
    msg.setSource(40886U);
    msg.setSourceEntity(110U);
    msg.setDestination(59597U);
    msg.setDestinationEntity(40U);
    msg.target = 15087U;
    msg.lat = 0.42765162682;
    msg.lon = 0.886617877982;
    msg.z_units = 209U;
    msg.z = 0.0992801746679;

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
    msg.setTimeStamp(0.416677969793);
    msg.setSource(17907U);
    msg.setSourceEntity(200U);
    msg.setDestination(36976U);
    msg.setDestinationEntity(144U);
    msg.target = 14652U;
    msg.lat = 0.126145959854;
    msg.lon = 0.829030107985;
    msg.z_units = 45U;
    msg.z = 0.176180818594;

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
    msg.setTimeStamp(0.919680504416);
    msg.setSource(7921U);
    msg.setSourceEntity(9U);
    msg.setDestination(32915U);
    msg.setDestinationEntity(166U);
    msg.locale.assign("AYVQESPSGFSWQGHELIZBNFWNUAXNPIFOFXMVTCCKRIBFCRCNPMONOCJQMTHUAYWBLAIVXVMDUQCONTRZJWHHNQXXYIIVSBBPKIQAPLGXPCORHQTUJADBRQGDSKXZXLKEVYBHZKWMVEMSEYDMRAJAFIIMPTGZUKHYTQONVJPWURWBTYLDWTJVOBMSQ");
    const char tmp_msg_0[] = {61, -59, -72, -111, -41, 80, 2, -5, -58, -67, -19, -83, -127, 30, 94, -25, -15, 45, -122, 96, -77, -20, 29, 68, -8, -30, -11, 35, -43, -108, -97, -34, 113, -120, -116, 71, 91, 84, -104, 6, 50, 52, -52, 16, 44, 101, 99, -86, -63, -91, -104, 64, -44, 95, 79, -99, 108, -76, -25, -72, -26, -68, -46, -93, -6, -66, 122, 88, -89, -63, -107, -95, -77, 22, -95, -71, 7, 31, -128, -24, -99, 87, 20, 86, -38, 118, -84, 30, 99, -9, -48, -29, 6, -86, 64, -44, 23, -16, -64, 76, -102, 76, 120, -61, 93, 122, -26, 123, 61, 11, -67, -44, -75, -16, -91, -39, 69, 72, -61, -14, 18, -43, -78, 36, -80, -77, -109, -46, 122, -47, 64, 16};
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
    msg.setTimeStamp(0.504229407138);
    msg.setSource(51347U);
    msg.setSourceEntity(121U);
    msg.setDestination(40865U);
    msg.setDestinationEntity(224U);
    msg.locale.assign("NLCCHBSRZGPFXVNLNVRNUESQYDKTOGOWQKBTQXTCHOSHHGYSNWFWJUHSMQDNBLTMXPGZAXTJCIVUBPKOEOWIZSUYDSBMOXALZAJUUDIIMGRJZRQIJVQVDAWMBLFJWLYNRWHCZAAKDMGRZJFPCMULSIAMITCGAMJCJEGPEPITUEKFIVYEFXEBQFURHJTYFDRNXLPBVYIYFNWKQ");
    const char tmp_msg_0[] = {-76, -122, -13, -68, -36, 1, 49, -11, 48, 88, 66, -73, -27, -92, 116, -96, 88, -75, -121, 33, -126, 12, 97, 83, 109, -108, 95, 110, -24, 3, -6, -45, 18, -83, -37, 27, -1, -10, -5, -112, -97, -48, 110, 12, -52, 86, -98, -103, -25, 3, -71, 112, 56, -64, -74, 62, -94, -49, 14, 121, 74, 69, 3, 106, 91, -106, -57, 90, -87, -118, -37, 41, -117, 69, -112, 108, -38, -58, -55, 125, -79, -90, 99, -38, 39, -49, 2, -3, -82, -106, -65, 72, 41, -97, -68, -16, 98, -66, 8, 59, 20, 61, 48, -43, -15, -59, -116, -95, -27, -35, -4, -106, 51, -15, -114, 7, -14, -85, -80, 39, -62, 2, 5, -87, 43, 116, 23, -30, 73, 43, -64, 68, 29, 106, 118, -62, -26, 38, 29, 32, 1, 15, 28, 51, 36, 25, 26, -2, 62, 95, -93, -92, 36, 34, 116, -82, -38, -104, 24, -78, -9, -110, 37, 44, 27, -34, -3, -107, -66, -30, -112, 26, -15, 122, -110, 116, -122, 80, 94, -123, 121, -78, -119, 29, 100, -107, -62, -73, 9, -33, -115, -16, 120, 121, 112, -16, 78, -32, 121, 59, 43, -90, 24, -51, 66, 14, 105, 24, 70, -104, 71, 105, -106, -118, 72, -48, 21, -70, -31, 75, -99, -111, 79, -88, -58, 112, -50, -81, -1, -105, 96, -30, -67, 107, 106, 94, -32, 107, -46, -76, -25, -85, -41, -55, 112};
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
    msg.setTimeStamp(0.150772136537);
    msg.setSource(30583U);
    msg.setSourceEntity(11U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(51U);
    msg.locale.assign("YZJARUPDMOKOXAOOJTEHOACSJXYPWKXZZNKYINHMIOZASQIQPPHRSRIOIAJPRTNLJLSGTOQAEKCVKQZAXGZFYPTGXNUYJSGVMEXWSVXMDEIG");
    const char tmp_msg_0[] = {-7, 89, 20, 86, 86, -23, 38, -21, 50, 59, -109, 2, 108, 111, -35, 57, 91, 19, -97, -32, 86, 23, 42, -25, 48, 73, 47, -105, 15, -124, 25, -65, -93, 112, 80, 63, 79, 53, 79, 96, 106, -117, 31, 95, -9, -88, 79, 95, 35, -23, 110, -2, -90, -20, 33, -46, 125, -92, -115, -66, -7, 121, 45, -64, -39, 51, -12, 60, 85, 5, 114, -79, -78, -42, 107, -11, 79, 54, 23, -70, 82, 119, -71, -20, -118, -28, 55, -109, -55, 111, 114, -110, 98, 39, 76, -74, 69, -74, 4, -52};
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
    msg.setTimeStamp(0.125192685424);
    msg.setSource(49769U);
    msg.setSourceEntity(144U);
    msg.setDestination(58971U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.186968928001);
    msg.setSource(56161U);
    msg.setSourceEntity(138U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.993265790484);
    msg.setSource(8862U);
    msg.setSourceEntity(129U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.889339132478);
    msg.setSource(12585U);
    msg.setSourceEntity(32U);
    msg.setDestination(4506U);
    msg.setDestinationEntity(19U);
    msg.camid = 135U;
    msg.x = 38545U;
    msg.y = 39275U;

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
    msg.setTimeStamp(0.214794317125);
    msg.setSource(47620U);
    msg.setSourceEntity(27U);
    msg.setDestination(24017U);
    msg.setDestinationEntity(252U);
    msg.camid = 198U;
    msg.x = 63929U;
    msg.y = 7682U;

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
    msg.setTimeStamp(0.443804186273);
    msg.setSource(35323U);
    msg.setSourceEntity(196U);
    msg.setDestination(5830U);
    msg.setDestinationEntity(106U);
    msg.camid = 135U;
    msg.x = 31504U;
    msg.y = 34206U;

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
    msg.setTimeStamp(0.232015081346);
    msg.setSource(7616U);
    msg.setSourceEntity(167U);
    msg.setDestination(53369U);
    msg.setDestinationEntity(200U);
    msg.camid = 230U;
    msg.x = 18716U;
    msg.y = 22838U;

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
    msg.setTimeStamp(0.911465621894);
    msg.setSource(50406U);
    msg.setSourceEntity(234U);
    msg.setDestination(30363U);
    msg.setDestinationEntity(60U);
    msg.camid = 76U;
    msg.x = 34145U;
    msg.y = 63733U;

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
    msg.setTimeStamp(0.172601258155);
    msg.setSource(56566U);
    msg.setSourceEntity(70U);
    msg.setDestination(39095U);
    msg.setDestinationEntity(91U);
    msg.camid = 102U;
    msg.x = 51151U;
    msg.y = 38046U;

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
    msg.setTimeStamp(0.330010077989);
    msg.setSource(59798U);
    msg.setSourceEntity(42U);
    msg.setDestination(29203U);
    msg.setDestinationEntity(122U);
    msg.tracking = 125U;
    msg.lat = 0.133633648592;
    msg.lon = 0.841468839633;
    msg.x = 0.685207289594;
    msg.y = 0.698108884134;
    msg.z = 0.757537048593;

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
    msg.setTimeStamp(0.654987986308);
    msg.setSource(27133U);
    msg.setSourceEntity(25U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(238U);
    msg.tracking = 51U;
    msg.lat = 0.733778067996;
    msg.lon = 0.180978138805;
    msg.x = 0.678774579226;
    msg.y = 0.719172003294;
    msg.z = 0.361764630969;

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
    msg.setTimeStamp(0.738143737626);
    msg.setSource(34936U);
    msg.setSourceEntity(194U);
    msg.setDestination(29897U);
    msg.setDestinationEntity(240U);
    msg.tracking = 125U;
    msg.lat = 0.713939906325;
    msg.lon = 0.464569188907;
    msg.x = 0.349066099899;
    msg.y = 0.920086261072;
    msg.z = 0.538115786139;

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
    msg.setTimeStamp(0.41597956501);
    msg.setSource(23810U);
    msg.setSourceEntity(115U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(90U);
    msg.target.assign("PQUIFFHSNRRNDXOZLCFNPRTQHCVUFATGLLCWILKXPSHQAMORLNJJIAVQGDSAMTMTZETQAGOQUKPOOMAHBQJIBOHHIUAVBVCDCZMRIOJTLXDUKBPKXWGDXWVBWEFEBFZSFHGGIMVCTQPANINPTJKVMBUJECEYDRKPGWWWVAEUDSPGWLKYYLYZDDVKIKBX");
    msg.lbearing = 0.678586889235;
    msg.lelevation = 0.812571747191;
    msg.bearing = 0.917926977586;
    msg.elevation = 0.720760149627;
    msg.phi = 0.722923836645;
    msg.theta = 0.15811887065;
    msg.psi = 0.750648738959;
    msg.accuracy = 0.898870647338;

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
    msg.setTimeStamp(0.147855035383);
    msg.setSource(59420U);
    msg.setSourceEntity(8U);
    msg.setDestination(57446U);
    msg.setDestinationEntity(38U);
    msg.target.assign("GMJFRUUBOIGJJHPFZSEQSDUHEAIQPNRXASQLBRAZUCRFODBZVMRNLMAKPPAEFRDFXIVODFFCNVYVEBGAMQSPDVKBLYMDCKUNXGEZRTWTPEEQIJIKAXHYGJWLSHLRCWXDDUDNYJMXLKSVUQVHTVDQASWNOETSCVIRKKJXUZXIZQLMGGOLWLTWFWCOYQMEPCYTNZWZXAEOHSI");
    msg.lbearing = 0.0311708368698;
    msg.lelevation = 0.484948259136;
    msg.bearing = 0.0679076227209;
    msg.elevation = 0.124751350859;
    msg.phi = 0.163713187747;
    msg.theta = 0.265845762809;
    msg.psi = 0.791878378646;
    msg.accuracy = 0.222601622567;

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
    msg.setTimeStamp(0.449915208247);
    msg.setSource(27864U);
    msg.setSourceEntity(57U);
    msg.setDestination(47346U);
    msg.setDestinationEntity(52U);
    msg.target.assign("OTPJIDHIJUDTQWGADCRAGSRPWZQBIVUXOXFKDUYZIWVLCFRZOWESMAZHEZQFPYRHPGJJTPCSLJOXIYMCKXLOMYUNMTV");
    msg.lbearing = 0.214383012358;
    msg.lelevation = 0.179861385506;
    msg.bearing = 0.515391650884;
    msg.elevation = 0.681927515145;
    msg.phi = 0.969931536471;
    msg.theta = 0.524601341843;
    msg.psi = 0.0135940355927;
    msg.accuracy = 0.0517195383808;

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
    msg.setTimeStamp(0.238609842842);
    msg.setSource(24916U);
    msg.setSourceEntity(9U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(242U);
    msg.target.assign("GKIISUTEFUMTWSCLWCDDBVNDRBZPJZGNZSRPVVMFGRQNUVYMOTETLPAVHGTFMOWQRXLPYKCSRLUFFOGBVCXJGIQHIOJQYEVE");
    msg.x = 0.206060646209;
    msg.y = 0.256674878579;
    msg.z = 0.33178947308;
    msg.n = 0.123606468388;
    msg.e = 0.263233678986;
    msg.d = 0.85508019238;
    msg.phi = 0.456305286096;
    msg.theta = 0.782495176164;
    msg.psi = 0.0902763175671;
    msg.accuracy = 0.803991641612;

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
    msg.setTimeStamp(0.311442963894);
    msg.setSource(49954U);
    msg.setSourceEntity(20U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(241U);
    msg.target.assign("KPBCEWSLJJAAUZDYXFNONUJAHIHBJZYKGUXZCEWBGTMXLVSNTBXNBMEOJFBPAEDKCRECDCFMCMLIAEUDJPVFTFOHXRLYNETXMHPOIYZMRIRRWCBRPLKUIQNIWSKXGSQPNZUOREWOWSVQYGOPAAWWYTIPYHGEMBDSUYNCLKVWRQZHAITCAQIYDMVRTFDHQHNHSDLZBZSVDVPJGJGXQGKFVQIG");
    msg.x = 0.334055268061;
    msg.y = 0.732608279143;
    msg.z = 0.896563926207;
    msg.n = 0.173429782934;
    msg.e = 0.757663040563;
    msg.d = 0.784580817561;
    msg.phi = 0.425991701159;
    msg.theta = 0.475795418172;
    msg.psi = 0.783325551594;
    msg.accuracy = 0.607331708285;

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
    msg.setTimeStamp(0.28100012945);
    msg.setSource(11921U);
    msg.setSourceEntity(157U);
    msg.setDestination(34880U);
    msg.setDestinationEntity(113U);
    msg.target.assign("JYVZHHMGYOHS");
    msg.x = 0.428125958727;
    msg.y = 0.813579853363;
    msg.z = 0.148271346193;
    msg.n = 0.0613065524402;
    msg.e = 0.318006470831;
    msg.d = 0.286162448746;
    msg.phi = 0.0343429312143;
    msg.theta = 0.637916854095;
    msg.psi = 0.140376640887;
    msg.accuracy = 0.971986046918;

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
    msg.setTimeStamp(0.338475667941);
    msg.setSource(16326U);
    msg.setSourceEntity(201U);
    msg.setDestination(45945U);
    msg.setDestinationEntity(145U);
    msg.target.assign("ETSPSOOFGNGVFJXOPFKTBWVJLXZSDAUSDCNJTUDIAFQBPHZCFGDLOKFDJBORWEZMGXJIXMK");
    msg.lat = 0.131612700905;
    msg.lon = 0.815737642958;
    msg.z_units = 140U;
    msg.z = 0.409030555917;
    msg.accuracy = 0.737511464822;

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
    msg.setTimeStamp(0.543019929155);
    msg.setSource(63486U);
    msg.setSourceEntity(170U);
    msg.setDestination(5376U);
    msg.setDestinationEntity(108U);
    msg.target.assign("ZGUDMKNRLBCDVETFFQZNWCWYXJHQXJQKDMZBQUBFYYSRPLUYAOXSJKRKDAHLCGOELCHLDQGYJTMRZMYSOPWRTLATBFVIIHMAQJEEPPUTEGULSDFRJUCKTZOAI");
    msg.lat = 0.269355298181;
    msg.lon = 0.500089727405;
    msg.z_units = 211U;
    msg.z = 0.665021852826;
    msg.accuracy = 0.771652563651;

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
    msg.setTimeStamp(0.0788688427996);
    msg.setSource(54558U);
    msg.setSourceEntity(81U);
    msg.setDestination(16035U);
    msg.setDestinationEntity(66U);
    msg.target.assign("XXUWTBYDJGHZBDIHRQVQHREQFSTNSUUYFGAOFIBQAZWPKJEKOLT");
    msg.lat = 0.489372859518;
    msg.lon = 0.0972111722329;
    msg.z_units = 30U;
    msg.z = 0.202790064284;
    msg.accuracy = 0.858747771861;

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
    msg.setTimeStamp(0.917221086156);
    msg.setSource(25783U);
    msg.setSourceEntity(2U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(96U);
    msg.name.assign("WBUYSLSQGOHEMKHQMEQYNSPXXUFVEQDNXHWUNOOCTKRPCUIBYCHQWPCMVFUSQDOCQBPYBLOAKTALUBZRNFJFWORXIUTKHAFSPCZKTGEMRFEVIBSOT");
    msg.lat = 0.870198116078;
    msg.lon = 0.685282010444;
    msg.z = 0.82445549491;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.68811456943);
    msg.setSource(33278U);
    msg.setSourceEntity(49U);
    msg.setDestination(5687U);
    msg.setDestinationEntity(72U);
    msg.name.assign("XTHWPJLEUUKGAGHEWUWQFKNTZMHKJJKHFWHASRWTARURONMGSNHBSTRLVUPNPLJDRJXXVSQOSNKNIWENDACZFJHYCFAMLBNANTYCSXYRVYSKMQDUQOYTKOZEWEYJOPBUOIVIXZRCTLEXCOFHDPWXVXVEEBGMBEIVXZCWFMZLFTJ");
    msg.lat = 0.148685222072;
    msg.lon = 0.861854895055;
    msg.z = 0.0851654058869;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.381105777535);
    msg.setSource(48674U);
    msg.setSourceEntity(244U);
    msg.setDestination(26468U);
    msg.setDestinationEntity(232U);
    msg.name.assign("UYFBSHEFXYYSZKKCUHGBIIFBLXESFJOXXVPEIGPWGZLHQOKJCQVSCQQFNCMJCHAXARVWOUSYDYQFAQNXDPWPIOCKDWHKWOSUEYCPMMHLASU");
    msg.lat = 0.861124280216;
    msg.lon = 0.0593331713142;
    msg.z = 0.364046346183;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.809484516267);
    msg.setSource(40034U);
    msg.setSourceEntity(39U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(194U);
    msg.op = 188U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FVZXNUTHCGGEVPVVJFOSUJSGRIHTOKQIQCDPSUKYZCFXAVLATAZYXYZQXMHKEATWIRAWTYGFDPABBURGRCEEBHYPQVBLPWTSFWEMNFCHPPIIUYOBZUMX");
    tmp_msg_0.lat = 0.761206736506;
    tmp_msg_0.lon = 0.615619009704;
    tmp_msg_0.z = 0.125165315084;
    tmp_msg_0.z_units = 32U;
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
    msg.setTimeStamp(0.929506623987);
    msg.setSource(5860U);
    msg.setSourceEntity(41U);
    msg.setDestination(58538U);
    msg.setDestinationEntity(237U);
    msg.op = 202U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OUYHXNFUHERHQZXVIPDQBDVSINNSGAWZYTBGXBVIPKSXCMCEBUEXA");
    tmp_msg_0.lat = 0.689487931251;
    tmp_msg_0.lon = 0.237489328464;
    tmp_msg_0.z = 0.0379225911928;
    tmp_msg_0.z_units = 49U;
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
    msg.setTimeStamp(0.834067564398);
    msg.setSource(5988U);
    msg.setSourceEntity(2U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(242U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.0390494563259);
    msg.setSource(48848U);
    msg.setSourceEntity(49U);
    msg.setDestination(14095U);
    msg.setDestinationEntity(76U);
    msg.value = 0.457025448614;
    msg.type = 53U;

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
    msg.setTimeStamp(0.364945665848);
    msg.setSource(43567U);
    msg.setSourceEntity(59U);
    msg.setDestination(11977U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0762711107106;
    msg.type = 62U;

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
    msg.setTimeStamp(0.273032136093);
    msg.setSource(19052U);
    msg.setSourceEntity(105U);
    msg.setDestination(1808U);
    msg.setDestinationEntity(193U);
    msg.value = 0.252608578209;
    msg.type = 113U;

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
    msg.setTimeStamp(0.33677870313);
    msg.setSource(9291U);
    msg.setSourceEntity(67U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0918189765175;

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
    msg.setTimeStamp(0.602406446055);
    msg.setSource(53871U);
    msg.setSourceEntity(142U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(137U);
    msg.value = 0.21871791499;

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
    msg.setTimeStamp(0.370308811145);
    msg.setSource(17239U);
    msg.setSourceEntity(112U);
    msg.setDestination(15692U);
    msg.setDestinationEntity(85U);
    msg.value = 0.526988559463;

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
    msg.setTimeStamp(0.264307258758);
    msg.setSource(4042U);
    msg.setSourceEntity(46U);
    msg.setDestination(43730U);
    msg.setDestinationEntity(140U);
    msg.timestamp_last_service = 0.508988755389;
    msg.time_next_service = 0.657265804611;
    msg.time_motor_next_service = 0.293436653957;
    msg.time_idle_ground = 0.962021112649;
    msg.time_idle_air = 0.370593309798;
    msg.time_idle_water = 0.830490468093;
    msg.time_idle_underwater = 0.836954345622;
    msg.time_idle_unknown = 0.855748137347;
    msg.time_motor_ground = 0.916298346616;
    msg.time_motor_air = 0.299673615606;
    msg.time_motor_water = 0.235973580872;
    msg.time_motor_underwater = 0.575706318046;
    msg.time_motor_unknown = 0.785362062549;
    msg.rpm_min = -7509;
    msg.rpm_max = -19892;
    msg.depth_max = 0.135232513715;

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
    msg.setTimeStamp(0.961276771737);
    msg.setSource(9410U);
    msg.setSourceEntity(9U);
    msg.setDestination(5277U);
    msg.setDestinationEntity(21U);
    msg.timestamp_last_service = 0.405913061549;
    msg.time_next_service = 0.617542018536;
    msg.time_motor_next_service = 0.677042354831;
    msg.time_idle_ground = 0.247823245744;
    msg.time_idle_air = 0.744236055291;
    msg.time_idle_water = 0.408149328764;
    msg.time_idle_underwater = 0.254593456487;
    msg.time_idle_unknown = 0.519925904933;
    msg.time_motor_ground = 0.681400888297;
    msg.time_motor_air = 0.425552773523;
    msg.time_motor_water = 0.167131445895;
    msg.time_motor_underwater = 0.74099087901;
    msg.time_motor_unknown = 0.216001627983;
    msg.rpm_min = 16174;
    msg.rpm_max = 25041;
    msg.depth_max = 0.27946349095;

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
    msg.setTimeStamp(0.356887800719);
    msg.setSource(26509U);
    msg.setSourceEntity(248U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(23U);
    msg.timestamp_last_service = 0.0978528254947;
    msg.time_next_service = 0.974210710101;
    msg.time_motor_next_service = 0.0628234623327;
    msg.time_idle_ground = 0.236135667736;
    msg.time_idle_air = 0.345084619339;
    msg.time_idle_water = 0.0490800001823;
    msg.time_idle_underwater = 0.647840479703;
    msg.time_idle_unknown = 0.71923129273;
    msg.time_motor_ground = 0.20139777149;
    msg.time_motor_air = 0.901852338014;
    msg.time_motor_water = 0.201749825109;
    msg.time_motor_underwater = 0.777094788599;
    msg.time_motor_unknown = 0.960749971614;
    msg.rpm_min = 16611;
    msg.rpm_max = -12480;
    msg.depth_max = 0.979275976698;

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
    msg.setTimeStamp(0.312284294317);
    msg.setSource(11618U);
    msg.setSourceEntity(252U);
    msg.setDestination(11860U);
    msg.setDestinationEntity(107U);
    msg.severity = 195U;
    msg.text.assign("HKLFGLQQBQTIEIXELJWYEGOBXUX");

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
    msg.setTimeStamp(0.278071240282);
    msg.setSource(36722U);
    msg.setSourceEntity(24U);
    msg.setDestination(46330U);
    msg.setDestinationEntity(76U);
    msg.severity = 171U;
    msg.text.assign("WGMSHIJOZWSURYDQKOVBVGZOJRU");

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
    msg.setTimeStamp(0.0692899430854);
    msg.setSource(50306U);
    msg.setSourceEntity(35U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(152U);
    msg.severity = 253U;
    msg.text.assign("AQXFHMORZAYSTPZMQAPNEGDLPCUVFTCBXXXOVXBRYOQTIEETMINDIHWVWMSCFAQIDDBKMJJPVJWZHOSUZWTVATRFGS");

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
    msg.setTimeStamp(0.947692355307);
    msg.setSource(57307U);
    msg.setSourceEntity(87U);
    msg.setDestination(33592U);
    msg.setDestinationEntity(62U);
    msg.channel = 21;
    msg.value = -1642324214;
    msg.gain = 3U;

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
    msg.setTimeStamp(0.867534859406);
    msg.setSource(44147U);
    msg.setSourceEntity(99U);
    msg.setDestination(20848U);
    msg.setDestinationEntity(22U);
    msg.channel = 58;
    msg.value = -1964030651;
    msg.gain = 231U;

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
    msg.setTimeStamp(0.103442793363);
    msg.setSource(38059U);
    msg.setSourceEntity(198U);
    msg.setDestination(54973U);
    msg.setDestinationEntity(226U);
    msg.channel = 76;
    msg.value = 1217863679;
    msg.gain = 216U;

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

  return test.getReturnValue();
}
