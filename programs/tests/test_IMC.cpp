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
    msg.setTimeStamp(0.393065544677);
    msg.setSource(52889U);
    msg.setSourceEntity(144U);
    msg.setDestination(4690U);
    msg.setDestinationEntity(237U);
    msg.state = 220U;
    msg.flags = 17U;
    msg.description.assign("SHUBGERCCDRANTNARUQEZMDMHFZPQWYPDOYMVFOXITUCVGVCTFIGQAKLBPTAGCMVCCJOFKSONIRMEIGLZNOXFQFBQCHMUWLUYYELVBIESJWRWDGMBUZOXIOOIULNHFPQFEYLWWEDEBRJNKGLWPDNPHRUDPSUKFJKCYRPTEBSHQIGJDWASPZTLDVAEXZAMGQVKTZOHBXVNGHQTNWAKIYYWJXXXJFYSPZHZRDQOLI");

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
    msg.setTimeStamp(0.18902222543);
    msg.setSource(38871U);
    msg.setSourceEntity(215U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(251U);
    msg.state = 248U;
    msg.flags = 215U;
    msg.description.assign("FASYBILRDSKBWVDCXZHNUCCSVGJXMSEDFXACUQJBIENZMBEZBXKXLGDNGMVPOYFREBCBMKIEPQMXKHPTPVXNSZRYRTTCZSAACJHMGWAHMPQHFVUBXOTIOEGLCGWLJHUEFYWAZCYRKERDKUQGWSBNPQWGOXGNWLMDLQNDHFYUYZZAOUZJPUHRJUPLDIILVFJWNAIOHFZKJFQVRS");

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
    msg.setTimeStamp(0.892318134494);
    msg.setSource(49969U);
    msg.setSourceEntity(187U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(107U);
    msg.state = 11U;
    msg.flags = 114U;
    msg.description.assign("EHCQZDOWHAQPSNSNEZYPSVNXZNBLVLKCGVRUILYBLTDIKFPDZTFXPTMRJPQSKRGFPFWJUPXOSVGQRDEHTZSMPUJIMSSEHQFUWMMTHBQODWNOWMAGZXKCOLQBOAXSVJOJLBCACLVNBFBWRDTFOSTHJRGIUHCXBNKKWIPNQWJCGAKMYADZEBZVCZFRYELAR");

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
    msg.setTimeStamp(0.781972585978);
    msg.setSource(15264U);
    msg.setSourceEntity(86U);
    msg.setDestination(6795U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.950513261893);
    msg.setSource(57510U);
    msg.setSourceEntity(25U);
    msg.setDestination(32895U);
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
    msg.setTimeStamp(0.0665185113792);
    msg.setSource(35755U);
    msg.setSourceEntity(125U);
    msg.setDestination(38834U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.610483533786);
    msg.setSource(2146U);
    msg.setSourceEntity(2U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(243U);
    msg.id = 100U;
    msg.label.assign("LNJYOUJDAXZMVLFVSBQRY");
    msg.component.assign("VCPRNOEGLCRTBGZKTAVIAVCZSVSPUHBOUTKSKEMBALGNNVMWPXUOORKHGCQQFHIPYJYMLNJCJMQYCKXABDNJCZOPYZHHPRXUWXQFFPQWPRTQYIRIIQXVTOBXIMCLSWREYLMECJLUUGDCSGADAHDOFVVBEFDTZADWMFEYKELOUVAWDBZMQZBTFNZBWSTNJZUHGNGIXAKZUXRKHKHXXUYIJFSFEVGPOHILWLYMSENJYBMWNPJTGDS");
    msg.act_time = 23605U;
    msg.deact_time = 24136U;

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
    msg.setTimeStamp(0.532972595318);
    msg.setSource(45656U);
    msg.setSourceEntity(90U);
    msg.setDestination(65139U);
    msg.setDestinationEntity(66U);
    msg.id = 75U;
    msg.label.assign("PQIVUBREQZURWDHIBDYQEAJWFXHRPUOBNTFMLUWFCFGMVWEGFEBYDNBRANQIFOXNUIYCHEUJVPMWGSERKOVSLOKCFAEGKOCLLKQMVDFEUOYTNRUOG");
    msg.component.assign("KMLJTDMJZMPRJHKDRGZAWQJFOVOQPLVDEKKBNEMBXOOQYQPZSXBRPNUYJAGPJCSYTKXUTBMFRICZRGMSNIGXHVBBIQ");
    msg.act_time = 12307U;
    msg.deact_time = 2180U;

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
    msg.setTimeStamp(0.671014467319);
    msg.setSource(19774U);
    msg.setSourceEntity(57U);
    msg.setDestination(58663U);
    msg.setDestinationEntity(14U);
    msg.id = 236U;
    msg.label.assign("YJRIMUAOEFSFPVPUFXSSHTIUCBKJXKTFGXJFAVDILPTNRQQJDGLHWRCVHQZXUVAY");
    msg.component.assign("KQGZGRINJKSVHNNMTNEBDXJPYCJCKBLVYFGREBNVYFWAVNTQVZUMJX");
    msg.act_time = 26528U;
    msg.deact_time = 42684U;

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
    msg.setTimeStamp(0.00250151453204);
    msg.setSource(9678U);
    msg.setSourceEntity(123U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(213U);
    msg.id = 68U;

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
    msg.setTimeStamp(0.22651088683);
    msg.setSource(40492U);
    msg.setSourceEntity(149U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(99U);
    msg.id = 155U;

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
    msg.setTimeStamp(0.496777091334);
    msg.setSource(34738U);
    msg.setSourceEntity(14U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(247U);
    msg.id = 117U;

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
    msg.setTimeStamp(0.339502775535);
    msg.setSource(45089U);
    msg.setSourceEntity(177U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(245U);
    msg.op = 150U;
    msg.list.assign("RTXJBAQSMHUUQAGKRGCEHHSDMSLBNUCCYN");

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
    msg.setTimeStamp(0.663432869179);
    msg.setSource(57790U);
    msg.setSourceEntity(138U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(177U);
    msg.op = 160U;
    msg.list.assign("LPGLVNXHCGOTICHRYDYSQOXENDMIHNBHDPAOUOFIPNMVUIQZQBWJKYDCJFMXAQORQKMTVWUIAKNCIAVUAFHRLLBDQKDWCPOZERIIELZUKOSUSSEGAHFYBKFRXYKFAZYQEMFSWKJZJCOGSDMWXQEXQKTQVUMCSAXRITDVTMRRBUO");

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
    msg.setTimeStamp(0.88088349306);
    msg.setSource(16307U);
    msg.setSourceEntity(65U);
    msg.setDestination(57412U);
    msg.setDestinationEntity(110U);
    msg.op = 24U;
    msg.list.assign("ASTSAZRIZGSFKKJQA");

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
    msg.setTimeStamp(0.664082356081);
    msg.setSource(45760U);
    msg.setSourceEntity(130U);
    msg.setDestination(57529U);
    msg.setDestinationEntity(153U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.901789408847);
    msg.setSource(36324U);
    msg.setSourceEntity(183U);
    msg.setDestination(26484U);
    msg.setDestinationEntity(193U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.13467266859);
    msg.setSource(12865U);
    msg.setSourceEntity(118U);
    msg.setDestination(6705U);
    msg.setDestinationEntity(207U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.434635517217);
    msg.setSource(37583U);
    msg.setSourceEntity(216U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(161U);
    msg.value = 50U;

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
    msg.setTimeStamp(0.932429654312);
    msg.setSource(55574U);
    msg.setSourceEntity(35U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(116U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.972150821525);
    msg.setSource(39226U);
    msg.setSourceEntity(10U);
    msg.setDestination(50354U);
    msg.setDestinationEntity(188U);
    msg.value = 190U;

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
    msg.setTimeStamp(0.544104367753);
    msg.setSource(21956U);
    msg.setSourceEntity(60U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("VTCMPPJUWFBXTUPKPZK");
    msg.message_id = 24436U;

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
    msg.setTimeStamp(0.902893623655);
    msg.setSource(26014U);
    msg.setSourceEntity(212U);
    msg.setDestination(4364U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("QHGQBKCRYKIVOXRSASOLWNIKTFWLVQBWMOHSKEXOPFEMDGUUACGCJXGNZYOBSKYTUCURGFMMGDCNIYILSEPVUVWVZHXWGXVNWWEBLQEYIGMEOXRBTCTNIN");
    msg.message_id = 55160U;

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
    msg.setTimeStamp(0.692073638019);
    msg.setSource(51292U);
    msg.setSourceEntity(202U);
    msg.setDestination(45718U);
    msg.setDestinationEntity(11U);
    msg.consumer.assign("XPTVEOPVFHTPBOUHFFJJQGXWSRSIMTXHDQWTNRVTPXLFFRJKKKGGUVWOVHINJZVAIBGNBELFLKZSDRRTURPDCAZZYYZFOIMEZAUNNXZPFXPCLGOQJNEGJDAYJQRLYCGYZBWQWEHLFNCNRSOT");
    msg.message_id = 63551U;

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
    msg.setTimeStamp(0.962424643337);
    msg.setSource(40418U);
    msg.setSourceEntity(150U);
    msg.setDestination(29750U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.657904467441);
    msg.setSource(3582U);
    msg.setSourceEntity(100U);
    msg.setDestination(48846U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.502580467971);
    msg.setSource(1266U);
    msg.setSourceEntity(116U);
    msg.setDestination(3219U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.439022656386);
    msg.setSource(34306U);
    msg.setSourceEntity(101U);
    msg.setDestination(60802U);
    msg.setDestinationEntity(212U);
    msg.section.assign("ZTSRJJTWASQLEHITZCRUIGMAMEGLLCRDNMYSPYCQQZQUAFHHAUPVVLQKKYGSBXXDFGMVBISBZKGKUCYVFNOPBFHIYWNVTGSIOAADFHQAQZAKMNMEVJOVBJMSFWXUXNHT");
    msg.param.assign("DTSHJAMCQEXZVSFJZIONGALBLZYFYDYSEJBOHXCEMGMLPXHNDIZJBRZALHPQOAEFHYKPQZTFNGCCRARRIGRMUDMAULVJMXCWPHUPLWDBSTVIWJLWEVERPCQUYUFSCBNQTYVLFBIFUOAUIQWZGOZXWANWOVPBADEQKRJTWBYGPYOKZEKSHRGXTTHJNDJTSGKQHFAXJSURRVINCMXZQXDIGXYSSNMGIPKOU");
    msg.value.assign("WMVXGHZCYZYNZYXQBBLWTOAGTIMFXPTPIVMKLYKGAWXCQMWYJVUWHSXBVYDCXCUQFCVUXRNSPLEYANRDHQSZIRCNTKJJNKQMZJBASQMEHRUGAETYOGDQKUPVEIHWMYZOLBKUPHVAODOOOQUMZJJGKTOSUFWCRPRTRFZBVSNHDRZJWIIBIGQMSCH");

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
    msg.setTimeStamp(0.923182188139);
    msg.setSource(11103U);
    msg.setSourceEntity(145U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(120U);
    msg.section.assign("LIRMMKVZTDGOPNIATYBZJCYYVPZLKVUITYFVIODASKUKYSHUWPLTECUQQECXOAAHZQNETXILVMWQEJFRNFGKPLNAVHLCWXDVJSKDAZDZPHJMEIBDGDVRLRJZGEWASJJIFJXBHWAYKNPNBCSIKYMWBNQQKBXEWCZAZXFAGHXPHHPZNRFYKHUQSQLYGGCCMRTEUXJOYUBOBEGNUPQCT");
    msg.param.assign("JTUXZAAMZNAXEIMULYVNIBSYDWGREDXISSPKFKNOCCNTEOVTDNCYPRGWSFPUQUIFJITYHGVAONPDCXHJHPYSQYRBGHECMWRIZLLDPGSZRXRFGMXGWUFMNKWSAGPIZJSXVGQQUEBOOEAUTVQFCRMLPSBAWPXDFVVBRCNQJFQTDF");
    msg.value.assign("VHDBDNFFQBQWHDUXGAGOGTKPZNCRIFKHHFAAFONQYVFOLTPCIIMXERVDIZCXUPGAOULTSFMLHAAWVDXXWPZTWCTVTNFULIRQNIIKIPNYMEVHNMSKPSYLEABYAGWJXJIUZUJGLFUYTKMVMYYKDRECPBYLMLCGZCGMSOOO");

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
    msg.setTimeStamp(0.0962380971789);
    msg.setSource(45033U);
    msg.setSourceEntity(227U);
    msg.setDestination(56645U);
    msg.setDestinationEntity(2U);
    msg.section.assign("HGFOGSJQYZDHGFXTFEUNURUSVDSKCBLDZXIDIWOOQPCIHLCIDMNOOGVTSNUUAHFQAIAZJQUEEJFJMPSUJMMTZAQVVXZUCKEPTNLCBEPGRNMQJXOLCAXYPBKWOPNYAZKLQBJXERBHFYRXRJAIKYRPBAHCDTIITMWRW");
    msg.param.assign("WAVPZDTCJAMBCUNPBXZENGYZPOLZRZXBDWGIJUAXZHNPUQOVGBBYLFNYPSAIFABUCWVBIOSSZRQQDSNJXZMOCJHEGEFRIDSPFKQUHFIIOTKPMIWBKQOVXKNDPPQRQWAVRTZEGJVMYXQQESCXXDYXHYEDLVELSGHLKJNSJRATCLWNLLDTCLFRZWRJTBPHFCDEVUMMSUYKWGONOXICOJOYQKGCKKWRHTEBUWHFYUFMLTIFAANMT");
    msg.value.assign("KVGCCHONTEKRNESHVSXUJLUPSNFAUKIJGMYZJJYATXOBBYHZABRFWCAZYBEXKERWVQEPVZEOFQOQDTANYVLKCZRXTPLMHAXYFITMBNNGWMQZTKNNNOXFDQMKCSSARJOSXCQPYFTVIGFZRAJIYXGOZWBEGKLULMWSMRHFPIFCTDHDARRILOWS");

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
    msg.setTimeStamp(0.123626766492);
    msg.setSource(33287U);
    msg.setSourceEntity(8U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(58U);
    msg.op = 12U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QRPWPHDLONFZBPPTKNOFSO");
    tmp_msg_0.param.assign("UUBQXRJNIPPAKCXVMBOWTFTTYYNVREDPZJIDYBPRJZHEJJEANIGCHZYYDTWKWSGKBFOILFZOUMXZSUIMLSYPAGXNTJWMFAKBKUBKOMVBGPHXKXRLSUWUVEHAOCHHVYGR");
    tmp_msg_0.value.assign("XGBVTDYHGOGSQMFKQDGCGMEUBSYUALFLLPPWXWKROZIHJTWYIZHJMIMNDVAPULGJBRXMOCWKPBGZUSLNKBKESAWWHCXITOILQLGKQJYVZXAHUBLRIOVTVAQFNYIQFDWXUVNFHPDCCAXEKTVFTEQLDPTROSWSRYRJKAHERDIXBNFSMEFGZPOMHJDCRZCMWNYQJHESRTZYGSZFPRBNKUTLOEQOWBBVYNZNNXUHVJTOXDA");
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
    msg.setTimeStamp(0.129629786918);
    msg.setSource(24292U);
    msg.setSourceEntity(159U);
    msg.setDestination(35783U);
    msg.setDestinationEntity(169U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.480922731779);
    msg.setSource(22136U);
    msg.setSourceEntity(38U);
    msg.setDestination(16781U);
    msg.setDestinationEntity(67U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.197362663911);
    msg.setSource(49278U);
    msg.setSourceEntity(103U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(37U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.0267898871054);
    msg.setSource(41987U);
    msg.setSourceEntity(241U);
    msg.setDestination(33874U);
    msg.setDestinationEntity(222U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.663141749463);
    msg.setSource(60169U);
    msg.setSourceEntity(65U);
    msg.setDestination(49201U);
    msg.setDestinationEntity(158U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.563610209367);
    msg.setSource(30814U);
    msg.setSourceEntity(152U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 98U;
    msg.step_number = 196U;
    msg.step.assign("VBRJPJFKRLHVBIJIDBAMBAWRUMQQOFYYCNIWCTOGLDXNIRWRXQVIWTXQCHGDPEJEJGORAXLFTCMPOANNNXFIUGLAFMJGHIMKRZTWKKPCZLNQAOTZSAOTIOCJHJFQEBVIZDSXYTHSTMLSUVKQSNMSZFLSNDZDMECCSRSTADWVUBNGHXUKDLBFGOJHPMZKRYMPWEYOOQXQXKPBUERZZWIPYQY");
    msg.flags = 121U;

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
    msg.setTimeStamp(0.301082476247);
    msg.setSource(12134U);
    msg.setSourceEntity(97U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(96U);
    msg.total_steps = 253U;
    msg.step_number = 91U;
    msg.step.assign("CUKCPLIWGJJIAHXDEMOZSHEGFPLFKMDLGMWTEBBSC");
    msg.flags = 209U;

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
    msg.setTimeStamp(0.538269298073);
    msg.setSource(24473U);
    msg.setSourceEntity(64U);
    msg.setDestination(8662U);
    msg.setDestinationEntity(141U);
    msg.total_steps = 164U;
    msg.step_number = 237U;
    msg.step.assign("YGPSAYRCCQICCQXOQWZUESVXBGWGOOHNLUDATJUMEPBVZUDOVFSSNBPKSBLABBRSNGLTRYKCNXJSJXNYCFIJMWRA");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.957390320465);
    msg.setSource(46281U);
    msg.setSourceEntity(21U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(167U);
    msg.state = 56U;
    msg.error.assign("FCCLXWJWCDKRIZERTWIKYUNJVPOYAKLCKRNHCAMXZXYQIWGOWGHOPPOOINSOLZSPFIGLSAQHKIREZBAMKHUFZSVDSEXCRVBJZTUZVDINEJGXETOHO");

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
    msg.setTimeStamp(0.250206192124);
    msg.setSource(15904U);
    msg.setSourceEntity(157U);
    msg.setDestination(32903U);
    msg.setDestinationEntity(229U);
    msg.state = 198U;
    msg.error.assign("MERCISAUYYSZFIOBCPJRQGNZKVUTOTOFQGFOBGMFXPQFZDJWHXDEBAATZKKEYKCFAPSKIMQYVLBPGTJHHLHSAIOALYBQUJBLVQJCWGUGONESUJZVRUPET");

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
    msg.setTimeStamp(0.465362376233);
    msg.setSource(55533U);
    msg.setSourceEntity(59U);
    msg.setDestination(54740U);
    msg.setDestinationEntity(109U);
    msg.state = 135U;
    msg.error.assign("BNMTPNDVNVZGMQHXEJEUKEKIMNJMDHONGRCVZSQFEMBRKPVYOPOHCOQRYBXUZATGQCOLAAZJIEFGFBRGRWHTIJWKSLALRUSWXCYYNUBLTZAGMITPYFMSHZBEKBXALVNOLGXZIZRAKCFNILYUSSEKYAJYOMPXWCPPVAQXGMWNPOJWWDVUH");

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
    msg.setTimeStamp(0.633043294876);
    msg.setSource(20216U);
    msg.setSourceEntity(0U);
    msg.setDestination(61365U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.0184299721351);
    msg.setSource(28639U);
    msg.setSourceEntity(5U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.585277888779);
    msg.setSource(32144U);
    msg.setSourceEntity(51U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.974269223548);
    msg.setSource(61120U);
    msg.setSourceEntity(155U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(194U);
    msg.op = 139U;
    msg.speed_min = 0.253928888725;
    msg.speed_max = 0.39867236594;
    msg.long_accel = 0.471574655339;
    msg.alt_max_msl = 0.352673297191;
    msg.dive_fraction_max = 0.2732389293;
    msg.climb_fraction_max = 0.201391318301;
    msg.bank_max = 0.22584584987;
    msg.p_max = 0.642235261419;
    msg.pitch_min = 0.156048130139;
    msg.pitch_max = 0.893890070449;
    msg.q_max = 0.102218927176;
    msg.g_min = 0.89800746541;
    msg.g_max = 0.263455329732;
    msg.g_lat_max = 0.144056907646;
    msg.rpm_min = 0.174312084599;
    msg.rpm_max = 0.048234561105;
    msg.rpm_rate_max = 0.937649189945;

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
    msg.setTimeStamp(0.0545251275693);
    msg.setSource(9090U);
    msg.setSourceEntity(170U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(144U);
    msg.op = 10U;
    msg.speed_min = 0.587775093325;
    msg.speed_max = 0.477031019846;
    msg.long_accel = 0.351033693166;
    msg.alt_max_msl = 0.342234549392;
    msg.dive_fraction_max = 0.792922213812;
    msg.climb_fraction_max = 0.920599805289;
    msg.bank_max = 0.87786187877;
    msg.p_max = 0.653315425199;
    msg.pitch_min = 0.453245953267;
    msg.pitch_max = 0.0692028375293;
    msg.q_max = 0.200732327602;
    msg.g_min = 0.232021694501;
    msg.g_max = 0.0750943095121;
    msg.g_lat_max = 0.808386164713;
    msg.rpm_min = 0.11385651584;
    msg.rpm_max = 0.109536871664;
    msg.rpm_rate_max = 0.620316140307;

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
    msg.setTimeStamp(0.958489725165);
    msg.setSource(58145U);
    msg.setSourceEntity(83U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(100U);
    msg.op = 179U;
    msg.speed_min = 0.23698893519;
    msg.speed_max = 0.343843977654;
    msg.long_accel = 0.976325755047;
    msg.alt_max_msl = 0.870739586356;
    msg.dive_fraction_max = 0.0481700248152;
    msg.climb_fraction_max = 0.242317141499;
    msg.bank_max = 0.259770497754;
    msg.p_max = 0.266655632797;
    msg.pitch_min = 0.831316785021;
    msg.pitch_max = 0.408285810599;
    msg.q_max = 0.559778875691;
    msg.g_min = 0.346533532831;
    msg.g_max = 0.653275544107;
    msg.g_lat_max = 0.825651684597;
    msg.rpm_min = 0.611365888468;
    msg.rpm_max = 0.947246429396;
    msg.rpm_rate_max = 0.289854628734;

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
    msg.setTimeStamp(0.648017756011);
    msg.setSource(1520U);
    msg.setSourceEntity(99U);
    msg.setDestination(11468U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.470383030309);
    msg.setSource(18947U);
    msg.setSourceEntity(212U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.283447161819);
    msg.setSource(48081U);
    msg.setSourceEntity(176U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.685500012112);
    msg.setSource(57634U);
    msg.setSourceEntity(113U);
    msg.setDestination(64163U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.453850373582;
    msg.lon = 0.56258203214;
    msg.height = 0.149506406041;
    msg.x = 0.300505301995;
    msg.y = 0.0521567118074;
    msg.z = 0.403815563758;
    msg.phi = 0.416168302176;
    msg.theta = 0.291639606973;
    msg.psi = 0.680938477304;
    msg.u = 0.345430170893;
    msg.v = 0.739194592544;
    msg.w = 0.518227010329;
    msg.p = 0.376017870953;
    msg.q = 0.590253037404;
    msg.r = 0.943907950884;
    msg.svx = 0.180197133194;
    msg.svy = 0.615280815899;
    msg.svz = 0.625599873121;

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
    msg.setTimeStamp(0.71666880994);
    msg.setSource(32027U);
    msg.setSourceEntity(228U);
    msg.setDestination(5227U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.778477613141;
    msg.lon = 0.00305581754024;
    msg.height = 0.981248545103;
    msg.x = 0.768759112516;
    msg.y = 0.999242156633;
    msg.z = 0.172541562701;
    msg.phi = 0.82332767579;
    msg.theta = 0.549723775505;
    msg.psi = 0.0738848559297;
    msg.u = 0.597675114964;
    msg.v = 0.330951945859;
    msg.w = 0.227353025095;
    msg.p = 0.798866571971;
    msg.q = 0.511189564766;
    msg.r = 0.726913465172;
    msg.svx = 0.176029139915;
    msg.svy = 0.320967746321;
    msg.svz = 0.258834373904;

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
    msg.setTimeStamp(0.320735211453);
    msg.setSource(34528U);
    msg.setSourceEntity(119U);
    msg.setDestination(26189U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.171947285125;
    msg.lon = 0.966865840282;
    msg.height = 0.789158076694;
    msg.x = 0.188518807226;
    msg.y = 0.0474478765919;
    msg.z = 0.95324920482;
    msg.phi = 0.802388025939;
    msg.theta = 0.20697946426;
    msg.psi = 0.343034145455;
    msg.u = 0.399594981209;
    msg.v = 0.0439485907515;
    msg.w = 0.0311583952193;
    msg.p = 0.169757406398;
    msg.q = 0.940644501493;
    msg.r = 0.603647745478;
    msg.svx = 0.0510251614325;
    msg.svy = 0.246732513176;
    msg.svz = 0.527191725564;

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
    msg.setTimeStamp(0.741396043346);
    msg.setSource(8578U);
    msg.setSourceEntity(36U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(123U);
    msg.op = 71U;
    msg.entities.assign("HTTEXBQEESVBCNYENUUVMVAPKRZYMXJPQERBAFWRVHCILTMRAXGOWFYVPTYCDVRSELMOIHLSTCXWCGQANNRYOGXKCHZWUFJFUJLUAYTCHNXSLNFGLD");

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
    msg.setTimeStamp(0.461439850115);
    msg.setSource(60750U);
    msg.setSourceEntity(102U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(155U);
    msg.op = 81U;
    msg.entities.assign("XYBVDPAPKOMSQADENEINUWGZHYZUUCANHONGRYZQYPJTTSVBRGVZTHCUHQKCDWJIYJJFSROLPVXPEFKXAJRE");

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
    msg.setTimeStamp(0.139466934851);
    msg.setSource(32957U);
    msg.setSourceEntity(152U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(198U);
    msg.op = 20U;
    msg.entities.assign("DNWRCSLZSKJVGORPCBCLPRLRKJWCRBOLUUFKTSFXHDWATGMEHEJBGHQSXYEEHCXEUWFMRGYBEMPYHCQZTIKCJJRNUYTLBIRPXQPQETMQTBYP");

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
    msg.setTimeStamp(0.832966792876);
    msg.setSource(54134U);
    msg.setSourceEntity(135U);
    msg.setDestination(155U);
    msg.setDestinationEntity(160U);
    msg.type = 94U;
    msg.speed = 10136U;
    const char tmp_msg_0[] = {-104, 21, -85, 122, -48, -12, 42, 32, 4, -122, 60, 11, 54, -43, -127, -11, 23, 17, 34, -58, 50, 81, -93, -60, -21, -54, -40, 104, -128, 74, -22, -124, 116, -11, -70, -62, 7, 68, 16, 126, -59, 99, -89, 102, -97, -37, -73, 107, 23, 33, -8, 17, 63, 122, -14, -111, 56, -109, 51, 28, -33, 97, -65, -42, 61, 111, -125, 3, 113, 96, 74, 20, 34, -64, -82, 13, 21, 76, -67, 12, 109, -20, 3, 15, -98, 56, -22, 72, -44, -50, 94, 85, 113, 1, -20, 0, -74, 116, 59, -33, -17, -27, -6, 55, 106, -94, -32, 126, 56, 42, -60, 113, -111, 113, 80, 33, -36, 67, -109, 116, 87, 14, 6, 84, 48, -39, -5, 82, -19, 113, -64, 32, -85, 118, -123, -44, -15, -112, -83, 100, -3, 126, -100, 48, 59, 99, -86, 66, -123, -66, -36, 54, 94, 97, 55, -95, 92, 63, -107, -4, -21, -32, 21, -53, -45, -113, -103, 123, -40, -122, -19, 67, 112, 91, -100, 7, 56, 41, 94, -114, -114, 46, 51, -7, -67, -83, 85, -2, 92};
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
    msg.setTimeStamp(0.810350551997);
    msg.setSource(48597U);
    msg.setSourceEntity(71U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(208U);
    msg.type = 222U;
    msg.speed = 62033U;
    const char tmp_msg_0[] = {59, 125, -52, -119, -12, -97, -53, -21, -45, 55, -104, -46, -66, -85, -27, 16, -50, 97, -35, 95, -40, 114, -5, -7, 124, -35, 19, 4, -103, -23, 44, 79, 41, 107, 70, -127, -125, -125, 105, -56, 125, -53, -39, -25};
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
    msg.setTimeStamp(0.0346829990287);
    msg.setSource(54738U);
    msg.setSourceEntity(136U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(168U);
    msg.type = 111U;
    msg.speed = 23636U;
    const char tmp_msg_0[] = {-66, 29, 62, -44, -11, -75, -43, 99, -125, -62, 119, 88, -32, 118, -111, -63, -68, 46, -112, -64, 20, -32, -114, 124, -118, -5, -110, 31, 125, 87, 103, -48, -12, -79, 27, 111, -46, 12, -106, -5, 19, 77, 39, 10, -96, -102, 39, 123, 17, -99, 37, 28, -106, -81, -70, -46, 54, -113, 50, 115, -9, 120, -94, 66, -52, 41, -61, 49, 60, 23, -118, 27, 117, -123, -14, -56, 48, 30, -80, -56, 42, -100, 86, 70, 2, 106, -60, -116, -30, 77, 97, 71, -89, 34, -40, -9, 22, -66, -93, -30, 5, 46, 36, -34, 4, 78, -42, -108, 76, 64, 11, 106, 19, -51, -120, 117, 33, 23, 19, 69, 8, 70, 52, 33, -89, -100, 107, 97, -8, -21, -107, -1, 98, 73, -74, 93, -18, -68, -68, 108, 39, -38, 83, 29, 25, -73, -70, 94, 78, -26, 18, -103, 75, -114, 58, 94, -75, 14, 122, -4, -3, 0, -65, -74, 118, -31, -65, 22, -80, 10, 108, 35, -76, -123, 75, 38, 49, -116, 25, -36, 85, 104, -79, -15, 115, 124, 93, -5, -76, -74, 90, 9, 23, 55, 68, -88, 59, -116, -1, -81, -13, -27, -40, 43, -53, -119, 79, 79};
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
    msg.setTimeStamp(0.550156894601);
    msg.setSource(22305U);
    msg.setSourceEntity(129U);
    msg.setDestination(32212U);
    msg.setDestinationEntity(254U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.0992051416168;
    msg.bank2p_pgain = 0.509894363615;

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
    msg.setTimeStamp(0.538542910391);
    msg.setSource(9809U);
    msg.setSourceEntity(53U);
    msg.setDestination(40677U);
    msg.setDestinationEntity(89U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.914997369101;
    msg.bank2p_pgain = 0.203969772076;

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
    msg.setTimeStamp(0.312977057639);
    msg.setSource(20757U);
    msg.setSourceEntity(117U);
    msg.setDestination(12977U);
    msg.setDestinationEntity(193U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.0594274087007;
    msg.bank2p_pgain = 0.715190604426;

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
    msg.setTimeStamp(0.459922876135);
    msg.setSource(22867U);
    msg.setSourceEntity(121U);
    msg.setDestination(4730U);
    msg.setDestinationEntity(77U);
    msg.available = 4135211883U;
    msg.value = 29U;

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
    msg.setTimeStamp(0.820088307045);
    msg.setSource(10246U);
    msg.setSourceEntity(19U);
    msg.setDestination(28401U);
    msg.setDestinationEntity(243U);
    msg.available = 2007786288U;
    msg.value = 73U;

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
    msg.setTimeStamp(0.983386448578);
    msg.setSource(2609U);
    msg.setSourceEntity(227U);
    msg.setDestination(21984U);
    msg.setDestinationEntity(70U);
    msg.available = 365890081U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.740965127756);
    msg.setSource(10274U);
    msg.setSourceEntity(50U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(127U);
    msg.op = 191U;
    msg.snapshot.assign("KMHRAIPEWEEMTGQUPWBZGATYEMLRKEJVZYSRHJZWVWMVVXBWPEZITPONRCAHBHMQYKZEASRSSXTAQROOLAVARMVGYJXDCSYIJHXJTGYJUXFIUBBSJLMDFKHFOE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TVKTZPENGPKJJNVCCVODBRMKMWYRVZDBQPVQESCJPNLAXPYBMGSALQNTPVKRFJGRDXSLTHWARNPLGSVBJFWEWOABKKZUTVISLTPAJRMHEBMWZEAPWYDOZXYIBDSOSNYNFKBQSRYYIEKTHAHGWTTZUAHNTJCY");
    tmp_msg_0.predicate.assign("DVQTTBGASJGEWEQJSJCWEZLUZMXVCZLQDHIEMXNKGTNBPGKGJAQJOSTCWMWOTYBQJAWBVIYJYVYTSWVISZMVZUHKPUAYBMFBYPXZRQVFTDPUJQERZNMELORIXQDHRCXHLIUUFCPRMFKFXBLHISYANIEAIOQPLMYIOIOCZOGGRNQGXKLT");
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
    msg.setTimeStamp(0.453359117399);
    msg.setSource(64913U);
    msg.setSourceEntity(17U);
    msg.setDestination(40156U);
    msg.setDestinationEntity(14U);
    msg.op = 38U;
    msg.snapshot.assign("RZFTCORNZXOTJZPNSYVHWKBYGVMSINHIFBAPUBSJUXAUFXZWKHNRPHGDMIPYDXSPUTFQMGQEWZSGHZGXELUADFRXNTIBPUJEGFTJIVQOEKETCMZKHRWJDZSBLPXVENRVBYIOVCRAIKEELCJMBKAC");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 195U;
    tmp_msg_0.system.assign("EAZSKCAGBNPBYAXFETOGSJTOEELTGHKGUAJUGBEIZREXPIOHMWWDYRHBXPIKVNYSXJUIZNMXZPHTKLQGJETYUKTQCBCMDLBQOQFSDQFYJCNFKDTFNFWMTVVMNWAKXRWTZANCDKLRACWSZFQDBOSOOHOMECFVFAYKJXDBRUCSWLROLQZZDUQMJCJSRMPQWYHNYPZULWLVKSUDILTUIFSGIGMZXAPCU");
    tmp_msg_0.range = 0.113614438098;
    IMC::IndicatedSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.119977334428;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.540611982757);
    msg.setSource(34817U);
    msg.setSourceEntity(45U);
    msg.setDestination(500U);
    msg.setDestinationEntity(27U);
    msg.op = 5U;
    msg.snapshot.assign("STOUEFXQAQBIIQKBUBGBURKLKCYPBHFMDSGLFIEMWLKPROANLQONPBQRPDYEQVCTVQJUXANWFWHIGAUFXUMSGJDUNUPBVLZYKGJEAETGPCZIJBZXXNYCVYEHTRTXEXTHHDKZBOWSRGKHAHMIWAJCHETAXJJIYOKOXFZZOCCQYCIWDEYMNRGULWFZWTYQVCPMMDLNGLRYMGJITSTHKMVLZFFON");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("AGXZQJOFBZRRFNTKFVXZTSXVSLIHPNSULKQYAMPJORPOMFVUJZEKGGQRGNDBLIRTXJOWKPEAWLVBHIJNCGNYQAWQEZCWOCJAQLESOUKRQYRYJEHFZWDZFHBPHFMXUICGFDKHVCNUGBVVSHYETFIQQPLAUUSACKEFIMCEXVMYHHMYLUWVXWGOGCTHWYUCBWPSODLVIDPKMEOKAYADQIDRSWXNEABMKTDNISMDBTJMYXSZTUNJDBOZ");
    const char tmp_tmp_msg_0_0[] = {-92, 94, 72, -123, -60, -98, -58, -94, -33, -10, -51, 10, -96, -98, -88, 124, -93, -64, -39, -31, -48, -56, -75, 82, -122, -33, -76, 96, 14, -46, -13, -93, 77, -20, -43, 57, -14, 108, -43, -110, -37, 55, 97, 80, -128, 54, -74, 81, 26, -59, 73, 46, -5, 102, -40, -81, 78, -65, -30, 116, -97, -127, -14, 115, -115, 36, 123, -78, -31, 57, 40, 69, 16, -7, 33, 105, -15, 87, 101, 67, 77, 68, 19, -63, -3, -88, -111, 26, -52, -77, -102, -73, 51, -17, 2, 117, 30, -67, -17, 73, 111, 120, -61, 118, 109, -4, -96, 93, -20, 81, 32, 88, 25, 25, 113, 106, -88, -17, -15, -109, -24, 91, -14, 19, -40, -54, -100, -106, -81, 75, 53, -73, -25, -78, 90, -113, 115, -31, 86, 57, 38, 123, 61, 77, -7, -82, 54, 95, -33, -113, -117, 104, 41, -27, -122, -124, -90, -108, -34, 96, -69, -101, -5, -115, -122, -60, -43, 101, 124, 117, -72, -108, -81, 114, -86, -55, 1, 123, -57, 23, -25, -94, 27, -48, 66, 57, 110, -54, 72, -77, 47, -94, 14, 27, 56, -96, 113, -71, 108, 20, 49, 32, 103, -71, -90, -69, 120, -113, -107, 37, -93, -29, 66, 105, 72, 4, 30, -14, -111, 49, -101};
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
    msg.setTimeStamp(0.37675262958);
    msg.setSource(706U);
    msg.setSourceEntity(184U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(251U);
    msg.op = 24U;
    msg.name.assign("WAPOFBLSRJGGCRIZILFRLUYOTNWZGOCOZRZVNHPZXDPLOESTKIFUKJBLNDROYJIJYDHWATVXKVEJVLNJCOIMAWGLRNJSSITCEVUEQSUDMNNQKOBHPIKFWFCNEPUHTUOHMBYVTMXDTLCXNQJXSWQBKUHBGPMZZMTDTELBYDYXMWYMRQIAYVGWQFHPAHRCNGJFLXUACQSZEBDKPAEMPSHVFXRYCZUQXUIZWGPIAKBCFAJEG");

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
    msg.setTimeStamp(0.825374014123);
    msg.setSource(56015U);
    msg.setSourceEntity(39U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(128U);
    msg.op = 99U;
    msg.name.assign("ZKRPEGJCGAFQDPXUXNPJFQVQJMLGHASHMKGIMHGXWYULMYECIFTRYXHITMDCHUMLEXXFWOKTPTUUPGAQVMIOWWYMTJSTJDPOECQFWBSBRDIKLJEZKMACSWIWJOJLZNLHBGBVFRRGARSBODNSCSRUCTIYUYHHITBLEPVQBQWNANBPDDYQKXCCFAADEZCZL");

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
    msg.setTimeStamp(0.179836479169);
    msg.setSource(50519U);
    msg.setSourceEntity(62U);
    msg.setDestination(19507U);
    msg.setDestinationEntity(24U);
    msg.op = 206U;
    msg.name.assign("CRGDYYACZZSTAEBXFQSOBNSCCOXPMXMLGVJUYTSWARZATCAHSBBRLPQLENGPJIKZMLXBDKYNFDBXITRRQEJCPTDIDIJGFJNOOYSPINHHBXUHGKQWSWTYHXDFGYMEEIOWLRDTVYBSKHGJWHLMAF");

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
    msg.setTimeStamp(0.101489409198);
    msg.setSource(22278U);
    msg.setSourceEntity(163U);
    msg.setDestination(62718U);
    msg.setDestinationEntity(21U);
    msg.type = 82U;
    msg.htime = 0.21239956234;
    msg.context.assign("XILHAYUODYAKDRPITFRJTKCOSWSZIJEQQPYQHCAQJVQAELRNJNCHCXYMKQDCPPFWZBPKUJCTNFPHGHNMDLIKIWFVLACQXYDRVMZBGUDVFBTSTXZTFBUKLGWGROSQPYDCZGYRPDKRAVJXREUTXOIMGSEYMAWSEABMWVUOTSVSOHEWQWEHAJKZVAIRBZIWIVTGDZXXGFQJNCNMHTMLHNVLFEBWMECJFNULKFBIYBDOGSGNYHUP");
    msg.text.assign("WDQKLNRXHGUIJSKUPMJMDRICSRDWZYWATRRAYKRAJFWDOVJEXVTYBHRVYWLEQMPBPZKBCMUMCLAUFEPVPWBUM");

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
    msg.setTimeStamp(0.0450447050432);
    msg.setSource(56643U);
    msg.setSourceEntity(222U);
    msg.setDestination(42805U);
    msg.setDestinationEntity(192U);
    msg.type = 217U;
    msg.htime = 0.490230086721;
    msg.context.assign("EIEFRTXCRNQLBNXUPNTIDVVOUCSJOZEKCDTWJNYILAZGVAHPDEPBMPDKURFJRB");
    msg.text.assign("XIWAESPOXGYWEJLODQTJAWJCIEXBFUEOHLRNXFNFJRX");

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
    msg.setTimeStamp(0.59449354291);
    msg.setSource(18724U);
    msg.setSourceEntity(142U);
    msg.setDestination(40508U);
    msg.setDestinationEntity(17U);
    msg.type = 123U;
    msg.htime = 0.527044715528;
    msg.context.assign("NGEDVACNCVDMNIULZNMROFQGVHEOVMNKZEGXPTNYMPUJSWPSTLRUTFQRBKSSIJHSOQDIWJCUXYJLAINQGZLHEKCTSRFWKGXMJESCIDFIZWLKMZAKBROADFYPBLUJMOAHVHEVWHRHZGIIYFWXUB");
    msg.text.assign("ALRXCEFAOVHK");

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
    msg.setTimeStamp(0.824406635735);
    msg.setSource(58899U);
    msg.setSourceEntity(99U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(135U);
    msg.command = 20U;
    msg.htime = 0.989278004342;

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
    msg.setTimeStamp(0.876961417355);
    msg.setSource(5653U);
    msg.setSourceEntity(68U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(243U);
    msg.command = 67U;
    msg.htime = 0.263125198686;

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
    msg.setTimeStamp(0.185325590467);
    msg.setSource(28049U);
    msg.setSourceEntity(142U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(217U);
    msg.command = 31U;
    msg.htime = 0.456677847237;

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
    msg.setTimeStamp(0.37058308289);
    msg.setSource(40703U);
    msg.setSourceEntity(31U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(98U);
    msg.op = 103U;
    msg.file.assign("XRRVDPVTMPOKDJAYYSHHCWNZGWORLNQQNHTUFEGSLQBSKJOJIZGQTCEB");

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
    msg.setTimeStamp(0.681655817066);
    msg.setSource(30432U);
    msg.setSourceEntity(92U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(134U);
    msg.op = 100U;
    msg.file.assign("DHZFRPQDSMKRGBULRJMGBZUFVOIRQUBRAIXFYYYHAIZPE");

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
    msg.setTimeStamp(0.649092698717);
    msg.setSource(59701U);
    msg.setSourceEntity(26U);
    msg.setDestination(32889U);
    msg.setDestinationEntity(28U);
    msg.op = 51U;
    msg.file.assign("BOOVBHOULVPWIWYUISNSHJUDETBUIELHYNFOCHJG");

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
    msg.setTimeStamp(0.741127489937);
    msg.setSource(11678U);
    msg.setSourceEntity(31U);
    msg.setDestination(1411U);
    msg.setDestinationEntity(109U);
    msg.op = 166U;
    msg.clock = 0.226753645601;
    msg.tz = -7;

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
    msg.setTimeStamp(0.756416055095);
    msg.setSource(51537U);
    msg.setSourceEntity(1U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(5U);
    msg.op = 51U;
    msg.clock = 0.450135210166;
    msg.tz = 4;

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
    msg.setTimeStamp(0.540044416175);
    msg.setSource(2536U);
    msg.setSourceEntity(156U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(8U);
    msg.op = 138U;
    msg.clock = 0.56793401034;
    msg.tz = -80;

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
    msg.setTimeStamp(0.122814703124);
    msg.setSource(23178U);
    msg.setSourceEntity(191U);
    msg.setDestination(56291U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.745163336208);
    msg.setSource(39355U);
    msg.setSourceEntity(172U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.576531772392);
    msg.setSource(9204U);
    msg.setSourceEntity(126U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.854050818487);
    msg.setSource(15968U);
    msg.setSourceEntity(220U);
    msg.setDestination(28868U);
    msg.setDestinationEntity(213U);
    msg.sys_name.assign("KWZQVRERCUHKEAPCYNZJKJKFZZPDDUICFNMPQTPGVLOGUPNJSOYHNVVVSMYMDPDJWUTGYDRWHAEELATALTJCMFNJAQWEYIOZGUYEQMKOANBGAVPBBTRQGVSINDZWIILBOCBBRGKXSLDFVERJGIA");
    msg.sys_type = 133U;
    msg.owner = 4589U;
    msg.lat = 0.671914287912;
    msg.lon = 0.614033436652;
    msg.height = 0.178575587898;
    msg.services.assign("LPIOZEVNFDNTHAFPMFSMAICQLXNQHWWAJUXFCOGVUADXEBYERDBLMOJPDNBGKGFZPCDONMYFBZTGDATHZSL");

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
    msg.setTimeStamp(0.0306135626949);
    msg.setSource(51409U);
    msg.setSourceEntity(99U);
    msg.setDestination(8382U);
    msg.setDestinationEntity(113U);
    msg.sys_name.assign("ZGYZTNHCUCFQYNLSTLYUIMXVIQBGKAQAXDJZMOVBBRTJKIKNWYZVYAXPUKVNPVHAMWRTVDGPQJGOHIOOWGKKABLTQZWHIQCAXEFXOTMKSIE");
    msg.sys_type = 0U;
    msg.owner = 16289U;
    msg.lat = 0.312946959443;
    msg.lon = 0.3692940674;
    msg.height = 0.0413500582006;
    msg.services.assign("SKFSRCHCHJJIPOEBKUEDRQYDFAAHWKFHIRPQZQWMGXAAQRFFNBNSXJSPFWPCVWEMFCEOLAUZTGZKFX");

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
    msg.setTimeStamp(0.632313037792);
    msg.setSource(42493U);
    msg.setSourceEntity(83U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(57U);
    msg.sys_name.assign("SSRSHZPEHVYCJSOWYJTNJCLUTGMDTCUZTGVUIFK");
    msg.sys_type = 106U;
    msg.owner = 29050U;
    msg.lat = 0.922930707321;
    msg.lon = 0.244960765926;
    msg.height = 0.760122822746;
    msg.services.assign("GLNBANQMCEVGTAOCQLJJSLUMTTZFHOIDQYFKPQRZQBUSWASMSXERCSKBOVPWVHQWCNYJMXTDMWEQWTYHMZGGPEUAUFQYXBDSUBIHVCMCLLIOQLRWQJAMWERTRCLTDGNVSXTEGHBBXCGJUSHXRXZLMZKPYDHGNIKSKZHLOFWKUOVUJJTZFONIZEDFJFEWZOIAYPNEXKGDNRAKRYDPCYWAIOYJGIHVYMSZP");

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
    msg.setTimeStamp(0.0181210911118);
    msg.setSource(34768U);
    msg.setSourceEntity(221U);
    msg.setDestination(32676U);
    msg.setDestinationEntity(126U);
    msg.service.assign("DUIBXYYQZVHWTKXUTHQKQABFJFPSNFLLTBISAGEIYKZPZXTDANEEDUCORBHBGELRKOTKJHTCQOMJUVHDBUHSINJFOVFEVYNMPJDVXAAAFMLWZNCRFXQREOTYMUZYXGDIIPZWCOJFYVHGAWNAHJSZKLQRHORBAIREMCOKVLMMPCYPKOPMBETALWLCSQMSGCWSCIUO");
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
    msg.setTimeStamp(0.42748271262);
    msg.setSource(14023U);
    msg.setSourceEntity(54U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(161U);
    msg.service.assign("MSFUPLIZDQBLYIEMXWHNLCNIAVHUHMHSCONEQEPGGHYMOQXVXFKMUJKCOCJKPEPJQGYTSEVBGQJEWFYPYFPRSDBZTKFAIPZALYXVPCZARXQVNCSCUGHTTWRNAOFHRZXWFQTWJGXPCILGUXOLRGBFLNVOMSKOZBNVHCUVMUSUKOYLVIBIYJINDAWEDTZYHRF");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.662443591263);
    msg.setSource(59830U);
    msg.setSourceEntity(3U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(243U);
    msg.service.assign("TDSMITCLQBCSPNHOYMQPAVLHHBVWERBFDUEIHFIZDMJVJWZZUXPXCTGEMJITURTLCTIBYDPJGMRHVKFZYMQCFENGDUHRLRDHQOOAADODJXBLNNWWZLDCPMYRGTAXYSSYOLCXNRIOUXOYSCIAUKFWMNNFBPMTSPSIIEHQ");
    msg.service_type = 133U;

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
    msg.setTimeStamp(0.825792577765);
    msg.setSource(56679U);
    msg.setSourceEntity(128U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(142U);
    msg.value = 0.999934996016;

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
    msg.setTimeStamp(0.176953320141);
    msg.setSource(59758U);
    msg.setSourceEntity(253U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(157U);
    msg.value = 0.113974640774;

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
    msg.setTimeStamp(0.872531485335);
    msg.setSource(45193U);
    msg.setSourceEntity(187U);
    msg.setDestination(40316U);
    msg.setDestinationEntity(13U);
    msg.value = 0.930918338013;

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
    msg.setTimeStamp(0.511014771503);
    msg.setSource(56759U);
    msg.setSourceEntity(208U);
    msg.setDestination(8675U);
    msg.setDestinationEntity(104U);
    msg.value = 0.955021793337;

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
    msg.setTimeStamp(0.465489545425);
    msg.setSource(11636U);
    msg.setSourceEntity(152U);
    msg.setDestination(37512U);
    msg.setDestinationEntity(45U);
    msg.value = 0.911139013188;

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
    msg.setTimeStamp(0.105363106688);
    msg.setSource(37951U);
    msg.setSourceEntity(253U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(9U);
    msg.value = 0.400846543049;

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
    msg.setTimeStamp(0.355321621381);
    msg.setSource(64298U);
    msg.setSourceEntity(210U);
    msg.setDestination(23995U);
    msg.setDestinationEntity(28U);
    msg.value = 0.107227482214;

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
    msg.setTimeStamp(0.146747977474);
    msg.setSource(21959U);
    msg.setSourceEntity(24U);
    msg.setDestination(30198U);
    msg.setDestinationEntity(70U);
    msg.value = 0.467792939722;

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
    msg.setTimeStamp(0.986053664982);
    msg.setSource(25456U);
    msg.setSourceEntity(217U);
    msg.setDestination(34767U);
    msg.setDestinationEntity(202U);
    msg.value = 0.946789008153;

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
    msg.setTimeStamp(0.106181316193);
    msg.setSource(12517U);
    msg.setSourceEntity(36U);
    msg.setDestination(35270U);
    msg.setDestinationEntity(69U);
    msg.number.assign("WISNWXKZDMYREBWICFYGTXSVCAUSRSNESPOCYHUBOEJFUJGADKQJYCKNXMMVHVIIRGTXRPVIKDJEQWHTXBMTDKJPTZUORDPNRFHHIDFJHUHGBMXILLVLCKSAYEGVWUKXEQQTFZXCUIJSBYPHEPTOPPZHJGSOGMMNKNLPTUNQBRVFDEEJLUZLVYNWFVASCOTQQBDCZZQCLIUFAODAMHRLZTRADGGBWAMLANYZIBMWNXRBWGEOFWK");
    msg.timeout = 63695U;
    msg.contents.assign("VNRPKSGQTJEPEGQOFOOZFCPHMZXZYMZMOYRKYXBVMEEOFIRUSDHIKBACFSQBUSGNGFDHTTVUOCDSETWNDWCUHPTPGBASQHKTWFIRJYEWM");

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
    msg.setTimeStamp(0.528848230515);
    msg.setSource(22731U);
    msg.setSourceEntity(236U);
    msg.setDestination(18491U);
    msg.setDestinationEntity(86U);
    msg.number.assign("IGRNGMNCABEGWADDMLLSITMCSQJKTDSGWVBOKBSXVNISPHYFCNJKWRYUREOZTAXIGQWWHUQKVZKGNRCYIHGAFRMYOVAEIYHDP");
    msg.timeout = 22894U;
    msg.contents.assign("MEEBWKTBGGRFZAMQDTQGJGOKATBBIGACMPLGOAWHJMELXFDUIIZXJWANLJSNCYUQVOXICWYVRXQTKPPFUCOFKWBXKSBEHRGDAVSBZSSFXWZMTZYPJUYETOROWJPRNLFJINDHYUTNZGCQEUKDLBTPMZOSKJYQKDMNDYLVSIYPWIRBQAWXFREANPLRIXSADHCSEHFBIFQVRZYKLNDMWPQCHCRYOHCJUTMCJDVNOLXAFGPNUMSTQVHHXU");

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
    msg.setTimeStamp(0.405264155088);
    msg.setSource(671U);
    msg.setSourceEntity(18U);
    msg.setDestination(38464U);
    msg.setDestinationEntity(190U);
    msg.number.assign("LSKQXUAUWC");
    msg.timeout = 26940U;
    msg.contents.assign("XUWJFBIEQMBVLSMZQRBHMHCETROURZYPGZXZKYAWSKXBFWBTHDZOZHWICNLPVFGDKEJXMSLZMUCSWMROSQJWYYNLGAAYDUPUJBIJGDNYDGHKRVFNIQLHTHQMVOWLDHGIXKDPIVABFNSTHYPOPXXIIJENLLVVTBXOKXACEDAVQUAEOMRKVRACPRGNNCYNDEHEQNRBJFBUURIIWGFQFLJCTSGOYKEXTWLGCJSKSZPAZOJKPASTQYFC");

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
    msg.setTimeStamp(0.15771970735);
    msg.setSource(22969U);
    msg.setSourceEntity(21U);
    msg.setDestination(30464U);
    msg.setDestinationEntity(100U);
    msg.seq = 1308616651U;
    msg.destination.assign("YEFYJWLHAUOFIZDPMXCNHMFKZJVJCHNXSRVMPCTRPRNGCSGDABIZDATIFOINKEGEHTIHMACAOUTQUZLFRQJFUWMRCLDXOZQBMSXSVXQGAQPQSEIJVFYPBMVQKIDRHT");
    msg.timeout = 55757U;
    const char tmp_msg_0[] = {78, -100, -86, 74, -74, 91, -103, -83, -59, 50, 30, 88, 16, -1, -77, -31, -3, 104, 56, -47, 43, -9, -22, -17, 124, 88, -89, -85, -120, 4, 20, 105, 96, -58, -103, 84, -125, 57, -90, 102, -79, -106, 26, 26, 52, -4, 121, -65, -29, 82, 20, 70, 4, 29, 109, -41, 39, 19, 93, 31, 26, 48, -45, -84, -128, 56, 98, -37, -99, -115, 99, 90, 46, -88, -28, 101, 118, 62, -128, -49, -84, 119, 95, -52, -105, -100, 4, 79, -110, 105, -35, 25, 20, -23, -40, -9, 44, 44, 23, 115, 51, 90, 125, -52, -44, -30, -83, 46, -124, -102, 96, 37, 34, -75, 65, 6, -116, -63, -114, -72, -81, -126, -100, 33, -48, 107, -75, 87, 100, -12, 107, 18, 71, -67, -14, 78, -101, 102, 46, 11, -65, 51, -126, -81, -102, -125, 25, 110, -70, 77, 0, 67, 118, -27, 105, -84, -100, -82, -81, -48, 25, 82, -50, 99, -104, 35, -93, 96, 32, -98, 93, -51, -111, 81, -27, -126, 107, -96, -58, -73, 1, -39, 91, 98, 13, 87, -72, -108, 25, -103, -73, -106, 126, -107, 26, -102, 104, 114, 41, -115, 98, 48, -106, 67, -64, -10, -15, 61, -62, 99, 113, -50, 81, 117, -128, -22, -29, -111, -1, -96, 115, 87, 23, 111, 1, 94, 102, 76, 80, 58, -97, 85, -99, -38, -68, -16, -26, 96};
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
    msg.setTimeStamp(0.635786095478);
    msg.setSource(33269U);
    msg.setSourceEntity(9U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(5U);
    msg.seq = 1087964577U;
    msg.destination.assign("MMIPRWAMDNVEYAHNGQTAPGGKVSYFZXSPUVRZDLFEZJPEZNNWPSBDOUXRLUFOGKFMFXEBEQRJFLCPUAISKHAWMGCYKXDIHZCUIQYZCTLMOGBPOVJXQOWOULXUCRTBOSQDYBSJKRDXXXBDYMROCSGPTRLJYAVKTTMZVQKLFILGUBVAUHRHLBHQSDHZRLKGADQEMYQTWIJIXWNHZWBZPWWSDCVFABQJKHAFJTNCEYOTVMKOFENETW");
    msg.timeout = 37860U;
    const char tmp_msg_0[] = {-120, 10, 49, -119, -65, -93, -95, 87, 35, 1, 2, 71, -98, -55, -54, 43, 77, 69, 44, 106, -16, 20, 105, 21, -128, 49, -20, 94, -97, 60, 25, -106, -128, -116, 116, 70, 42, -105, 79, -23, -97, -4, 33, -45, -24, -104, -48, -63, -15, -29, -124, 20, 68, -110, 84, -17, 58, -127, -94, 2, 94, -20, 32, 115, 30, 34, 106, -59, 25, 116, 30, -10, -67, -50, -56, -6, -5, -6, 12, -121, 44, 100, -113, 114, 69, 49, -105, -25, -87, -62, 31, -81, -52, -25, -52, 66, -106, -112, -32, 4, -113, -21, 37, 37, 18, -93, -61, 9, 57, 107, -67, 5, 89, -93, -80, 33, 15, -80, -54, 77, -122, 0, 0, 59, 19, -52, 1, -83, 93, 126, 95, -118, 28, 78, 61, -117, 53, 89, -78, 18, 1, 33, 116, 15, -34, -73, 18, -38, -101, 56, -98, -127, -77, -9, -103, -46, -125, 49, 92, -45, 66, -83, -75, 35, 82, -120, -69, -120, -2, 49, -124, 79, -108, -17, 41, 79, -96, -42, -71, -16, 76, -116, 110, 11, -29, -88, -53, 60, 13, 48, 117, 125, 123, 80, 113, -46, 28, 45, -49, 83, 124, -12, 99, 30, 44, 79, 30, 89};
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
    msg.setTimeStamp(0.750520106274);
    msg.setSource(53663U);
    msg.setSourceEntity(112U);
    msg.setDestination(47171U);
    msg.setDestinationEntity(27U);
    msg.seq = 3805603534U;
    msg.destination.assign("GOCEXWUVBNKHTSNNILXIJLUXQAKHLYWQFDZYFLEMNBCMHPVVBZIDYLUQFZRYMZTIRINHCHYHIKSGXBZWPTRZEBOBQKWCOYAJAGJBWWTFALDPPZVPMNFYDZRNHVPK");
    msg.timeout = 47617U;
    const char tmp_msg_0[] = {-123, -104, -37, 98, -24, 50, -27, 63, -36, 73, 119, -23, -82, 21, 92, -44, -24, -7, -78, 85, -113, 24, -23, -59, -101, -96, -90, 46, -124, 97, -20, 76, -36, -84, 107, -111, 82, -64, 96, -94, -12, 28, -48, 98, -38, 72, 63, 67, -80, 19, 58, 32, 7, -57, 97, 82, 13, 106, 35, 76, -75, 91, 55, -68, -56, 27, 60, -22, 62, 26, -75, 115, 48, -9, -5, -31, -38, -36, -80, -70, -123, 80, -83, -21, 35, 103, -28, -108, 17, 35, -10, 86, 8, 92, 23, -71, 92, 66, -12, -124, -24, 48, 2, 58, -58, 113, 19, -48, -2, -59, -31, 65, -80, -70, 118, 66, -37, -114, 122, -122, 114, -66, -50, -101, -83, 16, -117, 60, 14, -103, 54, -57, 81, -91, -95, 3, -38, -83, 25, 0, -78, 26, 95, 57, 55, 95, -33, 27, 104, -102, -21, 96, 109, 101, 56, -40, 78, 17, 120, -40, 57, 53, 51, -51, -64, 75, 62, 4, 111, -41, 6, -22, 125, 36, 15, -82, 118, 19, 110, 78, 5, -25, -18, 116, -104, 51, 123, 24, -93, 105, 124, -52, 100, 23, -82, -106, -82};
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
    msg.setTimeStamp(0.027808844817);
    msg.setSource(56898U);
    msg.setSourceEntity(178U);
    msg.setDestination(53640U);
    msg.setDestinationEntity(12U);
    msg.source.assign("JSWCMQMLATATIHXDCGVHJNEFKFLYXQWJYXRZXBRNUMZWSINFXOSZCHRNZFTUIIEYQVBSFPQZCTAOGIODFXTBEQECBRHEOCWGJNIZLJDXYLNMRKLYXKYDYDLKMFPNWAPWHBTRPKCGMVOJLPJVSUIKMSHDUOKE");
    const char tmp_msg_0[] = {-115, 57, -114, 71, -112, 46, -115, -85, -15, 36, -31, -45, -84, -17, -98, 13, 56, 37, -108, -42, -65, 61, -64, 46, -97, -104, -108, 76, -90, -76, -121, -18, 17, -92, -25, -23, 126, 111, -65, 89, 105, 6, 115, 49, 33, -40, -16, -33, 69, 115, 97, -107, -6, -23, 23, 5, -14, -56, 96, -46, 21, 68, 54, 75, 85, 124, 37, -51, -7, 20, 71, -76, 120, -36, 73, -107, -23, 64, 83, 36, -7, -58, 56, -34, 72, 83, 12, -7, -14, -122, -33, 122, -84, -107, -64, 109, 22, -70, 13, -3, 23, -12, 25, -53, 62, 66, 77, -44, 45, -61, -46, 66, -25, -37, -57, -19, -6, 23, 74, -94, 78, -76, 19, -86, -28, 80, 29, -66, 26, -81, 31, 21, 94, -46, -40, 39, -106, -35, 28, 35, -48, 95, -113, 107, 58, -109, -80, 16, 19, 117, -86, -94, -125, 10, 73, 101, -86, -28, 55, 111, 17, -96, 112, 62, 119, -42, 83, -37, -22, 62, 119, 43, 24, 5, -31, 125, -12, 99, 20, 60, 2, -115, -65, -107, -75, 26, 124, 85, -72, 125, -84, 57, -126, 121, -14, -108, -27, -61, -97, 92, 32, -49, 57, 52, 113, 2, -71, -21, -89, 85, 42, 27, 3, -25, 45, -45, -54, -2, 6, -66, 28, 0, -70, 19, -51, -98, 77, 40, -102, -31, -44, 1, 23};
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
    msg.setTimeStamp(0.975486984031);
    msg.setSource(30660U);
    msg.setSourceEntity(138U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(56U);
    msg.source.assign("AASGIXMSWVMBLCFOBIQLDPIPXKCJCMJYINJYCUXEOBGYMLHJUPDSYBAI");
    const char tmp_msg_0[] = {-75, -128, -25, -99, -72, 69, -53, -58, -98, 14, 52, -116, 16, 91, 66, 123, -124, 8, 110, -100, 49, -99, -91, 45, 45, 4, -110, 44, 105, 32, 124, 9, -105, -91, 123, 68, -104, -64, -121, -117, -96, 34, 95, -54, 52, -60, 29, -61, 2, 68, -83, 80, -41, 48, 124, 61, -39, -12, -46, 45, -8, 86, 6, -125, 60, 89, -5, 52, -109, -102, -65, -82, 113, 101, -101, 1, -65, -110, -93, -104, -91, 108, -128, -21, 121, 74, 71, 98, -13, 79, 124, 73, 15, -69, 8, -27, 104, 81, 108, -49, -5, 34};
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
    msg.setTimeStamp(0.340908992034);
    msg.setSource(65340U);
    msg.setSourceEntity(128U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(246U);
    msg.source.assign("DRXILNZCJQTKBEUFDMZXVEOVMCQQYJIKGUJPQZYIUVJDPJXVFCVSYHOIFBFWCVYOUKABXXMGPUDCYTWKMGZPJJRKDOVGILXDLJVOSTWYNMDFKHTURHZIDHWFEINETGDZNCGWLQUEKGSUEHSMWWMAEXOBPLIMGLWQBYTNUSPEKHBSRQHAQZOLIB");
    const char tmp_msg_0[] = {-23, 17, 118, 110, 119, -121, 66, 126, -68, -4, 97, 52, -55, -6, -111, 100, 126, -74, -126, 108, 81, 14, -56, 95, 89, 30, -12, 81, 45, -39, -90, -17, -27, 71, 79, -12, -80, 122, -124, -108, -106, -106, 112, 110, 40, -98, 28, -19, -62, 14, 74, 2, -78, 4, 69, -2, 78, 84, 103, 112, -103, -71, -125, -27, -80, 25, -17, 26, -12, -48, -124, 71, -76, -87, -43, 90, 42, -115, -64, -35};
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
    msg.setTimeStamp(0.407698276567);
    msg.setSource(60966U);
    msg.setSourceEntity(243U);
    msg.setDestination(8132U);
    msg.setDestinationEntity(248U);
    msg.seq = 1553540355U;
    msg.state = 117U;
    msg.error.assign("JZYFHVDQCGUIEVPIAIADGHETGSJQRJWWMSOKWXAANROMIFIRTFCNNMLKHNOKNWSPLLIQMZIZUDIFJBCMFXCZEFSXAQSYWBVXMRZXSGNXVPJNWNUTHKATBGYDLDLWRMUAVBAEXTTDEYVWFKGBIRLZUVXZWQEYTOVUGPRYKTJVYQSSHMDPKBCCPQYDCROBHOEM");

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
    msg.setTimeStamp(0.428880605852);
    msg.setSource(53786U);
    msg.setSourceEntity(77U);
    msg.setDestination(28650U);
    msg.setDestinationEntity(229U);
    msg.seq = 2964042808U;
    msg.state = 219U;
    msg.error.assign("XCPBOATMIBMELBNOOXSSJFGTWUMIKEOQNRJZIMETNHWUADGXRVNUZSCTELXHAIHKAVBDKVDIPQNGRZGJIQDIMFOUFHPDSYIPQPKVYDBWVSBBYUBGYFKWRPSZZMLCLERRLKFETGTCZFFQRAJWKUNFCRYFTDQGMOZMUWEXAJPKCXPFLCVLHVDEYWUGAJNVXCPESJYGTBUSAWYASYHLBCOTJQPXHOAQHLZOXOKXUVNQMVJWHQCRZ");

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
    msg.setTimeStamp(0.0762126638113);
    msg.setSource(16706U);
    msg.setSourceEntity(217U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(14U);
    msg.seq = 3449016901U;
    msg.state = 157U;
    msg.error.assign("HCIPXOKMKSGOVCJQVGZCEZRFAGKUHHAZDRJGBNRBBUNIVNUIQAOQZYVMPASDSVLGTXNMYBRXGVLZBXXSIZYMZYWGVDQPMKISEVAYKAIHLMXAUCJYRONLJZETYSBIPXFBEZSDQOYLGQWVJCLTRDUTIYUOXFDRXBTRFJUTEEDPXLHPJPQOFFCPSMHWUCBJHMCLKWPFUJIQD");

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
    msg.setTimeStamp(0.127169284518);
    msg.setSource(3913U);
    msg.setSourceEntity(85U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("GDNCKRFMILOAOKEJHVSZTFYFMGNUJWMMSRBUBBMSVZMBQXCFXNAQOKYTCRVQLEGCBKHNQJCTKGGIBASVDURKWGAZAQMRKLQNDOXRRVDPXSLLHPTEHPOHDWCUJSEQZHMUDUWXIAVYBDJHXKAOPDBFYVVJHSAQPOMJBPNZVZITIGTIZRAZNUNSQWCZYEI");
    msg.text.assign("ROMVAAOKCWGMFHRYKQHCBSOTIGQJNETIREWNCVXZEIBBHGTKYVNKRJHIIPKMOUVTRDJFUXOURSPVHQCYHUNZUMBDJSDDZELWBVKGWZWYQXEAODXDHCZXDAJLPJEPXOBKPIQAX");

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
    msg.setTimeStamp(0.262933794393);
    msg.setSource(49649U);
    msg.setSourceEntity(132U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("BODJADVHMJVATGMZEYCMJOXXUVUBPEUYBEALPDULTGNJVJWROYWXNSLWCMVRVBMRVNYLSIJKNZNCSZOEPBJTTGKNXKAIWQRRHSLSZOLLAQPSKXAVHYGFWRBRAISGXBM");
    msg.text.assign("TUOWJERPNTXKELXSQMZHVNLWZEWWXZICLRHFOKBGBMVNUASCHJPNBTFODZRMDFAOADPAEXIAZIBVOMKGCJVJREHWFYQYJPKX");

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
    msg.setTimeStamp(0.209632565892);
    msg.setSource(10325U);
    msg.setSourceEntity(92U);
    msg.setDestination(23914U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("BHTLVRRUPXFJGYDTSCUKWDCJWUDAJOMCFXKDVYZPDOIUAEWFTIJSZJNEPZTGHGENQCMBERJSMXLQIWKPZDSGLDBEMNVQRDOQIVYBZODKAAKARYPSIMXJHFPEGC");
    msg.text.assign("MDMULEHJXULFSEYRINQDXSKGHMAPKKJAOTJXTMVINFMUDAQIRHPXRRNZCOSEFTINHRUQOARSDPWFZTLJNTIPBRJQCMZEBJVVALCWWCZJOUTXWLOBQPUHYGPYDSNXGQKBYUJXQYLZRUVEBSLYGZNIFDCQEGMNVSVBADMMAXKBDTVNNFWGLYQOKCPFECZIXGSKATWWGZLBRVJTPASSEGGYWKDFH");

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
    msg.setTimeStamp(0.99184833438);
    msg.setSource(45239U);
    msg.setSourceEntity(154U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("SDBIRYRUYHTYGXVRYSBBXUKEAGVWSSQZPQXNYCVQHOBKGOQBGRMDLUSFPAFTTINLOUMEJNSZANCBXDUUNKCVTUYCEWPOGERWFLPZNYIDETDRJIMVLQOOGMGMRHXMSTIOPWEESZMIIJERTUZCCVYJDAEJBQHHBHPALIWKFZWFQVAHBDVKNULXEZQLIWJQGWJCNNXADIAPAYLJJWOLNSX");
    msg.htime = 0.210697771927;
    msg.lat = 0.372862818407;
    msg.lon = 0.50053715177;
    const char tmp_msg_0[] = {-29, 80, -125, -124, -63, -72, 104, 74, -86, -14, -20, -81, 117, 101, 90, 92, -108, -26, -87, 66, -119, 63, 88, 10, -32, 95, -32, 125, 60, 54, -89, 33, -21, -106, 83, -5, -92, 21, 7, -86, 34, 91, 13, 91, 34, 50, 36, -24, -9, -73, -47, -23, 34, -97, 32, 102, 56, 61, 71, -30, 1, 73, 28, 76, -89, -31, -60, 6, -100, -109, -46, -54, -128, 112, 15, -81, -127, 75, 23, 64, -39, -50, 41, 92, -57, -12, -46, 71, -64, -104, 107, -74, 24, -63, 5};
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
    msg.setTimeStamp(0.208865660489);
    msg.setSource(63349U);
    msg.setSourceEntity(48U);
    msg.setDestination(27909U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("ZQIGAFTXNMVHZYGLJIIQULVTQKMWIRWRKNCWJEPAADYJADHXFKSQ");
    msg.htime = 0.867348712743;
    msg.lat = 0.891965655937;
    msg.lon = 0.517178324097;
    const char tmp_msg_0[] = {-109, -94, -28, 3, 7, 109, -23, -121, -108, 125, -98, -53, 85, 113, 21, 124, -21, -103, 15, -46, 121, 111, -69, 3, 89, -121, 71, 76, -60, 104, 34, -70, -127, -58, -72, 22, 11, 122, -111, -82, 28, 106, 107, 48, -73, 107, -59, -90, -112, -81, 59, 30, -21, -3, -104, -88, 80, 18, 22, -79, -73, -43, -13, -123, -105, -65, 36, 7, 19, -78, 35, -88, -15, -83, 39, -6, 73, -103, -125, -110, -9, 51, 28, -39, -128, -43, -34, 63, 112, 106, -112, 109, 63, -41, -107, 19, 103, -53, 102, -101, -20, 0, -22, 19, 68, 79, 29, 15, -47, 17, 114, 101, 62, -14, -70, -91, 58, -82, 116, -87, -92, -67, 9, -103, 58, 67, -36, 78, -4, -77, -43, 27, -120, 94, -30, 10, -15, 8, -5, -65, 1, 0, 6, -100, 122, -78, -52, 78, -24, 44, -79, 21, -80, 69, -61, 84, -117, 18, 91, -103, 83};
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
    msg.setTimeStamp(0.586780831561);
    msg.setSource(21432U);
    msg.setSourceEntity(33U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("JGZEVMSDBZETDNVDJKRKYRPHEFTTCMKKDMTATMCGKMSJEYODPPRTBBBBZDNXXCNBVIWKXHJOOSROGTBLRFPKOUMNXODZVSIWPIWUQIUQEPBEMUKXFVURVZSXHYNYANIZNHGFBVETZHLWLFYPGFYROMAEQEXOMLQAKS");
    msg.htime = 0.729532099706;
    msg.lat = 0.972220753161;
    msg.lon = 0.913703586246;
    const char tmp_msg_0[] = {35, 74, 27, -76, -116, -112, -79, 45, -43, -99, -66, 16, -4, -70, 81, -100, 111, -69, -122, -62, -71, 7, 88, 122, 123, 16, 22, 123, 34, 67, -87, -43, -22, -94, -127, -29, 91, -36, 103, 113, -81, -50, -33, -22, 71, -73, 116, 16, 4, 111, 116, 72, 124, -69, -120, -80, 108, 91, -108, 28, 80, 16, 48, -79, -48, -17, 36, 63, -30, 47, 124, -81, -51, -19, -104, 39, -74, 16, 121, 107, -20, -77, 55, -99, 45, 51, 16, -25, -100, -109, -24, 64, -117, -54, 107, -13, -38, 64, -31, 66, 33, -51, 21, 32, -37, -55, -60, -110, -14, 21, 85, -67, 113, 28, -84, 123, 38, -79, 109, -95, -59, 93, -62, -122, -26, 123, -99, 20, 102, 74, -46, -41, 12, 120, 24, -35, 94, 34, 86, -120, -38, 115, -85, -49, -47, -43, -119, -54, 28, -92, -50, 52, -54, 26, -110, 31, 91, 14, -104, -101, 35, 23, 116, 76, -33, -84, 32, -125, 23, 72, 61, 23, 28, -89, -30, 24, -77, -111, -115, 98, -10, 5, -93, 14, -94, -93, -15, 25, -69, -36, -20, -121, -6, -46, -53, -81, -55, -17, -75, -24, -102, 110, 74, -120, 114, 95, 46, -103, -125, 84, -86, 5, -89, -18, 89, 20, -42, -58, 66, 19, 27, -68, -65, 28, -81, -13};
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
    msg.setTimeStamp(0.900167774186);
    msg.setSource(2997U);
    msg.setSourceEntity(152U);
    msg.setDestination(46649U);
    msg.setDestinationEntity(163U);
    msg.req_id = 62065U;
    msg.ttl = 27937U;
    msg.destination.assign("VMZFLZHSASDNNEJRVRLIGMMQEKEQBGHKNGQCUVKTTEOWCOUCQLSAJFCSEXTVLJSKXSPDFUOWGQVBJXPRAGHJPHGRTZLWNYLPVTDPBUSTNR");
    const char tmp_msg_0[] = {-45, -98, -2, -89, 111, -88, -24, -28, 89, 36, 24, -100, -29, 57, 47, -47, 14, 50, 41, -26, -126, 111, 39, 11, -103, -87, 36, -43, 70, -97, 44, -31, 35, 33, -101, -16, -18, 70, -2, 40, 90, -115, -104, 27, 51, -24, -108, 17, -51, 73, -5, 66, 117, -33, -119, -67, -89, -98, -16, 67, -74, 44, 86, 16, -19, 122, 115, -38, 61};
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
    msg.setTimeStamp(0.295228620103);
    msg.setSource(897U);
    msg.setSourceEntity(230U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(254U);
    msg.req_id = 41517U;
    msg.ttl = 23550U;
    msg.destination.assign("EMAYMXLFLDJFISNSSDABUTZFHUWXTVTQZNSBXEGGDXVNVZSGDQEFKETMNLHYDTKWNVYEIWKLIOABXIJGQQPKPMMNWAWRDZUVOGPSOLGJLLTRKOHRJMNGORCQAWSHLCZPCAYWDECMAVBTQVZCADKAUPDZS");
    const char tmp_msg_0[] = {-125, -100, -88, 38, 99, 73, 91, -89, -116, -65, 63, 102, -16, -86, 123, -13, -18, 7, -103, -35, 35, 58, -90, 39, 42, 102, -117, 75, -26, -7, -8, 33, 54, -52, 46, 32, -98, 52, 83, -111, -58, 0, -125, -73, -64, -41, -63, 51, -75, 6, -81, 94, -69, 26, -43, -101, 52, 97, -38, -85, -125, 63, 80, 28, 100, 119, 55, 79, -12, -70, -67, 73, -102, -1, 92, -100, 108, -125, -102, 46, 81, 71, -48, -44, -111, -61, 4, 126, 79, -31, -106, 117, 5, 75, -92, 60, -78, 9};
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
    msg.setTimeStamp(0.700761883627);
    msg.setSource(50312U);
    msg.setSourceEntity(99U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(214U);
    msg.req_id = 33624U;
    msg.ttl = 6335U;
    msg.destination.assign("JYKKOSHDXFBISUSHURQZKKXKWVJSAUXCQOPVDVOGBQKJPTCGVYQBMNDJELRRCAYQEKSVEONZXIUPGJRHHKMOUSQBISMRMSEACCHXFTRFNZVLXJWLVWTYZLPLNCIFGTVWNLZPZADLKYFEZEGQIAUAIXVCWSUYPWTCFRDOYOYSDPGWETBZNBTMMHGABGRYNHRDAEBXAFFIZWOIQ");
    const char tmp_msg_0[] = {-92, -120, 10, -52, -50, -80, 30, -30, -63, 22, 94, -54, 31, 79, -66, -78, 10, -92, -25, -123, -75, 95, 7, 114, -35, -79, -23, 63, 79, -110, 89, 90, 21, -52, -38, 24, -62, -56, -66, 74, 99, -113, 88, -17, 106, -60, 1, -40, -12, 23, -73, 88, 35, -49, 97, -105, 23, 69, 105, 34, -60, -88, 16, 18, 96};
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
    msg.setTimeStamp(0.0428725917714);
    msg.setSource(44295U);
    msg.setSourceEntity(49U);
    msg.setDestination(33050U);
    msg.setDestinationEntity(231U);
    msg.req_id = 26857U;
    msg.status = 235U;
    msg.text.assign("RBIDWHSQXCHTQEKJBINKATYOZURAHXCVJZPCLAUCXVVFFNYVASWRNOWFISQBZFTYCNSZJCFFKWUUGPOMCHSEADNWMNYNBQ");

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
    msg.setTimeStamp(0.697181589464);
    msg.setSource(33119U);
    msg.setSourceEntity(133U);
    msg.setDestination(5997U);
    msg.setDestinationEntity(122U);
    msg.req_id = 15759U;
    msg.status = 94U;
    msg.text.assign("SDJTAYARYWUDNKQQXEHEOJUBGPJQIUGJIMHIWEYKXIFUVCLGRLMHSPHPNHYCDCKNQNELTKRSSVLEJQTSNMLFDDOGDBCVVTFWVRACLJGIYUXEBKILAXAFTXJYBOMTPQNHHRATBPFUCGEBVFYTSUYMGWAHMKCMPZRBIECOZFVRDVWSIDISOKNFWTSKZZSLVVDIXEANLZWPEUJZWCXLMTMGBCGJMO");

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
    msg.setTimeStamp(0.64680106279);
    msg.setSource(37112U);
    msg.setSourceEntity(184U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(184U);
    msg.req_id = 50001U;
    msg.status = 76U;
    msg.text.assign("OENIOBNMFWTVWUREFMXXERLYSEXLZLFFVGCQKKEAHBAKQNOCXUTMKRZJDNIBPPGAFNDUOVAWRZUKGAFJIYIXPOQKAYYJWRSJTYMLLFNLSDVQNTSMJDWSCZPITIQYNPDUFZHBIUQUGEOWZML");

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
    msg.setTimeStamp(0.584985815905);
    msg.setSource(24678U);
    msg.setSourceEntity(207U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("MXYQZXCFPHZXFTRTZDJQIQVCWAHDMBUFVBHEGUSQELKBMQBA");
    msg.links = 3870845379U;

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
    msg.setTimeStamp(0.498125493748);
    msg.setSource(9714U);
    msg.setSourceEntity(17U);
    msg.setDestination(39018U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("PUYVSXOFLSYUWZFEROIQYRCKNGEZWETTNMBLRJDNJUXGNWWZFCPTYAYLTTVJKHFVJAVHQRICCBCAHNJPUEFOORAXHADHVTGQAQGDURUILXYQLBFEYVNFIMCDKNMHNMAKROYBHPBOBNDPSSCKFEDQPDLQTZTLHLJ");
    msg.links = 414102041U;

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
    msg.setTimeStamp(0.434382172214);
    msg.setSource(6416U);
    msg.setSourceEntity(174U);
    msg.setDestination(33734U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("WGYIDHHVCNKUOUUNIHOXCUVDNCHSZBBVZZJSRSGRIKJERQJZACPIXHKZGOZJEDPVUZVRQYCYXQPTDYOBSGLAPUCKMDKHLJULVMWFSJ");
    msg.links = 1428958755U;

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
    msg.setTimeStamp(0.869753421287);
    msg.setSource(57795U);
    msg.setSourceEntity(132U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("PETVHZGOIKHTDPZKDPNAPYWJXHASBPXOBUUIBINWTWSXNVJOFOCPJQLGRCNEFJEDHUQNMHMAYFCZAQBTXKUITKVWPGYLCHMRCNLVVYTIDSXZUGOD");
    msg.action = 148U;
    msg.grouplist.assign("SCGSPTPLDSIIZLRBVZCUALADIJWENZHYQNBWWCBQKOFBATOQCAMXVWSJIZSBIKBKGHNCFCWUHOGYFXTRQPAZYGLVUCUUOKVDBFHMJOLJZEIMTQPNBGMMPHVLVNMRSNNODPAOVHVXKQXZDGRYWQFSBRXLNOWEPIFXIUTUEJJXXEVPBKVGHZCCAYXDGMQGETYFQAOFMYLIRDS");

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
    msg.setTimeStamp(0.995960797232);
    msg.setSource(2778U);
    msg.setSourceEntity(196U);
    msg.setDestination(39940U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("CWOOPQZALJJSDYGTNKBCIVXHDHITMXGMMTQIWVPRPKJMNHHLSXTQAUQXOGJWRZHCFLYFNQECYAZUOWBBYPNJKCREWULVAALYVFKEYZFQRRQXHZGWVREXJDYLBBNBBQKEPCDZYJAJWMFXUOKYNOFPOEIJZYILSTUMCURCXQWSAPDFXFGIXULTTKMSKVHUNWNZAZIDRN");
    msg.action = 71U;
    msg.grouplist.assign("NUSYHKVDRVYBUDZGTFGGUJLAMQTJEZSYHDNKLYMXNUQBTZBAJHHWHNNBKQWIIKIPNZWGAGLNEEOPOQHJEQKGXEWFEOYACFOBLVQJCLGEYSRCHECYJQZFCZ");

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
    msg.setTimeStamp(0.930858905774);
    msg.setSource(19442U);
    msg.setSourceEntity(21U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(234U);
    msg.groupname.assign("PTNCSDKKYZMSBLHNYDEWYXRMUKOOAOYHRAQAESUBDJUCHSLGIIYADOZREJZQVXUBOULQCRKJGYREPHTZSMHXJEFFJFXVJPYVYRCXMGZDGRFKSSIQETDRLUWKTTEQVVJPXIJBNXZLROEBQXQFZWQEWACIBNASSHKOZVNHUWPPUUNIDITMVOCIMGYDBCMAVTHCKUFRMYWKNMLO");
    msg.action = 27U;
    msg.grouplist.assign("UZGGJVXQLIQFWMNLVOGPHVAUAPOGDKFHRXUASKUSWCEIRXKSDMYPZRZVTIOGBEACMSVTBJFLGQSWECBIDSTDTJQUBMNDTQMNHHKYAROMBWWIPVFAVRPXFPRJHORZDLYIIMEUEYQJOLBJKNIZKCKNVPTJSAFYUFHGOIECHTZISNALXCYDXPEWMVJSGUDNESHKMYBXPHLMGXQGKLYYOEATNNUJC");

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
    msg.setTimeStamp(0.164814203049);
    msg.setSource(14964U);
    msg.setSourceEntity(75U);
    msg.setDestination(11728U);
    msg.setDestinationEntity(35U);
    msg.id = 106U;
    msg.range = 0.206220114097;

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
    msg.setTimeStamp(0.899048720561);
    msg.setSource(20427U);
    msg.setSourceEntity(119U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(13U);
    msg.id = 248U;
    msg.range = 0.672226020609;

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
    msg.setTimeStamp(0.33252553927);
    msg.setSource(63755U);
    msg.setSourceEntity(80U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(70U);
    msg.id = 65U;
    msg.range = 0.101379363645;

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
    msg.setTimeStamp(0.218033446292);
    msg.setSource(4515U);
    msg.setSourceEntity(6U);
    msg.setDestination(8768U);
    msg.setDestinationEntity(138U);
    msg.tx = 49U;
    msg.channel = 175U;
    msg.timer = 31615U;

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
    msg.setTimeStamp(0.207937569659);
    msg.setSource(11381U);
    msg.setSourceEntity(79U);
    msg.setDestination(58962U);
    msg.setDestinationEntity(71U);
    msg.tx = 125U;
    msg.channel = 245U;
    msg.timer = 7290U;

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
    msg.setTimeStamp(0.972776210068);
    msg.setSource(13659U);
    msg.setSourceEntity(182U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(119U);
    msg.tx = 6U;
    msg.channel = 249U;
    msg.timer = 21636U;

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
    msg.setTimeStamp(0.878374608443);
    msg.setSource(58154U);
    msg.setSourceEntity(165U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(111U);
    msg.beacon.assign("RKLOCFKOHZPPXTSGQCHRADHAFZPNBBJZFOMKIGGELXPLEPIQSFLSVTFVYKWSYWLWIDGPCVVCYCMGUODQTEMSBRZKWNCJUXHWRFSBURSIBIIHONERQROIJCNERHXUVMTDUYOGHYMJRHERJUVPWFVHQDMSQLDXSMUZZGLJXPIGALB");
    msg.lat = 0.830746717808;
    msg.lon = 0.523343382174;
    msg.depth = 0.22977950163;
    msg.query_channel = 107U;
    msg.reply_channel = 47U;
    msg.transponder_delay = 62U;

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
    msg.setTimeStamp(0.242853481802);
    msg.setSource(31153U);
    msg.setSourceEntity(231U);
    msg.setDestination(25762U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("ICZFNBAABEPHVOHJEASGFQOUBDLOKPGUUQKNQZGWGZKXMKPXUQXOENRTIFOUUTSAIKWCWSCVITIIRNUFCIMOFWPRDSEJTXJKQCJGMTXDTICKNVHVLLZILXQGCAQYPMDRBG");
    msg.lat = 0.906609283762;
    msg.lon = 0.461924189108;
    msg.depth = 0.197430882955;
    msg.query_channel = 76U;
    msg.reply_channel = 211U;
    msg.transponder_delay = 210U;

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
    msg.setTimeStamp(0.35942689861);
    msg.setSource(59650U);
    msg.setSourceEntity(117U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("LFRXWDZHKXDBMWTDHTUBGOCUCTSWVAJFMHGCPRUOTIMSW");
    msg.lat = 0.188223867282;
    msg.lon = 0.831801646121;
    msg.depth = 0.918308197259;
    msg.query_channel = 225U;
    msg.reply_channel = 95U;
    msg.transponder_delay = 12U;

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
    msg.setTimeStamp(0.514950631239);
    msg.setSource(25936U);
    msg.setSourceEntity(139U);
    msg.setDestination(3525U);
    msg.setDestinationEntity(44U);
    msg.op = 150U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MNORTNGSDEQIJJBLZYWRHMUNCPSIPXKPBUZCFCDTLJFKKNXEUBOHVSWYQZUTXVHMSIZATETPXSFGILUCIQAZCCVFOOOHEHTGMPIKIDGFPVWKWXKPDYRMGBXMQRCWYUALBHCQILRBNCDWVERURORODQJSEIEYAMVTMSVJHZEPNAKBRIJSHTFBCFPLGQUFDD");
    tmp_msg_0.lat = 0.153271922646;
    tmp_msg_0.lon = 0.989528986129;
    tmp_msg_0.depth = 0.832117701515;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 37U;
    tmp_msg_0.transponder_delay = 210U;
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
    msg.setTimeStamp(0.972082314758);
    msg.setSource(14864U);
    msg.setSourceEntity(39U);
    msg.setDestination(37979U);
    msg.setDestinationEntity(138U);
    msg.op = 28U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XFYQDQPXIYIXJNEGGIBZGVHUMUWBQCANLHOHSPNTRSXSABMMCGTARME");
    tmp_msg_0.lat = 0.887788411913;
    tmp_msg_0.lon = 0.0186137897072;
    tmp_msg_0.depth = 0.897969003811;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 48U;
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
    msg.setTimeStamp(0.0547680943596);
    msg.setSource(48035U);
    msg.setSourceEntity(188U);
    msg.setDestination(7365U);
    msg.setDestinationEntity(64U);
    msg.op = 160U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DQCHSZCBYRLOBNYMXKZZSPCRSQMVQLDSTQNJURTMWLXYUGVNHMGVLVKEGHOJPDCIYFPILABAFDSCVWRRJAHAAOVJBQHZDRGEBXXNALONVIIVMLBHEGUQQCPIXWWKBKUAWTZVORKUSHWUQDMVNDLXCRPKISNFOAPPGUFZITYWCEQMYBGPFZTSNPKIZFYJKSTEKXGCMTKZHUGJ");
    tmp_msg_0.lat = 0.20806439218;
    tmp_msg_0.lon = 0.67860559741;
    tmp_msg_0.depth = 0.493622674654;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 65U;
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
    msg.setTimeStamp(0.0238430622641);
    msg.setSource(75U);
    msg.setSourceEntity(79U);
    msg.setDestination(7280U);
    msg.setDestinationEntity(37U);
    msg.address = 119U;

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
    msg.setTimeStamp(0.697176815659);
    msg.setSource(14004U);
    msg.setSourceEntity(29U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(217U);
    msg.address = 64U;

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
    msg.setTimeStamp(0.243745094577);
    msg.setSource(6871U);
    msg.setSourceEntity(169U);
    msg.setDestination(9121U);
    msg.setDestinationEntity(243U);
    msg.address = 84U;

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
    msg.setTimeStamp(0.53011813181);
    msg.setSource(33950U);
    msg.setSourceEntity(134U);
    msg.setDestination(1297U);
    msg.setDestinationEntity(234U);
    msg.address = 121U;
    msg.status = 251U;
    msg.range = 0.331140128203;

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
    msg.setTimeStamp(0.460876950041);
    msg.setSource(40935U);
    msg.setSourceEntity(240U);
    msg.setDestination(7814U);
    msg.setDestinationEntity(85U);
    msg.address = 245U;
    msg.status = 67U;
    msg.range = 0.793447932677;

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
    msg.setTimeStamp(0.415004899905);
    msg.setSource(9294U);
    msg.setSourceEntity(1U);
    msg.setDestination(19689U);
    msg.setDestinationEntity(254U);
    msg.address = 174U;
    msg.status = 134U;
    msg.range = 0.747817186548;

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
    msg.setTimeStamp(0.416151672509);
    msg.setSource(6856U);
    msg.setSourceEntity(20U);
    msg.setDestination(31479U);
    msg.setDestinationEntity(55U);
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.774456856581;
    tmp_msg_0.lon = 0.615118744423;
    tmp_msg_0.z = 0.902775869005;
    tmp_msg_0.z_units = 80U;
    tmp_msg_0.radius = 0.537890864553;
    tmp_msg_0.duration = 23066U;
    tmp_msg_0.speed = 0.0279214983261;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.custom.assign("MYSYKPXDHZUSJU");
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
    msg.setTimeStamp(0.955392616071);
    msg.setSource(20845U);
    msg.setSourceEntity(11U);
    msg.setDestination(46390U);
    msg.setDestinationEntity(239U);
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KZKFAYNQDSYO");
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
    msg.setTimeStamp(0.332237871498);
    msg.setSource(46056U);
    msg.setSourceEntity(186U);
    msg.setDestination(20522U);
    msg.setDestinationEntity(5U);
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.start_lat = 0.921006816491;
    tmp_msg_0.start_lon = 0.0224007076696;
    tmp_msg_0.start_z = 0.488063836969;
    tmp_msg_0.start_z_units = 26U;
    tmp_msg_0.end_lat = 0.454245234575;
    tmp_msg_0.end_lon = 0.725691623577;
    tmp_msg_0.end_z = 0.72935668231;
    tmp_msg_0.end_z_units = 62U;
    tmp_msg_0.lradius = 0.772793440066;
    tmp_msg_0.flags = 88U;
    tmp_msg_0.x = 0.690032490861;
    tmp_msg_0.y = 0.0290474333914;
    tmp_msg_0.z = 0.38767891045;
    tmp_msg_0.vx = 0.285353815977;
    tmp_msg_0.vy = 0.612116355192;
    tmp_msg_0.vz = 0.858300427046;
    tmp_msg_0.course_error = 0.652343299652;
    tmp_msg_0.eta = 16986U;
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
    msg.setTimeStamp(0.975449388267);
    msg.setSource(5511U);
    msg.setSourceEntity(234U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(230U);
    msg.enable = 170U;

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
    msg.setTimeStamp(0.633279644683);
    msg.setSource(36173U);
    msg.setSourceEntity(230U);
    msg.setDestination(27914U);
    msg.setDestinationEntity(231U);
    msg.enable = 248U;

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
    msg.setTimeStamp(0.870847572666);
    msg.setSource(43793U);
    msg.setSourceEntity(66U);
    msg.setDestination(14583U);
    msg.setDestinationEntity(150U);
    msg.enable = 54U;

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
    msg.setTimeStamp(0.640353608866);
    msg.setSource(30367U);
    msg.setSourceEntity(216U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(200U);
    msg.summary = 108U;
    msg.level = 134U;

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
    msg.setTimeStamp(0.892078676166);
    msg.setSource(37171U);
    msg.setSourceEntity(220U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(211U);
    msg.summary = 51U;
    msg.level = 207U;

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
    msg.setTimeStamp(0.23407540446);
    msg.setSource(51489U);
    msg.setSourceEntity(166U);
    msg.setDestination(20346U);
    msg.setDestinationEntity(113U);
    msg.summary = 60U;
    msg.level = 7U;

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
    msg.setTimeStamp(0.485316823578);
    msg.setSource(44671U);
    msg.setSourceEntity(100U);
    msg.setDestination(45795U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.664935883604);
    msg.setSource(49297U);
    msg.setSourceEntity(29U);
    msg.setDestination(20214U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.711433035093);
    msg.setSource(20141U);
    msg.setSourceEntity(64U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.684942060584);
    msg.setSource(29587U);
    msg.setSourceEntity(63U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.614577143463);
    msg.setSource(51965U);
    msg.setSourceEntity(21U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.026765366964);
    msg.setSource(4887U);
    msg.setSourceEntity(168U);
    msg.setDestination(29493U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.591215699547);
    msg.setSource(28727U);
    msg.setSourceEntity(64U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(156U);
    msg.op = 92U;
    msg.system.assign("PHXUUQNWLFJCQDNIWHKOISPBJMPLMOAIHXONFFAPZWGZWKGRYLKVBIMPHSWDVVALSEZFZRXDBOGWRCKOMIVAYDGUOZJENORFGXCWZRQLEEYVJCKYAAJKFXSTNGPCSEPUQFGVQKJ");
    msg.range = 0.929674162618;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {36, 86, 74, -18, -47, 121, -48, 102, 63, 7, -100, 104, -55, -92, 15, 101, 6, 80, 61, 77, -127, -64, 111, -61, -71, -109, 54, -46, 106, -34, -5, -66, 85, -57, -44, -29, -80, -40, 25, -69, 119, 62, 120, 28, 108, 60, 68, -94, -21, 25, -10, -23, 102, 121, -22, 122, 29, -29, 12, 42, 12, -40, -91, 47, 52, -33, -105, -65, -72, -113, 85, -13, -15, 105, 71, -9, -70, 50, 114, -54, -98, 90, 15, -43, -78, -122, 115, -69, -1, 36, 5, -118, 116, 118, -7, -75, -78, 50, -77, -96, 80, 117, -73, 64, 41, 30, -124, 5, 16, -77, -23, 56, 52, 18, 37, 112, 52, -119, 109, -71, 9, -24, 76, 29, 26, 62, 45, -22, 71, 4, -109, -102, -52, -61, -101, 35, 112, 86, 15, 96, 95, 123, -70, 74, 90, -121, 47, -38, -36, 116, 118, 73, 107, 56, 49, -71, -114, 86, 76, 105, 114, 115, 118, -93, -112};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.113235176776);
    msg.setSource(4312U);
    msg.setSourceEntity(150U);
    msg.setDestination(20108U);
    msg.setDestinationEntity(212U);
    msg.op = 40U;
    msg.system.assign("AUIMJIAZCCBYFSXOGKPOLZLEMCWHZTIOCJRKPFLJSXRAKXPIJTXVVDPTCJXNRVTRBLIYDHGXPUOZPXYJMWUQURFNOQFQK");
    msg.range = 0.337776108077;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 120U;
    tmp_msg_0.frequency = 2154612947U;
    tmp_msg_0.min_range = 9380U;
    tmp_msg_0.max_range = 35510U;
    tmp_msg_0.bits_per_point = 41U;
    tmp_msg_0.scale_factor = 0.207719568435;
    const char tmp_tmp_msg_0_0[] = {53, 63, -102, 83, 70, 64, -55, 97, -89, 53, 37, 18, -44, -67, 106, -112, 120, 19, -38, 33, -11, 8, 48, -47, -89, 78, -104, -27, -94, -104, -26, -127, -92, -57, 58, -22, 65, -19, 53, 59, 80, -32, -75, -27, -106, 111, -78, 113, -29, 54, -64, 119, -59, 26, 26, -53, -76, 66, 41, -124, 54, 0, 124, 69, -79, 113, 107, -66, 88, 79, -54, 12, 7, -41, 78, 87, -125, -25, 116, -117, 119, 30, 13, 69, 5, -23, -111, -71, 45, -118, 90, 105, -43, -103, -110, -49, -14, -20, 59, 79, 113, -70, 26, 87, -23, -7, 117, -111, 34, 83, 16, 0, -86, -22, -90, 87, -91, 120, 106, -13, -53, -61, 21, 22, 28, 37, 121, 17, -76};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.319566146291);
    msg.setSource(14338U);
    msg.setSourceEntity(178U);
    msg.setDestination(25218U);
    msg.setDestinationEntity(221U);
    msg.op = 21U;
    msg.system.assign("TCGJXNKZRCLSHZFOSHMIWZKPXYEQJLZQBPSPRNGUSPAIXAUOFULYYZKSFHVCCRXADOTUAVVOORLWNQLJYNWYGNKTATWKCDZLXBGHDPYBIDUWHIFWTLEOINAJUHXAMPDAYEBHQPWBXLZJQMQTMZEJFJBFMRLVBFEC");
    msg.range = 0.264893555971;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.846491525601;
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
    msg.setTimeStamp(0.453613373926);
    msg.setSource(19419U);
    msg.setSourceEntity(47U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.380782297473);
    msg.setSource(27178U);
    msg.setSourceEntity(139U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.994876925129);
    msg.setSource(39089U);
    msg.setSourceEntity(31U);
    msg.setDestination(2595U);
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
    msg.setTimeStamp(0.209201296763);
    msg.setSource(18179U);
    msg.setSourceEntity(7U);
    msg.setDestination(39612U);
    msg.setDestinationEntity(130U);
    msg.list.assign("YYSBTKZHFJHXESRMZHUITVQWZSWFLNIDVCXIRJQYWXOAAJGTNFTEWSWHDPHUQQHPKCWRJXLFROJYVSDGXKMMNDREBBJWOEYTTZYRYILVILANVCHKLADFMMTZOOETPITQXZBVLCILQXNCWBIMHZGNKEAYHPWPGNHUBMKPBKSAJIXEZJSPCBGENUOQKMLUAPDVQBMUEUQSRXRVFRZJSJA");

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
    msg.setTimeStamp(0.798687774714);
    msg.setSource(19716U);
    msg.setSourceEntity(127U);
    msg.setDestination(3582U);
    msg.setDestinationEntity(194U);
    msg.list.assign("WPXKKHYNWVWKSPCOIOZGBHDADQSXOQIISMMYSVIJKYDYVUV");

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
    msg.setTimeStamp(0.502664563728);
    msg.setSource(22874U);
    msg.setSourceEntity(152U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(97U);
    msg.list.assign("EZNSYOCGQGWTPIOSXMDPGRQJAKHSWLNWDJYCXZNVDUVIILTMVXFSHQEMYICAAHCNWOBQBXCEIHYXYUNOLWVITPDJUUAYLPGDVGJMRNKFBERDFEJQEUCPYIMVRGXPPLRUFKTBOIHUQWSOZAXRSQSQPPKKNGEJHOFYTPJREGCZWMOHBDCCCAKWMBNVJAHWDABFZNWHKARLMURQBXMLZUFBG");

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
    msg.setTimeStamp(0.285525036083);
    msg.setSource(52952U);
    msg.setSourceEntity(27U);
    msg.setDestination(40271U);
    msg.setDestinationEntity(48U);
    msg.value = 8277;

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
    msg.setTimeStamp(0.841607826641);
    msg.setSource(3528U);
    msg.setSourceEntity(14U);
    msg.setDestination(1612U);
    msg.setDestinationEntity(92U);
    msg.value = 5484;

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
    msg.setTimeStamp(0.0540219728133);
    msg.setSource(55705U);
    msg.setSourceEntity(241U);
    msg.setDestination(25567U);
    msg.setDestinationEntity(205U);
    msg.value = -16391;

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
    msg.setTimeStamp(0.270352981681);
    msg.setSource(58609U);
    msg.setSourceEntity(159U);
    msg.setDestination(10386U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0654536013112;

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
    msg.setTimeStamp(0.108545080152);
    msg.setSource(50879U);
    msg.setSourceEntity(47U);
    msg.setDestination(54763U);
    msg.setDestinationEntity(20U);
    msg.value = 0.427706322682;

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
    msg.setTimeStamp(0.791221995896);
    msg.setSource(54119U);
    msg.setSourceEntity(213U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(123U);
    msg.value = 0.237371196186;

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
    msg.setTimeStamp(0.226865501821);
    msg.setSource(62758U);
    msg.setSourceEntity(136U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(59U);
    msg.value = 0.179585545172;

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
    msg.setTimeStamp(0.290395332335);
    msg.setSource(55629U);
    msg.setSourceEntity(163U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(205U);
    msg.value = 0.287941966444;

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
    msg.setTimeStamp(0.0194569325382);
    msg.setSource(9904U);
    msg.setSourceEntity(95U);
    msg.setDestination(31659U);
    msg.setDestinationEntity(191U);
    msg.value = 0.301443045234;

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
    msg.setTimeStamp(0.577786754161);
    msg.setSource(9206U);
    msg.setSourceEntity(216U);
    msg.setDestination(26492U);
    msg.setDestinationEntity(42U);
    msg.validity = 11603U;
    msg.type = 167U;
    msg.utc_year = 19370U;
    msg.utc_month = 216U;
    msg.utc_day = 28U;
    msg.utc_time = 0.104554080444;
    msg.lat = 0.398537747655;
    msg.lon = 0.225444928753;
    msg.height = 0.300446248328;
    msg.satellites = 155U;
    msg.cog = 0.0204557786075;
    msg.sog = 0.254046780297;
    msg.hdop = 0.629409763116;
    msg.vdop = 0.970069894748;
    msg.hacc = 0.461206092908;
    msg.vacc = 0.714657032019;

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
    msg.setTimeStamp(0.649978859289);
    msg.setSource(7274U);
    msg.setSourceEntity(37U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(25U);
    msg.validity = 63820U;
    msg.type = 207U;
    msg.utc_year = 40340U;
    msg.utc_month = 130U;
    msg.utc_day = 104U;
    msg.utc_time = 0.17511557527;
    msg.lat = 0.419578104973;
    msg.lon = 0.77113798782;
    msg.height = 0.572233730133;
    msg.satellites = 158U;
    msg.cog = 0.478695230885;
    msg.sog = 0.0434462107301;
    msg.hdop = 0.318488433604;
    msg.vdop = 0.55060397294;
    msg.hacc = 0.681275408711;
    msg.vacc = 0.471433541763;

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
    msg.setTimeStamp(0.504213773852);
    msg.setSource(21482U);
    msg.setSourceEntity(165U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(141U);
    msg.validity = 44082U;
    msg.type = 157U;
    msg.utc_year = 53919U;
    msg.utc_month = 136U;
    msg.utc_day = 44U;
    msg.utc_time = 0.964243423729;
    msg.lat = 0.635519492449;
    msg.lon = 0.808223149249;
    msg.height = 0.588114671832;
    msg.satellites = 103U;
    msg.cog = 0.617099105703;
    msg.sog = 0.261200272712;
    msg.hdop = 0.735419791829;
    msg.vdop = 0.46402964711;
    msg.hacc = 0.274002996819;
    msg.vacc = 0.88907938241;

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
    msg.setTimeStamp(0.0751276248594);
    msg.setSource(48160U);
    msg.setSourceEntity(71U);
    msg.setDestination(13161U);
    msg.setDestinationEntity(225U);
    msg.time = 0.187711724042;
    msg.phi = 0.307106971484;
    msg.theta = 0.21211151935;
    msg.psi = 0.456827583093;
    msg.psi_magnetic = 0.101580557605;

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
    msg.setTimeStamp(0.067737133211);
    msg.setSource(28565U);
    msg.setSourceEntity(110U);
    msg.setDestination(4725U);
    msg.setDestinationEntity(116U);
    msg.time = 0.0392525542266;
    msg.phi = 0.553174668014;
    msg.theta = 0.882941851478;
    msg.psi = 0.600972180109;
    msg.psi_magnetic = 0.751359122366;

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
    msg.setTimeStamp(0.21487992748);
    msg.setSource(62835U);
    msg.setSourceEntity(246U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(202U);
    msg.time = 0.720498038983;
    msg.phi = 0.940304900876;
    msg.theta = 0.999160176096;
    msg.psi = 0.839726191135;
    msg.psi_magnetic = 0.387509279873;

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
    msg.setTimeStamp(0.447212251429);
    msg.setSource(62521U);
    msg.setSourceEntity(27U);
    msg.setDestination(17146U);
    msg.setDestinationEntity(67U);
    msg.time = 0.986281210823;
    msg.x = 0.838106484592;
    msg.y = 0.350965307128;
    msg.z = 0.512271531863;
    msg.timestep = 0.162187789299;

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
    msg.setTimeStamp(0.191377167197);
    msg.setSource(27745U);
    msg.setSourceEntity(71U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(152U);
    msg.time = 0.0684137756515;
    msg.x = 0.799652450304;
    msg.y = 0.923208521931;
    msg.z = 0.0743240667413;
    msg.timestep = 0.707242950901;

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
    msg.setTimeStamp(0.692048198601);
    msg.setSource(45425U);
    msg.setSourceEntity(184U);
    msg.setDestination(33063U);
    msg.setDestinationEntity(149U);
    msg.time = 0.0925357860052;
    msg.x = 0.811680220357;
    msg.y = 0.565048839595;
    msg.z = 0.840810263993;
    msg.timestep = 0.717604067111;

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
    msg.setTimeStamp(0.949175100237);
    msg.setSource(38236U);
    msg.setSourceEntity(114U);
    msg.setDestination(26554U);
    msg.setDestinationEntity(129U);
    msg.time = 0.0583546997905;
    msg.x = 0.754573716343;
    msg.y = 0.680482134208;
    msg.z = 0.193066979492;

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
    msg.setTimeStamp(0.168930225314);
    msg.setSource(35413U);
    msg.setSourceEntity(27U);
    msg.setDestination(30202U);
    msg.setDestinationEntity(180U);
    msg.time = 0.0868294107997;
    msg.x = 0.170019598724;
    msg.y = 0.0344379754243;
    msg.z = 0.0330373291463;

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
    msg.setTimeStamp(0.701906898752);
    msg.setSource(33156U);
    msg.setSourceEntity(184U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(39U);
    msg.time = 0.417416243609;
    msg.x = 0.281037727121;
    msg.y = 0.683493472142;
    msg.z = 0.828944663025;

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
    msg.setTimeStamp(0.294026078477);
    msg.setSource(51016U);
    msg.setSourceEntity(1U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(16U);
    msg.time = 0.39668562759;
    msg.x = 0.0346643434039;
    msg.y = 0.335488654584;
    msg.z = 0.403606257614;

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
    msg.setTimeStamp(0.730142927008);
    msg.setSource(45697U);
    msg.setSourceEntity(6U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(178U);
    msg.time = 0.239223838589;
    msg.x = 0.9171546043;
    msg.y = 0.533425843182;
    msg.z = 0.356180118543;

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
    msg.setTimeStamp(0.892218668731);
    msg.setSource(16169U);
    msg.setSourceEntity(164U);
    msg.setDestination(46900U);
    msg.setDestinationEntity(251U);
    msg.time = 0.236759751283;
    msg.x = 0.942087020129;
    msg.y = 0.0512027635811;
    msg.z = 0.0786832315678;

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
    msg.setTimeStamp(0.747875404207);
    msg.setSource(5559U);
    msg.setSourceEntity(247U);
    msg.setDestination(8738U);
    msg.setDestinationEntity(105U);
    msg.time = 0.910274269998;
    msg.x = 0.40167272015;
    msg.y = 0.755298551049;
    msg.z = 0.191674204724;

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
    msg.setTimeStamp(0.74455215612);
    msg.setSource(60525U);
    msg.setSourceEntity(186U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(109U);
    msg.time = 0.929694177615;
    msg.x = 0.967451660625;
    msg.y = 0.0988291436017;
    msg.z = 0.0604634889322;

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
    msg.setTimeStamp(0.473546980885);
    msg.setSource(40139U);
    msg.setSourceEntity(185U);
    msg.setDestination(52143U);
    msg.setDestinationEntity(188U);
    msg.time = 0.414229294845;
    msg.x = 0.294402655457;
    msg.y = 0.621650310536;
    msg.z = 0.50522576018;

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
    msg.setTimeStamp(0.737049574003);
    msg.setSource(32940U);
    msg.setSourceEntity(105U);
    msg.setDestination(64652U);
    msg.setDestinationEntity(44U);
    msg.validity = 240U;
    msg.x = 0.0487875533452;
    msg.y = 0.921799867631;
    msg.z = 0.428895795157;

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
    msg.setTimeStamp(0.766613423932);
    msg.setSource(61776U);
    msg.setSourceEntity(63U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(118U);
    msg.validity = 149U;
    msg.x = 0.587535188865;
    msg.y = 0.0267661187201;
    msg.z = 0.44209333018;

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
    msg.setTimeStamp(0.881759821328);
    msg.setSource(42884U);
    msg.setSourceEntity(143U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(138U);
    msg.validity = 196U;
    msg.x = 0.467185138319;
    msg.y = 0.0922328273689;
    msg.z = 0.082105689756;

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
    msg.setTimeStamp(0.658412684437);
    msg.setSource(62574U);
    msg.setSourceEntity(204U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(201U);
    msg.validity = 14U;
    msg.x = 0.51047026034;
    msg.y = 0.780426397896;
    msg.z = 0.619713069602;

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
    msg.setTimeStamp(0.130079938707);
    msg.setSource(12189U);
    msg.setSourceEntity(207U);
    msg.setDestination(28943U);
    msg.setDestinationEntity(161U);
    msg.validity = 94U;
    msg.x = 0.283540238965;
    msg.y = 0.506371635304;
    msg.z = 0.843094403059;

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
    msg.setTimeStamp(0.928664413181);
    msg.setSource(61498U);
    msg.setSourceEntity(227U);
    msg.setDestination(4513U);
    msg.setDestinationEntity(49U);
    msg.validity = 86U;
    msg.x = 0.169139605961;
    msg.y = 0.246794860507;
    msg.z = 0.927179842871;

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
    msg.setTimeStamp(0.934698373628);
    msg.setSource(4501U);
    msg.setSourceEntity(229U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(117U);
    msg.time = 0.732396382459;
    msg.x = 0.382337799156;
    msg.y = 0.951521625729;
    msg.z = 0.973924500063;

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
    msg.setTimeStamp(0.387413156207);
    msg.setSource(54946U);
    msg.setSourceEntity(16U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(33U);
    msg.time = 0.582752531482;
    msg.x = 0.851829305657;
    msg.y = 0.71156547986;
    msg.z = 0.578916369515;

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
    msg.setTimeStamp(0.055264961287);
    msg.setSource(33918U);
    msg.setSourceEntity(243U);
    msg.setDestination(40752U);
    msg.setDestinationEntity(6U);
    msg.time = 0.620451784351;
    msg.x = 0.488133564389;
    msg.y = 0.613145294108;
    msg.z = 0.0117583792689;

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
    msg.setTimeStamp(0.726497261762);
    msg.setSource(33975U);
    msg.setSourceEntity(226U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(201U);
    msg.validity = 171U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.858261467521;
    tmp_msg_0.y = 0.567329449268;
    tmp_msg_0.z = 0.788336718559;
    tmp_msg_0.phi = 0.634748380998;
    tmp_msg_0.theta = 0.630069665001;
    tmp_msg_0.psi = 0.777257124943;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.662443066839;
    tmp_msg_1.beam_height = 0.930335800615;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.164507842044;

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
    msg.setTimeStamp(0.360456658049);
    msg.setSource(7895U);
    msg.setSourceEntity(23U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(28U);
    msg.validity = 121U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.967620610828;
    tmp_msg_0.y = 0.995327238336;
    tmp_msg_0.z = 0.321805444816;
    tmp_msg_0.phi = 0.104583079638;
    tmp_msg_0.theta = 0.687322365918;
    tmp_msg_0.psi = 0.774730139483;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.48096841945;
    tmp_msg_1.beam_height = 0.414844812317;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.089185439345;

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
    msg.setTimeStamp(0.799491354985);
    msg.setSource(16917U);
    msg.setSourceEntity(151U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(104U);
    msg.validity = 84U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0800107615824;
    tmp_msg_0.y = 0.824920230344;
    tmp_msg_0.z = 0.574449895793;
    tmp_msg_0.phi = 0.953093047069;
    tmp_msg_0.theta = 0.845524934569;
    tmp_msg_0.psi = 0.549119267269;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0787711045713;
    tmp_msg_1.beam_height = 0.229287390218;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.852758219557;

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
    msg.setTimeStamp(0.110062132548);
    msg.setSource(7735U);
    msg.setSourceEntity(198U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(171U);
    msg.value = 0.609184372886;

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
    msg.setTimeStamp(0.612590590257);
    msg.setSource(9381U);
    msg.setSourceEntity(112U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(180U);
    msg.value = 0.745251506341;

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
    msg.setTimeStamp(0.418277683635);
    msg.setSource(23607U);
    msg.setSourceEntity(48U);
    msg.setDestination(39321U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0069842717508;

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
    msg.setTimeStamp(0.211835620837);
    msg.setSource(56837U);
    msg.setSourceEntity(39U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(105U);
    msg.value = 0.485295877874;

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
    msg.setTimeStamp(0.778649647264);
    msg.setSource(31505U);
    msg.setSourceEntity(178U);
    msg.setDestination(33883U);
    msg.setDestinationEntity(224U);
    msg.value = 0.455374551617;

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
    msg.setTimeStamp(0.621982409342);
    msg.setSource(61692U);
    msg.setSourceEntity(14U);
    msg.setDestination(11288U);
    msg.setDestinationEntity(99U);
    msg.value = 0.464608832233;

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
    msg.setTimeStamp(0.879837363188);
    msg.setSource(19711U);
    msg.setSourceEntity(0U);
    msg.setDestination(37448U);
    msg.setDestinationEntity(157U);
    msg.value = 0.672865720773;

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
    msg.setTimeStamp(0.814289475378);
    msg.setSource(39100U);
    msg.setSourceEntity(96U);
    msg.setDestination(62484U);
    msg.setDestinationEntity(36U);
    msg.value = 0.498174061445;

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
    msg.setTimeStamp(0.480658484033);
    msg.setSource(52914U);
    msg.setSourceEntity(162U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(80U);
    msg.value = 0.514914627419;

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
    msg.setTimeStamp(0.923634423493);
    msg.setSource(9634U);
    msg.setSourceEntity(120U);
    msg.setDestination(57692U);
    msg.setDestinationEntity(254U);
    msg.value = 0.851269258022;

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
    msg.setTimeStamp(0.215002437495);
    msg.setSource(18234U);
    msg.setSourceEntity(166U);
    msg.setDestination(57860U);
    msg.setDestinationEntity(88U);
    msg.value = 0.477819977206;

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
    msg.setTimeStamp(0.410540034702);
    msg.setSource(55723U);
    msg.setSourceEntity(81U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(167U);
    msg.value = 0.960629592198;

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
    msg.setTimeStamp(0.568610460621);
    msg.setSource(40797U);
    msg.setSourceEntity(169U);
    msg.setDestination(7262U);
    msg.setDestinationEntity(215U);
    msg.value = 0.659200774953;

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
    msg.setTimeStamp(0.904502195476);
    msg.setSource(38837U);
    msg.setSourceEntity(172U);
    msg.setDestination(6844U);
    msg.setDestinationEntity(144U);
    msg.value = 0.364413546588;

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
    msg.setTimeStamp(0.397164953096);
    msg.setSource(1730U);
    msg.setSourceEntity(182U);
    msg.setDestination(17365U);
    msg.setDestinationEntity(3U);
    msg.value = 0.548587900079;

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
    msg.setTimeStamp(0.215984241425);
    msg.setSource(13434U);
    msg.setSourceEntity(107U);
    msg.setDestination(46651U);
    msg.setDestinationEntity(70U);
    msg.value = 0.922727035348;

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
    msg.setTimeStamp(0.587685168656);
    msg.setSource(8181U);
    msg.setSourceEntity(226U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(80U);
    msg.value = 0.914765647071;

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
    msg.setTimeStamp(0.884991684504);
    msg.setSource(16104U);
    msg.setSourceEntity(160U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(48U);
    msg.value = 0.128243434558;

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
    msg.setTimeStamp(0.443100826277);
    msg.setSource(50303U);
    msg.setSourceEntity(75U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(178U);
    msg.value = 0.918434594987;

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
    msg.setTimeStamp(0.26898833564);
    msg.setSource(49782U);
    msg.setSourceEntity(205U);
    msg.setDestination(24026U);
    msg.setDestinationEntity(55U);
    msg.value = 0.403490837758;

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
    msg.setTimeStamp(0.044627888659);
    msg.setSource(45412U);
    msg.setSourceEntity(35U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(138U);
    msg.value = 0.998057163992;

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
    msg.setTimeStamp(0.0987451112979);
    msg.setSource(30271U);
    msg.setSourceEntity(43U);
    msg.setDestination(40080U);
    msg.setDestinationEntity(186U);
    msg.value = 0.106833166617;

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
    msg.setTimeStamp(0.381348633376);
    msg.setSource(59903U);
    msg.setSourceEntity(67U);
    msg.setDestination(32722U);
    msg.setDestinationEntity(24U);
    msg.value = 0.495088091017;

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
    msg.setTimeStamp(0.314307113468);
    msg.setSource(12612U);
    msg.setSourceEntity(207U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(77U);
    msg.value = 0.191293330465;

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
    msg.setTimeStamp(0.974049991757);
    msg.setSource(24547U);
    msg.setSourceEntity(68U);
    msg.setDestination(25440U);
    msg.setDestinationEntity(18U);
    msg.direction = 0.241615014747;
    msg.speed = 0.886745426532;
    msg.turbulence = 0.698480501781;

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
    msg.setTimeStamp(0.230425568273);
    msg.setSource(14202U);
    msg.setSourceEntity(218U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.788300079451;
    msg.speed = 0.011091210533;
    msg.turbulence = 0.298690981362;

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
    msg.setTimeStamp(0.966438722371);
    msg.setSource(8403U);
    msg.setSourceEntity(46U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(251U);
    msg.direction = 0.542196863235;
    msg.speed = 0.399885797161;
    msg.turbulence = 0.407358369738;

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
    msg.setTimeStamp(0.969324073771);
    msg.setSource(47957U);
    msg.setSourceEntity(68U);
    msg.setDestination(27037U);
    msg.setDestinationEntity(209U);
    msg.value = 0.658413593372;

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
    msg.setTimeStamp(0.237933544193);
    msg.setSource(10956U);
    msg.setSourceEntity(165U);
    msg.setDestination(65019U);
    msg.setDestinationEntity(178U);
    msg.value = 0.591618909716;

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
    msg.setTimeStamp(0.576464712735);
    msg.setSource(18312U);
    msg.setSourceEntity(182U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(246U);
    msg.value = 0.809316787633;

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
    msg.setTimeStamp(0.4338408251);
    msg.setSource(20473U);
    msg.setSourceEntity(38U);
    msg.setDestination(3903U);
    msg.setDestinationEntity(157U);
    msg.value.assign("TSJWUOUHNESRPLYYTAXRDAUEDXLONPYJZXNGXFEHAWDWVGMGMKHOMVBKHFXVXJQZWUOIAVHWPEKXVSYFOKHJORRFROGECDUNZQYPVZRUGMZXNDEPIDRMSUJLOQBNTPTCRLKWJBHISDDDCCTSJZGATACGKVYSIKIIFVC");

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
    msg.setTimeStamp(0.0795972305097);
    msg.setSource(44961U);
    msg.setSourceEntity(93U);
    msg.setDestination(22162U);
    msg.setDestinationEntity(215U);
    msg.value.assign("GVOAYHHNJAIKVTEWHOPICODRECPWGIULVSTSJKSBRWWOCWYDEOFWFMMIWAYJRYNLVCEURNMAYOHBETPEMKRRXLXZAXDTUNUMAGHQWLCFPQTTGHBJFDVEMPKAXLWEHYJZDIGDQLIDSFUILB");

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
    msg.setTimeStamp(0.437542097434);
    msg.setSource(38587U);
    msg.setSourceEntity(123U);
    msg.setDestination(36595U);
    msg.setDestinationEntity(254U);
    msg.value.assign("WTQTZZHLHKWANRZZBCDRSSFCNKTAIIMKDYTMYOVBUPBUKRVMRAMVCZCQLDWKMXSBYNWOQRRBCVYTZOICUSHVOONYESXTJEFJYTMYAHAHQVXGQBQUOMEPWXBKZNRXUOUGLJLSWFVBQZPPBYWPXDJGHAMLUCQGIGUSJAPJKQSQEGZKRKDGLDCXEKCYHOETFVDLLPDXEPIIVSJHPGIJLOEAOWFDBRJIGH");

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
    msg.setTimeStamp(0.886757988588);
    msg.setSource(53920U);
    msg.setSourceEntity(101U);
    msg.setDestination(38491U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {-89, 116, 34, 4, 108, -95, -45, -49, 108, -36, -17};
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
    msg.setTimeStamp(0.563796725464);
    msg.setSource(64659U);
    msg.setSourceEntity(17U);
    msg.setDestination(54348U);
    msg.setDestinationEntity(72U);
    const char tmp_msg_0[] = {-32, 74, 54, 29, 126, -41, 75, -7, -77, -50, 108, 47, 6, -10, 10, -23, -35, 76, -103, -10, -40, 75, -42, 17, 82, 56, -18, 12, 114, 2, -65, 83, 59, 69, -53, 126, 85, -22, 112, 59, -91, 1, -26, -2, -118, 69, 70, 4, 27, 71, -34, 39, -76, 108, 28, -74, -107, -39, -47, -127, 90, -90, -30, -25, -58, 80, -80, 65, 83, 99, -83, 118, 120, 47, 62, -46, 89, -60, -5, 59, -31, -68, -51, 109, 116, 109, 97, 19, -91, 5, -72, 112, 98, 76, -61, 96, 55, -98, -114, -33, 91, 102, -68, -112, -56, -89, 20, -104, -66, 89, -60, 5, 88, -14, 100, 100, 99, 7, 47, 8, 69, -1, 80, 60, -105, 23, -90, 37, 52, -31, 19, 90, -20, 34, 22, -44, 46, 74, -102, 71, -119, -96, 95, 63, 102, -57, 78, 43, 61, 23, 125, 121, -93, -94, -16, 38, -105, -107, -34, -62, -63, 58, 49, 46, 35, -34, -39, 31, 15, 29, 63, -78, -101, -10, 11, 19, 63, -38, -23, -47, -91, -5, -30, -83, -40, -31, -126, -92, 50, 81, 8, -1, -62, -102, -99, -111, -83, 102, -102, 94, -91, -83, 22, 116, 39, -16, -40, -38, -79, -1, 123, 66, 80, -101, 14, -89, -34, 110, 81, 60, 1, -71, 55, -4, 79, -41, -51, -28, 43, -99, -126, 41};
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
    msg.setTimeStamp(0.672821001054);
    msg.setSource(37678U);
    msg.setSourceEntity(29U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(252U);
    const char tmp_msg_0[] = {-121, 73, 27, 85, -3, 113, 27, 38, -74, 125, 39, 5, -23, -124, -65, -103, -77, 2, 53, 123, 47, 9, 83, -32, 117, 79, -25, -9, -77, -10, -72, -92, -116, -79, -78, 92, -104, -99, 70, 24, 115, 79, 125, 16, -57, 51, -47, 104, 37, 90, 32, 3, -23, 9, 114, 23, 116, 35, -69, -23, -116, -46, -96, 7, -24, 121, -83, -88, 39, 111, -28, 16, 36, 77, 97, -110, -63, -97, -13, -1, -94, -23, 63, -80, -5, -99, 7, -17, -99, 77, 22, -75, -38, 9, -94, -95, 26, -62, -112, -31, 95, -95, -50, 61, -88, -70, 31, 63, 111, 55, 62, -64, -103, 117, -95, -109, 49, -25, -60, 88, -19, 8, 112, 2, -28, 65, 59, 33, -109, 32, 18, -48, 45, -54, -54, 76, 7, -45, -28, -11, 88, -50, 20, 98, -5, -110, 15, -92, -82, 100, -94, 121, -100, -59, 96, 59, 43, -99, -41, -95, -32, -33, 84, 97, 28, 18, -108, 52, -28, -62, -13, -124, -125, 105, -68, -124, -65, -56, -38, -66, 86, 49, -52, 55, 98, -120, -74, 12, -64, -76, -15, -22, 1, -36, -110, -34, 18, -45, -79, -44, -21, -71, -35, -75, -70, 84, -120, 62, -26, -16, 15, -126, 49, 17, -24, -62, 27, 42, -46, 119, 34, -73, 12, 122, 33, 64, 23, -14, 35, 62, 61, 24, -70, 88, 114, 41, -21, -7, -75, 77, -15, -105, -20, 63, -104, -105, 52};
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
    msg.setTimeStamp(0.174077323316);
    msg.setSource(49934U);
    msg.setSourceEntity(95U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(108U);
    msg.frequency = 1068371752U;
    msg.min_range = 4817U;
    msg.max_range = 26170U;

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
    msg.setTimeStamp(0.743966308224);
    msg.setSource(37585U);
    msg.setSourceEntity(153U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(9U);
    msg.frequency = 7853060U;
    msg.min_range = 38588U;
    msg.max_range = 38445U;

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
    msg.setTimeStamp(0.152252116501);
    msg.setSource(53349U);
    msg.setSourceEntity(190U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(16U);
    msg.frequency = 2054006749U;
    msg.min_range = 9987U;
    msg.max_range = 32547U;

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
    msg.setTimeStamp(0.994467447323);
    msg.setSource(55112U);
    msg.setSourceEntity(195U);
    msg.setDestination(7427U);
    msg.setDestinationEntity(213U);
    msg.type = 69U;
    msg.frequency = 3575445105U;
    msg.min_range = 36471U;
    msg.max_range = 19894U;
    msg.bits_per_point = 50U;
    msg.scale_factor = 0.793920736522;
    const char tmp_msg_0[] = {-109, -6, 106, 67, -72, 70, -67, 122, 42, 7, -29, -106, -81, 9, 40, 107, 8, -72, -62, -6, 79, 9, -121, 38, -39, 37, -61, 46, 85, 83, -108, 49, -15, -124, 107, 10, 18, 95, 20, -3, -36, -95, -48, -78, 68, 40, 105, 72, 87, 28, -64, -35, -19, -7, -61, 82, -41, 41, -108, -75, -35, 118, 24, -127, -96, 71, -13, -72, 83, -98, -31, 57, -11, -12, 61, -38, -97, 84, 118, 104, -62, 60, -87, -80, 10, 15, 100, 22, -10, 97, 49, 55, -125, 106, 70, -15, 101, 49, -49, 41, 43, 111, -109, -103, -55, -96, -111, 120, -4, -63};
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
    msg.setTimeStamp(0.667177401607);
    msg.setSource(40439U);
    msg.setSourceEntity(156U);
    msg.setDestination(7887U);
    msg.setDestinationEntity(157U);
    msg.type = 243U;
    msg.frequency = 2206187686U;
    msg.min_range = 1460U;
    msg.max_range = 11404U;
    msg.bits_per_point = 27U;
    msg.scale_factor = 0.725476305255;
    const char tmp_msg_0[] = {-121, -50, -39, -43, -106, -36, -98, -4, 109, -56, 52, 63, 104, 126, 42, 122, 117, 99, -118, -72, -109, 61, 32, 114, -32, -19, 73, 26, 47, 82, -110, -55, -76, -73, -89, 118, -16, 121, 106, -122, -18, 48, -30, -88, -79, 37, 17, 7, 46, -67, 100, -15, -128, 5, 106, -26, -73, -127, 43, 84, 94, -78, 25, 3, 97, 114, 42, 106, -125, -50, 112, -63, -18, -6, 14, -100, 115, 50, 102, 103, -113, -80, 107, 21, 30, 78, 2, -43, 76, -111, -58, -13, -58, -56, 27, 82, 116, 49, 23, -114, -8, 47, 100, 48, 26, 83, 20, -64, -115, 23, 97, -84, 73, -45, -89, -60, 16, -101, -35, 48, 70, -22, -55, -12, -102, -76, 0, -38, 9, -7, 36, 83, 96, 80, 63, 43, 118, -72, 116, -36, 61, 123, -33, 105, -6, 59, -1, -81, -57, -93, 37, 57, 72, 39, 41, -126, 84, -32, -84, 45, 51, 43, -21, -37, 33};
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
    msg.setTimeStamp(0.861235127314);
    msg.setSource(23034U);
    msg.setSourceEntity(230U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(203U);
    msg.type = 246U;
    msg.frequency = 3595067636U;
    msg.min_range = 46621U;
    msg.max_range = 57572U;
    msg.bits_per_point = 188U;
    msg.scale_factor = 0.533283405786;
    const char tmp_msg_0[] = {3, -74, 42, 54, 27, 92, -118, 16, 92, 66, -12, -64, -106, -71, 75, 23, -63, 10, -100, -91, 111, -6, -38, -74, -13, -5, 106, -30, -37, 111, 84, -106, 85, 34, 7, -53, -85, 45, 33, 23, -55, -116, 71, -67, -41, 87, -74, 48, 11, -62, -60, -13, -80, -24, 94, -116, 26, -87, 97, -52, -46, 100, -64, -1, -114, 68, -44, -90, -88, 9, 81, -123, -14, 39, -58, -113, 67, -90, -64, -43, 12, 118, 69, 18, -68, -88, 93, -116, -128, -103, -36, -20, -31, -75, -23, -111, 112, 111, -19, -82, 55, -69, 59, 46, -81, 61, -8, 48, -105, -107, 38, 116, -14, 13, -13, 19, 116, -105, 105, 98, -67, -10, 86, 63, -116, 39, -56, 74, 96, 38, -1, -70, 52, 112, 99, 88, -116, 90, -96, 24, -19, 47, 8, -16, 72, 17, -108, -17, -19, -94, 113, -7, 125, 123, -51, 51, 112, -90, 95, -50, 47, 104, 54, 13, 106, 113, 54, 122, 26, 79, 43, -43, -92, 49, -125, -45, -79, -17, 73, 109, -74, 41, 19, -65, 44, -25, 0, 23, -87, -82, -54, 66, -50, -128, 72, 126, 3, -116, -86, 37, 35, 126, -33, -60, 57, 4, 70, 104, -19, -12, 49, -77, 46, -41, 105, 56, -94, 105, -51, -56, -62, 26, 9, -78, -91, 124, 10, 115, -126};
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
    msg.setTimeStamp(0.0720257072284);
    msg.setSource(52391U);
    msg.setSourceEntity(1U);
    msg.setDestination(60546U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.158260105508);
    msg.setSource(16231U);
    msg.setSourceEntity(82U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.349916334104);
    msg.setSource(47405U);
    msg.setSourceEntity(240U);
    msg.setDestination(60484U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.703595531065);
    msg.setSource(47526U);
    msg.setSourceEntity(39U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(153U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.504499266755);
    msg.setSource(39612U);
    msg.setSourceEntity(36U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(111U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.463011419172);
    msg.setSource(54028U);
    msg.setSourceEntity(237U);
    msg.setDestination(60897U);
    msg.setDestinationEntity(232U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.531308916279);
    msg.setSource(37929U);
    msg.setSourceEntity(52U);
    msg.setDestination(6877U);
    msg.setDestinationEntity(182U);
    msg.value = 0.143115244339;
    msg.confidence = 0.0261131451847;
    msg.opmodes.assign("GQPXACRPHDKXZFJDHRXHLBKLSCESFNOXVYADOYFIIPWQBXPGEIQTRPUCTQTKCMAOGUTZBHIJWKZMLOEVTJPPRJWQRWGMQEWZGUSWCFARTPKHIEBMYLOQFHHOCSQMNBRFVJCUMICSYFZNYZUEAAXXLMVRLUELIGVYAWSSGMTFNVVVDJNEBHQTUUBFINEVDRBSHMZFGTYOXKZ");

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
    msg.setTimeStamp(0.671936141209);
    msg.setSource(58171U);
    msg.setSourceEntity(250U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(160U);
    msg.value = 0.893950598087;
    msg.confidence = 0.858816031111;
    msg.opmodes.assign("WMTNDNBLGAMPVUSFPYKVHOHYIOFJLQWZXGQXLJFBIWJFTRVJWBROTNOYZZPESJKKOFSACPWELCKBWIWGQVEMDDZHCOFKQTWUCMNIEUNIENQGPJJLWRSALCBLXPYSQEDBJXURZYDAQKTVYIOCGMCXV");

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
    msg.setTimeStamp(0.488399002634);
    msg.setSource(64153U);
    msg.setSourceEntity(33U);
    msg.setDestination(63850U);
    msg.setDestinationEntity(99U);
    msg.value = 0.129573539718;
    msg.confidence = 0.67840224092;
    msg.opmodes.assign("EKFTVWACBREZQOKAOHJXIOEESEYTXSQHZPWHLNAMJFWSTWJPCJQWUBULZNZKIKOUTAHELXOFPGNCETRSCDXRSWXYMR");

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
    msg.setTimeStamp(0.0754829697253);
    msg.setSource(52353U);
    msg.setSourceEntity(32U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(239U);
    msg.itow = 3885880085U;
    msg.lat = 0.397064751634;
    msg.lon = 0.704596566166;
    msg.height_ell = 0.473883004875;
    msg.height_sea = 0.0960909416709;
    msg.hacc = 0.859541737461;
    msg.vacc = 0.584350373347;
    msg.vel_n = 0.404256782982;
    msg.vel_e = 0.681760518108;
    msg.vel_d = 0.294998176084;
    msg.speed = 0.256334282578;
    msg.gspeed = 0.42988482346;
    msg.heading = 0.437850162408;
    msg.sacc = 0.500361209594;
    msg.cacc = 0.774761567294;

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
    msg.setTimeStamp(0.912663595876);
    msg.setSource(10192U);
    msg.setSourceEntity(35U);
    msg.setDestination(30427U);
    msg.setDestinationEntity(171U);
    msg.itow = 1450171506U;
    msg.lat = 0.636316420163;
    msg.lon = 0.34967834845;
    msg.height_ell = 0.616488414242;
    msg.height_sea = 0.279547521333;
    msg.hacc = 0.388785102858;
    msg.vacc = 0.250393711687;
    msg.vel_n = 0.936215992435;
    msg.vel_e = 0.925794647001;
    msg.vel_d = 0.428253608615;
    msg.speed = 0.615497831217;
    msg.gspeed = 0.123713819154;
    msg.heading = 0.216962458228;
    msg.sacc = 0.772025592284;
    msg.cacc = 0.564135733835;

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
    msg.setTimeStamp(0.487425291062);
    msg.setSource(21008U);
    msg.setSourceEntity(230U);
    msg.setDestination(19184U);
    msg.setDestinationEntity(48U);
    msg.itow = 2895430358U;
    msg.lat = 0.408374206776;
    msg.lon = 0.573321678558;
    msg.height_ell = 0.76100233842;
    msg.height_sea = 0.374500436914;
    msg.hacc = 0.207907325368;
    msg.vacc = 0.295887851166;
    msg.vel_n = 0.242391728963;
    msg.vel_e = 0.868383618481;
    msg.vel_d = 0.778730897024;
    msg.speed = 0.0428140872408;
    msg.gspeed = 0.277277532467;
    msg.heading = 0.0699258448178;
    msg.sacc = 0.39153806776;
    msg.cacc = 0.580260703796;

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
    msg.setTimeStamp(0.544333381468);
    msg.setSource(40174U);
    msg.setSourceEntity(121U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(122U);
    msg.id = 51U;
    msg.value = 0.427324568837;

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
    msg.setTimeStamp(0.857309139493);
    msg.setSource(58170U);
    msg.setSourceEntity(59U);
    msg.setDestination(28725U);
    msg.setDestinationEntity(34U);
    msg.id = 96U;
    msg.value = 0.8609105979;

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
    msg.setTimeStamp(0.00561241300155);
    msg.setSource(7236U);
    msg.setSourceEntity(132U);
    msg.setDestination(24255U);
    msg.setDestinationEntity(158U);
    msg.id = 214U;
    msg.value = 0.934319413849;

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
    msg.setTimeStamp(0.193653045024);
    msg.setSource(64968U);
    msg.setSourceEntity(159U);
    msg.setDestination(59733U);
    msg.setDestinationEntity(4U);
    msg.x = 0.545884010652;
    msg.y = 0.604122202227;
    msg.z = 0.00921721949741;
    msg.phi = 0.579522062209;
    msg.theta = 0.862082079759;
    msg.psi = 0.27281465799;

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
    msg.setTimeStamp(0.619903810374);
    msg.setSource(51008U);
    msg.setSourceEntity(77U);
    msg.setDestination(29368U);
    msg.setDestinationEntity(153U);
    msg.x = 0.436462862655;
    msg.y = 0.408194307713;
    msg.z = 0.211722526749;
    msg.phi = 0.238673009178;
    msg.theta = 0.281438019582;
    msg.psi = 0.318917443476;

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
    msg.setTimeStamp(0.417645818386);
    msg.setSource(20231U);
    msg.setSourceEntity(91U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(102U);
    msg.x = 0.557351265133;
    msg.y = 0.0464371166463;
    msg.z = 0.664038822882;
    msg.phi = 0.321141807721;
    msg.theta = 0.203670711342;
    msg.psi = 0.185444510387;

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
    msg.setTimeStamp(0.744330090111);
    msg.setSource(44615U);
    msg.setSourceEntity(72U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(219U);
    msg.beam_width = 0.622919017775;
    msg.beam_height = 0.446460318912;

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
    msg.setTimeStamp(0.559899600396);
    msg.setSource(56423U);
    msg.setSourceEntity(1U);
    msg.setDestination(7976U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.112942997315;
    msg.beam_height = 0.938724226422;

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
    msg.setTimeStamp(0.911220293405);
    msg.setSource(52858U);
    msg.setSourceEntity(226U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.00452076440797;
    msg.beam_height = 0.594560024881;

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
    msg.setTimeStamp(0.75610138704);
    msg.setSource(27811U);
    msg.setSourceEntity(192U);
    msg.setDestination(37015U);
    msg.setDestinationEntity(114U);
    msg.sane = 36U;

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
    msg.setTimeStamp(0.446627976834);
    msg.setSource(6896U);
    msg.setSourceEntity(83U);
    msg.setDestination(28957U);
    msg.setDestinationEntity(193U);
    msg.sane = 185U;

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
    msg.setTimeStamp(0.301797212144);
    msg.setSource(6212U);
    msg.setSourceEntity(203U);
    msg.setDestination(26997U);
    msg.setDestinationEntity(221U);
    msg.sane = 181U;

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
    msg.setTimeStamp(0.759526751657);
    msg.setSource(59644U);
    msg.setSourceEntity(26U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(39U);
    msg.id = 229U;
    msg.zoom = 99U;
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
    msg.setTimeStamp(0.0597909881278);
    msg.setSource(15902U);
    msg.setSourceEntity(153U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(162U);
    msg.id = 193U;
    msg.zoom = 218U;
    msg.action = 7U;

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
    msg.setTimeStamp(0.912816156186);
    msg.setSource(2172U);
    msg.setSourceEntity(78U);
    msg.setDestination(615U);
    msg.setDestinationEntity(139U);
    msg.id = 24U;
    msg.zoom = 81U;
    msg.action = 231U;

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
    msg.setTimeStamp(0.0211097195189);
    msg.setSource(63604U);
    msg.setSourceEntity(214U);
    msg.setDestination(34058U);
    msg.setDestinationEntity(189U);
    msg.id = 135U;
    msg.value = 0.246916049402;

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
    msg.setTimeStamp(0.662919351044);
    msg.setSource(22121U);
    msg.setSourceEntity(121U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(250U);
    msg.id = 147U;
    msg.value = 0.918692142081;

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
    msg.setTimeStamp(0.884590707643);
    msg.setSource(23439U);
    msg.setSourceEntity(18U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(6U);
    msg.id = 239U;
    msg.value = 0.646638207851;

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
    msg.setTimeStamp(0.659013628718);
    msg.setSource(44137U);
    msg.setSourceEntity(166U);
    msg.setDestination(19169U);
    msg.setDestinationEntity(218U);
    msg.id = 116U;
    msg.value = 0.367476786517;

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
    msg.setTimeStamp(0.700324614056);
    msg.setSource(34530U);
    msg.setSourceEntity(241U);
    msg.setDestination(6779U);
    msg.setDestinationEntity(126U);
    msg.id = 125U;
    msg.value = 0.808727036237;

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
    msg.setTimeStamp(0.309143836085);
    msg.setSource(12176U);
    msg.setSourceEntity(62U);
    msg.setDestination(60190U);
    msg.setDestinationEntity(7U);
    msg.id = 24U;
    msg.value = 0.307506077934;

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
    msg.setTimeStamp(0.0207076134048);
    msg.setSource(63863U);
    msg.setSourceEntity(79U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(123U);
    msg.id = 245U;
    msg.angle = 0.194266847463;

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
    msg.setTimeStamp(0.221587488942);
    msg.setSource(37734U);
    msg.setSourceEntity(211U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(135U);
    msg.id = 146U;
    msg.angle = 0.228613263608;

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
    msg.setTimeStamp(0.551679337265);
    msg.setSource(49427U);
    msg.setSourceEntity(146U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(219U);
    msg.id = 228U;
    msg.angle = 0.217267181678;

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
    msg.setTimeStamp(0.781019472516);
    msg.setSource(52114U);
    msg.setSourceEntity(237U);
    msg.setDestination(37442U);
    msg.setDestinationEntity(169U);
    msg.op = 232U;
    msg.actions.assign("KFFPBYCQKOLZLCUSHFTRUTSSNBNDKIQAMGBYKCHMKZNLXDCN");

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
    msg.setTimeStamp(0.640740076688);
    msg.setSource(65225U);
    msg.setSourceEntity(206U);
    msg.setDestination(51563U);
    msg.setDestinationEntity(175U);
    msg.op = 209U;
    msg.actions.assign("ZAHGAXYLUUFEGOPTCSHSHZGLKBIYEWFJEMAMJHRGCWUFKDYXQBHF");

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
    msg.setTimeStamp(0.849157283456);
    msg.setSource(38875U);
    msg.setSourceEntity(126U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(1U);
    msg.op = 47U;
    msg.actions.assign("NDUMDUTVCGOCFLXDAMAVEKAJBWDFVEBHUFQONWCPXNZWFQZPLHOJVUTPAPZYNQLPKMNLXTZGFPSXDHTBGYXWOJLNRSABGNLUSBSZIJBIAWWSLRWNXZGUJEWMZAIOXEDCOMDBIRHPFVITUISCNMTWJQYIYDYEHMKHZPZVQEQCUOK");

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
    msg.setTimeStamp(0.391682414406);
    msg.setSource(55110U);
    msg.setSourceEntity(46U);
    msg.setDestination(4192U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("FBSHHQKVPKCJWSGLAQITAYVQKJYOGNBGKECONFTUAZFIVYWBVKRSTSFDXZCHJDZJPLMOSPBWMIHZCFLKJOBIBTSNNIMNONWMHOAGCIYVIVDRQ");

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
    msg.setTimeStamp(0.693837584423);
    msg.setSource(6517U);
    msg.setSourceEntity(47U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(153U);
    msg.actions.assign("BLDVQHVUJADASFJMQRMCNWBTMTWAIUQOPETPJBMLEZSRESOAUKPABVACKBPSNVEKFJGAICGGZKNVYZXLINOFCYDSPRLHXVWPNOXTQEQCBDDHLFXLRPEXLGKRQUPLCKGDKI");

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
    msg.setTimeStamp(0.343880819977);
    msg.setSource(36435U);
    msg.setSourceEntity(138U);
    msg.setDestination(1020U);
    msg.setDestinationEntity(13U);
    msg.actions.assign("REYXHAQLPPQJHCIPWHTNWZQPZWPKCMIRUSLXVFGYZXPWFUTCXGTEOMBSBRFQOYMRAZAOQZTBGQMNLSNWGQMVCYXUSDVFSYLVGWDWZDADQJIWMCAZIPRHBRBOFSXDXONGUBFLY");

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
    msg.setTimeStamp(0.411510209831);
    msg.setSource(62244U);
    msg.setSourceEntity(186U);
    msg.setDestination(50803U);
    msg.setDestinationEntity(231U);
    msg.button = 105U;
    msg.value = 88U;

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
    msg.setTimeStamp(0.89077534446);
    msg.setSource(15676U);
    msg.setSourceEntity(120U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(35U);
    msg.button = 101U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.0823918549628);
    msg.setSource(11027U);
    msg.setSourceEntity(207U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(144U);
    msg.button = 2U;
    msg.value = 110U;

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
    msg.setTimeStamp(0.967079038734);
    msg.setSource(25189U);
    msg.setSourceEntity(124U);
    msg.setDestination(35184U);
    msg.setDestinationEntity(172U);
    msg.op = 172U;
    msg.text.assign("HVMYINGLETOIFGDHPWBDQWJNKDRGENNEEXLZTCFOPRLUKTYPFNLQJEUXHHXIMBBTNUDGTJYMDMTRSUWIASJCVHHYKOMPIYEQIIQAAKWVGADIVPSBULFOKWNUQSTORVYBXZ");

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
    msg.setTimeStamp(0.661432657211);
    msg.setSource(7387U);
    msg.setSourceEntity(74U);
    msg.setDestination(46312U);
    msg.setDestinationEntity(240U);
    msg.op = 194U;
    msg.text.assign("EISCVIOHZYQRMUXLDOBANWEPCZTYIGXLCNQKXWYBFISMDBHGTBNDZABBNSZHOOJRKUCTCLESIYQXDKAXJXTBUEMXGY");

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
    msg.setTimeStamp(0.07952347566);
    msg.setSource(21083U);
    msg.setSourceEntity(79U);
    msg.setDestination(51639U);
    msg.setDestinationEntity(12U);
    msg.op = 210U;
    msg.text.assign("AKEHRGTUKKJBZHISGFIUBHWJALZUDWVBQNSRPQOKLTANVEWOXDAPFXCMVKVFDCKFSIYNRBGWHFQZIIWGUHLBSOLQFWJLKNREEPAEMZMMVEVGFDXPIDOSRKSKYMBOPTPVJXYYWHOAWURUQKFXGZDEETHIUXANHONCLZTYIYMJICYFDMTBXUBDEXVNYDYASGHYJJPEJCQUGIXMLCGXGWDLZZUSPAQTBATPTWNSCRCNFHLROZMVVCZPQRQ");

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
    msg.setTimeStamp(0.550343110072);
    msg.setSource(37356U);
    msg.setSourceEntity(181U);
    msg.setDestination(13804U);
    msg.setDestinationEntity(250U);
    msg.op = 102U;
    msg.time_remain = 0.556643983777;
    msg.sched_time = 0.528004771418;

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
    msg.setTimeStamp(0.588341444675);
    msg.setSource(41992U);
    msg.setSourceEntity(65U);
    msg.setDestination(47114U);
    msg.setDestinationEntity(254U);
    msg.op = 218U;
    msg.time_remain = 0.807795949677;
    msg.sched_time = 0.835068017311;

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
    msg.setTimeStamp(0.725481561748);
    msg.setSource(6965U);
    msg.setSourceEntity(62U);
    msg.setDestination(44485U);
    msg.setDestinationEntity(145U);
    msg.op = 123U;
    msg.time_remain = 0.487219171556;
    msg.sched_time = 0.696746631764;

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
    msg.setTimeStamp(0.0831213584628);
    msg.setSource(17112U);
    msg.setSourceEntity(174U);
    msg.setDestination(231U);
    msg.setDestinationEntity(12U);
    msg.name.assign("EPPPBSEDZVJORWDHXWYCPYOJTBSMVSAQYVHSBXRQEKWTYHMSDNGWQULSHVFVRKRLIDXUJUBAMNHSRFVOVKFOSGZXXKZCZMLACGQVJUQWQXRJBMTTXFKXUKIXNAFCBLKUGLWBPDLEAGAWCJUFSMNQQDOFPKRYJILYOZGAUSGEIGNIJTIZERBCNPPNGYBVATYOTHJWLEIWCOTPCMTUKOUJIELHMDBQHILEYRDPWZMFHEIFYGRXFMDNNZQAVNHCZ");
    msg.op = 91U;
    msg.sched_time = 0.174165666289;

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
    msg.setTimeStamp(0.734771640243);
    msg.setSource(46748U);
    msg.setSourceEntity(93U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(142U);
    msg.name.assign("XXAENRHRWRPIFSZZDGVBTPBKWCPQDCXMQNHPKBWWIBBFTVYZQDFDBVJHNNYKHSCVGWVNRIYUKTJCDQGLFOQNCOFSRJACSLUUVTZTDVRFKEUHYDLMMAETWEWHUYPOLLZJKYI");
    msg.op = 178U;
    msg.sched_time = 0.796886572585;

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
    msg.setTimeStamp(0.43750452689);
    msg.setSource(16094U);
    msg.setSourceEntity(155U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(178U);
    msg.name.assign("ZZQFDOKTUNASRZQXFHOALDNOWBBEZSPVMOJVLDFTAAPSYKCPJIOQOFIHOKNGVIDFBZSWFCEPCPUNZOAPMNBGIXYCWTLHJEVNILVKYJADARNQDXXMNKWUUJAVYMNQQMBSRHTXUDNKDQFRKXKOGRK");
    msg.op = 20U;
    msg.sched_time = 0.040883973132;

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
    msg.setTimeStamp(0.940585562862);
    msg.setSource(6761U);
    msg.setSourceEntity(0U);
    msg.setDestination(24095U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.924989982644);
    msg.setSource(10924U);
    msg.setSourceEntity(26U);
    msg.setDestination(47008U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.695550869769);
    msg.setSource(60858U);
    msg.setSourceEntity(70U);
    msg.setDestination(19853U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.332898527976);
    msg.setSource(55442U);
    msg.setSourceEntity(82U);
    msg.setDestination(4078U);
    msg.setDestinationEntity(200U);
    msg.name.assign("WIKETVOQZSBUSMIKHFPHJBINABWTQIFRGWJHVXYJMFREJANNYVSUDDZJFOYHVZLORFBTXMPGCDLVHYHCCSVRQQGSKMWIUCOXAJFQJCNZATSJGUDFLLEKPRENONOKDVIIYLGSFZPPKCQWQVWUZFGMBFVQSDCAWOUT");
    msg.state = 174U;

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
    msg.setTimeStamp(0.138529286338);
    msg.setSource(48611U);
    msg.setSourceEntity(127U);
    msg.setDestination(11231U);
    msg.setDestinationEntity(177U);
    msg.name.assign("NSGWEYAMYPWMMHXLCCJUJVPPVXDPWSHTYYLAHBZLQMHASRNNIDTQPOREHQRBOPWDAFILCIMOOBERDWJPKCGRBTZOYUIQZVCDSIDZVOFXKQMQGRVAHXWDVNFHBBUOVGCEAEBTXBXHRMEYSKYLIPJZWHMRETKQLMEFGTGUWDCXGNYZJUGVUSFODNJKZGFZZSQMSXKAQGJNIXWIPATKVKRUNTUYTAKOFPFSLBJUXNYKNIEALOCQESDL");
    msg.state = 79U;

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
    msg.setTimeStamp(0.534531984649);
    msg.setSource(27793U);
    msg.setSourceEntity(90U);
    msg.setDestination(44580U);
    msg.setDestinationEntity(185U);
    msg.name.assign("DMVTMUOAUUFCVQYWBXXHTUL");
    msg.state = 96U;

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
    msg.setTimeStamp(0.3475799884);
    msg.setSource(29437U);
    msg.setSourceEntity(79U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CRSHPRUDJJMXQJYVBWBPIXDBHQUCODRQVRSSTCVBEPUKXZLPKYHOFRFUZBZLULZGDFLVWWYOIIPHKMENOXSHTTCGJSOSVWNLZIPNPGWFOLMRJMIHRVCDHJOGEJGQOGQNKXYXCZFFCKNJUBVCXICAVMEWQAMHRSMQIFPYIV");
    msg.value = 142U;

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
    msg.setTimeStamp(0.560937478633);
    msg.setSource(45586U);
    msg.setSourceEntity(174U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(196U);
    msg.name.assign("RCQXJABNBIPIFBWMKUSWZFZESTJLVZFMFPUKSYNMJXRGOONQKPOXVAYJHZPUSNKWWVVTJFKHZHLCFXEXGKDZILZOEEKMESEAAZAMGYXZUEHYJUYMRQXABWJIPBRDQRGITDETMPFYINQMUSVWQCU");
    msg.value = 8U;

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
    msg.setTimeStamp(0.0370853254714);
    msg.setSource(10766U);
    msg.setSourceEntity(72U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(4U);
    msg.name.assign("OURXCOCYEGFBNLYVKWEBNYECLTZGATSTNDLWPUMOOQDZRGYEGKDDMIOZBAKBLDJ");
    msg.value = 234U;

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
    msg.setTimeStamp(0.457026735067);
    msg.setSource(15290U);
    msg.setSourceEntity(145U);
    msg.setDestination(30463U);
    msg.setDestinationEntity(118U);
    msg.name.assign("VOAZPNEOBSTKCOBGMLOYTVGFJBIRMSFEJEZQWVWUSPNFAHPEXYDCYJWPNBGRGTHWWEIDZUZULVIKMHFEMJAUHDWMUNKJCFOSCWBVCIIDUXLGZPVYYHOCUSJTONKRGEDEKY");

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
    msg.setTimeStamp(0.892629165543);
    msg.setSource(27805U);
    msg.setSourceEntity(70U);
    msg.setDestination(57623U);
    msg.setDestinationEntity(22U);
    msg.name.assign("NNPZEPECSNMSQDLYTOGGLMUKPRXEHUGXPLKWKMWJPPDRCYZCOSMKDLBLXNEIWQWATCKGVACIQCVIBXYSGGYBZJVUEIFDBOGPRAMNBCUFQTFMVWPRXULBJRAANSLTMVQXYIEYGRYQLQFOBVZOORHNJENYPWHHATKEDIDKWXTHJZCFS");

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
    msg.setTimeStamp(0.224114333646);
    msg.setSource(42578U);
    msg.setSourceEntity(55U);
    msg.setDestination(64209U);
    msg.setDestinationEntity(239U);
    msg.name.assign("ZMCOVOWEWMHAXVWFNHRGHVCMBUCTWYNVNCFBUSAPHRTEVUFJXVELGBUTSYTNNMLIGKIPIKIOQDFQJPAWDEJ");

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
    msg.setTimeStamp(0.744026186921);
    msg.setSource(10738U);
    msg.setSourceEntity(164U);
    msg.setDestination(63524U);
    msg.setDestinationEntity(222U);
    msg.name.assign("CZYBMBITNBRDBMFQJMRUFAEYVHHZFQUWTMISOIYEAIPBOJXXFHWKKAZNLQXRPUTJWAISCFRMPLHPKUZVEYFJQTGLKLQXOARDZVITZEQVJARRSSOMCBJIPGDGVSYZMMBQWJFTSWGESAXNFCYKDUGPLLMVLBZWWZLEPJ");
    msg.value = 23U;

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
    msg.setTimeStamp(0.794798903513);
    msg.setSource(4760U);
    msg.setSourceEntity(130U);
    msg.setDestination(13688U);
    msg.setDestinationEntity(29U);
    msg.name.assign("PPMAEJBWUBGWAQQOGDCLWZJYRAVEOFLSGGLMAGFUBFMSLLPGYVXIKFZDTLRSUVWNANFUGPUHMZQEUDODDTRXQHTBBZTCLKPYIBCHKHVHEEWTDIPYJIYXSJFGHKXXHXYVQINWOSFWPCJCOCGNZUNOPRSRDRKJKGRNBEMTFPAZKOTSMHFIRWZENQMCQFDHJSJXKWYBDLZVBTYCEUTAMKIXQAOPIEQVIVUDWOXH");
    msg.value = 210U;

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
    msg.setTimeStamp(0.394528971586);
    msg.setSource(52667U);
    msg.setSourceEntity(110U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(94U);
    msg.name.assign("ZPXMLSONILMDECZKDYQKPMJWUEACWJYCUSVAEUOXLUWYFCCXJUBZR");
    msg.value = 186U;

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
    msg.setTimeStamp(0.826376326277);
    msg.setSource(24773U);
    msg.setSourceEntity(109U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(154U);
    msg.id = 77U;
    msg.period = 3543087264U;
    msg.duty_cycle = 941711515U;

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
    msg.setTimeStamp(0.151825525183);
    msg.setSource(48479U);
    msg.setSourceEntity(207U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(11U);
    msg.id = 81U;
    msg.period = 3935168408U;
    msg.duty_cycle = 661851092U;

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
    msg.setTimeStamp(0.67270086883);
    msg.setSource(41832U);
    msg.setSourceEntity(93U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(250U);
    msg.id = 183U;
    msg.period = 427133062U;
    msg.duty_cycle = 697362744U;

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
    msg.setTimeStamp(0.793935535434);
    msg.setSource(53295U);
    msg.setSourceEntity(206U);
    msg.setDestination(8844U);
    msg.setDestinationEntity(46U);
    msg.id = 133U;
    msg.period = 1827707409U;
    msg.duty_cycle = 3006719229U;

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
    msg.setTimeStamp(0.897495455287);
    msg.setSource(54399U);
    msg.setSourceEntity(51U);
    msg.setDestination(4347U);
    msg.setDestinationEntity(123U);
    msg.id = 82U;
    msg.period = 3381096567U;
    msg.duty_cycle = 1554830426U;

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
    msg.setTimeStamp(0.417080334652);
    msg.setSource(35499U);
    msg.setSourceEntity(31U);
    msg.setDestination(8408U);
    msg.setDestinationEntity(97U);
    msg.id = 57U;
    msg.period = 111591300U;
    msg.duty_cycle = 3447161185U;

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
    msg.setTimeStamp(0.707445969258);
    msg.setSource(19884U);
    msg.setSourceEntity(237U);
    msg.setDestination(29840U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.195984591128;
    msg.lon = 0.331164371867;
    msg.height = 0.962160784396;
    msg.x = 0.2223940303;
    msg.y = 0.332806025863;
    msg.z = 0.734711456052;
    msg.phi = 0.464444373647;
    msg.theta = 0.554928137463;
    msg.psi = 0.705379414418;
    msg.u = 0.748302747911;
    msg.v = 0.589816464932;
    msg.w = 0.548522025792;
    msg.vx = 0.760157984084;
    msg.vy = 0.729268558702;
    msg.vz = 0.497713498308;
    msg.p = 0.896775846049;
    msg.q = 0.591765017846;
    msg.r = 0.0321039824293;
    msg.depth = 0.539301663303;
    msg.alt = 0.0676185982081;

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
    msg.setTimeStamp(0.45129194181);
    msg.setSource(4100U);
    msg.setSourceEntity(54U);
    msg.setDestination(46739U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.937663579798;
    msg.lon = 0.0741088453434;
    msg.height = 0.293262870494;
    msg.x = 0.97954670213;
    msg.y = 0.169222775868;
    msg.z = 0.519338204508;
    msg.phi = 0.85947881377;
    msg.theta = 0.235037646878;
    msg.psi = 0.0704407845447;
    msg.u = 0.796487732727;
    msg.v = 0.934702149942;
    msg.w = 0.235198026937;
    msg.vx = 0.26745211654;
    msg.vy = 0.165656598288;
    msg.vz = 0.391528827687;
    msg.p = 0.674305398188;
    msg.q = 0.290835150212;
    msg.r = 0.744407608527;
    msg.depth = 0.655903432511;
    msg.alt = 0.537714560241;

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
    msg.setTimeStamp(0.689380239207);
    msg.setSource(5842U);
    msg.setSourceEntity(68U);
    msg.setDestination(51235U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.852644138094;
    msg.lon = 0.223501842475;
    msg.height = 0.947885324631;
    msg.x = 0.735453645658;
    msg.y = 0.0967638896195;
    msg.z = 0.87070807072;
    msg.phi = 0.0383740593069;
    msg.theta = 0.222422388706;
    msg.psi = 0.86693823922;
    msg.u = 0.796414554362;
    msg.v = 0.499705610546;
    msg.w = 0.283202566999;
    msg.vx = 0.560289068191;
    msg.vy = 0.509302066454;
    msg.vz = 0.793746968536;
    msg.p = 0.658978479661;
    msg.q = 0.270806405398;
    msg.r = 0.549911674199;
    msg.depth = 0.41452458589;
    msg.alt = 0.748831940654;

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
    msg.setTimeStamp(0.687349656433);
    msg.setSource(31221U);
    msg.setSourceEntity(8U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(202U);
    msg.x = 0.101028799177;
    msg.y = 0.927024027373;
    msg.z = 0.995012076639;

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
    msg.setTimeStamp(0.780596908272);
    msg.setSource(64984U);
    msg.setSourceEntity(170U);
    msg.setDestination(37982U);
    msg.setDestinationEntity(176U);
    msg.x = 0.0218829851534;
    msg.y = 0.861369361169;
    msg.z = 0.292134754609;

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
    msg.setTimeStamp(0.454783202735);
    msg.setSource(30157U);
    msg.setSourceEntity(155U);
    msg.setDestination(41185U);
    msg.setDestinationEntity(177U);
    msg.x = 0.570760760453;
    msg.y = 0.518769470788;
    msg.z = 0.0993097999567;

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
    msg.setTimeStamp(0.34824231139);
    msg.setSource(37877U);
    msg.setSourceEntity(129U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(215U);
    msg.value = 0.999182604499;

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
    msg.setTimeStamp(0.381077466666);
    msg.setSource(7609U);
    msg.setSourceEntity(147U);
    msg.setDestination(32906U);
    msg.setDestinationEntity(98U);
    msg.value = 0.359628143449;

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
    msg.setTimeStamp(0.131551776445);
    msg.setSource(24162U);
    msg.setSourceEntity(19U);
    msg.setDestination(60812U);
    msg.setDestinationEntity(172U);
    msg.value = 0.390205348769;

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
    msg.setTimeStamp(0.703014869236);
    msg.setSource(63853U);
    msg.setSourceEntity(247U);
    msg.setDestination(48980U);
    msg.setDestinationEntity(114U);
    msg.value = 0.68735025094;

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
    msg.setTimeStamp(0.359816069674);
    msg.setSource(57937U);
    msg.setSourceEntity(25U);
    msg.setDestination(50290U);
    msg.setDestinationEntity(130U);
    msg.value = 0.520463745537;

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
    msg.setTimeStamp(0.404328478056);
    msg.setSource(34867U);
    msg.setSourceEntity(173U);
    msg.setDestination(43335U);
    msg.setDestinationEntity(69U);
    msg.value = 0.220968238589;

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
    msg.setTimeStamp(0.0420984823168);
    msg.setSource(20133U);
    msg.setSourceEntity(37U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(229U);
    msg.x = 0.0931370271225;
    msg.y = 0.0518623279277;
    msg.z = 0.350385569129;
    msg.phi = 0.645283200514;
    msg.theta = 0.687258529116;
    msg.psi = 0.86809771365;
    msg.p = 0.866582130077;
    msg.q = 0.652743176448;
    msg.r = 0.323395296061;
    msg.u = 0.0297649207391;
    msg.v = 0.592013044761;
    msg.w = 0.265629566029;
    msg.bias_psi = 0.976306840374;
    msg.bias_r = 0.211635336591;

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
    msg.setTimeStamp(0.429774523452);
    msg.setSource(51160U);
    msg.setSourceEntity(130U);
    msg.setDestination(50363U);
    msg.setDestinationEntity(207U);
    msg.x = 0.0308690016126;
    msg.y = 0.179424048699;
    msg.z = 0.503885084017;
    msg.phi = 0.162854335201;
    msg.theta = 0.572380023631;
    msg.psi = 0.0311372698893;
    msg.p = 0.466376859547;
    msg.q = 0.270763175901;
    msg.r = 0.355683647026;
    msg.u = 0.323599637695;
    msg.v = 0.764533760888;
    msg.w = 0.368007686575;
    msg.bias_psi = 0.530518847598;
    msg.bias_r = 0.999057876028;

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
    msg.setTimeStamp(0.214083377911);
    msg.setSource(50150U);
    msg.setSourceEntity(176U);
    msg.setDestination(56123U);
    msg.setDestinationEntity(108U);
    msg.x = 0.540746773028;
    msg.y = 0.615501964376;
    msg.z = 0.0960692232149;
    msg.phi = 0.553372752762;
    msg.theta = 0.792612746059;
    msg.psi = 0.369174440956;
    msg.p = 0.449956318616;
    msg.q = 0.356744028207;
    msg.r = 0.747723023696;
    msg.u = 0.104650659366;
    msg.v = 0.156512575449;
    msg.w = 0.413350817049;
    msg.bias_psi = 0.181800671533;
    msg.bias_r = 0.0850535703098;

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
    msg.setTimeStamp(0.905662706057);
    msg.setSource(42754U);
    msg.setSourceEntity(216U);
    msg.setDestination(39339U);
    msg.setDestinationEntity(234U);
    msg.bias_psi = 0.335088059103;
    msg.bias_r = 0.578728453649;
    msg.cog = 0.734130988745;
    msg.cyaw = 0.303459598297;
    msg.lbl_rej_level = 0.0564883757041;
    msg.gps_rej_level = 0.40926482288;
    msg.custom_x = 0.025943682521;
    msg.custom_y = 0.259034150398;
    msg.custom_z = 0.465938669195;

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
    msg.setTimeStamp(0.952489735817);
    msg.setSource(1038U);
    msg.setSourceEntity(244U);
    msg.setDestination(5012U);
    msg.setDestinationEntity(171U);
    msg.bias_psi = 0.364388103834;
    msg.bias_r = 0.913948660783;
    msg.cog = 0.993624328073;
    msg.cyaw = 0.702848046306;
    msg.lbl_rej_level = 0.248833124211;
    msg.gps_rej_level = 0.0840504590273;
    msg.custom_x = 0.347061508361;
    msg.custom_y = 0.305962864882;
    msg.custom_z = 0.929812849612;

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
    msg.setTimeStamp(0.262895746242);
    msg.setSource(57220U);
    msg.setSourceEntity(160U);
    msg.setDestination(40023U);
    msg.setDestinationEntity(106U);
    msg.bias_psi = 0.714828885451;
    msg.bias_r = 0.620511345819;
    msg.cog = 0.123388765183;
    msg.cyaw = 0.811542955117;
    msg.lbl_rej_level = 0.205242439895;
    msg.gps_rej_level = 0.00159182378635;
    msg.custom_x = 0.935306554965;
    msg.custom_y = 0.816051428643;
    msg.custom_z = 0.0730502514821;

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
    msg.setTimeStamp(0.802930572867);
    msg.setSource(11342U);
    msg.setSourceEntity(138U);
    msg.setDestination(62446U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.753568231515;
    msg.reason = 185U;

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
    msg.setTimeStamp(0.558047053355);
    msg.setSource(39786U);
    msg.setSourceEntity(80U);
    msg.setDestination(440U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.916127786118;
    msg.reason = 240U;

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
    msg.setTimeStamp(0.01867195856);
    msg.setSource(58740U);
    msg.setSourceEntity(36U);
    msg.setDestination(26346U);
    msg.setDestinationEntity(80U);
    msg.utc_time = 0.159775638583;
    msg.reason = 39U;

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
    msg.setTimeStamp(0.615341369181);
    msg.setSource(16473U);
    msg.setSourceEntity(172U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(144U);
    msg.id = 178U;
    msg.range = 0.189812160399;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.00176664473728);
    msg.setSource(27814U);
    msg.setSourceEntity(68U);
    msg.setDestination(60290U);
    msg.setDestinationEntity(164U);
    msg.id = 152U;
    msg.range = 0.714212049859;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.0933758890936);
    msg.setSource(28904U);
    msg.setSourceEntity(109U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(145U);
    msg.id = 219U;
    msg.range = 0.740132533088;
    msg.acceptance = 44U;

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
    msg.setTimeStamp(0.282292522328);
    msg.setSource(31590U);
    msg.setSourceEntity(90U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(198U);
    msg.type = 75U;
    msg.reason = 110U;
    msg.value = 0.457662597807;
    msg.timestep = 0.570699771057;

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
    msg.setTimeStamp(0.94282652698);
    msg.setSource(47446U);
    msg.setSourceEntity(141U);
    msg.setDestination(27597U);
    msg.setDestinationEntity(129U);
    msg.type = 43U;
    msg.reason = 207U;
    msg.value = 0.356284044534;
    msg.timestep = 0.415745435536;

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
    msg.setTimeStamp(0.247942347373);
    msg.setSource(25130U);
    msg.setSourceEntity(23U);
    msg.setDestination(26087U);
    msg.setDestinationEntity(12U);
    msg.type = 6U;
    msg.reason = 65U;
    msg.value = 0.87579265985;
    msg.timestep = 0.0647954149791;

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
    msg.setTimeStamp(0.54788699603);
    msg.setSource(63627U);
    msg.setSourceEntity(230U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.201844693293);
    msg.setSource(50850U);
    msg.setSourceEntity(25U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.258340210173);
    msg.setSource(56143U);
    msg.setSourceEntity(123U);
    msg.setDestination(11795U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.858074759023);
    msg.setSource(1221U);
    msg.setSourceEntity(26U);
    msg.setDestination(27481U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EKKYTSUJHCRSSJIZVDKCGCWPFWUEKFFMDHDBAYRQQTUFDSEURPZAOEMXEFUXOWUAGAAIZZUJHJINIVEAPWAOKRSBBZMYXZCCKMVRWISUNLGOOVBKNGECDOXCCXHLCGQRLQOJTSGATLXYPWPHZGKIJZ");
    tmp_msg_0.lat = 0.246597038173;
    tmp_msg_0.lon = 0.206051256479;
    tmp_msg_0.depth = 0.348650410555;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.64681301943;
    msg.y = 0.582119776109;
    msg.var_x = 0.307383268108;
    msg.var_y = 0.895360683241;
    msg.distance = 0.289657998779;

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
    msg.setTimeStamp(0.0900326915383);
    msg.setSource(24422U);
    msg.setSourceEntity(158U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ASXMRWDSZBHNJXIMYBGPXYWOHKHBVHXVQYEVKJOGWAZJQBEMAQGEETRXJFRIPZZVFTRJIGUGPMSCDOLGZEVUHSFXNIYHXQSLALSKJCAAXDCLQHBYYAEGDFUOBSBEYRQXAVLQFPJMPDOJJPSTDLTMLTTCEEOYRYMLZJPKNIDIFKKHEVVOICDU");
    tmp_msg_0.lat = 0.211836322366;
    tmp_msg_0.lon = 0.297666391432;
    tmp_msg_0.depth = 0.92934052074;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 239U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.297053736739;
    msg.y = 0.856039162707;
    msg.var_x = 0.980713588441;
    msg.var_y = 0.143646031319;
    msg.distance = 0.211821336424;

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
    msg.setTimeStamp(0.914303120186);
    msg.setSource(58233U);
    msg.setSourceEntity(153U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SFSWMVKMGWFIIXIXDAUKUBSITHXDUVHLFGTJARJIBSLYJOWKCNXHULWGWDRTNYTUTCQSHMNAIOVFUJKAQHNWJDCJGEPNDOVSXASUFVQYEDTHGIHCZBGVWDZ");
    tmp_msg_0.lat = 0.566794414906;
    tmp_msg_0.lon = 0.541191892317;
    tmp_msg_0.depth = 0.308696454361;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 233U;
    tmp_msg_0.transponder_delay = 231U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.755105073285;
    msg.y = 0.612360555118;
    msg.var_x = 0.264944552159;
    msg.var_y = 0.540017150908;
    msg.distance = 0.523101395974;

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
    msg.setTimeStamp(0.707911868181);
    msg.setSource(35923U);
    msg.setSourceEntity(190U);
    msg.setDestination(2922U);
    msg.setDestinationEntity(250U);
    msg.state = 46U;

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
    msg.setTimeStamp(0.978604304389);
    msg.setSource(56948U);
    msg.setSourceEntity(65U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(148U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.354271266741);
    msg.setSource(4295U);
    msg.setSourceEntity(239U);
    msg.setDestination(41836U);
    msg.setDestinationEntity(171U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.298510668618);
    msg.setSource(18678U);
    msg.setSourceEntity(62U);
    msg.setDestination(33536U);
    msg.setDestinationEntity(162U);
    msg.x = 0.0936992316185;
    msg.y = 0.488435122003;
    msg.z = 0.336113242995;

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
    msg.setTimeStamp(0.296475718916);
    msg.setSource(9339U);
    msg.setSourceEntity(237U);
    msg.setDestination(40563U);
    msg.setDestinationEntity(209U);
    msg.x = 0.00113864506252;
    msg.y = 0.456836977969;
    msg.z = 0.572962374488;

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
    msg.setTimeStamp(0.36414735003);
    msg.setSource(50430U);
    msg.setSourceEntity(224U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(184U);
    msg.x = 0.262293136562;
    msg.y = 0.625051389023;
    msg.z = 0.640078193109;

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
    msg.setTimeStamp(0.688123117212);
    msg.setSource(64176U);
    msg.setSourceEntity(152U);
    msg.setDestination(45983U);
    msg.setDestinationEntity(5U);
    msg.value = 0.0872326003154;

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
    msg.setTimeStamp(0.621179753563);
    msg.setSource(63673U);
    msg.setSourceEntity(225U);
    msg.setDestination(40649U);
    msg.setDestinationEntity(247U);
    msg.value = 0.333937447964;

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
    msg.setTimeStamp(0.827957414832);
    msg.setSource(15137U);
    msg.setSourceEntity(248U);
    msg.setDestination(3505U);
    msg.setDestinationEntity(64U);
    msg.value = 0.727663785435;

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
    msg.setTimeStamp(0.158994446695);
    msg.setSource(57253U);
    msg.setSourceEntity(114U);
    msg.setDestination(34256U);
    msg.setDestinationEntity(24U);
    msg.value = 0.202229792974;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.705866580365);
    msg.setSource(59342U);
    msg.setSourceEntity(65U);
    msg.setDestination(15778U);
    msg.setDestinationEntity(55U);
    msg.value = 0.278158379687;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.835452056241);
    msg.setSource(56093U);
    msg.setSourceEntity(171U);
    msg.setDestination(59729U);
    msg.setDestinationEntity(218U);
    msg.value = 0.884913424488;
    msg.z_units = 82U;

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
    msg.setTimeStamp(0.733423524547);
    msg.setSource(31539U);
    msg.setSourceEntity(18U);
    msg.setDestination(59119U);
    msg.setDestinationEntity(0U);
    msg.value = 0.853121259386;
    msg.speed_units = 181U;

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
    msg.setTimeStamp(0.134582085509);
    msg.setSource(36889U);
    msg.setSourceEntity(16U);
    msg.setDestination(49036U);
    msg.setDestinationEntity(80U);
    msg.value = 0.778041355365;
    msg.speed_units = 132U;

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
    msg.setTimeStamp(0.393214559819);
    msg.setSource(46291U);
    msg.setSourceEntity(151U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(0U);
    msg.value = 0.240439359997;
    msg.speed_units = 123U;

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
    msg.setTimeStamp(0.140612653053);
    msg.setSource(50245U);
    msg.setSourceEntity(176U);
    msg.setDestination(21756U);
    msg.setDestinationEntity(158U);
    msg.value = 0.723279424248;

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
    msg.setTimeStamp(0.155365100662);
    msg.setSource(58508U);
    msg.setSourceEntity(224U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(202U);
    msg.value = 0.848872611834;

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
    msg.setTimeStamp(0.656163634786);
    msg.setSource(6686U);
    msg.setSourceEntity(142U);
    msg.setDestination(62517U);
    msg.setDestinationEntity(214U);
    msg.value = 0.257923096574;

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
    msg.setTimeStamp(0.00601261189955);
    msg.setSource(46157U);
    msg.setSourceEntity(24U);
    msg.setDestination(32411U);
    msg.setDestinationEntity(186U);
    msg.value = 0.294673267351;

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
    msg.setTimeStamp(0.820943101802);
    msg.setSource(2354U);
    msg.setSourceEntity(38U);
    msg.setDestination(13845U);
    msg.setDestinationEntity(239U);
    msg.value = 0.194405620382;

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
    msg.setTimeStamp(0.834094276654);
    msg.setSource(36881U);
    msg.setSourceEntity(142U);
    msg.setDestination(21180U);
    msg.setDestinationEntity(236U);
    msg.value = 0.216290784116;

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
    msg.setTimeStamp(0.898998946223);
    msg.setSource(3451U);
    msg.setSourceEntity(59U);
    msg.setDestination(31898U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0009404976183;

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
    msg.setTimeStamp(0.255829432951);
    msg.setSource(12542U);
    msg.setSourceEntity(140U);
    msg.setDestination(58375U);
    msg.setDestinationEntity(33U);
    msg.value = 0.606294114586;

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
    msg.setTimeStamp(0.750623688515);
    msg.setSource(6838U);
    msg.setSourceEntity(229U);
    msg.setDestination(19675U);
    msg.setDestinationEntity(157U);
    msg.value = 0.74975083251;

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
    msg.setTimeStamp(0.996918311052);
    msg.setSource(17792U);
    msg.setSourceEntity(87U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(190U);
    msg.start_lat = 0.0984944226414;
    msg.start_lon = 0.0456915445699;
    msg.start_z = 0.251964428296;
    msg.start_z_units = 218U;
    msg.end_lat = 0.401460370132;
    msg.end_lon = 0.355103855424;
    msg.end_z = 0.520779130931;
    msg.end_z_units = 217U;
    msg.speed = 0.0774658701858;
    msg.speed_units = 198U;
    msg.lradius = 0.863308954201;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.0138150460182);
    msg.setSource(26603U);
    msg.setSourceEntity(48U);
    msg.setDestination(60619U);
    msg.setDestinationEntity(222U);
    msg.start_lat = 0.930218163728;
    msg.start_lon = 0.977150095088;
    msg.start_z = 0.11606986941;
    msg.start_z_units = 80U;
    msg.end_lat = 0.136734969169;
    msg.end_lon = 0.0591512833753;
    msg.end_z = 0.944664874443;
    msg.end_z_units = 51U;
    msg.speed = 0.0193216027733;
    msg.speed_units = 8U;
    msg.lradius = 0.377179544455;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.959557783597);
    msg.setSource(31178U);
    msg.setSourceEntity(199U);
    msg.setDestination(12670U);
    msg.setDestinationEntity(247U);
    msg.start_lat = 0.556583862955;
    msg.start_lon = 0.156836282199;
    msg.start_z = 0.764177507262;
    msg.start_z_units = 65U;
    msg.end_lat = 0.358851119767;
    msg.end_lon = 0.228321323592;
    msg.end_z = 0.382837014618;
    msg.end_z_units = 103U;
    msg.speed = 0.541858210643;
    msg.speed_units = 250U;
    msg.lradius = 0.993974100083;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.348766496715);
    msg.setSource(24459U);
    msg.setSourceEntity(174U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(124U);
    msg.x = 0.476900300854;
    msg.y = 0.811087652822;
    msg.z = 0.891095635425;
    msg.k = 0.233491030447;
    msg.m = 0.314453117052;
    msg.n = 0.0291058036111;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.635169590941);
    msg.setSource(32197U);
    msg.setSourceEntity(111U);
    msg.setDestination(31401U);
    msg.setDestinationEntity(140U);
    msg.x = 0.758925555621;
    msg.y = 0.949614226178;
    msg.z = 0.568678193105;
    msg.k = 0.748995493616;
    msg.m = 0.697771938901;
    msg.n = 0.571523858771;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.341117505852);
    msg.setSource(33467U);
    msg.setSourceEntity(184U);
    msg.setDestination(24866U);
    msg.setDestinationEntity(76U);
    msg.x = 0.002795860008;
    msg.y = 0.732363012649;
    msg.z = 0.335365132501;
    msg.k = 0.408123303382;
    msg.m = 0.708584437178;
    msg.n = 0.475796568234;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.428836787338);
    msg.setSource(51898U);
    msg.setSourceEntity(96U);
    msg.setDestination(4699U);
    msg.setDestinationEntity(163U);
    msg.value = 0.203717934678;

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
    msg.setTimeStamp(0.542626864295);
    msg.setSource(31512U);
    msg.setSourceEntity(104U);
    msg.setDestination(24037U);
    msg.setDestinationEntity(30U);
    msg.value = 0.673543841825;

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
    msg.setTimeStamp(0.595113844395);
    msg.setSource(20008U);
    msg.setSourceEntity(201U);
    msg.setDestination(6421U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0383000749699;

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
    msg.setTimeStamp(0.214083065409);
    msg.setSource(55022U);
    msg.setSourceEntity(234U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(186U);
    msg.u = 0.524178976169;
    msg.v = 0.794918688946;
    msg.w = 0.666964728086;
    msg.p = 0.55674846195;
    msg.q = 0.860361899789;
    msg.r = 0.928773107276;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.120669631482);
    msg.setSource(46229U);
    msg.setSourceEntity(71U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(123U);
    msg.u = 0.357820418939;
    msg.v = 0.462507644877;
    msg.w = 0.519445977339;
    msg.p = 0.134043840545;
    msg.q = 0.2658813122;
    msg.r = 0.00262948444395;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.472199484658);
    msg.setSource(14254U);
    msg.setSourceEntity(96U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(186U);
    msg.u = 0.146260479616;
    msg.v = 0.472486398034;
    msg.w = 0.952886437305;
    msg.p = 0.89032615758;
    msg.q = 0.482739216852;
    msg.r = 0.583796251484;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.599073990972);
    msg.setSource(29814U);
    msg.setSourceEntity(120U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(22U);
    msg.start_lat = 0.507213277753;
    msg.start_lon = 0.0988660737658;
    msg.start_z = 0.0303515469754;
    msg.start_z_units = 249U;
    msg.end_lat = 0.345246116851;
    msg.end_lon = 0.417327174392;
    msg.end_z = 0.382457720024;
    msg.end_z_units = 53U;
    msg.lradius = 0.657045814869;
    msg.flags = 84U;
    msg.x = 0.835383852309;
    msg.y = 0.851585765999;
    msg.z = 0.100101717808;
    msg.vx = 0.408439969617;
    msg.vy = 0.271656625717;
    msg.vz = 0.710451155507;
    msg.course_error = 0.903286208181;
    msg.eta = 16542U;

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
    msg.setTimeStamp(0.0448020929278);
    msg.setSource(23502U);
    msg.setSourceEntity(187U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(76U);
    msg.start_lat = 0.714791824501;
    msg.start_lon = 0.00198861282905;
    msg.start_z = 0.234495506524;
    msg.start_z_units = 96U;
    msg.end_lat = 0.649642609415;
    msg.end_lon = 0.217852680045;
    msg.end_z = 0.85080630445;
    msg.end_z_units = 83U;
    msg.lradius = 0.83956335362;
    msg.flags = 127U;
    msg.x = 0.0349038270606;
    msg.y = 0.687943505952;
    msg.z = 0.0448541373246;
    msg.vx = 0.63204703553;
    msg.vy = 0.961541612778;
    msg.vz = 0.723923309644;
    msg.course_error = 0.164507792546;
    msg.eta = 39182U;

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
    msg.setTimeStamp(0.527731607219);
    msg.setSource(52333U);
    msg.setSourceEntity(247U);
    msg.setDestination(25833U);
    msg.setDestinationEntity(208U);
    msg.start_lat = 0.662065185167;
    msg.start_lon = 0.152508995719;
    msg.start_z = 0.610112683098;
    msg.start_z_units = 94U;
    msg.end_lat = 0.577725336404;
    msg.end_lon = 0.889233883073;
    msg.end_z = 0.467866042809;
    msg.end_z_units = 55U;
    msg.lradius = 0.919016890593;
    msg.flags = 43U;
    msg.x = 0.430604228206;
    msg.y = 0.986082449766;
    msg.z = 0.208854175856;
    msg.vx = 0.642912970781;
    msg.vy = 0.398351748509;
    msg.vz = 0.875193034556;
    msg.course_error = 0.355100795875;
    msg.eta = 33581U;

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
    msg.setTimeStamp(0.394233052216);
    msg.setSource(33610U);
    msg.setSourceEntity(144U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(43U);
    msg.k = 0.0730262109719;
    msg.m = 0.997818654722;
    msg.n = 0.650038724019;

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
    msg.setTimeStamp(0.649760958325);
    msg.setSource(32419U);
    msg.setSourceEntity(88U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(130U);
    msg.k = 0.895052139349;
    msg.m = 0.622328588743;
    msg.n = 0.0998850188708;

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
    msg.setTimeStamp(0.868997236809);
    msg.setSource(56246U);
    msg.setSourceEntity(126U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(70U);
    msg.k = 0.171043489883;
    msg.m = 0.197707948584;
    msg.n = 0.9976830118;

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
    msg.setTimeStamp(0.688812668787);
    msg.setSource(9230U);
    msg.setSourceEntity(252U);
    msg.setDestination(30886U);
    msg.setDestinationEntity(160U);
    msg.p = 0.0937138914435;
    msg.i = 0.605121445832;
    msg.d = 0.55797660092;
    msg.a = 0.718751893211;

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
    msg.setTimeStamp(0.0923695962408);
    msg.setSource(39758U);
    msg.setSourceEntity(142U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(197U);
    msg.p = 0.686588196907;
    msg.i = 0.927906783138;
    msg.d = 0.371287405802;
    msg.a = 0.0674001322923;

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
    msg.setTimeStamp(0.287568824621);
    msg.setSource(1244U);
    msg.setSourceEntity(175U);
    msg.setDestination(44288U);
    msg.setDestinationEntity(240U);
    msg.p = 0.810127877892;
    msg.i = 0.449851235117;
    msg.d = 0.564271832283;
    msg.a = 0.00435229568475;

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
    msg.setTimeStamp(0.828820198112);
    msg.setSource(62116U);
    msg.setSourceEntity(175U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(14U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.742999321906);
    msg.setSource(52653U);
    msg.setSourceEntity(227U);
    msg.setDestination(17901U);
    msg.setDestinationEntity(80U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.751324827401);
    msg.setSource(65502U);
    msg.setSourceEntity(162U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(160U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.637237512677);
    msg.setSource(43593U);
    msg.setSourceEntity(168U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(158U);
    msg.timeout = 8815U;
    msg.lat = 0.837107958615;
    msg.lon = 0.299409160187;
    msg.z = 0.306965144042;
    msg.z_units = 132U;
    msg.speed = 0.802993274982;
    msg.speed_units = 62U;
    msg.roll = 0.566367920988;
    msg.pitch = 0.610362702553;
    msg.yaw = 0.755001385725;
    msg.custom.assign("HAJPQPKDMUTTGVSJNSNROXIWNKYTCRPQLHGMMAOFGDKNGJMEUPIDIDKDMBNMFQZZYFTJGIKLHJZDVJHWGMFKYHWLMEMOYP");

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
    msg.setTimeStamp(0.382859397037);
    msg.setSource(17065U);
    msg.setSourceEntity(174U);
    msg.setDestination(14045U);
    msg.setDestinationEntity(92U);
    msg.timeout = 19556U;
    msg.lat = 0.952515300262;
    msg.lon = 0.416347148509;
    msg.z = 0.890709449327;
    msg.z_units = 23U;
    msg.speed = 0.0750756517391;
    msg.speed_units = 119U;
    msg.roll = 0.976113441421;
    msg.pitch = 0.188357806828;
    msg.yaw = 0.976124467993;
    msg.custom.assign("SWPXOEEIXMIAEYXLNOWTKBXRUQNEKXZUZVBWETHOHSXTNDOKICPETACQUYEQQFOJLUJMBPPNSLFIDYMJBUOHZZXLCJHGVYBDGDUFCDPNX");

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
    msg.setTimeStamp(0.289923946817);
    msg.setSource(17768U);
    msg.setSourceEntity(5U);
    msg.setDestination(12501U);
    msg.setDestinationEntity(87U);
    msg.timeout = 838U;
    msg.lat = 0.55191736217;
    msg.lon = 0.0568741530499;
    msg.z = 0.837728662835;
    msg.z_units = 96U;
    msg.speed = 0.947398141001;
    msg.speed_units = 164U;
    msg.roll = 0.513749347187;
    msg.pitch = 0.773001369144;
    msg.yaw = 0.92590995898;
    msg.custom.assign("ICMIWNHFUKIMKN");

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
    msg.setTimeStamp(0.90939207096);
    msg.setSource(359U);
    msg.setSourceEntity(175U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(188U);
    msg.timeout = 7350U;
    msg.lat = 0.733966110953;
    msg.lon = 0.866961396797;
    msg.z = 0.363829399601;
    msg.z_units = 109U;
    msg.speed = 0.199821966744;
    msg.speed_units = 26U;
    msg.duration = 11998U;
    msg.radius = 0.619307924595;
    msg.flags = 167U;
    msg.custom.assign("CZGPNRDGQYDRVQBLHSKMVUZFWJURCALEVLYTPGQRMNKSTTYYQZMJHWVUJKOBXXIPFKAHVWTZWCKZDJGMIBEKLRTHECDIHUHSSFAXUOTNWZEQMFFCRGAPRXOKJMEEENBDXDKLCXRMPVJLNBOUIHDZEQJGWQYOTYQXUBOFRNHUAFBSSUOYYAAWQSHOPFCYBNWNVLFJOIJIMMGIZYXBNZJGHPVUS");

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
    msg.setTimeStamp(0.63498812196);
    msg.setSource(19238U);
    msg.setSourceEntity(84U);
    msg.setDestination(63691U);
    msg.setDestinationEntity(236U);
    msg.timeout = 32547U;
    msg.lat = 0.249354829211;
    msg.lon = 0.450127269605;
    msg.z = 0.194638506923;
    msg.z_units = 43U;
    msg.speed = 0.17747767627;
    msg.speed_units = 75U;
    msg.duration = 13314U;
    msg.radius = 0.964681266415;
    msg.flags = 154U;
    msg.custom.assign("SFYKNYMZUFTNFXJGKRMLZLOIUXQOTLOLFRTVEITNENREKMWNEWXVQMPBHSKEKJEPCWUUGSASSAOFWVCPZATKBPXIUOXGNDATJRHRBEWITMEYWQCRWDJTBECBJFAPJMDZZGFZIMWVFKHLIBFNZCXVJJQXCABAQOXTPRYUJQGLBOQVAPHCPKIBTQWDSRNYUUNPZHOEGCYDPIIRGUHDOKGLHLSDDHLYZHMAOMIUXDGDLRYJSVYGHNQSXVSKWCYC");

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
    msg.setTimeStamp(0.118436634698);
    msg.setSource(7873U);
    msg.setSourceEntity(135U);
    msg.setDestination(60297U);
    msg.setDestinationEntity(162U);
    msg.timeout = 16240U;
    msg.lat = 0.382339799217;
    msg.lon = 0.972319730599;
    msg.z = 0.532772808614;
    msg.z_units = 120U;
    msg.speed = 0.680430992729;
    msg.speed_units = 107U;
    msg.duration = 59572U;
    msg.radius = 0.652653316431;
    msg.flags = 39U;
    msg.custom.assign("VZOYZUTVOEPHPOUUMRLBBBPDIYGKTFSJKUULWXTPOHXMHHQBWYQQDQPAAKMGEIKHBDVRIPHQVMRCNEOMNENCLJAFLEOBUDG");

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
    msg.setTimeStamp(0.12163856747);
    msg.setSource(4189U);
    msg.setSourceEntity(223U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("AMEGVNBGNGGJWRDXMOPABYRJHCJYSMQAZRZRYCTUVZVRPYRUPWCSFDUQHHFVKCXYPSVLDIGIOZGQQLKYSLNNKHUHRFQGWEYTEZJIZBKQUBCSDFILJUPPPFIIOATLUDTQJGLDZNWAXEDMBWFOBMKAMNEEPFHOYRIOFPFFWTMCUVVEHCWBOQQJTTHBEXLAMDCYQZHXXZNSWUCAENHBAPIKVYLMDXCXNSLADZLSG");

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
    msg.setTimeStamp(0.760549155816);
    msg.setSource(27284U);
    msg.setSourceEntity(135U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("SOTCFFMGYXDWRDROSIGFETVAHHYTFNXPULKOZZLNDSUCJVBBORT");

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
    msg.setTimeStamp(0.463519237044);
    msg.setSource(27894U);
    msg.setSourceEntity(206U);
    msg.setDestination(40588U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("TEWOHAZQPLGPIEXWVTKSKHBPOZARSDQNIJPSUTKUIVWMEAFXMNZSWCAJZLSVBYACJRLTNCFCRMVZQOUKTVRDQREBHBYDQIGNRHBPDDOILDXGYPEIVXAHJXNMNGXZCVJNVIAYBBQJICWDPZRUWIXLVOKAYUWKXF");

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
    msg.setTimeStamp(0.0745622628274);
    msg.setSource(34156U);
    msg.setSourceEntity(133U);
    msg.setDestination(31906U);
    msg.setDestinationEntity(82U);
    msg.timeout = 51932U;
    msg.lat = 0.473636097326;
    msg.lon = 0.99475830834;
    msg.z = 0.604478849384;
    msg.z_units = 228U;
    msg.duration = 6960U;
    msg.speed = 0.70036698453;
    msg.speed_units = 229U;
    msg.type = 129U;
    msg.radius = 0.64751370283;
    msg.length = 0.690345590932;
    msg.bearing = 0.577460120215;
    msg.direction = 39U;
    msg.custom.assign("ILVGPYJBABHUVMSEERFQKRB");

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
    msg.setTimeStamp(0.737171325431);
    msg.setSource(33410U);
    msg.setSourceEntity(121U);
    msg.setDestination(43735U);
    msg.setDestinationEntity(27U);
    msg.timeout = 27080U;
    msg.lat = 0.195286685017;
    msg.lon = 0.843197198056;
    msg.z = 0.0907238840515;
    msg.z_units = 125U;
    msg.duration = 60172U;
    msg.speed = 0.779814472464;
    msg.speed_units = 95U;
    msg.type = 192U;
    msg.radius = 0.473147894897;
    msg.length = 0.983167657481;
    msg.bearing = 0.788279736423;
    msg.direction = 105U;
    msg.custom.assign("WDBEOFSGTZUMWKQQOJDGZVCXRESXMXGCITFDVTOKZBQGIUJFUXFOGNBUZMMVJHQPHYPBNLOBMWFTOKHHVNYPNCYFRXANWPHW");

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
    msg.setTimeStamp(0.926561279064);
    msg.setSource(37193U);
    msg.setSourceEntity(9U);
    msg.setDestination(65183U);
    msg.setDestinationEntity(252U);
    msg.timeout = 26773U;
    msg.lat = 0.592951474708;
    msg.lon = 0.385099852362;
    msg.z = 0.830393243967;
    msg.z_units = 37U;
    msg.duration = 42274U;
    msg.speed = 0.0892994907581;
    msg.speed_units = 134U;
    msg.type = 86U;
    msg.radius = 0.666137009099;
    msg.length = 0.850470446773;
    msg.bearing = 0.803910301367;
    msg.direction = 228U;
    msg.custom.assign("DGJXODMAETPRVXKQXJNLMTDECIDMAJIJHKAHROWTPB");

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
    msg.setTimeStamp(0.269316408357);
    msg.setSource(27315U);
    msg.setSourceEntity(188U);
    msg.setDestination(54087U);
    msg.setDestinationEntity(134U);
    msg.duration = 23253U;
    msg.custom.assign("ZMCHMQMMSNXNUHQOZIYZKJCBZTWSITYKPHZCTRTFYRQRIWVNXQJVSHDVNRHEEHJGADBOMOPBBNCRSSFIMUVDOKBAFUYABOYDUEVGQSAUWHGCVDJCPKJXPHZKJADNALWALEVPDRCGQLWLSSJMBPRQAYPBWLGTXENBPOSWOFIPYUI");

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
    msg.setTimeStamp(0.475384896);
    msg.setSource(45898U);
    msg.setSourceEntity(103U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(72U);
    msg.duration = 10433U;
    msg.custom.assign("XJEDNZRQIADZMPUQDEMAWSCJQTFLXTTYBIPUUVWHFNBYJRKONZTXLVAXJEDSCMQKLTRCKLHBPKYUAIORSNCCKZVEIULHHXSGXTLFDYHPTVCGOWGYRLTGZRGTUOZQMAIOJMMHNYWVWBBZWWGITBGWSVBAKEEOUXQMLAEQWM");

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
    msg.setTimeStamp(0.908350742336);
    msg.setSource(25789U);
    msg.setSourceEntity(60U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(232U);
    msg.duration = 13878U;
    msg.custom.assign("KWZHGQRYYIGAFKDHLJKQNPFQFMVAYNYBORS");

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
    msg.setTimeStamp(0.878586417907);
    msg.setSource(17122U);
    msg.setSourceEntity(117U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(5U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.766265539538;
    msg.control.set(tmp_msg_0);
    msg.duration = 55209U;
    msg.custom.assign("ANITPOMKKFBBUWYGIDTGUOBXUJPKRDNLSPNCRMZQEHCSHLBBWYEPOURFKXIWDMMWALAUJTILVCHVUAADGOQLIVRMTKEAYOYJUKEEXXCOQDDLZSNWVIEFZIGYRPJZJNWGTYHQPGDUQLQCHZKQFDNJSRNWXMEWPMLRTGPGXSMNBZPKVTCJFKIOHXNBYQHZDAYHDGFTXVUBHJXWEBOJLXAHLRUSYCYWVIVSRMSA");

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
    msg.setTimeStamp(0.568374127468);
    msg.setSource(51278U);
    msg.setSourceEntity(233U);
    msg.setDestination(24162U);
    msg.setDestinationEntity(210U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.829183251778;
    tmp_msg_0.start_lon = 0.279770433858;
    tmp_msg_0.start_z = 0.408647867469;
    tmp_msg_0.start_z_units = 0U;
    tmp_msg_0.end_lat = 0.826156394666;
    tmp_msg_0.end_lon = 0.469628726743;
    tmp_msg_0.end_z = 0.456115173802;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.speed = 0.865423319971;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.lradius = 0.422337605712;
    tmp_msg_0.flags = 34U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11985U;
    msg.custom.assign("RNWXEQFTKEWNURFQLKMJPDGSQEIPNJILQZHYUOQUSGHQMTRYCVEYSOGAGPAATKNTZBDPVQDRDTWCHIBPXZXPFMVSQAEHEWRZGHJCFISSSZLZYRNVQWRHOUEPKNGRFWPLLXGANFKDYOEOZA");

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
    msg.setTimeStamp(0.576617910424);
    msg.setSource(47688U);
    msg.setSourceEntity(191U);
    msg.setDestination(59843U);
    msg.setDestinationEntity(86U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.0473438944187;
    tmp_msg_0.start_lon = 0.187755108165;
    tmp_msg_0.start_z = 0.783965914441;
    tmp_msg_0.start_z_units = 141U;
    tmp_msg_0.end_lat = 0.965948835155;
    tmp_msg_0.end_lon = 0.323881938046;
    tmp_msg_0.end_z = 0.301819070782;
    tmp_msg_0.end_z_units = 214U;
    tmp_msg_0.speed = 0.406779599291;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.lradius = 0.478837610325;
    tmp_msg_0.flags = 97U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39334U;
    msg.custom.assign("AXTRPJBXQWFRGIAZAZIKBKNTJOKMH");

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
    msg.setTimeStamp(0.0536711525867);
    msg.setSource(36064U);
    msg.setSourceEntity(213U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(195U);
    msg.timeout = 31152U;
    msg.lat = 0.654356167198;
    msg.lon = 0.681303312219;
    msg.z = 0.148815968108;
    msg.z_units = 106U;
    msg.speed = 0.26519918923;
    msg.speed_units = 126U;
    msg.bearing = 0.0453071088747;
    msg.cross_angle = 0.136284157263;
    msg.width = 0.17931869256;
    msg.length = 0.962848036001;
    msg.hstep = 0.866844316187;
    msg.coff = 227U;
    msg.alternation = 175U;
    msg.flags = 245U;
    msg.custom.assign("FOCXFMBMVVWQHELETMAEIWONYDIJKPNEOHEGJVMRGTZSYUZTTOAFRSSPDILCCGBATCGQZHOOPSRIH");

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
    msg.setTimeStamp(0.643332864229);
    msg.setSource(63461U);
    msg.setSourceEntity(157U);
    msg.setDestination(46060U);
    msg.setDestinationEntity(128U);
    msg.timeout = 63945U;
    msg.lat = 0.919996466247;
    msg.lon = 0.657252963214;
    msg.z = 0.125499460863;
    msg.z_units = 23U;
    msg.speed = 0.362518977763;
    msg.speed_units = 240U;
    msg.bearing = 0.45574340895;
    msg.cross_angle = 0.0219002786469;
    msg.width = 0.482810754393;
    msg.length = 0.57407019065;
    msg.hstep = 0.272041954904;
    msg.coff = 68U;
    msg.alternation = 38U;
    msg.flags = 238U;
    msg.custom.assign("HOVQVPXUBLTWAOGUTIEVZQYBSDNDKKYDDDCOIRKQZROBYSHKKBNXXQFVZRGYYSXCIDHWJHIRYNSLNYCBIDGOUIPHOPFLMSESCIZQVCAVONHIXDGJNVTKNLUPPMMXTXCAVHYESUJRFYJWGNPJIWRZKFCVTAE");

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
    msg.setTimeStamp(0.0351812859406);
    msg.setSource(10906U);
    msg.setSourceEntity(181U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(220U);
    msg.timeout = 46232U;
    msg.lat = 0.168700215086;
    msg.lon = 0.989686602643;
    msg.z = 0.859812933689;
    msg.z_units = 194U;
    msg.speed = 0.221048155817;
    msg.speed_units = 104U;
    msg.bearing = 0.108633829897;
    msg.cross_angle = 0.360217298498;
    msg.width = 0.317765947997;
    msg.length = 0.329966175808;
    msg.hstep = 0.291877473293;
    msg.coff = 105U;
    msg.alternation = 151U;
    msg.flags = 214U;
    msg.custom.assign("EITSOXONJLESRYRMZOKOSNNDKQXQXBGTIDJZUYDHBARVPVAWDPXTGTITLEHQJWOQJCSXMTOVCPZYELCXUQPFSETWEOARMGROZFBEAAHNDQNLDASQWHBFWEGVFNWOZPTBCSMAKFDJALKYUCLBRQXDKKHHJIAGCS");

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
    msg.setTimeStamp(0.25558050701);
    msg.setSource(41774U);
    msg.setSourceEntity(21U);
    msg.setDestination(45166U);
    msg.setDestinationEntity(164U);
    msg.timeout = 64406U;
    msg.lat = 0.134774754674;
    msg.lon = 0.330862406635;
    msg.z = 0.673712306336;
    msg.z_units = 191U;
    msg.speed = 0.340093938913;
    msg.speed_units = 61U;
    msg.custom.assign("LWZYEQTNJGSU");

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
    msg.setTimeStamp(0.545257198185);
    msg.setSource(40119U);
    msg.setSourceEntity(90U);
    msg.setDestination(51938U);
    msg.setDestinationEntity(110U);
    msg.timeout = 10280U;
    msg.lat = 0.444514037854;
    msg.lon = 0.770149660724;
    msg.z = 0.764559442074;
    msg.z_units = 130U;
    msg.speed = 0.874775139504;
    msg.speed_units = 145U;
    msg.custom.assign("AIYILHXWGYQPPNXJVLCDMRJOAAWRHAHCISITPQBTWMNRASXNPBRBLCEHRGNOKKRYQQDNQPFGPLTZEFLIARXFDWDAFFPZZMVNZOCGVTSUMUNFQIWUVBBGOKMYVYSWDLGOTSQUOWUXJBZEVTNECBRPIFBRYPJMUTEDLTOLAUSEJEYXBSCMOQKDCXWSZVCIKEDQUXXJMCNKGVOWZVJE");

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
    msg.setTimeStamp(0.830322791889);
    msg.setSource(17985U);
    msg.setSourceEntity(29U);
    msg.setDestination(34929U);
    msg.setDestinationEntity(21U);
    msg.timeout = 7857U;
    msg.lat = 0.718995158972;
    msg.lon = 0.667003958769;
    msg.z = 0.340763912809;
    msg.z_units = 213U;
    msg.speed = 0.537655951754;
    msg.speed_units = 47U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.574245576553;
    tmp_msg_0.y = 0.0313489309193;
    tmp_msg_0.z = 0.370093570853;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SASPFHGNLVNWQEUDJXOSSRNJRBGETXLAKQGNKWAOCYVFQRKYWLEBMTCPJZPPYKBCNAVNZEOJQKPCSFQGUGEDXGBIPSFKOEOHXXDVQBESZGFRNTZJGNOPSFNTVIXIDWBBYRYKZCUKULUXICWJYIHZTLJPSQ");

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
    msg.setTimeStamp(0.38417388072);
    msg.setSource(50463U);
    msg.setSourceEntity(96U);
    msg.setDestination(38850U);
    msg.setDestinationEntity(230U);
    msg.x = 0.383128052711;
    msg.y = 0.295520850304;
    msg.z = 0.452951931548;

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
    msg.setTimeStamp(0.853167373696);
    msg.setSource(43660U);
    msg.setSourceEntity(176U);
    msg.setDestination(28623U);
    msg.setDestinationEntity(52U);
    msg.x = 0.0712614528355;
    msg.y = 0.665202979485;
    msg.z = 0.974825888327;

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
    msg.setTimeStamp(0.573776527389);
    msg.setSource(53540U);
    msg.setSourceEntity(168U);
    msg.setDestination(44879U);
    msg.setDestinationEntity(12U);
    msg.x = 0.780479875588;
    msg.y = 0.374357909774;
    msg.z = 0.309803868341;

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
    msg.setTimeStamp(0.561121473953);
    msg.setSource(6000U);
    msg.setSourceEntity(18U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(177U);
    msg.timeout = 22742U;
    msg.lat = 0.528306914003;
    msg.lon = 0.413550778276;
    msg.z = 0.161029966688;
    msg.z_units = 158U;
    msg.amplitude = 0.178914608395;
    msg.pitch = 0.0671271996144;
    msg.speed = 0.94683780391;
    msg.speed_units = 97U;
    msg.custom.assign("LXLHNIVPGDIDDEXTXVEOPCWZNVWSKWAITJBBKGJMAQJTKAEEMRHQDZGKCFTASURCNRUROHTIR");

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
    msg.setTimeStamp(0.748405300669);
    msg.setSource(63719U);
    msg.setSourceEntity(151U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(24U);
    msg.timeout = 24999U;
    msg.lat = 0.624701172193;
    msg.lon = 0.504755925505;
    msg.z = 0.574714795197;
    msg.z_units = 125U;
    msg.amplitude = 0.87309809035;
    msg.pitch = 0.8760167005;
    msg.speed = 0.256687750061;
    msg.speed_units = 246U;
    msg.custom.assign("WZXKGAISRZBLETBXRYHLCPPLSAWXLZKPYYFGMBQJETIJJAHDIXXIHLANBUCMLRTFKOEGJVKQIZNRYDZGQDKHGNSZFRJLDVHJSNYDOITVN");

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
    msg.setTimeStamp(0.0544184789771);
    msg.setSource(55539U);
    msg.setSourceEntity(181U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(181U);
    msg.timeout = 52237U;
    msg.lat = 0.203685753114;
    msg.lon = 0.432323893166;
    msg.z = 0.799851357617;
    msg.z_units = 132U;
    msg.amplitude = 0.9780461255;
    msg.pitch = 0.0392470662371;
    msg.speed = 0.280515408919;
    msg.speed_units = 106U;
    msg.custom.assign("VXHGQMVFSFELPVHYJWCUKRPQYJRQJSQIZWNVULKMSBAQAGCUMSDROUEPZSXCUYIHGQFPNEVTZBFOYBAEFVECNPRWEIEKLEWGDKHUFJODGPINGNPBZHEQUHASWR");

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
    msg.setTimeStamp(0.342428426395);
    msg.setSource(59638U);
    msg.setSourceEntity(192U);
    msg.setDestination(59826U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.0719229274893);
    msg.setSource(56563U);
    msg.setSourceEntity(21U);
    msg.setDestination(20018U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.69892720061);
    msg.setSource(34633U);
    msg.setSourceEntity(95U);
    msg.setDestination(35192U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.664265736143);
    msg.setSource(41324U);
    msg.setSourceEntity(205U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.974115321547;
    msg.lon = 0.84988128402;
    msg.z = 0.562870652215;
    msg.z_units = 6U;
    msg.radius = 0.000325506964804;
    msg.duration = 45532U;
    msg.speed = 0.914890890662;
    msg.speed_units = 69U;
    msg.custom.assign("WUFHQGGKSOACLBTFZXVWBGAWJLFAMZICKZAEHWWTVCOJRHHOURLNKUFXHRYHZSDPOUCDYUZPFIJBXHPKNWNYNUNPGNKMKCQRYPDJHREXIJZBFJKOMRCCJLYMHYGYVNWUJBTRWRESK");

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
    msg.setTimeStamp(0.72509667265);
    msg.setSource(50296U);
    msg.setSourceEntity(162U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.950441474383;
    msg.lon = 0.157011094781;
    msg.z = 0.386067201943;
    msg.z_units = 195U;
    msg.radius = 0.0876605961318;
    msg.duration = 21811U;
    msg.speed = 0.463266589282;
    msg.speed_units = 54U;
    msg.custom.assign("MAIFLGWEUDTYJHKMUWEZLRBNWEPJNOOFOZKQPMDRZZDKSYFGHFVYKRICNEN");

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
    msg.setTimeStamp(0.876264777082);
    msg.setSource(33712U);
    msg.setSourceEntity(192U);
    msg.setDestination(56693U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.683682596307;
    msg.lon = 0.0200761269673;
    msg.z = 0.0241369199104;
    msg.z_units = 109U;
    msg.radius = 0.450342005161;
    msg.duration = 38521U;
    msg.speed = 0.0243381160709;
    msg.speed_units = 192U;
    msg.custom.assign("DEOMFTVNSMYFONUYKXOPSZXINGTJSQRDOFBUZOWRFJZHMAJCDVHVHWTQKJMZZWKRCVKIMHNCQSLONCZYCPROAMSGYTWPTSEAJJTTUIYDPARFCXHLLSBGPQCXLGDIUVTLBKGOWBBBAZZDMYWUQFZHUNBYLNFAXFWDRGMVE");

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
    msg.setTimeStamp(0.311702425848);
    msg.setSource(33657U);
    msg.setSourceEntity(114U);
    msg.setDestination(57957U);
    msg.setDestinationEntity(175U);
    msg.timeout = 8298U;
    msg.flags = 124U;
    msg.lat = 0.287505049879;
    msg.lon = 0.706862593297;
    msg.start_z = 0.729591560463;
    msg.start_z_units = 103U;
    msg.end_z = 0.0371414883181;
    msg.end_z_units = 47U;
    msg.radius = 0.170570494628;
    msg.speed = 0.273297261365;
    msg.speed_units = 158U;
    msg.custom.assign("SNQBCNOGBLOTDVVKRKKAGYUQMCYTDIYCYWFHNDBDJIPJWTAALWMJGDBSPUHGUXAH");

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
    msg.setTimeStamp(0.0479121476065);
    msg.setSource(14239U);
    msg.setSourceEntity(143U);
    msg.setDestination(9665U);
    msg.setDestinationEntity(135U);
    msg.timeout = 14654U;
    msg.flags = 183U;
    msg.lat = 0.37949442257;
    msg.lon = 0.0306640246644;
    msg.start_z = 0.784784371803;
    msg.start_z_units = 168U;
    msg.end_z = 0.270427342113;
    msg.end_z_units = 237U;
    msg.radius = 0.882315300204;
    msg.speed = 0.225946342843;
    msg.speed_units = 92U;
    msg.custom.assign("NIDGIYNTLQDMPMUQTWGKOCRCLCXCSYMWIHXKDITLLWDSPMUDVPDGJWWTOLRZPIZVBBLFGBRNYOJBGLRTTEFPFKJRLYMHPXZGSMCKNDPBMEZTNDONBJCSOVQEJQHEVCMHSKIYJYYOXMRUIYVFVRVIQAVKXUFIHANSTBOELFBATDRJCHZUXUWAQPTMEREUSZKWJAQQFHOLRVJPPICDOCBFAXNKQEKHSGVUNWQYHAAUSEXONZWYA");

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
    msg.setTimeStamp(0.712587793547);
    msg.setSource(23998U);
    msg.setSourceEntity(69U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5311U;
    msg.flags = 187U;
    msg.lat = 0.512111666639;
    msg.lon = 0.533062458892;
    msg.start_z = 0.270221397179;
    msg.start_z_units = 146U;
    msg.end_z = 0.672988501204;
    msg.end_z_units = 53U;
    msg.radius = 0.103689644061;
    msg.speed = 0.872004254492;
    msg.speed_units = 106U;
    msg.custom.assign("CUPSLNBOFSKWVDSBJTVRTRZTHSOFKUTEAKYQFXXOLVATQYDECLSPOJSBIEQGHRBDE");

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
    msg.setTimeStamp(0.757115580346);
    msg.setSource(10026U);
    msg.setSourceEntity(120U);
    msg.setDestination(41962U);
    msg.setDestinationEntity(203U);
    msg.timeout = 7997U;
    msg.lat = 0.574644853649;
    msg.lon = 0.178914124625;
    msg.z = 0.50074604751;
    msg.z_units = 155U;
    msg.speed = 0.335198252562;
    msg.speed_units = 244U;
    msg.custom.assign("LHLMZFDJJNZDQTVSCAUYFCNAZKUYRSOKFEKBJUGLUUFSZVTLFSEZUXJNXPQKIMEWDUGMGNEVASGHMFPWRQNQNJIJIDPWNHEGVORYOUOITYWHPAYBVQPXRLEWZMYW");

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
    msg.setTimeStamp(0.490327463792);
    msg.setSource(18150U);
    msg.setSourceEntity(86U);
    msg.setDestination(5488U);
    msg.setDestinationEntity(101U);
    msg.timeout = 27720U;
    msg.lat = 0.10536594354;
    msg.lon = 0.291383514266;
    msg.z = 0.213238470975;
    msg.z_units = 22U;
    msg.speed = 0.143413361668;
    msg.speed_units = 122U;
    msg.custom.assign("GLROVXCRMECLXRNGSXCJZHWCMEZIHWSFCFHTDCSHZMDWQRXBPUGUWYTMQLPDOGDWHNKGLKYXJNKRHTYOVQSBSGTDTOINYVZKAHKAJDNIARDRPPVIQTUAZFFPL");

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
    msg.setTimeStamp(0.417795496818);
    msg.setSource(11107U);
    msg.setSourceEntity(73U);
    msg.setDestination(7397U);
    msg.setDestinationEntity(71U);
    msg.timeout = 21199U;
    msg.lat = 0.949166967336;
    msg.lon = 0.0098348202637;
    msg.z = 0.220184964657;
    msg.z_units = 120U;
    msg.speed = 0.312820856484;
    msg.speed_units = 237U;
    msg.custom.assign("ZKRKMTCJWLAYYXIPLFZTNOZNBQJSTATUALFFEBLUJGFNWMKUSZZXXBOHESNYYEIXBAXGHKQVXQFTWDOPYVPDMFXPCONIPWYVOMYZSPAIVKFZTZJUSEHBCGQQHIGKSHBVFFCETSPWGGNRRAEAREVSEKHOJLLNLUIDQDKVCZIREDZTARNKDMMLKOMNXJUJVBCCDQQUODSIBYUOITCGMAGAVPRWLWHNLXUCD");

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
    msg.setTimeStamp(0.814290757637);
    msg.setSource(11968U);
    msg.setSourceEntity(206U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(6U);
    msg.x = 0.0357360687758;
    msg.y = 0.844001040248;
    msg.z = 0.0200110593647;
    msg.t = 0.269876405896;

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
    msg.setTimeStamp(0.21597867142);
    msg.setSource(56774U);
    msg.setSourceEntity(89U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(25U);
    msg.x = 0.391501995126;
    msg.y = 0.244064732828;
    msg.z = 0.169701921026;
    msg.t = 0.113374463182;

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
    msg.setTimeStamp(0.488593567395);
    msg.setSource(41999U);
    msg.setSourceEntity(3U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(171U);
    msg.x = 0.223882146655;
    msg.y = 0.671897217854;
    msg.z = 0.627075238656;
    msg.t = 0.684975657173;

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
    msg.setTimeStamp(0.610260124431);
    msg.setSource(50436U);
    msg.setSourceEntity(132U);
    msg.setDestination(49054U);
    msg.setDestinationEntity(232U);
    msg.timeout = 55218U;
    msg.name.assign("OAWQTGNIAFMINOXBGEHMAXXHSHBCVCYCKYMGYUKWAEDERLGYUOIGVRYLIWRCHTAGCDPVISBJVHBZJFXYRFAOPZUOMKGKAPQPCHQFAUJHAIQEKRJMBEYOQHTPIFCCEZWSNMZZEVMZWVTTZYEGPOTFTRJPDWUOLASNSJUJQSYDIVDTRQNDJBDKMXVRLXJESONKKZNNLCPFXMGILYWHUTLLKRVTDMNCDSUEFXUPKXBBWLU");
    msg.custom.assign("OJHZIXIBVPWEAKIBTYSPPWNLSQRVVSWWIFKLNXAQZLSBQAPRRXMXIPQBIQANMTYSFYVZJVFIGUXRRXLEHTDBYCPLQDOBLJREYONKOIBYLEEWRVXKFICUCMQRHEDGMDVMHFAPZIUMHJZDCZBGAYGGVFDUUHGNXWQRQUOEQTGCMJTKOSLWJDMTZUOFDAOFUDPKTOYJNWHELGSTVFCLWDGJHRCZACHHTCVKFPAWNNBJSXTCEAOBUNSNMUPSEKJK");

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
    msg.setTimeStamp(0.878441874523);
    msg.setSource(34991U);
    msg.setSourceEntity(34U);
    msg.setDestination(571U);
    msg.setDestinationEntity(34U);
    msg.timeout = 62422U;
    msg.name.assign("THQYUKQLHPECZUXPGMYIXIQSXBVUPZBCETXDSATYEEQSDGGPMZGWNQPADWNOZAVO");
    msg.custom.assign("GXAJTZEWHNCCSZ");

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
    msg.setTimeStamp(0.652844375418);
    msg.setSource(18752U);
    msg.setSourceEntity(6U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(114U);
    msg.timeout = 61075U;
    msg.name.assign("RUCQPNKQQGHUVJSMFDDXORMBJTMSIVDLWETBHRPGIRKUTENWESGDOHFCOIXAQZBFWEGUHLMATMJLRDHPPSSUAZUPWPEMWZTIWCBFASQFDPITOMRHEFRLHWVKNDXEQZIBGNUBLZHJYEOLQIASXOLNSAZMVBTYRZDNFYWBCVDZSKROEPGHLSNVYBTQPFBJIYZAJG");
    msg.custom.assign("GBIZXOBUYSPINGADLCPNY");

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
    msg.setTimeStamp(0.122047580878);
    msg.setSource(46152U);
    msg.setSourceEntity(198U);
    msg.setDestination(47939U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.16794012386;
    msg.lon = 0.161145866183;
    msg.z = 0.793363348968;
    msg.z_units = 134U;
    msg.speed = 0.109918733929;
    msg.speed_units = 69U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11095U;
    tmp_msg_0.off_x = 0.617775466546;
    tmp_msg_0.off_y = 0.0823446511429;
    tmp_msg_0.off_z = 0.858596818687;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.585807521442;
    msg.custom.assign("AZQYNNNKXIQKUWEOQHRHWCLSLMEEXFUSFOXZUGAWUNAOESEXTQFHQUSNCTYWXJPGZBOBDKXYCMVBTIBKGKCYJYQPBIHYVSNNSWCCNGLKBDLVQMDLCVGIGTOTTNQZJROMFOWBYILEIPHDEYBPLHPYKAMXIBQEDFDIOHTIXTRRF");

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
    msg.setTimeStamp(0.332998002292);
    msg.setSource(20206U);
    msg.setSourceEntity(197U);
    msg.setDestination(2589U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.0354549765074;
    msg.lon = 0.429218313183;
    msg.z = 0.864332956243;
    msg.z_units = 75U;
    msg.speed = 0.0306489152385;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.236969660498;
    tmp_msg_0.y = 0.254312874143;
    tmp_msg_0.z = 0.161614560682;
    tmp_msg_0.t = 0.0289798042252;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.173062332048;
    msg.custom.assign("NODECXHDESHCASSYQHHIYQVGTPZMBJKWTKAZQJKTURFMYWITMRHOIQSABODGZIORUVQLQXPYYUEHESXRCLIWUMWTJKDXOXAYVFZCVYWPKHJHRKMVPYUGXEUILRBQEVTZSDIB");

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
    msg.setTimeStamp(0.513008356581);
    msg.setSource(57933U);
    msg.setSourceEntity(29U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.0398988221881;
    msg.lon = 0.896891656176;
    msg.z = 0.873637467066;
    msg.z_units = 211U;
    msg.speed = 0.120868920843;
    msg.speed_units = 8U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.70115455298;
    tmp_msg_0.y = 0.202877910605;
    tmp_msg_0.z = 0.691478260572;
    tmp_msg_0.t = 0.330170503614;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 21909U;
    tmp_msg_1.off_x = 0.0404329014883;
    tmp_msg_1.off_y = 0.576062858847;
    tmp_msg_1.off_z = 0.859276338862;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.278319263031;
    msg.custom.assign("IDOEGTYYORMBOCGFBGAPPXECXAENEHGGJSJLRKBRDZLWJGQQJTZXUZYHAFDWCNMRIUUIVKBQWIUARLPOJNXOATIYPZSEXNWKEKPDCDDUSWCHUXHJMQLPSVEUFGCHGIADNGFERGQTVIVDRIWZDRUFOTPOVVZWXZFJNMOKVJIYZFMMCJLNTONFXUVWKSBXKBKVLVTNCQMMKQHWUPYLNMFAZETHXT");

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
    msg.setTimeStamp(0.326885526877);
    msg.setSource(10777U);
    msg.setSourceEntity(71U);
    msg.setDestination(25610U);
    msg.setDestinationEntity(216U);
    msg.vid = 41469U;
    msg.off_x = 0.514949974291;
    msg.off_y = 0.222828231576;
    msg.off_z = 0.980675601277;

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
    msg.setTimeStamp(0.0366020787309);
    msg.setSource(20427U);
    msg.setSourceEntity(150U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(5U);
    msg.vid = 60759U;
    msg.off_x = 0.770606341639;
    msg.off_y = 0.401283408558;
    msg.off_z = 0.525310952515;

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
    msg.setTimeStamp(0.327504426047);
    msg.setSource(7825U);
    msg.setSourceEntity(178U);
    msg.setDestination(835U);
    msg.setDestinationEntity(24U);
    msg.vid = 41562U;
    msg.off_x = 0.515422317936;
    msg.off_y = 0.652558260943;
    msg.off_z = 0.958118408205;

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
    msg.setTimeStamp(0.487057658379);
    msg.setSource(44748U);
    msg.setSourceEntity(107U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.0236345783727);
    msg.setSource(44750U);
    msg.setSourceEntity(226U);
    msg.setDestination(34694U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.83507445701);
    msg.setSource(41134U);
    msg.setSourceEntity(102U);
    msg.setDestination(16648U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.932150934278);
    msg.setSource(987U);
    msg.setSourceEntity(223U);
    msg.setDestination(25429U);
    msg.setDestinationEntity(110U);
    msg.mid = 10234U;

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
    msg.setTimeStamp(0.548423458816);
    msg.setSource(3840U);
    msg.setSourceEntity(20U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(93U);
    msg.mid = 43829U;

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
    msg.setTimeStamp(0.0718961436228);
    msg.setSource(21072U);
    msg.setSourceEntity(238U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(114U);
    msg.mid = 22117U;

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
    msg.setTimeStamp(0.654484051283);
    msg.setSource(16561U);
    msg.setSourceEntity(64U);
    msg.setDestination(21907U);
    msg.setDestinationEntity(5U);
    msg.state = 154U;
    msg.eta = 40646U;
    msg.info.assign("YGDULYGKHCGOTQEVZHRKSYOKHZIWCUYUNSJXEKJJZBRJSGYQZNKLVBCJQAVWEDOFTXLHWBUGCDDAEMRNHLIMWIMBATRMNVAOHNJFWCDIPPTISGWUXWBLMIORMRPOEKFXQCLJQRXBENDWCPGTFWRDUKZGMACGQTSAPZRVQJYD");

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
    msg.setTimeStamp(0.894714410757);
    msg.setSource(18913U);
    msg.setSourceEntity(105U);
    msg.setDestination(42944U);
    msg.setDestinationEntity(114U);
    msg.state = 204U;
    msg.eta = 1967U;
    msg.info.assign("MPCFSVLOWWSJEYPUUTPLBYIJXZZOWPEYKNHYQFVYIRMTZNGFSXSMAJZPGUTHKDNIOEHLXIGXBKRKOQJNTGMJCJLVQZLGOTOMIDOOIQDELRSALFFHOPAVPFQYKRDGSQZHCVSJVZGSTBNQWJWZMNBYLCRAEUHBHMFXXRKCFWWMTEYNUCXKBPJCDQVKDVRZPRDAXHXUHGUUTM");

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
    msg.setTimeStamp(0.331391540382);
    msg.setSource(32995U);
    msg.setSourceEntity(32U);
    msg.setDestination(34493U);
    msg.setDestinationEntity(219U);
    msg.state = 6U;
    msg.eta = 4447U;
    msg.info.assign("GUJTDFWKKPYQZOHXTIEAGXMFFREZMQXBRUJESOPFCENBFZOHMVYILQDOWQJCJOAQISHSLYIZWOGXKSYDNBZGLAKAPUG");

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
    msg.setTimeStamp(0.680904497032);
    msg.setSource(32730U);
    msg.setSourceEntity(42U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(177U);
    msg.system = 23414U;
    msg.duration = 3426U;
    msg.speed = 0.0131799172367;
    msg.speed_units = 64U;
    msg.x = 0.869347923269;
    msg.y = 0.00272167301862;
    msg.z = 0.981979297424;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.546868869679);
    msg.setSource(10326U);
    msg.setSourceEntity(186U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(213U);
    msg.system = 45004U;
    msg.duration = 16734U;
    msg.speed = 0.725004371742;
    msg.speed_units = 53U;
    msg.x = 0.789647180228;
    msg.y = 0.0395727760795;
    msg.z = 0.0119752911856;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.284582485075);
    msg.setSource(55804U);
    msg.setSourceEntity(125U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(44U);
    msg.system = 40077U;
    msg.duration = 2927U;
    msg.speed = 0.909402566322;
    msg.speed_units = 159U;
    msg.x = 0.675630761277;
    msg.y = 0.688611551061;
    msg.z = 0.711914299069;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.245330666485);
    msg.setSource(44717U);
    msg.setSourceEntity(148U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.033674340504;
    msg.lon = 0.121160843388;
    msg.speed = 0.168062673476;
    msg.speed_units = 113U;
    msg.duration = 61605U;
    msg.sys_a = 6641U;
    msg.sys_b = 53345U;
    msg.move_threshold = 0.514342435542;

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
    msg.setTimeStamp(0.354602640464);
    msg.setSource(47491U);
    msg.setSourceEntity(133U);
    msg.setDestination(6477U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.401206054162;
    msg.lon = 0.768279874815;
    msg.speed = 0.483497227615;
    msg.speed_units = 39U;
    msg.duration = 27345U;
    msg.sys_a = 40363U;
    msg.sys_b = 2738U;
    msg.move_threshold = 0.321948934139;

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
    msg.setTimeStamp(0.230020640411);
    msg.setSource(8751U);
    msg.setSourceEntity(153U);
    msg.setDestination(14354U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.214599500629;
    msg.lon = 0.973447018898;
    msg.speed = 0.669425991657;
    msg.speed_units = 233U;
    msg.duration = 40191U;
    msg.sys_a = 60844U;
    msg.sys_b = 29479U;
    msg.move_threshold = 0.638300400577;

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
    msg.setTimeStamp(0.253740820885);
    msg.setSource(21636U);
    msg.setSourceEntity(17U);
    msg.setDestination(57245U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.573825294445;
    msg.lon = 0.765136198217;
    msg.z = 0.502576291084;
    msg.z_units = 10U;
    msg.speed = 0.969156838908;
    msg.speed_units = 12U;
    msg.custom.assign("KBUGWKZFIIYQRHLAALRVBDLNPSFCEXIRULYMRVQUWDCDAPEGELMZKQKITPNCXFBCNRWZJKSGHEBULCJKETFTRSXYCJXMPQOOMLNJGYYIXZ");

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
    msg.setTimeStamp(0.558955252557);
    msg.setSource(55878U);
    msg.setSourceEntity(143U);
    msg.setDestination(51256U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.709872562965;
    msg.lon = 0.559393547541;
    msg.z = 0.0439759249812;
    msg.z_units = 151U;
    msg.speed = 0.714217580544;
    msg.speed_units = 114U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.275719848368;
    tmp_msg_0.lon = 0.682703717986;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CCHBXTGPJTJRFFRTWFLVBAUQJXREIIVSQFBMHZCBXSMHBWJFOZPAIINHBOMRHYWYZQSPXNNRVEPJIHTQTCVDHFYWJJLZUXGGUHWAYSZCPKPYCTHISKLKMFOOSVY");

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
    msg.setTimeStamp(0.655221693096);
    msg.setSource(55148U);
    msg.setSourceEntity(93U);
    msg.setDestination(28862U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.717195477038;
    msg.lon = 0.800221502748;
    msg.z = 0.201404184859;
    msg.z_units = 0U;
    msg.speed = 0.872869814187;
    msg.speed_units = 17U;
    msg.custom.assign("LLYSHVGWQOQJVWDJKGPBUNSEEJTEONFBGAKDEHLIWZAHUZPZPGYLBMCEDKFUZRXUOTTRWLFIJFYQWSWBNVPDNQAHQQTLWDIRAMZIURYCNBZXTEGOAVPYOOANHDKHTLKQJCXFOMKNTYVDIRANPQCKKBZULSLUXUJKZYLYPKRXEEMQIRNCIMMUCGEWXCRRSMTSTBOAVJFSVEYSPJHSORCBVIFHCHPVMBHFYTJWMXGDOAWQXUFGFXZDZXB");

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
    msg.setTimeStamp(0.063640717004);
    msg.setSource(38131U);
    msg.setSourceEntity(193U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.859792753781;
    msg.lon = 0.744693625358;

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
    msg.setTimeStamp(0.460741871256);
    msg.setSource(14609U);
    msg.setSourceEntity(165U);
    msg.setDestination(7086U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.738283864685;
    msg.lon = 0.567009176305;

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
    msg.setTimeStamp(0.0546398314686);
    msg.setSource(46197U);
    msg.setSourceEntity(252U);
    msg.setDestination(42740U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.01985965108;
    msg.lon = 0.281865344161;

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
    msg.setTimeStamp(0.324235770329);
    msg.setSource(22949U);
    msg.setSourceEntity(44U);
    msg.setDestination(28153U);
    msg.setDestinationEntity(118U);
    msg.timeout = 33607U;
    msg.lat = 0.427420051825;
    msg.lon = 0.919979972995;
    msg.z = 0.691731599126;
    msg.z_units = 219U;
    msg.pitch = 0.178959010151;
    msg.amplitude = 0.651976498284;
    msg.duration = 63750U;
    msg.speed = 0.801575202694;
    msg.speed_units = 141U;
    msg.radius = 0.586073129886;
    msg.direction = 251U;
    msg.custom.assign("KNFBYCNGMUUVTQYRXCEMUGGBLRYPGXUADDITTOAYAYTPRHCIWSSCNPNSGUBQWZLRDADNZZZEWOALJPDZFBJIUEGCHOIBZPNVBBNODQMLAWIAHJSFOHRYVWLLLFXWQQJUOIKYWHFBLRMQMAKZOXKJQYQDCVXTXECXWZIBDSMVWUNSWEEPXLDHEFOFKHJGXISVJVTPGEMKMDYQVZSSHNPCRNJRCAKFQHUEKTEPRAVLKFHXVGIOBTGFZ");

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
    msg.setTimeStamp(0.839020636205);
    msg.setSource(56827U);
    msg.setSourceEntity(19U);
    msg.setDestination(60082U);
    msg.setDestinationEntity(33U);
    msg.timeout = 43393U;
    msg.lat = 0.116913671665;
    msg.lon = 0.586208764867;
    msg.z = 0.405679449337;
    msg.z_units = 129U;
    msg.pitch = 0.309904808881;
    msg.amplitude = 0.930387813631;
    msg.duration = 48382U;
    msg.speed = 0.00668124611388;
    msg.speed_units = 58U;
    msg.radius = 0.837914209836;
    msg.direction = 79U;
    msg.custom.assign("VZPUDWPJPMYTOBXJMDJVOSFQSHFZLFXECWJVQVEQVNLGCXAXCEENMFIGSRVDSQJDMDNFTHIVALSDGWQBUHQRBZAIECPVTIIOTKYNERLKEQHBQKAVAUJZMOZHKICOHGPSMALYLKYLHRTSAUWBBESURGPUXRBROWUXKOPSDYKIXOZC");

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
    msg.setTimeStamp(0.395478613004);
    msg.setSource(4367U);
    msg.setSourceEntity(172U);
    msg.setDestination(52846U);
    msg.setDestinationEntity(133U);
    msg.timeout = 35445U;
    msg.lat = 0.147391425818;
    msg.lon = 0.242000177868;
    msg.z = 0.999456045213;
    msg.z_units = 128U;
    msg.pitch = 0.786559634423;
    msg.amplitude = 0.0080418964703;
    msg.duration = 30920U;
    msg.speed = 0.683006123776;
    msg.speed_units = 73U;
    msg.radius = 0.398251781257;
    msg.direction = 93U;
    msg.custom.assign("HWIVFKMMXVJNDMSAQQKXGUPGSYCKFHRAWNGYHKUIZVHIOOCKKSTDRMIGTUYZXBYLSPHDNFTOPXYISHUIORLQRZBNUIETMLAVUVKTLMLMQJCVAFETCZQQJZHFTEUWGDXJEBWAQLYONMYJQNNWZRYPEFTYBFEGQVKHROEPSBIKEAXF");

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
    msg.setTimeStamp(0.855401525436);
    msg.setSource(61868U);
    msg.setSourceEntity(134U);
    msg.setDestination(19347U);
    msg.setDestinationEntity(29U);
    msg.control_src = 14925U;
    msg.control_ent = 213U;
    msg.timeout = 0.391776880183;
    msg.loiter_radius = 0.190072145595;
    msg.altitude_interval = 0.711382510889;

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
    msg.setTimeStamp(0.863873310527);
    msg.setSource(41828U);
    msg.setSourceEntity(54U);
    msg.setDestination(39341U);
    msg.setDestinationEntity(4U);
    msg.control_src = 24066U;
    msg.control_ent = 48U;
    msg.timeout = 0.679916140165;
    msg.loiter_radius = 0.465376510091;
    msg.altitude_interval = 0.764728361552;

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
    msg.setTimeStamp(0.253181175779);
    msg.setSource(4816U);
    msg.setSourceEntity(95U);
    msg.setDestination(5552U);
    msg.setDestinationEntity(64U);
    msg.control_src = 4156U;
    msg.control_ent = 91U;
    msg.timeout = 0.342326137401;
    msg.loiter_radius = 0.18079442984;
    msg.altitude_interval = 0.110209554002;

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
    msg.setTimeStamp(0.993598716884);
    msg.setSource(9522U);
    msg.setSourceEntity(239U);
    msg.setDestination(34071U);
    msg.setDestinationEntity(76U);
    msg.flags = 27U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.578815311968;
    tmp_msg_0.speed_units = 239U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.409639501262;
    tmp_msg_1.z_units = 115U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.577343972991;
    msg.lon = 0.671193539372;
    msg.radius = 0.990607268223;

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
    msg.setTimeStamp(0.924265259198);
    msg.setSource(51691U);
    msg.setSourceEntity(124U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(49U);
    msg.flags = 156U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.70316070275;
    tmp_msg_0.speed_units = 31U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.947168819324;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.501939408854;
    msg.lon = 0.263133099796;
    msg.radius = 0.301891895739;

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
    msg.setTimeStamp(0.603242306306);
    msg.setSource(5493U);
    msg.setSourceEntity(85U);
    msg.setDestination(15599U);
    msg.setDestinationEntity(176U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.199135237755;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.993613992106;
    tmp_msg_1.z_units = 99U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.991533443491;
    msg.lon = 0.154514562647;
    msg.radius = 0.512678422227;

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
    msg.setTimeStamp(0.273046797654);
    msg.setSource(17466U);
    msg.setSourceEntity(14U);
    msg.setDestination(64880U);
    msg.setDestinationEntity(213U);
    msg.control_src = 47253U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 15U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.901834818393;
    tmp_tmp_msg_0_0.speed_units = 23U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.801486884319;
    tmp_tmp_msg_0_1.z_units = 174U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.270182586516;
    tmp_msg_0.lon = 0.696274408327;
    tmp_msg_0.radius = 0.384274512789;
    msg.reference.set(tmp_msg_0);
    msg.state = 98U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.315253544775);
    msg.setSource(34556U);
    msg.setSourceEntity(110U);
    msg.setDestination(27345U);
    msg.setDestinationEntity(77U);
    msg.control_src = 5868U;
    msg.control_ent = 217U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.35474815471;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0470535166658;
    tmp_tmp_msg_0_1.z_units = 186U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.808453638743;
    tmp_msg_0.lon = 0.705274142923;
    tmp_msg_0.radius = 0.021883846193;
    msg.reference.set(tmp_msg_0);
    msg.state = 137U;
    msg.proximity = 129U;

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
    msg.setTimeStamp(0.108395215903);
    msg.setSource(23820U);
    msg.setSourceEntity(131U);
    msg.setDestination(40878U);
    msg.setDestinationEntity(103U);
    msg.control_src = 13743U;
    msg.control_ent = 169U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 104U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.121753961517;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.998574896767;
    tmp_tmp_msg_0_1.z_units = 211U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.875302804259;
    tmp_msg_0.lon = 0.640548208818;
    tmp_msg_0.radius = 0.427305214045;
    msg.reference.set(tmp_msg_0);
    msg.state = 25U;
    msg.proximity = 226U;

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
    IMC::UAVFormation msg;
    msg.setTimeStamp(0.699714285489);
    msg.setSource(17249U);
    msg.setSourceEntity(153U);
    msg.setDestination(34349U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("XXSLQKQAYKSOWPVWQIEPNEWMZBAAHPDKNFOCUJYRKRKEODTULKFFGJSSBLEYCHHMOGDMTELOGNUCEMWCHUAXKOTOSUWUPCFI");
    msg.group_name.assign("QUSXTHXYSWCNXQEVYNNJVPPMFKCYUOQAGZQSVI");
    msg.plan_id.assign("TCUOMDGJCCXHQTNHPFCSMEXIYWBALHZPSVNEXFQXFZBEPQAEQYJQOTRWKDORLDJMNNJDDORRKIHLDGWAXQMFPYPFAFFABWILMCOHSHUNOIZPQJSRAOGIVIEGZEANBIQJZORCWITFZWFRVPXZJGWTEDBVAGLYKLPNVXVBSGYEOIXTRV");
    msg.description.assign("WMZJPWTFKUKCGJOAXTKGCPTRXLO");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48183U;
    tmp_msg_0.off_x = 0.963417677421;
    tmp_msg_0.off_y = 0.225423357217;
    tmp_msg_0.off_z = 0.5292807533;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.484476131797;
    msg.leader_speed_max = 0.653305212229;
    msg.leader_bank_lim = 0.18837612984;
    msg.pos_sim_err_lim = 0.355820941519;
    msg.pos_sim_err_wrn = 0.174833123522;
    msg.pos_sim_err_timeout = 29942U;
    msg.converg_max = 0.756153778825;
    msg.converg_timeout = 53501U;
    msg.comms_timeout = 14198U;
    msg.turb_lim = 0.413499281617;
    msg.custom.assign("PRSHHVMOEOCCJWOBIDVYXOEPNXTMCBWZBNECEHWZLOYSHNOZAGGQOPXSCZASSAODCUFUBEAKLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UAVFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UAVFormation msg;
    msg.setTimeStamp(0.0286187847792);
    msg.setSource(33774U);
    msg.setSourceEntity(47U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(141U);
    msg.formation_name.assign("YQZREVHQEXQGQZVLOYMRKQKKKFNMWZNFWFMICVBFBDZEGMDSUUVPIRDWZRRSLOVYTIXBWYHGHGQFAHTTXWGYKDBNNUITALTORGVNWLLMJUVJWYETMXYLESOAAANSJEMDVGFCJUEOHWIJACCWPCZEXXPYUSNOQAXHPPOSZB");
    msg.group_name.assign("VZCIQGAIDNQPKRMNGZHEDEHBDLQXSYPHJNVIFAZZMCVUAESCSODRJBBYSMYAIXPFVXXXUMYRTMLOHSWNIGGLGGY");
    msg.plan_id.assign("MWRXYHTATPUMKEGEZQBHOATWJHPPKRLZSNZQNZBXBSQHMNWUPWGOFJASZBEMNTDOYJCRIQVMOIXPRSLSMGFRLVIGUCNARJWHZLOYUVAHHRIKESQYYLXEABMVZDFDWHTFZMFTBQWEBNLCVJEZMKJVUDPUYPQXKIAFTSTQNQJAXODOKTPMVOYVSLCLHENTUZRKLEOCJJVSUAXK");
    msg.description.assign("IOLFLZHVHNLZQRBXXCNHLGXAAJLZMYAXHICGCVYGOYLSQYEDRWZJSHNEQHJZFZDWZYMVJUALRVWVHKSFSXDTQUNUUDSUVMDTRCUOIMSGWMTTKDDRXGCHPBKTTOQZYWXWMBESCTRTRAKMLPAIXPOIJVYQNOOCEHCMVDSFKEBKNFJMCEPEUDPBFIMOIHKYKVAUUGXJGBFPJPITJINOAAQSWEDGKZENRABWPGKRQG");
    msg.reference_frame = 65U;
    msg.leader_speed_min = 0.213989519807;
    msg.leader_speed_max = 0.369126097535;
    msg.leader_bank_lim = 0.286643934648;
    msg.pos_sim_err_lim = 0.586325305522;
    msg.pos_sim_err_wrn = 0.288578472403;
    msg.pos_sim_err_timeout = 43187U;
    msg.converg_max = 0.221026000071;
    msg.converg_timeout = 38818U;
    msg.comms_timeout = 10743U;
    msg.turb_lim = 0.055766754063;
    msg.custom.assign("SVNIZAKOMGSRHJGDMPHMCARNGJAFIQWUMXCUIPHWTWYPREBRJZTFEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UAVFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UAVFormation msg;
    msg.setTimeStamp(0.892981986437);
    msg.setSource(62718U);
    msg.setSourceEntity(154U);
    msg.setDestination(34241U);
    msg.setDestinationEntity(59U);
    msg.formation_name.assign("OOESKBQTXENOUPAGFTXMCREAZVYVUWRFVTQGWTXCHQYEJZFCHUDNFCXGKGYXANHLIAQJCYSUKSVKHXDSMYPGOTTXFSJLPTWQBJDKVPWBIZKIKQIBDGRQIVDINUWLFDRZJXDORTMYMJZFDBASLTWFFUOLGSZUDAPJRQCHMNNWFLKUQRMZWXYSVIUOYMJMCNVAANWMZEZLJ");
    msg.group_name.assign("FXVSTBBMVCLUTZGSPMFTAHFERYVRMZKEYEGUON");
    msg.plan_id.assign("DANQWRJXWJMUWKMJOPJLGPDRVWNIVPDEIFEPIJPAYBONAXTLVQMBWOVICYRXTOOCJILWGKEYSAHRTGHGGTQGUMFQEPEGBHYRYJKEBTECOUMFKFLZZSFOSHBMRZBUAZSKXZNMVCBTHQYNKTUZHRLLDGKJQQLLFMPXAFVVUQKDXOQPZEBNKJSWHUFCYRWILCOESHODYWIVTFMZNARBZLXAIPAQCGMCJFWDGCBDPEZSUYDDTIV");
    msg.description.assign("QCMYFZCCYZNOIFLDAWYECXTKOIKKHHFOMCXDANWBSJRPNRQPIHPFPIVCJSROYSYFWKDGJQGDVCAWUQBMPMJWORJUVURZFSMTIJHBURFBASLZRYVFVLJSSZCZETQXNTWATAAEDWTKYXKDGRVWCONIKSJECVENGZHBUOJOLMMTSQUQKGJZIRLBPXNREUHWHOUXL");
    msg.reference_frame = 51U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49153U;
    tmp_msg_0.off_x = 0.736673088738;
    tmp_msg_0.off_y = 0.542656721202;
    tmp_msg_0.off_z = 0.615434935048;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.450295809757;
    msg.leader_speed_max = 0.534815044529;
    msg.leader_bank_lim = 0.195784005226;
    msg.pos_sim_err_lim = 0.336339118518;
    msg.pos_sim_err_wrn = 0.0785581970378;
    msg.pos_sim_err_timeout = 155U;
    msg.converg_max = 0.953711180659;
    msg.converg_timeout = 53513U;
    msg.comms_timeout = 4382U;
    msg.turb_lim = 0.132191624203;
    msg.custom.assign("VMRNAKVPMNGTOXZQHYROWEOLWGOMBJVVTKNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UAVFormation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.128712794879);
    msg.setSource(38333U);
    msg.setSourceEntity(243U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(106U);
    msg.dist_min = 0.776344462171;
    msg.ax_cmd = 0.44745016875;
    msg.ay_cmd = 0.185541371364;
    msg.az_cmd = 0.52837664338;
    msg.ax_des = 0.125211502458;
    msg.ay_des = 0.502293188227;
    msg.az_des = 0.242485820175;
    msg.virt_err_x = 0.0661631938338;
    msg.virt_err_y = 0.304983040688;
    msg.virt_err_z = 0.861493465804;
    msg.surf_fdbk_x = 0.10556223115;
    msg.surf_fdbk_y = 0.865719930056;
    msg.surf_fdbk_z = 0.395118091898;
    msg.surf_unkn_x = 0.00372172807186;
    msg.surf_unkn_y = 0.907025150524;
    msg.surf_unkn_z = 0.518317566878;
    msg.ss_x = 0.609772041963;
    msg.ss_y = 0.350007989213;
    msg.ss_z = 0.738107235211;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DNCCCZPQJLOKATJKPSTPYIXDCBKESBJQYTZGPFZSXOEINEDOOMNQUXNGRCREAMXNHOTAWZVFOQWFMRRKIXHRJVTVUUPKM");
    tmp_msg_0.dist = 0.592431443479;
    tmp_msg_0.err = 0.340204473002;
    tmp_msg_0.ctrl_imp = 0.707588363221;
    tmp_msg_0.rel_dir_x = 0.518322992451;
    tmp_msg_0.rel_dir_y = 0.809658498065;
    tmp_msg_0.rel_dir_z = 0.0507378828032;
    tmp_msg_0.err_x = 0.880233550927;
    tmp_msg_0.err_y = 0.492262452024;
    tmp_msg_0.err_z = 0.669351564425;
    tmp_msg_0.rf_err_x = 0.632881734055;
    tmp_msg_0.rf_err_y = 0.998781370353;
    tmp_msg_0.rf_err_z = 0.52050368573;
    tmp_msg_0.rf_err_vx = 0.710803764462;
    tmp_msg_0.rf_err_vy = 0.535321323246;
    tmp_msg_0.rf_err_vz = 0.133941782766;
    tmp_msg_0.ss_x = 0.291123898145;
    tmp_msg_0.ss_y = 0.129021072215;
    tmp_msg_0.ss_z = 0.116505564881;
    tmp_msg_0.virt_err_x = 0.661945706018;
    tmp_msg_0.virt_err_y = 0.715342743884;
    tmp_msg_0.virt_err_z = 0.975721887425;
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
    msg.setTimeStamp(0.961022894526);
    msg.setSource(43140U);
    msg.setSourceEntity(76U);
    msg.setDestination(32934U);
    msg.setDestinationEntity(251U);
    msg.dist_min = 0.376693304276;
    msg.ax_cmd = 0.368317205513;
    msg.ay_cmd = 0.747546932393;
    msg.az_cmd = 0.718288594492;
    msg.ax_des = 0.0239394635278;
    msg.ay_des = 0.660614655275;
    msg.az_des = 0.854773570767;
    msg.virt_err_x = 0.165513200641;
    msg.virt_err_y = 0.855159270624;
    msg.virt_err_z = 0.830243887917;
    msg.surf_fdbk_x = 0.853497700968;
    msg.surf_fdbk_y = 0.351046916997;
    msg.surf_fdbk_z = 0.834127202028;
    msg.surf_unkn_x = 0.633678731117;
    msg.surf_unkn_y = 0.414492925007;
    msg.surf_unkn_z = 0.475659434284;
    msg.ss_x = 0.350283070954;
    msg.ss_y = 0.495020047862;
    msg.ss_z = 0.713652284631;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("THPXPIRFREDSDTDSISOFBFQZTBEQBSSVQAWGWJHAHFJLRTBEPBCZFAJIYNKQMYVERHVGMADSLUNDWWHFBDFUOJQVKLXUWTECKMKXNTMKAMVTSNTWLYGCGFHMGLZODWCMHPAZZMDPRNVQOGRJNUHYJQDAMXGXEXZSBYKTNWJZIJYCKPKXYALOZOURKS");
    tmp_msg_0.dist = 0.531830031087;
    tmp_msg_0.err = 0.436782687483;
    tmp_msg_0.ctrl_imp = 0.0431713036898;
    tmp_msg_0.rel_dir_x = 0.304985989828;
    tmp_msg_0.rel_dir_y = 0.850039128837;
    tmp_msg_0.rel_dir_z = 0.739170652596;
    tmp_msg_0.err_x = 0.964852377003;
    tmp_msg_0.err_y = 0.132975339647;
    tmp_msg_0.err_z = 0.51695561784;
    tmp_msg_0.rf_err_x = 0.564221911267;
    tmp_msg_0.rf_err_y = 0.0317580490025;
    tmp_msg_0.rf_err_z = 0.468887939428;
    tmp_msg_0.rf_err_vx = 0.537664148685;
    tmp_msg_0.rf_err_vy = 0.634020675064;
    tmp_msg_0.rf_err_vz = 0.763713380931;
    tmp_msg_0.ss_x = 0.998362968616;
    tmp_msg_0.ss_y = 0.23954635121;
    tmp_msg_0.ss_z = 0.678471128827;
    tmp_msg_0.virt_err_x = 0.745037179499;
    tmp_msg_0.virt_err_y = 0.706714402926;
    tmp_msg_0.virt_err_z = 0.394704311761;
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
    msg.setTimeStamp(0.120717454601);
    msg.setSource(52891U);
    msg.setSourceEntity(81U);
    msg.setDestination(21545U);
    msg.setDestinationEntity(158U);
    msg.dist_min = 0.205953524497;
    msg.ax_cmd = 0.830230772129;
    msg.ay_cmd = 0.12525608149;
    msg.az_cmd = 0.592390261096;
    msg.ax_des = 0.332763973601;
    msg.ay_des = 0.995067936834;
    msg.az_des = 0.725867752868;
    msg.virt_err_x = 0.849674028933;
    msg.virt_err_y = 0.653014240653;
    msg.virt_err_z = 0.856397340168;
    msg.surf_fdbk_x = 0.885848033055;
    msg.surf_fdbk_y = 0.179355728728;
    msg.surf_fdbk_z = 0.605584105546;
    msg.surf_unkn_x = 0.338257146059;
    msg.surf_unkn_y = 0.40709106185;
    msg.surf_unkn_z = 0.0163695076597;
    msg.ss_x = 0.667858595247;
    msg.ss_y = 0.301045883922;
    msg.ss_z = 0.446679672973;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IIDQAYUBJHDXUOXTEZREPORAMSLJNLTOULEMUBGCKVYNBSVLLQQKNSCSMIYSNOPTKGDYZY");
    tmp_msg_0.dist = 0.315345202825;
    tmp_msg_0.err = 0.707114898126;
    tmp_msg_0.ctrl_imp = 0.856378845261;
    tmp_msg_0.rel_dir_x = 0.774375116975;
    tmp_msg_0.rel_dir_y = 0.0836387366356;
    tmp_msg_0.rel_dir_z = 0.0936669223164;
    tmp_msg_0.err_x = 0.439720079178;
    tmp_msg_0.err_y = 0.424503726998;
    tmp_msg_0.err_z = 0.611233736508;
    tmp_msg_0.rf_err_x = 0.201530917002;
    tmp_msg_0.rf_err_y = 0.726124391893;
    tmp_msg_0.rf_err_z = 0.419260781693;
    tmp_msg_0.rf_err_vx = 0.415198814281;
    tmp_msg_0.rf_err_vy = 0.442755589557;
    tmp_msg_0.rf_err_vz = 0.177516145541;
    tmp_msg_0.ss_x = 0.0613598416164;
    tmp_msg_0.ss_y = 0.755814630846;
    tmp_msg_0.ss_z = 0.87880072655;
    tmp_msg_0.virt_err_x = 0.706631764408;
    tmp_msg_0.virt_err_y = 0.537579795789;
    tmp_msg_0.virt_err_z = 0.967664714065;
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
    msg.setTimeStamp(0.469013580827);
    msg.setSource(41863U);
    msg.setSourceEntity(22U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(35U);
    msg.s_id.assign("RHSRJKLVXHGACUHSMLQPJOEGPSMDVCUHZGVRUGODOLDJYXSHWNRZXCTSQNXIJXURKZCBAISCRBRAKYAFOKEUOZTYXFSPLLCETMFMPEFVCQSFFLBUZIELZCADVVHCJJQSNSHGIBWXENQYN");
    msg.dist = 0.324381387271;
    msg.err = 0.58006342601;
    msg.ctrl_imp = 0.877274253571;
    msg.rel_dir_x = 0.813055434466;
    msg.rel_dir_y = 0.0405460328536;
    msg.rel_dir_z = 0.0543850711691;
    msg.err_x = 0.834620104755;
    msg.err_y = 0.957433598394;
    msg.err_z = 0.496695481806;
    msg.rf_err_x = 0.631258708904;
    msg.rf_err_y = 0.164810199511;
    msg.rf_err_z = 0.674521282079;
    msg.rf_err_vx = 0.0899143521094;
    msg.rf_err_vy = 0.952642220239;
    msg.rf_err_vz = 0.0264341047935;
    msg.ss_x = 0.892520691692;
    msg.ss_y = 0.381558988223;
    msg.ss_z = 0.302877121549;
    msg.virt_err_x = 0.349522611866;
    msg.virt_err_y = 0.728453609668;
    msg.virt_err_z = 0.236223620412;

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
    msg.setTimeStamp(0.160584457427);
    msg.setSource(40740U);
    msg.setSourceEntity(154U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("IFQPLLZSBETFGRZNLCXZWVKHANOSKJJUMEHOYMCLZBEW");
    msg.dist = 0.9918697668;
    msg.err = 0.39598043395;
    msg.ctrl_imp = 0.83430216103;
    msg.rel_dir_x = 0.646791598672;
    msg.rel_dir_y = 0.105289237934;
    msg.rel_dir_z = 0.913777018503;
    msg.err_x = 0.417649836293;
    msg.err_y = 0.847491752571;
    msg.err_z = 0.734230230593;
    msg.rf_err_x = 0.966275400787;
    msg.rf_err_y = 0.189916947659;
    msg.rf_err_z = 0.465283202238;
    msg.rf_err_vx = 0.501705853109;
    msg.rf_err_vy = 0.708064640234;
    msg.rf_err_vz = 0.0974569128117;
    msg.ss_x = 0.342599932022;
    msg.ss_y = 0.0816024908556;
    msg.ss_z = 0.57756232243;
    msg.virt_err_x = 0.220334176328;
    msg.virt_err_y = 0.875113221568;
    msg.virt_err_z = 0.836918625574;

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
    msg.setTimeStamp(0.645754201636);
    msg.setSource(50164U);
    msg.setSourceEntity(175U);
    msg.setDestination(28582U);
    msg.setDestinationEntity(249U);
    msg.s_id.assign("UFHNAEEDLZPJLSWTOBSUXULGMRSZIKYOV");
    msg.dist = 0.759904714338;
    msg.err = 0.484335512101;
    msg.ctrl_imp = 0.0419868328361;
    msg.rel_dir_x = 0.594535131868;
    msg.rel_dir_y = 0.0291253221487;
    msg.rel_dir_z = 0.914560325236;
    msg.err_x = 0.431657236234;
    msg.err_y = 0.793101587407;
    msg.err_z = 0.66680231033;
    msg.rf_err_x = 0.0319179805334;
    msg.rf_err_y = 0.962907408058;
    msg.rf_err_z = 0.763206044947;
    msg.rf_err_vx = 0.0887169717796;
    msg.rf_err_vy = 0.0232446936976;
    msg.rf_err_vz = 0.142962047488;
    msg.ss_x = 0.823472315496;
    msg.ss_y = 0.00583834780537;
    msg.ss_z = 0.959631254823;
    msg.virt_err_x = 0.91231553302;
    msg.virt_err_y = 0.775679591538;
    msg.virt_err_z = 0.59621020584;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.252370130111);
    msg.setSource(20705U);
    msg.setSourceEntity(137U);
    msg.setDestination(54912U);
    msg.setDestinationEntity(191U);
    msg.op_mode = 164U;
    msg.error_count = 53U;
    msg.error_ents.assign("HVOQOEZJDWDVXHWZNCJCHYZRIMVLXZNXXPBHJOOYNVHUOFJTTPEKAYZVE");
    msg.maneuver_type = 25097U;
    msg.maneuver_stime = 0.968578667052;
    msg.maneuver_eta = 36622U;
    msg.control_loops = 21889615U;
    msg.flags = 176U;
    msg.last_error.assign("TAWDQUKEXLGLHJFYMNBDOZIEEKIXKSRYUPTITADHMVBEIRVWMBXOFOJEWTSNRZRHLLCTPWCCOVKQAGGYAO");
    msg.last_error_time = 0.00520464274377;

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
    msg.setTimeStamp(0.834348113747);
    msg.setSource(41181U);
    msg.setSourceEntity(228U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(60U);
    msg.op_mode = 147U;
    msg.error_count = 90U;
    msg.error_ents.assign("OWZAOTOTBZGAKXTTSJMWQDFMGNTGEVZPEBZDDCYLJCJCXSLMLUTQXVMJROKAYXXJOHYCRDXVHLSKFTIEXLEBFKWQZHSQREGPILSYUNAFNNXTESGKKUXIYBFGYRNHIYUKQCAPPFEFWDPILZAJZPWQMAXBFDHS");
    msg.maneuver_type = 47951U;
    msg.maneuver_stime = 0.0483308781017;
    msg.maneuver_eta = 16163U;
    msg.control_loops = 2611657148U;
    msg.flags = 13U;
    msg.last_error.assign("TIFFBRHXMOTSJYCHRPDRIVOJZTTVYLEWNDVHBUNLCAKCBTRSVJXJVMGTQWEUGERSPFNFSBZBCPLKXZWTRQMUDUZPZCCDKLYBKLOZGIXJPURYRNUABEGVXQNJQDXSQIDPWDKSYQXOACJNOTAFJFOKIRYPJLUOZGEMGOWYUEWSNKQTBWFWIEPAXIKGVWCNGLXQYIDUNVSZFLMGPBDHHKICHZRQVTAYIXHAOSHMLHVDHMFAPAUNWFBLSZEQMKAYMG");
    msg.last_error_time = 0.133032980096;

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
    msg.setTimeStamp(0.806250391381);
    msg.setSource(50575U);
    msg.setSourceEntity(131U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 8U;
    msg.error_count = 93U;
    msg.error_ents.assign("YJBJMJYQXGFRDDQSUCDKZGNVRWMVLMAPZXPLUKLUGEENMJNSIFOQFQRWNECZCLRGYWGWQPTYJRAGZCUBPVSVLFRFMBHBLWNGTIGPIHVXWFHOIXTUTSWHQJPLHSHOXOMPNXQYAOBVDDTXOWYIHOTRQCKOTIMKFNENGSAINRZEBRKTTZUCELJFEBWNVXCZLIP");
    msg.maneuver_type = 34250U;
    msg.maneuver_stime = 0.179817678577;
    msg.maneuver_eta = 32544U;
    msg.control_loops = 314248876U;
    msg.flags = 25U;
    msg.last_error.assign("VQVVPEHBOACRTLVLSBKOCJJDFSPJINRGRYQBVKXZTCWLXGAZXLMQXSSKSJKFNHZDBYUKXQWLIRUGHLXAYMHHKNLKNMEOGI");
    msg.last_error_time = 0.542070160697;

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
    msg.setTimeStamp(0.607396910134);
    msg.setSource(6887U);
    msg.setSourceEntity(117U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(236U);
    msg.type = 143U;
    msg.request_id = 41739U;
    msg.command = 42U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 31025U;
    tmp_msg_0.lat = 0.461914769489;
    tmp_msg_0.lon = 0.724253909448;
    tmp_msg_0.z = 0.222941806697;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.238969601841;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.custom.assign("AARUFGVLVNQSMIMDLRRDCAKOPBCF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29630U;
    msg.info.assign("KWHJAMADOTLGRVBDNCVFCXZALCCZKPZRTRLSEZAZZPTURIEGYQXVSYEZXMHZKAVQPON");

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
    msg.setTimeStamp(0.392051365862);
    msg.setSource(25171U);
    msg.setSourceEntity(10U);
    msg.setDestination(58079U);
    msg.setDestinationEntity(203U);
    msg.type = 141U;
    msg.request_id = 60510U;
    msg.command = 246U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 11868U;
    tmp_msg_0.lat = 0.124087965565;
    tmp_msg_0.lon = 0.088291575847;
    tmp_msg_0.z = 0.288636883998;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.22030486081;
    tmp_msg_0.speed_units = 96U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0712799310111;
    tmp_tmp_msg_0_0.y = 0.789576526728;
    tmp_tmp_msg_0_0.z = 0.920087603858;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MPRWCDTCTOFLKZOIGHSOVK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5596U;
    msg.info.assign("PEZLHSHTPJRMYZBOYMVBNFDIXOQMOEFNWOXGEPIMRADRRWFNRIOPQCSQBPXLQELEGG");

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
    msg.setTimeStamp(0.526415474615);
    msg.setSource(5566U);
    msg.setSourceEntity(194U);
    msg.setDestination(12673U);
    msg.setDestinationEntity(1U);
    msg.type = 22U;
    msg.request_id = 61215U;
    msg.command = 102U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.87643282395;
    tmp_msg_0.lon = 0.939165971395;
    tmp_msg_0.z = 0.682872796988;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.radius = 0.0391109890024;
    tmp_msg_0.duration = 35427U;
    tmp_msg_0.speed = 0.428740372881;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.custom.assign("MMIIWVIKSNHBDWYSVJMQKBEBFQOTSOTJHBKSONSDRWAQTZOFEOVNVPABGJEPWXCSKY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26845U;
    msg.info.assign("GMECKPNPHPPVDGWZBYXKBRAOFZHEAQDGEIZJWJZPVTOIXEHCQGUJWFJVXNIAHLDFOACUYKGKMIPSWQDQFLREEWRTUYNCVXLSDDXNLBTFWRSHPJRJPLVORJZIDUNBQUGYBZAMLRUYTPRREJMQCQCKIXZBGXTFVEZBSKROYQHUVUSYLOQDAOETI");

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
    msg.setTimeStamp(0.0369859687756);
    msg.setSource(41024U);
    msg.setSourceEntity(238U);
    msg.setDestination(31025U);
    msg.setDestinationEntity(151U);
    msg.command = 37U;
    msg.entities.assign("GSCNDTEEXVBRRLVLQPOWUXPB");

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
    msg.setTimeStamp(0.745927398662);
    msg.setSource(14386U);
    msg.setSourceEntity(244U);
    msg.setDestination(51736U);
    msg.setDestinationEntity(150U);
    msg.command = 119U;
    msg.entities.assign("UPSVMKOXYCHVQPRMWICNVYXBGQKVOMYLFRWMGQHCMAAQJNELMDERJAWYSZTJPLWRZOPRNMCSHBAKQKNQWXUZTHSVMXETWBPKESKPQOVDEHGYYZEPIEAUAHIZWXVYQCLQZITOUMJHGGUEFIEHNCFUNGUVFDIKKLDLJWSRUDICABFBLTXPQYVRLFSIUBHTYFYNBSGHXTSFNZKJCILDF");

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
    msg.setTimeStamp(0.040464445962);
    msg.setSource(27848U);
    msg.setSourceEntity(91U);
    msg.setDestination(51995U);
    msg.setDestinationEntity(165U);
    msg.command = 69U;
    msg.entities.assign("QCBTXHMFOKOTFJFEVVSWAVQTWOPUMCVWFZQLKNLSSIEEOYHRYWOMALHZHJFNYGAMUWSSKRUVQAPMPRHKLIDKYLPFNTCGLFEPZQEUHPZDYCMUYKQITIABNUOADIRBDXDWWVDYKZHAEPLDYJCRIQQTNJNFINCVFSRKEGJCXGHBBOUUEYYJPDWJOSRGLVA");

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
    msg.setTimeStamp(0.945834819199);
    msg.setSource(11741U);
    msg.setSourceEntity(111U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(220U);
    msg.mcount = 235U;
    msg.mnames.assign("CIEPUQDVQDXNMLZIVYILBYLWIXGWSVVQTOSLKEBFUJILCRTIZDFMOJKXCZGHQGYZHKCNSCUBLSSNEFUMURUQFZSNUEKIUQKVZDSEJYMHRTDAKAPDRJEOBHKNEMIXBJHXMBTWJTRZFJLHFSZSYPOMDPQNPHUCTBLGWWBJFVUJPVQEYLEWMACAJHTNZTDOCAXWRYXZMRGAO");
    msg.ecount = 237U;
    msg.enames.assign("TNFZNEJKYJWLYRZTAQAXGRSZZASNPWDKUIHJSDHEDVWKWGHRBQSYPNITTODSJFMZBMAVDTEHZWRKXBSBGBAIQXXQFMECTLBYAOCNTDBVLLDISWCAPNGSVKOJMNTTQOKNCXYHEEOPRPLEMPYDNJGHOUKKBQXJRUZZVCYCRKXJIWMRFOFAMYIIMOHCZUJIXOQQVFGHAXJOXLIFPPVSCURDLFEUGWQRFAWKBGU");
    msg.ccount = 6U;
    msg.cnames.assign("LOGIGZMNXCYNGDECEPAKJBPRMIQKEOJRRZKAQFTZSFPOBBEIWOLSVHHWFACUZPNPKUTJVLTQJFVQENAXZBASVHVXVCKRQRZWCPXAYODSFTCYWWNCJMLUOYITQHFRJGETSKOXOLGATLDNHBXKQZGBPGGJIUTXUIFVABXIDVQSHWYRLDGDJMNWGDQHPBYWADKRYBPMMXJIFDROKKLENHUYUTVTFPZCOSEUZJRDNWCVBUYMMHLEEFUNMCZYHLXA");
    msg.last_error.assign("OXYZLAKFQQMNMQSWAWWYFYYLMDCRJPUVCTRRIVBRPLWEOEOSMBCLGZKJFFNMHNVAUQXVGHGDAGIZZPPAKYUSADABHUFRJLKTAVEZKJWXCDJIOSTBIEZRMBJONOIKJXLIDPSEYGWPZQFMSLJDXAUXNWGUDPOXKCTDMUQYPZCXRRYZHFWVETUJCGMZLLHVEQBFVSPNIGYHTCNBITYJDKDSBHPTW");
    msg.last_error_time = 0.562137725645;

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
    msg.setTimeStamp(0.429647678184);
    msg.setSource(53911U);
    msg.setSourceEntity(75U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(199U);
    msg.mcount = 176U;
    msg.mnames.assign("ULORLUDKXPMFJXBIHPERGXEAGODMNDTDTINOADXHAFTPUCJBVWVSHFYWIGWQHJVVREFBZJILPJRPSQHHOGQLNKVGLFRRELBWAAIYBVQVZMOGYSMKAZPUSMAIZXOMLXCMWXAAEORYBTYQVWTUOTZNIRSWLESGTXWDLQTJYJSUVKTZH");
    msg.ecount = 194U;
    msg.enames.assign("VELOAYEHGOSJKZLIARHLEEXVCUGTRWKXCSFKWOPHDBIUNHPNXBIAUEDDQIVECPVFLRJHUNWXQSUTMXGIJSOPLQHOPBZYTJNEVRTJWQLYZGDTURQDOPXTQYGRDFQXFKGCFCMARWTNQINARLYMRBAMSGWZBPELVJ");
    msg.ccount = 23U;
    msg.cnames.assign("YAUSUCJYYLQNTPHZPCJKKCNRCXSWSVXLOADFRQNDZRXCROPLAECVHGOXETEGVXIJDRFIPNOWYPQHNRESTIIJASVYHCBOBEZOAJYFRQEUWTOJLBUGLWMGIBJMFXRCUVVWRBWRGDFBTNWHIBZJJIVGHTLLZGKOGMMFTZMLWOUAYSSXHIQVXLCN");
    msg.last_error.assign("RYNTLKPNBFRSBOWQERVXVATKBMPTPX");
    msg.last_error_time = 0.118797887494;

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
    msg.setTimeStamp(0.449700027104);
    msg.setSource(5537U);
    msg.setSourceEntity(182U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(41U);
    msg.mcount = 192U;
    msg.mnames.assign("SPPIDNOYBQFLUGNYECTPFRKINZRXRKSORRHOLBGMVAWTCWABQCBPDVGMUMPHLECZIIHZGZB");
    msg.ecount = 39U;
    msg.enames.assign("KMJRYHSGGYTJUUSCZWXHPOZWRUPNKAXMEKKRYEDV");
    msg.ccount = 4U;
    msg.cnames.assign("IFGHRVJVUPNSVRRCIFDRPKTEXNBIUYVUMDRWCUS");
    msg.last_error.assign("EMVOUCWCXKSZTLGSBWZKREMZPMIZYDQQLZBPYIODIQPYWJOGUNNUXJUAXCEKNTEVOKRVKFRNFENDMHUFBCQKLVADSVEHXYJPBCBCPMEEQXCWDKUINXHAPLRGGXHYTKWDYABRIUHRFGZGNALSWOVOJJKJJGMIWFTVXXSQHPNOAHFTFNIDSLWLLRFSLYEYQGUSDTFHJJXZT");
    msg.last_error_time = 0.097812318386;

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
    msg.setTimeStamp(0.200821705997);
    msg.setSource(47008U);
    msg.setSourceEntity(244U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(91U);
    msg.mask = 121U;
    msg.max_depth = 0.501622324492;
    msg.min_altitude = 0.829769512377;
    msg.max_altitude = 0.590418652564;
    msg.min_speed = 0.010799601948;
    msg.max_speed = 0.51447698023;
    msg.max_vrate = 0.152147236379;
    msg.lat = 0.812529818361;
    msg.lon = 0.448179587619;
    msg.orientation = 0.428454857939;
    msg.width = 0.272657607043;
    msg.length = 0.799853130183;

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
    msg.setTimeStamp(0.652761878025);
    msg.setSource(37540U);
    msg.setSourceEntity(46U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(187U);
    msg.mask = 160U;
    msg.max_depth = 0.573905869171;
    msg.min_altitude = 0.792686615131;
    msg.max_altitude = 0.492280462598;
    msg.min_speed = 0.213154240592;
    msg.max_speed = 0.478416313707;
    msg.max_vrate = 0.777024212754;
    msg.lat = 0.205488529702;
    msg.lon = 0.324948729163;
    msg.orientation = 0.875825921383;
    msg.width = 0.64781714177;
    msg.length = 0.603044416732;

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
    msg.setTimeStamp(0.143592144605);
    msg.setSource(4607U);
    msg.setSourceEntity(3U);
    msg.setDestination(21104U);
    msg.setDestinationEntity(122U);
    msg.mask = 112U;
    msg.max_depth = 0.312303436877;
    msg.min_altitude = 0.146917840329;
    msg.max_altitude = 0.722625974428;
    msg.min_speed = 0.42754010819;
    msg.max_speed = 0.698056775681;
    msg.max_vrate = 0.702103528388;
    msg.lat = 0.004830881791;
    msg.lon = 0.147071018145;
    msg.orientation = 0.597895552719;
    msg.width = 0.190659937511;
    msg.length = 0.732912081896;

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
    msg.setTimeStamp(0.416929802496);
    msg.setSource(17977U);
    msg.setSourceEntity(176U);
    msg.setDestination(58400U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.109769441398);
    msg.setSource(10258U);
    msg.setSourceEntity(107U);
    msg.setDestination(41963U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.857993187838);
    msg.setSource(33367U);
    msg.setSourceEntity(1U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.724426682046);
    msg.setSource(25205U);
    msg.setSourceEntity(21U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(90U);
    msg.duration = 26715U;

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
    msg.setTimeStamp(0.361822064529);
    msg.setSource(3730U);
    msg.setSourceEntity(189U);
    msg.setDestination(19279U);
    msg.setDestinationEntity(19U);
    msg.duration = 4610U;

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
    msg.setTimeStamp(0.029969109599);
    msg.setSource(57576U);
    msg.setSourceEntity(104U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(102U);
    msg.duration = 11326U;

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
    msg.setTimeStamp(0.00242599923013);
    msg.setSource(11906U);
    msg.setSourceEntity(1U);
    msg.setDestination(29691U);
    msg.setDestinationEntity(189U);
    msg.enable = 220U;
    msg.mask = 1987230635U;
    msg.scope_ref = 2133924469U;

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
    msg.setTimeStamp(0.00369270267812);
    msg.setSource(47472U);
    msg.setSourceEntity(98U);
    msg.setDestination(63003U);
    msg.setDestinationEntity(188U);
    msg.enable = 86U;
    msg.mask = 500376637U;
    msg.scope_ref = 1784578692U;

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
    msg.setTimeStamp(0.130551140693);
    msg.setSource(1978U);
    msg.setSourceEntity(44U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(23U);
    msg.enable = 155U;
    msg.mask = 548992787U;
    msg.scope_ref = 2112355668U;

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
    msg.setTimeStamp(0.445816370732);
    msg.setSource(48953U);
    msg.setSourceEntity(2U);
    msg.setDestination(29310U);
    msg.setDestinationEntity(185U);
    msg.medium = 63U;

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
    msg.setTimeStamp(0.519514891531);
    msg.setSource(61074U);
    msg.setSourceEntity(188U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(234U);
    msg.medium = 187U;

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
    msg.setTimeStamp(0.518388316662);
    msg.setSource(63303U);
    msg.setSourceEntity(147U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(226U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.257674488327);
    msg.setSource(15407U);
    msg.setSourceEntity(126U);
    msg.setDestination(50822U);
    msg.setDestinationEntity(152U);
    msg.value = 0.558394633804;
    msg.type = 165U;

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
    msg.setTimeStamp(0.981021394031);
    msg.setSource(33153U);
    msg.setSourceEntity(163U);
    msg.setDestination(45353U);
    msg.setDestinationEntity(202U);
    msg.value = 0.569313745512;
    msg.type = 189U;

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
    msg.setTimeStamp(0.692972165511);
    msg.setSource(27226U);
    msg.setSourceEntity(114U);
    msg.setDestination(16480U);
    msg.setDestinationEntity(195U);
    msg.value = 0.765877947211;
    msg.type = 197U;

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.187524319582);
    msg.setSource(48501U);
    msg.setSourceEntity(161U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(249U);
    msg.possimerr = 0.0281491685085;
    msg.converg = 0.958928898533;
    msg.turbulence = 0.679055862704;
    msg.possimmon = 28U;
    msg.commmon = 12U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.872994094957);
    msg.setSource(27439U);
    msg.setSourceEntity(17U);
    msg.setDestination(13853U);
    msg.setDestinationEntity(108U);
    msg.possimerr = 0.670101887599;
    msg.converg = 0.672563836009;
    msg.turbulence = 0.570739778915;
    msg.possimmon = 68U;
    msg.commmon = 217U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.601853623879);
    msg.setSource(40080U);
    msg.setSourceEntity(228U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(199U);
    msg.possimerr = 0.262650142749;
    msg.converg = 0.390455551707;
    msg.turbulence = 0.227111765315;
    msg.possimmon = 96U;
    msg.commmon = 5U;
    msg.convergmon = 194U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.309945317506);
    msg.setSource(62387U);
    msg.setSourceEntity(111U);
    msg.setDestination(17237U);
    msg.setDestinationEntity(222U);
    msg.autonomy = 6U;
    msg.mode.assign("HYNVYMBEOUMLKWBJGHRHQTZCKHQYUDXEZDIFOSMZRLKEEBANMMLKMJJCPNWUKIZRUXCWVHFXAQDXZTNFSJYAKYEQBMXRPWZKPEODUVQZJSYTBNEAPBXCJVWYAASXKJGIZVUXFOIGNRVQIUORTGGRTWPSWHPJECWDVXFOWJNJODBFZXSS");

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
    msg.setTimeStamp(0.605307377256);
    msg.setSource(30428U);
    msg.setSourceEntity(31U);
    msg.setDestination(24958U);
    msg.setDestinationEntity(119U);
    msg.autonomy = 117U;
    msg.mode.assign("NXYYUXCJALWEZGIBKSQPFFBYZEKEMDEGRXJNMPZLINVGCUCNZLZTGUZKNZFYMIVSAFVBUEBULXXLFHGMHTSMPTBPCUCWDWOWVBHIAYOWLAQIYOGOORXBIESGERLOQPMXLCWUCQLMLBYIZQUHAIFEJTF");

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
    msg.setTimeStamp(0.451356518113);
    msg.setSource(55999U);
    msg.setSourceEntity(155U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(16U);
    msg.autonomy = 2U;
    msg.mode.assign("KDCYJQUQAJZKMXYCWNGTQHDYGYMGDCQJAQHRXPPOASAKRXSKXVOILFNUKXWDZLHQDXJXLIYRBFZVOQTQKXFASENOGNUMBBYMDSJOUVTEQFPZGHFTAJHLWRBKZCGESATHZGOVIXTDMWLVRVRWILZMSUIGYOMMZNSLOEPGYDDTFEIDLTVCJLRPULEOBNRJIAYPAZPWNMHBBUEEUTABFPUPCKWKZYSFQBKNSCXTHFCJBRCIHWMNUVSC");

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
    msg.setTimeStamp(0.417515871713);
    msg.setSource(34435U);
    msg.setSourceEntity(131U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.528237109039);
    msg.setSource(11990U);
    msg.setSourceEntity(14U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.527546785842);
    msg.setSource(24065U);
    msg.setSourceEntity(61U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.746375551005);
    msg.setSource(21905U);
    msg.setSourceEntity(74U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("UQGPSKFGHWOMCKSPWDLOJEZSWOYZHCWHTHVNTEQONINISTTELMRLMTBSLCCLYOJPRBCPQNDYRXSJUGQMWZPTDQBIIEXIFLPUAYLLJDRXGASYOHQBVLVYJNVDGTZIPZBFUEORWCXHUKWRDUZCXMGAZIFFODPQDSYTUHXNBRNQKKYHYEZUJSXTZMVNPWA");
    msg.description.assign("GQMELDNDOZFXBEOUEBYBJCVJXHHHPCHQVVBNUUWZXONFYKPJWRGLUOXQXZSPHGBNRJAZICEHCTFQEZYTIJJGDVSAOHKXBTJOFORNUWADPRMSRTFNZSNIIIHIHKFTYCKQVH");
    msg.vnamespace.assign("ZRGSMKIHPEJWQDFHSMFTWCBPVSJWBDEYLYNJYLIHEAHPCIXKFVGSCTPXDCJKRVSWJNOLJKJRSCOMUFBWRQATRMGNQXHDEOYFSSGHPPLJRNOUIAAOKWHAXTNNKYYZKZAXQIUVMHGCTRWEBNEQEIYGWBYSXBLOLBBPDUOBNDZUQQTLXAZXLMIUGZKJIFQLZTURVVFUGMTDVAMTGOCVRDJPMQCZEGSUYXHDIOEPCZNOWHFVKFXCZWDAP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WSZGYCZRBOZNLTBRSRIQADJUDCOEHSRZRYSKMSNVWFFJKMQUBMDGWXBTFOSHNZOLLWVEMAJCIZNHYLHELGITTEUMIQSONAEWXNKBDF");
    tmp_msg_0.value.assign("NLEQNAXGETMQYAAUANIDPPFAFOYEJBYGQNQUD");
    tmp_msg_0.type = 64U;
    tmp_msg_0.access = 142U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PVZPDDGDUMWTZRNBSDRLCBNNSIQQMBEXHYWCKRJIZVCVJRKGDNZETHPHMHNYLUFOAVECTUOUXWPESKFDRXAPDEXZSMXTJDVFJGYWUQBLFXHXEREUABDRMBIASZUQHUJLHTQCAYOPGLYTRKWZONIGWXWGEFBDSIOQLJFGTNVPMMPR");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EROSCTQDPGUJICMMKTNNCTSSMSTWUWIFVAWDXBBXIMGKLJZMQAPGOLRPMHLZLPYUJIQDCEKXKTGOZWPSBROHEGXUGFLKLVALSHXYHRITKYTOQVJGYOU");
    tmp_msg_1.dest_man.assign("BRFQXTUYAIOPTNILWPMYAEHRITVXOMOOVKZVMFYWEIYDXVFWJZZIZXMICVOUBCBSRESBNSWEANEUCPLADBJRQHEHAPSHDYSHOZQHWXFNO");
    tmp_msg_1.conditions.assign("DHONLIZVWKTRFZAXXOKFDSIZUSTSAMNE");
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpsFix tmp_msg_2;
    tmp_msg_2.validity = 31664U;
    tmp_msg_2.type = 11U;
    tmp_msg_2.utc_year = 58401U;
    tmp_msg_2.utc_month = 240U;
    tmp_msg_2.utc_day = 251U;
    tmp_msg_2.utc_time = 0.279085174217;
    tmp_msg_2.lat = 0.154710786043;
    tmp_msg_2.lon = 0.997799763966;
    tmp_msg_2.height = 0.0119209165803;
    tmp_msg_2.satellites = 6U;
    tmp_msg_2.cog = 0.869085033018;
    tmp_msg_2.sog = 0.247642264499;
    tmp_msg_2.hdop = 0.224384210356;
    tmp_msg_2.vdop = 0.932328843725;
    tmp_msg_2.hacc = 0.441628244123;
    tmp_msg_2.vacc = 0.433762899935;
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
    msg.setTimeStamp(0.167340825505);
    msg.setSource(41422U);
    msg.setSourceEntity(91U);
    msg.setDestination(1094U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("LFGCKGBOGVKSJYPCIPNZRN");
    msg.description.assign("VONZVKXECASNKRUTMJEFIPDCQOMFYPIJCOHNXOXLETXCHDRXRVUCQEOSTFDYECHSANEAVTMGQPVFDPPGALHUUOAGZJTDEVIJHAXTXWWJE");
    msg.vnamespace.assign("OUKGBPVFZRMGXKJNBFLOGSYSBWHPQTMQEAKNALUWCNANKMCYCDJDVVIXIJIBZPD");
    msg.start_man_id.assign("ARVSGBSUFGPHCKXULNTB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DCJHZMVQBVTEBMMZSHAFYKUFNQFZSHPJGFSU");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.772919127419;
    tmp_tmp_tmp_msg_0_0_0.z_units = 58U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 13990U;
    tmp_tmp_msg_0_0.custom.assign("LQKWBGCJFYFTUMWFIULJNSCTLYIFVCAKZEQRMOFJODLMDXZCGY");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Abort tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZEZNAYMJLSHUKSNRUAEBJWOYBOCEFJYUDQFTFQCRLRVMSXNAAJJQUBBJZWCMUNZKGPZLEODAJIHBTEHXGDWUQBNGWXIZYTQJPELWYTLXNMFEAXAQSDIKZKLLIOIICNVSOHHPRSDVGUITVQCNDOMKGVTRH");
    tmp_msg_1.dest_man.assign("KFGRMPUMJQLGIQLRSZMAQBMTXCYYKDATAEJXUQTWPKDTJYULVYJVRIWHSWSEAKQMSPWKTKAWQJVLUIZPXEHZGVWOJFFUNBMYVGUCSRPYMHUACGRVHXN");
    tmp_msg_1.conditions.assign("PBKPXHLTQHCGTSOXIDHCGSMOPFTZRQUEVCFAUYZCINHWGNWNFIJRJMRDIGTIMLI");
    IMC::Pulse tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0654375683739);
    msg.setSource(64799U);
    msg.setSourceEntity(238U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("GSIROVQFIYHFFELASYCPINNWBUCGWUJKELEGTALYDSEAHRIZIDMKVVGTTLAOSWTYJACFKIUPOFIVSQZJYXUXRUTPLTQREDSOZJZOAJMHUNGCNVRTBXFXHPOCK");
    msg.description.assign("OFTQWPXGKQNOUMWSXKZIUBIWOSNWNBVJHJRJTNBRTXZWHLHIDOLJOSKPGPEPNOASYGZDYRLDOZR");
    msg.vnamespace.assign("XPBTSAWPZAAZEHXRGSQGKPHOIMPGOUBJGEGITLKHFMDOKSDZONUWXYRJJRVQJGZMQOSFIBDZKVJIGLDFZECICNWLFKRRXIIUVCHCDWESLLVTBUJYPKVXNBOLKMZMISRUELYLNPFWTCCAGXQWPKSJQEASYBPDUXIUZVCSHNBUXNEEPDQSADTANONJWHBGZOMJCYNJMXTWBIFFKBFQRMRGLHXRVE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZBJRQHNGBJQYXQVDRGPPQLYNADENHRKLEIOLQYMCFIBCHVALTGDWBLUCBSENWBLAWSGEMUNSJBFIHGYUBFRTPZFPOXSQHQDWJSCCZRCPMHFWYDVXZTAFJZFXVYKKCJVVINDAJYMHUVFBRSEODJCKEKIGRQCCE");
    tmp_msg_0.value.assign("AXVPAHKYDEJXUGXUTNJGBKNSNYDECYEEYOMDQXOVAMMUXPNDMCFKLFHWMNOHTLGYDMDOWZGTTTITZIVFEPZXEGFPLKWUUMKRBRAKWCQLIVFJSBQLRRHFKQURJ");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 54U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QVLWNGCWOKQLIMSNVOLNFDBLPQTKEXPFMDGFPWXJIBBUGDEIAMCUXCCJIWHYTVPAS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CHPKSJQEECWXNAP");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.901859016544;
    tmp_tmp_msg_1_0.lon = 0.278931819208;
    tmp_tmp_msg_1_0.speed = 0.432161515427;
    tmp_tmp_msg_1_0.speed_units = 63U;
    tmp_tmp_msg_1_0.duration = 12596U;
    tmp_tmp_msg_1_0.sys_a = 54573U;
    tmp_tmp_msg_1_0.sys_b = 30149U;
    tmp_tmp_msg_1_0.move_threshold = 0.439736248814;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityParameter tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("UDTIGDGQOGSCUCJNSVYYYPSSECWXYXVFWSUGURLWBPERKKAULPRATVIZOEOBYCIDEENLRBFNFDNTGOQKLXIPZJDXZNZAQMQUNPQRWHGBQLSMCYRRZIVJZSVGGHPVJMHHGV");
    tmp_tmp_msg_1_1.value.assign("YMYDUSMEQTISLTZRIGIKJSFKETMHLJSIHMNECAJKJLZNBSAKOBDRLXKUHOZRROWMOXUPEZHCPGJXGFEZZAMYFKJFULKRZFDKOAHWJRHYFGAUCQTWIDNVSPQYZJOOWDTNQ");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::VideoData tmp_msg_2;
    tmp_msg_2.id = 66U;
    tmp_msg_2.width = 8044U;
    tmp_msg_2.height = 43185U;
    tmp_msg_2.widthstep = 27114U;
    tmp_msg_2.channels = 148U;
    tmp_msg_2.depth = 152U;
    tmp_msg_2.finaldata = 72U;
    const char tmp_tmp_msg_2_0[] = {61, 110, 15, -85, -122, 90, 88, -110, 62, -25, -67, -102, -30, -119, -38, 44, 46, 54, 2, -128, 47, 62, 9, 40, -113, 56, 26, 116, -122, 32, 120, -109, -44, -21, 114, 112, -100, -14, 34, -56, 97, -6, 39, 31, 46, 71, -96, -45, -104, -6, 23, -126, 107, -8, 3, -83, -49, 89, 46, 110, 110, -54, -24, 79, 15, -116, 95, -7, 111, 73, -53, 93, 79, -54, -100, -104, -122, 119, -83};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.277164287999);
    msg.setSource(22641U);
    msg.setSourceEntity(57U);
    msg.setDestination(61929U);
    msg.setDestinationEntity(9U);
    msg.maneuver_id.assign("KYJMRABLVHTZESBLPKGTQVCZDPEXAMWGITGFKYBAQSQLUGMZXNSVPXXXTIDQGIULNNCBHQEZSMOVKLTNDJBRSHSQRJNEPYEFKOECRIBJJMUKCPFWT");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.488891329027;
    tmp_msg_0.lon = 0.972643526009;
    tmp_msg_0.z = 0.668678585508;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.radius = 0.193324078493;
    tmp_msg_0.duration = 41563U;
    tmp_msg_0.speed = 0.00198552508258;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.custom.assign("WIYUBXBGOAGAODCSUJFLVDKAKYUAGQMRJVGIHKBOVLYXNPKIWAHQEUAHXXNSGOZGJWWMAJWTBGSTNQRNOYZVNJXVFQQTJTOMDLCIBLELYAGPSCSFEVMPFRCUMJSLWVRTQRXUPIJBWDNOCTZQCRSHEYTQXLME");
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
    msg.setTimeStamp(0.781603271049);
    msg.setSource(36786U);
    msg.setSourceEntity(95U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(167U);
    msg.maneuver_id.assign("EQRXFVAHCIFMDTSNOEMRNYCPHUFTJTSNJTOABGOAMITQQTCOZGNDQPIGZJPZVKBARYSKLKLVBKFYCVVBKHETQWGRUELLLCXXYGAOVUPMDJCIDJHXWVWBLUMIMTKFRMAQWRKGL");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 3240U;
    tmp_msg_0.custom.assign("NJFQHLTCNFIZZHPOMRRSLLJYJNOBGIYAVWWTDUCVQEMMPNCOHGTHZOXZBJLPSQNQGVRRSXRISPUFBBLOZLQAJVKAWTWHHMPPAFOHIEZDDT");
    msg.data.set(tmp_msg_0);
    IMC::EulerAnglesDelta tmp_msg_1;
    tmp_msg_1.time = 0.756966833999;
    tmp_msg_1.x = 0.513800862258;
    tmp_msg_1.y = 0.251952052722;
    tmp_msg_1.z = 0.91277262693;
    tmp_msg_1.timestep = 0.37366507841;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.943149282866);
    msg.setSource(55830U);
    msg.setSourceEntity(209U);
    msg.setDestination(26165U);
    msg.setDestinationEntity(66U);
    msg.maneuver_id.assign("OPMYSTCQGTRTOTVHPYAZIWKVYCISDHVOZGFWCSSPZGOQJXUKATWNYEFKKB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 21951U;
    tmp_msg_0.lat = 0.395598233316;
    tmp_msg_0.lon = 0.10726370916;
    tmp_msg_0.z = 0.88740883417;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.0917309116521;
    tmp_msg_0.speed_units = 81U;
    tmp_msg_0.bearing = 0.745073976447;
    tmp_msg_0.cross_angle = 0.265378059513;
    tmp_msg_0.width = 0.645626648163;
    tmp_msg_0.length = 0.0675179290811;
    tmp_msg_0.hstep = 0.836115080947;
    tmp_msg_0.coff = 156U;
    tmp_msg_0.alternation = 137U;
    tmp_msg_0.flags = 56U;
    tmp_msg_0.custom.assign("PWCTXJSCVHKTVTZTWNXWMNIZARSCJOMLXNAIKXGUHUVYDBQKFFLYXDTGURWMQICSHWIDFTPHULYUVELYYGRDFWNDEPBFDEOZCYBCBHFLUBVQDIERIVSCJXNMZONMJGPLDUAWJXMZSPGSMPQPFJADGLJXFVSBIQPACBLGGOOESVTLK");
    msg.data.set(tmp_msg_0);
    IMC::AcousticDiagnostic tmp_msg_1;
    tmp_msg_1.enable = 131U;
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
    msg.setTimeStamp(0.682722871432);
    msg.setSource(36168U);
    msg.setSourceEntity(142U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("IDNWZNCYRBUXDQIALH");
    msg.dest_man.assign("ZXEMPWPPYMAQVFMUWRQXNFZEC");
    msg.conditions.assign("DXXEDNQGHXYEFEVLEIPIUZOJTLIZTSLCYHQGUCNCHTAAMTCXOSQPCRNKWYFQSFAMEZUJVOOTMKYONIUMTOVGPAHMBHFDVGWVKCBBEVTBRZKVQDZFYXFLEMICGWJAJCNKODLSHIZIBLX");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 86U;
    tmp_msg_0.step_number = 88U;
    tmp_msg_0.step.assign("TFDILTEBMCJGFCTDQRKHJPIBZWFABEEYZJQKOOSDQQFNGPRLWCLVKSFGUEIEZJZVPNRHAHSAAUODFETNCFEWLBNVDXVLHMJGMYOEDPPTRHBBDAKLXWKBWLUURRLYRYOVAMMBLRKTWCNZHMSANAYKUQRVONCTVGIIOUIVQZHPJCPZWZFQBSUFSWQAXJSXESYWJQVLYGKYYIDXXUMAGCBSKUNCH");
    tmp_msg_0.flags = 34U;
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
    msg.setTimeStamp(0.663178809713);
    msg.setSource(38126U);
    msg.setSourceEntity(6U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("HGBZYEBPPNSDIREYFVAXNTMOFSAZSGZOPHCUPVYQETAGIYSXICHJYJYRKJLXONZPCTOUMUEY");
    msg.dest_man.assign("ZKQRSECBIDJCINUEFZTGJACDBOYQSGYRTPVLBASRJIHPQTQPTPTELNLXEOVJDSXRVIPCNMMFUJABYCQMYRLJEDXQVALUKHSBOAHNELIFWVQXBTGZXFFOWBDGRFCMHMDCOMUSZNOKULJGNNVHWWUWUABSBRXZQVWGXTDLIUUEVBHKDTPJAQGOWNLFEATIKUYFYACRMODZYGTMJIKDMRRAWQSGKMNKEPGZYXVHOKVIC");
    msg.conditions.assign("QDZFASSIITMCIHNTGPIDW");

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
    msg.setTimeStamp(0.622358102532);
    msg.setSource(58040U);
    msg.setSourceEntity(28U);
    msg.setDestination(42975U);
    msg.setDestinationEntity(246U);
    msg.source_man.assign("LMKRMYKAVJCEXVVLJGICTBFOTHMVHSPXDBGFWRZJBVUOFQGGIHWUGUYQYAIRPKKSADVTWAMYSYZAIPLEZJXUCATSQCLLTTMUTRICSMJUBXRBZXCFJHSYPJNEKVWREFSDVODZARUODOXPWYCOOLKEJMZMHA");
    msg.dest_man.assign("YGHURMTIPDGQLEVLJSZFCAUXEYGSXVVAIXXOOPAAZPFYTRHQVWENTTRYGDLIIVPCLZSDDERKWYLEUNZGRUMYUKKORDBDHZNJNMJQZKNNSMMKHAWKKSLBBICBJGXVUQDOSVZQTPMJWFTBAMCECUFYADPTOQKUFQNPFOVYSWHAJFXCJYXYBKISMMDSXDCWPGRLCAPHQ");
    msg.conditions.assign("YJAOHYUKTQRQETISBQNBGOJKFGDVXLMWORQLZLOGHVVNPEJFMECIILFDECZPMLIRWCOQGTLVSWNCVUDONSSJXYQAAJCSHWXMADOZOYFJUQLT");

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
    msg.setTimeStamp(0.0144859788631);
    msg.setSource(25174U);
    msg.setSourceEntity(19U);
    msg.setDestination(15110U);
    msg.setDestinationEntity(26U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ATTETQIOXFSBVBJMIJHRZRMWYYQNRDINQVPZQLEXAMGUBDESGUGAFDOVOLLOXSECMMMWTXKJXWNXXOSEUPJMHSWIZNMLGQCBQLRZHPDLRSBTAZNRWFTPXPNVBQPODENHCGKMHJCEAJWEYVLIBJRPVBJZCLYXPYVKLEDCYRGKKAYFWGOTRHFWDU");
    tmp_msg_0.description.assign("GOQZLMXDONTPAYFPRZCFIZZVLNOYWRGNQKERMCYP");
    tmp_msg_0.vnamespace.assign("VJFNICAUECCHSGZZWRZXHVVBJJOEZJHDCPQXLMWHNXMIAWYFTYTHYMC");
    tmp_msg_0.start_man_id.assign("GKDPMSTVWMDYOAYLIBLUJHCQVNFPFBQHCOGDXRJKPQMZJYGILXGBXFTXNANQCFDXGKHKZTHJMCZGDURAYIIGABNSCFMRUYRPBQZJOTYOXNVULHZORQWBTOWPBDBUXIHMNKIDQWHGRUSSXQVOPJSSLMEJEPESEITKIVFEMXAAEPCWSODNIQBICELZDVQKTNKNLCHWMFEVRENWJUJFFBYKYWAWSULZTOHFGUZVYRV");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("HLMOZXMZIALMBVTYDLZLEYYDKQJZAJMOCRSINZPNSPJVWDBWSAYSZINLHWNXCEZYLMIDNQKETFPHAXIGMSFLCMOTFMHFXYEQHCQOPGTXVCRDHUVIQAXCDGXUMBBJNVGKWQEBLSCGPCTIWSIPFPQDQVUSETYARONGREDBFJGGRTGBUYVURLRNYPDVHZUUZHFROOWFAUKAYWFEJTGKIKKOJOQCEFKJAUBTWOJNSKJLHAZMHBSUVWPRVT");
    tmp_tmp_msg_0_0.dest_man.assign("AVGIMXWSIEUJYFIBBGYGJYSJHPQWESFXPAOSXJLIDFEKYUFGHWEODVXKBUPWFRFLRQCTTVIZIJZGEMEJMDIWVHTXFQABRIAHJPHKASAKQWFSVMD");
    tmp_tmp_msg_0_0.conditions.assign("DOJKAIRENEWZZINEXHBJIGJJNQKARTDOWHQJMRQVXPZJLAAKCRQBFHKUSQXNSPTGFAQPEMRVZDEYKJ");
    IMC::Announce tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_name.assign("CSFQRRBJZXLVMKSWCTPWHWUAMFTXIDTNDLKSTFNKEIPOTHPQPEFIYGNAGTTVQGGEYJJMYSCQODABFQQHCJXZNNRSZBUPLBMOALHGYCWMRUKDHODACUKIDTWGNEELIEMEXCKHJVREAJQVXWLFCXJZOYZIRUBYAXGBMHJVURUOFDZNGKAPOSATDHICVEGXUDXIOHZVKNGDCUALNJRXQJTHZMVYWLK");
    tmp_tmp_tmp_msg_0_0_0.sys_type = 58U;
    tmp_tmp_tmp_msg_0_0_0.owner = 21333U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.60240233402;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.341564078803;
    tmp_tmp_tmp_msg_0_0_0.height = 0.159673349596;
    tmp_tmp_tmp_msg_0_0_0.services.assign("LARVPESVALLCYKIDJLMDHAIRCMBCYMGZTLJJELBIUGDPJUWGCWVFXSIPRPCBXVURZOJXFWRIVDITEMWKXBXVHBDGCBSPKVDCZNLQSLTRSMJPRWJOQHCYAXAKNFMQVNVUKURSZFODKEMJFXEYQYJTFUAKZOKTHIIAGNHHZLEXIETQCGMOIWDSZREBJAYOYOUPOBPMFNW");
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.250551167547);
    msg.setSource(325U);
    msg.setSourceEntity(252U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(159U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XCLYNOKIKHXHVCQVEJBNBGJHSTVBOAZAQCIRJYQMERLGVHZIFPQTGBPW");
    tmp_msg_0.description.assign("RACYZAZUAUMZKTWEKMLLPOLPGROGJESYZIXEKGPCNJOASTQAFPKRXSROLN");
    tmp_msg_0.vnamespace.assign("BHPDYGERMVPDVFBLQPHBRKJVZDFVYEAETWEZHFNDMOXCTJOQNQCNHNDOBZHONMAUGLXBSEZQVWBUBRPIYIFXLEGLUQOHZSFBQYJLOJILSAPUECB");
    tmp_msg_0.start_man_id.assign("AHVWDKDWZWZCHRMQAXOVZBQLZLBWFVJFTTKAGYTRRDTDLYQFRUPNSIOMRRW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ODFLKXAPSONFGMFJRWTAADHQVXCCUXSINXXRHCZIAEINGKTXKBMNFHSJEUJHVYJFOLCANINLZWYXRHGCPPVWUJIDDLUTZTCVOLEGMYTWTKWJVNAEBZVGRFVIHRDCHSYRLDBMUGBQOZMFDJGOTXZREOGBLJBWJRIMAAPQHQWFAHAKUSNFYSLICBSPDZYVSPMKOEFDVPNGHEUXPRUQLBMQBKIZSBCMRPWUYTKPIYKTMXOEOUCGDQZ");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 2166U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.659622381795;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.704469609453;
    tmp_tmp_tmp_msg_0_0_0.z = 0.308917444257;
    tmp_tmp_tmp_msg_0_0_0.z_units = 146U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.407381884734;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 48U;
    tmp_tmp_tmp_msg_0_0_0.duration = 27116U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.587705113805;
    tmp_tmp_tmp_msg_0_0_0.flags = 107U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SQZYOYFLBNHOMGQRSFUTBSXSEAYTWVDUKNJNFKNSUFAXCHGTMQNOFLNEKIVQUJSMAYRYQPBFTGXWKKGBIRWSDHJTJCDNNKAXMEFXEFLOQWZIFWLAZKMXEPRAAWKECQMBCHKGDEFJTDPVLIRZLDEDLUQHVEHROUMJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CacheControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 11U;
    tmp_tmp_tmp_msg_0_0_1.snapshot.assign("WLUUDLULQBXNSDPGKSJQBLKQNFJRLBLHCYGJTKUSKXIIESDCOGDTPJCQPUGAWSMFZPREOFKYDJQPCBUBXHALWHQYIWFJGLGOJGMTQKXITCFOPMDDZYSNIMPRKUZHPEWNYZKAYRTFPAWXWHRNXAOSJPBEDEXVN");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.name.assign("ZHIMUVDJVZKSQXPLQDIFHPGRTBQOSZAAUMAWJJKVVSCNIFDDGRHWLEEFZIOLREEMBHPZDNKUWNWWQYLUAZTCCXHLEYBKHQHJIFGOXDIGDGAEHGMIWPROQSYPCBCFSBIXVJNEGBWUBXDMIETMKNNRSNPHQTUJZOTGMJUCDFNVNLLMCBYVRNBXOVGFVKKBY");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.value.assign("SZFEOVCARRHGWARWYKRMXAKDFIDGPQJZUDNBKKBWOSXQQHUFZCAINMJMSPGJQLTYGSAN");
    tmp_tmp_tmp_msg_0_0_1.message.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PEXSEJAZYIPOJKJFEZNDGXDLIBPTSUDUFGCURNWYAERZNBCRRTSMPFLTMVXRGQDEUQZSZCWWJMNSMTSHAIPTBFPCEAIAGVDUCLKPNWTQCRDUFPJSUJHOFVWEBFXGHLKNCOOGOZOSCHKYYTZBIRAEIXNFWCAOLHRXYZVJOIYGMSXQLLPVWUVKVKQNUKHLMMFLHIKTDDOWEXBVXJQEGNQGRTABVXDNJDKHWJQMQKHSZQCWRBAZGIOPYHBFUYBT");
    tmp_tmp_msg_0_1.dest_man.assign("JHDUMRROJYKWPCJBMOEDVSIQDXBVXXIBNFFXTCVHZMNCMYGLUFGRHRSDFTEXHAWKPGYIZAYZEOWDMRNPSSJCNNKFDKNUSOIWC");
    tmp_tmp_msg_0_1.conditions.assign("MPZKWZIKMJYQDPFKNZENNTAKSBUFPSVRYJPACYNBFIWEZTXHMGLALTCWRCUCHZOOVASMURJWEDLBXLGWKRSTFBXKLROHWYXNWHJUGFHDCXSSDFIUGDLMYNYQPPCGPHJNKPHAGDKETVAFOCNBUTXZEDLIVFZSQABGXYEIQVIVQRBTZKXSHWVECXDYGVTEVRROUMAZUPJYUEHJDZMCGLLNKILIJBONPEQCMGYDTJSAASOOBIBWWMHJFX");
    IMC::AcousticNoise tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.summary = 30U;
    tmp_tmp_tmp_msg_0_1_0.level = 181U;
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
    msg.setTimeStamp(0.750464273964);
    msg.setSource(55761U);
    msg.setSourceEntity(84U);
    msg.setDestination(45743U);
    msg.setDestinationEntity(131U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PAMPGETHJFRSKADWSXLLANICGNDFNWLAPNQMTMSPBTJFPPQDNCUVVGVVFZRECEXYBGSKHZRQDXOSJWQRSMHDFNXKUJVJQHUATWHTWHBBKFTVYIHCLCOOEZULFPLIEXUYPLIVDTKQYCJTGULYXNEXAOMYXDARIRIRCPDVVJAGNSKQUMLXFOWWJKEJPDCMSOGTGNZWMVBCFXLYCJBKSYDBHAG");
    tmp_msg_0.description.assign("HGQDFXTLGVEJYIESCPBIEWUTSQDZTNYYOQBHHAWVMJSAUAOBYBEAVIXGDXOFXSICEPEKLNDTBYXEUWIW");
    tmp_msg_0.vnamespace.assign("WIZTMLLVMYRESMISJCIZWMCLUBLGAYHYCBPOYMUGXXMYWJCFFBWVZJTVQWKXJAUPVKGKRZIDTNNXUERSOQXBRCGLHLEMEANBEKFWDDXMGTPBNRFLPLAWHEVYKCKNJVRPJTOIPDTOLSIHFGBRADZSAHSURTVQGSNPNHXRCXDQXZPEJHENXDUJTBDUFSSFKTBREGFJIKCFMVIUTCNIQULHDMZWOFQZAYQGEQVAHHPZQAVWUDYOWZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IDBCGOOYECYPVXKBNOVKMFOMSHZBCXKCTJKUDYQRSAPMHGVMHIDVELPKSBOJNYFLMLGUZXHGKROBYQUJASKURNSLJYTQJAJCCPWCHBASGDPGTVGRXHTGMCSSRXEQHWOTZHBUCNLIMRNAHNMKQQFRVWFYEZUXCWKFAAKEJLZWSAAFBDZYYXXIIMEQWWRYDEBNZZNOTEPUOAPUDLNLFWRXUWQFQRNGDZDFPJIVIVBJEFVWLISIVGQDHOETU");
    tmp_tmp_msg_0_0.value.assign("FZYKBACEFVKDPEQXHAYYDBWQIHFWILNUOLQIGLPXHYFSGTRJICZZCMKIVXIPEASTRRWAHKVXWUJYAGWNEMOMBWOEQFKLGNNGNUKTCGJKMAPZNQMUVPDHCWLDVRUOCJBYVULOXPJGGTTEJXNSYSRNDZQHFYBUWATPDHVZSJESYLEDOYQUAT");
    tmp_tmp_msg_0_0.type = 126U;
    tmp_tmp_msg_0_0.access = 123U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JVVSPHOWCNMSAFFZDVXEYBXZWKOMIIEGHUGHRESUAHHKXFRLBRBWAROYXFVKMIONQUXNRPDXNGLWOBGJOKVPBTIQAJVWLCCGITZYAJYETZAEBAVUGHSLGUYWIHQHUOYARQACVMBAXBJWQPMSJMGIIOFELZZBUQFTKUKWDNELXDSQYED");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NZDJZSDFZDLMOWVRSMSQTGNCYNWMJZEODRTFQZRFRAXQUPPHREWOJCNHYYIOBASGTCSECKOPPMESNWRIFMEHPGNVVUKJEJLMZSAKBYRISYUFBELMBMKFFHXIMXTKLXBGLUOGEHYQUJTBDJDPTIVWZQOBRAPAOULCVNRGAEUXICQWHDSYRDJKKIGWPCBAYDMQQLECL");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.716139969914;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.173530361397;
    tmp_tmp_tmp_msg_0_1_0.z = 0.320587057602;
    tmp_tmp_tmp_msg_0_1_0.z_units = 246U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.179363054718;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 237U;
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.693124291247;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KHWHIUCCSAZFVUGXFLNPEOHQJWHTJCZLVBCCZBGDYGCTMEKJXIGANCGDSAPHTXLHAYTWMATLDCKXQQIUTLWZFTEEXOMABGBMWBBOBOIAWEHNQMOJMLTSVNLFCPVRWEYKUZOKJIPPITNSSJHJUJLUSKYXGCZZSRGDYOXBRYWYGFRQTANXFXPQDPKKNRBYDRLQIPQBUZMWMVDISDAFRFUF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RawImage tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.width = 30169U;
    tmp_tmp_tmp_msg_0_1_1.height = 47359U;
    tmp_tmp_tmp_msg_0_1_1.channels = 149U;
    tmp_tmp_tmp_msg_0_1_1.depth = 16U;
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {18, 103, 102, -42, -54, -87, -79, -17, 120, -98, -42, -82, -127, 62, 125, -15, -67, -61, 33, -45, 29, -69, 49, 24, 109, -34, 118, 85, 46, 86, -117, 39, -20, -92, -108, 94, -103, -110, 23, -50, -29, 122, -14, 102, -118, -50, -115, 46, -3, -64, -72, 30, 126, 108, 54, 126, -119, 113, -5, 61, -92, -83, -99, 57, -34, 68, 0, -9, 34, -77, -115, -63, -11, 9, 98, 75, -125, -30, 81, -15, -59, 42, 5, -46, -120, 118, -69, 36, -23, -127, -31, 107, -65, -101, -113, 103, -1, -76, 7, 32, 105, -121, -80, 29, 28, -56, -34, 120, 105, -109, 91, 93, 93, 13, 76, -22, 35, 107, -54, -14, -124, -66, -60, 2, -126, 104, -11, 28, 55, 16, -107, -83, 42, 32, 61, 23, 123, 51, 75, -73, 92, -60, -76, -100, -112, 121, 85, -119, 106, 16, 63, -116, -76, 98, 87, -111, 117, 48, -108, 42, 23, -71, 9, 89, 10, 57, 85, 48, -99, -36, -106, 126, 61, -93, 68, 81, -77, -2, 123, 42, 84, 7, 33, -75, 27, 55, 85, 31, -100, 12, 90, -44, 85, -68, -109, 21, -81, -7, 40, 12, 21, -99, -92, 27, 26, 14, 116, 102, 48, -4, 7, -32, -79, -36, 50, 95, -117};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KMYEQIAXLXYBFBZUCLWQOLHRWHVMJMELJQISWOXMSNPDKMVNFPIPDOONGTBUZZEXRVJQQMZYSEBGPDIAVOWOHTNWBARGKRBCBPJQFQCPEDSJHCECVFGDIBQMIJPYSCXVUWHXYDYLFACTUTUIUEHIUXGMRMSKIJGAMKCLKACZNFZKZXZRGTNWPAVSHOQYLHJARGRWULENYTLDDSINOSUODXKOK");
    tmp_tmp_msg_0_2.dest_man.assign("DHERSUOWQZBEXFGBPQNBYDOKKVSWAFLWEYAOWHPZHLYCTRIBTXXMZJEPSGGENKSUTTIWIPXRJHTOIGBQKWAITUAITDOVNEXNCRJZYLRCZMQMPWNOZCMDVODNMRPPDXCHMMFMOTNXGKJHWHFQKCTMVLZ");
    tmp_tmp_msg_0_2.conditions.assign("HFIJWVTEDNAYXGQSHXOOXUSLTMNZJVNIXEXKUMENYPMUQYUTLKTAZCYTPS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::FollowTrajectory tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 36655U;
    tmp_tmp_msg_0_3.lat = 0.00492626620146;
    tmp_tmp_msg_0_3.lon = 0.18857680096;
    tmp_tmp_msg_0_3.z = 0.733873874927;
    tmp_tmp_msg_0_3.z_units = 130U;
    tmp_tmp_msg_0_3.speed = 0.88294493215;
    tmp_tmp_msg_0_3.speed_units = 225U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.x = 0.467198850464;
    tmp_tmp_tmp_msg_0_3_0.y = 0.880595244326;
    tmp_tmp_tmp_msg_0_3_0.z = 0.801634279275;
    tmp_tmp_tmp_msg_0_3_0.t = 0.84416544345;
    tmp_tmp_msg_0_3.points.push_back(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.custom.assign("TCNLKDBWUNFMHNSQOOUUHIEJFQOCLGMBKREPAZXBRAGADQMOMABUYRVICOTZRHIXPPPOFXWQTHGZBAGZYLJGLJXWEGWGIVWEQBZRFYBUNALVJJYCJSISEWONMLPKCSTTZQNNYVWRSKQXPYUIHSCQJSTZTMCZAVLDSTXGOUJXHKVBKFPTDDUIEXERYDRFGUYKWMTSVPIVNKFCREDZKVISDFFHHCBNEJYNMGBPQMWQDXIWZFUYOCJPLO");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.k = 0.926818458175;
    tmp_tmp_msg_0_4.m = 0.825075349785;
    tmp_tmp_msg_0_4.n = 0.584207544055;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.220475716196);
    msg.setSource(39040U);
    msg.setSourceEntity(178U);
    msg.setDestination(40728U);
    msg.setDestinationEntity(0U);
    msg.state = 149U;
    msg.plan_id.assign("JOPHXPFEYTDQAFMWNRGVXKIMMGUHXNLBSXLQKMNWNUDQVLYHZZHRIDRLZDWCCTRQYUSWACWZBDOLVFLTKZKEMYNGOQKCRIFZAYBRCBWPJFTYNSDQOQTUEKVYKEBDPANNQAVIRVAJFHLWE");
    msg.comm_level = 42U;

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
    msg.setTimeStamp(0.699924535431);
    msg.setSource(31840U);
    msg.setSourceEntity(97U);
    msg.setDestination(46357U);
    msg.setDestinationEntity(239U);
    msg.state = 13U;
    msg.plan_id.assign("RSWHMYGBKMRVZFYMXBFCVGKPNOWJNTGZXTKZNVOSLYDTWTAUARGIQFUMZQNLLLFJHKPZGFIGXQRHNTTWWTXPEEOCAXKSDXYCCLZVJDAJOYCQCVMRMRSJDIDIWNHTOXJDBAXGSHFHHEQVLTKIEYJYAROFGSMVUJNYOLQTCSPWUCDDNELDCUYVPBINQIQKSGDIKBAHEZASWWMOUIZWOUXLVRXPJAZBKEMEOFBBESIAVBJKUHPFZMRF");
    msg.comm_level = 198U;

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
    msg.setTimeStamp(0.960400690041);
    msg.setSource(17478U);
    msg.setSourceEntity(238U);
    msg.setDestination(24829U);
    msg.setDestinationEntity(99U);
    msg.state = 164U;
    msg.plan_id.assign("FQHNULSQKZURTYHV");
    msg.comm_level = 161U;

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
    msg.setTimeStamp(0.595699490211);
    msg.setSource(14418U);
    msg.setSourceEntity(46U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(23U);
    msg.type = 41U;
    msg.op = 163U;
    msg.request_id = 35497U;
    msg.plan_id.assign("HXAODUBZZQEGZGQZAGMHM");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.472555246582;
    tmp_msg_0.v = 0.838237624115;
    tmp_msg_0.w = 0.719316077328;
    tmp_msg_0.p = 0.904646645687;
    tmp_msg_0.q = 0.768902973177;
    tmp_msg_0.r = 0.196832403777;
    tmp_msg_0.flags = 184U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OFOYVUANJHZKFGFTNTTIWHBQWLJYMPIVKAOKBNXOVPLLXEYRQIQPZHMDZGOXXOQFAUPBGPKZZLKTXXWPBCMPRMQMSVKHOTOHLCTSGLFGKMOICBERZEBCNWLVTVXKIDSVDZNSFWIXGDEYOPPSUUSAXQDWSCCJCVEMUVMUBNBQUCRUGEUZKNYJCNLGYIHFJHMFLWHAJRBDWJHGHSTDXJVEMGYRJIAERADFADIAPQQRWR");

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
    msg.setTimeStamp(0.875749153772);
    msg.setSource(19414U);
    msg.setSourceEntity(173U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(161U);
    msg.type = 154U;
    msg.op = 126U;
    msg.request_id = 42626U;
    msg.plan_id.assign("OEMSYCWGXKJJRMFDXHEXBJUWELYNQAYFCDKRDMOZTJZQPGHFEJTUQRSIYDUVRAIPUAHT");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KWVRRBZPGANNENLVUDLVRLQOTSZDTOCXIULYLXGOWBHJCAGXEODPOOTUDEHTSNBMWOHRVYTQQMIKSFHSCKGQADFCMXNHVWIPAGBJVIDQARTKRWGWKFNK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXZDWMAVCPFUGMPJHQOMJEECNJVVJBBXZMHPRYLIFVXFPBZIFYJIVMWNKXGTMYXUIBBKAVPJDRRILZZINPQTOXFDQIDKLMHFNQVPCPNGITMYEWQHIBIGSKPCJLBENXZOUWWOROMPENFHWSQTHOGLUTSOEUCTKFVHOOUWHZKDFTWKYETXSUJXXQGD");

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
    msg.setTimeStamp(0.307539387711);
    msg.setSource(35827U);
    msg.setSourceEntity(184U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(253U);
    msg.type = 184U;
    msg.op = 209U;
    msg.request_id = 27950U;
    msg.plan_id.assign("WLVNDAUYAQSHYNBEZCHQNACIH");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2000476902U;
    tmp_msg_0.state = 203U;
    tmp_msg_0.error.assign("FTUASWXPTZHHIGGXCKYKSOPQVRQGONDONBSKBGBNJOOJCFQZLZWTOHUREEMWKZKVLYXJRVISSDYBNBZIFCANQPJWQGCOYCDQJCCUKLVFHJMCGVOHYQRTUECIUGKELCAUJFELALPZYRXJHIOKZFTDTDSNIOPJWVWMKZREWEUTMSUSKXBNTBENWVJXFLFMGUDPEBQLDNXXAI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YPWPNCHVTNTREOBVNGKPAJVWSNIMIFJGVSYLYGMXMMFTMPZXJXZVXSKQRP");

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
    msg.setTimeStamp(0.808854074581);
    msg.setSource(7793U);
    msg.setSourceEntity(216U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(19U);
    msg.plan_count = 38733U;
    msg.plan_size = 29992123U;
    msg.change_time = 0.0258657572083;
    msg.change_sid = 12691U;
    msg.change_sname.assign("EVMCQEKVOPZSVAUPLGBCBIZRKVLPCVBGKKMDJQWBKRREKYDNLRY");
    const char tmp_msg_0[] = {79, -43, -100, -55, -45, 29, -3, 33, 35, 122, -2, 44, -71, 45, -110, 55, 27, 91, -65, -87, -40, 57, 52, 28, -92, -69, -48, 86, -107, 35, -26, 113, 81, 34, -86, -104, 33, -15, 91, -122};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ARIPZPWVDJMTTAJQGKRUBQLCSFWHXWGPPDRCDTIZJXYFNYFXQYLNCGBUBZIGYMMOPKNNVQYRDHUBJDEMMVVVQAYAALQBTOFIMSOGRKBWSFSXBORZHIAUKOQPESSFFT");
    tmp_msg_1.plan_size = 53621U;
    tmp_msg_1.change_time = 0.295756528812;
    tmp_msg_1.change_sid = 14995U;
    tmp_msg_1.change_sname.assign("NUDHPVIBHJBPDZRYAZLIAFYWYEDMDJTOTVXPHFHYXRQGPLRDJPOANYIXKWKKJCMLMUEKDXYNCBPVRCSPMBGLGVK");
    const char tmp_tmp_msg_1_0[] = {-118, -125, -22, -25, 39, 75, -101, -18, -33, 108, -57, -53, -54, 50, -126, 28, -117, -99, 22, 93, 53, -87, 7, -25, 91, -30, -98, -56, -111, -105, -20, -98, 17, -93, 105, 106, -21, 32, -106, 89, -87, 53, -9, 67, 6, 18, 126, -87, -7, -29, 63, -128, 124, -46, -4, -101, 86, 121, 54, -42, -110, -30, -101, -48, -28, 8, 101, -50, 33, 117, 99, 26, -51, 25, 67, -64, 54, -67, 47, -19, -32, -107, -86, 106, -61, -25, 43, 107, -60, -38, 25, -71, -89, -123, 114, -79, -38, -97, 35, 118, 34, -43, 115, 79, 122, -105, -5, 102, -125, -63, -7, 87, -35, 48, 13, -41, -102, 38, 86, 70, 38, 88, 105, -100, 3, 52, 50, 115, -99, 111, 9, -89, -38, 86, -41, -76, -102, 46, -12, -44, -65, -84, 52, -110, 69, 34, 115, -27, 83, -29, 79, -121, 0, 35, -24, -110, -21, 8, -8, 79, 28, -73, 103, -29, 52, 59, -53, -66, 119, 121, -6, 62, -51, -5, 110, -27, 121, 33, 28, 20, 113, 13, -58, -79, 49, 61, -59, 18, -58, -113, -64, -76, 9, 5, 22, -100, -8, 114, -18, -107, 34, -3, 14, -3, 100, -72, -75, 124, -83, 23, -22, -18, -115, -30, 82, -128, -72, -55, -73, -7, 55, -123, -24, -83, -26, 17, 22, 118, 74, -118, 103, -54, -128, 75, -123, -101, -126, -42, -46};
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
    msg.setTimeStamp(0.367420716211);
    msg.setSource(5165U);
    msg.setSourceEntity(235U);
    msg.setDestination(13007U);
    msg.setDestinationEntity(66U);
    msg.plan_count = 55580U;
    msg.plan_size = 125707963U;
    msg.change_time = 0.562309015738;
    msg.change_sid = 49650U;
    msg.change_sname.assign("SSSKNBURHKXPLNJNXWIWVPAJVKHWJIVQTWFRQQDKNQMULVWZRLDTCCBPVDBDGHPZCAPWSRHAISDRZGJNIMYFCYUJMGQTKHDFNWKZL");
    const char tmp_msg_0[] = {55, -14, -44, 60, -96, -9, 41, 12, 108, -27, -32, 47, 27, -95, 110, 51, -9, -24, -71, 68, -65, -106, -97, -128, -117, 111, -3, 97, -112, 77, -94, 98, -127, -27, -74, -54, -75, 37, -72, -100, 59, 56, -109, -127, 102, -70, -32, -89, -53, -46, 126, 64, -5, 51, 51, -104, -25, 69, 113, 98, 121, -123, -116, 15, -48, 100, -52, -40, 55, 108, 115, 93, -16, 50, 11, -18, 11, 59, -23, 67, -65, -84, -32, -29, -113, 24};
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
    msg.setTimeStamp(0.694225678253);
    msg.setSource(22409U);
    msg.setSourceEntity(69U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(175U);
    msg.plan_count = 26991U;
    msg.plan_size = 722052388U;
    msg.change_time = 0.613444410403;
    msg.change_sid = 2456U;
    msg.change_sname.assign("WZOWFNCSUIYPTZWCGJZQUQTORZEQIUHVTXWUZMWSZZFHQDVBLEHFYMMNFJKWTHZKOEXVAOGUCTCRDHDUPAVKAHRKIARICCZEQLZQJWSEAOEJBQLMPPDVBIBWRFHBEPIMQOYV");
    const char tmp_msg_0[] = {-38, -109, -55, 121, -74, 45, -115, 67, 55, -74, -111, -83, -31, -125, 101, -29, -119, 94, -28, 85, -127, -42, -123, -23, -63, 101, 23, -17, -38, 112, 19, 97, 7, -21, 92, 68, 84, -105, -3, 14, -70, 68, 47, 15, -48, 111, -103, 106, -16, -80, 39, 108, -15, -67, -107, 46, -46, -49, 7, 16, 58, 79, 77, -34, 83, -3, 41, -83, 49, 51, -106, -100, -54, 6, -31, -115, -79, -116, -106, 15, -128, -87, -64, 15, -39, -52, -59, 97, -26, 123, 49, -16, -12, 33, -47, 3, 30, -4, -51, -82, 101, 6, -10, 72, 64, -28, -10, -91, -54, -126, -15, 109, -58, 46, 105, 69, 40, 33, 123, 24, -56, -39, 119, -40, 91, 60, -51, -75, 105, 29, -2, -26, 44, 9, 93, -76, 23, -56, 1, 115, 64, 119, -52, -20, -35, -70, -89, -56, 23, 42, -61, -95, 77, -28, 38, -33, 33, 115, -42, -128, 18, -73, -118, -100, 116, -21, -24, 76, 93, -116, -103, -26, 54, -53, 37, 31, 84, -54};
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
    msg.setTimeStamp(0.886195583255);
    msg.setSource(34329U);
    msg.setSourceEntity(73U);
    msg.setDestination(39069U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("UZCJOVJTHEDD");
    msg.plan_size = 15735U;
    msg.change_time = 0.673377240415;
    msg.change_sid = 21190U;
    msg.change_sname.assign("AFRZVBKMDUWTZEMSQRUAANJGEMZKZLNNUPWJCTSHFVDOBRITVLNCPQW");
    const char tmp_msg_0[] = {27, -18, -25, -1, 22, -111, -95, 66, 66, -84, -73, -55, 31, 1};
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
    msg.setTimeStamp(0.909541949472);
    msg.setSource(43384U);
    msg.setSourceEntity(177U);
    msg.setDestination(44795U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("PJKWJKEPQKPCYLKVMCCAJHLFYWOUCNAQESOIREUUVELGRGRWSDHS");
    msg.plan_size = 30036U;
    msg.change_time = 0.747043756102;
    msg.change_sid = 23609U;
    msg.change_sname.assign("QATUGINVZSUDHYFUXDAPBTRUJGJJOPUUWKRMHHFBJESPLOSPLYIKOYJZLGXAGDTEOYVUIMYGQTRJUBWEWOIQGAOMVQYFBZEHXRNSWQVFKAEIPMSSTFZGTJQEKXCNDODKLCMHCEIXLMEIROIRWIDBRYKBHPKSLKXHCLGKATLKTMBAMCLCVTOCPFS");
    const char tmp_msg_0[] = {-38, 90, 48, 26, 54, -103, -59, 16, -10, -82, 101, -53, 57, 124, -32, -59, 6, 53, -94, 38, -98, -101, -22, -95, -103, -104, -54, -116, 52, -66, -3, -2, -55, -6, -85, -17, 46, -106, 74, -53, -47, -38, -65, 45, -66, 13, 39, 113, 59, 74, 112, 74, -106, 100, -6, 11, 96, 68, 52, 14, -27, 99, -1, 41, 105, -85, -66, -62, 99, 84, 91, 102, -6, -30, 9, 109, -105, 84, 104, 50, 85, 98, -128, 61, -112, -23, -15, 120, 125, -29, -102, 60, 42, 39, 108, 101, 82, -81, 126, 61, -46, -29, 58, 51, 38, -33, -20, 3, 82, 16, -52, -97, -52, 114, 56, -54, -116};
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
    msg.setTimeStamp(0.536290542447);
    msg.setSource(25375U);
    msg.setSourceEntity(104U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("MZCMZTHWULVYRLABICIZZMREPZKTYPJSHPTKIYYXXX");
    msg.plan_size = 42762U;
    msg.change_time = 0.844580939963;
    msg.change_sid = 36117U;
    msg.change_sname.assign("JYOCOCORCHSQHEFXSBMJGXQ");
    const char tmp_msg_0[] = {93, -96, 48, -123, 94, 78, 114, -125, -99, 108, -31, -1, 44, 12, -46, 93, -4, 102, -34, -33, 13, -77, -63, 124, -71, 55, -3, 60, 52, 55, 105, -79, 75, 83, -15, -30, -126, 49, -109, 81, 14, -20, 28, 38, 16, -87, 12, 117, -5, -1, -108, -50, 18, -126, -125, -93, -127, -118, -53, 36, -105, 101, -51, 41, 7, 111, 37, 57, 77, -1, -63, 6, -3, -19, 1, -30, -121, 119, -116, -28, -13, 36, 86, 56, 18, 2, 109, 56, -88, 84, -110, 126, -100, -20, 89, -67, -23, 8, 70, 23, -124, 21, 57, 72, 60, -27, -30, 119, 22, -65, -17, 104, -22, -16, -8, 77, 69, -114, 33, 36, -96, -109, 120, 5, -111, -82, 74, 4, 10, -85, -68, 49, 117, -33, 125, -77, -114, 29, 37, -17, -96, 48, -31, -111, 108, 90, -37, -73, 23, 29, -5, 78, -43, 100, -89, 119, -6, 9, -95, -116, -127, -69, -97, -33, 17, 104, -83, -115, 11, -85, 53, 67, -22, -49, -45, 19, 113, 2};
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
    msg.setTimeStamp(0.986478391097);
    msg.setSource(39709U);
    msg.setSourceEntity(2U);
    msg.setDestination(61574U);
    msg.setDestinationEntity(14U);
    msg.type = 196U;
    msg.op = 79U;
    msg.request_id = 49514U;
    msg.plan_id.assign("BMGEVGIUBFGKWPILHRNHUYEWDJVFWSIIWCDYZTLVLKOQUOEFCVYJFYMLMANMBHOXFDOUMESVOOFPXYRBZMAQWOPLPQHJQEJORWHPWSADCBXTJUTCYPCZRVGUNYEASQGKNNUSDEUZIQHTCNSXSBNBBMSHCWTTL");
    msg.flags = 15252U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 26122U;
    tmp_msg_0.control_ent = 197U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.69836948794;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 18U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.775351556378;
    tmp_tmp_tmp_msg_0_0_1.z_units = 31U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.97939916457;
    tmp_tmp_msg_0_0.lon = 0.808697070061;
    tmp_tmp_msg_0_0.radius = 0.685201962532;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 32U;
    tmp_msg_0.proximity = 254U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BIEHQFXHVTYRNJYJMWQBIUYVZTCXNOQBIKAAVEDJJQZLJFSBFOBDMRGGUJBBNNGNUUPIPFLLIMCYRXGJWTUDIHHNAGUMEZALZSAQTAMGOIUYYCYZKTAQVVCBDEGKEKXHSOQSKNWFLHCTVEVXPIWXDSJCWVOWFQGUKMZEZTOFALWMFXBKZEMHOPYOEVNCYQLPXYVCCXAKROKZGQHJJIREDLPTTDSPZLPRWHRSMSRWTLRKXSGODPFDR");

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
    msg.setTimeStamp(0.961535902696);
    msg.setSource(18926U);
    msg.setSourceEntity(36U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(127U);
    msg.type = 27U;
    msg.op = 167U;
    msg.request_id = 1261U;
    msg.plan_id.assign("KGIPKXBNHDAPKDGMOGADZSFCIRIWHCAOSNJULKIDAXLZURKVUTJOMVXJNMSNQTGNYFNWZGGHINFMXRVIBPTKIBSPZQHYHZUCBRSNPJKUOTJPWACRQCTXTWZPLDJBGEGYHTUQLXWCIDVODCOMEHLIMOKDSMEZNSUFEYJWKAHHEJPXTDZVAOMYUSEIBWWZBAPYZAQXMEVGSRORBQFUHJRQFPJQLVVLXFETDRWQYYYFKSOX");
    msg.flags = 14732U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 179U;
    tmp_msg_0.zoom = 190U;
    tmp_msg_0.action = 42U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IBVMKRXHVNAGPGRWQBPKLGAAVTOLRWRUHXCHKTAJEHBUMAIUHGGEZCRUB");

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
    msg.setTimeStamp(0.875999621584);
    msg.setSource(30819U);
    msg.setSourceEntity(205U);
    msg.setDestination(907U);
    msg.setDestinationEntity(172U);
    msg.type = 107U;
    msg.op = 249U;
    msg.request_id = 1333U;
    msg.plan_id.assign("CSZLNXCRIHAWBTWQJUETGEACPBGMPJDUYDYTFFVHKRQPUFRWZGBXQECNBDLRAZMDVMUPFTPKHGTBHILKLMDIJCMWNRXGAOQTGAOPEEJVSGXPURVSTJSJAQHKXVNVFOZIOBDNKZOJHCUJIEBHXKD");
    msg.flags = 5575U;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("ZEAILMZQIRDJUKXABWTGQBJSZOAHSUPHRNCVSLKPMJKPNVXOVLIYCNERFVFMUMTVSHJRQVIJYFQYGZCPMIWPHICMYUGFNITIGKHWEMQWXXTPPCWELFDUXZBQBKTNSOZLDFFNSETAZDORQYBDULFAQJCAHHEOAVGWEFIGUEHHROVAKRAJSDYGFTKDXOBXKTPMMCZSOVCXJUTDUDWYNGXUNQZNNWTQSGOIEJ");
    tmp_msg_0.htime = 0.169533818163;
    tmp_msg_0.lat = 0.469707925007;
    tmp_msg_0.lon = 0.721037271182;
    const char tmp_tmp_msg_0_0[] = {110, 87, 91, -70, 17, 81, 89, -124, -2, 91, 14, -43, -106, -118, 84, 48, 54, -119, 119, -115, 53, 43, 98, 83, -49, -59, -81, 82, -97, -38, -15, -2, -101, 38, -92, 9, 54, -83, -119, -13, -25, -110, -112, 7, 12, -76, -51, 101, -61, 111, -18, 88, -63, 51, -75, -70, 75, 90, 122, 114, -24, 126, 88, 17, 67, 11, -54, -112, -82, 30, -28, -83, 50, 92, 57, 37, -115, 124, 19, 11, 57, 97, -66, -54, -8, -126, -3, -17, -94, -109, 43, -128, -72, -95, 126, -100, 2, -63, 98, 23, -2, 107, -25, 90, 119, 21, -31, 6, -122, -68, 31, 65, 116, -17, 61, 89, -127, 65, -53, 123, -40, -2, 41, 63, -41, -91, 72, -42, 50, 87, -128, 108, 35, -62, -82, 123, -78, -128, 25, -75, 62, 89, 89, -14, 70, -127, 117, -65, 47, 13, 122, -90, -96, 73, 58, -124, 109, -42, -128, 45, -37, -115, 46, -119, -7, 122, -109, 14, -37, 111, 84, 96, -66, -110, -37, -85, -91, -16, -98, 30, -128, 78, -7, 18, 97, 54, 5, -41, -37, 118, -14, 109, -95, 48, 91, 42, -123, 50, -38, 53, -123, 81, 6, -18, 40, 110, -84, 122, 13, -85, 99};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NIYXDKCIZFCNLMWDWYDNSTULTPNLJEBKBVMDQLNPAKWMOEHBDCXNGULCCF");

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
    msg.setTimeStamp(0.190078313716);
    msg.setSource(54926U);
    msg.setSourceEntity(254U);
    msg.setDestination(31686U);
    msg.setDestinationEntity(49U);
    msg.state = 4U;
    msg.plan_id.assign("HVKJQTTOBDQWBVIQDXGOVCUQFUWSNNJJPXJEKASJKWGQVNAGFWTNWGOJBOSVDIFXSCUALCEOAEFMHDYRJKHSYDCLYKECUGWZHUFDSKBAZJMTCJKXZBEYHZSIXOQHORVZYFUGYLBRQMRG");
    msg.plan_eta = 644994343;
    msg.plan_progress = 0.287622900128;
    msg.man_id.assign("IWLQANGOSYVGCQDQHJIFYKHIMLBTNPUUVGEKULSNLRXIEJSTKSAXIWYCSOGFPBUYSKEDJAUBWZVYKTNHWBWVPXFWAZAZUUOKZDMXZRKEDQPDRIDBGTMOGTUBUWWHBTORBKDFHLHAHAQHWXNJMQZJHRZLNPIRJHMMXZGTX");
    msg.man_type = 17810U;
    msg.man_eta = 824216226;
    msg.last_outcome = 222U;

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
    msg.setTimeStamp(0.948846719508);
    msg.setSource(51211U);
    msg.setSourceEntity(143U);
    msg.setDestination(43029U);
    msg.setDestinationEntity(223U);
    msg.state = 69U;
    msg.plan_id.assign("LVLEIYSKBUFPAPZJANYHTKIGWOTTGGQLXPDHJLBBJIYQPGYDTJFUSPVGDSJWFMVKKAGKFZEWOTLIZEECZDJKIXYQZTTHELWOSCMUXOWDNJOORVXVHVCMJZUWDWRTUNQANTWBIWHCFAHNPXRDUMOZRIMSARICYQAZYUOSXRXRYMNBCDDSURYQDLGVQQIYFFGMPXEJCSSAPICWELHLHKNRLJRXZAMNSGVVNUKENCHBOOPZ");
    msg.plan_eta = -602398016;
    msg.plan_progress = 0.377084298577;
    msg.man_id.assign("JFKCHJVUJFRFISEMZOYNCVOVFUUYQEHSCYMHPNJRVHMXDKBSPXEOSBLADQXBCLHXQZFCTDRQALGYYKKLWITCMESQGDFDPPMQLKJJULNXWRNBOBIDOPGFKYOMPMLIYMBHIRHINERAHVKTAXAQHROXZNIEINAMSFPWGNHPMVVBDGGWNQBZUKAATOYDTWCRBVCUZVCJRTZZRTY");
    msg.man_type = 62376U;
    msg.man_eta = -688148551;
    msg.last_outcome = 213U;

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
    msg.setTimeStamp(0.591811846903);
    msg.setSource(23641U);
    msg.setSourceEntity(253U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(126U);
    msg.state = 162U;
    msg.plan_id.assign("VQMOPHVYCVZAVANAXSRDJGPSQWLLYFCNULUDCNDEZZIQMFUKMORGPXBSPCFYPFZJPHRTHCFXHMFQNHSUSLCJEASZTNKWLWVSODZWQWYDTQTEUBJKJOIMKIBKVRPGLUGNIBMHSHCXNDRSAR");
    msg.plan_eta = -1939632807;
    msg.plan_progress = 0.678209046334;
    msg.man_id.assign("AKSTFOSOPYCXLIPDHTRYFLLAWITWNVBJLTDDOPWXICGCGRPQEVCJPHRJNCHTMMYESFJSEWRDEVNLUPQURQBHJXFUIMNIFNRMYIWLKIMDAVZDRGXUSTZTJQHDZTTXVCEGGQANZJDSNBWUGFDLUKZHVRQWCVJKHQCEOXYPGSIZOXFOFNAIUWWYHBPZBCKEKGPYLYRMXHEKYQUIN");
    msg.man_type = 17556U;
    msg.man_eta = 961569944;
    msg.last_outcome = 164U;

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
    msg.setTimeStamp(0.854200059804);
    msg.setSource(2119U);
    msg.setSourceEntity(47U);
    msg.setDestination(61861U);
    msg.setDestinationEntity(130U);
    msg.name.assign("XLWTYYCABCFHTSOEDAHKPMODCJMOVJCYKZHRJGQUTRORZTQDSTIYHBZPFZJWUAKEPEDWUIYUNMQPPBYNFZIFUDXTGOKEIQGWZGXISUCBXRQIASZWJHKPZFYWVJDQDNMSARRCMVPEXKRFTPLBFJQLEGFSOLVPGLELGEVONLWOYUBINRSEN");
    msg.value.assign("DTIGWKGTVCLRUNJZNHEFDJZFXDCEYVALVKUQFGFZBSJDLTGKLFPSEUVMFCQQBHCPMXLMQBALZPQAFHIIATNROYQAIBHEALKSXKEGIMWUERGSISOKNCJZPOSBITBKLPDAHZUTSNIKJCOJWVCCPWKKXUIRJHMRFHNBQDGJQRMUTMWVOMYOVESROZSLYDUSOVPZYPVQFXUMYPWODIWQNHXENRRCYWZFDGAWXHBWDHXUBRYOMXJAZANNGETPYXCBY");
    msg.type = 157U;
    msg.access = 185U;

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
    msg.setTimeStamp(0.418126836441);
    msg.setSource(22843U);
    msg.setSourceEntity(177U);
    msg.setDestination(16508U);
    msg.setDestinationEntity(54U);
    msg.name.assign("GFXRXHQMQUFKEDAEYCUAZPGBEJZNSPMLYGRQIUJFXAKEIRXLBODVMNBSVDXACHMBFJQLSZNWWZAUNPIRBZCQIRCOVPFSEKHWBIWNNOAMYXTODPFMVTCSLPHIYGZPLBITDLHCEBVEESJQDGUOGZC");
    msg.value.assign("CCIVQKKESVMBAUXEPGIIFODDRKNTYPOXBAAQFYSWLNDYLNYDAUPJFRHGCUVZMXNVPGHTSJTXNHKTPJMCCXVZSWJZMSOPTTGJKEDTERLMDXZUKONWTFEQJZRWLWPFCQYCIBSJHYEIRLXURFTLDAARDGPCIWRHLDYOVBVASBOLAKXBZRADCFHKSGI");
    msg.type = 12U;
    msg.access = 3U;

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
    msg.setTimeStamp(0.786749941437);
    msg.setSource(7957U);
    msg.setSourceEntity(28U);
    msg.setDestination(53796U);
    msg.setDestinationEntity(192U);
    msg.name.assign("JIJQFPEGUNZ");
    msg.value.assign("JIQGJULVGPFFDCOIKMSVRPTBHHSIXQKRDOVIGRIPHJFYSGZADGJWECWESMNBBFONCY");
    msg.type = 200U;
    msg.access = 223U;

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
    msg.setTimeStamp(0.262713300876);
    msg.setSource(19138U);
    msg.setSourceEntity(46U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(27U);
    msg.cmd = 138U;
    msg.op = 187U;
    msg.plan_id.assign("KBDURBYGCOIUBOAWLCUCMTHTYMMJEOQJKTCJPXGPNCSQFJYIMWNTNRLIPXBOAJVLYUSYWWZLHIZQTXVNHGQPJNKKXPEKFKASYIDEALPVTOBYQSFWVDLGRMPPJXUSMDXRXDLEIDFFPNJSZJFXIARKEAFORUTHBLIGMQDEWKLNZRBHCNEGQFDQZHZEISGVUNWCDKQGQFE");
    msg.params.assign("WGKVMSANXYBQGSDIWDVPPXPTENUDYMHTZGJYYABUCTIGPRQULJJGWCCODXZGKCFMUORIUVNBQTFMPFUTLMLHZJSBCDIZKRVWOEDDMBRKLTJLFSLJPSKHVJTPYQCZHLPFZ");

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
    msg.setTimeStamp(0.344170239124);
    msg.setSource(57484U);
    msg.setSourceEntity(28U);
    msg.setDestination(17036U);
    msg.setDestinationEntity(85U);
    msg.cmd = 82U;
    msg.op = 4U;
    msg.plan_id.assign("HLHUSOPVYBDITDGJNFJHTNGKPOVRYWEYGNYMRXCOHTXEXSKOQOVDMPPMLQTGAWYZXZMWGDNGJNOWVBKILYRCTQDSSBCFRLOBBICQUHHTAUFAMWVPGZZIWBQKUFASAFYAQRIYKPLIFLHFAMQSPMFFWS");
    msg.params.assign("BHCZVJKCQNLZUGJKLMNUKSHIPZOEZHGIUTTDLACRFOXRZWGYFAJOAMGIDVKXNMUKNIPQAGJBDJVEFKBHOPENPLGIOBHBPAXSAKULHIQSRFEWDSLWDVGOEUDXMSQTTSAQRIRJTFUXHYJNEILSQWWEVCOAPFKQCQVTRRGBFASATWRUR");

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
    msg.setTimeStamp(0.424621391456);
    msg.setSource(24848U);
    msg.setSourceEntity(169U);
    msg.setDestination(32133U);
    msg.setDestinationEntity(49U);
    msg.cmd = 245U;
    msg.op = 205U;
    msg.plan_id.assign("IHRAFVHOWXZJJISTVCNBEUFCXBRPHWDGLBICWKHXRKPBUWRQVGSEYPEWDRNWKRGNUXVIGWQSUQJCVOGAX");
    msg.params.assign("HXUDROAMELAZUQBWFSSVEDMKAEPMHUDHHXILACFTEVWBQYNWVSZFAJLHMRKIXIOUFHYOLQLKNEBZJGZRYVQBMTADKYXTXWNTQHOZDLQNZJBOQNIOBSVBKTUKGYHJUOJPEFWVHCOJPJTIZLCUUXXCMRWFRSRGTVCHJQPKCZEXYBFNMRIRCKAPVCZRRDUSWYF");

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
    msg.setTimeStamp(0.082641178772);
    msg.setSource(7902U);
    msg.setSourceEntity(37U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("CFPOCHKQNYNUMDAONWKRRBOSSHISDESJAFTMVXJQEHXQGYPXRZDCYGTLQKAFPFOTHEKAIJHEJZBCNVLHTIYXDMVOKIABLDLKPBVUCDMZZYUGAMCKFXSJIQICMYGPICQWNUNBYXTGWWRUUEMZZOXXHQELSNLPFAAQSYIBDZFOGMRTRPMKAGWEJHPQIYONKWJVLTZTUMRJISVDRUOP");
    msg.op = 75U;
    msg.lat = 0.998661941723;
    msg.lon = 0.485389901575;
    msg.height = 0.383347291858;
    msg.x = 0.336873738126;
    msg.y = 0.0580197271294;
    msg.z = 0.512021552966;
    msg.phi = 0.355961976816;
    msg.theta = 0.504754348986;
    msg.psi = 0.703877550544;
    msg.vx = 0.346498949465;
    msg.vy = 0.772013010865;
    msg.vz = 0.236486286426;
    msg.p = 0.808354398222;
    msg.q = 0.596870441806;
    msg.r = 0.816797369994;
    msg.svx = 0.861679864699;
    msg.svy = 0.540780995582;
    msg.svz = 0.245372005936;

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
    msg.setTimeStamp(0.917320889526);
    msg.setSource(32346U);
    msg.setSourceEntity(61U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("PRAKOSYJXCOTSBMBDUXTNWAOVOFEFJJHCXMUZGIPZUATNJNQRPYQDBGDJQECVBOALVAAXCCZLEQXESLNVSUEDKDLONEDVPQQBHPRPZHTPWKGCYOTIJADPSFCCSKRKHDOBVXRHUFWFVQZFCGZGYUDYFMIWMYRQLYAWLHIBLAMTVGWWLGVYJMMBETHRHWRJXEGVKIUCSNPIMFSBZKFXWKKTXIDUIZYNAMOMLINNWBNHSLJQXUEEYOQGTKIJ");
    msg.op = 182U;
    msg.lat = 0.950121754886;
    msg.lon = 0.377215749604;
    msg.height = 0.535074438294;
    msg.x = 0.625518310743;
    msg.y = 0.534169422008;
    msg.z = 0.506512609372;
    msg.phi = 0.711555885341;
    msg.theta = 0.317674831186;
    msg.psi = 0.591752750098;
    msg.vx = 0.450758259112;
    msg.vy = 0.594715605865;
    msg.vz = 0.615583490673;
    msg.p = 0.933288625419;
    msg.q = 0.560587530448;
    msg.r = 0.795301319114;
    msg.svx = 0.0441677282146;
    msg.svy = 0.679373433161;
    msg.svz = 0.0205405230307;

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
    msg.setTimeStamp(0.968510671622);
    msg.setSource(9538U);
    msg.setSourceEntity(26U);
    msg.setDestination(50844U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("YJXVEIWAWGLLAZGSHHPTVKVBVZXRTBVPOEXXKRWWQIIVDPZSRZFOPYPTBMFYQOLXEZCFLZRQCMHKGNNNXQUKJYBVLUWTQDUQRWKEDHTREAPNCGGQHMMDFKSYCNQOSORZCNAUZOFYCEUTLFJRXWWID");
    msg.op = 233U;
    msg.lat = 0.256367908938;
    msg.lon = 0.0339768613104;
    msg.height = 0.827864705954;
    msg.x = 0.0295088176512;
    msg.y = 0.776286900202;
    msg.z = 0.606111296281;
    msg.phi = 0.690681489271;
    msg.theta = 0.00345659935796;
    msg.psi = 0.883855147656;
    msg.vx = 0.992425675843;
    msg.vy = 0.820486073456;
    msg.vz = 0.593310567928;
    msg.p = 0.0996999714026;
    msg.q = 0.545107476128;
    msg.r = 0.229954412346;
    msg.svx = 0.0342567668462;
    msg.svy = 0.289195823527;
    msg.svz = 0.76410552156;

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
    msg.setTimeStamp(0.965175485332);
    msg.setSource(10664U);
    msg.setSourceEntity(5U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.182174103101;
    msg.lon = 0.497445758285;
    msg.depth = 0.697164519615;
    msg.roll = 0.477989266152;
    msg.pitch = 0.265794198002;
    msg.yaw = 0.226543965827;
    msg.rcp_time = 0.523201524127;
    msg.sid.assign("ZLOWQCLFKEWWVNVNONJZIFXLKTEMWFUGYABSQBCLOEAVTAIRIHTBYCUHABKZSJDSRQVODXCKSE");
    msg.s_type = 233U;

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
    msg.setTimeStamp(0.965566696369);
    msg.setSource(52822U);
    msg.setSourceEntity(71U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.290597975235;
    msg.lon = 0.876040779868;
    msg.depth = 0.173848136961;
    msg.roll = 0.147350698864;
    msg.pitch = 0.692404968082;
    msg.yaw = 0.812516046812;
    msg.rcp_time = 0.66185653368;
    msg.sid.assign("ETXEQUHXIJKRHGDHSZIYYIFHLFTCPDIAQRBBUFGQSUIDVAGFPTUMXLZYVNJECKULMBRDEWNEJAOWCCWCGVLDICYQMONSRASLLU");
    msg.s_type = 132U;

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
    msg.setTimeStamp(0.317992539814);
    msg.setSource(43520U);
    msg.setSourceEntity(91U);
    msg.setDestination(61886U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.706874536461;
    msg.lon = 0.00116985923572;
    msg.depth = 0.867610781274;
    msg.roll = 0.580856063255;
    msg.pitch = 0.629285618986;
    msg.yaw = 0.906642364649;
    msg.rcp_time = 0.0802696948872;
    msg.sid.assign("MQLHDBCJXQHFDKOYUNLTATHZXGBPPDUUSOUGSJNMTCFMABABGYLTRQKSDNTRNHBSOJHAPEESEWLXLNPNNZGZSVUYWYHVMWROIEUKOVQIGAHCKDZMWRGJYUFURDWYFWYTNJMZCRKXJOFIKXTLPLEODVKONVBAGXTMLIVSCLYMPROQGIBHSFBPOIFLIQFWIJCQNBPRRSSAXPJEJTYKTDCZKQJZXKPQXCEMIZYUDVGHZWGV");
    msg.s_type = 8U;

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
    msg.setTimeStamp(0.263875194926);
    msg.setSource(1729U);
    msg.setSourceEntity(237U);
    msg.setDestination(55446U);
    msg.setDestinationEntity(253U);
    msg.id.assign("OUMABXXJQIJJLTGQNEKYPYOACCIMBLERYIWNWEQGMVFRDFOOSTHMWRBXSDRXESUOQYCYUDBSRGHNGHJSTOHJHMFTVAFWAQWAWPEKFENCKNZJBZJHVPCNAAMZDZTKWIVSZUIUWLNGXWHKOIUGQ");
    msg.sensor_class.assign("CAPXHHUVCKFKKORKLPYSWFMOVMBJAWQLBPHDTZPLNTJLBZVEFAOEUGNDCMDHURSGITCQMEFHGIVHPEUKA");
    msg.lat = 0.456461150369;
    msg.lon = 0.0901727037512;
    msg.alt = 0.644977164422;
    msg.heading = 0.457037784883;
    msg.data.assign("BHBNRBPQGOSFIQWSKGUULNZJRUCNRFJQWYEWCTXOICBPNOXCSTXOZFZAVBANIIJIOYWJMWENWRVVMRBYGHRXUKTTAROKQJHQSLZDGIMSYJEZBHIOSMYPFAVLTZOUDCIXYHXGCPAEDBKOQPKEAELQPFZRDNGDRWZNLJCTMDNEDFAXCVKTTHVLKFUSGLXELQXUYJPSFIQETHKFTBMDIRJAVGSXUKPAWWSYBFLGPMLDGEZKVM");

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
    msg.setTimeStamp(0.863578049037);
    msg.setSource(2446U);
    msg.setSourceEntity(147U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(157U);
    msg.id.assign("YRGNILVTTQFIVISCQRGFGVWSJNFPRRKAQYXVJZSUJQNAEJCERISEEYCPHWKHOWCMMJXPKZLPONTDBJVWCEHWUBGOWRFZUDZYKNTEZRXBBUASZLBADUEENPOZSWHVITELEDFPVXSBYTQFWJVM");
    msg.sensor_class.assign("MHFLFRFZUPZZEHDWVMTVOCCEBGILWVGWTQQCLLWJMIJNOXLDMOUTYHRCXZIIS");
    msg.lat = 0.86675497398;
    msg.lon = 0.587044490589;
    msg.alt = 0.863997863273;
    msg.heading = 0.20909795997;
    msg.data.assign("ZECVHJWMWQEDXWBUSNFBGVCNQNHNYORZTUGALPAEEIZFUPGZWTPCWJLKCKKBZTIRQMKRARLNIXOGDAVTQREULL");

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
    msg.setTimeStamp(0.225153667868);
    msg.setSource(10068U);
    msg.setSourceEntity(67U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(80U);
    msg.id.assign("SMHTISNTXBKOFIGNXNJCDUSDMKVIAOIPBHWQLGUJSIXNGRYVFOTGRYNJZCFRXJXBIFJYCWLHCTAZHKGJUEQQNSRBLUAJEDCXORYYZHVKYUHQEQOPRKPZJVDWLALFEKGLCMNTMPCZZDFWBEVMEBDAJBWQOSQWQKZPKUEGIAOADSTNVOZQBGUUMVCDGNMIBFDTSWWDFFPAILRLHJNQRUPKLPTXUGOYMOIWRYPX");
    msg.sensor_class.assign("HIBAEQBMEYWTLJLFSFLERDBOBRIBLTZVZRYHOIMZQEOVFIYTUWMCCHLTQCZRXNLAEXXJEFGWJHIYCBOOGMLBSLTUAYPPXDKHSIPNFLMCATPNJDDGZSVEGDRWFCJRHAGIKFXYFKWVUKRVPGHLIMDSBKIQGQSKJDWWNMWQJQACQVVTSDDXBJOKQCSSSOOWYMNZPEOPGXAZZTJCRIVPMYYWOKAEUHGUXPRARFNKXHUTHNMVBUXYPAVNEZQUKFTU");
    msg.lat = 0.427547351467;
    msg.lon = 0.706563823142;
    msg.alt = 0.000556647655352;
    msg.heading = 0.905172377202;
    msg.data.assign("VUXLJMEUETLVSRETHBEDFSIWMCOJXZBKUWTBWFYRAFSIGV");

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
    msg.setTimeStamp(0.695235145757);
    msg.setSource(54051U);
    msg.setSourceEntity(133U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(79U);
    msg.id.assign("NXISYKKFZZEYOMOLNJOSGALHAKMQSNAOHFOUMXJXOBTZCNGWPDYWMESRXOWVUVGGSPKMQWQAPGMUJHIPUCGQCDNPYIJJAEKBEQTUGIDGRLOQVWBKWPZQTHXWENFJXEUIZZVLFYWICKUUAADXVZGYNLPTDTTRYQVAQHHLPROZNMBTIVCBZDJRCRKECBKCLHGFWPFJUFPXLLCT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BLENVRPZOUNQBJGIRIYWREFQMXPUUQSHLNOISMYFOJMZEQYYLAENMYJRHXEQNHMWDJTWVGDUPCKKDGLORCQWXQGDILWEOKSTACVWEHABUXZSCCXUMUBVAFUKDSSXVJDZPFGPSYIRGDZYHJZKNBWBOGRTQQWXCAFKLAJAHVLBPAAUIZFFMI");
    tmp_msg_0.feature_type = 200U;
    tmp_msg_0.rgb_red = 227U;
    tmp_msg_0.rgb_green = 209U;
    tmp_msg_0.rgb_blue = 30U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.932866428804;
    tmp_tmp_msg_0_0.lon = 0.641639904732;
    tmp_tmp_msg_0_0.alt = 0.567193337518;
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
    msg.setTimeStamp(0.320369603244);
    msg.setSource(29862U);
    msg.setSourceEntity(245U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(180U);
    msg.id.assign("EMAIQMTQSUGXSXRRIDXOIHPCOJBUVCFRKFPMQQUTBOSVISLSG");

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
    msg.setTimeStamp(0.771288031455);
    msg.setSource(33437U);
    msg.setSourceEntity(19U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(131U);
    msg.id.assign("HMJFVHTUZXDLXBNKZSESLEILMTRSYLYWBUSPLGEQGFVPAORYUUIAZMWFXMIKQCOFZXALTWDDREUDIONAVAPADXRJLRGZVWTXDLDKILDSCZNTTEAWHKHYGOMPIRDAHJDOBFCKYTBSPKCTJYTWGAMHIJZUVFWIGPRMINNNPHKJQNSCCBYVMEWPJWZGRQBXUCREVYNFGECQEZXKHGSCOQGFXBUJTWKYQHOPNQBPVJYBOSIHULEZOCOSABMF");

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
    msg.setTimeStamp(0.108089775292);
    msg.setSource(48971U);
    msg.setSourceEntity(63U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(94U);
    msg.id.assign("SSMVHZHOSFZWPLIRWCKBHOJXZSKGQNUXDXUVLATWMRZNUWPWEFFQOYECPASCEABGKGZNC");
    msg.feature_type = 166U;
    msg.rgb_red = 9U;
    msg.rgb_green = 53U;
    msg.rgb_blue = 227U;

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
    msg.setTimeStamp(0.859083963899);
    msg.setSource(6142U);
    msg.setSourceEntity(137U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(212U);
    msg.id.assign("WBCBTVZCDEJVHHFIXPNRQQCVTXHGCNGWAJAUDZEIJTMMQBKTOKKKTMYSXXRRKTDBMUARUPFCPCTDYGFWLBVSOZNZDJWMYKKBFPZJRZXWLWOFBYYEIVHSPMLONYHNQMIUAAATCQSLETMBIRAQULUWGCUEJNRWLWTQYOFEZMNXDLNPSOQRNC");
    msg.feature_type = 235U;
    msg.rgb_red = 198U;
    msg.rgb_green = 239U;
    msg.rgb_blue = 195U;

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
    msg.setTimeStamp(0.781725915969);
    msg.setSource(39096U);
    msg.setSourceEntity(187U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(170U);
    msg.id.assign("NTWIHZKCGLLSFBQSUFCZNHODDIZZXKKGFQWKGLWCYADVBWGWQESYITKYCEZFYPMJGGYJBSJRRBXHKFJYALFIPCMHLHRZKYJGDLOENTMKIWBOUDHVSXPEOQUDX");
    msg.feature_type = 74U;
    msg.rgb_red = 1U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 37U;

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
    msg.setTimeStamp(0.672093755521);
    msg.setSource(63799U);
    msg.setSourceEntity(120U);
    msg.setDestination(53531U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.658672708431;
    msg.lon = 0.396663107246;
    msg.alt = 0.166925374299;

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
    msg.setTimeStamp(0.334058750343);
    msg.setSource(35088U);
    msg.setSourceEntity(160U);
    msg.setDestination(54283U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.202272598333;
    msg.lon = 0.528548394228;
    msg.alt = 0.71344930205;

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
    msg.setTimeStamp(0.250517000523);
    msg.setSource(21317U);
    msg.setSourceEntity(28U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.524280864366;
    msg.lon = 0.0788605672434;
    msg.alt = 0.449817150047;

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
    msg.setTimeStamp(0.960232871745);
    msg.setSource(37756U);
    msg.setSourceEntity(4U);
    msg.setDestination(14178U);
    msg.setDestinationEntity(109U);
    msg.type = 120U;
    msg.id.assign("LKPXXVZQOFNLXGCAQRKMCIRCTTTQMXBUERVPPMDRHOIEVCSOI");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 21U;
    tmp_msg_0.clock = 0.917080560159;
    tmp_msg_0.tz = -105;
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
    msg.setTimeStamp(0.323906749487);
    msg.setSource(12657U);
    msg.setSourceEntity(4U);
    msg.setDestination(36680U);
    msg.setDestinationEntity(247U);
    msg.type = 143U;
    msg.id.assign("VJBAAHEBKLVXUJLZYEZGDEJLODSKDUIZWFARZNDRHMYBHCAQVZDMGHQINCRZVFBXNFYPPKIKZXSRKSLPFRXTDQCCOGAFQEJGMFHTDMIMSGFHBWPYFWEDBPCTWJOGTBHIMPLWVYXWQWOTTSMVD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZHYZSDANWWUXXIBWRDIVWOPJREGFNQZVCIZDMJZ");
    tmp_msg_0.predicate.assign("XZSCUSYPXATZLZCRNTMFVCMKAAPZUFHXOIZLGRMDAEKJBSDBJHKFOCJNUAQQYKBOEASDFRTSDMDQGWHGUDZBVWEXUBPPIPNUVDGFESVHLRLOHYVQQY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HLEJAQVADCNWUOKUOVDRSLDXVMNITPUMUGEPZWBXJFIJIKWSPFPFAUPPM");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("LTIWULMEIDYKEOUPHMDPYIOCFW");
    tmp_tmp_msg_0_0.max.assign("EHXYYUXHCAKWIPMUKGKBFRJQYFDDIBZINLJTGBBZDLKOBRATSWYSUUSNTZEIMFNJNGSIMPIXBJICVTSJJXTQFNZASXOKRFDACVCONZVCSRKOFQFDZMXYSMLVTMYMHJKMYZWEJGSGYWQPHOOVTPNWDOLTBWBD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.83992573634);
    msg.setSource(4457U);
    msg.setSourceEntity(74U);
    msg.setDestination(37745U);
    msg.setDestinationEntity(185U);
    msg.type = 89U;
    msg.id.assign("FMPGRTMFKJGVHRLMPVZFVACRKPZEQQJXDURH");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 0U;
    tmp_msg_0.htime = 0.618875741724;
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
    msg.setTimeStamp(0.425007064025);
    msg.setSource(34550U);
    msg.setSourceEntity(101U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(85U);
    msg.localname.assign("ILSOACDTDVSGEXOFHTZJZZURYLEBOXIBKILTWDTGCXDMFVPYMJLYJIHNVPQFKCVERREYMNGTDABOIPYF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HGNOYNVCLVWSMODLVQLCUBBCOWPJSASOCZQJCVSTOGYKZLGGFCXKQTPDXHZYMLVXMNDQWKEUYYLACKAIMHMIOZPQYWUNBQGPHHKFZEBDGTTMLQSNVRNDVXARKFAXSURKPRTBXQIEEMJBSQLEHYISFGIPATXBRORMCIEHOMRAZWWFGDLCTYDRUZFWTUJBJHVGJIFYZPHBQPRTWPFEUJJOFR");
    tmp_msg_0.sys_type = 166U;
    tmp_msg_0.owner = 60936U;
    tmp_msg_0.lat = 0.110470323218;
    tmp_msg_0.lon = 0.0154934860487;
    tmp_msg_0.height = 0.526676627846;
    tmp_msg_0.services.assign("KTBIEQLVSYJSKPLTDHERDVJAUGQSAXKAXUKGHOHYBWNMYESZSBINWEVFCWXRRTZVOYZMBJNSOKNQITWUDSLZWFWFVXILAJMRDHFUNLFAWRKLWJJGUVLINBQKCBREOXDABSMTAKTQXRIMBJDZUGVWZPJHHZGPNQAOZMVPAFQYGGQDHVWTYSUTHXCOFGLXGECFXZBCREDPFHPDPDCGCMOYNYUCIOEQAEXNV");
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
    msg.setTimeStamp(0.554609349912);
    msg.setSource(19102U);
    msg.setSourceEntity(121U);
    msg.setDestination(35397U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("TSWKHSLQGODYVNBORHZRO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XWRCBKPHDDTJPLCGOILMUJROGDYAPTAEJFTCYCZVIDIGPRTCYZZIJZNZSPCSMFWSLYKLQW");
    tmp_msg_0.sys_type = 232U;
    tmp_msg_0.owner = 23177U;
    tmp_msg_0.lat = 0.506356309968;
    tmp_msg_0.lon = 0.0893556312306;
    tmp_msg_0.height = 0.334969721182;
    tmp_msg_0.services.assign("GYOLTIHBIAMTXLGEDBYHSIOCJPGARGMUHVUHFYQBMTOGSQUYPOAEADXOHSVKYMNZTNSPLKOQHCIGCFEKLXTWZACSFFLPBYGEKTRQUPTUAWUXWZXYIBIPIRGCLHOBPYJEXFSJZBJRJEEJBKCJMTHRWLTKXQXDFNASCEGWJPJWNYDZPSKAAIKMUOCGNDLDUFVJFKKMPDRRRSFCZQQNVVNVLMNAYBZRVQCQWIREWMVQUVWFHIW");
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
    msg.setTimeStamp(0.96103287256);
    msg.setSource(21566U);
    msg.setSourceEntity(0U);
    msg.setDestination(41295U);
    msg.setDestinationEntity(100U);
    msg.localname.assign("BNJSBIKLOCQPVSGHMZYUADG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SVWCWDHNSROOHHVPEFTNBAULXTJTBIMCLVOSRBLGJUTKOQUCXNATRGOFWQHMJQ");
    tmp_msg_0.sys_type = 39U;
    tmp_msg_0.owner = 43136U;
    tmp_msg_0.lat = 0.120931522402;
    tmp_msg_0.lon = 0.0931864100323;
    tmp_msg_0.height = 0.922239953352;
    tmp_msg_0.services.assign("XEGNIWBDILRXLLVQOMSRYONDGGKUPKZQTAMELXAIKFJYMKKDIPBBJWLXVPGTUWVAHWAOYSZHQSROZXWPBJWQGNTBCVGRHJCSWVFVQIMARPEYANYFAFHOGLMLWCCZXZNWSRHNDNQRZIJFJUYXMMSJCZCOKCDAQUMRCFBKDWYVIDTBEODTTYHENILOZRALAPPFJEU");
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
    msg.setTimeStamp(0.273436747033);
    msg.setSource(36889U);
    msg.setSourceEntity(90U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(27U);
    msg.timeline.assign("XHURIVWTGLEUDBRMXIYTCSYOSARSHQUWYPABCSHSOQFKXJTNLCDVOOZXXMAQDJOVIGWMNMBWADFFGDEZKNCFPINCGRBLOCAJYDETCNOHMWRQREAHQBRMGPZHYQDXUFPGQJTTZKOPLZBZCEZDCDXBVVHML");
    msg.predicate.assign("MOQXFPQGWHEGQVYZGZCFZFSVTRFKQAIQJDYSLRCAWFHYLPRINOVCAEHZSXFVBYKIKUMWDSEAOJWXZBDRNIGTDHCICFDKUBNRFUDKDGXTACNUPWLJPSJJVWKWSCGYTMPYGXPXMIRUUOPUNEVLRAEKELMUBSZDZFLQPJIKNXAFMAPRMZDVONTDEIJMGYBATXCOVHLWTOXZSYXMWTSIBTTZWJEYVENEUHHMBP");
    msg.attributes.assign("CYYDFVHHBAGMWOGCYUSBVZUYODQMSJWTQTIEJPQYAGHAVSEKXDPWNIMSLXEZXQAJCLCKGPIYXZIPBWYPPYYXMCDZPLROTLZLKFBTDDRGUHFFKTRGKKPZWDFDBLIZIBAAJJVBCZXESLCQNKIUYROTRTMWJWRNJVVOTULMSIPNEKEHWGRHRDERCVFISSM");

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
    msg.setTimeStamp(0.770228619695);
    msg.setSource(11146U);
    msg.setSourceEntity(18U);
    msg.setDestination(55289U);
    msg.setDestinationEntity(115U);
    msg.timeline.assign("XQRCVONNWDZJQMXEYBOAMTRLYRMCLSONQNPOAIKENHTAWHVFREKDAUVPHKXLGVUFDSYELYGHZXWURLVDGENJXZDFEUWQFZDHLFGWBPOIJGMDQVHHHORPQJBYSYZTRRQLSBNXPCASJIEWPIGWPFBSFJUCXZCIBYBHTYZTJBLOOWNBUKCWGRICGKIMUMEKNPUKXVKXPG");
    msg.predicate.assign("CESSDCXLVUWPHKGWHQMRORYYOIYOPDHNWDPFRQKYESVEIRGYZEFTZFEAIZONXHFOAJARGYKJQWUTDFDLUYCLUSBDHXGSMMNUNVXCLICCAGUJMHYPTTMQL");
    msg.attributes.assign("USVMHPWDSNWAUCKELBOQCSPAANJKQQTIXHPDHFRYFVGEPRKSAKPLNTFAWLEQSWIGHHSHLGURVOJQSGCEWYJVPBQJEUMXTTFTBQRXOCXMWYLZKFMTSUNNBYFIZHTPPJVODRJHOMZDNKQSVOJVKRMFLWNJQGAYGTWNCDFNYEZBIDIPLFBCODLEPKZHLKJRUXBIMZXWDTRQVVGD");

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
    msg.setTimeStamp(0.852169640667);
    msg.setSource(25684U);
    msg.setSourceEntity(137U);
    msg.setDestination(39928U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("TSNFONBEEUTZZODZQTGHZYQBRGKPAQUINXJBDRXTIYLHQHFXYGFVLOTLNSPKZXQMLJEEJWAMDXGWGQSBTIWFEPLTZDNTLKWPFLRURRTKBMINZVLNNYMUCBSOERFEOOKJVCMCUXIWRKIJDXBBPWPNWLHAWHHCSIAJWFQ");
    msg.predicate.assign("BHFFIAUEZTAQYVAZSYXSNBZPNCOLUVXZVHFUMCOWSYIYNNGGQEPXRHWZDFGUWIYCIGOAPQPFLHGYEJECQDSKCUUVCXLGBWLSENSTDHQKYWRLORQMHOEJIHJBDLZYAMPMPCXOBIOHDDHWLVKXKPJVAUWBRDWFERISISBCXATXEEPZKUQVVMO");
    msg.attributes.assign("QPUHTDBYHLZAZGYGQKRVEUVUMNA");

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
    msg.setTimeStamp(0.445562757304);
    msg.setSource(69U);
    msg.setSourceEntity(12U);
    msg.setDestination(28659U);
    msg.setDestinationEntity(153U);
    msg.command = 33U;
    msg.goal_id.assign("HLNYALSRQTDPYEMWKZQRUKLFJKVGCIBSIIBEEJZTHREXVWHRCBXRUFHRJDMDZHZWVWOKLPOSOHFNECFAFEMUDCOXIFUZJHKDWYAZYAIFNCMJIRSCDGHSMOMAMTBMSMYJGKOGNPNBZLTXWFRXTAOCYPQLQTSKUAYGNTGSJKLUTVUXXZAOODQDCNBYEXQQPVJBEGBTKWPIRCMDPBFUHGVJPNYXC");
    msg.goal_xml.assign("HFHQSJROEBMOSGVSTQLSUEO");

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
    msg.setTimeStamp(0.13067423736);
    msg.setSource(37410U);
    msg.setSourceEntity(76U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(205U);
    msg.command = 90U;
    msg.goal_id.assign("XAJWJHVUKDNELUKMKXZHEMKUCVRUGQBSBRIKVLLBYAVHYMZNFXCJQMHPZMTMPGOBSLGCGVNSJLRGQSWFCWBYNMJOJKSPUSVTTIU");
    msg.goal_xml.assign("YMWHBBEBIDCXEYSWNZUWHHVRVMFTSEWXU");

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
    msg.setTimeStamp(0.161730389156);
    msg.setSource(17793U);
    msg.setSourceEntity(223U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(227U);
    msg.command = 158U;
    msg.goal_id.assign("DYOYKVEWGDZFSCBVPZMLDJJPHPUYIIAVNCUVWYLOQQLFZNIBKWMXRZMPAFNFCTTKBFYSQJURWLEAPYUVOMWYXTSVIPHWIVTELFTRCOUDXGURZNUJXEGNSIPGRIWGHVHLKCHEHBIOSBWGQYOCOSNCJLWXVEEHAXKIAVACQRXXONKNBRBPAODTAEKFKIUS");
    msg.goal_xml.assign("PIEXTSGYUMGUIWMPRTRHNORQRPLVEXFIVNOZSQTCCVNOIWJEYCOSUJEVLKBTZLXCTFMGDQGGTPEQJVJEXEHTYXBYYXDZZKTGAKUVYFNBNPSRUDKAMSKVHQACCKBXOMQJIZMHLMUWFMWJHXJWZQDSZEBTAGFONKKZLUFPNW");

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
    msg.setTimeStamp(0.357855514256);
    msg.setSource(17515U);
    msg.setSourceEntity(73U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(145U);
    msg.op = 231U;
    msg.goal_id.assign("XCNMRLTLGDKIWYBUFGFMREYTTSJOJMRVNVXLSVRURJSZEPUEUHXNYNNUGZDUDJNJUTYGLDDJMIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XPQAOCJIEFLZDOGWXIDGXPNWUYMGNXIMHERUSXELHCBPAKKBTSSCXCFYZLBSKBYCRPVTJRVATEYXDZKADHFJNNMEYUVPIJESROLYBLZETQDATRQJCGXOQVUWGDFHWVOTWYXTTTDVOJIQUFMPGZZXIVUQPFOGEICFKWRZGZHQLNUKFKAHYQKRBUJPHOBPRGHMVKNIUWAWJQDADEUMMHNIAN");
    tmp_msg_0.predicate.assign("ZKWCIQGYQXSGNSLOWALDZKPKBCTVZNDOLNJTZZHPPFXZWHLGZEUTYVDNYRUGJCGNEKOREBGXHRHAZQDVWXFUO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DSOWBTQMYMTDIVGUZQFDAVEWJWEJHOPYSUKKPWCYC");
    tmp_tmp_msg_0_0.attr_type = 250U;
    tmp_tmp_msg_0_0.min.assign("CUWEMIOXGSRPTYRLLDADXEQBSQZQPIJFZNEFHHRWXCNBJQHUOVMZQBUNCSVLSBDTZYFPPDAAIVYDVMWTJTLQGDEBOHIBARYXJETSXSKUPCRKSOIQUJODLZGFD");
    tmp_tmp_msg_0_0.max.assign("XSYQNFQDSWOBMCVMLBTQZDCTRDITAUUEVBWTFJSRGYLNRJBYBWO");
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
    msg.setTimeStamp(0.909434345426);
    msg.setSource(61270U);
    msg.setSourceEntity(15U);
    msg.setDestination(39720U);
    msg.setDestinationEntity(55U);
    msg.op = 105U;
    msg.goal_id.assign("NPIRTDRBISPGLXVGKSQCUSMTPDPVORYCLTCYJTLOUZKDVABHUMDKKMHJAZJZIIEAQSFDFTB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TJMPYTUJKYLHXIZOEPWLRHPJSQMBICCRQIUXIKJRQMDRGGTUOLQJHTYLATJGOWMQZPMULDKMSOXZASBLNRWXIHBQWUQYKALGSUNKVVMHIFBMHYBVWGMOPYFECIXAGCERNIVVVHCGCNXYYUOVEPBFFUZCFOW");
    tmp_msg_0.predicate.assign("LCLHERQPSTTJVUDPPGJMNLXBBHVXUXMAFAXNXSSCPJRUA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JBWEZBHMWMFGUHCHNCWAEDCBBKILTO");
    tmp_tmp_msg_0_0.attr_type = 158U;
    tmp_tmp_msg_0_0.min.assign("KGCEAXUJCNWVXYODUGYJFTKOELXJDZOBEAQQYRXEXHWLPQQJMJHFVAAKHOIITBQDDNUIKXMSGNNUWPNNDVLLUMOLPNQMCKWZSPAZZFPGRPSHHSEESMBWEWVLJUHBRXQASFSYTQKTY");
    tmp_tmp_msg_0_0.max.assign("MSEYNICFEMDZXGTYEIVMILXKCERPGTEJGYZBFCQVXSPYSPRCRPOZTWGLEGLHTQHWIZYVVSDCTBSVRJYNAPBCXUJBFJUKHYDTFONMDKTEQOWHXOPQMNVZFBOAZKMHPSKIZJBKTQNJFDCHULQRIAUROLDMLASEROLQCBALBFNKGBJGJSFNHW");
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
    msg.setTimeStamp(0.108143275739);
    msg.setSource(14409U);
    msg.setSourceEntity(53U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(16U);
    msg.op = 150U;
    msg.goal_id.assign("UNUOIEVECEWFXQNQIKYDOOIYYXXPPJFXIVAKMJPCGEMVUGUMZSEFSYUDQGAKZFPQPSKZAORVBQGOEXJXCIHCLJYRLSTDQWLLHKDWMRUOUBQNJZNMMFVCFCDWOWYAXISQBPCHRKJRKDANRSPALTDQMWGHGXHJTBLLBVTIVHZAGGRZPYPTASCRDYAEWIJHGJTXOSPNKJFHU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QURZGIOEXEHVYZXFDBCYZMXLBMUNITMKKZILWVLECDBOCNRKJYGTPJFIFNGGXTVJPKTIVMAQG");
    tmp_msg_0.predicate.assign("GHWSKOLOEKQEPARINYOAMBGWCJVHZBVEVCBUFOSNSBFMOBAAWNJPLRZSQVQJIOJNMMUEPIUIFJSWRUCTJEYIPTQTULXCBVFUXPWKWQAHGYXDDQMOUNDLKNTYDWLZUCXRRQSQEJRW");
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
    msg.setTimeStamp(0.522391118539);
    msg.setSource(45240U);
    msg.setSourceEntity(101U);
    msg.setDestination(23442U);
    msg.setDestinationEntity(59U);
    msg.name.assign("SIMOYXVGPUGPRXKNGZFKXJRNTSTLWZMUZESLLDKBOJVOQVTVTCHQPTDAOWBBNYEVLIQWXMPKHXLOVRZZWDBAGELPJCHYCFFCRXYYSYLMEBMMUJWRCVGMNQIGZNSBURPZNBQK");
    msg.attr_type = 105U;
    msg.min.assign("TZLSFCJQWQYZABKPFLTAATHBBXGPZJBPVMNYAVROKYKGSRTJAVFSQRWEFCMTAOZDVJDCLYBUJNPXKKIVCUZTPEFORHDJYETEWFBRBLWWUCDCWCWLMUQDUQPOHMNHVGWINZIYSEFZQGPNJXQSWXSXNXVJILLDMRCZQEJOGSIEGHYUYRXFOXSPRXAHJHMHADBVNOQZQWEIBCDNOUKP");
    msg.max.assign("RRIESBOJFZGJHMCRXYITDALWDEVVCHBVILNOXTWAQPCPPAGCWYPDOBAHKGXYKQJJTGUYNFHZRSJGKUZOLBIEVLSZXDEMGMLPGLKESTJDVYJNZYTJCXUPMNFCTUWOMWAMNLFSGVFRDEULALZVVKXNBQMYQIXP");

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
    msg.setTimeStamp(0.208446639014);
    msg.setSource(52674U);
    msg.setSourceEntity(97U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(121U);
    msg.name.assign("DYSRRXLPKWON");
    msg.attr_type = 37U;
    msg.min.assign("RFYLKJSNXHIVWVDWMCKLLJSWMVZONCTWZCYJTSHOZVIUESUBOKSPEBEFPPYZMPDGMSMTHPIQRLGJDUCKUORTULSJCZQAFVYGIEFCRZHJEZJRGDA");
    msg.max.assign("TNUHVJFPBEQYCCCFUOURLHNJGCAGUWGJOXIOQEGOWKXPOHYCNLFXKFBTTGIUPNDJJLGERYQBXMWZVHKMKPXES");

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
    msg.setTimeStamp(0.722192718837);
    msg.setSource(60739U);
    msg.setSourceEntity(12U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(181U);
    msg.name.assign("MWQKRQNSRIWRSDHXLJIRGNVHMAZATOZUUMSCYKTZMIOCZGPXOFCHLYJWJSTFXQOLNDGSKGEAKJI");
    msg.attr_type = 60U;
    msg.min.assign("TJWXOWMXYCDNKPKXFEQHKYLQPSDQYMDELIAWLEQHFAKWWUACWPVJCRRYSYKBORQDTDXCQNQCVLWKUIAGTSHNSAJGAFOVEZENBNMLLGNOYPSHX");
    msg.max.assign("QOCIKDUFAARIOJDUGDUMTBKANPWGVMRNCECOYIQXSNPSKHQNOZXUWQFVCJLBAGDZWAJPQMLRWBZIQBKUZHDPNXDDJUSQCGRMVEZSYFBELTKYNAPJIPMXYAHRQHIZTOAVZYNNHMTCDXZTOSBW");

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
    msg.setTimeStamp(0.784780028136);
    msg.setSource(3491U);
    msg.setSourceEntity(115U);
    msg.setDestination(64442U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("SHPSZOAMWAPQDVDPFOOXIOSXBXQYCTACGIKGYCZQBYDEKONBTRQMISSRKFSRZFRCUWLIDAJRKVVUWJNWJHURWVFKEUNCOEMXIUDBDGTELYFTJKAKLHWBUHGOSAENRHNQYWXQZWPLUQTBIWAQSDTYVXRYSVJZHHNDQILPXOEPLLUHENCBXAFPETPE");
    msg.predicate.assign("HVGNFWXVFGNAIKYUEPPUOHABADGFXMZUOEOFTLADLOCHCLWDMFRCMJGZZMBXORLZUWRNPJVXAVOHERNTZIVETYVKBWBTNRYTSIYUDLCUKLIOKFNEZXQBHZYYLHFIFEGZLTAVPTQXMQNSCJPQKDABUIJRXCUCMPGCOPWREPFDDRAKQVPBVDNTZHKDJGJMYISHJQJMWN");

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
    msg.setTimeStamp(0.294303641118);
    msg.setSource(63052U);
    msg.setSourceEntity(178U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("RZLCWGJDAVYXXFEYT");
    msg.predicate.assign("VYOYLAKOGAOVARMG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KYBNCQEDBWPLKYIDAFTHXPPIFZOTAGGMAINOQTQOUCZIOXNMMSJZFCRFMXFRZPLVNZBVRIHNBUVNWSUMTPYNQNEFUPSEREBTYVYWJJBIMHWHCXEQESECJRDUVFGFLABYTCJGNTFUAYKLWXILTUVAHDSVRQPRHIUQWPOZHLJYWBMOZOJPUSSRMXZGXKQVKCDKVACSCHLYVXLXRAQBYQEGABHSZTGJW");
    tmp_msg_0.attr_type = 95U;
    tmp_msg_0.min.assign("LUYTVYNYHGSJPECSDBJOCRHGKPYVNTXNYPSWCVDQXZYAARBALSUSUBMLEGOUFICBWRHRJPLATXITQQBXAWVYCIDJNTDREFWGYZKZUVEAAOVXEMROKAQIERGNRWDIVMQCHNQNQHLZTPZGEIPQPWPLTXKWPJQDBOFADGAYDRUBTLVIZONFJKHKDIMGHMMCDLUWBEZLHELHKFXKOGKUFVBKISTFWSNSOCSNJMUJE");
    tmp_msg_0.max.assign("XKZVAQBBRUIQVBRBGUTDELWVNXHDAQDCLDTDJKBCCYTNKPOAVXEXPTRNQLPFJKVOMXITZKSQNLIRXHATBPWUEJYCLXJQFLGEILZGSYKC");
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
    msg.setTimeStamp(0.0641243417329);
    msg.setSource(38193U);
    msg.setSourceEntity(133U);
    msg.setDestination(6384U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("PQMDTLLLSWIOPNXAUERTFOBBQDBAFABTMXCJZKHYWAVISF");
    msg.predicate.assign("AXJVWMPHOHYHNRUIYSYXEBTOTHIVNLZMCIXOQSONALZEEBEEXPUMSAMQATFVAXZQMFOQUBQMHRCEPZGDGUVJDRLLQLFSDRKQQPUCWJBYOXXIWFWOULNRSAIHHEWVAWBJGMNVZLSCUKHYACZKRKBMWBLVIRYTWMDTWQOAJEZTS");

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
    msg.setTimeStamp(0.670338095789);
    msg.setSource(49557U);
    msg.setSourceEntity(211U);
    msg.setDestination(27624U);
    msg.setDestinationEntity(27U);
    msg.reactor.assign("SYIDGPHZYKFBXDWUYWFYAFR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQPDZEVAZKLQDRFDWBISGESPHUSEDHVCQHIVRSSRILPAAMHBWSJMKKCCAJSLCXZXRTUFQKAOXLNEUMXFYGXVEHZDVYSTLMFWIPPYPLBCOYTNBBJIMAGEWD");
    tmp_msg_0.predicate.assign("OHDNHACBSIVITDLTLIDDRNNL");
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
    msg.setTimeStamp(0.825266288276);
    msg.setSource(36253U);
    msg.setSourceEntity(28U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(9U);
    msg.reactor.assign("YDBLQFZVIXRBYYEPUGK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GZGZKBCBFQJLNCQJOVHHGSVIUDURJTEVNUTDCSITXTPGEAMECTFKJHSYAOHHEUBRKWQTLQXPGJRYFWXKRLYXWXFUBWQIJVRINRNNMEVWZMAOWHXZSIPYEBVRUYNMKCFRXMMQCSXSWKYYIYAUULDHEPPTEZTFDOIVSPALEPDPHPMOJQROETLOJBNBDSQWGMGAOWLVZOYNSCDCGZFHLRUQYFLGZBPDHADFKZIJDFMAKVNVXNQKUJZBBX");
    tmp_msg_0.predicate.assign("JSEIJKLQHIZNIWFYFMZSPMKSWHLSOYAAZJHLXENPVTBUEQOOGTRDSYPETUCAWLPYYXHKTXGXWGFIXGCMZNUPEUKAHJADRBFMVZJNHNCUYGBBGQSYXJNQQONFRRTFTTCVUIITXGBUMLCSWNRQCPDANJBQOLHELAMKZPWRXOKVZPJVRVV");
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
    msg.setTimeStamp(0.899065906149);
    msg.setSource(30645U);
    msg.setSourceEntity(105U);
    msg.setDestination(21642U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("HGZIPQNRUPQQOTZVYZWMJITHVDBEZTXGFODZIANIFRTUSMZDJVWNETYSWOGELRURCCVVOBBPSPWWHYLTIUKXIKLCEEAAB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WWMWJLKZCXRUBECJYDPUEVECAONYNZLTIXVBHPJADKGTKQHJHDAZETAQEWQOMHWLQFSMGTDPLBWGXMIBCOGTNNHRFKXLAQXJGMNSCEVFFLSXCZMOQHUPYZJXVCZYIAOIFBDFLUFHBUQURFIECGLEINEWICADXUSVURLYDYJSCNAZWGROPRKVYBJTPYNBSGVFITSSBVOTD");
    tmp_msg_0.predicate.assign("CKKKQZMFDBPTQEUEHLUGXZBVSCHIMAUNAJOGDWYYGSQSPYNYRJBDYRMTMJOGENBRVWTRPUWDMQSNKVMJMVTWVLBJIGFUWOKVCCXZLEKIEXBZINAOTLRTIUWFAVNDWQRWYELJOSAIVKQJDCAPNOEFMGGLXFHHVIKHONITHFSERXHVYCFALLDJBRTOBLGFUCZBZFAUIMTPJDPQPOQAYSAGPHUSKGPNXEQYRRUCZOKHWHDQXXSEBFZTMIDPZLCXJY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EIAFSVOCZIFWZXYTKMTPTJAHMCKVMAWNFNMVTBEOBUEHDLGJEYSYHPYDDTOZMHGNOZYDGBJXSPLWDBVYMMIJNWTZTDIMHHSQZEYXHIR");
    tmp_tmp_msg_0_0.attr_type = 128U;
    tmp_tmp_msg_0_0.min.assign("AAZMXKBDXKJXLHLJGYOF");
    tmp_tmp_msg_0_0.max.assign("TBDIYSRZEIRFDRYCSGJTULWBWUXZCAAUDMCTQMQPKLRNZONIOMGLYCQVGFLQXHOLJTJZFGDVKATKBRCYUMAGMPTQKXQWHHDHPNVADCXFSJMAAIFZHYSQKKLGKCFJKAWHEYWWRBAPRFJMZJVOCJXPBWNICWXSGEUNVXVHZI");
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
    msg.setTimeStamp(0.356549314409);
    msg.setSource(21870U);
    msg.setSourceEntity(214U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(56U);
    msg.id = 68U;
    msg.width = 41984U;
    msg.height = 44593U;
    msg.widthstep = 52395U;
    msg.channels = 10U;
    msg.depth = 229U;
    msg.finaldata = 123U;
    const char tmp_msg_0[] = {18, -87, -48, -85, -1, 97, 19, 108, -41, 63, -12, 11, -19, -22, -33, 60, -98, -61, -3, 41, 103, 29, 2, -25, 98, -113, -62, 2, -28, 99, -118, -117, -128, 23, -83, -80, 28};
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
    msg.setTimeStamp(0.759322919113);
    msg.setSource(1966U);
    msg.setSourceEntity(97U);
    msg.setDestination(53582U);
    msg.setDestinationEntity(180U);
    msg.id = 200U;
    msg.width = 29984U;
    msg.height = 51995U;
    msg.widthstep = 59461U;
    msg.channels = 214U;
    msg.depth = 126U;
    msg.finaldata = 126U;
    const char tmp_msg_0[] = {69, 42, 95, 29, 107, 39, -28, 42, 116, -6, 32, -36, 18, 19, 3, -53, -45, 76, -106, 48, -5, 106, -53, 85, -81, -80, -40, -27, -94, -82, -52, -119, 32, 126, -67, 41, 97, -62, -124, 14, -118, 72, -127, -19, -17, -85, -108, 111, -17, -91, 50, -110, 125, 18, 36, 72, -118, -63, -104, 72, 49, 17, 54, -38, 49, -119, 34, -126, -37, 84, 108, -114, -43, 97, -65, 112, 18, -85, 113, 25, 59, 122, 21, -87, -97, 27, -100, -115, -43, -38, 1, 22, 50, 30, 101, -11, 27, 91, 122, -119, -33, -56, -34, -83, -72, 49, 27, -7, -94, 48, 108, 91, -121, 105, -85, -52, 59, -55, 43, -9, 125, -31, -58, -101, -92, 3, -56, -39, 45, 111, 62, 82, 7, -102, 76, 52, -78, 30, 46, -57, -65, -86, 95, -11, -113, 27, 123, 35, 37, -102, 58, -116, -9, -54, 68, -58, 111, -4, -96, 106, 123, -92, -59, -66, -1, 1, -77, 110, -61, -66, -41, 64, -99, 45, -83, 100, -83, 96, -61, 43, 78, 93, -114, -122, -45, -126, -21, -24, 60, 95, -85, 48, -17, -20, 30, -45, 118, -84, 28, 62, -4, -86, 125, 27, -33, 33, -13, -37, 93, -102, 67, 4, -70, -83, 15, 108, -10, -111, -64, -56, -8, -8, 12, 110, 8, 12, 126, -20, -86, -119, 65, 4, 8, -53, 92, 7, 67, 33, 29, 93, -90, 71, 48, 21, -83, -3, 126, 1};
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
    msg.setTimeStamp(0.0644459530218);
    msg.setSource(32891U);
    msg.setSourceEntity(222U);
    msg.setDestination(3471U);
    msg.setDestinationEntity(24U);
    msg.id = 14U;
    msg.width = 43085U;
    msg.height = 56954U;
    msg.widthstep = 20758U;
    msg.channels = 17U;
    msg.depth = 142U;
    msg.finaldata = 24U;
    const char tmp_msg_0[] = {-83, 32, -13, -10, 61, 2, 86, 18, -26, -115, 124, 35, -128, -107, 22, -81, -92, 63, -34, -103, 126, -21, -106, 97, 79, -69, 6, -40, 81, -103, -85, 111, 50, -111, 13, 113, 89, -88, 48, -85, 96, 100, -52, -23, 86, 29, -4, -39};
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
    msg.setTimeStamp(0.0660864740552);
    msg.setSource(39000U);
    msg.setSourceEntity(19U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(133U);
    msg.width = 30792U;
    msg.height = 17594U;
    msg.channels = 212U;
    msg.depth = 106U;
    const char tmp_msg_0[] = {33, 3, -86, -89, 33, -118, -102, 79, -35, 35, -98, 66, -14, 47, -79, 7, 81, 121, 18, -112, -42, -8, -88, -92, -35, -10, 86, -128, 14, 5, 68, -23, -49, 61, 117, 55, -25, 61, 4, 15, 60, 70, -101, 80, -38, 72, -16, -55, 49, 38, -53, -71, 51, 29, -51, -62, 87, 15, 55, -8, -43, 88, -63, -127, -7, 85, 82, -5, -19, -82, 52, 60, -104, -88, -40, -85, 105, -128, -40, 102, -44, -35, 75, 58, -78, -70, 94, 46, 107, 116, -94, 65, -107, -128, -17, -119, -30, -124, 35, 80, -66, 113, 9, -8, -98, -107, -32, 105, -12, 122, -95, -81, 78, -115, 73, -24, -4, 103, 48, 77, -17, -69, 107, -19, -96, -78, 48, -124, 83, 113, 123, 18, 17, 98, -1, -71, 86, -64, -96, -61, 45, -74, -86, 100, -4, -104, 75, 41, 22, -72, -72, -9, -39, -28, -26, 85, -2, -44, 92, -25, -88, -97, 5, 97, -119, -100, 6, 62, 1, 15, 115, -34, 94, 15, -28, 12, 26, 73, -53, 0, 71, -123, 48, 53, -71, -72, 45, 115, 10};
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
    msg.setTimeStamp(0.836071799022);
    msg.setSource(4159U);
    msg.setSourceEntity(233U);
    msg.setDestination(2229U);
    msg.setDestinationEntity(80U);
    msg.width = 18236U;
    msg.height = 30028U;
    msg.channels = 196U;
    msg.depth = 248U;
    const char tmp_msg_0[] = {89, -93, 2, -128, -36, -91, -46, -60, 120, 16, 125, 35, 52, 49, 92, -81, -75, -73, 117, -40, 65, -109, -49, 26, -40, 77, -12, -51, -106, -91, -121, -61, 65, -25, -89, 42, 41, 39, 89, 55, -48, 95, -59, 11, -92, -21, 34, -33, 19, -105, 4, -41, -117, -82, 9, -117, -40, -30, 99, -128, 112, 14, -122, -30, 113, 76, 55, 84, 29, 113, 47, -128, -87, 12, -9, -84, 5, 0, 119, 103, 49, 109, -71, -28, 49, 108, -3, 45, -42, -24, -121, -128, 109, -107, -45, -20, 70, 56, -13, -65, 90, 105, -128, -16, -27, 96, -54, 78, 74, -52, -49, -104, 111, 92, -57, 80, 86, 18, -15, 2, 40, -24, -75, -36, -42, -101, 126, -68, -119, -10, -62, 108, -36, 23, 24, -53, 86, 39, 114, 124, -32, -46, 92, 14, -40, 17, -24, -75, 68, -110, 67, 102, 31, 52, 35, 15, 118, -47, -23, 31, -34, 97, -1, -26, -91, -31, -59, -114, -15, 75, -66, 44, -68, 0, 12, 6, 114, 116, -55, -123, 83, 48, -39, 48, 122, 92, 78, -11, -105, 99, -35, -108, 39, -20, 97, -56, 107, -4, 84, 14, -55, 104, -28, 38, -91, -95, -74, 87, -108, -105, 16, 90, 18, 110, 12, 69, 120, 54, 77, 126, 123, 104, -115, 41, 39, 103, -43, -107, 123, -110, -11, -110, -53, -59, -56, -74, -123, -14};
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
    msg.setTimeStamp(0.831384075247);
    msg.setSource(29458U);
    msg.setSourceEntity(252U);
    msg.setDestination(33771U);
    msg.setDestinationEntity(161U);
    msg.width = 7536U;
    msg.height = 16949U;
    msg.channels = 250U;
    msg.depth = 185U;
    const char tmp_msg_0[] = {-55, 44, -123, -77, -92, -61, -93, 58, -59, -22, 10, -82, 90, -58, -113, 17, -79, -57, -32, -108, -24, -45, 40, 61, -117, 60, -47, 6, 85, 49, -97, 20, -31, 103, -84, -41, -33, 122, 21, -13, 81, -110, 121, -29, -116, -8, 38, 35, 31, -51, 112, 83, -122, 71, 45, -27, 44, -52, -76, -85, 12, 111, 55, 89, -75, 17, 58, -23};
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
    msg.setTimeStamp(0.779747029027);
    msg.setSource(25297U);
    msg.setSourceEntity(253U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(20U);
    msg.frameid = 10U;
    const char tmp_msg_0[] = {-70, 63, 32, 124, 124, 33, 89, 94, 12, -11, -115, -114, -128, 11, -21, -31, -48, 38, -76, 104, 84, -117, -125, 59, -42, 47, -115, 33, -76, 62, -7, -112, 118, 72, -51, -6, 97, 12, -4, 84, -41, 36, -18, -61, -110, -103};
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
    msg.setTimeStamp(0.943753217077);
    msg.setSource(29331U);
    msg.setSourceEntity(166U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(135U);
    msg.frameid = 90U;
    const char tmp_msg_0[] = {51, 31, -121, -63, 118, -24, -28, 32, 82, 120, -40, -13, -23, -122, 6, -9, -85, -75, 35, -125, -33, -76, 12, -76, 7, 81, 34, 5, -94, -62, 84, 103, 92, 2, -86, 97, -114, 1, -104, -45, -117, -124, 1, 101, 35, 23, -15, 1, 16, -63, -18, 25, 79, -116, 102, -4, 15, -54, -67, 125, 15, -36, -33, 13, 119, -57, 97, 26, -12, -29, 123, -97, 88, 15, -42, 123, -90, 31, 39, -15, -8, -14, 104, 107, 47, -94, 84, 54, 49, 104, -39, -31, 9, 73, 122, -118, -49, -75, -70, 88, -87, 113, -44, -123, -4, 4, -117, -53, 67, 18, 1, -17, -52, -1, -74, 47, 87, 89, -120, -20, -59, 56, 81, -25, 68, -54, 77, -119, 71, -106, 55, 106, 122, 82, -29, 65, -84, 3, -34, -119, -31, 55, 1, -16, -13, -26, -32, -14, 57, 112, 95, -76, 32, 97, 49, 36, -98, 90, -47, 115, 57, 114, 118, 11, -9, -64, 86, 119, -85, 91, 55, 102, 119, 22, 90, -97, -101, 32, -90, -91, -30, 47, -120, -56, -45, 11, 71, 64, 81, 104, -106, -45, -69};
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
    msg.setTimeStamp(0.739454250862);
    msg.setSource(38296U);
    msg.setSourceEntity(242U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(47U);
    msg.frameid = 31U;
    const char tmp_msg_0[] = {116, 45, 52, 29, -18, 23, 126, -74, 15, 105, 28, -38, 20, -97, 110, -94, 125, 113, 58, -37, 69, -37, 83, -37, -53, -47, -122, 124, -109, -10, -46, -14, 13, 48, -54, -114, -42, -16, 34, 114, -49, 101, -18, -44, 35, 70, -19, 55, 54, 72, 29, 77, -55, -128, -69, 47, 52, 31, 114, -50, -73, -115, -89, -84, 53, -19, 16, 23, 85, 53, 94, 75, 99, -102, -2, 50, 69, 39, -82, -37, 29, -117, -74, 106, 101, -67, -83, 116, 100, 72, -80, 51, 46, -18, -112, 97, 110, 27, 36, 101, 99, 16, 90, -84, -3, 18, -62, -17, 83, 31, -106, -6, 95, 53, 92, -7, 63, 40, -28, 23, -9, 77, -70, 68, -103, -98, 92, -110, 97, -98, -13, -1, 78, -109, -119, 98, -85, 96, 59, -24, -29, 18, 70, -67, -8, -72, 104, -128, -24, 103, 67, -73, -90, 117, 15, -57, 89, 33, 21, 40};
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
    msg.setTimeStamp(0.119387201617);
    msg.setSource(47798U);
    msg.setSourceEntity(239U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(50U);
    msg.fps = 110U;
    msg.quality = 137U;
    msg.reps = 99U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.745370149323);
    msg.setSource(60776U);
    msg.setSourceEntity(212U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(91U);
    msg.fps = 252U;
    msg.quality = 154U;
    msg.reps = 197U;
    msg.tsize = 67U;

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
    msg.setTimeStamp(0.11586493801);
    msg.setSource(2299U);
    msg.setSourceEntity(4U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(71U);
    msg.fps = 248U;
    msg.quality = 53U;
    msg.reps = 11U;
    msg.tsize = 126U;

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
    msg.setTimeStamp(0.578077344707);
    msg.setSource(41004U);
    msg.setSourceEntity(237U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.409086325693;
    msg.lon = 0.631414348344;
    msg.depth = 117U;
    msg.speed = 0.818556404751;
    msg.psi = 0.979272892711;

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
    msg.setTimeStamp(0.709167951359);
    msg.setSource(49652U);
    msg.setSourceEntity(202U);
    msg.setDestination(64549U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.908460728974;
    msg.lon = 0.580685413063;
    msg.depth = 63U;
    msg.speed = 0.443959768906;
    msg.psi = 0.477178011277;

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
    msg.setTimeStamp(0.262807603675);
    msg.setSource(16822U);
    msg.setSourceEntity(115U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.537938885345;
    msg.lon = 0.174050401582;
    msg.depth = 98U;
    msg.speed = 0.395305478676;
    msg.psi = 0.572934627678;

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
    msg.setTimeStamp(0.626275821922);
    msg.setSource(51629U);
    msg.setSourceEntity(196U);
    msg.setDestination(18599U);
    msg.setDestinationEntity(245U);
    msg.label.assign("IFOPSNFBGQHK");
    msg.lat = 0.691608725549;
    msg.lon = 0.159655669753;
    msg.z = 0.633779112385;
    msg.z_units = 120U;
    msg.cog = 0.971022932937;
    msg.sog = 0.542659028923;

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
    msg.setTimeStamp(0.137064917823);
    msg.setSource(961U);
    msg.setSourceEntity(124U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(187U);
    msg.label.assign("VWRMHHHKWQERMWONQAJAQTJAQDLULWBVHAKTTSNQWWCSUSEYAIJIXQCARSTOAEXCBVNBMVJIELOMKXBAZFZFFJHZUUKGXBDNYQGQBVPPMVKWNZIEDGYMNEWRDUTQDPSKCCBSXEIPJVOYFYQTHRRUFDIGCILPJYLFTIZKLZPVKSEGJPSJENZYDMHLYHHBSYWDHPAVGFUWOZMJILKTLPNGLNGGSXRCUOXEBTRUOOBDVXKFXOUZ");
    msg.lat = 0.324252272121;
    msg.lon = 0.515949215473;
    msg.z = 0.0740820535582;
    msg.z_units = 4U;
    msg.cog = 0.520917788077;
    msg.sog = 0.739337069;

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
    msg.setTimeStamp(0.129904001448);
    msg.setSource(33492U);
    msg.setSourceEntity(178U);
    msg.setDestination(37968U);
    msg.setDestinationEntity(34U);
    msg.label.assign("BFWXRQSWEHZFFZDXQIISPAJSMFRCPLXOJTUGBLIBVEHE");
    msg.lat = 0.701190580093;
    msg.lon = 0.543754835706;
    msg.z = 0.717336863834;
    msg.z_units = 196U;
    msg.cog = 0.573188291671;
    msg.sog = 0.742595820205;

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
    msg.setTimeStamp(0.059901615253);
    msg.setSource(23973U);
    msg.setSourceEntity(32U);
    msg.setDestination(54066U);
    msg.setDestinationEntity(173U);
    msg.name.assign("FJWTPVWYEZVIATALKPNBICJBCEBTIVSMPZUOGOTCISTJPNJFG");
    msg.value.assign("BEAVEPKNUTYBTMHQVBIJAHNUHGYWKRDYXQLYEYLEDMDYKEILQINHDKUYDCWSMWIVRJZAPZQRWMVPCVSTRORJVKTAGUUESDALPXLTFOQXGBQNLKFFCPTDOBLVMFBFWHWJKOCDHWGTYLXQUSSEWEIFRIG");

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
    msg.setTimeStamp(0.161258256966);
    msg.setSource(3400U);
    msg.setSourceEntity(1U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JTWSEQWVPVUNXZHGXDAJRYDIDFNZDDICGWREOYAVFSZQGCICGADPSSOCCMBJSOLHGSFTLURANEHOPEBEFZQDFSMKJHYHUMOKOHEKVTWXTHXYMQPVXTKMZTNGYHYTSJGCPUKULBULLNWZVJADLOAJBMQZRYZBBRHLIFMMNFJWFKTJTIAPYCVFQTGGSFYNIDXZMOROKREBXXPULAZQNCGWLXAQRQMSLUUCINKPJQEIKVUYVWNORKBEBC");
    msg.value.assign("MHWYEFUAOFPLPBEZBBSTNLHHHYFYEQ");

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
    msg.setTimeStamp(0.590217304246);
    msg.setSource(27988U);
    msg.setSourceEntity(164U);
    msg.setDestination(60662U);
    msg.setDestinationEntity(237U);
    msg.name.assign("VSZCYPSMBSXALCLCDDFZONQJWPDQMPYQYHGCWKJSAGGDWRLRUFDJNROXN");
    msg.value.assign("VJEAQDILNELPRLNGCHJIYSFASLPPXMCENTJFDTNEHDFXMIYALKBINTMPFLDBQSMTYVNFZIEOTZGOHBWMSGEPCQMLJSPQOIIMWIPGMKUCDGPGSUTFERWXMWVHDHBAZTKVFLZWDKTGTZAWKOORYQXUADQYBQZWOYHKFBUPHKXCWCDQHOUIOMUXFSSTHCNLAVYUUQECPYKHEZAXAY");

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
    msg.setTimeStamp(0.15687890541);
    msg.setSource(40970U);
    msg.setSourceEntity(47U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(66U);
    msg.name.assign("JWQEBFYPEBJVQSRVDDQWHYWGTEMZQZRGKTWMAXTWYIJRUKROYMLRQKIFMNXMCSTCETBTZESOUHGDJTRXASFLQVMWZPLPMAHRLKXPFTCSAUSBSQINETOHNJQGYTRBOAKNIBCHWHVXYUWGDDALDZBKVZBCYZIDZNKJONW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XLDDPVHNSADBSRQTBGBTUVVOOFXAFKINDHNEJQWPISVPVVEEBDSIOFCQTOJIRGNDX");
    tmp_msg_0.value.assign("TLIIYFMFHDSHNVKZAGLANGWUVQSWYXFKVYQTCMPAQJGPPDRDWUFFMGIFGRECXOEWBCCGBCUOOZOJYJBGRISHTLKPBHVUSXQRDNFJITALYUOXSEKTQMLPAAUBRIEPQWPZJOOQP");
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
    msg.setTimeStamp(0.541675497492);
    msg.setSource(5226U);
    msg.setSourceEntity(248U);
    msg.setDestination(2066U);
    msg.setDestinationEntity(138U);
    msg.name.assign("IABHEQUJZMNZWUW");

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
    msg.setTimeStamp(0.304643702416);
    msg.setSource(47673U);
    msg.setSourceEntity(121U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(39U);
    msg.name.assign("WURCGQUPKQROYRHWUMJMXZPTJOUUNRSNANKOMJSGLXDHXSCXVNZHNHZPYABDIWFUIAMVTEVJCZHSRPSZYNIJGRYHIUPLETBAISLRVKPTEVEQQLGGQETYDYOLXMWDOAMEKSSWJYTHOOXOIWTQXAWCNEZR");

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
    msg.setTimeStamp(0.673380545512);
    msg.setSource(20715U);
    msg.setSourceEntity(166U);
    msg.setDestination(439U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RZVKFCRQPIUERJDVPHHWFKQKSGBAOIMOHZMJJLSLLKYFXDFYB");
    msg.visibility.assign("NKEOWRVFHSMTBACRFCNSOEPVELEKCLQFPWXWLHZSZDJYJBCNUZDIQUWIALOLZJEMAWMKJIRMRIDBFNKIOWGSUBCULQDIYPKLHPVTQFGRNX");
    msg.scope.assign("YVCAWPGUZJLSBMLDQEPNWCBPTIRRHYOKUQTCKFTNZCKCFLYJYPTBWSLPZTHVVKXRCESIXFAOWJRBEWZIJAYANHMOJMCHXGEFNEXBRUDAGVSVYHBCUEDPUKGAVETSSGWDIUXZDTBENVRLJQHVGSZNCFPMDLHABIYIEMMFJIPGOWRRQYHOMOGKMXKQZTB");

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
    msg.setTimeStamp(0.493816052731);
    msg.setSource(22920U);
    msg.setSourceEntity(81U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(141U);
    msg.name.assign("IBZLWFXBUQXRLAREDYKVVCGSQGXGTAINTOWYTJTJMPYYTIWYMKZJSQGFDDQXZORNYAUTGKYCEIMEJCJBWKULSNAJYNNNEDWNWHINFTHRDXRUVZP");
    msg.visibility.assign("TDSYGAWHIMPTCZGWFRCZPVXSOXVYXWUQBWFEXMGSJEOINZVJXTKQFBIUCKGHHDZDEDYJAXELESKIOWBRIQTLOEFJAHCTARRVWWMPLHPIBTOZMCEJILTYLPHTALZVWQOPISPCE");
    msg.scope.assign("AAEIYPJNMYKKOBWQBZNEUJTDLMZTYNNUWYRMQXOMVAKVBFFJMWCZTVCQLGIHVFSFHDJJKHHKUOLXQNVXIWPGC");

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
    msg.setTimeStamp(0.46748186907);
    msg.setSource(14778U);
    msg.setSourceEntity(128U);
    msg.setDestination(15333U);
    msg.setDestinationEntity(149U);
    msg.name.assign("BTJFTSOBWSLEUSJHXIHQNVALPOBCKGCDLKUSHWWTYQANIGKUHJJZGYKTRZPAMMQJEDRODVKGDJCFKLHQGRJYOHUXVGEAFXDPIQCUTSXMZIVAJIHDNUCPBIUFEVBAMPSYNVDRTWZEFDQKNKYXMZDCSPQKXFSAGIEZQHNMXVXRFCZTFBPEYTL");
    msg.visibility.assign("QJDTVJECVQQFFYCGAAMACOTZWSOAUAPUPTTSWWFYCQBICEHBYFLBDNNMGJVASNCNSNZBNRYQZGXCAINZPKJRZEEPFXZVIHZAYQPKIJLLSBFBSVWRKPYMBWEGSDDDFJHQKSNYPXZGEUDI");
    msg.scope.assign("JJPVFCRHCCEHJNVOQOYBNSJHNTWMLXVKGBEUOAGBOBEUIZRHVVZRYUPYVCTHXAMIZRHVZFZUBOUWCKISOWPQGYXBMZIYQVGAFKUJAWKN");

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
    msg.setTimeStamp(0.0378900772867);
    msg.setSource(32941U);
    msg.setSourceEntity(31U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(145U);
    msg.name.assign("VUNJMTSGEJSQJIDWLPUGVPAZCIBNKGMWPXGSUZBQCYDXPRQLGCHCZOYXCTDBWOXHAXRZSKZSTSKLTGFMXPDYUWFMTTWFFSAIEZIKYDFLIPYEQYAVYOKXVICLVOFKRQFVFQOBLRWWJNZUHKANCSPPEMKLWCJGFMHTSSIBNMHDXWRUHPFOXHRMEJZRJKOHOBTDEGNQLNUACKGDRQBLLBMENNYVZIYVJERUJOADUUHDHBTZOMQ");

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
    msg.setTimeStamp(0.0278986251862);
    msg.setSource(43833U);
    msg.setSourceEntity(224U);
    msg.setDestination(28597U);
    msg.setDestinationEntity(47U);
    msg.name.assign("VLWFDUJKJCYJMATLRTOIKRGZALLLZAODLCXZOMGFKJZAYLQIPFXTXVFBUTGWNPQFOMVJBPFOMCKLOEPNWKZEAESIWQCHMAJSBDUBTNWRVSYTVXDRVUKGUZIBGWMUEFHQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IEXPZQNLEOCBLYARRQTFMIKWZFYKULMKAQYICPJKYYGSYIBKAPYSBDPFSNZRKZKHTUKLZBBQXJGGCLWERFSMJVDCRUWIUWXDBEMGWFOVDNJGYWHJLHEJSNEBAVCVQIAXSFTVLJUGRVSOBXRDZKPHRFDEINDVVSLOJWQUHONUOPKZNFOGMAPTSTHYVFCBADHQZVHZTOQM");
    tmp_msg_0.value.assign("JLEMABCONRDXMJOFQSLJBHRSPAIZNKVSYWXHRVRGGQYPQBMSEJXWIAXIVTWDGOKFCLVANXYYNBIKFNYUQRIQIPAKHSCEGBCWTUNHMZHQRGNTCOOTZDNQDKPEDJRDATGOGHSLAINZFHTIVHIZVXOSMMZUBYWZCBGBDJLXPKYXYDTKZZJQRXUAWXIYFBDWUMYGRWUCKCWMQFLAPWRLOUDEVFKPVJUMCMZEOESOV");
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
    msg.setTimeStamp(0.355441646506);
    msg.setSource(61642U);
    msg.setSourceEntity(54U);
    msg.setDestination(62697U);
    msg.setDestinationEntity(60U);
    msg.name.assign("EILXSAYIHPTERXYYZDMORKIAOWIRQAGCJBPAXUNATBUGQXGRUUSHHBJADSDECPOZKZSUXIYDOKTKIOUEWLRHYSJXNLPDLZBRNXFQVBQZETIALPPWMFHVSGWRVOSMUNMZJYLDUALCJVWLKUHNCVVMQKZMYUYCPWSCHXBBDDFVHOINOFAGTMNHJQGQENF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CMMPSLINEYMXROKGOVUGFELZDICCAUTZWYVMOHCEMQCTBKEVDWWBEVDLTBBMMSNPZHYYHSLZAUYXGNNRUBCXQRFFSKPWEPRQDWALZWQAGBJRIBBXHBFJISWXZBQRUJERECXIKUHAIKGMRQQUHFNUOLWPQKDOVKYKOKJMNHOQHGXWFUTRDVTIISELXCTZGJLHNFS");
    tmp_msg_0.value.assign("VHWQTZSKRTMMAWIFCRXERYZZJIBGOLJDGEVBXIQAAJDDJTMNBLCYUXIZTNJSIMIZGEQECAIFMQTWYOMCLHCPVPEXTNCHMWAJYV");
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
    msg.setTimeStamp(0.46549569879);
    msg.setSource(29407U);
    msg.setSourceEntity(166U);
    msg.setDestination(41983U);
    msg.setDestinationEntity(54U);
    msg.name.assign("DABLPXCTMQWITGLPWWOFMKDJVZPHSYTTQMEXDEJFRROMHNKVBDOQMIZUKEQFVROVUAAZLLGXNFKNYPMOLUPYETVWTSIIXGCEACNKRHJTDSHGHONRAXQQBNJLAVGRSCYSRWZCXPAJWOUIYWDSRQUCYFBCBGNFYHFKOUYLTSALDGJVXKIMXNXBL");

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
    msg.setTimeStamp(0.591231933372);
    msg.setSource(59764U);
    msg.setSourceEntity(69U);
    msg.setDestination(45580U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DWSWHFAEEMOTKGLQGYOBZKNZLSAYYBPVVMBGRRSWEVKOWIJLOBACZJLBMWJERTFAHOCSTAQZCFCKYRRESSNMARGICYQYMEJMZVINJILDKPWVXCMUYWATGPPOXXIHNHV");

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
    msg.setTimeStamp(0.431993386644);
    msg.setSource(62147U);
    msg.setSourceEntity(237U);
    msg.setDestination(44466U);
    msg.setDestinationEntity(39U);
    msg.name.assign("HJTDXJYXUFMWUVYHXHDMKDKAZOMMHJNHSGCKJGXXSFVBLFYBEUIFJAHCYPZAYCQONIMBUKELYQVRHQJQTDUUWXWPFSWYTRDVPXEWFIAKCOQUIUWFSMVGIFGBTXOYOQNLQCWSDTRTGDKIAHBCQRTHLOIPEWRGEEKTBABMEBZNGLEVLBJLATLQZXYWQCJVASGCNXRLPZNFSDIN");

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
    msg.setTimeStamp(0.33768659373);
    msg.setSource(47155U);
    msg.setSourceEntity(195U);
    msg.setDestination(62818U);
    msg.setDestinationEntity(132U);
    msg.timeout = 1921980187U;

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
    msg.setTimeStamp(0.805882146773);
    msg.setSource(17981U);
    msg.setSourceEntity(61U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(34U);
    msg.timeout = 1450131573U;

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
    msg.setTimeStamp(0.0196374253299);
    msg.setSource(57617U);
    msg.setSourceEntity(31U);
    msg.setDestination(41825U);
    msg.setDestinationEntity(55U);
    msg.timeout = 302642808U;

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
    msg.setTimeStamp(0.212248358799);
    msg.setSource(59990U);
    msg.setSourceEntity(233U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(157U);
    msg.sessid = 851716813U;

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
    msg.setTimeStamp(0.834468761695);
    msg.setSource(22937U);
    msg.setSourceEntity(2U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3762306582U;

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
    msg.setTimeStamp(0.820548385605);
    msg.setSource(17827U);
    msg.setSourceEntity(74U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(189U);
    msg.sessid = 572441039U;

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
    msg.setTimeStamp(0.758514702994);
    msg.setSource(15206U);
    msg.setSourceEntity(26U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(52U);
    msg.sessid = 4282955577U;
    msg.messages.assign("ZXOVWOCUKBBYQAIMTWRREEREDXANMHGDTFZKFCQADKFPSSDINZGWBZSCEYQYPVRPEIBSYZNBBWSLKXKNYUIDQYBIFXPPTOLWGQRUUXYZHYEKAUYJFGBGHMBWVITADLGHFJRXTCFJDVQMUSMUHGVLPDMOZLMDQWOGHSLVHUIHLMOCXRJSPAOXPJABCMXRLTJWVJCWNIQEISRCNTPNHAONJMHZONEG");

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
    msg.setTimeStamp(0.384270254378);
    msg.setSource(36558U);
    msg.setSourceEntity(150U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(52U);
    msg.sessid = 2239603254U;
    msg.messages.assign("HDZIHLZMIBQSQHGEFORMKVPKWCFKFANLTCTZUYWADIIPTTMHCNCYZBSCAQWRVTLVOISYJSYZVFVOVVPJUDGSINQTNFDLIAYVREBOUOKANNARBJIZMVFDWMXEIUCKRJUQPRDLHEKUWHXRYKGCUSJQLSAMWGAFBR");

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
    msg.setTimeStamp(0.639568708901);
    msg.setSource(2260U);
    msg.setSourceEntity(145U);
    msg.setDestination(55443U);
    msg.setDestinationEntity(230U);
    msg.sessid = 1818797203U;
    msg.messages.assign("TMESFZUCUKPAHRTMNSXWRYJLILAHZBJHQGWCWVQMRDCYNCVZGBLUNUETNYOZQGSJCPBMKGZHXLMGBXOCVYGAVVEIAFGPTOKQMIOWYUQNJAEWBJWKTDQLATAJUHLRQVTNFHCXARYWVBIEDPUKPMHFUFOLWJBHUFIOPKBMNOPHIZSQEGTXEFVZEDYVMCGWIDNIEDZPSCTYWDLKBLSP");

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
    msg.setTimeStamp(0.144939464012);
    msg.setSource(6058U);
    msg.setSourceEntity(3U);
    msg.setDestination(4238U);
    msg.setDestinationEntity(181U);
    msg.sessid = 888575463U;

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
    msg.setTimeStamp(0.992701782255);
    msg.setSource(7783U);
    msg.setSourceEntity(171U);
    msg.setDestination(944U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2065344810U;

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
    msg.setTimeStamp(0.700578488768);
    msg.setSource(21597U);
    msg.setSourceEntity(183U);
    msg.setDestination(46618U);
    msg.setDestinationEntity(43U);
    msg.sessid = 8681700U;

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
    msg.setTimeStamp(0.787486653736);
    msg.setSource(22715U);
    msg.setSourceEntity(116U);
    msg.setDestination(9112U);
    msg.setDestinationEntity(43U);
    msg.sessid = 2332693045U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.00614746900496);
    msg.setSource(5492U);
    msg.setSourceEntity(6U);
    msg.setDestination(29134U);
    msg.setDestinationEntity(179U);
    msg.sessid = 2319160773U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.734265877097);
    msg.setSource(4215U);
    msg.setSourceEntity(197U);
    msg.setDestination(27975U);
    msg.setDestinationEntity(28U);
    msg.sessid = 3807493372U;
    msg.status = 12U;

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
    msg.setTimeStamp(0.426913128451);
    msg.setSource(59808U);
    msg.setSourceEntity(61U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(79U);
    msg.name.assign("KUVPDXRSUFQQMFJXBOTIBESYNWZIVWLCCKMYVMWTFSJYKQGKOUUREPTJAYWUEGHJXTAFGSULVDD");

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
    msg.setTimeStamp(0.343799739451);
    msg.setSource(16049U);
    msg.setSourceEntity(239U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(213U);
    msg.name.assign("DYEDFDDVNPWHINIATRGFOMVNYLGCUAWGKWUINKLQJVXGYWBBCGQUCZZMBJIQTFMLVRGGVMUPCNKFHDHIKBCTFFBMWGKWEFXVUSUWYFRDTNRESOIPSDGOOJZTK");

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
    msg.setTimeStamp(0.472889016707);
    msg.setSource(34884U);
    msg.setSourceEntity(103U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(249U);
    msg.name.assign("JTTMROBMLEZFNDVBFZVXTMPMSRAHYQJEMCUNUGNAKUMHWNTXJEXVREAZOOGYLPVORUPCFYPVINNFTHZLSBQYKVCCDPYEQKJWIESRJNBAAMBHJCODKPGQCEQLSTOZSQRIHSUGHLDOPINGIW");

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
    msg.setTimeStamp(0.534953467493);
    msg.setSource(28388U);
    msg.setSourceEntity(208U);
    msg.setDestination(18353U);
    msg.setDestinationEntity(2U);
    msg.name.assign("FFYZMLXKVCLSUPAOHIKDKRZYBKKGODSSQSBCENTVEVGJYDQYNMIQQCISHSMWJGAOUJDOFDZQWJWVDGNOXABNTPVMEHZMGJSIUEBWGAFTLMLRRAYOJXEMTLZXLCZMHBPTUZUVHUKNRRGIROUWRGKILSZCAIPYIFH");

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
    msg.setTimeStamp(0.0140243522337);
    msg.setSource(3880U);
    msg.setSourceEntity(90U);
    msg.setDestination(39139U);
    msg.setDestinationEntity(178U);
    msg.name.assign("FKCEKDWHAXTZLDCQEQVXTDXEHSSZMCIJEZCUIRQTWHDOBMTVPLHVRJUJJHLWHZUARFGMPADSLLOBOHLPSLOVNUXAWOYYSPONTJKBAJXGRYVCDMXITPZUNFBVANPTKSGGQLEWVGQJEBIDBRXUYSQDEZGIEXUYBUDWEIPNZEBYVKFMJFFPUAAONBJYFQZQHHMPKXWILBIYVOTVTQKQOGSRCNTGKWNZWMXFGLSRAFWRRMCNYMC");

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
    msg.setTimeStamp(0.45649816331);
    msg.setSource(43100U);
    msg.setSourceEntity(172U);
    msg.setDestination(6682U);
    msg.setDestinationEntity(63U);
    msg.name.assign("UQIYGNDDKRSWEDEVYRSEMZUMFELTJMVRMNAULFHEIESQDICCHNCCJOZXXIIJPOWAALDDPPHOWZIWKAULYCBOYQNKTESBNYIJSRZAMFZFGDGFAOTCZOZQCREMHSTVTKKGNZCRTDSGTLLLFFXREJMJQUPTDVHUGZXVRTGSRHSESMKIBPAOQXBRHVHBHJWQMPCGJXUTMAXVPVFXLOLIVAGYBLHPFWYUPJKWP");

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
    msg.setTimeStamp(0.0802169413241);
    msg.setSource(14259U);
    msg.setSourceEntity(85U);
    msg.setDestination(50322U);
    msg.setDestinationEntity(90U);
    msg.type = 21U;
    msg.error.assign("OZGTYPXZMTTRFAYLCSDUVGLHCNREVHJJZIAPKLPQKSJQWUSRSGYZFHGLPGYOMWQKYIDNVIQIMFPKNYXRTDHEVUMGSBUFFEWKQLBYYTHJXJEZHMLNYVMKEFYFMMPNBINJXSOANWIWGAABKSDB");

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
    msg.setTimeStamp(0.557703361534);
    msg.setSource(65444U);
    msg.setSourceEntity(83U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(80U);
    msg.type = 18U;
    msg.error.assign("PQERZODWBRYDVPESNEOFPQAPSKAPFEOLWLCNQFCIFKHRMHIVSUHGSJVTUWHSLOOVEYYLYLLDZJRZILUGNJGYOMYEWGUJTPBCJMBJDRWUTNYCOQEDRQOQYCQQFBGVFKDCIGUZMTFHSJZIDSXDMDUAHKTZPKCHBLFWSWBYLZABR");

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
    msg.setTimeStamp(0.291593427495);
    msg.setSource(48401U);
    msg.setSourceEntity(70U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(69U);
    msg.type = 10U;
    msg.error.assign("CYRKVREPSYYLYUTOTCXILGMI");

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
    msg.setTimeStamp(0.290616547921);
    msg.setSource(58576U);
    msg.setSourceEntity(26U);
    msg.setDestination(32588U);
    msg.setDestinationEntity(188U);
    msg.seq = 3399U;
    msg.sys_dst.assign("KAVYSPZMAAPOYZLKGJTANKGRNMSYDONUTYLUKACDKXYLKQWWDJENXBNGHPTXSWWHEQTSIRJRYHLZUCCRJEHLWMHLIIPOAIVXBLTWFKUOGIBHBVJWKEONVEDECBHHFRPMFEUVJDCIJGDFFNWTAXUKRUZQJUZLLFDQNICYAZPAOMOTQATIMSODORRKNMLYRFX");
    msg.flags = 36U;
    const char tmp_msg_0[] = {44, -123, 74, 104, 83, 37, 115, 84, -40, -125, -28, -4, -74, 77, -100, 0, 22, -74, 68, 100, -19, 90, 30, -9, -15, 18, 2, 122, -86, 105, -38, -33, 34, -107, -11, -33, -82, -53, -39, -86, 107, -86, -71, -127, -40, 111, 48, 108, -115, 7, 20, 112, -89, -106, 63, 109, -54, -123, 47, 114, 105, -34, -45, 61, 40, -41, -79, 56, 75, -31, -34, 99, -80, -49, 86, -124, 23, -14, -12, -91, -94, 102, -55, -55, -17, -24, -103, 40, -19, -64, -75, 112, 107, -121, 118, 61, 124, -62, -60, -27, 19, 65, -50, -10, 16, -86, -64, 32, 27, -22, 4, 109, 103, 117, -39, 54, 98, 52, 69, -106, -67, -113, -34, -97, 68, 40, -128, -92, 8, -71, 84, 86, 68, -52, 20, -120, -126, -26, -123, -19, -102, -101, -3, -109, 45, -94, -96, -124, -31};
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
    msg.setTimeStamp(0.478918826572);
    msg.setSource(37346U);
    msg.setSourceEntity(5U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(179U);
    msg.seq = 55689U;
    msg.sys_dst.assign("TYJFKPOTJCAKIJDZXNOOHQROQAKZDHTSFNBFAYBOBRXUPEVHGCXHLBHCAEUWCOYILNRCYOYRGFWCPUWSLNEJRGGXDWLEJBRVSIXXPMTGDGIQEWUWAPILKEVPXDDMEDYOQIJVBKBNZKFQZNCQZFSUVXYKLNAQMYKQLYTZSYKXIPZRQWJMMUTRFSEDNCL");
    msg.flags = 190U;
    const char tmp_msg_0[] = {-78, -28, 11, 64, -54, -72, -62, -80, 82, -128, 81, 61, 107, -13, 113, 38, -109, -114, -35, 50, -126, 12, 75, 25, 48, -46, -53, 122, 64, -14, -33, 56, -57, -117, 54, 79, -18, 88, -80, -114, 21, 85, 6, -6, 115, 71, 93, -48, 35, 121, -46, -2, -15, -86, 105, 95, -15, -106, 29, -50, -119, -3, 118, -77, -93, 47, 6, 117, 119, -52, 78, -87, -88, -106, -59, 93, -91, -67, -73, 73, 95, -113, -67, 71, -44};
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
    msg.setTimeStamp(0.942891547626);
    msg.setSource(39554U);
    msg.setSourceEntity(7U);
    msg.setDestination(2328U);
    msg.setDestinationEntity(4U);
    msg.seq = 4058U;
    msg.sys_dst.assign("UMAYZHNVOSTUGTVNVKKVPOVFQILHRBOJDQUATHQKNDWUWXKXNFOZZYJMBWOFIJHJPTMIQSVGYVQOXACH");
    msg.flags = 184U;
    const char tmp_msg_0[] = {-12, -102, -50, 44, -41, -59, -15, 7, -79, 100, -31, 21, 98, -9, -3, -54, 18, -127, -72, 68, -101, 29, -80, 76, -123, 15, 110, -31, -105, -35, 61, 3, -57, -63, 7, 28, -61, -127, 17, 50, -113, -69, 31, -39, 106, 118, -34, 112, -44, 74, 22, -58, -75, 62, -59, -76, 5, -8, -68, 33, -75, 7, -110, 97, -15, 50, -25, -36, -43, 1, 116, 71, -73, -126, -2, 9, 121, 30, -81, 124, 102, 120, 9, 27, -101, 108, -98, 122, -24, 75, 75, -102, 2, 50, -19, 69, -84, 34, -17, -126, -107, 100, 63, -2, 107, 43, -86, -24, 114, 53, 1, -68, -41, -99, -116, -48, -6, -9, -112, 101, -53, 124, -52, -78, -119, -71, -54, -55, -11, 12, -109, 51, 91, -40, 26, 93, -70, -52, 10, -103, 46, 125, -44, -40, -50, -29, -77, -79, -80, -92, 72, -9, 93, 99, -27, -119, -63, -115, 75, -89, 36, -47, 115, -52, 33, -55, 120, -103, -26, -12, -67, 82, 87, 126, -93, 114, 40, -63, -96, 20, -10, 126, 95, 28, -81, 29, -124, -57, -42, -1, -102, 103, 54, 40, -65, 3, -29, 116, -53, 124, -115, 80, 105, 112, 78, 116, -37, -76, -97, -107, -125, -105, 46, -83, -116, 122, 1};
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
    msg.setTimeStamp(0.967971554862);
    msg.setSource(26000U);
    msg.setSourceEntity(83U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("NOEXRXKAUYSGCNQFVPTHEJPBQDKAXJVSULSDQBPMHSPEHVTGFBZQYAKXIRRAZHYAIMZRSBWQOQZVCOBHWHYDSJHVKVRXLITBSFJDNWMEQGCPQEPWFVMTAGUNCCGOUBGLNJSEHWFDLQINYWOVAZCUSUEDARJPJFGYLNGVFXOQDCHWUTZG");
    msg.sys_dst.assign("NLTCPFBJJKNSQVJGISTFHUXYEWJXKOZDHQITXEJIJSDSPHLDBDDEWTPXGCCFMWFBIOHND");
    msg.flags = 87U;
    const char tmp_msg_0[] = {-81, 65, -19, 65, 27, -61, 80, 45, 82, -30, -67, -13, -16, 117, 91, -66, -70, -40, -48, 109, -103, -121, -115, -93, -110, -17, 59, 52, 105, -94, -124, -123, -110, 65, -116, -86, 58, 57, 7, -7, 117, 14, 74, 40, 21, -68, -13, -33, -12, 14, 121, 69, 119, -36, -31, -20, 91, 62, 68, 98, -82, -125, -11, 6, 35, 4, -92, 21, -99, -41, -83, 80, -68, 63, -114, -26, 27, 97, 119, -71, 118, 81, -10, -45, -79, 126, 24, 100, 38, -78, 23, -66, 106, 104, -85, -21, -72, 125, 100, -91, 0, 89, -81, -121, 86, -84, -110, 26, 13, 54, 67, 12, -7, 87, -82, 124, -117, -30, -74, -16, 37, 40, 115, -102, -71, 102, -75, 49, 29, -122, 33, -81, 58, -36, 126, 119, -50, 80, 11, 4, 33, -95, 105, -3, 5, 17, 11, 39, 73, -2, 35, -56, -61, -23, 25, -95, -56, -71, 27, -58, -63, -70};
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
    msg.setTimeStamp(0.74889862433);
    msg.setSource(43247U);
    msg.setSourceEntity(124U);
    msg.setDestination(65399U);
    msg.setDestinationEntity(55U);
    msg.sys_src.assign("XEIEZETRPDMSQCSLYLPSJBIBUGFTHQNQZRPRDOMVSQSXMZJXNTFJVBCZBUUSJYWFKIZFFOHVBWZWT");
    msg.sys_dst.assign("ZIYFVHORSKHGXMDKSWCPPNORLMPIGFATZXZECGSHYLUHLQTXKVBIQSYCAFSGZFUVSHJAJIBANHNFLUCUWJMVETNYGDODKBFEGYBBKRUERVJOXNNOZAHPCLSVWEMWJDKNTZDFUAYRMJOTWNRUDLRMEHIDAWGMBJFNLGWTYIFVRZPMQXMA");
    msg.flags = 113U;
    const char tmp_msg_0[] = {-7, -66, 23, 62, 126, 53, -3, 110, -15, 4, 3, -12, 79, -44, -13, -108, -127, -31, 70, 93, 11, 0, -106, -51, -70, -37, -79, 113, -64, -64, -108, 3, 90, 26, -57, 75, -25, -102, 34, 87, 115, 72, -7, -98, -58, 30, 66, -62, 98, -23, -14, 95, -112, -32, -51, 53, -97, -5, -65, 101, -78, -56, -8, -108, -47, -110, 3, 109, -22, 18, 11, -42, -52, -25, 76, -92, 64, 95, 65, 81, 15, 5, 84, 101, 95, -127, 28, 114, 59, -106, 110, 20, -78, -34, -78, -22, -102, -13, 54, -95, -33, 56, 57, 9, -127, 25, 83, -98, 26, -2, -60, -41, -125, 104, -114, -101, -114, 114, 34, -34, 45, 1, 94, 73, -41, 96, 95, -87, 89, 60, 4, -41, 23, 116, -79, -22, -128, -90, -69, -68, -59, 7, -119, -111, -28, -104, -92, 62, 56, 104, 106, 26, -95, -15, 69, 42, -113, 97, -22, -128, -70, 114, 105, -3, 92, -24, -71, 81, -111, 32, 73, 93};
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
    msg.setTimeStamp(0.733966387204);
    msg.setSource(10137U);
    msg.setSourceEntity(236U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(116U);
    msg.sys_src.assign("FRGIDNWGNYDAADRVDELUZVLOPMVLQHCXSNAKZCCBNYVBINSKHSZHCPVCXCBLXIOOXELJFXYEMRJPZAPOXIBKXLUURMSKZWPALISEFZRFTTBSTGJXRJKJNQMTOMGFYPQQDDTWTEQVHNGFYKEQQKCTHJDRUFDTWXPYSVWVPHMVTRFVRFHFBUGNGJAXCMUBISCHENRENGYSQL");
    msg.sys_dst.assign("OHZEYTXQUSWXYHPZACARGXYZQODFPAERQSUYKPPNTBQZSCPZDEHGNCHSKOAQOQLEBJIXWWLWFWZIRCPXHBVATSMMMHINFCVLJIJV");
    msg.flags = 34U;
    const char tmp_msg_0[] = {-7, -7, 11, -126, 110, -72, 124, -4, -75, 21, -88, 0, 4, -12, 28, 121, 19, 56, -42, -4, -70, -33, 1, 10, -58, 111, -124, 82, -22, 123, 81, -37, -125, -86, 94, 88, 92, -77, 106, 59, -34, 64, 45, -35, 34, -55, 20, 14, -42, 74, -112, -34, 55, -118, 26, -4, -128, 115, 123, 1, -122, -94, -15, -90, 118, 118, -19, 36, 11, -37, -53, -5, -126, 99, -87, -39, 98, -21, 94, 67, 20, -103, -56, 43, -24, 104, 65, -65, 73, -107, 83, 84, -66, -78, -124, -80, 103, 110, 68, 3, 72, 102, -44, 66, 28, -102, 121, -27, -73, 105, 33, 114, -24, 72, 39, 126, 30, -66, 2, 6, 59, 72, 95, 9, 71, 30, 126, 64, 93, -119, -85, 89, -54, 121, -31, 90, -52, -29, 12, 52, 14, -68, -122, 68, 124, 119, 91, -35, -54, 73, 96, -100, -94, 53, -23, -17, -40, -93, -37, -121, 14, -105, 115, -93, 17, 102, -37, -73, -101, 48, -63, 94, 54, 89, -24, -107, 99, -11, 126, -109, 23, 80, -40, 120, -128, 114, -107, 65, -95, -30, -18, 121, 42, -92, -25, -40, 101, -123, -81, -93, -54, -120, 61, 27, 68, 25, -49, 40, -83, 45, 85, 85, 26, 35, 47, -102, 36, 49, 75, 54, -109, 98, 16, -42};
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
    msg.setTimeStamp(0.0921156945884);
    msg.setSource(38372U);
    msg.setSourceEntity(99U);
    msg.setDestination(30237U);
    msg.setDestinationEntity(223U);
    msg.seq = 51360U;
    msg.value = 35U;
    msg.error.assign("RXQAKCQRMLGSQFEQVOCCYNFOMIPDIGQCXTDBUHAEUJHJRNZCXVYZIYPLCMHHGACVIGJLXXSBHBSONQSEWDKNVKRBHQMVLCLOPDBWYUVIFQRWGYDOMNUGLJHEFMKOBYDFTJYPWPLKYUSSEEWNINFINVOUFDTZTAYXNT");

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
    msg.setTimeStamp(0.853944962731);
    msg.setSource(52781U);
    msg.setSourceEntity(37U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(63U);
    msg.seq = 15583U;
    msg.value = 17U;
    msg.error.assign("FKUMGGFQSOIXXDZWMTSIFNRMALYZEXLHNNPSAKCFFQADVROUYAJVAJLDHPHYQGVBCBICZKCZTJKJSHYOHTGEYHEXMXTRMIWLMOZXQSCKCNHBUEZVDBMUJZIOTEPICETIRVDOHBGVNDIULWFKCCGTMTMCOQVGLLDUAPVWLYXNBWKEPZMVOGTDASWOVWQTSJRRDUFRIHBDBAUGELXYBKBQLAZQAFJFPPFSJNXYPQWUQEIONYSXNUZ");

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
    msg.setTimeStamp(0.675210592651);
    msg.setSource(29000U);
    msg.setSourceEntity(151U);
    msg.setDestination(749U);
    msg.setDestinationEntity(172U);
    msg.seq = 27134U;
    msg.value = 66U;
    msg.error.assign("DQBCHSBRAGVAPESZZBRWAIYLHRFIVDOYPHCXXQUXGSJJXVTIYCTTJFDCSOWRQXZOBMSXIUQWKFHGZPZLBVEXOPOQWMMTKVRNZGCELRAYPFKUBUKQJQWKVKAZCEZOXIMUXBTBJUNPWNMYFQPYDEDOHEONJGLYMGHDLQFSAUMUPNKBRQHHEYKDYFVFFLNLOXIKGGLIHDCCLPGTLNYFWDVIMAAEAZMCCNERJMRRW");

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
    msg.setTimeStamp(0.716943674765);
    msg.setSource(58915U);
    msg.setSourceEntity(17U);
    msg.setDestination(4229U);
    msg.setDestinationEntity(107U);
    msg.seq = 53644U;
    msg.sys.assign("PCUIQYCJYKFDBTNWTZIEQLOMKIEFBJHXDRQESNDJTVECXWZSGBVBQVWEMNP");
    msg.value = 0.811889344164;

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
    msg.setTimeStamp(0.997102300578);
    msg.setSource(61543U);
    msg.setSourceEntity(108U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(136U);
    msg.seq = 11607U;
    msg.sys.assign("LTZGBLWHBNACWXYRUNOYKYJIWXSGJDJECFJQYRZJDZFTKWMWQNITENEKZDLVHDCPOELGNBXMZUULXUZQHORKZYJUXDGNDOMAKERBTPXRNMFQWRITEZQBVLHUFPSPHKBPJTSTCIAQEURIVSENFYWDHUVZQCSRLQGSWMRACNGFLADAVIHDTWBEI");
    msg.value = 0.0490239264417;

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
    msg.setTimeStamp(0.123316859176);
    msg.setSource(56637U);
    msg.setSourceEntity(81U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(60U);
    msg.seq = 63665U;
    msg.sys.assign("STHQDGPLPCQJPQBUPMWCYTUUICJCNRQQOMELAASIYNPZWHSVKMVNENCIVRBRWHMKLIJGZKZPAGDWUWCGJFDOICYYFNAPAFELBUZYAHDFATQDDUOISIECIXWNJTYMNXLVVBZSOPYDMFZLQLBJGMYXIRKAAHXVQGGZSHOWHKXOGZCFTMRWOXROPEKQLLBHBDHURKYFBNEVSKRGIRTPMWNTEGFSMOBVUDKJFVATJNWV");
    msg.value = 0.444474008301;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.34414123445);
    msg.setSource(6403U);
    msg.setSourceEntity(28U);
    msg.setDestination(34207U);
    msg.setDestinationEntity(245U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.734560731735);
    msg.setSource(53394U);
    msg.setSourceEntity(74U);
    msg.setDestination(45795U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.482690118886);
    msg.setSource(44319U);
    msg.setSourceEntity(121U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(77U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.720775982717);
    msg.setSource(51019U);
    msg.setSourceEntity(158U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(154U);
    msg.action = 244U;
    msg.lon_gain = 0.601679337133;
    msg.lat_gain = 0.106525962204;
    msg.bond_thick = 0.0789982676512;
    msg.lead_gain = 0.358891647147;
    msg.deconfl_gain = 0.600786612049;
    msg.accel_switch_gain = 0.582056779472;
    msg.safe_dist = 0.915101849777;
    msg.deconflict_offset = 0.370762074286;
    msg.accel_safe_margin = 0.187914133291;
    msg.accel_lim_x = 0.934645892968;

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
    msg.setTimeStamp(0.0869416107167);
    msg.setSource(3620U);
    msg.setSourceEntity(37U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(155U);
    msg.action = 114U;
    msg.lon_gain = 0.621417430376;
    msg.lat_gain = 0.426751855924;
    msg.bond_thick = 0.635594816118;
    msg.lead_gain = 0.746204691041;
    msg.deconfl_gain = 0.641834688851;
    msg.accel_switch_gain = 0.419616553603;
    msg.safe_dist = 0.243796784662;
    msg.deconflict_offset = 0.701537944263;
    msg.accel_safe_margin = 0.863079120792;
    msg.accel_lim_x = 0.989805809038;

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
    msg.setTimeStamp(0.789193911752);
    msg.setSource(62878U);
    msg.setSourceEntity(129U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(134U);
    msg.action = 42U;
    msg.lon_gain = 0.371116965113;
    msg.lat_gain = 0.373865911657;
    msg.bond_thick = 0.666440469859;
    msg.lead_gain = 0.580743472136;
    msg.deconfl_gain = 0.902613519448;
    msg.accel_switch_gain = 0.687009503502;
    msg.safe_dist = 0.441196736108;
    msg.deconflict_offset = 0.0971829096823;
    msg.accel_safe_margin = 0.277795446066;
    msg.accel_lim_x = 0.229895452019;

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
    msg.setTimeStamp(0.0474003797528);
    msg.setSource(24174U);
    msg.setSourceEntity(244U);
    msg.setDestination(29735U);
    msg.setDestinationEntity(14U);
    msg.err_mean = 0.983925152193;
    msg.dist_min_abs = 0.422803639233;
    msg.dist_min_mean = 0.0175594176656;
    msg.time = 0.241827132576;

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
    msg.setTimeStamp(0.614610394586);
    msg.setSource(6155U);
    msg.setSourceEntity(50U);
    msg.setDestination(9214U);
    msg.setDestinationEntity(230U);
    msg.err_mean = 0.545328755125;
    msg.dist_min_abs = 0.155237988712;
    msg.dist_min_mean = 0.546984541545;
    msg.time = 0.402379681092;

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
    msg.setTimeStamp(0.460160620496);
    msg.setSource(21387U);
    msg.setSourceEntity(87U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.606936912519;
    msg.dist_min_abs = 0.33969067779;
    msg.dist_min_mean = 0.0258553770528;
    msg.time = 0.385865144193;

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
    msg.setTimeStamp(0.619172725573);
    msg.setSource(22191U);
    msg.setSourceEntity(34U);
    msg.setDestination(38642U);
    msg.setDestinationEntity(243U);
    msg.uid = 122U;
    msg.frag_number = 83U;
    msg.num_frags = 236U;
    const char tmp_msg_0[] = {-26, -118, -126, -97, 79, -124, -87, -54, 106, -76, 93, 82, -78, -26, -78, 90, -99, -40, -20, -50, -82, -118, 120, -53, -15, -50, 107, 7, 37, -7, 54, 3, -72, 75, 20, -83, -55, 12, -64, -58, 70, -88, 102, 63, 51, -117, -106, -31, 82, 84, -71, -70, -89, -62, -67, 54, -45, 7, -124, -48, 30, -39, -74, -94, -82, 122, 65, 55, -32, -59, 72, 120, 52, -92, -85, -81, 36, 110, 28, -99, 15, -120, 74, 69, -123, 4, -106, 37, -81, -61, -1, -28, 21, -77, 21, 2, 5, 111, 12, -42, 7, 36, 89, -9, -49, -63, -91, -74, -121, -16, -63, 118, -55, -60, 107, 117, 1, 108, 75, -40, 10, -83, 99, 19, -15, -23, -17, -39, -99, -105, 107, 7, 50, -48, -112, -18, 93, 105, 114, 80, 112, -89, -128, -2, 92, -64, 24, -59, -69, 116, -121, 80, -51, -27, -119, 88, 66, -48, -100, 70, -6, 82, 104, -66, -26, -68, 123, 118, -1, -42, -36, -94, 110, -76, 71, -48, 52, -79, -39, 29, 120, 49, -30, -86, 61, 125, 67, 115, 88, 0, 82, 13};
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
    msg.setTimeStamp(0.215190092226);
    msg.setSource(20637U);
    msg.setSourceEntity(8U);
    msg.setDestination(64213U);
    msg.setDestinationEntity(209U);
    msg.uid = 116U;
    msg.frag_number = 137U;
    msg.num_frags = 42U;
    const char tmp_msg_0[] = {-29, 56, -25, -92, 16, -89, 125, 106, 80, -84, 54, -38, 33, 82, 16, -115, -18, -44, 82, -60, 45, 84, 11, -119, 40, 35, 85, 17, -76, 66, 15, -77, 87, 115, -100, 52, -107, 126, -22, 111, 88, 98, 124, 2, -27, -73, 31, -71, -125, 22, 37, 56, 36, -84, 52, 5, 65, -30, 109, -16, 62, -119, -124, -4, -61, 100, -76, -105, 100, 38, -80, -97, 110, 18, 4, 82, 109, -32, -101, 6, 13, 116, 53, 60, -110, 44, 84, -63, 81, 9, 111, 51, -92, 52, 80, 16, -56, 116, -109, 108, -65, 24, -66, -26, 54, -18, -12, -17, -46, -26, -108, 62, -79, -51, 98, 24, -54, -45, 6, 92, 6, 64, 83, 63, 28, 48, -5, -71, -39, -5, 98, -19, 42, -24, 27, -85, -101, 89, 114, 113, 99, 49, 121, -126, -121, -43, 54, 45, 20, -97, 114, -22, 50, 71, 86, -85, 104, 89, 45, 23, -120, -120, 96, -42, -120, 60, 99, -23, -34, -59, -41, 61, 41, 24, 105, -79, 19, -97, 9, -91, -101, 45, 119, -29, -88, 113, -40, 96, 126, -17, -52, -114, 85, -110, 45, -74, 45, -69, 52, -105, -15, 71, 124, 90, -2, -21, 112, -121, 93, -34, 94, -55, 29, 19, -31, 95, -13, -24, 68, 122, 98, -70, -2, 61, 68, -126, 5, 43, 92, 87, 69, 0, 82, 96, 64, 21, 2, -75, -59, -70, -36, 101, -122, -16, 22, 68, 42, -29, -124, 67, -17, 11};
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
    msg.setTimeStamp(0.467095827755);
    msg.setSource(11286U);
    msg.setSourceEntity(130U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(165U);
    msg.uid = 247U;
    msg.frag_number = 66U;
    msg.num_frags = 203U;
    const char tmp_msg_0[] = {78, -11, 98, 58, 50, -82, -33, -25, 110, 11, -2, 101, 93, -18, -49, 80, -67, 22, -89, -30, 13, 58, -92, -88, 41, 107, -90, 25, -123, -90, 6, -115, 84, -87, -31, 16, 106, -43, -15, 63, 114, 39, -6, -128, -50, -36, 14, -71, 39, -97, 70, 36, -2, 101, -60, -27, 21, 33, -110, -48, -5, 112, -11, -41, -13, -17, 95, 23, 69, 14, -50, -45, -97, -86, -92, -49, 111, 109, -55, -63, -72, -26, 78, -119, 110, 35, 17, -110, 79, 15, -34, -128, -33, 102, 31, 80, -13};
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
    msg.setTimeStamp(0.142458747641);
    msg.setSource(26808U);
    msg.setSourceEntity(47U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(221U);
    msg.content_type.assign("HRDWHBEJNIHQJOSODCEFLKWMNIHJYOPXLCZSXNALVOKHVBWBWPZPABMUCNZFTYHVJTIBPKYFURFCGQVHWRFASKQETRRYMIDRSDANUXUKLJJMATKUPGGOLQMMHEJYSKQWSCAEPDKNPZEGPQZTIDILQGBHTBSLSZC");
    const char tmp_msg_0[] = {87, -20, -41, 124, 122, 17, 9, -45, 110, -14, 33, 3, -124, -76, -78, -72, -91, -57, 4, -53, -126, -62, -58, 35, 49, -14, 39, -95, 95, 73, 48, 0, 73, 52, 104, 117, -32, -1, 54, 56, -60, 30, 38, 120, 70, -88, -115, 106, -111, 2, -100, 118, -61, -52, 111, 124, -123, -30, 115, -120, -98, 63, -1, -33, 17, 62, -86, 108, 59, 67, -78, 77, 36, 42, 30, 123, 98, -20, 57, 118, -39, 33, -96, 51, -43, -9, 119, -32, 105, 30, 74, -112, -105, 47, 66, 43, 62, 3, 67, -67, -60, 3, -26, -57, 58, 94, 4, -78, -112, -86, -45, -56, -123, 57, -63, -113, -126, 46, -5, -89, 84, 106, -59, 65, 115, -128, 99, -121, -115, 88, 45, 101, 33, 123, -112, -116, 111, 68, 29, -31, 20, 48, 77, 84, -97, 83, 101, -73, 57, 80, -4, -99, 11, 30, -39, 18, 9, 86, 14, 108, 31, -124, -93, -45, 37, 49, -49, -68, -114, -35, -19, 85, -64, -86, 47, -21, -46, 115, 124};
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
    msg.setTimeStamp(0.884571426635);
    msg.setSource(12895U);
    msg.setSourceEntity(140U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(125U);
    msg.content_type.assign("CUEYNBYQNTSAOHIWXKDXRWOTNMUCPPFAWYHLRCDKBSKVYRMGSTUPCDVVJDOHAJEBBFLXIZLXNVBTSNWSTEEHGEHHPRZEPFSVQHGGJUNDODOFMPMGRCXZTFFQMKRRTKQYRONXBLINWUABJHYZKCSLJILMYOAZLXIYIUFQLVXZPVEYIVIJFZOLDSWCJRPBDTEANGUFZEWONPHGKIAYQLKQKBFCMXBQTT");
    const char tmp_msg_0[] = {122, -127, -105, -26, -118, 105, 112, -41, -99, -102, -43, 35, -30, -41, 43, 106, 0, -11, -24, 26, 86, -102, -46, -110};
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
    msg.setTimeStamp(0.665249230684);
    msg.setSource(20805U);
    msg.setSourceEntity(155U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(94U);
    msg.content_type.assign("ISYLUWUJMERGSWJAKSHYC");
    const char tmp_msg_0[] = {32, -51, -66, 49, 108, 52, -87, -85, 113, -63, 87, -12, -19, -37, 66, 3, -107, -99, -38, -83};
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
    msg.setTimeStamp(0.444676416266);
    msg.setSource(34110U);
    msg.setSourceEntity(88U);
    msg.setDestination(20507U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.421760900286);
    msg.setSource(21860U);
    msg.setSourceEntity(43U);
    msg.setDestination(9032U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.715947313853);
    msg.setSource(2529U);
    msg.setSourceEntity(63U);
    msg.setDestination(55485U);
    msg.setDestinationEntity(94U);

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
