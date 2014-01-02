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
    msg.setTimeStamp(0.532771923938);
    msg.setSource(29883U);
    msg.setSourceEntity(24U);
    msg.setDestination(42611U);
    msg.setDestinationEntity(197U);
    msg.state = 14U;
    msg.flags = 2U;
    msg.description.assign("XPHDDADFFLOOCMUHHZEBAHYMLKXERQWXTMXIUQFGDOAVJTGYJLUZOGSVDOZDIKLLWFZRIOMWGPEXPKPKRJEDUMBCQYRMBYNGTHDVKPGNPKAGAZOGHQKCFUQLHZNNLSSQYFQBSQJZHECERJNNNVTNTVWETBTMKRFCPOICRNBWX");

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
    msg.setTimeStamp(0.204470721004);
    msg.setSource(226U);
    msg.setSourceEntity(57U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(129U);
    msg.state = 100U;
    msg.flags = 36U;
    msg.description.assign("WSKIDXDZWCAERVICVVCXBLQZYMMHCNXFYTFIOYMJXQURDDQCNERQDHZUPCUPAKZQWSLMEUVZJHKNFJHXGTZYWBYJCANDSQVKUOMGGYIXVQLPNPAZOSIUPTTOKIXVBOLSUVFOLUAQFKPVGRGGFSAMBKTEAWCVJLWKPNGGTHKBMEXEC");

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
    msg.setTimeStamp(0.649215933221);
    msg.setSource(40398U);
    msg.setSourceEntity(178U);
    msg.setDestination(49529U);
    msg.setDestinationEntity(117U);
    msg.state = 175U;
    msg.flags = 9U;
    msg.description.assign("MTVJSCMYCBCRFDOIOXYPGQTOHEPZTONGDUMZGILWGYTHILRAXAHUPDWQGDJZOYTUBSOIYXCXXSVYCST");

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
    msg.setTimeStamp(0.822219764633);
    msg.setSource(12987U);
    msg.setSourceEntity(33U);
    msg.setDestination(54787U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.896400808274);
    msg.setSource(62331U);
    msg.setSourceEntity(222U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.0665844775043);
    msg.setSource(64241U);
    msg.setSourceEntity(65U);
    msg.setDestination(11410U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.676739131668);
    msg.setSource(5467U);
    msg.setSourceEntity(114U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(109U);
    msg.id = 78U;
    msg.label.assign("JJJRDCZOHMKNJMZWYUSJKEVSFOIDGNXYLRCPVJVCGBMCZEOQKGWVTISLWHMTVKSCYBFQEQY");
    msg.component.assign("MEDZAFPOUNFWHOQMOTRBPGLEPXTXTYFRMKYKSLHQPCUNFMVKZDJBZVQDXRWMIWZIPVAUHXETGVJXYHLAXUAYBRSGUGLXXRPKOCCTGLYREDRPQWUVOANNCNLJCVFLDEEFLHBTIHTJSCYQTVDCMKKGJMOBXYVDOHMOI");
    msg.act_time = 11238U;
    msg.deact_time = 31557U;

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
    msg.setTimeStamp(0.227011416245);
    msg.setSource(48634U);
    msg.setSourceEntity(190U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(5U);
    msg.id = 204U;
    msg.label.assign("UFJKIMBVFY");
    msg.component.assign("YKDCZCFDRDTENSJQWIAJWRRMEUYNPWAYAUZZYUTXKFXMUGYVFDGEFLSJQRTSXOYNPNDVKVHVLKGICJQQOWYSXHEHQKTGCASRMVZCAIXPFVNMGWLRHHELUQRZQQPEYFWSDVIZOSBCTUONBCFVAYHUATLALKIJTGNBDBKJBAIWVQTZJLISEWRENADJHMPKPCLWEBGMQNMPUXSBMCXNZHGOUOVJBJXIK");
    msg.act_time = 4663U;
    msg.deact_time = 7677U;

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
    msg.setTimeStamp(0.843338649174);
    msg.setSource(55082U);
    msg.setSourceEntity(208U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(184U);
    msg.id = 162U;
    msg.label.assign("LMDPONXAZFITBYYQBDPQJVHBNWSGTCNHWRWDJVGEGFLZABYXQAFPJIRTUWMGKIOTETWZWUXPQDTLTOJBKQXESKLLYRECUXJKCGOHBHPRFYIOEUSRMBTMUNOWKNXONMYRPFCYLMXLYUSTQFVSRDSUSUMIAKBMJBZPECKGGICFQRMNVZTHCJXHPIZDBCGAEOJFVVVZPXKLMEXSJLIRONEVGAHYDZRFNQPDVJ");
    msg.component.assign("GRTYWCQGDUHEGUPTZBUYRGQRHWRGLZESPVJQZOIQDUMJCEMCPXIHZWIDWBESOABIPOCTOHEXGJRLIYDNKKKNYNAWDBETLLYUXVUVJQAODVOCEMMEUCBITTVZLGSMNPOTQJHCAEZCBWANXJSJXLWVUHFYBABHLNAKKJTNMWDRXTRODSRWLMYFVKUDLASFWNIXQAFKYSCMGQFZVAHP");
    msg.act_time = 42527U;
    msg.deact_time = 65013U;

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
    msg.setTimeStamp(0.637490546243);
    msg.setSource(27729U);
    msg.setSourceEntity(45U);
    msg.setDestination(39131U);
    msg.setDestinationEntity(126U);
    msg.id = 236U;

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
    msg.setTimeStamp(0.860212985855);
    msg.setSource(40758U);
    msg.setSourceEntity(138U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(206U);
    msg.id = 30U;

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
    msg.setTimeStamp(0.574518339555);
    msg.setSource(43385U);
    msg.setSourceEntity(234U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(75U);
    msg.id = 110U;

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
    msg.setTimeStamp(0.536448174285);
    msg.setSource(35051U);
    msg.setSourceEntity(85U);
    msg.setDestination(4081U);
    msg.setDestinationEntity(118U);
    msg.op = 225U;
    msg.list.assign("BRAXTUKUHMUDFVULRJJHSZQMHZDQXHGHPTOAUVIVBDZGRKCSCPRYJMSJGACQPYELKPTSAXZBBEMUZTFVQFSEOKKTJLDAIBWULCMOOPKENTOXLOJWQBVLIUEASUHPCYYJAWVIYLCBGHNOBHKLNYCVRIWDNUFTAKADZFWPFIWRXGZGIZYGEFJVXETKGMCSSYOEIFJPWNRNVNNYPQITEMBEPLRVQRLGSOFZWGWB");

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
    msg.setTimeStamp(0.307790696545);
    msg.setSource(41718U);
    msg.setSourceEntity(182U);
    msg.setDestination(19419U);
    msg.setDestinationEntity(251U);
    msg.op = 205U;
    msg.list.assign("RSSWQFDNSQAILTDJQHJAQTJGXRGNNJQUROCEHTVTDMEFSVFOTHZAXMUZHVZFJOOWJYBWVIJYUKWQEMFAKYMUBYNQPQEWCANWXEDZIPZ");

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
    msg.setTimeStamp(0.220427961714);
    msg.setSource(37814U);
    msg.setSourceEntity(25U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(119U);
    msg.op = 166U;
    msg.list.assign("PTXSUVAFEMUWSQIOCDOZUKYGAA");

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
    msg.setTimeStamp(0.150271320332);
    msg.setSource(7674U);
    msg.setSourceEntity(101U);
    msg.setDestination(6019U);
    msg.setDestinationEntity(142U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.731307676626);
    msg.setSource(8803U);
    msg.setSourceEntity(47U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(192U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.109214366563);
    msg.setSource(7303U);
    msg.setSourceEntity(135U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(30U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.19168802339);
    msg.setSource(32859U);
    msg.setSourceEntity(31U);
    msg.setDestination(25725U);
    msg.setDestinationEntity(121U);
    msg.value = 60U;

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
    msg.setTimeStamp(0.0782494409381);
    msg.setSource(16049U);
    msg.setSourceEntity(30U);
    msg.setDestination(39585U);
    msg.setDestinationEntity(110U);
    msg.value = 213U;

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
    msg.setTimeStamp(0.60609597417);
    msg.setSource(359U);
    msg.setSourceEntity(11U);
    msg.setDestination(6337U);
    msg.setDestinationEntity(160U);
    msg.value = 67U;

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
    msg.setTimeStamp(0.867114979064);
    msg.setSource(48897U);
    msg.setSourceEntity(221U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("YTPXFXDNVBLJYVPMHZJURANXDUJYATBMVCDMZTKWBW");
    msg.message_id = 31845U;

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
    msg.setTimeStamp(0.976045835338);
    msg.setSource(61411U);
    msg.setSourceEntity(74U);
    msg.setDestination(41334U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("HRXTQRWGGDLTOOIMFSWDEMYSWZLQOUNJLTSJBUQRXEOGXGKNQVYLKMCOVJATFUNQACMEMVKRIXBHPEUPWKVAUMXNSUBLPSJCYAHKHQNTEJEFSNJCFXRLUPYDKWDGECWGWDKCAXBGOIVZJMBBZKYISOYRYPAKYIPBAMFERCZ");
    msg.message_id = 21452U;

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
    msg.setTimeStamp(0.18447803132);
    msg.setSource(61620U);
    msg.setSourceEntity(72U);
    msg.setDestination(4261U);
    msg.setDestinationEntity(92U);
    msg.consumer.assign("SBVCFLWPLYCVKUKHTBNXUJHNJZGXDGFRUVEWJNWYAITTEEIJILOHVAGADNPBGKOUCQYHTADIADTPEZBIBWYOOXRQIMYLLSNMTROVHEJNWPLFCAPTYOKCM");
    msg.message_id = 45077U;

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
    msg.setTimeStamp(0.875771236767);
    msg.setSource(20754U);
    msg.setSourceEntity(64U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.15420262496);
    msg.setSource(53931U);
    msg.setSourceEntity(248U);
    msg.setDestination(9812U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.622098922196);
    msg.setSource(57619U);
    msg.setSourceEntity(135U);
    msg.setDestination(12999U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.198987176331);
    msg.setSource(57029U);
    msg.setSourceEntity(180U);
    msg.setDestination(19745U);
    msg.setDestinationEntity(110U);
    msg.section.assign("YZBRYYHPCTSTFWMMXWBCBWHVJERSDIGXONZTFZPOKQPFCFOJSYPKXAAXRDSIULZNTTZLQBAUMQXVUJVQBIQHCUGYRQKIPXJFDCHJTAEDDWAJFGLEKXKXAXYVMZHOIWSZHRJUMMEGGQOEOTIOAGCCPOYHWWAMKSENUWZNFICJQBKNLLZFIBVGSS");
    msg.param.assign("WTBQVRMCMKUCRICZOCYHODEYHYNOLNXWMKIUYOGEFGRIBHYHBLMIJLWSNLXPSZBJXEQIWOANJQZCHIPGOPBPKDMPYVWUFMBOGIOMDSKGXPJRJRZDRETTFLCKSHAVELGFUHYLUBMVWQXYBIANZYAFJQWDVCESLRURSODTOCVQQMZCPPABZFXDGTSTFSDNLHXQXFAQSJVFYTKZ");
    msg.value.assign("GJZRAHZLBRINLZQCPSUXRAQDNALMZKRWPUYMBXVKGRZDHJBHDBKFJMTXJULIPTXMHAVWRQSPWQNGMJKAQRSVUVVVEECGNZADXWAOSXLQKSOBXJWDVDYLOIHOFSJTLIAIIQPMHENCFU");

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
    msg.setTimeStamp(0.115813646908);
    msg.setSource(58316U);
    msg.setSourceEntity(248U);
    msg.setDestination(50375U);
    msg.setDestinationEntity(140U);
    msg.section.assign("RDKCTYVLMZSKJASRYAWUHSQDNNGDKFNVVIUZHFZ");
    msg.param.assign("VZYJTYWSLHMZFBRTSXCPVEVGCSWZGSQJLMUMVIERFKIDRZIFMQFOKZAVOMYLWLFOTDQDLDEXSZRNVCUXGDMUYGQTKLABYGBBEAOJOYNERJTUCDNRERHYGCJJHPICSYJBWQSOUUCYVIUGFDQBRMQTWNDGYKTFAOEANODZXO");
    msg.value.assign("KDSFYLAHWHEMKTXEVDBYPGTRVRGHWDEKOGFWIRILWJDIKSIVIHUTLBOMEQTZDTXQJRSWYWHVJNURBMCGXEUNHMRAMHSCCZAYZRCAQKEOYVGEDPVFVIEKCKUAFDCRPZTNXTKNOITXMZWJPVSBOPCBMXAQXBNSTJFB");

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
    msg.setTimeStamp(0.749049890243);
    msg.setSource(65163U);
    msg.setSourceEntity(25U);
    msg.setDestination(7618U);
    msg.setDestinationEntity(246U);
    msg.section.assign("JRVLTNTEPPLZGKAMQJBEQRKWRVGENMAGHFQGSDBSDKKAFSWFMEUQYQLSIMKKOBWHYPLFGODLLSDZTEYTZDPOSUWUWIPNECQGIJUNCYFHEJXOJPTBDZHQGRAMMCTNMRQJVIHEZBBAVAWXTOTNLBILYZNOWZ");
    msg.param.assign("VXRPPTNVCHXIGYUMIAJNCOAAHKWANCFHQBNQSBDEDDRTWQXFBOSKNJXWTMINEVYIZAKPENWIDOMIVDZRDENPEQSTQHQCKYOZCLTBJTVOKGLVLOYPIVQREXMRLWVQWBFUULPBZGRFUBTGSFOUXLWRPAZJAKFIFMHSPLLXMQRMRLZDYJECO");
    msg.value.assign("UBYXFCPALOVPKYEMMDEENESMBVSUAJWDTXEKHOSIFFHXNPVAUUJCMTSGLYAFHGGJXTIHKPMPVUAZHWDSFDULDYKHXBBXNGNJRRRUFQZKQGHFCUYFRIQQWTMZOYQLWQQLGAIWKBXTVMXQSJUCNBGRXTPLXPWAWONPQAYKIWSP");

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
    msg.setTimeStamp(0.681537995337);
    msg.setSource(26772U);
    msg.setSourceEntity(36U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(221U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.893509861055);
    msg.setSource(49469U);
    msg.setSourceEntity(151U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(97U);
    msg.op = 104U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QGSYQYRKRCXRJPYZKKTIEGHPFEDXWBKXZLEMZWFPZEMMHPDJPPHRIKMKYAVVUUVBAYZTSOJCBUGQPOYNGVZVVEUTVTOHAORGLDUOCQOUSVEBBAIXDHQDGFWCRWNLAIZXYDMNPNIFXEYKARAMOFHHPHTKNQCDBVUAEMJQVDGRXTLLKSWSUELXLFJWZMLAMFQUFNCBTXNSGHTXZWIHG");
    tmp_msg_0.param.assign("KFOHQCNFVRMEHAYQXYTGVCXMSZVELSTQKRTIJZEXLXKWZIYBSDOCBEJVKYPUPACAHWAEQCCYXJGGXZJVISNWIGCGOBWDOWMFGXNQPBIWDLPMDUQHFTQOVDXYINHNRAVJNXFJIQDVETOENRUXLPTFZMRDBHPLCSEWBUHDHBIYLJQTOYKTPBJOFDUFNZKSNBRKTRPYLICTF");
    tmp_msg_0.value.assign("PARQLFVRBZUBGMPCAVMASETBTGEYICHFARTFOFOONJHKEYHGMPFVLBNTLEJXLGFQKCOMFUYPXYNAUHWMAASRKVPMEHEIJTXBCJMBSRGQPLKWPUBWDNJYCYNTKOIULVPGGNWHLDKWASXIXSWRGQQMTVJHXZDNGFOVSKXMIXJQQWNSXITIRAUNXBBCEFDZSKOKPEMOLQHKZRZCL");
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
    msg.setTimeStamp(0.408365570122);
    msg.setSource(42182U);
    msg.setSourceEntity(59U);
    msg.setDestination(48396U);
    msg.setDestinationEntity(207U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.393620199203);
    msg.setSource(53364U);
    msg.setSourceEntity(66U);
    msg.setDestination(20152U);
    msg.setDestinationEntity(18U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.651976366642);
    msg.setSource(53001U);
    msg.setSourceEntity(27U);
    msg.setDestination(45446U);
    msg.setDestinationEntity(241U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.0023004954609);
    msg.setSource(9646U);
    msg.setSourceEntity(216U);
    msg.setDestination(4563U);
    msg.setDestinationEntity(36U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.12699653745);
    msg.setSource(56482U);
    msg.setSourceEntity(239U);
    msg.setDestination(42541U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 237U;
    msg.step_number = 225U;
    msg.step.assign("DCWQARUJQMDZYOKFAARQIGPTXJTIQVYCGLKBSPUMZDKRISQRBWGEUAFZCXMTSYJOPJUIAFNHOMAWNSGLUBIAHGLOWYDTMNWENLNZBMYXNGGXHHVWPTXSCHYDOFLCCESP");
    msg.flags = 195U;

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
    msg.setTimeStamp(0.757096384966);
    msg.setSource(57568U);
    msg.setSourceEntity(77U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(8U);
    msg.total_steps = 94U;
    msg.step_number = 29U;
    msg.step.assign("PNLSKOSXWCEJQELGIVYHKMNEEBBQJXTBARJRHUCFBNZUNVDWIXATOZXLQADPIEZNZROSAKNKXLOZWIKGHUFBWVBAYUJVMQMGHMSXGZOHPHOTANTHTMPQQELODUFVFYYRLJVMLPKIFWFBRSCAJUZOKYMXJUHKQDEDSGBEJDWTQBZYRTUGFEHDIAWSFYPMNCNZGCCSWTV");
    msg.flags = 23U;

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
    msg.setTimeStamp(0.189023817132);
    msg.setSource(25677U);
    msg.setSourceEntity(185U);
    msg.setDestination(46799U);
    msg.setDestinationEntity(34U);
    msg.total_steps = 216U;
    msg.step_number = 178U;
    msg.step.assign("LQIVHPUFDWYABWOKFDFLFKBQALCUATKNEGSVBAQWDQFESKPABPNYVPWFZRMHTCLUIKPJITDYVRLANBKIHGDFGUNYNYY");
    msg.flags = 50U;

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
    msg.setTimeStamp(0.454516986662);
    msg.setSource(9329U);
    msg.setSourceEntity(63U);
    msg.setDestination(29513U);
    msg.setDestinationEntity(174U);
    msg.state = 124U;
    msg.error.assign("PNCZLELJIIAJPOVUCZJXSRMMJQXRLKXFMZSKFYGVFIBBRIAPNHEMHMRYGZIQRRCHOI");

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
    msg.setTimeStamp(0.700407320278);
    msg.setSource(60845U);
    msg.setSourceEntity(62U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(82U);
    msg.state = 222U;
    msg.error.assign("CTULFASXPWHNTXIQOGAUCKVEILGJHGQLPRFRJFUBMYUSYJINQGAXFSQQYENSYHOTNXKCGJFCUBKKDPRMXVIYTQPLYVSDAFKRANJCVTWSBREDMAOGXPIQWJAYWBDPGZTHFLNRBNDSJVNSZMHMIURZP");

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
    msg.setTimeStamp(0.531219726872);
    msg.setSource(35232U);
    msg.setSourceEntity(176U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(38U);
    msg.state = 138U;
    msg.error.assign("ULBLEMCSUIEVCKHAOGBQFQBPXOHWWFWCBLANHGBQTKYNIPNIOHYSMMKNAGSOSJZEKDPTGULUNBDZDDITYNDNCEPJRCHDZYXDAU");

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
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.314769763814);
    msg.setSource(8585U);
    msg.setSourceEntity(114U);
    msg.setDestination(9593U);
    msg.setDestinationEntity(74U);
    msg.op = 67U;
    msg.speed_min = 0.88752444016;
    msg.speed_max = 0.733443854517;
    msg.long_accel = 0.350863094837;
    msg.alt_max_msl = 0.00906587376189;
    msg.dive_fraction_max = 0.93571992638;
    msg.climb_fraction_max = 0.85410424635;
    msg.bank_max = 0.434433561257;
    msg.p_max = 0.585017509207;
    msg.pitch_min = 0.19897494942;
    msg.pitch_max = 0.889349029952;
    msg.q_max = 0.944332663406;
    msg.g_min = 0.922799609798;
    msg.g_max = 0.853907612218;
    msg.g_lat_max = 0.235951335905;
    msg.rpm_min = 0.950278176172;
    msg.rpm_max = 0.942515072868;
    msg.rpm_rate_max = 0.934612313367;

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
    msg.setTimeStamp(0.644083072529);
    msg.setSource(50583U);
    msg.setSourceEntity(149U);
    msg.setDestination(56529U);
    msg.setDestinationEntity(231U);
    msg.op = 153U;
    msg.speed_min = 0.591593150089;
    msg.speed_max = 0.218543012602;
    msg.long_accel = 0.973468723731;
    msg.alt_max_msl = 0.098268851014;
    msg.dive_fraction_max = 0.638775761709;
    msg.climb_fraction_max = 0.103766894019;
    msg.bank_max = 0.989402929948;
    msg.p_max = 0.372726584244;
    msg.pitch_min = 0.880705314061;
    msg.pitch_max = 0.702727870252;
    msg.q_max = 0.587955096891;
    msg.g_min = 0.830450789898;
    msg.g_max = 0.454431126804;
    msg.g_lat_max = 0.390809093102;
    msg.rpm_min = 0.995447529117;
    msg.rpm_max = 0.10230883705;
    msg.rpm_rate_max = 0.705644662169;

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
    msg.setTimeStamp(0.162006798308);
    msg.setSource(6377U);
    msg.setSourceEntity(60U);
    msg.setDestination(22963U);
    msg.setDestinationEntity(177U);
    msg.op = 205U;
    msg.speed_min = 0.841078560707;
    msg.speed_max = 0.272694532884;
    msg.long_accel = 0.059981146263;
    msg.alt_max_msl = 0.198191811889;
    msg.dive_fraction_max = 0.533021988542;
    msg.climb_fraction_max = 0.158645909588;
    msg.bank_max = 0.145344205767;
    msg.p_max = 0.569444250028;
    msg.pitch_min = 0.810770563265;
    msg.pitch_max = 0.856205814402;
    msg.q_max = 0.397058975136;
    msg.g_min = 0.485233465562;
    msg.g_max = 0.220879681727;
    msg.g_lat_max = 0.839314331748;
    msg.rpm_min = 0.0643399862329;
    msg.rpm_max = 0.570805313831;
    msg.rpm_rate_max = 0.909101011015;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.701247950157);
    msg.setSource(50029U);
    msg.setSourceEntity(245U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.883935086271;
    msg.lon = 0.511379191857;
    msg.height = 0.52278677209;
    msg.x = 0.0326360039816;
    msg.y = 0.396350560687;
    msg.z = 0.900875266601;
    msg.phi = 0.659477378932;
    msg.theta = 0.896688053397;
    msg.psi = 0.672611611544;
    msg.u = 0.748376700089;
    msg.v = 0.652627786858;
    msg.w = 0.314917523818;
    msg.p = 0.704039605939;
    msg.q = 0.848056471508;
    msg.r = 0.221998456254;
    msg.svx = 0.898101267446;
    msg.svy = 0.161768378336;
    msg.svz = 0.957745592629;

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
    msg.setTimeStamp(0.96651240335);
    msg.setSource(61572U);
    msg.setSourceEntity(225U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.770951707309;
    msg.lon = 0.649931875624;
    msg.height = 0.946219506396;
    msg.x = 0.826887409254;
    msg.y = 0.0363687830661;
    msg.z = 0.332576291333;
    msg.phi = 0.0968338992995;
    msg.theta = 0.658560186195;
    msg.psi = 0.424088138427;
    msg.u = 0.825427698527;
    msg.v = 0.969898214309;
    msg.w = 0.894924734759;
    msg.p = 0.219361011831;
    msg.q = 0.931611935818;
    msg.r = 0.0937908674535;
    msg.svx = 0.803891272852;
    msg.svy = 0.0620916359425;
    msg.svz = 0.625628976683;

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
    msg.setTimeStamp(0.0880705697101);
    msg.setSource(3062U);
    msg.setSourceEntity(60U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.600021562073;
    msg.lon = 0.447776792323;
    msg.height = 0.656086115467;
    msg.x = 0.00169443663326;
    msg.y = 0.0037897230906;
    msg.z = 0.668372527033;
    msg.phi = 0.616492755756;
    msg.theta = 0.0767749492649;
    msg.psi = 0.719180228237;
    msg.u = 0.873237825667;
    msg.v = 0.00760611424263;
    msg.w = 0.915879359925;
    msg.p = 0.711861670469;
    msg.q = 0.0427506206667;
    msg.r = 0.0818243046682;
    msg.svx = 0.392423612277;
    msg.svy = 0.50075942735;
    msg.svz = 0.666984224442;

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
    msg.setTimeStamp(0.121016940979);
    msg.setSource(41013U);
    msg.setSourceEntity(223U);
    msg.setDestination(11055U);
    msg.setDestinationEntity(187U);
    msg.op = 125U;
    msg.entities.assign("PCSFEJKCBFIDCBUOOKDBGIYUNRATYEOMK");

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
    msg.setTimeStamp(0.923354864395);
    msg.setSource(3711U);
    msg.setSourceEntity(108U);
    msg.setDestination(24384U);
    msg.setDestinationEntity(5U);
    msg.op = 24U;
    msg.entities.assign("HEBTRKLPFSDVGMXGGBRAGOZYNRNENEFLQMHNVEBAJPFCVVVTDPMVSLSUAZOEUPOWQJWKDPUVZBIFGOYUHYDYIASZORCLAUFKXURHDKYSJXSKGJNRKAFWLJYIMNRLLHC");

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
    msg.setTimeStamp(0.410265039212);
    msg.setSource(62246U);
    msg.setSourceEntity(239U);
    msg.setDestination(18842U);
    msg.setDestinationEntity(109U);
    msg.op = 174U;
    msg.entities.assign("WUAPHIZVNSFBTAQIAOTODCNRIOROAKLYHMQYGNXMKQNKKIVJTSXQMNAEWHUCNSPEUMELSVQZLWQGSBDKOVBZJUPKGSFTRHAZUAWOBQRXZIDLFFCUCKPTXDMDHBMJTLCPXPFXSETVJCJWGRPWKBTDECUDSEYJLEIEOYWOBXEF");

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
    msg.setTimeStamp(0.546524585079);
    msg.setSource(65120U);
    msg.setSourceEntity(97U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(153U);
    msg.type = 145U;
    msg.speed = 58026U;
    const char tmp_msg_0[] = {120, -34, -27, -75, 41, -38, -40, 67, -1, 68};
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
    msg.setTimeStamp(0.678501486625);
    msg.setSource(6561U);
    msg.setSourceEntity(79U);
    msg.setDestination(39048U);
    msg.setDestinationEntity(40U);
    msg.type = 214U;
    msg.speed = 58581U;
    const char tmp_msg_0[] = {-93, -78, -126, -23, 106, -18, 57, 43, -63, 27, -5, -68, 49, 83, 53, -111, -79, -91, -72, -94, -35, 98, 5, 12, 0, -96, 101, 55, 117, -50, 43, 21, 40, 1, -46, 58, -96, 67, 104, -96, -89, -17, 63, 6, 87, 72, 17, -7, -85, -3, -22, 126, -39, -119, -47, -37, 32, -95, -4, 86, 47, 67, -115, 73, 91, 53, 82, -121, -109, -11, -83, -127, 100, 0, 96, -24, -101, -118, -49, 70, -58, 43, -63, 83, 61, -14, 55, -55, 118, 59, -103, 80, 114, 78, -9, -111, -73, -126, 59, 121, -86, -104, 84, 102, 81, 38, -9, 9, -92};
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
    msg.setTimeStamp(0.482896409969);
    msg.setSource(11365U);
    msg.setSourceEntity(206U);
    msg.setDestination(64284U);
    msg.setDestinationEntity(155U);
    msg.type = 28U;
    msg.speed = 11423U;
    const char tmp_msg_0[] = {17, 21, 100, 125, 4, -70, 120, -13, -27, 30, 53, -119, -12, 5, -18, 11, -87, 119, 31, -81, -28, 100, -104, -109, -71, -15, -66, 18, 74, 55, 81, -97, 117, 73, 94, -3, 86, 98, 57, 12, -54, 99, 114, 71, -98, 71, -32, -120, 111, 45, 12, 49, -29, 105, 76, 15, 43, -17, 107, -69, -72, -52, 28, 14, -52, -17, -78, 111, -93, 102, 85, 74, 34, 72, 21, 42, 42, -20, -38, 77, 17, 32, -47, 116, -98, -89, 57, -128, 94, -68, 23, -39, 89, 79, -4, 25, 61, 55, 35, 35, -45, 2, 75, 120, 62, -118, 24, -32, 79, -7, -89, 17, -60};
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
    msg.setTimeStamp(0.300679387119);
    msg.setSource(11413U);
    msg.setSourceEntity(96U);
    msg.setDestination(19224U);
    msg.setDestinationEntity(27U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.194546660506;
    msg.bank2p_pgain = 0.832392258151;

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
    msg.setTimeStamp(0.0814402809586);
    msg.setSource(47730U);
    msg.setSourceEntity(98U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(248U);
    msg.op = 180U;
    msg.tas2acc_pgain = 0.4298126153;
    msg.bank2p_pgain = 0.968404717354;

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
    msg.setTimeStamp(0.118361046277);
    msg.setSource(29679U);
    msg.setSourceEntity(6U);
    msg.setDestination(27904U);
    msg.setDestinationEntity(254U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.903587283344;
    msg.bank2p_pgain = 0.198425846625;

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
    msg.setTimeStamp(0.607643959639);
    msg.setSource(34541U);
    msg.setSourceEntity(178U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(253U);
    msg.available = 885590701U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.286827935877);
    msg.setSource(9698U);
    msg.setSourceEntity(190U);
    msg.setDestination(26312U);
    msg.setDestinationEntity(20U);
    msg.available = 2594669858U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.173194001918);
    msg.setSource(27100U);
    msg.setSourceEntity(81U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(136U);
    msg.available = 2703749815U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.96135103358);
    msg.setSource(55170U);
    msg.setSourceEntity(182U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(119U);
    msg.op = 65U;
    msg.snapshot.assign("VPDYMAXVLLFVZOSPZEKZFRAYQQSLHXEWBNYASFYTHSCNDUNHGMKPMTYKCOOEOAL");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.515069065329;
    tmp_msg_0.lon = 0.0624520720438;
    tmp_msg_0.z = 0.39376074653;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.896598035563;
    tmp_msg_0.speed_units = 178U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0873066930941;
    tmp_tmp_msg_0_0.y = 0.844960688948;
    tmp_tmp_msg_0_0.z = 0.676310757172;
    tmp_tmp_msg_0_0.t = 0.150081211553;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.146244189664;
    tmp_msg_0.custom.assign("KQRZNMIDVMIJLOXAADLXWQNKQUBGQSPJNDFLESJDQDYNTZICVMQRRHUGWBFQGJFBATYOTHCKLYFOPQTGXXVVCSRWFEGLHRDSRBWDLRIMBYZDHSFTFMPXCEPBVEOHKECZZGUMQPHIZAWNBJOXAUJUUJSZMOCYBZGNADHYGPTGPTZSQTLXYNBHVKJAKEEDLATEEUEUKFWKAWPWJNUIGYUWAOCOOBPJWCVVK");
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
    msg.setTimeStamp(0.313951774925);
    msg.setSource(28346U);
    msg.setSourceEntity(42U);
    msg.setDestination(52119U);
    msg.setDestinationEntity(166U);
    msg.op = 210U;
    msg.snapshot.assign("RXDTDHKBSPWCCVQXYJJOGMONJNCIRKYLRAGZAOHZKPANFVBSQZLPROSEWQOECOMYIOSKNTSWFGHFBWMLVFXAJRVMZQJBFDTKCLRMUGLJCNXLJAVODESIUPYCYPABETSQWZKXIMSZVJDLHAKSKHIUHYLUMRVDKUTBMMVTITSLUQB");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("IURJRMWXWFGYJOVRCBOUXBLIFWSIZBYVSYFGENFHZNZXSBOGEWQTMRJZGSPVZPCQEUIJYGIODACGMJYUZLYYADTKZCMLHEALXDJSQPNOINHMMSHCHUTLDRANTFPJJKXWKUUKNSMXWZIBXPGLRSBDPJQZOPSNXOJNHQQFABEDIKHHTVMARVEDGVIRXM");
    tmp_msg_0.service_type = 173U;
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
    msg.setTimeStamp(0.250256427622);
    msg.setSource(56581U);
    msg.setSourceEntity(55U);
    msg.setDestination(23915U);
    msg.setDestinationEntity(145U);
    msg.op = 137U;
    msg.snapshot.assign("DUFEGGOXPXVEVRMTMKWLKJQZHPNFTSELSTAFVGXPNFJATZYKKOQLQIIRHPBJDZSCONDVJKXJWVJGHIYXECREFTKKCABUFTYZAZFRBZLZYSXDCRQSVEMOIYVCURULWYXOAGNDIBBXIPNPQDUZMNBGWWAGSHNXWJJSHHDUHGBAWNMQZRMWSFCVVUGKWMJUEOEBCOTIPMAJRUFQXBIILQTQ");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 189U;
    tmp_msg_0.mnames.assign("UHEOCKOCXUYQNQEZAPVZ");
    tmp_msg_0.ecount = 183U;
    tmp_msg_0.enames.assign("AHIGEWPDKNIOQOYSYIVLWLGYVMTFDPWRXWYHFLCMOTTGHQHUCATEVALUREOBSWWABZQHLZMUYIAOBGCYLRPZSHUGJTQXCCMJGDIJPKYMNJECRNVXTQTZMHFLXBHMVXNWSEKURDDLZRXPJOEEVQSOBVNVLPQGZFCBDJSSKERZJKCITEQFSPQMUVNRPFONFMNJHKYCDRRCGIAFOLHNBDSIUYUNKAASGBXWPXDUMZOKFDKYZXTKBVWU");
    tmp_msg_0.ccount = 98U;
    tmp_msg_0.cnames.assign("ANNTNMQHGPMXTRHZDNVPVXSXSRKWSYLKNDPKRURLUAZBOLBEVNWRZQSGKMETDAEPBTHPJYXGFBOKVVPCKMAATJGQHPYSCEZMOCLWEVLIFWWUXEFFGORYYJLZBEPMYOCIEANAJNHXH");
    tmp_msg_0.last_error.assign("SHLTIZEYOOGAXEAYEVXRYIQBDQNXKDWCFBFLKCJFGZAANOTXIECHVLZBAYIRKMKQTCHMUHOURUHAPUOWWLZNMRSQCFGGMSPMHXADIZMZORNILJJKSKLVJEPFYAOWNHPWDOLPICNFXJUBWNGKYPIKGZUGVOJYD");
    tmp_msg_0.last_error_time = 0.892145992187;
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
    msg.setTimeStamp(0.819176170608);
    msg.setSource(8924U);
    msg.setSourceEntity(116U);
    msg.setDestination(25050U);
    msg.setDestinationEntity(248U);
    msg.op = 87U;
    msg.name.assign("MBKJXOBWQHYCEDLLCEDIUGVQTVDIPKRVSVITHSQWXRUXNCKKYLPKXMMQOIKOLNQFFYCOXGTNER");

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
    msg.setTimeStamp(0.505604396462);
    msg.setSource(49297U);
    msg.setSourceEntity(209U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(180U);
    msg.op = 196U;
    msg.name.assign("ZVCAVYGAHKNYOLPRAK");

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
    msg.setTimeStamp(0.254532671606);
    msg.setSource(4970U);
    msg.setSourceEntity(22U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(29U);
    msg.op = 5U;
    msg.name.assign("TGJSMOTMGPBPMBFPAZXMZKFGYMGLNXTZKEZUJGIVAVIUVZLLBHWJKPCPXGNJB");

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
    msg.setTimeStamp(0.150228399393);
    msg.setSource(11474U);
    msg.setSourceEntity(67U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(115U);
    msg.type = 186U;
    msg.htime = 0.161141935375;
    msg.context.assign("YVVXLYAZJGDRWENFLLGUQHZMTBOTWQSEQKXAUSAFEGBTFWRZFMOJKDSMVHVKEHBDZODSNXXUFJRLTIEBHPWCM");
    msg.text.assign("ABNGNOVGJTCREPHXOCWGIKDBMMLTLPUHXRKSOEIQKQEZIKSPWBUQYYQSGFEOXVSUVFPBDEWDAYVNHKKRXASPETCIRGLZZMSNWQNRDVCIWVUTKGXDBNPELXAOWGFTWRFQPILMFVAATKTZRPJXBBUZIRQTFSHYYHJVPELDLUGCCFLJZJBFHQQKUFHKMCJFXMDMOSXYELYJLRCMBNZIGIYWJOAMZAXOS");

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
    msg.setTimeStamp(0.177290151796);
    msg.setSource(8871U);
    msg.setSourceEntity(234U);
    msg.setDestination(38807U);
    msg.setDestinationEntity(239U);
    msg.type = 132U;
    msg.htime = 0.246491539944;
    msg.context.assign("IUUHUMTFHKMGIRWLELSW");
    msg.text.assign("RUFTAZRKRLGPEJRTFEVSIHUCGAFDIDDRINAZRYNQMKXQCNGYPVBOMYIHDEWFHQBGGYZTHWSMJOOQIXPWXJMXXKCSCUPQSNGTMKNJEXFITZWKWUABJZCPTYWWBKBKGBHMXLCNDDEOVLBAEEABVBWLSMAHYFRLJUBLMJZPIHGRSLHXJTMAD");

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
    msg.setTimeStamp(0.439629641502);
    msg.setSource(339U);
    msg.setSourceEntity(215U);
    msg.setDestination(26423U);
    msg.setDestinationEntity(147U);
    msg.type = 233U;
    msg.htime = 0.0259468412194;
    msg.context.assign("LZDOYSZDUZGERDHLDOFHCBJCBHTEKFAVQVBIBMUKQSMWRPYAQVNFKIMJYLJLQIBJIFUVTRWSPX");
    msg.text.assign("YRKMNXUWIZVKLKBDJNZZHKBDXBNXBDHXJNIPVHKPPHCCHNRAFNWTMCFRPAOYYLLXZFIUCTZFPEDDQUTYXZAT");

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
    msg.setTimeStamp(0.989690762244);
    msg.setSource(1974U);
    msg.setSourceEntity(126U);
    msg.setDestination(5410U);
    msg.setDestinationEntity(133U);
    msg.command = 231U;
    msg.htime = 0.977779324651;

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
    msg.setTimeStamp(0.374920967692);
    msg.setSource(57863U);
    msg.setSourceEntity(166U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(66U);
    msg.command = 227U;
    msg.htime = 0.100459385385;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 197U;
    tmp_msg_0.htime = 0.259232422953;
    tmp_msg_0.context.assign("AUQFESMBGLCNLASUVTHKNDSVXPMSCUQHIHAGIWIZZWRNZWFGSCDLMCXZZFVHOKDZEGTGJFTOHYDUMQLHBBWZVKCJOYJYLMBYRSOPOVCNKX");
    tmp_msg_0.text.assign("VLPDQVLRNWA");
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
    msg.setTimeStamp(0.906731628111);
    msg.setSource(34364U);
    msg.setSourceEntity(174U);
    msg.setDestination(1211U);
    msg.setDestinationEntity(21U);
    msg.command = 145U;
    msg.htime = 0.361067889289;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 69U;
    tmp_msg_0.htime = 0.326581853265;
    tmp_msg_0.context.assign("EZOUEXYUUPEZJWVPXIPUCOGSJQKEXYCOGANCNTCAQJIVTQTFLXZWEFCDOHZHHQJIRMIFMUGOQLHQVYIARNLMYMKPDDBTRWXSBRNBSMXIYSSOYDEHKBBZRYWNTQAANDGJGHTPAJPMNSNYBUDXSMB");
    tmp_msg_0.text.assign("EXCGFVCFIABFUVUGPOLIQJTWNBPPNUVTNDFYLDDMDORSBKSYJSHOWZHNPISFDZCICAQJUTXWZTNKUEUZOPUZRZZOGDRMLQGMDGKKCWIBSAOLSCPNQMSLLAPFEHEKTZEVCJAMYBQBWTUYKRIRBKRGWETTQLYGITQXHNRAWSHGYXREEUIQHXBYVGAKXXIJACSZAYMMYLXXIJWZCBOFJSMVPHJ");
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
    msg.setTimeStamp(0.38286782206);
    msg.setSource(56457U);
    msg.setSourceEntity(4U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(241U);
    msg.op = 38U;
    msg.file.assign("JITSTICECEJVREBMTMKHKNGNJHADWPLVOOQDVLHWKIJXTSAJGFNYLBGSQVYWYFZRCFWJQGFUBXUZDFXDHWSFAUZQTBZUVIGECIKAZTBFDFAMKMUXJEOQUEHYMMVXSTSMHYKRGVAWLZTYQYZXUGQCWDTBPNEPWJCIOALSZRNMNZLBNMULFJPOWFKSXBDGSOXAVOHBPINVKCARJHLSCPLTQKDBROAIIRHPOYUNWYGDVHPEGRPCRLND");

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
    msg.setTimeStamp(0.473950279322);
    msg.setSource(16026U);
    msg.setSourceEntity(182U);
    msg.setDestination(11378U);
    msg.setDestinationEntity(10U);
    msg.op = 153U;
    msg.file.assign("TTIWXARSOLOXRXUTFZOCLENDMASJHFIUMNRAYCNRSQXJCMPRRXJITXAVQITWAZVGQKYFHTSLHBJGQXOAQGUKIAHGFVVHZNCWPN");

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
    msg.setTimeStamp(0.222348291622);
    msg.setSource(60421U);
    msg.setSourceEntity(98U);
    msg.setDestination(58653U);
    msg.setDestinationEntity(101U);
    msg.op = 23U;
    msg.file.assign("YGCEKAHSLNAJZAPXHUWHIPOFOQNMSKHEFSXTIUTBVTUBQKDEZMQGHACIWLFVILKIOGTBRRJUMXEPEAMTCVANULMMCWYZHQKWWGXDTYAHRLFIAOBMCXJKOUHAGDICQHULKFPUKQSSZEVPXKNTXEQEDJQBYOOJRSXZVNDPDPJRJLDFVQSPZWSBCTCGDGCLVFILNVPDGWGRPNZBTBW");

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
    msg.setTimeStamp(0.965703919853);
    msg.setSource(56235U);
    msg.setSourceEntity(226U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(252U);
    msg.op = 150U;
    msg.clock = 0.158905369195;
    msg.tz = 1;

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
    msg.setTimeStamp(0.725000559694);
    msg.setSource(2914U);
    msg.setSourceEntity(185U);
    msg.setDestination(6597U);
    msg.setDestinationEntity(166U);
    msg.op = 206U;
    msg.clock = 0.071563025875;
    msg.tz = -30;

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
    msg.setTimeStamp(0.665233089011);
    msg.setSource(33016U);
    msg.setSourceEntity(88U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(116U);
    msg.op = 19U;
    msg.clock = 0.748555133114;
    msg.tz = 50;

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
    msg.setTimeStamp(0.737373794755);
    msg.setSource(47340U);
    msg.setSourceEntity(17U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.879408150903);
    msg.setSource(38756U);
    msg.setSourceEntity(174U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.455999397513);
    msg.setSource(11851U);
    msg.setSourceEntity(214U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.65708518849);
    msg.setSource(18013U);
    msg.setSourceEntity(29U);
    msg.setDestination(19738U);
    msg.setDestinationEntity(140U);
    msg.sys_name.assign("KDISKVNZTVNGYZXBWMCZEDDUNXVOBMZZQRINSXCVOOSYARQAQESKFXREXWLMEOJNNLCHKWOBJAGKXRVGIRJPFBVXYYGTKILQILCNPLWMCMPSLYUFUJHPIUDBRQZONUQRFGYAPMWKBFFTCSBHWTJYEYGBSMGVYQEISJHDJSTRLMGTILFHOHQTXEBVCHFPVDEJUOPZDCAYGMQWPUDHTKCSDZPKXRJVLAROZCUAOAPWAMUJQFBAXUHZNLTIFIET");
    msg.sys_type = 244U;
    msg.owner = 62597U;
    msg.lat = 0.322573411364;
    msg.lon = 0.0202797171386;
    msg.height = 0.581367976516;
    msg.services.assign("MJHQGOHSFBRBERGGLACFTZESVDJKQFVCMXAYHPVPSTXAFOAAEUFAUMBLQMPPXQYULLNPQDCXYGYDCOLHCBPLKIRUZGMNZRSVTWGLUMKEZIO");

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
    msg.setTimeStamp(0.724886423499);
    msg.setSource(62980U);
    msg.setSourceEntity(229U);
    msg.setDestination(27161U);
    msg.setDestinationEntity(171U);
    msg.sys_name.assign("DQEXGIBNCKJOWDJTDERSTNJTGSY");
    msg.sys_type = 138U;
    msg.owner = 55554U;
    msg.lat = 0.314813813646;
    msg.lon = 0.949917997989;
    msg.height = 0.579319875114;
    msg.services.assign("XYJCQSEDTKNLTJFTYEKDAHBCUJZWQRHCNZIXMXQBOCTURNDGEEMCDXMLWGKVTFRNLQFKIXWIRENKISTAMFXRHBDILIECCNMHPAJFJUWSXVYGHUWOKPASYXUKOHZZILLHZPFGRSGPZYNCGBBSFJESYINLHVAQWWJWPJSANOQYGLDPGUCPRLOQMHIVWCU");

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
    msg.setTimeStamp(0.317296164009);
    msg.setSource(46272U);
    msg.setSourceEntity(134U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(150U);
    msg.sys_name.assign("KOLYBLWGPZAV");
    msg.sys_type = 96U;
    msg.owner = 3012U;
    msg.lat = 0.0553120056182;
    msg.lon = 0.18861521359;
    msg.height = 0.623002480001;
    msg.services.assign("ETOXDJCAEYIHPTOUOKVOJRNJJYXFYGINATNVSGZTZLQPRHGGHZBCEJUHVMNYOMQODPKMXDTFAFWUHCLAERNXLVFUKCKMPQESBYKBSSCDHMCKQSLDSBPGIXSNEFSDVEWRZNVYRYLADHSJBZOJICJGHFNZQXUOIWGWPLKPUKWORUCTAMUBBYP");

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
    msg.setTimeStamp(0.612495236838);
    msg.setSource(18794U);
    msg.setSourceEntity(87U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(60U);
    msg.service.assign("BBICOQESUGMSLCKLJAJNDPIUXUMUPHEXGRDZJEWBVFKYTELXLSOCWXIQQDVUEDYJCCFMYZHMNVEOAZTWBWBRYHLXFTAZURREIHZRLPVGQMITDHBRFUQOUKEVSMBCTFVZGFXPGLSNQWNBVYZXQSBAKLCWIMDZYIYRTUVKDTIQTFZBXFCGPJHWAAPNKNXGEDAHDVYHYJPWLECJVGQJKNOHIGTSWTMNSWDSMYOORF");
    msg.service_type = 4U;

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
    msg.setTimeStamp(0.0449235165084);
    msg.setSource(38351U);
    msg.setSourceEntity(223U);
    msg.setDestination(55194U);
    msg.setDestinationEntity(221U);
    msg.service.assign("XWITURPNSLJWGXDQFADBCIXRZHMCTFLAWBMLAIBUVNSZMAYZBVBQXVFBJUIPOMJHQWWDRJWEYZYJXSLLDYOLYHTZGXTCYKJJDBNOKBGRESUQRCEDRDJRZUKPQF");
    msg.service_type = 253U;

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
    msg.setTimeStamp(0.992125841817);
    msg.setSource(53314U);
    msg.setSourceEntity(58U);
    msg.setDestination(10551U);
    msg.setDestinationEntity(100U);
    msg.service.assign("PZXLBGUGZJMTYMKYXOYYDVPWNBNTULMUQZDCOCMQKSIRXQQFBTHCUGZVWJJIIZZRAEVXERASDREGYBRPJNIBMGYCTWXPADAKWTNGOGVZQCWBVXTFPNJKVPLADIWQKZJUDILSFVSEQNJHAFAESNFHAQDYSEJWFFKUVTXNCREKORPXBUVYHUUEOAQMPFZW");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.856649179148);
    msg.setSource(54320U);
    msg.setSourceEntity(185U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(39U);
    msg.value = 0.825247769912;

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
    msg.setTimeStamp(0.980027663572);
    msg.setSource(45405U);
    msg.setSourceEntity(234U);
    msg.setDestination(35797U);
    msg.setDestinationEntity(64U);
    msg.value = 0.455371096653;

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
    msg.setTimeStamp(0.484717758456);
    msg.setSource(64411U);
    msg.setSourceEntity(209U);
    msg.setDestination(5304U);
    msg.setDestinationEntity(25U);
    msg.value = 0.289263489236;

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
    msg.setTimeStamp(0.404750390593);
    msg.setSource(51896U);
    msg.setSourceEntity(226U);
    msg.setDestination(44650U);
    msg.setDestinationEntity(12U);
    msg.value = 0.666115286829;

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
    msg.setTimeStamp(0.477632834134);
    msg.setSource(11213U);
    msg.setSourceEntity(119U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(95U);
    msg.value = 0.913839411353;

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
    msg.setTimeStamp(0.517785862513);
    msg.setSource(1699U);
    msg.setSourceEntity(128U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(57U);
    msg.value = 0.377079563836;

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
    msg.setTimeStamp(0.11680189425);
    msg.setSource(3801U);
    msg.setSourceEntity(71U);
    msg.setDestination(60373U);
    msg.setDestinationEntity(6U);
    msg.value = 0.471418367314;

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
    msg.setTimeStamp(0.0443922814584);
    msg.setSource(48938U);
    msg.setSourceEntity(13U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(148U);
    msg.value = 0.981210326009;

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
    msg.setTimeStamp(0.982883421255);
    msg.setSource(60123U);
    msg.setSourceEntity(178U);
    msg.setDestination(77U);
    msg.setDestinationEntity(28U);
    msg.value = 0.968793703616;

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
    msg.setTimeStamp(0.032721230606);
    msg.setSource(31394U);
    msg.setSourceEntity(180U);
    msg.setDestination(52088U);
    msg.setDestinationEntity(243U);
    msg.number.assign("DNTQUGMJZLCVUTBXZQYMOXDGIJNQEEUYSYRTSCZYURAYEVKUNFNPKTURVEIHLJDZWMRDFNRNMAXBSWGBOOQGYCFQCQRWSZCPPHHWQXAXFILELUSJUJNWAEISWITEHHKZHPY");
    msg.timeout = 16295U;
    msg.contents.assign("FUNHSSYQCNOVRLVRMKYSKCULAOBTXGDZXFSTCIYKRGNQJVOWYBCPRXUSEZMOGNLXBJGIFIEPLIYTZABKIPVJJQPUPBVHAEGKCEWSYVCZHDSRHLAEKSGOTZXWWIALZCWULBEYRTJJFPDRZYDNFJQGFEAMNZDPIKXAQJDFKTJBOAPLMPHQBEDMHIKOEVXMXFSDMCCJHVUNYBVFNZQMWXOGYUCWMQAMITIRVGZTQKOBEULHWTWT");

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
    msg.setTimeStamp(0.339899528761);
    msg.setSource(10421U);
    msg.setSourceEntity(225U);
    msg.setDestination(55220U);
    msg.setDestinationEntity(139U);
    msg.number.assign("ALETBJVLVGSDXVGOHHURBAZSTPPPRMQEZNXDHELJLQWBMRMFOCEXINDDPTWNAXUTBMZCCKSXVAREDNDSWKMLFHGCZWFKTAPAYSQIAZANQTMEPCPYUQRIDMSJTMGCCIYULFDWZYZFUOBJOYRBGWWKQKBJWSJJVKGFZSIKEZWVSVVIUICQPODA");
    msg.timeout = 8425U;
    msg.contents.assign("FBLAQMRFYNWIQDCBNQFAGXGCBSDOHAJHWAVIASYEJVKTVNLATUFTHFPRRNWCYZTEHSRSKATPJDXPMBLWNCBHRJQJHPLMEEOSYVXOJBSRNMWEAZQPGKKYUKETQLZZYMZYLWWWKZAHVWDNUWUOEXORNZGEQUHSKJBOGFIILRBMSUPETTEDNFMVPBGKGLQGNOXTOVXCMRZDTXUUIBQOMVXCHGH");

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
    msg.setTimeStamp(0.0249355073688);
    msg.setSource(64712U);
    msg.setSourceEntity(40U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(109U);
    msg.number.assign("LOECPXGPPQXHKMGVCJSIHKWEWNCHNYKRGILBCGHAQDBYRVXBOJVZAXMXLUWJERTLJXRN");
    msg.timeout = 31337U;
    msg.contents.assign("LSUTQLFYIOZNNPTGVCZDJIVRHFGEPBVQWPEBBUAOTNHGDFMYHU");

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
    msg.setTimeStamp(0.96475943548);
    msg.setSource(10992U);
    msg.setSourceEntity(61U);
    msg.setDestination(27750U);
    msg.setDestinationEntity(102U);
    msg.seq = 1368746715U;
    msg.destination.assign("ABRMDQKUFCCWMQYHLHTKPBGTOKLFPDNMZNUFEWYBESHGYAABVALZHNJIPTQGMJVDLHAWWIXQAQGZHMNWJVCBXMAMSRSXFLIRCESI");
    msg.timeout = 20264U;
    const char tmp_msg_0[] = {6, -62, 15, -14, 55, 62, 105, -29, -24, -100, -88, 34, -65, 42, -104, 121, -122, 93, 47, -94, -25, -73, -88, -117, -93, -97, 40, 36, -68, -66, -109, -115, 114, 72, -31, -24, 125, -128, -65, -61, 83, 93, -99, -20, -100, -97, -87, 36, -70, -111, 74, -10, 14, 41, -107, 106, -43, -86, 19, -127, 38, 66, 20, -71, 98, -19, 7, -101, 87, -116, 109, 44, 37, 8, 5, -122, -111, -45, 15, 85, -50, -100, -4, -121, 41, 0, -96, 79, 30, 32, -13, -95, 44};
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
    msg.setTimeStamp(0.648908420325);
    msg.setSource(29846U);
    msg.setSourceEntity(188U);
    msg.setDestination(47868U);
    msg.setDestinationEntity(134U);
    msg.seq = 3617480076U;
    msg.destination.assign("LZBAFSZKDHERQTUJBANAPUETMWJHVQGDGTFRPNLMBYMQCYBTUGLGXZWOBMKHUOKDXDIMOHKNNJXISQPROSSAJSEQGSTAHCVEWALJPDYN");
    msg.timeout = 59495U;
    const char tmp_msg_0[] = {-121, -88, 54, 99, 113, 54, 42, -44, -119, -54, -71, -40, 97, -16, 98, 22, -35, -34, -87, -33, 15, -54, -11, -43, -29, -122, 89, 56, 7, 4, -116, 53, 82, 93, -20, 94, -51, 68, -101, -17, 57, -4, 111, 111, 29, -122, -103, -108, 125, 88, 43, -24, 16, -95, 54, 60, 78, -8, -127, 19, -12, 88, 41, 55, -73, 99, -79, 92, -12, 126, 59, -6, -26, 14, 107, 35, 15, -32, -45, 121, 50, -51, -62, -89, -18, 51, -103, -3, 83, 94, -52, 39, 102, -78, -76, -57, 22, 40, -56, 4, -71, -74, -2, -29, -111, -98, -33, 24, 91, -26, 77, -80, 48, -86};
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
    msg.setTimeStamp(0.453602636069);
    msg.setSource(44843U);
    msg.setSourceEntity(79U);
    msg.setDestination(17200U);
    msg.setDestinationEntity(117U);
    msg.seq = 922882239U;
    msg.destination.assign("ZWSNJNJAQLTNKWKCTFJRDBOBJCFSDIAGWTYSVQWOAZBYMFEUXGQNYJEZCTINUBDZERCHMWEEPMLLOLFWZABLOYVVHXNYIAMGKQZFEMCDVNGR");
    msg.timeout = 20813U;
    const char tmp_msg_0[] = {-35, 101, 38, 123, -51, -8, 115, -114, -84, 44, 44, 25, -2, -112, -28, 79, -58, -10, 81, -38, -7, 29, -74, -30, -57, -27, -115, 119, 78, 92, 83, -109, 87, 82, 88, 39, -34, 3, -18, 92, -81, 100, -106, 31, 7, -41, -101, -95, 27, 34, -109, 19, 11, -49, -71, -68, 8, -34, -69, -11, -16, -57, 26, -16, -52, 111, -105, -51, -100, -39, 8, 111, 62, -58, 31, -23, -80, -124, 47, 5, -97, 11, 108, -107, 20, 14, -36, 78, -68, -27, -58, -81, -92, -69, -15, 23, 71, -112, -103, -87, -4, 67, 96, -20, -108, -16, 92, -106, -53, -81, -128, 5, 79, 101, -128, -124, 92, 68, 71, 61, -72, -50, -11, 13, 123, 30, -66, 85, -13, -50, -71, 73, 121, 22, 121, 90, -7, -125, 33, 10, 64, -111, -30, -59, -101, -112, 118, -99, 84, 122, -87, 61, -87, 107, 45, 26, 3, 12, -87, -87, -87, 88, -2, -61, 56, 44, 111, 81, -10, 64, 114, 124, -103, -93, 113, 35, -125, -13, 39, -21, -118, -110, -112, 4, 4, 38, 77, 9, -124, -125, -37};
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
    msg.setTimeStamp(0.809016809784);
    msg.setSource(17956U);
    msg.setSourceEntity(30U);
    msg.setDestination(12872U);
    msg.setDestinationEntity(45U);
    msg.source.assign("BQEUENENPRMLUMEQQJNINJSFGBALJ");
    const char tmp_msg_0[] = {-98, -21, 50, -78, -16, 82, 114, 82, 79, -28, 63, -4, -3, -50, -115, -79, 106, 33, -82, -26, 76, -103, -19, -23, -13, -39, 0, -88, 112, 43, 36, -25, -122, 31, 4, -48, -71, -49, 39, 123, 39, -32, 66, -14, -127, 67, -112, -9, 89, -106, 62, -66, 92, -71, -35, -122, 90, 97, -60, -99, 88, 101, -11, 46, 43, 69, 84, 77, -65, -128, -76, -92, 36, 73, 120, -30, -118, -20, 70, -8, 71, 97, -5, -59, -38, 14, -110, 84, -38, 115, 76, -49, 83, -104, 53, 66, 51, 29, 123, 111, 104, -60, 100, -127, 46, 25, 53, 12, -35, 3, 92, 111};
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
    msg.setTimeStamp(0.968379956046);
    msg.setSource(47013U);
    msg.setSourceEntity(105U);
    msg.setDestination(353U);
    msg.setDestinationEntity(137U);
    msg.source.assign("OBEUGKDAUMUJWFJRRARAEPFXXSCLZIYSHVMXUYGIREQGXCPOWNOLDWUESSRFQKSYYJCZDWLQJRYGAOZLBM");
    const char tmp_msg_0[] = {82, 3, 26, 4, 24, -52, 65, -19, 112, 93, -87, 63, 104, 49, 24, 113, -86, 19, 51, -128, 24, -26, 18, -46, -51, -72, -63, -55, 8, -90, -109, 114, 2, -23, -68, -59, -8, -12, 65, -8, -97, 20, -22, -19, -108, -123, -55, -103, -56, 14, -115, -51, 64, -36, 22, 56, -26, 77, -99, 22, 91, -122, -56, 74, -43, 86, 95, -24, -75, 86, 74, 115, 4, 87, 8, 20, 27, 65, 98, -95, 59, 63, -4, 30, -86, -90, -95, -8, -82, 36, -88, 13, -32, -52, -125, -53, -1, -3, -49, -46, 105, 89, -116, -41, -55, 90, -83, -49, -61, 105, -4, 99, 88, 109, 2, 41, 64, 32, 116, 115, -81, -70, 32, 28, 19, -27, -85, 14, 122, 45, 96, -104, 76, 40, 26, -109, -39, -56, -119, 61, -113, -54, -113, 77, -32, 5, -28, 90, -92, 72, 115, 74, -27, 66, -72, 43, -14, 50, -21, -4, -122, -32, -16, 45, 56, -119, 26, 88, 95, 43, 16, 65, -105, -18, -63, -65, -57, 70, 37, 71, -18, 27, 27, 45, -45, 90, -59, -116, -30, 62, 74, -52, -103, -109, -100, 83, 101, -87, 66, -47, -15, -50, 9, 101, -26, -82, -89, 31, -20, -21, -33, 13, -66, -128, 67, 24};
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
    msg.setTimeStamp(0.594773940764);
    msg.setSource(41914U);
    msg.setSourceEntity(192U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(98U);
    msg.source.assign("GUKMWQXXQYRIFCOUUMGXJZPDSOMXAHPWMDQGVMVQPDEOQXEFTDUYZHGHSNCWSUWBMZJMBVUDSWWSRVDNPOTBGVHBYCEXFNSLLQCMQNLSHHTJACHFLPCELPZVJVK");
    const char tmp_msg_0[] = {118, -60, -54, 11, -81, -77, 72, -117, -29, 111, -47, 103, -47, -86, 34, 32, -103, -51, 53, 80, -18, -126, 114, -127, 107, -103, 109, -74};
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
    msg.setTimeStamp(0.242876406958);
    msg.setSource(11521U);
    msg.setSourceEntity(85U);
    msg.setDestination(36694U);
    msg.setDestinationEntity(11U);
    msg.seq = 234475089U;
    msg.state = 215U;
    msg.error.assign("IAVVQCWUGPZP");

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
    msg.setTimeStamp(0.721173404836);
    msg.setSource(52328U);
    msg.setSourceEntity(222U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(235U);
    msg.seq = 2410941027U;
    msg.state = 106U;
    msg.error.assign("WBSWMKCGUYXPGWYIFNPRAKERBEBZPMHOKQGACHXBNWTGJXKUKFQZNNTSLFZDDRCIXQUHNEMFPHFHMTBSGINHFGCEZZYFSZLEYLMLLVDLSJZKDMHSRFMPNLGWDVAVICTUCPHBBXKWFDIAJUUWARTBNUIQQDUATYSCXXJYUOOVQKLOMAOETWNQEBZNGQTQDCIJQDOVGIRD");

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
    msg.setTimeStamp(0.744957880138);
    msg.setSource(59491U);
    msg.setSourceEntity(2U);
    msg.setDestination(57528U);
    msg.setDestinationEntity(156U);
    msg.seq = 1380066601U;
    msg.state = 147U;
    msg.error.assign("JPCLSULTRKMRVYJPJQJHRBPYFQDWQRLPHFW");

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
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.27292376422);
    msg.setSource(51646U);
    msg.setSourceEntity(90U);
    msg.setDestination(996U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("QRKWCZHOBMTDORCLJFKCEFRMAXXBXNNGYYVHNISHNQUAIPPQCPQRXEFQLXWDFNQDSIPMECUGPEACWOETLTRZJIXRVLUWBLHOWBAKXJYKTJYWQPKSXXECZEGUVI");
    msg.links = 248908918U;

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
    msg.setTimeStamp(0.804473904276);
    msg.setSource(54103U);
    msg.setSourceEntity(37U);
    msg.setDestination(21477U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("MQGTQCOBZQNQOJFUOKIGPYCKXKNFGLOXINLOONKANOZNEACDXWLRMRGQRUSRLMSPWFSVUUISEPLACBHFZPWAMMJARNQQUMUEUPNLCORYDLZSTGBEBEBDJDHUAXCVKJFHDTAQEGRFJJIPEDCXHLTB");
    msg.links = 2628863062U;

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
    msg.setTimeStamp(0.15180780285);
    msg.setSource(45964U);
    msg.setSourceEntity(224U);
    msg.setDestination(50304U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("XNTHNEBMKHJHVRCVMWQGVCOLDNFQWESFDANYZCIFQTNUXJPCPGOZFDJTEVFIXHMZCYJLPYXIGVYOTSLFOSKTKBDPAZWZOPOBQHSKBFIXYQZRSZRVMIPRBRCWOKGLSRZIUSGPHPQHXLGFOQAWKMPYUHEZIYWNTZKPMXDSJMWBNFOCDMEAQEEFEJLQANGDGRQRLUKNUAIIJCMHTWJBEEDLDVHLJ");
    msg.links = 1115247276U;

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
    msg.setTimeStamp(0.645400633005);
    msg.setSource(16775U);
    msg.setSourceEntity(147U);
    msg.setDestination(40585U);
    msg.setDestinationEntity(242U);
    msg.groupname.assign("KBAFTIPVVTHTFMFEUJWZJOEKQGSNWQERJCEGKOZNGSSBDYDXBUHFJCHUSVBWRCAWKJMHZCLSNBKNLNYSPAPRMHMXIWBYPGPCHUXGINBRAGFVUSDAUCBNFKTCEOPDXDMJVQVRGLKPKMEDQYJOBFPHALIAYZFEMVJLPTIOWWRIYZXOWVNGQZGYROSUCZJFXTWALRDIIIHQLJDEATDPYFUSTVZWCNAGOX");
    msg.action = 30U;
    msg.grouplist.assign("HKYWUYAHOVOWLNHUXSPMRGRLIZEFPBKEUEUHFUJGSXJMINBCJQPHDYGARKPUZZRTQGFNXVWRIQKSRVMTDJQFPRZMDXINFUZLJODXNNQWHFNSOHNIGBYPQIJEBMH");

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
    msg.setTimeStamp(0.71585853683);
    msg.setSource(10414U);
    msg.setSourceEntity(251U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(64U);
    msg.groupname.assign("WCZGZDKDRPCCNDIUKSBEACVSAGKXQVPQUZSPKZWXXRUYLLVVCBAXZOHDYGVLFFKSZTPOEYRCLUYWLWPIBRXPETGDTXBBHINQGZLSRKYJWPONXFMNQVBVYETSQWKMRDVJATGVRWZNSCGXDAIFMCOHLJOPATTMBQFLPBUOJYJWHQPJOLIMONISZTUBINDUUJNFKGOTZORKAMXJHGCMJHGEUEAMWENUXLMDH");
    msg.action = 112U;
    msg.grouplist.assign("AKFHSMOQJMYWONWUIANUNFDIBETFXRKZM");

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
    msg.setTimeStamp(0.826586273466);
    msg.setSource(989U);
    msg.setSourceEntity(113U);
    msg.setDestination(40769U);
    msg.setDestinationEntity(202U);
    msg.groupname.assign("VVIZJEEQNEHSFPHXPTXNKPNLLKYFIBFCOBWAWUVTAZREDWJDCECWSGKBBQOEZLOYJNUOUYGARWTBYNHSGXFSDCMIMXC");
    msg.action = 107U;
    msg.grouplist.assign("WFQWJATTLOCEETAFROIMTKOCLIPOIHENYWGWQIDCKAGSDBHGLFAVUHEMPFNDEWSZHJRCEZBDLIAKXUAJXCVUWBIZVXYMMYSVQUDZCKZEYOQSRBPNTMQOYSJSDYPRTAKBZO");

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
    msg.setTimeStamp(0.360345338474);
    msg.setSource(55983U);
    msg.setSourceEntity(34U);
    msg.setDestination(2634U);
    msg.setDestinationEntity(110U);
    msg.id = 210U;
    msg.range = 0.811312792163;

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
    msg.setTimeStamp(0.92825070445);
    msg.setSource(52221U);
    msg.setSourceEntity(186U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(146U);
    msg.id = 253U;
    msg.range = 0.303211705204;

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
    msg.setTimeStamp(0.614904070892);
    msg.setSource(39511U);
    msg.setSourceEntity(134U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(48U);
    msg.id = 75U;
    msg.range = 0.188677732735;

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
    msg.setTimeStamp(0.299189128833);
    msg.setSource(49235U);
    msg.setSourceEntity(66U);
    msg.setDestination(52016U);
    msg.setDestinationEntity(0U);
    msg.tx = 183U;
    msg.channel = 72U;
    msg.timer = 46071U;

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
    msg.setTimeStamp(0.710088968035);
    msg.setSource(9136U);
    msg.setSourceEntity(114U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(175U);
    msg.tx = 21U;
    msg.channel = 180U;
    msg.timer = 8669U;

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
    msg.setTimeStamp(0.303922361134);
    msg.setSource(17015U);
    msg.setSourceEntity(49U);
    msg.setDestination(58399U);
    msg.setDestinationEntity(74U);
    msg.tx = 33U;
    msg.channel = 197U;
    msg.timer = 17260U;

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
    msg.setTimeStamp(0.857696484025);
    msg.setSource(21135U);
    msg.setSourceEntity(155U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(55U);
    msg.beacon.assign("BLDOOJGAMIRBNVFZWSIFXWRBHKZYCACRSKALXYJTAFMTPWTGRUTQVVNLVDQRMGKREYFJWUZIWORDMNZCZQCNMZXAJBUMMZPOQTAGTHHNQVWKFIWVMLCGAPSWFSRDEYHDQMPYGOTEPNI");
    msg.lat = 0.500320209562;
    msg.lon = 0.541040068021;
    msg.depth = 0.578272031173;
    msg.query_channel = 94U;
    msg.reply_channel = 194U;
    msg.transponder_delay = 36U;

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
    msg.setTimeStamp(0.887595602852);
    msg.setSource(57168U);
    msg.setSourceEntity(90U);
    msg.setDestination(29204U);
    msg.setDestinationEntity(108U);
    msg.beacon.assign("MFZSHZVUKJSIBHDAC");
    msg.lat = 0.521186272515;
    msg.lon = 0.199850415023;
    msg.depth = 0.376130094653;
    msg.query_channel = 134U;
    msg.reply_channel = 115U;
    msg.transponder_delay = 245U;

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
    msg.setTimeStamp(0.952473405206);
    msg.setSource(54427U);
    msg.setSourceEntity(185U);
    msg.setDestination(4991U);
    msg.setDestinationEntity(142U);
    msg.beacon.assign("XMPJKLTIPNOOYGXPQWVIZBO");
    msg.lat = 0.201722679206;
    msg.lon = 0.20260618115;
    msg.depth = 0.735209764482;
    msg.query_channel = 50U;
    msg.reply_channel = 126U;
    msg.transponder_delay = 91U;

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
    msg.setTimeStamp(0.663199829054);
    msg.setSource(59266U);
    msg.setSourceEntity(118U);
    msg.setDestination(17714U);
    msg.setDestinationEntity(203U);
    msg.op = 158U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LEQLVMCBVXTORHEZUFQMWWSXMIEVWYRUMSHKZZADNAJXNYRCWSWSPIEPBGVDKRGRRWCALQSFKCMDGIUPTPBFOOFTRTDGKZZVMYLPVSHOLIJKGEOPBJQHANRANUNBANWSJHVJUYNCVZWQYDLEYFICGDWNHNIZTBJYRULDTSHMYEVJFIQUYOXKTKCQKZELMBGGUJIRKSSCGQEFDHFXEPXCPOXDFYXITCBBOZAMZKJ");
    tmp_msg_0.lat = 0.220864078504;
    tmp_msg_0.lon = 0.950641644747;
    tmp_msg_0.depth = 0.690478650979;
    tmp_msg_0.query_channel = 221U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 30U;
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
    msg.setTimeStamp(0.806164256547);
    msg.setSource(7430U);
    msg.setSourceEntity(80U);
    msg.setDestination(39713U);
    msg.setDestinationEntity(91U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.048056147908);
    msg.setSource(43845U);
    msg.setSourceEntity(215U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(25U);
    msg.op = 58U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VDLTEWCDSOANKOSEJJDBVKIVQNUQLVXCUJNXRZORKBJRFOMDASALCKPEIJYFWPELJEMMXDGIUNUFHBTBNZVLWQBQVFFHYXEBQTFHYGBCHPIUMFWYKRGEEZTEXKIMVUTBFHOVSQTNHGHRCAPBCHQRYNEXDWUKGLZADKZGACSNDBOWCMXHZILMYAGJVDZCOYJKFZQHYDRLGJCOSUNWIMPATGPAPOMWRUXMXLSIPPL");
    tmp_msg_0.lat = 0.859962991156;
    tmp_msg_0.lon = 0.165379450747;
    tmp_msg_0.depth = 0.406904354941;
    tmp_msg_0.query_channel = 32U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 243U;
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
    msg.setTimeStamp(0.425585574975);
    msg.setSource(54553U);
    msg.setSourceEntity(110U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(58U);
    msg.address = 83U;

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
    msg.setTimeStamp(0.000259981526172);
    msg.setSource(17028U);
    msg.setSourceEntity(57U);
    msg.setDestination(23785U);
    msg.setDestinationEntity(195U);
    msg.address = 108U;

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
    msg.setTimeStamp(0.853515674142);
    msg.setSource(16616U);
    msg.setSourceEntity(219U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(166U);
    msg.address = 195U;

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
    msg.setTimeStamp(0.194493508029);
    msg.setSource(59546U);
    msg.setSourceEntity(212U);
    msg.setDestination(45872U);
    msg.setDestinationEntity(144U);
    msg.address = 148U;
    msg.status = 202U;
    msg.range = 0.154208964714;

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
    msg.setTimeStamp(0.407427521562);
    msg.setSource(59300U);
    msg.setSourceEntity(81U);
    msg.setDestination(57677U);
    msg.setDestinationEntity(238U);
    msg.address = 181U;
    msg.status = 42U;
    msg.range = 0.438390305002;

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
    msg.setTimeStamp(0.765908529392);
    msg.setSource(56235U);
    msg.setSourceEntity(83U);
    msg.setDestination(45094U);
    msg.setDestinationEntity(29U);
    msg.address = 156U;
    msg.status = 172U;
    msg.range = 0.675800459499;

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
    msg.setTimeStamp(0.517081919962);
    msg.setSource(43455U);
    msg.setSourceEntity(14U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(214U);
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("HXRZMJMEXWUEDWPXKSROVBOQWPRVWZDHEIGAJHQUCUKMYNEQFVMMNBGBVASRUPSBPBPSWJNGQGVACQKHNAXJHFATQGNJHMJAIMVGDWOYLXJNVRABZNFEFUNUDDKKOIHMHXSSRCMUERZTRIYTUBFHPKLLEIYVDFPIYEPQYTCLQQCGYZBKTGKOPRFEXWFLOOO");
    tmp_msg_0.lat = 0.136709631522;
    tmp_msg_0.lon = 0.556131635013;
    tmp_msg_0.z = 0.394439283688;
    tmp_msg_0.z_units = 190U;
    tmp_msg_0.cog = 0.783886539279;
    tmp_msg_0.sog = 0.101853685273;
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
    msg.setTimeStamp(0.4268988498);
    msg.setSource(38741U);
    msg.setSourceEntity(38U);
    msg.setDestination(49422U);
    msg.setDestinationEntity(24U);
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.51713959461;
    tmp_msg_0.lon = 0.685268800403;
    tmp_msg_0.z = 0.520917934974;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.515592151731;
    tmp_msg_0.speed_units = 176U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 65187U;
    tmp_tmp_msg_0_0.off_x = 0.372205993449;
    tmp_tmp_msg_0_0.off_y = 0.63827759791;
    tmp_tmp_msg_0_0.off_z = 0.656645383251;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.417904217133;
    tmp_msg_0.custom.assign("JQYNHBNGKQDWDNMAXWYQOFTZCGTJOLHFWZNFTXHYXQBFOIHSYKGUSSIJBDLPBCITTRUOBAVKMMAFSWXALSHDDBVXEWPZORGKIQLAGPOUMXRNQPULNEBCKJUAWRPKAZCOLDVORXFLXFPZSPMTMQIC");
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
    msg.setTimeStamp(0.237272974826);
    msg.setSource(29622U);
    msg.setSourceEntity(18U);
    msg.setDestination(58853U);
    msg.setDestinationEntity(50U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.936683101515;
    tmp_msg_0.y = 0.98804943426;
    tmp_msg_0.z = 0.69016169089;
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
    msg.setTimeStamp(0.179124904111);
    msg.setSource(59173U);
    msg.setSourceEntity(80U);
    msg.setDestination(7242U);
    msg.setDestinationEntity(106U);
    msg.enable = 121U;

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
    msg.setTimeStamp(0.638775304786);
    msg.setSource(20657U);
    msg.setSourceEntity(144U);
    msg.setDestination(45629U);
    msg.setDestinationEntity(251U);
    msg.enable = 64U;

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
    msg.setTimeStamp(0.331003197625);
    msg.setSource(63857U);
    msg.setSourceEntity(44U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(144U);
    msg.enable = 235U;

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
    msg.setTimeStamp(0.757206293951);
    msg.setSource(47219U);
    msg.setSourceEntity(58U);
    msg.setDestination(46094U);
    msg.setDestinationEntity(103U);
    msg.summary = 200U;
    msg.level = 139U;

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
    msg.setTimeStamp(0.888734576256);
    msg.setSource(9340U);
    msg.setSourceEntity(150U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(207U);
    msg.summary = 204U;
    msg.level = 182U;

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
    msg.setTimeStamp(0.829613588941);
    msg.setSource(32079U);
    msg.setSourceEntity(182U);
    msg.setDestination(23000U);
    msg.setDestinationEntity(238U);
    msg.summary = 133U;
    msg.level = 64U;

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
    msg.setTimeStamp(0.672068820556);
    msg.setSource(54893U);
    msg.setSourceEntity(38U);
    msg.setDestination(51242U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.946174362921);
    msg.setSource(18750U);
    msg.setSourceEntity(253U);
    msg.setDestination(3871U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.511143130437);
    msg.setSource(15306U);
    msg.setSourceEntity(225U);
    msg.setDestination(8435U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.656301635471);
    msg.setSource(27902U);
    msg.setSourceEntity(196U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.931805545713);
    msg.setSource(42812U);
    msg.setSourceEntity(213U);
    msg.setDestination(40736U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.144146922484);
    msg.setSource(1491U);
    msg.setSourceEntity(48U);
    msg.setDestination(52102U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.831713003319);
    msg.setSource(36205U);
    msg.setSourceEntity(40U);
    msg.setDestination(2838U);
    msg.setDestinationEntity(76U);
    msg.op = 3U;
    msg.system.assign("VLJRIUZJQLQCABVZWZIWPFZBLWESJP");
    msg.range = 0.866031668566;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DTVGIZBMWUDMXQYNHKZHRYBZPVGBBUNJCSZQFPCLESIFIZPUGKL");
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
    msg.setTimeStamp(0.294127034504);
    msg.setSource(50601U);
    msg.setSourceEntity(241U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(161U);
    msg.op = 101U;
    msg.system.assign("XGPXDXBWDOTBLHUEMNQRWZXPBFHZJCDWNJVZUJDMKILOONKIQZLIWTDLZYKHMJGOSBPSLPNTESCARRIBIBUTOICVHBRONWFCRRSEAKHWVAUKKGEKUOFGAVJGCJTBYPFFKYXVYJPMTXSEQNLNRPFJCUAAXRMFISVGYO");
    msg.range = 0.801943391251;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.611151079622;
    tmp_msg_0.type = 181U;
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
    msg.setTimeStamp(0.166934664688);
    msg.setSource(7693U);
    msg.setSourceEntity(41U);
    msg.setDestination(48155U);
    msg.setDestinationEntity(213U);
    msg.op = 98U;
    msg.system.assign("JICUDFSWTYIDRHKCELPRNGEGKMLSOBXPDLFGRWHTEEUXEYTVVHXXLLZTQFZUGQFMUJUBAGORKFKSCBBVAXXIOICLFBRSWQFTAYYSWHSTTRZPVDGVWTNBLONRJJACDPGAKZSEQGRDIPMKDHOPHWMMKUMHKQJLZNNVJYWOLVNCABZFYUMMJDZSAWWKVQYXDCNAZERQGORPNSCKIIOQLBUJEHFEXAXCMDHYAGOBIJYIHMWU");
    msg.range = 0.19516859578;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 379938647U;
    tmp_msg_0.lat = 0.0615014238225;
    tmp_msg_0.lon = 0.00256388691526;
    tmp_msg_0.height_ell = 0.961273647142;
    tmp_msg_0.height_sea = 0.454909864385;
    tmp_msg_0.hacc = 0.497970862134;
    tmp_msg_0.vacc = 0.298272587953;
    tmp_msg_0.vel_n = 0.184350483281;
    tmp_msg_0.vel_e = 0.327060446701;
    tmp_msg_0.vel_d = 0.0294455871781;
    tmp_msg_0.speed = 0.875868388375;
    tmp_msg_0.gspeed = 0.492612417943;
    tmp_msg_0.heading = 0.103876774038;
    tmp_msg_0.sacc = 0.174972106092;
    tmp_msg_0.cacc = 0.136430910374;
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
    msg.setTimeStamp(0.612186207304);
    msg.setSource(211U);
    msg.setSourceEntity(159U);
    msg.setDestination(41090U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.404576405014);
    msg.setSource(63808U);
    msg.setSourceEntity(85U);
    msg.setDestination(42341U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.156828440801);
    msg.setSource(54271U);
    msg.setSourceEntity(67U);
    msg.setDestination(29955U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.305683855481);
    msg.setSource(2824U);
    msg.setSourceEntity(246U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(69U);
    msg.list.assign("VEVKNLIXRNVWIASMTVSPUDQMDRLSGWSSFWCAPAOVQLGNMNRAOCPSYDFDYWGPAENEDUNZMFRCJEMHHAFFFOJEMUSBHFBIVVUSVNWCUFOTSHIBYYBGCPQIFTIXIKCXOOBZCVABBHJVJMDJPJNYOUZQUMTEMBNIXUTGEHKHAZQIAJZXFXAJLKTCGRQLRZKWGLKJWHWYTEHWLDGRYXSNQJ");

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
    msg.setTimeStamp(0.518614924389);
    msg.setSource(40035U);
    msg.setSourceEntity(162U);
    msg.setDestination(53671U);
    msg.setDestinationEntity(173U);
    msg.list.assign("NJZHNIBVYGSUGULQVVEUYNQPTOREVHBRGFXVBZDOSPAWOQSJVZBYZSWNNHZRCBFWLYOCHVGUKCEXCPOPWGMLBAJCKBVGKFJLFIWORYPRTKMUXIMFFMMVPKYCSLKTNOBKMPSQTXEUROWLMXLQHZDAHISIPDQFYLSIOFDMETIIEFRINRTPAAEAWTATHRKNIWDMLXJGXOLCWCUHZBAZJXEPQQ");

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
    msg.setTimeStamp(0.0870275091674);
    msg.setSource(44706U);
    msg.setSourceEntity(15U);
    msg.setDestination(28799U);
    msg.setDestinationEntity(132U);
    msg.list.assign("AUZXJOFRXJZIJNMTKWSJFBUNMPUXWENAVGTQYQZBVOTZYLZUAWDDKBACREXWRDEKSQZLFEBQAXIFCPDPRYBAQLWCBEXIHENKFLPFCDKMGFDCBSWFERQIXGKJMSBDMCLTHKSHXTTMRYHXUWTTMUAORKVHGHDUGLRQFNZLGHOMWSSIVDVYGOBJIELYVIPHUJSZHQQJAGNUYRDPAVOORWXYTPPYZWVNFHKMKCGOCIS");

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
    msg.setTimeStamp(0.358838834794);
    msg.setSource(17245U);
    msg.setSourceEntity(124U);
    msg.setDestination(19470U);
    msg.setDestinationEntity(131U);
    msg.value = 23603;

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
    msg.setTimeStamp(0.927692656024);
    msg.setSource(27962U);
    msg.setSourceEntity(195U);
    msg.setDestination(46715U);
    msg.setDestinationEntity(122U);
    msg.value = -8931;

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
    msg.setTimeStamp(0.351908164549);
    msg.setSource(62404U);
    msg.setSourceEntity(208U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(160U);
    msg.value = 14429;

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
    msg.setTimeStamp(0.0388498615933);
    msg.setSource(36726U);
    msg.setSourceEntity(50U);
    msg.setDestination(16027U);
    msg.setDestinationEntity(191U);
    msg.value = 0.717505422745;

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
    msg.setTimeStamp(0.482031701961);
    msg.setSource(50565U);
    msg.setSourceEntity(237U);
    msg.setDestination(32759U);
    msg.setDestinationEntity(109U);
    msg.value = 0.198825225344;

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
    msg.setTimeStamp(0.400857719933);
    msg.setSource(15392U);
    msg.setSourceEntity(0U);
    msg.setDestination(37325U);
    msg.setDestinationEntity(136U);
    msg.value = 0.337889719502;

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
    msg.setTimeStamp(0.293470420194);
    msg.setSource(3583U);
    msg.setSourceEntity(158U);
    msg.setDestination(10328U);
    msg.setDestinationEntity(53U);
    msg.value = 0.349512889635;

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
    msg.setTimeStamp(0.828844298145);
    msg.setSource(17480U);
    msg.setSourceEntity(53U);
    msg.setDestination(34923U);
    msg.setDestinationEntity(119U);
    msg.value = 0.811182595501;

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
    msg.setTimeStamp(0.114073105816);
    msg.setSource(21662U);
    msg.setSourceEntity(215U);
    msg.setDestination(61188U);
    msg.setDestinationEntity(46U);
    msg.value = 0.180786994668;

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
    msg.setTimeStamp(0.721193284);
    msg.setSource(18817U);
    msg.setSourceEntity(35U);
    msg.setDestination(15683U);
    msg.setDestinationEntity(62U);
    msg.validity = 51584U;
    msg.type = 44U;
    msg.utc_year = 49692U;
    msg.utc_month = 132U;
    msg.utc_day = 159U;
    msg.utc_time = 0.79563476245;
    msg.lat = 0.520730050928;
    msg.lon = 0.319521330923;
    msg.height = 0.90976973648;
    msg.satellites = 215U;
    msg.cog = 0.245144950471;
    msg.sog = 0.123197425173;
    msg.hdop = 0.648297846555;
    msg.vdop = 0.606161791169;
    msg.hacc = 0.380949642458;
    msg.vacc = 0.1666401076;

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
    msg.setTimeStamp(0.233428362541);
    msg.setSource(49645U);
    msg.setSourceEntity(35U);
    msg.setDestination(4063U);
    msg.setDestinationEntity(122U);
    msg.validity = 29028U;
    msg.type = 13U;
    msg.utc_year = 25183U;
    msg.utc_month = 28U;
    msg.utc_day = 242U;
    msg.utc_time = 0.335074874176;
    msg.lat = 0.751901997479;
    msg.lon = 0.988257396401;
    msg.height = 0.213190100514;
    msg.satellites = 227U;
    msg.cog = 0.838031182689;
    msg.sog = 0.261470576439;
    msg.hdop = 0.589535031323;
    msg.vdop = 0.749185749384;
    msg.hacc = 0.529301277272;
    msg.vacc = 0.745421609972;

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
    msg.setTimeStamp(0.32526191929);
    msg.setSource(6948U);
    msg.setSourceEntity(37U);
    msg.setDestination(25963U);
    msg.setDestinationEntity(190U);
    msg.validity = 36057U;
    msg.type = 103U;
    msg.utc_year = 31278U;
    msg.utc_month = 203U;
    msg.utc_day = 229U;
    msg.utc_time = 0.101437441019;
    msg.lat = 0.754648708946;
    msg.lon = 0.54289076724;
    msg.height = 0.512975059015;
    msg.satellites = 91U;
    msg.cog = 0.510332473117;
    msg.sog = 0.072101275178;
    msg.hdop = 0.97788958081;
    msg.vdop = 0.130321004525;
    msg.hacc = 0.608630457805;
    msg.vacc = 0.7328052891;

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
    msg.setTimeStamp(0.0713204584736);
    msg.setSource(19920U);
    msg.setSourceEntity(36U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(61U);
    msg.time = 0.0264986864222;
    msg.phi = 0.220923285578;
    msg.theta = 0.664522550684;
    msg.psi = 0.151718237983;
    msg.psi_magnetic = 0.814075841775;

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
    msg.setTimeStamp(0.0894159506987);
    msg.setSource(31113U);
    msg.setSourceEntity(62U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(160U);
    msg.time = 0.394442099248;
    msg.phi = 0.54775842507;
    msg.theta = 0.303602219792;
    msg.psi = 0.914786912443;
    msg.psi_magnetic = 0.295260521979;

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
    msg.setTimeStamp(0.442389467648);
    msg.setSource(7017U);
    msg.setSourceEntity(216U);
    msg.setDestination(11462U);
    msg.setDestinationEntity(143U);
    msg.time = 0.97811088094;
    msg.phi = 0.855544108517;
    msg.theta = 0.241301610014;
    msg.psi = 0.591894054148;
    msg.psi_magnetic = 0.661066013026;

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
    msg.setTimeStamp(0.320944269653);
    msg.setSource(35925U);
    msg.setSourceEntity(31U);
    msg.setDestination(4340U);
    msg.setDestinationEntity(27U);
    msg.time = 0.883724002389;
    msg.x = 0.457134240607;
    msg.y = 0.937863488389;
    msg.z = 0.382272631388;
    msg.timestep = 0.676948696513;

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
    msg.setTimeStamp(0.219293868042);
    msg.setSource(1703U);
    msg.setSourceEntity(31U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(97U);
    msg.time = 0.800540935118;
    msg.x = 0.893383073613;
    msg.y = 0.0254405049093;
    msg.z = 0.380816854275;
    msg.timestep = 0.291723447369;

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
    msg.setTimeStamp(0.659136466191);
    msg.setSource(4676U);
    msg.setSourceEntity(153U);
    msg.setDestination(14116U);
    msg.setDestinationEntity(65U);
    msg.time = 0.630785372741;
    msg.x = 0.168254872206;
    msg.y = 0.172428081877;
    msg.z = 0.165192877994;
    msg.timestep = 0.26961323846;

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
    msg.setTimeStamp(0.647804683014);
    msg.setSource(33590U);
    msg.setSourceEntity(8U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(34U);
    msg.time = 0.851314904707;
    msg.x = 0.641237363199;
    msg.y = 0.007882821933;
    msg.z = 0.892639783183;

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
    msg.setTimeStamp(0.744813398671);
    msg.setSource(28568U);
    msg.setSourceEntity(6U);
    msg.setDestination(9495U);
    msg.setDestinationEntity(124U);
    msg.time = 0.0865495887998;
    msg.x = 0.492967369;
    msg.y = 0.133169914636;
    msg.z = 0.263894355936;

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
    msg.setTimeStamp(0.350787471683);
    msg.setSource(48450U);
    msg.setSourceEntity(22U);
    msg.setDestination(29404U);
    msg.setDestinationEntity(173U);
    msg.time = 0.234512082759;
    msg.x = 0.383953775221;
    msg.y = 0.0418478858556;
    msg.z = 0.796796800064;

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
    msg.setTimeStamp(0.985577760818);
    msg.setSource(15700U);
    msg.setSourceEntity(23U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(160U);
    msg.time = 0.408209364614;
    msg.x = 0.209467116416;
    msg.y = 0.976124867336;
    msg.z = 0.198915215029;

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
    msg.setTimeStamp(0.232500383618);
    msg.setSource(20077U);
    msg.setSourceEntity(51U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(76U);
    msg.time = 0.136772477037;
    msg.x = 0.616055222332;
    msg.y = 0.653726756017;
    msg.z = 0.973871543863;

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
    msg.setTimeStamp(0.84217909378);
    msg.setSource(28521U);
    msg.setSourceEntity(231U);
    msg.setDestination(32530U);
    msg.setDestinationEntity(21U);
    msg.time = 0.785139073249;
    msg.x = 0.559868401955;
    msg.y = 0.0367336034044;
    msg.z = 0.12756237563;

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
    msg.setTimeStamp(0.146899231982);
    msg.setSource(11654U);
    msg.setSourceEntity(99U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(243U);
    msg.time = 0.673967599644;
    msg.x = 0.218144333895;
    msg.y = 0.0130483225757;
    msg.z = 0.0750169689184;

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
    msg.setTimeStamp(0.594454883497);
    msg.setSource(45313U);
    msg.setSourceEntity(219U);
    msg.setDestination(58465U);
    msg.setDestinationEntity(225U);
    msg.time = 0.895019756047;
    msg.x = 0.204452777802;
    msg.y = 0.661365188945;
    msg.z = 0.078087923254;

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
    msg.setTimeStamp(0.986663861029);
    msg.setSource(33807U);
    msg.setSourceEntity(236U);
    msg.setDestination(60820U);
    msg.setDestinationEntity(198U);
    msg.time = 0.368774466838;
    msg.x = 0.80644037149;
    msg.y = 0.08544286171;
    msg.z = 0.369050670055;

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
    msg.setTimeStamp(0.987167832359);
    msg.setSource(27685U);
    msg.setSourceEntity(169U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(161U);
    msg.validity = 127U;
    msg.x = 0.558090118115;
    msg.y = 0.293400497653;
    msg.z = 0.742592069084;

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
    msg.setTimeStamp(0.580852131198);
    msg.setSource(58398U);
    msg.setSourceEntity(246U);
    msg.setDestination(63048U);
    msg.setDestinationEntity(240U);
    msg.validity = 157U;
    msg.x = 0.790632323305;
    msg.y = 0.691838345486;
    msg.z = 0.61163415723;

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
    msg.setTimeStamp(0.224315413319);
    msg.setSource(37042U);
    msg.setSourceEntity(230U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(118U);
    msg.validity = 124U;
    msg.x = 0.98715665504;
    msg.y = 0.392798914628;
    msg.z = 0.379066630481;

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
    msg.setTimeStamp(0.00786124292257);
    msg.setSource(38847U);
    msg.setSourceEntity(149U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(47U);
    msg.validity = 28U;
    msg.x = 0.242760935667;
    msg.y = 0.349981398763;
    msg.z = 0.918600904758;

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
    msg.setTimeStamp(0.326638434213);
    msg.setSource(4104U);
    msg.setSourceEntity(19U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(187U);
    msg.validity = 148U;
    msg.x = 0.827113484801;
    msg.y = 0.961054157975;
    msg.z = 0.772877848897;

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
    msg.setTimeStamp(0.328694028747);
    msg.setSource(29168U);
    msg.setSourceEntity(142U);
    msg.setDestination(537U);
    msg.setDestinationEntity(133U);
    msg.validity = 92U;
    msg.x = 0.277584360328;
    msg.y = 0.237401452607;
    msg.z = 0.486550808601;

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
    msg.setTimeStamp(0.561590546455);
    msg.setSource(39806U);
    msg.setSourceEntity(4U);
    msg.setDestination(20725U);
    msg.setDestinationEntity(235U);
    msg.time = 0.0844372448535;
    msg.x = 0.490712822891;
    msg.y = 0.54383632534;
    msg.z = 0.869992025586;

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
    msg.setTimeStamp(0.0471295623407);
    msg.setSource(60959U);
    msg.setSourceEntity(138U);
    msg.setDestination(14779U);
    msg.setDestinationEntity(239U);
    msg.time = 0.133165398521;
    msg.x = 0.128264953495;
    msg.y = 0.650039593588;
    msg.z = 0.440153904844;

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
    msg.setTimeStamp(0.16254582773);
    msg.setSource(11533U);
    msg.setSourceEntity(167U);
    msg.setDestination(58296U);
    msg.setDestinationEntity(104U);
    msg.time = 0.0128744655711;
    msg.x = 0.522011524512;
    msg.y = 0.04465330743;
    msg.z = 0.624290059595;

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
    msg.setTimeStamp(0.475490098143);
    msg.setSource(55735U);
    msg.setSourceEntity(235U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(95U);
    msg.validity = 227U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.169550616699;
    tmp_msg_0.beam_height = 0.686288378333;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.980590962432;

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
    msg.setTimeStamp(0.569806008684);
    msg.setSource(57224U);
    msg.setSourceEntity(39U);
    msg.setDestination(54136U);
    msg.setDestinationEntity(92U);
    msg.validity = 224U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.45122021692;
    tmp_msg_0.y = 0.20830130167;
    tmp_msg_0.z = 0.884171847929;
    tmp_msg_0.phi = 0.833687224878;
    tmp_msg_0.theta = 0.486687677361;
    tmp_msg_0.psi = 0.251634982801;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.289606246799;

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
    msg.setTimeStamp(0.75995287406);
    msg.setSource(45306U);
    msg.setSourceEntity(142U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(65U);
    msg.validity = 7U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.773445409715;
    tmp_msg_0.beam_height = 0.999624697466;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.606617871689;

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
    msg.setTimeStamp(0.675449345442);
    msg.setSource(6277U);
    msg.setSourceEntity(203U);
    msg.setDestination(2949U);
    msg.setDestinationEntity(189U);
    msg.value = 0.746977048837;

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
    msg.setTimeStamp(0.381675117526);
    msg.setSource(47878U);
    msg.setSourceEntity(234U);
    msg.setDestination(25623U);
    msg.setDestinationEntity(194U);
    msg.value = 0.10172048757;

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
    msg.setTimeStamp(0.739464665032);
    msg.setSource(19975U);
    msg.setSourceEntity(129U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(62U);
    msg.value = 0.651294957032;

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
    msg.setTimeStamp(0.128713096945);
    msg.setSource(43145U);
    msg.setSourceEntity(248U);
    msg.setDestination(61022U);
    msg.setDestinationEntity(108U);
    msg.value = 0.659802399854;

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
    msg.setTimeStamp(0.46227005891);
    msg.setSource(36857U);
    msg.setSourceEntity(153U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(62U);
    msg.value = 0.717206805575;

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
    msg.setTimeStamp(0.565092078018);
    msg.setSource(37419U);
    msg.setSourceEntity(4U);
    msg.setDestination(19045U);
    msg.setDestinationEntity(71U);
    msg.value = 0.175866650301;

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
    msg.setTimeStamp(0.782771373372);
    msg.setSource(53278U);
    msg.setSourceEntity(222U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(70U);
    msg.value = 0.373033100804;

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
    msg.setTimeStamp(0.613391125495);
    msg.setSource(35655U);
    msg.setSourceEntity(133U);
    msg.setDestination(53831U);
    msg.setDestinationEntity(242U);
    msg.value = 0.537683731272;

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
    msg.setTimeStamp(0.977560246958);
    msg.setSource(6064U);
    msg.setSourceEntity(127U);
    msg.setDestination(48079U);
    msg.setDestinationEntity(63U);
    msg.value = 0.117472571602;

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
    msg.setTimeStamp(0.526048699403);
    msg.setSource(53630U);
    msg.setSourceEntity(122U);
    msg.setDestination(734U);
    msg.setDestinationEntity(98U);
    msg.value = 0.273189359784;

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
    msg.setTimeStamp(0.659336152167);
    msg.setSource(43737U);
    msg.setSourceEntity(201U);
    msg.setDestination(30624U);
    msg.setDestinationEntity(37U);
    msg.value = 0.668504024183;

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
    msg.setTimeStamp(0.458004811963);
    msg.setSource(56230U);
    msg.setSourceEntity(68U);
    msg.setDestination(50741U);
    msg.setDestinationEntity(208U);
    msg.value = 0.367515705429;

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
    msg.setTimeStamp(0.307240769099);
    msg.setSource(48864U);
    msg.setSourceEntity(44U);
    msg.setDestination(37746U);
    msg.setDestinationEntity(174U);
    msg.value = 0.148689996456;

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
    msg.setTimeStamp(0.564907104634);
    msg.setSource(56485U);
    msg.setSourceEntity(211U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(48U);
    msg.value = 0.482425669495;

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
    msg.setTimeStamp(0.970284630212);
    msg.setSource(34390U);
    msg.setSourceEntity(103U);
    msg.setDestination(23008U);
    msg.setDestinationEntity(65U);
    msg.value = 0.388274970509;

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
    msg.setTimeStamp(0.484540585912);
    msg.setSource(11994U);
    msg.setSourceEntity(155U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(89U);
    msg.value = 0.52808078161;

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
    msg.setTimeStamp(0.0205756011039);
    msg.setSource(29657U);
    msg.setSourceEntity(113U);
    msg.setDestination(12601U);
    msg.setDestinationEntity(239U);
    msg.value = 0.874628084131;

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
    msg.setTimeStamp(0.544411797132);
    msg.setSource(18130U);
    msg.setSourceEntity(136U);
    msg.setDestination(61543U);
    msg.setDestinationEntity(200U);
    msg.value = 0.596618624588;

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
    msg.setTimeStamp(0.64326531471);
    msg.setSource(46122U);
    msg.setSourceEntity(203U);
    msg.setDestination(2622U);
    msg.setDestinationEntity(200U);
    msg.value = 0.357991469447;

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
    msg.setTimeStamp(0.898184136971);
    msg.setSource(62182U);
    msg.setSourceEntity(111U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(102U);
    msg.value = 0.769503534178;

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
    msg.setTimeStamp(0.7501258996);
    msg.setSource(36131U);
    msg.setSourceEntity(119U);
    msg.setDestination(1549U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0446998016984;

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
    msg.setTimeStamp(0.543028335236);
    msg.setSource(27342U);
    msg.setSourceEntity(2U);
    msg.setDestination(27584U);
    msg.setDestinationEntity(158U);
    msg.value = 0.423566530158;

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
    msg.setTimeStamp(0.444741163814);
    msg.setSource(35041U);
    msg.setSourceEntity(41U);
    msg.setDestination(49195U);
    msg.setDestinationEntity(36U);
    msg.value = 0.580242416082;

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
    msg.setTimeStamp(0.410344693943);
    msg.setSource(58501U);
    msg.setSourceEntity(157U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(51U);
    msg.value = 0.532122201168;

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
    msg.setTimeStamp(0.34572888702);
    msg.setSource(15871U);
    msg.setSourceEntity(232U);
    msg.setDestination(36994U);
    msg.setDestinationEntity(176U);
    msg.direction = 0.728255558587;
    msg.speed = 0.626762228372;

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
    msg.setTimeStamp(0.587858597496);
    msg.setSource(11424U);
    msg.setSourceEntity(213U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(193U);
    msg.direction = 0.349171737741;
    msg.speed = 0.78780293945;

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
    msg.setTimeStamp(0.0562575001113);
    msg.setSource(43457U);
    msg.setSourceEntity(44U);
    msg.setDestination(491U);
    msg.setDestinationEntity(193U);
    msg.direction = 0.154412744307;
    msg.speed = 0.863437032061;

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
    msg.setTimeStamp(0.952020994517);
    msg.setSource(48814U);
    msg.setSourceEntity(234U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(45U);
    msg.value = 0.56971555705;

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
    msg.setTimeStamp(0.914688709319);
    msg.setSource(46233U);
    msg.setSourceEntity(56U);
    msg.setDestination(25421U);
    msg.setDestinationEntity(125U);
    msg.value = 0.797681554822;

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
    msg.setTimeStamp(0.495286529506);
    msg.setSource(32185U);
    msg.setSourceEntity(241U);
    msg.setDestination(47857U);
    msg.setDestinationEntity(224U);
    msg.value = 0.209073147382;

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
    msg.setTimeStamp(0.0758107194966);
    msg.setSource(54237U);
    msg.setSourceEntity(78U);
    msg.setDestination(41934U);
    msg.setDestinationEntity(93U);
    msg.value.assign("GGYVJQMVTJGCINHSIUVQLJQMYCSTMDTFZYXJPSKQRRIICBQVMFATPIJVPFUMVHCIODKWKNERXFXEWYUNLQNOEAGRSDAQCLWGCYRVEZBKCWLPFGPREDFHAXUHGGFAXUWZCXXLPDQRJGZOKGOLB");

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
    msg.setTimeStamp(0.374372235511);
    msg.setSource(54701U);
    msg.setSourceEntity(87U);
    msg.setDestination(55550U);
    msg.setDestinationEntity(90U);
    msg.value.assign("ARGZRBQEPBTDWKRMFRBZWCQBXKNYCSSAACPOWWVYQSYJOITEFJOSBKBNMITHRLNHQFFWSSMZPULJNVOBGMRXGLVWXYARVXHPOJUMKJLKCLITJXDZNBJGRBFDPUDFIHIJUCQTEVGFZNAPMNMPVVHTNXQONZPIEDAEWGELXBYFQMKMAXYFCALDCDPEUDVTDOJTUWQWGVSOYTZSHCDXILUQNJOAULVHOIF");

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
    msg.setTimeStamp(0.252111802553);
    msg.setSource(5484U);
    msg.setSourceEntity(205U);
    msg.setDestination(50452U);
    msg.setDestinationEntity(45U);
    msg.value.assign("HIIKMABHKHZMUNIRCRJDDZQTUSHEWWJLBDGBKVBDWQQTPKSZQEXMVBOIRSOUCTNZOZTZUXAVFOQGCJHWLHMVAEBNMOSVLILLWQKXXVJCGARWUXGFDBAMGEGOBLAUTDLS");

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
    msg.setTimeStamp(0.150791865844);
    msg.setSource(51939U);
    msg.setSourceEntity(250U);
    msg.setDestination(29399U);
    msg.setDestinationEntity(146U);
    const char tmp_msg_0[] = {-123, -111, -81, -61, -112, 87, -39, 31, 111, 19, 14, 22, 103, -18, -35, -64, -50, 14, -76, -88, 48, 49, 5, -9, -67, -24, 33, -47, 109, 122, -98, 118, 54, 6, 60, -48, 33, -66, -57, 92, 69, 66, 27, -12, -27, -93, 120, -25, -89, -109, -123, -53, 77, 17, 67, -86, -90, -57, -86, 68, 70, -25, 45, 74, -99, 16, -85, -68, 10, -80, 79, -107, 100, 28, 1, -42, 39, 84, -41, 105, 18, -75, 48, -122, -33, 97, 20, 20, 67, 109, 25, 55, -58, -83, -39, -45, -69, 15, 24, -40};
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
    msg.setTimeStamp(0.374400180973);
    msg.setSource(50414U);
    msg.setSourceEntity(113U);
    msg.setDestination(29572U);
    msg.setDestinationEntity(244U);
    const char tmp_msg_0[] = {-103, 100, 91, 67, -43, -107, 57, 36, 104, -10, 22, -100, 95, -101, -51, -75, -96, -3, -11, -40, 69, 18, 71, -58, -125, -86, 111, 123, -56, -100, 21, 0, 106, -42, -83, -19, 39, 48, -16, 94, 116, -15, 91, 84, -100, -64, 14, 43, -79, 21, 97, -9, 7, -68, 77, 48, 68, 5, 75, 88, 5, -69, 11, 83, 56, 78, -60, -1, 84, -83, 68, -57, -10, 72, -66, 118, 115, 63, 32, 4, -55, -119, 115, 106, 18, -7, 16, -42, 5, 106, -25, 29, -62, 13, 58, -93, 122, -19, -96, 75, -102, 58, -69};
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
    msg.setTimeStamp(0.742902475322);
    msg.setSource(52482U);
    msg.setSourceEntity(91U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(42U);
    const char tmp_msg_0[] = {80, -49, -2, -43, -128, 123, -121, 79, -37, 124, 66, 79, -13, 125, 14, 28, 34, 98, -125, -82, 111, 39, 37, -120, 75, 3, 96, 57, -78, -74, -67, -27, -21, -90, 80, -103, 52, -4, 93, -13, 14, -119, -43, 7, -119, 118, 75, 53, -38, 74, 103, 122, 110, 113, 59, 70, 89, -109, 105, 22, 104, -127, -36, -117, -27, 50, 15, 116, -33, 43, 37, 74, 17, -71, -59, -94, 79, 3, -111, -65, 16, -54, -15, 56, -72, -17, 62, -117, 20, -19, 52, 115, 1, 76, -43, -38, 102, 7, -99, -104, -8, -99, 125, 118, -85, 116, 72, -125, -125, -76, -90, 16, 28, 91, -7, -112, 52, 69, -43, -3, -16, -110, 108, 2, 126, 115, -125, -42, 49, -7, -29, 24, 65, 44, -116, 42, 25, -79, 96, -2, 79, 31, 103, -126, 87, 96, 64, -94, 101, -71, -28, -14, -78, -126, 3, 122, 15, -125, 7, 113, -30, 5, -77, -39, -69, -54, -105, 28, -91, 87, -10, -111, 98, -72, 79, -119, 85, 17, 82, -88, -83, -60, 126, 104, -50, 18, 99, 18, -86, 17, -121, 78, -74, 119, 63, 73, 39, 81, 101, -111, 24, -34, -30, -68, -13, -31, -19, -23, 103, 64, -84, 64, -117, 119, 89, -70, -13, -52, -16, 10, 8, -89, -68, -13, 50, 21, -3, 52, -48, -64, 82, -51, -70, -67, -117, -69, 76, -60, 82, 97};
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
    msg.setTimeStamp(0.741352290164);
    msg.setSource(51877U);
    msg.setSourceEntity(225U);
    msg.setDestination(32042U);
    msg.setDestinationEntity(165U);
    msg.frequency = 3647833041U;
    msg.min_range = 25213U;
    msg.max_range = 26882U;

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
    msg.setTimeStamp(0.329104124682);
    msg.setSource(35079U);
    msg.setSourceEntity(208U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(3U);
    msg.frequency = 3831880755U;
    msg.min_range = 25285U;
    msg.max_range = 30630U;

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
    msg.setTimeStamp(0.800927257735);
    msg.setSource(49036U);
    msg.setSourceEntity(48U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(34U);
    msg.frequency = 3996478771U;
    msg.min_range = 546U;
    msg.max_range = 17825U;

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
    msg.setTimeStamp(0.699808943299);
    msg.setSource(17190U);
    msg.setSourceEntity(80U);
    msg.setDestination(14527U);
    msg.setDestinationEntity(41U);
    msg.type = 47U;
    msg.frequency = 1314494983U;
    msg.min_range = 31672U;
    msg.max_range = 29124U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.165533473175;
    const char tmp_msg_0[] = {110, -93, 73, 42, 18, -64, 123, 13, -116, -95, -125, -87, -68, -68, 2, 104, 9, -114, 121, 67, -27, 47, -80, -43, 71, -87, -56, 100, -79, -19, -76, -81, 54, 107, 79, -46, -28, -123, 93, 18, -61, -9, -61, -15, 90, -116, 74, -50, 114, 4, 126, -102, -13, -5, -51, 9, 5, 99, -23, -10, -95, -114, 46, -126, 95, 39, 13, 24, 29, -12, -3, -16, 109, 35, -65, 24, -46, 3, 121, 116, -75, 40, 36, 85, -57, -67, 51, 94, -61, 81, 122, 88, -118, 123, 80, -47, 0, -104, -29, 96, 13, -116, -69, 17, 5, 107, 39, 96, 96, 116, -46, -64, 75, -85, -1, -40, -81, -94, 75, -41, -44, 48, 1, -110, 113, 82, -26, 105, 124, 10, -85, 114, -61, 60, 2, -88, 52, -93, -2, -44, 64, -104, -28, 78, -127, 125, -60};
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
    msg.setTimeStamp(0.54512406145);
    msg.setSource(6191U);
    msg.setSourceEntity(86U);
    msg.setDestination(25875U);
    msg.setDestinationEntity(45U);
    msg.type = 98U;
    msg.frequency = 1413548642U;
    msg.min_range = 20978U;
    msg.max_range = 2866U;
    msg.bits_per_point = 136U;
    msg.scale_factor = 0.565731680225;
    const char tmp_msg_0[] = {-75, 20, -112, -63, 53, -13, 99, 66, 89, 121, 107, 95, -78, -126, -25, -47, 60, -87, 87, 68, 109, 106, 97, 125, -5, -64, 101, 53, -66, -38, 64, 109, 103, -68, -118, 2, 76, -41, -124, -124};
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
    msg.setTimeStamp(0.402097484383);
    msg.setSource(42031U);
    msg.setSourceEntity(55U);
    msg.setDestination(916U);
    msg.setDestinationEntity(67U);
    msg.type = 221U;
    msg.frequency = 2101990894U;
    msg.min_range = 21184U;
    msg.max_range = 13390U;
    msg.bits_per_point = 39U;
    msg.scale_factor = 0.951922865327;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.886127321357;
    tmp_msg_0.beam_height = 0.588898165702;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {38, -43, -30, -33, 34, 75, 97, 95, 9, -8, 67, 46, -24, -53, -61, -59, -101, -43, 113, 60, 15, -78, 125, 18, 15, -99, 73, -86, -61, 124, 80, 76, 63, 112, -5, -62, -32, 71, 17, -95, 62, -62, 63, 18, 112, 107, 52, -120, 9, 58, -110, 111, 107};
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
    msg.setTimeStamp(0.405913483106);
    msg.setSource(710U);
    msg.setSourceEntity(209U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.248636324682);
    msg.setSource(45701U);
    msg.setSourceEntity(93U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.929769066167);
    msg.setSource(16954U);
    msg.setSourceEntity(176U);
    msg.setDestination(27627U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.276526226867);
    msg.setSource(29783U);
    msg.setSourceEntity(9U);
    msg.setDestination(28440U);
    msg.setDestinationEntity(212U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.252064707716);
    msg.setSource(56221U);
    msg.setSourceEntity(140U);
    msg.setDestination(43632U);
    msg.setDestinationEntity(112U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.302523575879);
    msg.setSource(24659U);
    msg.setSourceEntity(206U);
    msg.setDestination(6264U);
    msg.setDestinationEntity(12U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.920159225577);
    msg.setSource(28964U);
    msg.setSourceEntity(226U);
    msg.setDestination(9118U);
    msg.setDestinationEntity(0U);
    msg.value = 0.737034299162;
    msg.confidence = 0.800662134507;
    msg.opmodes.assign("BUUMNNNKXVDSCZMEUHJMCSBWRTIMUZBCVELRUDSESADZNJWYDJZZXPMHQMPYSFRBBGTJIWTQRTCLFOKJ");

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
    msg.setTimeStamp(0.220419194076);
    msg.setSource(35450U);
    msg.setSourceEntity(74U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(85U);
    msg.value = 0.795034587892;
    msg.confidence = 0.445690869072;
    msg.opmodes.assign("UXVIITMODZUETYRLJJODIGDKZOPQTWKVQAXDDKCQUJVYLGOEFSCGMNXBPZRJJXQNBSYIEKPCHNRJTDMQMHKMLBNRVFCEYLVONBT");

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
    msg.setTimeStamp(0.619643601587);
    msg.setSource(29162U);
    msg.setSourceEntity(153U);
    msg.setDestination(63591U);
    msg.setDestinationEntity(63U);
    msg.value = 0.213514494827;
    msg.confidence = 0.742442556231;
    msg.opmodes.assign("AFIQSBLTLACSFQBXTZMUICTBXBTQUQVFMKAPLREJSJJG");

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
    msg.setTimeStamp(0.366570684604);
    msg.setSource(55571U);
    msg.setSourceEntity(2U);
    msg.setDestination(60663U);
    msg.setDestinationEntity(198U);
    msg.itow = 2043889511U;
    msg.lat = 0.630445215759;
    msg.lon = 0.532839640432;
    msg.height_ell = 0.490812715536;
    msg.height_sea = 0.21561849117;
    msg.hacc = 0.698782961651;
    msg.vacc = 0.419616288926;
    msg.vel_n = 0.942363742733;
    msg.vel_e = 0.513142977176;
    msg.vel_d = 0.646612128396;
    msg.speed = 0.203494045307;
    msg.gspeed = 0.920921525767;
    msg.heading = 0.941283963263;
    msg.sacc = 0.222750663202;
    msg.cacc = 0.57204707507;

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
    msg.setTimeStamp(0.586420161814);
    msg.setSource(7073U);
    msg.setSourceEntity(125U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(15U);
    msg.itow = 3112479244U;
    msg.lat = 0.448358670526;
    msg.lon = 0.8284439858;
    msg.height_ell = 0.659838681152;
    msg.height_sea = 0.729492797647;
    msg.hacc = 0.974256690782;
    msg.vacc = 0.449191689036;
    msg.vel_n = 0.248231340956;
    msg.vel_e = 0.867097957664;
    msg.vel_d = 0.460796571084;
    msg.speed = 0.757775049746;
    msg.gspeed = 0.583713514662;
    msg.heading = 0.325704764464;
    msg.sacc = 0.826688876901;
    msg.cacc = 0.402349476717;

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
    msg.setTimeStamp(0.789567870048);
    msg.setSource(7450U);
    msg.setSourceEntity(166U);
    msg.setDestination(11508U);
    msg.setDestinationEntity(3U);
    msg.itow = 3398434512U;
    msg.lat = 0.450392078391;
    msg.lon = 0.945918800688;
    msg.height_ell = 0.530113793151;
    msg.height_sea = 0.65523247548;
    msg.hacc = 0.564985035859;
    msg.vacc = 0.270518185345;
    msg.vel_n = 0.78961106813;
    msg.vel_e = 0.858674441724;
    msg.vel_d = 0.875640586983;
    msg.speed = 0.828510713961;
    msg.gspeed = 0.0354550225541;
    msg.heading = 0.41496274232;
    msg.sacc = 0.126947847296;
    msg.cacc = 0.955917390693;

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
    msg.setTimeStamp(0.831487110883);
    msg.setSource(27392U);
    msg.setSourceEntity(67U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(237U);
    msg.id = 161U;
    msg.value = 0.36486140245;

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
    msg.setTimeStamp(0.613309159234);
    msg.setSource(40635U);
    msg.setSourceEntity(61U);
    msg.setDestination(51541U);
    msg.setDestinationEntity(113U);
    msg.id = 95U;
    msg.value = 0.219798202853;

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
    msg.setTimeStamp(0.0255799796513);
    msg.setSource(54098U);
    msg.setSourceEntity(26U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(164U);
    msg.id = 31U;
    msg.value = 0.76417653795;

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
    msg.setTimeStamp(0.500742557201);
    msg.setSource(48301U);
    msg.setSourceEntity(182U);
    msg.setDestination(58091U);
    msg.setDestinationEntity(86U);
    msg.x = 0.980331012017;
    msg.y = 0.863776126016;
    msg.z = 0.803961902465;
    msg.phi = 0.731586124147;
    msg.theta = 0.749139476273;
    msg.psi = 0.35550043087;

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
    msg.setTimeStamp(0.938885826807);
    msg.setSource(26733U);
    msg.setSourceEntity(118U);
    msg.setDestination(43856U);
    msg.setDestinationEntity(122U);
    msg.x = 0.709916675383;
    msg.y = 0.833089865155;
    msg.z = 0.157962840628;
    msg.phi = 0.512002410552;
    msg.theta = 0.611647312656;
    msg.psi = 0.638520842321;

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
    msg.setTimeStamp(0.334199265793);
    msg.setSource(15067U);
    msg.setSourceEntity(217U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(191U);
    msg.x = 0.0206980116082;
    msg.y = 0.0848800776412;
    msg.z = 0.20570276398;
    msg.phi = 0.696649095287;
    msg.theta = 0.166779641325;
    msg.psi = 0.156959863792;

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
    msg.setTimeStamp(0.0457231143233);
    msg.setSource(6478U);
    msg.setSourceEntity(216U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(245U);
    msg.beam_width = 0.837523349969;
    msg.beam_height = 0.921276770972;

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
    msg.setTimeStamp(0.315841957745);
    msg.setSource(13842U);
    msg.setSourceEntity(154U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(249U);
    msg.beam_width = 0.35643044889;
    msg.beam_height = 0.980011700992;

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
    msg.setTimeStamp(0.996639923757);
    msg.setSource(34887U);
    msg.setSourceEntity(128U);
    msg.setDestination(563U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.466677201961;
    msg.beam_height = 0.570168864506;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.399053218774);
    msg.setSource(43814U);
    msg.setSourceEntity(55U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(204U);
    msg.id = 153U;
    msg.zoom = 80U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.0199795839698);
    msg.setSource(64447U);
    msg.setSourceEntity(230U);
    msg.setDestination(45916U);
    msg.setDestinationEntity(231U);
    msg.id = 188U;
    msg.zoom = 67U;
    msg.action = 86U;

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
    msg.setTimeStamp(0.035298317481);
    msg.setSource(14128U);
    msg.setSourceEntity(71U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(15U);
    msg.id = 7U;
    msg.zoom = 119U;
    msg.action = 4U;

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
    msg.setTimeStamp(0.909577529885);
    msg.setSource(48704U);
    msg.setSourceEntity(69U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(82U);
    msg.id = 5U;
    msg.value = 0.845625772187;

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
    msg.setTimeStamp(0.104509204163);
    msg.setSource(39983U);
    msg.setSourceEntity(189U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(182U);
    msg.id = 75U;
    msg.value = 0.640291108308;

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
    msg.setTimeStamp(0.0589915458241);
    msg.setSource(47589U);
    msg.setSourceEntity(152U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(193U);
    msg.id = 203U;
    msg.value = 0.1937174689;

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
    msg.setTimeStamp(0.705964898242);
    msg.setSource(42589U);
    msg.setSourceEntity(198U);
    msg.setDestination(723U);
    msg.setDestinationEntity(40U);
    msg.id = 66U;
    msg.value = 0.713796813135;

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
    msg.setTimeStamp(0.748039019632);
    msg.setSource(9342U);
    msg.setSourceEntity(209U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(91U);
    msg.id = 71U;
    msg.value = 0.219651263421;

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
    msg.setTimeStamp(0.710231823916);
    msg.setSource(15370U);
    msg.setSourceEntity(185U);
    msg.setDestination(61304U);
    msg.setDestinationEntity(118U);
    msg.id = 28U;
    msg.value = 0.488922971132;

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
    msg.setTimeStamp(0.00668427247895);
    msg.setSource(13673U);
    msg.setSourceEntity(180U);
    msg.setDestination(36975U);
    msg.setDestinationEntity(158U);
    msg.id = 137U;
    msg.angle = 0.974273646898;

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
    msg.setTimeStamp(0.0903471448353);
    msg.setSource(9691U);
    msg.setSourceEntity(177U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(14U);
    msg.id = 89U;
    msg.angle = 0.126040246267;

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
    msg.setTimeStamp(0.269208508978);
    msg.setSource(21569U);
    msg.setSourceEntity(180U);
    msg.setDestination(43544U);
    msg.setDestinationEntity(194U);
    msg.id = 77U;
    msg.angle = 0.396323498161;

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
    msg.setTimeStamp(0.568939336299);
    msg.setSource(43964U);
    msg.setSourceEntity(73U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(173U);
    msg.op = 239U;
    msg.actions.assign("YFHTIVOKYLBOKQMEDITBZXREOSJTHPGLHWAWFQOYPVIAEERGKISNIBZLTXPJRENLXRNKEDDMPKQXSLJCHWLHNEYFNZUOGQSQVJ");

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
    msg.setTimeStamp(0.470395686284);
    msg.setSource(30084U);
    msg.setSourceEntity(220U);
    msg.setDestination(32482U);
    msg.setDestinationEntity(146U);
    msg.op = 97U;
    msg.actions.assign("YMJWQAZONLVUBFBPSTMTEPMVZSDGQKXWKVFSBKIYFIOTSRHURBGCGNFYKYLWLCQIEIYIUPSCJMURUPQVDLPCRAKVMKNFQSEDAZPFJHACWZLLIKLDRKLNXMNCTMWGBPNUXHPYZPSNQDZHBYJNXHJONQJTJRNCHXQEVJURKMVHOWWXRZGXTSJGDYEPMERVULUFIBWLSCATOXDWEBKARTBIHZ");

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
    msg.setTimeStamp(0.469703318601);
    msg.setSource(35748U);
    msg.setSourceEntity(148U);
    msg.setDestination(12835U);
    msg.setDestinationEntity(143U);
    msg.op = 95U;
    msg.actions.assign("FRYDMYAUQEYEQBMBBPJMYUVQOJDHITXSZSKXUCVVCNCKBKXGWMZIKRQATUPSZPEEUMQJFZPGAARBHDUYLHGARFIOWZVKNLAKKUWEZZLOJQPADAFRQCYAUWNNRXFSAPCYEEYCWJHRNYHBOLVI");

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
    msg.setTimeStamp(0.355444687893);
    msg.setSource(43151U);
    msg.setSourceEntity(110U);
    msg.setDestination(31526U);
    msg.setDestinationEntity(110U);
    msg.actions.assign("ONJKPPYVGOLUPYCXZXOQMCYVNVSWRBQLSQZUVUYRYHTCOPLJHOMENIKOBOYAHQSQZGSMH");

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
    msg.setTimeStamp(0.0540781992292);
    msg.setSource(1758U);
    msg.setSourceEntity(76U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(68U);
    msg.actions.assign("BCMIKOKIIQWDYDFXFOKBEXTRJWORFLQTLSCIDNGUGOXGHNTELJFVJXHZGUQDVNQH");

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
    msg.setTimeStamp(0.724790143996);
    msg.setSource(51313U);
    msg.setSourceEntity(96U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("OKZOXSZXJVLLCLXSEYZCNRNAIBTLWKYTTNUXGKEPGUBCCIIRTUARBWANPHQZMJJNOHXXFUYZDMNBFOPGJLEHSDVARYCVPQLTGDWDFSZXJDYISKPSAMJUKNDTEAFNGGDEUTZCVFJECFTMPBJQKFHNCOHFJIEOVGMPPNOEHOWADXRKHWJUDQWYIRQRDHCZAK");

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
    msg.setTimeStamp(0.301620465006);
    msg.setSource(60229U);
    msg.setSourceEntity(166U);
    msg.setDestination(6603U);
    msg.setDestinationEntity(210U);
    msg.button = 43U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.839439823445);
    msg.setSource(49252U);
    msg.setSourceEntity(148U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(16U);
    msg.button = 9U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.591538689897);
    msg.setSource(3860U);
    msg.setSourceEntity(187U);
    msg.setDestination(3U);
    msg.setDestinationEntity(114U);
    msg.button = 181U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.0359729521308);
    msg.setSource(58727U);
    msg.setSourceEntity(127U);
    msg.setDestination(43685U);
    msg.setDestinationEntity(99U);
    msg.op = 59U;
    msg.text.assign("OGTGWAZWVJ");

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
    msg.setTimeStamp(0.777685886495);
    msg.setSource(32070U);
    msg.setSourceEntity(66U);
    msg.setDestination(18577U);
    msg.setDestinationEntity(91U);
    msg.op = 112U;
    msg.text.assign("TKNFDRBAIFHBRCTWDUARVTHMOQDFBGUSDSHUZYDZHZJTSUBNFIJGOOLSPJVZZKCXHWCCIYSTCYMMPHBDTQBLNOGNGJLWWZUEJPRYAXNVSGTUFEUDOLDXICNHIJMKTOYVXIKN");

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
    msg.setTimeStamp(0.187481823261);
    msg.setSource(29634U);
    msg.setSourceEntity(68U);
    msg.setDestination(58466U);
    msg.setDestinationEntity(60U);
    msg.op = 79U;
    msg.text.assign("NJZFMBPGPWHILDVRCOCTRDKWWZOCBHVEJG");

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
    msg.setTimeStamp(0.779560427472);
    msg.setSource(3659U);
    msg.setSourceEntity(226U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(153U);
    msg.op = 52U;
    msg.time_remain = 0.296321591035;
    msg.sched_time = 0.908513780742;

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
    msg.setTimeStamp(0.729886539597);
    msg.setSource(53024U);
    msg.setSourceEntity(220U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(86U);
    msg.op = 236U;
    msg.time_remain = 0.333080579712;
    msg.sched_time = 0.34667227697;

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
    msg.setTimeStamp(0.777441601546);
    msg.setSource(43080U);
    msg.setSourceEntity(229U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(54U);
    msg.op = 201U;
    msg.time_remain = 0.645394652912;
    msg.sched_time = 0.0743525206619;

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
    msg.setTimeStamp(0.531991817862);
    msg.setSource(57341U);
    msg.setSourceEntity(159U);
    msg.setDestination(57499U);
    msg.setDestinationEntity(228U);
    msg.name.assign("QGAMYUSYADJHJBYNZWWSQSQENAWTIEVZKRKAOBYRFVWVCXVUQYHPGXNKXKBITXVRSKPCZJWNQCVPAMHJQFYWQXQSPYHRCLOFUPXFDLXHTWREPSLRZJBQNKZTSOULFNCRNAKVCYIYTFBMWNOLVGUUDN");
    msg.op = 114U;
    msg.sched_time = 0.195022691097;

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
    msg.setTimeStamp(0.996899930403);
    msg.setSource(46342U);
    msg.setSourceEntity(49U);
    msg.setDestination(42793U);
    msg.setDestinationEntity(225U);
    msg.name.assign("SZNLVVGEAZGEICDHWFBTIVOCIRWBKCWRVAXKQXETMTRLXMVOXWOLMDTSVXISPXQEINUUDOZRQFLSIQEYAKKQDROUAMCJKBBJGTYJMTXLZTJNMEQHKGCVHFSURZGZQYDPFAKRXFHEYJSBGBWUHFECZSZJOPFNDRDOGHPNPAWPINUHYRCQZWSGVBJYOHBFYNXUUNSWWFBZTJAMTCAWRLSMUGOMQIKDTKXY");
    msg.op = 73U;
    msg.sched_time = 0.821144640532;

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
    msg.setTimeStamp(0.359579441714);
    msg.setSource(60876U);
    msg.setSourceEntity(189U);
    msg.setDestination(9608U);
    msg.setDestinationEntity(97U);
    msg.name.assign("HGMSFUQWRQIWAAIQPSHKGNCIGGSOAFTBXDP");
    msg.op = 63U;
    msg.sched_time = 0.665361894616;

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
    msg.setTimeStamp(0.6638920122);
    msg.setSource(47109U);
    msg.setSourceEntity(12U);
    msg.setDestination(24288U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.407512325034);
    msg.setSource(30922U);
    msg.setSourceEntity(207U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.319825958485);
    msg.setSource(61025U);
    msg.setSourceEntity(245U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.417085855093);
    msg.setSource(32232U);
    msg.setSourceEntity(21U);
    msg.setDestination(36606U);
    msg.setDestinationEntity(21U);
    msg.name.assign("GDVVRVNNEZQUBJXHKMIARWHIVCXDPBTJXCLQXABZHMYUOUDMUYLSIGFPAXVGWPHHSUTTJTLBAXWTQFBOLDTJCCEWYTYRJKIONJPCRSMJWPQBDRINAZGYJZUXBGXRZVPDVSMGEWSZBHIQEPLGDLKKYCIGEOJGFNQOFFIBIQY");
    msg.state = 4U;

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
    msg.setTimeStamp(0.473977770126);
    msg.setSource(10993U);
    msg.setSourceEntity(68U);
    msg.setDestination(56271U);
    msg.setDestinationEntity(121U);
    msg.name.assign("SHIZNAGOOKR");
    msg.state = 198U;

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
    msg.setTimeStamp(0.723647111144);
    msg.setSource(11186U);
    msg.setSourceEntity(71U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(157U);
    msg.name.assign("TOJDNSATSSKZWKCUTPQZMKHGTCFNGSXOVINOHJFBSZYVFDLJONMZNRCTFBEWDKAGISDTZCHJGDP");
    msg.state = 110U;

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
    msg.setTimeStamp(0.0761838058312);
    msg.setSource(43892U);
    msg.setSourceEntity(193U);
    msg.setDestination(13023U);
    msg.setDestinationEntity(31U);
    msg.name.assign("CKTCKUOFPUVEV");
    msg.value = 212U;

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
    msg.setTimeStamp(0.988514131745);
    msg.setSource(41613U);
    msg.setSourceEntity(237U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(150U);
    msg.name.assign("NNTEMBRFNDZVEW");
    msg.value = 150U;

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
    msg.setTimeStamp(0.146012033614);
    msg.setSource(13097U);
    msg.setSourceEntity(104U);
    msg.setDestination(36775U);
    msg.setDestinationEntity(34U);
    msg.name.assign("SNYHIMKALRSDOROXIIMMZJYDGROXHWLYNBONIHPJMF");
    msg.value = 114U;

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
    msg.setTimeStamp(0.537850637715);
    msg.setSource(21838U);
    msg.setSourceEntity(188U);
    msg.setDestination(8239U);
    msg.setDestinationEntity(57U);
    msg.name.assign("YXTSGDPWBWIRPDGUYIOSKNQVAHGPFZZULJHDEHNNACDVYQLKTYVLNLJBOQAIXCYASODTWSEHWLRGPXEDCDRBUBEZRHHUYGBJXOPZGUCXSCZUKMMBQACMYOSPKOXOTVPFNVXJITBWMFTRHRBSGIAAWUWTLNJSEZFXPDDLAQXGQOKCURJEHIKOYKRIFYHIF");

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
    msg.setTimeStamp(0.0387189374447);
    msg.setSource(9589U);
    msg.setSourceEntity(202U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(184U);
    msg.name.assign("WOFSMICSUCPXURBQGRSEBPWHIOGVUNAORELMUYBYVZWXNDYPONPVLLDCXDEUAFNIZSVQUMHHSJQCUFHFWBY");

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
    msg.setTimeStamp(0.303602851357);
    msg.setSource(36008U);
    msg.setSourceEntity(56U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(57U);
    msg.name.assign("PNNYZOUEATRZRQBKMXMRYHPSRJEHSLMABDIGFXTUKJZHCOUJWLEUOTTNFHRZJNPVUJMBVVIWDZBDDOIZJKFQEMNMIVLMHIHYGFSDWJLKCQWRIODFVZGVANWRBFZTELUGSKTUUGVGAACNLCSYTVDJKXWCYMOVMXTBWPMYXSCYA");

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
    msg.setTimeStamp(0.837397232641);
    msg.setSource(25433U);
    msg.setSourceEntity(203U);
    msg.setDestination(32520U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WMXZUXNGTWHZTFGFEIZHSLQVVQZBKYULSBCXWNBFRMSRIGQCIJGHNFEDJKVUYXDOZKFXTRGWSYSVJXXSJNQCAPWUPYUNKCVEUTJJJDAIXIEOYGONEFFAEUASFLKSADTRLVHYABXMAPCHCVRBUKZRKMDZBLBKQPITZVQDHQLLQLGYPRWDIKAJFNBN");
    msg.value = 110U;

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
    msg.setTimeStamp(0.598382767172);
    msg.setSource(46635U);
    msg.setSourceEntity(214U);
    msg.setDestination(22134U);
    msg.setDestinationEntity(52U);
    msg.name.assign("AJRGWIPSPUZZ");
    msg.value = 5U;

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
    msg.setTimeStamp(0.364232369259);
    msg.setSource(28711U);
    msg.setSourceEntity(101U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(245U);
    msg.name.assign("OCALSSVREOFMLRZXLBUJDDQUUTTXNCLHSUOKQMGJWCIYDCWNAUKFQGFTFNXNYISSHXWJWDOVOSJNCNXPIDEBYRROTXIVEKSGJPPBRMQDFGTVGBXECQPRXYTRMYGGACDBGBZYRIPPWHCUEVWMKGLKKN");
    msg.value = 164U;

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
    msg.setTimeStamp(0.638452106264);
    msg.setSource(52286U);
    msg.setSourceEntity(194U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.236093856498;
    msg.lon = 0.557023600095;
    msg.height = 0.591736904481;
    msg.x = 0.745337071399;
    msg.y = 0.598456591982;
    msg.z = 0.0150211002923;
    msg.phi = 0.0929180980447;
    msg.theta = 0.0549780224469;
    msg.psi = 0.157016120194;
    msg.u = 0.370616602463;
    msg.v = 0.617600315029;
    msg.w = 0.963188383147;
    msg.vx = 0.289722438297;
    msg.vy = 0.957607089548;
    msg.vz = 0.937318664702;
    msg.p = 0.356261695895;
    msg.q = 0.80645351662;
    msg.r = 0.375505159225;
    msg.depth = 0.643913781103;
    msg.alt = 0.687766396542;

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
    msg.setTimeStamp(0.0525160644153);
    msg.setSource(42610U);
    msg.setSourceEntity(72U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.245201473286;
    msg.lon = 0.67701086344;
    msg.height = 0.52321620571;
    msg.x = 0.480435894711;
    msg.y = 0.385828286941;
    msg.z = 0.00695973821084;
    msg.phi = 0.381878727687;
    msg.theta = 0.927773842776;
    msg.psi = 0.202299636898;
    msg.u = 0.298414517766;
    msg.v = 0.956807713497;
    msg.w = 0.627608572029;
    msg.vx = 0.0428586954286;
    msg.vy = 0.5950407352;
    msg.vz = 0.641952486311;
    msg.p = 0.162157655722;
    msg.q = 0.656843973585;
    msg.r = 0.380563725032;
    msg.depth = 0.532910437941;
    msg.alt = 0.0120322877788;

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
    msg.setTimeStamp(0.682390995127);
    msg.setSource(59290U);
    msg.setSourceEntity(46U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.550115182942;
    msg.lon = 0.677349967222;
    msg.height = 0.104782920199;
    msg.x = 0.337507783373;
    msg.y = 0.388756600177;
    msg.z = 0.512758671769;
    msg.phi = 0.926980559882;
    msg.theta = 0.998419343329;
    msg.psi = 0.597469602567;
    msg.u = 0.458557327611;
    msg.v = 0.104702639245;
    msg.w = 0.559783804509;
    msg.vx = 0.733991210373;
    msg.vy = 0.512031182335;
    msg.vz = 0.502603234931;
    msg.p = 0.10647694125;
    msg.q = 0.133015331716;
    msg.r = 0.462953981514;
    msg.depth = 0.797228706439;
    msg.alt = 0.361647790709;

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
    msg.setTimeStamp(0.902316497964);
    msg.setSource(9830U);
    msg.setSourceEntity(171U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(231U);
    msg.x = 0.89277191036;
    msg.y = 0.683891068053;
    msg.z = 0.14372409807;

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
    msg.setTimeStamp(0.018755156632);
    msg.setSource(25360U);
    msg.setSourceEntity(0U);
    msg.setDestination(879U);
    msg.setDestinationEntity(88U);
    msg.x = 0.931229104073;
    msg.y = 0.13325235087;
    msg.z = 0.922960795279;

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
    msg.setTimeStamp(0.136004814322);
    msg.setSource(32490U);
    msg.setSourceEntity(247U);
    msg.setDestination(15663U);
    msg.setDestinationEntity(58U);
    msg.x = 0.254203215998;
    msg.y = 0.94033412892;
    msg.z = 0.185144085918;

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
    msg.setTimeStamp(0.310793804851);
    msg.setSource(19191U);
    msg.setSourceEntity(70U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(6U);
    msg.value = 0.570511820984;

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
    msg.setTimeStamp(0.708346614776);
    msg.setSource(45068U);
    msg.setSourceEntity(64U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(225U);
    msg.value = 0.243605354128;

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
    msg.setTimeStamp(0.180088776614);
    msg.setSource(58394U);
    msg.setSourceEntity(162U);
    msg.setDestination(60876U);
    msg.setDestinationEntity(66U);
    msg.value = 0.458444883869;

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
    msg.setTimeStamp(0.930862146611);
    msg.setSource(42444U);
    msg.setSourceEntity(31U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(188U);
    msg.value = 0.304709150757;

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
    msg.setTimeStamp(0.358051543175);
    msg.setSource(58939U);
    msg.setSourceEntity(167U);
    msg.setDestination(13843U);
    msg.setDestinationEntity(133U);
    msg.value = 0.659174872061;

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
    msg.setTimeStamp(0.509758337379);
    msg.setSource(2298U);
    msg.setSourceEntity(95U);
    msg.setDestination(17875U);
    msg.setDestinationEntity(55U);
    msg.value = 0.244845500151;

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
    msg.setTimeStamp(0.607862956456);
    msg.setSource(38955U);
    msg.setSourceEntity(32U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(108U);
    msg.x = 0.117628573183;
    msg.y = 0.929331826728;
    msg.z = 0.747552718627;
    msg.phi = 0.677520143553;
    msg.theta = 0.597989956927;
    msg.psi = 0.640719742744;
    msg.p = 0.532080818903;
    msg.q = 0.620405328341;
    msg.r = 0.0337676782697;
    msg.u = 0.132947506339;
    msg.v = 0.608625818506;
    msg.w = 0.781835029064;
    msg.bias_psi = 0.69726862913;
    msg.bias_r = 0.0191379066955;

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
    msg.setTimeStamp(0.368133521906);
    msg.setSource(57001U);
    msg.setSourceEntity(25U);
    msg.setDestination(20398U);
    msg.setDestinationEntity(92U);
    msg.x = 0.271646354734;
    msg.y = 0.666682109346;
    msg.z = 0.984760227946;
    msg.phi = 0.81959497411;
    msg.theta = 0.955187537917;
    msg.psi = 0.906435565692;
    msg.p = 0.944200688585;
    msg.q = 0.480952970683;
    msg.r = 0.0912376778055;
    msg.u = 0.247296828002;
    msg.v = 0.409450992238;
    msg.w = 0.0228568166401;
    msg.bias_psi = 0.784323665059;
    msg.bias_r = 0.329118237794;

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
    msg.setTimeStamp(0.347718790714);
    msg.setSource(2993U);
    msg.setSourceEntity(121U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(119U);
    msg.x = 0.640686891586;
    msg.y = 0.794311440732;
    msg.z = 0.970891434629;
    msg.phi = 0.586841688949;
    msg.theta = 0.918987515878;
    msg.psi = 0.640562524814;
    msg.p = 0.118375781582;
    msg.q = 0.250462321043;
    msg.r = 0.10818107609;
    msg.u = 0.174614902147;
    msg.v = 0.0777250941691;
    msg.w = 0.803681835829;
    msg.bias_psi = 0.69359450635;
    msg.bias_r = 0.537133986598;

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
    msg.setTimeStamp(0.674039698427);
    msg.setSource(6388U);
    msg.setSourceEntity(250U);
    msg.setDestination(60809U);
    msg.setDestinationEntity(229U);
    msg.bias_psi = 0.522412520732;
    msg.bias_r = 0.0520226301414;
    msg.cog = 0.886664647081;
    msg.cyaw = 0.847679014267;
    msg.lbl_rej_level = 0.957912057194;
    msg.gps_rej_level = 0.255237503597;
    msg.custom_x = 0.501463611077;
    msg.custom_y = 0.435228402852;
    msg.custom_z = 0.394400972247;

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
    msg.setTimeStamp(0.813362004994);
    msg.setSource(58501U);
    msg.setSourceEntity(195U);
    msg.setDestination(50395U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.251301825326;
    msg.bias_r = 0.193724986379;
    msg.cog = 0.0930854997899;
    msg.cyaw = 0.394892579092;
    msg.lbl_rej_level = 0.988681706633;
    msg.gps_rej_level = 0.600036145942;
    msg.custom_x = 0.360887579084;
    msg.custom_y = 0.684293243857;
    msg.custom_z = 0.939028504092;

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
    msg.setTimeStamp(0.669618127159);
    msg.setSource(5826U);
    msg.setSourceEntity(60U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.731443006475;
    msg.bias_r = 0.478050104028;
    msg.cog = 0.96237227853;
    msg.cyaw = 0.347276572897;
    msg.lbl_rej_level = 0.828599161721;
    msg.gps_rej_level = 0.240186143023;
    msg.custom_x = 0.557583554716;
    msg.custom_y = 0.188466411095;
    msg.custom_z = 0.636614197202;

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
    msg.setTimeStamp(0.272849308643);
    msg.setSource(63311U);
    msg.setSourceEntity(189U);
    msg.setDestination(10626U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.339809514025;
    msg.reason = 15U;

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
    msg.setTimeStamp(0.172846514817);
    msg.setSource(55360U);
    msg.setSourceEntity(4U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(52U);
    msg.utc_time = 0.404046833268;
    msg.reason = 9U;

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
    msg.setTimeStamp(0.416705662082);
    msg.setSource(11278U);
    msg.setSourceEntity(35U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.253721227441;
    msg.reason = 232U;

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
    msg.setTimeStamp(0.515965690246);
    msg.setSource(18423U);
    msg.setSourceEntity(227U);
    msg.setDestination(65179U);
    msg.setDestinationEntity(233U);
    msg.id = 182U;
    msg.range = 0.652644184148;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.48635083767);
    msg.setSource(2000U);
    msg.setSourceEntity(54U);
    msg.setDestination(28650U);
    msg.setDestinationEntity(209U);
    msg.id = 89U;
    msg.range = 0.528118323075;
    msg.acceptance = 235U;

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
    msg.setTimeStamp(0.696568263592);
    msg.setSource(52961U);
    msg.setSourceEntity(132U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(178U);
    msg.id = 244U;
    msg.range = 0.56644743618;
    msg.acceptance = 178U;

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
    msg.setTimeStamp(0.422592991708);
    msg.setSource(431U);
    msg.setSourceEntity(53U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(162U);
    msg.type = 182U;
    msg.reason = 57U;
    msg.value = 0.315233665855;
    msg.timestep = 0.100716427284;

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
    msg.setTimeStamp(0.425160349537);
    msg.setSource(24763U);
    msg.setSourceEntity(19U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(131U);
    msg.type = 133U;
    msg.reason = 109U;
    msg.value = 0.421930616479;
    msg.timestep = 0.545765493849;

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
    msg.setTimeStamp(0.386757372616);
    msg.setSource(11171U);
    msg.setSourceEntity(125U);
    msg.setDestination(28325U);
    msg.setDestinationEntity(52U);
    msg.type = 224U;
    msg.reason = 236U;
    msg.value = 0.749257288337;
    msg.timestep = 0.942351091699;

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
    msg.setTimeStamp(0.0259164360195);
    msg.setSource(63091U);
    msg.setSourceEntity(120U);
    msg.setDestination(24388U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.852196624731);
    msg.setSource(58043U);
    msg.setSourceEntity(239U);
    msg.setDestination(14441U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.771741593908);
    msg.setSource(43903U);
    msg.setSourceEntity(236U);
    msg.setDestination(21345U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.909061744311);
    msg.setSource(54444U);
    msg.setSourceEntity(178U);
    msg.setDestination(61166U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("OEZYRJTFWCMUFNPJYTXYGDPGXNGJFIVLRKHSXRERGRQZXOBDABQCZKBYMMIDEWSSVVBNNTIOAFSBTPQTMEGILYXUDBHBHLPMIHKTMWCFHDRAVQQERBDPANVYDVLQYQSZWGJPUNYKJAMAZZSSXHLPWCOIDUMSNCHVULZNJHWFCASOUNVYCHKCPMRFZEXUKTTXALKWHCDGXOQ");
    msg.x = 0.756935513783;
    msg.y = 0.611519815741;
    msg.depth = 0.542310731776;
    msg.var_x = 0.0949555221556;
    msg.var_y = 0.967044620698;

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
    msg.setTimeStamp(0.575649919856);
    msg.setSource(30281U);
    msg.setSourceEntity(127U);
    msg.setDestination(16828U);
    msg.setDestinationEntity(107U);
    msg.beacon.assign("BYXAIHYEFGRUQUWUKSCLFIHTEVZRKXEROCMVBJZTEYRLJGANFQPTRLWGOFOZSEMRWDHOTAQGWNVJSVUULJSVJXAUPBEZMRPNJKYWVFDUKDGTPIODVOXTSAKATXBFLBWXTZQIPMGNKKPMHRBTOCDSMPMIZKAHWYQGCCYSQRLXGNYQTNXIGUZCOBBNJ");
    msg.x = 0.880802167166;
    msg.y = 0.184301560314;
    msg.depth = 0.179038485908;
    msg.var_x = 0.564560031939;
    msg.var_y = 0.303286182151;

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
    msg.setTimeStamp(0.970880731681);
    msg.setSource(36144U);
    msg.setSourceEntity(90U);
    msg.setDestination(46239U);
    msg.setDestinationEntity(222U);
    msg.beacon.assign("YFLHPYAORIJOADHWDUGXCBXIEUWZOVBQEOFGYEXXEEWUOPJPNTDGYTVYDZDNXCKIGSXHHEKIYCVZEMGLAI");
    msg.x = 0.637652285675;
    msg.y = 0.00200352489487;
    msg.depth = 0.250882959692;
    msg.var_x = 0.841278919275;
    msg.var_y = 0.972906923695;

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
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.360921974941);
    msg.setSource(28758U);
    msg.setSourceEntity(226U);
    msg.setDestination(24583U);
    msg.setDestinationEntity(107U);
    msg.x = 0.729390987619;
    msg.y = 0.987914612592;
    msg.z = 0.0509509177215;

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
    msg.setTimeStamp(0.441501631531);
    msg.setSource(41224U);
    msg.setSourceEntity(164U);
    msg.setDestination(22053U);
    msg.setDestinationEntity(89U);
    msg.x = 0.0464174628421;
    msg.y = 0.155340640362;
    msg.z = 0.00741672330389;

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
    msg.setTimeStamp(0.786123955137);
    msg.setSource(33640U);
    msg.setSourceEntity(70U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(27U);
    msg.x = 0.578339457704;
    msg.y = 0.70672709793;
    msg.z = 0.964575117127;

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
    msg.setTimeStamp(0.537726632714);
    msg.setSource(47694U);
    msg.setSourceEntity(231U);
    msg.setDestination(23519U);
    msg.setDestinationEntity(163U);
    msg.value = 0.167605638666;

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
    msg.setTimeStamp(0.648697777138);
    msg.setSource(44160U);
    msg.setSourceEntity(166U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(233U);
    msg.value = 0.460140577673;

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
    msg.setTimeStamp(0.249261752259);
    msg.setSource(12367U);
    msg.setSourceEntity(12U);
    msg.setDestination(7498U);
    msg.setDestinationEntity(21U);
    msg.value = 0.00222556957757;

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
    msg.setTimeStamp(0.147400884528);
    msg.setSource(48447U);
    msg.setSourceEntity(180U);
    msg.setDestination(8352U);
    msg.setDestinationEntity(239U);
    msg.value = 0.719412792896;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.290133385704);
    msg.setSource(28934U);
    msg.setSourceEntity(132U);
    msg.setDestination(63237U);
    msg.setDestinationEntity(246U);
    msg.value = 0.436192541191;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.853540885726);
    msg.setSource(17187U);
    msg.setSourceEntity(240U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(63U);
    msg.value = 0.223803205946;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.599616887991);
    msg.setSource(10380U);
    msg.setSourceEntity(102U);
    msg.setDestination(59579U);
    msg.setDestinationEntity(36U);
    msg.value = 0.378919006273;
    msg.speed_units = 240U;

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
    msg.setTimeStamp(0.143292662042);
    msg.setSource(59972U);
    msg.setSourceEntity(104U);
    msg.setDestination(33681U);
    msg.setDestinationEntity(9U);
    msg.value = 0.725255335405;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.518808313675);
    msg.setSource(55301U);
    msg.setSourceEntity(105U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(47U);
    msg.value = 0.172652605718;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.960416435709);
    msg.setSource(34411U);
    msg.setSourceEntity(56U);
    msg.setDestination(25686U);
    msg.setDestinationEntity(221U);
    msg.value = 0.710901262153;

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
    msg.setTimeStamp(0.618199799844);
    msg.setSource(44543U);
    msg.setSourceEntity(32U);
    msg.setDestination(23642U);
    msg.setDestinationEntity(251U);
    msg.value = 0.944612330731;

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
    msg.setTimeStamp(0.296258972319);
    msg.setSource(19916U);
    msg.setSourceEntity(19U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(10U);
    msg.value = 0.869381986492;

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
    msg.setTimeStamp(0.0166610587836);
    msg.setSource(11484U);
    msg.setSourceEntity(15U);
    msg.setDestination(46273U);
    msg.setDestinationEntity(179U);
    msg.value = 0.981675693336;

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
    msg.setTimeStamp(0.283628703254);
    msg.setSource(54775U);
    msg.setSourceEntity(235U);
    msg.setDestination(58028U);
    msg.setDestinationEntity(134U);
    msg.value = 0.754293910362;

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
    msg.setTimeStamp(0.148822436752);
    msg.setSource(40992U);
    msg.setSourceEntity(168U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(91U);
    msg.value = 0.894831304851;

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
    msg.setTimeStamp(0.371010101532);
    msg.setSource(42761U);
    msg.setSourceEntity(215U);
    msg.setDestination(18242U);
    msg.setDestinationEntity(12U);
    msg.value = 0.68439574909;

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
    msg.setTimeStamp(0.202535913712);
    msg.setSource(27354U);
    msg.setSourceEntity(244U);
    msg.setDestination(62922U);
    msg.setDestinationEntity(129U);
    msg.value = 0.881797886956;

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
    msg.setTimeStamp(0.539633382402);
    msg.setSource(42462U);
    msg.setSourceEntity(113U);
    msg.setDestination(42387U);
    msg.setDestinationEntity(63U);
    msg.value = 0.943617091319;

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
    msg.setTimeStamp(0.213774334371);
    msg.setSource(23080U);
    msg.setSourceEntity(19U);
    msg.setDestination(36975U);
    msg.setDestinationEntity(152U);
    msg.start_lat = 0.852402192256;
    msg.start_lon = 0.216512387348;
    msg.start_z = 0.696868459524;
    msg.start_z_units = 113U;
    msg.end_lat = 0.0804196806219;
    msg.end_lon = 0.824705899188;
    msg.end_z = 0.0473287018866;
    msg.end_z_units = 100U;
    msg.speed = 0.395353646746;
    msg.speed_units = 63U;
    msg.lradius = 0.461160341425;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.281780503799);
    msg.setSource(58060U);
    msg.setSourceEntity(75U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(116U);
    msg.start_lat = 0.37047833212;
    msg.start_lon = 0.594419471832;
    msg.start_z = 0.648085462973;
    msg.start_z_units = 19U;
    msg.end_lat = 0.0600405609149;
    msg.end_lon = 0.54695520277;
    msg.end_z = 0.70226331059;
    msg.end_z_units = 20U;
    msg.speed = 0.864433707009;
    msg.speed_units = 85U;
    msg.lradius = 0.746386898511;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.0677256736229);
    msg.setSource(57158U);
    msg.setSourceEntity(43U);
    msg.setDestination(32020U);
    msg.setDestinationEntity(238U);
    msg.start_lat = 0.507329431238;
    msg.start_lon = 0.152192425171;
    msg.start_z = 0.162617302915;
    msg.start_z_units = 237U;
    msg.end_lat = 0.813234325305;
    msg.end_lon = 0.342592000026;
    msg.end_z = 0.451877470246;
    msg.end_z_units = 143U;
    msg.speed = 0.0771654730829;
    msg.speed_units = 56U;
    msg.lradius = 0.577268820893;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.777492743423);
    msg.setSource(14067U);
    msg.setSourceEntity(211U);
    msg.setDestination(39590U);
    msg.setDestinationEntity(229U);
    msg.x = 0.815151752036;
    msg.y = 0.180994540523;
    msg.z = 0.0786587123557;
    msg.k = 0.0757684671146;
    msg.m = 0.309371971218;
    msg.n = 0.864210777856;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.78895137023);
    msg.setSource(31056U);
    msg.setSourceEntity(214U);
    msg.setDestination(53421U);
    msg.setDestinationEntity(59U);
    msg.x = 0.288020882324;
    msg.y = 0.437760789698;
    msg.z = 0.208425754541;
    msg.k = 0.211026630998;
    msg.m = 0.942458941906;
    msg.n = 0.745093292708;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.424246790106);
    msg.setSource(48703U);
    msg.setSourceEntity(58U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(83U);
    msg.x = 0.705741025583;
    msg.y = 0.363329652337;
    msg.z = 0.225050607065;
    msg.k = 0.939100557198;
    msg.m = 0.746803194756;
    msg.n = 0.133075505939;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.442269044327);
    msg.setSource(48335U);
    msg.setSourceEntity(251U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(128U);
    msg.value = 0.80283757229;

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
    msg.setTimeStamp(0.846081323224);
    msg.setSource(21505U);
    msg.setSourceEntity(0U);
    msg.setDestination(27661U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0109239219925;

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
    msg.setTimeStamp(0.628510169698);
    msg.setSource(29826U);
    msg.setSourceEntity(181U);
    msg.setDestination(13100U);
    msg.setDestinationEntity(161U);
    msg.value = 0.824877058919;

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
    msg.setTimeStamp(0.387883997164);
    msg.setSource(37946U);
    msg.setSourceEntity(90U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(64U);
    msg.u = 0.543103007174;
    msg.v = 0.176306266275;
    msg.w = 0.760442460266;
    msg.p = 0.15628181747;
    msg.q = 0.525770764964;
    msg.r = 0.885969631348;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.349302774845);
    msg.setSource(10216U);
    msg.setSourceEntity(225U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(9U);
    msg.u = 0.92908354551;
    msg.v = 0.228712051798;
    msg.w = 0.452519265517;
    msg.p = 0.581857243093;
    msg.q = 0.682956144589;
    msg.r = 0.967561734118;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.515712828835);
    msg.setSource(32842U);
    msg.setSourceEntity(67U);
    msg.setDestination(47835U);
    msg.setDestinationEntity(81U);
    msg.u = 0.455266919352;
    msg.v = 0.497082721028;
    msg.w = 0.925798130789;
    msg.p = 0.933616207417;
    msg.q = 0.442547571921;
    msg.r = 0.757335452157;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.000445336609495);
    msg.setSource(65298U);
    msg.setSourceEntity(169U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(57U);
    msg.start_lat = 0.358713227061;
    msg.start_lon = 0.319672366543;
    msg.start_z = 0.58683468377;
    msg.start_z_units = 213U;
    msg.end_lat = 0.475735970519;
    msg.end_lon = 0.563647101814;
    msg.end_z = 0.535507595263;
    msg.end_z_units = 98U;
    msg.lradius = 0.663449542118;
    msg.flags = 51U;
    msg.x = 0.386129615848;
    msg.y = 0.0775959523843;
    msg.z = 0.981680277375;
    msg.vx = 0.974850980267;
    msg.vy = 0.624501013547;
    msg.vz = 0.984486450946;
    msg.course_error = 0.626267921119;
    msg.eta = 22838U;

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
    msg.setTimeStamp(0.528660189774);
    msg.setSource(56640U);
    msg.setSourceEntity(57U);
    msg.setDestination(61465U);
    msg.setDestinationEntity(202U);
    msg.start_lat = 0.528046853375;
    msg.start_lon = 0.0764040606826;
    msg.start_z = 0.137406484417;
    msg.start_z_units = 76U;
    msg.end_lat = 0.0651026625538;
    msg.end_lon = 0.453232466401;
    msg.end_z = 0.555755215867;
    msg.end_z_units = 138U;
    msg.lradius = 0.236057963068;
    msg.flags = 0U;
    msg.x = 0.889160790818;
    msg.y = 0.477353612075;
    msg.z = 0.690967843619;
    msg.vx = 0.629945071389;
    msg.vy = 0.265183969891;
    msg.vz = 0.70891528482;
    msg.course_error = 0.848645108132;
    msg.eta = 52924U;

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
    msg.setTimeStamp(0.131554589639);
    msg.setSource(54001U);
    msg.setSourceEntity(204U);
    msg.setDestination(52222U);
    msg.setDestinationEntity(239U);
    msg.start_lat = 0.994517828021;
    msg.start_lon = 0.704616897766;
    msg.start_z = 0.83105964024;
    msg.start_z_units = 153U;
    msg.end_lat = 0.650846711321;
    msg.end_lon = 0.819583157915;
    msg.end_z = 0.507189655925;
    msg.end_z_units = 145U;
    msg.lradius = 0.967721614902;
    msg.flags = 15U;
    msg.x = 0.348520674665;
    msg.y = 0.023835119038;
    msg.z = 0.588288015926;
    msg.vx = 0.201991586416;
    msg.vy = 0.81350914199;
    msg.vz = 0.814805492794;
    msg.course_error = 0.326124855042;
    msg.eta = 24184U;

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
    msg.setTimeStamp(0.0409561950867);
    msg.setSource(64646U);
    msg.setSourceEntity(185U);
    msg.setDestination(59797U);
    msg.setDestinationEntity(109U);
    msg.k = 0.050068976405;
    msg.m = 0.870458750271;
    msg.n = 0.238362099274;

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
    msg.setTimeStamp(0.2153975113);
    msg.setSource(48685U);
    msg.setSourceEntity(18U);
    msg.setDestination(31208U);
    msg.setDestinationEntity(40U);
    msg.k = 0.605568384428;
    msg.m = 0.745267220909;
    msg.n = 0.10694137268;

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
    msg.setTimeStamp(0.228880844971);
    msg.setSource(37261U);
    msg.setSourceEntity(130U);
    msg.setDestination(36081U);
    msg.setDestinationEntity(111U);
    msg.k = 0.651057047427;
    msg.m = 0.0920936209116;
    msg.n = 0.443613822835;

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
    msg.setTimeStamp(0.380010018751);
    msg.setSource(42646U);
    msg.setSourceEntity(13U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(167U);
    msg.p = 0.389071026029;
    msg.i = 0.0934268512328;
    msg.d = 0.460441471357;
    msg.a = 0.702202295698;

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
    msg.setTimeStamp(0.837345882467);
    msg.setSource(37625U);
    msg.setSourceEntity(203U);
    msg.setDestination(8621U);
    msg.setDestinationEntity(0U);
    msg.p = 0.935469749495;
    msg.i = 0.460517568532;
    msg.d = 0.551588564734;
    msg.a = 0.828341867309;

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
    msg.setTimeStamp(0.898809931829);
    msg.setSource(50669U);
    msg.setSourceEntity(221U);
    msg.setDestination(30898U);
    msg.setDestinationEntity(199U);
    msg.p = 0.279604062342;
    msg.i = 0.803588049813;
    msg.d = 0.260433394675;
    msg.a = 0.266363909814;

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
    msg.setTimeStamp(0.981200246128);
    msg.setSource(39289U);
    msg.setSourceEntity(79U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(48U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.810824281498);
    msg.setSource(47981U);
    msg.setSourceEntity(227U);
    msg.setDestination(19628U);
    msg.setDestinationEntity(76U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.359134102519);
    msg.setSource(51798U);
    msg.setSourceEntity(201U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(64U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.351238719663);
    msg.setSource(53548U);
    msg.setSourceEntity(6U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(131U);
    msg.timeout = 27478U;
    msg.lat = 0.583615063967;
    msg.lon = 0.345465312963;
    msg.z = 0.10290755236;
    msg.z_units = 85U;
    msg.speed = 0.154695841643;
    msg.speed_units = 42U;
    msg.roll = 0.311249737845;
    msg.pitch = 0.798571154483;
    msg.yaw = 0.112636097844;
    msg.custom.assign("WCFDNUCVISJGAMHHIRRTCGJPJOFSKGLDX");

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
    msg.setTimeStamp(0.299262202991);
    msg.setSource(45576U);
    msg.setSourceEntity(149U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(57U);
    msg.timeout = 21539U;
    msg.lat = 0.746455361571;
    msg.lon = 0.00890350843226;
    msg.z = 0.550400558134;
    msg.z_units = 223U;
    msg.speed = 0.0901689859403;
    msg.speed_units = 239U;
    msg.roll = 0.103550834732;
    msg.pitch = 0.0886775313016;
    msg.yaw = 0.557116087151;
    msg.custom.assign("AYTRHUVQMLVHVWSFDJTUPJMULCVAVQYASJXYVKREGOHPBPRIZFJXFCOBPFOLJGXUJJGHVWTZWLQSZXNDERCKCIGSPREMELHXWAROZKQBAKYDZFPCHYXISTFMBKKELDBECSDHLNLGRUMYGLKYQNXEBCNPWSGWMDBAOWIBPCWBXXCCZSMGKQJEWTZQUDSTFTZNH");

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
    msg.setTimeStamp(0.216947544632);
    msg.setSource(16326U);
    msg.setSourceEntity(160U);
    msg.setDestination(64762U);
    msg.setDestinationEntity(94U);
    msg.timeout = 51255U;
    msg.lat = 0.161016021228;
    msg.lon = 0.330966260381;
    msg.z = 0.547629310538;
    msg.z_units = 238U;
    msg.speed = 0.852330234983;
    msg.speed_units = 187U;
    msg.roll = 0.320534399088;
    msg.pitch = 0.920937805202;
    msg.yaw = 0.123025688487;
    msg.custom.assign("XEHBAXMCXTSVOZLDKTYGAOCXOKFTGKXELUIVAJZJDKIOSLHFGTBWGUHEZHQTNEYGRNLRDQVDWSLRHUAKWQLBZIJCJFZWJIFTCIEPZNZLVZNYOTXKWAXENSJBISYDDCMBKELUJFKMIRRJBHSYFXDQOAWREXBYUYUFQOUVAKGOOHNPYZRPNCMMDWXAEGGCQQFERFCWQLQPHDRPTBDGSMHOITAILPFVSVY");

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
    msg.setTimeStamp(0.462214869265);
    msg.setSource(27641U);
    msg.setSourceEntity(1U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(152U);
    msg.timeout = 17245U;
    msg.lat = 0.389384082932;
    msg.lon = 0.916041597565;
    msg.z = 0.457348606849;
    msg.z_units = 250U;
    msg.speed = 0.447859594559;
    msg.speed_units = 82U;
    msg.duration = 61837U;
    msg.radius = 0.392522428585;
    msg.flags = 79U;
    msg.custom.assign("KVRSVJASBJUEWVMVQKBDZLADTRQBSZVCHMHILFDQNXUNIADNJTHCXRBGAMOIKYAYHJWSLVEOCWEDPUQOBROLZIYAHIGTYEOFCKBWOFTMGKZDMLZMNURELNISLLTPYPYQPWSPMNPDSAFPFGQSXSWAVGKDHJEWCJEABECGIWTMNUQYIUBNAQRBTXFTTGHIWKJCFXJOROXHBFHVXNKVXFITSW");

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
    msg.setTimeStamp(0.977280779066);
    msg.setSource(23206U);
    msg.setSourceEntity(19U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(241U);
    msg.timeout = 7696U;
    msg.lat = 0.890576953693;
    msg.lon = 0.467847635184;
    msg.z = 0.669225243484;
    msg.z_units = 28U;
    msg.speed = 0.100500455632;
    msg.speed_units = 107U;
    msg.duration = 37462U;
    msg.radius = 0.876705589515;
    msg.flags = 234U;
    msg.custom.assign("SLGQYQPRTWTSFLDEGTOBYONLFQBNQLUVCNAGLOGWWYKEXXFMSTYGSPQKYPZWEVIFTARCMLWQKUZBSXWSJRJGSXJZDFVPKFIHJPDEUBAHNMOSIVBZCZPUKGKRRIQMYDXHAIYDCOHMJIOIRBKZXANJWPUMNCIBUTZYEAVVOMWVAHENTAUYQGBDULUCVJHXLDXJWFONPNLWZEIXEKCFSTBEQAEYJXMRPRMFVBISRDGJGHKMOTRC");

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
    msg.setTimeStamp(0.794177989807);
    msg.setSource(58639U);
    msg.setSourceEntity(12U);
    msg.setDestination(40545U);
    msg.setDestinationEntity(130U);
    msg.timeout = 30567U;
    msg.lat = 0.97794772388;
    msg.lon = 0.382417554629;
    msg.z = 0.426352691717;
    msg.z_units = 8U;
    msg.speed = 0.98954152999;
    msg.speed_units = 250U;
    msg.duration = 37430U;
    msg.radius = 0.285915330588;
    msg.flags = 189U;
    msg.custom.assign("GRJIQBMKGWLSSHJKNSJEQUDIJLDRHNFGIDOHVHSTLCTOAGXASZYCAOMHMVSMCRLMCPWMXHONPZHGXSRVTRK");

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
    msg.setTimeStamp(0.947502483313);
    msg.setSource(45868U);
    msg.setSourceEntity(157U);
    msg.setDestination(58648U);
    msg.setDestinationEntity(43U);
    msg.custom.assign("VDHFAOBVUBGSVPJDUWHOIXZDUCLAQLGDFIBNDVUMZNCKMLPECIZNFYCXVKANKOQIFPWBKSIEVTXURRHBXVCCCHSAVFRUMIWFWVGOGATRIYKCWZXPYUDOSPOBAHSJEMTCKJKTDERLQVLMPNZDJPRAHSQJDAWSUZYRZXQFGMYTHM");

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
    msg.setTimeStamp(0.993870804481);
    msg.setSource(23799U);
    msg.setSourceEntity(232U);
    msg.setDestination(19600U);
    msg.setDestinationEntity(50U);
    msg.custom.assign("YCEXPWRLCQTYUZIQBHCTOFFJHWPNHIIITOIQGYRKPVSOSUUABMENMLJOGYDTOLRIUKJJFASNFDBWGUANZLZBVGHEYKRAZPLOXHZVYNPWNZRGCQVZMAJMEDPEKEHZRDKLVARJLJSXSLIFSFVCXQHMIXPWVMULWPBZAPKCFTXBBMSTCLXFKHQJDAWESGKORUJYTGFQSDCEDMHDMNWAEQVUYNISOCO");

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
    msg.setTimeStamp(0.665950698739);
    msg.setSource(48369U);
    msg.setSourceEntity(98U);
    msg.setDestination(47756U);
    msg.setDestinationEntity(35U);
    msg.custom.assign("VPGIQJKZUCIBUFWIGCLHRGWOWSIPNKQGPKOLPECXSXEVJWCDGMSLLMSGREZYWEDMRDXNHKVUFWSJIZQEVRNXSWPJRTDTNQTYRWFIGXKMXOQPUQBYYYHIVAKDOOJHLMTXKAFRQ");

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
    msg.setTimeStamp(0.342423159239);
    msg.setSource(1672U);
    msg.setSourceEntity(150U);
    msg.setDestination(35356U);
    msg.setDestinationEntity(87U);
    msg.timeout = 5472U;
    msg.lat = 0.529049848211;
    msg.lon = 0.598389148779;
    msg.z = 0.452784562646;
    msg.z_units = 201U;
    msg.duration = 51667U;
    msg.speed = 0.250065574264;
    msg.speed_units = 243U;
    msg.type = 144U;
    msg.radius = 0.770953192846;
    msg.length = 0.959632456589;
    msg.bearing = 0.887397550828;
    msg.direction = 162U;
    msg.custom.assign("IJBJKSJHKLQYLYSEXCBGBBEXSVQLTUIYWWVAOXECUQRD");

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
    msg.setTimeStamp(0.616762106829);
    msg.setSource(22890U);
    msg.setSourceEntity(44U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(8U);
    msg.timeout = 10U;
    msg.lat = 0.286970954121;
    msg.lon = 0.19312771892;
    msg.z = 0.592780698245;
    msg.z_units = 90U;
    msg.duration = 35768U;
    msg.speed = 0.856720295258;
    msg.speed_units = 111U;
    msg.type = 19U;
    msg.radius = 0.442629599903;
    msg.length = 0.830693938543;
    msg.bearing = 0.985474868491;
    msg.direction = 173U;
    msg.custom.assign("RIWHPVJAFNHKGTPRFODCETBRDOKWBQKCBRSBCXJIGUERXNZJQMJLIHGMVIIEFVAANLAYNVUOZUUQOTZHYULGILWOGXLWWSPBVKMWSLZMMCSNFKYHZCDCBFUXYKZYFQHXTYWAXIJCDOCBKQAGDVYOZQAYENGUBXDHPXMMDFINHJSHUXQFMGWR");

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
    msg.setTimeStamp(0.225132944668);
    msg.setSource(12516U);
    msg.setSourceEntity(215U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(246U);
    msg.timeout = 53062U;
    msg.lat = 0.786526392501;
    msg.lon = 0.353064540338;
    msg.z = 0.807700282672;
    msg.z_units = 146U;
    msg.duration = 45264U;
    msg.speed = 0.0759291838049;
    msg.speed_units = 140U;
    msg.type = 40U;
    msg.radius = 0.0628780440187;
    msg.length = 0.32647996211;
    msg.bearing = 0.321296289918;
    msg.direction = 217U;
    msg.custom.assign("BZSAXBEZIWCWLPNUTIQASKBZXGYHDIJDAMAAUKVHHGMSZJONSMWKMZWVKZULFSMWAAYKJMTPOUIZYJQEOFKNZECBCJBFLQJZBQIUZORGKTBGGGLCXEWVMRPPWWSSFXVYXOFHFHOFCDXNDDIOGCHCLWTBURYQBAELEYCNKVIORPQIRMTQIPYQRCOFHNNHXLTGYXPRDQTKKFVNNAVOUPIDUSEJPMRTSHYVLTUTCPBDWXERLMQUDFSHVGJEXJ");

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
    msg.setTimeStamp(0.0938919951309);
    msg.setSource(51229U);
    msg.setSourceEntity(184U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(112U);
    msg.duration = 56225U;
    msg.custom.assign("DCQPDCRFBQYLPFXOKYMTJMAGNJNCITZBWOPEUJASFPKXBMITHEEUXWUNRKKZXIMSBVGIYVUOCZRUMHMJWWYTJ");

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
    msg.setTimeStamp(0.970293740283);
    msg.setSource(44656U);
    msg.setSourceEntity(220U);
    msg.setDestination(24678U);
    msg.setDestinationEntity(166U);
    msg.duration = 17499U;
    msg.custom.assign("QHMKAPYLFZUZQKZYYZWOSDIJQXHSAMDWMEOFGIITDBHIPSAAPFEXOCCXKGMHWNQSKXY");

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
    msg.setTimeStamp(0.0286204723683);
    msg.setSource(16488U);
    msg.setSourceEntity(225U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(64U);
    msg.duration = 65179U;
    msg.custom.assign("PWDKOUABHCEFVKFUJJCGTPESXNNWBNZADBQGBXQFUOMQPYHAYGRHNUXMKNBERHET");

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
    msg.setTimeStamp(0.971423086916);
    msg.setSource(47077U);
    msg.setSourceEntity(23U);
    msg.setDestination(41154U);
    msg.setDestinationEntity(169U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.867161845898;
    tmp_msg_0.start_lon = 0.532633698513;
    tmp_msg_0.start_z = 0.2337648743;
    tmp_msg_0.start_z_units = 21U;
    tmp_msg_0.end_lat = 0.482529004068;
    tmp_msg_0.end_lon = 0.528094724154;
    tmp_msg_0.end_z = 0.17197689895;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.speed = 0.0726330474745;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.lradius = 0.481726649632;
    tmp_msg_0.flags = 71U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12767U;
    msg.custom.assign("HZBZOKDZKAVAILGZHDCDBVMPMMYXNXTECNFEYCBJTPUEWDBWPX");

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
    msg.setTimeStamp(0.60149278789);
    msg.setSource(26386U);
    msg.setSourceEntity(139U);
    msg.setDestination(48297U);
    msg.setDestinationEntity(32U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.851961585148;
    msg.control.set(tmp_msg_0);
    msg.duration = 57999U;
    msg.custom.assign("VHKLJZRLGJJAWXZAQHNGVPBMLUIUHSAQGBBVGKIQIBPYIPPKQKTXSCFIQRWFAUOYHXNLJFMQEASXGKLXNNTRNGWUCDPSZDYWACZQQEDFYTHCOVKCLYDCKIBJECHOLAMWTWRZUSEURHRHPVNGQSJHCXLYINENKQRGXSJEDMFFNMWCDFRBLBBXEXMWAUOKPYKTSW");

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
    msg.setTimeStamp(0.45267029691);
    msg.setSource(43729U);
    msg.setSourceEntity(199U);
    msg.setDestination(40999U);
    msg.setDestinationEntity(67U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.727433502863;
    msg.control.set(tmp_msg_0);
    msg.duration = 40397U;
    msg.custom.assign("HBMXFOCAVQYTZWCPHUGMPIEGSDVBWTAQPOWOICEMLFXZHCUBKBBCFPLFSPNOFDNOFQZHJCLISUSGGCJOJVSJGWYSMXTXIBSJKIMQGAQEKIEBNQJAUFIXNQAWNJRYDJYDONBEZTXHGBVWNRRLHAEFMUDLRQTLDDWRVVHPFLPOTAUSXDCTWHXMPLRZZTWURZRDEPKXKVIVBKSQAYMAXUARVUIIVFNOYKKYP");

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
    msg.setTimeStamp(0.65605999717);
    msg.setSource(36751U);
    msg.setSourceEntity(174U);
    msg.setDestination(35199U);
    msg.setDestinationEntity(27U);
    msg.timeout = 47701U;
    msg.lat = 0.225708821975;
    msg.lon = 0.69519073173;
    msg.z = 0.852453226905;
    msg.z_units = 190U;
    msg.speed = 0.923097436925;
    msg.speed_units = 73U;
    msg.bearing = 0.581385629026;
    msg.cross_angle = 0.713586828738;
    msg.width = 0.784544504277;
    msg.length = 0.303448091744;
    msg.hstep = 0.699368679941;
    msg.coff = 21U;
    msg.alternation = 66U;
    msg.flags = 67U;
    msg.custom.assign("TUPBOHFGMIPQRIDOAILEZDGNTPSHADHSBEZPNUIMRRYFHXEWZJXSEPZYPXYNNNVBORBNCNPSEYDVFTRWEDYQNLGGVWQKLLTSJUZTRZSWBKUKCPYHYUKGTPLIKXGWCQXCZBQIOXVKOCZJRJLUOLZNFLAXQUSWCUEPBCJSLGIRMDA");

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
    msg.setTimeStamp(0.618295410899);
    msg.setSource(5334U);
    msg.setSourceEntity(192U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(64U);
    msg.timeout = 54528U;
    msg.lat = 0.617563777057;
    msg.lon = 0.603400598527;
    msg.z = 0.091468438049;
    msg.z_units = 108U;
    msg.speed = 0.586880651188;
    msg.speed_units = 7U;
    msg.bearing = 0.31685275718;
    msg.cross_angle = 0.795037749275;
    msg.width = 0.851298864748;
    msg.length = 0.53932684172;
    msg.hstep = 0.789983555433;
    msg.coff = 115U;
    msg.alternation = 229U;
    msg.flags = 149U;
    msg.custom.assign("QPTPCOYZXSRPLQKTREAQYERGSEDYZZLRBCPGZGWUXCSVMIYLWARJNYZLGFGOLNHRFISEDKQHKZFNVNJQPPMFACAJJUXIWMWPYFYQOCWTVIVA");

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
    msg.setTimeStamp(0.831653213988);
    msg.setSource(1098U);
    msg.setSourceEntity(254U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(91U);
    msg.timeout = 8675U;
    msg.lat = 0.44195199671;
    msg.lon = 0.779140701705;
    msg.z = 0.290262150302;
    msg.z_units = 239U;
    msg.speed = 0.359314073646;
    msg.speed_units = 15U;
    msg.bearing = 0.591387890332;
    msg.cross_angle = 0.816452548802;
    msg.width = 0.491807607036;
    msg.length = 0.74644334804;
    msg.hstep = 0.621916677394;
    msg.coff = 123U;
    msg.alternation = 183U;
    msg.flags = 244U;
    msg.custom.assign("TCNXJRDCNRHDJVSZFRVPIFDALNTKWLGXCOIACKQREXSBJJXALJUFCJAIHOQGRIAOVPWZODWQRQKNDTVTKEUGQMZQDUQBNEHSNOLLFMXPVKUUSLFHIMOGPTEPEQYMOEEIANCLYBYWYTMTKBRVBKZAFABVHIIYGQPXNFASURI");

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
    msg.setTimeStamp(0.913550757808);
    msg.setSource(32590U);
    msg.setSourceEntity(146U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(83U);
    msg.timeout = 5079U;
    msg.lat = 0.654932074282;
    msg.lon = 0.531657614012;
    msg.z = 0.13221202606;
    msg.z_units = 51U;
    msg.speed = 0.574766261257;
    msg.speed_units = 92U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.872200873757;
    tmp_msg_0.y = 0.289167185555;
    tmp_msg_0.z = 0.459725999576;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WEOLMADVQGHIUYZLGHUZPJNLDPRLPAUYTSHMEWATQVNMCYRDDWGWTYRGZZBDXKO");

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
    msg.setTimeStamp(0.720706046257);
    msg.setSource(26632U);
    msg.setSourceEntity(216U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(191U);
    msg.timeout = 34188U;
    msg.lat = 0.881374685314;
    msg.lon = 0.765602306514;
    msg.z = 0.566296905248;
    msg.z_units = 241U;
    msg.speed = 0.898201391822;
    msg.speed_units = 18U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.948765938251;
    tmp_msg_0.y = 0.849577679893;
    tmp_msg_0.z = 0.661141647106;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UXCMYMXGAQEJEHZPQTZWVBDDBGGNQNORYLUGCMTDHODSDXKOEHZABBAGIOMMRDSBATQKUTVZAERQXZVCEWHJCYWOCANLQGXNVCJXLTBIPYSILSHMRRUJMSUPWVCNUDYKRDVQWVUXIKSRQXMTOYTINTGOTHHBHZZYFBJFUJFPOGNXWYOVMFAJPTBIFSNBAFJUIRKEYHYSQFFUKMPRIKPIZOPLWEWDRLF");

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
    msg.setTimeStamp(0.616073859252);
    msg.setSource(3727U);
    msg.setSourceEntity(215U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(240U);
    msg.timeout = 35182U;
    msg.lat = 0.647084673361;
    msg.lon = 0.488222637416;
    msg.z = 0.672754807572;
    msg.z_units = 26U;
    msg.speed = 0.0497507365665;
    msg.speed_units = 162U;
    msg.custom.assign("OEQWOMUEWCHVJCJTHPGAWRQFTOKSJTZOODPKHVLSNKBYGIPRMUTCAOCAVBYRPKZAAIIVHEXNLDBQAFEOHPVMYZIBRXGPVLOMZSSDYROVHXQDKTDYQXXJRLNNEJJVZZSGQDEJZVSLKGTKHUWUIFQLLJYUEWFFHTAWCEDNXTUXUQXKMKGBXENXWSFAHISIPNALUGLRTVB");

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
    msg.setTimeStamp(0.324640530156);
    msg.setSource(24029U);
    msg.setSourceEntity(49U);
    msg.setDestination(48721U);
    msg.setDestinationEntity(27U);
    msg.x = 0.74918620702;
    msg.y = 0.143578952188;
    msg.z = 0.816062967856;

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
    msg.setTimeStamp(0.700061910292);
    msg.setSource(42108U);
    msg.setSourceEntity(93U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(5U);
    msg.x = 0.882799519457;
    msg.y = 0.0534910740663;
    msg.z = 0.43232713745;

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
    msg.setTimeStamp(0.964270610733);
    msg.setSource(52977U);
    msg.setSourceEntity(187U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(139U);
    msg.x = 0.585504847385;
    msg.y = 0.317841385636;
    msg.z = 0.255691919105;

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
    msg.setTimeStamp(0.373356343735);
    msg.setSource(8134U);
    msg.setSourceEntity(131U);
    msg.setDestination(50958U);
    msg.setDestinationEntity(217U);
    msg.timeout = 54864U;
    msg.lat = 0.0480846562542;
    msg.lon = 0.977900581991;
    msg.z = 0.995261591889;
    msg.z_units = 163U;
    msg.amplitude = 0.677946877705;
    msg.pitch = 0.815835008719;
    msg.speed = 0.255746730275;
    msg.speed_units = 104U;
    msg.custom.assign("YBQLLORAWDHTOVOYYSRCWCBPEFDUDRWWAMKPZWGXACHUWTLHMLSYUPMSVONNGNRTOZGTPDVYKRKWVFSNFZKENZIINDIXJMJVAFPHJKSCMLTDUHHPQGPQCUNYLUEOVZPYIJXBOVDABXCJQOUHWLJRKYCIDFRMQVLKTIQQRHCNBJCDFZWKHGGMZKAMTGYFXESAEFTMVMXDLZXSANUAQBB");

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
    msg.setTimeStamp(0.192049589299);
    msg.setSource(50049U);
    msg.setSourceEntity(100U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(70U);
    msg.timeout = 44948U;
    msg.lat = 0.909193861424;
    msg.lon = 0.152088578573;
    msg.z = 0.0521501444054;
    msg.z_units = 207U;
    msg.amplitude = 0.626845578781;
    msg.pitch = 0.108419774219;
    msg.speed = 0.921304945649;
    msg.speed_units = 106U;
    msg.custom.assign("SAXKYHHNBGAHWTITJVBYEFWDESUITJGRNEEKLHIDRJSEPPWTMDQAQWFUXPPMHIBQPDEEFBZDKGQMGFQOXZQVOSRWMOKZXFUZZSXSOKELWLSOGILGRUTROBMKSIPQZXFVHFGYZVZNHNCVYHJPAKMYCGHYMTVLEUXCNMOQ");

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
    msg.setTimeStamp(0.0924142851773);
    msg.setSource(630U);
    msg.setSourceEntity(195U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(22U);
    msg.timeout = 53179U;
    msg.lat = 0.872690175734;
    msg.lon = 0.829382165951;
    msg.z = 0.242121447035;
    msg.z_units = 40U;
    msg.amplitude = 0.266946325871;
    msg.pitch = 0.0349921391788;
    msg.speed = 0.0594383737111;
    msg.speed_units = 211U;
    msg.custom.assign("OIYTOXVSMKXARYUHQTPLGESFJUVSZAPFHMRBFEQPQFUQVDWJLSYLVECQMXSGVECCNIGFHWONGYLMFGJJYTNFEIONIAHXAHRWUOQQEJGXLBYQMUSBXBGXFVIWBNJZWZBBDJBITCOEKCW");

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
    msg.setTimeStamp(0.765191270123);
    msg.setSource(45464U);
    msg.setSourceEntity(79U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.0885619480742);
    msg.setSource(19243U);
    msg.setSourceEntity(165U);
    msg.setDestination(61539U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.953631712991);
    msg.setSource(30580U);
    msg.setSourceEntity(206U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.254959256873);
    msg.setSource(2725U);
    msg.setSourceEntity(240U);
    msg.setDestination(828U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.4261271693;
    msg.lon = 0.374616312679;
    msg.z = 0.499691627388;
    msg.z_units = 241U;
    msg.radius = 0.698477728673;
    msg.duration = 61584U;
    msg.speed = 0.776721814264;
    msg.speed_units = 253U;
    msg.custom.assign("BPIFCCHJOKCXFNXSQDLSDHFLTXHOEATVMQCRJIUADZPXYKEDNKWONPISUEAXJOZSNVHYRYIBSVZUZCYVBUOEVRVMGELPIFLPATAFWLOVQIHEGWQTREWDVTGWOZAYHSKHGPGDFHRHJXCEJQSZGMKBFVSGRD");

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
    msg.setTimeStamp(0.79985999376);
    msg.setSource(21993U);
    msg.setSourceEntity(226U);
    msg.setDestination(6383U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.840209711997;
    msg.lon = 0.724682680298;
    msg.z = 0.00642324480151;
    msg.z_units = 8U;
    msg.radius = 0.770626527682;
    msg.duration = 42576U;
    msg.speed = 0.773967116136;
    msg.speed_units = 48U;
    msg.custom.assign("VFAQRLRAZJEHZFSYJZXXWBABTJKPNEYSGNZUGQPLHWIHOLJZGOWCYPDSDTFQICEIFKZOAKBZWXKQWUOTKDDTIRXUUJYCRPRTVDJGWQSZOBCQZFBNNHJGCYMSILPOEEMKXFVSRVDVANGTIZTUEHGLIHXAM");

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
    msg.setTimeStamp(0.197018219643);
    msg.setSource(20624U);
    msg.setSourceEntity(250U);
    msg.setDestination(60691U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.720915860312;
    msg.lon = 0.0534530247202;
    msg.z = 0.458237766153;
    msg.z_units = 83U;
    msg.radius = 0.711503572164;
    msg.duration = 44161U;
    msg.speed = 0.830022488445;
    msg.speed_units = 4U;
    msg.custom.assign("MEACBUFSJAOONWOGZMVOTCXERAUQJIJ");

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
    msg.setTimeStamp(0.609956851124);
    msg.setSource(1482U);
    msg.setSourceEntity(166U);
    msg.setDestination(50056U);
    msg.setDestinationEntity(117U);
    msg.timeout = 43357U;
    msg.flags = 210U;
    msg.lat = 0.23979495107;
    msg.lon = 0.462289913792;
    msg.start_z = 0.233209732687;
    msg.start_z_units = 214U;
    msg.end_z = 0.290605328947;
    msg.end_z_units = 44U;
    msg.radius = 0.199605290044;
    msg.speed = 0.831315437021;
    msg.speed_units = 91U;
    msg.custom.assign("PECLHKEVFZTGGYBNSQCAVQDJTVTVMPJSIKKLYMIMXABUQGANAFYJOPJHGACUNKANPFSRRSXAKRGFPBEGZOQMQOQXKRHDEUNXBCHOOFSJWFPODWTNDUVAHCSZTLPDDEKTOWRUVERHZHMBDAIPBZQLBWMYUKGYNXTKMCIFSIZSVZWQHIJIVELBTZSWWVDMAUCCXNYLOOUZ");

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
    msg.setTimeStamp(0.425079190052);
    msg.setSource(31319U);
    msg.setSourceEntity(141U);
    msg.setDestination(57126U);
    msg.setDestinationEntity(136U);
    msg.timeout = 46785U;
    msg.flags = 177U;
    msg.lat = 0.902075337052;
    msg.lon = 0.248284256858;
    msg.start_z = 0.0273536496406;
    msg.start_z_units = 10U;
    msg.end_z = 0.501979549782;
    msg.end_z_units = 187U;
    msg.radius = 0.985674948071;
    msg.speed = 0.417999819271;
    msg.speed_units = 113U;
    msg.custom.assign("PUBKHIGVZLMYRUOXZ");

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
    msg.setTimeStamp(0.157633395623);
    msg.setSource(1083U);
    msg.setSourceEntity(33U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(77U);
    msg.timeout = 48938U;
    msg.flags = 178U;
    msg.lat = 0.60136565297;
    msg.lon = 0.930387685703;
    msg.start_z = 0.039980998262;
    msg.start_z_units = 45U;
    msg.end_z = 0.581097396416;
    msg.end_z_units = 107U;
    msg.radius = 0.750880755733;
    msg.speed = 0.467159323695;
    msg.speed_units = 127U;
    msg.custom.assign("TJQHEEIQWNQHVYAAJZYDJVNQTBWYMSALOOJYFCFPELLRISIXVWOHQOFUMWIGSRRKKDUXNOMXASFCKNDCLGFNODTOPLUKMASNZOUYKXSVKOJRCDAFYZIBDABMLPGYHSEUAEVRTUMSZDBLXWEMMGFLDXCBJQMNGWRKPTHQVRYKPECHIYVJZLQBNWCQBWVUZAEJYZPCXOMPHJRNTDWBWHQEHFXVUD");

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
    msg.setTimeStamp(0.188177285378);
    msg.setSource(36589U);
    msg.setSourceEntity(3U);
    msg.setDestination(37970U);
    msg.setDestinationEntity(179U);
    msg.timeout = 42321U;
    msg.lat = 0.415579814065;
    msg.lon = 0.126769265577;
    msg.z = 0.132211074386;
    msg.z_units = 115U;
    msg.speed = 0.580664403008;
    msg.speed_units = 34U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.127222656319;
    tmp_msg_0.y = 0.282111416523;
    tmp_msg_0.z = 0.656239290395;
    tmp_msg_0.t = 0.257059181596;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PVVXRANBAWHGYLYOJLNNFIUJKLTOSJCFTKBFTWGTHMPHCXEXZJHCLWDJVPIBDRRLEEUIPIYDHSCIUGXNKSGUSEEXHYRWKQZARRSQVECZVAWGQNGVMWOJINABSCPZXVTMBCJDMUXDFKHUUMZLBPNYNDLHOGYOYZTQOFVIAQYIUODMZHZURFQFYSZ");

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
    msg.setTimeStamp(0.710187819568);
    msg.setSource(43003U);
    msg.setSourceEntity(152U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(146U);
    msg.timeout = 39700U;
    msg.lat = 0.914452146787;
    msg.lon = 0.727839482947;
    msg.z = 0.321728701769;
    msg.z_units = 35U;
    msg.speed = 0.11742746745;
    msg.speed_units = 36U;
    msg.custom.assign("ZPLYAMLHRCOYWGUAWJFNVZFLHKETPLNQASGMEFUTBMI");

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
    msg.setTimeStamp(0.467914755794);
    msg.setSource(10727U);
    msg.setSourceEntity(119U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(7U);
    msg.timeout = 50478U;
    msg.lat = 0.0200988935351;
    msg.lon = 0.994908894389;
    msg.z = 0.449748605023;
    msg.z_units = 221U;
    msg.speed = 0.168353181209;
    msg.speed_units = 102U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.997904246578;
    tmp_msg_0.y = 0.317388294055;
    tmp_msg_0.z = 0.0213572341837;
    tmp_msg_0.t = 0.175933390726;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MSWPFSVWVJPSZDQYODFPXODNXXIMPPIMYACLYOIQAWSCDJIIR");

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
    msg.setTimeStamp(0.131915767637);
    msg.setSource(32528U);
    msg.setSourceEntity(198U);
    msg.setDestination(62704U);
    msg.setDestinationEntity(165U);
    msg.x = 0.204200544041;
    msg.y = 0.421163852138;
    msg.z = 0.178256917635;
    msg.t = 0.682902671583;

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
    msg.setTimeStamp(0.0663834427828);
    msg.setSource(52640U);
    msg.setSourceEntity(201U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(110U);
    msg.x = 0.422921153483;
    msg.y = 0.839758264967;
    msg.z = 0.670957938855;
    msg.t = 0.733453733299;

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
    msg.setTimeStamp(0.612964953185);
    msg.setSource(23251U);
    msg.setSourceEntity(191U);
    msg.setDestination(34090U);
    msg.setDestinationEntity(215U);
    msg.x = 0.841842294345;
    msg.y = 0.886677863789;
    msg.z = 0.657516726847;
    msg.t = 0.930328415968;

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
    msg.setTimeStamp(0.594719544925);
    msg.setSource(25004U);
    msg.setSourceEntity(58U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(193U);
    msg.timeout = 50222U;
    msg.name.assign("WYRFGUTJBDUWXWOZNUGFYODRMAPNQZFZLSQXBEDYOLPTJXQUMEPNSMCXNTQESMVIEYJZGVEVDJSGOYDTEBZ");
    msg.custom.assign("THWUWNWGKEYQXBERVVMMYTSBWJXSRBQHTKIQDFIIEPZWFQFHAHVVA");

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
    msg.setTimeStamp(0.83273434087);
    msg.setSource(5989U);
    msg.setSourceEntity(137U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(189U);
    msg.timeout = 47772U;
    msg.name.assign("APICAGDMLKPXBFRPHOCCWYIBTPFTCOWDXVEHLYPWWZQVNSDZMXKUGTJDRNEJJQOLHFUGCMTQUNEOMVNQYWIJNAVHCRTBKOWKWAMZV");
    msg.custom.assign("ZQYVYTGEXNQLVDLQOUWRYWCZTKPGCBYWLJOTUHRIUHDCFKTNSDLJNGPFVIWBLPTVVRJNSTGFLFNDSULIJVRAPMWXNKFHESEHWQDRCAVAUPRTKCMSXHJCFAZBSNPDNTUCHFV");

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
    msg.setTimeStamp(0.0923959770741);
    msg.setSource(43388U);
    msg.setSourceEntity(152U);
    msg.setDestination(43712U);
    msg.setDestinationEntity(170U);
    msg.timeout = 52947U;
    msg.name.assign("UNVCPYJWBICGZFRKQABPWHETYXUDYZDIUHDQXCFSDHHYMDQIERNIUUBZLSCVVZPWWUNYODRZTNWQBTDKMDCGLMXVMKRAIVFEFNQRNTHAKYJDLVJHPMIOGGAJSFKNNKULVJMFXJOPLLEHSUJXMBA");
    msg.custom.assign("KYEHYKBOWEKPRDNSEYZLTBYVABYJBDLLCFBZKZVUUZMJPWFKVCTRQSDDIRUTPIXATBXQROYVCMQWMGBQRXSGISUODHAEKDJGJFUJMUALFNNVMPPOLJNPTDHSICWKIULEZZVNSICONNTROMJOCGFLREWYRPVKPAHEQIVLEFQCGXOEJBWHBYMXNZMCQXNHYREZFO");

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
    msg.setTimeStamp(0.309159234184);
    msg.setSource(8683U);
    msg.setSourceEntity(59U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.621930375911;
    msg.lon = 0.443345182549;
    msg.z = 0.93468184814;
    msg.z_units = 200U;
    msg.speed = 0.422665642562;
    msg.speed_units = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17313U;
    tmp_msg_0.off_x = 0.462847067865;
    tmp_msg_0.off_y = 0.709904768109;
    tmp_msg_0.off_z = 0.650244297149;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.471376078849;
    msg.custom.assign("FEDMVAEQGIJQYYUVYJNKXDXXJCTICCKZBTBPZMFOLORHTIOEAOFQXWSRIKPLPZJPAGPEUORXDMHPFZTIHUHZQDYNOMGSQLLKXJCCATGHONWHQRGJGFJDOQUPYWGCVSESVNRWLGJYYFZOZYACXDERJHFMKQNLUGXTOLVZSIXRKFDJMAE");

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
    msg.setTimeStamp(0.586714360694);
    msg.setSource(50619U);
    msg.setSourceEntity(148U);
    msg.setDestination(30294U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.232310674281;
    msg.lon = 0.21144202042;
    msg.z = 0.128544386998;
    msg.z_units = 154U;
    msg.speed = 0.163701393966;
    msg.speed_units = 157U;
    msg.start_time = 0.930144199789;
    msg.custom.assign("ABKZQMVRBTXTVYFNQYSUDAIZRADSFQSIEBLMCYZWXUFFRVLPILNAIQLJOJETCB");

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
    msg.setTimeStamp(0.0794918981226);
    msg.setSource(31621U);
    msg.setSourceEntity(85U);
    msg.setDestination(5796U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.00626898107546;
    msg.lon = 0.847265278067;
    msg.z = 0.00321610691824;
    msg.z_units = 149U;
    msg.speed = 0.92524146642;
    msg.speed_units = 86U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.880536064665;
    tmp_msg_0.y = 0.412456613437;
    tmp_msg_0.z = 0.303232486309;
    tmp_msg_0.t = 0.300985457986;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.476458883742;
    msg.custom.assign("DMSRKKURXSCZWWVCNIAZAOSVMDRZLPYXEGWHTOZASJFEWSADJIFTDXJTFOFIWAUYBMXTEKQXYFPDHCKEQUSATUSZZNIBJISJTHUBYWYPNVOBZTZVIHBHFLKFLBPUIPBKAARHJJOHMRSZNMOXFLKXNVIUGVGZJEQFRKKEGYXRCGRLOWMHQWVRWYDDGOGUCCVQO");

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
    msg.setTimeStamp(0.699531503901);
    msg.setSource(65436U);
    msg.setSourceEntity(66U);
    msg.setDestination(2841U);
    msg.setDestinationEntity(232U);
    msg.vid = 32460U;
    msg.off_x = 0.888499754952;
    msg.off_y = 0.168994239926;
    msg.off_z = 0.723597367603;

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
    msg.setTimeStamp(0.692486494137);
    msg.setSource(36879U);
    msg.setSourceEntity(113U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(110U);
    msg.vid = 56539U;
    msg.off_x = 0.470016850869;
    msg.off_y = 0.22914283132;
    msg.off_z = 0.728265098003;

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
    msg.setTimeStamp(0.698160184266);
    msg.setSource(9246U);
    msg.setSourceEntity(49U);
    msg.setDestination(11482U);
    msg.setDestinationEntity(92U);
    msg.vid = 47713U;
    msg.off_x = 0.716037300316;
    msg.off_y = 0.677249902246;
    msg.off_z = 0.0573115174582;

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
    msg.setTimeStamp(0.709702938997);
    msg.setSource(41814U);
    msg.setSourceEntity(50U);
    msg.setDestination(34558U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.666286340064);
    msg.setSource(21003U);
    msg.setSourceEntity(44U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.712395699972);
    msg.setSource(53493U);
    msg.setSourceEntity(44U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.153001170331);
    msg.setSource(6248U);
    msg.setSourceEntity(41U);
    msg.setDestination(48806U);
    msg.setDestinationEntity(117U);
    msg.mid = 16118U;

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
    msg.setTimeStamp(0.564436411874);
    msg.setSource(46093U);
    msg.setSourceEntity(31U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(11U);
    msg.mid = 58124U;

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
    msg.setTimeStamp(0.139036427736);
    msg.setSource(19010U);
    msg.setSourceEntity(57U);
    msg.setDestination(44001U);
    msg.setDestinationEntity(113U);
    msg.mid = 31408U;

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
    msg.setTimeStamp(0.383092727768);
    msg.setSource(44137U);
    msg.setSourceEntity(59U);
    msg.setDestination(36656U);
    msg.setDestinationEntity(143U);
    msg.state = 243U;
    msg.eta = 49926U;
    msg.info.assign("WLRAJAWGNIHRPCMMXSVPUBPZVARZWTENTZPAMDGCDFDYOQZPBFLBYOHQUYISUSNHXFLPQVITASNCXEFTSDQDMDGO");

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
    msg.setTimeStamp(0.407194078539);
    msg.setSource(24258U);
    msg.setSourceEntity(89U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(61U);
    msg.state = 114U;
    msg.eta = 5716U;
    msg.info.assign("AXZETZTPYMRWQNYMLOHTBVFUPSJAFNVXAFHWJKONFLFRCIQMMDCYSNWLQAOTZHOYEEWGGIHXIXBMFMIIYQZQULSRCKVUFURECWCEOSEDUGBCYLPMBWHGUWGDTSRINLQUWUDCOKPLZVSVI");

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
    msg.setTimeStamp(0.866423738688);
    msg.setSource(24551U);
    msg.setSourceEntity(66U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(198U);
    msg.state = 178U;
    msg.eta = 63870U;
    msg.info.assign("LBMLKRAUSVLAQZVCIAIOZDXZDIAUGDCGJEFQJPPLWCEOFLGKVLKOHMPFCAHFWXJTDOEVQDGKCHVKYSTYVZWTXBRMUDITTTQRXJGRNXJBBWWMPWNUZPRXPFJCGNSKETL");

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
    msg.setTimeStamp(0.276377071971);
    msg.setSource(31599U);
    msg.setSourceEntity(118U);
    msg.setDestination(47259U);
    msg.setDestinationEntity(5U);
    msg.system = 51494U;
    msg.duration = 11158U;
    msg.speed = 0.391655149279;
    msg.speed_units = 149U;
    msg.x = 0.787630684929;
    msg.y = 0.460269895491;
    msg.z = 0.447162284552;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.27382154329);
    msg.setSource(30578U);
    msg.setSourceEntity(92U);
    msg.setDestination(16458U);
    msg.setDestinationEntity(119U);
    msg.system = 53801U;
    msg.duration = 345U;
    msg.speed = 0.477924845964;
    msg.speed_units = 115U;
    msg.x = 0.560030751071;
    msg.y = 0.513265954764;
    msg.z = 0.742775909084;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.646606166604);
    msg.setSource(35274U);
    msg.setSourceEntity(14U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(176U);
    msg.system = 9005U;
    msg.duration = 26503U;
    msg.speed = 0.0990427244239;
    msg.speed_units = 210U;
    msg.x = 0.478398804255;
    msg.y = 0.0976803424889;
    msg.z = 0.454473697507;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.414559398669);
    msg.setSource(4481U);
    msg.setSourceEntity(153U);
    msg.setDestination(25346U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.824740698484;
    msg.lon = 0.37009855266;
    msg.speed = 0.272221474357;
    msg.speed_units = 87U;
    msg.duration = 50614U;
    msg.sys_a = 58092U;
    msg.sys_b = 19509U;
    msg.move_threshold = 0.865172363434;

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
    msg.setTimeStamp(0.423106561338);
    msg.setSource(41313U);
    msg.setSourceEntity(231U);
    msg.setDestination(9415U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.864766537209;
    msg.lon = 0.609604323338;
    msg.speed = 0.811752890115;
    msg.speed_units = 246U;
    msg.duration = 46022U;
    msg.sys_a = 7711U;
    msg.sys_b = 45996U;
    msg.move_threshold = 0.344665083468;

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
    msg.setTimeStamp(0.00452434739857);
    msg.setSource(6354U);
    msg.setSourceEntity(143U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.969044982736;
    msg.lon = 0.301726303983;
    msg.speed = 0.158198729896;
    msg.speed_units = 67U;
    msg.duration = 43656U;
    msg.sys_a = 23335U;
    msg.sys_b = 24843U;
    msg.move_threshold = 0.983771439845;

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
    msg.setTimeStamp(0.878048061555);
    msg.setSource(58019U);
    msg.setSourceEntity(158U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.482213756923;
    msg.lon = 0.939169563944;
    msg.z = 0.0770930201148;
    msg.z_units = 99U;
    msg.speed = 0.885813737612;
    msg.speed_units = 181U;
    msg.custom.assign("MPZWALSNFIRSPCUGQZPIXSDUJNWHZIOKJKRYKBXEAXVAHULLSCXEDBFSBTIMIZHSY");

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
    msg.setTimeStamp(0.418748677158);
    msg.setSource(18485U);
    msg.setSourceEntity(24U);
    msg.setDestination(9904U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.207110014321;
    msg.lon = 0.308558686579;
    msg.z = 0.225096106696;
    msg.z_units = 125U;
    msg.speed = 0.103900703793;
    msg.speed_units = 188U;
    msg.custom.assign("VKFZUIZEYCYDJRLDGKAJURY");

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
    msg.setTimeStamp(0.218705835271);
    msg.setSource(35453U);
    msg.setSourceEntity(125U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.74411331192;
    msg.lon = 0.722163922366;
    msg.z = 0.104853718948;
    msg.z_units = 235U;
    msg.speed = 0.866210138151;
    msg.speed_units = 153U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.227023151744;
    tmp_msg_0.lon = 0.647744702202;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RKJSEOMBAWTSSISRQMLPLVVXVXPYHAALSBPGKJHELMNHZDAWRYXWTPAGWGOMPJPIMKCUEMAYFRKNIIJNJNBFITETKHZUZKANWXXHLIFQGHMBCNCAEG");

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
    msg.setTimeStamp(0.59563085318);
    msg.setSource(39788U);
    msg.setSourceEntity(22U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.414182053688;
    msg.lon = 0.682276661036;

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
    msg.setTimeStamp(0.114865235297);
    msg.setSource(1084U);
    msg.setSourceEntity(54U);
    msg.setDestination(40083U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.41513922683;
    msg.lon = 0.772560171284;

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
    msg.setTimeStamp(0.126017572469);
    msg.setSource(15646U);
    msg.setSourceEntity(56U);
    msg.setDestination(44799U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.666448709353;
    msg.lon = 0.737691045177;

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
    msg.setTimeStamp(0.587870837955);
    msg.setSource(50784U);
    msg.setSourceEntity(219U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(142U);
    msg.timeout = 28868U;
    msg.lat = 0.127087761113;
    msg.lon = 0.99503759017;
    msg.z = 0.527840608605;
    msg.z_units = 218U;
    msg.pitch = 0.518933047625;
    msg.amplitude = 0.438275537058;
    msg.duration = 31121U;
    msg.speed = 0.320296996246;
    msg.speed_units = 72U;
    msg.radius = 0.566449344073;
    msg.direction = 79U;
    msg.custom.assign("DUTWADNOJECVHXGQKHIKAOYSMDRLEGPFJDFAJGWZEZIOOWVSBFTXXXNJTPYNVDABOGUZEWJFMTC");

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
    msg.setTimeStamp(0.727725807529);
    msg.setSource(20744U);
    msg.setSourceEntity(54U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(37U);
    msg.timeout = 4493U;
    msg.lat = 0.108787303412;
    msg.lon = 0.578783499375;
    msg.z = 0.963975097848;
    msg.z_units = 59U;
    msg.pitch = 0.228321656546;
    msg.amplitude = 0.735445609195;
    msg.duration = 24496U;
    msg.speed = 0.689980149368;
    msg.speed_units = 139U;
    msg.radius = 0.22211699349;
    msg.direction = 238U;
    msg.custom.assign("QKOTFPBBAWOEBJMJDUXFCPKAPIZWKIHTOMIUZYLRNVGJEESGDTRYNJEIKWOXHNHMPAYFVQZPBAPCHXMMRCNPCCTSGVVGADJBUGCQAKWWFBIZEEUWERRKYNOOOUHHBXGJJRNDTSXDZIETDLDIYDFALGJLAYLMCWAVZMCTILSOABNQLZTQJPJUYHNFOLQFUNXDVPRHKS");

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
    msg.setTimeStamp(0.314043815908);
    msg.setSource(22923U);
    msg.setSourceEntity(126U);
    msg.setDestination(26705U);
    msg.setDestinationEntity(164U);
    msg.timeout = 39160U;
    msg.lat = 0.575108932802;
    msg.lon = 0.609146645709;
    msg.z = 0.576723213029;
    msg.z_units = 172U;
    msg.pitch = 0.174905123003;
    msg.amplitude = 0.388133841434;
    msg.duration = 24055U;
    msg.speed = 0.236409161168;
    msg.speed_units = 100U;
    msg.radius = 0.31966504609;
    msg.direction = 235U;
    msg.custom.assign("CLVPUHTPEUIFCDPVWRNVYSZSNOSPMMMERQYYUCAXOBGHKWFNATLSHPJKLLTLZQGAYMGJZJLJYSRFEYDIBIMFOUDBABUNYVERCZPFDFIFGDRCCTJMVVVXPLBMLEWY");

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
    msg.setTimeStamp(0.962091710516);
    msg.setSource(9833U);
    msg.setSourceEntity(41U);
    msg.setDestination(50614U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("FVZIMMKNIHAAOMOYQQEPJNTKSOHBNKSVNDBZUAXUGIAGCTMBYQFNRKJFCJTLRJDVNGITEW");
    msg.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30685U;
    tmp_msg_0.off_x = 0.628007260331;
    tmp_msg_0.off_y = 0.831451259072;
    tmp_msg_0.off_z = 0.983426953445;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BDLYUGHKCFBVICEMDPAZXYJDUUTVXHQMSBBVCSRWZCKAOQYTYMKJPXXUFMPCJFDHMDIVOREQDGJKWBWXHTHQQSOFYQPTEOIJEAAZOUGNECFGZDRJFIEXXIOGNUUBKLHRLABNFPJOKGLIEDHAOTDVKKFRAQETPO");

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
    msg.setTimeStamp(0.917100951235);
    msg.setSource(61369U);
    msg.setSourceEntity(43U);
    msg.setDestination(63280U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("XKPXTCVCHPVZQBDZVDUQREAILEBSDXMKUORHCOQLMXJGGRTEEUNUMEAFAYZGYISXAXJISTJMZCTHJHOOJAWMGWGRINEFSBYSKKOITSRZTCDPKTVUVWQZYLCGJNSFPQRCQVCBOIJYXKYLIRSRLPBODDYGUXHXJDWXVFQKLTAVOGGTZWSSIUGFFOYLOVNMZCJKFNQN");
    msg.reference_frame = 122U;
    msg.custom.assign("GPGFTNMPJCVCCPNDFOJQUYAUMVBZZIEFHOGPZSOELNJKHBPKSRJTQFZXHYBBDZKHUSTQARDBSCXJTEHWZPMXYGTQYGBLJNQWGFWQGQGWDVUKZSNOFLIEMPHUIIJEBCNLFITJLPORAVFKFGEYIWHDTWAASIMNKIZUVLYBXRYOMLNKWURJXNBMQODVZKDVSRYMWATEBLVNAAOEMKSWOHRROESMXUZYXXHKDIEIUYRJDLCPVXQCCLRVTCSQUGXAP");

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
    msg.setTimeStamp(0.97772812687);
    msg.setSource(41707U);
    msg.setSourceEntity(123U);
    msg.setDestination(10104U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("SCCJJLZQAYERUGKPJKZAZGLRF");
    msg.reference_frame = 92U;
    msg.custom.assign("UBERHXWKXIQIWARLRZXFVXCFRGUBYNMHNDAHGLKXYEILEGMZGPSNTQCIA");

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
    msg.setTimeStamp(0.184879147338);
    msg.setSource(18698U);
    msg.setSourceEntity(100U);
    msg.setDestination(43236U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("OXMSUQPXCNULAITZODCWBCMIZVUKKZEKQVAQYOKAFLLKLUGZFFZJRTSUDXYVGSNBGRWZQHPRCHEGUBGIEWCMQKHSANGUOMTXTSHNOQOVTPXWVYVGIFDPESABBXXXLFNENKCDOOZDWYJJPFTTACENAIRLHZIMYMTJFWYYJDFJDVKLRFRLKOC");
    msg.formation_name.assign("LMFOQAHDHAGPKSGUQUKMOPJRIORCHTQWRTFTVLJUFJDOURTTSPEHHSZYBFNGWKAEJHFAXXAYBGQWIYBXKDQXSAPQKGDKTVAMZJZHSDXZMUPZBSGCYVNXHCEHVVFUCBBNWJGOWGQDORRELIIXNYBNVSJC");
    msg.plan_id.assign("OAZYUOGRVSOPWYUKFJRTBGIFAODHZQKMDIOURAGBIPKXEDHAIHFCRUCRWYMDACQJVZEIUFKFPSRGZCJCWSXXNLDQUENNPYNDRTVTEDQJRLELXTWFVXXBRSEJUWQ");
    msg.description.assign("JLLZGVCYDKCNCTMKSTEEPGBZGIHCAQENZNEXHRMYADHTHNGFFZYQQUUQPWSRIQEAJTAPIDJEKMYBOCKWUSVOCUWSKIWRSUVYFDXYFBGAHOPSMQOURYZBTSXZXVZHZUDRXMGJXEMEHBAHUPRVCGDVGHDXDTPDIF");
    msg.leader_speed = 0.916861447925;
    msg.leader_bank_lim = 0.363803942721;
    msg.pos_sim_err_lim = 0.153623055962;
    msg.pos_sim_err_wrn = 0.486082401503;
    msg.pos_sim_err_timeout = 10345U;
    msg.converg_max = 0.360417384769;
    msg.converg_timeout = 5294U;
    msg.comms_timeout = 12047U;
    msg.turb_lim = 0.886448338888;
    msg.custom.assign("KTAYIOJRWVEUSOHBRSKHHQJZLZCKCGXOAMIELFWGCLFIPXWFUINQFFPRDQMJSPDRXWALSOVQPCPETZEBGMSWTDZHYPBSJJTMZKVWFNITUIK");

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
    msg.setTimeStamp(0.385958726226);
    msg.setSource(39077U);
    msg.setSourceEntity(60U);
    msg.setDestination(10345U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("PYOMASXBXUIMJEUVWEQKCRHHENIPOJXZEYCTCYXPKDUFBRUZNUJZHGNDVFEDILZVQIYKVPDOSNYWDJODXTRNNUKLGISAXSZAEYJTVAWBNJHQPMBLJDGUTGLVQTLARTGIQDMQHAWSSHUEQKGYHOZABZYNFHXAMYSMZNVKERTVIFXAQBRJXZFCFLDBPLUWWKMPFAMUEVIKCIFZMPFWYOMWXHCGQPOQOCO");
    msg.formation_name.assign("LWJDOXHJTBGUJKEUVLKORZOCYMGITEXHPTRGMRNYWRQRCTKNXTQSMRHISQLWQENMPHGZDTPGVXDZRGAMSQSFLBIPNTRHEBIAAVKBOXQRGFJYQLKGYUHYMWZKWJRCBLXWJZYQYVLNSOUEJ");
    msg.plan_id.assign("BIIDYZPLVXYAFUJKKFWOZDZHQTXHELBRVMTQYLWJEWWIFCIVWQNHOLOEXCGDZHXJBNMQBJFGPNEGPGLBNGAAHUSAXPKDOEXCSVREFULLESOQCIYURSPBSAJKTRAZWMHKMXEYCTDQPGVUOUHKIONNUDWKUJEZTSBBVO");
    msg.description.assign("LKEXKAZTGURLIVERQZGFNQDTONMANKTMBULHWRYGJIPCFAFZDBXFQNPJPSWGXFHTWRXVJTIEXMRKIOTKEHBXFQOZGSYTEZDNOBVUMIAQPOWGPINWQXLSSLUJDCVCSMUNMCN");
    msg.leader_speed = 0.552870109217;
    msg.leader_bank_lim = 0.709723736613;
    msg.pos_sim_err_lim = 0.364143220459;
    msg.pos_sim_err_wrn = 0.836688084943;
    msg.pos_sim_err_timeout = 20868U;
    msg.converg_max = 0.61077791301;
    msg.converg_timeout = 1555U;
    msg.comms_timeout = 52834U;
    msg.turb_lim = 0.0207211246517;
    msg.custom.assign("LLNMPLPXOZUCKWAHXHNVHTZHWMTHBFDNLVUYBQXVKBBGYDCOIOMSSYXPJKLUMOMJPREMRDRYWCEEDTBTQNCOVIXHEPSOCMXOFFZQFWVBSEIGTWAXUQYLKPDVFFNHSUSDCRJOGCGJELFLWYRBKSJITJZANQIGPKWYQAIEURAIYBLAIORCFJJUGHUHQWQKGNFAAGZNVXRALTSZKTYRDSXGEFMEVUIPHDBZYPPREZOUKDWQM");

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
    msg.setTimeStamp(0.414019475231);
    msg.setSource(12639U);
    msg.setSourceEntity(134U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("CZKSEIECJQKOOPHWFHUNWQQOZGNEUROPXDRXIFIDSVUFYHGXSYWPQPCZPMDKFBUUMWTXYVAQVMYYULSGXDFAQVJZLNIJROFJFDCJNZWMYPCGEMQPZBBMIAHPCSANPGXAHLKRXBCCLEJNYETJEFORLGPTOBFGSOKHIVIDWRMJRSWZWBHVNQWMZDIASBHQJKTY");
    msg.formation_name.assign("TZGXRZKPFZQERMQKLTNPSBBBRARHYJXNWUQXJMWQJVNFQIDVOOQREHWCWPMCHUPXRFULHJYSMZHFTNOPTMVEUEOKVXQACLVNLJYIUKAHV");
    msg.plan_id.assign("DGCHPPJOEIFDLYATNAZFLPGPMHFMSDIHUZXKJWQHCSWLLFPOZRBDQCWHZXKGWDULRQOBYAMCQJKLCQATCWGVVTMWSQHSTYEMEUORZVNZJRDIHXIBNOKPNMYEJMEJFNINHOKRJKYJERBIXNRVRTUNYFEOGNATSNVVKIEBUDBGLCUAZELOKJBZXPUUXWQQSIYBPSLBYFZCGSXUVRFDVUHVVEWDBFPWZWQSOKTMALGTMQKJYCSIOX");
    msg.description.assign("CUEAYVKIOUDHVFVIXNQMNXXPXWDKMYGPBMDPENIQHKLMVACHIXUHJTKYUCJXWQKWVVTQRBZWZASNZBQPAZWGSZGIADTTNNFYFGOSPFAEFGOLITUMWYWPCJCPGYKOQECFTJRRFHPGHNKJISETQXOCZYLYMJOVHPEROEBRSZORKEFBUONLJLVLQOUHSBSHDIKKJMDZAQPDERYJXGLTVBBFICYEIASXCNUMQXNLMAFTCWGRS");
    msg.leader_speed = 0.0099554878305;
    msg.leader_bank_lim = 0.926065116825;
    msg.pos_sim_err_lim = 0.0967100710249;
    msg.pos_sim_err_wrn = 0.622033400192;
    msg.pos_sim_err_timeout = 64934U;
    msg.converg_max = 0.982283719133;
    msg.converg_timeout = 30536U;
    msg.comms_timeout = 42938U;
    msg.turb_lim = 0.940668729885;
    msg.custom.assign("OREPPXMHEGULKXVFTDRXFDATCACWGEYKAKSUOHXBJQTXNQCBTRTWGLDDIFDPJPLNQUKZSLJMKOZXODAGUZGHZWXAJOYMYKRTNHPPZBJPVJOIBQOEKDHABVBVBFLWBTKIGCDJMZCRQNPLGF");

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
    msg.setTimeStamp(0.499574987075);
    msg.setSource(24122U);
    msg.setSourceEntity(15U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(40U);
    msg.control_src = 1351U;
    msg.control_ent = 65U;
    msg.timeout = 0.655767975464;
    msg.loiter_radius = 0.420479302359;
    msg.altitude_interval = 0.89418971233;

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
    msg.setTimeStamp(0.232228616214);
    msg.setSource(28158U);
    msg.setSourceEntity(169U);
    msg.setDestination(16488U);
    msg.setDestinationEntity(59U);
    msg.control_src = 36290U;
    msg.control_ent = 21U;
    msg.timeout = 0.255644249523;
    msg.loiter_radius = 0.555134783174;
    msg.altitude_interval = 0.682474303097;

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
    msg.setTimeStamp(0.589416770658);
    msg.setSource(37296U);
    msg.setSourceEntity(196U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(60U);
    msg.control_src = 21781U;
    msg.control_ent = 39U;
    msg.timeout = 0.8606063849;
    msg.loiter_radius = 0.0664173927215;
    msg.altitude_interval = 0.651208990421;

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
    msg.setTimeStamp(0.906304805687);
    msg.setSource(53683U);
    msg.setSourceEntity(77U);
    msg.setDestination(26159U);
    msg.setDestinationEntity(101U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.917442300924;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.540915079943;
    tmp_msg_1.z_units = 42U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.00712940341704;
    msg.lon = 0.6156372938;

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
    msg.setTimeStamp(0.611152923669);
    msg.setSource(33857U);
    msg.setSourceEntity(140U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(220U);
    msg.flags = 29U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.35858142921;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.759533339414;
    tmp_msg_1.z_units = 117U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.388509475655;
    msg.lon = 0.41373200951;

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
    msg.setTimeStamp(0.0832690016468);
    msg.setSource(5395U);
    msg.setSourceEntity(106U);
    msg.setDestination(25760U);
    msg.setDestinationEntity(73U);
    msg.flags = 75U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.426316327213;
    tmp_msg_0.speed_units = 120U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.796102621789;
    tmp_msg_1.z_units = 18U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.945608889011;
    msg.lon = 0.582130166426;

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
    msg.setTimeStamp(0.39068731611);
    msg.setSource(46432U);
    msg.setSourceEntity(30U);
    msg.setDestination(35819U);
    msg.setDestinationEntity(149U);
    msg.control_src = 28240U;
    msg.control_ent = 136U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.393210080372;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.045626200088;
    tmp_tmp_msg_0_1.z_units = 94U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.749501360455;
    tmp_msg_0.lon = 0.712684695856;
    msg.reference.set(tmp_msg_0);
    msg.state = 70U;
    msg.proximity = 179U;

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
    msg.setTimeStamp(0.470253847286);
    msg.setSource(18550U);
    msg.setSourceEntity(227U);
    msg.setDestination(7798U);
    msg.setDestinationEntity(48U);
    msg.control_src = 49316U;
    msg.control_ent = 17U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 215U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.734192260369;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.798431800893;
    tmp_tmp_msg_0_1.z_units = 134U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.197859172301;
    tmp_msg_0.lon = 0.0325733669843;
    msg.reference.set(tmp_msg_0);
    msg.state = 169U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.0262206419032);
    msg.setSource(59099U);
    msg.setSourceEntity(197U);
    msg.setDestination(29038U);
    msg.setDestinationEntity(166U);
    msg.control_src = 28203U;
    msg.control_ent = 42U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.57106202386;
    tmp_tmp_msg_0_0.speed_units = 96U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.267053455307;
    tmp_tmp_msg_0_1.z_units = 62U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0933349745526;
    tmp_msg_0.lon = 0.824183977131;
    msg.reference.set(tmp_msg_0);
    msg.state = 213U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.428981916334);
    msg.setSource(3719U);
    msg.setSourceEntity(120U);
    msg.setDestination(59117U);
    msg.setDestinationEntity(148U);
    msg.op_mode = 200U;
    msg.error_count = 209U;
    msg.error_ents.assign("ZNBHKQUVIRKIATQFUZWJIQWDEOXCIYPLYZQMNNPAGDDJBIORVDPEFTFEUFZEWPSFQLCMKKYCXZFJKXCBBYHMATHVRIETOLYLSOMRXLTDXTJLVLWHJJOEBRWACWKGQNTBHEDFHQWYIJASVTP");
    msg.maneuver_type = 50954U;
    msg.maneuver_stime = 0.0930737328873;
    msg.maneuver_eta = 17504U;
    msg.control_loops = 922532301U;
    msg.flags = 161U;
    msg.last_error.assign("UYCOGOZBJLRPZOZSKRDJLYMQHHQKNIJFIFMCOVFNWMZHMMIYGSXVQCSXAYFGP");
    msg.last_error_time = 0.616796199063;

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
    msg.setTimeStamp(0.251922767478);
    msg.setSource(19811U);
    msg.setSourceEntity(4U);
    msg.setDestination(50802U);
    msg.setDestinationEntity(10U);
    msg.op_mode = 27U;
    msg.error_count = 146U;
    msg.error_ents.assign("CIQTJFBVDNORBBRYQUXVXOWOKRLVJUYZVKKVXNYZGYSRDGWOUOWQACBHJXLQWRTEKFJFCPYMRLWNDIZSPLWNUPZEUMRAHVOCJTXBGUOLAZFJENPNUTTMFPQTTHSFNDXV");
    msg.maneuver_type = 58480U;
    msg.maneuver_stime = 0.529763046567;
    msg.maneuver_eta = 65101U;
    msg.control_loops = 3008745750U;
    msg.flags = 3U;
    msg.last_error.assign("ABFGJXNANLPZFQT");
    msg.last_error_time = 0.576388287497;

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
    msg.setTimeStamp(0.881700015303);
    msg.setSource(26928U);
    msg.setSourceEntity(183U);
    msg.setDestination(31601U);
    msg.setDestinationEntity(171U);
    msg.op_mode = 85U;
    msg.error_count = 28U;
    msg.error_ents.assign("WUCCDNHVZGKKQEWPACSRZYFJGXOMXMKQWALPJXABTKDWOVIMVWHQGWTTFYQFECPGCRYYDDENUSMGTBMUIUCCWJVSPAERZOMLMYTSJAGEXYCSPKBQLVVXPYLGQHLIJQRJITCKWUZBRHZKEJEBHUA");
    msg.maneuver_type = 27581U;
    msg.maneuver_stime = 0.849526551274;
    msg.maneuver_eta = 48798U;
    msg.control_loops = 2704676900U;
    msg.flags = 28U;
    msg.last_error.assign("LVVKKSCLHNDUEDJZYLBFOUYCFAMSWGKGBUMOR");
    msg.last_error_time = 0.00731599562637;

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
    msg.setTimeStamp(0.878103932241);
    msg.setSource(44101U);
    msg.setSourceEntity(136U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(143U);
    msg.type = 32U;
    msg.request_id = 56117U;
    msg.command = 63U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 5455U;
    tmp_msg_0.lat = 0.227836346525;
    tmp_msg_0.lon = 0.335944818781;
    tmp_msg_0.z = 0.586218572662;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.432332780284;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.roll = 0.979441200139;
    tmp_msg_0.pitch = 0.728256820013;
    tmp_msg_0.yaw = 0.556792698939;
    tmp_msg_0.custom.assign("XSMUCMAOINCPTWYBVO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45160U;
    msg.info.assign("SHDREAGDJUX");

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
    msg.setTimeStamp(0.343905484474);
    msg.setSource(11968U);
    msg.setSourceEntity(185U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(218U);
    msg.type = 77U;
    msg.request_id = 55951U;
    msg.command = 4U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 45963U;
    tmp_msg_0.lat = 0.616592513071;
    tmp_msg_0.lon = 0.328578892913;
    tmp_msg_0.z = 0.185098516665;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.pitch = 0.839525123064;
    tmp_msg_0.amplitude = 0.770430562579;
    tmp_msg_0.duration = 7529U;
    tmp_msg_0.speed = 0.796096371531;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.radius = 0.142649451563;
    tmp_msg_0.direction = 68U;
    tmp_msg_0.custom.assign("QVNCTNNVOGWIKXPWMGDHSQJJEYPLZVJRRBIURCKQAPCXVLHPDGHBOKYSZWNPGTGBCEWHEKSSSQQNVXNDCGLACZZOUAVJZUVTAM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60788U;
    msg.info.assign("QAGABXWHEWRIWSFMVDAHHZJYIQTXLVYBQKWINCBGONRVISRANUPVQICLHJVTZOXBPSJIXVMZVZPDFHDWMXCMDLEOGJMOAEBGPAZTNQFM");

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
    msg.setTimeStamp(0.619498880705);
    msg.setSource(24041U);
    msg.setSourceEntity(228U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(212U);
    msg.type = 170U;
    msg.request_id = 21169U;
    msg.command = 128U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.313651062588;
    tmp_msg_0.lon = 0.811564548147;
    tmp_msg_0.z = 0.238698365075;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.radius = 0.691508549582;
    tmp_msg_0.duration = 9464U;
    tmp_msg_0.speed = 0.872697126837;
    tmp_msg_0.speed_units = 23U;
    tmp_msg_0.custom.assign("LSZDUVECEDOKLQVGXBXCHMGJYDQAILSDSVTNRZQHDQWKBGACSESIPTGCHFROEJURYIPEECXUEGVJJXCVLMLGUIOVAUAMCKCEEVQNXPRMOQQIYYPAFKNKJYYUZLDHMWLRFKRIHZNOTDBAKBBTVQBTTDBBBXZKWAYDYWLGKSOYMAHXRIUBWWJZUSTXZQURMTMFPOYNPZCXRCTJGHWFPPFFJNLWSJZQHHERNFPDOOF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25899U;
    msg.info.assign("LUGRAWURQWUFHBHMSVEDVSMVLXVUUDAPAQJHZXQWBJHNVYXTOCOKYTAOFXECTZYSNDXKYBHENWYEDZMAWMPAMCBIVDMZJSSPJGXZRACYOQCVDFEMFJZAFRDHCJIFYGFNQTSCKG");

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
    msg.setTimeStamp(0.769261400815);
    msg.setSource(64764U);
    msg.setSourceEntity(22U);
    msg.setDestination(5290U);
    msg.setDestinationEntity(115U);
    msg.command = 109U;
    msg.entities.assign("MFPFYIBVWOYERJQIRVARGLFNZSUSXBYFTWKMRFIZTXXHHPQRQLHNBYNCAYVRSDSGSXOCALMHUZIHCJTFHDUYLPZUDXEMJCGATJEWBJHKISGVMMNNNZAVZUSQQUWSJQZUGNR");

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
    msg.setTimeStamp(0.270546439826);
    msg.setSource(57503U);
    msg.setSourceEntity(5U);
    msg.setDestination(36257U);
    msg.setDestinationEntity(223U);
    msg.command = 129U;
    msg.entities.assign("SSBIIQRQRHJPFIQFFKNZHVMOEWKWYKIZOTNPPDNCBVSCUVYIASBFBNXNCXPGBWMZIMLDZFDDG");

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
    msg.setTimeStamp(0.584816295309);
    msg.setSource(5189U);
    msg.setSourceEntity(8U);
    msg.setDestination(16419U);
    msg.setDestinationEntity(204U);
    msg.command = 247U;
    msg.entities.assign("HPYBOJFDZPCARQXOSHDYKRTNABKVILKMGWVTLIBVINSCZWDCYHMQKIXTAIPTWBNICIBXWSLETUTKSFYNXDSSUMUCDRYKHHCTLE");

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
    msg.setTimeStamp(0.687050729373);
    msg.setSource(23027U);
    msg.setSourceEntity(187U);
    msg.setDestination(10346U);
    msg.setDestinationEntity(53U);
    msg.mcount = 74U;
    msg.mnames.assign("IZPPVWPFNDXJADYZKWSDKSPLBROWDRY");
    msg.ecount = 140U;
    msg.enames.assign("ABNLEWRXTNAWCPFTTYKSYCFENLYKUZBMTOSJYKFEXVZHXIJPBVEMHUYTYUXOCWETZSGSOOWJYHRDLGHIHEGMNLVQQAWKUMUCWBLIHNEHCRFJZVDTBUDKZJAPGSYCGLIJUIMCPXNLFTAZELJASPJIAXQJVTIFPOM");
    msg.ccount = 253U;
    msg.cnames.assign("JJNRWKKPCKJUFEEPNDQAIMZVUZHOZUSWGANGKQAGZSHZCYLCLMFRBTOIOPDFBWZUGCDICBMRVDHJONUTWICRNHJHBQNWLRMTVLYLIYHETYFAUPGKYMTPSKFZXHWYRPDSTQXCOPHZTQMESJLDMAXVEZKBAIFUNMLEFOCAKGUNSEXTVGMLVBNTHCROYIRIXVQSEBZRGYEUYDTBLUBJXGYAXVIEXQQSWADD");
    msg.last_error.assign("QCZQNHZRCLYSFQFWIEEIAYBMWOLTFULKDJGXHBZVJLPLCCGAKVEXSJQJRNVSQEJVVYQPCANGM");
    msg.last_error_time = 0.840698886828;

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
    msg.setTimeStamp(0.362646671141);
    msg.setSource(2322U);
    msg.setSourceEntity(240U);
    msg.setDestination(61841U);
    msg.setDestinationEntity(91U);
    msg.mcount = 184U;
    msg.mnames.assign("VDXZSAMRUBNTHUASGWOAIGOCRRELHAQZWYWQKZQSXNVLPPHUBDFICVHEDQUXJZJUEXDABLZOGBXSWDPHOKRDOATFZXMVWFVGTIPGCFNYIXYRQFYGJTJVACANOBYWIPJHTMPDRCPSVKQDBVBQKVSWLEHMKXOCJLLTQPDOVZHGYANBBIUUOKSMJCUEIGFMCTXRHCEFITKUUNQWWNXMLZIRCPBSJRDYYSQ");
    msg.ecount = 199U;
    msg.enames.assign("PNKZIVAJTUTIIUKRMYDNOIVKOQEHEKZYURJJAZIJYACLACOJFPWWDPCJYRPHOGFGIUXAXOOWQEHJGBRMHYPN");
    msg.ccount = 215U;
    msg.cnames.assign("KFDJRCQBMJQONWCBIARLSIVZBTDKUIWUCHBVFMAHXZUOWSYEVTZPXZUPHJPVVHPUKWOUKHGGTNZBPERYOJ");
    msg.last_error.assign("MHNZOCOFJDCXVHRRICEEPKZBPMRVIMBRWBP");
    msg.last_error_time = 0.750166106164;

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
    msg.setTimeStamp(0.734068542324);
    msg.setSource(50363U);
    msg.setSourceEntity(219U);
    msg.setDestination(46286U);
    msg.setDestinationEntity(192U);
    msg.mcount = 55U;
    msg.mnames.assign("PXDARQNLZCYHFRGGVDDHNXXVLYVWPFZEUESIOLHCYMFLHDNHEJBQMWWSUHOZWJBNIUIYDDI");
    msg.ecount = 246U;
    msg.enames.assign("FFRQVWXOVVRXAGHSHTVUANKTBBOGPINNDWQCYNZMCJGKYBSGZESFRHCJFENIFYALBO");
    msg.ccount = 135U;
    msg.cnames.assign("SKUBUNNREEZGXOMAODZGMWHYWGSVQNVJIPQCAMGB");
    msg.last_error.assign("CSLNEBCECRQHEDLTZXWSKQMJPKPAQNLDEBPEJHOMUAIKAWWFPIGBWOQGPDDVWGROTZTWUXSYYYNTJEFAVYLXFNWXXLUGXXRAOKMIFPZGL");
    msg.last_error_time = 0.331936581238;

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
    msg.setTimeStamp(0.935110648934);
    msg.setSource(49301U);
    msg.setSourceEntity(30U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(167U);
    msg.mask = 160U;
    msg.max_depth = 0.319355598706;
    msg.min_altitude = 0.658347395767;
    msg.max_altitude = 0.117500832065;
    msg.min_speed = 0.158086994841;
    msg.max_speed = 0.641502347426;
    msg.max_vrate = 0.837080967273;
    msg.lat = 0.52470061566;
    msg.lon = 0.08160563501;
    msg.orientation = 0.272943187175;
    msg.width = 0.643236414829;
    msg.length = 0.7368787714;

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
    msg.setTimeStamp(0.36645502754);
    msg.setSource(3693U);
    msg.setSourceEntity(107U);
    msg.setDestination(22629U);
    msg.setDestinationEntity(165U);
    msg.mask = 231U;
    msg.max_depth = 0.940627657041;
    msg.min_altitude = 0.743767746375;
    msg.max_altitude = 0.593644870155;
    msg.min_speed = 0.516534536395;
    msg.max_speed = 0.612922507439;
    msg.max_vrate = 0.744299737182;
    msg.lat = 0.266191097052;
    msg.lon = 0.191736867534;
    msg.orientation = 0.439661379919;
    msg.width = 0.404993068175;
    msg.length = 0.495885579163;

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
    msg.setTimeStamp(0.0339292767986);
    msg.setSource(17286U);
    msg.setSourceEntity(185U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(62U);
    msg.mask = 43U;
    msg.max_depth = 0.461390038979;
    msg.min_altitude = 0.380055811735;
    msg.max_altitude = 0.15775577664;
    msg.min_speed = 0.310693274008;
    msg.max_speed = 0.341989309705;
    msg.max_vrate = 0.304530549565;
    msg.lat = 0.84724192219;
    msg.lon = 0.193683182796;
    msg.orientation = 0.326671335951;
    msg.width = 0.39083213796;
    msg.length = 0.145867322924;

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
    msg.setTimeStamp(0.138593364171);
    msg.setSource(65441U);
    msg.setSourceEntity(205U);
    msg.setDestination(31665U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.0792962718786);
    msg.setSource(3465U);
    msg.setSourceEntity(226U);
    msg.setDestination(63431U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.289296405389);
    msg.setSource(12852U);
    msg.setSourceEntity(80U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.190030288291);
    msg.setSource(56810U);
    msg.setSourceEntity(31U);
    msg.setDestination(25399U);
    msg.setDestinationEntity(179U);
    msg.duration = 34169U;

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
    msg.setTimeStamp(0.0140114603548);
    msg.setSource(10200U);
    msg.setSourceEntity(203U);
    msg.setDestination(47435U);
    msg.setDestinationEntity(167U);
    msg.duration = 30391U;

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
    msg.setTimeStamp(0.293172902819);
    msg.setSource(8818U);
    msg.setSourceEntity(250U);
    msg.setDestination(47628U);
    msg.setDestinationEntity(12U);
    msg.duration = 48880U;

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
    msg.setTimeStamp(0.535106575798);
    msg.setSource(30486U);
    msg.setSourceEntity(52U);
    msg.setDestination(42853U);
    msg.setDestinationEntity(121U);
    msg.enable = 212U;
    msg.mask = 1966011669U;
    msg.scope_ref = 0.300433544821;

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
    msg.setTimeStamp(0.818057592811);
    msg.setSource(8310U);
    msg.setSourceEntity(53U);
    msg.setDestination(52468U);
    msg.setDestinationEntity(109U);
    msg.enable = 105U;
    msg.mask = 507693841U;
    msg.scope_ref = 0.0421260719573;

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
    msg.setTimeStamp(0.645499115655);
    msg.setSource(1017U);
    msg.setSourceEntity(226U);
    msg.setDestination(42698U);
    msg.setDestinationEntity(118U);
    msg.enable = 53U;
    msg.mask = 2178550585U;
    msg.scope_ref = 0.599372311017;

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
    msg.setTimeStamp(0.00647350603289);
    msg.setSource(5436U);
    msg.setSourceEntity(45U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(25U);
    msg.medium = 168U;

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
    msg.setTimeStamp(0.940179288529);
    msg.setSource(17456U);
    msg.setSourceEntity(105U);
    msg.setDestination(14886U);
    msg.setDestinationEntity(20U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.608309409538);
    msg.setSource(56808U);
    msg.setSourceEntity(193U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(185U);
    msg.medium = 139U;

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
    msg.setTimeStamp(0.989215452896);
    msg.setSource(64106U);
    msg.setSourceEntity(74U);
    msg.setDestination(38963U);
    msg.setDestinationEntity(133U);
    msg.value = 0.810656176942;
    msg.type = 127U;

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
    msg.setTimeStamp(0.657945786182);
    msg.setSource(58159U);
    msg.setSourceEntity(43U);
    msg.setDestination(22565U);
    msg.setDestinationEntity(76U);
    msg.value = 0.408007881257;
    msg.type = 87U;

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
    msg.setTimeStamp(0.0814860749275);
    msg.setSource(27076U);
    msg.setSourceEntity(155U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(43U);
    msg.value = 0.854196985557;
    msg.type = 250U;

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
    msg.setTimeStamp(0.49425580496);
    msg.setSource(56944U);
    msg.setSourceEntity(144U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.0224061837585;
    msg.converg = 0.966392914188;
    msg.turbulence = 0.196551072108;
    msg.possimmon = 126U;
    msg.commmon = 210U;
    msg.convergmon = 191U;

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
    msg.setTimeStamp(0.664586764302);
    msg.setSource(19982U);
    msg.setSourceEntity(208U);
    msg.setDestination(24815U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.345732138502;
    msg.converg = 0.997511643603;
    msg.turbulence = 0.132244272088;
    msg.possimmon = 37U;
    msg.commmon = 231U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.607130150012);
    msg.setSource(2786U);
    msg.setSourceEntity(92U);
    msg.setDestination(13864U);
    msg.setDestinationEntity(245U);
    msg.possimerr = 0.256958941224;
    msg.converg = 0.891302343078;
    msg.turbulence = 0.46231652325;
    msg.possimmon = 74U;
    msg.commmon = 224U;
    msg.convergmon = 238U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.31725243702);
    msg.setSource(43023U);
    msg.setSourceEntity(141U);
    msg.setDestination(63577U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.443480131762);
    msg.setSource(42579U);
    msg.setSourceEntity(251U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.229513343913);
    msg.setSource(36053U);
    msg.setSourceEntity(76U);
    msg.setDestination(51828U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.657845990175);
    msg.setSource(40594U);
    msg.setSourceEntity(98U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("ARJEDYJSQRJLONWFKKVPROCTQSQYHFMQRWGZDUIOVYXZAQKOWUAYEXEHKBSBIHTDJUMYICZZHZPWWRJUPTGYDGMWMASINQMMNGXIODRLDPCVCKNDURDCTASKKRYEVVLBNEFOLGBIJNUOUZEYHXTCENYQLXGGOKQTCNBLPJFHIOPFZBHTBAATXPCBYFJDCGUEPFALFJWEHGXALCZQMJNFXTXSRAWIDMMPWFIGS");
    msg.description.assign("PMUEPVYKIYBKXMSLBKBHOUIQOWGDXHEUUVLOBSYBMOETXILOPNZPJHTGZWQXKQNEBFFZQJRGRHCGEVJHDZAYQLRGIHWDVIWYSPXAKWOTIZBWQINJP");
    msg.vnamespace.assign("AOOPLVHUUYXWRLHVFWLZZHLNYEDFBNIBHUYSMHDKTEVMMSRQWYSIDBBJCXSCKXTDTMQIVAFMJUBTSRAHIXGFRJQKSXFEPRSTQQANLVCEVEYKQIAUGDWVKAXBAOZGFAOXYMIWVYGRHOMMORBKNVPKTJIQYGQNNICDPPTSLCEREOHWZSHQRDYSITCXCY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MHNTDUUFKSSFPQNZYDPGYPCFMQVXTYZASTPCYAYHGBYOOKIKPNQELJULQIJWMZCVYJIYEODNRTANFSWLWERNPUQPMERKWWFXJATOBHHMJDNFEVXMWJQTRMZOSJZFALVVIXVUHCSSDUBQJUTBTNATCOJDUSBONQQPXHWIUKEXFLGDBIYHILFLTABMEQDRIVRRXHWRMBONVZPZGXO");
    tmp_msg_0.value.assign("ZDKBQRQIIATIJQZGDRNHCCBXKJDTHKKVSMNYFSPRHXLWNATHHELCULPMUFGVAONTLUTKRLQDYGXODDJRPVWUXSOFIGDRJZIMSWXYJCBXMRQTNNIOCOXFUPNTENSOLVEJBA");
    tmp_msg_0.type = 177U;
    tmp_msg_0.access = 125U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RSLVZGWPZKHFZQEFSNLZAMMURQWOACJKCVNIATTQXBNEOMXWHWGRNTJHSQMGKGFDWKMLJAHWXJMYKYBYYACRBDWNTIYYFNXBZSKIVRKFVIGJAOZREDQVXN");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IUYJGNJDPDXFCLWVZVPXMHJJYISCLTVCCCMXFFSQNEAPLBBDIFNKITKWURHGAGUEZFGMZSPBTHYWMWJTOHDYVGKYTZFQZTYQTERPOCEKVMFJNFSPT");
    tmp_msg_1.dest_man.assign("LUJJALZBPQWYDBFBCQFZOJWVFGUMZRHNKMYXMUBICHWHUSEYAGGFGTOLSNOXXWDQVDHWPQNHSKQGEVVMCTIJTTOGTSPTCJHICFEXYTROSEKUKPIJPMDYHMSXFOWLGUDBSRRPZVRAYOBWDMTFRWXDQXKXAKYDPICVINOLLPXRIZHZRLNZAICIHXVUNULVSFKFBCLWKZMNOGAJGRPVAEMQEYZBSRFUZCEJCJTW");
    tmp_msg_1.conditions.assign("ZKLIIVNCEJXTVOHCVMCSUWGXNRMDILPJVLYLXJPP");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Parameter tmp_msg_2;
    tmp_msg_2.section.assign("RFLFVXIOSEEVAKMDBJLFUSSKGGEXXOQXSSBNIPUHMQEIMACDNIFMOJCMRKFKMELHUBVOJHHGJXUKBRCTLYPWJQVWEZOMYTWYNJSIHZPYFMKPLRVPJGVARARYGQHIITWHTDWKCPNVBYQQJEELYCDAZHNYXAGNLOQFAXZAVTK");
    tmp_msg_2.param.assign("ETGFLKTLJQZWB");
    tmp_msg_2.value.assign("EFIKQTYCCPGNIHX");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::AcousticSystems tmp_msg_3;
    tmp_msg_3.list.assign("DGQOWHDFKPIHDKHNJEDQUMLRVSCHAUZIACRBJBWWTN");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.0377693461757);
    msg.setSource(23485U);
    msg.setSourceEntity(56U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("TJMPMBYWYFADYLTHOZXZYOKPGATAHGJHPKRRMFQXKGDFRAEYKS");
    msg.description.assign("JXOPTGOKLRJFRUIMATMBYSMSFCELIFWCQQIDJGRNWVNATUGWWCWLMUKVKGPDHYGVVRQDGIJKVLCCZURHIWJFIWIAJZVKKEZIAGFOYSVSYXSXCAOSXPJNBPBQZTERSJKYGXZQHSEKRQFNNMNBMMPHUIYIMXLGKLEZFZHXSOAOOBGCDPXQNQHAFVTTKNTLDUTBXTZYUWMAXHHAOJVEYDBLNUQDEHWNC");
    msg.vnamespace.assign("TZKIZNJXSJQTGSWRASBHUTRPSOWZSHGDWXNVEPRCIPPZFBLDXGHMMAGJKERGYMHFIGDRCECMYFKQUWPMKZQXHUKIAIJGWRCDGQWAMSXPZUCAKBBPBHOVCDUKVQGGDVOOTOFQDZRBFZSWVQVQDIQEYEJUZLLNTOYYPPCTBUKFJXBBHMNNIYWSEYELLALYVJARAWSEHJDBCCJPFVZONEHSYUOUKILKQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DLFNEDLEJYYKIMZMAAUKZRNGNFNBGYZMZTSPSYAAVYSKJBFGZZQHUWVLJDXSSYASQTCYCKBEWELAFMQMHFNWQJHPOBPNRBEVIUWBRVEPHJUOADWAMDRNORVGBTCBUVTT");
    tmp_msg_0.value.assign("DHIZPQHSLJPYEKYILFRPSKAFBWCUAAGQNQNQMMYZOXYVKAFWTRGIGUDYAPFBMUHRFBZIBUSFJPHTDTMMIRDZNEJIAPIRCFZWNJIWHSZQCTLBXOUALOVEXEHSVMDGHBESUOHEZLYLDQICNSXSUPCKLKAWJVYNOCVHAWLNWTYXXXEQQVDDVWPTYGKZZKRVLJLAGQXDWNOXOVFUDVHBEGSSTJMUKFKBOXMTOJJINMEGMCWTP");
    tmp_msg_0.type = 175U;
    tmp_msg_0.access = 184U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TYMRPYUFUJTUNWUHJGZMMPSCTAKHEJNLEWNPTOBTZZASRLATBRVVZQFYDEVFUFMYKHCJWBELWTJVOCQAWBAPKLSDJNHRDINOVEGAXLSQXBRVOSBMACOPRGLIEDFZAYQQDSNTONIIHBMVGGGMOPIHLEEMXCWOWFDAEDEBUSZUJYKIHLMLSLDPCGMVFYGPJIKXNUH");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QJRYWTZSNIEIXTUKEUWKZNTTXLDJKXTHSEMSYCZVSYAHRXIKNOCK");
    tmp_msg_1.dest_man.assign("HHSWKKXAQHLSDNJEIFLNWQWYYFOZZUOSQMYKFKPYIGHPFDPHEAZSFRQXSGTWCGPJTQAUEARBVEYUKWNBDGBPFNCEXYHKPCEJTFILURXIMCBQOWBKZULZATJUHBLPMJHBIMVYBAMQFHLUKYKEXZJLYSJOTRNVGTDFCRVFTXIZIPGHLQPDEDCZGMVDMZIVNCOYNXNKRMVMICTGVORNUQQDXWOJAZVATWWDCESJSODSIGTUBAGW");
    tmp_msg_1.conditions.assign("FPDDZZXNUXZZAQUUTGBIPUAXFLWRUOKUWOMHNTILJFARWFNECDODKHLKZCZGAGFXSSAXVNMKRMNPSKHYPPVEIXFJCRKIXAGFQNSVQDVPWTBMVEYFDMLDHBMZJSQTWHUOMS");
    msg.transitions.push_back(tmp_msg_1);
    IMC::LogBookEntry tmp_msg_2;
    tmp_msg_2.type = 115U;
    tmp_msg_2.htime = 0.492136150862;
    tmp_msg_2.context.assign("HGPRYSLPUOOWQBVODPECZEAVDAYXRNWNVJRXSSFTNLSEGBVXDHYMDECGDYWHANTFCPSTHWQLCIEDNFZJJJUTXPYFYRLKPOBOSJZMXRMSKIWBRIYLXCVAKMQUZXLGOOYJAKTEMXZQJFCQXCVKFPLQWIDWNTZGTZLHMNKEZVGBFARHNKKLBVMINEOAMHJOQVTAIEHDBYIGPQUUTBRU");
    tmp_msg_2.text.assign("RRPJFVVVSFDEUGJDVDXTBBIAWXSYJMNHRMMUPRCJCYKGMLITKOYOBDERXSXFHQVBLTWNCUWDDRBXRUMGCOUQOKO");
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
    msg.setTimeStamp(0.63062721206);
    msg.setSource(63819U);
    msg.setSourceEntity(67U);
    msg.setDestination(31649U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("VOCIBIJWQYILVXBVHHMKIHYDAAKHEQITKMAOPNEFVHEUYSQEURBSGAAELESZBPQNQFYMZXFHGTTWNDSXCHGMBWYORLCMYZVAEBMDABLDPWJRUNKXYORZWCNGFEGAUWZOWIBFZUGUFDUNZSONXPKSCPOZIDJILKRZDCGFRUXVGPRJKSUMLNJIDXJQTP");
    msg.description.assign("ZIWQRKWEDHZAWNBSCYYSKTVMTXKO");
    msg.vnamespace.assign("VMXUOJJRTQIXLYJBRLCSMIEJWAJXMMRAZRKSVWLSBVMICNIAXZILNBFTCJVNCXHOKOISPZVBGDVCPZGRLVDUTXENGWRKHVSWDTMKYKPQOTSXDZUHDDCEUNHWQZOYAQJGFYPDWJACXJIQCGBTSQTFAGRDYUXVOJFWYZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OYICKFVYBIULOQBDMFESWFZXPKTUNFZMFJEMROGSQUZNAIMCSRGORCOTYDLVJHRLJCPFCJTBPJHIZLEOUWVIIFRPFNTGDEUTIZENGSQKSQTDHLHENEUJYGOWQBAZPBMRXZCEVVPKGSGGDDSXAAVULNZCBWXSWXKJDQMHPGGKXPVECPQDSDLKYZRAFMJHMBTJJWIRWHQNNSWXUREOUTTTCXHUWVXYOBLQYKPHYYLVMNQI");
    tmp_msg_0.value.assign("GKCQUNPMROCEYXTAZHKOXISJLVBEZZFTLKOWYYVLTKLZALGHUNSOKYZMQCNNBEHWDMQTEUXSVLAUGXLKDDSXXCTBEXAFDYCSVZMPBBHVDRJKWPDROSAMPHFRKNANCZCAQRWCENXRFEYSJGHRCIVWOPFUIFHJVQYOUAGXBQBMSMHTMINMEDBGTFJWUOJ");
    tmp_msg_0.type = 244U;
    tmp_msg_0.access = 68U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BAPWUJHAJEYSNXICOLWCQHGGLBIPWCQBTRPFFEGNDGMUDBXTJQXYMWHREOKNNDGBQXURBCTOHLRZJONFMCVVDYIDJWALTNDKXEPXAIHKTBJTCNTBEPHUMRUFKRUEGHVYTFPJROLCZVSBZDHPEMZZSWQAXFZLYUS");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PDZPOXEXGDFDEWIYNGDZNWELOUQRTYSOQUMIZLEHLOEIVVHRKZXVPZOQYYFMJAKWVOFFINPBGPLNBUGMENFJWYCJNNURZQPECKETSNRCSTSBPACSMAHKIVHHCYD");
    tmp_msg_1.dest_man.assign("ZVEWJLHXQWTXBHJDRWJNXRDNSABYWAVTEUNZOYQPCSNGIKZSAHJGPOHJVMTHWAJFEZZKTCQMYYMFDKTWFOHPENIPLKFJLBGFJFQTLXWRDFOXWDDKIMKFGVBYZEMTSCVCLTEIRZSMIAMCUNCSDNCYBWLRQGIGRFURPGVNHPFDGPNQGABXQOKXRAOOUE");
    tmp_msg_1.conditions.assign("OWQWQPEHNIEGAUBCMWRGEJYBUIIVFSUFQLUDWGDRTAEVRPMJSVXNDFAVZUXKMPEFNXBINKPZNJOOXXQHTRYHHJXNCYAWHYDVBTQANIJOKDLKZENHYLYIZMTZOMXXTPOERPCFCFGQSIMCYUI");
    IMC::IndicatedSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.376910457086;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Elevator tmp_msg_2;
    tmp_msg_2.timeout = 38617U;
    tmp_msg_2.flags = 110U;
    tmp_msg_2.lat = 0.542016047719;
    tmp_msg_2.lon = 0.968625520784;
    tmp_msg_2.start_z = 0.353229189318;
    tmp_msg_2.start_z_units = 240U;
    tmp_msg_2.end_z = 0.56218625127;
    tmp_msg_2.end_z_units = 41U;
    tmp_msg_2.radius = 0.96698989567;
    tmp_msg_2.speed = 0.738490264457;
    tmp_msg_2.speed_units = 78U;
    tmp_msg_2.custom.assign("UMYZIPNDZRYHDHCPHXJAXDBFJIYJSAEOEAHTIKJNNPYJTCQXQMFWXUL");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DesiredHeading tmp_msg_3;
    tmp_msg_3.value = 0.840743193115;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.728001621428);
    msg.setSource(11207U);
    msg.setSourceEntity(145U);
    msg.setDestination(48458U);
    msg.setDestinationEntity(175U);
    msg.maneuver_id.assign("HDZOEDKWAYXBMNXRGDWSTCMPJLTPZTCKVZSREYIVQJHSPJGI");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 25134U;
    tmp_msg_0.control_ent = 76U;
    tmp_msg_0.timeout = 0.0537003796937;
    tmp_msg_0.loiter_radius = 0.862303095403;
    tmp_msg_0.altitude_interval = 0.182949052096;
    msg.data.set(tmp_msg_0);
    IMC::StationKeeping tmp_msg_1;
    tmp_msg_1.lat = 0.763567807855;
    tmp_msg_1.lon = 0.0168722937881;
    tmp_msg_1.z = 0.790348516711;
    tmp_msg_1.z_units = 233U;
    tmp_msg_1.radius = 0.812042669403;
    tmp_msg_1.duration = 41835U;
    tmp_msg_1.speed = 0.76291346534;
    tmp_msg_1.speed_units = 124U;
    tmp_msg_1.custom.assign("KGFZNAEQORPPLHNDVYCQSWWVWLKQGU");
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
    msg.setTimeStamp(0.682251318548);
    msg.setSource(44741U);
    msg.setSourceEntity(183U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(213U);
    msg.maneuver_id.assign("TIMMSGXJBJLGRKQABGYUBHRWJSRDYPPJPUOSPLESCUNANGKIXDKWIAGPQSCDSWNGVCKXETABFQTBKBQOFCFYRORVUQODYAVJUTMWCLHQAYYFPIDEDAQWRDITQKBMNSPCEDWVJJOFXIZKJVE");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.726287575866;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 47591U;
    tmp_msg_0.custom.assign("PTRACRNHNLSRLQEBTINBRNPWLTQMBAMWGPEEMNABCIOFSYXHFPZUPPQMKKADGGGSKZXQZVGLZFRYDJAUVUBFHPPMPHPWQCUSQCKVTFHFWVFCKZHYJXBHRBMDSWSBJFUDNQXYYIEMUOJIZRZFEDXBIXQWIVINTHGCTLJTQATYYGUEIKGORQAZXSEMGHARBNDSFVKDMUYWOAZVMJJKKOJAYDUIEOOET");
    msg.data.set(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.197380477694;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GetOperationalLimits tmp_msg_2;
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
    msg.setTimeStamp(0.810139728856);
    msg.setSource(28365U);
    msg.setSourceEntity(62U);
    msg.setDestination(57376U);
    msg.setDestinationEntity(86U);
    msg.maneuver_id.assign("YKXTXAMQNBVOHHAYVQTHEFPZQEVMZXCLJILZISEBPYCJZDHRGKPNBDTQVLEGDDWSAUYMPNGEKFXALOSQSSKSTWJAFLQRMAFXETWUFSPDHZQJIBUPGWRTVFKZUACICCJIWLMJPIVHBNXUDZOOYJFLJNBSEYURRXGWWUQTYHXUBTZGOGLSXCCGGPLHLWJFESMVBDOUXKIVNMNOGRMYFKYTZECVY");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("TJGYVAMYUVBFMMHLLRYHNEXNZAS");
    tmp_msg_0.reference_frame = 218U;
    tmp_msg_0.custom.assign("JYRLIZPGWFEGZKIAJXQHAITNPOKQHXMDAOZRLJCQMBCOWNPRBPMZOMMJOIVUWYBDKXQEKLNYTBSPTQCIJULDQTEZBDHHZUDIQBTXHFUUIRDMVBTIOJVNSVVJJBFLYDVAOGLWRFSSAPWLPABFWAODFRFWDYCYOGXSEMKABYLSENI");
    msg.data.set(tmp_msg_0);
    IMC::ControlParcel tmp_msg_1;
    tmp_msg_1.p = 0.405599646394;
    tmp_msg_1.i = 0.682281305219;
    tmp_msg_1.d = 0.206574006887;
    tmp_msg_1.a = 0.613060649314;
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
    msg.setTimeStamp(0.19322659683);
    msg.setSource(35409U);
    msg.setSourceEntity(213U);
    msg.setDestination(534U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("YDMBWUQVXHCUKGFHBJIJCACOTTBXSLMBAJPQEXJILNWWZYVGUWUXFQFYVFOENYKFBRQYOKMAZPGOSGDNFMWDLSANBIISRNATWUAHEKWOJDJLFVAHUSDIPLYVUTPLQJTHGXDPBSTJEAMVKNNFASHNCZLRQCMSRZNXHRICDJZRKZIZQGTPWOKEKCK");
    msg.dest_man.assign("HDAPXXUZDTGRTPCNROYSUHKMDDIBYBPQGFUOJHTFMXAKQNPSEDIDEXJANCQZDAUNXPWAKZXHWHYXQUSIUEATVCENRJOBILBYUGEFVZKPECYVVUDLKSJVQRBPMMRFTOIJVOGTWEGMCDWRSNLQJJGYDNGGNLLFPBOMMUIPNFVKTGKEYCAMITRZCLOSZQJBBHWQWSGWHCZHKPTUFYVRIHVZWFKB");
    msg.conditions.assign("EFKTFBCPQAYUHZLTOFBNZLHADLQKOMSVSNVJLKBPWSKAMTMPVIJLJQCESENHPJKRCSBT");

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
    msg.setTimeStamp(0.206385175477);
    msg.setSource(30779U);
    msg.setSourceEntity(5U);
    msg.setDestination(965U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("BKSYQDIVZHJJVZDSOJEMXWFYFGRIPDWCNMXJGJSBKKNFRNEBZUAHHUSICIKOGFHQDYMOWMDMORTAGHEYNVA");
    msg.dest_man.assign("DZPMDUUXGZFBWHYHDKCWEQVKWFOVROLIUGSXOWJISZTISTUDEUWKCWJHRBAMKIVVIVHOCPVXHCUXJMUPOLWYGWVRFXJQPGBLPCEFYYIMNPSCXJTKKNOOMTXTWYNABKHBQTEHFTQNROKVJATZNEGLILNCRBAEAGSUXMQHGXASJPQHEDJRWYMLINRUMPEBGSALNDDNJUEDDGZDTIKFZQYMNAFOAVJZCYZFBXRGRROAHYLLFVBQBZMTQCSSIZ");
    msg.conditions.assign("YNDBKTQGMAFMKPFNZJWOBYEHUUNFFFFQUVERWXYKOMLEUORWYTZADYKEPZUOSPOBMVRHITCHPWIRJWNWHIPMVALEKMENHMZSALIONDCTJORIGXQTJJOJKDEDCNPJQMSGCKITQCDVGGGBBUFYSGXOLQXMYSIPLYLADRPKXRJGCBSCEXNUGQXVZRJSDNKLBHQOFCVWPEXWQTDITCPFSABHJWZXWMLURHVTUSNHZAABIVLKYEBCZTSHXZFIGAYA");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 69U;
    tmp_msg_0.htime = 0.198937758998;
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
    msg.setTimeStamp(0.277682623865);
    msg.setSource(12643U);
    msg.setSourceEntity(145U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(110U);
    msg.source_man.assign("UYJQGYESLPJZMFKF");
    msg.dest_man.assign("HQWIDOJCRHQMYUSXFYFKIUSRWUPRHOBWKPGHXDEKSQANFTVEAYQCGBVRWDSFCTYDMTPASNZEZJUXRJNIVUSWNOUKSVPIQGGZXCYQBALQPQEOIZAVIZIGVAZLXHJXNLU");
    msg.conditions.assign("XZTPPXRAPPUEIMMZKULOWDYBOGEAUJDBVTDLFSCUYSBKOKGKXFBI");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.0149453547793;
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
    msg.setTimeStamp(0.616058734384);
    msg.setSource(15519U);
    msg.setSourceEntity(146U);
    msg.setDestination(4968U);
    msg.setDestinationEntity(141U);
    msg.command = 224U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GPRODLMFKJTMXAITRPWGOJQKXVXVALNVZHDVHLWAGZIYUVNQUEAMTMJCIOHSCWPGMSQGABBUEDWBVIZZBYVLUQXXFEEPPFYJIPBOKBAHIRBFSAIHJJUCDONPWYHMZXVZGQLMFVISJTLPSNKOGPOABJPZXTKEOQHYKCVDNTQDODBCMRCHBJNEFWNGRRKCZHSTEYLTUDRLELEFINYHYOUZ");
    tmp_msg_0.description.assign("EFMIQPBQTVCKJYIJEAQGJYUOULAPSERBGFUNLYCSEFEHLBMARUHJBGGQNWFRTWYUZTBNODSTHWQXZPVKBLQGSNHENMONZICRFDJAMDUKQYKIIEWODRYPYNXLSDVAWAIKORTJZAVTZUNIRCFGYLFSVWVQUHZFPVHXMXXKEOZDXXJTTGPDQWHINKEFLYDSCRKDKBCPWSHAXMZOQJLBMKJMUHPZSYSWZOLXTMVHTFDVMBCCAROARNPCVWPO");
    tmp_msg_0.vnamespace.assign("YUDWKCPPWDTNFCNJWUYJPDGMOAYTKIFTTAQNFIFSZXZMXBENLZXAVPSBEGCEAJCEURGYDBYRNCDMGJVKIITPJSLXIWRQSHVPZJEKVAROBEHFFRYHIQEUYLOHFLGBSPHVDNTVLNKGNHDOAAQJTRZQDWJMUGLCFDVJXSLTWKSQUIXRPBQOCUEUANKGLKALYZOSZCROOXKRF");
    tmp_msg_0.start_man_id.assign("ZMSFKFGLUACRAAZQLWEPLDUOXXLIYBKOBSECRLVHJYRNPKJBIZORZXUMZPSUMFAQQOXMHWYZYXYJHTYUBFJNTAFEFJQISRQFZYRLFCDJHZCDZGTOTOUYSYMDGSDVPUQPBGCWVPDWCXPNFHNBHPLJSWCEIJDEAKZAKNTVQIRKSGRKRUXNPTUOETLBCITEWMOVMKMWIGIQBNQGDSLADKOQVPHAWISAHWGNIEGUCKNVMEMYGXTOJXTVCF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AEYMNNAKLSCIVTJPUCVMQUPNGVPBKOIWOXCNAUSZGABXILLQRXHNGOUTKERSDCFDFSEJWICTWAKDWLVZIMFZPKLUMINQPAHIPZDJEQHHBFMVFTBITGOEXCZVFYSWHSMWRBDUNLAZGQIPUQKHCAXYOZRRSKJQZXEYDTCNDAOYAQWYDFPHLELSYVHVTNDHGOTOXBRUMXPGWBEFRDURCGIZGNLMZXJQUBLMRSYQCVKWKBYSJMOERTWBJHEJ");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 25319U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.464636400382;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.69437831313;
    tmp_tmp_tmp_msg_0_0_0.z = 0.133260151186;
    tmp_tmp_tmp_msg_0_0_0.z_units = 175U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.42424234927;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.494910901843;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.182793626505;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OKVSTNMRVDYPOPBNEWGEVTFVGXNFNXFLWWJCZRCHFXDQLJXISDMUDWWXAMAKOXBKHUPVTFKHCKHPIGULVZTGTQOQCRA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Goto tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 65094U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.974556044171;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.726827534458;
    tmp_tmp_tmp_msg_0_0_1.z = 0.216067037262;
    tmp_tmp_tmp_msg_0_0_1.z_units = 234U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.725991592745;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 26U;
    tmp_tmp_tmp_msg_0_0_1.roll = 0.567785450107;
    tmp_tmp_tmp_msg_0_0_1.pitch = 0.207265946689;
    tmp_tmp_tmp_msg_0_0_1.yaw = 0.368511288096;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("VZDWQMJRLQNAOMURVWPUXMLIOZYWCBAZPGLIICHFHOBNBFTWFXOGSBPVHALQGWKVYSFHAXYLZIUOLPKNEITDNSQYBX");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MIJIVYGJPGUFZSUBHHPUAXEFDPXVGECDTFOOWIELTIQBMZRCZJMLFADYCNRMSSIQBHDKXOMWKYVEJJBFWTQGIAQNSZFDORGWPVAVYRNGVUBVBNXELTEANJTATVLYACJTCYLKQHHXFDGNXHDIYCQZLKIOZBOBQJPRZVCEZDKSTSSILNRYMYRQEXOBFQLKMACUSYLJFUOOXZFKWMQNZHSUOPLKEUWWGSNHTWKGHCTKWPMR");
    tmp_tmp_msg_0_1.dest_man.assign("EPIEPJNYUBUYYHGWVPSVWLWYLOCRWCMSFXAHOBBRLLCTBJCUKYXNSAVQZBZRIINNWRPVBZEJGZVZWQJUYCNXEMXJBWFEYMKDLIEXSGDHKVHBDOPIHJGNHIEJUKMOMLQXTZIEZCDVAMSZHDKPAMXQFFTRPQLXUSSOBRNNKLCOFFDTNPGAQZOLVSARKKDHFFOIMATSMGYHFFUWKBLAIGEDVCNRUKWSCYZQEUQQJTGWGPRYOPU");
    tmp_tmp_msg_0_1.conditions.assign("OKDZOHXXNKZFXUDQKTSEGSAMRIQXEIJACZBVPQLUYPYSJABYSLJKVSDVGVXOCXWALXKMZOHXIDXGCDPNELHHBQSMJZNBBDWVYLTZZIRJZZRFWWPNCJSDAIMSTJLHLWLSYNOTNAMDWGRGPGMTENHRDCGCYXTCEHARPRYPEFBUFIRRVNUQOTFIRYYQMTOWNVQLGQYTGCKKAHIBEDKW");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LogBookEntry tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 95U;
    tmp_tmp_msg_0_2.htime = 0.71379177861;
    tmp_tmp_msg_0_2.context.assign("JGZQFVQYHEMNJPZDLVSEIHLKKTKYXBQRZTSWJTLVUSRXXJPMHUFGSLAUDBEDMXNDRLQZKFEJNWNRBJTMNDZUOSTKCOOMYJSCFGAOHFYRENCSIOHTUSUTKCBQZEGWCFOCRLYAXJNSJPPJFVGMWBIODBYBYAHWF");
    tmp_tmp_msg_0_2.text.assign("UHMENXVJVWZYOHSZFDVRLAPPPOFAIJLAGMDNZKGPXXYXZHLUJHLQXYWXKBDVGSASJRVIRRHEKIHBXMRARGMRUSESENNLVDBWCXTGPZFFYCQQEWFJGCMTEJYRIQDCVHIAYMTZUXFBJEBPZQYGRKBHPSTNLEXZUQICBMOWLIBDSODVICJUNMCCTONKOJRNL");
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
    msg.setTimeStamp(0.988693452131);
    msg.setSource(46451U);
    msg.setSourceEntity(72U);
    msg.setDestination(42033U);
    msg.setDestinationEntity(5U);
    msg.command = 11U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RKEQFDEJJJAKPYTGHZZDHGNESBAFKLNSLFNCSMWTOMRCRIEELRQBFCNSARYKDSAFJBHNUUWDXZBHLLVDWAJOOQVLOQBKQBZLSBNIQOJGMXVJNIZXZIGTWXMXVSYKATIUUXXWRHOPGMJYGDBVIJPCVPGMGRBWTN");
    tmp_msg_0.description.assign("ZMVFUNXVAFGOGRSYHJD");
    tmp_msg_0.vnamespace.assign("PFIGRVDWJPXZMVBRUVCDQZDOJSIURSTSQVBATYRTJTLSRWNPUHNEEVOBZMMRVPXFBJJWFLCTPICZELXNSHUXNYURKEUUFCGNRWEESAMGIYUQKQUTLHSTHZNHYODGALOSFWCGLNICTJWFPOAWAYHCOEZOCEKBKNHQLOZMTXONXQMDVJJBRMPMQHSAJEFQUYWAYRXZDIQBKXDKBYKLDEMPGHXKZCFITBYGKDAFZCPVDVLSYIGHVIMWFWA");
    tmp_msg_0.start_man_id.assign("QNSARSGJDGADZMLHEVPOPYJEGNYDFBKUWUTAGEXMDXMMIIFFUKUZEZTSNWQWQKZYRVRWVUIEGXAWFHHOKBFNGFCHDRMLZNMVEYRVRPBQZYACJQHJJZGRTSQCEIZWAMDFWVEELILKBPLSPFQNBKSTTHYPFWLSUYPNXODSZBKXICVOHQCDBNJYXMKKJRWUYHHJSGYNCIOTGPLLPUJVTOFVMHEWL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("AIMVWFJOCHJTXSQRTXVQEYKGUVLRYPMQODHLMIOADWOGRYUQXHKAZZLHLIZEPIIEVPNBJIGFILKSRCAOBHYXQMBFWWBRGEMODBYMYRSVCSLUAKNCXTNDOGOTADZUVJWOWTLWVPAHERRRJAEQEX");
    tmp_tmp_msg_0_0.dest_man.assign("FAUQLLZELTTNHKIZNAUJJKMXTTCVYSOVSOZAJSBPIGVBWESUVFAJDKADKPFGMERETXJXTWPGKRBFJQPWHMTGIHFTDUQSKJLDRPYGDHGMBCHLLWOUIOOUHZUCTFHACPRZJQDBFSXLYERERRCPWRGWXXZRCCEDQBUGSLVPJIYAUEXADIZIVW");
    tmp_tmp_msg_0_0.conditions.assign("IPCQYBTOTLYLYZUN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.955443677127);
    msg.setSource(6081U);
    msg.setSourceEntity(54U);
    msg.setDestination(21454U);
    msg.setDestinationEntity(134U);
    msg.command = 225U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LHZVXMRAEQPASQKYBDLKHDJWTFUNFSSAEUJQSBFKIUTRLXZCSDRFMRGRPPEOAHIZXLIAIJQZDEVHFJURCWXKNJAATNBZPDXVSQUWGOXWMMGYFZDCGYXNSTOFEYQVWTLIOLTCMWPUUNDWSOMTROVMPKFYKBZGVPHC");
    tmp_msg_0.description.assign("FQVFRWPKIXYUQNZZMTQUKCPDUTGSNHKCLOQYWLAPUEDRKELQULMXUSDOVFIBDUVFAUWWGIBMFOJIOFGOTNMMDBCITAKWPEZDMKGE");
    tmp_msg_0.vnamespace.assign("LRKVJISFJFBTQKFAOYYVSNPWJBOKCCTLZCOUGRBMHUQBEOQOAEUXOXRWYMPUNIZFWEANQTHUOPDBPJIDZEHRNMXDETISDFPZACGBRBTPOEOHSIEYKXEXIRVWYFWKALWSVDZAGCNSHLQEZKFYYNLYHPGMSXBQRLCKLJFUS");
    tmp_msg_0.start_man_id.assign("YLNTUSBXZALZMYMRYUCRODOFCIVOXSCBPEFJWWPLROUWUZBCPCBZFTWNLVLSTMBXGCVKLXTMONOUVHJGFQNDJZTWGPESNJRGSRFCHYUJBDPHFUNKQGUMACAJNXATPJIHZZYRCBXFKKJLPSNVSKWLDRPDPUGYYSXVHAXK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YGVPREXVNLKZBHMQARZLQXFUHBGVYFAPKINUBVIKYXQXKDDMQNWHRNPGGQBGEZQSZOEVYIIOELJCTEDKCUYWSWMYBKMVVDTSUCNFBH");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 62794U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.499452686275;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.99344628118;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0695934345499;
    tmp_tmp_tmp_msg_0_0_0.z_units = 77U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.890172680653;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 63U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.962625485484;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.0311224835849;
    tmp_tmp_tmp_msg_0_0_0.width = 0.476058980228;
    tmp_tmp_tmp_msg_0_0_0.length = 0.871516179806;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.0744405127152;
    tmp_tmp_tmp_msg_0_0_0.coff = 38U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 132U;
    tmp_tmp_tmp_msg_0_0_0.flags = 82U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LYSDEMKQZOGMGQBKBLWIJCPRNSZXATWNEGGTWDGTOLPEVXJKZNUVXLKGASLLXPRCCLLYQEFQJZFMVDYDFHWOISCTRFUEXTSHVTWUK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("XMZZSXOUHZKTXOKWFPXPHYVZPXMUGIYJRVNPJUFKGQYIGADGQINSNEUWAVVIA");
    tmp_tmp_tmp_msg_0_0_1.value.assign("BGTEYYPDMPAWDNVXSHEJPJTRLUXYSTOFUSBUZRHBYZADATZIINACXZQJVZEDWACOJPWFPRLMHMACWFKHTNQTROGNAEMOMXHOQRIQORKOWGOLDICILEUHMWOMWIGGOVVVKGMPACCQTPZSXJQPXQFEZLDJUUKMFBSYBHBKNLRKXSSNYVBDLIQQBNYGVNKTWFZULPVRREUYHIMBYUS");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UZETJVAZNSRJDTQEHKSJPMEREXSIBXBNNOINUDKMCSNAGFKBVTXUMMDYCQGAQGPYPKQFOLXZYPYHGBDFXBL");
    tmp_tmp_msg_0_1.dest_man.assign("BRUJBRHEPGSUHPABORNAVILT");
    tmp_tmp_msg_0_1.conditions.assign("PQLAZFPBBQMHFZGLYBCDWUTQBLNLSFTYOFHCITSWGEMDSXNOETFYZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Voltage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.707700657724;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::NavigationReset tmp_tmp_msg_0_3;
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
    msg.setTimeStamp(0.223860391323);
    msg.setSource(6727U);
    msg.setSourceEntity(178U);
    msg.setDestination(30750U);
    msg.setDestinationEntity(94U);
    msg.state = 171U;
    msg.plan_id.assign("EMFKHBKJWIGSINHVQVFPWYYICAEYPJCSRAWIDJUAQAVKYPJDIBRPOBZWVK");
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
    msg.setTimeStamp(0.195875007412);
    msg.setSource(36371U);
    msg.setSourceEntity(55U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(148U);
    msg.state = 216U;
    msg.plan_id.assign("QEZMOIQWABDLWYLLJYTFGCZITTUSSGFEDDCVVJPNUXDZHHDGCBSODDGIRMOGMHBELRFSQGPRZUSWUJEMSLOJVYVQOXBWBUWJWIXIVHWCBXFYNOFLNTRFPIDKJZKOFGITAYXSNMTULJXLBUMBVXMWGJPFKECUPESVABNRCNK");
    msg.comm_level = 99U;

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
    msg.setTimeStamp(0.181216697457);
    msg.setSource(36278U);
    msg.setSourceEntity(173U);
    msg.setDestination(33665U);
    msg.setDestinationEntity(48U);
    msg.state = 203U;
    msg.plan_id.assign("GBYCAJSCAFLIGLSAXQQKTMJADUVWVYEEZTUOGDBXAFGDRMWUEOXVQUGAOEGOUEILVBLFYRLQFHRONWTYMWJHNOUAFWKUFQIVLEJKCHGBSPHSENYZOZWFBPCPDXYJVULPPGRDXRZZAFSNVGISIXXEPWHSOQCMBRWNKBPHYNLGQRCCBIZCNYONRJYTNHQMPTDRKVJBRINTQEWAUTKCHKXJXD");
    msg.comm_level = 60U;

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
    msg.setTimeStamp(0.964442836981);
    msg.setSource(21777U);
    msg.setSourceEntity(146U);
    msg.setDestination(48693U);
    msg.setDestinationEntity(114U);
    msg.type = 139U;
    msg.op = 218U;
    msg.request_id = 64131U;
    msg.plan_id.assign("SWGTLGNNVWXHARZDNSFUVMYQJEWHEZITELBTOPJCWXBRUSMEVWPMLFJTLVOEPFORXLAORIKNDOQTRXHSYDFXCJGJTCHBRZKEENCPQSBUS");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ULBHHQBPDNITOELXOUDRFUFICZTGPKOBPUGEJUTCHAVZDUNPBQWSWFGQLTMFXLPUNMZMYFXCYTYVWDHGYYAVVHABAHTKMPKMOIAQIWQLZYWFBOEWROXYGNPFHSXKEVKTDIUFSCJXRWGJLTJSGIKMONQXEMV");
    tmp_msg_0.visibility.assign("DGYFBJBTSEIHQPLNHMFONAPOBWSONHRDCSDIEIEHESGUXGKAPFCLZYFVOZDKPYCCUCUZYKXNHLTFMAZOUEYTOVYMBSHBEYYZZFJPNZFWUWKSMQYWJURLGAKFPTIPGGDCLTZOSOQWCRJXLAATRGIIDVRTQKAOXJAIYWZWHUMJPSIGBEXEXQGEGQJVQV");
    tmp_msg_0.scope.assign("JMFEQOPGOHVFKMFIOWROXJJZXUWAHIRXKGLDWINEJZHLPJXSXYVBVQNDSVXPKSOKZZBJFBUYLGZMYLFZBHOVFACDCQRCPINHGBBGDZXHAKTNLSEBEUSLMDDGEPVJFDYNKDDOTUNCRABCATSLTBXRDPYNUIJHHQKWQUEEIVRMPQPMYOWBEYMWQHGMUANOJPROMRZREAGSQZTYMCWTIXLIWFATKUGSUNCSLIYWVVTCTLA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFUZKMDYSBNYOGNNHFSBNIMWEVAPFTHXITOJGLUPTPQGTSYFAMYVUMAAAXNJRSCLUQZEJSKZHAQDECSLGOVMHXIZWQPWLLCOTYOAUQLRKMGPKEUUBKDVYBDCATZMWXHFGRIVWLWVDYIBZRIFPYKREAWOCHFNJJBEQLKENHDBNMVXMQZJDHGXUXQRENIFRTKHYVPWJCUOGISPIRBJPTBCXEXSW");

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
    msg.setTimeStamp(0.638428158912);
    msg.setSource(19080U);
    msg.setSourceEntity(37U);
    msg.setDestination(42117U);
    msg.setDestinationEntity(25U);
    msg.type = 197U;
    msg.op = 151U;
    msg.request_id = 41851U;
    msg.plan_id.assign("OTSJLKGCUZVFTVSSROVERDFOMZK");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 110U;
    tmp_msg_0.value = 25U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YIAQQVEGULFCVBWJHRIPZTVZYZQIEHNKNWNECHHCPZLHSFEDSRMPAKMWVJVFKTFOUWC");

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
    msg.setTimeStamp(0.86107258391);
    msg.setSource(44403U);
    msg.setSourceEntity(17U);
    msg.setDestination(46196U);
    msg.setDestinationEntity(34U);
    msg.type = 242U;
    msg.op = 211U;
    msg.request_id = 3321U;
    msg.plan_id.assign("IRRBBEDBHZTYNIQVLNJHYSTMLSNUZYBDGPOCFVIZDPWSGPODSQYZOBZFEZADQMIDULFRJKMPTMEYCRANKLGSOKEVWKULCJLCJIJJWHVFTUSUYRTLECQCXAQXOTCXWRDXMJQTZIYZPJWPPJEXFBFZEGKEMHSUCPQFDVSMRBAXIHHMRVSILQVZNGCNFWOKEQOINYLKUCWXGNAOFTNXKVNHUSDPGHKADTYMOWWKBGHPYOATGVERABRUQFBIMAVAJW");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 80U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.505935626908;
    tmp_tmp_msg_0_0.y = 0.983891690794;
    tmp_tmp_msg_0_0.z = 0.320206373794;
    tmp_tmp_msg_0_0.phi = 0.28039041898;
    tmp_tmp_msg_0_0.theta = 0.567419516132;
    tmp_tmp_msg_0_0.psi = 0.543168968733;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.53876005693;
    tmp_tmp_msg_0_1.beam_height = 0.238174246376;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.627949726138;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCKPGIQJZKRHCWAEEYMISDAELNPXVDSSJIETTAIXVIPPGCT");

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
    msg.setTimeStamp(0.156127920734);
    msg.setSource(33963U);
    msg.setSourceEntity(92U);
    msg.setDestination(30402U);
    msg.setDestinationEntity(71U);
    msg.plan_count = 9565U;
    msg.plan_size = 721768370U;
    msg.change_time = 0.667227009927;
    msg.change_sid = 45276U;
    msg.change_sname.assign("ANJAQDPZOFOLENBZJMVDMIYIXLKQKOPYHJTUMIWOXBNXKRTSJYNHMHEKPVNMIAWPOFCJNDSJPBZRNBOSLISLKWKXWZ");
    const char tmp_msg_0[] = {-30, 59, 94, 89, 83, 107, -24, 76, -116, 123, -57, -28, -53, -15, -122, -24, 82, -125, 112, -1, 50, -52, -123, -104, -51, -47, 59, -17, 63, 35, 56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("STMBWZAZBXUYRMTYYLQXSNTYFNGLGHHFQXJLEOELUBPKCXTNOUREAYPSLCVKQWHXHXLFJOKFFMDSRRROREDDJVKBUEQMQGZARBDIZNNTGSOFPDTZMUCZIVUUKCWGJPMINAIJOHUVWPPJPQGYZDJZVGDVLTNBBRSXQCYFPWSROQNBKIIMIFQKHCFLABSJHAKETMWEWOXYXSDAVXPBOGAMZMIDCUHRQINLVETGACCHZDGYKEWKVY");
    tmp_msg_1.plan_size = 36600U;
    tmp_msg_1.change_time = 0.56556790718;
    tmp_msg_1.change_sid = 29549U;
    tmp_msg_1.change_sname.assign("PBWSACRLVPXUHNGAVXWBHPMMOFHIJXTKTWABUSIZBEKIYCEGXTGSNVAMAQBYSGJLQRSECUCMEHXCLUD");
    const char tmp_tmp_msg_1_0[] = {-23, 59, -75, -103, -128, 58, -42, 36, 1, -73, 48, 85, 55, 108, 104, -103, 65, -72, -100, -93, 13, -76, -103, 41, -113, 7, 110};
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
    msg.setTimeStamp(0.629250897368);
    msg.setSource(35694U);
    msg.setSourceEntity(157U);
    msg.setDestination(1848U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 527U;
    msg.plan_size = 3501131975U;
    msg.change_time = 0.248714181235;
    msg.change_sid = 13118U;
    msg.change_sname.assign("IUYUAGAJIBYYCSIOJLKCBTWEJYXQOUIKFHBSZGPZXJZRDQNOANFRTLVMXWVIDIRCHCASKOPFBKJWRWMETFYUONK");
    const char tmp_msg_0[] = {121, -24, 75, 98, 25, 65, 32, 15, -95, -92, 109, -58, -115, -49, -72, -8, -85, 123, 10, -91, 32, -42, -4, -76, 86, 44, -11, -27, -91, -70, 81, 109, -63, 52, 100, 98, 93, -12, 123, 119, 75, 114, 7, 91, 13, 4, -72, -9, -58, -8};
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
    msg.setTimeStamp(0.812028870331);
    msg.setSource(48561U);
    msg.setSourceEntity(126U);
    msg.setDestination(38292U);
    msg.setDestinationEntity(43U);
    msg.plan_count = 44922U;
    msg.plan_size = 65265691U;
    msg.change_time = 0.162408511983;
    msg.change_sid = 27006U;
    msg.change_sname.assign("RACZHUCXHWRKESWQYBHRZYSSHPYRIYDKGVJBVVOIBGINBVMDLESWODMUMVZBONCSJPQDOIXZNCDHBKCFBRIDJGJXTFGQMYUPXFLDMXXACUWGLZITIMNLTNEUJAGUXVHWKIEKZGLAOQFTELMJKPAPFGYSKAEBOU");
    const char tmp_msg_0[] = {-105, -79, 111, -102, -98, -76, 62, -79, -116, -113, 95, -17, -34, -16, -104, -35, -10, 30, 66, -34, 103, 24, -84, 108, 80, 41, -81, -44, 93, 70, -46, -104, 112, -68, -49, -106, -75, 34, 19};
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
    msg.setTimeStamp(0.582632374496);
    msg.setSource(40502U);
    msg.setSourceEntity(148U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("DYVUTRSZAIGFRCHUFZEGWGRTGGVPSZYSRHXLDVFCHCQZLUAYMETRAUCYUNBMIHOJWKDKFMZDVPOKCOLTSDYJGFOLDIYKPATHJMKTXBWKONJFBYNHEMEONUJGJNLVEODAIAKMXTOXTSPNQNKODJDIYRCRPUAFEESXQKCDZ");
    msg.plan_size = 16669U;
    msg.change_time = 0.153057587668;
    msg.change_sid = 5816U;
    msg.change_sname.assign("NPPJEJRUFNJZQHWPGTFHTEDVXTQCLGSODULYIVPDCKBWVLMZOJHPFOIMJGHZIFZCBOB");
    const char tmp_msg_0[] = {67, 78, 2, -84, 22, -115, 36, -26, 64, 77, 84, 80, 114, -12, 94, 53, 35, 81, -72, 24, -79, 92, -87, 75, -120, 68, -103, 41, -112, 4, 115, 92, -35, -104, -25, -5, 119, 40, -109, 94, 70, -46, -58, 59, -14, 72, 50, -91, -106, 36, -29, -10, -79, -59, 63, 28, -125, -107, 87, 31, -2, 34, -60, 4, -73, -36, 58, 49, -42, 8, 70, 40, 67, -38, 96, -77, -49, 87, -37, -12, -44, 18, 119, 89, 15, 84, -30, 18, 49, 0, 84, -35, 112, 121, 64, 100, -14, 43, -92, -81, 102, -43, 87, -62, 30, -74, -109, 23, -28, -16, 54, 96, -56, -77, 5, -20, -119, 39, 87, 106, -18, 50, -79, -6, -36, 63, 75, 29, 59, 39, 60, -85, 9, 109, 93, -92, 47, -107, -78, 53, 40, 40, 98, -76, 119, -83, -84, -44, 114, 32, 4, 85, 92, 82, -83, -92, 121, 11, 86, -39, 98, 15, -80, -101, 102, -38, -112, -55, -76, -123, 6, 24, -78, 121, 111, 67};
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
    msg.setTimeStamp(0.718729945821);
    msg.setSource(6341U);
    msg.setSourceEntity(195U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("FOFYOUUQFCIRRVZELXQIRJEKPZGRJGXXYHNHXUUKVEPMRTKHKJAXBEIODQOJIDTTPXEAWBGTCIALYJLSAOSACNUDNCQQYQVCWBDUWCJBIANFQPLTBWVVEYDSNKZARTGMMDLTGVWHMECCENLRAYWGRJCRWQSHKKZMWBZWMOLZJFSIMFKSLISATNLHDMIXH");
    msg.plan_size = 5021U;
    msg.change_time = 0.109750543222;
    msg.change_sid = 32219U;
    msg.change_sname.assign("SNLPSCFZUNRDILYTFGDAYVWFETWXYXWMKEQBWANKVSYAQIPORGUQRBDJEIKITQKAZNGEVQRWLFEJJJFDVWSGKMFXHBPCWFIFLLGUMTPHXTKUMZRDHKXHBYHCOZOKMLCABPA");
    const char tmp_msg_0[] = {9, -2, 3, 76, 106, -34, 48, 83, 43, -17, -87, 102, -47, 87, -111, 59, -128, 47, 15, 24, 51, 38, -85, -3, -14, 40, -59, 17, 7, 75, 55, -39, -11, -55, 4, -123, -102, 81, 23, 114, -39, -75, -81, -44, 45, -109, 2, 19, 77, -77, -118, -77, 67, -58, -84, -74, -114, -26, -111, -111, 121, 113, -116};
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
    msg.setTimeStamp(0.732310078834);
    msg.setSource(53260U);
    msg.setSourceEntity(155U);
    msg.setDestination(38083U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("YQFZPOJKNSFZYTEDRLKXWAJHCLEDYDZHDLDGQIYIPGBIAECRPHDLLFTDNXVZQMKAXGORDKKIOZSUWRQHIPCJHRQIVCFWLLSIYOXOUZNESJHYGENNSQCSZF");
    msg.plan_size = 30U;
    msg.change_time = 0.28714327888;
    msg.change_sid = 56360U;
    msg.change_sname.assign("JBXZQBHZXFXINIAPKXOZBWCHEAAMTPLYTELDVIGZRIEBXFGHUJXYWCSNABLGSLFRMSINAUHWBMYDWURECOHSBVPSTQIOQAFWTUCDHSUWUWZLNRKJOMHRGLQKSUTZVJ");
    const char tmp_msg_0[] = {111, 87, 117, 101, -125, -88, 91, 60, -11, -2, 78, 75, 85, -32, -77, -117, 8, 73, -108, 73, -96, -26, 29, 73, 91, 14, -50, 27, -124, -15, 28, 106, -77, 52, 125, -104, -13, -36, -8, -68, 73, -18, -14, -49, 94, 31, 8, -52, 26, 22, 73, 55, -99, -108, 122, -87, 66, 61, 3, -74, -63, -86, 41, -14, -108, -24, 6, 34, -72, 25, 92, 17, 121, -10, -112, -103, -83, 67, -17, 94, 75, 38, -117, 46, -96, 8, 4, -111, 35, 87, -53, -26, 99, -73, -35, -14, -23, -90, 58, 85, -52, -43, -117, -70, -88, -128, 111, 121, 6, -123, 31, 119, -58, 89, 33, 90, 15, 84, -119, -121, -9, -96, -47, 112, -46, 31, -80, 73, -32, 15, 68, -36, -94, 24, 77, 117, -105, -121, -22, 118, 68, 60, 122, -68, -83, 81, -124, 76, -128, -88, -29, 34, -31, 80, -50, -1, 110, 63, -11, -109, 59, 77, -24, 81, -81, -105, -66, 117, 18, -116, -118, -29, 17, -34, 46, -24, 47, -39, -5, -78, 64, 96, -122, 103, 69, 79, -95, 75, -108, 83, -69, -75, 85, 48, 16, -77, 112, -125, 81, 78, 124, -60, -23, 79, -91, 30, -83, 118, 4, 45, 16, -99, -128, 89, -118, -28, 41, 40, -84, 63, -7};
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
    msg.setTimeStamp(0.0614573832125);
    msg.setSource(11578U);
    msg.setSourceEntity(172U);
    msg.setDestination(33224U);
    msg.setDestinationEntity(109U);
    msg.type = 164U;
    msg.op = 62U;
    msg.request_id = 17752U;
    msg.plan_id.assign("HIKDARJEZSHVVNEICYEEJDWBLEYBBFGRWKMGMEAWMYQCNRXJJFAAVDTUYWTQRNXZLJMOPZVFKSBPRXOWSWTLUPAWMIGJDBFPLFJXEDYOEVLKUOGANOGSHIFQHYTYLGSRSMQSROCKHJBPVUTRYZJNSQITUUCYRXIOCHTCAVPHZNPGNNOPCTBKZOKMQZFYLTMHMUSAUIGSILZFVIFBALPKXBQCTXJXDLEHFKXVDWNODHDZ");
    msg.flags = 60248U;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("PXGTMLSGLLMPXEVTSKGDNTEXAPUHZBCYJDPWZOYUDEOIXHBWFBZQDZOGJONBYASCJIVGNHLBKLEHXWPPCSUXETJEQUGYNJGDVUMRGDUPKTRKMLHKFRNUYSKOOQSBZTRYIAWRCXMLFGZDQJEVSA");
    tmp_msg_0.sensor_class.assign("WRRFAQBCZHSWRWFRYVRGEJLLYKHXXJTVRBKLOKUMQXPTFUKLRSKAZBAPHQBBCUQNUGJMDELIFAXNKKQZNFZODCVWZLNNYTNHMECJDWSPSKOMPAEINRZJPYLTDNDJXZEGUDVMADOGFWEHYHYOHSWWHQPEAVLNQWSJRYVSIVGYATTGMEYVAHIIQFEIFBGRMQXPTTIPEMBSIOZCMJPJCCLMOCZDXVWUQIUCLTKUBUOOBDXYGZN");
    tmp_msg_0.lat = 0.752196650125;
    tmp_msg_0.lon = 0.0309957567016;
    tmp_msg_0.alt = 0.0135350087048;
    tmp_msg_0.heading = 0.363968612256;
    tmp_msg_0.data.assign("SKBXUJMHLQMAJDQMKYGWBTZFCMDLFXUILHJRDXQNFQHBYWKGVPKGADLRSZZGKCIJYURISZOXNKAMUERBPFCYHSUEDQZPQCPDJCUFNTOODWDVXUIGHGECRAPSCNNVPLFBOWNXRISJRUYDWETHEYSZVGTUPRIEUXKOAKGLYRPL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KDTADXAVGLHAMCUXZSYDSHEJQJQXTDMWWPNXRBKCABODTDRACENUXVUKKCOCBSEZIWCGJCBYTLKHLIICUPVSXRUFVOIGHWZPXMOXYQTJFEYNLHNLTNGLTRYNYWVZFRIWALOPKEVEQTJZJHJZEIMPVRBKGNUGDGQSICRVBWLZGAYEV");

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
    msg.setTimeStamp(0.407347753297);
    msg.setSource(13240U);
    msg.setSourceEntity(36U);
    msg.setDestination(49039U);
    msg.setDestinationEntity(153U);
    msg.type = 90U;
    msg.op = 95U;
    msg.request_id = 2408U;
    msg.plan_id.assign("UZFZKHEGBHKLWMFFPSDOVQFFIXJSET");
    msg.flags = 18347U;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.491179508117;
    tmp_msg_0.m = 0.644604197809;
    tmp_msg_0.n = 0.696408624104;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ETMCMFREZRTCARLDTGVEDOAQBSFJJWMPOPNFYCUORIUGSGBDXPJRCNDAXVSNPMYBLMXFGI");

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
    msg.setTimeStamp(0.482696022799);
    msg.setSource(45011U);
    msg.setSourceEntity(135U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(178U);
    msg.type = 90U;
    msg.op = 139U;
    msg.request_id = 35079U;
    msg.plan_id.assign("MTRFHBTZOTTEBALPZDYXLXRIZRKSBENJYZKDFEVOCUICBELWVNEOHQ");
    msg.flags = 38340U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 150U;
    tmp_msg_0.text.assign("BFLMIBUGFMFEVUUMOZHAYPDCDLLAJMNYAARMDHGBKGZXSNAVJFRVDLJGMAAUTBCSNKHZKRZTBWNWNNIGMRXCZBSUODBVBKOTHRXKMZOYTEDCDFRWUUHPNDZLJFLEIPMQZOVBYSZEYGJJAD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AYSTYEEJIKZDGLJKVDZBVDJQDAXNWMNYTBQXBVCWLVQOQPRSNHKGHNEHPOLKGSRNSKLEMLIXYPYVBUFRCBTRCFIIYQDX");

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
    msg.setTimeStamp(0.785108119489);
    msg.setSource(2753U);
    msg.setSourceEntity(115U);
    msg.setDestination(33503U);
    msg.setDestinationEntity(170U);
    msg.state = 70U;
    msg.plan_id.assign("XEAEFOATABCOMJIKWNKRUCHVJHORKQBFFNCTMZBSVTNYFUTVSYEIRGXZMZYQJ");
    msg.plan_eta = -1968175430;
    msg.plan_progress = 0.270107637437;
    msg.man_id.assign("MTPGXLUZYABENYMPQHVLHGOXWRJQLHOFLSDHRMEORMUKKZAKKYKQDHJCBVHJZGXOUZTJWYTAMGSHSDEUXSVTNCAFLCENIMDXAMICBECSSCFDSZVIGNOIQWPPQOPDFYEZAXXVPKRRRJLPTFJIWIWWWHGMYAQVEDEKZNQQLXN");
    msg.man_type = 1252U;
    msg.man_eta = 698688364;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.104197580749);
    msg.setSource(26041U);
    msg.setSourceEntity(29U);
    msg.setDestination(9455U);
    msg.setDestinationEntity(11U);
    msg.state = 80U;
    msg.plan_id.assign("CJMFIDWEJFSQNWADYHYHGCLFIEEBUTNEFMVWLIQGFHZZBKKIPUSMJNCLPQXZLBODFIYNHPUPBAVXAZSGANDAOUXHRUSORYCPMKQEKORKOTVWLJSTOFHUPCMWTVYBYJWC");
    msg.plan_eta = 838147079;
    msg.plan_progress = 0.162254919504;
    msg.man_id.assign("FWJIRZLEGYECOIWOPPWFKAFIICPTMHALFOLGELKGCNOAGFAJJZBXZPRZSMWTHSDAPENVFTKIIXFUGM");
    msg.man_type = 61285U;
    msg.man_eta = 310541437;
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
    msg.setTimeStamp(0.366393963503);
    msg.setSource(32600U);
    msg.setSourceEntity(43U);
    msg.setDestination(765U);
    msg.setDestinationEntity(84U);
    msg.state = 63U;
    msg.plan_id.assign("KSDUNBTWBPWWKHAJFSKAKPRNTIMIQKFKONXSKQQDBWLBHLTNTDPYZTQVQLIPXBPLKCEXMFTLPPVZVSJUCJIQIOTRSFHOHNVGCCHHQSONUXHAZRFRWWYXQYVGUYREMIYCYXHZAJXV");
    msg.plan_eta = -1241836797;
    msg.plan_progress = 0.496321890991;
    msg.man_id.assign("QGQOJWDRHUDDRKXNEAICHWLJKYAZZYMHHPZAVJFRBCJCFECHAULXGCVJGVBZYOTZQJTDSNXULCMTHFUDQUAAEBDGVPMOSYBTHOKADKWPFAYBSMBSWQPVSKFQEPUISHEJLGDRNJIXBLGZHWTCIQEPUTKIFNBPQXPPEBIGMRUDXJENYFVLNLBAEPQRFMTYZRTTNMKSUNZXGZKLO");
    msg.man_type = 10113U;
    msg.man_eta = -776648199;
    msg.last_outcome = 4U;

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
    msg.setTimeStamp(0.299724267993);
    msg.setSource(17840U);
    msg.setSourceEntity(189U);
    msg.setDestination(57437U);
    msg.setDestinationEntity(219U);
    msg.name.assign("JNAIOKXGGWZUISTLPKPBXOFCCOQEOVLLTKJOWHPQDMLSQWEHKPTWYIGCGDDIQLLANLDSFPIUZRUSBPWCQFFTBHNJAFNJTVZJBRBMVRRBZUEXWJRJEYMZHCQVVMWPNXSYMDFVPSXLWVGEMIYGOOHVIPTXJRBUCAOIFZEQBKHXUUFVIWUZEYHZKTGHTGUQYCAIQF");
    msg.value.assign("ARJBPWKQSHK");
    msg.type = 96U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.225912372193);
    msg.setSource(12146U);
    msg.setSourceEntity(224U);
    msg.setDestination(29773U);
    msg.setDestinationEntity(202U);
    msg.name.assign("THGOYUIRWETJAODOYQMHCIQEFCGPJPQDMVOOVOUGKCYTPBNEVQYHPEMHEKCBRYXJXMVBFUSQZJXEKINVINLUYFHLDZGMRWRCUPXFNBASONXTADYRUFRNBSKMGFQVEKWLNAECIASTVAFTLWGQKDIYLKXRFCJQFHXISZWPJFBCHUMJYAOJXWDZGOBJRPUSSZMMIXWZLSZKXPTPAADWITLQKY");
    msg.value.assign("OTZRUEWGXGJOIKYAGVOENZJANEDTCERMLKHDTGRGXT");
    msg.type = 252U;
    msg.access = 48U;

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
    msg.setTimeStamp(0.832211617419);
    msg.setSource(29769U);
    msg.setSourceEntity(162U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(51U);
    msg.name.assign("CDVWXLVKJVAJWTHRZMGYYERATOPDGFGPULWHVIMXJYCXTTXQSKTZIKINHARMKSVNMLCGOQBGUDQCMBPFURZHWIZYVOLLSBBBJVJUKSLNKDFUGHJFZHECANOUBRDNELNEYSQKUEENRAWZTZFYAGEOFJVGAFSJSWFOFVRQNZWJVAHTBLUERKPHCXDK");
    msg.value.assign("ULJBEFLGSTPLWZQDSGIBTSQRJWPJPXMBQMJEAYYITCXVZTKERRWLTYIRMENQLIYAOCQSFOOCUYDYXXPWBOPZEVZWDISDPZHAKSKMCVXLHDMNQKPMBUKPDZXFHZHIFNMHWQXODAUGOJMVWBOFRWGZASEUIEUGWELCNHGPYTCJSYZKKCZUB");
    msg.type = 49U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.297130769051);
    msg.setSource(24632U);
    msg.setSourceEntity(167U);
    msg.setDestination(51447U);
    msg.setDestinationEntity(80U);
    msg.cmd = 59U;
    msg.op = 163U;
    msg.plan_id.assign("ZUGIDQRCBQPXKHGYJJAIZEMFJKJHWLOZADUBLDJQPVVMYJDFDQOBSLDLCTVHXSFPMRAIGVXBZAGFEZKLNHHJTTHCZFJSODHGSCWRQRTNQNNTOYKNUKPYIARFVMEKLJPOSRZCKTCAWICUDIXPBWAOXCNYYZSWBXOWNXFFQRKUVHMGFPZSTZUIMQVKPIWMTURTOGMWBGDOMSX");
    msg.params.assign("EGOSIWXPSFNFKOOZVLMNMCCAJIGLTYIOKYTEZUVTKTXJHROIDMXSZLUAHOXRSNEZXAMHRJAFEDCQHSKYARFPPGSUAYIMTVWQWAGCECXIUEGWBBKBDMSPQQNECBZNUZXJEAJRVFMURPLXWTVFVWEHTQCNADBWZOYGMZTAVQRTLCFOLCJYVNHZUFJEQUNHBKKOWKJRDZPBSYDKVVHXMQGIBLQUCNDNBRTKXDIYJYJQHPMFWDYSSFIPLLG");

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
    msg.setTimeStamp(0.968524290214);
    msg.setSource(2706U);
    msg.setSourceEntity(186U);
    msg.setDestination(62449U);
    msg.setDestinationEntity(110U);
    msg.cmd = 111U;
    msg.op = 152U;
    msg.plan_id.assign("OGKDGMBZOKPKEPRVMILCRHEPKFIAUBSEIHTJENMDSNUCYXBLWJJKISHQTXYFBNPOKYJZYAPTLMJHAYVLIUFECNWZXDSHTGUXGFRNOXXZIDWJCVGTVNGMEOQGQSFJCSROSJZALWXUKACFROULWPWCMQZMXAGFNBVXYDFUNIBCHD");
    msg.params.assign("INWJPJPOEVJNAOTNNEHUXIGUXSLPWTSGLVEDSDFTUERKGXESCEXDOJSOEYLAYYHHQOLPBKZOFOLZSDSLBTCYBOJIMGMJQR");

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
    msg.setTimeStamp(0.468835733199);
    msg.setSource(4940U);
    msg.setSourceEntity(114U);
    msg.setDestination(18506U);
    msg.setDestinationEntity(254U);
    msg.cmd = 240U;
    msg.op = 139U;
    msg.plan_id.assign("MPKOGONZHRYNJTALOOLTZRGRBCHXISXYLOOLIQRHNKVJLXVCFVGRYWUXUWZNJYXLVFHEGKHUQPWQRYIOPBWOZSCRCBMDXGEPYLMMSTHAXFDBLPZQOPVDHAMLYIIMKCEUMTJUGOQNAFLDISXETPCCAFGSJQGTJTWBQFDNADUBWFGDZAQKSFIZ");
    msg.params.assign("GGVTONTBLEPDFFYZUSIKXAMPSWEDENHFKZIQROBQDOSCMGDCRPDIIBRSAWJDYPHRHVIXJZIAVDVFATPCLGVAFTIOHSQPYLJWKQKUZKXFKXYIYREYAFALTEJWGLSJIJCRSZQE");

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
    msg.setTimeStamp(0.505403446922);
    msg.setSource(58770U);
    msg.setSourceEntity(84U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("RLRXQNHFFKQEMYBMIPNOETVTACMVAZYJCTHBWXGSXGLTCXPUHBJPDDLTHQAKUVGXQIIQHKGONBQGKSGSNVSXFCLRKPMADBPZQKWXHCVIERYKWSFUFRBONBEQUCJRWOZBZSGWUJOVDITGFAJYPNTCAIMFNIEHXOUFJBEWHIJADWKSANWLPRHZOBXMQNJDVCIDZYVZFHLSPVLGFEECWRLUODDJKNPQTESMJYUSU");
    msg.op = 216U;
    msg.lat = 0.67955455368;
    msg.lon = 0.571285115463;
    msg.height = 0.897407440178;
    msg.x = 0.504660836974;
    msg.y = 0.892554951116;
    msg.z = 0.149394602859;
    msg.phi = 0.0761108288374;
    msg.theta = 0.86587568582;
    msg.psi = 0.0862049839815;
    msg.vx = 0.562492366325;
    msg.vy = 0.0106990863495;
    msg.vz = 0.702587681221;
    msg.p = 0.639971601864;
    msg.q = 0.521869670772;
    msg.r = 0.538978136505;
    msg.svx = 0.340735398098;
    msg.svy = 0.801849916491;
    msg.svz = 0.512498794534;

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
    msg.setTimeStamp(0.837673045399);
    msg.setSource(13070U);
    msg.setSourceEntity(226U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("WEDTMTXAMOTOHLEVNTPRVRTFKDYOWINPGWZHGGQTAKLSEQPCRRAYUUVCRFXNOBKYGASVCHAKVUVGYIWYHVLLSVQXFOWOTWSUIUBYFDEKNALIKZKTZGHXXCFYZBRJUMRMSNXGEPIGSNPPKUADPCJAAXIDEXEBHQKWMCFEHTSDLWCFHZHIPIDMJBYZUBLBMPJYORKUCJUJEWFGMCHFJJZOQQFQWISTNBNJVDRBXRQOXNGLDLIZ");
    msg.op = 189U;
    msg.lat = 0.162665286177;
    msg.lon = 0.586065570511;
    msg.height = 0.198680910028;
    msg.x = 0.249789660362;
    msg.y = 0.742885983672;
    msg.z = 0.71087466204;
    msg.phi = 0.371704672795;
    msg.theta = 0.55235942023;
    msg.psi = 0.45499004186;
    msg.vx = 0.313492270252;
    msg.vy = 0.341113297456;
    msg.vz = 0.831784822378;
    msg.p = 0.261550984239;
    msg.q = 0.552489965743;
    msg.r = 0.0346210328576;
    msg.svx = 0.451838172084;
    msg.svy = 0.309811417999;
    msg.svz = 0.548596036759;

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
    msg.setTimeStamp(0.497048799101);
    msg.setSource(47317U);
    msg.setSourceEntity(252U);
    msg.setDestination(23708U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("GSROGUWVQBJPSJAUGDIJNMRFEAZSVVWCEDCZZJ");
    msg.op = 156U;
    msg.lat = 0.207540850849;
    msg.lon = 0.919940294964;
    msg.height = 0.582292361929;
    msg.x = 0.872393900381;
    msg.y = 0.179101862828;
    msg.z = 0.954274024492;
    msg.phi = 0.313088182184;
    msg.theta = 0.103786339153;
    msg.psi = 0.919611642461;
    msg.vx = 0.355205563112;
    msg.vy = 0.16216376576;
    msg.vz = 0.991525591914;
    msg.p = 0.448088358108;
    msg.q = 0.00414464531143;
    msg.r = 0.702374443744;
    msg.svx = 0.251406723776;
    msg.svy = 0.0971215247907;
    msg.svz = 0.46913383407;

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
    msg.setTimeStamp(0.738864559551);
    msg.setSource(57206U);
    msg.setSourceEntity(9U);
    msg.setDestination(26907U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.291047148502;
    msg.lon = 0.608543617048;
    msg.depth = 0.0805767246618;
    msg.roll = 0.93945584258;
    msg.pitch = 0.749339622634;
    msg.yaw = 0.853130739219;
    msg.rcp_time = 0.790352830457;
    msg.sid.assign("PHHYUYEHZXFKCWIFOODPN");
    msg.s_type = 22U;

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
    msg.setTimeStamp(0.307659497391);
    msg.setSource(28070U);
    msg.setSourceEntity(67U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.203976727349;
    msg.lon = 0.0511686251916;
    msg.depth = 0.856255778504;
    msg.roll = 0.335334306084;
    msg.pitch = 0.0561892977351;
    msg.yaw = 0.448158278446;
    msg.rcp_time = 0.884130305026;
    msg.sid.assign("OJAMPODRISVZHEWNIUZXLNIVEDPMFLFJSYZBVHQUVOCGRHDLUZGGCRJUMDSSESCMHEQLZKODYRPWTVLHBPYPESCRWAXQBUBAYTTXRYWQNLQFKAOMDTUQJJZKNGMHFOEOGPKKYRRMXKTGCDFTGUHIUEBCOQWPIARVXLHXPITCLJWV");
    msg.s_type = 62U;

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
    msg.setTimeStamp(0.0660463291288);
    msg.setSource(18416U);
    msg.setSourceEntity(71U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.144868718853;
    msg.lon = 0.890376307793;
    msg.depth = 0.556901311086;
    msg.roll = 0.732407464968;
    msg.pitch = 0.766756536778;
    msg.yaw = 0.651672864478;
    msg.rcp_time = 0.846525839724;
    msg.sid.assign("OTBFMPIFSIJYWAFORHHEOVCGJMPXRLKZZZMBLDOIQDZNVMLYAHQDKIVLBRVXALHQWRYYXEPUGZYTECBDNPXOEEKAYTMYBADUIFSWWTCCJRVKPOSCWEPPGKCPJANVJYMMKNSRJEQHXAKMXHTIREURCUJXESNMNIFTURFVQIBDQD");
    msg.s_type = 215U;

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
    msg.setTimeStamp(0.122223269429);
    msg.setSource(14424U);
    msg.setSourceEntity(192U);
    msg.setDestination(51692U);
    msg.setDestinationEntity(144U);
    msg.id.assign("OIHCQYCGNTDWUVKOFJPTUQDSPZSATYBYPXWFJXPKCKJPGFEVWENPEKTIDKLRGTJQLLQETWCDERZJXNIJSCYAOBMQCOWWPZBA");
    msg.sensor_class.assign("TYDKIDFCKZMFWBHAHRVSXTQGYXJHGOUKZELYXFRICNCNQRIFVQSVMAEOCFJIBXPQMQORJUYMOMVRAZLPDDTZDKFEMWJWXVEUONDLSYZSWTARJB");
    msg.lat = 0.998936902099;
    msg.lon = 0.0181007862553;
    msg.alt = 0.739188098033;
    msg.heading = 0.804535875245;
    msg.data.assign("IIXBDWKLYTXOFPGGEVOONKBAVAWNIEVFCQZTYUHSBULNEHSWQGSEOQNZHVFAKUMRQQIFQPWTEXZREJOKTBFLAZJKHKDPCRSKFHCJDIRMFCZHHYULDJVCBZYLTBHHRULZPCNPFOUJKROMUYOTSUWQIJVTXMHXIPBFN");

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
    msg.setTimeStamp(0.0924235926851);
    msg.setSource(42313U);
    msg.setSourceEntity(38U);
    msg.setDestination(25081U);
    msg.setDestinationEntity(249U);
    msg.id.assign("UNHVTZLFXUAVVIMDIUHZAIXMTMQAJNCUFUWOJWNYJZJVVFKRNMWOTVNPYEFTQOMULELAFOLJEYOYDGSSQZEIKYYWZACGPINOMZQGHVGHZPCFBPVGSDBQNYDWYRAXJVSNFPKXLWYSTBOIRBOULCCEGREXHQLOBJLRRQLPUIHFUJDWSNDKWXBCTGKAVCJAMSZXWTGTDKGKPDDBQMRAQTSEHPFOHEDXQFIAKLEZKXICHSZHEICBPGKRP");
    msg.sensor_class.assign("DXMCEGUOWTNHFECNHJSLDNHBMXZDVPRMVZNAMYRLSZWTPORPFXPEGWIJWBSQOXKQCTAVGYTWZSQGUQXTLKNCBNURRLDVBUOSHOJRPTKMEFXVGEPKFSVHKCCFXCZAFTQLEEIBZFOKADBIPGXXYJNQEVTEPYMBYBUAMASJFWHKNXOWZYUMVVIIHSJRSGOWAZGLIZURTMIGUIHBDJLUCHBQSWJVJHNNDYALLARCIFOKUOIYMA");
    msg.lat = 0.565659792738;
    msg.lon = 0.0681477312505;
    msg.alt = 0.417883162311;
    msg.heading = 0.471137055339;
    msg.data.assign("ADAUJBSOUOXHKFKKEXBPEDLVOZGWQHDMFAMVVIDSFAHMZUQZNHKVYLZZIFYICSQPDOJPGMYNBIFNVBEFQMLUVPTOAXPEVQPUENWRTNQCTLWKJSMEVPUXQVSCHLDXSJDHMFWNOZTZBGIDXSYKKMGAKBNIC");

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
    msg.setTimeStamp(0.0896490768839);
    msg.setSource(56692U);
    msg.setSourceEntity(71U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(36U);
    msg.id.assign("CIHUNXPQHQLRVUKYKMVHUENSTCSYZSOCYQHGWVNSCDTUFDCBLLARBPPPTZFVAGWNESWGZZSMQMZTMFUUTR");
    msg.sensor_class.assign("KMDOFRNYUBQIILULQIXIIYUNCANBJFUVQEGUWMQEWXZGOLSFVJCTBHEQBANPXZKRVYLGRLWJBHRMJABDKRTTNMZDFAJPZLCVMWNMGW");
    msg.lat = 0.650421092339;
    msg.lon = 0.913493755818;
    msg.alt = 0.709347102072;
    msg.heading = 0.864622190066;
    msg.data.assign("AWDUNJEEVKAGBGZLHQYJWURBEQRECXMROWYQXMSVFUEXHEXSFMIHUJZWPZPKPDHLZBCGJGGVLUWBJQOJIFFKCCLOQWOEFACETCXKPSATKFMVLXGQOLUTSJXHIOAIBVEBSTNSMNGOCUTVLKYARHDJMZYTIJTBOLZDDSXNBPDURNETZJHXYMWDIQIANDYWOGILBBRTA");

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
    msg.setTimeStamp(0.430191919822);
    msg.setSource(17818U);
    msg.setSourceEntity(138U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(125U);
    msg.id.assign("CSBQEFJXCSBQMPMIGJNBPWXCMKUSMRCONXGDOAKDXDXUPKXYVNDWYKNLGADABQPYIEYRQKNRIIFZLOOEFRLFPXTZKUUHGZDQHOAYLHHBEUWZYHUOPURFJZPQGGDFSIHEJEQKWSHARVFPCWGHRXTYBTNWZINCTGPSLCNXUUDVWZLTMTF");

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
    msg.setTimeStamp(0.255555417889);
    msg.setSource(51246U);
    msg.setSourceEntity(138U);
    msg.setDestination(46538U);
    msg.setDestinationEntity(179U);
    msg.id.assign("LTKZAOFZNTJKVXNTQVOUHUTWVPLHZFCMCXCXWPRIOPLASMIIWYPQIHNUG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YXJVBJKRFCSMMZQEREYURXWYYTMXZIAGDYTOLDCAHEFIBFDOZYPQIJHBMDVYTTFMIVAWPXKBEJLAJRLETOKTZP");
    tmp_msg_0.feature_type = 142U;
    tmp_msg_0.rgb_red = 234U;
    tmp_msg_0.rgb_green = 97U;
    tmp_msg_0.rgb_blue = 160U;
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
    msg.setTimeStamp(0.77646954143);
    msg.setSource(23811U);
    msg.setSourceEntity(151U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(28U);
    msg.id.assign("RMVFMFRQAHARSKLLMZZBVIVECOGGCPCBCPIJSDICZXXJVBMCNHIXPNQPYOBLJDZEUYJZLEMGQXMHGPDUMBFTEREKZAWPRXHMKABSNLUAAJOJGZLNQAAGNMSLBVJGPWSSWVQPQRZTYTOWYXGIOXWZLRFKTGBUISNJREVFIUSCFVJCLDEIESTYOCKZUBLODUYHTHJNUFIIOVW");

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
    msg.setTimeStamp(0.064471857074);
    msg.setSource(55414U);
    msg.setSourceEntity(243U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(82U);
    msg.id.assign("YIOAUZMFLQDUGIBPNMMTULHWWSHOYCQXJDLQQDRDFCSQVEPWAFQYTBKXJSEHCIGGGIYPAAER");
    msg.feature_type = 124U;
    msg.rgb_red = 254U;
    msg.rgb_green = 33U;
    msg.rgb_blue = 215U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.490192090916;
    tmp_msg_0.lon = 0.854102412931;
    tmp_msg_0.alt = 0.783031453857;
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
    msg.setTimeStamp(0.715032861269);
    msg.setSource(55245U);
    msg.setSourceEntity(1U);
    msg.setDestination(28540U);
    msg.setDestinationEntity(108U);
    msg.id.assign("SJASCGNAXFQRLUNTXWYIWZW");
    msg.feature_type = 207U;
    msg.rgb_red = 89U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 196U;

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
    msg.setTimeStamp(0.498997030439);
    msg.setSource(17489U);
    msg.setSourceEntity(177U);
    msg.setDestination(50963U);
    msg.setDestinationEntity(251U);
    msg.id.assign("LBOFERBHEXGCSHQRXZXICYZCQLSLCRVYPKMQDGYWLTOOCFOGVHGHJABGNKXDDTNORDOEABNBAAKWQFKYYIESUJNWRUUJMXGFLFJFXCFEPWKGMREVOPCPWYAWVRKUPMRMKDPBXBUBKDYZVYZJEMJSQUATSTQBTEPQUCQGIVMVSSKHIWBWSPGUZEGHCTDDMIJXWQJTDLHFRKJNTIMVVLZNCF");
    msg.feature_type = 22U;
    msg.rgb_red = 160U;
    msg.rgb_green = 155U;
    msg.rgb_blue = 4U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.884215622147;
    tmp_msg_0.lon = 0.0921055362203;
    tmp_msg_0.alt = 0.581550699817;
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
    msg.setTimeStamp(0.778536414222);
    msg.setSource(59728U);
    msg.setSourceEntity(98U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.67007283624;
    msg.lon = 0.0305100613878;
    msg.alt = 0.435199814226;

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
    msg.setTimeStamp(0.229235380862);
    msg.setSource(39934U);
    msg.setSourceEntity(57U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.0526130050938;
    msg.lon = 0.605138398294;
    msg.alt = 0.973896391671;

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
    msg.setTimeStamp(0.686128362801);
    msg.setSource(64614U);
    msg.setSourceEntity(124U);
    msg.setDestination(55539U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.406517399004;
    msg.lon = 0.212650785207;
    msg.alt = 0.933217868358;

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
    msg.setTimeStamp(0.0670329852777);
    msg.setSource(15527U);
    msg.setSourceEntity(234U);
    msg.setDestination(21526U);
    msg.setDestinationEntity(161U);
    msg.type = 178U;
    msg.id.assign("GEISIVMDGCOIQMRKECSJULBKTZRAENQMBPUYUTETYNAXJHZESSBKDNFEXOOTHUCLJZQAKZBUJWZPLWORUVNPOKGAGNFCDBHGWBLSVGEIEZMEACWQZIYKYDYWLMAAJNCGCPRBNPLFDSQKQTUPUQJLSPXJRKADHDGVKYSRBDFLFCGWJXXNHTXDHHRVYWXSTLZFWXHWZVIQTAUFVFOHUBTRQOSWBCOIVPJNKMZFFMTPIYPMNJOD");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("NBSKFZXMOGBLUSXLPDBENEOJTGXUOGNDYWOSJOIHTSFIPHZFAWMAYZHMQLMZJAYVIUMIGCBWWCYMIYBULFRKNHFVOXEGEEALPTVIPNRCQMWJQVGLESEZDQRNMJYNJPORFBEXGPCIVIZWVXDGFHOANMZVDQLODHKYKRCHUSPSJPSXHCATKPWTKZVECTDUJLAXKHRBVAYLTGZLQTMFCBUAKTQRVIWFJUXTYWBCPSUQWNZKDDYCONBQXFSQAEIHRK");
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
    msg.setTimeStamp(0.417621043215);
    msg.setSource(14903U);
    msg.setSourceEntity(180U);
    msg.setDestination(5239U);
    msg.setDestinationEntity(117U);
    msg.type = 168U;
    msg.id.assign("JNBHJCQMXXLRQTTVIDPJWTARAADJYNXQPDDAMSKHUDGBDHV");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 178U;
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
    msg.setTimeStamp(0.176574984651);
    msg.setSource(3859U);
    msg.setSourceEntity(114U);
    msg.setDestination(51826U);
    msg.setDestinationEntity(33U);
    msg.type = 2U;
    msg.id.assign("UADEFJKNGOQCVNPBLFCJFFFJWRXYNSWDSGEOLMEJRPGHTPPHZQHGGLMVIYNWSZFZVTCQCQXOAWMVXXGXRDTZXYOAVCAKJUMZJMVULSZQDFLCZUXDAUGQSPQDOTMHXAMPYJUAPBOLNMIVBIVTJYYXELQRSSNSCADJSHRROUCMKIHRENIBHOIBBWRVGK");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 153U;
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
    msg.setTimeStamp(0.133095083622);
    msg.setSource(17077U);
    msg.setSourceEntity(252U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(65U);
    msg.localname.assign("FEOXURWBOYYAKVCNGEERUSBBHIFQSFDDMRRKJDZAHCOPFXQMLWTLWUGZCTZTQPVTKBQHMKPKYRJZTBEAXNJWSCGQDLSAWPKOCYQLYRVSNSXOATBABSSJEPKUZYZLYFXOCMLLJ");

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
    msg.setTimeStamp(0.126170978774);
    msg.setSource(38055U);
    msg.setSourceEntity(105U);
    msg.setDestination(34957U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("LIOUXCQPMUNYJIEAYRQWVMQALFXGFKKZYOGBICDTQGNNDNPCYWVKKUFZIIVJSNRCEBRDWAQPOZFLGFKNMEIDEPFIFBYDLXJXAQLHXPARYCNJCBLQMJXGQZXBOGADYCTACZHVZGUJWPXVNEGWYKGDATSHTOHWRHAZBASPDSHIMWMLLSDPJMWOVUKPBPSRETVFJDXIZIL");

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
    msg.setTimeStamp(0.110034350426);
    msg.setSource(18594U);
    msg.setSourceEntity(123U);
    msg.setDestination(39806U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("FQXFVIBNCGHTDUEXFQEGEGUDKSZDXXWQVYPHKZWXMBMIVXHVVR");

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
    msg.setTimeStamp(0.654061358822);
    msg.setSource(49997U);
    msg.setSourceEntity(106U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("VGDBHGMYZGXYMHOCISMMEEWKAEHQUAQVSFZQGAERRSJOAN");
    msg.predicate.assign("DBQINCUUWXNKQYFSMCSVUTOCPFVZEEEBJREZGSQPJXWQXSGQLZFLNAUBDWWWEYIFAWNBGBVEYMMGILNCHWVNLUDITPVTOSLOHTCRDAGLIGDJKGJEWMVHRFBZPSCSPKIGDQMAHZSTOHGJTBHNQMVKKJPHFXDVCAYOJTXZBUYASVQGXRFLYCNORDNEIYXTUKRTAURQQEXUCLRFORSWOMBPKKMJULYOC");
    msg.attributes.assign("VKLKLQCTNYRBYZLXYZVFEKAWMYCLMTCXGWDWAGOHAGDMDTZKZJSHXGSQQVIOSMORSBOEPWCJQHUPSIPJGHTEWPZFUIDZZVKKWJRFX");

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
    msg.setTimeStamp(0.385512855726);
    msg.setSource(63869U);
    msg.setSourceEntity(99U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(167U);
    msg.timeline.assign("JIBCERAJNMKCLOXTVJLROUVNPVTTDVOJZSPFXTPROAPSDUZYWAXGJKVYHCQPSTKXQTBLTMBDZPMDKVXQBGSQEDEHULKFHQRINPBTYXOUJAFXNSAKEPQSYZXMYBMWWWRMZMWGFGDVZRLKXDGONXDJHICRUSRCLFQGPEHEOVIJGGYERHSNALUB");
    msg.predicate.assign("ECNUNTKVSRQEKPLYXCNFZZJAGAMQTCTZTSVJGLWNHMIXJSRWBFMZBQKFBLDFKRBKHKPPENCLEO");
    msg.attributes.assign("BXCIYARKRVKWAXHFGHJIVLHXGFDYDCKXHNLDXTEOSGJMRHSWEVBPBZYMGQZRMUUUNXWSZSRCONZFFOOBTDADAIU");

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
    msg.setTimeStamp(0.400240423692);
    msg.setSource(57941U);
    msg.setSourceEntity(107U);
    msg.setDestination(85U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("AQCUYQCCCAKLFOLZFTVLHVGGKXJR");
    msg.predicate.assign("BHPHPWQCPEQSRQWWGOYKIZQLMNYLAOQABZUPOBGURMDETVCBWYZAIRKJQVOYM");
    msg.attributes.assign("TEZYOKWLPAZWUPCWRSULZBWVXFMUENCKCDXSTPLZNEQIJBAMGNSWLIESHDRYVADPOFEHEUPTPZIUQKVXNIOHDFQCIFLPDJZRWGXQSSVKKCBCLLIIMWVQGJXBXKRNVVLFGEMVGOPXJNMGRBOVGQJACJGHUCDKYZFHYKFHK");

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
    msg.setTimeStamp(0.1719189997);
    msg.setSource(38531U);
    msg.setSourceEntity(88U);
    msg.setDestination(42699U);
    msg.setDestinationEntity(51U);
    msg.command = 92U;
    msg.goal_id.assign("ZKHBSVJKIGDIDDBXABUHYDZQUZHSTLNFUIUCIVGCHJTETELYNNNTIMRKOGLMHLLKZCARNSFFVYJPTXWHCVHEPPFENSUOSJPAAZPUDJCYGQYWUEACJTU");
    msg.goal_xml.assign("TTUOZODVLJNLQUDOTJCQAXHTBRBZIELPEGWHXXZPPDACIGLBERYULGBJBSZOHMIVZTQKFFFYGWDDEYYPKHKABKJCSNUI");

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
    msg.setTimeStamp(0.52238217053);
    msg.setSource(7010U);
    msg.setSourceEntity(178U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(240U);
    msg.command = 34U;
    msg.goal_id.assign("WTBQXQCOLOCJWILTXHKNMVGUSYMZHEVQIBADXAMUNEXQARFXFZXJCKWMGDNHYPXGIBIKYSAOOMKQDTRTLGBHYOAIFJCXFHXUAVENBIUGVHPNWUJSEPCFMPQ");
    msg.goal_xml.assign("GKBITEDECFYUVYPLOZVEBGRXCPUQWNUBHHJVJAJHWCFQVDPISCNCJOMOSEBOYIJCCYTHKFNFFUWZMPOFMNISQTWQIEBTAUYMJVGMDBVXMBQXKGNPQQGPSCBQJVIRAJYENAMOIVWWWUDXTZBQF");

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
    msg.setTimeStamp(0.791309149361);
    msg.setSource(54164U);
    msg.setSourceEntity(188U);
    msg.setDestination(45557U);
    msg.setDestinationEntity(11U);
    msg.command = 213U;
    msg.goal_id.assign("MCTWGPLVQBNFSBIUZMYYIQRGCSCVY");
    msg.goal_xml.assign("ZGXZYMGIKOZLVETEYTTLEYRFVPAVKMFWPRIMWGIIRSANXZNUJJCSUQABKYCZWIYXAJCHBNXVBKVDIKOTMCLSGHTSDUFLMUTUNTNWMYFGAYXZDEJJNHMWEDQFERHFPEBJCVSQZWYZTPQCEDTQRUGUHNKMFILOGDJNSPQTIDPHRXMRFDYGPASYPRJLNOKWBDXDXVLQWGXPBLUOXWKCQAFUUBKOZBCQHSM");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.459027637339);
    msg.setSource(20159U);
    msg.setSourceEntity(119U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(216U);
    msg.id = 2U;
    msg.width = 54752U;
    msg.height = 24310U;
    msg.widthstep = 188U;
    msg.channels = 138U;
    msg.depth = 59U;
    msg.finaldata = 9U;
    const char tmp_msg_0[] = {21, -81, -36, -65, -46, -7, -120, 95, 26, 81, -70, 25, 17, 72, 38, 67, 82, -100, 54, 83, -88, 122, 79, -40, 44, 18, 26, -1, -48, -99, -34, 114, -60, -125, 66, 62, -115, 87, 50, -40, 93, -54, 5, 33, 121, 99, 81, 13, -90, 119, -29, 6, -3, 80, 31, -51, 31, 86, -54, -120, 32, 85, -51, -60, 69, -111, -18, 91, -30};
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
    msg.setTimeStamp(0.476811498073);
    msg.setSource(12717U);
    msg.setSourceEntity(215U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(196U);
    msg.id = 221U;
    msg.width = 7501U;
    msg.height = 63614U;
    msg.widthstep = 43021U;
    msg.channels = 249U;
    msg.depth = 37U;
    msg.finaldata = 206U;
    const char tmp_msg_0[] = {-89, 15, 26, 21, -1, 34, -28, -59, -2, 24, -85, -67, 27, -57, 124, -26, 75, -67, -15, 98, 41, 7, -125, 74, 36, -88, 23, 37, -45, 38, -13, 11, 93, 42, -40, -1, 79, 16, -116, -74, 1, -122, -40, -14, 76, 103, 102, 95, 19, 95, 95, -12, -110, -72, 70, 66, 111, 109, -110, 90, 112, 117, 60, -83, -101, -73, -44, 50, -94, -93, 61, -18, 59, 94, -81, 107, -17, 80, 1, -80, -120, 62, -102, 119, -77, -125, -21, 15, -2, -44, 66, 91, 32, -70, 100, -60, -73, -13, 31, 92, -1, 80, 61, 47, 61, 58, -42, 96, 112, -107, -4, -97, 16, 115, -45, 101, 36, 40, -95, 91, -49, -21, -85, -102, 1, -98, -5, -101, 33, 55, -5, 19, -2, -62, -127, 12, 91, 45, -52, -91, 46, 32, -44, 6, -31, -122, -43, -29};
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
    msg.setTimeStamp(0.843531914811);
    msg.setSource(15865U);
    msg.setSourceEntity(61U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(51U);
    msg.id = 126U;
    msg.width = 38057U;
    msg.height = 59131U;
    msg.widthstep = 13904U;
    msg.channels = 33U;
    msg.depth = 187U;
    msg.finaldata = 59U;
    const char tmp_msg_0[] = {-74, -44, -71, 125, -30, 12, 112, -40, -75, 102, -100, -79, -102, -45, 110, 91, -121, 80, -38, -31, 84, -68, 34, 104, 115, -66, -42, 29, -99, 32, -109, 107, -45, 122, -128, -57, 74, 77, 28, -45, 85, 118, 69, -83, 40, 108, -56, -103, -23, -47, 90, 2, -113, -70, -116, 74, 107};
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
    msg.setTimeStamp(0.323274148727);
    msg.setSource(43229U);
    msg.setSourceEntity(163U);
    msg.setDestination(26834U);
    msg.setDestinationEntity(22U);
    msg.width = 57996U;
    msg.height = 60201U;
    msg.channels = 67U;
    msg.depth = 153U;
    const char tmp_msg_0[] = {115, 5, -127, 79, -63, 6, -101, -37, -63, -118, 68, 30, -58, -6, 60, 22, 0, -68, -26, 122, 27, 22, -1, 71, -30, 34, 125, -111, 67, -94, 17, 33, 101, -36, 31, 82, -76, -66, -65, -13, -58, -6, 66, -100, -99, -128, -20, 55, -79, 81, 23};
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
    msg.setTimeStamp(0.929434187453);
    msg.setSource(6004U);
    msg.setSourceEntity(157U);
    msg.setDestination(35954U);
    msg.setDestinationEntity(125U);
    msg.width = 14929U;
    msg.height = 15839U;
    msg.channels = 6U;
    msg.depth = 218U;
    const char tmp_msg_0[] = {-66, -71, -24, 115, -6, 8, -91, -1, 39, 89, 115, 53, -77, 78, 59, -122, 22, -6, -111, 20, -106, 22, -12, -51, -13, -96, 91, 42, 53, 59, 28, 40, -100, -107, 109, 114, 18, 2, -47, 93, -14, 86, 123, 82, -69, 118, -32, 2, -11, 69, -9, -49, 20, -45, -43, 32, -46, -47, 1, -9, -33, 43, 7, -54, -40, 126, 54, 86, -96, -125, -48, 112, -53, 110, -97, 112, 109, 107, 98, -77, 86, -61, -62, -32, -51, 16, -66, -71, -72, -79, 101, 114, -44, 75, 102, -58, -44, -84, 17, 62, 74, -38, -93, 67, 24, 120, 110, 101};
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
    msg.setTimeStamp(0.704197313786);
    msg.setSource(59850U);
    msg.setSourceEntity(46U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(64U);
    msg.width = 38616U;
    msg.height = 20808U;
    msg.channels = 200U;
    msg.depth = 157U;
    const char tmp_msg_0[] = {98, -22, 115, 98, 106, -77, -120, 81, 71, 36, 53, 53, 30, -120, -84, 61, -110, -56, 84, 75, 79, -122, 22, 6, -118, 117, 13, 54, -16, -80, -45, 120, 4, 93, 63, 76, 126, -110, 32, -74, 0, 38, 81, -128, 100, 13, -79, -33, -57, 119, 96, 87, 126, 97, 113, 91, -91, 96, -37, -63, 74, -114, -120, -23, 123, -110, -82, -53, 51, -46, -105, 84, 44, 95, -55, 20, -24, 1, 57, 8, 85, -67, -25, 26, -113, -55, -94, 0, -83, -97, -107, 10, 23, 15, -119, -7, 76, 124, -101, 25, 103, 61, -12, -68, -21, -11, 0, 20, 72, 1, 43, 26, -32, 71, -82, -47, -77, 122, -121, -52, -108, 2, -74, -11, 42, 103, 3, -31, 55, 45, 47, -36, -60, -20, -128, 105, 64, -100, 75, 92, 123, -60, 120, -60, -37, 88, 16, -59, -81, -71, 116, 49, 86, 92, 70, -83, -47, 58, -49, 25, 110, 30, 117, 91, -13, 11, 36, 2, 122, -94, 123, -17, 120, 4, -11};
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
    msg.setTimeStamp(0.59162131727);
    msg.setSource(26544U);
    msg.setSourceEntity(88U);
    msg.setDestination(23554U);
    msg.setDestinationEntity(64U);
    msg.frameid = 126U;
    const char tmp_msg_0[] = {57, -28, -86, 78, 96, 103, 55, 31, 15, -77, -48, -37, -80, 114, -37, -66, -31, -91, -79, 81, -27, 124, -109, 4, -56, 120, -115, 10, 10, -7, -24, -52, 106, 39, -61, 47, -9, 98, 70, 66, -5, 121, -52, -20, -106, -105, 13, -100, -117, 99, 116, -34, -105, 115, -34, -96, -104, -26, -107, -128, 20, 99, 44, -35, 69, -30, 2, -3, 43, 77, 9, -28, 16, -111, 74, -94, 55, -122, 102, 16, 86, 123, 116, 103, -79, -49, -90, -36, -37, -51, -49, 100, 114, 65, -14, -92, -80, 96, -15, -60, -22, -125, -40, -94, 38, -115, -58, 16, 52, -12, -38, -128, 105, -95, -66, -88, -39, 34, 64, -113, -112, 71, -41, -4, -5, -75, 97, 48, 120, -76, 50, 10, -83, 79, -75, 4, 125, -127, 85, 106, 31, 32, 30, 21, -48, -29, 108, -96, -107, -37, -5, -97, 58, 65, 65, 75, 88};
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
    msg.setTimeStamp(0.526829856395);
    msg.setSource(63610U);
    msg.setSourceEntity(91U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(200U);
    msg.frameid = 79U;
    const char tmp_msg_0[] = {-72, -88, -34, -25, 109, -113, 38, -97, 82, 71, 24, -68, -39, 82, 16, 31, 119, -35, -114, -124, -96, 110, -71, 40, 27, -78, -33, 70, 5, 107, 96, -124, -26, -116, 13, -75, 18, -103, 80, 41, 126, 88, 58, -19, -67, -88, -120, 85, 22, -52, 88, -71, -17, -41, -34, 10, 54, -85, -8, -123, -52, -44, 49, 67, -15, -4, 112, -89, 69, -63, 35, -101, -51, 73, 1, -41, 34, 110, 86, -35, 98, 90, -103, -33, 73, 64, 67, 18, -4, -122, 60, 53, -98, -51, 110, -94, -126, -96, 106, -128, 4, -71, -19, -67, -72, 0, -11, 13, -53, 42, 4, 36, 105, -84, 2, 20, 25, 44, 113, 109, -69, -106, -106, 22, -110, 47, 42, 39, 44, 103, 110, -65, 14, 103, -33, 43, -94, 21, -42, -68, -99, 9, 79, 66, 6, 106, 86, -28, -31, -47, -77, -89, -98, 54, 9, -68, -15, 62, 86, 105, 122, -36, 82, -4, 117, 100, 63, -57, 80, -84, -111, -49, 100, 53, 111, -15, -108, 9, 60};
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
    msg.setTimeStamp(0.712132812865);
    msg.setSource(54607U);
    msg.setSourceEntity(32U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(101U);
    msg.frameid = 208U;
    const char tmp_msg_0[] = {43, -27, -122, -11, 44, -116, -46, 108, -73, -70, 11, 124, 111, -78, -14, 0, -58, -11, 48, -62, -55, -49, 55, -96, 66, -25, 54, 17, -34, 116, 108, -92, -99, -127};
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
    msg.setTimeStamp(0.683104500807);
    msg.setSource(22646U);
    msg.setSourceEntity(175U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(239U);
    msg.fps = 254U;
    msg.quality = 250U;
    msg.reps = 68U;
    msg.tsize = 100U;

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
    msg.setTimeStamp(0.437437040918);
    msg.setSource(12815U);
    msg.setSourceEntity(194U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(206U);
    msg.fps = 29U;
    msg.quality = 240U;
    msg.reps = 3U;
    msg.tsize = 174U;

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
    msg.setTimeStamp(0.587885519433);
    msg.setSource(8794U);
    msg.setSourceEntity(172U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(30U);
    msg.fps = 63U;
    msg.quality = 15U;
    msg.reps = 133U;
    msg.tsize = 248U;

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
    msg.setTimeStamp(0.507009725849);
    msg.setSource(35117U);
    msg.setSourceEntity(119U);
    msg.setDestination(6095U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.829718580987;
    msg.lon = 0.730166254638;
    msg.depth = 22U;
    msg.speed = 0.526758689504;
    msg.psi = 0.901122742868;

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
    msg.setTimeStamp(0.474210729265);
    msg.setSource(18440U);
    msg.setSourceEntity(40U);
    msg.setDestination(47565U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.792181647949;
    msg.lon = 0.205677827482;
    msg.depth = 106U;
    msg.speed = 0.757377764664;
    msg.psi = 0.95647891797;

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
    msg.setTimeStamp(0.0608187334941);
    msg.setSource(23654U);
    msg.setSourceEntity(62U);
    msg.setDestination(51562U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.168248470195;
    msg.lon = 0.129384530548;
    msg.depth = 91U;
    msg.speed = 0.65984575565;
    msg.psi = 0.255530119129;

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
    msg.setTimeStamp(0.0810563437221);
    msg.setSource(20587U);
    msg.setSourceEntity(213U);
    msg.setDestination(6952U);
    msg.setDestinationEntity(241U);
    msg.label.assign("ZRXGHFBTKVCZZWIOLURKVPHWTHWSMAHOTXJYJMQDE");
    msg.lat = 0.615751311296;
    msg.lon = 0.532284495203;
    msg.z = 0.125718599079;
    msg.z_units = 9U;
    msg.cog = 0.707185409992;
    msg.sog = 0.456768332083;

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
    msg.setTimeStamp(0.0323808508686);
    msg.setSource(25297U);
    msg.setSourceEntity(246U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(225U);
    msg.label.assign("HWMXPANBQWNGNPGDLYVAWJXHYAPIIFVOQLETZTUEEXMAWRQBLHUZJYJKZDATJKNMQARNFOHCNBJMWQHTLGBXULGMXGCHVFAGKSORFOFJMPYIJPCPZVKDCXQDVQUCOFJAEDCRQB");
    msg.lat = 0.859922832175;
    msg.lon = 0.800640707903;
    msg.z = 0.689026294777;
    msg.z_units = 132U;
    msg.cog = 0.284393179785;
    msg.sog = 0.671672308707;

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
    msg.setTimeStamp(0.291975560857);
    msg.setSource(6757U);
    msg.setSourceEntity(101U);
    msg.setDestination(52110U);
    msg.setDestinationEntity(126U);
    msg.label.assign("WZHOUUXICIXNFRXCRMAFBLYWYLUJPFMCKPSJIJGGNYQTHMLMLKGQIKTRACOMGUZWQXAGMSXBLOVWBBDVQFZDKZZKHHEBITKGPRVZRBQXNIOLHFSFGPDPZNRVYQEYKDCBNKSELAJBCDSQPRPOYDPEOFICEWVDXVBNHMGFNMXONUABEQQRGD");
    msg.lat = 0.962603541107;
    msg.lon = 0.915764096942;
    msg.z = 0.30619272192;
    msg.z_units = 34U;
    msg.cog = 0.819992354922;
    msg.sog = 0.754225723982;

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
    msg.setTimeStamp(0.329742727599);
    msg.setSource(11767U);
    msg.setSourceEntity(87U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(96U);
    msg.name.assign("JMLHNVDAQSEXNKZKIDQHVCXUETDZCOAXFFNGGGTJWGAFNPYJOAIQLWYRYENJTCZHKGLFIKRVWOFCLMAZFYXERKWRDMIBWAOEAHQDQVBOYJPOHGPICMYCWTLUFQSURBKFVUSWDAMBQBJIHTNIEINYLCKDPNRIFUYRVOOBGHYSZBSWAGMTPTKBMSDURZ");
    msg.value.assign("CUFAWAGFKCBGZJSKHKCWWMHVMHXBEEJGRJJNRTGKPLPQIUHZPMXNMETHBTUFXQLDFCDCOHIEUGFFJLORYUMTLWCZSAUNKOZKADFOYMSTTRQPOXAXNJVLCWRYZIOYYONYXIBHBPSQMVWAQELYVPXDBFPJVBZWQLOBDRZMVIEJIOXNIOCSBKGDSRT");

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
    msg.setTimeStamp(0.554980288088);
    msg.setSource(35470U);
    msg.setSourceEntity(144U);
    msg.setDestination(32428U);
    msg.setDestinationEntity(8U);
    msg.name.assign("GJSQZWTAKTJFTKJVFJRHPRHLAIHPZIMK");
    msg.value.assign("SHEWAGBSJTGPPVBGDNLYQNEUFMSNHNKIUSHZPHXVTRXRZPSUOEJOCBDQVRYKXOLELIYRZJHJXCECQUASRHWTAQBQBWEMQVOYFTFLVCFKBGFAKYMQXRSVG");

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
    msg.setTimeStamp(0.84063369649);
    msg.setSource(45690U);
    msg.setSourceEntity(2U);
    msg.setDestination(15234U);
    msg.setDestinationEntity(87U);
    msg.name.assign("LNEDLNAVGLUIHSQNOPYXHXBYOJGDDDYJRRBHPFFNGZHBLWKZKUCIKFDPWTD");
    msg.value.assign("RYJSFFLCHVKKCUCCYJVSALTIFNZTEFNBLRYHZHVW");

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
    msg.setTimeStamp(0.66329614211);
    msg.setSource(19455U);
    msg.setSourceEntity(211U);
    msg.setDestination(6881U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SAEPOKIKDTEKHVRUHPCGZATLQYQYPSQKJTGPODUKAIMEUVOXPUUBDWRPTWEDBPXMPYRAFKSBJALYKKWWOMTZCQCGHDNHJCFIEHJZLZLZEWWVBQZKIGGEABXFZKHQVXDMWEBXIFZRTSLFYOCUNNONHQI");

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
    msg.setTimeStamp(0.148316841235);
    msg.setSource(546U);
    msg.setSourceEntity(249U);
    msg.setDestination(24778U);
    msg.setDestinationEntity(223U);
    msg.name.assign("NAQXZEPHMHQPRUPRMLQUEVDHMAQKMJDMTPYMJLNBVGCGQDSQARJRRIIGKRFSNWWYGBDLZVNEMLIGGAEQJDTSIXTOUWOZHUHPAZXSBZMPOBOEDFRCLBKTIWTUSYTVKXZEFIYWKJCZOEXTUEMGDIKYUKCNVEHVWVJNNNCLBWOBFALVXQFLGBAYAQAVJXLRGNICKYZYBXJWPHASFHDQKBCHEDTNTOHSSSITVXPLSRYUIGMZYFXODCWURKOP");

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
    msg.setTimeStamp(0.484650601392);
    msg.setSource(14993U);
    msg.setSourceEntity(230U);
    msg.setDestination(46251U);
    msg.setDestinationEntity(3U);
    msg.name.assign("VRUTVIFVPLCOLKCSTAZQVZHNJDGLAKNDGPHFYPLVOZIJRVCKEYFSHNQBASDL");

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
    msg.setTimeStamp(0.417801310087);
    msg.setSource(3494U);
    msg.setSourceEntity(66U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(247U);
    msg.name.assign("PNFRCBMKANBB");
    msg.visibility.assign("AFIFVUDGDFSWLSLOS");
    msg.scope.assign("VXJDLQBYTOSPAPDYDWUIMOFJWZOGSWVMXADZGMTLKTQGNPEJOZFAORIOICKJHHPVIQXWNLEFNWLYFZFTLEYXGSVKEZTPQIAYQKCDQZKUTCTNVHBZDXUCIYWQUHSWLRWLTNECUBYBNHUWNASNFCDA");

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
    msg.setTimeStamp(0.512517176607);
    msg.setSource(45362U);
    msg.setSourceEntity(224U);
    msg.setDestination(64761U);
    msg.setDestinationEntity(243U);
    msg.name.assign("FMQHUKINDHLQBLZOVWWSBGKXBDOOCOCSUXEQSKLDSKGBS");
    msg.visibility.assign("CJCAMIQENFJDSKWVPMHFXMKRLRGTNMWMGTJWLYUIZXHDXOCNBSDBAAYKOBNRGPDSKYJQBJDIPICCOTFHSCAQLMZPVFLZGKARXWAVQNJQJPRAGTODIQKDXLKDIDXPLOEIWUJBFVWHHHHGZBJPMHKIHNNGOYCSBZXUPIUNOTCUZEFDMOATUY");
    msg.scope.assign("MNHRTEMGZJVXARPUCNYHMZE");

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
    msg.setTimeStamp(0.63376828198);
    msg.setSource(44794U);
    msg.setSourceEntity(112U);
    msg.setDestination(371U);
    msg.setDestinationEntity(71U);
    msg.name.assign("SGNQBXYXRUWEDTUXFEZBPPNRHZMHEMFCMAZYMEFBJUGLWIQORXMNXPFAOUYDQXAASVQZUJHYMFGKNSIWAEZRVLIXBDHNKVOPOECIGYBPVGKXRWBSPLJJREVGAUWBMJBVCZRRZGJCGQPUCIDTLIJBWWHHUQFJLLQSNXCTTEAKBFEOTQPMHITVINYWMTAJYDOVDSDOCLCZPOOXKKYSWUIVQAKWNDYTVSJPTHR");
    msg.visibility.assign("KJYHXTNFEMPGVJNXIOJTVSGHSKVTRJAWNDMSNJKHBVRDCHSMKYRSGBUYSGDEMULVOMEFVBADGQANYCUXGBRNVTQUYRDFEEXZOCZTTWYCALTWRUIUPBAQZCZRQILIZMUAQOMXLHJPDPJZA");
    msg.scope.assign("EERJZBNEGUUWSEMUWJGRBWDKNSYUZLCUPREIAPBDNZMKHWFVFTQQPZLQZXEXICVSIPRYILKDDWJCJODPZAOTCEGRYRCSXVGVLSFBRAONNXVXAHGTYATVEPSMDRSZJXSJOPYJOBXHNOWYHDNIOXQFDHMTH");

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
    msg.setTimeStamp(0.641684255831);
    msg.setSource(61904U);
    msg.setSourceEntity(159U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(101U);
    msg.name.assign("TGBECLYQZDKOKTIKHHHKDZWQLXGGGJMTQVZYHBTNQNKTA");

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
    msg.setTimeStamp(0.633237193823);
    msg.setSource(22845U);
    msg.setSourceEntity(121U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(155U);
    msg.name.assign("ZHESWHBWPNLQOFFATGJIIYEKDKVTPGLXPEQZPNKUTEWQOCOJURCYYMHEKVRLYCJXGFVBDMZAQWHXOVVBXQJCTFIRMLXIXEDJGMAJWKEYTPACVVAEQQRCNVJEFRBXIQXJSSIUGNHMTGDZWGFCURTUCFZHJAMNOWOIRNMRNUDHPKXYUIHPWKUYALOPTGSRLADKLENFSFKIVXCBGDDYUOZTLZFSHPDSZMWCZMQB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EZSICZCEMQMPTUZZDFAFRHUSPKNNVYQTZPGFUMCOUSVKQBFAJYVNHRGMBPDVXJBDKWGZIJNAUJMMOLIHZNILIUTKLVVJTMDQCJHSLPJPSCOBWLOKYPGPXADJIEKXXCLXIBSVWWGODLGTTQABNLUEFNQPGGHQSDYOPYADXQTOARLQTHABXNJKRWWONSTR");
    tmp_msg_0.value.assign("FSYPWZUXYADZULGLCIGTKCGKTIKNVHNSFCDEURFQJCKELKLXVIOEUNOBWOFAVQENAPQAYITQHRNZQSFECWTYVUTIPXRJOAQWPRKLIZOZWNBEBKMKMJOJZTFVORHBMOCDXJNXTMEOWQMDU");
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
    msg.setTimeStamp(0.524712706715);
    msg.setSource(65373U);
    msg.setSourceEntity(101U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(244U);
    msg.name.assign("WRMNADHVZXFXDWNYQZZRCMEXKPBLTVYGSGVKXMVNJERMVXEUEJTANAVPKHKCDIXEBIZHQMNHIMLPOBKZSPTVAOHCOJFZIGYKUIPLGXAOVATKZUHHNYQIHYJCLWQZP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EMMLLGNTEYTKWAVWFOTFGIPGZYCEKJIRFRWMNRJFHLNDPMKAVD");
    tmp_msg_0.value.assign("LAVWBZCJCDGVHTUYTPXACGKXWFFVDRYHTRHCTHIAHEUSODDPOYKAQCKPMRHBLYGETQIQLFATGEQESPWPBCKANNMMFGMQSRJOMZNMBRUZCRDLTZRIXGZMRYWNAXSVJEOEWPZPQOUHPIXWCBQLNKEGEFUSZJWOBVNIL");
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
    msg.setTimeStamp(0.529694737088);
    msg.setSource(29555U);
    msg.setSourceEntity(65U);
    msg.setDestination(33557U);
    msg.setDestinationEntity(87U);
    msg.name.assign("GFQWFCSFYGJDZAGZZAEMMMUKSYCIOADXSZXBFFFJOEUEPPMBWFWHICWBVRJEANYVMPGUTJDXSJLZHPKSDBUFLQXTULVZLEXAHQROIVXNKLLORUUJILEBTCVCH");

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
    msg.setTimeStamp(0.316387397211);
    msg.setSource(38911U);
    msg.setSourceEntity(172U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(142U);
    msg.name.assign("EFRMKKWBJTHOXZBAYVFCFPSLYGGAMIXJLNKYLHPSYRNUQQTJZXBKTVYVMOEJCWBLEOQETAULIUOVWCRSEYCGDUEBWHRYUGKWFTSFFRZEWPZZLSIQVWKLMHCZDCU");

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
    msg.setTimeStamp(0.980518688451);
    msg.setSource(48437U);
    msg.setSourceEntity(152U);
    msg.setDestination(29290U);
    msg.setDestinationEntity(28U);
    msg.name.assign("SBQVUIIRWMPDWAOAFAHTZGSNLNCDEGMKCZWRLKUDJGQCINROGUHHMUFHUCMDGFGZRLGBBOOBPUBELEFXBTVWLYSPYXMVLZKFQYCXUZOPKMSFYOEOHAYBSASMKIKSLPYYXPIABQNAIQATRKCALSQNEGYGTDNTQVCDVPZPPTDXRHRUITXDCIEVQRTSFERNZJGZWCEMXWYVHJBJVHKJJLNKJXSZWWVTEPJXQU");

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
    msg.setTimeStamp(0.850040790166);
    msg.setSource(40337U);
    msg.setSourceEntity(194U);
    msg.setDestination(10044U);
    msg.setDestinationEntity(0U);
    msg.timeout = 2542009439U;

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
    msg.setTimeStamp(0.467498446429);
    msg.setSource(29657U);
    msg.setSourceEntity(171U);
    msg.setDestination(23468U);
    msg.setDestinationEntity(14U);
    msg.timeout = 3377146911U;

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
    msg.setTimeStamp(0.28336513384);
    msg.setSource(27278U);
    msg.setSourceEntity(160U);
    msg.setDestination(42635U);
    msg.setDestinationEntity(48U);
    msg.timeout = 1346391805U;

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
    msg.setTimeStamp(0.0369984129492);
    msg.setSource(24440U);
    msg.setSourceEntity(136U);
    msg.setDestination(51957U);
    msg.setDestinationEntity(110U);
    msg.sessid = 3960000781U;

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
    msg.setTimeStamp(0.568603775714);
    msg.setSource(19160U);
    msg.setSourceEntity(236U);
    msg.setDestination(26491U);
    msg.setDestinationEntity(135U);
    msg.sessid = 2350389635U;

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
    msg.setTimeStamp(0.906550775935);
    msg.setSource(1542U);
    msg.setSourceEntity(37U);
    msg.setDestination(1748U);
    msg.setDestinationEntity(202U);
    msg.sessid = 707911826U;

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
    msg.setTimeStamp(0.116801877434);
    msg.setSource(192U);
    msg.setSourceEntity(25U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(247U);
    msg.sessid = 3106548365U;
    msg.messages.assign("DLGIUMYQCGCEXRILMLBCMWXWSDNQVQPRQJHXDWPJPJURDVMBYVESOAOPTNPJMMTFETXXOKTAARIRXVTLKAAIOOYZKIQSKQHEIKWCFHUFZKMBBFMQZHVAOFHRCBHYJVGVNQYWXBCCZZZLHOWEUCNFICELOVFGUTNDAWNXNKXCFTYIDSWVPVSRBQJMRJEYUYMIAZSRAFDBPKGNSGRJHZNFUGPBTNJDHTBDIODKOXLGSZJQSEYLPHWGETS");

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
    msg.setTimeStamp(0.262927642473);
    msg.setSource(17117U);
    msg.setSourceEntity(124U);
    msg.setDestination(44970U);
    msg.setDestinationEntity(26U);
    msg.sessid = 3581093638U;
    msg.messages.assign("JZYFCFCDGZHBWPLIPBGVZXGEJMDNHSUDCBOSTNAXRLOESOTJTUWUYMFQNQRHCTRYK");

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
    msg.setTimeStamp(0.50128608983);
    msg.setSource(24726U);
    msg.setSourceEntity(183U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(75U);
    msg.sessid = 2921328432U;
    msg.messages.assign("EAJYXPNRAMXWIBBKNGOZUVFYXOFKIPGDAZBIWLLQPIJSFJSRWJRBAFIMSWDMJCTMUOCAOCEEJDSRFZPKNZLLOOQGURFJVEFAGOWSYGTKQUXZXZBIVCSTULLHPZXADNWAYMWLUTEQZXHCQKHTHVRKMKPPBIBHXQNRTDUUIPNLSWBXRUYDFMJEVVMYLIWVBNNMHDEGQLQAXCSJYCHDSFTCTEKYSNTVZBGPRQTEHKEGYRZYDQG");

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
    msg.setTimeStamp(0.0468317627872);
    msg.setSource(31407U);
    msg.setSourceEntity(228U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(247U);
    msg.sessid = 1877902825U;

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
    msg.setTimeStamp(0.706957347975);
    msg.setSource(19810U);
    msg.setSourceEntity(148U);
    msg.setDestination(50082U);
    msg.setDestinationEntity(5U);
    msg.sessid = 3870335153U;

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
    msg.setTimeStamp(0.177077187011);
    msg.setSource(326U);
    msg.setSourceEntity(51U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(53U);
    msg.sessid = 1297733656U;

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
    msg.setTimeStamp(0.831524432296);
    msg.setSource(57347U);
    msg.setSourceEntity(19U);
    msg.setDestination(59873U);
    msg.setDestinationEntity(207U);
    msg.sessid = 4036334775U;
    msg.status = 135U;

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
    msg.setTimeStamp(0.325942839486);
    msg.setSource(33357U);
    msg.setSourceEntity(189U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(101U);
    msg.sessid = 1895032003U;
    msg.status = 59U;

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
    msg.setTimeStamp(0.813444716397);
    msg.setSource(15866U);
    msg.setSourceEntity(230U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(228U);
    msg.sessid = 2930192895U;
    msg.status = 36U;

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
    msg.setTimeStamp(0.81317436852);
    msg.setSource(18284U);
    msg.setSourceEntity(97U);
    msg.setDestination(565U);
    msg.setDestinationEntity(159U);
    msg.name.assign("HDPRGSHGNLYLBRXYSTIN");

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
    msg.setTimeStamp(0.248847238151);
    msg.setSource(13834U);
    msg.setSourceEntity(140U);
    msg.setDestination(40858U);
    msg.setDestinationEntity(45U);
    msg.name.assign("SYKLERFRHQGZDCLZXZJXVMPSIXHTDWWSVAZRNFTXSQBALWUWCTDFIGEBAULVTPFMYJGBNACUECHOSNBRKXZKAREKGDAEPXWPIOCLYDQO");

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
    msg.setTimeStamp(0.557102459313);
    msg.setSource(21927U);
    msg.setSourceEntity(13U);
    msg.setDestination(12772U);
    msg.setDestinationEntity(170U);
    msg.name.assign("QMFTBXCGLMGSJJBUXUCVWHLWDXEDTYUYNZTKAEOSYSGDFLSWEHBXIZTGKSQGRCRIADJCIKPJOPOBBNREZOERLXUQNKUDFROOYFPNOKVZHUAGTJMNZQQVMAQNOMKDKQPJNERIZCJBPEUMHFTTLCUWHRJDZNGCHAXDSAIWLPOFMXZJ");

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
    msg.setTimeStamp(0.0796337003289);
    msg.setSource(8845U);
    msg.setSourceEntity(21U);
    msg.setDestination(7186U);
    msg.setDestinationEntity(106U);
    msg.name.assign("GTHOSBASJCTSZHUFXGBZZIPUXEZD");

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
    msg.setTimeStamp(0.52206055015);
    msg.setSource(40240U);
    msg.setSourceEntity(215U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(123U);
    msg.name.assign("BTCYUXTIDFNZPKJKZKARDBNLZFMLCFKMEXTFZUVYEDBOSFWIKYQAHESBEGYWVVRWUIMHWVFPKFBNOGFZRCLDWLVBLSETWNLEACUCGJVDRC");

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
    msg.setTimeStamp(0.289155100031);
    msg.setSource(18277U);
    msg.setSourceEntity(121U);
    msg.setDestination(42983U);
    msg.setDestinationEntity(228U);
    msg.name.assign("GZAVSVBSXPHYQOEEAMMSKXOAZIEJFUNSEZFBGUDTDAIYCXABNPRUJKLPPDVFTWHYLBIRVOFHHHJOFACBUEATTWRCCTNMABOVDBWKIQFCNADTMBSJ");

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.0964174109522);
    msg.setSource(40539U);
    msg.setSourceEntity(163U);
    msg.setDestination(63621U);
    msg.setDestinationEntity(164U);
    msg.action = 163U;
    msg.longain = 1858999892U;
    msg.latgain = 3743191253U;
    msg.bondthick = 76159195U;
    msg.leadgain = 1649418959U;
    msg.deconflgain = 199505549U;

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
    msg.setTimeStamp(0.542084938752);
    msg.setSource(18513U);
    msg.setSourceEntity(85U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(105U);
    msg.action = 191U;
    msg.longain = 3678420516U;
    msg.latgain = 2520798626U;
    msg.bondthick = 359746144U;
    msg.leadgain = 2789909725U;
    msg.deconflgain = 2867862273U;

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
    msg.setTimeStamp(0.310266625907);
    msg.setSource(59126U);
    msg.setSourceEntity(154U);
    msg.setDestination(27364U);
    msg.setDestinationEntity(24U);
    msg.action = 95U;
    msg.longain = 3351806654U;
    msg.latgain = 3673277153U;
    msg.bondthick = 2348581743U;
    msg.leadgain = 3030631842U;
    msg.deconflgain = 1288978326U;

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

  return test.getReturnValue();
}
