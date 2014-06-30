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
    msg.setTimeStamp(0.660966396016);
    msg.setSource(13821U);
    msg.setSourceEntity(127U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(89U);
    msg.state = 241U;
    msg.flags = 197U;
    msg.description.assign("QFPPEMKDGAKPHSLBWNULXUVNUIDMURVJIBIYTHXBQTLMYNKKUFGQXRQOTADSWSWTOJZHRLZMZTMKLFFSPWMCKBBDHMWQYABEINYHAEFIFZHORJMDYFZYIOJSHPCJHBSPMGTVLEUOWOJUVKJCTIWYJUFLXAGYSDZFDVWVEOXIUXGLZUDGGPXCX");

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
    msg.setTimeStamp(0.0451947050261);
    msg.setSource(62037U);
    msg.setSourceEntity(181U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(183U);
    msg.state = 105U;
    msg.flags = 125U;
    msg.description.assign("MGEHEXGVYAPTOKPBJOIFRBKKRARQVOONZTHZILWLQJNJZHAASBKYKJANMUACUEYWWBAKIWSVQTTQWOEDQYDGPEWGHIFBUSEGTUPXGEYBXSIVYAXRVWJQNMSEUMYWRZZHMBTPKFMXMSUDRDNFDFQSCYYSPXORHZBXQNWVTNNPKRLS");

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
    msg.setTimeStamp(0.598316878723);
    msg.setSource(8600U);
    msg.setSourceEntity(253U);
    msg.setDestination(16294U);
    msg.setDestinationEntity(86U);
    msg.state = 77U;
    msg.flags = 178U;
    msg.description.assign("OMSSLPCXKRTQPWXIHBYSLGKUWYRHXDEZWYMUZVJNUQCSPVYCTQCYRIILDQXJRANVOSE");

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
    msg.setTimeStamp(0.251022517241);
    msg.setSource(42003U);
    msg.setSourceEntity(129U);
    msg.setDestination(19714U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.71471774161);
    msg.setSource(42639U);
    msg.setSourceEntity(8U);
    msg.setDestination(43664U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.0448178847548);
    msg.setSource(51716U);
    msg.setSourceEntity(171U);
    msg.setDestination(60437U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.70153236012);
    msg.setSource(198U);
    msg.setSourceEntity(151U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(201U);
    msg.id = 144U;
    msg.label.assign("OZFJUHYRTXYALFXKOHLVSRDNFZMAXELYBGZGQGGVWACHPEUSOVHDKHOXHYQQYOAGJKPUWPWYNKWDQJSSRKVJMNFMMXIQTMXPGFJBXDIUTKDVGNRFWFPSYBBAWICHWQVTUHFVCCODVNRUZTPBDFBSCJPAIAKRBBMNZACYS");
    msg.component.assign("RGZLTNULRWCYKBLKXRAMLNGJSVQACPPTMBKQZHMEVSWCNUMAVBUKJRMEEDQKHHFPJONBEFXSPFNYYOPFDLGFLHWHOKIGEXBXDFOFHAWWWTNTVASNTTSRJPHQINUMQVOXJW");
    msg.act_time = 4552U;
    msg.deact_time = 17572U;

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
    msg.setTimeStamp(0.250657562371);
    msg.setSource(37027U);
    msg.setSourceEntity(124U);
    msg.setDestination(59786U);
    msg.setDestinationEntity(121U);
    msg.id = 236U;
    msg.label.assign("PUVSLTMFIQVWDRXLHAMLRXWFBJXVBHKIQBZKHEADABOTHJTEVTEXORRYJUGWOJFPYACWTESTLFGKXKYVBIACHBOPLNXKOXSTUDCIMGECJIIO");
    msg.component.assign("NUFMHAOMJWYCZDJYBLRNXYSUFKRQSYZRYUGJYRUMXVPGMALNVLBFIVZKHSSJBEVFFEOSMCVTZLFNBKWNHKCXZQVIPZCGSGDEROQCXPYSIPXQBKPSWHWQCLHFQDBXUSTOTADIMZTSDWTDQNHAIPJOGERCKTFZCDUDJPIBJUGKEXNUEHWHJLEYWKLYRIJOHAMGZRACEMREQFMLBOVOOILBNATX");
    msg.act_time = 44591U;
    msg.deact_time = 8743U;

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
    msg.setTimeStamp(0.923131348708);
    msg.setSource(52000U);
    msg.setSourceEntity(9U);
    msg.setDestination(49641U);
    msg.setDestinationEntity(107U);
    msg.id = 197U;
    msg.label.assign("KCHJQFCDMIFJEOVGDWDXVTB");
    msg.component.assign("ZGHVFGJAOCPWXQQBBQLXAMDREIOH");
    msg.act_time = 11633U;
    msg.deact_time = 24440U;

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
    msg.setTimeStamp(0.0861893148279);
    msg.setSource(25493U);
    msg.setSourceEntity(75U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(154U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.994940298865);
    msg.setSource(42160U);
    msg.setSourceEntity(195U);
    msg.setDestination(58054U);
    msg.setDestinationEntity(193U);
    msg.id = 172U;

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
    msg.setTimeStamp(0.429559101904);
    msg.setSource(55251U);
    msg.setSourceEntity(82U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(210U);
    msg.id = 246U;

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
    msg.setTimeStamp(0.476842614033);
    msg.setSource(7091U);
    msg.setSourceEntity(200U);
    msg.setDestination(29404U);
    msg.setDestinationEntity(90U);
    msg.op = 50U;
    msg.list.assign("YXQCXFFJXISIRJTAEAATHGOZRDMUTGKCUVDYKIARYKMBWFEORHIYSKELDDTPGXJNQWOTMFADKQJSXSLDYQTIBKXZZQEQTK");

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
    msg.setTimeStamp(0.64028972453);
    msg.setSource(31094U);
    msg.setSourceEntity(72U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(35U);
    msg.op = 182U;
    msg.list.assign("QBKSHMTZEZIVQCJWQULAEBMTHUTKRNPIMKNDVLISWOKWULODPCGKAQXZDRKCFTZWYXEDLFCYFHVCHJNZGOBIOFDHVSQMNGJLDTXEFJACHBMVSYIUQPYEBCLCIRZEJDGSUGDPXSIQXSTHT");

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
    msg.setTimeStamp(0.337060600374);
    msg.setSource(10754U);
    msg.setSourceEntity(9U);
    msg.setDestination(7471U);
    msg.setDestinationEntity(57U);
    msg.op = 148U;
    msg.list.assign("UZCRNOTQFQBCDLRADBL");

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
    msg.setTimeStamp(0.630833495075);
    msg.setSource(20344U);
    msg.setSourceEntity(41U);
    msg.setDestination(39232U);
    msg.setDestinationEntity(194U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.859907311528);
    msg.setSource(45682U);
    msg.setSourceEntity(170U);
    msg.setDestination(33761U);
    msg.setDestinationEntity(179U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.162840714573);
    msg.setSource(40498U);
    msg.setSourceEntity(93U);
    msg.setDestination(17985U);
    msg.setDestinationEntity(220U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.533615521685);
    msg.setSource(50460U);
    msg.setSourceEntity(63U);
    msg.setDestination(41977U);
    msg.setDestinationEntity(1U);
    msg.value = 52U;

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
    msg.setTimeStamp(0.515211030167);
    msg.setSource(10811U);
    msg.setSourceEntity(45U);
    msg.setDestination(47208U);
    msg.setDestinationEntity(202U);
    msg.value = 10U;

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
    msg.setTimeStamp(0.153618068217);
    msg.setSource(2302U);
    msg.setSourceEntity(208U);
    msg.setDestination(47519U);
    msg.setDestinationEntity(97U);
    msg.value = 188U;

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
    msg.setTimeStamp(0.680260823746);
    msg.setSource(47842U);
    msg.setSourceEntity(154U);
    msg.setDestination(50117U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("DDKHDMBDZXDGUBTKJALKIHFNDFUBBZIMQANDGFKVMEXJHZHAXUFIVXFPSIDSZTPLACYVVGJAFRCSVWBBYGKOLVTQAYWQORPLOMMZRZUDYYXCHXPGPQNRLUSRIYEWINYHIKBQEUNAEOEISASVBPHZJUUPAFPRMHZWUNTJZMGQEQNTJCDCVCATPLYTCLGIBJCOTWWFW");
    msg.message_id = 62720U;

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
    msg.setTimeStamp(0.992610369577);
    msg.setSource(56099U);
    msg.setSourceEntity(53U);
    msg.setDestination(13006U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("GBREJULJUDQYOVQEXANGKQPCIXITNBNCNAWPPTQXUCEGIVSBBQZMDWPHMOYLSCVBEAUHRHAMAYVFTLFIFHFBOSRPFTKNCGNHUWYDZWSCFRGOFYMRZWWJGJELDIAYYNJIXYSZJQLLIKBZXIVUMYIRSUQDGMDJTWKAUTVOOHDZZYXXNBPFRDCNEEKIXJMWHXKGPKOEMEBL");
    msg.message_id = 11542U;

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
    msg.setTimeStamp(0.547130410683);
    msg.setSource(49430U);
    msg.setSourceEntity(150U);
    msg.setDestination(47921U);
    msg.setDestinationEntity(92U);
    msg.consumer.assign("WZYQJSODLFKRUKQBWXESOBGLKGIECJQHDMAEWHSSVPULWDUHENOCTIAHIMHCLOPFTVRUZGXYUEXIECLSJYIKKRNADCLOLSZRRMRAVHNGTKBIKRFHJCCYXSCSGQLPPAWFZKEVOGPIWVGNMHMHCFDPUEYT");
    msg.message_id = 56234U;

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
    msg.setTimeStamp(0.414327002067);
    msg.setSource(37750U);
    msg.setSourceEntity(158U);
    msg.setDestination(64040U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.552136778527);
    msg.setSource(33896U);
    msg.setSourceEntity(87U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.251235301532);
    msg.setSource(51595U);
    msg.setSourceEntity(141U);
    msg.setDestination(54708U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.857278587361);
    msg.setSource(42055U);
    msg.setSourceEntity(14U);
    msg.setDestination(64603U);
    msg.setDestinationEntity(118U);
    msg.section.assign("UGOGJFWSJWVKBMIEEBNZBQEDXHLSPGMRGFRQWIHJNPFHRBNGOHZXTYPSNXXEECKSBGVLDHCQWARJKUNCKKHCFMJPPWOJDZTHWTZAQEVLUYCIMRDYIWLIKPMBATCIXBSFRXNDSRDAUAADNMBSQHMGGVYMBVIOAEHUXXJKRZPTNCFITLAZLKOOVJUEUOVOUYQEPLQSCMYJWYPBKZFFAP");
    msg.param.assign("IOEJYVZTSVKCSXYGMNJBRVDACIOOUMSFQLLBOQNXWMYHKQOUSNZAHSLBAUBZMCJQTWYDZHGJLXFICLKGDUFMMAGKECCWWJWWDPCONDIAKAEVNHNVPTIDGOOBSYEXQMXPABBFEUFPWLRKCTDFHYYRGQGHNRNEGNPAMJRZUPPWQIJHLRTEWKCNVHERTIUJTTYSCYPLSOFVUTBXFVHOGIPGKVSEKM");
    msg.value.assign("SVAPABFZXHMLCILXGSAMPCBPVUPYKQEFXKTCAOHCOT");

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
    msg.setTimeStamp(0.807932791955);
    msg.setSource(36193U);
    msg.setSourceEntity(102U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(53U);
    msg.section.assign("DFPKRQEQRWYSPUXHTXQJZBYKDUVWNYYSZCFNKUMSVOANVQQENVRPNAQOZGDCLJRLMYEFWPICLHZPGBNIRMNRDLZHXJVOCZAEXAALDVGSEIUWUVBEMBCJZBCDQXJBUBIFMMUWFTJOIMSSTIWJLGDOWXUCDSLGHNTFYHHK");
    msg.param.assign("RSAHWOIGJLFKAQRTEMVTCRNKUPREMZHAKYOVRITDSSFPEUCAZKUBZXSCQIYTGCMFAPPLTBLVNMAN");
    msg.value.assign("BEUPNQFXIHMPXKICWMJAFCVZWTCPHHENAFHJWJRGDKVUSRSQOIKOREIZGMLGULDXFFGWNDBYTHSMMEFCDZWYKJGZRMSRQYIZIOVPBHADEQCDVPUHOZTIJFPCDFZOGBW");

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
    msg.setTimeStamp(0.807253730543);
    msg.setSource(16798U);
    msg.setSourceEntity(89U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(68U);
    msg.section.assign("DJJKKMHWSVOIYBFOIJPPOASJH");
    msg.param.assign("DZJERPBAQNXLWJNTDJANCPBXSYNOMBGETWJFLYPQUCBHIAQGOUGUFLOKZOATVHJBWHNCPDEQASVMUTBZPKCGXWYWJOWDVLKNURXGEOLXSWKMMLCPFGREEBASJIVLMKRIDEBHNZVQKKOZDJGDPEHLGURLAICSYQSFMAJTRHBUNLSFSHIPZYEENHKDIOMZWOTCVZSVHKITHVCXYVQRFXYUKXTIWRU");
    msg.value.assign("DSXBMABVQYUIVRUDMSGVINOPGGOPGBMYITKSZFUQKXXQUTJJIMRENXFSQHLPFILHNOLZSRKTVZPDKNRWEYAEJMZXWCHBTCNRQOKVAPTZYLKGGYUIORROQECIQXJUTOBKAKECY");

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
    msg.setTimeStamp(0.379087007827);
    msg.setSource(22476U);
    msg.setSourceEntity(88U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(8U);
    msg.op = 74U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("AXKDNJBJNCNIDZYDAHLYQSTPXUTSKFYJFBNLYRQNCROFFMWWTGMRSVUDWVYBFGZTMCVMSQZHSESNHAQHYPKLVPFRHPGOHVOUIEESUJKPUYQIHIQJKNTIHQOZPKCBODIVVQLFAGOWDQAKKBPJSXRUEWKGYAPOFZAEOTXZJRDRXRBGLTUAWGBZIMXZIOLTNCPUMEGEUBECVYZDTODLPNIGLXBEGFWFCMXZ");
    tmp_msg_0.param.assign("HFKNKWZFIJJSUWJHAUMQAHOJDINRJXULMHFMOQLOXBGHYGTLOMXBXEYISEZNTRITZTMSUGFXBBNBIWNXDIUADSJWKIQDYYHPTRWNOMKPAZVOYGXCEWUGUCQWBHCMREUNUGGCFDVNAICZPTVGYJOOIYKRBNXTPRLFCCATSLWAPOHZEEJQPLXCMHJKTPOIKLGAMYWPSDHSFZQZEQMLPVPVBTS");
    tmp_msg_0.value.assign("NIAZYGDAXONKNTLNDQVDEOCUVOUUEMMGURHSVLCQAHTPOKFUACSZFUARHTIAJPDJXHFKLRNZOWHYGJQOJPQHCWTGWBWDQZVDQUSWAZOJRNBFDJFPFXMAZQXKLMEEKEVZTOYIHLDSGXXVPDJWGRQPBMXITKEFRVFIBMKRNPIEINVBYSCLEYIWVYBIRZMTAMXLTZKEQXLCCMZHADFONWH");
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
    msg.setTimeStamp(0.10719088087);
    msg.setSource(14828U);
    msg.setSourceEntity(50U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(200U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.385896565259);
    msg.setSource(40653U);
    msg.setSourceEntity(2U);
    msg.setDestination(6793U);
    msg.setDestinationEntity(164U);
    msg.op = 36U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IBWUHCSPQJZSTXQDWIEJLFOZGMLCCINOMEWOKXVMRZWFSVEPLEKUPPXWGDPUXVUZNTCOAYTYKOANYZRMOITXRFBLYAOGEMPTTBDLCODSEYBYUMCFRKPAVNNITUHYREPGRSZCVKRHQAWDILGVKDKZACVNSWHJJDGUHLDQZILXBXMWWQCYKLQQJAHAFLJJSITSKTBGNDYMFZNNFEQYEWSBPPONGHBOFSEAMBTFHXIQRUDX");
    tmp_msg_0.param.assign("HCSVBSCEGPDBXMKUMWLFOWHRSVMXDYIHULGMVDXYCIUQDUVKQRUSXNDXRFOLIHKFGBPWMVSQWGPJNHYRQLUMJTFWBEYOHKBXGJHOQTFQWGJZVVDQFMIEUHNEQJVRXRMGBVWJKPTRKKGELTZZTYCULSNCZJLLCQUOAEALRSDIAWPJXNIOBYYEATZNINXBOONZDAGZRTESYAWZDUKHZTXAFPINRJPFLZHCKEPMAQGSBPSWAVCOBPFTKFYI");
    tmp_msg_0.value.assign("MWERTEUESGBHFNOWPCFYAKUAWHAWXRPDGUELQAQCSMZTWKTBPQKMMDSCONDXCFUHGPIHMJVGZNZDFFPCVODXYHDBHWDNAGGLIXAHFIHKBJTXMRJGSKQOSLLLAYUKNCNHYFVNMRMNJYOTNQCOJPBURBBKTAOMVVECZSZPJRVTTFSRWKEDKXIPXUJYVLITXJROLQBZGEE");
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
    msg.setTimeStamp(0.213919091899);
    msg.setSource(62031U);
    msg.setSourceEntity(25U);
    msg.setDestination(26074U);
    msg.setDestinationEntity(80U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.124897897213);
    msg.setSource(3067U);
    msg.setSourceEntity(130U);
    msg.setDestination(54425U);
    msg.setDestinationEntity(81U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.178889474872);
    msg.setSource(24413U);
    msg.setSourceEntity(67U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(177U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.878056080288);
    msg.setSource(33182U);
    msg.setSourceEntity(21U);
    msg.setDestination(58482U);
    msg.setDestinationEntity(171U);
    msg.total_steps = 246U;
    msg.step_number = 127U;
    msg.step.assign("TGPMVIWLFGIAUMVYTJBPJRKCHTRCKPTEDQPASWJRXZIAIXFQDNQZEBWDJTOZNVXWIWHQRXUDTVZACNFRHQXJENFOLJHBVDTWBRGGFUKXQBUSZYLHOPQXRWDEGPYRIKAHMLWFOSVEQNOKVMFHJBCSHOEIZTDZVJLCDBAPKNOULWIYXCBUP");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.0747943863329);
    msg.setSource(26952U);
    msg.setSourceEntity(209U);
    msg.setDestination(57737U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 114U;
    msg.step_number = 150U;
    msg.step.assign("GEGKOIDYMRYLTXJKPWLERGZFGMFRVAYBBCDNFKETDXSYXDVQSFDIACMFUNPWKCCERXVSLXZQCGPR");
    msg.flags = 88U;

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
    msg.setTimeStamp(0.895990050069);
    msg.setSource(17668U);
    msg.setSourceEntity(134U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 154U;
    msg.step_number = 40U;
    msg.step.assign("MKRUPIMONW");
    msg.flags = 58U;

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
    msg.setTimeStamp(0.703976372866);
    msg.setSource(36270U);
    msg.setSourceEntity(174U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(1U);
    msg.state = 38U;
    msg.error.assign("HLNZXOPTSASYHWELGWTQGJIFJXAHUQYTUFDCSCCRJCZEYAADDCEMKXJJKCMBKUTNCZXEKAMDWZUNQSDVIAVNBCVIWHZXOKZKTVOAZTHFIHKLXXJVSYRPUPPUNJYRPUYQOGXZIAFERTKESJOTGYERFLGUWIVNQGWDXSVHLQQZETUUGRMORGBOQORBDARYVXJMJHMYDOF");

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
    msg.setTimeStamp(0.394094436325);
    msg.setSource(10279U);
    msg.setSourceEntity(196U);
    msg.setDestination(42938U);
    msg.setDestinationEntity(26U);
    msg.state = 158U;
    msg.error.assign("BCJSGXSZXULITMEDCQELPPRUYMQBJQCDETDEWMZOYFVJONGPGCRBLYINPIQNAYIXRYYDGXEAMLXQOBHGTOWJKTOWKHGCHCZYZSOFNKAZRUXIVW");

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
    msg.setTimeStamp(0.0591632010336);
    msg.setSource(44722U);
    msg.setSourceEntity(112U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(55U);
    msg.state = 18U;
    msg.error.assign("SJVIHHCSLNISORCIIQXJGQLJIHQMYUUENGLTKCCDUNYVNCURTBRPSDPYOECTKRAXKFUZJIVTGMJRWBAMOKSGMKXTDJOMZ");

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
    msg.setTimeStamp(0.74648175051);
    msg.setSource(5722U);
    msg.setSourceEntity(117U);
    msg.setDestination(3224U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.755606196042);
    msg.setSource(42166U);
    msg.setSourceEntity(44U);
    msg.setDestination(32596U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.793133522735);
    msg.setSource(62177U);
    msg.setSourceEntity(159U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.984400146084);
    msg.setSource(20266U);
    msg.setSourceEntity(71U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(112U);
    msg.op = 72U;
    msg.speed_min = 0.720714149569;
    msg.speed_max = 0.672846554215;
    msg.long_accel = 0.952762218902;
    msg.alt_max_msl = 0.940476362703;
    msg.dive_fraction_max = 0.30491146642;
    msg.climb_fraction_max = 0.113192413598;
    msg.bank_max = 0.612517916811;
    msg.p_max = 0.639536222941;
    msg.pitch_min = 0.853867880355;
    msg.pitch_max = 0.879408402465;
    msg.q_max = 0.993186208779;
    msg.g_min = 0.642890456781;
    msg.g_max = 0.190869559664;
    msg.g_lat_max = 0.0321924281187;
    msg.rpm_min = 0.847616112179;
    msg.rpm_max = 0.0953143175746;
    msg.rpm_rate_max = 0.608446247315;

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
    msg.setTimeStamp(0.355544136134);
    msg.setSource(19621U);
    msg.setSourceEntity(35U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(179U);
    msg.op = 22U;
    msg.speed_min = 0.628238574039;
    msg.speed_max = 0.875863482954;
    msg.long_accel = 0.36902903797;
    msg.alt_max_msl = 0.399548370765;
    msg.dive_fraction_max = 0.758644835294;
    msg.climb_fraction_max = 0.244755285221;
    msg.bank_max = 0.459953104312;
    msg.p_max = 0.791258219171;
    msg.pitch_min = 0.385508099604;
    msg.pitch_max = 0.346319993804;
    msg.q_max = 0.640343851755;
    msg.g_min = 0.168080410188;
    msg.g_max = 0.344382787515;
    msg.g_lat_max = 0.338555553465;
    msg.rpm_min = 0.763028955293;
    msg.rpm_max = 0.926187829738;
    msg.rpm_rate_max = 0.325833855185;

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
    msg.setTimeStamp(0.430857949255);
    msg.setSource(19837U);
    msg.setSourceEntity(222U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(83U);
    msg.op = 120U;
    msg.speed_min = 0.738866936287;
    msg.speed_max = 0.648362021947;
    msg.long_accel = 0.418413897384;
    msg.alt_max_msl = 0.612405271441;
    msg.dive_fraction_max = 0.34124287251;
    msg.climb_fraction_max = 0.363672149774;
    msg.bank_max = 0.947153840106;
    msg.p_max = 0.920640868779;
    msg.pitch_min = 0.0626472017147;
    msg.pitch_max = 0.81804381693;
    msg.q_max = 0.668212919115;
    msg.g_min = 0.879501557864;
    msg.g_max = 0.170260353264;
    msg.g_lat_max = 0.294499279719;
    msg.rpm_min = 0.416312803578;
    msg.rpm_max = 0.701767839084;
    msg.rpm_rate_max = 0.892864352324;

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
    msg.setTimeStamp(0.49449340027);
    msg.setSource(40703U);
    msg.setSourceEntity(35U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(244U);
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 130U;
    tmp_msg_0.error_count = 8U;
    tmp_msg_0.error_ents.assign("TWSWOYTNCMCYBTMUKGXTKGYGOBXLQHZIPNAXTHFHNKPRFQMOCFIRPQFQEEXGIERSQLTLJPCVEIJOELRCQFTCAZLOQAURXVUJRYDPINFFEWZYCMVDHYLMOSQSEZJBVDWLDBSJGXUBMOIUCENGHNAXKXHTMURPZBIZBCLPYBGNXJM");
    tmp_msg_0.maneuver_type = 55741U;
    tmp_msg_0.maneuver_stime = 0.688590142207;
    tmp_msg_0.maneuver_eta = 62575U;
    tmp_msg_0.control_loops = 3575070497U;
    tmp_msg_0.flags = 67U;
    tmp_msg_0.last_error.assign("GZQDYUNGRTJXBFYRHVMPCGAKVMIXDBWPWEOIRZPNUMJMLBQLDELFZOIFVYNJPJOXAPZJTLXZEALSGLYKWMKEZLAVUQIZQCLBBXJYSBXSUWBANSRWGLPKKWBKVINIGZKDFCEOZOUCGNRCMPFHNBMUDPICEYNHDWVRJKWCOT");
    tmp_msg_0.last_error_time = 0.0548139879446;
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
    msg.setTimeStamp(0.202475798363);
    msg.setSource(38814U);
    msg.setSourceEntity(217U);
    msg.setDestination(49822U);
    msg.setDestinationEntity(173U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.list.assign("MLWSDIHQGDAVWJJEEPKDHCXFWIGNOVXVDSVFBVAQPXCSYBAVLWMPYUSKMOUMICWCQFNBCEOIJVBWBAHAOBFRKJNQEZNRUDESSZSCXIGNVIPEGYEUIFDGWELMZXSMLYTGNDYCCKKJRFLKZTRKEANTSOBYTXOBLNTAHRRVINHUZUOWHKZTXMHFUVCPGXRCLOIJHQKJPZQUEYHOXYARKSILRZGJPLDZ");
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
    msg.setTimeStamp(0.912778005612);
    msg.setSource(55922U);
    msg.setSourceEntity(160U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(203U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 29431U;
    tmp_msg_0.control_ent = 122U;
    tmp_msg_0.timeout = 0.197990860271;
    tmp_msg_0.loiter_radius = 0.296372213628;
    tmp_msg_0.altitude_interval = 0.794966179704;
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
    msg.setTimeStamp(0.997194988832);
    msg.setSource(18834U);
    msg.setSourceEntity(30U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.276433891264;
    msg.lon = 0.239302103405;
    msg.height = 0.307963121228;
    msg.x = 0.24197054924;
    msg.y = 0.995828534952;
    msg.z = 0.381382580939;
    msg.phi = 0.0532169332884;
    msg.theta = 0.269728458844;
    msg.psi = 0.783883211816;
    msg.u = 0.242160476794;
    msg.v = 0.712182950872;
    msg.w = 0.454946327005;
    msg.p = 0.828892738733;
    msg.q = 0.307827015303;
    msg.r = 0.0142940986558;
    msg.svx = 0.5323101693;
    msg.svy = 0.134332949547;
    msg.svz = 0.147213647953;

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
    msg.setTimeStamp(0.474957355972);
    msg.setSource(38178U);
    msg.setSourceEntity(196U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.811580080278;
    msg.lon = 0.732184628729;
    msg.height = 0.485550143445;
    msg.x = 0.640242602969;
    msg.y = 0.484077154515;
    msg.z = 0.478768694399;
    msg.phi = 0.361830567372;
    msg.theta = 0.102531299698;
    msg.psi = 0.387261879452;
    msg.u = 0.821933838632;
    msg.v = 0.85245784545;
    msg.w = 0.0162064157521;
    msg.p = 0.87579028605;
    msg.q = 0.412736832799;
    msg.r = 0.300251502179;
    msg.svx = 0.812386686478;
    msg.svy = 0.515961205077;
    msg.svz = 0.6995120617;

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
    msg.setTimeStamp(0.928722394697);
    msg.setSource(57636U);
    msg.setSourceEntity(134U);
    msg.setDestination(59728U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.373486023181;
    msg.lon = 0.538688929514;
    msg.height = 0.759451624725;
    msg.x = 0.107299632344;
    msg.y = 0.45156977262;
    msg.z = 0.420058913015;
    msg.phi = 0.246876396358;
    msg.theta = 0.634143310842;
    msg.psi = 0.960534517;
    msg.u = 0.320480708445;
    msg.v = 0.06137991895;
    msg.w = 0.236075752709;
    msg.p = 0.0235512927579;
    msg.q = 0.455167507491;
    msg.r = 0.6917156186;
    msg.svx = 0.613450738368;
    msg.svy = 0.287749020099;
    msg.svz = 0.408842647605;

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
    msg.setTimeStamp(0.794636647346);
    msg.setSource(58784U);
    msg.setSourceEntity(214U);
    msg.setDestination(28106U);
    msg.setDestinationEntity(22U);
    msg.op = 175U;
    msg.entities.assign("XSNKWBTYLBBEHLYMPCMKYXUIQCMRTHXJLQEHWNDZNEZLEBLZDKMIKFRAHNXRFRJYIB");

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
    msg.setTimeStamp(0.00354482369231);
    msg.setSource(36258U);
    msg.setSourceEntity(210U);
    msg.setDestination(26407U);
    msg.setDestinationEntity(218U);
    msg.op = 12U;
    msg.entities.assign("MXCSOUMAPFMMJPWRRPRIFQGOXBWYEKTXIDGKUGFIJHDCJAYJZNYIGOVTMZWINRNSQYCVTAHSETCZXUGUAPJNOOUXCDZHLWHVSZZSORLXVIFDQUIFSWVPIBDLBKTJBQLKFHPYBWOQLFVYPKLAZSWFBWGFOHBTRHDRUYCGCDQTHJVXAUWNYVIECWSNJKSOMSVTQLANKEQFVMPLMOBYXCTXD");

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
    msg.setTimeStamp(0.0548394703191);
    msg.setSource(1574U);
    msg.setSourceEntity(73U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(217U);
    msg.op = 100U;
    msg.entities.assign("QDMPYEJAOSNZFHFJBVTWJCIBBTMBRKZABIOHCPIXGHUUBIEEFMVFXLWZNPQVYHDACKQLWPOQMVUNXWQJTHGIDKEAGVQSCPOITKMCAKUXEEOVNYLMJDMBYPWUWWFYJFSKRUAAQZHHKAJRLNBMXATPSVNYDTLSUXSJLFDZIRGPQNUBHOTZQMRNDRRIPOOJNCLXBTEXCHOKLCHZRRKWDGOEMEGFIG");

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
    msg.setTimeStamp(0.223438223758);
    msg.setSource(62241U);
    msg.setSourceEntity(166U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(69U);
    msg.type = 215U;
    msg.speed = 35816U;
    const char tmp_msg_0[] = {123, 65, 107, 86, -118, 2, 30, 39, -48, 16, 56, 112, 65, 113, -91, -39, 34, -82, 10, -45, 114, 46, 41, 109, 39, -2, 7, 23, 0, 102, -103, -28, 7, -76, -44, -99, -104, 109, -86, 72, 84};
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
    msg.setTimeStamp(0.336651845936);
    msg.setSource(30204U);
    msg.setSourceEntity(228U);
    msg.setDestination(1744U);
    msg.setDestinationEntity(169U);
    msg.type = 253U;
    msg.speed = 39692U;
    const char tmp_msg_0[] = {52, 1, 125, -44, -87, 98, -45, -106, -25, -92, -115, 62, 47, -16, 103, -72, -48, 86, 48, 67, 82, 11, -75, 107, -45, 62, 50, 121, -30, 95, 63, -106};
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
    msg.setTimeStamp(0.530258417869);
    msg.setSource(52971U);
    msg.setSourceEntity(200U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(138U);
    msg.type = 41U;
    msg.speed = 44584U;
    const char tmp_msg_0[] = {-108, -61, 66, -24, -116, -37, 41, 71, -114, -69, -28, -27, -86, -48, 85, 43, -108, 116, -65, -76, 49, -49, -110, 67, 85, -93, 18, -103, 45, -35, -53, -100, 101, -94, -68, -95, -52, 39, -95, -31, -15, 11, 15, -25, 126, 110, 8, 73, 56, -110, 52, 85, 119, 3, -34, 50, -48, -64, 48, -24, -52, 109, -12, -36, -4, 93, -36, -106, -120, 81, -93, -78, 31, -55, -32, 4, -17, 38, 87, 85, 100, -24, -97, 76, -119, -92, -38, -88, -74, 83, 74, 25, -59, 41, 97, -10, -120, -27, -17};
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
    msg.setTimeStamp(0.616731636638);
    msg.setSource(40817U);
    msg.setSourceEntity(69U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(3U);
    msg.op = 105U;
    msg.tas2acc_pgain = 0.453908121621;
    msg.bank2p_pgain = 0.0918669778626;

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
    msg.setTimeStamp(0.382542148578);
    msg.setSource(51581U);
    msg.setSourceEntity(238U);
    msg.setDestination(28515U);
    msg.setDestinationEntity(130U);
    msg.op = 139U;
    msg.tas2acc_pgain = 0.257250966073;
    msg.bank2p_pgain = 0.723271756066;

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
    msg.setTimeStamp(0.766923191991);
    msg.setSource(1062U);
    msg.setSourceEntity(83U);
    msg.setDestination(37131U);
    msg.setDestinationEntity(38U);
    msg.op = 111U;
    msg.tas2acc_pgain = 0.364386816727;
    msg.bank2p_pgain = 0.616666396428;

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
    msg.setTimeStamp(0.851570723822);
    msg.setSource(10372U);
    msg.setSourceEntity(198U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(202U);
    msg.available = 79977353U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.308018761389);
    msg.setSource(27090U);
    msg.setSourceEntity(112U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(182U);
    msg.available = 828509638U;
    msg.value = 15U;

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
    msg.setTimeStamp(0.00882638982295);
    msg.setSource(61033U);
    msg.setSourceEntity(66U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(72U);
    msg.available = 1595034757U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.915846730526);
    msg.setSource(569U);
    msg.setSourceEntity(159U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(89U);
    msg.op = 248U;
    msg.snapshot.assign("ZXKSUOBSNNGSZNYWSNAPTXTJWMMIBPQEHGSCBWIHJOKCGNOMKEQLYLWCVLOWFUVJQLPFFSNJXPPTXAUFMZDGUFFDLOEWWXHOGLDNRKBBEVAPD");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.815682758387;
    tmp_msg_0.y = 0.183151148717;
    tmp_msg_0.z = 0.734504705163;
    tmp_msg_0.k = 0.605932609557;
    tmp_msg_0.m = 0.302984145629;
    tmp_msg_0.n = 0.780372558481;
    tmp_msg_0.flags = 30U;
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
    msg.setTimeStamp(0.677748764885);
    msg.setSource(39835U);
    msg.setSourceEntity(59U);
    msg.setDestination(54631U);
    msg.setDestinationEntity(124U);
    msg.op = 20U;
    msg.snapshot.assign("BSGZRVBDTWCIIHLPQVWFMUDTWPMBVKPDXRSCUFTLQKLZDLXIAYLSAAOXOGEMNGDEWCUFGCMHVPHJYTMFKSRC");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 30525U;
    tmp_msg_0.status = 120U;
    tmp_msg_0.text.assign("VTXURDNBYJHQZYQZPCSUZGHMVLJKVKOCUJMIAOVVWEQHXMESZRTNWYQHNVSLHJHPKGMUQAFXODZHOLZQGVGZ");
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
    msg.setTimeStamp(0.73453830968);
    msg.setSource(44195U);
    msg.setSourceEntity(237U);
    msg.setDestination(53988U);
    msg.setDestinationEntity(134U);
    msg.op = 243U;
    msg.snapshot.assign("FUHNILUKZHVBOQREKDFXMMWVZOHGAQNJSDPRLAIMOUWWKTDAII");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("BKOIPEUKKRDMCLWEDVQTHRWXZZIOZYXBGATKW");
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
    msg.setTimeStamp(0.638847100917);
    msg.setSource(2301U);
    msg.setSourceEntity(49U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(170U);
    msg.op = 97U;
    msg.name.assign("KMEDQJTYXEYFEEMZJFOXNWFVPBQUGYBTKVGKBDJDWTFQASJLSPDOTRAEQATNGIFPLTSOQOLKMDFYHFQNHKYLXYLHGXBDSASRZXBIZEYCUMUOXZNPNWRTBJGXCLLOZJNVMWDQYWAHNIKEXMQNMLAHICJKOYAEKPLUSMSMGCODHWNESDUCBOICTPSFRRVWCAGX");

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
    msg.setTimeStamp(0.155130375073);
    msg.setSource(44367U);
    msg.setSourceEntity(186U);
    msg.setDestination(48943U);
    msg.setDestinationEntity(26U);
    msg.op = 70U;
    msg.name.assign("TOTRYWACMDBWSAEJTPAFHXHYODDVLNYHOZINYRCRTKDFSQQGQNPFDQSEJVOGPHULGRIZIPJFVPDBAITZUEVZSNXFMLVACKTTFHCEMOFOIHCXCDBGKMAUVUVPZRUIJWMHPJOSUSGWSYCJJFJULSYRXQJZGKEQDAEIBCPHALDXHQQOGGMNXPIVKKKGSLXWWUUZXMQEFNH");

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
    msg.setTimeStamp(0.033227299508);
    msg.setSource(50342U);
    msg.setSourceEntity(118U);
    msg.setDestination(10984U);
    msg.setDestinationEntity(89U);
    msg.op = 215U;
    msg.name.assign("NXJZTFQKAHWNCEI");

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
    msg.setTimeStamp(0.352730519474);
    msg.setSource(63371U);
    msg.setSourceEntity(147U);
    msg.setDestination(63422U);
    msg.setDestinationEntity(165U);
    msg.type = 57U;
    msg.htime = 0.401741489852;
    msg.context.assign("AKZTEDUNSTPAXJUGHXJXMXOSYJICPUBLDRWDHFCZRSYTRNNXMUGVIGDGJZKREBHLKNJCARKAFRVKOSRUVIUPGLBAZSANMEGBTEKHGOVJPYETNIOYOLPAYCKWQLHEVGCKIJQSJIFHDLNKUPY");
    msg.text.assign("XZJCFMLFUDVG");

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
    msg.setTimeStamp(0.62439747471);
    msg.setSource(7256U);
    msg.setSourceEntity(133U);
    msg.setDestination(60464U);
    msg.setDestinationEntity(45U);
    msg.type = 153U;
    msg.htime = 0.122307165563;
    msg.context.assign("ACSLLVOYQKVDHJAGZRLIHMEJLMVBDFZPPVBEDHRZUTIO");
    msg.text.assign("ONFJDUDLFPRQEZLLTSTLUTARWNUSXTHSICMTU");

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
    msg.setTimeStamp(0.516545206327);
    msg.setSource(61860U);
    msg.setSourceEntity(86U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(139U);
    msg.type = 220U;
    msg.htime = 0.10078912561;
    msg.context.assign("OWVEGYHIKFGNJZTUKONYSOPZGDUJMCBRSTADQPEXKXFNSYPGCIPFJVDYOJPDFYCHYGHTZRIKGJEPHLTVIDCCOFPCKRMYLIZRWGSEZWABGVBFXIWQQSIFWLBTHEWSBMQMTZEFORURWDOSAQSRWKNDUGTKUNNHLAJVNSAXLPACVEMLXJBDQHXIUJUTCILLJJUOYDROVBEMXQWEPHAGKZINMRCKVQHLXVMHFMPNROXAUTCZKMB");
    msg.text.assign("QCDENBVHUWJZIYQATOHTEWSWUEBAPNUAXIAFDVRPPYYOHTPBMGLMDMSIOJWXBPYRCSTYERIOQGTASJGQDYRGKGKIFMBHTUCMFJAJRNKMZKOLGF");

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
    msg.setTimeStamp(0.880207955486);
    msg.setSource(38063U);
    msg.setSourceEntity(27U);
    msg.setDestination(56364U);
    msg.setDestinationEntity(235U);
    msg.command = 226U;
    msg.htime = 0.204615127122;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 104U;
    tmp_msg_0.htime = 0.388434026337;
    tmp_msg_0.context.assign("EODAQQGJSSHBSDZVVQYJDGRFVXXOTIVHNRJTYNRMJQUGQRMVJYCYQEIZXXSEWGOUWZFPOZNYAUPFKWPPUMHKNLPTREBIRWBOXLFADQLLUNWEWXXKIDGYDZQHYAYEIOZZQMUOBZGHFLTGWNVNMRFDMEWCPTRCSZLSPXBCFZFFNJABOWCILHPCBFKTKKMKTJXCIWSLCQCVBRUMSDCYGSKUVE");
    tmp_msg_0.text.assign("JEGWLYKQPTRMDIRZFCWMJEKAMIXZDVHMXSKFNUQHHNCLLNWNJYSWXRPZPIAKAFJOVWNUOUBVHCVCDPAUBZEMBSRHQNQXXKZZPLFYRGPSGVQHFSYYTHDTTARG");
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
    msg.setTimeStamp(0.0570351154778);
    msg.setSource(44198U);
    msg.setSourceEntity(7U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(179U);
    msg.command = 209U;
    msg.htime = 0.13654275587;

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
    msg.setTimeStamp(0.786717145703);
    msg.setSource(60914U);
    msg.setSourceEntity(131U);
    msg.setDestination(20974U);
    msg.setDestinationEntity(136U);
    msg.command = 1U;
    msg.htime = 0.910551102999;

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
    msg.setTimeStamp(0.415256110394);
    msg.setSource(35570U);
    msg.setSourceEntity(162U);
    msg.setDestination(50106U);
    msg.setDestinationEntity(179U);
    msg.op = 33U;
    msg.file.assign("RFIUOBVTJRVEXRLPDNAMKECDBXIWJQMLUVIGBMLJQJWKKPAWBFYQZNEUGFAISOFYTOYWFYRFQZHQTR");

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
    msg.setTimeStamp(0.0963507947672);
    msg.setSource(6017U);
    msg.setSourceEntity(195U);
    msg.setDestination(39396U);
    msg.setDestinationEntity(92U);
    msg.op = 33U;
    msg.file.assign("OWMCQHFRRKNNVYEWRHVRCJDZSRCYTQSGJMCWWEKULNGSDOAZMFHV");

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
    msg.setTimeStamp(0.0187635496636);
    msg.setSource(18188U);
    msg.setSourceEntity(141U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(21U);
    msg.op = 66U;
    msg.file.assign("MBOFUIMXRDRMTRWSTDOXLZOKKMGNVMIGSWNFIXRVKHEKBHXYKSBSQDEKMSGJRHNVCTXQJFRWCFRLWITDBWAJMCGUIQLBSAOFZEKWQEQXHPKHGJHDLPHLAJ");

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
    msg.setTimeStamp(0.400634321888);
    msg.setSource(35643U);
    msg.setSourceEntity(61U);
    msg.setDestination(55128U);
    msg.setDestinationEntity(23U);
    msg.op = 202U;
    msg.clock = 0.887957824138;
    msg.tz = -21;

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
    msg.setTimeStamp(0.379829241653);
    msg.setSource(48753U);
    msg.setSourceEntity(250U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(126U);
    msg.op = 196U;
    msg.clock = 0.178138681943;
    msg.tz = -105;

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
    msg.setTimeStamp(0.277469391679);
    msg.setSource(55840U);
    msg.setSourceEntity(228U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(158U);
    msg.op = 25U;
    msg.clock = 0.176245752052;
    msg.tz = 6;

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
    msg.setTimeStamp(0.868989719093);
    msg.setSource(60808U);
    msg.setSourceEntity(121U);
    msg.setDestination(29163U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.490748809616);
    msg.setSource(1139U);
    msg.setSourceEntity(157U);
    msg.setDestination(58955U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.656316527981);
    msg.setSource(32929U);
    msg.setSourceEntity(211U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.0104955803517);
    msg.setSource(5925U);
    msg.setSourceEntity(37U);
    msg.setDestination(10153U);
    msg.setDestinationEntity(166U);
    msg.sys_name.assign("JDRGKIWWTEDLMQOFKLNKXUJBXIZOIHDEVBNDFBJPQRFUYFKIRTHUBRHCUNGJALZCPIKMORZBVALWBBACUYUSXMCYASOLQDBFTXNLPKQILYZRTXHOGABZVPMVSHEDVOGYFFWTICPEAKLORFZHCMCLWJVRHXEVDGCM");
    msg.sys_type = 221U;
    msg.owner = 30665U;
    msg.lat = 0.195251423876;
    msg.lon = 0.358083591062;
    msg.height = 0.610716424583;
    msg.services.assign("UFTAGMEDTIPCDHXCLNBHMBQVBQMHOKDRLQQYGZRXKUINOLOZMAVAERPDFWYJLAMEFJICRUZVVGODMFWNJJIZDSYWTFNYUSEYHBDKLHDOUNBAJLJBTQJPLAUTW");

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
    msg.setTimeStamp(0.90131479979);
    msg.setSource(56322U);
    msg.setSourceEntity(240U);
    msg.setDestination(61304U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("MUUGZEQOAWKBIKZEEXGHRVWVTXEIYTOLMXYZGTTFYEGVIPCJWBJIJGYVNWKQODASPLZRVOURGHKQFPBGSDJMMZMVAFITNCXPOUITHUJBCHCNTYEYSSIRSFYPBMEHXINADSOPDXTJHDUSWJOVEBMKKHMFLLLAEHWIFCUQKOPPQKQBUQSJIJFACQRDZLTCZURRNPYAVFQXRPZVFLENOUNCWVCDXALWXTBGKLMASNMBZ");
    msg.sys_type = 44U;
    msg.owner = 17895U;
    msg.lat = 0.688339535008;
    msg.lon = 0.981426296244;
    msg.height = 0.57366522884;
    msg.services.assign("VCZGLFSGGDRRMCWVSUEFHHVCUZJQVERMGGLZQAMBNLRAVAMUWJPDBFCLPPFZYQBDYSJZEGXANEFUVIDWFHKOO");

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
    msg.setTimeStamp(0.366648426699);
    msg.setSource(55473U);
    msg.setSourceEntity(192U);
    msg.setDestination(20897U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("WGBLYJLUQWQPISYNMWEIGZCXTJQNCTEVMWNVZUKSMYGDRWPOVFPCNGNMGVGBS");
    msg.sys_type = 236U;
    msg.owner = 31255U;
    msg.lat = 0.708859735391;
    msg.lon = 0.840399335489;
    msg.height = 0.779063380583;
    msg.services.assign("MYQOZFHJKBFSYSANJRBEDZQUEKQTGYLSENBEAHUWKDNOLMNRMUGRFDO");

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
    msg.setTimeStamp(0.0446111579659);
    msg.setSource(913U);
    msg.setSourceEntity(211U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(195U);
    msg.service.assign("MQONWQWUPMCKATDHTATSNCGPAVBDKPAJENYEIZVPGTYROFWJYHQGXDCDMAGMVBKUNJJGZQIWSYPBSWALEBZKQSJILKERZFCBLEWBYGZOVJVIRJYXMLQHJFGNYL");
    msg.service_type = 142U;

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
    msg.setTimeStamp(0.501994915422);
    msg.setSource(7640U);
    msg.setSourceEntity(2U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(113U);
    msg.service.assign("DBOYTQJBVOSWHLFSAZEIDFAYWQQTFQMVGSRCYZLEJHHNVGVNEKPFZBMTAODYFWKYKRLTZZQMZXZAEDEDBDBYIMWGFOVCDXUJCPYRTABXWMJKRCBXTDKIHFWCNQLPAUQCVQWWGDXGNHMWEVPPXSPKRIBITTTFVZNBVWLAILHCRNAJCAJQSSYPGVGJOLMPYENHZSPOUXOHGUHOIUS");
    msg.service_type = 128U;

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
    msg.setTimeStamp(0.119753403019);
    msg.setSource(9248U);
    msg.setSourceEntity(48U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(130U);
    msg.service.assign("SOVRQSOKCJZEYFPZCZEYBPLTNNSVWVQLTDTNYXZHMBQETFGWPDWJLVDKDBMCBZIAXRZMBEYLELXYIFRZLTEFXJYMMSMFPEZAVQUQHDDBNTTDULPFPNQQIVVSKWJKJJXBGRAJUAKMOTWDOGVIXIGCQUMAUKIBRAMOOXQISPBAHHCNKLCZRPIYGDLRHFRSGXWABJKKEGHWIUGVHQSPXECGGEIKSAZUWOP");
    msg.service_type = 134U;

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
    msg.setTimeStamp(0.452502633494);
    msg.setSource(59841U);
    msg.setSourceEntity(66U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(165U);
    msg.value = 0.932302424488;

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
    msg.setTimeStamp(0.0976485303001);
    msg.setSource(12292U);
    msg.setSourceEntity(240U);
    msg.setDestination(63567U);
    msg.setDestinationEntity(217U);
    msg.value = 0.529692514013;

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
    msg.setTimeStamp(0.273788214382);
    msg.setSource(38046U);
    msg.setSourceEntity(68U);
    msg.setDestination(18014U);
    msg.setDestinationEntity(145U);
    msg.value = 0.498529637385;

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
    msg.setTimeStamp(0.279071556561);
    msg.setSource(39242U);
    msg.setSourceEntity(97U);
    msg.setDestination(551U);
    msg.setDestinationEntity(182U);
    msg.value = 0.363168547634;

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
    msg.setTimeStamp(0.216706098206);
    msg.setSource(52342U);
    msg.setSourceEntity(47U);
    msg.setDestination(12616U);
    msg.setDestinationEntity(114U);
    msg.value = 0.659042227323;

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
    msg.setTimeStamp(0.51370597587);
    msg.setSource(12975U);
    msg.setSourceEntity(87U);
    msg.setDestination(45133U);
    msg.setDestinationEntity(39U);
    msg.value = 0.457138292798;

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
    msg.setTimeStamp(0.4327601407);
    msg.setSource(6981U);
    msg.setSourceEntity(102U);
    msg.setDestination(8279U);
    msg.setDestinationEntity(70U);
    msg.value = 0.788624674784;

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
    msg.setTimeStamp(0.147310039535);
    msg.setSource(30397U);
    msg.setSourceEntity(141U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(122U);
    msg.value = 0.142116175553;

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
    msg.setTimeStamp(0.640638947691);
    msg.setSource(47664U);
    msg.setSourceEntity(156U);
    msg.setDestination(26797U);
    msg.setDestinationEntity(177U);
    msg.value = 0.207986908215;

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
    msg.setTimeStamp(0.858204241128);
    msg.setSource(29853U);
    msg.setSourceEntity(18U);
    msg.setDestination(26084U);
    msg.setDestinationEntity(233U);
    msg.number.assign("FKUUORHQMMKQGOTMJDLSAFNVEIELTVUWCSWVQNZRNXBYCAURPMRGXCHWAHTIRGMWJXXRDNBBUWNHOLDQACEHECPQZFSEXJNZFIYFBQBROXRHZWHQUIPGGNIESJML");
    msg.timeout = 58648U;
    msg.contents.assign("COXCFHYNJRUTNYSAMGMFYBPCXYEBDVZEBJJRWKYFKYFUNUWEJATGMLUKQLZHGGSGLNJSVFDDTJAXUTWQHZPRPAPPRWNXBMRBXARLCAGIRTQUWDLFRMDLISBPLOOFMTBUISOIQEGVGHCKEYQAXUKEMMQOQDUSZINPREVIBFHGXDZMKKXSBKZCJCNXPSCFWITAZLVHFQTHWKTSVNIOONMKJLHETOVAYDXSRZOZVVDHWDOWHQU");

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
    msg.setTimeStamp(0.624580503318);
    msg.setSource(52031U);
    msg.setSourceEntity(192U);
    msg.setDestination(44585U);
    msg.setDestinationEntity(251U);
    msg.number.assign("KZCYAPSTSIDRBVDWXXGQMGOXWJRITUIBZWCTOEKHFDUXJHLPYZUQXQMKPYFJSNGZAORDBDTEXGDTSAQUCZYPPNERLUWFVLDOWLKJIJLCESTNTR");
    msg.timeout = 16793U;
    msg.contents.assign("MOVXEQRRWWYTJVZVYKYLV");

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
    msg.setTimeStamp(0.426354860574);
    msg.setSource(689U);
    msg.setSourceEntity(180U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(222U);
    msg.number.assign("WDRGOMYOHVYEYBVTCRDIRDSTPSIDIQEWNDUKXJOQZSXJGJRBMUHVSZWYAKFRWHYMXVXMPZSHFWGGZLPBEWNQKMTMHFUFQUJBIUSLMZLAONDLIYBPKTFHVNKPJTPCOFXUGIZJVDOORDCHTJULDXPABPJMFCBELNXTLAIZQWMJSTVXOEOUNMADK");
    msg.timeout = 7857U;
    msg.contents.assign("SMGXQUAVMZKIYKSLLEZAQFHVOCZIVRDCSWLMBYZUULIHKGNURTNBEQABXYKAOZNNPBYVJ");

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
    msg.setTimeStamp(0.912859880132);
    msg.setSource(53113U);
    msg.setSourceEntity(6U);
    msg.setDestination(46312U);
    msg.setDestinationEntity(142U);
    msg.seq = 1648970948U;
    msg.destination.assign("YFTEMLUOQZCIIGUIBYACRDVWWRLZDZBXRTKXE");
    msg.timeout = 33716U;
    const char tmp_msg_0[] = {25, -97, 121, 52, 51, -44, -24, 35, -12, 11, 1, 114, -92, 20, -77, 50, -75, 100, 97, 124, -92, -121, 16, -73, 78, 105, -123, -93, -69, 38, -120, 126, -111, -103, -65, -61, -73, -30, 11, 26, 19, 93, -36, -71, 78, -125, -53, 4, 115, 59, -74, -112, 101, -10, -45, 1, 116, -128, -54, 58, 72, 33, 97, -97, -30, -91, 38, -116, 123, 119, 125, -11, -37, 28, 5, -10, -85, -24, 44, -81, -66, -45, 83, 0, 0, -29, -67, 37, 65, 44, 76, 9, -35, 82, 114, -85, 85, -50, 112, 14, 18, -43, 93, 86, -61, 46, 73, -111, -18, 44, -111, -50, 112, -45, 39, 91, 90, 64, -92, -90, -90, -2, -28, 62, -10, -111, -89, -46, -24, -95, -105, -115, -14, 110, 97, -59, -90, 39, 94, 109, 47, 47, 88, -48, -19, 98, -30, -101, -70, 81, 120, 63, -34, -83, 114, 54, -15, 55, 118, 46, -69, -84, 31, -84, -4, 118, 28, 121, -33, -41, -86, 45, 125, 29, 11, 119, 119, -24, 82, 74, 91, -83, -68, -31, -89, -12, 72, 106, -124, -82, 5, 57, 53, -114, 20, 21, 71, 98, -46, -65, -52, -46, 27, 124, 33, -50, -10, 18, 108, 67, 91, 4, -113, -20, -65, 116, -79, 39, 106, 78, -73, 56, 105, -75, -104, -126, 92, 74, -56, 59, 60, -54};
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
    msg.setTimeStamp(0.94906912168);
    msg.setSource(64308U);
    msg.setSourceEntity(247U);
    msg.setDestination(25085U);
    msg.setDestinationEntity(226U);
    msg.seq = 1095028526U;
    msg.destination.assign("HHKNSSIUDZNRXKWGTXYZJRSSPZBAJDWTVMPIIGFJGLPUOCPNKOYEWADOMGYBHHNEWXDYYOZYCMBDPUDLXBZXCMGJYPOOUWONKITQDIXUWQLSHFXHSRRLFTPYAWTMCNPEEZRMHABFAQEVEQFVZOVFFFRWJLNZVTSILUZLWUCKJHSIGIIXSEUFCAVHCAHZRQ");
    msg.timeout = 54503U;
    const char tmp_msg_0[] = {-87, 23, 10, 87, 109, 30, -77, -23, 50, -15, -20, -18, -68, 102, -100, -128, 13, 8, 91, -128, 62, -38, 110, 51, 2, 1, 41, 19, 34, -77, 19, -52, 47, 86, 19, -103, 126, 16, -99, -114, -95, 2, 86, 107, 95, 91, 91, -34, 95, -123, -62, 32, -99, 28, -110, 70, 14, -21, -58, 109, -42, 28, 94, -39, -45, -59, 77, -26, -88, 126, 8, -1, -87, -46, 20, -38, -14, 24, 117, 117, -10, 112, 75, 114, -20, -126, -112, 74, -69, 126, 65, 126, 81, 65, 106, 65, 80, 108, 16, -18, -12, -63, 125, 59, -106, 113, -102, -6, 90, -19, 40, -12, -127, -83, -117, 6, -26, 34, 124, -114, 71, 33, -109, -29, 62, 27, -78, 115, 110, -97, -114, -46, -30, -1, -108, -56, 57, -86, 50, -54, -93, 11, 120, 81, -101, 31, -111, 36, -53, -50, -31, 62, -69, -81};
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
    msg.setTimeStamp(0.713794280043);
    msg.setSource(59585U);
    msg.setSourceEntity(73U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(96U);
    msg.seq = 2059542266U;
    msg.destination.assign("VRGMVXZYNVJJCRSTVGAKDDZXOKSMHLYXIZPZLNUHWJGAELLDFGEQAGHNJBINEDIVPUBDXLGUHJUCOSEJODPQHOLKEKXSBKJKIKFGWAQFMRQBHSTRMCTUBRTFAGDVBPNNRTPCY");
    msg.timeout = 30905U;
    const char tmp_msg_0[] = {69, 50, -59, 60, 6, -7, 56, -101, -5, 124, -46, 57, 57, -3, 106, -104, 45, -74, 70, -72, 74, 101, -110, -13, -75, 65, 1, -79, -104, -47, -113, 55, -122, 31, 27, -74, -70, -70, -85, 55, -82, 88, -62, -41, 96, -115, 20, 2, -8, 86, 110, -120, 38, 84, 42, -56, 18, -85, -58, 69, 87, 99, -105, 119, 73, 21, 61, 4, 40, 85, -122, 113, 59, -42, -79, -20, -126, 7, 87, -126, -100, 113, -36, 73, -73, 87, 66, 125, -128, -101, 95, -22, -15, -40, 43, 114, 36, 112, 122, 111, 114, 15, -31, 86, -69, -104, -126, 82, -40, 50, 31, -46, 33, -53, -115, 4, 60, 92, -96, -74, -81, -76, -4, -118, 19, -95, 5, 70, 11, 97, -95, 58, -68, -1, 45, 25, -121, -76, 80, -8, 29, -39, -30, 126, -62, -65, -38, -46, -98, 92, -22, 122, -71, 33, -6, 25, -54, 104, -46, 70, -21, 115, -11, 73, 42, 65, 111, -93, -5, -109, 112, -40, 26, 56, -18, 40, 20, -80, 35, 124, 77, -99, -118, 39, 31, 85, -33, -17, 108, -109, 65, 4, 75, 59, -111, 120, -99, -20, 0, 6, -10, -98, 62, 98, 117, -71, -11, -97, 42, -32, 27, -12, 110, 31, 73, -111, 70, -77, -122, -70, 100, 21, 123, -19, 93, 89, -118, -110, -7, -59, -72, -110, -58, -124, 55, 84, 44, -71, 50};
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
    msg.setTimeStamp(0.777664735454);
    msg.setSource(19816U);
    msg.setSourceEntity(59U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(14U);
    msg.source.assign("YDCSDAVGLEDOEHYNLLAJKSVGXQUFSSVOCOSY");
    const char tmp_msg_0[] = {-73, 90, -126, -128, -12, 1, -32, 20, -79, -10, 26, -85, -47, -6, -50, -70, 50, 67, 51, -55, 97, 58, 4, -85, -30, -87, -18, 38, -23, -78, -36, -74, 76, 46, 36, 25, 67, 94, -97, -118, -125, -69, 74, 101, 74, -107, 39, -83, 125, -88, -42, -27, -77, 78, -5, 23, 122, 90};
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
    msg.setTimeStamp(0.0454038066961);
    msg.setSource(17663U);
    msg.setSourceEntity(218U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(119U);
    msg.source.assign("UBARCMDWELSILKLWRFRIHJWGNHRJSVCSQIUDQBVVZJXLSUMTDKKTDLHMPDCMOMMRXYDOPKGBBOWZOXANAAQDNXIYPBGKVU");
    const char tmp_msg_0[] = {-42, 124, 78, 77, 44, 40, -95, 95, -117, -123, 89, -33, 49, 75, 69, 79, -72, 108, -113, -76, -97, -90, 103, 83, 7, 57, -22, -58, 16, 42, -75, 65, -104, 34, 111, -2, 92, 53, 91, -5, 35, -43, 105, -4, -91, -105, -6, 76, 111, 34, -89, -95, 77, -62, 102, 123, -39, -101, 80, -108, -115, -123, 45, -104, -62, 76, -18, -52, -79, 8, -40, 57, -60, 62, 62, -125, -64, 88, 28, 63, -88, -26, 74, -123, -87, -125, 51, 12, -123, 36, -117, -98, 97, 95, 103, 57, -111, -110, 91, -35, -14, 33, -66, 118, 30, -102, -35, -109, 125, -90, 104, -65, -121, -95, -38, -22, -82, -14, -24, 97, -12};
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
    msg.setTimeStamp(0.499738546528);
    msg.setSource(499U);
    msg.setSourceEntity(186U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(146U);
    msg.source.assign("CHAMSYMRYIQDDXOHEVPWYTWGNDCSYLFQLSQBIOQQKDNOGCRDXWHTWECWIJJJ");
    const char tmp_msg_0[] = {-118, 74, 17, 122, -124, 18, 47, -118, 6, 88, -29, -126, -65, 115, 105, 4, 97, 114, 114, -40, -62, 116, -58, 43, -40, -17, 97, -85, -22, -74, 48, 94, 54, -43, 26, 39, -109, 30, 119, 34, 105, -93, -16, -1, 89, 14, 22, 122, 74, 17, -99, 12, 11, -90, -77, 7, -45, 17, 80, -83, -32, 29, 34, -69, 53, 27, -95, -39, -48, -81, -9, 13, 91, 101, 5, 33, 62, 15, 30, -34, 18, 113, -49, 38, 40, -22, -87, -55, 21, -92, -24, -33, -102, -44, 59, -61, 16, -9, 103, 39, 35, -117, 48, -91, -34, -3, -86, -118, -56, -50, -116, -109, 79, -69, 39, 65, -13, 10, 122, 114, 125, -93, -93, -85, -74, 24, 62, 87, -9, -22, 0, 120, 13, -72, 0, -47, 120, -9, -68, -30, -91, -36, 65, -14, 14, 108, 57, -27, 89, -4, -91, 5, -97, 87, -66, -70, -26, -124, 49, -88, -90, 103, 111, -97, -46, -97, -80, 29, 121, -115, -4, 10, 97, -12, -28, 72, 30, -84, -125, 76, -42, -66, -91, -116, -54};
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
    msg.setTimeStamp(0.783996533701);
    msg.setSource(61233U);
    msg.setSourceEntity(175U);
    msg.setDestination(40550U);
    msg.setDestinationEntity(2U);
    msg.seq = 3564924486U;
    msg.state = 217U;
    msg.error.assign("WBDLOMHNYJCEDKGAFNKPBQHMKOUSPJGLNOQAEBWMVIPRYCZNWUOUGCXJPPJGUDJWWVMUFVFRMKZCHDPIEDACYXTSYGENXLPBRTPPQQDGQIWXYVFOESBXFSHORWISTKBLNZLGKAIXWVXURDETOXMJEYEBVVHOBFTRZHMRSUZSDRSIUOFADVGYWKLZCNVUQTZHYCLMIGQFJENCPCFCQJTIATNFTAISZXHXKLVAKKGMTZYLANRUDSYLABQWRHEM");

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
    msg.setTimeStamp(0.583419538956);
    msg.setSource(54662U);
    msg.setSourceEntity(106U);
    msg.setDestination(47091U);
    msg.setDestinationEntity(88U);
    msg.seq = 379431805U;
    msg.state = 96U;
    msg.error.assign("XZYSCHZCBQYRLFIDQUELVIDNQKVJJDSXDIDHJKMRLACNTFAOLWMMMFSRJXEWXAWGIWTLAFLWOVVPGHTQKMEFZHBNFBCOEPGYWTPUVCUHEBCSVD");

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
    msg.setTimeStamp(0.351123076326);
    msg.setSource(19818U);
    msg.setSourceEntity(4U);
    msg.setDestination(10925U);
    msg.setDestinationEntity(186U);
    msg.seq = 852198214U;
    msg.state = 137U;
    msg.error.assign("IAPXFNGAXZBLHEAFACQTRTOXJCEAKEFHZGBMQRBFGHPDAVLSKJFQNZICQYLVTDGGPFZHTVWUVMMLUOBYZRWCQTUGWESNXLEKUYJFLXRZLEDJCHRQDRDYZMJVYSKGIFJHIWHBFXOWNDIHIYEMFVBSIWSKBMDCQRNMEXTLYSYDJKINDAEAYPTHOEXVQMJTTARNOSWDZVSBOYZTWNKO");

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
    msg.setTimeStamp(0.81016948256);
    msg.setSource(37547U);
    msg.setSourceEntity(213U);
    msg.setDestination(29561U);
    msg.setDestinationEntity(118U);
    msg.origin.assign("SQFLUKNYXBMEIHVKWDIELALUXVZODATQHJTMHHUIYKHTLSSSXAIYSDCPFBWRZUTTGLDAZUOKODHLBDZAFPVUHTVMWASGKGIWGIJARVBWSXWBSEPCOVZVFWAYBNRJFEYJPNOXNPTPDMCGGWI");
    msg.text.assign("VOZYXJWIKYVCUJSOLNDLBCMNVRSXGIZZRPRMVVUIKHWEPOUUWEXLPGCNLYSJKKEDXMLOEUUHBGKRBODKLSRWHMDJMCXQUHCVDIUOOQPAYFFLIIJSITJWEPXIE");

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
    msg.setTimeStamp(0.58523808122);
    msg.setSource(24286U);
    msg.setSourceEntity(233U);
    msg.setDestination(53788U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("FAOBVRJXESSHONNFZYZMZPPEGVWRKFMIEWZYBUJYIBEUCDVRBTWJIABGBQUDWTHTDSVSUWNFPSOCGHFFFNJOQKHUTQUJXLAXVKFCCNXXVDTEQSABHRHMNADLYUEEYIMAXAPCOSEUXDJRRNKZJXWYTHQDKLWVKZQOGIEQWMRIVDMATRUKXMDDQL");
    msg.text.assign("GLLGOUXPTCDYRRWGCKTNWTXTYXLPYQUHAWZUODWHAXBXSUGJLXQJEYILQMMMTDSYNJAHVHPZPQFAMDPGIDMLWWYZFEVFIGEWZKGHZDPUFVNTYCLWJAKJUACCBMFITYMNKTAP");

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
    msg.setTimeStamp(0.886137995581);
    msg.setSource(13402U);
    msg.setSourceEntity(19U);
    msg.setDestination(6989U);
    msg.setDestinationEntity(21U);
    msg.origin.assign("CCWHWIOIOKHCFNJAPDKTXQIBSVWYXCMIZLBXMJHPMHTUPDDH");
    msg.text.assign("NCNKUHLOTSXVNPCISKBUIXZTCSTDVNBHRZJFVZREECCLYEQFIOSATTIRGOLORMEUPXTBVJWPAPDWBREJDYIWNYGCYXZTOULIWPJWWCOWJBCXXDKLWGQAHPBVLBZRVRPVITGRBAHAEFHLQWFKDSMCMAQYDJPFYMQGSMLJYBFGSGFQVYGNZJKAZBSOVEUPDYQYAGJDRUF");

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
    msg.setTimeStamp(0.0407134046627);
    msg.setSource(51407U);
    msg.setSourceEntity(244U);
    msg.setDestination(35858U);
    msg.setDestinationEntity(177U);
    msg.origin.assign("NWWKVXIWRROTKKPXFQYFHDFIYSABUZZPLRBGYMAFUKXYMGJZXRWHLGKKGAWSXLDTQWRDUTIMDJTVFIYFGNEVUQJOTSPQGVOPQDEGRRFUNNCRPTVYMCNVILZMMXOYZMCBPSFUBADJWZEQOBEYBJBJOICHAKHVTOZEYCLEVIAWNDSCRXPOPSHLZOTYHAKXXGGWBJQSKPAALRAQQHMNSBZBLMJLNIEGCEDJSPUHCMTUXV");
    msg.htime = 0.279644918818;
    msg.lat = 0.387616952694;
    msg.lon = 0.0395261631096;
    const char tmp_msg_0[] = {-69, -53, 10, -97, 95, 26, -77, -63, 108, 19, -91, -36, 56, -21, -108, 38, 24, 94, 65, -119, 118, 7, 33, -4, -2, -18, 108, 74, 124, 119, 50, -17, -124, -7, 35, -80, 51, 74, -95, 42, -7, -24, 29, -64, 25, 33, 73, -52, 57, 44, 53, -93, -77, -120, 24, 55, -75, -55, 15, -87, -18, -124, 52, -74, 0, 22, -29, 78, 83, 41, -111, -78, 107, -59, -124, -12, 36, 123, 61, -47, -101, 21, -27, -78, 25, 53, -24, -28, 11, -102, 76, -32, -117, -25, 33, 55, 12, 66, -29, 35, -43, 114, -81, -120, 56, 97, 82, 113, -107, 50, -108, 43, -52, 81, 84, -114, -17, 28, 85, -14, 86, 115, 84, -86, -22, -95, 64, -29, 26, -86, 42, -96, -64, -92, -93, 44, -23, 87, -52, -53, 12, 66, 122, -54, 30, 49, 27, -121, 90, 70, -19, 68, 81, -100, -48, 109, 78, -68, -127, -17, 13, 97, -20, -59, -63, -17, -37, 10, 58, -55, 47, 104, 34, -61, -90, 35, 30, 21, -91, -63, -71, 35, 25, -8, 56, 87, 10, -126, 84, -67, 119, -96, -18, -107, -80, -31, -109, -7, -25, -89, -27, 15, 10, -67, -21, -14, 63, 99, 1};
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
    msg.setTimeStamp(0.0273007358548);
    msg.setSource(15791U);
    msg.setSourceEntity(132U);
    msg.setDestination(20557U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("ZFWSIRPUUILZOOMPYOOQHWFQPTDDRYGJKNJAFSCUPCJWGKAMPFHUTWHYHLHKMWLHCEWBVYZAJMYDKJLTTMOEFYBQSZLJMYMYTRLBKSIFCOIDXXTBQMXXGSZQVFVJLRASGPZKXKHHIHUQNXBERYNRUKGNEASIZVTZLTXVEILNDNOLPXCPRRMGEZJRTTGPQGBAXUARQEEDSCYJNIUCMOVIDWIXBUECGUKANZWNVVASD");
    msg.htime = 0.135344734151;
    msg.lat = 0.072838964408;
    msg.lon = 0.219711431041;
    const char tmp_msg_0[] = {63, 20, 33, -48, 10, -59, -75, -118, -125, -73, -63, -16, -40, 8, 22, 78, 18, 42, -50, 60, 95, 111, -78, -72, -113, -121, 24, -50, 45, 62, -31, -96, 105, -48, 13, 29, -48, 14, -2, 38, 79, -94, -5, 28, -95, -10, 31, -91, 9, -94, -31, -33, -6, 33, 45, 120, 118, 95, 35, 57, -1, -122, -128, -30, 73, -55, 124, 85, -107, -124, -5, -19, -108, -48, 46, 116, -59, -4, -96, -92, 9, 75, 66, 63, 115, -13, -91, -68, 119, -47, 20, -37, -37, -116, -123, -106, 16, 83, -119, 31, 56, -53, 61, 60, -108, -117, -68, 63, -101, -49, -73, -94, 0, 71, 12, -22, -4, 107, -2, 58, -54, 70, -49, 122, 95, -57, 106, -120, -117, -91, -121, -85, -98, 121, -100, -73, 45, -48, -111, 104, -80, 77, -125, -102, 40, -113, -79, 82, -70, -115, -81, -25, -121, -78, -5, -38, 125, 118, 86, -125, -52, 75, -87, 91, -123, -26, 58, 45, -110, 65, -111, 106, -48, -64, -73, 8, 103, -115, 34, 44, -119, 25, -80, 19, 100, 19, 21, -46, 45, 42, -119, -42, 37, -126, 114, -106, -48, -121, -61, -119, 41, -22, -52, -62, 82, -76, -82, 57, -11, -72, -91, 112, -106, -62, -128, 114, -24, 11, -13, 11, -126, 96, -76, 77, -53, -17, 115, 95, 109, -64, 73, -49, -83, 122, 97, 40, -117, 27, -58, -47, -43, 70, -92, 26, 85, -98, -96, 27, -2, -123, 59, -114, -118};
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
    msg.setTimeStamp(0.401632111048);
    msg.setSource(37962U);
    msg.setSourceEntity(213U);
    msg.setDestination(48909U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("IPDHULBPESWQYZECGYFEUPDJKDFEXCTSOMTMKIMGTMNJJGABVDLFLTEMQRQAGBBJJZTCAATLQRMBYCVJXHNEFASNOPXOWFIRRCGEROYJPNVHQWXFNZWYYNLWZIAHZGAGSGHNVWJVQSOSIZWRSALHBMOTEDZSPFLKCUEDBMBXCXIUBLMXBAYQOUVKYXCEZKKKYFIQURRKUDZQTDWGQIFWVHJKITRDLODOJHXZFAXUNUYPR");
    msg.htime = 0.796629741994;
    msg.lat = 0.211183863217;
    msg.lon = 0.0684022647403;
    const char tmp_msg_0[] = {13, 101, 43, 105, -53, -99, 119, 17, -37, 91, 85, 13, 46, -104, -109};
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
    msg.setTimeStamp(0.693066545846);
    msg.setSource(50552U);
    msg.setSourceEntity(214U);
    msg.setDestination(5451U);
    msg.setDestinationEntity(131U);
    msg.req_id = 40387U;
    msg.ttl = 62187U;
    msg.destination.assign("QUKOBDNBIKFWKZBFOMOHRMCXNHBMTWZLYFGEWHDVFJQQCKMCASRDDNQBKRCHUNTGYCAWCPJJTRINYYMVHTVAAVVEUKGWMAILTANIEOXIKQPYJULBXDOUAUXLYNHDLMVSSQCCGATIMXLDDLCX");
    const char tmp_msg_0[] = {-33, 89, 75, 100, 64, -96, 39, 50, -18, 35, -109, -56, 107, -94, 81, -4, -15, 91, 13, -14, -25, 39, -111, 48, 4, 4, -10, 11, 54, 38, -11, -4, -44, 111, -78, -60, 93, 104, -68, -17, 19, 42, 57, -95, 92, 104, 114, 23, -35, 64, -28, 37, 32, -12, -19, 7, -64, -111, -126, 10, 54, -96, 113};
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
    msg.setTimeStamp(0.212639225816);
    msg.setSource(62362U);
    msg.setSourceEntity(80U);
    msg.setDestination(20346U);
    msg.setDestinationEntity(68U);
    msg.req_id = 25015U;
    msg.ttl = 18067U;
    msg.destination.assign("VHGAVSOMMCZRJLEKWRSIAYMWGHNEKCOCQYRFHLQUEZQDZGYFROEOLZUJQXJHQFXVYEXXVYAV");
    const char tmp_msg_0[] = {-32, -113, 36, 47, -34, 72, -119, -114, -104, 42, 52, -116, -53, 29, 109, 56, -40, 99, 28, 77, 65, -79, 101, -58, -63, -48, 60, 20, 122, 33, -51, 75, 104, -7, 45, 97, -95, 73, -13, -123, -122, 31, -15, 66, 62, 57, -111, 1, -49, 39, -90, -116, 61, 3, 116, -88, -7, 70, -79, 122, -33, 117, -112, 52, -19, 2, -95, 65, -113, 46, 117, -112, -36, -57, -84, 28, -79, 27, -86, 33, 76, 14, 5, 51, 44, 59, -10, 96, -98, -121, 126, 21, -77, 1, 2, -95, 90, 33, 44, -32, 0, 99, 26, -6, -108, -104, -39, -124, -113, 117, -121, -11, 120, -42, 46, -94, -76, 32, 123, 17, 117, 47, 10, 18, 101, 69, -13, -37, 54, -36, -95, -83, -20, 104, 41, -1, -95, 36, -63, 36, -41, -123, -11, -70, 92, 119, -114, -94, -110, -117, 119, -51, 124, -3, -106, -27, 32, -120, -7, -10, -56, -72, 74, 54, 126, 91, 11, 102, 125, -29, -11, 15, -120, -20, 124, 45, 48, -85, 6, -73, -100, 88, -112, 37, -121, 25, 16, -3, -53, 84, -103, 116, -76, 64, 56, 74, 99, 30, -25, 98, -100, -128, -18};
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
    msg.setTimeStamp(0.74367335806);
    msg.setSource(8972U);
    msg.setSourceEntity(243U);
    msg.setDestination(40719U);
    msg.setDestinationEntity(214U);
    msg.req_id = 8783U;
    msg.ttl = 35186U;
    msg.destination.assign("VIPEIGRQRJGICQNDJJAUAKNDDBGPSXVHEQFMXQKSKNAGGYEOWLMLZMFROFKTTSGOCUBUTWOUZNEPCLXSQHDKNVDTUNSHEJOPSUHNJAWHFIFNSIKPGTVJXFCAGDLBVIZBKZIYQDQWUTZJAILRZEZYLPMANJKCUMYVUIAMFMXQOYCYTDYBHDWWRQTHVEXPRBWJYBXHHHWBCMMLMLGTBYR");
    const char tmp_msg_0[] = {-7, -9, 86, -84, 79, 53, 4, -38, -21, 71, 21, 31, 75, 121, -5, -63, -46, 94, -14, -114, -42, -63, 103, -123, 103, -69, -6, -48, -36, -63, 93, 115, -77, -127, -82, -95, -44, 101, 64, -38, -93, 56, -7, 44, 34, 87, -119, 12, -98, -104, 35, 124, 74, 68, -119, 13, 77, 18, -70, 52, 89, 45, -3, 27, -85, -18, 54, 34, 41, 113, 85, 104, 69, -113, -12, -44, 39, -98, -51, 50, -115, -37, 3, -34, -71, 3, 81, -1, -68, 76, 87, -123, -72, -108, -11, 61, -99, -120, -24, -93, -120, -34, -4, 121, 115, -16, -117, -89, -22, 13, 76, -109, 61, 77, -90, -51, -66, 48, -91, 41, -119, -123, -106, 33, 103, -15, -16, 80, 15, -4, -123, 41, -106, 42, 13, -29, 79, -18, -127, 0, -48, -86, 69, -43, 78, -85, 107, 15, -46, -30, 74, -81, 34, -59, -90, -59, 58, -105, 6, 76, 46, -50, 79, 83, -94, 13, 20, 108, -103, -91, 2, 106, 26, 18, 33, 35, 99, -113, 59, -124, -63, -17, 46, -81, 99, -2, 121, -5, 28, -22, -81, -16, 54, -109, 47, -116, -26, 114, 20, -54, -63, 64, 114, 93, 29, 91, -122, 55, 13, 24, -74, 81, 23, -4, -50, -7, 71, 87, -58, -30, -109, -101, -99};
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
    msg.setTimeStamp(0.54078118804);
    msg.setSource(53565U);
    msg.setSourceEntity(214U);
    msg.setDestination(9126U);
    msg.setDestinationEntity(170U);
    msg.req_id = 14559U;
    msg.status = 244U;
    msg.text.assign("SRJNGTUZUBSFYR");

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
    msg.setTimeStamp(0.346441129305);
    msg.setSource(52372U);
    msg.setSourceEntity(95U);
    msg.setDestination(60164U);
    msg.setDestinationEntity(177U);
    msg.req_id = 22087U;
    msg.status = 30U;
    msg.text.assign("DZEUXYJYBENJIRPQLXGKWBZTABOGWRTFAHBMHMMBTPZVWMMHDEGQCTEBJDUFRJDKVDHXGTEOFCXQGOBKHNKRYGJAMJFTQDCXPQUNQZKPYWDSAJOIVGUHPAQSVLGZHWSLVHGSQSSSNJ");

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
    msg.setTimeStamp(0.502531995531);
    msg.setSource(13235U);
    msg.setSourceEntity(252U);
    msg.setDestination(48523U);
    msg.setDestinationEntity(159U);
    msg.req_id = 3103U;
    msg.status = 187U;
    msg.text.assign("YOXZXJJLTZJWCLRYXEMZFLZIGNDOQFNQRUXPFODOXBPYPSAXTWLKYUFGBJABTINJGCOYIIISRKATSHFKNBEUAIFWXBDDSNVEMGKMBLYGQXSEZCBHMUNJPOHXSCWAMAFKQWCIPCVUSEHMRJFRQLLQILMPZMWPUAKDQLDUSGWHPFATVKQLDSTYDHWUXZNRBQTJCCUWDVPZOVHVTOGVVJTBWNRETJEKOYBDRVAKYYKNCPFEHCGUGHEMHRZRM");

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
    msg.setTimeStamp(0.195463486361);
    msg.setSource(14883U);
    msg.setSourceEntity(19U);
    msg.setDestination(45859U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("ENAKNZGBPCLVB");
    msg.links = 984432590U;

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
    msg.setTimeStamp(0.85068372072);
    msg.setSource(60254U);
    msg.setSourceEntity(180U);
    msg.setDestination(32815U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("OZQOCMYUAEVDITKXXOQKNFTNUQCBICRMPZXJVTEUNFBESSBSSPDZXIGMDJUPUYJIUBHTDPAHEZPZTFMSQHDNLBCSUCEDZVDUQBPEPHYYMLCXKQOSRBKNAKWQBWSWRYIXJGCADTMHYFRHJGRLDWMZKVLVURGGISLJJTZYIXCAKHWNNXHQ");
    msg.links = 1540630616U;

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
    msg.setTimeStamp(0.643755822839);
    msg.setSource(53620U);
    msg.setSourceEntity(220U);
    msg.setDestination(21316U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("CDEBGTJMLJVSYMLEQMHCPAOABFIKWGKSBWXVTLZQWXTFVUYJAYCLUBOTYRFCKWVGLCZUOWCMNDVSBMPSXPPHEYTTXVMV");
    msg.links = 125475042U;

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
    msg.setTimeStamp(0.00306631223962);
    msg.setSource(25276U);
    msg.setSourceEntity(80U);
    msg.setDestination(4180U);
    msg.setDestinationEntity(106U);
    msg.groupname.assign("TXASKYBHMXEDPZOJZEZCLDZZRAYEEAVOPTBMLFOIRIASWEMBDQEYHNGFLOCYVFLPCYQDGDNTKJMTVSOMXXHTGGCTUXWZOUFLRDFZNWFLLWQNYOVHJPLFASAJLPGIKIOICJPWDVVYPMDPPAUHTSFCNAFVRITKBUIMCJXTITJWCRNHUHOMRUAJYRCPBURSBMESKWSWQQQXEK");
    msg.action = 146U;
    msg.grouplist.assign("NXVYRXJGSDTKHMAYXIHCAKVGDHEKGDODQIUBHOKMYCADCTUBDQFCIGVPLEJAHBXOUHNJPZQJFWAXDQZPRVZKNLLEWNSE");

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
    msg.setTimeStamp(0.991055004041);
    msg.setSource(30772U);
    msg.setSourceEntity(60U);
    msg.setDestination(6565U);
    msg.setDestinationEntity(135U);
    msg.groupname.assign("FOABSRXSAOBUFIVSLVUOKKVAFTFCQYFQVKUELTTRKGGSLRDFTSEXUCRABAPXPYHJWJWGBEYFWJAVPIZTCMGTPJBINKLBMHFCMNPPRWW");
    msg.action = 84U;
    msg.grouplist.assign("BDDDTZIZEETDINFFOZRCIUWTDGHZYNBACHSZHXQOLOWHLKKNGNPBJXXNGOVJYNCDVBVJTOXLVIFYMLWWICRPSRSIUWQBPFSRTHZKMCERRQPRSSQAABOMKNYGPEZWUEOXFKERZVPARQJLFPHDAMGLJEDKTLPMWUKTIISSKBMCSPSCFGXLXNUVCEOJTZLRXATYNAEZMHUAOIEHJWHHXYUQFDWJMUQJPYBFBYIYLVG");

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
    msg.setTimeStamp(0.532665682233);
    msg.setSource(47762U);
    msg.setSourceEntity(11U);
    msg.setDestination(29653U);
    msg.setDestinationEntity(2U);
    msg.groupname.assign("EAPVDHHDRUYBGPII");
    msg.action = 165U;
    msg.grouplist.assign("KKEHZXHYQXKICZBUJNWIHSXRGBTAJLXACMSKLBOUFTSWNLFCDJYCFFLQJOCIIHLMDZTTCQVWTEREDAKKNPFEWROCLIOFYOYAXQQTUWSANRIJIQYKJVYNPGGUOBGITPUXMQSALKWBDFDRPEPZRKMAEVZNUZPRMVHTHPBGMZECTXELEDGISNYKCVJWHDSUMBDGMNCQSSQNVJPDWONBWLMBUTRJFVSZQIPRYHVGVYXXHEJOHB");

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
    msg.setTimeStamp(0.65989541407);
    msg.setSource(21757U);
    msg.setSourceEntity(223U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(1U);
    msg.id = 182U;
    msg.range = 0.402961443666;

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
    msg.setTimeStamp(0.95338593163);
    msg.setSource(50726U);
    msg.setSourceEntity(44U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(52U);
    msg.id = 157U;
    msg.range = 0.483353912201;

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
    msg.setTimeStamp(0.841216863138);
    msg.setSource(33496U);
    msg.setSourceEntity(249U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(44U);
    msg.id = 39U;
    msg.range = 0.785788040183;

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
    msg.setTimeStamp(0.298009376224);
    msg.setSource(55211U);
    msg.setSourceEntity(5U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(164U);
    msg.tx = 155U;
    msg.channel = 53U;
    msg.timer = 15848U;

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
    msg.setTimeStamp(0.94916560117);
    msg.setSource(25265U);
    msg.setSourceEntity(0U);
    msg.setDestination(54504U);
    msg.setDestinationEntity(105U);
    msg.tx = 151U;
    msg.channel = 14U;
    msg.timer = 19150U;

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
    msg.setTimeStamp(0.274082358977);
    msg.setSource(4857U);
    msg.setSourceEntity(190U);
    msg.setDestination(45012U);
    msg.setDestinationEntity(5U);
    msg.tx = 44U;
    msg.channel = 15U;
    msg.timer = 37868U;

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
    msg.setTimeStamp(0.378319352513);
    msg.setSource(18176U);
    msg.setSourceEntity(38U);
    msg.setDestination(52411U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("VBXCAGZDOIFXXUHCSHNHUWJDSDYVCICBBWYO");
    msg.lat = 0.991334572093;
    msg.lon = 0.27641528703;
    msg.depth = 0.139986046136;
    msg.query_channel = 57U;
    msg.reply_channel = 58U;
    msg.transponder_delay = 217U;

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
    msg.setTimeStamp(0.0240454564073);
    msg.setSource(33679U);
    msg.setSourceEntity(10U);
    msg.setDestination(21489U);
    msg.setDestinationEntity(141U);
    msg.beacon.assign("LGINEKVGVWNIBPMAGWWBGCQDWCZLNBXZGJESWPZRLCBJBCQHOSKOVKFNADIYUMCJSFXBKFLVGHEBUVXEILFAEYQZTGYYXSQXYOPUAHREJGCDVMMDSWDKOGNZ");
    msg.lat = 0.423967034446;
    msg.lon = 0.604870350138;
    msg.depth = 0.0406381405021;
    msg.query_channel = 17U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 62U;

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
    msg.setTimeStamp(0.59766000095);
    msg.setSource(54045U);
    msg.setSourceEntity(215U);
    msg.setDestination(25875U);
    msg.setDestinationEntity(235U);
    msg.beacon.assign("HXEPKJJVPPYIMQCNQXTRPMSKHMYNXHBBGBYDDFTUJMRYQEGHBHFSAFLOZVAJOLFZBRZUWIHLTDVFMWZBZHCBXXIONDWHIMVRMJSGBPYEJKYNRETMFRBWIPZKJUWAZUSKFELRGGUSDGCOAWZSEZYXTLPCLCYRVLJSDWMMDTITEQYNEOFLSAZNQGVKNXVJOKVLATFF");
    msg.lat = 0.0343089482538;
    msg.lon = 0.0947834752482;
    msg.depth = 0.343045089534;
    msg.query_channel = 227U;
    msg.reply_channel = 14U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.668711610541);
    msg.setSource(57970U);
    msg.setSourceEntity(62U);
    msg.setDestination(62857U);
    msg.setDestinationEntity(36U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.472986601875);
    msg.setSource(25268U);
    msg.setSourceEntity(211U);
    msg.setDestination(20818U);
    msg.setDestinationEntity(107U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.293405626656);
    msg.setSource(14502U);
    msg.setSourceEntity(63U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(251U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.936736605126);
    msg.setSource(30536U);
    msg.setSourceEntity(210U);
    msg.setDestination(63928U);
    msg.setDestinationEntity(233U);
    msg.address = 254U;

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
    msg.setTimeStamp(0.179483071522);
    msg.setSource(57545U);
    msg.setSourceEntity(203U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(104U);
    msg.address = 157U;

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
    msg.setTimeStamp(0.419992580457);
    msg.setSource(27858U);
    msg.setSourceEntity(186U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(210U);
    msg.address = 140U;

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
    msg.setTimeStamp(0.404423599976);
    msg.setSource(49597U);
    msg.setSourceEntity(49U);
    msg.setDestination(63328U);
    msg.setDestinationEntity(237U);
    msg.address = 49U;
    msg.status = 237U;
    msg.range = 0.263578171281;

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
    msg.setTimeStamp(0.677892800204);
    msg.setSource(41240U);
    msg.setSourceEntity(102U);
    msg.setDestination(24112U);
    msg.setDestinationEntity(216U);
    msg.address = 54U;
    msg.status = 224U;
    msg.range = 0.493489596709;

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
    msg.setTimeStamp(0.7448207709);
    msg.setSource(32517U);
    msg.setSourceEntity(27U);
    msg.setDestination(23367U);
    msg.setDestinationEntity(171U);
    msg.address = 132U;
    msg.status = 238U;
    msg.range = 0.664268135691;

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
    msg.setTimeStamp(0.535717136893);
    msg.setSource(41342U);
    msg.setSourceEntity(31U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(122U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 52025U;
    tmp_msg_0.sys.assign("LFQBHAKERLRBWFTNMYUMNGWKQEJGSCXBJEFZCXVCHUPKLAKPJCTXPXSTM");
    tmp_msg_0.value = 0.155529609451;
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
    msg.setTimeStamp(0.233925431838);
    msg.setSource(58917U);
    msg.setSourceEntity(4U);
    msg.setDestination(21979U);
    msg.setDestinationEntity(38U);
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 3568005356U;
    tmp_msg_0.status = 55U;
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
    msg.setTimeStamp(0.107965482946);
    msg.setSource(7461U);
    msg.setSourceEntity(189U);
    msg.setDestination(25213U);
    msg.setDestinationEntity(101U);
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.htime = 0.0885015206461;
    tmp_msg_0.context.assign("XKOYHJWVUXNREIQGEYSWMMZMVRTOSFEIDHBDBAUAYPOIJVZGHLOKSYCRMYUSCFDDEJHCNJYGKRJIXOICKAORKMUKRXZZHDOFLPLSPWQIPJWGXDPQBOOXYTVVGGZQFECZUFTUVQWLWFBQNLTHEJRIHAC");
    tmp_msg_0.text.assign("DYFLIJJGGOFVHKEFANHN");
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
    msg.setTimeStamp(0.200453787452);
    msg.setSource(63841U);
    msg.setSourceEntity(207U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(247U);
    msg.enable = 220U;

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
    msg.setTimeStamp(0.247804991891);
    msg.setSource(47777U);
    msg.setSourceEntity(149U);
    msg.setDestination(64489U);
    msg.setDestinationEntity(161U);
    msg.enable = 114U;

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
    msg.setTimeStamp(0.686729424199);
    msg.setSource(31945U);
    msg.setSourceEntity(143U);
    msg.setDestination(59417U);
    msg.setDestinationEntity(5U);
    msg.enable = 19U;

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
    msg.setTimeStamp(0.457750435372);
    msg.setSource(59984U);
    msg.setSourceEntity(166U);
    msg.setDestination(49922U);
    msg.setDestinationEntity(5U);
    msg.summary = 134U;
    msg.level = 184U;

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
    msg.setTimeStamp(0.640530097453);
    msg.setSource(40019U);
    msg.setSourceEntity(160U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(139U);
    msg.summary = 50U;
    msg.level = 186U;

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
    msg.setTimeStamp(0.775270373959);
    msg.setSource(1993U);
    msg.setSourceEntity(67U);
    msg.setDestination(1885U);
    msg.setDestinationEntity(206U);
    msg.summary = 203U;
    msg.level = 217U;

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
    msg.setTimeStamp(0.108710672772);
    msg.setSource(10584U);
    msg.setSourceEntity(177U);
    msg.setDestination(48263U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.400372160981);
    msg.setSource(23776U);
    msg.setSourceEntity(210U);
    msg.setDestination(108U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.324779402062);
    msg.setSource(32138U);
    msg.setSourceEntity(138U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.409819024758);
    msg.setSource(39543U);
    msg.setSourceEntity(211U);
    msg.setDestination(8958U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.51273730233);
    msg.setSource(64775U);
    msg.setSourceEntity(42U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.103972312077);
    msg.setSource(19580U);
    msg.setSourceEntity(241U);
    msg.setDestination(45591U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.822637339674);
    msg.setSource(22969U);
    msg.setSourceEntity(0U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(81U);
    msg.op = 48U;
    msg.system.assign("RFCEVJDETSSNTAZAULSPDHKDMQVJG");
    msg.range = 0.598784159046;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.879031361089;
    tmp_msg_0.y = 0.415323836115;
    tmp_msg_0.z = 0.806531083645;
    tmp_msg_0.phi = 0.115137708818;
    tmp_msg_0.theta = 0.721621982625;
    tmp_msg_0.psi = 0.181521443611;
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
    msg.setTimeStamp(0.402271961782);
    msg.setSource(43673U);
    msg.setSourceEntity(44U);
    msg.setDestination(8413U);
    msg.setDestinationEntity(80U);
    msg.op = 200U;
    msg.system.assign("JSWLMIYMJUYMAKZHGFHPYXRZSONYOCGECOWUVQLZPOQRDUTRFJNNEXEUUETNDBGEGZFZOEMOVTRVNXPIWPPDAXRZ");
    msg.range = 0.397378921717;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.492379584466;
    tmp_msg_0.speed = 0.778881548454;
    tmp_msg_0.turbulence = 0.685593224783;
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
    msg.setTimeStamp(0.818115989213);
    msg.setSource(63044U);
    msg.setSourceEntity(104U);
    msg.setDestination(20101U);
    msg.setDestinationEntity(136U);
    msg.op = 240U;
    msg.system.assign("KIVMXFAMZMLSKZTDFAQMNYDNZEIXMUQLCIXPJBXHEYVNZKSELBWUXIDTVJAQGWGDMRHFBSXWTFYZDSTGFAJNFYRXJSYDKUWNCCWLCBRCVWVJEHI");
    msg.range = 0.886691766852;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.150066770818;
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
    msg.setTimeStamp(0.462301386335);
    msg.setSource(5491U);
    msg.setSourceEntity(205U);
    msg.setDestination(51037U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.843391131498);
    msg.setSource(53957U);
    msg.setSourceEntity(34U);
    msg.setDestination(19973U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.0947112827802);
    msg.setSource(57460U);
    msg.setSourceEntity(118U);
    msg.setDestination(27208U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.70419580812);
    msg.setSource(14026U);
    msg.setSourceEntity(46U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(164U);
    msg.list.assign("IAVLRLBKYQMPVZPEWDJTLFHRZQXVFSXAGEZIOYEFJNWWQMBETSGQXKHOCTCPNJDECGOJDCDVPKHHWIMVWMMXAQBKQUBSKRALENWJUBGYVTNPWIFEDPQTSMFKBFAUUAGTUFZORUWXSLUCCFAJXYEKTYNIDQBCGLMSNHENQSHGHPRAZZVUIJIDI");

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
    msg.setTimeStamp(0.991759490545);
    msg.setSource(39694U);
    msg.setSourceEntity(48U);
    msg.setDestination(27362U);
    msg.setDestinationEntity(16U);
    msg.list.assign("FRNRBVUCOTNWAXUTMZPDMQXJQHVQWKXVFHATOFBDQUUHBCKSBJZOOANONSJYXLPATLEMHHWKPLSGIIYVGICXZFWKKEBVHLLMLMRSQLEHZAASUCEDRGOTOGMAIYKPJERJFJSHYQMXWQWNXCBVHVMAQDGCTGGAYFWRPIVNFCUYBVZQKXIIHORPMWTZUGDFNSLOCDZFTTSPDUKJEJBPLRYPWPBRLWEJDCKNANQCUXRJDGVIYNZOKF");

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
    msg.setTimeStamp(0.945251668706);
    msg.setSource(19516U);
    msg.setSourceEntity(200U);
    msg.setDestination(25267U);
    msg.setDestinationEntity(59U);
    msg.list.assign("TTYVZWCEEQOXJLMOAHJWMIUGBLNIUFCWLNXEBKKTWEAXFVWAGHIYYDFISZTVGWLLCRYBCGEPWTMJOHNYDKQXFIRSPZTGSHUUXGQENBBFGOAUQDPOKIPHABXMLCMPIVX");

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
    msg.setTimeStamp(0.629216577287);
    msg.setSource(17666U);
    msg.setSourceEntity(57U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(212U);
    msg.value = 14278;

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
    msg.setTimeStamp(0.845291956256);
    msg.setSource(23268U);
    msg.setSourceEntity(50U);
    msg.setDestination(11258U);
    msg.setDestinationEntity(158U);
    msg.value = -32543;

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
    msg.setTimeStamp(0.7833746094);
    msg.setSource(54868U);
    msg.setSourceEntity(80U);
    msg.setDestination(42659U);
    msg.setDestinationEntity(31U);
    msg.value = 31887;

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
    msg.setTimeStamp(0.319143748227);
    msg.setSource(31623U);
    msg.setSourceEntity(90U);
    msg.setDestination(16088U);
    msg.setDestinationEntity(219U);
    msg.value = 0.61620300822;

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
    msg.setTimeStamp(0.791536521008);
    msg.setSource(55441U);
    msg.setSourceEntity(216U);
    msg.setDestination(64785U);
    msg.setDestinationEntity(248U);
    msg.value = 0.64948151319;

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
    msg.setTimeStamp(0.899763608242);
    msg.setSource(61606U);
    msg.setSourceEntity(191U);
    msg.setDestination(10212U);
    msg.setDestinationEntity(27U);
    msg.value = 0.348667873629;

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
    msg.setTimeStamp(0.511035683197);
    msg.setSource(25774U);
    msg.setSourceEntity(7U);
    msg.setDestination(41954U);
    msg.setDestinationEntity(31U);
    msg.value = 0.426608073016;

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
    msg.setTimeStamp(0.684380090255);
    msg.setSource(17574U);
    msg.setSourceEntity(147U);
    msg.setDestination(12936U);
    msg.setDestinationEntity(169U);
    msg.value = 0.107337138295;

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
    msg.setTimeStamp(0.331502453554);
    msg.setSource(1653U);
    msg.setSourceEntity(65U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(132U);
    msg.value = 0.748236342325;

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
    msg.setTimeStamp(0.75534706045);
    msg.setSource(20865U);
    msg.setSourceEntity(231U);
    msg.setDestination(26673U);
    msg.setDestinationEntity(46U);
    msg.validity = 60670U;
    msg.type = 152U;
    msg.utc_year = 37339U;
    msg.utc_month = 117U;
    msg.utc_day = 6U;
    msg.utc_time = 0.680503296958;
    msg.lat = 0.888962535685;
    msg.lon = 0.952680633931;
    msg.height = 0.757943541521;
    msg.satellites = 38U;
    msg.cog = 0.452259591671;
    msg.sog = 0.979741414136;
    msg.hdop = 0.77180717074;
    msg.vdop = 0.467532443506;
    msg.hacc = 0.0548108934441;
    msg.vacc = 0.0153066768579;

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
    msg.setTimeStamp(0.310213267472);
    msg.setSource(61328U);
    msg.setSourceEntity(27U);
    msg.setDestination(30710U);
    msg.setDestinationEntity(110U);
    msg.validity = 43777U;
    msg.type = 164U;
    msg.utc_year = 7599U;
    msg.utc_month = 94U;
    msg.utc_day = 176U;
    msg.utc_time = 0.0547800440823;
    msg.lat = 0.108872140787;
    msg.lon = 0.266599882985;
    msg.height = 0.726470773238;
    msg.satellites = 18U;
    msg.cog = 0.708527349678;
    msg.sog = 0.179413695581;
    msg.hdop = 0.828592915358;
    msg.vdop = 0.615284054052;
    msg.hacc = 0.899194651071;
    msg.vacc = 0.926726946674;

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
    msg.setTimeStamp(0.784903543733);
    msg.setSource(35884U);
    msg.setSourceEntity(211U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(86U);
    msg.validity = 37846U;
    msg.type = 101U;
    msg.utc_year = 18996U;
    msg.utc_month = 24U;
    msg.utc_day = 126U;
    msg.utc_time = 0.624253826719;
    msg.lat = 0.26094169442;
    msg.lon = 0.980563672173;
    msg.height = 0.854219148079;
    msg.satellites = 57U;
    msg.cog = 0.588367231625;
    msg.sog = 0.170278939507;
    msg.hdop = 0.56101629535;
    msg.vdop = 0.760911626817;
    msg.hacc = 0.894464633327;
    msg.vacc = 0.893816291465;

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
    msg.setTimeStamp(0.923249885706);
    msg.setSource(24265U);
    msg.setSourceEntity(143U);
    msg.setDestination(15365U);
    msg.setDestinationEntity(174U);
    msg.time = 0.919420296341;
    msg.phi = 0.992658481997;
    msg.theta = 0.680546537603;
    msg.psi = 0.390580817455;
    msg.psi_magnetic = 0.124098200022;

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
    msg.setTimeStamp(0.38571705716);
    msg.setSource(4974U);
    msg.setSourceEntity(209U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(252U);
    msg.time = 0.0284993752507;
    msg.phi = 0.634997516987;
    msg.theta = 0.848184602779;
    msg.psi = 0.495026815198;
    msg.psi_magnetic = 0.749279799543;

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
    msg.setTimeStamp(0.704480608969);
    msg.setSource(54364U);
    msg.setSourceEntity(150U);
    msg.setDestination(22390U);
    msg.setDestinationEntity(92U);
    msg.time = 0.16406543456;
    msg.phi = 0.695766622489;
    msg.theta = 0.761470362567;
    msg.psi = 0.501967042203;
    msg.psi_magnetic = 0.45619665528;

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
    msg.setTimeStamp(0.35076828269);
    msg.setSource(64040U);
    msg.setSourceEntity(154U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(212U);
    msg.time = 0.166164743579;
    msg.x = 0.726676916564;
    msg.y = 0.984763641461;
    msg.z = 0.526253205397;
    msg.timestep = 0.0566031975177;

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
    msg.setTimeStamp(0.34648334301);
    msg.setSource(32010U);
    msg.setSourceEntity(140U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(142U);
    msg.time = 0.191133910445;
    msg.x = 0.574421466347;
    msg.y = 0.101109760907;
    msg.z = 0.989733598472;
    msg.timestep = 0.0558157636893;

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
    msg.setTimeStamp(0.236585012634);
    msg.setSource(37537U);
    msg.setSourceEntity(75U);
    msg.setDestination(58605U);
    msg.setDestinationEntity(105U);
    msg.time = 0.673805721125;
    msg.x = 0.489994048837;
    msg.y = 0.837648245876;
    msg.z = 0.646455039215;
    msg.timestep = 0.38096987709;

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
    msg.setTimeStamp(0.92404649341);
    msg.setSource(554U);
    msg.setSourceEntity(1U);
    msg.setDestination(37525U);
    msg.setDestinationEntity(202U);
    msg.time = 0.82217661659;
    msg.x = 0.371116393702;
    msg.y = 0.943844901384;
    msg.z = 0.357136009312;

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
    msg.setTimeStamp(0.703082579216);
    msg.setSource(3129U);
    msg.setSourceEntity(225U);
    msg.setDestination(55656U);
    msg.setDestinationEntity(138U);
    msg.time = 0.352609518902;
    msg.x = 0.108009644323;
    msg.y = 0.745272908797;
    msg.z = 0.236209830693;

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
    msg.setTimeStamp(0.598655582829);
    msg.setSource(41039U);
    msg.setSourceEntity(67U);
    msg.setDestination(8653U);
    msg.setDestinationEntity(104U);
    msg.time = 0.96957929152;
    msg.x = 0.131065139138;
    msg.y = 0.625029244826;
    msg.z = 0.681822748452;

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
    msg.setTimeStamp(0.498429463114);
    msg.setSource(25296U);
    msg.setSourceEntity(157U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(122U);
    msg.time = 0.0394968830134;
    msg.x = 0.573047051729;
    msg.y = 0.71055724399;
    msg.z = 0.464714891381;

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
    msg.setTimeStamp(0.550402148108);
    msg.setSource(28550U);
    msg.setSourceEntity(49U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(123U);
    msg.time = 0.031196051371;
    msg.x = 0.465586987517;
    msg.y = 0.208856385652;
    msg.z = 0.790469039752;

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
    msg.setTimeStamp(0.980054526699);
    msg.setSource(1066U);
    msg.setSourceEntity(96U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(67U);
    msg.time = 0.785910875889;
    msg.x = 0.130129895296;
    msg.y = 0.779669540226;
    msg.z = 0.824790749347;

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
    msg.setTimeStamp(0.763208013638);
    msg.setSource(57038U);
    msg.setSourceEntity(111U);
    msg.setDestination(2536U);
    msg.setDestinationEntity(79U);
    msg.time = 0.224974370314;
    msg.x = 0.77249031211;
    msg.y = 0.365978235865;
    msg.z = 0.429508820618;

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
    msg.setTimeStamp(0.413899820127);
    msg.setSource(24908U);
    msg.setSourceEntity(43U);
    msg.setDestination(30994U);
    msg.setDestinationEntity(202U);
    msg.time = 0.467473204063;
    msg.x = 0.650748723434;
    msg.y = 0.841846172561;
    msg.z = 0.965084680882;

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
    msg.setTimeStamp(0.335755579849);
    msg.setSource(60042U);
    msg.setSourceEntity(242U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(217U);
    msg.time = 0.727789513182;
    msg.x = 0.00163815481717;
    msg.y = 0.383296806553;
    msg.z = 0.42619419091;

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
    msg.setTimeStamp(0.0966674106667);
    msg.setSource(48805U);
    msg.setSourceEntity(170U);
    msg.setDestination(53459U);
    msg.setDestinationEntity(128U);
    msg.validity = 59U;
    msg.x = 0.0186593054493;
    msg.y = 0.432892553871;
    msg.z = 0.0946411451936;

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
    msg.setTimeStamp(0.858046843042);
    msg.setSource(26588U);
    msg.setSourceEntity(110U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(158U);
    msg.validity = 233U;
    msg.x = 0.457322565808;
    msg.y = 0.392621716182;
    msg.z = 0.978501855189;

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
    msg.setTimeStamp(0.324029019092);
    msg.setSource(51047U);
    msg.setSourceEntity(162U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(75U);
    msg.validity = 148U;
    msg.x = 0.474034158799;
    msg.y = 0.679036537768;
    msg.z = 0.0595522184865;

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
    msg.setTimeStamp(0.342431689866);
    msg.setSource(18411U);
    msg.setSourceEntity(246U);
    msg.setDestination(31464U);
    msg.setDestinationEntity(32U);
    msg.validity = 145U;
    msg.x = 0.0140050534178;
    msg.y = 0.581580391214;
    msg.z = 0.0795527910476;

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
    msg.setTimeStamp(0.201439845374);
    msg.setSource(46449U);
    msg.setSourceEntity(242U);
    msg.setDestination(54839U);
    msg.setDestinationEntity(197U);
    msg.validity = 245U;
    msg.x = 0.153296253097;
    msg.y = 0.0248446505539;
    msg.z = 0.629579951632;

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
    msg.setTimeStamp(0.571725813636);
    msg.setSource(5223U);
    msg.setSourceEntity(168U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(62U);
    msg.validity = 51U;
    msg.x = 0.0493130775641;
    msg.y = 0.645998698607;
    msg.z = 0.343516291506;

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
    msg.setTimeStamp(0.944548951857);
    msg.setSource(7120U);
    msg.setSourceEntity(2U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(155U);
    msg.time = 0.641668636287;
    msg.x = 0.942697051629;
    msg.y = 0.855483633292;
    msg.z = 0.107392218046;

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
    msg.setTimeStamp(0.101563389361);
    msg.setSource(54988U);
    msg.setSourceEntity(79U);
    msg.setDestination(43695U);
    msg.setDestinationEntity(202U);
    msg.time = 0.302080123514;
    msg.x = 0.838911231197;
    msg.y = 0.229544388605;
    msg.z = 0.459819231542;

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
    msg.setTimeStamp(0.129423206384);
    msg.setSource(20470U);
    msg.setSourceEntity(97U);
    msg.setDestination(50421U);
    msg.setDestinationEntity(6U);
    msg.time = 0.534395301229;
    msg.x = 0.731788514761;
    msg.y = 0.0168814781684;
    msg.z = 0.545635256368;

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
    msg.setTimeStamp(0.302420986069);
    msg.setSource(48032U);
    msg.setSourceEntity(203U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(166U);
    msg.validity = 125U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.133458602385;
    tmp_msg_0.beam_height = 0.574983863864;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.7768474663;

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
    msg.setTimeStamp(0.808103666493);
    msg.setSource(50571U);
    msg.setSourceEntity(204U);
    msg.setDestination(15748U);
    msg.setDestinationEntity(239U);
    msg.validity = 100U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.661637873416;
    tmp_msg_0.y = 0.17390247713;
    tmp_msg_0.z = 0.719996176499;
    tmp_msg_0.phi = 0.144615598283;
    tmp_msg_0.theta = 0.292442444071;
    tmp_msg_0.psi = 0.825255420567;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.605878847915;

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
    msg.setTimeStamp(0.328768477877);
    msg.setSource(63540U);
    msg.setSourceEntity(232U);
    msg.setDestination(25632U);
    msg.setDestinationEntity(227U);
    msg.validity = 169U;
    msg.value = 0.706882279962;

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
    msg.setTimeStamp(0.56141369106);
    msg.setSource(4190U);
    msg.setSourceEntity(65U);
    msg.setDestination(8368U);
    msg.setDestinationEntity(224U);
    msg.value = 0.589294825397;

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
    msg.setTimeStamp(0.810559136288);
    msg.setSource(3823U);
    msg.setSourceEntity(135U);
    msg.setDestination(2027U);
    msg.setDestinationEntity(128U);
    msg.value = 0.439032799757;

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
    msg.setTimeStamp(0.129554967484);
    msg.setSource(61557U);
    msg.setSourceEntity(141U);
    msg.setDestination(32418U);
    msg.setDestinationEntity(26U);
    msg.value = 0.501759767217;

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
    msg.setTimeStamp(0.00187545326618);
    msg.setSource(18369U);
    msg.setSourceEntity(143U);
    msg.setDestination(63914U);
    msg.setDestinationEntity(237U);
    msg.value = 0.810258682417;

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
    msg.setTimeStamp(0.127846519197);
    msg.setSource(62396U);
    msg.setSourceEntity(245U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0370090733945;

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
    msg.setTimeStamp(0.495803686615);
    msg.setSource(33445U);
    msg.setSourceEntity(108U);
    msg.setDestination(27996U);
    msg.setDestinationEntity(156U);
    msg.value = 0.253084875998;

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
    msg.setTimeStamp(0.103723783498);
    msg.setSource(44590U);
    msg.setSourceEntity(40U);
    msg.setDestination(63659U);
    msg.setDestinationEntity(26U);
    msg.value = 0.462633737738;

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
    msg.setTimeStamp(0.840280982978);
    msg.setSource(20905U);
    msg.setSourceEntity(207U);
    msg.setDestination(63754U);
    msg.setDestinationEntity(158U);
    msg.value = 0.824872077287;

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
    msg.setTimeStamp(0.833219435038);
    msg.setSource(9254U);
    msg.setSourceEntity(155U);
    msg.setDestination(60055U);
    msg.setDestinationEntity(94U);
    msg.value = 0.893910293898;

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
    msg.setTimeStamp(0.567224717962);
    msg.setSource(8205U);
    msg.setSourceEntity(223U);
    msg.setDestination(49115U);
    msg.setDestinationEntity(130U);
    msg.value = 0.798268892851;

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
    msg.setTimeStamp(0.173406644587);
    msg.setSource(48571U);
    msg.setSourceEntity(231U);
    msg.setDestination(35191U);
    msg.setDestinationEntity(203U);
    msg.value = 0.482742646712;

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
    msg.setTimeStamp(0.382492007137);
    msg.setSource(34901U);
    msg.setSourceEntity(232U);
    msg.setDestination(36307U);
    msg.setDestinationEntity(66U);
    msg.value = 0.372307618747;

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
    msg.setTimeStamp(0.91676000575);
    msg.setSource(7662U);
    msg.setSourceEntity(135U);
    msg.setDestination(3898U);
    msg.setDestinationEntity(19U);
    msg.value = 0.142302899886;

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
    msg.setTimeStamp(0.149864941873);
    msg.setSource(7559U);
    msg.setSourceEntity(215U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0756119379107;

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
    msg.setTimeStamp(0.0439643592503);
    msg.setSource(9016U);
    msg.setSourceEntity(90U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(207U);
    msg.value = 0.350816497683;

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
    msg.setTimeStamp(0.595724398109);
    msg.setSource(63311U);
    msg.setSourceEntity(160U);
    msg.setDestination(14097U);
    msg.setDestinationEntity(91U);
    msg.value = 0.247525094959;

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
    msg.setTimeStamp(0.105729616775);
    msg.setSource(20530U);
    msg.setSourceEntity(199U);
    msg.setDestination(60093U);
    msg.setDestinationEntity(129U);
    msg.value = 0.867893513566;

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
    msg.setTimeStamp(0.380925383055);
    msg.setSource(14286U);
    msg.setSourceEntity(138U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(225U);
    msg.value = 0.292978614283;

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
    msg.setTimeStamp(0.705120407561);
    msg.setSource(14474U);
    msg.setSourceEntity(163U);
    msg.setDestination(26603U);
    msg.setDestinationEntity(218U);
    msg.value = 0.887832958518;

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
    msg.setTimeStamp(0.794370379577);
    msg.setSource(49992U);
    msg.setSourceEntity(0U);
    msg.setDestination(51721U);
    msg.setDestinationEntity(157U);
    msg.value = 0.829123989775;

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
    msg.setTimeStamp(0.0921266451431);
    msg.setSource(17780U);
    msg.setSourceEntity(1U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(78U);
    msg.value = 0.524584131449;

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
    msg.setTimeStamp(0.551194158298);
    msg.setSource(4498U);
    msg.setSourceEntity(112U);
    msg.setDestination(52031U);
    msg.setDestinationEntity(189U);
    msg.value = 0.801471579536;

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
    msg.setTimeStamp(0.605763523195);
    msg.setSource(46802U);
    msg.setSourceEntity(17U);
    msg.setDestination(58209U);
    msg.setDestinationEntity(224U);
    msg.value = 0.468838587161;

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
    msg.setTimeStamp(0.0550643313705);
    msg.setSource(13624U);
    msg.setSourceEntity(36U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(186U);
    msg.value = 0.726371412369;

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
    msg.setTimeStamp(0.0912411009617);
    msg.setSource(1520U);
    msg.setSourceEntity(159U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.763240332158;
    msg.speed = 0.211744463117;
    msg.turbulence = 0.757150200261;

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
    msg.setTimeStamp(0.114633071848);
    msg.setSource(17462U);
    msg.setSourceEntity(46U);
    msg.setDestination(19822U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.146421995993;
    msg.speed = 0.431960761111;
    msg.turbulence = 0.875341521309;

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
    msg.setTimeStamp(0.237947394708);
    msg.setSource(19673U);
    msg.setSourceEntity(149U);
    msg.setDestination(28503U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.599924133569;
    msg.speed = 0.553850295424;
    msg.turbulence = 0.018518387086;

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
    msg.setTimeStamp(0.410905042085);
    msg.setSource(54288U);
    msg.setSourceEntity(41U);
    msg.setDestination(6779U);
    msg.setDestinationEntity(81U);
    msg.value = 0.472441532683;

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
    msg.setTimeStamp(0.771753692418);
    msg.setSource(20880U);
    msg.setSourceEntity(236U);
    msg.setDestination(58957U);
    msg.setDestinationEntity(20U);
    msg.value = 0.454704609278;

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
    msg.setTimeStamp(0.432914327714);
    msg.setSource(64123U);
    msg.setSourceEntity(252U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(226U);
    msg.value = 0.676876133541;

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
    msg.setTimeStamp(0.616297380175);
    msg.setSource(48965U);
    msg.setSourceEntity(41U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(147U);
    msg.value.assign("TRVVKKXKYHRUMFGFUGUWXJNKETEAFOAPLSPGKQCMLFIGNWCELGRJWMSEJBTHOQROQWJSIIRNIZHFZCWHVGLUFZCKDPFYYXQFMHCDBYWVAWWEFDLVXTNSNHHIOLLKMSBARUEBMYZVXTTBXDAYBPDFJ");

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
    msg.setTimeStamp(0.193337854388);
    msg.setSource(48909U);
    msg.setSourceEntity(17U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(57U);
    msg.value.assign("QVXRJJOQYCZLLLDBHOBFEOVMNZLWZEYHYWXBQHHFBFFMZODQACWNRFEREAQJUTRAPKINYGCASP");

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
    msg.setTimeStamp(0.304776421926);
    msg.setSource(8453U);
    msg.setSourceEntity(84U);
    msg.setDestination(29427U);
    msg.setDestinationEntity(164U);
    msg.value.assign("QNWUWMLDEGQUZHROYRTSBCVGSPDMOMIRPDMQZQUVFRQILURGCDMIIZEJJWCIDJHLFJLGKAKJYZFFBCLUKIZHTWNYLJKAVTNFESNIXOXEDURBVYHVNDFGQKSVTVXZBFFEHMKXSHYBLSQOXURKTKUEDNAAHOYTPYOLYTJET");

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
    msg.setTimeStamp(0.746703497483);
    msg.setSource(37941U);
    msg.setSourceEntity(247U);
    msg.setDestination(6667U);
    msg.setDestinationEntity(219U);
    const char tmp_msg_0[] = {68, -47, 108, 86, -49, 43, 72, 27, 29, 117, -56, -7, -86, 49, -79, -28, -115, 81, -114, 4, -90, 111, -59, -17, 83, -79, -7, -65, -20, -66, -89, -66, -107, 126, -125, -83, -86, -3, -72, 65, 116, -124, 3, -78, -93, 67, 63, 83, 18, -21, 3, -28, -25, 4, -63, -80, -21, 60, -68, 53, -70, 103, 105, -111, -110, 118, -17, 54, -1, 24};
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
    msg.setTimeStamp(0.600021555909);
    msg.setSource(8848U);
    msg.setSourceEntity(31U);
    msg.setDestination(35803U);
    msg.setDestinationEntity(236U);
    const char tmp_msg_0[] = {-33, 65, 51, 45, -75, -126, -2, -7, 5, 26, 16, -115, -16, -47, -7, 42, -66, 126, -15, -58, -67, -45, 63, 20, -96, 67, 112, -101, 34, -103, 82, 92, 46, -49, -108, 113, -84, -23, -125, 20, -1, 97, -82, -77, -24, -82, 58, 35, -13, 39, 95, 36, -75, -107, 22, -5, 23, -62, 56, 115, -94, 1, -115, -6, 1, -111, -38, -93, 118, 16, 32, -24, 55, -1, 83, 37, 67, 10, 71, 40, 48, -47, 80, -49, -47, 33};
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
    msg.setTimeStamp(0.0234124833099);
    msg.setSource(2646U);
    msg.setSourceEntity(66U);
    msg.setDestination(33732U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {-66, 122, -65, 40, 80, 45, -121, 69, 32, -7, 110, 4, 25, -45, -15, 2, 40, -117, 57, 120, 102, -110, -2, 118, 37, -6, 1, 34, -69, -46, 14, 105, -11, 82, 23, -3, -57, -4, 11, 20, 108, -12, -127, -98, -1, -31, 88, 51, -76, -4, -85, 32, -30, 64, -51, 7, 25, 53, -95, 50, 23, -16, 24, -46, -60, 98, -7, 5, 95, -73, 101, 11, -10, -104, 72, 63, 2, 18, -25, -54, -5, 19, -34, 72, 104, -128, 105, 87, 95, 86, -67, -123, -1, 42, -128, -123, 121, -91, -75, -33, -53, -83, -31, 113, 85, 14, -21, 8, -73, 98, -44, -63, -56, -80, -23, 106, 72, -29, -76, 112, 80, 99, 76, 124, -1, -77, -55, 24, 78, 49, -70, 95, 36, 59, -21, 24, 13, -83, -15, -119, -92, -99, -52, -12, -88, 7, 64, 87, -38, 2, 73, 118, 45, -112, 60, -121, 98, 110, -108, 75, -100, 100, 114};
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
    msg.setTimeStamp(0.989649767228);
    msg.setSource(14654U);
    msg.setSourceEntity(146U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(104U);
    msg.frequency = 1305409731U;
    msg.min_range = 4521U;
    msg.max_range = 21341U;

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
    msg.setTimeStamp(0.649671887736);
    msg.setSource(28717U);
    msg.setSourceEntity(48U);
    msg.setDestination(3608U);
    msg.setDestinationEntity(117U);
    msg.frequency = 1887209707U;
    msg.min_range = 48570U;
    msg.max_range = 15483U;

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
    msg.setTimeStamp(0.652007074552);
    msg.setSource(50898U);
    msg.setSourceEntity(83U);
    msg.setDestination(31888U);
    msg.setDestinationEntity(20U);
    msg.frequency = 3697918059U;
    msg.min_range = 60757U;
    msg.max_range = 63998U;

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
    msg.setTimeStamp(0.206189728154);
    msg.setSource(34708U);
    msg.setSourceEntity(30U);
    msg.setDestination(196U);
    msg.setDestinationEntity(181U);
    msg.type = 160U;
    msg.frequency = 1903787570U;
    msg.min_range = 41238U;
    msg.max_range = 7272U;
    msg.bits_per_point = 73U;
    msg.scale_factor = 0.756752510029;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.857962386981;
    tmp_msg_0.beam_height = 0.369742196211;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {65, -112, -114, -53, -35, -58, -117, -9, -13, -117, -76, 34, 61, -49, 1, 14, -116, -127, 49, 9, 79, 72, -29, 92, -11, -85, 117, 111, -72, -88, 1, -49};
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
    msg.setTimeStamp(0.033122440269);
    msg.setSource(52854U);
    msg.setSourceEntity(176U);
    msg.setDestination(25177U);
    msg.setDestinationEntity(8U);
    msg.type = 28U;
    msg.frequency = 3518544265U;
    msg.min_range = 14238U;
    msg.max_range = 54848U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.435616570238;
    const char tmp_msg_0[] = {123, -93, -21, 25, 71, 0, -12, 102, -48, 120, 119, -109, -87, -7, -4, 94, 119, -19, -80, -8, -123, 30, 126, 122, 29, -105, -26, 113, 68, 65, -58, 117, -122, 85, -80, 109, 38, -119, -103, 3, -64, -108, 122, -93, -102, 45, -16, -4, 48, -123, -81, -94, 25, 54, -55, 1, 52, 64, -118, -123, -99, -78, -96, -95, -71, -42, -30, 20, 41, 39, -105, 95, 111, -64, 97, 71, 49, -100, -119, -71, -43, -37, 31, 49, -43, 38, 23, 62, 125, -26, 24, -86, 36};
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
    msg.setTimeStamp(0.28661708286);
    msg.setSource(44279U);
    msg.setSourceEntity(84U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(154U);
    msg.type = 75U;
    msg.frequency = 1340706950U;
    msg.min_range = 22755U;
    msg.max_range = 45815U;
    msg.bits_per_point = 153U;
    msg.scale_factor = 0.435554136804;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.410385456623;
    tmp_msg_0.beam_height = 0.079635487499;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {57, 18, 120, 73, -60, 125, -12, 100, 37, 124, 7, 67, -54, 63, 92, -106, -62, -74, -67, -22, 24, -117, -90, -95, 80, -13, 56, -43, -35, 9, -117, -25, -120, 89, -56, 73, 37, 120, -95, 89, 81, -10, 16, -9, -15, -86, 65, 117, 125, -71, 94, 101, 5, 22, -116, -62, 76, 39, 58, -112, -82, -3, -121, 99, 121, -8, 27, -44, 105, 79, 94, 10, -112, 26, 74, -74, 120, 92, 20, 95, 83, 28, 67, -71, 2, 73, 35, -66, 79, 124, 29, 88, -51, -86, -84, 18, -35, -16, 26, 119, 11, 50, -103, -44, 16, 80, 99, -115, 12, -109, 43, -69, -46, 115, 111, -32, -36, 60, -105, 107, 96, 58, 74, -64, -94, -67, -108, 1, 67, -123, 13, 15, 39, -21, 119, -119, -3, -72, -40, 5, 94, 89, -68, -70, -83, 113, 89, -126, 111, -43, -35, 42, -65, 88, -100, -44, -15, -65, -93, 104, 2, 52, -6, 34, 18, -2, 27, -115, 74, 18, 41, -38, 72, 36, 57, 104, 94, -71, 5, 110, 86, -125, 54, 30, -74, 82, -126, 37, 27, 1, -16, 92, -45, 34, -32, -123, -54, -102, 15, -35, -44, -10, -108, -69, 64, 61, 15, -112, -56, 96};
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
    msg.setTimeStamp(0.367991845122);
    msg.setSource(25788U);
    msg.setSourceEntity(190U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.511536003733);
    msg.setSource(32066U);
    msg.setSourceEntity(68U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.779517784493);
    msg.setSource(54027U);
    msg.setSourceEntity(185U);
    msg.setDestination(33376U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.718149714715);
    msg.setSource(27485U);
    msg.setSourceEntity(104U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(202U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.0725885739203);
    msg.setSource(14215U);
    msg.setSourceEntity(179U);
    msg.setDestination(541U);
    msg.setDestinationEntity(232U);
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
    msg.setTimeStamp(0.0272300586464);
    msg.setSource(5406U);
    msg.setSourceEntity(167U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(232U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.813125125886);
    msg.setSource(63700U);
    msg.setSourceEntity(254U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(135U);
    msg.value = 0.271452974251;
    msg.confidence = 0.560670429335;
    msg.opmodes.assign("JAMKJWZLBLTVNKWSNPFGJCUXCFCGXPJBVKBIGKJAPZIVBNGGAVZFUQCUWAGHTKTFWHMCLIXOGVYTEOJZBGREWSUZMHKNJF");

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
    msg.setTimeStamp(0.432631344741);
    msg.setSource(36938U);
    msg.setSourceEntity(77U);
    msg.setDestination(56034U);
    msg.setDestinationEntity(3U);
    msg.value = 0.147068532887;
    msg.confidence = 0.415518382041;
    msg.opmodes.assign("DFVROYNDPYRQRJJQYONXGAFUOIKJWOHUDAJWKEBQAGWYOXBHWSYEHBVPURLLCNFQGXZMRQJBWBZOZCJXZVMJZRYGYGIVCUDABXPWSHIMOQNEDPZCPKTVFGZAEATIHLTKFPWBQLVPFSHOIXQSFXCHTLHLMKYFDVPAEJWSWCYUDN");

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
    msg.setTimeStamp(0.612323405866);
    msg.setSource(19945U);
    msg.setSourceEntity(70U);
    msg.setDestination(9239U);
    msg.setDestinationEntity(138U);
    msg.value = 0.401605285852;
    msg.confidence = 0.9504191174;
    msg.opmodes.assign("PDUGSWIMAUOKHVCXVNPEDRUTXDSQPIHALRYKIHRQZYSPTEWJVXGLOVYWRRZRYATWDUIG");

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
    msg.setTimeStamp(0.952709968069);
    msg.setSource(63565U);
    msg.setSourceEntity(138U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(33U);
    msg.itow = 237943705U;
    msg.lat = 0.207386379872;
    msg.lon = 0.288476720231;
    msg.height_ell = 0.414771636245;
    msg.height_sea = 0.90688763175;
    msg.hacc = 0.13903685441;
    msg.vacc = 0.244325402755;
    msg.vel_n = 0.876847777715;
    msg.vel_e = 0.922855291702;
    msg.vel_d = 0.0247117081942;
    msg.speed = 0.306668840948;
    msg.gspeed = 0.308283547367;
    msg.heading = 0.464385233236;
    msg.sacc = 0.560006914131;
    msg.cacc = 0.6144457024;

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
    msg.setTimeStamp(0.153542209199);
    msg.setSource(11830U);
    msg.setSourceEntity(143U);
    msg.setDestination(53188U);
    msg.setDestinationEntity(136U);
    msg.itow = 796919749U;
    msg.lat = 0.0446762017976;
    msg.lon = 0.780021614122;
    msg.height_ell = 0.0305483841563;
    msg.height_sea = 0.178969620342;
    msg.hacc = 0.131076369393;
    msg.vacc = 0.568237299851;
    msg.vel_n = 0.730250621496;
    msg.vel_e = 0.237815950791;
    msg.vel_d = 0.265364005472;
    msg.speed = 0.859446901091;
    msg.gspeed = 0.914228637516;
    msg.heading = 0.748375735566;
    msg.sacc = 0.606220493402;
    msg.cacc = 0.736103458602;

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
    msg.setTimeStamp(0.915596015049);
    msg.setSource(27790U);
    msg.setSourceEntity(100U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(223U);
    msg.itow = 639458655U;
    msg.lat = 0.705607389699;
    msg.lon = 0.20667114347;
    msg.height_ell = 0.12305112888;
    msg.height_sea = 0.570633699146;
    msg.hacc = 0.0177435703687;
    msg.vacc = 0.945320356699;
    msg.vel_n = 0.683921394417;
    msg.vel_e = 0.14398117309;
    msg.vel_d = 0.322011122978;
    msg.speed = 0.537153313052;
    msg.gspeed = 0.660860541436;
    msg.heading = 0.916610406192;
    msg.sacc = 0.319084371966;
    msg.cacc = 0.0754623562935;

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
    msg.setTimeStamp(0.982569486352);
    msg.setSource(14108U);
    msg.setSourceEntity(181U);
    msg.setDestination(39419U);
    msg.setDestinationEntity(44U);
    msg.id = 80U;
    msg.value = 0.385435452464;

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
    msg.setTimeStamp(0.643684319321);
    msg.setSource(48500U);
    msg.setSourceEntity(8U);
    msg.setDestination(896U);
    msg.setDestinationEntity(44U);
    msg.id = 144U;
    msg.value = 0.0585285275936;

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
    msg.setTimeStamp(0.762430504675);
    msg.setSource(2475U);
    msg.setSourceEntity(72U);
    msg.setDestination(26359U);
    msg.setDestinationEntity(26U);
    msg.id = 173U;
    msg.value = 0.584680528657;

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
    msg.setTimeStamp(0.62148886456);
    msg.setSource(1356U);
    msg.setSourceEntity(110U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(97U);
    msg.x = 0.185366915549;
    msg.y = 0.3838624974;
    msg.z = 0.477536858042;
    msg.phi = 0.800119583407;
    msg.theta = 0.0889951654952;
    msg.psi = 0.547222095161;

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
    msg.setTimeStamp(0.866772873092);
    msg.setSource(29133U);
    msg.setSourceEntity(76U);
    msg.setDestination(9209U);
    msg.setDestinationEntity(146U);
    msg.x = 0.591379841065;
    msg.y = 0.298248903422;
    msg.z = 0.0857230076989;
    msg.phi = 0.790087882852;
    msg.theta = 0.798585337887;
    msg.psi = 0.359100666842;

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
    msg.setTimeStamp(0.711980590787);
    msg.setSource(16427U);
    msg.setSourceEntity(217U);
    msg.setDestination(44700U);
    msg.setDestinationEntity(185U);
    msg.x = 0.912073858176;
    msg.y = 0.600450792011;
    msg.z = 0.47466280616;
    msg.phi = 0.438841260097;
    msg.theta = 0.0661330514654;
    msg.psi = 0.711601732675;

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
    msg.setTimeStamp(0.301254630261);
    msg.setSource(23496U);
    msg.setSourceEntity(219U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(101U);
    msg.beam_width = 0.962060483006;
    msg.beam_height = 0.740481122943;

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
    msg.setTimeStamp(0.65947025356);
    msg.setSource(53342U);
    msg.setSourceEntity(21U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(164U);
    msg.beam_width = 0.225481898813;
    msg.beam_height = 0.956791517026;

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
    msg.setTimeStamp(0.687179344776);
    msg.setSource(27388U);
    msg.setSourceEntity(172U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(86U);
    msg.beam_width = 0.203229456539;
    msg.beam_height = 0.445246574155;

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
    msg.setTimeStamp(0.267235366211);
    msg.setSource(5618U);
    msg.setSourceEntity(150U);
    msg.setDestination(58540U);
    msg.setDestinationEntity(172U);
    msg.sane = 10U;

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
    msg.setTimeStamp(0.994273227511);
    msg.setSource(11454U);
    msg.setSourceEntity(136U);
    msg.setDestination(48041U);
    msg.setDestinationEntity(145U);
    msg.sane = 110U;

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
    msg.setTimeStamp(0.298015877613);
    msg.setSource(34791U);
    msg.setSourceEntity(38U);
    msg.setDestination(55287U);
    msg.setDestinationEntity(173U);
    msg.sane = 224U;

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
    msg.setTimeStamp(0.754478783446);
    msg.setSource(22043U);
    msg.setSourceEntity(181U);
    msg.setDestination(17716U);
    msg.setDestinationEntity(138U);
    msg.id = 92U;
    msg.zoom = 164U;
    msg.action = 110U;

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
    msg.setTimeStamp(0.129223248762);
    msg.setSource(3067U);
    msg.setSourceEntity(91U);
    msg.setDestination(23745U);
    msg.setDestinationEntity(218U);
    msg.id = 107U;
    msg.zoom = 98U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.280493668678);
    msg.setSource(35985U);
    msg.setSourceEntity(196U);
    msg.setDestination(4242U);
    msg.setDestinationEntity(79U);
    msg.id = 152U;
    msg.zoom = 233U;
    msg.action = 122U;

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
    msg.setTimeStamp(0.0482225226876);
    msg.setSource(16768U);
    msg.setSourceEntity(16U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(207U);
    msg.id = 80U;
    msg.value = 0.31089566151;

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
    msg.setTimeStamp(0.102658022963);
    msg.setSource(50894U);
    msg.setSourceEntity(20U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(198U);
    msg.id = 6U;
    msg.value = 0.412636548647;

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
    msg.setTimeStamp(0.140431264736);
    msg.setSource(41352U);
    msg.setSourceEntity(189U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(1U);
    msg.id = 82U;
    msg.value = 0.345185643347;

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
    msg.setTimeStamp(0.198481570408);
    msg.setSource(43602U);
    msg.setSourceEntity(185U);
    msg.setDestination(60482U);
    msg.setDestinationEntity(75U);
    msg.id = 210U;
    msg.value = 0.692810386058;

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
    msg.setTimeStamp(0.148319349396);
    msg.setSource(32119U);
    msg.setSourceEntity(17U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(246U);
    msg.id = 114U;
    msg.value = 0.106497762758;

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
    msg.setTimeStamp(0.444792500107);
    msg.setSource(50411U);
    msg.setSourceEntity(110U);
    msg.setDestination(9823U);
    msg.setDestinationEntity(120U);
    msg.id = 81U;
    msg.value = 0.606683694721;

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
    msg.setTimeStamp(0.861970245601);
    msg.setSource(36007U);
    msg.setSourceEntity(79U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(125U);
    msg.id = 224U;
    msg.angle = 0.65321170294;

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
    msg.setTimeStamp(0.0901615148565);
    msg.setSource(51466U);
    msg.setSourceEntity(92U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(9U);
    msg.id = 66U;
    msg.angle = 0.0290986403358;

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
    msg.setTimeStamp(0.618942156698);
    msg.setSource(26273U);
    msg.setSourceEntity(84U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(161U);
    msg.id = 238U;
    msg.angle = 0.21560658419;

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
    msg.setTimeStamp(0.71952327502);
    msg.setSource(1141U);
    msg.setSourceEntity(115U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(138U);
    msg.op = 126U;
    msg.actions.assign("LEWMKQXBDKNZMXGJIJYPSATNOPRRWIIMWYZAKYLTYZXOSYPALLDXI");

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
    msg.setTimeStamp(0.346147115822);
    msg.setSource(33730U);
    msg.setSourceEntity(134U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(134U);
    msg.op = 220U;
    msg.actions.assign("OXCVZDGJLMHZNRSAFFSNNUPSOCBQSELQWUUEBWSCVYQXASXBJJHQRTVFBDWVEOHPIVRPRUAJHVYLJDNZTHMSFROEAUZNQVIYILHMZIMEEYKHVQPGLMWTQEMRIXIBYFLBLTGYAHJGDOWUTFYWXTRZU");

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
    msg.setTimeStamp(0.955112823465);
    msg.setSource(6192U);
    msg.setSourceEntity(81U);
    msg.setDestination(41171U);
    msg.setDestinationEntity(38U);
    msg.op = 29U;
    msg.actions.assign("NQFUHPZPCINILQRCCEBLKTWXSHKKYSFAODRPALBGTOTSWONDVDKZQXHMPMBXRGQBDDNESMAZAOHQIOHLPZUENXODVLLAYCDBCJGRFUYCGEOPCTVYILASOBGVWHAARHMGTZBSQFEVUTFYXMRLKJNIKSHGUCIZTZYYWVPRBLVQQMYJXMLXNVN");

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
    msg.setTimeStamp(0.380469572097);
    msg.setSource(55514U);
    msg.setSourceEntity(21U);
    msg.setDestination(50650U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("STFDHHPZPKLHVFWMMNDBDYSXAIYLTKFBLZEJUSNQMPJXCTENKLPFIIHHMCBYFNQORJGNZCIOBITXUDKZNPJWHJTQQOCMRICZBGOCVPWAXSQHULYDUTHOGKOWHYDUMWSLJVMBRYKGPEXBOEGQGIEEYTQVESUWMADMFQ");

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
    msg.setTimeStamp(0.647184943752);
    msg.setSource(18294U);
    msg.setSourceEntity(147U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(249U);
    msg.actions.assign("XRILVUVRTSALNKUCTHUKGSOPEZHBDQSHXZIMHGTWMZXUTJO");

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
    msg.setTimeStamp(0.61506875364);
    msg.setSource(26083U);
    msg.setSourceEntity(149U);
    msg.setDestination(61414U);
    msg.setDestinationEntity(28U);
    msg.actions.assign("FCCIHLDHORXMLHGKBTKRZVAIEPDAXOHNMIDQPURYHKVGJURXSJTRBLBNYDIVTTXMUCPACAQCKUSKDHVJEXYOLZSUOCGAHEBSQQRJAXLXLPLAZQSXTAWXGBPDUWCEBMXKVIGTVQCIYTYZSQRFOENJQOKASGKFWJMJSRMDPDFYNEBBINLEYVQJOZZOIUMWWZOVHANKUTRR");

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
    msg.setTimeStamp(0.590044763299);
    msg.setSource(36672U);
    msg.setSourceEntity(57U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(166U);
    msg.button = 27U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.946686823857);
    msg.setSource(20214U);
    msg.setSourceEntity(43U);
    msg.setDestination(17333U);
    msg.setDestinationEntity(102U);
    msg.button = 241U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.363287442712);
    msg.setSource(20190U);
    msg.setSourceEntity(140U);
    msg.setDestination(39366U);
    msg.setDestinationEntity(249U);
    msg.button = 43U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.408032695092);
    msg.setSource(21375U);
    msg.setSourceEntity(42U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(32U);
    msg.op = 11U;
    msg.text.assign("MWJWADLBAEZBZOTHMJHOEJCNWBEEMQVJORKRMHAFFCXGSXZSIQLVRIROAXDSCTGKLBZVDCPGYFXILDRSLAMDNWLPSJMUHIDVBYFXUKTULBNHYXJVFSBLQOQCGYICPTWJKZKKIQYBLYPIMTLTXZCENPONYQOWQUESUCGATSYIESRHBUUJQEGMWAWHNWDKXEAFCNQRUKFPQNTWMVN");

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
    msg.setTimeStamp(0.695991396109);
    msg.setSource(62385U);
    msg.setSourceEntity(170U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(42U);
    msg.op = 17U;
    msg.text.assign("QHXDOAHRWZKAWJJNJQLRGFJNOGUUDREDTISSWQMTWLEBKUHFGUXK");

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
    msg.setTimeStamp(0.123748063414);
    msg.setSource(8809U);
    msg.setSourceEntity(52U);
    msg.setDestination(20869U);
    msg.setDestinationEntity(142U);
    msg.op = 96U;
    msg.text.assign("ZNESYOXOWYEFVWOYKVHOGJRWGPHZWNLNUSALNFAIUMMQZTXSKLESNTSRIJGGLFCWIBSBZDUHNBMWQDOVTDFKJQSMLDJMLRFRGVFOMBHBRCABKNCXHFQUBOMPTCJKXQXUZGNPEJZKVLCTOWRQSJCELVTUEGPQUWFDBAEV");

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
    msg.setTimeStamp(0.352217697967);
    msg.setSource(17127U);
    msg.setSourceEntity(232U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(160U);
    msg.op = 163U;
    msg.time_remain = 0.497154228665;
    msg.sched_time = 0.572946259707;

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
    msg.setTimeStamp(0.77094062037);
    msg.setSource(4950U);
    msg.setSourceEntity(112U);
    msg.setDestination(57887U);
    msg.setDestinationEntity(254U);
    msg.op = 28U;
    msg.time_remain = 0.186179515424;
    msg.sched_time = 0.999770963868;

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
    msg.setTimeStamp(0.922700702842);
    msg.setSource(37084U);
    msg.setSourceEntity(69U);
    msg.setDestination(17275U);
    msg.setDestinationEntity(71U);
    msg.op = 44U;
    msg.time_remain = 0.566698470508;
    msg.sched_time = 0.0407143326149;

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
    msg.setTimeStamp(0.721755992279);
    msg.setSource(41380U);
    msg.setSourceEntity(254U);
    msg.setDestination(41161U);
    msg.setDestinationEntity(173U);
    msg.name.assign("MJQHGVXPWWLSFMPPIRUEENYIJXHOQHUCBFXYIAQKPVSRMQUNGRZSRW");
    msg.op = 174U;
    msg.sched_time = 0.0311814775741;

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
    msg.setTimeStamp(0.854032196622);
    msg.setSource(57030U);
    msg.setSourceEntity(50U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(176U);
    msg.name.assign("BNRPBYXYILCMAALGASTI");
    msg.op = 189U;
    msg.sched_time = 0.156036895893;

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
    msg.setTimeStamp(0.178292707361);
    msg.setSource(39274U);
    msg.setSourceEntity(31U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(140U);
    msg.name.assign("JOBWHMPAIBNIFPTKZFLLMLAFVAHDLZCREPTLRXYXIJXEHBDVARJWLAOVUYQZEELZKBCCIFYNDLXNUJQGITQK");
    msg.op = 38U;
    msg.sched_time = 0.709970571692;

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
    msg.setTimeStamp(0.0273847787907);
    msg.setSource(1604U);
    msg.setSourceEntity(114U);
    msg.setDestination(13932U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.690967708913);
    msg.setSource(30006U);
    msg.setSourceEntity(205U);
    msg.setDestination(4666U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.966763073952);
    msg.setSource(8247U);
    msg.setSourceEntity(135U);
    msg.setDestination(27020U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.583136126471);
    msg.setSource(38336U);
    msg.setSourceEntity(45U);
    msg.setDestination(17382U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YZCORMCCGZUAOQOPILRVTUBQLKPNMOXOCTBRKPBVMAZSMJJFVSXJXRTFNEEWYTSQFTWNXADRPVIJRJDUOLKGGRNYKSBIWTVLLHCJQDZZSSEDMQKOYDUKKYWMENVMVQTXYLWFJHWOQSZYIVJAKENLPHEGNH");
    msg.state = 31U;

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
    msg.setTimeStamp(0.074514083915);
    msg.setSource(35328U);
    msg.setSourceEntity(40U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(4U);
    msg.name.assign("FATPBXXSVRIFJEVVYHJTTZINMNOMCVGGXFVLLMEDBMKCWKURAELICIFPBJEIDXUKTOEADHKMRHLYLSJDYGUZHQKDXCVCJWFAIATGVRLCPAIZBNDBFQLEVGNDFKVQHDAHTJDWYIUPNXBPFUWOWTEEWONPTKBNYISSOCQHZOCQMRMKWRMUWTZRJJQSMZHYSUXNZGQAUCPHZGUGPKZLPRGSUYLWTEHSX");
    msg.state = 216U;

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
    msg.setTimeStamp(0.919844024115);
    msg.setSource(43637U);
    msg.setSourceEntity(37U);
    msg.setDestination(49139U);
    msg.setDestinationEntity(99U);
    msg.name.assign("LXWSSZJJQEYOYFGYUYLGNYOBTEQGAWBJMAIBTCRCENKSCMHYFBJKZHPJQZDYMALUULDTPBLWXVOXZCRQMSUUNISABQADKNSMNIAKGGVQSOPPPDHQ");
    msg.state = 22U;

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
    msg.setTimeStamp(0.321859206749);
    msg.setSource(65103U);
    msg.setSourceEntity(109U);
    msg.setDestination(1977U);
    msg.setDestinationEntity(62U);
    msg.name.assign("NRPHWXWVEZTAMRGDOUFEXHYPFBLDUFWNYELJOSLARQVDMVQWBRUSDJRACCXQHPQYNZFGYEUHKABILKEOUZEMQKMFQBANMUODCLIJUTRONZWGGTSCKBAJDOIHHHUDTESVTRTVPKAGBEPVKISEIMRKXNPJLKGVFDIAGCDZWYCLQSXPJXTYGFNOCBTXYHHNCOMZCBLMTOWKGZJSNHAUDPKQEIPSFLQNBVVFYT");
    msg.value = 139U;

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
    msg.setTimeStamp(0.663109284894);
    msg.setSource(56947U);
    msg.setSourceEntity(187U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZPFJSRDIAAQXVOCJODPHQVGLDTLZWGLTXYQELOVNWQYLDUBFZTZV");
    msg.value = 213U;

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
    msg.setTimeStamp(0.0455398491681);
    msg.setSource(26253U);
    msg.setSourceEntity(187U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(116U);
    msg.name.assign("DWXHAUHGWMTKSRYVSOJHJJSCWYUQRGEKAOXMQPZGZURPRCPRPBFKVGNIZBDKVFLCOFLT");
    msg.value = 239U;

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
    msg.setTimeStamp(0.768234993869);
    msg.setSource(5982U);
    msg.setSourceEntity(138U);
    msg.setDestination(29621U);
    msg.setDestinationEntity(50U);
    msg.name.assign("OMUSXOCLELRSRGSBJKMQAVDGNGSJKXDZZPFELPTRYEHMJSHBAXFBXFKOSCYMVRIUPWKRSQPNADVWGVOMJUPKAKVBXUPMWDFZEOQAFFEWTCZBDLYOGZHVHYFOXHRALMUFIFEJCIUPTLIDTBNXXTWDUZWTHDOKLVYWMQNIYLSNFOZPLCEEDJM");

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
    msg.setTimeStamp(0.078767709544);
    msg.setSource(55128U);
    msg.setSourceEntity(17U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(233U);
    msg.name.assign("JGVSCSCAYLEHKVROYMZSAVUZRIIOWSRSOACPNQXOKGXPGHBWQLGKHRMKFOMUMFQBJSFPQMGSXFWWDCJUMYKNTDAWDKOPRYP");

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
    msg.setTimeStamp(0.214355676788);
    msg.setSource(2189U);
    msg.setSourceEntity(210U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(77U);
    msg.name.assign("YUVRLUAUQRNKXQYWCKNMLWAEWQIVWSYGIHPBUYKNSCNCTNOBUIPVTPJRKDTMDRNMAPFCXBZVZMBHFLKXUPCUMNYDGIZAQUKFGXJPWXCHHHCTLHRBNMZHEJEEDPJZWQZEDJEKEIXBDDOQVIYLBLAGBYCGFMGXJYMAEOFYPGKRIMOMFTHASJYRTSWSIJDAU");

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
    msg.setTimeStamp(0.814397983572);
    msg.setSource(21776U);
    msg.setSourceEntity(148U);
    msg.setDestination(613U);
    msg.setDestinationEntity(134U);
    msg.name.assign("VYOBNDOVODSUTVWYGDHQWZRZJIDBEMHGLFHEYQPBECOKEKUGRPUSOTXZNZSA");
    msg.value = 74U;

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
    msg.setTimeStamp(0.378882539287);
    msg.setSource(8530U);
    msg.setSourceEntity(127U);
    msg.setDestination(5921U);
    msg.setDestinationEntity(244U);
    msg.name.assign("PRPQAIIGKMSYTWFPWVSPDAHZBAJEIFIUFBLUODFDLVZJWZHETYLGATRXGENZBHENABXZMSGYUGNSOMQZRJHOLKOJJSJWXAYBTSUBDXNCLRYJBNMXUKCCKGDQTIZQFWVPHQNXHL");
    msg.value = 234U;

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
    msg.setTimeStamp(0.800786998808);
    msg.setSource(20253U);
    msg.setSourceEntity(50U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NWMVFWLJNWTVJZIBGOOXKEEPXMUYCEETUQEMXZBKOPKGGVACTFIRFEGBCKTNRAFUHHWNXAFIVDIZSORYQON");
    msg.value = 237U;

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
    msg.setTimeStamp(0.924616550737);
    msg.setSource(29159U);
    msg.setSourceEntity(117U);
    msg.setDestination(8981U);
    msg.setDestinationEntity(187U);
    msg.id = 147U;
    msg.period = 2863246732U;
    msg.duty_cycle = 3835282868U;

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
    msg.setTimeStamp(0.730124446935);
    msg.setSource(33632U);
    msg.setSourceEntity(102U);
    msg.setDestination(23624U);
    msg.setDestinationEntity(43U);
    msg.id = 129U;
    msg.period = 3537002093U;
    msg.duty_cycle = 1714576337U;

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
    msg.setTimeStamp(0.343306318715);
    msg.setSource(25518U);
    msg.setSourceEntity(224U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(119U);
    msg.id = 121U;
    msg.period = 2839527754U;
    msg.duty_cycle = 3379817014U;

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
    msg.setTimeStamp(0.0975505415333);
    msg.setSource(60607U);
    msg.setSourceEntity(102U);
    msg.setDestination(49349U);
    msg.setDestinationEntity(149U);
    msg.id = 44U;
    msg.period = 165112597U;
    msg.duty_cycle = 1768298648U;

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
    msg.setTimeStamp(0.86615914787);
    msg.setSource(64831U);
    msg.setSourceEntity(205U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(0U);
    msg.id = 24U;
    msg.period = 1101300802U;
    msg.duty_cycle = 2025729928U;

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
    msg.setTimeStamp(0.353487406303);
    msg.setSource(56391U);
    msg.setSourceEntity(246U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(10U);
    msg.id = 246U;
    msg.period = 248476204U;
    msg.duty_cycle = 3639648665U;

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
    msg.setTimeStamp(0.691975375319);
    msg.setSource(8838U);
    msg.setSourceEntity(198U);
    msg.setDestination(12006U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.0679902758911;
    msg.lon = 0.0781237140681;
    msg.height = 0.56172642806;
    msg.x = 0.888700670952;
    msg.y = 0.552898537912;
    msg.z = 0.0783138202409;
    msg.phi = 0.492493217897;
    msg.theta = 0.533798216149;
    msg.psi = 0.408177994399;
    msg.u = 0.519516012418;
    msg.v = 0.495249314159;
    msg.w = 0.335738299461;
    msg.vx = 0.453270068657;
    msg.vy = 0.231687126372;
    msg.vz = 0.608151450653;
    msg.p = 0.311595477996;
    msg.q = 0.326514075607;
    msg.r = 0.682022203519;
    msg.depth = 0.776981830222;
    msg.alt = 0.0725153864242;

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
    msg.setTimeStamp(0.689232484821);
    msg.setSource(37167U);
    msg.setSourceEntity(3U);
    msg.setDestination(13302U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.590235760182;
    msg.lon = 0.0887267467296;
    msg.height = 0.669581703191;
    msg.x = 0.340108583423;
    msg.y = 0.623241706874;
    msg.z = 0.374276740774;
    msg.phi = 0.879390834648;
    msg.theta = 0.889746133678;
    msg.psi = 0.911127682068;
    msg.u = 0.532945676809;
    msg.v = 0.304769597142;
    msg.w = 0.666908468772;
    msg.vx = 0.945742989648;
    msg.vy = 0.583446525237;
    msg.vz = 0.819437272213;
    msg.p = 0.589965462739;
    msg.q = 0.803564256111;
    msg.r = 0.0113083443075;
    msg.depth = 0.795585521246;
    msg.alt = 0.169805611065;

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
    msg.setTimeStamp(0.625744314649);
    msg.setSource(29844U);
    msg.setSourceEntity(6U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.979109027346;
    msg.lon = 0.611855286456;
    msg.height = 0.508577776015;
    msg.x = 0.146717378346;
    msg.y = 0.796157616727;
    msg.z = 0.917078793265;
    msg.phi = 0.305595404281;
    msg.theta = 0.311316902944;
    msg.psi = 0.708068725777;
    msg.u = 0.392583199611;
    msg.v = 0.0748052817467;
    msg.w = 0.867559985413;
    msg.vx = 0.976124175967;
    msg.vy = 0.278284033342;
    msg.vz = 0.957787160017;
    msg.p = 0.224968481321;
    msg.q = 0.56704861768;
    msg.r = 0.223308430515;
    msg.depth = 0.718697018279;
    msg.alt = 0.612411645715;

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
    msg.setTimeStamp(0.668516005034);
    msg.setSource(39035U);
    msg.setSourceEntity(1U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(125U);
    msg.x = 0.0461610709053;
    msg.y = 0.0309581159402;
    msg.z = 0.675678226787;

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
    msg.setTimeStamp(0.231888750742);
    msg.setSource(27240U);
    msg.setSourceEntity(106U);
    msg.setDestination(3708U);
    msg.setDestinationEntity(56U);
    msg.x = 0.616662550042;
    msg.y = 0.565982957005;
    msg.z = 0.982979952991;

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
    msg.setTimeStamp(0.151812493861);
    msg.setSource(55793U);
    msg.setSourceEntity(73U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(41U);
    msg.x = 0.502379796983;
    msg.y = 0.190434252464;
    msg.z = 0.786811682958;

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
    msg.setTimeStamp(0.558531121916);
    msg.setSource(57278U);
    msg.setSourceEntity(251U);
    msg.setDestination(26666U);
    msg.setDestinationEntity(116U);
    msg.value = 0.33487555608;

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
    msg.setTimeStamp(0.60939041622);
    msg.setSource(42603U);
    msg.setSourceEntity(84U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(87U);
    msg.value = 0.75409042903;

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
    msg.setTimeStamp(0.0669382173834);
    msg.setSource(42380U);
    msg.setSourceEntity(223U);
    msg.setDestination(45436U);
    msg.setDestinationEntity(164U);
    msg.value = 0.327430884471;

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
    msg.setTimeStamp(0.146335789608);
    msg.setSource(643U);
    msg.setSourceEntity(148U);
    msg.setDestination(60136U);
    msg.setDestinationEntity(41U);
    msg.value = 0.188671590661;

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
    msg.setTimeStamp(0.794134828326);
    msg.setSource(31402U);
    msg.setSourceEntity(171U);
    msg.setDestination(54330U);
    msg.setDestinationEntity(51U);
    msg.value = 0.717849071817;

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
    msg.setTimeStamp(0.890183113356);
    msg.setSource(59879U);
    msg.setSourceEntity(175U);
    msg.setDestination(46596U);
    msg.setDestinationEntity(91U);
    msg.value = 0.240653661566;

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
    msg.setTimeStamp(0.689845439415);
    msg.setSource(29072U);
    msg.setSourceEntity(217U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(101U);
    msg.x = 0.922205739416;
    msg.y = 0.229730335189;
    msg.z = 0.120879189786;
    msg.phi = 0.906825098182;
    msg.theta = 0.706030098703;
    msg.psi = 0.889861071812;
    msg.p = 0.884608261059;
    msg.q = 0.695346117452;
    msg.r = 0.0835323146365;
    msg.u = 0.57639326869;
    msg.v = 0.938738790022;
    msg.w = 0.355981431504;
    msg.bias_psi = 0.572284685138;
    msg.bias_r = 0.0908776202059;

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
    msg.setTimeStamp(0.23078303097);
    msg.setSource(59865U);
    msg.setSourceEntity(228U);
    msg.setDestination(64342U);
    msg.setDestinationEntity(212U);
    msg.x = 0.440044088824;
    msg.y = 0.939758236294;
    msg.z = 0.666841798679;
    msg.phi = 0.171521773927;
    msg.theta = 0.301521498165;
    msg.psi = 0.81640383484;
    msg.p = 0.756348969751;
    msg.q = 0.167125357729;
    msg.r = 0.195364628019;
    msg.u = 0.141274215303;
    msg.v = 0.930811342248;
    msg.w = 0.370816940821;
    msg.bias_psi = 0.356403055583;
    msg.bias_r = 0.678689917401;

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
    msg.setTimeStamp(0.842707896775);
    msg.setSource(63862U);
    msg.setSourceEntity(145U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(123U);
    msg.x = 0.485576454121;
    msg.y = 0.269631162467;
    msg.z = 0.440697477194;
    msg.phi = 0.820336565458;
    msg.theta = 0.686879799547;
    msg.psi = 0.0190041233579;
    msg.p = 0.290248863277;
    msg.q = 0.468170236857;
    msg.r = 0.436297160437;
    msg.u = 0.794552917015;
    msg.v = 0.569059943001;
    msg.w = 0.0142899834582;
    msg.bias_psi = 0.537171921058;
    msg.bias_r = 0.860575556307;

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
    msg.setTimeStamp(0.438521341847);
    msg.setSource(21408U);
    msg.setSourceEntity(55U);
    msg.setDestination(49157U);
    msg.setDestinationEntity(68U);
    msg.bias_psi = 0.52218901745;
    msg.bias_r = 0.642146598126;
    msg.cog = 0.982840898643;
    msg.cyaw = 0.864532819716;
    msg.lbl_rej_level = 0.982362929088;
    msg.gps_rej_level = 0.5565185703;
    msg.custom_x = 0.512878052283;
    msg.custom_y = 0.253492812578;
    msg.custom_z = 0.905978174903;

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
    msg.setTimeStamp(0.69787502436);
    msg.setSource(61780U);
    msg.setSourceEntity(110U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(154U);
    msg.bias_psi = 0.935477922493;
    msg.bias_r = 0.253309287151;
    msg.cog = 0.402827934765;
    msg.cyaw = 0.0176932577569;
    msg.lbl_rej_level = 0.825368892054;
    msg.gps_rej_level = 0.805030883805;
    msg.custom_x = 0.299216273567;
    msg.custom_y = 0.600256609292;
    msg.custom_z = 0.950712578705;

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
    msg.setTimeStamp(0.0259930033099);
    msg.setSource(9290U);
    msg.setSourceEntity(125U);
    msg.setDestination(16639U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.660632700158;
    msg.bias_r = 0.556203132943;
    msg.cog = 0.347736613776;
    msg.cyaw = 0.517728937918;
    msg.lbl_rej_level = 0.568436512737;
    msg.gps_rej_level = 0.0274514573661;
    msg.custom_x = 0.245823648024;
    msg.custom_y = 0.56210896526;
    msg.custom_z = 0.0272210611401;

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
    msg.setTimeStamp(0.764081848272);
    msg.setSource(55091U);
    msg.setSourceEntity(164U);
    msg.setDestination(61355U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.625707534453;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.957439794389);
    msg.setSource(444U);
    msg.setSourceEntity(65U);
    msg.setDestination(59128U);
    msg.setDestinationEntity(200U);
    msg.utc_time = 0.874523711909;
    msg.reason = 252U;

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
    msg.setTimeStamp(0.953117743321);
    msg.setSource(605U);
    msg.setSourceEntity(73U);
    msg.setDestination(37548U);
    msg.setDestinationEntity(198U);
    msg.utc_time = 0.530108689536;
    msg.reason = 78U;

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
    msg.setTimeStamp(0.590630752928);
    msg.setSource(2637U);
    msg.setSourceEntity(162U);
    msg.setDestination(58333U);
    msg.setDestinationEntity(128U);
    msg.id = 80U;
    msg.range = 0.721729247862;
    msg.acceptance = 67U;

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
    msg.setTimeStamp(0.519937191648);
    msg.setSource(29606U);
    msg.setSourceEntity(31U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(12U);
    msg.id = 170U;
    msg.range = 0.843858078733;
    msg.acceptance = 155U;

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
    msg.setTimeStamp(0.60549175045);
    msg.setSource(1840U);
    msg.setSourceEntity(115U);
    msg.setDestination(16803U);
    msg.setDestinationEntity(135U);
    msg.id = 194U;
    msg.range = 0.661857976139;
    msg.acceptance = 68U;

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
    msg.setTimeStamp(0.201227709582);
    msg.setSource(51740U);
    msg.setSourceEntity(18U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(63U);
    msg.type = 235U;
    msg.reason = 186U;
    msg.value = 0.990942167051;
    msg.timestep = 0.253845848491;

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
    msg.setTimeStamp(0.921938562334);
    msg.setSource(63354U);
    msg.setSourceEntity(11U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(67U);
    msg.type = 144U;
    msg.reason = 177U;
    msg.value = 0.132483724504;
    msg.timestep = 0.694636877359;

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
    msg.setTimeStamp(0.360089015466);
    msg.setSource(57504U);
    msg.setSourceEntity(130U);
    msg.setDestination(5981U);
    msg.setDestinationEntity(191U);
    msg.type = 30U;
    msg.reason = 26U;
    msg.value = 0.167946565041;
    msg.timestep = 0.924645389301;

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
    msg.setTimeStamp(0.145862996434);
    msg.setSource(3765U);
    msg.setSourceEntity(0U);
    msg.setDestination(491U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.670152271906);
    msg.setSource(7476U);
    msg.setSourceEntity(116U);
    msg.setDestination(7620U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.996576275274);
    msg.setSource(57762U);
    msg.setSourceEntity(76U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.268080764777);
    msg.setSource(32897U);
    msg.setSourceEntity(237U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(30U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WAGDIZMAXCVUMLMBZKACJAWFDIBRQVYJWUKQZWPUGEKDNWHNRHHVDYNDRTWWIGBMGLITJZBOPMFYFSWEVDEVZERLPUSQLSYDSMAOPTSFMGHYLNQLONTMKHZGPAYTPXXXOEQLUVPTMWAKLHEXHCCYUOPFXFGVIOPJNHL");
    tmp_msg_0.lat = 0.037355614208;
    tmp_msg_0.lon = 0.571468221682;
    tmp_msg_0.depth = 0.995573306464;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 202U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.221989399528;
    msg.y = 0.565463371315;
    msg.var_x = 0.928540946207;
    msg.var_y = 0.259320972718;
    msg.distance = 0.766257279436;

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
    msg.setTimeStamp(0.281144716408);
    msg.setSource(8123U);
    msg.setSourceEntity(83U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(188U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AROLKGPIFNLEELVXNZSJEJHYGVIKHYSZEDQUWVDPWJIMUGYHIBUGS");
    tmp_msg_0.lat = 0.620969561083;
    tmp_msg_0.lon = 0.0490828307214;
    tmp_msg_0.depth = 0.271972196117;
    tmp_msg_0.query_channel = 233U;
    tmp_msg_0.reply_channel = 26U;
    tmp_msg_0.transponder_delay = 5U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.887919764775;
    msg.y = 0.262311738472;
    msg.var_x = 0.787459462678;
    msg.var_y = 0.514128440038;
    msg.distance = 0.680839911599;

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
    msg.setTimeStamp(0.676305654378);
    msg.setSource(26598U);
    msg.setSourceEntity(180U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(202U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZVMVCHBCCYBTPPBEJITOATCIVEFBKOOLHXDYXLKDMVXNWTLSTGNSDIZBOPIRMIVTKBNBPQFDIOUYCORHWRROUDPAMLWRGRPLDFKEJCNMYRWWKVXEYWEATYEUXTCASDJGAGHKVRJQCBPJQAZLFNKZSNSQSILOPWGSVMEDWCRIRUQKAUGNJVBFZNUFFT");
    tmp_msg_0.lat = 0.215867607515;
    tmp_msg_0.lon = 0.562710157842;
    tmp_msg_0.depth = 0.543324633073;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 158U;
    tmp_msg_0.transponder_delay = 76U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.185622319443;
    msg.y = 0.677415369069;
    msg.var_x = 0.0086364126013;
    msg.var_y = 0.076317327374;
    msg.distance = 0.63765392547;

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
    msg.setTimeStamp(0.99126387104);
    msg.setSource(12455U);
    msg.setSourceEntity(37U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(142U);
    msg.state = 44U;

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
    msg.setTimeStamp(0.444864190184);
    msg.setSource(64897U);
    msg.setSourceEntity(180U);
    msg.setDestination(26932U);
    msg.setDestinationEntity(70U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.209413145078);
    msg.setSource(23327U);
    msg.setSourceEntity(150U);
    msg.setDestination(55726U);
    msg.setDestinationEntity(63U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.693668521784);
    msg.setSource(26800U);
    msg.setSourceEntity(80U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(205U);
    msg.x = 0.680613139865;
    msg.y = 0.632810581332;
    msg.z = 0.876103617682;

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
    msg.setTimeStamp(0.197780686041);
    msg.setSource(40624U);
    msg.setSourceEntity(195U);
    msg.setDestination(21414U);
    msg.setDestinationEntity(191U);
    msg.x = 0.68853074795;
    msg.y = 0.302438275399;
    msg.z = 0.807804952128;

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
    msg.setTimeStamp(0.915990727369);
    msg.setSource(18835U);
    msg.setSourceEntity(84U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(61U);
    msg.x = 0.279052678382;
    msg.y = 0.769752399044;
    msg.z = 0.741184697299;

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
    msg.setTimeStamp(0.348535246639);
    msg.setSource(38799U);
    msg.setSourceEntity(132U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(74U);
    msg.value = 0.645863802168;

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
    msg.setTimeStamp(0.244244071428);
    msg.setSource(21714U);
    msg.setSourceEntity(162U);
    msg.setDestination(34288U);
    msg.setDestinationEntity(233U);
    msg.value = 0.029242272977;

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
    msg.setTimeStamp(0.706786497366);
    msg.setSource(52821U);
    msg.setSourceEntity(69U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(216U);
    msg.value = 0.675829873293;

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
    msg.setTimeStamp(0.421428042075);
    msg.setSource(61520U);
    msg.setSourceEntity(220U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(11U);
    msg.value = 0.761925753878;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.462269448598);
    msg.setSource(61674U);
    msg.setSourceEntity(83U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0487828260866;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.465997678914);
    msg.setSource(9832U);
    msg.setSourceEntity(161U);
    msg.setDestination(14947U);
    msg.setDestinationEntity(233U);
    msg.value = 0.82503054763;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.230575440667);
    msg.setSource(54154U);
    msg.setSourceEntity(54U);
    msg.setDestination(21750U);
    msg.setDestinationEntity(45U);
    msg.value = 0.686807112187;
    msg.speed_units = 118U;

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
    msg.setTimeStamp(0.561669102633);
    msg.setSource(6221U);
    msg.setSourceEntity(162U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(182U);
    msg.value = 0.809051316133;
    msg.speed_units = 22U;

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
    msg.setTimeStamp(0.391916804657);
    msg.setSource(26902U);
    msg.setSourceEntity(79U);
    msg.setDestination(65315U);
    msg.setDestinationEntity(9U);
    msg.value = 0.132052066485;
    msg.speed_units = 78U;

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
    msg.setTimeStamp(0.294919220928);
    msg.setSource(61137U);
    msg.setSourceEntity(171U);
    msg.setDestination(7951U);
    msg.setDestinationEntity(16U);
    msg.value = 0.552633703999;

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
    msg.setTimeStamp(0.947904482631);
    msg.setSource(50827U);
    msg.setSourceEntity(237U);
    msg.setDestination(56214U);
    msg.setDestinationEntity(129U);
    msg.value = 0.697243420251;

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
    msg.setTimeStamp(0.711249058202);
    msg.setSource(29091U);
    msg.setSourceEntity(35U);
    msg.setDestination(31855U);
    msg.setDestinationEntity(177U);
    msg.value = 0.32757268303;

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
    msg.setTimeStamp(0.273435825584);
    msg.setSource(15977U);
    msg.setSourceEntity(238U);
    msg.setDestination(54420U);
    msg.setDestinationEntity(76U);
    msg.value = 0.771992565368;

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
    msg.setTimeStamp(0.0793640207453);
    msg.setSource(33878U);
    msg.setSourceEntity(9U);
    msg.setDestination(52762U);
    msg.setDestinationEntity(13U);
    msg.value = 0.780853465044;

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
    msg.setTimeStamp(0.368794427047);
    msg.setSource(54024U);
    msg.setSourceEntity(132U);
    msg.setDestination(51143U);
    msg.setDestinationEntity(186U);
    msg.value = 0.340816376527;

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
    msg.setTimeStamp(0.493117385914);
    msg.setSource(62404U);
    msg.setSourceEntity(47U);
    msg.setDestination(44385U);
    msg.setDestinationEntity(60U);
    msg.value = 0.306503517375;

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
    msg.setTimeStamp(0.0588200297504);
    msg.setSource(55996U);
    msg.setSourceEntity(89U);
    msg.setDestination(32328U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0847806864564;

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
    msg.setTimeStamp(0.191540273664);
    msg.setSource(45334U);
    msg.setSourceEntity(100U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(77U);
    msg.value = 0.108857124869;

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
    msg.setTimeStamp(0.883330438758);
    msg.setSource(17101U);
    msg.setSourceEntity(172U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(135U);
    msg.start_lat = 0.295055276307;
    msg.start_lon = 0.847468301485;
    msg.start_z = 0.0791631708316;
    msg.start_z_units = 42U;
    msg.end_lat = 0.956910235574;
    msg.end_lon = 0.150958440652;
    msg.end_z = 0.959046496066;
    msg.end_z_units = 215U;
    msg.speed = 0.752258176983;
    msg.speed_units = 138U;
    msg.lradius = 0.364363739088;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.331281037604);
    msg.setSource(29102U);
    msg.setSourceEntity(93U);
    msg.setDestination(61738U);
    msg.setDestinationEntity(221U);
    msg.start_lat = 0.288519482681;
    msg.start_lon = 0.941112526965;
    msg.start_z = 0.847927851706;
    msg.start_z_units = 51U;
    msg.end_lat = 0.652476740788;
    msg.end_lon = 0.766294913221;
    msg.end_z = 0.377946793126;
    msg.end_z_units = 191U;
    msg.speed = 0.183797576178;
    msg.speed_units = 46U;
    msg.lradius = 0.390435920457;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.152154469737);
    msg.setSource(21401U);
    msg.setSourceEntity(8U);
    msg.setDestination(32051U);
    msg.setDestinationEntity(211U);
    msg.start_lat = 0.677000347968;
    msg.start_lon = 0.882613218251;
    msg.start_z = 0.842229416088;
    msg.start_z_units = 142U;
    msg.end_lat = 0.790721347137;
    msg.end_lon = 0.627744263301;
    msg.end_z = 0.877641923259;
    msg.end_z_units = 154U;
    msg.speed = 0.290289359858;
    msg.speed_units = 60U;
    msg.lradius = 0.70287585636;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.430976145349);
    msg.setSource(54768U);
    msg.setSourceEntity(251U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(250U);
    msg.x = 0.405030148387;
    msg.y = 0.632827068469;
    msg.z = 0.399478915467;
    msg.k = 0.319311607328;
    msg.m = 0.259876038401;
    msg.n = 0.443567528416;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.715291345238);
    msg.setSource(57173U);
    msg.setSourceEntity(88U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(212U);
    msg.x = 0.224070620065;
    msg.y = 0.152564095309;
    msg.z = 0.229701754133;
    msg.k = 0.871321796581;
    msg.m = 0.339436897318;
    msg.n = 0.353382205821;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.866951830793);
    msg.setSource(64471U);
    msg.setSourceEntity(205U);
    msg.setDestination(60259U);
    msg.setDestinationEntity(115U);
    msg.x = 0.836676799652;
    msg.y = 0.494686309021;
    msg.z = 0.55726031635;
    msg.k = 0.166037026932;
    msg.m = 0.357242787952;
    msg.n = 0.683712554936;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.917875112241);
    msg.setSource(11468U);
    msg.setSourceEntity(83U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(141U);
    msg.value = 0.787859397311;

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
    msg.setTimeStamp(0.483689542169);
    msg.setSource(25762U);
    msg.setSourceEntity(235U);
    msg.setDestination(4804U);
    msg.setDestinationEntity(140U);
    msg.value = 0.629272347569;

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
    msg.setTimeStamp(0.258467033872);
    msg.setSource(33096U);
    msg.setSourceEntity(175U);
    msg.setDestination(25714U);
    msg.setDestinationEntity(192U);
    msg.value = 0.773679775678;

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
    msg.setTimeStamp(0.997495502181);
    msg.setSource(62124U);
    msg.setSourceEntity(50U);
    msg.setDestination(51427U);
    msg.setDestinationEntity(97U);
    msg.u = 0.164405986544;
    msg.v = 0.396402411366;
    msg.w = 0.535030711172;
    msg.p = 0.915238692216;
    msg.q = 0.677844692499;
    msg.r = 0.167781432376;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.337453891335);
    msg.setSource(48574U);
    msg.setSourceEntity(45U);
    msg.setDestination(61950U);
    msg.setDestinationEntity(72U);
    msg.u = 0.13285956454;
    msg.v = 0.704095642536;
    msg.w = 0.948489648596;
    msg.p = 0.160291569584;
    msg.q = 0.526053723179;
    msg.r = 0.457017299172;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.518444297302);
    msg.setSource(49649U);
    msg.setSourceEntity(60U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(45U);
    msg.u = 0.793842542689;
    msg.v = 0.504658027578;
    msg.w = 0.979555280648;
    msg.p = 0.0803085071775;
    msg.q = 0.775058336605;
    msg.r = 0.566574775235;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.40863445324);
    msg.setSource(36018U);
    msg.setSourceEntity(187U);
    msg.setDestination(51954U);
    msg.setDestinationEntity(13U);
    msg.start_lat = 0.961000544603;
    msg.start_lon = 0.416367544353;
    msg.start_z = 0.566668565739;
    msg.start_z_units = 98U;
    msg.end_lat = 0.919267400943;
    msg.end_lon = 0.0937363651668;
    msg.end_z = 0.362940627979;
    msg.end_z_units = 59U;
    msg.lradius = 0.640780350472;
    msg.flags = 175U;
    msg.x = 0.840799896946;
    msg.y = 0.536128874593;
    msg.z = 0.288066604342;
    msg.vx = 0.0322511383601;
    msg.vy = 0.727882160869;
    msg.vz = 0.109870579536;
    msg.course_error = 0.782069757557;
    msg.eta = 32857U;

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
    msg.setTimeStamp(0.205402505883);
    msg.setSource(682U);
    msg.setSourceEntity(153U);
    msg.setDestination(12973U);
    msg.setDestinationEntity(125U);
    msg.start_lat = 0.684121145302;
    msg.start_lon = 0.96055834366;
    msg.start_z = 0.00491707428695;
    msg.start_z_units = 221U;
    msg.end_lat = 0.433669007214;
    msg.end_lon = 0.676029729792;
    msg.end_z = 0.583517347938;
    msg.end_z_units = 182U;
    msg.lradius = 0.449766514729;
    msg.flags = 187U;
    msg.x = 0.141382657691;
    msg.y = 0.471423019653;
    msg.z = 0.960130888663;
    msg.vx = 0.782570813743;
    msg.vy = 0.791087548819;
    msg.vz = 0.692496381118;
    msg.course_error = 0.302274129578;
    msg.eta = 35671U;

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
    msg.setTimeStamp(0.928649577568);
    msg.setSource(52184U);
    msg.setSourceEntity(31U);
    msg.setDestination(51810U);
    msg.setDestinationEntity(89U);
    msg.start_lat = 0.564432112692;
    msg.start_lon = 0.274669146966;
    msg.start_z = 0.984931738727;
    msg.start_z_units = 13U;
    msg.end_lat = 0.526735032079;
    msg.end_lon = 0.652106537297;
    msg.end_z = 0.147538305026;
    msg.end_z_units = 209U;
    msg.lradius = 0.902826783117;
    msg.flags = 222U;
    msg.x = 0.0669736883144;
    msg.y = 0.143726781244;
    msg.z = 0.799232693177;
    msg.vx = 0.735401973983;
    msg.vy = 0.172528812713;
    msg.vz = 0.585481334884;
    msg.course_error = 0.388673755422;
    msg.eta = 1032U;

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
    msg.setTimeStamp(0.542182924798);
    msg.setSource(19524U);
    msg.setSourceEntity(58U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(66U);
    msg.k = 0.454089567226;
    msg.m = 0.422869493079;
    msg.n = 0.774294906482;

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
    msg.setTimeStamp(0.0129018794863);
    msg.setSource(17552U);
    msg.setSourceEntity(73U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(130U);
    msg.k = 0.974500183522;
    msg.m = 0.150272710091;
    msg.n = 0.8932043877;

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
    msg.setTimeStamp(0.697019301411);
    msg.setSource(30924U);
    msg.setSourceEntity(200U);
    msg.setDestination(34848U);
    msg.setDestinationEntity(240U);
    msg.k = 0.249769657838;
    msg.m = 0.813524732145;
    msg.n = 0.289182042484;

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
    msg.setTimeStamp(0.948421589681);
    msg.setSource(28598U);
    msg.setSourceEntity(241U);
    msg.setDestination(24307U);
    msg.setDestinationEntity(248U);
    msg.p = 0.345801044018;
    msg.i = 0.810096124128;
    msg.d = 0.131602512581;
    msg.a = 0.276608813696;

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
    msg.setTimeStamp(0.779313967511);
    msg.setSource(9957U);
    msg.setSourceEntity(251U);
    msg.setDestination(4393U);
    msg.setDestinationEntity(79U);
    msg.p = 0.939848660335;
    msg.i = 0.528135804565;
    msg.d = 0.87998998726;
    msg.a = 0.332512960618;

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
    msg.setTimeStamp(0.224130294512);
    msg.setSource(63956U);
    msg.setSourceEntity(38U);
    msg.setDestination(214U);
    msg.setDestinationEntity(207U);
    msg.p = 0.109996226704;
    msg.i = 0.628425228083;
    msg.d = 0.274711271003;
    msg.a = 0.276578035947;

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
    msg.setTimeStamp(0.0400956827844);
    msg.setSource(34533U);
    msg.setSourceEntity(49U);
    msg.setDestination(9047U);
    msg.setDestinationEntity(144U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.480576354714);
    msg.setSource(14422U);
    msg.setSourceEntity(63U);
    msg.setDestination(37511U);
    msg.setDestinationEntity(36U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.0679662995307);
    msg.setSource(41054U);
    msg.setSourceEntity(152U);
    msg.setDestination(41455U);
    msg.setDestinationEntity(74U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.590262733473);
    msg.setSource(30561U);
    msg.setSourceEntity(133U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(34U);
    msg.timeout = 17697U;
    msg.lat = 0.695183784201;
    msg.lon = 0.570523636117;
    msg.z = 0.771600115695;
    msg.z_units = 121U;
    msg.speed = 0.0315488022872;
    msg.speed_units = 57U;
    msg.roll = 0.809373912832;
    msg.pitch = 0.896512975708;
    msg.yaw = 0.694756663917;
    msg.custom.assign("LJBRUNXZNLCKUPSEWPZFWZZBVONFGOWPIESITHGVNCZOWUXZTTTZMYSUQEHHQLZMCMJFQGDLGDXSXWFIOPHCAMHDXOAJYWNRPOLBHRNIQKKQIVWJFZIVQBHVDKHKAAYKHJSRXLROSEINYJSEVKVDMBTUQAAFWYKEFFMMJZQLUAFTWPUTICJERQGSCTHDOVAYPJSGJPRBEUOXADGPYLEKBDIVQSBCFRPRBGUXYCBGLTROXVEYTDKNNCYMLDACIU");

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
    msg.setTimeStamp(0.60279596783);
    msg.setSource(8761U);
    msg.setSourceEntity(187U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(151U);
    msg.timeout = 35153U;
    msg.lat = 0.0662780799384;
    msg.lon = 0.201886779519;
    msg.z = 0.379084424002;
    msg.z_units = 109U;
    msg.speed = 0.465105705043;
    msg.speed_units = 111U;
    msg.roll = 0.280655120286;
    msg.pitch = 0.793119041204;
    msg.yaw = 0.440546270675;
    msg.custom.assign("HLYAOOPPJKPYFSDMKEMKLKZQJEZKCNSXRHVUNKQWHZKFQMAFHIFPDGUBEMSEWOWAPOEQUETYXVXVIRNXQFVGTANEATSKHZHDHGYQZQQOMRSIXXBXNWGLSDYVISZEWUVMMJTRNRPCWJOOPERDZWFMLOTGUCFNZIFLDLVBNLAJJBMSWCRTVLIUKATICANRYXAVYUPZFHDBYAGSWBUGCQTMZCTHBEYUXRNDDQJTCPGLIIJGJFJVDOGOKSHC");

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
    msg.setTimeStamp(0.529264691181);
    msg.setSource(52835U);
    msg.setSourceEntity(136U);
    msg.setDestination(21594U);
    msg.setDestinationEntity(242U);
    msg.timeout = 45911U;
    msg.lat = 0.18332134005;
    msg.lon = 0.320921353371;
    msg.z = 0.823528866082;
    msg.z_units = 226U;
    msg.speed = 0.638456092859;
    msg.speed_units = 164U;
    msg.roll = 0.870240738004;
    msg.pitch = 0.857073717842;
    msg.yaw = 0.950644915683;
    msg.custom.assign("STEZHFSNOSROSRENGHJFEMBJLFOENDTQIXLMODIYGENLKWUDISMVSXTFXKIBDPJKVKCAYUFBIZOVFDOAMPWBRWAGQYNHUDYPXPRTHZPDQAAYXKHRVRXQKWXHC");

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
    msg.setTimeStamp(0.12007952246);
    msg.setSource(38959U);
    msg.setSourceEntity(9U);
    msg.setDestination(16806U);
    msg.setDestinationEntity(157U);
    msg.timeout = 24425U;
    msg.lat = 0.732582194716;
    msg.lon = 0.192589324887;
    msg.z = 0.197238115528;
    msg.z_units = 130U;
    msg.speed = 0.380069603201;
    msg.speed_units = 236U;
    msg.duration = 19458U;
    msg.radius = 0.145303301384;
    msg.flags = 193U;
    msg.custom.assign("MDZDNILESOXDYLFYQCYPBFOZRGOSYBDJSKKMHKTIWFPTSCGDFFRUSYVGIMEZUTIAOIWSWJOSKWUNYWBEQHLURBZYULNNXMVKIKMJCSOEVOKGHUATLZDLPDLDHGOTHXPTRUWJOQOEDEVMJNJDIZPUVBJNGCHRFFWXQUTLNFJWKRMPAFGEEQNUERAQVPWHYEITZNPABGZCXIW");

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
    msg.setTimeStamp(0.161378366152);
    msg.setSource(9768U);
    msg.setSourceEntity(174U);
    msg.setDestination(17280U);
    msg.setDestinationEntity(101U);
    msg.timeout = 63059U;
    msg.lat = 0.446886920987;
    msg.lon = 0.973668367752;
    msg.z = 0.578791402309;
    msg.z_units = 244U;
    msg.speed = 0.410222609281;
    msg.speed_units = 39U;
    msg.duration = 13404U;
    msg.radius = 0.564966801066;
    msg.flags = 20U;
    msg.custom.assign("GNFZLASINRUTVGZLMKRPBTYOIMINLCODVJTLEQHZRWFCHQNSPWMMJUNMQQHEEXQSKGLVCADWSXZSFXKQCGLJXKVCFVBFHQBTSIZAIOWMFYXVGZOETPDXTSMCPZOEKWWXLKNRARGDVJOVDGGANDJJPJAJNFEIK");

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
    msg.setTimeStamp(0.936713147334);
    msg.setSource(55432U);
    msg.setSourceEntity(177U);
    msg.setDestination(42212U);
    msg.setDestinationEntity(46U);
    msg.timeout = 38099U;
    msg.lat = 0.446735322708;
    msg.lon = 0.626052355633;
    msg.z = 0.573230696075;
    msg.z_units = 236U;
    msg.speed = 0.177806752472;
    msg.speed_units = 180U;
    msg.duration = 13780U;
    msg.radius = 0.265162495177;
    msg.flags = 214U;
    msg.custom.assign("FBJQAYXDDTUIYXUHGMNIAOCEWJAGOWAYPXJLXXJNRFTZFZQRRKJBNPPRHBPFJSWWISSDTBHMXCNZINMSLWCMFZEXVDRACJHAOKAOKRDQMYVVSFLJMGDWLPLVKBKDJNSOAHVPQLUBXGSQUVFZBNEJAGFSSGVL");

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
    msg.setTimeStamp(0.846310015899);
    msg.setSource(10951U);
    msg.setSourceEntity(180U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("EDDTDEVXTNNQSHGGRQHBUVJRQSBTNEOHDLLNNOFYPSWQDWFGXFDOKJQCFLAJLDVSXJYBAZMELITMPUKMZVVMHRSWGZGSYRWCZLUKGVFWGPMPXHZCUCWJGHFOZGKCFRPXMVWCBEKJIBIBLNPVOQCOIHZOLLAYRXFXPMKWPTU");

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
    msg.setTimeStamp(0.521113343503);
    msg.setSource(23055U);
    msg.setSourceEntity(113U);
    msg.setDestination(40301U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("FRBBXIPUIYMRROMFNSLHIOTB");

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
    msg.setTimeStamp(0.124606482182);
    msg.setSource(35002U);
    msg.setSourceEntity(226U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(205U);
    msg.custom.assign("BOFGNHDSQRJMBTWATCDQLRSVPZTRMKCUSAFRSFXCVWMBNYTTPRNYICUFMBONADJZKDELDSPYICSCKAILVGFRKJCXWGMKUPRKZBYCECQGEVEQLU");

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
    msg.setTimeStamp(0.150647415259);
    msg.setSource(4719U);
    msg.setSourceEntity(46U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(171U);
    msg.timeout = 12488U;
    msg.lat = 0.374528157574;
    msg.lon = 0.517117295604;
    msg.z = 0.565558885125;
    msg.z_units = 237U;
    msg.duration = 61662U;
    msg.speed = 0.841284933172;
    msg.speed_units = 150U;
    msg.type = 119U;
    msg.radius = 0.382290706175;
    msg.length = 0.231819194089;
    msg.bearing = 0.389605607482;
    msg.direction = 67U;
    msg.custom.assign("WLAZBOEEQBKUABYSEQQGAAXXHYFYQDIUIILTSNHZPUUEHX");

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
    msg.setTimeStamp(0.251077336887);
    msg.setSource(62679U);
    msg.setSourceEntity(22U);
    msg.setDestination(21051U);
    msg.setDestinationEntity(55U);
    msg.timeout = 24685U;
    msg.lat = 0.686916216842;
    msg.lon = 0.316667212657;
    msg.z = 0.762734347275;
    msg.z_units = 123U;
    msg.duration = 21178U;
    msg.speed = 0.0249401221234;
    msg.speed_units = 92U;
    msg.type = 74U;
    msg.radius = 0.580684358254;
    msg.length = 0.891352138374;
    msg.bearing = 0.60677598847;
    msg.direction = 98U;
    msg.custom.assign("TDLOIFYPETXNIFSOECHBXIJGQKVUKMPRAMELFPEWHNXMNVHRAGCCCAZVBQGUDFWPHYYUWPZOGMJTGYBLFOOAYNDNCQBERIGXNYAFOTSZVMDVJDHVZEQQOCUYKIQWLZVSRSKGHIQHREJOLOXDWVDBKPTOUHXJZLGTAFBHKKCNLWPSXUUCPPBDFUAFKCSRSMMZ");

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
    msg.setTimeStamp(0.145211635862);
    msg.setSource(53730U);
    msg.setSourceEntity(106U);
    msg.setDestination(18425U);
    msg.setDestinationEntity(34U);
    msg.timeout = 5749U;
    msg.lat = 0.126044126037;
    msg.lon = 0.732362014291;
    msg.z = 0.493023826992;
    msg.z_units = 82U;
    msg.duration = 52868U;
    msg.speed = 0.163517545582;
    msg.speed_units = 234U;
    msg.type = 186U;
    msg.radius = 0.148119301197;
    msg.length = 0.145052257649;
    msg.bearing = 0.033378136545;
    msg.direction = 129U;
    msg.custom.assign("NCBVSKBPBSWYIVTXMDXPVOVHYYXWPIPNZLSTCGIYBAWXUZLWBHUQAUFZIYMBUGQVMZHOIJCMPCALURG");

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
    msg.setTimeStamp(0.289265249944);
    msg.setSource(5291U);
    msg.setSourceEntity(19U);
    msg.setDestination(62227U);
    msg.setDestinationEntity(165U);
    msg.duration = 25388U;
    msg.custom.assign("CCFPLHYAZQWRZRKJEAQLJAOICPNNTKJPIIJTLYXQSZIXQUDVUHPEZWKAHOAJH");

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
    msg.setTimeStamp(0.320375798076);
    msg.setSource(40632U);
    msg.setSourceEntity(120U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(25U);
    msg.duration = 40824U;
    msg.custom.assign("DJMYEYUOLJEEBAOOCRMOPFKFNZXQKXSBEGBCKQNWRTMPXHEBLZQNGIBSEGQRZIOLURVMJDFMWTHTVRBBHRTTQXIVNTDFGAUYGIVGZESDBKJFMGBGNVHUHACEVMDYNAOIYKADHZNSJIVDOYFPKJPUNZRHCAXQJXPOLYFILAWEIZXQDCOACQCGHMWLHSRQWWXUIWTSDQRCZLYNTIWFWYZDUWEGPJVHPULURF");

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
    msg.setTimeStamp(0.225874503422);
    msg.setSource(50055U);
    msg.setSourceEntity(183U);
    msg.setDestination(12208U);
    msg.setDestinationEntity(98U);
    msg.duration = 58901U;
    msg.custom.assign("HHAOOONGIMKVNNFXCWPYBBPRXXSPQQAEHFMIMDNBQHBCUETUIRCIFSDICKJXGRJZMGAGMVVAYWBIPJCFRWADVBZSXVGAOLXKKOVPGFNYGARFYUL");

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
    msg.setTimeStamp(0.247924073919);
    msg.setSource(13741U);
    msg.setSourceEntity(75U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(243U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.368169566724;
    tmp_msg_0.speed_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 41647U;
    msg.custom.assign("LRJYPHLTNSPOMKHEJUXBISIXMQAYRVNCNUCAOEVCJNFYVLVAODDNWVSWPRHIDFEUISCHSZJPTFNPFCCGLGUGEABLDYXXJWQWZBYRZQBIYIFUEMXWLWPOIFDOMAKSQEVMTGULJYDKRHBBAUKGDMLJVHJ");

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
    msg.setTimeStamp(0.62954450807);
    msg.setSource(28636U);
    msg.setSourceEntity(67U);
    msg.setDestination(63724U);
    msg.setDestinationEntity(151U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.853893282998;
    tmp_msg_0.z_units = 90U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50046U;
    msg.custom.assign("VASNGQDQYSNPJCVANYMMIGIWRXMAYZJOPRKXLMZLEIUATLLERCVMCOTDMDJNVYTTATKCFWFMYLPEECIWDGQYSVEZHSSSFAHZZSOEEUXOQDXNCBCOFFGDBPNRHFIMZXDIHWGJJRSPLCHPWQ");

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
    msg.setTimeStamp(0.239082533711);
    msg.setSource(17226U);
    msg.setSourceEntity(47U);
    msg.setDestination(37061U);
    msg.setDestinationEntity(73U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.781942771573;
    msg.control.set(tmp_msg_0);
    msg.duration = 13592U;
    msg.custom.assign("JDZIIMZNLIGQXAWUEEGLVIWRQRBCATYSDBYHDGDOSWSOEJLXPINCDMRWHOEIGIQUXYGFDJPZNWMEKHZKBTPHJCFBRVFLKFQOUBNBNMMBOOAKSYJGAPXYCVEDZVVPJHTEEUOQLAUXGKQWXZUVFLDZHCANWSWBWRYWQGDZAXXUGQXLTRYNTDCMMZKFLUSCOSNTFOXHJZPJMKEHNYPIMVQQCJHSGVFPKJFNPTEAHRLRRVAIRUVSSMCYTKYK");

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
    msg.setTimeStamp(0.315887273387);
    msg.setSource(29160U);
    msg.setSourceEntity(99U);
    msg.setDestination(24724U);
    msg.setDestinationEntity(216U);
    msg.timeout = 42714U;
    msg.lat = 0.565406385845;
    msg.lon = 0.84494586761;
    msg.z = 0.823178788173;
    msg.z_units = 20U;
    msg.speed = 0.09150403399;
    msg.speed_units = 246U;
    msg.bearing = 0.0837114405296;
    msg.cross_angle = 0.0729370137222;
    msg.width = 0.785470993912;
    msg.length = 0.566909438719;
    msg.hstep = 0.37039189739;
    msg.coff = 25U;
    msg.alternation = 107U;
    msg.flags = 26U;
    msg.custom.assign("UNZHBWAVWTALYZYDKBENYVHLXHJXPKLAFUBAIPIOEXBKMRCCYNTBICTJRJRAPWWMAVYHNXEUUDFKSROJODSFWRNYVGJREVAGBGPOERVQGAQTPIFATSWDOLLIWNIQLBCNQVLQMUHOABLZCMKMHJXNJPNKQGZUHYKWXDUIMFSEZERKXDBRUQSSGOQFCQELGKRPDIGZFG");

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
    msg.setTimeStamp(0.0350591071522);
    msg.setSource(42712U);
    msg.setSourceEntity(250U);
    msg.setDestination(14208U);
    msg.setDestinationEntity(149U);
    msg.timeout = 4099U;
    msg.lat = 0.893998573469;
    msg.lon = 0.195474189853;
    msg.z = 0.782768185908;
    msg.z_units = 43U;
    msg.speed = 0.0222366875215;
    msg.speed_units = 150U;
    msg.bearing = 0.564070850059;
    msg.cross_angle = 0.942085045293;
    msg.width = 0.684717350803;
    msg.length = 0.571705016521;
    msg.hstep = 0.280207604308;
    msg.coff = 235U;
    msg.alternation = 247U;
    msg.flags = 99U;
    msg.custom.assign("HIQPXWXWIOAQRIFQUFKMOQHMLDULGMPSTCDGVDRSDEVDZYKLMGOVMPTPXFHHQMIAKIWYSBXKIABKQANVHWTUYUTRZYLXDPAXRGTNBZO");

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
    msg.setTimeStamp(0.606402563216);
    msg.setSource(24396U);
    msg.setSourceEntity(19U);
    msg.setDestination(35475U);
    msg.setDestinationEntity(138U);
    msg.timeout = 16913U;
    msg.lat = 0.123217318321;
    msg.lon = 0.278569135788;
    msg.z = 0.691507451348;
    msg.z_units = 84U;
    msg.speed = 0.33190202742;
    msg.speed_units = 59U;
    msg.bearing = 0.265442733528;
    msg.cross_angle = 0.635778555055;
    msg.width = 0.982448709645;
    msg.length = 0.90657714097;
    msg.hstep = 0.992291227985;
    msg.coff = 50U;
    msg.alternation = 127U;
    msg.flags = 126U;
    msg.custom.assign("HPGILMGCPBAPJTAGWKLVGWAQUNKLXUMUEVFWCOERNDARHSMFQFTFZWXWFUYLVRDIOZVRGVCGKYTTIUNQXAUDNFUICCWXHZUDSIEYBEGOYRBREWPBZZZINWVEMDZLQSS");

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
    msg.setTimeStamp(0.740189517731);
    msg.setSource(55638U);
    msg.setSourceEntity(88U);
    msg.setDestination(58315U);
    msg.setDestinationEntity(121U);
    msg.timeout = 18602U;
    msg.lat = 0.0379844698492;
    msg.lon = 0.676051052578;
    msg.z = 0.547824568854;
    msg.z_units = 148U;
    msg.speed = 0.0933733862212;
    msg.speed_units = 123U;
    msg.custom.assign("BZHPUNWQXAJVTKUERBXJDTWASNHDWPEFHUHAFEQDYACPHZXNUNFSXKMTJXCGLMCIZQSBOMQGSGFNBUILZCRBKPPQXWEMPUQVUAYTYIZJBBTYEFRJICSLVRIDBTAI");

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
    msg.setTimeStamp(0.0469092135743);
    msg.setSource(31496U);
    msg.setSourceEntity(95U);
    msg.setDestination(62976U);
    msg.setDestinationEntity(60U);
    msg.timeout = 37646U;
    msg.lat = 0.798097262758;
    msg.lon = 0.784034459315;
    msg.z = 0.892159157588;
    msg.z_units = 148U;
    msg.speed = 0.544220749602;
    msg.speed_units = 170U;
    msg.custom.assign("XWSMSVSFGSTVHSLAUKARFJMHJAPHGILHFRWMTUMDLHDBBQOFESXZLQEUEEAEDEZAUXWTZQULIXDWCOWSNKXYFJBZOOTMYEWFGOBTKTDRUCGGZCRGVURVMLPJUIMERZSBTKIZUPIHVIHOOTCQARVMQEYZCDMNXBNTAPDIVCWYNODMYKBIAF");

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
    msg.setTimeStamp(0.0845346723686);
    msg.setSource(60460U);
    msg.setSourceEntity(104U);
    msg.setDestination(4361U);
    msg.setDestinationEntity(78U);
    msg.timeout = 53245U;
    msg.lat = 0.985096390757;
    msg.lon = 0.740608017937;
    msg.z = 0.069975484661;
    msg.z_units = 6U;
    msg.speed = 0.71651927674;
    msg.speed_units = 6U;
    msg.custom.assign("SESGUYEPQWIIDMWSLHYOZONZXPFGJTNSQXRSECNPFFTDDHDJWJEFTMQLAMNYVLWRNRBFUVKHUOSQIYCWPFGXWQOZIBUKUIVKECDSTEJMTCJUZZDRLBBTDYLJXHU");

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
    msg.setTimeStamp(0.850692476803);
    msg.setSource(12458U);
    msg.setSourceEntity(19U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(152U);
    msg.x = 0.470230525247;
    msg.y = 0.460545064024;
    msg.z = 0.547085223787;

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
    msg.setTimeStamp(0.0794692591238);
    msg.setSource(9764U);
    msg.setSourceEntity(41U);
    msg.setDestination(17932U);
    msg.setDestinationEntity(175U);
    msg.x = 0.875601390256;
    msg.y = 0.777341752459;
    msg.z = 0.326553281357;

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
    msg.setTimeStamp(0.698103336974);
    msg.setSource(59211U);
    msg.setSourceEntity(26U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(191U);
    msg.x = 0.0806040145497;
    msg.y = 0.188144938339;
    msg.z = 0.0357482293258;

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
    msg.setTimeStamp(0.452276163636);
    msg.setSource(59886U);
    msg.setSourceEntity(88U);
    msg.setDestination(31557U);
    msg.setDestinationEntity(241U);
    msg.timeout = 51475U;
    msg.lat = 0.44887415994;
    msg.lon = 0.210406014002;
    msg.z = 0.635533062585;
    msg.z_units = 200U;
    msg.amplitude = 0.414105632874;
    msg.pitch = 0.610878852918;
    msg.speed = 0.144774167789;
    msg.speed_units = 27U;
    msg.custom.assign("FPIVMGQGKODYFZTYNHYMTOCADOCZYVSUSPAERZLDRYTEHAKTPNOQCSHNMDELFOOKEQEVWTKUW");

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
    msg.setTimeStamp(0.357396193178);
    msg.setSource(7528U);
    msg.setSourceEntity(239U);
    msg.setDestination(42903U);
    msg.setDestinationEntity(102U);
    msg.timeout = 47728U;
    msg.lat = 0.59397113861;
    msg.lon = 0.491085799721;
    msg.z = 0.335688229467;
    msg.z_units = 202U;
    msg.amplitude = 0.0269170369021;
    msg.pitch = 0.85220212317;
    msg.speed = 0.0804202957725;
    msg.speed_units = 92U;
    msg.custom.assign("IUZBNJHQRXLZUHOUDIAYTQXFAVEEQDIUALONPFXURQIKBIODNGDVYNWIDLTDETGOHMFKW");

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
    msg.setTimeStamp(0.114544134315);
    msg.setSource(29867U);
    msg.setSourceEntity(204U);
    msg.setDestination(33377U);
    msg.setDestinationEntity(117U);
    msg.timeout = 54959U;
    msg.lat = 0.266266544024;
    msg.lon = 0.492235048762;
    msg.z = 0.561476260567;
    msg.z_units = 226U;
    msg.amplitude = 0.495424244954;
    msg.pitch = 0.011088818795;
    msg.speed = 0.860921313337;
    msg.speed_units = 159U;
    msg.custom.assign("DETWUWYLVJYKCOTDZQABDSOCNIHOJHUOEKCPU");

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
    msg.setTimeStamp(0.501957646563);
    msg.setSource(31334U);
    msg.setSourceEntity(105U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.674847628071);
    msg.setSource(30063U);
    msg.setSourceEntity(199U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.229373453819);
    msg.setSource(4914U);
    msg.setSourceEntity(105U);
    msg.setDestination(62893U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.536587468796);
    msg.setSource(15274U);
    msg.setSourceEntity(171U);
    msg.setDestination(19016U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.0427237440663;
    msg.lon = 0.0564752104025;
    msg.z = 0.238601516422;
    msg.z_units = 25U;
    msg.radius = 0.138703398745;
    msg.duration = 54509U;
    msg.speed = 0.375427765038;
    msg.speed_units = 51U;
    msg.custom.assign("EBPKSONMSPMUFOFVCRPQQNWALTGYFVTMBCBWVEWSLXCHPRAFHACSWUUINLYHNWBWOCUEWNHBQJRCTHWFSVGYGGZVUEOMNYBKTVETKERIRIJCFWMDDUZBJUSGHBCMATYSLHJ");

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
    msg.setTimeStamp(0.122906411691);
    msg.setSource(55534U);
    msg.setSourceEntity(37U);
    msg.setDestination(29951U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.818472187293;
    msg.lon = 0.116781715205;
    msg.z = 0.336557843219;
    msg.z_units = 67U;
    msg.radius = 0.842178912354;
    msg.duration = 14021U;
    msg.speed = 0.660434343332;
    msg.speed_units = 237U;
    msg.custom.assign("IGTWTSKWGJKCOXPZEXKWGIIMSGWMMHJGLQOIWENWUBBSJEKYJJCHRPGCILVXDRYAQWIVPFCZOOMSXFRPKJDLFYDTQDLBPHUPUKQKZIFXFAUDDFAQAYFOZSBAHDAAEHQL");

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
    msg.setTimeStamp(0.278929768431);
    msg.setSource(14850U);
    msg.setSourceEntity(132U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.4149548431;
    msg.lon = 0.120369488392;
    msg.z = 0.848233225591;
    msg.z_units = 210U;
    msg.radius = 0.491308053993;
    msg.duration = 40017U;
    msg.speed = 0.344917435841;
    msg.speed_units = 209U;
    msg.custom.assign("MAOHPUZZJOULCCCQNBIDELGVHPWO");

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
    msg.setTimeStamp(0.522557534758);
    msg.setSource(30189U);
    msg.setSourceEntity(33U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(151U);
    msg.timeout = 33554U;
    msg.flags = 195U;
    msg.lat = 0.137836964311;
    msg.lon = 0.950805028737;
    msg.start_z = 0.766042621109;
    msg.start_z_units = 30U;
    msg.end_z = 0.843277684488;
    msg.end_z_units = 75U;
    msg.radius = 0.384675451277;
    msg.speed = 0.879334444929;
    msg.speed_units = 141U;
    msg.custom.assign("XCWHOSDOEZWXSGIKEHIIPBFQZOLDXNBZMQRNWGQFMAMCDFXTTHTQQBCVEMZXWFULNJQVDLHOAGAXGDSIYRGQBCYYCPVBKRPPMYMWLURRLOABCANJIHJNJWAWFRLIPKYRPYXFIHILNVGUNJMYQWIGEYDAXEPOASUQZOFKFJAKBZHSSSNUWVCDITLBOBORSSSNVECZVCJKEBMTZGJHDKTPJOWDLEZXXHKYEUAVYGLFFCTUDZVNUMH");

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
    msg.setTimeStamp(0.105232250196);
    msg.setSource(33594U);
    msg.setSourceEntity(190U);
    msg.setDestination(43647U);
    msg.setDestinationEntity(44U);
    msg.timeout = 11526U;
    msg.flags = 59U;
    msg.lat = 0.629338478358;
    msg.lon = 0.685683145789;
    msg.start_z = 0.567943180073;
    msg.start_z_units = 236U;
    msg.end_z = 0.914928103274;
    msg.end_z_units = 251U;
    msg.radius = 0.361941904989;
    msg.speed = 0.656564585323;
    msg.speed_units = 251U;
    msg.custom.assign("KHQRCGMJVDFJXFXYREHRWWHNYBHSEGLLCYONQOKQONDIIBBCM");

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
    msg.setTimeStamp(0.204820087051);
    msg.setSource(5065U);
    msg.setSourceEntity(117U);
    msg.setDestination(45158U);
    msg.setDestinationEntity(195U);
    msg.timeout = 43560U;
    msg.flags = 194U;
    msg.lat = 0.13986963569;
    msg.lon = 0.524251521838;
    msg.start_z = 0.161730599774;
    msg.start_z_units = 1U;
    msg.end_z = 0.110670467584;
    msg.end_z_units = 152U;
    msg.radius = 0.786419184025;
    msg.speed = 0.703912224877;
    msg.speed_units = 45U;
    msg.custom.assign("WUBXDRJPSYVUJHBWMRGEQOYBBETSRKLCHRDJSKRQWRVFISHMMUGBKWAVVBHIQMYOIVINIAWSNGRVQECHPZSTQXCPWFJEXZXNPLAAJEGZYBYFOJXTGCYPTUKNSCUUGEAPPJDYOHZOIZCEQIGHJFFQKNPNTKDMOAHCDUTGLQCRPDICHSZKFONDYBLNLWKQBUIJJKQZPOMLDNAYAULTBSVTFZMTFCWMXVDDUELXW");

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
    msg.setTimeStamp(0.564325162284);
    msg.setSource(2733U);
    msg.setSourceEntity(230U);
    msg.setDestination(11904U);
    msg.setDestinationEntity(75U);
    msg.timeout = 47893U;
    msg.lat = 0.605089734375;
    msg.lon = 0.951775416592;
    msg.z = 0.655268838918;
    msg.z_units = 86U;
    msg.speed = 0.600204792528;
    msg.speed_units = 168U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.709367487228;
    tmp_msg_0.y = 0.204831507063;
    tmp_msg_0.z = 0.620630510978;
    tmp_msg_0.t = 0.543889859069;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ROVYSQPFMXJCSTVUWINCDOJXNAYZTMIEHBKDAJEJCFPIEGVMMLTSHRBMDUILSOFHVCGUDEFRIEOYCARWPVKRGULQOCRHICGXRMEDGJTFBKXLNLTNHEAASGLMUWNLKUGVVLOPGQLWDXQNIMQPBFBSXHNRSKHCFCKYWWPLAEIXBTBHAZHWJDUSFMJWOAIBTQZPMUPQXNXSYJFGZUPTZVWQZRIVKHVPOJYJFYNQZUAK");

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
    msg.setTimeStamp(0.344347878782);
    msg.setSource(52400U);
    msg.setSourceEntity(175U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(69U);
    msg.timeout = 48847U;
    msg.lat = 0.506712477383;
    msg.lon = 0.326208115966;
    msg.z = 0.543055002433;
    msg.z_units = 33U;
    msg.speed = 0.811327641021;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.335388544309;
    tmp_msg_0.y = 0.0377003926546;
    tmp_msg_0.z = 0.53840869577;
    tmp_msg_0.t = 0.441915034134;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GVPCXHELZJEDKURJVFPIRLXOXDHPXKFOEKRQGLNAWXRKSBCJCXVJJTIFGDTNYVLIAZDGANYQUPIUHHSJWGNTSJEBLEBYEMMOUYFWXEABAFVPMVBRCLSPUCWBCOKQDZYHVRTHLOPZAQQUQEWMUNVMIWSJCCNWTRLQUFGGBINTGBOEAMTMIJCWKSNZHUZLEOTWQSHWDGMSXQAHDPLDXOOZMMROPQAHZTIUDIFYRNYKDFVINKYK");

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
    msg.setTimeStamp(0.742951790879);
    msg.setSource(34970U);
    msg.setSourceEntity(46U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(155U);
    msg.timeout = 50808U;
    msg.lat = 0.0497617270379;
    msg.lon = 0.0805322863742;
    msg.z = 0.458695212638;
    msg.z_units = 141U;
    msg.speed = 0.778803083086;
    msg.speed_units = 78U;
    msg.custom.assign("CDWVWAIFKUDKCHHYSRHBAKVQBGPMTAIKXSEXWCNUOOBMVNWEBOXZQWGINWTJPEYSMJ");

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
    msg.setTimeStamp(0.426304328285);
    msg.setSource(46486U);
    msg.setSourceEntity(23U);
    msg.setDestination(61174U);
    msg.setDestinationEntity(106U);
    msg.x = 0.717411667624;
    msg.y = 0.78795274245;
    msg.z = 0.374466732832;
    msg.t = 0.602483809093;

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
    msg.setTimeStamp(0.0186478352493);
    msg.setSource(53959U);
    msg.setSourceEntity(2U);
    msg.setDestination(43065U);
    msg.setDestinationEntity(60U);
    msg.x = 0.370546741678;
    msg.y = 0.747202318795;
    msg.z = 0.0606513145035;
    msg.t = 0.361229249191;

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
    msg.setTimeStamp(0.0397968971623);
    msg.setSource(63600U);
    msg.setSourceEntity(17U);
    msg.setDestination(21499U);
    msg.setDestinationEntity(222U);
    msg.x = 0.204605609177;
    msg.y = 0.733736398065;
    msg.z = 0.813301034181;
    msg.t = 0.271399821201;

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
    msg.setTimeStamp(0.48588532282);
    msg.setSource(8418U);
    msg.setSourceEntity(59U);
    msg.setDestination(37020U);
    msg.setDestinationEntity(126U);
    msg.timeout = 22224U;
    msg.name.assign("OHSCZISGQYJMYDVJMJFEFBMWKZTR");
    msg.custom.assign("JGHVCFHQGUCPRTGWGMHSNQLDUMUBXGKLJHBEPBIKIYZPNRYZOATXAJWNLODVHPYQRYPLXYAJHQUMSVPFZJCMXSWPWPKIRSKGKAEUVIFDRONYMDNGQOBIBEMWBDULPCFAZZHELJHRZUOICWPMVNOQORNHKTDSDVGEAYHZFVANTBJIELTFTCIGFOEZXDAAWJFSQZCSXXMQWWMKDTNEKJVKLWQYB");

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
    msg.setTimeStamp(0.158054959173);
    msg.setSource(42351U);
    msg.setSourceEntity(222U);
    msg.setDestination(33753U);
    msg.setDestinationEntity(248U);
    msg.timeout = 61492U;
    msg.name.assign("DXTTTKALGBLIFFSWIYKGYXBTWYKEUOHGUZXLNZDFPHSVIVFVEWWUDUXYGWSFJTRCKJSLQSDQUEOUNDNGJNXDKWLEFHREBPNLWERTYDAGVHMXCSQPZHBMLJFMKMAEZUBHXUPO");
    msg.custom.assign("LGEHAVRNLRHQOFTBAFMTMAVLFCDVSVYQCBCGJHWDKNQPOHINNLUWAZTQOUENSJZMIUEZYEWXNEQPAUSH");

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
    msg.setTimeStamp(0.647461389735);
    msg.setSource(18956U);
    msg.setSourceEntity(153U);
    msg.setDestination(52976U);
    msg.setDestinationEntity(209U);
    msg.timeout = 62046U;
    msg.name.assign("ZOWGKGRIBZCSPPPWBCLURVVO");
    msg.custom.assign("NZCOMARVSTLEIDRMDFILXZDTHZHOXU");

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
    msg.setTimeStamp(0.55061765905);
    msg.setSource(51856U);
    msg.setSourceEntity(193U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.380176528516;
    msg.lon = 0.753229748155;
    msg.z = 0.384221006862;
    msg.z_units = 223U;
    msg.speed = 0.163177192778;
    msg.speed_units = 153U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54519U;
    tmp_msg_0.off_x = 0.945205982963;
    tmp_msg_0.off_y = 0.958526690669;
    tmp_msg_0.off_z = 0.626693133888;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.305757093692;
    msg.custom.assign("KBFRMHNJCONBHMKWPNOQODQQGWCOJADPCZEPYCEWLEYPISKOFRRDXYQWMTSKKROXUZBUHZKXKMSLIXGGRMAYJNIUQGIXDJOVUWLLHMRTPVHTUM");

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
    msg.setTimeStamp(0.820653501075);
    msg.setSource(7918U);
    msg.setSourceEntity(175U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.378163107156;
    msg.lon = 0.842902575754;
    msg.z = 0.831589980248;
    msg.z_units = 192U;
    msg.speed = 0.818852272177;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.461393917057;
    tmp_msg_0.y = 0.608197037748;
    tmp_msg_0.z = 0.27918521011;
    tmp_msg_0.t = 0.25754018302;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 46124U;
    tmp_msg_1.off_x = 0.330751923;
    tmp_msg_1.off_y = 0.185655206216;
    tmp_msg_1.off_z = 0.176544045096;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0861590991596;
    msg.custom.assign("AXDRXPWYKEIJELNBXBOCQYCYFJSREQVLRGMAKOXUUDTUHQHBHKJGHSAJXABLUCWQICNSSRBNWPOOHWWKDZUMQPLJSJHG");

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
    msg.setTimeStamp(0.0448574206107);
    msg.setSource(31513U);
    msg.setSourceEntity(1U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.908118034316;
    msg.lon = 0.890217353223;
    msg.z = 0.899018801022;
    msg.z_units = 214U;
    msg.speed = 0.5656600685;
    msg.speed_units = 92U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.225707040922;
    tmp_msg_0.y = 0.901569505429;
    tmp_msg_0.z = 0.183409814443;
    tmp_msg_0.t = 0.508872989086;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.714791472068;
    msg.custom.assign("WJNJPNAZEJUXDBDDMLPYOLZMMYGNEADDUVAESZSQOJBSZLRLPFRMVDFIFBMCZCHORXFBNCGOBYVCKTRGBRFXTLIZKGWFJAQIOZSESFRYCOIXYVHUXECHVWQDRJGUTOMBA");

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
    msg.setTimeStamp(0.817311869261);
    msg.setSource(2780U);
    msg.setSourceEntity(128U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(23U);
    msg.vid = 43460U;
    msg.off_x = 0.753207733435;
    msg.off_y = 0.944439037004;
    msg.off_z = 0.172751855834;

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
    msg.setTimeStamp(0.705813098289);
    msg.setSource(9648U);
    msg.setSourceEntity(53U);
    msg.setDestination(40611U);
    msg.setDestinationEntity(156U);
    msg.vid = 15999U;
    msg.off_x = 0.654984316163;
    msg.off_y = 0.557432832278;
    msg.off_z = 0.253555914918;

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
    msg.setTimeStamp(0.990110624023);
    msg.setSource(51764U);
    msg.setSourceEntity(19U);
    msg.setDestination(3134U);
    msg.setDestinationEntity(227U);
    msg.vid = 38916U;
    msg.off_x = 0.0103152078085;
    msg.off_y = 0.445677237798;
    msg.off_z = 0.651618716229;

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
    msg.setTimeStamp(0.411382365454);
    msg.setSource(19239U);
    msg.setSourceEntity(125U);
    msg.setDestination(44320U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.415298005719);
    msg.setSource(12517U);
    msg.setSourceEntity(171U);
    msg.setDestination(42505U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.858701366151);
    msg.setSource(12770U);
    msg.setSourceEntity(50U);
    msg.setDestination(1689U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.470101619122);
    msg.setSource(52852U);
    msg.setSourceEntity(234U);
    msg.setDestination(13557U);
    msg.setDestinationEntity(120U);
    msg.mid = 16970U;

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
    msg.setTimeStamp(0.0202580222144);
    msg.setSource(14421U);
    msg.setSourceEntity(68U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(105U);
    msg.mid = 17560U;

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
    msg.setTimeStamp(0.67984765761);
    msg.setSource(1697U);
    msg.setSourceEntity(5U);
    msg.setDestination(52584U);
    msg.setDestinationEntity(28U);
    msg.mid = 7530U;

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
    msg.setTimeStamp(0.022942452231);
    msg.setSource(17007U);
    msg.setSourceEntity(107U);
    msg.setDestination(57750U);
    msg.setDestinationEntity(67U);
    msg.state = 159U;
    msg.eta = 13161U;
    msg.info.assign("QBGYOGXZMCRPCO");

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
    msg.setTimeStamp(0.334817451941);
    msg.setSource(62027U);
    msg.setSourceEntity(77U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(153U);
    msg.state = 95U;
    msg.eta = 6849U;
    msg.info.assign("YAOJNTPCRTEBGTVHAFDRYNYDQAVQGNAWKHEIWSXMBXKASBPPERWSOHVVS");

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
    msg.setTimeStamp(0.166430768185);
    msg.setSource(23720U);
    msg.setSourceEntity(248U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(221U);
    msg.state = 75U;
    msg.eta = 54627U;
    msg.info.assign("IOOLYDNGVHXRAZFVPCAIRAGFKXXULICTKZKSXTKZJEKHGVJFPNCWHZDEINARFVUSEHMLBXDJZPTNSEUREDUKIVAVYDMXPEHTLIYLZYFQAJOTCLAWSYUHJGYYWXAKIPSFUMWMPDTAWYOOYAMGBCBUOOBQZHXHDIEVNZPQRUTCMFGRFPVN");

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
    msg.setTimeStamp(0.841797967632);
    msg.setSource(32278U);
    msg.setSourceEntity(249U);
    msg.setDestination(20166U);
    msg.setDestinationEntity(144U);
    msg.system = 7591U;
    msg.duration = 60391U;
    msg.speed = 0.680741146947;
    msg.speed_units = 175U;
    msg.x = 0.756238841479;
    msg.y = 0.0129919745924;
    msg.z = 0.0810514928075;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.435812981317);
    msg.setSource(63200U);
    msg.setSourceEntity(226U);
    msg.setDestination(14483U);
    msg.setDestinationEntity(224U);
    msg.system = 21212U;
    msg.duration = 61354U;
    msg.speed = 0.610291182562;
    msg.speed_units = 167U;
    msg.x = 0.34962699335;
    msg.y = 0.807693132398;
    msg.z = 0.347311359309;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.651344420987);
    msg.setSource(8381U);
    msg.setSourceEntity(55U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(85U);
    msg.system = 379U;
    msg.duration = 51260U;
    msg.speed = 0.637116093338;
    msg.speed_units = 126U;
    msg.x = 0.623113541525;
    msg.y = 0.280070525261;
    msg.z = 0.74839874034;
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
    msg.setTimeStamp(0.432867535943);
    msg.setSource(47283U);
    msg.setSourceEntity(185U);
    msg.setDestination(39270U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.355068192308;
    msg.lon = 0.0455888800685;
    msg.speed = 0.577424245313;
    msg.speed_units = 86U;
    msg.duration = 32436U;
    msg.sys_a = 48982U;
    msg.sys_b = 50357U;
    msg.move_threshold = 0.835513965452;

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
    msg.setTimeStamp(0.247749109019);
    msg.setSource(26189U);
    msg.setSourceEntity(220U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.696742895771;
    msg.lon = 0.411391505751;
    msg.speed = 0.988021758714;
    msg.speed_units = 49U;
    msg.duration = 25245U;
    msg.sys_a = 12218U;
    msg.sys_b = 7151U;
    msg.move_threshold = 0.566206294003;

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
    msg.setTimeStamp(0.971888088561);
    msg.setSource(32267U);
    msg.setSourceEntity(13U);
    msg.setDestination(30381U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.0768712727828;
    msg.lon = 0.699010964863;
    msg.speed = 0.328882832145;
    msg.speed_units = 87U;
    msg.duration = 14953U;
    msg.sys_a = 3040U;
    msg.sys_b = 63506U;
    msg.move_threshold = 0.528898078019;

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
    msg.setTimeStamp(0.395337663613);
    msg.setSource(60757U);
    msg.setSourceEntity(97U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.747515550014;
    msg.lon = 0.565114346798;
    msg.z = 0.34928387605;
    msg.z_units = 174U;
    msg.speed = 0.704762852858;
    msg.speed_units = 27U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.206613453608;
    tmp_msg_0.lon = 0.355432422837;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IYQSTICHMAUBAJSAZVNEWFZMXXKEVQSDJDPOXAKVCDNPLZGYUQVAFCSMYYLGQHCYKOEFLYHUNZBLTANKCGOMXGQGUIXLKSHXTSPBXEWKPRTEJKPKRUBWVTNYJAUMSKSZPMBAJYWINVRRJTIFZXWLQGAQCOZIHOMBIZHRFMERFWCNVVYNUMPHOBUFFVNSVHHPDGTLDJFCOJDOIJSXRWJRLRBRWQDGEQTPOFEUUNW");

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
    msg.setTimeStamp(0.29411610142);
    msg.setSource(35338U);
    msg.setSourceEntity(40U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.937632342089;
    msg.lon = 0.135355079348;
    msg.z = 0.736336811805;
    msg.z_units = 214U;
    msg.speed = 0.243929187681;
    msg.speed_units = 123U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.41063669076;
    tmp_msg_0.lon = 0.343910889824;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GRGYANNALFWKWRJOOOCWSRXEWQEDIYZFMUESLPSKYWIJOJTDHYDUQFVYGKZBEDGLHPFTEZIRWBCGEYMDLRVZPLNPVMBAJTCZTQSCSHAXQHWCFIVFHMWNMEPFJGKPNKDUZVUBMCZSSRXAUQYIDYOQWMLCZOBFKMXBEHSFOCWGXFIIAALTTTRTOKTOPKJEXNNOGRTJBIAAGNABVVDRVXMYLNLXQUUQPXVHLYEHNVUBDKCHGZZIKDSPCPQXSQ");

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
    msg.setTimeStamp(0.50732311739);
    msg.setSource(58511U);
    msg.setSourceEntity(120U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.538432815277;
    msg.lon = 0.789168190481;
    msg.z = 0.778968152767;
    msg.z_units = 221U;
    msg.speed = 0.00323862624437;
    msg.speed_units = 80U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.301863367805;
    tmp_msg_0.lon = 0.603936015285;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SUTGDDITLNCPWDRWRTRTQICHTTUSEBOIEXCVZPUMISCWPJUJAVOEJJXYBKSCAFPMFPKLKUUAVIQYGPWMJYLNTHWXMXJZSLYGQNDAHHPZLYBNTVGOFIBSDFOKKVZVHLQWVWVLYGRIEJYZGWKAZQWSRIJB");

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
    msg.setTimeStamp(0.653499680706);
    msg.setSource(7789U);
    msg.setSourceEntity(123U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.932362470725;
    msg.lon = 0.470307015437;

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
    msg.setTimeStamp(0.421391496755);
    msg.setSource(7899U);
    msg.setSourceEntity(229U);
    msg.setDestination(59094U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.362071403645;
    msg.lon = 0.287157830877;

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
    msg.setTimeStamp(0.127879414758);
    msg.setSource(53684U);
    msg.setSourceEntity(1U);
    msg.setDestination(32474U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.831675240939;
    msg.lon = 0.617153401868;

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
    msg.setTimeStamp(0.19107679722);
    msg.setSource(27937U);
    msg.setSourceEntity(189U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(87U);
    msg.timeout = 22425U;
    msg.lat = 0.452009016628;
    msg.lon = 0.17385532494;
    msg.z = 0.396174398441;
    msg.z_units = 106U;
    msg.pitch = 0.497823814175;
    msg.amplitude = 0.977106506495;
    msg.duration = 30429U;
    msg.speed = 0.277909216745;
    msg.speed_units = 23U;
    msg.radius = 0.770072931037;
    msg.direction = 153U;
    msg.custom.assign("ILWYNQDXVQYJUDRMGQFEWGCVPTOPMYOCLWVNPUITZLANISAZKUTAVTWMKDHSYIVPIRJJFCPDVYSYCHORBIODEWHMZEZPHEWVMNQZTBBBLRRJQIXCXKOUXAPFOUBWZZGPMROKSGBCMGSYWSCLFCSLJERDGXMOKXKGJQXDKKNSIFNEAFNEZFXJQALCKZSJUPR");

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
    msg.setTimeStamp(0.619136269951);
    msg.setSource(56707U);
    msg.setSourceEntity(238U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(234U);
    msg.timeout = 40931U;
    msg.lat = 0.450722287582;
    msg.lon = 0.597523658991;
    msg.z = 0.976520637102;
    msg.z_units = 93U;
    msg.pitch = 0.0912810147762;
    msg.amplitude = 0.23845915666;
    msg.duration = 13609U;
    msg.speed = 0.428475617743;
    msg.speed_units = 48U;
    msg.radius = 0.344255049209;
    msg.direction = 196U;
    msg.custom.assign("QJRQWSBHMWKBTKABRTJLXPGIBRIRUYVEWZUEDGWLTFNOQCTZXWIOGKGTKOJLRQJAZNODTQZFHKIPLMINOPUZCYNXBZWAJAVMXKTJZFAQJJOMPEGYMFCXWVOHLHSXWYPURNKLGTBHUSXSHLMSNVNLIQVJZYDQBSAGVDPAMFRNNUHSDWZEYFSDIAVXETGEUGAPVYKBOOXIYDTFUNCHVVERXGEJPEFPDKCCMCCZMYMBAFHLUEIS");

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
    msg.setTimeStamp(0.222741330283);
    msg.setSource(36816U);
    msg.setSourceEntity(164U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(22U);
    msg.timeout = 45790U;
    msg.lat = 0.713787760382;
    msg.lon = 0.385196504386;
    msg.z = 0.456898473664;
    msg.z_units = 238U;
    msg.pitch = 0.0541462070875;
    msg.amplitude = 0.322374296803;
    msg.duration = 11378U;
    msg.speed = 0.468848399256;
    msg.speed_units = 62U;
    msg.radius = 0.685578410412;
    msg.direction = 253U;
    msg.custom.assign("NADVKYDNJCXTEXGVKCYAUDMPUIIHZUEONOEGKYBSROBRLJMMKFSTNQPDTWWQIGHCWPVJHXJNSLYNORWQULXRQAHLKXQNXJBTEKKAFPRNIXV");

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
    msg.setTimeStamp(0.076513637812);
    msg.setSource(24744U);
    msg.setSourceEntity(42U);
    msg.setDestination(16183U);
    msg.setDestinationEntity(167U);
    msg.formation_name.assign("GSBFWYJMPOOBSGMPSKJFQBHWTOSWLALDDSCEYOLGIPMEICKGSHKXYBVWQBWCEVTGDBMWLVNRYDCVXKTWKFJZCNDPHRHJAAYUNNUFTM");
    msg.reference_frame = 135U;
    msg.custom.assign("GHJIQCSZFXJEMIGZBOVQSZGDGKVFVSNHCQKHPTMFITFXENLJNELDLXOUYELKTJLB");

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
    msg.setTimeStamp(0.379315409734);
    msg.setSource(51958U);
    msg.setSourceEntity(102U);
    msg.setDestination(2950U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("YHJIPNTRMYZPYXYYKJQUOQLCXCBGCGPDYZXTJHGQQWXJGLGYHFPRJCTOSHENRVULDFNDJQWLLTZVMWJFBLUPEAUVDZMPXPCDZIHNWAJEBLYPGHJKEIATYCGHFODDUOKBVBFVCYXRXSCOKMKSKQAIWLIGISHBHBIFRSZCUVOGKGBBVMEZDSRLPUNTQRMEBQSXKDAXNRAVD");
    msg.reference_frame = 44U;
    msg.custom.assign("CYOUMDREBQSIZWWJDPTWVLEAKFYHRUYNXXPNNHWWCZDSPVJCOJTSQMVCSAHXTSFNNEILHSFWYZBNUWFOKVGIREJIZUGMEUMGAVORKGTXNUGAAQLIYEGWZCPZZVPFQPAECUCZFRKZLSGRQBISXPLDETBFCJDDUGPGFOOTHCHIMYRJRDMLMVJ");

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
    msg.setTimeStamp(0.965547093688);
    msg.setSource(3683U);
    msg.setSourceEntity(181U);
    msg.setDestination(5797U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("JGRAOKMPIPYPVZZASCYHVWGHYEQGJFLQXWVBVSFUEJDZKSVYTCVHFHEWIAMLXVWCTTJBKLGAUQHTYPKPNARIRZGDWJYYOCCWSNEQXZFIRDLBMTCYLJUYAINLGWDGFBQRSDUKXFOEKOKBRINROHASOZURSBTLQZXMEPXHQHPRBPUMSUWVSF");
    msg.reference_frame = 106U;
    msg.custom.assign("CNEVRAFYVGVVENFHIOLOSUESGRLFXXLKKWNGWWBABRQSFYOSYJAMIJCZGYEOQFYNY");

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
    msg.setTimeStamp(0.292500815628);
    msg.setSource(9746U);
    msg.setSourceEntity(185U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("XFDPZKHCIYBPCXNRJFUZHBFVDZHYWCGPBONKJQTNUKGXIXNSBMVLFLHOJQYQCPPWV");
    msg.formation_name.assign("LSSQHLPXACETABJKPPFWOMPYGSUORIRHLIMDRGYMFPWUSCVUHRPRYB");
    msg.plan_id.assign("WBUDIWQHEMBQSAWPVMEJTSZLTKFWYQWVGXACYKPUZLZMGPHOBKXFOAYHSNSXZ");
    msg.description.assign("RSQVLXGLDKDHTJBIGQIYSAMYIGAXMYHVYWLFYMVDGJVOBNWDZSOJZZRFATYGMVDHHFCICIHTWFMFVJLRKRECNLRWIOAFJANNWZKWPAKGEUUYTSPPAOUUXXDXKXSLCHMZQLNCTVGSPOQMUHHHGFEEXAFQDTJBCVFITRUNBLKWXPRLRGQECWBOUZSJDOTPNOQMEVVHBUAADONXQSNKPYZCJPFEIQTWLUTWBZPCYBSEIKCOXNDRJKZRQZIYKJEME");
    msg.leader_speed = 0.875657277613;
    msg.leader_bank_lim = 0.624132969839;
    msg.pos_sim_err_lim = 0.983661964106;
    msg.pos_sim_err_wrn = 0.384707689408;
    msg.pos_sim_err_timeout = 17455U;
    msg.converg_max = 0.706254480194;
    msg.converg_timeout = 53988U;
    msg.comms_timeout = 42552U;
    msg.turb_lim = 0.206983803531;
    msg.custom.assign("LCSVLHCQLISKHRUYTMKJHRASGDDFYENAOWFWEWYPNZYGPRUKXMCTMTCZUWZBQWDUAONSBTOXSKPMQFLTBTQUVANPPEESYUJBAGQCOZITHLILXJVNNFWUSKBTHMVGAWHSDAJRUYIOCEJVIOGGMAOHXBCZMJRXDNTDAURPVFLOOVXZKJXEJZWCMYQBBG");

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
    msg.setTimeStamp(0.392439238587);
    msg.setSource(38986U);
    msg.setSourceEntity(47U);
    msg.setDestination(43775U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("MJMZJTILNPONUETCBHCSOUPIVBZVDAPWYLEVNVPBJXMLLCZRZMWBRANUARPBRRCYDXJWUIFSWGEWQUOOJ");
    msg.formation_name.assign("PUIVIMYTHFJLHNTFGZIOKTTSHVCEKN");
    msg.plan_id.assign("PTVTFJYAVXNOEYJYUUHBJPIWVNZDIIDQXYSSDPCKTDRHJEXETAMVNHPP");
    msg.description.assign("ZNRUTAMRTKLHQGPVOXCPVQMRGFNJZYQYSWMYHFJYDDJQIKFIEPTQNYLAUGUPBWDZMAKFIVGFPEWLRGJAQPSACLXCRRXPBOZLNWEMOLUVSBXNQTBMUPIKYT");
    msg.leader_speed = 0.753322706288;
    msg.leader_bank_lim = 0.983268235885;
    msg.pos_sim_err_lim = 0.286849831972;
    msg.pos_sim_err_wrn = 0.505241804454;
    msg.pos_sim_err_timeout = 6745U;
    msg.converg_max = 0.429838277306;
    msg.converg_timeout = 32791U;
    msg.comms_timeout = 53382U;
    msg.turb_lim = 0.993117815276;
    msg.custom.assign("IQWVAFUEIIBGNEDONIGKBXYXELSLAH");

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
    msg.setTimeStamp(0.945766535626);
    msg.setSource(9698U);
    msg.setSourceEntity(87U);
    msg.setDestination(48353U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("UDYZVBAEIHDLFXPKBRZTXVWGDJQFWUOOTTDTLACPDIVEZJLKVBOPHTOSWVVOLAQPGCYCQJGNNPCIAOPMEULZLMUWGUAUCPHLKKHXNUYNFQRPETCFJKJGRHKEMEYOAGXEKRIQTWKDOTMTHXIZXSRBNRVIINJKAUOGXUPNSISBCZMEBH");
    msg.formation_name.assign("VSWRWHFZRTCESOEOOKMLWTKXQDOTSDMABZJKSUPEXMSXKYSZJYSBYKRIAERCNOHPVDNWPYBMTJGGKXULLMHSQGIEFYUZCZUDWDWMHPGVIHBQXEJJIXVFNVMAHKYNCPOLIJHOBRGNGEHEJEPRBBDLSAIXINSJZRRVFNYDTVQFQTG");
    msg.plan_id.assign("GTBHPXOFPZNAANMACHFGLDOWEBGGWJPDKDUNHQOIMPPALNEOBXIGJOFQGDOVNYWQHQUSXBJHVZTSVUBLGAYAQYLESWWSFVYLQOINXAUSZKWZSXZXOIRRTCVLNKMKVHJIJUVNT");
    msg.description.assign("GXWERCAEWVKHMTDPIIMNFDPNSKAZPCLREISHHZHYBWSSUWZTENXWKZUGRBCTARMIZDZUBTPFSFUKRCYITCTJPUOZMRFKXXAVDKITCZEHCPOFQGTJLVBOXQJVEQYQAWJNGBNFQOLBDMKJQHYHWAMGMYJLY");
    msg.leader_speed = 0.526395303307;
    msg.leader_bank_lim = 0.596787628633;
    msg.pos_sim_err_lim = 0.940406534966;
    msg.pos_sim_err_wrn = 0.984072919283;
    msg.pos_sim_err_timeout = 22170U;
    msg.converg_max = 0.0748017367636;
    msg.converg_timeout = 35311U;
    msg.comms_timeout = 54116U;
    msg.turb_lim = 0.668142881809;
    msg.custom.assign("YWYCFKRQPJTCEZTRFDAEYOSEAOVTNQPLGWUBLGRUQFGCRMHVBJGVSYQGNMVJXDJHXJCNMGZDAEJIQSYOXKHSBHWSPSBDDKXUWFANQXFXTXTVKDEYTMSOPXRQPM");

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
    msg.setTimeStamp(0.159329179803);
    msg.setSource(57658U);
    msg.setSourceEntity(219U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(55U);
    msg.control_src = 4824U;
    msg.control_ent = 193U;
    msg.timeout = 0.646805787641;
    msg.loiter_radius = 0.667609762805;
    msg.altitude_interval = 0.327711203621;

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
    msg.setTimeStamp(0.364122342382);
    msg.setSource(44093U);
    msg.setSourceEntity(179U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(172U);
    msg.control_src = 32335U;
    msg.control_ent = 60U;
    msg.timeout = 0.718318822505;
    msg.loiter_radius = 0.931260353274;
    msg.altitude_interval = 0.134768639242;

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
    msg.setTimeStamp(0.342974311666);
    msg.setSource(23841U);
    msg.setSourceEntity(110U);
    msg.setDestination(19412U);
    msg.setDestinationEntity(65U);
    msg.control_src = 15271U;
    msg.control_ent = 171U;
    msg.timeout = 0.380395069366;
    msg.loiter_radius = 0.767192820037;
    msg.altitude_interval = 0.11488521811;

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
    msg.setTimeStamp(0.536268372657);
    msg.setSource(5056U);
    msg.setSourceEntity(49U);
    msg.setDestination(3852U);
    msg.setDestinationEntity(142U);
    msg.flags = 240U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.100364561552;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.85196822102;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.254243768717;
    msg.lon = 0.70852776459;
    msg.radius = 0.654656769841;

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
    msg.setTimeStamp(0.561367451816);
    msg.setSource(1092U);
    msg.setSourceEntity(73U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(14U);
    msg.flags = 107U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.275180070631;
    tmp_msg_0.speed_units = 56U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.183512615158;
    tmp_msg_1.z_units = 114U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.91850120753;
    msg.lon = 0.933055284277;
    msg.radius = 0.58823669926;

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
    msg.setTimeStamp(0.811257959949);
    msg.setSource(63658U);
    msg.setSourceEntity(90U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(143U);
    msg.flags = 125U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.526913849672;
    tmp_msg_0.speed_units = 115U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.746587594898;
    tmp_msg_1.z_units = 240U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0793880396706;
    msg.lon = 0.711274177508;
    msg.radius = 0.144807114905;

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
    msg.setTimeStamp(0.613112030864);
    msg.setSource(6749U);
    msg.setSourceEntity(170U);
    msg.setDestination(23885U);
    msg.setDestinationEntity(239U);
    msg.control_src = 39983U;
    msg.control_ent = 118U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 221U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.165374969525;
    tmp_tmp_msg_0_0.speed_units = 111U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.487417800366;
    tmp_tmp_msg_0_1.z_units = 101U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.592693858886;
    tmp_msg_0.lon = 0.402341564131;
    tmp_msg_0.radius = 0.539892525493;
    msg.reference.set(tmp_msg_0);
    msg.state = 32U;
    msg.proximity = 245U;

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
    msg.setTimeStamp(0.294203185529);
    msg.setSource(38439U);
    msg.setSourceEntity(105U);
    msg.setDestination(9018U);
    msg.setDestinationEntity(124U);
    msg.control_src = 24111U;
    msg.control_ent = 233U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 145U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.945921806223;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.974055869063;
    tmp_tmp_msg_0_1.z_units = 34U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.319738790061;
    tmp_msg_0.lon = 0.366377373326;
    tmp_msg_0.radius = 0.448092213763;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
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
    msg.setTimeStamp(0.829492784962);
    msg.setSource(31776U);
    msg.setSourceEntity(112U);
    msg.setDestination(35173U);
    msg.setDestinationEntity(200U);
    msg.control_src = 52271U;
    msg.control_ent = 227U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 53U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.242051785786;
    tmp_tmp_msg_0_0.speed_units = 139U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.178563787611;
    tmp_tmp_msg_0_1.z_units = 92U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.968699561822;
    tmp_msg_0.lon = 0.152655397885;
    tmp_msg_0.radius = 0.167593532464;
    msg.reference.set(tmp_msg_0);
    msg.state = 159U;
    msg.proximity = 38U;

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
    msg.setTimeStamp(0.481075812239);
    msg.setSource(525U);
    msg.setSourceEntity(254U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(253U);
    msg.ax_cmd = 0.289902103563;
    msg.ay_cmd = 0.11648455099;
    msg.az_cmd = 0.772300572794;
    msg.ax_des = 0.543211142317;
    msg.ay_des = 0.159485269076;
    msg.az_des = 0.837560001494;
    msg.virt_err_x = 0.169500572682;
    msg.virt_err_y = 0.488653045313;
    msg.virt_err_z = 0.233484171794;
    msg.surf_fdbk_x = 0.32049525057;
    msg.surf_fdbk_y = 0.644226534214;
    msg.surf_fdbk_z = 0.801530996539;
    msg.surf_unkn_x = 0.99197470227;
    msg.surf_unkn_y = 0.374600295422;
    msg.surf_unkn_z = 0.161036839501;
    msg.ss_x = 0.0245374728863;
    msg.ss_y = 0.514744996481;
    msg.ss_z = 0.973424678997;

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
    msg.setTimeStamp(0.248103233428);
    msg.setSource(2195U);
    msg.setSourceEntity(53U);
    msg.setDestination(18359U);
    msg.setDestinationEntity(227U);
    msg.ax_cmd = 0.692277014822;
    msg.ay_cmd = 0.73916670865;
    msg.az_cmd = 0.0579249700481;
    msg.ax_des = 0.43258090273;
    msg.ay_des = 0.603997421539;
    msg.az_des = 0.523174210791;
    msg.virt_err_x = 0.527010611529;
    msg.virt_err_y = 0.677918563497;
    msg.virt_err_z = 0.72036288198;
    msg.surf_fdbk_x = 0.790942312992;
    msg.surf_fdbk_y = 0.475175247132;
    msg.surf_fdbk_z = 0.378411704256;
    msg.surf_unkn_x = 0.594955667875;
    msg.surf_unkn_y = 0.256940839391;
    msg.surf_unkn_z = 0.102734988338;
    msg.ss_x = 0.0201883340173;
    msg.ss_y = 0.00811459467465;
    msg.ss_z = 0.240239023589;

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
    msg.setTimeStamp(0.381235667023);
    msg.setSource(36570U);
    msg.setSourceEntity(208U);
    msg.setDestination(564U);
    msg.setDestinationEntity(65U);
    msg.ax_cmd = 0.374884787313;
    msg.ay_cmd = 0.355781036303;
    msg.az_cmd = 0.829879657485;
    msg.ax_des = 0.47571943162;
    msg.ay_des = 0.0640930117087;
    msg.az_des = 0.842579756455;
    msg.virt_err_x = 0.261248630246;
    msg.virt_err_y = 0.138566019105;
    msg.virt_err_z = 0.161148693752;
    msg.surf_fdbk_x = 0.638732700236;
    msg.surf_fdbk_y = 0.900799316445;
    msg.surf_fdbk_z = 0.649847337085;
    msg.surf_unkn_x = 0.290826719022;
    msg.surf_unkn_y = 0.445143187772;
    msg.surf_unkn_z = 0.568451835617;
    msg.ss_x = 0.134436315873;
    msg.ss_y = 0.523088566247;
    msg.ss_z = 0.749835194727;

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
    msg.setTimeStamp(0.233720553696);
    msg.setSource(26276U);
    msg.setSourceEntity(50U);
    msg.setDestination(6985U);
    msg.setDestinationEntity(146U);
    msg.s_id.assign("ZUJFJRBFMKFNIWITEIMAZNYJLZZSRXKOTHQLQNCGXKNRMSSGJUCYJQNOJOKHZXMCVDPCUDGKQQPYBABCITYWBORUWBVNXCAEHLMQETDIYVPKRHJNADISRQGMTYHEROKHZANTVFOLAULDCFXAVLHSNUSGHAZEYTVVJUWVXFGLCSUXBYDMFAFPYWCIMIQGGBZLEWOVRYGSOFRDTUBMPDLXROHTGXVOHWWWPSM");
    msg.dist = 0.366088212448;
    msg.err = 0.446940495158;
    msg.ctrl_imp = 0.447885505357;
    msg.rel_dir_x = 0.163669332342;
    msg.rel_dir_y = 0.692622954966;
    msg.rel_dir_z = 0.0574689036625;
    msg.err_x = 0.629870493103;
    msg.err_y = 0.306823578034;
    msg.err_z = 0.819867611742;
    msg.rf_err_x = 0.313689586239;
    msg.rf_err_y = 0.94027684477;
    msg.rf_err_z = 0.585232591669;
    msg.rf_err_vx = 0.222085634158;
    msg.rf_err_vy = 0.0179772406226;
    msg.rf_err_vz = 0.0389658169167;
    msg.ss_x = 0.0571820036099;
    msg.ss_y = 0.11896635912;
    msg.ss_z = 0.335630614053;
    msg.virt_err_x = 0.0155295628242;
    msg.virt_err_y = 0.432632658778;
    msg.virt_err_z = 0.623126030641;

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
    msg.setTimeStamp(0.367470682148);
    msg.setSource(34924U);
    msg.setSourceEntity(236U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(144U);
    msg.s_id.assign("QTIMLVERTWUAPGBRSMFWGWPPZAQJFJXULKFAPIZDSAWIORXAMLFOHBBMSLPSPKDYYXTXEFHDMXKNJOSQBHYWVWTVKUOBSIDCEPCMPNUVOYNNGJMLVRLUKCDNDEFWONRIYZSJYFHJHTCAFZJHCRHIEKIDZGGIUBJQCTMPB");
    msg.dist = 0.835187252411;
    msg.err = 0.762765322144;
    msg.ctrl_imp = 0.409394178124;
    msg.rel_dir_x = 0.182869546997;
    msg.rel_dir_y = 0.720667495821;
    msg.rel_dir_z = 0.748791764532;
    msg.err_x = 0.15590743605;
    msg.err_y = 0.466030428883;
    msg.err_z = 0.362710769216;
    msg.rf_err_x = 0.277963169197;
    msg.rf_err_y = 0.97957710376;
    msg.rf_err_z = 0.20858739923;
    msg.rf_err_vx = 0.406769411562;
    msg.rf_err_vy = 0.444181589971;
    msg.rf_err_vz = 0.685646946589;
    msg.ss_x = 0.872144657008;
    msg.ss_y = 0.2251065987;
    msg.ss_z = 0.996959190228;
    msg.virt_err_x = 0.454108852938;
    msg.virt_err_y = 0.927228050978;
    msg.virt_err_z = 0.997012225494;

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
    msg.setTimeStamp(0.170670919434);
    msg.setSource(20796U);
    msg.setSourceEntity(220U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("LQGRLIFHOHLYXOIPYVYEJPVAYKMTUFGVTZADUCLZMWOERRGVMECYX");
    msg.dist = 0.999394115984;
    msg.err = 0.642554331698;
    msg.ctrl_imp = 0.824329883201;
    msg.rel_dir_x = 0.191301165065;
    msg.rel_dir_y = 0.712562966392;
    msg.rel_dir_z = 0.386824881106;
    msg.err_x = 0.41117207177;
    msg.err_y = 0.806149248917;
    msg.err_z = 0.467706325123;
    msg.rf_err_x = 0.502218696385;
    msg.rf_err_y = 0.25212475557;
    msg.rf_err_z = 0.274313979439;
    msg.rf_err_vx = 0.586295363123;
    msg.rf_err_vy = 0.144914485572;
    msg.rf_err_vz = 0.125466351141;
    msg.ss_x = 0.211435999536;
    msg.ss_y = 0.401802771681;
    msg.ss_z = 0.701387011859;
    msg.virt_err_x = 0.0717144514243;
    msg.virt_err_y = 0.892992284151;
    msg.virt_err_z = 0.30664556933;

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
    msg.setTimeStamp(0.62424877402);
    msg.setSource(32729U);
    msg.setSourceEntity(64U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 19U;
    msg.error_count = 40U;
    msg.error_ents.assign("AGHNSJIZJKIWWHDRJVKLLEIVIXMCQFCGKQZNQBVJORHQDLTEMQZGXHCEJBLAKKXCGUUXMCQBFUFEZXPBKEYPEZOUVOVVATDYIROMTOWVRBOXVUUGFPJHCCSGQRPSEPNDSJDDOUFMGFQDMWLMNFCIRPCSAXATNBPKLHMFYIHTYZZWTATXPSIOVDKZHRFBXJIUURLKWGPGWLDIDWNMNO");
    msg.maneuver_type = 5595U;
    msg.maneuver_stime = 0.731522901464;
    msg.maneuver_eta = 49249U;
    msg.control_loops = 844315330U;
    msg.flags = 78U;
    msg.last_error.assign("TFWQWLLXVHDNEUAZFNCHIRUGNZOFMNTCZSKWAATXQZMPPACUNUPSJTDCNPHEDBAXSIUACWMSBW");
    msg.last_error_time = 0.665054663571;

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
    msg.setTimeStamp(0.503334391398);
    msg.setSource(52741U);
    msg.setSourceEntity(244U);
    msg.setDestination(56822U);
    msg.setDestinationEntity(168U);
    msg.op_mode = 23U;
    msg.error_count = 77U;
    msg.error_ents.assign("WAZXGKVXIKFAUJXTMHLGSHIRGXFZHVVKFOFTZFVXUPEWNYQOBJEOPEEIXQPALYOYROZDHS");
    msg.maneuver_type = 10503U;
    msg.maneuver_stime = 0.754977343218;
    msg.maneuver_eta = 48276U;
    msg.control_loops = 2496409072U;
    msg.flags = 200U;
    msg.last_error.assign("VSBWPMJTPQKFQLJRDSROEMZRQEHZUUUMPRCHATCKEEGRLOFRIGVNJBQCDKINWCUNVMWXYEZABIBNKCTMIVEFOBEWGCVTHGSZGVQFNRMVFXVMXDBRNFPIIMJNYOZSOQPHVQIKXRXKPHLANWZBEIXAJQTJHOCULNJHMLLTPSJQYTIUSCXAKWUYEOOESFPAKGDXKYLOTTCURZBGPCOSWHWAFXXLQPYDABDYDNDGIMHA");
    msg.last_error_time = 0.167940148564;

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
    msg.setTimeStamp(0.505007866952);
    msg.setSource(580U);
    msg.setSourceEntity(39U);
    msg.setDestination(32726U);
    msg.setDestinationEntity(62U);
    msg.op_mode = 249U;
    msg.error_count = 16U;
    msg.error_ents.assign("BPOJZBFUZDGHFRIXXAVPTXCJIWEGVWRGCSIAVAZQVXJUHCDYLFBGMHZTXGKEEABMTCZHWZHEOAFLCPDSZKYBETOTHICWTKODLOIMSZMJQEMNKDWXUWJFYLSBUGHQTAUZKQYVDUSPRUHQJCMFYYXYCJEYIRTYPKUXSRFVN");
    msg.maneuver_type = 55003U;
    msg.maneuver_stime = 0.205525992956;
    msg.maneuver_eta = 31610U;
    msg.control_loops = 1922679101U;
    msg.flags = 45U;
    msg.last_error.assign("AWZNRRHRRYNDHSCSGJLKQMXNXUOSGBFPHKXPYUIVIRIPBBUVLNGBLMOADBBAWXCEJNNVPLZIXWELMDADOVCOFMJOAIZFBOVFQSREMKHJAIFZXUAEYUHWSDDSMUZAEBLSZVZKGWXMLSCPRVHPVZFLGDUKRMNTY");
    msg.last_error_time = 0.260345723515;

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
    msg.setTimeStamp(0.321032922888);
    msg.setSource(60843U);
    msg.setSourceEntity(101U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(195U);
    msg.type = 182U;
    msg.request_id = 49445U;
    msg.command = 126U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 34411U;
    tmp_msg_0.lat = 0.318671559687;
    tmp_msg_0.lon = 0.265064693283;
    tmp_msg_0.z = 0.320807101059;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.speed = 0.37476929176;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.duration = 4847U;
    tmp_msg_0.radius = 0.768179393128;
    tmp_msg_0.flags = 152U;
    tmp_msg_0.custom.assign("SZIHZYAFYLSFYKOERMXVUJAOAZGIJQUSTHPACQKPXSUHBSSCP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11751U;
    msg.info.assign("VWVKQSHBFZJZZMBQKUITXPANOTYVSUPXYCJKZNKLEDREYMYZAQVNCRPLAVBRBKQRENSNB");

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
    msg.setTimeStamp(0.203139123711);
    msg.setSource(34735U);
    msg.setSourceEntity(69U);
    msg.setDestination(30799U);
    msg.setDestinationEntity(231U);
    msg.type = 125U;
    msg.request_id = 17307U;
    msg.command = 122U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31772U;
    tmp_msg_0.name.assign("ABDZXHXLZHWCAFNELRKCBHBIWJYTYECUEDDMMAILLCMWGKJMGZ");
    tmp_msg_0.custom.assign("UHQCRXGFAZMPETGNKFLLECBSISRFCEAXZPNJJSOJJBTTGNKKWWRUHDIVMKVNQJIVZVJNXZJLVCGIXDHLFDOPTUMNGRIFQPYXRMAUROMRDOBQVBGDKOUBTYSYPHFKILBOQYFYHWDDXSYHZLQR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53530U;
    msg.info.assign("HYGNPHGMHJOVXVIFBTIZYCSDHJSJHXBJGHPRZGCRJGEMDWWSKQTNQLUYEFVEOPQQTBYCROELCSXKOSYHMUMLSFUNSQFWPLCEBBVUYJBMTERVYDKASORGWHXMVAKYUXXHEITAPFRFDKVJIRDGEBNNFJUCKYDJAMTYNLLXWZQOXCZZSLBUFSIUWFUMBMDXAANFVDWCVZRCNOWBWWDGLLZQXPOCVNAPK");

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
    msg.setTimeStamp(0.210720871445);
    msg.setSource(26671U);
    msg.setSourceEntity(136U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(202U);
    msg.type = 139U;
    msg.request_id = 38074U;
    msg.command = 98U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UTGBLURSJRCHSOQWVNLXYQMLJNZIDJZJLHXDBOMNFLEWRKTEAMAJONUJSAWPIYGILUXGMHUKEIIJIWUNPBZXXVMPTVFSMDVYDGXBAOQCMNVKECVTMAQEBVOFEX");
    tmp_msg_0.formation_name.assign("QCSJINTYOYQBGNYCOMURCAFKLELBKDMANLRWWNBDNKNKZVJOLTDNSJERXZGPQFAEGBUCZIIUADHCUQHEQYUOKITMOUBERMIMFKXHIDFVQGCSCFQFUBJXLXHZQCVSIWBJOYLFRUYZLMWSGCWERPEOEROWTXMYLDFZRADPVVKIVJTTXSFZPDMVYUXEGLJKTGYVQWPJIHDTPXNZAMIJXHWFAHGGYZTVWB");
    tmp_msg_0.plan_id.assign("WUOMPBGZUTNJYRGVQSPKZFDLMFRHOMPUMTRXE");
    tmp_msg_0.description.assign("SENEZSPIXBOOGUNZYJOGLIUIRVEYTJZ");
    tmp_msg_0.leader_speed = 0.967078896599;
    tmp_msg_0.leader_bank_lim = 0.694370555559;
    tmp_msg_0.pos_sim_err_lim = 0.959361744365;
    tmp_msg_0.pos_sim_err_wrn = 0.906773039275;
    tmp_msg_0.pos_sim_err_timeout = 29559U;
    tmp_msg_0.converg_max = 0.349947863467;
    tmp_msg_0.converg_timeout = 17653U;
    tmp_msg_0.comms_timeout = 49712U;
    tmp_msg_0.turb_lim = 0.125516512516;
    tmp_msg_0.custom.assign("WTUTXLCDYKJGKRDPZSLHYDVWIFXDSFTHNVMVUBRLBPTSOOELKXNRKUOPIEQQIUONSYHQHJQXISEDYLFNITBNYLQDDTATMCQZFOWCODCABMHASQJGREAISWZENYPVJVCNTCQWSLAGZXVJUPBPDOERKKVDHVXFUZP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52648U;
    msg.info.assign("HLTIQAQSDWBXCSUPIEFAZZLOLVFZXAMKTAAIZAVWFJSMTKRPXOKYAONCLXBHDURCYXDBUJNRXWBDUPQGSKPBVTOVTBVQMBFJORHRECHUPLMEIPJREFZNINISOXSWLCLHSMCDDTDANPTSMVYEZVTLZJFQUWCIFGVIUGOLCDGNHZIKBSMQDCPVHVFNAREWQWOQKEDWGPRKKTRIUJPXAHYGYYJTNJGKRULJJGYESBBQZMCFGYOWWZEKOG");

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
    msg.setTimeStamp(0.085695202019);
    msg.setSource(49752U);
    msg.setSourceEntity(162U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(227U);
    msg.command = 238U;
    msg.entities.assign("AIXLLDGTBBPEOKVBSVMJPWYYXRNNSXNVDTBOIRNRAQAQDQFKGLISTUJMCQPZMKFRZHDBVPGTNIOFMCBGZVHTYPJULONZLZKFIIWDUQEVDZGYCCUEPFSFCHOWVMNRZLDKMAXKKFEIHSRLYWWPGRDAOTYRJSKBXCXUAYVAIJHQDCWUMOUUQEAELSPAISGNMQCFNYG");

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
    msg.setTimeStamp(0.192413597882);
    msg.setSource(22315U);
    msg.setSourceEntity(90U);
    msg.setDestination(857U);
    msg.setDestinationEntity(3U);
    msg.command = 130U;
    msg.entities.assign("UUODKXVMEJGXMYNOIIQGYEGKIESDQVCYONWZZVYSNFFBEHMLFRCSOQQACFNUGSPAELIORTSXMKUUXTFTQHIRZOSQLAVBCZYP");

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
    msg.setTimeStamp(0.964535226083);
    msg.setSource(46527U);
    msg.setSourceEntity(1U);
    msg.setDestination(29181U);
    msg.setDestinationEntity(67U);
    msg.command = 216U;
    msg.entities.assign("LDLXRFTAFEORARERZVLUWYINRZKSXROETYOQSPTIAYGQBGBVAIRFBZGPHGGUJGGMCHEYPYYXPJKAFIQWPNVBSLSMTPHWUCIDOEW");

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
    msg.setTimeStamp(0.184608774145);
    msg.setSource(39144U);
    msg.setSourceEntity(99U);
    msg.setDestination(1628U);
    msg.setDestinationEntity(208U);
    msg.mcount = 198U;
    msg.mnames.assign("OFOFSHJHOWXMMYBDHYSNQFZMOYRNZDECSGCQTCPBJYIFVWWRQUJZKXVTIDVUDKPJLDLKRNXBXLONXZNFVZQLCSHULBPHUF");
    msg.ecount = 124U;
    msg.enames.assign("WGHBXFTJHXIBSQMUTVFEOLMCYYCUIYNRRKZTLHFOSGWGROCMJPJENLKALQIAXZFRNRFHXWZCJONDRRNKUKOOEUDDCALTGAWPUKWPAGWOKYBMTAXDDYJBNFJRQQHYTXHTHQBQFCJMNPELIYLVPQSYXMASZUJPMWIVXIRBDJSFFFYMWIOKBVSUIXDGUWIZZDBRZTQUCEGSVEKZQEYKHMNTLSDIOPEALSWXSAPTU");
    msg.ccount = 59U;
    msg.cnames.assign("EZYQWCHLZN");
    msg.last_error.assign("YRCIIFWTWQRBHDVPASZFWQVPGEVQEPYIDRZUYZERMSOBXSTOIXMCJGNLKSXBYQXHJFJHIDWLOBEOUCGATTRDMRZLNNNJABRMXGIMWTLPHMBEAPATEFIKOQPLOFWBSAWFVGGBPGAGLLZNIMBWUITYMLNYLCKHZODDSE");
    msg.last_error_time = 0.499140007308;

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
    msg.setTimeStamp(0.69126297762);
    msg.setSource(18379U);
    msg.setSourceEntity(113U);
    msg.setDestination(16198U);
    msg.setDestinationEntity(5U);
    msg.mcount = 47U;
    msg.mnames.assign("LTSDJPBLSBRDCRCKCKKHZQDLARPKLRMPVEOUCBMDUYMDILNFKFVWQXAVEKFTMGCNZLVHYMFPJQJOUIEGHIQALRHEUBGGLVBGZTQGNXHROXIPRZTSYBMOOAOJDKELSTDIVFXWANCAWNXEZMPVIZGJPP");
    msg.ecount = 209U;
    msg.enames.assign("OCMJZDLBHCIZHVAIBCRWMAVXAMLLJFFBEUEVQEAKQOCTTOFRNUXBKRMRKDEHFLGCVWGWGUIQVOZBPOBNVUYJSYHPTQWIXPXRULEXRVPPFPJXHGYERUZCKDVBESIJBNGLYKKZSUZOCDIJOUDGDZBJWWKESQMFTQDASDTMRKHGBLQUNZMNLGAWPTVPWPHAIXSFXFEIRSWDC");
    msg.ccount = 45U;
    msg.cnames.assign("WDRHGPDQGVWEXZVTXANYSDUPU");
    msg.last_error.assign("FWWKGNXTUAOEXBGHVCYMWTSUYIBYDXXFCKCHNXIDBWBVOWKRPWOQWRPSMMWNVVNEZIMLJYZLAMESPKCSYDSFYVJYPDHBKCCQEUEZNJANGRLHYPBMQLDGRVHFXHJOMQJGSLYKRRSVQAPXLHXOZHUNJVQEITBFCPAKAFPJUELTGPK");
    msg.last_error_time = 0.649588368151;

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
    msg.setTimeStamp(0.994278105271);
    msg.setSource(60302U);
    msg.setSourceEntity(106U);
    msg.setDestination(58000U);
    msg.setDestinationEntity(201U);
    msg.mcount = 96U;
    msg.mnames.assign("NSXBIGQATCAXVCFWFYMFRXVCMENGJFEPZGLJZOWLTPJKZUS");
    msg.ecount = 235U;
    msg.enames.assign("KAIJDPOEPXIVJGGRLCSEZTCDZIOZCSNPTWSUHUATFCVZUVMFRZYIIATHLKSOVJETBXERSUOZBITDWOGHQHUMKKVTHBKQYFLAWANFPHJSRNPLWZLJQTECOPQDMZCELNFMMXVMBOAYYEFKCXYQSTVLLYFLDNFUQDKAVYJGJRBJROXQIPMNFJBDHUMSWIHIKCGWEBRCSPFWDWETKSWQXVNVPMXGCWBNUOHHYUDXXAXGLDRNYU");
    msg.ccount = 208U;
    msg.cnames.assign("JENUDPRPBPOIYCPKVUEEEYEXRMAQDTRJZPVMGSLDGSGIOIDWJWXNWFSXGJFXABENCGALSOSLKNJRWGUQDMMJUZSYYCVWAKPZVHICJBADKIRHEKOONIJNFISTHDMQLNLKIZRKVXBNQWTTUAQZOAAGQUHEMPCHYMVXOYLEKFWAXILNVSPDVHZDGRQXYBVRIM");
    msg.last_error.assign("WVSPMLFUAIUPUARSYJVMLHKJKTPFPNUDXIAOMZXUWRPZOQQAJHADXTHRRXUHDNSIJNPWTBBIJTQIFTGGWXNCHYYLVRIYGSCZMEBRMCKZUMFVDCBHBNOBSLEVAOSSFQNWQIYVKPGKT");
    msg.last_error_time = 0.10753023703;

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
    msg.setTimeStamp(0.856805359192);
    msg.setSource(50620U);
    msg.setSourceEntity(248U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(13U);
    msg.mask = 144U;
    msg.max_depth = 0.631699924869;
    msg.min_altitude = 0.811995004966;
    msg.max_altitude = 0.428734578224;
    msg.min_speed = 0.365911343265;
    msg.max_speed = 0.4665421227;
    msg.max_vrate = 0.104025219434;
    msg.lat = 0.399915924225;
    msg.lon = 0.652728491374;
    msg.orientation = 0.860737059728;
    msg.width = 0.996629276291;
    msg.length = 0.670988653874;

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
    msg.setTimeStamp(0.447420660196);
    msg.setSource(8009U);
    msg.setSourceEntity(8U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(148U);
    msg.mask = 108U;
    msg.max_depth = 0.972341079914;
    msg.min_altitude = 0.524329820801;
    msg.max_altitude = 0.389810239458;
    msg.min_speed = 0.122262263889;
    msg.max_speed = 0.800298206161;
    msg.max_vrate = 0.107596934766;
    msg.lat = 0.303989229716;
    msg.lon = 0.72529960289;
    msg.orientation = 0.96533876126;
    msg.width = 0.622706674534;
    msg.length = 0.256011987743;

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
    msg.setTimeStamp(0.00766636014266);
    msg.setSource(3747U);
    msg.setSourceEntity(146U);
    msg.setDestination(24357U);
    msg.setDestinationEntity(225U);
    msg.mask = 211U;
    msg.max_depth = 0.254758342692;
    msg.min_altitude = 0.148263301188;
    msg.max_altitude = 0.337544325667;
    msg.min_speed = 0.896351405337;
    msg.max_speed = 0.1702212121;
    msg.max_vrate = 0.959154601776;
    msg.lat = 0.687566936655;
    msg.lon = 0.505794805101;
    msg.orientation = 0.253010619045;
    msg.width = 0.464415714541;
    msg.length = 0.110036820882;

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
    msg.setTimeStamp(0.461905410744);
    msg.setSource(4578U);
    msg.setSourceEntity(172U);
    msg.setDestination(59937U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.490591021757);
    msg.setSource(197U);
    msg.setSourceEntity(5U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.953926926757);
    msg.setSource(7454U);
    msg.setSourceEntity(1U);
    msg.setDestination(45022U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.243814690233);
    msg.setSource(8129U);
    msg.setSourceEntity(141U);
    msg.setDestination(16148U);
    msg.setDestinationEntity(122U);
    msg.duration = 26514U;

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
    msg.setTimeStamp(0.745506889559);
    msg.setSource(36710U);
    msg.setSourceEntity(34U);
    msg.setDestination(33995U);
    msg.setDestinationEntity(252U);
    msg.duration = 38401U;

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
    msg.setTimeStamp(0.870188388471);
    msg.setSource(64315U);
    msg.setSourceEntity(203U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(113U);
    msg.duration = 33840U;

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
    msg.setTimeStamp(0.347870097962);
    msg.setSource(28492U);
    msg.setSourceEntity(157U);
    msg.setDestination(1019U);
    msg.setDestinationEntity(92U);
    msg.enable = 48U;
    msg.mask = 996114744U;
    msg.scope_ref = 1689039059U;

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
    msg.setTimeStamp(0.842285912868);
    msg.setSource(25594U);
    msg.setSourceEntity(85U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(75U);
    msg.enable = 180U;
    msg.mask = 3666386262U;
    msg.scope_ref = 3823209965U;

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
    msg.setTimeStamp(0.601021141953);
    msg.setSource(29153U);
    msg.setSourceEntity(237U);
    msg.setDestination(11566U);
    msg.setDestinationEntity(198U);
    msg.enable = 29U;
    msg.mask = 4166546063U;
    msg.scope_ref = 3846030505U;

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
    msg.setTimeStamp(0.417362605824);
    msg.setSource(22803U);
    msg.setSourceEntity(222U);
    msg.setDestination(32130U);
    msg.setDestinationEntity(37U);
    msg.medium = 108U;

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
    msg.setTimeStamp(0.345216575726);
    msg.setSource(299U);
    msg.setSourceEntity(115U);
    msg.setDestination(30230U);
    msg.setDestinationEntity(31U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.694054591696);
    msg.setSource(65051U);
    msg.setSourceEntity(253U);
    msg.setDestination(40684U);
    msg.setDestinationEntity(72U);
    msg.medium = 178U;

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
    msg.setTimeStamp(0.437879418629);
    msg.setSource(50384U);
    msg.setSourceEntity(72U);
    msg.setDestination(49768U);
    msg.setDestinationEntity(27U);
    msg.value = 0.38856224424;
    msg.type = 15U;

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
    msg.setTimeStamp(0.541391356455);
    msg.setSource(1172U);
    msg.setSourceEntity(41U);
    msg.setDestination(55573U);
    msg.setDestinationEntity(144U);
    msg.value = 0.988917914464;
    msg.type = 16U;

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
    msg.setTimeStamp(0.336543916087);
    msg.setSource(41005U);
    msg.setSourceEntity(232U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(15U);
    msg.value = 0.91798354764;
    msg.type = 71U;

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
    msg.setTimeStamp(0.515540417948);
    msg.setSource(12061U);
    msg.setSourceEntity(199U);
    msg.setDestination(36600U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.0180067232553;
    msg.converg = 0.705818561851;
    msg.turbulence = 0.719230855195;
    msg.possimmon = 142U;
    msg.commmon = 0U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.738840425435);
    msg.setSource(59925U);
    msg.setSourceEntity(60U);
    msg.setDestination(55547U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.251756333988;
    msg.converg = 0.229020739909;
    msg.turbulence = 0.981338216084;
    msg.possimmon = 115U;
    msg.commmon = 124U;
    msg.convergmon = 153U;

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
    msg.setTimeStamp(0.189403444503);
    msg.setSource(16958U);
    msg.setSourceEntity(159U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(215U);
    msg.possimerr = 0.24909225375;
    msg.converg = 0.548709922174;
    msg.turbulence = 0.950739295612;
    msg.possimmon = 37U;
    msg.commmon = 252U;
    msg.convergmon = 190U;

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
    msg.setTimeStamp(0.589975233276);
    msg.setSource(56764U);
    msg.setSourceEntity(154U);
    msg.setDestination(65142U);
    msg.setDestinationEntity(163U);
    msg.autonomy = 251U;
    msg.mode.assign("IHWXUKMDPFOZMBRULONJZOBZVGIXUKRKDWZZYTNNPBHINAYUNLXSXIUCVXSJQCYSCXXBHAOLJQLHXIYROQMYRBXEE");

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
    msg.setTimeStamp(0.109177830037);
    msg.setSource(41095U);
    msg.setSourceEntity(73U);
    msg.setDestination(49051U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 143U;
    msg.mode.assign("JCFHMHFWZIVRUQTGJVGRQEFKLUFTLALOOXNATJXSPSERLDEZPYNYEKPRGDHRFVFYHLJUCQDYTSMZVMBQIXWTCBMEYXEQZNARBBFWWIYHWBONOMAOTEIZFHPVGOCOPBBKWVKHUMGCHZKWNYMSXYAILSSRBGCLSBHJMCBPFDLIVNAQCOINNDUJEGDLRQXAUUXLNKITKUVUKDSVSRTOZFJMXUJWDKIGCPMNPAXRZWYVQZITGPDKAGQYEQEO");

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
    msg.setTimeStamp(0.300485697759);
    msg.setSource(29309U);
    msg.setSourceEntity(123U);
    msg.setDestination(46072U);
    msg.setDestinationEntity(110U);
    msg.autonomy = 176U;
    msg.mode.assign("VPYHYMAAHLXKOWFQRSQXXFZXVZYYRBJDIEGIFSSFOIIDLIMCCINQMQBBRYAKOBPZUKVWRAZWJLEAKTWIYGNDRXPTCTSSJDLPVFNNLUOQPOTLDJTSTLZNCFTHKFYEAZBRZEESEALRRQGPTUWFBOPFNNDMOVKIVHMFIOTXU");

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
    msg.setTimeStamp(0.0269738217235);
    msg.setSource(65325U);
    msg.setSourceEntity(171U);
    msg.setDestination(40995U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.340477031819);
    msg.setSource(54402U);
    msg.setSourceEntity(218U);
    msg.setDestination(30551U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.159979332575);
    msg.setSource(55359U);
    msg.setSourceEntity(171U);
    msg.setDestination(60919U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.731427525416);
    msg.setSource(22887U);
    msg.setSourceEntity(26U);
    msg.setDestination(51889U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("MWELVKFDHNDONUBRLAENGTKRSDYLBNHQUHVGYGXYRSBAIZZAWUZLYUQETKPEUSRFDCQNTCQPMSNCPOBGSVMNWFAQWXWJDGUJ");
    msg.description.assign("ORCNDKMRTUYLAUDSFEZTYJVXGSTSPPEMBWYUXFWFTMCRTZKZBGNXUQZCLFJPWVRRABCQEYFUFLSCMUTPVHBXWRBMDXGHAOAEESTVYGCFDKMBYVHRJDDDKHFPNNJYIRDLJSOOUASOZSLVZUDIXQFFWQYLQWZIRVXVLQTSZOKGEUAVY");
    msg.vnamespace.assign("JKPHKZQQKZJQWXEIAOTSRZEJRHLJWMQRIYMNHXCHRTFOEKMXYFALANZBZRLUUVSGOFWFBMRENSFDAXMPBTNVCFBGCBMHTPDCYCDOCLWTYARNGWTDLXPMTXJDNUSQJRDYD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GBSMRTAKXATDHDYKELOKTFLJWBUWKNBOIJHODGGRTCLETLBRVSSACCWCDKNYWMGKHFRIZVDULMMGDRKRHQKCBUKFAVQTLZGZYWAGYODCQNYGVCTXPBZOQLWEUQVCZIEWXXSJYSN");
    tmp_msg_0.value.assign("QRDUQMTPVFPYDTSBSSZRDTGIZIJAWWIEZFQRGCIAHUCBNMVKXIHPZLJOYKAOZSWSMNMHEHXZHBVLMGOQAWUWPXXGOJXMDFKWQEPMZVOLZDQPOLRKKDMWYYTBLSUNYFGQURJ");
    tmp_msg_0.type = 157U;
    tmp_msg_0.access = 103U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("COQAOIYUBCPFQKVUJBZGWRNVUZPHXMXGY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DTYAMSJDXBOZKEZCSIKYVRMWMLPUPETYMEMLXZFWVAHUDTIETXUJBUTEGYHLDFESNKXSITLJGAGSPKZNQLVZABBWNNQEIMCGMVDVEKCKXLWDFHQSGOFVHMYGXLWNCNHZJRGRTAKDLPVAUNQQNZJOQFJYOVQAXXBPCIQORSGACZCWHRIUGUZSTJHVBCJQDEWEBMSPKYNYOGRMNWIKFAWULDPPUYQJTPV");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 19460U;
    tmp_tmp_msg_1_0.lat = 0.610677084782;
    tmp_tmp_msg_1_0.lon = 0.903783097661;
    tmp_tmp_msg_1_0.z = 0.363618862965;
    tmp_tmp_msg_1_0.z_units = 71U;
    tmp_tmp_msg_1_0.speed = 0.186029441977;
    tmp_tmp_msg_1_0.speed_units = 85U;
    tmp_tmp_msg_1_0.custom.assign("RYXHBWUGPVHJWPCVQAHNKFEQETFBDODULGEVBXHQUAOECIIYHFOYMZDSHOBRMBBDONALTCXGNKIKLOLUSLFWFBZAWLYTOIVZJNDVMZXYSEFTGFZQYTRRHCRTJPKMJAPPIPMGATIYCYMCVQHJAVXRS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RLBZHGNQLEWRICSUHGZBSANJGXOHDPHMRWEYJOBFXCNEXFMQQLAHFFZYJCTQIPKTDIDVRKUDKIXBODIPVONEBBFUFCVRAAUUSVL");
    tmp_msg_2.dest_man.assign("CMFXVBJDZPVSYZVVYJGCNSCAMJEHRMYCFKBTONSVZVBNCEZXLUKVWNMFRRSUMDGHDJZGXITOOMNHUHXXKEBEKCEBBLDJRWXICTRUZKIOTIEIBTQSMYCADUMWOWASKAVEWPSJIMXOAZOFHPQNSTYWPIDPGAHCDQGBIXDPLQPZFKUFWDCWQGYTNYEFTFQUEBQ");
    tmp_msg_2.conditions.assign("BZLRGDSSTOUJKYVWAJVRJKPYHGZNAJHLSFYYWDFEQLDXKFFDJORLOCWHKCNIQXNTRCKPNEOQUNTWVGMRUASCOQFSDEMBJQUJXEWB");
    IMC::DevDataText tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value.assign("IYEWCYAUGXJWIVYIZDSSFDWYWJMUOSFFWEGVGENI");
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
    msg.setTimeStamp(0.995122977901);
    msg.setSource(25569U);
    msg.setSourceEntity(129U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("CRJWGOWLVTKYTDQIJWHIDOWYINTCOGKXNKOEPFBQLIRDHRUOGAKBPTQSEISLSGMRDFTMQUNVAZFNEADSONNCTDDANSXFVZ");
    msg.description.assign("VISZKRPGQUAPJYFRJVLRLDVULIJSRYROCTWEUKERPETDITJBQMQN");
    msg.vnamespace.assign("SKVLFOZLIZOBWTPDQUPEAFRKWRAOINAAWXASRBRYMEYNHTCEFXGEFSMYGVBBCCDBQBVYDJJREVLPVSGCIO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GZNSDPFHWHFHQCZRRVHDKBSIRKOPSTYGBHACKDQISI");
    tmp_msg_0.value.assign("NXNHVHQQANNGVYDVACOFMSWDXWKJTNXGITCSBQVGDKODEHYYMLYALJOARRCPVAJILIABWLIJHKFLXUZTSTBKCBFQIMJJTHKRRQEYUYMJEGMOOVRXBPKCCNHLUHURDWLNFXIMGBHEAQHZTDULDRWIORSOLDJPKSUMZEYUWYZQJTCZAFYZQNQVFIPMFXWJQVBFOGEEZYOZZVZPNESKGNWSPMTKIPCGDTFUBOAXSPBLFBWUXICW");
    tmp_msg_0.type = 168U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GKXXYWNHPDDOUVNCTIIRNSADELHBGXWJL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NTPMQMMZWJTDLYMKKWDDHNVTZTKIKXJASMVVSFCNUGABCAXSLJXDRPVYUXYQGNHRHGWDEZYULNMSQPIYIBREBPFUK");
    tmp_msg_1.dest_man.assign("TEYWVJFPTUWYMUHABXTJKZOYSEWAHNHXQRYHZSX");
    tmp_msg_1.conditions.assign("IELUBKAMLLOBFAMKBYPRHNRQZWUKDRIICSXQNZXXBFPLAVNFQZKFSKVIXTOPCBYFENOCKJOBSUMXLLYGCEZZJVGUHPMITSDHJML");
    IMC::IndicatedSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.788470477453;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Acceleration tmp_msg_2;
    tmp_msg_2.time = 0.654731646994;
    tmp_msg_2.x = 0.0814690470564;
    tmp_msg_2.y = 0.709521649521;
    tmp_msg_2.z = 0.103567825173;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::WaterDensity tmp_msg_3;
    tmp_msg_3.value = 0.0570849203751;
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
    msg.setTimeStamp(0.575376981378);
    msg.setSource(5714U);
    msg.setSourceEntity(188U);
    msg.setDestination(16341U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("BUBAHOJMGRKIYMXUXZZECTKTFZWQGXUNQLQPRLWGWQOOKZICTYPQXUIJAAEDUJVWBJLOGRTCETASCDJILNYJVRYCPV");
    msg.description.assign("BMHUURWAGBXETABEQTLXWPKNCNYKMJJIDAZYURMQVVFFKWUVMZAESZYJIDLTYBDPOBUOFYCZIITNTVICWOCLSFVKTVXGZWVNEXDPQUGFMFGQKOLOIHYXNSLKOHQATJJZSJNLB");
    msg.vnamespace.assign("XUSGZMKPFLWXNEIKEWVVNYGUYHDXIJCXVMTSBODBFHTBTNDOIQUOJMZVBGCNYLONMXXKLWODDZJBFYHTEGLRKQXXMPJBAPXDBRKCZKCPGACSVZJIUPIJYWBRZEBQCSVTWELMCORWGGUNDHJQERRYSILAZIIGGHWFQAOHTLIKFSWQPFTMSFSRUVASNEQUDRSWAAKLTJYBHUQMVFYIHUKYZNYMK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("THVOHRVZJGYCMDCXSSCRMQAPINFRQYACXRVAQRRFKBIBDZNZTKVMSNTTQOOWCZTEBSPTCPLYUYQKJNMCMFKHDEBLHGMPPALKDBDBDLOAXXBJDEJGWUYHAXRJYJHGISNPUEIUXOWLVVEIABHLUNQOJHIWEWCUXWLWMPJDLH");
    tmp_msg_0.value.assign("YWTGRJGOZYECMAOPHGFUABXSLUXCMEFHTIVUJPHWDUZA");
    tmp_msg_0.type = 76U;
    tmp_msg_0.access = 166U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SYEPMWVAZNCUTBXICQHDSRAQMPSVABHYXBXZAAGVSYRAMWMVMVQWRGXDVRCDNIJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BLNIGMXOEBNULZDOYUYQQUPVSBIBSROBVXCHYFPOCDTNBUTJUIYIUJKDCHBJKDHZEUQEEGAYHXTIHDMYYNQVFLOMRPRROVQLWRRAAZRSJFOFEVHMCYDVHTEPJYOWRZRHGNLKXPFSGSSLNGBQXTWVUTOYMCIJVPGXSFDKNHUCNLZWEZQWTBATQMNSAJWZXQIBSWWIZZGLFKAMIHMKMCAAPTCKTUALPXNZJSDFCGJCGVEEFRKJGFLME");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.40906584637;
    tmp_tmp_msg_1_0.lon = 0.879840188852;
    tmp_tmp_msg_1_0.z = 0.667550474194;
    tmp_tmp_msg_1_0.z_units = 193U;
    tmp_tmp_msg_1_0.speed = 0.513366023927;
    tmp_tmp_msg_1_0.speed_units = 144U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.406743233021;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.266238341703;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("LPGCCGQENHZMIRIHLSMJXGZALWVYOHJZTWEWSUCOSERYYGPHMJJ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SetServoPosition tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 123U;
    tmp_tmp_msg_1_1.value = 0.692364154134;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
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
    msg.setTimeStamp(0.118888833521);
    msg.setSource(56603U);
    msg.setSourceEntity(84U);
    msg.setDestination(14018U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("FUEISEHLVMZAUJMYZIZCBMCOELMVIYRVGNJCDEYUHSEWFXKRCYHMBUXAQWCVWAATSDJGOZFCMKAZQWLBUATEISFXXNFRLDGZWSQQBTOBAQDORMZVAJCKTDLKXILVNPHIKPWTNOEXQGMPVFJVZFYKKBFUNVSLOCYUTQJLWRPSZIPPIRUEJHXAKPHOYH");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 7339U;
    tmp_msg_0.lat = 0.00891490901353;
    tmp_msg_0.lon = 0.899468115198;
    tmp_msg_0.z = 0.247581734174;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.duration = 29812U;
    tmp_msg_0.speed = 0.292414056317;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.type = 102U;
    tmp_msg_0.radius = 0.534512345775;
    tmp_msg_0.length = 0.740174043455;
    tmp_msg_0.bearing = 0.99223142006;
    tmp_msg_0.direction = 76U;
    tmp_msg_0.custom.assign("FEXPAKDKQLXNDTLFTZNFLVAVRXYOPVYWGXQQHHGHWZEFMTBCOQ");
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
    msg.setTimeStamp(0.116964287326);
    msg.setSource(61096U);
    msg.setSourceEntity(102U);
    msg.setDestination(38236U);
    msg.setDestinationEntity(81U);
    msg.maneuver_id.assign("UMZCEJYWFVNEVSBWLA");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31428U;
    tmp_msg_0.name.assign("XZNQMXSKQBBPPBYLPGJNHIWGXJMKLWYAECVEJNISVCOWGODRCRGVHUTQNHDUWJCNFNEZOZUYNMRTXJCERAJFJ");
    tmp_msg_0.custom.assign("PBUDHCPSJDCFIXFTSYDCSFYHOSOPHOACCBUROTOPXNDSILTPWCZEYZSWEMXJXUXRTFVMKKWERDKIPBPNQCLNLZKIAMBYWTJTGQGUPUIMDQNJVXFLOVUJGFFAUEZDQYAUSJZAPNHZJMHVGACSKMUEVCAZGTLTBZKVEZWBTEDGRRYEBVGLOJGGIIMBBWPAFQAFVXCKSOYHKXGSXLMYKHWMDZE");
    msg.data.set(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("KRBXANMASFZOAOSFUBZLSKEGNJUQWEPKGWCJWIDTBAUGXAYLSILFZNCGCJPOOGVKVMRHABMBXFJGNGYSVYRJCTHYGKKFRFDMZGVMBWNPTHQZBEQYUUVAQDTHBSUPDIYDHEPETOCXJNVMZRUTWXTAFYGJZHLZHXLIMMPQEAQFKILRSLOCKUCCWNYLRZHWFQFSRDVODWEEM");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ServoPosition tmp_msg_2;
    tmp_msg_2.id = 12U;
    tmp_msg_2.value = 0.404342322652;
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
    msg.setTimeStamp(0.00868897543214);
    msg.setSource(61420U);
    msg.setSourceEntity(48U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(172U);
    msg.maneuver_id.assign("EYGISUCCIFXXWKRKYVMCHIXPNHCYIGHCNFFUOCPQIIGJRTUOXIJPNGOZXFBUKDDXAKSRQUHYDGXAAFZTSSWVMYSUSZNJZYPTGBJWMLVXWERNIZMEPMBJYPWWEBOAWHURKPKYRGLKCPACQLLVPESETZTVLCQDBZVXOLUMGNFSBMTCVPZKEBSVOFDVEHHA");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("QZPEURDVPAJCMIAXRHHOCBCMLPLDXMXFENYFVJCNPHKLHKSYRGDDODANUFYGAKYTNCQIUHEFJBBYZMVOVMESBISWTIOIPNXGEJAUWQPEQQZLSEMGCLUHCGTVOKNRSHYITQZZFVLGRDQKJNTHDHGCQWLYSRTWPXKSBBYDURZIXPFLIOCLEAYJZZRXASCWEKIFJMUZSJHQDJOVEMWTTGQKLATAFFOFWTWNJWMSBBNRNADUVVOVPXOB");
    tmp_msg_0.reference_frame = 174U;
    tmp_msg_0.custom.assign("MLIRWVZOAHQFDFWMVUQQJXIFFRVBCXKMPUJXVIDOUMDMSYHZOQEYMBFCXDENXMSFGWFWZOUTTTVIGNLGUVHBUHJYSAWKVCQJELFCMLEKXNPYZCZZDBOIJISOYNWGSJELPJPUCDPYKKZIJRGAZZ");
    msg.data.set(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.0346335180286;
    tmp_msg_1.y = 0.158781513953;
    tmp_msg_1.z = 0.854876617918;
    tmp_msg_1.t = 0.471973852323;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AutopilotMode tmp_msg_2;
    tmp_msg_2.autonomy = 37U;
    tmp_msg_2.mode.assign("WHBMKBHZGNRBGBQPSJXLKJKOUDRGGNCMDTOQGCAOVOIICDKQWFCZZYSMNHPNEMSXFVTYEZYUWFUTSQOAECRTYJFXIUBRCSNAMAYJGYHVWBZADTQHZBLQMRNHXXHPVXVLAXUCLJFXGQFKSKOQLPJECPAJCQOMCGWLDRKLIFZVUNYDREWWVIEWHMAQKKJDBXVTVKIMEVSXFORPDBBSAGDLPHUTWNEWYPTNZSTAOZUREEIMIUN");
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
    msg.setTimeStamp(0.688222711551);
    msg.setSource(34953U);
    msg.setSourceEntity(108U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(125U);
    msg.source_man.assign("HXFIBKODPRJXNPPPXAFMCNGZKSVVJZLTRQEOCVXVZVCGQFJQGPCKPHTTVDAFBXOONJUYDHEBOWNRMMLMOGTEYXMDIBPJVZZTQVRILSURWYYTRTOWEEBUKWJHAFEMXOGKM");
    msg.dest_man.assign("NTZSUEVAWSYONEZIQSOJPNTFAYWXKLTRRKVMGSFPZSUVBCRUTRKHVLFYABNVDPMEXBZKQXFWDLYQIGDUMWCNFOPECKARPOZJGNGDBMLKCVVIDRJQEKIIBPDMSEZGUZOAN");
    msg.conditions.assign("KRBKZFBAUYWQQJINUIXPBOGBESBHTBCWMAHPQHWSKZPQBPZPHYQXHKKNMVLIVLVNZBTA");

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
    msg.setTimeStamp(0.0300610995714);
    msg.setSource(51386U);
    msg.setSourceEntity(18U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("IGOKZUMXFZGEEXGCLGHFCVIXHINQAFBVTXUQKLJFGZRVBGLVLAOSYFZZVVYWHCNKOZMWOCPIRQYADJGMTPIEDPANDOAUBKOKRZQJDSDMYTMNNUYSL");
    msg.dest_man.assign("OSXKWDZLKBVXWLIGNHDAWJKKBZUGSECUSVGBIPXBGQMQPWNYFGOXLMFMHIPTULERXMVESUHENDTAPHWAEYBKRELUTNKVDJCFVXQYYNAHEEPQORFGFCWFZKCJNJLH");
    msg.conditions.assign("JYTREPMVHHCNEJPZZUCPSJDMDCXONSLOBRBXLJKSRPDWHKNLNGFREBOQBWTCRGLFAX");

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
    msg.setTimeStamp(0.448946440264);
    msg.setSource(27971U);
    msg.setSourceEntity(114U);
    msg.setDestination(2979U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("WYGKYLDNSKSQEDIBUUYFNMTULBOMVIGMPOWHRQKATJHAFAXJRJJPXPWSDCYDCXMLQZXTYBLPEIYOYVPGAEBNDXLPNWFDGSZVBCFHPYTZLWXBCIFOCGVTHSBSSFBHQTKZIJRVAXHUSURRGNMUFLEGNTATEHZRMZIRNPVWLVMBKDUXQEDCXHFUJFGKIKFYTCMNQLJEBSNSWUOKRNOERJWJOAODWVLDJKECMIZIITVZHCPZVAMKQYOZGUXQQPQ");
    msg.dest_man.assign("DUOFZBKSWRPYOVSAVBZQAUKYJLZILOWHYAXDKYWOELNGGJWMCUXLFDCHMNDIKIWTBPXNEPKZCGDEGABQHQMXOSVMXSSJBPGONTF");
    msg.conditions.assign("GLDOLUPNRWOQWYITDAHJWQPYEMTDKZASHWHIZJWWUGTUFRUSUPBHREYWXLHFNFGZHOALAEENVCSJUFMNHDCVHBEUXCESDZQTSROQIMQTRTTXXGSJJJJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AWHWHIVLRKOAMLMUFETAUHZGQRSETTPRFBOJWIBVAPXPPXTNMSAPHRWEPRZLGGSJKRXYCSTACUJKEQDMXOVBMYQAGTYCSJSYIUWBCMMRTZPBYFLNYWZIQFBZCXWXRDDYGBPHCGVFVJDVPJEIEFXHJUOKSKELJWSNVSHNOGLKIZLCXZDRLFQJHNSRKYEUWQLBABOGFXFCGVOEIFWUZCQQPIQNNDZHKNLTVEIKKMTDUJYGDCU");
    tmp_msg_0.value.assign("YAHRVVOPTLI");
    tmp_msg_0.type = 248U;
    tmp_msg_0.access = 171U;
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
    msg.setTimeStamp(0.600712661037);
    msg.setSource(43464U);
    msg.setSourceEntity(64U);
    msg.setDestination(54170U);
    msg.setDestinationEntity(208U);
    msg.command = 28U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZOXPUXJHBPSOTNOEZJYARRNPBMGUUHXNFRO");
    tmp_msg_0.description.assign("KQFCUMTXDLHUKSQCQJBYCSMYNELNFYFVDPKHNROUIOJRTNQEOVUZWSPBHSRSSZEEZHRGHLPOXWTPWUSGLBMLVCINPTGUQMCGHDODFERZZVADQPGYKPVUXGYHWFJIEXXNWRLJZKOBVRDTTAEWBYLRMTPHGJVFJBPOGVAQRCEWZXUNYXKMAYFIAIDMPFIQAKBAWA");
    tmp_msg_0.vnamespace.assign("EBVLLEYKDZCBWZOJTLLYANJMMPDRWIAKTGOMASFVMSXTLAHYWUOTOSOGZBBOJDOGRHCQFHURWSHNVSFCTOBNUEHHLSUWXRIAPGBCTEOMMIGXQWFSQWCVZBXRQPJIVYUFAEXNRDMICZYQLPIPBJVYYSDTGUADUKCDYXXIJZNQGHNDPZKHVGSFGWLRCQXIFJNHBJMVFTFJPNQWZRUAU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VXOJLQJUDDVYHGRERKJBKREDDVGCFBTGKTLBCNJLQABLOHBUEKTOKPMAIIWKOMWVMWPQUYOGVGDRZRWTHTESTJMQJXDRYAZXFLYUMVNR");
    tmp_tmp_msg_0_0.value.assign("BNERMPVEXRVYDZUWPFLUWTOJQJUGOYNCGAZDKVCRVPKLHOODKDKIFUNTKULJTKHBBIMBJKXJOBSAGXXQWBKQEFVXPTVEMEIFRNHQTGIOWHXZAQCGEBYPAGQYXRSJQAHIDUSJMBFUQSPTWWLQNYGADIWNC");
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.access = 139U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HXQVXHDHNDPKVCAJEBREMFAZXUCAEVRSOZAZXEKYTMXIFJILFAQFIOFGNVMVDKGXUDWWETTUHGEIITMSAFKGYHTWLQJBTYWBYSXBNPPZSOTOVSXEZFTRUYVYUNPVLRGJLAKJDOKUURLMEWSIHNWGPNWGN");
    IMC::RelativeHumidity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.699248126154;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CloseSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 808798355U;
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
    msg.setTimeStamp(0.522558156719);
    msg.setSource(41246U);
    msg.setSourceEntity(162U);
    msg.setDestination(35931U);
    msg.setDestinationEntity(174U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IDCYMNAFMTGDXFAKRDXNKJTLWAEFTNXHFZIPFUUXZUNODCIRCPFBHTKVGWSPHHGWIYUAMTMJCGVLSGZZQVFJCDESRSNBOGBBTSCXTLKEBWLAWCPULFRJUKHALCCNFVOAXPVKRXZNPVRIHTVIIJMORZJQHKQHWMYOGPBBAOVSXUDTQSPQWSROGECYUPKMGLYIUI");
    tmp_msg_0.description.assign("RUDTXSUNCPAMQTBIEBWSOZBQMUBXLZYDYRGXKYEZBRCXQRUFIQTRDDLYMFIMSGOYCTIUPEHHQSEJGFXBSBCAKHLJQUVLRVMLQQRVPFOSTLVMIXNKOKVCLVYNGHCNGAKLSZKNZGVNZHUXMACYFAQWFJNFIADPTOIEJWKSTVZIJIWDFPOPMFJZJBAHEWAWOYWPDXMODCNGGPVJQLVGRTOKAJRBHBWKMPEXXELTDWFHCTCUWAIHUHEYGYPSSZOD");
    tmp_msg_0.vnamespace.assign("YGTEHJMOBJIPQZCCDHTMPIDTMNQKCLPRBNAXYQLKTYWZFBGSECFRAJQSRXQVKBRNUPGBOVGUZWICWENTQOSZZTKZIUVWRINYWYPQNJHEAAVUTYXFRSPQHVJBEDYEJKXSTLLKDPMMQWNWMKGHUXASPECKDQFJIZLFTHAMEZWUDPFPMJDVORSAHWGYLRJCO");
    tmp_msg_0.start_man_id.assign("OIXYLXXCLLRZYSH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IGIRVKOZNFLPRFULHKWBLBANGUSYSTEKWCMBYQEPSHSTEHRKVRDXNYOTQGPGFPWMFOQYEFOZTMLBYGA");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("UCMDXTBMFCTROLBSREKRJGIHDGGDPBYFLXTMNLKJCNVSOHZGS");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("GUGSCHGMQJZRRVGQNWJDTWZLFVLSJHJFKNAMSCZVWXYQXBLKJUJMUOMYVSDMHHGIOZSJILOKOXXYFXJDKEOEYPWDQZNUZPFW");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("VOELAFOFWIAFZQBUWAMQYPVUSLOFSYYXFBXRXZMEPKZBWRKNCVPDOZECYOHUJPUSRVTCQKNJD");
    tmp_tmp_tmp_msg_0_0_0.description.assign("XKEHTUQKGFSWTIEAODBIVVTVUJQFGBPBMQPGDNGUBGSWRXEJWDTZHTGACPYBRXYUJNORSRHXCCMI");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.793191742897;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.0208689343377;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.616760931401;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.861707375003;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 28356U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.654916246764;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 31630U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 35811U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.548884423214;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KLIXDADIIIARYVTUMIAESYUWKJSNKOOZKFQBEKRPMDETCBRQCYHQPDXXTGNJYBCDDAASHRWJOKNJOQYRCAHLXLOPVMYSSTTWIHDNPXMLVQSFPMYIHLBZV");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::IridiumTxStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 2517U;
    tmp_tmp_tmp_msg_0_0_1.status = 63U;
    tmp_tmp_tmp_msg_0_0_1.text.assign("JYUOHHLWFYDWTNSRCSPBBXVMATOIUXGVOKASPQGWLZUKKEYTQRVGDLQLNBWFHBJVTKQGALMYHPCMDQMHTEERIZNKYRFGNJJOPWWOJOXWDHKEJNLODIAUCWMIWXIZTMPZCOFSAUTQLSTMPZASXMQUHEVKADJLXUUISKCRGCPNOIJAHXBXNVSJMVBCBCVJZPRFGXIYEGYURLCBQYFAVCFNH");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::NavigationReset tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.847877653302;
    tmp_tmp_msg_0_2.speed_units = 104U;
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
    msg.setTimeStamp(0.333108698256);
    msg.setSource(20610U);
    msg.setSourceEntity(48U);
    msg.setDestination(42548U);
    msg.setDestinationEntity(153U);
    msg.command = 113U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ASWECPOHNJXOCQWHDLKPJFVFUOZDIFCNCSETPMOUUNMMRPIQZJKPYRNFZPXXKLIITBHBCEFIQTFBYCHTEWIDRMBRTGCKSDPVAAZREERGCUHOBSITWVCUJKTAKVZKQBROGA");
    tmp_msg_0.description.assign("JCPAWEYGYGPYLUJDNFBWUSDYVKUIHECXSAPOPYGGEATEQYCSNC");
    tmp_msg_0.vnamespace.assign("SRITQYWUEWLLWUFTVSZNDPRRHKTBAQJYFPTWWHZRFAEJQYBEZLOCJTILSYTLNBEXXNPPQIJTDJEEUOVAUWHMAIHEFVPMWSMHMOPILUOKUGIQXZBOPZHFQRUARBHVRRCYUSTXUYSVGKCEKZLBTNQZZZKEPGKMILRNNXBNVFDFCLCAOJ");
    tmp_msg_0.start_man_id.assign("NPNYEMEPOTEQXOLKFYOCKTECWJPRGDICSWVACDPUTTDXCKABWAAUYJMYPTPLXCHQUYHGOLDBDIXNQSROLXSRSHPJUFAAOFJYZPUILZXYIHTQJMUNBGBIRRJAVLZQGDUHTTRIJDKGBWBVWJUZNMNVZVVORKAQLQAXGKTJJVOINSCUWINKKFBIRXEUQZYVOEPVHSBCFDMWZFFFMBMNQYGWDKXGASZEMFGWRS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RBBQSGMFCSLCOCJLZZNSHMKYYAUOEYGEWKRSHJPVUDMZKHSGFVFQUNHNQOUMEKCCDGLPJWJONIRIRYBWKTUBSEYTKHTVZZKYXFJWXYXTCDCQYOFRLALJIIJHQQBMWGGNFJXDDBNXWHQAXDEVPZOAMYOVAOWTRPSMVOXGRZIJXPLRPBEINGFUCRUCUULWVFUGBQZPITNVLTHBGZIQTNPHNJDED");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 29845U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0504697199181;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.201873483002;
    tmp_tmp_tmp_msg_0_0_0.z = 0.99525918394;
    tmp_tmp_tmp_msg_0_0_0.z_units = 246U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.187079703956;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 209U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.584426000033;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.611440999995;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.300748714441;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.106175790507;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TFMOWSEPRMTDGCSBJBQLKLMXXSVPKCOSLBYZJNIZOHJHNQOZKFIELWZXOQDJEWTONVIXXRTVBSYCKZUURZWBEPXABRRHPRMADEKXYAMLWIBMQQYJPQBNOFUHHJOCNIRVGBZUHQYOCQULJVCYXWTLMPLFTQVGKJLAZZQIFZPOKKDFEVTFMNJNGTCTAGWRXDYPDFKACHEAHPWESUSMRKUITECGNSBYRDI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SimulatedState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.181717468397;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.0387627584752;
    tmp_tmp_tmp_msg_0_0_1.height = 0.237347434213;
    tmp_tmp_tmp_msg_0_0_1.x = 0.245779358473;
    tmp_tmp_tmp_msg_0_0_1.y = 0.528262485358;
    tmp_tmp_tmp_msg_0_0_1.z = 0.51124530602;
    tmp_tmp_tmp_msg_0_0_1.phi = 0.743478509591;
    tmp_tmp_tmp_msg_0_0_1.theta = 0.302613522057;
    tmp_tmp_tmp_msg_0_0_1.psi = 0.760152535858;
    tmp_tmp_tmp_msg_0_0_1.u = 0.997966995288;
    tmp_tmp_tmp_msg_0_0_1.v = 0.995566852867;
    tmp_tmp_tmp_msg_0_0_1.w = 0.997773565463;
    tmp_tmp_tmp_msg_0_0_1.p = 0.0711557040689;
    tmp_tmp_tmp_msg_0_0_1.q = 0.707950676018;
    tmp_tmp_tmp_msg_0_0_1.r = 0.275025518594;
    tmp_tmp_tmp_msg_0_0_1.svx = 0.0802089029038;
    tmp_tmp_tmp_msg_0_0_1.svy = 0.240960557371;
    tmp_tmp_tmp_msg_0_0_1.svz = 0.778956861647;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::EntityState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.state = 12U;
    tmp_tmp_tmp_msg_0_0_2.flags = 54U;
    tmp_tmp_tmp_msg_0_0_2.description.assign("PJMDKDRFNSWQSNLVRVJIROZAJMICEYUKADYUEOKVAEQQWPAB");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.609099003324);
    msg.setSource(34964U);
    msg.setSourceEntity(12U);
    msg.setDestination(44218U);
    msg.setDestinationEntity(10U);
    msg.state = 73U;
    msg.plan_id.assign("JJFMWAHJJTVTMVXMFOAWYNVCUNXVBKVORDRZSLGBGLBCRPOPAETXBYSPRHPXKXALSINUUOGOVEHOWCZOUXRSAZRDBNPTUTFULZALGWIZXWIKZOESYHQTUMGBAERQZGDQHXVTCYWBFNNCLRMQTFQGSIRECLSOLJCKJFNPTPEVJZEZWFCVQCJPDWWXKGDVFNSYYDLISHMMXRIDYTIAPSLNMDFEYEQBH");
    msg.comm_level = 15U;

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
    msg.setTimeStamp(0.779681521831);
    msg.setSource(5938U);
    msg.setSourceEntity(43U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(231U);
    msg.state = 99U;
    msg.plan_id.assign("DVGTXYKYVYDJZZQMOTGRWIMCPDCXPADOQWLBDFNFQPXHGINCYRBLZQBCAAYOBVSNFHKRXMKYMDZUREKJBDBSTLEUKVVQNSTWIKNDRGLIWVEHCRKCYWSMXFHHOPWXTEJDLWFCGRMJEISNEUJHJOJRRXLFGATFNMGHPSIAKHVQOUXLZPUJEBZJHBCNWSQYFWCQLPYFMVALPAEILNXBAAISZJGZUQTDUPK");
    msg.comm_level = 2U;

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
    msg.setTimeStamp(0.0284288275113);
    msg.setSource(16296U);
    msg.setSourceEntity(62U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(73U);
    msg.state = 99U;
    msg.plan_id.assign("DRYTZGEQGTZHANVCTDYAHNHEGFHBEXONOKWKGTRRDCJOMITUFHWCLWXEIJKFPVHXMRWFUDQPIEBULLZSLJUYYNVUQNNBIAGPCIAPLMNNZDHRPGQWCXXGKVZKFCECSPFJVRAPLFEEYTAQHZTKWMGFQNZWUYIMEBQK");
    msg.comm_level = 207U;

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
    msg.setTimeStamp(0.629577652838);
    msg.setSource(18524U);
    msg.setSourceEntity(145U);
    msg.setDestination(36619U);
    msg.setDestinationEntity(184U);
    msg.type = 200U;
    msg.op = 108U;
    msg.request_id = 43699U;
    msg.plan_id.assign("OMNFSDQAGLYFUTZLFYKISBTAOTLTIVYWWKVAJGZVJHXAQVJQSUCGBZYHKTVSVERPXSMBAGLZXEJEYGWIPKNXZTZGZREGBNPKRDPCFDVDOVMYWBGWHQYLXQAODRNOZELKBJIJQGRDPMHKTPJSBKTIUVHSITEVULIHDOUFKZQPXAJCSYSXCNTGRBMFPJCUEYCUAMPNXAMWWQHFYRDLRXWA");
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("OXSSQPTUNVQIXBNFAFGASAOTHSJFMUBXXXRJVZLMJEJTNKTKQKNAWIDYXKLWJPGYCMRUYXLAIJPHBZLOIUHDREEECCUMWYFKYRUIMAXFKMVSZPDGQIZDKBVVPMZDWEZQCWCUAPXEISGBSYTSYNDRR");
    tmp_msg_0.param.assign("GPENTEDFKWHGUXKMTTNKPRTOKLJOMM");
    tmp_msg_0.value.assign("PCBMTCEOIQJLGHRYZDPVUKQBHCMTOEQQRPALMTHLXOUFWLVOWYDTJNPZEJOKEFGGBGLZFWJJGJECJWTXUKXGASRAXACFTNNURYQCVPWRHKGVNFMMIAIXLVXDFRNUVZPDDAJDVCSVZHK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RZTJWALLPDFJJYTNROVUBYIAVKHEEMCVCUPBUBQUKZBZSHESDXPRGXIFRSFQCINUVFSDVLCDPIMLYXUFVWKHNNQLBDQMDWTKKCXDXXCOZ");

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
    msg.setTimeStamp(0.447969748184);
    msg.setSource(31662U);
    msg.setSourceEntity(18U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(254U);
    msg.type = 231U;
    msg.op = 63U;
    msg.request_id = 54997U;
    msg.plan_id.assign("VRGSCQWPDKGNEGQXXFRXEEJBGHRBDHWEWVEATIURDCVPABSTKUAKZRKISNSKYZLBQGJNUDODPMJVYLPAXROFMMVIZCOLUNMLLJMYWINAFLZCRUXJTOYIDSDHHPITWQXJTBXQKJHMKCFBJYKDTJZAOWPHUSQFEJBWHNGDTSQKMPPXHFHFONEGYMOIVWPFVBLKQRCFVYEUCSUWZANVVCRGDMA");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.22906027628;
    tmp_msg_0.converg = 0.642807410989;
    tmp_msg_0.turbulence = 0.993506301337;
    tmp_msg_0.possimmon = 241U;
    tmp_msg_0.commmon = 171U;
    tmp_msg_0.convergmon = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WCBHTTQVCSSSYEQLJMQOGHPPITGLDLAWEXSAKEWGJISTICAZKXITZMQZZGGKMPSVYCMQZDFSHVOFSBFWNKLEHOKNUDKIRBURCBQXYGYEJPAAQJNXVWVFRLNGDDOUJAUVFUOIPEYXDUKNWZLMWRZNBLXEAPW");

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
    msg.setTimeStamp(0.495022843185);
    msg.setSource(7391U);
    msg.setSourceEntity(55U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(228U);
    msg.type = 132U;
    msg.op = 223U;
    msg.request_id = 56012U;
    msg.plan_id.assign("NADTSFKYUJUOEVACDFLXSNPGKFQJXCPTYWVAUYEXKVYBJLMNLCVSZJITWSERGWIEDDEIGJQHWMBRZKDCDYCXCHRPHPLFBYPOSOVTVSWJKAOEPRQRPQLQCBEPHHIWZ");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("WNIYHRVYLXVQHAJTCOWJZUSZFDHUDJKWRRQLTWQZADDZUREEVLIWENBYNMCNRHHXKTYGZFCSBMAXLUQPMOATJDVZOCVDMMPBRIFFSPGIIUONCFXYYNVOATKRDBDAUTXVIWCRFBHLGQKGHQGYKPMYIYULDOAAQGVKSWJZFNPCGPXSNSOBCMCWWVYNUIQOXMBPVSFDZHTJNEPKTQTFEHAJGPLHKXXRMJLOLSBURBGTGKEXWJECKEMJEF");
    tmp_msg_0.op = 158U;
    tmp_msg_0.sched_time = 0.964228567984;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BFEVOIHTKWKNBBNVLXBPEOMGFOUVQQJTHVJIPZIABHEQAYMGIEASSRLRMSWGSIQMCAYRMYFIJTRYMUMRRYETXOEKZFYDTPTNCYZUDXLXAHLSKUTANVXVCPFVBSOVPEPXMZJDLEQASJPWOFNXXKKUCFLCIHHEGGVKXQNCSZUIISZJDDQURKJT");

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
    msg.setTimeStamp(0.322804407686);
    msg.setSource(59352U);
    msg.setSourceEntity(69U);
    msg.setDestination(25429U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 10782U;
    msg.plan_size = 3581252160U;
    msg.change_time = 0.230186460894;
    msg.change_sid = 12369U;
    msg.change_sname.assign("QAASWKVZZVQDWITKOBUBMXUYFFRQEUNDRGPYHDQGQJAUHGXBVDOMRWCMNHCJHL");
    const char tmp_msg_0[] = {-41, -59, -72, -92, 14, 117, 30, -59, 30, 13, 63, -103, 87, -97, -113, 30, 44, 15, -23, 119, -55, 94, -110, 79, -50, 47, 13, 65, -94, -48, 17, 121, -24, 67, -37, -71, -63, -25, -37, -110, -57, 122, -121, -112, -22, -71, 9, 54, 113, -7, -11, -90, -113, -83, 30, -16, 79, -54, 43, -4, 7, 59, 57, -35, -50, -85, -3, -54, -45, -53, -35, -51, 1, -66, -111, -99, 86, 98};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JPTIYPCFYGPNVXRSAKREQCIXGCLKPKWWMVABJLZVZSPHSADSQDSIOXVQPTWTGITCBYYBMENCQYTDFFXEHAVTDEHUJNNAENZWJEQMANPCORPIULGGFKUZZROEJU");
    tmp_msg_1.plan_size = 36652U;
    tmp_msg_1.change_time = 0.0754658891476;
    tmp_msg_1.change_sid = 47804U;
    tmp_msg_1.change_sname.assign("RDJOWDGWCWQJIQTQTEGDZIWKJYEBARTBUAZUIYKZOZBGEQMPYPKGIMZAETWPFCWNPKBGKQOXWYIBAFMSNHE");
    const char tmp_tmp_msg_1_0[] = {-56, -19, 23, 123, 120, -52, 61, 101, -3, 103};
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
    msg.setTimeStamp(0.551252725588);
    msg.setSource(34231U);
    msg.setSourceEntity(101U);
    msg.setDestination(29822U);
    msg.setDestinationEntity(48U);
    msg.plan_count = 26691U;
    msg.plan_size = 1506706796U;
    msg.change_time = 0.959170757684;
    msg.change_sid = 15993U;
    msg.change_sname.assign("XAWTCCUPBOXQLXKPXGBOWRIOPTOORQZGELUNOSADSRGVZEXWSDRUYCICDHHPUSWMSNRUALIVCFLMFBILBVHEEMGYHZNUXYLKNDYCHWZNFBIVVQJTNZVGXJDCVLUOCMSHWPPYLMPKRMTGNGESJVSXAFDTIXVDAJJIZI");
    const char tmp_msg_0[] = {46, 68, 7, 91, -86, 109, -41, -48, 30, 29, -115, 45, 58, 90, -92, -43, 58, 3, -15, -20, -112, -4, -41, -104, 54, 30, -31, -112, -73, 110, -60, 51, 3, 22, 104, -78, -69, -69, -63, 70, -28, -8, -4, -96, -69, 43, 27, -91, -75, 93, 39, 12, -51, 1, -11, 109, -38, -47, 72, -52, -85, -114, -27, -66, -106, -71, 106};
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
    msg.setTimeStamp(0.196613395723);
    msg.setSource(24604U);
    msg.setSourceEntity(139U);
    msg.setDestination(27114U);
    msg.setDestinationEntity(19U);
    msg.plan_count = 36240U;
    msg.plan_size = 2416399191U;
    msg.change_time = 0.422038797329;
    msg.change_sid = 43484U;
    msg.change_sname.assign("PJSDBLGJCYLSOGFYYGQDKYZCZMVAHYFEX");
    const char tmp_msg_0[] = {20, 71, -43, 30, -100, 14, 125, -104, 119, 98, 82, -14, 100, -3, 46, -69, 19, -82, -32, 90, 45, -86, -124, 79, -15, 123, 91, 41, 11, -26, -112, 54, -10, 118, 36, -87, -51, 15, -123, 27, -75, -55, 46, -11, -121, 89, 105, -34, 58, -99, 95, 96, -119, 74, -31, -118, -41, 85, -89, -74, -67, -48, 25, -63, 88, 120, -12, -102, 30, -106, -9, 56, -120, -71, -114, 58, 2, -112, -99, 95, 42, -94, -66, -54, 14, -128, 3, -52, 37, -89, 20, 11, -92, -71, -42, 38, 87, -119, -94, -57, 95, 86, 45, 114, -21, 62, 26, 75, -125, -43, 42, -43, -110, 1, -39, -105, -22};
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
    msg.setTimeStamp(0.97444284567);
    msg.setSource(2602U);
    msg.setSourceEntity(86U);
    msg.setDestination(8059U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("YRUUTAXBJFBKOTWIEOHOXNGDMMUNEFEIZFRUJBGYEQKMLCFWWHPNUMPAVWUGZWEATYICKQIYVSTBCDINRQMZPDQAJSBHWOGTYDQOWROZHASXHPNTQGIZYARZHFILDMUXMRSOGVWHTMHSOYCFGLQRNKFZXEPKAGAPFPEVSQXBLKVIVVLWFXSKYB");
    msg.plan_size = 54414U;
    msg.change_time = 0.835156651338;
    msg.change_sid = 61387U;
    msg.change_sname.assign("WHTOXBOGOXZGKERRHAQYKEDVBJVPWSVKKHQZOFZDYIURITSXCGXQHKESFSILDYTDMIMFHWWEFDRAVWYNUCIBSWZMPFCAZQDYKODYEFEUJKMGNLNNLFSBJRYHQUDGNJBUSCLNKMZJZWJSUJBGMHFGOAVXOQXGTIBTIKVULDLPMEHPP");
    const char tmp_msg_0[] = {84, -56, -107, 83, 42, 32, -97, -9, -69, 71, -72, 81, 123, -20, -22, 120, 75, -35, -79, 61, 76, -83, -28, -113, -2, 5, 79, -119, 112, 65, 126, 77, 22, -24, -53, -6, -123, 70, 61, 121, -66, -7, -81, -50, -52, 44, 80, 6, -66, -73, 11, 94, 90, -90, 86, -71, 8, 31, 62, -50, -96, 112, -118, -127, -128, -30, -9, -4, 121, 57, 90, -99, 94, -31, -36, 53, 122, -62, -95, -117, -2, 2, -68, -110, -37, 116, 61, -94, 107, -64, 22, 76, -101, 49, -110, 85, -121, 83, 27, 3, -72, -14, 29, 19, -63, -100, -55, 53, 9, -113, 92, 66, 2, -79, 16, -98, 114, 90, 20, -92, 59, -79, -16, 122, 71, -118, 50, -40, 126, -79, -89, -118, 81, -55, 90, -78, 71, 37, -48, -23, 0, -35, 24, 73, -37, -99, -60, -102, 18, 125, 14, 31, -50, 122, -77, -85, 115, -120, -74, 65, -67, -23, -31, 124, 22, -39, 0, 84, -74, -71, -62, 97, 108, 102, 46, -84, 100, -11, 35, 28, -95, -56, 90, 62};
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
    msg.setTimeStamp(0.227731040644);
    msg.setSource(32186U);
    msg.setSourceEntity(58U);
    msg.setDestination(25024U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("INNDKDREHYCIZOIACTRYJVLQWOEUSOZMNBF");
    msg.plan_size = 43141U;
    msg.change_time = 0.294832353098;
    msg.change_sid = 65073U;
    msg.change_sname.assign("ZLLBFFPEIZPAWRHQYOAFVJGRDCQGYCSHXBXQHKNRWNPPUECRKTQEVYJRPKTDFDLVNJHZSEWDZRQSHVTOGTPIXBYHIDWUPDOADBOYMFBFFBRMSJLSBAKPUCLBJXNYVIAMNMWBWIGVRADCSJTQALBJZEURKHKUVTGEZYYQUEVIJTFLCCIZOAAZCHNSO");
    const char tmp_msg_0[] = {-86, -16, -85, 13, 64, 4, 4, 27, -70, -121, 109, 126, -119, 105, -36, -35, 65, -33, 5, 46, -42, 52, 20, -113, -83, -64, -48, -94, 89, 37, 30, -53, -51, -56, -81, 36, -101, 37, 42, -84, 78, -97, 120, 7, -44, 57, -46, -48, -25, -5, 30, -32, -107, 67, -7, -100, -32, 45, 44, -86, 81, -124, -88, -72, 53, -90, -111, 29, -104, 115, 49, 72, 30, -97, 112, -64, 71, 124, -10, -27, -42, -58, -93, -86, -100, 113, -55, 81, -2, 20, 118, -108, 71, -1, -109, 102, 121, -120, 45, 21, 98, 113, -38, -108, 105, -39, -50, 74, -58, 19, 54, -64, -46, 47, -41, -106, 93, 125, -127, 104, 101, 50, -110, 119, -15, 51, -57, -17, 25, -18, -30, 94, -5, 125, 12, -34, 104, 109, 84, -101, -25, 43, -105, -110, -84, -71, -73, 100, -26, -20, -45, -38, -5, 14, 31, -99, 2, 5, -43, 49, 67, -53, 125, -8, 110, -37, -19, 85, 38, -55, -3, -28, 47, 81, 104, 67, -84, 110, 56, 50, 76, 74, 68, -30, 13, -104, -50, 122, -105, -94, -64, 38, 16, 4, 92, -105, -99, 98, 90, -74, -106, 45, 39, 32, 117, 44, 48, 11, 12, -63, -43, -26, -109, 6, 71, -14, -101, -49, 9, 64, 38, -34, 55, -36, 45, 12, 73, 34, -53, 121, 6, 122, -7, -85, -25, -118, 52, -18, -101, 62};
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
    msg.setTimeStamp(0.256337339738);
    msg.setSource(130U);
    msg.setSourceEntity(52U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("SCCJRJTBWASIIBEUQCRPHVALHNAYSIIXUMSZWKTQXBWWDTGILVMX");
    msg.plan_size = 49885U;
    msg.change_time = 0.139092653969;
    msg.change_sid = 34438U;
    msg.change_sname.assign("FQRVPUPUNKCLLJGFKQEVRYWRBRTSSNVGVXAWKVGJAMVWTSWKBMXHOFOJEGZGRTWSXALVYNQLTLYCUKBIBGAAUEMQNLJUAPMIOZPCKIGDAHLSHTPSTHYCEKSJFZIJPVIONNCHZXIBHKZLNXSZTOERYTNDEPTXQQSVFIICZIYCWBEDWSNPDDLCUJFAYMXBOOJHDDXQWMRZLFOMBROAEJMDPUUYFQHBRVXMDIWGHEJYUNQWKGFYGEDR");
    const char tmp_msg_0[] = {7, -111, 108, -102, 106, 12, -113, -18, -126, 13, -87};
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
    msg.setTimeStamp(0.0677544820138);
    msg.setSource(61493U);
    msg.setSourceEntity(177U);
    msg.setDestination(65015U);
    msg.setDestinationEntity(52U);
    msg.type = 127U;
    msg.op = 12U;
    msg.request_id = 52895U;
    msg.plan_id.assign("DZFVXAPMQODTMILBCMRGBEQ");
    msg.flags = 16415U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 48013U;
    tmp_msg_0.sys_dst.assign("HJNJDIEOFBFXJYAGKBJIWSDXAGUGZCXNEGNTGFMXUBVBKYGZADCNKCHNILIMUNIHURFBCHZQOGLOLPESPZLDYSDOKQZSFFRVPQWWCVCSPETWISHENSREFBAEQVKNPPZIZWQWPOVWKBXMNMDMNBMMXSJYUDOROJXGXGAAYAHJHYTQPVPTAPBZMKWHFOBDKHLLULUEOVYGDLQSQJXTMRTRZCLTEURCYFMVIUEQVCAUIRRFKDTQRKJIWS");
    tmp_msg_0.flags = 189U;
    const char tmp_tmp_msg_0_0[] = {-7, 3, -45, 96, -85, 26, 66, -41, 99, -34, -28, -46, -68, 114, 71, 80, 65, -128, -4, -109, -78, 33, -100, 16, -121, 110, -79, 21, -41, 82, 11, -64, 125, -101, -109, 70, -29, -8, -59, -113, -1, -37, 12, 6, -67, 110, -123, -83, -15, -42, 18, 82, 105, -37, -107, 28, 45, -22, 77, 106, -44, -48, 76, 89, 97, -113, 76, -97, -17, -15, -60, 33, -94, -33, -124, -89, 33, 60, 36, 42, -87, -22, -63, 13, -99, -33, 13, 99, -20, 21, -112, -124, -124, -120, 125, 69, 0, -106, -78, 85, 15, 123, -97, -75, -68, -108, -54, -64, 31, 57, -107, 29, -105, 55, -44, -2, -25, 115, 80, -65, 2, 90, -90, -39, -115, 107, -91, 10, 71, 18, 77, -128, -106, -41, 96, -54, -68, 52, -78, 67, -42, -53, -115, -32, 24, 102, 117, 116, 86, 1, -28, -51, -74, 92, -115, 9, -50, -115, 99, 3, 42, -31, 67, 15, -118, 43, -121, 78, 40, -16, 56, 124, 44, -44, -57, -124, 52, 80, 107, 118};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TJZOBQPFAPAMLWRJIIZQLQZHZGXSFKBEDGQUNPOYZTYNWMWAGEWJGNHMEAVHNLWLCPWRXSFBJNTIHJOTMRPSQEPYCXYJDFUAUQM");

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
    msg.setTimeStamp(0.692213135008);
    msg.setSource(60644U);
    msg.setSourceEntity(191U);
    msg.setDestination(23041U);
    msg.setDestinationEntity(221U);
    msg.type = 130U;
    msg.op = 139U;
    msg.request_id = 9845U;
    msg.plan_id.assign("ETQPATTTMBRONYQLTUQQNNJOQLFBGKVTCAOGKAP");
    msg.flags = 50919U;
    IMC::AcousticPing tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KHLANRGWRGXHBNPNEARZUAKDTNSEYCVPYEFQFCKUBLVUTFGMWOBOIKSOSEEJVQRTRDIKSLFGXMJCZZDCFYNJMBMQYYQUTPQWFJDUEPVWNSLUDCIASCXBPSAUQVGJRONKMHGBZWTYJFMCGHSFDHIRZLXXVAHBLWXAHGIBFVVAZXUQHFQWPKRQAJEDRYJDPEKMUIYZLMSLTTVJWYNCHIOTTBBNSEPJEODRMGZUZDCLMXTYWZHIKGPNOVWIOX");

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
    msg.setTimeStamp(0.00276663628111);
    msg.setSource(27383U);
    msg.setSourceEntity(251U);
    msg.setDestination(13955U);
    msg.setDestinationEntity(55U);
    msg.type = 46U;
    msg.op = 178U;
    msg.request_id = 24069U;
    msg.plan_id.assign("VSSBZOXLVZCIJDLIRKPEYW");
    msg.flags = 47428U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 88U;
    tmp_msg_0.text.assign("PNIKMWQHMGARTEXIHVKYCMLSQIGRDGXFNGUJQXXMPKQSBCVOSWNSJYRLANTTVZPVIJDGBFSAINFAODGSWHYWQCZMOOADAGHROEATRXUNFMKWLCQXJVEOUYBTROMVXWZKHKGFPEUMGEWBMTSFEWPXYLZLBDOTTQCTYKDVCKEJAJCSBEIDGAFRKOOPUAVZZQENNNZJTRPDDZFUBYCSJYYRLUYWNQICXUHPHZICVBUSEBHJFHPIXJRDLLIU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WPJCYTFQEITRYYCP");

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
    msg.setTimeStamp(0.370858032679);
    msg.setSource(32776U);
    msg.setSourceEntity(121U);
    msg.setDestination(20628U);
    msg.setDestinationEntity(113U);
    msg.state = 126U;
    msg.plan_id.assign("BISASYDJRVJEUCMNFLPNHZIGLMDBVAGIKAQWBVTGDXMNMORZHXHFLXNFQLQMMALAGIGLCRKQUBJZANPPBWRKDTHSQUZBUYEEVEOSFOTEEYTSBSBMPWZTCNKXRUJWXSCFOKAMCIDLYXPGLQCJHEHCWOADUDXOIDKMWFGUSPSAJZGPNKHTEQXEVQNRDBYTPRZVVZRMSOGDEIFXHYLJRTYOXQHINYVFORIJUQTCJVU");
    msg.plan_eta = -211761685;
    msg.plan_progress = 0.607997788897;
    msg.man_id.assign("DAJXWGOQSXGVOEYZPMMRUZPHRFXLZCNAGIFEDCYGZCXVHDLAGMQVBWQHGXJRXOATPPLWDUBRGXYRYKFTIIBRSQZOSJJMSWCFKDAWNEXRPFUITIDUFLCIOGPHVYEJMECVEZW");
    msg.man_type = 64978U;
    msg.man_eta = -2094859154;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.48112021802);
    msg.setSource(32029U);
    msg.setSourceEntity(121U);
    msg.setDestination(62581U);
    msg.setDestinationEntity(44U);
    msg.state = 75U;
    msg.plan_id.assign("IWDEYOUIETMMWFZEQLYVNXRDUSKOYASNJFGVUTVHNBAJPRFHOTPSTUONMSEGHXYGAXRVBAKLBFRDNXGYEUKZFJTVTMDFICATKOXCQKBGRWWX");
    msg.plan_eta = -383204106;
    msg.plan_progress = 0.207891798486;
    msg.man_id.assign("YXZRCFLNDIXMITAVEGAGOKSSNEODZBRWWFEKYRQCLMQPNKWAKROVPEHQYFUARLCJEEYNBZXWKXGLEPOSYJXKADOFHDQSBTVYJMDSURVYGPTWTPBDTJSAKKEYJPETQA");
    msg.man_type = 49148U;
    msg.man_eta = 1471003505;
    msg.last_outcome = 193U;

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
    msg.setTimeStamp(0.984714254044);
    msg.setSource(26864U);
    msg.setSourceEntity(178U);
    msg.setDestination(29478U);
    msg.setDestinationEntity(55U);
    msg.state = 242U;
    msg.plan_id.assign("HJABETQCPFVAMPGBQPFMUUIQAFCBYFQWNJYDLQHLGZRLWDDOKGBPNAUSPXEUDCAQQYVYIIKESGSXMUBTLRVSMMDCEVEHZTIZLRLFEWBWHTDJDVHAYXKXUSKYXAWQGURRLJRIWJTNDTGPCYECJAIXOROYVKHZUVADSOZZOCKGJOZJVBNNUIPFXIPHHFJWLOMGCNOPOWVTJYELSOFMNBSTRUELWXTMIZRFHQNQBZSFZKEPVKIBSK");
    msg.plan_eta = 1981262764;
    msg.plan_progress = 0.915192807241;
    msg.man_id.assign("TIBXYHQSHKNTQXEJIFCROXFPXBRIXPPDJCQDMFGLQHIWROEDOHRQXAJNAZACCOKWDZYYSGLBUHZMJCTHHZVVEILOAJAVMTDWGPOTGNWYONRVXGLKAKHA");
    msg.man_type = 33622U;
    msg.man_eta = 1071598019;
    msg.last_outcome = 197U;

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
    msg.setTimeStamp(0.547833921006);
    msg.setSource(21531U);
    msg.setSourceEntity(191U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(201U);
    msg.name.assign("SPZMADVSVVJSTIHCVHYJQSNKYIOYDDEYECSLATFVZFXSWAXCKEZOAGJMIPSKGQQPVCPBD");
    msg.value.assign("KKIKGTVPSEUIRTPCGQYJBCPMZYLAASKPEWROQPBRWESJFLNWDQTCVFMIIHSUSZQZOGKYVMRTSTIGNGODJNUEBPLVDEEHWDABKSPMGCUFVXVYKCMXOVQDFPMOLNGCUXNWCMDJJHKYWLQAJNEGXUZUXJQHDUBOBSFOFPKBXZMTTRELNUOKEFDAQVLXXTNAXIHIZQOXYAHFTVZYASCWHEZRIABYWYLNZRHCDJHSCMLFHYJMRTZI");
    msg.type = 2U;
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
    msg.setTimeStamp(0.876947830785);
    msg.setSource(34138U);
    msg.setSourceEntity(243U);
    msg.setDestination(868U);
    msg.setDestinationEntity(76U);
    msg.name.assign("IWXQUNUKFIIROACAALUYMZLRUASQKECNREMCTSWQWQAPRNPWZBJVBOGLMXIYHZAGLJENXYHURZFBKUVNNORCYSLMEFDTMMKGEBUBXTERONDVTOIYHLGTOJDJPCJGQUQHOBBFHKNZDZSYVPFYTQEAHEWQTYISTBDGMLUZGMJIVKTFMPLAPJWOJKXHQMVOVWOVNCPFRFAZLIXSFHIDSQZKUWWYEBXCDY");
    msg.value.assign("XJGYDWFCODINUEZJSSEZGMAXQHSVQVDGWPIEKJUSZQTXNJBLFTAPZOFFTUZMRRVPAPQWUKHIXSYEGACHGCEBWMUOFUMILPPDDKTQREVOWACVDMRADGLCHHSCBMBKJIMKSSYCNUXOPLKXYVYBORGADPFTCNLXJDIQFNTLIREKRNNGHIXGKBSNWLACBKCXKJQMOFFYITPDHRSOQ");
    msg.type = 197U;
    msg.access = 79U;

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
    msg.setTimeStamp(0.709718897998);
    msg.setSource(17122U);
    msg.setSourceEntity(223U);
    msg.setDestination(60602U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ZHHHRGJROMMUDCCAPGMFUXACIWMFSLIQAWYJWOMIRAFLFMAEACYEPSWGUHJUMNYYTSDIXPZBQSYIEUWGHT");
    msg.value.assign("NPNYRVBZSZYMJSGBDRYKXHWNWAKARBINCVWRLCYZQOXKDLBWYCJBKXSKOOPLYIMAEJFJIIVDJXTIAFFFVAKFGQNZJYVGLEPQMHYSNHTERRKCVCYZCQA");
    msg.type = 196U;
    msg.access = 152U;

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
    msg.setTimeStamp(0.80899820241);
    msg.setSource(6739U);
    msg.setSourceEntity(200U);
    msg.setDestination(35007U);
    msg.setDestinationEntity(195U);
    msg.cmd = 88U;
    msg.op = 217U;
    msg.plan_id.assign("RKAQWWIWJODQTVGPQMSWEEANGXDUHBURMTEKOVCYKAPJQHSAMKLEOCZUZUKUFHTXMVLKFNFXDUPYJNIWNVPXBZELHSTBFJZCMBIJPPZHJGIVYYYDTSQWDRJXMXAISYEGXNBGKGRXETROIOCSLVUFVTHHHBDQRFWSIPMPQWUGRPQWYARCZYBZIJALSKLAKOFDEIJDOFJBCDFTMEZQSRBZNYBCANGPVWREDAVZTOLC");
    msg.params.assign("YXHOBYMHSLOSFKJISIDVGUSZTNEUSIUSIRUQLEJNQTAWIFTNRVXNPDFMTAOZKTYABLXFISRDGWMBSBRLEMFQRGYEKIKPQRACRZKPVSGTYGMMFOZCFVQKYDDHBVSPOMXHWAPEELZZVUWGVWWBJHMYNLADAZCHJUFPUXLJFQWRNRWYXKCUDGTUOCIJCCOBDOBBQKVXHECXWPXDKGOKMUXHCJLLJA");

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
    msg.setTimeStamp(0.606536081985);
    msg.setSource(34933U);
    msg.setSourceEntity(81U);
    msg.setDestination(10349U);
    msg.setDestinationEntity(170U);
    msg.cmd = 162U;
    msg.op = 247U;
    msg.plan_id.assign("CPEARZNDCZGEBVEOEIJFSLGOKZUDXYXQCOVMFVYSMDEDJALUDKAKTLTTXLPFMXQWIZOJNUFVLOBHRGJGNZAFJRJRWXZXIVSHIHJSMQNGPZAOWKBHWQGLPKJHUEIODDTBBRUCBNSQCLPYAFUBHYROGQTQBMYHETPCIJNYRYOTKMZIVKAQDUNLWUHZGJSGVRSFDNAMQKMCUVXMIWRABXTPFLNKSPKZFTYQYWOSPMHABYVXG");
    msg.params.assign("BQHQNJZDLMIOWNHIYGLCAZMJCPZURTDMKCWFSJIRUOEXKYGLGWXSBFHHOGZJIKXUIRHUQFXPPGFSSBVYJTVCFDUJSNIXXIFLEMYQEETFGZSSLJKATYBQNLFVMHNCCXVYQZOFPAMOCTYVNZSGMQTHHWCNAIDAEFXWP");

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
    msg.setTimeStamp(0.370197164736);
    msg.setSource(1630U);
    msg.setSourceEntity(213U);
    msg.setDestination(43099U);
    msg.setDestinationEntity(239U);
    msg.cmd = 12U;
    msg.op = 110U;
    msg.plan_id.assign("EIVVNCAVKHSCYJUFZABDBQTRMIQBWSCLTGPOHKPJSLVRKQVRIXOSUNFTBPFJJORNNNIHLCUHROXGGDZPMLOHRMJRMTAEINKDMEFPPSSSUSEDGXCPNXUCYGJDZCVEEIRVQOMQMPQAUVYDLIGEMTWBUTTLNTFLAZOTAXFWEOHXHHDJPSZENJQZFLABULGCWDBGQZUNAOFWXZYLMWGRPMWOQZXFDBYKZABYAWIXKUJCKYYSYFHCJXKGTDWVI");
    msg.params.assign("MFVDUIROJXZNFOTVVBEGEWDFAZHCKGQTLVAGRDJUZCKONTMGXMEKYJUOPOCFLNVABIWBZKAHXQNCOTCVILGROQFBHNSMSESZRLILYGXRNISXIXKXNSJAYYUPAQWGYQOIBXFKQ");

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
    msg.setTimeStamp(0.98554312183);
    msg.setSource(5729U);
    msg.setSourceEntity(126U);
    msg.setDestination(50401U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("IXODHTTGCKDFGAVERZEYDVXSHFBCKXGNJKDYCJPWSOOVVWSASIDSEALYCFIWTKBJJSDIFPBAMGYUQMZEMRNMNXOURAYFURYWQTWSFZLICACBDCQYGVETOXXJUOGTPWUNEUPCLZWPKJKNABFGABTUMLMFVLEOKAX");
    msg.op = 92U;
    msg.lat = 0.455307527307;
    msg.lon = 0.60255250018;
    msg.height = 0.509992897648;
    msg.x = 0.220596001947;
    msg.y = 0.0181490649519;
    msg.z = 0.763087542479;
    msg.phi = 0.121898859024;
    msg.theta = 0.58930039314;
    msg.psi = 0.153031042174;
    msg.vx = 0.905183599736;
    msg.vy = 0.417049776238;
    msg.vz = 0.335669607092;
    msg.p = 0.385825470977;
    msg.q = 0.0854748515693;
    msg.r = 0.811884164663;
    msg.svx = 0.271160932319;
    msg.svy = 0.136541855353;
    msg.svz = 0.187338417839;

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
    msg.setTimeStamp(0.397657720384);
    msg.setSource(58111U);
    msg.setSourceEntity(154U);
    msg.setDestination(26686U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("HPDPXCBTWYEDDHUIJTPKWIKNVUWIEXAAFDRCOPMRIGNZHTUNOLJRNOJYMXNLRWAAQFCHFRTYMEPSQKNPOEUEKUCRXTLEKJYQOMLWHEGBKSRBXZQBLDDBCKPMAQV");
    msg.op = 25U;
    msg.lat = 0.648029004222;
    msg.lon = 0.971311952083;
    msg.height = 0.831636948526;
    msg.x = 0.303207368132;
    msg.y = 0.0778199177636;
    msg.z = 0.0249685687348;
    msg.phi = 0.762570588868;
    msg.theta = 0.573851663741;
    msg.psi = 0.978754367512;
    msg.vx = 0.611448562784;
    msg.vy = 0.788695936921;
    msg.vz = 0.68968368361;
    msg.p = 0.962349288351;
    msg.q = 0.140471497939;
    msg.r = 0.504300247792;
    msg.svx = 0.720752811776;
    msg.svy = 0.239539770928;
    msg.svz = 0.480915267971;

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
    msg.setTimeStamp(0.410715759233);
    msg.setSource(48394U);
    msg.setSourceEntity(239U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("TUHWIYDNNXKTQWGBPUGUFNYEKEUCYORBDFDLJBUJHVIKFQKPKOOESYIJJKSPZAIHVQIVACWWMFUCNARONRXLKSDQXLFPWWZCMSSMRDQOSXOAJAUXZYPHTBCFYRHITZGYRYMRBJJYEJBCAQWEVODXALKESTIECUGDIRXXZDKURJVIFFNDMGAXTDLZOFENTXGWKCQMCHVLQVSOYEGPVHPQCZWVLUTMMIBWFNMETT");
    msg.op = 241U;
    msg.lat = 0.410284892501;
    msg.lon = 0.955286419535;
    msg.height = 0.628854586156;
    msg.x = 0.50354995235;
    msg.y = 0.58961779428;
    msg.z = 0.381433086755;
    msg.phi = 0.199473827556;
    msg.theta = 0.555443959463;
    msg.psi = 0.053715650728;
    msg.vx = 0.69753195452;
    msg.vy = 0.254438404973;
    msg.vz = 0.0487581846393;
    msg.p = 0.185756724424;
    msg.q = 0.227403581417;
    msg.r = 0.552573453865;
    msg.svx = 0.45324688148;
    msg.svy = 0.0680301962239;
    msg.svz = 0.618496762464;

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
    msg.setTimeStamp(0.362625392375);
    msg.setSource(18024U);
    msg.setSourceEntity(10U);
    msg.setDestination(32535U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.516619698817;
    msg.lon = 0.86997957878;
    msg.depth = 0.405234967211;
    msg.roll = 0.761232018779;
    msg.pitch = 0.447510732851;
    msg.yaw = 0.901574483038;
    msg.rcp_time = 0.840684039101;
    msg.sid.assign("HQSBAWIYJVBGTMMOYAUPFLVZNSOFNFXCEFLXFLRVVCUDEIRWMUJODCCEWDCSFYPYIZAYANQHBPEKCHZGZMUIFBPNXENMPASDMKKDBRWAOQVOOGXTIRZTJPXHHDGUFIWLVQAWYHIZTQYFESKLHBRJBJPPTFNEQKHVTOYWGTQZLSNLIZCJLQOZGNRSWWIHEYSBACMCRKULPSXUCOOSNYAQVDBWBXDTXREJUMJGKRV");
    msg.s_type = 53U;

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
    msg.setTimeStamp(0.455108405566);
    msg.setSource(38463U);
    msg.setSourceEntity(48U);
    msg.setDestination(29989U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.143092264334;
    msg.lon = 0.218439285905;
    msg.depth = 0.213924540628;
    msg.roll = 0.805960570813;
    msg.pitch = 0.391240228225;
    msg.yaw = 0.319984047802;
    msg.rcp_time = 0.186065869321;
    msg.sid.assign("FGZESGPXDAPKKQSIRMQITHYUFTUOKLKVGFKOUEIFYMYEEZJWOGJSIHZDIBA");
    msg.s_type = 207U;

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
    msg.setTimeStamp(0.619014050584);
    msg.setSource(35130U);
    msg.setSourceEntity(220U);
    msg.setDestination(483U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.953481611798;
    msg.lon = 0.875924934785;
    msg.depth = 0.677858164789;
    msg.roll = 0.620114320953;
    msg.pitch = 0.36670096036;
    msg.yaw = 0.842316265145;
    msg.rcp_time = 0.911311355873;
    msg.sid.assign("XYBUSQIRUCAMQXJWSGZITLJASZXFEGQCCHMIPXUZTRSVXEFBJHSTLWQDDIHLJNKUNWDKLOEVDQGQAFLUFANFCFNPCMVNBNAVWCOEPKWELQXRMFARRNGHHBVTJEYPEHHYIXYVXAFIWWBOZUEBZBWKYJOXLDLMAZYOTPVYVTDQGTGJSDSYZUMCWKKPKGGACYDTRJSKRODEVU");
    msg.s_type = 185U;

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
    msg.setTimeStamp(0.67992060476);
    msg.setSource(16531U);
    msg.setSourceEntity(158U);
    msg.setDestination(38108U);
    msg.setDestinationEntity(174U);
    msg.id.assign("ADGETSMQRWEGZJSFHSUEIDUVSXXNWOUSKCHJHIYBWFGFLAENYKMXCRJZJHTPTRMPFRJVSOKNSPHCKTDYYLDOXAPKLZPMBMOOANTDYBAOANEQUFPUWQVGEECOBYNIHFUMVULSFXPMZIFIDZGGCGXVBTBKVIQPSODCAQCJ");
    msg.sensor_class.assign("AQBVRYCHNBSKAUZSLXMVHFNPUHWXPUIIVDPYFCPBYBIIGFGTGINFGDQAEGMYPUIXIMUOAVWVDROUURWNQHENBKYNKDWAEPUZLQHMZSSTTBKWBIGTYJEZLVGNEERTCVDAJYVEJKLDAHTR");
    msg.lat = 0.627388266853;
    msg.lon = 0.998537855985;
    msg.alt = 0.915698706185;
    msg.heading = 0.0456364606525;
    msg.data.assign("DUPFXDKKEHBUPFOJGLNVUPXEBYKJGMOFMPTCOSVHBIIEACCVGHOFYCSRMEWECNEZTTWMHD");

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
    msg.setTimeStamp(0.263251984852);
    msg.setSource(55167U);
    msg.setSourceEntity(101U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(27U);
    msg.id.assign("UXMGTWOOYZTPEPYSGSMMHUDCRWBFQKCPUCEINAPYGVPZCRKVQUFCCGOFZICPMTFVQBJGAIHKDPUZMGRASHCAMICSRETFODLEMHIOSWEYBPAIVDQADKYUXBNYJWAXLKAYQFVODBNQEKDNQGXHWLVOCZHTBGHZKJNFBODRRAZRSJFOTVZEKJMGERQASYVPLVXTJULHUHXMJDULNWTIRNXSDJVWFBJJPMIWZW");
    msg.sensor_class.assign("XQFLGGHWHDDGAORVONQPNBOCWUNWDMSHPAVWTOJZMQXOJQGWXCXXEGFEWEJKDHOFJIFGBAUBPUXHLXUFZUSCRADNDTYMJMCCBNDGMVIMEWJTJVKN");
    msg.lat = 0.145084594184;
    msg.lon = 0.0905195239737;
    msg.alt = 0.683197691977;
    msg.heading = 0.255920021401;
    msg.data.assign("XDAARCBKDYXFOVNQJHZLLGQJSHYNWSIVECTLQGKQRCNWVJZZUSJYHKOKPSOEJULKNBEUQ");

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
    msg.setTimeStamp(0.406413104764);
    msg.setSource(21477U);
    msg.setSourceEntity(110U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(34U);
    msg.id.assign("GHZONVUYBJENINFGJZULPBNXLBZWBPFPIDECIPGSUESKCFYWWMHDHYXDBAZKQBEYOTWQNZTPVPCWULWAQQTJUNLVEKZBVLFARKJQYSJGOOTOZJFKSJRCSSFHMUANWUDNHWTZZGCJPKEEEIOCDLLKERRMMM");
    msg.sensor_class.assign("KWXQAIAOEGRLSQSPVYLSDXOXBRYKWMFYWLJAYPUNOZRLMVKDFHYLSCVSWNXWTVMSVCSEZRRUANGWGXUVSAPFMOHIAITLKTZJGEPQOYUUPBNZBTMJGZHQOBTRHBZKAWEANODDJEADEBMHDTBICKCTTGGIFRTLLCUPNEUCXRJPDFVFCJMXBWJDCNHIQFFNTG");
    msg.lat = 0.489134412091;
    msg.lon = 0.887405209511;
    msg.alt = 0.323076433068;
    msg.heading = 0.494505948377;
    msg.data.assign("FGYWHHKNCHIEDRXHZWAKFOEAUZOKUBBPYCGSMJZZWUVVRAXUQTLHZEIJJSNEMNWMUMVMBCSKSFMUAYEAOXTKYZDYJCJSSTQANOXHMRTGWGNWRSRETYTGWTQALIZQGRQVKRP");

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
    msg.setTimeStamp(0.743756753509);
    msg.setSource(58853U);
    msg.setSourceEntity(1U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(227U);
    msg.id.assign("ACWVVRBHGSYPKPDNXSCXBN");

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
    msg.setTimeStamp(0.0172361809912);
    msg.setSource(18519U);
    msg.setSourceEntity(76U);
    msg.setDestination(25335U);
    msg.setDestinationEntity(157U);
    msg.id.assign("SHPQMBEOTWOTQY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QBLPQKYPRZSXJXFCJLKBMEZZKFDXUFPALZMACMTTTVJJCCEFWARNNGMDIEIHMQHRNUAXGSDXOKORYHQVYKSPPZDXDGUPDDBBRDHQANLQEITSQVJPXSWUOAKYIPUJGYODNJCHPIOHWLNKGLTWMWKCRMGETTSRGAOFAFHBWXNYHAVUJRGVMIJPNWVLCGVBLZCLZRHKYKFFIUZIS");
    tmp_msg_0.feature_type = 62U;
    tmp_msg_0.rgb_red = 144U;
    tmp_msg_0.rgb_green = 137U;
    tmp_msg_0.rgb_blue = 174U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.284153668852;
    tmp_tmp_msg_0_0.lon = 0.985461737226;
    tmp_tmp_msg_0_0.alt = 0.973839798376;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.551343719512);
    msg.setSource(23436U);
    msg.setSourceEntity(8U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(48U);
    msg.id.assign("IYMFTBOGCHXSLYOXQEBHZGNMAPZEMJRUNMQXRLGGXABHFNFQXIRCMCLEYUDOYSBZUVLUMOWKARMAENXTDAOJSFYTEDQVWTZFCHVOLXLXSBNLHQIRCBJVHTEEPUEZIJTS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IHMKDHVEEEBVCIDLXTQORMMPCZSYJZNGKQTKVRHGPXMINYOYXMHQWTYARVNHUHDFLUTWBRWOYNUELWSESPVAUKJOAZSGSDFQHRQWXOCDNAFWABYIIRQBEXSJSFSNGNUKJAAUUNIJCBTJZWGKYBCFIURVXWFSYHBEH");
    tmp_msg_0.feature_type = 197U;
    tmp_msg_0.rgb_red = 148U;
    tmp_msg_0.rgb_green = 205U;
    tmp_msg_0.rgb_blue = 220U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.950506604311;
    tmp_tmp_msg_0_0.lon = 0.799967571361;
    tmp_tmp_msg_0_0.alt = 0.207824968967;
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
    msg.setTimeStamp(0.6595853545);
    msg.setSource(16156U);
    msg.setSourceEntity(104U);
    msg.setDestination(30624U);
    msg.setDestinationEntity(227U);
    msg.id.assign("MFYZCMNVSKBXTCUASBKBXWGSIHCXASBEVQODYLHCMIWEUNRTNYHTNZEBXUJDACESZIVIAZXMTFGPTK");
    msg.feature_type = 98U;
    msg.rgb_red = 77U;
    msg.rgb_green = 59U;
    msg.rgb_blue = 254U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.198515762385;
    tmp_msg_0.lon = 0.743290002998;
    tmp_msg_0.alt = 0.345537619989;
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
    msg.setTimeStamp(0.0642467522196);
    msg.setSource(24870U);
    msg.setSourceEntity(57U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(149U);
    msg.id.assign("HSJXUJZWWLDHQTFUDGPHXZNSJEIGBGYCWQWIJFXGNNVOHCNPGAOYLDVQACMTKCEXVAWOZLCEOYBB");
    msg.feature_type = 240U;
    msg.rgb_red = 165U;
    msg.rgb_green = 25U;
    msg.rgb_blue = 185U;

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
    msg.setTimeStamp(0.396746794427);
    msg.setSource(17009U);
    msg.setSourceEntity(33U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(157U);
    msg.id.assign("XCKNESLJEBENIRPTZCSRDTIFBHNEJHUVJOMLMVBKOVQMPJOGXREQAEUAQUCBSIZUZZWGPPYVAOFWCGMBQLTZCJKNMN");
    msg.feature_type = 242U;
    msg.rgb_red = 168U;
    msg.rgb_green = 109U;
    msg.rgb_blue = 180U;

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
    msg.setTimeStamp(0.742859494487);
    msg.setSource(30437U);
    msg.setSourceEntity(110U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.931417554717;
    msg.lon = 0.711881855282;
    msg.alt = 0.240352357681;

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
    msg.setTimeStamp(0.871647060808);
    msg.setSource(56089U);
    msg.setSourceEntity(87U);
    msg.setDestination(40096U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.651469231424;
    msg.lon = 0.48368613604;
    msg.alt = 0.773199129467;

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
    msg.setTimeStamp(0.0559066630171);
    msg.setSource(59339U);
    msg.setSourceEntity(237U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.584295009171;
    msg.lon = 0.425188538776;
    msg.alt = 0.19821449457;

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
    msg.setTimeStamp(0.666735456918);
    msg.setSource(32933U);
    msg.setSourceEntity(103U);
    msg.setDestination(62503U);
    msg.setDestinationEntity(162U);
    msg.type = 56U;
    msg.id.assign("URVHFWQHYVOKMWVSTZELTHGYZJGQTJFWGNWJOMVOBBAPIMCNNYHTFPOOYCJRSLBELRGRNKCSCDYPGGXAVPBAEAQDARZQBQFWKURSXSVXJXGMCMOET");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.776247573882;
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
    msg.setTimeStamp(0.433693949735);
    msg.setSource(18039U);
    msg.setSourceEntity(63U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(21U);
    msg.type = 84U;
    msg.id.assign("FCRVAZPOFDEEKFEWKCSDBJVQLXLYWUABNCLKOXEYJQJIMJZMWFJIKGEWVMARFAAHZHSBYZWSDVUOVTYRJGRKDIALRCXOUCGLWDXVOGUUAEHANCITNBXJRGOTMYMKTWHIZS");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 206U;
    tmp_msg_0.time_remain = 0.329313082282;
    tmp_msg_0.sched_time = 0.461534926034;
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
    msg.setTimeStamp(0.805656413795);
    msg.setSource(24512U);
    msg.setSourceEntity(166U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(212U);
    msg.type = 189U;
    msg.id.assign("FAWQOASCSUWVBTSHBEKCJQDWLJSSDGEYHNDNFFDUMGLOUMJMUFYYZBJRAKWZEFRZLYNVPHLYWQVHMCRCORADQORXHJTEGGYAQKOQUQFHXDSVTWIRRPRUZGITEXPVZZHGZWVXYCTJWHPOVTDJMJPWMZITXFHCXNIAKAVUUTQG");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 54457U;
    tmp_msg_0.flags = 178U;
    tmp_msg_0.lat = 0.372465531847;
    tmp_msg_0.lon = 0.466678246702;
    tmp_msg_0.start_z = 0.521982584047;
    tmp_msg_0.start_z_units = 79U;
    tmp_msg_0.end_z = 0.337675050104;
    tmp_msg_0.end_z_units = 97U;
    tmp_msg_0.radius = 0.179514803619;
    tmp_msg_0.speed = 0.69755877674;
    tmp_msg_0.speed_units = 233U;
    tmp_msg_0.custom.assign("BKFIPGLVKFCJ");
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
    msg.setTimeStamp(0.24346758188);
    msg.setSource(34286U);
    msg.setSourceEntity(125U);
    msg.setDestination(12407U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("KLMPEQJRIFVTYJDCQHMWRAWIWCQHAEDKYDOMEPLPUQXFTCZMRABHNYZUVSFYUQASEXSPTSLKGFLCOPENSIQDBUUMGXKSLSHXBNOCCGWTUZGLNTZFIYHZFXAVWYXQQOEUVJPXAWZNVZURYBIVHDKOTUIDGOOZWGIIRDRETYLNAJRMPRDHPJLKRMAXOILWEMNYJZJGBJSEGLFETXWSJWKKNORXGBHNQBTCPSBAMCJKAPVIBYNOUTCVHF");

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
    msg.setTimeStamp(0.00262551772579);
    msg.setSource(29015U);
    msg.setSourceEntity(79U);
    msg.setDestination(28760U);
    msg.setDestinationEntity(87U);
    msg.localname.assign("MPJIYSIOATCSEZXNVJEQZZAFSCLSQHJBKDQWRDHQGGNYFIMBDVHDXOOPDKTFDJ");

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
    msg.setTimeStamp(0.164530784019);
    msg.setSource(60959U);
    msg.setSourceEntity(158U);
    msg.setDestination(51532U);
    msg.setDestinationEntity(153U);
    msg.localname.assign("MRRLOZSZPRAVKATIBQVGVVCCASWXDNMMVVZHCPXJWASGUURBSLJRSNEYDHWKVPKNHBREMHUBWQPYLMPIXJTUCHVUZOWJKAGIXEAKFTFQAIYICDKE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TSTLHTNSUXUFNVAWFKRXINTCHZQFFLHBXZAGPDAWVCKIPNKXYTHELJYIJEEUEQDJSQYOHPGOFHJJAXKZHKCMTPLPCZQGUIRKMVFNJPXECUTOOTWPLVSPDGXYGHLEZVVWQYQRMDNMJHIGONOYSDZQZXVDLECTQADZBZKBLMJLXOBIYDFKSBPWCESGZFEHSYRIKDRN");
    tmp_msg_0.sys_type = 219U;
    tmp_msg_0.owner = 6601U;
    tmp_msg_0.lat = 0.141210730247;
    tmp_msg_0.lon = 0.68594785767;
    tmp_msg_0.height = 0.0843076954441;
    tmp_msg_0.services.assign("FAVNTCHBETMGBOIZSVNPGUMFKRXJGBFDBFEIKCNQKDYHDECRKWFUNYNMAMVSTZDPQXBDXRPGXMPLQMDCMXUUPFKWLVCBNLFEXULQRG");
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
    msg.setTimeStamp(0.59086736302);
    msg.setSource(60206U);
    msg.setSourceEntity(217U);
    msg.setDestination(31600U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("AKTCAPTMNPNSMVDPCEULRXRVMVPBFWQBTYMBVXTJHFDUUUWMTJULSODDEITZPZ");
    msg.predicate.assign("ZMOSUQRQSNGRTTIJEOIMXABXTPJGPKKNAZFSHDAITTPIRSYJVGLSMWJOJGBQEREXQVGPYKVGWWH");
    msg.attributes.assign("LNGWKPRMSVNNCUFNHBDMNJARBVCZOAUYKMUBJQVPYXHIGNAGXAUBDWQFRNTESATYPTEQTETLJZLLIFBRESTICCHIWIALXRBSVRSPWMZBGMEFBLEQZXJLKGD");

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
    msg.setTimeStamp(0.0874304328748);
    msg.setSource(36355U);
    msg.setSourceEntity(116U);
    msg.setDestination(56952U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("KFYNNZONBVCIWJGTDGCJEFVBPNBQDZAKMSIOEJZPASRJMRWVSLGWTSQDQUDIXQNUMSXFLOKEOWBHRBJEQGGUYTJMTFBBZL");
    msg.predicate.assign("BDBJYHITZBPOCUORGHDKIIRCXVWLAYSYGACMMUWZBWCIJMNUQTFNFSWYXAMIOIDQXVTONXZYFLDALMNRQMEQDHXJWQWRCPTLFLKZKTHCERSLMOYXKELDOJAZHOQZNHEPBEPVDXKKPLSYGPUKNUIDQGGVPHXEVTTWZVGGUALJWFANFNSBRVITSUCWIQKNBGOXVUDRCOSJOTGFVTRYWHFMANBZAUSUFRPQ");
    msg.attributes.assign("WGPAYZDWBDPWQPXWJEMEBZTEKNVAXRKFQCSVWQRRQXR");

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
    msg.setTimeStamp(0.675757802237);
    msg.setSource(931U);
    msg.setSourceEntity(206U);
    msg.setDestination(25129U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("CHHTXJFXCAOVGYIDMZXSSVMNBBIQQPHFRRRMWZFZUPRDMZYJXNECGRCZQXNCWRDRGLLZIHFUYBRFEVBELYKJAHSVZDHEGPNWYJJWLAWBOYBQGHJOODTK");
    msg.predicate.assign("SKPAOSQAXGCOMHJGZEBUQCMOFDRFYCINZECBHFNKKUIOFEQIFBKAAIJFTMJBVQNLMGYPDTTRWRLVGRRDHNLJYNFQWNJBGXFJDTHEYEVNUVJBWVOSCLBQZHIUEEBHSWMLSNTJAOZRKTRSOFLWBYRKGMYEGELDVPPYDXFHUYKKUPZSI");
    msg.attributes.assign("QKUYEJFBUSKLCDQMCWIXPYTMBKSDCIZBSGGHYGFNVMUUJZZQNJDWBAOUGVWOYPSOOEHQRQBIRDPARPZTMTFFHYKKLLAXEJZVMVXTCEAJPJWGONBVHXXKBCDKISKVRMVERWCCZORGGVPCAYHG");

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
    msg.setTimeStamp(0.564079731566);
    msg.setSource(4843U);
    msg.setSourceEntity(86U);
    msg.setDestination(55950U);
    msg.setDestinationEntity(47U);
    msg.command = 111U;
    msg.goal_id.assign("VAMGZLRUDEHDJSZFYAEZTZYQBIKNASVUWTXJPWRWBCRLNHYYFFPEGGZUSVEJXFNKCRSANNDADLAZJOTOTQFIPNFBXHUEIMLGCYUPOZQLPBKIHVABLGFXYQMYIHQRWTXBOUXMGEOGWJACBBEAVLCCVJMMROIIYKSPTVJZJKMWTNSMWUFPHDBSSOJ");
    msg.goal_xml.assign("WKMJWWPRADWYYJLYZEOUDZBPJKHROUZOPTTAEPGTXYXBDFBGJCYJDVXOWOQWXWNDVJENMEUKRALPTZPQLRFSIKCRTKMYASYCEVTB");

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
    msg.setTimeStamp(0.145888929952);
    msg.setSource(8817U);
    msg.setSourceEntity(2U);
    msg.setDestination(55410U);
    msg.setDestinationEntity(183U);
    msg.command = 186U;
    msg.goal_id.assign("DHZACGSUAYQVUJBLKMSWAPZIKEVBZFKPRUZLSARLTHCBAGWNHJJODEPLTJAGHUODCMBJKZCTWRSQFDTGOJETLBQTKNDKIF");
    msg.goal_xml.assign("WTGTWFECHLXNVOJLQHIKUFZCXLYFIWVGRYUAPTSHDFZSMNEXOQPYVYTYZKJKCQIORMRKFJINRGPLLDPLWEBGYFDAPHQBLDNPIYVVZOAEHNFQRIXVSNMGMBKMUQIS");

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
    msg.setTimeStamp(0.128542189908);
    msg.setSource(14826U);
    msg.setSourceEntity(149U);
    msg.setDestination(42351U);
    msg.setDestinationEntity(71U);
    msg.command = 245U;
    msg.goal_id.assign("YOCORCQBAKWVSBAPNHQXINQRCBSTBDESFRJOPDZMKTDRDYCCJEMLGXNWCEWUYXEOUGUHXPWEPSLBEDOTPTEUZBUBJCMQNZNXCDY");
    msg.goal_xml.assign("MIHZFHJWFDIJFXKDZDXECVSEMNUZWVSVVRQPTSRBRZFGCJJOCODGFQOYYVWEQZXTVPYWHQTPCPWHCOCGILJZKTILMOWYUUKBNAEGKAYXGRERDKQBTXZMJSTATPVHIKELBAXGNHMVUSALICEDMIEMOUNWLMPCUQADXKJLHFMFRLAVQPBNJGZDGHUXFJWNBCBLTBGSROYAOSRXTB");

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
    msg.setTimeStamp(0.671024673024);
    msg.setSource(58297U);
    msg.setSourceEntity(102U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(176U);
    msg.op = 253U;
    msg.goal_id.assign("SXXOVINPELHLGTWQSUTPFGGRFLWCXZLO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VRBVBAUOHTQCATFZDNTDLABHOHIXTABCIGEUMNHTXQCEMYOXCRKGNODQYUXJZUNQDAHHBWUDWYJOXJNJZYPAKLLCRMSRRWVYZQQGLNPSFUMRLWTPTZQDGKWTWCLCYRKBJHOKLMEBFEGMFKCAFIVOSV");
    tmp_msg_0.predicate.assign("XENPBIEMVQBPFSJNXKTZTVOAUQWFAIGPCHDMPSACWXLOCIERCXUSNWSVOYVLUFMYGJJHLODVHTAHTMZSMEREEKKDUNRWJJSDGQMGHZKNZOPQTDGNAWFYUHEST");
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
    msg.setTimeStamp(0.360338768268);
    msg.setSource(31089U);
    msg.setSourceEntity(123U);
    msg.setDestination(44699U);
    msg.setDestinationEntity(226U);
    msg.op = 28U;
    msg.goal_id.assign("WTJRNONOOFPXJVGRVHEVXDJNADTXRCVTNONIAQWHMQOIDCUHJGYWLBZMJANGSVAFZKKTIKYLUMLPTBHYKVBDAEJYFIPXBDWCIWMMUWGAMSGMIPMCLTTEQVJWEWABXIQSJEKIZLOQVUFQZUNTKCFSFQAIXRSFOBGCNFPPASRB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IDYDQKLEFZRNNVIPBHDVGXSBQIFRCCPOYYWAIMBRBOKZYURFIPPREYNHIQMSLSTKAZXWGPVZDKXJXKQGCXKOJXVULNKBRDVSFARVWZFOAOXIMSHIKJFAMUTPOCS");
    tmp_msg_0.predicate.assign("BDNOHGLCYQBCFENAIOGDHYIWVWRBKGQYSDBGTJOZLITYWXZPNTEECQBYHUBJREAORANKGDCOHPXMEDJHFWLQIXWUTZXXWPARROPQDSOISHNTSATUUDCGOGTHBZYHJZWAVLMRAFSEJWCUFPYLUVXKBYNWTXLKCSJZUENIPBYKQEAIANYSXZOHJZPFNBCFKIIRQRMEMQJKOWHRGDFQFV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QVQJRGGYHWWNDMAIUDAIZOPBYKADCELMVWQEUKGHHRJLURNNTGHPGHHDSUANJTQAXPFOJSSVVWYICASQLEJJVCFKCBSRPTLSOAVRMWGYXCIXYFYZTSGHPONNRYSZTVNQOCEOBHBFWICMZMKZRFZBRJHYZAMFMBRNCWYXRMKTENJEGNLGPJ");
    tmp_tmp_msg_0_0.attr_type = 143U;
    tmp_tmp_msg_0_0.min.assign("VDVWKBSGRODDCUOAVJEODNWHYBIPYFMFAVKHTEBUKZGXILYFRGGN");
    tmp_tmp_msg_0_0.max.assign("BXDYMHIGYOAUZLGAQTSWGULEJPHPVQOWTVBWKSYFTNMBHMNBHVZOLNXFOGQPPJETZGXHPQLNJSKHNNAUXXGISMJYFAJENCFILEZKDOUKIFAMYWWXWMVLQQZRKSIOBJJRPYFJUAYPAYLBPIXQHTWRXTFDXEVIZBUDVBCSMNAESOLRCCFTTVJYQVEZBEWBDRQEKTPZWTWRVIUCRHUKCCVNRDEGZLYNGXSAUHFROKSDDRHPLC");
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
    msg.setTimeStamp(0.0435492988526);
    msg.setSource(55005U);
    msg.setSourceEntity(169U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(183U);
    msg.op = 16U;
    msg.goal_id.assign("IGHNOBWMHBYOACQEDTFLIQBPEYBQXUVYLTNJPLYTVWZFSOJCJRKWDWTVXKQKWMOJXKCVALDENZXEZEANFKYRTKNOFSSUNCZJRZJUVIIDENCCDRQGIARDLCEWGFLMPRSGHQJHKMXTYWNFAKEVSXYBZOPRMALHFHZUMQZDHXCUKEPFODCBHXYAMYGBGKUOBVPPYEIQJOSFDIXW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TCYIOPSBLJTRLGBSHHGGQKMDXVKPVPWPETBJHGDCJNTSRPYVWFAZPOMCUOYPDMTVNMHBNYWTYAWJSBTAQNIRLQEVXSKRFOQU");
    tmp_msg_0.predicate.assign("MBLLUMUSEDWSJIBDKLQEFNHLYQHHEKZYNTFBZZEMHACGXETLCVQTVWGZPOCCLAWYKSUHIXBKVJRTRSCJJERXJFPSWHHAHOZKFVTPRYUWSIURORXZABVXGCZQTGKAFCNFVJYMBUGYIOGOOEJIJTQPSMYDLB");
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
    msg.setTimeStamp(0.336435233401);
    msg.setSource(39787U);
    msg.setSourceEntity(99U);
    msg.setDestination(18943U);
    msg.setDestinationEntity(190U);
    msg.name.assign("LJMDVPCTVTZZHURYHHKDPHVIKFHKLUWGTCFACBNKRXCKUASGILYXOSFORUBQDVUBVLTRZYJAHERWWJEMQQCVALGKVJYQDXCYMVZMGJWXLBZIPUZYNMEEWGGFTCZIOMNSWLYKXNDTFCNAGPLLOBFBUABEJDHXYERIRYDMLQQGRDSJNSEPSVBXBMUMQRNOBOAHPISGSOYTCOUJAEPFJAWSZSIT");
    msg.attr_type = 79U;
    msg.min.assign("PYVEAPIWLXTDHDLHKQGNTACJLDRJEBFZCRCSJCVTADRHQDZRMBSLYJUWWEDBTESZIUFJFUYQZUASAACBMYGQHVPSCOILIMPWMQYHVSWESZTOIXDRKZRUNRPBAOJOUIS");
    msg.max.assign("LISNDKOZBYPOEKXGTRWGNRFXNVHLWEOUIRKVPVPJSNXJNXZXHHIUFBWQOPQRQAETUDUJSDVYYQDWUGEILIFXLFCLYEPAVMHPKOISPQZWGUNAXIHDKUADYZPBRGYTFMHDLLQVWNCMZKFLTMAFUNKHJWOCVTQQMACEBAJFJSYVUJCXWMGCG");

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
    msg.setTimeStamp(0.252750590357);
    msg.setSource(20452U);
    msg.setSourceEntity(191U);
    msg.setDestination(16479U);
    msg.setDestinationEntity(37U);
    msg.name.assign("VETBJBFXXLDTWZWBXRGH");
    msg.attr_type = 28U;
    msg.min.assign("KCDYPTWTFWHUEKTSGIMEXWAILUGZDQKTRKHWIOVNPQFEAFGLDWLZCIGXYBGZMJIVJKTXNOQIVRSNJHXZGXUYDRUVFKAC");
    msg.max.assign("LEVZEMYLOTCGXXOWOFKMBYXNZQJMFDHHNYQNPSNZQWPZWBYBVGODCCAYYMGPTHRMXNTWPDIRQDHDLRFAPOCNWKDQGSYTLJNLKUYZFTDJXEIJHFAXGMFBCFLNEGJSLAKWTPQKEMSM");

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
    msg.setTimeStamp(0.609771900407);
    msg.setSource(5378U);
    msg.setSourceEntity(68U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(58U);
    msg.name.assign("NFMDXXLVHYECEQKNSUNJAFZBGYHLXPXNFEVKJAQPGCEWQNUCWTZDLIIDIVXTBEDQOYYYULZYJORGZWITREGHDHUFR");
    msg.attr_type = 139U;
    msg.min.assign("MLEINHVDVEWBZUMVUNRKRQFJRTCUMOASYKLHSQNXWOAXPCCILWHCWAQEXESOEBUVDALQZMYYMTUVAHMDBPCTXVBZZHJRTQCABWMOMIOZIHPIZUPTZIIOPGQHSDAGEEYRKFTNNAXKAK");
    msg.max.assign("UHPBLBMGTLFNHNXJQKWIZAVEWWMMRYYITYLWFBNENKWRQFDHWUEETHRLKQOWAGNVIZTDCXQRVSEUOSIWYPAVCDNZOKHISDPGKYUXKAFORUIHJPQCZQLYYOQAGRMTJULVWRGPJFCSYLZAYVJRTBRSGSHGMIQDKBXEIBRXFZAOVUQFLTXFMTXBMFKPJGUBOTOXSZPEXBGSGNEFAWHCCJUMKISEZOZTYPVSADEA");

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
    msg.setTimeStamp(0.566562900267);
    msg.setSource(9403U);
    msg.setSourceEntity(241U);
    msg.setDestination(144U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("FFMFEKTTBKZSVJIZOOJASJCJKJPBFPZYUEUTHJUWZLGHLIKBUSIROYMKHIPVITCAHWAOQQFCAPSMMWAWSYGEWECHEYNELNAMDQPHKU");
    msg.predicate.assign("SSPKJNNBRFLACQUJQTIUFYBXRBFZUMUKRDCGAOWATDTAHZKNFPLMYMCWZMZLWTYIUIMZZYVHDZRFXPNSASBNTMFELHTXCQBUIBWRQOCLHSJBDVNQXPHGUVDIEJLAADYAATGJPCQKWEFSRLCEBHIZXXXSGUZVWOBGIKXXGFWVYWSJODQLUNGROIFDYWEQOGPMALGMSTDJJOCGRRPMYVPWNUEQSKKOO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SFKIAMNTAWSSBBYMTOFLJYHZZPWBSSFPNJBGGPETNILGDNXXKVRHRKOYEQKQDVFECYUMHROKQRFMPQSLUJOLUOCXHLFQBJZYLIQOLPZOMKJGHXBNAGZKVVDLSPCHXCEDTGIQACFJVCAOXDHIUORCEXYDPRYWHJUPAAK");
    tmp_msg_0.attr_type = 178U;
    tmp_msg_0.min.assign("KKGRILHGPYWFIWFSYPEUSSME");
    tmp_msg_0.max.assign("JIAFBQFIUSFBKOUNKJEOLOMGVLARIRJJGEAEHHTRZLFNGEZCHYQMCDWOJNUBLVLBYRVWWVPIVXZJCVDESTWQZZAQTCTSCPSALHMODQAACYESBQZFPMPQOFKNKNSWHUJXKOPJXLDUXZVUSWLHNSTGFFMOSHREXXHBOGEAXAYUNDKUTDBJPYUIPQ");
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
    msg.setTimeStamp(0.561340489371);
    msg.setSource(5719U);
    msg.setSourceEntity(147U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("NQDFGZMZWWHQXZDSUPOQWOCAOKJEDOBJLGNYYQWPRYDLIUIXZIGCEGZLVTHUQPLZUZTSVNNYMZDETSJXJHIWBWMTKTSTEYBCOWDVYSMSEKDUHHPVVQYRUTVKVKPXIRFOLNDDMKFNUNUQHFRMFMOFHUITAFBWSAEFKBJNNAFJVIUKLBCCWRSTGLCJJVCQPTRRXYENQOCPRMHDYHXGLAXECCGAZKVAX");
    msg.predicate.assign("WEEZTXQNZMAAACTAFRBDBYXKADFYRHSJZIWBYEOWICHZISTGGENIQCFPMLHLRRWLGXGPGNYKYAOHZRUIUQVLYPONNKZQZOKXWLPEQKRXMLASXTROMWVGXSHCAKTUDUDSJRFEATSGFNNYYHLHOLHNWBTBQBWVQJYJGTFBEUJXYPCMSFUDPBTCUE");

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
    msg.setTimeStamp(0.931600950893);
    msg.setSource(13584U);
    msg.setSourceEntity(188U);
    msg.setDestination(41286U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("MZEHKVGLVWYKSQGYN");
    msg.predicate.assign("OAAPVCZYTPBKHUSXHKZDSWYNHNJCUWAHUCCQSTSIN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TWSVYFTGIQVXCEDLYGJTKEQDRJNVHJMASYPRSKADAVQUTENEUKBZCBLQIRCVFKBUHYVJRSOWYZTJSAUZZAMHDIZLXUXUWFRFWBJOCQMNKKTPDFYUMWQAVWIDP");
    tmp_msg_0.attr_type = 233U;
    tmp_msg_0.min.assign("FXWQCFOBWKZAFFODGOTOLKTJVELMIXCPWBKIKEBTZCSPKYXELLWJURAILZUQUPVDUJUMHZUVHUTMBTQDDBVBSIWEPCSEDRQMHZBESRPX");
    tmp_msg_0.max.assign("CPRMVGYDDXMWQHFTVEVKWOEXONYVJJBZZWAJDUHNPIRZQRWPUKSSWFXMDZDURFSXMRCFBESPSNHBVPUAQNLDPHHHBGUYJZEFL");
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
    msg.setTimeStamp(0.633151123017);
    msg.setSource(39287U);
    msg.setSourceEntity(200U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("HWLLIALTIONWQJCVHDHCJHPXINSIYTJGCRDQVBQFFKACEBYB");

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
    msg.setTimeStamp(0.730941200689);
    msg.setSource(8086U);
    msg.setSourceEntity(64U);
    msg.setDestination(2292U);
    msg.setDestinationEntity(169U);
    msg.reactor.assign("BKDWEVFXQFVWFCZUGSJNGZIYDHTOHRLNWMHPPNFEQWYXJKGIHSJMPYXAXSLPNQXRJESCYIUDCJCPAHPWUWVKFEOSSTOOVUWJHLYXETDAITQLKHTZJCGDSRWUUBQGONHSQHLZYCRLIKWLFAZUBFGASPMCCKMZBAPEVYONDIXYFVDBNVECUJT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AOJJKCRVNDFEHVRHKDMTJQIPUQYPTYIVDHRLSWAKYMWZJTLWWPYPVJIXPGJZJCSOQKWDXYBFDJXSWNROQDXEDZGGGGOGPTEXVMOEXVLNGCKWBIIEJNSZSRQLHOIUSFQRTFHESSNCICWZDNLRIQBHPLAHZEFPPOBWFYVHANPFQSOGZTAYJBCCFNABKZMKXMXOETOMLL");
    tmp_msg_0.predicate.assign("NPYUWKVTONJJMNHPJDYTNGSHGMDHVPRAAORNSWLXVIMBKYUZHXQFERVEJHHZJCMSGKDSATFDZYQWZQTBEBOGWYUEYBXICNBMVVJETWSFFLFUNESHCMX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GVXZNJTKIOWEOFDSQZAWPBQDKXFZKLPTNYJAKHTLWFDECHEFYYVBSDOFCPGUOXCPFQUXSXMMSGRUNARHVEGHWYVNYDSEJFTMLJORUIXIZSUEDRZUALVDJQYDGITJLPAEQAIGHTQPQMANALZRWOMGRLKCYDFMCJFKBFZVVOESVMRJVPXVQXHPEYHTHGWCWWUQBTXGEIBZBNNAAZBZMTLBCCQRUMWXYONNHUILSOKBIPPSSDMTHRCBRYIKW");
    tmp_tmp_msg_0_0.attr_type = 142U;
    tmp_tmp_msg_0_0.min.assign("NQYQHUWBCWKDZPEBDWGTMYGFGZGVOFTBQYSSGHZBXMCCPPOVDXIEHTLPYYWKKJTUUOMEQRDZXMLJZQIRNBXCUOIUBSOXMCTXEIAKMQFATIZFRLNDVBMIFKBGUSVYREBAAHENAOLNU");
    tmp_tmp_msg_0_0.max.assign("MASROZDYHRSKQXFBSKREGHLBLIKNMTIXPCJTKIZRECJUZDGCPASPRHCQNOTPAEYSYBKSWCBJZGDODFHUQLOLGBMYAQQQIRBUZTVNNRUKQXUHENEWJQVWMIHUNADYOOWNHF");
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
    msg.setTimeStamp(0.747095683611);
    msg.setSource(26983U);
    msg.setSourceEntity(75U);
    msg.setDestination(35467U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("EFHJCVIOPHKBQCNIMWEPTVTZMTLQUGKLJYNRJLBRPVVABZEILHNMIJXYDQCSZPMOFVTWKCOBHALLWSBCBNVKSQBRAFTISPKEWQISIYXHTS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EFCBPCNDYVGCOXPIVMBMMAEPMDZNJTPDAYRYLLYAUBZLEXSOBHDWKDRBIXUXOBZORGGCHFMRDPHTRQNDSLAJRVCABTNVFQWQLYPFSGYOMQYKAYEIHGCHGPNTUEPSWUIFRQCNQTOTGXUCBMWOWMCZWKKJXAZLOXFQJOXIH");
    tmp_msg_0.predicate.assign("TDSTBUHGYDOZTJBIYRPJHLCBUGYKQLRVDIASCVPPYRKQZNWDUMYHVAQEJQFLNDGDJZAYLSBIMTJLHYJBNGKRAEUHVVWGEMRSPKIPZZEMZBSVMXJCZA");
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
    msg.setTimeStamp(0.885940929257);
    msg.setSource(22758U);
    msg.setSourceEntity(94U);
    msg.setDestination(3402U);
    msg.setDestinationEntity(176U);
    msg.id = 65U;
    msg.width = 13374U;
    msg.height = 57008U;
    msg.widthstep = 35084U;
    msg.channels = 187U;
    msg.depth = 27U;
    msg.finaldata = 150U;
    const char tmp_msg_0[] = {-118, 69, -49, 16, 96, 22, -34, -127, 99, -79, -101, 59, 86, 101, 72, -19, -57, -91, -113, 86, -3, 40, 17, -97, 112, 31, -48, -107, -77, 22, -65, 108, -102, 17, 71, 85, -66, 124, 56, 47, -18};
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
    msg.setTimeStamp(0.511008422141);
    msg.setSource(35688U);
    msg.setSourceEntity(6U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(190U);
    msg.id = 11U;
    msg.width = 57918U;
    msg.height = 45977U;
    msg.widthstep = 43918U;
    msg.channels = 89U;
    msg.depth = 228U;
    msg.finaldata = 230U;
    const char tmp_msg_0[] = {-118, -84, 107, -61, -116, -39, 48, 42, -84, 126, 119, -103, 64, -50, -108, -53, -14, -79, -63, 69, 68, -107, 99, 74, 44, -99, -66, 62, 4, 94, 116, 37, -22, 20, -127, -127, -103, -126, -99, 117, 66, -98, 117, 18, -114, -54, 22, 21, -48, 107, -32, -128, 89, -128, 42, 86, -121, 122, 42, -19, -101, 36, -42, -51, 48, 110, -95, -121, -9, 3, 20, 92, 100, -128, -62, -10, 6, 51, -67, 75, -38, 10, 88, 59, -54, -50, -14};
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
    msg.setTimeStamp(0.8008916321);
    msg.setSource(64204U);
    msg.setSourceEntity(161U);
    msg.setDestination(46013U);
    msg.setDestinationEntity(25U);
    msg.id = 249U;
    msg.width = 51494U;
    msg.height = 65062U;
    msg.widthstep = 31972U;
    msg.channels = 92U;
    msg.depth = 234U;
    msg.finaldata = 190U;
    const char tmp_msg_0[] = {-34, -33, 3, 94, -106, 6, -25, -24, -5, 91, -108, -26, -11, 24, 94, -116, 97, 34, -99, 5, 115, 77, -103, 94, -29, -69, -125, 31, 101, 1, -64, -121, -108, -61, -128, 112, -60, 28, 90, 4, -105, 25, 36, -121, -22, 112, 87, -29, 45, 14, -84, -65, -80, -85, 27, 125, 71, 92, 15, 102, 111, 23, -115, -74, -102, -20, -111, -85, -107, -70, -44, -35, -114, -74, -12, 94, -62, 60, -19, 39, -80, -63, 46, -125, -92, 116, 125, -26, -125, -45, -94, -125, 123, 26, -125, 121, 54, -32, -75, -37, 9, -69, -42, -69, -106, -16, -4, -19, 42, 80, 116, 99, -26, -46, 74, 29, 40, -114, 2, -18, -96, 8, 52, 66, -74, 7, 94, 17, -1, -97, 45, 28, 70, -83, 96, -2, -124, -14, -6, -73, 14, -37, -29, 48, -54, 47, -127, -42, -15, 26, -82, 59, -17, -115, 78, 44, -62, -75, 59};
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
    msg.setTimeStamp(0.866791921875);
    msg.setSource(47830U);
    msg.setSourceEntity(136U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(148U);
    msg.width = 25575U;
    msg.height = 58906U;
    msg.channels = 165U;
    msg.depth = 216U;
    const char tmp_msg_0[] = {119, -97, -83, -74, -40, -110, -83, -52, 46, 29, 47, -76, -121, 52, 87, 63, 79, 120, -28, -14, -15, -112, 100, 101, 60, -53, 60, -98, 4, 84, -95, 13, -88, 123, 3, 62, 91, 102, 105, 0, -15, 99, -60, -99, 91, -74, 42, -42, 53, -7, 46, -7, 40, -84, 97, 59, 116, 45, 40, 30, -41, -68, 10, 22, 14, -127, -75, -114, -75, 121, 100, 59, -44, 61, 32, -41, 6, 28, -124, 94, -100, 49, 114, -118, 64, -70, 38, -93, -81, 67, -77, -34, 59, -100, 107, -98, 71, -9, 34, 78, 91, 62, 62, -46, -83, -105, 88, -118, -39, 56, -77, 80, -26, -23, -98, -86, -51, 122, 2, 45, -26, -100, 7, -98, -34, 55, -54, 94, -32, 91, -64, 87, 107, -15, -98, 29, -126, -2, 22, -112, 37, -84, 108, 34, -96, -77, -41, -77, -48, 80, -24, 10, -50, -38, -34, 85, -89, 27, -25, 90, 39, 3, -1, -61, -60, -78};
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
    msg.setTimeStamp(0.136012405369);
    msg.setSource(65194U);
    msg.setSourceEntity(85U);
    msg.setDestination(61167U);
    msg.setDestinationEntity(94U);
    msg.width = 28988U;
    msg.height = 37014U;
    msg.channels = 82U;
    msg.depth = 71U;
    const char tmp_msg_0[] = {53, 13, -67, -24, -100, 122, -78, -58, 72, -37, 126, -42, 107, -25, -113, 77, -89, -58, 22, 30, 40, 87, 4, 75, 27, -66, 95};
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
    msg.setTimeStamp(0.939248161329);
    msg.setSource(39108U);
    msg.setSourceEntity(87U);
    msg.setDestination(63650U);
    msg.setDestinationEntity(147U);
    msg.width = 63210U;
    msg.height = 60885U;
    msg.channels = 42U;
    msg.depth = 197U;
    const char tmp_msg_0[] = {96, 116, 35, 90, 14, 71, -123, -78, -52, -58, -8, -11, 13, -28, -83, -22, 103, -19, 48, 73, 4, -74, -51, -84, 98, -83, -68, 30, -53, -12, -52, -44, -100, 72, -95, -85, -90, 124, 53, -125, 82, 68, -27, 118, 70, -105, -11, -10, 8, 73, 9, 54, -105, -40, -127, -102, 81, -25, 76, -89, -19, 5, 100, 112, -51, 23};
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
    msg.setTimeStamp(0.916172966506);
    msg.setSource(17360U);
    msg.setSourceEntity(168U);
    msg.setDestination(55517U);
    msg.setDestinationEntity(196U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {-20, 20, -88, 13, -24, 3, -62, 86, -17, -72, 5, -62, -45, 112, -111, 87, -61, -78, -98, -8, -111, 76, 30, -11, -51, -47, -68, -62, -59, 63, 63, 11, -28, -16, 34, -18, 88, 34, 105, 13, -2, 5, -74, 122, 108, 116, -40, 50, 97, -109, 13, -19, 126, -81, 87, -98, -40, 32, 33, 51, -116, 29, -16, -65, -55, 58, 80, -81, 13, 43, -116, 26, -121, -30, -55, -112, -128, 47, -105, -116, -56, -76, 50, 56, -36, 60, -36, 7, -103, -49, 33, 125, -90, -100, -127, 32, 15, -39, 79, 126, -10, -43, 13, -26, -29, -65, 122, 89, -83, 59, -91, 71, 126, 42, 0, -98, -36, -31, 64, -96, -45, -21, -127, 41, 107, -105, -126, 28, -119, 47, -81, 66, -54, 111, 83, -62, -70, -127, 124, 6, 63, -78, 92, 91, -82, 0, 82, -96, -114, -51, 65, -19, 16, 122, 70, 41, 13, 57, -43, 1, -100, 58, 39, 52, -28, 21, 114, 78, -36, 37, 82, -71, -76, 15, -44, 50, 48, -44, -93, 62, 84, 124, -71, 52, -34, 77, -61, 12, -111, 58, 50, -9, -87, 74, 117, -54, -18, 3, -72, -1, -13, 73, -48, 66, 72, 126, 105, -35, -12, -71, -47, -100, -18, -8, -88, 14, 50, -56, 80};
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
    msg.setTimeStamp(0.541168352154);
    msg.setSource(52702U);
    msg.setSourceEntity(64U);
    msg.setDestination(50257U);
    msg.setDestinationEntity(81U);
    msg.frameid = 117U;
    const char tmp_msg_0[] = {-80, 106, 3, 86, -32, 113, -118, -13, -19, 9, 75, -3, -35, -60, -49, 73, 94, -102, -81, 54, 68, 115, 82, 67, -89, -93, -55, 74, -127, -82, -8, 121, 54, -79, 95, 82, 64, 65, -30, -35, -40, 54, 52, -57, -20, 48, 32, 28, -41, 52, 26, -103, -50, 47, 105, -114, -81, -123, 2, 107, -48, -88, -8, 117, -29, -46, -2, -14, -46, 80, 76, 32, -33, -82, -83, 54, 92, -84, -108, 113, -7, 57, 21, -62, 45, 40, 9, 126, -107, 125, 125, 13, 76, -95, -95, 88, -116, 83, -24, 69, -93, -9, -24, -114, -25, -80, 94, 15, 58, 20, 25, -50, 105, 124, 23, -22, -60, -23, -47, 122, 120, -25, -71, 72, 8, -50, 67, 39, 37, -28, -35, -37, 90, 10, -80, 45, 46, -57, 41, 86, -25, 77, -26, -28, -119, 83, 101, 74, -92, -93, -50, 11, -17, -28, 31, -56, 1, 19, 23, -66, 87, 113, 73, -60, 16, 61, -86, 78, 58, 88, -103, 54, 75, 66, 49, 105, 101, -87, -104, 18, 31, -115, 36, 88, 90, 68, -114, 23, -6, -71, 3, 124, -62, 70, 67, 122, 12, -78, 3, -114, 15, -123, 126, 114, -80, -60, 89, 19, -109, 35, -81, -58, -78, 102, -16, 0, -67, 10, -29, -128, 123, 75, -44, -118, -87, 99, -90, 29, -71, 98, -48, -10, -11, -48, 122, -50, 37, -123, 15, 29, 51};
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
    msg.setTimeStamp(0.472192925444);
    msg.setSource(31470U);
    msg.setSourceEntity(200U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(91U);
    msg.frameid = 247U;
    const char tmp_msg_0[] = {115, 9, -99, -5, 84, 54, 12, -68, 68, -119, -27, 97, 93, 46, -80, 4, -98, -55, 84, 5, -13, -118, 82, -118, 53, -49, -32, -110, 39, -55, -16, -72, 84, 96, 46, -69, 87, -55, 102, 28, -82, 98, -86, -122, -21, 72, -98, -19, 106, 36, -122, 121, -74, 42, 5, 57, 15, -72, 59, -20, -25, 17, 33, 62, 61, 119, -109, -26, 106, -98, -83, -27, 32, 104, 79, 10, 19, 47, 52, 1, 4, 53, 79, -12, 59, -94, -85, -125, -60, -11, -47, 89, -107, -65, -67, 65, 9, -109, 24, 50, 95, -27, 118, -83, 67, -32, 18, -105, 125, -74, 80, 44, -105, 16, 30};
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
    msg.setTimeStamp(0.906622205404);
    msg.setSource(32420U);
    msg.setSourceEntity(242U);
    msg.setDestination(60683U);
    msg.setDestinationEntity(151U);
    msg.fps = 153U;
    msg.quality = 232U;
    msg.reps = 205U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.373688196853);
    msg.setSource(41751U);
    msg.setSourceEntity(119U);
    msg.setDestination(7529U);
    msg.setDestinationEntity(121U);
    msg.fps = 109U;
    msg.quality = 181U;
    msg.reps = 80U;
    msg.tsize = 221U;

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
    msg.setTimeStamp(0.791156845183);
    msg.setSource(57430U);
    msg.setSourceEntity(45U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(76U);
    msg.fps = 178U;
    msg.quality = 217U;
    msg.reps = 249U;
    msg.tsize = 177U;

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
    msg.setTimeStamp(0.631726965002);
    msg.setSource(9198U);
    msg.setSourceEntity(49U);
    msg.setDestination(13778U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.158099694981;
    msg.lon = 0.921411999348;
    msg.depth = 87U;
    msg.speed = 0.822131533049;
    msg.psi = 0.0848640304616;

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
    msg.setTimeStamp(0.620664048251);
    msg.setSource(52231U);
    msg.setSourceEntity(159U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.525535141659;
    msg.lon = 0.808746799843;
    msg.depth = 74U;
    msg.speed = 0.206900080713;
    msg.psi = 0.67561100868;

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
    msg.setTimeStamp(0.382756156806);
    msg.setSource(1229U);
    msg.setSourceEntity(165U);
    msg.setDestination(22056U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.884979990648;
    msg.lon = 0.851715045194;
    msg.depth = 233U;
    msg.speed = 0.540667073845;
    msg.psi = 0.35272535657;

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
    msg.setTimeStamp(0.785623324385);
    msg.setSource(10654U);
    msg.setSourceEntity(56U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(208U);
    msg.label.assign("SHADTYJWGLKTQASTXRTMAELKIDUYCJIADOJPNOLGIOAUHGFJCHUYFXMIVZPLHCXWJEEQIXPVRWRYELQTGPEXNMXBNYODKMUWFERQOVBQZGKYMSQHUNBJSRCFBRSSSHNTANKUUHSZNVLWYWBCZVHDACGZRMVFTODUJLGKCFEINIIZBLBEJQBXNOFPPPTZTDWCWKBIGSRTHJKPNESRMDMVUHFJM");
    msg.lat = 0.110942978659;
    msg.lon = 0.995949552658;
    msg.z = 0.238363204193;
    msg.z_units = 100U;
    msg.cog = 0.789073188577;
    msg.sog = 0.997641063724;

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
    msg.setTimeStamp(0.411141284599);
    msg.setSource(16462U);
    msg.setSourceEntity(32U);
    msg.setDestination(56780U);
    msg.setDestinationEntity(72U);
    msg.label.assign("VBBLVTCXGBXLZGXQISUQDRLPTKYXTZJRPHPVPMWHPE");
    msg.lat = 0.507932937752;
    msg.lon = 0.217782507075;
    msg.z = 0.44885902125;
    msg.z_units = 77U;
    msg.cog = 0.976562357769;
    msg.sog = 0.220287017474;

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
    msg.setTimeStamp(0.318367147448);
    msg.setSource(4566U);
    msg.setSourceEntity(216U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(46U);
    msg.label.assign("HSVPPHPXLQFCGGJCKJDJFORYAVUNILTUVTJCQWOAWINNSPANPILUITGRMXCRLOGSCJITPSKLHSHDPUEBDOTGEVRBGUJHKKDBUYKFEBTETPCVEWBAOHQMZMIXHGMWMVLMDVZEZAZRBNNLQAFXNOMTDQZYYQJCFSPE");
    msg.lat = 0.107833797415;
    msg.lon = 0.585528021288;
    msg.z = 0.384764203707;
    msg.z_units = 179U;
    msg.cog = 0.432826503839;
    msg.sog = 0.871882936168;

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
    msg.setTimeStamp(0.649894381655);
    msg.setSource(9637U);
    msg.setSourceEntity(156U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(146U);
    msg.name.assign("IDVNLXJMDRWMHYGJQGHWCKHCDKWJNPZAVHHHEDQAECTSQDZUSPNSUWITXFUXYQXISVOFHLARALFYEYLOUFIWHCIRFGGPOETLOXMEZBFELFBWPGRQKGNBIZOMTWYTGUDAPBJVJMTSVVCFDMTCKSJEBYZIRZUZVXEKREKVOZXUANAXRODLUOCYEOPWPRVCUP");
    msg.value.assign("ZUXSMZGCQJRLDFQESBDSQKTROYEOYFJEHBXPDVLRWPXLSDACEBYNSOMGIADQTZAAAAVGWETRNQYZOSUFEIFJPRWMXZTDCYNNBDIHLISADPXTRVUEETJYGNBFHSYXQDINVUKOIMKGG");

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
    msg.setTimeStamp(0.357111272284);
    msg.setSource(5446U);
    msg.setSourceEntity(165U);
    msg.setDestination(13610U);
    msg.setDestinationEntity(150U);
    msg.name.assign("BZHZXLSOCHEMBLBLVDNNGRFLIIZNXRZNGBPQNPIEBCJFVGQXNWZISCAVQCXLBDVHKLTYGORNIFDEZHHVACRFMATYRVWQOTWVIBSBTMMDWTFPUGAWIRHWCIEEFPASMYSLLNKUDLCHWOTXJPYKQJRUMUQOTDUMVLCDFMKPIUOJR");
    msg.value.assign("VVCEGGYOUSFCMUVJYQWODREJNQZOQDRZEIALHSXHRJSTPDZKVOQMXXNFRXKDUKCBXNVMXTGNRLYYMGYRBPWBJJMQLPAYNIWSWCGAVPCFEBNEWUEGPOXQGTKEPIPVDECABWCOJLRMYCXEMLRAFDTRGSIBLWGPMFKAHLTMLSHTEBSKZSZ");

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
    msg.setTimeStamp(0.926467596861);
    msg.setSource(20041U);
    msg.setSourceEntity(83U);
    msg.setDestination(21616U);
    msg.setDestinationEntity(230U);
    msg.name.assign("SOOJLMDHFQJZGHWEYPMGBODPHHRKFTNRXPHIEVSECJBTHGNRNUTKGQSNYKPNXZFXSIDLVAEFVTHQUWQCBODRSZZYWSJGYDAMSJLGZTZSBVLVLWNQFEQGVTZQXIGZRYRFKJMBORACSTPVDWWIODUKLXMIFWDCXLFPIXIVOPMBUKLGLJJLTOVPZCOP");
    msg.value.assign("WFXUARKXPRXJMFSPKNXLMSPLIAYRYZWJVTNZNRTLOGPQUOUVDWVEDZVHGBWSAAUIVDOYZUWOEZPTKSIFQRCHFLCXTSQSTKFOOBNNVUSCPJOSBTOJFXQLAABCSANIJEGCECYMDJLDEKGGXEBWIGQKIXBGUANRBIKQWQYHIVPHZIDQMZEVWKKKBBOUMHGVZPMFJTVRJGJEMCAGHNFHY");

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
    msg.setTimeStamp(0.621021194296);
    msg.setSource(52272U);
    msg.setSourceEntity(104U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(219U);
    msg.name.assign("SAEQDIVFJTJSVWMEGNQREWCPZAWOOLMXZXJYXZWHHGHZZMFLOHWATTYKHKQLYQOLXSBAGFAIOHMMIDIWKXTXTVRHUVFELUKDKBCUVRDMV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KKGSWRGGGULSUBPSWDFLZVAVNVEUJPNCWQUYVFUBYCOWXJDYLTCSAMCYLFEPWHPAUDMZPYOJQTWORBGEPYDYFGJJHEAXIBXXTHMKZSCQOQFXLIATQMGEDLQKXUFTTKNOQTMXWBEWYHNZZJKDXRRREYVVEGKPUQFCRBVQMIAWFKZTQBRHSTVFJZLNARCSRHGAIEAHDGIIBUMCSVHNCNHDKDIODKEPOPBXYWONXMVONJJML");
    tmp_msg_0.value.assign("JLZXIYANIJSXRODABYCVOWQDIQWLAFCICFIGBDYYZEGWKRTXLCPKYGBAYHMTWOBAFBO");
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
    msg.setTimeStamp(0.619838475268);
    msg.setSource(58096U);
    msg.setSourceEntity(67U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(158U);
    msg.name.assign("AWSBTRZETWSJCYHUKZJLMWQKOVVBGPNCZNUBIPOPFMICYZXCRREBBTYISTHEVAKKYCVWQOXIBHCLLRYUGJRMFTZPNNERPTRKDQCTABBYMUAXLNKQSQXFSVASXKJXEQJQHHJN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NPVSTXXXGKAWXDASQIBUWSHLILIGENZIKYZYJTMGNBXZDYJPMCDDYDOZDTFERAOVLLEUYVQIJZPHMTWYRPLZJQLSHMPDEXUORPOOJGPYMJCRKAYUQVVWGHYKFTALQFCVBLQJIHRCFQJBFAULKBCPCBGXVBBKPNMKUDQZWHI");
    tmp_msg_0.value.assign("PUSJBHTFJLERSBSVHPWSEEAEZVMQCFVNNBUIXKGJNKOQWOFCPBPTDSTMYXRECWWYMXEAVCFNNPCZOQBMKWRMIGGKCDXUZEXIQHQVTAMD");
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
    msg.setTimeStamp(0.776308614292);
    msg.setSource(9177U);
    msg.setSourceEntity(48U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(184U);
    msg.name.assign("KQDGAVOPDPYPALSIYUULDYNRSISADXVIUFZYCNEYSWLGFJPRQROIHGARCIQAHXVVQKVWTVKNMVEAZINBDZRPKHWIVSZTYBWTYIOULEJHWQMWIAOHELRBYJCTRFTFPTFRHFXEXCISNMJPFVJBBEVXRHWMUKLGSDZYHCBGUHMWZNOLLCYZWQTAPXQJJEEOSJTWCFMTGOXZHDMGFDZALENBBKDBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SUVKNLTAGCCOWWYXZXJFNQABLLTUODENMELAMTVNPKWAWJUZICEHFZTQZETLCMQOZUIQQPFDFYXUGBSRCEMDMRAKUHXYKUVGQDCPJPWZHLOMCDVRSLGRAFSMVOFADLSBNBRJIDXHNXXDFVKEVJYSPDBMPRXRHTIVWMEPCUXQTYYVSWJOKKNCFBHRZJKGZIOUPZNGDYKNLEQUIQABSWQGSTFYC");
    tmp_msg_0.value.assign("TORQXNZRSJOGMSBAWNNWO");
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
    msg.setTimeStamp(0.832056649753);
    msg.setSource(63682U);
    msg.setSourceEntity(93U);
    msg.setDestination(16336U);
    msg.setDestinationEntity(53U);
    msg.name.assign("COXQEAXEEPOFDUZKOXSHVAGMDXSEDDNYKCDTWZQCPNXLCDNTNACHEWRWEYMSZWZKZRLZKOYUGYDPGYTRXMTHNECIKQSFMLYRMPRTIDFDVVRGUDMLYUUIEKPAWHMTLJHS");
    msg.visibility.assign("ATSVNDGVYARZYBSXHQJONPISZGUBRLBIADULRHVMPEHYCCYRSSVXPHRVSJPEUJYXLDFGJGMCQLTMGZXBYFCXNHUTGEGADIVWTXAPIRJDCDFWWGRZCKKXUDPOPKOCJINKUOBHKCQZMFBMOJZWWEVUQAXEQDJBIFPQDUHNWTNKELIKQYNNLACVQWUSGYXHTMGZIORJYLSMZELUVXEHKOMTEFOIMYKRFORVFBQLAZBDBKANWENS");
    msg.scope.assign("WADVYNCKIUJQPDMVHFKRJJWOLPKCWNJOJBISGNACPBDSZOLSWCJOZXLEIPNKMOYLZ");

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
    msg.setTimeStamp(0.558707576918);
    msg.setSource(48026U);
    msg.setSourceEntity(34U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(128U);
    msg.name.assign("SBYDUSMBGLURUGWHQEODPYEANYSIMOLQAEKMTXEILDCVVMGNSVOKXKTLHUFZEQORBJQBDMTQCSHJCLDDZBOBPRKFZXEZKGIUOPESAHWDMUMHBNTCCZEPKGWQGWIUJSCQWHRTLFCRHVFRJDXQXKLZIYTXXPYBWJNZIOYUJDVPSKLIFYPFUYTDPIRRVMEOVNAHZIGAGXGZUWKNCCVJTNFLRJQ");
    msg.visibility.assign("RHYZQUFDVHESLWYHLXNBQEIIZWPLPYDIMJBZKJZUNAJZJVXAUPDLRDFZLICMWFRHHZCYQTTOJXEQSLURKTVCYTHKSVQUFBWYCRNXMDKVBUBEMFMGLWGRGANMILDINOZCABUNKQYTLWHROS");
    msg.scope.assign("USKIJMZWQYJTTCOMOKKJLWGPDGAGMZUCKSRHTNNMGKWLXUUXWSRGRNXMEYBABIAZZBBRQQXUYGHBNWCFBILXUQHB");

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
    msg.setTimeStamp(0.131025820363);
    msg.setSource(17091U);
    msg.setSourceEntity(14U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(117U);
    msg.name.assign("LCYSSPHHFJCSUHJYDCGHTUGHHUTETAEBQMRJTOWFGXWTNDPKCRK");
    msg.visibility.assign("SFPGIZHRJVWXVVPQFGSNSBSRBOGCIGMEFEKVWQFKATCTDRUREJRLSYINZMVHHAMNBNFM");
    msg.scope.assign("HABZHXSHYMAZWBZDFTPILDQOQVSYDYRGRTNSRMRCDBEKCJUAUSMKGCEFPFLHSPWQMLRUMXCUQRSFFVWESSSMKXZQJLQJAIBTIXYDHWNNGBOMICRPKDOFOJKBZSQKMJHVDTIVTAZGNDLEYNDGPIHOXKAFVJVBLUNBUZTTPXTKGWWEOEOVYKFJCJHVIVOPHECPJXO");

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
    msg.setTimeStamp(0.204876969761);
    msg.setSource(52832U);
    msg.setSourceEntity(102U);
    msg.setDestination(6927U);
    msg.setDestinationEntity(173U);
    msg.name.assign("BFVDRMDWECFECWRCTROWKDCHRUGQBBQZMTWEXATQZKHRFZDQAVXNXFYLIPOJMOJQMEYKCEOJRJQAFRDNTZHKERLHPZVWEUBORZTVJIZFAAIIGJLVNIADBNDXNTKISEGXIEBIUVCPLBMOZHMXCHGAVWOSGSGEPTHPZXRKHWLBIAJUQUUVYMDFDFZIQKNSKPGOLLFUXLNCJOVMLSKWQPDUU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KXYNBPBTTKOUWQDBFPSLWEDYZLTLRJDOSKVCYQGMUGJZWAYHFBNIARJXXCMNHGKQYIRSZMCCYIPMEGKCPXVUAEFDUGZTNIDOIKVVLPEZQPCKSIBXWHEWHITDNIFJMFJOLBNNTARJNUVMSRGXAGHDSWCWBZJOCBRPUQMNXUHQLLKGIDEYRETGJWHABAVTARELQRSSFUXQZFIOPYWHLAXYPPFCLHDYEOOOWKZXCUEBJAT");
    tmp_msg_0.value.assign("MVZSEFVIOAOUUYQQPOKYRNTXNERWCQUJAHHEBWLGVCITEMBKLLNKOVTZKNAEXUTBUTBCBKFWADBQMQTJPXQKSCXRNJLJC");
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
    msg.setTimeStamp(0.260777726583);
    msg.setSource(38739U);
    msg.setSourceEntity(38U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(218U);
    msg.name.assign("GCDYIDJANLQQAOCOBWWURDTPBBEIJHGUPNZNQLWXSMWEFUGCVRJJLRHDBKDMVWFNHAXVBSFQFTMLDSYROBLKEQJMSJTCEVCVZA");

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
    msg.setTimeStamp(0.119461586601);
    msg.setSource(58273U);
    msg.setSourceEntity(9U);
    msg.setDestination(4259U);
    msg.setDestinationEntity(85U);
    msg.name.assign("OMILWZYXPRBHXPYGVMHBLZUBVEPEFCGNHFMDTANNRMKKTWJDRCHVXWKSSTFYFKJFZPEJWZTGAAGVGOKOCXZEJVQPUNPOJFYXRVPOOOLFBZSVLBHIQOJYIKWPAQRMETVVKEIJPFCTA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BRNZUWNKPIQAWDEMGKQXZPAZGYSKWZDLYLLTSPSZUEUISWTDFSHVLEYRSVOUAICKZOIDGEVTCRLQHFABIGIDCCOJXALQAEZTMHLUTBIGGUPRAEOFXRBKWWESVK");
    tmp_msg_0.value.assign("KOLBGAXCVUIOQOXKPBHRYTCUUNWMDEULIHXBNFMMWYCNNERNOTIWIZBDHFHARJNOLACTWYKMILGXCBOPPGFXNLSVEQPKKDARQVZYFUPJRZTQSTHMZKXLJEURVVMSPYQHFUOGLKCXTJRZRADWEMKAYLGPBDIPGZJUWJDQQHGZDCFSGBZENTVSWZJPJRFALOPWWQEZUQBCVSYOVAFDUXDWAFJEAFHGKDSHBTQHOSEISMYNCLYG");
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
    msg.setTimeStamp(0.605010504436);
    msg.setSource(30413U);
    msg.setSourceEntity(77U);
    msg.setDestination(56867U);
    msg.setDestinationEntity(82U);
    msg.name.assign("MQFGHBDEIKETCYGZWULEHQALFFCBCXFHBRPNXOVGZHZOPAGJHDICWSDWEUKYTKMUYMGKIWIFOERYBMALIFAUNTWRVUQNOEAVKGSNDMTJMSGKUJNXUNRZEWYLZAPLPZJV");

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
    msg.setTimeStamp(0.980017658916);
    msg.setSource(36728U);
    msg.setSourceEntity(115U);
    msg.setDestination(34862U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ETQXHUFYLINVXTUEOSGSWGINCKVWWZLRSJSUSHRHKHHLSTTYUXSDWNHVBTGZIJJLIRWCDZVLNCXCXMOAWWKFJLMQJIROKARGXNPRQGDDAECXWHQASQAKJAYFNTCVOEZRPAJKMOOBUPLZHCXFPYMBLKGAEMKQNPIFVGFBQNKCIDDR");

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
    msg.setTimeStamp(0.980011688698);
    msg.setSource(31856U);
    msg.setSourceEntity(14U);
    msg.setDestination(45816U);
    msg.setDestinationEntity(68U);
    msg.name.assign("DHDFCRAWAEGL");

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
    msg.setTimeStamp(0.537545705969);
    msg.setSource(39663U);
    msg.setSourceEntity(130U);
    msg.setDestination(38085U);
    msg.setDestinationEntity(214U);
    msg.timeout = 311959321U;

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
    msg.setTimeStamp(0.67079927287);
    msg.setSource(48355U);
    msg.setSourceEntity(161U);
    msg.setDestination(16961U);
    msg.setDestinationEntity(137U);
    msg.timeout = 3897479450U;

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
    msg.setTimeStamp(0.763369560995);
    msg.setSource(56492U);
    msg.setSourceEntity(61U);
    msg.setDestination(63851U);
    msg.setDestinationEntity(248U);
    msg.timeout = 1116639393U;

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
    msg.setTimeStamp(0.014525878075);
    msg.setSource(1592U);
    msg.setSourceEntity(189U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(130U);
    msg.sessid = 400074897U;

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
    msg.setTimeStamp(0.595958339542);
    msg.setSource(12596U);
    msg.setSourceEntity(217U);
    msg.setDestination(20105U);
    msg.setDestinationEntity(79U);
    msg.sessid = 2567275263U;

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
    msg.setTimeStamp(0.175414950302);
    msg.setSource(47833U);
    msg.setSourceEntity(7U);
    msg.setDestination(61288U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3120822582U;

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
    msg.setTimeStamp(0.33735222133);
    msg.setSource(46600U);
    msg.setSourceEntity(215U);
    msg.setDestination(54887U);
    msg.setDestinationEntity(89U);
    msg.sessid = 598117047U;
    msg.messages.assign("VHKZLGAZUIZFDPECIDKBYTLQXFVFHAGPQJZONAAWYXSHRMXGRCSQHVMBJTJHXXDEESWFWFKSLAMPECFQVMNGOWSEIPSGMYPYIMMWDAOPTDNCLNXLVVWAZZUUNWJTZYBKKSDBNZEDBUFIQEXNEIJPIJOACYBPQYORDULLHLTRRWOHT");

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
    msg.setTimeStamp(0.458720822882);
    msg.setSource(2608U);
    msg.setSourceEntity(35U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2300867171U;
    msg.messages.assign("DLMWDPYKAUZCOSCOZVHHFHCRGG");

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
    msg.setTimeStamp(0.251353932981);
    msg.setSource(31463U);
    msg.setSourceEntity(237U);
    msg.setDestination(1641U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2399027038U;
    msg.messages.assign("KOCDEMTPNE");

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
    msg.setTimeStamp(0.0299289721406);
    msg.setSource(19960U);
    msg.setSourceEntity(181U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1360273854U;

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
    msg.setTimeStamp(0.859662219864);
    msg.setSource(10950U);
    msg.setSourceEntity(194U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1292183256U;

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
    msg.setTimeStamp(0.267967543695);
    msg.setSource(10216U);
    msg.setSourceEntity(150U);
    msg.setDestination(31666U);
    msg.setDestinationEntity(221U);
    msg.sessid = 2173202736U;

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
    msg.setTimeStamp(0.544155932559);
    msg.setSource(63598U);
    msg.setSourceEntity(222U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(223U);
    msg.sessid = 352512606U;
    msg.status = 248U;

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
    msg.setTimeStamp(0.504967325407);
    msg.setSource(30319U);
    msg.setSourceEntity(38U);
    msg.setDestination(19669U);
    msg.setDestinationEntity(90U);
    msg.sessid = 3720896432U;
    msg.status = 249U;

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
    msg.setTimeStamp(0.17750451818);
    msg.setSource(51476U);
    msg.setSourceEntity(218U);
    msg.setDestination(65515U);
    msg.setDestinationEntity(224U);
    msg.sessid = 1085045279U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.650831099351);
    msg.setSource(25921U);
    msg.setSourceEntity(47U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(215U);
    msg.name.assign("ZJPEFIJXOZCHLAT");

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
    msg.setTimeStamp(0.000626227589792);
    msg.setSource(38407U);
    msg.setSourceEntity(170U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(235U);
    msg.name.assign("YMZDVEOCFQPKMVWRAQTZKYGWPDYBNCSVYIUSLQBNAXXQGUGHSEESICVRPYXRIFYEFBBJKYOXUHPOUXHAYTALIKBLCNJBSHEXWP");

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
    msg.setTimeStamp(0.576152376612);
    msg.setSource(45223U);
    msg.setSourceEntity(2U);
    msg.setDestination(8906U);
    msg.setDestinationEntity(62U);
    msg.name.assign("TDRRTYBNYWPOQMNFUMCYUOIZMOGGNPOCQKPREZJAOJOUHBRHUVCCKFQDQRZWMAKDSDEWSXEFKEPCQKBDFGYMTVAGXWFCGICVXHVPHSYLBUHIPLMBWXAQUFNMQLBITPHFIWSSPTNCVLKWBRRASEPGML");

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
    msg.setTimeStamp(0.227280899199);
    msg.setSource(59883U);
    msg.setSourceEntity(80U);
    msg.setDestination(40353U);
    msg.setDestinationEntity(110U);
    msg.name.assign("TAPRIXFXKBNEUMWGKNIMVXRUNRJLFOZZOXAJPGLEYANQJSXBILGEMOKYEUBUBFWQFHVOTCMYPTTPFTFNCPASFELDQQULWXASDVXQQALYRSNWPHEGBZRJDKUHVIDJHZHCHVOKDOIVRXYBSKJDGRPCGZOWYMWSWNWHYZYNQOZVCLTKIVUUKRDCPHWMSJBTXKZICU");

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
    msg.setTimeStamp(0.689795971846);
    msg.setSource(63277U);
    msg.setSourceEntity(13U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(159U);
    msg.name.assign("OLTWALHEAFIXRHJZKMHKCBAESESZ");

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
    msg.setTimeStamp(0.650502416467);
    msg.setSource(40963U);
    msg.setSourceEntity(238U);
    msg.setDestination(5333U);
    msg.setDestinationEntity(107U);
    msg.name.assign("AWQEQUZZDPZIPGTRWYXWIHHYPJESYLOZPEVCI");

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
    msg.setTimeStamp(0.696102849052);
    msg.setSource(27072U);
    msg.setSourceEntity(203U);
    msg.setDestination(44650U);
    msg.setDestinationEntity(3U);
    msg.type = 225U;
    msg.error.assign("EYSUTWGVMSSRSVIWYQIGOTATHSSNJBVYPFWJBYGNFMDKHPPICNPPCAQXZDMOARJXFGFASKVFMVXPEZXAUCBIXLMZHOMDNRCLZZQPQYBYEBBMJRWVKDRGWCUEHSLTAPIAFUJKYKNQGXRRNRVYLTDCWTQKZOHQZNFAQOIQMTKJEVRGCZEDMXNLYUXVOUCSFQADOFTPTEIJDWEJWULCPHFRONVJIWBNBOLBHSYKDZCLUHGGJX");

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
    msg.setTimeStamp(0.827601606491);
    msg.setSource(7970U);
    msg.setSourceEntity(109U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(253U);
    msg.type = 203U;
    msg.error.assign("AAQPXLRSOMQUDOHHBFHQCZEONFMUHRNEJFSTYOAEMKBSDBRPXXUBXSRJZNVMWDBTXYGVMXEOLCRGRXKXDIINXDBFJAKDCWCZSRZIQHSAIVHFUZZVQSOPYLZQIJSWPJCVJTUKIINOVGJCHWMIPYYGKFGYONLYWZVPEMTGHWDTWUOVUGITLWAQTL");

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
    msg.setTimeStamp(0.214412194204);
    msg.setSource(13242U);
    msg.setSourceEntity(60U);
    msg.setDestination(14132U);
    msg.setDestinationEntity(59U);
    msg.type = 175U;
    msg.error.assign("IYQGKAURMNUFXCFZWGQENOWGESKBDSBQNTBCXWHILVSLFBMVDTSWEAICPRTHW");

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
    msg.setTimeStamp(0.346837843355);
    msg.setSource(58925U);
    msg.setSourceEntity(108U);
    msg.setDestination(5791U);
    msg.setDestinationEntity(9U);
    msg.seq = 6684U;
    msg.sys_dst.assign("RXIHJNVLXYIEXZVHWPQJEKCKCTHHEZQBNQZYRBOEMETGJMIWATZSNRWPCJGQKBZLEANFRSSHWOQPAUIXHYEIRDQWAVFGVHFDIEPNKKBFKEWJWWJYPYKCDNKRMFPSNOBMBKUWATVBIQDSBDJPCPVAZXMMRZSHYIFLOWJTLDTUDFYSYDYNVIQHACFQ");
    msg.flags = 212U;
    const char tmp_msg_0[] = {-38, -49, -22, -60, -101, -98, -84, -54, 87, -27, 125, -36, 55, 45, -117, 25, 40, -36, 97, -65, 101, 76, 26, -32, -50, -127, -31, 80, -7, -4, 25, -50, -121, -26, 49, -91, 73, -118, 113, 92, 121, -49, -61, 91, -128, -100, 48, 71, 110, -47, 68, 45, -97, -25, 102, -39, -3, 5, -92, -51, -23, -18, 93, 12, -127, 53, -29, 80, 64, -42, -52, -84, -18, -68, 69, -116, -88, -78, -16, -113, 47, 45, -3, -5, -65, -18, -114, 14, -10, -105, -36, -96, -57, 53, 38, -21, 92, 90, 64, -90, -5, -119, -94, -3, -31, 103, -35, -118, -107, -120, -62, -95, -127, -95, 28, 89, -77, 90, 90, -114, -127, -116, 43, -102, -57, 49, 91, 45, -1, -67, -67, -81, -58, 116, 83, 58, -53, 75, -33, -14, -91, 57, 49, 71, 115, 6, 96, -126, 102, 22, -111, 125, 118, 91, 73, 41, -114, -26, 25, 84, -85, 24, 116, -10, 4, 43, 5, -37, 37, -118, -115, 80, -28, -97, -38, 31, -17, 80, 16, 5, 12, 86, 21, -20, 31, -117, -45, -50, -15, 99, -22, 77, -103, -86, -80, -66, 68, 37, 98, 122, 16, -94, 62, 104, -105, -105, 56, -65, 90, -63, 63, 52, 71, 63, -37, -9, -18, 29, 28, 22, 80, 23, 37, 46, -63, 72, -118, 21, 0, -45, -8, -128, -76, 95, -55, 123, -41, -95, 100, 30, 50, 46, 1, -4, 117, 32, 124, -48, 42, -17};
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
    msg.setTimeStamp(0.544982121867);
    msg.setSource(14525U);
    msg.setSourceEntity(226U);
    msg.setDestination(62589U);
    msg.setDestinationEntity(68U);
    msg.seq = 37746U;
    msg.sys_dst.assign("VDRRDXNCSTMIAVXLFKGTRSDQXMMRVMLODKKSIIZBPYOYHKWNCKMBYHBTGOXUGZIIAZXBSRBYGDPQSUVVJAAJDBRCKPLFEQNASGWOCNQTRWPXTEKEQAJBHMUUMHIPEF");
    msg.flags = 24U;
    const char tmp_msg_0[] = {-60, 114, -53, -3, 40, -78, -95, -33, -23, -95, 55, -52, 87, 64, -28, -111, 2, 92, 106, -87, 90, -18, 116, -5, 23, -30, -56, 25, -126, -104, 109, -45, -117, 32, 7, 78, -70, -73, -91, 50, -65, -28, -1, -26, -94, -110, -45, 105, -40, -30, -42, -84, -27, -84, -20, -107, -95, -72, -1, -50, 93, -118, -12, 19, 118, -51, 10, -25, -52, -49, 97, -1, -27, -4, 68, 56, 123, 80, -32, 62, -28, -109, -121, -82, -4, -51, 69, 53, -13, -114, -110, -77, 30, -81, 68, 98, -48, -125, 61, -20, -47, -95, 98, 7, -58, 12, -34, -5, 14, -67, -71, 21, -123, 103, -95, 114, -127, 122, 93, -30, 57, 51, 119, -35, 57, -114, 22, 90, -120, -11, 38, -2, 67, 19, 5, 96, 46, -88, 84, -115, 63, -55, -72, -44, 9, -124, -48, 63, -47, 70, 47, -126, 41, 90, 41, -48, 9, -30, 58, 96, -57, -40, 22, 17, -8, 100, -84, -61, 117, -44, -123, 58, -8, -111, -3, -34, -69, -125, -95, 45, 6, -102, 29, -13, -86, 39, 118, 97, 10, -98, 88, 114, -126, 16, -63, -4, -49, -53, -76, 21, 42, -20, 58, 20, 87, -49, -74, -100, 43, -40, 48, -27, -90, -100, -112, 13, 81, 58, 26, 126, -90, -100, -101, 44, -104, 36, 9, 26, -49, 53, -5, -60, -104, -8, 28, -83, -105, -47, 0, -35, 85, 71, 40, -34, -46, -44, -54, 46, -127, -66, 105};
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
    msg.setTimeStamp(0.478574897822);
    msg.setSource(37023U);
    msg.setSourceEntity(252U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(222U);
    msg.seq = 60U;
    msg.sys_dst.assign("PJAFZCDWWMFWUUENJLFLBSMEYPAXPQXVRJZMCMCUIRUNFTLXVJB");
    msg.flags = 184U;
    const char tmp_msg_0[] = {110, -112, -107, 18, 18, 72, -23, 24, -18, 63, 93, 101, 89, 121, 11, -122, 86, -30, -80, -24, -128, 91, 109, 114, -82, 30, 11, -97, -66, -89, 79, 68, -34, -96, -4, 109, -20, -58, -89, -29, -5, 61, 14, 102, -69, -46, -101, -112, 31, -89, 61, -111, -13, 17, -47, -107, 100, 110, 25, -40, -62, -83, 105, 76, -66, 85, -79, 101, 68, 106, 76, -14, -82, 92, -94, 54, 41, -84, -83, -116, 93, -8, 90, 30, -12, 62, 63, -100, 50, -32, 22, 65, 17, 89, -57, -75, 99, 23, 11, -110, 1, -51, -36, 19, -91, -89, -12, 50, 7, -87, 59, -112, -85, 14, -37, -30, 6, 72, 77, -124, 49, 69, -8, -45, -116, -123, -119, -69, 5, 83, 62, -127, 92, -97, 95, 0, 2, 90, -19, 121, -60, 113, 65, 95, 78, 118, -53, 59, -60, 123, -114, 78, -113, -82, 33, 54, 13, -114, -76, 7, -22, 31, -93, 28, -105, -32, 77, -49, 47, -89, 31, -106, 25, 18, 48, 32, 11, 114, 124, 17, -25, 126, -44, -76, 24, -51, -114, -118, -29, -54, 15, -12, -118, 65, 10, 50, -52, 38, 61, 68, -117, 16, -53, -25, -100, 120, 126, 90, -33, -101, 85, 63, -13, 61, 113};
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
    msg.setTimeStamp(0.377423702983);
    msg.setSource(20730U);
    msg.setSourceEntity(178U);
    msg.setDestination(10060U);
    msg.setDestinationEntity(35U);
    msg.sys_src.assign("SDOKNRJKVZHBKCTMGMZETMLLGLOUORGEIBTXCYDXJGMXPTXMRCOBLPOEUJMDLRREHLBQVRXYWQBQSCYADWMCVQTSACHEPTEPLIDYNZCFMRHNIFYOINAXPUNLFRYTSWCNKFQAZKVHWJXSMFFIODBSUVIIKKDUOBPPQGYHNGUHHPAPWFQJFGUSAFXQVRMVUCBDWHTTVNZWLTOJNJCIYAZVJEZAAKAEFIWQSZHEVYSSGBGRXNDJWY");
    msg.sys_dst.assign("XSSFHVTUCUTSNYWZBQJHWJNPDMKIPVAGEHTPNZHUPHQWIYGPEPFAUPMEZEHELFOSGXSOLFGNGMAPCSGRVNSBXBHFOZRUSTUUWBOETXACCCRMCVVOAJFXLLIOTRWPKYXRIWGDALVPHKYXTBBQQIDHQZQYXCZLIWQFFBBJQRYZTNXTZRWMMAMSNKHKUNFVGDKENJUEIJ");
    msg.flags = 21U;
    const char tmp_msg_0[] = {-16, 44, -2, 74, -67, -110, -84, -117, 54, 111, 49, 12, -12, -4, -83, -123, 24, -101, -54, -117, 106, -95, -102, 31, 34, -88, 28, -75, 111, 112, 101, -13, 54, 4, 62, 57, 83, -55, -56, 98, -10, -2, -29, -78, 55, -56, -30, 53, 20, -2, -36, -25, -43, 33, 47, -41, 63, 74, 41, -60, -27, -44, -57, -13, -70, -103, 72, 101, -27, -21, 27, 124, -124, 37, -102, 122, -81, -103, -45, 70, -83};
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
    msg.setTimeStamp(0.734976987085);
    msg.setSource(50589U);
    msg.setSourceEntity(219U);
    msg.setDestination(3860U);
    msg.setDestinationEntity(144U);
    msg.sys_src.assign("DVPHGBTDUDECOIZAFGNOXJUDMRTZKMBFTLPBNRHHRWWPGQXFPFMZOXQTXMKOJRPOGLXQGUBOFAPBPYHWEJJWUJSVLQAQINUXEGJYCGLDFSZHHKIRDCRQCQTKDWUGP");
    msg.sys_dst.assign("LRLGCLJILFIYRBCOKMMTDWNZEGUVTRXGJYDRGAIOMKNCZLNYUHIESXTDFVYMCHRTSJJVOOAZPPXMHXMNHJXSPDZSIYMNGDGRBYPSQUKWWGBVIBUMCUWOZBFYHHSWFEPRQYLTANFQ");
    msg.flags = 209U;
    const char tmp_msg_0[] = {118, -34, -102, 112, 29, 22, 105, 8, 40, 51, 7, -69, -42, -120, 33, -102, 41, -27, -57, 121, 109, 43, 5, 5, 80, -106, -37, 6, -57, 11, -51, 117, 98, 105, 86, -102, -84, 124, -61, 93, 54, -127, 36, 79, 91, 119, 20, -16, -13, -19, -50, 96, -63, 17, -95, 88, 96, -79, 99, 124, 46, 41, -70, 91, 62, 13, -63, 8, -47, -87, -97, -83, 21, 21, 109, 100, 109, -71, -40, -98, -93, 8, -36, -15, -22, 84, 60, -4, 88, 107, 55, 80, 21, -76, -56, 107, -115, -43, -14, -119, 24, 36, -18, -55, 116, -65, 21, 89, -71, 57, -126, 34, -4, 1, -19, -11, 23, 81, 32, -33, -3, -99, -87, 9, -118, -76, 118, 109, 87, 33, -125, 38, 79, 68, 24, -123, -76, -38, 52, -59, 105, -10, -10, 49, 68, -109, -123, -68, 104, 107, -115, -105, -45, -103, -75, 72, 52, -29, -37, -52, 49, 40, 106, 67, -69, 74, -115, -11, 43, 3, 116, -37, 23, 14, 5, -64, -88, -128, -33, 64, -109, -7, 116, -71, 105, -123, -108, 25, -124, 9, 104, 28, -103, 105, 11, -112, 10, 31, -11, -79, 60, -2, 18, -42, -100, -28, 107, 121, 7, -95, 91, 90, -48, -96, -44, 26, 16, -104, 89, -120, -101, -55, -120, 58, -67, -128, 121, 79, -38, -5};
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
    msg.setTimeStamp(0.164234793547);
    msg.setSource(10151U);
    msg.setSourceEntity(171U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(228U);
    msg.sys_src.assign("WUQTYZDBEWKLPICKHVJNZBOFEADLAXNSCPRYHGYHBZOGJDZRIUEIFXIVWKQMGVLHYCTEHDGANWFSCCXHGEENPRLNIQRNUEGVOBFJYYIKKONYZXTQMHPSHOEBTUKMPNFMCHB");
    msg.sys_dst.assign("SJEWNNVECFLOOCRVEYNKGKPKGLDQIBGPMCWQWAEZIQDDGDJJLAYFIGYWRIPNFUNTNYGAQTGCZ");
    msg.flags = 231U;
    const char tmp_msg_0[] = {-2, -87, 39, -43, -9, 22, -80, -18, -113, -19, 82, -13, 83, -9, -105, 13, 89, -109, 28, -109, -69, -5, -52, 9, 82, -60, -5, 75, -27, 61, 66, -73, 63, 97, -8, -12, -90, -80, -35, -88, 38, 0, -54, 19, -86, 39, 122, 0, 74, -43, -68, -63, -100, 71, -27, -106, -127, 115, 40, 89, -109, 42, 12, 88, -104, 85, -31, -105, 16, 24, -79, 87, 41, -39, 88, 80, 54, -86, -88, 12, -61, -85, 112, 61, -76, 62, -31, -89, 80, 26, 111, 56, -24, -7, 6, 8, 100, -32, -32, 44, 23, -68, -66, 61, 33, 112, -50, -104, -47, 99, -20, -79, -125, -92, 41, -68, 70, 8, 81, 12, -108, 88, -21, 31, -89, 6, -4, 21, -113, 62, -4, 24, 93, -19, 71, 111, -11, 105, -102, 105, -23, -63, 7, -87, -96, 19, -69, -16, -120, -64, 70, -109, 82, -11, -112, 54, 85, -111, -40, -16, -71, 20, -43, 29, 96, 7, -60, -86, -111, 102, 71, -80, 60, -118, -93, -14, 33, -18, -11, -10, -5, -22, -106, -44, 24, -73, -44, 28, -10};
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
    msg.setTimeStamp(0.703899793937);
    msg.setSource(31674U);
    msg.setSourceEntity(72U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(170U);
    msg.seq = 10365U;
    msg.value = 136U;
    msg.error.assign("IZZCZTEDMEPHIXAHIZQVSXYBWCFMRUDHFUWFGOYEGNTAGNCKWLWJUHCRSOHQAQVNTKFBRRAFRJCUGPFQSUGPNXNIPUDYBJHVKGCNCKLKCTBJELNQLQIKJPYSIVAVEDJWSNSMFAEPDEERVMBIXVDVX");

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
    msg.setTimeStamp(0.617200881749);
    msg.setSource(15110U);
    msg.setSourceEntity(223U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(155U);
    msg.seq = 34166U;
    msg.value = 10U;
    msg.error.assign("YQDFMPALFONUKFOMPJKRNSICQXSZJXHJPEPKKZULCUTZFXSGDPLSYECAAHWMQGQGLKLUXAFHBRTMBGEEHBVQJJHMOBQCBVLWOAPMKSIHTFLYYDVRFVLVQCCJEYNNYKIEFZMIOUWSYTUKENUVZKNHQNUARZLHWIARTPSYTBBDDXFENJZUILTNPKCWDWADIXPWZWZWCJOCMQSGRSGRBVYXJDMRGYVJGTRXCDBVPRI");

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
    msg.setTimeStamp(0.368122622052);
    msg.setSource(19971U);
    msg.setSourceEntity(170U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(163U);
    msg.seq = 48933U;
    msg.value = 50U;
    msg.error.assign("WXSLJLRPIJVEIEYQHKAPMUZMK");

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
    msg.setTimeStamp(0.938416649954);
    msg.setSource(23327U);
    msg.setSourceEntity(190U);
    msg.setDestination(1316U);
    msg.setDestinationEntity(87U);
    msg.seq = 34448U;
    msg.sys.assign("FHZHKOCCXRRJFMENIYTGGNYRZUXXKLNTKUELSABN");
    msg.value = 0.0525031880654;

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
    msg.setTimeStamp(0.253276309993);
    msg.setSource(9821U);
    msg.setSourceEntity(174U);
    msg.setDestination(57434U);
    msg.setDestinationEntity(185U);
    msg.seq = 16049U;
    msg.sys.assign("DDAFLWISLOTWGCOLUKUIHEMYXOWFXOTBVMDGFLZUZSWAAQIILTBHTYKCECYEFQMIUIQJRFVUVXFJYCADBFXGWKONRMTKEEQGUPYJYSPGRSWBRMGYXXCKQTGNZQRMHWMUZVYNJIBWABPLVAOJVCOVNJOSGDZEHLNQDQXME");
    msg.value = 0.0825731064921;

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
    msg.setTimeStamp(0.819512895605);
    msg.setSource(7037U);
    msg.setSourceEntity(84U);
    msg.setDestination(38397U);
    msg.setDestinationEntity(44U);
    msg.seq = 28055U;
    msg.sys.assign("GXZWAJTRKACFGWSHSHSPPAYILZCTMNNAQJUJVSHPOPMRMKSYLLCHOWHJKTQDGHORSQNJLXZWAKOCFFXQKUSXIMDZYHXUICYERIUMBBFZHXXGTDCYZRIYIVUWEFTJOUMLBZCLQDAKOEBBKLUIEQRVCQRSPOWMSQEIERDRWLGWWVIIQFXDCVAOSKVZNNGBV");
    msg.value = 0.596627780945;

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
    msg.setTimeStamp(0.775832675114);
    msg.setSource(27294U);
    msg.setSourceEntity(241U);
    msg.setDestination(41812U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.764082906905);
    msg.setSource(12172U);
    msg.setSourceEntity(144U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.490984767287);
    msg.setSource(58678U);
    msg.setSourceEntity(170U);
    msg.setDestination(46386U);
    msg.setDestinationEntity(107U);

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.46733144681);
    msg.setSource(11054U);
    msg.setSourceEntity(48U);
    msg.setDestination(404U);
    msg.setDestinationEntity(198U);
    msg.action = 93U;
    msg.longain = 1506350601U;
    msg.latgain = 3169437576U;
    msg.bondthick = 2905029961U;
    msg.leadgain = 1995705381U;
    msg.deconflgain = 2416555603U;

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
    msg.setTimeStamp(0.963078338894);
    msg.setSource(4551U);
    msg.setSourceEntity(221U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(39U);
    msg.action = 174U;
    msg.longain = 1090853546U;
    msg.latgain = 4069694020U;
    msg.bondthick = 3886262307U;
    msg.leadgain = 3815418485U;
    msg.deconflgain = 1115623783U;

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
    msg.setTimeStamp(0.864326525716);
    msg.setSource(14501U);
    msg.setSourceEntity(62U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(141U);
    msg.action = 165U;
    msg.longain = 2347976438U;
    msg.latgain = 4001071207U;
    msg.bondthick = 2722245700U;
    msg.leadgain = 484983556U;
    msg.deconflgain = 1067303468U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.470190104567);
    msg.setSource(23083U);
    msg.setSourceEntity(11U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(49U);
    msg.uid = 174U;
    msg.frag_number = 147U;
    msg.num_frags = 43U;
    const char tmp_msg_0[] = {101, -84, -92, 91, -50, 73, -77, 113, 8, 13, -86, -71, 19, 57, 108, 59, 75, 98, 56, 5, 110, 88, 37, -114, -51, 105, 15, 121, 102, 102, -103, -76, -96, -15, -51, 32, 58, -57, 116, -41, 85, 101, 51, -116, 125, -54, -80, -97, -128, -40, 77, -113, 74, 8, 51, -4, 83, -92, 70, -101, 1, 77, -120, 72, -28, -11, 28, 86, -88, -40, 110, 74, -35, 57, 49, 113, -109, 17, 11, 6, -61, 120, -31};
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
    msg.setTimeStamp(0.583606292895);
    msg.setSource(58317U);
    msg.setSourceEntity(9U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(125U);
    msg.uid = 254U;
    msg.frag_number = 217U;
    msg.num_frags = 189U;
    const char tmp_msg_0[] = {-37, -102, -15, 28, 118, -14, 23, -96, 44, -29, 13, 118, -53, -42, -29, 87, -31, 53, 30, 45, 54, -53, -32, 39, -36, -74, -73, 120, -60, -24, 115, -30, 107, 111, 94, -11, -19, -105, -8, 109, -98, 77, -80, 40, -92, -121, -5, -84, -43, 101, -120, 98, -63, -28, -9, -5, -29, 89, 121, -80, -30, -96, 110, -91, 42, 88, 20, -97, -98, -95, 108, -13, -29, 69, 44, 1, 25, 12, 101, 119, -65, 1, -88, 107, -96, 14, -8, 33};
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
    msg.setTimeStamp(0.393600001395);
    msg.setSource(62208U);
    msg.setSourceEntity(97U);
    msg.setDestination(23830U);
    msg.setDestinationEntity(153U);
    msg.uid = 72U;
    msg.frag_number = 74U;
    msg.num_frags = 16U;
    const char tmp_msg_0[] = {1, 4, 117, -122, -84, -65, 71, -57, 82, 47, 35, -107, -7, 79, -57, 92, -25, -6, -34, -50, -101, 59, 67, -127, 12, 46, 57, 38, -10, -42, -75, -93, -10, -89, -52, -99, -14, 47, -39, -81, -26, 42, 20, 90, -35, 93, -112, -115, 94, 114, -59, -57, -62, 81, 40, -68, -81, 12, -48, 62, -20, -111, -48, -71, -83, -17, 5, -119, 122, 112, 26, -110, -114, -17, 103, 43, -118, 107, -28, 115, -99, 11, -2, 123, 15, 4, -128, -101, 0, -68, 47, 9, 16, 31, -125, -112, -93, -128, -48, 103, 16, 52, 27, 96, -126, -18, 94, 92, -41, -6, -80, 120, -14, -54, 24, -22, 40, 29, -72, -64, -49, 42, -74, 126, 118, 105, -49, 94, 84, -51, -55, 53, -82, 12, -4, 38, -6, 106, 64, -112, -75, -79, 71, 3, 76, -48, -10, 68, -44, 29, -43, 81, -74, -101, 76, -56, 102, 71, 23, -34, 11, 32, -93, 75, -21, -33, -80, -127, 15, 22, 7, -54};
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
    msg.setTimeStamp(0.667075952634);
    msg.setSource(53465U);
    msg.setSourceEntity(74U);
    msg.setDestination(53704U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("KXJJRGUYOYUHVVFHSRRCKQBLCNJHGYJQOZLHXELBUPJEMDFWAYNKQWGYUPTXYDORXZBLVWWWMOTECDKAYOVVACQFPBZINORIMHUCZQGHSGPVZXNWHBCLRGTPMXO");
    const char tmp_msg_0[] = {99, 10, 98, 87, -29, -43, -29, -96, 116, -100, 58, 102, -98, 58, -3, 63, -33, 55, -91, 82, 14, 94, -88, 60, 93, -107, -99, -112, 121, -69, -124, -128, 27, -14, -95, 10, 94, 56, -30, -123, -93, -80, -112, -80, -31, -128, 19, 97, -56, 41, 12, 84, 41, 108, -106, -33, -126, 45, -113, 55, 46, 30, 2, -76, 110, -24, 111, -4, 32, -50, -83, 9, 32, -64, 107, 59, -111, -31, 59, 36, 79, 124, 70, -9, 67, 3, -11, -36, -28, -49, -30, 0, -15, -112, 68, 119, 95, -92, 30, -51, -96, -82, -68, 52, -110, 93, -16, 69, 117, -80, -6, 88, -39, 20, -34};
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
    msg.setTimeStamp(0.741154335378);
    msg.setSource(349U);
    msg.setSourceEntity(23U);
    msg.setDestination(65293U);
    msg.setDestinationEntity(138U);
    msg.content_type.assign("MOWIMLROXZKQCYLDFSIVTRZDUWDNAHERQRXMFQNULGDKCNZZWIVXTBICLHBLJAPOEANVCKVTUMTVPC");
    const char tmp_msg_0[] = {70, 125, 63, 85, -2, -71, -121, 76, -8, 93, -28, -103, -54, 58, 88, -17, -86, 122, 86, 37, -78, -124, -74, -4, -128, 109, 121, 77, 31, -94, 61, -40, -6, -119, -121, 123, 117, 7, 12, 66, -28, -14, 114, 81, 113, 41, -62, 115, -79, -103, 10, -28, 37, -34, 43, 65, -80, -51, -8, 109, 126, -66, -77, -106, -75, 103, -70, 63, 71, -44, 49, 38, -86, 46, 4, 74, 41, 8, 6, -118, -38, -31, -114, -68, 73, 43, 53, 87, -34, -122, 100, -72, 63, 37, -66, -44, 58, -123, 119, -67, 56, 99, -59, 3, 67, -11, -28, 91, -5, -60, -95, 122, -102, 124, 122, -99, 118, 81, -15, -63, -124, -70, -46, -113, 67, -17, 91, -125, -84, 85, -121, -127, 92, -54, 65, -7, 53, -111, -123, 87, -44, 60, 17, 126, 86, 21, 113, -52, 99, -70, 27, 52, 33, -36, -7, -11, 32, 104, -32, -31, -4, -87, -45, 24, 85, 61, -108, 87, -39, 69, -5, -120, 67, 126, 22, 104, -20, -90, 57, 85, 58, 16, -4, -120, -5, 64, -87, 58, 16, -91, 37, 25, -116, 71, -26, 47, 43, -44, -68, 115, -31, -94, -33, 39, -2, -62, 94, -60, 93, -74, -26, -20, -30};
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
    msg.setTimeStamp(0.772199382211);
    msg.setSource(701U);
    msg.setSourceEntity(70U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(100U);
    msg.content_type.assign("VGLBOGDYMPMZSEAMBMBIKIHKWFXH");
    const char tmp_msg_0[] = {13, 99, 18, -14, 32, 7, -127, -17, 50, -73, 54, -60, 122, -36, -33, -66, 103, 7, 1, -106, -87, -90, 59, 45, 45, -9, 73, 51, 71, -72, 104, -100, 24, -94, -38, -48, 91, 54, 119, -38, -43, -89, 35, -10, -86, -108, 117, 28, 112, -3, -62, 107, 121, 126, -28, -19, -101, 121, -80, -67, 33, 66, -60, 70, -94, 36, 62, -45, -51, 65, -49, -3, 13, -94, 103, 88, -11, 64, -118, -37, -42, 36, 55, -72, -53, -111, 63, -91, -112, -72, -103, 98, -64, 32, -15, 65, 59, 44, -35, -24, -98, 94, 24, -58, -126, -73, -1, 61, 67, 37, 21, -71, 25, 5, 49, -112, 19, 106, -43, 55, 83, -11, -37, -10, 102, -7, -2, -114, -89, 0, 25, 60, -124, -53, 92, -6, -10, -18, 121, -62, 13, -106, -9, -98, 76, -72, 52, -47, 11, -29, 28, -100, 35, 17, -30, -95, 104, -17, 80, 85, -111, 19, -11, -15, -56, 79, 49, -68, 123, 26, -77, -26, 41, 90, -18, -19, 52, -125, -51, -17, 26, 121, -58, -102, -119, 85, -43, 119, -19, -77, -53, -127, 116, -16, 39, 43, -81, -82, 20, 25, -10, 5, -77, 123, -104, -4, -24, -49, 74, 37, -66, 112, -6, 80, -103, 69, -31, 40, -82, 32, -124, 76, 31, -2};
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

  return test.getReturnValue();
}
