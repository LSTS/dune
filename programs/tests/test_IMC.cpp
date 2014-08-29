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
    msg.setTimeStamp(0.7531376993349521);
    msg.setSource(3501U);
    msg.setSourceEntity(101U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(88U);
    msg.state = 93U;
    msg.flags = 142U;
    msg.description.assign("VKAKXQUAMOIIYGTMKQIYMWEZAXARETXEAOOPIGBSWSNJNCJIYNPTWYHJWVYTULNJJYJFETVUNZXDQAJSRHDBIZPWVDTEPKHSVGHCIAQSFLBNSTAFFFFUVUPXMOHPGLXDKWAQPIWYMLEMHRUEVERZJEVIUKLDZCSRHRCQUVULXCMDSFJFYDQCHTR");

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
    msg.setTimeStamp(0.240270623285888);
    msg.setSource(51641U);
    msg.setSourceEntity(230U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(162U);
    msg.state = 93U;
    msg.flags = 103U;
    msg.description.assign("SPHZVZATCJQLYUPTKBENCYLSZWDUGVFFILZSMMYTZKNHRUOOYLRHUTADAFGTICPZPOETIIMIWSGGRMBXRLSKMXECVATENUWJHROCJJKVONBJVBZJNHWYMVOYANSZCDWSWKCAN");

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
    msg.setTimeStamp(0.007533750618436197);
    msg.setSource(53706U);
    msg.setSourceEntity(192U);
    msg.setDestination(35456U);
    msg.setDestinationEntity(8U);
    msg.state = 64U;
    msg.flags = 207U;
    msg.description.assign("CNUZBNQKHPMXQRFXVQANADDANDCRFPGHWDLBTNNLYMWRCOEOFQDDINELMIJKXLEQFTKIPGYXEPHSSZJNVBERSCYITRHHOFSZJJQQULFJYWWDGXVOSDVOWTLBHIEJATRRGKKMTXJXAULQPMPIVHAHIZCGBCFUBVZKWHMYKOLXFZG");

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
    msg.setTimeStamp(0.6902061549526);
    msg.setSource(38369U);
    msg.setSourceEntity(74U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.26467258074459643);
    msg.setSource(44757U);
    msg.setSourceEntity(202U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.14346602296043398);
    msg.setSource(55622U);
    msg.setSourceEntity(214U);
    msg.setDestination(44620U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.19289577586566975);
    msg.setSource(4682U);
    msg.setSourceEntity(146U);
    msg.setDestination(11652U);
    msg.setDestinationEntity(68U);
    msg.id = 130U;
    msg.label.assign("KYAIUOCZVGIPREUYXQMCXKYGSEWGZBCNJJXFPDYCYHGHIPXEOQGOZAHJJBHQKLOTTLNCEXWEHFDQHSUHTKDBKKPVZSNVWQEVWJTVTETLPHRVASFVSLOIUCPUZBIOCYQRBUITPYBHLRMMRZOWRNVZAMFFKKTEYWBLCMUMABUAXEDRQDNROFPDHWXAJGBCFSNKNGGGZULWFWJPE");
    msg.component.assign("HSSREVFMWNBZFORYIPOSGDLOMGMXGLJRFKENIPLHIVEUTNPDZVUMPTZQO");
    msg.act_time = 55837U;
    msg.deact_time = 35607U;

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
    msg.setTimeStamp(0.8467980157030687);
    msg.setSource(16740U);
    msg.setSourceEntity(123U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(153U);
    msg.id = 198U;
    msg.label.assign("RTXAYACPDVEGHYGZSDMMWOMXRGFEEONMKYAMLLHGCOQFZDLRVQXIQCCQMDVKIQSYZLZLCBNPJRFPPWJSFPRYJCECIGLZCVPHSKQUSKQWRRWGPMABRUDUUOHQBIX");
    msg.component.assign("TAEUAYQIGNAHNCNSGBDMQGCEJSQFYGJDIKCENBDYOSPTDFFRPOYVKXQOZAEBBBRWWLNCSXDQGTYLLMOCXLPHXEXSPFLNEBHIEJSISMACZCSIGTNYZMGGNHR");
    msg.act_time = 7216U;
    msg.deact_time = 58075U;

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
    msg.setTimeStamp(0.6947310455731145);
    msg.setSource(36950U);
    msg.setSourceEntity(96U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(120U);
    msg.id = 88U;
    msg.label.assign("BMZFONULPZVTWHDBXIRFNVCPSYGZEJKKGLXKPNITBBDFEYJYMRFLGRENKANFYBMLTRHLGXJFAAVINBVUNMIBPRVNSXTUREALTAHDCGKDZPQCYUOYWPXULGZMOXAQWBEZBZFJIMHVHIJJDKXLMSARZHQLIEKJWPSWOOVRHAZEMDOIECUCCQKSWTSEUYTRVSWDGIJIQJSUOCGEDKSWYSUHCHDOJHNGAXTKGTUYXMCWFB");
    msg.component.assign("LPRJFYIZCFLPISQJBDIMVLZGQSISYQNWBXPNFXDTURJUVRCKHZQDOALADNRCPCOHYYQWWMYYTYQCZJSBGUKKWSGRGDEWONDZFXTL");
    msg.act_time = 13094U;
    msg.deact_time = 65183U;

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
    msg.setTimeStamp(0.9005496842051866);
    msg.setSource(39699U);
    msg.setSourceEntity(234U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(189U);
    msg.id = 70U;

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
    msg.setTimeStamp(0.26481256317326807);
    msg.setSource(53637U);
    msg.setSourceEntity(217U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(61U);
    msg.id = 217U;

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
    msg.setTimeStamp(0.6876985882641073);
    msg.setSource(32221U);
    msg.setSourceEntity(238U);
    msg.setDestination(64141U);
    msg.setDestinationEntity(80U);
    msg.id = 23U;

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
    msg.setTimeStamp(0.6761358680776571);
    msg.setSource(43100U);
    msg.setSourceEntity(210U);
    msg.setDestination(62715U);
    msg.setDestinationEntity(179U);
    msg.op = 215U;
    msg.list.assign("MUSGDTVYKKRILLOXNOWHOLTNVJPDUKOGCUFBHYDKHLKRQHVEDMZRTEZLBHXIYFSMAPXGFFAHYQWAIAWOQXOTIORZAXSVLBTDTCSKILRHSNWYTONDXQRECNEVBWZPSIPHWFNBULLGOTYWJFXKRFPJCJWMCVNPQANMIJYWJMUEDGXGPQARYRSKGEAJZCSTEVCSZRVOBABCGMZNXUVZIVCQDEZMFIQLGMSYQEDXJYUFUBIBUK");

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
    msg.setTimeStamp(0.4670575795354156);
    msg.setSource(28487U);
    msg.setSourceEntity(204U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(82U);
    msg.op = 95U;
    msg.list.assign("ZKWFPMOBPQJFMXOQHWLCNNLARXXWCXVLQVACJSNJQJRVTZRQKUISZDWBKGUCUDHRNTHEHNMIIJOWQCQA");

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
    msg.setTimeStamp(0.4453154345604119);
    msg.setSource(18751U);
    msg.setSourceEntity(74U);
    msg.setDestination(37867U);
    msg.setDestinationEntity(110U);
    msg.op = 188U;
    msg.list.assign("GSQYFDRDIVEZUZBQLMLGFRQOLRIUVHZUKGHREDWDOGQUCJCVAWGAMCOMQUZGTBAXSQMWKMGSMPDTMFTUQAPCXYLIEJWAABJSLESCITTTBZOCZX");

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
    msg.setTimeStamp(0.25487292074424817);
    msg.setSource(42138U);
    msg.setSourceEntity(109U);
    msg.setDestination(59620U);
    msg.setDestinationEntity(205U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.9309502492189261);
    msg.setSource(21056U);
    msg.setSourceEntity(192U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(203U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.5237572236689446);
    msg.setSource(21006U);
    msg.setSourceEntity(86U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(208U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.40957362605579417);
    msg.setSource(19685U);
    msg.setSourceEntity(130U);
    msg.setDestination(5667U);
    msg.setDestinationEntity(234U);
    msg.value = 222U;

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
    msg.setTimeStamp(0.7735449287418503);
    msg.setSource(6449U);
    msg.setSourceEntity(191U);
    msg.setDestination(25726U);
    msg.setDestinationEntity(49U);
    msg.value = 82U;

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
    msg.setTimeStamp(0.19953030360971513);
    msg.setSource(2706U);
    msg.setSourceEntity(137U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(6U);
    msg.value = 33U;

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
    msg.setTimeStamp(0.15647999724306372);
    msg.setSource(29609U);
    msg.setSourceEntity(201U);
    msg.setDestination(18800U);
    msg.setDestinationEntity(188U);
    msg.consumer.assign("QGOXMZWQTIITKSNAJMHXVNXKLGRYSMAOFACCZCEBPBGQVKMVQBLSSGZMVOLHWAPFUYXGHTPKRAWXZQVFHHWLGUEEDSCFLNLQICWHJOLOVNQOAPJBDFONIAMTGXEEHCUKDSXNCLRQBDYMEQNICDBFKLBGYQJIUZRRYSODVZIWCU");
    msg.message_id = 54552U;

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
    msg.setTimeStamp(0.8979975446082546);
    msg.setSource(26268U);
    msg.setSourceEntity(146U);
    msg.setDestination(49458U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("MNCIPTUTULYIGVYDWQKWRODAAKFFHRDATVWNQBBZPKVODOUEHMPQFSCIGCSZXSUGBYSSVIGYRGVOXRZIVFMNJCRSKXVZSGRKPBOGCMHKULYUDVYNWHRSHIAQOCZWLBLSXQFBPTTBZJHXG");
    msg.message_id = 38512U;

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
    msg.setTimeStamp(0.679918512213607);
    msg.setSource(23828U);
    msg.setSourceEntity(214U);
    msg.setDestination(23912U);
    msg.setDestinationEntity(107U);
    msg.consumer.assign("FNGLPLERMOWFBMWIZKXEYMFMWKJVEISWOSPTEJFUCOYWMUHODCVXQHMKKZNBRZPRHUTRAATOXYQYIECRLGZTQISDZPZB");
    msg.message_id = 2865U;

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
    msg.setTimeStamp(0.2781034793450562);
    msg.setSource(23045U);
    msg.setSourceEntity(85U);
    msg.setDestination(34754U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.03654257916381176);
    msg.setSource(683U);
    msg.setSourceEntity(108U);
    msg.setDestination(44205U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.048764619079384564);
    msg.setSource(56202U);
    msg.setSourceEntity(22U);
    msg.setDestination(52312U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.5753320329002944);
    msg.setSource(17589U);
    msg.setSourceEntity(126U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(192U);
    msg.section.assign("FYOKTIIMIWAGHNEWBNMVFHHPICXBKGPDTGVUUXOQRIDEY");
    msg.param.assign("HGZWZCVALGXEWDMMYHWUQUANBLJIJTYMFUHUAFVEVSAZHJULGOXLYOSOQVHEYDDPTRBJOWGPAOXBRKQQBVXUCKDAWUSGCFJWARQINHHGDUKZFCRJIQVKMPEXTESNRPNDZTZBSLKXMCIJCYVJBCATRJNFTENMXTCNBKAFRASIPBKULTWYOIPCYIHFSRQSTLEYGOOWGGIBZQYZVWYGMJ");
    msg.value.assign("QCKZCEOBKIKEGLTUVDEDXEGTDNYGMBXDUWMECBYRYIRTEFOQEQGIGLOKLUZGEWTMNIRAHXWTGFBVADFSZLTNFMMIZKWSJIHJNZSRBHMQYWTNLVUZYWYBFHOKDSHFUJQNVNAPSHSUHJDJYUASBPGZBCMWDXPLJSANRGYSJZRFV");

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
    msg.setTimeStamp(0.010672612872398068);
    msg.setSource(55178U);
    msg.setSourceEntity(91U);
    msg.setDestination(58820U);
    msg.setDestinationEntity(87U);
    msg.section.assign("MANXOLNPBCTCEXAFIWYDUXKGYPSQREUOHYIPETDUNIYACTEUJQDWWGQKLOALFPAPZGRZZOAZLHDKIKTWMNAKCVWQYNUOUFFBBIORLMANBJKFFIATBSFQWMGGOFJYDZTEVTCSSQVWDKOE");
    msg.param.assign("YZBRVGIWKCIJLDGVHXWCGMKTJFRMABALQRPSNRWNHEBLHQSVDDLKABFFMXVTGPSJFWSEHPZDPCHQLTBCIUVOOBFNSRHIHAQZTGJDJCYCVAEPIYROOLHYCOOLFUUPCSKNEROYYTICUXTANHXUJIDYGDQWOKQVMEWVPNSKXEYAXDWRXWKGFRFFKMLLKENMUZDJJIBZBUGMSBAOCJHDXPNGMQNTJZELIQKWSXOEPMITBZNUZFPMQYRVUZVYQTEWZ");
    msg.value.assign("JIXVCFMGSVELXSPWAXHEGHENPNPWXZRLBEFSMWDRRXYHXIFOADMVOVFOAOVEQWWRODTDMSYGEZTKHDTEUWMCTVQDTZZSBJKNEPPMLKXVMHLYQJDJXUTADWCJYDAFZVUPKOGRLIUKKKRYHAFHGSQBOQYYJJLUMTJGNLRFCOABCXPACOZSLCCIVNGIQKDQHZBUFNHOINMYWFBPSBTCGSJTSRTUQIIYUUYRZKZRBZNKJBLPIEANWQWGFPGBUMA");

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
    msg.setTimeStamp(0.17326571880296238);
    msg.setSource(57613U);
    msg.setSourceEntity(91U);
    msg.setDestination(9635U);
    msg.setDestinationEntity(242U);
    msg.section.assign("JEANQSPHEBGVMVYTWQMYVDYHURKYNZMPIPBLQEDZZG");
    msg.param.assign("LODELQGGWCTHHNVTYISKUBAGUXOKHMZIVOKGASHSQGYJYWNZICMWCVLEFQMPDCNDTKOEELYNCGSSOILFPBBXXHFAGFXAAQREZUOWQCCPXODBMBFZKUUPSVEACJISLMSWMFDGTEHNZHNXIZYPYOIUMHDMDVZJZWRFVTEUZRATBKRUQBSYUHCQJGWHVXTFLURS");
    msg.value.assign("YCICTSVHFHGHPSSCGPMRNZMFAZYYJYFJNVXQMLUKCTHXRKVXYMIVLPERWDKQXPTTARJYFDFDBSNAIHEPCGOBJQIOUPBGSREPKTWEVUAHVLZGWKSJXPNBHXUEQFEHQIUQZBGLSGAYTRWZNYJALLIUXZWAVZKEOULOFSJOUOHKOJWGBMXWCIYFMAKAYCXEGVCZWBLDSENOCKMJORLNRDWDJMZMMUUHNTBZQQQWDPERTFNIVAGT");

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
    msg.setTimeStamp(0.804081334162459);
    msg.setSource(36775U);
    msg.setSourceEntity(78U);
    msg.setDestination(11143U);
    msg.setDestinationEntity(138U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.6229970597441467);
    msg.setSource(34331U);
    msg.setSourceEntity(233U);
    msg.setDestination(59762U);
    msg.setDestinationEntity(245U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.74117725624451);
    msg.setSource(31329U);
    msg.setSourceEntity(214U);
    msg.setDestination(19458U);
    msg.setDestinationEntity(25U);
    msg.op = 162U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("JXYDFLVKGNRMAWCUCXOVJJITSEYTBXQEVQJSOPZHKVBGUAWLIDFWDXIOARAPLQRPYQHATJQRHIFXEMUJBPNGDHXZRSCVCFALSRPWRL");
    tmp_msg_0.param.assign("NPTZAYDNNELSFULDGXQCJVIFJYWAUMJPOBBQNGARKRZFSQPIKOWODKIRWVBTMJUBAQDKIICFTNFOLRJBMFLXCEWDQBYWQYKAXRYIB");
    tmp_msg_0.value.assign("EDUEHVWBUQFFMXMUKAQJTRTQRLQLWBIQGHRCZXIPHXMJWWBGDNCQFIFNXORGUEVIFKVZDJXCLYSFGNJUBBJAHICPSJRZALVNOMHCADMRXKVCEEMEFSPOPHJEZTGALQYMDSDAOCNDTGLBYLMFVVSGSWFBXIPYYKPTZIZUSKCKYHPZTHNRRSOGRXQ");
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
    msg.setTimeStamp(0.8258968403949997);
    msg.setSource(23582U);
    msg.setSourceEntity(216U);
    msg.setDestination(20981U);
    msg.setDestinationEntity(186U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.37266891778853073);
    msg.setSource(45221U);
    msg.setSourceEntity(136U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(96U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.3627116818423818);
    msg.setSource(61083U);
    msg.setSourceEntity(228U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(32U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.33310103281602965);
    msg.setSource(47806U);
    msg.setSourceEntity(57U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(120U);
    msg.total_steps = 79U;
    msg.step_number = 160U;
    msg.step.assign("YEATNNSMNXCZQBFOHPWGLZWLQLXFVXMTKSYHLJRBENZOMMCNZEVQNCQTOXSQKVJEIEWOOEUYLOMWMUMVCFJPPMLSMNBNIUIUBGEQFAAAOGWWBKSSOXYITJSEVSKSIUTYDTHPJPWPAYUDPVUQNVBRYHVZFBREJGDDAJZWIJGVGXHLBCKRCFBYRGAZXOCUUXDTHLHNKRQCRHLFIZMLEYDDKKKWCGSQTIXWGYOPFRGIXFCDDDPBUJZAKVHZJ");
    msg.flags = 194U;

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
    msg.setTimeStamp(0.9251768621842076);
    msg.setSource(46678U);
    msg.setSourceEntity(123U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(211U);
    msg.total_steps = 148U;
    msg.step_number = 91U;
    msg.step.assign("UMYONGQWDFGTPNKKYKLPYKMCVCZZGDQMHGBSASACCKNHIFMFKBVPLUE");
    msg.flags = 65U;

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
    msg.setTimeStamp(0.6957562860432361);
    msg.setSource(18308U);
    msg.setSourceEntity(38U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(113U);
    msg.total_steps = 162U;
    msg.step_number = 190U;
    msg.step.assign("CXAGRUQUBSBUKZVGDBYGESLIGYDFPZYIGHCJBYYIKQJABOZGPXVZKEVJRRIFDFRHIGHXQQRBHXCHPGHSVSODIFBLACESXMZWRSBNLQDPXBYDSQJDXATLWRNREOWEQEFLTULCFVCKTTZDPNNTWJENMM");
    msg.flags = 51U;

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
    msg.setTimeStamp(0.06187520324391371);
    msg.setSource(63201U);
    msg.setSourceEntity(81U);
    msg.setDestination(27276U);
    msg.setDestinationEntity(161U);
    msg.state = 5U;
    msg.error.assign("LZWUBTDKXNEUSGVBKOQSQGTWHFNZMSWJKOWPIPJXNAJCVQYOBZJPHJEOBFZAHOCCFISWSAMCKUQOKLGLDJUETIFAIHVPCAPYYTHYWKGQLXCGXDVYLKPADFVWGIMNECXZSBRE");

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
    msg.setTimeStamp(0.002026631057356232);
    msg.setSource(17114U);
    msg.setSourceEntity(216U);
    msg.setDestination(18501U);
    msg.setDestinationEntity(68U);
    msg.state = 67U;
    msg.error.assign("MWCDOSVMLEMLUDELUJRBFAZYGNHVUZRQMCOBCANIRIZOGTVTOQGEURFWGHAQQCXMSHBLWIMBIOTPKDDEDNSECYZIRFZENYY");

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
    msg.setTimeStamp(0.6748853909278856);
    msg.setSource(58450U);
    msg.setSourceEntity(186U);
    msg.setDestination(22467U);
    msg.setDestinationEntity(18U);
    msg.state = 99U;
    msg.error.assign("WUQGFJTWSEYZPBYOWZEVHGVVSXMIYUUSREGZBWLJMJPFKDNGEFNNQDGHRHCUCOMXRCWPLTPZVXJDIRUVDHLETZGOTKFJWULDXNLHGWICDMIGXEDHOAKCMBRYUQJTSFUYITRVMDEHPAOCIGVATADGLSZQAQZHUALSWWJIVYBQNCKBSFCIMRPXRYUONEEOBQLAYHRKPOOCBMYKJFMKJLVSP");

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
    msg.setTimeStamp(0.902467864293593);
    msg.setSource(12187U);
    msg.setSourceEntity(120U);
    msg.setDestination(54857U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.8423663468609811);
    msg.setSource(53600U);
    msg.setSourceEntity(24U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.1665629276515901);
    msg.setSource(30638U);
    msg.setSourceEntity(207U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.3036862668551281);
    msg.setSource(6441U);
    msg.setSourceEntity(24U);
    msg.setDestination(4124U);
    msg.setDestinationEntity(42U);
    msg.op = 44U;
    msg.speed_min = 0.4959695341908794;
    msg.speed_max = 0.9305333588841511;
    msg.long_accel = 0.814651324255837;
    msg.alt_max_msl = 0.8323033482023825;
    msg.dive_fraction_max = 0.24596956423096594;
    msg.climb_fraction_max = 0.6530865504359534;
    msg.bank_max = 0.006278887698840663;
    msg.p_max = 0.5090578529663635;
    msg.pitch_min = 0.6548958021230918;
    msg.pitch_max = 0.0959244695496917;
    msg.q_max = 0.4866883855228811;
    msg.g_min = 0.19975938589384046;
    msg.g_max = 0.20200238961369932;
    msg.g_lat_max = 0.7536110125368931;
    msg.rpm_min = 0.02157661053660276;
    msg.rpm_max = 0.9592313906714317;
    msg.rpm_rate_max = 0.9940562576033277;

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
    msg.setTimeStamp(0.5919596364312248);
    msg.setSource(32124U);
    msg.setSourceEntity(32U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(221U);
    msg.op = 181U;
    msg.speed_min = 0.9989877986777141;
    msg.speed_max = 0.861468105229362;
    msg.long_accel = 0.0770784096362307;
    msg.alt_max_msl = 0.24391660055816988;
    msg.dive_fraction_max = 0.6905817953733643;
    msg.climb_fraction_max = 0.8562618160316885;
    msg.bank_max = 0.6571601782352402;
    msg.p_max = 0.4053795171701615;
    msg.pitch_min = 0.7319600436672313;
    msg.pitch_max = 0.05768609500439292;
    msg.q_max = 0.6742165956948829;
    msg.g_min = 0.9492822566091658;
    msg.g_max = 0.5980589142047579;
    msg.g_lat_max = 0.8265403728781255;
    msg.rpm_min = 0.31662522935353354;
    msg.rpm_max = 0.727288046417392;
    msg.rpm_rate_max = 0.5489692270339769;

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
    msg.setTimeStamp(0.8194582457278833);
    msg.setSource(19591U);
    msg.setSourceEntity(215U);
    msg.setDestination(20368U);
    msg.setDestinationEntity(180U);
    msg.op = 123U;
    msg.speed_min = 0.3259969540869958;
    msg.speed_max = 0.9024824982001748;
    msg.long_accel = 0.8187701571411463;
    msg.alt_max_msl = 0.08893944806049792;
    msg.dive_fraction_max = 0.5485891879986909;
    msg.climb_fraction_max = 0.38675296328491404;
    msg.bank_max = 0.009964524005717124;
    msg.p_max = 0.970421187870267;
    msg.pitch_min = 0.9903440178003594;
    msg.pitch_max = 0.29760186808364;
    msg.q_max = 0.12865378297207708;
    msg.g_min = 0.348035541747172;
    msg.g_max = 0.7630176127456806;
    msg.g_lat_max = 0.7568288114987294;
    msg.rpm_min = 0.05584908411295264;
    msg.rpm_max = 0.7244278450337324;
    msg.rpm_rate_max = 0.9071669724517475;

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
    msg.setTimeStamp(0.9390705501766321);
    msg.setSource(22289U);
    msg.setSourceEntity(15U);
    msg.setDestination(62052U);
    msg.setDestinationEntity(61U);
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 117U;
    tmp_msg_0.error_count = 129U;
    tmp_msg_0.error_ents.assign("JKWCMGEFPTUEDQVJMWDEASHFOVFCCXZLGNNYBLUFDXUGMAKHMHURSYRMVSGLGSDUQSNDJLKCMSKZPJLOHFISCRHBDTRYYVUIIQPTEHUPZUFIZBHIJGPQKWNVLMIVHIBTANXRUZRY");
    tmp_msg_0.maneuver_type = 51243U;
    tmp_msg_0.maneuver_stime = 0.13925284460702203;
    tmp_msg_0.maneuver_eta = 22053U;
    tmp_msg_0.control_loops = 2379252140U;
    tmp_msg_0.flags = 83U;
    tmp_msg_0.last_error.assign("VGWCKBGGOMPBLPZQJSWVEWCNKMVOLITKCOXMMVIMYEUQZ");
    tmp_msg_0.last_error_time = 0.2268782103985747;
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
    msg.setTimeStamp(0.2755728028324358);
    msg.setSource(64736U);
    msg.setSourceEntity(154U);
    msg.setDestination(52582U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.5399500182097114);
    msg.setSource(10727U);
    msg.setSourceEntity(223U);
    msg.setDestination(24251U);
    msg.setDestinationEntity(151U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("MFGQSBLXBKQVNBPGEGOOOLXUXAMRXJLHTDZBEPYNYHCNWGFQVMYXPKOTLRJTQKHIDFPUGWLFOQWRSFDYNGLCEAUB");
    tmp_msg_0.formation_name.assign("INNSIJTVAQKPOOCJPEOIEZLRXEHTBUQJQGPOWSSAGIBTHTVQPLZBATKHUCIXFIHCVRDDLLNNGSSSWX");
    tmp_msg_0.plan_id.assign("NPQXOVCERCZYCXHJGVXZQJFUNUMIYBSHGHTLRGNRZGBEPMIBSHEAFQJOFONSPWOWQUYCXOKJDCJZTRUVMIVDAXAKMZVNPDMPHGEMXHJBIIQFLGKYDFPVUOJXECZYRURHSTDWOZKLCPOPUNVKFTRDBHKOJYQQOEZMLZ");
    tmp_msg_0.description.assign("VKEMOHRFOVEHUAPQVNOBIAIORLWKUKXOYPQRRKBHWZCRSYOIIEKQJNCDXRQDTPWATFIRIFOYLDYQNCFEVHDRWFHDEUVTUSLTHWLVECCASZKGXWGTUMJNZYFYNDTUJZMHKZKJLCXOTKANHPBCQVBCDYKZNNMLGWIVFGWPJDMMJSXMHWEXFXZSPUTWYGYLS");
    tmp_msg_0.leader_speed = 0.7076263863706207;
    tmp_msg_0.leader_bank_lim = 0.7187457319119845;
    tmp_msg_0.pos_sim_err_lim = 0.19508195091063452;
    tmp_msg_0.pos_sim_err_wrn = 0.4962835609938908;
    tmp_msg_0.pos_sim_err_timeout = 12017U;
    tmp_msg_0.converg_max = 0.7216491417686675;
    tmp_msg_0.converg_timeout = 46762U;
    tmp_msg_0.comms_timeout = 18763U;
    tmp_msg_0.turb_lim = 0.9992151926149347;
    tmp_msg_0.custom.assign("TCGJWRUJJCFAMEWOGGKIHIWSQFGQGRCRMRCYRLHPBZCMMLIIVMSIPDACAQWBDPNYQAYMDVPZHZEUEDTUGVFSLXSBQXKSJKGTBKLYOXNKDWCYUZJBSUZHKTIPZVNBFRWEWJEFVBOCSTQMUAIEKPNFOTQXQDYHBLUXJEGXKZAPXTRWWBQFDGQLNEUYT");
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
    msg.setTimeStamp(0.6822169924155125);
    msg.setSource(7864U);
    msg.setSourceEntity(35U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.7735820124206435;
    msg.lon = 0.3857343730604099;
    msg.height = 0.07610658528772996;
    msg.x = 0.43138883299596764;
    msg.y = 0.7409828132570349;
    msg.z = 0.3488016041237707;
    msg.phi = 0.32374227489745966;
    msg.theta = 0.8786719245282656;
    msg.psi = 0.9653022601283614;
    msg.u = 0.8344522184498253;
    msg.v = 0.36871857479532033;
    msg.w = 0.44622648536033005;
    msg.p = 0.5342346896884714;
    msg.q = 0.9040772351128482;
    msg.r = 0.4101322400021511;
    msg.svx = 0.36512499540961907;
    msg.svy = 0.007612537350170645;
    msg.svz = 0.3048366559789957;

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
    msg.setTimeStamp(0.36657726412025826);
    msg.setSource(45529U);
    msg.setSourceEntity(224U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.39114187166856584;
    msg.lon = 0.19713977724632303;
    msg.height = 0.9705671176732027;
    msg.x = 0.7190100943840568;
    msg.y = 0.26374579518247976;
    msg.z = 0.6369390731441725;
    msg.phi = 0.20802314235908315;
    msg.theta = 0.20562455753453723;
    msg.psi = 0.7296058736383773;
    msg.u = 0.06957792420909314;
    msg.v = 0.6234122126282147;
    msg.w = 0.9761611451948344;
    msg.p = 0.8152361537582896;
    msg.q = 0.6283220045994938;
    msg.r = 0.2446199636521431;
    msg.svx = 0.04002469870452974;
    msg.svy = 0.9393123556204651;
    msg.svz = 0.5380216800476535;

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
    msg.setTimeStamp(0.1648348454710915);
    msg.setSource(44369U);
    msg.setSourceEntity(132U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.18871467106001072;
    msg.lon = 0.5067251113710595;
    msg.height = 0.20326512800859242;
    msg.x = 0.4076303377677387;
    msg.y = 0.5812214808935;
    msg.z = 0.5060927453304955;
    msg.phi = 0.09345527099800366;
    msg.theta = 0.06979631313204115;
    msg.psi = 0.7881704471723878;
    msg.u = 0.2965742413991238;
    msg.v = 0.7618601335886513;
    msg.w = 0.37363079537945443;
    msg.p = 0.08513529950267906;
    msg.q = 0.357774141493887;
    msg.r = 0.31643140065566877;
    msg.svx = 0.3681105876143854;
    msg.svy = 0.18287009447815938;
    msg.svz = 0.7349148534865232;

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
    msg.setTimeStamp(0.14029141705015136);
    msg.setSource(29407U);
    msg.setSourceEntity(86U);
    msg.setDestination(2031U);
    msg.setDestinationEntity(33U);
    msg.op = 183U;
    msg.entities.assign("CZMLYNGBMIJXYNNBRKOFPMUZEEQBTJTWHTOGURISCKZPDOECNJCLJXVGESATPLQTVALHPOZHQCQVAYLUGNMOSIOTPKUZRRSYKMIWVLEAATYFEPJRBZDEFYFVPFZURLYOXUWEMEKITFCMQGHFRDKNSWQKVRACUGCFCFBHIGXPMXOURWHKVYMUIB");

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
    msg.setTimeStamp(0.4231069230495098);
    msg.setSource(18696U);
    msg.setSourceEntity(136U);
    msg.setDestination(7600U);
    msg.setDestinationEntity(97U);
    msg.op = 113U;
    msg.entities.assign("TNASYYSGRWWAQCUZAVHCNPFLGFQAANGMTEJISNQRWJUCALOXCKZGUUBTEPVZHARXFJJRQVKNZLYBMEQBRBTRMTAXXUWCWHKLVDLDRHKBFVWTOJPEFTIDQKIZAFZMXQEWRCYGEOONBUEOESKYSGBIVGNNYHRZOCTMIBCWODOITXSEXSYPVPH");

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
    msg.setTimeStamp(0.405450911927686);
    msg.setSource(32944U);
    msg.setSourceEntity(204U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(129U);
    msg.op = 178U;
    msg.entities.assign("FAUIBJSXHRPYHWNBOLWIZRKJHKUSMGNFZIUWIBCTHNRCNLJCFGKEIQDBJXMVPSLMVAYYFEBAISTEDKXTWZBQWKEVTOOZHGQFERRKALWRALPEVXZSUUBFXCVSUEAB");

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
    msg.setTimeStamp(0.935215047008912);
    msg.setSource(15153U);
    msg.setSourceEntity(24U);
    msg.setDestination(9131U);
    msg.setDestinationEntity(106U);
    msg.type = 167U;
    msg.speed = 39004U;
    const char tmp_msg_0[] = {61, -113, -69, -93, -48, -38, -88, 89, 33, 124, 51, -60, 41, -62, 54, -33};
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
    msg.setTimeStamp(0.8389700165963816);
    msg.setSource(27980U);
    msg.setSourceEntity(8U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(232U);
    msg.type = 242U;
    msg.speed = 64694U;
    const char tmp_msg_0[] = {62, 61, 108, 104, -49, -84, -121, 59, 72, -9, 13, 39, 119, -3, -4, -112, -73, 123, 19, -85, 103, -29, -72, -3, 10, 121, -32};
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
    msg.setTimeStamp(0.1560303566822937);
    msg.setSource(7923U);
    msg.setSourceEntity(160U);
    msg.setDestination(7728U);
    msg.setDestinationEntity(5U);
    msg.type = 49U;
    msg.speed = 33182U;
    const char tmp_msg_0[] = {57, -125, -83, 122, -54, 121, 7, -50, -55, 122, -53, 41, -41, 50, -128, -76, 30, 79, -124, 92, 15, -87, -72, 104, 115, -12, -96, 9, -50, -61, -40, -53, -27, 26, 37, 95, -128, -62, -40, -51, 92, -59, 62, 113, -120, 14, -116, 89, 109, 52, -113, 72, -55, -29, 16, -126, -93, -119, 101, 29, -8, 53, 65, -31, 75, -113, 44, -16, 102, -45, -114, -105, -95, -8, -105, -127, -81, -124, -55, 26, -4, -96, 87, -58, 55, -121, 30, 46, 68, -4, 86, 33, 111, -95, 32, 80, 54, -43, -24, -103, -103, 24, -97, 32, -67, 16, -21, 122, -22, -103, -127, -12, 36, -23, 72, 15, -95, 73, 41, -106, -40, 67, 122, -32, -88, 41, 59, 3, -4, -25, -24, 25, 51, -15, 52, -20, 22, 15, 51, -85, -100, 101, -16, 26, 27, -67, -108, 65, -19, 53, 80, 6, -33, -99, 82, 65, 3, 116, 36, -73, 117, -60, 100, -56, -5, -91, -33, 124, -90, -45, -84, -10, 114, 89, 115, 84, -6, 115, -112, 106, -69, 77, -97, -76, -85, -91, 6, 56, -98, -97, 29, 29, -45, 83, -51, -39, 93, 112, 73, -70, 102};
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
    msg.setTimeStamp(0.7607959253773876);
    msg.setSource(61929U);
    msg.setSourceEntity(232U);
    msg.setDestination(58686U);
    msg.setDestinationEntity(165U);
    msg.op = 224U;
    msg.tas2acc_pgain = 0.4214934728926676;
    msg.bank2p_pgain = 0.9055745180320026;

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
    msg.setTimeStamp(0.4463275476248757);
    msg.setSource(12801U);
    msg.setSourceEntity(28U);
    msg.setDestination(22475U);
    msg.setDestinationEntity(220U);
    msg.op = 118U;
    msg.tas2acc_pgain = 0.0016145399690788986;
    msg.bank2p_pgain = 0.09499849509812175;

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
    msg.setTimeStamp(0.6013800475068214);
    msg.setSource(22755U);
    msg.setSourceEntity(131U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(178U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.591106428568468;
    msg.bank2p_pgain = 0.025505669321873703;

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
    msg.setTimeStamp(0.13969280292644037);
    msg.setSource(12837U);
    msg.setSourceEntity(214U);
    msg.setDestination(1440U);
    msg.setDestinationEntity(226U);
    msg.available = 3250210088U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.969955009792439);
    msg.setSource(54067U);
    msg.setSourceEntity(1U);
    msg.setDestination(31428U);
    msg.setDestinationEntity(96U);
    msg.available = 4293975630U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.10746603052823789);
    msg.setSource(15243U);
    msg.setSourceEntity(26U);
    msg.setDestination(16470U);
    msg.setDestinationEntity(246U);
    msg.available = 3870588348U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.9941397255405171);
    msg.setSource(2201U);
    msg.setSourceEntity(2U);
    msg.setDestination(48726U);
    msg.setDestinationEntity(24U);
    msg.op = 58U;
    msg.snapshot.assign("BPXABXIWCOULYFIIPDHQNCAPCSCMVFSFFANZCPCIHNTRMPOGIVCABXQPVEORADQRRKSYZZGIAYCDU");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 188U;
    tmp_msg_0.mode.assign("ZXXFOKLATYSVHUVISBHAIFZQOUQSJAUXVSTAXOPNKKYRXHTTIBOGKIFEIBMYEYIOKZGYOFITOHIKQLTJABFLPWXICSVQNWEDNMNOUBDYJDYVYQASUBVLLMMTHIZDZTQEXQDLRVLDGXRPPWFAJR");
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
    msg.setTimeStamp(0.16875838488409312);
    msg.setSource(8621U);
    msg.setSourceEntity(145U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(90U);
    msg.op = 110U;
    msg.snapshot.assign("GEBMHHRZGWDATQJVTYBMDXCCRAMPTYGCZNLUAXDUSGDEDFFGOWVFPYBSVTWSKFEELHRIPERSZ");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 97U;
    tmp_msg_0.reason = 17U;
    tmp_msg_0.value = 0.8764636180486916;
    tmp_msg_0.timestep = 0.8020471268978286;
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
    msg.setTimeStamp(0.387377284344382);
    msg.setSource(9480U);
    msg.setSourceEntity(26U);
    msg.setDestination(29274U);
    msg.setDestinationEntity(231U);
    msg.op = 74U;
    msg.snapshot.assign("KJYZSIOPZYOOTZPRRBBXRFDQMAPYOHXIESIEWKPPQVARKCCFGATXBQPNUVYSZMRKSUUJILGFVOOVUAWXJUXCLJFWNXFBTOFKYMWCHLMUJTMLWGFEWGIBBJQXYISQWTPPIDAQCZGYWYKMSBNUCLTDEKRZMAVDAVHEXVCWJIQPHWCIXXSYDDHTDTSHSQPVBDVJGNOZEAROKVEGODJZNRUAUENYNQHLSMHFNZJGELBZHQIECLCKRGKFTFLMNRNLBT");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 20749U;
    tmp_msg_0.sys.assign("LLDRYDCLVVWZWNMKBCVYEASXUCXAKAFXGSLMPHHIFJSKTQMWXZLBFGJDKAGTEJQPBOWMRUOKYWHUXIHVKBASOHCDTHHWNANOYIIZUJYBVSFNVIRFTBJDSUFEOZMMUSZKTMOTPVQJFRWMCFKBWLBCQTYEPODQGZIUDRCTORXNWHCKMYTSIJBRQYQIMPVHFANACNYLIZUIRCBAEGXHXGDEGOPQYZEDWASGPRPZSUVNNFQELU");
    tmp_msg_0.value = 0.5849595959442302;
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
    msg.setTimeStamp(0.815478927467861);
    msg.setSource(53805U);
    msg.setSourceEntity(101U);
    msg.setDestination(29643U);
    msg.setDestinationEntity(240U);
    msg.op = 37U;
    msg.name.assign("SAYFBZRGBTYYXYHYQHDXSFOMLUCIFOCRBOWAGWHOEWITJXJQBKKVOFEBGGZTSJKMNPZWQFXQLYSZCLVGJHTPSCWHTKDTJPDDXIKFFNEAXTSZCDXCMGGUNODVLNONMMCAQRSEKNKJMMEMVVRIXSUJLHVIPZIXWBPUQPFDRGBAZAZTJPPU");

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
    msg.setTimeStamp(0.1724580550960465);
    msg.setSource(62291U);
    msg.setSourceEntity(206U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(27U);
    msg.op = 245U;
    msg.name.assign("QJYBSYUBWZADCVLOZUMNYLPGWWIUDRXEPDAFHKDBXXHFBF");

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
    msg.setTimeStamp(0.034323933007727625);
    msg.setSource(13209U);
    msg.setSourceEntity(174U);
    msg.setDestination(46065U);
    msg.setDestinationEntity(121U);
    msg.op = 124U;
    msg.name.assign("LPRHRLIDSXOAGZUDARYGQAKGDVJBXRQYOIMPPP");

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
    msg.setTimeStamp(0.30480652946642295);
    msg.setSource(11563U);
    msg.setSourceEntity(106U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(242U);
    msg.type = 244U;
    msg.htime = 0.20063706258976077;
    msg.context.assign("EBGQZFONSJPZQJPOOTXEFKLCEGMOZQASIVIDKQKFATXNWYULCSVUJAUFKUDPLMLVJSYTSAIWHGJBMYCNZHSKTVQOFHVSHCQBCGMVGZXNKJNNBZZAGQEEAXUHEVTROBRPWQXZYCNMTTXRDFPMABVIOGDRODKDDLZQIWYBKKTULCZJYIWTWVPIFLFCDM");
    msg.text.assign("YJZOIGMJFWTDDVCETKWYZUVYHSMDEROWPSPVTJBPCEXLALOWHBYJJNXGHSZCFROVDNFQBDZFUKIXMNGZMPALCRNKAAEJZVDDLXAFAQQFTPIOXBKFSNMTVCBMZVGSEQOIDNBJFGTRPFMAGDNOWWERHYBTQKCWHGPUQJXSTNLXEHULAPZYHOTJAAWISVQHBIVLRFJXXPM");

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
    msg.setTimeStamp(0.5367003498856688);
    msg.setSource(34362U);
    msg.setSourceEntity(187U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(216U);
    msg.type = 52U;
    msg.htime = 0.5957602943559035;
    msg.context.assign("YIUQHXUSYZBPQWPEOCJWYUBAC");
    msg.text.assign("JCCTATJDHLNKSTZXSDKLSYXUIUSMLGRMWANKCLOQFXCZXRLGERWQWDHRTGWOHRKYCTJYODOXZNZWMFMOFYDQUEEYAMJVNMEXGGDULUOARQHEVYPBBQQKPDWEHMMTZECVTIPAGWPLZXPOFJIGFSEBTHJZNCYIUCVWUYHSLENPJVADFAURBHAGPANIVDVNBLFRZBZKBSOMIPXCMSRSLVYGEKQQPAFFYHZWQWNBIQ");

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
    msg.setTimeStamp(0.6115728050796937);
    msg.setSource(49272U);
    msg.setSourceEntity(111U);
    msg.setDestination(57706U);
    msg.setDestinationEntity(98U);
    msg.type = 156U;
    msg.htime = 0.7349562463328814;
    msg.context.assign("JJSRIZPNBIMQKFBXIWNNZUGTYOVVNOAAYFWACCJEKFJIVTXJCSTDUXXRLAZDWTZUGDRTEZFWMCVRBJVTERNPERLA");
    msg.text.assign("QQTAJWLYVVIEZTRBNHESHTFSLZAAUSDMWHHWBRCUEXHSVLFMNZDLRECPGGKQIVUWOUCGVPIMKNYECTROMHOYESFQEJVKXWGNQZXKPUAFWOHUOBXEIJBMCZYBZPDSXJQPPLDNOOTUPCKPBJGGFNRHRTJIUOYXKDLYZPYDHXEKJDJVLIVUWCYXQZSGQBFMATNTIQFSCRRRFJQOJGAL");

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
    msg.setTimeStamp(0.4452267077579082);
    msg.setSource(7296U);
    msg.setSourceEntity(67U);
    msg.setDestination(55961U);
    msg.setDestinationEntity(6U);
    msg.command = 36U;
    msg.htime = 0.04363142820751542;

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
    msg.setTimeStamp(0.6058806210298177);
    msg.setSource(3580U);
    msg.setSourceEntity(154U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(211U);
    msg.command = 227U;
    msg.htime = 0.8737059571459607;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.htime = 0.32685646852141603;
    tmp_msg_0.context.assign("ATUCJNRDLTQVLBMGMQLTDYWUHJJDPRNKGES");
    tmp_msg_0.text.assign("BRRYPEFUFLLKUCUSTNAMRETWPXIINGZQDVBOVFSMTRDBO");
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
    msg.setTimeStamp(0.668627735740057);
    msg.setSource(11946U);
    msg.setSourceEntity(34U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(86U);
    msg.command = 202U;
    msg.htime = 0.11664088990264687;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 5U;
    tmp_msg_0.htime = 0.9793238023723106;
    tmp_msg_0.context.assign("UUDFTRKUTBEYILKODMUYWSCIRYPDMWZGYXZJWMARVFBFYCMSOEAVYJOJGSDGHGXOYSSBVOTIDWWZSFIQJNOASBDGLELBTQFQMBJQIRSOKNOHLCSBXLABCXLEVIKWICNNPRZCHVJUJTCXIMWTPVNYPPZWOAUQIJPVNYQGNTSTVXEMFAEGRXWFRQZKXHHATMFZGPWNEGMXUBYLKADLNKUORNPEKQVCDJBHCULPVALEDZMUDAJXHFKGI");
    tmp_msg_0.text.assign("LBJHEFOTDGXETOHDDPAEQBDAWBAADNMLSIXSMKSEQQODJSVYAAZMFXGKDTUGVOSHJPMJBBYUPAITTMPPPIFWRQNBVFGURZMIPUJKJOGVNIGCMUHAZTLZPNQNCFUMMZQZQPLTCXKEHOHRFJBVQFLRIKFGSFYANCNDUYHWDYGEWCGXOTNZNZWKFZRSBMKHCIVHYCWYKWSJLECWKYPSTVBRQLRRAJRVWZGLRXXQWOXLXYIBTHDXYULEV");
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
    msg.setTimeStamp(0.9186954511977389);
    msg.setSource(7014U);
    msg.setSourceEntity(4U);
    msg.setDestination(2306U);
    msg.setDestinationEntity(116U);
    msg.op = 115U;
    msg.file.assign("FSYOFHSFMKPXVYFRXCQTEYHMRWXGAILGLTYPNLLWTKLQJZYPBVMGBRUESBPNJFCCJGKUTBEXKIKSAEOGYD");

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
    msg.setTimeStamp(0.9917458906628311);
    msg.setSource(54478U);
    msg.setSourceEntity(98U);
    msg.setDestination(63737U);
    msg.setDestinationEntity(198U);
    msg.op = 224U;
    msg.file.assign("BSUENFGFIGVQVRNHNUJLDCYSITTJUVJYJKWCRXOUZOGTFOVIDHOOZFWRBJWSVYQUYNCVRLHPQOGXUECCVCRAKNZEUWYVOULAIXEASBXAQTMPXSXELMGQPKKKYMFDGMMLKPASKSLZCQCBWCAPDLXNHZIQPIFWJHGYBHLBEGUJZEINDFO");

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
    msg.setTimeStamp(0.834348478260447);
    msg.setSource(11104U);
    msg.setSourceEntity(85U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(177U);
    msg.op = 113U;
    msg.file.assign("CRGSNQWCRWQSVOQTIYPREXSKOYEGJDMKFYCPNTMXWWLIIJMEKFKGRPCMMDKLEXIUAYDLUGZHYFEYJXTVWTAPRQCWBLLVCMDAPCDYUEOBPSZHBZJRRISFUALONRSGLQJEVSMWTDXDQDEKXJOFKQBWF");

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
    msg.setTimeStamp(0.6142895336137637);
    msg.setSource(9937U);
    msg.setSourceEntity(180U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(221U);
    msg.op = 81U;
    msg.clock = 0.4161804057995804;
    msg.tz = 46;

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
    msg.setTimeStamp(0.3992415198372329);
    msg.setSource(3159U);
    msg.setSourceEntity(32U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(145U);
    msg.op = 17U;
    msg.clock = 0.8870968499569212;
    msg.tz = 126;

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
    msg.setTimeStamp(0.13877463329280537);
    msg.setSource(40429U);
    msg.setSourceEntity(198U);
    msg.setDestination(3353U);
    msg.setDestinationEntity(111U);
    msg.op = 34U;
    msg.clock = 0.6025086633928511;
    msg.tz = 116;

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
    msg.setTimeStamp(0.7714081776255648);
    msg.setSource(50094U);
    msg.setSourceEntity(65U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.5423009630359108);
    msg.setSource(1071U);
    msg.setSourceEntity(227U);
    msg.setDestination(27124U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.9348481326048841);
    msg.setSource(10467U);
    msg.setSourceEntity(14U);
    msg.setDestination(824U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.2887982105998974);
    msg.setSource(65293U);
    msg.setSourceEntity(109U);
    msg.setDestination(5334U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("PJSHSPXXUKRGLZUZNKRUZPFVVWGGSQUOWOTVNJAHTGJCHAFQDQJQBLJOZMUJEUCDFIAEFOQBIEECUWQYXZDEZBGWWVCFHDIYZQBHTRYVOZCLOIXMLBNCTOENDYSPLGRSLKBZUNIQSHGMVYRFAAAHOMWKOVNINAJXKPWTEAMIDDMLMJCTWNBRXHCEVMDUYBYFDAEKTWBHBQKEPNFMPSSKKTRGPMG");
    msg.sys_type = 103U;
    msg.owner = 17221U;
    msg.lat = 0.0025320961544799125;
    msg.lon = 0.8810488192312981;
    msg.height = 0.03444140416340513;
    msg.services.assign("YTMBMRJKPXGACEZIVLWHOBNGYXJLPIPTJXUGMZFDHPAVWEEPUDNLSNZIIELUOCTXZQXPFFLXKFRAQNWNVYBUHQ");

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
    msg.setTimeStamp(0.3987792200665641);
    msg.setSource(4785U);
    msg.setSourceEntity(172U);
    msg.setDestination(38912U);
    msg.setDestinationEntity(109U);
    msg.sys_name.assign("ILXKDUHHJWJHVKWSZJIKTOATYYSNAYXDXTZBITMVYIMZBYCGSSVQYSFZUSCBRQICBKQPPLMSIZBDEE");
    msg.sys_type = 196U;
    msg.owner = 27775U;
    msg.lat = 0.16158207117545054;
    msg.lon = 0.7697144726969765;
    msg.height = 0.6799821683799637;
    msg.services.assign("EPSQDTGODLZTWARCFLIGH");

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
    msg.setTimeStamp(0.9843326173681916);
    msg.setSource(40345U);
    msg.setSourceEntity(94U);
    msg.setDestination(38365U);
    msg.setDestinationEntity(4U);
    msg.sys_name.assign("YFCLRWGFKAWYOCLELROJZSGLBXMEDIJXUFNBIJQKCPZAHYQKQNNXNKNHRIALRTAJRQUGEWEUSYDYULAUJPTVBYWCVBRCTVVLMJGFGPOMNZQLIATKTEMDSXTEHIBMQSYWRBIMHKJBHHIZCFPDDNZQBXSGWOTNVFVXVZKSTECYVGBMQXSKXXPOVESNDUCDKFTOAHGWVMABZOPRYUEZHTIJMCZODZLOXDRUUDAPWQJLPASYHE");
    msg.sys_type = 123U;
    msg.owner = 50591U;
    msg.lat = 0.42520380370620847;
    msg.lon = 0.8227758657296252;
    msg.height = 0.29433622568786466;
    msg.services.assign("RKUIIKIIEVZHIMJBSYEJNOHJQGALUFJSSICELBUSCDVYAACMZUZZCKZHNHVTSDSTXAORNMFEOINXOMVKLTERULYBGWWDPGFWGQOKZPWTQJEPANNTAXDQFJQZLUWLEYWVABZYPCQLMBDQJOKGFMIQPEROQKHJMFJFGSDCHNXVCADLC");

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
    msg.setTimeStamp(0.6988500920243762);
    msg.setSource(47291U);
    msg.setSourceEntity(182U);
    msg.setDestination(60656U);
    msg.setDestinationEntity(222U);
    msg.service.assign("YVHTRPOWWXHJIHFXZNCRLDHWVVZMOQNVERGJCPDKBSNLQPQHYIXUOUWQWYTTWPDDBIDXAMEBGMSCIZIXNNFJCAKQZRXUYKLSYSDMVLWOT");
    msg.service_type = 239U;

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
    msg.setTimeStamp(0.01812415179910465);
    msg.setSource(60206U);
    msg.setSourceEntity(37U);
    msg.setDestination(34144U);
    msg.setDestinationEntity(129U);
    msg.service.assign("CEYHFDBIQCRXJSBJTCSUTDPQUOJPQTSGIAMAORMSEPGVRIKMSBDWYBLEYFWVCEDVBXTGCZWWFZFURQ");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.047212468054223855);
    msg.setSource(56404U);
    msg.setSourceEntity(254U);
    msg.setDestination(12730U);
    msg.setDestinationEntity(182U);
    msg.service.assign("RODOKDQQCYUJLHZEWFSJ");
    msg.service_type = 87U;

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
    msg.setTimeStamp(0.9084180963499695);
    msg.setSource(29135U);
    msg.setSourceEntity(144U);
    msg.setDestination(9778U);
    msg.setDestinationEntity(217U);
    msg.value = 0.37549399514248727;

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
    msg.setTimeStamp(0.47022769198441694);
    msg.setSource(39496U);
    msg.setSourceEntity(85U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(117U);
    msg.value = 0.16212263302002128;

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
    msg.setTimeStamp(0.9149203154470161);
    msg.setSource(41825U);
    msg.setSourceEntity(160U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(196U);
    msg.value = 0.3482827138527729;

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
    msg.setTimeStamp(0.9730430853928412);
    msg.setSource(2953U);
    msg.setSourceEntity(205U);
    msg.setDestination(7816U);
    msg.setDestinationEntity(212U);
    msg.value = 0.03031353889296029;

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
    msg.setTimeStamp(0.433622047163285);
    msg.setSource(14785U);
    msg.setSourceEntity(114U);
    msg.setDestination(32128U);
    msg.setDestinationEntity(177U);
    msg.value = 0.23307661438652705;

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
    msg.setTimeStamp(0.5635454212736075);
    msg.setSource(54006U);
    msg.setSourceEntity(161U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(117U);
    msg.value = 0.21177691330721027;

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
    msg.setTimeStamp(0.6738517052353182);
    msg.setSource(22085U);
    msg.setSourceEntity(157U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(92U);
    msg.value = 0.06915100457874912;

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
    msg.setTimeStamp(0.22949802234798955);
    msg.setSource(45205U);
    msg.setSourceEntity(51U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(179U);
    msg.value = 0.4306704035075549;

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
    msg.setTimeStamp(0.9344152981760068);
    msg.setSource(32067U);
    msg.setSourceEntity(211U);
    msg.setDestination(13303U);
    msg.setDestinationEntity(112U);
    msg.value = 0.541305135934369;

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
    msg.setTimeStamp(0.8089487839171088);
    msg.setSource(27223U);
    msg.setSourceEntity(220U);
    msg.setDestination(43135U);
    msg.setDestinationEntity(138U);
    msg.number.assign("SCFETUUMTIJBNCPFRSXGJVESTFWOPWSZJJZTBBCHQYKIELMVFMYBLQOUXFGDUGWHYNSAXKZOXFSMRAREKXENFLXBAUIINZLAXWPVZXOGGAJJPWGFPYKQFWUQJVRAGRSZJRDERLIOYVKLEVCTHDQ");
    msg.timeout = 49075U;
    msg.contents.assign("CZVJTAQBSZEPQLYINCJWGBJYCQZZCUBBXCQBYWHARIQCVZFD");

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
    msg.setTimeStamp(0.9115564864017451);
    msg.setSource(64968U);
    msg.setSourceEntity(226U);
    msg.setDestination(28832U);
    msg.setDestinationEntity(133U);
    msg.number.assign("TCJIIUFQGNRIXC");
    msg.timeout = 8452U;
    msg.contents.assign("UDCIMPZTNSFHEEQVMBOOFPTSRULSAQJADGLQGMBKASIXEWNRZITJOZGHYVJNYLQCIYINILNRPDBGCMWNJGNHUPWWDLBFCSFFODDFPHRESXOUZARWAIDKSCZGMKKEKUXJXNXZOLUQDCQUIJTUUAKYQAHOVPQKHVHMRWYUOXPFTTERLMXZPJEWLBKWZNIBSMTXRBCFGTJHTCYYVJPLYIAPYRVWT");

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
    msg.setTimeStamp(0.05650798030013615);
    msg.setSource(32256U);
    msg.setSourceEntity(2U);
    msg.setDestination(652U);
    msg.setDestinationEntity(9U);
    msg.number.assign("RDUZOWPVQQHKSMIYSFOVFDLJCXYRVCLSMQWTAJWRSPGGDEUJJVCXBABWDATNZTNLPUXPYSJDESOJQYFQULJTDVGQXTORHQCHADRWKV");
    msg.timeout = 29365U;
    msg.contents.assign("FWIKALZXOQMDGBSEGEINZYZWIGAPBJJMZJPDOCJRZTISDFYRFWGKJAUVNEQYXZSQAYRLHGPMJNRFVP");

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
    msg.setTimeStamp(0.16546658139087222);
    msg.setSource(4248U);
    msg.setSourceEntity(219U);
    msg.setDestination(49670U);
    msg.setDestinationEntity(245U);
    msg.seq = 712950195U;
    msg.destination.assign("TSBEQCULZXTCCPGBHFOVZVQJSBHAOMWSGFWDHAOPFUPVYDZMTNLSXVYAXBNSYEJDBZJKPIWDAUFZPMKPGMIHTOVEPWJRGNUVREIBRYOWGYYZLTBOITMOQFQKMGCNUDJNCSHLYPOSIKYD");
    msg.timeout = 32177U;
    const char tmp_msg_0[] = {107, -70, 12, 74, 95, -7, -23, -36, 119, -72, -2, 47, 82, 7, -63};
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
    msg.setTimeStamp(0.4053559746646934);
    msg.setSource(18094U);
    msg.setSourceEntity(11U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(148U);
    msg.seq = 3433041016U;
    msg.destination.assign("AHOXLQAYPAYNJSSDCGHRXREFXAUGIMPOFUYYFPDPHHTKHGDTPNZEECINYRZWHEMEDXVRDXNBZECQWSPTUPWLTQTWHBCUWNEWRJNRRGTJOBJIUZMVTSDKMIXWBQGIFLRKPXPZJDQHUEMIWHVMIUFBBOZOFOKBEVUJ");
    msg.timeout = 65230U;
    const char tmp_msg_0[] = {-74, -62, -97, -107, -81, 31, -38, 41, -106, 117, -99, 28, -45, -46, -68, -34, 19, -67, -33, 49, -29, 48, -39, 32, -116, -128, -57, 39, -103, 49, -114, 58, 94, -3, -11, -125, 88, -49, -95, -9, -11, -45, -12, 86, -5, -84, 63, -104, 28, -70, 8, 82, 19, -73, 83, -63, 57, -58, -96, 42, -52, 92, 98, -86, -108, 90, -118, 0, -127, 21, -102, -80, -79, 20, -21, -74, -27, 18, -85, 81, 78, 87, -81, -64, -61, 111, 50, -94, 33, -8, 96, -63, 18, 45, -103, 105, -83, -19, -35, -10};
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
    msg.setTimeStamp(0.2507407889035699);
    msg.setSource(16892U);
    msg.setSourceEntity(104U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(185U);
    msg.seq = 771555161U;
    msg.destination.assign("WHIMISWVAAGCJDIGLEXRBEOZEBZTHCBXQXZTKIUXGAFARVMSXMFNVTRQTFJBJNWJXGOCQYOTRHJZGGOQMSXFWCTNDOUJSABXDNWFJYMMVHZAQDELUQZCRRFEROUAVDFEHLRDPTTAEBDXLYHYNVVGNMBGJDVBQVASJKYFUELJGMPKKUPPGOKWHYCYZLMUBSMBKIKOPPOKINSYCUYUQSIXLKIENSWPTDDAQFHRNWRHINCCEPWYKL");
    msg.timeout = 3467U;
    const char tmp_msg_0[] = {109, 18, 95, 76, 40, 115, -101, -3, -25, -84, 100, 102, -65, 120, 115, 118, -128, 1, 122, -112, -59, -38, 108, 89, 106, 90, -65, -39, -44, -105, -91, -96, -26, 40, 106, 32, 58, 31, 111, 2, 70, -28, 73, 4, -122, -55, 41, -3, 32, 23, 39, 49, -108, 50, 39, 101, -89, -94, 114, -76, 73, 39, 85, 112, -24, -28, -1, -53, 98, 114, 70, -36, -1, 45, -108, -52, -85, 40, 122, -51, 87, -47, 124, -49, -110, -92, 1, 50, -65, -78, -85, -89, 64, 12, 82, 78, 49, 14, -11, 126, -5, -28, 61, 91, 8, 44, -102, 124, -45, 66, 89, -92, -125, -8, -95, -122, -71, -104, -99, 122, 54, -74, 3, -22, -78, -126, -19, -7, 88, 112, -112, 40, 121, 72, 61, -67, 21, 24, 112, -6, -70, -53, 83, 40, -13, -81, -2, 94, -96, 34, -55, 115, -7, 26, -56, -26, -76, -27, 124, 1, -49, 30, 88, -87, 64, -120, 25, 107, -21, -84, 81, -31, 103, 22, -74, -34, -4, -79, 76, -99, -103, -108, 5, -27, 53, 107, 25, -31, -61, 73};
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
    msg.setTimeStamp(0.8297806496908131);
    msg.setSource(27391U);
    msg.setSourceEntity(65U);
    msg.setDestination(64576U);
    msg.setDestinationEntity(181U);
    msg.source.assign("SWIBQOOQWKTYUG");
    const char tmp_msg_0[] = {-100, 19, 19, -106, 2, -45, -9, -105, -4, 113, -125, 61, 115, 21, -48, 68, -16, 65, 53, -10, 75, 113, 44, -74, 101, 10, -43, -29, -79, -52, -124, 121, -72, -5, -60, 65, 61, 83, 116, 111, -88, -101, 109, -73, 68, -114, -52, 49, -4, -117, 92, 98};
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
    msg.setTimeStamp(0.6520287486459782);
    msg.setSource(8311U);
    msg.setSourceEntity(143U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(251U);
    msg.source.assign("RWMUAISOVWTLFHAALNSIITPGERICRBNEFQDDLFOTMPKHVPPRASIIQSVUAPJCCPZJCHXKQACRYZJBHMUWEDZVUZDRTNEWDYBQLOFGMBSEXYXWKYGMTIISFJGLOWCHKEFZQQONTXANBXFVLOULJVFKKDQKGLTJNKSQWTUURGGHYGZCXZJJNPBCSYVDRSXLIANMAOPNXWIEEMZRHGCJAQUGHBFDNKRELSHEH");
    const char tmp_msg_0[] = {59, 72, 86, -4, -4, -64, 61, -60, -87, 73, 0, 9, -19, 16, -51, 87, -85, 100, 101, -25, 5, 57, -121, 117, 94, -124, 112, 125, -21, -119, -79, 85, -117, -27, -87, -1, -57, -100, 30, -20, -123, 71, 58, 116, -66, -115, 14, -4, 66, 109, -65, -14, 11, 17, 80, 7, -49, 19, -77, -36, -30, -128, 99, 23, -94, -119, -107, 113, 103};
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
    msg.setTimeStamp(0.8175680890355227);
    msg.setSource(11781U);
    msg.setSourceEntity(236U);
    msg.setDestination(2517U);
    msg.setDestinationEntity(221U);
    msg.source.assign("SKBHBJPAMXFPSPEAQAURZIRCOHSLRXYNNPNJJBJHAPRY");
    const char tmp_msg_0[] = {92, 45, 101, 43, -75, 70, -53, 89, -102, -9, 67, -37, 43, 89, -118, 70, -113, -39, -50, -43, 116, -95, -125, -96, 59, 100, 104, -124, -48, -52, 79, 11, -120, -76, -59, -31, 71, -44, -38, 12, 15, -51, 56, -108, -45, 9, 18, 19, -41, -57, -32, 77, -27, 92, 57, 32, -124, 31, 54, -76, 6, -104, 90, 68, -18, -5, 98, 120, 100, -84, -33, 43, -107, 50, 88, 125, 100, 82, 92, -80, -23, -1, -120, 109, 73, 64, 77, 106, -107, 55, -68, -58, -43, -124, -10, -25};
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
    msg.setTimeStamp(0.9544054563727702);
    msg.setSource(33079U);
    msg.setSourceEntity(241U);
    msg.setDestination(62343U);
    msg.setDestinationEntity(111U);
    msg.seq = 1728687154U;
    msg.state = 41U;
    msg.error.assign("XWMJLTRQEWESEMJVTQVFJMOSGNGDJYJEGFRCRABCYQIHSSWIRWPOUYLBWBJTAIOOZMLXDRCEAGQLUIUXZONBKBLWVRKNZRGOCKVPGWCYHFMCBVHKAZVTE");

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
    msg.setTimeStamp(0.40833400588393165);
    msg.setSource(20631U);
    msg.setSourceEntity(203U);
    msg.setDestination(46252U);
    msg.setDestinationEntity(116U);
    msg.seq = 1321579587U;
    msg.state = 48U;
    msg.error.assign("JZRZGHCHTYJIAWPGONROFZVPQKQOAJCQGDCQWPAZJZUXBEEOUYOKVXFOBTVIDMUFPTLYUWNJCKIMNTHLBQALXDPLQARVHZVUCOJAGCDEREFUDRHMKQCFELUIGYEZVKNSXKGBPVONZMHKNQIVSYUOSWEMFTTMHLNCICVBBIFFYTAAEMLIHBDVSUJQSISXZPTSQWYXWDPYJPPKXKNASRGKEHBJRRLXNWERMWWCRYMGBDDUTDLYOGSABTJXXFMFL");

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
    msg.setTimeStamp(0.0014016512825565375);
    msg.setSource(7585U);
    msg.setSourceEntity(65U);
    msg.setDestination(31401U);
    msg.setDestinationEntity(78U);
    msg.seq = 2752711593U;
    msg.state = 199U;
    msg.error.assign("PKOBMWWCKNNZTRRKAOKFUFVMJQLLWMEPBPNTGCRVAKNWSAYGXEZNIUTWETSRSBQREDFDIKZCRNDUIDQLNZGWSYBGAZZMRIFWVPDXFLTCVHNLJYICXOBGEPVVYJVDQCBAAWFJCJWHGRSSVEYRKHEISBYFUXYCTZXXQQHGOCDLYXMLHTUOQSEIUBCMMKABDANVMZUUYPVUMYLMSPJROFJOKUJJGTGPXFKNWQJEEPXTZIIFOHOGHQLXPHDHZATQO");

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
    msg.setTimeStamp(0.8710891798079263);
    msg.setSource(15127U);
    msg.setSourceEntity(75U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(45U);
    msg.origin.assign("GSNLBCJFGCVMKYGSVENZAZVUMNSYIPXHDFQFOUXSTIGMNCLELXTOCYAFICMHZJVQR");
    msg.text.assign("HNWTSZXAIHODENQIAXGYQVCAEPXLOWRKOMFFPLZUYLN");

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
    msg.setTimeStamp(0.7907909663181023);
    msg.setSource(19147U);
    msg.setSourceEntity(83U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("MATNUDHHELZHVCBANJSKOEVKMFNKYUIUWXUUFEQXVKIXYRHHIPOSTDLGOMUDOPJEXDVERRKHGOZOUGKIJNVYYBYTPUSFUYPSQFWLCTYUNDIDXMXRMZLQWQTLJGPHAFLFVNX");
    msg.text.assign("ZPRYTJUPHFAGIYTUDYDZFNDMSPVAWUOVVTEBESQHJECLLOJXPBNEAVZMXJZLMKJSCRHEPAQMSWCFUXPHODOGSSFBWWCLJWJELPCHHZVJQNXPIZXC");

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
    msg.setTimeStamp(0.9847227290783902);
    msg.setSource(30616U);
    msg.setSourceEntity(102U);
    msg.setDestination(18918U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("QFWIPWWTFEPQEQXORSMUAELPEDFNTNYLBJDKOXBUVCOSIACQORIMVLBVYWOQYBIOKDUAJBCMUEJSJHKSQUAYRWBJINVVGQBNYFSKZLHZPNFZUHYDRWLDAEDDYKIMTAXZLCQRJ");
    msg.text.assign("JGBAIUSIELPDEJTDDCEVJTYCOMFXINCYYHLZCCOBSXXFNPSN");

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
    msg.setTimeStamp(0.7134062614398491);
    msg.setSource(29370U);
    msg.setSourceEntity(163U);
    msg.setDestination(3537U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("ODNWULNMAXOYZOYUGQEATYGYHEFEPALGKCMTREWDPBXKAHDKKWJMBRVDKLJPNTUXTJZNFFRMRINNPNDGOUQGMZCXBGFUIDWZVLGWBZCVFCTUXETSBIQJDJFDSHAORVIO");
    msg.htime = 0.465178338937428;
    msg.lat = 0.27712728291343447;
    msg.lon = 0.12481491413006773;
    const char tmp_msg_0[] = {66, -63, 6, 76, 1, 104, 89, -83, -31, 99, -15, -79, -6, 17, 72, -45, 54, -25, 18, -55, 9, -64, 73, -114, 16, -2, -34, 25, -39, -95, 24, 38, 25, 104, 110, -84, 39, 121, -37, -83, -76, -38, -75, -25, -62, 87, 46, 19, 122, 75, 126, 107, -73, -80, -93, 48, 83, 124, -86, 116, 106, 64, 97, -27, 76, -19, -65, 66, -48, -118, -58, 61, -97, -121, 71, -125, 100, 2, -47, 34, 79, 52, 95, 28, -123, -37, 25, -79, -10, 120, 64, 80, -72, 114, -15, 122, -123, 89, -61, 126, 42, 115, -66, -6, 57, -66, -35, 124, 5, -29, -104, -7, 66, 120, -121, 100, -77, -49, 9, 39, 29, 40, 37, 39, 126, -45, 30, 72, 65, -48, -66, -59, 112, -111, -24, -69, 65, 7, 61, 31, -6, 6, -66, 14, -23, -95, 26, 103, -45, 113, -75, -83, -31, 77, -93, -47, -55, -56, -69, -51, 33, -33, 82, -47, -108, 5, 22, 15, 38, 8, -89, -82, -113, -77, 27, -94, 107, 20, 60, 114, 15, 34, 107, 37, -101, 69, -57, -81, -16, -15, -86, 11, 52, 58, -47, -41, 24, -92, -94, 114, 119, 18, 95, -44, 118, -112, 52, -108, -17, 15, 114, 119, 63, -81, 12, 33, 57, 124, -30, -127, 95, -97, 100, -89, 105, -35, -41, 16, -19, 31, -26, 90, -71, -121};
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
    msg.setTimeStamp(0.6674649909005548);
    msg.setSource(2498U);
    msg.setSourceEntity(232U);
    msg.setDestination(27975U);
    msg.setDestinationEntity(191U);
    msg.origin.assign("JYOEPYKWAFXDFYZVQHTGOLVHUCVRGNDSYDQLMIGIRHUDICSVFPVNCTQTRZYVZLKPOPXSESTGMSJWDHHXQBUPIKFXREXMNLAXZCAOGRUYWEZYRJBKUGVNJONNKJDLWZSIVEASXZZPILFOYBORSIKQDPKDGLTBRDNFHMHJILCKBFTWQBAHNVCPBUNXEAVWFYWGPJOXRFUWROS");
    msg.htime = 0.44236975951857316;
    msg.lat = 0.057011963013284594;
    msg.lon = 0.5970084744986581;
    const char tmp_msg_0[] = {-4, 106, 49, 11, 53, -5, -18, 61, -1, 84, -105, -100, -14, 74, -66, 117, -21, 13, 43, -1, -28, -9, 23, 30, -63, -57, -26, 125, 119, -117, 110, 50, 6, 41, -96, 48, 61, -67, 120, 45, 72, -121, -101, 97, -30, 50, -58, -51, -14, -9, 1, 34, -16, 80, 32, -90, -53, 3};
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
    msg.setTimeStamp(0.04524591736087746);
    msg.setSource(21589U);
    msg.setSourceEntity(203U);
    msg.setDestination(14040U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("QIMOYTPJHSEFCXNKBANHHGCXZROZJRXZTRNVJKCLAETABOTWGHVDXRVBKNDLCSOOAURZODFHIDTEHHJQGLLYXLZFJSWKCIHRGMMYRCUNYPAJSUBYWOPLPUZWLTDSXZGJUZP");
    msg.htime = 0.12392398142343986;
    msg.lat = 0.4307298666302056;
    msg.lon = 0.047112318761186156;
    const char tmp_msg_0[] = {70, -40, -121, -94, 88, 105, -27, -72, 120, -120, -39, -90, -111, 112, 67, -64, -84, 91, 83, 31, -18, -118, 23, -70, 108, 70, -35, 49, 79, 8, 2, -8, 41, 100, 22, -60, -82, 8, 8, -31, -52, -2, -95, -122, -5, -7, -34, 46, 51, -62, 41, 61, -80, 57, 49, -87, 4, 16, 106, 93, -69, -70, 49, 103, -45, 75, 120, 89, 15, -43, 30, -27, 32, -121, 39, -20, -68, 60, 61, -58, 113, -31, -26, -111, 41, 44, 95, 20, -103, -105, -9, 122, 36, -109, -71, -27, -78, -85, 80, 124, -109, -82, -108, -45, -123, 100, 48, -77, -20, 11, 58, -51, 92, -115, -123, 46, -76, -112, -117, -74, -38, 111, 99, 6, -98, 55, -73, 60, 51, -52, 72, -84, -46, -104, 44, 62, -86, 65, 116, 93, -45, 122, -56, 41, -38, -2, -17, 35, -21, -55, -12, -43, 66, -60, 73, 86, 13, 105, 67, -24, 119, -120, -80};
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
    msg.setTimeStamp(0.1228426455144993);
    msg.setSource(41663U);
    msg.setSourceEntity(209U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(134U);
    msg.req_id = 64822U;
    msg.ttl = 55202U;
    msg.destination.assign("UAHPESXNYTHSCKBOYMUVQMJOUEXOEQAXFAVBUJBHBGFJPLSVGWRFXZZFWOXIPQVLBOZPICLPBDCKYBFXGDVMYDTIGDLGZWGBA");
    const char tmp_msg_0[] = {40, -9, 16, 113, 74, -120, -64, 51, -49, -22, 29, -19, 82, 78, 99, -28, -106, -40, 106, -89, -67, -43, -43, -116, -49, -63, 122, -43, 59, -73, -51, 81, -53, -35, -75, -29, 38, -50, 101, 116, 80, 68, 10, -123, 112, 115, 21, -98, 28, -95, 43, 83, 113, -24, -26, 116, 16, -91, 70, 21, 54, 92, -59, 48, 58, 123, 27, 17, -106, -67, -38, -111, -31, -14, 3, 32, -7, 100, -8, 67, 122, 46, -88, 2, -118, -89, 72, 12, 88, 41, 39, -79, 20, 40, -95, 7, -60, 100, -120, -21, 14, -12, 23, 29, -58, 30, 65, -74, 110, 22, 44, -64, 77, -67, 18, -123, -101, 122, -109, -60, 7, -52, -59, 10, -122, -112, 87, -69, 56, -103, -123, 75, 35, 106, -18, -81, 107, 106, 122, 89, -78, 110, -56, -126, -12, 101, 44, -69, -57, -46, -123, -28, 75, -13, 24, -51, 18, -69, -47, -38, 28, -115, -46, -120, 65, 10, 95, 93, -58, -84, -104, -115};
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
    msg.setTimeStamp(0.6290441293521056);
    msg.setSource(53769U);
    msg.setSourceEntity(225U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(93U);
    msg.req_id = 45836U;
    msg.ttl = 19273U;
    msg.destination.assign("AFZYLOJCITGDHUVWTJMHZYBGZJNCBIZDTQXSZCPLWDFHQDHEQVNFOPYXDOQPMEFWLEIMTDHSCUBARXETTQKBQRATYAHUNKFANJFUOEMEOUOSWGIJWONVCSIKOVHXGJPKELSLKJIPGBFVSIQEWZDB");
    const char tmp_msg_0[] = {-122, 110, 124, 18, -91, -45, 80, 33, -67, -84, 76, 11, 114, -122, 81, -80, -97, -57, -107, -62, 41, 10, -58, -2, -86, -40, -66, 58, 107, -120, -4, -88, -111, -84, 107, -86, 66, -52, 17, -53, -98, -3, -43, 60};
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
    msg.setTimeStamp(0.9521909819470427);
    msg.setSource(32288U);
    msg.setSourceEntity(139U);
    msg.setDestination(36071U);
    msg.setDestinationEntity(184U);
    msg.req_id = 42311U;
    msg.ttl = 2599U;
    msg.destination.assign("SYKFPVOOFHFSRBSNNPGUHVVZIHUIZJBGPDIAHJQRTOYGTKMRPLXPZTRGQASWUIPQYDZNCALFHZMXTWIVXKVAOYOGVNYRCDACLEXZZGQMLVCJEFIWNRFYXWMBTTHFACIEXSFIHYEDQTXKYUFJRXQGHOSBSMTGBSNQLCUWNZUPZCDMGCNAWEQLWRGJBTWLEEUVKOUBDYIEHMAHWDMUBFPNNOREMBOX");
    const char tmp_msg_0[] = {-51, -91, -29, 24, -82, 114, 62, 70, 22, -58, 59, 66, 65, -5, -56, -94, 107, -116, 113, 3, 89, -28, -106, 55, 51, -39, 79, -60, 37, -116, 36, -31, -83, 52, 105, -25, 100, 36, -68, 104, -4, 58, 23, 64, 61, -79, -11, 19, -65, -57, -16, 37, -66, 98, -17, -116, 126, -116, 59, -124, 83, 65, 66, -20, -104, 55, 7, 60, -34, 101, -64, 67, -33, 30, -50, 31, 13, 95, 49, 33, 10, 22, -108, 24, 68, -76, 104, 62, -95, 93, 0, 114, 121, -64, 0, -14, 3, -37, -13, -114, -14, -74, -9, 49, 36, 115, -121, 114, 70, -66, 62, 81, -15, 67, 37, 3, -86, 58, -36, -5, -13, 8, -31, -70, -32, 19, 21, -100, 60, 103, 29, -93, 29, 66, 83, -59, -74, -38, 101, -90, 109, -9, -27, -22, -40, 46, -10, -2, -85, -43, -94, -35, 124, -98, 25, -56, 10, -79, -120, 9, -97, 125, -120, -85, -87, -1, -112, -66, 34, -18, 68, 74, -79, 49, -18, 89, 125, -95, -22, -97, 90, 93, -127, -91, 88, -44, 83, 5, 33, 104, -14, -95, 51, -25, 41, -3, -26, 46, -84, 65, 118, 82, 94, -41, -107, -26, -21, 87, -54, -99, -41, -5};
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
    msg.setTimeStamp(0.12974111360437723);
    msg.setSource(39888U);
    msg.setSourceEntity(190U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(24U);
    msg.req_id = 64112U;
    msg.status = 133U;
    msg.text.assign("RQXGXUFNJVMEZCKIMDCXLFJNQAGBWYLSNZSSMMXXVNAZVHSAQCYFIAONHPUISHKVLPWMAOFPTFYZBOETMHWLXOGXSLBJIQMVAAI");

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
    msg.setTimeStamp(0.03504325063760638);
    msg.setSource(28970U);
    msg.setSourceEntity(49U);
    msg.setDestination(41399U);
    msg.setDestinationEntity(230U);
    msg.req_id = 53585U;
    msg.status = 207U;
    msg.text.assign("QHIOHXTGHQUQLIADLNFOGKGSBBMKOMSAWEIQPOLXMLNHSYPJGDHJWEWPLLPZMSKPSNBFNVBAJPSZTDRMSJTHUCACOZRPUAIYBXMJZZUICUQECQNEDUMENGAHTHVXPCNTCJHYWYIMOAWRQB");

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
    msg.setTimeStamp(0.39817424078587205);
    msg.setSource(3218U);
    msg.setSourceEntity(130U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(211U);
    msg.req_id = 29401U;
    msg.status = 89U;
    msg.text.assign("ZZGTBEKRXQBCMBULZXEMSGHPVRPUVSEJKQLWFLPKFDJQBDHVNHJJWRTYYMLISIKCCQAIKIEYAQMNRLGXHUPQQCYBNUEPMQCJBCNZKSHLANFOVBGSEHGJUVXQLTXZGZFIOMADGWYODRUETSDJXEXGZWNVUKWZHTYRFXVRLUJYYZSLRVCAIPNBKCHOPVAITTDAAAFDJOWW");

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
    msg.setTimeStamp(0.9604794657672044);
    msg.setSource(15273U);
    msg.setSourceEntity(174U);
    msg.setDestination(31971U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("DRNLZOFUXXTGUAUBIYFCGXLCCKNQWOGMWVLLPNKRVYBROCLCGJYNFVCJQPUQKOSJZGXAYZGQUFEKNSOTTPHFSHLHYKXMRNQDMJPXESX");
    msg.links = 1193186289U;

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
    msg.setTimeStamp(0.18304880611925545);
    msg.setSource(8530U);
    msg.setSourceEntity(239U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("ERTPGQEXIMPUPRRJTCVAXFKSYXZGFPITVVOCXPBTPYLPZJKONFCPCHKIYJQHBWSHIXWBAUAHNTFONBDRJDQ");
    msg.links = 2528952127U;

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
    msg.setTimeStamp(0.13285069378552272);
    msg.setSource(9037U);
    msg.setSourceEntity(31U);
    msg.setDestination(37261U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("XRGJPLFOUZFEFZDSPTYIOFAVUNBZMCUTDTVMRBVSZPXHBOPAQAVLPSIPGRJPEIQKPLJWCHHGJVGVNSUIZXHQLYWWWBOMBRYCZCYHMJKERGWFFYATIMDTEHODUKFPSAFI");
    msg.links = 3385936781U;

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
    msg.setTimeStamp(0.1728335065597425);
    msg.setSource(43367U);
    msg.setSourceEntity(246U);
    msg.setDestination(64205U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("PWEGBZPBOYAMSLWEYJODDVRNZXFQJVJTPLYKPAOEQKSETEIUQHDIVPCBXBSYYEDKJUOUIJBUDWMMZIIGTOHDRWALLQYDUAQGBZUGZTWHTGPXIZGRVZKYTCVJCKXRNQWIVLYVOHFPHGMBSMWTWRMNPHXGHHVDFLDFYENH");
    msg.action = 232U;
    msg.grouplist.assign("NULBGJNFIBNMRRKVEPHRLXJOXWSEIKXHXFGBMYYEYVSULOGUHOQKCRQHPTHVNJDESZYFQIRSZKNJKDNFRYWOMEIQBBPZGHTBDJUIUWCMNXXWCDFTVEZYUCMMUEDTPTTDFHMZJDDSMXAKPGFSHPARZWIZPVXLWSWJOXBLOBLECCAYQWOPT");

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
    msg.setTimeStamp(0.18644817721732887);
    msg.setSource(47570U);
    msg.setSourceEntity(151U);
    msg.setDestination(2541U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("QMCYGICSXCMOGPTUKWZVLUWFFRVVCWAKUTPWUURMPNTBZNTNPCPFCOBDLYYAJBCKJHNSFKBPXVTDKIZIHFZDPBYMBITCSIEDOGDVQGGCJLAWHPZSOYVRA");
    msg.action = 48U;
    msg.grouplist.assign("JCRDUUERJZOBDVQCTBHSNDCPELPOQTUOHCBFHDFNDSPGUAWLXWZDQXTJNRBKHHBETLQPVMSMXLYMCYGFQUNYGCFAMEVIKZEBG");

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
    msg.setTimeStamp(0.43923748948276753);
    msg.setSource(35488U);
    msg.setSourceEntity(28U);
    msg.setDestination(24201U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("OIUASVAGKXXGTNHKMJYKQCYSZPLBHCBWQQAEPRQEAZUYDDFBMNRRVFV");
    msg.action = 112U;
    msg.grouplist.assign("LIYSPFNLKZPYNPWRXALIVSLLCXXORVOD");

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
    msg.setTimeStamp(0.3781518385665351);
    msg.setSource(31245U);
    msg.setSourceEntity(142U);
    msg.setDestination(30733U);
    msg.setDestinationEntity(20U);
    msg.id = 199U;
    msg.range = 0.8378365643948559;

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
    msg.setTimeStamp(0.9758363342017045);
    msg.setSource(33827U);
    msg.setSourceEntity(175U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(130U);
    msg.id = 85U;
    msg.range = 0.5208792389356252;

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
    msg.setTimeStamp(0.7534614966237981);
    msg.setSource(39029U);
    msg.setSourceEntity(109U);
    msg.setDestination(1037U);
    msg.setDestinationEntity(208U);
    msg.id = 153U;
    msg.range = 0.9306056663100664;

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
    msg.setTimeStamp(0.38068268427736585);
    msg.setSource(54630U);
    msg.setSourceEntity(101U);
    msg.setDestination(49255U);
    msg.setDestinationEntity(253U);
    msg.tx = 83U;
    msg.channel = 71U;
    msg.timer = 61562U;

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
    msg.setTimeStamp(0.25771544357280574);
    msg.setSource(7804U);
    msg.setSourceEntity(183U);
    msg.setDestination(37433U);
    msg.setDestinationEntity(218U);
    msg.tx = 159U;
    msg.channel = 108U;
    msg.timer = 35050U;

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
    msg.setTimeStamp(0.13822045398941485);
    msg.setSource(34531U);
    msg.setSourceEntity(140U);
    msg.setDestination(35183U);
    msg.setDestinationEntity(54U);
    msg.tx = 220U;
    msg.channel = 49U;
    msg.timer = 3052U;

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
    msg.setTimeStamp(0.907104580266926);
    msg.setSource(18051U);
    msg.setSourceEntity(204U);
    msg.setDestination(43238U);
    msg.setDestinationEntity(30U);
    msg.beacon.assign("ZQSNCVHBNIWNDQLZPDEBVPTGKCDRNLJZUNLSGIQRFZALFTVVKYASJEVTHIIFAME");
    msg.lat = 0.1139364122312353;
    msg.lon = 0.17477604089158139;
    msg.depth = 0.024314897878140118;
    msg.query_channel = 241U;
    msg.reply_channel = 64U;
    msg.transponder_delay = 170U;

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
    msg.setTimeStamp(0.28991275750026424);
    msg.setSource(2489U);
    msg.setSourceEntity(56U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("BPFNWJXISGNUMOJRLCZECG");
    msg.lat = 0.5117305340541684;
    msg.lon = 0.6521580428172457;
    msg.depth = 0.7058873723483822;
    msg.query_channel = 34U;
    msg.reply_channel = 244U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.815784661199789);
    msg.setSource(51719U);
    msg.setSourceEntity(113U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("OLKDUWFAGNJEEPVCEZYNDREZKFXMMXNJZSGBPPQWGVVJNULMYYALKOBTGWZATAQCHGFKOYRO");
    msg.lat = 0.220953894653378;
    msg.lon = 0.9645400700179416;
    msg.depth = 0.12278729796899823;
    msg.query_channel = 16U;
    msg.reply_channel = 34U;
    msg.transponder_delay = 26U;

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
    msg.setTimeStamp(0.0856282272348633);
    msg.setSource(26861U);
    msg.setSourceEntity(69U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(174U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.019238629627279735);
    msg.setSource(46946U);
    msg.setSourceEntity(182U);
    msg.setDestination(55942U);
    msg.setDestinationEntity(28U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.6334649533634901);
    msg.setSource(28839U);
    msg.setSourceEntity(198U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(110U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.04886534784787899);
    msg.setSource(65530U);
    msg.setSourceEntity(66U);
    msg.setDestination(62373U);
    msg.setDestinationEntity(15U);
    msg.address = 44U;

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
    msg.setTimeStamp(0.8291064122158314);
    msg.setSource(41637U);
    msg.setSourceEntity(211U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(6U);
    msg.address = 42U;

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
    msg.setTimeStamp(0.5224486914307473);
    msg.setSource(14864U);
    msg.setSourceEntity(3U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(172U);
    msg.address = 19U;

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
    msg.setTimeStamp(0.240282825909235);
    msg.setSource(56850U);
    msg.setSourceEntity(136U);
    msg.setDestination(56144U);
    msg.setDestinationEntity(178U);
    msg.address = 48U;
    msg.status = 34U;
    msg.range = 0.09520542386476516;

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
    msg.setTimeStamp(0.4168916603798618);
    msg.setSource(63059U);
    msg.setSourceEntity(240U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(83U);
    msg.address = 23U;
    msg.status = 139U;
    msg.range = 0.47287768674532626;

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
    msg.setTimeStamp(0.7526625340543138);
    msg.setSource(39660U);
    msg.setSourceEntity(19U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(184U);
    msg.address = 214U;
    msg.status = 75U;
    msg.range = 0.4992303330457398;

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
    msg.setTimeStamp(0.554926877357533);
    msg.setSource(28072U);
    msg.setSourceEntity(56U);
    msg.setDestination(64761U);
    msg.setDestinationEntity(61U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("OTSGPVDQVJGDKVYPS");
    tmp_msg_0.value = 229U;
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
    msg.setTimeStamp(0.09997256218210604);
    msg.setSource(63505U);
    msg.setSourceEntity(52U);
    msg.setDestination(13884U);
    msg.setDestinationEntity(251U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 14U;
    tmp_msg_0.goal_id.assign("AQHHFDBLSJZQAQCGZSUGBGWNUVQQWSDUGSYKMFDA");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("UURNEJSBNZTQTDXDYONCJDQBSOFJCCKFCPAIRKSCFLPVHPUAQQSZVMCFKKZRHWHRKOAFTRYXYVGIHLZKZOXJIDWWUBWJSQAGSHGEFQYNVLHGGRJKJLXZOWQQWSBIDVLNJLETYKALDHNNTMELTBBOUXGPHOAOFGLMCMN");
    tmp_tmp_msg_0_0.predicate.assign("IMWSJCYDHVUPYIDHRHTSKFXWBTAVNCAKFERXTPDBB");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ZNNXEZZBTMUPDOYOGUCVYLIBMHUTMLZGPEALPKRGEFGOUDHRXWIOFYRYRQMTGDDXWBULRJTYYSZQFUMAHBPKRHBXJGYYFTUPSABSPNVKLPRLJHCTELYMJDMLZFFHXISGSIJOJWQZINQACVFMEAWNQMBJCIQUFRXLGEDVAPPVCXODBVCRUAYSTHVFCKXOWGIQDHKVBZCSKXWDSPJETCDQOTNIEZWZCVKQWTKEIKAJKX");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 246U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("FVXXONJHSLOFIRZSGUBQIRHHEXODRFWVDLWDDGUHBDKNUVLKVXAVJJFPFPHLYLVBATXTYJWSAKKAXZILPHSZMGKBENYQTNWE");
    tmp_tmp_tmp_msg_0_0_0.max.assign("STVESVIMMWSYCLCHXSNQJWDDPDQHJOFUWWEMBAGNNQNREZYZZKUGXTTRYEVAOJFKBRELOMLDEXSXTKYBLOJEAISXANVMFDRWDJDRIFLRIIKQTXDMH");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9535255272525274);
    msg.setSource(51672U);
    msg.setSourceEntity(233U);
    msg.setDestination(53490U);
    msg.setDestinationEntity(36U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.8647781191659724;
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
    msg.setTimeStamp(0.11072691395510015);
    msg.setSource(62240U);
    msg.setSourceEntity(140U);
    msg.setDestination(15855U);
    msg.setDestinationEntity(61U);
    msg.enable = 79U;

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
    msg.setTimeStamp(0.052425225707427914);
    msg.setSource(26107U);
    msg.setSourceEntity(236U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(250U);
    msg.enable = 174U;

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
    msg.setTimeStamp(0.2722547351177036);
    msg.setSource(14396U);
    msg.setSourceEntity(142U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(181U);
    msg.enable = 112U;

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
    msg.setTimeStamp(0.043926794944609715);
    msg.setSource(64470U);
    msg.setSourceEntity(81U);
    msg.setDestination(63886U);
    msg.setDestinationEntity(12U);
    msg.summary = 117U;
    msg.level = 119U;

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
    msg.setTimeStamp(0.6018730942121178);
    msg.setSource(36786U);
    msg.setSourceEntity(178U);
    msg.setDestination(37035U);
    msg.setDestinationEntity(142U);
    msg.summary = 243U;
    msg.level = 48U;

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
    msg.setTimeStamp(0.16384225917680462);
    msg.setSource(1360U);
    msg.setSourceEntity(221U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(192U);
    msg.summary = 185U;
    msg.level = 18U;

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
    msg.setTimeStamp(0.8279982483859526);
    msg.setSource(62389U);
    msg.setSourceEntity(136U);
    msg.setDestination(47330U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.1342432032499259);
    msg.setSource(57438U);
    msg.setSourceEntity(75U);
    msg.setDestination(25727U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.5346666710427913);
    msg.setSource(10712U);
    msg.setSourceEntity(176U);
    msg.setDestination(14493U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.24409411324003394);
    msg.setSource(50944U);
    msg.setSourceEntity(21U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.1535291823908601);
    msg.setSource(36070U);
    msg.setSourceEntity(241U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.3133004972696414);
    msg.setSource(9511U);
    msg.setSourceEntity(25U);
    msg.setDestination(53240U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.697647758777844);
    msg.setSource(38502U);
    msg.setSourceEntity(117U);
    msg.setDestination(34347U);
    msg.setDestinationEntity(202U);
    msg.op = 192U;
    msg.system.assign("NPJSBWWWROJBYTCDWWJQRTOBTSBXCVQKZEZQFEQWENHSUBUVKYPDFMJUFLHLCIPDNYMIXMTTUJRVJPXPGDDAQCRSFNIUQKEDOHTBRFAIFXCSZOXNHGBFYLUMIGVBPDEKOMJRUCAAUKGYRJPNEAHHUXTYLPKRNLMJEOYAXVGBDWVUQSAGVGZSFGLPYEALQKQPWDKIVOTIOVMERNQSBZTXFFMHENWWHLCXTVYOCHJZZAMLZLKXDKGSRYIZIGCSIO");
    msg.range = 0.5453161238294693;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 39U;
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
    msg.setTimeStamp(0.3027816327797731);
    msg.setSource(51511U);
    msg.setSourceEntity(29U);
    msg.setDestination(30739U);
    msg.setDestinationEntity(150U);
    msg.op = 58U;
    msg.system.assign("BBVJITWLGVYDJCIOJUHFEXYQPVFCPWMVTPWOJTMFHDBRWKLNSUVJBANPECFRTUTDMSCNNGVKGTCGZAINLXLQZXGMRGBOSOGWOIUUIBAOYYJXSDBFXPOZXRQFXBHQSCBOXQKQQKFRZCNIMQGLAEUDVTLDZEUHVMSQHJLCXFMIID");
    msg.range = 0.9881840584171889;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 180U;
    tmp_msg_0.snapshot.assign("HLZGSDLUGVDBKWPLYIZEZLCFWGIWOQ");
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8683387103349922;
    tmp_tmp_msg_0_0.z_units = 82U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.22169261040814559);
    msg.setSource(1208U);
    msg.setSourceEntity(68U);
    msg.setDestination(2383U);
    msg.setDestinationEntity(87U);
    msg.op = 219U;
    msg.system.assign("KTHBUGQACWBCDPKJFBUZNQZIUURWUHSGFIPQNEJJBYYOMSKPVYMZSLEHLVXFVDMWHINOXTOCLIWSEHJBUGSTOM");
    msg.range = 0.5198324560497428;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 2766379090U;
    tmp_msg_0.status = 72U;
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
    msg.setTimeStamp(0.038905795737115945);
    msg.setSource(51441U);
    msg.setSourceEntity(113U);
    msg.setDestination(17122U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.6556407847388879);
    msg.setSource(11740U);
    msg.setSourceEntity(165U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.4318709875752368);
    msg.setSource(12249U);
    msg.setSourceEntity(120U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.22697339625106183);
    msg.setSource(19101U);
    msg.setSourceEntity(199U);
    msg.setDestination(37536U);
    msg.setDestinationEntity(123U);
    msg.list.assign("AUZUCMZECUTPOLVKRRQXLBTUPVAAPKBDGYXCRBNFDRDITFVGHLHMMWESOYGRPGJCRYWQTNWNFIKHSMJBFFVUEVXIPWJIHXDZHJKKHICCSSIYVRTAPWWYBNEQXTDSMNGSMUATVHQTMZGZZCQAETOFISEUVROFDZMAYURWYIQHMEPLEIOINYNZBAONTNJAMBQPDQOLJSODJLKPDHGEXKFWKWVYSLFGVDJZZOCXU");

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
    msg.setTimeStamp(0.9926625904980538);
    msg.setSource(2237U);
    msg.setSourceEntity(110U);
    msg.setDestination(42167U);
    msg.setDestinationEntity(35U);
    msg.list.assign("NEEROSDEJFVTKLKQDRDAIKQHTILQBIMQYZCPYMEXCNOXUUKWQFVRTQAJJMVPBHYKFETORSTOVGEDGZVUCAYUSUPMFOJQCSWETDLRZOFZRLBMAZWNLHIRXJYXYVDATRXQIGSGPVOMZFDYSTMNWJRWKHZPDURHWXYNZIFBYHCBUVAA");

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
    msg.setTimeStamp(0.708184913804269);
    msg.setSource(36635U);
    msg.setSourceEntity(79U);
    msg.setDestination(62149U);
    msg.setDestinationEntity(51U);
    msg.list.assign("QYKTSOFAJAVLYTCYEARRBIMODQKOZRGFFHPOGFNWDHAJFWMQBGGTQFLHZKPLVJPJIGRDAZMWHMGNSOYVISIIUQEYYVNJRTBCROXNHI");

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
    msg.setTimeStamp(0.7703082786456257);
    msg.setSource(26266U);
    msg.setSourceEntity(14U);
    msg.setDestination(21487U);
    msg.setDestinationEntity(48U);
    msg.value = -16506;

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
    msg.setTimeStamp(0.24585611963626297);
    msg.setSource(37713U);
    msg.setSourceEntity(251U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(24U);
    msg.value = 7018;

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
    msg.setTimeStamp(0.221686855333441);
    msg.setSource(26443U);
    msg.setSourceEntity(189U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(222U);
    msg.value = -756;

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
    msg.setTimeStamp(0.4394840537480892);
    msg.setSource(8191U);
    msg.setSourceEntity(48U);
    msg.setDestination(4333U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8063616140108997;

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
    msg.setTimeStamp(0.7884935455178322);
    msg.setSource(44178U);
    msg.setSourceEntity(214U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(113U);
    msg.value = 0.2540886703381623;

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
    msg.setTimeStamp(0.5774658359626774);
    msg.setSource(45911U);
    msg.setSourceEntity(49U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(84U);
    msg.value = 0.03860753892410418;

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
    msg.setTimeStamp(0.9416476847109438);
    msg.setSource(24022U);
    msg.setSourceEntity(232U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(41U);
    msg.value = 0.06330008197106285;

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
    msg.setTimeStamp(0.3693990493781024);
    msg.setSource(65517U);
    msg.setSourceEntity(206U);
    msg.setDestination(12302U);
    msg.setDestinationEntity(65U);
    msg.value = 0.07021839829331211;

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
    msg.setTimeStamp(0.6944494125275776);
    msg.setSource(49380U);
    msg.setSourceEntity(118U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(242U);
    msg.value = 0.33757520464602364;

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
    msg.setTimeStamp(0.5741933711980637);
    msg.setSource(56332U);
    msg.setSourceEntity(165U);
    msg.setDestination(29530U);
    msg.setDestinationEntity(253U);
    msg.validity = 27308U;
    msg.type = 58U;
    msg.utc_year = 27945U;
    msg.utc_month = 60U;
    msg.utc_day = 123U;
    msg.utc_time = 0.25264064489569016;
    msg.lat = 0.7767943907504578;
    msg.lon = 0.9841678772804583;
    msg.height = 0.7986251273612567;
    msg.satellites = 79U;
    msg.cog = 0.8513281684578864;
    msg.sog = 0.5514142672672734;
    msg.hdop = 0.10763118637312341;
    msg.vdop = 0.5172014625761239;
    msg.hacc = 0.6125078944705002;
    msg.vacc = 0.4252844541899017;

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
    msg.setTimeStamp(0.43648431257052367);
    msg.setSource(30543U);
    msg.setSourceEntity(57U);
    msg.setDestination(42488U);
    msg.setDestinationEntity(107U);
    msg.validity = 26371U;
    msg.type = 47U;
    msg.utc_year = 28358U;
    msg.utc_month = 244U;
    msg.utc_day = 148U;
    msg.utc_time = 0.11778569909227776;
    msg.lat = 0.4409615056357227;
    msg.lon = 0.31731507953490556;
    msg.height = 0.15235181007241372;
    msg.satellites = 244U;
    msg.cog = 0.14946850548500934;
    msg.sog = 0.11757506252767391;
    msg.hdop = 0.018636607257806803;
    msg.vdop = 0.17612906671574635;
    msg.hacc = 0.3470367204367828;
    msg.vacc = 0.3320983629943213;

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
    msg.setTimeStamp(0.9443716835061451);
    msg.setSource(15684U);
    msg.setSourceEntity(130U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(227U);
    msg.validity = 43765U;
    msg.type = 168U;
    msg.utc_year = 33182U;
    msg.utc_month = 12U;
    msg.utc_day = 118U;
    msg.utc_time = 0.8615022119348773;
    msg.lat = 0.3887920225647803;
    msg.lon = 0.32235817533339284;
    msg.height = 0.4046385547811552;
    msg.satellites = 191U;
    msg.cog = 0.5537868312837007;
    msg.sog = 0.06640583005525125;
    msg.hdop = 0.552232923064167;
    msg.vdop = 0.6721756134217932;
    msg.hacc = 0.09475536245145977;
    msg.vacc = 0.8306693212793652;

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
    msg.setTimeStamp(0.025255224884634275);
    msg.setSource(64941U);
    msg.setSourceEntity(222U);
    msg.setDestination(2365U);
    msg.setDestinationEntity(95U);
    msg.time = 0.13699708963898394;
    msg.phi = 0.06998272843660747;
    msg.theta = 0.18278237066614877;
    msg.psi = 0.5367057632788625;
    msg.psi_magnetic = 0.3951741670062541;

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
    msg.setTimeStamp(0.2021929212557656);
    msg.setSource(2933U);
    msg.setSourceEntity(128U);
    msg.setDestination(3474U);
    msg.setDestinationEntity(119U);
    msg.time = 0.9832831881669556;
    msg.phi = 0.32929636124410766;
    msg.theta = 0.4063735915142057;
    msg.psi = 0.16625312511861423;
    msg.psi_magnetic = 0.060877100136662476;

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
    msg.setTimeStamp(0.7303444811896482);
    msg.setSource(32730U);
    msg.setSourceEntity(78U);
    msg.setDestination(50461U);
    msg.setDestinationEntity(17U);
    msg.time = 0.9004796876722169;
    msg.phi = 0.46585762833043576;
    msg.theta = 0.8493912721125544;
    msg.psi = 0.8507378144984279;
    msg.psi_magnetic = 0.4399302879265039;

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
    msg.setTimeStamp(0.8904052710135778);
    msg.setSource(49690U);
    msg.setSourceEntity(21U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(90U);
    msg.time = 0.5951515302175959;
    msg.x = 0.6433544814519674;
    msg.y = 0.29241077028840157;
    msg.z = 0.8514880186237147;
    msg.timestep = 0.8723504194550248;

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
    msg.setTimeStamp(0.5921271531036382);
    msg.setSource(16469U);
    msg.setSourceEntity(39U);
    msg.setDestination(57156U);
    msg.setDestinationEntity(107U);
    msg.time = 0.0673200661524277;
    msg.x = 0.02095765043782205;
    msg.y = 0.0322684941975252;
    msg.z = 0.23212183486001492;
    msg.timestep = 0.6091518873323908;

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
    msg.setTimeStamp(0.2151440645034267);
    msg.setSource(14892U);
    msg.setSourceEntity(208U);
    msg.setDestination(4552U);
    msg.setDestinationEntity(178U);
    msg.time = 0.5744559319904455;
    msg.x = 0.78870541573467;
    msg.y = 0.48990282605543656;
    msg.z = 0.4424491379505966;
    msg.timestep = 0.9028953656890973;

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
    msg.setTimeStamp(0.5254947815316409);
    msg.setSource(9288U);
    msg.setSourceEntity(29U);
    msg.setDestination(37688U);
    msg.setDestinationEntity(54U);
    msg.time = 0.12179015663158244;
    msg.x = 0.6908787336853686;
    msg.y = 0.7131678324145875;
    msg.z = 0.9685026824050125;

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
    msg.setTimeStamp(0.37149686555497285);
    msg.setSource(40221U);
    msg.setSourceEntity(185U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(118U);
    msg.time = 0.14264872533023576;
    msg.x = 0.3301806561337248;
    msg.y = 0.6742109416856007;
    msg.z = 0.22117823407299786;

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
    msg.setTimeStamp(0.3612078430816198);
    msg.setSource(30177U);
    msg.setSourceEntity(125U);
    msg.setDestination(65144U);
    msg.setDestinationEntity(129U);
    msg.time = 0.5377203540110383;
    msg.x = 0.17216172517915407;
    msg.y = 0.006005958080049001;
    msg.z = 0.1714484087510173;

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
    msg.setTimeStamp(0.369685742430901);
    msg.setSource(11937U);
    msg.setSourceEntity(155U);
    msg.setDestination(3442U);
    msg.setDestinationEntity(207U);
    msg.time = 0.5241928609327542;
    msg.x = 0.08235629149686485;
    msg.y = 0.1740694271978982;
    msg.z = 0.6962667343160873;

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
    msg.setTimeStamp(0.7843963944845227);
    msg.setSource(40700U);
    msg.setSourceEntity(154U);
    msg.setDestination(6325U);
    msg.setDestinationEntity(239U);
    msg.time = 0.2357480599353443;
    msg.x = 0.5497100797769713;
    msg.y = 0.6653381417470139;
    msg.z = 0.9220530284987083;

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
    msg.setTimeStamp(0.11067323440924381);
    msg.setSource(38233U);
    msg.setSourceEntity(29U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(120U);
    msg.time = 0.2782569309069799;
    msg.x = 0.6385852665606763;
    msg.y = 0.6626024632171281;
    msg.z = 0.4290451406336684;

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
    msg.setTimeStamp(0.27461598361273587);
    msg.setSource(37012U);
    msg.setSourceEntity(206U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(158U);
    msg.time = 0.7772632929788466;
    msg.x = 0.5766047652921887;
    msg.y = 0.3829724312099745;
    msg.z = 0.934440297045736;

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
    msg.setTimeStamp(0.6726941895621512);
    msg.setSource(48675U);
    msg.setSourceEntity(180U);
    msg.setDestination(22371U);
    msg.setDestinationEntity(69U);
    msg.time = 0.7356188737302838;
    msg.x = 0.48882957851742126;
    msg.y = 0.6808999366696089;
    msg.z = 0.732493248396077;

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
    msg.setTimeStamp(0.9909208245489545);
    msg.setSource(25782U);
    msg.setSourceEntity(198U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(220U);
    msg.time = 0.6173133639244259;
    msg.x = 0.219123201220779;
    msg.y = 0.5462579277306587;
    msg.z = 0.9104206188487465;

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
    msg.setTimeStamp(0.011287099881669316);
    msg.setSource(12496U);
    msg.setSourceEntity(71U);
    msg.setDestination(59016U);
    msg.setDestinationEntity(9U);
    msg.validity = 67U;
    msg.x = 0.10523149774415863;
    msg.y = 0.24831945350156082;
    msg.z = 0.36128444490219613;

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
    msg.setTimeStamp(0.2827252967815197);
    msg.setSource(10511U);
    msg.setSourceEntity(120U);
    msg.setDestination(63622U);
    msg.setDestinationEntity(61U);
    msg.validity = 213U;
    msg.x = 0.847240217193987;
    msg.y = 0.9910204750179611;
    msg.z = 0.0983873615025932;

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
    msg.setTimeStamp(0.4946406754035758);
    msg.setSource(43457U);
    msg.setSourceEntity(138U);
    msg.setDestination(17199U);
    msg.setDestinationEntity(146U);
    msg.validity = 232U;
    msg.x = 0.6995262261712742;
    msg.y = 0.7220681783593481;
    msg.z = 0.9662456314756698;

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
    msg.setTimeStamp(0.667336182207279);
    msg.setSource(38078U);
    msg.setSourceEntity(89U);
    msg.setDestination(63283U);
    msg.setDestinationEntity(67U);
    msg.validity = 38U;
    msg.x = 0.46242885289260616;
    msg.y = 0.13806946051358826;
    msg.z = 0.011503342955562323;

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
    msg.setTimeStamp(0.3502467639226098);
    msg.setSource(8139U);
    msg.setSourceEntity(16U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(111U);
    msg.validity = 133U;
    msg.x = 0.058415737512049204;
    msg.y = 0.6350518098703916;
    msg.z = 0.40481519602754856;

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
    msg.setTimeStamp(0.614391776992812);
    msg.setSource(42143U);
    msg.setSourceEntity(26U);
    msg.setDestination(47964U);
    msg.setDestinationEntity(189U);
    msg.validity = 100U;
    msg.x = 0.9135658584830356;
    msg.y = 0.12880465607366431;
    msg.z = 0.5641393772251149;

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
    msg.setTimeStamp(0.15181639429619864);
    msg.setSource(56373U);
    msg.setSourceEntity(237U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(37U);
    msg.time = 0.8959948535621097;
    msg.x = 0.05516434891269606;
    msg.y = 0.8384090097695429;
    msg.z = 0.9880028048176953;

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
    msg.setTimeStamp(0.7932432229399635);
    msg.setSource(36991U);
    msg.setSourceEntity(45U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(11U);
    msg.time = 0.4646933783618883;
    msg.x = 0.15962286381348567;
    msg.y = 0.6284347523942744;
    msg.z = 0.3561514330520278;

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
    msg.setTimeStamp(0.15286782174259084);
    msg.setSource(48944U);
    msg.setSourceEntity(118U);
    msg.setDestination(17800U);
    msg.setDestinationEntity(108U);
    msg.time = 0.3233543225313348;
    msg.x = 0.5582254242653638;
    msg.y = 0.1058478508328814;
    msg.z = 0.15701660320658628;

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
    msg.setTimeStamp(0.618624069547089);
    msg.setSource(47584U);
    msg.setSourceEntity(236U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(88U);
    msg.validity = 120U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6731576286455399;
    tmp_msg_0.y = 0.21408336560767438;
    tmp_msg_0.z = 0.23951454187302001;
    tmp_msg_0.phi = 0.16865765465934635;
    tmp_msg_0.theta = 0.929385800749487;
    tmp_msg_0.psi = 0.37825534310225517;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6379047175696343;
    tmp_msg_1.beam_height = 0.2163945053371974;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9202757538637147;

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
    msg.setTimeStamp(0.4361083936217427);
    msg.setSource(23508U);
    msg.setSourceEntity(164U);
    msg.setDestination(6348U);
    msg.setDestinationEntity(233U);
    msg.validity = 57U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8066470442448146;
    tmp_msg_0.y = 0.7504364199747623;
    tmp_msg_0.z = 0.8249864407667623;
    tmp_msg_0.phi = 0.8983355900021809;
    tmp_msg_0.theta = 0.921134835703001;
    tmp_msg_0.psi = 0.1842007215612178;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.25962555560664846;

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
    msg.setTimeStamp(0.3136525837669546);
    msg.setSource(48741U);
    msg.setSourceEntity(108U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(68U);
    msg.validity = 57U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.14620188486889596;
    tmp_msg_0.beam_height = 0.25490039838956324;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.12432167988533971;

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
    msg.setTimeStamp(0.7740985924918794);
    msg.setSource(19606U);
    msg.setSourceEntity(14U);
    msg.setDestination(9206U);
    msg.setDestinationEntity(189U);
    msg.value = 0.9521534929556813;

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
    msg.setTimeStamp(0.9305610872996494);
    msg.setSource(52017U);
    msg.setSourceEntity(56U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7910237366852438;

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
    msg.setTimeStamp(0.7373159954422225);
    msg.setSource(24891U);
    msg.setSourceEntity(189U);
    msg.setDestination(23859U);
    msg.setDestinationEntity(166U);
    msg.value = 0.503262928051427;

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
    msg.setTimeStamp(0.06960213010416327);
    msg.setSource(23111U);
    msg.setSourceEntity(82U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7520348642751056;

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
    msg.setTimeStamp(0.6840893449881913);
    msg.setSource(27130U);
    msg.setSourceEntity(249U);
    msg.setDestination(43206U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5656368686751099;

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
    msg.setTimeStamp(0.13359438546043667);
    msg.setSource(14373U);
    msg.setSourceEntity(87U);
    msg.setDestination(8478U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9012197931543545;

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
    msg.setTimeStamp(0.5037087461187424);
    msg.setSource(41397U);
    msg.setSourceEntity(47U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(66U);
    msg.value = 0.14690693891899287;

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
    msg.setTimeStamp(0.47714946686641146);
    msg.setSource(30493U);
    msg.setSourceEntity(230U);
    msg.setDestination(20324U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8933882268063793;

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
    msg.setTimeStamp(0.6494058571639769);
    msg.setSource(37026U);
    msg.setSourceEntity(34U);
    msg.setDestination(60872U);
    msg.setDestinationEntity(27U);
    msg.value = 0.1388838179317643;

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
    msg.setTimeStamp(0.4051830859054779);
    msg.setSource(60758U);
    msg.setSourceEntity(76U);
    msg.setDestination(55766U);
    msg.setDestinationEntity(203U);
    msg.value = 0.784450484485715;

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
    msg.setTimeStamp(0.22324212333104776);
    msg.setSource(30079U);
    msg.setSourceEntity(204U);
    msg.setDestination(38165U);
    msg.setDestinationEntity(193U);
    msg.value = 0.1475645190893743;

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
    msg.setTimeStamp(0.056038887511937974);
    msg.setSource(10626U);
    msg.setSourceEntity(158U);
    msg.setDestination(24609U);
    msg.setDestinationEntity(106U);
    msg.value = 0.15299741438018766;

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
    msg.setTimeStamp(0.8274805285024982);
    msg.setSource(55596U);
    msg.setSourceEntity(176U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(164U);
    msg.value = 0.666547678333999;

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
    msg.setTimeStamp(0.6548648406558389);
    msg.setSource(60240U);
    msg.setSourceEntity(93U);
    msg.setDestination(2559U);
    msg.setDestinationEntity(47U);
    msg.value = 0.798914352507906;

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
    msg.setTimeStamp(0.4906673626921061);
    msg.setSource(35955U);
    msg.setSourceEntity(46U);
    msg.setDestination(24142U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5323491839868099;

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
    msg.setTimeStamp(0.7027392544304712);
    msg.setSource(46214U);
    msg.setSourceEntity(1U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(103U);
    msg.value = 0.6555776910213715;

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
    msg.setTimeStamp(0.7019351626177928);
    msg.setSource(28112U);
    msg.setSourceEntity(233U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(171U);
    msg.value = 0.6983699917905318;

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
    msg.setTimeStamp(0.6151988671149626);
    msg.setSource(25161U);
    msg.setSourceEntity(208U);
    msg.setDestination(193U);
    msg.setDestinationEntity(65U);
    msg.value = 0.3662784555673584;

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
    msg.setTimeStamp(0.745832936332752);
    msg.setSource(20560U);
    msg.setSourceEntity(60U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6980595326758715;

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
    msg.setTimeStamp(0.6971134815971592);
    msg.setSource(22179U);
    msg.setSourceEntity(222U);
    msg.setDestination(13227U);
    msg.setDestinationEntity(246U);
    msg.value = 0.14558345549961482;

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
    msg.setTimeStamp(0.3867175592744688);
    msg.setSource(39492U);
    msg.setSourceEntity(113U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(110U);
    msg.value = 0.19105059440864192;

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
    msg.setTimeStamp(0.705631702265127);
    msg.setSource(32264U);
    msg.setSourceEntity(83U);
    msg.setDestination(9145U);
    msg.setDestinationEntity(222U);
    msg.value = 0.05169144373660772;

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
    msg.setTimeStamp(0.3472257357457469);
    msg.setSource(18013U);
    msg.setSourceEntity(170U);
    msg.setDestination(24151U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5078473811562816;

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
    msg.setTimeStamp(0.12054158623680333);
    msg.setSource(2852U);
    msg.setSourceEntity(167U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(112U);
    msg.value = 0.723988618638398;

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
    msg.setTimeStamp(0.9607424630007084);
    msg.setSource(53570U);
    msg.setSourceEntity(93U);
    msg.setDestination(44876U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.33242438137995156;
    msg.speed = 0.010079220061185001;
    msg.turbulence = 0.0493426964793543;

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
    msg.setTimeStamp(0.22272531169841414);
    msg.setSource(16162U);
    msg.setSourceEntity(64U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.31559994775614986;
    msg.speed = 0.7457814361342852;
    msg.turbulence = 0.3337054556173663;

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
    msg.setTimeStamp(0.5610462815668782);
    msg.setSource(39726U);
    msg.setSourceEntity(111U);
    msg.setDestination(26445U);
    msg.setDestinationEntity(99U);
    msg.direction = 0.17156040451250232;
    msg.speed = 0.4355662526011381;
    msg.turbulence = 0.37376948144036526;

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
    msg.setTimeStamp(0.32992797376352667);
    msg.setSource(17916U);
    msg.setSourceEntity(148U);
    msg.setDestination(32476U);
    msg.setDestinationEntity(194U);
    msg.value = 0.133244457785044;

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
    msg.setTimeStamp(0.12908767848948388);
    msg.setSource(23160U);
    msg.setSourceEntity(180U);
    msg.setDestination(22379U);
    msg.setDestinationEntity(223U);
    msg.value = 0.28047279021358495;

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
    msg.setTimeStamp(0.1510942531961199);
    msg.setSource(61459U);
    msg.setSourceEntity(93U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(12U);
    msg.value = 0.659818303236689;

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
    msg.setTimeStamp(0.2616874025323639);
    msg.setSource(37840U);
    msg.setSourceEntity(148U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(221U);
    msg.value.assign("MUENUNHIXTTXMVIBRPAZEZDWGEYBOSGPGXVYPZWAJCYOVWFDYJ");

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
    msg.setTimeStamp(0.3395953435168013);
    msg.setSource(398U);
    msg.setSourceEntity(140U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(46U);
    msg.value.assign("VWCLFRCONKTAAJELTKFMUHVPESHVRATCJRHYTRAOQMMOSMCFYHK");

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
    msg.setTimeStamp(0.5292011760310221);
    msg.setSource(57842U);
    msg.setSourceEntity(180U);
    msg.setDestination(4535U);
    msg.setDestinationEntity(124U);
    msg.value.assign("VDJYLYHVLXYEMYGIKXHFLAHDFRRMRODQPUWIJYCQNZEJABOLMHEJRZXDPFNYHUDVGKVRSLKDKLOOCXCHNOVIAWWFRLBMXGFVIPSBTRBWBEIBCOEWFDYHRAMJC");

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
    msg.setTimeStamp(0.9706402042795762);
    msg.setSource(4360U);
    msg.setSourceEntity(211U);
    msg.setDestination(33016U);
    msg.setDestinationEntity(5U);
    const char tmp_msg_0[] = {3, 16, -51, 119, 16, 17, 49, -28, 50, -40, -68, 20, 12, -78, -124, -86, -96, -8, -23, -65, -4, 87, 89, 30, 15, -8, 67, -117, 27, -111, 103, -24, 103, 97, 72, 68, -95, -97, -28, -32, 116, -6, 32, -19, -13, -26, -5, -66, -72, -60, 68, 32, 34, 122, 30, -32, 108, 33, 4, -47, 43, -68, 47, -23, 72, 61, -98, 85, -103, 45, 99, 42, 81, -98, 19, 98, -109, 97, -13, 13, -87, -60, 106, -45, -94, 43, 63, 54, -37, 87, 38, -61, -57, -17, 7, -60, -16, -46, -63, 19, 114, -98, -53, 96, 16, 50, 39, 126, 13, 16, -92, 96, 27, 95, -121, 110, 122, -99, 27, 36, 93, -54, 10, 50, -84, -22, 97, 114, 118, -51, 11, 19, -23, 93, -14, -35, 108, 26, 116, 41, 6, 60, -81, -97, 35, -125, 60, 0, -53, -15, -127, -96, -70, 53, 31, -8, -10, 64, -16, -51, 16, 109, 106, 99, 105, 78, -48, -24, 60, -89, 97, -39, -86, 91, 79, -76, -26, -42, -61, -126, -6, -75, -9, 2, 35, 51, 24, -38, -50, 106, 63, -45, 46, -40, -38, 65, -117, 101};
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
    msg.setTimeStamp(0.9947366064470362);
    msg.setSource(35084U);
    msg.setSourceEntity(16U);
    msg.setDestination(18549U);
    msg.setDestinationEntity(51U);
    const char tmp_msg_0[] = {-119, -10, -12, -28, 99, 86, 88, -97, -32, -107, -42, 78, -91, 104, -79, 89, -97, 55, -33, -35, 84, 8, -87, -3, 86, -127, -71, -95, -24, -36, -88, 61, 69, 115, -62, 40, -109, 109, -20, -17, 119, -40, 37, 62, 65, 86, -74, -57, 9, -70, -72, 19, -6, 24, 99, -56, 106, -69, -2, -108, 9, -44, 125, 84, -36, 79, -12, 13, -119, 2, -127, -2, 92, 72, -116, -10, 122, 64, 109, 64, -1, -38, 78, 60, -28, 42, 29, 30, 111, 117, -11, 109, -125, -72, -42, 62, -30, 120, -121, -98, 102, -56, -101, -123, 125, 59, -51, -80, 3, 122, 10, -42, 62, -101, 68, -84, -4, -28, -63, 43, 77, 43, -20, -111, -119, -12, -9, -79, -3, -8, 68, -78, 6, 62, 60, 44, 34, 86, -29, -58, -82, -31, -121, -69, 28, -21, 91, -43, 76, 87, 83, -127, -54, 16, 113, 19, -36, -92, 66, 124, 85, 54, -8, 111, 111, -18, 5, 54, 11, -31, -112, 50, 88, -48, 126, 27, -89, -28, -90, 19, -120, -111, -33, -32, 50, 80, -42, -113, -79, 120, 51, -102, 119, -91, 9, -43, 108, -111, -85, -43, 15, 108, 77, -43, -101, 11, 106};
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
    msg.setTimeStamp(0.5469131094942865);
    msg.setSource(41594U);
    msg.setSourceEntity(209U);
    msg.setDestination(37230U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {-93, -59, -17, 105, 59, 117, -53, -39, -50, 33, 63, -83, 26, -78, -46, -22, 26, -56, -127, 38, 59, 5, -50, -116, -55, -16, -22, 35, -86, -99, 83, 42, 9, 31, 31, -96, -91, -112, -4, -89, -21, 50, 19, 46, -58, -25, 80, -55, -53, 115, -18, 36, -4, 84, -108, 37, -12, -19, 104, 85, -125, 83, -81, 107, 41, 93, 81, -45, -71, -28, 60, -126, -82, -37, -110, 97, -117, -3, -106, 11, 126, 16, 120, 2, 83, 45, 74, -23, 18, 61, -100, 108, -114, 97, 8, -86, 77, 117};
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
    msg.setTimeStamp(0.4457704472880979);
    msg.setSource(27378U);
    msg.setSourceEntity(205U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(79U);
    msg.frequency = 1020100646U;
    msg.min_range = 55823U;
    msg.max_range = 42310U;

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
    msg.setTimeStamp(0.6354367797054332);
    msg.setSource(32283U);
    msg.setSourceEntity(11U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(93U);
    msg.frequency = 2697143659U;
    msg.min_range = 46143U;
    msg.max_range = 22925U;

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
    msg.setTimeStamp(0.62213474697796);
    msg.setSource(32309U);
    msg.setSourceEntity(132U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(100U);
    msg.frequency = 668478689U;
    msg.min_range = 20708U;
    msg.max_range = 4318U;

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
    msg.setTimeStamp(0.32922408514921);
    msg.setSource(13008U);
    msg.setSourceEntity(46U);
    msg.setDestination(53215U);
    msg.setDestinationEntity(163U);
    msg.type = 131U;
    msg.frequency = 586240729U;
    msg.min_range = 20889U;
    msg.max_range = 15445U;
    msg.bits_per_point = 209U;
    msg.scale_factor = 0.13286708974152184;
    const char tmp_msg_0[] = {-98, 82, 28, -41, -61, 105, 99, -17, -128, -96, -122, 39, 37, 100, -14, 126, -111, -110, -61, 106, -1, -48, 96, 51, -121, -50, 92, -113, -52, 23, 111, 78, 69, 80, 39, 44, -20, -107, -91, -73, 85, -48, 16, -19, 108, 115, 23, -71, -110, 101, 67, 36, 116, -122, -126, 86, -107, 116, 3, -76, 63, 0, -48, 122, 55, 1, -110, 44, 90, -113, -109, -6, 42, 33, -13, -31, -61, 64, -93, 115, -93, -7, -126, 78, 54, 79, 85, 74, -118, -54, -26, 51, 32, 56, -122, 87, 80, 40, 121, -14, -85, -119, 97, -39, 3, 64, 16, 64, -105, -113, 17, 44, 22, -58, 101, -40, -53, -26, 84, 109, 108, -10, -113, 76, -85, 86, -102, 120, 43, 87, 75, 80, 18, -79, 118, -62, -7, -48, 13, -22, -107, 56, -49, -33, 6, -40, 91, -56, 50, 115, 36, -93, -44, 55, -43, 116, -52, -27, -87, 73, 88, -1, 113, -3, 23, -104, -62, 6, -62, 42, -109, -73, -107, -101, -75, 36, 53, -3, -80, 50, -68, 90, -34, 117, -42, 63, -101, -94, 37, -4, -20, -29, 27, -6, -127, -29, 56, 113, -77, 119, 83, -120, 12, 80, 76, -124, 112, -3, -7, -104, 44, -79, 12, 122, -66, -114, 125, -99, -35, 59, -36, -70};
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
    msg.setTimeStamp(0.9379953610876826);
    msg.setSource(11231U);
    msg.setSourceEntity(134U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(126U);
    msg.type = 175U;
    msg.frequency = 3497520570U;
    msg.min_range = 33524U;
    msg.max_range = 19837U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.977593354652103;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.04147214791676557;
    tmp_msg_0.beam_height = 0.7564161441337555;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-100, -11, 75, -22, -37, -56, 94, -12, -110, 86, 2, -120, -6, 121, 101, 118, 120, -103, -59, 65, -119, 13, 119, 4, 70, 51, -93, -112, -50, 113, 50, -97, 18, -102, 88, 87, 31, -44, -45, 101, -38, -40, 62, -85, -60, -32, -72, -54, 10, -49, 115, -29, -37, -66, 84, 13, -32, -27, 1, 66, -7, -115, -38, -69, -87, 2, 58, 42, 32, -39, -30, -13, 33, -33, 35, 79, 104, -71, -89, -116, 119, 16, 117, 90, -103, 108, 57, 101, 93, 36, -14, -12, -126, 120, 124, -11, 93, 83, 64, -23, -5, -40, -40, 93, -71, 65, -42, -87, 49, 108, 44, -92, -106, 78, -110, -19, -43, 73, -18, -85, 61, -110, 103, -52, -7, -119, -34, 28, 45, 32, 53, -67, 110, -68, -104, -33, -102, -56, 86, -121, -9, 109, 36, -105, 14, 53, 101, -43, -57, 98, 106, -114, -115, 47, -50, -122, -6, 58, -105, 117, 12, 40, -31, 20, 83, 75, -121, -48, 19, 20, -65, -110, 60, 95, 45, -126, -23, 53, -74, -121, -8, -100, 23, -121, -123, 84, -27, -88, 51, 94, -87, -37, 22, 52, 115, -17, 20, -73, 29, 7, -101, 41, -54, -52, 49, -99, -47, 122, -9, 123, -103, 123, -55, 126, 118, 17, -97, 122, -12, -8};
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
    msg.setTimeStamp(0.8693524162815138);
    msg.setSource(33045U);
    msg.setSourceEntity(1U);
    msg.setDestination(3244U);
    msg.setDestinationEntity(69U);
    msg.type = 107U;
    msg.frequency = 2444811821U;
    msg.min_range = 22425U;
    msg.max_range = 36155U;
    msg.bits_per_point = 39U;
    msg.scale_factor = 0.3189687982816162;
    const char tmp_msg_0[] = {74, 78, -16, 11, -86, 7, 68, 14, 7, -95, 109, 98, -109, 46, 101, -83, -113, 40, 98, 69, 1, -103, 90, -100, -37, 62, 34, -77, 73, 53, -37, 86, -79, -118, 20, 90, 99, -47, 19, 63, 61, 112, -96, -112, 4, 1, 108, 53, -81, -87, 63, 112, 12, 27, 93, -106, 18, -41, 19, -87, 10, 23, -8, -83, 110, -10, -51, 76, -2, -93, -124, 116, -110, 107, 91, -85, 38, 97, 101, -70, 7, 109, -101, 10, -51, 54, 94, -66, -101, 48, 125, 80, 14, -56, -63, -51, 53, 40, -32, -47, 16, 82, 114, 69, 123, -35, 105, 36, -46, 80, -123, -56, 55, 65, 78, -68, 94, 89, -118, -82, 71, 45, 111, 119, -89, 12, -39, -120, -15, -23, 42, 67, -79, -20, 119, 117, -34, 70, -9, -57, -120, -18, 19, -60, 76, 31, -44, -42, -15, -14, -123, 80, 19, 38, 21, 123, 50, -113, 36, 117, 34, -37, -44, 121, 75, -40, -84, 9, -125, -67, 45, 2, -123, -96, -52, -107, -33};
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
    msg.setTimeStamp(0.46025250551964425);
    msg.setSource(60993U);
    msg.setSourceEntity(231U);
    msg.setDestination(51491U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.7294994145891954);
    msg.setSource(59680U);
    msg.setSourceEntity(1U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.8959117024103217);
    msg.setSource(42939U);
    msg.setSourceEntity(38U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6995157680317008);
    msg.setSource(36782U);
    msg.setSourceEntity(218U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(31U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.5279211554767815);
    msg.setSource(33482U);
    msg.setSourceEntity(103U);
    msg.setDestination(59328U);
    msg.setDestinationEntity(99U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.4264784562399889);
    msg.setSource(26722U);
    msg.setSourceEntity(205U);
    msg.setDestination(4373U);
    msg.setDestinationEntity(211U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.5743419632569103);
    msg.setSource(9011U);
    msg.setSourceEntity(1U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8199765358119849;
    msg.confidence = 0.6210998625141494;
    msg.opmodes.assign("SXNKQRDSBZFGHJAGRFNCTHORNYKYBWIXMCRXFABCTDTKUDUGALAJMGJSOTEWUDTHQXUOQDWHYZEDUCVLNZXQSSRNFPIUVUBVCHOGSHNJMYBEISBYSAUXHRQWEKQNGZPGNLEVZTLMAMCEJLODSRNABPJPDPUPHIXCQWRTSDWIOKCLAMZGKFBQTVFVEYLDVVFKNBYMIZVPCFEQLBOPOPTPTFZWHJAAXUR");

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
    msg.setTimeStamp(0.3853308707802825);
    msg.setSource(34144U);
    msg.setSourceEntity(231U);
    msg.setDestination(30696U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5226594274297904;
    msg.confidence = 0.7408347941414601;
    msg.opmodes.assign("NMYBUSLGPGTWWAYPKOEHJLFDHFNUDXIJWGKNSSMCZZDRKOPOBVDQRACNTGUZSPAXOFMFNCQNTJDIHZJIZQDFLOJVBLAIOQMHMZYTNYLPOXEVGZFIWGMBBSJWRCXVARLYIZEU");

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
    msg.setTimeStamp(0.44526178713005327);
    msg.setSource(29154U);
    msg.setSourceEntity(133U);
    msg.setDestination(63127U);
    msg.setDestinationEntity(170U);
    msg.value = 0.20853267476393011;
    msg.confidence = 0.8557757000791891;
    msg.opmodes.assign("ILQSJOUCHWTXQWCGHMISWLUMCSNVQUTKXUWBPPOSXESRIHYEFFHNBVGXKRWFIXRHMJYXYEPAZQTEJBKPBVVEEHVZJMDFCHAIPQATXAECUNNDNSYSMPABCOANKARCZIWYGNELWPXGKLFUUMIPRMHGKYRQFEDVFDOZZWDIQFBTBLUJLDMTHPQWROOLAODNZ");

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
    msg.setTimeStamp(0.9686722456150146);
    msg.setSource(22242U);
    msg.setSourceEntity(61U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(66U);
    msg.itow = 1254840099U;
    msg.lat = 0.3217479207161683;
    msg.lon = 0.9031288541354945;
    msg.height_ell = 0.08850950444614691;
    msg.height_sea = 0.7278989531245066;
    msg.hacc = 0.20492797277370411;
    msg.vacc = 0.23432346129849013;
    msg.vel_n = 0.5908472700748932;
    msg.vel_e = 0.6545304140878946;
    msg.vel_d = 0.05816154934442219;
    msg.speed = 0.0695958921669585;
    msg.gspeed = 0.21889454831149568;
    msg.heading = 0.2572222191694824;
    msg.sacc = 0.5830658944010688;
    msg.cacc = 0.4885820451030015;

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
    msg.setTimeStamp(0.3073646849845172);
    msg.setSource(18475U);
    msg.setSourceEntity(77U);
    msg.setDestination(65418U);
    msg.setDestinationEntity(215U);
    msg.itow = 1865993794U;
    msg.lat = 0.18354576779554965;
    msg.lon = 0.02313946381311882;
    msg.height_ell = 0.14109625137381676;
    msg.height_sea = 0.035103845544029566;
    msg.hacc = 0.024920351112334815;
    msg.vacc = 0.3873014575960688;
    msg.vel_n = 0.040329648073470836;
    msg.vel_e = 0.9827009716647376;
    msg.vel_d = 0.10652916806160861;
    msg.speed = 0.844633861446404;
    msg.gspeed = 0.9056011803281726;
    msg.heading = 0.39245311431006946;
    msg.sacc = 0.2408876165388153;
    msg.cacc = 0.30691740671545187;

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
    msg.setTimeStamp(0.6456720298179928);
    msg.setSource(48427U);
    msg.setSourceEntity(52U);
    msg.setDestination(53229U);
    msg.setDestinationEntity(206U);
    msg.itow = 792867182U;
    msg.lat = 0.15463683645969395;
    msg.lon = 0.13063891914366133;
    msg.height_ell = 0.4217598519225635;
    msg.height_sea = 0.14642810887814328;
    msg.hacc = 0.026536212317202046;
    msg.vacc = 0.09001418419828966;
    msg.vel_n = 0.861288673841829;
    msg.vel_e = 0.28535505071964706;
    msg.vel_d = 0.05880969544454373;
    msg.speed = 0.8370846565806266;
    msg.gspeed = 0.9839608194324093;
    msg.heading = 0.03449723309141273;
    msg.sacc = 0.5337047770325184;
    msg.cacc = 0.6562709726689236;

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
    msg.setTimeStamp(0.18106687850440584);
    msg.setSource(9600U);
    msg.setSourceEntity(117U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(230U);
    msg.id = 38U;
    msg.value = 0.15535376332959283;

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
    msg.setTimeStamp(0.7688928668625361);
    msg.setSource(14401U);
    msg.setSourceEntity(102U);
    msg.setDestination(60009U);
    msg.setDestinationEntity(215U);
    msg.id = 210U;
    msg.value = 0.30234197430406906;

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
    msg.setTimeStamp(0.0905130470613561);
    msg.setSource(31038U);
    msg.setSourceEntity(181U);
    msg.setDestination(62292U);
    msg.setDestinationEntity(211U);
    msg.id = 10U;
    msg.value = 0.6498143482451115;

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
    msg.setTimeStamp(0.06196069357697631);
    msg.setSource(50520U);
    msg.setSourceEntity(224U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(61U);
    msg.x = 0.24594643145419504;
    msg.y = 0.9397766351921412;
    msg.z = 0.720179141160046;
    msg.phi = 0.3800664213967977;
    msg.theta = 0.3361254710234608;
    msg.psi = 0.950743746653569;

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
    msg.setTimeStamp(0.6914108735973625);
    msg.setSource(10859U);
    msg.setSourceEntity(239U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(237U);
    msg.x = 0.8306029482076007;
    msg.y = 0.09827395029714248;
    msg.z = 0.6431614679095795;
    msg.phi = 0.7182091564060588;
    msg.theta = 0.3534205774098129;
    msg.psi = 0.347456784028615;

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
    msg.setTimeStamp(0.5195430676141852);
    msg.setSource(64938U);
    msg.setSourceEntity(138U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(177U);
    msg.x = 0.9314534866565785;
    msg.y = 0.8509474567636154;
    msg.z = 0.04903618851060887;
    msg.phi = 0.4437924326928897;
    msg.theta = 0.38368824466307927;
    msg.psi = 0.7099864423358091;

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
    msg.setTimeStamp(0.8713055203074306);
    msg.setSource(7345U);
    msg.setSourceEntity(197U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.12578433348879337;
    msg.beam_height = 0.23224939856276483;

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
    msg.setTimeStamp(0.34989943679546387);
    msg.setSource(18219U);
    msg.setSourceEntity(188U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.26394460727395264;
    msg.beam_height = 0.3566952717831623;

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
    msg.setTimeStamp(0.26179804171567245);
    msg.setSource(33781U);
    msg.setSourceEntity(128U);
    msg.setDestination(39913U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.5721848178325638;
    msg.beam_height = 0.04768122897196525;

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
    msg.setTimeStamp(0.2299857426843569);
    msg.setSource(38424U);
    msg.setSourceEntity(238U);
    msg.setDestination(39495U);
    msg.setDestinationEntity(112U);
    msg.sane = 49U;

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
    msg.setTimeStamp(0.34324724641586823);
    msg.setSource(17944U);
    msg.setSourceEntity(73U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(19U);
    msg.sane = 155U;

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
    msg.setTimeStamp(0.8160763252917951);
    msg.setSource(7193U);
    msg.setSourceEntity(95U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(241U);
    msg.sane = 62U;

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
    msg.setTimeStamp(0.46012431468778847);
    msg.setSource(29855U);
    msg.setSourceEntity(211U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(66U);
    msg.id = 219U;
    msg.zoom = 127U;
    msg.action = 188U;

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
    msg.setTimeStamp(0.3696286857086436);
    msg.setSource(14071U);
    msg.setSourceEntity(14U);
    msg.setDestination(6783U);
    msg.setDestinationEntity(62U);
    msg.id = 58U;
    msg.zoom = 44U;
    msg.action = 165U;

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
    msg.setTimeStamp(0.3592845787808774);
    msg.setSource(55870U);
    msg.setSourceEntity(213U);
    msg.setDestination(50484U);
    msg.setDestinationEntity(240U);
    msg.id = 76U;
    msg.zoom = 95U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.7733596206282352);
    msg.setSource(1360U);
    msg.setSourceEntity(112U);
    msg.setDestination(63729U);
    msg.setDestinationEntity(198U);
    msg.id = 92U;
    msg.value = 0.9801323592643093;

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
    msg.setTimeStamp(0.12852458849425086);
    msg.setSource(22670U);
    msg.setSourceEntity(191U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(66U);
    msg.id = 50U;
    msg.value = 0.06395049658924357;

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
    msg.setTimeStamp(0.27289118905532395);
    msg.setSource(49637U);
    msg.setSourceEntity(205U);
    msg.setDestination(21889U);
    msg.setDestinationEntity(103U);
    msg.id = 144U;
    msg.value = 0.613191918140333;

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
    msg.setTimeStamp(0.766599921307669);
    msg.setSource(46386U);
    msg.setSourceEntity(180U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(24U);
    msg.id = 177U;
    msg.value = 0.9995393368786601;

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
    msg.setTimeStamp(0.04177177428386769);
    msg.setSource(58044U);
    msg.setSourceEntity(39U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(35U);
    msg.id = 111U;
    msg.value = 0.4575787636524925;

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
    msg.setTimeStamp(0.01042755612340951);
    msg.setSource(48071U);
    msg.setSourceEntity(240U);
    msg.setDestination(34701U);
    msg.setDestinationEntity(87U);
    msg.id = 24U;
    msg.value = 0.7728516074758748;

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
    msg.setTimeStamp(0.6026887137615973);
    msg.setSource(43680U);
    msg.setSourceEntity(34U);
    msg.setDestination(12077U);
    msg.setDestinationEntity(244U);
    msg.id = 7U;
    msg.angle = 0.5234266333376938;

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
    msg.setTimeStamp(0.19142085085057547);
    msg.setSource(11749U);
    msg.setSourceEntity(133U);
    msg.setDestination(24570U);
    msg.setDestinationEntity(82U);
    msg.id = 191U;
    msg.angle = 0.101610671556838;

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
    msg.setTimeStamp(0.5823686486340881);
    msg.setSource(23581U);
    msg.setSourceEntity(116U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(34U);
    msg.id = 151U;
    msg.angle = 0.4444535692201179;

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
    msg.setTimeStamp(0.10094643205377629);
    msg.setSource(12875U);
    msg.setSourceEntity(223U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(181U);
    msg.op = 199U;
    msg.actions.assign("ZGPWAJVKEUFBXRWRGJCQOENBEFTLAILLGKPJATPPDCPRGNGWXKHDKLNZQAXTKBVTSCBOCZCQJTPROYDDCNIQSEYNHUXGLYSAITBZJUIYKVYXJBEMASGLIMIMEMBAFWZJPGXQRLWAMOHUMKOMHDUTRSWYEFQOVIMDUFJTEQUOOMMHVKIDVCXUDVVJRWLAXHWFPBVDRIQYDE");

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
    msg.setTimeStamp(0.5424063521864204);
    msg.setSource(44409U);
    msg.setSourceEntity(230U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(172U);
    msg.op = 162U;
    msg.actions.assign("KQEEBMOZWSLBGUDFERFREGZBDBOSTXCJMKUDPHWIOIQHRXICPJCQXDNVYKSRWSGPXFUQALVWJBCELHZQCSVXMEPPJMUFTWJYIUCCOSQXNHTUFSLXNOYRLYKANUADCYYLSQBGTGZVOZNTRARWNPWZQYTXTDKBYIAZXOADFLIFRHPRJKWOGYAG");

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
    msg.setTimeStamp(0.7437420272613702);
    msg.setSource(11949U);
    msg.setSourceEntity(45U);
    msg.setDestination(14185U);
    msg.setDestinationEntity(63U);
    msg.op = 43U;
    msg.actions.assign("VBJWMDHIBXTAVIACDMFBZRNFBMCYNGVFXTGGYOOFJZHVAVGUTHKRXNYSKBOWMIJFSKCVGWDQLNXAMQSRDQCKHNVFJWLSB");

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
    msg.setTimeStamp(0.6425509498426228);
    msg.setSource(56095U);
    msg.setSourceEntity(74U);
    msg.setDestination(24874U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("WXDMTCBLJNSEDYCYLAQKWKTDODYLVSNVJMWKJAEAYVLTWJQIRPKZYJLHBWOSKUFMNXILBOVOLHQHNHODZORNNKIPJATSKBBUXGUTLRAAQZRDPEXHEIWNPSTSDUFROFKCPQMHNCJWOTHXYMWYICVAXHRYRMBIEMFQHYQUEESHTFGLCAGXCUFXDBBLQVNJKZRXUAC");

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
    msg.setTimeStamp(0.7506218487134376);
    msg.setSource(61743U);
    msg.setSourceEntity(31U);
    msg.setDestination(59715U);
    msg.setDestinationEntity(123U);
    msg.actions.assign("FPPNAPCHEATIKSXHKQJGQTNXETFCVXSGIWLNSQMQXEJCITPIAYRAUMHZBSHLXEHXZL");

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
    msg.setTimeStamp(0.7839641183048643);
    msg.setSource(5912U);
    msg.setSourceEntity(189U);
    msg.setDestination(24090U);
    msg.setDestinationEntity(58U);
    msg.actions.assign("SMDRJJVCYAVTXMRPALBSOVVVWECZLZKTGGQRMIIYOPXYPIRZDCGTKUDJZJAEODGTABVTJSRRLWXRHFJGFQWYOICSRNNNWQJVMTDSBUSPPSZMIZFCQHIKJEPHACHBOEAMQBFTZUBOKAEIZQRKIYMXNGXYIFDNBLWBMGFFLVOBDNTGTESUWUOYEAWYKHWLFNDKXLDISWUPWNHXXZNQFQYBHLMDJTH");

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
    msg.setTimeStamp(0.8836955660323544);
    msg.setSource(38841U);
    msg.setSourceEntity(102U);
    msg.setDestination(59448U);
    msg.setDestinationEntity(83U);
    msg.button = 242U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.10894779161797763);
    msg.setSource(27068U);
    msg.setSourceEntity(252U);
    msg.setDestination(14239U);
    msg.setDestinationEntity(10U);
    msg.button = 105U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.9331748074355374);
    msg.setSource(25340U);
    msg.setSourceEntity(164U);
    msg.setDestination(27812U);
    msg.setDestinationEntity(241U);
    msg.button = 13U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.3725619956941706);
    msg.setSource(7641U);
    msg.setSourceEntity(209U);
    msg.setDestination(19758U);
    msg.setDestinationEntity(104U);
    msg.op = 124U;
    msg.text.assign("RNJWGKLWHVOTZYONRRIJLEKELKHFYKFQXHGYVHIQGMYFYOUDEPQUOYVFUQZBNWCJVJRWEMCMCXNWNNIIDEEGHGSXXTJUJQXDQSCLSYCBAMHONGMZAIRZRCPMPIVAKBUXMAZSDJPMINFPRHUDOTSFFDTQWRBQVAOVNJVESBCZWIUXZXVUJGSYFAHUCAUVZWTRKMCDQTLSSMPIFERGWZTLYIOWPDEALXNODXHBLTTKG");

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
    msg.setTimeStamp(0.025987404305322537);
    msg.setSource(12268U);
    msg.setSourceEntity(119U);
    msg.setDestination(62712U);
    msg.setDestinationEntity(12U);
    msg.op = 105U;
    msg.text.assign("DQOOQJUIJRGKRUDFVIFCDPROGWLUZZRCBLMWLMEZCQRQDSQHNCUOHHTUMTFHMMDSHTYEEKYNLZARJOIICQKTSFYIJDPYBXPOVXMSNRUYDSTCWJAMVNTPNFWAAAHVJSBSSFJHNXYVXGCXLGFBFTZUZBJKKXCEALJBZMBYEUQIHKRPPKNXYYMKVWD");

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
    msg.setTimeStamp(0.3389017708271065);
    msg.setSource(19251U);
    msg.setSourceEntity(193U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(218U);
    msg.op = 194U;
    msg.text.assign("LRQFRORVESQKIWITUDBFIGMTEZXFBSMCXWMWBZTLWH");

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
    msg.setTimeStamp(0.9372538092633306);
    msg.setSource(8610U);
    msg.setSourceEntity(179U);
    msg.setDestination(43056U);
    msg.setDestinationEntity(128U);
    msg.op = 174U;
    msg.time_remain = 0.9210020808634802;
    msg.sched_time = 0.6116677193334268;

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
    msg.setTimeStamp(0.26518932083400326);
    msg.setSource(541U);
    msg.setSourceEntity(180U);
    msg.setDestination(59375U);
    msg.setDestinationEntity(120U);
    msg.op = 71U;
    msg.time_remain = 0.5426444525582715;
    msg.sched_time = 0.019925547300249313;

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
    msg.setTimeStamp(0.6081246333534841);
    msg.setSource(17809U);
    msg.setSourceEntity(209U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(223U);
    msg.op = 197U;
    msg.time_remain = 0.05681144067718913;
    msg.sched_time = 0.2897922086330802;

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
    msg.setTimeStamp(0.8942937508495916);
    msg.setSource(18155U);
    msg.setSourceEntity(254U);
    msg.setDestination(31713U);
    msg.setDestinationEntity(177U);
    msg.name.assign("QPJKSRZAJATLBCBQKBKQWFVRIQZHOLFURIOCOVOAFUVMALWEXFOVUDMQOIDUZTHGWTGSUOJHGXRPFG");
    msg.op = 194U;
    msg.sched_time = 0.7932537536063257;

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
    msg.setTimeStamp(0.18273991427672753);
    msg.setSource(15000U);
    msg.setSourceEntity(40U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(226U);
    msg.name.assign("EVWNSHNJXUYOJVOZQCLXSEWNAUGDBTLPBVALPAUYLTZYLCFDLRRDHOSXSZIFHNABZUQQYUXBGVEHQCNRPAHPCEIPGBJSMO");
    msg.op = 196U;
    msg.sched_time = 0.857401086778544;

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
    msg.setTimeStamp(0.7042633156247469);
    msg.setSource(35867U);
    msg.setSourceEntity(30U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(128U);
    msg.name.assign("REPIGSGJLNQCYRXTICQLAYMFGABSAUHAUDUYRIZDIIBKXYPKVBNDSWHMQCTTVURVENDMPAKZSZLVZLZQWWXFEOGBMLCHUJCPTGWPUGMSRWFNBRZGEJNQNWGXETZQHWXYTIXIEARNIOIEFTCVYTVVSXOLHHQDDCQORFDOSZNAMKHYORMPJOICJPEGEQOWDBYQPONUKPAFKKHUXRYKFKMXBFVUVXASWPBLFGSNZMSYJAKWVCFJMDETCHLJHO");
    msg.op = 102U;
    msg.sched_time = 0.019547303210446287;

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
    msg.setTimeStamp(0.5573020247854895);
    msg.setSource(59679U);
    msg.setSourceEntity(236U);
    msg.setDestination(63778U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.5602248023101277);
    msg.setSource(18099U);
    msg.setSourceEntity(218U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.020722239625089456);
    msg.setSource(28192U);
    msg.setSourceEntity(197U);
    msg.setDestination(33468U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.10995429178524752);
    msg.setSource(32572U);
    msg.setSourceEntity(7U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(106U);
    msg.name.assign("RVUCHWMVGIZRCTDUOKBMTISWKEZMBXCOFTVYPQPSJCIWSUEDLEGIDLSMYSQBQINRDKHWEUVDJUXUYGZPHLQIIRBTASSALYJRNAWOQPTOJVZOYWCKGHYKMTPVEFUPGYNRRBFFQHXNWXLVYKPNTSNEWEUJXLKVRCZV");
    msg.state = 134U;

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
    msg.setTimeStamp(0.7925962248163716);
    msg.setSource(14002U);
    msg.setSourceEntity(54U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(93U);
    msg.name.assign("FJAOICJHXWFWPMYYFBVSYFUVOKGPXINHDUQJWYCLEBJ");
    msg.state = 33U;

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
    msg.setTimeStamp(0.39687965233670186);
    msg.setSource(46056U);
    msg.setSourceEntity(94U);
    msg.setDestination(35574U);
    msg.setDestinationEntity(22U);
    msg.name.assign("GTZAQHCYZYSNFIEXAOKNZXOHTRUNYOBJGOAXRKQPVJLVDHSJWWXJYOUFIOOLICEDJQPVXJUSOTQMPJFGKCWTWHQCHRXAKLPOYFIAOGFYVSIS");
    msg.state = 170U;

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
    msg.setTimeStamp(0.44337414804810893);
    msg.setSource(41781U);
    msg.setSourceEntity(112U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZMJHPZCBDQPMF");
    msg.value = 163U;

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
    msg.setTimeStamp(0.7341686283944673);
    msg.setSource(50125U);
    msg.setSourceEntity(6U);
    msg.setDestination(26195U);
    msg.setDestinationEntity(71U);
    msg.name.assign("TPDPXVEHDAFUENARNJCIGWMQAGZOWLIJHPLUNQMTOWRFZVDVBSAHRQUUFRCGMJAMQAIHCRFWPBCDGVETRIJZOCONZSJFYLSHDKECPCGYSSDXIBBJXTFVGUGNDTLXZGXADBJHNYTNPFWZLQFHMQGMDSBNKOKQQSCXBSUKWI");
    msg.value = 170U;

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
    msg.setTimeStamp(0.421343610928373);
    msg.setSource(17882U);
    msg.setSourceEntity(85U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(110U);
    msg.name.assign("NMJPVWBUWVBQOJNMDIAZLFQDJFYTUGNEXLDRSYTDCQULEYIC");
    msg.value = 18U;

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
    msg.setTimeStamp(0.3824074664515231);
    msg.setSource(25175U);
    msg.setSourceEntity(22U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(15U);
    msg.name.assign("JSQYQHRHJTBOXY");

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
    msg.setTimeStamp(0.27717538378081363);
    msg.setSource(76U);
    msg.setSourceEntity(85U);
    msg.setDestination(21182U);
    msg.setDestinationEntity(104U);
    msg.name.assign("OMMMKRWMCHSHQMJHDLUTCLSBLAATQLTZJPPYSWJCMORDXSVFCFGGDABOAMYOBRKYNBABUZQGVCNAJOIAQZZPTHWFZQPYHXFPOLUUITIWYKISJQHWELUERSUFNHVJNQEBZGMVERMCDEFTJZGYXZ");

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
    msg.setTimeStamp(0.07738335627176007);
    msg.setSource(30668U);
    msg.setSourceEntity(94U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(250U);
    msg.name.assign("YRBDNICRFACLHTIQZCDGWJBXPHEJNRZXCPZHKVLUDMJNWDUONRJXVTMVHPNQXCHIAQIAVVQBUGGRZJKLYJNLGAEVSKGOBQSBRDXQSNMPBWTSFUFYQXDWYYJEYXOGCTSVQNPEFUGMHSFRBWUTJRMRSZXACSFTACCTWKHGWGDBZPYLYZANEVEISYBPOKUIAXUCJTLTEATHFUOKPJMRWIEIMOIBKSGKLOKFZFPWUVPOELQXKOHWMYLZMMHELFDA");

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
    msg.setTimeStamp(0.5078101144408533);
    msg.setSource(46919U);
    msg.setSourceEntity(31U);
    msg.setDestination(61389U);
    msg.setDestinationEntity(109U);
    msg.name.assign("LPFRIHEGWLAMU");
    msg.value = 53U;

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
    msg.setTimeStamp(0.5801367997824417);
    msg.setSource(8442U);
    msg.setSourceEntity(33U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(65U);
    msg.name.assign("MJQZKXKEVZIXIITDEQBMFMADAGANPTUUPAHSIGLWBRIMAFLLRJYEAMFYIBODDQPXL");
    msg.value = 4U;

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
    msg.setTimeStamp(0.5865755184784456);
    msg.setSource(24378U);
    msg.setSourceEntity(43U);
    msg.setDestination(48776U);
    msg.setDestinationEntity(7U);
    msg.name.assign("ZEOKZTAGXDYESUVJWDDNFPPBCXPYIDMYPTELRBOCMZDCKYAJKSMQUGMDGXXCEJKQYSTFRQYTLKOPVKVBAOSRIWPGCACELUWTIMEQPHLONKPBPMTFHZUJMRJYNXHQWYVZIJUAJRLVFSXZYUNLIXRZZDTHEOBKMXXWWBNIKUXMEZSRBSDQVHLOJVCQAAJKZHPFSSGWTJNE");
    msg.value = 208U;

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
    msg.setTimeStamp(0.08719781357989664);
    msg.setSource(48663U);
    msg.setSourceEntity(204U);
    msg.setDestination(49789U);
    msg.setDestinationEntity(58U);
    msg.id = 104U;
    msg.period = 4119121568U;
    msg.duty_cycle = 2731409714U;

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
    msg.setTimeStamp(0.5966366851819411);
    msg.setSource(10611U);
    msg.setSourceEntity(209U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(233U);
    msg.id = 163U;
    msg.period = 3879207981U;
    msg.duty_cycle = 902914124U;

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
    msg.setTimeStamp(0.535311309705309);
    msg.setSource(11430U);
    msg.setSourceEntity(130U);
    msg.setDestination(36380U);
    msg.setDestinationEntity(76U);
    msg.id = 234U;
    msg.period = 3664556379U;
    msg.duty_cycle = 639785094U;

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
    msg.setTimeStamp(0.1876740925815784);
    msg.setSource(8204U);
    msg.setSourceEntity(54U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(65U);
    msg.id = 132U;
    msg.period = 3458847710U;
    msg.duty_cycle = 1251840828U;

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
    msg.setTimeStamp(0.3797078143428799);
    msg.setSource(13786U);
    msg.setSourceEntity(152U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(138U);
    msg.id = 206U;
    msg.period = 658295608U;
    msg.duty_cycle = 97911345U;

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
    msg.setTimeStamp(0.8310703796478042);
    msg.setSource(869U);
    msg.setSourceEntity(203U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(57U);
    msg.id = 231U;
    msg.period = 3058989704U;
    msg.duty_cycle = 1430095751U;

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
    msg.setTimeStamp(0.4338993063832257);
    msg.setSource(40561U);
    msg.setSourceEntity(108U);
    msg.setDestination(25834U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.06555077728877357;
    msg.lon = 0.7441718570752182;
    msg.height = 0.43654309954390014;
    msg.x = 0.6586616080431972;
    msg.y = 0.635801185875102;
    msg.z = 0.5845716548897878;
    msg.phi = 0.653654584682403;
    msg.theta = 0.9304074390355075;
    msg.psi = 0.27874670285066216;
    msg.u = 0.5201699660042527;
    msg.v = 0.08120854478916872;
    msg.w = 0.3347045583432281;
    msg.vx = 0.35719550019099666;
    msg.vy = 0.5138424573586964;
    msg.vz = 0.48874196435660344;
    msg.p = 0.6077176666759393;
    msg.q = 0.11855890236360755;
    msg.r = 0.3168560822392934;
    msg.depth = 0.8611716025215403;
    msg.alt = 0.49416141808698755;

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
    msg.setTimeStamp(0.7845116633472549);
    msg.setSource(33177U);
    msg.setSourceEntity(171U);
    msg.setDestination(11484U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.3011346703325355;
    msg.lon = 0.0506495047051011;
    msg.height = 0.7097939569759288;
    msg.x = 0.8155510473468129;
    msg.y = 0.45338606695961514;
    msg.z = 0.8134189545429488;
    msg.phi = 0.14145570827132448;
    msg.theta = 0.5731019784237047;
    msg.psi = 0.6311763557362451;
    msg.u = 0.878229915117414;
    msg.v = 0.21211233011136432;
    msg.w = 0.7521303354843945;
    msg.vx = 0.22434526233969554;
    msg.vy = 0.7725282957930055;
    msg.vz = 0.20980450308036158;
    msg.p = 0.5077949702990187;
    msg.q = 0.6149710067782799;
    msg.r = 0.503826934282326;
    msg.depth = 0.8243585637673957;
    msg.alt = 0.49577696440507;

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
    msg.setTimeStamp(0.6982112602682481);
    msg.setSource(4103U);
    msg.setSourceEntity(89U);
    msg.setDestination(49959U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.7801201282868035;
    msg.lon = 0.6352762254886685;
    msg.height = 0.14466836782103654;
    msg.x = 0.8944439755837628;
    msg.y = 0.41479104104788844;
    msg.z = 0.4168058181536587;
    msg.phi = 0.821190083622493;
    msg.theta = 0.6719299513632059;
    msg.psi = 0.6513073779911235;
    msg.u = 0.09985073177558179;
    msg.v = 0.4671640341406672;
    msg.w = 0.3298929133011437;
    msg.vx = 0.8169869595397408;
    msg.vy = 0.7286503292427372;
    msg.vz = 0.1766292140660296;
    msg.p = 0.42052306998215083;
    msg.q = 0.6099072405667796;
    msg.r = 0.5122119584250312;
    msg.depth = 0.15149747325774998;
    msg.alt = 0.08899441835589283;

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
    msg.setTimeStamp(0.49735049527208763);
    msg.setSource(15204U);
    msg.setSourceEntity(32U);
    msg.setDestination(31621U);
    msg.setDestinationEntity(35U);
    msg.x = 0.07113092080681804;
    msg.y = 0.821559063356763;
    msg.z = 0.41357321630387167;

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
    msg.setTimeStamp(0.744878355835425);
    msg.setSource(25174U);
    msg.setSourceEntity(171U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(169U);
    msg.x = 0.6475463097426036;
    msg.y = 0.1000459225000121;
    msg.z = 0.8425960793746811;

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
    msg.setTimeStamp(0.6274812587381686);
    msg.setSource(9154U);
    msg.setSourceEntity(230U);
    msg.setDestination(50415U);
    msg.setDestinationEntity(37U);
    msg.x = 0.33879434423464216;
    msg.y = 0.5631154954803005;
    msg.z = 0.6151983191542287;

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
    msg.setTimeStamp(0.9071931682479507);
    msg.setSource(30333U);
    msg.setSourceEntity(28U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(55U);
    msg.value = 0.6143913424365302;

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
    msg.setTimeStamp(0.8224592566720459);
    msg.setSource(42623U);
    msg.setSourceEntity(15U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(94U);
    msg.value = 0.6115482330198936;

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
    msg.setTimeStamp(0.33135326507250706);
    msg.setSource(17618U);
    msg.setSourceEntity(200U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8923523364413445;

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
    msg.setTimeStamp(0.8752147215238113);
    msg.setSource(34090U);
    msg.setSourceEntity(98U);
    msg.setDestination(19234U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5457015883856844;

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
    msg.setTimeStamp(0.9201227052382215);
    msg.setSource(60250U);
    msg.setSourceEntity(66U);
    msg.setDestination(22225U);
    msg.setDestinationEntity(58U);
    msg.value = 0.14259439181587852;

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
    msg.setTimeStamp(0.37325361148717007);
    msg.setSource(16217U);
    msg.setSourceEntity(205U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5065370054090227;

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
    msg.setTimeStamp(0.8520860356763642);
    msg.setSource(29324U);
    msg.setSourceEntity(58U);
    msg.setDestination(19151U);
    msg.setDestinationEntity(30U);
    msg.x = 0.6611259802168811;
    msg.y = 0.2766081591053192;
    msg.z = 0.016214532315737107;
    msg.phi = 0.6466691701971825;
    msg.theta = 0.6860819079491233;
    msg.psi = 0.007309553372407573;
    msg.p = 0.06604997070760155;
    msg.q = 0.16277884601944625;
    msg.r = 0.010247450852632123;
    msg.u = 0.8707717384032164;
    msg.v = 0.02708774075431275;
    msg.w = 0.3678134294928054;
    msg.bias_psi = 0.4145691659012576;
    msg.bias_r = 0.96382940350143;

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
    msg.setTimeStamp(0.13712797449850644);
    msg.setSource(48358U);
    msg.setSourceEntity(95U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(95U);
    msg.x = 0.8075457038326609;
    msg.y = 0.6376818982020581;
    msg.z = 0.6207247453251971;
    msg.phi = 0.31125489649811644;
    msg.theta = 0.4298316633680551;
    msg.psi = 0.2207078740535623;
    msg.p = 0.6744422780278009;
    msg.q = 0.9947859364979639;
    msg.r = 0.24058840237670653;
    msg.u = 0.08244864397406249;
    msg.v = 0.6731071213671933;
    msg.w = 0.7195910094438063;
    msg.bias_psi = 0.7398453285603063;
    msg.bias_r = 0.055409585134329586;

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
    msg.setTimeStamp(0.11589089751333925);
    msg.setSource(5309U);
    msg.setSourceEntity(128U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(121U);
    msg.x = 0.7267982101557245;
    msg.y = 0.6669227009433539;
    msg.z = 0.2963775771412309;
    msg.phi = 0.3831627395857553;
    msg.theta = 0.7615748821215599;
    msg.psi = 0.24451391559692637;
    msg.p = 0.17649527633182194;
    msg.q = 0.6783037761859217;
    msg.r = 0.813714472889684;
    msg.u = 0.606570577441954;
    msg.v = 0.6212201779510861;
    msg.w = 0.8681329786273402;
    msg.bias_psi = 0.6137987655159075;
    msg.bias_r = 0.17267668347044385;

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
    msg.setTimeStamp(0.29607009000515017);
    msg.setSource(46756U);
    msg.setSourceEntity(2U);
    msg.setDestination(24004U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.5340316060604395;
    msg.bias_r = 0.7703229692772584;
    msg.cog = 0.4735902193992989;
    msg.cyaw = 0.16608988333752883;
    msg.lbl_rej_level = 0.556659736866597;
    msg.gps_rej_level = 0.5028498307164069;
    msg.custom_x = 0.8580153529603546;
    msg.custom_y = 0.6511682865386897;
    msg.custom_z = 0.49710997887071273;

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
    msg.setTimeStamp(0.19795003445983206);
    msg.setSource(20711U);
    msg.setSourceEntity(181U);
    msg.setDestination(63237U);
    msg.setDestinationEntity(183U);
    msg.bias_psi = 0.10656534194229106;
    msg.bias_r = 0.385815841298878;
    msg.cog = 0.589696255376489;
    msg.cyaw = 0.2909776830762506;
    msg.lbl_rej_level = 0.704978349398045;
    msg.gps_rej_level = 0.1289542011375272;
    msg.custom_x = 0.48711838229718396;
    msg.custom_y = 0.7446818503870488;
    msg.custom_z = 0.37581685358993233;

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
    msg.setTimeStamp(0.5625613008659277);
    msg.setSource(33496U);
    msg.setSourceEntity(132U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(21U);
    msg.bias_psi = 0.507598664970795;
    msg.bias_r = 0.8964637584547915;
    msg.cog = 0.09857838213425862;
    msg.cyaw = 0.71323059086534;
    msg.lbl_rej_level = 0.2061948523598346;
    msg.gps_rej_level = 0.8176161758774486;
    msg.custom_x = 0.6747549263442241;
    msg.custom_y = 0.9423735736869692;
    msg.custom_z = 0.9115990893067257;

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
    msg.setTimeStamp(0.2683361959173396);
    msg.setSource(2791U);
    msg.setSourceEntity(48U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.0574699053852713;
    msg.reason = 128U;

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
    msg.setTimeStamp(0.6969867426227595);
    msg.setSource(16126U);
    msg.setSourceEntity(89U);
    msg.setDestination(44909U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.9776573749797524;
    msg.reason = 184U;

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
    msg.setTimeStamp(0.7743873477623475);
    msg.setSource(28162U);
    msg.setSourceEntity(139U);
    msg.setDestination(7357U);
    msg.setDestinationEntity(172U);
    msg.utc_time = 0.20342056934813724;
    msg.reason = 220U;

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
    msg.setTimeStamp(0.5899078218517798);
    msg.setSource(20723U);
    msg.setSourceEntity(43U);
    msg.setDestination(40179U);
    msg.setDestinationEntity(32U);
    msg.id = 230U;
    msg.range = 0.9616915270463788;
    msg.acceptance = 236U;

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
    msg.setTimeStamp(0.1857634692820449);
    msg.setSource(28306U);
    msg.setSourceEntity(123U);
    msg.setDestination(50385U);
    msg.setDestinationEntity(109U);
    msg.id = 46U;
    msg.range = 0.7744079558914541;
    msg.acceptance = 30U;

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
    msg.setTimeStamp(0.8510238171454382);
    msg.setSource(9939U);
    msg.setSourceEntity(230U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(248U);
    msg.id = 47U;
    msg.range = 0.0068374003710327536;
    msg.acceptance = 154U;

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
    msg.setTimeStamp(0.9864737289449237);
    msg.setSource(19163U);
    msg.setSourceEntity(191U);
    msg.setDestination(18295U);
    msg.setDestinationEntity(85U);
    msg.type = 35U;
    msg.reason = 40U;
    msg.value = 0.8736578961787507;
    msg.timestep = 0.08428123948423039;

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
    msg.setTimeStamp(0.9887222160490261);
    msg.setSource(13336U);
    msg.setSourceEntity(5U);
    msg.setDestination(4233U);
    msg.setDestinationEntity(179U);
    msg.type = 90U;
    msg.reason = 108U;
    msg.value = 0.7191907004699577;
    msg.timestep = 0.7046332421747743;

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
    msg.setTimeStamp(0.9966355106322247);
    msg.setSource(59451U);
    msg.setSourceEntity(9U);
    msg.setDestination(65419U);
    msg.setDestinationEntity(58U);
    msg.type = 195U;
    msg.reason = 129U;
    msg.value = 0.34454578646555767;
    msg.timestep = 0.5463009941844139;

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
    msg.setTimeStamp(0.9737276052517413);
    msg.setSource(39683U);
    msg.setSourceEntity(174U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.4489201996932384);
    msg.setSource(19712U);
    msg.setSourceEntity(127U);
    msg.setDestination(28057U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.7467589509856718);
    msg.setSource(23823U);
    msg.setSourceEntity(162U);
    msg.setDestination(5829U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.7985283184644579);
    msg.setSource(22171U);
    msg.setSourceEntity(171U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(183U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RAXDLSINJZOMZRSUKZSHAQQGOKBLEYEHICRZHEXGQDFFJTZTTMHKQRRVCOBVGWRSWSIVSPBCUNDVIEFITJHVNUDZA");
    tmp_msg_0.lat = 0.12326234935495894;
    tmp_msg_0.lon = 0.9971292588393887;
    tmp_msg_0.depth = 0.35401306320022186;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 184U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.21387207213920278;
    msg.y = 0.3020295913422403;
    msg.var_x = 0.9010368646812965;
    msg.var_y = 0.5694658456365114;
    msg.distance = 0.10098410229638877;

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
    msg.setTimeStamp(0.7025167866528046);
    msg.setSource(38590U);
    msg.setSourceEntity(200U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(117U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UENDTSYVYNHCQWXKUJBWHXLYOPJYBGGOLUBBRNZRHLCSIEPEMDSVVAFIZEWOVKKQFBGLQBPNAMFTHVPB");
    tmp_msg_0.lat = 0.9069710104840709;
    tmp_msg_0.lon = 0.8409105874041373;
    tmp_msg_0.depth = 0.1414176809673694;
    tmp_msg_0.query_channel = 227U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 48U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9156300715777761;
    msg.y = 0.8053586916044473;
    msg.var_x = 0.705241338168227;
    msg.var_y = 0.2853809527474026;
    msg.distance = 0.8282332075234452;

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
    msg.setTimeStamp(0.6871023075474523);
    msg.setSource(53278U);
    msg.setSourceEntity(52U);
    msg.setDestination(27805U);
    msg.setDestinationEntity(80U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UWKHRYVTJIZFQKPGZJXPKDYBJOCBTZWNHRXQASQXHDFUKLMJISMYMGRIXVETBDYBNF");
    tmp_msg_0.lat = 0.8236048949942346;
    tmp_msg_0.lon = 0.027321082274741726;
    tmp_msg_0.depth = 0.625973027429802;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 84U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.13179660802694337;
    msg.y = 0.28721906782348894;
    msg.var_x = 0.3347404218881682;
    msg.var_y = 0.29779344537900776;
    msg.distance = 0.4241805496799175;

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
    msg.setTimeStamp(0.26885815949236935);
    msg.setSource(42480U);
    msg.setSourceEntity(160U);
    msg.setDestination(47876U);
    msg.setDestinationEntity(90U);
    msg.state = 224U;

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
    msg.setTimeStamp(0.6778872657479614);
    msg.setSource(13698U);
    msg.setSourceEntity(116U);
    msg.setDestination(62575U);
    msg.setDestinationEntity(159U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.45585424113102624);
    msg.setSource(17517U);
    msg.setSourceEntity(105U);
    msg.setDestination(6801U);
    msg.setDestinationEntity(56U);
    msg.state = 107U;

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
    msg.setTimeStamp(0.7686377969064737);
    msg.setSource(62547U);
    msg.setSourceEntity(151U);
    msg.setDestination(63546U);
    msg.setDestinationEntity(167U);
    msg.x = 0.6350490031508983;
    msg.y = 0.4047944630698025;
    msg.z = 0.5080238763251873;

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
    msg.setTimeStamp(0.6380891831403142);
    msg.setSource(29910U);
    msg.setSourceEntity(59U);
    msg.setDestination(52925U);
    msg.setDestinationEntity(249U);
    msg.x = 0.2893714509508891;
    msg.y = 0.015055501328797738;
    msg.z = 0.47820452266086244;

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
    msg.setTimeStamp(0.6463502663678978);
    msg.setSource(26907U);
    msg.setSourceEntity(175U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(164U);
    msg.x = 0.9718533270090705;
    msg.y = 0.806403098036478;
    msg.z = 0.3992169914917788;

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
    msg.setTimeStamp(0.5544243931911877);
    msg.setSource(6910U);
    msg.setSourceEntity(237U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(61U);
    msg.value = 0.2369395843417369;

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
    msg.setTimeStamp(0.6139687741429248);
    msg.setSource(58476U);
    msg.setSourceEntity(70U);
    msg.setDestination(35296U);
    msg.setDestinationEntity(62U);
    msg.value = 0.04734399324846883;

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
    msg.setTimeStamp(0.9708147649946836);
    msg.setSource(29331U);
    msg.setSourceEntity(51U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(219U);
    msg.value = 0.210411842735155;

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
    msg.setTimeStamp(0.9288236240375953);
    msg.setSource(48575U);
    msg.setSourceEntity(76U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(117U);
    msg.value = 0.21040639640983871;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.9486851541034585);
    msg.setSource(52110U);
    msg.setSourceEntity(108U);
    msg.setDestination(13676U);
    msg.setDestinationEntity(143U);
    msg.value = 0.00234620326234225;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.4446647397396062);
    msg.setSource(26078U);
    msg.setSourceEntity(245U);
    msg.setDestination(26997U);
    msg.setDestinationEntity(123U);
    msg.value = 0.1766995328435561;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.2659346293904734);
    msg.setSource(22427U);
    msg.setSourceEntity(158U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(86U);
    msg.value = 0.2509072174342739;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.6371425891365772);
    msg.setSource(62238U);
    msg.setSourceEntity(98U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5493489265037812;
    msg.speed_units = 83U;

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
    msg.setTimeStamp(0.2681265957458161);
    msg.setSource(32818U);
    msg.setSourceEntity(248U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(174U);
    msg.value = 0.03715816259135807;
    msg.speed_units = 117U;

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
    msg.setTimeStamp(0.3355155968134389);
    msg.setSource(31166U);
    msg.setSourceEntity(34U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8166015274425077;

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
    msg.setTimeStamp(0.23018716163474728);
    msg.setSource(42155U);
    msg.setSourceEntity(250U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(13U);
    msg.value = 0.24241461590310387;

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
    msg.setTimeStamp(0.9656858485690273);
    msg.setSource(54197U);
    msg.setSourceEntity(45U);
    msg.setDestination(1238U);
    msg.setDestinationEntity(99U);
    msg.value = 0.34768597024637127;

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
    msg.setTimeStamp(0.08002910412457809);
    msg.setSource(34403U);
    msg.setSourceEntity(19U);
    msg.setDestination(11965U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8322993898661821;

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
    msg.setTimeStamp(0.9158160842299785);
    msg.setSource(8895U);
    msg.setSourceEntity(81U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9786351377662982;

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
    msg.setTimeStamp(0.6292871204465493);
    msg.setSource(24380U);
    msg.setSourceEntity(10U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(154U);
    msg.value = 0.06114076948809588;

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
    msg.setTimeStamp(0.7572524861037488);
    msg.setSource(27652U);
    msg.setSourceEntity(83U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8441038629730571;

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
    msg.setTimeStamp(0.2588409175603017);
    msg.setSource(5080U);
    msg.setSourceEntity(162U);
    msg.setDestination(56720U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4979580305580117;

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
    msg.setTimeStamp(0.05610432993840753);
    msg.setSource(19966U);
    msg.setSourceEntity(11U);
    msg.setDestination(3424U);
    msg.setDestinationEntity(17U);
    msg.value = 0.49574957953145227;

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
    msg.setTimeStamp(0.33050059340419036);
    msg.setSource(49565U);
    msg.setSourceEntity(89U);
    msg.setDestination(18177U);
    msg.setDestinationEntity(148U);
    msg.path_ref = 3369896074U;
    msg.start_lat = 0.5374745390004194;
    msg.start_lon = 0.3503832140037336;
    msg.start_z = 0.16143621502932393;
    msg.start_z_units = 173U;
    msg.end_lat = 0.21830186121527295;
    msg.end_lon = 0.6850582139157981;
    msg.end_z = 0.020963072696718377;
    msg.end_z_units = 67U;
    msg.speed = 0.8937303715546878;
    msg.speed_units = 133U;
    msg.lradius = 0.9787901646797867;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.3717256057239129);
    msg.setSource(9004U);
    msg.setSourceEntity(211U);
    msg.setDestination(64355U);
    msg.setDestinationEntity(93U);
    msg.path_ref = 376501150U;
    msg.start_lat = 0.7644808159538924;
    msg.start_lon = 0.35119165608995884;
    msg.start_z = 0.9437734627213011;
    msg.start_z_units = 97U;
    msg.end_lat = 0.06020578339888116;
    msg.end_lon = 0.36847161330101885;
    msg.end_z = 0.5329299975008122;
    msg.end_z_units = 38U;
    msg.speed = 0.7200933095086667;
    msg.speed_units = 152U;
    msg.lradius = 0.0050828833014126;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.3621872724072217);
    msg.setSource(13277U);
    msg.setSourceEntity(64U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 1982308148U;
    msg.start_lat = 0.35708491719550384;
    msg.start_lon = 0.8441390256365631;
    msg.start_z = 0.08771564025515832;
    msg.start_z_units = 212U;
    msg.end_lat = 0.8927081269567281;
    msg.end_lon = 0.0606479984327456;
    msg.end_z = 0.3041699318477462;
    msg.end_z_units = 190U;
    msg.speed = 0.9611571433980862;
    msg.speed_units = 81U;
    msg.lradius = 0.6049200435849011;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.5652882949408243);
    msg.setSource(58098U);
    msg.setSourceEntity(82U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(29U);
    msg.x = 0.7102522301184578;
    msg.y = 0.08475672761073949;
    msg.z = 0.6879862826430432;
    msg.k = 0.6425757616734757;
    msg.m = 0.2442015501798338;
    msg.n = 0.9770672167411736;
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
    msg.setTimeStamp(0.8097336844153581);
    msg.setSource(39154U);
    msg.setSourceEntity(114U);
    msg.setDestination(12216U);
    msg.setDestinationEntity(168U);
    msg.x = 0.27791509085106847;
    msg.y = 0.2955088632093398;
    msg.z = 0.9263653591133619;
    msg.k = 0.9015814164034864;
    msg.m = 0.9194987725102346;
    msg.n = 0.7894595969654591;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.37335484122220186);
    msg.setSource(43015U);
    msg.setSourceEntity(145U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(159U);
    msg.x = 0.2354970942761856;
    msg.y = 0.3508312754747678;
    msg.z = 0.41362287064499703;
    msg.k = 0.4311756659999183;
    msg.m = 0.6834044456011686;
    msg.n = 0.5767462821905447;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.08932441478889908);
    msg.setSource(30904U);
    msg.setSourceEntity(130U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7231616546902897;

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
    msg.setTimeStamp(0.8380742723968123);
    msg.setSource(38619U);
    msg.setSourceEntity(40U);
    msg.setDestination(13541U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5042032093904141;

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
    msg.setTimeStamp(0.9470831322282185);
    msg.setSource(61506U);
    msg.setSourceEntity(208U);
    msg.setDestination(36865U);
    msg.setDestinationEntity(14U);
    msg.value = 0.7051164140065372;

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
    msg.setTimeStamp(0.6366186201743322);
    msg.setSource(45449U);
    msg.setSourceEntity(145U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(76U);
    msg.u = 0.3263116608906216;
    msg.v = 0.2152167625120297;
    msg.w = 0.3989840059736307;
    msg.p = 0.9766250007986141;
    msg.q = 0.1651343667486853;
    msg.r = 0.8447170523197194;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.557882478423876);
    msg.setSource(13033U);
    msg.setSourceEntity(113U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(210U);
    msg.u = 0.6480729605723777;
    msg.v = 0.5442182263606016;
    msg.w = 0.6206351344916137;
    msg.p = 0.5447031044944858;
    msg.q = 0.42486901699938784;
    msg.r = 0.35356246375138145;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.04994172214471282);
    msg.setSource(63059U);
    msg.setSourceEntity(99U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(233U);
    msg.u = 0.21174922514458072;
    msg.v = 0.3646693778236687;
    msg.w = 0.8082551845954503;
    msg.p = 0.3560653258931916;
    msg.q = 0.35233322243858023;
    msg.r = 0.7992529032243366;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.0006688180209852845);
    msg.setSource(56259U);
    msg.setSourceEntity(36U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 3428337582U;
    msg.start_lat = 0.6498473261264284;
    msg.start_lon = 0.48913890758215983;
    msg.start_z = 0.38854542062176123;
    msg.start_z_units = 38U;
    msg.end_lat = 0.9104797447313403;
    msg.end_lon = 0.46073505943970205;
    msg.end_z = 0.9653391164793956;
    msg.end_z_units = 70U;
    msg.lradius = 0.005511195908017852;
    msg.flags = 58U;
    msg.x = 0.31274564038815467;
    msg.y = 0.5364579721826473;
    msg.z = 0.78510721560487;
    msg.vx = 0.09093273484318132;
    msg.vy = 0.3063445492386677;
    msg.vz = 0.5180808310198072;
    msg.course_error = 0.8566091498619398;
    msg.eta = 23270U;

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
    msg.setTimeStamp(0.4046688552355251);
    msg.setSource(5935U);
    msg.setSourceEntity(177U);
    msg.setDestination(46884U);
    msg.setDestinationEntity(251U);
    msg.path_ref = 2453113413U;
    msg.start_lat = 0.7109005400249289;
    msg.start_lon = 0.8833500730951904;
    msg.start_z = 0.0419685011267219;
    msg.start_z_units = 31U;
    msg.end_lat = 0.9090006770088179;
    msg.end_lon = 0.9254997642730988;
    msg.end_z = 0.1521817982719036;
    msg.end_z_units = 8U;
    msg.lradius = 0.4168246551099263;
    msg.flags = 83U;
    msg.x = 0.17699164727763006;
    msg.y = 0.20419080095623177;
    msg.z = 0.566218571523761;
    msg.vx = 0.09761438288520319;
    msg.vy = 0.32434332292252865;
    msg.vz = 0.3345388241124212;
    msg.course_error = 0.6478391439496202;
    msg.eta = 15416U;

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
    msg.setTimeStamp(0.12286657019446645);
    msg.setSource(32930U);
    msg.setSourceEntity(224U);
    msg.setDestination(39600U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 435764039U;
    msg.start_lat = 0.24262834301091118;
    msg.start_lon = 0.3953189969083527;
    msg.start_z = 0.2545468268027471;
    msg.start_z_units = 143U;
    msg.end_lat = 0.31217323080002823;
    msg.end_lon = 0.21151704677561478;
    msg.end_z = 0.04642171841690701;
    msg.end_z_units = 159U;
    msg.lradius = 0.13615141475417858;
    msg.flags = 176U;
    msg.x = 0.8114297247271837;
    msg.y = 0.940348687397024;
    msg.z = 0.4167758381159584;
    msg.vx = 0.2016676985719844;
    msg.vy = 0.1747034359435835;
    msg.vz = 0.4024225003557643;
    msg.course_error = 0.478700300122858;
    msg.eta = 12626U;

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
    msg.setTimeStamp(0.7055795180214653);
    msg.setSource(65431U);
    msg.setSourceEntity(33U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(48U);
    msg.k = 0.6105692697390604;
    msg.m = 0.9724596469251642;
    msg.n = 0.3514057199529895;

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
    msg.setTimeStamp(0.40093173420919737);
    msg.setSource(20624U);
    msg.setSourceEntity(154U);
    msg.setDestination(46366U);
    msg.setDestinationEntity(188U);
    msg.k = 0.60206704177364;
    msg.m = 0.6551978616083578;
    msg.n = 0.8772254846933938;

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
    msg.setTimeStamp(0.5057404393856909);
    msg.setSource(24183U);
    msg.setSourceEntity(159U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(168U);
    msg.k = 0.013337947102554648;
    msg.m = 0.47999411820633076;
    msg.n = 0.6780663629943827;

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
    msg.setTimeStamp(0.2572141368883004);
    msg.setSource(17188U);
    msg.setSourceEntity(138U);
    msg.setDestination(36438U);
    msg.setDestinationEntity(6U);
    msg.p = 0.005257198723350842;
    msg.i = 0.919461980362158;
    msg.d = 0.773417031093146;
    msg.a = 0.7675197958441918;

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
    msg.setTimeStamp(0.46543422349357066);
    msg.setSource(24139U);
    msg.setSourceEntity(72U);
    msg.setDestination(3921U);
    msg.setDestinationEntity(220U);
    msg.p = 0.2646802445926064;
    msg.i = 0.9732057935080318;
    msg.d = 0.9103176622110205;
    msg.a = 0.20941298155248156;

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
    msg.setTimeStamp(0.5736231713528621);
    msg.setSource(26231U);
    msg.setSourceEntity(10U);
    msg.setDestination(12976U);
    msg.setDestinationEntity(216U);
    msg.p = 0.47703119995136467;
    msg.i = 0.6603044796671778;
    msg.d = 0.5191658073975296;
    msg.a = 0.6884375424659315;

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
    msg.setTimeStamp(0.09509485409698715);
    msg.setSource(7459U);
    msg.setSourceEntity(211U);
    msg.setDestination(62995U);
    msg.setDestinationEntity(46U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.9430537634280904);
    msg.setSource(4894U);
    msg.setSourceEntity(161U);
    msg.setDestination(927U);
    msg.setDestinationEntity(238U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.9974717582877817);
    msg.setSource(12270U);
    msg.setSourceEntity(113U);
    msg.setDestination(41473U);
    msg.setDestinationEntity(138U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.4151080754558494);
    msg.setSource(33991U);
    msg.setSourceEntity(193U);
    msg.setDestination(63453U);
    msg.setDestinationEntity(89U);
    msg.timeout = 29446U;
    msg.lat = 0.4958379656244998;
    msg.lon = 0.9324028111616389;
    msg.z = 0.23243542385880134;
    msg.z_units = 183U;
    msg.speed = 0.35379538617750317;
    msg.speed_units = 198U;
    msg.roll = 0.5577419901496458;
    msg.pitch = 0.5717061763797048;
    msg.yaw = 0.22496861934842627;
    msg.custom.assign("JAVFLUHJSTCUGWXHRQLIBJIXXUBODOOGWMKJGCHXUNQIFYTZZLAEALDRJKILPRQCVJMDUDZTGZJJHBFDKHSWGWXFQGXOYPBRBSDKKNGNPTSIMYOBMQPXZXKFWMQNRZEBWRKWIEULNTPRCKMSWDCQPYCOXLGEPUPVVMEMVQJZOMEFZIFVDDWSWCGKECCPLHUNYYRAVYSZKSOAQETHMTLEVGFEVNLXAHRTINPJOAFHSYHCTBAUOSIABQYZF");

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
    msg.setTimeStamp(0.3692312589309674);
    msg.setSource(27667U);
    msg.setSourceEntity(149U);
    msg.setDestination(54445U);
    msg.setDestinationEntity(52U);
    msg.timeout = 50603U;
    msg.lat = 0.8495005979688667;
    msg.lon = 0.6820581169852932;
    msg.z = 0.015528952841478372;
    msg.z_units = 206U;
    msg.speed = 0.04298915972604367;
    msg.speed_units = 150U;
    msg.roll = 0.40730950095367313;
    msg.pitch = 0.3678165819538375;
    msg.yaw = 0.06978361749675;
    msg.custom.assign("QKNKJWOUBYZUAKUHZHOVDHVIRCLFKIQJFJGPPDCZWUZZGXDUINNCGMXMTCLCMFYSPQOGTGOXGOFRRBGMFLALSESUTIJJDETSBDKDXXJLBNAVFXAAUVWVIUQCNVKBGHQIJALAELFHSDFFKYZMMYJTCETLCBOOVGHWPTTDRUOXQQYEWPYHHK");

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
    msg.setTimeStamp(0.5337225383021826);
    msg.setSource(27630U);
    msg.setSourceEntity(141U);
    msg.setDestination(40814U);
    msg.setDestinationEntity(143U);
    msg.timeout = 20099U;
    msg.lat = 0.11402901225365292;
    msg.lon = 0.6141416126009962;
    msg.z = 0.8058427343844637;
    msg.z_units = 142U;
    msg.speed = 0.46903425953353906;
    msg.speed_units = 19U;
    msg.roll = 0.7322965475795594;
    msg.pitch = 0.9515407346097786;
    msg.yaw = 0.40634745444655274;
    msg.custom.assign("EBHNOTWQIYKNQRYKQDFLZGGBPTXYWSWJZAHCQRHBNZJKIFCMIRXVS");

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
    msg.setTimeStamp(0.8335514155071314);
    msg.setSource(58899U);
    msg.setSourceEntity(234U);
    msg.setDestination(27021U);
    msg.setDestinationEntity(215U);
    msg.timeout = 31127U;
    msg.lat = 0.9278758201565288;
    msg.lon = 0.43495576497965227;
    msg.z = 0.565545985375483;
    msg.z_units = 171U;
    msg.speed = 0.1728908146561543;
    msg.speed_units = 95U;
    msg.duration = 47375U;
    msg.radius = 0.21104493610505204;
    msg.flags = 80U;
    msg.custom.assign("SOPKZTHAOHDBWOYYSRWGLMAIKKWVPAIMDBOHPIUN");

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
    msg.setTimeStamp(0.5817582008686007);
    msg.setSource(10921U);
    msg.setSourceEntity(231U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(69U);
    msg.timeout = 35490U;
    msg.lat = 0.2560674243775555;
    msg.lon = 0.10507267761578132;
    msg.z = 0.5769283272482008;
    msg.z_units = 221U;
    msg.speed = 0.6282327502306637;
    msg.speed_units = 148U;
    msg.duration = 53634U;
    msg.radius = 0.8906653694103097;
    msg.flags = 195U;
    msg.custom.assign("DRPCMESZQHUFESNJLAXQMFVDYKXQGYJGRTUXPVWZOORPJOJDMBCAKXSKXGPRBSOCFSNIBVJGRADVCLIUALZUDXZHGVTAWHKSZTWPLBWFRESTGPGNKFWHMYBQZDAROVEFWNJATXOEGJZRTYPTESKCQHVHCMYAPKAWHMQLNIOUWUJYUKCPLHIFQ");

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
    msg.setTimeStamp(0.5697185130458737);
    msg.setSource(25281U);
    msg.setSourceEntity(147U);
    msg.setDestination(54727U);
    msg.setDestinationEntity(219U);
    msg.timeout = 40864U;
    msg.lat = 0.33132174260712943;
    msg.lon = 0.8954435883249945;
    msg.z = 0.3574904852003492;
    msg.z_units = 34U;
    msg.speed = 0.7300769230297608;
    msg.speed_units = 69U;
    msg.duration = 26371U;
    msg.radius = 0.2999743991580155;
    msg.flags = 212U;
    msg.custom.assign("PZUNUOHXQCEYBEMIEDRJHEDVAXQCZKDVTMXYPWGZHBATRGKMGCUIFNLBJLNRIOOBAQLICSXIYNQGWJSHUVVDPFOYTLQTZICQADK");

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
    msg.setTimeStamp(0.6075813672613459);
    msg.setSource(65246U);
    msg.setSourceEntity(16U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(25U);
    msg.custom.assign("GIYJDXRVJMUQZNSQZMRQATBYLTRWFRVHPFXHELUOOOBDDUNLVVJDNWTTOPZVUYDOBNPUGVIQQZRCCPHUWZXNKBDMEXHXJILZFJLUWSWFNQUFXNGRQXVPKYHDFMMGTLKPAACCKESRFCLBAKMWQVAAGTA");

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
    msg.setTimeStamp(0.6398306166931439);
    msg.setSource(49419U);
    msg.setSourceEntity(189U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("CGHFESONPFBLJINETYPYMTWVVPUZUVGKTNJRQIUIPQQIJSPMRKQZHDGEHLEXDBRMXFXSUKWZVOJKWOAMRDDMEYDFMYVJSJAZKYIHHTRTLNQOKYQMLNAFZWDBUAQVINCSBBJZVKFLLDCAOBUUX");

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
    msg.setTimeStamp(0.6972601100417538);
    msg.setSource(47638U);
    msg.setSourceEntity(122U);
    msg.setDestination(15357U);
    msg.setDestinationEntity(156U);
    msg.custom.assign("UQNEOAEMYZXDBSVWNCEOKXQDGWLPDMGKROGTUCCLMCASFHZVNSQHTFXMJBAGSRGPOWCBZAYZTSDBBBOTBVFTZIFPSFKAEUYSVNDHXOYGVGMVXQWQYYACRJLRVWXWUEPEHWVWMFIJGDPWJPJQEYIORGHRTXIPYJKJUQSJOKCLBIZNPBDXDLDORFVABUKIRNFRELHMUEACPLZHIYPJUWEKKFXL");

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
    msg.setTimeStamp(0.3183209439428878);
    msg.setSource(8782U);
    msg.setSourceEntity(130U);
    msg.setDestination(52593U);
    msg.setDestinationEntity(66U);
    msg.timeout = 25077U;
    msg.lat = 0.11773045778328595;
    msg.lon = 0.47069783267047804;
    msg.z = 0.414759660586702;
    msg.z_units = 184U;
    msg.duration = 64726U;
    msg.speed = 0.9195762779568981;
    msg.speed_units = 242U;
    msg.type = 52U;
    msg.radius = 0.839464043780661;
    msg.length = 0.5315252712420033;
    msg.bearing = 0.3542923523633392;
    msg.direction = 31U;
    msg.custom.assign("FGMKFWJWQIBNATWTXVOJUYBUQTFHOAQHCCMCSJINFVWLSZXZQEVZUTGYWCZISRMLOLOLJAJTG");

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
    msg.setTimeStamp(0.5138224341286468);
    msg.setSource(61845U);
    msg.setSourceEntity(30U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(184U);
    msg.timeout = 39578U;
    msg.lat = 0.3233428500335688;
    msg.lon = 0.7251959245845948;
    msg.z = 0.30838629324478295;
    msg.z_units = 153U;
    msg.duration = 51014U;
    msg.speed = 0.425815466314164;
    msg.speed_units = 129U;
    msg.type = 184U;
    msg.radius = 0.9558100765452412;
    msg.length = 0.6728087484322439;
    msg.bearing = 0.5097406551917855;
    msg.direction = 44U;
    msg.custom.assign("YUSWJVVMIVOBMIBAADWHCMUDQWTTATUAHKYNIJCIQAVAHWXIHHGNDXKJILINXXIJNIYSOYZXBLAEWZZWQMTGNTBKQBBRXWKOSMZEN");

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
    msg.setTimeStamp(0.20415377750859665);
    msg.setSource(41181U);
    msg.setSourceEntity(204U);
    msg.setDestination(2523U);
    msg.setDestinationEntity(244U);
    msg.timeout = 56211U;
    msg.lat = 0.03175633856836402;
    msg.lon = 0.39570218594920414;
    msg.z = 0.9952093772574538;
    msg.z_units = 112U;
    msg.duration = 23521U;
    msg.speed = 0.5015496056757993;
    msg.speed_units = 80U;
    msg.type = 3U;
    msg.radius = 0.17693955034760112;
    msg.length = 0.6938686645464442;
    msg.bearing = 0.5944179259369705;
    msg.direction = 5U;
    msg.custom.assign("MUPRVKISIVIFBXWWNJXORXTACKTVOYLBTDOIYVSUPNMHIO");

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
    msg.setTimeStamp(0.2853997462569815);
    msg.setSource(42460U);
    msg.setSourceEntity(226U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(126U);
    msg.duration = 3556U;
    msg.custom.assign("UZIGVMYEEQOXLQCJCESFYMWPZRASMNGCFHDWPJUJRTIXDWIZXTTQEOSGEQNROAKFUUQVSLCKRXRNZFBKDGPAUBPFBWYVASNXHJLLKVCEARAJQGRNZNFWEWXIKLWPCYIYQXVHJABJFBWHXMPIHLDFHHQPCKEYKBSOUBMTYFIMTDEONOZLTZZDNSXCFGLSDLAJKMUNDZQPOTSTPIUG");

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
    msg.setTimeStamp(0.5236484630110159);
    msg.setSource(1329U);
    msg.setSourceEntity(58U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(26U);
    msg.duration = 12570U;
    msg.custom.assign("PIAVVZBTUJLPSKDKBWOOGVMLAQQMHYHWA");

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
    msg.setTimeStamp(0.13216890537687032);
    msg.setSource(623U);
    msg.setSourceEntity(46U);
    msg.setDestination(53347U);
    msg.setDestinationEntity(250U);
    msg.duration = 36212U;
    msg.custom.assign("WNXIDJGYUHSUWIXCLDDSRRFMSYEZWHTYDBXBDXGOSGNPBECLMIPLGAFXBFEJJDBLVSZTVYDWGBDSXBMQZUAHHEUWSRLCYHOWAIXMTUFNIHNEMVQYHYKAPKUWANVQZMMKKUPLXQMZJCOGAYMKRVNCBQIIFDCWAPQPCEKFKKRPXGTZPIRTLZFYUSQFSHHCNIJUVTBUOQCREJROPGCFNTDEJSZJQGFOMROJ");

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
    msg.setTimeStamp(0.7844161964828025);
    msg.setSource(14865U);
    msg.setSourceEntity(220U);
    msg.setDestination(39531U);
    msg.setDestinationEntity(195U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.44855651311545996;
    tmp_msg_0.speed_units = 169U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28180U;
    msg.custom.assign("JBZMOIPGDOYEPRMZJTFDHZIPDMIITYAKRLTKBCVMTMQDVQNRBTFOCBOXMOFSZHEYITUXZOZVKMHEEHNIUIWYHGZACIRFWAHZQMNAGUUXDTFJFXTPGRPBXNWAZXWCVDJKLUNXVPQGJDCLPSSARGRUOJYJKSVCGWALWYEANCNYNLUCGLYXHNDMKOWVSWDLWKLRBMFQZFPERDRCHESSALQKHJEIKUACWEJQPTXGBQVBIQXVOKOSGNUJVP");

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
    msg.setTimeStamp(0.36702731780003794);
    msg.setSource(30828U);
    msg.setSourceEntity(69U);
    msg.setDestination(8943U);
    msg.setDestinationEntity(86U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9774920987300569;
    msg.control.set(tmp_msg_0);
    msg.duration = 35524U;
    msg.custom.assign("BAMFVTKUUBBLEHTVIFQWLSSKGRZVORLBEXNQMJBTACCJRKGAVHFZQDANMTCCMG");

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
    msg.setTimeStamp(0.04865521257517447);
    msg.setSource(41852U);
    msg.setSourceEntity(174U);
    msg.setDestination(58430U);
    msg.setDestinationEntity(84U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2464150908245808;
    msg.control.set(tmp_msg_0);
    msg.duration = 41188U;
    msg.custom.assign("GRDMXWEUPNCQVMZXLOTJKUDMIURACJDSQWMSOZFDBWEWEBULTOZSUADUTAYOOIYKNGRZTPXRTRIMJSXYCBZVNLAQITIYVUZEGKNSWEYKBWRHTQQXXPLPFNGCMSFHHCWDBLPSIHYPAAJGUXZV");

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
    msg.setTimeStamp(0.3132873679337319);
    msg.setSource(15635U);
    msg.setSourceEntity(206U);
    msg.setDestination(41556U);
    msg.setDestinationEntity(230U);
    msg.timeout = 49585U;
    msg.lat = 0.08334412715150508;
    msg.lon = 0.5436704900221057;
    msg.z = 0.00934411487999054;
    msg.z_units = 175U;
    msg.speed = 0.03951499297860683;
    msg.speed_units = 178U;
    msg.bearing = 0.7919194068110939;
    msg.cross_angle = 0.3323386783564969;
    msg.width = 0.2706482506706651;
    msg.length = 0.3984846520082883;
    msg.hstep = 0.3567848809392036;
    msg.coff = 95U;
    msg.alternation = 37U;
    msg.flags = 47U;
    msg.custom.assign("JWZXURGOLZDQRIUTFFIFCJYGAVUUTZQYPZBKENPBJDTYKYDRVJRQMMCVXJGDTSOLSKCUFSEAEQGLRTFFVWQOVXZLCKRGGQKTQPZYDVTQDSBINSU");

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
    msg.setTimeStamp(0.5091092398355631);
    msg.setSource(36028U);
    msg.setSourceEntity(124U);
    msg.setDestination(2148U);
    msg.setDestinationEntity(109U);
    msg.timeout = 6638U;
    msg.lat = 0.8213049744523164;
    msg.lon = 0.21143709410550626;
    msg.z = 0.5724912414952225;
    msg.z_units = 108U;
    msg.speed = 0.41078344753630014;
    msg.speed_units = 146U;
    msg.bearing = 0.4855138330136841;
    msg.cross_angle = 0.36550205078437636;
    msg.width = 0.26351222062780066;
    msg.length = 0.3349447536331469;
    msg.hstep = 0.3307963035627435;
    msg.coff = 51U;
    msg.alternation = 106U;
    msg.flags = 36U;
    msg.custom.assign("OQBEGBRRVACKCLQSRUFFQNLXLXIRXQGVMREFYABNZYSJIRZGPPLTWKJKKZTSIDKTVUETNOZVWLDXPFINRXLESSIBISYXFHAKAWVFHDJTYBVHPQFNVQOJSKBUBYBUCCISCGAUGCJAYMNJZPUCEODHXQFMSNZ");

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
    msg.setTimeStamp(0.26133444937733274);
    msg.setSource(33336U);
    msg.setSourceEntity(128U);
    msg.setDestination(37273U);
    msg.setDestinationEntity(134U);
    msg.timeout = 53532U;
    msg.lat = 0.3708785549884288;
    msg.lon = 0.8333703849455921;
    msg.z = 0.19706368302125699;
    msg.z_units = 210U;
    msg.speed = 0.907368172538026;
    msg.speed_units = 60U;
    msg.bearing = 0.027821861008409332;
    msg.cross_angle = 0.5404432031863777;
    msg.width = 0.2009698668567197;
    msg.length = 0.421878544050149;
    msg.hstep = 0.6121991936776476;
    msg.coff = 231U;
    msg.alternation = 109U;
    msg.flags = 135U;
    msg.custom.assign("OFVEAECESBCFOPWCMWATZPQJITVUDAGRYVWLFRTLCKIZNKQUOWNRYTHFIQKLEXHAGEKYKSPBQKMXVFHBXTXGDQMEYENJDJRMGHIZTIJKDJRTYKWZCYRSBIGQMDASNYWXJOWNRGWNSZPBQMPTXUCNONXFFHGVYOUFSLUBHAGHFIAWPYCJRXZUQHMAGVZLKPISAEPV");

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
    msg.setTimeStamp(0.4071916054797625);
    msg.setSource(1187U);
    msg.setSourceEntity(58U);
    msg.setDestination(28454U);
    msg.setDestinationEntity(37U);
    msg.timeout = 16897U;
    msg.lat = 0.45787220117227245;
    msg.lon = 0.7150635281654152;
    msg.z = 0.3121459322615976;
    msg.z_units = 22U;
    msg.speed = 0.970734220812371;
    msg.speed_units = 111U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.33120772638138973;
    tmp_msg_0.y = 0.38316639759890503;
    tmp_msg_0.z = 0.8450525688031381;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IHRTEENLVDFPJKPTLVGGOYZUMRMCYWUAKGZZCWRMASZQAEQNXVYDKFIJIOGLFSTVKXYJHNANTWWTUCCSWINYOFVLRUQBVKDAEVLZDHQWHRNJABVFRHHJPMFJZCSONPAO");

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
    msg.setTimeStamp(0.44327703186410006);
    msg.setSource(7203U);
    msg.setSourceEntity(10U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(123U);
    msg.timeout = 40439U;
    msg.lat = 0.5767148650993482;
    msg.lon = 0.7184127461506855;
    msg.z = 0.8280413557887885;
    msg.z_units = 166U;
    msg.speed = 0.3953359932631265;
    msg.speed_units = 147U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.514081575182645;
    tmp_msg_0.y = 0.9159391589004028;
    tmp_msg_0.z = 0.6271427544292827;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CIXGSSQJZDWTFGFMTARVJZJYPNSLEAPRHUDQPQBGNNFHLUJGLRIFRVSLIYLNHZ");

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
    msg.setTimeStamp(0.601293789931575);
    msg.setSource(23489U);
    msg.setSourceEntity(38U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(130U);
    msg.timeout = 48407U;
    msg.lat = 0.6476106081349;
    msg.lon = 0.21642469335884496;
    msg.z = 0.4663246722530153;
    msg.z_units = 104U;
    msg.speed = 0.6562693127882658;
    msg.speed_units = 150U;
    msg.custom.assign("IHHXWUOZAYONYWUJPGWLWBHXEPWHBNGGSLWKRDMQKXBZNJXZDJELAHDVTCGGYPLIFBELUUUVFQOKYMNVQOJGBKSFVMPMXAYPSBAKLDCSXIZXYMIBSDNTJYCMFVNRPQKRUVSNIWNLGFIUCTMZOKXQDBWILPOIJKJMCCOFXTETAZEZHZDEXGZRSPJPUODAOCAVUTLFESRKHTBSHCJYERQ");

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
    msg.setTimeStamp(0.396861278758723);
    msg.setSource(11266U);
    msg.setSourceEntity(137U);
    msg.setDestination(31U);
    msg.setDestinationEntity(147U);
    msg.x = 0.25836293312479763;
    msg.y = 0.1753934808400992;
    msg.z = 0.6292986848625769;

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
    msg.setTimeStamp(0.6745433781037785);
    msg.setSource(20851U);
    msg.setSourceEntity(172U);
    msg.setDestination(52725U);
    msg.setDestinationEntity(240U);
    msg.x = 0.5393057387807108;
    msg.y = 0.343418447471195;
    msg.z = 0.8568671578467015;

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
    msg.setTimeStamp(0.727592430608217);
    msg.setSource(10258U);
    msg.setSourceEntity(83U);
    msg.setDestination(6146U);
    msg.setDestinationEntity(150U);
    msg.x = 0.3895854391447662;
    msg.y = 0.6713682355612023;
    msg.z = 0.9162730272185085;

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
    msg.setTimeStamp(0.38256044312795023);
    msg.setSource(122U);
    msg.setSourceEntity(218U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(19U);
    msg.timeout = 37946U;
    msg.lat = 0.9551563823460312;
    msg.lon = 0.6795007758127821;
    msg.z = 0.8734983957767206;
    msg.z_units = 107U;
    msg.amplitude = 0.6896691968083931;
    msg.pitch = 0.3741717492150298;
    msg.speed = 0.40368836038527156;
    msg.speed_units = 108U;
    msg.custom.assign("EOFKDORKOYKMONUGPCXWFGQCMNABWRATBDRQQMUKPEQBGDLFADHJPVSODFZIXRYVIQSVSJAPPYOCGCZCNHSQSZXUYPEPFTJVEYFSHLJ");

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
    msg.setTimeStamp(0.18286075000536106);
    msg.setSource(15642U);
    msg.setSourceEntity(226U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(128U);
    msg.timeout = 54618U;
    msg.lat = 0.7501722611945512;
    msg.lon = 0.16706497226857098;
    msg.z = 0.7523747021362174;
    msg.z_units = 39U;
    msg.amplitude = 0.5649721016255134;
    msg.pitch = 0.6010695560832712;
    msg.speed = 0.29188298866955953;
    msg.speed_units = 129U;
    msg.custom.assign("GZGAHBARQZPBXIAVTIEBCFNKXCYXVQCGGFYANLPSVSXHJEEXNRQCWVAEISSNRJFRMCXKMRUKIILSJRTESKHOWTXYWLBHHPWDKVFJIVWLWVFEGYRSZMZLYFYHMTOVBPRGLLDPUCMCQCNJDSWWZOIZMNHGBMAEYTQAHODQUDYGZPIDOUIHJFYSOZDPRCXTVFPOBAQFVKSKXPNLTJYJMUOGNFBZWCIBDPHXEBUKWDUTAMUURQJUOKLEAT");

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
    msg.setTimeStamp(0.7472510358217979);
    msg.setSource(13811U);
    msg.setSourceEntity(241U);
    msg.setDestination(20992U);
    msg.setDestinationEntity(36U);
    msg.timeout = 19634U;
    msg.lat = 0.26686440101984843;
    msg.lon = 0.18724281444658808;
    msg.z = 0.41216270200012806;
    msg.z_units = 81U;
    msg.amplitude = 0.0456037838636999;
    msg.pitch = 0.8438662259265023;
    msg.speed = 0.5969013609687782;
    msg.speed_units = 100U;
    msg.custom.assign("ESMVWSNYQRCOLBDMLZUFIEJKKBZFVAMGFVYWTGESDXVZEFUBVSMPJMUHIXSQIVDNLAXZLYXZTMMQIMTLJVONBRBRSRLRDCKWUOWAYZJDWTBHBPAPJFEEPXOWKLWADHAUTTGIJOVGIGEYBCSCARCVGIFNQOQSOPXYPHLFGKKAMFTRGJPOQYDQCPWNXUZSJYYGESRXCBINHFTKAIGDTPUXZUJQZOKXHNYFNJKNQAKBRTCNUW");

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
    msg.setTimeStamp(0.8976085325593962);
    msg.setSource(1818U);
    msg.setSourceEntity(81U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.8880725563046166);
    msg.setSource(58550U);
    msg.setSourceEntity(232U);
    msg.setDestination(46039U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.49685609595392355);
    msg.setSource(16095U);
    msg.setSourceEntity(254U);
    msg.setDestination(48444U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.9099860805426159);
    msg.setSource(1901U);
    msg.setSourceEntity(133U);
    msg.setDestination(22505U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.14279136560438865;
    msg.lon = 0.76758033462969;
    msg.z = 0.30831267887372193;
    msg.z_units = 22U;
    msg.radius = 0.8667496078442984;
    msg.duration = 13652U;
    msg.speed = 0.010243826544473533;
    msg.speed_units = 126U;
    msg.custom.assign("MNMIGWTOJDSIQCBUIEHRXJGWLYRXABSRAWLSYCXQEIXVPSYGKLBNFTTMHKKZQBTJOOPPENQFANIKTJXXHOJFATVYFGRZYGFJPFMC");

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
    msg.setTimeStamp(0.005323022062178273);
    msg.setSource(20983U);
    msg.setSourceEntity(188U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.4094489223171427;
    msg.lon = 0.8237813865218737;
    msg.z = 0.5500653217845031;
    msg.z_units = 182U;
    msg.radius = 0.6334142842467912;
    msg.duration = 2727U;
    msg.speed = 0.8046584296020826;
    msg.speed_units = 28U;
    msg.custom.assign("HKANFUOOKXALMDAVNQVKMTOXWKFELPSIWANVWAGZTOHICFZLORRCDQCMUQYLZDPJIKJSSOTNLMCNGYIGXERESVAUBFJTJVUZQFHNOQJJEOIHDJHFYWHXEXKFRZBLCWTKCYWBQIGZUCHBNZHXSQIQNTMYENRSLXOGLGCGMVXSYZKUTUMZRMEDMBYYRUBSFVPCRGBJDGHVCBZWXWPADYDDPJEIPINPPOSPFARLTIYQBKUEMTXKWRVH");

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
    msg.setTimeStamp(0.9047632846910448);
    msg.setSource(22U);
    msg.setSourceEntity(114U);
    msg.setDestination(24616U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.6617445540270664;
    msg.lon = 0.6694162635251215;
    msg.z = 0.7127126399280492;
    msg.z_units = 27U;
    msg.radius = 0.14313578702387453;
    msg.duration = 38662U;
    msg.speed = 0.536811253317836;
    msg.speed_units = 98U;
    msg.custom.assign("XRWLVABMYZBMYWMFHDLNZSKKLATJRAXUKCDPXITOWNDXBQGVXRSZPDZNJCJVHUBNGOCMKPIQNFHSELNHYXELJKSKYTHBAHHGOVTDPOVADRFHVTECGZRQYPCEKNJDTMUGMJOXACIQVLCSUIFSCQJNRRIRAGFOGYPDFPLUBAFITQPWSPCWBDTKWBZSFJVHLIXZUJCMEQUUNXY");

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
    msg.setTimeStamp(0.4573495258898148);
    msg.setSource(16163U);
    msg.setSourceEntity(116U);
    msg.setDestination(51586U);
    msg.setDestinationEntity(37U);
    msg.timeout = 36865U;
    msg.flags = 242U;
    msg.lat = 0.31502887798419643;
    msg.lon = 0.11305547537643479;
    msg.start_z = 0.7931209922376111;
    msg.start_z_units = 62U;
    msg.end_z = 0.9390598607266913;
    msg.end_z_units = 230U;
    msg.radius = 0.6931498122887576;
    msg.speed = 0.6621324838564003;
    msg.speed_units = 230U;
    msg.custom.assign("VLTXAAVVJGVTVDEAYGNOKICXIFKSNPSNZOANKQHQTQXCQPFDQOTAPHRDCBBXLSFXJEPZSRXVMNKUCZXDMVQLTLWTLHKOFAZIIGIJRCDGYRJIHYEFJYDMYRMETPZJMKXCPHBVRHMPZGDFUYSBUBUOYMJIUBMRDSOJERNWUKSWAWIIFHYHCQQVTQHLUGIZWWWCZPOFYSMXLAKWOBGNTCGZKRBCRSUPHWT");

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
    msg.setTimeStamp(0.1958959239571615);
    msg.setSource(33106U);
    msg.setSourceEntity(161U);
    msg.setDestination(12692U);
    msg.setDestinationEntity(45U);
    msg.timeout = 65173U;
    msg.flags = 21U;
    msg.lat = 0.33832870784405833;
    msg.lon = 0.7445302714142126;
    msg.start_z = 0.5825506779893931;
    msg.start_z_units = 149U;
    msg.end_z = 0.38654769515333265;
    msg.end_z_units = 160U;
    msg.radius = 0.16638366852215802;
    msg.speed = 0.276249549219318;
    msg.speed_units = 146U;
    msg.custom.assign("XTOUACDDUYDMSZJTMGKPZQGYFFCYTCBHIBDOVR");

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
    msg.setTimeStamp(0.9761075321401929);
    msg.setSource(33127U);
    msg.setSourceEntity(32U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(6U);
    msg.timeout = 9027U;
    msg.flags = 48U;
    msg.lat = 0.43703298646534505;
    msg.lon = 0.9744755140640718;
    msg.start_z = 0.7696941127290687;
    msg.start_z_units = 237U;
    msg.end_z = 0.1227151489181334;
    msg.end_z_units = 212U;
    msg.radius = 0.4711354293038664;
    msg.speed = 0.29114433600720846;
    msg.speed_units = 227U;
    msg.custom.assign("KWLZPFOIGAJSJCAKNIWSFDGVSSJCR");

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
    msg.setTimeStamp(0.2211233078609931);
    msg.setSource(58173U);
    msg.setSourceEntity(239U);
    msg.setDestination(46952U);
    msg.setDestinationEntity(147U);
    msg.timeout = 50184U;
    msg.lat = 0.012296212608907897;
    msg.lon = 0.8092866445072936;
    msg.z = 0.7387727135508954;
    msg.z_units = 66U;
    msg.speed = 0.06148354563258962;
    msg.speed_units = 23U;
    msg.custom.assign("HXXKMFDDVFQEPCZKTNLVMFZYYEEEYPNDUGQIOKZLXSIGJNFYSLYEXEKAEPTFDHJOMJJEBWWOTVQJXAXXYLMSJSRTNOUHIDZJJAGRWKUXSVPNIMWBHHXQTZOCHPAKVZNGMPSJTUEBQPLXQAVZOZLFTGBYRIBCZVLGQNRABEPALCTCRL");

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
    msg.setTimeStamp(0.4756153417940553);
    msg.setSource(8909U);
    msg.setSourceEntity(81U);
    msg.setDestination(10109U);
    msg.setDestinationEntity(225U);
    msg.timeout = 43317U;
    msg.lat = 0.8112902771579024;
    msg.lon = 0.655428123108876;
    msg.z = 0.682966993821178;
    msg.z_units = 75U;
    msg.speed = 0.39199840311817835;
    msg.speed_units = 3U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9843023221471225;
    tmp_msg_0.y = 0.9899255871413905;
    tmp_msg_0.z = 0.7127387077939933;
    tmp_msg_0.t = 0.8849662022725825;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FLKCSFASGEGRTKNAFHFYOUEQSRRPEJVUIXBVPQGVYJDDPXNTJYLIGWKIQSELREQRUNLOMVZIXSAHCKNORMNYURJCHIROJWBXZWKKYTWUOJASSZDRIUAQMYCEDGDSGXEDJWPWPAKBBCBJWADJTXHCFCMBVFCDWHIBPOQHGZZOJVYWMHTNTEGUZXTSVCNVQMULXVECPY");

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
    msg.setTimeStamp(0.9081279703066416);
    msg.setSource(58398U);
    msg.setSourceEntity(212U);
    msg.setDestination(50238U);
    msg.setDestinationEntity(43U);
    msg.timeout = 35135U;
    msg.lat = 0.8293923818630216;
    msg.lon = 0.7192404040142517;
    msg.z = 0.39726226532750886;
    msg.z_units = 173U;
    msg.speed = 0.301855099268856;
    msg.speed_units = 175U;
    msg.custom.assign("PNAERHLASOHLWTMRPL");

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
    msg.setTimeStamp(0.4642617117109301);
    msg.setSource(28523U);
    msg.setSourceEntity(164U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(217U);
    msg.x = 0.3184152172074384;
    msg.y = 0.906119385161719;
    msg.z = 0.40580822505107284;
    msg.t = 0.8947245366578152;

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
    msg.setTimeStamp(0.5866868300844253);
    msg.setSource(47686U);
    msg.setSourceEntity(66U);
    msg.setDestination(37533U);
    msg.setDestinationEntity(146U);
    msg.x = 0.27456185689214363;
    msg.y = 0.8625931626496917;
    msg.z = 0.04889871072480945;
    msg.t = 0.5235556734177732;

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
    msg.setTimeStamp(0.01492704382867871);
    msg.setSource(39585U);
    msg.setSourceEntity(211U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(14U);
    msg.x = 0.8834022824154647;
    msg.y = 0.5356507821897459;
    msg.z = 0.8566970373673036;
    msg.t = 0.10215281137707366;

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
    msg.setTimeStamp(0.8378856947362735);
    msg.setSource(33770U);
    msg.setSourceEntity(41U);
    msg.setDestination(24338U);
    msg.setDestinationEntity(228U);
    msg.timeout = 8074U;
    msg.name.assign("IWCRMUROINDDACEPRJUOITBHFMZKHQQNCKELMXMCXLFMCEJWLWNPWPUAJSSMVESVYIYZQCBTGITROEFOZSTBPYBWJTCGTDDYPIZXKKKZRVCLOYQVDGLVYIMLJIVOMUGQQPFBKJVDAQPYSFNHOGDUUWHXURMXFZZBDRABNECTEYPUDNFAXSXOGGHLNJGISWGSAAQYAKULTQHWSTBFWDWFJVLNKEIHRRHPAZOHLZKXGQXXPNEYKOHTJJUBVBMSZE");
    msg.custom.assign("CACWTFBBEQAQUFNWAZDPRZUEIFLJMGGOJCJIVXFWQLYJWDSSL");

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
    msg.setTimeStamp(0.34375096094310753);
    msg.setSource(2244U);
    msg.setSourceEntity(254U);
    msg.setDestination(55748U);
    msg.setDestinationEntity(214U);
    msg.timeout = 20130U;
    msg.name.assign("OAKHCXFFBYLQLCCGWJXYVHEBWKDBHUXNUNOTWABPEHHKWDWZQWJZMYJRTIRNUUZPFQS");
    msg.custom.assign("OWBCIRUTXCCQQTQLYISBOXCUTNTSYYWCKDQOMLLZEIHSKBECPMSKBDSZFSLJOHUAUROCNNTQWKNNWBUWDGGZXOIPLIFYDKKDGZVZFFMUYFCAJMHBRPVCZOQVHVJXWYFEMXNXIVMGIDDERIAEMSHYRWLAZMXFPQGDQHNWFXYVUBREDVGFGZAWPHARTJZSOPUEJTHBCGLTIYULXBJPESQNYHTAFPNQLXPZKKDWRVNVIEGM");

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
    msg.setTimeStamp(0.9233038638462201);
    msg.setSource(14109U);
    msg.setSourceEntity(83U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(3U);
    msg.timeout = 46395U;
    msg.name.assign("KAGWNLVBWKQZEPBXULJXQJO");
    msg.custom.assign("ITADYHCHVAUPDRUQOSBTRPFPNGKBMRIMNUHZTJKVSWPTJAFYWEWWNJXYSJMVUGMZSNVIOCXDLFJTZLVGRTLVSOWNLUMFASWLZMWJWEKEYS");

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
    msg.setTimeStamp(0.7665109220514646);
    msg.setSource(15958U);
    msg.setSourceEntity(160U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.05036480711387925;
    msg.lon = 0.31631801456194775;
    msg.z = 0.30106908358555984;
    msg.z_units = 70U;
    msg.speed = 0.7282285758999686;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07623653449818135;
    tmp_msg_0.y = 0.6475447390124501;
    tmp_msg_0.z = 0.7724093183581341;
    tmp_msg_0.t = 0.5806961410633033;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5260659004481121;
    msg.custom.assign("WKFOGOPXNRDBZKNYERZAOVCNWPCDABHQRAMAANTEBATNPATJDUKYHLLOFJQZKWLBQKIFMRSMUSWXXHFAYEQOYOCVBFNUKUJRHSRGZJNJZCFXYHYTXVUIDEJGNBCLHNTHMWWQTMFCVUHVIUCIDRSTBMAJVNPDXBQIRVELCHEFTZLQVWLGEXMKUFOYWEWJDPPVFPVASYEPSQYIJQSRPIMS");

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
    msg.setTimeStamp(0.45897303503397535);
    msg.setSource(46436U);
    msg.setSourceEntity(69U);
    msg.setDestination(12542U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6845092924057186;
    msg.lon = 0.5344750471767261;
    msg.z = 0.6244004628843844;
    msg.z_units = 209U;
    msg.speed = 0.8445250295714938;
    msg.speed_units = 132U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7104667330592517;
    tmp_msg_0.y = 0.4957754089317421;
    tmp_msg_0.z = 0.5815346730246452;
    tmp_msg_0.t = 0.9976373156240798;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.26665823771366703;
    msg.custom.assign("BLIVLFQFFXXTLKEKMWAZHEUGDBDWGOQAZIGVWQPXLNSKDZJMOHUBAPZUHMHENX");

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
    msg.setTimeStamp(0.28901169143492245);
    msg.setSource(42012U);
    msg.setSourceEntity(21U);
    msg.setDestination(37476U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.6892219277348803;
    msg.lon = 0.5058534237589477;
    msg.z = 0.7733911842315307;
    msg.z_units = 189U;
    msg.speed = 0.7551145188177077;
    msg.speed_units = 232U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5672241299541325;
    tmp_msg_0.y = 0.5511599416923144;
    tmp_msg_0.z = 0.393120077102744;
    tmp_msg_0.t = 0.6579858690033366;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5354235982027087;
    msg.custom.assign("RCRDJVLSMIUARZMPOTUQBERBXIYXNWWLWUVIGSMCSIIGTTAAWIBSYFFHJQHAHCRHTOXEYQQWCVUZWQGNXDYMMUODOFYXPIPLTULYGFGOZKWFLUHZGZOAAQJYCFAHAUCJRMBSRNQBHEKZOBZYKJTQSXKEFVRUXBTBKNTCGCWZIWJAJEBDTMJEJVPQVISFYOSLYPHDMLGDDHZRSNFPBELGEPORNQVTMKNUDDN");

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
    msg.setTimeStamp(0.7548512605712745);
    msg.setSource(2054U);
    msg.setSourceEntity(30U);
    msg.setDestination(51047U);
    msg.setDestinationEntity(22U);
    msg.vid = 55445U;
    msg.off_x = 0.6795339260837067;
    msg.off_y = 0.4309586851964061;
    msg.off_z = 0.5591214339070312;

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
    msg.setTimeStamp(0.48443294118605107);
    msg.setSource(54940U);
    msg.setSourceEntity(33U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(149U);
    msg.vid = 43677U;
    msg.off_x = 0.11639614547492927;
    msg.off_y = 0.8986502389411929;
    msg.off_z = 0.5030926891487502;

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
    msg.setTimeStamp(0.24382866853369267);
    msg.setSource(1860U);
    msg.setSourceEntity(180U);
    msg.setDestination(52535U);
    msg.setDestinationEntity(1U);
    msg.vid = 36828U;
    msg.off_x = 0.8722811248046368;
    msg.off_y = 0.24889156605933171;
    msg.off_z = 0.3987643444943614;

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
    msg.setTimeStamp(0.6296197880419969);
    msg.setSource(61507U);
    msg.setSourceEntity(24U);
    msg.setDestination(26698U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.611161862182187);
    msg.setSource(48250U);
    msg.setSourceEntity(186U);
    msg.setDestination(26929U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.2250940434475146);
    msg.setSource(33790U);
    msg.setSourceEntity(207U);
    msg.setDestination(26621U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.33730907260184684);
    msg.setSource(50007U);
    msg.setSourceEntity(65U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(125U);
    msg.mid = 13049U;

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
    msg.setTimeStamp(0.022932653587410923);
    msg.setSource(40461U);
    msg.setSourceEntity(123U);
    msg.setDestination(38520U);
    msg.setDestinationEntity(71U);
    msg.mid = 49254U;

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
    msg.setTimeStamp(0.7219055611665576);
    msg.setSource(38629U);
    msg.setSourceEntity(14U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(50U);
    msg.mid = 52081U;

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
    msg.setTimeStamp(0.8849300184645078);
    msg.setSource(54406U);
    msg.setSourceEntity(248U);
    msg.setDestination(385U);
    msg.setDestinationEntity(146U);
    msg.state = 221U;
    msg.eta = 6170U;
    msg.info.assign("MTZGGGRCNUURRMDUPOZWJCXNGOUFPAENYXTYLOBKMDEVALHEYOCEPLBCADJJYDENQJJKYSPTVVBMGSNKEGNJXAIRWWAPEBPVCZMSBWHLPTQUKSCOYOOSDZDFITRCFUHVJMZLIQEBSVCNYOXIHISNDTEASNJAUKQBMIFIZBOHDVJZ");

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
    msg.setTimeStamp(0.8901924756523661);
    msg.setSource(610U);
    msg.setSourceEntity(76U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(214U);
    msg.state = 131U;
    msg.eta = 4097U;
    msg.info.assign("ZUHJMWYFNWSHWOCEKSELPBDAXIGGJLRYXISBFNTNXYTFDYYDFKXOVOSDMVQGPKZLCGOWVLHXYPVQQZHJJYQAFVTDDWRALIUMKHXDFGIVHLONMEXOGCFDBRTRRNMQBNWRZNPLWGCUSSULJQUMQS");

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
    msg.setTimeStamp(0.5716298614607033);
    msg.setSource(37573U);
    msg.setSourceEntity(123U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(18U);
    msg.state = 191U;
    msg.eta = 45554U;
    msg.info.assign("ZBLAZFALIUGXEIDKQPMIGKAXDDFQRPUCVZTUNFZCWTHHOSMOGPSGLYXBHJTZBEWQTQIHKGOBXAIVFONQBJAXPPJBMDWVHVPJCFAQHLCSBDFNREQXOYGELIFNRZHZNVTKYELNZCYKBYCEMKOPRRKOUL");

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
    msg.setTimeStamp(0.09332459809638916);
    msg.setSource(12333U);
    msg.setSourceEntity(143U);
    msg.setDestination(60368U);
    msg.setDestinationEntity(232U);
    msg.system = 20684U;
    msg.duration = 27762U;
    msg.speed = 0.533694983439967;
    msg.speed_units = 134U;
    msg.x = 0.22946897798168353;
    msg.y = 0.12746395512551467;
    msg.z = 0.19010085646985742;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.9425976999272128);
    msg.setSource(59467U);
    msg.setSourceEntity(119U);
    msg.setDestination(62115U);
    msg.setDestinationEntity(13U);
    msg.system = 45826U;
    msg.duration = 54558U;
    msg.speed = 0.7947094181680898;
    msg.speed_units = 58U;
    msg.x = 0.6691991737230566;
    msg.y = 0.7225436714880862;
    msg.z = 0.24048613567195953;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.38171966243250033);
    msg.setSource(50297U);
    msg.setSourceEntity(3U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(166U);
    msg.system = 3507U;
    msg.duration = 58544U;
    msg.speed = 0.09955417774151709;
    msg.speed_units = 79U;
    msg.x = 0.7164426951834609;
    msg.y = 0.5486502724893827;
    msg.z = 0.5289211624889978;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.9949916580295586);
    msg.setSource(35024U);
    msg.setSourceEntity(180U);
    msg.setDestination(26889U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.06718406224336393;
    msg.lon = 0.39713445788284896;
    msg.speed = 0.7757614321974776;
    msg.speed_units = 176U;
    msg.duration = 20556U;
    msg.sys_a = 61177U;
    msg.sys_b = 11889U;
    msg.move_threshold = 0.042809683022139944;

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
    msg.setTimeStamp(0.32166700492530464);
    msg.setSource(15498U);
    msg.setSourceEntity(205U);
    msg.setDestination(64145U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.30968902500635;
    msg.lon = 0.07740133335323085;
    msg.speed = 0.17229655022813994;
    msg.speed_units = 211U;
    msg.duration = 8589U;
    msg.sys_a = 50250U;
    msg.sys_b = 52200U;
    msg.move_threshold = 0.890686377809662;

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
    msg.setTimeStamp(0.6653821319272482);
    msg.setSource(13622U);
    msg.setSourceEntity(249U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8272359212619244;
    msg.lon = 0.532156555693123;
    msg.speed = 0.29296352068631526;
    msg.speed_units = 87U;
    msg.duration = 59054U;
    msg.sys_a = 3089U;
    msg.sys_b = 34130U;
    msg.move_threshold = 0.9868817251422154;

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
    msg.setTimeStamp(0.5766268636189299);
    msg.setSource(35892U);
    msg.setSourceEntity(140U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.17896058146769023;
    msg.lon = 0.6651368207028215;
    msg.z = 0.38023136217714426;
    msg.z_units = 124U;
    msg.speed = 0.748953447071487;
    msg.speed_units = 205U;
    msg.custom.assign("WNDDPZAMKRGQRSXTOZSQDMHXQIW");

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
    msg.setTimeStamp(0.5373450867153986);
    msg.setSource(7852U);
    msg.setSourceEntity(93U);
    msg.setDestination(21549U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.2597882735445174;
    msg.lon = 0.2980667802727811;
    msg.z = 0.8992285434604762;
    msg.z_units = 114U;
    msg.speed = 0.627073040564657;
    msg.speed_units = 18U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0857285650899684;
    tmp_msg_0.lon = 0.48125041047225414;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IKCXLZUUELLTXKTLFBFKBNEFDGMQLEJAAVSKWYRHCDAFMPRSPWFUKKGJSNLONPZRACVIFAGUIRUAQEVEYVZXCNID");

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
    msg.setTimeStamp(0.5423316364930332);
    msg.setSource(47036U);
    msg.setSourceEntity(231U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.19361508084683754;
    msg.lon = 0.9133420404309905;
    msg.z = 0.055839543489140664;
    msg.z_units = 62U;
    msg.speed = 0.1067568409088685;
    msg.speed_units = 127U;
    msg.custom.assign("NLMYVSTCKGJZWVVETUTMRHXHGNTDPRDWGABRQDBGJYOWIRUHRZQEBHYBYPEGMQLIRAVSHLNGYRDPEMWLUGLOUSYWUPTBJAALQSBCJSPOUOPZBZAMTOJXA");

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
    msg.setTimeStamp(0.0723153754047986);
    msg.setSource(27424U);
    msg.setSourceEntity(116U);
    msg.setDestination(4631U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.2982649463957042;
    msg.lon = 0.9204894694626284;

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
    msg.setTimeStamp(0.07020024063660779);
    msg.setSource(62385U);
    msg.setSourceEntity(184U);
    msg.setDestination(15867U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.03795971574836399;
    msg.lon = 0.6689934559767847;

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
    msg.setTimeStamp(0.7734356326151465);
    msg.setSource(13837U);
    msg.setSourceEntity(213U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.0832173580239689;
    msg.lon = 0.8504489870489342;

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
    msg.setTimeStamp(0.35891316365991766);
    msg.setSource(52164U);
    msg.setSourceEntity(93U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(92U);
    msg.timeout = 42047U;
    msg.lat = 0.622856933241823;
    msg.lon = 0.5644203751254019;
    msg.z = 0.7381488415188304;
    msg.z_units = 250U;
    msg.pitch = 0.35848315565652933;
    msg.amplitude = 0.6910679419086438;
    msg.duration = 29786U;
    msg.speed = 0.6600508953194762;
    msg.speed_units = 237U;
    msg.radius = 0.6288749717733142;
    msg.direction = 143U;
    msg.custom.assign("QETDZBCJBPWHGUBRZJQU");

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
    msg.setTimeStamp(0.6102398394724884);
    msg.setSource(53770U);
    msg.setSourceEntity(254U);
    msg.setDestination(5906U);
    msg.setDestinationEntity(30U);
    msg.timeout = 53664U;
    msg.lat = 0.576832978371263;
    msg.lon = 0.04415615661635808;
    msg.z = 0.9640594601063543;
    msg.z_units = 31U;
    msg.pitch = 0.014791919424321343;
    msg.amplitude = 0.3546774895388587;
    msg.duration = 62758U;
    msg.speed = 0.9123475045574831;
    msg.speed_units = 156U;
    msg.radius = 0.0166147196425519;
    msg.direction = 43U;
    msg.custom.assign("IYDXPTXJVKZOPAQJSE");

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
    msg.setTimeStamp(0.026680849434104648);
    msg.setSource(56723U);
    msg.setSourceEntity(237U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(159U);
    msg.timeout = 420U;
    msg.lat = 0.06384377102641581;
    msg.lon = 0.5521052700162757;
    msg.z = 0.45651150108634675;
    msg.z_units = 248U;
    msg.pitch = 0.8519665128341826;
    msg.amplitude = 0.39988340208382667;
    msg.duration = 58446U;
    msg.speed = 0.13444753027831535;
    msg.speed_units = 246U;
    msg.radius = 0.07568585355785262;
    msg.direction = 254U;
    msg.custom.assign("PAFRBYPXBIZLIPHSAJFSTLESHXBJXFTTKISITCPOBIYLBCDDUFHVMWZGOSEFHQYHJVGYHDQVWKFOBALUVMVMDOE");

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
    msg.setTimeStamp(0.09004008315847467);
    msg.setSource(37787U);
    msg.setSourceEntity(121U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(45U);
    msg.formation_name.assign("NKLEFTLPWQTUBSTNVKNMUEPIFGBOYQGXLHISGUBLRKECLUAJTTDDNPNZUZRMORYVJSBQEVWOZBDRCYRCJRDNXHYVCKSFMFZXPQHH");
    msg.reference_frame = 142U;
    msg.custom.assign("CPKYVSQQXFMKFKVHUKIRLRLVPXIQGHUBNNBXJPDBBCVCOETBBOHLUIKLMYJPJPHFMYSDZYFNCLDVWDNOQWJHSDJRSXKFTEOHMPNXVCPJALUMSMJOICRZYNFITHWATCPZBXYAOPTOGRFLDEKWGTGRSOZGDIWYSDVSMIREFWJJGNOFQUVJLWQAYITWMGBEZMLBRHGNXCWFRQBAIKGADATQEUQUANOAERDHLZEUUPZTVKS");

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
    msg.setTimeStamp(0.3755756734235941);
    msg.setSource(42502U);
    msg.setSourceEntity(190U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(226U);
    msg.formation_name.assign("KIYFJWLTGAIHRSZPLDZKJOBIBWTKFYWFOFOXWVMQVDGMEFLPMZSIKMTPDARNKKVOGNZCSIRFMWTVUORQEEXYXCVGKSQGJSZIZKHEMIJBRZNTEGJANMGYIESSLNLVRCPJQJYUDUFJYYKHXJQZSQJWWOOAANQDANRERGLLCXXCTUDDDAEIHUAOFCXTMUPHSPDVLGCCRMHAYTH");
    msg.reference_frame = 240U;
    msg.custom.assign("ZPUYHTMSVAFHTTUNFWSKYDXIJINFZPHFWXCQRCERWLKPPJSOPOULRXJCQOAZMCBLQXDRYEZYEGCIADCMFJTICKNHQTHXQLWCNNMGHHFZROGKAIOMSSZTMUOXQTXBKDSJQDYMGXVBKKLTRUYEGRKFFPKDVGWRVLOLNALVCEXNJUDEZUCJABBZEHVODBUKXUGDSEIAPLQFAJAOHBHVUQR");

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
    msg.setTimeStamp(0.09722320480670132);
    msg.setSource(62253U);
    msg.setSourceEntity(60U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("GDYUOHZEQCMCURLSKOSIRMQJRPOBCNNPAJDTTKHGLEP");
    msg.reference_frame = 148U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49334U;
    tmp_msg_0.off_x = 0.8702403284491117;
    tmp_msg_0.off_y = 0.471544582162448;
    tmp_msg_0.off_z = 0.6181357791861147;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PFKNDAJJWLGW");

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
    msg.setTimeStamp(0.8476907083204113);
    msg.setSource(19216U);
    msg.setSourceEntity(74U);
    msg.setDestination(44917U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("UVITYSXIBX");
    msg.formation_name.assign("HIJDDREABEDVRSGRYLXBWVNGJFZKPHJUEGTOKNICUHPERUZAYCGWKLSAZWOTEHTCJPCNQISYBDIYRTAKVBTEFCVSPYDHIJB");
    msg.plan_id.assign("FIEHUYAAVLTTAOYAPJYRGAABMRWQHNKYJKHWDQIVDFTEITLSFYWNLPJTJUQVQQCDSORLDSEMEVSDZFMALONKPKLBCYBVAR");
    msg.description.assign("ITYZDUMMZUZJAZDNCKX");
    msg.leader_speed = 0.3407275850748739;
    msg.leader_bank_lim = 0.5452414964624116;
    msg.pos_sim_err_lim = 0.7798810802134145;
    msg.pos_sim_err_wrn = 0.15015109894221634;
    msg.pos_sim_err_timeout = 23643U;
    msg.converg_max = 0.7160137070485112;
    msg.converg_timeout = 43549U;
    msg.comms_timeout = 30671U;
    msg.turb_lim = 0.09756580726829056;
    msg.custom.assign("QWQCJPGPFXDDQVGABMYFBWZPIJTDSLFPNEORNUZQLZZJZMIERZJWKAKEKLVMRYJSTQZYAZLQAZHHGDHNLSCPPVKDNOFPSPANRKXMFLXEVLISDYIGY");

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
    msg.setTimeStamp(0.5185660684289136);
    msg.setSource(46229U);
    msg.setSourceEntity(92U);
    msg.setDestination(857U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("HHIPJYLJOMVTDMJBZEAXOGCEWFKRBXSNXAWWNCMFOCTFGHQVJUSBWGEVAQRCVPTIXHGOEYFYAIKKWKDYHPPRSBZXXLIFDVTHEGTNJWWJUKRDZHJQXLDZIKFMQPQZXAEYVNQSHYGUU");
    msg.formation_name.assign("MQYJPYSOUFKYIUVBDNEVXJHEWERVOZGQAGJSWDNOPETRDRUTCNGJAETOPEATSXOUOZWAOMRCPQAQRNMXYZSTKAMYCURNCMRKJFGCLNUFHGDLAJPTIVLJGGJFLLHMZYTKAXNVIJOIZISTDOKHDKXBPMGZCBERAEMVQKPSFKHWHQFWBWOXSSKLAZXPXCGIUHINSLPZHF");
    msg.plan_id.assign("MMHIGCCBJLFKQPWWZLYPRWTORKHBUUZKOEGGLKSEWQATJJPSOPIORFSFBRJUAHVPTHYZAFQBFQNNYDPFJTMNVRVIITRUGYJJDVEBOVBUDLCDHITTNYLGNMWWAKIDQVIZJIZDHGHHSQFUUMCEIYPCVAQLSHCVSCBMGXVNXZQOZQSYRYFTCEKKMAOPUZMXPDYDWPGMHQXBLNLULXJSNXNNCEOTRABTODLXZWZSRGAU");
    msg.description.assign("BHMYTKLRUDJNNIXTFDPEIKXZTTGGVUTDAULGNOTILXKAEEQIRJUYMXYHXNWZPCGMFHGJHKVZVSRVUMAMHFOWEQFZPOLHCVJBAPMVIGQHSFCINEARPXOCWLLBUYQUAAWSAMUXCRJHYWYDYWBVTRF");
    msg.leader_speed = 0.17818043502505299;
    msg.leader_bank_lim = 0.05686433830164006;
    msg.pos_sim_err_lim = 0.7987264900803974;
    msg.pos_sim_err_wrn = 0.8102389126136219;
    msg.pos_sim_err_timeout = 18054U;
    msg.converg_max = 0.4696310100371651;
    msg.converg_timeout = 20654U;
    msg.comms_timeout = 60841U;
    msg.turb_lim = 0.8086887458375774;
    msg.custom.assign("EKJERDLAZZDOTABKSERTVECOJQOILYNTXBLQZIDZJAELHIADUWPRMGKGBCOGULMPYNUZNHGHJSCWMZTIVUKXFIYVCBIMFPGEFVAPSXJJOYXVNNWTXSWDKYAFARTZOVQPKGZUBWOBVHJXRVSLGFQPWUNHBCCMS");

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
    msg.setTimeStamp(0.6040893011313376);
    msg.setSource(26146U);
    msg.setSourceEntity(120U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("JKBCPVUFZUNJTMPODSBPKNZLRHUQJJDIJLNCTQEYSRNQQHIHBIECAGSLFFYOOFOGTWWRSVUQBATORULEZJOKKQWPGTWRFAODVRTBYFGMFXVMAVJXRPUMI");
    msg.formation_name.assign("SUCDHQVYKIFSJLYBGQLTRQUDOFPCZZETIRQENJEDVDQFXJRQUHUASNYWIXYWHIFNTLSWJNPOJHGVYSMKVWLAQBLKQRPRVBJZRTTBPFPTKMICKRIYVFQFUZPMPAWGKSM");
    msg.plan_id.assign("CTUEMTXEKKIICYYNHVJOCBUKPDEWPWCHVBDQUWWMNVJVOCBPIBJAWFZMMBGTUPRAYYFZUDQQCBEYAPFJLGQKLRRAFMNSJINLGDKAUXRVDMDPXMOLZJRGWJSSLPUKQENAJSAIYTGLWQOOKLHZQLCESQ");
    msg.description.assign("ZDZAOJNPVTPNRHGOGCEXBNXTKMZIJWOKHPUBWPYQLUQPAJSSTUZJGAGITCSOPTZUIQYZLTTHHEUAQFTRRRSLXEKISMQRCJHYWV");
    msg.leader_speed = 0.5543401196737132;
    msg.leader_bank_lim = 0.07012054890103059;
    msg.pos_sim_err_lim = 0.6593403255276157;
    msg.pos_sim_err_wrn = 0.2396207236669483;
    msg.pos_sim_err_timeout = 44609U;
    msg.converg_max = 0.20400407572470636;
    msg.converg_timeout = 47914U;
    msg.comms_timeout = 14593U;
    msg.turb_lim = 0.9309995915737185;
    msg.custom.assign("WPNSYXQJBLXMNAFAQUDGGHXZIPTSIKBYDUCTQLQTCSZOJPYNSLYFVPETHSITUQCVKOEPYUJGQYDRBLOSKWEWTMPMVXARGFDPSJFCCADMLKELMYDXHTUNDEHMQFRVJAWGFCMGKCWROAUNABRFZLBURGVVGONQKLEZSUODWJLWJHEEBXNOKHFQXTXMVPXCYPBEZHZNZRARBGVCKFZW");

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
    msg.setTimeStamp(0.9655958065615033);
    msg.setSource(417U);
    msg.setSourceEntity(181U);
    msg.setDestination(22319U);
    msg.setDestinationEntity(153U);
    msg.control_src = 26357U;
    msg.control_ent = 104U;
    msg.timeout = 0.34343593656793625;
    msg.loiter_radius = 0.49184292843860866;
    msg.altitude_interval = 0.9669940433018693;

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
    msg.setTimeStamp(0.8022546143065832);
    msg.setSource(14150U);
    msg.setSourceEntity(178U);
    msg.setDestination(42388U);
    msg.setDestinationEntity(158U);
    msg.control_src = 9920U;
    msg.control_ent = 42U;
    msg.timeout = 0.36066683481032813;
    msg.loiter_radius = 0.6640052120741581;
    msg.altitude_interval = 0.2134477419284242;

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
    msg.setTimeStamp(0.9852091244745625);
    msg.setSource(57754U);
    msg.setSourceEntity(28U);
    msg.setDestination(50252U);
    msg.setDestinationEntity(254U);
    msg.control_src = 12558U;
    msg.control_ent = 160U;
    msg.timeout = 0.9565635309296594;
    msg.loiter_radius = 0.6130729389406415;
    msg.altitude_interval = 0.6930737534534381;

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
    msg.setTimeStamp(0.4068722922643857);
    msg.setSource(60471U);
    msg.setSourceEntity(15U);
    msg.setDestination(39616U);
    msg.setDestinationEntity(109U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4840785258834226;
    tmp_msg_0.speed_units = 82U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9150198046273283;
    tmp_msg_1.z_units = 196U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3471164670718624;
    msg.lon = 0.6019945091731453;
    msg.radius = 0.11522016275025537;

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
    msg.setTimeStamp(0.7889268598892482);
    msg.setSource(29422U);
    msg.setSourceEntity(102U);
    msg.setDestination(21834U);
    msg.setDestinationEntity(166U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9660655152010794;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.957558452295333;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.14413505585890507;
    msg.lon = 0.30523006180694845;
    msg.radius = 0.6059613655575774;

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
    msg.setTimeStamp(0.5323464308017409);
    msg.setSource(27541U);
    msg.setSourceEntity(239U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(5U);
    msg.flags = 96U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8555361823552048;
    tmp_msg_0.speed_units = 187U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3605595274440916;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7252094383322428;
    msg.lon = 0.17504876383926238;
    msg.radius = 0.0675687511301849;

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
    msg.setTimeStamp(0.23247617658662012);
    msg.setSource(47271U);
    msg.setSourceEntity(3U);
    msg.setDestination(43443U);
    msg.setDestinationEntity(113U);
    msg.control_src = 25783U;
    msg.control_ent = 53U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 8U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7842489170060998;
    tmp_tmp_msg_0_0.speed_units = 121U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.45563697755154486;
    tmp_tmp_msg_0_1.z_units = 65U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6657279242030827;
    tmp_msg_0.lon = 0.8738925637391153;
    tmp_msg_0.radius = 0.6038837357912122;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 18U;

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
    msg.setTimeStamp(0.8619002677722495);
    msg.setSource(64981U);
    msg.setSourceEntity(137U);
    msg.setDestination(45572U);
    msg.setDestinationEntity(156U);
    msg.control_src = 52884U;
    msg.control_ent = 182U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 55U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.34510062290339605;
    tmp_tmp_msg_0_0.speed_units = 90U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5499461582461801;
    tmp_tmp_msg_0_1.z_units = 33U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8963050485406467;
    tmp_msg_0.lon = 0.9680501368120632;
    tmp_msg_0.radius = 0.4936229314916414;
    msg.reference.set(tmp_msg_0);
    msg.state = 121U;
    msg.proximity = 108U;

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
    msg.setTimeStamp(0.22194121340497674);
    msg.setSource(60608U);
    msg.setSourceEntity(90U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(180U);
    msg.control_src = 36993U;
    msg.control_ent = 64U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 83U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.625557072403154;
    tmp_tmp_msg_0_0.speed_units = 131U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.06486058338379175;
    tmp_tmp_msg_0_1.z_units = 99U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5286335571753167;
    tmp_msg_0.lon = 0.5921438369093467;
    tmp_msg_0.radius = 0.9938052135866241;
    msg.reference.set(tmp_msg_0);
    msg.state = 190U;
    msg.proximity = 148U;

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
    msg.setTimeStamp(0.7834045352756115);
    msg.setSource(61775U);
    msg.setSourceEntity(161U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(180U);
    msg.ax_cmd = 0.33429024610148483;
    msg.ay_cmd = 0.5675650948490246;
    msg.az_cmd = 0.6045730956027097;
    msg.ax_des = 0.7000228298412907;
    msg.ay_des = 0.5473300708503601;
    msg.az_des = 0.8812385162204347;
    msg.virt_err_x = 0.6441428078249878;
    msg.virt_err_y = 0.05613864912855415;
    msg.virt_err_z = 0.15827691615988204;
    msg.surf_fdbk_x = 0.4121083592108812;
    msg.surf_fdbk_y = 0.8245390996615316;
    msg.surf_fdbk_z = 0.42940245183328485;
    msg.surf_unkn_x = 0.9815995186567515;
    msg.surf_unkn_y = 0.29020565114313746;
    msg.surf_unkn_z = 0.3232370671179243;
    msg.ss_x = 0.7367663890505436;
    msg.ss_y = 0.15947513019949788;
    msg.ss_z = 0.8524922005613021;

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
    msg.setTimeStamp(0.5387012198112916);
    msg.setSource(42710U);
    msg.setSourceEntity(160U);
    msg.setDestination(45781U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.4176113555453693;
    msg.ay_cmd = 0.17012620600018458;
    msg.az_cmd = 0.42948544574661485;
    msg.ax_des = 0.4616678554354944;
    msg.ay_des = 0.737811237139086;
    msg.az_des = 0.07173482221645067;
    msg.virt_err_x = 0.7062228896563558;
    msg.virt_err_y = 0.6476358197997301;
    msg.virt_err_z = 0.313208636658289;
    msg.surf_fdbk_x = 0.7547490989407273;
    msg.surf_fdbk_y = 0.7916571328434421;
    msg.surf_fdbk_z = 0.19606623786141197;
    msg.surf_unkn_x = 0.6799931121863423;
    msg.surf_unkn_y = 0.9915542552618158;
    msg.surf_unkn_z = 0.338043997364863;
    msg.ss_x = 0.3892612529416225;
    msg.ss_y = 0.3808445275985767;
    msg.ss_z = 0.31477697193666043;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OSUWPGVGYKZVGMOYTESEAGCAEONESICPSEWGSLMPNNETZHRFUWZVQVIPPTRJACUTQWULMAZDIZBJWRHALYNWMLDHJPSCFEAHOCYIRCNIRDYTBMINBKBXYMYER");
    tmp_msg_0.dist = 0.21144672963953792;
    tmp_msg_0.err = 0.12665092387142873;
    tmp_msg_0.ctrl_imp = 0.5893858370779526;
    tmp_msg_0.rel_dir_x = 0.5287895320870515;
    tmp_msg_0.rel_dir_y = 0.9165539232292077;
    tmp_msg_0.rel_dir_z = 0.26882899298828067;
    tmp_msg_0.err_x = 0.03622115901401102;
    tmp_msg_0.err_y = 0.23399171689541287;
    tmp_msg_0.err_z = 0.9411464722583429;
    tmp_msg_0.rf_err_x = 0.5950893966396712;
    tmp_msg_0.rf_err_y = 0.25532807374674893;
    tmp_msg_0.rf_err_z = 0.26143389969517106;
    tmp_msg_0.rf_err_vx = 0.23379528112687875;
    tmp_msg_0.rf_err_vy = 0.034443379700350385;
    tmp_msg_0.rf_err_vz = 0.7325721249888875;
    tmp_msg_0.ss_x = 0.37701257423607837;
    tmp_msg_0.ss_y = 0.6943255929516398;
    tmp_msg_0.ss_z = 0.6413740019320452;
    tmp_msg_0.virt_err_x = 0.4878111613879157;
    tmp_msg_0.virt_err_y = 0.3101715786759821;
    tmp_msg_0.virt_err_z = 0.2886140620545665;
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
    msg.setTimeStamp(0.5112068455279543);
    msg.setSource(60640U);
    msg.setSourceEntity(110U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(88U);
    msg.ax_cmd = 0.9105136996204097;
    msg.ay_cmd = 0.03026774140672084;
    msg.az_cmd = 0.07274187286701439;
    msg.ax_des = 0.6659694997384434;
    msg.ay_des = 0.1639676498803695;
    msg.az_des = 0.12965045827572919;
    msg.virt_err_x = 0.3573600647683537;
    msg.virt_err_y = 0.16963923296071826;
    msg.virt_err_z = 0.8011475446001763;
    msg.surf_fdbk_x = 0.5497170320179305;
    msg.surf_fdbk_y = 0.6705250405851808;
    msg.surf_fdbk_z = 0.12386683925019704;
    msg.surf_unkn_x = 0.6599169333327057;
    msg.surf_unkn_y = 0.638479197748402;
    msg.surf_unkn_z = 0.2996382832789043;
    msg.ss_x = 0.2488701867653148;
    msg.ss_y = 0.4832845028988737;
    msg.ss_z = 0.39107340805915125;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FAAWIAWWBBCIHNLXUYERMYBHQGKPXDSGKMTWEKJYYXKRPYAOVOOCCXMXQRJKMTDFXCPVGIDHSVFUSUYLJLUWFGAHMZQWXOAISIMRCMCEWBJVGPLQTJLUQNBZTKKNKFFRQTMSCQJSSNSSUUNDWLDENEZZCJPDLITREROANTVETREAGCVHSTPFAZLPRLUHDLVYVJVHNORYDIMGPHWUFXIOIOGHNXMQVZOQWCKBBPYFAPNBIEQXKJUGZD");
    tmp_msg_0.dist = 0.06776798841292231;
    tmp_msg_0.err = 0.7254534622926032;
    tmp_msg_0.ctrl_imp = 0.5722667416009729;
    tmp_msg_0.rel_dir_x = 0.7910914110160631;
    tmp_msg_0.rel_dir_y = 0.6842190868734416;
    tmp_msg_0.rel_dir_z = 0.10984547977251835;
    tmp_msg_0.err_x = 0.47931123792408104;
    tmp_msg_0.err_y = 0.6125063233292753;
    tmp_msg_0.err_z = 0.6538743606891031;
    tmp_msg_0.rf_err_x = 0.5460175203513683;
    tmp_msg_0.rf_err_y = 0.6579043832860648;
    tmp_msg_0.rf_err_z = 0.21700827253923516;
    tmp_msg_0.rf_err_vx = 0.7489719775272121;
    tmp_msg_0.rf_err_vy = 0.7437146894528921;
    tmp_msg_0.rf_err_vz = 0.7529568997787917;
    tmp_msg_0.ss_x = 0.39450466799605466;
    tmp_msg_0.ss_y = 0.7375676917826747;
    tmp_msg_0.ss_z = 0.8888968163715951;
    tmp_msg_0.virt_err_x = 0.8790135671512718;
    tmp_msg_0.virt_err_y = 0.8869574548257324;
    tmp_msg_0.virt_err_z = 0.5156709145797896;
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
    msg.setTimeStamp(0.8072200840827891);
    msg.setSource(62066U);
    msg.setSourceEntity(215U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(110U);
    msg.s_id.assign("CBIYFARNXLMAOIBHNSKDTSTSR");
    msg.dist = 0.2687816390489258;
    msg.err = 0.5914311334068936;
    msg.ctrl_imp = 0.6976859831067093;
    msg.rel_dir_x = 0.6592439778054465;
    msg.rel_dir_y = 0.19286870411989965;
    msg.rel_dir_z = 0.670865981056485;
    msg.err_x = 0.2325975260997344;
    msg.err_y = 0.45125775548138536;
    msg.err_z = 0.43042147033126044;
    msg.rf_err_x = 0.03473406175991767;
    msg.rf_err_y = 0.6043374398008498;
    msg.rf_err_z = 0.9811921803524736;
    msg.rf_err_vx = 0.959381254336733;
    msg.rf_err_vy = 0.7847212821114128;
    msg.rf_err_vz = 0.5888436073872572;
    msg.ss_x = 0.8214819920594869;
    msg.ss_y = 0.1875018474867437;
    msg.ss_z = 0.20596755492681595;
    msg.virt_err_x = 0.5159423364935635;
    msg.virt_err_y = 0.3180808529298841;
    msg.virt_err_z = 0.22466833723374435;

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
    msg.setTimeStamp(0.9450624479296879);
    msg.setSource(24863U);
    msg.setSourceEntity(15U);
    msg.setDestination(51780U);
    msg.setDestinationEntity(159U);
    msg.s_id.assign("GINQFFYCJUSVMXRYYEARMALDECEHTUUKJSYVFBKXZGBLYVIEVBVLSPMVSTLCPUUAHZFKOQRWOUZCIHAQFHYZCIFPCBGMXFKHIFJXKKOPYSQASDDOSJWGDKTBTHRDFDGNVOSQRDOUOOQSKLFBBJVNNQIPZHMNXXYM");
    msg.dist = 0.10845876422293232;
    msg.err = 0.15488588380527624;
    msg.ctrl_imp = 0.1929136051683309;
    msg.rel_dir_x = 0.03347222280038975;
    msg.rel_dir_y = 0.17797400632343618;
    msg.rel_dir_z = 0.6486192135903969;
    msg.err_x = 0.8662202311765753;
    msg.err_y = 0.2604244801520378;
    msg.err_z = 0.09919471905408384;
    msg.rf_err_x = 0.9874012258690956;
    msg.rf_err_y = 0.9818246414259094;
    msg.rf_err_z = 0.9863804495574249;
    msg.rf_err_vx = 0.11151063648593162;
    msg.rf_err_vy = 0.32685637658279076;
    msg.rf_err_vz = 0.08484971008897146;
    msg.ss_x = 0.7326467373765039;
    msg.ss_y = 0.12464849996761673;
    msg.ss_z = 0.01544023137486461;
    msg.virt_err_x = 0.7819449812274798;
    msg.virt_err_y = 0.3752442958617338;
    msg.virt_err_z = 0.5015597306126177;

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
    msg.setTimeStamp(0.7878958127251775);
    msg.setSource(11668U);
    msg.setSourceEntity(253U);
    msg.setDestination(30334U);
    msg.setDestinationEntity(216U);
    msg.s_id.assign("ZVQSLOXGKOBLFFTZLXEAURBMUDCFQWHDNAWBSFVNBIAEQTDKDYSHRENVODRXURTKPJIHAOWIRNSMSKPVRYWOHYQANFZTZMHFBCUPCVGGDWVUAPACKYTBVCDIJKGXSJEWPXYKYAYIHPIJHMOJROYGMCOTIZUKREJHYFPLMQGUVECWDPUQBQNSCWNZXQMHASCKLHFEJIXJREBLNFZWPELLUDUGNDOQFGYTGJGPQWZCB");
    msg.dist = 0.5146121008904084;
    msg.err = 0.08699623871761764;
    msg.ctrl_imp = 0.06167516773028481;
    msg.rel_dir_x = 0.9435518070554209;
    msg.rel_dir_y = 0.3850977037155766;
    msg.rel_dir_z = 0.9696658973260679;
    msg.err_x = 0.74418976290449;
    msg.err_y = 0.5669123530674147;
    msg.err_z = 0.7222944636585183;
    msg.rf_err_x = 0.40237164407327186;
    msg.rf_err_y = 0.4996284513593259;
    msg.rf_err_z = 0.08184346262045206;
    msg.rf_err_vx = 0.7379711313506847;
    msg.rf_err_vy = 0.25269584402556944;
    msg.rf_err_vz = 0.9082002689297505;
    msg.ss_x = 0.1374983512956608;
    msg.ss_y = 0.32421188781790367;
    msg.ss_z = 0.25327552787111685;
    msg.virt_err_x = 0.855320490241717;
    msg.virt_err_y = 0.43195920975082946;
    msg.virt_err_z = 0.26726616242233703;

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
    msg.setTimeStamp(0.5021511155275596);
    msg.setSource(52703U);
    msg.setSourceEntity(86U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(33U);
    msg.timeout = 51557U;
    msg.rpm = 0.7010761702491992;
    msg.direction = 122U;
    msg.custom.assign("NGBEVSOZOPZGCSXKVHPDKBNTOATYXXYXFKAXMUEZGCYYNIFHYUFGUZMIRWBBXSLSUBCUYMNVGEHNBFBCHFHIXZEYRDKDL");

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
    msg.setTimeStamp(0.16362727763598195);
    msg.setSource(57797U);
    msg.setSourceEntity(215U);
    msg.setDestination(53374U);
    msg.setDestinationEntity(64U);
    msg.timeout = 48354U;
    msg.rpm = 0.24703890591181632;
    msg.direction = 81U;
    msg.custom.assign("TCKGHMLXUCQTJJNCJDUFPWEUYONWPSVWFAWQFASTTTBHWFLYRZOXKQSDZZDAQJXJGVMQSEXSSFFZXGVVRIMMZQHBMXRPNERKLGJGUWN");

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
    msg.setTimeStamp(0.6350246673405392);
    msg.setSource(38937U);
    msg.setSourceEntity(47U);
    msg.setDestination(17642U);
    msg.setDestinationEntity(81U);
    msg.timeout = 19970U;
    msg.rpm = 0.7766994689606045;
    msg.direction = 167U;
    msg.custom.assign("MBULJEUXOVAEUKQLLYUYSNJBGPWRVIVMHFCIMLLPBRGYZURFTVPJUFFACFRZNOODVIPMBPTRDOQGSLFXAQRCZZDYACKMWWXEEIQDRKYMISJQIGNEUDHTVKYCHLMZOMWKKHNZNGVLPUFMJNQEOTBGAOAYVLBSRCWTWWYFJCOPATDSXFJDX");

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
    msg.setTimeStamp(0.214683228161201);
    msg.setSource(33516U);
    msg.setSourceEntity(217U);
    msg.setDestination(4947U);
    msg.setDestinationEntity(108U);
    msg.op_mode = 229U;
    msg.error_count = 142U;
    msg.error_ents.assign("YDMKJWMZYHRIJSLDQHOQDTDFAQUBDHAHAQZGTGVNAVHMCEGZTOQIUHMFQNVSEGCAEICEUSSDJXHOCIPDLRWEINBPTNSRMMOXNPQPXRMIZNHKRGRLRYXTIWFYWLUAVBLNFYZFYXYWXPUXWUUSCVPDOTKQTECUKFJNEKEFLP");
    msg.maneuver_type = 31367U;
    msg.maneuver_stime = 0.5170064033265027;
    msg.maneuver_eta = 33493U;
    msg.control_loops = 2591071602U;
    msg.flags = 17U;
    msg.last_error.assign("HAAPOGQEXBVBVIQJUOIGNIWRAFZYXXVKYPZEFNPESNJSHBHMFDHDSFSINJVPTNOLFRWYCDZDJBEGWDLXWHQTRAFBWIYS");
    msg.last_error_time = 0.4223510360187067;

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
    msg.setTimeStamp(0.5397332003039247);
    msg.setSource(65155U);
    msg.setSourceEntity(42U);
    msg.setDestination(6797U);
    msg.setDestinationEntity(190U);
    msg.op_mode = 59U;
    msg.error_count = 174U;
    msg.error_ents.assign("RIQGATKBHXTEMXYRIYZJNMRBRTUAFLRPADVZPEPCNIDZYTWHFALVGJEIPNLLKPUZTTFZTBOGZHVWEJVXYVAOSRGTSOAKJJOKENXJWGEILGROMZEYODLDHRGPRHAWXAWWUHPKSIIBGMXWNIUCKLKIQSXNDVFBUSBOQJBOYKCYJQNQUBMFQHODPDSBVACJDECTMLKZTCSPHPD");
    msg.maneuver_type = 10807U;
    msg.maneuver_stime = 0.6466905406714267;
    msg.maneuver_eta = 64382U;
    msg.control_loops = 452019983U;
    msg.flags = 252U;
    msg.last_error.assign("WJZCCEBCGVPIVEUWMAVNIGAXJLLKCYLDAZLMDFCSOO");
    msg.last_error_time = 0.29663217832990985;

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
    msg.setTimeStamp(0.384989710630006);
    msg.setSource(21579U);
    msg.setSourceEntity(110U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(132U);
    msg.op_mode = 142U;
    msg.error_count = 189U;
    msg.error_ents.assign("UTCBFSWZKAWBYPQFZRWYWFYZIRXZBXDELKSRUU");
    msg.maneuver_type = 53375U;
    msg.maneuver_stime = 0.9765270009376616;
    msg.maneuver_eta = 26754U;
    msg.control_loops = 1479279945U;
    msg.flags = 66U;
    msg.last_error.assign("RVDRWBLDZHIQNCZTKXVLZLWWLWIDRHRFHVEXYQPODLUJMTMYPNKEXQGAGBWPIRUGUPSLNCGJCOLIYRQPYSRZUSEAOWGPAIHYBABOJDSSONWMOOSFAWEZEVXMIFVVKEBKUTZHGXQPOKQNISCFEUYQJJMDMUAXKNTJLBIXUMPLKDTXYPKRNHTUBZKMVEDHZUQJNHTSFCZJCXHCCVWESFTTADAI");
    msg.last_error_time = 0.9552511918863134;

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
    msg.setTimeStamp(0.9032724774042155);
    msg.setSource(32868U);
    msg.setSourceEntity(171U);
    msg.setDestination(29797U);
    msg.setDestinationEntity(119U);
    msg.type = 69U;
    msg.request_id = 60704U;
    msg.command = 187U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 19664U;
    tmp_msg_0.name.assign("DNKTYYDRXZVLCKTUGARDRAKYPKIGDHRVOFQQEYIMKPIGUCIOKVTDCLFABQJDQIMWAKZGURBDPNWFSFZJRQTCEOXGQORGXUQDWHXOJWYPBOMUVALJ");
    tmp_msg_0.custom.assign("MEFLLAQTXDRRRKRLQUMJVXLGXFHCUGEJBEKFSTVQXWHOTACNCYAZSIEGOYMULWNFQPTVVMDQIAUPDHPPYADLZGMZURJOHLCKYSTCQUTEJBJDNGZAHUTDWSUMSLMXWZWUFVKPKO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16837U;
    msg.info.assign("HUDDPYKZGLUDPVJSDEBXACAEJXBWTMQGFSZBNQZSUTWSKIRPUNXWMZHKXSATUPLORTMULAEHHWACFWQEROJWJDRGEINJLMOIWDXPCFMGNIQGYNIAIEYGYZHIVVECXPDCWUSBVBBMIVOYSGPGLRFSFHJELVBKYHYAROGTRWKLLVJUATYCSRFXOTFBKXMAJNXXFO");

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
    msg.setTimeStamp(0.8953972920197698);
    msg.setSource(36533U);
    msg.setSourceEntity(54U);
    msg.setDestination(23523U);
    msg.setDestinationEntity(21U);
    msg.type = 36U;
    msg.request_id = 15398U;
    msg.command = 144U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 6342U;
    tmp_msg_0.name.assign("JVNPTXMONJVSVVHFYCPQIUHTYQJRWQUPRSFADZDFUODBZ");
    tmp_msg_0.custom.assign("UTCLSMRJHUIDDDQCVJMZNIIETRIYQKDFQLIMHBYQAQCBEVROONHKYRVOMYXLKQGXGSNFPQSXRZEQFMBKPDPSPSTNKVTWEEZLGNQEYCNHXXFZIXOEOKZSISPUKIYRBOARNCXYOZTLLXNZPAWGDJBMNAGPIFEGLAFNVUVUO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60554U;
    msg.info.assign("LZMRBVYAXETYKNMEPWTQFPYEBGDSODMSQBTKLHZHDHFBDYTSKLRHNEVQARLADIYMENUTUZNMOGXGGFQDEZNCWPZZPILXJUOPCJKFHMOLVJSVXSRLKNRSKEFAJKXQDJIQCBZGTNMBGGJWFIEOHRTJCBWPAWIBPUKOE");

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
    msg.setTimeStamp(0.8530965654183968);
    msg.setSource(56414U);
    msg.setSourceEntity(60U);
    msg.setDestination(43049U);
    msg.setDestinationEntity(84U);
    msg.type = 185U;
    msg.request_id = 21068U;
    msg.command = 179U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 4721U;
    tmp_msg_0.custom.assign("KFOFSUMLTIXDKRUQCDUHWHWXTRYPHERCXDOWKQAPPZUNGBSDLBBBNRRUOWUBJFNIVFALUZJVIQVQOKLDWQFSVJLKTXJYAJOAHWMIBETFWNLNMIKQYTEMDTYCGPIHKDVMOPVYHXNYSZBISABPEFCMKXZZRBSRYQOHFADUEMGXVVGJNIIATCGOCECWPDLMS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21346U;
    msg.info.assign("TKNSREJXGUZXEBWLAGCYIAJZPJHTKAHF");

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
    msg.setTimeStamp(0.7717403632131968);
    msg.setSource(23517U);
    msg.setSourceEntity(5U);
    msg.setDestination(43296U);
    msg.setDestinationEntity(148U);
    msg.command = 176U;
    msg.entities.assign("NSOECXDSMHULPZCJWEEMJZSVPOOPGWHKKYS");

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
    msg.setTimeStamp(0.16872219739836114);
    msg.setSource(55554U);
    msg.setSourceEntity(73U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(173U);
    msg.command = 140U;
    msg.entities.assign("OVUIRXLHCXTVIAFKQPYBFNWVWBYXOQIWTDECIBJENXCXMRVTZIQHFYFFGLRDGMNPOUDWYWUTSYYGBHREHCSOXQMCUHADTU");

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
    msg.setTimeStamp(0.6952237149184028);
    msg.setSource(21210U);
    msg.setSourceEntity(151U);
    msg.setDestination(56169U);
    msg.setDestinationEntity(62U);
    msg.command = 91U;
    msg.entities.assign("AWHNRGRDVXPNWFZGUGLEWHJYMKIPSDQAIGMMICVEZUSXLJEBPZVSDAYTSCZBHTFKHOFOEEIZLPRBDCJXEJOQPUPUTSDBZRHYAVJFFIHWLJPSMOKQITCYMDQSQNVRKRAVJSDDKBXRNKFPQYOGXJHIBCICJGARTGXYSAMBOENT");

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
    msg.setTimeStamp(0.5112129262197221);
    msg.setSource(48455U);
    msg.setSourceEntity(214U);
    msg.setDestination(10367U);
    msg.setDestinationEntity(229U);
    msg.mcount = 126U;
    msg.mnames.assign("AEXJSOPSAXUYIBPDCNKSUHFTWPITSGVAOHUFFSCRFMLMTKRMHESC");
    msg.ecount = 162U;
    msg.enames.assign("RSGFMTMWNNIUCQESVFYOKFAKIZGNRDKJSGXUUWHTGBOQPKPFYXXUJJAWRDLWCFJHRLHHUQGHIODSTHRPWJZBFXPVRTQNDNZTVEDWFPOIUEGSDKILMHEMWONCVCNVQMVRKCYBMQWKFPIACVXYHDBGSEUJQJLRSCORIINYYILBLAPSPZO");
    msg.ccount = 180U;
    msg.cnames.assign("GSYQGHTLCOEIUFMCMFISWEQOLYJRXGVTSKEDUPMSNDJNXKPGYFECYGQCLMDIUJNTIHASVJBKRWTXBGAEZGANPUNHZGAAYSUCHJVRDVITOJBPQXDRCCBHFNVHLHKFIZONUDKETRJFTFVOSWHMHPPERHTDULOIYWEJQBAAKXZLZCSMNYAIEPZXXVQJQKOWUOZDPAXPILZOVPWANKLREM");
    msg.last_error.assign("IKHHESMPRRDDASYVJFEUYUBYVQLMFGLEMULGZJQHIMTDGEXQPIKOWAOCCDEXPATMMFBLSUTGOMKORPLIHTUNSRBZIMNXJSXCKTYUQBYDRXDPVEZYWNJCOHHZYVKJCJKXEHSCDWGBLHIUQP");
    msg.last_error_time = 0.5137422403863763;

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
    msg.setTimeStamp(0.8751073187790305);
    msg.setSource(45284U);
    msg.setSourceEntity(203U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(54U);
    msg.mcount = 207U;
    msg.mnames.assign("BPXXRWKLPERDUPMEOEGDGBQYHULKFXSBIORKYONWVUMUUTSZNZXLJTUJAWHCCLYCIDNLNNPHVBMKSTKSQGVWJ");
    msg.ecount = 49U;
    msg.enames.assign("LMHLYGDPHNDGMMQBSAZUGGVNKHSQYJUMZUONPMUXIQXZWXPKIYXEWILPFFVROUJ");
    msg.ccount = 233U;
    msg.cnames.assign("VEVIHSJZQKDZNGIUSOJRIKO");
    msg.last_error.assign("ZISXSTGCQBXQBYEDPTMFGIQEKZLEOVUOXCJAKMYZIBMPDXVCWCCNLXJIFKQCMTBUHZOLVYVBPDRLHWKANTERNNASGVVSXKMWPSFRUBKPSRWVRWOMQWFLXPOREHKYW");
    msg.last_error_time = 0.7290318990599651;

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
    msg.setTimeStamp(0.2921978872153903);
    msg.setSource(39040U);
    msg.setSourceEntity(75U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(95U);
    msg.mcount = 162U;
    msg.mnames.assign("RIRYVEUSKVDOXFPXOBVBGIFIONCGVTJEVIEQAJYAAELHSNZMUCWPTEPOLQNYPMGYJDLPKYPAAQSFNMESXDOZRHPAUGYJYWLQMULYVRDTTLMCKGNQKMWGTSWWZSHGFTZECDBPQBNSLIANJMUZGIJDHMZOTKHFAZBERDMSKHUXQJXXLRLFDBCESIYTIQFZJHWXWSXRKPBKVKAJIJXVCMANBWCUCTKRVHZBEDROIFFNUQTVOXQLNWDOGH");
    msg.ecount = 0U;
    msg.enames.assign("HTKCKSZPWDNSFFLWTKLVBCZAFYMOWTUXPNTKWWOKHGODVVBTIJGMSZIQCHTRFFBYJDAGBCBSKRMEOUQQPGJMLBNXHRAJQYUULDZDVVYXMGROEXCIHMJARFBFMCXZITZAJVTECLBMEPFIHKAXMJRWWERNQKGPJNYGDLVKAZWTSVZFVIQAOGIOSLEFDJYUDNYQPQQRWOUHNTUOYVNSKXEDWRLYEIPBL");
    msg.ccount = 108U;
    msg.cnames.assign("QWAPFILFTZTLIDEZUKQXTUZHUYIKLAQDBWJEJDVEKBLLATYBMMFASKYXOYKGITGZCE");
    msg.last_error.assign("CUDCZKRLJAIUZIRGKBSVEAJMMOPFMZKFJPTGRIPRKIAHLPVEDMLSXTUIFZXTDHZLNBBOQQPCNWQNBTMNADFJFHDULCVVZTBEYXUFGXGQJSPSYVLCJVHDWGBTEORHDAOKYLYVRIOCUZKOGS");
    msg.last_error_time = 0.010983045876570174;

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
    msg.setTimeStamp(0.6104302687064358);
    msg.setSource(41087U);
    msg.setSourceEntity(5U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(196U);
    msg.mask = 125U;
    msg.max_depth = 0.48362862918307714;
    msg.min_altitude = 0.2986221049969272;
    msg.max_altitude = 0.15887821059908047;
    msg.min_speed = 0.07432636817716642;
    msg.max_speed = 0.26602984289466136;
    msg.max_vrate = 0.5637513539113727;
    msg.lat = 0.14051832647722562;
    msg.lon = 0.6268783040625315;
    msg.orientation = 0.673170179445346;
    msg.width = 0.7902694472665552;
    msg.length = 0.5078131285085203;

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
    msg.setTimeStamp(0.4146435002565789);
    msg.setSource(9508U);
    msg.setSourceEntity(119U);
    msg.setDestination(18505U);
    msg.setDestinationEntity(207U);
    msg.mask = 25U;
    msg.max_depth = 0.85642873650921;
    msg.min_altitude = 0.8756834697993615;
    msg.max_altitude = 0.6022224985435509;
    msg.min_speed = 0.5869667991323874;
    msg.max_speed = 0.3595712743019547;
    msg.max_vrate = 0.6491140909440196;
    msg.lat = 0.5967020823618856;
    msg.lon = 0.4665515748850869;
    msg.orientation = 0.08365460822455817;
    msg.width = 0.5973410437804143;
    msg.length = 0.6103143627636497;

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
    msg.setTimeStamp(0.9163780952989998);
    msg.setSource(41592U);
    msg.setSourceEntity(193U);
    msg.setDestination(34781U);
    msg.setDestinationEntity(74U);
    msg.mask = 194U;
    msg.max_depth = 0.2696412900253281;
    msg.min_altitude = 0.6458107974117233;
    msg.max_altitude = 0.46233927084523285;
    msg.min_speed = 0.6872541707648105;
    msg.max_speed = 0.7867336208735488;
    msg.max_vrate = 0.7262544105367663;
    msg.lat = 0.1115388237759446;
    msg.lon = 0.15799301974967506;
    msg.orientation = 0.8691123295394926;
    msg.width = 0.3731341396511344;
    msg.length = 0.35861355859224964;

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
    msg.setTimeStamp(0.7472953074410361);
    msg.setSource(14619U);
    msg.setSourceEntity(191U);
    msg.setDestination(50595U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.965946821811944);
    msg.setSource(62882U);
    msg.setSourceEntity(247U);
    msg.setDestination(25739U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.3166295775475455);
    msg.setSource(22670U);
    msg.setSourceEntity(90U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.8405900628141446);
    msg.setSource(13005U);
    msg.setSourceEntity(111U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(168U);
    msg.duration = 37634U;

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
    msg.setTimeStamp(0.4762539416485563);
    msg.setSource(7756U);
    msg.setSourceEntity(185U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(130U);
    msg.duration = 48680U;

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
    msg.setTimeStamp(0.1693163975006029);
    msg.setSource(195U);
    msg.setSourceEntity(32U);
    msg.setDestination(20246U);
    msg.setDestinationEntity(133U);
    msg.duration = 32885U;

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
    msg.setTimeStamp(0.227464521192555);
    msg.setSource(10567U);
    msg.setSourceEntity(229U);
    msg.setDestination(31946U);
    msg.setDestinationEntity(53U);
    msg.enable = 149U;
    msg.mask = 1562347135U;
    msg.scope_ref = 1731203053U;

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
    msg.setTimeStamp(0.29853894792945657);
    msg.setSource(47871U);
    msg.setSourceEntity(185U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(253U);
    msg.enable = 124U;
    msg.mask = 820356731U;
    msg.scope_ref = 1750592574U;

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
    msg.setTimeStamp(0.1125128202550234);
    msg.setSource(767U);
    msg.setSourceEntity(94U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(45U);
    msg.enable = 123U;
    msg.mask = 3655745021U;
    msg.scope_ref = 3848043557U;

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
    msg.setTimeStamp(0.574092641260392);
    msg.setSource(25669U);
    msg.setSourceEntity(231U);
    msg.setDestination(17644U);
    msg.setDestinationEntity(45U);
    msg.medium = 177U;

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
    msg.setTimeStamp(0.519924167712595);
    msg.setSource(12968U);
    msg.setSourceEntity(21U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(62U);
    msg.medium = 215U;

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
    msg.setTimeStamp(0.17290623841473163);
    msg.setSource(4088U);
    msg.setSourceEntity(213U);
    msg.setDestination(20907U);
    msg.setDestinationEntity(194U);
    msg.medium = 197U;

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
    msg.setTimeStamp(0.6495809896703704);
    msg.setSource(37533U);
    msg.setSourceEntity(244U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(83U);
    msg.value = 0.21327019368520816;
    msg.type = 43U;

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
    msg.setTimeStamp(0.6436988202119456);
    msg.setSource(15345U);
    msg.setSourceEntity(248U);
    msg.setDestination(47778U);
    msg.setDestinationEntity(210U);
    msg.value = 0.32213555114779724;
    msg.type = 114U;

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
    msg.setTimeStamp(0.509893939018313);
    msg.setSource(49077U);
    msg.setSourceEntity(223U);
    msg.setDestination(23028U);
    msg.setDestinationEntity(168U);
    msg.value = 0.973906648857183;
    msg.type = 93U;

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
    msg.setTimeStamp(0.9416923242627714);
    msg.setSource(41735U);
    msg.setSourceEntity(179U);
    msg.setDestination(5095U);
    msg.setDestinationEntity(99U);
    msg.possimerr = 0.38829385565508523;
    msg.converg = 0.33499406008309185;
    msg.turbulence = 0.2527627945006854;
    msg.possimmon = 213U;
    msg.commmon = 214U;
    msg.convergmon = 205U;

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
    msg.setTimeStamp(0.3238286254483903);
    msg.setSource(55837U);
    msg.setSourceEntity(144U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(194U);
    msg.possimerr = 0.8509768207759609;
    msg.converg = 0.4008969442067394;
    msg.turbulence = 0.8649767405791228;
    msg.possimmon = 109U;
    msg.commmon = 125U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.8050335776440245);
    msg.setSource(39080U);
    msg.setSourceEntity(222U);
    msg.setDestination(4728U);
    msg.setDestinationEntity(215U);
    msg.possimerr = 0.18025941866149964;
    msg.converg = 0.5123603142887219;
    msg.turbulence = 0.5734956747736658;
    msg.possimmon = 55U;
    msg.commmon = 98U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.9057726315201097);
    msg.setSource(29528U);
    msg.setSourceEntity(103U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(110U);
    msg.autonomy = 40U;
    msg.mode.assign("VJWSABTTKIXKADLFQHMBHOTKMDINIOWUTUVYCVSLNWYWIPJTRJUPJXBHOAQIOKAADPKHPGZOWTGUHVVRFWNMIFANAQYMHVTPKYXDOYSPVHMCKE");

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
    msg.setTimeStamp(0.010041591328566857);
    msg.setSource(18794U);
    msg.setSourceEntity(211U);
    msg.setDestination(26528U);
    msg.setDestinationEntity(76U);
    msg.autonomy = 238U;
    msg.mode.assign("SDJOPOMXCYJJAUJTSZFBVSPMODBJZEIDJOFARWNIPS");

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
    msg.setTimeStamp(0.5570758412449938);
    msg.setSource(52393U);
    msg.setSourceEntity(89U);
    msg.setDestination(26358U);
    msg.setDestinationEntity(45U);
    msg.autonomy = 230U;
    msg.mode.assign("NCNRDIYDASKPFUNEUUGIDOVRNOZTICSKISNHJVPMMEMPKOOQPEMRAIYBHFRAHDWYWPHLJUTCFWTANQMCHDGKZXRNSRILTIDUDQLFJYDXCYLRXFWTELWVZDJHEXJ");

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
    msg.setTimeStamp(0.26183435137542643);
    msg.setSource(39978U);
    msg.setSourceEntity(150U);
    msg.setDestination(3200U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.8894287135802627);
    msg.setSource(62638U);
    msg.setSourceEntity(55U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.2969850627088654);
    msg.setSource(1082U);
    msg.setSourceEntity(122U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.3397516808970593);
    msg.setSource(49601U);
    msg.setSourceEntity(42U);
    msg.setDestination(57574U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("EMXDHHFYTPLOEUKCHZBCGECCMWOQMNECMOAFMWADYKDJBYNQWTNRUHPLLXFNPASQFVRXAJNJUZPKRQVUTJSQGZFJIFNAVYNYYFJMSUBJKDHRBOCUDUOOSOIEKZGWGDPWBMJVIQLWYIGHGMYLKWDPXTTPEMSFSZOTUNSTROILZYPQESQZDUVZCPRSKXBKTIBXCBGHDJXFAVTWHFRZIGNB");
    msg.description.assign("DUFJKOOAYLTJTYZLNAVBOZYMEEUJNVWSFNVWNRXLWRGVTQRAPUQMMSFUAADYGWXKDEXVPIK");
    msg.vnamespace.assign("FMFYLNLLGSCLVSRCRBDCOKUIVQGOSRIPQUMSTWPUYQQPHIMDNXSQIRDUCPOEGRBAXEINZXDUWPJUMYDMYVBAGWYINBSA");
    msg.start_man_id.assign("GJLOPBMUGFUYVCTSBUWHFGMQNLDTPZIHPKJELRVSEEMNXPWXWTQHSTEXBGANKBIQC");

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
    msg.setTimeStamp(0.21800067330965267);
    msg.setSource(15882U);
    msg.setSourceEntity(30U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("FBNNHTNQIPROMAINVTBWEXCZDBKRDFRBFLYCWXQUXNYZWDNLCEPWOSKOQLDWLQKQCJMABWCGEFPGEUMLALORGEDIKDUWKIGTVHTDHUSSZFGQLMCJHLTKGMPCMYRFDURGTJGBVAFVHYOIZEBPRPKMIAVQOSAYTSHECQWOZIYGXXXBBKZJEJTPMLRLHKN");
    msg.description.assign("MHRVQNPMGDMZANNJALBWIWURJFIIAYZMMYUNOQXSOUPQDHQGUJUBAWYEJXLYGYXERIBOSSBOZCHJMFVVCWODQKHPNGDATNKFSOUZCTHQTNDJBBZOOVRGRKFDYIJZKETAHQLUKNEWQPEFCKVSNOWJLAKRDMREXZLBFXXTUNTLWSIKQLMFGUDLDPYBBH");
    msg.vnamespace.assign("CAWZQNFCQCSWDGALESLFPTCYNIIAT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TMTMBJLDKPAQQIQWICHS");
    tmp_msg_0.value.assign("DVWQGOSDXPEVWROWXLBEPSHYRHTUOOYBWIIMFPCCWHPUJIYBDSAXFUKYIHCYOXANNDAKNRMGEJLEGSAGEMGVDWLGPWF");
    tmp_msg_0.type = 49U;
    tmp_msg_0.access = 173U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LKFAONNVGQCIQXHMXTRTSREHDUKPCYYMMGFHBCZOWZQPTZSXZBQCCOGHPUGNSADNACULDRAAYUSOWOJBNCPQXHFQWARBYSIPAEFWVEBXSJGNTMBAAIZGKKPYLNBFRGIYWPSPUVQUFOUQE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KYYXQKMDWMKPCENHJCAAMWHVPFSTTTNEWJZCCTOEXQAFOVPLGGUBKXETBGCSIXSTYDGXVUQFMVHDQRMNZFWNRFJGRFMGBWVKZGONBOHWJKYUJENAEZKLRIVUZDMDYTLTPNMIIXJPOQARCUKRKORIARHDOWMPAUGJQNCXCBYHZWSAIAKVVZELDPYBXPGIXBHPHLZXSHBOOTZMUQFRZTDGLQSLUECIVAYILSYFDJPVR");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 3439U;
    tmp_tmp_msg_1_0.lat = 0.2158109472271581;
    tmp_tmp_msg_1_0.lon = 0.17242236316623916;
    tmp_tmp_msg_1_0.z = 0.2255235001125161;
    tmp_tmp_msg_1_0.z_units = 76U;
    tmp_tmp_msg_1_0.speed = 0.5277387256611709;
    tmp_tmp_msg_1_0.speed_units = 62U;
    tmp_tmp_msg_1_0.duration = 8533U;
    tmp_tmp_msg_1_0.radius = 0.2560374532723426;
    tmp_tmp_msg_1_0.flags = 31U;
    tmp_tmp_msg_1_0.custom.assign("JGDOKHWLSEIKEFKGJNTKWQCKGYWMUNBEIGOLCJGIMHGPSJLPWICSESBBPGPAAZHLATNHZEKDMQRXBPJANXUTYVDDUQUXFOEWYVAAGBJVFONKVZZFYUCEHHVDMRQIRTUTBOTRSYOSBQXUMELNWQUWRYISPYMNXFFQGTVUJMCDXRLPAPNQQKYLJXLIIFEALKICXHKRCAVHXZTDJOZRMGZJTCRBT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FollowTrajectory tmp_msg_2;
    tmp_msg_2.timeout = 4701U;
    tmp_msg_2.lat = 0.012552466411787533;
    tmp_msg_2.lon = 0.3070653681596791;
    tmp_msg_2.z = 0.26774139474054537;
    tmp_msg_2.z_units = 57U;
    tmp_msg_2.speed = 0.9067215487972659;
    tmp_msg_2.speed_units = 77U;
    IMC::TrajectoryPoint tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.8041710539628473;
    tmp_tmp_msg_2_0.y = 0.46273978950134176;
    tmp_tmp_msg_2_0.z = 0.5583075702497199;
    tmp_tmp_msg_2_0.t = 0.3031771279848432;
    tmp_msg_2.points.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("AHECNRBGASINNHCEZJCIHHLHKNXBBRTODIFOVUYXADYSQPQFEAUVWEJLNFWMIUIRZDFVMYVPDZGIBGUOLZTXHOTEFFQHFSBQVJGKUTQAMO");
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
    msg.setTimeStamp(0.6220144786514957);
    msg.setSource(46589U);
    msg.setSourceEntity(201U);
    msg.setDestination(26724U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("TWPZEKJHVMFDCQLYMCMDFGLUWZXIRPJGNYVAOWQTSNNRHBKKRRAXOUAZHPENUQXSHNKCVRLVCOFWXOSSOBTFP");
    msg.description.assign("VGYSFYRTRRVSPBIETFXVSGILTKJQOXIEKBQACLIWGNRVTSEYCHWFUJQFMVBJSNPPMCMGCKROWFUDFFYJZTNKNJGGOQDFMHWKFGLULZLJIHOXWDTPAOVAHVUDICCYEJBTCEYWQQBGDBSACPKQTNGQUNPIDSRWYCPZMPBRZBNH");
    msg.vnamespace.assign("WJNGHDSGSBHYGWCSLICEEYXMEKKGRPLUQATDTLJCMTVDOKBTFNBNSXNUIWTPMNJZFAXZMFFKHKFEAJCEVMXRAZIRDBQULPTRMSWBKYOWHJRNBAVPDQKZZSAEXSYUGJEKTVVJQUUPEOSJBCWDOGHYLLUVBLTFIQHZQBTIRJEOGMIZPOOSZCAP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XXMNJFOFEEPVZTALDQXSOVEBPHIPXAQQDUZJTCWYCIARTXWRBVUNSHTHLTGRGCMJKDOLCERNIPVSEVQHHIIMAPHEWALOKVDLB");
    tmp_msg_0.value.assign("YINIRBARMDOEBOTFQGOATFVUVGHFPHKXISXZRDMJHBISDVMFSFLAJJGAUIZIBQYCSCVDKKWFNAUYSPNELXMQEJVNT");
    tmp_msg_0.type = 148U;
    tmp_msg_0.access = 171U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HZVAIZEOPAUIWURBNSWBHMKBTBZYATCGGGQSRGWGZJERAHNORFYWMXWNQEGPKAXKDJYAYAOVYBPSNQSCXPXBHCFXIIJXFDYBSUKDUEDC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KLUCIZKDJKUUGJYSMXKCFSVOWCQADAXEWCLYLAYCSKCONBYHDYZNMOTLODFPXZGZBGRPLBGNTNN");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.938107876756327;
    tmp_tmp_msg_1_0.lon = 0.5622731849616246;
    tmp_tmp_msg_1_0.z = 0.4153146455943816;
    tmp_tmp_msg_1_0.z_units = 117U;
    tmp_tmp_msg_1_0.radius = 0.3481885383231972;
    tmp_tmp_msg_1_0.duration = 3300U;
    tmp_tmp_msg_1_0.speed = 0.0313210423281054;
    tmp_tmp_msg_1_0.speed_units = 182U;
    tmp_tmp_msg_1_0.custom.assign("UCTOWHOGOOPLRVCYXREAFQDBYQQNJGUYPHLAVVRONZDGCBELYXHDHUNTQZKVMLJBSAFHVYQWSWNPEJQZBCNUPXORBJIXDJUXMNIPWGUOLAEILFNYWOEZSLGSYWKKZMDZZTAIGR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::OperationalLimits tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.mask = 107U;
    tmp_tmp_msg_1_1.max_depth = 0.6953622373620154;
    tmp_tmp_msg_1_1.min_altitude = 0.8523859988436145;
    tmp_tmp_msg_1_1.max_altitude = 0.4358228194036814;
    tmp_tmp_msg_1_1.min_speed = 0.2923033554275627;
    tmp_tmp_msg_1_1.max_speed = 0.9730364263339963;
    tmp_tmp_msg_1_1.max_vrate = 0.5828271615888697;
    tmp_tmp_msg_1_1.lat = 0.0630183590495178;
    tmp_tmp_msg_1_1.lon = 0.17702916691415838;
    tmp_tmp_msg_1_1.orientation = 0.07642402680661065;
    tmp_tmp_msg_1_1.width = 0.17152074061191402;
    tmp_tmp_msg_1_1.length = 0.5533345304864278;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::NavigationReset tmp_tmp_msg_1_2;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("IXHFTYLCEKBNAFBRRIJVVFRWQRJXDTOYFHODYLVTAMPNNEZGXNTFRDPUJMWMVDAMYHRBEHEKPZMBSLCHMKOVWAGQZDBDTGPKOMMBPRRFFJLMXVGHBYPNPLUGITFEBQDPQSPZOIXITOXZKVHNZVUFTNUOYRWXQZXQARVATZWIEJCIYBCSXNDCQCVUEYHGYUWLIABKW");
    tmp_msg_2.dest_man.assign("ORAUTALFFVZDEEIIYDNVLRYTZJWLETRERWXYNZVADFYBGHH");
    tmp_msg_2.conditions.assign("KKLGTPNRQMQMNCUQWPCNIMYNXEYUOREMDKRRVUPMGAHFCMGXLBBYTUJVHEJIQSIRXOOTECCFRVFOLWXZUAVRBWHJSDPFGVWMCVUKFGRZZAHYKHSTBAIQAZNGJIXIYAXYWZLUDWEEPNJUUDVVPYAYQXQLTFPQKZTJMWJOSXVBHKYDLIJSPRBEBAFQFSNHHSZXDDBTOPDBDIBJEGC");
    msg.transitions.push_back(tmp_msg_2);
    IMC::DesiredHeading tmp_msg_3;
    tmp_msg_3.value = 0.9171570537675384;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.7191748080118073);
    msg.setSource(3115U);
    msg.setSourceEntity(71U);
    msg.setDestination(40646U);
    msg.setDestinationEntity(199U);
    msg.maneuver_id.assign("PTZIFQNWOOHJSBPFVZCAUIHZQTQORWPYKJNSOUALHFSCSZZZNMCYXRDVGUVYSAYCHFKYYJTYQGCWPAXDDLKZSQKGWSNRNGTPHAXYVRPBTKCVBXIQEEQRNEDNEFLOGWUTLDKWJHSLYEQNJHMAILBZLPVCKDHIRQFV");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("PFXXNWOVGXDMJATKFKNECJVBCCIZFDGNNSCUUBSTPIRK");
    tmp_msg_0.formation_name.assign("GWRDTQFYLYNSNVYCQPCWDBNLQUKHLIEZVGXYDGLFXKDUDVKJLJLOBHWOUQSAPHGUTFBORFYCYKFGUPJWRHEWISMEHMXJWGQNUPZCXQWFJZMYSLQBEVONXGMOGNJLNBEKINXEBYGRECTVJOAAKOFIITHD");
    tmp_msg_0.plan_id.assign("NTFEGMOSXKFUXTVGGIJGIUXKQLERBSBYUZVTJQSPQPWBMLGQVYQAZHCOIDAYSJDPMCNJTMBEPVOFCAXNFPQDL");
    tmp_msg_0.description.assign("HVEUSWYHTDCHBMQXLAZKMPWQLXMRVHKPNUTRMSFCBDOZBSTCRGAEHXZDWFVAVWXJDZJWHHXNBGQKVCSKAKNEWTMIZXRFTRTMIDYHXLIZGENKEJQGPJHUSFJDAUPPBPSNHKQZACLCVRDIYFFDPBBENAYPMJPOLLFTMMNWFCOYUYVMQGJAGLJS");
    tmp_msg_0.leader_speed = 0.5205593939844125;
    tmp_msg_0.leader_bank_lim = 0.2815389959430461;
    tmp_msg_0.pos_sim_err_lim = 0.3833820903033536;
    tmp_msg_0.pos_sim_err_wrn = 0.5028251734574384;
    tmp_msg_0.pos_sim_err_timeout = 54673U;
    tmp_msg_0.converg_max = 0.8573330280459532;
    tmp_msg_0.converg_timeout = 19830U;
    tmp_msg_0.comms_timeout = 54796U;
    tmp_msg_0.turb_lim = 0.6856358014861734;
    tmp_msg_0.custom.assign("AEEYSQQZYF");
    msg.data.set(tmp_msg_0);
    IMC::Distance tmp_msg_1;
    tmp_msg_1.validity = 199U;
    IMC::DeviceState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.9813544361522811;
    tmp_tmp_msg_1_0.y = 0.20796666154031052;
    tmp_tmp_msg_1_0.z = 0.3824006900006991;
    tmp_tmp_msg_1_0.phi = 0.350419327346153;
    tmp_tmp_msg_1_0.theta = 0.9482106146427486;
    tmp_tmp_msg_1_0.psi = 0.7800016909075147;
    tmp_msg_1.location.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.value = 0.411140354418427;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GroupMembershipState tmp_msg_2;
    tmp_msg_2.group_name.assign("DLNJPBMZUIVVFQXIWKWDJDPDWADIETFBYEUAWJGJUXWRAZHSFGBSTSHKNPCVBXPIXPPJEXDLJKLZXRRITBLZQZPVVZROMNYJFKMBRRUSRZXRIYACXDUMYLCCAGLNAKONLQPKNQJQKVE");
    tmp_msg_2.links = 2038072379U;
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
    msg.setTimeStamp(0.4347933829379579);
    msg.setSource(44974U);
    msg.setSourceEntity(73U);
    msg.setDestination(50304U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("MTPCIMOLIMETGHHJYUVATLHSGRKBOKECLWNQXWPPDEZZCOXYRRILQTJFBOUINYENSDWVKKGJMOZJLEHPMFXJUGDWAQWNVPFUEEQZJSRCD");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 52900U;
    tmp_msg_0.lat = 0.46494066565352765;
    tmp_msg_0.lon = 0.17197026559238027;
    tmp_msg_0.z = 0.36784727514388005;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.pitch = 0.38436216322744876;
    tmp_msg_0.amplitude = 0.2864491597905303;
    tmp_msg_0.duration = 39088U;
    tmp_msg_0.speed = 0.6967251894109235;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.radius = 0.03264625179989045;
    tmp_msg_0.direction = 35U;
    tmp_msg_0.custom.assign("UYCBISRXITHIEUFZDISSZWOMFSZVMFVQHZGUROAAGCJQWAWNZSHNJIPBCIOJLUGPBXVJMXDNZJBBXENJGBUFHTDALFBOMVNWMARRARBYEDDHTLPYHURNQMEETWRTVKJTPWWQRFVMXFQNYESLSGFKXQZFVOZCICCEDVBGTSKAILWOHKHYWILEYTTHPXPGMCLZYDQYOIHEGDYDYPDLEQJKPRKNTQCMONXGZKFQCNJSOKCMJ");
    msg.data.set(tmp_msg_0);
    IMC::CoverArea tmp_msg_1;
    tmp_msg_1.lat = 0.9119080559574549;
    tmp_msg_1.lon = 0.6447075346956163;
    tmp_msg_1.z = 0.23168408085704983;
    tmp_msg_1.z_units = 30U;
    tmp_msg_1.speed = 0.4060799541300186;
    tmp_msg_1.speed_units = 214U;
    tmp_msg_1.custom.assign("IZMVQBUHQJBUNVZXHGRLKKAMXGTKYLIYCHCFMSLTFFUZZEHFHIUSISJVLEYJOYAFOPQWULHMCOCAPVQXWRIPNJMCVOXBELBQLMPNNDDNAKOTBKOEDWZOAJIPNHFZTWXZTT");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IndicatedSpeed tmp_msg_2;
    tmp_msg_2.value = 0.06299894354293933;
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
    msg.setTimeStamp(0.3456592409686672);
    msg.setSource(50241U);
    msg.setSourceEntity(2U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("PGVJBKOLCCPODFKRWXMOCVLFRYLBGZJHSTUMDRQTYLZBIVNEOHVVNIJRKBHCDSLSTWKRMIDWZFPOQPVCUDQPYIJCTXPHLSNHPZ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.11400583702428446;
    tmp_msg_0.lon = 0.10820157244601236;
    tmp_msg_0.z = 0.955526422666289;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.speed = 0.39026499349351007;
    tmp_msg_0.speed_units = 142U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7626409571005305;
    tmp_tmp_msg_0_0.lon = 0.24603164393858235;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BGINUEIVBBDZUOOIQPMQHGONEYSYRZBVTZZMYCOZZFRQLHJQJBAAOGTLDVZLIWSVEJTQXAAIFDKTGMOLMNBCAJLFKIPMDALYCIPJDUCHXSSXENQREGUNPTLKJZTLHNJKKCHQTGKXPWPJQXWXFDEFYOFKYRGZHSSUPSIFLHTNNJDBGKYGMUYRNCNMOXFCUMVRRYAFCOPAOPTKXVWHWVSKPLYECBUHSSWXDVJUC");
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
    msg.setTimeStamp(0.8017838958862546);
    msg.setSource(23571U);
    msg.setSourceEntity(53U);
    msg.setDestination(35513U);
    msg.setDestinationEntity(207U);
    msg.source_man.assign("BAPDXMINQLKVZWZILVAROEJUENKCIZVUDTPFOOGLZRVMZSSKTYRBTHODBIXHDTZAHCDLORPCFEKOPXYFXCWVOAGKEWQJLDALGAYRWGCHESMBJKHIIFBEYAFSDFWNSQBEKZIHGMCZWXGCDKNXOJWEQYOMJVXPCUYXJUHSGXSPBHFFQJGLFESTVYAKQZRQNLRMEUTVGMCNPDPAIYNSHPWUZJYBMYBWLN");
    msg.dest_man.assign("LNSLDRUTAEXOYLCFLBZBOVDPNEQVAGJEROHUOCPBZOGXFYFVDTIBYZ");
    msg.conditions.assign("HVLOBGQPXFWUFYUKGHSOJPHRDOTW");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 130U;
    tmp_msg_0.mnames.assign("PWCQOXAZILFDIVBZNYRPLVEFXVSGPESMKEIUBKSNCXBURHAYLONAYMIYHMGIZVUERALTEKGEYWBCIRETQJXRIOTVKMBJWMKDZJCQDRWKZKKTNDRVFPYMILMTVSXPPNHAFUPWQCPCAOCWDIJ");
    tmp_msg_0.ecount = 177U;
    tmp_msg_0.enames.assign("IUMHLHIPYHQYNFDVJYWPEZDATELHNSHFCWAGYKGZBSXJELKYRUKDEBUIVLCWJXWBPJOKIWPRFHXUZGULYEXPEIOPOUSGGARAMXXWQLTQKQPGSBTZSPZOBQQMCMSVACTAVYDHIWNJZJKEGNJOMRUMXCDCDXTROHUQWIO");
    tmp_msg_0.ccount = 164U;
    tmp_msg_0.cnames.assign("VKHQJTRRKSNWOLXAZPHAFIULRMKBUEDUIPPDZBOQAQVWOAVQDSZJZFENBKWTLIYFZJZ");
    tmp_msg_0.last_error.assign("XEGCVIDDODKRIWBWUDBJQZQQMUVKBFJLVAKRILCNBCISLJQJSZZHEHANYBOZELEOQWNIDGUTLGJOVPVBHUNTKRPVWERPSTGMEDGKAWEUXPGBJDJSKZEIUANYLPIFGCYYXFDFCRQXVZZ");
    tmp_msg_0.last_error_time = 0.7040920047577603;
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
    msg.setTimeStamp(0.6037316453620907);
    msg.setSource(37147U);
    msg.setSourceEntity(85U);
    msg.setDestination(41297U);
    msg.setDestinationEntity(33U);
    msg.source_man.assign("BPXQYHDLITGKGCGLZAPUMNZSPJPCIMPRGROYVRNMOYVXSWXASRJCHFONAKQWJVHTICVTCEPQFMAHMDQTQMTSWULVJTDLZVAEVUTACKWYSFWSZEHZIFHGBHGWTKZSMEXBCDDUOLCCOYGKGYYFFLBIFQKFIQBSQENWRDROUOEKZZJAOFYHMDKXBMLNUXMUAHOUNEBEJ");
    msg.dest_man.assign("IHWMKXPWQAMRUBSZWOILMWSXHPLCAASCZBKORFUPNXDYNQGECVJFIPZELFMXJXZINMKTLUROGQIEPEDNBCOJSKABODSTGFIFRPACFVVYFTIHCBJUGZIBYGHBNZAYSDPKWOOXLYSBRDJEDRQHETKNRTYZFUHLVTSKUMVBGUGXRTGQUNJREHVELXZJJDUTOPTKCFYESGVQMYDLL");
    msg.conditions.assign("MXEGDJCHEVRGRSGEMFOPPWHOPBIBQKAGZVNRYCFAQUYJSLSMATOEPPFNUBIPDWOEXAOFUFFIHXBFOXFKWHZMJYNXAWBRYVWMLZQDQTIYHMCHTTZCSYELEDVVDTYJIMLNGJUASSSJKIDQNHQNCQLUQCPTBJWXFEWGJSGBTBHUZDVMHZSZTKTJAOWKMBMLRONJKUVDUBYVNHLZULDXSZNYYPDPQRP");

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
    msg.setTimeStamp(0.29506578005939244);
    msg.setSource(56266U);
    msg.setSourceEntity(75U);
    msg.setDestination(16826U);
    msg.setDestinationEntity(184U);
    msg.source_man.assign("MHZIAVQXSIDLEERCFXFUZRJZLXSZVHDUJBISMVWPOYFQPAWHWNRQLXLOKZZKGXVARZTDMZKCKIUZGFIQNOESVHYQEJPDXPMGLBNTFFHGVJTYRVIJUHXUABYUAQYCPRFYWMQCOSMBGGOAMXRORDLAQTVLECPTJUTBJXSKOKEPIAJVGMWEKIBNXQYDWWBFGKFFPGNNNHUCMWHST");
    msg.dest_man.assign("VYFQAJSBOFZCVXINDWRWPTZGORJXVYDYMAZOEMZACVBQNVABRXCCEUFSKAJWBPWUWTQNFDILIMOYBULNRQYQVDPSIFKEFDMKEMKMZTQSFCBVGUQXLINRBSOAKUGADTTJIGUGCZNWOXUUJDHSRAJENGSCOWLMHSROHEZCZJJKHFPPGWRLTIPCQJJDZZFXMX");
    msg.conditions.assign("XZNWBDPEUVDLYMZJEWQZLLNVCPKOIHQMMFYQZBIKCMCVBCHXYVQOWHXCTJFMAOTNWUDHLJGZLWIEFDGKWNSJPUYIOKVSRPAWXGBGUKETBRORAQHQZXFGLVTPOHDISSONJDCDKRZAOPNLNSYSXDCZTUKSDYUKUVBKBDPTRHOFQRETBFGEHFJQJMAHYXYXVBXJREZLTANFCRIIR");

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
    msg.setTimeStamp(0.801010954992848);
    msg.setSource(29948U);
    msg.setSourceEntity(8U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(184U);
    msg.command = 149U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FOJPOFHHCJFLQYBZYFMQWIUCSGTBKABNTKCRQVJFUUPFYZKTESNLPDTGKGHTNNQBUQSQUGQZDEHZCAODVBMAOPXESRVBHXNEHWARJALUWSOLDATHYVNPZMAXFSMIMLDUZSZ");
    tmp_msg_0.description.assign("NYQKIFICYAWSXUVHNGDSJWWWEBTFDZFJAYLHMTBLUIXRETSWIBMSYJURJWHVYRHVCKNIIXULWXOQWPABLFPQNOGYNCWFDDDYAZGBFAAGNSXMWTEKHVENKGZFHJRPBDCPULJGUZTMDTOCKXTBQLVZEUJNCIJPQOSRCLEDBSCTYKYPQENGICPLXQMKYKCAOOSPOMVZFQDMVEHPZIRLADHUXJBMKUZPGRKMVMHVSAOVURNSJEOTQGEZFRO");
    tmp_msg_0.vnamespace.assign("XDNSORUEUXABPSGHEPAEJRXZIUJJNOKNDWDHRXVPQQCMOSYFGIFJCRLVIEIOVOKKSXLLTZLOXQTHDAFATKVITGBQFMVDEDGKONETDEUYWCMBVIEDTUHVMMQJIVGPSMZNGNNHGFOJMAZMWWFEJLFBLCKQANTVXHSXAFPQCHMTHDRBSASGAILBUPBMYLGCIYDZRLWPRBKRUFQPOYHBWPX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MWVZQJFGULNQXLAGVLSUPWZOYMMTGTRVDOATGKQPHFAMRLDNZCYNFFMCNHUNRHXBIECPDCCJAHBYGOXPXQBWEJKMWPLTWSGNQVWHYVQDZXNSFHTDVPDYKEEWGWMAJUZOKJIISNJLJCFTORQLTGWPCECMQIRXZEJRWIADIVOCESSFDNGQIRBDIIUOHXYPKUBKNJFFK");
    tmp_tmp_msg_0_0.value.assign("JUMXQDRLDEPWIZBAEUDSCDNYVCGWMMB");
    tmp_tmp_msg_0_0.type = 212U;
    tmp_tmp_msg_0_0.access = 185U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JTKGLXXOGMNCDZFTREGYQFLTAWWPMLLWETRJTZQCJJIQAOF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WBPFVJFURFUXSYZAHHNJOIOLLPZETUPZOHTSRAYBWZCMKWAMCUWXLCVQBDXWAEIDYSPDGJQJEMVWEQNXCSXFHFBUFEZPHUFVCEJVSTCYMAIIHAAOHFYPDKYIUNSSMYKG");
    tmp_tmp_msg_0_1.dest_man.assign("VWMMLCHBZAAWGSWNXMRPWISWJOHKJTSZMCZBUTDHYSFCDJKSDAGEPVESLXRRVOSIYGUAGTVUDRRYWPKTOKQIAWDCIQLLRZVUKPZHIYGTNWUTOIZASUEZNQQHGGOFFJNANHLVNNBEGZKVDFBQTLYNLMEBXHMBQEEDCXKDFLADECPJNEXOBXCVJKPRYXZAUQPQSMCIIFBLVFMOQPNRMJTZAJPYGYLIQXUFJXS");
    tmp_tmp_msg_0_1.conditions.assign("QUYWZSYRHGDILBZYJGDWQXPAIQJOOGTSOANZWAFIPMDEBYBVBTRRJUISFIGZZPCNEHDLQXNPNWMFUMYCJQKJEZLAIFPROMYWZICBDMMFMOHTVHCENHVTHLELZASOYWMKSLIKUKTTJKE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticDiagnostic tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.enable = 111U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RelativeHumidity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.4921805078440109;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.13612752674080075);
    msg.setSource(32799U);
    msg.setSourceEntity(19U);
    msg.setDestination(57401U);
    msg.setDestinationEntity(193U);
    msg.command = 217U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QFSFYCPFJADWJLXDAARICYDPITOZWHQWRQIMTCJAVJIZELFMHHVSDQJAMOLORQLXDKKBUYOVMLBKXPTKDFHRDGCGMEJTXNBIUSKWBQWOVAGZEQPGWNJCUYSEVXMFHCCNSZUEFPZTBGHVVRFEPXZUBKWSVKNHAYIYYQSBWNEYKOTFNIJUBTUNXEOJ");
    tmp_msg_0.description.assign("ZXRCVEHJELNGRKARCQURJOQKUUJBXUORCDPZKS");
    tmp_msg_0.vnamespace.assign("BNVEYACOHOCFLJLTNRQYKVJIGKPQHLRUCFUWAJXYMAHVDQFJXIADICORXNTUILFRYTQIGRHIPUAZFPIESJHYOKPBYLBJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HDBJNOSPCFMZCVYURUYETWOJWQL");
    tmp_tmp_msg_0_0.value.assign("PWRKNTOQPORUREMGFPBEADMRVLUNXLWCAFJHEIDVGRVDIFLHLHOHTHNFOZFTWNWIZCPGZERNGHBAWKYEBWDDTDVSVBTNXCUSYSUOLWKSDVDLYKSMPXMHRZJSEOQF");
    tmp_tmp_msg_0_0.type = 31U;
    tmp_tmp_msg_0_0.access = 235U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AUQWZSIRFZPVEGJXNKYTRNBWRHYIFIQXUHVPJLMZBNKZOPBPXVGPEMJCTRFUDKDICXYDPYJTHSYAANYMGSQAKLVMDXGUQLRBZFLXOAUJGASWZGAHOEMLQIOFBZWAKHBCZOWVVWYDUNUDUVTBWKFHMPHETTBYDEURSJMXRSARFCCYGNNXVNN");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IQHJGRHQUBFTLIKBYGUTHPBEMZBTXGOLUDLABISHOROPKQIAMQZKSWMCAKLQRSYGMDAORMKBISNVYNWXUNXUHJZVZBFBBCAPVPGZCUYJHDOEXWQLPVSEPIBCSRYDVNLGYDWDRTTWEJECSNSUYYFDISUKAFULRPVSMDN");
    tmp_tmp_msg_0_1.dest_man.assign("EEPOJYWIGTKKDJVAKYCBNNEARWUUEMYLUZUOIVHATGTBYDLNTOJZZCXVTIQXULQDHKETQWKUFQTJVXMLRWSIATEZFABDDVEZJPXSFNIDKLHJYVSBCOGBLHCSQMHBPYMWMHUAJXQXFHNQOJRP");
    tmp_tmp_msg_0_1.conditions.assign("MEKFOBUQRLTTZJGJWFHKMYNNTUSJUGYCHJOLEQBCNEDTKBWPRVSQWEWTGOMALFKLPYFDMRLMWZCFWQZHVKSVYNYOIFTJMTQXZIQXAHOSURHVZAYZSEDZCPEDPMLLAICHIGABBRLJVIYWRKBAEDLSARINFJRXMYFDNFRORHZCPGXQKBXEUYUPT");
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
    msg.setTimeStamp(0.14783452169762779);
    msg.setSource(48807U);
    msg.setSourceEntity(211U);
    msg.setDestination(24814U);
    msg.setDestinationEntity(9U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ETZDSEILCNYRUTNDEBOUSPNLVIDXJUQGENNOPJMZMGJHPTVTBHPRSMWWADWXHCMEFQSFJIJBFG");
    tmp_msg_0.description.assign("OGQZDXLORWFDGORFYJVQZSKIERZGLUTSJEDDMVZFDUAAVLADMHOPXNMSYNHMUAGLKQMCIMDWTCGPUSWTBNAYBCYUVJAPTLHMQWVQLICJQXYEGAYSXRBJFHVXQDOIRALIFYSBWOKGONPKUZVNGCVVEZTSBOYZ");
    tmp_msg_0.vnamespace.assign("WOXVLHWNRJGYUATFYLQUDHZMJKJTOESLCLHBZVOKESNHUSZFOHGIVCTMITGXKGUMFRNHCNIUIXRECMQOYEBJXIXJUYDGBLNKPWJTAXQUCEOBLPAMQPWMZRFIRJZGOVFNCDHMPOONSMQCZKEABBDWZZBAVTRRAIBRSTSKQXLKGRDPSPNOHUQFVXYYIWASDANMHZFWMIPJUTKIKWRQYVELDEWETSGYCBPEJDFDPL");
    tmp_msg_0.start_man_id.assign("BHJLDCNHXJSCTMELAIRVUYNSZIWSAOJJOTSJWWQJDLX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MCRYVIKSFTKKHPHWJIHTWVLPEBJYDEFLISMOGIEJDYIHOSHWGKLJVZUUNFXXESSBAZZRDMUNEUVUNFHBQJLACVFQBQZRWFYBXRJLNECNJGBDAFMDGVGSRTMNQWTNHTQAUORZWRKMAEYYPWPFXWGDXBCNZCTVRONUKBQ");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 64531U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.20870786036665334;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2023875634228014;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6096713766695436;
    tmp_tmp_tmp_msg_0_0_0.z_units = 93U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.41780303082872405;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 152U;
    tmp_tmp_tmp_msg_0_0_0.duration = 45720U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.3943137512249444;
    tmp_tmp_tmp_msg_0_0_0.flags = 5U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FNBRNWYXJRMX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QWQAENXMEOGFJFKZNNDZKYTTKHQPEBDYMIHTGKYPONARMVPRCBODALWYAGCISHQEXJSWTFQLUCGQEM");
    tmp_tmp_msg_0_1.dest_man.assign("HTCEDNZFLXYZLBOBHRZAKOWBYQPYBPOPGAWTHVTARSSMVCFP");
    tmp_tmp_msg_0_1.conditions.assign("YWMWKGTBUFIUAQHKPQUXMIGZNRVFQCAKRPZYRPDPWQYXVJINIQNUFDZPJBSITSCCBCQGXHFIUJWWOYHRONVLVNEXRRSYBCVGEBKMYMIIRKJSMJNNEXOSTDLYXADMAXLBLVVDOJTHXUSOOFESJICANKHWTRTFPTZQCMJDJKHWXBAEAOIPAGLMECHLGZCQFLVMZVUDQZMGLZUTPGYV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MonitorEntityState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.command = 59U;
    tmp_tmp_msg_0_2.entities.assign("KZJVJBQPFSIQGNLXRYJEVIPADQPTPHKVFOATRRNXDOARUUREUJGEPJIDBOMGRESOWHFQSEFJLWUJIHIQCMGZHXFEVYLKPNCZKNTVWPCSXDXRQXKWHFLUIAFLMLKZHMALTIAKPDFOIVJNDRGPSCNZCEYCTJBSXOREVMWYMGFNAWAQWIYZZBWCTLYBDZNRS");
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
    msg.setTimeStamp(0.015450405044560633);
    msg.setSource(62688U);
    msg.setSourceEntity(83U);
    msg.setDestination(38913U);
    msg.setDestinationEntity(220U);
    msg.state = 154U;
    msg.plan_id.assign("WDIKGBJFXMKLVCNLNVYXGVANBCIVKKTYSHPYPNUEFFGNWXTPVMWQHWAHROUVKLXBBKITWALHTOGAWQMRZLYETOSMHUBUVGDXERNTLPGFGYDGUHPVZMEOLOLUJQJTFZQKOFNREIDPYBEHMIMBYKEWRUWNRFSNIAVDCZODEEJDVLSUSXQDMFCXCCIZSBFQOXZPYJARKZQDYMYPGBZRXHTQLJDFMABJEZQSJAKSUCJANICCIQHXOWRRWOJITSPZ");
    msg.comm_level = 156U;

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
    msg.setTimeStamp(0.32032534798139156);
    msg.setSource(40679U);
    msg.setSourceEntity(14U);
    msg.setDestination(42803U);
    msg.setDestinationEntity(31U);
    msg.state = 120U;
    msg.plan_id.assign("GSFIGLDKSNZCDZZNZHWDHAFCRTBLEFZWUNURVLLBWJUBGMYWHOFHOTMQZYR");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.5539891137035696);
    msg.setSource(53471U);
    msg.setSourceEntity(150U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(135U);
    msg.state = 187U;
    msg.plan_id.assign("BGOYWLDPWSFINZKJHHEQTCTAVQAIOCYDHFSXKVPHCRQDTPZROJLMMATWNJUQMXUAXUAWHUTCIZZYAXICWIUXSSYLREKULYHVIQPNNQKNVMVEHZGNSVBAEFHDOBPSFXQLMZMFEUDRJRVVTBNJPEQFZRVGIBCCGCUULUWJVJDREKGYXMLFPAHMOCRANYZKCTOLKSEXFENGOXOYDDTIKYYOWDTWJZJQWSGPBXSA");
    msg.comm_level = 105U;

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
    msg.setTimeStamp(0.36483637548612213);
    msg.setSource(56606U);
    msg.setSourceEntity(193U);
    msg.setDestination(37323U);
    msg.setDestinationEntity(77U);
    msg.type = 155U;
    msg.op = 196U;
    msg.request_id = 21663U;
    msg.plan_id.assign("MEQGWBQNMVEFKJTVHKEDSOMUEDLIFWIVLQIPH");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("LVYNRDLHJFJUABXTKCRJWBYEBVEYINMLSMXKIPDSBDSDTOGACIRKYTNFQHQLIZXGOUWRAUKOFUTTV");
    tmp_msg_0.predicate.assign("GTRYLLQQUNVVVUXPMSPPRBGQKBXYAJBNPBXABDTYZLUWQRWHFDEJKQYHUWMTNYISWJYHZRWZTVUOIKFDXVRTYKBAXRSENXUFMXQOUTCEZRGEPSJUJXAGXMZCGOOCLMSOOOFEXBSYIGZDPUEHRVMGIKLGQLAHJFKKNCPFLVPDYKWAFANTCLQAVMSZRDCWHYBBDDTKFWJHNSZN");
    tmp_msg_0.attributes.assign("UXIVLGGNRGOGYSQYYMWJNZVUHCVBZVFHAPKBHHFTIQCJMDBLVDPDENQYSPZGHVXIYBPVZKQZBGLFOSXUJBVSH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GBSHJAKEYEJJGMVHXPVKUKJGBDNWSQHQTSXYQSJDNONNMXVOOTKXBWGGQTHGCYCLFJWINIIIMTCHOIENETL");

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
    msg.setTimeStamp(0.7581341182669438);
    msg.setSource(15720U);
    msg.setSourceEntity(90U);
    msg.setDestination(59650U);
    msg.setDestinationEntity(222U);
    msg.type = 207U;
    msg.op = 59U;
    msg.request_id = 25660U;
    msg.plan_id.assign("PSPSCRLJSBVMSMQBUOMFKGZWGDGAQMCOFNZGTUKWOAUHLQBXINYGBVXBWQLVDEDSKJKHYSPXLRXJALTEDLTUUZCFIYTKPICRYXBWNTYZPJPZVERAWUIKLBFRZZULMOIGCJHIEVXKQUMHA");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZFAVFZUSYQVFKWRGXVNKMCRBSDTJUUMGSERFYWIKDTZMCWLHHUFHXXDWAMWZRZAYCKBVCUIRKELPBPIZLAKEEMOOWJWTYJTNUEPZNJHWAZSYGBDCVEILGPONINQOZFFZEJQOALLJJOTRGCVTRVFFLWQGMWAGSDHKPVEXPGPDPKMDGSIMYUIEOYXNBBQRUOYBX");
    tmp_msg_0.dist = 0.09204369161948356;
    tmp_msg_0.err = 0.832369756536755;
    tmp_msg_0.ctrl_imp = 0.8217589583978417;
    tmp_msg_0.rel_dir_x = 0.2361109107484105;
    tmp_msg_0.rel_dir_y = 0.9347151686506296;
    tmp_msg_0.rel_dir_z = 0.6654934758938259;
    tmp_msg_0.err_x = 0.5339943916402001;
    tmp_msg_0.err_y = 0.867866677800901;
    tmp_msg_0.err_z = 0.5943455719634808;
    tmp_msg_0.rf_err_x = 0.0248797617483153;
    tmp_msg_0.rf_err_y = 0.6646191659950601;
    tmp_msg_0.rf_err_z = 0.41722017518837873;
    tmp_msg_0.rf_err_vx = 0.2533438015090268;
    tmp_msg_0.rf_err_vy = 0.02049983493850649;
    tmp_msg_0.rf_err_vz = 0.5144611495437453;
    tmp_msg_0.ss_x = 0.43921861027138687;
    tmp_msg_0.ss_y = 0.2311676441138868;
    tmp_msg_0.ss_z = 0.8328232897389579;
    tmp_msg_0.virt_err_x = 0.05519972432617726;
    tmp_msg_0.virt_err_y = 0.7010064745640058;
    tmp_msg_0.virt_err_z = 0.19341592605409808;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BBOGNRXXMKRHRFLYBUGJYUDMXWIMBWLKILBRFXYPSUDJMAPADPJXTHCJQKVQXAQCIDEVGIETJSSTDGMGTGYAIBCIJCXSOFVBKZWBHVQRMNSFNEWYFGUJNPQMRGZGUHLOWCRITCVIHSZSPTLVBYWOPLXZUWXDNOWZFALAJFE");

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
    msg.setTimeStamp(0.8636216915374545);
    msg.setSource(46631U);
    msg.setSourceEntity(119U);
    msg.setDestination(51119U);
    msg.setDestinationEntity(34U);
    msg.type = 157U;
    msg.op = 187U;
    msg.request_id = 1931U;
    msg.plan_id.assign("EXRMNNXJMOQXLYEVFOJVROVZVMWOVUZDVZ");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 245U;
    tmp_msg_0.file.assign("QPYUXWVBAJYWDDEUZQZSIOVGCVRXELNOEUAXXZAVMUJUDOFOLCTLDTBHTLHMHIGGKQPQYUFKPVMQMOOYUSREVYWFVYIKYNRKZNWQJKHZDNZSSZTJKLSGJMHBXTSHAWHTOQFNLXZCBVGAEZOJNLFKPEEKABFPRBXPCIXSJAIRJMVTQGWWMGDSCFCVTDMTUGQDRYIHNAPRWLBFUWQCJOX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UQYEPCZUHNJLSKKOYXONHZEFPTSWURRZSANFTZQDFRHCLCLANLVBGEXHXRWEIOBXKWBGQFOXJFAXVMCYMQSFPYOKZSJLYEVOEIAVTRFNVHNTYBDNPOCUXWVYIBUNGMIXWWDEEAGAVDOBOVXHJIZCS");

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
    msg.setTimeStamp(0.6561576279368625);
    msg.setSource(4719U);
    msg.setSourceEntity(174U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(47U);
    msg.plan_count = 5186U;
    msg.plan_size = 3788705707U;
    msg.change_time = 0.9527717752616518;
    msg.change_sid = 50440U;
    msg.change_sname.assign("YZGMEQLZSQWTQENGPISBOTXMMVBDIKQKSVFBMUYVUDZHO");
    const char tmp_msg_0[] = {64, -96, 72, 81, 58, 82, 65, 92, -108, -56, -105, 102, 27, 84, 89, 119, 84, -29, -54, 106, -64, 22, 81, 125, 125, 26, 111, -43, -24, 104, 23, 108, 4, -127, 28, 46, -63, -98, -11, 66, 85, -73, 42, 41, -69, 48, -99, 79, -104, -13, -122, 125, -127, 0, -67};
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
    msg.setTimeStamp(0.3820901647467472);
    msg.setSource(24380U);
    msg.setSourceEntity(101U);
    msg.setDestination(41215U);
    msg.setDestinationEntity(100U);
    msg.plan_count = 16491U;
    msg.plan_size = 1429685048U;
    msg.change_time = 0.5197919709557851;
    msg.change_sid = 51686U;
    msg.change_sname.assign("ZMFJIXKQDRUQUEEPAXELNINPTWAPJWSINPKKZVAYKRABOBUWCEZMWZQUPTYUPNJKD");
    const char tmp_msg_0[] = {-121, 115, 114, 51, 20, 19, -6, 104, -118, -109, -20, -95, -15, -55, 26, -16, -29, -33, -127, 20, -122, -5, -112, 14, -102, 49, 28, -24, 100, 115, -13, -14, 44, -29, 103, -70, 126, -40, 58, -32, -53, 66, -57, 111, -109, 44, -102, 63, 102, -109, -60, -123, 38, 16, -13, 43, 24, -119, -29, 38, -18, 23, 53, 41, 27, 11, 86, 114, -83, 47, 66, 76, 122, 44, -75, -92, -86, -84, 85, 54, -104, 67, -100, 93, -32, 117, 75, -91, 78, 102, 82, 96, 15, -46, -108, 91, -36, 62, 108, 3, 122, 121, -114, -16, 10, -97, -65, -45, -6, 125, -66, -24, -76, -29, -98, -11, -42, 98, -105, 73, -17, 64, -87, -42, -68, -74, 47, 37, -61, 14, 112, -76, -116, -87, -46, 18, 58, -91, -23, 23, -65, 72, -74, -72, 1, -65, 124, 19, -119, 83, -27, 97, 96, 32, -125, 34, 116, -69, 116, 82, -24, 57, -83, -72, 58, -117, -121, 64, 30, 92, -53, 72, -117, 67, 97, 21, 15, -87, 68, -90, -103, -26, -121, -4, 103, -69, -125, -49, 91, 67, 114, 97, -53, -91, 63, -91, -1, -52, -41, 109, 42, 91, 68, 88, 15, 122, -64, 91, -2, 8, -37, 17, 59, -99, -46, 111, 47, -104, 116, -85, 74, -6, -124, -42, -87, 15, 120};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PGGFFBAZOKKVSKFVQQHZNCRLDMMTUIDQCCUEXIQEYREJOWOFZOHEEYLGRVHUFBJBWFEYPDWM");
    tmp_msg_1.plan_size = 35637U;
    tmp_msg_1.change_time = 0.39004165051500783;
    tmp_msg_1.change_sid = 46031U;
    tmp_msg_1.change_sname.assign("NQMLNNOABDDZLESMHDBQPZFTHNFJOFTPSTWNYJJKMHQYCRGCYXLQERAQBFXZVNCGAIXSCRMAHXTSLGRYDSSOJIP");
    const char tmp_tmp_msg_1_0[] = {9, 49, 107, 92, 60, -65, 22, -70, -126, -91, 21, 49, -27, 30, -14, 32, -8, -54, -101, -8, 117, 120, -83, 41, 38, -71, -111, 30, 10, 100, -79, -43, -56, -43, -76, -50, 0, 95, 77, 96, -116, 82, -117, 52, -92, -13, -102, -101, -88, -37, -16, -104, 43, -17, -21, 62, 105, -99, -36, 94, 74, 81, 15, -9, -21, 45, -63, -107, -31, -73, -20, -24, -99, 68, 36, -21, -21, 108, 107, 1};
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
    msg.setTimeStamp(0.013743670450660717);
    msg.setSource(7274U);
    msg.setSourceEntity(180U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(179U);
    msg.plan_count = 48292U;
    msg.plan_size = 1099224257U;
    msg.change_time = 0.19294736814181523;
    msg.change_sid = 57095U;
    msg.change_sname.assign("RNQUHMAGDGXLDTEZSEYXIHTMFJJHJOBDNOUMNXWUKURPKCZYSXODPXAPDDILHETWJEBZKOSVVLTAIECCOZKYEVFUKEUPMAZYRVVBWJKZDZHTQLWTHNQWGQMMHFHTBUMNGLAYYIFCKNQNUKEPBLBOFSWYMZXRTCYXDFGNPHLJQLOTPGYVLFPEAD");
    const char tmp_msg_0[] = {20, 30, -53, -83, 52, 95, -109, -60, 19, 66, -95, 21, -124, -12, 117, 6, -114, -29, 36, 99, 0, -89, -53, 119, -87, -118, -98, -6, 34, -15, 7, -31, 45, 3, 63, 37, 106, -15, 6, -101, 28, 27, 99, 55, 78, 104, 112, -79, -8, 56, -101, 97, -91, 36, 42, 111, 7, -100, -43, 40, 23, -75, -107, -81, -27, -83, -45, 91, 74, -108, 70, 112, 53, 52, -44, 112, 45, 46, 84, -101, -73, 76, -111, 87, -90, 54, 84, -30, 56, 20, 62, -91, 41, 92, -121, -56, 100, 75, 12, 70, 25, -15, 115, -51, 48, 58, -45, -119, 120, 97, 25, -37, -116, -65, -67, -38, 92, 13, 79, -58, 6, -71, 22, 34, -60, 82, -92, -105, -1, 121, -124, 61, 56, -118, 24, -89, -28, 75, -55, -108, -19, -10, -68, -66, 27, -104, -101, 63, 67, -31, -74, -72, 65, 22, -73, 50, 5, -29, 26, 22, 67, -19, -51, 32, -34, 111, -66, -122, -70, 8, -51, -58, 52, -109, 106, -36, -17, -38, 7, -120, 98, -57, -100, 19, 92, -115, 45, 120, 54, 78, 31, -123, -109, -83, 88, -76, 20, -62, -11, -10, 124, -95, 23, -90, 71, 79, -104, -21, -62, 49, -43, 96, -123, -29, 67, 8, 63, -99, 89, -101, 81, -118, -68, 87, 23, 35, 2, -97, 61, -107, 62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EMNFAMSQJTUSCYUBODMZKHMGQCIHTWZLQBQVELOXQJXPXHRTYHCJIAAOAMGKVADLWQODDYGRZRYNZGMUBUXIPCCRZJRBWHQKPGNCSFOZPCEYWMYLMTRNNDWIXUELVIPYJPJKQFBTZTLOBKAECUWOHFSOKIIGAKZQKDHNDNVZFDRNJGHSLIBHYJVCEYTXNDDSVJZWPEMKTSOKAVGISPOAPVFS");
    tmp_msg_1.plan_size = 38942U;
    tmp_msg_1.change_time = 0.34765433665747414;
    tmp_msg_1.change_sid = 18810U;
    tmp_msg_1.change_sname.assign("RANXWJPPUEEUMJEDKTHWZIRSLGQLZSRXPBYBHDRCVFCIMCTNJXESFWBP");
    const char tmp_tmp_msg_1_0[] = {-29, 12, -120, 92, 77, -68, 113, -119, -4, 28, 113, -42, -50, 39, -105, 33, -89, 115, -1, -49, -71, -1, -115, -49, -97, 20, -52, -13, -96, 106, 82, 111, -111, -63, 69, 92, -22, -42, -21, 59, 27, -95, 90, 6, 90, 39, -40, 30, -26, 29, -41, -110, 88, -24, 5, 88, -97, -1, -17, 55, 46, -72, 106, -116, 125, -100, -118, 104, -52, 24, -60, 25, -9, -89, 69, 43, -95, 86, 50, 72, 69, 52, -119, 7, 102, 38, 85, -32, -121, -90, 113, 40, 112, 107, 9, -48, 55, 45, 107, 101, -21, -20, -90, -109, -101, 78, 50, -55, -97, -2, 40, 6, 94, 111, 15, -19, -44, -113, 2, 115, -94, 45, 33, -46, 85, 117, 25, 110, 108, -65, -22, 67, 80, -84, 93, -113, 66, -119, -55, 83, -4, 67, 27, -98, 38, 121, -104, 8, -66, 43, 126, 72, -64, -123, 47, -71, 33, 118, 36, 90, 16, -30, -105, 91, 12, 124, 67, -9, 100};
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
    msg.setTimeStamp(0.8017715822579062);
    msg.setSource(8414U);
    msg.setSourceEntity(161U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("JCGGFPNJWEQPDEHFIAZOYDHNZUUSPWTWVDLJETJFFMTFUUYRYMFXNGNXJHLYTJLCEGNRMZSTDWGCSQFKBOYEJVBVSFKZLIETBPBBLIAZEHTVPQJLQVBQWOOBVUKVXVXNKCYRBUUOVLYHSADTPYUWPEGLDQSRRBAEROXTORHIHLNGABDWOZZAGIOVXTZMCWYPMHQZDCR");
    msg.plan_size = 24180U;
    msg.change_time = 0.8371909583857391;
    msg.change_sid = 8740U;
    msg.change_sname.assign("BUMIBIAFUDMCSLEGAOLQFATLTVUDSQNVNQRJXUPHKATVSAXDVIKPXRBTWHEWVKFFUDBVYOUTBFGGEZSHLCUWZCF");
    const char tmp_msg_0[] = {123, 86, -15, 67, -96, 35, -33, 77, 88, 82, 14, -79, 60, 94, -114, 0, -66, -72, -87, -49, -31, 15, 72, 79, -99, 46, 102, 92, -93, 101, -29, 113, 97, -88, 77, 1, 89, 43, 114, -112, 31, 85, -72, -114, -116, -65, -101, 101, 119, 8, 16, 99, 103, 84, -52, -117, -125, 1, -31, -49, -113, -7, -106, 52, -103, -56, 38, 119, -6, -115, 33, 73, -30, -30, 8, -86, -67, -79, -32, 43, -57, -82, 82, 12, 25, -60, -35, 33, 34, -84, -48, -12, 54, -89, -6, 108, -25, -122, 4, 31, 116, 70, 122, 102, -65, 92, 64, 85, 3, -97, -81, 87, -109};
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
    msg.setTimeStamp(0.1951529623483037);
    msg.setSource(13160U);
    msg.setSourceEntity(90U);
    msg.setDestination(35662U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("CBRGNMYVDDWODTQYITJVOOTCSFHOKCPKQVCPFXWGHVDIOWFQMEAXKFKQJRAKKZZGBYGFGOLSXNPYVOYCPHLPHEXNEUFRHXIUADMREIRRGSETCLBLLICZUNWSKJDJLTIDAUYCJMXAWPIFBYYQQHKMWXTPFABZKSAZUANYPTUNUTERVWMFAVIJDZBMGTGOHELZERDBVUQWX");
    msg.plan_size = 52392U;
    msg.change_time = 0.2806309272460503;
    msg.change_sid = 57879U;
    msg.change_sname.assign("YUSTHOYBALZFXTNOONYWCTHVDAYGBZGAKCTRKCWOWRVUVPWUJEKDMYZECKCLUMQSOURYLPNOMXUOTKUUVZSAADNYFZKSZNEIWSFMWHBGIHCXDMHWLFNDEJTLPTVFAEABFBJAPYMPTBRPKJSQC");
    const char tmp_msg_0[] = {123, 30, 75, -50, -56, -16, 125, -106, -100, -25, -93, 86, 105, -18, 64, 65, -61, 111, 65, -52, 100, -74, 106, -2, 93, -29, 70, -125, -11, -20, 11, 87, -97, 116, 27, 7, 26, -15, 75, -16, -42, 13, 26, 26, 86, -73, -70, 6, 32, -41, 97, -120, -21, -10, 95, -73, -78, -71, 98, -13, -113, -9, 23, 3, -52, -72, 0, 12, 65, 97, -120, 24, 66, -87, 58, 101, -26, -27, -7, -39, -123, 67, 83, -33, 47, -8, 3, 114, -16, -62, 102, -105, 101, 27, -76, 8, 93, 4, -15, 105, 57, 55, -97, 40, -11, 121, 111, -52, 26, 52, 98, 9, -97, 72, 34, -81, -25, 99, -62, 56, -12, -128};
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
    msg.setTimeStamp(0.7648475413258625);
    msg.setSource(25250U);
    msg.setSourceEntity(243U);
    msg.setDestination(15606U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("JODAQLPWIXUDSKBQKAHERVMOMJXSKGCGQPFGRQHOBWPTQNQUNAPSBCLEZCVBXVNZIFVPGSKDVLQNBEVUPIDLLYAYTJWTGMJPBTZAXFRFBNZYDRMHEXLFUUJWMDJYKDSZSCOGCSWDHYTYYCTUBHINEDGOKMHAOUZJVKSMX");
    msg.plan_size = 48638U;
    msg.change_time = 0.4191292061844719;
    msg.change_sid = 23792U;
    msg.change_sname.assign("IEIWLBHGWMQELEYJDKAQMCGNR");
    const char tmp_msg_0[] = {106, 92, -92, -10, 5, -119, -115, -27, -67, -8, -15, 53, -80, 46, 90, 27, 85, -97, -103, 113, -32, -17, -43, 29, -112, -4, -70, 30, -86, 50, 3, -113, -31, -49, -99, 67, 85, -95, -68, 32, -53, -113, -115, 116, 70, 10, -5, 123, 10, 105, 43, -72, 83, 89, -97, -51, 58, 65, -96, 99, -104, -94, -16, -103, 111, 13, 32, 124, 111, -61, -42, 42, 4, -2, -96, 93, -23, -60, -82, 22, 63, -97, 3, -66, -29, 31, 45, 18, -19, -3, 94, -116, 34, -112, -25, 18, -40, 90, 123, -45, -127, -114, -96, 65, -36, -54, 11, 119, -35, 42, -43, 0, 41, 63, -65, 63, 104, -24, -55, 27, -65, 24, -86, -86, 98, 103, 89, -27, -104, 23, 1, -48, -19, -16, -5, -60, 50, 24, 82, -32, -109, 64, 42, 35, 114, -100, -93, -79, -25, 124, 70, -103, 116, 101, -93, -54, 105, -45, 11, 45, -28, -81, -91, 108, 105, 72, 66, 76, -41, -86, -44, -79, 76, -13, 108, 111, 19, -84, 14, -110, 24};
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
    msg.setTimeStamp(0.720731285188882);
    msg.setSource(65164U);
    msg.setSourceEntity(78U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(228U);
    msg.type = 161U;
    msg.op = 179U;
    msg.request_id = 36267U;
    msg.plan_id.assign("LFCHYJGDATBVHNNGTHFDDTDDVNGEBBHWCPALAICXZPXFIIHKSOMAABTNKYWKDYHDWXTNOVFGRB");
    msg.flags = 64103U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 45583U;
    tmp_msg_0.lat = 0.14989400133534125;
    tmp_msg_0.lon = 0.2710159988398767;
    tmp_msg_0.z = 0.041717218548875445;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.duration = 32659U;
    tmp_msg_0.speed = 0.4186747048839542;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.type = 234U;
    tmp_msg_0.radius = 0.5234472397136408;
    tmp_msg_0.length = 0.799228544251568;
    tmp_msg_0.bearing = 0.43681690283022256;
    tmp_msg_0.direction = 22U;
    tmp_msg_0.custom.assign("NILYJDKSWHZLHWASHC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TIALOFUMPUCCSVXWNPRHQ");

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
    msg.setTimeStamp(0.3848400614292984);
    msg.setSource(30338U);
    msg.setSourceEntity(227U);
    msg.setDestination(23199U);
    msg.setDestinationEntity(139U);
    msg.type = 59U;
    msg.op = 139U;
    msg.request_id = 50110U;
    msg.plan_id.assign("KFMHYMOCDITBONXJQWIYKNDKJERUKLXRLKFPEWGAMDVPCZDUYHTBXHGEVIYXULOWHHBMABLJQLZSVFGUUHHDHMUIQCYFWVVCODZBCOAZJFSEOZUIRDVSXITXQEYYSQELTYBIKJKKTBAXVACMCGPNONBAIAQQERUCSRHJNMSZSDWJSKNPTDAZMZWJRUTWFZCRZILFXNTMGHPANQVOW");
    msg.flags = 38634U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46874661303810283;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OQSVKSXQFGSHCTILIDACKOCCZVDIVPATWKJGMPBXBAYVHCIFDFFEWSNORQNJSGNLGRPOWTAHXVTKOLWLCTEEWULUJDJGFHSQVHLNDPJXAZPZQZDESPJCMNFRGXQUBJFQZNHTEJIQUYPJWQGMRLIJNTMHBFKCLHLMISGAESXBBUDYNDIAXR");

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
    msg.setTimeStamp(0.41566704290078194);
    msg.setSource(45693U);
    msg.setSourceEntity(54U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(134U);
    msg.type = 188U;
    msg.op = 239U;
    msg.request_id = 53046U;
    msg.plan_id.assign("BRUULMYDSOKPGUDXHCXAWYCYYDDISTCZMFTMINKAFANGAEODUJNOEMHUEVRFT");
    msg.flags = 61914U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 22U;
    tmp_msg_0.period = 2683108723U;
    tmp_msg_0.duty_cycle = 3971889179U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VKGUOJSWNXGDVWPUJSIZBCLVYFOSNKYNRZQOHJVCZEVPMECABLYQXYNUTYONQZCLQTKVWBMOFMILZEBXTWTKERAZVJESADRSEGXEUIRTJYGMNNHNJKZKWIQLAJFDWHSCRTPMQUVQPPBLHFCDDMHOEFUCARWBQNMRVRCPMPYAFKHBEHFKQGLVXXKYIBJHLUXIAGDSHMOEQCBGTTWXACJPOGGZJDZXTUWKWUSGD");

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
    msg.setTimeStamp(0.7724722175440687);
    msg.setSource(57381U);
    msg.setSourceEntity(106U);
    msg.setDestination(59664U);
    msg.setDestinationEntity(163U);
    msg.state = 150U;
    msg.plan_id.assign("QFFVHWVNNDILIQLOQNZUHVGZHUEMK");
    msg.plan_eta = 2100896089;
    msg.plan_progress = 0.2730738734369491;
    msg.man_id.assign("YXMOVZKANVFIQELDGZRHQFGBRUG");
    msg.man_type = 32893U;
    msg.man_eta = -516824538;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.8288946383508896);
    msg.setSource(61492U);
    msg.setSourceEntity(11U);
    msg.setDestination(53248U);
    msg.setDestinationEntity(22U);
    msg.state = 14U;
    msg.plan_id.assign("RCWBARYFIADANIVZMCVLQNQBSDPNXRGPYPYCGROLGWDTPJJICYDBEYMFXVTXEJBTFOVSCEEKUHZSZTXNNWRLKKZUTOMBEFVZNHMFDSDIUQAUPVJGSROQWQIZVUMNKCDLQGHKLIXFBSOLCHQLUKPAO");
    msg.plan_eta = -1184825243;
    msg.plan_progress = 0.1335517089199224;
    msg.man_id.assign("WZFIWYVEMYPFRC");
    msg.man_type = 64997U;
    msg.man_eta = 531302174;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.32888753369102386);
    msg.setSource(4428U);
    msg.setSourceEntity(250U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(81U);
    msg.state = 79U;
    msg.plan_id.assign("XTCEXQUHCYPHDBJXFUAPAQLTWSVYKGNWDMPKBFDWCYZUGVQSBOAOACDXMARYKUFELLBFLCBBHTFLXRZANBFVYTVUJGNTGH");
    msg.plan_eta = -1995063641;
    msg.plan_progress = 0.9276753873089499;
    msg.man_id.assign("ZPNLPQXQAJFHROYJKIGVBJVUVKKCNWLGKVJIRIIDLHZPERMVKXOWKQBGJPYHFTOCEMYJZTXFDNMWDZCBYWMEPSOBZJTQOIPAKAZCGLZSBTTICXUIXQNJXNYMSFXSXPBOWHAINDLKONXCAJODMNCVZPWP");
    msg.man_type = 44590U;
    msg.man_eta = 1474050841;
    msg.last_outcome = 36U;

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
    msg.setTimeStamp(0.7222406701099346);
    msg.setSource(48388U);
    msg.setSourceEntity(142U);
    msg.setDestination(8697U);
    msg.setDestinationEntity(245U);
    msg.name.assign("MCXBVIQSDUUGFMRDQEKYJWEDJNYOPHAKMAWIWYDUERBCGNVIYKTEXZNWSACFYHGVRVHFJVVRHOG");
    msg.value.assign("BFIVBGKQATODKAOMYTZWBXGAZZMNAQHGEZYHGBJXHQEYICCXLWTWAYENOAVRYVAOTSUSLQSWDKTDIVOWFXMHUKPYQDRHKOIPBSCFHMMVXDGJQVBFKOMAWWPZEOFZVXHBGGOQPMVUIPJYP");
    msg.type = 123U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.48778709474296866);
    msg.setSource(44285U);
    msg.setSourceEntity(183U);
    msg.setDestination(19029U);
    msg.setDestinationEntity(222U);
    msg.name.assign("MEUTDMRWFBW");
    msg.value.assign("WCUXGBGEHFLZHWCYZFLOCQSKBVATGJAHHKOXMPIPQZSFDAXVJLTODELTDSKQMWFRUDZGKGSIIWRROCNFSYBXUMLQDOHUTIWDOQKMPVKHALXRMUARCFMQFBVWQVIRPVTPIISAGASJPPEMOEWTSLENHJRZY");
    msg.type = 33U;
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
    msg.setTimeStamp(0.3097214452164124);
    msg.setSource(41938U);
    msg.setSourceEntity(2U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(99U);
    msg.name.assign("BCTAJGLYEEEAQKFTZHGHBMTYADCIYLZGNHJKVODTXXWIODSVMIYFRIWWWJPZBBNETHUXRMRFCAPPEUIEBPQZOBXLKASNCSQOUXLABHDIAOPAPWAMKOQN");
    msg.value.assign("RNNVYCQOORALIELIUXJEUKAWPHZJYQCTCXRJICZVWCJBYSJAHXRBANIUBDLVSEPMDNRHXMXHTEMSAQLPHGPQMBGLZUTGMSDCIUHROKFJWEZTNZAIZDIVWAKFNPQREBNHYRWGGOHVWQTTUQQA");
    msg.type = 82U;
    msg.access = 251U;

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
    msg.setTimeStamp(0.8673669979948326);
    msg.setSource(53881U);
    msg.setSourceEntity(48U);
    msg.setDestination(865U);
    msg.setDestinationEntity(206U);
    msg.cmd = 57U;
    msg.op = 16U;
    msg.plan_id.assign("OKWJRAXDMSDQHXVBXWYHQGVMJWGLRJB");
    msg.params.assign("GLCCOCITRSFKUPBXBMRSEHGYEAVYFEGAYPWMDGUTZMYOSXLBULWPTPXXXAEVXKUUHIHBQVEKVKOAWWAQFRMYINDFVIHYZFSZIKDFTXMTNHBZQJQYUYOWIEZLJQTUBNIGSVDCUMSOOFKQARVACSNMPZDMRRGQBKWXSSLAMNRIXTNJKGBWOCUVRZDZJNPVRVMQDPHEFPQLWZTEHDJHYJOCDCWSWALJOZLTPIPQJLJNOLGNEI");

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
    msg.setTimeStamp(0.556775532562886);
    msg.setSource(28181U);
    msg.setSourceEntity(36U);
    msg.setDestination(6373U);
    msg.setDestinationEntity(249U);
    msg.cmd = 242U;
    msg.op = 151U;
    msg.plan_id.assign("EQODXLFMDLSUUPHFKOORMFGQYGUIXTZGEWTCPKIHFNADXACDKKBTYWTZJOSKEUXVWXNAHHTGUNZICNWAHJMPYZXXQLHR");
    msg.params.assign("TWZMFFJZRUDXBGODZMKIXYSKJLESOMVZOHLJYXNKVQAIXFUZUSEAQTVNNP");

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
    msg.setTimeStamp(0.24301332902260386);
    msg.setSource(47277U);
    msg.setSourceEntity(192U);
    msg.setDestination(51119U);
    msg.setDestinationEntity(45U);
    msg.cmd = 0U;
    msg.op = 195U;
    msg.plan_id.assign("SIFHGVEOAAJWNQQZPOEQEHATQWEJOVDVHGMTWNLPKQIMMMMVSAPCYFFWUDHDNYYWTTVJRNFDBZILWAWXKDPMPGZIKYECGKPQGSPTXCSRPQFJFRXZDNOMIKOQHOGNMCYTFUNTLUEDSZZICCKLAZZGKARDCWXGXSMXFZVBSLRPSA");
    msg.params.assign("KVHNGYWOLEWIIXUBXITFLLFEJYOMALZNYVGWJKMNRTKMFADICMVZMYTHPJJDKQWPHIWIUVPHW");

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
    msg.setTimeStamp(0.08161567307277062);
    msg.setSource(53152U);
    msg.setSourceEntity(217U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("HHGFTZAXZNMB");
    msg.op = 92U;
    msg.lat = 0.6507607569638367;
    msg.lon = 0.6482518415434403;
    msg.height = 0.9499903343104855;
    msg.x = 0.5810196745771692;
    msg.y = 0.19938072530677453;
    msg.z = 0.20486481563574999;
    msg.phi = 0.8935105854223284;
    msg.theta = 0.6861306161933212;
    msg.psi = 0.23923849718900025;
    msg.vx = 0.54702444670723;
    msg.vy = 0.3087018926077255;
    msg.vz = 0.8315077757036753;
    msg.p = 0.22730671507389522;
    msg.q = 0.6220697216331851;
    msg.r = 0.2394463395970836;
    msg.svx = 0.39008443853701835;
    msg.svy = 0.16486968096748755;
    msg.svz = 0.23457815384533431;

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
    msg.setTimeStamp(0.10246235780048607);
    msg.setSource(11629U);
    msg.setSourceEntity(12U);
    msg.setDestination(15334U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("LRMBMLRDLEXMNBCCOUS");
    msg.op = 147U;
    msg.lat = 0.18190022594204658;
    msg.lon = 0.0882230216508525;
    msg.height = 0.21714575641182043;
    msg.x = 0.7193707598493443;
    msg.y = 0.02365055318113074;
    msg.z = 0.984787295917383;
    msg.phi = 0.5995117836708974;
    msg.theta = 0.019445909085877178;
    msg.psi = 0.3713860477929848;
    msg.vx = 0.06787224734537234;
    msg.vy = 0.5719871405148966;
    msg.vz = 0.7327787306965462;
    msg.p = 0.8392917261733152;
    msg.q = 0.3915991714031384;
    msg.r = 0.824404318417233;
    msg.svx = 0.941057216135288;
    msg.svy = 0.8678969791940874;
    msg.svz = 0.9142599347186353;

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
    msg.setTimeStamp(0.22880703229353738);
    msg.setSource(1900U);
    msg.setSourceEntity(80U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(111U);
    msg.group_name.assign("RQPYTYNXMWAYUBCPBZVBQGCCQWELPFWVKIYKLDDFAQBOKRMURZYKIAVHYNKLMFKTXSWBOLCVEJHWASGTWWQDQSXRUMQWALTSINRJBFHLCFHYTDCGXXGFDELITINZNFSBRAJBSCAVMGUCSXHVEVSYIQUAMIGBPNDOPOVOJ");
    msg.op = 61U;
    msg.lat = 0.29706476836107454;
    msg.lon = 0.18540061401146357;
    msg.height = 0.5457897158493727;
    msg.x = 0.09090588000970956;
    msg.y = 0.3535050217421365;
    msg.z = 0.025229151632855218;
    msg.phi = 0.8691994008299958;
    msg.theta = 0.0490414611169917;
    msg.psi = 0.8245012465154753;
    msg.vx = 0.31555734461373897;
    msg.vy = 0.03695155783706061;
    msg.vz = 0.5439342027411354;
    msg.p = 0.2064896685423998;
    msg.q = 0.5835188296015319;
    msg.r = 0.3428198417949796;
    msg.svx = 0.6003256325980274;
    msg.svy = 0.6156371342056552;
    msg.svz = 0.8441058973475677;

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
    msg.setTimeStamp(0.6577952283900793);
    msg.setSource(13650U);
    msg.setSourceEntity(27U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.9001367400937433;
    msg.lon = 0.691365506950739;
    msg.depth = 0.3960301016419703;
    msg.roll = 0.2600191917074809;
    msg.pitch = 0.49908835214212477;
    msg.yaw = 0.5749423930840208;
    msg.rcp_time = 0.8775199603544129;
    msg.sid.assign("YKJUGSMAZXCBVAYCFVSUTLZQJKCGDEMPO");
    msg.s_type = 13U;

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
    msg.setTimeStamp(0.5220695180726458);
    msg.setSource(37569U);
    msg.setSourceEntity(121U);
    msg.setDestination(59757U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.05143669241752136;
    msg.lon = 0.7522837311135107;
    msg.depth = 0.9070767099068983;
    msg.roll = 0.5400936047812114;
    msg.pitch = 0.8231429168612184;
    msg.yaw = 0.4687704510037435;
    msg.rcp_time = 0.06830376135008909;
    msg.sid.assign("FRQDPAJNNSSXJVZGN");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.5864053641879418);
    msg.setSource(16733U);
    msg.setSourceEntity(175U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.9578630478881471;
    msg.lon = 0.2230568230572112;
    msg.depth = 0.2911130519602042;
    msg.roll = 0.2273091729802631;
    msg.pitch = 0.3981451824917709;
    msg.yaw = 0.7532804636895748;
    msg.rcp_time = 0.4199261138024465;
    msg.sid.assign("HDGSRQPGWNDJVYZZAUFRHPLXVPNGRABYNAZOOYHXWMSYFZDLZYIUNEOBJECHGFFJPOCZEMYLKYBAGWAQIFBNXPKMQFGPTJQBRVSFIUETKHXUKKCPZ");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.09488219384156393);
    msg.setSource(57531U);
    msg.setSourceEntity(60U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(236U);
    msg.id.assign("TDLIXFBKQRAAZYMQMEEWEJHMVJEOFGAVVVYUXBTFHNZJXCWJPCSXCLERUWVQSNXIXNSHLDZTKQIOVSLZOWYHDCLZPPSUEXSMTZBROIIWRHWQYUHEABBCJNMUDWCYRCLDJZDGAKFKMAAPQVBCMKMTODNIZNPPOHWKRUGIFNZCJUYDZBGQRCETXVKLTIYEJYWPQGYEHKBQTARURJRADT");
    msg.sensor_class.assign("OLDOMSDQZKWKQBQYDGRILUADIPYUHMUVFXAJNHVEZCMSSJNGHWMZMRFQXRZXMEKWNFYPRB");
    msg.lat = 0.712209997196121;
    msg.lon = 0.0483015243021484;
    msg.alt = 0.08445242904316586;
    msg.heading = 0.5175978775604846;
    msg.data.assign("IDBSXTMVBPDHWEWSIBMONDKGGLYQEFXZZLMOAGRZJNUKECQOUALCZSTYNJCDLLWGOOCIMUABOPVPVCTYGFPPPSFQXNXZGRYNAOXMVLUIKZELFBVFXDKFJRBPBTFTHKQXYRBYWWWOAZMNUFJGTVNQCVUSYQRVAXMQHYPREUUKGXEDEYQEIDHTWAODMKLCHGZSFKSPMCAJWNEVPIJCWHU");

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
    msg.setTimeStamp(0.5933274300255332);
    msg.setSource(15960U);
    msg.setSourceEntity(89U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(107U);
    msg.id.assign("TOSILKPYROCCNUAMAPTEGQJZAXHAYBVHHVQBFQYXMBYPIURTFIJJHXUYRTWXIQEAJMYDBKUQNOLNORDEFHQRMBCNGTGNMNXVAAZGDQCUZYFSEIVGBPSESZARWVSISL");
    msg.sensor_class.assign("IVXJZPLEESYRDTTYOCXLDHIOMWVGQZXEKYBOJEYIDJGBPRDBEFRWJIMMQXSNKMLSJAWUVOCSUQNRWBTQMZDDBHRMGPVCHHTKVTCXNLFZGAFMKR");
    msg.lat = 0.3885647744600086;
    msg.lon = 0.7774879022593938;
    msg.alt = 0.840899194094786;
    msg.heading = 0.34327782472334434;
    msg.data.assign("PGAQEAOTJXWRTBARFLLVLRUGLTCXEDOCBMZHKSNMDJTITPUFVVGCWNYKDRFDBYKOVKFPNRJPQXJSMHBWQLZWRKSATHVNHCYAMZUQCYQXFZNVKJUTLTBRNXBSUIXXFEJVJKMJYWLYEQNWACNILKDBPDMSOPDQZSZFFNUEIHQFIGEGDOXPBRSOWGH");

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
    msg.setTimeStamp(0.8861690737917329);
    msg.setSource(7001U);
    msg.setSourceEntity(230U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(11U);
    msg.id.assign("KSJQTUGOVSLNXKRDVURXVFGXLJSOLPMBGTAQTJZFKEKDXHXIHIRMGQCGZBBANXKZMYMBNKPUKOALNTRADYRFFPAANIMEMUTDSDMLICJDBWLBQHHHGSHFOYQPBVUKIPLYOJCUMNVAIEYRTTLWFWCTZCKJJECSXOOWDPZPGIQHVCYDLZSUHHEUCEWUWVNVFGZPEKVJQPZMODCXFWNFRSEELROJYHAYNGZMSJCQBSP");
    msg.sensor_class.assign("ZCWOXCRYCVZTMGOJHPOOUCAIJMVDAJIPQDLGYUILXBGRFZPUHWPKGYOAEZTNHRRDCWXZOXQUNAZVLKBZTFXLMZJVHCTTZKRPIJEXEJRWGDYBPEEUSVOBHCPWDJIADGBSKFFFODKGDFESYWCALSUPMNUAVSWMGEMENHQIGYSBJUQLHTNOPINRXIDTSLNEDUCKQJRNNAIAXBEZJKUVXH");
    msg.lat = 0.3735773705771558;
    msg.lon = 0.8827032253590849;
    msg.alt = 0.5603775632077951;
    msg.heading = 0.19725224879754255;
    msg.data.assign("THLYVNHKLGIKDUEYPVNHQBBEILFLQIXPRCAFWSMJMUGFWLVPUHBAQBRCROJZWJKQDKYSATMAYMNYBGVPCIKSAKHRTNGESFZYETYDURSUTVWZXEGRTTEMZHVOFUFRVCOKXRJKDQXWUZPRADPQBWEBXZLCMSCGWUIMDTJRNZFAUQJLVCDWQMNLGNDXIGPLKKJJIXVMMYNPAO");

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
    msg.setTimeStamp(0.09656226201930052);
    msg.setSource(5902U);
    msg.setSourceEntity(77U);
    msg.setDestination(52452U);
    msg.setDestinationEntity(160U);
    msg.id.assign("OAGSQQZMPVFBMILEVTKQWKSWBVUIRTDOGZFFQAUIPTATPOPJIRRHGHQSFGVDEYJUUXGDNICYUSDEHCWJCDBIDFJSOZZTGFJIRXSBTYHHJCWKZKEKCJYUEIJOAZSOVXALHANYCACPFZIX");

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
    msg.setTimeStamp(0.3577763996679826);
    msg.setSource(30524U);
    msg.setSourceEntity(248U);
    msg.setDestination(20270U);
    msg.setDestinationEntity(112U);
    msg.id.assign("GXYYKOKNMEDPAAPGTTLPGIVMKZZFWTCEEXZARJMKUIREKOASMMDNVDQCFOMOLGLSCCNRVWSWGBPPSWTFJWIQJMTIICDGNHPBJDJACYLJIPZOFFAQSH");

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
    msg.setTimeStamp(0.585337855607054);
    msg.setSource(65191U);
    msg.setSourceEntity(26U);
    msg.setDestination(62739U);
    msg.setDestinationEntity(214U);
    msg.id.assign("GEYIYDHLTMQCTMRTARFOTOSDIQKKLTALXRHPKWFZILUVGHMNYIBUUMSEUOIOSHYKGQQKZLGINWBYSJLNSTMTRVCZVVNRSNYJMUWLQREQRBQPJONFLCYGPDHXBWDSMBOEWFAALTGHXKCXAXFTWOAHIMZZQJUXCRZIBPVSXQCJNGPVNPHJCURJDDPVZVXSEBQDGAFP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WAJNHRCTJJKBPCITJOAYAFICYNAOQHYEZSUCKDZYTVRKBKNYEEEXGECQJFSXVMOGDIYRIIUVUJMBSRMNHFLKHDFPAIYONDMQPPEMQHSEJQDNXDLTSIRHABWTUDCCAKY");
    tmp_msg_0.feature_type = 92U;
    tmp_msg_0.rgb_red = 223U;
    tmp_msg_0.rgb_green = 110U;
    tmp_msg_0.rgb_blue = 32U;
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
    msg.setTimeStamp(0.010514461927203289);
    msg.setSource(12316U);
    msg.setSourceEntity(107U);
    msg.setDestination(14838U);
    msg.setDestinationEntity(25U);
    msg.id.assign("VMFZJNGIXBGXICETXZNCRNAGHTVUUCYMXBJCAGBLVNIRYKFZCJSLWXJETSGQIDGHYSQDJEW");
    msg.feature_type = 18U;
    msg.rgb_red = 0U;
    msg.rgb_green = 11U;
    msg.rgb_blue = 86U;

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
    msg.setTimeStamp(0.12593704724306032);
    msg.setSource(38019U);
    msg.setSourceEntity(159U);
    msg.setDestination(9701U);
    msg.setDestinationEntity(61U);
    msg.id.assign("GCVWBLRJWCMEUKUYYRPYNBFMXHIREHFRURMQCZAOFAWYHDGDIGNNELVCKOSFDDTIURNJWLWVREHEXWIMKWHJJVGYYCBOPOJSYMGWTSDMTHQHYGKCBIZLQMNDFGIBKPIODQTQSZRPVNMFAQTSFBSZKXSTPNZSQXAZQUQEBTXSEAGDXXQZKVXCSPUABFEHOAATXKBNUJ");
    msg.feature_type = 83U;
    msg.rgb_red = 198U;
    msg.rgb_green = 201U;
    msg.rgb_blue = 239U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6984362651592806;
    tmp_msg_0.lon = 0.32603252879571765;
    tmp_msg_0.alt = 0.763210978836885;
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
    msg.setTimeStamp(0.5864004349560534);
    msg.setSource(56880U);
    msg.setSourceEntity(227U);
    msg.setDestination(10721U);
    msg.setDestinationEntity(102U);
    msg.id.assign("AMDBFJTEBCJEZQTHWZSFRWGOHXZMOIXABEMMCBNDDQJAPKWTCLVBIEFTDETIIGKRGNRGXHTWGQFVTTJFSDZVNLXGQPRUJPHHMABFXBYRXVJOSRUOVUIHMVKLTDBMHLGFIXLCQNIPZPAWGKYLPZKSYYU");
    msg.feature_type = 137U;
    msg.rgb_red = 32U;
    msg.rgb_green = 105U;
    msg.rgb_blue = 176U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.061680149634199655;
    tmp_msg_0.lon = 0.6188305903716822;
    tmp_msg_0.alt = 0.5305939994500493;
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
    msg.setTimeStamp(0.8821012048722311);
    msg.setSource(40478U);
    msg.setSourceEntity(8U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.2535059643135241;
    msg.lon = 0.22920054447540716;
    msg.alt = 0.7328580275115105;

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
    msg.setTimeStamp(0.2549392453985113);
    msg.setSource(23797U);
    msg.setSourceEntity(153U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.7155254144665065;
    msg.lon = 0.10660858558421649;
    msg.alt = 0.7708272448802653;

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
    msg.setTimeStamp(0.03598412711672372);
    msg.setSource(8905U);
    msg.setSourceEntity(221U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.08444541173901454;
    msg.lon = 0.37375619911410174;
    msg.alt = 0.912711401603981;

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
    msg.setTimeStamp(0.494924580673041);
    msg.setSource(51910U);
    msg.setSourceEntity(52U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(144U);
    msg.type = 102U;
    msg.id.assign("MUBPJKAEECTNRZBCQKTHDYERSYTLIKBWDYNUWFGOYCANJDVSSRMVDPLSYIKHMFAOYRGTPROINJOWCPBUIELVCDEIPFGVKUIXYEKBFXQWXXEMHTLLTAC");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.928465466669385;
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
    msg.setTimeStamp(0.9439090722920661);
    msg.setSource(33281U);
    msg.setSourceEntity(167U);
    msg.setDestination(33537U);
    msg.setDestinationEntity(138U);
    msg.type = 253U;
    msg.id.assign("SQTBFUSXKXNNHNPDPHKBGEQQWZFMXJWSKDUPBOISAKGPHHWQGYTHCYLOVOHTFMQAQVZEREAQWRJXDFBACYRGIFVCLUJYPCOGNNTLTYXYLNSDVUNWEDLQPEVJHHALRKOIEUMVFMREBUOMGLTJ");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 230U;
    tmp_msg_0.system.assign("EWMUOYJZKMTDNPTHJGMXLSDPBTTHAWGXG");
    tmp_msg_0.range = 0.977096879014389;
    IMC::QueryEntityActivationState tmp_tmp_msg_0_0;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2233826656716078);
    msg.setSource(16684U);
    msg.setSourceEntity(105U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(4U);
    msg.type = 13U;
    msg.id.assign("VBAGXFBCKOCUPQDDLIOIQSWQXXBJHPGKGUSXUREYBEKDFCSGRRVCHIYVDQLRWANRWPQQYTSNDRGIGKBDMZLYUXSOIPXSXHGVACHNZNOZLMWLFVFPDDINXKQBZLIJEEJDSGNNVXTZTRUVPASVKFOJAHBWEIJKPBLEOHNMSGCYHTZYZZWYPLPIMYMFRUJKWSKTMYONFMAULMAD");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2319905446U;
    tmp_msg_0.state = 175U;
    tmp_msg_0.error.assign("FNVUVLWLFJKEIYDRNXXLOGZUNAOEELCIIXOIBHPUTPKOVNDZVBECGGCXD");
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
    msg.setTimeStamp(0.2477962075960506);
    msg.setSource(16619U);
    msg.setSourceEntity(241U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(235U);
    msg.localname.assign("CRBZIJCHDUFCBDPYYVUDRJIZVXDMUWJCKDEGXANBVHRSLTBIEGSYESLXSRPTYXQHZETNBNUGFAIGZVVAWAWOACCKPTNMXNCVVLTAEPDXLHEGZZQRU");

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
    msg.setTimeStamp(0.3755300839681892);
    msg.setSource(55648U);
    msg.setSourceEntity(157U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(117U);
    msg.localname.assign("RGDKIVNZFXHYQVNEBYCGLTNXDZWJARBTUOTZZFSPFAJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JDBVNGYMPOGDZGHRMJJBTIPIGXSWELJIWWETFEBEIWLOQMSNPXERDNISKBCOYLKFROMRTFABMXNQTUNFVRMDIHQNFFZPIKAPWPGCZZPHFLFJKOD");
    tmp_msg_0.sys_type = 0U;
    tmp_msg_0.owner = 1777U;
    tmp_msg_0.lat = 0.36035628098080896;
    tmp_msg_0.lon = 0.9523484480549949;
    tmp_msg_0.height = 0.6490744949992469;
    tmp_msg_0.services.assign("EJIBVKNCJJWCPSKHNZFPHMJRSTCEMDKTF");
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
    msg.setTimeStamp(0.8513752815355418);
    msg.setSource(39332U);
    msg.setSourceEntity(10U);
    msg.setDestination(64112U);
    msg.setDestinationEntity(210U);
    msg.localname.assign("GDLJPRFRCNNNWKECKCSQMAASPDLZLSXUBWUDYIJQZBJGMAYZMHNXHGSZAKOIKIUMYXVWEFZQJLNGTHXQTSBAMYSIDWGEHYAQPNUIVFFEMDQPEXQUYKRVH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ORBFFBKHDBENODLSXLLTVXEJDNJJUDQRWEWNIYMOYKJSHUDLBHCUYRAGDJYIVUMXSLQNOOXHTPUHKFARSVWCISDVLNMFSKTQGDNSECUGYCCQTLLAALXVGNNZSKIYDCAPSOSXJ");
    tmp_msg_0.sys_type = 96U;
    tmp_msg_0.owner = 6271U;
    tmp_msg_0.lat = 0.1904999895135947;
    tmp_msg_0.lon = 0.7411403155149939;
    tmp_msg_0.height = 0.8692378651635706;
    tmp_msg_0.services.assign("JVEJYMUNTKAVQGXYMQHTRLCBXZKUDRVUUTUKZDROFJAAZHOORMDPCVZMCICNUEYIUPYCSMXEARMOLFHKTXQFLMSKEZGTIGSRJSYZVAZCQGDFNCGZOQDBCDNOQLJDBLIERBYFWNPGXPSBWISJHNZBTE");
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
    msg.setTimeStamp(0.49567635812366206);
    msg.setSource(13420U);
    msg.setSourceEntity(145U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("DZMQUVMRSWOOAPFOSMLXQCUZSYICJGWIBUNRYZOPSZIEWNWBLKUXXZECVJVMSKVJJGIMKCKPRYSLUHEBROTWFSZAEEEDATVPLYGUNVLTBUHLQOCAJXYTWBPTFTZCFBGAHHQHUXLTISPVJWTEFHJUHKANZKUIEFKIMGMSYLNMNKVHJEWGSYBKONORIBFDNYGQZBLTPLDPRORAMKRVXDFAD");
    msg.predicate.assign("TGYOXSQSFPKAUSNOXWXIITLECINOLHTOSQZWFGAMSZGCNKAEEQAYHNHUMRRZEHVNMTHBZKNKTTQPOJMPQSYRMAURQDHMAHXXVLCSIDVDDCFLGIJQOLULPCOZITOUDJFVBEYBYJTEILGRZWPPSYEIXAYSFXJZXVBQWKPKOCTKQRGHFJWCUFAMUCFDNE");
    msg.attributes.assign("UTKAAAWJVDQOSATBCVSVEHNBLNHSDVEZTSEDXOYCPKGHAHRSYQGZPOPFFKCKNIGRTJFKMYPURTXLFZEUJEVRKJDDYIXPAMZI");

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
    msg.setTimeStamp(0.5816842427041305);
    msg.setSource(64484U);
    msg.setSourceEntity(217U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("SXFKRQIIYPHDTGJVYSLJSZKDAYCAH");
    msg.predicate.assign("RMBVPSVPYXSJWDQQNPIYCELIAHKOVNGLQIUWHMLQQJEZIVTRMTJQCXQPZEBMHUTBHFVVFJJWSCFURMHFYLQKXBATROXSHGFVGROLDUDYNCACGOXWOLNYYTJLONUPWVKBIGMAEABENTRFPPA");
    msg.attributes.assign("ONEOAPQKNPGEDMATNTLXIXAPCTNFDYNOLDOSWDRYUQAHDJICFOCSFLUCUUVYJUXLMRPTBCEJTYNHHWRPQPIZNTXAOSQPBCHVJBZRKIZGEECUWXOLHHVIGGYIVFOWTMSTGVISHLGXEYSSY");

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
    msg.setTimeStamp(0.9593906201273419);
    msg.setSource(18190U);
    msg.setSourceEntity(51U);
    msg.setDestination(41973U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("GRVMKJOWYWZCHQLUEDIQKBHOAWBTFNTTSLSTQKOLUAPOVCZSEQIXMQWIMBNXEJCKPTMGGEBYQUULZCHMJFJLHDSKDPLAHUICNTHJRTVSXHVIMQKRBYCMKGZPXYBEGAWEOENKSODRDDFWQYOIZJVPCAIJUYVYREFOZUVTYLFDFPHSHGWSOXVGZNMRNBLXIIBSUMVZOBFNRZUKXACQPTRFCMDKEX");
    msg.predicate.assign("XRAMGNQQJBCHVCHYDCAFSPHZEUXJUGIZBVWUKZPBLSOMWFDELWTDZEVQWDKRLXYOZASBHCGRMHELKJPAXQZKGSC");
    msg.attributes.assign("SINXKESLKPXUGSWWWCLFAMMZWQSBDLQCDXSIMEFAJYBLOHHMYIAYMPGWCCRGTPPEMKONIJHUELHFGUDPNZUOVTXLZFBRTKQJEAEWULFTNBNHLNYVOYSRVROUJYV");

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
    msg.setTimeStamp(0.25898378487502194);
    msg.setSource(15790U);
    msg.setSourceEntity(197U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(67U);
    msg.command = 110U;
    msg.goal_id.assign("KRZYWDIVSHDGKXOETPHLQFBGVLDFQZWSPFOMYGSXRIBXMOQYYFRPQOCGGUOKTQZRJ");
    msg.goal_xml.assign("WYWUPKTFIHAVKLJZHOSMGXETWNKZREBQZJSCOPPFDWTUYNEEIRQLIYRKIRDPRWGPVLIAOBOFXCYASUMXMSVXSXVMAFGTJTHOQCGZVPQOSVLVKDHSCJFMKFRODAXVEHNQBSMCGDFLBQQLXSIBFBNGIFVEBJTDNKNHNTPPUKBZNUDXEHMIZEDUYCQQUJYYRHPJNMCRQCJLZLUIYOGTXDGCETFETWAIHDGRVYBRAKYWZZKXMOCZSWJWN");

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
    msg.setTimeStamp(0.8047629741804683);
    msg.setSource(22436U);
    msg.setSourceEntity(252U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(247U);
    msg.command = 199U;
    msg.goal_id.assign("UJSPVVZZUDAFXQJKYUKWKITCHXCWLCLYSMPOZHVVLMFZTHTNLEBMFWNBARXOIYGAMERPSLEGIUCXMNINNPBDIBTATGFZEEMJOHNLABPFJLAFRPOULGYDFKKGVWHJRGMQSRVJEHTQQGINDCDHUMRJMPUHJFNBVINPAAZWSVXPDBKXZKJYZPTWQVUZTHUWEFLOLNIQYCS");
    msg.goal_xml.assign("QNADLEIGVVFOSAJAWJKJEBMKFGQGCBYVCTVKMJOMQUGQRXPYSFIBRZTISSTAVZORJEZCWXTFXNPRGNXODUUWHIFSLZFKDDLYZVOQIZVTDZLSJBXFHCICJHQELJKXASSYFNHHPLMNTBMOEZPLDRHMUUQVAAOX");

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
    msg.setTimeStamp(0.47105954984995624);
    msg.setSource(12762U);
    msg.setSourceEntity(247U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(195U);
    msg.command = 165U;
    msg.goal_id.assign("ORZCFSYZVQDFPXBVZGLYOLEJULDECHCBIGKRXOMYFUYDNMNKCBBLMGOWHDEUY");
    msg.goal_xml.assign("PBAOYEFUCRBWSFKMVUTTNBXPNPNKBQQCBSJVOSMMLRVZSIVCUYFPHSCUBGWREFNQTCCUKHMZGGDJMSCFDPXWALDQTNHDTOYSYIENHVPXAE");

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
    msg.setTimeStamp(0.3369449424831583);
    msg.setSource(21172U);
    msg.setSourceEntity(12U);
    msg.setDestination(17674U);
    msg.setDestinationEntity(43U);
    msg.op = 169U;
    msg.goal_id.assign("TVRAOHWLLEUEDCLSFRTCGVJRBNPUOOUWAQUQVBTJXAFWYUEEHTX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KEZUPRMAYXTWCNQAQVYNRYWMNODZPPZRGNTAFLYVAJTCLIVDUBUKPPPWUKFCZQJSAEBIDZIFZAVOMTJCJCDNWUQVUCZSKYBFUMNTDELIQGHIVHRJFISNOAETEWHGLREGYKSXZBMFTODIWTELGSFLUOBQSSKCCXOXGLYFGHU");
    tmp_msg_0.predicate.assign("MQLEHFAIBANPCKYJKHVFRPSEUIPFFZIRXXYQVASOGDBUDKLACVGQYWZEGAWYOHQPSNCUPTOXTNEMIWYROTONHIIOIOMRNXQLDKVARZVHHMSBDGSTHBGTAJBEJRDNAZVNVJCEXYVQLLYXOCAYMCFZVWKCPERQPLGLBFSQXXZDQKPUJWEGUMMKBCBFJWMZUFSDQHLUYXBNNBJGJWPICKHIZAGJDTTRFDCIGFOZMEXU");
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
    msg.setTimeStamp(0.5586827094961105);
    msg.setSource(21166U);
    msg.setSourceEntity(173U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(253U);
    msg.op = 95U;
    msg.goal_id.assign("GQOPDHPDNFRNLJMYJOOXAXJLRBHROBBLCUSFVRQYZHXITDOXXFHURXWCNZAYEMACMZYDMQCLFTSEIUZMJNBXSYSXKDEYKJJFDEEUYWTFPANPVGTGQKMTYOWTILGRAWZPCZUCWANPUCGESPSVCOQQRDIJLLKHDBBB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DHLLXULCEWHSJRUTRLAQTZDRLHIMKNPQMHOHFIDSLAJDUQBWBOMDGOPKULPAADNYGCSWZWROCNKWXKTOEPSHXKNSFIFTQXRZFWPTPXVZZGNMNJXUIRVLWEEJOZSODVPFJSIQQCBLPWPMSNDYKFIFKYXOSRBYHYCIGZHVVSGJQCEZGBLGAXVEUQABPRXUTKAICETGUEVHDFUYXMMTDBBYJGUCNVEZMAKTIWRWJENFQORIYNHACJMKYVAB");
    tmp_msg_0.predicate.assign("BYMDRZXQQQNWONYFLVACFXPWALSWPBKXCZSFPEZAYYZVWTGYEOXEHEBJVGPBCQIKTXHMNZOUWOHZEHKLGJUPNKBWDMRBGMJAMBMAIYATCTQJXCTKQDIRUHBZSTTLVDCZAAMLGBLKYWERZORENYEUOSXNDPRFTKTGWESIICSFXUKTBNDLNDS");
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
    msg.setTimeStamp(0.952995478569147);
    msg.setSource(40519U);
    msg.setSourceEntity(231U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(67U);
    msg.op = 221U;
    msg.goal_id.assign("GUJOZSGKHPQNYWMWHVOTLKBIQEYLRFZYFEDCTQVXAPFVQBZFYGVYDOHBJXZPWQERNLLMWETITDRDXNIERCESUVCLGTXWUTUXPAVXMGXIXOI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TXEWCXMBLNDPQHGQEGGUIJWOUUFXDKRWNIZDJGJMWLIWEWVFVYSHVGEMXQNOELAEJVFRHVNOFNTOP");
    tmp_msg_0.predicate.assign("DCPQDJBTGLZZBOMINSFWTUVPTURPPJKSQCIGSIAQDJMGJUHIIRHEBTRNKUOMBKXBTVOGANFYOTSRDWWGWXHAAVIMYYBBOFUCDSFOWKRSCMQPIALVHLNRGZKQJEXEVHUNWYLMLFEALFCRXWPSKVZCHNAESRSJCGXJKGKEHOQVCLENFXKNQMJJWSAYOOZEMZUWFYXZPDNIOZVXDKQPJVEBN");
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
    msg.setTimeStamp(0.8001544432832031);
    msg.setSource(8480U);
    msg.setSourceEntity(142U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(62U);
    msg.name.assign("YXMFQBEEIRKRQEUJTQKHNNOCJRJDEMLAAVMVXEAQZSFSKNUZOVMXNSIRJTSJNXPLAAYISNQPHFFJLYMTEBBOWTBZYDLVCWZJAGIHYAWTSGH");
    msg.attr_type = 135U;
    msg.min.assign("AWKHLMEYDPSPBBFKFAOYCCGVGYWEMPFIGVLAJNCMMWIPJGMOKUOFANLDTBXVE");
    msg.max.assign("MRIHNGYUOYTHJVUOCWDBKEJPTODZVMNCBSOEYRGXDAAFWNXFTFITAEQYELVPKJBRHZNSUT");

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
    msg.setTimeStamp(0.682741202873515);
    msg.setSource(39441U);
    msg.setSourceEntity(203U);
    msg.setDestination(32074U);
    msg.setDestinationEntity(116U);
    msg.name.assign("BQAVBTNTIMVJDQTSIANJQPLQKK");
    msg.attr_type = 99U;
    msg.min.assign("BUWVPGZONDOVTCWCRGIFUV");
    msg.max.assign("VFEJMKYQGBAXZHTYREPBVYDWFEERDEIMOPSMXWFJUNSXNMYOIKGYOQLWIIEOVQJCGADLXPPOXUOXLJMOUJWNEOZEBCVHGHVEDTAOKSFLFYZTBTXQZUNLIRFSIKTUKJSKMWRHBDDHFBWSJQZCPXTUZJGUVDQBEGBSCGIUANRIWOSCFQSMH");

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
    msg.setTimeStamp(0.08731305922069055);
    msg.setSource(6299U);
    msg.setSourceEntity(199U);
    msg.setDestination(43936U);
    msg.setDestinationEntity(19U);
    msg.name.assign("VUOBKDFTYDQPMQXCIEITSJYXAMSEANVCHKBLGNNARJKGELLNMNKYCQXSEBXWANVZJOVZIJWCTZZLOTPAZEFKMEUCHRTTHNYPFZHNSCMDWJROBBGKQLQYQBXIOELPECARSJPAHRTZKGWXSICWDULLGRZDEDCHSHSQBGVYUKJJVFGLFBTVRDBPIGPYXTW");
    msg.attr_type = 246U;
    msg.min.assign("VRCHYEGSNLXBQIDXUCWQDUJMPGBZSOIUNMEWGQXWSUBFHCKJAKQCKJTIHGBTGJSNHYASAHCPQMEXRKERYNVXSDLVNGFVUBLYZ");
    msg.max.assign("DGSOUKCZMZDKDOTYWLZPLPSCTWLVMPAFNYJDWJUHAISIQYSQCLBCVOANRNZCNFBHUTHMOWCRWGPCRYWJJBQESJVIOMHMEDAIGQQNBVQTBYXFXNVYKPBCWKRXUK");

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
    msg.setTimeStamp(0.6063696448590544);
    msg.setSource(11231U);
    msg.setSourceEntity(110U);
    msg.setDestination(46676U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("LPNGRGCHXJPEDYJPSYUKUNWUTLJTTNVAZOKTFGTUIEPKLESGYWOAJKBIMVFSHADZYDDZKFRYMKBASEAQWNWVHABFTOEZGQHHIHFJNMNROEOFJMVAIYJVZMPCVDHFKQWPACNROBZSZYPLPJMWVBLCIXQNCUHDXUWVMZSFCBLR");
    msg.predicate.assign("OKRKKSPAUYCCVOLMHNYBNFZOXZMXATUIUWPOCSIZYNGZHDCSSLJENKPGOIVTDUQUTSFRGAXACBLTVWJDKDTCNIQJSVCEERNFMJFQPQFORAKEOTRPUEPOWZAXPATYMVGHQBXSVNWDNXFESXQGBQDDKVKLIDACIIZJDQHXYBZTUQWJTHRXUYXYMMBTZHLRHJULHWBAVNIPKSLLJSMEAMVMZWF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WHZWDGAAGHLULKPNGFYNZFWCYORZVM");
    tmp_msg_0.attr_type = 43U;
    tmp_msg_0.min.assign("JQNXWOWDGOXBNJSOHSWWHNUCRLHYWWGGTEXZDYPQFFPIMFSFSPTCPITMDKAWUCZYYYZPROUFCVGYTXIACMPTJVEYHOZKCSAILXSVALUAEKNZMDSRHLGHHEJEXKMEZLVBQIZWCJRNILWUUUPQNSCXDTXDUIAGKDVJMIHMJXFLQHTKEZRNTNZDXGOUVBGMQGOVRRRPINYSAOKJQCSMAGIDLDYHBMT");
    tmp_msg_0.max.assign("XAWVBIPABKMEIKKLJOHGUGZBPSTYUJNZDIVQCAPWKPDIJHENXBYNLQZLLUBQFHUIGPYCJCVVMMHXTWNBEAPHGC");
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
    msg.setTimeStamp(0.16840530556792188);
    msg.setSource(24344U);
    msg.setSourceEntity(94U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(151U);
    msg.timeline.assign("GEQVXHWQEOLAUQWTYWFFPWBVYXBCHCKHFDTSRALHUGDIJRVCNVGIBOQCTZVKGANOLILREAWYYZSIBMMQXELJYVUOVXKXMTSLKSJUZTBSNWPJKVVWNAVYJFRELBFXGMOPDHLPEMJSTANGWJKIZBIAIRKUMFTWUQQTAZUXHDSYMWPIPGRTIDNODYHHCLKXCZNIDZPRGHEPPOOCOZUCKYFRCPFSQGAEMYGENHJNRXZARQDFLUZSEFBSM");
    msg.predicate.assign("ZLGRVSEPGPPFYZSWDAAUHGBPZXRDJOXVNBMUJWHJQDYNVMUJUYMFTPFQIROEIYDVIVBZHIOAFWQDANGRVICSXPSUUFFMITKNTAOOLNBTKDZIPCWRZRJKEKNRJZHYFLJAXPRYWOHEAXQSSBTDKEFQHLZKVIQKELEVTTWIBXDMNEGDSWOYYHUYWWMRGUQZCJLHBSCUPGFXMMJABCGYMSDHCISNGMFLL");

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
    msg.setTimeStamp(0.14970522176452228);
    msg.setSource(5392U);
    msg.setSourceEntity(207U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(173U);
    msg.timeline.assign("ATYDLNAJZWWHFFUYEGLCCVVHIERYHZQBAHSNXSDKBNQJFXRGYIHLEORZPPKYJCGUJXIWAWANKWFOZDUDIMUPXAGZTUQIGQBPVJRGDCXVMLJNTXTBVFQPLYRGKCXRJZOEWKGORMQPVQOSIJCAJEWSUMXZDCFTQSSOYSGTEKJEBAEVGUMIBICO");
    msg.predicate.assign("OFZXWYJZKNWIDIVRXXSQWVSFL");

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
    msg.setTimeStamp(0.7201824021970339);
    msg.setSource(9809U);
    msg.setSourceEntity(190U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("PTLONZEKBUMVCXGWTSEYVPESKPDXLEQAQWUBSDIFOBAUIBWVAMADQGNHTJSGDRDCYFMLSEVXGAIPNAJCMOIGWVCHLQZHEMYKNJBFQGRNITBNJYEJMJYVXRFFOVURTLSCNRWXMCROLQYONCZIXBMRZAWPAUVFXQTDSPKGKDVHTKPUTOHRACUIOUQZKAFOJHYUTLYRNSDZSHZWLJXWHKBFIJWLKBYDXJFZKVNELEMSOZUPXTYP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TSEBXWSZXELNAFGWNQLOMYXLBLJFKYQDQYMBKIWDQCHEIXSMYDZENJHULUCXJWSRPARASDM");
    tmp_msg_0.predicate.assign("LYUIXGZTLKEQBWARDDQKVWJIBHWQPFBWJYIIFWWEQCCNHXYNVAAVPGMEIVGLTHXZLJHPDKOCJOPEBXVOAINSBUKPDEZKUMDDTLAPBUIQOSNAQBZJSYZQSEOEUMTHVXPNNCDOKHYGGQZTSWKMGMEDQSVTYOTKDCAJUOCZKTGAFFVJHGRWRLZRURFYMSCUPLTIZDMONJSFWBYRFEBFZVCHVMXYGWHLXHNNNKPJLAFLSUYJMCEQXBIRMCTPS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IETOLAKUWHLUOYNXOZUNCGBPEBRGCVFANQXZQDZKXPOFEPJPGIQLMYXLFESMMAIUXVXGCORFYRVICSAKYHDNSKKUTQRBSVEWRDQRRWNNIZLYCYVTHRHZQFZYNMFJGNMBXUWSBVICDVSKDFOUJDAHIZJMEWQYMFELYOEDTPHRXAVTNBZUI");
    tmp_tmp_msg_0_0.attr_type = 68U;
    tmp_tmp_msg_0_0.min.assign("XFWEBERRTOHYFXAADNRIBELIJTUZHRYLKXYHOQPAVSXNPUEQU");
    tmp_tmp_msg_0_0.max.assign("NGBUHDFGALJRKQYAPASVOZWQBZKGVSWBLRSIKUIQOSHLLYHIGVGJBXXFYSWLICXOSMYOFKG");
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
    msg.setTimeStamp(0.1685273501358434);
    msg.setSource(30801U);
    msg.setSourceEntity(4U);
    msg.setDestination(23761U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("GCCIQFURIRDPIABBCJNDMDVWWGEGYRNTMBGFSJLNZTZWKAMIGNZQZZH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NJOPLELAEDVGQSPDCEWNGX");
    tmp_msg_0.predicate.assign("CFCAUQOOHNKGZLKVBQDJBFYQWSZKXFZRPTAHBHNWCXXORSEIBS");
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
    msg.setTimeStamp(0.1662310191329831);
    msg.setSource(12920U);
    msg.setSourceEntity(50U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(21U);
    msg.reactor.assign("PHQIDTOAUXEYYCVSJLUMYPHOLCVSGLFRTRTEXCNPTYKRTLUZICZKQVUIOSHABVASGYWAAPLMDWDTKZCMMZVFONZMREKFGQUOWOZPYGXA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JVELLANOOLYMFXKLQHTHAPYVSUOLTDBBQWBAOVNIXZNRAMWMK");
    tmp_msg_0.predicate.assign("AAGQJNXBPKMETOEYESDZWVGMJLFCIBZZBJMNULWVSPLHKZFHEPYHKCVHICQNFVOFSYWENDYBSIVYPTXJQLMBWNESYVEOTKOBTRPIRFJNGBHBGLAQZUDJXBATQFAWGJYPVYDLRRXNUQXEITZIIXQVDCRIHUQGMIINFGJJXBTKZOMDARAOUSSVWORRANUHLDUZVMZCXODGWXFWNSSHPKMTDHGOLUUSUGTEQRCHYQRPWFFAADKZ");
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
    msg.setTimeStamp(0.3415859451866975);
    msg.setSource(61517U);
    msg.setSourceEntity(155U);
    msg.setDestination(17718U);
    msg.setDestinationEntity(61U);
    msg.id = 238U;
    msg.width = 26612U;
    msg.height = 56469U;
    msg.widthstep = 7373U;
    msg.channels = 75U;
    msg.depth = 11U;
    msg.finaldata = 61U;
    const char tmp_msg_0[] = {-107, 86, 54, -90, -55, -111, 81, 109, 27, 49, 118, -35, -37, 95, 27, -73, -19, -80, 66, 36, 33, 69, -88, -20, -1, 23, -79, -95, 11, 29, -30, 16, 63, 12, 3, -85, -7, -14, -41, 123, -65, -124, 84, 72, -98, 7, -8, 58, 24, 72, 73, -120, 62, -56, 10, 35, -67, 79, -99, -94, -61, -76, 48, 113, -88, 62, -91, 88, 76, -56, 5, 18, -4, 67, 119, 3, 3, 53, 15, 67, 71, 97, 17, -95, 39, -10, -89, 11, 20, -25, 26, -61, -6, 56, 93, -44, -43, -125, 28, 1, -5, 97, 52, 103, 96, 74, 15, 26, -121, 17, 36, 79, -62, 42, 42, -3, -98, -68, 57, 69, -24, 37, -49, -98, 80, -90, 72, 24, 25, 27, -74, 73, 29, -95, -59, -60, -66, 29, 78, -62, -41, 5, 72, -60, -16, -113, 97, 111, 46, 49, 42};
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
    msg.setTimeStamp(0.6235332960779892);
    msg.setSource(55594U);
    msg.setSourceEntity(254U);
    msg.setDestination(51030U);
    msg.setDestinationEntity(244U);
    msg.id = 80U;
    msg.width = 30378U;
    msg.height = 56337U;
    msg.widthstep = 29718U;
    msg.channels = 93U;
    msg.depth = 156U;
    msg.finaldata = 158U;
    const char tmp_msg_0[] = {87, -109, -113, 79, 92, -1, 103, 126, -98, 58, 116, -58, 115, 89, 69, 21, -41, -14, 120, -90, -79, 41, 33, 15, -114, -123, 53, 31, 63, 19, -47, 10, -21, -5, -30, -121, -119, -111, 99, 65, -106, -31, 79, 69, -68, -74, -70, 94, -85, 110, 101, 32, -90, -126, -19, -126, 83, -99, -64, 35, 23, -128, 16, -86, -116, 1, 119, -66, -36, -103, -49, 99, -13, 18, -62, -85, -42, -90, -56, 2, 35, -90, -32, -124, -108, -72, 118, -48, -84, 92, -21, 112, 4, 31, -102, 14, -67, 17, 83, -30, 0, -52, -116, 16, 112, -101, 8, -75, 36, -66, 123, 2, 119, -113, 120, 115, 104, -61, -15, -50, -20, 109, 19, 89, 4, 63, 1, -42, -43, 10, -79, -74, -2, 13, -71, -99, 36, 115};
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
    msg.setTimeStamp(0.6931872436157844);
    msg.setSource(60531U);
    msg.setSourceEntity(31U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(182U);
    msg.id = 179U;
    msg.width = 62319U;
    msg.height = 16273U;
    msg.widthstep = 61451U;
    msg.channels = 200U;
    msg.depth = 196U;
    msg.finaldata = 20U;
    const char tmp_msg_0[] = {-53, 27, 68, 81, -40, 121, 7, -16, -65, -120, -22, 18, 123, 54, 97, 96, 75, 16, 61, 86, -106, 114, -60, -45, 57, -90, -103, -92, -32, -126, -112, 124, -29, -43, -96, 74, 118, 6, 68, 115, 7, -3, -90, -107, -47, 2, 72, 36, -11, -25, -46, 23, 24, 61, 109, -124, -91, 117, 46, -128, -11, 45, -71, 83, 52, -119, 12, 49, 26, 39, 50, 72, 117, -16, 28, -125, -69, -25, -11, -39, -47, 123, 96, 76, 121, 76, 99, 36, -61, -75, 50, 101, 88, 122, 13};
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
    msg.setTimeStamp(0.16761087158394894);
    msg.setSource(19790U);
    msg.setSourceEntity(83U);
    msg.setDestination(63250U);
    msg.setDestinationEntity(92U);
    msg.width = 46487U;
    msg.height = 32863U;
    msg.channels = 251U;
    msg.depth = 178U;
    const char tmp_msg_0[] = {-2, -11, 116, -12, 81, -120, -86, 17, 53, -46, -72, 78, 23, 96, 9, -2, -23, 42, 113, -84, 34, 80, 110, -127, 76, 106, -109, -17, -4, -7, 81, 46, 62, 47, -68, -63, -40, -96, 84, 70, -60, -80, -116, 22, -73, 105, 114, 24, 0, -55, 103, -73, -87, 79, -63, -51, -34, -20, -44, -122, 57, -108, 91, -78, -66, -2, 52, 117, -38, -97, 15, -91, -11, -63, 99, 109, 66, -123, -107, 91, 37, 25, 85, 6, 67, 66, -33, -127, 104, 40, 29, 1, -72, 45, 53, -17, 78, -63, -51, -47, -34, 37, 2, 86, -51, 15, 120, 52, 95, 44, -62, -4, -116, 31, -125, 15, 31, -23, 20, 30, 9, 106, 100, 83, 42, -43, 75, 115, 64, -59, -97, -48, -90, 22, -50, -77, 45, 42, 124, 83, -13, 115, -82, 38, -50, -38, -112, -120, 120, -4, -34, -11, 30, -34, 87, -27, -42, 77, -83, -67, 115, -33, -51, -64, 29, 63, 66, 119, 24, 126, 97, 75, -99, -15, -4, 125, -100, 15, 23, 10, 55, -62, -60, -102, 110, -37, 46, 101, -97, -112, 106, 103, -110, 83, -96, -43, 97, -18, -126, 85, -87, -106, 56, 83, -39, 49, -10, 30, -68, -25, -36, 33, -78, 10, -64, -112, -17, 118, 114, 68, 96, -95, -70, -37, 67, 101, -63, -8, 36, 37, 89, 42, -115, 78, 32, 43, 11, 21, 66, -125, -23, 99, -68, -61, -83, 77, 95, 74, 27, -66, -28, 69, -24, 116};
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
    msg.setTimeStamp(0.8881982191613106);
    msg.setSource(40775U);
    msg.setSourceEntity(5U);
    msg.setDestination(58884U);
    msg.setDestinationEntity(12U);
    msg.width = 6503U;
    msg.height = 26541U;
    msg.channels = 238U;
    msg.depth = 246U;
    const char tmp_msg_0[] = {66, -71, -30, 57, 57, -118, 92, 109, -1, 87, 45, 99, 92, -44, 92, -42, 16, -42, 40, 104, 18, 89, -68, 101, -19, 113, -107, -73, -122, -22, 24, 35, 81, -78, 101, -93, -99, -35, -6, -39, 47, -123, -5, 41, 73, 95, 99, -45, -2, 73, 27, -9, 53, 86, 97, 62, 87, -40, -113, 112, 35, 125, 88, 105, 92, 26, -48, 116, -109, 23, 47, 59, 38, 27, -106, 26, 61, -109, 114, 121, -57, 58, 28, 99, 21, -82, -12, 28, -43, -123, 111, -100, 67, 44, -56, -103, -75, -118};
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
    msg.setTimeStamp(0.16753507465932127);
    msg.setSource(8440U);
    msg.setSourceEntity(188U);
    msg.setDestination(6057U);
    msg.setDestinationEntity(57U);
    msg.width = 4424U;
    msg.height = 36217U;
    msg.channels = 81U;
    msg.depth = 170U;
    const char tmp_msg_0[] = {-48, 95, -25, 64, 53, 85, -66, 48, -73, 74, 106, -6, -121, -8, 86, -45, -101, -45, -119, -80, -33, -91, -35, -76, -118, 43, -122, 62, -69, 103, 35, -39, 90, -72, 73, 27, -13, -7, -33, 0, 112, -35, 54, -115, -9, -106, 33, 48, -74, 19, -52, -91, -36, 22, -86, 92, 70, 77, -128, 38, -34, 100, -40, -11, 110, 96, 80, 54, -88, -9, 86, 8, 61, 54, -99, 81, -90, -32, -119, 122, 35, 87, 74, -69, -22, -21, 112, 50, 86, 117, -87, 52, -67, -32, -65, -46, -70, 105, -112, 7, 21, -80, 6, 35, 30, -97, 104, 103, 23, -75, 104, 76, -41, 41, 95, -122, -78, -30, -3, 62, 22, 1, 50, -53, 53, 62, -116, -58, -111, -105, 106, -37, 19, 93, 42, 34, 33, 62, 96, 4, -48, 36, 115, -2, 9, 52, -23, 50, -62, 117, -15, 63, 71, -39, -73, 107, -126, 43, -44, -105, 70, 82, 6, -18, -26, 113, 102, -84, 33, 105, -113, 115, 21, 4, 27, 105, -118, 104, -13, -71, -63, 26, 53, -58, 112, -95, 82, -93, 73, 98, 46, 55, 124, -56, 13, 16, 76, -56, -17, -78, 125, -56, -110, -46, 46, -70, 111, -121, 36, -46, -102, 33, -13, 104, 61, -119};
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
    msg.setTimeStamp(0.5787506091655404);
    msg.setSource(31178U);
    msg.setSourceEntity(123U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(171U);
    msg.frameid = 90U;
    const char tmp_msg_0[] = {102, 125, -117, 80, 49, 9, 96, 62, -53, 17, 103, -74, 103, -122, 88, 112, 2, 29, -113, 94, -49, -25, 81, -83, 83, -10, 73, -13, -17, 21, -119, 0, 35, -64, 97, -62, 18, 110, -38, 74, -23, -79, 100, 17, -3, 109, -94, 22, 93, 56, 13, -24, 59, -104, 87, -97, -76, 47, 33, -71, -105, 71, -44, -72, -61, 32, -73, -29, 40, 10, 108, -57, 81, -7, -54, 120, -65, -13, -97, 47, 109, 86, -61, -3, -9, -54, 99, -26, 44, -45, 28, 92, -65, -113, 125, 124, 75, -6, -76, 99, 65, 46, 86, 81, 60, 95, 77, 67, 89, 36, -99, 12, -19, 30, 3, 44, 26, 81, -25, 5, -2, -63, -79, 73, -103, 5, 6, 124, -87, -114, 10, -110, 15, -121, 54, 17, -79, 28, 114, 9, -73, -81, -33, -90, 12, -39, 61, -36, 98, -95, -86, -38, 89, 56, 69, -81, -97, -96, 50, 93, -58, -33, -104, -36, -3, -5, -34, -71, -29, 98, 62, -13, 86, -67, 11, 90, 54, -61, -68, 11, 82, 25, 48, -102, 94, -58, 41, -48, -89, -101, -16, -102, 45, 63, 96, -118, -87, 29, -20, -53, -127, 105, 93, 45, -54, -48, -80, 47, 56, 60, -56, 32, -32, -92, -95, -53, -49, -1, -88, 16, 74, 29, -30, 97, -83, 53, 73, -71, -17, -58, 10, -4, -70, 13, -12, -41, -16, -126, -96, -126, -57, -80, 79, -46, 53, -27, 62, 64};
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
    msg.setTimeStamp(0.882314424494714);
    msg.setSource(9487U);
    msg.setSourceEntity(180U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(97U);
    msg.frameid = 68U;
    const char tmp_msg_0[] = {-47, 80, 45, -126, -81, -68, -57, -64, 2, 108, -117, 106, 90, -2, 74, 6, -17, -44, -107, -54, -38, 84, 40, 30, -29, -45, -99, -7, 9, 12, 74, -86, -102, 26, 125, 67, -29, 115, -83, -104, -73, -4, 41, 36, 94, -43, 54, -24, -17, 48, 106, -87, -46, -21, -91, 81, -85, 50, -71, 43, -78, -17, -106, 13, 29, -40, 86, 99, 79};
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
    msg.setTimeStamp(0.9420533981809944);
    msg.setSource(10872U);
    msg.setSourceEntity(16U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(100U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {79, -99, -94, 4, -58, -64, -69, 50, -38, 26, 12, -58, -49, 85, 59, 14, 79, 24, 111, -110, -86, 70, -52, 109, -93, 5, 73, 30, -88, 37, -24, -23, -15, -47, -29, 116, -28, 93, -116, 121, -43, -64, -47, 5, 49, -86, -97, 4, 66, 106, 76, 15, 57, 1, -84, 71, -82, 63, 122, 31, -30, -92, 99, -119, 108, 80, -82, -92, 106, -26, 19, -76, 112, 44, 107, -34, 120, -87, 8, 121, -71, 98, -75, -22, -24, 101, -98, 104, 109, 78, 74, 80, -38, -40, 62, -34, -72, -80, 0, -106, -4, -78, 122, -89, -64, -98, 29, 44, -109, 100, 123, -39, 3, -58, -27, 92, -113, -36, -28, -68, -5, -112, 41, 92, -8, 92, -89, -17, 125, 12, -104, 43, 2, 24, 33, -116, 4, 18, 18, -117, -102, -80, -69, -77, -72, 12, 25, -117, -96, -59, 75, 113, 115, -43, 50, -73, -109, -32, -64, 71, 103, -67, -43, -105, 6, -94, 125, 76, 49, -19, -9, 7, -102, -76, -85, -75, 11, 68, 11, -28, -4, -66, 30, -78, 16, -66, -55, 38, -51, -26, -88, -67, -74, -72, 126, -125, -70, 90, 84, -53, 63, -114, 83, -109, 114, 61, 14, 14, 14, 12, 61, -84, -47, -25, -44, -46, 124, 92, 64, 116, 5, 126, 45};
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
    msg.setTimeStamp(0.6455005382204236);
    msg.setSource(34908U);
    msg.setSourceEntity(84U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(151U);
    msg.fps = 152U;
    msg.quality = 140U;
    msg.reps = 223U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.24347283864788638);
    msg.setSource(7362U);
    msg.setSourceEntity(118U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(118U);
    msg.fps = 206U;
    msg.quality = 240U;
    msg.reps = 233U;
    msg.tsize = 29U;

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
    msg.setTimeStamp(0.5255802199210442);
    msg.setSource(40181U);
    msg.setSourceEntity(204U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(134U);
    msg.fps = 106U;
    msg.quality = 185U;
    msg.reps = 52U;
    msg.tsize = 12U;

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
    msg.setTimeStamp(0.08287474187458155);
    msg.setSource(8346U);
    msg.setSourceEntity(216U);
    msg.setDestination(7911U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.7190533493346049;
    msg.lon = 0.5971645075533175;
    msg.depth = 127U;
    msg.speed = 0.0032987166734431694;
    msg.psi = 0.24026936953020273;

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
    msg.setTimeStamp(0.8052281513677968);
    msg.setSource(24445U);
    msg.setSourceEntity(63U);
    msg.setDestination(54704U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.2729666672470038;
    msg.lon = 0.7333903996562342;
    msg.depth = 90U;
    msg.speed = 0.7520279066522463;
    msg.psi = 0.568239292767212;

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
    msg.setTimeStamp(0.3189025869270109);
    msg.setSource(18479U);
    msg.setSourceEntity(183U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.032885810938446;
    msg.lon = 0.42802466572517006;
    msg.depth = 35U;
    msg.speed = 0.9787829232087811;
    msg.psi = 0.7125729572125046;

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
    msg.setTimeStamp(0.4316326571132839);
    msg.setSource(39037U);
    msg.setSourceEntity(17U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(39U);
    msg.label.assign("MWRGLXZKTAZRQROOBEGBWYMDPKQYYMFACYFZIRVTGUOGZVATQIUMFGBUOPBPAABKGEXRPHDNOHTYHEWADPRQEGAUSTFPYHENLUEYLJJSBTMFIRQZWEYOONDVHVEHVVHOTHAUZ");
    msg.lat = 0.09095351941896002;
    msg.lon = 0.7520149348808235;
    msg.z = 0.5691438957323526;
    msg.z_units = 60U;
    msg.cog = 0.44284650355962474;
    msg.sog = 0.44721973591698705;

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
    msg.setTimeStamp(0.5983235820604179);
    msg.setSource(5249U);
    msg.setSourceEntity(33U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(144U);
    msg.label.assign("VXWFGFFSUMGBFHRHDLJDVAIKXVBGKZISJPQEATTRYWFJHCTSJNLVBEUHLLOOBNNWSMQRYKXRXYLSWVUFVNRRJNNTZEJEKQOQERIVHWMGZUUMLGIDIGMEVRYJKATNBBOQGAGKUDKOBIQTYPJJMWNNYHBVSWZBPKUOYIHAFUQLMCPCPZAHQWMGOAPKWHGLTPZ");
    msg.lat = 0.24933792833357182;
    msg.lon = 0.1377310691373218;
    msg.z = 0.7616187460254836;
    msg.z_units = 207U;
    msg.cog = 0.7736036981464133;
    msg.sog = 0.12950677163131308;

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
    msg.setTimeStamp(0.6749948010854877);
    msg.setSource(44133U);
    msg.setSourceEntity(114U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(57U);
    msg.label.assign("TTPYJJYBWRLKGIIIJLLODRJQFUXOPMRMHKVLDAUGJUBVEFQPF");
    msg.lat = 0.724275341285294;
    msg.lon = 0.701843444655773;
    msg.z = 0.6410003885540497;
    msg.z_units = 158U;
    msg.cog = 0.3679041209292365;
    msg.sog = 0.639581683010104;

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
    msg.setTimeStamp(0.3316094240694154);
    msg.setSource(36619U);
    msg.setSourceEntity(79U);
    msg.setDestination(57439U);
    msg.setDestinationEntity(4U);
    msg.name.assign("LFNQUVAPJTUKUJKQHXIYJQVREWIJWAZERXOJHNIMVNEMMPPCNFKTJCHTESZZOTURSDPZIVUMIXNFRBBDEPMGYKENAIZDRPKXETGXGRPRBJLXHFYBQZLLWKALUSYQLOCFLSLGMVZMHWDVWNPSZSSQHIKKQIYCOOFVVGFVAYGEDYVWQTMWRJSUAXHCTXGTHFARHAXUQCQYWNDMSDKUTWRTOBBYMNCLXPICBCBJEUGZIWPFJHOGDLODECDOK");
    msg.value.assign("PMWQVDWSAHVONMKQKXTNGGSYPXODEPNYZQTVUUXNIVWAXOHHRCUQJESMWZKZAYDVSAIVICEPHEGWXVRJZDFXCYRMKUODOKHSJBNFBZMNYAGLWWTCLQNUEERZMLIEBTUFWLJYIFZANJHLFDBIRRSLRDYSWZZYGAJKXHXQTUQEBXOPDRIOSKMOHFZTSLWEYFMGNVBPGPULGPKCJAKCTDX");

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
    msg.setTimeStamp(0.6003659881746828);
    msg.setSource(19636U);
    msg.setSourceEntity(193U);
    msg.setDestination(43812U);
    msg.setDestinationEntity(28U);
    msg.name.assign("KIJWVNVXHHCAYXMJVIMOMJULXEQONTAKEJWUGUMIRBVYWUZIYQJZURSAHSUPSSKBBPYWODQXHTKPOCJNFJEFQLTRPLFHQOFSEXVPQNWZGHFENWAUECGTVNSZIJNINPTSYTZHPRIFZVBEHPESCHDLDABLGILKDGLGGOYOFYFARWXRURXMWTWZRMMVCKJZBFEVXLKDKJXRGQNAGMDBUDCCEWZQCIYQAVQBBXDORAMDHLPOKLSGSYYPBNODKTUM");
    msg.value.assign("YFZFZGJCZLGYORWPACCMTQKNSXRLCJQXBUVQDHESDQCGUIKNLTRDXHNAQOVBOXPMRUJZVTDBADURFBDSTETMABPWSYAFBUHPQUMIYLDWUFEGQZGFROQLHTCKISFWSKLPLABXMDWVEAPXEYGMRYLKVZMPSNVEGZYHIKKFYEJIFKBWOQXKZGAOHUCPIRLMCKNJISVOHPZGEPBWWJFNNELRSJOHMHDIXITNCWTUSWEJ");

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
    msg.setTimeStamp(0.888310431108853);
    msg.setSource(24608U);
    msg.setSourceEntity(77U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(12U);
    msg.name.assign("IMWBLXJYLXPOEJEWBPGFRQOPONQKLZSEFIAJPUEXAFZWOXSTXEAVTIUCDQTSMJWRYLNZDIIROALBKUVYIUGMOCSXPUYKEBRTAQMTOKUBJVNNRXHKBDFTPLPLHCZSABJNTWCNJGFBVOCYSFLGDIATZYCGKTV");
    msg.value.assign("FNDFRCCXOMBVGTQCMFEAUHQMWHUJVIVTCMFYYFYSJQIDXWMQNQIHAYEWIOEJO");

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
    msg.setTimeStamp(0.9309406318279699);
    msg.setSource(54101U);
    msg.setSourceEntity(187U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(117U);
    msg.name.assign("CPBLIVKOCDMQSZDDBLISJGVFJEWYOYOMVUCVABCABVFQTXNHTNDMGIBOXAPSTFKEGYAGPFZFAXVDRJYGVSCRYUTLIDRKWUBTI");

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
    msg.setTimeStamp(0.7346616829617357);
    msg.setSource(61563U);
    msg.setSourceEntity(83U);
    msg.setDestination(47719U);
    msg.setDestinationEntity(67U);
    msg.name.assign("CWXLCVVUKIVQFTCRXQNIAICYZVLVMUFHSMRGTJHCTVHOHRNEXQFNERMWXXBYROILFNUWYTBDTCDPGBSKMRHZRTDAIGVBBIRESBZXUYHAFXUOALIQUNFPKKDKAGOSLCZLJGDQKGMIDDMPPNQDHSKNOMRQFVWYGQNVZBEEXUXVOLEWASTLZSOYDPWABFWJTYBGAUHWKJJJRZPOBKSCOGHTMNAMLGIUCHSJYJPCYPPEWSQEOUDQAIZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FGIFKSLQISMNEEJPPMVTCLDWSJLHSHLIXSWQNCCRHOGGWGEGOMNFPBNAFQOGXKMKSSCVIQEWALDZJQTPGHBCUPDFZRYAZYYNUANFLDDRJBYZWLUIKPMRDKUFI");
    tmp_msg_0.value.assign("PRCARPSITDGJLBTYMZXXZQZCCLJCSOHOBFWIWRPLYYWWHQQTGXEVSWXUHWDDZGHZWQREXUPUZKYONBKMTKFAPCUNKAGBNJOLUINFDHTYXLUUZMESETOIDVOMAYGKNWAROMHAMDSBWFTXPEESKIJXIQKE");
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
    msg.setTimeStamp(0.5524645562535969);
    msg.setSource(28830U);
    msg.setSourceEntity(42U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(244U);
    msg.name.assign("PIATFNALEXYZSQEKZDWQQKJWAYFFGPCPLR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TGUBBFNZBTENNNAVOWSXXTWZGRHHQVQWXZBQCLEDWNRDPLKMTGFQBCWOMJFSEWWDPPKAMEXYPHORDDFQPGSCSTLBMJDPIJIJYTCTWYOSZKRPKYRUVNXIGMNCNOJFBTXZRKQVKCASEPIYXGHSCLHFBAZZHUKQXSLULHLMHOGAQLDKZEAFILUPSIJEEEBBOMJROMECVMYYIJRCSJOUNIHKQZAXGUDMYWUGQFTHUVCDFAGKZRDLWVXYAVT");
    tmp_msg_0.value.assign("ACQEFGQOFLJOHZSBEDEHWWMXEMYGQLCAYPZIOFBGXXSQAXZYINKSTCKFPGWVZPYUCFIOTWVFBNTVRMMVNUJKPDYYPUJUDHTKWLQUEVZBZDKURZLJHXZSNREJYFWAIOHNQCNMKBQHTATNGSBQIRDMEUAXCHBYSOAVCGJTKLPRGNJHHQNUNDXELFATLJGERVOGRWIMIPJOKMKABELBSPIFDUPQDSAXOYHRDDTVUCISWBVMJSWIZXLVR");
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
    msg.setTimeStamp(0.7461498704821072);
    msg.setSource(22746U);
    msg.setSourceEntity(156U);
    msg.setDestination(40113U);
    msg.setDestinationEntity(94U);
    msg.name.assign("DETGDTKEGFOMRVSUSOPOUTMKQUXHYMBLORFQCKNVJQONCQCNAZBBVWEETZFTKXPALLNDEGFYLTRNYAVPTVVGIBKIYZRUIHFMPELDIVHNGXNDFYJILLYXWDWZAFXIXWKUPMIDJAXRBODPZPSDXKQCTUWERLUNJXCWQYZRBSOASJAKJVGHBZBJXDNZKSZOMLEHBTMWMLSRPRSSOYHANQZUCVSYHA");
    msg.visibility.assign("QOIVDHPSEUSBJFZBWYVYZWVCJRSLANUAHPGYLAKVSFBPIOWMZLOWICUFVANHYXWPTQEFTLTQKYOZAOQBZWIGWXKGJPHTEKNKHLWHBVLNARSIRQOUHJUIYCJZGXETTQJBMHSXJNIZNUDGVJSTTGOKKZDDZGXWNYVTSLORQLCMYBKPBFRQCD");
    msg.scope.assign("CVCFVRLOYFLVCHCHSDVWERUKGOUJZNVLUKNZUHCQJECTTBGPBFIXEGJFUXTOASZPMHNDGZBZJFVNAMLQJRKTVWHUMMPSIYDOPZPDYUFRJSSLJEUTAMRDWWAGEYLHKAZPQGIOTKEZUPQOQMQPPWNXVQSFSTRDXCQO");

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
    msg.setTimeStamp(0.32102654253274154);
    msg.setSource(57141U);
    msg.setSourceEntity(6U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(42U);
    msg.name.assign("ROBESBAVQPWIVCDQLRBWOCZANWZPWJGGANPTSHKDKOZOTRESJZBKXMFTWBNQFDRWCRITJYTABUGUUXXRHUFLHAKCJDVZHMNYWAHENFJPQQSVHGNXTHEQOFCLLSYXKHSJFYFADULUUTIJVVXVFYYVYIDLOPPQNPZENPRIXCOHCOKGORGOEUXQABCRIZMSJDRKYMUVPTFVQZWDKQPBLSJYDSIXXMGIEZIAKZDLNCIBSMBMWMGCUGH");
    msg.visibility.assign("WEUTRDSQBDGHXAXHIWEXVDAFVOMSPUWKOOOPAATILIKXZKLOHFLJCGLIUENBRUNFVKMKGPKFZOCYRDUQDCFUXBHNSDBCMBYMZEUSUEQNPJZLWQJHINBVQWBCXGDPVIAOXYNTOLOXGYUZJREZXAVHNSHPCJNIDYJOG");
    msg.scope.assign("DPLOTQSERCTYMZRNYSNCFOIHNGTXGXPKBFZNZIIGBNJBXCRQJJXBRVVWTGSSKGBARMEUVLMZVNVXACAGCMLYWEAYBWDFKNFESUJNWAEQSZHUYHIZFHFYWJDADAZRDIVTSTHKIBOTYJRIIJUKPMIWWVPC");

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
    msg.setTimeStamp(0.7063112803643885);
    msg.setSource(48346U);
    msg.setSourceEntity(193U);
    msg.setDestination(56226U);
    msg.setDestinationEntity(161U);
    msg.name.assign("QQOWYWNFHXRPILPLBVEQRDWWHJYGFVWAIKDNNEGZRSXVIBLHXEJDUGOZQPCRTTFZKSWAKFVZJXHVNECSTJCRAEXVRIAGNCMJJCRTZJYOYHWUVFBTIPYASJGPEEQDPDNYLKBZSSYOUOKMPCADFADLXCIBQMKHEVMNKCMPGFHQUMNQMNLOSRZADWJMSPTHBXQTHG");
    msg.visibility.assign("WXJCYRWBRISIZLNOQECQWIHKPNQXBRCTGNQAVLHSGRSTOIH");
    msg.scope.assign("CUJGKVMJXWMZGJWLCDCWWHBHVVIYRVLIVSOVRAFOGWQBERBSRHUITJHTMKTFVLZKMWQGOBDNJVHQMVQDYPQNRYJDLLZOUBWJJMETULDZXPIAGCAFPCKUYHTEFOZZOJMPCGDLQTPRRNOVCKHPPFKCBDTXXDTYFWNPFKNLNZEWCBLAQQDHIXSYQSFNEWNORHAGFTAMUSXKA");

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
    msg.setTimeStamp(0.40270975426237243);
    msg.setSource(3501U);
    msg.setSourceEntity(239U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(200U);
    msg.name.assign("QZTSGKNBMVUWLJUGCNRRHIFSLOPEFMTQGZZLTPDXXBBSSESSQCODI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYNZAKCZFJNUAMVFHZNSKDKDJGPIJKQIYVSBNQQVFJDSIOIFOVVXBQBCBWXAJPQSSLBKIWAJJUIXGHMMBTNFTZCCLUVIMGZQERYLLWUVGAVFPGD");
    tmp_msg_0.value.assign("VAASSNWEFJGCIDEQPBAVQESPRUQZABCNXXFKPKJGFVBUDCNYYKJDDYSGTZMFJQTGIHJHLUI");
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
    msg.setTimeStamp(0.20921513990065732);
    msg.setSource(7857U);
    msg.setSourceEntity(34U);
    msg.setDestination(56793U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ASKYTSRNQZOXDQHVXAGTAOKYSOLWBBCYJIFRPHMHSCFZGMJLSITGXTJZWVPUCYNMOBSULAKQY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VOQYDCCJKMTDBAKYYIJINEBZEDXPWLTREYMMGQWYUSUWQYTUBXLNCDLVPNLKNAZHXROWJKDJUSQEOBPDESDUIGIIASOIUOJGRVXYKHQTHLLWKAAVODLFPKYRTFAOXEBAJNICSGFTIZNPGTBDHREUYGCROQPIMSDSFNXHCBHZXHWBZLAOCTUVTRXVFNYJGMUSVJRZFHWCLEIVKFPXAR");
    tmp_msg_0.value.assign("PQSXTSGYMUFSMBKTVHIMROSNAQGGPFOOJQCZOZWCQDYJBCNNDJEWIMUNJJDMBWPKTNTUPPQUTEVWBXFSMKAKIDRURTYFSJVWXYRVJQLKAYMFITVRDYCWWJZVRRXEYBHWLGFQZZAJCGIQXGUEHVSHCHKDDYOESBGNRLIQBHXABHYTNKOVNLXAZTELXOIGIIPYKAPEIFXCAHOHJPNEPQMZSXAFELGCVKD");
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
    msg.setTimeStamp(0.8189291183835103);
    msg.setSource(61165U);
    msg.setSourceEntity(53U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(66U);
    msg.name.assign("BMCOEFSWUYASSPXVGOQWGCMDITGMJLFOFMFEIXXEMLLESPMNSBTLHSOUGRRPZJIKJONQPBLFBECLNKUMTCDAHRAVYWZVQKDSNAWPCWJJNEWJHSDDRIYZLVKLXNXPECYMYZHFXTCUVQIZFHGKSVQCJDUYAXURHUBX");

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
    msg.setTimeStamp(0.4441295210204965);
    msg.setSource(56990U);
    msg.setSourceEntity(77U);
    msg.setDestination(20644U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OWXMHRRHSORV");

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
    msg.setTimeStamp(0.9389632387545369);
    msg.setSource(28226U);
    msg.setSourceEntity(100U);
    msg.setDestination(24440U);
    msg.setDestinationEntity(87U);
    msg.name.assign("KUHXFTBVEDTKVXMYXUZFKMIROATJGOKLCJWRNMEEDMMWCVSZZGEBNQIBFDNLGOGBZQCHYPSTARRDOLPEQBSYHNOZPUYQCPSDCJGNWATCSEXWFVXIGUVKKLRZSVLZWGWFLEJYDALIOIDNWWZJIQJQMUXUPDRRNRJHEYGMGCYKFHVFUBCAFQHAATVOXOAPLXPMRYBIECQBYILLRNJVXV");

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
    msg.setTimeStamp(0.6596280547312504);
    msg.setSource(57005U);
    msg.setSourceEntity(34U);
    msg.setDestination(32803U);
    msg.setDestinationEntity(97U);
    msg.name.assign("LENWPTIJTUKQTISIKTTHHORMULYBMNBWTGQBYFAZLQZVUDCAUAJXHZIOZPBOAOHHSNUAJSJWCP");

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
    msg.setTimeStamp(0.6617015932387955);
    msg.setSource(11975U);
    msg.setSourceEntity(222U);
    msg.setDestination(19885U);
    msg.setDestinationEntity(33U);
    msg.timeout = 2752082553U;

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
    msg.setTimeStamp(0.11374044705278541);
    msg.setSource(45712U);
    msg.setSourceEntity(9U);
    msg.setDestination(12801U);
    msg.setDestinationEntity(165U);
    msg.timeout = 990173254U;

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
    msg.setTimeStamp(0.056890865814080205);
    msg.setSource(36659U);
    msg.setSourceEntity(109U);
    msg.setDestination(63573U);
    msg.setDestinationEntity(124U);
    msg.timeout = 644950425U;

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
    msg.setTimeStamp(0.18422944947530528);
    msg.setSource(28411U);
    msg.setSourceEntity(58U);
    msg.setDestination(49969U);
    msg.setDestinationEntity(25U);
    msg.sessid = 2273703101U;

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
    msg.setTimeStamp(0.23251281323324313);
    msg.setSource(36243U);
    msg.setSourceEntity(180U);
    msg.setDestination(50008U);
    msg.setDestinationEntity(185U);
    msg.sessid = 4129217585U;

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
    msg.setTimeStamp(0.4060190256831473);
    msg.setSource(14931U);
    msg.setSourceEntity(11U);
    msg.setDestination(22052U);
    msg.setDestinationEntity(66U);
    msg.sessid = 3663104146U;

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
    msg.setTimeStamp(0.8132331840287966);
    msg.setSource(16664U);
    msg.setSourceEntity(29U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(48U);
    msg.sessid = 553921496U;
    msg.messages.assign("YPJZDHVYWIAOJQSFWJRVWMRKDDCOLMLNKUUXTUYJPUXJZPTZCDMEVLSHOGHSUPODNGBVSRFBEXSWVIYOWRULNEZNIMA");

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
    msg.setTimeStamp(0.6701503381384123);
    msg.setSource(42709U);
    msg.setSourceEntity(102U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3197165295U;
    msg.messages.assign("VGNCYFBKNZIMVZEXIQWUFEKMDLKEAQJPWGPQYTVPZMMBJOVFJWHEOLZAQJUACGVUISZXMRLOAFZXIUEKHFGYVOSPUIJSLDLRZKKOXWCEKDFQHKHBLQNIGSLSTSFTRQBPTTAJOPTOEDGLVNDMHNHPRZFLMACUUIEVXWKHNXENMJYCUVBBRIYVQWTAZIWUJYMG");

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
    msg.setTimeStamp(0.1818478858256909);
    msg.setSource(16747U);
    msg.setSourceEntity(117U);
    msg.setDestination(56589U);
    msg.setDestinationEntity(48U);
    msg.sessid = 1289242819U;
    msg.messages.assign("FLXDYYDWHBJIKAOXPWHKAEHNEJTFNPNUEDWKXHXSNGKJORRUTPMFRXIMMCFQEZPOCWWVOULRVNQYQSUYMWHCGMFEBVHRGENUIWVOZQHSGYPGLULWSCXTWMBUDG");

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
    msg.setTimeStamp(0.2308320377693197);
    msg.setSource(63128U);
    msg.setSourceEntity(74U);
    msg.setDestination(63655U);
    msg.setDestinationEntity(171U);
    msg.sessid = 1845627592U;

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
    msg.setTimeStamp(0.490108890992337);
    msg.setSource(38777U);
    msg.setSourceEntity(239U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(220U);
    msg.sessid = 328566525U;

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
    msg.setTimeStamp(0.412864156072252);
    msg.setSource(29416U);
    msg.setSourceEntity(28U);
    msg.setDestination(63388U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1851857694U;

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
    msg.setTimeStamp(0.6106562233452112);
    msg.setSource(63216U);
    msg.setSourceEntity(120U);
    msg.setDestination(4366U);
    msg.setDestinationEntity(15U);
    msg.sessid = 423881464U;
    msg.status = 115U;

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
    msg.setTimeStamp(0.739068345769704);
    msg.setSource(23625U);
    msg.setSourceEntity(82U);
    msg.setDestination(9863U);
    msg.setDestinationEntity(20U);
    msg.sessid = 3581356464U;
    msg.status = 151U;

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
    msg.setTimeStamp(0.2367855288109506);
    msg.setSource(16666U);
    msg.setSourceEntity(190U);
    msg.setDestination(28322U);
    msg.setDestinationEntity(60U);
    msg.sessid = 4256704263U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.4006916027685634);
    msg.setSource(4334U);
    msg.setSourceEntity(216U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(240U);
    msg.name.assign("SQODNWHJBTNSDJQ");

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
    msg.setTimeStamp(0.4151288558198777);
    msg.setSource(1229U);
    msg.setSourceEntity(116U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(45U);
    msg.name.assign("ZSBDTMFCETHHGSBLDFWJGZENSNLEFFMNGAYKNMBUAZVCLRVVYERIWXBOIVLHLFJEYALSGLCPZRUCYXPMUOOWNZQPDQZWSEHVPAPBUHCZBATNOWRTTVKSPIOEWDDUBDJAYRVMWSABWKDVWJRDQDHZEGNCEQQPKOHMFNHXHOQPZXGIAYGNZJIYORRVXUFYSUFQQJTFINQXUSKSJL");

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
    msg.setTimeStamp(0.5921755793327677);
    msg.setSource(64070U);
    msg.setSourceEntity(147U);
    msg.setDestination(18502U);
    msg.setDestinationEntity(79U);
    msg.name.assign("EPIWUBECVVPZFIZAPKKELDJWCOEUQNJMWHKVGSRJRTYPOMIAZTRQQYTMAVJDVLEQCDFSNZLJSFANPRCWUXSBMXPDOOYKZXFVBBLJFOYRCAKQHZGKSLHMQJYZEHHUXGNRJPYXHVOWBQNLYPSMFSWWLJSVINGTIICTFXBRGDNJFNUBYLKDFCSYWPXCYKOBGMWHCEATRQOUEIGAHDBRNPAVIKATHOTDZDTAZGMRQEWIVBXIMTNXSCLUF");

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
    msg.setTimeStamp(0.03656588852673759);
    msg.setSource(879U);
    msg.setSourceEntity(53U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(6U);
    msg.name.assign("AXXRZAYDBVYKCCYLHJMUULFWGGUFNBOXJCIWYUYRUGADKTHDPMXTOJASWKIQIQGVFZBDFRVEZNCBHNNPYBMTGHMMLNPMQSEYSJEH");

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
    msg.setTimeStamp(0.5058304306902183);
    msg.setSource(32126U);
    msg.setSourceEntity(218U);
    msg.setDestination(26311U);
    msg.setDestinationEntity(149U);
    msg.name.assign("MLUCNAQAWFLFRGUKAYGLNOTYCZXFQYPYINGVSCMVWGXMNXINCOOSWUZHPKOKATCJDZSLKEBJRQKHOVUEEXYZCFWDSZYRIPHWSLOBIMJJYBRLABKONZDGTATVQITULNLQGZHWSAXJVHXJLDCGQNXIBPHQMIPFKPBGHDGNDQOOSYXMMRRAFPSDKQUEEURHPIGZFDIBFJOJHZWEHTRTLBSEPJVB");

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
    msg.setTimeStamp(0.4090058253925253);
    msg.setSource(22304U);
    msg.setSourceEntity(165U);
    msg.setDestination(48184U);
    msg.setDestinationEntity(107U);
    msg.name.assign("TFOHTLKAMAALQVIRMGYEJUGHTAVGLAV");

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
    msg.setTimeStamp(0.4284270424209494);
    msg.setSource(56699U);
    msg.setSourceEntity(162U);
    msg.setDestination(38304U);
    msg.setDestinationEntity(17U);
    msg.type = 190U;
    msg.error.assign("BAYFRJOSFGVKFHSKEYBJUWWYPGZMUBSXCTPKWLICVMFHXWHVIKKTJODSBJZTITPGZBQEQQXFRJYPLH");

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
    msg.setTimeStamp(0.03509771874453871);
    msg.setSource(42558U);
    msg.setSourceEntity(46U);
    msg.setDestination(45310U);
    msg.setDestinationEntity(75U);
    msg.type = 8U;
    msg.error.assign("NIOMAJTIAYGPAJFGPYCCAXTOCNRJYVCLBCUBQQZEUJAKDKIAOIZSYNOTGNUCKHDTRTXDHTNLQQSPIVQXMRXZFEJUEEUUNIXRMUQZRMKICUDKXLEJGHYUOWHNUCIXVMLKPVTQJEMAFETAGYBBWSEGRBHWEDTWFBOQVQKZZZVGYSLMOMDFORHWXBWNLALFDLOMTRHHLGBEVYFOQNCZKNKDMBDAIBGPSFKYPXFYSGWIDRSJWL");

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
    msg.setTimeStamp(0.34224940486610034);
    msg.setSource(54546U);
    msg.setSourceEntity(15U);
    msg.setDestination(8313U);
    msg.setDestinationEntity(156U);
    msg.type = 244U;
    msg.error.assign("HBWXDDCCPZDUOVOAJOFWLFYINMUYPLIKSTRTKW");

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
    msg.setTimeStamp(0.566190718155854);
    msg.setSource(17845U);
    msg.setSourceEntity(34U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(156U);
    msg.seq = 35570U;
    msg.sys_dst.assign("VYPYLDSNSZSZSFLNQFGQEJPGYYACUXNPUCJIVHZPFFDQOXNQMWJF");
    msg.flags = 77U;
    const char tmp_msg_0[] = {7, -65, -25, 86, -49, 122, -52, 22, 105, -70, 15, 27, -5, 32, -1, 2, -45, -77, 109, 59, -90, 10, 92, 24, 7, 100, 11, -2, 36, -13, 67, -15, -82, -23, 50, 92, -15, 119, -70, -49, -36, 2, 24, 121, 14, 90, -98, -46, -42, 93, 4, -128, 105, -13, -57, 31, -56, 0, -92, -29, -6, -51, -77, -5, -57, -76, -55, -62, 12, -30, 104, -114, 45, -49, 30, -37, -68, -111, -112, 85, 18, -48, 120, -126, -94, -104, 55, 65, -23, 30, -31, -38, -86, -17, 84, -48, -50, 99, 83, -5, 126, 41, 72, 78, -61, -42, -14, -42, -122, 113, -57, 112, 49, -73, -4, -54, -85, -37, -35, 108, 75, -51, -3, -10, 86, -55, 58, -112, 31, 98, 81, 118};
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
    msg.setTimeStamp(0.8216358049906888);
    msg.setSource(53635U);
    msg.setSourceEntity(10U);
    msg.setDestination(19732U);
    msg.setDestinationEntity(203U);
    msg.seq = 31982U;
    msg.sys_dst.assign("QUSNYDVNAYBPLMISALGGOTDIGHLZH");
    msg.flags = 138U;
    const char tmp_msg_0[] = {-10, -70, 83, 18, 87, -12, 27, -2, 40, 7, 107, -19, -94, 65, 81, 84, 47, -54, 46, -85, -10, -47, 76, -16, -78, -27, 113, 96, 119, -30, -79, -38, 43, 112, -116, 80, 125, -50, 99, -18, -5, -93, 104, 37, 24, -94, -118, -57, 33, -6, -95, 50, -69, -61, 119, -71};
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
    msg.setTimeStamp(0.79847101148524);
    msg.setSource(52673U);
    msg.setSourceEntity(52U);
    msg.setDestination(43574U);
    msg.setDestinationEntity(250U);
    msg.seq = 55631U;
    msg.sys_dst.assign("RKLZCPFUBZQJIBFDWLSOFKPCNOSLERINZRPBYRVRJIQYWMXVNXYHGOTUVXGBLKDPKTQFKSTYJJCEACFOSBHYWJJHXQDPYIGAKZIOVBVTMYXONFCVHBFPMPGEWUWAPBWCMNMOIZURQLRSDEAQTGYNTAJAD");
    msg.flags = 236U;
    const char tmp_msg_0[] = {125, 24, 92, 27, 126, -63, -59, 78, -82, 118, 73, 20, 30, 61, 45, -94, -117, -83, 70, 110, 52, -127, -16, -110, 59, -58, -111, 126, -113, 103, 98, 125, -27, 50, 44, -92, -28, 42, 92, 15, -37, 107, 63, -30, -16, 68, -90, 52, 5, 18, -8, 35, 29, 103, 19, 21, -120, -28, 26, -1, 79, -124, -38, 90, -4, 7, 93, -62, 121, -111, -104, -76, -30, -122, 86, 64, -124, -81, 96, 59, -67, 109, -13, 93, -118, 78, -57, -122, -117, -52, 125, -56, 15, 21, -1, 63, -65, -85, -55, -81, -65, -14, 26, 113, 4, -78, -104, -59, -110, -95, 86, 17, 65, 17, -39, 89, 39, -64, -84, 49, -70, 87, -101, 115, -59, -59, -28, 77, 108, 17, 59, 77, -66, 123, -9, 30, -17, 17, -45, -119, -94, 126, 74, -71, 124, -2, -126, 9, -23, 89, 65, -26, -55, 25, -74, 114, 63, -96, -61, -58, 34, 14, -80, -102, 17, -76, 77, 44, -105, 38, -68, 13, -105, -116, -59, 124, -35, 47, 24, 96, -12, -87, 71, 102, -52, -81, -115, -12, -42, -52, 123, -30, 29, 41, -23, 46, 85, -3, -36, 21, -63, -53, 118, 15, -9, -14, 9, -112, -101, -97, -101, 11, -49, 50, -52, 22, -42, 122, 48, 63, 100, 80, -78, -113, 122, -106, -81, -44, 32, -12, -110, -86, -26};
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
    msg.setTimeStamp(0.3018366583285842);
    msg.setSource(43889U);
    msg.setSourceEntity(133U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(254U);
    msg.sys_src.assign("MJGQBKEOANMFTBVWJKRHNYCVIHHNAJVRCQOPPNSBPOFRVARBGYTKMQSTMSMLUDAZKXPUUBGKKZNBXGDPQILSRUFXVOKZLTCLYKDIHYIICXXTSOICHRBEHMTJBGWFHECTCZEDDOWYWQZEAAUZXQQPUUIDXODOFWM");
    msg.sys_dst.assign("UZLWFKOROCSNYDZCUKDCSNIEWMOVUJZUJIPBQHRCLNKNQAPEUYNMRBXBDZALDKXIPUTSFPQTJMJCUFMREZHJJDYLIGKZSTMHGXFPZHQTBODAOBTFWFAHOAQWAPPRDYGVNAILHLUAEKBAIPZVHFTVZBMYMVYRMXDSGKSQOGIQEQSCJGJGSVNLQRH");
    msg.flags = 120U;
    const char tmp_msg_0[] = {-82, -19, 4, -67, -117, -100, 71, -124, 77, -116, 116, -120, 101, -42, -82, 41, -27, 95, 118, -28, -12, -107, -95};
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
    msg.setTimeStamp(0.35057121002294833);
    msg.setSource(3229U);
    msg.setSourceEntity(234U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(212U);
    msg.sys_src.assign("YSGZYVVYGUNVCUNMJTLPRLNIXCRBBCHKBBEGWCABKOLIMRNVPCFPFJNMJIDSMKUGAQWLQYMMXEWDMAOKLERPFSKKVIKWQHSJSFSVKVAZWLSOQONPIUTHIEHRFRPDOVBSPLAPTWQATZQGJHQEBXYFGFIEHSTPDXLJGHCZDDNXYWNBT");
    msg.sys_dst.assign("TWGFOVHYMEFWFLKCOZRXMRTJTHNQBVDQLGLFCPDQLFUYJWBCODQENNYSVORXXYOAWADMZPAONZWDKBJNETZPJJAUNACZHTCEFUISSUSZHXHQMQZNASIGUPLHBQDMMAVUIGTJPYOCFGVIHDEBXTGKPWBGIFANOVVWSBMBQ");
    msg.flags = 32U;
    const char tmp_msg_0[] = {-49, 22, -105, 50, 54, 82, -36, 48, -3, -63, 26, 103, -18, -61};
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
    msg.setTimeStamp(0.41343807768790375);
    msg.setSource(49927U);
    msg.setSourceEntity(20U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(179U);
    msg.sys_src.assign("OGBXZQCZHASHRWJLGIPXJYVJVUGTSFHPZCRQUWMUQPWCJCNCTAESBYY");
    msg.sys_dst.assign("IRAXJHCPDLOWKVRIJKLZSQNVJWMLGCNJFHJSSVFCGVHZZGCUAPQPZPNODXBQXPFGTQNCXSWYBRTMLIUUPFOPYVDGYXFZQDUKAYNAGEJMXIELKMGYDSBZEFQNDM");
    msg.flags = 97U;
    const char tmp_msg_0[] = {-7, -122, 3, 2, 112, 50, 44, 78, 26, -111, -61, -67, 55, 35, -107, 2, 103, 103, 120, -93, -86, 21, 0, -91, -85, 32, 79, 26, -10, -24, -66, -61, -54, -84, 61, -127, -44, -93, -87, -64, -18, 73, -38, -65, 55, -92, -86, 37, -81, -53, 12, -96, -87, -55, 76, -2, 108, 44, -40, 3, -122, 108, -53, -112, -121, -42, 100, -34, -104, 13, -94, 125, -66, 62, 14, 7, -124, 90, -100, 120, -81, 91, 75, -44};
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
    msg.setTimeStamp(0.9934484137386972);
    msg.setSource(42800U);
    msg.setSourceEntity(147U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(160U);
    msg.seq = 13460U;
    msg.value = 75U;
    msg.error.assign("ZUFWJHCDEFTSMCGUEMHIRKQIOHQOSNTEZFYYZWPQQVDNPUAIKFOFXANOXFFVQKNTADPAEAXCVBFKBRCPGSVRAKBVHKCLNRJKVYNIYILGSJSHIHXODEYBWYCBKNTWEEWRKNSIQLMRUADZAXOSPLWZUCYQZVDNMTXXAYBRRWYKLMVELSEJXJOMPJPBCHGOLSMWMBXFJWOLFEGXDLGQR");

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
    msg.setTimeStamp(0.44094684942102613);
    msg.setSource(38748U);
    msg.setSourceEntity(135U);
    msg.setDestination(62297U);
    msg.setDestinationEntity(123U);
    msg.seq = 42606U;
    msg.value = 239U;
    msg.error.assign("UUIWKVRYFRNFIEJUZSYQVLTJSTMCDJXFSMSLJXAFYJVBYQYFAIWFLKTRTMJBGPDNWXFPYGKSBRESKZHG");

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
    msg.setTimeStamp(0.43846916282166004);
    msg.setSource(17269U);
    msg.setSourceEntity(184U);
    msg.setDestination(12882U);
    msg.setDestinationEntity(73U);
    msg.seq = 3881U;
    msg.value = 206U;
    msg.error.assign("XQOSUAPRIBHKPBNFPTKSODIMQZFVXBIBVDDUBGPBLGOFWXUTYQRZZNPTZMQGABRWKVGRDIZVHROHWWEXEACNPLOXBRSZJFUARXKORFDIQQMGUNMYFWZEHKQHLCZEDKMM");

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
    msg.setTimeStamp(0.3564132767268855);
    msg.setSource(49190U);
    msg.setSourceEntity(46U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(16U);
    msg.seq = 24861U;
    msg.sys.assign("QSYLOMEZHRWMCTMMNOBAXXQHNQKZHAYPQKLQPKNTGIINSFCSMXZTEUIZWVIIUMGEIORAJJODFDSBJQOSBOZIYKWZDGJQFMZJUVRRIWSIJRUTLVSBKBIGDPRHFFCTXGEGQHJMXEPVSVJFKEPNBAJMLAPCTUBXBHLQNUAWKPULPRZYCZRDVWWCLGWROXVBLPCDEEFEKTNCKCCJXWKEVWYVYQO");
    msg.value = 0.5932567597387827;

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
    msg.setTimeStamp(0.15362682059083177);
    msg.setSource(650U);
    msg.setSourceEntity(26U);
    msg.setDestination(41654U);
    msg.setDestinationEntity(12U);
    msg.seq = 57717U;
    msg.sys.assign("XNSLEERUNLUULVCTGKZQDGQVMOXQJHQWYLONWYIMJNJAXFLALMNCCTKJVALDQMZUUOGMDVUEBOIIXBPDGEQMBTNKGSAMTWINDSFFHEPDUKMSVOLMPWCFUOKBBRTPAKSOEQFOKLQDRRUATCTXZSWWHVVP");
    msg.value = 0.24092946641808177;

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
    msg.setTimeStamp(0.5993016585182783);
    msg.setSource(13188U);
    msg.setSourceEntity(1U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(12U);
    msg.seq = 2610U;
    msg.sys.assign("HBIKGEUDQDMHVLPLTLFHDXUEQVNPFJJDWWIKWLKQHJYKMNHFFAMJNVHXAN");
    msg.value = 0.5323349419064929;

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
    msg.setTimeStamp(0.6378878663573015);
    msg.setSource(48636U);
    msg.setSourceEntity(81U);
    msg.setDestination(48830U);
    msg.setDestinationEntity(201U);
    msg.action = 244U;
    msg.longain = 0.6397523918336971;
    msg.latgain = 0.18859548116348246;
    msg.bondthick = 4203768509U;
    msg.leadgain = 0.08758110959862142;
    msg.deconflgain = 0.015281538796928396;

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
    msg.setTimeStamp(0.08905783572829429);
    msg.setSource(46789U);
    msg.setSourceEntity(226U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(100U);
    msg.action = 125U;
    msg.longain = 0.4251589999503037;
    msg.latgain = 0.9019717119849597;
    msg.bondthick = 1658130145U;
    msg.leadgain = 0.8610607996712902;
    msg.deconflgain = 0.9084405475207977;

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
    msg.setTimeStamp(0.26244011396426037);
    msg.setSource(26117U);
    msg.setSourceEntity(218U);
    msg.setDestination(41521U);
    msg.setDestinationEntity(133U);
    msg.action = 81U;
    msg.longain = 0.4011984578374914;
    msg.latgain = 0.10512331835923938;
    msg.bondthick = 3629733586U;
    msg.leadgain = 0.9792814999453168;
    msg.deconflgain = 0.2524928928634622;

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
    msg.setTimeStamp(0.4886449740969314);
    msg.setSource(18433U);
    msg.setSourceEntity(52U);
    msg.setDestination(61115U);
    msg.setDestinationEntity(177U);
    msg.err_mean = 0.6758528538365135;
    msg.dist_min_abs = 0.3752378252149109;
    msg.dist_min_mean = 0.8712315802019555;

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
    msg.setTimeStamp(0.547324679419674);
    msg.setSource(30354U);
    msg.setSourceEntity(58U);
    msg.setDestination(54720U);
    msg.setDestinationEntity(176U);
    msg.err_mean = 0.20063260597943355;
    msg.dist_min_abs = 0.0631822447629905;
    msg.dist_min_mean = 0.7619899625754161;

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
    msg.setTimeStamp(0.17932113049843823);
    msg.setSource(38603U);
    msg.setSourceEntity(200U);
    msg.setDestination(63630U);
    msg.setDestinationEntity(123U);
    msg.err_mean = 0.09071623579250054;
    msg.dist_min_abs = 0.16576768830405653;
    msg.dist_min_mean = 0.2365221880063908;

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
    msg.setTimeStamp(0.729250974172873);
    msg.setSource(48729U);
    msg.setSourceEntity(94U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(53U);
    msg.uid = 63U;
    msg.frag_number = 193U;
    msg.num_frags = 127U;
    const char tmp_msg_0[] = {38, 113, -3, 54, -76, 86, -27, -86, -15, 84, -76, 52, 120, -85, -52, -38, -25, 64, -33, -36, -109, -121, 94, -74, -74, 9, -20, 9, -59, 123, 108, -76, -88, 17, -81, -42, 26, -62, -24, 53, 60, 109, -3, -123, 1, 112, -10, -18, -23, 57, 110, 75, -49, 12, -38, -108, 11, -98, 68, 19, 24, -34, -46, 52, -1, 62, 34, -115, -56, 16, -85, -105, -47, -122, 82, 68, 56, 24, 33, 13, -2, 124, 30, 13, -14, 100, -117, 12, -128, 21, -101, 97, 81, 97, 26, 63, 93, -67, -56, -127, 19, 112, 68, -54, 90, -70, 122, -87, 21, 61, 104, -112, -127, 54, -91, -53, -112, -20, 26, 37, -64, 43, -83, 87, 48, -30, -3, -115, -62, 102, 95, -110, -21, 113, -117, -34, -61, -117, 75, -61, -107, -47, -113, -13, -24, -92, -128, -80, -60, -10, -54, 94, -80, -81, 39, -44, -60, -115, -24, 105, -82, -121, 87, 35, 123, -102, 70, -14, 48, -25, -102, 52, 71, 9, -111, -9, 36, -97, 45, -50, 108, 68, -11, -104, 65, -71, 35, 15, 78, 108, -80, -91, -12, -1, -109, 21, 81, 101, -50, -114, -11, -99, 50, -64, 4, -44, 28, -107, -19, -120, 104};
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
    msg.setTimeStamp(0.9490942640022495);
    msg.setSource(1840U);
    msg.setSourceEntity(241U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(250U);
    msg.uid = 129U;
    msg.frag_number = 10U;
    msg.num_frags = 103U;
    const char tmp_msg_0[] = {-62, 47, -6, 20, -77, -110, 86, 97, -10, 122, -116, -72, -102, 37, -33, -99, -89, -114, 107, -89, 2, 75, -20, -83, -63, 63, -102, 112, -78, 38, 7, -73, 80, 54, 58, -117, 23, 13, -118, 9, -84, 18, 63, -43, 52, -28, -64, 30, 56, 82, -4, 96, -80, -109, 97, 37, -51, 119, 46, -34, 4, 61, -73, -20, -26, -91, -12, 4, -29, 12, 2, 89, 42, -38, -111, -45, -7, 112, 55, -112, -55, 124, -67, -125, 118, -105, -9, 124, -34, 123, -17, 81, 109, -102, -71, -120, 85, 62, -65, 16, -100, 44, 94, -85, -51, -70, -66, 40, -83, 40, -64, 45, 108, 21, 34, 33, 62, 67, 70, -87, 104, 15, -67, 72, -49, -125, -16, 5, 123, -24, 33, 77, 68, 54, 79, 123, -68, -101, 98, 100, -59, -16, -21, -97, -13, -54, -82, -105, 3, 124, -16, -63, -116, 67, -94, 33, -83, -77, -100, -108, -103, 54, 18, 79, 95, -89, 76, 117};
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
    msg.setTimeStamp(0.42574837790907205);
    msg.setSource(5338U);
    msg.setSourceEntity(105U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(97U);
    msg.uid = 205U;
    msg.frag_number = 24U;
    msg.num_frags = 171U;
    const char tmp_msg_0[] = {74, -14, -89, -120, 59, 20, 68, 14, -96, 78, -23, 125, -15, -6, 42, -87, 42, 50, -13, 5, -91, 1, -62, 34, 35, 85, 90, -125, -103, -15, 33, -58, -10, 103, -48, 84, -80, 65, -125, -126, 95, -1, -66, 57, -40, -5, -100, 69, -4, -32, -8, 89, 81, 108, 74, 25, -86, -74, 88, -120, -90, -117, 102, 5, -39, -118, -84, 105, -103, 34, 114, -50, -9, -101, 101, 116, -76, -82, -96, -16, 27, -6, 62, -66, -57, 91, 74, -50, 47, -112, 84, 4, -66, -95, -117, 32, -59, 69, 8, -125, 24, -7, -73, -17, 22, -25, -115, 8, 31, 57, 79, 56, 77, -20, -48, 64, -124, -76, 79, -17, 76, -126, -42, 47, 125, 21, 4, -13, 32, -122, -76, -122, -25, -25, -85, 19, 121, 111, -23, 110, -68, -76, 108, 39, -119, -63, 71, -98, 126, 117, 107, 28, -11, -69, -20, -41, -9, -8, 87, 24, 7, 119, 73, 16, -99, 96, -128, -107, -37, 14, -79, 115, -5, 61, 14, -57, 84, -67, -71, -112, 0, 19, -115, -59, -106, 19, 79, -97, -126, 82, -83, 38, 17, 123, -128, 108, 112, -104, -87, 107, 69, -53, -124, -128, 74, -47, 20, -22, -120, 82, -17, -27, -83, 113, -18, -122, 84, 1, -124};
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
    msg.setTimeStamp(0.9462385728689884);
    msg.setSource(20348U);
    msg.setSourceEntity(6U);
    msg.setDestination(27733U);
    msg.setDestinationEntity(114U);
    msg.content_type.assign("NRNWXYFAYAVCLPPBCXFSRRICQHCHHIWAYOIFETINWLYJCGKKZI");
    const char tmp_msg_0[] = {-83, 21, 107, -69, -50, -106, -111, 65, 120, -27, -17, -10, 20, -2, -54, 53, 51, -86, 80, 124, -12, 24, -17, -88, 81, 55, 97, 79, 107, -31, 44, 108, -104, 32, -111, 41, 23, 96, 67, -81, -67, -118, 60, 87, 19, 88, -10, -36, -26, -89, -29, 39, -10, 41, -2, 56, -116, 3, 1, -26, -46, -73, -124, 56, -123, -84, 19, -26, -70, -19, 34, 67, 117, 40, -22, -8, 6, 17, 120, 72, 23, -95, 6, 110, 18, -18, -83, -47, 92, 13, 44, -15, 30, 79, 8, 33, -61, -61, -66, 16, -30, -72, 32, 116, 61, 108, 72, 66, 50, 45, -118, -66, 74, -125, 126, 90, 125, -2, -99, 65, 69, 6, 85, 58, 91, -98, -4, 30, 35, -91, -43, -45, 27, -87, -106, -107, -22, 30, 119, 66, -78, 120, -47, 101, -21, -78, -73, 5, -104, -26, -29, -12, -39, -31, -42, 118, -6, -15, 74, 13, 97, 40, 47, 71, 61, 13, 43, -14, 47, -35, -105, 31, -23, -96, 40, -107, 9, -95, 29, -35, -1, 117, -11, 45, -82, -79, -65, 108, -32, 98, 45, 50, -74, -13, -20, -13, -94, -103, 96, 93, -29, -24, -66, -104, 96, -5, 121, -115, 23, 126, -6, 1, -71, 12, -41, 55, 71, 79, 15, -4, 96, 110, -53, 74, 70, -1, -62, 3, 37, 90, -45, -118, 71, 61, 80, 18, 20};
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
    msg.setTimeStamp(0.10363806484582394);
    msg.setSource(33083U);
    msg.setSourceEntity(4U);
    msg.setDestination(22197U);
    msg.setDestinationEntity(79U);
    msg.content_type.assign("QCZMOZPPDYFVMTOLRNUMUIBJKMWIYZYRGAEDFTJNFPPLBIWZGIECSEAIYDNQZGMKEOZJBBWJRASTZYLLVWRUEOMQMVKSLDVDOEKUTGLUINLXOMEXKKGRWAZHHEQQTXXFNGCYSWHSCVPUBVDFSLFWBAEVPUIHZDQYIFBHCSPJXNOTXWGERXOYLJBGLNKVIQHONXGTKNCMQIDXFCAMACOTNRCWK");
    const char tmp_msg_0[] = {-2, 111, 74, 59, -71, 89, -1, 7, -26, 117, -84, 17, 56, 54, 0, -54, 46, 1, 69, -78, -57, 23, 105, -83, -117, 57, -77, 60, 25, -9, -69, -39, -64, 122, -12, 49, 70, 39, 122, -9, -24, -37, -84, 115, -118, -115, -49, 48, 126, 87, -59, 68, 0, 123, -92, 58, 92, -61, -89, -105, -23, 12, -9, 114, -11, -85, 10, -4, -18, -83, 111, -108, 117, -42, 52, -126, -106, 5, 4, -105, 115, -98, 69, 53, -82, 70, 4, -122, 6, 52, 3, 82, 51, -74, 44, 70, 73, 110, 18, -24, -60, 25, -72, 25, 34, 60, -3, -70, -117, -124, -19, -115, 108, -102, 104, 5, -14, 46, 72, 63, 81, -79, -88, -50, 96, -83, 36, -82, 105, -86, -94, 47, 70, 36, 1};
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
    msg.setTimeStamp(0.08476531217181305);
    msg.setSource(27055U);
    msg.setSourceEntity(156U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("VCDUUFWGNBGHKQYOAXNXFRRQKYLNECRJHLMTYKQCVGSSMSHVXZRXYEWZU");
    const char tmp_msg_0[] = {57, 54, -68, 37, -91, 69, -71, -5, 24, -85, -107, -24, 42, 88, 69, -3, -125, -66, 31, 92, 38, -58, 92, -22, 100, 99, -12, 14, -124, -122, -39, -32, -105, -63, 63, -69, -65, -11, -1, 125, 55, 79, 89, -92, 113, 52, -99, 52, 37, -78, 40, -16, 118, -110, 26, -101, 76, 107, -127, -70, 104, 20, 24, -57, -123, 63, 54, 20, 50, -64, 16, -120, 102, -62, 118, 43, -80, -58, -4, -49, 109, 126, 28, -21, -14, -50, 0, 121, -27, -29, -120, -98, -73, -38, 47, 81, 101, -43, -10, 94, -46, 47, 123, -83, -42, 30, -62, -15, -15, -16, 15, 119, 22, 120, 79, 29, 126, 42, 67, 110, -97, -60, 20, 8, 56, -121, 3, -75, -52, 125, 97, 126, -117, -10, 92, 34, 91, -98, 68, -114, -79, -35, -102, -124, 107, -73, -4, -92, -16, -117, 21, -19, -12, 40, 50, -113, 120, 105, 69, -10, 27, 49, 9, -94, 2, 84, -114, 118, -116, -49, 115, 114, -114, 60};
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
    msg.setTimeStamp(0.7013268878610904);
    msg.setSource(8408U);
    msg.setSourceEntity(157U);
    msg.setDestination(43911U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.7466335140495882);
    msg.setSource(48724U);
    msg.setSourceEntity(145U);
    msg.setDestination(46442U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.9400865188241762);
    msg.setSource(1186U);
    msg.setSourceEntity(166U);
    msg.setDestination(3003U);
    msg.setDestinationEntity(110U);

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
