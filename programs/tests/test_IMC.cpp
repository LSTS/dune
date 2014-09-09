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
    msg.setTimeStamp(0.7349258992304378);
    msg.setSource(59707U);
    msg.setSourceEntity(151U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(167U);
    msg.state = 132U;
    msg.flags = 16U;
    msg.description.assign("CGCOMMWZJBXQOPQZUDJTGAKPLYGMADFBXTKHEIUINLPTVVICZVAAIOEKDFBHAALLKDPSVYSGKJMYMRHCXOPLVBZDXNGVAKTFSCTCUQUGEWGZZEQNSWXQZDSARRGGPQALSWIJYOEXOTLFRUXWEVNJODMFWQJXBHPRMHQEVUTNTFLFYUIHUNDNYJIYYSFASBR");

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
    msg.setTimeStamp(0.6487270629065576);
    msg.setSource(64377U);
    msg.setSourceEntity(67U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(8U);
    msg.state = 238U;
    msg.flags = 33U;
    msg.description.assign("WRLJNCPYXBYNTTFKWNCFEDJJEUAKJIKAIPWRFBXEUILLCSL");

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
    msg.setTimeStamp(0.31389400149862967);
    msg.setSource(33993U);
    msg.setSourceEntity(100U);
    msg.setDestination(49601U);
    msg.setDestinationEntity(199U);
    msg.state = 202U;
    msg.flags = 43U;
    msg.description.assign("HCRIDBEGDFAUKQPFEKEACILYSJEFLBYMUTJRHWVOOZMQWWKH");

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
    msg.setTimeStamp(0.5366553487858888);
    msg.setSource(15199U);
    msg.setSourceEntity(50U);
    msg.setDestination(7040U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.034926209048272705);
    msg.setSource(60762U);
    msg.setSourceEntity(178U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.33147715232950725);
    msg.setSource(45136U);
    msg.setSourceEntity(75U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.08555032416346431);
    msg.setSource(48184U);
    msg.setSourceEntity(9U);
    msg.setDestination(13230U);
    msg.setDestinationEntity(246U);
    msg.id = 43U;
    msg.label.assign("XKTUTDIVXZPKLTVVCPBCUGQQSYAODPIGLZTB");
    msg.component.assign("VSUMAZXRAHAYUESKLAEYBTQIWNKQAKGIJFPCEGCYODLRHEHAOQPIRXRIGXOBNBQVPWSEYTCRMJFNUJGYWLDHEDQOQZDZCNNRWTFVXGYDQXXPBBXTFBRMIPCKOUKAASWITBSECOVMLFZQHBCHP");
    msg.act_time = 14387U;
    msg.deact_time = 30911U;

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
    msg.setTimeStamp(0.39137333449707445);
    msg.setSource(49209U);
    msg.setSourceEntity(62U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(171U);
    msg.id = 110U;
    msg.label.assign("AUFIXVULRCG");
    msg.component.assign("AYNVKSVVADHWIWEGJTWFRHVAMHASZBIBNCXVSPCSHKOAVXJOYISQBXMRGRGFYUFDFONIVBMFKBEQVSELUPEYCWJQAKTZOKXRESYHKZTUUCNDFPMUJWMQNDCZOALNEDIAXFZGUNKJZYRPTSRRDEOLQNMYCMKDGTGGVCMJWFBIDBYGIQKWOQSTIYHCGGBLWLLX");
    msg.act_time = 54997U;
    msg.deact_time = 34304U;

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
    msg.setTimeStamp(0.4794338637140182);
    msg.setSource(6136U);
    msg.setSourceEntity(204U);
    msg.setDestination(3120U);
    msg.setDestinationEntity(106U);
    msg.id = 248U;
    msg.label.assign("XEDXYMWDLUKKCZHQWQPMNVMOMWQOGEFQWTQXNVUQIYYSKZTYDOXJQXEABQLXRQIBWZXIPVILNJOLPNBKTPFYGLPZHRISJKHKBAHEVSGEOOCNKTGCSRRZWVRMYRCZETPRHIMUJPRVJASSVSRFQXACEWOUSAWVIBTKHAFUBWHZCOUFTPCOUYB");
    msg.component.assign("XNRETMDLHJQHUJEKYGOOSXOVWFSGXLLUGMVKCLJGHPOQPATIFWPIRTADIEGKZNCVEGOCMLQSHYYDHQNWGFNFBIJMFHOECHVRVMMXSRBCLMYNMQTVOUDIAKJEIVKRUIMWIBHWDCYAPLDVEYDYUADBFIXZLSUTYCUZFWQGCQDAPAUSUZAPBSK");
    msg.act_time = 21188U;
    msg.deact_time = 27798U;

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
    msg.setTimeStamp(0.746903787671239);
    msg.setSource(50345U);
    msg.setSourceEntity(114U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(81U);
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
    msg.setTimeStamp(0.16712808891363662);
    msg.setSource(11557U);
    msg.setSourceEntity(94U);
    msg.setDestination(46830U);
    msg.setDestinationEntity(90U);
    msg.id = 33U;

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
    msg.setTimeStamp(0.6216060077434203);
    msg.setSource(29737U);
    msg.setSourceEntity(168U);
    msg.setDestination(20292U);
    msg.setDestinationEntity(185U);
    msg.id = 245U;

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
    msg.setTimeStamp(0.6939223033445778);
    msg.setSource(65217U);
    msg.setSourceEntity(167U);
    msg.setDestination(21338U);
    msg.setDestinationEntity(47U);
    msg.op = 159U;
    msg.list.assign("TBAJDGPTIFRHJSXCKZSC");

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
    msg.setTimeStamp(0.3208192309132173);
    msg.setSource(23454U);
    msg.setSourceEntity(159U);
    msg.setDestination(1973U);
    msg.setDestinationEntity(0U);
    msg.op = 220U;
    msg.list.assign("ZVZUUWXKVOLJONQGW");

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
    msg.setTimeStamp(0.7672015025648443);
    msg.setSource(44042U);
    msg.setSourceEntity(111U);
    msg.setDestination(14643U);
    msg.setDestinationEntity(104U);
    msg.op = 241U;
    msg.list.assign("IQYYTCEGCCVJGSMNITVKZKNQOLUGEFWPDEWYKSNVUZSSHUEHRPXRDCKHAOAUGQEUNFCIIZFCSDOAHEBRKQDPLTWTMGAXLQRRSZPVDJVUEBMQPB");

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
    msg.setTimeStamp(0.49737932439920074);
    msg.setSource(36139U);
    msg.setSourceEntity(207U);
    msg.setDestination(43284U);
    msg.setDestinationEntity(64U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.40690687697192174);
    msg.setSource(48714U);
    msg.setSourceEntity(214U);
    msg.setDestination(8491U);
    msg.setDestinationEntity(96U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.02912871572284259);
    msg.setSource(31238U);
    msg.setSourceEntity(14U);
    msg.setDestination(4909U);
    msg.setDestinationEntity(5U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.7300649993466743);
    msg.setSource(21152U);
    msg.setSourceEntity(171U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(45U);
    msg.value = 105U;

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
    msg.setTimeStamp(0.8793663041968607);
    msg.setSource(65255U);
    msg.setSourceEntity(190U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(120U);
    msg.value = 172U;

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
    msg.setTimeStamp(0.94879332925696);
    msg.setSource(21311U);
    msg.setSourceEntity(163U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(40U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.9937632726636106);
    msg.setSource(28706U);
    msg.setSourceEntity(113U);
    msg.setDestination(22105U);
    msg.setDestinationEntity(188U);
    msg.consumer.assign("YHYOSGKRZRGKWCBQINIMNYFAIDFEWQPNDVMNFIKWNJJXJMKBZHUMLRCTXJNJSDBRSHDGQERSYPWMXVDDFJGWIUMPACVBBPTCHAYKZBEOKLGDTUCOSODXMUKGCNZEQHLCTSZSOZTLXPNZISAPXLQUEPAQTPNUAWEUBBIXEOAPKFYTBVRCLYFCILFG");
    msg.message_id = 2190U;

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
    msg.setTimeStamp(0.12873172607519623);
    msg.setSource(42171U);
    msg.setSourceEntity(177U);
    msg.setDestination(13826U);
    msg.setDestinationEntity(21U);
    msg.consumer.assign("CAVNVBQXKUFMVRSBNJZGPBOOOYZLHJGITTYVFTENYDHQKFFQVDBQZ");
    msg.message_id = 53253U;

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
    msg.setTimeStamp(0.9055653984497893);
    msg.setSource(11362U);
    msg.setSourceEntity(195U);
    msg.setDestination(3656U);
    msg.setDestinationEntity(214U);
    msg.consumer.assign("FGFLXHCULFVVDBYGVNCSTJVGEJATBASHAGFUGMFVSYONYMSBXZGSUOYINPDNSMWTRADYDQWVZPMBCIZOFPIHMBHOJADQLFDCTQBEPBLLTHEBXWUWXKNGYOKZIQRGSWLWILTOCEQPHJZJDNEXPPDXWEXCYURYZOQDITRTHRBZVQKRKSAFVLTPJTALFUYRZRJGAEWUMAKUXIXERANBZOKJPPEKZMMQDCNCQINQEMHJSGS");
    msg.message_id = 48771U;

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
    msg.setTimeStamp(0.3105464024937735);
    msg.setSource(14289U);
    msg.setSourceEntity(11U);
    msg.setDestination(31662U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.6332186342085895);
    msg.setSource(33066U);
    msg.setSourceEntity(55U);
    msg.setDestination(8413U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.01722999032390382);
    msg.setSource(58931U);
    msg.setSourceEntity(133U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.7360494149392773);
    msg.setSource(8238U);
    msg.setSourceEntity(243U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(77U);
    msg.section.assign("JUSNCTAZFKNIMARAVRMJQBIADIYWABEFSZUJGYNFDYGOSPOEWESTVSOEKBHTHWLKVLWMGUKKQAJWNFCOPIMHEADJLMRSSABHXLZVXZZOUVGTDLCSFUVXTXRYENCHBMYQIQEHIBHGOBQPXWUIMKLFZMACDKMVXIVEO");
    msg.param.assign("ZTWODSUKJXQFNXYSXIITRIVGBWNIBOIMEVNJSJBEKKJFKWSWABCSFYQVEIFLHZZAWSKG");
    msg.value.assign("DELPNENXCNQUQZSJKZCBWOOGVSKKHYRKAAVLWUJZVOXUELHSPMGVAKCOPVPZFJSLAVWXDRORQEDEYVNFZEZFFRJOTNGTITDMIDYKOZCFXWBQVUFHTJPTGBEUNXPIKLHBLTXQOXHMDMJNSGYRCATZAXAMINRHYLTWPLAYISSUEEHSQKAPBGCHOBMICWHJFWNQFUPZHMYIGUWID");

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
    msg.setTimeStamp(0.2575003096300785);
    msg.setSource(64330U);
    msg.setSourceEntity(146U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(16U);
    msg.section.assign("VGRXPYJHTOYXLKBMEVMZYEXIVQOBIQCRKEHFKRLFNQYHOLNSUYCFXIMEBONAKLJPYEWXXMKWHCUSPRLHGVZOZWZWFOZCDSGDTFUYIBOPDVJZPKWDBNQWFJHEMNKNFLTVILHQHX");
    msg.param.assign("ZXTBXPXWEUUQMPIYYNEBYAMTQWMGNVSBOFVYAOIQIPRSNGCHKWLCNYJYKKXCEEIXMVFHLZNARAFAFOZCUVHGWGTKEJHZHFSLLREAIOGLTZTXDFPITJEUJRJKKYWYBDVRHOWYAOCFDLLRQMVRHEWKCGQLGNWCQVEESIGGZMFMDFKCADBJQPQZXAGZUONSUNUVKSRJUVBDCBTRBSIHDMY");
    msg.value.assign("RMAXFKZELFRMNZNHYBNGWRBSMFYXAEOCBKXESRIBVFOQUQFNTHZKTMVSIEMQTGDUDQEACINWTUYUKPIOYZRHRWXNVZTBJSQIYODHJLVQWAOGZHXYBRHCCLIIZQUJDWRPMQYCIAQFUPHAOJLXSGLWDURVTAFLSYOUJRTVVKHNGZMVPPB");

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
    msg.setTimeStamp(0.6173606701432789);
    msg.setSource(65033U);
    msg.setSourceEntity(170U);
    msg.setDestination(34775U);
    msg.setDestinationEntity(166U);
    msg.section.assign("WSCRCJLWRFXEPZVUDNVXRGYFXKZXCFBISKP");
    msg.param.assign("LUMOTDHZFIYVNTUVGKPDUSNJMZSBACPRDCVHXWBYKHLZJTSIHCRZFOOOQCXTHSVGAUVDTBVUBYZBNYMJDRQMJ");
    msg.value.assign("SPCKRBVWFGLIVGXXAZSKSLICXVWILMWCDQXYQPXOUBIUWMUSIUVOMMHFNRUTAMVGFXMFIOZGEHEPJDDQPNHPEMCOFWOOCYZLZROITXVJREABCYYWNKLDNRZHPGUSREJXBQDPVKJMJUQXGFVFTIUNHIWYCNJLEKQTZTOLRVAUVFDBEHBLTNEFABDRETGCUDXHOHZZKNYYSRGDNYAAWKASCYQSNMDLKLTZMCIRKKSGPAE");

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
    msg.setTimeStamp(0.2893910297064656);
    msg.setSource(22893U);
    msg.setSourceEntity(188U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(240U);
    msg.op = 213U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IRXYZOQBGTZAZBMQLLUMVTHJKCVSFSGTRQXCMRDHXTLOXJPGDFJJUFWAOYOGDSOKEQOILQLLWZNAKIIEABYXPYXCBNMLWGYWMBXZTUJUKMIFAIPSPZPVVBGHEAFZTDSCGTGMSUOKENYHEVOPAFRNYXELKONFNSKFSXRAUFEYCGWNJJURDFMMSWQNXGZIKPNCUUBERHCUBHVYCRNHDVHZWJBWKTSC");
    tmp_msg_0.param.assign("HFYXFUNEUNZTDRLUKMBAXEYBPVAIOPVSYXCZKQIIDBXBAXESJHARIZNOYEEUWQMLVOCRKCTUONPASLVKRMDSLCOOWYVEXYHWRTBUTJONJITUDNVRQRTVWRSBGXAHFZWKANGFLVZAJGFFGKYDBMGIMNPZDLBRLQFMMWIKKZGFDMUMCJGCQHQ");
    tmp_msg_0.value.assign("GBAPMIQHHNRKHYSBIERDUVEOKPDZPCFQZGREKCXQKYMVTENFBNBAJSSZOODSCKRYZBGLYIHYHEBHELBKAYRYFFVLZUTZSPJO");
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
    msg.setTimeStamp(0.21353122956828885);
    msg.setSource(5270U);
    msg.setSourceEntity(124U);
    msg.setDestination(55053U);
    msg.setDestinationEntity(27U);
    msg.op = 55U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IMLKQASPDBTBFJVOFSUMSNTJVMZBONXVCLAJNWQCAFYDPQLIOGULTGYEWEEJOYBJEEKHOBOTJGIRAYALVLTFGJQKSRUVTYMXAIOUHKECZIFPFKERDHQNZDBAJNLIPYZEWXWCRPFT");
    tmp_msg_0.param.assign("GJRHIVMAOYBFMASTQTMRDGFQWREBKYDLUAPZTVDSOZYCGWZOMTYOISXWPKDRWZRHEMSESRNTH");
    tmp_msg_0.value.assign("PPUMPJKEKSBDYYAXIUASSOURFUKCMINTNV");
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
    msg.setTimeStamp(0.7337955307186113);
    msg.setSource(27613U);
    msg.setSourceEntity(16U);
    msg.setDestination(36286U);
    msg.setDestinationEntity(238U);
    msg.op = 2U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QAYYBKVMWDDEAPJYPNXIGSCNVBHSZFYQHFFJLVLBKUMANNOGHNMDBEPXWYWONEGIZRVWRVFMHZHSWDJZIXJ");
    tmp_msg_0.param.assign("LSEIJGQQNVAGCWTWZVLPCNYSBQNRARXALBRGLNUIURJCFDJYFYXPXULZEOEQDIXYHVLQXWDLOMMUJBZSWOWEUYEPZHGFDIWYEOM");
    tmp_msg_0.value.assign("OHDMFNKELJSCMGUTYFMJEMNBXPCYOOJYILVUIGMRAOMIAJXVTLBIDMPGIRQAKGVKHDNCEASXOIXIVHBNFNNBUPSPNIUTPZRTCFLSCWQXFAKMFUDQOSYWXQSJUKJQRCVEBFBYQSHHEUXEISASGNKZWCTTLNEYC");
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
    msg.setTimeStamp(0.45477778565033);
    msg.setSource(63478U);
    msg.setSourceEntity(15U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(92U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.30527225178297124);
    msg.setSource(61607U);
    msg.setSourceEntity(191U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(237U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.4904703465553464);
    msg.setSource(56981U);
    msg.setSourceEntity(133U);
    msg.setDestination(42203U);
    msg.setDestinationEntity(129U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.3439502624428189);
    msg.setSource(26584U);
    msg.setSourceEntity(238U);
    msg.setDestination(44918U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 20U;
    msg.step_number = 187U;
    msg.step.assign("XLEHZXWTEZKGTWTNLVMPLWJAHYCEJORZDZNFBSEBPUGPCFPYAXJUMQOTCYBKNHJKVSYIKHZXHCPBVEYUHOFIQIKFXORZSQTYGEVPQMRDKOVFFBRAOANJFLQVMDQYQMBPLGLGDQMVTEMREFTIWXASASSTPWPWEUPIHZUSAARWEHZDJDGUOMCBCWSIDZUROKNBBASQYLJR");
    msg.flags = 206U;

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
    msg.setTimeStamp(0.5216199409433631);
    msg.setSource(24099U);
    msg.setSourceEntity(162U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 201U;
    msg.step_number = 48U;
    msg.step.assign("AAVKLSBKRVMPYTPRUKHBBZSKJCHIQXAXGZMGVYWSEIBXMBFLKZDAQQAQNUFONXHMRUSNGFDBMJDYWJBNKWSZIJZYQJMYPQCEMTRTOHLHCUFNBAUTUDLYRZNZDOWACPAEPPVFPUFYDUUKEKOWPWLKXTCDWCIHYNQXKTHHCBILJORGSFNROWWZLCZZPMQBNHVGRTEGDLDCIDAGV");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.8187030251827618);
    msg.setSource(7854U);
    msg.setSourceEntity(137U);
    msg.setDestination(29916U);
    msg.setDestinationEntity(190U);
    msg.total_steps = 41U;
    msg.step_number = 131U;
    msg.step.assign("LRDJWDPCCCMOINVFRRSDBLDYHQDHUQVAVPQERXZSUMDYHTBCNWEIZQZKIIBJYMJGIWSLXKSFDZFGJQPKPDVQBKWGEVOJF");
    msg.flags = 183U;

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
    msg.setTimeStamp(0.45667364257939425);
    msg.setSource(41285U);
    msg.setSourceEntity(190U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(7U);
    msg.state = 114U;
    msg.error.assign("CDJLREPVJVRULWPAIOQMPJOFULRMBCGBUYMQVDDWTUNRGRQQSTNNTWHEQNSAWASQXDIFMXOOLJKXDPSKCHWMCTUIJYCNBZYZHSSIKGDPVXGWYSNXTXNEOVIUHCTLKZLISXBFPFNFTLOJCAELQUKBSIOKMKVEZEWFOGZTAOBPYWZRKNVARAUFTBPEFXJDGCIXFBGEXPEVHFZGYOG");

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
    msg.setTimeStamp(0.889148091738127);
    msg.setSource(16345U);
    msg.setSourceEntity(219U);
    msg.setDestination(55264U);
    msg.setDestinationEntity(88U);
    msg.state = 165U;
    msg.error.assign("OSBCAWAVTJIDBYHTOIJHPMSATYAAGYGBAPIIMEMBBVKYOISZUIVMLQFXJQTDEIITLDJGHMYWRLWNLUVFRLDNENVPLMZQNXRGHESOKCHDCZDEHRSKHGXUGRJJKGQHTTCJOUBHNNURNVDXQBASIKUEOPWFXPLZBYCDOXEEVYXCLZQGMEFUMNDLMKOMZXLCRGKHCAKZACRWJWVGKNKUY");

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
    msg.setTimeStamp(0.8641112514673496);
    msg.setSource(30904U);
    msg.setSourceEntity(35U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(68U);
    msg.state = 108U;
    msg.error.assign("ILJJBMFPFHAKXBVWKHCOXJZBWKBXDLMVDMHXUSHMSZMNCRKGDIYHUMGHSACLRBLWHLCGIPEMAVEOEACWDQJENQMKNYCUUTPGRNFFOBILIVIXFTYOZIREATNTVKF");

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
    msg.setTimeStamp(0.8138203754433151);
    msg.setSource(62072U);
    msg.setSourceEntity(84U);
    msg.setDestination(11333U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.9808737613633536);
    msg.setSource(56946U);
    msg.setSourceEntity(206U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6613937701901726);
    msg.setSource(6548U);
    msg.setSourceEntity(238U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.34584306662518205);
    msg.setSource(29566U);
    msg.setSourceEntity(178U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(187U);
    msg.op = 111U;
    msg.speed_min = 0.6712765544157004;
    msg.speed_max = 0.05708460519033176;
    msg.long_accel = 0.11151020074893059;
    msg.alt_max_msl = 0.5554168269069842;
    msg.dive_fraction_max = 0.23190078738051478;
    msg.climb_fraction_max = 0.16830257295004958;
    msg.bank_max = 0.8864764162923608;
    msg.p_max = 0.018532095047616437;
    msg.pitch_min = 0.5251166322107117;
    msg.pitch_max = 0.8550669452677075;
    msg.q_max = 0.8276724991126709;
    msg.g_min = 0.14531776567479415;
    msg.g_max = 0.6814975441171461;
    msg.g_lat_max = 0.9097713425593045;
    msg.rpm_min = 0.5612396710589432;
    msg.rpm_max = 0.5545893161082774;
    msg.rpm_rate_max = 0.6325086330148535;

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
    msg.setTimeStamp(0.02271329501897612);
    msg.setSource(27966U);
    msg.setSourceEntity(6U);
    msg.setDestination(40912U);
    msg.setDestinationEntity(186U);
    msg.op = 53U;
    msg.speed_min = 0.501895634441412;
    msg.speed_max = 0.9338852633381326;
    msg.long_accel = 0.339130722326791;
    msg.alt_max_msl = 0.8296769636652257;
    msg.dive_fraction_max = 0.4067598467616872;
    msg.climb_fraction_max = 0.06326461843143427;
    msg.bank_max = 0.9506419036450688;
    msg.p_max = 0.43895929418728497;
    msg.pitch_min = 0.4981916004630419;
    msg.pitch_max = 0.690517081603325;
    msg.q_max = 0.9358914893710621;
    msg.g_min = 0.03355851668975318;
    msg.g_max = 0.2449584209739486;
    msg.g_lat_max = 0.6410091696893854;
    msg.rpm_min = 0.5491931932595719;
    msg.rpm_max = 0.8618680886706612;
    msg.rpm_rate_max = 0.6758890921292836;

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
    msg.setTimeStamp(0.2732667987614832);
    msg.setSource(37799U);
    msg.setSourceEntity(6U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(160U);
    msg.op = 69U;
    msg.speed_min = 0.17554782799966695;
    msg.speed_max = 0.35358001434772535;
    msg.long_accel = 0.09633924693743812;
    msg.alt_max_msl = 0.990548983767658;
    msg.dive_fraction_max = 0.4163715008202066;
    msg.climb_fraction_max = 0.11934630326153672;
    msg.bank_max = 0.79878300098898;
    msg.p_max = 0.8876983522595414;
    msg.pitch_min = 0.6535356347493713;
    msg.pitch_max = 0.6215356466483875;
    msg.q_max = 0.017493551737241875;
    msg.g_min = 0.5390385938552901;
    msg.g_max = 0.4095330170283803;
    msg.g_lat_max = 0.012668598260689112;
    msg.rpm_min = 0.5166425543199756;
    msg.rpm_max = 0.0816141115025465;
    msg.rpm_rate_max = 0.09180457258994368;

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
    msg.setTimeStamp(0.5524292044511349);
    msg.setSource(55761U);
    msg.setSourceEntity(35U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.09128277695908094);
    msg.setSource(49394U);
    msg.setSourceEntity(42U);
    msg.setDestination(25400U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.23772161132644865);
    msg.setSource(55268U);
    msg.setSourceEntity(144U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.788378291700899);
    msg.setSource(51270U);
    msg.setSourceEntity(25U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.4168818996809107;
    msg.lon = 0.9161607682304286;
    msg.height = 0.6118116609857481;
    msg.x = 0.10804370569419464;
    msg.y = 0.9948080415635407;
    msg.z = 0.7340002638909594;
    msg.phi = 0.17673640329427975;
    msg.theta = 0.3960539671871599;
    msg.psi = 0.7993275625286917;
    msg.u = 0.8837470761379568;
    msg.v = 0.8327668700981652;
    msg.w = 0.24659075869851255;
    msg.p = 0.8119002544079102;
    msg.q = 0.17282800238424112;
    msg.r = 0.19484576973797474;
    msg.svx = 0.0007492096323420405;
    msg.svy = 0.05794593793931491;
    msg.svz = 0.3917835892739314;

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
    msg.setTimeStamp(0.9203896034223391);
    msg.setSource(38087U);
    msg.setSourceEntity(109U);
    msg.setDestination(26397U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.19567864376139565;
    msg.lon = 0.9656936623136155;
    msg.height = 0.5371292322035438;
    msg.x = 0.9468010176106224;
    msg.y = 0.5321210232035825;
    msg.z = 0.17419713218763977;
    msg.phi = 0.06628041023689502;
    msg.theta = 0.7222245227584029;
    msg.psi = 0.987970211542162;
    msg.u = 0.8193944519113768;
    msg.v = 0.09988813690737142;
    msg.w = 0.09987381788335681;
    msg.p = 0.7736826909659189;
    msg.q = 0.7591707783677598;
    msg.r = 0.38466319322672493;
    msg.svx = 0.0460767399522336;
    msg.svy = 0.9740088301098009;
    msg.svz = 0.796654178241482;

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
    msg.setTimeStamp(0.3445828086860525);
    msg.setSource(63298U);
    msg.setSourceEntity(10U);
    msg.setDestination(29142U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.8000975129868569;
    msg.lon = 0.016273079104924704;
    msg.height = 0.35740321970598543;
    msg.x = 0.8668374028044147;
    msg.y = 0.3881744792304872;
    msg.z = 0.9345789740980638;
    msg.phi = 0.3171774713846084;
    msg.theta = 0.39842606303413186;
    msg.psi = 0.7420293234198361;
    msg.u = 0.6336474550306139;
    msg.v = 0.28660216901987445;
    msg.w = 0.830607165160822;
    msg.p = 0.28785044503570034;
    msg.q = 0.14675872802003997;
    msg.r = 0.07219667227136461;
    msg.svx = 0.26412597386054004;
    msg.svy = 0.00398195734099438;
    msg.svz = 0.974523502449914;

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
    msg.setTimeStamp(0.5660209481909042);
    msg.setSource(23761U);
    msg.setSourceEntity(29U);
    msg.setDestination(27582U);
    msg.setDestinationEntity(142U);
    msg.op = 229U;
    msg.entities.assign("QXFYGDIOXRSUZUGCYRCEVJESDXSROTJLAJFEKBUIFXVTHFCGVAXKHQWTWGIKTZTOKMQLAPIISLNAAQMQUEIFGEETMUPQBCF");

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
    msg.setTimeStamp(0.6207982949086618);
    msg.setSource(15123U);
    msg.setSourceEntity(236U);
    msg.setDestination(10651U);
    msg.setDestinationEntity(29U);
    msg.op = 45U;
    msg.entities.assign("CAWYJNYRULHCBBKWSRBOMNBXKRCHWNNFVGMKBSODZQTLXRYIELUPUPOEPWJHPCZKXWVSYQOCKJELQJRNGCZAPUEILIANJLBFNSTGVMDSGFOIXRDJKLFZVJITDFCLFO");

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
    msg.setTimeStamp(0.7559957035864346);
    msg.setSource(26890U);
    msg.setSourceEntity(41U);
    msg.setDestination(25376U);
    msg.setDestinationEntity(217U);
    msg.op = 252U;
    msg.entities.assign("WTOQAXMFGAZTUUWVFPSOTTPFPLNLJNSYDQ");

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
    msg.setTimeStamp(0.4127790976037511);
    msg.setSource(32339U);
    msg.setSourceEntity(191U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(211U);
    msg.type = 153U;
    msg.speed = 31681U;
    const char tmp_msg_0[] = {-15, -109, -118, -85, 103, -37, 22, 1, 57, 66, -126, 87, -108, -101, 76, -85, -66, 94, -29, -53, -41, -29, 67, 72, -63, 21, 6, 47, -20, -124, -40, 74, -67, 113, 83, 109, 96, -111, 73, 80, 34, 4, -95, -65, -105, 109, 38, -1, -44, -21, -38, 122, 85, -86, 106, 81, -15, -94, 118, -62, 62, 63, 101, -35, -38, -90, 69, 31, 93, 94, -60, -32, 110, -73, -89, -14, -126, 94, -57, -67, -97, 97, -101, -79, 48, 69, -88, 112, -103, -79, -65, 18, 104, -115, 121, 120, 87, 17, 37, -18, -34, 58, -21, -67, -75, -27, -19, -50, 40, -23, -79, 118, -23, 115, -29, 100, -124, -102, 82, 40, -61, 32, -106, -118, 5, 60, 34, -21, 111, 57, -80, 62, 8};
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
    msg.setTimeStamp(0.018155612609845884);
    msg.setSource(2625U);
    msg.setSourceEntity(93U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(109U);
    msg.type = 172U;
    msg.speed = 17411U;
    const char tmp_msg_0[] = {72, -98, -120, -23, -9, -88, 26, -84, 77, 42, 37, -36, 36, 3, -9, -85, 0, 38, 107, 84, 46, 68, -115, -65, 68, 18, 6, 101, -6, 70, -60, 73, 26, 82, 38, -83, 90, -67, -104, 19, 111, -88, -58, 66, -107, 104, -57, -47, 98, -67, 25, 125, 9, -67, -99, -8, 11, -23, 80, -67, 77, 49, -10, 110, 55, 99, -82, -34, -1, 18, -110, 123, -119, 38, -114, 50, 46, 26, 65, 2, -78, 106, 10, 35, 117, 45, 78, -9, 4, -59, -89, -93, 110, 117, 21, -61, 5, -29, -98, -51, -115, -110, 92, -9, -108, 68, -25, -5, 52, 94, 6, -108, -46, -128, 102, -82, 34, 103, -25, 52, 99, -55, -93, -51, -28, -9, 7, -68, 120, 31, -28, 67, 76, -31, 114, 30, -47, 44, 82, -35, -98, -56, 62, -18, 114, 16, 51, -29, 20, 123, 89, -91, -54, 98, -118, 35, 20, -128, -77, -48, -72, 5, -87, -57, 80, -76, 50, 7, 63, 52, -123, 37, 124, 52, -59, -13, -27, -119, 100, 52, 80, -28, 91, -48, -46, 119, -43, 19, 19, 6, -37, -61, -30, 69, 46, 116, 72, -80, 96, -60, -63, 27, 4, -31, -42, -110, -15, 105, -78, 20, -40, 10, 25, -108, -61, -39, 28, -29, 117, 62, 41, -111, -70, -53, -111, -104, -99, 41, 84, 61, -80, -55, -40, -44, 42, -56};
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
    msg.setTimeStamp(0.8408617097550677);
    msg.setSource(8109U);
    msg.setSourceEntity(198U);
    msg.setDestination(40062U);
    msg.setDestinationEntity(133U);
    msg.type = 147U;
    msg.speed = 31575U;
    const char tmp_msg_0[] = {-53, -68, -20, 10, 21, 69, 126, -92, -71, -101, -64, -127, -41, 7, -8, -84, -68, 18, 5, 15, -36, 44, -46, 53, -47, 0, 92, -86, -81, 28, 32, -88, -110, -15, 24, 19, 74, -1, -7, -21, -121, -106, -21, -120, 13, 23, 93, -122, -109, 94, -17, 55, -85, 41, 54, 120, -83, 113, -48, 19, -119, 56, -100, 110, -92, 26, 28, -60, -114, 26, -5, -95, -127, 63, -3, 113, -13, 1, -101, 117, -51, -77, -88, -34, -59};
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
    msg.setTimeStamp(0.08187380595397042);
    msg.setSource(8263U);
    msg.setSourceEntity(221U);
    msg.setDestination(21794U);
    msg.setDestinationEntity(203U);
    msg.op = 179U;
    msg.tas2acc_pgain = 0.2193507566054711;
    msg.bank2p_pgain = 0.9647913823346178;

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
    msg.setTimeStamp(0.05684958148649555);
    msg.setSource(48427U);
    msg.setSourceEntity(168U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(39U);
    msg.op = 118U;
    msg.tas2acc_pgain = 0.6358787870966347;
    msg.bank2p_pgain = 0.18000297266317078;

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
    msg.setTimeStamp(0.9639884969654626);
    msg.setSource(59846U);
    msg.setSourceEntity(163U);
    msg.setDestination(3637U);
    msg.setDestinationEntity(30U);
    msg.op = 182U;
    msg.tas2acc_pgain = 0.6223033142033968;
    msg.bank2p_pgain = 0.45121571321567666;

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
    msg.setTimeStamp(0.9265813968193695);
    msg.setSource(25193U);
    msg.setSourceEntity(121U);
    msg.setDestination(3661U);
    msg.setDestinationEntity(153U);
    msg.available = 555579006U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.470180379272211);
    msg.setSource(24739U);
    msg.setSourceEntity(104U);
    msg.setDestination(5403U);
    msg.setDestinationEntity(95U);
    msg.available = 7221658U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.6713167344646928);
    msg.setSource(40327U);
    msg.setSourceEntity(192U);
    msg.setDestination(60471U);
    msg.setDestinationEntity(179U);
    msg.available = 837810238U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.9652751274870598);
    msg.setSource(23116U);
    msg.setSourceEntity(250U);
    msg.setDestination(27469U);
    msg.setDestinationEntity(151U);
    msg.op = 168U;
    msg.snapshot.assign("HKPRSZWEUHNLEJVGXQNPRFFTOQNIWUNJDNYFNLZCFCBUYGCSFCBLFSAYBDOTAYVSUFSEMSCXGMQBCRPIVKUDURLCXEIUUGYISTKXZPHROLAOADMLVDECOQVJXZOHIXZTNQHBGYGCKSATKFXXLUWMIJNROWQPDPJBNVVKWGDAOZYJDYVMPSTAGFQTBHHWUGKBWMVDLQTEZZENHKHPH");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 139U;
    tmp_msg_0.value = 44U;
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
    msg.setTimeStamp(0.6154109782781453);
    msg.setSource(19111U);
    msg.setSourceEntity(178U);
    msg.setDestination(8390U);
    msg.setDestinationEntity(235U);
    msg.op = 220U;
    msg.snapshot.assign("FXMPBCTFMCLUUEHURPGVDTDRFIJRAGSUAELWQRZPGDSOATCUYHVREAXLDBLIGHEMQVATESJGNWIXDCFNDQLQMGYHFG");
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.7960426220531944);
    msg.setSource(41690U);
    msg.setSourceEntity(83U);
    msg.setDestination(1709U);
    msg.setDestinationEntity(53U);
    msg.op = 167U;
    msg.snapshot.assign("XKLMLQECZFKXVFKXFKSURYHSZDTVQNIXYDDDEBZLAFLVJDNWBJSUJSIRCHKHUBHVRTZQTSGAHXFEAGCZVMSFFJARUFSPUZWWGJCXLDEWKQPJNIIANYBOYQVZRUWWIRPUWTDGBMNUZHQKFKRMGDOQSMOCDVACPHNLGFJBTAQNPTSNQOJEPXZNCXHMRDAWNIBEBITRGBHOKBEMACTMYYOOPJYVIOIQMCHMEELOTIYEWGPTWUPUA");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 136U;
    tmp_msg_0.speed = 51055U;
    const char tmp_tmp_msg_0_0[] = {4, 20, 63, 63, -94, -48, 123, 26, -12, -100, -21, 42, 74, 103, -37, 46, -40, 1, -34, -15, -14, -115, -117, -49, -115, -22, -126, 49, -124, 26, 10, 35, -114, 122, -50, -23, -35, 68, -115, -29, 54, 30, -14, 55, -76, 34, -83, -58, -100, -127, -117, -77, -67, 101, -87, 45, 95, -22, -90, 103, -23, 124, -62, 29, 96, 56, 18, 125, -57, -51, 122, 81, -98, -4, 88, -128, -30, 82, -74, -115, -27, -127, 62, -94, 62, -90, 33, -112, -88, 22, -99, 112, -76, 62, 42, 102, -28, 3, -69, 119, 101, -31, 48, 84, -77, 58, 77, 85, 76, -113, -12, 42, 96, -78, 116, -95, 120, -51, -11, 54, 92, 46, -60, -18, -80, 58, -127, -92, 58, -39, -111, -28, -78, 112, -75, -3, -33, 1, 113, 107, 60, 73, -119, 28, -1, 56, -120, 53, 22, -122, 72, -98, -39, 91, -53, -30, -47, 38, 40, -9, -126, 123, 47, -13, -71, 71, -111, 46, 124, -15, -127, 108, 0, -2, -40, 99, -99, 84, -67, -123, 65, 87, 107, 34, -14, 4, 28, 55, 42, 98, -4, 125, -26, 29, -96, -78, -31, 7, 26, 29, 73, 74, 10, 31, 24, -21, 36, 46, 97, -90, -58, -31, -29, 35, 95, -74, 119, 33, 83, -85, -81, -62, -100, 98, -88, 18, 98, 23, 89, 96, 35, 13, 102, -92, -25, 27, -120, -87, 28, 24};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7345693904618323);
    msg.setSource(42610U);
    msg.setSourceEntity(108U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(108U);
    msg.op = 204U;
    msg.name.assign("NPYXGWJCVUXRWMSXCUIKWQMDRRYPGDJQFLPUDITDCLQOURUYDNCSUKOVYAWXYBIBZAJ");

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
    msg.setTimeStamp(0.9128916360060011);
    msg.setSource(53472U);
    msg.setSourceEntity(64U);
    msg.setDestination(41401U);
    msg.setDestinationEntity(237U);
    msg.op = 242U;
    msg.name.assign("LVMNVURVTZKYPYLWAQORNVCPCAZTYGHXWFJGTZGXKQMOIUENXHBAHUQWTWGCSFOYWVQCYULLPYOZRSOJQHGCTVQTFZSOHCHHBUFJSSVUNIESASMRZPFKVSMBIYFKHALEQWGXBRQNGWSIPEM");

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
    msg.setTimeStamp(0.06874364839137215);
    msg.setSource(31268U);
    msg.setSourceEntity(152U);
    msg.setDestination(32770U);
    msg.setDestinationEntity(134U);
    msg.op = 27U;
    msg.name.assign("RKTILUGRIDZXQVZTICANSVEOLYPVMUBVMUSDPNGWKBFXPZEEHYGTESMCAOGZXJAIDWCCHKUKMPKQCQRVWUIZODISTDPZKNMZLXFUJXAWRNGNTQCALYRFXATUVBPGSBLPACUJJEJODPEMVGBUBILXYKQOTCHLABFMJPNDYYKOQJMSBNHSFRIHYHRE");

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
    msg.setTimeStamp(0.9980635491726617);
    msg.setSource(20263U);
    msg.setSourceEntity(181U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(175U);
    msg.type = 38U;
    msg.htime = 0.8729156104733852;
    msg.context.assign("QTZJUQPWUWWIVFVKVJHQSHOBHXZJEOSDVMRHUDDFHSDJPHULTGCZMAZRTHBWELDPSLNDMOE");
    msg.text.assign("THQQPUODFIAKWEMWOGZBVCDCYHHYJGUTVTONNBXYIXPXUMAPGUKZKWAQLXWDRCWDWVJTLJOXEZBJDEPLRCOVNJZXEARIVBXDAKTZTPIOAIVJXNMAVKTOHSHMPRFWJESRKETCFTNDYBFSWYKUTGMVYPALBGLSGMCXLZKDQJNSFNCCFBBKH");

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
    msg.setTimeStamp(0.22976324350707855);
    msg.setSource(19185U);
    msg.setSourceEntity(37U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(8U);
    msg.type = 216U;
    msg.htime = 0.07338862525010614;
    msg.context.assign("MXHXSLJXVQNADDQFJEDXGYYSXRPYCDHMOYWCJHFKFRGTCAAPGXLRTJZHLFZCGLWMBJJHDITHWAZSAIDCNKBQCLTDGFQOIRMFYUBPEPLQKHHOPLRICPEYVZVXQDFQNXMDAYEEVUPTNGRPQ");
    msg.text.assign("NNDGXQDKMNAUNJPAMRZLABVRHGQRUDEVBVTTQLEUIOYPPWNCNPAZHBDFQUYGXZYCOLMFKNQIAQDBZJAFSWWXENAVWSFIYIGXMHCNGYYZBWLSGAKFUOHWVOJFKIOONWLPZHRUEUHCZZJYAXHJMTIACJZDYXSLPLLFLBCBRQWQPJVDJOGDKMVFYZUCKBPMEDSQVSSFTJMTPEORXCKTRFMIREOEGWHJUERXLTXXESITRKU");

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
    msg.setTimeStamp(0.38232852846400434);
    msg.setSource(20052U);
    msg.setSourceEntity(59U);
    msg.setDestination(24699U);
    msg.setDestinationEntity(132U);
    msg.type = 71U;
    msg.htime = 0.6604777300816639;
    msg.context.assign("PUKCPUYROXHJRVNSBPOMHPMCZTQUZIGDQCXRYZDAIKWOZA");
    msg.text.assign("URYOUTRJIWBKXKGFKQWQPDHNLEZIFOAMTOZBHAMPIHLBDTBFXIMOFDZVEVMZPBFSCRNFLAWHXBTMVANOHXHFBSFWDBQVIVPESCONAVGOMHMUCATJEUOIPCRGGIZJJMCLKSEKEPGQQDW");

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
    msg.setTimeStamp(0.11387561948060343);
    msg.setSource(33350U);
    msg.setSourceEntity(64U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(204U);
    msg.command = 41U;
    msg.htime = 0.17677300642389926;

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
    msg.setTimeStamp(0.5954439533532752);
    msg.setSource(24248U);
    msg.setSourceEntity(254U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(132U);
    msg.command = 143U;
    msg.htime = 0.9456761787311488;

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
    msg.setTimeStamp(0.00719379688881383);
    msg.setSource(25534U);
    msg.setSourceEntity(72U);
    msg.setDestination(62274U);
    msg.setDestinationEntity(124U);
    msg.command = 78U;
    msg.htime = 0.6228447245653004;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.htime = 0.5491690992601288;
    tmp_msg_0.context.assign("NWUPEMFEPSBCGZFYMXPULQCVEZLJKMWMTICQBURWFXQABIGIOUXVWFSJJNOQKJPRAVMXKFHCQNPBMXRYMHVCHGDXZZU");
    tmp_msg_0.text.assign("EAAKELIEUJQPAIYCYINLCJZCQZULMEBTZOYXXFXWGKGQCYRPYW");
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
    msg.setTimeStamp(0.7052570743654445);
    msg.setSource(57609U);
    msg.setSourceEntity(69U);
    msg.setDestination(28332U);
    msg.setDestinationEntity(239U);
    msg.op = 131U;
    msg.file.assign("SNKYOXIPGVSHEEJXAFDYFNXEBNYASXGOMSKSTBZEYMMDJKSDPATTFKONVQGGABPREACOCFJUOOIUINCWKRCPPDYBTNPEFBHRRKJCZSBJK");

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
    msg.setTimeStamp(0.8626890090982371);
    msg.setSource(45357U);
    msg.setSourceEntity(40U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(213U);
    msg.op = 213U;
    msg.file.assign("UQLKKPKKLCUMCVIMWCBKPAEVJUDZLCLHAZTTFQNOQOVHXQECAIEPVRNJRMDNOXTZRLPSOUV");

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
    msg.setTimeStamp(0.22263650995128637);
    msg.setSource(28346U);
    msg.setSourceEntity(150U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(109U);
    msg.op = 188U;
    msg.file.assign("NRBSSYQOHATYFPDHEJNKCIBWXOKLDWNJJBXODMPVBENHHVKXHIDIMPLQAYTDSSMCIEVZTWQQAEFNPFTRUDKXMOFHCLFUKAZEFTJDWR");

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
    msg.setTimeStamp(0.15384548375622764);
    msg.setSource(18951U);
    msg.setSourceEntity(84U);
    msg.setDestination(64692U);
    msg.setDestinationEntity(87U);
    msg.op = 138U;
    msg.clock = 0.75651407975222;
    msg.tz = 108;

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
    msg.setTimeStamp(0.6659923366002011);
    msg.setSource(58751U);
    msg.setSourceEntity(74U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(199U);
    msg.op = 153U;
    msg.clock = 0.16366445914441452;
    msg.tz = 47;

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
    msg.setTimeStamp(0.9898541873802262);
    msg.setSource(30936U);
    msg.setSourceEntity(53U);
    msg.setDestination(61657U);
    msg.setDestinationEntity(65U);
    msg.op = 70U;
    msg.clock = 0.677746727551748;
    msg.tz = -98;

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
    msg.setTimeStamp(0.35498563146779427);
    msg.setSource(34648U);
    msg.setSourceEntity(209U);
    msg.setDestination(36108U);
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
    msg.setTimeStamp(0.39249366536461483);
    msg.setSource(46466U);
    msg.setSourceEntity(205U);
    msg.setDestination(36701U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.11969105704235083);
    msg.setSource(2810U);
    msg.setSourceEntity(21U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.12015585363613901);
    msg.setSource(63912U);
    msg.setSourceEntity(145U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(241U);
    msg.sys_name.assign("HXEGVAYZRADVFZCEFUASYRAVXPVAGIVUICAMUOWZKXCKTASXONSOMHGYXSMZJFTFOJRKLDDSBGMWVQRKRNLTHIOCPCMJTJZMYTWXQPQVNQOJQHPEWENEIQCJYQPZAAAYVFZWIFGIWXNOLGNRILKILKZWHMQWKLHTGGPYXTOHSUDCBEBTEOGKDCMLKSQUEHJPZFXRDNZBGYQDUSLVXNPMTHFLYURWHJCUIEDCUIUFRBBPD");
    msg.sys_type = 173U;
    msg.owner = 62960U;
    msg.lat = 0.7229293679904385;
    msg.lon = 0.9485417222373386;
    msg.height = 0.8927037514138225;
    msg.services.assign("BGXHUYJKQPYZDTLAJXZFPHLUOGOTMSNRRRSLAFEZHYWHOIQD");

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
    msg.setTimeStamp(0.5724417024859713);
    msg.setSource(18930U);
    msg.setSourceEntity(79U);
    msg.setDestination(31704U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("UFWEBVSMIIMWXJWHQZYMCTNQAOQEAAQXEMIWSJCWZBAMROQXNIEXNYYDNNGWLJXCNJPYPCYIEVVWLSKOQXBGSHVGFFHEOTKNYJUVKCFKFROUPADDUKNAGPSTZPNMMZBUDVERPZTCBKEFTGQSLDVBPXSARKIHJEIPZMIIUHKZLDGZNGRRHCHQWGBPBFVJBUZZMLEJXLUSOFGDABOXATCRVHAYUYKJOLLTRWSOXW");
    msg.sys_type = 169U;
    msg.owner = 25193U;
    msg.lat = 0.8526560028492878;
    msg.lon = 0.022210506017746767;
    msg.height = 0.16686258336479343;
    msg.services.assign("RVJSCHDYUGYGGLSEAWDIDRAFWAUWLYJIKGBQEIHLTZXKPZHYWDZERJIKVDQPZNDBPLMGODOSFEEWYAEIJKORWFAXYMIKDMMGSHAOZAOHYTRRTIBMVFTGCZRSLTVPSCCBFBUKGKUCRPOVRQTKIOLJPKNVVXSMHLEZQJAWVJYQ");

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
    msg.setTimeStamp(0.6237082488172414);
    msg.setSource(4669U);
    msg.setSourceEntity(154U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("DXUZZNYFYXQXFCPVWHVZHCPBFSSUEFDXVFUEAGSJQAQYKRIVTAVDUIWSWEJYVSZTNGHQDPPRTLTNBBDCNYKOPUMLGHESQBHAIEXHAJGVNXBWZNMHRIIKEUZMOPFRFQCMFZIJLZLSXNYUHTJXJWKEQUIFNMNKLKJKOFMRSWAARCLHCOOGDUAGBWGTWEDGMQPKGDTCQJTEVCODLCGKRTZKYLJBMRNYXBIOPBSCAVOIOMPMZVSRDQIOJWHAPR");
    msg.sys_type = 229U;
    msg.owner = 13734U;
    msg.lat = 0.8493701907639829;
    msg.lon = 0.6298544140769515;
    msg.height = 0.1663246966231814;
    msg.services.assign("LMAKRVBJWBYNJIBNLINPXWPSNLMXULXZWWNURFHTQEPRZLOCJBKNVNLGQEHHYRWIDVKMOIOEFSQYIJXJZDGFBRPGSYOPCWOQXOMAKHCMIJSMCXHZAOEWDTGFTGDVRRPCVEETKUZFUGXZFMLCDBUNOBBQDDMSCWHUTYSTBHYAZFHARAD");

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
    msg.setTimeStamp(0.16599966494352814);
    msg.setSource(14259U);
    msg.setSourceEntity(137U);
    msg.setDestination(21768U);
    msg.setDestinationEntity(116U);
    msg.service.assign("NDOKNBBYSAIQQLCRBUOIWTTLZOOGDNWYVPJZXXIWBCPBMLECNVHBGQRFKZRXZULUPOKMMLMVPCFQHSETLKTDIMFZKGSDLKQWGDXIUDYRFSRNRNTZPHKDYFCVRJSHRDUQFMXJYWMHSMKASGWXNBEUWEEBBPTTATIGLQFQCACN");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.4733163610608573);
    msg.setSource(2191U);
    msg.setSourceEntity(73U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(231U);
    msg.service.assign("VBDDVMANUSXHXITZRYYQWGBOJWXMSNKHNGFCDZBGEQCERMNEWEPP");
    msg.service_type = 151U;

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
    msg.setTimeStamp(0.39686897507446484);
    msg.setSource(43388U);
    msg.setSourceEntity(20U);
    msg.setDestination(7126U);
    msg.setDestinationEntity(80U);
    msg.service.assign("WHTFVNKFICIRIPUGCFJLAJOKZQLQWQHPPXVYMHBTPBOVBEYAJGKJDJBQIWDNBSGKEULKXMNBEDZLKHPJHFWIUBQSXSOLZSXORK");
    msg.service_type = 150U;

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
    msg.setTimeStamp(0.8014287651992636);
    msg.setSource(16319U);
    msg.setSourceEntity(190U);
    msg.setDestination(48668U);
    msg.setDestinationEntity(238U);
    msg.value = 0.24682976531429868;

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
    msg.setTimeStamp(0.13940355102399848);
    msg.setSource(37698U);
    msg.setSourceEntity(206U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5396204485605456;

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
    msg.setTimeStamp(0.21443550513308363);
    msg.setSource(54412U);
    msg.setSourceEntity(220U);
    msg.setDestination(12202U);
    msg.setDestinationEntity(8U);
    msg.value = 0.734029033274755;

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
    msg.setTimeStamp(0.520984567850464);
    msg.setSource(26426U);
    msg.setSourceEntity(39U);
    msg.setDestination(63849U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3148748159157023;

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
    msg.setTimeStamp(0.26111689392327664);
    msg.setSource(34540U);
    msg.setSourceEntity(79U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(80U);
    msg.value = 0.9076789073293602;

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
    msg.setTimeStamp(0.9972306357793147);
    msg.setSource(7717U);
    msg.setSourceEntity(248U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(203U);
    msg.value = 0.6124296918996621;

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
    msg.setTimeStamp(0.6143291423910643);
    msg.setSource(20940U);
    msg.setSourceEntity(99U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8563956421832514;

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
    msg.setTimeStamp(0.1723113461522615);
    msg.setSource(11338U);
    msg.setSourceEntity(75U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(208U);
    msg.value = 0.37532464547223143;

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
    msg.setTimeStamp(0.9776033441521387);
    msg.setSource(5890U);
    msg.setSourceEntity(107U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(44U);
    msg.value = 0.8702691801045466;

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
    msg.setTimeStamp(0.40122387607071497);
    msg.setSource(40399U);
    msg.setSourceEntity(251U);
    msg.setDestination(18026U);
    msg.setDestinationEntity(30U);
    msg.number.assign("PGYCSSPGTJSFZLPCUDGIUQDWWJHJRWDZULKVAQRRBNSFKOVLQNOMKNBXIAXBAMIDOZERBGHTHJRWAMFYLOCIJWYDPQHBZATU");
    msg.timeout = 59707U;
    msg.contents.assign("MTJERWSGMLCDKOQXXWLVMZQZGGJZAHOUCGPYCJIPEBPRGSSBTVNTSQ");

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
    msg.setTimeStamp(0.8197828588329068);
    msg.setSource(16885U);
    msg.setSourceEntity(103U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(25U);
    msg.number.assign("GUKEEHBKJSXSYQKTNQOXDOTQHDPZCADBDVPISLWZLJKTTICIFYCNCWVCLEMVXBDMIMLMBIEWHQMIFADNNAZWQXM");
    msg.timeout = 52060U;
    msg.contents.assign("GJCZKCMJBAPBTBDQMTBZNVUAMFYKIFQFQBROBLJJWRZPLQGCDFLRKRUMUXHYUNAYQSSICBGMATOACZIFMNFHXYXEAUALEAGYJXXJQDPSBACUOS");

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
    msg.setTimeStamp(0.12900307315006065);
    msg.setSource(44882U);
    msg.setSourceEntity(245U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(59U);
    msg.number.assign("EXZGONFBXGUCVKJSDUVYOZFSTFMUMLLWWRORSKXUIJVXGZSPDAJGDGSBOORRPIURZLFQNEJQDNTEHZIEMMVZUWWOXIEQYYKWDQTNZRLLKFWJWWDQPJSHHIFPPYUMSBAMKDEHDTHFHUBUSGBRLIMGNABEFAPXZAXMAGSVVPODHGLYCBVCNXH");
    msg.timeout = 48767U;
    msg.contents.assign("HDJZKEMHRQILBWAPKNVWNZCFEOJXOZJJEOJEUWGMZWYSLZIBHEQOFGJHAJMRURFUBVQENTVSXUDQFBCBZHDNCBATPASQLIBCPSVGPICUBIFTTQSKTHYNWUPAGIDCLXWQWIJVDPKGLEWQYCHOVBEFMRMRLOOKIOJATNPJDYXZNCMDCLTXC");

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
    msg.setTimeStamp(0.09113887836449275);
    msg.setSource(48253U);
    msg.setSourceEntity(15U);
    msg.setDestination(25091U);
    msg.setDestinationEntity(227U);
    msg.seq = 1488769875U;
    msg.destination.assign("EPIHIFOEFLHOAEGBXKCCREGNZMUDQQIKHJTLIRSWZOUJSMZNGEDKXWCFDYSGUDVGZPBDBRSGGAPFLMNWKUHBPREIFEVJSOFWXZLVWYIYWJYCNGUBEYTQMHPSUQSRQKBVHTVFHSLZVKKYETVOTRPLLMYSJDOBUALPGMGWRBJFZNAAPTYVJEWRTWHXROIAXUAZTAJMFBXMQJZNNVCDYHXXQK");
    msg.timeout = 45774U;
    const char tmp_msg_0[] = {-51, 66, 26, -70, 0, -59, 69, 41, -50, -16, 19, -94, 61, 27, 62, 35, 50, 81, 65, 105, -10, 58, 70, 8, -103, -102, -127, 7, 8, -47, 19, 29, 90, -121, -123, 65, -48, 51, -51, 56, 18, 11, 99, 15, -82, -63, -113, 121, -58, -17, -91, -90, -54, 118, -33, -47, 96, 44, 101, 91, -78, 85, 95, 19, 13, 33, 39, -83, 102, 97, 53, 87, 5, 119, -40, -43, -72, 55, -85, 64, -53, -34, 2, -48, -84, 109, -110, 60, 95, -54, -12, 13, -78, -84, 5, -42, 51, 21, -5, -35, 80, 62, 108, 94, 8, 105, -44, -73, 120, -14, -125, -2, -70, 35, -70, -5, 106, -112, 29, -101, -55, 58, 85, 54, -51, 40, -86, 73, 2, -108, -78, -63, 84, 52, -64, 125, -4, 41, -11, -113, 124, 12, 58, 56, -126, 114, -45, 24, 77, -46, 40, 33, 80, 2, 57, -63, -7, -13, -77, -69, 97, -60, 124, -78, -86, 11, -90, -25, -64, -85, -88, 8, 58, 3, -35, -17, -68, 26, 39, 51, 3, -71, 53, 28, -18, -95, 36, 26, 46, 109, -104, -39, -24, -40, 11, -120, 40, 24, -107, 16, -66};
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
    msg.setTimeStamp(0.8645446031534143);
    msg.setSource(16299U);
    msg.setSourceEntity(188U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(175U);
    msg.seq = 798999760U;
    msg.destination.assign("GTDRFCESWVAHJAWWUYXMDJWPDYQHYBITPJICIGLUWAJFBPEZQYQQKBHGZHSUDCZKDCOKJYFGLJKMBOEJLPNSEOPIZGSLVKQTXRXMVSUPYDSCORJUTDKEMFCYUXHOMRAWLIERISBVAGXFCVJLTQYBRWF");
    msg.timeout = 54057U;
    const char tmp_msg_0[] = {-73, 120, 44, 75, 60, -126, -116, 17, 52, 37, 59, 77, -90, -46, -93, 13, -75, -71, -86, -2, -86, -26, 73, 125, 55, -73, 35, -77, -127, -81, 58, 62, -52, -27, -89, -69, 101, -100, 31, -70, 18, -65, -26, -77, -28, 54, -26, -14, 10, 91, -28, 103, 27, 89, 93, -86, -16, 91, 35, 16, -13, -60, -5, -105, -109, 88, 1, -105, -12, 120, 86, -104, -67, -50, 56, 31, 42, -44, 80, -10, -31, -29, -4, -116, -128, -51, -120, 67};
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
    msg.setTimeStamp(0.7393787712007032);
    msg.setSource(54902U);
    msg.setSourceEntity(65U);
    msg.setDestination(36136U);
    msg.setDestinationEntity(34U);
    msg.seq = 2285529273U;
    msg.destination.assign("IQTBYGZADXSORALLTAICQHRMVTBNKTKFSTXRIFOUKHYVGASCIQGMSFFFWHCXWHDDEKRZJCKBMJHTXWPHNOPUENHDPLJECMQIKNBJHEUBYSWNYLGIVWSOBRERSUVAMOFMIIGDWRRDZVBCJPWWNJEMGSNPGZGTLIT");
    msg.timeout = 59666U;
    const char tmp_msg_0[] = {-112, -31, -50, -53, 24, -86, 112, -64, -78, -93, 96, -35, 68, -24, -68, -60, 107, 115, -40, -36, 65, 105, 115, 61, -56, 51, -60, 47, 4, 108, -84, -29, 116, -100, 22, -109, -112, 37, 48, 28, -7, 61, 82, -56, -61, -127, 39, -29, -13, -66, -118, -23, -80, 51, 110, 63, 27, -26, 90, 101, -97, -41, -126, 51, -7, 78, -127, -88, -75, -10, -116, -91, 100, -45, -22, 119, 103, -9, -98, 76, 65, 71, 69, 125, -99, -34, 12, 109, 50, -82, 92, -35, -78, 4, -11, 30, 122, 43, 3, 43, -108, -28, -95, -62, -29, -17, -56, 10, 10, 118, -59, -32, 15, 2, -67, -31, 47, -126, -121, -21, -98, -49, 106, 1, -92, 73, 107, -79, 122, 116, 40, -26, -127, 75, -37, 41, 68, -118, 104, -116, -74, -32, 14, 81, -108, -4, 48, -56, -21, 92, -111, -68, 94, -31, -106, 71, 72, -25, 6, 22, 60, -91, -61, 61, -59, 118, -99, 114, -98, 81, 37, 66, -107, -68, 104, 1, -97, 65, -128, -19, 46, 124, -32};
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
    msg.setTimeStamp(0.7816698422618408);
    msg.setSource(33261U);
    msg.setSourceEntity(101U);
    msg.setDestination(53258U);
    msg.setDestinationEntity(50U);
    msg.source.assign("KNMSKAFXWZJJPCROJXQEHFLCWPAISWVWNIRXEVJOUKSKSDXBYFEYNQERUPKGNBWJQEXUPJRZENCDGBTTZBMDHCXVKUIGMDWJLLPIHYFMYILDAGKEHBFCTCMVFRNNXUVSYBDARSQTRRPHUYOORVVLTXAPGMFLPVWPLSLAPUIDMGZRAXVTYOQYOEZCL");
    const char tmp_msg_0[] = {99, 5, -28, -38, 70, 112, 41, -69, 104, 43, -62, -1, 20, 90, -22, 83, -112, -9, 46, 52, -92, -48, -67, 125, 89, -15, -78, 71, 12, -32, 121, -116, -87, -17, -13, 6, 125, 7, 64, -42, -32, -86, -123, 27, 122, -110, 19, 80, 94, 52, -37, 63, -80, 86, 119, -73, 113, 109, -107, 52, -7, -15, 121, -73, 57, 115, -24, -100, 126, 83, 18, -21, 74, 28, 18, -126, 64, 39, 75, -107, 79, -97, -90, -112, -100, -48, 4, 7, 112, -106, -24, 55, 89, 72, -71, 52, -66, -119, 48, -58, -74, -81, 83, 64, -74, 35, 75, -86, 17, 51, -114, -31, -99, -25, -90, -93, 58, 124, -92, 115, 4, 77, -1, -75, -70, 49, 78, -6, -4, -49, -36, 54, -86, 91, 4, -82, 43, -49, 112, 3, 87, -82, -54, -48, -106, 61, 64, 63, -39, -40, -73, -13, -86, 25, 48, -34, 70, -72, -47, -16, -114, 115, -121, -118, -53, -5, -56, 100, -55, 1, 44, -72, -111, 57, -69, 45, 2, -121, 58, 33, 115, -58, -16, 109, 59, -104, 99, -86, 32, -104, -84, 123, -64, -13, -79, -72, -34, -33, 101, -124, -49, 36, -128, 126, 76, -111, 42, -53, 63, -97, 83, -66, -25, 21, -58, -84, -36, 86, 94, -109, -14, 91, 99, -107, -109, -19, -119, 18, 113, -93, 98, 53, 11};
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
    msg.setTimeStamp(0.12821685058221388);
    msg.setSource(51051U);
    msg.setSourceEntity(218U);
    msg.setDestination(11036U);
    msg.setDestinationEntity(20U);
    msg.source.assign("QMDVSFMHABJAFUHCZRQRXPPNUKREXLVEHPDMFPKJNBGXWWOGOSWGFLWPJUJLSHOOKSKQRYKVGEBFDGZIUQCFVEAIEOXCQBXRTIOZMVEILHXEYRTAYTSDKOMHINCLTQNRDXAKWNVFAHOYURJZNT");
    const char tmp_msg_0[] = {-49, -93, -108, 58, 6, 66, -112, -64, -52, 71, -35, 32, -1, 63, 48, -5, -65, -19, -85, -95, 10, 74, -47, -49, 54, 19, 90, -3, 18, -17, 10, 80, 34, -4, -82, -25, 32, -27, -92, -2, 43, 109, 92, -99, 16, -59, -103, 120, -1, -27, 66, 41, 25, 15, 28, 6, 44, 101, 40, 103, 47, 103, 69, 21, -52, 124, 36, 97, -31, -33, -30, -56, -59, -80, -23, -122, -113, -18, 38, 66, 2, 92, 47, 100, -75, -25, -49, 66, 118, -119, -117, -13, 101, -125, 89, -74, 88, -108, 83, -57, 59, -117, -114, 79, 106, -23, 3, -109, 18, -35, 114, -75, -72, -11, -88, 1, 3, 78, -90, -22, -110, 67, 43, -80, 106, -39, 6, 9, -11, 90, 71, 51, 51, -50, 21, 44, 44, -128, 113, -86, 118, -106, -108, -19, 72, -76, 48, 87, 7, -73, 60, -20, 33, 9, -51, -85, 39, 106, 59, -86, 11, -39, -7, 4, 13, 53, -52, -48, -79, -87, -104, -106, -80};
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
    msg.setTimeStamp(0.11570099997014371);
    msg.setSource(63168U);
    msg.setSourceEntity(147U);
    msg.setDestination(45173U);
    msg.setDestinationEntity(114U);
    msg.source.assign("NCVYOZPYQQVDAHOHNNFHRMLYOLVZKGBKMEXHYPBYOWZTSIWXQGIWHXDTSZRUCCSFGWUYKFGNEFJLJWBHPPHNGFMZNYXVJFACFLZDLAETSPRZJDBASQPCTMBAMMRVKNCHHEVGWQLHJNBMBXMKULAETERWWX");
    const char tmp_msg_0[] = {-8, -86, -103, 74, -45, -83, -19, 102, 74, -13, -77, 75, 31, -63, -20, 16, 11, -95, 66, 121, -14, -113, -8, -45, 22, -63, -87, 19, -22, 55, -30, 110, 7, -72, 31, -58, 44, -59, 75, -69, 55, -38, 15, 41, 95, -18, -104, -119, -93, 73, -118, 18, -46, -36, -92, -87, -114, 71, 101, 77, -32, 65, 46, -31, -7, 107, 5, 44, 52, 2, -80, 38, 103, -114, 5, -5, -31, -68, -94, -22, -105, -115, 6, 112, -120, -15, -20, -18, -74, -18, -115, -4, -8, 105, -100, 47, 3, -64, -1, -70, -109, -25, -17, 21, -68, -29, 106, 85, -25, -68, 31, 119, -84, -106, 112, -69, -105, -69, 54, 51, 38, 35, -69, 38, 47, 9, 79, -26, 24, -100, -75, -57, 79, 51, -71, 10, 124, -101, 10, -78, 77, 20, -108, -48, -77, -87, 18, -83, -44, 72, 25, 15, -61, 28, -31, -58, 42, 63, -109, 54, 41, 80, 60, 12, -95, 49, 76, 29, -43};
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
    msg.setTimeStamp(0.7295205584613448);
    msg.setSource(64781U);
    msg.setSourceEntity(174U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(236U);
    msg.seq = 686990930U;
    msg.state = 105U;
    msg.error.assign("YHPTBSKDSZJLUGOVXQYNSRQFDJOUBXAEZLWCRBAIWMANKCRYHUVVWNTCONMJBEFFLHYVHOJQGPFRBZRNWZNOJYGITIKHNINHXZRHMYEMFHXKMBFSLLWOUPKIKJNCZDKHQVKTEZFDREAWQDLJLCRFEUDZCGPEFQ");

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
    msg.setTimeStamp(0.7950744840777055);
    msg.setSource(46001U);
    msg.setSourceEntity(195U);
    msg.setDestination(51099U);
    msg.setDestinationEntity(230U);
    msg.seq = 3666672991U;
    msg.state = 107U;
    msg.error.assign("PHFIKVIEFECJRMGAKNKXYGYZYRLPITHPSYWR");

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
    msg.setTimeStamp(0.7011637142837316);
    msg.setSource(24036U);
    msg.setSourceEntity(234U);
    msg.setDestination(10747U);
    msg.setDestinationEntity(59U);
    msg.seq = 2114199116U;
    msg.state = 102U;
    msg.error.assign("CCAGCUFMYLHBQQKNQCCPXTGEEENGUWMKVAIYUODDYTLFEFXZZILWNFPQGCFIJWVGBVZNGWZRLOJZAIVEYIUQRPBJQISMTPXXXUTYICADQOAALNENUVXSKWRLOKZLHYEHRJPFISIDWOZZRDPBJDKJKCWRRSKRTNYXLBGHGMBKDSWUYZUEOJHSH");

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
    msg.setTimeStamp(0.5521319764376359);
    msg.setSource(25844U);
    msg.setSourceEntity(243U);
    msg.setDestination(43374U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("CJHKBBYOXXQOQBOIECFTQMMHDZTHEATZOTXKBORVAFANELDRHFRGGGIHXMDKWADNLVALJZHCSLTKIGWLRJNJSHCIQPDFESUULYATEOZPPTNLVPBZKTSUXIVEDCIIZYVCYVESMMXNJIAZAKBBFORZWKXQRNMEWVFMNJUNWTMXLQWROJUCOCSVYECMTJGOQVUJYGGYSNDSKRBEWK");
    msg.text.assign("HYTOKLFYZBZFSVCWFUCAZLUMURNQDHLYKNJZQBWTELGVXIXOVWWCDWHKHYHEQMUNGGIRVGUXXSQTWYHTXDBZLDYLRXGQFLKERDCUTABJZMAVBNM");

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
    msg.setTimeStamp(0.5033415102740562);
    msg.setSource(55357U);
    msg.setSourceEntity(42U);
    msg.setDestination(19310U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("RUTXQHLZTFRZXVDNAUNTIRSTDWWMCYPDQVMRNUVXYETUCIOLE");
    msg.text.assign("PUWJYCIYHJSXQEZUJBMSLSRZPPOLEOORHNSIOWMZGGJZPLSXUNBYVYCLIJDNJCBEIEFUIEAVAYGIUNCAPPNSNJGKVEVRPFDTHETAGCCDDFYBWTDXRQSBNMCKTBLUIDUFAFBVIOKQBTROVHV");

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
    msg.setTimeStamp(0.7029765845066305);
    msg.setSource(33378U);
    msg.setSourceEntity(138U);
    msg.setDestination(5675U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("CKNMWWNQWDNSXYZLVTSSRYDPJIUBYAMGHSIQYWARBTAQBCKPXEQDPOERVRRAJMMKMMZYEPICNNVZUHWOPCBVIFAORPYGOXUJDMKPQCHBJBKWUZULOLMBAYNPVIYLXVRWFTGVBGQUHJHKNKPKZBXISGFJTEDTSQWATKUHEFGFNHSINTGDHXUEFVKUER");
    msg.text.assign("MYHUOOPRZUNAAXKYCMIBFTLEVALPHNVKYBHCJILJNUIMYFWZOUZUFHRKJHAEGLTSQCRGXUOTIVAKYCAMDPIFIJYNNFENNDGLZSKTZLXMPRBLUVJCOGPTEXZPIQQQTRXIBVDKLDZJTCXDMSJAZGTAQMNUKWDISRMCGPVHQACR");

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
    msg.setTimeStamp(0.1324715920102959);
    msg.setSource(16783U);
    msg.setSourceEntity(241U);
    msg.setDestination(44010U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("XIZCGKBNPWQDIQJBLPUYRPQDICEQZXYCFLVITCGGFAZRNNRAFROHHJJVOGAQDDLBRSWORZZWSKARMUFQBJIUPMVMDNVHPNAOGLKJWYWARSAYEHZKLQAOBQLPSXHGPXWBBOTUYEITNMZMZNETGTBUKIGVVJOJXTTXCHHVMTJYBOGAYFKWMTIISDKDLUFCVFKTBHVNEKOXCQUIPLFYUCFRWSUMSEDEHZ");
    msg.htime = 0.6446428799838843;
    msg.lat = 0.984272237461576;
    msg.lon = 0.6291661558683268;
    const char tmp_msg_0[] = {19, -19, -97, -67, 73, -46, 44, 82, 85, -64, -119, -50, -12, 112, -114, -27, 32, -57, -100, 52, -76, 15, -111, -75, 107, -72, 76, -102, 54, 91, -84, -62, -87, -50, 79, -75, 68, 6, -124, -122, 62, 83, -33, 110, -115, 60, 69, 78, 70, -87, 38, -11, -47, 69, -105, 122, 23, 24, 121, 71, -6, 58, -6, 90, 84, -11};
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
    msg.setTimeStamp(0.029002053063746258);
    msg.setSource(5777U);
    msg.setSourceEntity(162U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("ITUEFZXOCGOGLFNZKWOQAJSWFTPDQ");
    msg.htime = 0.5310526490052643;
    msg.lat = 0.9004514834542002;
    msg.lon = 0.17108188126964974;
    const char tmp_msg_0[] = {-35, 103, 113, -127, -16, 3, 96, -25, 48, -70, -93, 51, -16, 115, -75, -49, -21, 82, 8, 66, 51, -123, 35, -118, 18, 44, -57, -125, 121, -44, 44, -5, 0, -1, 124, -72, 47, 37, 100, 0, -35, -63, -14, -120, 37, -86, -34, 12, 52, -62, 115, 57, 26, 110, 101, -126, -113, 102, -81, -16, -22, 94, 2, -93, 10, 125, 11, -127, -114, 46, -32, -99, -7, 78, -31, -1, 25, 4, -119, 92, -88, -4, 123, -25, 50, -124, 59, 25, 121, -106, -17, -121, 38, 20, 63, 115, 113, -59, -10, -30, -121, -54, -58, 126, 49, 3, 22, -43, -89, 2, 37, -50, 70, 53, -120, -9, -74, -65, 94, 108, -119, 74, -74, 87, -93, -49, 54, 21, -83, -106, 43, 44, -90, -13, -75, 125, 116, 97, -44, 38, 71, 31, -109, -96, 28, 40, 14, 85, 109, -40, 54, 116, -96, 112, -47, 125, 69, 66, 90, 13, -80, 81, 76, -109, -36, -63, 14, -76, 95, -83, -35, 53, 107, 95, -24, -34, -114, 40, -102, -22, -16, 10, -117, -55, 117, 80, -53, -77, -45, -116, -21, -36, -115, -89, -112, 108, 69, -7, -95, 19, -109, -89, -105, -13, 75, 82, -117, 60, -75, -121, 125, -109, -13, 13, 4, -30, 9, -74, -86, -33, -54, -55, -28, 93, 46, -44};
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
    msg.setTimeStamp(0.3468431525330289);
    msg.setSource(52275U);
    msg.setSourceEntity(195U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(230U);
    msg.origin.assign("WEYJXVTLLKTFBJJZZYFBZQIVGHTUOZCLMQVCYVDALNFMIXBHDOOKALPCBAICRSHXRSGPXXEJBAENIXHUDSELUSBGKQOKCLIABEVCAYMFQSUQKDMMDSWGDWEFWFRZVPSNNCZDROSMWYANMWJAJXDOAYFNX");
    msg.htime = 0.956647253185818;
    msg.lat = 0.2933425478498767;
    msg.lon = 0.6184278591916644;
    const char tmp_msg_0[] = {-81, -84, 52, -33, 78, -23, -62, 121, -32, -30, -39, 52, -18, 33, 104, 112, 89, 37, -74, 33, -5, 5, -55, -56, -125, -103, 18, 13, 35, 112, 120, -126, 9, -95, -64, 101, -45, 89, 79, -124, -83, -7, 40, -3, -99, -114, -39, 33, 71, 6, 25, -99, -94, 107, -56, -20, -99, -50, -102, 95, 44, -95, -96, 23, -11, -20, 12, 30, -69, -97, 120, -54, 77, -106, -89, -56, 94, -33, 0, 3, -105, 35, 40, 61, -90, 125, 74, 26, -86, -27, 77, 104, 95, 37, 36, 0, 49, -109, 107, -1, 103, 51, 55, 70, 60, 5, -117, -64, -113, -8, -114, 76, 51, -13, -11, 40, 86, 44, 24, 54, 65, -92, 16, 60, 15, 9, 122, 6, -93, -84, 91, -101, -45, 90, -11, -32, -28, -119, -80, -111, -11, 103, -96, -19, -128, -47, -40, 100, 93, 112, -55, -44, 99, 39, 25, -66, 70, -21, -63, 79, 10, -88, 17, -122, -55, 71, 80, -75, 28, 111, -16, 1, -89, -10, 116, -62, 110, 63, -45, -125, -11, 114, -30, -70, -108, -71, 54, 31, -12, 75, 41, 125, 45, 12, -98, -58, -34, -19, -9, -71, 54, 43, 91, 119, 86, -2, 93, 101, -92, 81, -73, -73, 9, 32, -114, -20, -98, -92, 109, -73, 123, -92, -117, -18, 8, -69, 6, 47, 14, -45, 60, 47, 85};
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
    msg.setTimeStamp(0.9803045759804166);
    msg.setSource(40902U);
    msg.setSourceEntity(172U);
    msg.setDestination(20595U);
    msg.setDestinationEntity(52U);
    msg.req_id = 27474U;
    msg.ttl = 735U;
    msg.destination.assign("JJGNRJOSCKHEKLGPIQLLKAGIUUXXDPUCZPQNIEWFLNFBYERGAFVRXXRZHXCRMEISKLKVWFOJEOVYDTVWTWHXATBPWEHAFJUZELJFNPYCVYDIDQBHUAGUPKMBDDTRPIBSFUCQNKYZSXXQTQGLFTQYZAMKTSWMANTNPMFMAWGSGSQYT");
    const char tmp_msg_0[] = {8, 72, -70, 60, 56, -67, 48, -52, 79, 114, 115, -118, -104, -81, 91, -37, 52, -11, -29, -10, -69, -19, -82, -128, 32, -104, -90, 76, -103, 84, -3, -20, -22, 4, 25, -52, -41, 109, 33, -127, -38, -115, 111, 55, 46, -27, -45, -85, 36, -19, -89, 118, 13, -111, -23, 31, 23, 119, -126, 68, 59, 43, -94, -106, 111, 64, -49, 82, 10, 3, 83, -99, -128, 98, -98, 89, 106, 38, 4, -120, -57, -29, -91, 51, 17, 8};
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
    msg.setTimeStamp(0.6807792407310091);
    msg.setSource(40393U);
    msg.setSourceEntity(19U);
    msg.setDestination(30083U);
    msg.setDestinationEntity(242U);
    msg.req_id = 14549U;
    msg.ttl = 33768U;
    msg.destination.assign("RZEORAVKNWCLQXBYVCFFGIMUDVPVKBHVFREHRKXZGTOKKQYASBOKXUZCFFJWHSSOMPKPADUGIPAZOGYQTADZLZUPRRXYYAKXHXZAXGGUPEFFBTNEJXJLCWLBTCLRZHNIFQTHIHEVJNDJOFIXEWSEUIRDTYYHUDQYOMSMNCRIDILDTQEMPKHHUKIQIVBSJWGESWOBPATAGZSCMQVCWYCONLLBNGMQCNWBNLGMDBJLTMAJW");
    const char tmp_msg_0[] = {-31, 108, -120, 7, 60, -100, -24, 52, 73, -85, 38, 76, 56, -1, 11, -117, 77, -109, 91, -88, 0, -78, -108, 35, -67, -125, 48, -90, -86, 11, 80, -80, -62, 46, 73, -58, -28, -45, -46, -74, -33, 15, -7, -72, 53, -117, 63, 51, 120, 40, -69, 58, 60, 110, 108, 92, -88, -79, -75, -73, -47, -38, 77, -46, -26, 35, -117, -41, 105, 68, -14, 119, 17, 79, 23, -111, 122, 122, -115, 45, -20, -54, -31, -3, -111, 116, -106, -60, 94, -49, 74, -46, -3, -102, -79, 90, 122, 41, -96, 101, 86, 32, -61, -39, -48, 87, 27, 126, -58, 12, -3, 36, 49, 115, 126, -125, 49, -49, 66, -123, 63, -110, 3, 73, 69, -76, 81, -71, -64, 98, -126, -10, -15, 34, -116, 122, -17, 90, 28, 82, -83, 42, -95, -58, -116, -40, -50, 118, -97, -90, 12, -49, 54, 13, -61, 112, 23, 52, 5, -79, 107, 18, 37, 93, 9, -113, 22, 72, 56, -69, -108, -42, 59, -104, -54, -8, 54, 47, -61, -127, 55, -7, -49, 63, 88, -13, -85, -12, 38};
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
    msg.setTimeStamp(0.17626406164223907);
    msg.setSource(59636U);
    msg.setSourceEntity(49U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(13U);
    msg.req_id = 17913U;
    msg.ttl = 62628U;
    msg.destination.assign("SWLENYZAFIXKQXJMUYVLPPLZUPRBUNONPELVVIBODCCNSKXPUMSQSMSPKSJXCZGMTBXNERPMYKPRHZIJBIYWOFZ");
    const char tmp_msg_0[] = {-24, 6, -9, -122, -70, 83, 21, 7, 97, -59, -79, 86, -122, -101, 87, -95, -3, 61, -121, -30, -70, -72, 92, 10, 108, 111, -63, -61, -2, -18, -23, -38, 17, 81, -87, 21, 45, 8, -124, 69, 9, 58, -98, -13, -115, -8, 49, -9, 2, 102, -114, -50, 5, -10, -19, 20, -86, 14, -104, -13, 78, 28, 6, -38, 78, 86, -92, 42, -45, -99, 22, 43, 98, -18, -33, 26, 43, 6, 103, 23, 61, -38, 62, 48, -88, -79, 3, -110, 27, -112, -81, 64, -11, 105, -122, 34, 80, 19, 44, -97, -127, -10, 7, -22, 13, -108, -98, -44, 19, 23, -8, 9, -21, -100, 92, -47, -95, 126, -13, -32, -52, -79, -114, 88, -20, -108, 42, 2, -58, 100, 14, 51, 23, -97, 111, -69, 88, -82, 38, 70, 110, -29, -53, 2, 41, 9, 51, -102, 49, -32, 48, 104, 76, 31, -36, -23, -17, -108, -68, -29, -109, 43, 12, -77, 14, 55, 89, -2, 73};
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
    msg.setTimeStamp(0.7126791480090304);
    msg.setSource(41134U);
    msg.setSourceEntity(35U);
    msg.setDestination(43987U);
    msg.setDestinationEntity(161U);
    msg.req_id = 25936U;
    msg.status = 43U;
    msg.text.assign("ENEEPBJNNACSKPOPYDNWYBVZCGSRMRMVTSVHTESBJGUASWULTCLVHWQOIKDNIANLXMVMUEAZMDBDSOVGKTHQXCHWVDRQMZPLOJHYKGCDFWJXFQLLJOHKKIWEJXORXGFTXACWQBXMZ");

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
    msg.setTimeStamp(0.6870287365614941);
    msg.setSource(46760U);
    msg.setSourceEntity(29U);
    msg.setDestination(11842U);
    msg.setDestinationEntity(90U);
    msg.req_id = 36393U;
    msg.status = 165U;
    msg.text.assign("KAUOWHBQVIJUGHGOWAFCEXRVWFOTTFSYTJRKNWOJMYPQQNKBJCECMXGELOWWLJNPJTQHP");

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
    msg.setTimeStamp(0.2540514798114123);
    msg.setSource(64281U);
    msg.setSourceEntity(72U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(109U);
    msg.req_id = 56446U;
    msg.status = 205U;
    msg.text.assign("YVTJBJLEMVSXUOXPDVETTSCYEMWONVGOVBCOIVJTGHZLKSBLQAWHYVJCMFKRIBUQDNMJEBAMUQXGJXAENFSMZHISURGLOLIXLEIDJLQAQTRPZAOSUYMCKEHTRDXKAFKQZIRYMNHXKPODGCQPWCTKFRINLVBFZUGSTHCEMIRNQNPWQEYHCPBFPSBDQGJNXEIGLKUMKFWFWNY");

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
    msg.setTimeStamp(0.8905226666849824);
    msg.setSource(8821U);
    msg.setSourceEntity(5U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("GYENWUOOPSJGUOMDLLXBIQHDKQZQIKBZEJDNIIMIKJVWGOFRZKBHCGHVXOPEXXYPPLUXIPVCBJRETBAQCTLZHLZOWTKVRUUSZKNSYVBFAGYNHCKAJESWMXWKNMGFGSNMIBDCCDSFATZJATPAVAOKFONMMCSTQFVYHQGPMXTWWQQYZHYORXDEDMNNHFSVS");
    msg.links = 2219769526U;

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
    msg.setTimeStamp(0.5500703906988071);
    msg.setSource(24711U);
    msg.setSourceEntity(127U);
    msg.setDestination(35492U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("TGIARVZHXPSBMGOWTGSNNCVDEYECTTZ");
    msg.links = 2387884510U;

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
    msg.setTimeStamp(0.5075615951934161);
    msg.setSource(64220U);
    msg.setSourceEntity(144U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("LGDURBAJXVSCAPZYHHHKIVYPZANSNIBLYQPMMQDPCLEVSOZTPTZNSOFCOAFFGVLNABOUTUDVEUBOSUTLHCMGOJZWPCSINSLMETZVKHJIPEJMEJKEAPQXPYNWGXWCYRKWBNOIEQICFSDCSGVQFL");
    msg.links = 3903337220U;

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
    msg.setTimeStamp(0.14233066572758712);
    msg.setSource(43286U);
    msg.setSourceEntity(32U);
    msg.setDestination(45695U);
    msg.setDestinationEntity(1U);
    msg.groupname.assign("KULPJGTKWGBCJWIPPURUVCRR");
    msg.action = 90U;
    msg.grouplist.assign("AYEYDJIMGRZHXXGWACZPQYLCIEOWEHLQFYBYMJWZTQYJINAVNNKEQPLSUQKPQHLFOVHQYJZROSAFWGJFKXBRERLBFCMSLTCVTZCJFFOUDB");

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
    msg.setTimeStamp(0.10729566948209524);
    msg.setSource(64805U);
    msg.setSourceEntity(188U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(136U);
    msg.groupname.assign("PYGHMGYKRCUVPJXZSNCLSOYAGKDWDCJEOXGGRZBNHMXCPRIBODYMUJZHRPDIFTPSEUFAFBAVVBDTOCQLBKJFUPILERTHCTCXNXZVDOAWRXNLBQVWXNYRTHDSOVQTMLSNIKXBFKFUHEHMIQJYWYIICEGQJITDPUNQDGGLYHQFUQYKUIXXSZBOZMKLVNADZSAPTWCWCHVWNFIWYWNMKJLRFOBBQKVKSEEU");
    msg.action = 174U;
    msg.grouplist.assign("KSXSLGVUYHUEZBQERZYZWTJNSSKFEAVHZEIIWHLXJFPSPQSERBCWIXNJFYIWVQXTGFUARHGMDTVFDLZZYNLRKCABVLYHQTZYRMNGPCOXMCGRLWIMOPIWAIXNVENGORPRGPFEJHDKMDBXJCXKCTACJOMZIZTWHZYQPLD");

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
    msg.setTimeStamp(0.9772070577168731);
    msg.setSource(28904U);
    msg.setSourceEntity(162U);
    msg.setDestination(8772U);
    msg.setDestinationEntity(165U);
    msg.groupname.assign("LLRLCBBWEWMRTUEPPKSBJUKBTWYLLVHBHFEJEBXXLGKBVUFGACVSVXOVQHAHBFWCTCMOTIRDJCNSQOXXGDTWJLIAGZGZOATMZRGHTOMINWXPWYVYLUIXQEMLDIQMTNSFHTZXDRECZIJAYSWSNKYKPWMFSQKFVZMIGJKBXPNQIUWEYRHSNNTUZYIDKEAGPQNFJGJHUAZGCIOPPMQQJRHKYNSDCDBQAPNUEHAARRVVUDEUDXOCYJFFLOVSPF");
    msg.action = 143U;
    msg.grouplist.assign("OAPKFTBGLGRDYSUDACPMQWCQGEEWBMNADCPHOSNWAXCVNBYOGRYEMXWXYHIKJDNIZFUUZT");

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
    msg.setTimeStamp(0.9253858824120521);
    msg.setSource(37892U);
    msg.setSourceEntity(251U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(217U);
    msg.id = 27U;
    msg.range = 0.01549230801923751;

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
    msg.setTimeStamp(0.17634693023124182);
    msg.setSource(19882U);
    msg.setSourceEntity(94U);
    msg.setDestination(718U);
    msg.setDestinationEntity(11U);
    msg.id = 210U;
    msg.range = 0.1896617137542438;

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
    msg.setTimeStamp(0.89903511277697);
    msg.setSource(37579U);
    msg.setSourceEntity(154U);
    msg.setDestination(39393U);
    msg.setDestinationEntity(79U);
    msg.id = 206U;
    msg.range = 0.8351261203794375;

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
    msg.setTimeStamp(0.6352008136172035);
    msg.setSource(54735U);
    msg.setSourceEntity(208U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(155U);
    msg.tx = 193U;
    msg.channel = 190U;
    msg.timer = 63609U;

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
    msg.setTimeStamp(0.5392485142865088);
    msg.setSource(33479U);
    msg.setSourceEntity(10U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(241U);
    msg.tx = 125U;
    msg.channel = 185U;
    msg.timer = 42070U;

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
    msg.setTimeStamp(0.20236660672381934);
    msg.setSource(19063U);
    msg.setSourceEntity(26U);
    msg.setDestination(43902U);
    msg.setDestinationEntity(127U);
    msg.tx = 162U;
    msg.channel = 46U;
    msg.timer = 10842U;

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
    msg.setTimeStamp(0.2446474921625985);
    msg.setSource(35018U);
    msg.setSourceEntity(26U);
    msg.setDestination(16589U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("TFYSVKKYNMUZRBXNJYOTLLDRWIAAFBWDENOCQMIMBOZSRGFHQNCUXXDLRABQCHVSLYGMWHAIWETGPJOFCOVTQMDGEKPGNOWKNNLEZBWTOCTXNQIGHHWKJWBDRCOZAHJXPKAJEJTVSSLTNVU");
    msg.lat = 0.3099851170969181;
    msg.lon = 0.5129060151539534;
    msg.depth = 0.542092471716941;
    msg.query_channel = 36U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 232U;

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
    msg.setTimeStamp(0.15547765415970038);
    msg.setSource(23835U);
    msg.setSourceEntity(202U);
    msg.setDestination(11701U);
    msg.setDestinationEntity(109U);
    msg.beacon.assign("XQMKVABIGQYDBVSZBNCPNYPTCOWONRTWHWDUJDQYKTMLVAZRCWKQXKQXTEDSJLVSHIOHFUAECYFRTJKAKIZUVMPCLXGCRREIVTMOTTFCJDEOUBDPQLZPGVMRTREJKWUIXGMUARWDB");
    msg.lat = 0.48115167699218886;
    msg.lon = 0.6813258123655946;
    msg.depth = 0.7603725257328596;
    msg.query_channel = 154U;
    msg.reply_channel = 101U;
    msg.transponder_delay = 55U;

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
    msg.setTimeStamp(0.07088829489842974);
    msg.setSource(16668U);
    msg.setSourceEntity(17U);
    msg.setDestination(33703U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("EVQBFFNDOJGBXIFJWDKSZNHNCRJCZLJGTXOIFTVUKOIVRLRIKOKWSTVZPBCYOKNSAJEPHASYZAYUIGNYXZGTCXQLBIQKMHTGUVHSMMXDPQMXKIKMUVZHTUOVCBJFPIOBYDQJKNGWEYMPHWCYEOXUVWOMJFDBYTXDRMFEUSCPGNQAYNQLWOJALRTQUQBNCAARNIHBDULSIGSWKGRYTAZWA");
    msg.lat = 0.6244793699181304;
    msg.lon = 0.4805223466197618;
    msg.depth = 0.7478275096521002;
    msg.query_channel = 80U;
    msg.reply_channel = 93U;
    msg.transponder_delay = 94U;

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
    msg.setTimeStamp(0.496026998187861);
    msg.setSource(29636U);
    msg.setSourceEntity(231U);
    msg.setDestination(23247U);
    msg.setDestinationEntity(65U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.14546080309915477);
    msg.setSource(57890U);
    msg.setSourceEntity(161U);
    msg.setDestination(4389U);
    msg.setDestinationEntity(77U);
    msg.op = 232U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FZKXVGQNSWGAMHSOCFULMNJIWTLPBLHEYHDKPTWRCRJIEAKRBHGEEJRQTYYNMXKDZQMRUYFJABLTSUYUINAMLFZQOQXZPEIOIGCYZROVLPHWJSXBSHJSAJTEXGDVSDMNDFWJGUXREIBNEWLXACVAWCXHQUT");
    tmp_msg_0.lat = 0.924612279402346;
    tmp_msg_0.lon = 0.9203408629109006;
    tmp_msg_0.depth = 0.8781901805065638;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 75U;
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
    msg.setTimeStamp(0.2806993452848673);
    msg.setSource(2621U);
    msg.setSourceEntity(184U);
    msg.setDestination(18044U);
    msg.setDestinationEntity(37U);
    msg.op = 94U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZQTQWECRMBHQWZGNVENTPLUWSJRBIJVEJDBBWIKUQSCFUNRKMVDWLKFXRQLZTFJTAOABNPKOOQZFJRVCDEXDS");
    tmp_msg_0.lat = 0.21809146290850223;
    tmp_msg_0.lon = 0.8577685817893452;
    tmp_msg_0.depth = 0.22382946858129538;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 49U;
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
    msg.setTimeStamp(0.6207334640590405);
    msg.setSource(60188U);
    msg.setSourceEntity(17U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(171U);
    msg.address = 154U;

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
    msg.setTimeStamp(0.3431444022796669);
    msg.setSource(60440U);
    msg.setSourceEntity(50U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(17U);
    msg.address = 23U;

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
    msg.setTimeStamp(0.5832796413195106);
    msg.setSource(13176U);
    msg.setSourceEntity(88U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(69U);
    msg.address = 30U;

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
    msg.setTimeStamp(0.22797017346983406);
    msg.setSource(3629U);
    msg.setSourceEntity(176U);
    msg.setDestination(13062U);
    msg.setDestinationEntity(132U);
    msg.address = 193U;
    msg.status = 1U;
    msg.range = 0.5871354455834572;

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
    msg.setTimeStamp(0.3947548122896398);
    msg.setSource(37930U);
    msg.setSourceEntity(87U);
    msg.setDestination(31865U);
    msg.setDestinationEntity(252U);
    msg.address = 56U;
    msg.status = 193U;
    msg.range = 0.2556066283640889;

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
    msg.setTimeStamp(0.9427693006952915);
    msg.setSource(16356U);
    msg.setSourceEntity(194U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(41U);
    msg.address = 129U;
    msg.status = 153U;
    msg.range = 0.1578629717113642;

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
    msg.setTimeStamp(0.5495870153571293);
    msg.setSource(22364U);
    msg.setSourceEntity(159U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(76U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BHUUZSWNUTEKDVGZIXQKCUHJDKIRSWFMCGBGQOFIXGGZRHNVDFQJLRDWVDZEOOYPLPPGGAYTSNIDXXOLNOPNIJSPQQYDXJXYJPVKHCXYMJRBESIRTVBRUMTTBVZVZAIWMCYDMABS");
    tmp_msg_0.value.assign("RPZFFNQXQRTPJPTXSSHNZKSOGEGNX");
    tmp_msg_0.type = 161U;
    tmp_msg_0.access = 242U;
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
    msg.setTimeStamp(0.07307127972189387);
    msg.setSource(10971U);
    msg.setSourceEntity(169U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(186U);
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.id.assign("YTSNFWNJEPLLJFGSCANFTNORXWNLUNVNQWEJWZFMIZVGIBARDUVAQIABHJKIELOQDXRUDKLBMYLZQUYJZHNTOFCWHOUQMNTKGLCJCRIXTOXMSKOSGSZOETLBQMWZBCXPPOVCMTVLSGVFIRKKPPBHHTAIKUQFUCYULRQZSEJXPYEXMEAEHBFRFAKHDPVBZAHJJHPVMPD");
    IMC::Current tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9084665471981127;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7455616255449041);
    msg.setSource(18437U);
    msg.setSourceEntity(140U);
    msg.setDestination(60493U);
    msg.setDestinationEntity(202U);
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("WYTSBWZBFOCNADTNBRTGOOVNYZTYDHUGKZLKGKPGWZCBMCVWCUHOKSPQREZFBWQVJYJDOAYRZPKFTFESBWLRCNIEUWIFIGVTGSFHYZATIHUJQSJCDDOYXEVYTSCIMVSAPNXNCHVIMQYJOAIEHSDPUFLXDNHIMTGEFXLWHWJPCRJTBQA");
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
    msg.setTimeStamp(0.592433106156109);
    msg.setSource(54104U);
    msg.setSourceEntity(193U);
    msg.setDestination(56888U);
    msg.setDestinationEntity(46U);
    msg.enable = 215U;

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
    msg.setTimeStamp(0.3428964016920032);
    msg.setSource(33687U);
    msg.setSourceEntity(253U);
    msg.setDestination(33682U);
    msg.setDestinationEntity(141U);
    msg.enable = 225U;

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
    msg.setTimeStamp(0.601391848956854);
    msg.setSource(27077U);
    msg.setSourceEntity(156U);
    msg.setDestination(58534U);
    msg.setDestinationEntity(54U);
    msg.enable = 33U;

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
    msg.setTimeStamp(0.18480390490959075);
    msg.setSource(38440U);
    msg.setSourceEntity(216U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(150U);
    msg.summary = 198U;
    msg.level = 67U;

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
    msg.setTimeStamp(0.36883317650864367);
    msg.setSource(8567U);
    msg.setSourceEntity(176U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(104U);
    msg.summary = 16U;
    msg.level = 54U;

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
    msg.setTimeStamp(0.708378577533814);
    msg.setSource(54289U);
    msg.setSourceEntity(157U);
    msg.setDestination(22919U);
    msg.setDestinationEntity(6U);
    msg.summary = 19U;
    msg.level = 244U;

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
    msg.setTimeStamp(0.8425445613736142);
    msg.setSource(22226U);
    msg.setSourceEntity(226U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.6968420736357905);
    msg.setSource(9624U);
    msg.setSourceEntity(7U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.09884076635162531);
    msg.setSource(2964U);
    msg.setSourceEntity(239U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.2913509500724597);
    msg.setSource(30080U);
    msg.setSourceEntity(80U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.7331067771042843);
    msg.setSource(53508U);
    msg.setSourceEntity(74U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.11892313188266423);
    msg.setSource(55266U);
    msg.setSourceEntity(129U);
    msg.setDestination(24952U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.6398430269782486);
    msg.setSource(59042U);
    msg.setSourceEntity(57U);
    msg.setDestination(20103U);
    msg.setDestinationEntity(106U);
    msg.op = 42U;
    msg.system.assign("DSXZUQHBCALSQGK");
    msg.range = 0.5341304016599254;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 37113U;
    tmp_msg_0.sys.assign("PFJJNBEOTOJLTMXMTXREDSONCPSMYBXPTGIIYAOWDWEQGIWVZQNDPWLJETJNGXBSVDDZCFKWNBSVIADAUHGZFCZHVJIPMEQAKLKLYLZVLKIZUEMFHFJVFRJUDONDQOSSHYCURLKBVRYUTMBGYPCIQVUDFBXHUMGWPMSHOBFSUFEY");
    tmp_msg_0.value = 0.5354700637769619;
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
    msg.setTimeStamp(0.5124214002829989);
    msg.setSource(34803U);
    msg.setSourceEntity(45U);
    msg.setDestination(11133U);
    msg.setDestinationEntity(180U);
    msg.op = 159U;
    msg.system.assign("AZMEXGENWDYAFSHOMACVXCJFHRKGVTOHPQBKQDWZBTQMNGULKSIGXMDBLCYWHOAPAKDYVBIECWBLARMOZRPZXZUYXLVDSBXPPUUKEOMDIAPCVOJGYKLCISPCVRFKXLIRQFGEQQMSSUNUIGITVYZDQLWDJSLAZMUTBBGYYODDYHCHJIUFIZRFWQONXHWNTJTNFVFYMJTFJQCXNJXRVCZHEAILNHNWJFTHKVZGU");
    msg.range = 0.344647544796825;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 161U;
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
    msg.setTimeStamp(0.03402965049077755);
    msg.setSource(21646U);
    msg.setSourceEntity(109U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(231U);
    msg.op = 100U;
    msg.system.assign("SCHDPOGXLRKMWCAYVLHMFWFZQIGXMKLWOADDJSIXBNOOBTHMXCSUQCXDUUMRSJ");
    msg.range = 0.426685137836311;
    IMC::AcousticPingReply tmp_msg_0;
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
    msg.setTimeStamp(0.9701503590719648);
    msg.setSource(6274U);
    msg.setSourceEntity(152U);
    msg.setDestination(32248U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.7089134749049448);
    msg.setSource(59304U);
    msg.setSourceEntity(133U);
    msg.setDestination(46024U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.02149101923799701);
    msg.setSource(50380U);
    msg.setSourceEntity(154U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.1246557272272133);
    msg.setSource(46032U);
    msg.setSourceEntity(33U);
    msg.setDestination(48282U);
    msg.setDestinationEntity(113U);
    msg.list.assign("BBGOWIDQNYRJQDBCXFDNSYNTKUNLAVKGWCEATXLUVYTFIZQCGURCLEWXESNHCHKNMYRXIZRGCHBNFDVJVJEWEMSBZGVXDQYKPHAPHCOLOLYSFBSUOKHTLQRSVZGULKXUQJEEEHRNPVPCESAWRXAAJPGWSUHGXRJWVHOQVRQIAMAPDZAPSMIPSDTTMKPPJIBNVMFNWUJIQBKOULRZLFDDZXTZOXMJCUWYGT");

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
    msg.setTimeStamp(0.34285523031859466);
    msg.setSource(28201U);
    msg.setSourceEntity(225U);
    msg.setDestination(14092U);
    msg.setDestinationEntity(225U);
    msg.list.assign("OSLRRLLBMPAYAUEONKJUBIMUCPFQYGLXEJXOECZMACWFSOLPVGRNQNRSYPGBQRMGDEIKGSAPYZHWMVHRHGKWUTQDSNBUPDENKBLETKQCRWHXJOUDPKVFDVNDEMQHNLWSOTRHYIADWYHAFGSZGPOTVUUEBHCNCMDBEYYBCXYZKZPFNXEILHVFUADZFWZGWRJUFYOLOLZQPFJCTZOTKJMIJXQXQJWSNITAHQVMVIXZIJTKWXBJC");

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
    msg.setTimeStamp(0.6645046684254423);
    msg.setSource(2125U);
    msg.setSourceEntity(182U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(228U);
    msg.list.assign("LYMOMWEGNHCJOSOASKSTTYEQYOJJTYDSFZDBFGXQVEXUXPFWCONMWDKKDMTFFPBZBCICMKSSSIZHBWOWJVMREAGIOZONOKRZCTFKXRAQMCXVBVTUNZQTQGUSKVXJEVDBFSHNRLYTYFPQZCHIVQEPGRGIAWUAUEIPLXBIPEVUDXLN");

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
    msg.setTimeStamp(0.9254027339442273);
    msg.setSource(20803U);
    msg.setSourceEntity(215U);
    msg.setDestination(13304U);
    msg.setDestinationEntity(107U);
    msg.value = 32620;

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
    msg.setTimeStamp(0.5929074731575925);
    msg.setSource(51199U);
    msg.setSourceEntity(133U);
    msg.setDestination(64657U);
    msg.setDestinationEntity(221U);
    msg.value = -14329;

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
    msg.setTimeStamp(0.9035311364890497);
    msg.setSource(61130U);
    msg.setSourceEntity(171U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(98U);
    msg.value = 31956;

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
    msg.setTimeStamp(0.4351491521541311);
    msg.setSource(61749U);
    msg.setSourceEntity(54U);
    msg.setDestination(61167U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6915686741411508;

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
    msg.setTimeStamp(0.8726097493709121);
    msg.setSource(58558U);
    msg.setSourceEntity(224U);
    msg.setDestination(60764U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2906780826512477;

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
    msg.setTimeStamp(0.35412249144832664);
    msg.setSource(4307U);
    msg.setSourceEntity(111U);
    msg.setDestination(62091U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7186818258332179;

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
    msg.setTimeStamp(0.18365325089287843);
    msg.setSource(26328U);
    msg.setSourceEntity(5U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7333839949816833;

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
    msg.setTimeStamp(0.7629010163106513);
    msg.setSource(821U);
    msg.setSourceEntity(231U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(62U);
    msg.value = 0.11307264337947764;

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
    msg.setTimeStamp(0.4603658621233947);
    msg.setSource(19251U);
    msg.setSourceEntity(199U);
    msg.setDestination(56721U);
    msg.setDestinationEntity(201U);
    msg.value = 0.5717383252756113;

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
    msg.setTimeStamp(0.3022829515102001);
    msg.setSource(58872U);
    msg.setSourceEntity(126U);
    msg.setDestination(19636U);
    msg.setDestinationEntity(102U);
    msg.validity = 50780U;
    msg.type = 239U;
    msg.utc_year = 14732U;
    msg.utc_month = 151U;
    msg.utc_day = 240U;
    msg.utc_time = 0.5782269908008556;
    msg.lat = 0.06540627231295537;
    msg.lon = 0.8285202200222836;
    msg.height = 0.5677065929970796;
    msg.satellites = 237U;
    msg.cog = 0.18209679990798888;
    msg.sog = 0.06912629095174316;
    msg.hdop = 0.310734752191934;
    msg.vdop = 0.7004129053080028;
    msg.hacc = 0.3757826949477441;
    msg.vacc = 0.7084740942448419;

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
    msg.setTimeStamp(0.523200564785703);
    msg.setSource(14086U);
    msg.setSourceEntity(252U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(165U);
    msg.validity = 11495U;
    msg.type = 41U;
    msg.utc_year = 45447U;
    msg.utc_month = 85U;
    msg.utc_day = 151U;
    msg.utc_time = 0.6536730471235755;
    msg.lat = 0.25574275119337464;
    msg.lon = 0.49073496853336473;
    msg.height = 0.6548515341660223;
    msg.satellites = 132U;
    msg.cog = 0.00022294060781757885;
    msg.sog = 0.9154326499634982;
    msg.hdop = 0.17058893871276892;
    msg.vdop = 0.021560731564670643;
    msg.hacc = 0.9367196072259599;
    msg.vacc = 0.581913382740449;

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
    msg.setTimeStamp(0.011452580188279882);
    msg.setSource(62805U);
    msg.setSourceEntity(44U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(158U);
    msg.validity = 14995U;
    msg.type = 63U;
    msg.utc_year = 11719U;
    msg.utc_month = 114U;
    msg.utc_day = 250U;
    msg.utc_time = 0.3335662598946497;
    msg.lat = 0.5916672626124063;
    msg.lon = 0.9209162504559391;
    msg.height = 0.7979961314919114;
    msg.satellites = 126U;
    msg.cog = 0.5481932495293241;
    msg.sog = 0.9646115838180493;
    msg.hdop = 0.30152957499286936;
    msg.vdop = 0.3346257254851336;
    msg.hacc = 0.025567116710979443;
    msg.vacc = 0.03933926871157967;

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
    msg.setTimeStamp(0.06178343140265474);
    msg.setSource(59110U);
    msg.setSourceEntity(39U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(6U);
    msg.time = 0.23557867020987067;
    msg.phi = 0.18506436504247226;
    msg.theta = 0.08096084123663005;
    msg.psi = 0.0427823418754012;
    msg.psi_magnetic = 0.5357319639043613;

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
    msg.setTimeStamp(0.4793497685897484);
    msg.setSource(8360U);
    msg.setSourceEntity(72U);
    msg.setDestination(40190U);
    msg.setDestinationEntity(105U);
    msg.time = 0.4113541737487463;
    msg.phi = 0.43873826279840733;
    msg.theta = 0.7506930779797917;
    msg.psi = 0.04540590367777986;
    msg.psi_magnetic = 0.3362690818663453;

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
    msg.setTimeStamp(0.3275965334168055);
    msg.setSource(8377U);
    msg.setSourceEntity(113U);
    msg.setDestination(11893U);
    msg.setDestinationEntity(8U);
    msg.time = 0.7724474956641151;
    msg.phi = 0.20502057499967763;
    msg.theta = 0.8302810575810899;
    msg.psi = 0.8710399747407774;
    msg.psi_magnetic = 0.3904413762637239;

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
    msg.setTimeStamp(0.24934217427481598);
    msg.setSource(12460U);
    msg.setSourceEntity(2U);
    msg.setDestination(21817U);
    msg.setDestinationEntity(254U);
    msg.time = 0.7417094910247011;
    msg.x = 0.6709687805895259;
    msg.y = 0.8894595739196709;
    msg.z = 0.4768025246104466;
    msg.timestep = 0.7570461915328568;

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
    msg.setTimeStamp(0.11581100990737625);
    msg.setSource(36686U);
    msg.setSourceEntity(117U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(8U);
    msg.time = 0.4839598196546978;
    msg.x = 0.6809928762671966;
    msg.y = 0.9887737904644264;
    msg.z = 0.28791835350574646;
    msg.timestep = 0.3896873052009424;

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
    msg.setTimeStamp(0.2296375254890355);
    msg.setSource(45200U);
    msg.setSourceEntity(71U);
    msg.setDestination(18340U);
    msg.setDestinationEntity(23U);
    msg.time = 0.17157636973439572;
    msg.x = 0.4904780630168939;
    msg.y = 0.33655434584239086;
    msg.z = 0.768622321332461;
    msg.timestep = 0.6497349302726636;

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
    msg.setTimeStamp(0.04518525700195919);
    msg.setSource(25082U);
    msg.setSourceEntity(186U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(58U);
    msg.time = 0.8583940949801325;
    msg.x = 0.39446637832784837;
    msg.y = 0.32312597472483995;
    msg.z = 0.24554774116417177;

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
    msg.setTimeStamp(0.11666190116861763);
    msg.setSource(47030U);
    msg.setSourceEntity(11U);
    msg.setDestination(6515U);
    msg.setDestinationEntity(214U);
    msg.time = 0.17307416376352935;
    msg.x = 0.38615327834240687;
    msg.y = 0.623553643792728;
    msg.z = 0.4513667489945693;

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
    msg.setTimeStamp(0.915035403039526);
    msg.setSource(56398U);
    msg.setSourceEntity(7U);
    msg.setDestination(41790U);
    msg.setDestinationEntity(68U);
    msg.time = 0.769501414662511;
    msg.x = 0.545669336270205;
    msg.y = 0.6000731749086446;
    msg.z = 0.055329107574040526;

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
    msg.setTimeStamp(0.8283868347230414);
    msg.setSource(60592U);
    msg.setSourceEntity(71U);
    msg.setDestination(36171U);
    msg.setDestinationEntity(210U);
    msg.time = 0.18505194988528806;
    msg.x = 0.5712884274398641;
    msg.y = 0.6657211920154971;
    msg.z = 0.49224272888368126;

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
    msg.setTimeStamp(0.5911120735545818);
    msg.setSource(13886U);
    msg.setSourceEntity(168U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(132U);
    msg.time = 0.8674632736137349;
    msg.x = 0.6179305440137048;
    msg.y = 0.8384587942799627;
    msg.z = 0.9608634156605094;

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
    msg.setTimeStamp(0.9330469186636193);
    msg.setSource(9683U);
    msg.setSourceEntity(29U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(230U);
    msg.time = 0.7984840685907297;
    msg.x = 0.45759809889046155;
    msg.y = 0.7373360565213369;
    msg.z = 0.4220041446437174;

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
    msg.setTimeStamp(0.5076128230923016);
    msg.setSource(51014U);
    msg.setSourceEntity(215U);
    msg.setDestination(44001U);
    msg.setDestinationEntity(13U);
    msg.time = 0.7108708106280972;
    msg.x = 0.6454682242274077;
    msg.y = 0.36304240453243175;
    msg.z = 0.39896326950820393;

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
    msg.setTimeStamp(0.7348106450779586);
    msg.setSource(53346U);
    msg.setSourceEntity(173U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(100U);
    msg.time = 0.9129047104466639;
    msg.x = 0.8086162267330242;
    msg.y = 0.2616614637234318;
    msg.z = 0.7194644998090494;

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
    msg.setTimeStamp(0.5177315957830133);
    msg.setSource(63182U);
    msg.setSourceEntity(59U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(228U);
    msg.time = 0.77794001610941;
    msg.x = 0.2702768068962468;
    msg.y = 0.3630158645250503;
    msg.z = 0.19287370393306624;

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
    msg.setTimeStamp(0.8373891660396207);
    msg.setSource(41144U);
    msg.setSourceEntity(161U);
    msg.setDestination(3573U);
    msg.setDestinationEntity(127U);
    msg.validity = 135U;
    msg.x = 0.4924009011286816;
    msg.y = 0.013764052356977419;
    msg.z = 0.9683984712624323;

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
    msg.setTimeStamp(0.5259644219578627);
    msg.setSource(42996U);
    msg.setSourceEntity(112U);
    msg.setDestination(38864U);
    msg.setDestinationEntity(132U);
    msg.validity = 232U;
    msg.x = 0.3384789071242108;
    msg.y = 0.20453513228520626;
    msg.z = 0.6789047712068299;

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
    msg.setTimeStamp(0.5356139754505885);
    msg.setSource(29133U);
    msg.setSourceEntity(3U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(251U);
    msg.validity = 246U;
    msg.x = 0.6003540680459539;
    msg.y = 0.45608791021166617;
    msg.z = 0.6020825789250799;

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
    msg.setTimeStamp(0.93355868957937);
    msg.setSource(45431U);
    msg.setSourceEntity(104U);
    msg.setDestination(51467U);
    msg.setDestinationEntity(3U);
    msg.validity = 82U;
    msg.x = 0.04020402624447372;
    msg.y = 0.17984422965840718;
    msg.z = 0.9452513796433005;

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
    msg.setTimeStamp(0.2648905671549082);
    msg.setSource(3501U);
    msg.setSourceEntity(253U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(4U);
    msg.validity = 59U;
    msg.x = 0.28982456803451107;
    msg.y = 0.9824489155097921;
    msg.z = 0.5500145496513491;

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
    msg.setTimeStamp(0.12097455506409815);
    msg.setSource(35766U);
    msg.setSourceEntity(198U);
    msg.setDestination(27728U);
    msg.setDestinationEntity(57U);
    msg.validity = 191U;
    msg.x = 0.8125755794138125;
    msg.y = 0.04887419046781183;
    msg.z = 0.6106801629167335;

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
    msg.setTimeStamp(0.7032298632246301);
    msg.setSource(27336U);
    msg.setSourceEntity(132U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(219U);
    msg.time = 0.26632986198249897;
    msg.x = 0.3847157664882266;
    msg.y = 0.3091341131012022;
    msg.z = 0.1190715861235987;

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
    msg.setTimeStamp(0.8440530951129313);
    msg.setSource(3723U);
    msg.setSourceEntity(0U);
    msg.setDestination(16077U);
    msg.setDestinationEntity(95U);
    msg.time = 0.031518754535979965;
    msg.x = 0.25525322428164965;
    msg.y = 0.6368541204336263;
    msg.z = 0.06342075145190029;

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
    msg.setTimeStamp(0.9813381682798837);
    msg.setSource(26419U);
    msg.setSourceEntity(7U);
    msg.setDestination(48728U);
    msg.setDestinationEntity(79U);
    msg.time = 0.5231673535975814;
    msg.x = 0.6939702508275899;
    msg.y = 0.6766681569751545;
    msg.z = 0.3518982276398117;

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
    msg.setTimeStamp(0.21160234481358609);
    msg.setSource(25564U);
    msg.setSourceEntity(167U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(130U);
    msg.validity = 83U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.22558424698261414;
    tmp_msg_0.y = 0.02470237587818025;
    tmp_msg_0.z = 0.8312204575798656;
    tmp_msg_0.phi = 0.48084323602180146;
    tmp_msg_0.theta = 0.07139386546772242;
    tmp_msg_0.psi = 0.0032572718200303274;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7974437394018195;

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
    msg.setTimeStamp(0.9810472805444431);
    msg.setSource(26178U);
    msg.setSourceEntity(254U);
    msg.setDestination(2U);
    msg.setDestinationEntity(182U);
    msg.validity = 214U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9966731211958496;
    tmp_msg_0.y = 0.20102329604834623;
    tmp_msg_0.z = 0.48433746753264906;
    tmp_msg_0.phi = 0.42033894578447406;
    tmp_msg_0.theta = 0.24852190417329068;
    tmp_msg_0.psi = 0.909449092186557;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7142906983749098;

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
    msg.setTimeStamp(0.650570728002041);
    msg.setSource(65373U);
    msg.setSourceEntity(28U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(22U);
    msg.validity = 165U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.005677629148896357;
    tmp_msg_0.y = 0.45593361710545344;
    tmp_msg_0.z = 0.02034843169773093;
    tmp_msg_0.phi = 0.4828893265497235;
    tmp_msg_0.theta = 0.09066351726008082;
    tmp_msg_0.psi = 0.9358163003926323;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3086012322916645;
    tmp_msg_1.beam_height = 0.7146749054628941;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5892325386482217;

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
    msg.setTimeStamp(0.7804317310953173);
    msg.setSource(5290U);
    msg.setSourceEntity(32U);
    msg.setDestination(38911U);
    msg.setDestinationEntity(33U);
    msg.value = 0.5859115509611488;

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
    msg.setTimeStamp(0.32733889744891165);
    msg.setSource(18970U);
    msg.setSourceEntity(186U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(197U);
    msg.value = 0.38970393472808995;

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
    msg.setTimeStamp(0.6003064498783113);
    msg.setSource(60473U);
    msg.setSourceEntity(107U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(208U);
    msg.value = 0.6322228633751668;

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
    msg.setTimeStamp(0.7314881395429771);
    msg.setSource(20128U);
    msg.setSourceEntity(53U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(187U);
    msg.value = 0.021702242715227915;

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
    msg.setTimeStamp(0.5342817697222155);
    msg.setSource(34870U);
    msg.setSourceEntity(42U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(47U);
    msg.value = 0.45543643266623257;

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
    msg.setTimeStamp(0.044074400951317094);
    msg.setSource(46131U);
    msg.setSourceEntity(9U);
    msg.setDestination(21230U);
    msg.setDestinationEntity(215U);
    msg.value = 0.858694277242188;

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
    msg.setTimeStamp(0.42390643814910745);
    msg.setSource(27431U);
    msg.setSourceEntity(214U);
    msg.setDestination(6140U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7932926750501309;

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
    msg.setTimeStamp(0.8639518233801106);
    msg.setSource(41364U);
    msg.setSourceEntity(202U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(230U);
    msg.value = 0.3389357587792484;

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
    msg.setTimeStamp(0.6230877934615446);
    msg.setSource(10958U);
    msg.setSourceEntity(41U);
    msg.setDestination(32138U);
    msg.setDestinationEntity(217U);
    msg.value = 0.05827987514557165;

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
    msg.setTimeStamp(0.809461342408729);
    msg.setSource(26213U);
    msg.setSourceEntity(92U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(171U);
    msg.value = 0.21094409125138058;

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
    msg.setTimeStamp(0.5788973723565949);
    msg.setSource(4563U);
    msg.setSourceEntity(135U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(185U);
    msg.value = 0.8647794429753995;

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
    msg.setTimeStamp(0.3177398321822559);
    msg.setSource(62001U);
    msg.setSourceEntity(87U);
    msg.setDestination(48900U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6805308322959402;

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
    msg.setTimeStamp(0.8832794063606653);
    msg.setSource(17102U);
    msg.setSourceEntity(56U);
    msg.setDestination(25915U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8385529685233537;

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
    msg.setTimeStamp(0.40816833665257557);
    msg.setSource(16246U);
    msg.setSourceEntity(33U);
    msg.setDestination(53165U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0587123079291737;

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
    msg.setTimeStamp(0.31699153844496575);
    msg.setSource(56188U);
    msg.setSourceEntity(113U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9177893111158852;

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
    msg.setTimeStamp(0.5665196674270283);
    msg.setSource(57581U);
    msg.setSourceEntity(0U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(180U);
    msg.value = 0.20533026302068702;

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
    msg.setTimeStamp(0.7414923414716313);
    msg.setSource(58376U);
    msg.setSourceEntity(70U);
    msg.setDestination(55972U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9747918335655403;

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
    msg.setTimeStamp(0.07369978756893181);
    msg.setSource(30685U);
    msg.setSourceEntity(209U);
    msg.setDestination(52554U);
    msg.setDestinationEntity(106U);
    msg.value = 0.34292739278267903;

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
    msg.setTimeStamp(0.23444470922851046);
    msg.setSource(32886U);
    msg.setSourceEntity(166U);
    msg.setDestination(48724U);
    msg.setDestinationEntity(174U);
    msg.value = 0.11224996983592628;

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
    msg.setTimeStamp(0.38268936319337343);
    msg.setSource(4989U);
    msg.setSourceEntity(1U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(201U);
    msg.value = 0.21509039881237968;

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
    msg.setTimeStamp(0.652790223515766);
    msg.setSource(53027U);
    msg.setSourceEntity(251U);
    msg.setDestination(6345U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5294172626263005;

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
    msg.setTimeStamp(0.8517935970593248);
    msg.setSource(24387U);
    msg.setSourceEntity(209U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7266046735439384;

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
    msg.setTimeStamp(0.037246573789406434);
    msg.setSource(35611U);
    msg.setSourceEntity(34U);
    msg.setDestination(43831U);
    msg.setDestinationEntity(112U);
    msg.value = 0.02937009053512496;

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
    msg.setTimeStamp(0.907350615007014);
    msg.setSource(6023U);
    msg.setSourceEntity(174U);
    msg.setDestination(2899U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5373493634837418;

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
    msg.setTimeStamp(0.3618955348252224);
    msg.setSource(16033U);
    msg.setSourceEntity(55U);
    msg.setDestination(18662U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.8189511992888191;
    msg.speed = 0.6966567405490813;
    msg.turbulence = 0.9428033723274738;

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
    msg.setTimeStamp(0.27324305475666255);
    msg.setSource(38368U);
    msg.setSourceEntity(181U);
    msg.setDestination(15497U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.7257672917777799;
    msg.speed = 0.2248891483241534;
    msg.turbulence = 0.438554586139866;

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
    msg.setTimeStamp(0.46560657288356433);
    msg.setSource(48965U);
    msg.setSourceEntity(104U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(189U);
    msg.direction = 0.8375608967055653;
    msg.speed = 0.8936628631807644;
    msg.turbulence = 0.44472231298156406;

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
    msg.setTimeStamp(0.8813302969964818);
    msg.setSource(47835U);
    msg.setSourceEntity(93U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(225U);
    msg.value = 0.3794654366770034;

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
    msg.setTimeStamp(0.40088804109908893);
    msg.setSource(4227U);
    msg.setSourceEntity(147U);
    msg.setDestination(30759U);
    msg.setDestinationEntity(55U);
    msg.value = 0.1578727818783069;

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
    msg.setTimeStamp(0.12221397606732654);
    msg.setSource(8277U);
    msg.setSourceEntity(187U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(59U);
    msg.value = 0.4282323407990355;

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
    msg.setTimeStamp(0.9044165829773511);
    msg.setSource(49560U);
    msg.setSourceEntity(253U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(109U);
    msg.value.assign("QWZBQXDZKPJPJHQIXBGDQSDWICBSSOHYTOICZXHKMXXNRTXPZMBGGFHTUIVCADFBFKFTICJPMAYSVCPERQYQQGVRYMUNRRLFVHGTDUOLCADORIERUHOBWMKADZLJFZEOASYZFXCOIJNXXFPNGK");

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
    msg.setTimeStamp(0.4253616899838695);
    msg.setSource(38452U);
    msg.setSourceEntity(47U);
    msg.setDestination(4289U);
    msg.setDestinationEntity(109U);
    msg.value.assign("LRDHVUBXLMIHVUVQDYJAIXMWWMBSTIEMATTYZCCHFDRNNCROGFMTREHRJTHLEDDNXUBPOFIWIQPKSQBHR");

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
    msg.setTimeStamp(0.45287154491330184);
    msg.setSource(27097U);
    msg.setSourceEntity(28U);
    msg.setDestination(48398U);
    msg.setDestinationEntity(170U);
    msg.value.assign("XTTJPPGKCPDTUDZXTFEWQRGYUCKMHOYFHUKWLWJSBEJBEIRBXZUQVEDCOLYFGTNJYODMEARSSDCSSDFQKYPLIGXVNCCOXBNOXXANRYCMQQJFMQWZYZTKDYSEMKWUTVYONHVPRNAZLBUEHLFZVKMTOIGTULOVZFIBSFPIUNYRQSQIHAAVVMLBAJFDJCHTPMIREKGNVWR");

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
    msg.setTimeStamp(0.5032048199914065);
    msg.setSource(32852U);
    msg.setSourceEntity(38U);
    msg.setDestination(18888U);
    msg.setDestinationEntity(45U);
    const char tmp_msg_0[] = {-39, -60, -69, 53, 106, -33, -90, 1, -40, 118, -125, 21, 113, 4, 90, 37, 77, -42, -101, -121, -41, 38, -14, 86, -107, 78, -59, 18, -31, -108, -18, 125, -125, 71, -59, 42, -76, 114, 48, -77, -41, 73, -94, 97, 85, 117, -34, 126, 82, 102, 38, -82, -123, -80, 85, 32, 116, -6, 105, 98, -103, 37, 31, 101, -69, -127, -49, 13, 90, 109, -115, -78, 123, -62, -5, -8, 93, -45, 35, -69, 10, -57, 39, -48, 62, -62, -55, 38, -87, -46, -111, 4, -33, -81, 109, 54, 31, -12, -96, -19, 48, -114, -1, -116, 22, -20, -11, -96, 92, 17, -94, -16, 40, -56, -109, 16, -43, -68, 39, -63, 92, -7, -39, 80, 11, 104, 71, -65, 112, -95, -124, 59, -42, 69, -105, -54, 81, -70, 65, 18, 106, 32, -116, -1, 22, -109, 53, 17, 69, 52, -20, 41, -75, 16, -109, -91, -85, 45, -6, 21, -20, 35, 103, 107, -12, -100, -48, -106, -28, 24, -18, -32, 2, -70, 98, 76, -66, -67, -7, 15, -93, 118, -82, 5, 89, 56, -98, -114, 83, -86, 48, 106, 71, -48, 31, 17, 119, 71, -112, 125, 68, -98, 77, -45, -127, -43};
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
    msg.setTimeStamp(0.5167096623127132);
    msg.setSource(34731U);
    msg.setSourceEntity(134U);
    msg.setDestination(43390U);
    msg.setDestinationEntity(139U);
    const char tmp_msg_0[] = {-61, 41, 25, -7, 78, -1, 65, -103, 96, -31, 31, 7, -125, -22, -9, 104, 107, -46, -83, 29, -53, -20, 120, 3, -18, 60, 115, -113, 99, -76, 82, 34, 83, 65, 47, -74, 1, -64, -57, 22, -93, -27, -111, 89, -113, -91, 102, -19, -118, -35, -25, 72, 38, 60, -32, -120, 89, 7, -15, 97, -33, 51, -39, 89, -6, -116, 61, -30, 33, 64, -122, -93, 105, -78, -82, 42, 33, 4, -109, -41, -101, 27};
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
    msg.setTimeStamp(0.02924411673168681);
    msg.setSource(64765U);
    msg.setSourceEntity(159U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(169U);
    const char tmp_msg_0[] = {-69, 111, 84, 1, 9, -120, -118, 4, 126, 9, -11, -125, -44, -105, -107, 39, 113, -97, -92, -63, -62, 46, -33, -86, 98, -97, 104, 96, -119, 116, -113, -34, 51, -5, -101, 36, 64, -112, 41, -73, 45, -124, 78, 124, 27, -8, -55, -85, 50, -107, 30, 55, 93, 126, -105, 50, -114, 43, -85, 108, -20, -94, 24, -41, -44, -100, 21, -91, -69, -97, -108, -117, -118, 63, 53, -127, 16, -124, -16, 42, 22, -77, -34, 95, -128, 52, 17, -122, -74, -115, 27, -44, 90, 16, -120, 39, -13, 0, 48, -39, 47, -56, -23, -98, 64, 81, 9, 52, 13, 126, 123, 74, -14, 80, 48, -8, 14, -25, 99, -27, 7, 106, 114, 90, -100, -91, -3, -7, 28, -19, 81, -126, 47, 119, 120, -72, 47, -32, -62, 77, -23, 100, -62, -50, 109, 8, 62, -53, -81, 18, -108, 117, -67, 42, 27, -110, -56, -25, 58, -47, -27, -82, -33, 27, 57, 5, -94, 84, 9, -31, 15, -13, -15, 63, -99, 38, 78, -26, -47, 12, 89, -102, 59, -127};
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
    msg.setTimeStamp(0.4798897809633874);
    msg.setSource(8944U);
    msg.setSourceEntity(129U);
    msg.setDestination(32840U);
    msg.setDestinationEntity(80U);
    msg.frequency = 191903675U;
    msg.min_range = 28415U;
    msg.max_range = 25355U;

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
    msg.setTimeStamp(0.34893814671004963);
    msg.setSource(39741U);
    msg.setSourceEntity(101U);
    msg.setDestination(27902U);
    msg.setDestinationEntity(125U);
    msg.frequency = 2547024286U;
    msg.min_range = 2432U;
    msg.max_range = 38257U;

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
    msg.setTimeStamp(0.4150119665851846);
    msg.setSource(15841U);
    msg.setSourceEntity(166U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(59U);
    msg.frequency = 1701928991U;
    msg.min_range = 17478U;
    msg.max_range = 40308U;

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
    msg.setTimeStamp(0.28287483447206563);
    msg.setSource(45939U);
    msg.setSourceEntity(150U);
    msg.setDestination(41180U);
    msg.setDestinationEntity(62U);
    msg.type = 58U;
    msg.frequency = 2341340396U;
    msg.min_range = 61909U;
    msg.max_range = 52078U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.663146121746682;
    const char tmp_msg_0[] = {77, 52, -39, -15, 107, -106, 58, -47, -59, -88, -24, 38, 0, 15, -33, 34, -39, 29, 62, -43, -9, 105, 50, -60, 27, 38, -54, -1, -123, 76, 36, 59, 116, 57, 31, 85, 58, 121, 114, 72, -90, -110, 90, -38, -64, 58, 106, 27, -64, 107, -114, -14, 37, 13, -65, -21, -36, -127, -96, 81, -27, -118, 87, 89, 119, -107, -123, -118, 21, -47, -21, 59, 40, 10, -11, -77, 86, 107, 107, -69, 103, 50, -103, -25, 124, 119, 52, -28, 82, -14, -99, -61, -47, -53, -102, 12, -116, 12, 115, 105, -102, -24, -24, -82, 32, 88, 6, -62, -89, -67, -119, -82, -105, -7, 41, 47, 108, 70, 21, 29, -21, -103, -98, -34, 121, -2, -10, 64, 81, 85, 85, -36, -32, -64, -28, 51, -50, 15, 48, 78, -78, -84, -61, -116, -57, 12, -107, -127, -89, 33, -35, 107, 96, -126, -99, 126, 89, 96, -104, 13, 126, 73, -70, 112, 108, 106, 113, -16, 109, 0, -94, -52, -108, -91, 83, -101, -123, 8, -105, 76, -14, 32, 19, -80, 113, -86, -124, -124, -96, -60, -80, -102, -82, -17, -54, -29, 114, 53, -29, 66, 33, -86, -17, 125, 84, -120, -68, 14, 109, 49, 91, -20, 34, -5, -52, 88, -2, -103, -125, 99, -55, -65, -103, -126, -63, 10, 126, 0, 37, -10, -91, 20, -14, 88, -37, -7, -46, 62, -109, -40, -1, -16, 80};
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
    msg.setTimeStamp(0.7845650285725454);
    msg.setSource(41774U);
    msg.setSourceEntity(202U);
    msg.setDestination(54085U);
    msg.setDestinationEntity(51U);
    msg.type = 65U;
    msg.frequency = 1203395630U;
    msg.min_range = 49481U;
    msg.max_range = 23939U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.7095932473280002;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6671378352281178;
    tmp_msg_0.beam_height = 0.935871977239124;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {37, -111, 17, -12, 15, 100, -79, 22, 101, -21, -44, -12, 61, -123, -77, 97, -36, -109, -24, 68, 9, -61, 90, 65, -115, -26, 59, -19, -7, -111, -77, -44, -97, -45, -63, -41, -112, 62, -103, -18, 6, 37, -5, -15, -30, -89, 46, 19, 59, -99, 19, 94, -119, 118, -59, 41, 88, -117, -83, 107, -71, -112, -37, -39, 75, 65, 94, -57, 108, -95, 123, -29, -122, 54, 3, 28, 21, 107, -46, 7, 60, -39, -124, 50, -29, -31, -35, 81, 30, -127, -35, -73, -36, -53, -51, 124, -103, -71, 46, 19, -100, 1, -58, -27, 106, -64, -128, -40, -97, -35, -90, -93, 0, 68, -25, -105, 68, 70, 121, -1, -40, -58, 74, -27, -50, -81, -115, -70, 114, -109, -42, -95, 100, -8, -49, -105, -63, -72, 108, -72, -53, -43, -41, -45, 87, -103, 24, 72, -81, -127, -60, 59, -44, -112, 69, 84, 12, 90, 9, -20, -14, 116, 13, -82, -88, 13, -94, -104, 6, -65, -104, 67, -44, 40, -77, 101, -9, -101, -3, -31, 106, -127, -123, 62, -98, -64, 49, 0, 83, 88, 88, 33, 119, -71, 25, -105, 6, 95, 68, -1, 112, -95, 56, 73, 71, -51, -29, 12, 35, 5, 91, -86, -56, -15, -104, 123, -93, 0, -45, 98, -22, 24, -128};
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
    msg.setTimeStamp(0.6708468441135298);
    msg.setSource(41454U);
    msg.setSourceEntity(126U);
    msg.setDestination(45466U);
    msg.setDestinationEntity(104U);
    msg.type = 191U;
    msg.frequency = 1728161745U;
    msg.min_range = 4850U;
    msg.max_range = 49017U;
    msg.bits_per_point = 58U;
    msg.scale_factor = 0.5005510456617615;
    const char tmp_msg_0[] = {-9, -44, -33, -18, 118, 14, 2, 73, 72, -46, -101, 124, 124, 8, 100, 102, 116, -2, -84, 109, -23, 15, -109, 15, -93, 77, 49, -85, 70, 22, -54, -23, -96, -101, 61, 56, -77, 25, -105, 26, 34, -20, -119, -99, 38, -10, -54, -118, 93, -1, 10, -16, 52, 37, 42, -32, 38, 95, -10, 43, -37, -85, 27, 12, -27, 4, -25, 48, -82, -84, 22, -29, 12, 20, -23, -15, -103, 113, 75, 121, -32, -20, -5, 19, -10, -13, 8, -27, 10, -67, -107, -27, 44, -20, 90, 38, 79, 25, 88, -101, 103, -66, -86, 28, 56, 120, 115, -84, -110, -112, -16, -42, 7};
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
    msg.setTimeStamp(0.832388221121362);
    msg.setSource(16491U);
    msg.setSourceEntity(230U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.01092209568466529);
    msg.setSource(40924U);
    msg.setSourceEntity(160U);
    msg.setDestination(2709U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.5046206924893317);
    msg.setSource(55851U);
    msg.setSourceEntity(80U);
    msg.setDestination(50832U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.16733630048161596);
    msg.setSource(39783U);
    msg.setSourceEntity(201U);
    msg.setDestination(22059U);
    msg.setDestinationEntity(61U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.8385578358174132);
    msg.setSource(9141U);
    msg.setSourceEntity(104U);
    msg.setDestination(13489U);
    msg.setDestinationEntity(108U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.28596805863662356);
    msg.setSource(52215U);
    msg.setSourceEntity(239U);
    msg.setDestination(42292U);
    msg.setDestinationEntity(233U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.8254004108532805);
    msg.setSource(29770U);
    msg.setSourceEntity(64U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7976963778961853;
    msg.confidence = 0.4878079343632914;
    msg.opmodes.assign("AXHIDLEUOFXLYGRDDQYEDQERGWBJQLYREDLPSTHBDTVUGZGFKDCSGZIDWXNHCQDTRLECWVWBLFAWNKOSNRCCVANNTBGJIRBHWEETGPCXUOCOGHNKBMNLIXNJWHMFMJYAQHQNZBMOOANQFQKCOB");

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
    msg.setTimeStamp(0.9690773050054292);
    msg.setSource(57217U);
    msg.setSourceEntity(82U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(215U);
    msg.value = 0.4200429690447566;
    msg.confidence = 0.287541047271204;
    msg.opmodes.assign("UYQSEYCYWENTZSLAFKHERHNTPTMZHJULADPOMAAWXZDGRKGOVCJXRKGTXGEDRQWIKYSGKZYFCNSYCMSBFQIXDIBOEBFVLLRTDZAVMMTBANFDPOXBSXUCOKUNFWIBBHICZVEVFPLBNUCVWJVHWGQXSBLXKEXADPNOTLAHWJILIGFIUUZJ");

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
    msg.setTimeStamp(0.7816524243492003);
    msg.setSource(15227U);
    msg.setSourceEntity(132U);
    msg.setDestination(27230U);
    msg.setDestinationEntity(178U);
    msg.value = 0.5076683659963689;
    msg.confidence = 0.8849937081452023;
    msg.opmodes.assign("PVZYKFSYQUDCBHCEUYOTAAWRCNLBWHZYFXVZFSVNMWLUPOADZRZHGSTTMMOMGEEBXYSMWHUXVYINAXFLJGMFTBGYROXKGKHRXKKRGIIVFDEKJJQQDGRQMINEUOSIPTZOLRWTOVDSSPGMJIAYELLQVAQIPCBXFCRKJHDILHXSBIBWZJSWAFUOVAHUZDORLJWQPZJEZDPUWKCKLGTDPFCNFJBSBUNKVXENQMLBQTEWPNDTIR");

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
    msg.setTimeStamp(0.9812325910309473);
    msg.setSource(9925U);
    msg.setSourceEntity(169U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(28U);
    msg.itow = 524626292U;
    msg.lat = 0.8327496725416395;
    msg.lon = 0.5913855712390493;
    msg.height_ell = 0.4497668167610418;
    msg.height_sea = 0.2708660010909394;
    msg.hacc = 0.5821410463544974;
    msg.vacc = 0.29491950091350194;
    msg.vel_n = 0.4362404866097578;
    msg.vel_e = 0.9622033303371739;
    msg.vel_d = 0.5785601937309084;
    msg.speed = 0.1169522868619679;
    msg.gspeed = 0.900056716127746;
    msg.heading = 0.42032181094646937;
    msg.sacc = 0.39667658656895777;
    msg.cacc = 0.29049265896887233;

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
    msg.setTimeStamp(0.9091983605604333);
    msg.setSource(31900U);
    msg.setSourceEntity(200U);
    msg.setDestination(9658U);
    msg.setDestinationEntity(74U);
    msg.itow = 273706889U;
    msg.lat = 0.27307327509169144;
    msg.lon = 0.5709312992108662;
    msg.height_ell = 0.5547384979315931;
    msg.height_sea = 0.13858648532397033;
    msg.hacc = 0.7968870288334969;
    msg.vacc = 0.9732062276107559;
    msg.vel_n = 0.2784967307550348;
    msg.vel_e = 0.5348037200055549;
    msg.vel_d = 0.08088388439515681;
    msg.speed = 0.02312748613333082;
    msg.gspeed = 0.8037821650949867;
    msg.heading = 0.049358543544828604;
    msg.sacc = 0.17225896831771015;
    msg.cacc = 0.34547660318786577;

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
    msg.setTimeStamp(0.14428673263672276);
    msg.setSource(35894U);
    msg.setSourceEntity(27U);
    msg.setDestination(48212U);
    msg.setDestinationEntity(156U);
    msg.itow = 2607492643U;
    msg.lat = 0.45817133017016665;
    msg.lon = 0.3817522223892713;
    msg.height_ell = 0.6099238041549697;
    msg.height_sea = 0.7659406489097318;
    msg.hacc = 0.9142033986454127;
    msg.vacc = 0.15596000635737994;
    msg.vel_n = 0.7991984641737636;
    msg.vel_e = 0.384258418645286;
    msg.vel_d = 0.8308941494868708;
    msg.speed = 0.9230015767004548;
    msg.gspeed = 0.5660332807705438;
    msg.heading = 0.7530260061581602;
    msg.sacc = 0.5899752029460702;
    msg.cacc = 0.05186773792076993;

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
    msg.setTimeStamp(0.8419184975098343);
    msg.setSource(60637U);
    msg.setSourceEntity(65U);
    msg.setDestination(30774U);
    msg.setDestinationEntity(76U);
    msg.id = 90U;
    msg.value = 0.22250119303243832;

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
    msg.setTimeStamp(0.12469788454153885);
    msg.setSource(9263U);
    msg.setSourceEntity(16U);
    msg.setDestination(26696U);
    msg.setDestinationEntity(6U);
    msg.id = 92U;
    msg.value = 0.27656705317177155;

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
    msg.setTimeStamp(0.4236414615566192);
    msg.setSource(45135U);
    msg.setSourceEntity(181U);
    msg.setDestination(64172U);
    msg.setDestinationEntity(235U);
    msg.id = 243U;
    msg.value = 0.0902842885356745;

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
    msg.setTimeStamp(0.3144118255234515);
    msg.setSource(6995U);
    msg.setSourceEntity(11U);
    msg.setDestination(51129U);
    msg.setDestinationEntity(43U);
    msg.x = 0.20015817790156687;
    msg.y = 0.7137166725533778;
    msg.z = 0.030203018077368027;
    msg.phi = 0.1850115801350598;
    msg.theta = 0.668022561790032;
    msg.psi = 0.6591310859825945;

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
    msg.setTimeStamp(0.3708135134675665);
    msg.setSource(36092U);
    msg.setSourceEntity(93U);
    msg.setDestination(10317U);
    msg.setDestinationEntity(248U);
    msg.x = 0.9078902504392322;
    msg.y = 0.880853330770416;
    msg.z = 0.8895525740017595;
    msg.phi = 0.7203281880440625;
    msg.theta = 0.07859489955997101;
    msg.psi = 0.5658946213598907;

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
    msg.setTimeStamp(0.6284986735308639);
    msg.setSource(9827U);
    msg.setSourceEntity(18U);
    msg.setDestination(10502U);
    msg.setDestinationEntity(224U);
    msg.x = 0.6472924129138719;
    msg.y = 0.49557043401038636;
    msg.z = 0.9592153136642768;
    msg.phi = 0.6787476983159868;
    msg.theta = 0.3087997759831599;
    msg.psi = 0.637517514171641;

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
    msg.setTimeStamp(0.5413543817562485);
    msg.setSource(25499U);
    msg.setSourceEntity(76U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(173U);
    msg.beam_width = 0.08088522786634966;
    msg.beam_height = 0.6010783648392017;

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
    msg.setTimeStamp(0.028600252616689525);
    msg.setSource(27718U);
    msg.setSourceEntity(243U);
    msg.setDestination(23070U);
    msg.setDestinationEntity(25U);
    msg.beam_width = 0.6604101922572494;
    msg.beam_height = 0.8855235326141894;

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
    msg.setTimeStamp(0.6679228254448948);
    msg.setSource(30075U);
    msg.setSourceEntity(47U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(9U);
    msg.beam_width = 0.623822871672191;
    msg.beam_height = 0.5922534604399076;

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
    msg.setTimeStamp(0.5066287937387656);
    msg.setSource(42984U);
    msg.setSourceEntity(68U);
    msg.setDestination(15056U);
    msg.setDestinationEntity(222U);
    msg.sane = 171U;

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
    msg.setTimeStamp(0.19405607262985447);
    msg.setSource(31062U);
    msg.setSourceEntity(221U);
    msg.setDestination(34672U);
    msg.setDestinationEntity(145U);
    msg.sane = 68U;

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
    msg.setTimeStamp(0.631959109133489);
    msg.setSource(34809U);
    msg.setSourceEntity(2U);
    msg.setDestination(36185U);
    msg.setDestinationEntity(24U);
    msg.sane = 191U;

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
    msg.setTimeStamp(0.4795223445877371);
    msg.setSource(5509U);
    msg.setSourceEntity(222U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(133U);
    msg.id = 109U;
    msg.zoom = 122U;
    msg.action = 140U;

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
    msg.setTimeStamp(0.8222218294587003);
    msg.setSource(24117U);
    msg.setSourceEntity(16U);
    msg.setDestination(37226U);
    msg.setDestinationEntity(43U);
    msg.id = 127U;
    msg.zoom = 218U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.7293573244563272);
    msg.setSource(35964U);
    msg.setSourceEntity(128U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(211U);
    msg.id = 165U;
    msg.zoom = 43U;
    msg.action = 237U;

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
    msg.setTimeStamp(0.7626803984306185);
    msg.setSource(40956U);
    msg.setSourceEntity(72U);
    msg.setDestination(48375U);
    msg.setDestinationEntity(83U);
    msg.id = 233U;
    msg.value = 0.8705932356572391;

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
    msg.setTimeStamp(0.3239052920259836);
    msg.setSource(12093U);
    msg.setSourceEntity(17U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(81U);
    msg.id = 238U;
    msg.value = 0.3279855234208229;

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
    msg.setTimeStamp(0.018916602219434142);
    msg.setSource(41871U);
    msg.setSourceEntity(76U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(87U);
    msg.id = 141U;
    msg.value = 0.973912100100999;

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
    msg.setTimeStamp(0.05413891062699405);
    msg.setSource(56074U);
    msg.setSourceEntity(102U);
    msg.setDestination(5738U);
    msg.setDestinationEntity(43U);
    msg.id = 198U;
    msg.value = 0.8982301597787933;

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
    msg.setTimeStamp(0.6129880098202567);
    msg.setSource(29668U);
    msg.setSourceEntity(144U);
    msg.setDestination(27163U);
    msg.setDestinationEntity(79U);
    msg.id = 11U;
    msg.value = 0.9415501018042881;

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
    msg.setTimeStamp(0.3808113828499313);
    msg.setSource(19912U);
    msg.setSourceEntity(225U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(240U);
    msg.id = 149U;
    msg.value = 0.2741152143343518;

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
    msg.setTimeStamp(0.7222477435545718);
    msg.setSource(43133U);
    msg.setSourceEntity(38U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(248U);
    msg.id = 0U;
    msg.angle = 0.689266745064387;

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
    msg.setTimeStamp(0.13234336668791757);
    msg.setSource(20097U);
    msg.setSourceEntity(202U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(228U);
    msg.id = 15U;
    msg.angle = 0.6835813491855124;

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
    msg.setTimeStamp(0.05411893378373933);
    msg.setSource(27286U);
    msg.setSourceEntity(149U);
    msg.setDestination(52678U);
    msg.setDestinationEntity(35U);
    msg.id = 182U;
    msg.angle = 0.6446215322353285;

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
    msg.setTimeStamp(0.8710354148874373);
    msg.setSource(58641U);
    msg.setSourceEntity(122U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(231U);
    msg.op = 210U;
    msg.actions.assign("GWWBLHVJHXXXMPHRXCMTLQBGFSSQTUNZUMRWQDZGGOBSPEWMRZBAZXJKVPFKNRMYIDZRTANARNSICPZAYKLQMRGKZTVMLLEAXCGA");

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
    msg.setTimeStamp(0.7394067905356948);
    msg.setSource(3654U);
    msg.setSourceEntity(67U);
    msg.setDestination(56828U);
    msg.setDestinationEntity(113U);
    msg.op = 83U;
    msg.actions.assign("YQXPVNUWMWVYJAWGCNLBZGRFYXZNVHCGKJCXIWCMJADNHAENBDTULVFVXAMBRPTUTDWYHXFQJOAYDHZOIAUTKRFPYTYIVGVSOXWECZCBPCMSKDXRKSNNIHEASQEJQNLRGDNOWQMQBLWZPICEHEYZLPUJKZPGOUKSYPTSEJBLTJYZMHTOMPFBQHFVSJAGWKRSGXBMOPTDTIKUJLGKERIKDQINFMAXQXBVFSODIHFRURUL");

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
    msg.setTimeStamp(0.6295384400700863);
    msg.setSource(40033U);
    msg.setSourceEntity(3U);
    msg.setDestination(56030U);
    msg.setDestinationEntity(119U);
    msg.op = 178U;
    msg.actions.assign("MXEHQULEWNBRQTVNDOQBLGOSCEHSJKOBTJEVCDVDKTNHZQKPHLLXYYWZRNMUGZASAFIHPKXBNGXWGZGELEHSFUDTAOXUVOYUVZOQMDMQMFCMMJKWIAVCXQTTEYBPCGBUTAQNGIRKXNKBMWACSEXUAILLJZJVOZSDUBDTFRQ");

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
    msg.setTimeStamp(0.28680472644474764);
    msg.setSource(62737U);
    msg.setSourceEntity(97U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("VXBIMVQDVZKUFFUQESJDZOBPVBKXSCGXEYLIIPKWWTZOQSRCROPDDDWCHANPJVMMFLMLSLZYVTRBTIWHGQMVMKWABWEZTWJDQGOF");

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
    msg.setTimeStamp(0.660241948955084);
    msg.setSource(34129U);
    msg.setSourceEntity(153U);
    msg.setDestination(25533U);
    msg.setDestinationEntity(64U);
    msg.actions.assign("HOLLQOMONVNXFWRYIBADRWFLOSDJPZFRNDEXJGHOLDKSKYBBJZZGAVAEWACJNFLSUFHIDDXXWUIDHPDDRCXCJKQBKETBQSUMXEKJBZQVLLPUUHFDHYWEQFYNZVIPZMXKOBARCBINWLPAAJAGXUPLPYIUZMSKJWVGSCCXUAGWPTTTNCETMVKMQXVRTBIVTNV");

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
    msg.setTimeStamp(0.004503632753403486);
    msg.setSource(57112U);
    msg.setSourceEntity(178U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(184U);
    msg.actions.assign("HTWCCWOGXWHXUDRYPERBASZXAXTQSTTRJLXOBGXMFVJWBPOMQCGZSKBCODOACNMIMIERGTUTQDYEEIZRQAFALZRFSLFFIWLEKERUVWUOMFCKVTFIJBGKIPHNGYPBGSYLCSDYJQLEPYEXJDLPXVUAI");

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
    msg.setTimeStamp(0.6624305555358007);
    msg.setSource(723U);
    msg.setSourceEntity(175U);
    msg.setDestination(10444U);
    msg.setDestinationEntity(192U);
    msg.button = 172U;
    msg.value = 139U;

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
    msg.setTimeStamp(0.5324809426646765);
    msg.setSource(32249U);
    msg.setSourceEntity(199U);
    msg.setDestination(19002U);
    msg.setDestinationEntity(99U);
    msg.button = 206U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.11615511711287774);
    msg.setSource(63718U);
    msg.setSourceEntity(100U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(189U);
    msg.button = 226U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.2008455142961133);
    msg.setSource(13918U);
    msg.setSourceEntity(96U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(98U);
    msg.op = 88U;
    msg.text.assign("FOXVLZQVIQJSKFCVEXYIQUZMXGXCYVIVKMQWLAVUKXUUAGNRMCTNBYHMFQLPONTYZJPAQYSCNRSJWVGBTLFSDHUOKRZYBDENIDOJEIKSWPBWZAGHWTVNCLWTDXYSTQVCJARLHJPKGRKBPWEQNXKSWBRSRDOZIYCXTMLRUFMEUBKDORIPUELQZGPPMHGDOAYNBAICFFAAUECTYMZJSINOXFIEPCUQHFVAEBDWLKDZFHXGHHHZTSWMJTB");

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
    msg.setTimeStamp(0.3561577862969565);
    msg.setSource(39059U);
    msg.setSourceEntity(153U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(217U);
    msg.op = 144U;
    msg.text.assign("KCJGOCBHPEPNUWUOMZELWVRDSBOOX");

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
    msg.setTimeStamp(0.18017572851355523);
    msg.setSource(58812U);
    msg.setSourceEntity(158U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(74U);
    msg.op = 171U;
    msg.text.assign("VSYMVTTLDKYKUWXYZDQBGFTTVYBRHXUKFSHLAASZCSHGWKLGBEQFOPQLJXEFJUCINQBSRBRPTJTGPRDZWUJWHAXEFGKIPIPMWLAUASTXVDUCAFXVLMTGYJEMOIYXKGHIKJPMJVYWDZSZOETBIIJOCHLG");

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
    msg.setTimeStamp(0.3145763375558023);
    msg.setSource(64442U);
    msg.setSourceEntity(47U);
    msg.setDestination(53179U);
    msg.setDestinationEntity(17U);
    msg.op = 75U;
    msg.time_remain = 0.8638709334880739;
    msg.sched_time = 0.2047093521876885;

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
    msg.setTimeStamp(0.02381959309531334);
    msg.setSource(60579U);
    msg.setSourceEntity(223U);
    msg.setDestination(3572U);
    msg.setDestinationEntity(113U);
    msg.op = 81U;
    msg.time_remain = 0.8743932943368923;
    msg.sched_time = 0.03306083072631416;

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
    msg.setTimeStamp(0.23066964243654497);
    msg.setSource(12689U);
    msg.setSourceEntity(90U);
    msg.setDestination(28183U);
    msg.setDestinationEntity(119U);
    msg.op = 245U;
    msg.time_remain = 0.0228291142210989;
    msg.sched_time = 0.959186961018479;

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
    msg.setTimeStamp(0.9598310307726731);
    msg.setSource(46054U);
    msg.setSourceEntity(49U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(83U);
    msg.name.assign("JZASJYEXAGKHVRDQKLOQURHSIBPSQVBYWYPWPMLIDNDZGWCFASTWAKEGWCVSAXSINPRRHNMFREFZFYHLUUFQPAVOCPORNUUDAD");
    msg.op = 156U;
    msg.sched_time = 0.6174398019941166;

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
    msg.setTimeStamp(0.5512855274271563);
    msg.setSource(52112U);
    msg.setSourceEntity(208U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(10U);
    msg.name.assign("NUDAQJXABWVSVSZEPEYUNNVGZMZWAGOJOHSZXXIGCSKCHZLCXRBUIYRMIERPMHTNBHVPORKBLMOQIJLETVIIUBGNXIJOMECKGNJGONODRYZPKDARPMPYSQGUAQLJFYYIBORLMHLFCZDWKSWKEFNRB");
    msg.op = 188U;
    msg.sched_time = 0.5839017128050723;

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
    msg.setTimeStamp(0.9291524996888101);
    msg.setSource(42087U);
    msg.setSourceEntity(48U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(160U);
    msg.name.assign("NMQEVDWLWCEAAXLNCRQBGSOHRGIWUGTVDDPHDHHZKQHYVHFETNQCJVSILFQJJQKGOLKMOSZWXWVFFFIFSPUGREBGAMRPAYAUPXCBMAMCQRIKDSXHTJMBDFYWGNYJTFAGBKAWBRNKSPVVWCPTALDSBMDTCZUNWXYZEIIKRPEXJFCOLTZPJEEL");
    msg.op = 47U;
    msg.sched_time = 0.39470250739133383;

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
    msg.setTimeStamp(0.4780440357372052);
    msg.setSource(5075U);
    msg.setSourceEntity(23U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.7464518066069223);
    msg.setSource(2565U);
    msg.setSourceEntity(6U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.1536267446829277);
    msg.setSource(41490U);
    msg.setSourceEntity(105U);
    msg.setDestination(49315U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.19155573609316456);
    msg.setSource(28520U);
    msg.setSourceEntity(245U);
    msg.setDestination(32876U);
    msg.setDestinationEntity(55U);
    msg.name.assign("JTKNKTJBNFHFNZOBSPJNEAYXYCHUGMLAESQTWQGKHCKODRBEQBTLQARYGYMDGKXPLJLAWFPFTXGLBCVPSSGDMBATBNVWUGZXIESOADPDECECSUVWDOJ");
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
    msg.setTimeStamp(0.5464236086294352);
    msg.setSource(38687U);
    msg.setSourceEntity(20U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(166U);
    msg.name.assign("NTRFWAESCGVDVBBZYIOZGAMYCRXQXQTOPYICQLJAKFMSFHLHKEPXYMGEZFIY");
    msg.state = 139U;

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
    msg.setTimeStamp(0.7807434142442131);
    msg.setSource(59088U);
    msg.setSourceEntity(53U);
    msg.setDestination(25080U);
    msg.setDestinationEntity(244U);
    msg.name.assign("VJQCWOTXBIIDVHGTWYNBBBSUDJLLIGIBGNZBPOAZCYSSDIKKFTPEROLNZIKSRMHUBHXDDYFEQNNLHXETMWOHHJRKXZADCNWCABTSFWPOGWCVQMUTRFEVCJMFZAAQGJWVNGEQORNYSNKXMUULGXPIAHAXVKQQEEJRZSSKMVXEHYTWMPUMIPWQDGQZHFKMNUKIBLCQAULAOZFDJCLCDMDSAUPRGPJYHYVYTOFRRWFVJUZTYXLPZPEI");
    msg.state = 173U;

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
    msg.setTimeStamp(0.14130126979297242);
    msg.setSource(34449U);
    msg.setSourceEntity(216U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(98U);
    msg.name.assign("CARGISWPEBRCLTAXZSKDZBXMWWKVPMBYRPYOIBTFXDAJOSFQRXLEVCQHKYMCVEWYTNQDI");
    msg.value = 53U;

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
    msg.setTimeStamp(0.2444582587287486);
    msg.setSource(44057U);
    msg.setSourceEntity(169U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(32U);
    msg.name.assign("VYTJSUYQKFRPACHWYTESSSURNOMGVBWUAOXAKORDITTBQJYOGBEMTGXJGZBXJFYLHDRNPVBHAVBDMZDYQIUIDSMPNCFIKPQGWTUFEYQPQLKOCLZUJOWEHQMCEHJHZBFTSXGXZZIPRFKEGDLLSCONQIAPCXMDTCCIMYSAJVHPQXJOUQTHFNXXSCMLZALNDANKCORDALNVIIG");
    msg.value = 107U;

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
    msg.setTimeStamp(0.8989728151437978);
    msg.setSource(28290U);
    msg.setSourceEntity(243U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(226U);
    msg.name.assign("ZMUTLSRDGXKMIEMHXMHJVUFIHHJFNDEYFPUPAIZVBZBPIJXHAMLKBPXYGPQEEQNBYNCZIBYSEWQUWFRDIXWYYTXMJSUNXYWEDBBLSBXLRXFMVOSGNACDOTCMQOSPGAWRONGKAYKHSIUOONTCVNKSWWXGJJLUISUQTHMGRRQPPUPHTJAGTQLYKJGEVCFLFZBFJYROPTDWSTLDQWZCCADNFRVACDQOHZJMZHGUZRDVCFKRKIKKVAEZO");
    msg.value = 229U;

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
    msg.setTimeStamp(0.2753003293615176);
    msg.setSource(2189U);
    msg.setSourceEntity(254U);
    msg.setDestination(38838U);
    msg.setDestinationEntity(63U);
    msg.name.assign("GNJJBLNRYSOHCUKMHWZISDAKPBGIFWQZHOIEOESQCFDYZMLENYXMPUEYDRJBFQUALXGAMKNHBTIZVSXOGBMKYGTFKBIFAVHJNKINHXAPJPXEBTZTKBGUIHADWNPPXUJTKSXRCYZQNQDOUELTRQCUCLLLRWXDQRZCZSVNVOZSLNHWFOFPGTJCEMOTBDGMEMQWQYRDVZMLWKRVEBPOUW");

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
    msg.setTimeStamp(0.01989997556285583);
    msg.setSource(21459U);
    msg.setSourceEntity(118U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(19U);
    msg.name.assign("DLUJWWGIMIHBOFHVCGVGSMXMVQACGMQWCAVJNSOUGTIMQLEEHRZYOFUUQLFNGPDBTYYIBWIUWTGJNJWVCINXAYOTITLYUXALNENNKDRDAMXOJUOLJZSLESEGRSSVVVUNCKJIAHGPSMXBCTZMZOXYPE");

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
    msg.setTimeStamp(0.950134260479739);
    msg.setSource(14708U);
    msg.setSourceEntity(209U);
    msg.setDestination(34300U);
    msg.setDestinationEntity(140U);
    msg.name.assign("RUGMBGDOFXLBIWBPMJYQTDHYPAFRWXXRIWFUMFIDVTHOXOYMFDMSUZQGKVCTYUPNMVNVQERTVRKICMFNOMIQTZUXUWMPRHSTQWYLHKZGZYEVNCEYJIOXCQLDPKIHNNSABAELGRG");

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
    msg.setTimeStamp(0.910840345739346);
    msg.setSource(49340U);
    msg.setSourceEntity(14U);
    msg.setDestination(36069U);
    msg.setDestinationEntity(41U);
    msg.name.assign("DQRMCVGTTMNJKLPUBQBSJDHROWPLOKKYOIEGRAMQEHDEMHZUIKZRVBGHVYTPEGAQITZPXQKVSRBXWBAAQSPCJIFVYSKWDKNZIEGVUHXJRQFJIBLBMZEOASDWFWSFKMEOCFUAWXNJHPOQIPOIVBTBWXTNEWTJZCBSRNEJUCJZAASYCDYXYDYALMVRNNHFZOTZTXKLNYRLPYGLOGYTUULCUHIGJZFDGLCUXMVLMNFEFHQFV");
    msg.value = 220U;

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
    msg.setTimeStamp(0.7075775911780223);
    msg.setSource(29387U);
    msg.setSourceEntity(244U);
    msg.setDestination(24359U);
    msg.setDestinationEntity(238U);
    msg.name.assign("XWVPNUVIMURYAXBUCUOEFABREYGIAVUVRSQUWCGOZZDBMZEQFVOCABLFKMJGFFGXPTWNBRPCKGTAAZIFOTYIMPTSJDHYPTMHNRDHMEZBXLRSBEJPEFOXMEYUCQSVNLZJPLOJRLSZGGSNWVDWLQFLUHIYPWABDTYXBEONCKOSHGGMKDRDKQQIUNXKDJVDWKXWENCTMQWYKKELFDHPLINHXSLTIO");
    msg.value = 111U;

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
    msg.setTimeStamp(0.48748847300239906);
    msg.setSource(32895U);
    msg.setSourceEntity(89U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(92U);
    msg.name.assign("RYPSMPNLAQKWHALBGBNIKLRDOCUEAKPOEQNVDPLECTUYELGOFHVWBJOFQSAKXEVWBSOZAGUVNRQWXEJIKHVXEUUTTNKMXKSPTSTYSRDZBYIICWFYXOTGJHYYEOEAUDQMLAYXXGUVLICCFLHQJICMMRFOTZTXBJRJFVVAOBJYDPZMLLVZEHFMNSHGWXOGBMBJWRQDNSJIFGBPTVGWDTDICDNFUWWRXRPCPZZNAYSRQHUZ");
    msg.value = 205U;

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
    msg.setTimeStamp(0.43497076550133873);
    msg.setSource(4224U);
    msg.setSourceEntity(86U);
    msg.setDestination(652U);
    msg.setDestinationEntity(118U);
    msg.id = 82U;
    msg.period = 674190711U;
    msg.duty_cycle = 2994077413U;

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
    msg.setTimeStamp(0.4559571905533669);
    msg.setSource(23168U);
    msg.setSourceEntity(28U);
    msg.setDestination(56912U);
    msg.setDestinationEntity(92U);
    msg.id = 206U;
    msg.period = 2875791580U;
    msg.duty_cycle = 1545962853U;

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
    msg.setTimeStamp(0.5056121374571099);
    msg.setSource(30151U);
    msg.setSourceEntity(105U);
    msg.setDestination(2779U);
    msg.setDestinationEntity(79U);
    msg.id = 42U;
    msg.period = 604742335U;
    msg.duty_cycle = 4030481306U;

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
    msg.setTimeStamp(0.7675965418429329);
    msg.setSource(18874U);
    msg.setSourceEntity(174U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(182U);
    msg.id = 235U;
    msg.period = 1742129885U;
    msg.duty_cycle = 2381968774U;

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
    msg.setTimeStamp(0.5995085824759593);
    msg.setSource(21861U);
    msg.setSourceEntity(221U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(220U);
    msg.id = 66U;
    msg.period = 3373802840U;
    msg.duty_cycle = 1613044025U;

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
    msg.setTimeStamp(0.9455637304585616);
    msg.setSource(25756U);
    msg.setSourceEntity(83U);
    msg.setDestination(30175U);
    msg.setDestinationEntity(252U);
    msg.id = 189U;
    msg.period = 465718684U;
    msg.duty_cycle = 2136698605U;

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
    msg.setTimeStamp(0.7296308745632001);
    msg.setSource(58855U);
    msg.setSourceEntity(192U);
    msg.setDestination(64185U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.642792792077844;
    msg.lon = 0.7044126403455018;
    msg.height = 0.6166948011728477;
    msg.x = 0.6100684409189284;
    msg.y = 0.6080010435333673;
    msg.z = 0.5613535983348146;
    msg.phi = 0.6762974096547582;
    msg.theta = 0.2887415089683094;
    msg.psi = 0.7057868598700564;
    msg.u = 0.8352275557679201;
    msg.v = 0.20281524695599196;
    msg.w = 0.8859318909726096;
    msg.vx = 0.4687677118157282;
    msg.vy = 0.7811010871555818;
    msg.vz = 0.014519013245788082;
    msg.p = 0.9245518276103983;
    msg.q = 0.4141299968476494;
    msg.r = 0.8055860415123557;
    msg.depth = 0.22054716459150836;
    msg.alt = 0.8607912300980473;

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
    msg.setTimeStamp(0.6803587840100718);
    msg.setSource(52887U);
    msg.setSourceEntity(171U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.947005376835264;
    msg.lon = 0.7441656331899903;
    msg.height = 0.6463033882340647;
    msg.x = 0.42725255513576854;
    msg.y = 0.4327097576950545;
    msg.z = 0.9357928764669509;
    msg.phi = 0.915665826503424;
    msg.theta = 0.4907794767642243;
    msg.psi = 0.6340111302641466;
    msg.u = 0.8013015071069807;
    msg.v = 0.11805702804744889;
    msg.w = 0.5176881194505015;
    msg.vx = 0.2188077035693503;
    msg.vy = 0.3258033190765357;
    msg.vz = 0.7191867440415801;
    msg.p = 0.042264796073070876;
    msg.q = 0.6073839778958917;
    msg.r = 0.5259647515316695;
    msg.depth = 0.32022141773809343;
    msg.alt = 0.04308077468049765;

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
    msg.setTimeStamp(0.36037051710567214);
    msg.setSource(738U);
    msg.setSourceEntity(162U);
    msg.setDestination(12628U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.04205220132765708;
    msg.lon = 0.24526255782450768;
    msg.height = 0.6515276938436488;
    msg.x = 0.7375309022547705;
    msg.y = 0.2240470665246156;
    msg.z = 0.08077691531629871;
    msg.phi = 0.3398254903154717;
    msg.theta = 0.06872292951142189;
    msg.psi = 0.6614298583467824;
    msg.u = 0.7196933146188709;
    msg.v = 0.9784457422701172;
    msg.w = 0.8142510625947815;
    msg.vx = 0.24244468299764788;
    msg.vy = 0.527765965376974;
    msg.vz = 0.3212879915886392;
    msg.p = 0.9030274641848169;
    msg.q = 0.18055732375240086;
    msg.r = 0.97806172670346;
    msg.depth = 0.638780509227616;
    msg.alt = 0.3460223384750768;

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
    msg.setTimeStamp(0.8841190736075303);
    msg.setSource(50160U);
    msg.setSourceEntity(157U);
    msg.setDestination(3375U);
    msg.setDestinationEntity(19U);
    msg.x = 0.1825032877588909;
    msg.y = 0.5466003558331872;
    msg.z = 0.6516215457133623;

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
    msg.setTimeStamp(0.14318134231346313);
    msg.setSource(4615U);
    msg.setSourceEntity(226U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(215U);
    msg.x = 0.09419575570959393;
    msg.y = 0.9037023794567828;
    msg.z = 0.9901203632082336;

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
    msg.setTimeStamp(0.8087401196746711);
    msg.setSource(10943U);
    msg.setSourceEntity(20U);
    msg.setDestination(64316U);
    msg.setDestinationEntity(125U);
    msg.x = 0.6822431993199799;
    msg.y = 0.9754507248836937;
    msg.z = 0.7130629579478647;

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
    msg.setTimeStamp(0.8056202514277874);
    msg.setSource(49318U);
    msg.setSourceEntity(68U);
    msg.setDestination(60209U);
    msg.setDestinationEntity(123U);
    msg.value = 0.12470620438404889;

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
    msg.setTimeStamp(0.7952677886015415);
    msg.setSource(51662U);
    msg.setSourceEntity(3U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(155U);
    msg.value = 0.29183317462303593;

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
    msg.setTimeStamp(0.44363033775958427);
    msg.setSource(15690U);
    msg.setSourceEntity(106U);
    msg.setDestination(38705U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8847228718872956;

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
    msg.setTimeStamp(0.49368862777411393);
    msg.setSource(18001U);
    msg.setSourceEntity(168U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6520882380338879;

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
    msg.setTimeStamp(0.6017565890342117);
    msg.setSource(6704U);
    msg.setSourceEntity(174U);
    msg.setDestination(36884U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8997987110888064;

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
    msg.setTimeStamp(0.95370499872058);
    msg.setSource(432U);
    msg.setSourceEntity(194U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(94U);
    msg.value = 0.48514825973646114;

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
    msg.setTimeStamp(0.299038347355428);
    msg.setSource(26021U);
    msg.setSourceEntity(225U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(102U);
    msg.x = 0.3519472455071423;
    msg.y = 0.19543224083757071;
    msg.z = 0.4871850534179276;
    msg.phi = 0.31496541281864066;
    msg.theta = 0.2489916464716363;
    msg.psi = 0.005870650723017845;
    msg.p = 0.7021125336536451;
    msg.q = 0.5369550710495159;
    msg.r = 0.5468653187769033;
    msg.u = 0.6842483196360513;
    msg.v = 0.9503533540585717;
    msg.w = 0.01386130092775617;
    msg.bias_psi = 0.5136372925170781;
    msg.bias_r = 0.29112103111511445;

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
    msg.setTimeStamp(0.09809337906401594);
    msg.setSource(41614U);
    msg.setSourceEntity(148U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(37U);
    msg.x = 0.2933516680174366;
    msg.y = 0.9878695845018867;
    msg.z = 0.40606314518897635;
    msg.phi = 0.9235610187588037;
    msg.theta = 0.1970637150235819;
    msg.psi = 0.5215799056179883;
    msg.p = 0.7275808897012552;
    msg.q = 0.4556080087711575;
    msg.r = 0.6756111886998214;
    msg.u = 0.6462387368399628;
    msg.v = 0.904357457222006;
    msg.w = 0.13330627503305958;
    msg.bias_psi = 0.6654167595959527;
    msg.bias_r = 0.3239072915003086;

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
    msg.setTimeStamp(0.5197293546449567);
    msg.setSource(64649U);
    msg.setSourceEntity(132U);
    msg.setDestination(16057U);
    msg.setDestinationEntity(7U);
    msg.x = 0.5668766947853027;
    msg.y = 0.3818871165990114;
    msg.z = 0.5845479542320912;
    msg.phi = 0.7249404916260672;
    msg.theta = 0.8179810572533722;
    msg.psi = 0.1405430157433767;
    msg.p = 0.2642989266130763;
    msg.q = 0.12478711318273283;
    msg.r = 0.03489964943684687;
    msg.u = 0.6577504699016229;
    msg.v = 0.3120704409809587;
    msg.w = 0.20073646421109892;
    msg.bias_psi = 0.2651558892074767;
    msg.bias_r = 0.253431724335772;

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
    msg.setTimeStamp(0.5253016154743966);
    msg.setSource(17594U);
    msg.setSourceEntity(214U);
    msg.setDestination(57014U);
    msg.setDestinationEntity(231U);
    msg.bias_psi = 0.6568775033488795;
    msg.bias_r = 0.43111015868647473;
    msg.cog = 0.43830682905942175;
    msg.cyaw = 0.7443873991272459;
    msg.lbl_rej_level = 0.30409269873017153;
    msg.gps_rej_level = 0.45095782065409307;
    msg.custom_x = 0.9919892578539785;
    msg.custom_y = 0.6319524248894709;
    msg.custom_z = 0.6195816714345792;

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
    msg.setTimeStamp(0.8098660124981389);
    msg.setSource(25902U);
    msg.setSourceEntity(59U);
    msg.setDestination(31950U);
    msg.setDestinationEntity(59U);
    msg.bias_psi = 0.29352213787996695;
    msg.bias_r = 0.06425959496553013;
    msg.cog = 0.8193131309251731;
    msg.cyaw = 0.7481858709501944;
    msg.lbl_rej_level = 0.9708819701106968;
    msg.gps_rej_level = 0.8309459125885782;
    msg.custom_x = 0.7918805247427969;
    msg.custom_y = 0.046911477930091094;
    msg.custom_z = 0.5162468373426339;

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
    msg.setTimeStamp(0.3639057152046288);
    msg.setSource(5609U);
    msg.setSourceEntity(234U);
    msg.setDestination(21800U);
    msg.setDestinationEntity(79U);
    msg.bias_psi = 0.04720566955300132;
    msg.bias_r = 0.5869090565249854;
    msg.cog = 0.7527718631200669;
    msg.cyaw = 0.3099691881139294;
    msg.lbl_rej_level = 0.15640773706152544;
    msg.gps_rej_level = 0.9155530881092105;
    msg.custom_x = 0.42290865042898784;
    msg.custom_y = 0.23922157980383996;
    msg.custom_z = 0.22967770370196983;

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
    msg.setTimeStamp(0.6782241144736785);
    msg.setSource(31626U);
    msg.setSourceEntity(212U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.1902451781108394;
    msg.reason = 212U;

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
    msg.setTimeStamp(0.3933710122628);
    msg.setSource(17692U);
    msg.setSourceEntity(7U);
    msg.setDestination(10457U);
    msg.setDestinationEntity(74U);
    msg.utc_time = 0.9675556989485459;
    msg.reason = 52U;

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
    msg.setTimeStamp(0.977608434126657);
    msg.setSource(28867U);
    msg.setSourceEntity(143U);
    msg.setDestination(383U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.727867599036381;
    msg.reason = 14U;

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
    msg.setTimeStamp(0.5634307955535062);
    msg.setSource(45403U);
    msg.setSourceEntity(11U);
    msg.setDestination(13615U);
    msg.setDestinationEntity(207U);
    msg.id = 192U;
    msg.range = 0.342311733095754;
    msg.acceptance = 183U;

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
    msg.setTimeStamp(0.20590786652701454);
    msg.setSource(65108U);
    msg.setSourceEntity(191U);
    msg.setDestination(22507U);
    msg.setDestinationEntity(175U);
    msg.id = 123U;
    msg.range = 0.6867903057412998;
    msg.acceptance = 219U;

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
    msg.setTimeStamp(0.8967466654264623);
    msg.setSource(59627U);
    msg.setSourceEntity(182U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(30U);
    msg.id = 151U;
    msg.range = 0.5672638316784606;
    msg.acceptance = 207U;

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
    msg.setTimeStamp(0.06773296141077789);
    msg.setSource(8213U);
    msg.setSourceEntity(120U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(181U);
    msg.type = 222U;
    msg.reason = 182U;
    msg.value = 0.6796515180171226;
    msg.timestep = 0.8922596759887147;

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
    msg.setTimeStamp(0.4964141888612812);
    msg.setSource(52379U);
    msg.setSourceEntity(138U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(87U);
    msg.type = 61U;
    msg.reason = 42U;
    msg.value = 0.07971724009704773;
    msg.timestep = 0.16476301317146325;

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
    msg.setTimeStamp(0.06400756895274906);
    msg.setSource(60596U);
    msg.setSourceEntity(55U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(172U);
    msg.type = 123U;
    msg.reason = 97U;
    msg.value = 0.43849389499576197;
    msg.timestep = 0.12339031387196409;

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
    msg.setTimeStamp(0.48608056466823213);
    msg.setSource(17814U);
    msg.setSourceEntity(149U);
    msg.setDestination(46694U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.17809111225044683);
    msg.setSource(48692U);
    msg.setSourceEntity(66U);
    msg.setDestination(11842U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.30085304086045606);
    msg.setSource(6608U);
    msg.setSourceEntity(208U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.28577425706320814);
    msg.setSource(48759U);
    msg.setSourceEntity(117U);
    msg.setDestination(9533U);
    msg.setDestinationEntity(194U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WPGBCDJCFAETPLMKPSGCFGHTSSARLEZKZRFKITUVBDIQWZQFVUXWZNFNJVJXCHYIKOAAUFOGCOXYVQQRCKQEEGMVJXLNXMONGUMGKPMBNPCYPWMGZRFAQPATYBSEZBKIRXYXKPMSAUHDDYLUVILTBRKOHRMZHCXSTZJHUBYFIMVTELIAAJQCJVMFOHHDQNTROTENEWXGDUZZWEVHJUOYOFB");
    tmp_msg_0.lat = 0.1318812445666434;
    tmp_msg_0.lon = 0.3257914436417264;
    tmp_msg_0.depth = 0.7385388346226928;
    tmp_msg_0.query_channel = 11U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 67U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.45645787508761393;
    msg.y = 0.008200220377015843;
    msg.var_x = 0.5126024469496538;
    msg.var_y = 0.2143138774225175;
    msg.distance = 0.8802297534297607;

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
    msg.setTimeStamp(0.8846305097834305);
    msg.setSource(43437U);
    msg.setSourceEntity(71U);
    msg.setDestination(29718U);
    msg.setDestinationEntity(102U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YQDOOPSDKRHPLOZBBJOFPXNTILAAOTSTFGGUJTZPSTOVQRDNEQKCHKNEBZHVTLQEELNGWBICZ");
    tmp_msg_0.lat = 0.5591564811190614;
    tmp_msg_0.lon = 0.9284086854725953;
    tmp_msg_0.depth = 0.4943896268720033;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3853326592200892;
    msg.y = 0.7703718865730805;
    msg.var_x = 0.6190506235229644;
    msg.var_y = 0.36081532687317486;
    msg.distance = 0.6229192755232289;

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
    msg.setTimeStamp(0.8510381175555876);
    msg.setSource(34778U);
    msg.setSourceEntity(181U);
    msg.setDestination(4736U);
    msg.setDestinationEntity(190U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JGZXSFWAWBPNQOEBLCPUZNVYFCZSUSKAFXRRANDKWHKUBXRZDPVAKL");
    tmp_msg_0.lat = 0.7364770919728911;
    tmp_msg_0.lon = 0.7986148276084817;
    tmp_msg_0.depth = 0.5572606903193017;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 237U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5759458162056095;
    msg.y = 0.1721181354878939;
    msg.var_x = 0.7899458478065148;
    msg.var_y = 0.35578037293264875;
    msg.distance = 0.48181461253793934;

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
    msg.setTimeStamp(0.8561387826028657);
    msg.setSource(1668U);
    msg.setSourceEntity(147U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(243U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.29330872580404577);
    msg.setSource(22765U);
    msg.setSourceEntity(199U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(219U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.8023833344631452);
    msg.setSource(38636U);
    msg.setSourceEntity(229U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(217U);
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
    msg.setTimeStamp(0.34144921158625874);
    msg.setSource(62280U);
    msg.setSourceEntity(146U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(145U);
    msg.x = 0.11085439697451116;
    msg.y = 0.47563897510401565;
    msg.z = 0.953231371877127;

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
    msg.setTimeStamp(0.9489960305687085);
    msg.setSource(39793U);
    msg.setSourceEntity(110U);
    msg.setDestination(38124U);
    msg.setDestinationEntity(205U);
    msg.x = 0.87436309645459;
    msg.y = 0.7654946090655548;
    msg.z = 0.11818396224678718;

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
    msg.setTimeStamp(0.9358761311522362);
    msg.setSource(10559U);
    msg.setSourceEntity(3U);
    msg.setDestination(34523U);
    msg.setDestinationEntity(86U);
    msg.x = 0.06478357314908478;
    msg.y = 0.853664165181636;
    msg.z = 0.966704684025444;

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
    msg.setTimeStamp(0.9221518924571912);
    msg.setSource(21185U);
    msg.setSourceEntity(76U);
    msg.setDestination(21497U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7786471835936167;

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
    msg.setTimeStamp(0.7848785243882451);
    msg.setSource(34323U);
    msg.setSourceEntity(146U);
    msg.setDestination(63260U);
    msg.setDestinationEntity(115U);
    msg.value = 0.452157099641715;

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
    msg.setTimeStamp(0.675445542933063);
    msg.setSource(47565U);
    msg.setSourceEntity(62U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6103170240667511;

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
    msg.setTimeStamp(0.9425785714013755);
    msg.setSource(3287U);
    msg.setSourceEntity(111U);
    msg.setDestination(21992U);
    msg.setDestinationEntity(222U);
    msg.value = 0.15040872606542766;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.17322943686503967);
    msg.setSource(47902U);
    msg.setSourceEntity(111U);
    msg.setDestination(12469U);
    msg.setDestinationEntity(198U);
    msg.value = 0.46075718899069473;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.96137501450713);
    msg.setSource(33374U);
    msg.setSourceEntity(90U);
    msg.setDestination(63179U);
    msg.setDestinationEntity(254U);
    msg.value = 0.18512441260123846;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.7182065120318554);
    msg.setSource(63774U);
    msg.setSourceEntity(99U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8091073156934153;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.77959809073685);
    msg.setSource(39778U);
    msg.setSourceEntity(231U);
    msg.setDestination(63075U);
    msg.setDestinationEntity(180U);
    msg.value = 0.8817793316852965;
    msg.speed_units = 92U;

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
    msg.setTimeStamp(0.3641545504166612);
    msg.setSource(61064U);
    msg.setSourceEntity(84U);
    msg.setDestination(20954U);
    msg.setDestinationEntity(222U);
    msg.value = 0.20243340061598525;
    msg.speed_units = 174U;

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
    msg.setTimeStamp(0.1582845332444517);
    msg.setSource(20269U);
    msg.setSourceEntity(30U);
    msg.setDestination(45753U);
    msg.setDestinationEntity(55U);
    msg.value = 0.3941341283875728;

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
    msg.setTimeStamp(0.3640834646938197);
    msg.setSource(47896U);
    msg.setSourceEntity(224U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(230U);
    msg.value = 0.5188656240056856;

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
    msg.setTimeStamp(0.8262116331892173);
    msg.setSource(46077U);
    msg.setSourceEntity(162U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(142U);
    msg.value = 0.0984755139635144;

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
    msg.setTimeStamp(0.954761088887498);
    msg.setSource(36973U);
    msg.setSourceEntity(88U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(232U);
    msg.value = 0.601074706577639;

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
    msg.setTimeStamp(0.061437456572837945);
    msg.setSource(48794U);
    msg.setSourceEntity(93U);
    msg.setDestination(17196U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8649397200621257;

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
    msg.setTimeStamp(0.8453212730172874);
    msg.setSource(37290U);
    msg.setSourceEntity(201U);
    msg.setDestination(1918U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9234540810298495;

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
    msg.setTimeStamp(0.3304367539513384);
    msg.setSource(38999U);
    msg.setSourceEntity(65U);
    msg.setDestination(4771U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7125142513373675;

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
    msg.setTimeStamp(0.8854528275316715);
    msg.setSource(8598U);
    msg.setSourceEntity(235U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(145U);
    msg.value = 0.18852790985463308;

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
    msg.setTimeStamp(0.7945252927741482);
    msg.setSource(29798U);
    msg.setSourceEntity(117U);
    msg.setDestination(2500U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8753083296252748;

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
    msg.setTimeStamp(0.6058857612152706);
    msg.setSource(25768U);
    msg.setSourceEntity(20U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 2012992772U;
    msg.start_lat = 0.9144266783841112;
    msg.start_lon = 0.4002896229256221;
    msg.start_z = 0.0778370587845103;
    msg.start_z_units = 3U;
    msg.end_lat = 0.6921553179768835;
    msg.end_lon = 0.5703830362949601;
    msg.end_z = 0.6535805287744757;
    msg.end_z_units = 101U;
    msg.speed = 0.4853022215995305;
    msg.speed_units = 4U;
    msg.lradius = 0.5947905450133072;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.32826989853785105);
    msg.setSource(55240U);
    msg.setSourceEntity(156U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 3569015919U;
    msg.start_lat = 0.11388857038317557;
    msg.start_lon = 0.5528993166638813;
    msg.start_z = 0.9390633141152026;
    msg.start_z_units = 103U;
    msg.end_lat = 0.9404688177282152;
    msg.end_lon = 0.2934698643618855;
    msg.end_z = 0.30561527008714484;
    msg.end_z_units = 218U;
    msg.speed = 0.26823354250156506;
    msg.speed_units = 224U;
    msg.lradius = 0.9685502918832309;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.415363016621915);
    msg.setSource(32177U);
    msg.setSourceEntity(204U);
    msg.setDestination(4486U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 4032888984U;
    msg.start_lat = 0.9428795553104994;
    msg.start_lon = 0.22899574736414707;
    msg.start_z = 0.6439921246836781;
    msg.start_z_units = 122U;
    msg.end_lat = 0.14651308228222715;
    msg.end_lon = 0.1511666026840719;
    msg.end_z = 0.9154177698132282;
    msg.end_z_units = 152U;
    msg.speed = 0.4386504185723872;
    msg.speed_units = 70U;
    msg.lradius = 0.8633058761681222;
    msg.flags = 237U;

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
    msg.setTimeStamp(0.9134781125932059);
    msg.setSource(21045U);
    msg.setSourceEntity(32U);
    msg.setDestination(37450U);
    msg.setDestinationEntity(87U);
    msg.x = 0.5690970239642305;
    msg.y = 0.11239373496917027;
    msg.z = 0.19270916110329206;
    msg.k = 0.0034214543682418164;
    msg.m = 0.6898128897976671;
    msg.n = 0.2702351696844638;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.03793092804704967);
    msg.setSource(57418U);
    msg.setSourceEntity(46U);
    msg.setDestination(25870U);
    msg.setDestinationEntity(21U);
    msg.x = 0.4496199500275079;
    msg.y = 0.07097853504534457;
    msg.z = 0.7372928936196305;
    msg.k = 0.024289674452458998;
    msg.m = 0.48904666257781637;
    msg.n = 0.5949826224013728;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.5639203517593071);
    msg.setSource(8691U);
    msg.setSourceEntity(149U);
    msg.setDestination(16471U);
    msg.setDestinationEntity(151U);
    msg.x = 0.8458554857068622;
    msg.y = 0.13145704666712033;
    msg.z = 0.27327061278862097;
    msg.k = 0.38441211883517346;
    msg.m = 0.7761742086967645;
    msg.n = 0.6033614975171183;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.9277720860563508);
    msg.setSource(45376U);
    msg.setSourceEntity(43U);
    msg.setDestination(19997U);
    msg.setDestinationEntity(67U);
    msg.value = 0.1649342753246803;

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
    msg.setTimeStamp(0.9381488029677737);
    msg.setSource(51454U);
    msg.setSourceEntity(205U);
    msg.setDestination(31856U);
    msg.setDestinationEntity(64U);
    msg.value = 0.33909788178447176;

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
    msg.setTimeStamp(0.9102665617786345);
    msg.setSource(30868U);
    msg.setSourceEntity(221U);
    msg.setDestination(36951U);
    msg.setDestinationEntity(190U);
    msg.value = 0.9844356770760351;

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
    msg.setTimeStamp(0.6322432778852893);
    msg.setSource(20288U);
    msg.setSourceEntity(123U);
    msg.setDestination(38151U);
    msg.setDestinationEntity(135U);
    msg.u = 0.4752935660736429;
    msg.v = 0.4786477539607894;
    msg.w = 0.97550591780447;
    msg.p = 0.9808205144623479;
    msg.q = 0.3684565265357218;
    msg.r = 0.8191121817578767;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.513845601387352);
    msg.setSource(2122U);
    msg.setSourceEntity(152U);
    msg.setDestination(54504U);
    msg.setDestinationEntity(192U);
    msg.u = 0.18459520536576723;
    msg.v = 0.6772146722997192;
    msg.w = 0.5824652032026423;
    msg.p = 0.9512422120796644;
    msg.q = 0.25025194700030606;
    msg.r = 0.9949588543509749;
    msg.flags = 121U;

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
    msg.setTimeStamp(0.7953232783612937);
    msg.setSource(45021U);
    msg.setSourceEntity(73U);
    msg.setDestination(28019U);
    msg.setDestinationEntity(142U);
    msg.u = 0.9887675634624363;
    msg.v = 0.777896597273904;
    msg.w = 0.3701089370097853;
    msg.p = 0.9787583236551235;
    msg.q = 0.8375313804708714;
    msg.r = 0.6521545922566757;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.7726646712142714);
    msg.setSource(61839U);
    msg.setSourceEntity(195U);
    msg.setDestination(58615U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 3722545877U;
    msg.start_lat = 0.3213317031921863;
    msg.start_lon = 0.9372282788229053;
    msg.start_z = 0.05249597536412054;
    msg.start_z_units = 226U;
    msg.end_lat = 0.3172407328142982;
    msg.end_lon = 0.6441874034510523;
    msg.end_z = 0.29099631771516565;
    msg.end_z_units = 244U;
    msg.lradius = 0.8662389629104903;
    msg.flags = 41U;
    msg.x = 0.3992055306895419;
    msg.y = 0.2900763927537453;
    msg.z = 0.02525696381994713;
    msg.vx = 0.6458429755455838;
    msg.vy = 0.7749047067753639;
    msg.vz = 0.09354067315544556;
    msg.course_error = 0.08223960790656482;
    msg.eta = 10974U;

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
    msg.setTimeStamp(0.33252413740550213);
    msg.setSource(1296U);
    msg.setSourceEntity(101U);
    msg.setDestination(2291U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 4088635897U;
    msg.start_lat = 0.3507046499837576;
    msg.start_lon = 0.40921491829663503;
    msg.start_z = 0.35735906327776923;
    msg.start_z_units = 235U;
    msg.end_lat = 0.28821014090896857;
    msg.end_lon = 0.6203892934357064;
    msg.end_z = 0.15350223365692117;
    msg.end_z_units = 87U;
    msg.lradius = 0.2737303365909187;
    msg.flags = 209U;
    msg.x = 0.34090343187957395;
    msg.y = 0.17231564694233092;
    msg.z = 0.4333178113277364;
    msg.vx = 0.850469796539653;
    msg.vy = 0.9903857743956629;
    msg.vz = 0.639286876164746;
    msg.course_error = 0.753968227438405;
    msg.eta = 60946U;

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
    msg.setTimeStamp(0.16203899848188852);
    msg.setSource(52039U);
    msg.setSourceEntity(151U);
    msg.setDestination(8598U);
    msg.setDestinationEntity(10U);
    msg.path_ref = 1877509774U;
    msg.start_lat = 0.47227973799558576;
    msg.start_lon = 0.7820828084824958;
    msg.start_z = 0.22336079596655412;
    msg.start_z_units = 48U;
    msg.end_lat = 0.9078894433582757;
    msg.end_lon = 0.9485903691975509;
    msg.end_z = 0.9320637652621638;
    msg.end_z_units = 135U;
    msg.lradius = 0.3301869241115467;
    msg.flags = 175U;
    msg.x = 0.8707420214254293;
    msg.y = 0.4981268233088715;
    msg.z = 0.032836380385784514;
    msg.vx = 0.5684884013322052;
    msg.vy = 0.40439672180607245;
    msg.vz = 0.7843593175473536;
    msg.course_error = 0.5271957658755033;
    msg.eta = 27551U;

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
    msg.setTimeStamp(0.8716019156751427);
    msg.setSource(11560U);
    msg.setSourceEntity(236U);
    msg.setDestination(39196U);
    msg.setDestinationEntity(139U);
    msg.k = 0.9913423184558566;
    msg.m = 0.236583028113021;
    msg.n = 0.44856754589912984;

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
    msg.setTimeStamp(0.6016418151939769);
    msg.setSource(16266U);
    msg.setSourceEntity(245U);
    msg.setDestination(44397U);
    msg.setDestinationEntity(146U);
    msg.k = 0.23574941863124044;
    msg.m = 0.20873727295393973;
    msg.n = 0.5176355839632303;

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
    msg.setTimeStamp(0.7811120535841989);
    msg.setSource(31461U);
    msg.setSourceEntity(194U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(32U);
    msg.k = 0.9395432100415015;
    msg.m = 0.43895976575199935;
    msg.n = 0.6350225720235313;

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
    msg.setTimeStamp(0.20572623435050152);
    msg.setSource(25261U);
    msg.setSourceEntity(199U);
    msg.setDestination(51135U);
    msg.setDestinationEntity(99U);
    msg.p = 0.7294536213503005;
    msg.i = 0.529572060499653;
    msg.d = 0.8108587108341082;
    msg.a = 0.14011567908306644;

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
    msg.setTimeStamp(0.19081335718320191);
    msg.setSource(18364U);
    msg.setSourceEntity(49U);
    msg.setDestination(45677U);
    msg.setDestinationEntity(19U);
    msg.p = 0.46869023838430324;
    msg.i = 0.6907782296796677;
    msg.d = 0.34750307764996746;
    msg.a = 0.01156567256416663;

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
    msg.setTimeStamp(0.4767135060075104);
    msg.setSource(5658U);
    msg.setSourceEntity(222U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(247U);
    msg.p = 0.9204859890048827;
    msg.i = 0.3055676741026715;
    msg.d = 0.6642442273635181;
    msg.a = 0.7354906342017007;

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
    msg.setTimeStamp(0.5903346975929605);
    msg.setSource(25922U);
    msg.setSourceEntity(47U);
    msg.setDestination(35937U);
    msg.setDestinationEntity(11U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.10624517029954261);
    msg.setSource(43675U);
    msg.setSourceEntity(229U);
    msg.setDestination(64531U);
    msg.setDestinationEntity(163U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.989512530737642);
    msg.setSource(37593U);
    msg.setSourceEntity(187U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(161U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.6258975503513347);
    msg.setSource(29818U);
    msg.setSourceEntity(244U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(56U);
    msg.timeout = 1876U;
    msg.lat = 0.5173708740879532;
    msg.lon = 0.6289660143102862;
    msg.z = 0.593469227061927;
    msg.z_units = 116U;
    msg.speed = 0.7716940027555453;
    msg.speed_units = 25U;
    msg.roll = 0.8119947859462089;
    msg.pitch = 0.8425386798921489;
    msg.yaw = 0.5903023201807307;
    msg.custom.assign("YIGEPOCXLELBOPYYUZOCQISTVCSMQHSHXFQFXEYCQXNFMAJJRNMVFBJZLJYHOPNGZDDDCLPHFLYRZDKKBXBHGSUMJGZZTEAEKALGRWNRVACYRJSZKUUXSTBGXIM");

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
    msg.setTimeStamp(0.14963749291600037);
    msg.setSource(7063U);
    msg.setSourceEntity(121U);
    msg.setDestination(36534U);
    msg.setDestinationEntity(34U);
    msg.timeout = 35262U;
    msg.lat = 0.12614735005300726;
    msg.lon = 0.5649230222728756;
    msg.z = 0.5501579468613326;
    msg.z_units = 104U;
    msg.speed = 0.6378157106176977;
    msg.speed_units = 185U;
    msg.roll = 0.4615877536367081;
    msg.pitch = 0.8895912830198669;
    msg.yaw = 0.8664586778498675;
    msg.custom.assign("UPVXKTZTGPSOYDDBYQMSCBMPJUWPAVWVQOLBGKFOJEORCJHRIYKOLPANYQPDCUULWFHTUAVLTBTJBXBPINVZEOEXLBAAJBWMQJDIMXOVRBZMMLAHWHNKOSYHTZKHXWYGLHGQAVGICJSRZSZETIESUPHJCJNFGXDMGJGKNIUECEQZEQTAQLFRVRWIVDIXODKNCNDXXFSTSLFDBFYRHTRGIVUYKWMQICMAZNWHFZNKENZSKSPGMQLRUOY");

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
    msg.setTimeStamp(0.011407078319780384);
    msg.setSource(20877U);
    msg.setSourceEntity(107U);
    msg.setDestination(8720U);
    msg.setDestinationEntity(156U);
    msg.timeout = 43456U;
    msg.lat = 0.44037816790633133;
    msg.lon = 0.01742556710815535;
    msg.z = 0.8567458615070529;
    msg.z_units = 4U;
    msg.speed = 0.046312579668337905;
    msg.speed_units = 160U;
    msg.roll = 0.6563045800175052;
    msg.pitch = 0.993645143291667;
    msg.yaw = 0.7306967941028226;
    msg.custom.assign("HLXJDAGQHUKYPTLGXQEYFKPPSNKFNHJSTEZECNICRQQKGIJDZEBDIUOEVPEKUCVBSVNNXFHYMSRPOFMAHGKUHNSVCAYLIILRBTZACTGTPLIFLGRLSCEIJDYYBTWOSJMLCQEOBYCYOXUGXG");

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
    msg.setTimeStamp(0.03387190100804338);
    msg.setSource(25996U);
    msg.setSourceEntity(36U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(229U);
    msg.timeout = 4479U;
    msg.lat = 0.41293463109539974;
    msg.lon = 0.31805370670291844;
    msg.z = 0.49563114506801254;
    msg.z_units = 71U;
    msg.speed = 0.41625157708535987;
    msg.speed_units = 226U;
    msg.duration = 37743U;
    msg.radius = 0.7167347719989374;
    msg.flags = 64U;
    msg.custom.assign("KHHPFKHICUQQYCSZBFMNRWGHSEILZSRRFITILCPMMWGSYLZRACFAOBHJRUKGVELLBVKSSYPYEAUZAZBKKVFACNBHYKORFEYPXOYTQNJZVGCUNQDYCCXUPOGNILOHRTZTWVJGRMZX");

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
    msg.setTimeStamp(0.5120601078118739);
    msg.setSource(52440U);
    msg.setSourceEntity(231U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(247U);
    msg.timeout = 55648U;
    msg.lat = 0.265619122411097;
    msg.lon = 0.6712268144222504;
    msg.z = 0.8267744513622558;
    msg.z_units = 229U;
    msg.speed = 0.18997657163602488;
    msg.speed_units = 185U;
    msg.duration = 47002U;
    msg.radius = 0.0687793399648925;
    msg.flags = 3U;
    msg.custom.assign("JLNGFQMFCPUZRVTULRTGHEHPMODULVJZDRPOXYAHG");

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
    msg.setTimeStamp(0.13833125548596148);
    msg.setSource(7657U);
    msg.setSourceEntity(43U);
    msg.setDestination(60948U);
    msg.setDestinationEntity(203U);
    msg.timeout = 20484U;
    msg.lat = 0.5946247189424262;
    msg.lon = 0.5690984830511214;
    msg.z = 0.04221627010256601;
    msg.z_units = 254U;
    msg.speed = 0.023490161908040874;
    msg.speed_units = 217U;
    msg.duration = 24787U;
    msg.radius = 0.4868227511888952;
    msg.flags = 59U;
    msg.custom.assign("ZWQFZBJJXWIABAJDVELRIVPLSQMWJCEZNWLKXSDMDRPMGDUISYQLTUCNITOLANRBNWHPWRUTGVYMRKDSCNJLPNVXJZHRYVENIFVLGEZQMHTEMCQKFSYSYRYUGSXTPCDAMP");

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
    msg.setTimeStamp(0.22952701473885562);
    msg.setSource(64448U);
    msg.setSourceEntity(164U);
    msg.setDestination(23255U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("YQNLOPIPDGCJLPSIXSMPDTIIHAJGVQWJBGBFSMUHZEJDKBJEIMCKYFGZXADVUMRXIWGCPEEJMOBQHWDNCGHAHRPMKAKQNZTNBORU");

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
    msg.setTimeStamp(0.1890194986595064);
    msg.setSource(26261U);
    msg.setSourceEntity(89U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(31U);
    msg.custom.assign("PZXRRCOBVWJRPJIUMPEYNLWEJDSSLJNZICKXHXGFALRKNIGTOFNOABQPMOISGQSWTYYOULXXDLFBEICFPDCWVNRHHQBTGGZABIHGELSKXFWTAKWXOKWRKMVDBQSKVPLEUOTVNVQPXNFQNLBJZWYOFWMDZUHLUWICOMHTZCEMMQJYPYRZRIHYRYHMMISUOYTGQSBGKBCSQXCLKCUEAACQVVUEAT");

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
    msg.setTimeStamp(0.665891725215971);
    msg.setSource(55924U);
    msg.setSourceEntity(188U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(221U);
    msg.custom.assign("XSBGHPXFRATDWSSIKIACREBMUMODUNJLNGAYBUSASTAVEVZBURP");

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
    msg.setTimeStamp(0.3105428925476146);
    msg.setSource(564U);
    msg.setSourceEntity(238U);
    msg.setDestination(39758U);
    msg.setDestinationEntity(157U);
    msg.timeout = 32196U;
    msg.lat = 0.2222710578379008;
    msg.lon = 0.906589217547425;
    msg.z = 0.9169014010997325;
    msg.z_units = 72U;
    msg.duration = 31987U;
    msg.speed = 0.012359087682763836;
    msg.speed_units = 50U;
    msg.type = 20U;
    msg.radius = 0.6565745388060416;
    msg.length = 0.32910432250395427;
    msg.bearing = 0.6509788270482623;
    msg.direction = 227U;
    msg.custom.assign("SIYPQZMLPNFWLXTJRJUHOWAAKBHXEXEXDTTCUVQQSLYMECUDQNFJHTKXMOSVEZDWKCSJONHRQVWWOGKIGRPSBOCYFRMJGASKIDOSBJIGATLYIMPKRENZOAARPOMWFDIKQMADULFEPEBXNLEYBVHLYTGSNZZPIEPICBKINJGVWXZCLKQJHMNCARQFHVBNZTFFUVLRZUUWDBYSJUSYRMEQXAXHTVZWLKDYUOICTFPWJPCGTBDGOCBQYR");

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
    msg.setTimeStamp(0.23223481977008953);
    msg.setSource(36439U);
    msg.setSourceEntity(74U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(185U);
    msg.timeout = 54770U;
    msg.lat = 0.7325451718668188;
    msg.lon = 0.8893205350341581;
    msg.z = 0.693521925708919;
    msg.z_units = 89U;
    msg.duration = 56472U;
    msg.speed = 0.0637147408039146;
    msg.speed_units = 33U;
    msg.type = 97U;
    msg.radius = 0.9177124665043919;
    msg.length = 0.8132588521350678;
    msg.bearing = 0.7560362070809943;
    msg.direction = 135U;
    msg.custom.assign("EXVHJOLNKINYJPGRDHWVPMVZSZESTDGUWZUDORALSXQXNWKRTPKYBJZTBAQCMHKLTXBUPOREAFOMMYHPGWUUXYKWFLCEQJWGZFCTGBUNIHJBHTMVNSQTARALLPAIVSTNWEFCBISVFMXSYVZORPCS");

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
    msg.setTimeStamp(0.07418831756423494);
    msg.setSource(15774U);
    msg.setSourceEntity(75U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(68U);
    msg.timeout = 14909U;
    msg.lat = 0.8198579970428849;
    msg.lon = 0.3562037374150241;
    msg.z = 0.17739648046569023;
    msg.z_units = 7U;
    msg.duration = 9896U;
    msg.speed = 0.33670559855806914;
    msg.speed_units = 80U;
    msg.type = 238U;
    msg.radius = 0.1465613210198572;
    msg.length = 0.22251173835183824;
    msg.bearing = 0.31759153604569657;
    msg.direction = 142U;
    msg.custom.assign("MMGSHAYIIVPYOAPDHJKLWPOQAJLCWGRTITRSEVTZ");

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
    msg.setTimeStamp(0.7126786485033026);
    msg.setSource(57720U);
    msg.setSourceEntity(207U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(232U);
    msg.duration = 53251U;
    msg.custom.assign("QIHNPXZFMWKWXMLUFORAMVKZABCCENZSVSMRHGCXNUQGLGFKEEUJNFJFIEAESKMCGITTDTTLYCEWVDJXBBRPPRSIZYBZLQLPURDSMVHTUKGOHIJZQDFADYQQBHBDMDMDCCWFPCUWRTGBNIAMYWOHX");

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
    msg.setTimeStamp(0.3573031360786112);
    msg.setSource(49197U);
    msg.setSourceEntity(242U);
    msg.setDestination(27677U);
    msg.setDestinationEntity(200U);
    msg.duration = 46205U;
    msg.custom.assign("HWAEKBNXIEVDXLNORXPKNZMQMOHMFIODAQWZECMSPJEYHZLDQDNJVUEKMYJQRIJJAQEBKFLVLZVUQDSEURLNGJLLRDTVYWJUGNYSJKUZSAWATFGYQPWJMPHOHGBFHCPKTPRTLNZTEMEBASIXIONNHQMDPSDBMRXTXEGJITWCCUTPSC");

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
    msg.setTimeStamp(0.2909114369126976);
    msg.setSource(37157U);
    msg.setSourceEntity(118U);
    msg.setDestination(13302U);
    msg.setDestinationEntity(173U);
    msg.duration = 22569U;
    msg.custom.assign("WMLTDXXVPMJFVSXIBETZKNNDYRRLAN");

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
    msg.setTimeStamp(0.3333169215840567);
    msg.setSource(62959U);
    msg.setSourceEntity(152U);
    msg.setDestination(56093U);
    msg.setDestinationEntity(244U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9353669432831656;
    msg.control.set(tmp_msg_0);
    msg.duration = 23517U;
    msg.custom.assign("KZQCKXNUNIXWVGOEATA");

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
    msg.setTimeStamp(0.5562334011456254);
    msg.setSource(13497U);
    msg.setSourceEntity(72U);
    msg.setDestination(33063U);
    msg.setDestinationEntity(87U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.16303224984563092;
    msg.control.set(tmp_msg_0);
    msg.duration = 26992U;
    msg.custom.assign("AFPNYRKKVDEZMMLIOHXCXMUXRDFXIVJOJFLPYSBEMTRTGHDMKACEIYQZRUCOLKHCEYNCJFVPNWLUIYBAZGTTKOJSZNAYSCPQAJUVSFTGGYJVEWBGIIUEYYBZXDBQTFSBKVKMOHDFXNZDQRTPHAPHSSRNRKQMAGHLPIIRTNPTRLAWFGQHWYNCZNCIVXZEOUSZLAVJSUFNRPCQLUXWDGGWMZQMXEADTSDFCXWUUBOLGOJKWJVB");

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
    msg.setTimeStamp(0.9308459282683987);
    msg.setSource(8197U);
    msg.setSourceEntity(39U);
    msg.setDestination(11390U);
    msg.setDestinationEntity(218U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.28280920986347746;
    msg.control.set(tmp_msg_0);
    msg.duration = 7680U;
    msg.custom.assign("LYOHSHKMFHXCNWTJTVBJEZIDCTWRAYUQUVPCKGYRUNBGTRQRWRSHLZZTOZQTAYLBFOPBXFPFXBPIUBOMSPKPCMCDWRHISQGWJLQFJSZNVUWCDJAUTDQOFWKHZEZWIRBGYENTVGPGNNSNRMNHQNMZGBHIHVEOXWBTFZXCWVGAADMYCKILMUQJXYJYU");

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
    msg.setTimeStamp(0.2770967225638796);
    msg.setSource(15356U);
    msg.setSourceEntity(226U);
    msg.setDestination(64088U);
    msg.setDestinationEntity(106U);
    msg.timeout = 12637U;
    msg.lat = 0.7128017350867948;
    msg.lon = 0.5591374437738966;
    msg.z = 0.8063093490126444;
    msg.z_units = 230U;
    msg.speed = 0.12371108687266452;
    msg.speed_units = 242U;
    msg.bearing = 0.9016235324569314;
    msg.cross_angle = 0.14380708092315642;
    msg.width = 0.3751093611979045;
    msg.length = 0.5351730413761445;
    msg.hstep = 0.13882326860259586;
    msg.coff = 66U;
    msg.alternation = 236U;
    msg.flags = 230U;
    msg.custom.assign("RLQKYURTRCFCXUUOECTJPPAKVVUSQIBUGTLCTXQD");

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
    msg.setTimeStamp(0.7751699640008124);
    msg.setSource(51204U);
    msg.setSourceEntity(56U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(175U);
    msg.timeout = 57948U;
    msg.lat = 0.8679331825466943;
    msg.lon = 0.2641964382420392;
    msg.z = 0.5010693447056362;
    msg.z_units = 162U;
    msg.speed = 0.0637944158364504;
    msg.speed_units = 133U;
    msg.bearing = 0.7455513518432222;
    msg.cross_angle = 0.3221570508921259;
    msg.width = 0.9337506700789698;
    msg.length = 0.5586175430447143;
    msg.hstep = 0.1561638326470195;
    msg.coff = 92U;
    msg.alternation = 41U;
    msg.flags = 120U;
    msg.custom.assign("UUYDJJQQBJSRYXHWNVYFBPNIEKCFXLNFLYXOC");

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
    msg.setTimeStamp(0.6674112946504234);
    msg.setSource(46534U);
    msg.setSourceEntity(95U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(66U);
    msg.timeout = 14795U;
    msg.lat = 0.14665099553856087;
    msg.lon = 0.39916456333396966;
    msg.z = 0.7264472636375711;
    msg.z_units = 180U;
    msg.speed = 0.1563378442871356;
    msg.speed_units = 47U;
    msg.bearing = 0.25800269586988145;
    msg.cross_angle = 0.07163782956639997;
    msg.width = 0.4268808557852357;
    msg.length = 0.24601962193611404;
    msg.hstep = 0.8793492550753372;
    msg.coff = 173U;
    msg.alternation = 249U;
    msg.flags = 234U;
    msg.custom.assign("HIWCXOAOMSYQMKHGSTDURBCNBSVIXSYOAHVKAEPPTFWZGITFORMZLXNCSJTTIKFLAELFHFXGYRTWOPRHHVQLLUCQKODJ");

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
    msg.setTimeStamp(0.09670971276763685);
    msg.setSource(64384U);
    msg.setSourceEntity(158U);
    msg.setDestination(45181U);
    msg.setDestinationEntity(38U);
    msg.timeout = 65289U;
    msg.lat = 0.45137796118602547;
    msg.lon = 0.09796701843292588;
    msg.z = 0.9314807423523871;
    msg.z_units = 124U;
    msg.speed = 0.8511972126357649;
    msg.speed_units = 80U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.21933025176498022;
    tmp_msg_0.y = 0.05899908396123721;
    tmp_msg_0.z = 0.9760187006859917;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DUYMAFHTMEXELGBTMSENMPTVNMJRLNBLGZSWRIOOUYXQLOVHZJPCLDABAQAIETVITKZNJEMAVQCYBLKZNRHKUUCIWEYIJORUOPNOQFJRVBGLGTVHPYFSGSMQIQAJFQSDCLWYZYUCALLPPMKUSOHPFCSVMIIYGGBHXZWERESCWMNJWBGYECRWQBSHHFAQZX");

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
    msg.setTimeStamp(0.4173683494170407);
    msg.setSource(19734U);
    msg.setSourceEntity(170U);
    msg.setDestination(49855U);
    msg.setDestinationEntity(199U);
    msg.timeout = 30205U;
    msg.lat = 0.5180948091861615;
    msg.lon = 0.5599131114485175;
    msg.z = 0.9019910239998529;
    msg.z_units = 65U;
    msg.speed = 0.12975351970197235;
    msg.speed_units = 247U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.913899161005132;
    tmp_msg_0.y = 0.2389542845138053;
    tmp_msg_0.z = 0.9539115021429044;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VOCZOPBXNIDPCURLAYTZAMEPHTBEXDGAZVMQZEVYDJHSRKKWRIXSRVYXPFMTLTHDZLBRMOQ");

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
    msg.setTimeStamp(0.03448841896056576);
    msg.setSource(16310U);
    msg.setSourceEntity(130U);
    msg.setDestination(42802U);
    msg.setDestinationEntity(205U);
    msg.timeout = 53993U;
    msg.lat = 0.5618656174964293;
    msg.lon = 0.24040456784939745;
    msg.z = 0.6384039800039251;
    msg.z_units = 85U;
    msg.speed = 0.9653324586465974;
    msg.speed_units = 207U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.20187818466660623;
    tmp_msg_0.y = 0.18087030226900225;
    tmp_msg_0.z = 0.9799268817340403;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MFXCXGGAODXGPFDTMINNLRZJBXLDLWEMXBZKHHWPUTYVXCOAPDACJRRHJZTTVAENGEANXHVNKYJVZJMGDKTEWGSSVGJFZGOKTMRYIOJQPDBPYUHMIHXVWCTTEZKACRQUROWNFQTQUHUJYEHWQCYICWLSKZKZEULBBCNRPDABAQSEQYIBNFVLPLZXKNIKFULMKWZBHMCWFEJEMG");

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
    msg.setTimeStamp(0.40431490800227077);
    msg.setSource(24206U);
    msg.setSourceEntity(239U);
    msg.setDestination(28756U);
    msg.setDestinationEntity(247U);
    msg.x = 0.4120368072336531;
    msg.y = 0.2640225699968606;
    msg.z = 0.7328128558700263;

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
    msg.setTimeStamp(0.7084815581268787);
    msg.setSource(61333U);
    msg.setSourceEntity(118U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(247U);
    msg.x = 0.6547287707161229;
    msg.y = 0.20239356451686108;
    msg.z = 0.38808234485784054;

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
    msg.setTimeStamp(0.04713368701515075);
    msg.setSource(12627U);
    msg.setSourceEntity(65U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(68U);
    msg.x = 0.8483826659261987;
    msg.y = 0.7262315779939835;
    msg.z = 0.7394185269752431;

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
    msg.setTimeStamp(0.12981190018676914);
    msg.setSource(30962U);
    msg.setSourceEntity(70U);
    msg.setDestination(36880U);
    msg.setDestinationEntity(235U);
    msg.timeout = 24221U;
    msg.lat = 0.8064187228021867;
    msg.lon = 0.7016413226778604;
    msg.z = 0.3706702599421863;
    msg.z_units = 19U;
    msg.amplitude = 0.5963010661391205;
    msg.pitch = 0.09204669714263958;
    msg.speed = 0.4790733395062412;
    msg.speed_units = 55U;
    msg.custom.assign("GEVGLUCDWPXQLUREHC");

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
    msg.setTimeStamp(0.1960916133316929);
    msg.setSource(65416U);
    msg.setSourceEntity(0U);
    msg.setDestination(38922U);
    msg.setDestinationEntity(131U);
    msg.timeout = 54702U;
    msg.lat = 0.4425686409496755;
    msg.lon = 0.6931570840831852;
    msg.z = 0.19811625852495485;
    msg.z_units = 148U;
    msg.amplitude = 0.9444543682190082;
    msg.pitch = 0.022691764723069774;
    msg.speed = 0.8673909275166196;
    msg.speed_units = 132U;
    msg.custom.assign("XPYMKANPIBBTXDUJXWFVEHLIVFUXAICQPNTNOZNKOWIBELFRLCMGTVEFRLKHUWVFUNJBRZUHBZICYLWKPKZYDUUPRCYSYXTDUWGKLPROGQGM");

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
    msg.setTimeStamp(0.32087475529912324);
    msg.setSource(63260U);
    msg.setSourceEntity(160U);
    msg.setDestination(37090U);
    msg.setDestinationEntity(67U);
    msg.timeout = 24241U;
    msg.lat = 0.15933871866914184;
    msg.lon = 0.41492538417142244;
    msg.z = 0.913874207269284;
    msg.z_units = 211U;
    msg.amplitude = 0.32771628289531207;
    msg.pitch = 0.30794548479906525;
    msg.speed = 0.7009615545295393;
    msg.speed_units = 253U;
    msg.custom.assign("VWMWTCQHLAUTPVWHWVRNBPHJGJXSJSCSL");

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
    msg.setTimeStamp(0.8515527026782874);
    msg.setSource(20876U);
    msg.setSourceEntity(194U);
    msg.setDestination(62622U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.5883205412517827);
    msg.setSource(18127U);
    msg.setSourceEntity(146U);
    msg.setDestination(47478U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.16530640085246873);
    msg.setSource(55203U);
    msg.setSourceEntity(158U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.1986620475025721);
    msg.setSource(28091U);
    msg.setSourceEntity(179U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.704593988085097;
    msg.lon = 0.17632410933461506;
    msg.z = 0.23470837879772222;
    msg.z_units = 171U;
    msg.radius = 0.6015486692293422;
    msg.duration = 28835U;
    msg.speed = 0.7398259777073033;
    msg.speed_units = 250U;
    msg.custom.assign("BZITMHTPLXXGOLQNFETJCVRFPQFUXAQSIJOBDIMHKJNGAKZMNPSHLLYGCQAAXFIMDWDMFZEPVPDUCNDYTVZNZAJUVDITRWIRSXJQUMHOGLKQXLMLZWHKEIAEYWABBBRXCDJNERFXYKCYPEBEOBJPYRLKWFYXSAHWARMWKGVSJVWVYVGSGORQNDZEEINUBZJTOKICNRTPVFETYHTBGSGVQSJQOCZLHCDULMKITFZURXKWGUHOYOSF");

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
    msg.setTimeStamp(0.41702190188631216);
    msg.setSource(62493U);
    msg.setSourceEntity(164U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.14796924745037032;
    msg.lon = 0.015139619548202088;
    msg.z = 0.6969333783185658;
    msg.z_units = 250U;
    msg.radius = 0.13987053236768765;
    msg.duration = 49499U;
    msg.speed = 0.5473623304909699;
    msg.speed_units = 29U;
    msg.custom.assign("NVOWYHOVSYLCBIDHPJZYRKRUATUZTJALOSDRJMRRFKWSKITUYRHXUOLTGUKP");

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
    msg.setTimeStamp(0.8581400919103969);
    msg.setSource(30283U);
    msg.setSourceEntity(199U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.31173452311214167;
    msg.lon = 0.6114960450727261;
    msg.z = 0.8194569578942399;
    msg.z_units = 70U;
    msg.radius = 0.062177901317730044;
    msg.duration = 13293U;
    msg.speed = 0.557332527513578;
    msg.speed_units = 221U;
    msg.custom.assign("YUWEZXDSCAFOUBMFVAVYZNVBZTWEDZZTJDVKXQCBOPLZHYGXHEHVDYOCGUGWGMDOMPPTFCXNCILHKPIBDPAYIRRFVSQHMQKCQRKEOIMXBATTLFTWJIXUZLOSDQEAJRLNIHJKOCNZQYODRIPNRTIEQZSMNJTCSJNVFSUAJKLCXNFMWVVJFRMXP");

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
    msg.setTimeStamp(0.7474662067105443);
    msg.setSource(47704U);
    msg.setSourceEntity(126U);
    msg.setDestination(17994U);
    msg.setDestinationEntity(213U);
    msg.timeout = 20348U;
    msg.flags = 137U;
    msg.lat = 0.8371871524412721;
    msg.lon = 0.002699445033063741;
    msg.start_z = 0.999015333384056;
    msg.start_z_units = 227U;
    msg.end_z = 0.17473647315345697;
    msg.end_z_units = 252U;
    msg.radius = 0.770210119634561;
    msg.speed = 0.03709334825757071;
    msg.speed_units = 49U;
    msg.custom.assign("ZHXKXWBJBSUXZNIZFUYYZUHDCARFKGFLPORGPKTEXTEJFMWMTKUKVTBZTMZDGYDQSVWMCQAMIUCQZTAUEIXNJBMVFHXHEHVZJKLGODADOVASYABWFLWHPTGTJRNRPFVCWWEJIQHCNMOICXRLRGLUDHSUAIIKDRAIGLZSQLFBDUOYOHSOWQNBSXNYOMPGGMNDLUSOOJXAEHRPNELGMLFKQAEDPPV");

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
    msg.setTimeStamp(0.44735557312417074);
    msg.setSource(27549U);
    msg.setSourceEntity(127U);
    msg.setDestination(6535U);
    msg.setDestinationEntity(86U);
    msg.timeout = 41731U;
    msg.flags = 161U;
    msg.lat = 0.9716941200246585;
    msg.lon = 0.3610162994894396;
    msg.start_z = 0.41463603923949;
    msg.start_z_units = 69U;
    msg.end_z = 0.32900274136498275;
    msg.end_z_units = 206U;
    msg.radius = 0.46311928587366413;
    msg.speed = 0.8684236203336589;
    msg.speed_units = 55U;
    msg.custom.assign("XMQZSURQJHKNHQOM");

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
    msg.setTimeStamp(0.5915545639710553);
    msg.setSource(38130U);
    msg.setSourceEntity(200U);
    msg.setDestination(65293U);
    msg.setDestinationEntity(30U);
    msg.timeout = 35216U;
    msg.flags = 135U;
    msg.lat = 0.8096100884426788;
    msg.lon = 0.9619449031929176;
    msg.start_z = 0.413972789592024;
    msg.start_z_units = 197U;
    msg.end_z = 0.46368677113246637;
    msg.end_z_units = 219U;
    msg.radius = 0.7194520991886799;
    msg.speed = 0.6673309968656232;
    msg.speed_units = 24U;
    msg.custom.assign("KAUDZZFYPPQFQQOVDWCWECTZH");

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
    msg.setTimeStamp(0.3427834722685966);
    msg.setSource(861U);
    msg.setSourceEntity(178U);
    msg.setDestination(29889U);
    msg.setDestinationEntity(89U);
    msg.timeout = 38518U;
    msg.lat = 0.9371498228441582;
    msg.lon = 0.5594387642652203;
    msg.z = 0.42979661686675574;
    msg.z_units = 135U;
    msg.speed = 0.5131099320862121;
    msg.speed_units = 34U;
    msg.custom.assign("BRZZPQRTZDVWJCJEAKACGWZOTGXSNPKIVSXCOHINQLIVWGX");

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
    msg.setTimeStamp(0.25734259464790965);
    msg.setSource(30283U);
    msg.setSourceEntity(89U);
    msg.setDestination(59386U);
    msg.setDestinationEntity(171U);
    msg.timeout = 47979U;
    msg.lat = 0.19685307345689884;
    msg.lon = 0.18941497838081345;
    msg.z = 0.5131652821026075;
    msg.z_units = 123U;
    msg.speed = 0.6207166720354542;
    msg.speed_units = 39U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.738487473725823;
    tmp_msg_0.y = 0.028074781015287154;
    tmp_msg_0.z = 0.8495167479518869;
    tmp_msg_0.t = 0.986543172593603;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PQBOPZISVUSDGTLNSNBRCXFGGUWIXXLEKNRDTTSNBVDYVOGGEPUHXBMGDWDCMBTYAPLTKOBXEVOXCANVRHSEPPQFQAWLTNUHQJGACM");

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
    msg.setTimeStamp(0.6081786306509078);
    msg.setSource(53263U);
    msg.setSourceEntity(196U);
    msg.setDestination(7620U);
    msg.setDestinationEntity(205U);
    msg.timeout = 13142U;
    msg.lat = 0.6361109762762469;
    msg.lon = 0.46739083308464136;
    msg.z = 0.6630483006161005;
    msg.z_units = 191U;
    msg.speed = 0.5366394061513007;
    msg.speed_units = 134U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8680630636497209;
    tmp_msg_0.y = 0.3114240341437914;
    tmp_msg_0.z = 0.3996920793823109;
    tmp_msg_0.t = 0.4565901138312758;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OQITEKQWYHASYXVGDCQLCXXXLTRDZEKROHYMDQE");

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
    msg.setTimeStamp(0.22536747993598727);
    msg.setSource(58704U);
    msg.setSourceEntity(92U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(167U);
    msg.x = 0.5483927489552722;
    msg.y = 0.1679798924559075;
    msg.z = 0.21997521286719735;
    msg.t = 0.8822418049619922;

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
    msg.setTimeStamp(0.6551155682253272);
    msg.setSource(43472U);
    msg.setSourceEntity(132U);
    msg.setDestination(39371U);
    msg.setDestinationEntity(183U);
    msg.x = 0.9917702971381857;
    msg.y = 0.039270830215855757;
    msg.z = 0.4256361712730701;
    msg.t = 0.770749755818369;

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
    msg.setTimeStamp(0.46419120159402205);
    msg.setSource(5584U);
    msg.setSourceEntity(33U);
    msg.setDestination(12502U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7098525097151202;
    msg.y = 0.9247201200368151;
    msg.z = 0.23255663959445116;
    msg.t = 0.05023541173011392;

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
    msg.setTimeStamp(0.7724013703516541);
    msg.setSource(41743U);
    msg.setSourceEntity(56U);
    msg.setDestination(20421U);
    msg.setDestinationEntity(114U);
    msg.timeout = 36848U;
    msg.name.assign("MBZRCGINOJRERMNTNUMPHINCEWYIZMTYBPEXUH");
    msg.custom.assign("YJCQAMZJXBOQOKIXAXVPKJTWHUIVZUMAQCFPRFFFWUMPPSSLDRNVVAFFKIALZZCSGLNYVEMXKRWHKKWNJBNJGGEXQDVZNNETJLZPHRXTHLLNIGTHMATSIHOBCHLGJGUMLOGPDMFREDWWKFYHYIXDQUYTATFTJRDYIPJBCWUPCASRUEZYIWLQOMSHSNSIAVKZJQEZOTQDYXZBDYBICUFGBLUGEVCDOA");

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
    msg.setTimeStamp(0.6054408238745799);
    msg.setSource(45385U);
    msg.setSourceEntity(254U);
    msg.setDestination(51320U);
    msg.setDestinationEntity(74U);
    msg.timeout = 995U;
    msg.name.assign("TFYYYHQEFZSVFWBAYQXQCNFLXUPUXYXXLVEKCGEVSBBUQRRMJWZSWVTBJGIPCFKWRPTNKLTIUTIMVDHQZZJJAZNMRWENIHDIRQXJKZOEFGWYZNNJNDSHJQTGSQ");
    msg.custom.assign("KFACGUTWDZQUPOQLNDVENKGQAHTORKZENBXQTNDGCMAKFVSIQIRBOVSERXVGUVURBYVZIHJSJMYTPYENCHQIMYLXBDFSMXXSBKBYAJXTZNADCNWCVYBAPGHJRGKEMLVKPJCQW");

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
    msg.setTimeStamp(0.8384706123634719);
    msg.setSource(22437U);
    msg.setSourceEntity(56U);
    msg.setDestination(36173U);
    msg.setDestinationEntity(201U);
    msg.timeout = 14993U;
    msg.name.assign("FIQJXQFHUSEGQKUIWKVEUKVPAOOHTZMTWXZXHNVSXZCKDULABVHGADUDPNIWYMPSROBPLDXNVTATSXOUVLNAQLRBGUWOMWBRPCEXMWNJRGYPLDDZSMLEWMDRSLJVFROVJIQEGPOTACPPQCVTQKIYFGBFZNFQIJHCEJKUPIAJXKBRDRHNENBBCNYAHXIYGEOJIWFJBYMIBHZELWZFTMACK");
    msg.custom.assign("KBWVLEMPEGTCFTHYYBQHYRKMIXLNJLHPRIEUZUVVQJXAWABFCQCWKVPRUYGKXUVDNHRSZEUSJWNPIVSONDPGDCGZBUSNQDMDSHNYDHMCSEGEHBRSIRYYCZDQVROIUFWFEDASMRTFRIKMMWTTELNATXFPYDKOLRQOJWZAMVUGLAQCEGZOBCLOMWLNUKHIFJDKFIMOJZXGIIXOBPNCTYPSAOLTBJCJPQZBQNQFWZKYTXJWEBU");

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
    msg.setTimeStamp(0.33780695294039964);
    msg.setSource(50929U);
    msg.setSourceEntity(118U);
    msg.setDestination(48926U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.02273860035865294;
    msg.lon = 0.005436805444850812;
    msg.z = 0.0531769948626184;
    msg.z_units = 201U;
    msg.speed = 0.5248042549468948;
    msg.speed_units = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46502U;
    tmp_msg_0.off_x = 0.7003475668111271;
    tmp_msg_0.off_y = 0.5507471926902419;
    tmp_msg_0.off_z = 0.38253073487061406;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.00610126310466097;
    msg.custom.assign("IAQWUULNFXRFCXLOSZZAYBDNRSJWPQKDQKYSQROVGBJTCANCIGRREKMELIRUYWHIOVBBLDDJRHGDPTHZPARXVOYAHWSHSLXAVFQPZDQGTSEMNRGJUZMFPNUATZTNTUJIIVIGSLXESPIZLJEMKJTNLWYPEGHMYWHOWOOYTBCEGCWEBQUYFFVFPBIMCVJUFUJDKDGKMECDWMLXBTPZAVOZESXOHNYQKBAPMSI");

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
    msg.setTimeStamp(0.6938116707117651);
    msg.setSource(14281U);
    msg.setSourceEntity(4U);
    msg.setDestination(57436U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.8938155737452584;
    msg.lon = 0.5778808061214321;
    msg.z = 0.8681386753110035;
    msg.z_units = 84U;
    msg.speed = 0.34101863268450894;
    msg.speed_units = 92U;
    msg.start_time = 0.24723921001019278;
    msg.custom.assign("YKHJYILHLNYFUE");

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
    msg.setTimeStamp(0.727627544148271);
    msg.setSource(5973U);
    msg.setSourceEntity(158U);
    msg.setDestination(3045U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.06055996797130592;
    msg.lon = 0.12628350102746622;
    msg.z = 0.7033746517402515;
    msg.z_units = 13U;
    msg.speed = 0.27532634332755723;
    msg.speed_units = 216U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19756U;
    tmp_msg_0.off_x = 0.9716127155554809;
    tmp_msg_0.off_y = 0.0871641302205165;
    tmp_msg_0.off_z = 0.46229948053566106;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.13396290064611094;
    msg.custom.assign("DPFJHXAUQCDRFKEOASGUWFPCYWNCHAQXBFPQXAMYCSQRVCBJJJQEQVR");

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
    msg.setTimeStamp(0.5977013312679543);
    msg.setSource(46204U);
    msg.setSourceEntity(165U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(10U);
    msg.vid = 37674U;
    msg.off_x = 0.04891271110026629;
    msg.off_y = 0.2820949238155597;
    msg.off_z = 0.42857122694871397;

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
    msg.setTimeStamp(0.6243471626881928);
    msg.setSource(7370U);
    msg.setSourceEntity(24U);
    msg.setDestination(56348U);
    msg.setDestinationEntity(245U);
    msg.vid = 30693U;
    msg.off_x = 0.07638150878711436;
    msg.off_y = 0.31854828171585126;
    msg.off_z = 0.6481572652676238;

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
    msg.setTimeStamp(0.5394283870660651);
    msg.setSource(25487U);
    msg.setSourceEntity(43U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(139U);
    msg.vid = 52539U;
    msg.off_x = 0.5769618171864873;
    msg.off_y = 0.648897154209191;
    msg.off_z = 0.49958636428060954;

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
    msg.setTimeStamp(0.3155143308856496);
    msg.setSource(46776U);
    msg.setSourceEntity(24U);
    msg.setDestination(33702U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.8890171738917662);
    msg.setSource(63076U);
    msg.setSourceEntity(164U);
    msg.setDestination(33369U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.6109604288030253);
    msg.setSource(40476U);
    msg.setSourceEntity(2U);
    msg.setDestination(14862U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8419793482030559);
    msg.setSource(24466U);
    msg.setSourceEntity(63U);
    msg.setDestination(4931U);
    msg.setDestinationEntity(145U);
    msg.mid = 6668U;

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
    msg.setTimeStamp(0.5296791457837555);
    msg.setSource(33941U);
    msg.setSourceEntity(117U);
    msg.setDestination(48408U);
    msg.setDestinationEntity(177U);
    msg.mid = 63461U;

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
    msg.setTimeStamp(0.9029049449206472);
    msg.setSource(8194U);
    msg.setSourceEntity(64U);
    msg.setDestination(28433U);
    msg.setDestinationEntity(230U);
    msg.mid = 38453U;

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
    msg.setTimeStamp(0.23787044990373674);
    msg.setSource(22513U);
    msg.setSourceEntity(59U);
    msg.setDestination(1U);
    msg.setDestinationEntity(132U);
    msg.state = 21U;
    msg.eta = 32866U;
    msg.info.assign("UFBGWNSMCSIYJXMOXTVLIEPWMPNXFHANAKXUQAQCFZSKMSYQPIDLOOUEIXIVCDKCYHGHNGWBJFM");

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
    msg.setTimeStamp(0.21744683635924622);
    msg.setSource(58925U);
    msg.setSourceEntity(145U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(45U);
    msg.state = 206U;
    msg.eta = 64448U;
    msg.info.assign("BWDGQCGBHJEDVEYGMYOCBTPNTZREIXGSSKSXTYYKCJCFWQWBINHYIKPNALLTYEQNYMQLFMLFLPOIJDSJURKKXKRPQVEJBIKLWQEPJXOXGTQRVBAKDEGVHZFCBWFCNJOBYFUVKNHUVUMSBNWIZLXPWGNHKVABDXTGQIAJWMWZLDUODMZNINPUOSGRZZSORZ");

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
    msg.setTimeStamp(0.9313266246192826);
    msg.setSource(53143U);
    msg.setSourceEntity(68U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(208U);
    msg.state = 172U;
    msg.eta = 54826U;
    msg.info.assign("DTEZJRCVFLVPDPJZAEOPIAUEAVYYXEQQGECTVIKFISOYCTBBOMKQMRHFMJZIRBPTZYUEONCUYKLMLNZGLQYQYXWWP");

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
    msg.setTimeStamp(0.14251073729073138);
    msg.setSource(31125U);
    msg.setSourceEntity(88U);
    msg.setDestination(40355U);
    msg.setDestinationEntity(163U);
    msg.system = 31129U;
    msg.duration = 26532U;
    msg.speed = 0.6029853073815772;
    msg.speed_units = 227U;
    msg.x = 0.0453098907362135;
    msg.y = 0.8968368565017681;
    msg.z = 0.19081829217544044;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.01092601281280503);
    msg.setSource(17010U);
    msg.setSourceEntity(157U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(187U);
    msg.system = 27106U;
    msg.duration = 7455U;
    msg.speed = 0.40465123600749786;
    msg.speed_units = 130U;
    msg.x = 0.05997783241058441;
    msg.y = 0.14246250501937596;
    msg.z = 0.3804910356268961;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.606771513115933);
    msg.setSource(64322U);
    msg.setSourceEntity(133U);
    msg.setDestination(9749U);
    msg.setDestinationEntity(93U);
    msg.system = 19769U;
    msg.duration = 39822U;
    msg.speed = 0.9549182051134132;
    msg.speed_units = 207U;
    msg.x = 0.10033664774350914;
    msg.y = 0.20187978250995176;
    msg.z = 0.40488101429762047;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.6507733734172496);
    msg.setSource(24359U);
    msg.setSourceEntity(139U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.7841573450711646;
    msg.lon = 0.5585962406190451;
    msg.speed = 0.7057555989574622;
    msg.speed_units = 50U;
    msg.duration = 7307U;
    msg.sys_a = 53140U;
    msg.sys_b = 7950U;
    msg.move_threshold = 0.08008527893890394;

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
    msg.setTimeStamp(0.9229973532536667);
    msg.setSource(55961U);
    msg.setSourceEntity(228U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.2817081885814664;
    msg.lon = 0.10647910215793066;
    msg.speed = 0.758446574702549;
    msg.speed_units = 225U;
    msg.duration = 13068U;
    msg.sys_a = 64033U;
    msg.sys_b = 3819U;
    msg.move_threshold = 0.11423890672060588;

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
    msg.setTimeStamp(0.4402632952163248);
    msg.setSource(32738U);
    msg.setSourceEntity(67U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.5962553313279125;
    msg.lon = 0.5811640917053909;
    msg.speed = 0.681019724354229;
    msg.speed_units = 4U;
    msg.duration = 51267U;
    msg.sys_a = 62675U;
    msg.sys_b = 28606U;
    msg.move_threshold = 0.7987710800505513;

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
    msg.setTimeStamp(0.0546996996145086);
    msg.setSource(54068U);
    msg.setSourceEntity(118U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.8086516114822233;
    msg.lon = 0.8319853967877312;
    msg.z = 0.46714448138438314;
    msg.z_units = 190U;
    msg.speed = 0.12536870286829815;
    msg.speed_units = 201U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4702049491465903;
    tmp_msg_0.lon = 0.918076679192943;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BHLADMTHNAMRORJJBLCUDWPIYTJMFBFZSLWTGTJLUNEPHTCWMWOJYGSVAYWPJDQKGUJMQNYEESZXRCGTKPONOUBOJGPWQVQPT");

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
    msg.setTimeStamp(0.6987685847264332);
    msg.setSource(1750U);
    msg.setSourceEntity(226U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.31508283001924464;
    msg.lon = 0.29815184752123036;
    msg.z = 0.4716933851535271;
    msg.z_units = 187U;
    msg.speed = 0.5841287333731382;
    msg.speed_units = 238U;
    msg.custom.assign("VHECKHUFWMNZGEVZXRTRARGXCWFCSLEDWAMVWCYUANASFFEYUHVHQZMD");

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
    msg.setTimeStamp(0.5991936648430048);
    msg.setSource(54759U);
    msg.setSourceEntity(76U);
    msg.setDestination(7090U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.3723834200757138;
    msg.lon = 0.9586900754189469;
    msg.z = 0.741726107881161;
    msg.z_units = 233U;
    msg.speed = 0.9967136721903337;
    msg.speed_units = 169U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5013010046801379;
    tmp_msg_0.lon = 0.43675392437988103;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QCJDHMDZARQJFWCKHSHLBHSTFXWJLPKMAGDPETBYLDQAOEZFYIEVVUADTRDOPTRIMRQBWBZYQKVELXAJIWEZVXIJDCIWHIGKJURQOGLUCHIOKOTBBGEBNUMMESRPFGYLBAUWOSMIJQMVTBLNLKNNXIVCXHOYPGCJXJUIWSHKGZMKXEJWFLKYVRYPNOYQZNTVSFNQTG");

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
    msg.setTimeStamp(0.6360905680183007);
    msg.setSource(53945U);
    msg.setSourceEntity(51U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.6888243215135221;
    msg.lon = 0.25259182629739985;

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
    msg.setTimeStamp(0.4566493256258163);
    msg.setSource(3998U);
    msg.setSourceEntity(223U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.48829945132211194;
    msg.lon = 0.6013720098072489;

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
    msg.setTimeStamp(0.4075449320320791);
    msg.setSource(11480U);
    msg.setSourceEntity(77U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.6872450116195804;
    msg.lon = 0.7211621350318856;

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
    msg.setTimeStamp(0.829193485252011);
    msg.setSource(2293U);
    msg.setSourceEntity(181U);
    msg.setDestination(56068U);
    msg.setDestinationEntity(11U);
    msg.timeout = 5065U;
    msg.lat = 0.7958314708502552;
    msg.lon = 0.36831786035867764;
    msg.z = 0.36920074805722336;
    msg.z_units = 56U;
    msg.pitch = 0.6709985105829325;
    msg.amplitude = 0.4882744408217524;
    msg.duration = 8432U;
    msg.speed = 0.8729666528758748;
    msg.speed_units = 150U;
    msg.radius = 0.24705328459729448;
    msg.direction = 42U;
    msg.custom.assign("NRVEDZSCGAGZYTWMJOUUJVQIIVVUSGFJMTSWXWTUYNFVYJWEOHXPKLETKHBZTKFTUQELSKYIJBNBCJZSQKMHOOEGXRPWSUCSBXAXELEHYIOZKDACRVWS");

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
    msg.setTimeStamp(0.43030453312192396);
    msg.setSource(2800U);
    msg.setSourceEntity(57U);
    msg.setDestination(13893U);
    msg.setDestinationEntity(28U);
    msg.timeout = 15968U;
    msg.lat = 0.27221683979960976;
    msg.lon = 0.075683051375389;
    msg.z = 0.21020008830516312;
    msg.z_units = 21U;
    msg.pitch = 0.615621352804257;
    msg.amplitude = 0.6221951061188199;
    msg.duration = 13506U;
    msg.speed = 0.24415671108573223;
    msg.speed_units = 98U;
    msg.radius = 0.8664731138855937;
    msg.direction = 182U;
    msg.custom.assign("NCAQNZBKCEIHWHQKRUCGEBJGPJXYAINQFFUHRUQWBMHOKDCEKZXZKCJNCXDDBCRHVMQFWEXIGSBLVNHTLOILVOJTVPMUSZFECSTPDZFFVYLUSXHWUDNUXOAADTNTAFVDG");

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
    msg.setTimeStamp(0.31827053542048955);
    msg.setSource(13403U);
    msg.setSourceEntity(175U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(59U);
    msg.timeout = 55227U;
    msg.lat = 0.5704122126164953;
    msg.lon = 0.7144876183853146;
    msg.z = 0.1477360423266464;
    msg.z_units = 17U;
    msg.pitch = 0.3977765917105319;
    msg.amplitude = 0.9030907308323052;
    msg.duration = 15375U;
    msg.speed = 0.6539480500339835;
    msg.speed_units = 109U;
    msg.radius = 0.5255541436328495;
    msg.direction = 200U;
    msg.custom.assign("AXNTPJUJCUIKFQBDDXQCIUTPJOAUBKEUOGTLOTCDIYVDWNFOFXGDHRAONLLLZBHSKVSVZNVGLABEWNGWQZIUYOCEYXUZMQXDKKJWIASDJMGFFWHKIJMXFIL");

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
    msg.setTimeStamp(0.626752789105594);
    msg.setSource(55858U);
    msg.setSourceEntity(219U);
    msg.setDestination(45815U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("AMGFXNDPWBQXVEUTJPROEECICTRAGPEAKRHBXFTMKOIWXEVUDAKQCJDILKOLASDGISIEOKRQJNLARSDPGWONDHNQZCLKQEZEQIBOFDSVSVRTNJWJAUVTIPGHUMPYYPVWZHONHVPMJXBMRGGGZOBYBJLZRMRUFULSNHMKCXYFUXOCSTTLXJXHYDZYPIGITLONFJSVGCYKAFQWVWCDRBBSZTSQUCFYHHAEKCZW");
    msg.reference_frame = 117U;
    msg.custom.assign("LSXMBIOSVCQRANQPVTQFUSLLFWGNIPAMEHQNBOJRQJYHLAKCLGCSRJRPJUHDEBILCBBSMNKAATNZPCXWUETGHNZQOWIXMLLZBEQTEHJFGAYPORSKCMXLTVZOHHRHZYFZZMDTKQUWUZIJUJQFYWNDELIEXCJCTYBU");

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
    msg.setTimeStamp(0.0038851253699259125);
    msg.setSource(37249U);
    msg.setSourceEntity(151U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(96U);
    msg.formation_name.assign("QXCEFZKJNKKLTEVBQMRAKVZRTHSQVMASTENQDQCXFLZTDZSTNEPEWHBFZWNUYAWTCDGBVRBSYHKFNNSARGMGDLXLVOKQCOYILDHKTCXVPUTTOJMKJCWSJYMBBEDUDFIWPPITRWLXDLZIAHZVPCHXNSFKOEHOHFBXPUJZZSVXREGSIODPGQFNOUIVUIABEINRGYFJPBCUQZOCPWLMNYQUUXGVWMBAHROSJHUYKRJYRMMJOCWFL");
    msg.reference_frame = 198U;
    msg.custom.assign("LRNIPPDFVYYXBDJSFTXSXUZOGJTMMWWGCKBKMJTOZHYXGTDUHOMABIWQRIXKFVLNFRPRWFCZOUNBDNQBVSLCSWEXEMIVQVWNKDLUUHARDIVDRGJHAGBXXJRCHBLZWDIYTGVUOOJLWEYJMQDUQVWFSQPZTKIIPLP");

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
    msg.setTimeStamp(0.3311729644877178);
    msg.setSource(44511U);
    msg.setSourceEntity(235U);
    msg.setDestination(36061U);
    msg.setDestinationEntity(232U);
    msg.formation_name.assign("UFNIYNGDSBQDDPRJIPVSMVBSFOWOIEMSEGQADWWLAHCAGIUFQRYYENUJHUTHUNQIKTCLEBHGZSNFTUDDJGJKYMPCYTRJREMOWGPMUXHLMNYORUXXZUYEKIYSPBCRIAKMNDKQWFDJZGLIVIFZXRFLRPGPHKRBLFZTALVOTYQHQLMZKOKHCKSBZ");
    msg.reference_frame = 159U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35082U;
    tmp_msg_0.off_x = 0.3301919829878672;
    tmp_msg_0.off_y = 0.272350688144791;
    tmp_msg_0.off_z = 0.15085181564161998;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JJFGFSCNDVIZBKQTOXSLLFVOUVAUWRIFSALXPKRQWXOKMEOC");

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
    msg.setTimeStamp(0.8360620596402628);
    msg.setSource(38318U);
    msg.setSourceEntity(160U);
    msg.setDestination(46880U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("JONRZVNMWYJJUECCAMRJYTOUBEUVQTRYJLVPXQSBRAINYTXLNCRHPBKBXGDFCIGDGCHOKOILAUHVGAYXZWXZZRDITZCICVWBQOJBPMONSGGEZXZLISSP");
    msg.formation_name.assign("HAINAYEOQOXBLTHZDLZCGOAEYFEESSIAYSFVMSHVMWQUWVXKNNLHUTLGIONWQSJZCMERTIYWKMEDQHPPSSXRETLXXEWTHZGARBKYNWYJNACWDN");
    msg.plan_id.assign("YEEKVEEWBNBLOKQWLXFBHCOIJUDJPQPWVNLWRBMBSUGPIQDXFKCFVHFQVUGBZBJASFIYGXOXPAGQSTFJONTXEGLCJSPTRJOFHLPYSABWPGTCUCAA");
    msg.description.assign("YXVIEHHWLWCGRJLBTJNYQBOXWCSIATVQKFBKYWUNNXITZHFZCOOCYGMGDMBILAQOLCEQIAHCKPBXQKDSPIMIUHRGVOBRUTSVRYPXWHHVPFQTAGYSDLHULLEFEZTKUCSFWXPMBEPXLXJJPAQSGSWHYZNMDADCEWYMBPZYQIAQVBEFGNRRHVZNKNGGVQUUOMXOANJTZDUJAKTCWJPMDPFDDMF");
    msg.leader_speed = 0.9656692356986137;
    msg.leader_bank_lim = 0.9820184970150571;
    msg.pos_sim_err_lim = 0.40234486407384773;
    msg.pos_sim_err_wrn = 0.8510200026610167;
    msg.pos_sim_err_timeout = 10790U;
    msg.converg_max = 0.5355608855040205;
    msg.converg_timeout = 64994U;
    msg.comms_timeout = 28783U;
    msg.turb_lim = 0.16654723457308873;
    msg.custom.assign("WZFUCBNRBVJRNXGTZKPKSJEECYFXXSWOKGBYWRRMAICYFQTQANHUGBRBDDPHTBILAOIALOWZKLNLP");

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
    msg.setTimeStamp(0.7063148214459577);
    msg.setSource(13452U);
    msg.setSourceEntity(246U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(234U);
    msg.group_name.assign("RKWRVUSUGFEININLRGQZFMEZASXONQGJRQDQXCXDYMHRNKCZBJXJIYEH");
    msg.formation_name.assign("ZRTBKTCQGNFCYXSRRKMNDFVQAEIZVKHBXDCYEBIJXXXOUGMBTXSJIUPGOHURSGKXGCBWZONIONEXRBAOBZSNOKJAAIVOSIHZYFJFYLJHCQZEUMMVCSXLPBVUDTCBWXFHMHTILLLSLLWYAKZCMUQCKUWRIGZQRUGDVKWHHUIPFDTWANDKTEWYQIAATDLVQPPPWLJNQPGHYOSEMDFDVSEAJYRZQWPNMBPWYJYCM");
    msg.plan_id.assign("HHEHETLPFOEREXPFGTHFGLUMPSGHKPKPSACUCZJKYNJWSVTJZQKTJQRRQRRYFWNBYBXSEMZQLAZMYAVQHMZDAQIDWBNWIEODCLAROFJ");
    msg.description.assign("PHKVCUUOXKJGJMYCQVHETYBLQOAWKONJHOPAERARIXIGXQDWQNYVCNWMRGZNSJXUYMLPIZAMZCFOWDBRYRGNWVANCGGCFBYWLKDWASHHIQTFADJEYGCDEVFWELHZHQGBXKKYVHA");
    msg.leader_speed = 0.5526307594520307;
    msg.leader_bank_lim = 0.05750289474706838;
    msg.pos_sim_err_lim = 0.9109678621303142;
    msg.pos_sim_err_wrn = 0.36524284771870297;
    msg.pos_sim_err_timeout = 44551U;
    msg.converg_max = 0.21866004368589353;
    msg.converg_timeout = 49032U;
    msg.comms_timeout = 15883U;
    msg.turb_lim = 0.9379010852487301;
    msg.custom.assign("IWCIWEXPJPQYEVFRJMAFHMSATTSMIYQROROIJVULJALPZYPUWPSAYIQSOMELYGUCMRKLNNXPKXTXWIV");

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
    msg.setTimeStamp(0.2584965902015123);
    msg.setSource(8607U);
    msg.setSourceEntity(107U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("YLSEKXMYBSCATGWTEVFCFKPQFNPITYDMIJBDVDQNURGSCVUWLZMFEFXRZIEYWUKFCZZOZNKAWUPPIYXAELOODTWBRVPZELATDIGWJIGBDSHCQXDHAKYHGDSLTBAROFVDRGSEUSZBOOCHTCFZMOXMZRGLMBQHJJGYVJKHHQNFJJTXUNPGJVJQQOCSMLHFGWEKPQNTZDBQN");
    msg.formation_name.assign("KLHQLIHMZOOCLHNAYNMFFOEWWWPZMAWCKIJLPCMQSVCNPHSTCDVQXWKZOBXGHEAARFOBDYKBIWPUOAJFLRNCFEHGVQVBXOUMZGGJYYQEHXUQMXHQESNKPZOGKYYRW");
    msg.plan_id.assign("CEHDIEYKGOMZ");
    msg.description.assign("AJBKAAIVHVNMPEHFWTHSNFTKMWBFCBPMHSMWDKNBRJNJKZSTEDCWHLXEJBYOYTGTHXVZSOVEFGFQOGCYZVUIHRAPWHNTULPJGEBZXKENZFSPOSSODYKLONAIJILJEKTMCUZARFINDSUYLMPWXXDGDYQDAQFZLNNKVRLWMZFKURJXVQYOVCAGWYWXHQSMJPIWQRQITGBVUGOZPTCUCLUKPBQITQBSRG");
    msg.leader_speed = 0.5983709991177586;
    msg.leader_bank_lim = 0.6706844115676065;
    msg.pos_sim_err_lim = 0.48198898798297407;
    msg.pos_sim_err_wrn = 0.5318547279616842;
    msg.pos_sim_err_timeout = 53008U;
    msg.converg_max = 0.061116551193228896;
    msg.converg_timeout = 10311U;
    msg.comms_timeout = 9740U;
    msg.turb_lim = 0.4286144749447105;
    msg.custom.assign("RNRLBALROYWHUHSGVKMZXQXVBTKURETOEUWDXBIRWCKOSPLXQJJNISKOXAFYDIHSCHMNJPEYXJFGPFNZRKDTQKGUTMOSLFAPMBLQANBBYOKOEPYM");

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
    msg.setTimeStamp(0.9816419051102039);
    msg.setSource(52692U);
    msg.setSourceEntity(177U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(116U);
    msg.control_src = 24326U;
    msg.control_ent = 31U;
    msg.timeout = 0.4684560605392941;
    msg.loiter_radius = 0.18380107934523138;
    msg.altitude_interval = 0.6296747588304004;

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
    msg.setTimeStamp(0.7035094204568372);
    msg.setSource(36805U);
    msg.setSourceEntity(146U);
    msg.setDestination(29186U);
    msg.setDestinationEntity(158U);
    msg.control_src = 19183U;
    msg.control_ent = 125U;
    msg.timeout = 0.23559506805840325;
    msg.loiter_radius = 0.7655876183712506;
    msg.altitude_interval = 0.7199237289375138;

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
    msg.setTimeStamp(0.17693322274966128);
    msg.setSource(33144U);
    msg.setSourceEntity(204U);
    msg.setDestination(60200U);
    msg.setDestinationEntity(79U);
    msg.control_src = 49162U;
    msg.control_ent = 10U;
    msg.timeout = 0.2421181571859059;
    msg.loiter_radius = 0.8839307117156705;
    msg.altitude_interval = 0.8002728998627544;

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
    msg.setTimeStamp(0.763461341955745);
    msg.setSource(37606U);
    msg.setSourceEntity(176U);
    msg.setDestination(54945U);
    msg.setDestinationEntity(245U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.931474172256617;
    tmp_msg_0.speed_units = 101U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5321448344973133;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9604562318735771;
    msg.lon = 0.5520199826003837;
    msg.radius = 0.8615494227662314;

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
    msg.setTimeStamp(0.8354284791673006);
    msg.setSource(38485U);
    msg.setSourceEntity(74U);
    msg.setDestination(45860U);
    msg.setDestinationEntity(215U);
    msg.flags = 2U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.03804827102774555;
    tmp_msg_0.speed_units = 227U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2144561007660738;
    tmp_msg_1.z_units = 171U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2852066061364642;
    msg.lon = 0.9816710175740048;
    msg.radius = 0.35487533123846204;

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
    msg.setTimeStamp(0.9216632858224025);
    msg.setSource(35040U);
    msg.setSourceEntity(88U);
    msg.setDestination(47260U);
    msg.setDestinationEntity(85U);
    msg.flags = 237U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2602678845898512;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11336726205837055;
    tmp_msg_1.z_units = 224U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1471268319849287;
    msg.lon = 0.037972835483970346;
    msg.radius = 0.07055195248727097;

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
    msg.setTimeStamp(0.1407099825940793);
    msg.setSource(62907U);
    msg.setSourceEntity(20U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(2U);
    msg.control_src = 26601U;
    msg.control_ent = 39U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.16738049616134265;
    tmp_tmp_msg_0_0.speed_units = 252U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6133390059703117;
    tmp_tmp_msg_0_1.z_units = 101U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9196941004733452;
    tmp_msg_0.lon = 0.24893616680369612;
    tmp_msg_0.radius = 0.6430820436509822;
    msg.reference.set(tmp_msg_0);
    msg.state = 217U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.75899237458154);
    msg.setSource(16134U);
    msg.setSourceEntity(101U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(244U);
    msg.control_src = 15082U;
    msg.control_ent = 161U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 162U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.35739552872732827;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.38513024330297807;
    tmp_tmp_msg_0_1.z_units = 64U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6906927237928175;
    tmp_msg_0.lon = 0.694441827629678;
    tmp_msg_0.radius = 0.1828492965228813;
    msg.reference.set(tmp_msg_0);
    msg.state = 31U;
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
    msg.setTimeStamp(0.6986389376254939);
    msg.setSource(57840U);
    msg.setSourceEntity(114U);
    msg.setDestination(50102U);
    msg.setDestinationEntity(134U);
    msg.control_src = 58660U;
    msg.control_ent = 241U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 187U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7236872717717128;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2885394301977521;
    tmp_tmp_msg_0_1.z_units = 239U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7122050219993572;
    tmp_msg_0.lon = 0.031970223112111396;
    tmp_msg_0.radius = 0.6047786510192686;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 127U;

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
    msg.setTimeStamp(0.24062371568088725);
    msg.setSource(27056U);
    msg.setSourceEntity(128U);
    msg.setDestination(39503U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.1262215875195749;
    msg.ay_cmd = 0.8949140784880705;
    msg.az_cmd = 0.01314175393934347;
    msg.ax_des = 0.5277352356696877;
    msg.ay_des = 0.9236637054207598;
    msg.az_des = 0.27741976627966447;
    msg.virt_err_x = 0.6490250479475201;
    msg.virt_err_y = 0.08013619767094615;
    msg.virt_err_z = 0.896579495438737;
    msg.surf_fdbk_x = 0.21642226434387524;
    msg.surf_fdbk_y = 0.3391998791650186;
    msg.surf_fdbk_z = 0.7643994798668399;
    msg.surf_unkn_x = 0.7151992292818093;
    msg.surf_unkn_y = 0.055451500855240976;
    msg.surf_unkn_z = 0.6756138395981981;
    msg.ss_x = 0.9154022802720849;
    msg.ss_y = 0.06124555639331064;
    msg.ss_z = 0.4730472324979501;

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
    msg.setTimeStamp(0.8232284247619723);
    msg.setSource(26431U);
    msg.setSourceEntity(107U);
    msg.setDestination(32913U);
    msg.setDestinationEntity(213U);
    msg.ax_cmd = 0.0026427913443636264;
    msg.ay_cmd = 0.3463388261028072;
    msg.az_cmd = 0.2696073410975447;
    msg.ax_des = 0.346479494397652;
    msg.ay_des = 0.3974084504396792;
    msg.az_des = 0.4883468624848174;
    msg.virt_err_x = 0.9749676140651024;
    msg.virt_err_y = 0.06438748024877705;
    msg.virt_err_z = 0.2514717084147956;
    msg.surf_fdbk_x = 0.15855387447230118;
    msg.surf_fdbk_y = 0.49204782716540385;
    msg.surf_fdbk_z = 0.728141255028043;
    msg.surf_unkn_x = 0.5428623565236387;
    msg.surf_unkn_y = 0.8458216244084253;
    msg.surf_unkn_z = 0.7856634707655571;
    msg.ss_x = 0.7369109396311453;
    msg.ss_y = 0.2715961677738248;
    msg.ss_z = 0.4767069060330208;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LDUPXXPBILZAQMCNJSOLBZRSQBTIEMTQWKUKCOYQSHNHSDDOYTETIBSVVQSUFNUAZIWNGRFJBJMAWWVAEHGHGRBLBHJCKIRCRUEFOCFRXHKXMCYCWHTFXIEIQZCLGPUKZEYMWMVTFOFYGRYQYGOWDDZSTDGBUGJHIDEDMBYZJKZBPNVJGTWOGSVKIJIXEQHCXOPXNJMVUXRMLQPAORZOLKQPDEN");
    tmp_msg_0.dist = 0.748020888648093;
    tmp_msg_0.err = 0.19920535474949574;
    tmp_msg_0.ctrl_imp = 0.10690081576389487;
    tmp_msg_0.rel_dir_x = 0.8685657682381378;
    tmp_msg_0.rel_dir_y = 0.15458417049465634;
    tmp_msg_0.rel_dir_z = 0.9653678034926407;
    tmp_msg_0.err_x = 0.20570958422699792;
    tmp_msg_0.err_y = 0.5913117042477701;
    tmp_msg_0.err_z = 0.981356821541495;
    tmp_msg_0.rf_err_x = 0.3681013274366416;
    tmp_msg_0.rf_err_y = 0.4113636957967113;
    tmp_msg_0.rf_err_z = 0.3912647376209636;
    tmp_msg_0.rf_err_vx = 0.4710826694945204;
    tmp_msg_0.rf_err_vy = 0.3101877837656556;
    tmp_msg_0.rf_err_vz = 0.5132032226399648;
    tmp_msg_0.ss_x = 0.8092524296810453;
    tmp_msg_0.ss_y = 0.9304163618335543;
    tmp_msg_0.ss_z = 0.12998646525789315;
    tmp_msg_0.virt_err_x = 0.4441327985263025;
    tmp_msg_0.virt_err_y = 0.08641588585677673;
    tmp_msg_0.virt_err_z = 0.7169353163269491;
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
    msg.setTimeStamp(0.6739777401295021);
    msg.setSource(38274U);
    msg.setSourceEntity(81U);
    msg.setDestination(39873U);
    msg.setDestinationEntity(152U);
    msg.ax_cmd = 0.37661989782467487;
    msg.ay_cmd = 0.9243623477872379;
    msg.az_cmd = 0.12339449573245831;
    msg.ax_des = 0.20789082683754156;
    msg.ay_des = 0.2904762412986762;
    msg.az_des = 0.37223036355643224;
    msg.virt_err_x = 0.8893196127598639;
    msg.virt_err_y = 0.4970774842869772;
    msg.virt_err_z = 0.2548602268600797;
    msg.surf_fdbk_x = 0.9158900798621484;
    msg.surf_fdbk_y = 0.22261983540795827;
    msg.surf_fdbk_z = 0.6597821159584677;
    msg.surf_unkn_x = 0.09453490103733841;
    msg.surf_unkn_y = 0.7390981377043381;
    msg.surf_unkn_z = 0.17440757799840645;
    msg.ss_x = 0.45012488059919753;
    msg.ss_y = 0.4903461623516705;
    msg.ss_z = 0.23930016103396134;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OZFWIXPKVVFLCPNVEWWJEFGQYOZBOPKZEUQTSBULQUSLQJIDXYINVNDJGYYXESFEFJLXTTHWSWVNBBSGPYPIUAZRZKQJRDZTWGIJDVDTROPYADPDYCHCMCTLLEHUTUIGLAAMOVASKHTLQHEZWLJANURZVRHOFHJHOWABGVYOKEGNCPFFUYONXMIIMDOTMBRQKBRMMIAWBESUXXSNKJQUGNYGPKZCDFAQBRMZWXDPVCIASMCB");
    tmp_msg_0.dist = 0.6698439026001877;
    tmp_msg_0.err = 0.9558577555280883;
    tmp_msg_0.ctrl_imp = 0.14301892934928007;
    tmp_msg_0.rel_dir_x = 0.8939674999566822;
    tmp_msg_0.rel_dir_y = 0.965375426246935;
    tmp_msg_0.rel_dir_z = 0.9916245573184888;
    tmp_msg_0.err_x = 0.20697246416831716;
    tmp_msg_0.err_y = 0.31786822614735855;
    tmp_msg_0.err_z = 0.6590034553496443;
    tmp_msg_0.rf_err_x = 0.9337653458835441;
    tmp_msg_0.rf_err_y = 0.08147642314175818;
    tmp_msg_0.rf_err_z = 0.7126194784175403;
    tmp_msg_0.rf_err_vx = 0.28409507177354865;
    tmp_msg_0.rf_err_vy = 0.469257109825326;
    tmp_msg_0.rf_err_vz = 0.9218373731755202;
    tmp_msg_0.ss_x = 0.36517199642102294;
    tmp_msg_0.ss_y = 0.7424097033196884;
    tmp_msg_0.ss_z = 0.3505271358202241;
    tmp_msg_0.virt_err_x = 0.36965807180849763;
    tmp_msg_0.virt_err_y = 0.7451879507203034;
    tmp_msg_0.virt_err_z = 0.35947257090840956;
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
    msg.setTimeStamp(0.980574314998488);
    msg.setSource(25754U);
    msg.setSourceEntity(121U);
    msg.setDestination(55294U);
    msg.setDestinationEntity(166U);
    msg.s_id.assign("CBJOVOAXDYELBARTEXDZKMHFS");
    msg.dist = 0.4734045183406298;
    msg.err = 0.021000917281379095;
    msg.ctrl_imp = 0.10947629657326108;
    msg.rel_dir_x = 0.9154038491203127;
    msg.rel_dir_y = 0.46828659046990473;
    msg.rel_dir_z = 0.9343115562999174;
    msg.err_x = 0.1251931282276072;
    msg.err_y = 0.6381683502345831;
    msg.err_z = 0.8100495688642466;
    msg.rf_err_x = 0.1722781238532508;
    msg.rf_err_y = 0.44177298212365346;
    msg.rf_err_z = 0.6494052881312284;
    msg.rf_err_vx = 0.07850215918093228;
    msg.rf_err_vy = 0.3793946747026091;
    msg.rf_err_vz = 0.7059232276926467;
    msg.ss_x = 0.3336765310695773;
    msg.ss_y = 0.21612894306045516;
    msg.ss_z = 0.8329377165104278;
    msg.virt_err_x = 0.23619381243596071;
    msg.virt_err_y = 0.3259771933911465;
    msg.virt_err_z = 0.33879396302149856;

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
    msg.setTimeStamp(0.08622253185673401);
    msg.setSource(45446U);
    msg.setSourceEntity(221U);
    msg.setDestination(37176U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("SCPCORIPKRWCFBYOENEYYRRWDZVPTWKBAAUHZVHKZQGUYMSSOMHUAWEPSEQRMLFXKBBZMOLTJJVLTFDCVWWYQADBZYOQGNTQONSWERTLVMBJXRNNIZXCYIVVZGRUSTTGCAAHZLXANFEDMQIGYSMJNWNXJBJPEFIODKLKBGXKFJBFBMQLGPQZGDUHUXTIVDAYTQSREVWHIPSKNLCGMXREVHXFWDPUUQHIIJFGDDCOY");
    msg.dist = 0.5149500709318229;
    msg.err = 0.9844492140573896;
    msg.ctrl_imp = 0.15054842706438543;
    msg.rel_dir_x = 0.020993805161171775;
    msg.rel_dir_y = 0.7087682829904557;
    msg.rel_dir_z = 0.7207476906769364;
    msg.err_x = 0.0033398863718652194;
    msg.err_y = 0.6643654527556144;
    msg.err_z = 0.7641268229428678;
    msg.rf_err_x = 0.3789663481638872;
    msg.rf_err_y = 0.9646476099878287;
    msg.rf_err_z = 0.5990102756495205;
    msg.rf_err_vx = 0.7831419103490083;
    msg.rf_err_vy = 0.7149985035884654;
    msg.rf_err_vz = 0.7574280925458315;
    msg.ss_x = 0.43359466863400176;
    msg.ss_y = 0.8185756576106159;
    msg.ss_z = 0.43780138933486734;
    msg.virt_err_x = 0.7935139680722862;
    msg.virt_err_y = 0.1256745753607279;
    msg.virt_err_z = 0.6479014474521008;

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
    msg.setTimeStamp(0.9058428433954494);
    msg.setSource(33658U);
    msg.setSourceEntity(108U);
    msg.setDestination(49926U);
    msg.setDestinationEntity(199U);
    msg.s_id.assign("TYQMDIGUFJUWPMPAQEMIFTNHPVLSDAZTXWRBCYITYOZFRADGGGXMCAVFBMRDSNUBUXJHVAKAFMPF");
    msg.dist = 0.7872544536932365;
    msg.err = 0.5952741432053014;
    msg.ctrl_imp = 0.3321361995325629;
    msg.rel_dir_x = 0.0663766215368834;
    msg.rel_dir_y = 0.9484340325681083;
    msg.rel_dir_z = 0.31318427370841906;
    msg.err_x = 0.6199837481848827;
    msg.err_y = 0.8318715478777375;
    msg.err_z = 0.2333297870436971;
    msg.rf_err_x = 0.46864088614923993;
    msg.rf_err_y = 0.521930824784214;
    msg.rf_err_z = 0.9072483647911825;
    msg.rf_err_vx = 0.022422104778758167;
    msg.rf_err_vy = 0.2674020091989169;
    msg.rf_err_vz = 0.14830347693473056;
    msg.ss_x = 0.05963825110933885;
    msg.ss_y = 0.48706068720695883;
    msg.ss_z = 0.5749791300439955;
    msg.virt_err_x = 0.5642291004289294;
    msg.virt_err_y = 0.6068481711744814;
    msg.virt_err_z = 0.3913250089990956;

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
    msg.setTimeStamp(0.9203299964105213);
    msg.setSource(27154U);
    msg.setSourceEntity(195U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(79U);
    msg.timeout = 65373U;
    msg.rpm = 0.8305178406847944;
    msg.direction = 5U;
    msg.custom.assign("KMAXDZDJAUAYUKLYHIDVNDWQAEBUKATOMAIZVCRPPNQRRHEQKFQYMWGZIAMB");

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
    msg.setTimeStamp(0.34359678008321437);
    msg.setSource(27766U);
    msg.setSourceEntity(126U);
    msg.setDestination(29897U);
    msg.setDestinationEntity(78U);
    msg.timeout = 7929U;
    msg.rpm = 0.9573189925365252;
    msg.direction = 37U;
    msg.custom.assign("IOLNASGRNVAPILBKWZLMFPSBSXSYDTFDZF");

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
    msg.setTimeStamp(0.876652286118728);
    msg.setSource(31779U);
    msg.setSourceEntity(152U);
    msg.setDestination(11267U);
    msg.setDestinationEntity(121U);
    msg.timeout = 27321U;
    msg.rpm = 0.04377908187317514;
    msg.direction = 64U;
    msg.custom.assign("UPMCWCXUBQGJHGDIHYLJZUVLNFDUKCZBTEZRXZQBQKYAXCPCYSFGGAANIKBPTLGTMIRWLYPDFLUHVSPXDKBOEWOKJGZJOKZVATPHLMZMRPXJXRDNMWQWTJFXFLIPJCEPSVUMRIIQQYSFWDFSLAZTIOCENABUFOBFCNUHRAQQCZXGHOKFB");

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
    msg.setTimeStamp(0.12662079417310246);
    msg.setSource(11155U);
    msg.setSourceEntity(179U);
    msg.setDestination(58628U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 16U;
    msg.error_count = 184U;
    msg.error_ents.assign("UNPKKKIYJTJPGXGAZERRJLFRMPCLOZDNEKEKYGNYQFTVZWHQCFFVGMNTWKFEXDXUDOYHVRDWOHARHLJZBMWOMFSEWBLQNQROTIIKACAJGIASKLVNZPXAVIECXKGHEVSIVUBJQUBPTGHFQGFCTPRXOVSXMZBRDQCOOQGDNAAPLFPTSZDSSNRCUMNIZJWQPDXZWUSWTMIBMXLZNILUYBWAHMFDCPTYJYOKRAH");
    msg.maneuver_type = 35723U;
    msg.maneuver_stime = 0.08266270171730405;
    msg.maneuver_eta = 16253U;
    msg.control_loops = 1913737992U;
    msg.flags = 157U;
    msg.last_error.assign("ITDFPNMNNIFJUELSLLHGWRUZANSFABJWYVFMKMVKFRBWJYGTTUDCPJEAZNNRNCQSXPTSVUMXFJZUXGUXWVITWOKCXIERWPFGANDSCQXLUDODKMVSHQFXQLTWQZKTOXDPTSHYLZAJUGJHAOHAELPOPZAYWBYUJTB");
    msg.last_error_time = 0.3765161392154195;

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
    msg.setTimeStamp(0.20826057214154314);
    msg.setSource(24561U);
    msg.setSourceEntity(250U);
    msg.setDestination(27181U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 201U;
    msg.error_count = 74U;
    msg.error_ents.assign("XDMAYALCPAYTMUFPYMOOBPAJZVZKPYSJTELIQEWTSGDNROSTQAZLHJQAUOIRAWKRDWIUVNZWFELJYSHTBNMTLNACWTRLNIOHWPDKSEBNXQRJIQCPLYZRKGMFHCEPJMGLQFSFXZVXXNHCHXZDBUNOU");
    msg.maneuver_type = 53672U;
    msg.maneuver_stime = 0.6762727917129137;
    msg.maneuver_eta = 54353U;
    msg.control_loops = 920257856U;
    msg.flags = 91U;
    msg.last_error.assign("BLBJCMTOJTXVOJKDOJGXJSAWFJRPRNUNRQTVLNDFUOSQGPSEDCCSEMOIHUGJVCESSHYWOZFKGRZVXFFTB");
    msg.last_error_time = 0.21583083972083072;

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
    msg.setTimeStamp(0.09529170485483485);
    msg.setSource(52928U);
    msg.setSourceEntity(19U);
    msg.setDestination(61502U);
    msg.setDestinationEntity(113U);
    msg.op_mode = 214U;
    msg.error_count = 169U;
    msg.error_ents.assign("YKEHBOTJCBCYIMHKNRLLZWTJOQNSEAPPVGAPIAOBSNFCDWHLNQJBRGYBGZGOGYMDGKHFIQRBSESHCMIPCGKHYMDUYSTLTUSUVPQBRXXVMLXOWGOAFFEGPWPCASBDDVUAZXODHRJHVLDUZZMKJDPGM");
    msg.maneuver_type = 6417U;
    msg.maneuver_stime = 0.7736282818794085;
    msg.maneuver_eta = 32273U;
    msg.control_loops = 3714853567U;
    msg.flags = 126U;
    msg.last_error.assign("NCTUFXSKPPTSBPESJTNJ");
    msg.last_error_time = 0.7285466331228277;

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
    msg.setTimeStamp(0.0492307960999917);
    msg.setSource(61389U);
    msg.setSourceEntity(203U);
    msg.setDestination(46703U);
    msg.setDestinationEntity(88U);
    msg.type = 160U;
    msg.request_id = 58341U;
    msg.command = 231U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("KEPHYCJVGMWGDIIEWXOVTUJIOFDAKAVXOHOQWZHWCIEPNZQVNMPGUSJTDNXQZKCV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3810U;
    msg.info.assign("MRLWJOQAXTRHKZMCOSJGYZXZHTYIQKWEWABANGDHVQTZXMAUECNGEQEBWNEKLJOVKGPHLCHJYRZLSLUCEXJUPLETGSEJRJSYNZVXWVYWZBDNMQXHIKXMUQDQFWMYHITAQPFPOIDDKSVFTCOKIBOMSEYYFWPXGDLAV");

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
    msg.setTimeStamp(0.34383204976587844);
    msg.setSource(28107U);
    msg.setSourceEntity(194U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(19U);
    msg.type = 162U;
    msg.request_id = 53002U;
    msg.command = 165U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 55357U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.lat = 0.789504616305383;
    tmp_msg_0.lon = 0.10765919927762879;
    tmp_msg_0.start_z = 0.7299542759272515;
    tmp_msg_0.start_z_units = 215U;
    tmp_msg_0.end_z = 0.3968191967016339;
    tmp_msg_0.end_z_units = 25U;
    tmp_msg_0.radius = 0.9059465448002637;
    tmp_msg_0.speed = 0.037933702692422244;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("PZRSWFZBDNFVGBVATUHYUAIYGRO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65502U;
    msg.info.assign("VTJXTGHKMIFCAXDKNSZFXJEFWLNHIZBUAPHVPNRYMXHYBZJLVSPHOWMJOTPRGLYLPYFLGWSMTVON");

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
    msg.setTimeStamp(0.20672250773639145);
    msg.setSource(46536U);
    msg.setSourceEntity(34U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(86U);
    msg.type = 202U;
    msg.request_id = 50427U;
    msg.command = 31U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6175415726358658;
    tmp_msg_0.lon = 0.24035562553669187;
    tmp_msg_0.z = 0.16874705418111025;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.6998752197490132;
    tmp_msg_0.speed_units = 36U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 1897U;
    tmp_tmp_msg_0_0.off_x = 0.968550307640798;
    tmp_tmp_msg_0_0.off_y = 0.9470836795374414;
    tmp_tmp_msg_0_0.off_z = 0.05797061957180094;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.7407496202220768;
    tmp_msg_0.custom.assign("MELWBCZWCPREIKSVXHMBYIPG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38054U;
    msg.info.assign("ZKLPHBUMNAJVGDDKBJYPAEKBSBCPNIQTQFKLCOSMAEQMKJNBSZRGAWDDXJLLVMZSSACAXV");

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
    msg.setTimeStamp(0.001683912753249528);
    msg.setSource(11055U);
    msg.setSourceEntity(40U);
    msg.setDestination(9808U);
    msg.setDestinationEntity(179U);
    msg.command = 112U;
    msg.entities.assign("DUVHAMYNZKVKUJMSOSXVYUVPWVTOWERCWFXGKUQPGOCPVGBNTCPNNLHKWGUKUAARKEPKAXSHAFDLVBSMMZFIIQFPJJYUEGHXMTRGGJDAMCRB");

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
    msg.setTimeStamp(0.16192804791136084);
    msg.setSource(38206U);
    msg.setSourceEntity(166U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(9U);
    msg.command = 245U;
    msg.entities.assign("SSUDVUHGQYCPFIWDGZDPXAOANAELNKQYWZAWPNXXBOCLYIFR");

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
    msg.setTimeStamp(0.41409760998515277);
    msg.setSource(3594U);
    msg.setSourceEntity(232U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(234U);
    msg.command = 253U;
    msg.entities.assign("OLCOMKOVUDMMYLWILBTPLRNJPYTAHLKPRAHUUWVNDKNCT");

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
    msg.setTimeStamp(0.22392575906568513);
    msg.setSource(24303U);
    msg.setSourceEntity(193U);
    msg.setDestination(8339U);
    msg.setDestinationEntity(245U);
    msg.mcount = 204U;
    msg.mnames.assign("VWOPQFTYRNOYEITITDYKMUDGPVIRBSQU");
    msg.ecount = 9U;
    msg.enames.assign("IQCFDHRPLEIRDEXWYCUBFFYJXHAJSJAZUULMIBWYQKDQLNZUKOJCRKNTLHTBSIUOMNISBUVFYQCDXBATCCRHTPVQONCYLIWVKAAWSMTDDAMSDATPAKEEOGMDGOVIJJGRXRENGVOSXSNFXFLEHYFLOWOKRHMKUPVZGTIGBUVDFHENVGHWAXCQZIHZCZGTENPSMBXZVOPRQSKWWRFNSBPUPYRTZBTWPZGJ");
    msg.ccount = 31U;
    msg.cnames.assign("FXAOWYBIWYETSTCVGIEBVYXLISNIHPOHPVYEJJUICIZRHBDGRT");
    msg.last_error.assign("DBTTDWSYOUYYGQFOBSDYXWRFJTVWPEPVWBBKMCULXIPKQAWBYZPDUCVVLPSRHSPJAQEUMQWEEJGGEUYTQZNFNBOPFAPBZFTIDFSRXJQSOICHUNJGIXHAXYFAKMCWLKODWGEKLSOZOXIBVMDAASZFDLJKSXYNKNGELMMVGCZUNEUIGXSCZQQURLYIZTMCONMTQOM");
    msg.last_error_time = 0.4987761541752431;

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
    msg.setTimeStamp(0.08907500814516023);
    msg.setSource(19305U);
    msg.setSourceEntity(108U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(216U);
    msg.mcount = 82U;
    msg.mnames.assign("GIWQZWXTTZYSWOJWMYXRNBYWVJUPEYNMOVCUHCRMMJRIOZFUPKINLQARMGLBNONRZSODLLDFKYJULSUPCGAICLJOFSWEJVCFGNGTPNBAVEYENIXCRQRSJKXUEQHRXKUDIVAEXWCIMFTKHJOHRACXONBDFPGFCGHPQWKQXK");
    msg.ecount = 83U;
    msg.enames.assign("EHMITPFUAPJFSECPZFKHEMDLZEKMVORRCICYPMNULHMJMLAETFCUWPOQUVTKSYWJAKBXDVSLKVEFURYNQGMBBWUWOAQHVKCPQQESSNRGAAPSWUXSYGNBAYHGBIXNSFWNTQYYBLAOLRODZTIXJECRRXKNWBGCQDUOFTKPQZDXJHHZVSDBMZDODPFNMGJQJWROZEVLVHGJTZFJNQCKYTGKSWDGGLRXDILJCLBUVRAZHOWEP");
    msg.ccount = 183U;
    msg.cnames.assign("AVMOMQQXHRSEHECBRMAR");
    msg.last_error.assign("IMNFINZOLXQVLHJLFYOYSDHTJIBMEECBEDO");
    msg.last_error_time = 0.370828872098275;

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
    msg.setTimeStamp(0.6222260888407174);
    msg.setSource(57983U);
    msg.setSourceEntity(60U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(2U);
    msg.mcount = 20U;
    msg.mnames.assign("MQHUSDSRPBLQACYLIYKPALKZQJVSGWPIAWDDJGHGOVJFXBMJKGKZCISFONTDMDKPMTNUHERRVPXPVSEUCKQKBVUFDANCBGHEOCMYANUTMDAXPATLIWROENVSEAYBOBFXOQYRAYLIKLYLCFIJOHXDTVFFWZHCTIZRNGQMJSSOIQNCUMJGGFREW");
    msg.ecount = 125U;
    msg.enames.assign("YNVGIHCBYFYKWDADIVDDRSQKM");
    msg.ccount = 134U;
    msg.cnames.assign("LITKFNWRWKUNTCLPHQOWBPGRAPHDVMNOGTEEAAMCHJGOPCVBOJJEWCNRIOXDQUHSJKMJVDQLMQEKFNPSLTEZSQLFZFCNNAMFKQXBTHQ");
    msg.last_error.assign("KMPFVUWHDETLRLVLNOEKENARYSSEHGQVVJCYESTMOMRCFGSMUFHXWJYXXPCDFOVXJOZXJKAIGNZXVLPOEIHLYODBSHHICYTUMIRIZCBQPAIO");
    msg.last_error_time = 0.297238494760524;

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
    msg.setTimeStamp(0.8504539995741235);
    msg.setSource(45618U);
    msg.setSourceEntity(236U);
    msg.setDestination(378U);
    msg.setDestinationEntity(43U);
    msg.mask = 119U;
    msg.max_depth = 0.907051573226752;
    msg.min_altitude = 0.622301253776818;
    msg.max_altitude = 0.9269479069546177;
    msg.min_speed = 0.38768153368095637;
    msg.max_speed = 0.14991723646939126;
    msg.max_vrate = 0.2522724784782029;
    msg.lat = 0.8869576572292956;
    msg.lon = 0.20650036985181708;
    msg.orientation = 0.7959895460350083;
    msg.width = 0.09348795244127905;
    msg.length = 0.012769343652852316;

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
    msg.setTimeStamp(0.11553831300825235);
    msg.setSource(5059U);
    msg.setSourceEntity(53U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(147U);
    msg.mask = 19U;
    msg.max_depth = 0.7267181002278617;
    msg.min_altitude = 0.8370385785051001;
    msg.max_altitude = 0.6821812732299164;
    msg.min_speed = 0.705666174097821;
    msg.max_speed = 0.5988765289835298;
    msg.max_vrate = 0.180910904400841;
    msg.lat = 0.08631388370948412;
    msg.lon = 0.5153642501367289;
    msg.orientation = 0.8894578397711577;
    msg.width = 0.5830631390949651;
    msg.length = 0.6960653758269457;

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
    msg.setTimeStamp(0.2730868398977494);
    msg.setSource(20971U);
    msg.setSourceEntity(222U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(174U);
    msg.mask = 56U;
    msg.max_depth = 0.3977246801657004;
    msg.min_altitude = 0.26726092448464567;
    msg.max_altitude = 0.8814120175742975;
    msg.min_speed = 0.413671231328947;
    msg.max_speed = 0.276933418991558;
    msg.max_vrate = 0.443925356940839;
    msg.lat = 0.8202204144738141;
    msg.lon = 0.6150275870924317;
    msg.orientation = 0.7465390743457185;
    msg.width = 0.9059789720177461;
    msg.length = 0.9033065686513492;

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
    msg.setTimeStamp(0.31293397420297886);
    msg.setSource(1892U);
    msg.setSourceEntity(11U);
    msg.setDestination(32214U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6539491482484274);
    msg.setSource(50375U);
    msg.setSourceEntity(220U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.8227158047192631);
    msg.setSource(39728U);
    msg.setSourceEntity(73U);
    msg.setDestination(23703U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.028002553855986823);
    msg.setSource(39674U);
    msg.setSourceEntity(149U);
    msg.setDestination(12206U);
    msg.setDestinationEntity(113U);
    msg.duration = 13932U;

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
    msg.setTimeStamp(0.491354148139178);
    msg.setSource(25047U);
    msg.setSourceEntity(245U);
    msg.setDestination(6743U);
    msg.setDestinationEntity(106U);
    msg.duration = 43361U;

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
    msg.setTimeStamp(0.37414511375402704);
    msg.setSource(59487U);
    msg.setSourceEntity(23U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(7U);
    msg.duration = 42038U;

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
    msg.setTimeStamp(0.8984521501273748);
    msg.setSource(40619U);
    msg.setSourceEntity(31U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(189U);
    msg.enable = 194U;
    msg.mask = 189570332U;
    msg.scope_ref = 2161217811U;

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
    msg.setTimeStamp(0.9387191147441059);
    msg.setSource(21991U);
    msg.setSourceEntity(236U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(125U);
    msg.enable = 47U;
    msg.mask = 4249593599U;
    msg.scope_ref = 121120365U;

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
    msg.setTimeStamp(0.17385420911808924);
    msg.setSource(4419U);
    msg.setSourceEntity(123U);
    msg.setDestination(41011U);
    msg.setDestinationEntity(135U);
    msg.enable = 206U;
    msg.mask = 473303829U;
    msg.scope_ref = 2640367022U;

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
    msg.setTimeStamp(0.5433311390129067);
    msg.setSource(7883U);
    msg.setSourceEntity(254U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(204U);
    msg.medium = 136U;

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
    msg.setTimeStamp(0.8747395046973329);
    msg.setSource(62078U);
    msg.setSourceEntity(47U);
    msg.setDestination(57732U);
    msg.setDestinationEntity(210U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.8429085508219386);
    msg.setSource(45817U);
    msg.setSourceEntity(34U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(89U);
    msg.medium = 43U;

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
    msg.setTimeStamp(0.7861227026281593);
    msg.setSource(17612U);
    msg.setSourceEntity(17U);
    msg.setDestination(46199U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0441588851016933;
    msg.type = 217U;

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
    msg.setTimeStamp(0.5349522195728298);
    msg.setSource(32976U);
    msg.setSourceEntity(150U);
    msg.setDestination(21414U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6126181061458156;
    msg.type = 17U;

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
    msg.setTimeStamp(0.8205766293045033);
    msg.setSource(59738U);
    msg.setSourceEntity(65U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(13U);
    msg.value = 0.528120569039085;
    msg.type = 63U;

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
    msg.setTimeStamp(0.8844898402074888);
    msg.setSource(24528U);
    msg.setSourceEntity(178U);
    msg.setDestination(34213U);
    msg.setDestinationEntity(224U);
    msg.possimerr = 0.22011688939809937;
    msg.converg = 0.739524049991571;
    msg.turbulence = 0.20967784119690347;
    msg.possimmon = 0U;
    msg.commmon = 55U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.11909950355852028);
    msg.setSource(46764U);
    msg.setSourceEntity(222U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(4U);
    msg.possimerr = 0.2870223385982251;
    msg.converg = 0.5543708558400018;
    msg.turbulence = 0.8618910180299998;
    msg.possimmon = 23U;
    msg.commmon = 230U;
    msg.convergmon = 233U;

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
    msg.setTimeStamp(0.19347534357632223);
    msg.setSource(48734U);
    msg.setSourceEntity(35U);
    msg.setDestination(63821U);
    msg.setDestinationEntity(150U);
    msg.possimerr = 0.3390077043492081;
    msg.converg = 0.5717140187413096;
    msg.turbulence = 0.3750201565683722;
    msg.possimmon = 212U;
    msg.commmon = 228U;
    msg.convergmon = 56U;

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
    msg.setTimeStamp(0.4860997204274422);
    msg.setSource(25828U);
    msg.setSourceEntity(120U);
    msg.setDestination(11799U);
    msg.setDestinationEntity(14U);
    msg.autonomy = 115U;
    msg.mode.assign("EXRFJSVBVBAACRLVALOXABHDFNSAAPUAOIKQEZTKMCFGBJGBCJKLXNNIHQTKZHRERSGENQJPDQLCEJTVXWNUFWLNPFMPOPQWGBHTP");

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
    msg.setTimeStamp(0.5088744170545103);
    msg.setSource(43020U);
    msg.setSourceEntity(14U);
    msg.setDestination(45561U);
    msg.setDestinationEntity(249U);
    msg.autonomy = 148U;
    msg.mode.assign("GCXITYIPZFBMAXSLHLJSWRYKDRDZZGSGCGHHSKANROEPXTFWNHNQOYJYQBMLGCNX");

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
    msg.setTimeStamp(0.5645048258650609);
    msg.setSource(61723U);
    msg.setSourceEntity(94U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(240U);
    msg.autonomy = 74U;
    msg.mode.assign("OWCKULFTIXPHDKEOLMMMEYUGFEZTHHFAXCXFDPWMVMKHSAFOTEQHAGNNASLLBMBYAROKWUJDKPFFWESTDGCZFNECYDRZKMACVDAKEMJ");

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
    msg.setTimeStamp(0.4470559668180991);
    msg.setSource(833U);
    msg.setSourceEntity(179U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.5017097909203926);
    msg.setSource(2515U);
    msg.setSourceEntity(40U);
    msg.setDestination(62925U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.8654757307492199);
    msg.setSource(59572U);
    msg.setSourceEntity(198U);
    msg.setDestination(62836U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.4438656281970449);
    msg.setSource(18852U);
    msg.setSourceEntity(99U);
    msg.setDestination(57605U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("MUQVSACUHYKVSZDJXFODJUBQQJBLACKCIUKHAZONOWNNENDWBYVIURNDWTYGFLXGVMCUJESTWXQTSRRYRDHBSGBYKGWYCJRXSRIDKDFDHFSDTEPKKNHIGBBFMEHOBEZPWPJTZUBWFJECICOLZLZAFVQJPXBXOAACPMLPPLDNGWXSOYNVQZFEGTZPALQKZJRIMKTMRRVHKRJEYCLPIAMCSUOQVOFXYMMGGOQUWSHHINHAVNTTIIAXMZEPTFG");
    msg.description.assign("LKIZCMYEHJEXTTQWOJENMDUGBUZLBCSUVYFHJCDHQQUKKFDZQDBNADRMRNCAZVFFXNFEEAGBKXJTSSGIBANLZEHPAREKJKTTAVZQWWOUQXQKFGCVGVPNRSYYGLSRSSWNCPMGJDMXQTJYMAHKNJALCLBECKRRUSBEPYOZOTUVUYFOXPIXIVFVGNWERXUOHZLPRWSOFDTHIFVMODBPCOMUIJZDQBIWQAHPXMPGNIGWYZYWXCLTLLRIKWIHJYVPT");
    msg.vnamespace.assign("MFXFGXZFRSKQEUKNANACAYMJKETZVEIHIZIGUMEWSXEGLWQXPMHXGLLFVIWFFKVOLNRJJJSBTUCTJZDHKKHZRBNOBIMRLB");
    msg.start_man_id.assign("AOWDAPULAAVRTQZRTZKBYFKWVKVDEPE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UHWJYXALFRAYXGOPHZDHJEGBODRTVAONMAYXCDUALNJUIFQNRSEAGLSSSOWMMFJNXXDDASBUQIMBZLJCPPEUVHKCIAQRBOBFRVINQDIQVZHFXKEWJCUWYPTLWJICQECUEYFMXDIEEFLVKNILIRPGJRSHTYQTCGGUYPYYXTBPVLSWEIZAVZFDMTQWPUOOFVKBPKBWZSCOQVPAMTZJUMKKXCCGHQTFNKS");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 9257U;
    tmp_tmp_msg_0_0.lat = 0.9599077845125408;
    tmp_tmp_msg_0_0.lon = 0.6516486614186195;
    tmp_tmp_msg_0_0.z = 0.36439104057282334;
    tmp_tmp_msg_0_0.z_units = 7U;
    tmp_tmp_msg_0_0.speed = 0.46354545012459136;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_tmp_msg_0_0.duration = 19020U;
    tmp_tmp_msg_0_0.radius = 0.21553166387491052;
    tmp_tmp_msg_0_0.flags = 76U;
    tmp_tmp_msg_0_0.custom.assign("XSOMQBGAZZXHWWFLXVHJRQJYMREHUWEPRKMMPPVKCEMTSDIANCWHHGTNTNOJRUVSTQKIPXKCVDPEOKZNUFRYTULUFOJWSLDZAINFVEZYPXUPWSDRSZJQCWOCTUOARWOJNZDTMXEYABYZIGLXIGOSYLBNCRFIGDMBYBFQAPUGSTQVKFJCQDFLAJE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SKSNTVNHQTUQFURCPBDZYQYVFDSXLDJEEUVZUYPUGCAHHMTLYATJNPQRGXUPYWJYPFDUCMYAPWCWKLILPAXHVTIEMPJSKGQWLXISIMPZBWXNEFRQGRIKOKZZKVOFLTTANMHXUGBIDLXERO");
    tmp_msg_1.dest_man.assign("MVLRQTJKVKWWSBUUGCXJMRZTKPXJQKELIITVPKCBGVFEZPINWTDGCAWWSLSJUQJWOGOYUFEJPQDBNFRGNITCXIASZSIEDAHGDZHIMSUWUZQLZARCTJXPOGEFSXCBVMYMUNBGEMHHYVJZLYAURQVJUIMDBLGLRIFOGYTFXWWBFHASDMOBFOSCHSRRL");
    tmp_msg_1.conditions.assign("MIXPBRLBJSATVSJDYJKEWPWDMKHHWXWOFPIXLEYTDKXWWZXVXJRSMAOZRMYSQZOCTNDOIRNGSHQQZKPBUUKKFOURXAGFQCIQQHIOMJVCYRQUZJREVSYLVFCWTTXBNLCSWZ");
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
    msg.setTimeStamp(0.408575998220712);
    msg.setSource(45121U);
    msg.setSourceEntity(35U);
    msg.setDestination(40105U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("WSQMODLFPTUQEZBGRIYPEKBSCMZOOWHLHGTPIPARHRGWJEDKMRXZASWBVAOHTMNQKNQABTROOSPSJXJDKHQBWHGSIHAMRLMTEMKHVXZBFDFKBPPZRYYWUJOYTXLJSRCVXUAYEQURNMFJPJVWEIQLJHN");
    msg.description.assign("BUJFTGKIZBSPNUWNQKTZVSZAMVYLGZMXHSMPBRIOAGMQIXFOTEAYTXIDNEQFWGDXMSIDCZJMGOOFXVPWQYDLFWCESMNHLSRRRSGCSVARTHLTJECQLOFRAYXFPUJHGCAMZRLFOULIDHJIBTCPCLPVYHNZAJWJTXEUAOLZDXQBZBUDZDAQUCKKKJCBPQOERVWSQJPUMNSNTGPGYHYWAKWNLKYRKPKUVTNRFJEDGDEVXINBKO");
    msg.vnamespace.assign("IGPNEOBLCUPDERXHRHYKWAHQAYXHMTVCMSMQGNUPBCSAOFVWBTNRYFITEUBYIKMDUTNKVPSICIDOQFNFMCONOP");
    msg.start_man_id.assign("MPIGLVVJAFNTAXJNGXJJFZOCKJWFESDZFSRDXMWSDIZBLTYSLBHRMTHDUOWRKADXPQYDSNIKHDTPMTPPULPXECQQZYSLQYCWT");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("JVQGWGIHJNEZWFYXXFSYJQHMIIQSTFTHNVIMKQFRNXCXGBMECBMIOODNOVWDICDCNTXCHTQLVMUWNWOQOIGDKVEUXIOHMBZWAAHEVHPIEJAPSLBAUHAJKOUBZRLBJYMMSFBUGAUKUVZPGFWHCMNHAYPDTDTCWLVLWGYSRJROPRPTFENDSLDRCEQKYZLROKATTEXQSEUZJQXZMUSJSVJGSXALKZBYCELY");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8365936165698616);
    msg.setSource(53924U);
    msg.setSourceEntity(231U);
    msg.setDestination(17741U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("DFBBAZMMVAKOBEZXPNYJMVDGSHETQYDACDIOKRLGMCWQFQFJPFCOOJGNUHALHFNMXCUYUQOVLOQBDBJVFBNDFWXSMIEIEQSTSEGRITVBUPHLAIDCISJVRTNFGKZHPPTNJSLNRIWRLQUXKRHPXZKTUBMAHMETEGLWLQCCJKNCZOUYWKBXNJZRAGOYWBNSMZAIKYGOEPYLWPSAGDVDRIFZMWZTYHAS");
    msg.description.assign("AVOMNZLOAIFZRLGOAVGUYIJHPCUYPQRKEGYQEBMITMTFCJFUPJLEHAZFBSVGTKTXAHKNWXWQOPRPJUDILYOEGQLRIICREFVKAMBFYLTVMVBBQFUJEXWOKSXKNELZVUDNJKSVSXDQDIXDCQWZSTTYKYUHNLSMRMERYLHWUCXWDHXFNOAOSCMBZLF");
    msg.vnamespace.assign("UMDMOIKFDAGINAVAAWHKJEYQLGGWTQAKCSXPCWSMRVLEVETRZYDKYNFPXGVWCRYKULVLPKIQDBNRHXYMTDYOOWVCECLEEKBLGBSQQWRFKRVTROEPZOSEDOFLDHIFJMBUYBIEOFZCGXYDUCSBXRTNYPIBCUHVAGBZRJJQPPCTQPYZTTIXNUKLWIWZGH");
    msg.start_man_id.assign("LFNVPFUIKRILELBGLIIYNMEBWDEABJQIFXRCSJLPKHAVTNOWQRIBHKINYYDGXSOXUMJZWKAGZPOCKRUEFWZJCMWWZHRVYVGRKOFVLDNNYRNMLMMIOCSWEGAQQNEHXOJHDGSLYMTQRPQG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VKGKSGYABPPIUDSGNOERQPBOYALXPTLFZBK");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3055348729650119;
    tmp_tmp_msg_0_0.lon = 0.9526241444601646;
    tmp_tmp_msg_0_0.z = 0.20131858733799268;
    tmp_tmp_msg_0_0.z_units = 57U;
    tmp_tmp_msg_0_0.speed = 0.26742605392043084;
    tmp_tmp_msg_0_0.speed_units = 193U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.670909705390088;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3535336226459721;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("EYFWEWDIHNLZEOZCFAKMBIPNBEICPMRZFSMDYNXOFRJVZUDRBQJDANZSVGXBYCUX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::StopManeuver tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OUDBXQYXWB");
    tmp_msg_1.dest_man.assign("BKACAQCRORNRDOHFKEZSCJUCZSYXITDUNWDZSOFZWPLIUYHIIBSYGEJUCFNPSPVUXZLYMVNYKDUIESPGLMSWKLQRWBHWELZHKTZXYOMVTAUTTMIJRM");
    tmp_msg_1.conditions.assign("XHSDVFNGUUZVMNDVABBJKBHDQZVXICOUHKMMTFGXXTWXMIJCRAUJYJTVLAMNOMIWHYPRZLYKRDRDCTYJFTSGTKOHQJKCXSYHWOBAWNRVZDEIKDGMCLMAECEQFIPZHQSSQRGFBWLEKVOTBAZJUPNGKNOBCYQENCNIBXXJYFAFSPAIKJEPVNRZSEINUQRPLL");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("XACHTBUHQMYCSFJIYBOMXMYOPIRTAJNUATLIJQIRNZSVCENIXIHVWNAHPSYDVBRKSJITOGXDFHEZGLPVMBRFRLPFWZWOQTBDUSPQSFKEHMJZLJVBYLSUXEIHNCOQGWPQHGMPWZOVQMBXCNRGVMGXIYNCWDWMOCJCKYSKAVXTOXGXGWYEJRQULKSZEAOUASKOCAEUFRVNZDCBYMRVNTDTLKZKPDHLRFZYEKKDI");
    tmp_tmp_msg_1_0.value.assign("NSDOSDHDIRWLYXEMPIGTAKCNNFTLCVZZOQAJUEJCUPVKUROPWWFFYJNXBGKHGFCQEJIUAMZPRVRXHGAYHDQWBHIEKEYPOLZCHPH");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SessionSubscription tmp_msg_2;
    tmp_msg_2.sessid = 2590856804U;
    tmp_msg_2.messages.assign("TOKPSLXCOOYJHZJQFVRQDXJEIRYXYMUTJKCTXGRIETXAKPRSGCYJODREEVYDMESFPPIIGOCLHTDZOSANVTRVQYFBLKUAUUBCUZNNIBYVBPMTLJXESNCPJLLIHZXXUDMVBRAPPGEQZORWQMCACQKGDPZWKFGACOFBYIOFBHSGSUDLHJWMQHDBHNIKEDUZSFQRTZXTW");
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
    msg.setTimeStamp(0.32401486725029927);
    msg.setSource(44805U);
    msg.setSourceEntity(245U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(159U);
    msg.maneuver_id.assign("OPOHGVGXLSZQGJARTONIHQCGXZUKZMEISXPFMDUCWWYGHWPARKMLWPLEEVWNICBEWEEUIYNZHFNWMQNSYJSUJOFWSHPKURVLGLSLXSTXHMTBVTJDDADYKZOREYUOFADAVCRDTTKOQZXYYKZBFBJIUHLBJFIMHRDPUJAJGMUEATIEPCRNEBPVFXOTCYFATI");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 37045U;
    tmp_msg_0.lat = 0.09458914792050888;
    tmp_msg_0.lon = 0.5977776327200216;
    tmp_msg_0.z = 0.07674301092626956;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.30257533638660383;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.custom.assign("TKFBBWGSSNSXSRETNFYXNTKUEQWJCNTHYDCYPTLADMVCVJMLSZEEMRRXRMZHHHHVRMRNFOJNWBTEOPRGQTNAWWJ");
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
    msg.setTimeStamp(0.5407657842849312);
    msg.setSource(57277U);
    msg.setSourceEntity(107U);
    msg.setDestination(48845U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("YNCANZZGFZKDXGJAAZVWQNMYOICQIPELPUBDUNBOATJHDRWASRUBCYOSQOTQTJUPUBGFDRIKGMVLJXDTMVXSWCQQQTYXFMLMEWRIRFGADXPZRCJMLLSK");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("SLPLDYWZQVYJJWDYZMFHJLAPIYRQTYHXRHBFBHKJLGXOUORYFHRIUGTVQGGILNOTQCMIUQWNNZFZCGATSKQDSAWMIJSSJVJJKNQBXGEWOHAKXSVLEPCYCVBOMYDCOAZTIDLCWMDCAJLCNULRXAQOFHGHLBDYUJRSAPAVAKEKRFYKDBNBWVHNTEGRFZNXNHPOVI");
    tmp_msg_0.formation_name.assign("AXABQIYIGKHSGEITNOYQYKAIEGFEDCVDDTSHAVQKERKFPURLNNIONYHJHXXZEKGDHMUXNJYRXFATYCSJSHTDWBGXMXYAFMRLNDJUZJUUEMDZBYZLORCVFPLJTGOMXNQZVAAOWQSNRJNUXJSICTEPTNHSSCYLFHBXRVAZRVMW");
    tmp_msg_0.plan_id.assign("USKLSKOXOZAQSGKDYXDOGPFBAAKVVWVYTLOVJMNCIDNFGUXJJAOXCJEEZTBONAIFTYAHFRBOQLKHJVGQUJFITERZAGLHWDLPEKDJEXZTRJJMGHCPZVWESMSVZQBMMVQWZXQEDPFXENHOHCLCTOLQTEOMFPRXZIGKYNIHEBPUJRTNYINACNLK");
    tmp_msg_0.description.assign("QWKFMEDEIPWMJHBMXONYZWXHJZTMVYXIWNNBELEFATVWYZDBICDXNDAVJYYQMDKXWGNVBUZASCUFCGNATSLIGGKYZBMLLAOURUSQGWCLWMIRDRHFSIRKKRBRTVYUEQYPJPCKJZNGKFXMRSMUBTRJCHKWRIIIXOBCQYGGUNHEXQBHTVIDHPPSPSSKJATOCGUCYZEAZQOTFOVHVRUENFQJQJZAWLZLGSLEOVPFEAODQDTLCL");
    tmp_msg_0.leader_speed = 0.8993238218184065;
    tmp_msg_0.leader_bank_lim = 0.8716519714188591;
    tmp_msg_0.pos_sim_err_lim = 0.15975997503614303;
    tmp_msg_0.pos_sim_err_wrn = 0.5283300787976396;
    tmp_msg_0.pos_sim_err_timeout = 60349U;
    tmp_msg_0.converg_max = 0.1984165171571609;
    tmp_msg_0.converg_timeout = 58913U;
    tmp_msg_0.comms_timeout = 22152U;
    tmp_msg_0.turb_lim = 0.7118944497412153;
    tmp_msg_0.custom.assign("QNJYOXMUOJXLPPAVVEYCTFTXTXSFQJNELKGKJCLFHMASRZXKYBHBRWKZXUCKSZQUXMESUWITWSBMEIDVUGCIPNPYTONCBYCREFZVZGBWPZRUTPLYWWHFBAKUNAAWAVNHKTLHPDOPAIMSLAJPWOHEBX");
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
    msg.setTimeStamp(0.8225000037255072);
    msg.setSource(23832U);
    msg.setSourceEntity(161U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("RWBBPHHPIOKZHKUQNFZZMPEJGLRSFSWXYXYKRYVDIDYRHZHWAVGYUAJVXUITRPDSUTEAMWNGKDRJBPGCLDFKHSNRANZUJOLCMSHBQTAWHMFTUOLOERTNNSSLJVMCHSNCUTGIFEQNQOBFGAMMJCIPYJZQRQFGKWOITJZSTELBMEJWDLQABVPFLKIXKGHGVPAZT");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 2516U;
    tmp_msg_0.rpm = 0.21066810328190322;
    tmp_msg_0.direction = 0U;
    tmp_msg_0.custom.assign("LORZQGJLWNZHKTIKXAFJNDNJUTIKCILQNHCMAQEKHWSRMVAWSLGLYSODBEENNOKJTGDUWBPHKHEQMSSYTXJMKKEZCPUGOPJJMYEVQTUGXCEMQYAARXZFWMFSXVTBSOKNYBNSPJLHPCPTPTBVBYDLGNBFEWNCGZVDUVMIWUXYTGLWOSAIF");
    msg.data.set(tmp_msg_0);
    IMC::QueryPowerChannelState tmp_msg_1;
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
    msg.setTimeStamp(0.6971568933892205);
    msg.setSource(26501U);
    msg.setSourceEntity(243U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(119U);
    msg.source_man.assign("SFJZPBGOUSFCJBXMCFRSRHOIEGSAAVBPKBKLADVONYYZDIDEAMZWJKKSDHTWJYYQMWVYAVOVXUORNYZITNQLUIRQAHFBFGWDVERUTQICQIPCYNZFRGCRFXTESKNLCQSIJNYXCLIHWLIVSUZTLKNPHKSNDNUZWJQNFTYME");
    msg.dest_man.assign("FCQURXWCZGYVVMLIFWHWZZVPFGGJSNYEMJDFTWLPSPYUXBXTVIBADRUVTLAGFKCKERDCSYMELZQYXKJMYNPUWZEFQJCIXQJORNHDXNOTSBPIIOZBHCSWESKLIJKYAAFRMAGSBNYLOQUDZHUUKRRGGOIABJIPDVGHRYOVHWEEOXNQEARWZTCJNZQDHTOSDINU");
    msg.conditions.assign("XZSMTNFTRWWZGKHYEZVINMSYGKBPFESPJREMUJSLLARTBWMSULEDGKYZQYNZOKGNDBVGAKXODLVEHXINPQLGKROCYAJWHWUMGFEIHMHOSAADTXXRABVXHKHCOBMXXNSMBTJEZICVZTQRCTDZTCFMQKQYUNIQBXGDUDDJANUJIUBPWFOWFSGWCYIUPWFRHROWORLZHBQEVNHIYALLDJLOPAXCPPSEJPTGJFFIPDQNKRVLZY");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BGHNQIRDPQHXBITZQRGGQFLLCFQGNBPKMUHKJCIVISZGQFPMWCYHEOONSNACFNIUCHTDTVRBTJFWAGTOMVTQRJEHXQHPYAUPPZLCIKGUCOSZICGOKSPM");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NOWFDFPDDYSSEDVAXVGUCLVLJTHMFVPAOPSFQBDOUYKSWSDZJOTEVTBNUVTCYXYORJQVQAHHPRTHYBUJROZJZFMZRVSP");
    tmp_tmp_msg_0_0.value.assign("BUNDNBBYKHYLXJNDESMTBJCLBDPAAOZPCYTPUARXTSXHIAOBIYDUJLXMNSXVNYYSSPECAZEU");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2384260008166592);
    msg.setSource(26337U);
    msg.setSourceEntity(65U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("UDRTDSYIQQAKZSOJJZVUYAEKRRFOYEWQCXQGZYPCHCMAHFRTXPOXHIWBRUMWFSTMNZCYXQILMFXTQDNMHR");
    msg.dest_man.assign("ZOJYCRVNKQSYUHOSRZMTVHXFWPPAQZYQMFAEQUPXCINGJQABWCGBDFMNMMVQKWMGLREHAPOKRZLLGOOJJEIOLCIQEKD");
    msg.conditions.assign("CFGJKSNAWFZRV");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 469U;
    tmp_msg_0.ttl = 37695U;
    tmp_msg_0.destination.assign("XZPKHMKJCKSJLAOYEMIQGGZWPHFDVESNDLMHEYVLKWPIGFUQSLSFWXGUHWUWXDINAIRRQNMUIBLZBTMEJBOWOSHIXPRQYTJLMIHDPYJYQPVZOYFNGUNAJRTG");
    const char tmp_tmp_msg_0_0[] = {60, -28, -99, 122, 1, 70, -96, -59, -97, -8, 46, -35, -82, 24, 107, 20, 46, 9, -77, 38, -97, -110, 56, 37, -25, -57, -39, -47, 41, -62, -4, 93, 93, 116, 40, 93, 93, -17, 14, -128, 70, 74, -24, -114, 102, 86, -10, 81, 109, 26, -71, 41, -94, -69, -93, 51, -118, 48, 11, 11, -22, 100, 69, 12, -106, 45, -61, 71, -68, 73, 35, 108, -55, 74, -52, 124, -53, -105, -40, -66, -38, 123, 1, -56, 23, 98, -111, 120, 99, 39, 71, -17, 34, 7, -67, -58, -111, 69, -52, -11, 23, 33, -33, -96, 18, -120, -67, -57, 33, -15, -103, 22, 12, 118, 110, -81, -33, -5, -76, -109, 126, 64, -106, -49, 3, -61, 109, -23, -56, -121, -15, -85, 45, 13, 98, 112, 65, 9, 86, 92, -38, 75, 51, -47, 100, -105, 15, -93, 65, -97, -26, 96, -20, -50, 68, -107, -28, 119, 13, 96, -109, -12, -102, -126, 37, -13, 116, -53, -79, 90, -80, -74, 45, -89, 115, -105, -114, 116, -28, 55, -115, -122, -69, -127, -37, -47, -91, -16, -117, -33, 110, -64, 75, 76, 28, -45, 43, -77, 111, -67, 103, -25, -115, -80, 98, 113, 45, 109, -112, -3, -2, 43, 60, 89, -39, 106, -106, -47, -83, 63, -35, -56, -66, 24, 35, -76, -14, -118, -63, -51};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.13382088251181234);
    msg.setSource(26926U);
    msg.setSourceEntity(153U);
    msg.setDestination(49354U);
    msg.setDestinationEntity(153U);
    msg.source_man.assign("DEMADKYLGEZYFXBUNZGURCRTYRSLRKEOCWEOSILAWCQZWMPTXPHTNNGLKJUWNZYRMNHMTJUXJXPMTRKOGQKBECHLUSXXZJPWXHGEDEYJLGVZSNKAOPRBBLCNWVMTUPPLOHVAJPDDSIKOCVDWQB");
    msg.dest_man.assign("HGFPPBSIBYGFUXKCCFUCYOUYBTKPWFHTIHJNMHLTNHVTJFXGLUFBLMXKJQEZBRZXHVRNJVCNAQPUROBXGSMRLAZKRDHDIIUAFLLCQNFBAWWLAOESVXJSDERZMWPEVAEPCIDDUHUJVTEEJGJWZVJGOTOGPCSANMEJTRVDNYWTWIGKOXNCSK");
    msg.conditions.assign("TRJZCIWZJUHVVKPGNYOFUVRBELKWTXFKIKHYMFWGSXAASXPDNBVEMVUZNICPJRDQAFXXSECKNSYZBLJRLTKCUDZMHESNOUMDYIIZGMLCDEHJKUJQOWGQEJRESQBLMUIBOWHXPNHGGKYXYFEXCRWFRZSDTLNFPBHJZXKILGINDJNLPCNTOMTTOVVPHQPPMBORAORWUTWITQWLAQASYWUKGBZAYQAZHPOEGLCQFCMGSO");

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
    msg.setTimeStamp(0.6095611296989207);
    msg.setSource(36600U);
    msg.setSourceEntity(91U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(146U);
    msg.command = 83U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WXUOELIUTPQGYNOOMQHRFCVBDBUHTKGXISKZFWFENJMDYGACJRESTKJAMXCPPXLIMZCQNPJGGQHPVMLKVIHKVRHEJGADQYDSCVIOYHOMRKMHRLCEVILKLZBGUOJYKYFINWENOULAEWANXZMFYZCJNAXQCFEXSGFERUAPGEONTPRZBFAXBIGVRKVJTSBVNRWFQLTWZXDMBCBSULYXASYHVRZWDQTLSHDSIAPWTYQPPHTOTQKWZBIOUDUDWF");
    tmp_msg_0.description.assign("USHEFCSOORIODEVFXKLLNHQZQCVNIRIZKJJKZYXJTZ");
    tmp_msg_0.vnamespace.assign("FLOIAKIGPYKSWIN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KBLTLNDLAGCDKHGGDDJC");
    tmp_tmp_msg_0_0.value.assign("FQOLXHWFTLDKZGABWWLFGJWBJUCCPPFDBMQLZENDEWYJPEIKNIOVNICJSXRMACGLEGAGKNCUMSYIYYVEOMUSBQTTCILTNGCHKORAUXWTAPLDDMMRHKZNIOZOBKQEXPQVRUVXYLSOIBFHEPUUEZTNMVCWQVLNADJAJCIINVKBOWYXPFWVKUJMHSBRKVTDQZZHDWFJZRFZYIXANU");
    tmp_tmp_msg_0_0.type = 198U;
    tmp_tmp_msg_0_0.access = 254U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YKRNYEDMBDYKBSDZDWNZXRXCJEHBIMQBNVAZSSTOCGITJSUSHBVOYFTZTPTXTIBGOIMZSCLWQAGSTTRQWLNDFFKNMVCOSUCPDWYUGOXVMPHKWXCGUPHEKEUMURLNXZFALIJLKVQGOPCQJDRIMVIHJK");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HFPBRALWQZOAZXAOOTFNKDNPAHOXDJBBWIWZKLFIKBWCSK");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.24595656193549387;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8797497339289898;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5221146718245732;
    tmp_tmp_tmp_msg_0_1_0.z_units = 42U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.3497462531188015;
    tmp_tmp_tmp_msg_0_1_0.duration = 10150U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7541460722387491;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 128U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BYDNDCFNGATUKZPMDYJZZBENOLCCIOWAHHYJSVNKLBMRGBZFDGARRFFXZIWBHTFTOPMENAXEQVMSELIHYCADHDUMFGYLZEWDKPRXMNIQHUVY");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.7955773285681499;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.7696883226847794;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.41667897134879894;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 7U;
    tmp_tmp_tmp_msg_0_1_1.duration = 61820U;
    tmp_tmp_tmp_msg_0_1_1.sys_a = 40776U;
    tmp_tmp_tmp_msg_0_1_1.sys_b = 45084U;
    tmp_tmp_tmp_msg_0_1_1.move_threshold = 0.17308060907077671;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticSystems tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.list.assign("XLCZAYZGLNOFQVFLUXEBBTQAPPZAMVXVJKSFNQKQVGBKJYVZXGZMLTUHMIXNBGVYGZHPTEQISDCQDSKERNYTIABVXRHIHSOALVKJJYKJVPOKFNODTMZUASTUPIISNVHRWRRMCOURUPDWOCDZLJCEBNYHHCREWPIXWBOAFDPAXBTRQGKFMWFHPNPTQMCQLOUFBDUWNH");
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
    msg.setTimeStamp(0.5480887989133004);
    msg.setSource(64442U);
    msg.setSourceEntity(32U);
    msg.setDestination(14313U);
    msg.setDestinationEntity(125U);
    msg.command = 219U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NYNSUFWIYVIRBQPSXRGVGZLLWDOYGTQZTAUMUZCJXGBCJJZZFDOHEDEJJFGCDBNFAENCZLOVRQSBXOYNPPIWIMEDAQPIZBWAGLMMSPTYADTKFEAOSOWXZBQNYSQWSNYRRIJPHWLSGEOUVV");
    tmp_msg_0.description.assign("LIEXHIKIWVJNWLIKYPWGBHOJBFXSEZDOELBMAGHDCVMQGJZZTUDKWPXQMWETRNLOPRJRIRVZBSGFYGXQSBLRZRUJVONQAPJDOSCXFMKOWVNJUOKXLUITTIXTCTDZUDOESOFVIGFTHSQPMMYAXU");
    tmp_msg_0.vnamespace.assign("KBCZQNGHAFSRJRUQNGUHUZZDWHCKJOGZMLTSXAXNZSNLQLBTOPMPPJVBORRTXASFJFKLSCDXXAUBLNROEHWSVVHWKZOBYNHXNGRZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VTWFKVKHBUFPDKBYOLCFVUYLINGQPBNEZOFQGQSSNMHSDIQNOFINTRFLIGASAEPJBEJIVCSPIUOHLKXHTEWHZZBNUBSTESJDAVWTDGRMRXMWZITDKQRREKKXJRVXZGESHDJZDFWJPTEWLFGOXUHYFTBQQJMIJMCAJCZTUYZUOAQGXHUNMCZ");
    tmp_tmp_msg_0_0.value.assign("FFXGEAGAXUPYNHVQZSWONXDJBIRSUQFGGVKPQDRLEKFKZHRNWPQGHYGODVXZETUXCGRRTUOJBDLXNICWVHMAFCOEPXVMLEALSNHHTWIGHIZWYUPFOSUNBYWJPIKAYKPFLTDJSZQZMSPHCOXKWOFSQVJZIBWSRQATDYTYOIMKCVJBIIFNVBBAMMUHVZWTMICBAJJLYBKCQNEORAONTXEFWCEXCZQSCKJEDRLHPTATRGUDLMLDYERUD");
    tmp_tmp_msg_0_0.type = 226U;
    tmp_tmp_msg_0_0.access = 40U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DDHCEJRTYBZJPWACHJBHVCZCWGKRXFQOZTQUTEGE");
    IMC::EntityParameter tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("PSFYDWEGMIIDHWUQWREFMKQMMLMOZTVZBWYSVCIMICOUNSHVMYDVDJYNXZUUSHHZOTLQXJFXXGJPFAVLHFPKLQTYQWCQWANLPDETCSAJHKCFMIKCFCEDXVOALNBZMYESRCJQTXBVONFJUDYIKWBJPPNSGBROUCKRMUEQEPKRZHKEDVQNKLWRPPAQSXOIFGRT");
    tmp_tmp_msg_0_1.value.assign("TJGMMSLFMDTLLTXIBSHIGYZEECSDASZMUNVKBIHTULGJVRKSCWZYISIPYQIBWAXDOVQJNPMCSGWEZEABNZPUSHTKVMIICJVODJRUVMIROJJZAUKLKPHHZEGEQGCTHZPBBNFIOWVCPPTYWWXFHKA");
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
    msg.setTimeStamp(0.746492616958762);
    msg.setSource(5277U);
    msg.setSourceEntity(80U);
    msg.setDestination(42704U);
    msg.setDestinationEntity(112U);
    msg.command = 45U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQHJOJUOBKWLVKCHYJLKSFIADCQHV");
    tmp_msg_0.description.assign("UGLGDLJXBDOQJQKJMYJUPSVOETEZXNHUXCUSIHQ");
    tmp_msg_0.vnamespace.assign("OWQZGSBQYSZDYSYNATYSCKSDFUDUKLJHUFOYEXCNVPICAPTTPVVSHYCEUHRR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NTSCHAVCRHSNHJAOSFNHEVBWVFJMMYHQIWWGPVGFKKXGVQZEGZPOXCPAGCUFPIZKDBWDXYWNSONNGNXKIDQUZJUHHUAJBBKASUYZMZDVFLIFPOWYVLPZLWQCXKLIDDMQEJGGBHSKFITBEQDNPFBDLVJXPTWBOHTEURZRZVAECHOSXQICLTSJAYBURTQRAURJSYYGAEKXTLKMVGJFTEWYBPMNTCFSUDZYRMRLCQAOMIETOMNXIU");
    tmp_tmp_msg_0_0.value.assign("LZFNGCRZFIBZDKYLNAMLOSANYIBUEPKYHMBRZGJRFFWBJLGXXXUZHFQRCDWEOPVWNQGJIVUEMWSFXHHPBODJEQZAXDMPJAEUWPBQZOTLXXEORMUYIDTAUNXVKGUIAJBGOKISJMSGSRUFBHWSCHUQGZLNDHEPKTPIKSRPNKHTZVEJTSQMMMVDYETNWTVRYYIVLCTOJKAVWQXAQLPNKDCCQCWUFKLATTYRDSXCIYCHYELOWQHFISBMGVOCBGPA");
    tmp_tmp_msg_0_0.type = 99U;
    tmp_tmp_msg_0_0.access = 56U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ASNFMOVFSXQUBRTWTPUUWZYFWBEBVJPTIGMVJCQVAFGJERGZTCSRHDEKLEIXVCKIZRSPUPRAXVJSXZSEDSBMDLKRABKETWZEUATHCQHDGJVQBVFSQNMOHLIASIYZBHZWMELLSDDYDGYPNNULRLCLMYRMXOFRGJECMBMYEOXHBCXHFKWCYZFDFUNIKIHTAHRKPWQLGHKMWZWUQNDQKTYDXBI");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FPHUANMKDLJKCPXETDMMBTVFNYGGYHQBZVRKZLRGAUELQTIUILERNSFWCQHJVIDRPNQYBTBWGFBEBDRFIQYSMOWXKCBXIIKQACWOJJTSTRUSLXTUFIYOSAPKQKOGLFVJBUFMIAGJZJGAYXZAQPUEHADNOUUVVMZRCRLQDMDCPRKMDVPZWGQFJCESMBD");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 61170U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.10759096927846445;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.14356128175772054;
    tmp_tmp_tmp_msg_0_1_0.z = 0.40765893810216014;
    tmp_tmp_tmp_msg_0_1_0.z_units = 31U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8191270303508728;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 52U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.9117891087581135;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.08856512880409317;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.8822654476250715;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.49807390892984393;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OZIJFQFBHGXVPOIPRAUZTITLPBQJQMELHKGLJTHFX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MsgList tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticSystems tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.list.assign("SLXECWRGGBV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AcousticDiagnostic tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.enable = 236U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.1768809752152617);
    msg.setSource(33495U);
    msg.setSourceEntity(237U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(61U);
    msg.state = 168U;
    msg.plan_id.assign("HHMQIAJPXFTIOAWMPIDDDLJMFOQBRDCCRMTFVRWGRBMWJTYTOHPTJQUHQYTUVUFCWJXZVSXRCMBBYYCAWNEEOBLTZENQKNOYFSSAHGWCHBDHOEDISNSJLXMBZAROECVPKZKESQWKXSOFCUYPTLAGZISBCXIITUVXKUUMXBPGAHRQNVDREZYVMWVSEAGHDXYVINLNUKZSAPQZXAGUQPPGWLJJKKEYYGCLZJGTNLHNUELOBKMLRFR");
    msg.comm_level = 2U;

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
    msg.setTimeStamp(0.9261165226630473);
    msg.setSource(37319U);
    msg.setSourceEntity(195U);
    msg.setDestination(2008U);
    msg.setDestinationEntity(21U);
    msg.state = 52U;
    msg.plan_id.assign("BXPXIOMEGNEDGPTTRHSQDZFXHZAPLOGPAUAZTRWRXEWTFWMLOKUUBYFMVVOSVTLRUSES");
    msg.comm_level = 224U;

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
    msg.setTimeStamp(0.34908187059599904);
    msg.setSource(54835U);
    msg.setSourceEntity(149U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(196U);
    msg.state = 197U;
    msg.plan_id.assign("QPRMGLXXMZOWBWCXZMIJNLOPNZFQXMAJEFCWUDKCRUPX");
    msg.comm_level = 35U;

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
    msg.setTimeStamp(0.7742994218978447);
    msg.setSource(28257U);
    msg.setSourceEntity(236U);
    msg.setDestination(962U);
    msg.setDestinationEntity(95U);
    msg.type = 70U;
    msg.op = 220U;
    msg.request_id = 55675U;
    msg.plan_id.assign("GBBFHEOKUDPQXQSNJELWWAJTRVSIBWMFBFLRAXCRGUSTQZIGKFUYIF");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("CFPAFNRGUYLQXHCHQRANGWGQCSPADMTYHESDXBABKLPZNF");
    tmp_msg_0.action = 46U;
    tmp_msg_0.grouplist.assign("MDCWOMCNEYNLWOFKEMDVQBVMJYRRUWTLFESNPIXSYXTGKDUAERDMUSKBKWWISFIUGTHTDCPGFHZBSTIPWERAQHCZONFGEARYAPLDZAZMANFRDUCQIQPKDDLGAYXJIECMXQCBYCTLPBVVJKLOEZZHAHUQPAFJYTGBHCNF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("POARZPUYKUDXAJNRXINCBNHNMAMDIOCJGHKYLNMNGMYJPSZOZKGERAVKDMVJHRIJULDTFOGPQKVQXLXZZSMHVUDWPTTRGHBQEVDNRTFDEPZHPJSHLAKWBKJGLRIJFVZYYATYBSUCCTTMEHSWQBOFSQEQYXDUBIQWFYIISXSK");

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
    msg.setTimeStamp(0.9829079083338362);
    msg.setSource(23845U);
    msg.setSourceEntity(159U);
    msg.setDestination(64908U);
    msg.setDestinationEntity(64U);
    msg.type = 51U;
    msg.op = 120U;
    msg.request_id = 55448U;
    msg.plan_id.assign("LXKHRNKWRVKEWYMQSHTJTLWBYF");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.07138902974551598;
    tmp_msg_0.m = 0.8241543596462219;
    tmp_msg_0.n = 0.07213198538320109;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IKVBJSZYRKRCPBMYHCCQDVBDXGFUXOMLPTNMDEYHWEXTFGCIVDBUOQIVNAAUTEWQROEJHYYZTCABFWBKLKKPJZGYBDBMWHOPLYVVEEPMQSFPOBTOXJKMSXGFWLMIHAZDQEXNOPPDNRQIGUNBSYKPRNFPRQMMFZJCMRCHHALWUYZAL");

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
    msg.setTimeStamp(0.10534122403891921);
    msg.setSource(48932U);
    msg.setSourceEntity(28U);
    msg.setDestination(19190U);
    msg.setDestinationEntity(230U);
    msg.type = 128U;
    msg.op = 26U;
    msg.request_id = 16141U;
    msg.plan_id.assign("ILYRKEZODGPWPBPZQKTTNGIOQCDQSENPSAJEDRUEISGGCUVZQIIIUXPFYJNKXGDHFFFUNKJVZSUBYBCOZFEAUMJODVNMSWRPGSMHIQUSVYLWZTAKRBRAAFKMTEHZJIRCJKQVHYLMYDBKAN");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 63490U;
    tmp_msg_0.type = 164U;
    tmp_msg_0.utc_year = 37392U;
    tmp_msg_0.utc_month = 57U;
    tmp_msg_0.utc_day = 49U;
    tmp_msg_0.utc_time = 0.8131168234247282;
    tmp_msg_0.lat = 0.9676561371828585;
    tmp_msg_0.lon = 0.6608010268356577;
    tmp_msg_0.height = 0.03429882943881868;
    tmp_msg_0.satellites = 167U;
    tmp_msg_0.cog = 0.19434193125830157;
    tmp_msg_0.sog = 0.29318731569884116;
    tmp_msg_0.hdop = 0.314960218094803;
    tmp_msg_0.vdop = 0.9639166921672063;
    tmp_msg_0.hacc = 0.13646860691157126;
    tmp_msg_0.vacc = 0.7476428315953056;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QEXEFOKWBGSHAWKRNVZKMRSTCWBRZUGSXWTKPIGZOFDFLYOVDMSKNMYHNXSPJGOSCPWZGBYJXXCQPRMDHGFQYSTUXKAIBNSKVBNZOFPNEPMVIJXBQIYMNWWIELRCLALSCLABHRYPFVICQZZBRJZRUYHFFVDIDN");

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
    msg.setTimeStamp(0.8524991431165904);
    msg.setSource(35759U);
    msg.setSourceEntity(127U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(126U);
    msg.plan_count = 11032U;
    msg.plan_size = 2402346944U;
    msg.change_time = 0.8333739216294205;
    msg.change_sid = 56444U;
    msg.change_sname.assign("UHBXDNZPQVLZWSENHRPCATJTSRFJETOCTWZDMURQBUMXSEMYSWUEIQJXOCOACWRBDOFLOVGNEVTEFPOEZONDLCJFLQQKRFFBFRSAPXUDMZMPGXLYKHOEAKUWLXIIOVNGHNQXYKMZAIPKODJFHAHJJKBGLKNSMQPYHQIISCEHJIZGTPHTZDLRVMUVGATA");
    const char tmp_msg_0[] = {51, 41, -32, 34, -108, 64, -64, 63, 7, 21, -120, 19, -77, 39, 91, -35, -95, 70, 88, -109, -100, 58, -54, 52, -50, 90, -123, 13, -29, 13, 85, 33, 59, -78, 82, 65, 80, 111, 11, 119, 126, -21, 35, 61, -118, 77, -4, -54, -81, -10, -97, 96, 117, 92, -121, -61, -42, 72, -18, 25};
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
    msg.setTimeStamp(0.554299326662546);
    msg.setSource(5639U);
    msg.setSourceEntity(150U);
    msg.setDestination(20143U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 57221U;
    msg.plan_size = 4080270091U;
    msg.change_time = 0.8659907460942736;
    msg.change_sid = 58497U;
    msg.change_sname.assign("EQWKSGJSOCLMWXQGLJRQOVGLFOHRVAXZCBADSMIPEWNIPAOGIARCSXFYUBWPZDHCRSTTGUQBHJAPOLUTNTQZHKWMNOTFGPQQPAIE");
    const char tmp_msg_0[] = {11, -76, 17, -13, 27, -20, -121, -22, 97, -43, -79, -85, 29, -76, -69, 77, 53, 15, -102, -114, -63, -43, 125, 37, 66, 74, -69, -98, -31, -78, -82, 120, 44, 14, 64, -120, 11, 16, 106, 22, 86, 88, -62, 50, -4, -82, 122, -20, -10, -1, -45, -44, 44, -104, -117, -71, -120, -27, -102, -25, -98, 46, -24, 54, 44, -81, 63, 55, -45, -85, 42, 83, 21, 16, 23, -124, -36, -66, 62, -31, 124, 56, -118, -19, -85, -24, 43, 102, -16, 27, -79, 14, -37, 19, -37, -87, -61, 85, -122, -126, 16, 26, 98, -36, 8, -114, -87, 29, -46, -26, -94, 108, -107, 109, -15, 115, -62, 64, 5};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OSISJACXTIOCKEFCAYYRQWGZVRNHVHGDWYIIO");
    tmp_msg_1.plan_size = 8918U;
    tmp_msg_1.change_time = 0.4075829886104644;
    tmp_msg_1.change_sid = 1307U;
    tmp_msg_1.change_sname.assign("AIEXKBHDWFLGRSKHOTZRLHAGDUZNOCZQECNJATYFDTNTRPQHROBLIINEPKMFAUFMQEIUZKMFTHCJMOXJPIJAZYTRJRYTPITUVQSQEMBQFJZWHSPXPQUMUHAVG");
    const char tmp_tmp_msg_1_0[] = {12, -61, 28, 8, 37, -84, 116, -49, -117, 18, 13, -64, 77, -75, -55, 39, 33, -127, -102, 10, 34, -89, -118, -74, 19, 29, 108, -39, -21, -9, 39, 68, -80, 55, 107, 7, 79, 89, 57, -118, 57, -81, 52, -12, 57, 26, -118, -26, -114, -34, 25, 89, 29, 122, 8, 29, -110, 95, 84, -56, -59, 78, 120, 117, -16, -45, 107, -4, -88, 73, 13, 78, -25, -112, -20, 97, -27, -57, -113, 124, -91, -12, 69, 63, 80, -77, -38, 83, -60, -113, -73, 78, -117, -28, -71, 39, -49, 88, -21, -102, 11, 115, 43, 57, 123, -25, -93, 93, 48, -96, 86, -65, -11, -26, 39, 19, 92, 110, -60, -52, -68, 61, 110, -19, 72, -71, 62, -79, -3, -19, 54, -92, 14, -40, 31, -97, -65, -112, 38, -38, -39, -40, 48, -91, 90, -10, -64, -8, 70, -28, 56, 110, 118, 74, 90, 76, 69, 13, -23, 34, 24, 27, -108, -33, 104, -6, -55, -58, -125, 102, 90, 89, 87, 106, -7, -102, -21, 8, 92, -96, 55, 86, 14, 71, -100, 113, -36, -47, -110, 124, 13, -26, 94, 106, 74, -15, -20, 51, -114, -83, -6, -69, -35, -89, -128, -83, -70, -118, -10, 110, -45, -116, -45, -55, -124, -58, 105, 60, 5, 122, 44, -126, 92};
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
    msg.setTimeStamp(0.20394287358492924);
    msg.setSource(21476U);
    msg.setSourceEntity(126U);
    msg.setDestination(22135U);
    msg.setDestinationEntity(143U);
    msg.plan_count = 36154U;
    msg.plan_size = 694570626U;
    msg.change_time = 0.6936901567501491;
    msg.change_sid = 56449U;
    msg.change_sname.assign("UZIDCQUPKGOOOFMHSCJWHEZIERBWWMUNTBZEQFDJIPMQSYGNAEWYDBHRBRNNPKZVNEOVMXSWCAXFONTZTYJMJDHWALTFSVXNDXRBZQIWHXMQJGAPJUGGGZLBVMYFPDSUCGKVRLQCMAJKYNIUETSISTFRYTRQVANKKUBKCP");
    const char tmp_msg_0[] = {-75, -95, -64, 35, -25, 49, -6, -28, -3, -60, -16, -87, -25, 1, 6, 54, -25, -52, -25, 126, 103, 43, -42, 19, 86, -35, -115, -27, 52, 84, -44, -64, -94, 28, -20, 117, -5, 96, -118, 126, -43, -64, 53, -84, 68, -75, -18, -111, -94, 112, 76, 71, -65, 60, 6, -49, 93, 117, 88, 99, -51, -69, -121, 61, 90, -99, -70, -83, -7, -37, -33, 81, 109, 56, 37, -109, 43, -36, -18, -99, 79, -34, 98, -98, -27, 110, -31, 34, -80, 111, 12, 33, -103, -81, 39, -69, -16, 24, 76, 23, -70, -82, 49, 45, -92, 104, 110, 93, 71, -117, 68, -94, 64, -98, 110, -127, -67, -44, -105, -100, -70, -35, 125, -12, 7, 9, 108, 83, -104, 99, -32, -124, -103, -118, 57, -31, -52, -117, 59, 90, -81, 32, 80, -27, 110, -59, -10, -122, -13, -43, 17, -26, 91, 17, 58, 46, -66, 77, 108, 55, 49, -123, -63, 100, -38, 114, -6, 115, -81};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XWZGSCXTRHMBWCEAHJPXZNTBHWIQPUYRMZTPPOVJJOOLHXDILLUQQNFQPIEYTKTWCZBVMFFYDSDBGSVVUSQGEDSRZTFXPMFTVHGUGOUKLFKZPLVXRGOJNRDKDYDQMWIZEEEWNYBFMSBPXVORCVVKONEBNZAICLNAIAFZTPIHQJQYNEGAUQCVRLLIJKDZMGHMFUOWQYLJIBCKCAYHBRX");
    tmp_msg_1.plan_size = 11498U;
    tmp_msg_1.change_time = 0.9489916462912079;
    tmp_msg_1.change_sid = 36684U;
    tmp_msg_1.change_sname.assign("EVBFWLHFLMKHGKPPXCWTREJGPFSYAURYFOHRTZFEKRBEXNIBWGCPSIQJHVNAIMRYKOOVUSDIGBWMDDGIWKRSNUAKIQ");
    const char tmp_tmp_msg_1_0[] = {74, 72, 28, -10, 62, 114, -26, 123, 89, -11, -115, -54, 40, 9, 68, 27, -53, 41, 47, -50, 99, 10, 11, 11, 45, 105, -80, 7, -51, -100, 44, -8, 105, 8, 78, -80, 110, -42, 39, 120, -31, -16, 108, -123, 59, -24, -116, -111, -110, 71, 84, 14, 73, 101, 124, 91, -119, 88, -71, 117, 4, -4, -99, -100, -62, -126, 103, 77, 31, -29, 66, -20, -127, -86, -86, -2, 110, -89, 66, 100, 45, 70, 77, 57, 32, -5, -14, 80, 67, -68, -55, 30, -98, 38, 92, -108, -60, 40, -79, 17, -19, 110, 31, -37, -22, -65, -8, 52, -71, -53, 23, 47, 10, -107, 105, -113, 23, 4, 35, -93, -5, -77, -17, 65, -97, -94, 113, 8, -69, 35, -37, -7, 117, 92, -89, -107, 64, 97, 6, -25, -20, -70, 122, 91, -54, -28, -127, 122, -64, 37, -102};
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
    msg.setTimeStamp(0.0559286349079966);
    msg.setSource(32483U);
    msg.setSourceEntity(90U);
    msg.setDestination(33703U);
    msg.setDestinationEntity(11U);
    msg.plan_id.assign("WIJTIHHTXJAMHRHSBHFWVVDSNYNCABPXENJUTSKFPWXIASTKGVRRQYY");
    msg.plan_size = 13438U;
    msg.change_time = 0.5148135973374589;
    msg.change_sid = 62573U;
    msg.change_sname.assign("VZBETMRHFZAUOHIEJGWPGXFLPHAXTEAIKXQKTYRBXCYIYJDFVSNPUQMBVANPFVPUGKMAISVDYFPNSXEBRNSDLOOSXGCISYCGWZFRNIDTVOCTCIXULDNBGVCKBKPATHLHUJUNHUZCVJFWOJRZSAUPWMDHDYBQSWXNCYODLYRWTLVMZTGMBIUZOODNXQQPPOGAWYCRTKZKAFEMAWQEEZH");
    const char tmp_msg_0[] = {-35, 0, 55, 54, -77, -78, 31, 91, -89, 83, 76, -45, 95, -69, -125, -33, -28, 119, 99, 58, -105, 102, 82, 22, -103, 67, 63, -53, 16, 31, -64, -112, -99, 59, -112, 118, -23, -91, -55, 34, 51, 15, 8, -12, 71, -22, 58, -77, 17, -57, -10, -62, 97, 7, 41, 125, 43, -62, -128, 77, 93, -40, -65, -63, -37, -78, -76, -9, -88, -104, -121, -81, 16, 61, -89, 117, 120, 123, -78, 12, 45, 63, -98, -71, 64, -103, -59, -78, 96, -70, -10, -82, 5, -88, 57, 66, -25, 126, 22, 3, -4, -33, -126, -37, -61, 96, 62, 105, -98, 39, 115, 84, 31, 7, -115, -45, 89, -123, -106, 120, -12, -114, -63, 41, 106, 42, 2, -53, 71, -39, 39, 79, 109, 36, -79, 28, -42, -7, 60, 100, -122, -114, -22, 17, 87, 85, 111, -59, -26, 107, -95, 13, -120, 118, -46};
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
    msg.setTimeStamp(0.8299735304048628);
    msg.setSource(8455U);
    msg.setSourceEntity(135U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("YDECOVJDOMMNAXVTXISLBAAGFNMCIWEWQATMWYNFTLYSPYZSJUWZQBOKJTPYNPCRZVMIUEHOXPQXORCOKBFDZHQGEHREDPGJQBKWTDITXBBQSCNYVJLNPUUKPCPFZKFGRYSHUGVFVGILRMNCLISJEHJWSGTTOEOVEKHJRMZHZOLISSHIMQACBLXCKDVZXGQMY");
    msg.plan_size = 16725U;
    msg.change_time = 0.18116660562799658;
    msg.change_sid = 25473U;
    msg.change_sname.assign("KOFDVXEBIHNLMMOSLDTCGEHYEUVNTAOITMJTJKGOEINSUUMANRTCNQFDCKOPXPHYEQSFJFAZXJSLPVLBGZGMQADFDIKLDHRXSDUKACQGVUHZCZWBEURBYUABGWRSJWAZCVSXVWAZILZOYTASXWKCVLQTPRBWHWYEDIQEZXOJNF");
    const char tmp_msg_0[] = {58, -65, -62, 53, -121, 8, 103, -18, 68, -78, 30, 121, 69, -92, 110, -122, 48, -65, -56, -14, -99, 79, -8, 1, -86, -5, -39, -75, 101, -83, 110, -21, -98, -112, -97, 116, -52, -103, -69, -71, 18, -99, -55, 18, 15, 78, 87, 86, -111, 110, -120, -24, 42, 17, -119, 98, 77, 39, -81, -19, 83, -3, -109, 43, 117, -110, 125, 111, -125, -90, -65, -7, 91, 9, -52, -80, -97, -38, 117, 6, 120, -16, -54, 72, 5, 26, -22, -19, -71, -28, -47, -126, -111, -92, 76, -53, -11, 5, -47, -18, 5, 14, 77, -55, 60, 95, 84, -69, -29, 40, -13, -24, -66, -77, -116, -115, 6, -102, -42, -58, 78, 52, -97, 30, -24, -110, -19, 8, -16, 30, 83, -108, -30, -9, 109, 53, 124, 5, -8, -17, 121, 9, 120, 3, 17, -79, -22, -103, -55, 89, -26, -23, -90, 0, -114, 105, 22, -106, 35, -62, 15, 73, 124, 39, 94, -113, 107, -68, -26, -33, 58, -24, -80, 5, 113, -54, 106, -12, -66, 10, 39, 109, -48, -89, -22, -88, -3, -26, -94, -2, 68, -80, 35, 66, -18, 119, -28, 118, 62, -71, 32, -123, 72, 18, -73, -76, -82, -87, -42, -54, 111, -61, 120, -22, 6, -104, 72, 19, -30, -41, 50, 99, -110, 121, 121, 35, -109, 20, -100, -117, 85, -67, 65, -94, 6, -44, 30, -79, 83, -19, 16, 45, 100, 28, -41};
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
    msg.setTimeStamp(0.353766575021923);
    msg.setSource(21130U);
    msg.setSourceEntity(230U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("XWTAVPVDIQTIEPUGKHZCWCWVAGRQITRMSCIYHAMVJCNZFHOMANFQLJRBSBBINYHOSBFLXOMVKHDGAWJJPACRAYQTUQOWCBDPPCSNDEAEEKYGKXDNLWFUQIUUWUTZQHPYLFNANVITWTSFKOVJRPNLHOQJEGBAKKVZ");
    msg.plan_size = 22277U;
    msg.change_time = 0.019469720937832613;
    msg.change_sid = 35767U;
    msg.change_sname.assign("QTZLIFANWDDLYAECNSUQHAQTZGTLXZZAEJIVDTKVQLRXECOJCUQTYEMPFBCDVHMMGONAVUIWYFRHUVISBVAEYNNOWHGYUZDWNORLMMMZRNBRUOFXWGDYNVCKQIJWOSYRIZHF");
    const char tmp_msg_0[] = {13, -19, 20, -66, 55, 113, 110, -99, -1, 74, -105, 120, -110, -115, -93, -68, -76, 53, -11, 2, -101, 41, 16, -104, -115, -37, 2, -28, -66, 83, -122, -106, -9, -30, 34, 120, 30, -14, -36, 121, 60, 120, -27, 78, -125, 68, -75, -78, 101, -49, -45, -71, 71, 23, -71, 52, 77, -60, -116, -2, 4, -112, -3, 72, 2, -38, -90, -42, 47, -43, 111, -100, -90, -93, 93, -91, -31, -127, 63, -75, -109, -110, 3, 22, 104, 69, 62, -39, 48, 74, 60, -103, 123, 37, -122, 117, 41, -33, -112, 61, -94, 121, 2, -109, 10, 54, -57, -91, 6, 126, -50, -114, -111, 126, 89};
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
    msg.setTimeStamp(0.6849768979929841);
    msg.setSource(37578U);
    msg.setSourceEntity(162U);
    msg.setDestination(56722U);
    msg.setDestinationEntity(29U);
    msg.type = 93U;
    msg.op = 157U;
    msg.request_id = 46545U;
    msg.plan_id.assign("AQBCLTRLAZAARIHVMTQYXKMFUUYLYDINYYRTBPTCCQSOEMZEXKUDILFNOQGDMWQQPDSJHDZESKLBFSFICIPQQKFEKNZYOELNWGOFKQHGZMHNWAZLAJYWUYHXVXDBNR");
    msg.flags = 32787U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15748863432366222;
    tmp_msg_0.beam_height = 0.21779350075075932;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SPKLEUHHZIFGJMKUFCLXPEJREQTVWLTZMQDLPICEJIDROJZWOFUNXABUQRASRTZR");

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
    msg.setTimeStamp(0.3346499788265307);
    msg.setSource(37455U);
    msg.setSourceEntity(128U);
    msg.setDestination(55247U);
    msg.setDestinationEntity(13U);
    msg.type = 53U;
    msg.op = 126U;
    msg.request_id = 61134U;
    msg.plan_id.assign("KSQFWMLWYDJJKRWGBTLFHFGTRRZCMHKKOYOESSTNNKZZTESMZALGYSDBTMLULPTIRAIJ");
    msg.flags = 46121U;
    IMC::AcousticPing tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CQWKJWRXHJYOFWGICPKGINUTGUAELFSICBFELCPAKTMFOWZMPONCXTFZHDAHSLFQJCXVZQHDSEJRTXWETIXSLQNLWNAOGCDOZGABM");

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
    msg.setTimeStamp(0.9309839260665107);
    msg.setSource(869U);
    msg.setSourceEntity(36U);
    msg.setDestination(27528U);
    msg.setDestinationEntity(9U);
    msg.type = 14U;
    msg.op = 96U;
    msg.request_id = 49228U;
    msg.plan_id.assign("TUZRDZUKVEYJRUEWVDYNZGWCRMAFZJLJVPDZQPVOOKLBXZNECBYDAJCVMJWZUZNFBCJARRSSWK");
    msg.flags = 51631U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 50375U;
    tmp_msg_0.plan_size = 2645876267U;
    tmp_msg_0.change_time = 0.5134581460266344;
    tmp_msg_0.change_sid = 724U;
    tmp_msg_0.change_sname.assign("RXHBTDZQTZRJOEUABVHQUVXCNESGRLZLQNWPKMNVOVDMBVRQVIENSUMFUOGEWKUTDTOEYHTMYILCNBSFWIRLJWBQJXDHHKWKBGRYKIZYJDZOABIACMQQWILYOHSPUBGVUSLOITMGKJGASOPARQVPGXZXPJPFMTWDBKKCMHLYYXCCMXVHHWRD");
    const char tmp_tmp_msg_0_0[] = {-73, 8, 57, 61, 4, 123, 51, -58, -21, -17, -31, 12, 85, -21, -40, 104, -32, 95, -53, 88, -42, 112, 112, 94, -12, -109, -128, 125, 62, 69, -125, 35, -13, -43, 119, 37, -6, -107, -47, 56, 105, 23, -62, 98, -33, 40, 11, 11, -62, 68, 121, -99, -57, -27, 67, 110, 96, -90, 75, 37, 72, -5, 53, 120, -112, -71, 125, -86, -58, -105, -127, 15, 77, -63, 8, -108, 39, -3, -40, -40, -27, -99, 35, 98, 68, -123, -62, -60, -43, -57, 80, 44, 55, -9, -125, 106, 44, 65, 82, -35, 105, -39, -74};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HBNNBNHSIEJKYJUOTOGVDSFPJIGIFSPVIFVOJNJVSGMDODJABDCYRVHYAFBLZCPMFPSMTWANVIGRZCXBYXEZLGJFXSUKMEDTWEXEDDPAGNEOIXTAUHLGHMHPWMUPOQKUQLWQJVSPVOBMOTDBTUWNLCIZZCCMHGUZJCXQWLKGHIDWYCAYURDKMAZIOPFZTXASFLQSNKEPKZQVKLTASYNQIRXRNVEUBFLJRRWQU");

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
    msg.setTimeStamp(0.022607607565963916);
    msg.setSource(49485U);
    msg.setSourceEntity(119U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(207U);
    msg.state = 205U;
    msg.plan_id.assign("ITCXCSGLFPTDEBEWRJLASFMYJYKQXDDTQGTFYEGKMNQPWSAOWDULKULZTNRVHGZVOSMXOQINTBTCZXJPPHRYOXQKRKELJSBZUCKZAVRCWHQFOQXNJVFJAAFIO");
    msg.plan_eta = 261689277;
    msg.plan_progress = 0.810344452317016;
    msg.man_id.assign("KEESZOAARYQODGIDHMEEQETRYFMGBMZSUORROWIXSZPNPUQZNLBEUXUGSILBJHBFTIFDCHQECVXRYWLAAYCFWYWMCVXDFTXWGKZPRHUHMYQZJUQJWDSPKVTQVUPGXBAKVPDQUMHVLACHLTSUXTSWFCSSCFCGJOZAIYGWVSFLKJYJJKKLHOBMYNJARNGIBVIRIQPMWTLXOPGVLFKHQNTDTWADNIVBBONEONZNDRCUXFIJ");
    msg.man_type = 10436U;
    msg.man_eta = 1415868953;
    msg.last_outcome = 52U;

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
    msg.setTimeStamp(0.6996842402311285);
    msg.setSource(19636U);
    msg.setSourceEntity(95U);
    msg.setDestination(61576U);
    msg.setDestinationEntity(171U);
    msg.state = 172U;
    msg.plan_id.assign("PQUXAXNPBDLKCGLWGMRZRZJMSSPAJHFGVQFMWFDZTIFPBVNTCHPTHXYJKCRHMKUKYFKRBVOQLNNOCXBZXYSAAGVIINTPOQDHWNFANNEXNVSDXWQXWCTEPGHLDGJADIZVRMUPLQIEFRMKCEJEKQOMHBGQWHEXDUAVWKRZTCYPDKDUMGNIJWEJVTKLJZBBGSFTWAIFVYTYQZMTYBEIJXIUSDMURRSCRZELQVFYSOBECHOUOU");
    msg.plan_eta = -1936252238;
    msg.plan_progress = 0.2391061037427753;
    msg.man_id.assign("CATBHKTCOPCNAJMKKXFZPLEEIXEGHYPDTGWRIWLZYEXMTBKRDCUGDFAKVFFBMEQPZYSYWJHHNTWIUFOBLQKXTCURVHEMBYNTAVNQIAXYUROQSLJKDSHNZCJRGXAPWYWIOPLVLFDEEMBEMC");
    msg.man_type = 44257U;
    msg.man_eta = 13635900;
    msg.last_outcome = 27U;

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
    msg.setTimeStamp(0.9447544580293754);
    msg.setSource(49526U);
    msg.setSourceEntity(28U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(117U);
    msg.state = 246U;
    msg.plan_id.assign("XONXNNMTBJBHRVKSSMOISDCWBGAXHGYWKOQSAWCFKZCYHDUPFFXWMUHJODKFJMYPMBP");
    msg.plan_eta = 1816579011;
    msg.plan_progress = 0.15349322003431531;
    msg.man_id.assign("TNQBNSTIXCGMRPAHUAMQQFROKVEHBJWHJWHLICKOLWAVZGTVMMAHMICMIPTULFXBLRDWGTBFUYTHVAZDOVDZLQKJVYUGXXCYYMBBNGPKWQRSWILKMNNXJUUJQHAGXKPPYJCWTACOZAEKQCPSI");
    msg.man_type = 46726U;
    msg.man_eta = 1838969277;
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
    msg.setTimeStamp(0.4518078271024394);
    msg.setSource(58080U);
    msg.setSourceEntity(33U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(21U);
    msg.name.assign("RTIXMNQAMNHRAKSBWTMOEYHIEZNAJCXTDWHCIIKGJNGENUATODWLEEQZRZMORCYVIPOHJOLPFWUFYMKKMROXVXSUSHJEYTVCKUQFCJEWTBSIGZSQDGNVHAXLLEDZRRGXKVDUWPVCQFYZRXXNFQWYUJJGBNBDQCHOYULSKPXBZNDFWRBJKCPKG");
    msg.value.assign("QZQHDAMNDQJSEGBYXSLCWTEGPZPMVUOBVJYWNSENMDXZCUAJSLAOAZTBQCVEFRPQNYFCFBPEBBFDIYCFJCUVQMOJNHPTTLEIMHLVFTADZKKJIMUWWYXRAGKMRBCVAPRBBDCDOUJDOTQRFZQHNYWUKUZVWTIRDMQZXCVWFIHTHZUYYXRKLAOVKYMHKAOWOSMIXXKWPTFLPAYSLKCOEXIHGBEIJJNZSPLF");
    msg.type = 64U;
    msg.access = 206U;

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
    msg.setTimeStamp(0.222977410724706);
    msg.setSource(27923U);
    msg.setSourceEntity(84U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(13U);
    msg.name.assign("LDSQKMQAMUXRGEFXXXRKSOHKHLGVNOHGVTJEAZYNFOYFLVCVPYVQSUPCSJWYOQTFYJSEKHEUVJZTNPNIPQYSKJEBUILEGDYRDEMUNZCHGRQLSFAWITEMUPOXILCCGYWNWEDMXOTHAAUZGWKNDBLECZDLBXBCKKGGFTABROOVIMAUIJUAOXPXLQJSRCTFKHIMHBTRVBGPPYLQNCHQZFBFDXISVHVYSDTIBRWZNZJRZWQRMA");
    msg.value.assign("ESXGGMCLOKAWYNBISADDWMUBJCNYXVYGLPQTZSYIFECJAOEAFZZVXQXTFCNZWMMWRJRJYLPOQSMKRHWINSAYGERHOPDPSVIDVONSZUEXTHHUQEJHGLKNTLRYQFYLPKKYEQKBYIMOAPE");
    msg.type = 56U;
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
    msg.setTimeStamp(0.49008474346215336);
    msg.setSource(20842U);
    msg.setSourceEntity(106U);
    msg.setDestination(35232U);
    msg.setDestinationEntity(219U);
    msg.name.assign("YUQWPBZSAUZDAJWPZNQOFBKCFPYBGNDTIAOZTGCVBNMOEXJTVKTCQVDRVDLRPZFTSRVSJLBBRDHFJKIVRYILASPHSGYJCHVOUUWZHFBCUXKMU");
    msg.value.assign("PCKTCMBDPPFKDSOWZFKBFINYFVGTRWLVRQAONWCRFBOIAWJJULJHAICHQFYDTMCYLOEJLPRHDMYNHWKESFVBBUMZIAMBQNAYXABUMITRPZDZTU");
    msg.type = 99U;
    msg.access = 253U;

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
    msg.setTimeStamp(0.26587855979302055);
    msg.setSource(58442U);
    msg.setSourceEntity(64U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(207U);
    msg.cmd = 202U;
    msg.op = 57U;
    msg.plan_id.assign("ABOLNJXOXFWBCYEPTYXBKMBBOEZDFGKMECYATHPWNQOEJSRKNZRHVAMIMHRFJYRRXZAIOBORYUWXGGBVVLLCHOKYPNVHLKHZJIPLUHQWDPFGDLMZZSNXLQSRSJJGPAIIYDTGHQKUVDMCRECFXIURJDUWGTVFSFWHCGKNXCMWSIAHWQSZBXYNPEYSTVJIWOXAPBCTTAA");
    msg.params.assign("XGQIEWQYANKMABLIMKVBIQTHTMJQUKQKUCDWLNKZUGSTEGXEOOFESAFWOQALHDTDNDTFHEVOLUYVHCOOYVAGMITTFNRRCJOHBLKYWXMUICDLBMKQPKHYHFVLLNGWAEFFSBSJREZNPZKLICPGXXJQBIARSOBRDIASLSISUMYFEZVDHBWRJDVGYCJDXNWSEWCZUDBXQQZTCRGTBPYHMYNPXCGANFKUJOVWRRPEYPIZNHJWMP");

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
    msg.setTimeStamp(0.18914546504846552);
    msg.setSource(26576U);
    msg.setSourceEntity(177U);
    msg.setDestination(18286U);
    msg.setDestinationEntity(148U);
    msg.cmd = 147U;
    msg.op = 187U;
    msg.plan_id.assign("JSQWCTVUAKVRCKDMLJJTVCNOQQYRGRKOWYQKMVVDDGPSIPDAXMUNTZWFDHEAGTRYQLISPLXKUQJIPNQVPUXENSWOIFCYEHSYMNNQETSJZGKFEQZEZYBBMRRGPAYACZBFSHLWLCQEJLWTDVBJEHIATMZULWOANHZIPHPPRMOVZUVBDCOLLTNGONFUHXZFFSDXZBBRSUOBYFETNRHXLFCJRGWUYJDMXEXOTJSGDWKO");
    msg.params.assign("HZNAQDGZWYJNPVEOVYAJQNURGCTQAURDUZSWITIJJQFHBCIRETRMONJSLXXQWVEF");

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
    msg.setTimeStamp(0.04420203812987589);
    msg.setSource(16106U);
    msg.setSourceEntity(132U);
    msg.setDestination(7857U);
    msg.setDestinationEntity(224U);
    msg.cmd = 99U;
    msg.op = 240U;
    msg.plan_id.assign("JSDTXTECIZWRUPZVLFVCNPWKXHMJNYXWZRBQOCFVZRPPPSEMRYVYYUKNXFAFULVIXMHTAITBNSBJJCDBG");
    msg.params.assign("VESBLUFJKXFTJBYCFSERTQVFYNGFFCMEJWUXIWMXWUAPY");

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
    msg.setTimeStamp(0.4997406030457011);
    msg.setSource(37700U);
    msg.setSourceEntity(49U);
    msg.setDestination(15431U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("XHZAUSFDXKEOCZETRVJYASAURLMLHQWBADBTBEKYMOHJTIUNEQCJXYEPVKGCTQNRFQXRHPGRDHDQBVTSGVZJIXGWOIGYFBAFRZXPDUXMBEKLCRPEAHKWYKICVAXTCIMCNFNQVPZPERZVLDYSDGMMGREISTOWILZHSPVJPOSQUYFDRMX");
    msg.op = 191U;
    msg.lat = 0.7554133601080406;
    msg.lon = 0.7692383605340892;
    msg.height = 0.2620072943134638;
    msg.x = 0.03790464761081136;
    msg.y = 0.4504760534495523;
    msg.z = 0.35349317624305887;
    msg.phi = 0.19214175931450317;
    msg.theta = 0.6907299445514256;
    msg.psi = 0.5152513053997816;
    msg.vx = 0.3687177502669652;
    msg.vy = 0.4698466673231808;
    msg.vz = 0.3737326374305233;
    msg.p = 0.5979338682063394;
    msg.q = 0.07334763610154238;
    msg.r = 0.7873887005552344;
    msg.svx = 0.4604626279793105;
    msg.svy = 0.3592507151407328;
    msg.svz = 0.3734867044166056;

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
    msg.setTimeStamp(0.3815404654216732);
    msg.setSource(49818U);
    msg.setSourceEntity(33U);
    msg.setDestination(46113U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("BZYMCCKHMHSEDXFGYVSRNQVQWLTUXVJMPMFEGFWTTIGJGFYAOWWAYSQPBQUEJNNJQZROJRKVVKCMLCSZPQHUUUULKZUGIXQFZDRSFDULXHCMTOHVSNENBOIEJNIJINIH");
    msg.op = 215U;
    msg.lat = 0.038718668678915935;
    msg.lon = 0.6903048380834383;
    msg.height = 0.2694832065000009;
    msg.x = 0.9743094270859378;
    msg.y = 0.1819614909175028;
    msg.z = 0.2385506234798228;
    msg.phi = 0.47730237866481995;
    msg.theta = 0.6658585669959736;
    msg.psi = 0.6955133485131975;
    msg.vx = 0.4809938977540511;
    msg.vy = 0.45635959446283125;
    msg.vz = 0.3234586426178244;
    msg.p = 0.07432476353229478;
    msg.q = 0.17225138235803317;
    msg.r = 0.694373700292132;
    msg.svx = 0.21638551884627877;
    msg.svy = 0.3278875135116518;
    msg.svz = 0.08967975842492748;

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
    msg.setTimeStamp(0.0337673899213371);
    msg.setSource(41403U);
    msg.setSourceEntity(214U);
    msg.setDestination(35223U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("ULQHBSDWLBFZOXUTVMTD");
    msg.op = 236U;
    msg.lat = 0.395619577948797;
    msg.lon = 0.5142919759248904;
    msg.height = 0.06475647556886666;
    msg.x = 0.40080619275059803;
    msg.y = 0.272050485271906;
    msg.z = 0.6811079056926742;
    msg.phi = 0.12594877038828922;
    msg.theta = 0.7345972680834285;
    msg.psi = 0.38666937936575185;
    msg.vx = 0.11178854657759008;
    msg.vy = 0.1968729825710933;
    msg.vz = 0.2964000435416667;
    msg.p = 0.616198386317562;
    msg.q = 0.22299829981147212;
    msg.r = 0.8514706201526844;
    msg.svx = 0.13421747012768503;
    msg.svy = 0.7878890179355112;
    msg.svz = 0.6011741152881694;

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
    msg.setTimeStamp(0.6289996040444782);
    msg.setSource(10105U);
    msg.setSourceEntity(148U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.7789192225307295;
    msg.lon = 0.15729246021304522;
    msg.depth = 0.2452435617796045;
    msg.roll = 0.5553329655540915;
    msg.pitch = 0.3706334838380464;
    msg.yaw = 0.5752228224374343;
    msg.rcp_time = 0.48588036519639466;
    msg.sid.assign("MLORYVDSXZHRPYWQUWJKPYXEZQBVNXSSLIDAJZWEGBQGHDRNGNVMOYUANRMUBCXDZUXFKPKKHOXABYWOFQEQPQJWKBCKXWLPGHIADHMOETRYYVPOKVZTDJYYJZBIXCREJDQLNASNITCAMLI");
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
    msg.setTimeStamp(0.9684198372119016);
    msg.setSource(35384U);
    msg.setSourceEntity(157U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.8382533991522676;
    msg.lon = 0.21908071116928918;
    msg.depth = 0.3622036159062886;
    msg.roll = 0.8604145947067532;
    msg.pitch = 0.6574191051498682;
    msg.yaw = 0.770437429129515;
    msg.rcp_time = 0.35488479123694705;
    msg.sid.assign("EKRKGDVHEMRXNAQIOJXBJRJYKWNIZEGHQYFTHUKFMKQJJAKEEODAPADCFCCVQQXRTZRLSCVMWZPWWLOGSTYYXYWCMXSNZFSAXUPGEBEABILTGYCJNSUTH");
    msg.s_type = 80U;

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
    msg.setTimeStamp(0.07466235101246999);
    msg.setSource(45332U);
    msg.setSourceEntity(98U);
    msg.setDestination(5923U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.7580039014453872;
    msg.lon = 0.5146046501203216;
    msg.depth = 0.11967890488172361;
    msg.roll = 0.8005575854233332;
    msg.pitch = 0.5452072128884445;
    msg.yaw = 0.7344550994629794;
    msg.rcp_time = 0.4358937787927176;
    msg.sid.assign("AEYQITYMWHPNKXDDKIGBJRGZLOSXD");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.5919326401681984);
    msg.setSource(39344U);
    msg.setSourceEntity(251U);
    msg.setDestination(26104U);
    msg.setDestinationEntity(119U);
    msg.id.assign("DEHLRYLXNDZANVYYFJQPMBJXMVKTIMNSBFPAYMRTOIQPKBXOMJFPTGDRGD");
    msg.sensor_class.assign("JTXKQOWPFVGFYYOXKSLIJRBXTBHNEYOULVQMFFDBUEESLQLGPZOLWLLVAEXDSSISMBSTIOJUPGOLZKGTBNAAYAHRBXTFONFIZRJHDWCNVFXJBAUNNKZJRCXPEYIMJAXWPFLAWCTYKKCSTCVHQUEWBNMGIQVFWUMCKAOQZKAMEHKCEEHZVJUHASWDUTHCDIRIZGTMCRPYCDMWGQPGPNZOPRRQJXVHOQPVRMDTYRISEGVKU");
    msg.lat = 0.29776829231772406;
    msg.lon = 0.3480432420332684;
    msg.alt = 0.46479835013222437;
    msg.heading = 0.6865198734029834;
    msg.data.assign("BJBCGPGSUYNERSFFRLPTQQPXUKBEWXLQSZPTCREVLWDSMJVTXRHEJKNCOMGPZETLBFCSOCNLS");

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
    msg.setTimeStamp(0.9923809824870025);
    msg.setSource(9793U);
    msg.setSourceEntity(182U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(61U);
    msg.id.assign("FDBCUHXRZHDEWBPKMTBKNCRVGXVYOUMWKAMGHJFCOEYJGHGCYCLLMUCTDVNABRSDNVKJZWCMIEONDQFEQYWXXVFLDDARLAGPZSEHJYCIADQMZCOIXOFGNZDYNYOEI");
    msg.sensor_class.assign("QXPRZMSOXRFNRNIZORMPPPRYIBJJXZKDOESWQUQFGXDDNANNGHSCMDKWECWAYXFQCDYMJDAICYMGALINUVGMBPTPYVZHNLFDJOYMHHDXHVLWJEVTTYOZEMEVKRBBRNEUJUIKQQDFSUKWERFHFUIOGLTWCVGAJKQBWUEIBTZAQCTYTSKXLLUKOTFBEOELXJGKSZSVRCUTPQCOAGLZQUBMGKHWLYABJYNVTIFMSNWXHCIDHCSJ");
    msg.lat = 0.5138945904353459;
    msg.lon = 0.5657993728654322;
    msg.alt = 0.8536658560916968;
    msg.heading = 0.37815271482290147;
    msg.data.assign("XKFCQSKUXSVBEQMCOEUGBTAYEPZOHGEEZMBMALOKMV");

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
    msg.setTimeStamp(0.04437789087137267);
    msg.setSource(58605U);
    msg.setSourceEntity(155U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(88U);
    msg.id.assign("YJQWOXPDEUTVLWTP");
    msg.sensor_class.assign("RSDXYQROLSHAXMHAEIXRTTWBZEHQTZYMPMNEEKGLAZPVCFJQTWCATICPMLEOFULPXKQIOYNWFBEOJVVIMMCBUNJWXNDOCDJAUIKBCPGMRGPYYORQNHSVUGZNSWHKAWNLGPNKJPLOWLARYIVYTWJEFLYCQFTSCIIRPHKPFQDCBWQFMXMFRDJXJDSBADXGZSHERQQJBX");
    msg.lat = 0.0440276564047235;
    msg.lon = 0.662735249617228;
    msg.alt = 0.33054544660908447;
    msg.heading = 0.7917699000649334;
    msg.data.assign("NRMQDLGHXNKCRBSBOQIEQRNKUCTGYQVLWFGBLPOVMRZFBZSFFHAEQAKBAWRJWDNUJPGEHDRAPAYPBKSXVCXOFQEMJJNYYQSFZDSSFDSOYHZKRQHWZAIHAXUHENIVXHCYCVCNFBZHWWOYIRISZRMUKDUFTYZAAMBOYGPVBGMTQVRJKESEVLDWTOGUPIPWCMXGTL");

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
    msg.setTimeStamp(0.4952779785533701);
    msg.setSource(475U);
    msg.setSourceEntity(157U);
    msg.setDestination(64830U);
    msg.setDestinationEntity(208U);
    msg.id.assign("CJMFVQOBIBJAIBLXGCZFMPUSMLWNPECZWWLLXYUPKNVGKAVDJVDUNWKIHMAGFLHVUUGUGZWZWMINDFRZKEAPIORSRZBUNXYLEOBOSXGASDWMREJRGBXCNFLEHCRTDSZVVSNBIEIHTPGCZTSVHTFOTIQFXEKVKWBKMNAVUTRDPIEZMCYOKYPYDMHQOKYHJUNAYYHFTLPJGXOWCQATHPERBJDQESJJMDRGNOFYWTXC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UYXZJSAPMFMIDCVXTDTPFRSR");
    tmp_msg_0.feature_type = 215U;
    tmp_msg_0.rgb_red = 3U;
    tmp_msg_0.rgb_green = 106U;
    tmp_msg_0.rgb_blue = 207U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.44818281502651436;
    tmp_tmp_msg_0_0.lon = 0.11493055057491464;
    tmp_tmp_msg_0_0.alt = 0.2233520040780146;
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
    msg.setTimeStamp(0.47516761866068824);
    msg.setSource(21972U);
    msg.setSourceEntity(127U);
    msg.setDestination(13465U);
    msg.setDestinationEntity(219U);
    msg.id.assign("XLUYBQTDIYIKFNBHVPJALWATDWUVCEPSCBOEEHLVDHADJQECQAGIJKTXPWJDNLRWXQROVMPLMLMZVCYJBPZJFEINEBNGCCOIGTZSEKMMPSLILYUUXGTZGCDFRWRHQSFXNWMQJUWPWUTXALHWBS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QWVMDISRIPUKLFXBDFESZBEERRAZJHBQBYLFWRZZOCHCHZZUTISSEGFSGYJGDGFXJRQOMCWCKQIDFHCBVPMIPDNGBXVVFTYTFDBJEKTMAKCUFWOZNUQGORGAAKYCATOXWDKKQRHTPQKIBVRVPQHXMJTXAJPIYJRYYDKIFXOCYLHKJLVDMUWXW");
    tmp_msg_0.feature_type = 190U;
    tmp_msg_0.rgb_red = 18U;
    tmp_msg_0.rgb_green = 50U;
    tmp_msg_0.rgb_blue = 133U;
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
    msg.setTimeStamp(0.7907401308844663);
    msg.setSource(10880U);
    msg.setSourceEntity(43U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(176U);
    msg.id.assign("MAYXRXMQACANWLJXSPQMKDNEWEKVZILHSKZRBIBNOIWAROVFPLPGDNFJJIYKQZQNCOVZZWFBBPFNLVCDZGTHMPWUORXTHEWXUOAHUSRHEYRDOPGMKDESBRHJSVSXYGJYTCLKDSBKNCTUMULZVNWFIAQJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GIADUAYAWGZBXJBGUHJLRONGUQIBOZJZRPQDCGTXFPEGYJVDSJIEVABTQKMZSFDRZANTOWGZTWTEWIVCKCNJWYKFFCQWJYWFYDYKZIXUROHCSESUVCUBFXRXOXPV");
    tmp_msg_0.feature_type = 25U;
    tmp_msg_0.rgb_red = 85U;
    tmp_msg_0.rgb_green = 169U;
    tmp_msg_0.rgb_blue = 24U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.42710960781706464;
    tmp_tmp_msg_0_0.lon = 0.6581097469256213;
    tmp_tmp_msg_0_0.alt = 0.4092320650420488;
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
    msg.setTimeStamp(0.3441469411049236);
    msg.setSource(6387U);
    msg.setSourceEntity(180U);
    msg.setDestination(63551U);
    msg.setDestinationEntity(148U);
    msg.id.assign("RYCCQEGUMLBOWZCBRKFGNZZBUIJBDMEZPRICIXWPJPLTVMPSDRKLHYCSQBTDQTHZYJHXNRYDTCNSUYPAPOSUMODJWSHFQAIFKSJXNWIADSTDGFUWGOAOJVKEAZXHQFIZEXLFJZPVWRQSIWIQTRVRRYOCLGBULMKSKCEPZEGPMFOYVMTTNWAOWGXGVYVLWDCHCNOFNTEYFADNV");
    msg.feature_type = 5U;
    msg.rgb_red = 164U;
    msg.rgb_green = 221U;
    msg.rgb_blue = 17U;

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
    msg.setTimeStamp(0.2319963011256635);
    msg.setSource(54517U);
    msg.setSourceEntity(3U);
    msg.setDestination(12665U);
    msg.setDestinationEntity(181U);
    msg.id.assign("DJCJPJCUZIBOYLSPFGKTYRUVPEQXMYIMEWODHRAQGUAGUOEFLCFBRNYCGMIASLEJLZQKDBQDXUMNXWLN");
    msg.feature_type = 51U;
    msg.rgb_red = 5U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 43U;

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
    msg.setTimeStamp(0.5197796275979442);
    msg.setSource(9947U);
    msg.setSourceEntity(206U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(254U);
    msg.id.assign("TBBIQVYIQBSZQRKTS");
    msg.feature_type = 47U;
    msg.rgb_red = 53U;
    msg.rgb_green = 20U;
    msg.rgb_blue = 157U;

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
    msg.setTimeStamp(0.8732871651434);
    msg.setSource(59271U);
    msg.setSourceEntity(58U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.8158154786205213;
    msg.lon = 0.8013155837469351;
    msg.alt = 0.5667429129974332;

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
    msg.setTimeStamp(0.5794734507708823);
    msg.setSource(12691U);
    msg.setSourceEntity(25U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.7385816211604755;
    msg.lon = 0.21072372345844803;
    msg.alt = 0.9865302032739577;

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
    msg.setTimeStamp(0.06038728483251821);
    msg.setSource(6569U);
    msg.setSourceEntity(41U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.007879148335897868;
    msg.lon = 0.5390892396532503;
    msg.alt = 0.16925036800102222;

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
    msg.setTimeStamp(0.24091328213861818);
    msg.setSource(57673U);
    msg.setSourceEntity(63U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(75U);
    msg.type = 1U;
    msg.id.assign("PCZFHKTMWHDHOCDEYQFTJDZGQEQMFPHIOSOYTBVWIWQXJALKLBMMDYOXULEJSJAGWGZIAKXFCIQTKRZLQESSUUIXAKOHHNOJNGIMBEGVAAFGUJBYPUIOBADECLYYRBZFLBGXKHUUSCVGJYTMYAYNRGOQCVQVHENWRKPVTCNEKDMFDWMOBUERSUFXDIRPPSJVCRIWZKKZS");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.6951461798392432);
    msg.setSource(24676U);
    msg.setSourceEntity(198U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(135U);
    msg.type = 227U;
    msg.id.assign("OFWDYMXCYLDCMVIRRXNCTLOXPWZGHLHURAUWWAPULAMOEAJRKTUZWKFIVQPLHMQRQLNQSQNEOUAUHTHUSXGJJZQYGEFQVTETCYCFVQEJXREXNWKYZYITEYGJNOPNSBVPGDPBOXTFGWTYKJZISRJ");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.2536651223354698;
    tmp_msg_0.lon = 0.5701176693861407;
    tmp_msg_0.depth = 101U;
    tmp_msg_0.speed = 0.0024416014466452918;
    tmp_msg_0.psi = 0.5640356293223708;
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
    msg.setTimeStamp(0.14351567961891654);
    msg.setSource(56433U);
    msg.setSourceEntity(104U);
    msg.setDestination(19454U);
    msg.setDestinationEntity(142U);
    msg.type = 43U;
    msg.id.assign("FBORFCLVLRWLPQLXEXEBKFWOSAYIKUPFJHVPUSIWDSMJKWUQDXODYHDIBDJFXOSMPAALKFZWCUJOOZCHWGBQXYIQMARJRTNL");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 27426U;
    tmp_msg_0.type = 8U;
    tmp_msg_0.utc_year = 22569U;
    tmp_msg_0.utc_month = 133U;
    tmp_msg_0.utc_day = 119U;
    tmp_msg_0.utc_time = 0.37640979962856935;
    tmp_msg_0.lat = 0.8857975266349215;
    tmp_msg_0.lon = 0.47623337659158893;
    tmp_msg_0.height = 0.058538930439036574;
    tmp_msg_0.satellites = 158U;
    tmp_msg_0.cog = 0.3509298939760611;
    tmp_msg_0.sog = 0.56744970828426;
    tmp_msg_0.hdop = 0.6524189267328939;
    tmp_msg_0.vdop = 0.23245893265051654;
    tmp_msg_0.hacc = 0.9851639245132456;
    tmp_msg_0.vacc = 0.901966684723873;
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
    msg.setTimeStamp(0.030864126910032375);
    msg.setSource(41653U);
    msg.setSourceEntity(163U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(17U);
    msg.localname.assign("UTZLYEVTPFZSODYGQMKJVEBGKXWGLDFAETDMIDQUWJPXZVQPJCKKYSFSOSQSCUNVIUJRHBHSAFRDRFUHBIEOISRLLFCSPNOYMPJDQAZZL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NBOTECHGGXLPKHWBSDMOXLQRZBCBGOFQHFBRUVZUQRYZYVGKVIIEIHXHMSQISAZRPDAKFYVZSZKTPQSTTVXERGABWRWDGYZJKNXEUFKQFJPDQLDVMXIFCJJIPZAAMNOTEXJCCNJQAETZVEBNCVIADMYUUUKGAWXPPHWRXCMOGHYSLRSNCVJWECDQBTVSKLRBTFSNDWXEYUNQLKAMDNMOJOBYPAFIGMLUY");
    tmp_msg_0.sys_type = 164U;
    tmp_msg_0.owner = 50756U;
    tmp_msg_0.lat = 0.2755418889108372;
    tmp_msg_0.lon = 0.680626662575247;
    tmp_msg_0.height = 0.13441275160249244;
    tmp_msg_0.services.assign("ACPIVGZZMSBAPXCTJGBGWALHSKTJMALXZHHULFUMYHRNXKERDDHBWGWWXCJIDOOWLSQFGUTCFZNIRMLYGEHOLQATBRBQTMETZQKRJPDMINPEUVBQPCANIBQNIDHSQSIPDSHVDGJXLHTUREABDSMNOXEVKVPQQAFGOYQASMXUUTOKVFTHNZZRYENVBUMIVMCCWKSEJSOOXFPEVKNXGNTRUPLJDFGEWAORBLZUXYKKCRYYKZVJIWIJJW");
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
    msg.setTimeStamp(0.04857272515616351);
    msg.setSource(51059U);
    msg.setSourceEntity(106U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(81U);
    msg.localname.assign("KYIDZODJOYDHYZZBOMJKLTTVFHODSQTXHEQBBQDWUZSTPQSLFHURCERZILMCVVSQGPHPFIYWAWXMMCANEUASCABPBUDYSXWRATWCN");

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
    msg.setTimeStamp(0.8781703803929377);
    msg.setSource(4286U);
    msg.setSourceEntity(127U);
    msg.setDestination(21240U);
    msg.setDestinationEntity(143U);
    msg.localname.assign("GKYADOUJZJSXFNREGQUHBRYZXPHCCNAMZDIHPAMVWONGOTBCSKOUNIZXUWFVHMICL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WXDKNIGFBOKYTRQPRMHVQDKRJPIU");
    tmp_msg_0.sys_type = 149U;
    tmp_msg_0.owner = 21523U;
    tmp_msg_0.lat = 0.027034253587906676;
    tmp_msg_0.lon = 0.23863308563528218;
    tmp_msg_0.height = 0.4140529225664048;
    tmp_msg_0.services.assign("TABLTZQNVPGGDSINSQIFTAPRJRLHDNGYPLUXEKMHKOJYVTPOFFUZUXIXDCQZDCUBTLLFNVRYOTJRBKSDEPZIYFVICCRLHVVXMHHPXCEJOSQZELSUAEPGHEMLHOWKSKRYAVWNRIDAPHGDSPZCGVCFJPOMKVYWMUNXBJMMUOXGOWZUTAIMZRLOERWCYAWNWJODCMDMFWEKTQNBHGAKGEFAEIJGTFLCYJ");
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
    msg.setTimeStamp(0.9970379619261075);
    msg.setSource(35597U);
    msg.setSourceEntity(25U);
    msg.setDestination(24788U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("XHFGXTDWYPPUPNRBQSKXMKEAYZM");
    msg.predicate.assign("CVSFTMTNKRKLCMQSGEKZLCKNS");
    msg.attributes.assign("ETLADHPIXFCXVOOEHPNKTPTUWLFPQCVUBNMKDUFQZDXHIFNIEBQZWYPJIOJCCSCPRGEJEENYWIBKCVLFEMGXHZXGOTKARZNMVKWAHNIZJOVSRAHLZSMBPEXVSZBQDLHFGJQUWCLSVFSFRMYJRRWXBTRCSYDDIEGZMSHXYSMAYWOATRUEGMVCFQGGJUPPGUTKOYTZCDUKVOUBNRWLFQRUMIHJXIKYKPIZYTWBDXJQKLHOQJAOMLAVNAADGTL");

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
    msg.setTimeStamp(0.6352033871828016);
    msg.setSource(49962U);
    msg.setSourceEntity(220U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("RVIXENBZUWGAHLJKOOETPMKPICSSIOBWXIDUCQHYMTRODANRD");
    msg.predicate.assign("GEOUGTDOPUXEZQCLYWYBRBCJVTSMNHMPTUEINCDFNHSYCDQHBJGLRKSATYRJGMXROYQJKMRKSFGBAJBAHEZTGDXVNXCWQK");
    msg.attributes.assign("LWXOUREXPEWHPAPBMKZLDIPPZIHLEHQSZSDDUSRNMXLOCRMFDSVPNCFWGDKUTHCK");

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
    msg.setTimeStamp(0.6886456341628372);
    msg.setSource(49168U);
    msg.setSourceEntity(226U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("PRUQNOEXWZGFTNCSRPMPNYFBBUKPORQDVRJWJYLACWNBYAYECQAIONDLIFKLOHGMNYSKKMLUYRDLPQOCUJIFXJFCMPUOHVSADQ");
    msg.predicate.assign("PHQJXBVKUBQAWGILMNTSDWLEFEDCXRARJFZILUKYGMHTPRUWIVXOHLQDTHHXBTOPQGNLRAWOEMHFYYYFZWBMZGVSSPTPKJYXQOFMUPKYUVDYSELAYOIBTCRSIKTGFLHFVCZLKVVJXWJOAGXZAMYNIBAJLUHZKTKOQEKCDXEZPCNBJMRBRGFCNZOTFEMYPVIDUCJB");
    msg.attributes.assign("IHEXGKJGYALYLCNWZENPUODASSKMWYNDIQPBRUNBVGZULKSPBFNGTMAXXQCHFNIBPP");

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
    msg.setTimeStamp(0.2756301694197696);
    msg.setSource(31076U);
    msg.setSourceEntity(19U);
    msg.setDestination(63070U);
    msg.setDestinationEntity(24U);
    msg.command = 8U;
    msg.goal_id.assign("TLTWKBNWQCVXWNBRGSOMDZFROLUKITHKEYQSTRWLYQGILTOZTAJJLZSAMLVSAQUMPBUKEPWXOYUECIYKKYJXEURDUDQZJNOIPYCDYWWMEDJGQGGCIPGLPHCDFRKVSJZLQCSGMVAWFHZDXXRSHCRCUVRVCBTZNEABWEEPKOGSYMNFUIIULLKHTANDNWXBGB");
    msg.goal_xml.assign("AJLQYRDRPTBSFGGKQLIGJHLQCVEZBBGSCHCPZCGUZJMXRGAUIRVYZQLMUEEXOUOVYIOFNSLZUEWHXDZATSVHCZVNBKPOKBLGSVEFOZBWYPCTNMUNMDKOWKCDUTPBUMSIIPGAOFABDQNHELKWDNHQRNFYCJRWRTCUIFEOBVTXKYPNMRAOGVSYIATWXPFJMHAIWKDPLGHIJLMVESKOTJXXU");

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
    msg.setTimeStamp(0.9516370302202783);
    msg.setSource(47887U);
    msg.setSourceEntity(216U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(56U);
    msg.command = 162U;
    msg.goal_id.assign("IHUKUOXRWZSQFXPJDCOISXTKCIHXBDYUDKFUJKBCRKQRYEPNNJNYPVSHZPSDWOKVHFMJKAVVHVASBTNWILMLCMEEZXCFSOMGVFGFJCENPESBPUNDEFJDLMTJPVFOYQQRARBOABNGTLAATSAOWBAQIWUZTBWK");
    msg.goal_xml.assign("FJCBOSJHWVXSMGBLLVFNVPCWYNKNUZQFJVWPLLTBDJKJETPSTYXMRJWKLZCZEICXARSGY");

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
    msg.setTimeStamp(0.9497282339061908);
    msg.setSource(15627U);
    msg.setSourceEntity(55U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(15U);
    msg.command = 157U;
    msg.goal_id.assign("TPUPEJJVXVGIOJHYUOVAIRENOV");
    msg.goal_xml.assign("ATYHARYAMQAKPZRJGMAPXVFXLUMCUQCUBTYDDLHFHUYSHJSVVQTGTVXFBSNZSNQDBFJSGESRNYJYZLEKCXSQDGAIDPV");

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
    msg.setTimeStamp(0.2164854653779198);
    msg.setSource(21619U);
    msg.setSourceEntity(154U);
    msg.setDestination(26545U);
    msg.setDestinationEntity(81U);
    msg.op = 83U;
    msg.goal_id.assign("BICKKVPLUJGHDJWEENRUGPDXXSSIEXDCVINUDEREGAEOJZLTVSNGKWPGNHRXUMPHJVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XOIDUJQZXJHRJOZNQZGHTKAZSYATGPVOHYGAQFFNCFQKUDNESRCXWOBSIEQFXEJDERATHNWWPUAZVEYFMPUPFBZFSOLTTOJIRBTAGLSWYUHZYJJLDMYZJLKEUPRXMFNRPEBIZUMQETMNVXCCVPOWOHVDQLCKIRCIAHUMYWVAYTSNBIEMJJLH");
    tmp_msg_0.predicate.assign("AJDDHJNFIOLEVABPTRQPMURBHHFHNGPAMZQRVYUWGMJVKBOAHLKONVOZDRXGKQOYPMJHZLAHITIHGOOYULSIPZGCRLQTQCCUYGEVWCFBYGDJNEWSYCSYJLWSPYXYLW");
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
    msg.setTimeStamp(0.5593187016626755);
    msg.setSource(6374U);
    msg.setSourceEntity(112U);
    msg.setDestination(36725U);
    msg.setDestinationEntity(231U);
    msg.op = 193U;
    msg.goal_id.assign("CBHMDQXINEIETHMCWTHCIRDLODVUESUSLZSYAGZMULPUBYBTIGWOCWCKCQGG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JEJMATPWLAGARWNKCBVBFOPTIEBOELIPEURVFOIFBZKFCRLQRMTLHXLPXPQLBBNSDCGKRYNBEUYJSAKCESHYYLMQHKAMPDQHVXVKGYIPOWVISNYZFVOZXCCFNGJXOWATDCSNPUDYMIQSHIZFZKBIGHQT");
    tmp_msg_0.predicate.assign("JUOPCOTYNSLIUBNJVJZVWXCWFMEXIFLGQNYXVXYXTEJJOSINNHJQFRVYCFFLYWFMDZYMGQSPEDPJOPMBVOGWODXRKYDXHQSGUGATPRKHIDECEAEVUNPLPHHLLIXZGWSQKBOOMZDAUPWRSNAIDBUOAFETGJRQQVKDANBAIRMNICZAPZTSVMQGIKZVMBTTRLSWPCGRCUYKOQKFLTASXWBHCUNZELMZHKQFVHXK");
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
    msg.setTimeStamp(0.8426709324850176);
    msg.setSource(18782U);
    msg.setSourceEntity(126U);
    msg.setDestination(9040U);
    msg.setDestinationEntity(147U);
    msg.op = 135U;
    msg.goal_id.assign("OUIILVPKYALXVRBLISQXHJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MBJDGMUVDVRRSWTLLZGDRNFIHNJQCFFCMOCBIGBHEYAUQUKZIXSCFJZXPWTKYCBWPEVLDRIYKSULZVNCGCCUQP");
    tmp_msg_0.predicate.assign("HHUSPMHAALXOIYAKMXUSPOLNLVWKGTCXRMOFNKVZKKLTLFUHAVQBGAXKIFJPVBTWZNYRMKBDBRAYCUJWGUEZQTQVICQTHIIGEEWPZYAMBNQTWUOCRZDQOJXTSYJDNDFPCKTOFLBFWXLWRCOJXGIHDDRZCRJBMHEKMXVYMQHPETUALYJUEJB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IFUSOWFPYHDKFFZSVEMJQIVGUYHRTNQGPZIIHSVGDISNEKTTBEORGCLKYMNBTGMHPWSHQHUJTSEVPRQGWEWTZFNGNVXXUEGYAABPBDXJAYPWNDMIYNCQOYQNDYOLJODIDJXBAMOUQJPWLLOAAPCPHXRMHTHBFUUMVOIZTBBXMGAC");
    tmp_tmp_msg_0_0.attr_type = 191U;
    tmp_tmp_msg_0_0.min.assign("JLDCUFRRGRHMGIOEZOJGWBTRNLHJVKOXXCEXYKHRYLGVQQXTWDACZTVOFFSNCKVJEWUVKUKM");
    tmp_tmp_msg_0_0.max.assign("KSFHHYHMLHMPNJSSPZDPZCXPAJTUQBJSZQFZCQJSABTUKFIRKTERUVRWATTSQNUXNHHKHCJUWNXIWYRFJWEDZUHYDQBGWSOYKLXQCWOPQWJTKAFLVKXVKJXIGVNTIVVIGKJIRCZWNEGLNHYPZZWOLQKAGEGYDUEZBMOCLVMBRIDXFYAFCHYTNMDBYPREMEZVBVRNGBAXOEUD");
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
    msg.setTimeStamp(0.15181734950739878);
    msg.setSource(16565U);
    msg.setSourceEntity(228U);
    msg.setDestination(2678U);
    msg.setDestinationEntity(228U);
    msg.name.assign("NYFYFOWHLQRSUNEBVXKOUAMWJMGPZQRAMNBKJUINWNNENBZFPOFBIMFRWVCUZLPGSRZXFXALRYITSMEADDUJFOLGWDOPEKLCYAWRJFTAIDHJUAIVNVHIGEDAYBPSHVKMCNWZZAHZENCOCIJQDDVPTCLRPXGTJUQWLWMJKRTPSTXRMHIEYHOBKXJYXFSDOILGUTQKGICZMTOMYUTVLGESYQCDSHBHQBORJVDZFUQQYCCEVZBAHQSKXXPV");
    msg.attr_type = 233U;
    msg.min.assign("GABEIYKWYDRIAIZDNXTP");
    msg.max.assign("MFNSRGWELUAKDNYJNUIIFEBIBFVLQCYQHNDUAERKBWOMY");

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
    msg.setTimeStamp(0.37337785093215947);
    msg.setSource(38197U);
    msg.setSourceEntity(220U);
    msg.setDestination(24911U);
    msg.setDestinationEntity(89U);
    msg.name.assign("IGFKBNDMLYEMMYJMXVTIEMRACUZE");
    msg.attr_type = 110U;
    msg.min.assign("JASCOUCNVKJSQDPEIUYCLJ");
    msg.max.assign("IOXJOHNYXDIG");

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
    msg.setTimeStamp(0.737504108729297);
    msg.setSource(63931U);
    msg.setSourceEntity(157U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(247U);
    msg.name.assign("WOZROYPDCTVWXWFNYCRVUSPMGQQOLCEMQCIQPZKYEYDIIOBMENGVLMAVIUZKXNQWUUFUVCEXSBKRELBTOWYVCRTFSFQNXKCNRPNIFIFLEYNYVCBPJZKAMTBFHBDUITHVWRUUYGATDLJGJYDDJMZDKAWQUOMBPG");
    msg.attr_type = 97U;
    msg.min.assign("PJCFCFIKAHZROCNNXXOPHERHDLWFQOWXVYMAMD");
    msg.max.assign("EGVYMOFTUOUEDR");

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
    msg.setTimeStamp(0.7223997451786613);
    msg.setSource(17770U);
    msg.setSourceEntity(134U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("PJVTYOJXWDLMEGFBPQYABGZVNGKGMEHCXPWNNRTDIQLWAZ");
    msg.predicate.assign("DVBPAKTNGKZWAJELBFBAVHYBPNFSSFTIMKUGVJKASBWLQYQDZBJKWQHOJCCVQPENVWMAEJTDGHZURMOOMRORHHCOOGZMNOFJXXPFIVIDXJPCZEAYEWTIXADLJMMCTEGEIYCSZHXZSIDCPYRKDEKURHFOKSRSYAGLYXCGZPNCUGXXPBFOPN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EVXXTGAMQAGLXZDFJWUWQPFGFUOYBMLZAUTLPHBORZKADPXXDFDZNEFIXHKWPSCQGIDONOBONEIMNFQQUWUKLJOZSAVTRWYSLLYKSBKAOMRPMJDUCJGJKTGECOTYBQNNKEPXBRVIJQPDMEYCXLDACWVMFQCTSUETHZRYEGEJHJYCITNURUNKFAHKWWVIQRSMANHWOPVZ");
    tmp_msg_0.attr_type = 211U;
    tmp_msg_0.min.assign("GTHKFKOPTVAWVNU");
    tmp_msg_0.max.assign("PVNAOZZPREUELLAATTLDXYHMWFQDGEHMWWTRUACOEJSPSWRYBMGOOEKGAPCXHFMXBLIYZNODSYYRGGAPBAHPLZKJARJCTGMKNBYKKJFID");
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
    msg.setTimeStamp(0.0688524921685647);
    msg.setSource(37701U);
    msg.setSourceEntity(77U);
    msg.setDestination(661U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("AHYKHAVXLTATCDBIOFBIYUUVIPKVLGKOGVDYRDITQINNFBSDIWREZCTFHXQVPDLSPUGLDKVNQJJWJTWVYSRUWXGMWOBFESQRAGTNOXOBLBYDGIVOHJLOBFONESCUZYRKKSMCZRZEOBPWMGNZGMK");
    msg.predicate.assign("ELOMKEAQURGGVRNHWLEPXKFQJSQSCBJLWTDQVVXOKOJDQJURMNOAJMSBITXDSIXICSASOKAAEXSOXSGUHHLSNCYKRYTNIUKPGFUDCZBLJEOTHWFFNJVQNMDTAWT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UBYLHWTYYLZIOKUNHQVOJJINGRJSDLFNONEDULXPTNTYCTZVKHBQJXGGBVXGRYOORLKAVUHARPIAEFKOSWGCPKYSHCZTTKJXYGEVBQOPPTRQWXQUZMYMIRNLTEXWFVEBMEAILIQXYMJHDMQBHDCSCWXWAQZNDJKLWEMXOLFAPJFHFDEZINRXSEFTRNIDVOWSFDQUBAJSPGYWFILGRDGVAUDVA");
    tmp_msg_0.attr_type = 34U;
    tmp_msg_0.min.assign("OPDUUTFLABHKSPF");
    tmp_msg_0.max.assign("MSLHVIRLMSNPRHTFXKOTKFQDQTVDAUOWECPKQCVOWMNJOKRSCAAVHWLZXUIYEWBMNDSBGZFCLLQISQWTAUOHLYEWTHJRVGYIIHNJMVLGBAYSJGXGXXROVAPPCGTDJFTBGDHRHPFJOWPLBAUCJJUZXZQKJ");
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
    msg.setTimeStamp(0.23378113233676057);
    msg.setSource(61637U);
    msg.setSourceEntity(145U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("XTVTTOUQWHRYQHPWRUIZGOMSBREWUAHDOYVXPBPADMQDBLMELTIUUXZQSUGZQMULMSRYICXPZHGMPNCAPTCIETEKGWBNFCHMNGYNHKBEJFCNYENVSLFFXSQVOHORGXUILKJXSDOXYFFBOBFVISODDRVYCQLBNAPWAOLHNFXVKRJJEKJVRK");
    msg.predicate.assign("KXJJEBEALLMUXZHIFJBOZIZGABSGOSXERKYNRXGXCWPJNIQMRSBIUKILSDDNEUUOZLJFVSIYETYYTAKIULFGLVSYRPOFCERNZWECHPUCHYNKTUFRCQRFTQWDMMQGWZOYGHRSSJMGHYXWYAHWWUDCTVBMNOVMVDPOVHHDEQBLMAZFNBPCZATTFRUETBWHLIJWNPLOJOPIRYXQVZKSQNJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YWEQMKHBORAMICNGGDLTZVKXQXCFULYOIIIUBHUCARIABSECGVSYLQIDCMFM");
    tmp_msg_0.attr_type = 175U;
    tmp_msg_0.min.assign("SVXQKNERLBOOXUPJMSJAVSEIMKZKIBNMMEGQAGAPDWBLBPAPGIRAUOLXTGYCTOEQPWDJYCHRDEKTMDFVCFNOXVWXZHGWNSBYSSOZSOYLNZHFVHSDEIDTFXJBIA");
    tmp_msg_0.max.assign("ZUZVTGQPYKIPGGNOZKIPFUTWNNIMFTUCHWSYSLCILXRVBDXNFEADJESESQXGKBVMWLZKRHJOKVRYQZGPFMESVVNXEXMNQXFYJTRKQSBHVUYZCMLYGEQWWLRIMFGYATAWMDRWKZOVKDBCNVUDMBWQJH");
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
    msg.setTimeStamp(0.30296306482187596);
    msg.setSource(61769U);
    msg.setSourceEntity(214U);
    msg.setDestination(21278U);
    msg.setDestinationEntity(63U);
    msg.reactor.assign("GTEZFYHSTGIJKMDCQIFXPPVYFJLWVHMPYUMHEKQVULMXIROVDWNPILSCHERAENEXWFYQTUVOLLNNOWNUPASWHKNFRCTFXWIKXUZROIGOCQXGWRANRCAERSHWYMDCEPQYPTHJZZJUHTVILSPZBBZZHINRMKC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QPKMQYXIWMEKKZAPYQIIOVPVZTJZDQFCNVAEDCOFKAIKWDUAONVGRNBDYHZJOSWHGBFGOZESRXHITYRUIDYQFSCBLQNGYSJZFBMRUBZGSSYEKRYTAZWAVAPDWLETCRTTMPMHECPCLAZKDLXKEBMAUYIHJPJCSCSINUXGFDJUWWIPTGEQOMELXKZNXXLTVGWTKDLLROUNMQBDJVUQHALONURVCP");
    tmp_msg_0.predicate.assign("VFOYYFAYFQLULELJTZRJOFXIJTTMBVCHIXXYUNRHKJQVRTPBQAHCHZGNMCHCNWMTPWTIPPESKUUJYBNRQCVZSXPAFNEARSVDYDUECBXAOQDDROWNRAAZWEUWKIKLTSPSDESMOWWTGVQWTIMGKBLLUCSRXLZABPDPGGPQKIIOLMHCNAEZGBOUDVYQQGFZXWKHXOJNYDZNSFJHGABVI");
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
    msg.setTimeStamp(0.47176863177660244);
    msg.setSource(14654U);
    msg.setSourceEntity(205U);
    msg.setDestination(37222U);
    msg.setDestinationEntity(191U);
    msg.reactor.assign("LQVWLKIPCABPCPFKZRFRTAARUOERVCXHLNIMMSIWBBWSMFVMZQQBOZWEBFKMJUJHDAAHZXRQVUXFAKUCYIBLVJHKMJZMYSOJYHWUTYGGQDZOIENFGPMWEJCNDTTESNPPIBPDSADRPWYWGGLLXRTBRKVRVGIDLCNZDXYGPVESFKJVNYNXXQFOGOSCIVQJKXUXGAHIBUOQDWQUEYJNCHPFCDCZK");

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
    msg.setTimeStamp(0.5634447398603897);
    msg.setSource(28468U);
    msg.setSourceEntity(70U);
    msg.setDestination(33215U);
    msg.setDestinationEntity(253U);
    msg.reactor.assign("KTCIOXFXGABFORWQTCOTJOYMPNSFLYANSEHHKNZVGDDPDBBTLCKEQUSOPHISIIAUXSVZQLEUUMJZMJXKPTJLPWZVTHZAHPBCB");

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
    msg.setTimeStamp(0.3510586855548927);
    msg.setSource(7882U);
    msg.setSourceEntity(13U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(113U);
    msg.topic.assign("PSKCHNXBRCIOXVWYZJNTVMZPFIGKZWBEOZABNEBWGCNFZILYDRYYKUABCFIPTSMPLVOWPRTXPICLRMGKANLSDLDVHGHDDYPWTJQWIQNIOJTODKIKUABYMDVXGMSSQZILFSFYXBKOFEDUEKTPTGCWNAJMVMXUEHQQPYGBSOHLVSGXCCEZQRJGJNNQMFVLJRZKWGHLHBNAYUESCATVWFQDHRCXXRFHTIAAOJOVWZJOK");
    msg.data.assign("HRAIDFCZBTPECUTHPFPEVSHDUWFESKAKDGXGABNOTMBYUJCAIWPZPNJNVBIJLOUXQYUASWCMRZFQHYTMMRRIUJAKGQCCENOVSWJEQZKCFEMVXMGZQYPHXPVSZHRTFZSDOLKIBHNHQLBITERTWYPCDNBJVDDYOGLGJSMVXIOIBVIBAJNLLSTXQKFKSYLU");

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
    msg.setTimeStamp(0.5243944226893245);
    msg.setSource(40826U);
    msg.setSourceEntity(155U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(66U);
    msg.topic.assign("VKGFZWMAJTAPHPPGBHGMOSUIRBRHVPDRMIKDEUVDKYECRHVWEVTZTBJKQZORGJRJSPKJGQMNNSMDPESATFXXUUFPQRKJUCSWWUADPJTXNIYBIEZSXCFLAIBLYSQVGXTKRCQOFTOABFSEIYJTDHBKAWMGXS");
    msg.data.assign("MAHWYOQRIIUTRWHZSUJHQJFEFXFDSIGYVXJJMSBKGZI");

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
    msg.setTimeStamp(0.7490774550157476);
    msg.setSource(13063U);
    msg.setSourceEntity(249U);
    msg.setDestination(4934U);
    msg.setDestinationEntity(65U);
    msg.topic.assign("CFURUNIGDKSZNSPIIATTRFTXUQVFLCYANIUDQBZCWNWEWYZGYKQFRTMEVFZAZBYBVVQHUWQAMSSPWLDTDWLNULRSLENBGCPAXVRBTLDOEVDZWKOFCDMGZSVPXHCPMOXOLIHEZNMBMOJYHYHVEXWHUGKOMBPDXCTBIJTMGRPWXCRGVKEDQFHOFJHINRFJYKREQJJEYKCIGOGEIAALALOAQPSKZBQTOARVHXSJXLUHFJBKYSUNSCXJDM");
    msg.data.assign("SAJYLTEJPQZFDUKJEBWKZMUAHAFTTTVCSMWOVXHJKHJGMWIFZVIUBKIHUEJAQRAHOCJFSUGSDSBILXYVALYCIEGZPVFYPHPGUKXPDLGOVONJSDQMPXTQRWJD");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.6232432232440679);
    msg.setSource(2794U);
    msg.setSourceEntity(250U);
    msg.setDestination(62155U);
    msg.setDestinationEntity(104U);
    msg.id = 241U;
    msg.width = 18549U;
    msg.height = 64709U;
    msg.widthstep = 21027U;
    msg.channels = 228U;
    msg.depth = 243U;
    msg.finaldata = 250U;
    const char tmp_msg_0[] = {-2, -31, 56, 58, -20, 18, -127, -27, -46, -91, -51, -64, -127, 56, 55, -76, -16, 78, 123, -13, 11, 108, -101, 110, 51, 42, 70, 73, -114, 67, 90, -28, -40, -26, -61, 94, 59, 116, -78, 67, 17, 1, -97, -94, -56, -81, -40, 43, 79, 102, -32, 25, -71, -20, 37, -85, 0, -70, 17, 11, 21, 20, 64, 12, -119, -25, 15, 91, 31, -73, 93, 48, 110, 43, 22, -113, 52, 33, 83, -100, 17, -43, 60, -16, 21, -11, 74, 110, -78, -14, 0, -106, 118, -100, 30, 126, 98, 46, -126, -21, -78, 62, 41, 36, -51, -68, 14, -112, -90, 124, 65, 16, 84, -60, -30, 95, 72, -62, -118, 53, -6, -59, 12, -41, -93, -127, -20, -31, 55, 44, -33, 110, -5, -63, -1, -80, -56, 106, 74, 83, 12, -92, 71, -82, -55, 78, -98, 9, -120, -56, 105, -96, 22, -19, 32, -14, -19, -101, 7, 118, -11, 84, 55, 111, 120, 10, 107, 7, -97, -106, -22, 103, 76};
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
    msg.setTimeStamp(0.3292243263130854);
    msg.setSource(42782U);
    msg.setSourceEntity(214U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(102U);
    msg.id = 18U;
    msg.width = 61114U;
    msg.height = 60631U;
    msg.widthstep = 15582U;
    msg.channels = 160U;
    msg.depth = 184U;
    msg.finaldata = 168U;
    const char tmp_msg_0[] = {44, 66, -18, -97, 93, -30, 9, 53, -109, 107, -58, -64, 0, -7, -122, -11};
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
    msg.setTimeStamp(0.9988083666007377);
    msg.setSource(39184U);
    msg.setSourceEntity(47U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(126U);
    msg.id = 183U;
    msg.width = 8689U;
    msg.height = 60938U;
    msg.widthstep = 47085U;
    msg.channels = 171U;
    msg.depth = 222U;
    msg.finaldata = 160U;
    const char tmp_msg_0[] = {23, 24, -107, -42, -77, 49, 100, -30, 62, 126};
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
    msg.setTimeStamp(0.8622377843976313);
    msg.setSource(55738U);
    msg.setSourceEntity(60U);
    msg.setDestination(1544U);
    msg.setDestinationEntity(133U);
    msg.width = 16520U;
    msg.height = 30787U;
    msg.channels = 169U;
    msg.depth = 91U;
    const char tmp_msg_0[] = {-77, -55, -5, 32, 40, -17, -120, -12, 61, 64, -95, -84, 67, 43, -119, 117, -10, 68, 54, 57, -58, -94, 124, 123, -75, -92, 82, 50, 9, -45, -56, -99, -6, 95, -93, -47, 56, 26, 126, -56, 63, 108, 3, -120, -6, 1, -7, 42, 107, 7, 114, -115, 124, -1, 104, -84, 97, -93, -90, -41, 90, 89, 15, -12, -8, -78, -70, 97, -127, 72, -120, 92, -106, 56, -2, -10, 38, 104, -116, -84, -111, -113, 113, 16, -19, 58, -77, -43, 40, -24, -110, -26, -81, 49, 0, -78, -115, 85, -31, -103, 97, 23, 96, 70, -71, 48, -26, 112, -76, -42, 95, -94, 120, 87, 81, -16, -85, 16, 111, -77, -103, -32, 104, -55, -51, 48, -116, -128, -22, -71, 97, 26, 70, -118, -53, 53, 88, 87, 19, 41, -101, -84, -66, 1, 75, -89, -118, -75, 14, 21, -3, -109, 86, -83, 25, 31, 8, -115, 71, 90, -101, -55, -58, -40, -49, -111, -14, 109, -88, -128, -99, -62, -120, -21, 0, -66, 72, -12, 108, -61, 124, 44, -16, 102, -14, -103, -121, 125, -70, 47, -101, -64, -54};
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
    msg.setTimeStamp(0.5813382868792785);
    msg.setSource(64171U);
    msg.setSourceEntity(240U);
    msg.setDestination(52972U);
    msg.setDestinationEntity(0U);
    msg.width = 64094U;
    msg.height = 58882U;
    msg.channels = 136U;
    msg.depth = 90U;
    const char tmp_msg_0[] = {-7, -49, 5, 9, 103, 24, 101, 50, 38, 82, 54, -1, -21, -27, 125, 31, 125, -76, 95, -67, -34, 95, 96, -91, -116, -76, 27, 27, -10, -57, -101, 84, 81, 87, 8, -2, 76, -16, -75, 94, -114, -55, 89, -118, 73, -85, 43, 24, -127, -108, -72, 75, -73, 29, 90, 94, -31, 60, 83, -23, 80, 121, -36, 26, -122, -95, -103, 33, -45, 68, -29, -125, -12, -21, 83, 85, 97, -67, 98, 31, 12, -78, -57, 61, 35, -101, -66, -16, 67, -96, 29, 108, -90, 49, 50, 120, 12, -17, 39, -113, -8, 36, -54, -104, -66, 71, -58, 52, 56, 31, -48, 90, -93, 44, 4, 52, -98, -30, -80, 52, 85, -46, -39, 63, 91, 92, -86, -25, 110, -30, 105, -73, 94, 89, 82, 24, 82, -28, -33, -44, -45, 4, -30, 36, -18, -121, -104, -8, -105, -49, 118, -103, -83, -23, 23, -56, 26, -24, -48, -29, -13, 28, 40, 108, -84, 14, 6, -79, 119, 107, -21, 124, -67, 8, 94, -96, 90, 68, -44, -19, 77, 40, 13, -68, 97, 101, 64, 112, 117, -29, -55, 11, -70, 126, 15, -113, -118, -78, -107, -88};
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
    msg.setTimeStamp(0.35824806226707495);
    msg.setSource(57502U);
    msg.setSourceEntity(73U);
    msg.setDestination(56622U);
    msg.setDestinationEntity(224U);
    msg.width = 22232U;
    msg.height = 33901U;
    msg.channels = 22U;
    msg.depth = 54U;
    const char tmp_msg_0[] = {105, -8, -16, -43, -125, -85, -94, 113, 123, 69, 34, 57, -7, 125, -16, 126, 13, 107, -1, 33, -78, -48, -93, 100, 7, -121, -61, 48, -118, 120, 40, -47, -56, 120, -12, 57, -4, -73, 90, 20, 36, -105, 53, 96, -40, 75, -100, -16, 51, 117, -122, -18, 63, -113, -91, -45, -16, 37, 78, 14, 71, -36, 42, 124, -59, 73, 113, -91, -90, -28, 125, 108, -48, -37, -109, 0, 13, 1, -73, 55, -69, -44, -64, 74, -21, 21, 5, 108, -64, 48, 54, -92, 6, 15, -46, -80, 12, -118, 25, -19, 100, 105, -84, -63, 110, 19, -111, 93, -124, -42, 3, -23, -92, -22, -72, 103, 105, 16, -115, 48, -12, 79, -28, 79, 71, -75, -27, 40, -7, -115, 70, 31, -80, 30, 99, -34, 98, -114, 62, -118, -11, 42, 2, -78, 14, 126, 76, 103, -54, -36, 71, -65, 118, -87, 125, 118, -46, 6, 17, 68, 21, -37, 87, -34, 81, 48, -40, -115, 113, 114, 66, -1, 37, -19, 82, 5};
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
    msg.setTimeStamp(0.824321527127951);
    msg.setSource(1913U);
    msg.setSourceEntity(62U);
    msg.setDestination(59661U);
    msg.setDestinationEntity(53U);
    msg.frameid = 209U;
    const char tmp_msg_0[] = {13, 40, -86, 23, -93, 122, 23, -111, 56, -40, -115, -88, -101, 77, -78, -12, 124, -75, 106, 109, 124, 57, 42, -51};
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
    msg.setTimeStamp(0.8629032627510419);
    msg.setSource(28708U);
    msg.setSourceEntity(32U);
    msg.setDestination(21479U);
    msg.setDestinationEntity(232U);
    msg.frameid = 193U;
    const char tmp_msg_0[] = {5, 123, 58, 2, -8, 2, -67, 78, 14, -62, 10, -117, -55, 42, -108, -28, -106, -100, 66, 67, 89, -9, -20, 31, -126, -31, -24, -31, -39, -120, 120, -120, -63, 46, 52, -60, -16, -99, 123, -9, -96, -126, -119, -21, -10, 123, 74, 107, 110, -24, 74, 31, -56};
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
    msg.setTimeStamp(0.704201864619537);
    msg.setSource(59374U);
    msg.setSourceEntity(164U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(52U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {116, -32, -47, 34, 75, -62, -108, -109, -91, -31, -94, 90, 29, -105, 34, -17, 54, 71, -46, -117, -8, 29, -107, -119, 88, -70, 25, 59, 126, -59, -2, 40, 70, 26, 44, 22, 78, -124, -40, 102, -76, -20, 105, 40, -87, 75, 52, -54, 113, -22, -44, -52, 87, 75, -112, 39, -20, 125, -94, 81, -66, -2, 123, 49, -1, -24, 41, 86, 96, -91, -52, -31, -117, -30, -5, -64, -100, -12, -48, -6, 86, -43, 18, -96, -81, 53, 74, -98, -1, 53, -108, 121, -101, 52, 28, 57, -37, -34, -34, -114, 92, 122, -5, -8, -100, -26, -77, -5, 4, -118, 3, -18, -64, 55, -25, -2, -29, 97, -117, -115, -50, -113, -29, 65, 103, 37, -94, -56, 90, 120, -87, -51, 99, -9, -84, 47, 112, 75, 48, 56, -38, 43, -71, 46, 40, 108, 10, -103, -47, 53, -99, -37, -5, -103, -13, -110, 49, 2, 107, -105, -23, -31, 52, 115, 30, -125, -96, -38, -18, -18, -30, 36, -10, 40, -68, 37, -41, -41, -10, 56, -13, 73, 63, 58, -53, -67, 110, 118, 19, -77, -105, -52, -58, -69, 82, -103, 5, 87, 104, -117, -29, 101, 2, -61, 114, -51, -61, 105, -97, 93, 123, -83};
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
    msg.setTimeStamp(0.044563208187017755);
    msg.setSource(7234U);
    msg.setSourceEntity(39U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(183U);
    msg.fps = 224U;
    msg.quality = 165U;
    msg.reps = 149U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.2720105515048815);
    msg.setSource(30171U);
    msg.setSourceEntity(153U);
    msg.setDestination(63011U);
    msg.setDestinationEntity(72U);
    msg.fps = 213U;
    msg.quality = 199U;
    msg.reps = 93U;
    msg.tsize = 246U;

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
    msg.setTimeStamp(0.11374500255881514);
    msg.setSource(51851U);
    msg.setSourceEntity(238U);
    msg.setDestination(27268U);
    msg.setDestinationEntity(201U);
    msg.fps = 19U;
    msg.quality = 33U;
    msg.reps = 244U;
    msg.tsize = 60U;

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
    msg.setTimeStamp(0.5494167603530629);
    msg.setSource(19632U);
    msg.setSourceEntity(215U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.4538882404952329;
    msg.lon = 0.8885402712759864;
    msg.depth = 59U;
    msg.speed = 0.9877204475225653;
    msg.psi = 0.8049506412593889;

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
    msg.setTimeStamp(0.5020206998092261);
    msg.setSource(4765U);
    msg.setSourceEntity(11U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.7137571702567314;
    msg.lon = 0.6384122355384539;
    msg.depth = 75U;
    msg.speed = 0.16210233556204334;
    msg.psi = 0.9015472233418831;

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
    msg.setTimeStamp(0.9756156586689548);
    msg.setSource(64703U);
    msg.setSourceEntity(197U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.2030212993152195;
    msg.lon = 0.13764277544416648;
    msg.depth = 15U;
    msg.speed = 0.21392252573058612;
    msg.psi = 0.01946643761437694;

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
    msg.setTimeStamp(0.46510182444736037);
    msg.setSource(52314U);
    msg.setSourceEntity(229U);
    msg.setDestination(59402U);
    msg.setDestinationEntity(198U);
    msg.label.assign("JXPXIQCGRURNXEFBDAMELEALDWTAEBWUXYJYAVOLZZVLUYLCQSMGTEIFHIDOQZWYGTAPQTOHQFMHKMSKRRIBCSSZZIYHMLNONIPPHTFNVAUZRSGEPTNARNEWCCXWTDVQTVOZJTVYMHIPMQOVZJ");
    msg.lat = 0.6729799123689935;
    msg.lon = 0.186385906961532;
    msg.z = 0.515187969631045;
    msg.z_units = 120U;
    msg.cog = 0.8840896003861483;
    msg.sog = 0.7003661727797393;

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
    msg.setTimeStamp(0.7888115465190565);
    msg.setSource(60282U);
    msg.setSourceEntity(212U);
    msg.setDestination(13708U);
    msg.setDestinationEntity(231U);
    msg.label.assign("WSFRDPFWFVGEQTPOUBHRLNM");
    msg.lat = 0.15263327787065584;
    msg.lon = 0.83720630891922;
    msg.z = 0.6017981641717917;
    msg.z_units = 151U;
    msg.cog = 0.7890890127151304;
    msg.sog = 0.3801556220072049;

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
    msg.setTimeStamp(0.9165150096271263);
    msg.setSource(50365U);
    msg.setSourceEntity(208U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(138U);
    msg.label.assign("RXBQGDAOEQWFLQIIWAEUTAQVDTMYRCGOFEJHAVYHRDOKAAUCFPQMYNRBCTRFJIBSZCWMVDFYLVQGPUONETKHVUNJR");
    msg.lat = 0.41461178569091905;
    msg.lon = 0.49249339521116353;
    msg.z = 0.626964161142196;
    msg.z_units = 62U;
    msg.cog = 0.7628665684820521;
    msg.sog = 0.5112804372738162;

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
    msg.setTimeStamp(0.30468985963710493);
    msg.setSource(64482U);
    msg.setSourceEntity(179U);
    msg.setDestination(4766U);
    msg.setDestinationEntity(45U);
    msg.name.assign("BGDMBMRCSXBJEKCGMAYYCRSQFAXWPQLRFYQRZJFCDUPECLBGNHOMQZILRXWVYUBMXNLVXXPPOHBITCODLEIKBR");
    msg.value.assign("RIJWWWMDERQOLGHCCOOMUZXLRUHHDLLKDTNDLPBHCUJMYDRPTNYVNZARBNMOKOTQKZ");

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
    msg.setTimeStamp(0.4351389032561447);
    msg.setSource(55394U);
    msg.setSourceEntity(139U);
    msg.setDestination(51596U);
    msg.setDestinationEntity(141U);
    msg.name.assign("WZEEFMJGKVOESGUXMXDWQIBOZOJLQAPALFXGCCOOZODFLJXLDFARAPWMNTDEHTOHBFKYSKEUWRVUYLWMIVUHBPCQCVIBCSIZPHICHSHJMGPYKYQPJUSSVUHDFZYDCOLLNTXZXYRBNDEHYDGMLITWMITPJYCSGIAAPSBNAOENGUWAQRBTCNQPJUAWYKTNWNIAGFYVZSZXVZCHTXFSHWGVQBJXFMRBTBEKRPKEQKNUDKILX");
    msg.value.assign("EDZBFIVSUBGDDDRNXQRPPSFJZXOBRGTTLGZMHTHCYINKLRIFRBTJBSSOKFYQHJHAACMNOQEAZSXAVIUQCFRHCBBQVILLVUKLWWOJVZZXNPVRNMESEWE");

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
    msg.setTimeStamp(0.058581028736792384);
    msg.setSource(44756U);
    msg.setSourceEntity(225U);
    msg.setDestination(64417U);
    msg.setDestinationEntity(44U);
    msg.name.assign("PCMRPCLDUKFXNQOPAFRQKVBTMCVZHRNUBJJSRXXKMTEVLUQOCBPXVGWHOPSIIJ");
    msg.value.assign("RDRXTPQHIDIGGAMGUUBLRJKXJHWYLOCXZYTNLRZZXAOZMOCBXWVPMOJEKVSZATIQHZYMFPEUMLEURIUEHLTGSKJQJMPZUJWVDDOFPZATYIGCLWUAWQIGFCKSXNKAXTRDFOPLBIVCWCATWNADUMYSFBJANXDTQQRVJFBLMMYBEVMTWGOLNHSQPEEHJRCZTCVWHKDYFYSSVCFNOYFBNOBBSGKIZAUIQHLEOVQHQGDYCKPIPR");

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
    msg.setTimeStamp(0.21695124262216436);
    msg.setSource(64669U);
    msg.setSourceEntity(235U);
    msg.setDestination(6472U);
    msg.setDestinationEntity(103U);
    msg.name.assign("YMWLGYVXGGPIILITELABCKQBUENJRNWGSGXPLEKJOLRENHZRTWKJAFVPMPMQMSYFODXITJDXVCBBEMONPJSRBAOOVWGZDVCONYWDDLYOSVTERGBBXTUQSCMARFRPDFGMKZLMRAWNJSTGNFJZBUKROAXAYPTIIKQ");

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
    msg.setTimeStamp(0.6289014421405091);
    msg.setSource(23355U);
    msg.setSourceEntity(162U);
    msg.setDestination(56715U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VOHECTXKFYEGMFWAAHWCCUXIWOJLMLVVVNBKXQMHFQLZUNPBANJPQDWDIYZUMEBRJXPMYJKSVSDODVBIWYFRWTYMAPKEBFZDOKVHFFHSKGUQNCIORWGHQQEGUXPJPJXWSNDNUNWIXLVEZJG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XDKBBYZRMODOZXOFFIZGTUJPEBQFEDQHSNZMBJYSHSGKXMESIUJXIAXGUFQNPJDYKJZLAZGNCUDJBNSINWBROVESWOSYWGKFMHWZOUHYRYWEWVHCVLTLMCJMNBSPOVXRXGMDRPVFXVRKKQGCGAPEUPCQTLLFYXWUVJNHBSRYAWHKETLXWEIDAZF");
    tmp_msg_0.value.assign("ONCULGGXFJIBEWDYEIRYHZDDOYBMHEOIJIDKOUBSZUURCNXHJWTRTDTEVEBSJYSZIBHSLPXAGANKBGICQCBOANPKDDXPMKKWLNYDRXBH");
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
    msg.setTimeStamp(0.2081927637541482);
    msg.setSource(58992U);
    msg.setSourceEntity(8U);
    msg.setDestination(41622U);
    msg.setDestinationEntity(210U);
    msg.name.assign("FGPLZRXZZTRDNJIJGJWCGNBIXJFIOBKYVIOLZVMYUAOEMSCQIBOCTTRAIWWDZQYKAMJSBFMSPXAKBOPLHVAHUFGQYPCSXHPRNIXUEHTS");

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
    msg.setTimeStamp(0.8387782676388202);
    msg.setSource(2388U);
    msg.setSourceEntity(154U);
    msg.setDestination(12543U);
    msg.setDestinationEntity(53U);
    msg.name.assign("KVKYDUFNOGAFCHCBLFLOPJXEIZWAXQMVLYPZKNCBCMOVURWFTZGFRUCGCQTWZXJVFEKAGAIZOGHTIRYLXBNNEGSZPTDWLMIAWUSSUWIWCEIHQASHBFQOQRMHELODGBBVEWJYHR");
    msg.visibility.assign("UMDHAJNFPBUQCBFJXQDWVVDENILTNFLDUPUXCQYGQGQBKTPXSKERSQVTJJNREKBXEJVWDNARRKDHWMWQHPYMURNJNLNYZZTXLIBGWHTCEUFFGKWWOOAIJFSSRCLWTRZRIOCY");
    msg.scope.assign("VFXKFVOGBSMWWYWYMRMZMFDXKKUDYIDLBQUICMJZNCWGROSJVHOSPYGDJUVASYVDUBAQZSAVHNEJWGIEXEULQHHNLIMYLRFFAUSVUKCIOCNRIBXWEQPQIIZXRCTLYPJICEDALORBYSKBDJVNHRGMTPGFMKSWALGQUACNCYTGEDXOREZVNPZPFTNANHKSMOPFKAXBTQLZE");

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
    msg.setTimeStamp(0.03579008941285622);
    msg.setSource(31640U);
    msg.setSourceEntity(8U);
    msg.setDestination(50834U);
    msg.setDestinationEntity(16U);
    msg.name.assign("YSGZNRNKXQVCGEJCWBKMNKCROPZUEXPJTYWJTOKEKFXPPNGGFGVQRDOYHTCBVXLQGSPPJUCGZDJHGSJDSQMPGQOBIIQYVSEWOWZMDLLHEKZCEFDRHACLYSPQOSMERNJYFIYVAIILHXVLMBDOETCUAZFOMRSBUHTWATHDITWLWTBKMZRKRNZNPZUMUAYZJBADQONKSXNXFVRLFBUXKYAMFPRCVIFAOJBWCDXFHUVNGQVTSQIYI");
    msg.visibility.assign("EQQAEQWGEPXDYRMITHUSKPRKGADVMTZWOPCKQOIIYHPVCMWUMMTNBUTPJEFXGRNNMLZKNHKIREZFDJUODLBZCBLUZJNLXZRCSZQJYAGFPTGDOVXJHFXBSNATEXVOEZSIOUDTWFHABBYTLHNWCXGKKJEHA");
    msg.scope.assign("AUUBGGYYVNHDFVPXEKEMAYFWHALRYBFZUYHGQUQWXKFMHKCFATJDJBTSIQVXHKXNPGEPSWVZCTFNIBLOZZUWDJSBIZKOBAVEGAIWRJNDQRHWPZOQDTQBMBSXSRLLKFNJZLMRTKRKSSEGQQDMMPCCJBUIHMCNHERGRYKLHGTLIWVIZMCSOUJWADMILYTXANLOUYPICVTUSWEXBZPPJUCMXZVJOEGFVTCSGQKDPDCLTAFNQNORNHYIPXYAEJVDF");

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
    msg.setTimeStamp(0.8548915771981247);
    msg.setSource(1642U);
    msg.setSourceEntity(215U);
    msg.setDestination(17674U);
    msg.setDestinationEntity(130U);
    msg.name.assign("JRLSSWJBLKMWPOVSNKRHHLJOEFKARKTOYXXWCCUJDTONTQMDJOIMSDGDJLOJVYLMXSFVQMFGLAOEMQBUECRDJIJOYLXOFGEGEBHTRXAXAQKKNZIADBVUBWFQZYNBYSCVAVNUFZQZGDFWWVZALUPGTQMDEHDZYQUZCRUEYTBCKTKHRXUFPIPASVYXIY");
    msg.visibility.assign("MPVTCGQFOJTBSUYQOFQLITIMWYJKZBRZEMNPSMVHOJKXTHVUGLVDXZNUBKDVCAJICLCRFOHXPEIHACZXEVHXJDOYBXTEDUUXKJSNBUG");
    msg.scope.assign("MLKFXHPRRSPGSEDWIMKFJQXALLHDYVPWLXMCTCOVJJARMUHHLFMNHSZJLBNPQYUTWLFSISEINZQDEZUVYIMMGRJCVRGN");

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
    msg.setTimeStamp(0.7919695480515295);
    msg.setSource(29046U);
    msg.setSourceEntity(201U);
    msg.setDestination(38612U);
    msg.setDestinationEntity(38U);
    msg.name.assign("WEZAUSOABWGVHJBFTOKUXPFPGJLINZPRNIKHNWFKJGFIJEVSMBWJLFMPURCCHXBZWDBARHELCCLBKGLEPGAXZQAKVHZCJKJZDUBINSBFAQDMQVTURKMXCXQDPVMORDWFDDYUWSOTSMJCSACEXUTWYEDNVYHOEUTVIFLTGHFMOYRIOQIHOUYBGQTTZXPEHLARQYVYERNYXBAE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CVXBVQEYYOMNMSGOZJWHRJVFVAKMVMPCLVAWV");
    tmp_msg_0.value.assign("VEKKCMBLADQNUFEMFQBCUMGGBNEWPDGOYZFVSGYUHDSBYNREGXWUBHWRBFWR");
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
    msg.setTimeStamp(0.42270222781447797);
    msg.setSource(64613U);
    msg.setSourceEntity(4U);
    msg.setDestination(4188U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ALWWVPSQYHDJNLCVNPBOQTBZUBJOFPEMPGYRLXETIMHFAEJZQRCTKTUNIBUOWROZUXOSEVTGAARRFQMUNEDMQUCCVXBAVSPFIVWZWICKLRHCDJUDTKMNHGRLNFCNKPQBWIXLHYGKNKDHPPAHHTSVBMATRUIKEOYWBYENYAMWQGDDJVTUG");

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
    msg.setTimeStamp(0.43117824884640976);
    msg.setSource(52221U);
    msg.setSourceEntity(115U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(254U);
    msg.name.assign("EXNVSRAERGIQGAGPVFNZTMNAFRAJDOVHUUIRIAEGKEFHFYQKWGBNLEIC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FHVYLHNQTORKFYKMSQRFSJBVNMWUAKLUYONEPXBVZSQGCGGOPKSMDNVWIZOUQGLTWGTACERPBDKTXSMSEFTCEIAHVXPFTDSMWQERYCUJSFBLBAEMWINUCVHDFKAJVZPCAJ");
    tmp_msg_0.value.assign("JABCDCYFYRVOGJVAWILMRDWOESRDWZQYZLOINVPNNBSMXYEHZLEIMKOUISUXUVZKNYUXDHBPXCACQITQQLGPFUAIVQKEPODBKTHVNISEMPEJFJARHTVLYAFMULEPEGCGQPXQPTYTQW");
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
    msg.setTimeStamp(0.25566074234890146);
    msg.setSource(8790U);
    msg.setSourceEntity(209U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(85U);
    msg.name.assign("VJVADIKEDXNMOAGTFLJOTUHNWMVHHJKXKBFPLALQSGWZHBDHTFUEEBYLMGORCQYXBIPXDCKWQJHGIALUINKPVRAZIRSTMFGTYNPGSDWEPRWKSMZVRYTNUQGEPRMDULLQUSRMDFZGRXUGPCXNKGXJCWVYNZZCFAWMLKUAHOBICAOEYNURICFOBBWTMYJHSLOSAQVOQTRSZEKQJXQBTCCILZFDADQPYV");

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
    msg.setTimeStamp(0.04294417220542268);
    msg.setSource(27446U);
    msg.setSourceEntity(34U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(148U);
    msg.name.assign("XLOFXVOSYNHSZVHCEQZYUCDIQDBWMASIGATUAAITKCFWYOGQCEFGIMSOXUZUYJPWKMLJWEGDTRUFVHTGKXNYRLUBJAYNUALYJDZRVTUQREGOYIZLNEFBNIWODZIBLCVLDXHKPVBBNMAPHXFD");

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
    msg.setTimeStamp(0.2505020562588052);
    msg.setSource(39778U);
    msg.setSourceEntity(6U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(162U);
    msg.name.assign("YCAVDPFOBPAVEDDEHYRLPAULYXSKAJTLSOYNHQFDEZNHGIVBIWSPTPGJZFZLXWATFSBLLBYITFLGRZOZFQDRGWKCTXRVTOOMXVNJUREEQFQKBSHZVXXIUCMEMGLUERSJHQCFOKUOSDCSMZNQNKIPWWUCDKJXAMDMNCQOKPNHXPFWHWUJGTZGLGNXIFMYRGXZAKVRQRCEROIBTSJBCHAVUATWKGNWOQYEVEC");

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
    msg.setTimeStamp(0.6099858944224614);
    msg.setSource(62850U);
    msg.setSourceEntity(172U);
    msg.setDestination(29845U);
    msg.setDestinationEntity(207U);
    msg.timeout = 2216085896U;

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
    msg.setTimeStamp(0.4358094113921509);
    msg.setSource(21870U);
    msg.setSourceEntity(16U);
    msg.setDestination(49124U);
    msg.setDestinationEntity(72U);
    msg.timeout = 2746989393U;

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
    msg.setTimeStamp(0.9529319349358668);
    msg.setSource(31635U);
    msg.setSourceEntity(197U);
    msg.setDestination(50497U);
    msg.setDestinationEntity(103U);
    msg.timeout = 1090692540U;

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
    msg.setTimeStamp(0.9800372151356639);
    msg.setSource(4354U);
    msg.setSourceEntity(6U);
    msg.setDestination(26212U);
    msg.setDestinationEntity(96U);
    msg.sessid = 33599612U;

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
    msg.setTimeStamp(0.5481247681754766);
    msg.setSource(46668U);
    msg.setSourceEntity(18U);
    msg.setDestination(59328U);
    msg.setDestinationEntity(171U);
    msg.sessid = 928442000U;

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
    msg.setTimeStamp(0.4702569378272442);
    msg.setSource(12908U);
    msg.setSourceEntity(135U);
    msg.setDestination(15796U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2075771693U;

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
    msg.setTimeStamp(0.8313211802792615);
    msg.setSource(3273U);
    msg.setSourceEntity(218U);
    msg.setDestination(54043U);
    msg.setDestinationEntity(118U);
    msg.sessid = 24772627U;
    msg.messages.assign("EXDNEZWLZYBGZJADAWSZKTKRUV");

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
    msg.setTimeStamp(0.9927876125498062);
    msg.setSource(9356U);
    msg.setSourceEntity(202U);
    msg.setDestination(37652U);
    msg.setDestinationEntity(188U);
    msg.sessid = 2899774734U;
    msg.messages.assign("ABGCJPQVUNAPMZZEFDTULJQTFSCZRWUXTFWGNDPLEGTNIJYSLHNYEWOXKOFLBPYZEOKACZVUQWUYHUOEKIRDPDZSHWVRWFNMVUFMELCUGQYGACRITKWAJRNQXRVYQBPLMNQEHUDO");

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
    msg.setTimeStamp(0.4346580909679042);
    msg.setSource(10702U);
    msg.setSourceEntity(245U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(228U);
    msg.sessid = 306537897U;
    msg.messages.assign("DRPWICIEIZOGMBMYQZDWAXLRHYOIBCJAMHQSIKZFDECPLDVUOVFIQREXSDJBXNQULVAEFFEMFJVIKLRGLWSNSKARZKAFGLTOZPGWDQNHPBLAXBOVCCTOHPEPKTKCWDSCFIHMRLWJSSTHEYZDXJRFITFSQJTTYEDIACBGAXMSPZVNZV");

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
    msg.setTimeStamp(0.6007118156202289);
    msg.setSource(14671U);
    msg.setSourceEntity(100U);
    msg.setDestination(42548U);
    msg.setDestinationEntity(110U);
    msg.sessid = 449759183U;

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
    msg.setTimeStamp(0.7406948134967769);
    msg.setSource(15198U);
    msg.setSourceEntity(155U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(250U);
    msg.sessid = 1006691603U;

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
    msg.setTimeStamp(0.7215680663884101);
    msg.setSource(33980U);
    msg.setSourceEntity(169U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(238U);
    msg.sessid = 1317667351U;

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
    msg.setTimeStamp(0.3291318247674654);
    msg.setSource(20229U);
    msg.setSourceEntity(18U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(15U);
    msg.sessid = 425176222U;
    msg.status = 205U;

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
    msg.setTimeStamp(0.24732569348478906);
    msg.setSource(26363U);
    msg.setSourceEntity(95U);
    msg.setDestination(1775U);
    msg.setDestinationEntity(196U);
    msg.sessid = 2522584410U;
    msg.status = 33U;

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
    msg.setTimeStamp(0.9818119596130214);
    msg.setSource(31690U);
    msg.setSourceEntity(4U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(24U);
    msg.sessid = 3900170207U;
    msg.status = 70U;

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
    msg.setTimeStamp(0.9498101172542812);
    msg.setSource(55453U);
    msg.setSourceEntity(133U);
    msg.setDestination(12317U);
    msg.setDestinationEntity(149U);
    msg.name.assign("QXZMSTYAZGGQFXNMKKWYOGEEFPFMCJYBQBHGLTYMDIIKWUEVCAGKRWMJVLRJESPDLJXBBVPYPHPVDSHNEURNAMMEZOATZGPCXPWNKYKAGUAOBLSLUUZQPRXDOPWIVSJONVBFXIHWLZRJSARIGRMCHFUFTVTMRTTXMADIXDLOKBBRCPBGESUEFNHJNZACHSYOJDFDOTWDVSKCHLOVKFIBRDUETIZUWVFQXYLQN");

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
    msg.setTimeStamp(0.5260071747749294);
    msg.setSource(16531U);
    msg.setSourceEntity(130U);
    msg.setDestination(65302U);
    msg.setDestinationEntity(103U);
    msg.name.assign("PWQJWTLSRJZQFVBHGLZXFXEZQEDDMRSFIHSKOXASTIEKSOEVPENFSMKGD");

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
    msg.setTimeStamp(0.8141480432520518);
    msg.setSource(33402U);
    msg.setSourceEntity(94U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(129U);
    msg.name.assign("VOEJTFTTUOPWBSINMSOBRZTKCCLVGZFIHLUWSMZNAXYMILZZXXDCHDEAWNWQAMQTPRTQVQIRROTFSAIRYYRKJHBKRVUCFKAIHZYRKUFCGOEJEJXQREZRDUKMHBGHNKSADYSAJYZGAEUJVQVXEQGWWFZDFQSKEGKPLXE");

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
    msg.setTimeStamp(0.8761903497483444);
    msg.setSource(6165U);
    msg.setSourceEntity(136U);
    msg.setDestination(61795U);
    msg.setDestinationEntity(233U);
    msg.name.assign("RUYWDIXVOCWZKWKVIPMGNNQPCGSESIJQANNRLHEYMJSOXCFVTFTAERHYBJTVPGYETLGOJEJEVYWRKLDSWUMFUWWGWEACCPFQUWNFEXYLUKJ");

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
    msg.setTimeStamp(0.9304388229045435);
    msg.setSource(51037U);
    msg.setSourceEntity(99U);
    msg.setDestination(48628U);
    msg.setDestinationEntity(208U);
    msg.name.assign("GRPJZMHLBNUUDWRDEITNKZAZI");

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
    msg.setTimeStamp(0.22552356945487384);
    msg.setSource(9148U);
    msg.setSourceEntity(117U);
    msg.setDestination(23164U);
    msg.setDestinationEntity(89U);
    msg.name.assign("CLWKPZRHSYGSANIIOGMSWEHKFHZGDOZDXZJEQHTXROCZDIAZYPWQWIRBCIVMPEKDGWPUIUDQNZQMTGFDVQCNKLXABMJQWXEEYETERSHPRCTKSPMVAJWWVFRCQNTVBJOIMTLHLZNBAJHGBRYUSHPKUSZXQXFYUG");

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
    msg.setTimeStamp(0.6774704888550301);
    msg.setSource(30684U);
    msg.setSourceEntity(158U);
    msg.setDestination(40719U);
    msg.setDestinationEntity(199U);
    msg.type = 97U;
    msg.error.assign("VOHNBIQEAZCVVMRUZAUGKZJUXMJTPDVCH");

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
    msg.setTimeStamp(0.9485443224073706);
    msg.setSource(21937U);
    msg.setSourceEntity(103U);
    msg.setDestination(56928U);
    msg.setDestinationEntity(93U);
    msg.type = 108U;
    msg.error.assign("SYBCVIUIGEZTYWSNDHIRRMTEYJKFTQTXVCLGCIUHXEQYRLAFLHVMPRQOCCUAQOCYWASJEPXODNBCRBOMIEFKQESMWNLJZJMGYPVSJWZVGEFJBWTKDCSGNNUIISBROLSHDAZAAZVKKXVDPKUPVRIOXY");

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
    msg.setTimeStamp(0.13613906707046874);
    msg.setSource(41595U);
    msg.setSourceEntity(212U);
    msg.setDestination(5543U);
    msg.setDestinationEntity(47U);
    msg.type = 202U;
    msg.error.assign("CJAKNPATYQVVHXWVMHIYXSJRAMKUEQZOTJMJRERFODDCYJIYLXLAHMKFM");

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
    msg.setTimeStamp(0.2173386351411296);
    msg.setSource(24885U);
    msg.setSourceEntity(74U);
    msg.setDestination(55941U);
    msg.setDestinationEntity(146U);
    msg.seq = 38144U;
    msg.sys_dst.assign("SOSPYRLLPXXFRSXHXUJNVOIFAZPGEWKMUPAGBSZCXVAHYGWTCFNAJEWEJLNQTXOZCRGFNNEKLMZIBIPRWCNHAKQACOEOYZUQPCDJZTVVHXQDYIQKHUGUHUBYDZDLIQUVPSIZLMOHTMTESPTFCEXEYLWNSFMUWGVRTLQTOGJOOYKCZDTAIVIYEVWNHPJVVCUMMDZMRBBIRJGQRKNIJQKBYWASDBKDMFXTOGLSWDRFEBAWJBFFNUSHAKLYMDKC");
    msg.flags = 53U;
    const char tmp_msg_0[] = {68, 126, 92, -72, 111, -16, 71, 8, 49, 118, -57, -92, -14, -125, 124, -86, 38, -121, 19, 98, 65, -94, -128, 0, -4, 21, -120, 54, 41, 74, -41, 45, -11, -51, 24, -40, 10, -23, 28, 126, 21, -74, -126, -26, -90, -28, 83, -124, -51, 53, 48, 93, 31, 2, 84, -37, 7, -91, -32, -77, 112, 0, 94, 72, 25, -16, 18, -69, -90, 49, -105, -94, -12, -114, -105};
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
    msg.setTimeStamp(0.8532719319734827);
    msg.setSource(26362U);
    msg.setSourceEntity(125U);
    msg.setDestination(36722U);
    msg.setDestinationEntity(171U);
    msg.seq = 5108U;
    msg.sys_dst.assign("CDFXRGOKPGVWHWLXRRHTZOSXHTKBEQJFWFIVGTKSJHRQZZDQMKZRBHBPP");
    msg.flags = 243U;
    const char tmp_msg_0[] = {60, 101, -33, -68, 40, 96, -108, 40, 89, 24, 38, 71, 86, 21, -45, -69, 26, -95, -124, 98, 77, 112, -63, -34, 36};
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
    msg.setTimeStamp(0.6164323523998817);
    msg.setSource(27748U);
    msg.setSourceEntity(6U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(230U);
    msg.seq = 52175U;
    msg.sys_dst.assign("ZLEUAYLXDOXKYCKMZNQTBHDNJRZISBBSPXDUKMKZAADUXDQUERCPRCGDGIERAWGVOZMRMWLZUPQJNJJULYPNVMNWJQE");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-2, -87, 33, 47, -109, 68, 70, 31, -91, -109, 123, -101, -114, 30, -60, -42, 46, -92, -3, -46, 87, 79, -77, -13, 115, -113, 116, -90, 0, -22, -10, 52, 63, 117, 23, -9, -122, -73, 119, 64, 74, -101, -90, -115, -37, 22, -90, -64, 13, -27, -123, -20, 110, -5, -55, -110, 24, -106, -8, -109, -119, 69, 12, 34, 45, -89, 24, -126, -19, -55, -72, -26, 57, 101, 48, 90, -28, -31, -45, 10, -44, -52, 48, 102, 53, -6, -21, -45, -73, 101, 109, 85, -44, 30, -18, -113, -3, 93, 106, -13, 17, 19, 87, -89, 115, -99, -67, -69, -90, 111, -116, 121, 16, -105, -53, -13, -80, -113, -125, -95, -37, 14, -61, -114, -5, -3, 25, -58, -2, -82, 82, -68, 52, 113, -104, -117, 99, -12, 118, 117, 82, -99, 75, -71, 105, -2, 8, -49, 41, 67, 8, 98, -2, 42, -53, 71, 20, -114, 2, -49, -108, 55, 64, 63, -105, 118, 42, -46, 61, 93, -14, -60, 57, 8, 13, 43, 57};
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
    msg.setTimeStamp(0.6158353683118417);
    msg.setSource(14177U);
    msg.setSourceEntity(235U);
    msg.setDestination(52301U);
    msg.setDestinationEntity(212U);
    msg.sys_src.assign("IMJUHPCXHADXDKUCFWRZHKDGZJTUAEMYLSRZLWTNFSMBNCRMQEGYVKNIIHJOQBALPVQLEQKWWKYOHDMRYFGTKXJEKRNEHBBAJMAOBMMRZNAUOGUAWXKPYIBSDOOUICRSLVTCQYLTIAOEEJQCCFGXWMPVOIXPGSRTLUAUZVQHSSSGIZOIDLQXW");
    msg.sys_dst.assign("ZTHXECIFJKMACOGBVPYKEDFUOLHVHGYOAHVPUTRCLSZRWSNRBKMTLPIZQBMSWVRJMPBFFJYEWICTNEPOTWJWDBOXXZEJARUNXUSTUCAGUYDFRUGNAAYPVSOXRWVUKPODJZGELCCWNIDDKQWAJJPITIIZDKB");
    msg.flags = 25U;
    const char tmp_msg_0[] = {-109, -68, -105, 98, -123, 68, -63, 5, 29, 52, -125, -83, -6, -104, -89, 108, 106, 27, -28, 79, 102, -108, 72, -105, -25, 47, -39, -81, 34, -4, 7, -88, 48, 115, 91, -67, 62, -61, -119, 11, -22, 84, -72, 90, 114, 108, -30, -58, 56, -118, 13, -68, -85, 94, -55, 80, -27, 13, 98, 11, -117, -59, 30, 8, -66, -116, 40, 54, -80, 117, 40, 118, -101, 23, -109, -2, 39, -5, -7, 37, -36, 92, -97, -90, -33, 69, -102, -67, -55, -46, -115, 109, -9, 59, 31, 77, 1, -117, -128, -95, -2, -103, -119, -19, 118, 38, 94, 66, 99, 108, -41, 51, -77, 9, -48, -56, -9, 21, 107, 39, -121, 120, 85, -16, 20, 99, 86, -96, 121, -28, -88, 86, 126, -95, 43, 64, -97, -54, 98, -37, -45, -88, 41, 12, 0, 51, 32, 19, -35, 70, -8, 115, 68, -24, -18, 26, 116, 2, -36, 108, 98, -62, -67, -103, -126, -46, 57, 69, -73, 113, -73, -108, -84, -57, 85, -25, 14, -67, 112, -124, 35, -22, -16, 72, 68, -69, -8, -41, -49, -125, 6, 28, -120};
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
    msg.setTimeStamp(0.3798798540133639);
    msg.setSource(49396U);
    msg.setSourceEntity(208U);
    msg.setDestination(8471U);
    msg.setDestinationEntity(77U);
    msg.sys_src.assign("VUIZHKBMDHXANWUGNKWWLSWZOTFNSXUVCBLZZTFDKCEAEDHWKTMCVMOVNBQNPCRIWQTIJMMRZGAYCGHKJUTXUFVDUFEMHVMLGYQGFOQDKKSTVOPJOGIRLXSEOMOXFOTKIJBDSIKMEAYPLRJIGHQCJGWNRSEQJABIRYGHYSAWNBUIZBUTQPKDVFXICRYFEAPUAMFOQLAHQTYCXSZRHNLVZLWDLJRJBDFSH");
    msg.sys_dst.assign("OTBJLDFYMHCOJOASNSUKIPZMJRINASPRMVOOHBULLTDZNXKYMNQEYKXACVLCSBKIKATYBRTDGSJNNRIOQXNMGFYONXUWETVRIFUXHMPLDEQPLAGFZYXUVVDTWHQHYAZUTSBOKDGUAVAGVQTVWFZUHCKCFRY");
    msg.flags = 40U;
    const char tmp_msg_0[] = {45, 8, 83, -60, 100, 121, -11, 14, 82, -12, -70, -23, 45, -103, 51, -103, 52, 81, 16, 1, -70, 76, 122, 10, 0, -21, -70, -95, -87, -120, 124, 111, 11, 10, 71, -5, 82, -50, 78, -84, -91, 64, 21, -92, -128, -17, 45, 50, -44, 90, -77, -38, -119, -54, 80, 33, 47, -67, 58, 76, -27, 55, -74, 75, 8, 19, -42, -15, 98, 113, 111, 114, -65, 63, -96, -33, 5, -99, -80, 29, 20, 40};
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
    msg.setTimeStamp(0.8248371131476152);
    msg.setSource(17768U);
    msg.setSourceEntity(60U);
    msg.setDestination(29147U);
    msg.setDestinationEntity(84U);
    msg.sys_src.assign("MFCVKCTYNSZQYWDFZOHOYAVKRNIWHEHPEKPZQOUGHWQVCCDGCTRZEMLHA");
    msg.sys_dst.assign("LBLKZECIWVFHARRMDLLPHXAFWRZCZWUPYYUFIPOZVMCSAKJGRRIJIVXNVBNQEOHLXCPSJSBQGDKMBTVBWBNYCETEESPOHZIHUAKNDDRGLTTRDWXKFGGDBIZDADXNVUUUZQXQYRMUBOASOXSZTYWSOVIAGINQWCEMZGFLKEGWPQGQPQLAKFJDYPJUCJRLXMNWTT");
    msg.flags = 48U;
    const char tmp_msg_0[] = {111, 108, 100, -66, -90, -10, -96, 37, -126, -102, 22, -67, -66, 99, -46, -62, 108, -24, 35, 36, 96, 39, -53, -81, 113, -99, 66, -88, -118, 71, 58, 55, -12, -75, -126, -70, 0, 112, -121, 42, -99, -32, -19, 32, -3, 1, -93, -5, -59, -49, 47, -117, -104, 37, -65, -32, 69, -50, 54, 4, 107, 46, 119, 15, -126, 14, 116, 66, 73, 3, 93, -36, -64, -3};
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
    msg.setTimeStamp(0.8631968158380867);
    msg.setSource(27115U);
    msg.setSourceEntity(130U);
    msg.setDestination(26458U);
    msg.setDestinationEntity(245U);
    msg.seq = 63562U;
    msg.value = 24U;
    msg.error.assign("FIVDPLCRHJZDXAWFJGFMLCJUEYMYAVKNLEWDGSWCZSQWNEXHLRTMUYSULGFTMKYEZIYTINSHDASWFMPKMOLANZGEBTMVLBPUWCQADZXPZHEZGYASBDUGKXYR");

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
    msg.setTimeStamp(0.14366295968947085);
    msg.setSource(61235U);
    msg.setSourceEntity(32U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(151U);
    msg.seq = 51763U;
    msg.value = 147U;
    msg.error.assign("FHIAXWHVCMDTDMFEVNDHCNWTZZVWGTBFEBHOGKTZXZZOLFMENJBHSASYBJKSQNJJSOGOAKNSWTCXJOCLKNUNBHLULBLMPVJGE");

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
    msg.setTimeStamp(0.3563377757747801);
    msg.setSource(47577U);
    msg.setSourceEntity(168U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(210U);
    msg.seq = 13701U;
    msg.value = 231U;
    msg.error.assign("WVXFORBHZFPODRWRNDXMNULRQELPXBEGYKBCZEDKFPXHDITIPSLHTNKWWTTYHFWUJVOMVCZMITVRMVPUSXLQLOQEYASKMSGONIKYAALDBYDBNNUJZKKXNWFPQRFGFCUTFEBYACANXXNIZEUZVFJGCTRDOCUGASOJTFHCJUAIWBSCMXZLHDICGU");

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
    msg.setTimeStamp(0.10133828707131587);
    msg.setSource(11490U);
    msg.setSourceEntity(14U);
    msg.setDestination(40717U);
    msg.setDestinationEntity(212U);
    msg.seq = 42581U;
    msg.sys.assign("AAESTYBDPEMIFGRMOUHPKNGPQRQUNSHCTQJVSWNBJVGAZQLAIBWCKEWDAZIDFCRSOQDMKNUGKXLRIRCBSXWEHJWPEFJTTTZYIVCDYNXMSJOLDUZGJMXAFJONLOSUWVBGZHOKCPNQHITFLCHZCPIXMZDVUGNYIEHEVDNEVLUYKXPARAZSUZVZYDLPFCYSJJTMQTQOBGBYGLQXRUMX");
    msg.value = 0.4067760067779007;

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
    msg.setTimeStamp(0.33889431355598076);
    msg.setSource(56558U);
    msg.setSourceEntity(82U);
    msg.setDestination(38000U);
    msg.setDestinationEntity(5U);
    msg.seq = 21538U;
    msg.sys.assign("LXONQMMPTIGOJBVQRPRBCHGYCJVODVYVLXEBQISTCCKKJHXLIMITDYGFXHAUEPFFBDJENKXZSWCNZBCNQIYUPAAIIMSGUXVWFBLQRRLLWOOHZARUUWMBHKKQFSMEDLMZKPAPSBJBGOKQHNIEUTYRPOMTZWAAGFFJWRRVJLUZWTETJWNQXCKBTPGZYHEXSWHGQLCRXVHDFVJNMOXSZWVAFTPSRNDDGKIOCDFEYOZDJCUYUHNYSYIZQVKUPEA");
    msg.value = 0.7012299488148594;

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
    msg.setTimeStamp(0.3157838607493113);
    msg.setSource(40795U);
    msg.setSourceEntity(84U);
    msg.setDestination(27648U);
    msg.setDestinationEntity(125U);
    msg.seq = 52716U;
    msg.sys.assign("VIYBTEYWDGDROYQMNEDASOJLXOKGRWMETHBXHVBCELWAOGWDDIBLWNPOLOYQFECTKXTGXBKSSOYEITIYZZCQMLUFBALXPZPBXTPQIKCEAUMFVXYHFMJYKKHMCHMAGTFVUDNRQRDQZU");
    msg.value = 0.8188960711458693;

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
    msg.setTimeStamp(0.12156628736663488);
    msg.setSource(20457U);
    msg.setSourceEntity(63U);
    msg.setDestination(52005U);
    msg.setDestinationEntity(245U);
    msg.action = 174U;
    msg.longain = 0.6243301808877546;
    msg.latgain = 0.5753520185971682;
    msg.bondthick = 1161478196U;
    msg.leadgain = 0.9188843676448399;
    msg.deconflgain = 0.6635814925302275;

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
    msg.setTimeStamp(0.5243707513718491);
    msg.setSource(5048U);
    msg.setSourceEntity(118U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(253U);
    msg.action = 30U;
    msg.longain = 0.5495485027004773;
    msg.latgain = 0.3619937578728184;
    msg.bondthick = 2040859588U;
    msg.leadgain = 0.8945149172667304;
    msg.deconflgain = 0.9845294644184354;

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
    msg.setTimeStamp(0.43393469436100496);
    msg.setSource(39918U);
    msg.setSourceEntity(212U);
    msg.setDestination(9782U);
    msg.setDestinationEntity(116U);
    msg.action = 149U;
    msg.longain = 0.5785616501097516;
    msg.latgain = 0.6867262874050468;
    msg.bondthick = 3775010850U;
    msg.leadgain = 0.43422346022272695;
    msg.deconflgain = 0.896480935133214;

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
    msg.setTimeStamp(0.3767724612867255);
    msg.setSource(33554U);
    msg.setSourceEntity(11U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.5930506074936317;
    msg.dist_min_abs = 0.5886845236327649;
    msg.dist_min_mean = 0.535469430781219;

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
    msg.setTimeStamp(0.7147385907379111);
    msg.setSource(3784U);
    msg.setSourceEntity(249U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.9578260834032014;
    msg.dist_min_abs = 0.1575507144643652;
    msg.dist_min_mean = 0.748609897091112;

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
    msg.setTimeStamp(0.8521406797840984);
    msg.setSource(2552U);
    msg.setSourceEntity(48U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(163U);
    msg.err_mean = 0.2628235052488308;
    msg.dist_min_abs = 0.6183374539431921;
    msg.dist_min_mean = 0.3008887382178612;

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
    msg.setTimeStamp(0.18744242135685396);
    msg.setSource(18412U);
    msg.setSourceEntity(238U);
    msg.setDestination(16860U);
    msg.setDestinationEntity(181U);
    msg.uid = 84U;
    msg.frag_number = 144U;
    msg.num_frags = 83U;
    const char tmp_msg_0[] = {-78, 85, -11, -78, 97, 10, 59, -128, -23, -91, 67, 21, -38, -86, 96, 62, -52, 40, -16, 9, 123, 33, -59, -118, -32, 36, 73, 118, -37, 50, -9, -77, 40, 112, -68, -64, 116, -6, -24, 52, 19, -56, 63, -84, -86, 31, -21};
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
    msg.setTimeStamp(0.4132040127224993);
    msg.setSource(6900U);
    msg.setSourceEntity(226U);
    msg.setDestination(32950U);
    msg.setDestinationEntity(90U);
    msg.uid = 165U;
    msg.frag_number = 61U;
    msg.num_frags = 184U;
    const char tmp_msg_0[] = {-86, -90, 4, -123, 7, -107, -50, 55, -69, -17, -4, 70, -9, 126, -106, 105, 28, -6, 48, -99, -79, -86, 5, 10, 79, -27, 33, 98, -124, -16, -60, 65, -107, -68, 86, -38, 38, -2, 31, 79, 9, -47, -3, 41, 120, 4, 121, 19, 86, 68, 47, -95, 122, 48, 14, 109, -37, 65, 45, 118, -99, 100, 76, -3, 29, 113, 122, -112, 7, 24, -36, -113, 100, -110, -82, -6, 63, -15, 1, 33, 99, 76, -49, -74, 106, -28};
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
    msg.setTimeStamp(0.7693546177207048);
    msg.setSource(56867U);
    msg.setSourceEntity(39U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(136U);
    msg.uid = 6U;
    msg.frag_number = 86U;
    msg.num_frags = 25U;
    const char tmp_msg_0[] = {14, -122, 34, 26, 90, -69, -17, -91, 82, -68, -11, 90, -110, -29, 70, -65, 113, 117, -63, -34, -116, -124, 77, 52, -82};
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
    msg.setTimeStamp(0.06847093849151331);
    msg.setSource(3666U);
    msg.setSourceEntity(104U);
    msg.setDestination(53992U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("ROLCPVVEVNAQOJBNGHASWXEZOVKMUKWJKPNZNLJKFRBOXXDFITPGEPIEGRDNAYYOXBBWLXQJRQCIRJFVDCRFIDCXMSMHPCPXUPSFMECPVABDITHZTSWUNLQPTYLTJJTRIHVLHAFLKKIWCNMDGZKKRVOWFXEBYZDMDHVZHHGQTYYWMZAAKULCYNQZ");
    const char tmp_msg_0[] = {-14, 113, 44, 73, 13, 12, 44, -65, 50, 33, 99, 115, -105, 16, 39, -126, 8, -122, -34, -117, 14, -78, -90, 120, 45, 69, 46, -101, -112, -33, 110, -72, -26, -57, -87, 79, -94, 25, -114, 28, 57, -123, -8, -6, 52, -111, -117, -74, 78, 29, -61, 5, -93, -32, 102, 16, -32, -66, -69, -114, -99, -53, -116, 75, 19, -48, -31, -88, 33, 57, 117, 113, -6, 113, -93, 72, 96, 50, -35, -62, 66, -59, 116, -76, -88, -72, 17, 86, -91, 82, -114, 38, 97, 72, 45, 68, -58, -81, 50, 27, 89, -78, -56, -117, -85, 110, -108, -121, -126, -84, 24, -17, -27, 124, -17, 62, -58, -24, -58, -18, 60, -54, 92, -37, -108, -33, 0, -92, 125, -56, 105, -6, 108, -45, 34, 37, 1, 119, -14, -117, -104, 103, -99, -34, -62, -44, -5, 30, 42, -16, 57, -108, -10, -68, -117, -28, 99, -21, -46, 19, -3, -5, 126, 61, 64, 92, -40, 125, -107, -33, -4, -59, 108, 87, -127, -61, -47, -13, -42, 78, -29, -35, 18, -98, 117, -101, -98, 13, 89, 31, -39, 125, -45, -13, 14, -9, 90, -19, -16, -120, 6, 30, 122, -23};
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
    msg.setTimeStamp(0.4932715982789042);
    msg.setSource(9024U);
    msg.setSourceEntity(211U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(110U);
    msg.content_type.assign("OUJAETKQZMPJMAMFSCFKXFSGNHXXQAAKIWBMFZJCLSRFRVJFCYXTXBPELRWBIYXZETLQGEEABHDQSBOIPGLEVSVFUPZMKOCWWJPFCPKKEAVDNYTOVBCRGOIQVHOGDDXIWAXLDRFIWOHBNLZYSNTKZNTRJKMEAXHVYDQJNYVYQUGZZHHQCNCSGYIYBJTYVNQATBHKVOPGDBPTRUIGSITJSMSUNROFKUARHUWHULQEZPIO");
    const char tmp_msg_0[] = {50, 92, 0, 90, 31, 68, -1, 114, 73, -39, 49, 126, 109, -87, -58, -51, 109, -37, 41, 61, -33, -104, 110, -77, 28, -28, 22, 41, 40, -97, -57, 54, 73, 105, -33, -83, -66, -75, -101, 125, 38, -47, -120, 32, 102, 96, -118, 27, 4};
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
    msg.setTimeStamp(0.8054122282074118);
    msg.setSource(53592U);
    msg.setSourceEntity(225U);
    msg.setDestination(24155U);
    msg.setDestinationEntity(63U);
    msg.content_type.assign("PUPJMMBCXATHMK");
    const char tmp_msg_0[] = {-58, 63, -66, -57, 41, 64, 44, -3, -88, -124, -48, 112, 44, -80, 68, 107, 56, -93, 0, -52, -93, 98, -72, 101, 16, 69, -26, 121, -56, 110, -75, -53, 32, 97, -127, -89, -45, 18, 64, -95, 12, 27, 47, -4, -116, -81, 79, 38, -91, 99, -17, -40, 67, 52, -22, 18, 46, 120, 58, -95, -119, 83, 96, -3, -46, 77, 96, -43};
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
    msg.setTimeStamp(0.5322615742405318);
    msg.setSource(901U);
    msg.setSourceEntity(180U);
    msg.setDestination(52442U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.5462203965717293);
    msg.setSource(14040U);
    msg.setSourceEntity(148U);
    msg.setDestination(53198U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.7895077406928358);
    msg.setSource(17425U);
    msg.setSourceEntity(193U);
    msg.setDestination(22813U);
    msg.setDestinationEntity(27U);

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
