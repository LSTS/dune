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
// IMC XML MD5: f4b4672f3960c6a8dd70e28172f32401                            *
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
    msg.setTimeStamp(0.18887481743824952);
    msg.setSource(50701U);
    msg.setSourceEntity(59U);
    msg.setDestination(586U);
    msg.setDestinationEntity(121U);
    msg.state = 79U;
    msg.flags = 184U;
    msg.description.assign("SVTFEGLGRCJVLCZLQBHXLWIITOTILZJEVNACRMOSKOOBDVKARMQIQLWQJTOYLZGNABBSSAIESDAPDXXXYPQRZSDFFCZZYTLDUGJLATVIJWJVUWKBBVFSGCYUMSOHDECZWCXAQEKTWMIRYNKRPUUQKVGHNXQDTYDRHNSKKNEGWFGPPCMQMHEPWVMPYBPSONHKEYXEUZTUOCUWHT");

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
    msg.setTimeStamp(0.4514918482377849);
    msg.setSource(40588U);
    msg.setSourceEntity(70U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(102U);
    msg.state = 239U;
    msg.flags = 27U;
    msg.description.assign("JOHNEKTWGNRNGJPBCACKRJHDUAOEGI");

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
    msg.setTimeStamp(0.7707814784709089);
    msg.setSource(17568U);
    msg.setSourceEntity(150U);
    msg.setDestination(56329U);
    msg.setDestinationEntity(44U);
    msg.state = 56U;
    msg.flags = 196U;
    msg.description.assign("LCGIYYASLFDQK");

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
    msg.setTimeStamp(0.34029216676133);
    msg.setSource(32808U);
    msg.setSourceEntity(74U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.8194924914691617);
    msg.setSource(37686U);
    msg.setSourceEntity(118U);
    msg.setDestination(30420U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.9313973350428222);
    msg.setSource(24265U);
    msg.setSourceEntity(221U);
    msg.setDestination(35109U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.7103494416596381);
    msg.setSource(17645U);
    msg.setSourceEntity(33U);
    msg.setDestination(33393U);
    msg.setDestinationEntity(98U);
    msg.id = 64U;
    msg.label.assign("KXCCZASRJMCYWMLDOZQOTRBIIKOXIYLVPSOHDJTEAFOISRFOGWHENMIDWVCFTGWRINTLGERVAPJUMFSTENJQYZHVFXUWGBGUCXIUQEUWNAOLLKBWAMFBCQTUCUHHJNKNRFTEZMSIYCVYRYDOKKMBVUUZGWPQXMGOPPVTDELKWAGAKZBAAXBBQZHJMBRFNHQQZMOTLZBLP");
    msg.component.assign("CGQSIPNXJQYLFRVLUPAWLBBULCRDQFGYBGRDQSBQENDQHTEOGMNJMJDYWOW");
    msg.act_time = 47536U;
    msg.deact_time = 64093U;

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
    msg.setTimeStamp(0.018007913277633625);
    msg.setSource(59735U);
    msg.setSourceEntity(98U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(251U);
    msg.id = 13U;
    msg.label.assign("BVQKCDTYHZBYDNIHTHGPRUHEJUJNLXKRTPXYCECEWOAADGNMCMGVYBTSCDGWELXZQLOJLRXIXWEWZLOQTSOAPFMNLRFZSRMORQUDJUIYIWRPOCWJIKACGZANPTEHXMXYERRLZDDJNYEBAXWYZOIINQEAE");
    msg.component.assign("HBILRINAEUQACXWDUYLVMTJBYHEIKKNEHRNRQSRYCQTZWTXNPQYYIKTKFOWITOBWFZKJQTUKZVPGJFPSYHDNKLXZRGDBEGRBDXEXJNAQSUUYOWFTAGCMXRCFSJMGTVXDMVDMOONXPVMCHZPGZKUMPBQYGRBERAIKPZOPDELFZVETOCVWGHDYEVUJSNWFPEODAPHRQHVBLJLNOLMQQXCCBFWDSIHMJUJGAJKXBUTVCMAI");
    msg.act_time = 8220U;
    msg.deact_time = 59585U;

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
    msg.setTimeStamp(0.752897764187931);
    msg.setSource(9636U);
    msg.setSourceEntity(22U);
    msg.setDestination(54991U);
    msg.setDestinationEntity(148U);
    msg.id = 21U;
    msg.label.assign("EAMZKKLFWQUQCYHATJCIWMRRGZKSYBVJLMIMDMOUGGVIUEEWYUJXABZIRDBTGTMECPMOXSAHTBDSSSYCJXBULWPHNUNOEWSOTPQFHXEGSNGHOZIZTZCAVPOJJFZWCROKFSIFBWXPQPERYAZYLEFLXVYUELOVKCVSJGODCYTDQKSRMKND");
    msg.component.assign("XSUAICHRNJNWEKLVZBOKEWNLPJDTQTJDYVXBYVWOIXLIMNVZTZSQKMCTIFUEDASXFOHPJRXCSIXDTXAGKDYEPWLCHSYUOCAHOPPBZNRQJUGCKOSGSLOAITNJDHDMFMLBZQNWIMDOYGMKPWCZYMLGZQYZLOJBTMUCWMJHEEPGLIFIQQHBLYIPDDHXHUPBFEUAFHRRTWOKJGPXJBUWEQYKFBVZUSRMVTYNBA");
    msg.act_time = 46814U;
    msg.deact_time = 33376U;

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
    msg.setTimeStamp(0.1303307151012857);
    msg.setSource(47880U);
    msg.setSourceEntity(54U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(227U);
    msg.id = 16U;

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
    msg.setTimeStamp(0.052908198431779074);
    msg.setSource(27449U);
    msg.setSourceEntity(77U);
    msg.setDestination(38684U);
    msg.setDestinationEntity(247U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.5359545534065379);
    msg.setSource(17926U);
    msg.setSourceEntity(142U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(60U);
    msg.id = 126U;

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
    msg.setTimeStamp(0.5366681842681857);
    msg.setSource(6922U);
    msg.setSourceEntity(15U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(208U);
    msg.op = 247U;
    msg.list.assign("IJUZAPXAKHAWPNBNILDNBAVEIROKTRQBIVKXDLGIOGYVQEBCLTRXIDFFBXUEPYJRMEQZSYPLRRTHETRALWBYAMBDDJYOLVFHQBIKVYMXFZSUSFEMSYZBUZHOGCKPVXRCPDFSUJDGZKUAHZSMTWDOCUPQOKWTKOOAFFGYXXXLUDNNDHMAWMJWMFVNSTJQJVKCYLZWFCPMTNGJUCRRH");

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
    msg.setTimeStamp(0.1087754405506075);
    msg.setSource(11187U);
    msg.setSourceEntity(144U);
    msg.setDestination(15222U);
    msg.setDestinationEntity(176U);
    msg.op = 85U;
    msg.list.assign("IPRNTZXZHUJ");

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
    msg.setTimeStamp(0.11043717122298591);
    msg.setSource(18520U);
    msg.setSourceEntity(176U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(207U);
    msg.op = 237U;
    msg.list.assign("MMIGJDRPKRYWYUXLETLZNZQJEXLVHUKNRJKESHYPAHPOGOUWVGOYREMDBPQFKGOJTABBFCJXSAIBZHQMUVGPWZXOGTGPYNCXULBDWIRPQINDRAIIGTOWOKKFCMYFUVVULTDBCKELLWKJZBVJTALMAQMQOUCCUWTNIMNEXKQMYZOVRJVIROCAASDQGRBMTPYAFIFBSDEZENZJDJXZEWXSSKFHDXYEHT");

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
    msg.setTimeStamp(0.2639272572652529);
    msg.setSource(43390U);
    msg.setSourceEntity(81U);
    msg.setDestination(12936U);
    msg.setDestinationEntity(180U);
    msg.value = 25U;

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
    msg.setTimeStamp(0.5884287799154978);
    msg.setSource(19008U);
    msg.setSourceEntity(179U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(149U);
    msg.value = 90U;

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
    msg.setTimeStamp(0.8647384279228933);
    msg.setSource(43087U);
    msg.setSourceEntity(236U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(4U);
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
    msg.setTimeStamp(0.11207280437405209);
    msg.setSource(60962U);
    msg.setSourceEntity(91U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("OKFNIKWUARBAUSEWEGDYYSAQZBVBZWKUDXODHQAZFTFZZWGDGJJUGYQDPZTVBOPXCJEIJVOLBASPQYYFSVKEUXYYEEXLULPQDLWFMGXTNMCTTQIOZSQSYTVMWWUNAKRLHOVKLGCAVKHNOGBFRSJSJIJXZPAURBJIRRTNWIRBAEMCCVIIHPKRMCOVCFFQNSJMWMTMAXRBCZFRHNLYXBDCK");
    msg.message_id = 18759U;

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
    msg.setTimeStamp(0.016248127747191754);
    msg.setSource(5974U);
    msg.setSourceEntity(49U);
    msg.setDestination(34481U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("OIMJGVIMVTHVUJONLPHMDJZABDGKZIOJZTRNQSVRYSOCRKCAOSIYNOSHYTXWISUYHFEDBJFBIZNEQNMJMBQW");
    msg.message_id = 35798U;

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
    msg.setTimeStamp(0.1860842311218337);
    msg.setSource(38875U);
    msg.setSourceEntity(213U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(61U);
    msg.consumer.assign("WFHEUVQCSNVLBLBXFRRCSZFPXDAHYQ");
    msg.message_id = 9068U;

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
    msg.setTimeStamp(0.906675488816638);
    msg.setSource(39851U);
    msg.setSourceEntity(244U);
    msg.setDestination(11960U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.21555154304726765);
    msg.setSource(64059U);
    msg.setSourceEntity(169U);
    msg.setDestination(25918U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.20290425602102624);
    msg.setSource(28058U);
    msg.setSourceEntity(122U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.40091549508345437);
    msg.setSource(18712U);
    msg.setSourceEntity(77U);
    msg.setDestination(4992U);
    msg.setDestinationEntity(90U);
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
    msg.setTimeStamp(0.6544332412479982);
    msg.setSource(23661U);
    msg.setSourceEntity(194U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(114U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.7142783094430052);
    msg.setSource(56477U);
    msg.setSourceEntity(61U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(248U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.2848909520351015);
    msg.setSource(19969U);
    msg.setSourceEntity(70U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(248U);
    msg.total_steps = 1U;
    msg.step_number = 222U;
    msg.step.assign("AIYHLAWCINRWAWXXMDFMTRUCCDBVURSGTVZVSETHPZNGAFOZXMPCMXDOXWPTKYPNLCTSOQUXIDQZEILPSKAHDIHRHPSUJUZRTEMWVPUKQYNBOSOAQXWRMVNSBZJXVYBOGRVCT");
    msg.flags = 56U;

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
    msg.setTimeStamp(0.7568041067047512);
    msg.setSource(16020U);
    msg.setSourceEntity(190U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 235U;
    msg.step_number = 152U;
    msg.step.assign("HRLHMVVAUTUXOJSASUHQQPMNZHIWXDEGDYQEZYUZLVGTORKSEDOVMXVPUFWWUJEBBPMUYZWCTOBIPCAIV");
    msg.flags = 62U;

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
    msg.setTimeStamp(0.6539128528345102);
    msg.setSource(44902U);
    msg.setSourceEntity(70U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 218U;
    msg.step_number = 126U;
    msg.step.assign("BRAHJRGQEBDYNCDHGZOZIINOZGKJMYDGVFWNXIQLBKGOHHKZTDIGXWCJIMLCLICQAUCFLZSR");
    msg.flags = 41U;

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
    msg.setTimeStamp(0.8028352841224967);
    msg.setSource(49343U);
    msg.setSourceEntity(98U);
    msg.setDestination(26602U);
    msg.setDestinationEntity(67U);
    msg.state = 214U;
    msg.error.assign("DFYECCPQSFIKVZHLZVZRAAYEEPMBJKRAAVUESNDMTDSDOXSVUMZYRBHNFVPMXXUKVFKPGEGFNGHAHHWMXWRLYDIQQVTEYWFEXSTZIIUGRMIYJWJOFLTWFIPRDQOJJNVUXCYTCBMONOQNFSGDNQBQOHGEWSNYRANOXJGIURKKGEBUKJKHUJPTPYIYEOBVLLASOCMPQCXLSRBMWILCIXAKHHQACBWCTQMWROLHPZBUGXGZZZDD");

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
    msg.setTimeStamp(0.6366077719702503);
    msg.setSource(38865U);
    msg.setSourceEntity(251U);
    msg.setDestination(51077U);
    msg.setDestinationEntity(251U);
    msg.state = 9U;
    msg.error.assign("EIHBELLZNKVFQAUPYHVHLIPBJKJZSFCPZKFOELQXQMILNATOUVPWXBCJSLQYOCSTEWXFGIUICKHSZMXIPNDTCFNTHAOFGPSPWYMCVUSXRUIOLTRJJBZKXBVHJFPMRDVKBAXLYDQINUPONBGPGRNYQQLJZQQIREYYZOHNACDGXRDFVRSVJAWBMRKQSEWTXMAOWSYADGDJRE");

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
    msg.setTimeStamp(0.25958490284696356);
    msg.setSource(51344U);
    msg.setSourceEntity(65U);
    msg.setDestination(64476U);
    msg.setDestinationEntity(112U);
    msg.state = 221U;
    msg.error.assign("JQGJTFLQKSIYTQFLLFMPBEJTYBUVIXGTMHRENXYMCPRYBSYZVOGRIVUEWJNSCVCENQIZISWAURKRTBQXRFHCHCASPWAMIGGQNMTMMLYOWTSOANOCV");

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
    msg.setTimeStamp(0.31462934935762477);
    msg.setSource(53218U);
    msg.setSourceEntity(32U);
    msg.setDestination(244U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8633485586802135);
    msg.setSource(9016U);
    msg.setSourceEntity(246U);
    msg.setDestination(5314U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.8376461898016382);
    msg.setSource(64416U);
    msg.setSourceEntity(147U);
    msg.setDestination(54102U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.4182083015968414);
    msg.setSource(30889U);
    msg.setSourceEntity(47U);
    msg.setDestination(54557U);
    msg.setDestinationEntity(95U);
    msg.op = 8U;
    msg.speed_min = 0.7996243881030962;
    msg.speed_max = 0.3777886695274394;
    msg.long_accel = 0.9170304453440452;
    msg.alt_max_msl = 0.7860685786360915;
    msg.dive_fraction_max = 0.373337537489973;
    msg.climb_fraction_max = 0.3774303395448908;
    msg.bank_max = 0.1604555376312542;
    msg.p_max = 0.6301841762993964;
    msg.pitch_min = 0.4339585305325644;
    msg.pitch_max = 0.6380263782971105;
    msg.q_max = 0.411772098607329;
    msg.g_min = 0.44669941325660056;
    msg.g_max = 0.3856245844217805;
    msg.g_lat_max = 0.558414875157044;
    msg.rpm_min = 0.18924318972421905;
    msg.rpm_max = 0.6678422961418827;
    msg.rpm_rate_max = 0.9157112179823584;

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
    msg.setTimeStamp(0.6414011733766358);
    msg.setSource(53040U);
    msg.setSourceEntity(253U);
    msg.setDestination(13091U);
    msg.setDestinationEntity(249U);
    msg.op = 125U;
    msg.speed_min = 0.0785618823337575;
    msg.speed_max = 0.8608690321754842;
    msg.long_accel = 0.45429299277382473;
    msg.alt_max_msl = 0.4616150944896714;
    msg.dive_fraction_max = 0.8686545829591186;
    msg.climb_fraction_max = 0.011342233515284739;
    msg.bank_max = 0.6241639803863391;
    msg.p_max = 0.9784215896586411;
    msg.pitch_min = 0.7842708503999093;
    msg.pitch_max = 0.32899912853836133;
    msg.q_max = 0.34453965800123976;
    msg.g_min = 0.5144170815831788;
    msg.g_max = 0.9440815436953253;
    msg.g_lat_max = 0.18367371956446843;
    msg.rpm_min = 0.6933204709111059;
    msg.rpm_max = 0.28751725549089335;
    msg.rpm_rate_max = 0.22252134814941293;

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
    msg.setTimeStamp(0.36208719027350933);
    msg.setSource(50751U);
    msg.setSourceEntity(63U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(68U);
    msg.op = 142U;
    msg.speed_min = 0.30435233907410497;
    msg.speed_max = 0.867236380480269;
    msg.long_accel = 0.5150829247085074;
    msg.alt_max_msl = 0.6637372849048754;
    msg.dive_fraction_max = 0.24180916582652978;
    msg.climb_fraction_max = 0.3695682738553143;
    msg.bank_max = 0.5636410417898013;
    msg.p_max = 0.48114334636433476;
    msg.pitch_min = 0.659442543454334;
    msg.pitch_max = 0.7458941138286104;
    msg.q_max = 0.4280250646311071;
    msg.g_min = 0.4262671549624676;
    msg.g_max = 0.24726166706624075;
    msg.g_lat_max = 0.28243030238646394;
    msg.rpm_min = 0.7863520616180633;
    msg.rpm_max = 0.45980508815035115;
    msg.rpm_rate_max = 0.8257358396755704;

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
    msg.setTimeStamp(0.8809103086549481);
    msg.setSource(65359U);
    msg.setSourceEntity(246U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(10U);
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.05038406194803435);
    msg.setSource(61676U);
    msg.setSourceEntity(245U);
    msg.setDestination(48298U);
    msg.setDestinationEntity(62U);
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 4112736154U;
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
    msg.setTimeStamp(0.32713820730643706);
    msg.setSource(26852U);
    msg.setSourceEntity(101U);
    msg.setDestination(57061U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.3102785285819093);
    msg.setSource(56301U);
    msg.setSourceEntity(34U);
    msg.setDestination(3532U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.5120333452619259;
    msg.lon = 0.1834527313568951;
    msg.height = 0.4982171846522371;
    msg.x = 0.2407403564703825;
    msg.y = 0.09420499911389857;
    msg.z = 0.9631733375005902;
    msg.phi = 0.6067613081600401;
    msg.theta = 0.23044319942616065;
    msg.psi = 0.6632557014366425;
    msg.u = 0.8885246276524685;
    msg.v = 0.07527618798602742;
    msg.w = 0.661956254385929;
    msg.p = 0.8728915923478981;
    msg.q = 0.678757874625113;
    msg.r = 0.2742456944956241;
    msg.svx = 0.42887382132946195;
    msg.svy = 0.3703062160233206;
    msg.svz = 0.4146273952955476;

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
    msg.setTimeStamp(0.8265620021031339);
    msg.setSource(61521U);
    msg.setSourceEntity(60U);
    msg.setDestination(58605U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5003424975291795;
    msg.lon = 0.9960078421939161;
    msg.height = 0.2328178990886559;
    msg.x = 0.20277491402752446;
    msg.y = 0.2022976621386524;
    msg.z = 0.5326961650508812;
    msg.phi = 0.9978613245144765;
    msg.theta = 0.08977160253304062;
    msg.psi = 0.6846407870581858;
    msg.u = 0.7940883065911283;
    msg.v = 0.7895824505763652;
    msg.w = 0.7175178161091148;
    msg.p = 0.08585888512729356;
    msg.q = 0.9447608343089596;
    msg.r = 0.6747331417233423;
    msg.svx = 0.6095248744394142;
    msg.svy = 0.172066142878463;
    msg.svz = 0.13245067846369796;

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
    msg.setTimeStamp(0.0034672858122517525);
    msg.setSource(54645U);
    msg.setSourceEntity(143U);
    msg.setDestination(22037U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.024172829861081713;
    msg.lon = 0.0265967672944617;
    msg.height = 0.8443177756358012;
    msg.x = 0.571205441077334;
    msg.y = 0.528330800448209;
    msg.z = 0.8300045286301044;
    msg.phi = 0.9741535139009889;
    msg.theta = 0.34574101516233746;
    msg.psi = 0.38988972076089423;
    msg.u = 0.46607151040798245;
    msg.v = 0.6324079431727789;
    msg.w = 0.7508876621683351;
    msg.p = 0.8660553059886608;
    msg.q = 0.20854109257873354;
    msg.r = 0.3426866801034577;
    msg.svx = 0.26866253131974593;
    msg.svy = 0.7071250573376436;
    msg.svz = 0.27874157162556845;

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
    msg.setTimeStamp(0.8780397925229734);
    msg.setSource(6818U);
    msg.setSourceEntity(31U);
    msg.setDestination(38180U);
    msg.setDestinationEntity(148U);
    msg.op = 173U;
    msg.entities.assign("UWIELHIBEZLLRODVEYMHZQGBPUYJKQTAVEQPAGMIGWAQUMFGPHVRNXKFGGOHCUPTRDICYLZRQNWYXJKWMYCZODZNQGXICVCSHZSGSMRMPARNJLKCEPZYPXEQFOTVFAOZRTLOQDUYAXWQFXDJNAKAFEAYKNFSGJURCFRFOSUBIYMLSKWQLNZTIDPBOISMXFVJUCDADJSMDHVBVNSNJPTEXHTGIKXNEBHUEYK");

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
    msg.setTimeStamp(0.4236419074061154);
    msg.setSource(4792U);
    msg.setSourceEntity(208U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(144U);
    msg.op = 215U;
    msg.entities.assign("AGLYPEKNMBHVPNKUHUCYAKUKHPWROIDJBSNMYRZNRUTFQOWSRMIVBNPIURQTRFPNBHOOSGOQVODEJAYRAQXY");

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
    msg.setTimeStamp(0.38671535012172054);
    msg.setSource(51116U);
    msg.setSourceEntity(0U);
    msg.setDestination(21928U);
    msg.setDestinationEntity(76U);
    msg.op = 135U;
    msg.entities.assign("OAWDLPOWZFXDMKFZJLRPNULQEOYGGWBTMAQHCPJTRZAOTVOIXQVFLOSEYLPRHGFFBIWVZBREMURNPOCHORRNJVQXXZWICDJMHRWFKSBMAAIGGKCTDIBKJNDNQF");

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
    msg.setTimeStamp(0.030966944505082528);
    msg.setSource(61913U);
    msg.setSourceEntity(229U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(54U);
    msg.type = 77U;
    msg.speed = 12233U;
    const char tmp_msg_0[] = {-66, 23, -6, -50, -7, 67, 70, -75, 74, 17, 28, -32, 105, -125, 115, -127, 38, -7, 108, -125, -75, -89, -53, 46, 66, 34, -95, -103, -60, 113, 37, -80, -121, 111, 76, -38, -118, 21, -56, 58, -87, 0, -30, 70, 30, -21, -76, -69, -68, 97, -59, -96, -15, -96, 118, -104, 90, -109, -90, 2, 83, -126, 56, -113, 73, -113, -71, 109, 74, -79, 117, -66, -78, 56, -74, -116, 81, 33, 102, -49, 107, 3, -118, -60, 91, 113, 110, -89, -3, -5, -103, 11, -117, -104, -41, 58, 78, 69, 67, 103, -112, -13, 113, -12, 1, 12, -57, 38, -4, 8, -102, -11, -85, 78, -109, 106, -118, 119, -63, -30, 37, -33, 0, -90, -90, 58, -77, -116, 60, -24, 19, 95, 23, -15};
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
    msg.setTimeStamp(0.9668283381938433);
    msg.setSource(46726U);
    msg.setSourceEntity(168U);
    msg.setDestination(50837U);
    msg.setDestinationEntity(23U);
    msg.type = 71U;
    msg.speed = 20947U;
    const char tmp_msg_0[] = {-43, -87, -14, 94, 45, 117, -84, -104, 71, -94, 26, -55, 82, 12, -86, -92, 6, 123, -60, 18, 125, -110, 81, -20, -56, -4, -49, 31, -125, -118, 93, 26, 37, 67, 63, -103, 38, -47, 120, 69, 118, 117, 0, 0, 110, 109, 50, 110, 93, 16, 108, 62, 75, -62, -66, -3, -7, -12, 54, 101, -35, -39, -3, -15, 74, 20, -54, -77, 119, -42, 106, 42, 2, 1, -36, -7, -21, 16, -21, -77, -76, -5, -19, -57, -92, 103, 84, 107, -101, 123, -5, -13, -25, -119, -33, 59, -15, -42, 9, 115, 47, -87, -111, 70, -57, -106, 61, -80, 116, 23, -69, 125, 117, 124, 32, -115, 58, 38, -50, 58, 80, -84, 45, 27, 90, -116, -72, -71, -105, -103, 4, -59, -87, -70, 2, -117, 102, 41, -70, 76, -5, -122, -115, 93, -83, 33, 44, -14, 99, -79, 45, -84, -7, 41, -120, 98, -117, 71, -74, 78, 118, 92, 17, -105, -92, 64, -24};
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
    msg.setTimeStamp(0.5313015070848722);
    msg.setSource(62391U);
    msg.setSourceEntity(38U);
    msg.setDestination(61922U);
    msg.setDestinationEntity(63U);
    msg.type = 102U;
    msg.speed = 35512U;
    const char tmp_msg_0[] = {35, -23, -88, 113, -9, -24, 47, 29, -21, -98, -114, 54, 46, -35, -127, -121, -95, -81, 75, -62, -39, -94, 124, -21, -86, -71, -23, -34, 32, 3, 4, -87, -38, -6, 10, 90, -51, 99, 27, -33, -6, 57, 86, 76, 46, 50, -54, 101, -49, 4, 119, 16, -128, 18, 33, 68, 44, -9, 102, 47, -60, 76, -85, 17, -34, 38, -106, 36, 34, -11, 85, 103, -127, -77, 71, -109, 33, -14, 34, 32, -104, 20, -14, 79, 61, 43, 93, 99, -105, 27, -23, 8, 57, -36, 55, 30, -48, -46, 104, 116, -102, 106, -46, 12, 85, 5, 6, 64, -34, 96, -26, 62, 51, -59, -59, 1, -72, -51, -89, -58, 64, -60, 0, -115, -48, -63, 81, -127, -123, -21, 24, 24, -118, -90, -87, -67, -106, 10, -86, 27, -103, 19, -77, 10, 113, -5, 19, -84, -46, -46, -49, -100, 24, 119, 123, -30, 28, 16, -1, -14, 19, 107, -50, 44, 56, -103, 34, -8, -118, -35, 19, 11, -46, 1, 61, -54, 82, -30, -109, -26, 89, -83, -34, -27, 68, 18, 18, -29, -124, -52, 44, -94, -50, -35, -108, 44, -82, -47, 51, -42, -60, 60, 67, 111, -96, 61, -26, 116, 49, -44, 105, 45, 18, 78, 81, -116, -2, -87, -40, -80, -98, -69, -126, 90, -116, 48, -65, -105, 24, 63, -96, 79, -125, -77, -31, -87, -83, 69, -22, -61};
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
    msg.setTimeStamp(0.3034557673421252);
    msg.setSource(45575U);
    msg.setSourceEntity(10U);
    msg.setDestination(64262U);
    msg.setDestinationEntity(118U);
    msg.op = 31U;
    msg.tas2acc_pgain = 0.225460589383781;
    msg.bank2p_pgain = 0.45336532074401303;

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
    msg.setTimeStamp(0.34792027968752715);
    msg.setSource(4595U);
    msg.setSourceEntity(87U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(83U);
    msg.op = 41U;
    msg.tas2acc_pgain = 0.2891048928649049;
    msg.bank2p_pgain = 0.018377903550215624;

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
    msg.setTimeStamp(0.37858554661841104);
    msg.setSource(17043U);
    msg.setSourceEntity(200U);
    msg.setDestination(15644U);
    msg.setDestinationEntity(132U);
    msg.op = 213U;
    msg.tas2acc_pgain = 0.5090379672057527;
    msg.bank2p_pgain = 0.5116470321897815;

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
    msg.setTimeStamp(0.7845837817723359);
    msg.setSource(7721U);
    msg.setSourceEntity(128U);
    msg.setDestination(62233U);
    msg.setDestinationEntity(195U);
    msg.available = 3952308120U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.016714066065052213);
    msg.setSource(29279U);
    msg.setSourceEntity(144U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(241U);
    msg.available = 2652907963U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.44763726104773804);
    msg.setSource(14946U);
    msg.setSourceEntity(0U);
    msg.setDestination(55885U);
    msg.setDestinationEntity(79U);
    msg.available = 2212327081U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.37787372002651576);
    msg.setSource(31990U);
    msg.setSourceEntity(159U);
    msg.setDestination(25879U);
    msg.setDestinationEntity(123U);
    msg.op = 6U;
    msg.snapshot.assign("LRGRLMYCBIWKPXPESCXYFGFTUPLYLEKVYAZOUSAMNAIKTOTGJBWMSGTXFIQCJMGJKBYJDNVOUFXIZAXHTCUDKLHACJOKPI");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 232U;
    tmp_msg_0.plan_id.assign("ICUZJONJGWGSZEBVNXOCNTTSCGSCDJWZYHPYMRSTMTWXGZCUPNXQOHRFVOYZBGAJBVYCKFLMXKQKRKPNVLXXOGHQYETTONFCMRSFALDYAHSAALPJZKRWYUTIFFLLCWDASESPKUDQENGGH");
    tmp_msg_0.plan_eta = 1534184055;
    tmp_msg_0.plan_progress = 0.240804526978311;
    tmp_msg_0.man_id.assign("CZXJOYXDSQEVTAMVRUHGURMGLUZXCWDJGLDSHJNJVMHBCXAHXMHNEXKCLMLKVFENTNKOKZDAOXKMPZZVSGIEPWMTGSWUUHFFQMTGMOIJRIDZLKAQRXPXRNTFBIIPDAWIGWSVTEYBCQZFPVCLLLRGQKRCMDXKERHAOSDHPTQFCSYKWNTWABIJVAUYBEPBDPAUBNIVEWWYHOKOZGQFLQVPEIYUUBDBPHYUZYBRFCZINTJQJ");
    tmp_msg_0.man_type = 11912U;
    tmp_msg_0.man_eta = 665449491;
    tmp_msg_0.last_outcome = 7U;
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
    msg.setTimeStamp(0.8701074870998988);
    msg.setSource(56276U);
    msg.setSourceEntity(207U);
    msg.setDestination(61738U);
    msg.setDestinationEntity(230U);
    msg.op = 215U;
    msg.snapshot.assign("DXDCCEZIOXVKYDRASBTUWECLZBTIPTPHIVUAKLKMRJMJKWTFX");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 23415U;
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
    msg.setTimeStamp(0.44923827519293447);
    msg.setSource(1477U);
    msg.setSourceEntity(12U);
    msg.setDestination(33398U);
    msg.setDestinationEntity(131U);
    msg.op = 20U;
    msg.snapshot.assign("TCAXIJHGLYTUGFVGOVRRAJRCEMZNLJYEHFXOYMZVIBRPKAHKMWLUJCPJINFUFOBWTMSKRXDFRPTJVHZJMIKBWLSXMCPEGCYPSLVDWHPOEFFASTKRWWBLCNCCJPZXNGDTHUSUQWZZNRGKZYOUUJBNNUEKCVGHHECYDELHVQDYFQIXALKQSZMDZEQRYFXLXYO");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 349851499U;
    tmp_msg_0.id.assign("KGCVTFRFDXYDDKIUAFDJNGAJGLVWALSCEMMHUUFPOHK");
    tmp_msg_0.memento.assign("RBRHCGCFUTSKIAYKHPNAFDZOAXBXYISHAMLPVBLGYZXZUXOWLESZRXWKAKLKHMDCZJMFHOYWVYENUHKOENVQIAFPGVMBNQAUEMURDWCLYUXDOJPWGLVUSDYTTIDFKACARLBOWWYEGQOFJTNSMWUGHMJFJVB");
    tmp_msg_0.timeout = 28710U;
    tmp_msg_0.lat = 0.957160574653221;
    tmp_msg_0.lon = 0.8992519901506654;
    tmp_msg_0.z = 0.03437903729573788;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.pitch = 0.8384879054452148;
    tmp_msg_0.amplitude = 0.5316204052106056;
    tmp_msg_0.duration = 38332U;
    tmp_msg_0.speed = 0.05467839887371373;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.radius = 0.5607955311564226;
    tmp_msg_0.direction = 101U;
    tmp_msg_0.custom.assign("QAMVDEFQXMAFJISKECGJHIVMBSZLGTLUOINACXFLOGYTOEGRJCLUDJINXRUXYWTHQNFBUWSXGPNZLKAGFVSICNWGFGEYNAHPUMQTUYDTOYJZKBAQMVNPPKRIHSCSTHLTZUPFPWKVCTWQOXHEYSDIAFZCMZBHMWMLORDSRHMFZJDKWMYZGEB");
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
    msg.setTimeStamp(0.21406635957776043);
    msg.setSource(14967U);
    msg.setSourceEntity(246U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(250U);
    msg.op = 95U;
    msg.name.assign("HJWSOPSSJSJSXYUVGNHMJOECQVBUTMCDNVNEKAXEJJZXEXNVSGTDTZEAFYMOBMIHDFAEQCUZYFUNYURKQDHKWKHKEQRVYAXKRRKHBIYHJJIWNFPULLNZGWORWVMGFXQRIWITGAAGFZDGRABIOQZNRXGUPHFP");

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
    msg.setTimeStamp(0.2470101393767512);
    msg.setSource(26675U);
    msg.setSourceEntity(79U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(5U);
    msg.op = 222U;
    msg.name.assign("ARXTAUCSTLOEPBHBSGZSIYVHPBNRGWIQVXFLDUXVSXDJXMYUTOKGYNKWZVBPSVPJOPUPTJFJQMMMFVLOHPAHFVKDRMMIAWFDLOLGZWFJMZNRANGIELZEZUVXDZHCKNVCKNRWHRQQUSCOQLBJWWCYHFVWFJAWIRIDDFNZDNQCMKZJDSIFKA");

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
    msg.setTimeStamp(0.0430634918208368);
    msg.setSource(6330U);
    msg.setSourceEntity(20U);
    msg.setDestination(47470U);
    msg.setDestinationEntity(143U);
    msg.op = 186U;
    msg.name.assign("RDZGIOZTPENYZMJWJUCQVSLGZAVQCPWOAWRISGOJXDBYGINQUJWHLDRAKWKCNOIGTMIHJYHFDJVXYFMUXQCTGYELMVPZAVLRXHETEJFYKNUFIMNRPOTABMNHEAUCWPNOKQBGCJWFFCGXOFKEPQKEQGROAQLHIXC");

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
    msg.setTimeStamp(0.8730325172505713);
    msg.setSource(36314U);
    msg.setSourceEntity(184U);
    msg.setDestination(35834U);
    msg.setDestinationEntity(247U);
    msg.type = 73U;
    msg.htime = 0.902295946540971;
    msg.context.assign("YVYAALVDFWZMMSMANJKWZEQFWZOCKQUCEIYZHDQDRTRGZXAIHOSRRQONPOJBIHERVTDBOSZDNIPXKFUDVGNSDOCYFZMTTQUINUHUIJRJPQLAKXKLOCLSOYGRBFTAPEUWGXETANBNVSHHIJKILI");
    msg.text.assign("RRVDIYWLMQDHMWWAXFRGTZNGMOFPXVBFCGBCMSNAYJJHTZQCGEBWMTVKSKEENSEXOJHKOSAUODBPBOFBFYQKPNZGLNNMITIULPTUPQUPDEHDWFFTQMLWPNXYHZ");

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
    msg.setTimeStamp(0.4637522357682228);
    msg.setSource(52528U);
    msg.setSourceEntity(13U);
    msg.setDestination(63225U);
    msg.setDestinationEntity(185U);
    msg.type = 88U;
    msg.htime = 0.6406101519987176;
    msg.context.assign("FCMNXCXLBTNCHKJPGBIMGIZRPUTWTXUFFYRCKSQSOHPBGTGVLLDHHKBHJIYCUEOIXQWBCXLSPAMWDNMVWVJYEMAEZETYQXGTKTVDCWAOKRSGDQZOVVCWRXOODDSHSUZUANEHQQNVFQDUPWQCINHIARJFARHYGNVMMNLECDKAAAFBMONRTWEGPZ");
    msg.text.assign("NYFAFEMBJZKIBUQBYOXCRTDMDDCWTWUHYGCKOVYVWZRFOWGVLPGJRBSLGWUZTTVIUPUZH");

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
    msg.setTimeStamp(0.38354905402889405);
    msg.setSource(43624U);
    msg.setSourceEntity(207U);
    msg.setDestination(11619U);
    msg.setDestinationEntity(9U);
    msg.type = 127U;
    msg.htime = 0.3594581706105672;
    msg.context.assign("RMKONENNUAXBBSYKUVMGISSXWRMNVLIQFTKOBQQGLKOLWCAHEYMKBYZRAHBVHEYDKRBWDQXZRWIVJRFJGDMFDNCPMBDUYYNTIPYXQVJXSEEIEVIUWHSGBNXGNKWLJUPOZQDJAFTJDPZJTUZDBCDZOZKTFRMVIFWWGTCLCEOFGAXGPUNVOQRPILGTQLPLAHFACTPPIFXJSIOEHU");
    msg.text.assign("JODNBJXIVCYDMYXPLIVUJNLMWQKBEFQBTOPQQUTVSAVRFZKZBWISVOSJFARHDDCFOQTRSRJKRFCTMKLTQEYFHWMCPESEPJHGEXIYZWLGVCDGLJFCYIWYCLPKKTJVPXAPMABTTOOCIGUUNYGEQSPKAGBUHMVYLFLABJDZRNAXGWEZMHNIQQNVZTOUWGRDWXHWDBX");

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
    msg.setTimeStamp(0.6095963579492116);
    msg.setSource(18089U);
    msg.setSourceEntity(254U);
    msg.setDestination(34041U);
    msg.setDestinationEntity(252U);
    msg.command = 222U;
    msg.htime = 0.5809505115294142;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.htime = 0.9953609578661042;
    tmp_msg_0.context.assign("UXUEUEJRTEOWMIEWJKBAWULFGMHRSLTEWPZIJUFEIBWKYROD");
    tmp_msg_0.text.assign("BXASVSLTMDTOQGYVWUFQCEOYDZLKTCXWPNUSEZNLAOVNNEMLUKGGKASCXGJUCTEQJNONPYKZFQMSLHJASCWDJPXDGMIJUUDZIYWXQLWBUZVCOXYXEMAFHWPBKMNVYMRBVMHFPRRDRDTHTIZBQPJFFHHHZEJVDJGWKPVVIYYLPGBK");
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
    msg.setTimeStamp(0.4210576226973758);
    msg.setSource(21554U);
    msg.setSourceEntity(192U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(194U);
    msg.command = 136U;
    msg.htime = 0.45204776371366917;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 149U;
    tmp_msg_0.htime = 0.8448323629666715;
    tmp_msg_0.context.assign("EAMYAEBSJXLDYCBREPOBCSQONVXJKCMZSNTQLTHNTWMPYINQDGQQPDWUMMMVRRXE");
    tmp_msg_0.text.assign("REXZLPIILTQDANKQJFOOSVKYVWMFEVUBDMCUGCISZBQDFXPPRUGSGXIQRPCSBTWURAZALXIANBQYPTJBSZPLBSULFRKRQHVQDXKDXALMZCPJLJKZXHJWHMXSGMREBBOYTGNWTLDAGOOGOKFDAORQQNCSTNTPL");
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
    msg.setTimeStamp(0.6211726913665349);
    msg.setSource(26492U);
    msg.setSourceEntity(194U);
    msg.setDestination(22162U);
    msg.setDestinationEntity(203U);
    msg.command = 123U;
    msg.htime = 0.9688183655153181;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 91U;
    tmp_msg_0.htime = 0.7971147250028175;
    tmp_msg_0.context.assign("BNHFDKZADSFRAUSKZUJEHDUARRMIWMKQZIXLAAMVBARZQVSCAKWHXTLEIIOXPAHRQSXBFOLYJUMLWVOPMBNBCYYFUGTKYNZSVNVJXXOCNYMAWCBJGGFYMTEJGQESLPCOZWOWCDYNWFHKYPEUBNJTEPGREDUTGVCUYHFQTVDSKGKGFQLSGHYJVURTTLILCKBSZZBZVQPAXRLWMMUJ");
    tmp_msg_0.text.assign("ZHFGJXQTJNWNQ");
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
    msg.setTimeStamp(0.22424339969654716);
    msg.setSource(33249U);
    msg.setSourceEntity(159U);
    msg.setDestination(49477U);
    msg.setDestinationEntity(209U);
    msg.op = 29U;
    msg.file.assign("KCJHKXUYADSXPNOFYBCYHPAJHRLAVYBSGCQRMUVOSZURKSQPBLZUROCXNTAFBUEQWNKPUGPHWOMSOLFNEAQUMLDZBHATGXWGOBUQUTJPFSGCVNOJUXJMMGIYTQRQTZMZNCENIAFFXDTHYZLGHGMDDRIIJLINKPGEKNMZXSRZJYJSJJDEOROEPPXEZVFLFMLALVCSWBECBZWVEMPWTXDYAXFKCIAIDOLKQSDVWRGQYYKHIHTECIRVI");

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
    msg.setTimeStamp(0.8490140174524308);
    msg.setSource(41250U);
    msg.setSourceEntity(88U);
    msg.setDestination(4111U);
    msg.setDestinationEntity(172U);
    msg.op = 136U;
    msg.file.assign("WKUVPKUKJDJAULMXVTXMRHVKWLJFTXHOYZIXIGSNLCVQKNRJSEQVBQMETAPMBWJJDGAEDZHLRBCOZNKPYQVDFWBPCHOOOEFOSYHYPEYJHWAOUFWXVIYJNZPTYYXSKLBS");

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
    msg.setTimeStamp(0.4367537423397211);
    msg.setSource(42644U);
    msg.setSourceEntity(242U);
    msg.setDestination(42613U);
    msg.setDestinationEntity(235U);
    msg.op = 251U;
    msg.file.assign("QEDUHRMKVMFHHBWURTOOFQOBOYARKUFGSSQDDYZBIUVDVWBREFIQVKQUAUYQQIMKDYYIOTNKFVTYXALGJNENLYPRBYWMNHHWFKPOTDSIQOWGZHTJYTUWAKXRBHLMJPMFHOFBXIOSPZZLSCIJXMPJMSPZJEDDWSGLNELRGZTDMWPUGCACROXQVCSFCLICQANNDXEPLNETXTLSITJAKVCPVMHEIBUSU");

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
    msg.setTimeStamp(0.06186248353784629);
    msg.setSource(51403U);
    msg.setSourceEntity(233U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(182U);
    msg.op = 71U;
    msg.clock = 0.842605175246733;
    msg.tz = -4;

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
    msg.setTimeStamp(0.27267800093340067);
    msg.setSource(51174U);
    msg.setSourceEntity(74U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(132U);
    msg.op = 164U;
    msg.clock = 0.9626236592641197;
    msg.tz = -23;

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
    msg.setTimeStamp(0.6803912351509217);
    msg.setSource(57016U);
    msg.setSourceEntity(98U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(83U);
    msg.op = 222U;
    msg.clock = 0.5182193939348763;
    msg.tz = 24;

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
    msg.setTimeStamp(0.7896659061760316);
    msg.setSource(47754U);
    msg.setSourceEntity(117U);
    msg.setDestination(278U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.30587509804148494);
    msg.setSource(59656U);
    msg.setSourceEntity(197U);
    msg.setDestination(33370U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.3560943311532647);
    msg.setSource(37063U);
    msg.setSourceEntity(110U);
    msg.setDestination(40165U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.48133419569008096);
    msg.setSource(3064U);
    msg.setSourceEntity(94U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(169U);
    msg.sys_name.assign("JAMOVRZOHFASUBFJQTYXLXVOPCMDUIROKVTBYZHGXGOFWCHMMIQEIBUYZRLDVQNTJKPHSLTWXXPYCIFXUGMRENLJWDSIGNSNHVTKDERKTYZDWBIUOSOPLZGTKLSZQPPSKBEYXBFWJ");
    msg.sys_type = 147U;
    msg.owner = 55273U;
    msg.lat = 0.10329460089047537;
    msg.lon = 0.897011368694629;
    msg.height = 0.4950373020316424;
    msg.services.assign("PDRGJCVGUYCNUJHNNCCBPUBXQFMKZNWJKHYPPQXLPYLSJTNKVAEVADDBVHAVQSGBQLKYESSWOPAOUFTGBEPTZUYZXAWWMAXMBLAHILIPWJIOGIQKDAXKVYIXCJMDLSTRSMEQNMDHMLUBROJGSFRWXKYOYEUTIQQUENGTOGEFMLDCV");

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
    msg.setTimeStamp(0.43504971727445674);
    msg.setSource(12124U);
    msg.setSourceEntity(215U);
    msg.setDestination(58565U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("GWUEMEWIYRDOTQSSAFBRCHSWZFILOUUYPLVTPQGARKZNTVTNNOVZDCBOGUVZEEMKQOYMFKWIIAQTTHKFHTYPAFGCWSGUUIUEBQCETXMITGFECNHZKNJNGWBFVZAJLRSURJDJYQRGPWYABOYBZLGCBYAXKKRHFDMVOZSMKJMVJCJYADXZUKHPEILLJFXAPQJNIGQFDOMWCPACBBLXNXUITHLHXSHO");
    msg.sys_type = 229U;
    msg.owner = 24696U;
    msg.lat = 0.4462645947263548;
    msg.lon = 0.6548021099902903;
    msg.height = 0.4484725173362373;
    msg.services.assign("AORTGCLRPIJFBVDYPZIPDPMDAWBDPTSLZLUKEMRCBMBKILBLUQVKEIMRQUXXHPZHJNFMRSGXBSENSUGNHTOFYZSGZEWXYKOTHKKYJNQHYASVONJNAXT");

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
    msg.setTimeStamp(0.8344383643130582);
    msg.setSource(31078U);
    msg.setSourceEntity(65U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(41U);
    msg.sys_name.assign("GYWZHJEQKFVXOIMORSNUCSNFORPFJJOHQEIUSZYUIDLIFEBKKHLSHHGWTLTDNHXJUUACDVLZTIASMPOFDHKGBPOXTWXNEXZGETIFXBARVVPPLJVQNHDCTCAENJARLIYRERELMKYKGADXDWCRPBMFQZUWGSYJQBVSPOPGILCTUWWPFGTPYBVYEWAQUQNINGMTQZMYSBYGXDYMVBBRSNZZTVZRHDQCKUEJUKSDWVKLWZACAFXCBAOHNOCO");
    msg.sys_type = 211U;
    msg.owner = 27548U;
    msg.lat = 0.18255531749804232;
    msg.lon = 0.817348848725361;
    msg.height = 0.135938891461987;
    msg.services.assign("ZBZTLSYGZLAZEGLSRXPOGKUASRAXEVLSEYKAGZDZDNPTKPHJMQSMBUBZALMTBQJYSQVCVAUJXCDNT");

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
    msg.setTimeStamp(0.6364318565274864);
    msg.setSource(64563U);
    msg.setSourceEntity(231U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(131U);
    msg.service.assign("GRANIVVPGZXTXPMFBTKVTSDRIZOFGMEHHSSYQXOSQRTKUIAJKBNFOBUGTBHGKZYRRUYHUPXZHHQCNQLBLMAVEPJJRVLQIMUPQOBUNYFPOSDGWZEWB");
    msg.service_type = 161U;

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
    msg.setTimeStamp(0.443289798224478);
    msg.setSource(27516U);
    msg.setSourceEntity(105U);
    msg.setDestination(21318U);
    msg.setDestinationEntity(62U);
    msg.service.assign("CAEUIGPFFHCQJRUWYZDMXLANPMQZFJWVREPHKGRCNJSPZLMABFXKWSXASXWGOSVTEUFYLXPVIOLJCPKNRODZVIOQRSPIRJGSZZPHQGAOTJJHBYGQTVFYWTPGJDKUCXFWGKVIZKEMBTSMHXLGMNWNOBKOHFFAXEMUVUKBDDKUHCONPZFNTUBDHLICQZWOQITVSBGAAALVIBAQYTKOJYWELYHDWNMRRB");
    msg.service_type = 176U;

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
    msg.setTimeStamp(0.4617639325365632);
    msg.setSource(31681U);
    msg.setSourceEntity(5U);
    msg.setDestination(42211U);
    msg.setDestinationEntity(140U);
    msg.service.assign("CVHWQWOOQYCVRENBRVJWJRAJDSKYIMUAZGFOMFNXALOKEZRTUSPTPWPKNAMUJTRQGILCLQHEENJMQAK");
    msg.service_type = 0U;

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
    msg.setTimeStamp(0.883624198656689);
    msg.setSource(27828U);
    msg.setSourceEntity(161U);
    msg.setDestination(20590U);
    msg.setDestinationEntity(140U);
    msg.value = 0.3009150434069586;

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
    msg.setTimeStamp(0.4936448793719903);
    msg.setSource(26935U);
    msg.setSourceEntity(111U);
    msg.setDestination(4568U);
    msg.setDestinationEntity(10U);
    msg.value = 0.9344393408861603;

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
    msg.setTimeStamp(0.4319454908482997);
    msg.setSource(27631U);
    msg.setSourceEntity(39U);
    msg.setDestination(12051U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7933877730390773;

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
    msg.setTimeStamp(0.9704045309156526);
    msg.setSource(4101U);
    msg.setSourceEntity(80U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9484439490215343;

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
    msg.setTimeStamp(0.2609079758939469);
    msg.setSource(24146U);
    msg.setSourceEntity(154U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(218U);
    msg.value = 0.47641241830877856;

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
    msg.setTimeStamp(0.27924209223639507);
    msg.setSource(55710U);
    msg.setSourceEntity(179U);
    msg.setDestination(40486U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8683588442706762;

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
    msg.setTimeStamp(0.4457944008079956);
    msg.setSource(15746U);
    msg.setSourceEntity(169U);
    msg.setDestination(550U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0857263420416512;

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
    msg.setTimeStamp(0.17049650318136578);
    msg.setSource(29832U);
    msg.setSourceEntity(216U);
    msg.setDestination(61475U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6862717303453632;

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
    msg.setTimeStamp(0.48606120032939637);
    msg.setSource(13987U);
    msg.setSourceEntity(251U);
    msg.setDestination(12958U);
    msg.setDestinationEntity(150U);
    msg.value = 0.26963876111094387;

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
    msg.setTimeStamp(0.37982709813291216);
    msg.setSource(32899U);
    msg.setSourceEntity(48U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(135U);
    msg.number.assign("WDHTWNLVYHAKPPKMGOQQJWCMZCQEPCQQBELWRKKZBSVNJGRVIXJDXGMFFRQJVJQPXNPCUUQQSVHTGGDEXACJEDWKNYFTVYTAPDVCAMVHYIUOUDUJXRYZXQMBYBCTDFIOBHKPKNSAZXNBLYUBRRKLCENOFHCRSOGLUBOASZRGRDMTDWXRKWVPLIGXDSLBNUSMTSCJMEZE");
    msg.timeout = 50872U;
    msg.contents.assign("MIOVOIMVKIKMIGWPBHEDYDIJASQCWNYKXTWUTHXZBDPVQXTCGEUOPDNAYQIZOAKDMWYOTDKFWZQCINFJNPRVBHORTHULARFFBRUGHEOAZAUXKYUYBLLKCASSROZVLSQNDORCDNPBFAVCZTEIYJVFATYJGXE");

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
    msg.setTimeStamp(0.43911594662330466);
    msg.setSource(25281U);
    msg.setSourceEntity(193U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(182U);
    msg.number.assign("HYDWAYJKNSCLEHHENBMMXDKWRZBEYPSWRVCZUYMTKBPKVUDGPWFDVIILOXOLBNHQJQWGUFLANOJQWSIJCYNLPGEOTVFLIXJHPEKXDTV");
    msg.timeout = 25042U;
    msg.contents.assign("TJXNLFOSWQBSOASSVRECQNYFYJQYQZADHLYYTRQKMLDXTIXAQHMEXQPKXYQJPHDWNFOSSPNDYWOCFHCGTVOBMAFGVZJPGYTPONEMYNDZARDJAVSZTLDKGGBCEUOEHIKPUUSETCJJMUVGXHWYNGINRORQUINIBBWRDITLIXECOVEJZBPHLZNKUKMA");

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
    msg.setTimeStamp(0.589882866220689);
    msg.setSource(56207U);
    msg.setSourceEntity(186U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(222U);
    msg.number.assign("SGIHRCBJEXSMQGIHUKADXYCTKMJCFELIQN");
    msg.timeout = 22922U;
    msg.contents.assign("NOVPNGSWOWEULYLHOLMMQSBTWMYKVGFLQEQVUMIACUMDIOSHRGAXFBJPTGNMYUTJEPZUXNAXYFWPIBVEJBTPSKKSDXTUWCZBBIJKHJWJLHSXFPRN");

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
    msg.setTimeStamp(0.01054160384802827);
    msg.setSource(4133U);
    msg.setSourceEntity(104U);
    msg.setDestination(28188U);
    msg.setDestinationEntity(155U);
    msg.seq = 4272766508U;
    msg.destination.assign("JUGOGANFCGLVCDQRGVHATANKSXGTJUBLDPOEOUKKKQZHTFQJYUWFPZKAYSRRXMBWIJVTPMMEXMFKIWZLLYXZRAWAEGQEAIZWZSNHTJQYTDDOZPIRVXWBXQLCMMHUWTLGKFSINXWMAFXYKDNUBYJFREWFZHQKFEDABN");
    msg.timeout = 43215U;
    const char tmp_msg_0[] = {-38, -35, 27, 24, 23, 68, -37, -23, -89, 116, -70, 41, 27, 48, 108};
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
    msg.setTimeStamp(0.28737806752344297);
    msg.setSource(39357U);
    msg.setSourceEntity(187U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(82U);
    msg.seq = 3795455027U;
    msg.destination.assign("OAPPAXHYILFUPXARWTCRCGIPMODMVLKGDLUTHTSCNWLSQMUGCKAHFBRLOLZSIYUAZIFZZPWRTEBQKFJQFXJGQGUQMTTXRVVRWDQXBYJKXMYBPW");
    msg.timeout = 47795U;
    const char tmp_msg_0[] = {107, 80, -13, -113, -68, 96, -26, -86, 112, -98, 59, 111, 33, 87, 61, -6, 52, -33, -1, 58, -62, -59, 20, -106, -83, 121, -7};
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
    msg.setTimeStamp(0.8529198592844001);
    msg.setSource(18068U);
    msg.setSourceEntity(166U);
    msg.setDestination(24396U);
    msg.setDestinationEntity(35U);
    msg.seq = 3235552294U;
    msg.destination.assign("UIFZJURKXVNLIVIGXFMCCZRNUYKTJPWGQOMJOHWGHBNNRRFQVFXBQPBYAUETKDXXWRRMXJUBDMKWZSCFUAFCNHGFLMBQYTBKTIFBDTABETXKYSKTGRBPVEHPIIYN");
    msg.timeout = 8693U;
    const char tmp_msg_0[] = {24, 94, -27, -37, -75, 16, 92, -123, 28, -47, -61, 59, -58, 54};
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
    msg.setTimeStamp(0.3424447590841475);
    msg.setSource(58131U);
    msg.setSourceEntity(227U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(222U);
    msg.source.assign("FXICTZOYJUDOQSABHRBDFKNTEPQCKTSNAMDFRKYBQPNGDVWZQVCJDGBMHPQUDSUJEVRZEGERDJSFVWOITWLEKEHWDHRWFCCYWAMUZRHMRMCVJMQLSKGTOHXTGZJYLYVLQIYRNZNZHNOKWBCGJSLBGTKYHEZXIXBBXYACAZFIISFAKPAVVPXJUKCMCXOIUTWINARFPOANYPOFDXLUNPKJZPGEEQJGVBMGSQSEWOUWILTRPULLXXQ");
    const char tmp_msg_0[] = {-60, -85, -32, -10, -23, 126, -23, -10, -11, 34, -48, 50, -41, 65, 41, -118, -125, -52, 51, -6, -110, -39, 83, 43, -78, -45, 99, -101, -126, 62, -21, 84, 79, -70, 54, 96, -102, 75, -128, -49, 48, -73, 75, 18, -82, 63, 36, 29, -58, -18, -14, 113, -57, -89, 56, 79, -116, -124, 26, 5, 33, 115, -79, 113, 124, 51, -103, -11, -30, -119, 102, 109, -75, 91, -120, 91, -123, 31, 54, 109, -72, 109, -59, 48, -72, 111, -113, 42, -82, 70, 40, -34, 108, 56, 122, 92, -21, 97, -99, 105, 35, -37, -50, -90, -8, -96, -54, 61, 45, 19, -49, 42};
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
    msg.setTimeStamp(0.05431334767057383);
    msg.setSource(60185U);
    msg.setSourceEntity(67U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(79U);
    msg.source.assign("WWNFUAIRFHBZHPJOHIKNBKVYURISSVHKSCRVZLDBLQSKVOGGEMYTIUEYOVZQTNKEWCLRCIUDREIJTQDKFGLOBKEOTNRLHIDXDAVUJDDSXXFJZGOMHBUTNFFOJHQNPYGRUJECKEQVFPONXT");
    const char tmp_msg_0[] = {-86, 12, -13, 23, 93, -112, 92, 26, 115, 8, -51, 46, -13, -78, -91, 122, 120, 114, -87, 20, 38, 55, 43, 2, -65, 82, -119, 49, 116, 75, -32, 81, 10, -73, 77, 60, 116, 74, -43, -59, 66, -96, 126, -73, 104, 60, 69, -111, -30, 14, -39, -68, -45, 45, 71, 80, -96, -38, -23, 91, -85, 105, -107, 120, -29, -127, -87, 103, 103, 59, 116, -24, -95, 14, -20, 32, -39, -80, 15, -92, 111, 31, 24, 121, 108, 104, -29, -91, 9, 96, 56, -116, -4, 47, -120, 15, 104, -64, -100, 78, -72, 107, -70, 107, 30, 79, -30, 21, -113, 92, -68, -25, -11, -98, 102, 85, -76, -110, 41, -83, 100, -50, -88, -24, 89, -16, 54, 86, -11, -60, -104, -28, 9, 106, -49, -6, -123, -82, 27, 43, 16, 31, -14, 97, -25, 49, 57, 0, -6, 91, 88, 83, 28, 85, 2, 102, 70, 10, -31, -83, 17, -114};
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
    msg.setTimeStamp(0.22733484829457873);
    msg.setSource(4182U);
    msg.setSourceEntity(185U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(69U);
    msg.source.assign("LYPZGPZLVCMINPGNAHOXWZPHQBSMWXVGLEEAEXQPFFMKSKGQWJIMLQSZTTFNJCTGNRUVYTTEKYZOACAFRICAXQPZUAJFYBKJMKLECJDTURIQBRLWUUYVEYDHNDPOEDWGSMFRUOXBAKIZNWEJNGSRWB");
    const char tmp_msg_0[] = {85, -55, 34, -125, 121, 101, -109, -47, -105, -75, 85, -49, -105, 60, 73, -49, 75, -3, -45, 13, -111, -126, 58, 70, -39, 34, 63, -22, -20, -122, -71, -30, 44, 107, 114, 59, 51, -14, -81, -91, 113, 81, 81, -111, 83, -77, 77, -110, 24, -55, 123, -13, 46, 123, 36, 28, -49, 113, 126, 46, 122, -9, -83, 48, 80, -93, -14, 101, 125, -73, -59, -25, 85, 13, 110, 124, -105, 20, -55, 83, -36, -28, -64, -61, -125, -30, -21, -93, 76, 81, -3, 36, 26, -77, -115, 113, 25, 11, -95, 19, -1, -93, 81, 87, 42, 26, 66, -60, -111, -7, -67, -5, 45, 47, -81, -42, -32, -23, -120, 9, 39, -25, -41, 77, 22, 108, -74, 8};
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
    msg.setTimeStamp(0.002466057022041279);
    msg.setSource(36475U);
    msg.setSourceEntity(62U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(66U);
    msg.seq = 1340207695U;
    msg.state = 145U;
    msg.error.assign("LIFHORKMIAWBJUACDWTHBCZLTBXLLSQDJEVZPBZBVOQVCYYJIDVWTSNHQIRBLHPEEDPPUIJFWROYZNVSAYFRWKUJYGEZSWDZHOVNTNVUSDRFXEARGLPOXPOGPJLGXMKFZCLXKQTTYFHIXRUTMZLCXGYVKKZCUQAXNHGOXIEFPUVHQNMTQYNYCMBTIKIUJHGBNDOQHABCEJKRFWMEJYFMLFGSNUMOEANQPBRIGXSQWAZWAETKDWRMC");

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
    msg.setTimeStamp(0.030492279876016437);
    msg.setSource(8215U);
    msg.setSourceEntity(8U);
    msg.setDestination(23731U);
    msg.setDestinationEntity(58U);
    msg.seq = 1778213921U;
    msg.state = 103U;
    msg.error.assign("YVVYJLZBJWTQHDWKLUEVRAHAMWWUXZHNZMNGDAEGSCVYGAWEXPNRBBCVBLOBQQWGNVHKSPVNCEQVHSCEJGFISMLDQJRYKSNODVFQKPHITSXTMKTJQGGTBCULJUUFYWFXOASK");

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
    msg.setTimeStamp(0.561569835372678);
    msg.setSource(43513U);
    msg.setSourceEntity(83U);
    msg.setDestination(33943U);
    msg.setDestinationEntity(118U);
    msg.seq = 79117151U;
    msg.state = 237U;
    msg.error.assign("BDYQOHJYAYXXODBLHVSGEZWUBOFDZKKQETUWWUMBQWMMTJLXMDCMXKGLHDTEGAIDJUPCSRWHWRJCINFNUGS");

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
    msg.setTimeStamp(0.563822434217847);
    msg.setSource(55066U);
    msg.setSourceEntity(119U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("MGTMOMAUIOKZFDFJXWESXXZBTMWZWGNHJYYECQDCFLAHQNLRAEUQDOFYSAXAVWCMNDVRKRHRTVRZCUZGJSJFOHKLHCCGNTBFQYTMISMUPYUBETOUADNSIFREFZXGNLGBVQZEKRBJVSOGHFARZOYWBGDYAUHWSNCEZPPRXSCUUIPKLOXJJYLVQZPJKCPQTBHEIDXODPICVQQPNXGIIHKIYKJREBLKEOVQNIASWDHWPXMJTMYLBWMN");
    msg.text.assign("COMSHEVQHOBHGUZEYISYCIFCYZTODIQYABPCUTBYOWZICAORXTWJKYSOOSLGKMZSXXBRVELMWKJLKBRDGNXXMYQFRZLMYTPLSDPACYWGVJXJWDUBAUOFTACFNZQDRAGAPUMPQIRCNSHINTLCTWEOPIHRWIFXHLNNUMAVFBKDEKMHFML");

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
    msg.setTimeStamp(0.21702829315033723);
    msg.setSource(55262U);
    msg.setSourceEntity(209U);
    msg.setDestination(7981U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("SJLLDNBWMGOXPZCEDIAHKRBSQAWRFPEAGSAYERYFKKIMLWTQDQQJKYQMBOVLAWBLII");
    msg.text.assign("XRIHJVOJKIYSKFQUMXCCEKAVJGRPXGCZHMQXEWTVWZZUEOVDFIWJRVCSNEBBCBVTRLZHNLLGXAYGUGFLOJFPGQOMKDHWAIDRDWKSQFRUYXXYPYORJFTQKBPHMYSGWEQ");

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
    msg.setTimeStamp(0.721381774894227);
    msg.setSource(37258U);
    msg.setSourceEntity(15U);
    msg.setDestination(45955U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("UKYKUMXGVKFJLIMVUGTHLIQLRRJZDUAAHYJRKEMZDXQLZBPSWNISDREZHCZKTDDQAUNGFNFEPRMJYQSNABBFUZNFPCZCSCQXORWWOGEJPWDUBFGLHNLAPXQVJQWGHOGVUBWYZHAJCKYCITFYIVBUGIEIPDLKRMEAOVQOEXSIOSPSWDYRXOJZHEAXAZCXPHXORDEBLCYTKTPMTVNCXOCKMVTBAQNTQSLFVSVHFUHYIDRPJENL");
    msg.text.assign("IDNRQRUUINDQGADSAWGTCJQOSGRNKTPRFIMMVLTUYKMCKDOIOCXZRZ");

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
    msg.setTimeStamp(0.38958020169976015);
    msg.setSource(810U);
    msg.setSourceEntity(204U);
    msg.setDestination(50790U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("PKGMCMDSZDGMGGTRQYOYPNBIFLIVUDFK");
    msg.htime = 0.7948757223055141;
    msg.lat = 0.950787447192556;
    msg.lon = 0.03839431220845879;
    const char tmp_msg_0[] = {60, 34, 23, -125, 104, -30, 27, 21, -114, -111, -54, -97, -65, 118, 15, -30, 66, -110, 85, -70, 121, 63, -30, -76, -102, 98, 124};
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
    msg.setTimeStamp(0.19948730233059386);
    msg.setSource(50598U);
    msg.setSourceEntity(105U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("OVJEKYIUODDSYX");
    msg.htime = 0.008698117699781904;
    msg.lat = 0.717330034928377;
    msg.lon = 0.7997904263077088;
    const char tmp_msg_0[] = {94, -115, 71, -74, -14, -6, -98, 124, -96, -69, 72, 64, 42, -113, 25, -56, 32, -74, -18, -93, -109, -79, 101, 47, -57, -44, 109, -106, -30, -69, 76, 97, -86, 92, 36, 116, 50, 75, 89, 31, -65, 33, -37, 3, -57, 85, -55, -57, -35, -33, 36, -124, -118, -88, 6, 121};
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
    msg.setTimeStamp(0.4730967104839642);
    msg.setSource(7486U);
    msg.setSourceEntity(233U);
    msg.setDestination(55928U);
    msg.setDestinationEntity(155U);
    msg.origin.assign("IEPQSVYLLKDYERUEVREXVLHMODOJBYAEAJHDCDAYPAUQVSEWFRMGWXXJGJVNKGQKCWXNAHATZOURCWBNOQXGZAAZCBICOFZZUPZKITLBYFVFMDHMKISPFKOSKDPPOGWLKSZESFWT");
    msg.htime = 0.6394628488350392;
    msg.lat = 0.07042729860303876;
    msg.lon = 0.8047449823652187;
    const char tmp_msg_0[] = {40, -41, 65, 62, 18, 9, -89, -44, 29, 15, -3, 28, 65, -120, -11, 67, -84, -115, -119, 62, -71, -125, -97, -94, 105, 106, 27, -117, 40, -71, -40, 109, -40, 106, -68, -74, 15, -46, 48, 39, -91, -75, -39, -22, 63, -62, 114, -42, 113, -7, 100, -91, -42, -78, 77, 126, -19, 113, 116, 41, -66, -88, -44, 76, 98, -100, 43, 68, 77, -14, 22, -78, 95, -44, -3, 124, 78, 106, -42, 80, 13, 126, 126, -108, -12, 92, 123, 54, 1, 70, -75, 117, 51, -102, 85, -16, 112, -102, 96, -56, 26, -105, 90, 45, -112, -15, -78, 103, 16, 26, -103, 102, -120, 41, 74, -3, -42, -14, 16, 68, 10, -45, 45, 48, -116, 105, 43, -5, -20, -93, 87, 74, 0, -73, 124, 71, -115, 39, 90, 10, -58, 92, 125, -21, -59, 74, -124, 117, 98, -107, -83, 53};
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
    msg.setTimeStamp(0.15589176375137215);
    msg.setSource(30074U);
    msg.setSourceEntity(213U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(152U);
    msg.req_id = 18047U;
    msg.ttl = 24726U;
    msg.destination.assign("WXZGRCMZSVSGEBWXWDANIRNMGHUCIPGAEFBJQCRYIBULQZKOLGYFRVXZFJRJKDVADWWTMXKDRWOGKJPCPVTQELYQZIUSDJQTVFOAKPMFANWSKYOYMHLLHPQDVQFDJPHRUTBMXHRGEXLVWNVIBCDRESODBTCXTJAJYBQHZUZNUPZVEXFCUYOUSKBOWOSOQISIKUPXSAQJEKGJAPLWXBNLNEVZMYIMNTHRTUCMCHHLYYCAF");
    const char tmp_msg_0[] = {106, 92, -91, 56, 67, -35, 117, -78, -105, 74, -6, 103, -23, -15, 60, -7, 82, -98, -88, 113, -75, 54, -2, 71, 92, 109, -121, -127, -91, 92, 17, -11, -101, 37, 10, -23, -62, -33, 101, 2, 120, -117, 64, -86, 80, -114, -100, -117, 35, 4, -82, 20, 95, 20, 7, -22, -121, 1, -87, -64, -40, 118, -72, 92, 41, -105, 118, -90, -12, 79, -17, 1, 88, -8, 65, -100, -127, 32, -82, -80, -76, -101, -9, 9, -32, -14, -63, -56, -43, 20, -92, 50, -64, -70, 72, -30, -33, -17, -7, -31, 34, 20, -82, -128, 63, -43, 58, -110, -58, -68, -6, 95};
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
    msg.setTimeStamp(0.3038198312920374);
    msg.setSource(5868U);
    msg.setSourceEntity(209U);
    msg.setDestination(25888U);
    msg.setDestinationEntity(204U);
    msg.req_id = 40458U;
    msg.ttl = 28833U;
    msg.destination.assign("OLSMPNZYKLYFPOZKVNPESPMIMYEGNQKXGNWXUIVVQKKBTVQJUQUYLJRTG");
    const char tmp_msg_0[] = {-101, 48, -128, -13, 20, 105, -117, 19, -36, -102, -75, -61, 2, -70, 48, -38, -127, -59, 51, 43, 21, 4, 113, -15, 3, -24, 107, 113, 69, -115, 83, -62, -47, -40, -52, -38, -57, 111, 112, -83, 81, -48, -63, 10, 33, 83, -122, 27, 18, -10, 0, 69, 48, -23, 98, 75, -61, -51, 42, 96, -22, -121, -91, 6, -14, -46, 118, -54, -99, 6, -72, -89, 13, -123, -16, 94, -76, 71, 16, 107, -107, -94, 61, 98, 117, -30, 31, -121, 71, 8, -64, 29, 95, -78, -112, 27, 120, 40, -3, 9, -87, -56, 15, -42, -122, 126, -62, -126, -67, 73, -67, -28, -49, -60, -71, -39, 113, -70, -54, 108, 109, 58, -46, 95, 48, -66, 96, 97, -80, 74, 36, 72, 69};
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
    msg.setTimeStamp(0.625735284221913);
    msg.setSource(58294U);
    msg.setSourceEntity(61U);
    msg.setDestination(20898U);
    msg.setDestinationEntity(185U);
    msg.req_id = 9036U;
    msg.ttl = 62438U;
    msg.destination.assign("NTUIPBQLXYZTDXHGZDREJQLZWKWCDEHSCJZNEWHVIVPMAFMDYFRJRSOFFZEFWPMFMZUMQRTSAVNGLYNLOUOIMXYDWYMHTZWRNHIQIFJOYHGOJFXXGAKTBCHQXSOPBKPWTDFPNOEGCJQZRABJVYDRKX");
    const char tmp_msg_0[] = {98, 19, 34, 68, -112, 52, 18, 84, 3, -5, -81, -126, -122, -24, -53, -61, 40, 30, 55, -48, 124, 109, -65, 35, -126, -37, -2, 87, 89, 78, -84, 73, -97};
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
    msg.setTimeStamp(0.1547662482267066);
    msg.setSource(42152U);
    msg.setSourceEntity(167U);
    msg.setDestination(37574U);
    msg.setDestinationEntity(213U);
    msg.req_id = 62798U;
    msg.status = 118U;
    msg.text.assign("IYBFKDBVLMVYXMOLCXLDJFVPCLMNJWJJSBUJVIABYWMCSMWTXNJVRWQVKLOUAGNPGEZPSOGIKATBPRPGHPQVILOV");

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
    msg.setTimeStamp(0.42745225247603413);
    msg.setSource(33693U);
    msg.setSourceEntity(164U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(66U);
    msg.req_id = 45829U;
    msg.status = 174U;
    msg.text.assign("KOOQFFGVJXMCOUBKFPWJRNAOISPVAOUJTPQDPMXUUMBEOFTDNZXEUODWHGDDXSYSQHTLEMLDTZNHYMAFXNYGHRMZZZJQQOUNSIOWTLBCIAHALRBDJKCMWDGFPASMBFIIXBDKUWZTZBZDHIPKQYUKVUEGQCINEIKPNFUFJYPXKRXQTVWCGYLQFWCHEVVQGNELPYHWECIMSVTWVSAZLRLXAPRYSIJRBMJRLWKXSRCVJABLSHTJCYNRHATN");

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
    msg.setTimeStamp(0.4355833031536247);
    msg.setSource(3215U);
    msg.setSourceEntity(15U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(212U);
    msg.req_id = 41446U;
    msg.status = 244U;
    msg.text.assign("PCMEBIJQTRUGEYSEXNNERZJGCDKLADUQTPMZRWOKZNHTLAWOOFWWXCGOACWZBJPAUVMATRUKFOTFEHHKYHBHHIHQQNOIBPQFVPMKJASPILILZGDZDQNIZKRILWCUDIVRJEDPRFDVBQSDLATAXGMAVKWCUXSLCSAXYKXBTJVFYYQKLHISNOHVP");

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
    msg.setTimeStamp(0.8733859970044173);
    msg.setSource(56500U);
    msg.setSourceEntity(227U);
    msg.setDestination(50620U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("BSTJCIFBZXDXNQXGHNMANCSMYQUOSKKLQPJITSAIIYOKJLWYJEMKDCEAUEZQYWNTQJHPIUFBQVWPCQCVLTMVGHZD");
    msg.links = 2997839888U;

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
    msg.setTimeStamp(0.4751996196876026);
    msg.setSource(57522U);
    msg.setSourceEntity(120U);
    msg.setDestination(31195U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("VWPXVDYTYOABXXGAS");
    msg.links = 190168893U;

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
    msg.setTimeStamp(0.22825468499906976);
    msg.setSource(50926U);
    msg.setSourceEntity(150U);
    msg.setDestination(23284U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("MYGKLEFTKKKNGYWGVQSROCNIPFJTRYCIOVLIJBIMAVXBDEYVXDJBQMNOHUWYJJJKTHJTWLRQFLIAKFNOBBFAVADXXQRMXQSVSAJSADSTUBWANQZRWZSDYZKJHLLAXZDOOLUDGUVSGMFMKPONTRIEVQXITEUYGRGIMTADCVNFEPCLZSZPCKPRXFHULKPVNDZNWFWOPCQHPSHCOQGUNYRUEYHABIZHCRPXTLBCME");
    msg.links = 4220946239U;

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
    msg.setTimeStamp(0.9307847223444872);
    msg.setSource(12151U);
    msg.setSourceEntity(207U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(106U);
    msg.groupname.assign("IWFLQAZPCZGVGEMVHXZRRKFJZMIOLCWMPPVTTINUONNPFNBNLWRYQXNXHYALGVUKQYERTSFDKXKLXHPUUGWJQZHNBFTYYLKLMAMJLYURTVEDVBMOKAGBDBJPQJLTIFUYXSUDSWUQAZPBMR");
    msg.action = 168U;
    msg.grouplist.assign("AQWJSKFWEDPLOVUHFIRJSCXYBZOQPFWAPTVYMRUXNIRHIWGGONIVYKDHYXDYHVOFIBLWPXGKDCUUAGSCLVEUTSCKQZRBZUPBNZDOTCGGYIZPXVTABFBQDVUNMYMBAXITWONDJMTSGVUJMLTQRWFKLEASENAKNTZCQNNKZSLRRZTMWGWHJKDGJBBQOQEDMLJXOPLPIOXFKQHSMFTWFSYEFXCSDGHCEXRHEJHCV");

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
    msg.setTimeStamp(0.25518887347927754);
    msg.setSource(61769U);
    msg.setSourceEntity(181U);
    msg.setDestination(40033U);
    msg.setDestinationEntity(120U);
    msg.groupname.assign("RAGYTYHWTXLEVFXCGQGHJLYKUAWEINGLPMIYDYKYNLHPWJTWRKVUSXADDZPEQGEHQJAMKOXJZGSDKASYWEBURZRQILIPFUBOBXQMMDIIACHFZ");
    msg.action = 12U;
    msg.grouplist.assign("NTCMIYMKXLFJHZTIVETQYBFIYJBMIMBPMTMGKVPEVTXCDEURODLPCOEFIJLPWZZPIQBYJRHFZUOBIWJXHKVUGFVZEKKCSOSRZHDYRDKTOPUMSXCJOAIKPTRNLJBFDWTQTBWGOFUVLVEQXAHSCUARADBNZRVABYCCXYRYGOPEPDJCUMXGVFQLRNHSHZEQHXWXHLMWZPSJNVUQWQGLAXORSF");

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
    msg.setTimeStamp(0.5539728191960293);
    msg.setSource(10174U);
    msg.setSourceEntity(221U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(32U);
    msg.groupname.assign("AGVCVANIXSDOGWYPVXBXXWOZRFISVVCEFUSFQQSKLCCFIWXEMGZMJERUULNZSPOZFPLARPOPNORRDAAEVHDVGTNXTXBUWQUPHGGDSAVRLDOJZLRIBHKAIJMSJYSMWWTHVDBEYEBCGUUTTNLMETVBQYTNGQBNKROTRWYGCKZFIPJSZZOTQMDLCYHMLFDHCQFNWXFOJCKLUGTIPBNKSQEAZYHPHIKODHEMXEJI");
    msg.action = 120U;
    msg.grouplist.assign("EFWYOBPTAKYDFWJLJCNZKDAZOGUZWQSZXFNLNNJAYSZSMBRABGJVURLCGSXKMFKPYVFFDRHSPHMMUXEQSIMVTZFQCTKPBVPXY");

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
    msg.setTimeStamp(0.5198756107345619);
    msg.setSource(62428U);
    msg.setSourceEntity(200U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(203U);
    msg.id = 191U;
    msg.range = 0.35630219964542;

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
    msg.setTimeStamp(0.4830512438761555);
    msg.setSource(1479U);
    msg.setSourceEntity(125U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(15U);
    msg.id = 30U;
    msg.range = 0.5646050393670846;

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
    msg.setTimeStamp(0.3070414484260703);
    msg.setSource(35057U);
    msg.setSourceEntity(212U);
    msg.setDestination(20631U);
    msg.setDestinationEntity(6U);
    msg.id = 95U;
    msg.range = 0.18402180159693704;

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
    msg.setTimeStamp(0.10558767290572857);
    msg.setSource(57947U);
    msg.setSourceEntity(215U);
    msg.setDestination(6234U);
    msg.setDestinationEntity(242U);
    msg.beacon.assign("GPAPLQAUFXRQNIBIYKWEHYAJGUVHWPKULPITSLCLYBMNEYGDRDVYUPZDWWMYOHGRFWXVBQFXOFNPYBZHDABQCCIKRCUJBWGWODBVAJTWOORIBSFTDSHJEWBHMOISLNVLRHSEMXHUJYVQKCFMNNRTEXCKRQNIVKAPANMUIMSZZZLJXYGDJNLHQQFXUM");
    msg.lat = 0.027169442649236597;
    msg.lon = 0.06850081083554693;
    msg.depth = 0.7917400418891658;
    msg.query_channel = 137U;
    msg.reply_channel = 36U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.3837643205640988);
    msg.setSource(23883U);
    msg.setSourceEntity(14U);
    msg.setDestination(57424U);
    msg.setDestinationEntity(236U);
    msg.beacon.assign("NTDAKARYQGPVXXTNMJLGCHDGAVOONKOWYYIMKYHZPHWIMXMMHEANZSWJLPVKITRAZTBUPDNHQHJDSLDCQXKUZYGBZHUSBACOFSGNOBQEEBJUZYPSTVWDIFRTUFUSJDECRRAJATS");
    msg.lat = 0.7551768244612866;
    msg.lon = 0.11907382000618172;
    msg.depth = 0.9987757995776424;
    msg.query_channel = 25U;
    msg.reply_channel = 51U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.14399732284014966);
    msg.setSource(4311U);
    msg.setSourceEntity(184U);
    msg.setDestination(40385U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("RBQBUPPEBKLEFUKVRLTGPMSRBVYPGJGJVNLSIGQMOCJTDKVVOCXFCPSNCUVNNXXTYYIGEFILDYPKPIBQFGSBWZZDFHAIOUTQKXHJWKDHRNHN");
    msg.lat = 0.059331891994495845;
    msg.lon = 0.6663819559750132;
    msg.depth = 0.45876411913244364;
    msg.query_channel = 164U;
    msg.reply_channel = 132U;
    msg.transponder_delay = 188U;

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
    msg.setTimeStamp(0.5572239044466233);
    msg.setSource(47100U);
    msg.setSourceEntity(0U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(35U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.43100462497990955);
    msg.setSource(53141U);
    msg.setSourceEntity(160U);
    msg.setDestination(8465U);
    msg.setDestinationEntity(50U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.08562208276001182);
    msg.setSource(65305U);
    msg.setSourceEntity(144U);
    msg.setDestination(1572U);
    msg.setDestinationEntity(10U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.1117259127849749);
    msg.setSource(53780U);
    msg.setSourceEntity(178U);
    msg.setDestination(57403U);
    msg.setDestinationEntity(156U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 30U;
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
    msg.setTimeStamp(0.36125492965572936);
    msg.setSource(54954U);
    msg.setSourceEntity(35U);
    msg.setDestination(48913U);
    msg.setDestinationEntity(205U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DKYTUZENFRFHJVOEQNIVVEXADISTXYMICHZXPAB");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 480028976U;
    tmp_tmp_msg_0_0.id.assign("QHVVRWYJNGWDLRZRHFHANICEGLOJBXLXAJBMNHZXIZCQDAHVHGICWNOUMGEEADBYTDDTIZXWRSTYFUZZYROEWTMTWFOSSNSADFQYQVBPUE");
    tmp_tmp_msg_0_0.memento.assign("FNDOVBTNNEPWPTWCHGRLUTTBTXMEUKADVOEZHYWYRHZADWJGJUZHJKSQSPAUGZIRRBXKSLDOJTOWFC");
    tmp_tmp_msg_0_0.timeout = 11442U;
    tmp_tmp_msg_0_0.lat = 0.6910834680820575;
    tmp_tmp_msg_0_0.lon = 0.08658723865496354;
    tmp_tmp_msg_0_0.z = 0.7753348779734622;
    tmp_tmp_msg_0_0.z_units = 106U;
    tmp_tmp_msg_0_0.pitch = 0.6751329208743275;
    tmp_tmp_msg_0_0.amplitude = 0.879915857126285;
    tmp_tmp_msg_0_0.duration = 31854U;
    tmp_tmp_msg_0_0.speed = 0.7366146317538611;
    tmp_tmp_msg_0_0.speed_units = 23U;
    tmp_tmp_msg_0_0.radius = 0.4520428277193952;
    tmp_tmp_msg_0_0.direction = 128U;
    tmp_tmp_msg_0_0.custom.assign("PBYRJPLXYHEOQBLHSSWVDSOTVYAJEOTXRVURGVSYOIGMKXIKSDVOFTKWNDEPPKZCGGKAUOUZMDHCWXBAVNWTHERPHJUBZQIQIWNKUFZYRBCEPCFXQGIMPFMIEVAHTHTNYICJKSFXNYJWAHUIHXIGTNBOZZNTETKVUJBDMTMMBCLCYLQBGQWEJLLZAWSUAMGNLYBLACOFASVRQMPOYFZSDKRJSOMFFNEPNGRJEWXCLPIQWVRQJXDDXFDUGKDR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ImageTxSettings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.fps = 184U;
    tmp_tmp_msg_0_1.quality = 164U;
    tmp_tmp_msg_0_1.reps = 188U;
    tmp_tmp_msg_0_1.tsize = 237U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2316633908446003);
    msg.setSource(50803U);
    msg.setSourceEntity(114U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(83U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 5U;
    tmp_msg_0.error.assign("GBMYNVHIHPRPMHKHMRRVKTMFDWQTZQEPJDWZLIHIQCYFIREZQUKRTOXXLSCKNIJCJLULGCSRPFDGLKPODEJBUWPUMNSVEPJEJMYISXCNWEIERWQXKRZFUPMDEZKAMQQGBCCUBOLGXEAVAZGWUKCJHGJAIDGCZSNVFTGBRNOVTHBAVWIAJYCBOBFYLAHLDPXSAXTVWGOQDSMAYOFMNFPWDZNZLKYYNR");
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
    msg.setTimeStamp(0.48715045451188166);
    msg.setSource(18590U);
    msg.setSourceEntity(161U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(26U);
    msg.op = 76U;
    msg.system.assign("XSXBLEIFWASTDQTTKBSYQXMPTPIZFMPJZICQCDWKYXAFNXMPRIZOAKAPNZLIUECUBTURCMOVIFYDKNTOYZCMGGREWRZQNLVWSURLEHNDFOUDVTOHJBVQAWKSLRJPPPXBJDFMBOAYRCIEHQNZTJVADAQMYGVJXTGOSLFEKQDLOEJLCYSHXVLEEAHIWZHCKWUGDWFNQGFBRVOU");
    msg.range = 0.945745996979792;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.28880214223614575);
    msg.setSource(2247U);
    msg.setSourceEntity(36U);
    msg.setDestination(53449U);
    msg.setDestinationEntity(80U);
    msg.op = 239U;
    msg.system.assign("CENLGLDHGZCWORXOLZWLKZUPZHYMDVTAQUOQJSZJJLXQXXIMIOWBTIWBIDNWQNYBQMIYPUUPAGIFXMEBMTHFOESGOXJEZABWPGJACBJNRFDLANQCUPNKTUCSFABHYUCG");
    msg.range = 0.9816682677981139;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 95U;
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
    msg.setTimeStamp(0.0579227070720697);
    msg.setSource(34681U);
    msg.setSourceEntity(130U);
    msg.setDestination(52552U);
    msg.setDestinationEntity(70U);
    msg.op = 141U;
    msg.system.assign("UNIDHAVUINXVPIKGDXTNKFXKSVZABNENRRGFYWBBCWSYCFARWHEJHWYCFTRQWUTESJAMWMTAYIDOSEUOJKZSWIVTLUMFHHXEMANXGLCL");
    msg.range = 0.3543870793413403;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 97U;
    tmp_msg_0.error.assign("NXOBMKYVQJEPYAKJMCWRYZGUQRIUXDVGPDGLEXIKUXILYHOFMNLGJCBRZSFNIXTQFHVWMVBWZOILF");
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
    msg.setTimeStamp(0.7300175632003298);
    msg.setSource(17123U);
    msg.setSourceEntity(123U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.7501599293081171);
    msg.setSource(16732U);
    msg.setSourceEntity(50U);
    msg.setDestination(29051U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.3136771494791085);
    msg.setSource(37251U);
    msg.setSourceEntity(15U);
    msg.setDestination(9289U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.6493689121414741);
    msg.setSource(24694U);
    msg.setSourceEntity(38U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(239U);
    msg.list.assign("FVPOGETYCMDLBIXLKKMFPIQFWRNXKNDHDKJPXZKTGEOFNOGNPDLJAMLIBIVMJCQVQRSRHKRWZGSUPFTHUPFTORNSPYUSRGBACQBWLYDAAWOQUAFUCSHYRBHZYFVIGKVILYZJKAXABMUYRWHETSJDUZEXCLR");

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
    msg.setTimeStamp(0.09544992266242913);
    msg.setSource(34877U);
    msg.setSourceEntity(19U);
    msg.setDestination(8079U);
    msg.setDestinationEntity(16U);
    msg.list.assign("EUOCTZCQLVLKYWKFLWAAQVKIBLFWSJUHNGPMVAQLSNEBZMDFEBABPTREWNDNAPQOJXEGRHUTPRIOOPMYZFJPNBDKIBENGULDAKPSQOXUYPBZT");

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
    msg.setTimeStamp(0.6155795183631325);
    msg.setSource(891U);
    msg.setSourceEntity(28U);
    msg.setDestination(27271U);
    msg.setDestinationEntity(92U);
    msg.list.assign("EBKCISSAJUDXTNQLQDJYZONVKYUNGDUHVCPRUJANRQERGRNYGTFFYWAIBDQLWHMTPUBDXTPGPHIMBIDILPZXQAUJOVSTMAEECLEQLOSIYPZRAKFJXDXRCRDJRKCHOSBZFHVPXQYJBSGINMHMCZJWMRFXWEIFTCFWXBBQNJAHZHHYKNMTECEGMDZILEYZYAYWCFVKVAMOQGUWSGZKBPOFUPBNONZGVGWHLK");

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
    msg.setTimeStamp(0.700115859996152);
    msg.setSource(25262U);
    msg.setSourceEntity(94U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(186U);
    msg.value = 5983;

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
    msg.setTimeStamp(0.32316232443310966);
    msg.setSource(42177U);
    msg.setSourceEntity(1U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(143U);
    msg.value = -23555;

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
    msg.setTimeStamp(0.9550128506760509);
    msg.setSource(12187U);
    msg.setSourceEntity(61U);
    msg.setDestination(44831U);
    msg.setDestinationEntity(183U);
    msg.value = -5517;

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
    msg.setTimeStamp(0.9357771396009874);
    msg.setSource(40730U);
    msg.setSourceEntity(157U);
    msg.setDestination(59077U);
    msg.setDestinationEntity(215U);
    msg.value = 0.013118386570890372;

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
    msg.setTimeStamp(0.21610536294926597);
    msg.setSource(52319U);
    msg.setSourceEntity(144U);
    msg.setDestination(52718U);
    msg.setDestinationEntity(37U);
    msg.value = 0.09496928387866821;

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
    msg.setTimeStamp(0.7692493479640508);
    msg.setSource(54268U);
    msg.setSourceEntity(117U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(79U);
    msg.value = 0.29776590278415593;

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
    msg.setTimeStamp(0.6096170145787896);
    msg.setSource(32969U);
    msg.setSourceEntity(225U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8027066489205917;

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
    msg.setTimeStamp(0.44144689247334323);
    msg.setSource(23312U);
    msg.setSourceEntity(171U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6202503878405627;

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
    msg.setTimeStamp(0.5131161538569441);
    msg.setSource(7697U);
    msg.setSourceEntity(186U);
    msg.setDestination(13684U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5692936413010974;

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
    msg.setTimeStamp(0.619639713756794);
    msg.setSource(4993U);
    msg.setSourceEntity(88U);
    msg.setDestination(14604U);
    msg.setDestinationEntity(185U);
    msg.validity = 38486U;
    msg.type = 251U;
    msg.utc_year = 16561U;
    msg.utc_month = 77U;
    msg.utc_day = 215U;
    msg.utc_time = 0.6374659674381647;
    msg.lat = 0.45089532647760666;
    msg.lon = 0.030637137111779067;
    msg.height = 0.2866384577754493;
    msg.satellites = 65U;
    msg.cog = 0.2618272964366267;
    msg.sog = 0.6934716582741262;
    msg.hdop = 0.7055363413113165;
    msg.vdop = 0.9477658013784814;
    msg.hacc = 0.06272093661728873;
    msg.vacc = 0.4770721366224513;

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
    msg.setTimeStamp(0.029760526337599846);
    msg.setSource(12827U);
    msg.setSourceEntity(244U);
    msg.setDestination(40162U);
    msg.setDestinationEntity(130U);
    msg.validity = 35883U;
    msg.type = 254U;
    msg.utc_year = 31243U;
    msg.utc_month = 159U;
    msg.utc_day = 41U;
    msg.utc_time = 0.029924589249312405;
    msg.lat = 0.6344712765474808;
    msg.lon = 0.013199538096953845;
    msg.height = 0.5188458577898789;
    msg.satellites = 216U;
    msg.cog = 0.09857301427637111;
    msg.sog = 0.5145931224983882;
    msg.hdop = 0.21870719543939987;
    msg.vdop = 0.3002647599037447;
    msg.hacc = 0.43328540289233786;
    msg.vacc = 0.5270427052761926;

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
    msg.setTimeStamp(0.1267290648796976);
    msg.setSource(4189U);
    msg.setSourceEntity(141U);
    msg.setDestination(1095U);
    msg.setDestinationEntity(117U);
    msg.validity = 53674U;
    msg.type = 147U;
    msg.utc_year = 13196U;
    msg.utc_month = 126U;
    msg.utc_day = 100U;
    msg.utc_time = 0.2703974145095589;
    msg.lat = 0.41641444269049044;
    msg.lon = 0.933407195357533;
    msg.height = 0.5466099038240972;
    msg.satellites = 99U;
    msg.cog = 0.03424458498659433;
    msg.sog = 0.27312736009454697;
    msg.hdop = 0.14094497474173473;
    msg.vdop = 0.2580740726657228;
    msg.hacc = 0.4517659450490328;
    msg.vacc = 0.15502308853665825;

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
    msg.setTimeStamp(0.043086967568029766);
    msg.setSource(56346U);
    msg.setSourceEntity(163U);
    msg.setDestination(55858U);
    msg.setDestinationEntity(159U);
    msg.time = 0.2873384204104351;
    msg.phi = 0.4597466893922886;
    msg.theta = 0.21706919310338724;
    msg.psi = 0.22559681120496355;
    msg.psi_magnetic = 0.02605463738211633;

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
    msg.setTimeStamp(0.7818757035047306);
    msg.setSource(13984U);
    msg.setSourceEntity(201U);
    msg.setDestination(63423U);
    msg.setDestinationEntity(3U);
    msg.time = 0.972206646444187;
    msg.phi = 0.2535656013458628;
    msg.theta = 0.7258331302049997;
    msg.psi = 0.4778508805987177;
    msg.psi_magnetic = 0.5574909472844071;

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
    msg.setTimeStamp(0.47013686677167377);
    msg.setSource(32768U);
    msg.setSourceEntity(228U);
    msg.setDestination(60507U);
    msg.setDestinationEntity(15U);
    msg.time = 0.6786834780908568;
    msg.phi = 0.08616479117494813;
    msg.theta = 0.3365712079059169;
    msg.psi = 0.5529864058679036;
    msg.psi_magnetic = 0.5057227660491372;

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
    msg.setTimeStamp(0.43400872936565316);
    msg.setSource(8299U);
    msg.setSourceEntity(133U);
    msg.setDestination(58718U);
    msg.setDestinationEntity(173U);
    msg.time = 0.8099963709372413;
    msg.x = 0.08701889541067309;
    msg.y = 0.9457970961639248;
    msg.z = 0.4718959470203846;
    msg.timestep = 0.25553973749443215;

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
    msg.setTimeStamp(0.9216630031811395);
    msg.setSource(58887U);
    msg.setSourceEntity(43U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(42U);
    msg.time = 0.9971714179366951;
    msg.x = 0.8617303373937878;
    msg.y = 0.22118639432181375;
    msg.z = 0.7124318874352502;
    msg.timestep = 0.8118063189362398;

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
    msg.setTimeStamp(0.08101124202584009);
    msg.setSource(6944U);
    msg.setSourceEntity(98U);
    msg.setDestination(23022U);
    msg.setDestinationEntity(229U);
    msg.time = 0.771718179182357;
    msg.x = 0.10210831709799106;
    msg.y = 0.6706968705596533;
    msg.z = 0.7666753953284812;
    msg.timestep = 0.6090367088112186;

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
    msg.setTimeStamp(0.8349858752249031);
    msg.setSource(24763U);
    msg.setSourceEntity(34U);
    msg.setDestination(33686U);
    msg.setDestinationEntity(189U);
    msg.time = 0.7263541342683024;
    msg.x = 0.6769020128893045;
    msg.y = 0.06247436284319863;
    msg.z = 0.05880621719388657;

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
    msg.setTimeStamp(0.46051248686604673);
    msg.setSource(55688U);
    msg.setSourceEntity(136U);
    msg.setDestination(22918U);
    msg.setDestinationEntity(102U);
    msg.time = 0.12694895417795093;
    msg.x = 0.07147499658960221;
    msg.y = 0.7096072161717134;
    msg.z = 0.44587084900322815;

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
    msg.setTimeStamp(0.45347071904781566);
    msg.setSource(9674U);
    msg.setSourceEntity(182U);
    msg.setDestination(32773U);
    msg.setDestinationEntity(26U);
    msg.time = 0.21804993655392346;
    msg.x = 0.7957234872521077;
    msg.y = 0.8207711700203063;
    msg.z = 0.45120791552049255;

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
    msg.setTimeStamp(0.4004837047604277);
    msg.setSource(60829U);
    msg.setSourceEntity(63U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(7U);
    msg.time = 0.5202105268416938;
    msg.x = 0.3683969204287745;
    msg.y = 0.9461794237674646;
    msg.z = 0.5931194758458685;

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
    msg.setTimeStamp(0.9724634198834847);
    msg.setSource(12481U);
    msg.setSourceEntity(90U);
    msg.setDestination(33376U);
    msg.setDestinationEntity(123U);
    msg.time = 0.464723156678324;
    msg.x = 0.3534349879463493;
    msg.y = 0.9571664234764068;
    msg.z = 0.21535496846238844;

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
    msg.setTimeStamp(0.586824549885745);
    msg.setSource(2611U);
    msg.setSourceEntity(8U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(98U);
    msg.time = 0.0065600439379606135;
    msg.x = 0.8848796916873921;
    msg.y = 0.4089693029867979;
    msg.z = 0.6385539800433978;

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
    msg.setTimeStamp(0.6350607525711803);
    msg.setSource(16896U);
    msg.setSourceEntity(101U);
    msg.setDestination(7572U);
    msg.setDestinationEntity(39U);
    msg.time = 0.4583930350814669;
    msg.x = 0.8411622236193294;
    msg.y = 0.7595458872463927;
    msg.z = 0.02358557270914785;

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
    msg.setTimeStamp(0.8175884494214022);
    msg.setSource(62543U);
    msg.setSourceEntity(51U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(148U);
    msg.time = 0.5885359157703469;
    msg.x = 0.7495181025608;
    msg.y = 0.3698264759939516;
    msg.z = 0.6514408727517285;

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
    msg.setTimeStamp(0.8253989186751279);
    msg.setSource(40552U);
    msg.setSourceEntity(15U);
    msg.setDestination(27502U);
    msg.setDestinationEntity(159U);
    msg.time = 0.3992994858334642;
    msg.x = 0.12233278856321173;
    msg.y = 0.18038694199804672;
    msg.z = 0.4945927302136751;

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
    msg.setTimeStamp(0.22622845052530272);
    msg.setSource(48047U);
    msg.setSourceEntity(179U);
    msg.setDestination(14457U);
    msg.setDestinationEntity(10U);
    msg.validity = 140U;
    msg.x = 0.896321636265661;
    msg.y = 0.09223069180833765;
    msg.z = 0.8398514993894318;

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
    msg.setTimeStamp(0.3797310010707523);
    msg.setSource(34070U);
    msg.setSourceEntity(115U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(85U);
    msg.validity = 241U;
    msg.x = 0.8770153086570165;
    msg.y = 0.9321231347773052;
    msg.z = 0.8016655125771274;

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
    msg.setTimeStamp(0.2519264235754358);
    msg.setSource(28574U);
    msg.setSourceEntity(244U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(222U);
    msg.validity = 80U;
    msg.x = 0.764224665655245;
    msg.y = 0.15392791683820373;
    msg.z = 0.30932859587726447;

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
    msg.setTimeStamp(0.17480009486348502);
    msg.setSource(8221U);
    msg.setSourceEntity(26U);
    msg.setDestination(3019U);
    msg.setDestinationEntity(167U);
    msg.validity = 8U;
    msg.x = 0.8824074489293648;
    msg.y = 0.6666822579442001;
    msg.z = 0.6317148140832792;

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
    msg.setTimeStamp(0.6235706933021214);
    msg.setSource(43467U);
    msg.setSourceEntity(111U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(73U);
    msg.validity = 123U;
    msg.x = 0.8306634104492855;
    msg.y = 0.13799257410058574;
    msg.z = 0.29078137990902553;

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
    msg.setTimeStamp(0.7209301109679837);
    msg.setSource(42766U);
    msg.setSourceEntity(30U);
    msg.setDestination(55139U);
    msg.setDestinationEntity(83U);
    msg.validity = 159U;
    msg.x = 0.6973114467470674;
    msg.y = 0.6015726769793254;
    msg.z = 0.23405727111032004;

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
    msg.setTimeStamp(0.9982975184131918);
    msg.setSource(63908U);
    msg.setSourceEntity(95U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(48U);
    msg.time = 0.21843183352092987;
    msg.x = 0.18628036285675387;
    msg.y = 0.9986305859018106;
    msg.z = 0.572532634845724;

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
    msg.setTimeStamp(0.5689621174204631);
    msg.setSource(35024U);
    msg.setSourceEntity(78U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(122U);
    msg.time = 0.8073873256339291;
    msg.x = 0.029565441264040815;
    msg.y = 0.6943566115257512;
    msg.z = 0.9899875024251621;

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
    msg.setTimeStamp(0.020267043840259014);
    msg.setSource(11257U);
    msg.setSourceEntity(95U);
    msg.setDestination(43382U);
    msg.setDestinationEntity(32U);
    msg.time = 0.07289486352536956;
    msg.x = 0.41368941529490433;
    msg.y = 0.06660922599945351;
    msg.z = 0.7881322339731781;

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
    msg.setTimeStamp(0.48232418477130534);
    msg.setSource(22682U);
    msg.setSourceEntity(13U);
    msg.setDestination(36713U);
    msg.setDestinationEntity(143U);
    msg.validity = 175U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4947268944462445;
    tmp_msg_0.beam_height = 0.9228268141599394;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9228085732972964;

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
    msg.setTimeStamp(0.3290850470590889);
    msg.setSource(60180U);
    msg.setSourceEntity(150U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(145U);
    msg.validity = 72U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.21896219745154533;
    tmp_msg_0.y = 0.9368429094534233;
    tmp_msg_0.z = 0.7692077771483734;
    tmp_msg_0.phi = 0.13607071254110203;
    tmp_msg_0.theta = 0.16416462007631272;
    tmp_msg_0.psi = 0.4268814272258774;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7810414181456067;

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
    msg.setTimeStamp(0.09895352136776026);
    msg.setSource(64998U);
    msg.setSourceEntity(49U);
    msg.setDestination(10779U);
    msg.setDestinationEntity(219U);
    msg.validity = 171U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6136362973566472;
    tmp_msg_0.beam_height = 0.35566766844226505;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.004788746129739008;

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
    msg.setTimeStamp(0.8902758750908485);
    msg.setSource(36248U);
    msg.setSourceEntity(215U);
    msg.setDestination(7901U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8623613249763978;

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
    msg.setTimeStamp(0.7585057503165376);
    msg.setSource(26734U);
    msg.setSourceEntity(17U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4493495769829662;

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
    msg.setTimeStamp(0.20660767993735674);
    msg.setSource(3554U);
    msg.setSourceEntity(143U);
    msg.setDestination(23676U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9363126391094583;

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
    msg.setTimeStamp(0.07317446439025743);
    msg.setSource(21018U);
    msg.setSourceEntity(4U);
    msg.setDestination(45341U);
    msg.setDestinationEntity(195U);
    msg.value = 0.25077520725193003;

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
    msg.setTimeStamp(0.38924055092202237);
    msg.setSource(2749U);
    msg.setSourceEntity(207U);
    msg.setDestination(61674U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2408886105571343;

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
    msg.setTimeStamp(0.5078133220897713);
    msg.setSource(1417U);
    msg.setSourceEntity(42U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(88U);
    msg.value = 0.15590421041973312;

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
    msg.setTimeStamp(0.9928109298009257);
    msg.setSource(38972U);
    msg.setSourceEntity(221U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(102U);
    msg.value = 0.09358871525609003;

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
    msg.setTimeStamp(0.8402029121118669);
    msg.setSource(20671U);
    msg.setSourceEntity(246U);
    msg.setDestination(57790U);
    msg.setDestinationEntity(34U);
    msg.value = 0.34824540019051;

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
    msg.setTimeStamp(0.20232723811026498);
    msg.setSource(12630U);
    msg.setSourceEntity(235U);
    msg.setDestination(19576U);
    msg.setDestinationEntity(45U);
    msg.value = 0.46426474498851444;

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
    msg.setTimeStamp(0.9096042526828678);
    msg.setSource(44140U);
    msg.setSourceEntity(28U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(250U);
    msg.value = 0.1925205337996504;

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
    msg.setTimeStamp(0.6297255571230302);
    msg.setSource(63520U);
    msg.setSourceEntity(7U);
    msg.setDestination(8718U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8979133336330419;

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
    msg.setTimeStamp(0.8799728725973304);
    msg.setSource(9436U);
    msg.setSourceEntity(152U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(202U);
    msg.value = 0.02660888710134457;

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
    msg.setTimeStamp(0.8905911983894647);
    msg.setSource(46335U);
    msg.setSourceEntity(90U);
    msg.setDestination(39473U);
    msg.setDestinationEntity(44U);
    msg.value = 0.020013343307807463;

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
    msg.setTimeStamp(0.6636934377892912);
    msg.setSource(6736U);
    msg.setSourceEntity(215U);
    msg.setDestination(45153U);
    msg.setDestinationEntity(66U);
    msg.value = 0.3574592589190483;

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
    msg.setTimeStamp(0.494849944652768);
    msg.setSource(11488U);
    msg.setSourceEntity(217U);
    msg.setDestination(44681U);
    msg.setDestinationEntity(66U);
    msg.value = 0.23327910818462316;

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
    msg.setTimeStamp(0.37993495881801165);
    msg.setSource(54454U);
    msg.setSourceEntity(205U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9254244947554608;

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
    msg.setTimeStamp(0.7649342799609214);
    msg.setSource(17670U);
    msg.setSourceEntity(148U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(61U);
    msg.value = 0.07795592035536014;

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
    msg.setTimeStamp(0.4867849140621471);
    msg.setSource(21456U);
    msg.setSourceEntity(42U);
    msg.setDestination(52818U);
    msg.setDestinationEntity(209U);
    msg.value = 0.06871513810105978;

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
    msg.setTimeStamp(0.15988121680163014);
    msg.setSource(54009U);
    msg.setSourceEntity(116U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5487521570646806;

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
    msg.setTimeStamp(0.3322657345591884);
    msg.setSource(52176U);
    msg.setSourceEntity(85U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(144U);
    msg.value = 0.7802586460839027;

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
    msg.setTimeStamp(0.2143292596490073);
    msg.setSource(34368U);
    msg.setSourceEntity(22U);
    msg.setDestination(30144U);
    msg.setDestinationEntity(105U);
    msg.value = 0.27190977212885703;

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
    msg.setTimeStamp(0.6111955253938363);
    msg.setSource(43745U);
    msg.setSourceEntity(125U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(86U);
    msg.value = 0.3664618313556012;

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
    msg.setTimeStamp(0.4919550539520595);
    msg.setSource(47328U);
    msg.setSourceEntity(85U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(150U);
    msg.value = 0.6320599231890712;

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
    msg.setTimeStamp(0.28633285902603944);
    msg.setSource(12731U);
    msg.setSourceEntity(91U);
    msg.setDestination(61131U);
    msg.setDestinationEntity(133U);
    msg.value = 0.02580342553700643;

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
    msg.setTimeStamp(0.37352355595678255);
    msg.setSource(37879U);
    msg.setSourceEntity(16U);
    msg.setDestination(31155U);
    msg.setDestinationEntity(133U);
    msg.direction = 0.5371235623370287;
    msg.speed = 0.08585418451497584;
    msg.turbulence = 0.06263840118547637;

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
    msg.setTimeStamp(0.12390152043245051);
    msg.setSource(14094U);
    msg.setSourceEntity(11U);
    msg.setDestination(52930U);
    msg.setDestinationEntity(197U);
    msg.direction = 0.9309902160601108;
    msg.speed = 0.09185671114593252;
    msg.turbulence = 0.33361924694500056;

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
    msg.setTimeStamp(0.019723721334529154);
    msg.setSource(3633U);
    msg.setSourceEntity(37U);
    msg.setDestination(24073U);
    msg.setDestinationEntity(33U);
    msg.direction = 0.44909698248430197;
    msg.speed = 0.23551733871091463;
    msg.turbulence = 0.6346929509535967;

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
    msg.setTimeStamp(0.05472769189596316);
    msg.setSource(11388U);
    msg.setSourceEntity(128U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(167U);
    msg.value = 0.774711836011746;

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
    msg.setTimeStamp(0.07208915395522564);
    msg.setSource(26939U);
    msg.setSourceEntity(69U);
    msg.setDestination(16681U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8530954629609838;

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
    msg.setTimeStamp(0.6850170181153462);
    msg.setSource(1637U);
    msg.setSourceEntity(125U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(224U);
    msg.value = 0.5051468155351214;

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
    msg.setTimeStamp(0.10913593421530854);
    msg.setSource(28174U);
    msg.setSourceEntity(152U);
    msg.setDestination(14666U);
    msg.setDestinationEntity(137U);
    msg.value.assign("OXKOMGCZSLTDXESJOWJITIRFBIZKKFUQBDEIVWIFRJSXUFNVQAMBKTZBGBORLJDELSVZKJSHDWZAXKUAJIPAFHHAMGXHPWATFRUXQRVCJUVSZLDLCWRVCXCVLBCWHOYBNBCQNFMHBKLDNMYQVQRQDDEQFPCYPPPOGJGAYVDQYBTQMUCXTNZUFIGOKTLHGSZSARYNGNXFKYUEWSZOVNNRPXAPMEANWKTETISGTWPEYJHULGOOMIDCWYHJR");

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
    msg.setTimeStamp(0.35808348688225355);
    msg.setSource(61140U);
    msg.setSourceEntity(88U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(187U);
    msg.value.assign("LBRDUWDKJAIVSIYHKMZHFEFPXGCNHSCPVLPKQNPVSSFDJDFIAQVLFAYHXZSCAMQOQQIYZTSLRKLFNFNWKSHXIJRRYEITEJPKMPONRODSJMMGCPDTXMUBUYOMVGZJXVBDNBLWCJREDINZPNUXUBOXUHSHXLGTJZQNTVMQTTLHXGGUEDLTRVMAIWEYWOQUJTQPARFRYICWAYOYZFWKOHYDTFARIZUHBQPBBZGEELBGOEWA");

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
    msg.setTimeStamp(0.18826104106613173);
    msg.setSource(55123U);
    msg.setSourceEntity(79U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(189U);
    msg.value.assign("HCUGGZNBNGOFQXINUVQVVNQWZTQMEIAIHSQLGYOAJJFAFMNCAPNBRJFUVPDENHUWKDXDAUDPQLKLBMKDTHMQMEBWZJSSRLYPIHVDNJHCJXEBJPBYINZGIOWFBVRZYSDODRTVQJOGOIKWGSXHXRMTKZISMXXXTAOSGZCKYCPJTYZWCWPWIARLFZBPBSDCWFOLYHPVDKNACUTEOFGMRUQRCAYXFVEUSSYVWURK");

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
    msg.setTimeStamp(0.24629239332174813);
    msg.setSource(43234U);
    msg.setSourceEntity(238U);
    msg.setDestination(12596U);
    msg.setDestinationEntity(227U);
    const char tmp_msg_0[] = {103, 79, 123, 17, -24, 124, -47, -43, -8, -45, 61, -118, -60, 109, 24, -71, 71, -114, -120, -12, -11, -120, -29, 112, 59, -110, 75, 44, -47, 25, -88, -20, 39, 98};
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
    msg.setTimeStamp(0.37206076191939996);
    msg.setSource(12131U);
    msg.setSourceEntity(135U);
    msg.setDestination(49364U);
    msg.setDestinationEntity(23U);
    const char tmp_msg_0[] = {41, -53, -25, -1, -36, -36, 56, 56, -2, 108, -10, 74, -65, 71, 17, 123, -41, 72, 57, 14, 78, -76, -16, -22, 78, 49, -90, 4, 55, 50, -40, 23, -62, 73, 16, 99, 103, -9, 43, -82, -13, 90, 101, -63, -118, -90, 116, 48, 61, -112};
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
    msg.setTimeStamp(0.9204131884562038);
    msg.setSource(52557U);
    msg.setSourceEntity(136U);
    msg.setDestination(24016U);
    msg.setDestinationEntity(195U);
    const char tmp_msg_0[] = {47, -58, -2, 92, 91, 68, 23, -128, -1, -12, -19, 77, -64, 2, 32, -67, 116, 113, 87, -29, -13, 75, 78, 114, -3, 26, 89, -95, 17, -85, 21, -46, 39, 17, 12, 15, -95, -40, -82, 64, -100, -13, 85, -37, 104, 73, 81, 0, -53, -87, 24, 71, -36, -59, 86, 68, -106, 97, 125, 77, 121, 75, 66, 111, 58, 105, 7, 32, 33, 85, -107, -58, -28, 82, -97, -111, -35, 109, -81, -6, -101, 68, -123, -74, 100, -83, -37, -91, 6};
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
    msg.setTimeStamp(0.8133373693818893);
    msg.setSource(42721U);
    msg.setSourceEntity(61U);
    msg.setDestination(36138U);
    msg.setDestinationEntity(197U);
    msg.type = 94U;
    msg.frequency = 55595469U;
    msg.min_range = 56214U;
    msg.max_range = 41410U;
    msg.bits_per_point = 208U;
    msg.scale_factor = 0.25088162891392807;
    const char tmp_msg_0[] = {-44, -74, -3, 83, 119, -90, -61, -17, -75, -108, 48, 96, -83, 124, -37, 98, 125, 10, -14, -81, 91, -127, -49, 61, -38, -61, -47, -50, -103, 20, 93, -54, 122, 5, -83, 2, 15, -89, -88, 9, -31, 40, -119, -57, 109, 126, 9, -60, 121, -115, 116, -88, 60, 66, -68, -18, -25, 101, 29, 51, -122, 125, -25, -26, 17, 20, 14, 21, 125, 95, 84, -25, 30, 51, 119, -16, 10, 61, -8, 33, 21, 25, -10, -111, 7, -55, 2, -95, 70, 57, 105, 68, -117, -67, 10, 76, -5, 40, 36, -114, -5};
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
    msg.setTimeStamp(0.3866477857009405);
    msg.setSource(26638U);
    msg.setSourceEntity(117U);
    msg.setDestination(9173U);
    msg.setDestinationEntity(4U);
    msg.type = 229U;
    msg.frequency = 3580105404U;
    msg.min_range = 53159U;
    msg.max_range = 58461U;
    msg.bits_per_point = 112U;
    msg.scale_factor = 0.2548984345966636;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.018953386339387035;
    tmp_msg_0.beam_height = 0.6469964971086872;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-104, 9, -15, -109, -51, -56, 118, -60, -98, 66, -21, -49, -36, 70, -75, -40, 103, 19, -5, -124, 93, 63, -21, 88, 4, -33, -77, -53, 16, 68, -24, 123, 108, 32, 114, 9, -111, -14, -19, -106, 5, -120, 125, 48, 33, 54, -46, -7, -71, 108, 90, 58, 117, -121, -2, 68, 103, 15, -57, 76, -27, 22, -95, -37, 17, 5, 81, 36, -117, 65, -55, -6, 94, -42, 77, 72, 9, -16, 21, -53, 116, -52, 59, 121, 114, -101, 37, -16, 105, 66, 21, 67, -86, -50, -50, -84, -106, -2, 20, 80, 20, -43, -111, -56, -57, 106, -5, -8, -64, 36, -29, -65, -64, 30, -19, 46, 29, -104, -122, -100, 111, -15, 93, 112, -86, 118, 122, -96, -62, -90, 69, 114, 54, -11, -16, -1, 70, -23, -22, 61, 116, 15, -4, -114, -4, -122, 29, 67, -49, -84, 67, -33, 33, -23, -45, 21, 63, -20, -14, -2, 123, 31, 102, -111, 70, -79, -105, 44, 3, 114, -87, 21, 83, 25, 101, -123, -88, 59, 66, -68, -106, -19, -59, 22, -59, 23, -37, -102, 95, 11, -73, -76, -52, -67, 15, 2, 10, -5, -20, 43, -63, -83, -97, -97, 3, 101, 99, -36, 124, -10, 8, 13};
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
    msg.setTimeStamp(0.23961627211425407);
    msg.setSource(32701U);
    msg.setSourceEntity(221U);
    msg.setDestination(19319U);
    msg.setDestinationEntity(84U);
    msg.type = 108U;
    msg.frequency = 3625898787U;
    msg.min_range = 28910U;
    msg.max_range = 39063U;
    msg.bits_per_point = 87U;
    msg.scale_factor = 0.40707247055409534;
    const char tmp_msg_0[] = {-5, -33, -88, 48, -109, 62, 77, 75, -119, 11, -49, 46, -82, -105, -81, -118, 73, 60, 47, 25, 120, -69, 50, 21, 73, 7, -124, 70, 64, 17, 99, 101, -118, 39, 97, 102, -66, -110, -16, -117, 121, 70, 48, 97, 115, 60, 107, 5, 25, 43, -103, 80, -87, 114, -15, -93, 6, 117, 48, -57, -5, 47, 93, 95, 126, 43, -25, -92, 123, 82, 32, 28, 26, -82, -67, -59, -110, -104, 105, -97, -128, 71, -109, 112, -41, -48, 70, 80, -36, -16, -2, 113, -15, 111, 123, 28, 29, 26, 16, -78, -119, 54, -16, -61, 3, 121, -22, 111, -43, -28, -19, -79, -5, 92, -120, -103, -113, -80, 50, -19, 81, 37, 8, 4, -85, 4, -14, 13, -110, 3, -103, 65, -110, 45, 113, -109, -53, 112, -44, -60, -128, 108, 54, -1, 115, -99, 10, -19, 6, 54, 69, 75, 35, 48, -11, 114, -51, -68, -53, 125, 72, 11, -53, -64, 95, -65, 79, -7, 66, -113, 43, 18, 2, -33, -33, 106, 89, 105, -84, 35, -111, -39, 101, -40, -96, 30, -101, 98, 113, 87, 104, -10, -106, 72, -106, 99, -30, -70, -56, 10};
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
    msg.setTimeStamp(0.9076350644969158);
    msg.setSource(49028U);
    msg.setSourceEntity(151U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.27943889650649345);
    msg.setSource(15035U);
    msg.setSourceEntity(245U);
    msg.setDestination(17308U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.7537947554303213);
    msg.setSource(43917U);
    msg.setSourceEntity(103U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.003306109666701973);
    msg.setSource(42439U);
    msg.setSourceEntity(112U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(34U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.3572730043568202);
    msg.setSource(45176U);
    msg.setSourceEntity(53U);
    msg.setDestination(5940U);
    msg.setDestinationEntity(132U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.5278709858356747);
    msg.setSource(22033U);
    msg.setSourceEntity(204U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(83U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.1973250846791228);
    msg.setSource(19918U);
    msg.setSourceEntity(23U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(45U);
    msg.value = 0.19852596925781163;
    msg.confidence = 0.2861332538100114;
    msg.opmodes.assign("AKLGHGCOYLHKRDIORYQHHJENCNQPRQEYOYOSOBJUDCNDEZDKUWWFGNZKXTMJOZATKLRZHDJTKDVMOYCLMIPJYMZPFLTFITBPYGQDWBNXKNRQCFENEJWMXYVBEWFDUPVCXLKXBRPKRJVHEAFRGHOZGCUYAUKIBBVDLAGGAQCABMAMVQSLZJBQSEMMWGZWSTSUOQRWZIUJLXPWWHSTIVHS");

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
    msg.setTimeStamp(0.679473771887514);
    msg.setSource(1346U);
    msg.setSourceEntity(207U);
    msg.setDestination(50378U);
    msg.setDestinationEntity(165U);
    msg.value = 0.4367460969779827;
    msg.confidence = 0.20483727200372892;
    msg.opmodes.assign("IAKYQGOXFVNCXXJWOPIAGQVKAQOZJXLFJNIETXUEMWTQCTHIVCITAHHDLPSZVPSUCEBANSSRZGUPFUDJYIDHEOMMGJFQVCHRCLRTNFHNLFGCDOVLWOAEXVAGRNMOYDTZXMPFPZDQVPYDPNRRWWRYMYDKMGYBKUQIBOVEZK");

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
    msg.setTimeStamp(0.9089736014276608);
    msg.setSource(23979U);
    msg.setSourceEntity(9U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(103U);
    msg.value = 0.12460643403646199;
    msg.confidence = 0.8921737408685383;
    msg.opmodes.assign("CPGRTTVHFGAUDFPSJKUESWTIARAIUUNNMNTGXKHHXZGYYNOSZKUIMEGWGEZRTCJMPXUARUGTZOOGFBBBDSDKZKPIXXAOSOUPHAZMLWBLVCFLEMOWLJXDKHZXJXVQPUSFLVAWFJRQSENPVTBCQCJEGPYIMMPIIMFRHIVDQBVBRKXCNSFMGIQDEHNCJYJTQLTQEBYOZZKQNTXRCZVFWYVORJAICWENLSWEMBQQVALDYYH");

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
    msg.setTimeStamp(0.13571057602131587);
    msg.setSource(43016U);
    msg.setSourceEntity(150U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(182U);
    msg.itow = 3266972889U;
    msg.lat = 0.4507305461030845;
    msg.lon = 0.3839219191088231;
    msg.height_ell = 0.2710655349276956;
    msg.height_sea = 0.3808804940340239;
    msg.hacc = 0.5983572132714239;
    msg.vacc = 0.0847271899728611;
    msg.vel_n = 0.07317068888641998;
    msg.vel_e = 0.9002419425432108;
    msg.vel_d = 0.02770044281881423;
    msg.speed = 0.8087183552214507;
    msg.gspeed = 0.36908585991769494;
    msg.heading = 0.8232510249764509;
    msg.sacc = 0.1872681924666828;
    msg.cacc = 0.3599955572646195;

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
    msg.setTimeStamp(0.13306940579566662);
    msg.setSource(5588U);
    msg.setSourceEntity(60U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(1U);
    msg.itow = 2592521413U;
    msg.lat = 0.7089139164848417;
    msg.lon = 0.25176213856406693;
    msg.height_ell = 0.3853541127910186;
    msg.height_sea = 0.7837989860224186;
    msg.hacc = 0.700975676835548;
    msg.vacc = 0.8215385994978378;
    msg.vel_n = 0.7391450714137648;
    msg.vel_e = 0.3360942149016848;
    msg.vel_d = 0.1525160622431252;
    msg.speed = 0.5273080569684496;
    msg.gspeed = 0.4205886929731556;
    msg.heading = 0.6566432585589752;
    msg.sacc = 0.9117822213032742;
    msg.cacc = 0.5970901049345849;

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
    msg.setTimeStamp(0.9678930302646106);
    msg.setSource(39455U);
    msg.setSourceEntity(63U);
    msg.setDestination(23588U);
    msg.setDestinationEntity(190U);
    msg.itow = 2095189831U;
    msg.lat = 0.7024017102883272;
    msg.lon = 0.0066304443029846505;
    msg.height_ell = 0.2653162163803696;
    msg.height_sea = 0.3634636712509275;
    msg.hacc = 0.5297763146565273;
    msg.vacc = 0.4718221768406693;
    msg.vel_n = 0.038016438068756986;
    msg.vel_e = 0.31580605456404776;
    msg.vel_d = 0.04899812713444762;
    msg.speed = 0.6993264934564619;
    msg.gspeed = 0.8491003965501178;
    msg.heading = 0.6276300071892226;
    msg.sacc = 0.6918204467612183;
    msg.cacc = 0.649103634175094;

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
    msg.setTimeStamp(0.006756255358512653);
    msg.setSource(31200U);
    msg.setSourceEntity(56U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(79U);
    msg.id = 235U;
    msg.value = 0.5447950643045977;

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
    msg.setTimeStamp(0.26800397697040945);
    msg.setSource(23313U);
    msg.setSourceEntity(97U);
    msg.setDestination(50662U);
    msg.setDestinationEntity(0U);
    msg.id = 242U;
    msg.value = 0.24552504201782765;

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
    msg.setTimeStamp(0.010309969103773908);
    msg.setSource(50915U);
    msg.setSourceEntity(200U);
    msg.setDestination(50319U);
    msg.setDestinationEntity(106U);
    msg.id = 21U;
    msg.value = 0.7881713436328334;

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
    msg.setTimeStamp(0.3226632111232799);
    msg.setSource(7964U);
    msg.setSourceEntity(116U);
    msg.setDestination(17178U);
    msg.setDestinationEntity(45U);
    msg.x = 0.8645409215382877;
    msg.y = 0.40985025288056887;
    msg.z = 0.9837600770193193;
    msg.phi = 0.4811256770839649;
    msg.theta = 0.6265937168355183;
    msg.psi = 0.5741937984701581;

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
    msg.setTimeStamp(0.6227157969589683);
    msg.setSource(19603U);
    msg.setSourceEntity(169U);
    msg.setDestination(31760U);
    msg.setDestinationEntity(0U);
    msg.x = 0.6668440534910236;
    msg.y = 0.7869969212474918;
    msg.z = 0.3895227980235769;
    msg.phi = 0.27819461743428286;
    msg.theta = 0.44332987403561763;
    msg.psi = 0.5897011324451228;

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
    msg.setTimeStamp(0.08466651150914084);
    msg.setSource(14136U);
    msg.setSourceEntity(128U);
    msg.setDestination(53281U);
    msg.setDestinationEntity(216U);
    msg.x = 0.2426493708298093;
    msg.y = 0.11583587416899566;
    msg.z = 0.7108286946881479;
    msg.phi = 0.2852628906870476;
    msg.theta = 0.009403216226324895;
    msg.psi = 0.8807545108945027;

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
    msg.setTimeStamp(0.046243752618473466);
    msg.setSource(7622U);
    msg.setSourceEntity(192U);
    msg.setDestination(8998U);
    msg.setDestinationEntity(28U);
    msg.beam_width = 0.514409769598317;
    msg.beam_height = 0.7783275555074488;

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
    msg.setTimeStamp(0.8413951450001689);
    msg.setSource(62318U);
    msg.setSourceEntity(4U);
    msg.setDestination(63929U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.8629220804189545;
    msg.beam_height = 0.8413225034397424;

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
    msg.setTimeStamp(0.6721518803260587);
    msg.setSource(11491U);
    msg.setSourceEntity(166U);
    msg.setDestination(6021U);
    msg.setDestinationEntity(91U);
    msg.beam_width = 0.6949956511233278;
    msg.beam_height = 0.9844838834057874;

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
    msg.setTimeStamp(0.9181384855726908);
    msg.setSource(24094U);
    msg.setSourceEntity(8U);
    msg.setDestination(7080U);
    msg.setDestinationEntity(34U);
    msg.sane = 90U;

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
    msg.setTimeStamp(0.986948409442536);
    msg.setSource(50989U);
    msg.setSourceEntity(248U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(67U);
    msg.sane = 238U;

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
    msg.setTimeStamp(0.3940974620110831);
    msg.setSource(34182U);
    msg.setSourceEntity(30U);
    msg.setDestination(53217U);
    msg.setDestinationEntity(6U);
    msg.sane = 76U;

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
    msg.setTimeStamp(0.492656696342439);
    msg.setSource(40760U);
    msg.setSourceEntity(162U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(86U);
    msg.id = 127U;
    msg.zoom = 250U;
    msg.action = 194U;

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
    msg.setTimeStamp(0.905488596899694);
    msg.setSource(18377U);
    msg.setSourceEntity(239U);
    msg.setDestination(36380U);
    msg.setDestinationEntity(185U);
    msg.id = 91U;
    msg.zoom = 212U;
    msg.action = 15U;

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
    msg.setTimeStamp(0.424683250480409);
    msg.setSource(45076U);
    msg.setSourceEntity(92U);
    msg.setDestination(29018U);
    msg.setDestinationEntity(91U);
    msg.id = 1U;
    msg.zoom = 177U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.3885807480410206);
    msg.setSource(30081U);
    msg.setSourceEntity(116U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(219U);
    msg.id = 147U;
    msg.value = 0.37794483807289214;

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
    msg.setTimeStamp(0.7702056477259599);
    msg.setSource(40156U);
    msg.setSourceEntity(189U);
    msg.setDestination(7389U);
    msg.setDestinationEntity(207U);
    msg.id = 212U;
    msg.value = 0.3972096926063069;

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
    msg.setTimeStamp(0.26366855327228556);
    msg.setSource(46722U);
    msg.setSourceEntity(196U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(249U);
    msg.id = 103U;
    msg.value = 0.1888016674820845;

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
    msg.setTimeStamp(0.8506076590783473);
    msg.setSource(30139U);
    msg.setSourceEntity(195U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(246U);
    msg.id = 130U;
    msg.value = 0.8118086936562805;

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
    msg.setTimeStamp(0.09398543604449161);
    msg.setSource(11034U);
    msg.setSourceEntity(108U);
    msg.setDestination(38551U);
    msg.setDestinationEntity(201U);
    msg.id = 158U;
    msg.value = 0.4467341887341987;

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
    msg.setTimeStamp(0.868108107106771);
    msg.setSource(3417U);
    msg.setSourceEntity(39U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(227U);
    msg.id = 120U;
    msg.value = 0.7521299038284085;

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
    msg.setTimeStamp(0.5300127979258272);
    msg.setSource(21124U);
    msg.setSourceEntity(107U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(214U);
    msg.id = 221U;
    msg.angle = 0.32036221558124167;

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
    msg.setTimeStamp(0.24147806163651953);
    msg.setSource(47247U);
    msg.setSourceEntity(80U);
    msg.setDestination(30028U);
    msg.setDestinationEntity(110U);
    msg.id = 197U;
    msg.angle = 0.7186919735371391;

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
    msg.setTimeStamp(0.5845063322987669);
    msg.setSource(35396U);
    msg.setSourceEntity(168U);
    msg.setDestination(22784U);
    msg.setDestinationEntity(143U);
    msg.id = 35U;
    msg.angle = 0.20365913249758294;

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
    msg.setTimeStamp(0.3957265480569061);
    msg.setSource(24582U);
    msg.setSourceEntity(230U);
    msg.setDestination(57298U);
    msg.setDestinationEntity(11U);
    msg.op = 138U;
    msg.actions.assign("XLVGJKNFXYRFSEZRQLEGTHBGMNVJRIKXLYMAHPSOHLRELGLJZBQKUQVZB");

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
    msg.setTimeStamp(0.6800082971856374);
    msg.setSource(33978U);
    msg.setSourceEntity(109U);
    msg.setDestination(37934U);
    msg.setDestinationEntity(152U);
    msg.op = 20U;
    msg.actions.assign("ZKPFCUJLWVEXCBJYIBEGRJYGRNLVZPXKOSPGNIFLCUWDNBQPWEFHHTMDFRHVAKJQSFBKHGOTPZFSOHXEQCVMPNQVMBNAYIOSLUYTG");

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
    msg.setTimeStamp(0.06506062571552362);
    msg.setSource(61916U);
    msg.setSourceEntity(10U);
    msg.setDestination(26600U);
    msg.setDestinationEntity(6U);
    msg.op = 170U;
    msg.actions.assign("NRTEWABHZGMCNTSGPTNLHCIREYHEABMQAIWUBPGXHGCLMETFRLFNZLLRRWVQVRHGAETXMAPXJBCWDNUQZBAFYTCPYOQKFWZVBIFLEBSUBADJITYIURCGJUYUJSZRFEOTEKBVXSILHMOVQVUCGJKHYVDZKXTIZYDSCDVJMQFALJPAPHWIUDXSJMIINQSDXLYKMUSCONSQVXOKOGOXKPWDOXSNMHPEWK");

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
    msg.setTimeStamp(0.16192523626233113);
    msg.setSource(25877U);
    msg.setSourceEntity(19U);
    msg.setDestination(44852U);
    msg.setDestinationEntity(23U);
    msg.actions.assign("CAPACTCFPDUNXEEGMBKLOSYYWVOQPWAHPBHAUKFTROZLMNORSEGZKPYGAVRWOUPBMUGEXCRMTYTIKZDHRRCQHSVZCNARMZFZMLSMQFOHUFKESNQVAZJBJDOUUUJGSHSRLYJKSETXYLNQTKCMOKAWJXAMVZUHTIIVJLIDIIJGCMIWOZXPNSIBXBWIDDYBVQXKOEFFNYB");

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
    msg.setTimeStamp(0.66958853001248);
    msg.setSource(62220U);
    msg.setSourceEntity(148U);
    msg.setDestination(54090U);
    msg.setDestinationEntity(243U);
    msg.actions.assign("RJUTHKTBRSCRHXWBOSGILMGVSYDCTZKBVFJNRCKIKHSYLKKGPQVXETQAODLUJGUMAUUIHQOXDPOEREGRGJMXBREMUGONWCBSZLMIBQVPWPIZLHYDAWXQMNCZITDTQUESGJALPJEPFEAWYNTQVISSHYKENWPYQAXCWIPYHAOXDFDNNTLFVRPZUORMQJDCIZAMZULXHVKKVUMLX");

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
    msg.setTimeStamp(0.8116910451694733);
    msg.setSource(16896U);
    msg.setSourceEntity(227U);
    msg.setDestination(44338U);
    msg.setDestinationEntity(138U);
    msg.actions.assign("AUQCOFHLGDRXSGVHCJJZOMDYQFPDONRIKATXAGGDTILPEOCQBZYMTUPAWMCQEHYTXVSSNJJOYXPSIRNTRRZIBZSDUAIBRQFYRJMZOXLGTGFLAPDVKVUQIIUSMCWHLWVXJGQODPHPKJIWSUFYEKMYPJNDMBCOLHNVB");

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
    msg.setTimeStamp(0.3762504983502213);
    msg.setSource(34722U);
    msg.setSourceEntity(119U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(98U);
    msg.button = 75U;
    msg.value = 7U;

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
    msg.setTimeStamp(0.4051205550999215);
    msg.setSource(40335U);
    msg.setSourceEntity(94U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(207U);
    msg.button = 228U;
    msg.value = 196U;

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
    msg.setTimeStamp(0.042308801731046675);
    msg.setSource(46346U);
    msg.setSourceEntity(133U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(21U);
    msg.button = 177U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.9811243590057614);
    msg.setSource(9424U);
    msg.setSourceEntity(200U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(212U);
    msg.op = 61U;
    msg.text.assign("FJOBIYMRBVDYSRPUAMGFBEOAYURSEWEAFHYDOZEAUKSWMPBDNGYFIXOIKFNPPPCRMUHVSQESLAOBJGAAOZCPKGOZLIMMICYKWPGJPVLZKLVNTQZMVJXWQVBKVDKTTCUSJCQMQNNGXRHTRHQWXSYWJQUFGNCVLSRMJPZBNLIOIWRHQCTDEXKJAEZROTWDRHIMUYIIKZDLT");

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
    msg.setTimeStamp(0.8390160681470306);
    msg.setSource(6566U);
    msg.setSourceEntity(194U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(41U);
    msg.op = 83U;
    msg.text.assign("DUBTRRSHQTJFPNAENRFOLNBHGZLDXARDBJFGEQCOAIIJQTLKUCYCTUCYIFXMQTUNVETXBFUYDSMWFNEPWQNTVEESPLVXPKYTSKGHEZCVJWHDRYPDXVLKZMMMYYOLFKCZIIBDBMJOHHNESTAIRKWIAGSFAAWIVQGOXAKPOERUCJCBLFLMZMOXJDJORFVWSNKUYUKZXEGMZXSTBHOQSNRCVZVRJWCOYPBXKQ");

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
    msg.setTimeStamp(0.07876945691664017);
    msg.setSource(21329U);
    msg.setSourceEntity(129U);
    msg.setDestination(42947U);
    msg.setDestinationEntity(91U);
    msg.op = 249U;
    msg.text.assign("BAWDUHNRWBAEQIVOMGRKSFLXNSTUXNTMNYGSVDVUCVSKGYHPQRDTKMYZXUFQJOFUBZOGBUPDGY");

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
    msg.setTimeStamp(0.2733908046660286);
    msg.setSource(45641U);
    msg.setSourceEntity(248U);
    msg.setDestination(7954U);
    msg.setDestinationEntity(6U);
    msg.op = 217U;
    msg.time_remain = 0.7109923061223402;
    msg.sched_time = 0.25199696826966467;

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
    msg.setTimeStamp(0.7055946796170278);
    msg.setSource(41280U);
    msg.setSourceEntity(32U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(194U);
    msg.op = 25U;
    msg.time_remain = 0.2079596000436038;
    msg.sched_time = 0.13748387005622764;

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
    msg.setTimeStamp(0.5381297790164364);
    msg.setSource(7788U);
    msg.setSourceEntity(218U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(143U);
    msg.op = 23U;
    msg.time_remain = 0.7056216068772588;
    msg.sched_time = 0.3902801215376227;

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
    msg.setTimeStamp(0.7975588200815513);
    msg.setSource(38154U);
    msg.setSourceEntity(124U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(204U);
    msg.name.assign("SDEKZFOWJJFRSSNBJEBVXWMOKMTUDGTWLCNTKYXKHKYNROEYYQQWPTRNJOZWHPZDIHRZSWIXGVPDXOCPMLSCXGKDCHLQYVWNQOWFDTGXITEVUEYN");
    msg.op = 196U;
    msg.sched_time = 0.17625101556233413;

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
    msg.setTimeStamp(0.7871953352675581);
    msg.setSource(19389U);
    msg.setSourceEntity(184U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LMXMCHEUVWWJDKFPCLYAWKINEDQXKZRZZSIDSIOUXPVHXNVAIQWDFJYEMIUYO");
    msg.op = 241U;
    msg.sched_time = 0.1545296644452704;

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
    msg.setTimeStamp(0.0660439764196471);
    msg.setSource(15783U);
    msg.setSourceEntity(220U);
    msg.setDestination(16648U);
    msg.setDestinationEntity(146U);
    msg.name.assign("RBISSNLXGPOJSRTMHTNLOBTHB");
    msg.op = 47U;
    msg.sched_time = 0.23209422394295698;

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
    msg.setTimeStamp(0.03016581855240108);
    msg.setSource(10299U);
    msg.setSourceEntity(62U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.6097227203340675);
    msg.setSource(24779U);
    msg.setSourceEntity(199U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.03395596665732448);
    msg.setSource(534U);
    msg.setSourceEntity(114U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.35031680408629384);
    msg.setSource(38618U);
    msg.setSourceEntity(213U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(229U);
    msg.name.assign("JCNAKSWGTYVEWDKDNYUGJNZHDUPLDVFSSSWKELBAPGTUVFZTNOUMWOEUBMMENRZIPBTHSBSXZHQYNHZDEMYFHMNXBCXFYLTKJRVQFOAAOMMXKRCIKGUCQIYAYVUFQNCSWJSLDTSRP");
    msg.state = 67U;

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
    msg.setTimeStamp(0.8859565186399557);
    msg.setSource(38703U);
    msg.setSourceEntity(4U);
    msg.setDestination(48910U);
    msg.setDestinationEntity(222U);
    msg.name.assign("KYVZJBUUELVKKWPYIQFYDHRNOAMUKXFDVXMGPYSPOCPQVGTZHCWYJWWTARSHBSOUALOXRTMTYZEERTWGLNZVNFWXQFZPSJDGQIXSNRMYBLMRMHFJDBNABGXHEULPZOQASIKSYIQUJIVMEG");
    msg.state = 80U;

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
    msg.setTimeStamp(0.8758452123521451);
    msg.setSource(9960U);
    msg.setSourceEntity(208U);
    msg.setDestination(63598U);
    msg.setDestinationEntity(138U);
    msg.name.assign("ZTEATGZDCDMRDFNYIMUABKPVXJI");
    msg.state = 150U;

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
    msg.setTimeStamp(0.6912060119044565);
    msg.setSource(1370U);
    msg.setSourceEntity(91U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(148U);
    msg.name.assign("TJEQINDEVBWRRBYYPNHEDDVZVIRSIHVDRJCGORINTHYGZAQGUIQVMRQAXZLMACBMHFOLTAWFTGRNBXQRYQMLM");
    msg.value = 245U;

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
    msg.setTimeStamp(0.8516485943942805);
    msg.setSource(22524U);
    msg.setSourceEntity(20U);
    msg.setDestination(64725U);
    msg.setDestinationEntity(96U);
    msg.name.assign("GVEHLVASCOKNCZUQHHRWYWFCRS");
    msg.value = 28U;

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
    msg.setTimeStamp(0.7750421637283162);
    msg.setSource(50628U);
    msg.setSourceEntity(174U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(210U);
    msg.name.assign("RUGCUQITLSIGOZDCVBZUWUAIIQKJKKMPD");
    msg.value = 233U;

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
    msg.setTimeStamp(0.29387377056550656);
    msg.setSource(64268U);
    msg.setSourceEntity(91U);
    msg.setDestination(28288U);
    msg.setDestinationEntity(201U);
    msg.name.assign("NWDQCMRAWNJIIPVUSLCFCTMLQXDZNEEJXYCLZJUCRPTBFGZEIAGTWWNEYVXGPKRXQJQFVFJYFRWHRMBFPMWSPOXNEJCMCBUDISLIKHPWREAEHJHIHOUUOGAOHJOGAAPUKDMKAYVOFOXNHTGQZKDDXTXZFQNVDNSAZPJFBNGEODKLMVHPBZIZLRYZICXPHLYRWAONQ");

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
    msg.setTimeStamp(0.7986481905941629);
    msg.setSource(1462U);
    msg.setSourceEntity(98U);
    msg.setDestination(53427U);
    msg.setDestinationEntity(94U);
    msg.name.assign("SIXTDPKWKSAJBMYOZQEXPFWYHWVQWQQAWYBDNXYBAPFICEJHAWYMNDKMXOTKVANKQOGIPSZZROEFRHPFLQUXYEFTUWIZVLTGMODNSESENYOA");

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
    msg.setTimeStamp(0.055470577061494386);
    msg.setSource(64620U);
    msg.setSourceEntity(175U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(47U);
    msg.name.assign("UDKREJNKJQJDLQFVXYCQQYSNTUCHPHNYMFOBKRQXRHFLMIBQMEZSRACTGEMDNWPRBFJALXTHIXYHCCXVDYNMUVEMHOIXULWRBPTNSGTKVNFUTDZGIBEUHWRNJOHDRSOCASFAAHDDPIZZSLPGAOXAXRYATCWUM");

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
    msg.setTimeStamp(0.37856867293184215);
    msg.setSource(24236U);
    msg.setSourceEntity(63U);
    msg.setDestination(3465U);
    msg.setDestinationEntity(138U);
    msg.name.assign("PLDMPYSXKWBTWZRHQGYIHAFPNDXNZBFPIECTNNLJSZDLWUCHDUBVRTERVORHXFOHSMSMBELGEKXTSUTUIBFLYCNTCNIMTVEGNQYWQPBZEEOPIAKAUSFVZTDRKQVWCTQQDDPKSKBAUMVMYCXAFCKEOCODVEGM");
    msg.value = 113U;

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
    msg.setTimeStamp(0.7469192482265279);
    msg.setSource(21251U);
    msg.setSourceEntity(124U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(75U);
    msg.name.assign("HNKCYCKDGHMEURPJOVCQKJXIZQQLDSRWDWXYITVKWRKVFXBCL");
    msg.value = 70U;

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
    msg.setTimeStamp(0.13132013089431405);
    msg.setSource(40166U);
    msg.setSourceEntity(147U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JFTZNKXJPSLCVJRDTVGJTVDXWZJWGPERBCUXOPPCPQWUGEDQFEADFTUAENOR");
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
    IMC::SetPWM msg;
    msg.setTimeStamp(0.924014252116751);
    msg.setSource(26709U);
    msg.setSourceEntity(211U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(7U);
    msg.id = 93U;
    msg.period = 2799278897U;
    msg.duty_cycle = 413297751U;

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
    msg.setTimeStamp(0.9780890494987894);
    msg.setSource(40643U);
    msg.setSourceEntity(2U);
    msg.setDestination(1304U);
    msg.setDestinationEntity(248U);
    msg.id = 62U;
    msg.period = 1600440422U;
    msg.duty_cycle = 1069558542U;

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
    msg.setTimeStamp(0.030342174526524324);
    msg.setSource(51382U);
    msg.setSourceEntity(22U);
    msg.setDestination(24837U);
    msg.setDestinationEntity(147U);
    msg.id = 202U;
    msg.period = 1781026919U;
    msg.duty_cycle = 3759794693U;

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
    msg.setTimeStamp(0.5662350297623987);
    msg.setSource(1071U);
    msg.setSourceEntity(105U);
    msg.setDestination(11094U);
    msg.setDestinationEntity(82U);
    msg.id = 12U;
    msg.period = 4003396269U;
    msg.duty_cycle = 1758209013U;

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
    msg.setTimeStamp(0.8299341352753441);
    msg.setSource(1634U);
    msg.setSourceEntity(198U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(234U);
    msg.id = 116U;
    msg.period = 494911025U;
    msg.duty_cycle = 1957242902U;

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
    msg.setTimeStamp(0.995494086455931);
    msg.setSource(31305U);
    msg.setSourceEntity(16U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(146U);
    msg.id = 46U;
    msg.period = 1782134491U;
    msg.duty_cycle = 2586678356U;

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
    msg.setTimeStamp(0.5018377954374864);
    msg.setSource(22209U);
    msg.setSourceEntity(73U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.9381705180009061;
    msg.lon = 0.565851362014442;
    msg.height = 0.14034041142933162;
    msg.x = 0.3053690934682356;
    msg.y = 0.4342313460430619;
    msg.z = 0.38671470273485686;
    msg.phi = 0.4799673072910752;
    msg.theta = 0.17889863874021372;
    msg.psi = 0.09172351313738614;
    msg.u = 0.7497898385779105;
    msg.v = 0.7122119218742038;
    msg.w = 0.30768400496487014;
    msg.vx = 0.28342515662487744;
    msg.vy = 0.07194627623484018;
    msg.vz = 0.7232803621199922;
    msg.p = 0.4343943597376787;
    msg.q = 0.8509491663686183;
    msg.r = 0.9215597099066513;
    msg.depth = 0.4289271033304919;
    msg.alt = 0.3227106341690884;

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
    msg.setTimeStamp(0.4008347498112289);
    msg.setSource(62152U);
    msg.setSourceEntity(49U);
    msg.setDestination(13184U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.7251108228452686;
    msg.lon = 0.47478552171090727;
    msg.height = 0.4125465094649502;
    msg.x = 0.2009954306667029;
    msg.y = 0.9521097239595564;
    msg.z = 0.6425288113729224;
    msg.phi = 0.6481136981146516;
    msg.theta = 0.18951410703159877;
    msg.psi = 0.3638631354508025;
    msg.u = 0.12807219477550014;
    msg.v = 0.7143483565582134;
    msg.w = 0.6672474039810253;
    msg.vx = 0.9815470365368161;
    msg.vy = 0.9548610775021344;
    msg.vz = 0.13587134451807792;
    msg.p = 0.04370759875940622;
    msg.q = 0.8975788107500298;
    msg.r = 0.438949713105127;
    msg.depth = 0.39890897761219235;
    msg.alt = 0.006225862513742353;

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
    msg.setTimeStamp(0.7675428573544629);
    msg.setSource(10772U);
    msg.setSourceEntity(152U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.3001211880092173;
    msg.lon = 0.615014902324497;
    msg.height = 0.2129317895916487;
    msg.x = 0.3856549700435984;
    msg.y = 0.29935462244995603;
    msg.z = 0.49406258066848663;
    msg.phi = 0.8211297678757935;
    msg.theta = 0.34009233743004574;
    msg.psi = 0.19276787336027346;
    msg.u = 0.5867493066248781;
    msg.v = 0.6771001741241466;
    msg.w = 0.6170051369305096;
    msg.vx = 0.09219926036669968;
    msg.vy = 0.8748561134334789;
    msg.vz = 0.43399049451652605;
    msg.p = 0.9292169673183909;
    msg.q = 0.8449129154206039;
    msg.r = 0.8501812859073041;
    msg.depth = 0.8220255625835969;
    msg.alt = 0.6083537789616872;

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
    msg.setTimeStamp(0.05798520249677408);
    msg.setSource(35736U);
    msg.setSourceEntity(246U);
    msg.setDestination(42107U);
    msg.setDestinationEntity(96U);
    msg.x = 0.5901706800313351;
    msg.y = 0.9207416763061617;
    msg.z = 0.5020397850684504;

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
    msg.setTimeStamp(0.2452009898156119);
    msg.setSource(46748U);
    msg.setSourceEntity(223U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(83U);
    msg.x = 0.8515184176099021;
    msg.y = 0.8396703730826512;
    msg.z = 0.5064727600539284;

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
    msg.setTimeStamp(0.6523577322595976);
    msg.setSource(13802U);
    msg.setSourceEntity(182U);
    msg.setDestination(808U);
    msg.setDestinationEntity(64U);
    msg.x = 0.25832378968039327;
    msg.y = 0.25211749879110057;
    msg.z = 0.4169177296002239;

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
    msg.setTimeStamp(0.5435511910044741);
    msg.setSource(64035U);
    msg.setSourceEntity(14U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8188307764326752;

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
    msg.setTimeStamp(0.20310998001562341);
    msg.setSource(26827U);
    msg.setSourceEntity(119U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(79U);
    msg.value = 0.11521638087637998;

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
    msg.setTimeStamp(0.46565193164227026);
    msg.setSource(29439U);
    msg.setSourceEntity(48U);
    msg.setDestination(21439U);
    msg.setDestinationEntity(180U);
    msg.value = 0.14381109392311864;

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
    msg.setTimeStamp(0.8382855043651368);
    msg.setSource(58856U);
    msg.setSourceEntity(96U);
    msg.setDestination(3474U);
    msg.setDestinationEntity(93U);
    msg.value = 0.19906585195880233;

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
    msg.setTimeStamp(0.8686076512361945);
    msg.setSource(54950U);
    msg.setSourceEntity(214U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(119U);
    msg.value = 0.6739739410620048;

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
    msg.setTimeStamp(0.03659382274008316);
    msg.setSource(30357U);
    msg.setSourceEntity(73U);
    msg.setDestination(47560U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5831057744409458;

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
    msg.setTimeStamp(0.7586485414961511);
    msg.setSource(51616U);
    msg.setSourceEntity(154U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(213U);
    msg.x = 0.4073044601936101;
    msg.y = 0.6765564095534209;
    msg.z = 0.3655567822309773;
    msg.phi = 0.47582381767357107;
    msg.theta = 0.8669606889227497;
    msg.psi = 0.7891480989098667;
    msg.p = 0.7024121839568711;
    msg.q = 0.5023179249740076;
    msg.r = 0.3625184893980483;
    msg.u = 0.28810293185799785;
    msg.v = 0.4656698226708925;
    msg.w = 0.2054307933651196;
    msg.bias_psi = 0.9582924913477009;
    msg.bias_r = 0.7540606688394844;

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
    msg.setTimeStamp(0.15930147579119314);
    msg.setSource(27695U);
    msg.setSourceEntity(155U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(15U);
    msg.x = 0.5485591848759185;
    msg.y = 0.0651481054095091;
    msg.z = 0.5050250814013396;
    msg.phi = 0.08584080521281612;
    msg.theta = 0.8137474135928632;
    msg.psi = 0.14242211760289913;
    msg.p = 0.41608070324037194;
    msg.q = 0.6511927007525864;
    msg.r = 0.9571239337095316;
    msg.u = 0.9795931989410555;
    msg.v = 0.8248097900709666;
    msg.w = 0.29068594840439754;
    msg.bias_psi = 0.8733067518133841;
    msg.bias_r = 0.7205881271213529;

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
    msg.setTimeStamp(0.25639392460601396);
    msg.setSource(19316U);
    msg.setSourceEntity(185U);
    msg.setDestination(16019U);
    msg.setDestinationEntity(83U);
    msg.x = 0.7910629130022651;
    msg.y = 0.7800997942537017;
    msg.z = 0.6794691989017048;
    msg.phi = 0.6445862606213041;
    msg.theta = 0.1569600713764847;
    msg.psi = 0.5795160560412332;
    msg.p = 0.30587559339563963;
    msg.q = 0.7115531319577694;
    msg.r = 0.4599803575268493;
    msg.u = 0.7924731069271156;
    msg.v = 0.9653437479199407;
    msg.w = 0.9287211102417376;
    msg.bias_psi = 0.6654599769179499;
    msg.bias_r = 0.8730581447115688;

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
    msg.setTimeStamp(0.21030769552294137);
    msg.setSource(22951U);
    msg.setSourceEntity(139U);
    msg.setDestination(59225U);
    msg.setDestinationEntity(44U);
    msg.bias_psi = 0.6863638619034034;
    msg.bias_r = 0.9699431377722421;
    msg.cog = 0.8930018658566273;
    msg.cyaw = 0.9806927734541546;
    msg.lbl_rej_level = 0.6479487397205665;
    msg.gps_rej_level = 0.8126597986265289;
    msg.custom_x = 0.005113983076519446;
    msg.custom_y = 0.8112523571348105;
    msg.custom_z = 0.8029532901853964;

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
    msg.setTimeStamp(0.45470948720654925);
    msg.setSource(59001U);
    msg.setSourceEntity(187U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(181U);
    msg.bias_psi = 0.5271094959941655;
    msg.bias_r = 0.7381547600111433;
    msg.cog = 0.5001960518219056;
    msg.cyaw = 0.4705039634289513;
    msg.lbl_rej_level = 0.9875538688074065;
    msg.gps_rej_level = 0.5434269074990066;
    msg.custom_x = 0.5913884228366549;
    msg.custom_y = 0.4043728081371102;
    msg.custom_z = 0.9731167696062548;

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
    msg.setTimeStamp(0.6488387819776278);
    msg.setSource(53228U);
    msg.setSourceEntity(96U);
    msg.setDestination(33751U);
    msg.setDestinationEntity(14U);
    msg.bias_psi = 0.4842612910349694;
    msg.bias_r = 0.1681102683726753;
    msg.cog = 0.3346526223933646;
    msg.cyaw = 0.6538216876512756;
    msg.lbl_rej_level = 0.6221716486088132;
    msg.gps_rej_level = 0.07762055684594393;
    msg.custom_x = 0.18667165239496897;
    msg.custom_y = 0.8174315952977733;
    msg.custom_z = 0.5450621325045502;

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
    msg.setTimeStamp(0.4305513249288446);
    msg.setSource(27577U);
    msg.setSourceEntity(179U);
    msg.setDestination(62304U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.278957711964784;
    msg.reason = 162U;

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
    msg.setTimeStamp(0.6307684778915669);
    msg.setSource(45486U);
    msg.setSourceEntity(222U);
    msg.setDestination(44331U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.01560632960283126;
    msg.reason = 35U;

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
    msg.setTimeStamp(0.19231903034168307);
    msg.setSource(54802U);
    msg.setSourceEntity(216U);
    msg.setDestination(39357U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.5152557034690316;
    msg.reason = 101U;

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
    msg.setTimeStamp(0.6939821074045002);
    msg.setSource(23441U);
    msg.setSourceEntity(101U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(47U);
    msg.id = 250U;
    msg.range = 0.038315847355123944;
    msg.acceptance = 68U;

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
    msg.setTimeStamp(0.8048623847866415);
    msg.setSource(61318U);
    msg.setSourceEntity(93U);
    msg.setDestination(59042U);
    msg.setDestinationEntity(110U);
    msg.id = 182U;
    msg.range = 0.1884583578360317;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.37881990974620006);
    msg.setSource(37511U);
    msg.setSourceEntity(180U);
    msg.setDestination(1818U);
    msg.setDestinationEntity(216U);
    msg.id = 169U;
    msg.range = 0.8842904003526968;
    msg.acceptance = 157U;

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
    msg.setTimeStamp(0.5792598144575533);
    msg.setSource(63059U);
    msg.setSourceEntity(134U);
    msg.setDestination(34241U);
    msg.setDestinationEntity(160U);
    msg.type = 196U;
    msg.reason = 48U;
    msg.value = 0.7818405384233504;
    msg.timestep = 0.6107478682571713;

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
    msg.setTimeStamp(0.1316732593754042);
    msg.setSource(57967U);
    msg.setSourceEntity(69U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(217U);
    msg.type = 176U;
    msg.reason = 27U;
    msg.value = 0.017281041670369146;
    msg.timestep = 0.7392255288685494;

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
    msg.setTimeStamp(0.07589069851691921);
    msg.setSource(37700U);
    msg.setSourceEntity(223U);
    msg.setDestination(29835U);
    msg.setDestinationEntity(187U);
    msg.type = 226U;
    msg.reason = 127U;
    msg.value = 0.9096245406122775;
    msg.timestep = 0.6268189620980771;

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
    msg.setTimeStamp(0.7776779799470556);
    msg.setSource(10659U);
    msg.setSourceEntity(179U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.3432937826632525);
    msg.setSource(53197U);
    msg.setSourceEntity(33U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.042278955059595225);
    msg.setSource(664U);
    msg.setSourceEntity(131U);
    msg.setDestination(10682U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.7290303310657698);
    msg.setSource(17933U);
    msg.setSourceEntity(141U);
    msg.setDestination(9197U);
    msg.setDestinationEntity(241U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FOTQOQTDAPMEESMQROTXTICZUABIZSUASILUFPIBHUMPCXLRVEOJKHCCWFZOMMVTVWPEGFNGIHJRCKHPEBHSZDTXDLXHAZGXTBNPJMJRSRBCKYEXMFKRFCZJOGIRVQSUDXWRPYQD");
    tmp_msg_0.lat = 0.6871498416231356;
    tmp_msg_0.lon = 0.5986422474719916;
    tmp_msg_0.depth = 0.4803524357649692;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 184U;
    tmp_msg_0.transponder_delay = 96U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.25695889093841306;
    msg.y = 0.48374445413871114;
    msg.var_x = 0.7157537027708295;
    msg.var_y = 0.6777244317951652;
    msg.distance = 0.6736250661592335;

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
    msg.setTimeStamp(0.7351122876780235);
    msg.setSource(54169U);
    msg.setSourceEntity(162U);
    msg.setDestination(21548U);
    msg.setDestinationEntity(164U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BXZZGRYJGFYSBPLXLRDOHUUIDWSVSVVSTENFXFNZHAMHUOCKHRGFQLUXBRUHUTVVQZIHCQMLOYRYEFONJROGCTCQNCYUISXKOAACMUWVQMDKLMOMNVWYSLPNCZEEPTBEXFHJKGZZMYSODBFDGROHNPRJWGQCWIBYSLJFSEIWFXOIT");
    tmp_msg_0.lat = 0.975316425982832;
    tmp_msg_0.lon = 0.6537592770691876;
    tmp_msg_0.depth = 0.1110558424748479;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 15U;
    tmp_msg_0.transponder_delay = 217U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.820744096685788;
    msg.y = 0.04380632511763893;
    msg.var_x = 0.6590792537711053;
    msg.var_y = 0.5660790131815052;
    msg.distance = 0.5814192407898718;

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
    msg.setTimeStamp(0.46289157968718964);
    msg.setSource(23260U);
    msg.setSourceEntity(157U);
    msg.setDestination(58903U);
    msg.setDestinationEntity(211U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YOKNITHNMLSZQVXOHYXEKUHWYRYOOOUXHLDGLJNQVNFEIZCBPDRWKACURYOQXOTZFOZGHYQSQPEPANXYLVJECSUDEHQJBRCFVCNYJQBFTAVRKUDEKZWVYPIKFGNPJPAMBINDCKDWLAVPSMEAUCWIZGZUEZSJBBXPIHEGSTMTXAMDHGEITGBNJALUTLRJOWZHILSKSOQMNKLXSTMWICFFRXGVSTWDVCMYUKVGAJPRLFWPRFXMWZBTGBQMRDDC");
    tmp_msg_0.lat = 0.9068393098865248;
    tmp_msg_0.lon = 0.16292090446133012;
    tmp_msg_0.depth = 0.48613995677829824;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 118U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4415192570227304;
    msg.y = 0.13090345478884557;
    msg.var_x = 0.06563929278860492;
    msg.var_y = 0.8793595538450019;
    msg.distance = 0.14045741749569185;

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
    msg.setTimeStamp(0.1056669764422633);
    msg.setSource(16956U);
    msg.setSourceEntity(210U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(243U);
    msg.state = 150U;

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
    msg.setTimeStamp(0.030676563968178416);
    msg.setSource(2232U);
    msg.setSourceEntity(226U);
    msg.setDestination(15520U);
    msg.setDestinationEntity(112U);
    msg.state = 252U;

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
    msg.setTimeStamp(0.5254324815715306);
    msg.setSource(58484U);
    msg.setSourceEntity(170U);
    msg.setDestination(40256U);
    msg.setDestinationEntity(35U);
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
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.8499523488691608);
    msg.setSource(12860U);
    msg.setSourceEntity(145U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(47U);
    msg.x = 0.22899662651826913;
    msg.y = 0.30652007581636964;
    msg.z = 0.5410411959141507;

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
    msg.setTimeStamp(0.5933221823773301);
    msg.setSource(1634U);
    msg.setSourceEntity(232U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(90U);
    msg.x = 0.6728328477983802;
    msg.y = 0.8538275810640488;
    msg.z = 0.20538608647609324;

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
    msg.setTimeStamp(0.24883785659743896);
    msg.setSource(10975U);
    msg.setSourceEntity(181U);
    msg.setDestination(28963U);
    msg.setDestinationEntity(189U);
    msg.x = 0.4914161728858486;
    msg.y = 0.6987391460981079;
    msg.z = 0.3017042024694654;

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
    msg.setTimeStamp(0.7722198105933857);
    msg.setSource(13764U);
    msg.setSourceEntity(157U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7297641235733502;

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
    msg.setTimeStamp(0.828032058284843);
    msg.setSource(63147U);
    msg.setSourceEntity(123U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2274573391050101;

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
    msg.setTimeStamp(0.6919682517868111);
    msg.setSource(13443U);
    msg.setSourceEntity(160U);
    msg.setDestination(41598U);
    msg.setDestinationEntity(174U);
    msg.value = 0.19993114738828466;

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
    msg.setTimeStamp(0.6449558440160411);
    msg.setSource(15823U);
    msg.setSourceEntity(243U);
    msg.setDestination(4467U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5446361292701785;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.9988137598048805);
    msg.setSource(64444U);
    msg.setSourceEntity(143U);
    msg.setDestination(58653U);
    msg.setDestinationEntity(143U);
    msg.value = 0.3881129181844737;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.6724786688313975);
    msg.setSource(877U);
    msg.setSourceEntity(74U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(52U);
    msg.value = 0.15696402404129972;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.283822894060877);
    msg.setSource(61522U);
    msg.setSourceEntity(162U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8857384009488303;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.5283324064103292);
    msg.setSource(22014U);
    msg.setSourceEntity(26U);
    msg.setDestination(51637U);
    msg.setDestinationEntity(6U);
    msg.value = 0.25271923298632426;
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
    msg.setTimeStamp(0.5657083594745028);
    msg.setSource(53602U);
    msg.setSourceEntity(239U);
    msg.setDestination(37147U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5096706170124977;
    msg.speed_units = 179U;

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
    msg.setTimeStamp(0.5721508005384827);
    msg.setSource(59451U);
    msg.setSourceEntity(51U);
    msg.setDestination(40322U);
    msg.setDestinationEntity(102U);
    msg.value = 0.02308631137833339;

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
    msg.setTimeStamp(0.709844638521676);
    msg.setSource(19184U);
    msg.setSourceEntity(77U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(214U);
    msg.value = 0.45495295331040886;

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
    msg.setTimeStamp(0.41750607160131414);
    msg.setSource(11316U);
    msg.setSourceEntity(114U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8185750302735939;

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
    msg.setTimeStamp(0.1155465321425927);
    msg.setSource(64104U);
    msg.setSourceEntity(101U);
    msg.setDestination(49478U);
    msg.setDestinationEntity(194U);
    msg.value = 0.25064979585849223;

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
    msg.setTimeStamp(0.5561653504821321);
    msg.setSource(17581U);
    msg.setSourceEntity(169U);
    msg.setDestination(28492U);
    msg.setDestinationEntity(133U);
    msg.value = 0.21282891536500315;

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
    msg.setTimeStamp(0.8913556508009316);
    msg.setSource(39162U);
    msg.setSourceEntity(125U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(121U);
    msg.value = 0.4496033583527117;

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
    msg.setTimeStamp(0.9190870569217533);
    msg.setSource(8134U);
    msg.setSourceEntity(52U);
    msg.setDestination(14279U);
    msg.setDestinationEntity(4U);
    msg.value = 0.020624261988212655;

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
    msg.setTimeStamp(0.2429627386310127);
    msg.setSource(12060U);
    msg.setSourceEntity(184U);
    msg.setDestination(43159U);
    msg.setDestinationEntity(145U);
    msg.value = 0.20678552084242652;

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
    msg.setTimeStamp(0.07389975503064761);
    msg.setSource(26297U);
    msg.setSourceEntity(202U);
    msg.setDestination(9352U);
    msg.setDestinationEntity(188U);
    msg.value = 0.19957223165569415;

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
    msg.setTimeStamp(0.14972725451916413);
    msg.setSource(48529U);
    msg.setSourceEntity(164U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 1835171557U;
    msg.start_lat = 0.6879190824422687;
    msg.start_lon = 0.40285051799112337;
    msg.start_z = 0.027877423073270235;
    msg.start_z_units = 228U;
    msg.end_lat = 0.2397010283308194;
    msg.end_lon = 0.167909515760007;
    msg.end_z = 0.025499085000063038;
    msg.end_z_units = 12U;
    msg.speed = 0.9406382846306353;
    msg.speed_units = 10U;
    msg.lradius = 0.274438198056448;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.5616092030144751);
    msg.setSource(33595U);
    msg.setSourceEntity(159U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 4177895588U;
    msg.start_lat = 0.9747109175640913;
    msg.start_lon = 0.8474233360632132;
    msg.start_z = 0.5215873215961061;
    msg.start_z_units = 102U;
    msg.end_lat = 0.1284361312318678;
    msg.end_lon = 0.7167144354518332;
    msg.end_z = 0.40758201717417375;
    msg.end_z_units = 221U;
    msg.speed = 0.3170279480734277;
    msg.speed_units = 62U;
    msg.lradius = 0.460289403712414;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.10133248338237899);
    msg.setSource(24145U);
    msg.setSourceEntity(134U);
    msg.setDestination(38484U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 1232234388U;
    msg.start_lat = 0.21411124803185277;
    msg.start_lon = 0.8857301781983528;
    msg.start_z = 0.8469996473082828;
    msg.start_z_units = 28U;
    msg.end_lat = 0.7996858923855831;
    msg.end_lon = 0.13430233122329638;
    msg.end_z = 0.6381781276664068;
    msg.end_z_units = 5U;
    msg.speed = 0.9561112979686434;
    msg.speed_units = 43U;
    msg.lradius = 0.9716488348751877;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.2352152166346877);
    msg.setSource(16387U);
    msg.setSourceEntity(39U);
    msg.setDestination(749U);
    msg.setDestinationEntity(252U);
    msg.x = 0.7929711901630493;
    msg.y = 0.47168137905614893;
    msg.z = 0.029042447760174728;
    msg.k = 0.26526327866303945;
    msg.m = 0.9287128418141527;
    msg.n = 0.0307480430752487;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.9886892358188957);
    msg.setSource(29666U);
    msg.setSourceEntity(238U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(251U);
    msg.x = 0.9821711232830239;
    msg.y = 0.21828149088065074;
    msg.z = 0.2626953311656065;
    msg.k = 0.02200211279206199;
    msg.m = 0.4742026962628759;
    msg.n = 0.5694765760053792;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.08404862740429309);
    msg.setSource(28352U);
    msg.setSourceEntity(39U);
    msg.setDestination(9589U);
    msg.setDestinationEntity(251U);
    msg.x = 0.642883987657451;
    msg.y = 0.6847291233776573;
    msg.z = 0.7739174330736726;
    msg.k = 0.9652595688946296;
    msg.m = 0.8598954952446077;
    msg.n = 0.06170906825353972;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.9387234475265517);
    msg.setSource(1629U);
    msg.setSourceEntity(102U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(167U);
    msg.value = 0.3198684643287957;

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
    msg.setTimeStamp(0.9319500134555004);
    msg.setSource(62013U);
    msg.setSourceEntity(145U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9570917443941639;

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
    msg.setTimeStamp(0.5147587514644077);
    msg.setSource(13200U);
    msg.setSourceEntity(8U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8243803475284931;

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
    msg.setTimeStamp(0.3400690502237935);
    msg.setSource(63379U);
    msg.setSourceEntity(220U);
    msg.setDestination(28840U);
    msg.setDestinationEntity(49U);
    msg.u = 0.6863886353011796;
    msg.v = 0.25586110902818904;
    msg.w = 0.4567310347053293;
    msg.p = 0.022996305941295092;
    msg.q = 0.4884760536150482;
    msg.r = 0.12388762364839112;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.9691239048921326);
    msg.setSource(8775U);
    msg.setSourceEntity(192U);
    msg.setDestination(1533U);
    msg.setDestinationEntity(153U);
    msg.u = 0.8139423939674979;
    msg.v = 0.5119141375196068;
    msg.w = 0.10815515437359613;
    msg.p = 0.05727274160043738;
    msg.q = 0.1869230175141805;
    msg.r = 0.604381114743217;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.25109582376252315);
    msg.setSource(38527U);
    msg.setSourceEntity(111U);
    msg.setDestination(8193U);
    msg.setDestinationEntity(116U);
    msg.u = 0.5648736677602043;
    msg.v = 0.8669235852087831;
    msg.w = 0.8162987433824492;
    msg.p = 0.2252104695090016;
    msg.q = 0.49028211937206356;
    msg.r = 0.5940885514447906;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.8208376271300785);
    msg.setSource(27454U);
    msg.setSourceEntity(221U);
    msg.setDestination(48955U);
    msg.setDestinationEntity(189U);
    msg.path_ref = 3722117447U;
    msg.start_lat = 0.003355356117249575;
    msg.start_lon = 0.7837620930100685;
    msg.start_z = 0.5907519709297139;
    msg.start_z_units = 221U;
    msg.end_lat = 0.9464773107858432;
    msg.end_lon = 0.945467437661141;
    msg.end_z = 0.39003137263603416;
    msg.end_z_units = 107U;
    msg.lradius = 0.30461644338587957;
    msg.flags = 53U;
    msg.x = 0.6135977232240785;
    msg.y = 0.2871741856532555;
    msg.z = 0.22624756426073211;
    msg.vx = 0.5292209245281884;
    msg.vy = 0.12233756591758504;
    msg.vz = 0.010788051616293148;
    msg.course_error = 0.5911945689452618;
    msg.eta = 62929U;

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
    msg.setTimeStamp(0.8450452795096834);
    msg.setSource(54781U);
    msg.setSourceEntity(3U);
    msg.setDestination(45310U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 389051094U;
    msg.start_lat = 0.011133756590064214;
    msg.start_lon = 0.9756933415109812;
    msg.start_z = 0.05867030812759755;
    msg.start_z_units = 49U;
    msg.end_lat = 0.06208654984115325;
    msg.end_lon = 0.816146729886167;
    msg.end_z = 0.45674517646638524;
    msg.end_z_units = 0U;
    msg.lradius = 0.5071512755277936;
    msg.flags = 157U;
    msg.x = 0.3062276933744992;
    msg.y = 0.997291241707869;
    msg.z = 0.7741036730639645;
    msg.vx = 0.9447719726729508;
    msg.vy = 0.672499479246537;
    msg.vz = 0.5102223603947478;
    msg.course_error = 0.8434460869394289;
    msg.eta = 8104U;

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
    msg.setTimeStamp(0.7865879624431834);
    msg.setSource(56488U);
    msg.setSourceEntity(46U);
    msg.setDestination(31974U);
    msg.setDestinationEntity(71U);
    msg.path_ref = 2310865255U;
    msg.start_lat = 0.3327245454231109;
    msg.start_lon = 0.4473318752595691;
    msg.start_z = 0.02721835393899341;
    msg.start_z_units = 16U;
    msg.end_lat = 0.5083304806309099;
    msg.end_lon = 0.2815722148937586;
    msg.end_z = 0.8912759788258948;
    msg.end_z_units = 221U;
    msg.lradius = 0.8139915636129192;
    msg.flags = 201U;
    msg.x = 0.6259498749680661;
    msg.y = 0.972121050378325;
    msg.z = 0.9540263390011615;
    msg.vx = 0.9380067646905743;
    msg.vy = 0.19498828547751146;
    msg.vz = 0.4527408823803044;
    msg.course_error = 0.8632658292828431;
    msg.eta = 981U;

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
    msg.setTimeStamp(0.11139280255473516);
    msg.setSource(38736U);
    msg.setSourceEntity(25U);
    msg.setDestination(57939U);
    msg.setDestinationEntity(11U);
    msg.k = 0.2650850503936072;
    msg.m = 0.6557887839902666;
    msg.n = 0.44717600472258523;

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
    msg.setTimeStamp(0.10820419484671473);
    msg.setSource(18455U);
    msg.setSourceEntity(120U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(196U);
    msg.k = 0.6139146095180289;
    msg.m = 0.8365990604119723;
    msg.n = 0.7542944652216897;

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
    msg.setTimeStamp(0.8374642018692723);
    msg.setSource(14442U);
    msg.setSourceEntity(16U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(63U);
    msg.k = 0.8516414877258509;
    msg.m = 0.4417784815411022;
    msg.n = 0.6143279321677527;

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
    msg.setTimeStamp(0.39280311654017896);
    msg.setSource(42853U);
    msg.setSourceEntity(172U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(8U);
    msg.p = 0.8804577980573205;
    msg.i = 0.937706216431146;
    msg.d = 0.5556173947271301;
    msg.a = 0.26996075790419205;

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
    msg.setTimeStamp(0.8130676070648695);
    msg.setSource(47643U);
    msg.setSourceEntity(238U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(133U);
    msg.p = 0.8317838052885905;
    msg.i = 0.5391197100502909;
    msg.d = 0.7170144571895631;
    msg.a = 0.9359400756801133;

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
    msg.setTimeStamp(0.966996424960019);
    msg.setSource(38710U);
    msg.setSourceEntity(41U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(189U);
    msg.p = 0.7167446748315532;
    msg.i = 0.7981951786725063;
    msg.d = 0.15403757458313738;
    msg.a = 0.11835104248169603;

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
    msg.setTimeStamp(0.7755432719830976);
    msg.setSource(32748U);
    msg.setSourceEntity(72U);
    msg.setDestination(31850U);
    msg.setDestinationEntity(237U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.12714335628223472);
    msg.setSource(55599U);
    msg.setSourceEntity(77U);
    msg.setDestination(23295U);
    msg.setDestinationEntity(100U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.17131423778067179);
    msg.setSource(24729U);
    msg.setSourceEntity(128U);
    msg.setDestination(40683U);
    msg.setDestinationEntity(68U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.12012867239216951);
    msg.setSource(8892U);
    msg.setSourceEntity(146U);
    msg.setDestination(47278U);
    msg.setDestinationEntity(30U);
    msg.plan_ref = 4261832416U;
    msg.id.assign("HEFWXTYOMHWNZPEZFCMYSWFRLXKHKWBCGEJIYLDQAMZVUFR");
    msg.memento.assign("TFTTKZGNUIAKPFHGNAFHAYNDERWQMARZRZKQMTAEJTAJRBCXDXSQWOQUKIDKDSQYTLVUKYMDEAMYVGTFZFBBSRPBQBNGYEVUSYCIVWLWKIEDBLXVOVBZARSJFOJHLMDHXPNQULLLCRCXMTAXMUZEEVLDNCECKYY");
    msg.timeout = 1143U;
    msg.lat = 0.3857403689854244;
    msg.lon = 0.8672103057193985;
    msg.z = 0.306368102569742;
    msg.z_units = 236U;
    msg.speed = 0.20295852071249876;
    msg.speed_units = 215U;
    msg.roll = 0.6520392262537293;
    msg.pitch = 0.396800686326813;
    msg.yaw = 0.5759202583384067;
    msg.custom.assign("EFVCAENBLZDJRVYDAHAOWVKHCEUKRSYFGYQSXMNCULUTMRSMEXJIWAYMMXWUPIYJFYFXBXK");

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
    msg.setTimeStamp(0.6866122082995992);
    msg.setSource(60704U);
    msg.setSourceEntity(4U);
    msg.setDestination(46484U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 1311304972U;
    msg.id.assign("TPPEBNQRDMXNVISTZFIVHVUKURWIZBHSYNENHSDROTBSDZTVPFDNCOXXPFWRUSWAFMBXULKWOHREUMLYGKJHBMWGPETYLTMVQCWUOXWFBBEVQYHPFKCJJXAVSJUMFGRATMYQYSRGYVLFVEDEBPHZHJKGIISLKWQSAUDLBXLQGPZIPDATJRMOZACZGIXKERJMIGVWCUNFGDWICDDCAQQBLUJYCOLZZOTNKKXLNQXJCOZHTOERMAJHCKQAAPN");
    msg.memento.assign("MIKCOLSMYHWVYTTNHZFGUZUMBRUQKXOYQKARVLGRVOGOKUZXSYJQPOSECNBKJVAHCKXIWXVFBEMCDWZ");
    msg.timeout = 21528U;
    msg.lat = 0.5708993676990548;
    msg.lon = 0.6288131822730963;
    msg.z = 0.7090203658161315;
    msg.z_units = 250U;
    msg.speed = 0.6394247199616968;
    msg.speed_units = 170U;
    msg.roll = 0.6474343571683308;
    msg.pitch = 0.5288470461745525;
    msg.yaw = 0.25982203158459194;
    msg.custom.assign("JFUSKSQFIYHJVCVTTPYRLUPWUQGJERDNNHIDAFAVRZQMLZEZCMSPLKLBIWAWSJXOMTUASUHZYGOVYBOQXXHNBYKINTDJORHGVWIYEPDPBZMDAWOHYINXNAICXFZFVLYSMMBOCUBRULTHGRMDQPZEPLXWEDFVBKARLCZCTMJUQPGFTYGGHCUVBXIWWNSOGBJKGEVKMCZLQJFYKKIASSBZ");

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
    msg.setTimeStamp(0.1920472932654702);
    msg.setSource(58130U);
    msg.setSourceEntity(210U);
    msg.setDestination(10969U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 1078702783U;
    msg.id.assign("JZSCRCOPQBIZZSWZXPBQDVGTXOLWMOEDUBTJWCPRLCFWDGLUUDQVGJPNYVRHTXUOYMSFAYJXUAQHZSTYICVLNABDUDVAZIPGOJMFMNTOGOSAEDTCMWSKJMHRUPGHYIMJIKWEXKKKOEGWYFMII");
    msg.memento.assign("AEKLPMJBYYCLVOUJQCAMEDKYYHGTGSSSZSGNUHVUFRQNUUHGPTCWFTJZVNAFGRKXXKJEJQHJHEGXQHFVXXVEDAWIVKMEXSCPVSZXUOMJHVOBWQNRROWUBTAMYLLBGN");
    msg.timeout = 46152U;
    msg.lat = 0.2661560425949958;
    msg.lon = 0.002788020652070955;
    msg.z = 0.2590755048219634;
    msg.z_units = 152U;
    msg.speed = 0.07119409721789072;
    msg.speed_units = 176U;
    msg.roll = 0.8490590142452081;
    msg.pitch = 0.7794040532922505;
    msg.yaw = 0.5382647248161396;
    msg.custom.assign("IVVURXLNGPCUPVOMQKDFQZDKJHIVPVPBHTWDFCHZBUMCEGZLLOAEHHTSZTESSJKMOCQGJDNUOJKOAGLWLKRJDLVWNISSSQQHXCEFSQXMODKCNTDSSGTBVYGBQANZDQMRIGKFLZUCQUEBAKAYTIXTXXK");

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
    msg.setTimeStamp(0.7011060566380629);
    msg.setSource(19559U);
    msg.setSourceEntity(127U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 1886396466U;
    msg.id.assign("ABVHLDVZYOUEABESEOELRKERBIKMIZNYTSWSORWVYKFDQTNNOHGAILXDXCCMLSKFMFVISCHLQGKJRTUPIMHNPQZRHANJNBOXQYVMGJPUCNTSWSGCLRWLKOUOPSWCFYDCCHKZIGMOLJCZTYGBDTJMAPOUROAKZETXVVJHWBZDMLEHXB");
    msg.memento.assign("EQUKJMYUJVAZRAAABEBWCOYEBEBIUQOELCWBZKZZJXQCUADYHGPRRFUWTTKMXPADKNQUPTXNMXZSTOXMPHFSFVZPYUSMTVXNGCSUNUJFFIZVCQETNNGKIQKGOAHS");
    msg.timeout = 26834U;
    msg.lat = 0.35680206169923;
    msg.lon = 0.3856321731122593;
    msg.z = 0.2945429226598789;
    msg.z_units = 217U;
    msg.speed = 0.7217354579434515;
    msg.speed_units = 94U;
    msg.duration = 53477U;
    msg.radius = 0.990383619631316;
    msg.flags = 126U;
    msg.custom.assign("FUZKCRLGGAZWQGHVVSKMSQIIOFLDCKFEBALQHZRSEZHCMYBMVMVBGZBUKSRPNSIJFPPOECEXVJNOAXGQPXDPTOEHAWHEBJCDTSIPYYTBLUENMYOZWXUUIVRHSIWKPQCUQWXRKZNXNHIRGQFABWNGXNAMQKDTRJOYJHWKXRCFULNYAOGYDLDRAMSDJTWNKXIPJJAVTVVZGYEFTALTZBISHFOJOMFQVRBJLUQOTMDMSZENCIPUUKYYTCPEF");

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
    msg.setTimeStamp(0.4485245274223483);
    msg.setSource(33277U);
    msg.setSourceEntity(177U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(15U);
    msg.plan_ref = 2000139109U;
    msg.id.assign("FBFFZKAVRYGMKYFHAHBJZNICBMGRXSGKEQONENDBHVLOR");
    msg.memento.assign("UNVMPCNUMIUDSWLEDOFJAVGSJAEHDCEGZPEBUQMHSBNRHAEQUYWSEDANSJTLOCFMXHZFY");
    msg.timeout = 8773U;
    msg.lat = 0.7071836652777704;
    msg.lon = 0.06561847194453374;
    msg.z = 0.16498081024453826;
    msg.z_units = 31U;
    msg.speed = 0.5796370646740354;
    msg.speed_units = 181U;
    msg.duration = 8942U;
    msg.radius = 0.16953880023903278;
    msg.flags = 246U;
    msg.custom.assign("RFCCFZJNDDSVQYLX");

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
    msg.setTimeStamp(0.42971905177353376);
    msg.setSource(19269U);
    msg.setSourceEntity(99U);
    msg.setDestination(45502U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 3583264611U;
    msg.id.assign("CBJJBADFZDCBXHCPMIQPVZZHIOOVNDFMGQNTQMCOFWMEETAEMNSKWNPBVEAFIQIKYMGKCFATDTNUWQFEVCIGPLLAZBYNHMGJEZYXXYDGHRAKGMJPFZVBLIWVHKBWVJRWLSHQJORXSZPKXKHSQWZ");
    msg.memento.assign("OVNGKWILRTCIYQFDHJQHJSENZKEYMGKGCBTYYVAZTBUYDIIHKLHTPHXTIBKDFPZVRBYLALZAWRGNVLSVOAEZWBPCMAHUWRNXZVMMNLHPCXMUPXLZJKIHKNYOXTQOBASAHGLFMXPUFCVPSZOWEUNDFDMDYEUDBLGIRSFMVDMGYCUZSXKFRFWQLKIANBWEAROSQNJXWSECIDQMTCJRWSJHCATJJUGEZFUOVFKSQQPTIEQ");
    msg.timeout = 9841U;
    msg.lat = 0.670529084144645;
    msg.lon = 0.5556517451447066;
    msg.z = 0.7818890551795492;
    msg.z_units = 228U;
    msg.speed = 0.3558417170536482;
    msg.speed_units = 210U;
    msg.duration = 49365U;
    msg.radius = 0.9535906971183183;
    msg.flags = 212U;
    msg.custom.assign("OMZANXDVQTRSKXWJAELPMHLBOYTTRDKZHMTNIJGKPFEJLLUOPOKRMGQQKZTEIFNTWKFVJOYIUMXOTBPSUSOTQFWLGPODFQBIZWMVBIJTNQAZFBIBHZUWNSPIVYUCYMBWAVCUFNEDRCJEXGHSDNIVLNAICJJEJYIGHAQCLXHSSFZDQYY");

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
    msg.setTimeStamp(0.6477402185380623);
    msg.setSource(20157U);
    msg.setSourceEntity(75U);
    msg.setDestination(15444U);
    msg.setDestinationEntity(251U);
    msg.plan_ref = 1769500113U;
    msg.id.assign("GABLJJPLNCMFNRFRXKUBRXTTQOQVQYETICXMIIMZSFEAFTLKNH");
    msg.memento.assign("JPHRSDXZQOHCWGPIMFFQXXMNYLTWOAQEHOYFJUDBUOGYZZBOFNJGESALOO");
    msg.custom.assign("QZCVSIALNKAIZBOVQNYLJNIOGHVBGMEDZAKDRVSHJFSXKVOFWBUNAABRWNTVOXQPLHRWREXMAPRQIGUFFKBZNIZKENODPJXIHBJAWDTLOITLDQMDOXDMACRMUWYUUKRGFCTVSUXZGU");

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
    msg.setTimeStamp(0.433277989650644);
    msg.setSource(49717U);
    msg.setSourceEntity(25U);
    msg.setDestination(7528U);
    msg.setDestinationEntity(172U);
    msg.plan_ref = 4061905403U;
    msg.id.assign("FDTRSGGKWDCBKROXNDUATYITZFLIEFPSZRGWKNVRNZJBNCJTCMOTZIWGDERVAOKJBMBXFPJLVNEQFHAZKAXXVHPSVCUUOUZDIAZHPTHKDZNIWMLW");
    msg.memento.assign("OEJCXKNPLJYPOAQVSYNVTWWGOHVOMVDOOTJNCJWNVRRULGUVHICSKQQMXZZCKUJCGYBYLEKAMSBOFSEYKEQZJANXFEMLPLRIPWLOKNXVIIYKEHFTBJCVXUWRTSGZZHCAKBPHOMIAALXSDPFFLGNRLAAGPTIWHRQMMAZUFTDFZDEFYIQZGCWUQAWDBCIBMPFDQUFPEOKHRGBJTJCBTHXWXSEDHUNDXWNUUEQJLBTVISX");
    msg.custom.assign("QSHQVCUIKJEQSPFIIWWGMORWAESUUDSRMRAAPBKMWDBTJHZWLDMSIXWLDGKJENMYCZZRYJHUFXSNOCDNMVHTNDEYSZENOJXRVIXPTFHOFMEJFGZUJGBTWQAXBZCVQSVOLYGMDOEPDJDNVAKAUSTCAQEHLBRGRYFYCHNGCNXXMKJLJEFVUPQTKKRIPOHAKYBLVRFWTT");

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
    msg.setTimeStamp(0.3097976941516184);
    msg.setSource(46031U);
    msg.setSourceEntity(54U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(144U);
    msg.plan_ref = 3216346790U;
    msg.id.assign("UEDJWWQCKJVO");
    msg.memento.assign("CBXKEADQMWQLTTQHAUJXRRKWTFJXRNLDJDLKEVLUYZLEUSJNRACGIVIAYBISBFHUMLLPTDVYQRHGOBGVUUNVJWFDDTPGTWIJMCYGKGIGRVPYZSCHXXMOLAOHSTHRFWZZGMVIEURFZLHPAYISTRBHMAFUWYOCOIKDASBQJPHOANCPPSXXMOSMCFOXGDJZBKK");
    msg.custom.assign("NWMKFSSXXAFIITNLNKHIOYBRYJAOATQRZEIHSCCZGYLBWSPEDYPBOFPKHDPSLEZHMQKCLQIYLNRTWBZXSXILZRNJHWHGYUVYASNKWCDIBVLCQLSPKPMXFOJUZRPAMVRAPMANNDBOZ");

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
    msg.setTimeStamp(0.686972698797601);
    msg.setSource(31071U);
    msg.setSourceEntity(98U);
    msg.setDestination(5891U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 1510450242U;
    msg.id.assign("DWDNKBKANNTORZZSEVTOCEYYKQEQSXLSGRFADEVPQMSWMIEAYUSGPQFLLLRKJKLZKUIVMAIMHYXUBZRTFERMRXSJPNKHCWUKMWLWCMKYGHIYXGFGTHCIPIBDBBQDAIBAPCJXKOVJQHXLQGPJAICVNJVRTFZRQNJNBSWUWNTOODOFDIZZTWZUSBHEHLPOIBVWHTEGLJXUHDCYNPJCMNPUXXAUEMTFZAFDFSW");
    msg.memento.assign("OSTHRUHBGTVGIWBKCEECEUEPLIGDLNKEJ");
    msg.timeout = 24380U;
    msg.lat = 0.34840155022835295;
    msg.lon = 0.9605944930179735;
    msg.z = 0.22654045992422878;
    msg.z_units = 42U;
    msg.duration = 4972U;
    msg.speed = 0.6265314112654676;
    msg.speed_units = 136U;
    msg.type = 196U;
    msg.radius = 0.5599971783385918;
    msg.length = 0.7953702574098804;
    msg.bearing = 0.6259231419753172;
    msg.direction = 86U;
    msg.custom.assign("IOFOMVQPFJJIJEHTXNCYEGOUTKBKDIGOOMZGYYUFFSGYHAGQBRHKSZRSACMHSVLCBQQVQTCKADFXYHLLUWKUPDLJUFYTJIRTGHTQGBDIUXLICZYAIVNAZVKPPPZNMOJXCUXWPWCWBJBNBVHCWALNNZANSEOSNDHSVZPKPQBXQRMKRODDEJMLWO");

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
    msg.setTimeStamp(0.4939744198680097);
    msg.setSource(3812U);
    msg.setSourceEntity(151U);
    msg.setDestination(28313U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 2145332467U;
    msg.id.assign("NEBKFVRPZZTPZ");
    msg.memento.assign("NFDEPUYTUGRLLONHXOHUHVDUZCQRBPNUAOWCASJNIGWHXRFCAGLUIZRVCQPYLZOMCFBWDNXPECJEKBMRVFJCEPWDPYKYHWBVUZJLTPEHNFRIQDZCVTZKMYMDVDASKHMQGAWRKLNJXOAOJYUSVOGXRBUHAT");
    msg.timeout = 33819U;
    msg.lat = 0.21215422207127632;
    msg.lon = 0.21015512138252956;
    msg.z = 0.8163849576523744;
    msg.z_units = 140U;
    msg.duration = 50538U;
    msg.speed = 0.7532498989475538;
    msg.speed_units = 252U;
    msg.type = 2U;
    msg.radius = 0.08095158258083268;
    msg.length = 0.08865372602143873;
    msg.bearing = 0.7048662406479695;
    msg.direction = 161U;
    msg.custom.assign("JVHGUGHOBUJXEIQYTBSAIXCUYDCITMGDPFFOEHXDTSNPYXZTNOBVYAPPK");

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
    msg.setTimeStamp(0.5009313240739706);
    msg.setSource(31553U);
    msg.setSourceEntity(29U);
    msg.setDestination(35720U);
    msg.setDestinationEntity(169U);
    msg.plan_ref = 1774258583U;
    msg.id.assign("AAWPIPARMTJIUAIIJHWMFOGRIODKBJOKYHBWVFNCOIUEPPYBKSTMOMKTXTRFCABLCNRGMYDTDXQHSFRYDYFPZJGODKSCNVALQLMHKJDUSMFLWVF");
    msg.memento.assign("ZWQPVEMJIQODWZOFRHGFQCFPZZBYFXXDLBSCNTXHMCCYDEFLLBRUXLTXRUFECPTGHPCEZGWKYJVBWAONQOUBJKDAMGSRMIFVJRNNWJTJVDJWVUYRBAOULPZOXJNDDELURRXPSKUHUI");
    msg.timeout = 38134U;
    msg.lat = 0.5060445584181855;
    msg.lon = 0.9197525706515397;
    msg.z = 0.5727530326606961;
    msg.z_units = 203U;
    msg.duration = 63640U;
    msg.speed = 0.4921174767395071;
    msg.speed_units = 6U;
    msg.type = 5U;
    msg.radius = 0.33730186198165846;
    msg.length = 0.6632627469907513;
    msg.bearing = 0.43712652257130824;
    msg.direction = 133U;
    msg.custom.assign("TMCNXKETPJVOYFCDWGNHZLTKJGPNBJLXWIHLZYVWSBDRHEMHBAZPOZFYRSOQXWCPKUQUIFDVYXOQPHICVSVTLNYSCCVFRCJIZBIJLZUAFCAFDZLTAMHPEMBMQRDJBXYBUHUORVGWEHPUHCDDYPVRIUTFTVKLQCGTQXJDSYGNQVEFQGGGKZNZABXSMDQLOG");

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
    msg.setTimeStamp(0.7862857575656396);
    msg.setSource(45246U);
    msg.setSourceEntity(212U);
    msg.setDestination(60019U);
    msg.setDestinationEntity(97U);
    msg.plan_ref = 4144979750U;
    msg.id.assign("WZEMQGGPGQDZEIUJEDFZPSAWZWCYUAHLCMTLIHIFYOICNMIMXHERAVFMABWXNPEKPBNJEKGFHAKXVGTPFXBLFWJXOKJDTKDPXLJQVQVOENBKCQOVXNSMWGDVBVHRL");
    msg.memento.assign("MZOQEDIOPAULOEDUBTUBMVCGUY");
    msg.duration = 28067U;
    msg.custom.assign("BHXCHIJEWTLKNJIGSERQLAUBIYJFOREZVGIWWFKWDZ");

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
    msg.setTimeStamp(0.37088259412189106);
    msg.setSource(45365U);
    msg.setSourceEntity(136U);
    msg.setDestination(61211U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 3721010167U;
    msg.id.assign("GSKJFAAGZWBQLTFLDIMKBVOSHBJBJDZZBPASDUMSOQVPKADGCISTTIPEHLEIFHOPTHXREQQOINH");
    msg.memento.assign("XMKNGWXDJFHVLOUGBGTMQXXDNCZESAWDEYNJVYEUFOFIBQXIZZUMIRVSGJQSSGJBAHAZGNNTYJIVCQTCJWDPDWCCVRHSXKTTPQAAOCGRFOWXABEEFKVASDIMRLMLEJMKDYFZAJKVBNWJAXUZMMZLKSOPISQBNPLFPULCPLYRVJVONTEEKGUMHYVXZIFOPWUOYYHRFPBCHFILYZKGUERB");
    msg.duration = 55803U;
    msg.custom.assign("GIMLEOIASKKRQODWDUZLOZBCEEGYNMCBGWCNAKCXMKGRRJOJENGUIPWPBJURNHNVYTHHYBMSLCFQCJBTZRQQOGAPYLJRUATMIYOWDBNWPLVJFCWMTDIREEMFVHPZWFVYRVUGNKEHAORKWSOKTUTEQAADPXHNZFMLYNOTQFIEKSZQCLJLDBMOBSPTWYMPJLSVKXXZQGCXXVSHFQLQTHDBBXVIAUHASXJXDZI");

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
    msg.setTimeStamp(0.1287951287195036);
    msg.setSource(31911U);
    msg.setSourceEntity(252U);
    msg.setDestination(62592U);
    msg.setDestinationEntity(230U);
    msg.plan_ref = 1208331395U;
    msg.id.assign("ORDOMVNHOQHCXNZLVHLYWCGREVYALGR");
    msg.memento.assign("QRQNOSCAKMOSHJCBPMLFTRSGKSIYDQGXSPNAVPXQULHRDLBBHRTLBHZWNWCEIIPAUXBDSWXSJYDCPVUXPOTYVVHVVFLAOKEEMLCHUGLUNUWEEPBOPSZZFKULDOMIAHTDYKYYRGNVAJUYHOEJRFOJZFIGJKMCNTTVOJHDTEPUJZYJQIZYWVLFZXCTNAZETXGAIKQMWQBWGXYTMWMXFOCAQ");
    msg.duration = 30563U;
    msg.custom.assign("NZZECLPLMUFLEBVCTBXOPFDBBAZDOOMNWAOMQCXYLGYEHPAIJMFWVMDBJDRIQQOEDFGXVUZFKMPYSOHGMWCVRWKTVTEDCRTWUFVXPAERXZEZQHWGTUWKVJGGWVTKBHYTATIKCWHJPAINRWHSQOBSSSVOUOKUELJNXTANCAQIFLGYQSNKGNPEXUFTYUXZLRNCIRHHQPGBIRDQHKCMXBFJVLUUSPKABCDYPYEIKNL");

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
    msg.setTimeStamp(0.7366859113581323);
    msg.setSource(49102U);
    msg.setSourceEntity(5U);
    msg.setDestination(65030U);
    msg.setDestinationEntity(242U);
    msg.plan_ref = 3740844886U;
    msg.id.assign("CRQHJAZBGTYEWBORIQDHGDNGLUTVFPPHMCAJBBRXTAPTCCFEGVFVLBTAXEFOMUVRQINOIIYZJDYIXESCUWKKHMNYQJDERNRMMPPOZLVIMQJ");
    msg.memento.assign("RIELRDROADFLXLHGLUKTENYCZLGPOWHHLERNURMWLANVPNEOSBDBRKTKXOAHWTARNRWWBPIGKGFHAVGTYBCIWQPPWPTOQFUQWKIOKUXFMJBYDTJSDTVMKBHGYHTYIIXISEMCAGKBYPXLRFQIAZOUGXZ");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7626632925649908;
    msg.control.set(tmp_msg_0);
    msg.duration = 2722U;
    msg.custom.assign("AVLZQILJSBYQQIUJIBHZVFSEWYGZTNMVXBEFNHFXAZBDXZQUCOIEDARFCKOJYLONTGEOLOFVKXKSBHYJIEGNHBJWTBORJHPMFAVBDPCOHXGVVDKZGDQOFHILMNVMWAZYUQIDEATMIUPRNCASKOSSEUWQRPZWNKUURWMTXWZEDYVUJLYTGIJLCPCFGE");

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
    msg.setTimeStamp(0.9161940102835132);
    msg.setSource(16004U);
    msg.setSourceEntity(122U);
    msg.setDestination(20468U);
    msg.setDestinationEntity(33U);
    msg.plan_ref = 2752119677U;
    msg.id.assign("ECPOVNHASWOYCGYAFYLTITVXPRSRIWQWCUQMEMARRLBIJKVEXJXZJHYREKKGGLTBJPNEHGUSCVAKLOZPMOLOUPDBNBRSIEPUBKMGDBQNNEVHGOKCPLILWGJTNQNIRSUYLOMZQDXYXEUKFFOOZUXYZIEMXCFRAPFADQJZKFUANDVNCRQFVBZTYDGPRUCQFKDYVEBYJWHDGSSMGQSXWXIJSJTKFTWWDMSCHOFZP");
    msg.memento.assign("IBEEVVROFUWSKOSTQHQRBTHSXMPRMBZGXGQSEKTCLIWMKIZNBHWARMKCJQGYZDYDJYEJDOOFUFBEWCZWKAKGGHJXYKTYJQMEFUIZLXZHSRRLM");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7006783116107967;
    msg.control.set(tmp_msg_0);
    msg.duration = 27362U;
    msg.custom.assign("UZVWKYTJJPEOBXRDMRDNCVSWCYOWBBNOBFQZCQGAOQKOAVY");

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
    msg.setTimeStamp(0.2517421300712006);
    msg.setSource(33841U);
    msg.setSourceEntity(39U);
    msg.setDestination(55152U);
    msg.setDestinationEntity(109U);
    msg.plan_ref = 2417774876U;
    msg.id.assign("WLHVZIZFKKYNEBGOBOSDPZQLLXATIVGFJEYEZK");
    msg.memento.assign("OHNVZIVNSWCBTOQKFEAZZTHDKKXIMNMEPDSECVALETSJILJLWUYXJBOCTXNKAQVCJVEWQJEPULUODFIQTMEISRSXDDNAAAPCDGZCKICBRUPSWYGLBX");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5884563319973147;
    msg.control.set(tmp_msg_0);
    msg.duration = 54677U;
    msg.custom.assign("KSMAZUAFKUSAMVQHMVQAQIPGCORDOVWQLLLZTYDORNETJMTHSZAIBKBGYDFPFYZVWIWKEHCCGHLGSRGSMFZEZRNRWUZOF");

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
    msg.setTimeStamp(0.987843635076681);
    msg.setSource(31295U);
    msg.setSourceEntity(108U);
    msg.setDestination(65310U);
    msg.setDestinationEntity(187U);
    msg.plan_ref = 1686325952U;
    msg.id.assign("MWIENKUVKEQXDOYRERSVRDTKSUOACUHFBIYWJCXBBVTACTNMPGZWUEPFCAAPKEAKESJAPDIGWQAXWJPUNQJKIRDXTNSVLHWKMFYQELVOMYCNGTMHTIQPXILGCYSRGIEOUHSTCYWTCHBQZYFJDXDLFUZRLZJWLOVUINJZNOWZPFGLRARGDYVQUJCYXRQXBNBNSHMSZTXQLHPRJVY");
    msg.memento.assign("YMNBRGAGCOHEFDZUFXGECOYSYWPIEUBQFBKCTGBFUULRFMWCDIHEZYZVYULHNTXKXJOTAJKKLKOCSDPFPNOGZNQSKEJIGMRZCGXGWQFQRVLVUERSDQKWPTYJJPLSKWLXOHPMDSMHZPPXDQIQVHFTHNEGWTBUISAXIDVOYJIXBVPZWWALTAOARFNOUYIARPE");
    msg.timeout = 60602U;
    msg.lat = 0.8250669963982551;
    msg.lon = 0.9892033434220943;
    msg.z = 0.9657906046828579;
    msg.z_units = 243U;
    msg.speed = 0.06603427824870767;
    msg.speed_units = 252U;
    msg.bearing = 0.4123463166028116;
    msg.cross_angle = 0.12275601789339152;
    msg.width = 0.20795509312140625;
    msg.length = 0.281921313628857;
    msg.hstep = 0.8725148256606423;
    msg.coff = 237U;
    msg.alternation = 72U;
    msg.flags = 27U;
    msg.custom.assign("UWEFDWYENFXNYEULWRKUCTGJFYHDCAWIDTTNVGXMWVSJDOAMORKNSWINQFCJPAMPGHNVRCAIHCBXLEQFBIXPGCTAPSWEJBDFWLLYIJPMCXVHZPCENAMYOOHZLKNSYFDNFGAQOZJBGEKPQTQMFQBTAGUAKTUHMXLIXIEVGUOJQYJLKHBXRFUEXZZDUXVRHWA");

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
    msg.setTimeStamp(0.593821391620687);
    msg.setSource(17499U);
    msg.setSourceEntity(159U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(252U);
    msg.plan_ref = 739518061U;
    msg.id.assign("PUSKALVVWRWVECONQUGZDGMOHTYLKWDVGQYXTWUJZGGBJI");
    msg.memento.assign("OSIXKICOPDIXBIZTBBBIJARYWNALHPOLFHWEUQGUSGIETMJGMROHZEWDKFEKQMZUEBIDOXFJGAOMDFXLPMEJHRHWJRLSNPVABIVKCBFOCXUVBRDNFAGHSTGHQYAPNPFVSLCUWKLVYOKGTWVCDMNRBGKUOLSETRRCMAQTVLQNGAUXBPESTYUVYNFNLLAIZSAOFCXFYEJZYTVXUXRMQREDCGPQMDYCJHVSP");
    msg.timeout = 54462U;
    msg.lat = 0.29853741793334365;
    msg.lon = 0.8690983036454777;
    msg.z = 0.4065234665152755;
    msg.z_units = 151U;
    msg.speed = 0.5441551422470237;
    msg.speed_units = 51U;
    msg.bearing = 0.12697822534556713;
    msg.cross_angle = 0.0388236815223566;
    msg.width = 0.07515590363685265;
    msg.length = 0.9399823130136336;
    msg.hstep = 0.14326485478083018;
    msg.coff = 218U;
    msg.alternation = 144U;
    msg.flags = 252U;
    msg.custom.assign("OLWJRYGUNOAFVPFKGDDEVHSWKXLKTMWQRHDGNXCCBAKCCCZSNAKZSFNEEQHHZJPCTLNMZXQLLROMHDHYYPVJSIAMXDIVKOSBUZUPYIEPQJCERIXKIYAK");

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
    msg.setTimeStamp(0.3308856617985587);
    msg.setSource(46242U);
    msg.setSourceEntity(249U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 4261112985U;
    msg.id.assign("NIZMMHMQSBGIKYCYRDFHTSSQCMEKIGELZDCMPFERVIQWXVHDNTXAESNPFYUDDZJMGETJOUYQTBRGBLUCPGLOMRFAQJUSHJCCVYONYSJKLKPBAJKEUAZDVFPZJCOVZTOFWWHLEBVYDEGRITWVGPXGZUAXRUAZHQQJPWRZBTBNEYNHKGHAQNBOHUIVMLQCAIRCODYOHBKNKVPSFMLTQIZNLPURXYDNFGAEUXXOFWSXJLCOMPJVFSK");
    msg.memento.assign("KIANPUQBCMRASYMDGFYYPLWWRGBPZDORIMJZCKHACXWTPORTHEXJWEJOZTVDXFLLBNFZRHOABFHHXYNSIVDBZXGRJMFQVBJTQVIZPSWSEOWSJMDCFDMCXKPFIGULNEOAKCGGVLTHBOQVJNUUKJUOAFVQPASXY");
    msg.timeout = 19616U;
    msg.lat = 0.9514998038532424;
    msg.lon = 0.7664695292130407;
    msg.z = 0.9148838448811409;
    msg.z_units = 222U;
    msg.speed = 0.31597906515581653;
    msg.speed_units = 170U;
    msg.bearing = 0.5283262917898269;
    msg.cross_angle = 0.1566070037461208;
    msg.width = 0.43839171523973974;
    msg.length = 0.3249297534922718;
    msg.hstep = 0.8018653545207467;
    msg.coff = 7U;
    msg.alternation = 181U;
    msg.flags = 48U;
    msg.custom.assign("DQVBFVYFWITMJPZGIIDERKHTKUJCLWOLICFZZQQVMVTCXOMULOWHTPMLLAIEHJETKYKBJOMWOBRSFXJYLOXUEGFJEUUKBYEMNPAKHRRIIPCHAXDSQUUNOO");

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
    msg.setTimeStamp(0.9697993891534868);
    msg.setSource(16087U);
    msg.setSourceEntity(250U);
    msg.setDestination(14944U);
    msg.setDestinationEntity(176U);
    msg.plan_ref = 2654959873U;
    msg.id.assign("KOVWMDDVPLXCHYCRDHXVGWQPPVLQQZTBGLBOBIDIXRFKEYPVFSAQXRUTIWIQAQYUPNJOZYCQGRYKHYMIKUNTBBEHOKHPBGRLYMSJEUKELLRKFHSCZGOHFKZARONMWMVNTWMWVFJZSUFYSINGPGAZNFO");
    msg.memento.assign("JLNPVNVPIKSJDKMAKMXTCJYQBHSRMEXZGHTKALLGTWN");
    msg.timeout = 20899U;
    msg.lat = 0.4407847964457984;
    msg.lon = 0.1215040169733741;
    msg.z = 0.18554539230283096;
    msg.z_units = 97U;
    msg.speed = 0.9591019545637153;
    msg.speed_units = 127U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.35094146638937995;
    tmp_msg_0.y = 0.09707665986283143;
    tmp_msg_0.z = 0.7661260986089614;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IUAVCJXHEBDMHVSXJFPQYUYBZTPRAFPIUOMZKPIYTTWHFIWKKWUDFMGBCGSMACHMBJTQVLAIZXCGNPRRCITZTCTQZXAXLDJZWKINVPGRQGLYUHAFHXFENBYRXCYXQVUQSSLXXLV");

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
    msg.setTimeStamp(0.22975846775485753);
    msg.setSource(61396U);
    msg.setSourceEntity(14U);
    msg.setDestination(45412U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 2046224107U;
    msg.id.assign("GZGCZQHEPCRKKZSVJEJPPAJWVCBISQWNUTHJRUHIGVLBMTATRYHMAUFBDJWJBIOQBVGYPSVN");
    msg.memento.assign("GOQWEYIQFOFYUYLROUSGBAAJBFAAJYLZTNTMDMCLGJKECAWHZKBUYLBPHDITGMNDIHXWMHQWCUJRKPZHCTJZSVYHPTEIKNPFIVROCSLSEOXZFUOXZMSDRKOHVBVXWDWNKAGGKFXQRVQ");
    msg.timeout = 3366U;
    msg.lat = 0.38992769990131937;
    msg.lon = 0.3519259319613558;
    msg.z = 0.4030236953377353;
    msg.z_units = 206U;
    msg.speed = 0.8447979905826523;
    msg.speed_units = 33U;
    msg.custom.assign("EWHROMDSFZMAJZOTGQSQUBBKUIIXTUHILTAJSLIGGGZAIYGLTSYBLEUXPESSORFUPFJAHLFXRSKJQGSMYQRTRIWDVRFOVQMOZNQBKAUSGKWVCUKGPGZXFBNXAOQVDADBOYNKUPWPKHBDBLWIJPKVROPMVFDECKPIEY");

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
    msg.setTimeStamp(0.04726485166549521);
    msg.setSource(20233U);
    msg.setSourceEntity(117U);
    msg.setDestination(64084U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 1702218589U;
    msg.id.assign("URTGFUCUCSXMHPZDOBOQHYNEQTSLWLVGDQDEYTBWHMHFJKNUNVWNAGYKLBAUYASHSJSNVTIKHZAQKYIVRWOUWOJUDIEWBYPKSYJMXSGEHBPHMBEAVMFECFHYBTCJOCOWPSKXAALZ");
    msg.memento.assign("SQDYEKQGZFSCHAEYHKWTKTAQUUJRTXAQEGRCJLRMKVVOPAIXJNDYZEXLGLYFLHA");
    msg.timeout = 38944U;
    msg.lat = 0.9378475937291544;
    msg.lon = 0.6223631125300201;
    msg.z = 0.9097793455321498;
    msg.z_units = 83U;
    msg.speed = 0.9004750063887311;
    msg.speed_units = 226U;
    msg.custom.assign("RSUZWXJARFHBJORJBHKZYBLCPVXNMXKRZEBBGNMAWDUQKSAWBSFGTCGICADYHVZBTWEXLCNQNMPILRWSRPTJNQMISCMWZRIZKJGHICNOOUZBT");

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
    msg.setTimeStamp(0.6912679712682429);
    msg.setSource(6640U);
    msg.setSourceEntity(209U);
    msg.setDestination(7092U);
    msg.setDestinationEntity(115U);
    msg.x = 0.8080911352582462;
    msg.y = 0.2671303318829593;
    msg.z = 0.9951268045624972;

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
    msg.setTimeStamp(0.1571831915354186);
    msg.setSource(45985U);
    msg.setSourceEntity(92U);
    msg.setDestination(23577U);
    msg.setDestinationEntity(92U);
    msg.x = 0.18190501610041387;
    msg.y = 0.06010117285632932;
    msg.z = 0.033693449744999104;

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
    msg.setTimeStamp(0.4368610554208592);
    msg.setSource(5562U);
    msg.setSourceEntity(76U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(14U);
    msg.x = 0.26370948564124097;
    msg.y = 0.9601044475708097;
    msg.z = 0.2989756559743667;

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
    msg.setTimeStamp(0.3389801140740848);
    msg.setSource(53715U);
    msg.setSourceEntity(157U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 2953785148U;
    msg.id.assign("QBWKEKIQFJCSVGMVDMPZTFDEOIKAEGPLWSCHDNCZZPDHPCTUJUZYTREUZKDXREZBYOMEVXQVHBTBPFTPVCGZXUYRWITVLJNSUIQDXBVYQJQZFTREAPHNBUTNCPJHOAEEMFRDYREOMFQWOKQXADOGCYMKDRHVAFRLSWWQLNYXWNUXYOGWABLIHQGAHSAJJJHUVCCNLL");
    msg.memento.assign("JYTJITYJWLQCICHWMHEPMMNRHNFEGHRTA");
    msg.timeout = 4673U;
    msg.lat = 0.45431672497173303;
    msg.lon = 0.21095965787110138;
    msg.z = 0.7458442997006707;
    msg.z_units = 206U;
    msg.amplitude = 0.8143053775695152;
    msg.pitch = 0.4964397976501461;
    msg.speed = 0.2822851844362877;
    msg.speed_units = 184U;
    msg.custom.assign("KFWVWUJEGGESAFNGMQZPZQROXDXNMXTZWCGSLHEPFAWHCHJUZMTRGLUIMBCDBSYQECRESOKUUNAACVYWAKVYZPXYQTHMKKPJGYSCTTLSOOWBNDTXQLIHGQWVLNWOHFPZAEOQLTRJOTRFVOEFRXISPLFEYWDZIXYIUPCIDUJGPWMLRSCUMFBNNBKHRJCKZJDILKZKABI");

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
    msg.setTimeStamp(0.2730420519409382);
    msg.setSource(40094U);
    msg.setSourceEntity(211U);
    msg.setDestination(13389U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 1346306793U;
    msg.id.assign("MABYANQPJFAXYYZIUMZCVWRVGLFUUSCCMXARTDKPDLQLPCZYOVWNQMSEZKVUDJRIGCROBPJQGCXKHJWJDHBKOKALXLIGLBTOFDTIGIPIREYFWTORLQZJRNDCXZXNPFYRCPZGSBLKBSJPPVNYOSYALXDNN");
    msg.memento.assign("VKKQAEQDDOPUDJPNVJOROCMJCNXXPCEEAIYQSAQGVQXGMFBZYXQJEWIBTPMHCHKNRFYSXYNLNXNELDOGAXSVMLTTXLIECIQTOROEETCKSXQSLPUAHIDQWDLZCZKUARLNRIUHVYUFFVGTOBGRGZBYPUIUOWTWHMZSJGDTYJWRPTPWISBLNFGCYEGFPC");
    msg.timeout = 4774U;
    msg.lat = 0.7747758410766772;
    msg.lon = 0.18326030922624093;
    msg.z = 0.8787169159667678;
    msg.z_units = 181U;
    msg.amplitude = 0.2976670213393684;
    msg.pitch = 0.45739770970015636;
    msg.speed = 0.6466042312501064;
    msg.speed_units = 187U;
    msg.custom.assign("UEKVULIZWWOPPSEMTTC");

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
    msg.setTimeStamp(0.05758071148677235);
    msg.setSource(60520U);
    msg.setSourceEntity(117U);
    msg.setDestination(45157U);
    msg.setDestinationEntity(224U);
    msg.plan_ref = 876837768U;
    msg.id.assign("JCPXGESEABBYHULYXSVGUIRDZDKUJQZVHGDCLNIYLCCRKTBPFNPRCISXGJTPCEOBDNYWWGKQHKIZKDZTNHWLUVYPEEYMSORXLIBOATZKIIXWCJPYEWUASLFFVAANTJHNFPSOZPOCSQKUFDJGXGPXZHURFMROWOEQDMRVCQQVHMLDSQVDGDTNWUBVRWZLUAXLHQSYOWHVFIHBKJMQFWSTBTEMQYMFBZNGCVYMTPNRNEKIBZLFTUXJ");
    msg.memento.assign("EEDTHRRQUERIFOVEIGVNWXRPFMBXBYDFZZXOMYJUZXETQTAFNDSSABUWNEIZOJHNZAFEWKJQNDRGWLKRWYOCLMMMDDJEGRSBILVYACVMYBHIVJUOTMYIJBTHKWVPKHTQAACCUJNPTFYAWPXZJEUFTBGSQKSCLZQZQBLXFVFVQCBGRPXGSPBLPQNCAXLKJOT");
    msg.timeout = 15447U;
    msg.lat = 0.9044590067842113;
    msg.lon = 0.19932781741575534;
    msg.z = 0.32296138634187055;
    msg.z_units = 169U;
    msg.amplitude = 0.1681900386044709;
    msg.pitch = 0.1528540693106596;
    msg.speed = 0.6156462216646728;
    msg.speed_units = 249U;
    msg.custom.assign("SCVPSCOPQPATBVNEDJDNRAGCQDVXCFUINUPGAKKWKBUBZPYXIEJSNHWLTHPMWIDZILXCYOEJSVHFL");

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
    msg.setTimeStamp(0.7570936072482853);
    msg.setSource(61446U);
    msg.setSourceEntity(61U);
    msg.setDestination(20331U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.24902159730610274);
    msg.setSource(14891U);
    msg.setSourceEntity(117U);
    msg.setDestination(13052U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.03278416197883027);
    msg.setSource(7749U);
    msg.setSourceEntity(168U);
    msg.setDestination(36798U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.5463157891591024);
    msg.setSource(45384U);
    msg.setSourceEntity(169U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 1184619282U;
    msg.id.assign("ZAJCQMYLBCUKCAVJABJWUJVYJUSTFSXVFPZRTEGRPDIGDOTWCTTOXAHTPFJBXCZWZRWGMKWOHEVBQEZYYAJVIMSDMNMHMEKZDHZRBWXLZSRXWVCYFDBJSDOQIPLAERNHUEGNTLVUSQYLXVGMDFIFAPQDKONCSUTSKKFUICAQLDQORIWOQYPKAIIGPOYQXEHK");
    msg.memento.assign("YTRQUHDQYYXGYDGBDBSZNTMXJTWQZCQGIPLGLUXOPVFMRJEABNDMYCAQNURRAOWFWTPETPBJJDEPXQJPQVMHPZELJNUOEQBMIYKHXKXIDQSWDSPVYSORXOLSVHGWCSLLIKKOVFTMANRUGCRTBXVZKFXYGKARENMDJVTLWZUBUHXEYYLLDBECHCUOZBKBIFJAPPHSJRSMNICVWOZAQAMWJUTOCSHFGRFVIZ");
    msg.lat = 0.24288373688901377;
    msg.lon = 0.724712885563149;
    msg.z = 0.9831985507134212;
    msg.z_units = 38U;
    msg.radius = 0.5696111335789885;
    msg.duration = 27630U;
    msg.speed = 0.4266208457996993;
    msg.speed_units = 214U;
    msg.custom.assign("SOSOREEWGRAIXWWHZBRMNPUKJJIHVDKBDEKFMXXMPGXNLFJVSOBMRZ");

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
    msg.setTimeStamp(0.7172437992875931);
    msg.setSource(19959U);
    msg.setSourceEntity(17U);
    msg.setDestination(45274U);
    msg.setDestinationEntity(248U);
    msg.plan_ref = 3924986997U;
    msg.id.assign("KAJCKMVDCDPWGVCZPINGNSISPBHUFFLISHXJYOPYROVOAZVSBYBOEDQZMIOMEUXBTOURIQVIXRODCNLAELECUQZRPMYRFCXGWFGOGBHLHCANBDTJEXJJQHYWMNEYIFYZKQNMLGFRUTFQYSSAWXENKPWVHKKXWCJRHXTRWQZMKGSJTAFZTDGGHEEACUBIQZVMZPKUHVLJQLDNNRIWDATIDMZAHPBTBY");
    msg.memento.assign("AAVOADPEODZMHOMSNNTGWTPBNIJYMWCXEDFGVNKUSIBPAVCTWFAOKGRNESBNLCTQBIBOHCXYZRWSIZDLILODZJCSDBHWPSZTELZZLJUQBFPOLUYPNPLCXXVKILEIDCPUGEDMWVKVDTWUQQKXNQQVRKIRYFBTMMFY");
    msg.lat = 0.37250065289351597;
    msg.lon = 0.5891688280420148;
    msg.z = 0.5471026384878941;
    msg.z_units = 200U;
    msg.radius = 0.3556511095924678;
    msg.duration = 40418U;
    msg.speed = 0.27989866609257974;
    msg.speed_units = 5U;
    msg.custom.assign("XEHCKJOHKPJSPMBDLEQCTYLSHGNCXZTIOSXDAMIIRUGBSBVXEMFZLFPMABILVNGSZDGEHNAPVHQCWEZNYAGQWDKROJYFRPTTAMRVSRQUTQFMZWZCCDWJXNSBHRVNKFDGAVDDJOGQVSCGUUHAGPXAHPIKKEUXSVVJAOUTWOLBAPBFSUXWJLLTPJFRYORVYLWUCYYITQEEIJNOYFMOFBGDLY");

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
    msg.setTimeStamp(0.917492414209846);
    msg.setSource(26018U);
    msg.setSourceEntity(180U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 1881242676U;
    msg.id.assign("IAZZPZLTQMMJJVHOFMGWUCMOWGBVGCZSCAFUZJMJFANYXHLOGUSKJUGBBLGCEROTDRAKOYWMPEIYVUYPTGESEURFDNOHLRVJNGKWATHJWNDTYNISPTPWAKPTEBZFDQJQFIMNJBPRXDNDDYXCPYFTAQVNIIHAUXFXIGRYKCRVWXGVNLKKQSBZH");
    msg.memento.assign("KHJZRLVRJQWZZWBVZBEIBFXKXZFEHPEHTVNTCKMLGFUDQOIKQPAECPWWLIBMJNJJXYBBZOISAHLUXDQTQZWBUJRNOCRTRWMNYDJVDKLHOKIPXSBDGQBUXWNGGTCWTQSJCCNOMJLROMTXFSFYOYITHPJENEYFDHQLSKZGANVKCAXWDNOMKRMUYAUXUYCGAQLGYFSYZWHUDORVPLGGZPCEPVHTVAXMYCRPKF");
    msg.lat = 0.12329658949769295;
    msg.lon = 0.4973785155596724;
    msg.z = 0.828636193202705;
    msg.z_units = 97U;
    msg.radius = 0.5583440716594521;
    msg.duration = 23794U;
    msg.speed = 0.8312718926920906;
    msg.speed_units = 64U;
    msg.custom.assign("TAZALAFCLCHTQJUNEPAJLEJSOCTHFPMVTMEISAXNKYRHVLMLFSWQFPCIGNQTGFLBRTAMIGLLCEUBZKHUPIUZFXFGKJLNDEUPPWIANRQJKYUYCINDWXSPIMAESGRHBTRDWZRIVDXUCQDZNXUPCSYDVTHBMSHI");

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
    msg.setTimeStamp(0.40840971297579554);
    msg.setSource(21755U);
    msg.setSourceEntity(7U);
    msg.setDestination(27981U);
    msg.setDestinationEntity(233U);
    msg.plan_ref = 2472669153U;
    msg.id.assign("WHPXDVCXEFLEZADKPJZTSVZAJWQFTRCHFWAWHVPNSHSRDOIARAMNYIYLGCRQMZPOHPQKWOYPIZNYRLNDXLYSSABGYDOCRJRKIVYMILCVXXSEEUJYSLESBGNTFHQHVTQZJMGJMKRGLJCNUBZXKBGWUERLFINLZLCEQEO");
    msg.memento.assign("WELUBXJYTFBPGIUMVVJZIVNIOGTOJSXUAPYVCRFJDKLDNLVZNUOEBZDPAONIVEFCXKSYTZBCHBPDGCXTFADCNXJWXRGRPMLRHZOXNQGQUHMPUIBEZAZGSCSWTBQLEEMKTKQVWSEDNVYRQOMFSRDIHUWCJYNHJAMOSIVKLLHWJLBXEKRKQCYMGDQPFP");
    msg.timeout = 55160U;
    msg.flags = 90U;
    msg.lat = 0.12399784733359787;
    msg.lon = 0.008400521550510631;
    msg.start_z = 0.4416064046626609;
    msg.start_z_units = 213U;
    msg.end_z = 0.38292331454821105;
    msg.end_z_units = 138U;
    msg.radius = 0.8982043110601323;
    msg.speed = 0.7780803171966704;
    msg.speed_units = 156U;
    msg.custom.assign("ZWGBZIPHROOTSVATQ");

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
    msg.setTimeStamp(0.7057371294055222);
    msg.setSource(46966U);
    msg.setSourceEntity(114U);
    msg.setDestination(63877U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 2613058022U;
    msg.id.assign("XPNDRZDBFSLXWDNSXCHIWFURGSWQVVCZEQPUIHTCKPZYYUBPWUNFSLYLKMDIWN");
    msg.memento.assign("DTBKAWMPZQLGLWSNGNCBAIOJHWNKUUSELLLFFJUATENAOKMRHYGRKRXVUVIFOVQUVZMELPSIQWDXABZRUSTROTUIJZIEYMEFWFSHEKLLJOOPRIPRTVDCTDNUCQVOYGZHJXOLXZJOZIAIDHSYBVDTBRJDXSMWPYCCMMFG");
    msg.timeout = 19804U;
    msg.flags = 76U;
    msg.lat = 0.15308681260614387;
    msg.lon = 0.3296439315808726;
    msg.start_z = 0.7518481440930337;
    msg.start_z_units = 102U;
    msg.end_z = 0.4692527247316213;
    msg.end_z_units = 0U;
    msg.radius = 0.2930577218498266;
    msg.speed = 0.9671023525392369;
    msg.speed_units = 144U;
    msg.custom.assign("YKYCGPZQQHWGAQURIOPVOSKZXMPWLXUMXJXEHWBTHVYWUAOGQKXOUTCWDQJKWXHLRRTGBJPSWFTQCUFZFHRUSPINISAIABYGLPFHYBEUGEVKTHPCGVMIQFLJLJCETFBICSKEMYEXVRHZZTFILAUMSOSDMOARDABCNXBSASCTE");

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
    msg.setTimeStamp(0.17602523823200966);
    msg.setSource(45898U);
    msg.setSourceEntity(211U);
    msg.setDestination(49938U);
    msg.setDestinationEntity(189U);
    msg.plan_ref = 163138619U;
    msg.id.assign("AJGRLWTTMVYCIYYUFGVUCUNHO");
    msg.memento.assign("DABXNVSQRMVWMVCXHBWFSFXDUKXOAEZLCXZEROCTHHDGMNJNAGQAEWYGWYAOTPJCUQOTCLSIDYREEYKTDMPDKACEDHZBJVNRYQAUUPDZVMOQGRFVVAIRVHZZYQYNUOXBCLLTYQXSLIWKMVBLCLKSIKJZ");
    msg.timeout = 37271U;
    msg.flags = 224U;
    msg.lat = 0.15609004112228575;
    msg.lon = 0.6122637093845748;
    msg.start_z = 0.19533533950596438;
    msg.start_z_units = 245U;
    msg.end_z = 0.9176431555393839;
    msg.end_z_units = 102U;
    msg.radius = 0.996875052867551;
    msg.speed = 0.43101111181141716;
    msg.speed_units = 7U;
    msg.custom.assign("IOXDKHUPPNMKTJKNGGEZMMMBXZ");

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
    msg.setTimeStamp(0.035804888179793104);
    msg.setSource(45910U);
    msg.setSourceEntity(47U);
    msg.setDestination(9531U);
    msg.setDestinationEntity(146U);
    msg.plan_ref = 856425057U;
    msg.id.assign("AEBKKNUXSSVNJUNBNWLTJRZZIBKYMPTWQFHFAAGYOJFJNPEOCVUAPEHFFQGUDCGWELBHYYYMRBJXOSYKKFCIODCGWYZVMKPHXJXV");
    msg.memento.assign("GNBHPOXRNYIEGGBOQAHTLPJLRJOKAPIQCIJTYECHTZFQISRHMUALSBCMVVSZSICNONXIEDXUKDTIKCYQTWOCNORKVWTVZERMWJRJSDMAFKRIXNWGIBRXEQYQJHZBYXGEYSUJMYFFHTADDAYVULSSYZCZAVFQCAKSIWQUJLXBHUBKDQZNVMRNMTYNHWAXUQGPKUDOGEDRLHCMUFGW");
    msg.timeout = 28555U;
    msg.lat = 0.08610211599475659;
    msg.lon = 0.8192504468732054;
    msg.z = 0.9864194223680953;
    msg.z_units = 44U;
    msg.speed = 0.2662091556515447;
    msg.speed_units = 52U;
    msg.custom.assign("QIEBVRMOWYYSXVZXYOMPYZUIVTSPVSLZMAQMEDIZCRIBMNVHWGGCLZC");

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
    msg.setTimeStamp(0.35068162643355383);
    msg.setSource(22127U);
    msg.setSourceEntity(223U);
    msg.setDestination(37477U);
    msg.setDestinationEntity(107U);
    msg.plan_ref = 3609968629U;
    msg.id.assign("DQOMAVYCWYOARICPTBEEUYTEESYAHCT");
    msg.memento.assign("TNBBVGDJYLWXDIOSSWAMGTKJJFZURGRXMFCPIUTKKJUXSGSSEWVBMETFOPBLYVJBSQDEPXXVRKWQVDLHZURSEGYGQZAZWRJOCEQSDRSCIJCLKAPQKBAYXRADLTUICXYIZJHYBAGZINRUFPFHCZVJFHUQPOQUKALIEUDLKHWWFCKMGOPGYDBNNXPNCXAZHOEVMFBIRVIWWTQOLTGHRYPLAZYTYMODIBKQTELWMDEVNHNAFVCST");
    msg.timeout = 8476U;
    msg.lat = 0.6654801012720093;
    msg.lon = 0.22483474549511284;
    msg.z = 0.5539791831826757;
    msg.z_units = 142U;
    msg.speed = 0.20568455966436638;
    msg.speed_units = 185U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5835762654885233;
    tmp_msg_0.y = 0.6147867652061519;
    tmp_msg_0.z = 0.5977642261012278;
    tmp_msg_0.t = 0.2926344721192675;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YGXVBJMQWVXOBUCZPUPAYGLSWVJEXZZZQJJTURFIHRONHOOGLWQRMOGQHPUHDRNYBEEHFASZLCOHUUFRSXBKAEIXEQCNIMREGOVNUAADTRLANDFBSDVVKLFIWVPXQYMSKTGNCSEJACTYVLGPIPZBLWKXHRGKFVYDWUGIMDFFSNWAAMKJHYXHXSSYBWEK");

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
    msg.setTimeStamp(0.9355420707043747);
    msg.setSource(22492U);
    msg.setSourceEntity(10U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(117U);
    msg.plan_ref = 921149655U;
    msg.id.assign("EAVXSZIZWQSYSSIVJJNDBRHPJUKZXLEJBKGDWATSWHE");
    msg.memento.assign("GUAVOFSQORAWDHEYUZYXZMFSEYBCSAPGDCWIQIYXTSQMONRWBUKFEFZHCHFJJRBVRPQC");
    msg.timeout = 60005U;
    msg.lat = 0.5078986046365183;
    msg.lon = 0.1862162342633117;
    msg.z = 0.250911497554665;
    msg.z_units = 145U;
    msg.speed = 0.5613026906057123;
    msg.speed_units = 0U;
    msg.custom.assign("OMVIAYSDAUHSKFMVGBVGOVXWTWYRZT");

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
    msg.setTimeStamp(0.11673055311396074);
    msg.setSource(48956U);
    msg.setSourceEntity(243U);
    msg.setDestination(28455U);
    msg.setDestinationEntity(136U);
    msg.x = 0.4307189500633378;
    msg.y = 0.028380165488188114;
    msg.z = 0.28802249348471765;
    msg.t = 0.48998546931956855;

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
    msg.setTimeStamp(0.10924941615296324);
    msg.setSource(62228U);
    msg.setSourceEntity(134U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(32U);
    msg.x = 0.12458266185025457;
    msg.y = 0.5162054337354379;
    msg.z = 0.18112221993155386;
    msg.t = 0.43424269920455627;

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
    msg.setTimeStamp(0.41623010802592575);
    msg.setSource(44787U);
    msg.setSourceEntity(29U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(93U);
    msg.x = 0.6503560116480869;
    msg.y = 0.6218822498613873;
    msg.z = 0.1624450071575151;
    msg.t = 0.14835450024210206;

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
    msg.setTimeStamp(0.4066423964585705);
    msg.setSource(45598U);
    msg.setSourceEntity(119U);
    msg.setDestination(50456U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 4074264663U;
    msg.id.assign("GDNMUFUCCCRUD");
    msg.memento.assign("GMJCFYWTPIYORFVSTUFWCLJYGELTJUNHQXLZDGQCLWAPJIHHXFHUBXSLIKDFCTSQIGEXKYDKLSXCPAOTEPOZDIAQJAGPVPBMOSNFTQDNCJIUJOWIGUNWIHSDPDYVEFFZCFRAVUBRCHSGXQKFPZRNMDXBZNHKUJEIZSLDLZMCZSOYBRHBVJTCKKKUSEWNKWEOYIEBVOUGXXVJZNAMQKBQTNMOVRRWDPAAVBMUQLYTRERMARQMGYHBMVOYX");
    msg.timeout = 58244U;
    msg.name.assign("PXPUEPRQAHBLRTHCVUSAIEYRNONBMPKLGZQKGCVUASPJIEJTSHPTZBNUOFEOQ");
    msg.custom.assign("EWUWLSAANVRIMBLOGDCIXNOPSZZRMECIMRTSXKIKPCDEOXKBCPIIQFCAKYFJHICWWPUHTQAFKLNSCZNTCPMMLUOLTAR");

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
    msg.setTimeStamp(0.14798820299542848);
    msg.setSource(4345U);
    msg.setSourceEntity(109U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(171U);
    msg.plan_ref = 2600199623U;
    msg.id.assign("VFRHFENEKXMPQQLJPZGOVGNEHHMMDZJDHPUESIAXEQMOBEPBLFMTPCBGOATVPSQOSMRNWFSAQCJDEZULAFPOZYBAMJFFPNQLRUVJRPIDKJJZYUVACIAIFWVKBMMXGBCCGONGDLABZVDSTYLJTAENCWDASSIDGELKKLHQJNUXYNBCFTNPLGXUYDWXHUKKYUWBDSBIZVGOUTZLQHIVKYXFYXZSQHRTC");
    msg.memento.assign("PBXMWXFOKVZQABBOELFTKUEBOSCGQJJEHSRW");
    msg.timeout = 39222U;
    msg.name.assign("BHALKCJNDBJJVBPRWORTLCGVFNKXYXYLWFBIAIXMTOUTSQDPNRWXOKJEQKPPNRLROUSEPUXYURNOAYDYDSZFNTBVQIQQOKLZUAOTWDPZEUGVWVHNHDIKAWJJRRWFYHAZHLZYBXWXZONEPJPBHTEQXUSIIG");
    msg.custom.assign("LDNXXBUEKNOHQRGLVDQZY");

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
    msg.setTimeStamp(0.1495922420490935);
    msg.setSource(3158U);
    msg.setSourceEntity(184U);
    msg.setDestination(29632U);
    msg.setDestinationEntity(32U);
    msg.plan_ref = 835641390U;
    msg.id.assign("AWXJHJVLHWRDEBGNQCRMLJKQFRRCWOMSYJDAGFEVLOZUKLUXJDCTTMHBORMKUGJMWGYHMFDW");
    msg.memento.assign("MVLHBKOZUNAPEUDTLVCSLQGQSDESJGDBKKEAQM");
    msg.timeout = 51598U;
    msg.name.assign("WMECOOPGPDEHFSYYDEPOUKWZUGNOFMQHPSBPGARAABZSXRHQTSCALIAFPJDGTMBUJAEBWRLJYMIOVULAYFFOTRTGJEJEUGDGYAKPBKEZJCBTXXDSUWKHNVLTKSAOTVJHMCCZCQGWHXHBYJZZ");
    msg.custom.assign("PVVMGQLSRQNCNSDQETJOIJRAVNKMRBKTAOPWIDKCEZHTFWNAELBZNMZMLIDPFRNLVHOPIILLURJEGJWHRQYHIIXGZJHERBHWDCJUOSUBFLHAFTTIRGVSBIHZYMNCCABYGAZOLJXMYVETVKMULEPPCXWTKUQKUQDQTDNCTOMHYJVSPPBTBUUXPDOKKQXIAOQBURNRVSXGWXJDGYSWFZEELFPYZMSGXGYZZXYSGXCJHVFYDWMCUFE");

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
    msg.setTimeStamp(0.9186212698999899);
    msg.setSource(26852U);
    msg.setSourceEntity(228U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(32U);
    msg.plan_ref = 3567490090U;
    msg.id.assign("VHVUHVLQSSRQXRJDPCSAIJVNODMFHSRWSMEKJIXKZRMVQPOHCYFUNEGOKXYLBXVDYEGGONAMBWEJDLWATNFIGBDJLVLCNZPWVTFOEPIGFCJDBAZFBPFQOJUCWQPRZOLZYIYIGFBMUXVGRYXTXQRTJKLKHA");
    msg.memento.assign("MBEINHJRLNKBJNKXKNKIUTCLXEQEGAPGRUHLYUSYQFFEIQRFNSWZZHUECJHVEGISUDJOZUDORGPPYTKYWXWUDJKVVRWAQWSTSZLIPXXXQGOXNMYEMFVD");
    msg.lat = 0.25449292656332834;
    msg.lon = 0.14973648862383027;
    msg.z = 0.5690513392300159;
    msg.z_units = 188U;
    msg.speed = 0.37394247794061797;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.543470915193059;
    tmp_msg_0.y = 0.1065448927811048;
    tmp_msg_0.z = 0.9622414003486321;
    tmp_msg_0.t = 0.6765199032780549;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6280815662541694;
    msg.custom.assign("LEHLLSAUYGPKIVBUNUYQCJZLFYFANYAWHIBFCSBEQTGGIJIRKRWPFYDCKDKMXMGWDPDASFOSAUXIJQPWNXLVTUNXNEOWOVEZGXCBTBPYBXGWHULQHKSVYDSKVRTGGZRESACFPQZFLZOAPNPEJWBRMVFIBHSLQREXTHKWVOLCAAMHXFETNDSUXCCVQMCHKRTTIYERBGVVKOIMJHONRSYDTK");

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
    msg.setTimeStamp(0.1645044183819384);
    msg.setSource(23793U);
    msg.setSourceEntity(85U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(47U);
    msg.plan_ref = 3095223936U;
    msg.id.assign("CZHXBVIAGTCBQKANKAPJQEYGEQJYVOKDCHYQINZPSXPFLORGLHSWXJGLVBNIUVWSOOOHMUCMDOKPZLFJEIKXUQPAYLFDIJCXWBSPZMBEZNXUKFHCNVVRMVLRZPQOQBGFBNPFAZTCZGRMIHKOVUEHXJTCUKWDWBHQYTUZYRDDEXWJGUTMAGRDEEYWNNHCJILFDWCRSIKQOS");
    msg.memento.assign("EQVIDWCNHIAFRSXALGDGJUTMVGOCYUADKEHZDPWSAPXFWQMTDSVJEEQZZDBCCSINERSXKNWYBZUBHRJRVKVVTUFSMWPBSLOKTZRZZX");
    msg.lat = 0.930245335773826;
    msg.lon = 0.32933327102970666;
    msg.z = 0.6523993927001485;
    msg.z_units = 8U;
    msg.speed = 0.030950797852952294;
    msg.speed_units = 54U;
    msg.start_time = 0.05011808582099386;
    msg.custom.assign("VJNPRPDOTRAGUBPYUPVNTYZLUKCBZMUQTJJUNSMIAQSXMSNPLSHADXCIQDICXXWBJDVKZRITAGJUHTPCEMHGTALKUGIZEUO");

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
    msg.setTimeStamp(0.11518469676936793);
    msg.setSource(29718U);
    msg.setSourceEntity(25U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(196U);
    msg.plan_ref = 33671867U;
    msg.id.assign("NQAEMBLHRPTTUXGC");
    msg.memento.assign("RUOOIPXDNJYSGAKKJFWAETURVZKYXDNTTVWSDZQYIKDMJOURNVHXGZHMHLCOBMJDRRQZTPTPIHFSBKBGAPGBYYNIGTVYTSACCVKVXZHWIAQBBPTHOCCNQXOKMNKSQAIFFMAGELYRJKLQCWQBRJAABR");
    msg.lat = 0.1733580102998714;
    msg.lon = 0.9962138154988732;
    msg.z = 0.9039624878693544;
    msg.z_units = 147U;
    msg.speed = 0.20648153048131435;
    msg.speed_units = 32U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5416858827384468;
    tmp_msg_0.y = 0.959358655795293;
    tmp_msg_0.z = 0.014821410069255081;
    tmp_msg_0.t = 0.6013716703907316;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9137364925353192;
    msg.custom.assign("JGCDBILXMKALNTZGHDIZQVZLHFYHFUURDMXRJKTWAHBKPSZTRENXOOEMYGUUOICYKYIELPZDCZZNYXFNYQLFRNPVOTHOEEVHIPYOLCLMQNHPBDGVWXBXKRSCVSSHVRIDCABSGVGXUTZVOYWFSYUQNBFJSLIEWMPVPBBGDGAECJWQJMAEGUAIQFDRXMFGQJTSWHTBVCLPZTJPWNROWJWQSFNER");

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
    msg.setTimeStamp(0.553651363756452);
    msg.setSource(22974U);
    msg.setSourceEntity(150U);
    msg.setDestination(39945U);
    msg.setDestinationEntity(86U);
    msg.vid = 24109U;
    msg.off_x = 0.8617756618257297;
    msg.off_y = 0.7865416232131797;
    msg.off_z = 0.4052673590666517;

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
    msg.setTimeStamp(0.9470701779204642);
    msg.setSource(10804U);
    msg.setSourceEntity(7U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(62U);
    msg.vid = 34529U;
    msg.off_x = 0.5259989725875625;
    msg.off_y = 0.10954249991010345;
    msg.off_z = 0.6206029759984781;

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
    msg.setTimeStamp(0.606682313355672);
    msg.setSource(16353U);
    msg.setSourceEntity(189U);
    msg.setDestination(15152U);
    msg.setDestinationEntity(247U);
    msg.vid = 43961U;
    msg.off_x = 0.4968100457861644;
    msg.off_y = 0.6640279367934591;
    msg.off_z = 0.4516262547157063;

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
    msg.setTimeStamp(0.643037724194911);
    msg.setSource(59313U);
    msg.setSourceEntity(25U);
    msg.setDestination(57260U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.6902104009081347);
    msg.setSource(46549U);
    msg.setSourceEntity(159U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.2052431439806609);
    msg.setSource(2193U);
    msg.setSourceEntity(23U);
    msg.setDestination(6121U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.9286419662402541);
    msg.setSource(37763U);
    msg.setSourceEntity(125U);
    msg.setDestination(50900U);
    msg.setDestinationEntity(165U);
    msg.mid = 22916U;

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
    msg.setTimeStamp(0.29692715203944353);
    msg.setSource(55723U);
    msg.setSourceEntity(211U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(120U);
    msg.mid = 8334U;

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
    msg.setTimeStamp(0.47140265526197855);
    msg.setSource(43759U);
    msg.setSourceEntity(96U);
    msg.setDestination(39809U);
    msg.setDestinationEntity(37U);
    msg.mid = 18369U;

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
    msg.setTimeStamp(0.9715848138856458);
    msg.setSource(20494U);
    msg.setSourceEntity(215U);
    msg.setDestination(15212U);
    msg.setDestinationEntity(46U);
    msg.state = 152U;
    msg.eta = 64715U;
    msg.info.assign("DDMTPMNRHHXILPDEGIWOGZALNTGLZKITCXAGZHKWXRLHEJAHBVKRUPRBVYUNOUIDCFYBTOIHYKJWSQOXRJFSZYQGYBHPJMMJDY");

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
    msg.setTimeStamp(0.6299952734431364);
    msg.setSource(63878U);
    msg.setSourceEntity(129U);
    msg.setDestination(4290U);
    msg.setDestinationEntity(121U);
    msg.state = 216U;
    msg.eta = 20158U;
    msg.info.assign("ZNIOMCPIXAJKWIGREQKHUBOZQEGJRPAQXYTMVWWDAHTEVH");

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
    msg.setTimeStamp(0.38730079683224183);
    msg.setSource(14835U);
    msg.setSourceEntity(52U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(4U);
    msg.state = 194U;
    msg.eta = 38541U;
    msg.info.assign("BIWONEQNZUMPLLKJGLEYRENNUTDVKLFDJDOAFRBLOVTAATIZBSLQRZHBSGQZWDGYHYXFBBPYAPEDKUELWGNYFJVQIZGIDMTYHRHNGHWDFDJMSMQSNHOHPPCVIGTOQPFLQUBBTVAMARXAF");

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
    msg.setTimeStamp(0.03118474229503354);
    msg.setSource(10118U);
    msg.setSourceEntity(121U);
    msg.setDestination(14139U);
    msg.setDestinationEntity(252U);
    msg.system = 31536U;
    msg.duration = 12717U;
    msg.speed = 0.01153395386114564;
    msg.speed_units = 170U;
    msg.x = 0.28514088023258743;
    msg.y = 0.12488183560042554;
    msg.z = 0.9073208243985444;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.6743409873919735);
    msg.setSource(60336U);
    msg.setSourceEntity(55U);
    msg.setDestination(10391U);
    msg.setDestinationEntity(177U);
    msg.system = 42218U;
    msg.duration = 13603U;
    msg.speed = 0.7290594414371049;
    msg.speed_units = 87U;
    msg.x = 0.30449208656435844;
    msg.y = 0.00912563483245521;
    msg.z = 0.22295248990697591;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.7167387920445494);
    msg.setSource(20329U);
    msg.setSourceEntity(76U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(22U);
    msg.system = 11947U;
    msg.duration = 41573U;
    msg.speed = 0.11351470212143333;
    msg.speed_units = 57U;
    msg.x = 0.2186628037583076;
    msg.y = 0.11844923854187539;
    msg.z = 0.8147400734968743;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.4010397385632227);
    msg.setSource(24251U);
    msg.setSourceEntity(89U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(14U);
    msg.plan_ref = 4131060240U;
    msg.id.assign("MRDWVIBBIPCTLZYNAYVRHNPMYAONPIQLMLH");
    msg.memento.assign("YNAEBHQDFGBOCJUNNOEGIPRDWRFLPTXJVWKSQHHFCVQVFBGFWAXAXPQPTDADSEQTUMMMZSZGLHSBZILWNDIXXBGTMRNFJDSZZSKZZOCRDZCWAUAOKFCIKROCUNUMNCCIMYXYQYBNNKKHUJYPTNVLQUFKGSEYGEXDVZLORMCWPBHXXFGWSIOGUOYJWPVQKLXQYLTTQRZEOABDGCKDRAPEMSWIBEAJATMOYLVSHBTHERPIJUJEVY");
    msg.lat = 0.3459124565915337;
    msg.lon = 0.28952426658227304;
    msg.speed = 0.7380566817141815;
    msg.speed_units = 97U;
    msg.duration = 47036U;
    msg.sys_a = 34807U;
    msg.sys_b = 22419U;
    msg.move_threshold = 0.5993628444172624;

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
    msg.setTimeStamp(0.8784360796374285);
    msg.setSource(53118U);
    msg.setSourceEntity(154U);
    msg.setDestination(62827U);
    msg.setDestinationEntity(31U);
    msg.plan_ref = 1144628262U;
    msg.id.assign("TYJTUHWLQKWHNJQPSLKKGVYCWGRSBEUTBYFYDOCNAHHDSMIXCKPZQIUGXVIQATSQAPPBMOUFUZKKBDVRHQELNDJVWACDZEGIYLQJZCTFHYBIAMZMJRYXWONGSNCECOSWVRUVGATZEOHZJUIQFVDMONHMOLYSMWAKFLGIEKXEVSENMDDXPYTTRPBNCHBGIBAXRZRGFHOEMPLCWOPNUUXTXMQNVDLPZ");
    msg.memento.assign("MJXLNGCLUCCSNLKFEHBCVOCAE");
    msg.lat = 0.0403058864028597;
    msg.lon = 0.599071931107994;
    msg.speed = 0.30912638388809766;
    msg.speed_units = 168U;
    msg.duration = 51607U;
    msg.sys_a = 28895U;
    msg.sys_b = 42411U;
    msg.move_threshold = 0.46708761839270774;

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
    msg.setTimeStamp(0.8318675848333477);
    msg.setSource(1210U);
    msg.setSourceEntity(212U);
    msg.setDestination(8115U);
    msg.setDestinationEntity(61U);
    msg.plan_ref = 4231359473U;
    msg.id.assign("UIFREGZNXQWCAHOANQVDPVILZHCVTYVRAKIHGMMU");
    msg.memento.assign("IOJPGQETPLFMRJSDVJCJDGPQVLJSQEXLRZXFWPLSRTWHFGZQEBXDQSHLWUIYKJMKJDAENQHJVWNPQGDIDNBCPARMOOHSYDGSZZIXZOGCQPTUGWBCRTAFRDFBCUHNBOKZY");
    msg.lat = 0.35514071890902765;
    msg.lon = 0.8292353174901942;
    msg.speed = 0.3905489041495668;
    msg.speed_units = 44U;
    msg.duration = 47350U;
    msg.sys_a = 49667U;
    msg.sys_b = 45904U;
    msg.move_threshold = 0.990783363198309;

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
    msg.setTimeStamp(0.9160647198458751);
    msg.setSource(21688U);
    msg.setSourceEntity(229U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(208U);
    msg.plan_ref = 311092396U;
    msg.id.assign("OJINQVWKRXSKJMNSPHPCXVHSYFPDSUWLZEPAHGHRFIEVJOKATCQMVLCDXTVVONGCCEFEPDPODAQUTRSLBWMUKWZELGRMQRPSIYJWYZTWFBEWIKIOBZTCQTFHRZNBLDBMKATIIXDSXOIRPLXCBYTKNLGVHHKURYMULSAAHRANXPDNOJYZEAUCCZTUMAJQDCVMGXYWJMQEBVJBLUNDBJZUGOFBGSHNYFXKDHMXIFQLZKATGESJGPOQIQRWNZGFOY");
    msg.memento.assign("HOZZCMMHBVGIRUVFYFRTBDJJMQR");
    msg.lat = 0.4241482864473639;
    msg.lon = 0.3158840178250223;
    msg.z = 0.6075946053320272;
    msg.z_units = 56U;
    msg.speed = 0.7423951039775737;
    msg.speed_units = 109U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5388870252137247;
    tmp_msg_0.lon = 0.25514120589929423;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JGCFHJUSDGPBXPURDUZHDNEJSTOEIEQXBIMFANHEVKHYRICAVHGKZTLZYUASSCMWSVRTMYPVJIWWBMRXKNFFGLKSDNUKTMCUGCXLEWEZBPACFXOZBQZENTYYWLKOKAYCNYAKFQTNQLOPIQUVQMQNXZYLKVAOAXBVIRGHMDZXTUJPPIOZXGLQPWDVWACDORDOSOEBBGETLVIDLZHJFSMHSRWGTCEWMUPD");

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
    msg.setTimeStamp(0.41631903379172375);
    msg.setSource(35408U);
    msg.setSourceEntity(189U);
    msg.setDestination(51475U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 2142808916U;
    msg.id.assign("BYCIUIVIMXRCEZUEQALREDBWVHNLOWZGGHDIUSU");
    msg.memento.assign("KAHBGYJESAUBFCNFPVDPYNNLKXEDVBNRUKZOSOFJQJWDQPGTASVMUIOMOCXWAWRBNPVZFBLEEQQWKZHJRCPJRZSYIEEVGIKJYZENGBOFVKTAEYHUX");
    msg.lat = 0.22956164409851587;
    msg.lon = 0.4095591970348922;
    msg.z = 0.6894129821781934;
    msg.z_units = 239U;
    msg.speed = 0.49425403648504185;
    msg.speed_units = 205U;
    msg.custom.assign("OFWOBFHWALLCZHEHZUYNQVXVTZZAINUEMOBVYQZLMNWQQLWTBPLIRXGKVOUQYURHPJQBIAZJXXLGNIOMAAHUSSXKYVCTXAVDQTNVHFPCSZOTFTRDFLXDELURISWXDPNBOOKDXJMYUFQJVCKBEHPIGLFYGTTZYESORLCSJBEWYEBKUPM");

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
    msg.setTimeStamp(0.7562279057446408);
    msg.setSource(25933U);
    msg.setSourceEntity(148U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(209U);
    msg.plan_ref = 4285926236U;
    msg.id.assign("PYJFGYBGOQQRGJFZODYTBYPMJBNEGEMDFQ");
    msg.memento.assign("FRTCTYGOXEKHPEJDXIOAQPOQIHGPEURZHYAFCNWMSCSKNARXILLVFYAXICSOGTHOXFLGUMVTQKGYNAXDNKQFYQHMIQKXLTDIOMOIEILVJVPDKKUZUGPVMQQJGQBHKBIALMTTARYFMOWZXHXOKH");
    msg.lat = 0.14470869906246442;
    msg.lon = 0.7894320282378801;
    msg.z = 0.9387237867433144;
    msg.z_units = 20U;
    msg.speed = 0.3605077333537714;
    msg.speed_units = 119U;
    msg.custom.assign("MSJOBZIAHNFSNIJSQDPDNJRXNAOALGQZEZMNJAUOMYYJBZPUPGEKQEXKQGPWMGVEWUAHTVEGCDTFRICGZRMDPYYMLOFCBDJVUDPIIZCRTRQBPKTJUWVNWWAXUULNQBXLRSNHZYGNTVDIEQRMMTLXHFFBJRHZEIKOLFLQOCYB");

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
    msg.setTimeStamp(0.6270656263831136);
    msg.setSource(52458U);
    msg.setSourceEntity(25U);
    msg.setDestination(44632U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.7099023507213307;
    msg.lon = 0.9150718611827036;

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
    msg.setTimeStamp(0.6480104324994619);
    msg.setSource(873U);
    msg.setSourceEntity(138U);
    msg.setDestination(61148U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.761359088315831;
    msg.lon = 0.4705263150748117;

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
    msg.setTimeStamp(0.164651758233063);
    msg.setSource(26814U);
    msg.setSourceEntity(123U);
    msg.setDestination(15798U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.45629938538369275;
    msg.lon = 0.4782751602674362;

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
    msg.setTimeStamp(0.8438470135385379);
    msg.setSource(44224U);
    msg.setSourceEntity(124U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 1540023406U;
    msg.id.assign("TEJHDZKIASRQJWNUVNVMKCELEASAEFUDKEXYJGVSRZUSXLZZDYGHPTEBMSTGQEGCCBLKXWCU");
    msg.memento.assign("JEDMHVSSTZYUTKL");
    msg.timeout = 48837U;
    msg.lat = 0.8403598305711885;
    msg.lon = 0.8354031851722428;
    msg.z = 0.5247060289406467;
    msg.z_units = 58U;
    msg.pitch = 0.29857933051158103;
    msg.amplitude = 0.6489683014044977;
    msg.duration = 33209U;
    msg.speed = 0.5854635362849783;
    msg.speed_units = 197U;
    msg.radius = 0.12874884259499508;
    msg.direction = 112U;
    msg.custom.assign("ACIBNKXMCYKAFYURPKCVYSCJCSWQWUOPALSMNMUIHKLTURCQVFEASMLGXABVOBZFJVDNVYHTITJATXROHUJVGQOHRHVPKGIYLNBCLZULWZGTBLQJOUPGHIJRAJSDTFECRTXZKVIPODIBWFYHQLXDZSKMDUUEPJ");

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
    msg.setTimeStamp(0.5219969022298037);
    msg.setSource(13285U);
    msg.setSourceEntity(184U);
    msg.setDestination(42722U);
    msg.setDestinationEntity(16U);
    msg.plan_ref = 3992684663U;
    msg.id.assign("HSKBNSAKCYGKOIMVKQQZUIRFAJZSLAZDTGTSMRSHNNEYZFWRCGGUREWIWYGSEVBMUKJFOOFZUTIIPURDXARSVDNSHKCPNEVJPJNRERCJTGALUFTWPJMBYRDOXFEZXPQJHVWKKOPOUMDIBWIYLLTNQXYTOQDFWYPBIQVBXZAXOVCLDODABXTUGBLXLOXRUGVBNMHBKENVMH");
    msg.memento.assign("FNGWNQELWKLTOOFGFQTSIUPNTPXKCHQNUUZQVDNGPRLHGAAOLYHHSBVQBRIFKHTIIEHKSAZKMMJTZKYXLHHZMBRQPCACORXWAJEEIYGNSJQVDFYKVCLXJBGTPDNSFECHLQYBESQJCDZTGOKPSBUAIVJRDCVKIVBXEGOEPZYXDMVGZMLSIRAAMCXUYDMWJLWYSFOFFZECPXDJNWKTRWEWZY");
    msg.timeout = 11000U;
    msg.lat = 0.42806273117382254;
    msg.lon = 0.3961215583279779;
    msg.z = 0.30615743158089026;
    msg.z_units = 51U;
    msg.pitch = 0.7192255384606315;
    msg.amplitude = 0.3447554195632977;
    msg.duration = 61080U;
    msg.speed = 0.642104142389625;
    msg.speed_units = 29U;
    msg.radius = 0.46679453817708805;
    msg.direction = 235U;
    msg.custom.assign("UISWBHVNAWXIWMEDLFVSFOCVBYMSYGUXHYJOZPWXHBWTEVWRIDDUFGJLTYXJVXMTSPNKDVDKWWMVAHIQHKORCILPXEBUZERJYHRTNBMKBEGJPFGMZKDTNOPCRGQHOYAAYPYVTRLJMOOPTHCAC");

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
    msg.setTimeStamp(0.8206671311361106);
    msg.setSource(27306U);
    msg.setSourceEntity(78U);
    msg.setDestination(53114U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 1212977516U;
    msg.id.assign("TAPHLYNWVSTQCLMIEGJTMHTQXISXILWKQEJDYTLVCIJBOUGAAUYXKHRSJHICQTAHVSWARRNBAFOCFPDW");
    msg.memento.assign("OMUUTCWARSQVCVPKEGKQZBJIWZEIUOWCHPLWPDFKNKWUISHKKZJXCUBRHCXYPUTRAPPHZOGTHDQXNEQMWLJBQYGCNFFAVADYJDUNEBZBNGHAFQPOYNXLICGT");
    msg.timeout = 20206U;
    msg.lat = 0.8613088045276366;
    msg.lon = 0.7748843097378745;
    msg.z = 0.09273443142289017;
    msg.z_units = 187U;
    msg.pitch = 0.8805173881075893;
    msg.amplitude = 0.13085777206353533;
    msg.duration = 18690U;
    msg.speed = 0.15903601725049465;
    msg.speed_units = 52U;
    msg.radius = 0.8039837856121582;
    msg.direction = 113U;
    msg.custom.assign("ULLSFQDTLPIRFEIMHDNSTWBBHRFOXNCOFYHETRCZYSLEGNDYDIIBTTSKPBAXGTTQWVCTODZMCESMWOXYSFRAWXIXXJKYBJEURWHGRIVZOMFYWTYZUDGDRJCFUSIDQHAVXNVQWSUKVJVPEHPPUCULHSTCLKHBFZIWRIQJQKEUKLPMAVJAJGOPOBYWHQZJZAGOKEGBONZGRDHZQNYXJLBZAXIPBXVFLENKVCJQMPCLNMKKNCDAQPV");

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
    msg.setTimeStamp(0.5916853615655183);
    msg.setSource(40192U);
    msg.setSourceEntity(212U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("BLNFCQEILNGKWQWHBEKWEOVDLRERRVGTRJIKWTLUFMSSYKUIRAJQEPXOMRCDHPJESODVPVMJBOYFOTADCHTLAANSGHYNXRTMCFWPAIBHSZJKLNQM");
    msg.reference_frame = 77U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32926U;
    tmp_msg_0.off_x = 0.976322401123508;
    tmp_msg_0.off_y = 0.04746439005539427;
    tmp_msg_0.off_z = 0.3289685973591532;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XAQFLMVSTQUPFOSVHGEGDVAZPONQIILJBNRXKAYLWAEKZNUYLRDKKNMFYRXRVZUYWIPFIBJADORZTMSDWTJCZJVWDRXBCZJVEGTYWFNYEIEJUCTDTYHHAKHXPDNUPBOEMVQUSILLIFBLYVKJEMGPXTWABMFSWZDQEXGYCUROTPGLCXOGWRFKHJANFCKMWQDMDOLSTHGXYFNHUMQWONHQECTBZSIRXLHARQBZBPMUIKOVGSUQJPNSBOKGPHICZ");

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
    msg.setTimeStamp(0.1048345231029888);
    msg.setSource(36479U);
    msg.setSourceEntity(14U);
    msg.setDestination(6233U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("GGZVAXGFKLIWIUVQZYTGKLRLMGCFKFOMUYIQNOPBSLGSOTFUPCXVREBTCQJYHDNWMANMSESOFBLQYPCHRDDONEDZWGTDCLQTHPDRVEIBVJICWPPVAFUOEXUJHNTFRUEBCIPBCZFZQHAKJDJXMRBYH");
    msg.reference_frame = 54U;
    msg.custom.assign("QEULLVMNXFCZYJMXBFGDZZDPOWNVSKRSQIVSQLQYTCGHIKEAASGFVQYUXXEEMIAXEIRSMITFSMEVLAHMWGYJRBOPAUTUPMRWVNLZUBLBLNXLJJWRIC");

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
    msg.setTimeStamp(0.7755896832234469);
    msg.setSource(54653U);
    msg.setSourceEntity(220U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("VUBQTMJAQXECNDSPKSKLZKYCSVTCZMCTSOLJKHGICEDUCSNJZOMUZQVAWHQUNGPSPHDVPSEBXQMJPDOIXAGLWVJXANLKIORXGTWWFERJBALVLUOXRDDTRVDOISCTFUJYGXZLGUE");
    msg.reference_frame = 169U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16861U;
    tmp_msg_0.off_x = 0.612062895843526;
    tmp_msg_0.off_y = 0.635522349441891;
    tmp_msg_0.off_z = 0.1687426830976838;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NUFDXVZFEMHZHFKOKMSSROCABTJISXUWWAEYMRQCVJYULODJGUZLKAEGOSGGIEQDGKXIYTSCFXIJFTPXPMMPDWBFDBWCNUJYWCBPHCZMQVSTBQGSDMCOVOFPYRNLQNPHGCGVVWJNDZWVRHBJLBFMWJIIEKQOMGEPZVKZAEPQNJWOPILCDAILPHQOUZXUUBXKRXHTNCGUDXQEBYTASKBAHUTAKEONFZLWQRLKIATEVFRLYZJYYNHSX");

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
    msg.setTimeStamp(0.9112095272595366);
    msg.setSource(12623U);
    msg.setSourceEntity(204U);
    msg.setDestination(47733U);
    msg.setDestinationEntity(160U);
    msg.plan_ref = 3743497988U;
    msg.id.assign("QOCRDLIFRRTNXZSZRGJCDXPJGBMBPYNSJZHMZPISKMBHFDSELNMAIHUURWUROSFWQNVWNJXYFT");
    msg.memento.assign("GOSUWETGOFZZHNVYMSHHFQJRBCWNWGQMABEJKWGCATZQJTJIMIFLRQUWRPHFURTQDOCWEDPIGAYFDVLXCQOLDBATXSSMSYIOWOAMCPJCBKPSTRKFDELLXKYVZBRJSTUYNRYKDBJHXCGUWEQABGXTNDIVKHKILNUOXPQMSJYECJVFAFHZKVIHIEGZVTSXPSHVAZBPMLXGNXJNBVAMUQITOUAKNB");
    msg.group_name.assign("LLRWQYONUSMBXQWP");
    msg.formation_name.assign("ETSMWQYQJCEHIGJHRBAGTENXAUHYPUXEPYSYGPBRSKCZTWBPBQBLDBWUIOLNROVVHQSTMUIAWMQYCIWTMJMOZYNWAMKVVFQYIUDXRWKFJKGEZSDHZSLRLFCDEHNSDNJSMVXTHPVMDJTIOQFNUKNKOLZZZFNRMYRCSDKLQFQVAZWUCTUPELTLFBMCIXUVFAOPOVGDOTEGHXWJXAQKXBAUINWCBSLCEBALEJDZNGGCDGKA");
    msg.plan_id.assign("OIQMXXINALJFFTTSIWCSQJAEXKCFJVAYNFOJZIMRZLSUBMWAEWRVOEBSEVVPMMMJXXRPJLTYTAKNRKGLJFCDWVPQOOZDBIIZGMRDVQLWMDYHXZOZRKMGVNTOCBWMJHTDPAJTAGWPQHCLSFEROHUPPIJVASX");
    msg.description.assign("HAYHOIXSEWZLLTLFVDSTIWZMXFNUVRRZKRJKBMLYDAMNGPNVRMSMOORORKHNGQDIISFSXKRAZYTVHGFVBEPYJOLZBACIWICPJEQNARQUEKQOJPVZYHABHQIPFCGWESPUCDXMECPWQIUJTYGTWKCBBOEUGFLPXXQASIJXMDDLCORZYTDUNNJAYUBGOVWLHEP");
    msg.leader_speed = 0.7259042330111164;
    msg.leader_bank_lim = 0.14793453383350275;
    msg.pos_sim_err_lim = 0.21842050340187746;
    msg.pos_sim_err_wrn = 0.8477827487778381;
    msg.pos_sim_err_timeout = 9349U;
    msg.converg_max = 0.5116815383073002;
    msg.converg_timeout = 14615U;
    msg.comms_timeout = 21742U;
    msg.turb_lim = 0.6509424514995773;
    msg.custom.assign("SKHNHBPSPDJWJNEGWMAGWOCMHYPKAHVUDDQRDIUKPBRSFUUMZOIQFOAPGUFYVPZCVT");

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
    msg.setTimeStamp(0.770385307495162);
    msg.setSource(40244U);
    msg.setSourceEntity(42U);
    msg.setDestination(36404U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 1029741874U;
    msg.id.assign("YRNBZJGKLZQKQQVCQVSLSUTHHAZOPBFXXPNTMOWNYUQLDSCGDJVYWUTOCBWIKNTMCGZCHEQQQANJISZVZNCUYPRMEMFDSRFUUQBXRSSIEAPIFGXYBWRRAECOPBDTYFRIOZEWRITOMLCSPKORUDPWVHHDQUVKETNJAMVYXHWJPTPGHAXPGXKWMWLXGNGHSFFEDVBE");
    msg.memento.assign("PEXNCZABDPLDTTMMKQHPMARUAANNIYBNDKCNVQFNFCPWRKXHTGRJMWZSVMHUTFMWONBCFLOGWSELAESXQMISYJXFBJVOCODVUHDZUYDSXLVUWEWJGHLBJBIRZQQFTODDGBRKLTYDYHPNPZLZKTKIWWARUKGUGWCTQCSJIRBSKZKHPEEHFMEOUAKJANXJAXVRQMOEVYXZWYLPIOECGHTLBSUQICAGQJLUSXIN");
    msg.group_name.assign("TJPZBHIWBTVGWRWUEZRRCNASEYPDLQTIIZNVFYSAKSYINHZXYDDLLFZKSVGTMXRHYBSGUMMJUTMJAFOHONCOKDAORZHXRJ");
    msg.formation_name.assign("KCYYRZJXOJTFFSWPXWYVITQVCLPUODDLZQWDUTONNRIHHCCILFYNHFBHROLWCZAIOJTMMWYUPQNUBAGFSTKQVAEXTRUACFRKGEJIDOOAQRDANQLEPAELHKWSLNQYRUFBSBZHVCEKBFXUWGPVMPJYBSVKLMDZTNBOIEVGHXMFKSMCJZLZNZPCGXFNBBSJCQISMUQRTHW");
    msg.plan_id.assign("KIIRKXNNQEPEHZMBAKZNBOYJZDHKBQHMCAPQTJJWATSWVBPIRSSDXDLOWHAUORTLPAHGMNTACKRWMJRNDYZAIZSMSXLUZTBEUPNVELCGFWRLORDYFFO");
    msg.description.assign("ZDLLHPINQOLWKAQCUPQUZXMEBXTNHRKOTKEGAQUDOHUVRFJXOBQNEUHNVZFCSYBWMYLYLWPSVAOHVIW");
    msg.leader_speed = 0.11994875647655068;
    msg.leader_bank_lim = 0.5484294654589902;
    msg.pos_sim_err_lim = 0.31720985196793783;
    msg.pos_sim_err_wrn = 0.39165638575641604;
    msg.pos_sim_err_timeout = 15505U;
    msg.converg_max = 0.3368846091163442;
    msg.converg_timeout = 5332U;
    msg.comms_timeout = 5040U;
    msg.turb_lim = 0.7888510659937318;
    msg.custom.assign("IDOZIZFBSHGIOJKLYOQEKDOTDRDXPVHVPAZYQRWUEWPQNPXXLOQCRXPWJERDGCMQUHGNVFZAYRUVZCNINESNLAQKQFAQMLMEZETTMRSOYJBRFZTVHMBQVLQHMJZWVEUNYFCAKLYCT");

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
    msg.setTimeStamp(0.4203178068070492);
    msg.setSource(56080U);
    msg.setSourceEntity(61U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 3181591842U;
    msg.id.assign("DCPMWDXKKLRBMRGEOKKDQBUQILXEINSNTVYPDBPJPJO");
    msg.memento.assign("WCWZNITJDPHRDRQZBVVDNIOCXCDWRFLMIUKYHOAZFJPQOMU");
    msg.group_name.assign("EJOMLWXSZTGVCXAKNTEQYSGNUWUMVODUNMLDXGYJCAKFUMRENRHZPYQWWFSPQLBLQUPOYTCIBRLOVVBXYFJSQYFTGFCHEUZNTTPPVOBSVTRDXYBRXHLDJAMW");
    msg.formation_name.assign("LTYMWTWPNUMPDM");
    msg.plan_id.assign("SJUGZPCBMGUSXYCQYSOEIAKHSWMXIYOBCWNVZNIRVGLIFVYIDLUEFXLQMBMVFCYZSWTFQITCBGYMA");
    msg.description.assign("BDPLWYRDRYPMTDOMXBCLQANQEFIXJQWRKKLAJSKWXMRRFAGDBZKBQYGHXOMRPIBMNDJISBLAUWVUMHFYHQUFDHWZINSHFHNUJVWFGWZVSOKBKKCBDPUKCCIOQJTGALJUFZOBACCWGEVBYIPLZCMHQETSQPGJGLCWPPAVOTOHDYTPSRQTEVEXMIKUZVLYNICNXYJAVVJNFFMTIFNZHVLYWTECSESXLSPDTZGDGGQEXZZRXUKANYSRXOOEUAET");
    msg.leader_speed = 0.12384239529600127;
    msg.leader_bank_lim = 0.23772674609243083;
    msg.pos_sim_err_lim = 0.7227106724000274;
    msg.pos_sim_err_wrn = 0.6417153159494183;
    msg.pos_sim_err_timeout = 15905U;
    msg.converg_max = 0.4270162794928929;
    msg.converg_timeout = 22107U;
    msg.comms_timeout = 3795U;
    msg.turb_lim = 0.2263833231772988;
    msg.custom.assign("AUYQVSKMTCXNYCRTZXVFCCJLIYLKZW");

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
    msg.setTimeStamp(0.9581412540962576);
    msg.setSource(50609U);
    msg.setSourceEntity(7U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(56U);
    msg.plan_ref = 2738444673U;
    msg.id.assign("XAXESIQPMQTNZNAYILEEKDHCARBGYXTGNGHFUXWVRHHFGIRFJSZDTNALDUQPXLIOZPPEJMKSSFBOCICWRZRHMUDJOLWDBSMWLTPOXAGVWZTCZIQCLGFPWCEGHAORKDPIUQBYHK");
    msg.memento.assign("GCPCCCJJIURHBWAOWZPSXELUNEURZODGOVJKEMOUXRLOFEVNNUOHYILBNLWMXEAMUBQOFEJLSTLYJRYQCYZLGINSIXOCAXKWHMGWTBIKRDNSWQKLPWFREFHFEENOBPTVNQFXQJRFSKHPJBXGDCZYSDCMJQENTKIPZDGAXUBVRMVCVTIVTDMZUQYDBGKOSRMQYAYBQHPTXAKDHWVSRAADKAZTSDCXHKFVZI");
    msg.control_src = 23230U;
    msg.control_ent = 239U;
    msg.timeout = 0.9409575308016775;
    msg.loiter_radius = 0.5529980531876029;
    msg.altitude_interval = 0.44410452277497814;

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
    msg.setTimeStamp(0.1972749426656274);
    msg.setSource(839U);
    msg.setSourceEntity(143U);
    msg.setDestination(51128U);
    msg.setDestinationEntity(142U);
    msg.plan_ref = 2674259626U;
    msg.id.assign("CABSBHTIVDKQXHFEDMFQUPXIXJJCPHMTAZZCPGOIWWHYHEDELRASJRZERETHVGRKNYFYUYVMIOBQBKQKCMXFWGIGSUMGJGSDWBZWLJYKKOSKPZMEYLLULFQSUZSJFUJJNUERYLNGITHHWYCADPKDTIQKABCANOBIVATCPQXFZNDXUVJVVNBMLPBAOO");
    msg.memento.assign("KPVMKCGSVPFIEUAIZIXWSQOTCXNBRGZSKNFKJILKPNAFRPHSHJOIINYBECVFXLFXDVZZEADQFVGCYTWTYQHJHHUHFTQIUQDBMNOWLGVVDEQMZQEWDXLAZTLMQJZCKCPAMWVEMOIEGJUBAPFISGFGMCXARDIOHXLNSKCCOSOPRRDEXUBEZJDTBZSWSSUXANKTUAXKOWYJABNRZBVTVUQCETWQYJJFBRWP");
    msg.control_src = 12277U;
    msg.control_ent = 91U;
    msg.timeout = 0.6995395339282795;
    msg.loiter_radius = 0.07274666184481882;
    msg.altitude_interval = 0.16703423239141735;

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
    msg.setTimeStamp(0.0015595544053246257);
    msg.setSource(53090U);
    msg.setSourceEntity(191U);
    msg.setDestination(52156U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 528423655U;
    msg.id.assign("ERAGNGVBLIZRQMPSNTQYTDLXTACWDJJPXTXLKNLMOMJYLFUFPCHFPWWKIVPWJUSHRUIAVKBMJVISTRRFLUDEJPOVELNGAHRJOQAFTZCRWNFDYVOVACXJPPBZQSNEDGOHCOJBTXQTCIUAVHYKBZPXEBKNFQGWIYOEQHHQGNHZZYWOBKSYRUSSQGKEIABCGMLMJMBHZWMDXVFSRUGXWUNKDFZYHE");
    msg.memento.assign("YZQXYNUMJEIJIKADKAEXARCSQWHDTUFRJKGAZWKOHFSRUMUWOQFUTUJZZBNRIIWYOVHMAOGHWPANVCBPC");
    msg.control_src = 28565U;
    msg.control_ent = 160U;
    msg.timeout = 0.8799054145420409;
    msg.loiter_radius = 0.2249253091557003;
    msg.altitude_interval = 0.9326700237820995;

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
    msg.setTimeStamp(0.17146251518222466);
    msg.setSource(32052U);
    msg.setSourceEntity(142U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(123U);
    msg.flags = 61U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.41961498404214104;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.637755521562535;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6485950079419958;
    msg.lon = 0.9571609100194981;
    msg.radius = 0.5662496070319821;

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
    msg.setTimeStamp(0.08053783653006674);
    msg.setSource(56046U);
    msg.setSourceEntity(236U);
    msg.setDestination(48120U);
    msg.setDestinationEntity(219U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.44696232410419434;
    tmp_msg_0.speed_units = 36U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9083180569944758;
    tmp_msg_1.z_units = 74U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.48965380056648544;
    msg.lon = 0.18569687648524902;
    msg.radius = 0.7114994664096529;

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
    msg.setTimeStamp(0.8025316491353597);
    msg.setSource(63021U);
    msg.setSourceEntity(201U);
    msg.setDestination(27479U);
    msg.setDestinationEntity(199U);
    msg.flags = 185U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18589679773079226;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4783675953784058;
    tmp_msg_1.z_units = 196U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1311246982426526;
    msg.lon = 0.6758994980708897;
    msg.radius = 0.6345246805468769;

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
    msg.setTimeStamp(0.9368303794091396);
    msg.setSource(6281U);
    msg.setSourceEntity(211U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(156U);
    msg.control_src = 32634U;
    msg.control_ent = 232U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.34545913830701425;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.35458101380362184;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6804417505104888;
    tmp_msg_0.lon = 0.5724890486440531;
    tmp_msg_0.radius = 0.2975614548338573;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 50U;

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
    msg.setTimeStamp(0.4548121528067255);
    msg.setSource(60049U);
    msg.setSourceEntity(2U);
    msg.setDestination(58955U);
    msg.setDestinationEntity(241U);
    msg.control_src = 65391U;
    msg.control_ent = 137U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 139U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5688095000380339;
    tmp_tmp_msg_0_0.speed_units = 51U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.08759525413260172;
    tmp_tmp_msg_0_1.z_units = 101U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3640820954413062;
    tmp_msg_0.lon = 0.4982928228878877;
    tmp_msg_0.radius = 0.5589745454030353;
    msg.reference.set(tmp_msg_0);
    msg.state = 205U;
    msg.proximity = 239U;

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
    msg.setTimeStamp(0.435637426578667);
    msg.setSource(2168U);
    msg.setSourceEntity(161U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(79U);
    msg.control_src = 32827U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 170U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9670130683741668;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5930946434876386;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7969073776134334;
    tmp_msg_0.lon = 0.9129370049295733;
    tmp_msg_0.radius = 0.893035872045072;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.47029461589244426);
    msg.setSource(48911U);
    msg.setSourceEntity(181U);
    msg.setDestination(29636U);
    msg.setDestinationEntity(23U);
    msg.ax_cmd = 0.9465026669844243;
    msg.ay_cmd = 0.9093422860226553;
    msg.az_cmd = 0.5237629547023595;
    msg.ax_des = 0.814240013414167;
    msg.ay_des = 0.2679790887376299;
    msg.az_des = 0.6722622750368874;
    msg.virt_err_x = 0.5165383736520925;
    msg.virt_err_y = 0.5898526635736181;
    msg.virt_err_z = 0.7994224163212672;
    msg.surf_fdbk_x = 0.30993995675947184;
    msg.surf_fdbk_y = 0.9383937007800882;
    msg.surf_fdbk_z = 0.3019118761042844;
    msg.surf_unkn_x = 0.18237079198358774;
    msg.surf_unkn_y = 0.34456784055429324;
    msg.surf_unkn_z = 0.17084047194670826;
    msg.ss_x = 0.8099438267899246;
    msg.ss_y = 0.6474468780179365;
    msg.ss_z = 0.3249139555965518;

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
    msg.setTimeStamp(0.8236372954850544);
    msg.setSource(32104U);
    msg.setSourceEntity(110U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(140U);
    msg.ax_cmd = 0.8712882642176101;
    msg.ay_cmd = 0.9820043358424355;
    msg.az_cmd = 0.17537869467119416;
    msg.ax_des = 0.9965539854329503;
    msg.ay_des = 0.32247657991915724;
    msg.az_des = 0.21171660705489792;
    msg.virt_err_x = 0.6246022183049159;
    msg.virt_err_y = 0.8853325098249848;
    msg.virt_err_z = 0.07024653484834309;
    msg.surf_fdbk_x = 0.16309764105416735;
    msg.surf_fdbk_y = 0.8742238512114309;
    msg.surf_fdbk_z = 0.43568339414159973;
    msg.surf_unkn_x = 0.5735739214982565;
    msg.surf_unkn_y = 0.9712161347544007;
    msg.surf_unkn_z = 0.2203876903967128;
    msg.ss_x = 0.9094798010886508;
    msg.ss_y = 0.6197350598996572;
    msg.ss_z = 0.6934857039871424;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VDJTIJAPJOBWMMQNZIEQYIKOFCXMFGMBKOUTRFLMRNKTTVATVGVCBLHRWEIGQFKUSUWXRXBIWJPRSYZVZHKFNWCSFOAPHZUSBKINBJSISXVBDEBAHKNTCUOGJJOMGWPXXYBADDYZNWLFKSEZAHYM");
    tmp_msg_0.dist = 0.2092490729224552;
    tmp_msg_0.err = 0.20774078794523343;
    tmp_msg_0.ctrl_imp = 0.5067689303140396;
    tmp_msg_0.rel_dir_x = 0.863578848499207;
    tmp_msg_0.rel_dir_y = 0.34158811249946985;
    tmp_msg_0.rel_dir_z = 0.659491856871594;
    tmp_msg_0.err_x = 0.8363787580840032;
    tmp_msg_0.err_y = 0.7593794687850132;
    tmp_msg_0.err_z = 0.6644386170347305;
    tmp_msg_0.rf_err_x = 0.887382379256736;
    tmp_msg_0.rf_err_y = 0.813273385281681;
    tmp_msg_0.rf_err_z = 0.7564115778384592;
    tmp_msg_0.rf_err_vx = 0.9389794616347791;
    tmp_msg_0.rf_err_vy = 0.12420009914311692;
    tmp_msg_0.rf_err_vz = 0.7727804681815599;
    tmp_msg_0.ss_x = 0.3490660484662601;
    tmp_msg_0.ss_y = 0.3040479932893023;
    tmp_msg_0.ss_z = 0.5599568736900192;
    tmp_msg_0.virt_err_x = 0.7805304223798136;
    tmp_msg_0.virt_err_y = 0.7918347847144328;
    tmp_msg_0.virt_err_z = 0.5163995665674229;
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
    msg.setTimeStamp(0.156951975752336);
    msg.setSource(7104U);
    msg.setSourceEntity(113U);
    msg.setDestination(20280U);
    msg.setDestinationEntity(218U);
    msg.ax_cmd = 0.8118025187640017;
    msg.ay_cmd = 0.24660357432787217;
    msg.az_cmd = 0.6744763994239816;
    msg.ax_des = 0.9300071375426237;
    msg.ay_des = 0.41385014924707164;
    msg.az_des = 0.8901151548109097;
    msg.virt_err_x = 0.6468417829039942;
    msg.virt_err_y = 0.9918358632699493;
    msg.virt_err_z = 0.7067683959373467;
    msg.surf_fdbk_x = 0.8040603003749902;
    msg.surf_fdbk_y = 0.7620395696764065;
    msg.surf_fdbk_z = 0.019943130283930466;
    msg.surf_unkn_x = 0.5915276107152011;
    msg.surf_unkn_y = 0.8965126076394523;
    msg.surf_unkn_z = 0.5533045224682096;
    msg.ss_x = 0.7752118026192731;
    msg.ss_y = 0.22708614385947368;
    msg.ss_z = 0.6341173575822164;

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
    msg.setTimeStamp(0.852881523028529);
    msg.setSource(3125U);
    msg.setSourceEntity(201U);
    msg.setDestination(7807U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("WKGBBPKUYAFQEMEKIYKGGIYXPUBSHJMHTRSWSMFXBWPKVMMQKXOOTJERCYUXAFQFJLZSNLSPCLZJOHLBDVOPIHJHJXGTHDIMYCZYPVFDPAVLRQUPNNAGMTWQRDODEDUXTVNCCOHWJCGNLRWEFKNRIBVMLAPOQZYSQNZYTXDGUHKVFZWJGNBYXANDWACFRVSAKPEQWBELICMDGDZZRUEUAGHNIXBSTKOVTJIOUMRVCHLWBOIJZZCIALERXFS");
    msg.dist = 0.9721205144265966;
    msg.err = 0.3304226247141724;
    msg.ctrl_imp = 0.23934776298945848;
    msg.rel_dir_x = 0.43255524879484497;
    msg.rel_dir_y = 0.38996164591274896;
    msg.rel_dir_z = 0.9280664563564707;
    msg.err_x = 0.15307464582711894;
    msg.err_y = 0.7118319757650483;
    msg.err_z = 0.6712214772223629;
    msg.rf_err_x = 0.5854742617224489;
    msg.rf_err_y = 0.8447523119651972;
    msg.rf_err_z = 0.22726412376382976;
    msg.rf_err_vx = 0.21190219089832008;
    msg.rf_err_vy = 0.6156571465542783;
    msg.rf_err_vz = 0.8149970502784643;
    msg.ss_x = 0.08340064059679653;
    msg.ss_y = 0.6613941213011176;
    msg.ss_z = 0.8751512969289125;
    msg.virt_err_x = 0.4329986573723652;
    msg.virt_err_y = 0.773998443126916;
    msg.virt_err_z = 0.9002586834067484;

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
    msg.setTimeStamp(0.47564670435392786);
    msg.setSource(22453U);
    msg.setSourceEntity(195U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(108U);
    msg.s_id.assign("LKVUHKDEJIQNWWMLKLDX");
    msg.dist = 0.8225172637769601;
    msg.err = 0.6308215148449452;
    msg.ctrl_imp = 0.7342425981574761;
    msg.rel_dir_x = 0.28925692474200804;
    msg.rel_dir_y = 0.21018315529884835;
    msg.rel_dir_z = 0.3812753175199206;
    msg.err_x = 0.9484975997474543;
    msg.err_y = 0.4341488394827613;
    msg.err_z = 0.14522937478190834;
    msg.rf_err_x = 0.263240269164708;
    msg.rf_err_y = 0.11362935679508379;
    msg.rf_err_z = 0.909004474971819;
    msg.rf_err_vx = 0.21114799959842478;
    msg.rf_err_vy = 0.5891581323946812;
    msg.rf_err_vz = 0.5063917898595445;
    msg.ss_x = 0.07339376273207388;
    msg.ss_y = 0.846780241158123;
    msg.ss_z = 0.7241621979757825;
    msg.virt_err_x = 0.4200231058455428;
    msg.virt_err_y = 0.2252506208033942;
    msg.virt_err_z = 0.0042123268988427665;

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
    msg.setTimeStamp(0.5550540052137414);
    msg.setSource(59006U);
    msg.setSourceEntity(187U);
    msg.setDestination(61496U);
    msg.setDestinationEntity(197U);
    msg.s_id.assign("UGEDIXPJSMOIBYEK");
    msg.dist = 0.35118908092889545;
    msg.err = 0.7080755977169791;
    msg.ctrl_imp = 0.4027758513223343;
    msg.rel_dir_x = 0.26383902912879564;
    msg.rel_dir_y = 0.5316052171749037;
    msg.rel_dir_z = 0.5299239596138041;
    msg.err_x = 0.2624342093729791;
    msg.err_y = 0.754949493135127;
    msg.err_z = 0.34307774295324134;
    msg.rf_err_x = 0.805641316618091;
    msg.rf_err_y = 0.16438796193763672;
    msg.rf_err_z = 0.28061524237240865;
    msg.rf_err_vx = 0.5041755287364291;
    msg.rf_err_vy = 0.8239486502015203;
    msg.rf_err_vz = 0.770025659503858;
    msg.ss_x = 0.9669523298720134;
    msg.ss_y = 0.7476862238031976;
    msg.ss_z = 0.8069371154970538;
    msg.virt_err_x = 0.49733615070213133;
    msg.virt_err_y = 0.32251053049889344;
    msg.virt_err_z = 0.4009449706598601;

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
    msg.setTimeStamp(0.6607785773401371);
    msg.setSource(7944U);
    msg.setSourceEntity(189U);
    msg.setDestination(38037U);
    msg.setDestinationEntity(118U);
    msg.plan_ref = 962550449U;
    msg.id.assign("VXMLTQHBCOWTPLBUPZGYXLZPIOKNXUOOJCBNMTFAESKMAWRLDTTPQJQVNTHKZYXPZJIKBUXPWTFGNVHAXWPOBVDOJQXFLKEJSYYTMZCDXHFBSMASBGBMGWGUHDTJKQISEYORICCSHFRLIUDMQEVDNQCECIXVLSQLYYAGDJAIRBEAUHBFPHVZKRIVOUPJVDRRRTYIHKUIHAFOGWUNGYENRSYKRSZUWMLDJKEEZDFNZWWJCFSVGQZPMNMALQ");
    msg.memento.assign("ENILEXOLDAOIHCDERBXSYHQZBPDQKFQCRYDBWGAULGBXKBJFRZCRGMYNEDVHCMFJWFRDQQKQGCZUAEZBYWBTRCRLIUUFAFOOPXYUQUREKDKVNYKSXPVIMSXRKOLIHPMITMOITFUTSJTMJGWMYZUTHLMNZUJNSWAZDMVBNDTJPQWDFN");
    msg.timeout = 49620U;
    msg.rpm = 0.8643401063371554;
    msg.direction = 172U;
    msg.custom.assign("NZLTBYKDYRJWRPJIWYKSEHOJHDQXVHNUJBNNQVIBUCTBPXOJPHKXMRUUXFLVGUHEQQXBOBLMMPFQPQFCNAZDSZVGEOLOOGYITMNKTGTQYSWONKEUCDJHVGWRYRDXGSTLUHVZSTFZECTUYCLWSNPEXASXRJZKCFPOVRFQUGWHJALKLCHIIEMPKMIICBLDMMGSFTDZADDQGZPZPVUAYMIMWKKDATFFOYWCVZYIVOSIWAAJENACFBJHXW");

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
    msg.setTimeStamp(0.42663271217511345);
    msg.setSource(1499U);
    msg.setSourceEntity(167U);
    msg.setDestination(38000U);
    msg.setDestinationEntity(105U);
    msg.plan_ref = 300673186U;
    msg.id.assign("KZZGGAHQXYNPFUSPZBBFJFRILTLFVYDJQUQYIGDCWYUKBBSJEDGOOJLXAADKNUYLAYATWESHNWCVTZESFITBMXLKMTZWJEKWXDPWZICQRBWNCPLTVGCMLEGUNAKTOISMXDMIOQERVTFKJFBHTAKHWQUMQSNVZPSMJLAYIEEWVPZRDMCBXZOXJVVCLRVKWOIMIPYNUPSOBCXUHOHHJDHUMAOFDCSNNGPSXRGJYTQQN");
    msg.memento.assign("TBORXEUSEAWHUXCWCGVZRVRJBEPTRLASRQCKNXKPCDSHWNESQXSMOVATADMBEWKEKLNVOPVTHDGZFLDIMGALJDESRMUORIGDLKFEBAVIQQZXKPZIOJNJCTQUNDXFUBDZEHSDKWXABLJJFOZCPQZVMVLACHUSFFCWOPOXGNSVIYBZTWWLLQYDYYKYFJHNHJQKYNPYCAPMHIRIRGUJUWZMGCEKHBAMTYUYXZPFJFQBGNIXVHIPLRQTMNGTW");
    msg.timeout = 40568U;
    msg.rpm = 0.13126767927546112;
    msg.direction = 188U;
    msg.custom.assign("UMUKHJJWHYRPXYXODTQMFUMADDJVOWNQSFICOZUMTBAHJCMXPEHDJTZRFGHYKLGZQXQTIZKCVPVLIPRMCONNFBWSZEXCNXCZVSIHFTDLRSJERMBVUZKOPYJKYYREIICRETGLFEGZSGALLYUDAUXEQWGQMWOWOJYZPKQIADTNKFCZBBHCVSRO");

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
    msg.setTimeStamp(0.9234337569471351);
    msg.setSource(24977U);
    msg.setSourceEntity(226U);
    msg.setDestination(18807U);
    msg.setDestinationEntity(146U);
    msg.plan_ref = 1098394317U;
    msg.id.assign("WJCITLECIXEFMNLCGTCROFSAMABQOJLFFKKLYCUHBTEYGACCXSSHTIFNIOUKHBVZPMXZWUHJPBMAVYAFUUXQAQERGQLHEVDXZVXQXKMFKZHSKWPTKBILDJINWVQSJPSRJLMADZMOUGYBPGKNXJECLRBREFYIKOKWUZCEFNQCRYAOOXRMDXBYUUJDMNPNTTQVYIGTNDVSGTJSEWVHGYLMNOHUPSBPYGLFQDIODQ");
    msg.memento.assign("HMSFDIUNUEARYYUKKLBYYLLSRWKKMPKIGBLNLGTWFRWNCAPPJQEHWTCOWWIUIIOYBHCZUTXBSSCGBFOVSNAJNSVMTGKZPMJVKXXVZXZFDHEBODCT");
    msg.timeout = 14017U;
    msg.rpm = 0.6840062502498763;
    msg.direction = 58U;
    msg.custom.assign("KEIJVDSOBAXYPCBAZYFPGMLIFFEZMCVWJMKXDMOTQMMDNTSORFNDRNPJQHRWUFGHBMZAXVSYGHDHQWTBSBAAIPRDWTUAULSCSOVZIFYXTSZVQREUPNLDVTIEOTBWTYYKZKRTGIUQSCUNSUGBHRPVNGGJKYUXVLIQOOKAJBDDVHXYY");

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
    msg.setTimeStamp(0.5916845536134877);
    msg.setSource(45054U);
    msg.setSourceEntity(245U);
    msg.setDestination(600U);
    msg.setDestinationEntity(25U);
    msg.op_mode = 36U;
    msg.error_count = 31U;
    msg.error_ents.assign("UWGDURFWFPHMGXYISOELGURUOGTGWMLQITIQFLVAIOHSBESFZPKZEUMAXUDPIKWDXUNZYBCFJXFEAECCGWPAXRJNTQGBJQVKPLIVHMRPFKKBNDXEPNOYMHUTVCORBLQMCHSBVBTCT");
    msg.maneuver_type = 7079U;
    msg.maneuver_stime = 0.7986055639550875;
    msg.maneuver_eta = 29465U;
    msg.control_loops = 3260608994U;
    msg.flags = 176U;
    msg.last_error.assign("VFPKRCDEXFVNJOWSDLSKUMTQHMEDIGGEVJYTDCPHLRWSEPNRGWBCWXPTTODCBNUFXNOTTQLYDDBGPUJFPFMAGNNAKVZWXJYSDEVJAIRVQXBJYKOSJARWLEEOQIVUCEHHWCJSXGHIUMBAGROMTWKCFOSLSIXMFKIYWBUVGMLSBFKXZHAPCUXI");
    msg.last_error_time = 0.11580356697106164;

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
    msg.setTimeStamp(0.4625696829097655);
    msg.setSource(43663U);
    msg.setSourceEntity(14U);
    msg.setDestination(49885U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 58U;
    msg.error_count = 41U;
    msg.error_ents.assign("MDRRBHFOSURWWTLHFVGZONBPFPATJTDQGCCZJKOCXLVQ");
    msg.maneuver_type = 7198U;
    msg.maneuver_stime = 0.7300352972155314;
    msg.maneuver_eta = 55339U;
    msg.control_loops = 3744095553U;
    msg.flags = 11U;
    msg.last_error.assign("KREVCCBCKCYAGTXOWCNJMBDYGOSRSVDNFRVG");
    msg.last_error_time = 0.5415893560175864;

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
    msg.setTimeStamp(0.20539054218723118);
    msg.setSource(27907U);
    msg.setSourceEntity(60U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(146U);
    msg.op_mode = 124U;
    msg.error_count = 126U;
    msg.error_ents.assign("LZIBUCQTEGCEPPIQGHBCYXXAJUQSWDCPGYSTTMMPRKMHZEYSAPIMHFHIPXTABXFLGMFVVLH");
    msg.maneuver_type = 414U;
    msg.maneuver_stime = 0.3809262802573299;
    msg.maneuver_eta = 2657U;
    msg.control_loops = 3650485918U;
    msg.flags = 124U;
    msg.last_error.assign("RJHBLQDXKZMMZHPRYLWWJUCQWGOJNBNKHZQEYFQZUOJWXOYYAOCBQWKJYMPHSNTVRFNDPCCIMGKZEXOLEJPRLEFFWTVYYJGCIUEQRFXGZMQZZEVDITST");
    msg.last_error_time = 0.5193742743785943;

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
    msg.setTimeStamp(0.6692135273928775);
    msg.setSource(57602U);
    msg.setSourceEntity(48U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(113U);
    msg.type = 82U;
    msg.request_id = 23779U;
    msg.command = 206U;
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 4085560122U;
    tmp_msg_0.id.assign("AOPGFKYYOAETNHZRGIZXGIFFZYN");
    tmp_msg_0.memento.assign("IJUIYMZJJRZOZNZRPESWWYXNETEOGZILKCSPTLMUQCVFUOGEFGSQPQGAHIBVPLZSABQJSLBFSZPWWSAJWVAJOXVGVTLNRLKRPRQDMUFWCWRTWCHEPBMHOFEOMHXODMGQHXGOKYYQBQVJDSUFZXRXDSNPDYIOINNNJ");
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8368688270280424;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 46671U;
    tmp_msg_0.custom.assign("DRHYZMGIBGDOMUGFTOGRIBSUSHLCWSGCURZPFHLUELOYMVANNXBNIACDTSHITMZJCHAMXEQTKNAAEXFWLJSFAGOYALKMPDKZWQAUVBJNIZUCVEEWVGYHSKBKZSSINODODTRVPYXKWAIOQXMOXLJPIBEJRXPQLMKCIZRYN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17079U;
    msg.info.assign("XFUCKZTUHSEXCEUMXJTLQIDBJYHAQRFZPNSGBVSLJOXQKAAYHYCWIYYOBNTYCFNIVWSSQMGBCUIXILTEJMMNWBPLFGAFDSGVDTQVWKWGLEQERBDUDXOPRJKVEMDFIIBVYPMILHBOHXTOMNE");

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
    msg.setTimeStamp(0.5013906774486833);
    msg.setSource(60788U);
    msg.setSourceEntity(219U);
    msg.setDestination(53310U);
    msg.setDestinationEntity(39U);
    msg.type = 5U;
    msg.request_id = 8099U;
    msg.command = 151U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 3632277076U;
    tmp_msg_0.id.assign("SVJGDMQISXHJBKWWLAYNFXLBIOUOTWWJIVCQADTKOUPXYCQIRNBXBCDZEISNRHEIZTPLYAXFAFNWRQYFYVCADLKUVGJDAOKEJZBMOTSOEMRUFORWALSKGBMJDK");
    tmp_msg_0.memento.assign("ICETOGZMJTUKMDIAWZCBBEDIUSRWYTDPVGVSGAPUWTZUZKJRDBZTFQVHINYCGTQLBNYHYEMOJLJBHRVAPFKJSGCDNFWICJASVWKFNPXQNKQPVTZLCEYTJHOXUZTVVGCCBBFTMLPEFFYLBSMLCGYLVIUQLOUWAWEDRHRQJRUGCIYRLAANXRBJZMLNWPXHOOAFHN");
    tmp_msg_0.timeout = 6531U;
    tmp_msg_0.lat = 0.3175338177592636;
    tmp_msg_0.lon = 0.6935844145553471;
    tmp_msg_0.z = 0.917461863951573;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.pitch = 0.760572709772446;
    tmp_msg_0.amplitude = 0.012761444418038725;
    tmp_msg_0.duration = 54019U;
    tmp_msg_0.speed = 0.36675166730412045;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.radius = 0.04603925504044448;
    tmp_msg_0.direction = 58U;
    tmp_msg_0.custom.assign("IJUZUEBWWEJMNTZXBAGIUWB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7619U;
    msg.info.assign("HGDAYVYDCWSHDTDIYVCNOUKUFDWOMRBKHECQGAELXINIRJYAEWITBSGZRLMHEMZCZDFOWSMMOYOZULZAFLPXHADWWONWXPYVTVCVZLICPRVQPKEXUKTZQBEQVUXFHTJPXFOBNQLABUKKCBVACKEBORYJSSRQKRRZJJPNTAHGYNSFQMTKVEFIXUDYXPMSTGSQWGIJWLPFUNBVKXXSYFRINTJFQMJOJMHROHA");

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
    msg.setTimeStamp(0.19959183400847846);
    msg.setSource(58057U);
    msg.setSourceEntity(241U);
    msg.setDestination(8854U);
    msg.setDestinationEntity(160U);
    msg.type = 142U;
    msg.request_id = 23845U;
    msg.command = 163U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 2309663494U;
    tmp_msg_0.id.assign("HQTVCIOUUXNEYZEBMMXUSIOYDABJEJKEJXUUZIFVNFVFKCOMBLYLCCGKOWXVCNJNXACPAXBWINSDCRHHXQTUZLZYAATEPFACNEKW");
    tmp_msg_0.memento.assign("PFBOOXDFIWTLPKUHU");
    tmp_msg_0.custom.assign("NOBXKHXCSESDNPURJZXKLARDTECBKKBFAACGCQJZWMNOJUQTBUNWZZHABDNZYLIPCKRYXLISWPILUNPIFJOOVMBBUVGDLFFALMUYCGRFUBIASGRGSCVRQZGUDKOQSTHKVGKRCORQSEGFTADRLDQFDV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61992U;
    msg.info.assign("ZTHHEIUOSOZXXQ");

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
    msg.setTimeStamp(0.47121552472875605);
    msg.setSource(23658U);
    msg.setSourceEntity(39U);
    msg.setDestination(29786U);
    msg.setDestinationEntity(8U);
    msg.command = 119U;
    msg.entities.assign("KAPESHPHMLMCLKAVQMKAOLGRCFHVIWREGYUQFLBVRGAYBJJBMABZXKPSCMCGQQDBNOFZCNNIKIXWMTXKNVYEKXGLQFMHPUJLRKXLRMXSFSYDZBEDIQUOFGUNBCHVSRDIWXTSDIOJOUFUAYIJFZVNVGDTWNOUVYZEWIZYATPBOHCZGFJJTKUHSGVMPTECIDLWTYTXPQMOHQRSRVPNHAOWTJNBELZPUNCODQLTIBEKREZDWCSDGXYPX");

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
    msg.setTimeStamp(0.6033321362381835);
    msg.setSource(48381U);
    msg.setSourceEntity(249U);
    msg.setDestination(23084U);
    msg.setDestinationEntity(75U);
    msg.command = 46U;
    msg.entities.assign("KPQOBIXSYFEYOHVRILYQOUAKYNBDPTZRYNHUXKEFWJCFQXHXTWKGNOHPIOYGGNDRLFAUWZHFTDVBEPDLHDRXMJAKSIBBTWTCZEJUZIAVJPWVUGSJEIWTWPCFVVJKZHNQBLNGWSFQVEOYFCWACUGAMMDKASYZOQFEEPXCLRAVJGJMSUVDGLYQOLORZKRSSTAIESHLMXHMDPEUN");

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
    msg.setTimeStamp(0.5421447661801914);
    msg.setSource(10800U);
    msg.setSourceEntity(154U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(34U);
    msg.command = 172U;
    msg.entities.assign("VVCJKNZJVWCFQDUSAGGPSSPYVTIHCHHCIYCCTIDYQCXXBYWERPARZTJLLDRMODMEWMDPKRDYLQGSLCRNMGONMSFKGOEJTQIUGTBQTZDGPSAXOOPSJCNBWAMAKDRVBHPZYIOWZQBMWFWAEFUDSJFZQTIOHABFBGRUJVSUEYURGATTZNHFFW");

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
    msg.setTimeStamp(0.4544839922456132);
    msg.setSource(49754U);
    msg.setSourceEntity(107U);
    msg.setDestination(15473U);
    msg.setDestinationEntity(60U);
    msg.mcount = 133U;
    msg.mnames.assign("XGTVNMWQEJIWFPOESBHQCLUILZOKPYODYXJEVZFSNJLAOMYCKXPDCWNQWYJRCLPYHMWVVR");
    msg.ecount = 53U;
    msg.enames.assign("HYPSCGJTNMOQIZLIPWGDZMOSUMLWJSDRDHZPXWAVMNGEVQNKQVOFCEJQDNXBHAVZFXR");
    msg.ccount = 75U;
    msg.cnames.assign("LACUMJMHCJTVHQFZRROLGBMRUPAXVEYLVHGSZJPKNSPXNSOFEYLFBQKMTEWOMNXDONROKUYKDDBIHAPTW");
    msg.last_error.assign("KNNRWVXZJDCMWOHQVNZQMTEDHBUSZLRMMTOVUKRGDVDKDEJTXFAWRORTHN");
    msg.last_error_time = 0.8743664774755348;

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
    msg.setTimeStamp(0.5936384306702451);
    msg.setSource(43602U);
    msg.setSourceEntity(95U);
    msg.setDestination(64217U);
    msg.setDestinationEntity(93U);
    msg.mcount = 97U;
    msg.mnames.assign("CGNWFRKUMJBWICKHNXGBCLJLXPTOKBLXJTMHQADNFTGWEZHJWXIVXDOPULQDYYSGACMHTFEFXVMPASYVMNINGKHQBTUEFXGYDQUAVIARYADBPMEUEOOQNKJABPZLYYNRHURBCRVBIQUXCLTPCIJZAFENJRBSWEAKZOLUZZUMCT");
    msg.ecount = 50U;
    msg.enames.assign("VBATBKFLKHNLQWJAJSASMLPLFOISCPVOOOVHQQYWECZRHEOBRKJPYCCYYBHYHIPUXQXHBJEFXNAERDWAWHVFFZEQTGXGNRTUYOMOXAGEPGEFZRWHFNIVXBVYLBDIJWMOJMYTDJOQKFIBGEJEUNKUSMGDUJHKCLYZIANY");
    msg.ccount = 226U;
    msg.cnames.assign("UFKQJXCNNPUUUOAECQRMECOFBKKLDIUBVFHFXSRCOHCBQBKJFVJGZPBYCRWIQLDZAVNPZHRKTIDXXLROSWCYLPTKLONDUEYSDGGLTWWQMYQKFIXTSAPHAQLEOKPYROMTDYHZGXIOMPEBLIIVDSCYGAFCJVTWDNUJYRWGYZWVMXKWTJSRVMUZAEFSBSHLSFJXKINEMIHNMBJEVZDAGTGWUXSJDACPLYTIRQRXJHUQHMEZANBPMNAGOQHTOBZGW");
    msg.last_error.assign("HLVZDXAZGNLQDVQRYKRPVOPHKUBBOLYVMXHUXGNFUVUKNOREHKKWFDCMSAWFKQECXJOQLLUVLMOOAEAYZFWTBFKAQXPGRYBISYEDHATYCU");
    msg.last_error_time = 0.7627931705864236;

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
    msg.setTimeStamp(0.744481925173998);
    msg.setSource(47202U);
    msg.setSourceEntity(149U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(155U);
    msg.mcount = 29U;
    msg.mnames.assign("GPEFPJQMHUFABIDYGMWVWHKREGFJZLMGZPBGULXUEMWQDKQBLVPCOKCOVHPBHCUDZLCHLAXOVDKMXSDAHXOHTFHTQYJATWBCGYWJRNUAOAKRISBJTQCEGJAQRGZKUHKPJSIOROK");
    msg.ecount = 221U;
    msg.enames.assign("PCZYMHHNUSCQVOTWRGZETDYPOCFLHVIXYAYSEFHGOGRGITTXJBMDWTDPNELCRWTKMBZXHJCWIFRXHJSSTATMXLRSMJJJJTKNFSZHEYCVXAJUADDYLKETZIYG");
    msg.ccount = 194U;
    msg.cnames.assign("OUXQJSYECQXWHOLDGJGIVIVFZOLYUIGUAZVSPGRLTLOBILCACQMXUMAYJVHNWERHAIFYXRQBEEVOQPFXLOZSLMDBZNMUNGHLJVFRTCQUZXCHGKONPHSAZVQJKUCZSGRCVTMETJYAHQSKHQWJDXTMXTXSYVVUHZXGNQFEEIBWPIPNWRBTOEUSOBPYBKFMAKPLEPPYACNDKJTNFGCIWYYSADHINDWLEKMFBWD");
    msg.last_error.assign("TBCJPAMURQMGAEZLXHSEBIRSGFCIYGNYBVMUGJNUBODILFLWOAVCPONQSLDAWGGCJVQEKTHHZJBXWCMHQXGWYTGPRECSNUWKOTAFMQCVCKLSMRHSPZNFQXRNFKDEEJAMGEEHJNKDRIQVZKMDTZGBDZBXFUPSHYUDLSWVKMUVQYTHYK");
    msg.last_error_time = 0.7945012268939242;

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
    msg.setTimeStamp(0.12078065413674077);
    msg.setSource(41518U);
    msg.setSourceEntity(16U);
    msg.setDestination(54408U);
    msg.setDestinationEntity(232U);
    msg.mask = 15U;
    msg.max_depth = 0.19990681856432102;
    msg.min_altitude = 0.5720171444293402;
    msg.max_altitude = 0.45584245934465806;
    msg.min_speed = 0.9860588485174001;
    msg.max_speed = 0.8970332428806245;
    msg.max_vrate = 0.7373592360388705;
    msg.lat = 0.027217272953661165;
    msg.lon = 0.6161013460961433;
    msg.orientation = 0.024759547801769366;
    msg.width = 0.12536651326992165;
    msg.length = 0.5610795001605191;

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
    msg.setTimeStamp(0.77418888064977);
    msg.setSource(34143U);
    msg.setSourceEntity(169U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(36U);
    msg.mask = 29U;
    msg.max_depth = 0.702040802597845;
    msg.min_altitude = 0.5112333976871137;
    msg.max_altitude = 0.49550530337310694;
    msg.min_speed = 0.8506910242168098;
    msg.max_speed = 0.21359489203390636;
    msg.max_vrate = 0.9386937903332894;
    msg.lat = 0.7406876995433003;
    msg.lon = 0.1601778147544355;
    msg.orientation = 0.20572534979038615;
    msg.width = 0.8495872479083966;
    msg.length = 0.49318366234681155;

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
    msg.setTimeStamp(0.31946540927734524);
    msg.setSource(47302U);
    msg.setSourceEntity(219U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(105U);
    msg.mask = 155U;
    msg.max_depth = 0.30436218455619524;
    msg.min_altitude = 0.9769190607316264;
    msg.max_altitude = 0.9598400038864485;
    msg.min_speed = 0.27623114796378345;
    msg.max_speed = 0.5865724316267451;
    msg.max_vrate = 0.6227121974308758;
    msg.lat = 0.9763419041180689;
    msg.lon = 0.7615391765679598;
    msg.orientation = 0.36962481051400453;
    msg.width = 0.7072288569535307;
    msg.length = 0.6604461111875275;

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
    msg.setTimeStamp(0.4109788521025859);
    msg.setSource(48466U);
    msg.setSourceEntity(101U);
    msg.setDestination(38789U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7231961776426539);
    msg.setSource(3827U);
    msg.setSourceEntity(58U);
    msg.setDestination(29096U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7655353493554138);
    msg.setSource(36856U);
    msg.setSourceEntity(5U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.52376351786763);
    msg.setSource(40319U);
    msg.setSourceEntity(201U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(99U);
    msg.duration = 57678U;

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
    msg.setTimeStamp(0.29726084488111615);
    msg.setSource(64656U);
    msg.setSourceEntity(229U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(199U);
    msg.duration = 40948U;

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
    msg.setTimeStamp(0.3964745071139174);
    msg.setSource(2812U);
    msg.setSourceEntity(184U);
    msg.setDestination(45872U);
    msg.setDestinationEntity(54U);
    msg.duration = 4687U;

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
    msg.setTimeStamp(0.5314894319117054);
    msg.setSource(54302U);
    msg.setSourceEntity(233U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(95U);
    msg.enable = 43U;
    msg.mask = 188615844U;
    msg.scope_ref = 2663772202U;

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
    msg.setTimeStamp(0.556598141832646);
    msg.setSource(12258U);
    msg.setSourceEntity(7U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(12U);
    msg.enable = 109U;
    msg.mask = 2742615539U;
    msg.scope_ref = 512997429U;

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
    msg.setTimeStamp(0.6378194211315346);
    msg.setSource(22587U);
    msg.setSourceEntity(127U);
    msg.setDestination(59913U);
    msg.setDestinationEntity(130U);
    msg.enable = 144U;
    msg.mask = 2197017683U;
    msg.scope_ref = 4136805139U;

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
    msg.setTimeStamp(0.7412456550802595);
    msg.setSource(32581U);
    msg.setSourceEntity(138U);
    msg.setDestination(45213U);
    msg.setDestinationEntity(79U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.21660192097211417);
    msg.setSource(38199U);
    msg.setSourceEntity(54U);
    msg.setDestination(23913U);
    msg.setDestinationEntity(175U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.3760746024930547);
    msg.setSource(13066U);
    msg.setSourceEntity(47U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(135U);
    msg.medium = 19U;

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
    msg.setTimeStamp(0.7177744167165093);
    msg.setSource(27696U);
    msg.setSourceEntity(79U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6672492427686676;
    msg.type = 120U;

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
    msg.setTimeStamp(0.12121608070578704);
    msg.setSource(62026U);
    msg.setSourceEntity(235U);
    msg.setDestination(14112U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2185423937915687;
    msg.type = 249U;

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
    msg.setTimeStamp(0.5454233088177645);
    msg.setSource(55030U);
    msg.setSourceEntity(27U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(24U);
    msg.value = 0.7031271318981689;
    msg.type = 131U;

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
    msg.setTimeStamp(0.020732613574891312);
    msg.setSource(62415U);
    msg.setSourceEntity(98U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(84U);
    msg.possimerr = 0.22797966465991826;
    msg.converg = 0.7530455297599642;
    msg.turbulence = 0.9832385871990178;
    msg.possimmon = 17U;
    msg.commmon = 46U;
    msg.convergmon = 18U;

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
    msg.setTimeStamp(0.6642474451739304);
    msg.setSource(58930U);
    msg.setSourceEntity(20U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(251U);
    msg.possimerr = 0.7866168017084045;
    msg.converg = 0.47082305550830017;
    msg.turbulence = 0.694787126409318;
    msg.possimmon = 98U;
    msg.commmon = 187U;
    msg.convergmon = 80U;

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
    msg.setTimeStamp(0.5397197664118083);
    msg.setSource(27987U);
    msg.setSourceEntity(142U);
    msg.setDestination(39606U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.8573678607775703;
    msg.converg = 0.8424088492223701;
    msg.turbulence = 0.6280072905824344;
    msg.possimmon = 120U;
    msg.commmon = 92U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.7251746709836605);
    msg.setSource(10553U);
    msg.setSourceEntity(56U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(225U);
    msg.autonomy = 73U;
    msg.mode.assign("JRVWCQTYWZGIRFMZSVGKXSLCOKLTLCXMJRIXEOMMDHNUUFPBNGHOYCEGJLDXAESRJPFKUNHAZTZPJIVHRYQWYWQSPANHLUNTIEXOQBLENDYXEDWYKSERDPZXAKCTAWKVBF");

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
    msg.setTimeStamp(0.15535909325146202);
    msg.setSource(3409U);
    msg.setSourceEntity(6U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(217U);
    msg.autonomy = 144U;
    msg.mode.assign("WDUTZDNQFSUOWGPTGRGBKCERPAOSUHVNQUQCYLIVHKOKOKDTZDIAHUZVMLZHPJAUSRNNWVTACFXBBEXABMEJHIEWCFRNUWMYRYAXFQSEFDYILOWBAJVKYRQNDFWGQLLPNMMRPPEIYJLBGALKHCXKRPTDAOGRCIBXKDWIEQHMOBXSKMYPMCGUWGULTJMSWVNQPASSTVIQVOJDTTFTBKSPCVVNFFGE");

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
    msg.setTimeStamp(0.32837970647024184);
    msg.setSource(7846U);
    msg.setSourceEntity(180U);
    msg.setDestination(23709U);
    msg.setDestinationEntity(132U);
    msg.autonomy = 142U;
    msg.mode.assign("VLTADLCZNEWXGBKVXVOMNCIJJHARDKQQQOIAWUVZIGBXBDFNVENYMFSNUZFLMQHYQUCLKGBHZMZCYUXWEZSQDAWIFIFKONHKCCPHKDARKQOOKBRLUJAFYBZEIEILXEEWSXJYGTUHRYWDPRQESMUYTOFDJXUCNLYDPZBXTSTZOAVRJWGPVFCJNJPFWRLPYMQH");

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
    msg.setTimeStamp(0.9861240875077291);
    msg.setSource(906U);
    msg.setSourceEntity(122U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.22413320958502225);
    msg.setSource(34932U);
    msg.setSourceEntity(109U);
    msg.setDestination(9435U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.1518094253032245);
    msg.setSource(49310U);
    msg.setSourceEntity(93U);
    msg.setDestination(64992U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.3284750995588106);
    msg.setSource(21498U);
    msg.setSourceEntity(107U);
    msg.setDestination(13725U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("XAKQGRETMCNDSRTEEGIWHTFWQZHLAERLAQZKTDP");
    msg.description.assign("HTPPZWIVQKDUBYDTPTCQFOJFMWXWIEBHREATDIKLGESZXJQFDLJLXFCMODPIGZJNGMXNAHKRJRXBFNHCFAHGADMJPBGVNLFWZZECBJMQYDQUTSZOWLKUWJHDNXYUMITJFORAGYLQMLSWWVXCKBRBWAIHBXGRQLLOVUNRHEVASNRINBAVSQOTESYCPYCWIFPQUNAVGKMLGTUSEMUKUUVCKOMAVOYE");
    msg.vnamespace.assign("CRGEUMQBEWHHEVQDKDZDGJJJHTXSIAAHXOBGDKBPMJLYELMEPCUNIRCLJYAXTGPZLYIEDNNXUYYVBTTGAFPQMMUIXZTOYOLKSZDIGAZSUIKKMUPOXDFNGATHGOVMEETARPUYOHCQHWWGGDSSLWLTZSDRSBVBIMICNKPWCFMVKVQBOVBKRAJUTIBRLCASQKEKPFHWRFW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FKQSQKGYQRYSTRUOZNEHVABUPCTHILFTGEZATGBMYRFKTZAEQNLCLSHKALIGBXPZPSVFXNLFLQAMHCDXBRLYGEJTNFHLDWHJGKNGXFVRZHMVFWOHPBXIVTGOUOQBKURUEQJVHODBYCNPADDTATXWPCIJMAZNLSRIMSSIGCWWWKUNOOJPDVYCQMMWDWVSMC");
    tmp_msg_0.value.assign("LFUEULZGXXNHKFXKGTDWAUXFJUKVYAMQFVRMRGFFSPMVACKOJGGGVEQDEEIXSDBANGSKTQOINIHXRMRMLHITSBEJQPVNJESWCWYIEJLDMAFSBRYH");
    tmp_msg_0.type = 240U;
    tmp_msg_0.access = 34U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FXWESIZRFBBVRUMYOCTVPVGDXELRFIXYWWKAQFVFGCJMAPMIJBVULCXSYPEDJCWFKBQVCLBLNQSNQLXFNRAQRHZMCJLNABCGOPRXYUVYITNWWNPQTGBSAWZEEGHQIBLGXXMJHKXLBNSOHQH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TJGUSDUJXIERLOPWYVTEDLFNZRRGDUGTNPXBLODJDLLICYUDSWMBFLZNBGFKVPC");
    IMC::CompassCalibration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 65718416U;
    tmp_tmp_msg_1_0.id.assign("AZUWNNREZHOMZBFKATUFGBYBEGTLZUWWGIACKDQOTVILSJNGCDIPVVKMEHYDZNHCJSMTLDHSXRXIONURVGDKBMUHLRMLAXSBLZXPSIRQODTGFRDWMAQOPCKAKATTYFTCODEDIZHSSKVOZEQYWXMFEBYWGVG");
    tmp_tmp_msg_1_0.memento.assign("QEPJBZOTIUBHWNLSMOWPOPLNDXKZENKUYWSOYFCGFIIWSCHMJBCPLJTWVVXGTQR");
    tmp_tmp_msg_1_0.timeout = 49240U;
    tmp_tmp_msg_1_0.lat = 0.2891225110314001;
    tmp_tmp_msg_1_0.lon = 0.4429425896679502;
    tmp_tmp_msg_1_0.z = 0.49554269906642434;
    tmp_tmp_msg_1_0.z_units = 24U;
    tmp_tmp_msg_1_0.pitch = 0.14267806030462293;
    tmp_tmp_msg_1_0.amplitude = 0.6486337299582157;
    tmp_tmp_msg_1_0.duration = 19137U;
    tmp_tmp_msg_1_0.speed = 0.16766376252590864;
    tmp_tmp_msg_1_0.speed_units = 105U;
    tmp_tmp_msg_1_0.radius = 0.18786656760360831;
    tmp_tmp_msg_1_0.direction = 203U;
    tmp_tmp_msg_1_0.custom.assign("IIRMANXHCYRNFRPBPDQBOIZKGNXJJNYHRGRDZKMEOEPJMCBLRXJKTVSTVWDKGZMNARDFOCTIHGIKZUCQTJFWHSPNZOBJLNV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ECIVUUNKFJDXBJMWGOTDGQNDTNFPXFZFIKXYRQAAAIVXLWISWSOJQXLZLZAJYQOGRRTUXNALPSGSXUIGMADTFKDQAFNLCUSROLDPASVJEB");
    tmp_msg_2.dest_man.assign("DKUMVETFWYOFXIANUIJPDGAKXTUGHMBIWKQGYEOTPRLCDLFEFKDLNWBBQIAXPGRSUGZDZTANOVCQRPIZKHVUBYEREKVNDKHNFZNSWOLJCXXNKQSDYVNMAMEQVSPSCHPRAZXLGIJGTRCLCHVJOFHOMSIWTMMSNJBKRDCPLQJWFMIEHSUCEAWCHOWRNMWXJUXL");
    tmp_msg_2.conditions.assign("REHOEDFSLPIHSFDTIZQSRCTOGFQOKFKUBLRXWJZPRSMVSZWKFUKBCIQI");
    IMC::FormationMonitor tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.ax_cmd = 0.940805221953923;
    tmp_tmp_msg_2_0.ay_cmd = 0.7319859506987366;
    tmp_tmp_msg_2_0.az_cmd = 0.15614799029647264;
    tmp_tmp_msg_2_0.ax_des = 0.5660657161989507;
    tmp_tmp_msg_2_0.ay_des = 0.7685162430600234;
    tmp_tmp_msg_2_0.az_des = 0.8274677957903576;
    tmp_tmp_msg_2_0.virt_err_x = 0.45507612904050654;
    tmp_tmp_msg_2_0.virt_err_y = 0.13714561367796185;
    tmp_tmp_msg_2_0.virt_err_z = 0.9411862517062985;
    tmp_tmp_msg_2_0.surf_fdbk_x = 0.27116061644394074;
    tmp_tmp_msg_2_0.surf_fdbk_y = 0.3239269004315479;
    tmp_tmp_msg_2_0.surf_fdbk_z = 0.2820571663447754;
    tmp_tmp_msg_2_0.surf_unkn_x = 0.943258458152774;
    tmp_tmp_msg_2_0.surf_unkn_y = 0.7158822805502209;
    tmp_tmp_msg_2_0.surf_unkn_z = 0.23672021763018358;
    tmp_tmp_msg_2_0.ss_x = 0.4365271833991964;
    tmp_tmp_msg_2_0.ss_y = 0.4851584460375946;
    tmp_tmp_msg_2_0.ss_z = 0.7218286892184045;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.6617122897785015);
    msg.setSource(30100U);
    msg.setSourceEntity(58U);
    msg.setDestination(11300U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("OAIJCFARVEVVKHTTISLKSYRMWPGAGEINPAMRUOJSKNHOACFSYPXMCBDQJVHXEVZPGUOSATZCUZPJLQLRPPHAYOFMJIDIOKFGINNZPCNLKECUUVSRDQBYBWILQUUUUQNOHDXELTXQTGHXWFWDTXHFRZJYKQCXMNNQZZULFBKJDZB");
    msg.description.assign("ZKLKJLSMOQTBVXHARFLLNKPGZETTFFBRCEYCULZZJDGWISRUSMXGDOTKBPZEEUFGVFKY");
    msg.vnamespace.assign("PJUPEGOHIXPSALISETKGCUTAMVVEE");
    msg.start_man_id.assign("YYXSFWJPAZNRJCAVLUWMPLNVTWFSSDERIBZTUDLXBIXDRXGBJMDUPHWVBYTWKBGKZUUNIYIGYAPSLMOQLHOEQHFQFJCBVCQCHHHRGZZTTPMBZDQUETSIJRLSDFCURYAAJGVEECGEDGPRQFRVRCXKSDZHVNXFYQKVOSSNMMKSOTBWTOJANOLZFMKAGPGRDUDWFVLCIXUFPZCOPOTYEPZKXHCMBAIXQIXKEOKJJNWYKLLJUOQNMET");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UGKONVEBQIGTCTAIEXEWHNDVGXBOAUMYVNLWQYWTLKHTWYXBAFWNKVBDNDHXNPTFJRIKRCOAXEGHDWWJWVFQBIICGAKOTSRSNYBFJLUNXZWQSPCJVZAPUDIOGIOPMMQSUEBVTMXKPHUCBJDNIGVSRHCAJGFMOCRARPVQETLYEXBMJHFROKLCYOZIDZYLKUHAYVMTDQKCGS");
    tmp_msg_0.dest_man.assign("LVRLIUXDFWAHFNZCJRDYRANPMRGMTMNZHQIBFBDDTLCYPVKMXMKSNXIUAUNSDYLWHKJYZUXOFDKZLHEMQYKVSPICPP");
    tmp_msg_0.conditions.assign("FQBBMRKDXECEFBGDWDNUOERIUSTWLAQDEDQXOLJIFDPILCUTVMVFWWGUTSCMYNHVGLWNX");
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 6U;
    tmp_tmp_msg_0_0.speed_min = 0.8248647039160895;
    tmp_tmp_msg_0_0.speed_max = 0.07049668474506698;
    tmp_tmp_msg_0_0.long_accel = 0.434484225171188;
    tmp_tmp_msg_0_0.alt_max_msl = 0.948662619858385;
    tmp_tmp_msg_0_0.dive_fraction_max = 0.6943992264123267;
    tmp_tmp_msg_0_0.climb_fraction_max = 0.3916670079603731;
    tmp_tmp_msg_0_0.bank_max = 0.7154106300092379;
    tmp_tmp_msg_0_0.p_max = 0.8942030016311407;
    tmp_tmp_msg_0_0.pitch_min = 0.7978962656482469;
    tmp_tmp_msg_0_0.pitch_max = 0.8622919912353444;
    tmp_tmp_msg_0_0.q_max = 0.09793845111507982;
    tmp_tmp_msg_0_0.g_min = 0.48089600744366345;
    tmp_tmp_msg_0_0.g_max = 0.7602699904231732;
    tmp_tmp_msg_0_0.g_lat_max = 0.7170072270752595;
    tmp_tmp_msg_0_0.rpm_min = 0.4078779236167426;
    tmp_tmp_msg_0_0.rpm_max = 0.2992218123211131;
    tmp_tmp_msg_0_0.rpm_rate_max = 0.17225306188377432;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.plan_ref = 3180742376U;
    tmp_msg_1.id.assign("KFFXBUYKVNWLXXEQKJVQVINRDNCXYABEGUWWWWRIGVNLFZEMRVAFEWTYKZBQASKMXOTRJYUDEUYLSAGPOIIHJFQNHBXSARDKPMSYAYDLBIFY");
    tmp_msg_1.memento.assign("MYVTJDDOLLRJHRWPXHCJZDMECOPKFCGBGZTCSOBQNQOZXPPOHLJKAWIXXRYIFUYULQLVDBSXNAJMSANIPFAOIATIZDSZTISBKXXNHLEEWUQKFJRGNHRTWZGLTKQFYYYEEZSGSWKLUYCFCUPFGJGSWYCBEQIZPJQQEFXICEHVVGMQOVMUPPAGAEMTTRXXDOHMVAVKFKMGVVIDYIBKNQDUNLNTRWJRKNUOPMHJMTCBWWYULFBEDB");
    tmp_msg_1.timeout = 12310U;
    tmp_msg_1.lat = 0.6936402589605613;
    tmp_msg_1.lon = 0.7781621421815673;
    tmp_msg_1.z = 0.9056906207437573;
    tmp_msg_1.z_units = 231U;
    tmp_msg_1.speed = 0.9225672314211334;
    tmp_msg_1.speed_units = 177U;
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.019002087255188038;
    tmp_tmp_msg_1_0.y = 0.45731947077196644;
    tmp_tmp_msg_1_0.z = 0.11116153566908449;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("ZZFWNSCLNMCIEKCOZONPYXUXEYLPGLHOQMNDVCMJBQZRGMYCYXHJAXWYAKLXADZSKISGMLIJBHWGFZYVAHSIFYVKDNIGYMVNRQPJKUFXBWZFWBJHSDQTAPRTLDFOHOGBUWXROSCOUDYOYWFPSDEOLSXWJCUPKIEMQKNEXOJQTKEMDGRVLPVQJEZBNRETTFUWRPXRKAIFVQKATGNWDGJUVBATPVLCHERTUBEHVNACRCQMBALUQI");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::NavigationUncertainty tmp_msg_2;
    tmp_msg_2.x = 0.7699786071479332;
    tmp_msg_2.y = 0.833348384104583;
    tmp_msg_2.z = 0.6974601512480085;
    tmp_msg_2.phi = 0.8122265394938857;
    tmp_msg_2.theta = 0.4769136419150417;
    tmp_msg_2.psi = 0.5799524128490243;
    tmp_msg_2.p = 0.5471890805898068;
    tmp_msg_2.q = 0.3075223614039635;
    tmp_msg_2.r = 0.9377311416689996;
    tmp_msg_2.u = 0.3239888014381771;
    tmp_msg_2.v = 0.10192733618841832;
    tmp_msg_2.w = 0.44158319065159857;
    tmp_msg_2.bias_psi = 0.2552646747547027;
    tmp_msg_2.bias_r = 0.35579406580166617;
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
    msg.setTimeStamp(0.8524533425938313);
    msg.setSource(56885U);
    msg.setSourceEntity(184U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("XYUHOVCAKYRHRUYUVKASGDCSBJKXIIUSUKWUCPVYCIODQEZXBOOLQBMPVWMRQEWTGNXPEXZOWCZVFHDAHXDBG");
    msg.description.assign("OVJPZYRSVUIVRAZVIZDSQOYGRCLFFZXIGVWJZNCGCACPEUTFFBBRWRUUKTMSFNIWBVPALLDXZVSOSQYATPOHKLKDEBZFOLDIBTMQNCICNOLFCQCX");
    msg.vnamespace.assign("JURIYNLOYRADHCCMMYCZPQMSEKZXJKZTTLNFPPNGHJVWFGNO");
    msg.start_man_id.assign("POJZKNKTSYOSAJCFAUYEHHYLNSHSAVRFTIMTECWDJXLRDVPQILDMNLXYVPOOERUGIJJCRHSROKUGDEEDMWJDCWPNZTKCYTAAFDOSNGGMLCHCZVIIQQVJHFMYBKEPMNMUAZEBKUOCUZQEDXWXEBNFXLYYPWBNLKIZTVOPVLWBBQRFSMLXUOAXCKPZDXKYRQGAFFBVWR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ATKUNNOMYONKVHGLRBZSNRZSSGWEACKWRAXLNGWQLNHJIUTHTLISFHSIONBXRWXKRSTIMUWYCGERDZCIFTODPXLUVYJICGAUCPJRFCZAPJCAYNGPJLLVUHUEBEIZMIDUMMWROBEQXXATFFVDFDXKXPATMOQPFGMQJKWLZUYVHFEQHNTDWQVYKGPSDXSVERJHSUHWPTPKEELC");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 1047925833U;
    tmp_tmp_msg_0_0.id.assign("SOASLNLYYZCDOHGOKMHERYXCFGXQPVEKQXANIZBMOMJICKHLCSGVHTPFGHSFHBJSZURZ");
    tmp_tmp_msg_0_0.memento.assign("AKCSNKCVJZBJQZUEQTTGAHHDIVOVQHGMUQMRAWGDRIIPLBYRVZFJIOMNYDMPOXRYOPPKEDXKNYFSWKJLXYVRPSCPBIXKEEXBGFEUGVPGGJBOHCONQJLKWMANHGRXTECLDADBJVFLNTQZAZPNJULTNHUUKVRWGUBOIFOJWSMNVXCDIHUKTWFMOHFIQWHZDIOLHFKYDUTATCQEUJEBNDMTXSSXLVRYYRRWZP");
    tmp_tmp_msg_0_0.custom.assign("UZCILEUXBOWKZRWNZQTRDYLPWUXYKKSWFWIDCCMGWWVXASURQAEMDSWLKPOWKJURNCLLHRFYZEIYOMTCMSOYVGEALHFHRMBIMNKICBJNBHZYGUSBPBDNVEJPZDBVIUZMSGFTV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::NavigationUncertainty tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.9035517102186731;
    tmp_tmp_msg_0_1.y = 0.7671749052971758;
    tmp_tmp_msg_0_1.z = 0.8157719725037754;
    tmp_tmp_msg_0_1.phi = 0.7725258121639066;
    tmp_tmp_msg_0_1.theta = 0.340573706403427;
    tmp_tmp_msg_0_1.psi = 0.058661607285718786;
    tmp_tmp_msg_0_1.p = 0.37051228495884947;
    tmp_tmp_msg_0_1.q = 0.35611229184893123;
    tmp_tmp_msg_0_1.r = 0.16664155189963592;
    tmp_tmp_msg_0_1.u = 0.4145678119213668;
    tmp_tmp_msg_0_1.v = 0.6760312054365242;
    tmp_tmp_msg_0_1.w = 0.17501139383423392;
    tmp_tmp_msg_0_1.bias_psi = 0.7294503849559779;
    tmp_tmp_msg_0_1.bias_r = 0.6939019388028856;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetLedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("HHXDKNEHNRBSQUYIMWBPKMELDFTZEZXAAFTLGYASUKJYPJQ");
    tmp_tmp_msg_0_2.value = 54U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QVPLHTSYPMOLJWUALMIWFJJHGBDZRJANDDEWPKUEYHCKCOBVJLVBTHKGSDUVCTEGTUSIMQKVRGRTMOOWBARKBQTAFOFTZDLGLYYIWKWDRZEZJKKFFTGRAPCEBQHPLNFNHPXJDXFBTJDUSRJZXYISEHARMNCZCUXPIVUTBBZLINNNMXGQWMXOXAOQCYOEWCIFPRYNIJAPMUWVQYQSHCUVXHEKXOIFSKMDVYHQ");
    tmp_msg_1.dest_man.assign("CUOTLFKRMSDUQRXZWQNAZTHKFREEVETKMBTCBQSWXXDJCULHULKTEDYKTMZZCGWDMMYMABUUZEIHQPFTWMVZJWPJVGHYGFXQGCKLBVHJHFILOPBOB");
    tmp_msg_1.conditions.assign("OJNZMPQCYUDCDZYKLVQBZEHWTHHXLEBRMXVBXZLFYSCJOYTPIJHMMPPUXDYINARFUKIMKDHNALWEGNHIWCNFJFG");
    IMC::DesiredHeading tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.8419626059343629;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8883413659193881);
    msg.setSource(29882U);
    msg.setSourceEntity(236U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(70U);
    msg.maneuver_id.assign("RHTZLYXQAMJQZYAPANGOXEPKKORTFBHVGRHIBMYNXNYWOVSGRFNDQTCQSFVKNONPRZFXILGOPBQCYZLEPWGQQUAEDMISJBEGJAMCOQLUGUNORSYIVOJBRBIPLGIUKAKFMBVLDKKTYNATVLBLEMMKTDQCFJRADSOWYZYNSEWWNJZUUEBSXUKXDFPCSVPBSHMVCXUJDPGKEXCWJHPCMAMHWRWUFJRITLZGODED");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 2352655368U;
    tmp_msg_0.id.assign("DFWLHAYCBXPGDCSKUMQFBDSUUTMSQEBTJBTNOZAZKQHMLZWLOAUCYDPPRQOSMYUUHLNL");
    tmp_msg_0.memento.assign("KEDHBGSSYNZRTMOTKRZIXBXDBJMEYQLXPSEYRRMFYKMCJDHUNKLFBQCVJCIFHHYZODTPMVUXWVWAXMUILIHPF");
    tmp_msg_0.lat = 0.41829540159028655;
    tmp_msg_0.lon = 0.3505012492883546;
    tmp_msg_0.z = 0.1055571527049971;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.34024036153808945;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.start_time = 0.701816261842622;
    tmp_msg_0.custom.assign("UEZLJMJOYCGLLTACCITDQZQFQQQKSBJMTVOHPXKEMKNWUJQWIEHEAREYYINSIZDUZFULZFKTOLIVVBJXOIAOCOT");
    msg.data.set(tmp_msg_0);
    IMC::CompressedImage tmp_msg_1;
    tmp_msg_1.frameid = 150U;
    const char tmp_tmp_msg_1_0[] = {66, -109, 7, 5, 126, -36, 53, 76, 74, -14, -46, 106, 19};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.8641909755944954);
    msg.setSource(58439U);
    msg.setSourceEntity(147U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(27U);
    msg.maneuver_id.assign("DVGFEKMUNEMMBPEUTFMPAOSVQQPPTLSUFGEVEWXWIHEOGGNIHNUHEGNDMTRSIFVZILHCIQAHOFJLFKKZVREQDRICZCYSWTKTSPFDDXWZSFOLZCAHIZZUXDJFHLTRXDSBRJRABRCMXMOOPNTLIQXGBYMFBDKYJYQNKZYYAYZDQBWOKOUZHQXCLMEWUMBNGXWUBLVCATPAQRYQNAITVJNLVSPCDNWJJPGRAJLWCOTGKJASUSYCJXBKHPXWBIVEU");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 2153698881U;
    tmp_msg_0.id.assign("JWYDUJPHST");
    tmp_msg_0.memento.assign("LBQOLXHUXJPAXIIJCODYPMEYCRKGUHHHVMEDKKDUZIZBGCZGSDTYTUMPTNVDPABRZASZVMKWQHEMDQKLAWORUIYBGGOFVALTFCNSOBPFIAHXFMTARQRIQACTINDCTTOEPSPLWSNCGJEFXZUXEJZMHCDDKYWGKBCJZAKMNNRH");
    tmp_msg_0.timeout = 64135U;
    tmp_msg_0.lat = 0.9550525691061885;
    tmp_msg_0.lon = 0.2956047038995556;
    tmp_msg_0.z = 0.06214592276775166;
    tmp_msg_0.z_units = 2U;
    tmp_msg_0.duration = 37405U;
    tmp_msg_0.speed = 0.05292453205744607;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.type = 172U;
    tmp_msg_0.radius = 0.2718587802242973;
    tmp_msg_0.length = 0.5876248554342446;
    tmp_msg_0.bearing = 0.05176147056893998;
    tmp_msg_0.direction = 167U;
    tmp_msg_0.custom.assign("FPTAMTUWYRSLUNWUJQVOXKYBEEVFRLKOVEGLVOOWNVAUKZZYTZUKXFDJQCTYBYGYPKYVZCSKSAUIKNVYFCQLJHQWRPGWGWEIZCUCKGJOXJLHCSNNDELCM");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.9490239773788857;
    tmp_msg_1.y = 0.6165988421952288;
    tmp_msg_1.z = 0.32409559438488433;
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
    msg.setTimeStamp(0.9193077395204633);
    msg.setSource(56005U);
    msg.setSourceEntity(23U);
    msg.setDestination(25846U);
    msg.setDestinationEntity(164U);
    msg.maneuver_id.assign("XYQDXPMHSLYHTKU");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 16666701U;
    tmp_msg_0.id.assign("EFBIHKLJICLEUKZEQQVVHSWUBWNAVRENGACOQINDCZTFVTRQSCEQMONVMKOAWGKZMGYDESCSLUFTTRGIBURLIPUPOSOHNBMQJPZIWVJDOQDCNFYGAZRXOPFHFRTBOJJJPZKVZDT");
    tmp_msg_0.memento.assign("BUDUXYGRVTFMNODTMSPFURCKRDHJTQHSLAWZIACKVZWEBPCEOTJXIOEHUAUPJQWYMPMENUWSULMXTKQKTVVNDIWXLDLNRSH");
    tmp_msg_0.timeout = 25030U;
    tmp_msg_0.flags = 130U;
    tmp_msg_0.lat = 0.9607069847073955;
    tmp_msg_0.lon = 0.8609338721450364;
    tmp_msg_0.start_z = 0.15013692699174774;
    tmp_msg_0.start_z_units = 119U;
    tmp_msg_0.end_z = 0.048081806114794956;
    tmp_msg_0.end_z_units = 123U;
    tmp_msg_0.radius = 0.15075842529575367;
    tmp_msg_0.speed = 0.16322933037219778;
    tmp_msg_0.speed_units = 85U;
    tmp_msg_0.custom.assign("ECNBOZKSCIBLVNDPSXMJVRPEJOFTJKCPVIEFHYSVRVUIGFXDSIIGXFJGFQMAUDXELVUUCUOHNMUTVSKGNDBKWQINJKMCAFJAZQHLWKWBCHERMBWGZREGFDASVITDYYPLYOCOHWQQGPAEQDWOOB");
    msg.data.set(tmp_msg_0);
    IMC::PathControlState tmp_msg_1;
    tmp_msg_1.path_ref = 283262169U;
    tmp_msg_1.start_lat = 0.39113557666861276;
    tmp_msg_1.start_lon = 0.9933324391373966;
    tmp_msg_1.start_z = 0.519877491077877;
    tmp_msg_1.start_z_units = 6U;
    tmp_msg_1.end_lat = 0.6967527510457171;
    tmp_msg_1.end_lon = 0.48001150293606853;
    tmp_msg_1.end_z = 0.6852635737756924;
    tmp_msg_1.end_z_units = 164U;
    tmp_msg_1.lradius = 0.9245509723791072;
    tmp_msg_1.flags = 51U;
    tmp_msg_1.x = 0.28704396426672063;
    tmp_msg_1.y = 0.9875445442622399;
    tmp_msg_1.z = 0.37121884080936784;
    tmp_msg_1.vx = 0.18937792225950578;
    tmp_msg_1.vy = 0.6636026347684335;
    tmp_msg_1.vz = 0.9264369698759343;
    tmp_msg_1.course_error = 0.7294672995298923;
    tmp_msg_1.eta = 24673U;
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
    msg.setTimeStamp(0.5700048548798128);
    msg.setSource(12250U);
    msg.setSourceEntity(152U);
    msg.setDestination(61973U);
    msg.setDestinationEntity(32U);
    msg.source_man.assign("SULCSVYOCMQMXWBWSQZXHBOQFHCUYZIQGGJGJOSLYJKVROHKOSJUCEDECTAEVRWWNMYQYANNARWTRYRAIQIYEPLLKLMRTSVBMPFPYSPWQLUTGBQSIDUMZBDHCWZYMXMGHQHGUAOEJZKHFRONDKXFOVZZIFIQBPXHTNDHEVTXFAFVPOPMLFJKBNKINLS");
    msg.dest_man.assign("OQWHQJSOSYQVHALDPPXCBAPBENSLCVZVAHPQPCZESUGFMFUDFPUMRXYQOSTRHMFWSQUXBHCFAQZDKKJMREAMZMJRGIZBKMUROVBEAXYJBYGOUCTZIAWXGLLJAGNHSIKNCEDAUEMTVFRCERGE");
    msg.conditions.assign("ZKRZTOSOPSYEOYZJRQAJBVLEEHABUGJQPIGKWHLIQNHVZNPYNBRUTDDVMTLZLLHCSVHFYDZWWJTDUXWCIWMAPDCNKYAUTQLFJUZWUHVGTSGQERXQWFDNVECSDUBMRYNPCKMNKWENXSYAVPIKETACSMIPSFCJDXTRAFOOPPFHTGTVLFCXLEKSFHAMZVGXUNQJCZIXFJOWBBQVGBMKQIHRYYYXZCXQFXGUKNBRSJMRMOLOORDGWEGKPDOEJB");

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
    msg.setTimeStamp(0.021528772371132376);
    msg.setSource(31524U);
    msg.setSourceEntity(12U);
    msg.setDestination(48741U);
    msg.setDestinationEntity(22U);
    msg.source_man.assign("NKEYCONEZDHZJVLBWFBUDTIVAIBIG");
    msg.dest_man.assign("GPQQECIFCSPRVTWJJOWKXKPRHOOTYQAUCAHMGHXFYDNZHERAIONJQCCYJRZBVBDUQKPX");
    msg.conditions.assign("BJFUTIEKSWBLQUKSGCAGHTNHQQDZRQPNLNGQFJONIBPJEFJRLJYOAKOWKMFCJMDDKYOULCMSMPMTIVUXELGFKHAIDLQLGPIRGTKLZXXBYWIBHEGYSSMTXXKBWQJEOWOEWYDDSUMCRAITANXLAMNZRHMYFBIYNNZZYS");

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
    msg.setTimeStamp(0.20627313418734705);
    msg.setSource(29378U);
    msg.setSourceEntity(159U);
    msg.setDestination(17897U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("QDPNEZHFQSYYLANIBVBLYJSHNTHNKSBHRAUIUOJWZCVQHDOMM");
    msg.dest_man.assign("LLDRFEMHPEZDQOVAVFMNBAAXWQYJBSGAUBXABJPAMLINPRQITHSVBKXXXMGSFLGSRQIJENRVYQDSOWKTICRQKPYCAVTGJSHVUPRTILLGFVZKFDWSNRMWKZSYGXAVWQIPTQEEJHDQ");
    msg.conditions.assign("VGZELSVRUGVDLKQPNHOAZMFRNQOPSNFWIVDRTFUEHOVD");

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
    msg.setTimeStamp(0.5830626696861131);
    msg.setSource(31707U);
    msg.setSourceEntity(6U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(9U);
    msg.command = 43U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SALFUVLQIMIVEBOLJZUACLOIZBWVDEGRECXEYQJFNPRFOKUXDSXWUIORQATPMJPHBSAKCUBHOWGHFTKBTHPCYPUNDLPOYIFSWXS");
    tmp_msg_0.description.assign("PDJCOEWJHAUSOOZHOJIWUHYBAPRELDIATWRNYKTDZHUKIHNDXGLZXZMWFBCMFXMIMTTQQSSNALGIKCCXAVMUYWVVGJNFDSVXXTENWLNIOZWLYYIVXCCHDLLQAMJCZLYAAZRHUAVQXAYCUEKIJOZIHKJNPEBXHCMQVDEBWGG");
    tmp_msg_0.vnamespace.assign("UILTQSWMYLRUJUQQGOCPLBJMCIUHLVXVUUSGAUOIRYEQLNTMBDLFARPVWDHY");
    tmp_msg_0.start_man_id.assign("FMEFBQEPUQIYNRCFYVZWNWHJEAJIYJDNZCPQVPWEXBI");
    IMC::CreateSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 2764241827U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3505283709527621);
    msg.setSource(12980U);
    msg.setSourceEntity(200U);
    msg.setDestination(43895U);
    msg.setDestinationEntity(193U);
    msg.command = 119U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XOFDPARICDOKTJKBTAAWQROWEBULAQBTLPEJLVOKLEXIFCJIMRPOWYGTXHLAWTKBMXSGVQEGZROYIJKYEUCJHAPDNESQGVZDUXTDGUWBZWVKRGSQAWVRYHDXDKNJALGMWXFLMTGCMIVXVCVKUDQTSTIADOJLUHJYYIHPYPZZQCZQNOIRTEPMJPZRIHFVZUNKHFNCANVMESFOFJSICSU");
    tmp_msg_0.description.assign("MPEJNZSPYSJHUZUBQISMSPQLBWEZLGZRCIZEJWAXHFSFNMHKTVGLIQUDZOKEWHRQJ");
    tmp_msg_0.vnamespace.assign("VADOJTDKWJATZMDYZZBKELMPMVKANFBXVKIUFFALMQDZELCWGHMKTOU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KABFUKGRSWERWRGZNVVVEBPXNPPOMJGFBJAZZJWUCINQQHTZCBNUWQDXHSSONFXVFJPTUSOROEFGRGIECYIPXLR");
    tmp_tmp_msg_0_0.value.assign("THBXYCTYEELUBGRJURCYPRXAURAIMASULLCCMNDTMDKJGBWCFVJEBYTKVZLOLAPVHMZJYHVMYMMDVNEXOQBSRIQTISUNMDLKKMZFIIOFKGXHR");
    tmp_tmp_msg_0_0.type = 76U;
    tmp_tmp_msg_0_0.access = 202U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RSJKJKXTFQBPYKYIHCYDMNRGUEBYMZKRZIAGEYSAHAUZCZCNZLMDLFEJJVFFPOIKBSA");
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.6684424599397267;
    tmp_tmp_msg_0_1.y = 0.6025847590030489;
    tmp_tmp_msg_0_1.z = 0.5980189919772783;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Rpm tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = -6945;
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
    msg.setTimeStamp(0.052151881086666796);
    msg.setSource(12436U);
    msg.setSourceEntity(140U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(230U);
    msg.command = 123U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("THWSICCLGHIMPLOKHYLPYMBFTFCZSLVXWUBCQVMFZRHOBGDDUCQZSWIPMAMBMVMKRVNZEJQWFVTYOGERTTUFKHFDSWIBZEXEINNNQDSKXUAGDXDJIYUCGSIICGHGOPYUORLBEUAG");
    tmp_msg_0.description.assign("ARGQHRMXJDUMNVEFRDQWGNUWBIKFTVPUPTZKGYOSOFJVBDPBAWNZOXFNEMIPRUECBGCJOMXGPHGLMWMHHNXRLQIAVEOJALJAGQMYFNRYYRZANYPXBCUZVHEUVJFXCWWXVVXIIPJOCKPTJQJCFUQPKYLBSFDWZDYOZNUYHGDBFEZILWQWUD");
    tmp_msg_0.vnamespace.assign("WPTJHWKMFSORFZDLZQVVWLUBZDJCPFCHTWMOUIGYMBOXUENHEKROHKNZVRDXJPBDWGAOITMCDIMRFAOTQWZAACTDYOHZQXTEYFUQDVBDQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CESCXNIZCFXESIZUYAMOADLUJYZQGHTHIUOWFPRQJRIHMYYSGWFFTRCQOIWJOGVHZPETWXYOYKYJFMKKECULSVHNJKFPVRENLRMZMUPOLGQQIKBJKBPRYHBCEBVBGTUWHIGXWOGQFKMXNTHPBLTQDZZVTAMSNFLHRRSZMVUNLEXCAZHUBANIMWSXYKXRAEATFGRJJSUODYQATGWMDDDU");
    tmp_tmp_msg_0_0.value.assign("PPJKJXHEUYWBQHMLZWYNEKTAVZNFBWH");
    tmp_tmp_msg_0_0.type = 246U;
    tmp_tmp_msg_0_0.access = 186U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TOFSLOVJRUFTMMVBDCVGSMXUJGQAIGRBJKMAYHXWCIEOZLHUPAMAAABLVABQMUELFHTERKXMBYQZWGLURYJQUPJJPDGIRZOBNGVSWWCYLAFYBRMETDQOGASPFIQGUXDNLSGKTSTEEOQTFIJLOPNMYKUTZKUVAPBW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VZUPXUKDHSRCUQOPBIRFSUUUEXOSAWJLDKPMUOSZCEMZMPUWNLVRRHTJLJOXGSQDCPQCVAKNAANVPFC");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 1072925747U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("ZIZWQOKBVYGHILPUPKQHZEZSTSWYGAWHCTHSLRUEEXNXATZWFRZNUSQLYOIYEJFEYHUEITPKAVBKOKQBHDOOJQWHUCMAPCDPSMSFWZGYADGMHGTXXBQVCDJPJINCMFEWCBKRWUMOQOBYNKRRSBWPAJRIMUPVBFQTJGAQVRNDOXDICJYOGJVLPDQDUYSUSSTEVRXNRKJNUBFLTITHMFNEZCPDGY");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("CTVBWOVEATLCHEMIJIYSMXOXAZVWVNQLFZWFUNFAYUGKSXSSPPJTCKXHBXQDGIRBJACBOOYDYOXPTSQMJAZRVZXHNIBLLCYMOOKUAKXFSUDGQVDOBENHRZRMMUTWEQQGNREVNPRGSLWYOMXEGHUMCOREHBIDZHUZHKRNSFFRPHSKDVKUBPCBWNLZKTLPLDHIMGDFVJQRYWEIUKATJJFWWGPFJWQ");
    tmp_tmp_tmp_msg_0_1_0.control_src = 50925U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 132U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.512070682456278;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.09848419357541505;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.13280568550449356;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("UPJRXYSUZGKNYIDVWYYFTVJJWNCFQCOTFSBDIHORRNGYXVDMSCXROZTQFBIRDENS");
    tmp_tmp_msg_0_2.op = 48U;
    tmp_tmp_msg_0_2.sched_time = 0.9672491019521932;
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
    msg.setTimeStamp(0.17226695562822014);
    msg.setSource(1010U);
    msg.setSourceEntity(191U);
    msg.setDestination(32983U);
    msg.setDestinationEntity(40U);
    msg.state = 219U;
    msg.plan_id.assign("WUHQRQYMNTZNAIJLZHEKPVEDIQCOZNWUNWSFYGXYPBTOAMYAHBBUOSSXIVJSHDOLNLUFEZYANHQZYIQOGQRHQJUBFSBCGEZPTHUICYSUTZDCMJJDCNEBXGPOSHAFAPJAPVALCKXKRCGGTJWBNMQKKOWVPLEEIGRYQLZDPJRXKFKEVR");
    msg.comm_level = 129U;

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
    msg.setTimeStamp(0.6568642085221241);
    msg.setSource(43906U);
    msg.setSourceEntity(126U);
    msg.setDestination(45313U);
    msg.setDestinationEntity(60U);
    msg.state = 210U;
    msg.plan_id.assign("JWIMXHTUVAQGHZTRRVMVUJKNNXOQXZNQWATPNFJSPXWABEKUJEWUZGDUDGUTJKBGGKDUGZDGMRMRXYFMNJSBRORSOFLACCQVTKRWYMPASELZLEZPQHHFWYHYYPYUVLEEOMWDZBSQTCIMNGCJPXLLLJSIOWQBOBPIPZEDTDBVLNDFNOAWSMIQTEHVYCUNXJKKJTFHDIIODYGAFSFQYASZTRCMCUBIXI");
    msg.comm_level = 4U;

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
    msg.setTimeStamp(0.5593173629949508);
    msg.setSource(46222U);
    msg.setSourceEntity(184U);
    msg.setDestination(28411U);
    msg.setDestinationEntity(105U);
    msg.state = 86U;
    msg.plan_id.assign("LGGZRDEBVLMEVVFTHHRPTENRNOQYAOKVYJHCFRDRPIWMMJAGQOXMFFPDG");
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
    msg.setTimeStamp(0.30414539024172726);
    msg.setSource(10674U);
    msg.setSourceEntity(89U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(55U);
    msg.type = 214U;
    msg.op = 161U;
    msg.request_id = 11177U;
    msg.plan_id.assign("NZOVXOXJXLVFCQLDQCMXLBYINUVFXDW");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -5803;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("THBWQPIMRWNAOLVKPIMQOBMSOEIKYHTOTUUPLWCLUDYREJYSYBQYWACPPVMLKOPASAPBVFZQFQFAKJCXHINQNOXJFUIWJQUAGADISCWEATVKF");

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
    msg.setTimeStamp(0.7886599296675595);
    msg.setSource(23345U);
    msg.setSourceEntity(61U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(134U);
    msg.type = 50U;
    msg.op = 214U;
    msg.request_id = 1046U;
    msg.plan_id.assign("VLTGRBZKTYPUSLMKCCPLYJDKFRRLDRABGEASRZTXHCYETICVYHSAISQXMCIPUQNEMOXVAQGINGWICAWGUNNYVIDTEPXFKWROJUQAE");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 218U;
    tmp_msg_0.speed_min = 0.35299498634959525;
    tmp_msg_0.speed_max = 0.7921510740490395;
    tmp_msg_0.long_accel = 0.006016850567101328;
    tmp_msg_0.alt_max_msl = 0.37320275001016956;
    tmp_msg_0.dive_fraction_max = 0.05678163722890328;
    tmp_msg_0.climb_fraction_max = 0.11599841668884736;
    tmp_msg_0.bank_max = 0.7335156341446277;
    tmp_msg_0.p_max = 0.6440249088012868;
    tmp_msg_0.pitch_min = 0.06161830989933159;
    tmp_msg_0.pitch_max = 0.33880876139192195;
    tmp_msg_0.q_max = 0.9702090312321268;
    tmp_msg_0.g_min = 0.33806055214270125;
    tmp_msg_0.g_max = 0.36269899571609143;
    tmp_msg_0.g_lat_max = 0.7384631491783414;
    tmp_msg_0.rpm_min = 0.3975854488388929;
    tmp_msg_0.rpm_max = 0.08548410413891028;
    tmp_msg_0.rpm_rate_max = 0.9769810360082782;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LITISLMNHYWDOSDWRHJXDCDGDMOCZPSFYOPDEZHJKYXXYEFKJTBNNCUGNCQABLLDNFQIMJZOHBBQNLSPIWARGKUFYVBEYEMMBCPNGRVOAGRSTQLKTVGLAYKGJZFMIIFQ");

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
    msg.setTimeStamp(0.4887329816710222);
    msg.setSource(10432U);
    msg.setSourceEntity(150U);
    msg.setDestination(23956U);
    msg.setDestinationEntity(135U);
    msg.type = 231U;
    msg.op = 223U;
    msg.request_id = 25385U;
    msg.plan_id.assign("RKQTIVCWANQTZWUFRFEFJZURJCZCYNBEBWIOCJKJOTAGSNV");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("MSQLIVUJZNFERKUSRAZOYWRPGCBDCLMVYEBIJAEPMMCISBBWFYBTBEUSKQGJJGGKRTIWYRWPVMTSGFWCHODNQDXPQFKIHNFTEKRITNE");
    tmp_msg_0.op = 35U;
    tmp_msg_0.lat = 0.8373399617091974;
    tmp_msg_0.lon = 0.19344764577811335;
    tmp_msg_0.height = 0.0859464783042534;
    tmp_msg_0.x = 0.18548451978756708;
    tmp_msg_0.y = 0.7557840096722722;
    tmp_msg_0.z = 0.3529441646983378;
    tmp_msg_0.phi = 0.5197830506025377;
    tmp_msg_0.theta = 0.40280810239511833;
    tmp_msg_0.psi = 0.2251416783973763;
    tmp_msg_0.vx = 0.9669005952602601;
    tmp_msg_0.vy = 0.0159904943528284;
    tmp_msg_0.vz = 0.3441541347032383;
    tmp_msg_0.p = 0.10180294183543104;
    tmp_msg_0.q = 0.47447948124283645;
    tmp_msg_0.r = 0.7251973223294474;
    tmp_msg_0.svx = 0.03993062773605971;
    tmp_msg_0.svy = 0.5768710736060789;
    tmp_msg_0.svz = 0.3588901440816481;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FPEKFVSGHIJWPIANSGPXNYLRQQOKTJBJKUXHBVLMYGZOGYVLLAFDJTCAIHSTBKWDKVIQXNLNBWEWJSHMOIDAXCMQUDZXUJHRCCVHWBHITLOZYEMFUMROTGOEEDYXVQCNEPKGYCOTQ");

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
    msg.setTimeStamp(0.20928085081105197);
    msg.setSource(17299U);
    msg.setSourceEntity(168U);
    msg.setDestination(49607U);
    msg.setDestinationEntity(19U);
    msg.plan_count = 24490U;
    msg.plan_size = 2500193842U;
    msg.change_time = 0.7067781181556663;
    msg.change_sid = 37022U;
    msg.change_sname.assign("PBPETZGOSJQNJODXNGOVDSRUBZQGSYWN");
    const char tmp_msg_0[] = {63, -81, 79, -23, -106, -124, -8, -67, -40, -56, -120, -1, 11, -26, 123, -78, -42, -41, -38, 78, 79, 104, 16, 97, -76, -82, 98, -55, -22, -92, 51, 57, 49, -29, 69, 59, -46, 48, 95, -28};
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
    msg.setTimeStamp(0.745060422354519);
    msg.setSource(19146U);
    msg.setSourceEntity(132U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(25U);
    msg.plan_count = 39843U;
    msg.plan_size = 1706350278U;
    msg.change_time = 0.29170807007928345;
    msg.change_sid = 35296U;
    msg.change_sname.assign("OKWTIGHTAUQXWGBLLNZPWMRYHERWZOTXFWFBEPASABZBFMIXDVTPJJFRKFLJGVKEHHVMDFESKFMOQKPOJKWBNAJSXDZZTJNYDUDCTYWVIGCYCYILEUHFSPOXQGULCAPIQJUKWWNRAATB");
    const char tmp_msg_0[] = {51, -109, -59, -79, -18, 84, -96, 5, -128, -25, -124, -78, -89, 59, 73, 46, -110, 87, 6, -122, 63, -123, -54, -67, -82, 13, -4, 73, -1, -40, 115, 44, 34, -33, 53, -66, 83, -118, -97, 53, 18, 9, -5, 115, 107, -56, -36, 97, -60, -106, 90, 22, 117, -72, -124, -23, -66, -105, -117, 118, -99, -117, -39, 84, 54, -82, 96, -3, -91, -42, 125, -100, -36, -73, 25, -120, 2, 108, -19, 83, 43, -93, 114, -128, 124, 12, 118, -94, 123, 97, 27, -106, -124, 59, 96, -114, 104, -102, -38, -19, 79, -88, -8, 113, -73, 72, -88, -122, -5, -28, 73, -79, -35, 102, 80, -59, 89, 117, 74, 12, 83, 110, -5, 82, -49, 105, 4, 77, 71, -92, -32, 0, -5, 117, -39, -19, 83, -128, 1, -79, 116, 29, 117, -9, 75, 82, -126, -14, 24, -127, -105, 80, -32, -26, 111, -16, -124, 25, -50, 70, 31, -118, 36, 84, -1, 40, 107, 19, 116, -53, 108, -64, 0, -94, -76, -78, 27, 2, -74, -106, 115, 68, -120, 49, 44, 75, -80, 109, 43, -118, 34, -90, 72, 10, -25, 120, 5, 25, 83, -102, -120, 100, -49, 18, 47, -12, -55};
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
    msg.setTimeStamp(0.8685267154705343);
    msg.setSource(5265U);
    msg.setSourceEntity(203U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(227U);
    msg.plan_count = 53468U;
    msg.plan_size = 2793843312U;
    msg.change_time = 0.46941409936563716;
    msg.change_sid = 20273U;
    msg.change_sname.assign("GFLTYCSTBKKRMDZXCEOOVNBTLSJDZKQVNXPGGPYHBWPA");
    const char tmp_msg_0[] = {29, 30, 42, -115, -78, -62, 24, 98, -81, 6, -39, -40, 111, 69, -125, -28, 24, 7, 22, 2, -49, 90, -102, -19, 74, -103, 96, -110, 100, 24, -3, -116, -10, 98, -55, 67, 83, 61, 42, -107, -83, 2, 73, -63};
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
    msg.setTimeStamp(0.7602292610923013);
    msg.setSource(24021U);
    msg.setSourceEntity(227U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("TZFBPRZLOKOYDFFC");
    msg.plan_size = 55408U;
    msg.change_time = 0.5668462873655504;
    msg.change_sid = 35227U;
    msg.change_sname.assign("HPLXAIZYWUSAKOXOJOIAVZNHJHMLMMDNXIVRSQBTBWOZZNCTQVBEGOEXFNPMUFEUQRTTFTSLIKPOURIZENMAXBHCABRFZSBCUSLYGYDGDRTVMJLLTXHCOSUXNJEKYQAYHVSLISPFYYYQWLFOPJSCDERIAFOJCNGMKGIGKPADPF");
    const char tmp_msg_0[] = {-25, -106, -13, 41, 82, -30, -113, 50, 79, -5, 28, 91, 52, 123, -77, 113, -51, 5, -67, 65, -20, 45, 73, 119, 36, -21, 20, -86, 106, 94, 12, -19, 116, -47, 90, -25, -11, 53, -35, 46, -59, -122, 125, -61, -49, 80, 57};
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
    msg.setTimeStamp(0.28389917559960054);
    msg.setSource(50154U);
    msg.setSourceEntity(0U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(31U);
    msg.plan_id.assign("TZLYBSOVWCOIEAWJIFWFZYGHJWRHQAYKYVJNSADZPVIIGKVHGYGFGYBQNYPZJEUFLKRQNFMFJMXUPBWZBWIEMAVCOZT");
    msg.plan_size = 5658U;
    msg.change_time = 0.7673333171950463;
    msg.change_sid = 10708U;
    msg.change_sname.assign("PGWUKQLKPWATCKDUNVYOSLAZYDUYYRNXTIDUKREIC");
    const char tmp_msg_0[] = {-86, -44, 81, -107, -2, 70, 102, -19, -31, -31, -80, 85, -82, 68, 73, -17, -32, 25, 105, -112, 84, 50, -74, 92, -61, -64, 96, -104, -104, 13, 16, -33, 99, 46, -38, 88, -117, 86, 8, -100, -127, 113, -44, 67, 19, -2, 16, -68, -122, -73, -73, 72, 79, -77, 53, -45, 4, -91, -63, -46, -101, -128, -42, -31, -54, -29, -109, -67, -66, -57, -41, -112, -63, 84, 32, -57, -98, 10, -107, 14, -58, -114, 84, -94, 42, 48, 52, -48, -25, -80, 56, 94, -87, -103, -117, -74, -30, 15, -15, -60, -44, 116, -106, -89, -28, -86, 80, 17, 59, -58, 33, -46, 98, -111, 67, 72, -74, 75, -127, 71, 117, -124, 27, 94, 49, -84, -3, -87, 112, 62, -120, -45, 28, -9, 46, -23, 109, -40, -9, -46, -99, -12, -65, -9, 117, -109, -51, 121, 51, -103, -105, -98, -86, -127, -103, 54, -5, 124, -65, -62, -73, 44, -69, -119, 57, -1, 25, -22, 8, 45, -27, 29, -121, -62, -12, 34, -28, 83, -10, 38, -99, -40, 62, -54, -87, -112, -122, -20, -49, -102, -47, 70, -3, -21, 15, -100, -38, 15, 62, 90, -27, -82, 64, 37, -112, -81, -46, -57, -1, 14, 112, 62, -109, -61, -1, -56, 20, 9, 68, -26, -59, 31, 115, -58, -87, 118, 28, -6, -37, 47, -53, 77};
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
    msg.setTimeStamp(0.4753860928343382);
    msg.setSource(44564U);
    msg.setSourceEntity(253U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("KYQSDFAMEZWQZEHKSCRZDTTJSQQKFFJPNGILZOUCKWVZGUJZEWNOLNJL");
    msg.plan_size = 47364U;
    msg.change_time = 0.4144724254005385;
    msg.change_sid = 38639U;
    msg.change_sname.assign("AYNEAWHZKZCEABPHLQYEPBFRHUWTPACOKGRFIGLGDVFTWCUQUDWZXPRLWOUWAYDSNQKIOBONKGAJXARLEIOZXMJLKVNVLKDBTONRISMMJOHZCYWAZUXTSIHZGGXBYJHTDRXCXRQG");
    const char tmp_msg_0[] = {25, -60, 111, 72, -48, -83, -29, 126, -42, 96, 60, 17, -93, -94, -125, -2, 81, -106, -2, -15, 113, -123, -52, 78, -92, -61, -20, -111, 28, 56, 53, -126, -70, -84, -58, 41, -81, -79, 63, -54, -126, 122, 126, -9, 64, -20, 6, -6, -3, 18, -39, 6, -79, -115, -24, 54, 105, 82, 119, -127, 81, 99, 115, -106, 94, 114, 100, 120, -106, -35, -68, -89, 2, -126, -93, -123, 39, 54, 14, -76, -104, 27, 9, 113, -73, -18, 49, 45, -94, 83, -47, 23, 102, 24, -66, 59, 34, -26, -92, 64, 72, -19, -111, -108, 62, 66, 106, 18, -72, 121, 116, -43, 70, 73, -114, -105, -78, -10, -92, 107, 116, 21, -119, -90, 112, -81, -80, -85, -74, 85, 42, 48, 72, -112, 2, -87, -73, 55, -70, -97, 18, -13, -121, 3, -29, -16, 101, -71, -11, 118, 27, -2, -41, 2, -99, -81, -63, 9, -25, 87, -14, 72, -57, 29, 50, -74, -58, 96, -126, -64, -72, -109, 112, -73, 93, -103, -120, -109, -95, 34, -128, 122, 47, -101, -43, 119, 44};
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
    msg.setTimeStamp(0.6967620785736282);
    msg.setSource(50718U);
    msg.setSourceEntity(74U);
    msg.setDestination(21979U);
    msg.setDestinationEntity(250U);
    msg.type = 160U;
    msg.op = 187U;
    msg.request_id = 15219U;
    msg.plan_id.assign("WEULHPUYXRFGYCFUZPSOVXBHWCIZNRBHMZNRGDRWPPELDMIPATRYFAJRVDEKJUAYQXLJXDBOSMQSYRPAFWTBHGAYTKAINXXBJHZUVCVIQLJMNARGKCHVECAMAIJPIVCWOVIGOUKUKZHQBCT");
    msg.flags = 2583U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.36175544408104654;
    tmp_msg_0.lon = 0.36620435148146957;
    tmp_msg_0.height = 0.4630031061561024;
    tmp_msg_0.x = 0.747697975031917;
    tmp_msg_0.y = 0.41191238917828166;
    tmp_msg_0.z = 0.47502781730478516;
    tmp_msg_0.phi = 0.038684808894811074;
    tmp_msg_0.theta = 0.8743712432042929;
    tmp_msg_0.psi = 0.8681124257990411;
    tmp_msg_0.u = 0.6640922605531003;
    tmp_msg_0.v = 0.5817613998015125;
    tmp_msg_0.w = 0.44659694242379233;
    tmp_msg_0.vx = 0.9501545676151698;
    tmp_msg_0.vy = 0.9126410684017823;
    tmp_msg_0.vz = 0.06969058148532281;
    tmp_msg_0.p = 0.552921187830949;
    tmp_msg_0.q = 0.822552433192325;
    tmp_msg_0.r = 0.9701454321289974;
    tmp_msg_0.depth = 0.8377865675987463;
    tmp_msg_0.alt = 0.11945442279776586;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VNDQCCFXPALSGCSEMBDUVVUVXDPMOLWYSQKQTMNUCBYSXDXFNJUHAPESA");

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
    msg.setTimeStamp(0.548717362223987);
    msg.setSource(56843U);
    msg.setSourceEntity(31U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(13U);
    msg.type = 254U;
    msg.op = 217U;
    msg.request_id = 36184U;
    msg.plan_id.assign("ETNLSFCBNCQFGQOABXGIIIGVBGADTBRZXZYBIQOUPNPQBZWJRCZXAPNMDOGOHLQCRKWSSZOUYYEEGHOXLMLXJMIRRERLGUTVFBGORMPMTLZIFTQYFJEYAITVULGFYMCBJOSZNRTHRHKCKKQUUANIYNXWHUAAVCXFXUAFD");
    msg.flags = 32618U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.3249037203927372;
    tmp_msg_0.dist_min_abs = 0.8379240803021166;
    tmp_msg_0.dist_min_mean = 0.33327771928564376;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OKQUJNLZYZMYKNWETSGANYYAGXGHBNMWCKDBSFMPQHAYEGGAWXVAVIXLYLFTCCIETBRPQQYILXTHPNXOGDHDVITASCHDQETOJELBZFUROMXUYSLHSQEPGKOCWCWRJNBPDGRMVTEROZDRJGRIRO");

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
    msg.setTimeStamp(0.8684288507095075);
    msg.setSource(40981U);
    msg.setSourceEntity(125U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(90U);
    msg.type = 48U;
    msg.op = 129U;
    msg.request_id = 2354U;
    msg.plan_id.assign("BENHAYUSJERDHQYFCUOMUYFKJFERUTKIIOFORVIBMZQWWVAUMWUZQHPNWTQOCJTKCBMGAEYURZJAQHJVEZSLKAYSRQDKRRWXZQFBWGBNWCPMWSKJOXEMDNYYJFNGTXPKSJQBZLTLMHMSRRVSBVCXDNPGXCXOPFYEOVCAPONXIHDWHFVAUZCQPLQGMPPAJWLDYFBYZUZLXINIIPLDSTDSOTDIHEIIULFEVHTLXSRCMGKVVONXTBEALHGBNGG");
    msg.flags = 55639U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UXBTRLSVVEMKDJMLRBOMSAUBYJQVSNGRQFMHICOGFLZVGPZZFPAWEDJXKUHFHNOBTSVKVGQRWPUMTOPILMUTIDVRZBMGORCNYSANYSSEPJXLGRWYDYPGH");
    tmp_msg_0.value.assign("HYCZGOOOYGXNRWPJIJTAGLNQOGZIXERBCIYGRNKUQLWUAMUKKMXOVFTPBMFRSUZPHVTXISCOMXTQPQDAGPYTQDYAXWENQXWJAUVPVLBVVHLAYVSJLUXOWWIUDGWCRSHPBCKSSDQRICPQEZJO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WIKRUDTGMOMLIHJCDAGLUKGVTCESOENCHNZKEGMXBFPCXIFCNZGQZIPIWUYRYVSSRLPMUILHOYSLLXRFPTQESDJCUXRHYVIEBWCIXABNPSNFMWWJ");

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
    msg.setTimeStamp(0.5329037809799643);
    msg.setSource(60328U);
    msg.setSourceEntity(93U);
    msg.setDestination(18691U);
    msg.setDestinationEntity(91U);
    msg.state = 163U;
    msg.plan_id.assign("AYJTASXUPEKAXWPLOUXBRBNYJNEIRISXHBWMXZPTBDSZALOZFYGXIEQCTDIHHRRDCDSPUXWDVXOMFRLBJTWOFICWQHDVMREGVTLNTIJCOAFGNKMOHUVYNHGYRWFYVKQVFLCZIPIKXIPTSQEJEEFKZUGLJJMHYVAYUBMGPD");
    msg.plan_eta = -355434281;
    msg.plan_progress = 0.102647080636459;
    msg.man_id.assign("IVKURLQKLXQBFRXSQBEUYODAYSXMQKCUDIPHGADSWASZEOJZDCGWGNJHBLTZCHJZRINBIMEJZXWIOJYWBYPURCQOKLZFINWCONMHMMFYORVVXRGAANPSZCBGFVHUJMYNVATRFLTITVETQWBJFTMCUSPKAKDGBQMURDENCLJXPRDFWNLKLEGOAZWHXYTPTSVJGFJDSPFIIBXCSFHSDAWGDTEVBCEUINXQOZKHTKEZOAVYYVXMQNPMPYUW");
    msg.man_type = 35435U;
    msg.man_eta = -1117403301;
    msg.last_outcome = 236U;

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
    msg.setTimeStamp(0.2637290064913117);
    msg.setSource(11591U);
    msg.setSourceEntity(130U);
    msg.setDestination(36176U);
    msg.setDestinationEntity(6U);
    msg.state = 213U;
    msg.plan_id.assign("SJDCKSQXCENAGOFNPXAXWYWLQIRWVYOHNBJRQUPCDBZDKLTSQXHAVLROKWOKHRVW");
    msg.plan_eta = 1098243559;
    msg.plan_progress = 0.7511269796490467;
    msg.man_id.assign("ALMGBHGOINLNNKQMGSLKTTBHZWPABNCAPXJFRJSSUQBILWHOMAVHJDSNSOAKRVGFNPEIHJKSBUCCWXAVOIDYUMGVZFQOGZNCCZZUBHRQYFAS");
    msg.man_type = 53359U;
    msg.man_eta = 1805904003;
    msg.last_outcome = 17U;

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
    msg.setTimeStamp(0.5794037260171361);
    msg.setSource(18664U);
    msg.setSourceEntity(127U);
    msg.setDestination(49940U);
    msg.setDestinationEntity(41U);
    msg.state = 173U;
    msg.plan_id.assign("AJDDKNKNXTKFRFTWLBIRVUZWAISDCYAWLTJEUKOXSSRRSVNNHOHMOOVYEGJQGUNYYTMZBPLBPNOYRFDMXBCPZAVWFOEIURZCCPXOLPHLBBXGVIMCQDYIQGSUKKTPQEDPWVHVZQEFKHPTETFAEPLLXMMHGAMDYWBOVAHLSUJIJQYPEMBYJWBZWMVHLSXGRXUHTYXBNDAIKIXSNCEQFHRKGQSGDFJZROGDOZTMULJFUNT");
    msg.plan_eta = -55702856;
    msg.plan_progress = 0.6597587221788634;
    msg.man_id.assign("MRSNHMWVDZRZSGIYDDPWQJURHTVIZDUIWWDJBGLLXJURIOZLVONMORUKGCLIOYKSHIPPAEFYQVMVKDTYVXZWDHXCJQPPLDTWMAFCOKYAMUNKISXYQFTBLBHMVOUMHEUATJWWBYA");
    msg.man_type = 19857U;
    msg.man_eta = 22364518;
    msg.last_outcome = 224U;

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
    msg.setTimeStamp(0.7347756263464794);
    msg.setSource(47536U);
    msg.setSourceEntity(123U);
    msg.setDestination(63742U);
    msg.setDestinationEntity(139U);
    msg.name.assign("EECDNZJPYTOEZADFVRYSIFXVQSZGBPNZRMSIQUHRESFGYFVEHJNOLAGHOCZRA");
    msg.value.assign("YTZWCOGYZEDVDAQQQLTWTAYZZMHAKRBGVRJ");
    msg.type = 33U;
    msg.access = 65U;

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
    msg.setTimeStamp(0.18199379119716996);
    msg.setSource(55093U);
    msg.setSourceEntity(167U);
    msg.setDestination(13979U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ASIHFOGESDSTYSCTAJUQBVPFGRPOAEUXVUCQNPBLKIGLMOQGFHXPUWVGPRKWFLULEJTCSIYBRVYOBHTDJXTGXMDTJHOYKXDDENYDIRGIWOADJJGDZIEDPVRSNEYHEMTPNYY");
    msg.value.assign("LVKUJKSNTGTJOEBRQGCOGYRAEXZ");
    msg.type = 156U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.6891712307274646);
    msg.setSource(25739U);
    msg.setSourceEntity(158U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(237U);
    msg.name.assign("DJLDUPOELGENOFYHTZOIJFXDBDKSZPRXKEETHKTOBUUZWUGXYTITCGVHHYFOZEQJNJTDIXPFCYKSIADBNHFUWLABQFRCORIDAYYMQHEAONRWNPVOVMLZKPPWGDPNBBZKRATLMABMRSRWZSZ");
    msg.value.assign("WSYTLCYHZUGRJAALOXVMDGKTSBLJGBKKOTEOHKABJJFFMNAIIQJTCFVQHGCFLNCTTHARTDKYXPRZIYNIMWIIOYSCIRKBXHPXEJDAUZKUZM");
    msg.type = 177U;
    msg.access = 115U;

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
    msg.setTimeStamp(0.8472495279105976);
    msg.setSource(37410U);
    msg.setSourceEntity(243U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(146U);
    msg.cmd = 159U;
    msg.op = 198U;
    msg.plan_id.assign("RZMRKRTUKPIWZOBCBUMDLCTWEGVCFPAOSBCDOHNOXWADMSZCXZFJHTHYQNDHVQHSHOCZVMGIKHIMTJAXQLLNPENBUFYIKMZIBAUQIPKKCRNULLWGTJRZWBXSSQYAYNSGWDEMUAQVGMSKXGOCSNQHF");
    msg.params.assign("DUWXYMPNDESECMGNEMEPISENJKBIIUKVSDNEYXUAYQOFGJSZHROOAPVVJLALSKBJIPLUCJDD");

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
    msg.setTimeStamp(0.6864077186602362);
    msg.setSource(51951U);
    msg.setSourceEntity(105U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(72U);
    msg.cmd = 9U;
    msg.op = 117U;
    msg.plan_id.assign("QLLDJXOAZEXHJNLQBJMXSPBXSTZOQPYUZSMNBPDJKHZAFXSFRVFUFQSIRPNVQJCUGHWXVEHDCOBVNDAORCYWPMEEPQMDLUDCTYAZGGKDAWJVPCUNIOUJCHIWMVBZLEPDA");
    msg.params.assign("REARPAXXERLHLKOMIIYJIWVKNDJSFLGHEJEBYAKBLVKTVOVMZYTNCXWIMXJBLMNVFWUTCUOH");

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
    msg.setTimeStamp(0.09028087774673799);
    msg.setSource(58908U);
    msg.setSourceEntity(92U);
    msg.setDestination(50597U);
    msg.setDestinationEntity(49U);
    msg.cmd = 174U;
    msg.op = 22U;
    msg.plan_id.assign("HHBVVKDVHXRPBZQPPISILYEDFEEOWXXRWVBDFAANFGRCVCCALXTZGXZFTCYRMZLZCHZQSLSRDLEJMWGWGJWPVEUDPAXNVOCRAEXYAKFLEVKTQ");
    msg.params.assign("GDVVNCBYRDONJSSWLWHRLCTODTVEYWOPTFLAQPJKPQUNYGWMRPIMAZSSCVKXZDURGUXXQUYFXZSKJLKBQSZACEXVNFMHQCNRBOYWVBQABZFJMFZISHVHHICOJJFOMBCRTGDQJVKEIYYUEBO");

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
    msg.setTimeStamp(0.26027112273039954);
    msg.setSource(9687U);
    msg.setSourceEntity(249U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("WITSLTLSGOIZVVXMBPEOVLWTGFUHEPLXSEX");
    msg.op = 150U;
    msg.lat = 0.15007901502959176;
    msg.lon = 0.35255122791113414;
    msg.height = 0.8119396338917673;
    msg.x = 0.09213831773122527;
    msg.y = 0.8718618863734009;
    msg.z = 0.8631577708266975;
    msg.phi = 0.08988770435656701;
    msg.theta = 0.1357999589867387;
    msg.psi = 0.20219558387655212;
    msg.vx = 0.2380616933909172;
    msg.vy = 0.7942972479647464;
    msg.vz = 0.936303706433003;
    msg.p = 0.9493814937725833;
    msg.q = 0.9081958320873604;
    msg.r = 0.12492902885646306;
    msg.svx = 0.09826735852563873;
    msg.svy = 0.08460346971367994;
    msg.svz = 0.4944571157308012;

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
    msg.setTimeStamp(0.3708675761811988);
    msg.setSource(25008U);
    msg.setSourceEntity(135U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("MNQPQCVRPOOFIXNJUCBJDXGJZXMJFGTKIZRSTMZCCMHZJGUQMXWNOQAJHQEKVLTSYSOGNATAMHYAYBLUICGMPYVMRQKPWYZHKLLJFUJBDPJDNOAUQCGCOLBDWFIGZOZPUEYENWURYBSKVAKO");
    msg.op = 151U;
    msg.lat = 0.592622289279878;
    msg.lon = 0.25688391496841034;
    msg.height = 0.5141718011827778;
    msg.x = 0.4978113264134033;
    msg.y = 0.5788925497672676;
    msg.z = 0.24490955290822192;
    msg.phi = 0.3870293294890803;
    msg.theta = 0.8046952303466037;
    msg.psi = 0.22387583684015389;
    msg.vx = 0.3215109351873022;
    msg.vy = 0.8779892783272398;
    msg.vz = 0.7954872223566872;
    msg.p = 0.5483263771327144;
    msg.q = 0.37465418885300783;
    msg.r = 0.7727249148227429;
    msg.svx = 0.7186605203134578;
    msg.svy = 0.22871829716983205;
    msg.svz = 0.7797779604832857;

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
    msg.setTimeStamp(0.29176033750471275);
    msg.setSource(6685U);
    msg.setSourceEntity(79U);
    msg.setDestination(22107U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("NGUZXWQIQWWONNSIKATSJCEXYDRMVRFMHEDDLCODSCTVRYYZFSOEPGCXMQMRSQLTCKYERILTBLKVNQWHDEPGHCTQSXFXUXJLKEBVAAHOWRPNNNPXBKMTDHXOIWUOZJIJRWKMGMJVSAZOEUNTBTLLLSOCCGSIPYMSCRVYBIABVUZRNIUKHUKXVBDAQYGCEUAHAKKZWGAUFGBTQFFJFZBTYGHLARVMHFHGDXWPLZYJPEFFJMDZOPPDY");
    msg.op = 75U;
    msg.lat = 0.7989760479772626;
    msg.lon = 0.284282823847392;
    msg.height = 0.1770379371016808;
    msg.x = 0.53440843636982;
    msg.y = 0.688176299474544;
    msg.z = 0.6448691578539835;
    msg.phi = 0.016225704493313953;
    msg.theta = 0.3891136674708424;
    msg.psi = 0.07448279700737803;
    msg.vx = 0.2805927043751728;
    msg.vy = 0.3020207646719487;
    msg.vz = 0.7335302368792662;
    msg.p = 0.9260816786019469;
    msg.q = 0.8346434158171986;
    msg.r = 0.4132813100456426;
    msg.svx = 0.4801678524135967;
    msg.svy = 0.3588203108390977;
    msg.svz = 0.6911409176360386;

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
    msg.setTimeStamp(0.8686591396066236);
    msg.setSource(42940U);
    msg.setSourceEntity(227U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("MRANXRTIMBCUJWRWKHCCKLJYENZHVICBJZXUYUVXIRDXPGYJZUKQFTDXFSGIFZDVNENGQMVKOPUFTODWIVDRMDEUEYHBQLRCPRNTHYBQSAOXTVTEQGUBEKFBNHGCUNJVDITXKWMNJOPAKLOJQL");
    msg.type = 54U;
    msg.properties = 170U;
    msg.durations.assign("SISJAEPRSKATCTOTEKXZOQYWWYMNPMVUZNJEVDJRMKMSFSJMIYZZDPNCRWGQSKHEBQYWLPGIDXGPTAMGKVIP");
    msg.distances.assign("RKSHYDAEWJNOMZFBPYRVNEYLKTLHZFWISULVPDTULXPLZSMVYMSDNISALSYOPCQGFUVELGTREHPTZDRVGNTYGYBXKXVKHHHGVCGOFBMYITEXAQMOXDOMWJWCNNKTFPOPPOCYCTKAZQBWFLIGJKFINCJWESNQAJA");
    msg.actions.assign("ZATIKHGZUC");
    msg.fuel.assign("IFYJGZWDLOSPEASXCAOQXUAQNTMRDCPRYQCYEWLPXDQYBLUFHSTJDBULZKBAGKFVSSWYLMMMQMATJEUR");

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
    msg.setTimeStamp(0.6705287484135746);
    msg.setSource(25253U);
    msg.setSourceEntity(16U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("HZXFKXOPZIACIOBXKCLGLQJJNOZUAVIKEFYXFAFZCIEZMNBYYNDHUWWPTJUJUINWZCKAPLFWNPBJTPEALSOANJXK");
    msg.type = 194U;
    msg.properties = 99U;
    msg.durations.assign("AJTEPURIRNCHMDCRPIYLIJOEQZGDPUPTXLZSBCOTVPYTNHZLMLXGZWWUPSABNMKXKAWNRGXYCVAMPXNDKBBFQCIJJSBAQSVYKNVWTTPKIYEQFCXMNPOUJGHFXKCSCOQMGBYUHSNDHGJVTAKUBIWWIYKGSFLGJOEQOLZTLWVELW");
    msg.distances.assign("TTBMTFAZAIGUHQEJSXZDTVPXVGRSAAOLJYBHRJDRRNFIYPMEZBNHROJPELTWXYHGXAEZUXVVKCIAWWQNIVIQUEVOTFOXHXVSLLCHIYNYBNGKFNOFGPDYMPZLICTWNRDSWJWSNVMODQPRXWOFHRACICKIAPMUCNECQJLZG");
    msg.actions.assign("QAWHWZTIVOUCQCQLNTURQXMGSBWTLIPLAYSJRNHUOUHFWMJPDALJXNSFUKNMTUFEOPQASOULDUWONLRIICERCGMAVOLCZGJCTYZSBMDYYPXNJLVQXHGORDEDASGITZ");
    msg.fuel.assign("FWCYHLAWXQNTYVUUVAAOJFSKEIDOLRQFSDKSJZDADYFTVMTCODEWQ");

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
    msg.setTimeStamp(0.4100360755869512);
    msg.setSource(15505U);
    msg.setSourceEntity(105U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("KEDKSTBQSTXREYATJVHSVWFNTNBYYQMMTIVFOPLKKNTOWHMBSACGAUCYCEPGIYIECZRLPCMRXONSZNJONZAVFEUFGJBWFJXXKUHYHLLZNUWZVKBDWLFVHPTAWFFQOIXGUZKTSAJCZLBVOBPJIUBAMQDBRGUAHHDMTQAMUVQXHYIKXSQEWYMIGYFADVKRDJCGRYHPDWRGULHNLQQNNXCEUWGSXEWCCXJRJILRQPFREPODIEDDOSVTOZOZ");
    msg.type = 86U;
    msg.properties = 203U;
    msg.durations.assign("KQBSJQMKSAHUQAMOOAUYVNZIRJGNJFHGAXRISGCBJXPUBPELKJYLYZVTVDEWLTHFQYMQDFOGBJRZPPBDCEZAWRYHGQPIXRDECFTAZUTCDNJZWXKMUINWRWLZZXKIAAJVKMRBWYIFPHFDBRFOVYYECIVWPSQOVXKKCUMQMTVELNXHHSGSCHZCDINBJGGYOUTPV");
    msg.distances.assign("FIDZHUESVLPZEFDGCNNLHYZQLRUZWHJDOUSQRDCRDRJOGMIILZYKNVOUUMMBSTAVSFRBUEEMRGCDNNNHWQWXPXTJKCKIKKTSIXZGXSQBNMZAEAMOVSLAAQDPZDVLSTMVL");
    msg.actions.assign("BAYOUPBDSHJVWILCMIZIAJWAWMHXGWXEFXYQGYTVJDLTSSLGTKIPREXIJRLGZWOXVSKTJZSAUIYDNRSSOKFBMBGVZLXZOGCWONTINNXUECNXQWPEFATJFAMFEOAUFKDMWDPUAOHCHEVPNHEHHNVRNSYMKQTDQOMCBLUVLSMFFBFRHWZAFMUJBAQ");
    msg.fuel.assign("UBYCETZUCWJENEUOYLIRGBDKPXNTPIMHQPQHTKRQGTSBCSYVKKZOWJFGHFPTHJQZOQWKCOVDTMAHRKJUOXMDQMHYAGDCPHBDVGFWLIYLCJWSZACVYNEWKGMDXISRUDYQDNK");

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
    msg.setTimeStamp(0.842015778701794);
    msg.setSource(12029U);
    msg.setSourceEntity(58U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0006281260259889399;
    msg.lon = 0.5189324141688296;
    msg.depth = 0.8827111708004877;
    msg.roll = 0.7308649139650328;
    msg.pitch = 0.61201994244294;
    msg.yaw = 0.41287405033980185;
    msg.rcp_time = 0.29352123087236426;
    msg.sid.assign("HJXUHZETJWVOYNVGCPADIFLEJEHAZCNKSCCHOIVTRSOYLUJEHCCVJNMAADLTFNFXDKOBZQUYGPXQRWCWMPPKHGQLISEGVETDCLVNSYROAIXGQXQBMFVTNAKMWOZFGBQMHZ");
    msg.s_type = 57U;

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
    msg.setTimeStamp(0.6176392324043136);
    msg.setSource(58919U);
    msg.setSourceEntity(207U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.33899155112764534;
    msg.lon = 0.6911883380544338;
    msg.depth = 0.8404619960915728;
    msg.roll = 0.8519142769957382;
    msg.pitch = 0.008165007245058975;
    msg.yaw = 0.0977995616822055;
    msg.rcp_time = 0.1296169572737894;
    msg.sid.assign("EGNASUQAEGNSVWJWYZOSENUGSUQGCCFJKKJGIKWYICFGHEMVHYNLRWLXFJYOPXSFTXNIAJPVRXAQMZHKLFPMLZZCSIYDXFKQASOCPMXRTRHPTOHFKYZHJGMQDBELARSDMLMYNRBQOBIIVFIHYRORDUSWJZLEXSEX");
    msg.s_type = 11U;

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
    msg.setTimeStamp(0.618939509892511);
    msg.setSource(27479U);
    msg.setSourceEntity(217U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.336076350761912;
    msg.lon = 0.08374866277617665;
    msg.depth = 0.019201465469783296;
    msg.roll = 0.2765811360903013;
    msg.pitch = 0.4175584529507189;
    msg.yaw = 0.5805539224795443;
    msg.rcp_time = 0.5904212912400291;
    msg.sid.assign("ZWRCQYVXXBYLFBAOHVDNSZYTORCLCSDABYEZPKEBCIMIXYSLUNXAIPHDPTCWEPVKUJMLGSYXKCTXPTZZZMEFJYCAPFGIMRMREQADEPCWJDCUFSHNQRSJNVFSFLDTBNOJOBOJJUWRYVJSRQHNKFBWROHJMZKGNZUDKCHTQMQLIOIARGTQKWVTHHBAVWGYOVUGLAUDEJARIXVZIZGEBFMEUIODKWLX");
    msg.s_type = 76U;

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
    msg.setTimeStamp(0.07747220877541494);
    msg.setSource(55748U);
    msg.setSourceEntity(103U);
    msg.setDestination(42760U);
    msg.setDestinationEntity(134U);
    msg.id.assign("XRGHGJGTLKTDJOCWYKEVXYUSRPQCDLGRKGYSPUVNFWMXONIJSVKPLEBCEULDFVQDOZBADHTWDUBMSDXACPROVTJZBUWOENWYUAKQXHOSXDPMKPXRTEWFGKULBFZAI");
    msg.sensor_class.assign("BLAHAZFPNBDPCVKIPJYCKIGBRVBCDWIOLCYXFYHJDXTAWVZDVWGUMHAAPGFNVYECRKUOTCDZUXWVJLEWHNGQOZXUHKWOEZSSEASLOMOLNRMJTTTFGBUSUZKMAHILHPMLIPDQBZCUYJPRXKIFFM");
    msg.lat = 0.46363552661720053;
    msg.lon = 0.8402503166350878;
    msg.alt = 0.7182180885263499;
    msg.heading = 0.4827735504143831;
    msg.data.assign("EFUPQKXBZUAUOEQXNBSYREQSUDZGHYTOPPATXSQCLWACGOJRKUEOPPGVKLRRWOAFDVNZDDBVQMBLLFIFTWXGNVEVHDIZEMUDQDRVYPVJDNARESKRYSUFHBTZSLUTPCFGOGYZXCIIJEUHHNFWCTPCIXNKLZJNFAFXTMAIXWZKGAMCBCIVHYOWWQOJCVGQMYKBIMNL");

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
    msg.setTimeStamp(0.37766878799942916);
    msg.setSource(42356U);
    msg.setSourceEntity(125U);
    msg.setDestination(47489U);
    msg.setDestinationEntity(101U);
    msg.id.assign("KWFNFSBXUYIIHGBDTHWANBGPCYKXSNPOGXJXWCWLMIAXNIIJPMJOZNVVVEQTHHVACE");
    msg.sensor_class.assign("TZLKEWSTFEGOOMGHMWSEDVRQIGWZJLOXTIFSMKQZSOYOVDXXJHHKMICPPGRJFPPKHDTJBBACYFNZQIPJUASVBXNTMDIDWOAQNYOBVIIWCNBAGUCBUDFHXISKJLYOGURIUKGNZTRYSVLUYFWUHEGQNXHTNR");
    msg.lat = 0.8300511739295408;
    msg.lon = 0.8047533982067757;
    msg.alt = 0.4198762180950587;
    msg.heading = 0.42925693462452674;
    msg.data.assign("RQNRFUXMPNGUYBRXPVBPYWIDHNNIUTQFNEKTLJIBZACEKNWSZQLRNATWHSYCQRCLKSCCKPSIVTOYMGDZJTDWPECVETIVXRSBHMXHVSQYVUFDZRAAZPALWLGJZODYZTPFCFSLJFMJPBKJPGIMNUILGBAOGZOSHQGCDRQKWRYJEDDFAZYCVUBBDKFAXMGNBUXOFEKPITABXHGFMLDTESVQXJOTJM");

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
    msg.setTimeStamp(0.4138374382191997);
    msg.setSource(64216U);
    msg.setSourceEntity(116U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(88U);
    msg.id.assign("JVWTBSGNNFJWUUYQFERKTDU");
    msg.sensor_class.assign("BKVIIJTGOHHNTZJDLUZTIRWILNMLYTGLFJGFPNMMKNZYGCCYIQCNXAKZZJCUPZWERKO");
    msg.lat = 0.6793182578397191;
    msg.lon = 0.31492970623513983;
    msg.alt = 0.4940363120477046;
    msg.heading = 0.039629029709447705;
    msg.data.assign("ADBQJKRQPLIOJYNMQQNYQYQCPTRPTGZUHDVFGDXLLXNTKSOHFVDLWRWPSJZWXXWEYLMHWGXTBYXDEODKMMEFUTINSWZPKASUHWBZVAUNMBVFBVQJZARLGBFEBZEFYCTPECJIGC");

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
    msg.setTimeStamp(0.7938367250071385);
    msg.setSource(9935U);
    msg.setSourceEntity(13U);
    msg.setDestination(54922U);
    msg.setDestinationEntity(144U);
    msg.id.assign("SSGGHQLERJDRLLGIKDXINZIPOEGVEACARJSOBGKQXIAQOOXJPTOMCZIFCRYOLBARQBMUJOZPWWNTWTBHSAXBENKQUAYEFGTSNRKFJTAQUUPTPRFUCLOIPQRCYYLCHYOABVDFVJJYDCWVDYBISRTCHJNIVDNQEBUGOAVHDUNFPMXKDLWDYGVFMFEZUEHIDUPWYLZSJLGRNTPHSTKZQZWHGMQWKCVWNMMZEXMXZSBXLKXKENSZC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CFEPPRBUCIXSSXFBKYRTAWKUESWJERPTRAYMWTFJKZIPVVVPRPFTC");
    tmp_msg_0.feature_type = 129U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 174U;
    tmp_msg_0.rgb_blue = 1U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.39260788057291274;
    tmp_tmp_msg_0_0.lon = 0.055234704587704186;
    tmp_tmp_msg_0_0.alt = 0.5453938683915363;
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
    msg.setTimeStamp(0.2523173552066805);
    msg.setSource(9132U);
    msg.setSourceEntity(188U);
    msg.setDestination(44363U);
    msg.setDestinationEntity(124U);
    msg.id.assign("FUZJRGHRZTCWDXUNVKWRVJODQNPGSWLLEGVJJPQCMWIJLDU");

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
    msg.setTimeStamp(0.713611283427528);
    msg.setSource(26448U);
    msg.setSourceEntity(146U);
    msg.setDestination(64733U);
    msg.setDestinationEntity(211U);
    msg.id.assign("XRXAWNJKXHSADTVQFSYF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DZEUAOAXNILZLTHAJRNXZFJSTEMZTWTMCVXXQGHIDXEQTVIPFLBBOCJNHVFQSRSQWJRYMYILCZAPUTEDBSAOUUUIDLVO");
    tmp_msg_0.feature_type = 48U;
    tmp_msg_0.rgb_red = 111U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 20U;
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
    msg.setTimeStamp(0.5118573627953745);
    msg.setSource(46091U);
    msg.setSourceEntity(122U);
    msg.setDestination(18698U);
    msg.setDestinationEntity(25U);
    msg.id.assign("STHOOXCZGYARIRAEQYAQVICJZLNMUWLQCCKPDSUSVJUF");
    msg.feature_type = 232U;
    msg.rgb_red = 59U;
    msg.rgb_green = 10U;
    msg.rgb_blue = 120U;

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
    msg.setTimeStamp(0.8811530383283194);
    msg.setSource(24122U);
    msg.setSourceEntity(10U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(95U);
    msg.id.assign("JBVYIAMTEXWJHEVCCOJXALKTWMMCXLSZWQDOUKMVPSOJHNCTNQLUKPDBHTBCQIFYTZ");
    msg.feature_type = 42U;
    msg.rgb_red = 105U;
    msg.rgb_green = 50U;
    msg.rgb_blue = 180U;

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
    msg.setTimeStamp(0.20062113088709688);
    msg.setSource(20605U);
    msg.setSourceEntity(75U);
    msg.setDestination(61247U);
    msg.setDestinationEntity(159U);
    msg.id.assign("CNOTNCWGLRCQSFQZAMJRAVSBJYRVTVJPZIHUEDMCFVMOPLLZEVRFOALBCFQUSF");
    msg.feature_type = 76U;
    msg.rgb_red = 177U;
    msg.rgb_green = 177U;
    msg.rgb_blue = 24U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9520975466507442;
    tmp_msg_0.lon = 0.4439295230304966;
    tmp_msg_0.alt = 0.20079595931021343;
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
    msg.setTimeStamp(0.12407587527211661);
    msg.setSource(47833U);
    msg.setSourceEntity(186U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.7528344629862479;
    msg.lon = 0.6100573541085481;
    msg.alt = 0.8535579310658267;

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
    msg.setTimeStamp(0.985183027608195);
    msg.setSource(42742U);
    msg.setSourceEntity(60U);
    msg.setDestination(38844U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.9284233016906479;
    msg.lon = 0.6163257733148073;
    msg.alt = 0.46847967703039484;

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
    msg.setTimeStamp(0.4624852839437379);
    msg.setSource(8296U);
    msg.setSourceEntity(61U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.19672584795366987;
    msg.lon = 0.6444200603946189;
    msg.alt = 0.9052616231180894;

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
    msg.setTimeStamp(0.31710876474264327);
    msg.setSource(39175U);
    msg.setSourceEntity(225U);
    msg.setDestination(56532U);
    msg.setDestinationEntity(118U);
    msg.type = 56U;
    msg.id.assign("XHPGYCLZQWXCOMKZACWLAPGIJSUSBBLKDZOTCUQHRXEJHGTUZLEJCSEVMEPTQRUHFOPCWVRLTHWVNMBJQVGDO");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1576292388226047;
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
    msg.setTimeStamp(0.7675938330616471);
    msg.setSource(33301U);
    msg.setSourceEntity(100U);
    msg.setDestination(65357U);
    msg.setDestinationEntity(150U);
    msg.type = 71U;
    msg.id.assign("CPODMBZPSHKWTSMCPMTQEOTKTJFYJYIZLPHIYWIETOQVZIHBWUBOMOZRXGMYOPBOCUZLNPOJCEHVWFENGNDTSGVYDVEFFNYTRUKDLZPHZAFGTCQMYESDJHIKDUJXZKBGD");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FVZLVKXDSJSXENYSYDBVXZHNVKTZBNWHVUJAAAZPNBPMTSZQCQYWSGJYIAXQZUHSEDIRRBZKYFFORXBZMDUZOLJPOHAYRBVDEAYLHSIWFSUFEJEDXMIYKGTVELDAAYRCLPJCXIKKXIIETYUCWWORLGTMNEHQTOOOKACWWEFQCWPGJIVLJGCPGUTWBKBRGMMQJHHLNSNOGPDDGVOPKCRXCNPVDOXTMUUZMLBQTNQLTCFGSIHWPUQFIKHQNURA");
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
    msg.setTimeStamp(0.4228452686408206);
    msg.setSource(40461U);
    msg.setSourceEntity(128U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(73U);
    msg.type = 96U;
    msg.id.assign("ETYHOKPLUWYATIBJOJEZSUIHQZSCRHKJLRUGGTXVYOGYSRPIOWIIJDOXNTKLBZGUEZBZLUMGRHDMZOEMQJSGTQUWJWFIPDNFFNAFQUQFCMAFDDWFWPZWNLYOYLCAOJQIV");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 151U;
    tmp_msg_0.longain = 0.4273369098354236;
    tmp_msg_0.latgain = 0.5995295614472421;
    tmp_msg_0.bondthick = 408594239U;
    tmp_msg_0.leadgain = 0.3352060146325566;
    tmp_msg_0.deconflgain = 0.4169601858988523;
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
    msg.setTimeStamp(0.40956138459490454);
    msg.setSource(61364U);
    msg.setSourceEntity(53U);
    msg.setDestination(62720U);
    msg.setDestinationEntity(108U);
    msg.localname.assign("YLDGTWZVDRYZUHLLAPDURBRDKACSGDUQVRAUOMEJ");

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
    msg.setTimeStamp(0.5964017939562528);
    msg.setSource(57485U);
    msg.setSourceEntity(180U);
    msg.setDestination(63924U);
    msg.setDestinationEntity(232U);
    msg.localname.assign("HMQSWVDLYSAMBTLXSGLGHFKGABMQJOYJLEIIMLJCYRPDARVCYRWKUCWJUYUGUINEVI");

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
    msg.setTimeStamp(0.5969124245288981);
    msg.setSource(17480U);
    msg.setSourceEntity(123U);
    msg.setDestination(21206U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("EALWZGVNBENQSZKADLKZOKWAIBPTDMTCXFAUURVPDHUDTCRNDWYVGNSWJXRLYJFSGQPMCZVILFBYRLZEMZZFBSOGVSFPKQNGKIBERJCWCWGWIWLHHXMHCM");

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
    msg.setTimeStamp(0.2508020443358234);
    msg.setSource(61729U);
    msg.setSourceEntity(212U);
    msg.setDestination(51682U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("JHLIDFAUMIJXKCHHHDDMDYTQX");
    msg.predicate.assign("EUPPEOLSXLTMGDRATYLKSJMOMZQDSZWZTOJHGGBKINYRDUMNAOEKCEDZYITQJGTAWRJDRNUSGEAMLBLVCORQMBRMKVHOVEBXZTAFZZNUDVWRCNXTCXKDIJVGXHFXQPWAJBPVWBUUNJNFHIJGROJ");
    msg.attributes.assign("EQNOVFZNFXVGWAIZZRCLLODSYNFGKDPKTQDRLIEWYTKBILIFQGDASNQAVTHHYTYNPKBZFDTCCTXBMHSERHWFHJHBUORHDOLEAJYOUYIRSORJVBTSKCMGZUQBILLSVWUJRYVOGVZYWSQCXTVLDJ");

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
    msg.setTimeStamp(0.5454441259609453);
    msg.setSource(64673U);
    msg.setSourceEntity(249U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("KEYYPPEKNDQCPRZDPCVUIJZDIFSEJWMMLCKAKRZYDAISAVBJQMYAOAMUDIDSHCLBHBJVFRWEHQZKVUGOXJWOXEQUWRWXIEZFFPBSCBRCKNBHMEVKSXVTPPXGWQKFUVYEFLUQON");
    msg.predicate.assign("AUSWRDYOMPLYMDLKAMSOOVJDBAOVJOBZYWEYKZINBQLEXPUZXIKCRGINZJTNMVTFSDRMNDWFNDOJSAEOIFND");
    msg.attributes.assign("ZXTETEVVVZIXQBGTKYFYLRZDDODPBHIRGQUMEWNMIXBXDHWFYVAEDUXGVOPAWBGKQUCMPIZDWFPCCTWTGGNQURFP");

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
    msg.setTimeStamp(0.8365421108534441);
    msg.setSource(20540U);
    msg.setSourceEntity(14U);
    msg.setDestination(40234U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("BNYMEBDHQZGRNIPAFDSPGCJOLRBLLDDGLVTFEGJXFXXWAZESCWNOTXAUMSUJWPTJQKEVNHYMPIKZCVKJYHSJMBLGNQFOIRSKEBQDVPUMUEDUYTCANLQCZJKYPYWJQAOINSLYCUBWLOXQQMPMLLCOVHOONETWGMXIWH");
    msg.predicate.assign("UYFJAIQGKDMAIQAANYYIOAWBTHJHBIXJUZFNCHVAODELRPJHMAJMUPFCKSPGULDGKJNBBBGWVFVNLPZBOJXXTCHAMGNFIKOOCQFWZGDPITYFACWZDNOTSTKGMXNEZEZQLQQTVYIGMXEPWXZHVOKZWRLDUSEJHABRUFJDXXESRSWPMJOLDKLCFVGQRKVCESBRMVTNTONVERREIWMUCHDBQTLK");
    msg.attributes.assign("JVWKZDFTJMJANUOLQXMNKDYQHGAPUSDYXORWPGALFOBCXQIZILCUFMGRNHWTATEWCGGUMRLPJQEZZACXDYSZCFHTHCEPUJSQDVPYPKULFEXVGYTKFBRGSYWDOTMNVAGHRBCYIRESOTBILEAVPZOQBKEMUMZLQABVMI");

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
    msg.setTimeStamp(0.27278836887101865);
    msg.setSource(57600U);
    msg.setSourceEntity(61U);
    msg.setDestination(3510U);
    msg.setDestinationEntity(14U);
    msg.command = 149U;
    msg.goal_id.assign("FKCSDZMEEYXCFRXOZJZNJSAEDQUUWXCIYGVYKLXDTDXBLTAGPXMTNDVHBQIAMCFKZJYVYCWMZENGCWOFNHNIPUIQGBRTOVQWQHZCCESJYBIGEFEBHPBTHQKPFIXKWMJELEVOJULIWUNVSUNIZKMORPPUCLZLLPAJODDLABNZYAHUBWRXTMSATYKBSRVFSHGRTTUSVPOGENWZUORGMV");
    msg.goal_xml.assign("VGSGUWSWRBMGBKBCNISNZVPJLVHXAPSAIUMANAVXIMKRSILOXFERVVRKERGYPOEQWUJFJWHHKMMBTRKIL");

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
    msg.setTimeStamp(0.6713571981533045);
    msg.setSource(42847U);
    msg.setSourceEntity(201U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(183U);
    msg.command = 209U;
    msg.goal_id.assign("SODXCNWTUDQBOPROQKBBPBHTAQERIRILYUVRUUNORJUPSJIBDOWBCKZXBMRFOHFACZZNYQVLKGGDCQPETPUJKCQHTYRLKJAG");
    msg.goal_xml.assign("QXXDQAARAGWUXTETKFOYBMNNGCNDMULWIMOYQPCMKHKIMRGFFDBEKITIFFJIWZNVZKBTTELCECAXHJOSGCUFHRDEZILKJGWDBTJMNKSVPQTDYGSOEFOBBGDKXWJIMGVNVQRQCVRZGAPEDWRLCBYUBSYZIMXNPAJKUUCBWXCFXAWDQULIUPEOZLJZOKQTNPDAOEFJOHEQHVUMMYZZJPVS");

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
    msg.setTimeStamp(0.6277299930296036);
    msg.setSource(7428U);
    msg.setSourceEntity(58U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(131U);
    msg.command = 109U;
    msg.goal_id.assign("IHJFUKWFHLGMPVNPVLOKRLMEHOQGAOJTBFLZPFWKXZCMYWNDQNATKJSWBBXYREUIXXCLUEUYQPZXVBSYOMHROHFRQLDSALQREVULCRDMSQHHBVTNUPZJXZAOAJEOXERAXAIJZFMPIYEJCFLANMOQTFSYTSVZROGXINCSCNCBKWTCTDZYYGHEVUWKCTQR");
    msg.goal_xml.assign("RREYWYGPTLNUOBQHUUUGZJDCXVKCRZWKGZIOPNTCRBKIZTRDINULMHXJXLRLEAOGSXXOGHQNPQQGXMTSXSPFIWAFJVOMBAFRPGEVKWRCBKNZKACAKMOUHUHCVED");

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
    msg.setTimeStamp(0.08704427235367673);
    msg.setSource(5176U);
    msg.setSourceEntity(220U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(166U);
    msg.op = 174U;
    msg.goal_id.assign("EQUEHVWSAHAXMDANDRRPDYUJCWZIUFSRHNQKYXFOKSUOQXOSRJRRDCOYPWZXMDLUJSKZCUFFVFPJNVJIMLZRMQUIZXHOYXFPTHLBMRDDIPGIWMAZSYWNCMTNMNYELIGIDIKGV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YEFVOLPBREPPRPNZCTAEKNHYQWWFJUJDDHBXIGCIJLOWDNEBRJIIFSSWFFCCLIVABUNMWTLHSGUQFSQKGTYCYWXFUAJTHONGXVKCROMQZXYYYTRPDSOQHXLSMYGVQDBRQTFDMEBSJRQKAGPHUISMPPFDXLZRSNNNBAXVGUOKFYJMMBXTMQLIRCNGLTOOXYHKBQGUCPLCOAZZAGKSVIEUWZDREUKHPOVVABDZEVHHDTZZJVA");
    tmp_msg_0.predicate.assign("LTIYQPLBENFPGEYYVATCDXIFASFZQRSCERGXBTITLCHQNOBMQWOJXVADOORWYSHAIGOUVEKNRYQXUYJIULFDWZJNVGUCSIQBNMDMNHWKHLLGXPDHRKRQFWQXZUDJFHEPCFOVILZGDSMWSWTOJRZEPDTVEDKPOMUBKXFKKUDSLMNNBUJVLGKJGPZATEQBVAMKAZYVRCRJPXASZMYBHXIZGRIFNEAYAIWCLC");
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
    msg.setTimeStamp(0.825581708106628);
    msg.setSource(59528U);
    msg.setSourceEntity(116U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(119U);
    msg.op = 235U;
    msg.goal_id.assign("ARWOUEVNVAOVWXZHLAIWUFOJIARUZCERDNDBPJHOJZCMMSMNSZVAGCUPWYWSTZUQYYVXXXGUHORVFZHORBRNIFDYY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ONGPCZESUJUIABDCDMJHKRHUIOBCERNXLNHWRCQNDFNTRQZSPGBFGOIOAPCUHOKVHNJMBJOMVFOSYXAERBUYEMUZJBEQLOUGFWEGYPWMISY");
    tmp_msg_0.predicate.assign("ZURHSSKSDJMJYZWSKEBCTEHLMPRMPJKHKCYAXAXKEQUXIQTAEZFWZILEGOVTOKWNFRXVWXMJBAFOXWAFQCGMXZIENMSUOCUCBTLMQWBBGZPDGDDHLRJRNNJGMJNUQRDXVWCVLZADNSBVTUKAVAEDPSVCLYEHNNKTZAIH");
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
    msg.setTimeStamp(0.16412209156376956);
    msg.setSource(27293U);
    msg.setSourceEntity(11U);
    msg.setDestination(39369U);
    msg.setDestinationEntity(72U);
    msg.op = 239U;
    msg.goal_id.assign("REVMVGMDVXWQLNWMZUNJNXGBGHRHZFLFTQQPEXSWNKVVPVOUVWCPRFNVMDPDCXOEATYOSBKHPINLWDVIMZALYNIAYKUIZFMXMNHGGSVEZXWBYDMKTMZFSLURSHIOBQQBFRWABJGEAXTOEJZOQWHGESAZKKRIFJRHDMTAXQGRIYUOLXJTDIZZCLTATJQDTPLUSSYBNYWGCOYJQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RPYULDPFERGFRQKEJRAHPURLKMFZAEBWBOCZXNRAFTPJOCTLADTDUDQDUKTNCCKSTPYWUQTIZNGSGFRKVCNYHCCWLWLHOYLGXQOPAOYOUMJXMFIGHBOVBXDCEHMVEQXZDZBNKBMWYILRHIIMZNSDVRVMSXJJXAWONHHTKIEZGYQSGUOKIEFPDABXWVOZVSIMYESGBXHSWBQPEGXBTYAAUNQCJUNT");
    tmp_msg_0.predicate.assign("GWYWNPFUAMFVBUZSYGXUKIKPCOCPFJGMIFOPMBBYQJJUBQKLHHPNLTKGOPGQYWHBOBFZXOEVISHUYTQMLLSZBUMDBYUILCXOWAIHCFTLRTWEIIVZNKZNXCJCVRNJEXXXEUKVYEUEAMZMQFNLSPTNAYXMHU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RKUWCZXNDKIZEBHQOCJCHWEKZYSHIIVTXBROJPIGCUDQWLRZUURRFAHWCMNJLWGEDJVKKTLPCYYBOLAGVYUJXZYHMPPFFONQYQIVTEBMVCUANPRVMBQMOQCSPSKGSJEGNFVNOUQFUPXMYSHYFQWAJHADLBTPB");
    tmp_tmp_msg_0_0.attr_type = 184U;
    tmp_tmp_msg_0_0.min.assign("ERWDVOKNCTQYZLCTFSOATOQIAJXCULOZKYNUNIQKMETABZNVDQDAEILYLJBFTUGFOMXPXVTDZUGGCQUMRIGHXMPPSFBSBMCRDTXVQXRJWKWHRLLEVHJVOZPYFKIWFOUCEJZYKAOUVGWTARSHWLTHNTWOBPEQDHPGNGZUFKNIDIVNFAEWDHKOPJBLEYUBBASF");
    tmp_tmp_msg_0_0.max.assign("XWUYQJHZSXEYTUWLBNBURWCBJGVIFEVMAXSJIOLICUPSBLMWOVLBQDUARUITRQYEVTHEPVZNBWPCKHDSLPAITNALEYKUHCIZDDJHKIMHCGMESPDFTCQQTGAOOZFDCCFKXYLNXUGMRXVAROEWNQ");
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
    msg.setTimeStamp(0.7930828389012703);
    msg.setSource(59519U);
    msg.setSourceEntity(82U);
    msg.setDestination(50916U);
    msg.setDestinationEntity(186U);
    msg.name.assign("VYRUABAPUHYLSSNHNTUXPXFJXXWDAGYWBPYYTMQSONDZITZQDHDCEHGBSLVFIQPZRABBESTQVKJMJPXLWYOENLJZPSURWGQKBETNGMXWQYOZEMACUXOVTJLLSMJIIALWCCCDXEDTIORCKLXNAHKVIWARZOYHPKPMRMFPGBDIKBOFUJLJNCUBG");
    msg.attr_type = 67U;
    msg.min.assign("MJARRNBSQBPJHCCSLHMNZITOYWBHLHHJZVGJZGDTVQZEXGLSFRIYJYNRWCKPULKZXMDGAIERWCHSIUKWVFVAMMPBZEEEMFDQYVSONOUIEEZXHYDPPQVABUNMYASBFYMJBRPMYQADVOBKTLTDYOBKPFLLWCURPKLTFCXZWGGNVOQJHDLMTIJTSZXDCGRDSQKIBKFXCXNUESRONZACDUPQIGWTOPUUFKTJAWTVHWN");
    msg.max.assign("OVSKRKPAPEWYXNJGNZYWSNCVHFMAZTZMSITHQXGKAELSYXVHIJCIBIUYRXDSFHZSRMIUEZZEQVLDRFAFCPZACFZMSOXPNKCXXJKMOOITCJEBSIHBTYETBFQTMUQWBUNYITRPLILCUQJY");

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
    msg.setTimeStamp(0.6493965508229961);
    msg.setSource(58842U);
    msg.setSourceEntity(232U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(29U);
    msg.name.assign("MAWXOOFVKLBHNVAGXSLQRQXULLXHECHFWYTCOCVKPEFALXYZILDSRCHGDRKRQICDFMNZUGIDEMTSTGARFVKYCFYJDMTJDQOFIWEANKRLNESTTCJGYLJJJRUMUQA");
    msg.attr_type = 11U;
    msg.min.assign("QZFZEFDWYRYKVIPGRBDZUHKTXROQODKXEYFYGWCHENJHKMSATITENPBHRLFCGILDPUTCTSYHTLKHFSCRMQDGTZBMIGHEWMBBANNUCLYIR");
    msg.max.assign("WFOTMPMYTOWQJJRIQIMRFFGBXUUTMZKKVDSNGAKSHOEN");

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
    msg.setTimeStamp(0.4050734033558815);
    msg.setSource(40174U);
    msg.setSourceEntity(47U);
    msg.setDestination(44233U);
    msg.setDestinationEntity(237U);
    msg.name.assign("JYUOEXCCTBXFHNSINWJUCAZVFDDQLKNILTLNBUUFWTZDSXHYMVJBIHBYGLQDSUYPVFXOCDZVLGVRZZQROWSUAQTOMJJGNZTQ");
    msg.attr_type = 182U;
    msg.min.assign("ZBFCNURXJIJLYHQXQGJSUWKTFWABYTWHXPUXRULQBZTNLAYKHMMYMBITDFG");
    msg.max.assign("NCHAIVPYEORJSDMGUFZGMMXZUKPAHIPVQYLEZDPTODKZOICYZBNNUHXBQZJSLKNAKDOHBXSVGXDXMAPKYVANNRRE");

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
    msg.setTimeStamp(0.5438682760410732);
    msg.setSource(62317U);
    msg.setSourceEntity(228U);
    msg.setDestination(31399U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("QIBNVIARBHVCEIDZQMEZIVFVTCGTPPLMAMARFYNMJPUEDUXXWZNDUYNGLTHOOAGSYSBGRKFPUTBQPDUXBMFCWMNVVROFSGVHUSWSSYQKRCQZECUYIBTWNEZPMLDWAFTRVDWVGEGBIYYMAZAMJLLOKOKMIX");
    msg.predicate.assign("DMCCOYIIDSFRVIPEGQNTHVXNQHNAYYAGAHUHXLAVMJRQWFGPNLFKOPZKGTSJFQIKZNWFKCELHOCDOAJSWRPYUYESWBUBE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LRNDCDUWKEEFGSQHAUCWSPJVKPVVZLGOMDOIXKNKLKJKATXYGG");
    tmp_msg_0.attr_type = 122U;
    tmp_msg_0.min.assign("KSIXTZBVFWKJNCXPSQOADDZEPVVXHZXUEQCREFVPEXGIBCPIEKCJSQNBVBQNAWNJJTIYKPKOFCDXYWHSBRCGTAUVYGKWSNALNCLAMLODQZTELTYJYQDLBUMUIRGOFEAMNHDZFEGTBQQQRTNEUZLWFRMDHFJHILZUWJHYVYFOBCWXNDGOSXEWIPGZTAKMJLADMKRFOZKLOYGUTXPJTOHPMORVYUHGIDNCSAIRAHISXJBHFUBVRCUG");
    tmp_msg_0.max.assign("HXWRVABDSPFIOQCHDNOTFXLNFIHILUXJACYVWSQIHRXSFBCJAAQTSZRGQQWWLRKJFORLZZZXKOJDAVBFEKYPJQUT");
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
    msg.setTimeStamp(0.5915459979717038);
    msg.setSource(6253U);
    msg.setSourceEntity(159U);
    msg.setDestination(21263U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("HSNTJZFXXTKPCWDVPJJEURAAEJNMSEIWWZSLPJOAIPXBHKIPPTS");
    msg.predicate.assign("KDOJQKZXOVXCQHEFWWZDPISTKUOESGR");

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
    msg.setTimeStamp(0.7738985854668936);
    msg.setSource(14681U);
    msg.setSourceEntity(149U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("HKDNWBKQDQFJOXPOEMIYYQNIHIVPLXUTAGWBOAMBAJYXHSOXZWKFZVVPJEWLUMPQRVWLYIERZJAVGYGHQEENDSSOTFAJKTSTABROQOHFSBDMNYSRLVIYBCHNFRJRGUMPTXICFHRPRUKW");
    msg.predicate.assign("CHMXDJJOPEXAMUFDGGGSXDHZOFJBJSEHOSPWAUQODYMNVAIPCHCLHKZHHSEYLWNMZZPKVPGXLVBTWPLMTZKAXFMZEGSAYUSCOFJFMFRDERLKGGQLEEKMTIFNWLRQQZIIIVAQTRHUMIDAYMYQYTNBNWSWYZUUNRVHLSBXBCRTNNDPUYJKDCEAJPBUXJBRIFOCOZZRTLKIKDQSHUUJQXRGAFNJBWEX");

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
    msg.setTimeStamp(0.8694790827524108);
    msg.setSource(54099U);
    msg.setSourceEntity(178U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(184U);
    msg.reactor.assign("RKXWPIKNTXIVORMLMNWVPEHRKVHCNBIUDCKLHVCZTWBONGLFCIQPKZXXVXASBAYJJZUTJYPLFNWIUYIXLTEFDJFUCGWOADFWMNHTBZHSPKBOJMFGCYTQYQUAJTNYDODMNGFYPEMTUKSDFCSAIQIQZPVDMJZEBCU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UOPOBNGZYXMZLDQRDLWZJOPVZSAVSAFHMTNOTDOXQPFEKAFCCNJISCLABFGCRHCREYVXSDPYRHZUMKEPBW");
    tmp_msg_0.predicate.assign("JZTSBGEGKTLMOQGBUSMAYMQWCQLTXGZGHWXYTRFFVHYDNXUVBQCQKCCEPNNIHZJOAHDMJIRVZXMYZFYRWIEKETSDEBBOSVUYDEWGVSFFDCHYVAXFHJEHMRFBQPIZARZOUOXPDDZXCSFITVWBFEACDIIMPKHICHPARUKOOAGGOYTPPNVJQUBNUDAONMPKCTURUPWLHVWGVLJNWLTK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUVGRIMDADXWCBBFKEW");
    tmp_tmp_msg_0_0.attr_type = 41U;
    tmp_tmp_msg_0_0.min.assign("FZDZDVTAOLTKOMUXKESXRC");
    tmp_tmp_msg_0_0.max.assign("GIKFPYNOSZDHPEARAZQVBRZVIGPCDHMEIEWPHDKIBLVYFTHMAMO");
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
    msg.setTimeStamp(0.2845274381713965);
    msg.setSource(47611U);
    msg.setSourceEntity(178U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("EBVNUEQSTWUFWOZBHUFLVRJJZKNGEQXYDJCFDMXJVTTAXTSEQFUTBMWHFFASCJSCLSIWBQKPZGGWJQBUHLM");

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
    msg.setTimeStamp(0.038498570454725156);
    msg.setSource(35947U);
    msg.setSourceEntity(108U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("QWPNVTSIACIGYNHPJTYASDYESWGQZTFGKRGHZXNHSCPVYGKKHCMQMLKEZBLLWCXAMLXWNPWRZIWGJLUTRZEOVOIOJDFVYMETLDUTNCLJECMQKFQJXFTBXRCSMRATMFYDUNFOUOQOJKXPSVNFXLFMAEUDVDVGCHUYVIZXTWZIABGOKWBQHLBQBBSEAHE");

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
    msg.setTimeStamp(0.9195476117201022);
    msg.setSource(50917U);
    msg.setSourceEntity(130U);
    msg.setDestination(20311U);
    msg.setDestinationEntity(186U);
    msg.topic.assign("ZWLUKWWXBIOTJBFQCLYVNBOJRFWIGTTSZIAFGQYUYEZDDBGCSDJZTOHMCBMVHHZELYBEYFZDUBSAGFJZANEKNLSTRQCJFCZXVMINOHPLVNIMAUCSGICRJSPYHGMENNXTPOPJEXKSHVWUYKJRNCWZXMHAEQQGVRHURKAGESDHYVXBOOALQAWNWDSDTUFPIYWVPTCULPOUDGLOWFMERKIKKPTIJMORQHXIAY");
    msg.data.assign("GGZHOYERZKEYQUUCJZSZEWAHIVNCBBFHOKCVLMRIWKYXFGRVZCPFBMAWSIPBFOWKMQHAGKSRMNCPDULLFWPVUISJVQSINVUGYJATNSCKQJLDWLRSGJMOXUPELMFIIWOBKSXDPLTAVRENEYCRMZHNYNVHBTUQPGJNZLYMVCOPDGEYQASZEFQBLIHCKQDUKPBYATSDDOODNTQGXRFZBXXOMPEAB");

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
    msg.setTimeStamp(0.6980074668446129);
    msg.setSource(60626U);
    msg.setSourceEntity(89U);
    msg.setDestination(35267U);
    msg.setDestinationEntity(189U);
    msg.topic.assign("YGQEYWTOEAZOE");
    msg.data.assign("WWJRUNCRGRUL");

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
    msg.setTimeStamp(0.5560724502050031);
    msg.setSource(30659U);
    msg.setSourceEntity(224U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(13U);
    msg.topic.assign("MMBHTPALIJFTMMKAB");
    msg.data.assign("OVCWCDTVXENLMRNDRGYTETEEOQIJPAZXNQPHNARVAQIJNSBBKDGWOLQQEZGXHLIJEJIFYVXIFNYOWHWJAOUBARQCMYNLUHFJYZIMDSGBJFDATERCRLVSKCBVJKKGHMIZFGLEBWSHUFGUMPQIPMJYZPQZDKVPMXFOHQSNKKDVUDRTDKLXIXSMESKWQCRCAVXGBTUFMJWHGSZUFUOPCSTCPWALNREGOPWIUROYCLPTOFVHZLSUTBBMA");

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
    msg.setTimeStamp(0.28760973485944374);
    msg.setSource(55530U);
    msg.setSourceEntity(142U);
    msg.setDestination(45455U);
    msg.setDestinationEntity(229U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {60, 108, 10, -78, -56, 95, 16, -55, 76, 72, 50, 6, -17, -13, -34, 24, 115, 37, -37, -25, -26, 4, 23, 73, -31, -25, -50, 28, -13, -126, 81, -95, 100, 105, 75, -26, -107, 116, 63, -68, 120, 29, -120, 8, -83, 5, 15, 51, -7, 31, 115, 66, -121, 110, 30, -43, -65, 48, -123, 36, -108, 7, -6, -115, -114, -22, -92, 5, 68, 91, 110, 30, -92, -95, 110, 14, -75, 100, -19, 92, 122, -103, 113, 107, -56, -113, -92, 60, 7, -78, -128, 24, -85, -41, 87, 34, 99, -20, 62, -24, 62, -78, 46, 73, 57, 13, 56, -127, -117, -22, -70, 51, -58, -14, -33, 43, -20, 70, -69, 76, 66, 90, -112, 98, -23, 92, 123, 51, -120, -66, -3, -57, -70, -97, -19, 82, 93, -109, -124, 115, 74, -122, -15, 0, 102, -39, 49, -111, 26, -65, -73, 32, -22};
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
    msg.setTimeStamp(0.9095516342448767);
    msg.setSource(34773U);
    msg.setSourceEntity(212U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(180U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {80, -20, -81, -28, 119, 37, -88, -97, -60, -119, -32, 105, -119, 5, 50, 90, 34, 65, -70, 97, 7, 93, 74, -31, 108, -101, -116, 109, -24, -4, -6, -8, -38, -117, -57, -82, 97, -15, 14, 65, 68, -69, 99, -87, -69, 21, -45, -87, 66, 41, -38, -77, 58, -87, 41, -65, -100, -49, 47, -80, -26};
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
    msg.setTimeStamp(0.972511346081053);
    msg.setSource(23782U);
    msg.setSourceEntity(136U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(201U);
    msg.frameid = 236U;
    const char tmp_msg_0[] = {112, 125, 3, 97, 73, -88, -17, 7, 99, -106, -8, 27, 90, 18, 6, -16, -16, -27, 0, 97, 100, -76, 98, -61, 67, -82, -46, 24, 79, 9, -69, -126, -20, -82, 57, -49, -124, 108, -91, 20, 75, -50, -101, -28, 78, 108, -116, -16, 82, 120, 98, 17, 93, 51, 5, 15, -49, -32, 58, -7, -128, 21, 52, 14, -47, -28, -70, 7, -109, 111, -93, 125, 113, 104, 55, -47, 78, 111, -82, -43, 4, 97, -70, 80, 115, -80, -128, 36, 75, -104, -121, -117, -100, -29, -62, -120, -62, -83, -117, -62, -28, 56, -73, 102, -30, 25, -59, 68, -59, -24, -83, 122, -22, -32, 85, -124, -16, 76, -103, 109, -53, 64, 119, -108, -88, 42, -80, 63, 114, -39, -69, -86, 114, 31, 84, -102, 123, -10, -2, -84, -93, -44, 113, -85, 45, 39, 54, -128, 67, -19, -48, 27, 89, 28, 79, 121, -80, -24, -14, 20, 35, -5, 98, -52, -127, -47, -13, -75, -62, 13, -44, -68, -66, -36, 47, 126, 56, 125, 100, 64, -14, 12, -85, -100, -98};
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
    msg.setTimeStamp(0.1278753754081685);
    msg.setSource(12859U);
    msg.setSourceEntity(121U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(88U);
    msg.fps = 145U;
    msg.quality = 186U;
    msg.reps = 31U;
    msg.tsize = 113U;

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
    msg.setTimeStamp(0.6818213319805385);
    msg.setSource(44816U);
    msg.setSourceEntity(111U);
    msg.setDestination(64493U);
    msg.setDestinationEntity(40U);
    msg.fps = 203U;
    msg.quality = 55U;
    msg.reps = 230U;
    msg.tsize = 202U;

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
    msg.setTimeStamp(0.05398969806865417);
    msg.setSource(38973U);
    msg.setSourceEntity(244U);
    msg.setDestination(11397U);
    msg.setDestinationEntity(91U);
    msg.fps = 136U;
    msg.quality = 63U;
    msg.reps = 203U;
    msg.tsize = 197U;

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
    msg.setTimeStamp(0.5755223016167219);
    msg.setSource(8571U);
    msg.setSourceEntity(40U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8880582781786709;
    msg.lon = 0.9637884054143941;
    msg.depth = 15U;
    msg.speed = 0.3074309317122145;
    msg.psi = 0.2930694762159963;

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
    msg.setTimeStamp(0.01796508326083801);
    msg.setSource(19950U);
    msg.setSourceEntity(116U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.45682105352321745;
    msg.lon = 0.46949529978342097;
    msg.depth = 83U;
    msg.speed = 0.10418805527007458;
    msg.psi = 0.2337791084567158;

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
    msg.setTimeStamp(0.7557904161403812);
    msg.setSource(23794U);
    msg.setSourceEntity(12U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.9430895761196728;
    msg.lon = 0.799303211864585;
    msg.depth = 223U;
    msg.speed = 0.42601110041347845;
    msg.psi = 0.720809922049095;

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
    msg.setTimeStamp(0.7177509320391977);
    msg.setSource(58672U);
    msg.setSourceEntity(222U);
    msg.setDestination(27564U);
    msg.setDestinationEntity(239U);
    msg.label.assign("LOBXHXCKRBKGTQWBMQSGMCNPHYZLMYXBYV");
    msg.lat = 0.7057174934063724;
    msg.lon = 0.868458337116598;
    msg.z = 0.3588456329071007;
    msg.z_units = 116U;
    msg.cog = 0.9028014574517411;
    msg.sog = 0.8119090746119827;

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
    msg.setTimeStamp(0.12993143137083063);
    msg.setSource(43770U);
    msg.setSourceEntity(189U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(85U);
    msg.label.assign("HTYPODEEJIYALGXQZVBKTXWUOFIDUCJMNIAGAXPRSPBZHFZHCGRLADRGXQMSEOXAJNOITQERKCYSOCNUZVLJQXOLKMFVHVDELTTMLGSSTXRYCITTEUHHSOGMNWYDBFWHQSQAFLVPOZBUZJLKIZKUJGSEQMJBUWNOIUBYZHIYJCAWIMRC");
    msg.lat = 0.9779303930387384;
    msg.lon = 0.13068569465742685;
    msg.z = 0.7869945675787573;
    msg.z_units = 179U;
    msg.cog = 0.8833477401147547;
    msg.sog = 0.6613767987590603;

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
    msg.setTimeStamp(0.06403616874196005);
    msg.setSource(52880U);
    msg.setSourceEntity(63U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(81U);
    msg.label.assign("BAXVDEQDIOHLTUPTTGZPYDADJCONHFXMQLZGVYHINHNEDOWLYYNLVMBVVCMWPGSGRQTXYQLSOJBJGSAFOWKCYEKOQZJDIDMFCSSZKBMHTLFNEAOBNTZAUPUVEZKPWXISCMMQWYRISFBIZTWFTHJDFPUHNAENKUBWWSMVRCWOJAXKHUPJNPSKRESGCBFXENXDUKUUTLIRL");
    msg.lat = 0.01498690583101936;
    msg.lon = 0.9249038115768671;
    msg.z = 0.3491765353731826;
    msg.z_units = 57U;
    msg.cog = 0.9322970198014076;
    msg.sog = 0.40252022215670447;

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
    msg.setTimeStamp(0.7462568765252358);
    msg.setSource(44631U);
    msg.setSourceEntity(73U);
    msg.setDestination(59090U);
    msg.setDestinationEntity(81U);
    msg.name.assign("HLEDZIKLKZRIKTFOXUBIPOICA");
    msg.value.assign("CAOYJDNOYFHMEKNQWTKLXBNEPRZBUUNXXSROQEXMJENYTCQNFBAFZRVLCLRRHDIIMAOVGWLQGIMPBSSBXPAGRHTNNP");

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
    msg.setTimeStamp(0.593079730774625);
    msg.setSource(4033U);
    msg.setSourceEntity(28U);
    msg.setDestination(52531U);
    msg.setDestinationEntity(86U);
    msg.name.assign("QYHCXHRDZEPDEBXHXAKTQMAAONQCKBCMVBPQKJJQTCYLSYUTPKLUMZLYNQBOZVVGIEXALCFVIJGMOLWLDOWYXZTCNXGEIXCYVBGKOIJTZRTZTMKDDACHFSPOZWWNHZHDFDSEKGAXWQUIBWOJAEFBBGZQABFMZKDNPHMOBSONPMSJHPVWWSHYJGRRGUJRSXXRICGQFHLJAIFWGJTVFPONVLDNIYV");
    msg.value.assign("ZQOUFJYMRSSBWNWJCFGCWEITCNEWXPAPQVKKZBZOUWTOPXDCGZATSNDSSHFXEMBOSFANIQPPQIXUDDZHEHLVLGEHLVXWPVGFYLTPWMLQGDYBDAMAHPJREVOBICBJCNLUSZCPAMBIOKXFXSGHMRNZYNZDYYHAORRTKKHTCJHLELMZEOGBUTTBRUWDUQAKKYJIGKTMORFQIAJFLRLQJEKXGFJWYHIRSTQUNDNVNUXSCQIXVMVRVFAYEPIWDKGMCY");

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
    msg.setTimeStamp(0.14044280939778253);
    msg.setSource(44486U);
    msg.setSourceEntity(215U);
    msg.setDestination(55177U);
    msg.setDestinationEntity(212U);
    msg.name.assign("TBQKPHUIYJSFBQRQCQHVJYRHBYNANUIKLTMAATKVEOZGTBOGXTFOFNMXAVUGXLCFBCQMZFHJRCPYOLWOLCDBWIFJPCSRELXPYVUDCUHNBBVNJOUVOEENWQWHAWARCLMPIIJNZKAGJPWSGZMSUYEYFUVBXCSH");
    msg.value.assign("IFEZZJGLCOOAZXKCRHPNUXIOOUWYMXVKXKGIQBPBEFFVFIULJHLBTGSPIFSQAHCRQEKJXRTVVMTHVSNLBAUHHKMKIEREOIZYGLCLKOCDNVZDSAFFMPMMZTPODEDLBAXBNVAAYOGPBMKJWYZKD");

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
    msg.setTimeStamp(0.09328740887602538);
    msg.setSource(60706U);
    msg.setSourceEntity(73U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(150U);
    msg.name.assign("ZNHOSFIVDISYVPXDKFVYNZJBIAZWROHCPCTEQOMUJCANPZVHNAMOOWEIYYFHPXXJFTRSSNOYAHLGWURVQEZKJYZCSKTBRPPD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HEOCOKSJJTACJHISNEDAABVOQHSAVWUNLFOZEZFHRFLOFFSVDJNNKRJPTSWFWZWBNLKEHLQPGCCSAWWWYLJMYTDMFAMDCUBZIOHTSYFYPAKBPDTXGZCFSOXGGACIVEOTVGIDJMWYDXKDLUUPJNKEGGQBYQAEAUCVRONZKLIQTTBVUCQZZRPDKEQRNKRLWSCIVSFIPPLPTVNZZYORHIXGMMMJKHGEX");
    tmp_msg_0.value.assign("TSLSWVXFYCNCUQIRGTMPIYBHNQBIFFPGWODQPSQOSAWIROPPUAAAEVCKFTJODVFOADCGHBXRB");
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
    msg.setTimeStamp(0.29621721800471656);
    msg.setSource(43684U);
    msg.setSourceEntity(177U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(248U);
    msg.name.assign("BLOWPHHZCEVNO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CWNJVZDRYPUNMIGCRVIGYYQCLDTSGZABCNJYUIIJETVGDCOFHHYDKRNCDPVIYITALAUCHURZVCVOITEHDHWAU");
    tmp_msg_0.value.assign("YIKADHIHQOXEFAQSJUMFGPSJXUXOJXKNMYNYFLWKPWHEQPGLCBTTXVFBGPNNHGVOUGCIKSWLJVPSBGBRRYARKMDLJQISBBLTIUGVHPWTUQOHSVFNMBFIZYLOJDNBYDHYWFRKMVTDVCBEPQXEQPDZPXCWZPMOSFRISUITLXEHVHXYDMITWAUQFEYNWZCWGHKDRKZNZTUQJOTENDRAKJEYTUSCLOACZAL");
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
    msg.setTimeStamp(0.6848645412212319);
    msg.setSource(57799U);
    msg.setSourceEntity(70U);
    msg.setDestination(49581U);
    msg.setDestinationEntity(197U);
    msg.name.assign("EKGODZKSJHCFYPVSKRYGQUSTCIDLWXTCHQJMUTJIRTNFKTPHOGNPSVUAUIZXDFIGZEBFTTPWNHXJNVUMJYIYDPLWYFSDRLAPOCEXHBKOOTGBKZQMRABWVRZGXABYEBNOULNIAGLIXVXAZWFJMGGHKSQZRLANVAQRQHVCHEQBJKLSSDWC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YPTJVQBCRYDQSNPVDXMYLXAGVTOAFWJSKUKBLRQTMQEWXNQLESDEOGAOIFZNHPBSCZPUPM");
    tmp_msg_0.value.assign("UDVRPHHIATJNVOBQZQXQIMWWSRELOBRHNVSOMTQUOQXZCLRDSWKXSVCDLZPFYWXQIOPNYLIMDSNNDGGGROKLTYKKEEMPTSKKSJLCLQBTIHRFUVWP");
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
    msg.setTimeStamp(0.16093029638165446);
    msg.setSource(55078U);
    msg.setSourceEntity(16U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(67U);
    msg.name.assign("GSFWTRZUQAUNESVJKGPBYZIGDDOKXVADUSFJRNULCVCWEYOTYBTILTQCIGAQWETLPJCYARDDPCZFUAPMNUIJOXMYYUZYBQSDJKZCKSQEWTRPHEXGXTJZFNEBVLWGMMJYGFOHGVEEOXBYMHMRNZBQJMLACYKXDWHBKMNGILTVBQRBHVHVRONRKPHVJELASNZWTDPMCFWPKOBUFNFRCHIMIAASPODKWUXVWQZQXFHEQZJGICILSUSANF");
    msg.visibility.assign("EKMMJHRLIKJZEPFXRZKRKIABWWNIACDNQZHGIBVXUBPXIENCPLWQMKJMDX");
    msg.scope.assign("PILVJYLJXUCXJSYFBOCVTQNHABRNLQMLYMAPVOUKCNYONITFMHAJEHRULUBYGIBYFIDAFKAGQGIXQPJBHXPVPZYWPAZVQLQACBTPEGHZBYRSDTMZJVSGCILBXWFITZVXWNOGGCOXWUZVBHTDVIDFRSJOJH");

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
    msg.setTimeStamp(0.12834343450459706);
    msg.setSource(14124U);
    msg.setSourceEntity(213U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(205U);
    msg.name.assign("PTMRPZMSKDAORIFSTNQRKXCMGEKHGAVJLCFYFKRJSRVFNGOJURDNPLNUHOVAYYCOWSOPWIDPQHKZOZACDNV");
    msg.visibility.assign("ZWVZGDTGQVFUARGKJVXPIXCPCORSEUIFVDQHDHUPTBSZOSLEMELTEZYRRMBXXACMAXPSEKEYFJFFZIKRTKFLWGUCDYCLKPXMHJZQPKYJTDJKHGFNNYYMDUKVEHLHJLRAYWUOXSIBJNHLBIYIMSBQAEVSCNLRWCNCOUQWVQRZFZZVMOERBMUGVCQNHTNHLUGTHNZINYPUPSBQAXDLCDTSTAXOMOXJBWOIPSGJRYVWKBAMPIDWOOEIAANWJK");
    msg.scope.assign("FTEFLMBZJHKCULYTPMNFTTKMDBLSWTFOEJQYLCDMWWCBMIADNNFEBWPCSQXVDJLHAQJXIBAMTAGNWBJMNRWRJIQPOJWUOPOEJROVAXRHDPEYQYVPKLGARHYHSGKQSOSDSDGEGGVCKWSHOFPRJNGKEVZNFRPBMZUDZIQQYSUXKAINFYCZJPXWGTCUVROGVCXMKQFEWHDXIUL");

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
    msg.setTimeStamp(0.04515588432321194);
    msg.setSource(21799U);
    msg.setSourceEntity(177U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(203U);
    msg.name.assign("CBZGGFVNKUYPEYSIXMQLYTDZLPNRGZXHNLXETWAKTRSELQKXOSPTMHYYHFGDNRJHREROFOZKTWESBMBSRBMW");
    msg.visibility.assign("JPIJCFMNISMGOYIVZCUXRZAGZPYTYUSDUJRTWEZWUJLZXPEHEWNLTLSLHTMWDAZRSDCDRLYGEIWNXCOWXBJUXGQQHVNTTFWYQBQRNIBYMTUGGDGFIXVQDZHCKOLNCZOJHENIUVHPJSVKOSAMKPRAPNPEFDFQRAVUEDKTSDKGFEPKHQRQTJWCCXAOUVBYBPHMEGJDSIOEGQUBMXOXNNSARYXQPABFKIAOBIMLSKVMRKYFBBZLF");
    msg.scope.assign("PGHGMNLIQJMFQXVYOYZSPBQPDYIJHIHYGQJAAPIOCOVZTVTDNUXEHTQIKLTRCQMUZECKNPBWDWMIODLBNSTAUMYJHVRPHXQKRCFKRHEEYNNXFMCXANBXLWASCZADAWFLMGVICXBDPOSPXDLJWCJGLOSQTJHLSWKRTEDEJKNOYGULCHEBZCFRTUMFAGZSZAKUWV");

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
    msg.setTimeStamp(0.8152976738081161);
    msg.setSource(58520U);
    msg.setSourceEntity(214U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(125U);
    msg.name.assign("VQFAAYCZYJQRHHKRAGBQHYVEZSVJGJMTBJZZLCRPCUXNGKFVFWGLHDXUISXVPCSUNUFLA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CSPNGVJYWGOBUGQYBSJORTBXTEGUFIJRUFKKWFTUISNCCVXIWURDDSMTOGVEPUXDQHRCUKUSLBAKZMKWZQHKV");
    tmp_msg_0.value.assign("RTYZWBCOSZVKLZAPIMOFEASBDIPCDRXDUCNVRQJUGZBKMJFOHAETJMSRKYZYHRXXTMHMOBESEBLIBVXHAQEGWOTWSYHBJHWMMFMGAGTREVXYYLBCVPNUDOWNLCIFTJUTPZLZXWIRAIQAIKSIVTDNCMCEQGDRQDQLULKOOJJPUNYSOEFPPHQJIUCOLWNRUANPIAXYHXSRKNTVGF");
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
    msg.setTimeStamp(0.7422519707635723);
    msg.setSource(58386U);
    msg.setSourceEntity(121U);
    msg.setDestination(17357U);
    msg.setDestinationEntity(79U);
    msg.name.assign("RPLEOPKDVUFOBQVZUIHKLPEPUUSEAIOOBLKBXIYFWPWCRWURZTNMMYPWSAADDKGRANNEYQYKFHFZXTIEHSDZJJRYNZMFXIFHZLSLPLLJFJGWZEUUSDBCZVJGSFYMMANCQNTHDQBKXTISBRQXHTAXQEJPSXVMHZXOFRYKHVPTMJGLONDWDOCJNQHIVKQLCMNSQGNCIEDTAOBA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CSJUCVKPFZEAKHRODTYWWGCLKMFEAPZCEBYUQRRRNTV");
    tmp_msg_0.value.assign("UXRMGPRYYXFGGNURVIBLNXJVNTEMWB");
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
    msg.setTimeStamp(0.21940168008469596);
    msg.setSource(19728U);
    msg.setSourceEntity(168U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(231U);
    msg.name.assign("OXKZBCCTISYLAQEPTNWVWQCOXJRUJRHKNHKEXKDOVBPXHPOGKAJMWCZQDMPZNFBQJDSESBDPYRDMRAURTJBIFVBHDATDFUGVOJLGRQKRCDAKOIBABZHYUQQFRIYFWHAWDHWCYNPEEYTLMFMVESFGZPDNO");

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
    msg.setTimeStamp(0.25491544818505685);
    msg.setSource(47262U);
    msg.setSourceEntity(131U);
    msg.setDestination(35755U);
    msg.setDestinationEntity(100U);
    msg.name.assign("VJSRKIUOQHBENCZTQBSQYFCZWNQCUYIWMAHRYTTFDOJZLOXVBRGICEQSXODGWIBXNPKDCDEETZSBTGRHUGQUXNAYRKHJJFZANDAGLZANSPVLL");

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
    msg.setTimeStamp(0.6394734741981424);
    msg.setSource(29953U);
    msg.setSourceEntity(227U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(148U);
    msg.name.assign("RWSUPQOQSKRDUOQGJKAIGVBVIHJUFPXWJSANTKXRDDBNGPTLLFMFHIRSLSEPOTLMJVNEPJSZFWKRDCMZRCCOMKYBJYPBICJTCNKFEYYAWGQFEKBTOMUVIKUEFLADXYGLUFFBHWOYHZIAIVHARXLWVRNQJUQNBJWXNNYZMCQXPOLECHIQZIDVJDHGWTHDGEVC");

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
    msg.setTimeStamp(0.052821363416256095);
    msg.setSource(11664U);
    msg.setSourceEntity(72U);
    msg.setDestination(922U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VQKWTNGQTAHHIVUFTPZMPOJXNXQPZNCOCHDCOUUYNWTDZNYEYILDWSGOSUWZRUWHMKNJPVCHMBERAXAJFQRDABBTLFZBMWEJIAFWYRIUNPCKASIACMETRJGWERO");

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
    msg.setTimeStamp(0.4445601074311625);
    msg.setSource(54959U);
    msg.setSourceEntity(7U);
    msg.setDestination(49560U);
    msg.setDestinationEntity(47U);
    msg.timeout = 1313736142U;

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
    msg.setTimeStamp(0.1312009978814649);
    msg.setSource(35404U);
    msg.setSourceEntity(170U);
    msg.setDestination(11127U);
    msg.setDestinationEntity(173U);
    msg.timeout = 1355392623U;

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
    msg.setTimeStamp(0.8778366009337955);
    msg.setSource(14512U);
    msg.setSourceEntity(76U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(34U);
    msg.timeout = 2556785450U;

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
    msg.setTimeStamp(0.8829924855648208);
    msg.setSource(55349U);
    msg.setSourceEntity(170U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1816341866U;

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
    msg.setTimeStamp(0.2761325063180674);
    msg.setSource(45384U);
    msg.setSourceEntity(88U);
    msg.setDestination(17831U);
    msg.setDestinationEntity(126U);
    msg.sessid = 441368559U;

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
    msg.setTimeStamp(0.3368823960802283);
    msg.setSource(35533U);
    msg.setSourceEntity(57U);
    msg.setDestination(19789U);
    msg.setDestinationEntity(203U);
    msg.sessid = 3537033122U;

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
    msg.setTimeStamp(0.7402994668869802);
    msg.setSource(27977U);
    msg.setSourceEntity(220U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(96U);
    msg.sessid = 2001308008U;
    msg.messages.assign("GSHTJBKBOLGDNVDYKTXZECGZOHPMGNHNOVRFXAPQUNWCDJBNREBOUEZLCTXOSYYJSFNDUHDLHMNAQUTUQLXMXLKMJAYQOGCCCMLVQFXRMXSOITWGWFKXWIGYUBTSAQYWCMRIVITDIKKPFASXRPLMSSFCZJO");

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
    msg.setTimeStamp(0.21388970768506266);
    msg.setSource(4772U);
    msg.setSourceEntity(235U);
    msg.setDestination(59527U);
    msg.setDestinationEntity(15U);
    msg.sessid = 2118359042U;
    msg.messages.assign("MJOUCRGVHNYBDNVHSUPIFBKUKHYRVHZVWKQAXGISTJGIGXJHVKBRPDOCTLEUIZIYRLLZIJIFCECDDKPAUWVALMCMMOZFOUGQOQTORLSQEQABNCLXFUFCTVUZ");

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
    msg.setTimeStamp(0.5386675329961194);
    msg.setSource(41439U);
    msg.setSourceEntity(157U);
    msg.setDestination(2715U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3194535601U;
    msg.messages.assign("YTLNIBEGVBAURNHXWXGGETALUPDMJQVHCKJKISDJSBIAIYACGZQUUGZTMLTVWQXZSFYRFHESHEZYFCSMCBZYEDOYWUQGKVNARYQNOOFDDJCKBSULWERGFGDFELHPESNTUOWVDLBTOKGAOBZNATJSKSHPALSPZINKPVRIR");

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
    msg.setTimeStamp(0.5399767815983824);
    msg.setSource(9978U);
    msg.setSourceEntity(101U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(164U);
    msg.sessid = 3671643509U;

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
    msg.setTimeStamp(0.3642177788349684);
    msg.setSource(45648U);
    msg.setSourceEntity(56U);
    msg.setDestination(38884U);
    msg.setDestinationEntity(174U);
    msg.sessid = 3963507126U;

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
    msg.setTimeStamp(0.8750960085057642);
    msg.setSource(36190U);
    msg.setSourceEntity(224U);
    msg.setDestination(13211U);
    msg.setDestinationEntity(184U);
    msg.sessid = 4051463805U;

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
    msg.setTimeStamp(0.4643642245794478);
    msg.setSource(53104U);
    msg.setSourceEntity(150U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(148U);
    msg.sessid = 3918250987U;
    msg.status = 219U;

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
    msg.setTimeStamp(0.10095927138044436);
    msg.setSource(21107U);
    msg.setSourceEntity(211U);
    msg.setDestination(9351U);
    msg.setDestinationEntity(17U);
    msg.sessid = 2398753109U;
    msg.status = 192U;

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
    msg.setTimeStamp(0.9907159992408046);
    msg.setSource(39897U);
    msg.setSourceEntity(182U);
    msg.setDestination(45477U);
    msg.setDestinationEntity(210U);
    msg.sessid = 498892782U;
    msg.status = 141U;

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
    msg.setTimeStamp(0.9338616181571039);
    msg.setSource(62185U);
    msg.setSourceEntity(209U);
    msg.setDestination(3555U);
    msg.setDestinationEntity(68U);
    msg.name.assign("QEYTCBIQRBOBBNUTELKLHRYZMAXVJWZGDZPJHEPENAAVUKETXQKDUV");

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
    msg.setTimeStamp(0.5754455610385922);
    msg.setSource(49492U);
    msg.setSourceEntity(115U);
    msg.setDestination(7288U);
    msg.setDestinationEntity(16U);
    msg.name.assign("RIBXTFIHAGTHUVSUKHSGQAPDYTSCQDBOCOOUDDOJPZXZDWWWMOUIZEYOVFXOWGPTXRBMHONPMRCWGLEYLIMIXZBSNXTCKQAPEHQWJLANXLASRAUEVVSEDZWNFZHJLPKNXPVBFVTGNCTKTPJJEMYAQKMRGRKVDKJEJBVABWAMKCHJPISPJYSLXFYLKQBOUNMAYNSEWZZTOUINQGCDTKWGVCQHGFB");

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
    msg.setTimeStamp(0.12029556272300679);
    msg.setSource(52363U);
    msg.setSourceEntity(254U);
    msg.setDestination(2718U);
    msg.setDestinationEntity(127U);
    msg.name.assign("IYTWKCPASGETFDIUYRUCOSRHLKLGWWBEYUGJCRCOPGKMHNCKOPWYGEKGWDGDHYJHIKXJXQZKPGRSIQVBAZELBDPLTVQCONYBZTYMSBLAFURJVDCNOMXUYHTFFOOKZVBWXURJRQYWOGNKPBDMMZAMDLBUMNVJHZLRDCHDAQQFJIQNPXLYLVATJKDTZNXQGIBNVFINITESJFTRNAPZRSCIPZMHFUXQIMVSSCFSEAMWBWHEPOXOEUAUV");

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
    msg.setTimeStamp(0.1719948360767659);
    msg.setSource(39108U);
    msg.setSourceEntity(50U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(236U);
    msg.name.assign("SCEBLBEZTHWASFZMMTKFPTTWYVQARUKAQQPOJRRYZVHXALGNYHVFYHYZJTDMSKCGZHEMDNLDOIJDXDREOYKACIXDNXQAYCVPMYRAJQHQKUMALAIFSJSDGPNBRGGDIPUVCFCSGLLINF");

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
    msg.setTimeStamp(0.4951017631179435);
    msg.setSource(60639U);
    msg.setSourceEntity(227U);
    msg.setDestination(33490U);
    msg.setDestinationEntity(155U);
    msg.name.assign("WPYBFUCEYTYVSYGCTCTRLPULAWDCHNGXFKJEEANVQBUJAQSKVSSIBWHBNPQFSFKRZPHDNNPMNKJOUOFXQWKZFIUJLPFJXOYNYEQDGXLFDRIJWTORYARDPABUGLVMOSBLFWRPWOPXZTHMAMOVTBZZKNCVYVAGUFOIGLWZIINSHIWRABDSMZUHMLTVMHEQGUKYMTCEKXEIQRZKLQE");

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
    msg.setTimeStamp(0.023895176252905048);
    msg.setSource(50779U);
    msg.setSourceEntity(82U);
    msg.setDestination(45902U);
    msg.setDestinationEntity(38U);
    msg.name.assign("CIKTFEUIXUGEIMCTLDFAGHZHHHCJIZIWYWDPPFMRUBUGSVIEGNTFOEDKZLAMBOCRWGXRRULFYDAEPDBQNOSXMUYNDSZVMDOQFMTFONPMIVSXAZIWNVARQPKJQZAKBWYLXRYQKUTAMBHSOJKSULJFCOVPFIOZHLSJ");

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
    msg.setTimeStamp(0.6784292491747744);
    msg.setSource(6494U);
    msg.setSourceEntity(79U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(77U);
    msg.type = 36U;
    msg.error.assign("YGNPMGVQPFYRMMBEUSFALHXRRGPZTTZCHMWFYCLDIOOVMKKJQVUNPPFVZGGQDJGLDWAPTCPTFEXTBGBEYREVEBFVLWTZWQAWOXYIURVLLCWCZRQROLDFSEJTLFYX");

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
    msg.setTimeStamp(0.8786519286553836);
    msg.setSource(36071U);
    msg.setSourceEntity(234U);
    msg.setDestination(3733U);
    msg.setDestinationEntity(26U);
    msg.type = 0U;
    msg.error.assign("AJEQBCJWJGCCFHVPREKDYVKQBFOOTVKNIWUDGFUSASRAXZSVAIAACQLXVXUXEGDQREPORCGALNPYM");

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
    msg.setTimeStamp(0.03432844489425013);
    msg.setSource(36879U);
    msg.setSourceEntity(145U);
    msg.setDestination(13872U);
    msg.setDestinationEntity(49U);
    msg.type = 11U;
    msg.error.assign("HAFCDVWBARDHDZYYBRATDTHBBEOARIVXMANIJUKYIJYBMRNURVQLEQJDQFVWKKCAGTRLUYEMIBNTLOPAADHPTYJNWM");

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
    msg.setTimeStamp(0.37722417017389154);
    msg.setSource(37330U);
    msg.setSourceEntity(2U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(250U);
    msg.seq = 38458U;
    msg.sys_dst.assign("TEJJRVIVEDWLQVISXTTHTIILAIYTOQAAMBCGFKXFBPRTUCTKVFAXOJPHRCZJYSMJRYONZQAEWKYGPQHFBPNBUBSBKKILEBLGWZLVIJKTQMGWNBWCVUHUSVLMTZHBWKDQXQKWZVP");
    msg.flags = 144U;
    const char tmp_msg_0[] = {60, -43, -60, -41, 51, -68, 5, -96, 51, 82, 15, 25, 66, -48, 118, 72, -58, 107, -126, 58, -37, -98, 117, 20, 39, 115, -82, -121, -27, 84, -92, 64, 49, 89, -15, 97, -85, 87, -59, -57, 114, -69, 18, 101, 124, -87, 9, 96, -70, 90, -5, 71, 35, -99, -76, 50, 28, -64, 31, 89, 29, 27, -59, 52, -72, -60, 37, -58, -25, -55, 89, 115, -53, 5, 99, 16, 4, 22, 114, 109, -44, 52, 31, -113, -93, 82, -118, 50, -88, 29, 74, 5, 74, -125, -24, -101, -35, -3, 59, 12, -7, -30, 102, -73, -79, -78, 26, 4, 67, -109, 92, 44, -57, -1, -42, -31, 62, 71, -24, 81, 9, -109, -111, 23, -109, 88, 115, -116, 26, -123, -37, -15, -107, 7, 2, 18, -11, 11, -99, -49, 73, -15, -101, 69, -82, -53, 101, 4, 104, -50, 109, 27, -27, 37, -33, -119, 105, 83, 122, -33, -26, -53, -55, -55, -63, -118, -104, -98, -31, 17, -55, -91, -126, 59, 33, -103, 89, -95, -105, -104, 111, 50, -115, 44, 93, 38, 101, 74, 46, -115, -56, -114, 4, 75, -117, -31, 26, -73, 77, 115, 70, 23, -83, 6, 28, 29, 122, 33, -56, 66, 81, -40};
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
    msg.setTimeStamp(0.9594345185004965);
    msg.setSource(53980U);
    msg.setSourceEntity(250U);
    msg.setDestination(60499U);
    msg.setDestinationEntity(27U);
    msg.seq = 30533U;
    msg.sys_dst.assign("VWXRZVYLOGRKTDTSFPZARONIWPUFGNHBICRXELUWCEPLJJGIFOAZDGEYJGBXSTQDWDRZZYAGZYOIWXUJKDZSDOKICHNTJMCODLRNDEQCPPZCQVKYVHANAGLEOMVBSHTFYKEQHWVPPBSTTRATMHOUWEAQCAYPKQPKXBMCZDBJXIFYHKYUVLVBWYMVAMSGNQAICUHMTCI");
    msg.flags = 123U;
    const char tmp_msg_0[] = {35, 97, 98, -91, -126, 29, 12, 111, 64, 1, -115, 1, 40, -96, -21, -78, 39, -19, -94, 107, -119, -61, -72, -34, -65, 1, 54, -36, 76, -102, -40, 61, -4, -86, -48, 87, -8, -42, -65, -52, -15, 67, -44, -67, -62, -111, 64, 81, -111, 76, -46, -35, 108, 69, -85, -77, 10, 81, 77, -107, -90, 16, -42, 50, 38, -11, 80, 73, -119, 39, 16, -23, 39, 51, 57, 95, 77, 56, 11, -48, -5, -36, 59, 73, -127, 19, 13, -64, -124, -26, 84, 96, 112, -5, 94, 54, -22, 3, -10, 51, -39, -128, 62, -109, -60, -3, -33, 110, 52, -68, -66, -88, -113, -99, -117, 116, 113, 37, 69, 115, -80, -14, 81, 24, 43, 94, -33, -30, -4, -94, -61, -72, 121, -25, -110, 93, 69, 17, 60, 90, 12, -30, -95, 40, 38, -58, 20, 45, -15, -56, -57, -108, 50, -4, -120, -127, -37, -88, -126, -56, -92, 63, 1, 102, 125, 88, 102, 23, -1, 9, -110, -37, -42};
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
    msg.setTimeStamp(0.08320027713674405);
    msg.setSource(7173U);
    msg.setSourceEntity(235U);
    msg.setDestination(33720U);
    msg.setDestinationEntity(54U);
    msg.seq = 23529U;
    msg.sys_dst.assign("CXOBTTDUPECAFNJMHIMBJHPTGQSFEXLISJKQYGAGRFWDQPVXWWONAVYRCRNERCVMVPKBKXOYOULCKVOVLFRMRJNWNDRWRUAYGQYSKFADXMXECCDTBLPUPNINAXJEESXTDDOBXMQWIKFQPCKTZEEUOJDAHOTTVARZZVHFMIKESUKPFVVYGWAHGYBSTXYW");
    msg.flags = 71U;
    const char tmp_msg_0[] = {44, -104, 96, -95, -3, 76, -47, -19, -74, -19, -116, 55, 46, -118, -12, -22, -54, -10, -5, 27, -25, -23, -49, 5, 90, -23, -102, -56, -28, -2, 35, -119, 32, 35, -117, -113, -38, -54, 16, 81, 30, 70, 114, -8, 56, -102, 7, 123, 11, -110, -39, -106, -94, 13, -113, -100, -25, 121, 126, 109, -20, 69, 107, 34, 120, -69, -6, -107, -2, -124, -128, 89, -21, -1, -20, 73, 123, -9, -113, -127, -31, 27, -109, -51, 111, 44, 14, 4, -31, -122, 82, 53, 55, 92, -46, -10, 46, -94, 44, 104, 119, 9, -41, 24, 31, -1, -39, 60, -96, 27, -39, -101, 68, -111, -14, 90, 112, 122, -73, 126, 42, -44, -83, -85, -104, -12, 117, -108, 21, 64, -128, 19, 70, -6, 105, -80, 16, -14, -104, 7, -94, 53, 28, -58, 37, -38, 45, -72, -55, -89, -5, 63, 58, -120, -59, 67, -67, -49, -84, -50, -14, -17, 79, -57, -31, 62, 109, 114, 110, 54, 74, 72, -121, 12, 27, -48, -50, -60, -13, -81, 126, 101, -32, 48, 77, -30, 67, 89, -70, -21, -11, 45, 125, 29, -98, 75, -59, 19, -97, 117, -106, 49, 97, -102, -6, 86, 15, 28, -96, -17, -54, 19, 43, 92, -74, 86, -78, 76, -82, 71, 25, -9, 72, 121, -71, -26, -54, -95, -44, 5, -55, 19, -93, 10, 18, -90, 62, 9, 125, 45, -32, 68, 76, -99};
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
    msg.setTimeStamp(0.5570348787825321);
    msg.setSource(17320U);
    msg.setSourceEntity(212U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(197U);
    msg.sys_src.assign("EIRQAHQVDKPFIKBYWLKYSUHRVYYUMJEXRVPLSNEAFGOAUFRLAMNXIKUYFFVVWZZBOKGOMSLTXPQHQTXCDJW");
    msg.sys_dst.assign("NZWCEYZVQABYRJJFKKBGPNJIBRDFKIQBEWNWRLJAMRBCIOHZMDKKAUVIEXTZVGCUZPSPIOTNGHKDGEJHEDBTLAEBWOYRZMNJPEHWOMCPFNOMUQQMGZO");
    msg.flags = 187U;
    const char tmp_msg_0[] = {93, -86, -43, -89, -20, -48, 28, 16, -51, -95, 46, 61, -73, -95, 16, 37, -100, -49, -33, 91, 79, -22, 4, -40, -15, -102, 86, -97, 40, -70, 9, 29, 63, 11, -41, 113, -48, 51, -96, -36, 7, 68, -125, 49, -128, 27, -76, -36, 28, -14, 126, 89, 106, 73, 25, -105, 100, -108, -9, 116, -91, -42, 88, -9, -88, -39, -102, 80, -88, 47, -30, 121, 68, 80, -7, -106, -87, 84, -71, 123, -122, -12, -24, -125, -116, -126, -57, 3, 94, -75, 117, -104, 0, 107, 13, 31, 88, -108, 31, 46, -53, -72, -7, 48, 64, 73, -34, 107, 92, 52, -59, -65, 4, 76, -37, -30, 112, 75, -49, -77, -31, 46, -64, 80, -53, 20, -91, 14, -128, -30, -44, -28, 6, -71, -110};
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
    msg.setTimeStamp(0.7647938507887532);
    msg.setSource(23990U);
    msg.setSourceEntity(121U);
    msg.setDestination(9537U);
    msg.setDestinationEntity(209U);
    msg.sys_src.assign("OMZHJZPCYLFKQSVIARVSTNYOPTMUWDUYUMEPANIJMUFMXMDKJGGSGCHWGSIFBPHNBOZTSRLNNGXYUIKLPLBYKFYRHIIMWKZIOPCXJADILJLJRQTLQFCWZBWAFSTSYTKYOEQUGXHXBZNARRPPBQDXCVTGOZGWNDTIEVJQBNKKAQLCCHXEZQFWQZFHYMRIDYMDJANE");
    msg.sys_dst.assign("TOGEPPTHSAANYNDMXTMQGXMSFCGZGRXVYDZJKZVKUCQJDIALIIWHRKNVQGZYCEXTTJJBHQVDYE");
    msg.flags = 111U;
    const char tmp_msg_0[] = {99, 55, -77, -1, 18, 7, -97, 55, 28, 40, 52, -20, 84, 109, 15, -19, -59, -122, -64, -74, -108, -83, 71, 11, 6, -124, 53, 77, -67};
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
    msg.setTimeStamp(0.28879813398187826);
    msg.setSource(60564U);
    msg.setSourceEntity(150U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(110U);
    msg.sys_src.assign("RIITQBUULKBMQJBJITLEJBDFQHOUGTLEXLGNQWZTWXDLTJHGRSUNFGGRACQOCTSNUYRYHPFKIKKVUVYGIHEDSNVOCKSVAFPXKDWDTXKGUQAWIIBVCRFEOYWDMXFJAJFNXBVAJUFMLGCQWEVHYFMY");
    msg.sys_dst.assign("VPLTQIMQAWYVPPBZRHZHQWUAXKYDLSSGDJSOWOOQVWABGLTIRQFIUDXLKFQCOYXNXXLQFSVLJREVCNSNVHORUAOTLPAZVNPAOEWCOHXNHMDSJSKGTYBANXNFIVBZFUJTYMJIOCUUMXWEQGEMVHBJHIMTWZGIPHAUCCRJDKBRLBBEEGKNDEFYZKAMQUVGHFICPMZBRNPMDPTZ");
    msg.flags = 55U;
    const char tmp_msg_0[] = {115, 12, -107, 107, -21, 123, 121, -114, -32, 41, 10, 51, 7, -101, -115, -96, 86, -47, -122, 24, 35, -79, -64, 95, 106, -57, -36, 56, -112, 71, 59, 35, 65, -54, 51, -54, 86, 46, 7, 55, -14, -90, 119, 104, -87, 109, -23, -92, -50, 19, 60, 51, 34, 126, -21, -82, 81, 44, -125, 91, -119, -109, -100, -96, -102, -26, 43, -82, -90, 94, 29, 119, -61, -120, -92, -31, -76, 15, -105, 49, -15, 92, -38, -71, -77, -56, -23, -29, 70, 116, -97, 16, -2, 12, -9, 18, 114, -63, -97, -112, -42, -91, -68, 121, -118, -27, -1, -63, -95, -122, -80, 107, 0, -14, 125, -10, -8, 25, -99, 101, -92, -44, 103, 126, -70, -124, 117, 85, 49, 85, -14, 34, 47, -58, -119, -53, -68, 83, -81, -42, 64, -64, 78, 23, -66, 18, -48, 31, -128, 70, 99, -9, 105, -69, 2, 27, 56, 107, -97, -72, -63, 20, 66, -3, -76, -64, 37, -86, 106, -108, 13, 8, 25, 85, -112, 54, -67, -92, -12, 124, 103, 65, -109, 71, 70, 125, -100, 125, -46, 84, 39, 60, 20, 95, -46, 124};
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
    msg.setTimeStamp(0.8305159934538031);
    msg.setSource(20338U);
    msg.setSourceEntity(88U);
    msg.setDestination(42711U);
    msg.setDestinationEntity(62U);
    msg.seq = 25520U;
    msg.value = 169U;
    msg.error.assign("TDAIUNWXOPLUXHWJZQSRGNDFEPIQEKNBNPFGVHHFDAKRCEHQXYVTCLRXPYBJLKKCZPFCSPDFLJMBTYCDAVKMBNPSUDYIHTUEOJQWOSYDDGQRKTPWKGRFIBJTBVGEMTXMWXRPNTFJABSIAZEOUGILONQQMRWSDFXOEVYWUZIGPSWSHYFMMZXHQH");

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
    msg.setTimeStamp(0.6983092930485569);
    msg.setSource(31465U);
    msg.setSourceEntity(253U);
    msg.setDestination(18533U);
    msg.setDestinationEntity(165U);
    msg.seq = 13375U;
    msg.value = 35U;
    msg.error.assign("XJUHEOVIVYFNUVMQXGNLLWGSPUTWTPTOQPESOHTYIOFNLGPDDN");

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
    msg.setTimeStamp(0.9820018626076169);
    msg.setSource(56994U);
    msg.setSourceEntity(7U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(47U);
    msg.seq = 19460U;
    msg.value = 123U;
    msg.error.assign("MOGJQJMDZDGEDVKCFUEVMLYPWQOYCZEUWUPTHTWGIHUQRIZPHASFQCANZYIOBOARWSYSSORSTHSMECLLLOOXOJJXTCZUSVMXVKQDTWFFYERKVUQDBUGICHUDMQJVEKIHBJVWMEOGWGSLQGETYINXBLNHCZWGFA");

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
    msg.setTimeStamp(0.6857404026480971);
    msg.setSource(10764U);
    msg.setSourceEntity(31U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(235U);
    msg.seq = 15522U;
    msg.sys.assign("SZUSEGIJMOLRMDQCQPYGMUXSDGVMRVHHAUBRJXDTZLNAGGFEREKOWHHJCBALCCLPOIOWMLNVPOQKFMJXFINVJAXRCWRDSRJEPOHDYCASAXTLNONISTNZUTOVANBYKVDAVZUZGYBCIXJBDQNWFMCU");
    msg.value = 0.42234188328493194;

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
    msg.setTimeStamp(0.33913565941873525);
    msg.setSource(53844U);
    msg.setSourceEntity(251U);
    msg.setDestination(32477U);
    msg.setDestinationEntity(173U);
    msg.seq = 3418U;
    msg.sys.assign("DISLQLARFRZJSGTDMZQXTIWLTQGFZMQWVGNRMFUVHRBSYNBQOYPJJWAFE");
    msg.value = 0.20659550197050525;

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
    msg.setTimeStamp(0.022791238287137028);
    msg.setSource(60287U);
    msg.setSourceEntity(47U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(223U);
    msg.seq = 33218U;
    msg.sys.assign("ZFXLKYIVXFRMERHOLHSG");
    msg.value = 0.1322933392243777;

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
    msg.setTimeStamp(0.17446966491539506);
    msg.setSource(29250U);
    msg.setSourceEntity(220U);
    msg.setDestination(25438U);
    msg.setDestinationEntity(134U);
    msg.action = 226U;
    msg.longain = 0.9561411260344101;
    msg.latgain = 0.5371297059641436;
    msg.bondthick = 1113040782U;
    msg.leadgain = 0.09611440601792509;
    msg.deconflgain = 0.6357699488769113;

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
    msg.setTimeStamp(0.7366764470855176);
    msg.setSource(59778U);
    msg.setSourceEntity(3U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(133U);
    msg.action = 162U;
    msg.longain = 0.01647421742862698;
    msg.latgain = 0.9184064492077636;
    msg.bondthick = 3107149428U;
    msg.leadgain = 0.13036598499989538;
    msg.deconflgain = 0.786091644138233;

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
    msg.setTimeStamp(0.9976961948488952);
    msg.setSource(33838U);
    msg.setSourceEntity(60U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(183U);
    msg.action = 86U;
    msg.longain = 0.05635565319412805;
    msg.latgain = 0.0710363109674873;
    msg.bondthick = 425976729U;
    msg.leadgain = 0.5903408734106758;
    msg.deconflgain = 0.8229843405864844;

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
    msg.setTimeStamp(0.6442692942644882);
    msg.setSource(18981U);
    msg.setSourceEntity(155U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(126U);
    msg.err_mean = 0.32742648775247474;
    msg.dist_min_abs = 0.7994017251839398;
    msg.dist_min_mean = 0.6265846469169964;

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
    msg.setTimeStamp(0.23094585930602884);
    msg.setSource(28648U);
    msg.setSourceEntity(231U);
    msg.setDestination(27282U);
    msg.setDestinationEntity(198U);
    msg.err_mean = 0.39454741796786663;
    msg.dist_min_abs = 0.6867840466404154;
    msg.dist_min_mean = 0.8407617962969562;

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
    msg.setTimeStamp(0.09549872080887101);
    msg.setSource(29623U);
    msg.setSourceEntity(103U);
    msg.setDestination(49592U);
    msg.setDestinationEntity(109U);
    msg.err_mean = 0.35814481401748655;
    msg.dist_min_abs = 0.5250507023167833;
    msg.dist_min_mean = 0.05605177854967491;

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
    msg.setTimeStamp(0.057217885698968574);
    msg.setSource(45059U);
    msg.setSourceEntity(6U);
    msg.setDestination(9427U);
    msg.setDestinationEntity(8U);
    msg.uid = 199U;
    msg.frag_number = 122U;
    msg.num_frags = 13U;
    const char tmp_msg_0[] = {-121, 5, -30, -63, -28, -116, -8, -53, 53, -69, -40, 4, -71, 117, 98, -14, -48, -60, -60, 95, 122, -93, -75, -9, 112, -26, -12, -98, -7, -73, -29, -93, -44, 5, -43, 65, 25, -75, -8, 86, 48, -46, 28, 25, -73, -93, -62, 125, 17, 30, -14, -4, 28, 29, -114, 102, 81, 120, -94, 4, 1, 69, -123, -116, 82, -87, 89, -41, 91, 86, 25, -119, 63, -4, -35, -75, 9, 16, 18, 15, -11, -123, 52, 105, 103, 98, 50, 58, 116, 61, -69, -62, -83, 64, 113, 35, -18, -107, 24, -62, 117, 100, 7, 118, -95, -125, 7, 40, -96, -126, -9, -6, -85, -101, 25, -44, -86, -58, 106, 23, -121, 41, -111, 36, 123, -72, 40, 39, -110, 101, 29, 70, 116, -109, -99, 30, -37, 28, 69, 89, -51, -35, -96, -102, 74, 11, -91, -22, -13, 63, 8, 14, -68, 94, 60, 100, -67, 15, -109, -119, -120, 124, 21, 96, -101, -65, 34, 92, 50, 12, 41, -100, 95, -11, -6, -77, 106, -109, 27, -84, 23, -55, -52, 117, 42, 45, 113, 51, 28, -32, -31, 118, 30, 42, 60, -32, -108, -30, -116, 122, -3, -127, -57, -107, 29, 20, -89, -104, 4, 89, -111, -120, 86, 15, -48, 47, -63, -50, 4, -61, 106, -80, -50, -87, 32, 121, 57, -117, 105, -56, 36, 74};
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
    msg.setTimeStamp(0.057475826900280524);
    msg.setSource(64878U);
    msg.setSourceEntity(167U);
    msg.setDestination(54425U);
    msg.setDestinationEntity(69U);
    msg.uid = 161U;
    msg.frag_number = 222U;
    msg.num_frags = 126U;
    const char tmp_msg_0[] = {50, -51, 40, -18, -1, 53, 106, -116, 7, -96, 126, 83, -86, 56, -107, 70, -111, -26, 20, -102, -109, -41, -59, -107, 99, 83, 102, -125, 123, 0, 106, 65, 89, 74, 113, -48, 20, -54, -121, 89, -70, -108, 68, -73, 68, -91, -107, -40, -122, 12, 34, -106, 8, 99, -95, -77, 87, -43, -95, -68, -67, -81, 18, -6, -32, 43, -120, 93, 24, -107, -10, -55, -27, -36, 76, 77, -50, 80, 54, 37, 74, -22, -82, 100, -38, -11, 5, 3, -83, 111, 53, -47, 11, 10, 2, -95, 113, -46, -13, 89, 47, -78, -7, 28, 31, 8, -24, 55, 62, 17, -121, -121, 77, 25, -106, -13, -21, 73, -40, 22, 65, 119, 104, -44, -98, 104, 55, -18, -77, 71, 106, 18, -13, -99, 58, 77, -104, 6, 48, -54, 97, -113, 69, -59, 83, -89, 104, -75, -47, 64, -108, 0, 55, -55, -118, 97, 103, -66, -29, 80, -5, 95, -95, 65, -31, 84, 122, -85, -46, 96, -127, -72, 27, 45, -103, -87, 19, 5, 83, 42, -41, 59, 99, 48, 91, 123, -39, 16, -43, 100, 122, -56, 23, 105, -11, 120, 78, -91};
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
    msg.setTimeStamp(0.9182833502389868);
    msg.setSource(52753U);
    msg.setSourceEntity(38U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(32U);
    msg.uid = 180U;
    msg.frag_number = 27U;
    msg.num_frags = 242U;
    const char tmp_msg_0[] = {111, -11, -102, 70, 48, -17, 56, -8, 66, 53, 76, -86, -50, -98, 109, -9, -66, 15, 42, -20, 102, -106, 100, 10, -4, 39, -34, 28, 23, -124, 58, -22, -86, -110, 27, 93, 91, 38, 4, 40, -95, 95, -78, -34, -103, 4, 31, 48, -72, 108, -119, -92, 115, 112, 33, -46, -114, -95, 100, 19, -127, 96, 82, 97, -65, -38, 83, 15, -38, 38, -100, 55, 64, 52, -80, 5, -79, -123, 103, 116, 10, -37};
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
    msg.setTimeStamp(0.6768684778067784);
    msg.setSource(28485U);
    msg.setSourceEntity(17U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("OQFCRLPKXUFMPQHYAOBTJZYKQTKSXDGKFKDNDWCJTRMSUVRMDXAQIXLVSIWXJYESMRLVSPXOEENCBEQQPWUWGYYDIEGANIGFUSUQNJHXVBDXZPFGVKRTRCAAGMHZQHNBCBYFOPWDAZVUVSDUIWTIYIIJJPHFTWVXGEBYOOQOPCELETYNPKENI");
    const char tmp_msg_0[] = {1, -17, 107, 124, -62, 42, -42, 33, 42, 24, 41, 41, 5, 69, 88, -68, 103, 75, -62, -124, 62, -43, 118, -30, -50, 67, 72, 78, -99, 40, 95, 117, -48, -117, 116, -95, -94, -76, 33, 95, -93, 50, -86, 10, 115, 100, 113, -70, -21, -10, 117, 31, -35, -55, 25, 12, -96, -65, -39, 9, -42, -72, -2, 98, 29, 26, -93, -116, -71, -6, 40, 29, -78, 61, -3, 21, -55, -116, -43, -35, -67, -100, -62, 7, -70, -11, 120, 23, 118, 78, -22, -128, -50, -26, -104, -99, -56, -76, 105, 75, 82, -125, -57, -112, 63, -116, 119, -109, 17, -19, -107, 62, -108, -99, -104, 73, 118, -83, -117, -44, 90, 61, -10, -121, -64, 72, -96, -109, -78, -26, -39, 43, 96, -56, 99, 27, -128};
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
    msg.setTimeStamp(0.2954058518224828);
    msg.setSource(52632U);
    msg.setSourceEntity(44U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(186U);
    msg.content_type.assign("DCOCKIWGQJWHHVCMCPAJNLXPOLYEFOZHRJLCMYYZIRASEESTXTXUOZOYXPJRIKXUMNFYQDBKCTAYDPWNRYSYMSBBSHCGJIMFXQVBADPVGUMKJGISOCWN");
    const char tmp_msg_0[] = {-37, 93, -101, -49, -64, 74, 59, 76, -6, 22, -112, -67, 44, -12, 29, -21, 88, 24, -109, 110, -118, -106, -100, -70, -4, -9, -23, 31, -57, 112, -107, -87, -21, -75, 41, 115, 19, -49, 12, -53, -127, -85, 12, -67, -61, -77, 55, -107, 100, -6, -82, 122, 103, -104, 34, -127, -105, -3, -64, -47, 30, 60, 50, 46, 20, 10};
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
    msg.setTimeStamp(0.1095642822604791);
    msg.setSource(31220U);
    msg.setSourceEntity(88U);
    msg.setDestination(53398U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("BOPNVRSWHCIQ");
    const char tmp_msg_0[] = {-22, 97, -5, 91, 1, -61, -71, -91, -90, 101, 95, 119, -35, 100, -56, -88, -55, -95, 40, -77, -39, 70, 99, 60, 49, 21, 123, 43, 20, -91, 47, -7, 63, 113, -85, 26, 109, -17, -52, -75, -9, -69, -77, -95, -15, 49, -78, 101, 36, -61, 29, -12, 123, -74, 83, 46, -106, 23, 86, 20, 116, 57, -105, 63, 79, -126, 10, 5, -116, -60, 88, -17, -82, 16, 16, 16, 3, 83, 84, 62, 45, -14, 59, 22, 102, 61, 42, 71, -21, 10, 103, 60};
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
    msg.setTimeStamp(0.057942906209455525);
    msg.setSource(16842U);
    msg.setSourceEntity(131U);
    msg.setDestination(320U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.724360159990378);
    msg.setSource(41891U);
    msg.setSourceEntity(235U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.23764892924124337);
    msg.setSource(13291U);
    msg.setSourceEntity(48U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(202U);

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
