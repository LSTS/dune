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
    msg.setTimeStamp(0.3777205795232411);
    msg.setSource(49068U);
    msg.setSourceEntity(56U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(102U);
    msg.state = 177U;
    msg.flags = 222U;
    msg.description.assign("YRPQODFJLIMKSDNLJ");

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
    msg.setTimeStamp(0.17764469626595325);
    msg.setSource(7333U);
    msg.setSourceEntity(228U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(99U);
    msg.state = 175U;
    msg.flags = 88U;
    msg.description.assign("IKWGGSNHCFTREIKGYDKOXJARWLBNZKDOMDSWUEJSJAYYISYLHWWPJUOOETXNNIBIPZBLVAJHMXQMGOYKHCZRQOHFCIMQDYXHBXSBEAUZAQLRYQBOLLRPXCXWONEFNCIYSIUTVQUWFOFZYXELSTHZEPQPBICJTVDNDACJUFDRHVSBNNRKNJPGBFMRTEARXEPFSEUAVTZVHRW");

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
    msg.setTimeStamp(0.8691192561565949);
    msg.setSource(33005U);
    msg.setSourceEntity(203U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(53U);
    msg.state = 171U;
    msg.flags = 242U;
    msg.description.assign("EUHROZDTWSATJXKZIAJZHQINWCEPJDKMVGQVYVYEQFNNMYBONIARCBYKEUNKIADRPBDLPBEPCQVSMIZUKRYGYTNVBETVMRQJTCTCUDDXKNWHUOLSEFIZFPWBZGESTTUZVQIULSOKQQSFUHXMOPMCRWHYFOCZPBFSJZDAWQRMWXXHWXJJALMDPGSXFKFRKEASFPPNMBYLT");

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
    msg.setTimeStamp(0.42363589514348954);
    msg.setSource(9139U);
    msg.setSourceEntity(152U);
    msg.setDestination(54792U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.068258761207462);
    msg.setSource(15461U);
    msg.setSourceEntity(26U);
    msg.setDestination(50511U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.06495635312496018);
    msg.setSource(47412U);
    msg.setSourceEntity(41U);
    msg.setDestination(50036U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.6990039413066791);
    msg.setSource(581U);
    msg.setSourceEntity(198U);
    msg.setDestination(39365U);
    msg.setDestinationEntity(146U);
    msg.id = 9U;
    msg.label.assign("HIFGSEFEZUFDVXBGIXPHKGTTYVTJUTOHAVWFRACUEIVGBYHKHODLOQPTYOYYADCPNKLVJDSJDG");
    msg.component.assign("EPYZJBVKTVQYVBQXLEHJOVD");
    msg.act_time = 29039U;
    msg.deact_time = 47919U;

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
    msg.setTimeStamp(0.6352867824201912);
    msg.setSource(64467U);
    msg.setSourceEntity(182U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(224U);
    msg.id = 32U;
    msg.label.assign("EKUVTXQJLABUEYWKWRUPWBGTYTVPGDQCCLCQAFBHNWVLKCGVJMANCDRRYAMCLLHZPXZOAIBCIZTIKPTJOOZFGDMRNYYTNPBOQLFFSTDKSYBJSIVDKESDXTXABNXHINQQLBKFXXMMLJXHHQHIUZOBVPTZJIZSLPYREOZUIIFJZGGUHQEDHCKPMMOLFRUGECDASPUDIY");
    msg.component.assign("HYHHXRYZJJPOAQIDILBSQPUEVMPKTMOACXZEDQRATQOEPAXDVEGMMLZTOKJXPOBVZRJCRWKYMSWUMCBWCZYQEZBKYVASCSHGENUDYNMXTDGPGGBTSHUWDBFNJFNWBDIHFFAGQNGOIYTZYPDXSZPRKM");
    msg.act_time = 40075U;
    msg.deact_time = 61607U;

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
    msg.setTimeStamp(0.060159180748978636);
    msg.setSource(51252U);
    msg.setSourceEntity(56U);
    msg.setDestination(48020U);
    msg.setDestinationEntity(122U);
    msg.id = 16U;
    msg.label.assign("SCNYYXYMVQCNQSMPWPZWOROY");
    msg.component.assign("JIXFVXPUBVDGCAZCKRSKUTXBFXNJVRSMQR");
    msg.act_time = 47153U;
    msg.deact_time = 28999U;

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
    msg.setTimeStamp(0.38243462899509073);
    msg.setSource(64573U);
    msg.setSourceEntity(166U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(204U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.9737736031163403);
    msg.setSource(53525U);
    msg.setSourceEntity(181U);
    msg.setDestination(14900U);
    msg.setDestinationEntity(0U);
    msg.id = 116U;

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
    msg.setTimeStamp(0.49622877449933067);
    msg.setSource(41732U);
    msg.setSourceEntity(129U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(251U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.15876379614095182);
    msg.setSource(58284U);
    msg.setSourceEntity(185U);
    msg.setDestination(34042U);
    msg.setDestinationEntity(159U);
    msg.op = 50U;
    msg.list.assign("XWNCGCCQEOZHKZJARFMSGKMOLXUFGCJVTCHCMYZEUQLIZUPRYYAQFPYTGPHOLFQLBOTSWSCBEHPUAKNDPJUGYEYRLXHJFREXFJEAMINFINIDNJHORRQSITOMBXKVDXJKFDKKBLJO");

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
    msg.setTimeStamp(0.846318055485938);
    msg.setSource(48354U);
    msg.setSourceEntity(244U);
    msg.setDestination(6942U);
    msg.setDestinationEntity(161U);
    msg.op = 151U;
    msg.list.assign("TNMWVQMCFZFDWAXBRODVVHLUUHEBSZEREEKHJRRZCGPNYOOOGCKSYWSKWIIGOQNZVVIEYSHXJQOPRVLJELDDICNMXMLFZLKRVLPUGFR");

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
    msg.setTimeStamp(0.671685510070687);
    msg.setSource(12436U);
    msg.setSourceEntity(38U);
    msg.setDestination(56287U);
    msg.setDestinationEntity(29U);
    msg.op = 19U;
    msg.list.assign("DGQOZDKHNCYHBZIEAJLIFIWXEVLXNQMTZZMEHXSIBPSIOBLOWTVTRNWCITJXANAAHMPWFJMRKXEGFFAWRKGWKPXCUKEUATHCHTBDOPZQYURGWFPIUGSUPJJGEIVNSPKYYRXSPECSMGYESZQVNITAQCWFOQJJHHCOKHNAAUSBCRDRZEADWVTMYTLZIZQQYBSNOLDFCBGDHYLFYDLZKQVGVMXEUPTXMUDFRBVWBGMNBYJCOXLRDPFRQMJLO");

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
    msg.setTimeStamp(0.27583870480663264);
    msg.setSource(3359U);
    msg.setSourceEntity(157U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(68U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.32489642892881465);
    msg.setSource(50240U);
    msg.setSourceEntity(4U);
    msg.setDestination(31785U);
    msg.setDestinationEntity(42U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.3355173338083468);
    msg.setSource(53127U);
    msg.setSourceEntity(59U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(123U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.12497927170507606);
    msg.setSource(30211U);
    msg.setSourceEntity(108U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(107U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.34534826779265404);
    msg.setSource(30285U);
    msg.setSourceEntity(102U);
    msg.setDestination(52778U);
    msg.setDestinationEntity(224U);
    msg.value = 214U;

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
    msg.setTimeStamp(0.062396781190083184);
    msg.setSource(18127U);
    msg.setSourceEntity(250U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(46U);
    msg.value = 152U;

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
    msg.setTimeStamp(0.738233731660844);
    msg.setSource(24582U);
    msg.setSourceEntity(65U);
    msg.setDestination(29435U);
    msg.setDestinationEntity(247U);
    msg.consumer.assign("EJFJBSJXGXPMIFERKNLOAYTICPXYDLOERMUGJKK");
    msg.message_id = 14192U;

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
    msg.setTimeStamp(0.5640628867862452);
    msg.setSource(12594U);
    msg.setSourceEntity(109U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("ETRFQDZWIJXIVSIPQHHODRROGPYDJCBOUQASFXSIWBQCMOFTEWFRKIPBOVGSDWGYRFANSUXJFFVGNSNYDMUQESPZHZGQKCATYOAKUEYZBMIHKTKYBAYKAWXTKAWZKGNYMPEG");
    msg.message_id = 61375U;

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
    msg.setTimeStamp(0.9791374891096795);
    msg.setSource(14213U);
    msg.setSourceEntity(2U);
    msg.setDestination(11920U);
    msg.setDestinationEntity(176U);
    msg.consumer.assign("RAWHCHMOZCZHFYKFQFUZLMZRXXPKWDOTRNNDIZQLNQGCJ");
    msg.message_id = 62901U;

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
    msg.setTimeStamp(0.255713583146281);
    msg.setSource(61690U);
    msg.setSourceEntity(37U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.3577468939596372);
    msg.setSource(17495U);
    msg.setSourceEntity(67U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.1967243810354523);
    msg.setSource(63900U);
    msg.setSourceEntity(215U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.41075837329514364);
    msg.setSource(5870U);
    msg.setSourceEntity(17U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(197U);
    msg.section.assign("YIPWUGLCFUNMBKLFRARQVFCFZYGBTDXBDINTHKZITAKIJNPJKUXOFDONVYFVTJDRRKZVFRDASMHGUZSKELCBSQMMXVYAYYPDCCBZQISEMYEXZIOAWNQKQWHWHMWGONBJBONFMXZCEEEZBHH");
    msg.param.assign("QMYHMKQLJAGADLKSLQSZRMUNEUEGCMHUKYLRWPUFBOARCYZPHWTKJLEWEPOJBKFFESFVXYFRKGYJNNQXIHJB");
    msg.value.assign("RBEXRZEMNDJKHHRYFAIDVGGXHMOFWQPMOIKPROOUAWKIRVDDCBBZYIULLPTZONQKSLQHRMYLFFCDWBMKLZTXOIGWSZXEQPCXFUKHUYNTWYYGAETNCJEPKVCLJRAMPJTNNGMIVDYDVZCWOJCQJEUXHZJANCJAGOWQTWZBSUDBMHLEVSBVSSPUSIBTJSMBUGDTNCKVNLUZFNXIEX");

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
    msg.setTimeStamp(0.7283159348441818);
    msg.setSource(20267U);
    msg.setSourceEntity(208U);
    msg.setDestination(58281U);
    msg.setDestinationEntity(189U);
    msg.section.assign("KDUDHLELANJCBHWHMOVWUUWMPXXBSQARYATLBBVQEQ");
    msg.param.assign("XIGIDQRTFTCHTPYOYVBRAVBDKMDMFZTHRHBNLXAXAFYUKJFTRQOZYZCBNIQEMEDNRQZMIQVJGWBPNXGWLEXRWMDFL");
    msg.value.assign("LSNZMAHUVKHRGCCNQHFQTBPPMPNIWDXKEYZWKJJDVPRVDMKUVLYHKHLGBBTFEXCDFASXJRGESCVYPCFABVTRCAIZQCAZGTTJIZMORRUQWFCHQTFQFYETUAJYIWXNEULIXDOBUBRSKODPLFALUEOSKTBVSG");

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
    msg.setTimeStamp(0.037787684036229896);
    msg.setSource(4162U);
    msg.setSourceEntity(68U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(40U);
    msg.section.assign("IZXOVBDBDSCGWTYKUJEPOZROEREDGJWCOQPFPMAAQYQNNCDMGBLZJDVUICEYOXXPIGQFAAIVROJMFXVLOLACWZW");
    msg.param.assign("OQSXDMWSCUWJAOKLSNMXPUDWNOKPQRKRISRQLJLHZDYFNZRQTDQ");
    msg.value.assign("QIRUXAEIULQFQZBNHCDKTLTTWDPGSJKAIQXILRNMTKZSNHPLSMAEJDVANVNLFIPGYXMUROGARATUCMSLWVCNQRORQKMFSCXWOZPBEYZOCBVJIJRHJMEMOCEJAGBZQDOCUIFTVTGDYSGBSKPHLFQUOYZWSVCINYXETUAXANDWXXZX");

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
    msg.setTimeStamp(0.414514465132215);
    msg.setSource(31796U);
    msg.setSourceEntity(29U);
    msg.setDestination(4310U);
    msg.setDestinationEntity(218U);
    msg.op = 212U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("YPMARERUAD");
    tmp_msg_0.param.assign("ERPSKHZGTCGTURFYSWUJQVJFAWHDYTMNYVTXOOICFSLNYHELAIZKSJRLZGMOQCUBUSKEMDRODQHYZTVPIWGERXWQMOAXSIWZJYYAZIFNQMVHVZNMBEQCGOBLPPNLDUJGRVMZKGADPCLXXDBLIIENPAKCAETUTKTIFYVIOVISHVMMJZOCLFHYFSLUWOBJEJHWTXYPDRBPKGBJNFNKGHBWBATXUFWRHNFAGAOKKECLMNDQUXU");
    tmp_msg_0.value.assign("BKLTEYKNWJOLPHYHXXSNDOPASFTSZLGHWVKTEDGVCYPQTFKKCDNJDXLMLXSVCCZJJSGVDMRIFFWZFRWNJMQUUAZJIPQIAHBEOSNCHNTVYPUFGKRJKMUUOJACOXZWNZQYGEWGKEXDAWICBQTOJVDHZQBDCPRQBIBTTRQCKHEMIYLHRXIRMFFPIUSZASUBMZVXRHPNFXNOJMVAGWYSQDOFWXOLARAWELBTGIVIYAEBZBEK");
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
    msg.setTimeStamp(0.09491663703464692);
    msg.setSource(8463U);
    msg.setSourceEntity(233U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(132U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.08530112964930725);
    msg.setSource(20268U);
    msg.setSourceEntity(17U);
    msg.setDestination(61653U);
    msg.setDestinationEntity(83U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.14173225537090672);
    msg.setSource(42562U);
    msg.setSourceEntity(83U);
    msg.setDestination(44385U);
    msg.setDestinationEntity(140U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.027528993748856534);
    msg.setSource(60330U);
    msg.setSourceEntity(66U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(97U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.8481301441482171);
    msg.setSource(60110U);
    msg.setSourceEntity(60U);
    msg.setDestination(26760U);
    msg.setDestinationEntity(159U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.548673692742684);
    msg.setSource(21967U);
    msg.setSourceEntity(139U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(183U);
    msg.total_steps = 153U;
    msg.step_number = 14U;
    msg.step.assign("HKYZLHESOBYOJTQJZIDNLDRXBNWZGMVUSKVZMDTUELBMLPRWBTIAHWIFMZPGIEJBGESVUQJQPSYZRLXNIDLMCXENEQQAZDCBKTTCCEIBLISNTCXSYKYSZHLWNRPVMONKNPVWXBDXPTFCVDFRJGKYJLURGHQVXAATKVOQDRNSGKKUUEMIAIOGHYYCVHSJMWFIVCRKJWOTDROQCAPPXUMBTWXWOBOYAOQHPGLAGFUWEGFPHAUQF");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.3619945894124541);
    msg.setSource(48978U);
    msg.setSourceEntity(2U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 150U;
    msg.step_number = 57U;
    msg.step.assign("FHSNHXDLWNTZKRAIMXOUWSVROFYRXJHBXXCYDMTVGAEKZQDAIFPQEASQIOHYJZXCWTSJKMLPVJDHYDUZMBNWUXKYZGMHQHIWBOKRJAYIEPHAELPOKBYZIKPPFERZNOJTGKNGBAGGFCVYMJEITWSEJZBVQSVBUDNTNPGQVJCKLOWTMIFCGNTRVBTGBHUQCSICGWULYUZFLSNLOCLOOJVS");
    msg.flags = 212U;

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
    msg.setTimeStamp(0.6102524401495512);
    msg.setSource(54718U);
    msg.setSourceEntity(15U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(136U);
    msg.total_steps = 124U;
    msg.step_number = 185U;
    msg.step.assign("QXJQALPKFNTFUZCMIWFYUJYOCGVOPVVEKKAJYDJBHVNATSJEWPMFXDEUMXAGFWSPQZPBGUIOSVNGBNCHDNROHSYXLAIQBFPOXOWILZSUJPWZNRMHUZQHBUKWAFYHWXRCGSDDSVEPZECMLYILUSQCRVBKGOKGTDRTWWBODPZLLMXXIIELJLVMQNCEGDFXRFZDTWEQYBZNTJVTNHQDRSMUJR");
    msg.flags = 81U;

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
    msg.setTimeStamp(0.5896874747063005);
    msg.setSource(26985U);
    msg.setSourceEntity(142U);
    msg.setDestination(30751U);
    msg.setDestinationEntity(136U);
    msg.state = 82U;
    msg.error.assign("VQFTUDDYLGGBYOLKLVQSRCYMRBIFBLAKZYVB");

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
    msg.setTimeStamp(0.42531524864493386);
    msg.setSource(22878U);
    msg.setSourceEntity(67U);
    msg.setDestination(24826U);
    msg.setDestinationEntity(249U);
    msg.state = 181U;
    msg.error.assign("GDZCMTPKNCWPJPKRSASPLHETIFHBMIMRTIEGZBQNLQTJOFYVPKIGKARGYLZMVHSJWODITRWXCAVOXZUTXSGBLONHYLOBYKRHBPECTCZQZQFJAIXVPFYYZQURXEACAOPUJHHHEQWAOURLONUVYQLWIWGLLEWNHDMUFJMFDMNSDKKMUJBICUOIEEQNFSRDZWDBWNSOVSZRFXNTMKKJVJVADXXXSPAGDLTIYUC");

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
    msg.setTimeStamp(0.013321910724647723);
    msg.setSource(401U);
    msg.setSourceEntity(119U);
    msg.setDestination(62047U);
    msg.setDestinationEntity(228U);
    msg.state = 34U;
    msg.error.assign("ZERCGXIECKOOJNKSTLYDJOLXODNSYUZVNFLSZAXAHEHXNMKAWEUZFRJUMTTXTBJWDUHPJVZYHFTINLWZBOIUMNLRPTQDAYWQFQDBWXEJLKVQRIWCOSTFFTPAUQASPNYYDGUXPURBGDSFYVPTBARZGPREXQICJVCDLPWAKFVMRDJCJELBUFZAKVCQIOBNXGNMAKVWUPESHCGPBMEOYZQSGHVWKYIMHHMYIOB");

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
    msg.setTimeStamp(0.6070884300016479);
    msg.setSource(10237U);
    msg.setSourceEntity(175U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7920931345184946);
    msg.setSource(57588U);
    msg.setSourceEntity(221U);
    msg.setDestination(6554U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.11100239397944067);
    msg.setSource(64623U);
    msg.setSourceEntity(59U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.646771915337316);
    msg.setSource(37736U);
    msg.setSourceEntity(20U);
    msg.setDestination(19392U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.805532699515634;
    msg.lon = 0.17687653156613858;
    msg.height = 0.13531029960767282;
    msg.x = 0.7919378227746651;
    msg.y = 0.1960649264199753;
    msg.z = 0.4407918251448115;
    msg.phi = 0.1739114160121077;
    msg.theta = 0.060943035589390626;
    msg.psi = 0.08402082834033964;
    msg.u = 0.8088999843295701;
    msg.v = 0.9069825725256259;
    msg.w = 0.10272418435117203;
    msg.p = 0.03000578567930645;
    msg.q = 0.5632678296992064;
    msg.r = 0.927675524163422;
    msg.svx = 0.6573353752324855;
    msg.svy = 0.2812953048128515;
    msg.svz = 0.394902733765249;

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
    msg.setTimeStamp(0.7528187329665997);
    msg.setSource(30613U);
    msg.setSourceEntity(9U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.5047388976543948;
    msg.lon = 0.18579518023305397;
    msg.height = 0.13809529850554203;
    msg.x = 0.3032690910582697;
    msg.y = 0.5099664551377333;
    msg.z = 0.07601121560329072;
    msg.phi = 0.26925533316074557;
    msg.theta = 0.9189739493792072;
    msg.psi = 0.8004848626581023;
    msg.u = 0.19177628934619773;
    msg.v = 0.8862356826942006;
    msg.w = 0.16483904085250123;
    msg.p = 0.2013073849711957;
    msg.q = 0.8288162647580524;
    msg.r = 0.007755398387251811;
    msg.svx = 0.1927739785194701;
    msg.svy = 0.24799474153678414;
    msg.svz = 0.8158597009952286;

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
    msg.setTimeStamp(0.19737482371990633);
    msg.setSource(60494U);
    msg.setSourceEntity(186U);
    msg.setDestination(65275U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.12092306004793074;
    msg.lon = 0.3155635309629623;
    msg.height = 0.8615471317967884;
    msg.x = 0.8832490065046964;
    msg.y = 0.1919779623625918;
    msg.z = 0.3799452544342854;
    msg.phi = 0.24110272229713814;
    msg.theta = 0.8132411123567225;
    msg.psi = 0.8718084165385583;
    msg.u = 0.4184981661857403;
    msg.v = 0.01890428206641459;
    msg.w = 0.061568400601303974;
    msg.p = 0.24912000267765977;
    msg.q = 0.634343081567572;
    msg.r = 0.7605174354780981;
    msg.svx = 0.5452516162842164;
    msg.svy = 0.3590475968550796;
    msg.svz = 0.4158796518262684;

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
    msg.setTimeStamp(0.6431877859659227);
    msg.setSource(29806U);
    msg.setSourceEntity(5U);
    msg.setDestination(2954U);
    msg.setDestinationEntity(107U);
    msg.op = 251U;
    msg.entities.assign("CGEKBBNKRJOGYYQXOHZNHASWWMTZDVLMFDDMRTBDAZFIGRYLVBWNHVCCXOPGPCFCMRYQMWLTFOGFFFAKUVXTKUZELHOIQUNSGAPUJIEZKJHSSBPZDSBLENCQLUIXGRSFDLDKLCETRGSYYCLSUTNSEEWPJORMAUPWOZUHJVDHAHVIWJWA");

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
    msg.setTimeStamp(0.517637951664678);
    msg.setSource(19391U);
    msg.setSourceEntity(245U);
    msg.setDestination(39489U);
    msg.setDestinationEntity(238U);
    msg.op = 194U;
    msg.entities.assign("PNDJLCPSYJZGFHXXTKTZVKILNRHPLBOHOLZSYZDRMXRSZEKYGUTPKSQQASDHXYBNDFVNAXUXJWGAGEARIZTXSJZGDHINYFOILWYFAIHQIOJQIEUBEBEBPXVVJZUSAJVCUBWMROKMOAHUQOBYDQEDJTNZTF");

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
    msg.setTimeStamp(0.7107326356144589);
    msg.setSource(23675U);
    msg.setSourceEntity(156U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(25U);
    msg.op = 165U;
    msg.entities.assign("XMTTUFXJLVXJSMJCEOAREKAUDYPDBZRGQIFRMYIKRZYFPNTMWOWUAZLBHZCCIEAFTQQPLFLIIZIYABPPZYUDSTPUKQJLRVVRZNRGWGDMSCXVUWIDANUFYJUPQCMNAJWOKBEDKSJTVKDMCRWHNQGHHXQBOUUAEEGLEOHVLTGJFFFHWNHPBXVOBMBDRTSVCGVHICWEKESKTGZSSPJLNCZOAHFDBVZIARP");

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
    msg.setTimeStamp(0.8257191714810924);
    msg.setSource(35702U);
    msg.setSourceEntity(69U);
    msg.setDestination(39757U);
    msg.setDestinationEntity(140U);
    msg.type = 160U;
    msg.speed = 9393U;
    const char tmp_msg_0[] = {-107, -86, -87, -110, 34, 4, 52, -100, -122, -69, 69, 81, 69, -46, 38, 101, 81, -123, -83, -72, -27, 108, 115, -10, -27, 120, -17, 94, 105, 27, 39, -113, 73, -74, -44, -2, 75, 89, 21, -108, -102, -18, 20, -116, -37};
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
    msg.setTimeStamp(0.9248917974301507);
    msg.setSource(18483U);
    msg.setSourceEntity(40U);
    msg.setDestination(45611U);
    msg.setDestinationEntity(169U);
    msg.type = 46U;
    msg.speed = 36644U;
    const char tmp_msg_0[] = {-91, 20, 105, 115, -65, -1, 76, 119, -25, 96, -118, 73, 74, 12, -21, -21, -49, 68, -13, -28, -72, -52, 14, -110, 74, -34, -90, -99, -29, 25, 50, 114, 113, -50, 61, 31, 88, 39, 4, 81, 105, 40, -81, 43, -100, 118, 99, -127, 3, 25, 48, -22, 88, -37, -117, -4, -102, -99, 99, 102, 8, 123, 34, 109, -55, 105, -59, -110, -19, -31, -64, -47, -31, -12, -20, -97, 112, -100, -118, 25, -17, 75, 37, 8, -111, 55, -95, -125, -74, 51, -100, 47, -92, -6, 36, -113, 105, -35, -70, 19, 42, 51, -48, 126, -44, 107, 48, 106, -37, 25, 88, -80, 31, -41, 75, -42, 91, 114, -82, -65, -118, 75, 23, 58, -37, -34, 74, 17, 119, 92, 81, -57, -110, 11, -1, 119, 15, 22, -55, 102, -35, -45, -125, -123, 67, 6, -1, -65, 49, 107, -110, -122, 95, 93, -57, 111, -18, -32, 78, 105, 10, 12, 39, 71, 43, -5, -83, 45, -68, -66, 39, 15, 1, 108, -121, 25, -15, 17, -68, -23, 32, 56, -22, -94, 32, 95, 92, -31, -18, -116, 88, -121, -62, -23, 105, 0, 67, -114, -98, 68, 71, 0, 124, -20, 10, -49, -20, 13, 61, 49, 3, -26, -70, 78, 37, -116, -91, 35, 126, 89, 30, 121, 18, -127, -55, 121, 123, 40, -89, -43, -69, -55, -11, 30, -121, 101, -68, 36, -101, -34, -11, 33, -123, -61, -5, 126, 43, 81, 5, 110, -113, -100};
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
    msg.setTimeStamp(0.7949700261433553);
    msg.setSource(4146U);
    msg.setSourceEntity(102U);
    msg.setDestination(53323U);
    msg.setDestinationEntity(209U);
    msg.type = 224U;
    msg.speed = 49584U;
    const char tmp_msg_0[] = {96, -37, 42, 54, 100, -4, -46, -80, -127, -113, 34, 37, -105, -6, -76, -69, -76, 29, -109, 52, 85, 61, -10, 48, 19, -21, -66, -19, -2, 125, 53, 126, 106, -71, -30, -126, 84, 53, -55, 85, -114, -11, -69, -25, -73, -63, 66, -61, 4, -91, 122, -32, 86, 74, 107, 44, 90, -104, -118, -11, 37, 90, -116, -114, 56, 104, 41, -86, 83, 7, 25, 96, -83, 2, -30, -19, -67, -52, -101, 95, -52, 80, -56, -81, -108, -86, 26, 32, 116, -16, 66, -24, 58, 86, -124, -72, -10, 24, -45, 32, -14, 105, -110, 99, -117, 1, 79, 63, -84, 35, -100, 24, 67, 101, -28, -101, -10, -103, -86, 37, 54, 0, -23, 75, -82, -115, -76, 83, 115, -82, 49, 75, 87, 4, -67, 110, 73, 100, -105, -86, -64, -50, -111, -16, 20, -53, 27, -16, 69, -127, 112, -87, 72, 103, -59, 126, 2, 46, -90, -116, 90, -57, -115, -54, -115, -107, -101, -11, -45, -40, -80, -87, 67, 86, 122, -14, -92, 29, 48, 68, -53, 53, 106, 22, -11, 51, -5, 63, 74, -78, -30, 31, -104, 19, -66, -94, 69, 125, -83, -46, 36, -41, 65, -10, 17, -124};
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
    msg.setTimeStamp(0.7944654467743887);
    msg.setSource(10418U);
    msg.setSourceEntity(219U);
    msg.setDestination(31653U);
    msg.setDestinationEntity(132U);
    msg.available = 2290506670U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.7135469066191135);
    msg.setSource(15421U);
    msg.setSourceEntity(167U);
    msg.setDestination(39802U);
    msg.setDestinationEntity(222U);
    msg.available = 2947756371U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.10367501463221107);
    msg.setSource(5871U);
    msg.setSourceEntity(100U);
    msg.setDestination(32158U);
    msg.setDestinationEntity(5U);
    msg.available = 2073694597U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.022704057623822216);
    msg.setSource(62137U);
    msg.setSourceEntity(227U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(86U);
    msg.op = 11U;
    msg.snapshot.assign("OQJSQVKWLMYWKWUXYKDWDTCUPTLQITNJCZXGCLJNVOOCLKUBDTNZNOSJNJYPKQBMSIFCDUQEEMFRYI");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("EPZUGFMKVQLNKYWJTSAXMHDSYEWQKJLSQYINBXVHDELUFRRDOVSQWOCDIRPLKBQSRUHDERRBLGDVIBADGXAYOPOHZOWJPEWJ");
    tmp_msg_0.visibility.assign("DFQYTARNCXGNNCQNVBEJGHAODJGBOIOOQACKTLYWHSBKRWMLTZEMVCWJNKISAEVVTEGGAEMPWBFBPJTLZPOK");
    tmp_msg_0.scope.assign("OFTFNELUNRCSSVBYCCDMAYICJUWAGSXKDLBTWKQAKHVZNTFZBZWGADZQWNJXHUEZIVCYXIFYLEKJMQT");
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
    msg.setTimeStamp(0.030787725773278263);
    msg.setSource(31109U);
    msg.setSourceEntity(35U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(46U);
    msg.op = 237U;
    msg.snapshot.assign("RLYWIHGFVQVGMPVTTNKWQPPETHHMJJNNZMPQBCCOITFJJPBEYWWVNFOGPZCADENDMLMVBQYZWARAEDFURGMYXNYABZRQAERGOIXAHDSVPIOOLGLMUECUADZRCFTEKGHRTOXXZSVYLEQMNRQTQAHUOMWILJHDPXW");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 243U;
    tmp_msg_0.reason = 20U;
    tmp_msg_0.value = 0.11437069844564407;
    tmp_msg_0.timestep = 0.8000083149762236;
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
    msg.setTimeStamp(0.1623766809503313);
    msg.setSource(30761U);
    msg.setSourceEntity(219U);
    msg.setDestination(17145U);
    msg.setDestinationEntity(91U);
    msg.op = 153U;
    msg.snapshot.assign("LWSSBFMIVMIEOECKPVFPIYZRYFHMHPSFCZQWUTGOCBXAHIBGNQIWFQTNKHSRHVKEBAZERXNNPCQAPDURHAUXQWBYJGFSESNOYBRZYZYKUVHDUQJGAZIMEDFTNUMVCWYOYXZBIXLJKUGMTVAJHGXESCQBGNARWQKFJCEZDOPFGLHKVITYAEXNTLRLHRBLMLGNLBUYXPRLDPTDWXTRPUWKCLGWQJ");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3303199155U;
    tmp_msg_0.lat = 0.21939607802052496;
    tmp_msg_0.lon = 0.228763888025187;
    tmp_msg_0.height_ell = 0.19361818327771796;
    tmp_msg_0.height_sea = 0.7255668861960531;
    tmp_msg_0.hacc = 0.5972551899065336;
    tmp_msg_0.vacc = 0.25110921303024547;
    tmp_msg_0.vel_n = 0.23502381799224914;
    tmp_msg_0.vel_e = 0.2066668232472022;
    tmp_msg_0.vel_d = 0.9219314956700652;
    tmp_msg_0.speed = 0.19268581283967412;
    tmp_msg_0.gspeed = 0.9612904128054571;
    tmp_msg_0.heading = 0.6209491616748896;
    tmp_msg_0.sacc = 0.4023378940315081;
    tmp_msg_0.cacc = 0.019152447545148332;
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
    msg.setTimeStamp(0.526142888902406);
    msg.setSource(59600U);
    msg.setSourceEntity(36U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(112U);
    msg.op = 99U;
    msg.name.assign("BJGYOKIHNPVOOWHTKXRAYSJRICVDSQMNYGOYOSISHHWKKFEBGAFAJJTZGDMREXETZJKJDEEWSSLIZHMZLIDWFWNUTHTBHDQWPMTUCMOJDPBRCPBFPFQXSNEYAAVTGMBXQIKUBAXUYFCLZUKJQVKERGVD");

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
    msg.setTimeStamp(0.23763773141920685);
    msg.setSource(7904U);
    msg.setSourceEntity(90U);
    msg.setDestination(11954U);
    msg.setDestinationEntity(155U);
    msg.op = 196U;
    msg.name.assign("INFRFVXVIOBAXGXJQIDBXKOYMJFOCLZGWISAYBYMQVEAKCAJXSKOKBTAPRDLHIQFHCTXHPCWMQBYZLNQMKNMEYCGLDBXKANZVUVJWEYPQQVUPHUOJ");

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
    msg.setTimeStamp(0.28070369006570006);
    msg.setSource(34977U);
    msg.setSourceEntity(33U);
    msg.setDestination(45752U);
    msg.setDestinationEntity(147U);
    msg.op = 81U;
    msg.name.assign("TYWPHOEKKSUQTMSAHNBXCONMRROYFTNVMTPLB");

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
    msg.setTimeStamp(0.8738560108321524);
    msg.setSource(17015U);
    msg.setSourceEntity(29U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(123U);
    msg.type = 135U;
    msg.htime = 0.0557412033767557;
    msg.context.assign("HMSQVYAEMDOTEGPGNUHXAODDCBVAIYKUTYBSZUKDYQNANKIYRPCSICMTHQLQGUJYENEPGYNFWVBEEUICFTMAMXFYWBDK");
    msg.text.assign("TNKXHHRSTOJJKWWSXNZDMZXPPQLBLQWMIWDDUBPQUYKSVGFRZFCCUXKCIBMFTDYJCBHVSSCMCRGRAHZAACFBYGHYSNYFJZUQMXUWVXBLTCGNAVQHFWPHLXEVDIACS");

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
    msg.setTimeStamp(0.5009972750315721);
    msg.setSource(28092U);
    msg.setSourceEntity(227U);
    msg.setDestination(31008U);
    msg.setDestinationEntity(177U);
    msg.type = 129U;
    msg.htime = 0.8878623738706463;
    msg.context.assign("CGIKYTKBRRVKUXBPJZJZFCIETMZWDDYCEXXHJOYFODYXRNZIYSXWOLQIWBIIGKTOQQDOSNUOREUWEYUTKEJZSAIQTVJHFYANG");
    msg.text.assign("UBQDBPPEDOFZYAVKQKBEZPNXXWDIRHVANNMM");

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
    msg.setTimeStamp(0.6868988338365977);
    msg.setSource(57380U);
    msg.setSourceEntity(2U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(80U);
    msg.type = 103U;
    msg.htime = 0.14406569768940292;
    msg.context.assign("EVAMQTAHNNOLTRYZNFKHOBLPNNJYUMQNKJDPKETDKQYLVVEIWRRWGUILWLOXBURUPWENCJJOAVQUJBLGCFLABEBPYC");
    msg.text.assign("PJYDSVYQOFMWCQCMVGXGXDRCQIGZKZPUKOUXIAACOJSVWNUR");

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
    msg.setTimeStamp(0.01275631443496239);
    msg.setSource(56288U);
    msg.setSourceEntity(62U);
    msg.setDestination(26505U);
    msg.setDestinationEntity(14U);
    msg.command = 26U;
    msg.htime = 0.881105906067682;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.htime = 0.09307779529252647;
    tmp_msg_0.context.assign("OPDKSVAILOKGSTBHEINAOSADPHKDMHGKZEVURODXGPKYQIWKBXBUZNFBTYQTMLRXWMWQJGEZOBXRRSXDYIIPWLEIVGGCVCQJ");
    tmp_msg_0.text.assign("BFMXFZGUAKTMDNTWUCWMDNYSMYPVVCQRFREWINJZNCETHKCKYFDSJXABDILVFBXGPLBDTKLJPADQQIZAWGUOEGMTQTENPRUXZTAVQPXZHZJVJXXLIJMSHZNQHMLRLXPYONDCJJRUGVCYWPHSYAWNHKOSDBJYHOBDRBJSPZLGVQIIQOX");
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
    msg.setTimeStamp(0.4363092078933749);
    msg.setSource(13259U);
    msg.setSourceEntity(204U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(181U);
    msg.command = 248U;
    msg.htime = 0.4705138487764683;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 148U;
    tmp_msg_0.htime = 0.3729556892615786;
    tmp_msg_0.context.assign("SNAFINLXFGEAJPQPTMYMULHWQGKZIFLLOJIWMMJDAYSVAUNBKHXIF");
    tmp_msg_0.text.assign("ZDDACVWWGJLIFQXXTPAULXGIRLSXSXDCYHIGHBJMOAXVCGZREVFFJNJYAUGJOIHAEOGEVJNCPOEMUFBDZWJSRMPCPNEDQLDNTFZLEKRVVJLGQMKUXYCGRXECOYTHKLOAALZSHRPOWIESBRVBMQKNYHNTCTHKDBPMBANWFOGPWYHMIFPSEEKVUBYRUJKWRTWQMUBXTVIQDPKZMCZTDPSUBASRZNZSAHQFNKFQISDO");
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
    msg.setTimeStamp(0.923676131846908);
    msg.setSource(37253U);
    msg.setSourceEntity(192U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(27U);
    msg.command = 26U;
    msg.htime = 0.4316293583757318;

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
    msg.setTimeStamp(0.3897750272251783);
    msg.setSource(12783U);
    msg.setSourceEntity(170U);
    msg.setDestination(37331U);
    msg.setDestinationEntity(5U);
    msg.op = 68U;
    msg.file.assign("HQLINSTTMTRWKSRGVUBYSKVMXVEUYRJDIMRDGYJSMYXRRGWDKUKHIDZPFGPILNZQFDLAVHKFHXUQSHZEBCQOVDVLNAJZDWPFJEYUJPYXAXCTABFLWTMCQLVOPFROOUAKXXTQLSIJCNNCBLAEZGMUHTBVYRLWHGIGROOD");

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
    msg.setTimeStamp(0.5144269220678068);
    msg.setSource(6247U);
    msg.setSourceEntity(168U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(25U);
    msg.op = 17U;
    msg.file.assign("IFWTJMSHSIPUWCYFKFHBMPMHPZKSLBGFYYKMQOREZSPKNGAMBGURAUVLSKGJYVCDDOTNAGXNGSLLXZ");

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
    msg.setTimeStamp(0.2950354041659513);
    msg.setSource(47232U);
    msg.setSourceEntity(156U);
    msg.setDestination(2110U);
    msg.setDestinationEntity(65U);
    msg.op = 180U;
    msg.file.assign("STSFLXDQGHTNTAXJMQLOAUWD");

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
    msg.setTimeStamp(0.282656584160653);
    msg.setSource(7175U);
    msg.setSourceEntity(161U);
    msg.setDestination(41928U);
    msg.setDestinationEntity(112U);
    msg.op = 244U;
    msg.clock = 0.12126309118005929;
    msg.tz = 98;

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
    msg.setTimeStamp(0.7483780383630296);
    msg.setSource(39530U);
    msg.setSourceEntity(228U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(40U);
    msg.op = 154U;
    msg.clock = 0.6550664767928762;
    msg.tz = 108;

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
    msg.setTimeStamp(0.5951123069736199);
    msg.setSource(47769U);
    msg.setSourceEntity(111U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(232U);
    msg.op = 135U;
    msg.clock = 0.30015661699725815;
    msg.tz = -117;

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
    msg.setTimeStamp(0.992403263522782);
    msg.setSource(5120U);
    msg.setSourceEntity(106U);
    msg.setDestination(40371U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.5176572208732735);
    msg.setSource(7858U);
    msg.setSourceEntity(0U);
    msg.setDestination(54916U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.1785508166122335);
    msg.setSource(8714U);
    msg.setSourceEntity(202U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.21754710955112577);
    msg.setSource(22944U);
    msg.setSourceEntity(33U);
    msg.setDestination(6015U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("DQWANNLDOVNSLXHPYQJXIFFMNVLNHGYWBZEMWGWZRKXEXJSKVUZGNEGLHCPUQHIBWNNOY");
    msg.sys_type = 17U;
    msg.owner = 52286U;
    msg.lat = 0.923748165441834;
    msg.lon = 0.3050449700101203;
    msg.height = 0.5050499366017676;
    msg.services.assign("RTTRUWLCABIAXDMMDUKPQRZJBPVCEUREZUOPDNIBSQERVEZXFCHEISJOFPBNHGRWMYJRSMAYXYSYLPQOVRAHWFMQBBJZGMUFZSSFUGSTPKBPWSGIDGMZQFU");

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
    msg.setTimeStamp(0.47087175167921);
    msg.setSource(63282U);
    msg.setSourceEntity(174U);
    msg.setDestination(21851U);
    msg.setDestinationEntity(99U);
    msg.sys_name.assign("MIMANXKLVODVHOPVNFRISMWXIDEBULYQDUIDNZEEHWXUQMYCZCXTCTUUBASGXJOUCSWTRSIAFZVZOHJGKIMVKQ");
    msg.sys_type = 146U;
    msg.owner = 28819U;
    msg.lat = 0.8881295717462263;
    msg.lon = 0.7856452511036078;
    msg.height = 0.44201141763828744;
    msg.services.assign("GAAEEVKJOPXRKPCGTMWAKRSSTXQFNJSCBOAWMDUSTGZXBOYSQQFEXMHKUNVSLDKGIHPJRMYNWAEFZYCCXZDBNLJLJDXIBQAUOPWWYZXHPLNHVCTMDXHBGDMCBFLRPYZWNHIIFVB");

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
    msg.setTimeStamp(0.009963175111669664);
    msg.setSource(4418U);
    msg.setSourceEntity(164U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(23U);
    msg.sys_name.assign("OHPJCCHMPGEINBGSOKZPASWBJWMXWFKAIMQFRQOQZPKIHIIVRNYLDQYNWUZSHTHBYUZEWMCXBGODAVUXVKGYLDJEBICEMQGFHQTZIPOYDFOQXCVRQENKSBFLMBSWTRREGFTVNOALGLKYLAPUDRPMHJSIVWZVJFXOPJZHLURSGSBZUEOUYQIMNNROLN");
    msg.sys_type = 5U;
    msg.owner = 43425U;
    msg.lat = 0.35712280453887113;
    msg.lon = 0.3176856594923131;
    msg.height = 0.663513888608606;
    msg.services.assign("SDLRNXJOFYAPOUPBBRBYEHIPQKTLOWGOMSANWCZQKPGITWKAMMRJHVHQFHXBVMBUYVEUAUPSJEXIPDTXRBUITHEENKNBWAJTJNGCQRPIAGEWVQLWZCOSYQOBNASXCKDCHQFZYRGMARDJVHWGJUKUCMSRLZZEQLYNPIVZNUKLOSTOUVXYVUXPGVLFQSKDIFFFYGRLGKCKYHLEJXFVEBNWLMDSTZPTMIZMJAQFZRTASOIDDBXYNIZHFWWO");

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
    msg.setTimeStamp(0.7140058625843821);
    msg.setSource(2706U);
    msg.setSourceEntity(40U);
    msg.setDestination(24940U);
    msg.setDestinationEntity(228U);
    msg.service.assign("DFZXGWWIUTBUOAXEEZBYRVUILZKJBXAHCKFEYJHWWPOEFFBMGLIUUOMDCZSITHOKYMMXQKITVNGMKWNQYODGHPBEKDHGCNSRTDGSWQOFBJFTDRRAADENADSPALLBJMYHMMSTWEQKHVRXJJRVXCZWRHFWQAXGRYEAPNRJDVPOLKGNPNSSZCFQXOHDVRXUINXVVAVLYIQFYWTMNCTLCUHM");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.9987266739271462);
    msg.setSource(61617U);
    msg.setSourceEntity(168U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(52U);
    msg.service.assign("UVZIKGERTDJLBJHSVAZABBKOHFYZEGHFVBRCXITSWEPBGHSOYWIMCVUFHPILCIMANZEOSCPMVFEJXXLQOQOBONGJAVJDQXWLJCYFBMUHSRWEKUNIZGRT");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.5046147705643859);
    msg.setSource(32325U);
    msg.setSourceEntity(40U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(176U);
    msg.service.assign("BMAVPINRGBWCQCNAZCFKJIWJHGTACEVXIZTSCBAHCYLLEWUMKAWBJO");
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
    msg.setTimeStamp(0.8052777834651597);
    msg.setSource(42032U);
    msg.setSourceEntity(250U);
    msg.setDestination(9671U);
    msg.setDestinationEntity(64U);
    msg.value = 0.34793191884789376;

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
    msg.setTimeStamp(0.3336582952226633);
    msg.setSource(31950U);
    msg.setSourceEntity(78U);
    msg.setDestination(28119U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5938185932927196;

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
    msg.setTimeStamp(0.1210861526531869);
    msg.setSource(31134U);
    msg.setSourceEntity(119U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4070196209501379;

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
    msg.setTimeStamp(0.39986047171269123);
    msg.setSource(39380U);
    msg.setSourceEntity(8U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(204U);
    msg.value = 0.005776631206433902;

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
    msg.setTimeStamp(0.8875941695161828);
    msg.setSource(54052U);
    msg.setSourceEntity(167U);
    msg.setDestination(41481U);
    msg.setDestinationEntity(102U);
    msg.value = 0.922813749175121;

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
    msg.setTimeStamp(0.13366588218601094);
    msg.setSource(3617U);
    msg.setSourceEntity(173U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(77U);
    msg.value = 0.031038613237017953;

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
    msg.setTimeStamp(0.9349054395051086);
    msg.setSource(18145U);
    msg.setSourceEntity(155U);
    msg.setDestination(18524U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4765890818658389;

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
    msg.setTimeStamp(0.3026903650671744);
    msg.setSource(55053U);
    msg.setSourceEntity(149U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5148566857643221;

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
    msg.setTimeStamp(0.5419075731858913);
    msg.setSource(30079U);
    msg.setSourceEntity(80U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(52U);
    msg.value = 0.9213741111453327;

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
    msg.setTimeStamp(0.9296542335744078);
    msg.setSource(49789U);
    msg.setSourceEntity(201U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(37U);
    msg.number.assign("NBZQHYTDXFQAFODPVXWFUGWXMKNCSRNZJVPCOCXMLRNHUGZRUHGUPVMALJDMCPWYAPUUKFMYYOEAEEASIOIKLSKZSVGTHXSDLQWEDNRDOREOVZLYEQZXFWHYUBFHWNMJTEZBMMQARWQBUQ");
    msg.timeout = 62662U;
    msg.contents.assign("YQYNABOPPEHXUNISGCXDOGCZJZPVITBNCEZSDKVAEWPIGTPOFKKNHYTNIRCVBANOXSDIYEGMWUEPZXQRJOJWCHBLRRCS");

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
    msg.setTimeStamp(0.05629481056174945);
    msg.setSource(1997U);
    msg.setSourceEntity(7U);
    msg.setDestination(53783U);
    msg.setDestinationEntity(73U);
    msg.number.assign("DZFNEHRLCSKTOWZFUYAKPFMFQNJLAKYWKDNRAQRFTXAKEVVBQFHRCTLRJFLCJWJOILGTMJZRTMCHUNYOYOVHSMGBEBXCOLDPEVVYOGPIFVNTZGUGOCUHAKEBGXBJUVWSVWVKYQCOPRHPOUXIHYNEOFRQVSINSPDPUXEXACPTQNQYDYSGWIWZWJZQXBMLXNAPPTIDTYAKXADDDJLKJMUZNJHSUSKB");
    msg.timeout = 2570U;
    msg.contents.assign("UORIZWRUTZCGAPUDHPXILEFEQWCIVYPTWVRJRYSXNZYAILURLAWTPTGDTJOPXXAHNXKWSSNECIVLUEQRIGWKTYUJCHFOQSWVBJYKJGKMKZBIOMKDGLOFBBCOTVPLAMPYNNDQYFHBTFHOZLAJXMVIEXDOQHEQUIIMFNWYF");

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
    msg.setTimeStamp(0.8475450029603059);
    msg.setSource(8881U);
    msg.setSourceEntity(14U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(184U);
    msg.number.assign("OTGEPBOVZOFYMVGLLWAXQRHQEXBPPWOFHTCZCBCSFWSTUBJBZHXAVLCEFQKJXNSMYXFSPDIRBPPIEUSDIDWEYXTDBYNRQIFYXEGOMIGLQRACJUKNJ");
    msg.timeout = 19588U;
    msg.contents.assign("WNASXWONMHTUNLYZCAXKIPIDLLBKYVLOVDSYXJZSVMMRMDAQBISRIIVJEWBXDJUFAZHDQNCEJCCTUJGTTVZJEMUPDGXOPPBOFBUYBORERQKMEAHBSDYVIQUZLJGETMRTPFKAHCNSBCCBXFNOLFIJDKHLSRDWFGUWPAHOOCPSIWAZRHZSAVPXZYOKNKQSRQ");

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
    msg.setTimeStamp(0.401943244928858);
    msg.setSource(18685U);
    msg.setSourceEntity(168U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(91U);
    msg.seq = 3238914500U;
    msg.destination.assign("DTALLYCFPHRL");
    msg.timeout = 15787U;
    const char tmp_msg_0[] = {67, 105, -32, -35, -23, -44, 25, -126, 7, -55, -57, 41, 6, 9, -95, -52, 58, -123, -30, -97, -79, 116, -72, 102, 57, 121, 101, 83, -92, -98, -48, 14, -113, -24};
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
    msg.setTimeStamp(0.8319921165243492);
    msg.setSource(34024U);
    msg.setSourceEntity(215U);
    msg.setDestination(8683U);
    msg.setDestinationEntity(192U);
    msg.seq = 873598523U;
    msg.destination.assign("SINICMLRGXBRAUKVLZQRTKJRZLOMIMYMNTPESBWGKCVZWHHAYTOCOZGWOIGDVDBOJZWSSMWJWFHNTAIKCPULDPHSXCRBHENK");
    msg.timeout = 32554U;
    const char tmp_msg_0[] = {-52, -1, -6, -1, -86, 102, -97, -97, 121, -112, -14, -82, -128, -99, -66, 96, 57, -42, -96, 81, -2, -102, -96, 122, 36, -74, -74, 126, 66, -79, 86, 85, 85, -29, 76, -33, -10, -61, -100, -43, 117, 11, -59, 82, 76, 40, -116, 118, -119, 111, -6, -46, 36, 30, 119, -78, 90, 53, -71, -47, -78, 8, -123, 4, 12, 20, 22, -100, -9, -102, -115, -103, 93, 92, 116, -70, -91, -95, -109, -42, -104, -78, -115, -106, 39, -11, -104, -106, 61, 7, 126, 57, -124, -18, 6, 81, -112, 30, 120, -105, -59, -109, 24, -14, 31, -115, -86, 74, 116, -73, 54, 83, 108, -90, 47, -46, -89, -79, -38, -18, -118, -42, 44, 2, 75, -111, -101, 56, 35, 106, -63, 6, -29, -43, 12, -13, 70, -117, 104, -91, -100, -85, -45, -13, -85, -69, -100, 89, -38, -63, 39, -102, -53, -93, 59, -18, 48};
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
    msg.setTimeStamp(0.4214165040106549);
    msg.setSource(31334U);
    msg.setSourceEntity(135U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(203U);
    msg.seq = 3421763890U;
    msg.destination.assign("LOMRFOEBUCBSGENYQLUSSTCDPRCBXHVCWUNGQISRPVEYHGUYPJKRDUQDQYNKVRBLLNOKSPPJWEAIEHZMAZDLKIBDUASIAFPJWGVTFHLPSCFZRCIZBWUFCTWDMAXGXGBHWJTRJWLOKYRLQZJFOBZVHKHTTOHNGSYMEUYRSTAEOIXFNJYMXA");
    msg.timeout = 22437U;
    const char tmp_msg_0[] = {-125, 52, -110, -56, -64, 79, -2, -85, 99, -26, 71, -107, 113, -128, -102, -92, -11, -92, 84, 62, -94, 7, -69, 103, 55, 89, -33, 110, -75, -16, -106, 94, -27, 27, -46, -5, 86, 58, 77, 51, -45, -79, 46, -67, -115, -65, -79, -89, 70, -92, 98, -101, -101, -113, -97, 15, -92, 61, -59, 45, 114, -65, 99, -9, 28, -32, 76, 107, -8, 52, 26, -32, -4, 105, 106, 41, -63, -71, 42, 97, -32, -33, -17, 78, -16, 29, 121, 118, 61, -16, -109, 99, 88, -82, 90, 15, -58, -63, -98, -60, 9, -37, 122, 52, 124, -56, 108, -32, 86, -107, 2, -12, -125, 15, -44, 40, 16, 77, 123, -108, -47, 3, -101, 65, -50, -83, 15, -106, 83, -57, 110, -47, 112, 22, -65, 19, 109, -42, 45, 12, -79, 44, 52, 8, 44, 57};
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
    msg.setTimeStamp(0.9283996865915821);
    msg.setSource(29953U);
    msg.setSourceEntity(131U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(118U);
    msg.source.assign("FZBQEGCILKIVOQJTERTSETNKJTUWFAMTNGRONNLEAFRYSZNHRQOEDLCDJGKKSVKFELDDIZMUCQSAUTTXMRHWVSCYCOIGZXHUEFCMYZXBQQRIOWGEPNBMKLTQBNHLJKSYPFUZYJHXYUOWVJFZCOGDOHGOWKGPABIITPVRX");
    const char tmp_msg_0[] = {-14, -10, -111, 60, -27, -24, -9, -9, -18, 88, -124, -102, -23, 76, -113, 63, 49, -41, 9, 75, 109, -76, -50, -55, 28, -4, 90, -43, -108, -88, -104, -52, 99, -124, -96, -112, -37, 68, -94, -81, -70, 93, 46, -126, -50, -74, 0, -26, -4, -31, 58, 90, 78, -34, 36, -70, 113, -25, -30, -32, 35, 87, 68, -10, -3, 12, -37, -68, -123, 80, -106, -57, -19, -98, -50, -44, -29, -100, -37, -61, -84, -75, 33, 9, 71, 63, -13, 102, -37, 9, -29, -33, 51, -35, 109, 109, 116, 76, -50, 39, -51, 64, -72, -65, 31, -105, -24, 89, 125, 122, 98, 5, 32, -21, 117, 41, -32, -78, 99, -3, 107, 109, -52, 111, -31, 106, -19, -111, -1, -101, 68, -120, -84, -55, -38, -33, 21, 121, -40, 108, 1, -126, -102, -47, -122, 58, -3, -78, -8, -77, -127, 38, -35, 17, -46, -110, 33, 2, -27, 47, -36, -36, 107, -1, 47, -42, 26, -57, 16, 0, 118, -100, -78};
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
    msg.setTimeStamp(0.9393156675221304);
    msg.setSource(62185U);
    msg.setSourceEntity(13U);
    msg.setDestination(28245U);
    msg.setDestinationEntity(32U);
    msg.source.assign("CKPAIPADYNMBOEXKKUCVRREHRJCDDCZFSFIQUNRABVVJYFIBREINFFNNCXVAAUOKMJEGHFZWTLKSTMBTKV");
    const char tmp_msg_0[] = {103, 27, 58, -42, -107, -82, -102, -124, -73, 110, -125, 42, -62, -16, -16, -71, 77, 47, -37, -125, 37, -89, 51, 62, 48, -92, 17, -68, 112, -104, -83, 55, -102, -51, 52, -92, -66, -82, 105, 90, -86, -105, -110, 118, -75, 68, -103, 8, -128, 48, 38, -124, 3, 82, 91, 96, 89, 49, 5, -15, -79, -8, 84, 56, -7, -46, 97, -5, 25, -125, -21, -59, 55, -118, -61, -58, -54, 58, 55, 42, -116, 29, 104, -54, -99, 32, 110, 41, 49, -36, 126, 84, -126, 98, 31, 50, -66, -21, -110, -109, -74, 72, -101, 109, -37};
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
    msg.setTimeStamp(0.15794821664673664);
    msg.setSource(57462U);
    msg.setSourceEntity(125U);
    msg.setDestination(30895U);
    msg.setDestinationEntity(218U);
    msg.source.assign("GHNEFCFQRUQGMKLBAGRXRDPPQUDDRHXXIIHBNORXFDQQGBHQWYMNPVVWFJNBSHAFTAQGALPZSUNOTHKYWPSMYIBHAKMEDZXVGUKBIFJSFDTWCALRT");
    const char tmp_msg_0[] = {24, -111, 72, 102, -127, 25, 55, -101, -78, -87, 49, 17, 29, -89, 30, 12, -94, 55, 113, 101, -79, -22, -36, 104, 54, -114, 17, 113, -84, 58, -17, -106, -80, -108, -50, -64, -103, -40, -117, -2, -118, -91, 35, 2, 33, 98, -74, -90, -32, 75, -114, 85, -40, 57, -44, -3, -7, -122, 121, -44, 71, -122, -54, 20, -19, -63, -98, -88, -124, -22, -12, 23, 76, 107, -66, -88, 88, -22, -39, 0, 18, 48, 81, 98, 46, -26, 69, 69, -67, -64, 55, -2, -103, -29, 116, 73, 27, 27, 30, 73, -120, 1, -117, 101, -71, -82, 113, -10, -100, 67, 122, -99, 64, 52, -109, -99, 55, -13, -56, -117, 1, 116, 90, 95, -14, 95, 86, -123, -49, 102, -88, 113, -126, 44, 65, -127, 79, -11, 16, -47, 39, 46};
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
    msg.setTimeStamp(0.4997861323973689);
    msg.setSource(21226U);
    msg.setSourceEntity(57U);
    msg.setDestination(51676U);
    msg.setDestinationEntity(119U);
    msg.seq = 3277814185U;
    msg.state = 4U;
    msg.error.assign("YVDVKCBOUEMWHCOAXWJPDXIDURSHMJVTDDIXKRQBHIUMTQAQTFPFDZMZTWN");

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
    msg.setTimeStamp(0.2951835524176799);
    msg.setSource(25260U);
    msg.setSourceEntity(159U);
    msg.setDestination(60280U);
    msg.setDestinationEntity(160U);
    msg.seq = 1042534257U;
    msg.state = 121U;
    msg.error.assign("TQULHYQWTWFATNZBOJYRGZSKJURPIZADIBRJNESPZPVCGTUWEHWAIMORCVWHGPHAGUPDPLEFFBAYKGVMKIVPJTORNIOFJEQSLGXQZYKEBXKVSTHHABRLBXUHUEEYIVLMHZZOPUQQUCOWKFHSFDGSZEPILFTMFMMMYRXXNVDVBDCFYKLUXYYRCMOACPGINCJCFYJEDDSCEDXVRQWBLXSWVNXMGXAJQQZDDMTRNZBNCTSNJHABOOLWLNQTKUAWI");

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
    msg.setTimeStamp(0.046907067402106595);
    msg.setSource(16169U);
    msg.setSourceEntity(247U);
    msg.setDestination(23717U);
    msg.setDestinationEntity(192U);
    msg.seq = 3813293U;
    msg.state = 5U;
    msg.error.assign("CQFICMQSXXFNWKZIYKOSRAWBPAGAGWFLGEFMFTERQNZQTTDVGFNDPTWMBKBVRGWCASCLXZXADSJQZ");

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
    msg.setTimeStamp(0.48144177254876874);
    msg.setSource(44631U);
    msg.setSourceEntity(197U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("XDEBNEURYLCDXLF");
    msg.text.assign("YKUYJKQCZSGBIRLZIRTJCVRDMQIRMGBIITPDFBTNNXSHMFRXHJIESRLRNPQEAYWWQVYPBANJDPUVVNMCOWAPQKNOMRUUECFUVBAIXUXPOADACSZOGXOEGNNHFVPIUFGOSEMKQCJHLRIQTLJHZCVYXFBLGBSLHNQJVKASMHUTWWWXWSLMOOTAXYDJLUDDUSTPZSMZNVETZ");

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
    msg.setTimeStamp(0.5447712364934603);
    msg.setSource(63321U);
    msg.setSourceEntity(193U);
    msg.setDestination(29299U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("IOXMXAPFYWNLQXEQPRRHSUYNQVPOLAQNEKYIWFFCOYUSVRNJLZDKWT");
    msg.text.assign("WBSWYCLUZVCLAOHHMZUHPEYDOQNHQPQYKMVPHFWGUJZBGPWQLIINGZPVSJTGMCETXBWDJSOESYQIPBTJMVRBALUKMRZNOJQBUHAAUSLCXKYDZFETLRFWSNWOCMWOTXJIASDDLJKUITEHFJKOAECIVJBGAKYBTRVBXFIXT");

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
    msg.setTimeStamp(0.2960236464439161);
    msg.setSource(50759U);
    msg.setSourceEntity(108U);
    msg.setDestination(29367U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("YIYDLFZVSCRZDFLJDBQKBYIRDXOBRLNLOOZODTVERJTANMLQAETDAMJSUMUXFVRWHUYLNOJBKFHMCJEHJGVVLSCTWXYCSKJIQXSUXKSHGQBQEDHNNIJRKWMTYSEEFPPXYRPEUISTDXKJAZNWPHYDWWPRHNZVFCAPVVSBBLOFQUCSZCLGDWXUKXVIMGYOGC");
    msg.text.assign("JIVQEDGOETKHQC");

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
    msg.setTimeStamp(0.9262835715961041);
    msg.setSource(55835U);
    msg.setSourceEntity(4U);
    msg.setDestination(23224U);
    msg.setDestinationEntity(218U);
    msg.origin.assign("XAGSAHEFMDIYWBPUMLSFHRLLYFYSCZKCPZGYTAYHGCTNWYDJKVSVREKSEY");
    msg.htime = 0.6888926493757118;
    msg.lat = 0.030549685441629948;
    msg.lon = 0.7799441999688304;
    const char tmp_msg_0[] = {16, -21, 44, -56, -91, 74, -124, -109, -57, -21, -79, -80, -69, 123, -65, -25, 114, 103, -21, 97, -33, -116, -110, -47, -90, 122, 101, -87, 9, 42, -19, 11, -112, 43, -14, -53, -52, 94, -32, -88, -14, -75, 126, -42, 30, 102, 109, -12, 17, 8, -101, 7, -29, 34, -64, -33, -7, 113, -109, 10, -56, -40, -94, 78, 106, 20, 101, -6, -103, -86, 74, -123, -11, -86, -119, -92, 39, -24, -114, 90, -105, -14, 12, 124, 41, -123, 74, -45, 22, -36, -47, 32, -118, -50, 44, -18, 13, 108};
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
    msg.setTimeStamp(0.8584153465214239);
    msg.setSource(24978U);
    msg.setSourceEntity(5U);
    msg.setDestination(9342U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("MIXHCRDCRTQWPAQRFVMCVJDFYJNEFAHELCUHVTWLWYSUVHOSVOIBFDEKIBYAMWTLLGSGPEJKGNZYLQKYNGUACEXXNXZAWSTZOGZOEARMXBKBFTBGSWTFFJHQPXURKIASVNRQSAZIGJBVNGQDPDEDHCSHOXEVBQCUFOWPOHYMIKPNOUYJOPBLIMRGXVRKPMDDRWUIZCSNUMSAJCXRYEVMTLNFYYXTHCHFZT");
    msg.htime = 0.5629340441942621;
    msg.lat = 0.33985607639034787;
    msg.lon = 0.40013700725810786;
    const char tmp_msg_0[] = {56, 1, -25, 86, 14, -61, -122, -87, 35, -33, -10, -84, -119, 55, 55, 68, 18, -122, 23, -117, -88, -57, 15, 87, 46, 72, -36, -14, 93, -63, 124, -78, -75, 57, -69, 80, -98, 68, -65, 5, -118, 60, -39, 83, -78, 107, -20, -10, -24, 14, -82, -4, 125, -52, -61, 36, 8, 86, 38, -101, 116, -82, -39, 8, 98, -23, -48, -21, 82, -113, -83, 17, -94, 96, -75, 107, 122, -77, -25, 116, -64, -56, 125, -6, -18, -122, 53, 46, 106, -49, -20, 58, -12, 21, 6, 107, 65, -17, 81, 51, -69, -49, -42, 117, 98, -15, 86, 29, 43, 39, -27, -94, 13, -77, -48, 36, 18, 44, 17, -15, -57, -53, 14, -41, -93, -80, 41, -100, 108, -55, 21, 61, -102, -99, -13, -6, 123, -61, -86, 120, 83, -27, 57, -112, -22, -105, -39, 111, 30, -32, -116, 21, 26, 8, 42, -28, 19, 23, 8, -89, 16, -88, -43, -63, -106, -65, -15, -30, -121, -15, -28, 62, -46, 50, 114, 4, 55, 99, -19, 57, 73, -121, 22, 86, 68, 50, -6, -44, -69, -98, 5, -49, 63, -36, 84, 72, -20, 5, 118, -6, -47, -46, 4, 40, -64, -122, -29, 117, 110, 20, -90, 16, -125, 77, 37, -94, -61, -50, -65, 119, 10, -122, -118, -107, 36, -122, 111, 39, 59, -97, 119, 116, 76, -81, 80, -92, -54, -50, 75, 65, 19, 96, -26, -28, 126, 4, 117, -19};
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
    msg.setTimeStamp(0.12717586448851725);
    msg.setSource(2285U);
    msg.setSourceEntity(213U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("PWALCQJQJSLTVQONBAULDLNSREAYOOEGEXRHTGJCQEPIKVXTDLGWABIVYUQSHYNKSXCIXGMXTYVYDIIGLTVBGEGMPFAKGZMDMBMMHSSNFVBCKPTBJS");
    msg.htime = 0.9547319986761333;
    msg.lat = 0.8467365384176823;
    msg.lon = 0.8263081766555209;
    const char tmp_msg_0[] = {44, -1, -28, 51, 8, -58, 118, -86, 70, 51, -36, 91, -94, 17, -5, -67, 63, -97, -9, 8, -57, 11, -118, -118, 98, -108, -8, 118, 125, 54, -82, -116, -14, -65, -77, -90, 19, -121, -11, 92, -31, 117, 38, -114, -20, 43, -60, 104, -53, -90, 71, 105, 34, 111, 123, 94, 88, -56, 2, 42, 69, 22, 14, -5, 99, -60, 66, 122, -48, -72, -29, 25, 120, -66, -96, 60, -67, -36, 76, 97, 106, 117, -19, 43, -6, 82, -12, -75, -27, 50, -76, -19, 56, 30, -121, -103, 108, 79, 116, 30, -114, 10, -41, -1, -53, -53, 55, -124, 4, -93, -33, -48, -98, -12, 36, 82, -71, -126, -55, -42, -62, 21, -19, -103, 50, 75, 111, 0, -121, -117, 117, 87, 4, -50, 75, 20, 121, -106, -2, 4, -113, 100, 61, -1, 8, -36, -61, -64, -2, -106, -42, 43, 28, -43, -57, 91, 97, -96, -6, 113, 78, -47, -65, -71, -65, -50, 39, 103, 5, -64, 11, -115, 122, -50, 98, 106, -4, 45, 48, -39, -4, 62, -107, 104, -79, 59, 14, 101, -88, 42, 89, -48, 38, -77, -8, -119, -1, -124, 61, 100, 84, 97, -75, 40, -67, 113, -92, -74, 38, 35, -26, -57, -63, -126, 69, 4, 122, -85, 30, 51, 1, 123, 22, -64, -97, 1, 23, 78, 47, -22, -125, 21, 37};
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
    msg.setTimeStamp(0.338389910541517);
    msg.setSource(28493U);
    msg.setSourceEntity(147U);
    msg.setDestination(50877U);
    msg.setDestinationEntity(163U);
    msg.req_id = 21618U;
    msg.ttl = 37140U;
    msg.destination.assign("XTMTKNHDGJJOQOQKZXOGSJNWILEPRVOSWMEURJPWDHHFNZZKUAKQSKVBCNDBIHQRNMFZDIBKVARCTDKISNTSTHAVMQEBJZQUFRWKDJVTWLOSIAXJLXLXYGSPBINUUPCULWAEGEFVDHIYRESSOXXOCCFWGPFDICOPMWRCZACVWXBLPJLTWBGENZTFYQAAGKSCRHFERAVUEMVQZPDPCMFNGJJOHZLTYTHYBYUYQELPUGXA");
    const char tmp_msg_0[] = {117, -3, -23, -22, 78, -118, 27, 13, -16, -91, -38, 118, -43, 1, -46, -122, 31, -69, -123, 124, -94, -35, -44, -77, -99, -29, 101, -64, -113, 115, -51, -41, -72, -125, 19, 46, -45, -98, -97, -60, 98, -62, 41, -30, 108, -62, 0, 44, -23, 46, 33, -116, 106, -84, 123, 22, -58, 78, -87, -104, -6, 90, 1, -88, -85, -59, 38, -36, -101, -95, -47, -124, 116, 86, -76, -85, -97, 118, -5, -82, -126, 35, 82, 51, -66, 51, 122, -1, 91, 50, 54, -105, 42, 69, 66, -37, -64, 93, 99, -53, 81, 55, 9, -15, 64, -98, -103, 88, -42, -3, 26, -63, -68, -28, -127, 43, 80, -71, -92, -113};
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
    msg.setTimeStamp(0.2473476566538334);
    msg.setSource(3182U);
    msg.setSourceEntity(167U);
    msg.setDestination(25138U);
    msg.setDestinationEntity(165U);
    msg.req_id = 54534U;
    msg.ttl = 64005U;
    msg.destination.assign("RZTFSBBABTPKSKXUOUUKWFDXVGGIZHYFVECOIRLLIMVZTZXZWJJXMAIQAIOAAOGLDQLGNBVWCJOPZSCJPPMVWCXRUPYLUBCYXZVYSKFRJJQGOKDN");
    const char tmp_msg_0[] = {-124, -3, 75, 113, -24, -13, 126, 52, -8, -37, 125, -127, 126, -86, 55, 112, -14, -50, 93, -79, 30, -8, -57, -95, 109, 110, 113, 35, 49, -115, 78, 19, -30, -94, -120, 93, 93, 112, 75, -41, 119, 89, 65, -34, 49, -82, -92, 66, -110, 100, -60, 74, -112, -70, -10, -36, -3, 28, -86, -19, 28, 120, -121, -18, -65, -41, 106, 30, -112, 82, 26, -31, 114, 15, -76, 13, 20, 58, 30, 32, -65, 102, 39, 9, -52, 76, -35, 61, 66, -107, 8, -118, 78, -35, 34, 0, 62, 108, -108, -106, 6, 113, -41, -100, 115, -100, -83, 72, 25};
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
    msg.setTimeStamp(0.6074368566453802);
    msg.setSource(52115U);
    msg.setSourceEntity(130U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(52U);
    msg.req_id = 58393U;
    msg.ttl = 37373U;
    msg.destination.assign("CUOVHBQNUVZIZALLXTOZWOGBKBXRMHEUSLFJIVSMQCODAZSRSANSJSYSDYGDHLXEQEBPPTPIUTABZJRTFXNKCLBMNQMUVZSIWVXZBTKYYZMPDOYQXMEKMLUWAWIFJOZGQJDVCKXIGOHWEJTYCECPIYCRQOWJNLBSHECHVAVKK");
    const char tmp_msg_0[] = {-45, -54, -99, 22, 15, -90, -88, 61, 5, -2, 115, 77, 63, -106, -83, 57, -62, 14, -10, 2, 94, 46, 20, -1, -80, -78, -61, 44, -56, -39, -112, -38, 77};
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
    msg.setTimeStamp(0.7862619898651523);
    msg.setSource(53180U);
    msg.setSourceEntity(182U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(190U);
    msg.req_id = 48514U;
    msg.status = 172U;
    msg.text.assign("WZNTFWMUZHETTNTJEPFLGXUPVMBNSPHXJUKOSQBDHWLIVKVRKDAYPYFBTKXDINFNLEOWURTRMBXJXHYQXEYEHLJZLFLAZCDDRBXJNSBZQZMGSPQIYOFFGRCYXQYPOFRADUFFCENUKYTPAIHMALZOAORNXDBSGVIWKVIUHW");

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
    msg.setTimeStamp(0.7467819741554902);
    msg.setSource(46611U);
    msg.setSourceEntity(23U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(191U);
    msg.req_id = 64949U;
    msg.status = 166U;
    msg.text.assign("IGILQACJFPAXLBVZHVWVZSIWXMDSPXJZYSXRGSXEK");

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
    msg.setTimeStamp(0.005212876202148831);
    msg.setSource(63407U);
    msg.setSourceEntity(84U);
    msg.setDestination(31583U);
    msg.setDestinationEntity(247U);
    msg.req_id = 29142U;
    msg.status = 161U;
    msg.text.assign("SSNRAKONPPIRMLLQJPDMDDQYVPDWCEHBYSESPGJGFJCXRTLGABMBWKLZRPQLHAUHVJFGRGWURWTZHSFMIRELMIGHJKKSSDXZDMTTQHNNUNFOXEOLBEBFJHOWUPVDTDNXZUETEEKTBBDTSPJQCZILQYOPUJQLALVTFNYQGYUNMCHTQKVYJFIFZYKYZHFSNAMAAGBYK");

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
    msg.setTimeStamp(0.5585860304648806);
    msg.setSource(23267U);
    msg.setSourceEntity(61U);
    msg.setDestination(54325U);
    msg.setDestinationEntity(31U);
    msg.id = 223U;
    msg.range = 0.6884499741216403;

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
    msg.setTimeStamp(0.8802431643095876);
    msg.setSource(21522U);
    msg.setSourceEntity(37U);
    msg.setDestination(58874U);
    msg.setDestinationEntity(238U);
    msg.id = 238U;
    msg.range = 0.7956828956977302;

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
    msg.setTimeStamp(0.9503447424883571);
    msg.setSource(52601U);
    msg.setSourceEntity(241U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(86U);
    msg.id = 227U;
    msg.range = 0.5202019474106068;

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
    msg.setTimeStamp(0.2852984156387314);
    msg.setSource(55226U);
    msg.setSourceEntity(45U);
    msg.setDestination(58678U);
    msg.setDestinationEntity(246U);
    msg.tx = 70U;
    msg.channel = 139U;
    msg.timer = 62703U;

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
    msg.setTimeStamp(0.5862359245044857);
    msg.setSource(4738U);
    msg.setSourceEntity(3U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(132U);
    msg.tx = 205U;
    msg.channel = 187U;
    msg.timer = 28063U;

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
    msg.setTimeStamp(0.3274084695259132);
    msg.setSource(10451U);
    msg.setSourceEntity(186U);
    msg.setDestination(22762U);
    msg.setDestinationEntity(48U);
    msg.tx = 61U;
    msg.channel = 202U;
    msg.timer = 42490U;

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
    msg.setTimeStamp(0.01665834708584979);
    msg.setSource(53334U);
    msg.setSourceEntity(184U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("QWWBFINAUTFGPDSWSZGLCRNMKNXRHCACAKHPCKWKHPGVUDFFEIEXWJJLOFMMNMHETF");
    msg.lat = 0.053001104278248334;
    msg.lon = 0.18924380571530264;
    msg.depth = 0.34781070925479074;
    msg.query_channel = 101U;
    msg.reply_channel = 172U;
    msg.transponder_delay = 143U;

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
    msg.setTimeStamp(0.6995205097262869);
    msg.setSource(58911U);
    msg.setSourceEntity(80U);
    msg.setDestination(38765U);
    msg.setDestinationEntity(49U);
    msg.beacon.assign("BKXJUBKMKGOVNITPRQQGIHDJBWCILSYBRVLKVHBFWTSMKTUIZRZTIODWXMNLBEUSPFUSNNEQGBPRPWLZIXDXEOVQSNFNKCSMJQYTAFDHXKNUAFAAVGTMIORZRJHHCANCDGSKLWZZHRVURZYECBYZJPYUBVGYMEMLFUDFQCDOITNHSVQJCRVPYLTWMXPRIODJGYXPYDZMHIEPHQXWFHBOQGEFSGXX");
    msg.lat = 0.09989746133455613;
    msg.lon = 0.2867828689264533;
    msg.depth = 0.6753800108773492;
    msg.query_channel = 210U;
    msg.reply_channel = 32U;
    msg.transponder_delay = 21U;

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
    msg.setTimeStamp(0.3279809171577356);
    msg.setSource(26053U);
    msg.setSourceEntity(199U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("WGKMQYLGXPMVWFBEDGZFQXPJVTEKAJRROAWJQSHPFRXOHRRSKFGUIMCFNTBQHZBGCVVLTLKVDTNLYJYDQZDOWFBZTEVAOYMZZXUOJPVPEMQNREDQNRYWKGPJQDWUJYXCWHYMLCMVBTPCVDCRAIXGKCSNMDENLXQPNUDUIHIHFUKATCQLOBHZRWUNZIGWYEOHXYHACUIKS");
    msg.lat = 0.5730527404939025;
    msg.lon = 0.6582125058665153;
    msg.depth = 0.4982135283862278;
    msg.query_channel = 151U;
    msg.reply_channel = 78U;
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
    msg.setTimeStamp(0.562126309622779);
    msg.setSource(19931U);
    msg.setSourceEntity(167U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(147U);
    msg.op = 178U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DXGDCZCQQIBMUBWVQXYVSRUWTMWAKVFLWNCKMHBKA");
    tmp_msg_0.lat = 0.8135079000966838;
    tmp_msg_0.lon = 0.2670720352287742;
    tmp_msg_0.depth = 0.10009333118939834;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 252U;
    tmp_msg_0.transponder_delay = 136U;
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
    msg.setTimeStamp(0.047996417135943714);
    msg.setSource(10821U);
    msg.setSourceEntity(136U);
    msg.setDestination(37221U);
    msg.setDestinationEntity(13U);
    msg.op = 218U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LXHAAPNKZJVYMSGTIHXFBEJDLWQGVPXUVRKUPVAABXCQVUAIJPFNOEZCHJTSZQXBUHNICHDAYLREWXEGKRCKUYJRGRWTEDXZYWDIMOTTGYLRFDVRJBKGHNIOZSMVQKMAZMIDPXXNUWPUYPANAKKLJRTRZERJPOCDFHTLOTQNFBCQSLLBBOQYQMLSTAMYGSBMUFVZJOWY");
    tmp_msg_0.lat = 0.7783166599802908;
    tmp_msg_0.lon = 0.31169015460102545;
    tmp_msg_0.depth = 0.7809515353524371;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 197U;
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
    msg.setTimeStamp(0.2848135886324318);
    msg.setSource(1411U);
    msg.setSourceEntity(72U);
    msg.setDestination(32059U);
    msg.setDestinationEntity(81U);
    msg.op = 101U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GJHDBBJOXCKVCWPYRJQDLTEGKXYETFNIZGNNLQSNBGRPKSYNYRALIKDIPPTWUEIVEMYQFPOKZYZMNNAKCMEGZRKWOLHYMOXWUZIU");
    tmp_msg_0.lat = 0.5490221658873418;
    tmp_msg_0.lon = 0.00073390402342699;
    tmp_msg_0.depth = 0.20447410469683447;
    tmp_msg_0.query_channel = 158U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 132U;
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
    msg.setTimeStamp(0.8656907928784912);
    msg.setSource(15171U);
    msg.setSourceEntity(108U);
    msg.setDestination(29693U);
    msg.setDestinationEntity(108U);
    msg.address = 170U;

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
    msg.setTimeStamp(0.7550261705068565);
    msg.setSource(3509U);
    msg.setSourceEntity(63U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(34U);
    msg.address = 132U;

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
    msg.setTimeStamp(0.4122308327382007);
    msg.setSource(42017U);
    msg.setSourceEntity(69U);
    msg.setDestination(3769U);
    msg.setDestinationEntity(76U);
    msg.address = 209U;

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
    msg.setTimeStamp(0.07972651490863936);
    msg.setSource(17506U);
    msg.setSourceEntity(202U);
    msg.setDestination(5107U);
    msg.setDestinationEntity(70U);
    msg.address = 36U;
    msg.status = 215U;
    msg.range = 0.40899637433484204;

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
    msg.setTimeStamp(0.47011177391842174);
    msg.setSource(36299U);
    msg.setSourceEntity(150U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(99U);
    msg.address = 110U;
    msg.status = 141U;
    msg.range = 0.7034743900739592;

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
    msg.setTimeStamp(0.3478086311683569);
    msg.setSource(50601U);
    msg.setSourceEntity(119U);
    msg.setDestination(13734U);
    msg.setDestinationEntity(0U);
    msg.address = 72U;
    msg.status = 132U;
    msg.range = 0.5709385539990715;

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
    msg.setTimeStamp(0.9764175817769373);
    msg.setSource(40432U);
    msg.setSourceEntity(125U);
    msg.setDestination(65242U);
    msg.setDestinationEntity(227U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LTHIKGMAJPNPEDGCNJMVRFHEENZWHGTKMJANEYIIXOBDZCXQYOBYFZHBAKBWDFECQPLQFRAOYMLLVOMKWSFRNJOIXGCOMLWUTALPVBTALEHUFGHUPXDJQYVIFZUCSPXSIZUGCMADEUOFJOQMFDPCNYRHJMDVXIVNAQLSWNQDRKTWBJRQKLEEYYKJYPUSBVKOUGCGBSGRCF");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7194065503396694;
    tmp_tmp_msg_0_0.lon = 0.47821600323381586;
    tmp_tmp_msg_0_0.speed = 0.5843856997473628;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_tmp_msg_0_0.duration = 28262U;
    tmp_tmp_msg_0_0.sys_a = 39502U;
    tmp_tmp_msg_0_0.sys_b = 50946U;
    tmp_tmp_msg_0_0.move_threshold = 0.40274661065676576;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SessionStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 3101364609U;
    tmp_tmp_msg_0_1.status = 171U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5347955966927269);
    msg.setSource(31198U);
    msg.setSourceEntity(194U);
    msg.setDestination(25050U);
    msg.setDestinationEntity(134U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.10619104949267943;
    tmp_msg_0.speed_units = 18U;
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
    msg.setTimeStamp(0.6453837905897717);
    msg.setSource(39917U);
    msg.setSourceEntity(182U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(58U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9561416458915473;
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
    msg.setTimeStamp(0.3250368379235705);
    msg.setSource(58750U);
    msg.setSourceEntity(96U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(123U);
    msg.enable = 109U;

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
    msg.setTimeStamp(0.781494667722972);
    msg.setSource(36992U);
    msg.setSourceEntity(46U);
    msg.setDestination(29125U);
    msg.setDestinationEntity(72U);
    msg.enable = 138U;

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
    msg.setTimeStamp(0.2085583003765844);
    msg.setSource(42292U);
    msg.setSourceEntity(47U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(127U);
    msg.enable = 81U;

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
    msg.setTimeStamp(0.39816299406875966);
    msg.setSource(62898U);
    msg.setSourceEntity(239U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(20U);
    msg.summary = 69U;
    msg.level = 72U;

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
    msg.setTimeStamp(0.7415402528160133);
    msg.setSource(29416U);
    msg.setSourceEntity(3U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(143U);
    msg.summary = 223U;
    msg.level = 9U;

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
    msg.setTimeStamp(0.23221151416442343);
    msg.setSource(15448U);
    msg.setSourceEntity(122U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(165U);
    msg.summary = 120U;
    msg.level = 99U;

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
    msg.setTimeStamp(0.8160146351108446);
    msg.setSource(63621U);
    msg.setSourceEntity(161U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.8626653644118987);
    msg.setSource(4112U);
    msg.setSourceEntity(198U);
    msg.setDestination(24178U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.30391158040558375);
    msg.setSource(39176U);
    msg.setSourceEntity(20U);
    msg.setDestination(14110U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.47364232687071506);
    msg.setSource(25470U);
    msg.setSourceEntity(174U);
    msg.setDestination(39021U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.4475550004506874);
    msg.setSource(9473U);
    msg.setSourceEntity(110U);
    msg.setDestination(42160U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.10329413131168819);
    msg.setSource(15866U);
    msg.setSourceEntity(169U);
    msg.setDestination(23476U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.12759487221008736);
    msg.setSource(15305U);
    msg.setSourceEntity(2U);
    msg.setDestination(45287U);
    msg.setDestinationEntity(133U);
    msg.op = 131U;
    msg.system.assign("RJTVFLVIUBIBYTBZXOIWVDMZHAQEUAVBDOUTGSMGMXKR");
    msg.range = 0.673250338065609;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.23350052505101115);
    msg.setSource(7627U);
    msg.setSourceEntity(125U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(204U);
    msg.op = 43U;
    msg.system.assign("NKDCUFFBAEKBTLWMPQMCWSALHULLOZMKCTYPLHKNCZQJGAXLEWIUBSIJHGTEBRMCPNDJSGMBTA");
    msg.range = 0.029592329643076343;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("QGWZWZAULNCFNJKKXGCSFLHBYEHAVWLPBLJOVBSWYDIWKQJYMGAPQHBNQSZFJBJUSUGGSPMJHQRELTSXHQMNNYRCUIXOBYVRZKBEVSTZTMVDALNFSINIWZUHXGUFHODVRPSZYPBFPFKHODMOVMYXAIIWPLQWKQERICIMNRDLA");
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
    msg.setTimeStamp(0.39629345961344353);
    msg.setSource(60417U);
    msg.setSourceEntity(36U);
    msg.setDestination(39577U);
    msg.setDestinationEntity(13U);
    msg.op = 182U;
    msg.system.assign("PFWWLZSUTAOZZHKCGCUREOZJATCXGHFUROFEWDPQCOKQPKTEZNRLJAPBJNRRBRUMUANWMMWBXNTHBCEDWHDGYJMTTVTRKBKOVPLAYIASEGFLTPFNNZHIYUBYHIGBKVAFVOCVOKNULSUSGEGLQBQUQROSQJHMXDWLOCWYPDJQVFQFPIXYSHYMWQFGIYSNMKDRLOJZJTCVEAJKBVZDLSZIMPCHRDSCIIASFGPGXJDNHWBIQVYXZEVTYIKD");
    msg.range = 0.8356131049239861;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.13377372438852997;
    tmp_msg_0.y = 0.9667207598904799;
    tmp_msg_0.z = 0.3102612148007672;
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
    msg.setTimeStamp(0.3076026589666806);
    msg.setSource(55941U);
    msg.setSourceEntity(58U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.9801255423941839);
    msg.setSource(59511U);
    msg.setSourceEntity(232U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.948694082357077);
    msg.setSource(61748U);
    msg.setSourceEntity(25U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.28581729237057585);
    msg.setSource(25109U);
    msg.setSourceEntity(244U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(211U);
    msg.list.assign("WCYVKUPVVAWDPRZEYNRYVDRECPINWPKUCLAVHZAUDOLPBYNHFTFQFVVDXMHWVJZHVMIWGELBXOOZCBITENKHWRNRTGEXFEFORYNNADSXXJQMUNSZAYAIJMADWQJSOUWLOIPDSFIFJFBCPJBQXDOXCDUANEPAJJRQTSFLZXMRQIUMGCJSZUKSBOLKLMGHGRCT");

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
    msg.setTimeStamp(0.30147239873499654);
    msg.setSource(24070U);
    msg.setSourceEntity(89U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(61U);
    msg.list.assign("OFUFQPZMXOHBKYRDIEYXKBCETBHNUQOBZBGVIQHADZSZASRV");

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
    msg.setTimeStamp(0.09277972582208682);
    msg.setSource(62100U);
    msg.setSourceEntity(239U);
    msg.setDestination(33824U);
    msg.setDestinationEntity(130U);
    msg.list.assign("MGERJSJDIFNRNYJUQILQEZJBCZRFIGGAKALRTTLHFBYWDAKQTDCIWZWLAHIZNGABDDVVMAKZPUESREBYCHYNSVITQMRRMHUEKCJVPQVXXOXGKEUYDCUGTLTZYUXBPNFWKAUPECSOATOQOWKNMIVPZOBOAOJWJGEXCYFLCWPVQRLMWXPDOPYRYHXYRNTGBGJOJSXUPVIIQDFQDQWDNAZ");

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
    msg.setTimeStamp(0.7503857051450366);
    msg.setSource(6847U);
    msg.setSourceEntity(90U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(227U);
    msg.value = 28613;

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
    msg.setTimeStamp(0.825644093905172);
    msg.setSource(28064U);
    msg.setSourceEntity(30U);
    msg.setDestination(27317U);
    msg.setDestinationEntity(71U);
    msg.value = -2064;

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
    msg.setTimeStamp(0.5285946423966069);
    msg.setSource(17933U);
    msg.setSourceEntity(14U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(6U);
    msg.value = -21290;

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
    msg.setTimeStamp(0.28844556628096973);
    msg.setSource(45501U);
    msg.setSourceEntity(138U);
    msg.setDestination(27441U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8811264567286635;

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
    msg.setTimeStamp(0.3932850683515223);
    msg.setSource(8565U);
    msg.setSourceEntity(108U);
    msg.setDestination(11650U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8479343814075007;

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
    msg.setTimeStamp(0.21297384085426085);
    msg.setSource(54596U);
    msg.setSourceEntity(227U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(241U);
    msg.value = 0.43650858487377486;

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
    msg.setTimeStamp(0.4806318595209832);
    msg.setSource(54345U);
    msg.setSourceEntity(39U);
    msg.setDestination(42109U);
    msg.setDestinationEntity(180U);
    msg.value = 0.053653534811191395;

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
    msg.setTimeStamp(0.2838985246603535);
    msg.setSource(22951U);
    msg.setSourceEntity(160U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(104U);
    msg.value = 0.21326110049687486;

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
    msg.setTimeStamp(0.7166926247572484);
    msg.setSource(47894U);
    msg.setSourceEntity(253U);
    msg.setDestination(44823U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8271543266755429;

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
    msg.setTimeStamp(0.4335389152404664);
    msg.setSource(39821U);
    msg.setSourceEntity(104U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(114U);
    msg.validity = 34580U;
    msg.type = 164U;
    msg.utc_year = 49929U;
    msg.utc_month = 110U;
    msg.utc_day = 165U;
    msg.utc_time = 0.7828232350202584;
    msg.lat = 0.677939412143471;
    msg.lon = 0.35049716777787354;
    msg.height = 0.19513291510353015;
    msg.satellites = 68U;
    msg.cog = 0.2462699524920886;
    msg.sog = 0.6881294116462574;
    msg.hdop = 0.7960811871766869;
    msg.vdop = 0.41933976679660323;
    msg.hacc = 0.4274503107190112;
    msg.vacc = 0.9975620639720729;

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
    msg.setTimeStamp(0.663133038252995);
    msg.setSource(21955U);
    msg.setSourceEntity(119U);
    msg.setDestination(25035U);
    msg.setDestinationEntity(153U);
    msg.validity = 63686U;
    msg.type = 217U;
    msg.utc_year = 53092U;
    msg.utc_month = 57U;
    msg.utc_day = 254U;
    msg.utc_time = 0.0272208677524044;
    msg.lat = 0.46820765767468375;
    msg.lon = 0.914405612843182;
    msg.height = 0.702425339251736;
    msg.satellites = 186U;
    msg.cog = 0.06611608675783431;
    msg.sog = 0.27009426047053353;
    msg.hdop = 0.6086674510518215;
    msg.vdop = 0.5116010065784506;
    msg.hacc = 0.823718855844839;
    msg.vacc = 0.93453034402273;

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
    msg.setTimeStamp(0.8255909970565861);
    msg.setSource(36132U);
    msg.setSourceEntity(200U);
    msg.setDestination(16318U);
    msg.setDestinationEntity(58U);
    msg.validity = 48134U;
    msg.type = 190U;
    msg.utc_year = 34401U;
    msg.utc_month = 95U;
    msg.utc_day = 242U;
    msg.utc_time = 0.6705072288340919;
    msg.lat = 0.9345329115323198;
    msg.lon = 0.900868559012986;
    msg.height = 0.8049598458640259;
    msg.satellites = 31U;
    msg.cog = 0.51546476319543;
    msg.sog = 0.47967157577344244;
    msg.hdop = 0.7591373234847156;
    msg.vdop = 0.4910785987669305;
    msg.hacc = 0.5825349995416478;
    msg.vacc = 0.7842993334713716;

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
    msg.setTimeStamp(0.3308739111464656);
    msg.setSource(60672U);
    msg.setSourceEntity(234U);
    msg.setDestination(27830U);
    msg.setDestinationEntity(225U);
    msg.time = 0.10580277267448246;
    msg.phi = 0.010115712236597463;
    msg.theta = 0.47762753132179814;
    msg.psi = 0.27573903112079556;
    msg.psi_magnetic = 0.07807949022636607;

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
    msg.setTimeStamp(0.35786972125744576);
    msg.setSource(61751U);
    msg.setSourceEntity(158U);
    msg.setDestination(41075U);
    msg.setDestinationEntity(177U);
    msg.time = 0.4779994943426932;
    msg.phi = 0.647915974448533;
    msg.theta = 0.743550637651593;
    msg.psi = 0.36194698363206146;
    msg.psi_magnetic = 0.8887899784361406;

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
    msg.setTimeStamp(0.5660165025047359);
    msg.setSource(55015U);
    msg.setSourceEntity(40U);
    msg.setDestination(49244U);
    msg.setDestinationEntity(71U);
    msg.time = 0.9025941015720095;
    msg.phi = 0.36359327524227714;
    msg.theta = 0.04414491092551032;
    msg.psi = 0.8807130727012888;
    msg.psi_magnetic = 0.4232918646276064;

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
    msg.setTimeStamp(0.5155371975428443);
    msg.setSource(20106U);
    msg.setSourceEntity(34U);
    msg.setDestination(34883U);
    msg.setDestinationEntity(31U);
    msg.time = 0.45252102324152943;
    msg.x = 0.8490624651944659;
    msg.y = 0.35200186103301;
    msg.z = 0.5646400332501209;
    msg.timestep = 0.2089609152255668;

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
    msg.setTimeStamp(0.6475038691764449);
    msg.setSource(42949U);
    msg.setSourceEntity(213U);
    msg.setDestination(42165U);
    msg.setDestinationEntity(74U);
    msg.time = 0.5244356430534589;
    msg.x = 0.054388036539865015;
    msg.y = 0.957947876915638;
    msg.z = 0.584579024412905;
    msg.timestep = 0.36917279754844834;

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
    msg.setTimeStamp(0.614486603182073);
    msg.setSource(37384U);
    msg.setSourceEntity(132U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(142U);
    msg.time = 0.5246761054298745;
    msg.x = 0.17563677242483866;
    msg.y = 0.40368392561755984;
    msg.z = 0.60989515931823;
    msg.timestep = 0.07214979203540206;

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
    msg.setTimeStamp(0.7685950321710568);
    msg.setSource(47811U);
    msg.setSourceEntity(25U);
    msg.setDestination(3993U);
    msg.setDestinationEntity(217U);
    msg.time = 0.8993707601960115;
    msg.x = 0.469837224499115;
    msg.y = 0.21657519955978866;
    msg.z = 0.08456231602812192;

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
    msg.setTimeStamp(0.19111488860179315);
    msg.setSource(21282U);
    msg.setSourceEntity(126U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(57U);
    msg.time = 0.6277387339481395;
    msg.x = 0.4986974231454523;
    msg.y = 0.31577689400169384;
    msg.z = 0.7581269983669342;

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
    msg.setTimeStamp(0.4416867908503189);
    msg.setSource(59471U);
    msg.setSourceEntity(11U);
    msg.setDestination(39214U);
    msg.setDestinationEntity(135U);
    msg.time = 0.9764028801360628;
    msg.x = 0.19868492912556202;
    msg.y = 0.238807904094392;
    msg.z = 0.9039212123465222;

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
    msg.setTimeStamp(0.19537358344919242);
    msg.setSource(33352U);
    msg.setSourceEntity(69U);
    msg.setDestination(5950U);
    msg.setDestinationEntity(215U);
    msg.time = 0.8278512690934052;
    msg.x = 0.7581123756913888;
    msg.y = 0.47691848890101207;
    msg.z = 0.04309452954957782;

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
    msg.setTimeStamp(0.06171584292688548);
    msg.setSource(51930U);
    msg.setSourceEntity(179U);
    msg.setDestination(34403U);
    msg.setDestinationEntity(248U);
    msg.time = 0.828302491854142;
    msg.x = 0.5579974105687859;
    msg.y = 0.33213655792836116;
    msg.z = 0.050101335009326564;

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
    msg.setTimeStamp(0.7062438032261112);
    msg.setSource(32291U);
    msg.setSourceEntity(164U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(239U);
    msg.time = 0.1680139013407711;
    msg.x = 0.05180149428432168;
    msg.y = 0.4554287079497261;
    msg.z = 0.10613708915099196;

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
    msg.setTimeStamp(0.4784649809812149);
    msg.setSource(49291U);
    msg.setSourceEntity(25U);
    msg.setDestination(5526U);
    msg.setDestinationEntity(110U);
    msg.time = 0.3127185800680118;
    msg.x = 0.3421101684771368;
    msg.y = 0.7923247500953802;
    msg.z = 0.43361026136487;

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
    msg.setTimeStamp(0.6365653404321358);
    msg.setSource(39168U);
    msg.setSourceEntity(94U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(29U);
    msg.time = 0.5829832214063395;
    msg.x = 0.044259321415426434;
    msg.y = 0.8245814422339752;
    msg.z = 0.1733014243972113;

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
    msg.setTimeStamp(0.8075096036361041);
    msg.setSource(36025U);
    msg.setSourceEntity(122U);
    msg.setDestination(55270U);
    msg.setDestinationEntity(244U);
    msg.time = 0.5875506700487129;
    msg.x = 0.5420730775241771;
    msg.y = 0.6687745910477974;
    msg.z = 0.21486487290498035;

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
    msg.setTimeStamp(0.5738792849928395);
    msg.setSource(56948U);
    msg.setSourceEntity(94U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(145U);
    msg.validity = 80U;
    msg.x = 0.461336396008463;
    msg.y = 0.9899984530490781;
    msg.z = 0.5624653684319173;

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
    msg.setTimeStamp(0.7513275927325987);
    msg.setSource(59489U);
    msg.setSourceEntity(212U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(157U);
    msg.validity = 29U;
    msg.x = 0.49639196261362983;
    msg.y = 0.6890792791130328;
    msg.z = 0.630168119160106;

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
    msg.setTimeStamp(0.18163466952225982);
    msg.setSource(29622U);
    msg.setSourceEntity(205U);
    msg.setDestination(46510U);
    msg.setDestinationEntity(67U);
    msg.validity = 196U;
    msg.x = 0.18281762176863703;
    msg.y = 0.6145910025556014;
    msg.z = 0.9641081909036847;

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
    msg.setTimeStamp(0.3951050239628561);
    msg.setSource(53152U);
    msg.setSourceEntity(126U);
    msg.setDestination(54894U);
    msg.setDestinationEntity(48U);
    msg.validity = 180U;
    msg.x = 0.05489502573076088;
    msg.y = 0.9287561550490151;
    msg.z = 0.7200349174477425;

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
    msg.setTimeStamp(0.21280778006022205);
    msg.setSource(46603U);
    msg.setSourceEntity(141U);
    msg.setDestination(45357U);
    msg.setDestinationEntity(48U);
    msg.validity = 233U;
    msg.x = 0.8517981904881022;
    msg.y = 0.36562315707794246;
    msg.z = 0.39585589933354615;

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
    msg.setTimeStamp(0.33458764346558434);
    msg.setSource(17001U);
    msg.setSourceEntity(23U);
    msg.setDestination(36509U);
    msg.setDestinationEntity(158U);
    msg.validity = 175U;
    msg.x = 0.034540287268118086;
    msg.y = 0.6184550715568454;
    msg.z = 0.9887844979679522;

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
    msg.setTimeStamp(0.3760670564597166);
    msg.setSource(40351U);
    msg.setSourceEntity(113U);
    msg.setDestination(17963U);
    msg.setDestinationEntity(192U);
    msg.time = 0.13874137274135234;
    msg.x = 0.7246537582823849;
    msg.y = 0.9333349812553388;
    msg.z = 0.2927363830389751;

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
    msg.setTimeStamp(0.9622286178895525);
    msg.setSource(37820U);
    msg.setSourceEntity(10U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(252U);
    msg.time = 0.8086121671130065;
    msg.x = 0.821922745524457;
    msg.y = 0.46827941555098285;
    msg.z = 0.36665677345057457;

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
    msg.setTimeStamp(0.43290416798947906);
    msg.setSource(59179U);
    msg.setSourceEntity(34U);
    msg.setDestination(61024U);
    msg.setDestinationEntity(69U);
    msg.time = 0.021358159125241194;
    msg.x = 0.749528984033369;
    msg.y = 0.9930117463415821;
    msg.z = 0.3452930335538952;

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
    msg.setTimeStamp(0.4707867822842444);
    msg.setSource(32885U);
    msg.setSourceEntity(137U);
    msg.setDestination(5110U);
    msg.setDestinationEntity(223U);
    msg.validity = 8U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.24429858228052814;
    tmp_msg_0.y = 0.118865785470334;
    tmp_msg_0.z = 0.7398695498843536;
    tmp_msg_0.phi = 0.16775606363221718;
    tmp_msg_0.theta = 0.4670649017980636;
    tmp_msg_0.psi = 0.014544832291668697;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.24556234672997534;
    tmp_msg_1.beam_height = 0.13004924161111187;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8025465944041077;

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
    msg.setTimeStamp(0.5041390975798941);
    msg.setSource(58574U);
    msg.setSourceEntity(168U);
    msg.setDestination(37386U);
    msg.setDestinationEntity(171U);
    msg.validity = 228U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6326944509539355;
    tmp_msg_0.y = 0.27098217874483743;
    tmp_msg_0.z = 0.23035853908958337;
    tmp_msg_0.phi = 0.17238979081724237;
    tmp_msg_0.theta = 0.501649883026947;
    tmp_msg_0.psi = 0.6015433285815722;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.2159235182202227;

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
    msg.setTimeStamp(0.5465153233750643);
    msg.setSource(37931U);
    msg.setSourceEntity(32U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(18U);
    msg.validity = 14U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0936007298789624;
    tmp_msg_0.y = 0.27488676279965607;
    tmp_msg_0.z = 0.8552166809084748;
    tmp_msg_0.phi = 0.0034141281766699727;
    tmp_msg_0.theta = 0.6674796156905629;
    tmp_msg_0.psi = 0.5265614697546607;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.10045848686470793;

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
    msg.setTimeStamp(0.3809785951395205);
    msg.setSource(53564U);
    msg.setSourceEntity(56U);
    msg.setDestination(47643U);
    msg.setDestinationEntity(46U);
    msg.value = 0.40530161645149687;

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
    msg.setTimeStamp(0.5868903556614568);
    msg.setSource(63112U);
    msg.setSourceEntity(227U);
    msg.setDestination(9581U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6040591019822699;

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
    msg.setTimeStamp(0.23988741866573526);
    msg.setSource(20832U);
    msg.setSourceEntity(80U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7079655377044911;

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
    msg.setTimeStamp(0.3475054708790989);
    msg.setSource(1649U);
    msg.setSourceEntity(204U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(153U);
    msg.value = 0.4861744815403152;

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
    msg.setTimeStamp(0.7555696052518234);
    msg.setSource(46734U);
    msg.setSourceEntity(188U);
    msg.setDestination(63455U);
    msg.setDestinationEntity(170U);
    msg.value = 0.25279656392865524;

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
    msg.setTimeStamp(0.36628598654907407);
    msg.setSource(31866U);
    msg.setSourceEntity(62U);
    msg.setDestination(45154U);
    msg.setDestinationEntity(158U);
    msg.value = 0.37371186630538367;

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
    msg.setTimeStamp(0.0596646301301339);
    msg.setSource(3331U);
    msg.setSourceEntity(5U);
    msg.setDestination(44057U);
    msg.setDestinationEntity(12U);
    msg.value = 0.44392240052935505;

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
    msg.setTimeStamp(0.49582334521974814);
    msg.setSource(24207U);
    msg.setSourceEntity(119U);
    msg.setDestination(43737U);
    msg.setDestinationEntity(65U);
    msg.value = 0.46115357309630123;

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
    msg.setTimeStamp(0.41006872106475467);
    msg.setSource(622U);
    msg.setSourceEntity(136U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(51U);
    msg.value = 0.005633637348999687;

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
    msg.setTimeStamp(0.4809387149315576);
    msg.setSource(4685U);
    msg.setSourceEntity(183U);
    msg.setDestination(53312U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5287723691003974;

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
    msg.setTimeStamp(0.5158095559461451);
    msg.setSource(7690U);
    msg.setSourceEntity(17U);
    msg.setDestination(60596U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5276697720650847;

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
    msg.setTimeStamp(0.14039134120005925);
    msg.setSource(65368U);
    msg.setSourceEntity(178U);
    msg.setDestination(28318U);
    msg.setDestinationEntity(185U);
    msg.value = 0.21871926223354177;

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
    msg.setTimeStamp(0.33384328745870584);
    msg.setSource(60431U);
    msg.setSourceEntity(71U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5397063406651745;

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
    msg.setTimeStamp(0.9180601726647776);
    msg.setSource(25004U);
    msg.setSourceEntity(241U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(79U);
    msg.value = 0.463212792003321;

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
    msg.setTimeStamp(0.1991998147392463);
    msg.setSource(7913U);
    msg.setSourceEntity(87U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9134563554502895;

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
    msg.setTimeStamp(0.13985706877674486);
    msg.setSource(21025U);
    msg.setSourceEntity(133U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7543094867889363;

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
    msg.setTimeStamp(0.6515293072149632);
    msg.setSource(23996U);
    msg.setSourceEntity(10U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(189U);
    msg.value = 0.998618863937059;

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
    msg.setTimeStamp(0.7731120189055278);
    msg.setSource(47269U);
    msg.setSourceEntity(211U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(148U);
    msg.value = 0.37699859551295867;

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
    msg.setTimeStamp(0.43905072387182653);
    msg.setSource(63200U);
    msg.setSourceEntity(73U);
    msg.setDestination(15472U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6902810193992103;

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
    msg.setTimeStamp(0.8642784772928689);
    msg.setSource(47484U);
    msg.setSourceEntity(50U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(112U);
    msg.value = 0.46462608493216917;

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
    msg.setTimeStamp(0.674099918593316);
    msg.setSource(27422U);
    msg.setSourceEntity(155U);
    msg.setDestination(5214U);
    msg.setDestinationEntity(6U);
    msg.value = 0.4257157243959232;

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
    msg.setTimeStamp(0.6381468217537226);
    msg.setSource(8293U);
    msg.setSourceEntity(186U);
    msg.setDestination(40284U);
    msg.setDestinationEntity(146U);
    msg.value = 0.36344580454702313;

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
    msg.setTimeStamp(0.7019346788796538);
    msg.setSource(53549U);
    msg.setSourceEntity(21U);
    msg.setDestination(7977U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7019980340029779;

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
    msg.setTimeStamp(0.8119655701501994);
    msg.setSource(19772U);
    msg.setSourceEntity(28U);
    msg.setDestination(65498U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5716531804207036;

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
    msg.setTimeStamp(0.402698862000781);
    msg.setSource(46974U);
    msg.setSourceEntity(199U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.24365882176270692;
    msg.speed = 0.4798758038251185;

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
    msg.setTimeStamp(0.024223034727024806);
    msg.setSource(48331U);
    msg.setSourceEntity(33U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.16684039511094995;
    msg.speed = 0.3539022525809026;

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
    msg.setTimeStamp(0.5480806373691642);
    msg.setSource(23326U);
    msg.setSourceEntity(197U);
    msg.setDestination(57209U);
    msg.setDestinationEntity(37U);
    msg.direction = 0.5966921285910729;
    msg.speed = 0.5679346277317755;

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
    msg.setTimeStamp(0.2892295612788377);
    msg.setSource(7503U);
    msg.setSourceEntity(150U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6126618951729222;

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
    msg.setTimeStamp(0.6874173721144864);
    msg.setSource(5941U);
    msg.setSourceEntity(170U);
    msg.setDestination(45463U);
    msg.setDestinationEntity(146U);
    msg.value = 0.35287005057183707;

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
    msg.setTimeStamp(0.16010882569711904);
    msg.setSource(32976U);
    msg.setSourceEntity(21U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(62U);
    msg.value = 0.6122343253113494;

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
    msg.setTimeStamp(0.21492162944952486);
    msg.setSource(59153U);
    msg.setSourceEntity(189U);
    msg.setDestination(32721U);
    msg.setDestinationEntity(73U);
    msg.value.assign("DUJRLLHWESEUFBRWRICEWPPSCOMUDOXZLQKLDQRMBHLINUCUEXAPKQTVWCGHVJCIAGBVZARFQSGHUHTUIPAODNGRAYJVFGITXZGHCSIYBOIJEXZMXCKHJXRCQEQTATOZQH");

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
    msg.setTimeStamp(0.7176556648836869);
    msg.setSource(46603U);
    msg.setSourceEntity(237U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(61U);
    msg.value.assign("LJZMAMKTJPRCEVBCVUGUWWDQLAPHBVIDENSWMUIBOXZINKCYDFNLPZTSNCTATSANSMZEXJFMWQWVFGZLQXYBJJFEBUKHREURQNCVMHGJSYBFANOIGTZXGKQKPUZKNLSBARKOETTHFRPGIIRHMQLKQWRCVUPGOAPDVCNXLTIWED");

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
    msg.setTimeStamp(0.5765884205410299);
    msg.setSource(58288U);
    msg.setSourceEntity(199U);
    msg.setDestination(34666U);
    msg.setDestinationEntity(182U);
    msg.value.assign("XCJFQCFDDANUFIXGFQBHNNBEKFABMUDNUKJEMJJGHISOWPMUZTZXAZJHHGQLJVTNKKCEFSYDBAUVVGLHPLYCYCQTUOKEVKLMVXCEAXBCDOWTKOWTRMBRMXORIPMIULMQYHMJFBVTYENPJFXYIASMWQXSPCIIDRTLZJITHGHPAAGZG");

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
    msg.setTimeStamp(0.13573122459425457);
    msg.setSource(5020U);
    msg.setSourceEntity(177U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(67U);
    const char tmp_msg_0[] = {-101, 97, 85, 44, -31, 97, -31, -59, -119, 3, 106, 62, -122, -19, -93, 54, 109, 74, 105, -37, 56, 41, 29, -60, -100, 78, 64, 111, 123, 7, -44, 102, -21, 114, -121, 106, -85, 65, -52, -112, 96, 104, 90, -23, 4, 113, -124, -123, 104, 22, 24, 20, -54, -4, -76, -33, 82, -2, 25, -43, -16, -31, 53, 79, 48, -23, 18, -69, -35, 50, -116, -73, -43, -36, -17, 25, 66, -99, -56, -64, 16, -20, -7, 120, 101, -56, -116, 26, -77, -62, -20, -116, 62, 64, 3, -40, 61, 50, -52, -94, 78, -124, 17, 121, -25, 62, 34, -51, -116, 77, -43, 117, -51, 10, -9, -119, 62, 90, 72, -115, 85, -88, 9, 123, -30, -45, -52, -88, 12, 120, -61, 4, -44, 45, 89, -80, -12, 99, 70, 30, 65, 122, -49, -26, -122, -31, 126, -21, -58, 32, 70, -76, 123, -63, 58, 87, 91, 101, 125, -47, 3, -99, 60, -49, 75, 96, -74, 88, -98, -73, -84, -13, 95, -104, -43, -120, -49, 14, -5, -72, 90, -119, 114, -117, 124, -52, 80, -79, -71, -18, 55, 90, -24, 121, -83, 83, -115, 59, 49, 24, -30, 123, 78, -106, -82, -15, 112, -21, -13, 22, -72, 2, -26, -40, -37, -87, 69, -127, -9, -47, -25, 37, -126, 98, 112, -45, -78, 125, -20, 124, 60, -117, -85, -111, -12, 91, -32, -29, -54, -88, 60, -111, -62, 106, -36};
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
    msg.setTimeStamp(0.24115815875518032);
    msg.setSource(2358U);
    msg.setSourceEntity(41U);
    msg.setDestination(63596U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {103, 50, 26, 86, -38, 24, 3, -41, 106, -7, -91, 103, 124, 75, 2, 95, -27, -74, -90, -70, -62, -115, 90, -68, -115, -65, 91, -81, -32, -52, 124, 32, -26, 78, 77, 94, 10, -26, -49, 37, -14, 125, 13, -80, -26, -25, -47, 65, 37, -68, 78, -68, -57, -95, -95, -50, -32, -92, 29, 6, 9, -55, 38, 124, 101, -9, 22, 118, 68, -6, -1, -71, -120, 30, 43, -51, -107, -2, 83, 42, -74, 21, -80, 100, 100, -68, 80, 113, 92, 43, 31, -44, -1, -113, 66, 27, 11, 77, 56, -19, 42, -43, -3, -15, -6, 18, -113, -57, 47, 22, 83, 8, 2, 94, -116, 51, -11, 76, 64, 41, -61, 43, -44, -113, 29, 74, -105, 83, 90, 11, -14, 70, -55, 63, -3, -117, 1, -26, -125, -28, 33, -97, -35, -36, 88, 93, 9, -11, -126, 71, -25, 125, -48, 33, 85, -44, -18, -71, -39, -56, -121, 113, -116, 99, 68, 100, 9, 13, 53, 73, -1, 90, -76, 118, 50, -4, -47, -74, -8, 45, -36, 123, -105, 116, 93, -51, 113, -60, 0, 43, 95, 111, 47, 54, -96, 52, -96, -106, 100};
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
    msg.setTimeStamp(0.1685365410064006);
    msg.setSource(33406U);
    msg.setSourceEntity(210U);
    msg.setDestination(18431U);
    msg.setDestinationEntity(66U);
    const char tmp_msg_0[] = {5, 65, -104, 26, -17, 85, 61, 30, -43, 32, 25, 111, -67, 30, -64, -54, -4, 24, -94, -49, -70, -91, 97, -46, 41, 63, 70, -70, 109, -33, -94, 6, 54, -61, 124, -23, 51, 109, -100, 75, -93, -48, -12, -45, 13, 9, -117, -46, 16, -8, -115, -98, -54, 49, -94, -116, -127, -29, 13, -66, 32, -115, 4, -72, 80, 4, -10, 48, 44, -93, 113, 7, 62, -81, -3, 38, -25, -127, -22, 15, 104, 21, 64, 33, -108, 3, 21, -32, -18, 71, 125, 19, 40, 46, 68, 115, 62, 82, 27, 91, 74, -110, 89, 12, 91, -84, -99, -88, 17, -100, -50, 18, 55, -46, 122, 38, -11, -59, 42, 101, 116, -33, -71, -73, 41, -107, 35, 116, -44, 27, -11, 100, -37, -46, 9, 36, -45, -124, 28, -85, 80, -125, 71, -38, -10, 1, 43, -125, -87, 26, 70, 19, -127, 15, -34, -35, 78, -7, -36, 14, -92, 85, -83, -105, -69, 80, 15, 56, 112, 27, -8, -25, 77, 6, -62, 59, 18, -95, 8, -78, 10, -62, 95, 21, 8, 20, -19, 15, 125, -58, -93, 95, -92, 54, -105, 84, -45, 26, -46, -82, -5};
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
    msg.setTimeStamp(0.4671899317750451);
    msg.setSource(15476U);
    msg.setSourceEntity(76U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(63U);
    msg.frequency = 3947344530U;
    msg.min_range = 28060U;
    msg.max_range = 250U;

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
    msg.setTimeStamp(0.8108890054605087);
    msg.setSource(28784U);
    msg.setSourceEntity(241U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(78U);
    msg.frequency = 3513434649U;
    msg.min_range = 50349U;
    msg.max_range = 1908U;

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
    msg.setTimeStamp(0.7903619876897446);
    msg.setSource(55000U);
    msg.setSourceEntity(243U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(115U);
    msg.frequency = 3336552179U;
    msg.min_range = 43027U;
    msg.max_range = 109U;

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
    msg.setTimeStamp(0.8095950652284184);
    msg.setSource(58298U);
    msg.setSourceEntity(222U);
    msg.setDestination(42984U);
    msg.setDestinationEntity(54U);
    msg.type = 9U;
    msg.frequency = 2035861540U;
    msg.min_range = 3570U;
    msg.max_range = 9278U;
    msg.bits_per_point = 244U;
    msg.scale_factor = 0.05517243277623718;
    const char tmp_msg_0[] = {-50, 125, 9, -7, 19, -71, -68, 108, 49, -111, -1, 113, 85, -49, 5, 98, 92, -104, 27, -5, 26, 114, 36, -81, -112, 0, -69, 111, 4, 56, -108, 104, -118, -124, -79, 64, -46, -121, 73, 96, 94, 87, 26, -123, -105, 94, 41, -77, 28, -88, 15, -112, 60, -76, 126, -128, -25, 23, 82, 114, 95, -19, 66, -91, -37, 16, 34, -118, 115, -62, -83, 9, 9, 7, 99, -39, -32, 95, 54, 3, 28, 118, -62, 44};
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
    msg.setTimeStamp(0.5411311506307758);
    msg.setSource(7518U);
    msg.setSourceEntity(54U);
    msg.setDestination(17353U);
    msg.setDestinationEntity(171U);
    msg.type = 246U;
    msg.frequency = 1385602180U;
    msg.min_range = 20938U;
    msg.max_range = 61951U;
    msg.bits_per_point = 220U;
    msg.scale_factor = 0.9432287537992332;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.03591848649316787;
    tmp_msg_0.beam_height = 0.6771134640842287;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {53, 112, -59, -78, 43, 25, -88, 94, -60, 74, -94, -7, 115, 34, 126, 40, -7, -121, 0, -33, 86, 58, 54, -11, -90, -107, 8, 56, 91, 103, -26, -10, 121, 108, -89, -82, -70, 28, 122, 103, 95, 38, 82, -97, 9, -102, 64, -99, 13, -117, 21, -103, 28, -5, 47, 62, 18, 49, 58, 112, -9, 119, -107, 12, 13, 111, 20, -88, -19, -9, 98, -24, -4, -47, 113, 74, 75, -66, -7, -24, 70, -16, 100, 28, 98, 99, 23, -73, -8, 98, -21, 59, -85, 106, -55, -69, -88, 99, 106, 87, 104, -73, -16, 109, -101, -117, 85, 96, 82, -104, -34, -121, -27, 41, -22, -21, -9, 22, -25, -33, 70, 103, -65, -77, 112, 17, 60, 98, 82, -27, -99, -127, 80, 37, 104, 10, 31, 98, -49, 110, 29, -74, 105, 119, -45, 105, -34, -21, 126, -89, 28, -22, -14, -83, 70, -101, -114, -108, 24, 89, -74, 121, 84, 33, 18, 80, -114, 45, 47, -17, -10, 74, 7, -47, -68, 39, -87, 85, -88, 93, 36, 115, 123, -45, 79, -14, -21, 49, -109, 76, -68, 2, -64, -120, -60, 55, 78, -106, -41, -32, 51, -28, -125, 112, -1, 101, -88, -6, -50, -47};
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
    msg.setTimeStamp(0.4415019069077838);
    msg.setSource(20673U);
    msg.setSourceEntity(173U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(89U);
    msg.type = 129U;
    msg.frequency = 2173739213U;
    msg.min_range = 44842U;
    msg.max_range = 8884U;
    msg.bits_per_point = 191U;
    msg.scale_factor = 0.4895596783502749;
    const char tmp_msg_0[] = {19, -117, -18, -52, 53, 95, -30, -56, 59, -73, -27, 104, -116, -78, -19, 18, 110, 105, 121, 35, 18, 9, 2, 4, 123, -121, -74, -65, -24, -121, -20, -37, -40, 7, 15, 11, 5, -6, 95, 94, 3, -53, -42, -94, -33, 60, -24, 22, -69, 18, 114, 18, 95, -25, 125};
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
    msg.setTimeStamp(0.28586505844153254);
    msg.setSource(27625U);
    msg.setSourceEntity(153U);
    msg.setDestination(59465U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.23059437431372976);
    msg.setSource(34685U);
    msg.setSourceEntity(33U);
    msg.setDestination(51831U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.2667420118400148);
    msg.setSource(26043U);
    msg.setSourceEntity(140U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.05325499211465856);
    msg.setSource(17949U);
    msg.setSourceEntity(156U);
    msg.setDestination(16864U);
    msg.setDestinationEntity(43U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.11915227752739421);
    msg.setSource(32387U);
    msg.setSourceEntity(138U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(104U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.8280310004853033);
    msg.setSource(16595U);
    msg.setSourceEntity(1U);
    msg.setDestination(18327U);
    msg.setDestinationEntity(230U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.7151642211299183);
    msg.setSource(29960U);
    msg.setSourceEntity(115U);
    msg.setDestination(26523U);
    msg.setDestinationEntity(173U);
    msg.value = 0.7759311272104314;
    msg.confidence = 0.33323820881094657;
    msg.opmodes.assign("RFCWGRJNOYREMRQGBCJLLMQNDLVFXZBSPZTGXIASPAAQDXBXBGSFHWAYBJWEZFLKOIGJOXEGDSQKUKZSGFTVDHHUPUQHCNVAMYPXADOYUOJWPZXKKTLWQDKOUJOHDMILUYNDTHQKNCHNERZCSLTMYWUUQATFIEVFCVDQIATENTFIIHIGLXVFSCXUPWHMANTWPDKBRCRIBSCZNWMUJYVGAJPMYKSCBVNMWBYZLFJREVRVTERYZKOZEIO");

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
    msg.setTimeStamp(0.3503745121044054);
    msg.setSource(28623U);
    msg.setSourceEntity(32U);
    msg.setDestination(879U);
    msg.setDestinationEntity(63U);
    msg.value = 0.12989784972861274;
    msg.confidence = 0.1738490057996206;
    msg.opmodes.assign("EMNPKYBODYUKLEOJCSADALSXZIECQIQKMYAQPFHQCPXUOWILHYAGDNAYDLHGHXKBGRVWCFBXFIRNHZUZAQSSGHSGPOQFTJTTPOWDVXLVLIUSRHGWIEQNKOVFVGBZDNBTVUASBHJJWDCETMKXMKSZNK");

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
    msg.setTimeStamp(0.19836565462158084);
    msg.setSource(7846U);
    msg.setSourceEntity(230U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7785730851081789;
    msg.confidence = 0.2890469830991894;
    msg.opmodes.assign("POTBIOWXUUYHCTBHIPYVZEHWDARBQPSTNHTURWFGDVSXDAIMRU");

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
    msg.setTimeStamp(0.33646585238167104);
    msg.setSource(40249U);
    msg.setSourceEntity(85U);
    msg.setDestination(26835U);
    msg.setDestinationEntity(119U);
    msg.itow = 2410097947U;
    msg.lat = 0.3536896576751306;
    msg.lon = 0.5823715757425579;
    msg.height_ell = 0.4383534485222621;
    msg.height_sea = 0.6268718524920518;
    msg.hacc = 0.5704383717754342;
    msg.vacc = 0.06455791889355067;
    msg.vel_n = 0.3999479242413363;
    msg.vel_e = 0.8719811730935852;
    msg.vel_d = 0.8829436687969566;
    msg.speed = 0.9909920139765465;
    msg.gspeed = 0.23074079868440633;
    msg.heading = 0.048945224134148924;
    msg.sacc = 0.7467048964820348;
    msg.cacc = 0.8659064971464346;

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
    msg.setTimeStamp(0.2510940311518196);
    msg.setSource(50715U);
    msg.setSourceEntity(114U);
    msg.setDestination(47292U);
    msg.setDestinationEntity(36U);
    msg.itow = 750725566U;
    msg.lat = 0.18667312203551056;
    msg.lon = 0.46381649575543993;
    msg.height_ell = 0.19248293669177685;
    msg.height_sea = 0.3595842880198752;
    msg.hacc = 0.024854666495957245;
    msg.vacc = 0.7093599351150633;
    msg.vel_n = 0.99041750774941;
    msg.vel_e = 0.9536884971869971;
    msg.vel_d = 0.6703056799639858;
    msg.speed = 0.7273698554902567;
    msg.gspeed = 0.11869428761360745;
    msg.heading = 0.547535106422365;
    msg.sacc = 0.4051781594986308;
    msg.cacc = 0.06456469682401389;

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
    msg.setTimeStamp(0.40803401257482075);
    msg.setSource(8870U);
    msg.setSourceEntity(250U);
    msg.setDestination(61680U);
    msg.setDestinationEntity(77U);
    msg.itow = 768686552U;
    msg.lat = 0.647724972194195;
    msg.lon = 0.9487700528798582;
    msg.height_ell = 0.1354857803490409;
    msg.height_sea = 0.0767696436806693;
    msg.hacc = 0.562541028786181;
    msg.vacc = 0.5355112392865247;
    msg.vel_n = 0.283459186618074;
    msg.vel_e = 0.039832407917352874;
    msg.vel_d = 0.2914209532179687;
    msg.speed = 0.5531793029146789;
    msg.gspeed = 0.20550424427899572;
    msg.heading = 0.5402201431123922;
    msg.sacc = 0.6356140980637289;
    msg.cacc = 0.8722947637750971;

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
    msg.setTimeStamp(0.6844925615169641);
    msg.setSource(63109U);
    msg.setSourceEntity(192U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(181U);
    msg.id = 233U;
    msg.value = 0.007758331866222989;

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
    msg.setTimeStamp(0.9566013385548296);
    msg.setSource(34902U);
    msg.setSourceEntity(61U);
    msg.setDestination(36446U);
    msg.setDestinationEntity(69U);
    msg.id = 214U;
    msg.value = 0.28275314791054107;

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
    msg.setTimeStamp(0.43450547690472696);
    msg.setSource(33425U);
    msg.setSourceEntity(220U);
    msg.setDestination(37321U);
    msg.setDestinationEntity(24U);
    msg.id = 43U;
    msg.value = 0.5117294693083385;

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
    msg.setTimeStamp(0.9553263921569083);
    msg.setSource(19629U);
    msg.setSourceEntity(146U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(90U);
    msg.x = 0.9139231530020524;
    msg.y = 0.16769890482320782;
    msg.z = 0.3414952839559887;
    msg.phi = 0.30006736363317;
    msg.theta = 0.5363081897160589;
    msg.psi = 0.5763902061842198;

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
    msg.setTimeStamp(0.3438515324289879);
    msg.setSource(13478U);
    msg.setSourceEntity(57U);
    msg.setDestination(37822U);
    msg.setDestinationEntity(175U);
    msg.x = 0.2122048315689531;
    msg.y = 0.44503113306999764;
    msg.z = 0.2857265341381985;
    msg.phi = 0.8294967859391447;
    msg.theta = 0.5391234743276007;
    msg.psi = 0.4436555967870598;

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
    msg.setTimeStamp(0.9411017406877166);
    msg.setSource(51224U);
    msg.setSourceEntity(252U);
    msg.setDestination(11242U);
    msg.setDestinationEntity(12U);
    msg.x = 0.11104130890253672;
    msg.y = 0.980048665859424;
    msg.z = 0.1751667967510353;
    msg.phi = 0.16831500274841416;
    msg.theta = 0.9482154259885681;
    msg.psi = 0.10739121985092348;

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
    msg.setTimeStamp(0.9975364402749474);
    msg.setSource(43876U);
    msg.setSourceEntity(71U);
    msg.setDestination(37452U);
    msg.setDestinationEntity(19U);
    msg.beam_width = 0.5941984739101853;
    msg.beam_height = 0.6205918641413104;

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
    msg.setTimeStamp(0.8364542721128878);
    msg.setSource(236U);
    msg.setSourceEntity(237U);
    msg.setDestination(57896U);
    msg.setDestinationEntity(86U);
    msg.beam_width = 0.3591254151003699;
    msg.beam_height = 0.28870080797939646;

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
    msg.setTimeStamp(0.9176505236651841);
    msg.setSource(3937U);
    msg.setSourceEntity(114U);
    msg.setDestination(12238U);
    msg.setDestinationEntity(53U);
    msg.beam_width = 0.5278856454170432;
    msg.beam_height = 0.6294963706611013;

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
    msg.setTimeStamp(0.18655422746647166);
    msg.setSource(14413U);
    msg.setSourceEntity(54U);
    msg.setDestination(22879U);
    msg.setDestinationEntity(143U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.9412792564757745);
    msg.setSource(15809U);
    msg.setSourceEntity(31U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(168U);
    msg.sane = 123U;

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
    msg.setTimeStamp(0.12915468835310018);
    msg.setSource(39398U);
    msg.setSourceEntity(53U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(251U);
    msg.sane = 213U;

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
    msg.setTimeStamp(0.7449747563644712);
    msg.setSource(11035U);
    msg.setSourceEntity(221U);
    msg.setDestination(23867U);
    msg.setDestinationEntity(179U);
    msg.id = 37U;
    msg.zoom = 95U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.5866935930196209);
    msg.setSource(46512U);
    msg.setSourceEntity(209U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(13U);
    msg.id = 220U;
    msg.zoom = 102U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.588045174646556);
    msg.setSource(15869U);
    msg.setSourceEntity(172U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(192U);
    msg.id = 7U;
    msg.zoom = 159U;
    msg.action = 155U;

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
    msg.setTimeStamp(0.9486947796496945);
    msg.setSource(15714U);
    msg.setSourceEntity(40U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(16U);
    msg.id = 71U;
    msg.value = 0.17938079946679686;

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
    msg.setTimeStamp(0.22663102376716004);
    msg.setSource(15615U);
    msg.setSourceEntity(34U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(184U);
    msg.id = 104U;
    msg.value = 0.4379921638373465;

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
    msg.setTimeStamp(0.003605162532098638);
    msg.setSource(33647U);
    msg.setSourceEntity(8U);
    msg.setDestination(19179U);
    msg.setDestinationEntity(165U);
    msg.id = 207U;
    msg.value = 0.2273994137041816;

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
    msg.setTimeStamp(0.6522514252998981);
    msg.setSource(56176U);
    msg.setSourceEntity(162U);
    msg.setDestination(12062U);
    msg.setDestinationEntity(1U);
    msg.id = 221U;
    msg.value = 0.9178926650539092;

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
    msg.setTimeStamp(0.4210513320611249);
    msg.setSource(9259U);
    msg.setSourceEntity(139U);
    msg.setDestination(52457U);
    msg.setDestinationEntity(112U);
    msg.id = 197U;
    msg.value = 0.5310083256862979;

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
    msg.setTimeStamp(0.24761603392088638);
    msg.setSource(14410U);
    msg.setSourceEntity(239U);
    msg.setDestination(35956U);
    msg.setDestinationEntity(145U);
    msg.id = 35U;
    msg.value = 0.4705459418596005;

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
    msg.setTimeStamp(0.004626430316996943);
    msg.setSource(31032U);
    msg.setSourceEntity(29U);
    msg.setDestination(47513U);
    msg.setDestinationEntity(33U);
    msg.id = 59U;
    msg.angle = 0.008712179942884535;

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
    msg.setTimeStamp(0.7636342880646684);
    msg.setSource(40739U);
    msg.setSourceEntity(49U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(12U);
    msg.id = 21U;
    msg.angle = 0.616526102604694;

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
    msg.setTimeStamp(0.9815656485892824);
    msg.setSource(42835U);
    msg.setSourceEntity(161U);
    msg.setDestination(13491U);
    msg.setDestinationEntity(16U);
    msg.id = 111U;
    msg.angle = 0.6870775942588558;

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
    msg.setTimeStamp(0.6573525143749033);
    msg.setSource(6745U);
    msg.setSourceEntity(118U);
    msg.setDestination(24283U);
    msg.setDestinationEntity(154U);
    msg.op = 116U;
    msg.actions.assign("DDWGMYZEYHMBOQITLKBDPHUYSCUZAKKONZBXTBNCJMCXVFANIWSGJNZQMGEPWJVULSGCKIWJXDRFKPZVFFRVYWZOHPZSXGTQGRS");

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
    msg.setTimeStamp(0.06964802530715142);
    msg.setSource(23895U);
    msg.setSourceEntity(99U);
    msg.setDestination(40490U);
    msg.setDestinationEntity(248U);
    msg.op = 50U;
    msg.actions.assign("ZEYTMZQBADWIYBTDPSFAPGFRJHBQMNTLNEORBMYGWJDASZTYTJDJDCWMFUJNIFZCLLZOXUEXKEHDBHCKIXXKQXFYWCI");

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
    msg.setTimeStamp(0.7232514687338749);
    msg.setSource(49048U);
    msg.setSourceEntity(76U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(128U);
    msg.op = 229U;
    msg.actions.assign("ZCFFELXNSDAJQEEUNGIUMSDKSXQMNZTGQWDOEYKRWQVGMOSXYXVMEJPUBQZCFLQMLDRSRFSIPIPDBEPMANRFKBHYAEROJPIKGCJONSJPXKCIKBTJITXMFGLYFK");

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
    msg.setTimeStamp(0.42048920419962255);
    msg.setSource(28091U);
    msg.setSourceEntity(115U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("WMGCCVYAMJJQMNXQIKRTXYELHVAHYLBIKCNFNXPPJPUVGAZJJHECYNEPZDZUNTYUKOLUQRRFAMDIDMFVFTBAQBMPSSLCBOCIOQIWPMGQVONKBLSUXDWLAFXQFREGLWTKOUKKDWTETFF");

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
    msg.setTimeStamp(0.2799167495706223);
    msg.setSource(11642U);
    msg.setSourceEntity(182U);
    msg.setDestination(23724U);
    msg.setDestinationEntity(40U);
    msg.actions.assign("TTAFOMCRSXXZKJXQGVSSKMQHFKYIOYNFLVYMCPVBOJCBGBWXIULHFFSRBREVBUWUTLVKXMJZSVADGMIGFIGTDDQDLIX");

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
    msg.setTimeStamp(0.7112102636940912);
    msg.setSource(46743U);
    msg.setSourceEntity(89U);
    msg.setDestination(43154U);
    msg.setDestinationEntity(64U);
    msg.actions.assign("PRACULQCTOIUGEFJWHHUJWPNJLOBSYZMHZCGXKQVELXDQHUNRRZGTWVGUPTWBJJXBSCTBUMDXINIDSAXJPIAYLVWDVAT");

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
    msg.setTimeStamp(0.549982046733155);
    msg.setSource(60896U);
    msg.setSourceEntity(44U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(79U);
    msg.button = 75U;
    msg.value = 133U;

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
    msg.setTimeStamp(0.10622540460001306);
    msg.setSource(16181U);
    msg.setSourceEntity(8U);
    msg.setDestination(57850U);
    msg.setDestinationEntity(45U);
    msg.button = 146U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.23373194397349606);
    msg.setSource(42600U);
    msg.setSourceEntity(41U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(217U);
    msg.button = 73U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.44594077840767243);
    msg.setSource(41476U);
    msg.setSourceEntity(79U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(123U);
    msg.op = 42U;
    msg.text.assign("SNCYGVMPOEZCTODOWKFLMGEYNXDKXSRKKZFFBKCYEDBVHUWEIXVOVKOFTHIJHLHBRYGAJMAYLDXOAMNWURGSAIX");

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
    msg.setTimeStamp(0.7737482749880704);
    msg.setSource(35027U);
    msg.setSourceEntity(100U);
    msg.setDestination(41973U);
    msg.setDestinationEntity(135U);
    msg.op = 52U;
    msg.text.assign("NDVMEXRJNMBYDRCVTADKLWEPXIFYYMESWHTZZBVAEDUFGTUPIOQILCXAHOSGFJZXPIZKWCUJLMZBTLECWHZQQKWMIVIQSU");

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
    msg.setTimeStamp(0.2526196725217801);
    msg.setSource(15507U);
    msg.setSourceEntity(250U);
    msg.setDestination(22061U);
    msg.setDestinationEntity(116U);
    msg.op = 159U;
    msg.text.assign("SAJCAOLXSJBVBCKPMXZQHQOOHYGXZIFVSTUUEWPXUPSIEKGGUAYJSECLYCITXDRNRVQNG");

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
    msg.setTimeStamp(0.18808575467884503);
    msg.setSource(518U);
    msg.setSourceEntity(111U);
    msg.setDestination(44855U);
    msg.setDestinationEntity(228U);
    msg.op = 224U;
    msg.time_remain = 0.844294512840982;
    msg.sched_time = 0.089490936722179;

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
    msg.setTimeStamp(0.9009631876066633);
    msg.setSource(36953U);
    msg.setSourceEntity(210U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(5U);
    msg.op = 57U;
    msg.time_remain = 0.9587865622007501;
    msg.sched_time = 0.16596578935544493;

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
    msg.setTimeStamp(0.6585548647706198);
    msg.setSource(49944U);
    msg.setSourceEntity(232U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(52U);
    msg.op = 206U;
    msg.time_remain = 0.9998160570466207;
    msg.sched_time = 0.47100657606825036;

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
    msg.setTimeStamp(0.9416982393526293);
    msg.setSource(40628U);
    msg.setSourceEntity(104U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(44U);
    msg.name.assign("DFKPJUOHMGUJCHDIOAVKIHRVRRIPPWNOCCQTNLTGJMAYHDKCLCLC");
    msg.op = 223U;
    msg.sched_time = 0.8532828235599315;

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
    msg.setTimeStamp(0.571671109337555);
    msg.setSource(8835U);
    msg.setSourceEntity(153U);
    msg.setDestination(27437U);
    msg.setDestinationEntity(115U);
    msg.name.assign("FVWWIBVKKCACLBBJOMHGMZNKYUPVAGDNWFYLHTIQZBMJEJWSDMSXZLQYXRNVJNHEZTMXRHOASAJCFIRIUKRZSEUXREVLSWFYIOQECDJXEGDIRKDUMCGGWKBZZTYYTOWHAZNFNKQ");
    msg.op = 150U;
    msg.sched_time = 0.6873231844271533;

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
    msg.setTimeStamp(0.6670293971525945);
    msg.setSource(6512U);
    msg.setSourceEntity(97U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(216U);
    msg.name.assign("LMBXTRUHFQNZSVDWTRQLQZUEXZGZAUDFHTPDAGXNDSTFHBKUWVDJVXNMOZR");
    msg.op = 208U;
    msg.sched_time = 0.7421640530945157;

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
    msg.setTimeStamp(0.21036063474358924);
    msg.setSource(56444U);
    msg.setSourceEntity(119U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.47885001423242024);
    msg.setSource(15611U);
    msg.setSourceEntity(29U);
    msg.setDestination(58233U);
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
    msg.setTimeStamp(0.3159684783649027);
    msg.setSource(51210U);
    msg.setSourceEntity(216U);
    msg.setDestination(31152U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.2891117198460884);
    msg.setSource(54311U);
    msg.setSourceEntity(91U);
    msg.setDestination(43819U);
    msg.setDestinationEntity(187U);
    msg.name.assign("PXWCOOVAHJCNZFGJVUQQIGHWGDPZJLTSRDQZTPKMNAAXFCEESLMVQOBDOBMSBDXBZYTSKUVNEAPIAOJKDLWSRRDXYYCYIQOHSMXTWYLZUGNARVPFIKULQWIJQTULOMTTXSJUHGPNWWEJNXBLAMOQICWTEIZJEZFWGGYIRVXH");
    msg.state = 29U;

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
    msg.setTimeStamp(0.9950915912587274);
    msg.setSource(37841U);
    msg.setSourceEntity(122U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(130U);
    msg.name.assign("ROLSGCBEEANMNOKRSPYWD");
    msg.state = 53U;

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
    msg.setTimeStamp(0.22420124230126848);
    msg.setSource(23798U);
    msg.setSourceEntity(52U);
    msg.setDestination(65271U);
    msg.setDestinationEntity(150U);
    msg.name.assign("NSTROCPHNZJIBVVFLCYKUUMRDPWHLFHYJUKULERGPTFEKIQTWNBWXHUQDBMIIWNAXXCUDRTHMAHCNBFWPOHLMRCCDNPAXMQLWAYYGMNGHTJGRFBGYOFEUZDZFSTDOXMJCNOVOZKQWJRVHRZYLZRXWAOPQJJIMRAUVTEDSTFFS");
    msg.state = 5U;

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
    msg.setTimeStamp(0.37961692875874153);
    msg.setSource(18684U);
    msg.setSourceEntity(174U);
    msg.setDestination(56874U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TYMRHSJOXOKASHIGRYCNKXGPJACRUTKJVQKLZQOYHVUJHWQBTTVVQNYUDBWUBPXPYTRSSVA");
    msg.value = 36U;

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
    msg.setTimeStamp(0.9133008797666673);
    msg.setSource(24518U);
    msg.setSourceEntity(240U);
    msg.setDestination(32391U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GIFOCKUWJGEIIWNFZMQSEOVDRXVNRRROBPAKNIEXATMQMXNQKMFYUCRIPWKLDBZLPNQWEXSGTCBSMAXIKPHSOEDQX");
    msg.value = 5U;

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
    msg.setTimeStamp(0.6961812863114558);
    msg.setSource(38459U);
    msg.setSourceEntity(224U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(225U);
    msg.name.assign("GHWNUNQWPLKGYJADQWMTROJHZLFKXATUPHPXRKBXWCVMKFUSJOENCDYFKMJAUJEAEOYDDGEOZRBGYBYZHNICQFGDDEXZKNQQTBOGAKBYPDCPSNVXIFDBJWNVVAHHJSVKSQYFSIMQJURJXMPUWGEXLWJVVOPHEGALZZ");
    msg.value = 191U;

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
    msg.setTimeStamp(0.7389470401937263);
    msg.setSource(7930U);
    msg.setSourceEntity(187U);
    msg.setDestination(18495U);
    msg.setDestinationEntity(9U);
    msg.name.assign("UGAQIBJFYHPZUVPRBCZICXEELAKSLHJNTRSGZZSLNIYHBNXFFMIGQRAFDXJIOJOHPQZSDNSZRAIGCDTYNXLIFVFGESBZTXBQFWLHWNVVWYNXFMGHCXLDJOUOLQWXKGBVTMALRIYCDMQJRIMAPWUPCNPTQTEAPLPBEYMVAKKRSWKMEOEAVTSTYPSOHDNRZYVDVCEUGBOWNKGUXDACDXHLUFWGKCEZRYUJDWJQWOKMBJZQOQUSYPHEOMFJT");

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
    msg.setTimeStamp(0.4632382190691279);
    msg.setSource(31452U);
    msg.setSourceEntity(30U);
    msg.setDestination(25957U);
    msg.setDestinationEntity(4U);
    msg.name.assign("NCGBPXDNPYIGLW");

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
    msg.setTimeStamp(0.12306336104723847);
    msg.setSource(10747U);
    msg.setSourceEntity(183U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(231U);
    msg.name.assign("TIFEUPJPLXNCLFFYEUFHONFCUOSQUTDHOYBABMIWGEDQWUXWFKPCDENPTJBHWJBSJMRKLHKLSRDQHOVILJQEGSDDGNIPQVOVAUJPLVPIAPRMNRBKFAPCTMSFAUZIQRATVKWQMZEZHFZOZJHRFGWVIGVIRKJCBGLYOECYXT");

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
    msg.setTimeStamp(0.5108088437884452);
    msg.setSource(46122U);
    msg.setSourceEntity(84U);
    msg.setDestination(35758U);
    msg.setDestinationEntity(42U);
    msg.name.assign("PNGJXQAILEJZXANZFMTQYPNVQDOHJMTKOIYWFUEPGOEJQTHHLFJSZPOYXDUBXWVBQKGPQFDTUKISSSHQWKZOZHFUJFABEIIAGDRJMILIFZLCWDBSVGXIWMYEMTSNDKOWFUACKUMATONXPRSTLPPDDRSLCRVWXFQLCFTRBTEKSZZYMAVWENIKLYLAGUIOYHGMYJVXVRQBAAWUESZMNCOCHTPW");
    msg.value = 149U;

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
    msg.setTimeStamp(0.43337215297783427);
    msg.setSource(7249U);
    msg.setSourceEntity(129U);
    msg.setDestination(28189U);
    msg.setDestinationEntity(105U);
    msg.name.assign("PQBNIKRAOKQDLMWZKKPHJXBJMIMPTLHRUHCZXADQHGGZEDIEDFUTOIIHOLXMWTBTQHCUTBGTEGUCPMSSQLCVNOAVLNAAIBEOJTLRXYYJGOAWVXZYXFFISYRCKMTQILKCVZADMNHXFGVXFBBQPKCJTDNYLHSUJWNEHWSEWUBFPRIEONQSYZUFGLPWCBQTOVZYJAONBDRDRKEFQYDP");
    msg.value = 152U;

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
    msg.setTimeStamp(0.2554054487254722);
    msg.setSource(19007U);
    msg.setSourceEntity(232U);
    msg.setDestination(52880U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QJZFZBNYXWSNVGILFAUFZXISLWENOROLHEGAMY");
    msg.value = 19U;

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
    msg.setTimeStamp(0.010949801115400337);
    msg.setSource(23274U);
    msg.setSourceEntity(16U);
    msg.setDestination(56228U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.5996202917008614;
    msg.lon = 0.8160327079223418;
    msg.height = 0.8913942844324381;
    msg.x = 0.010545556233316433;
    msg.y = 0.15508643128321176;
    msg.z = 0.02272180377958055;
    msg.phi = 0.9510258546262943;
    msg.theta = 0.21319248815180292;
    msg.psi = 0.8874642149704817;
    msg.u = 0.9790327809733652;
    msg.v = 0.2973608243990392;
    msg.w = 0.2742983299638966;
    msg.vx = 0.3277266325265835;
    msg.vy = 0.5320017622565073;
    msg.vz = 0.9389203454523828;
    msg.p = 0.28320250621251997;
    msg.q = 0.9552586983981629;
    msg.r = 0.12925123570996933;
    msg.depth = 0.893407403540592;
    msg.alt = 0.01913005710686011;

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
    msg.setTimeStamp(0.7087263065015371);
    msg.setSource(26583U);
    msg.setSourceEntity(62U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9023871298923228;
    msg.lon = 0.8909669905726734;
    msg.height = 0.33613918601590187;
    msg.x = 0.6450907072172135;
    msg.y = 0.7490869638505869;
    msg.z = 0.3093328622921174;
    msg.phi = 0.8276158176206673;
    msg.theta = 0.09267086883345221;
    msg.psi = 0.8998631362190447;
    msg.u = 0.8605053713097394;
    msg.v = 0.0038721613632547447;
    msg.w = 0.7242181563677601;
    msg.vx = 0.9992483882262311;
    msg.vy = 0.69534991296448;
    msg.vz = 0.8601398018458446;
    msg.p = 0.3095747477968013;
    msg.q = 0.39720767196426543;
    msg.r = 0.6289560756704968;
    msg.depth = 0.836838981972;
    msg.alt = 0.9421555188578715;

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
    msg.setTimeStamp(0.817996234186951);
    msg.setSource(29829U);
    msg.setSourceEntity(25U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.5699768364131037;
    msg.lon = 0.30485144995983016;
    msg.height = 0.5649871954621958;
    msg.x = 0.9812502732953714;
    msg.y = 0.7388549892189926;
    msg.z = 0.7731857536627849;
    msg.phi = 0.9462654210936599;
    msg.theta = 0.49170126672280023;
    msg.psi = 0.501851716436272;
    msg.u = 0.27390720984463945;
    msg.v = 0.4337250464168715;
    msg.w = 0.631798609749276;
    msg.vx = 0.6105066791838056;
    msg.vy = 0.3824833699346567;
    msg.vz = 0.5725119049460644;
    msg.p = 0.3705103308514567;
    msg.q = 0.7042828031167484;
    msg.r = 0.24172808711041072;
    msg.depth = 0.7869235774383772;
    msg.alt = 0.05223499347318883;

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
    msg.setTimeStamp(0.3959941888799059);
    msg.setSource(43434U);
    msg.setSourceEntity(143U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(204U);
    msg.x = 0.41965145106928003;
    msg.y = 0.6432085078305863;
    msg.z = 0.2022208148239687;

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
    msg.setTimeStamp(0.024424229569206424);
    msg.setSource(54711U);
    msg.setSourceEntity(233U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(188U);
    msg.x = 0.3421501817027107;
    msg.y = 0.5235996049339333;
    msg.z = 0.5452518600322932;

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
    msg.setTimeStamp(0.46497713878856495);
    msg.setSource(50059U);
    msg.setSourceEntity(238U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(217U);
    msg.x = 0.21656118300172955;
    msg.y = 0.20997606688831683;
    msg.z = 0.13436751463533292;

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
    msg.setTimeStamp(0.46353862624560294);
    msg.setSource(19938U);
    msg.setSourceEntity(52U);
    msg.setDestination(38798U);
    msg.setDestinationEntity(181U);
    msg.value = 0.9579382948462758;

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
    msg.setTimeStamp(0.14989333395228333);
    msg.setSource(16666U);
    msg.setSourceEntity(60U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(172U);
    msg.value = 0.40310073518280287;

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
    msg.setTimeStamp(0.5227931137518089);
    msg.setSource(8007U);
    msg.setSourceEntity(127U);
    msg.setDestination(52982U);
    msg.setDestinationEntity(21U);
    msg.value = 0.34988744402946725;

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
    msg.setTimeStamp(0.08237762976189156);
    msg.setSource(9158U);
    msg.setSourceEntity(15U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(238U);
    msg.value = 0.466592309025578;

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
    msg.setTimeStamp(0.2428920487903501);
    msg.setSource(53496U);
    msg.setSourceEntity(160U);
    msg.setDestination(4584U);
    msg.setDestinationEntity(151U);
    msg.value = 0.530389951457079;

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
    msg.setTimeStamp(0.6214039303738781);
    msg.setSource(34543U);
    msg.setSourceEntity(132U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(174U);
    msg.value = 0.789193011044161;

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
    msg.setTimeStamp(0.1938776686789896);
    msg.setSource(11022U);
    msg.setSourceEntity(231U);
    msg.setDestination(64656U);
    msg.setDestinationEntity(171U);
    msg.x = 0.5874153909354372;
    msg.y = 0.5286071419152599;
    msg.z = 0.6037046685470975;
    msg.phi = 0.3392167822242753;
    msg.theta = 0.80219083633097;
    msg.psi = 0.9880011667260479;
    msg.p = 0.6549952686241287;
    msg.q = 0.4964010171145389;
    msg.r = 0.48744578442439335;
    msg.u = 0.014275912823016657;
    msg.v = 0.7507108745952358;
    msg.w = 0.08057136272829035;
    msg.bias_psi = 0.09650038547268869;
    msg.bias_r = 0.2878607779812762;

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
    msg.setTimeStamp(0.13107502347183386);
    msg.setSource(34469U);
    msg.setSourceEntity(161U);
    msg.setDestination(63251U);
    msg.setDestinationEntity(34U);
    msg.x = 0.19021313844897592;
    msg.y = 0.09153818392079549;
    msg.z = 0.8822071051516686;
    msg.phi = 0.7421949500471284;
    msg.theta = 0.5943865378929585;
    msg.psi = 0.8971394040685075;
    msg.p = 0.2766774951214681;
    msg.q = 0.9250606186326139;
    msg.r = 0.7770632369220872;
    msg.u = 0.5973094742634424;
    msg.v = 0.5246554259961229;
    msg.w = 0.362747806895497;
    msg.bias_psi = 0.5510737354473534;
    msg.bias_r = 0.22838006975063163;

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
    msg.setTimeStamp(0.9137884913684646);
    msg.setSource(3387U);
    msg.setSourceEntity(18U);
    msg.setDestination(49955U);
    msg.setDestinationEntity(92U);
    msg.x = 0.3565721561550581;
    msg.y = 0.3461176673938964;
    msg.z = 0.21286222964159307;
    msg.phi = 0.8726786164769734;
    msg.theta = 0.1504041950710041;
    msg.psi = 0.2333039559256651;
    msg.p = 0.19935738854469176;
    msg.q = 0.9940909861954559;
    msg.r = 0.7325907753814755;
    msg.u = 0.47128700575753957;
    msg.v = 0.08007685049026259;
    msg.w = 0.5114574197162266;
    msg.bias_psi = 0.4088131902998495;
    msg.bias_r = 0.7690396969957073;

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
    msg.setTimeStamp(0.864260491513589);
    msg.setSource(17182U);
    msg.setSourceEntity(169U);
    msg.setDestination(27947U);
    msg.setDestinationEntity(69U);
    msg.bias_psi = 0.7100795091437433;
    msg.bias_r = 0.2611766814339479;
    msg.cog = 0.7175991203873416;
    msg.cyaw = 0.8307698853169123;
    msg.lbl_rej_level = 0.3515326512495617;
    msg.gps_rej_level = 0.30881880329664513;
    msg.custom_x = 0.006706729292331071;
    msg.custom_y = 0.8495938677444426;
    msg.custom_z = 0.6341102588085057;

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
    msg.setTimeStamp(0.7846195566577748);
    msg.setSource(49741U);
    msg.setSourceEntity(208U);
    msg.setDestination(23669U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.24730580361824683;
    msg.bias_r = 0.44915315897350383;
    msg.cog = 0.2934559600388833;
    msg.cyaw = 0.5918870387096932;
    msg.lbl_rej_level = 0.8210324428947929;
    msg.gps_rej_level = 0.9035320102289758;
    msg.custom_x = 0.015139151449926946;
    msg.custom_y = 0.34960055964028003;
    msg.custom_z = 0.24648394223295722;

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
    msg.setTimeStamp(0.9984850828633425);
    msg.setSource(29932U);
    msg.setSourceEntity(166U);
    msg.setDestination(59875U);
    msg.setDestinationEntity(5U);
    msg.bias_psi = 0.2629316069829093;
    msg.bias_r = 0.3368372752837546;
    msg.cog = 0.4758039255690547;
    msg.cyaw = 0.09842766261901792;
    msg.lbl_rej_level = 0.3924269050389151;
    msg.gps_rej_level = 0.15347710903175182;
    msg.custom_x = 0.012002394703060748;
    msg.custom_y = 0.2752555295449355;
    msg.custom_z = 0.5170712903732642;

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
    msg.setTimeStamp(0.5755822462671406);
    msg.setSource(57375U);
    msg.setSourceEntity(180U);
    msg.setDestination(36732U);
    msg.setDestinationEntity(101U);
    msg.utc_time = 0.6863569655555813;
    msg.reason = 46U;

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
    msg.setTimeStamp(0.16865717310455097);
    msg.setSource(55607U);
    msg.setSourceEntity(95U);
    msg.setDestination(19538U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.114599036481972;
    msg.reason = 166U;

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
    msg.setTimeStamp(0.06436644996303276);
    msg.setSource(6222U);
    msg.setSourceEntity(10U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.18737482302471875;
    msg.reason = 119U;

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
    msg.setTimeStamp(0.8238743814459671);
    msg.setSource(6828U);
    msg.setSourceEntity(136U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(120U);
    msg.id = 189U;
    msg.range = 0.2955124618619608;
    msg.acceptance = 186U;

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
    msg.setTimeStamp(0.5919497687789395);
    msg.setSource(7029U);
    msg.setSourceEntity(121U);
    msg.setDestination(61077U);
    msg.setDestinationEntity(222U);
    msg.id = 162U;
    msg.range = 0.6677076583020032;
    msg.acceptance = 23U;

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
    msg.setTimeStamp(0.5384700168004979);
    msg.setSource(15133U);
    msg.setSourceEntity(142U);
    msg.setDestination(52151U);
    msg.setDestinationEntity(233U);
    msg.id = 236U;
    msg.range = 0.8494463824267087;
    msg.acceptance = 50U;

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
    msg.setTimeStamp(0.2053801702405309);
    msg.setSource(19292U);
    msg.setSourceEntity(223U);
    msg.setDestination(32147U);
    msg.setDestinationEntity(227U);
    msg.type = 50U;
    msg.reason = 117U;
    msg.value = 0.5086267370723494;
    msg.timestep = 0.9348153264184429;

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
    msg.setTimeStamp(0.9594618534354564);
    msg.setSource(41521U);
    msg.setSourceEntity(80U);
    msg.setDestination(4993U);
    msg.setDestinationEntity(48U);
    msg.type = 171U;
    msg.reason = 197U;
    msg.value = 0.6182883574276985;
    msg.timestep = 0.7406966787603079;

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
    msg.setTimeStamp(0.12312988612695208);
    msg.setSource(17315U);
    msg.setSourceEntity(215U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(55U);
    msg.type = 56U;
    msg.reason = 104U;
    msg.value = 0.09538403121778338;
    msg.timestep = 0.05229520181141689;

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
    msg.setTimeStamp(0.9207635369349907);
    msg.setSource(41798U);
    msg.setSourceEntity(229U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.08450243960627069);
    msg.setSource(24554U);
    msg.setSourceEntity(143U);
    msg.setDestination(8848U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.6850337291554716);
    msg.setSource(30885U);
    msg.setSourceEntity(189U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.8302362033557821);
    msg.setSource(48875U);
    msg.setSourceEntity(59U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(245U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JNGQXPKHGIIMEBBBUVDPTULVJKKOSRTCESGFDOBVQDXYECCUVSUWPGTAHOAF");
    tmp_msg_0.lat = 0.31107007795315855;
    tmp_msg_0.lon = 0.8839470516497862;
    tmp_msg_0.depth = 0.3830027218492331;
    tmp_msg_0.query_channel = 198U;
    tmp_msg_0.reply_channel = 134U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7987691246886545;
    msg.y = 0.7046525049617568;
    msg.var_x = 0.9118331889103213;
    msg.var_y = 0.5676771970579808;
    msg.distance = 0.0724191150748893;

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
    msg.setTimeStamp(0.6345560682554762);
    msg.setSource(1570U);
    msg.setSourceEntity(100U);
    msg.setDestination(47997U);
    msg.setDestinationEntity(31U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XJPMRYSZTNAPQNKNWMMLCRUVJEHVXZEFOBLGAUCYJLIEBMADOQDSNPFRFQXZNTPZTQJOBRNEFKBVZISQAYOMIIHOEZZPHRGERSWWDDWHERKTCWSZIBJHCUIRNPVOBVUYNASGTCKQFDVWFKCUICMMXMRHASUAYHOVZXLXCBYSXPKEQGDJIHQPXJMUSFUDCBMLTYJRFDHXNXLO");
    tmp_msg_0.lat = 0.587429172862452;
    tmp_msg_0.lon = 0.3013368265131444;
    tmp_msg_0.depth = 0.07413647340775142;
    tmp_msg_0.query_channel = 138U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 80U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6430438127709254;
    msg.y = 0.880353124131119;
    msg.var_x = 0.4271304625953496;
    msg.var_y = 0.6522654447350966;
    msg.distance = 0.9325080655009618;

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
    msg.setTimeStamp(0.7404059381960743);
    msg.setSource(47528U);
    msg.setSourceEntity(81U);
    msg.setDestination(11984U);
    msg.setDestinationEntity(54U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KBVFZGHKBRUCKXCITUBDOTTSBRECRPCDYCLWKOYGJAKJXNEQXPCYBAICVXECCLGPMVLMATKKVELSQDUQIVZGYZOFYFABWTYAULRHSYHYZEQYNXDNIEBDWSEMTZMNLRRVUADPTBWAMZQRQAKXFELMSHFJROFNIIFMPBTFOAJJNNJMUKDPYQRQNGXOQOXJJDZLJLAVOHOPOKBWNSPUWPUGSDWTLVHHZGXWFH");
    tmp_msg_0.lat = 0.3180387759662615;
    tmp_msg_0.lon = 0.9361027903624567;
    tmp_msg_0.depth = 0.07745075799556866;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 137U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7063642420230222;
    msg.y = 0.593537861119069;
    msg.var_x = 0.009845532829098391;
    msg.var_y = 0.1185667459080253;
    msg.distance = 0.0385883516950799;

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
    msg.setTimeStamp(0.5525228717725367);
    msg.setSource(7575U);
    msg.setSourceEntity(139U);
    msg.setDestination(33382U);
    msg.setDestinationEntity(203U);
    msg.state = 249U;

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
    msg.setTimeStamp(0.42821461744033573);
    msg.setSource(19454U);
    msg.setSourceEntity(83U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(206U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.4280823082058256);
    msg.setSource(44296U);
    msg.setSourceEntity(173U);
    msg.setDestination(62299U);
    msg.setDestinationEntity(123U);
    msg.state = 61U;

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
    msg.setTimeStamp(0.9865903337407278);
    msg.setSource(13091U);
    msg.setSourceEntity(45U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(19U);
    msg.value = 0.7239895390495507;

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
    msg.setTimeStamp(0.1212718438504069);
    msg.setSource(45627U);
    msg.setSourceEntity(146U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(193U);
    msg.value = 0.4588383067642372;

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
    msg.setTimeStamp(0.38112103569477884);
    msg.setSource(4037U);
    msg.setSourceEntity(236U);
    msg.setDestination(656U);
    msg.setDestinationEntity(37U);
    msg.value = 0.3054142051977726;

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
    msg.setTimeStamp(0.910784569996678);
    msg.setSource(9084U);
    msg.setSourceEntity(173U);
    msg.setDestination(44359U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6219789915855782;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.9671802102131735);
    msg.setSource(10401U);
    msg.setSourceEntity(44U);
    msg.setDestination(46843U);
    msg.setDestinationEntity(131U);
    msg.value = 0.11206141724217455;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.896775508567692);
    msg.setSource(55128U);
    msg.setSourceEntity(172U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(211U);
    msg.value = 0.882262236323342;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.2800797853397107);
    msg.setSource(45823U);
    msg.setSourceEntity(219U);
    msg.setDestination(26380U);
    msg.setDestinationEntity(179U);
    msg.value = 0.4602753299561805;
    msg.speed_units = 223U;

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
    msg.setTimeStamp(0.342067890431899);
    msg.setSource(16865U);
    msg.setSourceEntity(190U);
    msg.setDestination(38232U);
    msg.setDestinationEntity(79U);
    msg.value = 0.4287241695064138;
    msg.speed_units = 216U;

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
    msg.setTimeStamp(0.6048156050277954);
    msg.setSource(33306U);
    msg.setSourceEntity(94U);
    msg.setDestination(37957U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9868678606768332;
    msg.speed_units = 120U;

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
    msg.setTimeStamp(0.17655757990849974);
    msg.setSource(64487U);
    msg.setSourceEntity(118U);
    msg.setDestination(57977U);
    msg.setDestinationEntity(215U);
    msg.value = 0.05049805974648658;

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
    msg.setTimeStamp(0.6420022897050689);
    msg.setSource(51704U);
    msg.setSourceEntity(141U);
    msg.setDestination(17313U);
    msg.setDestinationEntity(70U);
    msg.value = 0.1227228192488411;

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
    msg.setTimeStamp(0.30874511448802944);
    msg.setSource(12696U);
    msg.setSourceEntity(77U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(119U);
    msg.value = 0.3160146239688717;

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
    msg.setTimeStamp(0.7606524324255026);
    msg.setSource(29069U);
    msg.setSourceEntity(66U);
    msg.setDestination(58498U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8448447435913186;

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
    msg.setTimeStamp(0.7895174345582313);
    msg.setSource(40566U);
    msg.setSourceEntity(49U);
    msg.setDestination(46933U);
    msg.setDestinationEntity(141U);
    msg.value = 0.14521852538063384;

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
    msg.setTimeStamp(0.09435459968252558);
    msg.setSource(19915U);
    msg.setSourceEntity(61U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7113631512733443;

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
    msg.setTimeStamp(0.19051917942244845);
    msg.setSource(44550U);
    msg.setSourceEntity(68U);
    msg.setDestination(14096U);
    msg.setDestinationEntity(204U);
    msg.value = 0.39336643576482777;

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
    msg.setTimeStamp(0.8010659915897616);
    msg.setSource(60842U);
    msg.setSourceEntity(27U);
    msg.setDestination(3480U);
    msg.setDestinationEntity(28U);
    msg.value = 0.322364245133276;

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
    msg.setTimeStamp(0.11723054333539795);
    msg.setSource(5976U);
    msg.setSourceEntity(9U);
    msg.setDestination(22555U);
    msg.setDestinationEntity(146U);
    msg.value = 0.7931900098690629;

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
    msg.setTimeStamp(0.9318871551045244);
    msg.setSource(17531U);
    msg.setSourceEntity(171U);
    msg.setDestination(22812U);
    msg.setDestinationEntity(184U);
    msg.start_lat = 0.5839891764182054;
    msg.start_lon = 0.6153811290014631;
    msg.start_z = 0.6917360708810493;
    msg.start_z_units = 105U;
    msg.end_lat = 0.15059162929333947;
    msg.end_lon = 0.5509091647008296;
    msg.end_z = 0.7039842250288071;
    msg.end_z_units = 185U;
    msg.speed = 0.5532325590035001;
    msg.speed_units = 54U;
    msg.lradius = 0.7200069288520956;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.45738574250939124);
    msg.setSource(44775U);
    msg.setSourceEntity(179U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.09544761360317444;
    msg.start_lon = 0.041155029500580254;
    msg.start_z = 0.1557171240652836;
    msg.start_z_units = 245U;
    msg.end_lat = 0.8352878454921502;
    msg.end_lon = 0.7772413454502127;
    msg.end_z = 0.7983689727508001;
    msg.end_z_units = 62U;
    msg.speed = 0.7509571183081937;
    msg.speed_units = 254U;
    msg.lradius = 0.6502320933466947;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.3772757499238846);
    msg.setSource(52127U);
    msg.setSourceEntity(158U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(118U);
    msg.start_lat = 0.8037531537972161;
    msg.start_lon = 0.8125541549323743;
    msg.start_z = 0.011480453892408593;
    msg.start_z_units = 88U;
    msg.end_lat = 0.9033678153999245;
    msg.end_lon = 0.8924867933451581;
    msg.end_z = 0.12676949423485517;
    msg.end_z_units = 16U;
    msg.speed = 0.9196782284794386;
    msg.speed_units = 45U;
    msg.lradius = 0.9492976471079277;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.8767359662987089);
    msg.setSource(55831U);
    msg.setSourceEntity(137U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(213U);
    msg.x = 0.4085397565127612;
    msg.y = 0.8938942704882794;
    msg.z = 0.3596484965157577;
    msg.k = 0.9947558294884957;
    msg.m = 0.7032169085194518;
    msg.n = 0.5379379623731845;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.7998943068494702);
    msg.setSource(25993U);
    msg.setSourceEntity(169U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(145U);
    msg.x = 0.3520867622080782;
    msg.y = 0.6288118257131804;
    msg.z = 0.1794304630567608;
    msg.k = 0.745276326589068;
    msg.m = 0.4076590590149365;
    msg.n = 0.2849805627747962;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.7363476533824277);
    msg.setSource(37726U);
    msg.setSourceEntity(142U);
    msg.setDestination(11215U);
    msg.setDestinationEntity(99U);
    msg.x = 0.4127502495920391;
    msg.y = 0.6777640313410245;
    msg.z = 0.7230185392615912;
    msg.k = 0.7316272955757094;
    msg.m = 0.3277204378472295;
    msg.n = 0.5769239710476685;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.9929112108751336);
    msg.setSource(45691U);
    msg.setSourceEntity(4U);
    msg.setDestination(61933U);
    msg.setDestinationEntity(78U);
    msg.value = 0.39369551899014943;

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
    msg.setTimeStamp(0.990975459874262);
    msg.setSource(39743U);
    msg.setSourceEntity(40U);
    msg.setDestination(18933U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8466566785038943;

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
    msg.setTimeStamp(0.7359242821457774);
    msg.setSource(5627U);
    msg.setSourceEntity(27U);
    msg.setDestination(44356U);
    msg.setDestinationEntity(119U);
    msg.value = 0.28670435333346644;

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
    msg.setTimeStamp(0.31822760139493544);
    msg.setSource(6947U);
    msg.setSourceEntity(185U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(47U);
    msg.u = 0.8934569213096634;
    msg.v = 0.2743906843953866;
    msg.w = 0.1772686759891694;
    msg.p = 0.09822605499551573;
    msg.q = 0.8089497254219927;
    msg.r = 0.6913447265539222;
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
    msg.setTimeStamp(0.12528735565102533);
    msg.setSource(40207U);
    msg.setSourceEntity(129U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(164U);
    msg.u = 0.9215905744887505;
    msg.v = 0.33469694154747287;
    msg.w = 0.704168430717584;
    msg.p = 0.27374031295022305;
    msg.q = 0.8570418846394978;
    msg.r = 0.15900628444373233;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.039363567542292865);
    msg.setSource(47009U);
    msg.setSourceEntity(164U);
    msg.setDestination(47358U);
    msg.setDestinationEntity(220U);
    msg.u = 0.9419221831162333;
    msg.v = 0.08693034303938751;
    msg.w = 0.7187473405089083;
    msg.p = 0.4876356712292792;
    msg.q = 0.5167802943293125;
    msg.r = 0.6745939784548033;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.9797200821803654);
    msg.setSource(28235U);
    msg.setSourceEntity(148U);
    msg.setDestination(33873U);
    msg.setDestinationEntity(118U);
    msg.start_lat = 0.6419648472719222;
    msg.start_lon = 0.21546748913483527;
    msg.start_z = 0.5899173526590348;
    msg.start_z_units = 188U;
    msg.end_lat = 0.3335304280681872;
    msg.end_lon = 0.17799155835718516;
    msg.end_z = 0.20504423126559046;
    msg.end_z_units = 134U;
    msg.lradius = 0.03464157827248504;
    msg.flags = 75U;
    msg.x = 0.8302248268113808;
    msg.y = 0.2930587127186858;
    msg.z = 0.7720638873617987;
    msg.vx = 0.6770706010926961;
    msg.vy = 0.6200777124009371;
    msg.vz = 0.7861308891970786;
    msg.course_error = 0.2621978603919993;
    msg.eta = 28456U;

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
    msg.setTimeStamp(0.25980966047008547);
    msg.setSource(12233U);
    msg.setSourceEntity(115U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(20U);
    msg.start_lat = 0.41804984200312834;
    msg.start_lon = 0.5841784254057685;
    msg.start_z = 0.5833115400515826;
    msg.start_z_units = 120U;
    msg.end_lat = 0.48604495192722463;
    msg.end_lon = 0.23627132132468998;
    msg.end_z = 0.3691068715324758;
    msg.end_z_units = 213U;
    msg.lradius = 0.7345626584740192;
    msg.flags = 14U;
    msg.x = 0.09985515778072218;
    msg.y = 0.6818313759328221;
    msg.z = 0.2531928378470958;
    msg.vx = 0.615507768211958;
    msg.vy = 0.18277379484210354;
    msg.vz = 0.5530564722215989;
    msg.course_error = 0.21700390226880029;
    msg.eta = 54985U;

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
    msg.setTimeStamp(0.8376459209840003);
    msg.setSource(58482U);
    msg.setSourceEntity(242U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(123U);
    msg.start_lat = 0.6921051893330892;
    msg.start_lon = 0.7595374238535513;
    msg.start_z = 0.6550229222517927;
    msg.start_z_units = 208U;
    msg.end_lat = 0.09682002471649642;
    msg.end_lon = 0.9191280850991825;
    msg.end_z = 0.42208738778991817;
    msg.end_z_units = 20U;
    msg.lradius = 0.661676167356787;
    msg.flags = 48U;
    msg.x = 0.41571909776802274;
    msg.y = 0.5853966576747734;
    msg.z = 0.36462702734513164;
    msg.vx = 0.43154929283408394;
    msg.vy = 0.8668254404843238;
    msg.vz = 0.5860004465605768;
    msg.course_error = 0.8559581745491583;
    msg.eta = 56608U;

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
    msg.setTimeStamp(0.9901393716512069);
    msg.setSource(41328U);
    msg.setSourceEntity(104U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(110U);
    msg.k = 0.0037420675023115413;
    msg.m = 0.5941915664748717;
    msg.n = 0.3470745239586869;

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
    msg.setTimeStamp(0.5030231423223351);
    msg.setSource(11398U);
    msg.setSourceEntity(159U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(31U);
    msg.k = 0.2853258726001532;
    msg.m = 0.07755018655525181;
    msg.n = 0.7001315299534415;

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
    msg.setTimeStamp(0.7703886357641335);
    msg.setSource(37891U);
    msg.setSourceEntity(143U);
    msg.setDestination(38480U);
    msg.setDestinationEntity(70U);
    msg.k = 0.4750348065847171;
    msg.m = 0.5934241536555768;
    msg.n = 0.6575380643064372;

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
    msg.setTimeStamp(0.2416353031990045);
    msg.setSource(25925U);
    msg.setSourceEntity(178U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(59U);
    msg.p = 0.24884932250827763;
    msg.i = 0.9178815986167285;
    msg.d = 0.03368617550369968;
    msg.a = 0.17703629881270044;

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
    msg.setTimeStamp(0.7178237230203303);
    msg.setSource(52557U);
    msg.setSourceEntity(241U);
    msg.setDestination(52488U);
    msg.setDestinationEntity(134U);
    msg.p = 0.6137289198229258;
    msg.i = 0.0030641022918120875;
    msg.d = 0.5996565755441206;
    msg.a = 0.7716641808295402;

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
    msg.setTimeStamp(0.791637742040471);
    msg.setSource(42769U);
    msg.setSourceEntity(223U);
    msg.setDestination(3498U);
    msg.setDestinationEntity(134U);
    msg.p = 0.5593344777019704;
    msg.i = 0.20941629129935646;
    msg.d = 0.875442075300147;
    msg.a = 0.34509988082604237;

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
    msg.setTimeStamp(0.7250962208805687);
    msg.setSource(56023U);
    msg.setSourceEntity(234U);
    msg.setDestination(9217U);
    msg.setDestinationEntity(136U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.39727268671888927);
    msg.setSource(6391U);
    msg.setSourceEntity(62U);
    msg.setDestination(10461U);
    msg.setDestinationEntity(1U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.12987591894610095);
    msg.setSource(20435U);
    msg.setSourceEntity(155U);
    msg.setDestination(35888U);
    msg.setDestinationEntity(72U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.9464019721640076);
    msg.setSource(48001U);
    msg.setSourceEntity(172U);
    msg.setDestination(17326U);
    msg.setDestinationEntity(68U);
    msg.timeout = 8U;
    msg.lat = 0.05445186886968567;
    msg.lon = 0.13665911824203025;
    msg.z = 0.3749315777374975;
    msg.z_units = 162U;
    msg.speed = 0.9567489749414396;
    msg.speed_units = 36U;
    msg.roll = 0.9875485824697294;
    msg.pitch = 0.1629821220767922;
    msg.yaw = 0.4690383815524616;
    msg.custom.assign("ERMPFOSWACFBVUWZBCTEWRVNPWMOGDMMGHCROWVPMYFITXFHYDDQRVURHBQSZUZAFBSPJCOUEYIOIUAXQYSVBQCHZFQBKBMOGXDJRAXVTHLNUSVERMUAGXBWJGKAXBKILPLJEJFNNQEYWKHZCOGDTXNDMN");

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
    msg.setTimeStamp(0.30935001106575954);
    msg.setSource(39540U);
    msg.setSourceEntity(159U);
    msg.setDestination(8100U);
    msg.setDestinationEntity(112U);
    msg.timeout = 37137U;
    msg.lat = 0.588363031670357;
    msg.lon = 0.15527185678995625;
    msg.z = 0.8197174461899062;
    msg.z_units = 47U;
    msg.speed = 0.5905851145763025;
    msg.speed_units = 169U;
    msg.roll = 0.29718802899050456;
    msg.pitch = 0.4698430240465167;
    msg.yaw = 0.22980902137418446;
    msg.custom.assign("FNNBGPNRQMOSGQJIABJFTWZVPTUZHFHSQLWPUFNOVWRUGVZHJFMYABWTVMBVQNFJFOEWYLGXSUMJKLISHQJCACCEORDDIQNIXLWUIHOYETLGXKXUCFXCFGBMKHGCTVGWNJMESTNNOPAHEZMURVNXKXOPPQKDDGDHDEYTZBATREEWLMOICZCOAIYPRLSTOHQVAYYERAPXZBBLCBPYRVSKMHGKKUWZYU");

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
    msg.setTimeStamp(0.8298021710816634);
    msg.setSource(58755U);
    msg.setSourceEntity(41U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(211U);
    msg.timeout = 46928U;
    msg.lat = 0.170500929226847;
    msg.lon = 0.44165272407534983;
    msg.z = 0.708595967809425;
    msg.z_units = 147U;
    msg.speed = 0.16347324771840965;
    msg.speed_units = 68U;
    msg.roll = 0.12679917559751297;
    msg.pitch = 0.22159293551412085;
    msg.yaw = 0.22560949384611917;
    msg.custom.assign("PWOTWQJRDZWYIXGYESAMGFHONCQVHKRKBPKIZWLDEQFNVUPMNKXKUVIOXYATJDHJMNVNUMJLDBCWAUVYWUSSOXBVJJZAER");

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
    msg.setTimeStamp(0.8916045789516431);
    msg.setSource(8778U);
    msg.setSourceEntity(237U);
    msg.setDestination(42191U);
    msg.setDestinationEntity(195U);
    msg.timeout = 112U;
    msg.lat = 0.5097349706238153;
    msg.lon = 0.07330139162492644;
    msg.z = 0.0636310196842832;
    msg.z_units = 227U;
    msg.speed = 0.2614343029563194;
    msg.speed_units = 223U;
    msg.duration = 19709U;
    msg.radius = 0.6239155015914928;
    msg.flags = 26U;
    msg.custom.assign("KQVBFCRYHCJXATEI");

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
    msg.setTimeStamp(0.32007494031118366);
    msg.setSource(1002U);
    msg.setSourceEntity(227U);
    msg.setDestination(35595U);
    msg.setDestinationEntity(167U);
    msg.timeout = 2513U;
    msg.lat = 0.7770712892534002;
    msg.lon = 0.551556897659178;
    msg.z = 0.7383557745700442;
    msg.z_units = 88U;
    msg.speed = 0.5936356622768117;
    msg.speed_units = 223U;
    msg.duration = 25750U;
    msg.radius = 0.42582576269553774;
    msg.flags = 33U;
    msg.custom.assign("PQQCQCYYHHCDEFZJBUNYKCNWRPCEHVROUXQUNAQGGTJHHZCUQLEOZJCTZRMXALBSRXXAXDEDBCPMVYBQTXKIMRTMNTKBYFYZNUHDSANPTEPSSURCOVWWUVBJJQIDBLDBPZDKHOKCAWVFIRABVOAEJETXDSIXADRMLFV");

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
    msg.setTimeStamp(0.48907377610809377);
    msg.setSource(59836U);
    msg.setSourceEntity(116U);
    msg.setDestination(14795U);
    msg.setDestinationEntity(242U);
    msg.timeout = 27879U;
    msg.lat = 0.3727907572220909;
    msg.lon = 0.2536192723703419;
    msg.z = 0.5180352306750955;
    msg.z_units = 125U;
    msg.speed = 0.19043919374292495;
    msg.speed_units = 252U;
    msg.duration = 57125U;
    msg.radius = 0.9038793696863143;
    msg.flags = 95U;
    msg.custom.assign("HZZRMGRSRJFPMQTFLRKJKMWIEXVSOMONONUYZVFCJWEYAZNSBQGPK");

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
    msg.setTimeStamp(0.6542169823377412);
    msg.setSource(59489U);
    msg.setSourceEntity(219U);
    msg.setDestination(32872U);
    msg.setDestinationEntity(173U);
    msg.custom.assign("PMJOGGHVIQDKVCYIRXHRMBFNYXTUGWLVVGAXYONZGBYS");

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
    msg.setTimeStamp(0.8449746405541322);
    msg.setSource(59354U);
    msg.setSourceEntity(184U);
    msg.setDestination(35164U);
    msg.setDestinationEntity(39U);
    msg.custom.assign("EWYIOELJYUFSWHZXQQFVGBYQIRDIJBLMZDRNCAVRBHYUQQETVLXNWLITKVASBMTKYUCXDNYOYVLMXANISEAHWSTLITHWLQKNIICAIUUDTRQCUPPHATUPURGBWEMKTSXFZPENFJJMPORGATPFZSHJXGJLPMYMDXFDNFLEZSKPKG");

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
    msg.setTimeStamp(0.1855267470816877);
    msg.setSource(39249U);
    msg.setSourceEntity(84U);
    msg.setDestination(11584U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("MQPUKGRYNZPDHLNOYEORYUXNCXJUFTQHZQQOKAUSYMBKRCWFRGVLNGQYUUZXNKCGEATKLFALYPQSLMUXVHZLPMFHDGEMHVAVUWVFBKMGFRVOVIDEODDZFWIHBJPSQBEPNSZJWFXABQIFNCAGXHSDBJNSQTLJPDMAJXGOCRAMOKJJDAICWIRFXVTYLTDSTDRBENUWZJYKLWOMTLCHOIVKCIXSTNVB");

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
    msg.setTimeStamp(0.438503423955131);
    msg.setSource(60560U);
    msg.setSourceEntity(229U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(246U);
    msg.timeout = 52226U;
    msg.lat = 0.5663454359657547;
    msg.lon = 0.6793177306086441;
    msg.z = 0.13926305362012115;
    msg.z_units = 96U;
    msg.duration = 31274U;
    msg.speed = 0.7696908128787302;
    msg.speed_units = 158U;
    msg.type = 104U;
    msg.radius = 0.053159530330981974;
    msg.length = 0.7856873883824698;
    msg.bearing = 0.3246342345051515;
    msg.direction = 202U;
    msg.custom.assign("CHJGQAPNSGJLTVOPTUUBUJOQXTFSFKTWBTIXJMVLZHPWTCMXLNPNREFYRVFEELKJEOUEIYHVMAOUBCMSVRTGHZYKXFOBJYEQYWGRDEXKZRBHJWAHYGQMILMOVBFZURJBCVMHNYSDKGKAUPHWQFEZNKKCJAMWTLALNOBZMSSWLSQZEGZCIQVDCRFTIPXMJRDIUKHZ");

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
    msg.setTimeStamp(0.5090291419168909);
    msg.setSource(38652U);
    msg.setSourceEntity(170U);
    msg.setDestination(4334U);
    msg.setDestinationEntity(232U);
    msg.timeout = 25985U;
    msg.lat = 0.8023626720748933;
    msg.lon = 0.9444841020248932;
    msg.z = 0.3310558208037001;
    msg.z_units = 202U;
    msg.duration = 52179U;
    msg.speed = 0.4209187217161593;
    msg.speed_units = 36U;
    msg.type = 69U;
    msg.radius = 0.30111852504697423;
    msg.length = 0.6975536968627556;
    msg.bearing = 0.1774025846158791;
    msg.direction = 91U;
    msg.custom.assign("QHFENSRQBGOOJRMRJIYZJQYNRUDEFEEFUCAZLFRBUVFDTTZXVIYCPHUGJISLCGJKCKVRGGVJMQKLKIZXJPRGHFWQXKLBPSCEMBKATFFOXUNAHLQXHTSAZLNYSQUZCHZQWBYJNXTBPKYSVGRYDNHWTADVYVWTKMPSDNEZCMOWWOPX");

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
    msg.setTimeStamp(0.7649318489021953);
    msg.setSource(62261U);
    msg.setSourceEntity(26U);
    msg.setDestination(16364U);
    msg.setDestinationEntity(14U);
    msg.timeout = 40428U;
    msg.lat = 0.424879797864282;
    msg.lon = 0.9622328916624546;
    msg.z = 0.12901422990165;
    msg.z_units = 74U;
    msg.duration = 39116U;
    msg.speed = 0.6462377176290452;
    msg.speed_units = 187U;
    msg.type = 46U;
    msg.radius = 0.5257515245360942;
    msg.length = 0.9836922020956397;
    msg.bearing = 0.6886730835601892;
    msg.direction = 245U;
    msg.custom.assign("ECGZPJCTVEYIGTKAYYGNTBMWKETFDDDWRWBNYQLOXVXBJPGFBHYEAXBJHZEFBMSFVCUBLIRRWGDLNKUFKXWMNCEHJFVIUIOTDLQZRRIOKAYYPWVBTSGMUTGOYNAJRDJTIPEMFAWYKQSJCFUCRUPJDLUOZVZHFSSJVRQOTOAQHLPWMVEDUQXOGPOWDPZKXNHSCXGBMQMNKJMNZCAPPRRZIVVLSAHIQAUXLSGICHAXHCWYFSOLL");

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
    msg.setTimeStamp(0.28912894301298564);
    msg.setSource(57880U);
    msg.setSourceEntity(228U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(230U);
    msg.duration = 10931U;
    msg.custom.assign("KLULMXYFHEVRAZPWFJNVMTRBUHWESCLBXDFKAWXNSOJNQBABRMFULDMRLPYJWRHBJFXKKHYRQWQSZEHGSHPYZCIDBCVBWPSZEEDTKHVIAHUTIRYPCGYCZUNOZFMSJMOLJDMDSQJTLXONWIDWPJMAEUINWRQQYEZOGRVKXABQSZCCIDOKLCUGE");

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
    msg.setTimeStamp(0.22901338162794072);
    msg.setSource(53007U);
    msg.setSourceEntity(201U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(111U);
    msg.duration = 20589U;
    msg.custom.assign("LTEKHYBJTLZGMSVKVTRGEMRTMGRDRONJCUYGMEKMAZJEGDSFQXV");

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
    msg.setTimeStamp(0.11757071041923428);
    msg.setSource(16171U);
    msg.setSourceEntity(150U);
    msg.setDestination(58868U);
    msg.setDestinationEntity(98U);
    msg.duration = 54739U;
    msg.custom.assign("HOWFNCKGSEKUDTYUIYCJIWOKWEKVAUPAPSFZXTYFPVITJBIHGHXMCSKHUSDWEQPTNPMNGYCSDTMACOIUYCETJLMDZWFXHLXJQZFDCOJXL");

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
    msg.setTimeStamp(0.37898336012681233);
    msg.setSource(52645U);
    msg.setSourceEntity(212U);
    msg.setDestination(23526U);
    msg.setDestinationEntity(100U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.002840489658855083;
    msg.control.set(tmp_msg_0);
    msg.duration = 4710U;
    msg.custom.assign("NDLDQJERBPYPGROMGNYRBOGZWKTTSXQDSJCKMPIHOQVDLAQWCNDNFDBISZKCMHGIIVENZYFRVVPCDOUVZPBNUDSFUYGWTDHKXJJLMSQJKCYTWAZWTKXUYABFGTSCFAMAJLITGHU");

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
    msg.setTimeStamp(0.4731905992508618);
    msg.setSource(54791U);
    msg.setSourceEntity(160U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(236U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7313404313891115;
    tmp_msg_0.z_units = 207U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22653U;
    msg.custom.assign("SIZTLANJSBPHNZVHBRTLJAOXSQXTAWEFZRNHGFVITEUXDOAJTBGCXCRNGQCXMLPRDJVRWUNSIEEDXGVXKWWAWZBMWOJKLHRCXKEPFTOIFTLDEVRSIBIQJQHYNJVLRHWOOPPDLSYBHFQYGFASBKQRKMHE");

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
    msg.setTimeStamp(0.0054760162468833196);
    msg.setSource(60162U);
    msg.setSourceEntity(236U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(217U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.7930220303657238;
    msg.control.set(tmp_msg_0);
    msg.duration = 50541U;
    msg.custom.assign("YWAMNZFBKFRVJAPHEOHIFHYDUIFBPPCOSKJJRCPALRSXXXKVKPZINEIPGPRBUCFXNQEOGBOCGMSUUXWOPGAMZGAWWJKLJGCNKLZAMFWZVWTTBQVHQDLTUCSMRTNZKZXQITYSQQYLHCBEIMESRBNTJZPBJXOZMIDDELEUHLGVGBVMVQOUJSIGERDFYEQVYIYJLLNVWAUAYYUTKBSTWUJHRXQANDXXSDSVHWOQWKF");

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
    msg.setTimeStamp(0.7300783180311025);
    msg.setSource(53241U);
    msg.setSourceEntity(106U);
    msg.setDestination(46741U);
    msg.setDestinationEntity(174U);
    msg.timeout = 65494U;
    msg.lat = 0.40114166744615287;
    msg.lon = 0.292016783427959;
    msg.z = 0.010715192448759181;
    msg.z_units = 129U;
    msg.speed = 0.9558366887348446;
    msg.speed_units = 12U;
    msg.bearing = 0.9063116644675694;
    msg.cross_angle = 0.30699887828213335;
    msg.width = 0.07430608096772096;
    msg.length = 0.1855021516582025;
    msg.hstep = 0.08825192565329709;
    msg.coff = 62U;
    msg.alternation = 60U;
    msg.flags = 128U;
    msg.custom.assign("AMHDWVWSAXQISPKDVYUJSZCUNQSIZHTBVFCUXNLY");

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
    msg.setTimeStamp(0.11431848735042727);
    msg.setSource(32122U);
    msg.setSourceEntity(217U);
    msg.setDestination(18754U);
    msg.setDestinationEntity(19U);
    msg.timeout = 61457U;
    msg.lat = 0.7252804902446556;
    msg.lon = 0.667768225056224;
    msg.z = 0.6464540506702314;
    msg.z_units = 23U;
    msg.speed = 0.3630684593378942;
    msg.speed_units = 82U;
    msg.bearing = 0.9696137027077939;
    msg.cross_angle = 0.9557843476442441;
    msg.width = 0.8326859221100348;
    msg.length = 0.5046075909834777;
    msg.hstep = 0.47017428704324016;
    msg.coff = 169U;
    msg.alternation = 177U;
    msg.flags = 207U;
    msg.custom.assign("CRZDDCNMAZAGPVBGRHWHSFQXIPHPDDMNFCVHYSTNSZXMUEVKTNIJGUTHAFMCEQRAPHDLOOMFIYWWWZYNQJFOIQYOTDUFEZIXZPGRROSBRACGTIFOZKJESOJCIFKQMXDNQSTXMQUBTEKGQWKGJLNEJGAZQMKAVRQPBSXTPVTIYLYJLSLLYDKCLCHKCVNP");

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
    msg.setTimeStamp(0.6543485540089043);
    msg.setSource(23476U);
    msg.setSourceEntity(246U);
    msg.setDestination(40083U);
    msg.setDestinationEntity(124U);
    msg.timeout = 646U;
    msg.lat = 0.3626926783403336;
    msg.lon = 0.35841420676230784;
    msg.z = 0.36575856603768375;
    msg.z_units = 116U;
    msg.speed = 0.7884349977847698;
    msg.speed_units = 4U;
    msg.bearing = 0.4825578857768211;
    msg.cross_angle = 0.5680192288007303;
    msg.width = 0.13386258206333546;
    msg.length = 0.5330478743126328;
    msg.hstep = 0.6231365005810781;
    msg.coff = 52U;
    msg.alternation = 90U;
    msg.flags = 75U;
    msg.custom.assign("LIJLBEZNVLOTEGBWMTIOOBTHJRXEPVOCUGGGQVHUFCWJLXVIOHKVYIGILVCFXMPXGBBQNLPUXLJJNZIDJBRRXGUNQOETHNSMQKEIACNBSTKYNVTAWHFILJDDGAYRKDFESAXUFSZCMNMPFNZBQAPKOHUBKUDRZEUSORPCZTSDTYUSESLEMVYCCDQRBRZDYAJAMZ");

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
    msg.setTimeStamp(0.4396116748074028);
    msg.setSource(21317U);
    msg.setSourceEntity(28U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(150U);
    msg.timeout = 29119U;
    msg.lat = 0.12162285212191604;
    msg.lon = 0.14806621773181883;
    msg.z = 0.9206354407080923;
    msg.z_units = 58U;
    msg.speed = 0.7965292548399128;
    msg.speed_units = 103U;
    msg.custom.assign("GROVPMEXHQYOQFSWGHIDADAGLWCNUPXDZBJIJFUGAYNTLHBYLOUMZVTBKNJEOVJWSQLPRJZVMPVCJEAIATJBCSWICFJETZEIJVEHKUGZWTNXMLEKKSPGSKHNWMVICKUMQUPAREBDHVKMUXPDTNBFXIKCZUCQYOQBCUIIIQDYEYHMYDRLRXCXFXRPYDOSNXLDWGORYZOFWWALGLMBZQRZGANDBBHFTQQMTV");

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
    msg.setTimeStamp(0.583700604408034);
    msg.setSource(9863U);
    msg.setSourceEntity(147U);
    msg.setDestination(39696U);
    msg.setDestinationEntity(117U);
    msg.timeout = 27181U;
    msg.lat = 0.35409172545853207;
    msg.lon = 0.7550084463528468;
    msg.z = 0.2769819267115201;
    msg.z_units = 222U;
    msg.speed = 0.23757725198700563;
    msg.speed_units = 157U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.39124405459288514;
    tmp_msg_0.y = 0.9378379131127353;
    tmp_msg_0.z = 0.7814762466629063;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IRLRDEEHFCVKJQVWETF");

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
    msg.setTimeStamp(0.39068961717956585);
    msg.setSource(11384U);
    msg.setSourceEntity(18U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(80U);
    msg.timeout = 39592U;
    msg.lat = 0.8249385598949438;
    msg.lon = 0.6599752340986265;
    msg.z = 0.16827704669658183;
    msg.z_units = 16U;
    msg.speed = 0.5639945168643928;
    msg.speed_units = 129U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5394481015760854;
    tmp_msg_0.y = 0.32054088841666384;
    tmp_msg_0.z = 0.8053137276951302;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RUDGSAXZEOUGPNYAOWVPZSGIBDWELOFZTDKVNHKKQMOLSXXPHNDCGFJWYCWVMHDKFTHRIZXDMVCCQIYAXJIXKEBJFDTOAEXORVSNNBVIYBHURQMBJEEGCBQSVVTLOWRCFTBUPATIDQCPJAUAQWOLIFNGFLFTAZAYZWKWEPMKHRHCZWIPVQMDQMKLLKECNQJALQEG");

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
    msg.setTimeStamp(0.14901771942435516);
    msg.setSource(3346U);
    msg.setSourceEntity(52U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(70U);
    msg.x = 0.9670920093923279;
    msg.y = 0.04881639062430532;
    msg.z = 0.3011827613896486;

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
    msg.setTimeStamp(0.29761306655377273);
    msg.setSource(36595U);
    msg.setSourceEntity(126U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(82U);
    msg.x = 0.006074699680997275;
    msg.y = 0.9756493604846904;
    msg.z = 0.48370823966785315;

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
    msg.setTimeStamp(0.6675579997278334);
    msg.setSource(47364U);
    msg.setSourceEntity(181U);
    msg.setDestination(61132U);
    msg.setDestinationEntity(16U);
    msg.x = 0.5558645544545197;
    msg.y = 0.28722167231997087;
    msg.z = 0.16918682862950885;

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
    msg.setTimeStamp(0.6174908714881405);
    msg.setSource(30068U);
    msg.setSourceEntity(123U);
    msg.setDestination(42558U);
    msg.setDestinationEntity(3U);
    msg.timeout = 42430U;
    msg.lat = 0.7887132134742844;
    msg.lon = 0.447378454368335;
    msg.z = 0.5873741292954053;
    msg.z_units = 188U;
    msg.amplitude = 0.8035246291431697;
    msg.pitch = 0.5141669379263223;
    msg.speed = 0.26516737794255285;
    msg.speed_units = 234U;
    msg.custom.assign("RJBTRUCRWHIIEDFAVPQXCSOOOVQUERTGGZFNMRBFPODTZBYPFYLSNTAMJFJAYYFGVTIBWXICHZCZPIMDTPKEBWSYQVDGHPOCKZLMUXNRODVBGMRNSXSHYIKPKNGMUUWQQHSN");

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
    msg.setTimeStamp(0.663635545298612);
    msg.setSource(15130U);
    msg.setSourceEntity(119U);
    msg.setDestination(25723U);
    msg.setDestinationEntity(180U);
    msg.timeout = 51581U;
    msg.lat = 0.594539838962037;
    msg.lon = 0.48453488372802433;
    msg.z = 0.42966239025255415;
    msg.z_units = 17U;
    msg.amplitude = 0.9941516373254473;
    msg.pitch = 0.5377579688647729;
    msg.speed = 0.33231740382516517;
    msg.speed_units = 40U;
    msg.custom.assign("IOKOTQLFIQIOPCTGAJKQNHYGUOZKXXTWGUPSYGMSTCZQVXYLURYHDIGVIFJURVMSKZYPKNBQRTHNEJRTMMFIKDVZJDNPMFMZ");

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
    msg.setTimeStamp(0.3717192398113801);
    msg.setSource(15281U);
    msg.setSourceEntity(27U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(93U);
    msg.timeout = 22828U;
    msg.lat = 0.8748296817715502;
    msg.lon = 0.3779235716683239;
    msg.z = 0.5290818432280898;
    msg.z_units = 81U;
    msg.amplitude = 0.016451474060894977;
    msg.pitch = 0.5689906921649407;
    msg.speed = 0.5432375886906605;
    msg.speed_units = 89U;
    msg.custom.assign("QYCXAGZNVCFAPYAQJFIEMVIEKDHVZQQKBJILDENLGOMIWKMAXRPAOHHEOUGUSZSGWEPTKUUGOFUSGGPBMWKVCTWUNJZZUKTTJDEOGBYEWXAAERQFUUBZILQRIAHMLTTGVWRPZMDXRVCNHFSYRDFYENRWLVPZWKGYOCBLVBHZXTITISKDOQ");

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
    msg.setTimeStamp(0.4052807785407284);
    msg.setSource(911U);
    msg.setSourceEntity(80U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.19013872602917126);
    msg.setSource(4746U);
    msg.setSourceEntity(13U);
    msg.setDestination(25039U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.46847725407773977);
    msg.setSource(33219U);
    msg.setSourceEntity(61U);
    msg.setDestination(13662U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.757257669006858);
    msg.setSource(38599U);
    msg.setSourceEntity(246U);
    msg.setDestination(25361U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.5455676777655607;
    msg.lon = 0.7608823260847813;
    msg.z = 0.05553933719943449;
    msg.z_units = 87U;
    msg.radius = 0.5440011152511914;
    msg.duration = 1822U;
    msg.speed = 0.848181328713856;
    msg.speed_units = 31U;
    msg.custom.assign("JBHEQSQNGFTPUVGJCTLOIVHMPEOMLWAJFCRGFDRDBWHRVCGZAUQLWXALBZKYMSELDBYXCNWZEOVCCPKQAPVXUDCSSFEDOBBLDARXKHEOLWHRSFXSFELJQYTTHKDYUGZVINMSDRVZZGRIZGMCFYBYFNWOITTBIYTJVKTXCXPPEFAGUNQLQNU");

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
    msg.setTimeStamp(0.096658373874693);
    msg.setSource(29960U);
    msg.setSourceEntity(200U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.7822936353771981;
    msg.lon = 0.47424692134018986;
    msg.z = 0.7950290609458915;
    msg.z_units = 161U;
    msg.radius = 0.6977637290333211;
    msg.duration = 41095U;
    msg.speed = 0.9831384007090431;
    msg.speed_units = 56U;
    msg.custom.assign("UTGQYXPVBGLLZVEFZDYRPOOEVFEFPABJXFHQLRXWNFSGZCVKCBNLMWH");

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
    msg.setTimeStamp(0.5888685854352833);
    msg.setSource(41300U);
    msg.setSourceEntity(130U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.5907733539272998;
    msg.lon = 0.27678697146214926;
    msg.z = 0.844524192462686;
    msg.z_units = 150U;
    msg.radius = 0.3582286168465417;
    msg.duration = 33836U;
    msg.speed = 0.7800783993923556;
    msg.speed_units = 118U;
    msg.custom.assign("CTOXAXVZQOXAHKBJHUPADIKKDAAHDJYRTPEBNAGLRIOAEPQTRUFVLQFBDVUTEBIGEGCGYKWXVYOXLNMBHQZDGDPRFGNPAFVGWSYLTGXWXOIRUCNJA");

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
    msg.setTimeStamp(0.32613071163858975);
    msg.setSource(3592U);
    msg.setSourceEntity(32U);
    msg.setDestination(57799U);
    msg.setDestinationEntity(180U);
    msg.timeout = 22127U;
    msg.flags = 252U;
    msg.lat = 0.8212080702758633;
    msg.lon = 0.19333585463375869;
    msg.start_z = 0.103136124679583;
    msg.start_z_units = 241U;
    msg.end_z = 0.04127330636108484;
    msg.end_z_units = 241U;
    msg.radius = 0.6984662601677973;
    msg.speed = 0.869743501730247;
    msg.speed_units = 209U;
    msg.custom.assign("XOVRBBMSLIOXODTMKEGUNAJYCMYHIXVPMZYWRUHWOQJAGVCPXUGSKWIAZYKYXHRDYGZJFWJZMTQIQUKNMRWAQZTTLPXNGORZQIRGOQQWTEBDFVHRSDCCNZHCPABXGFISXNJDLRUSLLSFLEINGRNUFIKPFFGRHUBTFCYEFPZZTPIOCEDMNKTLWASISCAFUOVBHTPYMJEBCYJWNVKBEQBSOKTAYPHWDUNVCEDKJQGV");

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
    msg.setTimeStamp(0.41057694127046673);
    msg.setSource(40427U);
    msg.setSourceEntity(136U);
    msg.setDestination(15671U);
    msg.setDestinationEntity(21U);
    msg.timeout = 39238U;
    msg.flags = 47U;
    msg.lat = 0.19736985659707518;
    msg.lon = 0.07363966185605197;
    msg.start_z = 0.3038089276188616;
    msg.start_z_units = 191U;
    msg.end_z = 0.6351361425070391;
    msg.end_z_units = 103U;
    msg.radius = 0.014054346339931967;
    msg.speed = 0.8602746737227914;
    msg.speed_units = 224U;
    msg.custom.assign("XMARFEXVVZOOEGMWBMSSSMBSDUNVGWOH");

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
    msg.setTimeStamp(0.8117222713072347);
    msg.setSource(7970U);
    msg.setSourceEntity(194U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(231U);
    msg.timeout = 56996U;
    msg.flags = 222U;
    msg.lat = 0.8834349941763929;
    msg.lon = 0.10836258522494235;
    msg.start_z = 0.3061552694342755;
    msg.start_z_units = 7U;
    msg.end_z = 0.553518737876606;
    msg.end_z_units = 103U;
    msg.radius = 0.7806196667736508;
    msg.speed = 0.3395975370184262;
    msg.speed_units = 166U;
    msg.custom.assign("UOENLWCLYVNNAXSLHSELOLDAYPSKDGWGUVEI");

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
    msg.setTimeStamp(0.648385179387471);
    msg.setSource(38554U);
    msg.setSourceEntity(251U);
    msg.setDestination(18240U);
    msg.setDestinationEntity(66U);
    msg.timeout = 44480U;
    msg.lat = 0.9337228849481097;
    msg.lon = 0.5093346139625169;
    msg.z = 0.8544781841758637;
    msg.z_units = 178U;
    msg.speed = 0.5760594072937654;
    msg.speed_units = 244U;
    msg.custom.assign("RJWIHHKSBBVOSMUECXLUJSTOGOAHNMKLGUGYMEOGQ");

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
    msg.setTimeStamp(0.4827510281154128);
    msg.setSource(27617U);
    msg.setSourceEntity(45U);
    msg.setDestination(53036U);
    msg.setDestinationEntity(192U);
    msg.timeout = 54882U;
    msg.lat = 0.4902513358973578;
    msg.lon = 0.5812051915226698;
    msg.z = 0.37184595202238635;
    msg.z_units = 229U;
    msg.speed = 0.9376508973467933;
    msg.speed_units = 232U;
    msg.custom.assign("MXTCEYTUZFEZTDCRLKUCJBGNDDSNMNZFIBQSQGUXDPJYFYFGBKZUHEYGQCMGADQUKVRSYTOCNVSBJQKPSTIIWXIXVYXZWMRORRETVD");

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
    msg.setTimeStamp(0.8437328488447665);
    msg.setSource(27153U);
    msg.setSourceEntity(161U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(8U);
    msg.timeout = 37270U;
    msg.lat = 0.6067332564486273;
    msg.lon = 0.10976479248270266;
    msg.z = 0.5401897237786452;
    msg.z_units = 112U;
    msg.speed = 0.8841598739023047;
    msg.speed_units = 242U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21362431179077557;
    tmp_msg_0.y = 0.9346400716288991;
    tmp_msg_0.z = 0.8756427371819687;
    tmp_msg_0.t = 0.7382724040877946;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QQOMGEWENHQNYURUYZJUKYIPOHCEVOLVIOFHXHKFGVTOTMACWDAWIMFBZZNBBSDSMPWSGPWOUCVIISWUVCDQYTXVPKSXPOBLKDSHHLMSMGLZN");

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
    msg.setTimeStamp(0.7914425549893127);
    msg.setSource(8809U);
    msg.setSourceEntity(98U);
    msg.setDestination(16025U);
    msg.setDestinationEntity(23U);
    msg.x = 0.3855038466268226;
    msg.y = 0.13246336738913245;
    msg.z = 0.2334398197699139;
    msg.t = 0.5664069866222099;

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
    msg.setTimeStamp(0.21689087177138033);
    msg.setSource(43555U);
    msg.setSourceEntity(247U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(147U);
    msg.x = 0.17322257937675267;
    msg.y = 0.05510962889102322;
    msg.z = 0.28170297226609553;
    msg.t = 0.49768055022142654;

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
    msg.setTimeStamp(0.9598844449195675);
    msg.setSource(39305U);
    msg.setSourceEntity(245U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(177U);
    msg.x = 0.006644493825833764;
    msg.y = 0.33358304607683786;
    msg.z = 0.9272608733348294;
    msg.t = 0.5769063880337896;

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
    msg.setTimeStamp(0.17514757718155927);
    msg.setSource(47892U);
    msg.setSourceEntity(98U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(7U);
    msg.timeout = 38808U;
    msg.name.assign("TYHQIWMSVGOTAFNIVNUEPLWCEOEFZBBHFSDKIWJIZZEURGLXWKKJPQLDBJTCHYDSWNEJGMRVZCANMLGEYQWCGXFJHNLVUQFBHYKZPHIJTUEIOPTLAZFDOXS");
    msg.custom.assign("QVXXQRGCUSRNOCFIBFPXAEYMRTATSNWNMZUACJNRZDSKJGLHQHBXIUDQSAVFLTWEKOFELYKELSPDDTCK");

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
    msg.setTimeStamp(0.37251465979288667);
    msg.setSource(33113U);
    msg.setSourceEntity(230U);
    msg.setDestination(14487U);
    msg.setDestinationEntity(112U);
    msg.timeout = 51713U;
    msg.name.assign("VVZSWOYLQNASBUPMPAKKTNJJNCXRDIBPRGUTTFEDTLIQDXMQDWZEWYAEKBVYENLQOPGXBFKIAVIEOCPKYSVZHQKMCAOYGRX");
    msg.custom.assign("OEQAOSYAUNTWMMUXETBCYCHQUTTCSBUEXMGGWDVRULPCLLVQTVXOCURTJHYIPFKMWJBZISGBRJNSPEUXUOXNVGPZIBVQFHYMZETPSBRPIBHYG");

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
    msg.setTimeStamp(0.23998078558657476);
    msg.setSource(35822U);
    msg.setSourceEntity(206U);
    msg.setDestination(52331U);
    msg.setDestinationEntity(2U);
    msg.timeout = 16570U;
    msg.name.assign("JZVSQJCYARQAPRIXLLWEGDQLHABEIQHEYWETTINVYAWFWFMDNPKXAFATKLQSOUWRIXMFRYJEQYTUNVEKDSKPZLVTVYIXBMNLOGPGYQFXLRKCZXRIKZXODYNGPSSKQUZMCJBRZXJDVDQOKMEWLHJOHMKPTGMUTGSCETPBWTSAJGHZAQCPFUBHOPDJXOIPUHCBFWZRI");
    msg.custom.assign("SPUDMSTPBVQBWLXWWYBLNFWLFUOVKARXJXKBCXBDVTEOBQVARUFUFUERUZKCMBSXZTYJHFPPYWHQFAKTXCEMWYJJAQTCFTPOGGGZHVSNMYEOGAQDYXIRPIVOCEUKRUHDLWQVTWDSSNAFZFIGMYZHRSVGNIV");

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
    msg.setTimeStamp(0.2105106822369165);
    msg.setSource(46696U);
    msg.setSourceEntity(13U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.6380626469291404;
    msg.lon = 0.15046778397284977;
    msg.z = 0.5750756198598913;
    msg.z_units = 217U;
    msg.speed = 0.6938550237099208;
    msg.speed_units = 20U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.046017250766400175;
    tmp_msg_0.y = 0.927112305949001;
    tmp_msg_0.z = 0.7319158740470904;
    tmp_msg_0.t = 0.29151314932476513;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31486U;
    tmp_msg_1.off_x = 0.5440438733927123;
    tmp_msg_1.off_y = 0.9186973219444786;
    tmp_msg_1.off_z = 0.8729566226900529;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.1325972313242635;
    msg.custom.assign("TOVUSBFDXRYRYDFTTWLFVGVSKJEJJGPHVBSHLXJCZOYVXBWPVLSBCUIFKKNEIYWQYMDEWXRYUEGFMCAOINPHIPRZOOLFWQHGCYTAKNEERPMNXIXMWQKYCFMAVKAFHWTIESZXMNRNTGPZSCHIVZLGSUDTGWDHFQNACJWKURUJXBZZWNMQQCMMILYHJUKAPKULHTEUPAEZSQFDOGDBNHLCQLBBAJCQVMGXDSOZVIRRNIBOJUQDPDATRJZXYSK");

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
    msg.setTimeStamp(0.9284337948337444);
    msg.setSource(30383U);
    msg.setSourceEntity(126U);
    msg.setDestination(16323U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.43556374346201776;
    msg.lon = 0.39646763951749964;
    msg.z = 0.3080454740275148;
    msg.z_units = 113U;
    msg.speed = 0.7969816205436702;
    msg.speed_units = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12114U;
    tmp_msg_0.off_x = 0.5641699749596092;
    tmp_msg_0.off_y = 0.5856667802147426;
    tmp_msg_0.off_z = 0.6525711813714603;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3378344426252008;
    msg.custom.assign("XSMBMHHEUWKHFODSBLYIMJMIQQZXHCBAIRTQOTUWCQLRSGHVQILPCSFEMLTGTDBDTOEERFJVSHKCOTOVXYPRMYNXGYWVXA");

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
    msg.setTimeStamp(0.5462526164974885);
    msg.setSource(22278U);
    msg.setSourceEntity(212U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.892714705790218;
    msg.lon = 0.4978003486108137;
    msg.z = 0.9830903511981914;
    msg.z_units = 248U;
    msg.speed = 0.2908912886764977;
    msg.speed_units = 57U;
    msg.start_time = 0.13292912611996555;
    msg.custom.assign("ABKNNHYTOCOHRSEDMTNUEIHYUMGSMCUFLBBAHXGJPDLPISADWKVGLWPVAMJGMLVSHGSVWNXCWUODWXCKZTINLDOVPRHQPWJLFEYRIFPQFZRWCI");

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
    msg.setTimeStamp(0.13129345314951746);
    msg.setSource(28454U);
    msg.setSourceEntity(118U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(27U);
    msg.vid = 8672U;
    msg.off_x = 0.7962763697630075;
    msg.off_y = 0.14360628612908055;
    msg.off_z = 0.019767340056194183;

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
    msg.setTimeStamp(0.844892040159191);
    msg.setSource(31502U);
    msg.setSourceEntity(66U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(24U);
    msg.vid = 60040U;
    msg.off_x = 0.20848652963502567;
    msg.off_y = 0.24449186057907368;
    msg.off_z = 0.2572954023666697;

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
    msg.setTimeStamp(0.04512373252838575);
    msg.setSource(9042U);
    msg.setSourceEntity(165U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(156U);
    msg.vid = 21234U;
    msg.off_x = 0.4185214158785472;
    msg.off_y = 0.0466179857211817;
    msg.off_z = 0.6667454632304465;

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
    msg.setTimeStamp(0.59063996755031);
    msg.setSource(29342U);
    msg.setSourceEntity(63U);
    msg.setDestination(28749U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.18252992342267227);
    msg.setSource(7681U);
    msg.setSourceEntity(17U);
    msg.setDestination(47745U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.9832935269941597);
    msg.setSource(23624U);
    msg.setSourceEntity(115U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.1258452026390402);
    msg.setSource(10023U);
    msg.setSourceEntity(128U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(83U);
    msg.mid = 29378U;

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
    msg.setTimeStamp(0.11927262862584931);
    msg.setSource(16555U);
    msg.setSourceEntity(63U);
    msg.setDestination(7745U);
    msg.setDestinationEntity(164U);
    msg.mid = 62285U;

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
    msg.setTimeStamp(0.8040777165535604);
    msg.setSource(43695U);
    msg.setSourceEntity(7U);
    msg.setDestination(4280U);
    msg.setDestinationEntity(114U);
    msg.mid = 25825U;

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
    msg.setTimeStamp(0.140127539050533);
    msg.setSource(58362U);
    msg.setSourceEntity(144U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(187U);
    msg.state = 169U;
    msg.eta = 7740U;
    msg.info.assign("WFKLJQFFDJBTNTTJZRWFJYOXMMSSQJPUYOYZFBDBYWPDGPZLPSFZILDQAYRXHGOEWZNEGWVASMFTAENSWVMCBTMABREQSNGTGZEHGAQHDEQOIPIHXLMUYOUIVZUJLUNKTXYMRSCDCSQXIHQCJKMPUXYUHTPJOCDBON");

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
    msg.setTimeStamp(0.8686903776812416);
    msg.setSource(25985U);
    msg.setSourceEntity(235U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(238U);
    msg.state = 157U;
    msg.eta = 64457U;
    msg.info.assign("VMHQWETIKOTQIEOQLZYOPDASDKLFBBVCYNSASHYSWHCIRNFVPOPKRUJRSYVMMGBFMMYTDEBVIBZWQOABJGJTHJKBZ");

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
    msg.setTimeStamp(0.6547779060672796);
    msg.setSource(46113U);
    msg.setSourceEntity(242U);
    msg.setDestination(47362U);
    msg.setDestinationEntity(122U);
    msg.state = 201U;
    msg.eta = 56877U;
    msg.info.assign("GDPDNOZDGLQTSHTIIAECHNYJTOXKEVZXBFMXSOERENAMQKGNBOWYTCBLQMEID");

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
    msg.setTimeStamp(0.8617931312606676);
    msg.setSource(56681U);
    msg.setSourceEntity(222U);
    msg.setDestination(747U);
    msg.setDestinationEntity(176U);
    msg.system = 59908U;
    msg.duration = 49664U;
    msg.speed = 0.9625503927855232;
    msg.speed_units = 248U;
    msg.x = 0.38954282710495136;
    msg.y = 0.6818486615637336;
    msg.z = 0.4104667152393464;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.5406642749875258);
    msg.setSource(42020U);
    msg.setSourceEntity(194U);
    msg.setDestination(32288U);
    msg.setDestinationEntity(237U);
    msg.system = 21353U;
    msg.duration = 41449U;
    msg.speed = 0.03958591120011978;
    msg.speed_units = 97U;
    msg.x = 0.40396933271471036;
    msg.y = 0.3479858328119122;
    msg.z = 0.6828004379647767;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.6232041281206504);
    msg.setSource(6373U);
    msg.setSourceEntity(63U);
    msg.setDestination(16618U);
    msg.setDestinationEntity(102U);
    msg.system = 45602U;
    msg.duration = 34861U;
    msg.speed = 0.48782430529719656;
    msg.speed_units = 198U;
    msg.x = 0.7921398244224466;
    msg.y = 0.7375388393383492;
    msg.z = 0.02244096566628373;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.6672198705058532);
    msg.setSource(41092U);
    msg.setSourceEntity(127U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.9973004255342718;
    msg.lon = 0.31915801540182853;
    msg.speed = 0.025531489937857366;
    msg.speed_units = 166U;
    msg.duration = 1449U;
    msg.sys_a = 21603U;
    msg.sys_b = 54022U;
    msg.move_threshold = 0.5846223514603639;

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
    msg.setTimeStamp(0.0058298433669567995);
    msg.setSource(4125U);
    msg.setSourceEntity(146U);
    msg.setDestination(37918U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.20400795504144464;
    msg.lon = 0.400970911926552;
    msg.speed = 0.4087616365732718;
    msg.speed_units = 102U;
    msg.duration = 64967U;
    msg.sys_a = 21793U;
    msg.sys_b = 24550U;
    msg.move_threshold = 0.21677289406598943;

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
    msg.setTimeStamp(0.40481604365788004);
    msg.setSource(44350U);
    msg.setSourceEntity(242U);
    msg.setDestination(12722U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.5028226268491466;
    msg.lon = 0.07189857336664784;
    msg.speed = 0.03231083740612373;
    msg.speed_units = 64U;
    msg.duration = 47450U;
    msg.sys_a = 15897U;
    msg.sys_b = 5152U;
    msg.move_threshold = 0.8540718366634282;

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
    msg.setTimeStamp(0.6045250296547646);
    msg.setSource(33676U);
    msg.setSourceEntity(85U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.5531787375000533;
    msg.lon = 0.62370521582818;
    msg.z = 0.911498948993084;
    msg.z_units = 177U;
    msg.speed = 0.38639011633738374;
    msg.speed_units = 232U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.07272065737101319;
    tmp_msg_0.lon = 0.7030503756858248;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QLZLXQDLJMFVSZVLOOOKMNXSDBUQZIOHAVUNDSUPQUKQAHHGTPBVMHFVJLPXWANISYIODVGJCBZRHNLAZRDISCCKKZEQRBI");

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
    msg.setTimeStamp(0.0740638433137073);
    msg.setSource(44334U);
    msg.setSourceEntity(159U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.34558439667285157;
    msg.lon = 0.723841686839916;
    msg.z = 0.8866903339759991;
    msg.z_units = 137U;
    msg.speed = 0.26653729151020344;
    msg.speed_units = 117U;
    msg.custom.assign("IASSXBEDLKGYFGQSNAVMMJRSYAHJARMYFEUOZPDUJOXCNNSVOKYOACYHJOSGWEBJKGVYCTXLXHZB");

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
    msg.setTimeStamp(0.3660614599124795);
    msg.setSource(50645U);
    msg.setSourceEntity(212U);
    msg.setDestination(41914U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.4402126944033181;
    msg.lon = 0.4587248772556739;
    msg.z = 0.9468286159744672;
    msg.z_units = 192U;
    msg.speed = 0.006982629605426394;
    msg.speed_units = 199U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.019542491116013916;
    tmp_msg_0.lon = 0.042557776275742754;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZFHBJZXSDDAHLHIRISAFOKCRQPPBTWTEDXTDUZPJQAVGNRUNRIFUNFKGQGFITDCMYJBJ");

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
    msg.setTimeStamp(0.05217753139365677);
    msg.setSource(8138U);
    msg.setSourceEntity(253U);
    msg.setDestination(61681U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.6406400694820948;
    msg.lon = 0.21240301808123507;

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
    msg.setTimeStamp(0.6553470556057072);
    msg.setSource(12350U);
    msg.setSourceEntity(25U);
    msg.setDestination(40013U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.05991077505284792;
    msg.lon = 0.9135965408104222;

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
    msg.setTimeStamp(0.1446543384011889);
    msg.setSource(13352U);
    msg.setSourceEntity(176U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9221249544137103;
    msg.lon = 0.10241737684964858;

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
    msg.setTimeStamp(0.047751183617666615);
    msg.setSource(16980U);
    msg.setSourceEntity(63U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(79U);
    msg.timeout = 6820U;
    msg.lat = 0.8323157233200531;
    msg.lon = 0.028006435591776402;
    msg.z = 0.4210616895461464;
    msg.z_units = 165U;
    msg.pitch = 0.10514447951379091;
    msg.amplitude = 0.07672441731207247;
    msg.duration = 50026U;
    msg.speed = 0.9391455383411735;
    msg.speed_units = 41U;
    msg.radius = 0.36413065274080936;
    msg.direction = 199U;
    msg.custom.assign("KESJWZHXXPXRXAQADQDXDRTGSKPKWCSGMEWYMTFFDDGVXVNEZDHPENUXTZTTMBMBNANAHMUCKALELAQOEFMQBRRGOUZLCWWMSIXQVVFSYMFQOJHNJVIQGLHGWIHGQJQWIBNPUCNEZYOPBTINFUXPXAGKPCOPOJUUOBJEFISCALWFTZJLYTDRULJDZVIBOWRLKLYDRNKSMIEPPMHBRSKNCHBKYCYWVIVGOFHUZICDSASTYQTKFOZVRBJZRLGC");

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
    msg.setTimeStamp(0.17674218018522048);
    msg.setSource(35573U);
    msg.setSourceEntity(220U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(220U);
    msg.timeout = 8294U;
    msg.lat = 0.5003533627538097;
    msg.lon = 0.8117117649710931;
    msg.z = 0.9938942471182881;
    msg.z_units = 89U;
    msg.pitch = 0.2727868480667579;
    msg.amplitude = 0.46332716901730286;
    msg.duration = 37757U;
    msg.speed = 0.6341377885863966;
    msg.speed_units = 112U;
    msg.radius = 0.2249963279778091;
    msg.direction = 64U;
    msg.custom.assign("VWIOWWPKXRRNSDNDALUETOMRMNQPBODFTLTKHHOQHJBVMPZKUTHWZCNXDGBWICSFPYNJFTUEILYQCMDEMDGPYOBGMREYAZWFEQDJPKGGKCQGIBRWJVHARXTAHEJRNTZZYZOUDLW");

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
    msg.setTimeStamp(0.8752103012536753);
    msg.setSource(23612U);
    msg.setSourceEntity(164U);
    msg.setDestination(19969U);
    msg.setDestinationEntity(36U);
    msg.timeout = 49451U;
    msg.lat = 0.8092410810118912;
    msg.lon = 0.32421080442703987;
    msg.z = 0.9228506584821431;
    msg.z_units = 206U;
    msg.pitch = 0.5468900759595823;
    msg.amplitude = 0.8290848972580167;
    msg.duration = 62525U;
    msg.speed = 0.4265469017293486;
    msg.speed_units = 171U;
    msg.radius = 0.5570757772241908;
    msg.direction = 50U;
    msg.custom.assign("ESHNCACOYZIZQPTBIAIOAIXCPIPONFGNUZJGGTJCHOBWAABRNSWXWENVDBRMZLWUDQHIJFBVAVSSOQRIJAKJWDZCFZDUEOSUIMPWBVZKKTSRCWMAAJLMMFUKTUKMXCRYZOLPNEJVSUUKFEGORTP");

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
    msg.setTimeStamp(0.6113849777089407);
    msg.setSource(24107U);
    msg.setSourceEntity(60U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(98U);
    msg.control_src = 23764U;
    msg.control_ent = 193U;
    msg.timeout = 0.8545224464478247;
    msg.loiter_radius = 0.6166305709881058;
    msg.altitude_interval = 0.37258565985138337;

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
    msg.setTimeStamp(0.5433468659001928);
    msg.setSource(27048U);
    msg.setSourceEntity(200U);
    msg.setDestination(13131U);
    msg.setDestinationEntity(172U);
    msg.control_src = 48565U;
    msg.control_ent = 231U;
    msg.timeout = 0.21254547425618353;
    msg.loiter_radius = 0.2769105024677818;
    msg.altitude_interval = 0.3677105458496289;

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
    msg.setTimeStamp(0.5628247900890325);
    msg.setSource(49572U);
    msg.setSourceEntity(24U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(216U);
    msg.control_src = 60494U;
    msg.control_ent = 122U;
    msg.timeout = 0.5180065721168384;
    msg.loiter_radius = 0.12868142326775267;
    msg.altitude_interval = 0.4800061990526584;

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
    msg.setTimeStamp(0.20543634724047766);
    msg.setSource(46606U);
    msg.setSourceEntity(198U);
    msg.setDestination(52426U);
    msg.setDestinationEntity(107U);
    msg.flags = 220U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18739302617205567;
    tmp_msg_0.speed_units = 57U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5404465355173597;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8347403238009126;
    msg.lon = 0.9910399930087486;
    msg.radius = 0.7994718719598819;

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
    msg.setTimeStamp(0.6462789641123631);
    msg.setSource(50149U);
    msg.setSourceEntity(105U);
    msg.setDestination(20448U);
    msg.setDestinationEntity(28U);
    msg.flags = 88U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6675665205250835;
    tmp_msg_0.speed_units = 43U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15277462342794756;
    tmp_msg_1.z_units = 138U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.03284068785845995;
    msg.lon = 0.768813948949417;
    msg.radius = 0.14652046678433572;

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
    msg.setTimeStamp(0.6832564651798645);
    msg.setSource(42709U);
    msg.setSourceEntity(247U);
    msg.setDestination(14016U);
    msg.setDestinationEntity(135U);
    msg.flags = 230U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9146862544433808;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07508787345054413;
    tmp_msg_1.z_units = 31U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.35934975879009523;
    msg.lon = 0.3668519268287891;
    msg.radius = 0.516644133510011;

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
    msg.setTimeStamp(0.6672652637271059);
    msg.setSource(2182U);
    msg.setSourceEntity(38U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(235U);
    msg.control_src = 40149U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.15198538837916575;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.009549341697882352;
    tmp_tmp_msg_0_1.z_units = 232U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.32834198561896644;
    tmp_msg_0.lon = 0.18504054635744216;
    tmp_msg_0.radius = 0.6620295688015568;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 8U;

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
    msg.setTimeStamp(0.6200841930352351);
    msg.setSource(19201U);
    msg.setSourceEntity(173U);
    msg.setDestination(32621U);
    msg.setDestinationEntity(144U);
    msg.control_src = 1239U;
    msg.control_ent = 42U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6103145027114045;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3874262694121837;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8568105091565994;
    tmp_msg_0.lon = 0.9745937525642955;
    tmp_msg_0.radius = 0.26600304955508347;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.47650224441051814);
    msg.setSource(3806U);
    msg.setSourceEntity(180U);
    msg.setDestination(16637U);
    msg.setDestinationEntity(150U);
    msg.control_src = 21159U;
    msg.control_ent = 86U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 68U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5400030044941707;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5903509635209534;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6824672025712546;
    tmp_msg_0.lon = 0.16337229431544065;
    tmp_msg_0.radius = 0.5482944694098757;
    msg.reference.set(tmp_msg_0);
    msg.state = 94U;
    msg.proximity = 81U;

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
    msg.setTimeStamp(0.8338841654611109);
    msg.setSource(47132U);
    msg.setSourceEntity(130U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(84U);
    msg.op_mode = 225U;
    msg.error_count = 228U;
    msg.error_ents.assign("TNXAKVBEJYQGXFTYJJJLDEMKMPSKOTXVHURSOBLFLGCGRZRZOGGDROMYTTUHZVXVSLPZAXKRJCAUEHODDXCDRDASNMRAQNMDUHWCXMBMKUJKNKVPTRFINJIKXLFDZHMWTFPOPLQTAYMZWEGWAQAFOEYRFQZQFECWUSNCYSZAEWHNGUKCQCOHIQFNVVUAJVCLPGOPDIPMZPBTVES");
    msg.maneuver_type = 9341U;
    msg.maneuver_stime = 0.8183111914890691;
    msg.maneuver_eta = 63712U;
    msg.control_loops = 3137601347U;
    msg.flags = 42U;
    msg.last_error.assign("QNXMCLOELNLBJLMKWCTIZPKAGOUVDRYTYUGHDQCALVSIZNCYUEGBAPMUGKUFRERSGUDZQZHSPUASIQRBXAMXXJPJZJWYTPXJNOEVTVJHINAHOYKTABBXIRQTIBZEFCHRYSJYDOCIGXCWTIMPNHUBQIGDRKDLSVAMLDBVFZOSFNMPG");
    msg.last_error_time = 0.2832224426415616;

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
    msg.setTimeStamp(0.8542635649370415);
    msg.setSource(16809U);
    msg.setSourceEntity(59U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 96U;
    msg.error_count = 39U;
    msg.error_ents.assign("GRYXVLAFXFCYHSNYVDTZMTGWRZNLVKUAKQDKQMSFWIPCNUMXIUWRXRMBVQZYFAYRNGPKZFPTOMAREEJTOVTMJJRCNRMUEOHFIPLSIOFYSOKPWDIHPBECIYCGBSGIAWZATCLSBWAQELLHJLIRTJXAFGBXANHKSQYECDQWUQSWPLUIREZKNUBKVNLBOJGQPKHVXUEHPICBHJDYDXK");
    msg.maneuver_type = 25457U;
    msg.maneuver_stime = 0.23114300227696494;
    msg.maneuver_eta = 46532U;
    msg.control_loops = 3677620717U;
    msg.flags = 68U;
    msg.last_error.assign("XYBDKYWFPWXCINJKEGTWIYFMLYOOSJSPFEXTPQOJUVMQCLYQKVMKWDZQUQFRBCRBFGPOUCRHDHXRAHZFZGCQDSSPIUBTWESBKXAVGRJFDNEHCGFLWPLYMIAJLTULJJVDNBHISHGXGEQBWFOLZJNGOI");
    msg.last_error_time = 0.6086943870480956;

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
    msg.setTimeStamp(0.8898556411889985);
    msg.setSource(32863U);
    msg.setSourceEntity(132U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(77U);
    msg.op_mode = 77U;
    msg.error_count = 60U;
    msg.error_ents.assign("QNNSYTJEVBLS");
    msg.maneuver_type = 16463U;
    msg.maneuver_stime = 0.6437945420826527;
    msg.maneuver_eta = 54051U;
    msg.control_loops = 1686423362U;
    msg.flags = 25U;
    msg.last_error.assign("EAYJZUTEWEYDUVDNHCZWZNPHFFTEYOYNDXAIVBCOEQFVHQSTEHDSGNWVGFMSRNP");
    msg.last_error_time = 0.9902232282005734;

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
    msg.setTimeStamp(0.6780170884581675);
    msg.setSource(18830U);
    msg.setSourceEntity(220U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(150U);
    msg.type = 157U;
    msg.request_id = 55473U;
    msg.command = 0U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 32498U;
    tmp_msg_0.custom.assign("UGGSXQSJWSAFFDOAGXEQZNZZJMHATBTDBAFILWXVPVQPHJERBPYODEZNGBDXFP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4042U;
    msg.info.assign("OCPCNQUEOSFBJDFYQUOYZIPLWBJDFILEXJVZOVINGXIUWBCDORKLUHXEJWJWNMXMMCK");

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
    msg.setTimeStamp(0.6745527533308184);
    msg.setSource(16627U);
    msg.setSourceEntity(43U);
    msg.setDestination(60506U);
    msg.setDestinationEntity(234U);
    msg.type = 246U;
    msg.request_id = 20849U;
    msg.command = 83U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 53127U;
    tmp_msg_0.lat = 0.017680331896494317;
    tmp_msg_0.lon = 0.8919813801300945;
    tmp_msg_0.z = 0.9403301262366628;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.3360071661173226;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.custom.assign("XDVYYLWSWRYLURUREKCNPNOIBDPGQFRIBTDUHEUAJWADWPJDTVOYURQFEBEKFSARWKBPWNKQJCCKZUJQDELCJUKJMOTESTTWZZPBUOQGHTTIQKGMFLSGHICOFXQBAXZKYLRMOVROZGUXLITZKRHGAACEMBZNNDLIXLGMSBVGMFSVAJMHMFBCLHXAIQPEJHPPVOQLMYVTAFXXGHWXSYVIWQSIBFJCDCEDYKRNPNHCSUINYHNZNVOOFVESATGXMJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10858U;
    msg.info.assign("RBQSWXUTEGQZGLGUOELWHAHATYNEOXVZZZSWLURTKBGPFBFLGIDXKFDPSDPVKGKPVGCKOEWYIMFAQUMJSOUUZJDCPSTCWQKREGIGCDJZXAKXQZHIUHHTLASJVM");

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
    msg.setTimeStamp(0.6099881883637924);
    msg.setSource(2351U);
    msg.setSourceEntity(176U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(67U);
    msg.type = 218U;
    msg.request_id = 25451U;
    msg.command = 48U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6371820678491351;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 52513U;
    tmp_msg_0.custom.assign("IXXNUCOFVMGL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13643U;
    msg.info.assign("QXGKZHZUVRPWMXREXJVG");

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
    msg.setTimeStamp(0.034727578882527976);
    msg.setSource(33707U);
    msg.setSourceEntity(30U);
    msg.setDestination(2449U);
    msg.setDestinationEntity(192U);
    msg.command = 230U;
    msg.entities.assign("GVHFMLVTISDBOTUSSRCQHKWWTSZZAINUXDJNOMGXBNYIQZAQYXWINJYFBUPWZFCYDHGBUSVSQKTNVAORHMMKCVJCNBESOLIRMWNTLOBPBCPJXGHORSAXEYKEIGUKUMKMJZXDUGICCOBELROTQZPWUACQPALCEJAKSPMYJDTHQYIPBRWQTTAGRQXEXMVHLZLLHEZC");

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
    msg.setTimeStamp(0.0483460288901959);
    msg.setSource(56942U);
    msg.setSourceEntity(238U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(246U);
    msg.command = 190U;
    msg.entities.assign("MMKVNLKPOIIWPNQZOTWWTWFDYVJQQKVWREBWSMXWYTDOOIZSHRCGZECUJBMCGOJUROTZFCADEZQOIATEQLBLFPGPAFHHJCJHDSZAMKKHIFPXXTHTXMUZRBNDXMKNVWDXQJJDRNISSXMCAVIQCHYPCCJUGGZDAOYCGDQLGORWNSAEYBTYPSXFKXUPUDEMVKYNRIHYPVLTZNKIQFBTQEXVLLAVEYGBBUJZ");

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
    msg.setTimeStamp(0.2005922438662131);
    msg.setSource(44450U);
    msg.setSourceEntity(197U);
    msg.setDestination(29862U);
    msg.setDestinationEntity(92U);
    msg.command = 91U;
    msg.entities.assign("DMXKUAVMBNQXYJPKRZURNIDMZZPITDZQLIXYSPOQFIQWANRMMNTGJTSKAGIPZOIRUMKCQBXGEGNUFYYLJMJRTOBGZDZVBFTSQEIVTNFLKYVPJCFBVLSGLJDZXFAKGONYAOTXEDVWYWAHBVGNWCKOEXJLSEPLWZGRNFUCDFPMPCSDVWHTYEBSCAUOJQTHCHWKBXIQEUSHHHEUJPGCAHYFBUOKRTCWARNEHVKXRAULIWIZLYFPSQWLQR");

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
    msg.setTimeStamp(0.9424419464096603);
    msg.setSource(5525U);
    msg.setSourceEntity(117U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(55U);
    msg.mcount = 27U;
    msg.mnames.assign("MQRCVGKMPSWZCAKNCCOLXBQUJAEMXYGQJVEEFE");
    msg.ecount = 0U;
    msg.enames.assign("ABFOYYJAVKDPMQYWVGIZXTCGPQTFTSFTYAMUCRWPLFJWNYDYMJCPYXKVYMVUWCISNLGZWKTDHGSHHKFAQGVHZGWHIFEVSCTOTBHOVOSPPLDKLEJTJWCODSERUBUAILIEHOENNYMODFNQXBBZEOKWXRREHEKQRZDUQXBPZMAEZIPRJSXMUBNEJKUQAJRQFTDGCBUTONYCQZPAMBZKFXHNSLLIIBMWVRRXVDSGOXAWLVCZH");
    msg.ccount = 223U;
    msg.cnames.assign("WTIWLDTURUFEISFDIBJKHKYZPPFLUXKUEWEAWGOZNFLNPOFRJVQTJAQRZYXZCYFKRQAGXZERAGHNLBVDTMRHPUKPCSFKWELWJMOMQDXSISPOIFMVJUMDVVMAGNEWTMDCCYOB");
    msg.last_error.assign("XFKVZXGMYBEHXLACQYYIPRMCOEZAKODOJBMCNXMLRQWOZZEDUCAGXCJHOKDYNNHGIWNJEMTKDFWAGGFEPOQNFIKDVPSIWVNPDWHQOUSSPTGZABNNLVJQRRCDBITMGHLCDQ");
    msg.last_error_time = 0.5243375494405418;

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
    msg.setTimeStamp(0.39864052980739906);
    msg.setSource(43197U);
    msg.setSourceEntity(243U);
    msg.setDestination(8331U);
    msg.setDestinationEntity(146U);
    msg.mcount = 125U;
    msg.mnames.assign("RFFKTJKBYYDWIQMZAEFMPEJXNPQOMDPSCNIDNWNCQXURXGLBNFKGTRYRQUAOSGLBZSMETVDFLMMMNIKXZWHOJVBRHYRZAVJLWVAGCFZPTUUEESXDJTWYTCPUSWEUJSCNAYXMYGIABXSZSNWAIOPDGSZWPLGKPBEKXEJVYCWLBCAQFUROCTKHVVFOHQMDWFQOQQOFYURLIHHKAIVKUOXVDAZSGDDNILLPHTCC");
    msg.ecount = 45U;
    msg.enames.assign("VYSJCFWGBJQMWBAMHYNTGAJHBQCSUBAROEWBNAQOCNXLOXZFPVCYU");
    msg.ccount = 23U;
    msg.cnames.assign("SMITTAQVHYHDPPLKJQQ");
    msg.last_error.assign("OZKICJALJXNHFGLMJXSHWITLROEESGQCRXAJDDNFOTQUVJLQVDNFPBEONGZTCNOKOYKBUEZGNGPHDUBTIHHBRVLODBVCRASRIEPRSCVDCFNJANPFWMCTTWMPFUQRYYODUAENMQCZPRW");
    msg.last_error_time = 0.43170790561516414;

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
    msg.setTimeStamp(0.02216211409015456);
    msg.setSource(8585U);
    msg.setSourceEntity(136U);
    msg.setDestination(6774U);
    msg.setDestinationEntity(198U);
    msg.mcount = 156U;
    msg.mnames.assign("WCFPGAVBPQRBBWIVGEWPBMUMSVYXUMCDSMRJYIUKDQJXFNMIJHTVYTCOZLKROTKLEWTKXDVSBZVQDSQPEJRUSBRIOLAEQETOMYVFEUFPTESNYCYIYDUZPODHKGRFMEZLNFSKPIHRXNNOZW");
    msg.ecount = 147U;
    msg.enames.assign("AWPCYGLMYLSNZVXKAHTKRWAAWKTJGBMYCYZFPZUGTLVAFPLXIAUUFOTEJVQLSZTCNMTYWZFNBVCAGCJTLPDVOQZELRNIOMXFOBUNVBSEXZFRDCFMTNCQUYDHNQLWLEISHM");
    msg.ccount = 41U;
    msg.cnames.assign("MXFYNIUEWJLJTBQHXXXLPYZZDMHMSEHYZHSJFVFDRGNAUDGCJNW");
    msg.last_error.assign("RXMQNLRFLYCCNXTPAUNFXSJJXHDERKSDVHRIWLSUEQIWTRPGGXFSBJIAXWDFABOFINDYGEDBOZPQLRHGHLXQWKYAEJQCUBGCLGMMBMVOTSEMKPVILSKEYNTNTBQWRWKFVNUHZZGMHFTOYAVQFAZJGSMUSYZZVCXFOLKLNILECPUZHHUZOTODSHPWGOVUZPRNBIVWRFQMBTVDAAEYY");
    msg.last_error_time = 0.5027576566996934;

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
    msg.setTimeStamp(0.10737423933339774);
    msg.setSource(49857U);
    msg.setSourceEntity(24U);
    msg.setDestination(25655U);
    msg.setDestinationEntity(142U);
    msg.mask = 250U;
    msg.max_depth = 0.7043129234575842;
    msg.min_altitude = 0.3442646939489987;
    msg.max_altitude = 0.5512935704307868;
    msg.min_speed = 0.17796959065241869;
    msg.max_speed = 0.2349063967214864;
    msg.max_vrate = 0.7941481752370427;
    msg.lat = 0.046348104667637835;
    msg.lon = 0.5860760254283637;
    msg.orientation = 0.7073322299221917;
    msg.width = 0.9285492938991192;
    msg.length = 0.7088464355188112;

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
    msg.setTimeStamp(0.9131237979803505);
    msg.setSource(55112U);
    msg.setSourceEntity(172U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(53U);
    msg.mask = 224U;
    msg.max_depth = 0.8786609260376411;
    msg.min_altitude = 0.36632076824657067;
    msg.max_altitude = 0.7710826447712786;
    msg.min_speed = 0.636361575980059;
    msg.max_speed = 0.02118857260348206;
    msg.max_vrate = 0.1338064003927424;
    msg.lat = 0.5783895141885507;
    msg.lon = 0.678344351778719;
    msg.orientation = 0.47714819138614084;
    msg.width = 0.34694576840854463;
    msg.length = 0.3557277569971349;

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
    msg.setTimeStamp(0.9888701337870712);
    msg.setSource(5126U);
    msg.setSourceEntity(123U);
    msg.setDestination(44756U);
    msg.setDestinationEntity(30U);
    msg.mask = 34U;
    msg.max_depth = 0.4732081188393157;
    msg.min_altitude = 0.702313202634909;
    msg.max_altitude = 0.18549956812870416;
    msg.min_speed = 0.07969696658112602;
    msg.max_speed = 0.7560028472872903;
    msg.max_vrate = 0.49993942425624993;
    msg.lat = 0.6710535097098366;
    msg.lon = 0.8333135167281289;
    msg.orientation = 0.7669102007967343;
    msg.width = 0.9386046852630661;
    msg.length = 0.951499373057076;

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
    msg.setTimeStamp(0.48798763445030424);
    msg.setSource(18385U);
    msg.setSourceEntity(19U);
    msg.setDestination(48693U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.21973170449813595);
    msg.setSource(41366U);
    msg.setSourceEntity(228U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.5819511122521988);
    msg.setSource(45023U);
    msg.setSourceEntity(34U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.8150501985392077);
    msg.setSource(58828U);
    msg.setSourceEntity(178U);
    msg.setDestination(64310U);
    msg.setDestinationEntity(14U);
    msg.duration = 47244U;

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
    msg.setTimeStamp(0.451688139143833);
    msg.setSource(29437U);
    msg.setSourceEntity(250U);
    msg.setDestination(47687U);
    msg.setDestinationEntity(193U);
    msg.duration = 28070U;

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
    msg.setTimeStamp(0.4618275945724839);
    msg.setSource(58645U);
    msg.setSourceEntity(105U);
    msg.setDestination(53700U);
    msg.setDestinationEntity(172U);
    msg.duration = 29518U;

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
    msg.setTimeStamp(0.9286394665720046);
    msg.setSource(4131U);
    msg.setSourceEntity(225U);
    msg.setDestination(55104U);
    msg.setDestinationEntity(60U);
    msg.enable = 199U;
    msg.mask = 1046480456U;
    msg.scope_ref = 0.13211386778617407;

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
    msg.setTimeStamp(0.909029435050359);
    msg.setSource(5508U);
    msg.setSourceEntity(28U);
    msg.setDestination(2813U);
    msg.setDestinationEntity(159U);
    msg.enable = 87U;
    msg.mask = 3111789102U;
    msg.scope_ref = 0.2307688011923782;

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
    msg.setTimeStamp(0.9350879534049613);
    msg.setSource(54304U);
    msg.setSourceEntity(98U);
    msg.setDestination(18600U);
    msg.setDestinationEntity(233U);
    msg.enable = 251U;
    msg.mask = 3337602279U;
    msg.scope_ref = 0.2763976656957129;

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
    msg.setTimeStamp(0.705156880303206);
    msg.setSource(12485U);
    msg.setSourceEntity(110U);
    msg.setDestination(62576U);
    msg.setDestinationEntity(178U);
    msg.medium = 71U;

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
    msg.setTimeStamp(0.2886282516813352);
    msg.setSource(13914U);
    msg.setSourceEntity(179U);
    msg.setDestination(20860U);
    msg.setDestinationEntity(156U);
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
    msg.setTimeStamp(0.30751456494191587);
    msg.setSource(35399U);
    msg.setSourceEntity(53U);
    msg.setDestination(15609U);
    msg.setDestinationEntity(15U);
    msg.medium = 188U;

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
    msg.setTimeStamp(0.22415668069967565);
    msg.setSource(61288U);
    msg.setSourceEntity(35U);
    msg.setDestination(6358U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8068905267844864;
    msg.type = 182U;

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
    msg.setTimeStamp(0.672642143039764);
    msg.setSource(42341U);
    msg.setSourceEntity(124U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6167244492829259;
    msg.type = 164U;

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
    msg.setTimeStamp(0.5236028500396988);
    msg.setSource(42490U);
    msg.setSourceEntity(8U);
    msg.setDestination(59699U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9149019524876791;
    msg.type = 70U;

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
    msg.setTimeStamp(0.7270680066126382);
    msg.setSource(30514U);
    msg.setSourceEntity(82U);
    msg.setDestination(10382U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.6439666574098036);
    msg.setSource(44195U);
    msg.setSourceEntity(243U);
    msg.setDestination(56543U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.9890993685137949);
    msg.setSource(26885U);
    msg.setSourceEntity(246U);
    msg.setDestination(6847U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.021352388557077995);
    msg.setSource(12433U);
    msg.setSourceEntity(162U);
    msg.setDestination(34321U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("VZSCTWSAPIYVZNPLCGDHXMMEKAZIBVRDEWJHLADVFQSUQGQSEOMEYCANZSMUMBCJHHASAVOXGPVIBZRARPDPCIILUNK");
    msg.description.assign("WTQSTDYVRGZPVCMUBAWOFXZMGCEAZGHAEBKWOLFMHPRSKEXOBFXNSPBLKUZWGVCNFXMY");
    msg.vnamespace.assign("ZNQYSCAQAWZRXLAZXWOIQYHCKFYBZKUOKEMNJWLVZKESTUVFEZQQKPWHJTYMDTBIRDTVYWXFSESDLLMXIWUHNWSCGHFYOVVOBUOMUHJFUGCBIHQESUVXVNLRDUQJRFPFPQZIVXNAEWOWJJAGHORATBMC");
    msg.start_man_id.assign("AWJPEOWDXBTYQEGITROVNVBFJEXVLFEZZHSIOTINOQIUUDPRZKUQFGAVFKOOLJHHYQMDVBCIVKZMNMUDXNCMNSMOGRHRTLYYDTAPRFFJTLOTCGVHAPDCEJSXDPQIROXLKTYXJAWHQATXGBSALSZNQOPSZUAB");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FUQPMAHSTKYAOM");
    tmp_msg_0.dest_man.assign("WVUYZSMWNONCLMBZSYCWRWBLTUINEFCKUHIRRCMZNRBHBGTWCDDEFERKLHATPBVBSQDWM");
    tmp_msg_0.conditions.assign("HBEPWQYGKPXRTGGSXJJYZYKXMUMVLZFDINMXQGKDJDFEQRU");
    IMC::SaveEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZHBBEFCGJBPKFQWHUAUATCSJIJFLAFMERJHNWHSHAJSQEQDLXOMZLVSJKGMTDBHEQVZSTKTQKCYRKILIDOOSERNINWIAMZXDLNIYAWIRXY");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::DevCalibrationState tmp_msg_1;
    tmp_msg_1.total_steps = 19U;
    tmp_msg_1.step_number = 110U;
    tmp_msg_1.step.assign("PZOCHKOHFTUVYMDMSOLNOALIFFBIFZSCGRZLRQJLAIXYBFDVPYACXIBMTJWEPNWHCGJAFJHDBQNKMDWVFCTTQMONEPEEIHSVDXPZMWGGNLQQLYSCURASHBTFBLPMVWWORGBDIRJAWPJCPIRDERVKPNCI");
    tmp_msg_1.flags = 203U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityActivationState tmp_msg_2;
    tmp_msg_2.state = 123U;
    tmp_msg_2.error.assign("CBKKJTTKGNDPVNOMGRKHUDNOWFYBKPSAAMPOAFNBOFAIEXQGATJEIMRWCXYVJDRMGVPNKCTUZUNOLEQCPQW");
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
    msg.setTimeStamp(0.8912350138233534);
    msg.setSource(36470U);
    msg.setSourceEntity(239U);
    msg.setDestination(8271U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("RLOTIIQQXDINJKDCMTXTDJMACTBZEAAIPUVKWDGNCLAQRTIQSWPJNEGFSFLHHMPWXUGUQTKBGLOIGEDXZLFEJWNELOMSVSJVYOWVEZKERIUT");
    msg.description.assign("ECLKTAWHSGRQQPGNXELXFFMUDW");
    msg.vnamespace.assign("ELPSFXVJPHBDLZEJQSJHOELNNTWZWYVKKMTRQEICADZMCUTKTBTBGIEBQPXWUEZFYPISHCXAVUISIOGEAGYEPJXCKGSTCHFYQMFSOMWMBBYSIEDKRUQFQLIWQAKFQNXGJWRNFSXZSLGZRGICZDJTYDVVRAXLJHMZRXNMILOKUBCRHPCGSPVYQWAOJVAHJNOOUOKWLVFBRHMDOFULDYCKEPMYMKDZRXBLVNYHBIUGVCNWPATNPAGTQWDUOZDH");
    msg.start_man_id.assign("YGWZUENCHSMUIOZYQMWRZUHBDTJWJWSCYNU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RBZDNIOEICQNZIVHRWTJY");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 51530U;
    tmp_tmp_msg_0_0.lat = 0.4637051985382721;
    tmp_tmp_msg_0_0.lon = 0.6664932026131231;
    tmp_tmp_msg_0_0.z = 0.13195380231433795;
    tmp_tmp_msg_0_0.z_units = 90U;
    tmp_tmp_msg_0_0.duration = 830U;
    tmp_tmp_msg_0_0.speed = 0.4292047570839954;
    tmp_tmp_msg_0_0.speed_units = 153U;
    tmp_tmp_msg_0_0.type = 58U;
    tmp_tmp_msg_0_0.radius = 0.4093600127439305;
    tmp_tmp_msg_0_0.length = 0.8889622543653404;
    tmp_tmp_msg_0_0.bearing = 0.5817541314516523;
    tmp_tmp_msg_0_0.direction = 183U;
    tmp_tmp_msg_0_0.custom.assign("QVBOFGFAILGQLRCHPUQFJMAGIELIWFEKZBWCPMUJLUVVAETXMBLCZPVKOWNAYTTOMHXVMZDZUKYABWWVPJTCCBZUVVTLQENUXECRLVMBCFOCEQLKASQUQDSXOHXBTXRGHIDGCZRSKJRMBMXDKDRTISKFIXFRYWPSZROUYJFDRMXB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QDYAMHVAIMFWLREKLHGTOTBRIHXXHDXAYEMGDZALZBUMEKUBFRXQWSMUOOQLQBUWCFTJJKPINEFZBBFHREPIMSCPPNAOYXV");
    tmp_msg_1.dest_man.assign("UHYLAOOWLVRAUHZWSMNEQPOHLYEENNNRUHKYSQROZVBAUAPGYEQIDPUECGKTQWVJOGBVMQJIBFMKZPFOCAUTDTGGEABQVNJRZTJLRKNWGFZKQCDVAGUKWKIWRXTSREAFOFORZLWHHPJITVFTNJHZUNJJYXCPIBKSCLJKE");
    tmp_msg_1.conditions.assign("PHETZKRHKCNTMANWFTMRITECZPGQVUAGSSZMNBJKZDNKKYLZURWG");
    msg.transitions.push_back(tmp_msg_1);
    IMC::CreateSession tmp_msg_2;
    tmp_msg_2.timeout = 2707442613U;
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
    msg.setTimeStamp(0.5115254425981045);
    msg.setSource(4878U);
    msg.setSourceEntity(29U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("QCLGXTMMKLHXEEVIGUWVHCUWZHOOGDPQYCFHDEKUSZNXQTMDAIKILDWYVJENYSZYOVZUDIDMJXJDNJE");
    msg.description.assign("VAGXNSGAVXYKKWPJZWXPBQLINVLNOCCFQLSLMBNFIJIFHNURLFBPHZSRXMWXTVSCMGPDHSJAHUOEPYBIWLIMLQDSR");
    msg.vnamespace.assign("URKOCOLDPOGMMETUKONRPJVHZQCGDLDEQHFKBIHBMZVSQWOVINGJJYXNYTXLFW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IFYPBOTMHPADIUDUPPXTLKYIJAPHRQLFMUYOCVTGLQMCLJGDFSRJST");
    tmp_msg_0.value.assign("XZORAFDXMUADVFXQFPBHLKFXOISHPYNVUBQKDUBOVWTUGIKHHNTUFXOPJNLVDSQCRRHAJKCSMFIVMTBQRZYJLADMHLGSEH");
    tmp_msg_0.type = 238U;
    tmp_msg_0.access = 161U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JSWQAZHSICCDWYVYDTTYNECSSEGYNIBBUWAPNJDFV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LROKNUJRMUGVRHYJQLQZSMDSAOEDWYXHMPLNZEPKMVEEPLDFQBKTZHYGRSQOULCGZAYEQJPTFP");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.36043004194058614;
    tmp_tmp_msg_1_0.lon = 0.7233476463838404;
    tmp_tmp_msg_1_0.z = 0.7293522941690821;
    tmp_tmp_msg_1_0.z_units = 67U;
    tmp_tmp_msg_1_0.speed = 0.5766971390806649;
    tmp_tmp_msg_1_0.speed_units = 87U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.727521103870126;
    tmp_tmp_tmp_msg_1_0_0.y = 0.7550696706144802;
    tmp_tmp_tmp_msg_1_0_0.z = 0.399340848183536;
    tmp_tmp_tmp_msg_1_0_0.t = 0.28926832637447164;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.vid = 38340U;
    tmp_tmp_tmp_msg_1_0_1.off_x = 0.9945272725488081;
    tmp_tmp_tmp_msg_1_0_1.off_y = 0.15233759480774545;
    tmp_tmp_tmp_msg_1_0_1.off_z = 0.5850855462110387;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_tmp_msg_1_0.start_time = 0.6374072184132251;
    tmp_tmp_msg_1_0.custom.assign("MDBPROLBDDYCVGXENHFLIWUQDCIWKASGPVCUXMRLEBEJPXEBEAPBDKNAHCZTUUACWKWYYXYDUBVHVTYMMSLEJQTICBIOOSAGXNDKIEJNXSVFMGFPMSFZSHAIZLHQVUQRMGSZHPDKJXTXVMYICZTFKSZFWAFPLBLEQLSZMYIIYKRJWYKRQGUUWHB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SessionKeepAlive tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sessid = 1168553775U;
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
    msg.setTimeStamp(0.10255122065634847);
    msg.setSource(24283U);
    msg.setSourceEntity(2U);
    msg.setDestination(7084U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("CMFCLLXZCGRVESXAJYFHYBQOEKPXRRROJYQWHGHJHLRXGBXTMUAIQYTNEQUTGHPDWYTCQQNPJZPBZBZISBLDARPXUIUOWRAXFSNVEURNNSHLZ");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.4741492837698803;
    tmp_msg_0.lon = 0.8767036561356106;
    tmp_msg_0.speed = 0.1345118056675929;
    tmp_msg_0.speed_units = 142U;
    tmp_msg_0.duration = 19335U;
    tmp_msg_0.sys_a = 20179U;
    tmp_msg_0.sys_b = 55784U;
    tmp_msg_0.move_threshold = 0.30417474530571664;
    msg.data.set(tmp_msg_0);
    IMC::Voltage tmp_msg_1;
    tmp_msg_1.value = 0.7561577456095552;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CacheControl tmp_msg_2;
    tmp_msg_2.op = 29U;
    tmp_msg_2.snapshot.assign("CCYVCUFFATWPIXBDQWYFMPIFXZSBPGTIVRYNXSKFADRXHGLBNZZJBOOZNCPWLZIWSEBQGHHOGIRLCMJQNHAKADDAWFYGBUXEKQJVCDPBOIESYKZPLQEMGQKMLOOJWKLYJHDOZSLQCDQBBUYJTESDXTRWUSEKPDKTERWMSHCROOBJGNCNF");
    IMC::VehicleFormation tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.7004041048712182;
    tmp_tmp_msg_2_0.lon = 0.08077830077875703;
    tmp_tmp_msg_2_0.z = 0.811461463512072;
    tmp_tmp_msg_2_0.z_units = 215U;
    tmp_tmp_msg_2_0.speed = 0.7664304776231357;
    tmp_tmp_msg_2_0.speed_units = 77U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.x = 0.3975519889751208;
    tmp_tmp_tmp_msg_2_0_0.y = 0.031121857543094267;
    tmp_tmp_tmp_msg_2_0_0.z = 0.09673032451129204;
    tmp_tmp_tmp_msg_2_0_0.t = 0.01949352398090065;
    tmp_tmp_msg_2_0.points.push_back(tmp_tmp_tmp_msg_2_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.vid = 18421U;
    tmp_tmp_tmp_msg_2_0_1.off_x = 0.4905710108246605;
    tmp_tmp_tmp_msg_2_0_1.off_y = 0.9684126914130128;
    tmp_tmp_tmp_msg_2_0_1.off_z = 0.3357141554634353;
    tmp_tmp_msg_2_0.participants.push_back(tmp_tmp_tmp_msg_2_0_1);
    tmp_tmp_msg_2_0.start_time = 0.9699566640890108;
    tmp_tmp_msg_2_0.custom.assign("GLQWWDNWHISAXRRTEWJKMOYMXZJOSTHJAIFVDPTNXSONZYMOGZXRUGNAKQCDJLQKEYJIXEIKGTXUHZUGMPBUOFAOBTQBVELCGKWSHSYMELFEYFBDMFWIHJRCSMHCCBBUHDFNPSU");
    tmp_msg_2.message.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.5922739180527828);
    msg.setSource(37026U);
    msg.setSourceEntity(80U);
    msg.setDestination(10926U);
    msg.setDestinationEntity(237U);
    msg.maneuver_id.assign("REDNHJJZKBPGDMODIBAUEYQEONMJUPMYMAEFDCZLHCZCUCCIKWNIKWDVECUGZAVVBXBPKKHEQVFOTOJHRQFT");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 44810U;
    tmp_msg_0.lat = 0.015846600815839884;
    tmp_msg_0.lon = 0.829527469684833;
    tmp_msg_0.z = 0.12051099509448171;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.speed = 0.48148528832253235;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.duration = 34377U;
    tmp_msg_0.radius = 0.8150280877936511;
    tmp_msg_0.flags = 202U;
    tmp_msg_0.custom.assign("KMEKNEQPDZMSURWLFNUFSCVFKRDPSMZAHKPZWBDFVERSYWSJJIIAPCODDQLYUWJHGGQHXRNNARPHCAGYOSQOKWNLXRTISSTQBGPWRBETIABGMXIOJVUNGLUVBXUROHFPGUKZXACDLDXCVFZYNMIYHLVHWVJBUEQTKCCLNMDXEOFTKYVOMDWIFSRRBYOZXJZNZIWDOKTFZEFIPTZEOLBWTLG");
    msg.data.set(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("ATIDFHLFXGPJMBWBKESTGOYZCNDXSBRVNECMPTPFCUNITLRPXVPRXESQZMDNWXJJXCQSEZAYPWJRLMJFOIHMLOXBIFBOUDZREEMOYXSTQKKVUKUCICBCLGNRUSDIZSJHUZCMDODOEMTYJFGWOKFZX");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Heartbeat tmp_msg_2;
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
    msg.setTimeStamp(0.8300966621333496);
    msg.setSource(38155U);
    msg.setSourceEntity(208U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(25U);
    msg.maneuver_id.assign("CFZVSNEACMNKBOGOOCFSSLSJGQRGFCGAYVQMSTJKQDBCPRUHKITMOUFBLAOFBNLPUXPUYWHWJCSOLUHWPPHIIDJIYOKTKYKAETCJWGEVRTMUWEDYUBZYKTQNPHAUHZITBWGHQKZJEXMGQXHSUDTAVUCZJELEXHFRERNCVWFZRMXWFYFGPAQDLYKWVFVXOMLIRKADNNRNMXEPHANGZZBOCDLLBTDNWVES");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 60021U;
    tmp_msg_0.control_ent = 24U;
    tmp_msg_0.timeout = 0.1264337382961519;
    tmp_msg_0.loiter_radius = 0.754994630905333;
    tmp_msg_0.altitude_interval = 0.26438320262387904;
    msg.data.set(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.2489219053466729;
    tmp_msg_1.y = 0.46732916406137415;
    tmp_msg_1.z = 0.08769148301454721;
    tmp_msg_1.t = 0.7791106015962606;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SmsState tmp_msg_2;
    tmp_msg_2.seq = 3542399317U;
    tmp_msg_2.state = 116U;
    tmp_msg_2.error.assign("CEZOKFJGVYFXXCMECPWLQHPZDQRZRNXIBDJLJOGIUILTZHRUUDPMSIBIMJOMSYJHGLRYEDAWUZKNDVLIMBZNQVFYERTXJYFPBGCLOQDSBROMSKHIRDPKAHUFAFNOWDVXKEFEQBTPSJQCOBMTBEUAK");
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
    msg.setTimeStamp(0.5282891072593077);
    msg.setSource(21426U);
    msg.setSourceEntity(216U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(45U);
    msg.source_man.assign("ICQLVZUDYPORPLPTLETQZWDIHETUDJGJFBPWLFNBXVBXFIERBPMIFEMGKWMDMOYY");
    msg.dest_man.assign("BHKIWVLSYTTUPTQLJJSKLFUFUILJSKDSNPBRTXAUMYN");
    msg.conditions.assign("LSFQWVPRHGFHKAULRLIGVMZUNRMAGYYLUXLXTUVJTYQHIVGCNJINYWJOLUTJLOFFUJBNSMOHGHFRCZZWAMAKOYEOIBVJVKBGKOFXPHGSPDQ");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("XTFPHEHCUDWRXJWEOEKVSBUKKCBUDTHNONJENIEOARNGGKKVAQMNONMPCLYQBPNAMLIRIIVXHEOGEGSPDAYOMTTCWJFXIFG");
    tmp_msg_0.plan_size = 59101U;
    tmp_msg_0.change_time = 0.004559015346702666;
    tmp_msg_0.change_sid = 36230U;
    tmp_msg_0.change_sname.assign("ONSCGTFJABNVECSEVIGFWTUZUXWOTIPJGQPMLVZUKWIODQPUTDKXOENMCDHLNRXNWIQTHSXHYKUDWMDDIYTGDURXAFLPAWESRYRVRCQJTNVRUOAUFLEMWJWVZJEOHRQPNBIRNKMBHXKYASSLMBFBLOVKHAGRGGEXZQPXHZQDFJNKNQZFUKGSVVYDFREELLIXKALCMBFYYSSHOATPZSPCATGUIXMHZWBJQFAMEYO");
    const char tmp_tmp_msg_0_0[] = {-62, 113, 92, 23, -12, -4, 105, 120, 3, -80, -84, -35, -68, -82, -116, -55, -56, -93, -120, 15, 72, 84, 64, 90, -34, -63, 15, 61, 23, -23, 32, -98, -24, 19, 71, -96, -45, 94, -31, 25, -83, 56, -114, 15, -53, 16, -68, 56, -114, 73, -66, 15, -81, 60, -98, -2, -104, -32, 126, 121, -99, -76, -80, -104, 57, 115, -52, -46, 58, 100, 81, 18, 42, 79, -68, -18, 34, -44, 78, -85, -98, 94, -122, 65, 32, 20, 99, -7, 67, 45, -2, 125, -75, 93, 65, 107, 121, 95, -41, 75, 120, 106, -3, -45, -42, -59, 121, -101, 67, -86, -103, 84, 40, -13, -49, -116, -104, 42, -68, 100, -60, 84, 56, 56, -111, 121, 121, 26, -25, 110, -103, -67, -27, 51, -64, 10, -99, -120, 5, 83, -102, -94, -68, -56, 69, 46, 51, 105, 66, 23, -85, -116, -47, -104, 126, -13, -47, -47, 118, 46, -65, 75, -51, 120, 4, 108, -6, 83, 16, -84, 17, -9, 20, 64, -38, 24, -9, 8, 111, 96, -114, 126, -97, -31, -69, -83, -95};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.13156516415553154);
    msg.setSource(11167U);
    msg.setSourceEntity(249U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(38U);
    msg.source_man.assign("ZKSGHBHDCDGFOPAIUVNEDHWJASZFOQNEAURDZOVHBAXNCLTZJXNNXIVLIBSZEAKMFCCRBPYYKMGAOKJYZDUCXSQPTADUVBRLCLUIETPELMWQLLWYUISFKTVYZOZBXYGBYOVJSUVRKLPKJ");
    msg.dest_man.assign("ZXWAZIVTWVVBYSUUOCQJANGUEQHJMDOCLTEUWCIXQHGKEKXWMFPJHOHHWNLTCNNBRLZRFVOGIMBPFWBSLCDFMFPGQAGXSDIIZSTFRUFT");
    msg.conditions.assign("ZMDTCBAXGJUWHJXDYLTCMKOSGIDRPQWVYIUFHIBJILOKVBWFRRONDMJJQCXNNLPNFRNN");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 218U;
    tmp_msg_0.mnames.assign("JQYAXNWDNCJYBYCJFTOVVEUKUJMTCSQKQDQXVTYLCPFUTBFKDOUCCIAOFUGYTDNLNYXJVAFCDZGIDGORANJWBLQTAQOPGEIJROHVSPL");
    tmp_msg_0.ecount = 46U;
    tmp_msg_0.enames.assign("TGEDCZGDOLPIVUPLXSYLFJAFORCRWKTWHTBKJAHYJQPMBOOUJZRQRAPCZSMRUFYMITOSFYURKLQECLNLHXWXEWEUBSFWUGKXKVRKZCGWHNJLVODHMYVNFBIPNYOLJCJUVZTCZQVGTQABKIKHWFZIDMDLXSGQOEEHIBHXVGIQXWZYBAYATEEIMCICGPKDSTDSWBWNMMXDUMJTN");
    tmp_msg_0.ccount = 216U;
    tmp_msg_0.cnames.assign("DLVJOCPMILWXYBQURRZNSUXHWDIDRXHIWTTOABGHJYJODPJHAYDRQKYXCLVDLWKPEJYRBVOU");
    tmp_msg_0.last_error.assign("VFDHYLFLQQXINUGRCZYALJXYGSQPYACNVWMYLHVBFYDOCIABQCAYGPEREFTFIMWQPZKKMJRJDQXVXDOKMWUQACDDYBIKIZMUHEILTOGMNVGSFFAKWBAQNPUUOMGJPLCBNYPWXXHTORZEFKGKYXUHHWNLWMKZJRM");
    tmp_msg_0.last_error_time = 0.7125178513973496;
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
    msg.setTimeStamp(0.373582173961967);
    msg.setSource(43418U);
    msg.setSourceEntity(108U);
    msg.setDestination(44682U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("SNEBXFBRTYEWVKJQMCNVGKQEUTUPMYJJSXOOHSCAUTWKPLWMEZNXAPQZQCPCCNMTFWHPEJEQWRUITXZNZLJSITIOI");
    msg.dest_man.assign("SQFZTQJAORNCMFYU");
    msg.conditions.assign("ZKSHUIIHWZEUEPGBDACVLDDRAXSULXXDRDGYAPYRXOJUJTMEQVTRIVBHMPLBMJCCBQYLFKCJHMFBIRNVHFGBJUKPRHIZIWPKNVYCSENISGWXRDOTHAOIHOQCRJTKKNNOYWYDKAFUNWLSBRLUTJTKJCEWSMYAPADSJDZPERZPXSKLEMSBUZPCWVTGVZXGZFEQGHEAOGUQNYQXFOFKXTCBWVWOLA");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 50U;
    tmp_msg_0.value = 134U;
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
    msg.setTimeStamp(0.3719883127056369);
    msg.setSource(36987U);
    msg.setSourceEntity(7U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(21U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DAZBRWTPHUSQLJRJPKMIAUEQOQSDPJTTJZJJUKJBIYFYCXHLLRTXYWHVBKLSR");
    tmp_msg_0.description.assign("YJTHHVKNTFIFHVXXJGWYZEGKZCQFFPABBZXDXOSDISDLEKZGOL");
    tmp_msg_0.vnamespace.assign("MWMKOWZLPATTQNYNGSZYCJZQFDGBYSJIXJKDIWYOIAKGZPOXCGOYVTJSVPPTAAUXSHLMEDMUOEKMCNIBHKWZZSWUFFJHHAHQXLHOLPBVLBUSVNFSRPDH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ETNHMHJCOTLOULQTNDBLCXSZJRVUWBMMGTWDFVEGQWOXSVVKHTHTEOARDJFKKFDDYQTMOQWUCVJLUMMZXQGXAEVVJUDZMNAATFEVBSPWJIXPPYHAHCCDAGLR");
    tmp_tmp_msg_0_0.value.assign("KMZYDSJRFMGWTBADPBPZZPGUXCMWIVBHAKGINQRWCSMEWJOIILNCFOERNRSRBTHKZLCBLLATCSQJNQHFNCR");
    tmp_tmp_msg_0_0.type = 32U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EKHKBNEEPWMAUDAVRCIDQDTVDECQJGYLGSKYVPJNTGTUVELSSAMCIMNWYBEAYOSLWXRMIJWHEYGTYZGLJIMQIBSTMUKGCFDSLMQLEPVGIBITHAFKYPOJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HWOHBFJMTFVWAVTOGMOSJMAXMRWHAIUKFCKQTSKZILGUMRYTFXXJAYBCLAVCHKFDEVXAOYNZQOHOYZRGHUNPBUBWEBBBRPHZGQJTOWSGTUCAAZGERHWNOEJISNQXXOIVPZGML");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 65344U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CENZBDUHNGVUZQWVRDSNCILDBOWTDEYYYEFZLAGMMZRANIXGSEGYNLSDQQKDXXTTHLXSJDKOUEFPWVCWXJZYCUNRRFUQQRJQKIAWGAGATKRRYKMKVJYEFMZBQOAVNSFUHPYUUXAWTFIHPFSINCSKHOBHZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PushEntityParameters tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("EJJRNAQYSITBDNFLMPKOSBWDKUBLXYGGUGAXKBTKGOCNNHGITHIXMRZVPCSAXAVVXMOZPUNDHEECFQLFVTRQSHXOZBVEWMRLJKYKSHPQGVGZZKJZLPLLBHXCTUICKZYWRDVUWKEIBYXTXDKFTMMBOPYXSPVEGHQCANTEDEJUWFWRFMUBOONJLHFRFUMT");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Acceleration tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.time = 0.7317632334744626;
    tmp_tmp_tmp_msg_0_1_2.x = 0.5535421363282659;
    tmp_tmp_tmp_msg_0_1_2.y = 0.9458609583365143;
    tmp_tmp_tmp_msg_0_1_2.z = 0.6424014362392796;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8236401544136588);
    msg.setSource(22328U);
    msg.setSourceEntity(97U);
    msg.setDestination(40812U);
    msg.setDestinationEntity(102U);
    msg.command = 246U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QJUFYQTMCURMLUYGTOMDLNUUQTPSEVLSXZXFABVNMPKAGPUGRKRRDULHHQTFDOSBGCSDHZYOWXDLEPIDJFMFAHMZYCRGRRXBGAOYHXEQIABWCDRQNNHDJHTBWZKWBOVGPQWAPDSAXIYEAIHSIUSSOTGKQLDLTEVFVPEFYWXQRZTKNALLNVMRMKZCWHKOVFJVUZJCOOXNCCBITWEKSGUFCIKLNFW");
    tmp_msg_0.description.assign("IWIECNOTCQADPM");
    tmp_msg_0.vnamespace.assign("WHGAHNSIFTMHAKGKIHBPGYUXXSBYWRWYSPMPBX");
    tmp_msg_0.start_man_id.assign("DPLAPADSAHAKGFCGHOKPWQSEHCUMBLEJQYVFWERVFQLZGROEWGGOGTHYTROEDFPXVJUCBYPJEAXHZOSZNRMTQISILTNPVCAGWNXSYELNBZZJGCJPLTNIMBFVDOQNY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NQFOMYLTZUSUVYBUZOVULARXJQRDBCRPIIVCXQEOYLNMBZYCEGCAKHTKDKSDCUJYWWHHTIXNJYDHFSETZAIFYRYVQFVLDNWYKDBSNEJJJXYAJZPXZGPAELW");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 21765U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("NJRTKGRQYMBQOLIVIQWDZIQHXOWUREBHPVUDDBRUKLFLSZUGMFVCQKVYTJLIHNIEAOJZTCRAXMPVYWANZSWXSOVZVQNRMYLMGLZMDOKKHAAGQMOAGCPOZWBWCVUFONYPYTKEENJF");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CVHNITGFMANVCRLUBKZKRWRHZFDFWPYJOBJJYJALSDKZGXHSNWUSAIVRFZHEIILCBXIDXHAVSSWSCXNMVZZELTKCUOKHAGUZTWQXMEKLFMXYLTUEUFAYFEHQUDKYTEEATOPLVXBVZESILMBGQXWCTWNGGBQOG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.4488108101232946;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TYDSHHPNXYAXFSFTJZLPGXNOKEQLTUGPWDYEEPIDEWVFIEOSCYNUKUKLLFNPIZHKRCMQBXTPLZEVTUONSGQWQVMIDYORAGFFAMLHIZUOWHYZWBVBZXMXGNALOMVAHMHQAZCHKAPRBYSZLTBOJHAQDCOUKBRGSCVNICWJFMZPCBTIDCBSMRKWHJGXQGJPSUJKSILUSKFBFKAOCLJDPVZXGWCUR");
    tmp_tmp_msg_0_1.dest_man.assign("IINBAOAIRIUFGWMZUUKLWMFLDSZHVOHIEYPTJMSZDEQSGCILVMOFOMYBSUEPQJPOSKBVOSOGTGDTONKEEUFRJIRICZCBAZCHUYZZCXVXVCQXDYXVRWINEJHFDHKNHHNFZPCTVYLLDGMYEXRSXYVNAGWUPIQCLHPWRGEKOQYBMDCRLGRDFJKNHXAECWUZXJBSJTWNWWPSAGAWLZHU");
    tmp_tmp_msg_0_1.conditions.assign("LPIIEGMXNCFYDKNDSXYKVSDLLWJZKTZHQYZFQUPIZWLYQUVDNGEGWWGMRMWIWKZJTLHOUGKUOSSFTHAZYGPUOEKOBCTY");
    IMC::LblDetection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.tx = 27U;
    tmp_tmp_tmp_msg_0_1_0.channel = 221U;
    tmp_tmp_tmp_msg_0_1_0.timer = 32157U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::StationKeeping tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.879230268414557;
    tmp_tmp_msg_0_2.lon = 0.16059395116578057;
    tmp_tmp_msg_0_2.z = 0.41439263891588385;
    tmp_tmp_msg_0_2.z_units = 28U;
    tmp_tmp_msg_0_2.radius = 0.8152738915456457;
    tmp_tmp_msg_0_2.duration = 18669U;
    tmp_tmp_msg_0_2.speed = 0.561788031959076;
    tmp_tmp_msg_0_2.speed_units = 196U;
    tmp_tmp_msg_0_2.custom.assign("LRROXXPRJIVYWHKUBPGBXZFPTDIZTMYZFDZAGADDICKBRQNCHWWYVSLPUPSCAYIFTNAFNVIBOTJNOQQOHELTMNEMFUMCRVOSSIWRNCZLGAZAGOGPK");
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
    msg.setTimeStamp(0.6955083589806178);
    msg.setSource(56986U);
    msg.setSourceEntity(220U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(143U);
    msg.command = 226U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EDWIRSCVUJXTDCZAGZZTVLMASPOFRCMUKBOOYQKNGFHCPYZOJYWQFLEGDZDNSRFNAEGJIQGXNRQEPUZBQDKTUUXVJUCQOHFXPBVRBGIPVTIMAPKCIUHSXWNBLLJQBSDFPOYYPWVKMKYKCBMAEXEHMTLASZRWBVXNDIJXWSLILTFO");
    tmp_msg_0.description.assign("LJXAIYKPRNSDETEARVKE");
    tmp_msg_0.vnamespace.assign("UTEWEBVDIZLSNORCBFDLTAHPAUJECXEWAMJVAJHUVROG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WPIRENCZDFIPORZXZOMBWHGNCSXOOFPKODGNJYUVUKXDZHGERUT");
    tmp_tmp_msg_0_0.value.assign("PGYXHCTWMTRRKRUZTSUKXWZRDCVTJMNMVDODUWBVEIZYCQNSVTAFACWYVRVXLSWBPAGKEEHNGDXVDTBUGJHLMIUPBOGQLPRTLVGKFZLVAZKCMJKHGMJULDRPMCNW");
    tmp_tmp_msg_0_0.type = 178U;
    tmp_tmp_msg_0_0.access = 197U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JTBQEUOKVFSOKJRTOCAPPGANBCQMOPPBBVGTMSHUZZSHCKOXCRMZWCWVPMUWAUJIINDEZHASADXGCALLEFCQXLINXWAMYKTLKSIZECVJIBNFE");
    IMC::AcousticRangeReply tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.address = 45U;
    tmp_tmp_msg_0_1.status = 72U;
    tmp_tmp_msg_0_1.range = 0.9312397687624171;
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
    msg.setTimeStamp(0.23916641869297595);
    msg.setSource(26361U);
    msg.setSourceEntity(191U);
    msg.setDestination(52362U);
    msg.setDestinationEntity(70U);
    msg.state = 212U;
    msg.plan_id.assign("TMGCVHJHSUSSFZARDCXLDJLRIRATIQNNRLXYZDFZVHEEEBVPXZPBNMW");
    msg.comm_level = 70U;

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
    msg.setTimeStamp(0.6123100662677408);
    msg.setSource(12672U);
    msg.setSourceEntity(218U);
    msg.setDestination(28878U);
    msg.setDestinationEntity(101U);
    msg.state = 31U;
    msg.plan_id.assign("GYCGFPBDSIGEOECAUGHTMZQIWVOBDDWYELARJKGVFKYUSGAZDMNVNQOXWEZUFZHJWJPRUHHHCLPCFBIPMJXNYACPYSRCDFDWOGGABSTVJUBOVDBRAZXQJUKULNRLSWSTJMFEQCNL");
    msg.comm_level = 12U;

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
    msg.setTimeStamp(0.9827930485988702);
    msg.setSource(53446U);
    msg.setSourceEntity(67U);
    msg.setDestination(30188U);
    msg.setDestinationEntity(160U);
    msg.state = 50U;
    msg.plan_id.assign("EIMGRTRIVQWAIROPFUVMWYYDXKMYRDWCQPDRAFBZHHMHXOZF");
    msg.comm_level = 74U;

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
    msg.setTimeStamp(0.6733315278458715);
    msg.setSource(41114U);
    msg.setSourceEntity(238U);
    msg.setDestination(44038U);
    msg.setDestinationEntity(180U);
    msg.type = 82U;
    msg.op = 91U;
    msg.request_id = 22705U;
    msg.plan_id.assign("ROGFRZHDDHSWFRNSRQAHEDUIYIMOXPAORIUES");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 4306U;
    tmp_msg_0.duration = 56604U;
    tmp_msg_0.speed = 0.9198709112008525;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.x = 0.7402107422915047;
    tmp_msg_0.y = 0.9020619434766889;
    tmp_msg_0.z = 0.5776716653063744;
    tmp_msg_0.z_units = 219U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YRBYQVAMIDNLGAIXZEJUEZVNTZAFOWRUMMGIJAGVQNXCFPUOCCXBXVMWXHWAVNLHPLUHSDNSBIAWQKNTTCZDCBPJEXWWGEUPAOOKJWVURRGLBTYYCPBIMTPEIPORKSYWZOBCZ");

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
    msg.setTimeStamp(0.4357558579353852);
    msg.setSource(62804U);
    msg.setSourceEntity(96U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(114U);
    msg.type = 178U;
    msg.op = 44U;
    msg.request_id = 17096U;
    msg.plan_id.assign("EFAKMEKZOJHGQMSZYJOEDHHZAAMLCTFXAROCIKSXBNIYIGLMDGWKWNMFRHLNMILLBIEMTFUOWDDQTVNSTVQPGSEXYKNEHWTSJDBITZSVRBPCVVQREVUPUUAXXLDEVPGDZXOIHVBJSQHQWYJNDISKVZGHOAMUPPYLCKUSWLRXFRJYXQBXONTFUYRMAJJYINZWSKKCCWY");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 89U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PWBACRSVWWPKMFXJUCZBDPIPGXQVHRVJQSDAJSC");

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
    msg.setTimeStamp(0.3083466596170923);
    msg.setSource(62311U);
    msg.setSourceEntity(126U);
    msg.setDestination(28266U);
    msg.setDestinationEntity(207U);
    msg.type = 188U;
    msg.op = 216U;
    msg.request_id = 33511U;
    msg.plan_id.assign("TGVAUKDZSOIRKKCRGPARHGEUAVGMTACEZLYPWDJIURNXMCSLNIQREVONECODSFQECPGWECYONNIIMICJFWDAXJLPPQNTNGXFKZYBQDWXXBWBYJWWBXOQUTFRRPOSEYKGZTOPYQBLFJLJJDATGLJAFJSMUFKMN");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCQKCLNUROQUTKVPOXCMSHTYPURJOKAMCBUUBWEGFXICWGWEJGHBHHZMAKVVLEAYXVYKRBSFWZPBCJRGBEPWGTDLNWDPDORKKAYHVOEBXCRZBJTQDTXXFGN");

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
    msg.setTimeStamp(0.9539094867682687);
    msg.setSource(7514U);
    msg.setSourceEntity(124U);
    msg.setDestination(10688U);
    msg.setDestinationEntity(3U);
    msg.plan_count = 25947U;
    msg.plan_size = 4285066468U;
    msg.change_time = 0.8272113581557938;
    msg.change_sid = 58700U;
    msg.change_sname.assign("SXTIMXPJFKDHWCGXDBONOPUDNQFB");
    const char tmp_msg_0[] = {93, -60, -118, -123, -61, 122, -67, 88, -90, -82, 124, -67, -7, -68, -125, -71, 105, 123, -36, -75, -58, 18, 45, -97, -37, 55, 22, -51, -119, 47, 99, -56, 35, 98, -77, 31, 58, -28, -89, -122, 2, -18, 19, 48, -59, 85, 54, -122, 67, 26, -3, 36, 100, -31, -72, -9, -62, -29, 118, -15, -90, -108, 83, 100, -85, 90, 38, 15, -69, 110, 45, -12, -82, -127, -57, 22, -104, 10, -37, 37, 84, -13, 4, 90, 40, 125, 22, -14, 104, -1, -56, -105, -28, 113, -44, -46, -11, 75, -121, -11, 19, 57, 38, 59, 98, 89, 93, -1, 60, 23, 36, 95, 5, 68, 12, 118, -93, 14, 84, 59, -17, 32, 58, -60, -113, 94, -90, -80, 98, 61, -85, -13, -5, -103, 108, -61, 27, -5, 109, -109, -115, -27, -23, 74, 75, 66, -61, 80, 74, 84, 58, -71, -27, -81, 100, -61, -126, -8, 41, -91, -17, 56, 62, 90, -34, -12, -12, 59, 77, 26, -65, 28, -55, 71, -74, -95, 125, -86, 50, -76, 21, 121, 62, -93, -65, 86, 125, 125, 121, -104, 78, -84, 79, 97, 8, 98, 100, 105, 125, 53, -71, 84, -52, -42, -9, -97, 33, 35, 46, 10, 55, -17, 5, 11, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UVIXKPFVMGLNGGPOBGZSORLWZMJRKNIJJHHRGUPIFACSICVNOVVALOBSUDLYQZPBWROFFPNPHILWFWDPGDDSYHYDYLIJVYDMOOYRBMTEBXWLWSNBUTFYUICSFUKXAUEBXDZKJTGEJXAJWAZWIGHNGKAHEATNHPSFVBQTROUEQDDCLVQSZQRQMETATCTXYPFZYVJMKMJNAQ");
    tmp_msg_1.plan_size = 15446U;
    tmp_msg_1.change_time = 0.6501910310076482;
    tmp_msg_1.change_sid = 3228U;
    tmp_msg_1.change_sname.assign("XSDCHLRKUXJEGUWRIWDQJKAVAVMMBITSQAFDGNJGNFMVMYAEVTDDAQSRIYFYNWIDHLJSLWVKHZFCPRHXMUOEHCDPMPULLUNTZBFQXEOZBGCMOSZDHNJEGNRXWXWZCLBOQKKFPQQFFYPRBPEPH");
    const char tmp_tmp_msg_1_0[] = {-113, -32, -74, 125, -1, 90, -69, 82, -50, 1, 65, -85, 7, 78, -110, 70, -118, 55, -112, -90, 97, 53, 97, 78, -68, 51, -84, 39, -79, 35, 113, 54, -103, -126, 86, 100, 91, -13, 91, -119, 94, 13, -7, -103, 34, -39, -85, -30, 81, 37, -94, -1, 78, -23, 55, 31, 67, -75, -115, -70, -98, -72, -60, 97, 89, 61, 87, -31, 64, -71, -76, -82, 73, -84, 117, 14, -88, 116, 67, 45, -42, 15, -15, 19, -101, -79, -72, -74, 57, -67, 20, 21, 69, 78, -92, 94, 101, 91, 109, 96, 84, 99, -16, 71, -117, -35, 119, -39, -26, 112, -31, -104, 14, -37, 14, -6, 110, 69, -30, -37, 12, 95, -11, 122, 98, 107, -121, 10, -120, 54, 125, 108, 7, 16, 77, 110, -29, -122, 56, 98, 48, 75, 4, -84, -52, -31, 4, -7, 121, -19, -118, -63, 85, 82, 41, 82, -82, 126, 113, -64, -107, -66, -58, 87, -25, 92, -70, -96, 12, -40, -85, 15, 122, 66, 102, 21, 81, -38, 37, -72, 42};
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
    msg.setTimeStamp(0.9605899665031876);
    msg.setSource(39413U);
    msg.setSourceEntity(15U);
    msg.setDestination(14585U);
    msg.setDestinationEntity(89U);
    msg.plan_count = 8772U;
    msg.plan_size = 2891542757U;
    msg.change_time = 0.426554463927761;
    msg.change_sid = 28466U;
    msg.change_sname.assign("KFDJEMRULHYWSVEZAJIRFPJOMAXBVPHKNKFPMCSEWVKDQYIKXYNMBEGLSKUEKODYWJKBGXXSCPGZAUVCCNVHPEAESHUEOFNGBSQVSZHUNSRZLXDMUNZOXBBHCOQTLDLXSZQKMPIXFGCNGQYWIREHZJLKCXVRRPWJTDHADIWYZHRAVLIMGCWQRRBCLZOGTGODWNTUOJGTTITIBYDTJPPEBUVWSVRTBX");
    const char tmp_msg_0[] = {-7, 45, 76, -67, -55, 80, -112, 5, -122, -123, -62, -14, 54, 47, 11, -74, -34, 106, -21, -101, 88, 54, 87, 13, -84, 75, 18, 85, -95, 59, 9, -78, -91, 93, -47, -83, -53, -23, 111, 40, 104, -111, 14, 86, 100, -54, 108, -30, -63, 34, 49, 38, 116, -58, -52, -107, 33, -45, 104, -15, 91, -99, -26, 73, -27, 63, -62, 23, 36, 2, -22, -63, 49, -15, 11, 45, -126, -115, 54, -102, -78, 52, -45, 38, 34, -34, -60, 15, 123, 7, 97, 123, 28, -74, -27, -29, 102, 53, -99, -74, 14, -125, 125, -84, 92, 15, 58, 1, 118, -42, -44, 31, 48, 6, -78, 122, 59, -118, -66, 97, 118, -26, 44, -121, 28, -74, -120, -73, 112, -70, -127, -125, -6, -104, 25, -85, 46, 51, -61, -127, 60, -6, -18, -108};
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
    msg.setTimeStamp(0.56171099588264);
    msg.setSource(61924U);
    msg.setSourceEntity(227U);
    msg.setDestination(16148U);
    msg.setDestinationEntity(37U);
    msg.plan_count = 41791U;
    msg.plan_size = 2652069845U;
    msg.change_time = 0.8705804549017283;
    msg.change_sid = 19184U;
    msg.change_sname.assign("HITLKLQSZIEQAGYNGOMJCCUGWMJSMKTIXYMIHRXBJOHFHNBFMQHQSFUBQXKSYYVKANBTBDLWRWYYFJIPUHZWAPPI");
    const char tmp_msg_0[] = {-19, -32, -97, -16, 62, -86, 2, -96, 108, -76, -31, -56, 114, -31, -93, -93, -75, -72, -109, 82, -23, -127, 114, 87, 120, 53, 76, 116, -32, 44, 119, 83, -24, -28, -73, -24, -76, 56, 0, -121, 126, -109, -103, -128, -30, 53, -15, 69, 113, -73, 9, -1, -70, -38, 46, -39, 50, 4, -49, -66, 48, -45, -123, 96, 64, 81, 75, 33, 18, -45, 115, -30, -16, -34, 0, -100, 60, 92, -98, 120, -54, 100, 32, 125, 11, 115, 27, -74, -44, -127, 56, 53, -110, -85, -116, -126, -50, 117, 87, 9, -63, -19, 7, 126, -79, -19, -95, 99, 52, -108, -16, -30, -4, -8, 53, 40, -64, 16, 121, 88, -114, -27, 12, -11, -92, 26, -79, -33, -39, -102, -46, 95, 75, 10, 74, 29, -43, 16, -3, -33, -91, -127};
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
    msg.setTimeStamp(0.9612175625427891);
    msg.setSource(65006U);
    msg.setSourceEntity(19U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("UFGYXNPUJKLDBSGTVDPOFKRQLCWJSKLKYYPCEOXSFSYDSRGMKWRWLBEXPGZXBINHRRDOBDQIEWAHJAOACOJSJYUCIKTJZRSKXFFBMQPMYEIEMGDQAVZINQCYXBXSPWZILYAUCGIJMWHOQRKOXVKTTGEFM");
    msg.plan_size = 25297U;
    msg.change_time = 0.9637968466535733;
    msg.change_sid = 33573U;
    msg.change_sname.assign("HTSIPFLEZGHKGUEBVTUJBKCRYOUMCLFAVOTLHWUNKUDCOSRPRYJWECXLNSRWJZAXSBDDSEGQGNTXZHHHLCQEBAKBPBZWYDFIHYWUWIOHTQNJVEVLKZWUCXFGVPQOGOMQMPTRXFJEWBEGGKVRYSDKPXLAETJPVIIQDNEDTIXKJZFQLIJJGWTCZHNYSXQDMINZY");
    const char tmp_msg_0[] = {40, -58, 53, -104, -91, 35, 113, 123, -2, -6, -55, 34, 76, 79, -83, -18, -21, -108, 120, -2, 44, 90, 125, 25, -40, 72, 2, -18, 31, 62, -63, 64, 7, -18, 72, 82, 31, 72, -107, 4, -56, -10, -103, -79, -19, -120, -107, 107, 18, 44, -14, -106, -2, 101, -86, -60, 103, 59, 90, -51, -21, -2, 103, -44, 121, 103, -114, 122, 102, -102, 122, 11, 125, -58, 43, -11, -3, 46, 40, -96, 97, 52, 61, 98, -121, 32, -75, 116, 57, -100, -16, -112, -71, 42, 108, -7, -123, 120, -69, 33, -25, 59, 82, 88, -39, -57, 19, 84, 113, -83, 37, 29, 81, -25, -38, -124, 121, 32, -127, -111, 32, 7, -14, -63, -105, -13, -66, -50, 72, -4, 45, 122, 69, -95, 48, 69, -66, 71, -68, 121, 98, -80, 112, 70, 108, -16, 8, 18, 0, -25, 5, 10, -115, 90, 26, 119, -37, -118, -110, 93, 87, 6, -46, 106, -24, -1, 111, -119, 17, 9, 83, 113, -106, 3, 112, 122, 23, 30, 20, -99, 68, 64, 98, 28, -87, 88, 81, 49, -67, 120};
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
    msg.setTimeStamp(0.9384227566572345);
    msg.setSource(53U);
    msg.setSourceEntity(222U);
    msg.setDestination(40827U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("VXDEDZPWGMRQZOVKYBMBQOPMLOANWFGYCYNGIXREDL");
    msg.plan_size = 14426U;
    msg.change_time = 0.2396335224451991;
    msg.change_sid = 10178U;
    msg.change_sname.assign("LDVQOWHQLEFKQBDTCXWTIHZYZVUZCUPKRQCWEYUQNCJYIGMFFRCGJFTJLYVVCVROQZWNBMATYTREEHGOESEUKIXRZEMGZDNDDPWFBVFJHGGFMMGSPPAMSJQZBKQGINKYWJAIEAWWMTRMOGEWXIXAICSHUCXOR");
    const char tmp_msg_0[] = {-97, 90, -76, -31, -35, 26, -38, -73, -101, 36, 121, -8, 51, 67, -21, 60, -54, -74, 15, 6, 1, 59, 85, -57, -95, -127, 91, -106, 119, -48, 98, -106, -125, 20, 124, -104, -103, 83, -89, -74, 95, 9, 63, 113, 122, 64, 44, 70, 66, -41, 35, 120, -18, 78, -80, 114, 31, -41, 96, -16, -88, 11, -51, -32, -55, 2, -124, 117, 52, 63, -53, -23, 23, -56, -102, 97, -10, 25, -86, -99, -72, -98, 102, -109, -107, 100, -1, 57, 97, -88, 84, 110, 117, -110, 125, 8, 95, 29, -119, 9, -46, 75, -128, -64, 67, -37, 67, -85, -101, -4, 106, -60, 27, 79, 13, -2, -32, -33, 95, -78, -27, 93, 121, -13, 83, -8, 60, 111, 44, -32, -6, -104, -13, -127, 3, 11, 102, 12, 120, 124, -48, -116, -49, 47, 58, -75, -28, -69, 75, 19, -23, 110, 98, -13, -47, -17, 33, -38, -11, -127, 77, -45, 11, 32, -102, 98, -107, -7, 63, -112, -100, 92, 47, 20, 5, -125, 94, 56, 66, -9, 77, -26, 121, 20, 78, 3, 70, -11, 89, 68, -11, -42, 40, -85, 66, -24, -55, -68, 67, 99, 83, -42, 98, -64, -56, 13, 111, 123, -41, -78, -74, 61, -7, 123, 93, -92, 35, 12, -88, 9, -104, -64, -25, -30, 101, -27, 21, 102, -91, 61, 22, 118, -119, 35, 54, -40, -51, -93, 41, 55, -119, 40};
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
    msg.setTimeStamp(0.28796532638951367);
    msg.setSource(2004U);
    msg.setSourceEntity(196U);
    msg.setDestination(13566U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("MPSYVMDXUVUVZWRCCXHGXCYVWMVDOXGQDSGDUMBDKEJVFXLCRHDIUWIHYQOXLOIXEAAYKZRVTOWYNCLEKJLXLXRQPRCMINMGRBVVUQEIONMPDVJNSFZBTHGASUWSGKWHNFYCETOPWJGWATDCQKNUQQLTCDJJGSTUGWPJBNBFHLFAHCOJSTUZABEPZPIBZJYPLSKNNSGRQ");
    msg.plan_size = 44624U;
    msg.change_time = 0.016247837808595733;
    msg.change_sid = 28380U;
    msg.change_sname.assign("YZXIWUKSXYGTUSZPHXWOBVZJIZRLSLOZQRXHAPJQDDYTEDXJIUMKUDYSHFGNKLVGRZNMBYDQMUTEDRCAGJEGFIPNELHQXAMFGYX");
    const char tmp_msg_0[] = {-76, -7, 63, -91, 90, 28, 58, -7, 13, -61, 33, -108, -58, -109, -62, -36, -124, -17, -128, 57, 3, -62, -74, 19, -120, 118, 91, 84, -8, 67, 61, -94, 37, -8, 105, -92, 94, -103, -105, -20, -19, -6, -101, 14, 11, -124, -54, -54, 81, -92, 77, -10, 2, 23, 83, 94, -85, 77, 109, 22, 84, 29, -54, 92, -55, -30, 20, 3, -72, 94, -125, 52, 68, -57, 44, -38, 15, -47, -46, -18, 43, -75, 29, -72, -104, -114, 79, 78, -97, 84, -85, 17, -111, 27, 67, 0, -86, 124, 105, 41, 13, 92, -68, 20, -101, 40, 105, 110, -72, -29, -8, 85, -17, -27, 52, 70, 42, 104, -59, 62, 125, 49, -54, -21, 110, -96, 26, -17, -51, 63, -5, 60, 116, -102, 38, -79, -45, 119, -113, 100};
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
    msg.setTimeStamp(0.6268070550850081);
    msg.setSource(55377U);
    msg.setSourceEntity(37U);
    msg.setDestination(37819U);
    msg.setDestinationEntity(182U);
    msg.type = 235U;
    msg.op = 244U;
    msg.request_id = 57707U;
    msg.plan_id.assign("JIBTAUFIOKXBTZBHGAZNURNYZWWOPEDPMVHOIOMDJVMKZPJXKWPALHCUUWKJLFJMWTYRNUHFIATQIXIXWJRXCTFQIVFVMMUMVRDSOEKCUYQSTRBSMVEAGPHOIDFKJOHEKIGEOBS");
    msg.flags = 44490U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 249U;
    const char tmp_tmp_msg_0_0[] = {-45, 81, 32, -69, -22, -44, -103, 25, 3, -19, -107, -24, -42, 107, -80, 109, -100, 102, -49, 51, -103, 75, 110, 17, -22, -114, -7, -55, 121, 62, -14, 14, 80, -35, -11, -6, 18, -27, -26, -90, -86, -123, 36, -9};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XQRFTLQLCWMIQDFDLLYOKXRUCJJBPJFUZIOAWDVSYJIXXPWPCKTVWAMIYRTCHPPVXNBFYBIGWEBEI");

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
    msg.setTimeStamp(0.34321484735149876);
    msg.setSource(32078U);
    msg.setSourceEntity(7U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(229U);
    msg.type = 201U;
    msg.op = 115U;
    msg.request_id = 31588U;
    msg.plan_id.assign("OXQSPBXTRLEYDWDGASOGNZZXWUCTYKJDYIILVMKIAHNVBHGVONLMUPDSVJTTCYFAQYJRRBTWAOMCMEEHVDQETJMQONWFO");
    msg.flags = 54914U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.26580318035972783;
    tmp_msg_0.beam_height = 0.7347711701898485;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OAIWPGSCLKBPKCFUZTAZZEIWP");

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
    msg.setTimeStamp(0.7622142346178458);
    msg.setSource(15654U);
    msg.setSourceEntity(2U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(157U);
    msg.type = 77U;
    msg.op = 126U;
    msg.request_id = 29292U;
    msg.plan_id.assign("AWGXOUOCINDMFRCOYQGAAXXPMSORIVBWMYHHJSVZIXTPNCQCPBEWSUWM");
    msg.flags = 55497U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 10705U;
    tmp_msg_0.lat = 0.5014832510921978;
    tmp_msg_0.lon = 0.02120822989040505;
    tmp_msg_0.z = 0.23896150888811074;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.speed = 0.09828139778043532;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.roll = 0.5793752286970982;
    tmp_msg_0.pitch = 0.3182454247284271;
    tmp_msg_0.yaw = 0.3692546952908857;
    tmp_msg_0.custom.assign("BLBYLTXZCGOHFQTDBELSFYKRKECONJLOPAPITBFLWDJQQVDKJLINTWPJWRZPUTYRDPPIAHTSAKGLQWDTRSZJUAPXUDUMOKAVCVSAIRGVNKMLDRZCZVNZZXJESWSYIYWJONWISDQFEWOLZMRSKMBVEXVTHRDXMAWPMCJOELUJRECFNUUHNQGMSVDPVINOMFZIEKGYSIPUCXBBHROZFYTKMGAFEFMX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ENUUFAZZPYGB");

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
    msg.setTimeStamp(0.9571849616063843);
    msg.setSource(36795U);
    msg.setSourceEntity(9U);
    msg.setDestination(64381U);
    msg.setDestinationEntity(248U);
    msg.state = 178U;
    msg.plan_id.assign("FVQFPMOLHYOWXSFQCHRJZYGBBFSGBNLBCLPMJDDVXETCSHNOBDUNDHDUXBAJGVEWGYUWIIXFCONSNUGIRMKOCICZEDPJEXKGAEYPHKMHHDIWEZSYUILOOPZZAHRCWBVFEUIRJMLNUFLWOAUSLQJORKGDNPRQLVTQPOYSAMJBKYSTWCAKBPUTNJHGKKUFMQNRCXW");
    msg.plan_eta = -1230913654;
    msg.plan_progress = 0.7284534232090236;
    msg.man_id.assign("XNMDOQEAVBZODSKMDHTSRFOBXHZWRQZILU");
    msg.man_type = 57702U;
    msg.man_eta = 690749566;
    msg.last_outcome = 249U;

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
    msg.setTimeStamp(0.1362998975094546);
    msg.setSource(10224U);
    msg.setSourceEntity(175U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(226U);
    msg.state = 80U;
    msg.plan_id.assign("YWRFVSTQSTNACAIADGCJDSPIPHZIHQMQJFIUUNUZTFXSSAOONBABRDJNEIBKGAQJVTZULPKDKJDFYPHVUBRMDMXCSOQPRVYWQMBKRUQIFYNCHHBGTTKGJEBSTVORAFWYICQKOPXOPMEMLUGULZAMWZLTHHKCEXRMCKREDXZWSXDMALIJKOFJEAVIJCLVNLVEYUT");
    msg.plan_eta = -19359080;
    msg.plan_progress = 0.36579293218095765;
    msg.man_id.assign("SUJOLATAZUMXSMSDMJSR");
    msg.man_type = 43981U;
    msg.man_eta = 2009358750;
    msg.last_outcome = 179U;

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
    msg.setTimeStamp(0.7523690107958605);
    msg.setSource(10322U);
    msg.setSourceEntity(153U);
    msg.setDestination(35763U);
    msg.setDestinationEntity(180U);
    msg.state = 94U;
    msg.plan_id.assign("KFUZRLDYFGQZPHIENTMIYVEEJTQFQRQKMGUVWQLLEEBLTVSSFDWHZDTHICCPUAJMVEHNDGBOKCZTOYFWKBLJZRYMDPCFMVHXSVNCAQHFCGQUXSKDTGAPZKWPLBWNQIRDVWMUFBGLEGXWSRO");
    msg.plan_eta = 987350858;
    msg.plan_progress = 0.5749897497446178;
    msg.man_id.assign("KFBLDYBFOAOXXXQANQZWXEQZILEFE");
    msg.man_type = 47172U;
    msg.man_eta = 138694911;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.9943661917181829);
    msg.setSource(19040U);
    msg.setSourceEntity(133U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(102U);
    msg.name.assign("RNFIPRHLYSGDYQCFXFSZMDSZHRCUHEAJQUOUZLWJTZXUYIDIOTMDBKGFJSBOPEGSXULPNSNRWWEBQATTHGYYPMVAISXPFLMMZDRJOWACPSFRJRDHLWHZQMJWHRCEPKYVRCKWOUJOPCXMTTWUTAJDHYVQNVRVHOEFBGABAEUFWDBBDHNBJQGLTQFGVIEKQPJPNBUVLWFUCMOYENILXKAG");
    msg.value.assign("KBEQRVQYFQUJODGXMI");
    msg.type = 214U;
    msg.access = 96U;

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
    msg.setTimeStamp(0.47073482822667234);
    msg.setSource(39583U);
    msg.setSourceEntity(17U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(144U);
    msg.name.assign("BPMYIWGFIKRVSVQPMLUUNDCPECLLBQEPXSYLSTRIQJHFABBNGSYRKWFJIIJXKEZYDTPAVVMAESHUNTXOGCCMVYKWFYHOUDQLHAPECJASSJKHCQFKPGLTJXNJGWCOGHYTRVGRIXZPPOLDUQSNOKRRQZYXXAIAZFTERIFNMUOKVOBLMYEFBXTCAMTVLFDNGNWIONKWZAYQJGSECDHUHSFGZZE");
    msg.value.assign("YGMMGNDFGYCBWSSMUDUEHMZNZOOSSJMEFBICTUIJVLHFOEKPVXZEFQBRWRLYLBHMKAJFZHRDYKLAUVMZHCANGJIFASXGQPNPJPODWXLUYQEFPNJQALWYSHQQLFD");
    msg.type = 39U;
    msg.access = 56U;

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
    msg.setTimeStamp(0.6079560949080471);
    msg.setSource(58170U);
    msg.setSourceEntity(41U);
    msg.setDestination(30928U);
    msg.setDestinationEntity(196U);
    msg.name.assign("EOYZABMFGDIMMPNQHCPYLMFPLJGNNXCLPZYUKVQTOXIXHZKPGSDEIYIDRFRZGPRGVXPTFGBJMYIQJFVEAGYKTBIQJDSPQNZHTXAR");
    msg.value.assign("UHVNWYOLZUWFHIWQUCWAMWSSXCBLVXGCCVKQFSQXBMQVNAGWAPBXZMUYSBDOQEJDKATPXOLTVTEZGMYFDOPYJZTENRUCZTEYEQGARWSFULFOADOBZVARFKDMXJCFNCMTYDHOFEUPJJZSVWIUHPHKRYIUYBDEYISSKXNIPNMGVLDPBFFJLIPNWAWTESKKKCGKIXGXQOBVINMEJUGLLNXHYBRRB");
    msg.type = 208U;
    msg.access = 11U;

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
    msg.setTimeStamp(0.85619985234466);
    msg.setSource(10166U);
    msg.setSourceEntity(40U);
    msg.setDestination(30017U);
    msg.setDestinationEntity(105U);
    msg.cmd = 119U;
    msg.op = 75U;
    msg.plan_id.assign("UTBEQQACPYYCXDXDNOZKKBXQKSXIHTRBFDJCDMTGSJVSSPHLTXMXKQMRGMOZGPAQOWRQTTLCAFZUMOAUBWRGPIPFGUTVPEWDIHXVJCRMOBUWGH");
    msg.params.assign("VRFFKDYIVYWJLYRDDDKVPCEJVPOJFWKQWVSXTFAICAKRHQKAFWVEOIURROKLKNHKTWXXGUBMCESBUTYCCGCRGEJAIBJXLJUUNGIYRZHIAQSNGFUPLMGTCHZBUPFFHUDS");

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
    msg.setTimeStamp(0.6115894401512492);
    msg.setSource(53841U);
    msg.setSourceEntity(43U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(98U);
    msg.cmd = 238U;
    msg.op = 128U;
    msg.plan_id.assign("KHQXKZAUWZDKBENXGHJCEGIMUYUCRDALYGQRIVPARBZAOKTYPJFLXTBFFIVFOQ");
    msg.params.assign("FYUWHNMDRGUZIGHLTRJDCWAWCRUXNBJBZIEVJPHEOSFCJPJTDGRWMYGWO");

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
    msg.setTimeStamp(0.8802573858210492);
    msg.setSource(23993U);
    msg.setSourceEntity(72U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(152U);
    msg.cmd = 243U;
    msg.op = 190U;
    msg.plan_id.assign("ZNPRIVVCNIECLSBLIEYGUKGZLFPTHLARLOXNXQJDADQTYJGDHHLFQSRECIXWNJUGKAXSGKJEGBPMFOWTASRCBAMKCATTREUEIFAIMZCBESGEYMAOLIBRSWURKVKPPQDOYCRCXVTHGKWNNHLMQKJHQVUSBH");
    msg.params.assign("DVKQQNIIMDWPOJNKRCBUEMOAPOUZXVQZGVELRLJNXLGYSHVJBYVSOAWPKJOICINZDHEENCSSHMJQJTWDCUHLAPRLTLPXXNHXAQFFEQSCZRSETEEHIAAPTFOYPQTUPBLKZGAROHGGJFUGURBNMTEKYBFRGCBYWVYMFOBFXZQNFCBAUOFKGIWTWZRSMHXNUSKTZQIOLIDYPUSHLQMZJRLIMD");

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
    msg.setTimeStamp(0.8967246879257835);
    msg.setSource(40974U);
    msg.setSourceEntity(245U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.35164695455474915;
    msg.lon = 0.48165085018155407;
    msg.depth = 0.06334798103873163;
    msg.roll = 0.9547936955645495;
    msg.pitch = 0.3741656215370035;
    msg.yaw = 0.4908964556709998;
    msg.rcp_time = 0.7344933562730431;
    msg.sid.assign("MOYSTXKLBRPWHESCUQZPXTMFCOF");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.7590927192425165);
    msg.setSource(14790U);
    msg.setSourceEntity(143U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.6822818070913133;
    msg.lon = 0.7416852327638872;
    msg.depth = 0.375614717110499;
    msg.roll = 0.9422275842765251;
    msg.pitch = 0.13904788205427243;
    msg.yaw = 0.21649937652897466;
    msg.rcp_time = 0.1390235652330749;
    msg.sid.assign("EDDIXRUEDVRYWYKQKREZLZJELSNSIFMQNMIHFAVPLCLPGCPRTJRXVTXHYATUQORKEPAUCGFVLOICGZTSEFIPWSHWPIWYQFOYBAAYESJUDWBKRMYNXSGPUSZLSXNCBOFCHWHFBBEDNJTBTV");
    msg.s_type = 4U;

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
    msg.setTimeStamp(0.5514054843224541);
    msg.setSource(11036U);
    msg.setSourceEntity(82U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.061997770374542904;
    msg.lon = 0.41778106001301263;
    msg.depth = 0.2429129191590621;
    msg.roll = 0.03902413358797985;
    msg.pitch = 0.7751745752505717;
    msg.yaw = 0.19963400214049243;
    msg.rcp_time = 0.294535469818634;
    msg.sid.assign("YDIOYOYOTBESXCPBCFOLFVPTIEJATBTUHXDGBGDZPLAVNSVIMLWHLSHDAQTGKRRILCNBCGMXCQQGVIDKSJPFWUOQYFWPBJV");
    msg.s_type = 156U;

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
    msg.setTimeStamp(0.789590260178046);
    msg.setSource(49306U);
    msg.setSourceEntity(201U);
    msg.setDestination(24937U);
    msg.setDestinationEntity(16U);
    msg.id.assign("EKVUHLKHEZDQKVYVREKQRIXNNAPRDSFNEKWPTTSRPCRNFTLIFKJPYPRLBXTVGXBZYYSXHAGOOYNGZGWJQDLFJDWMCPCDGVIACIRLQHMSFNAQQGXFZOWUIZLVHBCZOJAWLWRBDTFJMEUEDMZIIKM");
    msg.sensor_class.assign("HFBGPNWVGIGCMSLUCTONIXHUJSDLCFRFOD");
    msg.lat = 0.44639661043267564;
    msg.lon = 0.8958461992489819;
    msg.alt = 0.605083305361064;
    msg.heading = 0.48385457631841333;
    msg.data.assign("TAAYROZGGRKAHBJPPKPUXQTOAXGQFNIDQAMGIBZKPCHZBWFJWFFBETDFKGDPIEJYJFRYCEDUBSEKQKOXULXIXHOOJWYWCMKWZSHPUUETSDGCEXOIBXYYLBWDVSVVPMOSWSHSUFEXYWYJMJNHNIZVOGNATLEGCSPIAMWLISVVCOKLVQMMANLDR");

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
    msg.setTimeStamp(0.27054541750180094);
    msg.setSource(13764U);
    msg.setSourceEntity(57U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(205U);
    msg.id.assign("LNYJANDCPHKKWKUDFSWCHJNTFJILWGGAKTEALMERJJVWIABRFNLJBVYRYFURDDHHHUIKTHZAJROMBO");
    msg.sensor_class.assign("PCRWKWIXUWPEPKFRZMELRXOQHZEQIJJOPUVJSKVO");
    msg.lat = 0.9217828756775315;
    msg.lon = 0.2120282612874641;
    msg.alt = 0.04172942520577805;
    msg.heading = 0.5210793582288589;
    msg.data.assign("HQTGUMNUYFDOVRSWBNBTDRKETXFWRMDNDFXCGPPETCPVDGAXGBTMXPJSDYETRSIHVLWGXYACPCLGUXZAJYLLJFLUHYASIHY");

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
    msg.setTimeStamp(0.144889651129117);
    msg.setSource(53842U);
    msg.setSourceEntity(112U);
    msg.setDestination(57850U);
    msg.setDestinationEntity(174U);
    msg.id.assign("JURHIZVZDGPXANI");
    msg.sensor_class.assign("HCKTCFYAITYZVOQQADFVRMKZECHTCGKXSISNCB");
    msg.lat = 0.4287142523403694;
    msg.lon = 0.5404397416372708;
    msg.alt = 0.998247351024799;
    msg.heading = 0.29051934844153804;
    msg.data.assign("GFHIHSAJTKSPESO");

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
    msg.setTimeStamp(0.7851087826953529);
    msg.setSource(33233U);
    msg.setSourceEntity(9U);
    msg.setDestination(31996U);
    msg.setDestinationEntity(11U);
    msg.id.assign("RNXQSUUGTDJKHLQMOFNDYOMNVNHADUXZSZZBBHSPPPSGQJBCERTUHJNZGAZJVXPWTRXMGNHRWDSGGLSOPVROLWYJGBTNBOYQFEKRWVSKNILRBRQRGAMQBVAHUMUVEPWSYPQINABKXWQDOCQAWHVAYBELCXTDJCQFCOITJOHIEPMIMFTIMTZFVFMZFGHXNFZKLFKDLUVLYYUJXEIXDGEHZPREDBCZJPLVOWWACLUOFCSTAXMJ");

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
    msg.setTimeStamp(0.28451732213454484);
    msg.setSource(54057U);
    msg.setSourceEntity(233U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(197U);
    msg.id.assign("UHYTIEAMWQRBRLOUFNLVHVQOGHVSHWKEERJCLAMRXYSYIDNMEPISITFLPKVDWQIVABYATWWCXIAHJOWDYAZLFCMQRPZPUVDJPXXWDOXFZAUVJZYUZFFEHENNQFLGJSRWCPTNHZOQIHZCRFDTGUUSONMKCHULPOKROKTGXGTCGLBEXDOCPYETJZEVGUVJTGMAYPKEBQZGINL");

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
    msg.setTimeStamp(0.893819382280567);
    msg.setSource(29049U);
    msg.setSourceEntity(68U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(68U);
    msg.id.assign("VYZOYQUNBFKZOCBDJVIYSKPHBTLPHCMCRGGAWTQDPVBSFZHAIXLXZNGNISVBZCQJAKEERAKNGBGFAVQACUJPUGQDMXEMUWELFUNDLQWTOIKGRRCOFLXQFJPYVUNMWRDHXKBIGXRNRVEDCTYWSRNUCEUYELBMXLQVIZOCBUTAXRWIDFXKJSRHHPKTWLSJXFZTTACWLMDHFAAJYIVMHONMFVUPZIYSESOGBEONPPTKDLJMWIMEZQJZKDH");

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
    msg.setTimeStamp(0.4977050466007673);
    msg.setSource(55198U);
    msg.setSourceEntity(163U);
    msg.setDestination(32918U);
    msg.setDestinationEntity(67U);
    msg.id.assign("PGQSGDZPAHLRMBOWDWDTTMVRXPCNMNAXTTHSBGEWLUHBZBDJIFGONJOWPVGHSZEXUUYPZVZLBYCZEJIEAVMKUENETWJPSSAOKQO");
    msg.feature_type = 240U;
    msg.rgb_red = 218U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 128U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4243893889120437;
    tmp_msg_0.lon = 0.533287122041932;
    tmp_msg_0.alt = 0.5913960429060567;
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
    msg.setTimeStamp(0.26095461559426625);
    msg.setSource(53311U);
    msg.setSourceEntity(43U);
    msg.setDestination(50695U);
    msg.setDestinationEntity(210U);
    msg.id.assign("ERZLZXPNUVTYXXFE");
    msg.feature_type = 187U;
    msg.rgb_red = 147U;
    msg.rgb_green = 231U;
    msg.rgb_blue = 228U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.31963489309059434;
    tmp_msg_0.lon = 0.24315605623960357;
    tmp_msg_0.alt = 0.22477376409696215;
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
    msg.setTimeStamp(0.6648319647176153);
    msg.setSource(63810U);
    msg.setSourceEntity(193U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(135U);
    msg.id.assign("CJGXZTCPBYPMUBSVKFWWPLZBZNUJUJXLZYNAJYYCMXTSKGQOGNBLJJPACKVBHEPQTCEDNMIZDAFWACZEUOXGAHMPNXRKLDEFHRGXS");
    msg.feature_type = 62U;
    msg.rgb_red = 180U;
    msg.rgb_green = 70U;
    msg.rgb_blue = 114U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1113782602930401;
    tmp_msg_0.lon = 0.3063064910492622;
    tmp_msg_0.alt = 0.33529063282785965;
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
    msg.setTimeStamp(0.753374806526733);
    msg.setSource(65489U);
    msg.setSourceEntity(28U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.7506682756686998;
    msg.lon = 0.9834271215142187;
    msg.alt = 0.15687280864172526;

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
    msg.setTimeStamp(0.9455667496241799);
    msg.setSource(27722U);
    msg.setSourceEntity(82U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.5257903332186024;
    msg.lon = 0.9530462370424776;
    msg.alt = 0.26356118458651034;

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
    msg.setTimeStamp(0.7173196423836863);
    msg.setSource(289U);
    msg.setSourceEntity(245U);
    msg.setDestination(6139U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.7246024095143644;
    msg.lon = 0.4375340316175351;
    msg.alt = 0.21642957467027524;

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
    msg.setTimeStamp(0.5266241040114029);
    msg.setSource(39434U);
    msg.setSourceEntity(78U);
    msg.setDestination(64373U);
    msg.setDestinationEntity(70U);
    msg.type = 121U;
    msg.id.assign("OREDICTXANLWZVZYIXGCYBLLQDEF");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 192U;
    const char tmp_tmp_msg_0_0[] = {-8, -87, -6, 107, 79, -99, -18, 21, -47, 87, 74, 53, -42, 26, 123, 64, 117, -121, -52, 122, 62, 115, 29, -23, 13, -68, -95, 16, 6, -1, -16, -83, -116, -1, 38, -55, -53, -53, -104, 1, -72, 35, 31, 52, 16, -120, -6, 6, 111, 114, 123, -4, -40, -65, 8, 4, 113, -84, 27, -95, 121, -65, 60, -8, -119, 73, 13, -28, -117, 27, -12, -14, 40, 126, 90, 49, 66, 78, -67, 78, 23, 52, -69, -33, -5, -48, -93, -48, -103, 40, 93, -72, 6, -30, 112, -79, 61, -70, 120, -74, 56, -49, -82, -64, 82, -54, -99, 67, 16, 68, 68, 58, -47, 100, -118, -39, 30, 72, -79, -110, 14, 115, 33, 103, -60, -81, -106, 97, 2, -17, 103, 121, -111, 82, -112, -72, -71, 75, 27, 116, -104, -73, 77, 56, 5, 21, 21, 107, 116, 84, -39, -76, -126, -69, 100, -52, 26, -70, -19, 82, -36, -21, -7, -90, 31, -66, 5, -93, -96, 65, -87, 109, 98, 79, 11, 84, 21, 33, -125, -101, -15, -60, 97, -109, 15, -38, -17, 36, 119, 114, -82, 108, -111, -17, -23, -76, -49, 107, 123, -66, 16, 74, -79, 111, -80, -51, 99, 75, -119, 88, -9, -111, 98, 108, 119, 96, -105, 64, -10, 102, 78, 1, -115, 32, 71};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9783600932773446);
    msg.setSource(24770U);
    msg.setSourceEntity(133U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(23U);
    msg.type = 68U;
    msg.id.assign("RUCYIHGWMMBUWPWUXOPFUKZSCKMMHSPTAGEJWJQRCVBIKXISCJLOQXCPCDFDVIYZPVHJOQXGEIQQHDWLBNFEYWNYVMANZXDZKRDKNLXV");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 124U;
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
    msg.setTimeStamp(0.6457947233332584);
    msg.setSource(63358U);
    msg.setSourceEntity(32U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(103U);
    msg.type = 117U;
    msg.id.assign("HVZQSXTOWAPOYKPXSEZSSLSIZHHMUPCCRAQWJOHVAXIWEFPZYAKMVBJDPNLCXFTISVVXCRLMQDIWTTZJVG");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 47069U;
    tmp_msg_0.lat = 0.7010488164170239;
    tmp_msg_0.lon = 0.7271502949612637;
    tmp_msg_0.z = 0.5516258082687222;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.amplitude = 0.5553589351250159;
    tmp_msg_0.pitch = 0.0353793719054728;
    tmp_msg_0.speed = 0.8429070315549198;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.custom.assign("BMCOZIPKSQITEZFZGUPOEDHVOLXXRLWMRQPFCSCRFVQXEKSIWYWKEAZTWQRHAXCZTE");
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
    msg.setTimeStamp(0.1574368680685745);
    msg.setSource(7151U);
    msg.setSourceEntity(222U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(37U);
    msg.localname.assign("ALXWMPZMXEANREHRWRBUCJNELRVUNQZEOCERNHZXELGFKHUHNMGPRPWTSKNEQQXZYZGLBLQWVLPGZWIYMAMNDMBBACKOHDAHXDSQCIIEQYJCFQVJGOVOQBDMMSPVVROKGYNJZOJCIFYLTUWJOFKCQTFPVDFDMKVKSBJSHIYRXWWMICLUFUQFUHCPGOXPADTSZIJWHIDY");

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
    msg.setTimeStamp(0.17101995847056217);
    msg.setSource(2354U);
    msg.setSourceEntity(161U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(130U);
    msg.localname.assign("XCXTONFAENKNYELIBMTWJFILFSQEBKRYMOJNWGTQOHEDAACPKCKVRMHWSDIVCITBVJRXFJRZBBRHUUGUOETQWCJCRSMSIYZOYMBJXFWKMXQMDHYPVYGZQIGACXQQQZFHCLGYBASPSKANLMV");

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
    msg.setTimeStamp(0.9758000179326054);
    msg.setSource(15005U);
    msg.setSourceEntity(209U);
    msg.setDestination(1208U);
    msg.setDestinationEntity(234U);
    msg.localname.assign("WCIOSHRNIXJVHVTSFXYYVSYEJBJHVWRUFMZNPCAPMTSZLVLOIHDUDUHKUWDICQBKVEJZLGTTQPXXOWSNNNMXFRYCQSOWPZNWTQRYFDCAUOJDFKQQVASFEKSAPRVEECXPDI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VFVKQOSNTGXFMUGOMGCVPHALCTSXGWGUPWMALCXYFMGWKKGMJFPTOLRPJCFXUMBUXNZYILQZTFNAXADSSDATSMIBJVPIGKTYAYWWYXJVROUQUTLNROHQXUXFEFRDZZPHQGQUQZHBDAWDVBEIIKTRHYKKQZNOBFMJOBYHSCKHEOVZNTAJINYRCYSNFWEJDBIWEUPKZSGQBLMAPWNRCCBDTPYMUSRIWXONSPJHJCDLJZCQALHRLH");
    tmp_msg_0.sys_type = 100U;
    tmp_msg_0.owner = 58028U;
    tmp_msg_0.lat = 0.51744387144748;
    tmp_msg_0.lon = 0.862356860157782;
    tmp_msg_0.height = 0.9530166502938499;
    tmp_msg_0.services.assign("FSIVIDLZKFLUEPIENPCTNULJJYZAGJNRRGBYLIQKHLWEJSWBXVTPKZFEMUZPXHXMPZZPMQXENRODUWVAXSHAYPWBTENGYGXDIKIESGBTMKBFSC");
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
    msg.setTimeStamp(0.5337438696214722);
    msg.setSource(28499U);
    msg.setSourceEntity(211U);
    msg.setDestination(29575U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("KEETDTFMJYCFESJAJJOYAHCBLWYVGLAXWHJPFWYBCKCDUKGTQNWYOQFYHMOEJ");
    msg.predicate.assign("TLUGCPQUSUKPJEYWSNOGDXEWILRBAIFJBFTCM");
    msg.attributes.assign("HEHGFNORPJLKIWKNMDPQFPUFSAZSFEICAOTSXRWSKJLOKGHYYKERVJEWPRRDSMOTNEEPVGZXXNWFEBTXIAYMAQTAYFVPICTBBXDYHTYDBCLX");

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
    msg.setTimeStamp(0.025935027369055064);
    msg.setSource(33488U);
    msg.setSourceEntity(94U);
    msg.setDestination(30031U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("MWFOKTLHJRFSUPHNGTCATXGVCJMUJYCYOKOFPRKCHIDMFMHXLNDKUNTATXUSPUZYGDBCXXIKNXOTANOWAVHSYZQBORLDRTDJXCNJVZLEFNKD");
    msg.predicate.assign("SPMSABOFKFRBRZFM");
    msg.attributes.assign("GLCLAFEPBZVKRNWRCEHMNUPDAYSIQGKAVJUAWPKDYSFKZXGWHQCWEFXILHKTQMOFJGQPLCEHDYTYRULINVSFDVYIETSQWGHOHONBZDFAYONPTWFOZJBMIILZNZSMMRFKSOHAXXDLSKGCOBYECPGIWXXBYHRUDJFRLEAMMMDTJRKVQXBRANBNHBYGIIVJCWSIGXJKZNTEOKJMVWCQQDUEBVJQRQUO");

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
    msg.setTimeStamp(0.3326407496194044);
    msg.setSource(18251U);
    msg.setSourceEntity(40U);
    msg.setDestination(5854U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("BQFHEDUQQENIEUALWMQUDSFCMRVCVPLAJZLKIJNOAFWOYTPOKRAWTFICIQGYRDBZGENTVEATAHVBEHLZCFDFL");
    msg.predicate.assign("QLUIOBLRWVNOLQASQP");
    msg.attributes.assign("CJWKFCXHNDTIHQXPDQVYPTVSKFHVQMHXKZEOPKUNLCAFQWOAAXJGWCTMLUHYIFMDBOILUWTIBNPBELXZUCVDEMCJBFDCTIZISHQAHGOWMAEVBGN");

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
    msg.setTimeStamp(0.08543024623753503);
    msg.setSource(6441U);
    msg.setSourceEntity(76U);
    msg.setDestination(39013U);
    msg.setDestinationEntity(229U);
    msg.command = 81U;
    msg.goal_id.assign("OJGBAZWUPCSZMUONOEITZPEYASPPDUOVHLSUCOXUWJSHDUZLKBMBXWQEDTYSOYTCBCCSBMBMETJVQHHLVKAYPRKTGYHMNIXYIZKTXUDEHVVINAZBKRWRQPDJFXJLZKPNQPWOAXPDWSCAYETIRNEFWSXEHZIDCLWSKHX");
    msg.goal_xml.assign("RAYEIUQZVNJMTRTRPNSHSJDZHQM");

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
    msg.setTimeStamp(0.023673112971168808);
    msg.setSource(40336U);
    msg.setSourceEntity(118U);
    msg.setDestination(39833U);
    msg.setDestinationEntity(84U);
    msg.command = 87U;
    msg.goal_id.assign("UVRAMXLRARMANNDJEVHPIYSKCOGFBBWJBLKNAFVIUNAYSEOYQHTOCCVWCHJDFLTCNKAGYQZVCAQQMYZZHSRNCSMTQQTZXKTNIYKWLPPJXYWNMDGBJFBHBBUYZFIUKSTLPWRVPDXHWOFRQDFERGRXGGYMKKJFADPHSMISUOPXECONUXVITZCZTFTICBRHELJZDMES");
    msg.goal_xml.assign("JOFGIHYWNMDEQGTZCDWFIAKMPUOYJRI");

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
    msg.setTimeStamp(0.14102116507687457);
    msg.setSource(43892U);
    msg.setSourceEntity(243U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(180U);
    msg.command = 37U;
    msg.goal_id.assign("CAKEYFYHPUNBQWYQIH");
    msg.goal_xml.assign("VCYCETTLVCYZHBHOJBSNDMTNABXEBMWTFRYPVVXCCAQPWCZBPGODQZCAHPVBABEETGKFIKZCQJFEIQSWFMOZOFGEKVVMCIDSXRZXHJQRJGXPWWIIYOEYKUJRUHLFGNIUNADJHFYLUVAYDAUKGSCMXUSKSOWHUUOWPORNLHPYLHURERAGTWZALMZQILSLTQJNIYZFPPSFMGWILSJBX");

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
    msg.setTimeStamp(0.2635638048882566);
    msg.setSource(28001U);
    msg.setSourceEntity(164U);
    msg.setDestination(26245U);
    msg.setDestinationEntity(119U);
    msg.op = 178U;
    msg.goal_id.assign("MYKKCDZUABFOUQFBMUEEDVXAWGFBNAQLHRTIAAWFLTPLKQLNQIXZRXOSOBFEFGMVRCKGDTDBAFAQMIUMTGKEIHPMUIGNJZBHPPOZIJCSQSWFQDNXLKSWTSNRRJFKVRQEVCXHE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IMOKAMVNXQUPYLQJORATSRWLSYNISDJZXBV");
    tmp_msg_0.predicate.assign("INRBLTGMGZQACULTJHXEEPEBDNYEQORXLWTDSTOCMGVEAAOKCHAKGCITYBIOFRKIXDUPSEENXBZHGFAJME");
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
    msg.setTimeStamp(0.977540198227364);
    msg.setSource(55218U);
    msg.setSourceEntity(241U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(181U);
    msg.op = 49U;
    msg.goal_id.assign("AEAKKYZSCYWLKYKNIDCYNQIJGNZHGPIZCELWAMMRSIULCONXYCHORALEWTENHDRGWVZWNXAUQLHJBLUNUDMZGTBEWMVSVOTCVJHUQYMDQNQQFXHGSFUAVSPGIZBRHMKVPDEOQVMJQKJBPRXVUAPRXGB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SMIPEHYUXMZQOIJWLJRDUTXCJYPEXEKCUVAQJTIYUVAVUPSOWDVILZRKYAGKVXGFBDUOQMMFBITRPYQTCWSGHEHKBNAXMDFKVPOGYQLMONVZEBNGHYHWFKQZGRRJKJFVRZPLNPITGFNETCNSCRLLGTRW");
    tmp_msg_0.predicate.assign("HLOOXYUYBZMVHETPVPRHNFLAMGGWWPCCCEFSYXWVPEYTKNWLRDOFHTSKACEDMZ");
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
    msg.setTimeStamp(0.8175303350748585);
    msg.setSource(20329U);
    msg.setSourceEntity(246U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(2U);
    msg.op = 186U;
    msg.goal_id.assign("BSJMGSQSMFUKMNAAGVRHXWJTYENNAJZCGXHVQBWWFPVZICTBOLIOJLXUZBACTZNWDERKENYAFRMFHLOPLGLGOOHCOLBKGRNPTNMODDCBQQKOMXINPFLKRIMEENJGHHSTDWHISZIHCVDVKXCWWMBAVVUPEYJKUSFPFAJNROYPADZBUXFXQEXRODCGPMHWKZUFLQIIALETUTXUSGMVJDCRYWYVSTTJYUBSZIJCEPWQH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWMGQHFFJOGRKTHJSPXYOPRWHJBXHEDAGAYWCTZNRERITWFQJYBVFZJMGPSWRVDVOUOAIVDUQFXNPDTMKZGTDLKNSFUMSYXINNSJBSJLSUDKPGDZETCWABHULXHEMEIECTCUAEXLBTQCPOOZMUJKDCTYOQHOSRRCFMGYQIGO");
    tmp_msg_0.predicate.assign("DEESZGZYFXZHJGXFMGDYEBHBGHICQNYRLCYCMIRFVXFEUVZZDFTTYBPTYNAVTCDDOTQIFWOSPVO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RODAJJBNWFLENAYKYOPZWLOXWQLGVWNMGOBFXMUWMMZRZINVUTKHZVXXFTTUPMTZYSVPHOKTDBEUHERNTSVMYKAOQYXSWGASQFYVBGAQWKRVBOZYNJKSRRYVHFDNQQLHMPSPLEKGDHKBGJXFNUCDQUIWIMISJOCDBCBXAL");
    tmp_tmp_msg_0_0.attr_type = 93U;
    tmp_tmp_msg_0_0.min.assign("RNGJJLTKGCOXAZDTUQJFNYPDNQNARWZLLCPHXCPMJWPCLWYZQERSBNJOIS");
    tmp_tmp_msg_0_0.max.assign("BDBSFAUTWKILQHAMNXTZCMFRIATQJLPRYZHEXVWCKWHDPPNVNXPYHOEYQKIEXJRMTNVYAMBUMSMTAONEQCIYNXRNHUOFBZJXZSSPKPHJXJWKTDCGHJCEPONZGAPEUDEVLBZUFIFDBWLSGYRBGRFGTDLXZEROINDOSWJPGCBYFBDCYVFIVLYVOWLUAMVIAKAJEYFXAHQXRTIURWJNHOMIBSQZQP");
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
    msg.setTimeStamp(0.09419437482264315);
    msg.setSource(51275U);
    msg.setSourceEntity(198U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(67U);
    msg.name.assign("HTETYERNGKMCBABALGAGTORVCGMWNVWYNDDOYLANQRHZALOINSNSOKTYDVBZHPXDNGEOIHCRXSJXQUKACBIUVZPMMJVMJWDOOZSZILFLEWCZJFFMPSDMQYHVQ");
    msg.attr_type = 113U;
    msg.min.assign("YFNIILWLUBGAVSTXNIAZTAAQNQVCVLNTIGFJEBKOJLEUPMQJBVHYYGEWFMIRSHXDDVMCKUXBNBDYWSXCVNUXWTQUSGTJXDKXD");
    msg.max.assign("CEYKOAGBWZNIBEGHFXJ");

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
    msg.setTimeStamp(0.24194579652780968);
    msg.setSource(29208U);
    msg.setSourceEntity(195U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(99U);
    msg.name.assign("ESCLVYHJEXCBDAPZFXDBZISKBJCFRQWEPYYMRUGPWXHNHYYTXXVGOHMDCAPKJGKPEAIJXLCGLNPZHBQVLKNZSPUTKTUFCMAMRALTRQYFMBDDHILWLOTHLVMSNVVWDEFRZOQEXTRBWHCHGBEGMVGKWJMI");
    msg.attr_type = 38U;
    msg.min.assign("UYDJMEALLAFHNFDSYUIXWAUIWRHKE");
    msg.max.assign("VHMWQTHGIOJRKJBGWCATAXKBMGSZULWWKDQRKUDALMYXEEVEWSAIQHYIBSGPZMUFTPVRHZNPTBLQLKYGKYWCVGVFECYMFHLKXKTSZEBPWIWEFXRROZACQXR");

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
    msg.setTimeStamp(0.9751754291826142);
    msg.setSource(63414U);
    msg.setSourceEntity(241U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(196U);
    msg.name.assign("WTQZIAYISFTGNMTPXMXODCHSCCHCUQMLVHRXFSHHLFANVMZBNTYHAFYBKQRNIUTDDVNEZXTAXWINLOQFADOWOPWHTQUFPEMBGIBTVKSUZKCRKYNNGUGMPZOBZQXXZDSDLLMRWRKFRZESOFSJMABWBEAYPGBJCVDVIWEWODSGOKTSNCZJFSGRDIJJBLUGXLLQQNEJHPUVYPLYPJKHOPWIKVVBWKUMRRPRXVODLFKEJZJHYEEMUCQA");
    msg.attr_type = 171U;
    msg.min.assign("JXXKEFOPWLDSHBNTZUMEMSJEUVGIULSDALXUFAKPIEVAEYREHMMTAWYWDPULPRPHYCZZKBHTRHOHOBGFWDGAYFKTNJKIOZYFYUXQHWBQICDVQNBJUTJZIAXMJKQUNIRDWCFSANQRTKGYVGUMCSBDXFKQQZLGWDPWNPASZINYEREDRTYVLGUPCNPVJSAMOLOOKNSBXAZNHFSQFCIXIVGHVLQOE");
    msg.max.assign("CRKTBWIIKDUTQHALBESMYYMYENZVQSGJALBXWIMSMUBPXLCBWUPRYHJOYYOBTLVBBOWQHSSRNZMPRFEJLCIAIIRCZICPOMOSKFQDDJWWZNMDVUFAETFFQNEVQXWEIGGLXJGDKSZEZXIHAHNUVHRYKVLFRGTPXSHEMOOJQGCVF");

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
    msg.setTimeStamp(0.865351850099776);
    msg.setSource(4641U);
    msg.setSourceEntity(151U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("ZVCAGIMUXDIKGSQYQESILZNPOQPCHQTOXWZBBNWWIGACRJRLEQTJWMXHGMLTLBBHDPSDZUGMCOOOONXPBSHJYJZICKAVBFDVRKNXGGRWLZ");
    msg.predicate.assign("MHFZKPDCNFUFQZNOOYGHKIVMKVTLPPYVZGUEWLCWNRMOEIPCVBADABQLBNELCZFDMIIUQXLKYKBPSUGYSOCAYCZDHEVSUQLLIZSDDJNIGPZOT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SSLDPLATIGKYCQHZBKJGPRAABFWTNONNPDVRJMYQNFHBRVUHJXUCHXEMWOETSAZGTIOKVCXPGSFRMASGUYTDOWZJTMYAOWXZYIIMYXQFXQIKSICWYKKREFNNNPGPBXEIAZDVDYHDQUOKWL");
    tmp_msg_0.attr_type = 23U;
    tmp_msg_0.min.assign("HAFGKUHDLD");
    tmp_msg_0.max.assign("UEOXAFFOTTSBLELMHTUANXJYVUPSALZBSLQCFRFBLJIUMSBGUUZOWUEGTQPQCWOIODIPEYMYVZCXQPQQCMSIIKWMFEKYGOMCKZTTPVKERPCWZHCQYCFLHRLHPNKXYVIGXRJRFRHYBEJZPXVLXABGAGJEIAFYGWQDZRCKVNWWUHUDJDIXLNSBENCDYTMNZNRPPTKDWXSRXLNYABGA");
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
    msg.setTimeStamp(0.8746208293382435);
    msg.setSource(46332U);
    msg.setSourceEntity(135U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("LNATAQCWSQCITLGQTFNEKRZFCCS");
    msg.predicate.assign("KJUNTTMYJPYWUREJMQAISXFTUKOBSLMSCEZQFOZGCCIFROTQSEZJNZVUJNWGYMSOMSYDWICBJKEHLGZBEXPRHVKZDDURPMFXHRWTOWSJECW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BSRZPTIDNUIAPIJXQTQGSOPQDNWKNGFCHRAXQZSQROKRXKCNOBBVKJCDKZKFGFZLXLHUCXTVAOIOBKVLZWWWQWBPW");
    tmp_msg_0.attr_type = 24U;
    tmp_msg_0.min.assign("VIWCHBQMKLLOGFGWSCNXDTZPVBIHDRAXJQHBFYBGWRZEZJZPJTHRVXARFDSMXPBRSABPKNOGNINFNEPVXVDEKYHWIIGPJHUCKUOJJFQISLYTIUTYJCEXGIMMDWUQRDBIRKKNEDKAYQSCUQADNFUGLXUXLENUKLUHFSMXLETPMMYKYHPDQVAFEZTOYCCZGNTQCMWFYUOAALWLSYPVWJRWOBHSZVTDGBMVRMWZO");
    tmp_msg_0.max.assign("ADNSCJMEDZAYPRCJQQWWKORGHIOKKZYECYXAXXECASTKUDHZLPWXSNZXBGCMUZASDNNAOFVFZLJNEPSRZPVSQBOZGIRTKKWYJJNWHYLDFIEVPBFFJNTLDYVWOYDRWZMGWLUALVPR");
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
    msg.setTimeStamp(0.25548127577238444);
    msg.setSource(24031U);
    msg.setSourceEntity(51U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("OLJODVKMZYWAINKNNHFBDMHVGTBIRJAUIOLRSSZTMTEU");
    msg.predicate.assign("PRUGDCAHIZHWWLIKXPHBKCF");

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
    msg.setTimeStamp(0.7215172101568935);
    msg.setSource(27258U);
    msg.setSourceEntity(42U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("NFJHAXDTCMRDIMQXXOPNFSYVYEZSYNANCKTJUOPAAYLXSLTJWVTTFMZKMIYFXEWBAPBWHLNTVQDGTNIHSDQPXXC");

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
    msg.setTimeStamp(0.933446494557386);
    msg.setSource(15088U);
    msg.setSourceEntity(61U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(224U);
    msg.reactor.assign("ENOSVIWXJBHRUZWKEXLOGOHVQDEJCZTSNORDGRPHRLQPAYWCMKTCC");

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
    msg.setTimeStamp(0.4737904658550145);
    msg.setSource(25853U);
    msg.setSourceEntity(147U);
    msg.setDestination(48332U);
    msg.setDestinationEntity(62U);
    msg.reactor.assign("VZNDPTJONBBHMPXPSZEECEITRXWVYRZCBTHTHGEPKZCJQXNTVFKVPUINUNIWGGCRJTOLUSCGMGHQWYRAWWWOKKKZXMAUASKIOYSVXOMGMTLOFCBDOPTRLSLSVEMXJUCYEKQCJZLH");

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
    msg.setTimeStamp(0.5018472838094795);
    msg.setSource(38624U);
    msg.setSourceEntity(248U);
    msg.setDestination(22229U);
    msg.setDestinationEntity(162U);
    msg.id = 88U;
    msg.width = 59574U;
    msg.height = 6494U;
    msg.widthstep = 8938U;
    msg.channels = 95U;
    msg.depth = 66U;
    msg.finaldata = 201U;
    const char tmp_msg_0[] = {-62, -115, 18, 68, 9, -119, 51, -8, -71, -28, 71, -12, -30, 67, 23, 62, -113, 69, 79, 89, -15, -85, 111, 10, 67, -111, -68, -64, 85, 109, 1, 61, -44, -13, -118, 109, -82, 37, -93, -100, 33, -92, 21, 43, 26, -59, 118, -123, 39, -49, -46, -101, 17, -28, -112, 16, 125, 64, 53, -78, -34, -114, -74, -60, 97, -98, -87, -98, -96, 122, -71, -41, -9, -125, -88, -122, 11, 123, -91, 41, -30, -82, -48, 116, 42, 92, -18, 83, 48, 95, 40, 46, -103, -98, 29, -75, 57, -54, 12, 82, -52, 29, 65, -52, 62, 1, -122, 87, 116, 23, 119, -15, 37, -95, -100, -52, 66};
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
    msg.setTimeStamp(0.36317920796605785);
    msg.setSource(55018U);
    msg.setSourceEntity(174U);
    msg.setDestination(55556U);
    msg.setDestinationEntity(215U);
    msg.id = 234U;
    msg.width = 30217U;
    msg.height = 7033U;
    msg.widthstep = 2419U;
    msg.channels = 159U;
    msg.depth = 161U;
    msg.finaldata = 143U;
    const char tmp_msg_0[] = {47, 10, 98, 52, -100, -37, 46, 22, -83, -61, -114, -80, -118, -116, 84, -4, -78, -113, 7, -71, -111, -10, 118, -27, -68, -95, 97, -96, 124, 45, 3};
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
    msg.setTimeStamp(0.25280265346078157);
    msg.setSource(6148U);
    msg.setSourceEntity(15U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(132U);
    msg.id = 9U;
    msg.width = 3273U;
    msg.height = 13852U;
    msg.widthstep = 40884U;
    msg.channels = 133U;
    msg.depth = 205U;
    msg.finaldata = 185U;
    const char tmp_msg_0[] = {119, 87, 11, -87, -77, -118, 34, 95, -106, -73, 124, 19, -65, 30, 118, 92, -109, 35, -40, 109, 88, 121, -50, -57, 73, 71, 92, 40, -99, 63, -53, 95, -38, -69, 107, 73, 88, 124, 126, 46, -73, 96, 92, 122, 31, -84, -16, -3, -23, -10, 99, -75, 25, -121, -118, -102, 59, -70, 125, 37, 18, -123, 113, 96, 41, 58, 7, -66, 34, 54, 59, -14, 69, 74, 86, 92, 51, 65, 53, 91, -111, -92, -56, 5, -117, -37, -24, 25};
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
    msg.setTimeStamp(0.7100697546299761);
    msg.setSource(3503U);
    msg.setSourceEntity(236U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(232U);
    msg.width = 65217U;
    msg.height = 65096U;
    msg.channels = 74U;
    msg.depth = 181U;
    const char tmp_msg_0[] = {43, -94, -41, -24, 116, 126, -66, -69, -9, -60, -18, 97, -10, -123, -95, -89, -55, -14, 50, 112, -36, -56, 24, -56, 116, 48, -71, 2, 122, 108, -26, -15, 33, -81, -125, 45, 102, 42, -34, -70, 104, -33, 120, 70, 31, -120, 22, 111, -102, -58, 49, -122, 120, 110, -90, 14, 27, 113, 9, -38, -57, 59, 19, 63, -90, -114, 41, -72, 6, 0, -87, -21, 24, 54, -65, 107, 114, 94, 20, -53, -24, 59, -124, -30, -32, 18, 32, -24, -26, -99, -58, 2, -76, 70, -59, -10, 95, 121, -8, 61, -74, -51, -126, -48, 119, 13, -126, 97, 126, -93, -66, -119, 12, -115, -127, 115, -65, -10, -111, -28, -77, -77, -41, 30, -81, -33, 105, -40};
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
    msg.setTimeStamp(0.23835261560993792);
    msg.setSource(2473U);
    msg.setSourceEntity(122U);
    msg.setDestination(13100U);
    msg.setDestinationEntity(153U);
    msg.width = 38361U;
    msg.height = 40410U;
    msg.channels = 7U;
    msg.depth = 241U;
    const char tmp_msg_0[] = {-100, 19, -119, 85, -26, -63, -47, 77, 46, 93, 12, -90, 61, -67, -92, 44, -80, 58, -83, 96, 1, 66, -103, -58, -75, 29, -16, -105, -107, -78, -87, 107, 120, 16, 113, 124, -86, -9, 96, 77, -117, -18, 22, -45, 67, -70, 7, -57, 32, -100, -98, 54, -84, 100, -55, -125, 57, -72, 101, -92, 68, 37, 114, -20, 24, -118, -46, -25, 109, 103, 96, -19, 86, 115, -54, -63, 84, 18, 92, 125, 125, 58, -91, -114, 11, -2, -57, -5, -88, 91, -90, -53, -103, -76, -109, 109, -21, -47, -4, 62, 73, 111, 30, 85, -53, 78, -98, 86, 31, 95, 105, 5, 78, 64, 113, 59, 7, -84, -95, 35, -79, 2, -63, -86, -19, -66, -44, -76, -2, 50, 11, 13, 73, 123, -19, 83, -95, 93, 65, 47, -65, -128, 4, 89, 58, 70, 72, 64, 121, 25, 5, 69, 8, -30, -68, 45, 42, -54, 12, -15, -88, -15, -72, -58, -53, 110, -87, -61, -113, 28, 108, -13, 11, -5, 38, 54, 113, 109, -84, 2, -83, -93, 107, 31, 54, -90, 119, 94, 77, -20, 122, 15, 61, 65, -82, -84, -52, 59, 94, -115, 19, -3, -85, -79, 101, 90, -10, 91, 68, -113, -63, 33, -96, 8, -86, -42};
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
    msg.setTimeStamp(0.4354779469566472);
    msg.setSource(45149U);
    msg.setSourceEntity(19U);
    msg.setDestination(17055U);
    msg.setDestinationEntity(28U);
    msg.width = 37376U;
    msg.height = 7203U;
    msg.channels = 11U;
    msg.depth = 115U;
    const char tmp_msg_0[] = {-23, -67, 14, -74, 31, -78, -76, -50, -110, -121, 62, 58, -94, 26, -64, 110, 24, -6, 104, 1, -119, -96, -105, 126, 70, 96, -97, -24, 87, -11, 76, -49, -90, -33, -52, -51, -61, 47, -23, -70, -60, -5, -84, -41, 39, 98, -96, 37, 109, 19, 60, 67, -11, -116, -128, 46, 72, -105, -59, -98, -37, -50, 18, 101, 46, -83, -74, -30, 66, 52, 39, -77, 47, -81, -14, -86, 86, 71, -105, -57, -44, 120, -51, 80, 92, 17, 85, -45, 113, -91, 33, -1, 118, -74, -122, 29, 85, 103, 9, 44, 112, -26, 2, -72, -111, 116, -3, 21, 31, -56, 7, 49, -99, 52, 62, 59, -117, -16, -93, 111, 100, -108, 5, -102, 110, 29, -36, -115, -28, 20, -30, -81, 26, 105, -69, -67, 55, -7, -67, 57, -128, -102, -101, 0, -33, -41};
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
    msg.setTimeStamp(0.8776331703205402);
    msg.setSource(12550U);
    msg.setSourceEntity(111U);
    msg.setDestination(24190U);
    msg.setDestinationEntity(94U);
    msg.frameid = 34U;
    const char tmp_msg_0[] = {89, -55, 115, -72, -126, 87, 23, 107, 100, -45, -112, -100, 96, 73, -72, 51, 100, -60, 0, 8, -78, -105, -72, -17, -109, 106, 110, 76, 83, 104, 81, -60, 88, 17, -32, -45, 111, -103, 77, -67, -78, 92, 65, -36, -71, 26, 60, -20, -23, 12, -43, -122, -106, 77, -35, 27, -121, -48, 81, -98, 63, 14, 75, -53, -124, -83, 59, -29, 115, 71, -92, -63, 51, 103, -128, 86, -68, -113, -40, -6, 57, -4, -91, 21, 96, -34, -6, 37, 46, -118, 23, -3, 90, -84, 76, -78, 3, -34, -84, -118, -111, 66, 87, -81, 84, -6, 42, -43, -53, 6, 119, -60, -51, -80, 26, -14, -7, 52, 108, -44, 91, 108, 10, -79, -49, 72, -123, -72, 41, -52, 95, 27, 29, -11, -41, 124, -54, 29, 67, -108, -2, 97, 7, 112, 35, -26, -47, 125, -98, 63, 81, 47, -91};
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
    msg.setTimeStamp(0.09578495435926604);
    msg.setSource(61891U);
    msg.setSourceEntity(6U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(244U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {58, -125, -65, 104, 56, -62, 54, -51, 63, 52, -101, 112, 82, -124, 17, -12, -62, -111, -92, 10, -86, -10, -7, -76, 29, -95, -104, -84, -25, 33, -118, 108, 8, 99, -5, 109, 68, 43, -92, -3, 66, -49, 66, -116, 90, 74, -125, 6, 102, 122, 80, 88, 88, -95, 25, 103, 27, 82, 65, -63, 41, 94, 21, -1, -119, -8, -80, -72, 30, 110, 119, -87, 27, -35, -115, -72, 40, 18, -85, -13, 60, 104, -24, 58, -7, 84, 37, -2, 123, -95, 61, -86, 8, 58, 21, -9, -69, -3, 108, -109, -97, 55, 80, 48, 97, 97, 43, -119, 104, -75, 56, 34, -62, -116, -28, 124, -104, -9, -50, 84, 99, -75, -89, 68, -117, -122, 42, 73, -114, -100, -32, -91, 122, -78, -25, -16, -45, -100, 4, 81, 93, -89, 75, -81, 22, -20, -9, -14, 85, -96, -17, -95, 58, -1, -117, 100, -51, -123, 25, 53, 100, -82, 89, 33, -56, -48, 46, -120, -52, -37, 59, 37, 84, -86, 25, 59, -14, -47, -84, 34, -49, 12, 104, 66, 56, -28, 26, -32, 6, -61, 31, -15, -115, -12, 98, 71, 108, -44, 117, -76, -125, 77, 7, -91, -37, 108, 90, 41, 119, 20, -31, 55, 6};
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
    msg.setTimeStamp(0.603116528926897);
    msg.setSource(42965U);
    msg.setSourceEntity(157U);
    msg.setDestination(62773U);
    msg.setDestinationEntity(225U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {-65, -110, -53, -97, -73, -77, -111, -85, -2, 54, 1, 67, 50, 91, -2, 52, 39, -108, -19, -102, 28, -67, 25, -27, 114, 84, 84, -13, -2, -100, 72, -117, -87, 93, -18, -5, -12, -63, 63, -84, -18, 101, 42, -109};
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
    msg.setTimeStamp(0.6496193361150608);
    msg.setSource(64689U);
    msg.setSourceEntity(250U);
    msg.setDestination(32383U);
    msg.setDestinationEntity(63U);
    msg.fps = 245U;
    msg.quality = 251U;
    msg.reps = 121U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.41297242364520015);
    msg.setSource(50806U);
    msg.setSourceEntity(131U);
    msg.setDestination(50184U);
    msg.setDestinationEntity(243U);
    msg.fps = 126U;
    msg.quality = 146U;
    msg.reps = 136U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.3317578266465324);
    msg.setSource(38237U);
    msg.setSourceEntity(140U);
    msg.setDestination(6905U);
    msg.setDestinationEntity(16U);
    msg.fps = 110U;
    msg.quality = 152U;
    msg.reps = 237U;
    msg.tsize = 163U;

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
    msg.setTimeStamp(0.6472963242878866);
    msg.setSource(51601U);
    msg.setSourceEntity(127U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.4219406992375839;
    msg.lon = 0.615339145628414;
    msg.depth = 53U;
    msg.speed = 0.04551895540201478;
    msg.psi = 0.38931005492443904;

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
    msg.setTimeStamp(0.46982910487750174);
    msg.setSource(6730U);
    msg.setSourceEntity(240U);
    msg.setDestination(3695U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.0883072251194017;
    msg.lon = 0.512194239269604;
    msg.depth = 195U;
    msg.speed = 0.4032741142292505;
    msg.psi = 0.9892776535185933;

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
    msg.setTimeStamp(0.4799043146615496);
    msg.setSource(25048U);
    msg.setSourceEntity(56U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.6666074394891428;
    msg.lon = 0.3008190037848507;
    msg.depth = 186U;
    msg.speed = 0.5321985164845056;
    msg.psi = 0.6319869833222077;

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
    msg.setTimeStamp(0.07705608114348261);
    msg.setSource(61657U);
    msg.setSourceEntity(132U);
    msg.setDestination(25335U);
    msg.setDestinationEntity(43U);
    msg.label.assign("BABSPXKWJQSXSQHOZDSXCFJRHLWFVURAJZBNBCKCWZKJLEOZPUVPAUNVRROOGPGRTHQDVDPMWLMRVTXWLIDFXZNBFTMRFIEKQDIHTNZNMFMKOYYDWHQSBGBIMTTXEQBYHAAYVINYAWMXUUGZKYZIVHJJTTAQYTMSSRFOOWPFEMQJYLUONIKXDICCUXDQGYLXSHOUUCCYREHFFAPSWABESUCVDRWJ");
    msg.lat = 0.5921919564677447;
    msg.lon = 0.20319409742296712;
    msg.z = 0.9850389158612143;
    msg.z_units = 226U;
    msg.cog = 0.01073706333425839;
    msg.sog = 0.6962583955116314;

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
    msg.setTimeStamp(0.4287242260344569);
    msg.setSource(58799U);
    msg.setSourceEntity(34U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(83U);
    msg.label.assign("OQLXNJNAOMZGEDDDJMVFHAWOGHNGXXTMCLINIOTBQHOGTIUZQMZWXJUNPNUVKFGBTBIDBEYKEQVFQKUUJBAPRODOEUHMLCCPNMEEYSGQKAFVAKLDCXCEUJICYPKKPPRXHCFJZQSIAFXNXSBUMWYPHWRLBRRFTDTOQHEWETLLMHLXLMIP");
    msg.lat = 0.46343256483754736;
    msg.lon = 0.024365572209882447;
    msg.z = 0.02005144304147155;
    msg.z_units = 104U;
    msg.cog = 0.510231534643279;
    msg.sog = 0.6739308152155998;

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
    msg.setTimeStamp(0.149836632183436);
    msg.setSource(62785U);
    msg.setSourceEntity(31U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(82U);
    msg.label.assign("CRGOSONUIKYTIOECOOPCPWPEWHUEHNNSUFOJKOSGAXQMMYFYMBGEXAVDSAMIXNVSBPZQHSQFTJMCYDEVPCYZGEXDDFLUEQZTTVHAJFUTTLULMMHPZIHWHAKZDRUFNKUFGRLCLWBJDYQGCPJIXAOJYCXBFXNPGSHQZQMEBVLIVYARWJLJ");
    msg.lat = 0.16383820953262662;
    msg.lon = 0.22793341014080093;
    msg.z = 0.6398459455670493;
    msg.z_units = 151U;
    msg.cog = 0.7001034262405457;
    msg.sog = 0.7334073846949664;

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
    msg.setTimeStamp(0.2025228387363306);
    msg.setSource(25639U);
    msg.setSourceEntity(11U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(173U);
    msg.name.assign("TEXBJAWPIQRDCNHREUAAIVSPNFWALMNCEDSWWBSAO");
    msg.value.assign("QGBEHQCBLANRTQMXYTJGCOEZIQWDJCJVGZKDFWHLWMHZCLCJZSQSQTOSWEVVOJLOKZWISCGDSKDJVGZKMHZAGKWDWPHMSQESFYVIVMHTBRINRMXURQNUTNFINXYOFLEXHFLVYHGXWKPUBUBAFGEOESENTOBITXVFPOZRLTNRVNURFJGUCKASWYZFIUCRJLC");

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
    msg.setTimeStamp(0.623778760751352);
    msg.setSource(45999U);
    msg.setSourceEntity(158U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(59U);
    msg.name.assign("HBLIOUSVQVJCCKAQVAEGHWHTRMSEYONLGQQGTEMCYBRJFPOKRDRZZSRMUGCCXUDCFGCDWSZQQOMBAHFGQBLFDNF");
    msg.value.assign("RXDBTVBAJXRYZLMXLOWELJRNHCGMJIHNYZBOUTGFZMVGFRHJLWEDXMLPPELNUZQSCMKOHSIDXRACHKYXYQQMYPQQDUSLCATCPEBTGIXOAVZWGASWFPHHUJWEIXFQREYWZ");

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
    msg.setTimeStamp(0.11570095774811628);
    msg.setSource(34763U);
    msg.setSourceEntity(228U);
    msg.setDestination(45216U);
    msg.setDestinationEntity(246U);
    msg.name.assign("WTGEUUCYJJKSQXIENDOVQBW");
    msg.value.assign("JQTSHPUAMIPAYZOXCASAKEYLKJNUPKYDHZZQQOKUAXQYMMCFHDWESMJAWIZTWBIWHFMDXTDBPBPFLGZAVDLJOKTAEJOSHSIUMVJNTTPVFUXRGMRKGWKORBNQCDPSFIGLRCXCADSKWHFXNNBYQBGINEOMEXKLMBLGVRHBOILSVLYEIGNCSQZDFZFWRFNPVDMVWTVJYCUYZUEUJVFSNEHQIQXZDCZNLRTTTXBLUKRAUWGY");

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
    msg.setTimeStamp(0.23313827953791355);
    msg.setSource(10194U);
    msg.setSourceEntity(96U);
    msg.setDestination(16856U);
    msg.setDestinationEntity(215U);
    msg.name.assign("ADVDSLSXSJUPIYWHOOUVOQMGHHMQPEQIRQAIVYAKVJXNIEJEZOMDXYMBNDUBVYTUYXVTTBEZWSUMLUKSGPKMDXBPFOYJCWFQNZFOYXVKRLKKHZJONTQSCRJCUKETZRZUKPHCFFNSJNE");

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
    msg.setTimeStamp(0.813682811849907);
    msg.setSource(20128U);
    msg.setSourceEntity(59U);
    msg.setDestination(18830U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ZMOJINJWKAKSCQPEFKAXUYGPPGZETHMGUIKETVRYTHRRCVNYBPWMHZOEVNPRQJWLLASEAASXDOESLGZSAPHCJBMTZFVACGFEVFOXTRSJIYUZBLXZKNWSCHCWUIRRQLLGIXPDSOWZDPBZJTIEWRDCZDXOFXRXANNBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XUPUBPRRIJKBZEAQOQCSGRWTGSQSYDWCMZPYSYYTFIBIDHLNVZVUPTWNLPKMQNRQSXVDHLTUOMAQYFSZ");
    tmp_msg_0.value.assign("CICBNLMHASVIJVTXNGWMUQYTAIRELZJDBIZKLACXQDUPN");
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
    msg.setTimeStamp(0.6759703794910678);
    msg.setSource(15513U);
    msg.setSourceEntity(199U);
    msg.setDestination(12361U);
    msg.setDestinationEntity(123U);
    msg.name.assign("VUZUQJDETTQQEICMGUHVVNRGVRRMWUMWJTUICQNVNCSOZBPWSOMOCURKXYVZIXYHUZPTLBNDEMGNZSCLRYSXRBNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CWLQDWVJTWSJPYLOEPOJHHBEZPZPHPBHBOOXANQFUYMFRDFXQEGTLGATQKCSLUNTTGBVLEDICUCKJWIFVQJWCILUDVNAHIHKWRTCRTXNGXPYGKSFVOEWYSEYESBBXARWKAMUTIFDNIVHRDPZBAKOLCNGOMXDLHRK");
    tmp_msg_0.value.assign("ILLEOCRDJONSQERLLPDZPBLDKYWCQHKCHBJIPJWVYHLYWGEQBYYSPCRJEZNAUXKQZRGXTHZCDYMXNTULXPDQPBQKHTVQZHIHMVGJMTAQFPDASFMARLNESKBZBVARJUFVFMGMGCTGFOAKVJDUKIMWKWSUOSTVTMOXQIOASZFLGTUNRHNUCIEFOIPDTTWARRV");
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
    msg.setTimeStamp(0.5275216656913453);
    msg.setSource(20556U);
    msg.setSourceEntity(206U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(130U);
    msg.name.assign("QPVKNWFWCBMRSGGJJVJPNAMDZNBESJHRYAUHVIWIXLUOXBNFIRJSAHXTWTDBQHICIAEKDHNGMQZOKYLFXLYKGDQXQZAUCWRWGJRWKEXMZFPRVTAWFBFSTPOFYJIFNNCVELLESDZYG");
    msg.visibility.assign("JKKVVCDZGXUOZWCPPIUFSIAGAMQEFWGBGQOUHCEXHSRXBNRBKBRRDIJFRXHRIOMUMBPEJPGTHDPQYLILYAENDXGEKOIRKDTCBVSPYVUZOLLEQWYNBXIMKHWTWLGYMPOVTDLCHAIUTKFQDXOUDUZAAMOZRLALHGMJTPIYCXBTFSYUWNMJWFIJ");
    msg.scope.assign("TQTVURUONWQPTPEUWFUCMMUBVQLUIISOMLYRFKXYKKSPGNQJFCVJJYNBMSZZOKRJI");

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
    msg.setTimeStamp(0.6455111295434648);
    msg.setSource(36239U);
    msg.setSourceEntity(106U);
    msg.setDestination(54679U);
    msg.setDestinationEntity(149U);
    msg.name.assign("TEUWCOXABCMNJDIYUDSQFICLDQTCZDUTIQVOIXTNKPRKFRJUFUSQEDMPFTLEAANETSGXWGEVYPLWTWZXVCAKNSXKHWBLTXMYMHIGCRAWJWZDYAUAQRSVJSYWZOHMBAJTXGUJIZMQSMBMWFAHLKIGQNRVHPYHPLXOKBZBYEEIVVZUJFLFDBCGFPPURVHNGDFLHOCQJZBGHVHGZTBFYKXLENEDKPLOUCWKQDVRMYIOQSNR");
    msg.visibility.assign("VQJJSGATRZKTGNFYSCKNAYNIMCMGXZLHZZPKEWDLUXWSZKBHBSEFNVGEFPQTFZQMAJUMEIOACXYTN");
    msg.scope.assign("MHWNHSJQSPIMPOCHCLFKQUUONWDCBMFLRDIHJECKLHDBXRPMNTFQSESNQLOIDXMWZHVNQPUZPWCXGPPRGOILRZYGVNBDIYIYRZUFBQYTQATYBBTCTJWAZ");

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
    msg.setTimeStamp(0.6042068969196894);
    msg.setSource(49716U);
    msg.setSourceEntity(152U);
    msg.setDestination(55377U);
    msg.setDestinationEntity(106U);
    msg.name.assign("MUYBNVDGLRYCVSAFTTLAYBHODFSAXGGBBHFETYZXPTVPJWNITOZGDKWSLPZLCPPJECXAFMSUEMED");
    msg.visibility.assign("JOVUCEWSNWAJZALGABGSJETMPTNXNKMFSQGQRLZRTSCBDPTTEZIJWCCVKZQNOPCHEOQLRVSHYELZTGUQCLPUZDPXBDPRVFCXBMMMEPSPAGNMESMVQVPRAIKETLVUMGTIIFXGN");
    msg.scope.assign("AXREMJNBOEICCWTRYQPKIMIUYVTDMHXGCTMVAGYYYCTXNTCSB");

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
    msg.setTimeStamp(0.5472152072135852);
    msg.setSource(36790U);
    msg.setSourceEntity(0U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(133U);
    msg.name.assign("AOQREZFPCJBAYMLKVRUIPMTLTJTSZJFWDHJESSNTXSXBBYTDUWIHCGBXMLNEQJHMQINWDFNKVA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YSUENATFFHGUUSABNODBONAXGXUVROZPDPSVYZJCFDYJWDXCDCCAYZYSLLEYCIXNNDEHFBZKHNVLEIFRWNWGLKRDYNKPLOXAOERBVWMHFOUUOEKZGQDBHSNOGZXQWFTUXTTGJTZHJUUHVGQLJXKMRPELIPWPKEYWWOISIQURRZVMYTMQLIMLITIQECJKAQGWTZHVINQ");
    tmp_msg_0.value.assign("VNLMMTPYYYGDCK");
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
    msg.setTimeStamp(0.04912464076918721);
    msg.setSource(59771U);
    msg.setSourceEntity(229U);
    msg.setDestination(30542U);
    msg.setDestinationEntity(236U);
    msg.name.assign("TFZOAIKNNVHCLNLILJRJRWVKFSYLUDMPFVMFRMZTSOAGMVDTCXKIGMTUJQGCOCWVKGDDSBGHSMWRMVWRKYOJ");

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
    msg.setTimeStamp(0.02248412769644248);
    msg.setSource(28761U);
    msg.setSourceEntity(63U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QQBXKKCRTCQEOPHEXVVFLFXOGRAIRNGFCJAPQTLNNJAMUUTVXKCSUJVZYMFGRDFEBBAOAGDBQENSVWBAKSTJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JCFHJAMWZVRHPERAQLVKTFZIGWYQCDLHOYDNULBGZVGQSWVLWYHOXPEZCSZZMAXUYKAWWDCFANXSZRCDJUPZTRNFABOKIQCEGJBAPMCVSOEQBBTPWFAHRBXBDITFANMJTDTPQOLSFIGJAGRIILXOPVVEVSJSRXOTNCTKCSTKRBSIKSUQWIMUBEYGDPLUEXEBFLXOYVKMHRGNJQYMJHMEIUKLWUKNNZFQHXYTGHHPIMKENXJWOYVMYCLZFDQD");
    tmp_msg_0.value.assign("UVSPFZFWLSXLRDURPJRVDPJHGQYXKYONMWRPENJGYSQVOMBSYBCNCYUXILLEDONPWOHRVUBHCHVVVQZKQZAUZYEINXALEABIWDMNCWJRKPMHQXKAMQDPHATGJSXIGQBVCMUYZKBJYCKUBNZNLEQBITOOXFAFNXCJQGQ");
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
    msg.setTimeStamp(0.02436839141183378);
    msg.setSource(26372U);
    msg.setSourceEntity(210U);
    msg.setDestination(16656U);
    msg.setDestinationEntity(248U);
    msg.name.assign("AJWOAPOJDQUKFFGJPKPJKDOELEOQBULNDQIZDGUGNSPOSTISEHQMMXJXOZZSXMWGNAQBPVJIURYPVNNRYYEEAWKASRHBCVBTYYTKRJEICCMPRVCJNHIHXDFWGLXUSTUERJBRYRCYCFTXGGYFOZASQMZROZSSNTHOIMLVZEIZXICKGFBYXUBVDWTCFGLSWZUFNMZ");

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
    msg.setTimeStamp(0.32244232837712716);
    msg.setSource(54814U);
    msg.setSourceEntity(12U);
    msg.setDestination(7181U);
    msg.setDestinationEntity(105U);
    msg.name.assign("KHXEYAYAFVJGNVLRLCJHZKHCYSXTHAXWWJCNFONUQWAKXIQDFAUIIPHNVMFMISIZIDDGQWODLOATKBVOQJFSRXVJBLPUPDOMURQEBVOPJYYTUSEGYROBGYSVFINEHETZZDZWUMTZFCKAJGIHUIMWPCYWAHKNHQZNVBBITMLHRRQJMXE");

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
    msg.setTimeStamp(0.2708761811657232);
    msg.setSource(49962U);
    msg.setSourceEntity(200U);
    msg.setDestination(43163U);
    msg.setDestinationEntity(108U);
    msg.name.assign("JLTSNMZYONYISWDDFCFSVDARNEPSRGMWBKZNHMFGVIHNRCFBLDCUMPEZTTUXGXBAPXHNCMXQCQVAVODAKWSOISTCSBQYMUHAITYJKIPKRRBHKIKJXHENEWUZQBETSQNOUXCJGDQJKAWTIZYVYXSRDGXOHEKUKPMPTNOG");

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
    msg.setTimeStamp(0.8404356784283921);
    msg.setSource(1901U);
    msg.setSourceEntity(19U);
    msg.setDestination(41048U);
    msg.setDestinationEntity(235U);
    msg.timeout = 3260698699U;

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
    msg.setTimeStamp(0.2916744287000267);
    msg.setSource(38423U);
    msg.setSourceEntity(144U);
    msg.setDestination(2916U);
    msg.setDestinationEntity(162U);
    msg.timeout = 878740381U;

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
    msg.setTimeStamp(0.9133934447667651);
    msg.setSource(16004U);
    msg.setSourceEntity(253U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(26U);
    msg.timeout = 476088886U;

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
    msg.setTimeStamp(0.9402095852463241);
    msg.setSource(63764U);
    msg.setSourceEntity(251U);
    msg.setDestination(8537U);
    msg.setDestinationEntity(237U);
    msg.sessid = 2512974654U;

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
    msg.setTimeStamp(0.02901056922352163);
    msg.setSource(40034U);
    msg.setSourceEntity(77U);
    msg.setDestination(401U);
    msg.setDestinationEntity(194U);
    msg.sessid = 2333103045U;

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
    msg.setTimeStamp(0.1054084965034624);
    msg.setSource(23522U);
    msg.setSourceEntity(163U);
    msg.setDestination(15941U);
    msg.setDestinationEntity(227U);
    msg.sessid = 1618463052U;

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
    msg.setTimeStamp(0.06933235701685947);
    msg.setSource(38641U);
    msg.setSourceEntity(228U);
    msg.setDestination(38389U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3404574338U;
    msg.messages.assign("WWWIZEPYRGIFVCSVHCMOJTACWSDDTHXZLHAXZUGTJTLPMAMOJFXGOFKPSQGALV");

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
    msg.setTimeStamp(0.5572715749570202);
    msg.setSource(61965U);
    msg.setSourceEntity(221U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(25U);
    msg.sessid = 122113536U;
    msg.messages.assign("BUOLRQNFNQDJTOEVCVGXZEPWIDZYN");

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
    msg.setTimeStamp(0.5830398232635198);
    msg.setSource(27289U);
    msg.setSourceEntity(158U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(25U);
    msg.sessid = 1472646022U;
    msg.messages.assign("NPUYTCBTEDRLRGSDSMOPETFBRYJRJAUWROJSKQJZQZFHYDPMXVRZDNGNZWHUCPZLWGNLHPEMEFMECHFKG");

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
    msg.setTimeStamp(0.042953494745714305);
    msg.setSource(16701U);
    msg.setSourceEntity(207U);
    msg.setDestination(17821U);
    msg.setDestinationEntity(206U);
    msg.sessid = 4114700261U;

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
    msg.setTimeStamp(0.8916545223365833);
    msg.setSource(4905U);
    msg.setSourceEntity(14U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(116U);
    msg.sessid = 3734201207U;

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
    msg.setTimeStamp(0.4799305963707471);
    msg.setSource(45447U);
    msg.setSourceEntity(80U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(105U);
    msg.sessid = 2254635213U;

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
    msg.setTimeStamp(0.9510141728570207);
    msg.setSource(41000U);
    msg.setSourceEntity(220U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(226U);
    msg.sessid = 740987411U;
    msg.status = 91U;

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
    msg.setTimeStamp(0.79952476228502);
    msg.setSource(28357U);
    msg.setSourceEntity(100U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(86U);
    msg.sessid = 3695984703U;
    msg.status = 57U;

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
    msg.setTimeStamp(0.6994404680362774);
    msg.setSource(8631U);
    msg.setSourceEntity(5U);
    msg.setDestination(36816U);
    msg.setDestinationEntity(24U);
    msg.sessid = 1548500841U;
    msg.status = 71U;

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
    msg.setTimeStamp(0.8357243778126414);
    msg.setSource(63815U);
    msg.setSourceEntity(229U);
    msg.setDestination(28974U);
    msg.setDestinationEntity(150U);
    msg.name.assign("ZCXZCRVWKKVXNDVLZLUFETWCOUKVFU");

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
    msg.setTimeStamp(0.18091797049870328);
    msg.setSource(39233U);
    msg.setSourceEntity(222U);
    msg.setDestination(9755U);
    msg.setDestinationEntity(41U);
    msg.name.assign("IQVWITJLHSCDBKJMRPNABHVZHUJFMLOGAXFZEOBGNKUGTESHCDIOQAEPRUYCTQFXUEYOUMFYTZONHOYWGNBBTGUGXGWFYIHQEZJDFDAJKWAEXZKCZLWWLPSCDKSPFIIPOABBKRGNQZEARCJQMISXLUXWQFMZNUATJRJVYKYOFSVIVSXSLHPBGNBPCPODCHULYRFSIDRZXVKVNLMEADAW");

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
    msg.setTimeStamp(0.04943465817695569);
    msg.setSource(19808U);
    msg.setSourceEntity(185U);
    msg.setDestination(44489U);
    msg.setDestinationEntity(155U);
    msg.name.assign("BYHHHAFICOHQZXWHCMAKHQJCIQXEKPADQUOXSIUYRDVSBFMOBTOZNUETIPACKTETQSQPVVOJBLMWUDYGTGSRINEJFXFGLGDCFFWGGLZHMX");

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
    msg.setTimeStamp(0.7168620674237032);
    msg.setSource(33663U);
    msg.setSourceEntity(35U);
    msg.setDestination(2546U);
    msg.setDestinationEntity(249U);
    msg.name.assign("HAPHFESTBCUVPYWNNUOHEGDQSKNGFQXOLSGQTHURVWRCJAEMCSSKNDGUEUBUNOKMVFUVJCANBGALRNTJIZACADDWWYMXVBWOGTFYHLLTOISHKVIIJMMDCQUOVKZYKBCNRWOFPDHTRJLNTTILRADXMGXSTZMBYBUFDQRIJDSFNIZKEVMEVFOCHUPFQXJJPXGXPEYZXWGHZKTIPX");

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
    msg.setTimeStamp(0.9189856571435914);
    msg.setSource(49048U);
    msg.setSourceEntity(76U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(230U);
    msg.name.assign("WATLTJJQBIPHLLBYUICVLRKUFWWEPBJKPODKCGZFYKUDZPHVVGGOIXRUGFBDMQBCIDJEFLARHAXGOVSLLIIYLKMBVRHQMYUKNOWODJTDNPAQGYBYTSRNMNSDQLCWUUWXQZPEATTXDXHXRZZWWABHMOXPMVEKHMEICKYMJYIJNCFOPAYEPXJACHTQSTR");

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
    msg.setTimeStamp(0.872863727445448);
    msg.setSource(7177U);
    msg.setSourceEntity(137U);
    msg.setDestination(15561U);
    msg.setDestinationEntity(71U);
    msg.name.assign("XLSDWUJFNOFCJPZKIUM");

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
    msg.setTimeStamp(0.2664443091999571);
    msg.setSource(48649U);
    msg.setSourceEntity(117U);
    msg.setDestination(60111U);
    msg.setDestinationEntity(223U);
    msg.type = 118U;
    msg.error.assign("GVLNEWVVOWCMJRCXPMUNGZDYLDAELIWPBHCVEQRUZHNSUMQWBFATRUDRUBAZRPYGYFSMPLXKPALTFBUOFOKIISSCYOEMDIMCJQWWBHTHKHQBJACNDJAZFPUJTTOUHEGKICJFYZNSED");

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
    msg.setTimeStamp(0.15304688955379275);
    msg.setSource(4326U);
    msg.setSourceEntity(37U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(38U);
    msg.type = 236U;
    msg.error.assign("MKIKWPXKSLMTZUGSVCQFOJIMTNVCUHKWQQIJTFRVIBJPPLXWQPPYHEDDYCGDNPEXUNNSVSPBGHPTMAKLSEIRZDLLXXYXNYSBMBEURGZRFFICBARDKBIBJQZDQRLVUABGWAYRATKGHGUNIQEJQECDTFZWOYSVOTOWEXRLKCGPMTSDGJAEFZWXOKVEQLHOHKNJBUAYCMTACYOFZVCSMJYUIHVYSCZJMXLXOGAJDRWONFENWLZFAZHNH");

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
    msg.setTimeStamp(0.2554384464889151);
    msg.setSource(35244U);
    msg.setSourceEntity(83U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(147U);
    msg.type = 232U;
    msg.error.assign("TGOPITZDAUHCLGTXWXWOYHBVVVJNNXNDZJYFOAEGQZERWWTXEFLDXXSPYUKQKBIUKXQVHPDIGJOHHFSMGVPWUOYJERLRNJDMLWUFDIQMIDOMVUBQVPWGGSQTBCOMBKMUFVEOPZIZHTGMKFMBMAPRZYVFBRWEKYTFSJRYMLCFDTQUCUBGVQYPKXIDUZTRINCREDYNLAOFAWACPPZSK");

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

  return test.getReturnValue();
}
