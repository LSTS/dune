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
// IMC XML MD5: dee1a07b7cf71aaf7780595f5272a1ad                            *
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
    msg.setTimeStamp(0.2953918715);
    msg.setSource(50060U);
    msg.setSourceEntity(190U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(212U);
    msg.state = 211U;
    msg.flags = 27U;
    msg.description.assign("FEHIMDPZJRIZOOGXZQYJCOCYDXCFUNOOSPPLBGSWPZVNXJQLZLTETMAHIFBMIQXDTGMW");

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
    msg.setTimeStamp(0.801822753042);
    msg.setSource(62018U);
    msg.setSourceEntity(251U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(218U);
    msg.state = 43U;
    msg.flags = 189U;
    msg.description.assign("ZQADMTJIQSIJKVNUOZEJUFVFMCXVHOIFSRTDNJZDLNXSXSQBBAEUFEGXLJZFEUMRYZEVLLPYGGAMBVEPFVLDPNTJNCKCRBEM");

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
    msg.setTimeStamp(0.856421413299);
    msg.setSource(2161U);
    msg.setSourceEntity(81U);
    msg.setDestination(45769U);
    msg.setDestinationEntity(250U);
    msg.state = 54U;
    msg.flags = 199U;
    msg.description.assign("NHABEMHYURUKPVTMBZSMFKRETXOXLEIAVVRJCARDMODDGKIAZAQLWKCCZDTQWEZMPOVYYLPMCFNTSTJRJWPDBOARTFSPKSRCCFVUQKIXMLSORYLHIBZEJZRODJSZEUCSIVLMTYLDTJNZWNDUCYIHHQAFHJKYXPCFKNOWSNXLBXMGQGIJOYQVDBKUVBWXGSVNQCZKSEHTNHPFEPM");

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
    msg.setTimeStamp(0.611688028232);
    msg.setSource(28590U);
    msg.setSourceEntity(41U);
    msg.setDestination(54535U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.599768540325);
    msg.setSource(44159U);
    msg.setSourceEntity(98U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.408711463203);
    msg.setSource(53866U);
    msg.setSourceEntity(83U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.520876086377);
    msg.setSource(57624U);
    msg.setSourceEntity(150U);
    msg.setDestination(58216U);
    msg.setDestinationEntity(160U);
    msg.id = 57U;
    msg.label.assign("DURYAELSXFULORADKMOANLDTNVV");
    msg.component.assign("OHSEQUFSJIBECIUCCUVGPCKEMIEESBJRXTDLNMHDZSMCOZONQDREBKOBNFLSIHRVIOGJGGURMVDCJJXSUZPKVXFOGQLYITAOTX");
    msg.act_time = 6934U;
    msg.deact_time = 53158U;

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
    msg.setTimeStamp(0.376748423686);
    msg.setSource(46249U);
    msg.setSourceEntity(185U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(72U);
    msg.id = 119U;
    msg.label.assign("RIHRGKGDOTWGWLPEEUBTOHBXOEQIJJTCZNDRXZQPYNIBKYEFXYVWPMIFLPBV");
    msg.component.assign("LHDGAEVQIIIASGYPMBTYAJRDVZ");
    msg.act_time = 8930U;
    msg.deact_time = 56447U;

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
    msg.setTimeStamp(0.253344158856);
    msg.setSource(47405U);
    msg.setSourceEntity(53U);
    msg.setDestination(34391U);
    msg.setDestinationEntity(126U);
    msg.id = 86U;
    msg.label.assign("SDOQTKIJZRCFQBOFZWIGCQVZZJPTWKCGQXZXTEKOMFTXJBNPNNRJAEVWCOQJDCKOXGSUMDGANURNKDVIPMNMYUCHFRDUSEMSRIXUYCRBJWTFHMEERXDZRBPNFHCUREGDMAAVFTYQN");
    msg.component.assign("EPMWKKCZXGFNPNTDKFLWQARDILWLQHVEFJETMVVRANMCHZUUVUEJSUBVVAIYHCPCBWERCKOFOZLQBJJJFIZASBSOONWHADXOPGB");
    msg.act_time = 29232U;
    msg.deact_time = 59067U;

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
    msg.setTimeStamp(0.675264485881);
    msg.setSource(12203U);
    msg.setSourceEntity(245U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(172U);
    msg.id = 230U;

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
    msg.setTimeStamp(0.0542294350247);
    msg.setSource(30758U);
    msg.setSourceEntity(43U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(30U);
    msg.id = 94U;

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
    msg.setTimeStamp(0.590734317163);
    msg.setSource(30115U);
    msg.setSourceEntity(153U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(93U);
    msg.id = 136U;

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
    msg.setTimeStamp(0.505878738046);
    msg.setSource(37437U);
    msg.setSourceEntity(3U);
    msg.setDestination(55663U);
    msg.setDestinationEntity(185U);
    msg.op = 185U;
    msg.list.assign("YWLGWACNIHOMMDPNDZLKRWHEDDPJBCIQYRVVXNBXKQXILIUCTFCSIZBYWPKXJHGZSZOKAMFJLWYIBRYTOEAYUJBOKPUZHVLLRAJKDWUMSYNGBCOGHGSTODLQHLDLIARYGNTRXTXGUUEOJREZIEVQGKSAMKCZETXHEMVTCFTDSPUPREUFFIRBABFNFXNTVPWULEQWWAQDFSPCEHRGYSWJIQDNJVYCZQSFNPHAGJVTMBVXPAH");

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
    msg.setTimeStamp(0.973778026099);
    msg.setSource(45663U);
    msg.setSourceEntity(190U);
    msg.setDestination(10357U);
    msg.setDestinationEntity(192U);
    msg.op = 252U;
    msg.list.assign("UUIDKTRNFDGLBULRQINZOCMDQJMGFPOYAFHDKHEZLLEOUBWZCDOGHSOXONYZPUCQKXMTJIRKJDVKKFVPTZHMATYWTXSZGXWAFRNOEXHMJIZXHULWSVBENBAVRUAWMCLYQFLSXQHQUGCEQGHZWSJFPRHFMIESIVUJNPUJYPCIOYCSDMAQJJOVPAQFAVBSBLYWINGLJEFXZTI");

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
    msg.setTimeStamp(0.893633207096);
    msg.setSource(5993U);
    msg.setSourceEntity(187U);
    msg.setDestination(15838U);
    msg.setDestinationEntity(74U);
    msg.op = 212U;
    msg.list.assign("FXGHWEJXAAZCNGDPMLQVZFMSTSUBQGAWWNKVEUCGERICVVKKBXNPMZWQLHITOHRSTNWLKMWWFIBOMUKYLFEOBTECOIDONWEPJASPGIJBOSLIYEJVMKEFSWHFDOFTVXODGSCUVNFQPMJRHTAOUVQQGV");

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
    msg.setTimeStamp(0.916651724957);
    msg.setSource(42029U);
    msg.setSourceEntity(177U);
    msg.setDestination(107U);
    msg.setDestinationEntity(249U);
    msg.value = 201U;

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
    msg.setTimeStamp(0.0811897965259);
    msg.setSource(9466U);
    msg.setSourceEntity(114U);
    msg.setDestination(24430U);
    msg.setDestinationEntity(170U);
    msg.value = 40U;

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
    msg.setTimeStamp(0.270990756453);
    msg.setSource(29353U);
    msg.setSourceEntity(113U);
    msg.setDestination(50440U);
    msg.setDestinationEntity(246U);
    msg.value = 143U;

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
    msg.setTimeStamp(0.325557293663);
    msg.setSource(29465U);
    msg.setSourceEntity(120U);
    msg.setDestination(25402U);
    msg.setDestinationEntity(252U);
    msg.consumer.assign("OTDFSCJRSOEEHELGDXXZDOVHUXCMSHPHPLAIWGUKLUPWBYWMADDYGEAKCEUPGIKMBQUJQTWSKJWGQFMKTGJDEPIKZVYWNLYRBVGVLYGTXMQDNC");
    msg.message_id = 47357U;

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
    msg.setTimeStamp(0.670953755015);
    msg.setSource(17369U);
    msg.setSourceEntity(118U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(154U);
    msg.consumer.assign("PWRSSQEVRFTVGQGMZEVLCTZHHLESEAYEHVVUOMLXOGDEBBZIPZOETPFULJVDNUOEMTXJFISTXTSEQXSDPVPHUCJLCOPUWGKBAYXQWDPMUMXBKDYJQAWUDCWHDMGFFOQSGQDAFNUIBIKUUALHCNBZSNPJKCKWNHROWVYWZMZYGAIJYQJKIKCBQMEGJRYAPRFJGSLYJKXOZIRHYIHNNDT");
    msg.message_id = 9655U;

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
    msg.setTimeStamp(0.822855265664);
    msg.setSource(7003U);
    msg.setSourceEntity(159U);
    msg.setDestination(5195U);
    msg.setDestinationEntity(143U);
    msg.consumer.assign("XMWRXYYAJJDUJTSCIZUMYWGEITXIHNHBFTCHPRKUSCXNTSZDRNNGOOKFGTGAODLWWGLCAVAAIGKYDKCKGEDSQBMWFNTLBITVJRIIZYCKBVUCFSQZNFMHDLEKJSMVBQXMDHEBKPWPHCAPKVPGNEWOUIESDWNGZYLUVSIRZUEZXVOUYMVYQAOELZMVFQPFDRQLXOOFRVHJUFYLXBHBFE");
    msg.message_id = 25807U;

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
    msg.setTimeStamp(0.392959414574);
    msg.setSource(10310U);
    msg.setSourceEntity(208U);
    msg.setDestination(37287U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.589642188621);
    msg.setSource(2406U);
    msg.setSourceEntity(225U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.410195117898);
    msg.setSource(28285U);
    msg.setSourceEntity(207U);
    msg.setDestination(17673U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.614315947458);
    msg.setSource(57404U);
    msg.setSourceEntity(196U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(200U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.989040230525);
    msg.setSource(6474U);
    msg.setSourceEntity(231U);
    msg.setDestination(14838U);
    msg.setDestinationEntity(72U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.586158278291);
    msg.setSource(20927U);
    msg.setSourceEntity(116U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(93U);
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
    msg.setTimeStamp(0.22122427477);
    msg.setSource(36879U);
    msg.setSourceEntity(234U);
    msg.setDestination(57868U);
    msg.setDestinationEntity(205U);
    msg.total_steps = 147U;
    msg.step_number = 183U;
    msg.step.assign("ZZYJVSESHRUTISFPEYOEATPHNAVMGDDPSBSZKDWEJVGUWCIAQUPWJGHCFEFCZJQWQBWQTPNXNNBFEIHFNADUTHSGEOHRKZAUWMZKYOMQNLUTJTYAPSZKJTLROANGDVLOYCQTIDHXFVYPZBVBONIXWIIBJDMKLNXCRLECQNTYBYAPKRQXKXTMDZXERFGKWGSXWOLCMYGJYLUAELMCKPMWDRFHVLBUCDVOXGBKGSOORPLQFZVHJ");
    msg.flags = 83U;

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
    msg.setTimeStamp(0.850555992745);
    msg.setSource(52749U);
    msg.setSourceEntity(133U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(113U);
    msg.total_steps = 56U;
    msg.step_number = 20U;
    msg.step.assign("CFODXVQOBKLDEOEMSZONYHUARBWYPDBMLFTUQNA");
    msg.flags = 64U;

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
    msg.setTimeStamp(0.812019695339);
    msg.setSource(18858U);
    msg.setSourceEntity(251U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(133U);
    msg.total_steps = 32U;
    msg.step_number = 83U;
    msg.step.assign("YEBRRFEOBBZKYFJIYRTBYOAVQCWABUMWZTPETEPAPJOMCNEUUTMBWXUJFZKUOYQWZGNMZWVNSFSEZITILGQGUGLHXVMOHLEIXUOCVCBAAWGNVEXOQXGLOXJKQXBGSVNUQIZFLKHXRKRSFNRUDYKXZTNFMJLVMBAYVZKPPPIDWTCFKJDNTQGPHVJCYGKAELDSSRGISCBRPDOWYAEKSZHOLIWCDDHVNIHFDSQ");
    msg.flags = 9U;

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
    msg.setTimeStamp(0.418313191241);
    msg.setSource(62693U);
    msg.setSourceEntity(35U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(74U);
    msg.state = 198U;
    msg.error.assign("QSCXHKTUPLCYNBMZGSBKKKQXJICAVJNZDILTSXZWPMXAOLVYNFYWOEQRPQVNDUSIOUWMDSENPHRQFAIXJIENIFJOLSFG");

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
    msg.setTimeStamp(0.315970335837);
    msg.setSource(60511U);
    msg.setSourceEntity(198U);
    msg.setDestination(25237U);
    msg.setDestinationEntity(219U);
    msg.state = 149U;
    msg.error.assign("WAEGRJWXIORBZFVQWUOPIKOGVBIVLNMASFMHICQLMPFMTAJNUJGYUIHWTPZJHWCGMCOVUHOEGWYZCMEKRLSMQMYFRXJKHMRYIKSJUWGNKYQUVNFDPQTWHAEFJQUEFVBSTYPDLKJQLORXISLPDYESXUCAZD");

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
    msg.setTimeStamp(0.952416241229);
    msg.setSource(7885U);
    msg.setSourceEntity(46U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(228U);
    msg.state = 185U;
    msg.error.assign("AHFWONQINUTCZWAFFLPLDAMWPAYTYBGRYLCBVRJOWCJHZZNXBOEXTEU");

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
    msg.setTimeStamp(0.609765304247);
    msg.setSource(49547U);
    msg.setSourceEntity(12U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.485172569703);
    msg.setSource(30190U);
    msg.setSourceEntity(58U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.598607271633);
    msg.setSource(50595U);
    msg.setSourceEntity(238U);
    msg.setDestination(19837U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.313022084808);
    msg.setSource(36580U);
    msg.setSourceEntity(121U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(219U);
    msg.op = 23U;
    msg.speed_min = 0.786247368307;
    msg.speed_max = 0.698845735784;
    msg.long_accel = 0.419414772077;
    msg.alt_max_msl = 0.51470268523;
    msg.dive_fraction_max = 0.402800561747;
    msg.climb_fraction_max = 0.316694087129;
    msg.bank_max = 0.0377895726206;
    msg.p_max = 0.488935626612;
    msg.pitch_min = 0.199272217956;
    msg.pitch_max = 0.166152083678;
    msg.q_max = 0.843882796762;
    msg.g_min = 0.395963141459;
    msg.g_max = 0.41242264093;
    msg.g_lat_max = 0.118574926021;
    msg.rpm_min = 0.963629867121;
    msg.rpm_max = 0.993005240449;
    msg.rpm_rate_max = 0.00556306509496;

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
    msg.setTimeStamp(0.522006031655);
    msg.setSource(10426U);
    msg.setSourceEntity(37U);
    msg.setDestination(34338U);
    msg.setDestinationEntity(42U);
    msg.op = 129U;
    msg.speed_min = 0.670658673084;
    msg.speed_max = 0.570659225316;
    msg.long_accel = 0.584942209041;
    msg.alt_max_msl = 0.989188674486;
    msg.dive_fraction_max = 0.619361499161;
    msg.climb_fraction_max = 0.422279605598;
    msg.bank_max = 0.79766472859;
    msg.p_max = 0.717509299261;
    msg.pitch_min = 0.726673267581;
    msg.pitch_max = 0.174763554815;
    msg.q_max = 0.686058901339;
    msg.g_min = 0.441747424582;
    msg.g_max = 0.802422032596;
    msg.g_lat_max = 0.236474030909;
    msg.rpm_min = 0.0855351381574;
    msg.rpm_max = 0.234338885901;
    msg.rpm_rate_max = 0.0362651536329;

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
    msg.setTimeStamp(0.642656973472);
    msg.setSource(7038U);
    msg.setSourceEntity(74U);
    msg.setDestination(33829U);
    msg.setDestinationEntity(181U);
    msg.op = 171U;
    msg.speed_min = 0.164558918285;
    msg.speed_max = 0.149110049491;
    msg.long_accel = 0.875735234893;
    msg.alt_max_msl = 0.831097655757;
    msg.dive_fraction_max = 0.339981322596;
    msg.climb_fraction_max = 0.123842417458;
    msg.bank_max = 0.862657742886;
    msg.p_max = 0.334086135766;
    msg.pitch_min = 0.924792534488;
    msg.pitch_max = 0.751456892762;
    msg.q_max = 0.0402964710997;
    msg.g_min = 0.819078792914;
    msg.g_max = 0.260791099171;
    msg.g_lat_max = 0.30224650482;
    msg.rpm_min = 0.377652088888;
    msg.rpm_max = 0.328345211382;
    msg.rpm_rate_max = 0.761163700437;

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
    msg.setTimeStamp(0.245268678682);
    msg.setSource(50612U);
    msg.setSourceEntity(10U);
    msg.setDestination(13948U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.155233520986);
    msg.setSource(22287U);
    msg.setSourceEntity(172U);
    msg.setDestination(25139U);
    msg.setDestinationEntity(121U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.0992566827302;
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
    msg.setTimeStamp(0.769125014816);
    msg.setSource(6952U);
    msg.setSourceEntity(14U);
    msg.setDestination(16230U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.559593770572);
    msg.setSource(37169U);
    msg.setSourceEntity(45U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.714821365571;
    msg.lon = 0.677497800095;
    msg.height = 0.291743635392;
    msg.x = 0.888259399922;
    msg.y = 0.0166618996423;
    msg.z = 0.899724294851;
    msg.phi = 0.512790933736;
    msg.theta = 0.283124846087;
    msg.psi = 0.502544385682;
    msg.u = 0.988620021995;
    msg.v = 0.0523705744536;
    msg.w = 0.56898262957;
    msg.p = 0.495279392837;
    msg.q = 0.380296213247;
    msg.r = 0.70820207435;
    msg.svx = 0.190959056701;
    msg.svy = 0.0332427337762;
    msg.svz = 0.998001559467;

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
    msg.setTimeStamp(0.0558936606768);
    msg.setSource(21124U);
    msg.setSourceEntity(112U);
    msg.setDestination(49400U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.601345091072;
    msg.lon = 0.908704051679;
    msg.height = 0.509966517672;
    msg.x = 0.877941746955;
    msg.y = 0.051949555108;
    msg.z = 0.930232332946;
    msg.phi = 0.0572078634007;
    msg.theta = 0.180718447978;
    msg.psi = 0.344924910843;
    msg.u = 0.777694794433;
    msg.v = 0.931335783729;
    msg.w = 0.189043168848;
    msg.p = 0.644603751077;
    msg.q = 0.784975392062;
    msg.r = 0.0475528296636;
    msg.svx = 0.475204932336;
    msg.svy = 0.933994443013;
    msg.svz = 0.880871535236;

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
    msg.setTimeStamp(0.789193377165);
    msg.setSource(28126U);
    msg.setSourceEntity(105U);
    msg.setDestination(10968U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.780412457462;
    msg.lon = 0.436254535206;
    msg.height = 0.241638304572;
    msg.x = 0.139135970032;
    msg.y = 0.249656945457;
    msg.z = 0.657029789591;
    msg.phi = 0.410495579599;
    msg.theta = 0.153369285315;
    msg.psi = 0.703241942542;
    msg.u = 0.433940273301;
    msg.v = 0.0428264526246;
    msg.w = 0.605724650909;
    msg.p = 0.687723686801;
    msg.q = 0.567381268015;
    msg.r = 0.929672783782;
    msg.svx = 0.664730782129;
    msg.svy = 0.303083760734;
    msg.svz = 0.157848468931;

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
    msg.setTimeStamp(0.336496801078);
    msg.setSource(41395U);
    msg.setSourceEntity(142U);
    msg.setDestination(25088U);
    msg.setDestinationEntity(219U);
    msg.op = 170U;
    msg.entities.assign("QAJBBCICVSQYPILTKIACNWPPDEICYFIQUJDXHJHNBIOQKMVPWRXWEHWCVLJFYFUABUHSRMRLTAHNGDAHGNXYNROGZVFPHWEKWSKICNKTMZBCCSAJEEEMQQUGYLGWQQSQABXOXYBVLFDTDFJRTJR");

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
    msg.setTimeStamp(0.985320365058);
    msg.setSource(49124U);
    msg.setSourceEntity(178U);
    msg.setDestination(18592U);
    msg.setDestinationEntity(109U);
    msg.op = 14U;
    msg.entities.assign("RKHOIFQAXXLKJEBJQYPIVCRFAZLUDRNJQUVDOIJHNWSYPMQHFQVCXBGKOAIEFLICOASYWNTCADWELKIXJUWKFUTEWGBZJUOMJZFILETASYCQMHBKZCLRTZWSKUHGYOXPLMUQVPDWHEHTXSLZWNGYVMMHGJZDIDAGMRWBNUFBGXPJRBHXYDFENOVPZGCTYCBLNZLNXKEPERQDTAINVQIRSPTBZAO");

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
    msg.setTimeStamp(0.658202866984);
    msg.setSource(19037U);
    msg.setSourceEntity(83U);
    msg.setDestination(32670U);
    msg.setDestinationEntity(57U);
    msg.op = 222U;
    msg.entities.assign("URWBHBOIQYFJPCAAOGAKIKPZPJAHDKXGTLWDSGGJIWGHTZWQSTBTRNKCMJTFMRMPUIYDTIBQYRJAMXYZUBWNUAXXZSNTZCNQQKVDFWTREDOMJKQGFLEJVBUESVPVBGNLSXWTMIPCZPSLSILUZOCCYEVBVSDVOPLFHPJFORARLHNHNPSMQUGJLDQHNXXHXFIWZFAUSWCZMOZYCWEIKMXKLXFBBDRVHMCVYEENEGKCFY");

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
    msg.setTimeStamp(0.530889717315);
    msg.setSource(10239U);
    msg.setSourceEntity(67U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(240U);
    msg.type = 66U;
    msg.speed = 21403U;
    const char tmp_msg_0[] = {-81, 93, 31, 38, 35, -115, -101, -32, -77, 52, 85, -57, 47, 37, -64, -33, -110, 47, -91, 23, 89, -92, 63, -38, 27, 75, 6, -21, 107, -82, 9, 54, -125, 74, -110, 71, -28, -71, 117, 32, 35, -103, -58, 72, 63, 100, 117, 50, 86, 95, -121};
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
    msg.setTimeStamp(0.329689975514);
    msg.setSource(64575U);
    msg.setSourceEntity(175U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(224U);
    msg.type = 41U;
    msg.speed = 11040U;
    const char tmp_msg_0[] = {30, -111, -120, 90, 40, 31, -117, -61, 67, 66, -9, 89, 51, -123, 19, -107, 13, 55, -103, -22, 69, -99, 114, 76, 87, -11, 89, -12, 41, 103, -51, 13, 9, -8, 17, -115, 46, 50, 45, -115, 114, 118, -113, 104, 7, 93, -98, -18, -23, -40, -16, 88, -119, -114, 64, -111, 93, 50, -64, -53, 117, 109, -128, -76, -10, 68, 9, 117, 53, 98, 107, 44, -114, 126, 79, -71, 21, 22, 1, 126, -63, 87, -90, 94, -68, -80, -8, 108, 59, -34, 103, -2, 65, -6, -109, 81, -47, -2, 101, 44, 52, -87, 117, -102, -21, 47, -8, -117, 115, 71, 6, 78, 56, -102, 75, 74, 6, -22, 5, 26, 21, -96, 35, -69, 12, 125, 46, -44, -100, 109, -61, -101, 2, -57, 61, -119, -69, 57, 101, -84, -73, 31, 87, 58, -25, 106, 48, -79, 105, -2, -21, -58, 88, -75, -80, -33, -20, 31, -21, -54, -47, 14, -110, -42, 104, 119, -61, 70, -86, 79, 22, 70, 13, 122, 7, -33, 10, -107, -47, -6, 16, -125, 63, 98, 45, -115, 117, 30, 92, 97, -117, -19, -89, -108, 103, 3, 32, 15, 96};
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
    msg.setTimeStamp(0.0834179714976);
    msg.setSource(17496U);
    msg.setSourceEntity(60U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(190U);
    msg.type = 181U;
    msg.speed = 13081U;
    const char tmp_msg_0[] = {-41, -106, 43, -47, 16, -105, 54, -87, 38, 62, -93, -121, -123, -49, -13, 42, -127, 116, 18, 5, -39, 3, 28, 83, -104, 64, 35, 68, 81, -122, -8, 5, 117, -90, 61, 17, 100, -30, 120, -60, 75, 103, 65, 117, 12, 111, 93, -3, 84, -44, -94, 23, -108, -70, 66, 68, 78, -120, 36, 124, 2, 4, -83, 100, 72, -8, -119, -97, 31, -70, -2, -13, 118, 14, 75, -65, 83, -57, 26, 58, 59, 14, -67, 109, 17, 75, -123, -88, -7, 7, 49, 86, 115, 49, -59, -34, -110, -117, -69, -14, -42, -92, 75, -104, -20, -60, 58, 61, -49, 89, 106, 63, -88, 13, 112, -11, 9, -60, 95, -36, 41, 46, -95, -115, 121, 81, 93, 8, -13, 4, 33, -19, -79, -21, -94, -86, -71, -36, -36, -85, -71, -80, 126, 65, -84, -58, 40, 29, -34, 12, 25, -30, 17, 22, -84, -64, 105, -82, 112, 43, -102, -49, -41, -123, -56, -124, 30, -86, -43, -77, 104, -79, 120, -2, 47, -46, -56};
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
    msg.setTimeStamp(0.235976558378);
    msg.setSource(31420U);
    msg.setSourceEntity(21U);
    msg.setDestination(57129U);
    msg.setDestinationEntity(227U);
    msg.op = 235U;
    msg.tas2acc_pgain = 0.614594839291;
    msg.bank2p_pgain = 0.321670295752;

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
    msg.setTimeStamp(0.230227343402);
    msg.setSource(54652U);
    msg.setSourceEntity(230U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(2U);
    msg.op = 214U;
    msg.tas2acc_pgain = 0.191649560932;
    msg.bank2p_pgain = 0.981277799701;

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
    msg.setTimeStamp(0.0680227176864);
    msg.setSource(43677U);
    msg.setSourceEntity(204U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(27U);
    msg.op = 64U;
    msg.tas2acc_pgain = 0.0761545261659;
    msg.bank2p_pgain = 0.309473458847;

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
    msg.setTimeStamp(0.584531335127);
    msg.setSource(57967U);
    msg.setSourceEntity(254U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(180U);
    msg.available = 3674352438U;
    msg.value = 22U;

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
    msg.setTimeStamp(0.598267536934);
    msg.setSource(8064U);
    msg.setSourceEntity(5U);
    msg.setDestination(25442U);
    msg.setDestinationEntity(216U);
    msg.available = 2062711751U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.470054323934);
    msg.setSource(1163U);
    msg.setSourceEntity(184U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(254U);
    msg.available = 1991488295U;
    msg.value = 9U;

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
    msg.setTimeStamp(0.11622618442);
    msg.setSource(31084U);
    msg.setSourceEntity(158U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(246U);
    msg.op = 134U;
    msg.snapshot.assign("FIEBKRPTVGUFRUJDPCHSXFTQXUNHYZZPSUHONQPXDQUUOHGSFNSDMPWGDEKQPJIHIBZCBAPXKQCLAGDIYJSAUTYDIMSYLAIOWNNMNGLVGAOTVVYMMRCOZEQSJULABVGWCBRAOKTNLIOQHUTMFACLMFVZVTIEGEDFASRTEWFZOZYW");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50268U;
    tmp_msg_0.off_x = 0.352449822965;
    tmp_msg_0.off_y = 0.108272641674;
    tmp_msg_0.off_z = 0.175773826982;
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
    msg.setTimeStamp(0.768195124215);
    msg.setSource(11680U);
    msg.setSourceEntity(224U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(46U);
    msg.op = 105U;
    msg.snapshot.assign("TXWEECCSJHCXXMPKGAMPVZOWIWRHRUHOKZGTXDEBJKUNYYTBEUVBVIUPNFHLMCRVQSIBYQJPHXFUOLVBQWFLVUNBYKRSUONBTDIIJDFUJJVKRLISMDXYYFWHVTMEIAZQGXCUCLGDDAPBJOZQDHRZTNTATWCLBUYVHSCRECMJKMPPJMLYPNRSZGXAIZF");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GEQYDHOHHMGQUSJFSWADOCZHLEBXRIDVDZOHGTTMOMMIBEYWXJPZKEDOVUYBGNCZLOBRGFMCE");
    tmp_msg_0.lat = 0.952878362228;
    tmp_msg_0.lon = 0.875937400941;
    tmp_msg_0.depth = 0.568116412217;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 220U;
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
    msg.setTimeStamp(0.133104164518);
    msg.setSource(55982U);
    msg.setSourceEntity(94U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(62U);
    msg.op = 160U;
    msg.snapshot.assign("YSFLDTCXQFDKKAOWMTOESVURAZZWZELWBQPQHQQKMMVLGXPYAFRKROSQOGLTPYEFONESDTJHGQJZOYWYVYXRCLDTBHQZWDABXICRUXVXDSIBQLSFT");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 165U;
    tmp_msg_0.op = 68U;
    tmp_msg_0.request_id = 54443U;
    tmp_msg_0.plan_id.assign("BYMNRQEZFDSLDMRENJETYCHUMECUBAQYDPHEIBHVKFRCKCOHSIZDWTDISXEAVUZNNOPSTCVLXZIQXJMOKXHYQVCMYDSHNAKHLKLWALNUILYFCEGJGXOZBNFUTJLLZG");
    tmp_msg_0.flags = 60987U;
    IMC::DissolvedOrganicMatter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.277197927991;
    tmp_tmp_msg_0_0.type = 113U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("EREJTFCVICQYUNYGUEMQRLVICGGQSALVHBZOTUCWYWWQOQUAGBDFUOWZZDXMKJHOMICHSJFLVSVVMWNPODZCHKXJTVYHJYTFEPLCZZKKSCNIE");
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
    msg.setTimeStamp(0.0451193959038);
    msg.setSource(14417U);
    msg.setSourceEntity(201U);
    msg.setDestination(29789U);
    msg.setDestinationEntity(85U);
    msg.op = 251U;
    msg.name.assign("ETWNFCJWJXJCZWMYCCCSAYETDWINCKLIDHTWDQVDSITLYQSUKEYABOVBZRQGXAURYRPNAGGLMXZLIHJBNZPGTRKCPAVIQYGYEDLBVOZJREJAGB");

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
    msg.setTimeStamp(0.348390082949);
    msg.setSource(523U);
    msg.setSourceEntity(185U);
    msg.setDestination(64969U);
    msg.setDestinationEntity(103U);
    msg.op = 98U;
    msg.name.assign("JPEAIGDZYIMJHWDNNDXPGQFNDKEUOOUFQIHIIPVJXPGNGBOCAMRNGLFDYWLJTPKTAFZECVOUUWEOHLZKHE");

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
    msg.setTimeStamp(0.273530485556);
    msg.setSource(47185U);
    msg.setSourceEntity(187U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(193U);
    msg.op = 53U;
    msg.name.assign("VIMXHCFJIYALUFOJINDJDNFMNEZBUYSPITFTDGWZZINVKKECAYWWAXMWFRSVQYGINAQYTCDPMDOSRADLGTZGJSX");

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
    msg.setTimeStamp(0.636889237343);
    msg.setSource(7481U);
    msg.setSourceEntity(57U);
    msg.setDestination(799U);
    msg.setDestinationEntity(161U);
    msg.type = 226U;
    msg.htime = 0.367391424803;
    msg.context.assign("IWJSBWDYTCWGJSGNPRLCXXXQYTTGOOBOBYILDCNUXQNAWGUAKHCJFZTMMVDXBFZSRZLSHPOYFPKUIOBXLQIIJMPEZVQVMACQHZYRQPGDVJVGLVRCJAQZDGNMTESLADVBKCHBRGXFJSMORWADFBKCHQLFEBXTYUFQMYFUVZPKSHEFNNMWSQJJOAHCURNELUKVTETCRREYNSAFVOUHBOAYZKDKGPYWWEUWSZLLZ");
    msg.text.assign("LZJCMKRLRTINCCLKFJADMCMAURBTXSOCSTCXRORHKYFQMZQOVHZMTIWMHPBPGTWYFPGUFLWSXDAJRRVIEVUIYNFXFHSNDTCSBBWZDSAQLFQGBSOQILMWPKFOMVPRNIUHZABCNWIVSEDMTFPWZBEIQOOJDJYQJNSAQDKWOXQUMWYWAUAJLIQPJCVXYJKXXBPPXENUELEGYVVBKILDNGDHTGNHHGGHPAUTYYOGVZR");

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
    msg.setTimeStamp(0.23618588459);
    msg.setSource(39966U);
    msg.setSourceEntity(54U);
    msg.setDestination(32212U);
    msg.setDestinationEntity(100U);
    msg.type = 188U;
    msg.htime = 0.436456893237;
    msg.context.assign("CBYKMYLZPMXMDLVVQDBTSPCVBTNEPKKMINJRSVFGBUSXHQBSPSOBFWXFRYILTZHENHCLREUTMZEGCJLUIIHHCQKMAAPFLMSPXSYFZDINJEXOZUANTDRWCJSCULZJBHIYOINYXUCRGWJGAXGJALG");
    msg.text.assign("ASCYLUHZPCUWRRTKSZXHXZILMQNHOYDRTHJSMFXVIGVAJECKYVBMODBQLEOPCSECAWZJBBYSUPKQRUSDASIWRGWCIEIYQQQGLNSNLBPUMYNFOPCEMNLXMZACWCGKKFSNKHZVATAUVXVAOXGUPVQBUOYJGXKDEWJVOZ");

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
    msg.setTimeStamp(0.418571616495);
    msg.setSource(26339U);
    msg.setSourceEntity(183U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(115U);
    msg.type = 64U;
    msg.htime = 0.938334268793;
    msg.context.assign("JNONVTYUDNQIYCTGMJZLWFEOFCJLGTXOGKHDABGNHIGPXMKDAUVMVARZIFISYCPXHKASNHEOJCUPNAIOSMJXLWWWIDPUNSRSLCMRKJIXZQQGUWO");
    msg.text.assign("HCICSRFYKMCDRYBLPNUXVNXQTQFYZAFO");

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
    msg.setTimeStamp(0.0812517019618);
    msg.setSource(37316U);
    msg.setSourceEntity(114U);
    msg.setDestination(9420U);
    msg.setDestinationEntity(115U);
    msg.command = 224U;
    msg.htime = 0.114348807442;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 224U;
    tmp_msg_0.htime = 0.411592123814;
    tmp_msg_0.context.assign("VQZUJDCMSGRZFMAUKGHYUADGQMWELFUCFKPPGRYTZNFBPGEEHJBESBAUINZOQKZNVMUINTJBDFWXRNXQCJTIFUOHIOYVRHBXHJRQYUOUOOYZWCHQLTDIKTAWNMKRAMWYKLKZPQHC");
    tmp_msg_0.text.assign("NONDPIOEBUKCNTVCGIDLHXSZPCEQCPAFMSMFBWGCWAJVDKCSBLYGTTHFMWCBVTLZAEDLMUWORJNYFIUCXKKZ");
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
    msg.setTimeStamp(0.800513935683);
    msg.setSource(33600U);
    msg.setSourceEntity(115U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(82U);
    msg.command = 198U;
    msg.htime = 0.324890167541;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 150U;
    tmp_msg_0.htime = 0.855067754101;
    tmp_msg_0.context.assign("ULMYBXBBZOWKEHQNUSGGISPKJMZGOTAXRPHJJQUOTREJUXCAJUSAXXBEIDHPVJZHVOXTJ");
    tmp_msg_0.text.assign("DGELRGWQDYUTVWEBOKVWQIHLVNWBHYRVMSBEKXULWYPBZNOEOCDGPUQHOSJFFFNGVACMAHMFHDZAYNLCQBAPFBJPNUVFAU");
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
    msg.setTimeStamp(0.535658321647);
    msg.setSource(30199U);
    msg.setSourceEntity(187U);
    msg.setDestination(46981U);
    msg.setDestinationEntity(169U);
    msg.command = 137U;
    msg.htime = 0.772525251228;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.851034862007;
    tmp_msg_0.context.assign("GSANDLBWSQGCKSVEUJIRAJDHNRSURPJXIQVBQUNFHRPKEOYJSREXZCARLLINSGNKFJGCHTQQWTWVYOWUTRFDUUVTGUPSPSDIYMAQXTYHFCOAUJHOTAZKMITOKOVPKYINWMDYICEZVMLEXOIBOSWGBRJHEZXNMALRTMBXFHLDBYAVMDEGQDZQNIRCTZJMKHOFWZMEZCYLFGUDEWALPXPBKDWHCZINKXQKOTQCCBFUYLVAF");
    tmp_msg_0.text.assign("XITUEEKNJQEHYVNQWIRLGYOQFFGIICXNCYQRZUIQDIBPPJVSWQHAOGGLGBPUZOXUCTATTVSRDPHJXCKWOOLPV");
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
    msg.setTimeStamp(0.0260525550869);
    msg.setSource(15746U);
    msg.setSourceEntity(58U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(25U);
    msg.op = 73U;
    msg.file.assign("WZIUDMBPREMOLJTMTAHDYCPMWCZKGNGKGFEUVHDSBQZHLYPDEZIVAVONNFKGDVFGSNNKEOCGVDIHTISZCJTQOCJH");

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
    msg.setTimeStamp(0.742707218712);
    msg.setSource(1187U);
    msg.setSourceEntity(117U);
    msg.setDestination(353U);
    msg.setDestinationEntity(218U);
    msg.op = 159U;
    msg.file.assign("ZWXHWWQVFONHKKYGWNAHOXCQZQKICCTPZRPYRJCXDGDHALVBLVTLFLJPWOLAEEUMHXHVLDYNVIRNTJJCAFXRYZJXOOKCXUBYGWIVUHXOTQTZVGZFNWGTYGFHKFNSRJDEKEGJM");

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
    msg.setTimeStamp(0.923459511971);
    msg.setSource(5145U);
    msg.setSourceEntity(24U);
    msg.setDestination(3602U);
    msg.setDestinationEntity(47U);
    msg.op = 252U;
    msg.file.assign("HRYUVRABIJXKASRBMQVOKCCKHTAKMZRBZVCSWHMTXSTUWQWAQNPWADXDWFLOBMAPDUTVPECVWGLHXBNDADQTUYNKIDPFMFJZQUEBHHYQGCIDRLFVXDYYOBPYQUZJUPCXOHGEGPWRTNFKUOYGGEMSBIELOJBSGAAGJUZEFMWZZNELKFEFOIIVZNFLOIPVTXSMLBPYJSYZUHKANMGQCRW");

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
    msg.setTimeStamp(0.150004482318);
    msg.setSource(28256U);
    msg.setSourceEntity(120U);
    msg.setDestination(1042U);
    msg.setDestinationEntity(2U);
    msg.op = 204U;
    msg.clock = 0.196811717091;
    msg.tz = 97;

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
    msg.setTimeStamp(0.394302096941);
    msg.setSource(37297U);
    msg.setSourceEntity(233U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(121U);
    msg.op = 198U;
    msg.clock = 0.137205935406;
    msg.tz = -76;

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
    msg.setTimeStamp(0.291497675546);
    msg.setSource(17999U);
    msg.setSourceEntity(51U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(195U);
    msg.op = 156U;
    msg.clock = 0.399007473914;
    msg.tz = 66;

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
    msg.setTimeStamp(0.508348132716);
    msg.setSource(53296U);
    msg.setSourceEntity(178U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(154U);
    msg.conductivity = 0.414857932019;
    msg.temperature = 0.399472862785;
    msg.depth = 0.224086444913;

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
    msg.setTimeStamp(0.198181251281);
    msg.setSource(53672U);
    msg.setSourceEntity(203U);
    msg.setDestination(53066U);
    msg.setDestinationEntity(209U);
    msg.conductivity = 0.780886981188;
    msg.temperature = 0.34974016434;
    msg.depth = 0.0830952145377;

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
    msg.setTimeStamp(0.321542658573);
    msg.setSource(4577U);
    msg.setSourceEntity(179U);
    msg.setDestination(2051U);
    msg.setDestinationEntity(183U);
    msg.conductivity = 0.709163285323;
    msg.temperature = 0.539105235732;
    msg.depth = 0.123729298452;

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
    msg.setTimeStamp(0.972450491295);
    msg.setSource(16479U);
    msg.setSourceEntity(184U);
    msg.setDestination(22U);
    msg.setDestinationEntity(91U);
    msg.altitude = 0.505489116938;
    msg.roll = 4003U;
    msg.pitch = 59548U;
    msg.yaw = 57362U;
    msg.speed = -17125;

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
    msg.setTimeStamp(0.0810227442639);
    msg.setSource(32078U);
    msg.setSourceEntity(88U);
    msg.setDestination(63591U);
    msg.setDestinationEntity(64U);
    msg.altitude = 0.891958547291;
    msg.roll = 7492U;
    msg.pitch = 30629U;
    msg.yaw = 63484U;
    msg.speed = 19478;

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
    msg.setTimeStamp(0.690189823811);
    msg.setSource(11370U);
    msg.setSourceEntity(14U);
    msg.setDestination(54614U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.166352867183;
    msg.roll = 8356U;
    msg.pitch = 63182U;
    msg.yaw = 26024U;
    msg.speed = -23193;

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
    msg.setTimeStamp(0.766339005185);
    msg.setSource(27201U);
    msg.setSourceEntity(200U);
    msg.setDestination(43574U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.88968121362;
    msg.width = 0.0109729613504;
    msg.length = 0.616903239516;
    msg.bearing = 0.546464997989;
    msg.pxl = -29000;
    msg.encoding = 54U;
    const char tmp_msg_0[] = {-101, 8, -62, -49, -43, -112, 35, 29, -30, -117, 119, 81, 81, -118, 5, -30, -47, -100, -28, 6, -87, 68, 97, -94, 110, -87, -29, -70, -6, 20, -76, 99, -103, -86, 36, 61, -80, 57, 98, 42, 63, -5, 15, -92, -51, 35, 50, -108, -96, 123, -117, 55, 60, -40, 51, 65, 74, 119, -56, -55, -100, 23, -71, 51, -89, 27, 62, -52, -9, 82, 54, 16, 112, -18, 59, -12, -120, -19, -120, -38, 14, -66, 85, -122, 110, 89, -57, -80, -103, -115, 30, -105, 68, 40, -33, -54, -31, -23, -93, -39, -3, -86, 53, -14, 73, 78, -10, -9, 57, 74, 70, 97, 53, -126, 119, 6};
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
    msg.setTimeStamp(0.614565891469);
    msg.setSource(6106U);
    msg.setSourceEntity(215U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(179U);
    msg.altitude = 0.382273670806;
    msg.width = 0.112735295313;
    msg.length = 0.646156422277;
    msg.bearing = 0.156380075707;
    msg.pxl = -13762;
    msg.encoding = 45U;
    const char tmp_msg_0[] = {86, -38, -33, -94, 45, 123, -33, -35, 126, 23, -53, 60, 9, 26, 31, -109, 109, -62, 103, -87, 82, 58, -108, 111, -46, -49, -55, -110, 84, 106, -100, -83, -38, -15, -21, 74, -74, 64, -25, 108, -96, 81, 27, -111, -5, -76, 57, 59, 56};
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
    msg.setTimeStamp(0.75938008967);
    msg.setSource(19711U);
    msg.setSourceEntity(60U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.350657205346;
    msg.width = 0.0177939589801;
    msg.length = 0.252607733314;
    msg.bearing = 0.987081936384;
    msg.pxl = -9006;
    msg.encoding = 67U;
    const char tmp_msg_0[] = {29, 8, -64, -32, -16, -67, 113, 114, 69, 6, 74, -51, 53, -80, 39, 106, 11, 112, 105, 112, 58, 72, -114, -19, -13, -92, 106, -101, 69, 57, -117, 15, -128, 0, 60, 71, 87, 122, 48, 59, -96, 18, -66, -56, -66, 115, 22, -74, -82, 124, -1, -75, 66, 87, -124, 0, -78, -117, 44, 95, 96, 25, -86, 35, -118, -108, 66, -27, -38, -109, 90, 54, 9, 84, -73, -27, 90, -99, 35, -12, 43, 1, 89, 28, -9, 83, -128, -20, -121, -43, -39, 121, 101, -88, 75, -56, -10, 71, -52, -29, -13, -102, 124, -23, -72, 21, 105, 36, -49, -76, -67, -14, 64, -61, -36, 70, -97, 119, 80, -73, -107, 126, -105, 9, -2, 77, -105, 74, 69, -50, -102, -56, -113, -12, 25, -42, 13, 14, -70, -34, -16, -87, -23, -82, 97, 62, -38, -57, 77, -37, -109, 64, 53, -112, 1, 42, -113, 85, -42, -111, -35, -87, 116, 93, 116, 93, 24, 40, -85, -111, 31, -123, 60, 10, 100, 5, -59, 21, -91, -112, 108, -37, -120, 10, 30, 41, -48, 90, 90, -22, -125, 47, -40, 8, -106, -30, -69, 0, -72, -104, 12, -82, 1, -52, -31, -118, 110};
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
    msg.setTimeStamp(0.287847819335);
    msg.setSource(9317U);
    msg.setSourceEntity(195U);
    msg.setDestination(48704U);
    msg.setDestinationEntity(228U);
    msg.text.assign("KUBYZGUOVJXWBEOUEKJBRMBWNJXOCESGRPFPCFTIZYGOIYNMVURDPCTTQGTQXHYLSXSVFPSPMWDKAYTBZVOYIMMBUHDDOCTPQAFWCGCDLEDJSCNWAHEBWZIEVUIPHSVCAFKLBIHONDZJZGUSLHWFJMYKZXLLDKWCEPPDVTSIAAGEZWGRRQJXYNJKYFUNTZHBJNXGQQQJLKCNOAVANUQQKRGRMHLQOXRFAUMHXOI");
    msg.type = 181U;

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
    msg.setTimeStamp(0.472865990548);
    msg.setSource(4590U);
    msg.setSourceEntity(32U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(79U);
    msg.text.assign("ZLLKFRYQGALHSZJKIJOLPOATDATUKBAACDEJNBVQHJAMAODECGRGPETMLBPQQMO");
    msg.type = 209U;

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
    msg.setTimeStamp(0.80594443634);
    msg.setSource(10704U);
    msg.setSourceEntity(82U);
    msg.setDestination(300U);
    msg.setDestinationEntity(71U);
    msg.text.assign("XACMGDLUXJVZDZIHXJIEWYGCDKMSXDGDNWCOWJOCELURPPYPCKFAJBXBZMEUSALMJWVCHRSELJZUKECSKQGMCJDMHVQQOSFLYQNCQTHTPHYVNTXKJQVYYMOPKLKQRXWTFILOFAADJGLXOPYWKRTBBNZZXPSNRIGEOTWQVWHRCAEGRPLTPAHAMIOBBZBBNDUFHVWTFNIUTYUOSZVUIOBAFTJNKWSUGKIIGVGFRSHIM");
    msg.type = 157U;

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
    msg.setTimeStamp(0.810111324573);
    msg.setSource(50827U);
    msg.setSourceEntity(0U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.605375017535);
    msg.setSource(29883U);
    msg.setSourceEntity(57U);
    msg.setDestination(47009U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.580327338116);
    msg.setSource(16429U);
    msg.setSourceEntity(93U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.294129314554);
    msg.setSource(47132U);
    msg.setSourceEntity(73U);
    msg.setDestination(7035U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("AEGLQWZDZLPWSIMEAPEFRVVBROVENMCQRAOWKBYPMYKTPJRATWJXIITDWNDRHBTQLDZSBCGLMSBUGDXVFNSYKHLHPMGTHLBJHTOPDLCKWZXHVCUOQONNRBTFYUJDFNEYLDQLATMNPUTCRHNWZMMHXHPSXSKQUDCBNTYB");
    msg.sys_type = 7U;
    msg.owner = 19666U;
    msg.lat = 0.946758965499;
    msg.lon = 0.104251291631;
    msg.height = 0.269186789774;
    msg.services.assign("JPEVPEXNBVICCLHAQONIRCTDBILALWSKBKEAOALEJNFHSCVIXTPPRFUIZKVHMACGDSQTYBUNHZMVXWQYMFGPCKOOGJCNVGHMPFWFRMGMVN");

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
    msg.setTimeStamp(0.480776284492);
    msg.setSource(56613U);
    msg.setSourceEntity(13U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(20U);
    msg.sys_name.assign("CORYQSTZMZVNYIAEQRJVQN");
    msg.sys_type = 236U;
    msg.owner = 41518U;
    msg.lat = 0.586489303965;
    msg.lon = 0.292704188855;
    msg.height = 0.0587994051515;
    msg.services.assign("LZZQMYEGBJFCXVNZRBEMQJQEFLWKTNCFRVZWJDEFTANQDSUDIFWMBYEMRORONZWKULYARMOVTAILWJQUDJTAHBPXTEXWPYCN");

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
    msg.setTimeStamp(0.465275439931);
    msg.setSource(58479U);
    msg.setSourceEntity(73U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(30U);
    msg.sys_name.assign("UNSDGBNBXQWFUUCAXJBLOOPECUDFPOCIRZMEKZSSQICFLGJQX");
    msg.sys_type = 97U;
    msg.owner = 46574U;
    msg.lat = 0.796980036328;
    msg.lon = 0.421869122381;
    msg.height = 0.00784908869228;
    msg.services.assign("QQXQQCKBITUNESDJLIARPAGIXBXJWZVMCMZLETESCNAYXBEKMJKHTSMVCTZEXTPUISIOVWKQPIUXLTAGCTVQDHWIDWDMCZXNHBUAYMDUJAHWCFPFIMGNWMKOEKRLXESKAGOFB");

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
    msg.setTimeStamp(0.875424690494);
    msg.setSource(32601U);
    msg.setSourceEntity(54U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(186U);
    msg.service.assign("CUBUCBYBIRRTNGRLHRWWRBGHZYAFTOALJTHSRGMBYJNEKQEIURPSSLVXGFEABGIWZDVJGVOKEPYDBBVVPADFXGIGWDVJFLYQNQBMEATSAZNXSPNPZULOZXAUEHOMGYWJCXODOITPJCCLWHRNSYHFQSUQFJZLWIHXDPEKQZZLUANDPMXKQIJCOMAUALCTXWKMRCQXTNDREBCVZYEDTOVSFKIJFYTHKPDMHCUQK");
    msg.service_type = 207U;

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
    msg.setTimeStamp(0.669479700551);
    msg.setSource(1399U);
    msg.setSourceEntity(165U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(173U);
    msg.service.assign("YMJECGLOSBQMBGAHLFQ");
    msg.service_type = 231U;

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
    msg.setTimeStamp(0.343025024173);
    msg.setSource(40518U);
    msg.setSourceEntity(95U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(212U);
    msg.service.assign("GXUOJURTKXDHVMFQYTOIJHHFUFAJANFNJPVPGLWIRXRNLDNEKABYPKLDWBWWNLAETGIHUYYSVYGCQYXSULKLWDPBBZGUKGSMLMOZHEEVESQNFUNAUMSOJWWZOPGAJIQAODMMEFLNUAXERYCZWCFTBYDCQPSGGREHYCRWFQZRSMAIHKCCHD");
    msg.service_type = 226U;

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
    msg.setTimeStamp(0.581590715521);
    msg.setSource(64989U);
    msg.setSourceEntity(82U);
    msg.setDestination(45354U);
    msg.setDestinationEntity(225U);
    msg.value = 0.542813169025;

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
    msg.setTimeStamp(0.997871485279);
    msg.setSource(57441U);
    msg.setSourceEntity(162U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(227U);
    msg.value = 0.760659513042;

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
    msg.setTimeStamp(0.165184069495);
    msg.setSource(35892U);
    msg.setSourceEntity(109U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(198U);
    msg.value = 0.918545906887;

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
    msg.setTimeStamp(0.906307135507);
    msg.setSource(52183U);
    msg.setSourceEntity(88U);
    msg.setDestination(16798U);
    msg.setDestinationEntity(53U);
    msg.value = 0.384753847658;

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
    msg.setTimeStamp(0.885928019767);
    msg.setSource(62287U);
    msg.setSourceEntity(49U);
    msg.setDestination(26840U);
    msg.setDestinationEntity(155U);
    msg.value = 0.241129858212;

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
    msg.setTimeStamp(0.783988377786);
    msg.setSource(38085U);
    msg.setSourceEntity(41U);
    msg.setDestination(17046U);
    msg.setDestinationEntity(2U);
    msg.value = 0.90536023705;

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
    msg.setTimeStamp(0.284809656475);
    msg.setSource(47242U);
    msg.setSourceEntity(88U);
    msg.setDestination(62119U);
    msg.setDestinationEntity(64U);
    msg.value = 0.384899164552;

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
    msg.setTimeStamp(0.564930682766);
    msg.setSource(60314U);
    msg.setSourceEntity(252U);
    msg.setDestination(57546U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0505768227884;

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
    msg.setTimeStamp(0.951599499112);
    msg.setSource(20965U);
    msg.setSourceEntity(76U);
    msg.setDestination(35448U);
    msg.setDestinationEntity(250U);
    msg.value = 0.192771749922;

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
    msg.setTimeStamp(0.547833752013);
    msg.setSource(48302U);
    msg.setSourceEntity(71U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(171U);
    msg.number.assign("SHZZIFZLDZKAEZDDLOIAEVELOKYLYKNGESUNCWCUGKABEKWEJFTMOOCRVXSMANTMCHCFLCSWRRYWFYSBUEQAPUPPWYBWLYCMDTXWVJRKIRFBMAXBQMNYPKKXCMUQRPSGSTOHDETVINYHHTUXHKQPIYFKHGVRCDJDLJEOCAGIJFFUVTIAXTXFZXPRJOTHGZWSVUMNTQNGFB");
    msg.timeout = 17471U;
    msg.contents.assign("XXGNZMPPESETMCVZRBINNWVUQKPORAJJUMJFKGCIHGQJYWGNBAYTBGGBVWFXIEPZAYKYVHVWEFPYWOXRQRIMPDEFOAXDXPTFLTFEMFVABHWNVKKYOLWEPNUGQDJIHCLUKHKZCWHZYNTIMBSUIJBMTXZUMJIUISGRDFUCSMENJCEXWKEYDDQDHSZOLCHYOFAILHQXLVSPLRYKRCLATJHOFONCAQTMKVBJLBQSLTOAGSOSGSUVXACQBZDND");

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
    msg.setTimeStamp(0.0292175318219);
    msg.setSource(2802U);
    msg.setSourceEntity(53U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(118U);
    msg.number.assign("KSKPOSYBGKVMIRXGDPTCND");
    msg.timeout = 36090U;
    msg.contents.assign("ZGYTYENSDJSHFFPTBCRGCOXJQAWZFACLRHIQFDGDUSWFAJEPLPMMVTYAJVDAPVNBNVYPZMFGITAVZLEIHKCCUHRWMZGRQSKLIKEZKAFWJMHACTZYITNDJLCFBEKXYTRJPOJVBUAMZOYLUSLUGGUB");

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
    msg.setTimeStamp(0.622006968166);
    msg.setSource(5989U);
    msg.setSourceEntity(16U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(42U);
    msg.number.assign("OIXTAKGJWOBDKOBBVZDIULRYGPOSZQNGSLOQACQKZUMETJFPWUQSONOSOVABWNCZGEHZTBRTLUGYWUSDVJXMCFPDOLVMKLCJTRHBINGSKFPIDEERFDQXUERCFDEWMUGPBZJLMNMPWUTKZHADVDHVXKFYQJRXAUGHQSLF");
    msg.timeout = 935U;
    msg.contents.assign("ZPKXMWQWMVRKIRGKNREWJKESNYHFBFHOVZCQTLLUEAGYYKBTEFMXOSJYHCDGHXRYQDPUPIQMJDHCLFONXJZUTA");

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
    msg.setTimeStamp(0.677150051175);
    msg.setSource(47186U);
    msg.setSourceEntity(16U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(187U);
    msg.seq = 1522436325U;
    msg.destination.assign("JGAUOICQKAMXWQUASRNHUNMR");
    msg.timeout = 59632U;
    const char tmp_msg_0[] = {-120, -98, 19, 81, 27, -117, -20, -43, 84, 66, 126, -69, -57, 98, -63, 107, -116, -37, -26, 0, 66, 21, 25, -84, -46, 7, 97, -71, 101, 86, 13, -22, -45, -83, -74, 105, 38, -103, 58, 115, -66, 109, -114, 47, 8, -57, -110, -27, -56, -65, -110, 19, 103, -36, 78, -38, -49, -102, 30, -86, -5, -27, 79, 117, -67, 25, 122, 96, -21, 24, 54, 12, 59, 77, 17, 70, 41, 74, 45, 36, 103, -46, 85, -39, -53, -89, -63, 48, -41, -40, 23, 69, -95, -88, -123, 10, 78, -15, 120, 94, -90, -59, -123, -14, 83, 111, -37, 69, 49, -13, -85, 69, 35, 99, 40, 113, 6, -59, -59, -124, -58, 27, -22, -28, 101, -120, 82, 98, 105, 42, 68, -80, -39, -94, 59, -64, 23, -72, 125, -98, 77, 113, -100, 40, 21, -4, -72, 86, -107, 77, -20, -111, -25, 39, 46, 74, 10, -78, 82, -120, -29, 63, 34, 11, 126, -34, 91, 110, 86, 109, 7, 85, 30, -119, 98, -115, 82, -84, -26, -89, -23, 40, 92, 92, 75, -5, 84, 26, -96, -60, 30, -53, 105, -27, 104, 112, 75, -96};
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
    msg.setTimeStamp(0.373352626465);
    msg.setSource(62175U);
    msg.setSourceEntity(77U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(124U);
    msg.seq = 2645271129U;
    msg.destination.assign("EPNNXFULJKDFBPPJATNCBL");
    msg.timeout = 62798U;
    const char tmp_msg_0[] = {80, 84, -87, -71, -79, -106, 113, -33, 50, -79, 47, -69, -44, -39, 75, -97, 95, -128, 75, -43, -105, -86, 115, 104, 125, -42, -94, -124, 56, -66, -12, -17, 102, 12, 119, -8, -123, 74, -126, -75, -69, 116, 70, -100, 109, -55, 105, 123, 47, -47, -118, -64, -122, -65, -23, -84, 119, 64, -116, 96, -30, 16, 88, -22, 42, 30, 62, 108, -100, -4, -88, -117, 16, -127, -55, 113, 14, -9, -108, 36, -44, 42, 99, 122, 43, -60, -118, -104, 54, 88, -123, -2, 21, 67, -34, -117, 28, 84, -50, 114, -65, -84, -113, -24, -48, -53, 91, 86, -61, 1, 77, -128, 23, 17, -31, 118, -115, 5, 15, -115, 72, -13, -117, -12, 96, -118, 116, 125, -69, 107, -16, -126, -122, -116, 82, -114, 49, -10, -102, 48, -37, -94, 76, 79, 107, -87, -101, 89, -92, 123, -83, 94, -22, 101, -35, -98, -66, -52, 9, -65, 1, -22, -25, 115, -93, 38, 4, 65, 35, 10, -29, -110};
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
    msg.setTimeStamp(0.0194153944557);
    msg.setSource(2563U);
    msg.setSourceEntity(224U);
    msg.setDestination(53884U);
    msg.setDestinationEntity(75U);
    msg.seq = 3806639995U;
    msg.destination.assign("IAYGATJREWTJFLQDBMVKGWSMKRYHCWKJEFHRGGDAMESOURAUOPTUYSVIEEAXWQPPRBSWGBWNNVHOZSAHOZIOMTVCTXXCETVRRGZIMLZDAZQAVUNVDDGJYPCUHJLUZNLYYPIXHLUXVHSQENCOBEGPGFXLSDEVBF");
    msg.timeout = 40055U;
    const char tmp_msg_0[] = {106, 57, -9, 71, -64, 26, 89, -68, 119, -49, 33, 111, 59, -66, -10, -102, -41, -15, 5, 36, -91, 32, 94, -115, 58, -12, -102, -32, 45, -3, -19, -125, -115, -4, 25, -29, 1, 100, 62, 107, 58, -7, 41, 59, 119, 115, -65, -104, -120, 68, -52, 86, 20, 40, 42, 54, -37, 25, 68, 110, 70, 29, 22, -48, 76, -73, 50, -64, -116, -66, 97, 68, -45, -99, -82, 13, -85, 16, -33, -69, 56, -96, -124, 78, -46, -13, 66, 72, 125, -11, -19, -7, -114, -97, -88, 93, 62, -26, -36, 44, -44, -21, -116, 109, 21, 31, -55, -88, -106, -65, 124, 18, 115, 13, -122, 79, 7, -115, -93, -52, -114, -5, 122, -125, -119, 25, 56, -66, -22, 111, -127, -126, 77, -127, 87, -46, 78, -5, 72, -64, -84, -60, -67, 67, -7, 59, 59, -109, 16, -21, -46, 120, 34, -99, 108, 105, 55, 60, -84, -23, 119, 100, 33, 42, 99, 80, 21, 54, -69, -55, 1, -56, -79, 91, 74, -2, 71, 6, -20, -61, 64, 101, -7, -120, -23, 3, 50, -49, 60, 23, -124, -8, 92, 65, -87, 62, -50, 76, 115, 123, -108, 35, 33, 95, 62, -66, -99, 25, -108, 60, 48, 66, 40, 37, -7, -103, -95, -50, -53, 18, 113, 32, 115, 107, -123, -66, 2};
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
    msg.setTimeStamp(0.966077670104);
    msg.setSource(6250U);
    msg.setSourceEntity(49U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(2U);
    msg.source.assign("BMXPBUWHBYQEAJURJGMZPRLIYDOHIGUJESVMRXAGRZAOTHTCCIUOWEMQLZEFVYEGOWYNXDSFQPPWRZPNGVOCJVRCJACHLWTMBCJCKTZRZTQWXBKVLOEAFPGBMIAZRJHAIDMUSBKDHHVGQ");
    const char tmp_msg_0[] = {96, -15, 27, 65, -94, 116, 28, 118, 33, -26, 102, 78, 7, -42, -75, 5, -53, -51, 90, 61, 109, 3, 110, -112, 87, 38, 58, 84, -123, 99, 62, -123, 44, -90, 101, -61, -118, 26, -119, 32, -114, 71, -61, -118, -5, 98, 89, 114, -121, -17, -2, -69, 97, -77, -60, -26, 78, 41, 62, -62, -82, 57, 99, -80, 88, 65, -34, 19, 89, -51, 3, 126, -26, -1, 126, -125, -48, -90, 108, 80, 102, -3, 120, 75, 93, 114, 117, -61, 53, 119, 96, -84, -27, 50, -95, -123, 97, -114, 27, 44, 38, 124, 35, -55, -91, 44, -9, -29, -87, 108, 47, 45, 78, 3, 105, -61, -114, -116, 106, -127, -32, -119, 15, 2, 108, -80, -26, 15, 80, 91, 74, -72, -18, -91, -9, -16, 68, 8, -125, 54, 71, 102, 86, -54, -119, -34, 111, 78, -9, -6, 57, -109, 36, 80, -64, -49, 56, 115, 6, 122, 67, -98, -69, -54, 87, 74, 113, 6, -45, -37, 14, 58, -86, 103, 98, -124, 0, -116, 69, -44, -47, -5, -34, 22, 110, -6, 55, -70, 100, -26, 58, 59, 2, -14, -16, 26, 22, 90, -24, -77, -55, 114, -20, -100, -110, -66, 6, 88, -123, -93, 41, -9, 103, 26, -81, 101, -95, 115, 118, -4, 54, -89, -98, 30, 5, 101, -104, 119, -17, 118, -118, 46, -100, 4, 41, 40, -1, 48};
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
    msg.setTimeStamp(0.965324796045);
    msg.setSource(62121U);
    msg.setSourceEntity(248U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(12U);
    msg.source.assign("ERMKTFBGFOJEEJCZWYDTVSMIAXOCZMTHIXNVYWKAUSKWDZBYSQGPPHKMDWRNXTXFASCHZSGVWCPUYDLFWZUBQOKHJOECEVQDMYOFPITIGWRUPGOSBENLDDHXIXOZYJW");
    const char tmp_msg_0[] = {39, 125, -23, 46, 61, 123, 122, 79, 87, 2, -87, 55, -48, -33, -2, 62, -111, 114, 92, -7, -107, 13, -35, -53, -111, -13, -20, -118, -99, -58, -21, -102, -24, -1, -84, -110, -108, -123, -92, -30, 25, -106, 89, -73, 40, -110, 15, -32, -118, 32, 96, 60, 74, -43, 77, -97, 9, 97, -93, 2, 82, -12, -20, -17, -101, 97, 83, 54, 29, 109, -116, -32, -9, -113, 126, 59, -17, -123, -54, -81, -23, 97, -77, 15, 11, -113, -20, 34, 97, 62, -31, -51, -9, 26, 35, -65, -1, -109, 20, -82, -83, -2, -13, -91, 53, 28, -21, -43, -35, 80, -35, 35, 21, 32, -124, -43, -65, -126, -88, 65, -81, -41, -50, -53, -60, 35, -111, -95, -11, -55, -106, 53, 77, -41, 30, -81, -90, 7, 21, 81, 41, 124, 66, 119, 64};
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
    msg.setTimeStamp(0.952656651284);
    msg.setSource(20093U);
    msg.setSourceEntity(55U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(237U);
    msg.source.assign("NVEZGAGJXMDFNVMVRSZHMESHFYSHPBTZOXNEKEOBLMKINUPSPBQDWLCQAYFEUELOPOGBGSNWPOMTYVRBDIFELERBQHLRQUGPCGMAZCJRRIRZFJYMEXBSGTKTGDXOAIWYCPTPUDFDUMOIJABHKVSXZHMJWHHXIWLIKQPFXYDHSKEJCJBIXZRNGDJXWUKOYJTKJVNQTAWCLNTKVIDNQUWAYSOWAIZTYFRBQVPALCRLCCVZUMCTUF");
    const char tmp_msg_0[] = {-107, -121, -9, 48, -120, 48, -33, 42, 2, 110, -91, 25, -64, 94, -123, 89, -21, -67, -69, 99, -28, -111, -75, -112, -43, 85, 12, 11, -21, 74, -101, -24, -117, 62, -74, -93, -119, 96, -125, 39, -66, -45, -87, -35, -77, 82, -63, 24, -18, -28, 97, -5, 76, 110, 69, -29, 55, -73, -31, 5, 27, -61, 34, -13, 39, 61, -76, -60, 79, -30, -24, 126, -97, 74, 55, 126, -125, 118, -77, -22, -3, -120, -36, -113, -33, 55, 97, -127, -82, 49, -20, -16, -106, -115, 119, 80, -44, -1, 79, -35, 99, 91, -43, -31, 118, 120, 43, -1, 11, -73, 59, -54, -127, 68, 48, 125, 95, 26, -22, -99, -75, 6, -41, -100, 75, -116, -90, -52, 121, -38, -81, 45, -56, -46, 67, -124, 29, -94, 57, 16, 52, 48, 52, 107, 7, 114, -68, -119, -100, 96, -114, 10, -102, -120, 126, -128, -50, -55, 53, 65, -12, -120, -79, -96, -13, -108, 12, 42, 49, -73, -75, 61, -102, 36, -28, 20, -11, 64, 51, -58, -8, -76, 3, 19, 14, 24, -14, 98, 84, -107, 5, -7, 126, -58, -117, 76, -96, -88, -120, -17, -4, -41, -16, -19, -101, -65, 58, 19, -76, -59, -54, 115, -40, 28, 83, 101, -74, 41, 126, -118, 101, -6, -72, 26, 70, 18, -60, -54, -4, 47, 19, 49, 19, 17, -32, 62, -94, -49, 24, 51, -80, -117, 96, -40, -45, 113, -108};
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
    msg.setTimeStamp(0.574415531592);
    msg.setSource(14152U);
    msg.setSourceEntity(107U);
    msg.setDestination(245U);
    msg.setDestinationEntity(25U);
    msg.seq = 981909900U;
    msg.state = 239U;
    msg.error.assign("KLSLIBAQODXWFIBXOTDSYONPJXPGQUSDFLTZAMVMVQSTYALJUFPDCSWZWYBVEOWBWZGVQNOYGL");

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
    msg.setTimeStamp(0.578037663097);
    msg.setSource(8917U);
    msg.setSourceEntity(35U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(65U);
    msg.seq = 3799930230U;
    msg.state = 159U;
    msg.error.assign("URFOYXXFUIEQJQRMPFYGSTBLWPRYGNURIJZKCFSTHTNMUKHQKFAANPUTBGLKBKRFMDOWAPZYGDVPHRGCIYDOTPVCSYGCCVMHROMWNBQQWULDJDRJWDTDSGBSXBXCYYHESLWYVOXOJZLNECBPAVBUXVMIGTVNSLRMEDJSTACMILEOZOLPEDWKKHNKQQIZENXXSVBRUHVUWQFWGNFTMLEIECTOQUBCAAHPWEYZNXMPJAIKQHZSZHZXJIDFZAKVGJ");

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
    msg.setTimeStamp(0.784667788007);
    msg.setSource(62345U);
    msg.setSourceEntity(116U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(203U);
    msg.seq = 2711288149U;
    msg.state = 91U;
    msg.error.assign("QTHAHLCJEJLYZQCQEFTYSUQZYDYJUACOTINYKVWUCSPGMYGBNBPXVZGEPZZUXSLTVYENMXWC");

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
    msg.setTimeStamp(0.884174987367);
    msg.setSource(62085U);
    msg.setSourceEntity(145U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(251U);
    msg.origin.assign("PSXSXXGVYVSCGCZKYRTFNZWCCUQZYHCZMFQGBTUWBHFOVWURSYLLJHAJZMGNPUAFIDOGBZIBWCDUZWIJLUBGFKRFMLZTSTXVHERSBPINKYOTAEXASYLDOMINCDXDOKJPRIDXXEVFASWNEBJMLWPKQZQJMGEIQHGRLOYTPQVHCHOHQYRCUTFJRAWSMDAUHUPJTLQLMIUQDXEKPSNOVCIORBVERZDJPWIEPKQGKEBNKENMLYWAAAN");
    msg.text.assign("FMFFXMOJWSGEGRIEKODLWWXZPSYGFIMK");

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
    msg.setTimeStamp(0.5127322278);
    msg.setSource(4303U);
    msg.setSourceEntity(4U);
    msg.setDestination(25451U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("VSSNPJUHFPIGSLUJKMKBSGMWZMHDFHDWTETJAWTJLLDLAXECZYEGRVCXHGQYKQKHBNAKTXQYISPQLBTIXA");
    msg.text.assign("DFGNNZNKCZODJGMVQSNSOXXTJVUDMUYWAWPRLPPKTHLVLITMCQJSVNEETJDQRWJFHKYJGSMVLGYQPWPYBXKNUDALYEGMKWVONGISMTSTIEAEYRJPMITFLVBFCLVMZXZWPPYORKOAKKNRBEOFBMWQKUHUCADECLUDQCGWY");

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
    msg.setTimeStamp(0.5413427334);
    msg.setSource(63372U);
    msg.setSourceEntity(72U);
    msg.setDestination(47694U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("CAZDEPCYNSQYHDWIIPIRTQQPZYNJFCLONMSKOYTSMJLPADYAI");
    msg.text.assign("FPNMQENFLDOPUXVHWAXWHMFIEDMBUDEMEKKQYKSSTKTPONVQGUVEDFQBUIYADCPRFHGNUJRJLTHFTCPLYXYDKOIHFZKBGQHUDCZEOUGNXAMLXXOZJLOVMYCMARBSRVCKISINLBOYOQJCTNITOSDJYSTIHNUEWXYSCLYWKROPZAXVFWXMWFZGVBZZSVBWRQVABGKFPHJNMEDBLGCTQHUKIHZBGJADNWZCXJWVRZQEUISGL");

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
    msg.setTimeStamp(0.666446315309);
    msg.setSource(54025U);
    msg.setSourceEntity(140U);
    msg.setDestination(41080U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("VNUBWMAQZSFJVSJVGA");
    msg.htime = 0.184825792988;
    msg.lat = 0.466408620361;
    msg.lon = 0.721238905582;
    const char tmp_msg_0[] = {50, -95, -59, 85, -70, 33, 67, -60, 32, 110, -79, -54, -119, -27, 63, -117, -123, 85, 41, -69, -90, 28, -68, 63, 107, 11, 8, 69, -126, -29, 22, -10, 51, -36, 96, -11, -20, 69, 99, -78, -74, 74, 74, -62, -82, 92, 116, -111, -99, 105, 16, 108, 35, -120, 36, -15, -94, -121, -128, -1, -76, 105, -72, -56, -16, 98, -30, -96, 106, 61, 32, 22, -48, 0, -19, 8, 99, -117, 85, 125, -30, -91, -24, 74, -93, -84, -120, 10, 59, 19, 97, -80, -22, -44, -83, 57, -119, -125, -123, 35, -127, 35, 22, -50, 101, -116, 99, 17, -75, 17, 27, -105, 100, -22, 109, -29, 111, -110, 77, 33, -79, -75, 124, -110, -21, 116, 9, 17, 35, 51, 49, -54, -29, -26, 104, -87, 39, -106, -49, 65, -112, -27, -124, 59, 105, 36, 96, -127, 110, 4, 41, -31, -96, 93, -58, 126, 108, 20, 52, -21, 104, 103, 66, -32, -34, 89, -7, 19, 76, -118, -114, -58, -42, 49, 93, -20, 33, -106, -54, 38, 115, 54, -10, 82, -89, -13, 98, -6, 50, -103, -2, -104, -96, 125, 43, 23};
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
    msg.setTimeStamp(0.309720573252);
    msg.setSource(52816U);
    msg.setSourceEntity(199U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("MTEPFMZKVFYQOBTIGMISDNZUOYLKJABKURAGODRTERTQJWMEASOKZWTNAVVMIGHPCLRJLRESZBRPLZOYSHYCSDEWGSHCKPGIIQXNKQLAMJDFBZXNEBYNWGQNXPDYAUDIDUWNWEYTOHUIAKKMXVOEVBPQUCQCHDUTZVAQLXGYSXBALCPQHTFSRHXEPCHJGYSAFJNDSMZZIVOLCJ");
    msg.htime = 0.758294224696;
    msg.lat = 0.170508238266;
    msg.lon = 0.705125177594;
    const char tmp_msg_0[] = {120, -35, -122, 117, -7, 49, 124, 49, 37, -73, 36, 27, -21, 125, 67, 1, -80, 41, 58, -84, -100, 126, -107, 47, -123, 122, -8, 101, 124, -116, -107, 4, -34, 14, 36, 17, -53, 1, 125, -105, 15, 0, 25, 102, 32, -108, 126, 2, -7, -30, 68, -123, -53, -127, -91, 41, 116, 119, -50, 32, -11, -128, 73, -81, 93, 84, 8, -84, 110, 8, 88, 73, -114, -91, 23, 93, -51, -128, 67, 48, 31, -112, 3, -121, -54, -65, 45, -125, -9, 51, 53, -103, 41, -101, -128, -103, 93, -8, -82, -8, -11, 122, 87, -87, 99, 32, 42, 94, 106, 40, 5, -87, -108, 59, 17, 46, 27, 16, -126, -28, 9, 89, 95, 14, 80, -96, -65, -101, 98, 62, 35, -24, -45, -72, 46, 86, 2, 7, 124, 38, 54, -15, -116, 73, 87, -16, 121, -20, 123, -69, -85, 126, -56, 94, 106, 47, 77, -46, 42, 11, 36, -44, -18, 1, -106, -67, -109, -56, 124, 124, -5, 46, -110, 9, 27, -35, 126, -11, 79, -55, -93, -21, 72, -20, 76, 69, -124, 111, -73, 7, -45, -45, -99, -13, 4, 87, 102, -53, 124};
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
    msg.setTimeStamp(0.416151415422);
    msg.setSource(30905U);
    msg.setSourceEntity(38U);
    msg.setDestination(12639U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("KONNFLIUYXBHBAIUNFBNLWIGANSOJWVMHOPSQBITROQRWJRKPSSXEVZAUIMGYBHDLETOLJMCXGGQDEKLKQ");
    msg.htime = 0.48037893519;
    msg.lat = 0.67696013666;
    msg.lon = 0.824283122289;
    const char tmp_msg_0[] = {-37, 3, -90, 45, -103, -9, -101, -34, -77, -44, 114, 109, -60, 59, 101, -1, -72, 89, -33, 8, 31, 60, -125, 85, -110, -29, -96, -95, 114, 88, 39, -63, 68, -122, 117, 107, -42};
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
    msg.setTimeStamp(0.119302805034);
    msg.setSource(21772U);
    msg.setSourceEntity(29U);
    msg.setDestination(62078U);
    msg.setDestinationEntity(122U);
    msg.req_id = 8143U;
    msg.ttl = 38232U;
    msg.destination.assign("FBTBDUPVBAXYQOUNJGQISKOVXUZTQZPBEFAXVINROHASESUXDOUDNYUFHCTBGWPAIINJZIEGLFUJDHTQWZFOMYYKWIQIGPKHGDRRHDWQINGCSZWWRRBQOMTWYX");
    const char tmp_msg_0[] = {14, -95, -16, -13, -78, -52, 60, -33, 103, 69, -2, -126, 106, -120, -3, -53, 122, 119, 50, -66, -55, 28, 103, -72, -46, 84, -3, -114, 42, -16, 76, 59, -54, 11, 71, -77, 103, -59, 3, 71, 70, -123, 42, 102, 7, -10, -66, 13, 85, -20, -5, 28, 125, 75, -36, -39, 55, 88, 38, -47, 125, -27, 3, -111, 14, -110, 41, -78, 36, -28, -35, -111, -91, 60, 18, -44, 6, 95, 93, -35, -66, -111, 86, -12, -42, 24, -99, -45, -110, -75, 6, -15, -18, -27, -121, 113, -122, -28, 54, -89, 116, -116, 52, 87, 108, 40, 119, -94, 36, -92, 14, -98, 39, 102, -11, -72, -53, -30, -43, -54, -69, 46, -28, 45, -73, -109, -77, -17, -71, 110, 87, -117, -42, 76, 88, 17, -64, -88, 77, 65, -94, -8, -30, 92, -92, 22, -78, -77, 58, 89, -65, -74, -67, -105, 45, -53, -104, -41, -68, 50, 124, -86, -37, -9, -66, 87, -66, 107, 58, -38, 95, 55, 88, 94, -81, 4, -74, 0, 19, -68, 61, 18, 8, 101, -28, 52, -65, -7, 83, 25, 39, -73, 5, -86, -118, 43, 26, -67, 15, -117, 58, -99, -63, 89, 69, 95, -22, -102, -25, 49, 21, 19, -61, 48, 67, 79, 14, -117, -93, -26, -54, 102, 86, 24, 87, 101, -115, -31, 14, -17, -48, 11, 39, 61};
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
    msg.setTimeStamp(0.222255650872);
    msg.setSource(55018U);
    msg.setSourceEntity(140U);
    msg.setDestination(61654U);
    msg.setDestinationEntity(221U);
    msg.req_id = 24179U;
    msg.ttl = 23444U;
    msg.destination.assign("PAZGLJDRAAWCLZSKVNYPNHKROGPABRQIEEDOQTEA");
    const char tmp_msg_0[] = {-115, 21, 108, 56, 4, -104, 60, -15, 88, 51, -83, -68, -68, -19, -53, -106, -28, -116, -92, -53, 79, 70, 90, 87, 96, -39, -25, -89, -30, -50, 7, -125, 29, 95, 47, -58, -18, -123, -121, 90, -64, -118, -1, -81, -78, 68, -24, -43, 0, -46, 70, -91, -38, -122, -87, -7, -1, 64, 64, -20, 120, 57, 89, 21, -101, -46, -123, -25, -102, 15, -68, -112, 93, 86, 9, -72, -96, 81, 106, 74, 54, -96, -105, -126, -57, -6, -7, 33, -21, 99, 1, 29, 94, 1, -51, -86, -101, -8, -99, 87, -51, 109, -90};
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
    msg.setTimeStamp(0.507348528074);
    msg.setSource(41946U);
    msg.setSourceEntity(208U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(95U);
    msg.req_id = 1459U;
    msg.ttl = 21311U;
    msg.destination.assign("LHLSDZRDPQSRDMCFCLOIJVIUIKHSTLGHPGQJZHZGRMO");
    const char tmp_msg_0[] = {123, 44, 118, -28, -101, 99, -31, -65, 96, 126, 89, -120, -95, -27, -114, 17, 51, -35, 60, 13, 107, -6, -118, 89, 96, -12, 21, 88, 49, 62, 64, 19, -108, 103, -42, 25, 122, -54, 2, 32, -58, -100, -29, 34, -83, 61, -74, 48, -123, 66, -1, -78, 16, 124, -54, -14, -17, 11, 109, 114, 43, -80, -49, 76, -27, 103, -119, -103, -4, 11, 85, -87, 34, 98, 39, 51, 110, -5, 45, -41, 120, -3, -105, 64, 120, 123, 126, -89, 124, 5, 79, 94, -120, 24, -121, 9, 116, 106, 99, -85, -53, -65, -36, -87, 20, 78, -75, 40, 23, -54, -20, 45, 87, -38, 19, -25, -119, 31, 104, -15, -106, 121, 96, -128, -38, 112, 111, -37, -116, -51, 112, 95, 63, -18, 26, 99, 64, 96, -9, 120, 101, -32, 75, -52, 11, -1, -31, -36, -52, -60, 5, 49, 11, 37, 99, -2, -49, -49, 38, 116, -48, 70, 69, -22, 21, 89, 95, -124, 107, 72, -92, -85, -64, -115, 123, 89, 83, 115};
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
    msg.setTimeStamp(0.568266099619);
    msg.setSource(31830U);
    msg.setSourceEntity(222U);
    msg.setDestination(5273U);
    msg.setDestinationEntity(51U);
    msg.req_id = 57718U;
    msg.status = 25U;
    msg.text.assign("COQYRWDJESZQYMBSDIAFRGUMLDGQDBXYWWRRHLXBWGNKFHBHSXZPOVJZHIXMITMOZSPVHUQAPKBNYCKICEARITAWKNQUUSAHKYLEOTNMPFXLCPDHWIMWDZDEYLJGVXVPIQUSP");

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
    msg.setTimeStamp(0.397530553229);
    msg.setSource(24287U);
    msg.setSourceEntity(250U);
    msg.setDestination(42734U);
    msg.setDestinationEntity(64U);
    msg.req_id = 2644U;
    msg.status = 177U;
    msg.text.assign("VRKHPTEHEDPXXIEXWNYWDQGQNIRJVQRMJNNDDSATKOCBQROMMAIWAGZHYFZZCNLBAOFNZVNJYSSTHYTUSDFHIVMBPOLKTSUSERTFCVZEWYHDQQPTRIZOZIWWFXXGVGLRUACAMXZVRBEXMORDAUASJ");

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
    msg.setTimeStamp(0.682655576994);
    msg.setSource(35699U);
    msg.setSourceEntity(174U);
    msg.setDestination(26462U);
    msg.setDestinationEntity(50U);
    msg.req_id = 4742U;
    msg.status = 95U;
    msg.text.assign("FGZKJHHAUPHPSLQQNDKNJOWUWFXHUCAPINLJBFBXEJDLHFYBASRLPILZDELKKEMOOVXMXGNHUOTVGSUMGBVYDXCKOHV");

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
    msg.setTimeStamp(0.783313285632);
    msg.setSource(56175U);
    msg.setSourceEntity(42U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("IMKWESANVWVSKOBXGPBBMPHHYWKTXEIMKPXYCBGKWGJTTPUEGDGYBYVCSCJLAJRQDNOTJDTLCKLBHNUEYJZAMQBRMRXDMFTKDDOFCGSUFUXRTQZNOUJKNIOGFWE");
    msg.links = 442777384U;

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
    msg.setTimeStamp(0.984847535625);
    msg.setSource(34642U);
    msg.setSourceEntity(26U);
    msg.setDestination(53551U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("XDQNCORSPSIRSAHUN");
    msg.links = 3169158118U;

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
    msg.setTimeStamp(0.248524916179);
    msg.setSource(37708U);
    msg.setSourceEntity(11U);
    msg.setDestination(44192U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("UBVRZNEEABGYXBEKFVLWSDJO");
    msg.links = 1248086472U;

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
    msg.setTimeStamp(0.667258248359);
    msg.setSource(509U);
    msg.setSourceEntity(217U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(247U);
    msg.groupname.assign("KZEEWHWXFNCEXYNRLFAQTZMXRQVLLHMITPMHNZCATMUPGDHXDGCDEFJVGHBSOOKJWTCZKSYUGWDNKBSYHJLADFSZ");
    msg.action = 122U;
    msg.grouplist.assign("RBARASIJMCWYAYZPRMFVIXTZKAUUDMLBYMEJQGDNZECCJHRWTYZUVAXJCMSAPCIHZHDPVNGPRBLA");

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
    msg.setTimeStamp(0.512106907634);
    msg.setSource(23303U);
    msg.setSourceEntity(15U);
    msg.setDestination(21132U);
    msg.setDestinationEntity(159U);
    msg.groupname.assign("ZGTBLAYHVT");
    msg.action = 210U;
    msg.grouplist.assign("NVMLECXSHPFJHCHTPQDVTTXOGOWXCTCSEARVYPVDWOEIDLUUXBCRETVOYKRSAWWJI");

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
    msg.setTimeStamp(0.216939912251);
    msg.setSource(61420U);
    msg.setSourceEntity(15U);
    msg.setDestination(7958U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("YXYSULNGFPXVHZTLQWXJSHFGSEHWZMUNZCWRBVDNTSOFQGFUPBINRVIOFXLAJGZATWMXFDLNUW");
    msg.action = 221U;
    msg.grouplist.assign("RDRLGLJYCAZHVPIGLSHEQRAGYORTZIVXJJYZKTDVIBTUGIEUJVXCTVIXLCKCWHWSSMPCYDQONPAFSDOBZBDPUYEEMWRDOKQCPMKACZMMGUURGRNTSPOPMLWFNOGNBNEFQMIDBVBBEQUDMHOZBWYEZDQWFCKUFIZKHAWNTOXGNYYJKOFHXWWNHXNGAEVQJLQZUK");

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
    msg.setTimeStamp(0.527359026033);
    msg.setSource(22176U);
    msg.setSourceEntity(157U);
    msg.setDestination(63730U);
    msg.setDestinationEntity(100U);
    msg.value = 0.407156197029;
    msg.sys_src = 29044U;

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
    msg.setTimeStamp(0.587624234679);
    msg.setSource(50636U);
    msg.setSourceEntity(143U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(88U);
    msg.value = 0.961282254762;
    msg.sys_src = 62453U;

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
    msg.setTimeStamp(0.707555680613);
    msg.setSource(49215U);
    msg.setSourceEntity(169U);
    msg.setDestination(5479U);
    msg.setDestinationEntity(91U);
    msg.value = 0.671382226471;
    msg.sys_src = 53314U;

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
    msg.setTimeStamp(0.998856193774);
    msg.setSource(12288U);
    msg.setSourceEntity(29U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0263168634299;
    msg.units = 187U;

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
    msg.setTimeStamp(0.835131507948);
    msg.setSource(28453U);
    msg.setSourceEntity(101U);
    msg.setDestination(38844U);
    msg.setDestinationEntity(59U);
    msg.value = 0.103278399919;
    msg.units = 157U;

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
    msg.setTimeStamp(0.536609236122);
    msg.setSource(24753U);
    msg.setSourceEntity(14U);
    msg.setDestination(51904U);
    msg.setDestinationEntity(85U);
    msg.value = 0.760267511155;
    msg.units = 176U;

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
    msg.setTimeStamp(0.633543741262);
    msg.setSource(42441U);
    msg.setSourceEntity(40U);
    msg.setDestination(51561U);
    msg.setDestinationEntity(232U);
    msg.base_lat = 0.580474583908;
    msg.base_lon = 0.938151699909;
    msg.base_time = 0.0188792702362;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 29462U;
    tmp_msg_0.priority = -19;
    tmp_msg_0.x = -16172;
    tmp_msg_0.y = 16833;
    tmp_msg_0.z = 11284;
    tmp_msg_0.t = 31466;
    IMC::ControlParcel tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.p = 0.960593825976;
    tmp_tmp_msg_0_0.i = 0.0741656889978;
    tmp_tmp_msg_0_0.d = 0.927384770286;
    tmp_tmp_msg_0_0.a = 0.30267210101;
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
    msg.setTimeStamp(0.526427019163);
    msg.setSource(45619U);
    msg.setSourceEntity(173U);
    msg.setDestination(47342U);
    msg.setDestinationEntity(203U);
    msg.base_lat = 0.762825573985;
    msg.base_lon = 0.427111709115;
    msg.base_time = 0.314996673478;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 13190U;
    tmp_msg_0.destination = 52280U;
    tmp_msg_0.timeout = 0.782718255339;
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 15256U;
    tmp_tmp_msg_0_0.lat = 0.273191395899;
    tmp_tmp_msg_0_0.lon = 0.053605505263;
    tmp_tmp_msg_0_0.z = 0.812018693983;
    tmp_tmp_msg_0_0.z_units = 162U;
    tmp_tmp_msg_0_0.speed = 0.142458607541;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_tmp_msg_0_0.custom.assign("EMIUWUARHYVXWFZBEUXDWCWTPAKELSPKOEUIIGRBPKEJOOJIXTQ");
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
    msg.setTimeStamp(0.801071125427);
    msg.setSource(6695U);
    msg.setSourceEntity(19U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.0584994696208;
    msg.base_lon = 0.896157849585;
    msg.base_time = 0.294124334262;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 58693U;
    tmp_msg_0.priority = -26;
    tmp_msg_0.x = -1075;
    tmp_msg_0.y = -7782;
    tmp_msg_0.z = 6041;
    tmp_msg_0.t = 12984;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.711731910882;
    tmp_tmp_msg_0_0.lon = 0.33299536205;
    tmp_tmp_msg_0_0.z = 0.648867457378;
    tmp_tmp_msg_0_0.z_units = 205U;
    tmp_tmp_msg_0_0.speed = 0.931626851038;
    tmp_tmp_msg_0_0.speed_units = 41U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.285581076512;
    tmp_tmp_tmp_msg_0_0_0.y = 0.118807199015;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0623572392553;
    tmp_tmp_tmp_msg_0_0_0.t = 0.584042083638;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.0468538489309;
    tmp_tmp_msg_0_0.custom.assign("JPFYLZNCIPMWMNYTEZVIJKCQCJKKWAQPDZABUUXKABFGFNKNOHCHYLWFEAGEALGRWMDJEBXHYFZMDNJRFDIUGIHZDCGRRVTBBJXVYTRKGAJVGZQWOYQFQXRKYIDXVDNSQXPWGBQTHVUSWHTEMLLOPACFJUSKWSGSBPYRVZUIQIXEICWFQUVLLJNK");
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
    msg.setTimeStamp(0.508443262298);
    msg.setSource(63083U);
    msg.setSourceEntity(227U);
    msg.setDestination(30467U);
    msg.setDestinationEntity(102U);
    msg.base_lat = 0.608877417648;
    msg.base_lon = 0.682164019978;
    msg.base_time = 0.535897157216;
    const char tmp_msg_0[] = {-121, 114, 19, -119, 12, -30, 85, 84, 88, -25, -88, -43, 95, 121, 15, 4, -112, -97, -97, -19, 123, 30, -52, 35, -87, -62, 81, -3, -123, -13, 47, -24, 39, 5, 74, -118, -120, -62, 47, -13, 55, 80, -9, 2, 78, 89, 74, 92, 107, -68, -68, -106, -95, 8, 41, -122, 113, -74, 89, 36, 73, 79, 15, -16, 27, -69, 121, 54, -68, -80, -79, 16, -83, -90, -81, -45, -57, -85, 26, -33, 37, -46, 50, -116, -82, -2, 35, 122, 10, 75, 11, -99, 118, -63, 44, -77, 5, -75, -88, 57, -83, -98, 38, -125, -100, 98, 101, -80, 111, 46, -23, 33, -73, -76, -61, 118, 121, 35, 36, -100, 53, -26, -42, -92, 60, -2, -14, -41, 48, -110, -11, 85, 47, -108, 94, 125, -42, -43, -122, 90, 38, -30, 37, 77, -121, -68, 63, 36, 39, 99, 26, 99, -17, -114, -22, -65, 21, -1, -85, 48, 61, -33, -46, -17, 92, 55, 47, 36, 116, -39, -75, -117, -112, 122, 80, -46, -46, 85, 21, 106, 98, 123, -93, 68, -21, 69, -11, -58, 100, -118, 11, 50, -108, -69, -7, -29, -79, -13, -35, 113, 97, 42, 53, 68, 7, -46, 105, -100, -46, 25, -46, -96, -54, -34, -4, -58, -23};
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
    msg.setTimeStamp(0.348602715636);
    msg.setSource(62374U);
    msg.setSourceEntity(171U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(239U);
    msg.base_lat = 0.486324972942;
    msg.base_lon = 0.962740554288;
    msg.base_time = 0.187702955826;
    const char tmp_msg_0[] = {-13, -49, 15, 69, -72, 36, 88, 26, 21, 57, -2, -43, 107, 82, 15, -91, -70, -46, -90, -81, -65, -86, 59, 67, 114, 12, -82, 0, 93, 83, -15, 83, 35, 67, 110, -96, -9, -13, -16, -78, -50, 47, 58, 95, 113, 29, -97, 76, 10, -80, 36, 60, 84, -18, 88, 13, 117, -68, 26, 80, 15, -47, 23, 3, -81, -28, 67, 12, 22, -68};
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
    msg.setTimeStamp(0.724526825781);
    msg.setSource(38829U);
    msg.setSourceEntity(221U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(81U);
    msg.base_lat = 0.572403647822;
    msg.base_lon = 0.0835466276589;
    msg.base_time = 0.168205367874;
    const char tmp_msg_0[] = {-99, -14, 70, 32, -43, -57, 34, 13, -1, 124, -45, -19, 119, -49, 113, -14, 1, -53, -115, 1, -32, -14, -38, 19, -65, -74, 71, -36, 97, -97, -102, -95, 37, -8, -92, -88, 75, 116, -24, 3, -107, 98, -13, 110, 50, -1, 63, 56, -99, -52, 42, 94, 123, 59, 81, 92, 51, -99, -22, -126, 44, 71, -33, 47, -78, -115, -80, 57, 52, 33, -22, -96, 104, 116, 19, 113, 76, -23, -44, 43, 94, 45, -7, -70, 120, -59, 63, 72, 20, 2, -53, 66, -117, -48, 67, 119, -60, 33, -126, 25, 37, 2, 68, 125, -30, 20, -21, -93, -38, -4, -88, -100, -49, -49, -21, -58, -119, -122, -125, 93, 7, -94, -23, -66, -15, 106, 43, 117, -84, 76, -18, 38, 93, 9, -13, -66, -70, 113, 65, -47, 119, 96, -90, 38, 101, 120, -48, 9, 80, 54, 35, 99, 35, -80, -98, -100, 54, 92, 29, -121, -28, -59, -37, -110, 51, -115, -7, 14, -113, 104, 7, -107, -110, -53, -24, 81, 37, 106, -87, -102, -73, -91, 104, 69, 0, 116, 69, 78, 118, -119, -66, -63, 121};
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
    msg.setTimeStamp(0.340956605759);
    msg.setSource(24781U);
    msg.setSourceEntity(168U);
    msg.setDestination(40973U);
    msg.setDestinationEntity(80U);
    msg.sys_id = 9984U;
    msg.priority = 73;
    msg.x = -11936;
    msg.y = -794;
    msg.z = 27470;
    msg.t = 13378;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.81034106875;
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
    msg.setTimeStamp(0.433963203512);
    msg.setSource(11365U);
    msg.setSourceEntity(98U);
    msg.setDestination(48216U);
    msg.setDestinationEntity(55U);
    msg.sys_id = 41660U;
    msg.priority = 78;
    msg.x = 882;
    msg.y = -10308;
    msg.z = 16399;
    msg.t = -16948;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 28U;
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
    msg.setTimeStamp(0.874040692309);
    msg.setSource(35250U);
    msg.setSourceEntity(140U);
    msg.setDestination(65274U);
    msg.setDestinationEntity(181U);
    msg.sys_id = 4212U;
    msg.priority = -34;
    msg.x = -6359;
    msg.y = 18607;
    msg.z = -16204;
    msg.t = -18179;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 59550U;
    tmp_msg_0.sys_dst.assign("MRUJKYDYMEJUUETVPKQCTAVDDIBYCRGYQLIOJOXGIXVMVCWLOTNZQXGQRNCZJQQHHZJV");
    tmp_msg_0.flags = 92U;
    const char tmp_tmp_msg_0_0[] = {31, 41, -67, 75, -83, 20, -56, -80, 60, 35, -69, -1, 60, -84, 54, -75, 60, 45, -29, 3, 45, 40, -125, 59, -77, 49, 69, 101, -55, 12, -17, -112, -125, 0, -71, -127, -50, -49, -85, 67, 79, -56, -6, -42, -124, -34, -75, 14, -14, 58, -54, -116, 19, -123, 85, 102, 83, 64, -83, 23, 66, -48, 22, 52, 90, 45, -99, -6, 98, -17, -112, -75, 120, 60, 106, -66, 62, 62, 95, 35, 14, 32, -33, -27, -100};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.851792178534);
    msg.setSource(15462U);
    msg.setSourceEntity(249U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(116U);
    msg.req_id = 22680U;
    msg.type = 181U;
    msg.max_size = 6079U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.149313110558;
    tmp_msg_0.base_lon = 0.717872264305;
    tmp_msg_0.base_time = 0.326861001691;
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
    msg.setTimeStamp(0.645043018649);
    msg.setSource(39618U);
    msg.setSourceEntity(123U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(58U);
    msg.req_id = 58126U;
    msg.type = 126U;
    msg.max_size = 14523U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.826740918831;
    tmp_msg_0.base_lon = 0.20293198104;
    tmp_msg_0.base_time = 0.0846383039805;
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
    msg.setTimeStamp(0.210201139651);
    msg.setSource(43658U);
    msg.setSourceEntity(93U);
    msg.setDestination(10506U);
    msg.setDestinationEntity(213U);
    msg.req_id = 49678U;
    msg.type = 238U;
    msg.max_size = 12708U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.972211432257;
    tmp_msg_0.base_lon = 0.715503902706;
    tmp_msg_0.base_time = 0.0628793877551;
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
    msg.setTimeStamp(0.330018432203);
    msg.setSource(13312U);
    msg.setSourceEntity(55U);
    msg.setDestination(59522U);
    msg.setDestinationEntity(240U);
    msg.original_source = 30154U;
    msg.destination = 23274U;
    msg.timeout = 0.752112553927;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("DCPNZFJDFTORWXHTJNDEQHHVWVBPHTLGGKTUKKYXVZNSQHOFDJTGSMYVWPAGHCDPLLBRJBEHMPQLFWSQKHUABMUIOUZKXYLLCXKBWGRRWMUGHSRSCSOVVK");
    tmp_msg_0.data.assign("QZPTWLNRRUGQIPTUJUJKVDFVYPBLWRCGYPQFAAHZGCHQMAPSDWJGAUXKDSDDQXYHLRQGSIJWTFMBBFTDZSULNMCZIMCZAPCDVJFKFHKOZKJZJAOUPKBETHYGXHBLVYBWBALVOHUUIL");
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
    msg.setTimeStamp(0.142459690263);
    msg.setSource(55689U);
    msg.setSourceEntity(72U);
    msg.setDestination(53532U);
    msg.setDestinationEntity(177U);
    msg.original_source = 41289U;
    msg.destination = 39258U;
    msg.timeout = 0.320498466669;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.666249243217;
    tmp_msg_0.y = 0.396980004266;
    tmp_msg_0.z = 0.753772399829;
    tmp_msg_0.phi = 0.188929006166;
    tmp_msg_0.theta = 0.86354306633;
    tmp_msg_0.psi = 0.841184035465;
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
    msg.setTimeStamp(0.816357446901);
    msg.setSource(59880U);
    msg.setSourceEntity(86U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(112U);
    msg.original_source = 32208U;
    msg.destination = 9834U;
    msg.timeout = 0.146433285715;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 22443U;
    tmp_msg_0.lat = 0.828330283839;
    tmp_msg_0.lon = 0.287597547753;
    tmp_msg_0.z = 0.46706073515;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.795097139249;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.duration = 31738U;
    tmp_msg_0.radius = 0.972458048732;
    tmp_msg_0.flags = 191U;
    tmp_msg_0.custom.assign("BJTHOHOXZUVAREJWCDHOFXSNJFAUAKGTDYOPW");
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
    msg.setTimeStamp(0.300238974715);
    msg.setSource(53944U);
    msg.setSourceEntity(18U);
    msg.setDestination(20259U);
    msg.setDestinationEntity(248U);
    msg.id = 156U;
    msg.range = 0.542689849386;

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
    msg.setTimeStamp(0.653188097392);
    msg.setSource(54151U);
    msg.setSourceEntity(7U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(142U);
    msg.id = 11U;
    msg.range = 0.831245778834;

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
    msg.setTimeStamp(0.566982030957);
    msg.setSource(22262U);
    msg.setSourceEntity(33U);
    msg.setDestination(3809U);
    msg.setDestinationEntity(121U);
    msg.id = 99U;
    msg.range = 0.319280874693;

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
    msg.setTimeStamp(0.558522038707);
    msg.setSource(44404U);
    msg.setSourceEntity(136U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("VSZQVRPYNMZDBNWWHHKFVPMTJAJHCWKBPOKMXXOGTYDDSKXGTUGXPOXAQXKFZPHMBLRBMLEQDCJLYSCFOZLJWETXAQFUQPMRDXNEWCRBLDJNOIIVQWGQNJQMDMKPJDIVBLAIHLRIECMEZSYSKPVWLVPMTJEOHSNITZELCIYO");
    msg.lat = 0.6997778074;
    msg.lon = 0.0427734168102;
    msg.depth = 0.711113630697;
    msg.query_channel = 134U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 93U;

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
    msg.setTimeStamp(0.300887721895);
    msg.setSource(33262U);
    msg.setSourceEntity(76U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("GTMXJFBZRDPIHPKVGYCKANQQGJIQOCAUOOWKKGPZUFNFFLVBQDLJEKRXXAMIBWCKOQDNWAYGNRQFQEMMPEUKIWWGQTBUFMPGXXGFUZOUUNWNRVOJCHXEDHSXAARSIVKEBJSJXHUBPMLTBCERQZCAPBSRBERLRXOYNZNZGORMCDAHGHLKCHSSQHZESMJSJYVZIOLADTVSNPUYFSMVYXYLKZYTIWD");
    msg.lat = 0.552135365946;
    msg.lon = 0.629978999992;
    msg.depth = 0.163083790268;
    msg.query_channel = 246U;
    msg.reply_channel = 209U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.811539233116);
    msg.setSource(6038U);
    msg.setSourceEntity(45U);
    msg.setDestination(59719U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("RFDAQNAOWLYUROWLEDYEQGZQPLMNMYJGGPHGJSMSXBDXXQEZKPMSHTKNALLETWTHSEVHISHRTGFDRXPLNBBVTSJQTNPECUODFNJWOKJKOBDKYCAQVITWNUJVRFQCRCHKNEGGWXKKTIBNVAIIRTUHLSEABC");
    msg.lat = 0.362134580244;
    msg.lon = 0.719881986332;
    msg.depth = 0.0372375425622;
    msg.query_channel = 114U;
    msg.reply_channel = 162U;
    msg.transponder_delay = 133U;

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
    msg.setTimeStamp(0.584876616264);
    msg.setSource(42186U);
    msg.setSourceEntity(159U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(208U);
    msg.op = 59U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AJWLPOFNJTOICFOBSJGCZNWDVVJKLYTLMZDKXLEMQRNWXKJELUUNYYBCMVSZSNKUSCBKLERICWGTQQAVLSAGM");
    tmp_msg_0.lat = 0.542235497167;
    tmp_msg_0.lon = 0.185822943643;
    tmp_msg_0.depth = 0.18147828976;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 238U;
    tmp_msg_0.transponder_delay = 151U;
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
    msg.setTimeStamp(0.609629690376);
    msg.setSource(17335U);
    msg.setSourceEntity(191U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(5U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.8507829727);
    msg.setSource(28812U);
    msg.setSourceEntity(110U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(121U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.0201479269179);
    msg.setSource(57543U);
    msg.setSourceEntity(31U);
    msg.setDestination(4147U);
    msg.setDestinationEntity(58U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 26262U;
    tmp_msg_0.status = 236U;
    tmp_msg_0.text.assign("KHGASHOXAWEGVRZSHICRVFHOFENPBKYMFIYOSZGAAQIFNQHJZSIKTRTXJBMYUGYYPCEDWCYJCVXCUQONDBHMBEUKDZASCQSYTRUCDEAPQGHT");
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
    msg.setTimeStamp(0.0109880375236);
    msg.setSource(48694U);
    msg.setSourceEntity(75U);
    msg.setDestination(53813U);
    msg.setDestinationEntity(4U);
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.367668711944);
    msg.setSource(35557U);
    msg.setSourceEntity(204U);
    msg.setDestination(56252U);
    msg.setDestinationEntity(227U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("NYVNZQJXXNBR");
    tmp_msg_0.op = 232U;
    tmp_msg_0.lat = 0.863442028254;
    tmp_msg_0.lon = 0.583622693912;
    tmp_msg_0.height = 0.749689149225;
    tmp_msg_0.x = 0.093219816283;
    tmp_msg_0.y = 0.84425665742;
    tmp_msg_0.z = 0.464083597747;
    tmp_msg_0.phi = 0.151124238917;
    tmp_msg_0.theta = 0.407499360754;
    tmp_msg_0.psi = 0.622110607823;
    tmp_msg_0.vx = 0.916251644768;
    tmp_msg_0.vy = 0.616441490233;
    tmp_msg_0.vz = 0.182316805853;
    tmp_msg_0.p = 0.119001099421;
    tmp_msg_0.q = 0.559416595617;
    tmp_msg_0.r = 0.52869934539;
    tmp_msg_0.svx = 0.176320659313;
    tmp_msg_0.svy = 0.770462187327;
    tmp_msg_0.svz = 0.749553473422;
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
    msg.setTimeStamp(0.936895103151);
    msg.setSource(505U);
    msg.setSourceEntity(178U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(142U);
    msg.op = 3U;
    msg.system.assign("UUUNFUSAPXAFQOJXEYFSIPYMPJKEOOIGSATCANCIVRTPKYQJAMKXRZYHHBXKBCPETCIGFLSSPHWSCVZNXRUOAWXLYKCMIDFCJWWZHXTB");
    msg.range = 0.143411763925;
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.969678276463);
    msg.setSource(41102U);
    msg.setSourceEntity(26U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(196U);
    msg.op = 93U;
    msg.system.assign("UNYVWXYXGWAUEDTXLRKEPIUOHYHTVQKZUAMAYHMMCLZZWDRVSBTVFHHJJTVSXKEPRFMFMLBFBXYOZFQFUOFHPSGMBHPOEGXELMIKASTEJWCQUCJVICPGMZVVWCZNCLQWTDIGQSQNSDIXVNHPIXOKRPZFNHKSKGDRAW");
    msg.range = 0.903234536566;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.765682835299;
    tmp_msg_0.beam_height = 0.12999981522;
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
    msg.setTimeStamp(0.0980109487892);
    msg.setSource(36831U);
    msg.setSourceEntity(187U);
    msg.setDestination(55829U);
    msg.setDestinationEntity(15U);
    msg.op = 81U;
    msg.system.assign("OXLCQQGCVGTHYJQGYACDLQAPBVLCDYTWHQBJBSBRJOPYQEOCZWASOFWFYODULFYVQAFTLKMMZFWRQOHAZWVIXJPKWZGCYRHTEPZXJXECVVLEBHCISXMZDWRSIDBVUYWSGZASMJVPRCDLJDAUAGPTUJCGNITTROUMUHNIMDNKLIAYFGINBMOBNNMVZHMR");
    msg.range = 0.644774292405;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.60808082544;
    tmp_msg_0.sys_src = 30075U;
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
    msg.setTimeStamp(0.919041658307);
    msg.setSource(37247U);
    msg.setSourceEntity(41U);
    msg.setDestination(33055U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.148511473826);
    msg.setSource(50736U);
    msg.setSourceEntity(81U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.821304533212);
    msg.setSource(36600U);
    msg.setSourceEntity(238U);
    msg.setDestination(64236U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.778485366648);
    msg.setSource(36663U);
    msg.setSourceEntity(209U);
    msg.setDestination(10839U);
    msg.setDestinationEntity(245U);
    msg.list.assign("MESZJPLGNGCBMQYERNKGIGLWLMLENYIWBKBOCQNKMZTHYQETHBAXGVWCGJAQGFCHPKUWIWCVAUXRXNFDDJSQOOZXSTLQPWPUYZXVYOTAXKVDRAKUCQRMNFVEFNUURRWRQJHBJJRMTKPZERMCTWSDODBTZOFHJAUDMJGJUPCSHQTAOZYLSZQYKUZYNAKMOAMVINPYGWASBHBVFP");

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
    msg.setTimeStamp(0.308075170675);
    msg.setSource(21843U);
    msg.setSourceEntity(92U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(86U);
    msg.list.assign("DRQATHOKPAXKNFVXVWYFCASMDVJWSUSNGICEHWZAAHSBPCTLDAWYYOEUBQVTQLQCUSH");

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
    msg.setTimeStamp(0.799193553932);
    msg.setSource(36627U);
    msg.setSourceEntity(251U);
    msg.setDestination(50101U);
    msg.setDestinationEntity(253U);
    msg.list.assign("VFIFBSLATWIGDVKBIWRGYJKNQRPHQPKPWYKYZAXWEKFCNODZECJMSULNYVQAKHLUWADTFZOJGLSHEAXWLRZYNRCXUFSBDSOURTNVMLOIXHMOKGVFEJXQQMCSIEZRSJGGLDNCFGMQQJEZIGKYXXMQYQHPEHSSQLOBIBIADXDBRPOIPRPHNGABDAFXCKCUBTJTEPPVUBZITMFOXDZBZJ");

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
    msg.setTimeStamp(0.257893008469);
    msg.setSource(55804U);
    msg.setSourceEntity(201U);
    msg.setDestination(58629U);
    msg.setDestinationEntity(121U);
    msg.peer.assign("TJMMGEUWDBUELDAQMZKMXIFLHKKQJSWKMBPWQTLQPHTBAVIVMZTQUCEKAPFVXCKXYAHNWILDEGZEDDRAZHVUEHTPYVEWXOBNOZTEIFYKCWKOCJWPFTMXHTBPUVNILICGOFQRMFZBVUSRAXSWKCJHWLONCPNGJSAVJZPNRRXFGFYMLYYCRQBIHZZIDGBPVUKCHANUONSOLL");
    msg.rssi = 0.622216583261;
    msg.integrity = 60026U;

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
    msg.setTimeStamp(0.583850510232);
    msg.setSource(44033U);
    msg.setSourceEntity(23U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(120U);
    msg.peer.assign("QKKPZTTBKXJYNTLZNIAHGQLZLURQGQZMFNRNQMFCNUAFOMNBWISHGMDCBFHCAWIXHNVCTGXJMUZOBKLUEKXZSFVXYREYHMMCFYKKEDYIJBLUDPSPSGRYQNBPSWBQWZPTDVWTOABJLSUXARXQUUFOLDLPIJIJEXJWFRMTCITDUYBVJVPRDPRYEOHCQADUTAAEHLCDOGIENIRRTZMMEGAKGWYJCVSAKOHVZVJEIGYCPSSSOVHODXHWQG");
    msg.rssi = 0.842826639022;
    msg.integrity = 64358U;

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
    msg.setTimeStamp(0.492565296313);
    msg.setSource(63135U);
    msg.setSourceEntity(193U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(55U);
    msg.peer.assign("SFSLMTQOTVZHHMMXDDBIIEBSDRBNRVRXNEEBCTROSLMRXFSFJEHIIABIYDYFJWNEWYXINCSJCNVDGFRUOGAOTAUPLJNPLKHMWOFGKCMLYXJGCPGOGJWBJYJWPFXECHKMTLVVHZEASLEYDKKHPKUUQCCOFBIZMNYNEQKMUOSRWQKRGNZAZYOKUTLHPJBXDBUCWVEQYQWIIL");
    msg.rssi = 0.576849974475;
    msg.integrity = 41276U;

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
    msg.setTimeStamp(0.0474128090293);
    msg.setSource(61152U);
    msg.setSourceEntity(162U);
    msg.setDestination(58226U);
    msg.setDestinationEntity(113U);
    msg.value = -1019;

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
    msg.setTimeStamp(0.812376165405);
    msg.setSource(57364U);
    msg.setSourceEntity(202U);
    msg.setDestination(14742U);
    msg.setDestinationEntity(137U);
    msg.value = 26937;

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
    msg.setTimeStamp(0.235700575643);
    msg.setSource(1280U);
    msg.setSourceEntity(124U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(44U);
    msg.value = -2716;

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
    msg.setTimeStamp(0.473808123071);
    msg.setSource(51269U);
    msg.setSourceEntity(208U);
    msg.setDestination(45268U);
    msg.setDestinationEntity(26U);
    msg.value = 0.455658893678;

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
    msg.setTimeStamp(0.475155083033);
    msg.setSource(36100U);
    msg.setSourceEntity(194U);
    msg.setDestination(57557U);
    msg.setDestinationEntity(6U);
    msg.value = 0.573760590293;

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
    msg.setTimeStamp(0.0885123382124);
    msg.setSource(549U);
    msg.setSourceEntity(235U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(132U);
    msg.value = 0.806468002736;

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
    msg.setTimeStamp(0.626877865163);
    msg.setSource(31022U);
    msg.setSourceEntity(167U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(153U);
    msg.value = 0.432850137378;

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
    msg.setTimeStamp(0.133091187321);
    msg.setSource(46397U);
    msg.setSourceEntity(43U);
    msg.setDestination(49756U);
    msg.setDestinationEntity(143U);
    msg.value = 0.445640453783;

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
    msg.setTimeStamp(0.294309874515);
    msg.setSource(36035U);
    msg.setSourceEntity(213U);
    msg.setDestination(36678U);
    msg.setDestinationEntity(212U);
    msg.value = 0.652255418598;

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
    msg.setTimeStamp(0.884647496038);
    msg.setSource(21691U);
    msg.setSourceEntity(66U);
    msg.setDestination(25015U);
    msg.setDestinationEntity(1U);
    msg.validity = 42305U;
    msg.type = 172U;
    msg.utc_year = 57901U;
    msg.utc_month = 226U;
    msg.utc_day = 117U;
    msg.utc_time = 0.454227470276;
    msg.lat = 0.777537634675;
    msg.lon = 0.392183113024;
    msg.height = 0.907015191713;
    msg.satellites = 71U;
    msg.cog = 0.798358605072;
    msg.sog = 0.0328763666704;
    msg.hdop = 0.757733814219;
    msg.vdop = 0.961092127068;
    msg.hacc = 0.234073478771;
    msg.vacc = 0.889948087432;

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
    msg.setTimeStamp(0.866021462934);
    msg.setSource(46908U);
    msg.setSourceEntity(233U);
    msg.setDestination(803U);
    msg.setDestinationEntity(142U);
    msg.validity = 12915U;
    msg.type = 225U;
    msg.utc_year = 53553U;
    msg.utc_month = 85U;
    msg.utc_day = 46U;
    msg.utc_time = 0.285148620119;
    msg.lat = 0.695406084143;
    msg.lon = 0.79271132343;
    msg.height = 0.778831109932;
    msg.satellites = 40U;
    msg.cog = 0.644302680816;
    msg.sog = 0.842075304037;
    msg.hdop = 0.767883605942;
    msg.vdop = 0.720080019592;
    msg.hacc = 0.983521125774;
    msg.vacc = 0.918087308954;

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
    msg.setTimeStamp(0.970228073005);
    msg.setSource(61893U);
    msg.setSourceEntity(149U);
    msg.setDestination(22924U);
    msg.setDestinationEntity(4U);
    msg.validity = 16553U;
    msg.type = 47U;
    msg.utc_year = 8038U;
    msg.utc_month = 76U;
    msg.utc_day = 171U;
    msg.utc_time = 0.754388044523;
    msg.lat = 0.616948669328;
    msg.lon = 0.442680866116;
    msg.height = 0.62869030754;
    msg.satellites = 146U;
    msg.cog = 0.430266982676;
    msg.sog = 0.941276161341;
    msg.hdop = 0.118564342209;
    msg.vdop = 0.171841535883;
    msg.hacc = 0.978085676895;
    msg.vacc = 0.933713257377;

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
    msg.setTimeStamp(0.845967417199);
    msg.setSource(1854U);
    msg.setSourceEntity(107U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(231U);
    msg.time = 0.468391666146;
    msg.phi = 0.654996355087;
    msg.theta = 0.539393373172;
    msg.psi = 0.832716919084;
    msg.psi_magnetic = 0.950642468629;

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
    msg.setTimeStamp(0.351882088423);
    msg.setSource(11605U);
    msg.setSourceEntity(93U);
    msg.setDestination(63561U);
    msg.setDestinationEntity(225U);
    msg.time = 0.500141450411;
    msg.phi = 0.399882388354;
    msg.theta = 0.694783913937;
    msg.psi = 0.857482710635;
    msg.psi_magnetic = 0.91105284814;

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
    msg.setTimeStamp(0.930207145116);
    msg.setSource(39514U);
    msg.setSourceEntity(3U);
    msg.setDestination(1264U);
    msg.setDestinationEntity(226U);
    msg.time = 0.18712756913;
    msg.phi = 0.721411498908;
    msg.theta = 0.028610340377;
    msg.psi = 0.993072734233;
    msg.psi_magnetic = 0.0973943746534;

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
    msg.setTimeStamp(0.447392212275);
    msg.setSource(52854U);
    msg.setSourceEntity(77U);
    msg.setDestination(21440U);
    msg.setDestinationEntity(121U);
    msg.time = 0.841600157185;
    msg.x = 0.0255441110353;
    msg.y = 0.965676999708;
    msg.z = 0.715494041426;
    msg.timestep = 0.19204761088;

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
    msg.setTimeStamp(0.584894852187);
    msg.setSource(50313U);
    msg.setSourceEntity(180U);
    msg.setDestination(22167U);
    msg.setDestinationEntity(15U);
    msg.time = 0.797863937632;
    msg.x = 0.613109092351;
    msg.y = 0.277743938129;
    msg.z = 0.533673353956;
    msg.timestep = 0.210063623447;

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
    msg.setTimeStamp(0.206024246091);
    msg.setSource(6758U);
    msg.setSourceEntity(209U);
    msg.setDestination(3211U);
    msg.setDestinationEntity(89U);
    msg.time = 0.376407460737;
    msg.x = 0.0759877398248;
    msg.y = 0.650029399801;
    msg.z = 0.657147726454;
    msg.timestep = 0.505486664985;

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
    msg.setTimeStamp(0.338545929948);
    msg.setSource(27254U);
    msg.setSourceEntity(178U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(100U);
    msg.time = 0.510025609318;
    msg.x = 0.313670610217;
    msg.y = 0.00450373349171;
    msg.z = 0.595597188965;

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
    msg.setTimeStamp(0.177367960086);
    msg.setSource(42060U);
    msg.setSourceEntity(204U);
    msg.setDestination(49093U);
    msg.setDestinationEntity(29U);
    msg.time = 0.369182096753;
    msg.x = 0.0554605827932;
    msg.y = 0.792157749324;
    msg.z = 0.558424639304;

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
    msg.setTimeStamp(0.841999419758);
    msg.setSource(62121U);
    msg.setSourceEntity(219U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(157U);
    msg.time = 0.966767844974;
    msg.x = 0.0916458898906;
    msg.y = 0.119500075466;
    msg.z = 0.44264177824;

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
    msg.setTimeStamp(0.661237212773);
    msg.setSource(39998U);
    msg.setSourceEntity(191U);
    msg.setDestination(33948U);
    msg.setDestinationEntity(206U);
    msg.time = 0.26302279906;
    msg.x = 0.457826113426;
    msg.y = 0.503659623209;
    msg.z = 0.582005731047;

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
    msg.setTimeStamp(0.425508205453);
    msg.setSource(25888U);
    msg.setSourceEntity(221U);
    msg.setDestination(29577U);
    msg.setDestinationEntity(210U);
    msg.time = 0.604151666242;
    msg.x = 0.215750526016;
    msg.y = 0.697547181623;
    msg.z = 0.00835935728834;

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
    msg.setTimeStamp(0.887627609767);
    msg.setSource(26692U);
    msg.setSourceEntity(70U);
    msg.setDestination(51304U);
    msg.setDestinationEntity(12U);
    msg.time = 0.169066863835;
    msg.x = 0.726594171871;
    msg.y = 0.743188928073;
    msg.z = 0.342929932671;

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
    msg.setTimeStamp(0.990056771048);
    msg.setSource(6555U);
    msg.setSourceEntity(13U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(172U);
    msg.time = 0.268168141861;
    msg.x = 0.650637591203;
    msg.y = 0.958927669052;
    msg.z = 0.783109440318;

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
    msg.setTimeStamp(0.17306901043);
    msg.setSource(38000U);
    msg.setSourceEntity(50U);
    msg.setDestination(15333U);
    msg.setDestinationEntity(104U);
    msg.time = 0.58518905602;
    msg.x = 0.0481109020961;
    msg.y = 0.0628316830767;
    msg.z = 0.892122589627;

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
    msg.setTimeStamp(0.558708240675);
    msg.setSource(53588U);
    msg.setSourceEntity(239U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(23U);
    msg.time = 0.129908805621;
    msg.x = 0.00737355541349;
    msg.y = 0.628496262855;
    msg.z = 0.56735526886;

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
    msg.setTimeStamp(0.602374714458);
    msg.setSource(766U);
    msg.setSourceEntity(197U);
    msg.setDestination(22078U);
    msg.setDestinationEntity(9U);
    msg.validity = 46U;
    msg.x = 0.0741723289115;
    msg.y = 0.741435132718;
    msg.z = 0.327031179798;

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
    msg.setTimeStamp(0.68325946842);
    msg.setSource(23748U);
    msg.setSourceEntity(212U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(31U);
    msg.validity = 64U;
    msg.x = 0.19919903606;
    msg.y = 0.510422937704;
    msg.z = 0.118430674107;

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
    msg.setTimeStamp(0.50853229804);
    msg.setSource(30537U);
    msg.setSourceEntity(64U);
    msg.setDestination(52664U);
    msg.setDestinationEntity(220U);
    msg.validity = 222U;
    msg.x = 0.0412941994588;
    msg.y = 0.911849044786;
    msg.z = 0.68855314605;

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
    msg.setTimeStamp(0.0602815598701);
    msg.setSource(47310U);
    msg.setSourceEntity(97U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(236U);
    msg.validity = 188U;
    msg.x = 0.527042884975;
    msg.y = 0.284462270779;
    msg.z = 0.561768455347;

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
    msg.setTimeStamp(0.319402142251);
    msg.setSource(5412U);
    msg.setSourceEntity(69U);
    msg.setDestination(60898U);
    msg.setDestinationEntity(219U);
    msg.validity = 167U;
    msg.x = 0.259990817184;
    msg.y = 0.113084764401;
    msg.z = 0.711622796068;

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
    msg.setTimeStamp(0.380754577208);
    msg.setSource(15903U);
    msg.setSourceEntity(62U);
    msg.setDestination(57975U);
    msg.setDestinationEntity(132U);
    msg.validity = 18U;
    msg.x = 0.578502035915;
    msg.y = 0.506183400916;
    msg.z = 0.870601455132;

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
    msg.setTimeStamp(0.0506970276219);
    msg.setSource(20939U);
    msg.setSourceEntity(229U);
    msg.setDestination(17830U);
    msg.setDestinationEntity(204U);
    msg.time = 0.216753929969;
    msg.x = 0.313896378353;
    msg.y = 0.112509815633;
    msg.z = 0.147164531977;

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
    msg.setTimeStamp(0.805792650537);
    msg.setSource(28603U);
    msg.setSourceEntity(31U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(65U);
    msg.time = 0.239099040683;
    msg.x = 0.565190582657;
    msg.y = 0.707995194804;
    msg.z = 0.041091096242;

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
    msg.setTimeStamp(0.701140775922);
    msg.setSource(22356U);
    msg.setSourceEntity(229U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(80U);
    msg.time = 0.802261850405;
    msg.x = 0.116219689709;
    msg.y = 0.573834998171;
    msg.z = 0.522733843244;

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
    msg.setTimeStamp(0.268629799029);
    msg.setSource(7353U);
    msg.setSourceEntity(146U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(252U);
    msg.validity = 37U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.232490232566;
    tmp_msg_0.beam_height = 0.494687015074;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.754321596554;

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
    msg.setTimeStamp(0.705504976395);
    msg.setSource(9992U);
    msg.setSourceEntity(228U);
    msg.setDestination(11154U);
    msg.setDestinationEntity(243U);
    msg.validity = 107U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.546331142579;
    tmp_msg_0.beam_height = 0.0600865867316;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.31703799791;

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
    msg.setTimeStamp(0.701511744115);
    msg.setSource(21709U);
    msg.setSourceEntity(185U);
    msg.setDestination(33655U);
    msg.setDestinationEntity(176U);
    msg.validity = 254U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0882215295486;
    tmp_msg_0.y = 0.372246347047;
    tmp_msg_0.z = 0.955537265324;
    tmp_msg_0.phi = 0.499407734367;
    tmp_msg_0.theta = 0.21766513507;
    tmp_msg_0.psi = 0.320391697195;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.193941561161;

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
    msg.setTimeStamp(0.825180937454);
    msg.setSource(61836U);
    msg.setSourceEntity(2U);
    msg.setDestination(27530U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0542011994084;

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
    msg.setTimeStamp(0.911309533364);
    msg.setSource(39615U);
    msg.setSourceEntity(197U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(189U);
    msg.value = 0.610325355927;

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
    msg.setTimeStamp(0.235411708223);
    msg.setSource(23790U);
    msg.setSourceEntity(113U);
    msg.setDestination(56080U);
    msg.setDestinationEntity(157U);
    msg.value = 0.887885700872;

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
    msg.setTimeStamp(0.0144350584742);
    msg.setSource(30496U);
    msg.setSourceEntity(87U);
    msg.setDestination(27574U);
    msg.setDestinationEntity(205U);
    msg.value = 0.686644077832;

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
    msg.setTimeStamp(0.988531855353);
    msg.setSource(13031U);
    msg.setSourceEntity(146U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(21U);
    msg.value = 0.419585865739;

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
    msg.setTimeStamp(0.828158129777);
    msg.setSource(10434U);
    msg.setSourceEntity(133U);
    msg.setDestination(42228U);
    msg.setDestinationEntity(60U);
    msg.value = 0.726180169677;

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
    msg.setTimeStamp(0.402198081437);
    msg.setSource(60377U);
    msg.setSourceEntity(103U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(173U);
    msg.value = 0.841908853549;

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
    msg.setTimeStamp(0.839663699921);
    msg.setSource(12948U);
    msg.setSourceEntity(31U);
    msg.setDestination(50958U);
    msg.setDestinationEntity(197U);
    msg.value = 0.798718797758;

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
    msg.setTimeStamp(0.650508310131);
    msg.setSource(45034U);
    msg.setSourceEntity(187U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0108360490175;

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
    msg.setTimeStamp(0.816162613754);
    msg.setSource(4359U);
    msg.setSourceEntity(163U);
    msg.setDestination(15893U);
    msg.setDestinationEntity(84U);
    msg.value = 0.140969765534;

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
    msg.setTimeStamp(0.322610509137);
    msg.setSource(46860U);
    msg.setSourceEntity(92U);
    msg.setDestination(25716U);
    msg.setDestinationEntity(152U);
    msg.value = 0.469150091092;

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
    msg.setTimeStamp(0.951676383728);
    msg.setSource(16667U);
    msg.setSourceEntity(169U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(64U);
    msg.value = 0.732518143758;

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
    msg.setTimeStamp(0.377995014323);
    msg.setSource(6113U);
    msg.setSourceEntity(208U);
    msg.setDestination(49847U);
    msg.setDestinationEntity(91U);
    msg.value = 0.972596447989;

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
    msg.setTimeStamp(0.198316364483);
    msg.setSource(14149U);
    msg.setSourceEntity(8U);
    msg.setDestination(39882U);
    msg.setDestinationEntity(147U);
    msg.value = 0.17527023633;

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
    msg.setTimeStamp(0.912284284856);
    msg.setSource(51569U);
    msg.setSourceEntity(192U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(205U);
    msg.value = 0.543616738103;

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
    msg.setTimeStamp(0.423582274267);
    msg.setSource(62047U);
    msg.setSourceEntity(160U);
    msg.setDestination(21695U);
    msg.setDestinationEntity(240U);
    msg.value = 0.458267019902;

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
    msg.setTimeStamp(0.145155040361);
    msg.setSource(29850U);
    msg.setSourceEntity(36U);
    msg.setDestination(25659U);
    msg.setDestinationEntity(230U);
    msg.value = 0.80320760838;

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
    msg.setTimeStamp(0.767197373517);
    msg.setSource(13267U);
    msg.setSourceEntity(49U);
    msg.setDestination(26839U);
    msg.setDestinationEntity(177U);
    msg.value = 0.639062457977;

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
    msg.setTimeStamp(0.40104168441);
    msg.setSource(26668U);
    msg.setSourceEntity(118U);
    msg.setDestination(57134U);
    msg.setDestinationEntity(184U);
    msg.value = 0.845074526162;

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
    msg.setTimeStamp(0.62221741352);
    msg.setSource(54600U);
    msg.setSourceEntity(211U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(214U);
    msg.value = 0.411390135193;

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
    msg.setTimeStamp(0.626173529381);
    msg.setSource(46442U);
    msg.setSourceEntity(218U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(168U);
    msg.value = 0.859908597925;

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
    msg.setTimeStamp(0.416944157663);
    msg.setSource(1699U);
    msg.setSourceEntity(117U);
    msg.setDestination(39586U);
    msg.setDestinationEntity(120U);
    msg.value = 0.883570717602;

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
    msg.setTimeStamp(0.934798337797);
    msg.setSource(44691U);
    msg.setSourceEntity(15U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(245U);
    msg.value = 0.916026577574;

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
    msg.setTimeStamp(0.744219459049);
    msg.setSource(32602U);
    msg.setSourceEntity(213U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(241U);
    msg.value = 0.810188516344;

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
    msg.setTimeStamp(0.990704929167);
    msg.setSource(9201U);
    msg.setSourceEntity(131U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(72U);
    msg.direction = 0.343836565957;
    msg.speed = 0.730804702757;
    msg.turbulence = 0.741221209698;

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
    msg.setTimeStamp(0.807661695916);
    msg.setSource(34494U);
    msg.setSourceEntity(53U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(217U);
    msg.direction = 0.0943754444966;
    msg.speed = 0.278410174908;
    msg.turbulence = 0.395287943366;

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
    msg.setTimeStamp(0.420159798996);
    msg.setSource(15523U);
    msg.setSourceEntity(166U);
    msg.setDestination(8612U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.696792845303;
    msg.speed = 0.514066159884;
    msg.turbulence = 0.750921328397;

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
    msg.setTimeStamp(0.547598019133);
    msg.setSource(1760U);
    msg.setSourceEntity(190U);
    msg.setDestination(32905U);
    msg.setDestinationEntity(160U);
    msg.value = 0.682412928737;

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
    msg.setTimeStamp(0.987465465544);
    msg.setSource(19763U);
    msg.setSourceEntity(160U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(144U);
    msg.value = 0.74210760455;

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
    msg.setTimeStamp(0.0683320859219);
    msg.setSource(52622U);
    msg.setSourceEntity(151U);
    msg.setDestination(64864U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0827699927493;

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
    msg.setTimeStamp(0.658562865666);
    msg.setSource(9755U);
    msg.setSourceEntity(178U);
    msg.setDestination(53486U);
    msg.setDestinationEntity(237U);
    msg.value.assign("POYXMACHCXMFRAONEXSRAVNKMHAGDCVLXAYPWBEASMEHRTVFJBQJRMUNFILUYDCJTWAQCPVDFHMWVHBXNAEPVRICULWLNROSPQBFDIEDYNUMSJLHLUOGQIWQHXGATPZIUMOQHYF");

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
    msg.setTimeStamp(0.922080679891);
    msg.setSource(34515U);
    msg.setSourceEntity(112U);
    msg.setDestination(27119U);
    msg.setDestinationEntity(194U);
    msg.value.assign("URLOUULPAXXJFNEFJZKZQYAOBXGABUBWOVBQXAVIPMIQOVWQKRGQQXTMSPHEEKBNRFYHWGONSBOCLJWFBDNWZFLPAMHC");

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
    msg.setTimeStamp(0.431874286647);
    msg.setSource(16539U);
    msg.setSourceEntity(137U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(155U);
    msg.value.assign("ZFFUKCQVOOUJDETTXXEKRIWPCAHKUTEYWBAKKQZEHMWLRPWSSWPQHMFPNSDMTXPXCHXNNSVBYEVTRMYIYPZDUMRAHKDBABBVCGVLXIMFTSSWLJZKENVTHJFHJGZKRZWGGCQWHONNQNLRYOYQMTDDOCMTOZHBLBUCQCQDXLOVRJCNUEMANDAFIQJSUDDBVGXRPGIFIFIBLIEVAEOWZFWASYAGUSYLLLEZXNZ");

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
    msg.setTimeStamp(0.127947228186);
    msg.setSource(51491U);
    msg.setSourceEntity(162U);
    msg.setDestination(30049U);
    msg.setDestinationEntity(177U);
    const char tmp_msg_0[] = {27, -118, -115, 71, -44, -66, -87, -122, 70, 124, 114, -98, 65, 114, -2, 5, -128, -77, 21, -103, -6, -91, 46, 102, -17, -31, 1, -101, -106, 51, 0, -82, -29, -51, 34, 55, 46, 13, -63, -68, -5, 100, -62, 65, 52, 46, -95, 35, -56, 76, 49, 53, 72, 57, 124, -55, -71, -60, -18, 41, -83, -103, 114};
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
    msg.setTimeStamp(0.0402906589518);
    msg.setSource(25556U);
    msg.setSourceEntity(27U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(28U);
    const char tmp_msg_0[] = {68, 42, -105, -60, 91, 20, 120, 3, -8, -118, 120, -88, -97, -104, -3, 104, 5, -99, 44, 74, 61, -119, -4, -115, 99, 90, -8, -94, 70, 85, 26, -68, -36, 15, -31, 106, -24, 91, -54, 116, 89, -56, -105, -46, -16, -44, -11, 82, -20, 96, -70, -57, -48, 14, -64, 4, 104, 17, -9, 82, -77, 7, -65, -26, -9, 58, -77, -29, 63, -75, -44, -41, -74, -55, 52, -117, -106, 37, -117, -90, -51, 62, -74, -75, 119, -104, 109, -24, 118, -64, 74, -104, -61, 82, 71};
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
    msg.setTimeStamp(0.757316038052);
    msg.setSource(57553U);
    msg.setSourceEntity(242U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {121, -14, 59, 93, 104, 57, 112, -112, 23, 71, -2, -111, -7, -46, -97, 0, -108, -99, -44, -25, 98, -43, 32, -119, -89, -87, 29, 93, -87, 46, 42, -2, -100, -75, -56, -25, -22, -39, 30, 33, -64, 20, 41, -42, -62, 8, 81, 91, 57, -90, -49, 109, 47, 124, -64, 107, 54, 17, 120, -118, 126, 28, 76, 41, 28, 126, 59, -47, 106, -99, -25, -106, -15, 16, 42, -7, 76, -96, -61, -59, -116, 96, 119, 13, 122, -45, -110, -1, -59, -121, 97, -33, 77, -95, -6, 34, -34, -34, -31, -79, 27, 75, -75, -103, 29, 59, 8, 68, -57, 115, -18, 58, 19};
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
    msg.setTimeStamp(0.0836892498184);
    msg.setSource(46594U);
    msg.setSourceEntity(147U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(237U);
    msg.type = 150U;
    msg.frequency = 4273426296U;
    msg.min_range = 14736U;
    msg.max_range = 37846U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.511119104732;
    const char tmp_msg_0[] = {-73, -101, -106, -100, -28, 55, 11, 107, 102, -121, 56, 106, -29, -93, -16, -124, 61, 36, -78, -91, 35, 94, 94, -77, 59, 109, 4, -66, -118, 60, 112, 110, 76, 15, -84, 118, -50, -127, -32, 97, 26, 25, 48, -39, 25, -81, -113, -104, -18, 103, 18, 73, -3, -96, -38, -42, -93, 82, -96, 123, 64, -33, 54, -120, 56, -98, -36, 46, 37, -125, -47, -6, -104, 4, 32, -120, -79, -99, -67, -104, -125, 53, -56, -111, 123, -63, 35, -40, 35, -40, -124, -84, -128, -126, -21, 86, -85, 76, 115, 59, -76, -79, -38, 66, 100, -17, -1, -7, -64, 75, -24, 51, -124, 98, -78, -120, -87, 27, 77, -110, -62, -102, 113, -85, 57, 90, -121, -101, 8, -22, -119, 126, 107, 104, 29, 32, -115, -118, 76, -14, -116, -75, 43, 70, -24, -46, 50, -26, 60, 92, 122, 51, 74, 36};
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
    msg.setTimeStamp(0.0213745778888);
    msg.setSource(35900U);
    msg.setSourceEntity(102U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(91U);
    msg.type = 25U;
    msg.frequency = 3885374423U;
    msg.min_range = 18205U;
    msg.max_range = 48066U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.880317854321;
    const char tmp_msg_0[] = {42, 87, 64, -102, 32, 121, -84, 57, 107, -28, 53, 25, 50, 87, -121, -66, 113, 36, -78, 70, -52, -64, 6, -93, 106, 75, 84, -50, -17, -90, 87, -83, 87, 22, 118, -98, 70, -75, -98, -14, -25, 25, -26, 15, -127, 69, 25, 93, 80, 57, 111, -58, 102, -16, 58, -54, -16, -5, 28, -64, 121, -96, -109, -114, -60, 46, -87, 35, 49, 35, 95, -113, 45, -1, 113, 33, 21, 7, 11, -42, 113, 31, 114, -85, -106, -122, 106, -62, -30, 72, -67, -117, 48, -101, -12, -115, -78, 95, -109, -2, -77, 18, -6, -105, 98, -45, 125, -91, 103, -9, 33, -82, -96, -103, -64, 33, 112, -128, -43, 35, 9, -69, 110, -48, -94, 29, -36, -21, -96, -77, 67, -64, -99, 7, -98, -59, 44, 60, 21, -27, 20, 20, 74, 35, -15, -30, -5, -104, 63, -17, -73, 27, 10, 110, -62, 27, 48, -73, 33, 15, 18, -115, 125, 103, -98, 56, 47, -60, 86, -124, -105, 29, 71, 68, 53, -74, -104, 95, -85, 81, 41, 79, -26, -67, 119, 94, 57, -40, -1, 91, -81, 5, -125, 5, 76, 94, -110, 125, 36, 64, -94, -30, -104, 71, 57, 16, -111, 108, 9, -27, 45, -25, 33, -124, 33, -113, -71, 91, -2, 6, 78, 55, -78, 114};
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
    msg.setTimeStamp(0.818868062552);
    msg.setSource(22156U);
    msg.setSourceEntity(125U);
    msg.setDestination(58491U);
    msg.setDestinationEntity(231U);
    msg.type = 90U;
    msg.frequency = 1758146969U;
    msg.min_range = 56121U;
    msg.max_range = 9414U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.638801610595;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.245648336404;
    tmp_msg_0.beam_height = 0.926454526969;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {81, 113, -3, 18, -106, -19, 82, 38, 124, 101, -69, -50, 24, -106, 124, 20, -39, -113, -111, -115, -32, -33, -51, 115, 82, 20, -57, -3, 30, 22, 111, 77, 104, 87, -79, 20, -4, -13, -84, -45, -101, 114, -47, 39, -98};
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
    msg.setTimeStamp(0.0199603712666);
    msg.setSource(54306U);
    msg.setSourceEntity(96U);
    msg.setDestination(43044U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.745353048586);
    msg.setSource(15451U);
    msg.setSourceEntity(230U);
    msg.setDestination(31088U);
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
    msg.setTimeStamp(0.267012080665);
    msg.setSource(41295U);
    msg.setSourceEntity(166U);
    msg.setDestination(63786U);
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
    msg.setTimeStamp(0.708090260331);
    msg.setSource(1242U);
    msg.setSourceEntity(3U);
    msg.setDestination(42058U);
    msg.setDestinationEntity(242U);
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
    msg.setTimeStamp(0.852882826319);
    msg.setSource(45250U);
    msg.setSourceEntity(158U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(174U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.380812965697);
    msg.setSource(11297U);
    msg.setSourceEntity(3U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(201U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.756410496486);
    msg.setSource(2913U);
    msg.setSourceEntity(142U);
    msg.setDestination(53470U);
    msg.setDestinationEntity(9U);
    msg.value = 0.269196208929;
    msg.confidence = 0.613407429041;
    msg.opmodes.assign("ZOADXEMCDWIVHJPGGWIDTFITZYSFMZBIVCNUAMBHFXQURKEECL");

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
    msg.setTimeStamp(0.750062825823);
    msg.setSource(13512U);
    msg.setSourceEntity(131U);
    msg.setDestination(35134U);
    msg.setDestinationEntity(121U);
    msg.value = 0.451744067523;
    msg.confidence = 0.0637958316029;
    msg.opmodes.assign("SVRDOSFRNDTDP");

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
    msg.setTimeStamp(0.728855668019);
    msg.setSource(28517U);
    msg.setSourceEntity(43U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(3U);
    msg.value = 0.702158382053;
    msg.confidence = 0.169035509401;
    msg.opmodes.assign("PFXDFSKKERJFGKTRCGBJRPHXZKDBCGLMPJMQOSGUEZYOOXMTDXEKXZSUROUDHQOEWVQMDBYZPSBYDNUWBKSIQBNUK");

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
    msg.setTimeStamp(0.150023682817);
    msg.setSource(26809U);
    msg.setSourceEntity(92U);
    msg.setDestination(1090U);
    msg.setDestinationEntity(254U);
    msg.itow = 650357787U;
    msg.lat = 0.660819305024;
    msg.lon = 0.655192037105;
    msg.height_ell = 0.773919174793;
    msg.height_sea = 0.0196190934054;
    msg.hacc = 0.290161155562;
    msg.vacc = 0.437855962884;
    msg.vel_n = 0.0841688750733;
    msg.vel_e = 0.795538070965;
    msg.vel_d = 0.153262364812;
    msg.speed = 0.700177813338;
    msg.gspeed = 0.570853304342;
    msg.heading = 0.457376742991;
    msg.sacc = 0.714539634447;
    msg.cacc = 0.375676321323;

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
    msg.setTimeStamp(0.244342577219);
    msg.setSource(55273U);
    msg.setSourceEntity(9U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(117U);
    msg.itow = 2607698545U;
    msg.lat = 0.645281212543;
    msg.lon = 0.399074500613;
    msg.height_ell = 0.164685273332;
    msg.height_sea = 0.115161185383;
    msg.hacc = 0.616165653687;
    msg.vacc = 0.446075376006;
    msg.vel_n = 0.761831756798;
    msg.vel_e = 0.134178715407;
    msg.vel_d = 0.931262668067;
    msg.speed = 0.313713377266;
    msg.gspeed = 0.95547634196;
    msg.heading = 0.0295786395296;
    msg.sacc = 0.389042026999;
    msg.cacc = 0.151512604703;

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
    msg.setTimeStamp(0.438760328635);
    msg.setSource(42446U);
    msg.setSourceEntity(37U);
    msg.setDestination(3388U);
    msg.setDestinationEntity(28U);
    msg.itow = 2778434206U;
    msg.lat = 0.601443043463;
    msg.lon = 0.354526393395;
    msg.height_ell = 0.795813596;
    msg.height_sea = 0.0175019064046;
    msg.hacc = 0.696022082684;
    msg.vacc = 0.766348493171;
    msg.vel_n = 0.9686322939;
    msg.vel_e = 0.630693044032;
    msg.vel_d = 0.25081707789;
    msg.speed = 0.992012414837;
    msg.gspeed = 0.858110117443;
    msg.heading = 0.435640622648;
    msg.sacc = 0.869284594791;
    msg.cacc = 0.493420054503;

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
    msg.setTimeStamp(0.675550109747);
    msg.setSource(48768U);
    msg.setSourceEntity(136U);
    msg.setDestination(705U);
    msg.setDestinationEntity(152U);
    msg.id = 26U;
    msg.value = 0.450132765986;

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
    msg.setTimeStamp(0.645149093379);
    msg.setSource(58367U);
    msg.setSourceEntity(11U);
    msg.setDestination(37536U);
    msg.setDestinationEntity(165U);
    msg.id = 14U;
    msg.value = 0.110236607208;

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
    msg.setTimeStamp(0.399750949649);
    msg.setSource(41083U);
    msg.setSourceEntity(200U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(101U);
    msg.id = 106U;
    msg.value = 0.998608490615;

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
    msg.setTimeStamp(0.998152228646);
    msg.setSource(14170U);
    msg.setSourceEntity(116U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(53U);
    msg.x = 0.499604342552;
    msg.y = 0.579357244148;
    msg.z = 0.341088240965;
    msg.phi = 0.691538616682;
    msg.theta = 0.428652577864;
    msg.psi = 0.915347815574;

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
    msg.setTimeStamp(0.783286132826);
    msg.setSource(54382U);
    msg.setSourceEntity(182U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(13U);
    msg.x = 0.620479720083;
    msg.y = 0.810707664252;
    msg.z = 0.785442370539;
    msg.phi = 0.198798223862;
    msg.theta = 0.746363455692;
    msg.psi = 0.833980657343;

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
    msg.setTimeStamp(0.633517773191);
    msg.setSource(27490U);
    msg.setSourceEntity(59U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(198U);
    msg.x = 0.286050048968;
    msg.y = 0.849682830746;
    msg.z = 0.659826850672;
    msg.phi = 0.0473367754902;
    msg.theta = 0.587187840467;
    msg.psi = 0.444020391491;

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
    msg.setTimeStamp(0.669769100898);
    msg.setSource(29830U);
    msg.setSourceEntity(208U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(129U);
    msg.beam_width = 0.666365157081;
    msg.beam_height = 0.0274125437792;

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
    msg.setTimeStamp(0.587425715914);
    msg.setSource(50785U);
    msg.setSourceEntity(144U);
    msg.setDestination(3223U);
    msg.setDestinationEntity(130U);
    msg.beam_width = 0.891045568594;
    msg.beam_height = 0.538369604425;

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
    msg.setTimeStamp(0.386173012089);
    msg.setSource(35761U);
    msg.setSourceEntity(92U);
    msg.setDestination(61591U);
    msg.setDestinationEntity(195U);
    msg.beam_width = 0.293570969841;
    msg.beam_height = 0.67212131301;

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
    msg.setTimeStamp(0.825138340591);
    msg.setSource(3027U);
    msg.setSourceEntity(27U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(173U);
    msg.sane = 136U;

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
    msg.setTimeStamp(0.952379553022);
    msg.setSource(32171U);
    msg.setSourceEntity(239U);
    msg.setDestination(54872U);
    msg.setDestinationEntity(96U);
    msg.sane = 145U;

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
    msg.setTimeStamp(0.629070678797);
    msg.setSource(6419U);
    msg.setSourceEntity(171U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(128U);
    msg.sane = 192U;

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
    msg.setTimeStamp(0.385181595245);
    msg.setSource(61245U);
    msg.setSourceEntity(216U);
    msg.setDestination(1116U);
    msg.setDestinationEntity(228U);
    msg.value = 0.876058291423;

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
    msg.setTimeStamp(0.891891665518);
    msg.setSource(50015U);
    msg.setSourceEntity(36U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(205U);
    msg.value = 0.331018780159;

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
    msg.setTimeStamp(0.271562109085);
    msg.setSource(29921U);
    msg.setSourceEntity(195U);
    msg.setDestination(32890U);
    msg.setDestinationEntity(225U);
    msg.value = 0.223838238476;

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
    msg.setTimeStamp(0.527795752744);
    msg.setSource(17440U);
    msg.setSourceEntity(197U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(111U);
    msg.value = 0.173114776874;

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
    msg.setTimeStamp(0.403418971147);
    msg.setSource(30208U);
    msg.setSourceEntity(163U);
    msg.setDestination(62939U);
    msg.setDestinationEntity(137U);
    msg.value = 0.191615089558;

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
    msg.setTimeStamp(0.881020171099);
    msg.setSource(9806U);
    msg.setSourceEntity(64U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(145U);
    msg.value = 0.672101747913;

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
    msg.setTimeStamp(0.814405218901);
    msg.setSource(64153U);
    msg.setSourceEntity(93U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(168U);
    msg.value = 0.6757624916;

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
    msg.setTimeStamp(0.153808758098);
    msg.setSource(29763U);
    msg.setSourceEntity(64U);
    msg.setDestination(33837U);
    msg.setDestinationEntity(177U);
    msg.value = 0.170150776471;

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
    msg.setTimeStamp(0.0427036950113);
    msg.setSource(57946U);
    msg.setSourceEntity(86U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0114809175921;

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
    msg.setTimeStamp(0.563789084199);
    msg.setSource(28623U);
    msg.setSourceEntity(243U);
    msg.setDestination(61603U);
    msg.setDestinationEntity(77U);
    msg.value = 0.395706138281;

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
    msg.setTimeStamp(0.216153526474);
    msg.setSource(41085U);
    msg.setSourceEntity(138U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(195U);
    msg.value = 0.579853820632;

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
    msg.setTimeStamp(0.429405354121);
    msg.setSource(40594U);
    msg.setSourceEntity(23U);
    msg.setDestination(35498U);
    msg.setDestinationEntity(101U);
    msg.value = 0.676868942847;

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
    msg.setTimeStamp(0.863940313813);
    msg.setSource(56255U);
    msg.setSourceEntity(216U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(116U);
    msg.value = 0.968004426745;

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
    msg.setTimeStamp(0.520928131452);
    msg.setSource(11639U);
    msg.setSourceEntity(11U);
    msg.setDestination(64809U);
    msg.setDestinationEntity(46U);
    msg.value = 0.589657094292;

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
    msg.setTimeStamp(0.166481434044);
    msg.setSource(19446U);
    msg.setSourceEntity(103U);
    msg.setDestination(3579U);
    msg.setDestinationEntity(109U);
    msg.value = 0.498764290991;

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
    msg.setTimeStamp(0.102364511593);
    msg.setSource(27888U);
    msg.setSourceEntity(86U);
    msg.setDestination(46850U);
    msg.setDestinationEntity(239U);
    msg.value = 0.200485753112;

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
    msg.setTimeStamp(0.611576468146);
    msg.setSource(24100U);
    msg.setSourceEntity(195U);
    msg.setDestination(64203U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0413325138686;

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
    msg.setTimeStamp(0.680227394656);
    msg.setSource(45597U);
    msg.setSourceEntity(29U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(129U);
    msg.value = 0.793158505711;

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
    msg.setTimeStamp(0.962868968963);
    msg.setSource(4932U);
    msg.setSourceEntity(106U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(9U);
    msg.value = 0.224678092325;

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
    msg.setTimeStamp(0.877838391953);
    msg.setSource(53341U);
    msg.setSourceEntity(210U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(71U);
    msg.value = 0.420238849699;

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
    msg.setTimeStamp(0.965243117381);
    msg.setSource(25602U);
    msg.setSourceEntity(67U);
    msg.setDestination(37945U);
    msg.setDestinationEntity(8U);
    msg.value = 0.185275036692;

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
    msg.setTimeStamp(0.289972321379);
    msg.setSource(61407U);
    msg.setSourceEntity(159U);
    msg.setDestination(27140U);
    msg.setDestinationEntity(29U);
    msg.value = 0.102238719932;

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
    msg.setTimeStamp(0.131952340708);
    msg.setSource(60071U);
    msg.setSourceEntity(74U);
    msg.setDestination(44238U);
    msg.setDestinationEntity(244U);
    msg.value = 0.180440577799;

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
    msg.setTimeStamp(0.422552954469);
    msg.setSource(14411U);
    msg.setSourceEntity(57U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(240U);
    msg.value = 0.222271711578;

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
    msg.setTimeStamp(0.78646203381);
    msg.setSource(40411U);
    msg.setSourceEntity(107U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(225U);
    msg.validity = 33334U;
    msg.type = 235U;
    msg.tow = 682995043U;
    msg.base_lat = 0.638091888244;
    msg.base_lon = 0.645102306748;
    msg.base_height = 0.774091339717;
    msg.n = 0.748684145768;
    msg.e = 0.902390831487;
    msg.d = 0.0387302987845;
    msg.v_n = 0.576880033344;
    msg.v_e = 0.335302729811;
    msg.v_d = 0.158466051617;
    msg.satellites = 39U;
    msg.iar_hyp = 55893U;
    msg.iar_ratio = 0.787092513804;

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
    msg.setTimeStamp(0.12288461134);
    msg.setSource(1991U);
    msg.setSourceEntity(110U);
    msg.setDestination(22475U);
    msg.setDestinationEntity(186U);
    msg.validity = 6314U;
    msg.type = 17U;
    msg.tow = 3267680522U;
    msg.base_lat = 0.752896787716;
    msg.base_lon = 0.832279293946;
    msg.base_height = 0.904714448774;
    msg.n = 0.017296624517;
    msg.e = 0.171800771201;
    msg.d = 0.883255047629;
    msg.v_n = 0.948726549405;
    msg.v_e = 0.306744887188;
    msg.v_d = 0.993077025822;
    msg.satellites = 232U;
    msg.iar_hyp = 48954U;
    msg.iar_ratio = 0.800639646405;

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
    msg.setTimeStamp(0.0503479585978);
    msg.setSource(36098U);
    msg.setSourceEntity(22U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(111U);
    msg.validity = 655U;
    msg.type = 57U;
    msg.tow = 1076383840U;
    msg.base_lat = 0.417046754456;
    msg.base_lon = 0.900441282047;
    msg.base_height = 0.679901130201;
    msg.n = 0.0544724916152;
    msg.e = 0.500033169355;
    msg.d = 0.958578334621;
    msg.v_n = 0.143925430051;
    msg.v_e = 0.589402237315;
    msg.v_d = 0.11742768727;
    msg.satellites = 77U;
    msg.iar_hyp = 62250U;
    msg.iar_ratio = 0.465793207157;

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
    msg.setTimeStamp(0.113396313002);
    msg.setSource(2341U);
    msg.setSourceEntity(131U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(132U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.515554420264;
    tmp_msg_0.lon = 0.306884522096;
    tmp_msg_0.height = 0.0664781504862;
    tmp_msg_0.x = 0.863192733647;
    tmp_msg_0.y = 0.630539736983;
    tmp_msg_0.z = 0.787311440769;
    tmp_msg_0.phi = 0.794044022768;
    tmp_msg_0.theta = 0.11370856166;
    tmp_msg_0.psi = 0.198454881447;
    tmp_msg_0.u = 0.991307181496;
    tmp_msg_0.v = 0.290473138714;
    tmp_msg_0.w = 0.961818179584;
    tmp_msg_0.vx = 0.301514897565;
    tmp_msg_0.vy = 0.513745105898;
    tmp_msg_0.vz = 0.83580303882;
    tmp_msg_0.p = 0.397519342124;
    tmp_msg_0.q = 0.679588126699;
    tmp_msg_0.r = 0.68320021629;
    tmp_msg_0.depth = 0.669193251061;
    tmp_msg_0.alt = 0.258555499679;
    msg.state.set(tmp_msg_0);
    msg.type = 88U;

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
    msg.setTimeStamp(0.369351153411);
    msg.setSource(25408U);
    msg.setSourceEntity(18U);
    msg.setDestination(35598U);
    msg.setDestinationEntity(243U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.877685990578;
    tmp_msg_0.lon = 0.616349293048;
    tmp_msg_0.height = 0.834917802912;
    tmp_msg_0.x = 0.794337120763;
    tmp_msg_0.y = 0.829321358521;
    tmp_msg_0.z = 0.118229582326;
    tmp_msg_0.phi = 0.134239803286;
    tmp_msg_0.theta = 0.492763050181;
    tmp_msg_0.psi = 0.823695552053;
    tmp_msg_0.u = 0.329433386871;
    tmp_msg_0.v = 0.41106397432;
    tmp_msg_0.w = 0.316972742969;
    tmp_msg_0.vx = 0.465010441857;
    tmp_msg_0.vy = 0.291102536314;
    tmp_msg_0.vz = 0.909138267596;
    tmp_msg_0.p = 0.367402822476;
    tmp_msg_0.q = 0.0147288864847;
    tmp_msg_0.r = 0.905279143088;
    tmp_msg_0.depth = 0.184833982589;
    tmp_msg_0.alt = 0.445863074838;
    msg.state.set(tmp_msg_0);
    msg.type = 12U;

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
    msg.setTimeStamp(0.525455996736);
    msg.setSource(53308U);
    msg.setSourceEntity(82U);
    msg.setDestination(10645U);
    msg.setDestinationEntity(148U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.307324845648;
    tmp_msg_0.lon = 0.480186290579;
    tmp_msg_0.height = 0.116839134341;
    tmp_msg_0.x = 0.876006639077;
    tmp_msg_0.y = 0.522265006685;
    tmp_msg_0.z = 0.282243363351;
    tmp_msg_0.phi = 0.398603165007;
    tmp_msg_0.theta = 0.290059542588;
    tmp_msg_0.psi = 0.916657926602;
    tmp_msg_0.u = 0.915862193915;
    tmp_msg_0.v = 0.801572553204;
    tmp_msg_0.w = 0.82156358659;
    tmp_msg_0.vx = 0.0284467220932;
    tmp_msg_0.vy = 0.93243154178;
    tmp_msg_0.vz = 0.622989701326;
    tmp_msg_0.p = 0.866621036337;
    tmp_msg_0.q = 0.71785735222;
    tmp_msg_0.r = 0.427842617531;
    tmp_msg_0.depth = 0.109004502956;
    tmp_msg_0.alt = 0.240935112812;
    msg.state.set(tmp_msg_0);
    msg.type = 141U;

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
    msg.setTimeStamp(0.397048844407);
    msg.setSource(48233U);
    msg.setSourceEntity(197U);
    msg.setDestination(3353U);
    msg.setDestinationEntity(227U);
    msg.value = 0.242147811792;

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
    msg.setTimeStamp(0.623912683742);
    msg.setSource(19406U);
    msg.setSourceEntity(254U);
    msg.setDestination(64413U);
    msg.setDestinationEntity(39U);
    msg.value = 0.59353212538;

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
    msg.setTimeStamp(0.470293774586);
    msg.setSource(56805U);
    msg.setSourceEntity(55U);
    msg.setDestination(56931U);
    msg.setDestinationEntity(87U);
    msg.value = 0.12253751289;

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
    msg.setTimeStamp(0.133615542358);
    msg.setSource(59610U);
    msg.setSourceEntity(111U);
    msg.setDestination(62664U);
    msg.setDestinationEntity(116U);
    msg.value = 0.379079252649;

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
    msg.setTimeStamp(0.115800413751);
    msg.setSource(32012U);
    msg.setSourceEntity(235U);
    msg.setDestination(26174U);
    msg.setDestinationEntity(198U);
    msg.value = 0.437205522187;

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
    msg.setTimeStamp(0.312827425283);
    msg.setSource(28759U);
    msg.setSourceEntity(72U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(13U);
    msg.value = 0.425127977698;

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
    msg.setTimeStamp(0.0676673463819);
    msg.setSource(34674U);
    msg.setSourceEntity(78U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0204864448519;

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
    msg.setTimeStamp(0.944300788953);
    msg.setSource(56999U);
    msg.setSourceEntity(23U);
    msg.setDestination(4800U);
    msg.setDestinationEntity(3U);
    msg.value = 0.351164615297;

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
    msg.setTimeStamp(0.407850037723);
    msg.setSource(17678U);
    msg.setSourceEntity(179U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(114U);
    msg.value = 0.397323383755;

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
    msg.setTimeStamp(0.290647421859);
    msg.setSource(24723U);
    msg.setSourceEntity(45U);
    msg.setDestination(25132U);
    msg.setDestinationEntity(233U);
    msg.value = 0.140461435873;

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
    msg.setTimeStamp(0.360198068677);
    msg.setSource(19280U);
    msg.setSourceEntity(218U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(97U);
    msg.value = 0.716576275977;

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
    msg.setTimeStamp(0.0331278813161);
    msg.setSource(39785U);
    msg.setSourceEntity(44U);
    msg.setDestination(4825U);
    msg.setDestinationEntity(76U);
    msg.value = 0.00785359427431;

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
    msg.setTimeStamp(0.104483610678);
    msg.setSource(15980U);
    msg.setSourceEntity(137U);
    msg.setDestination(39313U);
    msg.setDestinationEntity(53U);
    msg.value = 0.550130372575;

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
    msg.setTimeStamp(0.228351558782);
    msg.setSource(50126U);
    msg.setSourceEntity(235U);
    msg.setDestination(36773U);
    msg.setDestinationEntity(33U);
    msg.value = 0.819455879875;

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
    msg.setTimeStamp(0.542303121041);
    msg.setSource(4806U);
    msg.setSourceEntity(125U);
    msg.setDestination(49331U);
    msg.setDestinationEntity(199U);
    msg.value = 0.676321643472;

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
    msg.setTimeStamp(0.261319258897);
    msg.setSource(51089U);
    msg.setSourceEntity(14U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(82U);
    msg.id = 201U;
    msg.zoom = 95U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.383388016041);
    msg.setSource(59235U);
    msg.setSourceEntity(44U);
    msg.setDestination(12285U);
    msg.setDestinationEntity(94U);
    msg.id = 188U;
    msg.zoom = 132U;
    msg.action = 217U;

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
    msg.setTimeStamp(0.392707745419);
    msg.setSource(54560U);
    msg.setSourceEntity(128U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(13U);
    msg.id = 198U;
    msg.zoom = 227U;
    msg.action = 135U;

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
    msg.setTimeStamp(0.35297537475);
    msg.setSource(9456U);
    msg.setSourceEntity(81U);
    msg.setDestination(51655U);
    msg.setDestinationEntity(42U);
    msg.id = 167U;
    msg.value = 0.0153057033222;

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
    msg.setTimeStamp(0.369288858355);
    msg.setSource(23000U);
    msg.setSourceEntity(108U);
    msg.setDestination(23895U);
    msg.setDestinationEntity(236U);
    msg.id = 125U;
    msg.value = 0.577210764186;

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
    msg.setTimeStamp(0.608082659025);
    msg.setSource(44657U);
    msg.setSourceEntity(249U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(249U);
    msg.id = 150U;
    msg.value = 0.897172832399;

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
    msg.setTimeStamp(0.887361727468);
    msg.setSource(54792U);
    msg.setSourceEntity(188U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(50U);
    msg.id = 215U;
    msg.value = 0.395177963227;

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
    msg.setTimeStamp(0.419546384088);
    msg.setSource(44301U);
    msg.setSourceEntity(204U);
    msg.setDestination(45842U);
    msg.setDestinationEntity(15U);
    msg.id = 205U;
    msg.value = 0.417585045317;

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
    msg.setTimeStamp(0.64420623143);
    msg.setSource(41547U);
    msg.setSourceEntity(167U);
    msg.setDestination(48471U);
    msg.setDestinationEntity(150U);
    msg.id = 180U;
    msg.value = 0.137552478724;

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
    msg.setTimeStamp(0.517249639301);
    msg.setSource(9941U);
    msg.setSourceEntity(169U);
    msg.setDestination(36160U);
    msg.setDestinationEntity(73U);
    msg.id = 105U;
    msg.angle = 0.354814606874;

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
    msg.setTimeStamp(0.357133510964);
    msg.setSource(2925U);
    msg.setSourceEntity(25U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(207U);
    msg.id = 97U;
    msg.angle = 0.242465256764;

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
    msg.setTimeStamp(0.663079852237);
    msg.setSource(8842U);
    msg.setSourceEntity(67U);
    msg.setDestination(51801U);
    msg.setDestinationEntity(229U);
    msg.id = 129U;
    msg.angle = 0.935722919345;

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
    msg.setTimeStamp(0.453292284856);
    msg.setSource(60123U);
    msg.setSourceEntity(205U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(223U);
    msg.op = 100U;
    msg.actions.assign("WXOARHKZCHWACYYMBMNTUNBLVPEVFEBSHKZMEFQSGQOGBEGDYCEXDVUZMKXANHRWSTOGKVHFQESJRWPHPDZDBUQJIXLROWQKVQUANKLYRWUAJPFFNQDKPOLKNTGQZYTCSZMINMOJVPXRRGTHYIXHDB");

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
    msg.setTimeStamp(0.135140120712);
    msg.setSource(4960U);
    msg.setSourceEntity(166U);
    msg.setDestination(51848U);
    msg.setDestinationEntity(19U);
    msg.op = 192U;
    msg.actions.assign("MKRSHHBCVIXKEUGNAEHMZIBWPJWQORAYSGOVDXDKRQHLALXDWLDPGVZYH");

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
    msg.setTimeStamp(0.160248324076);
    msg.setSource(58783U);
    msg.setSourceEntity(41U);
    msg.setDestination(15371U);
    msg.setDestinationEntity(91U);
    msg.op = 219U;
    msg.actions.assign("GWPRPSUYNACIELUCC");

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
    msg.setTimeStamp(0.360506954794);
    msg.setSource(55937U);
    msg.setSourceEntity(82U);
    msg.setDestination(63576U);
    msg.setDestinationEntity(167U);
    msg.actions.assign("JFLKUHCHJYJGQAOF");

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
    msg.setTimeStamp(0.986465561777);
    msg.setSource(61418U);
    msg.setSourceEntity(185U);
    msg.setDestination(58434U);
    msg.setDestinationEntity(179U);
    msg.actions.assign("IMHEAZSDDKABRDND");

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
    msg.setTimeStamp(0.43348604972);
    msg.setSource(10858U);
    msg.setSourceEntity(180U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(207U);
    msg.actions.assign("RQSQPLZAIVGBNEEXLEDDLAVCQVDMJKHFETVJTQZZYRSCZSTRLASGXTPPAREVFFGKLBQWZTFIDDQDYLWGABRVOQXUIDGAKFYFOLRCNILIXMMYIGNHZPPFPWUNFTDVKNJXTYEUCYBJKUCNUEFCOORLCBJZVCHJBOIKXPOZGQBNIKWHDUHSMASQPMEYJOPQRTAMJOVKNUXXVRUEXUELJWBTXWHHKWMFUSDCJIWHZBHGZOYAOSYRMNWSPBMSHMGYT");

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
    msg.setTimeStamp(0.921399968448);
    msg.setSource(33191U);
    msg.setSourceEntity(247U);
    msg.setDestination(38629U);
    msg.setDestinationEntity(123U);
    msg.button = 251U;
    msg.value = 11U;

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
    msg.setTimeStamp(5.16960467338e-05);
    msg.setSource(51562U);
    msg.setSourceEntity(253U);
    msg.setDestination(18342U);
    msg.setDestinationEntity(247U);
    msg.button = 150U;
    msg.value = 157U;

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
    msg.setTimeStamp(0.0491953016349);
    msg.setSource(16935U);
    msg.setSourceEntity(133U);
    msg.setDestination(43435U);
    msg.setDestinationEntity(210U);
    msg.button = 59U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.511070777344);
    msg.setSource(42746U);
    msg.setSourceEntity(198U);
    msg.setDestination(1918U);
    msg.setDestinationEntity(106U);
    msg.op = 215U;
    msg.text.assign("ZOOZWFISOBWNYTSGQBMYE");

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
    msg.setTimeStamp(0.134576936788);
    msg.setSource(2226U);
    msg.setSourceEntity(85U);
    msg.setDestination(55417U);
    msg.setDestinationEntity(112U);
    msg.op = 147U;
    msg.text.assign("UCKPAWVHTISTGJCPMJGNGVFKSPBWZKUNHJEXRJAKEXIAZLMBFCMINPDUWUHRSNBTZXGQBJPSTVEBVCLKENRMCOYRDLHMDQTRZDMYEEAFLOMFOOBGCRGKAIBDLVBHPXTBWAGXUOLAXWFXYGUQRZSOKNRDTHBWMVRKNAPHCQQNZZKDDZDITWPWYYRXYLJYYHVPFSVYWQIGHJJEUICCXMXVENUOSUQAMQLFJPINSLZDFSCQQIOEJWSFKTZUIHOFG");

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
    msg.setTimeStamp(0.00369980501354);
    msg.setSource(16941U);
    msg.setSourceEntity(180U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(104U);
    msg.op = 68U;
    msg.text.assign("ZIIILFQBEEGHERDJFADZIED");

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
    msg.setTimeStamp(0.183926191827);
    msg.setSource(35852U);
    msg.setSourceEntity(231U);
    msg.setDestination(58532U);
    msg.setDestinationEntity(68U);
    msg.op = 17U;
    msg.time_remain = 0.593014967101;
    msg.sched_time = 0.909728786358;

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
    msg.setTimeStamp(0.105958559174);
    msg.setSource(29327U);
    msg.setSourceEntity(52U);
    msg.setDestination(24679U);
    msg.setDestinationEntity(197U);
    msg.op = 248U;
    msg.time_remain = 0.276194952768;
    msg.sched_time = 0.727559873271;

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
    msg.setTimeStamp(0.316171411228);
    msg.setSource(25717U);
    msg.setSourceEntity(101U);
    msg.setDestination(9809U);
    msg.setDestinationEntity(184U);
    msg.op = 112U;
    msg.time_remain = 0.133797319136;
    msg.sched_time = 0.485569111543;

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
    msg.setTimeStamp(0.745331279243);
    msg.setSource(59861U);
    msg.setSourceEntity(179U);
    msg.setDestination(50418U);
    msg.setDestinationEntity(9U);
    msg.name.assign("NANDSYJHWGYUXUGNIJKODTPIKIRRZALKYXOUWMUPSMLFXAXWIZMBVZKBSJMHCMCWOXOJDOHAWHFDUVITTVDRBDAWFREEFJXLYHLQYEEIOZCYKELTBYMQMFEFAWKNQXQHZUPNARNICIRXDVLSDECLUYBEGBAGGZMZRQQIVHWKCMNCYNJJVLTJTZCSZBXPPGAKPKO");
    msg.op = 226U;
    msg.sched_time = 0.132063259888;

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
    msg.setTimeStamp(0.601568383611);
    msg.setSource(29861U);
    msg.setSourceEntity(119U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(147U);
    msg.name.assign("XDNGKFQCEFDKRZHRNHUKFBRENQHADQEQIHVPBYZOZTHGPLEVJIONBVLIHUAUIUXGOVIBSWLKIKIFHSBGYMVAZQLUQVVWCTRXLTMFSUBEWXNY");
    msg.op = 122U;
    msg.sched_time = 0.617743065244;

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
    msg.setTimeStamp(0.866690113702);
    msg.setSource(21816U);
    msg.setSourceEntity(144U);
    msg.setDestination(780U);
    msg.setDestinationEntity(80U);
    msg.name.assign("QXKXLRAIHYAGCDFXFOYWRSDGDZUBVVKFSUXXNFJCC");
    msg.op = 30U;
    msg.sched_time = 0.518375552501;

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
    msg.setTimeStamp(0.802494447409);
    msg.setSource(55779U);
    msg.setSourceEntity(76U);
    msg.setDestination(13874U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.0996034271748);
    msg.setSource(45669U);
    msg.setSourceEntity(60U);
    msg.setDestination(18671U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.076733364639);
    msg.setSource(40919U);
    msg.setSourceEntity(174U);
    msg.setDestination(2811U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.499330843044);
    msg.setSource(17351U);
    msg.setSourceEntity(149U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(64U);
    msg.name.assign("UWJWLXIDASEPAEODTDQTVBMFKGPIBZWTOFSTRZK");
    msg.state = 48U;

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
    msg.setTimeStamp(0.799701506061);
    msg.setSource(41569U);
    msg.setSourceEntity(134U);
    msg.setDestination(696U);
    msg.setDestinationEntity(215U);
    msg.name.assign("UTVVCCAWKBQLAORHEGMCUWZKQ");
    msg.state = 245U;

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
    msg.setTimeStamp(0.50449425295);
    msg.setSource(35947U);
    msg.setSourceEntity(182U);
    msg.setDestination(59313U);
    msg.setDestinationEntity(241U);
    msg.name.assign("QTHPMFNDLYKIZRZTMXHGAHOPPHSTAUKRIBMWFJVLZJHEQCBWRPGKEMFLICVPLEQOBMGYSDJXUAAJLZBFJXSLGQCZZOGKAWIGIYVTXENCRRIQSHXNQMNUSUVZQOEJCJDWUYKONXLFJRKFNIPWWFFBREUUFZRBQDDPLBSDL");
    msg.state = 95U;

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
    msg.setTimeStamp(0.691707843824);
    msg.setSource(46481U);
    msg.setSourceEntity(87U);
    msg.setDestination(48407U);
    msg.setDestinationEntity(64U);
    msg.name.assign("BVDJIRXLYBUADPVYGJNPVHJFWPGDQVATSJIOMLRHVPQAGZZBJROVQITZPXTFTWWXEXWDZQNFWLSMBSCIURMFDZTETYLKCVDBOUKSEOCYNYMAFHUHXUHSMLARGKCSXIBKOSLOPMJDXWLRWBALZIXNDUYYVCFEKYEZ");
    msg.value = 172U;

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
    msg.setTimeStamp(0.247227758599);
    msg.setSource(37775U);
    msg.setSourceEntity(225U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(38U);
    msg.name.assign("PMJTAXNKMGJFJANZPSMAMFDNRDTJQDBGEOMZDEYRSLRYEHVTGPQPNTBY");
    msg.value = 190U;

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
    msg.setTimeStamp(0.943585290764);
    msg.setSource(11436U);
    msg.setSourceEntity(242U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JFDPMHVUHKLWCNOYDTJVKBQKQUHAZSXZTLLINIXESIIGAMNELHWHQODRYGAZCEVXFODMWBGPSPRCFKWYUAQLUXKYHYJXEEZTGFZNVPFFVAXPCJTTRPHLGLUNUPSTDEKNJZKFVCERUCZNVYWIXCNWIAOHFFTUSZGBLMBQMIOHAATGQBKZJRSMGVBEXDENOCKDJPJPQRQGYBZVLUXYIKFJBAOJMOCTNUYSWOSDR");
    msg.value = 155U;

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
    msg.setTimeStamp(0.0775417567543);
    msg.setSource(54231U);
    msg.setSourceEntity(16U);
    msg.setDestination(16378U);
    msg.setDestinationEntity(81U);
    msg.name.assign("RLAZOGXIGAWNZOOSMFWRBBAMDNYNDVFDTSCXKAECDOKNNDAELFXXKZZMQUEGQVNCUZIJUSCINKTINWXWQYIYVBGHTHHRGKQBTWDHLKMF");

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
    msg.setTimeStamp(0.051952265365);
    msg.setSource(37490U);
    msg.setSourceEntity(205U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(185U);
    msg.name.assign("DWJRJTFHBFBTCAUOXMFRKXIETBWEVRGPMKDPSNLLXRSSNEYEHDAGPOBJWCDPOVYXZOVBVLOUFTRXDGPQMUIYYLSKCQAMUDQOTNQUCTURUNGVZCKWPXTSJHSZAYKKFHAERFWJINFMZGIUUIVGYNRZBQEXZOISOEJPOCTAWLWVWVUEIHKBBCLJLQKNQQPDAMZVVDNZHLL");

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
    msg.setTimeStamp(0.741370791031);
    msg.setSource(61529U);
    msg.setSourceEntity(23U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(33U);
    msg.name.assign("FEZCIUTITHHROKFYSRQTNVSCHPOEUHNMZGGRHXNZAIMQIIEHDZLQFANCTREYKJROPVQTTNJOHAJFYRRUIGXFFJFPHRWVUMJKDCBDDCPQQAMLZUEJODBPTTWEDMCBKXKEJWLZXOQPPEGOAG");

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
    msg.setTimeStamp(0.982688839408);
    msg.setSource(50743U);
    msg.setSourceEntity(163U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(75U);
    msg.name.assign("WDHOBSIBTUTOCXSFYJQHUILFXMMPYVBDCWWFKXHTXJUADOJBDULLQAAFMNETOSZTLMNJVMYQOUAFOUICHTTWRPRRYQOABIXLOVKUCXNLSPDHFPUCUMJPEWZLGJ");
    msg.value = 92U;

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
    msg.setTimeStamp(0.956446036178);
    msg.setSource(25113U);
    msg.setSourceEntity(153U);
    msg.setDestination(8936U);
    msg.setDestinationEntity(150U);
    msg.name.assign("ZLONJKBRMZLGMKSXKSUMBIRCCJESFAMRQBBDUKTNPWYDELPECQDYLVIQVPIQJINKHYPBELZZZXXQWMOWFRFOWULEQAGVIZONWOJSZJYSUGVTPFCXTHAUYGTCEDJANROOZEWXZABFGVYMKJIUGVBRKFKIAELYHLQYHYGJCIRSTPCRXFBOSRWBODQTXLAHWMYLVXZKHCVGGFCUNETNQSPBWAXEWTPIIHMJDU");
    msg.value = 89U;

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
    msg.setTimeStamp(0.925357598475);
    msg.setSource(27751U);
    msg.setSourceEntity(213U);
    msg.setDestination(13367U);
    msg.setDestinationEntity(219U);
    msg.name.assign("SUGEHYXYBMECXWMVQYMUJPYYADSKAJZNPTMJGXFLWJJVJAPNTVPKWDIONOBGZPIRGTHVCNNAWKLTZDEXNXKQZWIDQSPYXQLCPHCDLJBMRIRELEEECUWVXSIRAOYRHQZWBBEAWPXAUQFZLIEEHSDGBIOBWODOARVHTFUIOXZLCCQWYMGZZHBLFUHDCHTJVAKBFQZVTANFRRLKXYUGTDOGBJFKMPT");
    msg.value = 254U;

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
    msg.setTimeStamp(0.971102799196);
    msg.setSource(49917U);
    msg.setSourceEntity(96U);
    msg.setDestination(21048U);
    msg.setDestinationEntity(4U);
    msg.id = 252U;
    msg.period = 3471860131U;
    msg.duty_cycle = 510086120U;

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
    msg.setTimeStamp(0.784082442677);
    msg.setSource(42900U);
    msg.setSourceEntity(93U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(88U);
    msg.id = 67U;
    msg.period = 683201624U;
    msg.duty_cycle = 1891289904U;

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
    msg.setTimeStamp(0.515919808072);
    msg.setSource(24657U);
    msg.setSourceEntity(3U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(4U);
    msg.id = 240U;
    msg.period = 3998819235U;
    msg.duty_cycle = 4151811669U;

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
    msg.setTimeStamp(0.130900439025);
    msg.setSource(21346U);
    msg.setSourceEntity(232U);
    msg.setDestination(20628U);
    msg.setDestinationEntity(175U);
    msg.id = 254U;
    msg.period = 3418502637U;
    msg.duty_cycle = 2462467049U;

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
    msg.setTimeStamp(0.484210124232);
    msg.setSource(39883U);
    msg.setSourceEntity(193U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(37U);
    msg.id = 19U;
    msg.period = 3777628630U;
    msg.duty_cycle = 1878660192U;

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
    msg.setTimeStamp(0.497705371723);
    msg.setSource(59291U);
    msg.setSourceEntity(97U);
    msg.setDestination(9085U);
    msg.setDestinationEntity(122U);
    msg.id = 168U;
    msg.period = 466977469U;
    msg.duty_cycle = 2184512442U;

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
    msg.setTimeStamp(0.725444180612);
    msg.setSource(54755U);
    msg.setSourceEntity(253U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.106651830748;
    msg.lon = 0.543406336261;
    msg.height = 0.168134907272;
    msg.x = 0.515274476947;
    msg.y = 0.676730151761;
    msg.z = 0.310663329989;
    msg.phi = 0.950584620473;
    msg.theta = 0.0645351964258;
    msg.psi = 0.89297373172;
    msg.u = 0.353945042072;
    msg.v = 0.977087514508;
    msg.w = 0.984157629136;
    msg.vx = 0.393877581909;
    msg.vy = 0.298821140429;
    msg.vz = 0.147455113488;
    msg.p = 0.400450830305;
    msg.q = 0.911931648887;
    msg.r = 0.455965161239;
    msg.depth = 0.00311290505434;
    msg.alt = 0.631977202077;

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
    msg.setTimeStamp(0.686936316172);
    msg.setSource(57914U);
    msg.setSourceEntity(128U);
    msg.setDestination(2299U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.632502514613;
    msg.lon = 0.969437862201;
    msg.height = 0.0530443098724;
    msg.x = 0.169779695719;
    msg.y = 0.435391325733;
    msg.z = 0.748311741749;
    msg.phi = 0.929577001431;
    msg.theta = 0.618210112721;
    msg.psi = 0.859811886107;
    msg.u = 0.585461016753;
    msg.v = 0.882591723142;
    msg.w = 0.336025868524;
    msg.vx = 0.435111897561;
    msg.vy = 0.788032040925;
    msg.vz = 0.774723780758;
    msg.p = 0.284493389604;
    msg.q = 0.413247003486;
    msg.r = 0.848507858612;
    msg.depth = 0.921142341168;
    msg.alt = 0.833916980745;

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
    msg.setTimeStamp(0.457208126672);
    msg.setSource(6316U);
    msg.setSourceEntity(180U);
    msg.setDestination(22442U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.386920081721;
    msg.lon = 0.207779820957;
    msg.height = 0.644376983924;
    msg.x = 0.470675930448;
    msg.y = 0.336515209725;
    msg.z = 0.573914801292;
    msg.phi = 0.202808623094;
    msg.theta = 0.764947898821;
    msg.psi = 0.254487214906;
    msg.u = 0.0266970946721;
    msg.v = 0.643085704304;
    msg.w = 0.568844809844;
    msg.vx = 0.893725740651;
    msg.vy = 0.209592961771;
    msg.vz = 0.538659163909;
    msg.p = 0.438393565944;
    msg.q = 0.872232213959;
    msg.r = 0.0700665202066;
    msg.depth = 0.778246517508;
    msg.alt = 0.0280759536418;

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
    msg.setTimeStamp(0.599811960325);
    msg.setSource(1264U);
    msg.setSourceEntity(79U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(204U);
    msg.x = 0.145475675285;
    msg.y = 0.269897039457;
    msg.z = 0.340297124443;

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
    msg.setTimeStamp(0.324770994999);
    msg.setSource(50474U);
    msg.setSourceEntity(247U);
    msg.setDestination(36312U);
    msg.setDestinationEntity(188U);
    msg.x = 0.440607855163;
    msg.y = 0.280186330312;
    msg.z = 0.333310561131;

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
    msg.setTimeStamp(0.99517875183);
    msg.setSource(27247U);
    msg.setSourceEntity(190U);
    msg.setDestination(27574U);
    msg.setDestinationEntity(113U);
    msg.x = 0.751606520722;
    msg.y = 0.378810468955;
    msg.z = 0.466028446914;

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
    msg.setTimeStamp(0.563663724789);
    msg.setSource(51553U);
    msg.setSourceEntity(230U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(157U);
    msg.value = 0.918710321131;

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
    msg.setTimeStamp(0.450128492949);
    msg.setSource(20528U);
    msg.setSourceEntity(221U);
    msg.setDestination(9264U);
    msg.setDestinationEntity(216U);
    msg.value = 0.011257447122;

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
    msg.setTimeStamp(0.129452787125);
    msg.setSource(46148U);
    msg.setSourceEntity(156U);
    msg.setDestination(9969U);
    msg.setDestinationEntity(67U);
    msg.value = 0.297932507473;

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
    msg.setTimeStamp(0.46920011131);
    msg.setSource(26837U);
    msg.setSourceEntity(130U);
    msg.setDestination(60666U);
    msg.setDestinationEntity(163U);
    msg.value = 0.593609974985;

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
    msg.setTimeStamp(0.0807556769473);
    msg.setSource(4229U);
    msg.setSourceEntity(26U);
    msg.setDestination(38359U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0455020593862;

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
    msg.setTimeStamp(0.157265308048);
    msg.setSource(4040U);
    msg.setSourceEntity(51U);
    msg.setDestination(25389U);
    msg.setDestinationEntity(109U);
    msg.value = 0.786235482398;

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
    msg.setTimeStamp(0.789635273208);
    msg.setSource(35804U);
    msg.setSourceEntity(7U);
    msg.setDestination(41325U);
    msg.setDestinationEntity(133U);
    msg.x = 0.12440000396;
    msg.y = 0.592101670155;
    msg.z = 0.72292714376;
    msg.phi = 0.973043948981;
    msg.theta = 0.778045465755;
    msg.psi = 0.505288328119;
    msg.p = 0.0975876217603;
    msg.q = 0.454437260478;
    msg.r = 0.249908216821;
    msg.u = 0.464578232721;
    msg.v = 0.325969652156;
    msg.w = 0.131909401539;
    msg.bias_psi = 0.474037369481;
    msg.bias_r = 0.504892947407;

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
    msg.setTimeStamp(0.760723239029);
    msg.setSource(57504U);
    msg.setSourceEntity(26U);
    msg.setDestination(17239U);
    msg.setDestinationEntity(140U);
    msg.x = 0.197298598405;
    msg.y = 0.0612436313058;
    msg.z = 0.361965131989;
    msg.phi = 0.408853675006;
    msg.theta = 0.582206037423;
    msg.psi = 0.288893913991;
    msg.p = 0.70248503038;
    msg.q = 0.613704720845;
    msg.r = 0.949644812224;
    msg.u = 0.105191804459;
    msg.v = 0.450327920955;
    msg.w = 0.580333409263;
    msg.bias_psi = 0.585034102001;
    msg.bias_r = 0.713220705651;

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
    msg.setTimeStamp(0.384134765885);
    msg.setSource(34979U);
    msg.setSourceEntity(227U);
    msg.setDestination(16431U);
    msg.setDestinationEntity(125U);
    msg.x = 0.0203859038411;
    msg.y = 0.83013380945;
    msg.z = 0.530613308109;
    msg.phi = 0.549855780565;
    msg.theta = 0.403523139502;
    msg.psi = 0.790946657521;
    msg.p = 0.183629112326;
    msg.q = 0.236576401147;
    msg.r = 0.247464397484;
    msg.u = 0.0109961670612;
    msg.v = 0.40620225734;
    msg.w = 0.587517933887;
    msg.bias_psi = 0.018956891206;
    msg.bias_r = 0.125878983578;

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
    msg.setTimeStamp(0.318248125148);
    msg.setSource(44206U);
    msg.setSourceEntity(158U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(186U);
    msg.bias_psi = 0.342408694061;
    msg.bias_r = 0.88507925518;
    msg.cog = 0.416800864964;
    msg.cyaw = 0.916331601947;
    msg.lbl_rej_level = 0.887922969176;
    msg.gps_rej_level = 0.695278790893;
    msg.custom_x = 0.960599250392;
    msg.custom_y = 0.364757735926;
    msg.custom_z = 0.450924586345;

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
    msg.setTimeStamp(0.249881151944);
    msg.setSource(1074U);
    msg.setSourceEntity(247U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.974494992565;
    msg.bias_r = 0.65592346027;
    msg.cog = 0.239785103197;
    msg.cyaw = 0.521361888257;
    msg.lbl_rej_level = 0.540189516185;
    msg.gps_rej_level = 0.0504552712014;
    msg.custom_x = 0.177118203791;
    msg.custom_y = 0.0109424393022;
    msg.custom_z = 0.306592558283;

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
    msg.setTimeStamp(0.0509990698956);
    msg.setSource(24221U);
    msg.setSourceEntity(76U);
    msg.setDestination(53215U);
    msg.setDestinationEntity(7U);
    msg.bias_psi = 0.79054786843;
    msg.bias_r = 0.841975422036;
    msg.cog = 0.211787290902;
    msg.cyaw = 0.395686143436;
    msg.lbl_rej_level = 0.63753572413;
    msg.gps_rej_level = 0.972100534615;
    msg.custom_x = 0.0829451064221;
    msg.custom_y = 0.281907840897;
    msg.custom_z = 0.0843729235081;

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
    msg.setTimeStamp(0.878175102899);
    msg.setSource(49888U);
    msg.setSourceEntity(72U);
    msg.setDestination(26138U);
    msg.setDestinationEntity(153U);
    msg.utc_time = 0.162527581068;
    msg.reason = 244U;

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
    msg.setTimeStamp(0.243167952836);
    msg.setSource(55727U);
    msg.setSourceEntity(195U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(26U);
    msg.utc_time = 0.0863553900912;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.419735049574);
    msg.setSource(10031U);
    msg.setSourceEntity(71U);
    msg.setDestination(61217U);
    msg.setDestinationEntity(126U);
    msg.utc_time = 0.271202449661;
    msg.reason = 178U;

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
    msg.setTimeStamp(0.138281490024);
    msg.setSource(4418U);
    msg.setSourceEntity(197U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(14U);
    msg.id = 114U;
    msg.range = 0.481252433028;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.749822111819);
    msg.setSource(3905U);
    msg.setSourceEntity(25U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(170U);
    msg.id = 176U;
    msg.range = 0.915025178448;
    msg.acceptance = 99U;

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
    msg.setTimeStamp(0.215838642904);
    msg.setSource(5698U);
    msg.setSourceEntity(21U);
    msg.setDestination(819U);
    msg.setDestinationEntity(14U);
    msg.id = 120U;
    msg.range = 0.413165409097;
    msg.acceptance = 127U;

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
    msg.setTimeStamp(0.425511988638);
    msg.setSource(30279U);
    msg.setSourceEntity(164U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(116U);
    msg.type = 84U;
    msg.reason = 38U;
    msg.value = 0.118518246629;
    msg.timestep = 0.24915011983;

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
    msg.setTimeStamp(0.653786506326);
    msg.setSource(52582U);
    msg.setSourceEntity(155U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(0U);
    msg.type = 35U;
    msg.reason = 197U;
    msg.value = 0.418120867528;
    msg.timestep = 0.680301243544;

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
    msg.setTimeStamp(0.618116087107);
    msg.setSource(56321U);
    msg.setSourceEntity(46U);
    msg.setDestination(22203U);
    msg.setDestinationEntity(165U);
    msg.type = 65U;
    msg.reason = 151U;
    msg.value = 0.304289250296;
    msg.timestep = 0.506117855141;

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
    msg.setTimeStamp(0.983558290739);
    msg.setSource(34720U);
    msg.setSourceEntity(108U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(108U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DEYBMUBOEUWCMVPVEJBUJHWRDSCKPZKABPAACDOCROHMWCQVPYHSJQWHLDCFGNIVKIFYJTFMWMQRVQYMXGYMCJWQFTAHGHEARUKELLQQPLPDTIWTHBZUTXATIJVTCRPBXKGILDTVJNWYXTROBRCISBYXYP");
    tmp_msg_0.lat = 0.558552831159;
    tmp_msg_0.lon = 0.651062884404;
    tmp_msg_0.depth = 0.212998948272;
    tmp_msg_0.query_channel = 65U;
    tmp_msg_0.reply_channel = 160U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.89056005276;
    msg.y = 0.153814080917;
    msg.var_x = 0.296461584196;
    msg.var_y = 0.580852072112;
    msg.distance = 0.537144778314;

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
    msg.setTimeStamp(0.711770203191);
    msg.setSource(63144U);
    msg.setSourceEntity(68U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(124U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FDBTJIQFSCLCOVNYUQADZVAITHOWCWFUPOCUJNSHWIMHDKOWMHVGKCKRFGSAIKDFJYEEWEOYSPJTJJPXTUHSXLGGZMGRPOONBLYFIRYQQUYXDGQSARIBHBBAPDUPDZZEBHXKGMLEHCOXKDZYTEBCPAKBPXEJNQRWRYAATTNUJQRQBYMLUVCZWQNLJGWVZLZMXIZLMXVHGDKMQAERFUFPCNSVRSIEFHFERKOWVXVISGCKO");
    tmp_msg_0.lat = 0.696101672991;
    tmp_msg_0.lon = 0.793868622758;
    tmp_msg_0.depth = 0.142765317257;
    tmp_msg_0.query_channel = 209U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 218U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.518202802978;
    msg.y = 0.121758195854;
    msg.var_x = 0.253275797006;
    msg.var_y = 0.3969960991;
    msg.distance = 0.474663492153;

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
    msg.setTimeStamp(0.273391648796);
    msg.setSource(17831U);
    msg.setSourceEntity(243U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOHDJFNUUTRYDWILEXEFCHILQSBDLOZOONKWBAGSZGAQRCVPEQDBBGBEPTKCFOYSZMYLUKBWALKQRKNKJSYDMUMWZNAHFSQPNEXTJXVSZBMIJLZAZVPETIVBNUNRGHCRANTNIFOJWTAEMCMQUAJKQDAC");
    tmp_msg_0.lat = 0.320015050566;
    tmp_msg_0.lon = 0.392326314595;
    tmp_msg_0.depth = 0.838533749724;
    tmp_msg_0.query_channel = 92U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.990608661438;
    msg.y = 0.591859997662;
    msg.var_x = 0.930312082697;
    msg.var_y = 0.0280090248177;
    msg.distance = 0.357040916361;

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
    msg.setTimeStamp(0.78635684503);
    msg.setSource(63350U);
    msg.setSourceEntity(106U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(240U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.456201147156);
    msg.setSource(9813U);
    msg.setSourceEntity(114U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(7U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.617647798567);
    msg.setSource(5519U);
    msg.setSourceEntity(26U);
    msg.setDestination(17263U);
    msg.setDestinationEntity(141U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.919431129097);
    msg.setSource(40224U);
    msg.setSourceEntity(200U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(82U);
    msg.x = 0.251534390341;
    msg.y = 0.0968523263335;
    msg.z = 0.865369824434;

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
    msg.setTimeStamp(0.485710753377);
    msg.setSource(28499U);
    msg.setSourceEntity(55U);
    msg.setDestination(52965U);
    msg.setDestinationEntity(59U);
    msg.x = 0.601213588012;
    msg.y = 0.641620281161;
    msg.z = 0.272913136108;

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
    msg.setTimeStamp(0.272867410246);
    msg.setSource(44774U);
    msg.setSourceEntity(144U);
    msg.setDestination(5408U);
    msg.setDestinationEntity(32U);
    msg.x = 0.739828496702;
    msg.y = 0.302598493019;
    msg.z = 0.176192073521;

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
    msg.setTimeStamp(0.785652431226);
    msg.setSource(57673U);
    msg.setSourceEntity(154U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(56U);
    msg.va = 0.701598575912;
    msg.aoa = 0.115791328746;
    msg.ssa = 0.913572922844;

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
    msg.setTimeStamp(0.862866427199);
    msg.setSource(46129U);
    msg.setSourceEntity(34U);
    msg.setDestination(61859U);
    msg.setDestinationEntity(95U);
    msg.va = 0.343537104408;
    msg.aoa = 0.395191549164;
    msg.ssa = 0.698081277896;

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
    msg.setTimeStamp(0.166634290307);
    msg.setSource(48258U);
    msg.setSourceEntity(213U);
    msg.setDestination(34813U);
    msg.setDestinationEntity(105U);
    msg.va = 0.547314872053;
    msg.aoa = 0.87770690799;
    msg.ssa = 0.975102221088;

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
    msg.setTimeStamp(0.570556759385);
    msg.setSource(29506U);
    msg.setSourceEntity(12U);
    msg.setDestination(42245U);
    msg.setDestinationEntity(18U);
    msg.value = 0.212552310771;

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
    msg.setTimeStamp(0.465280829611);
    msg.setSource(55362U);
    msg.setSourceEntity(245U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(29U);
    msg.value = 0.418807190432;

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
    msg.setTimeStamp(0.200688189188);
    msg.setSource(839U);
    msg.setSourceEntity(42U);
    msg.setDestination(40281U);
    msg.setDestinationEntity(249U);
    msg.value = 0.819671057121;

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
    msg.setTimeStamp(0.593131041296);
    msg.setSource(14364U);
    msg.setSourceEntity(101U);
    msg.setDestination(798U);
    msg.setDestinationEntity(112U);
    msg.value = 0.158747310515;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.973504538361);
    msg.setSource(13487U);
    msg.setSourceEntity(231U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(173U);
    msg.value = 0.571551929632;
    msg.z_units = 34U;

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
    msg.setTimeStamp(0.0614027544267);
    msg.setSource(29900U);
    msg.setSourceEntity(247U);
    msg.setDestination(51015U);
    msg.setDestinationEntity(42U);
    msg.value = 0.82022337999;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.547721244718);
    msg.setSource(52107U);
    msg.setSourceEntity(72U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(196U);
    msg.value = 0.470581804226;
    msg.speed_units = 198U;

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
    msg.setTimeStamp(0.689921648853);
    msg.setSource(8812U);
    msg.setSourceEntity(231U);
    msg.setDestination(32399U);
    msg.setDestinationEntity(167U);
    msg.value = 0.263842585824;
    msg.speed_units = 126U;

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
    msg.setTimeStamp(0.147112573283);
    msg.setSource(51822U);
    msg.setSourceEntity(192U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(201U);
    msg.value = 0.427922405072;
    msg.speed_units = 132U;

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
    msg.setTimeStamp(0.898377091103);
    msg.setSource(34894U);
    msg.setSourceEntity(144U);
    msg.setDestination(22857U);
    msg.setDestinationEntity(3U);
    msg.value = 0.832976240033;

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
    msg.setTimeStamp(0.35511417059);
    msg.setSource(63286U);
    msg.setSourceEntity(195U);
    msg.setDestination(10422U);
    msg.setDestinationEntity(111U);
    msg.value = 0.228113685805;

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
    msg.setTimeStamp(0.387715773734);
    msg.setSource(61991U);
    msg.setSourceEntity(206U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(80U);
    msg.value = 0.349507895412;

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
    msg.setTimeStamp(0.0888411188991);
    msg.setSource(54450U);
    msg.setSourceEntity(201U);
    msg.setDestination(3590U);
    msg.setDestinationEntity(11U);
    msg.value = 0.2183037038;

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
    msg.setTimeStamp(0.502004722438);
    msg.setSource(45492U);
    msg.setSourceEntity(227U);
    msg.setDestination(38015U);
    msg.setDestinationEntity(33U);
    msg.value = 0.142628354178;

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
    msg.setTimeStamp(0.357743780896);
    msg.setSource(32120U);
    msg.setSourceEntity(81U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(131U);
    msg.value = 0.420332079987;

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
    msg.setTimeStamp(0.908619254203);
    msg.setSource(4122U);
    msg.setSourceEntity(37U);
    msg.setDestination(15690U);
    msg.setDestinationEntity(163U);
    msg.value = 0.852114464914;

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
    msg.setTimeStamp(0.0764498333696);
    msg.setSource(23455U);
    msg.setSourceEntity(171U);
    msg.setDestination(52597U);
    msg.setDestinationEntity(141U);
    msg.value = 0.751379645971;

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
    msg.setTimeStamp(0.849933911121);
    msg.setSource(30795U);
    msg.setSourceEntity(43U);
    msg.setDestination(4221U);
    msg.setDestinationEntity(203U);
    msg.value = 0.120052627229;

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
    msg.setTimeStamp(0.77375774469);
    msg.setSource(204U);
    msg.setSourceEntity(26U);
    msg.setDestination(34811U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 3737025304U;
    msg.start_lat = 0.276481335138;
    msg.start_lon = 0.306315321429;
    msg.start_z = 0.5101582851;
    msg.start_z_units = 178U;
    msg.end_lat = 0.882421959133;
    msg.end_lon = 0.272411547839;
    msg.end_z = 0.325981044855;
    msg.end_z_units = 158U;
    msg.speed = 0.955228486826;
    msg.speed_units = 156U;
    msg.lradius = 0.976535134265;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.728269078328);
    msg.setSource(6999U);
    msg.setSourceEntity(105U);
    msg.setDestination(63868U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 2578468870U;
    msg.start_lat = 0.780042688421;
    msg.start_lon = 0.196529262921;
    msg.start_z = 0.0641209112462;
    msg.start_z_units = 217U;
    msg.end_lat = 0.580917349375;
    msg.end_lon = 0.216572136443;
    msg.end_z = 0.476710404175;
    msg.end_z_units = 121U;
    msg.speed = 0.902478584634;
    msg.speed_units = 61U;
    msg.lradius = 0.105542603975;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.811441465984);
    msg.setSource(50359U);
    msg.setSourceEntity(216U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(73U);
    msg.path_ref = 1362783344U;
    msg.start_lat = 0.886368912383;
    msg.start_lon = 0.269739046047;
    msg.start_z = 0.101188638544;
    msg.start_z_units = 52U;
    msg.end_lat = 0.011535569683;
    msg.end_lon = 0.16202469795;
    msg.end_z = 0.65802052391;
    msg.end_z_units = 22U;
    msg.speed = 0.927558097369;
    msg.speed_units = 232U;
    msg.lradius = 0.219134698654;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.927090278339);
    msg.setSource(32618U);
    msg.setSourceEntity(157U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(164U);
    msg.x = 0.428345255698;
    msg.y = 0.0813934806078;
    msg.z = 0.0853876923072;
    msg.k = 0.814760864336;
    msg.m = 0.0569638582493;
    msg.n = 0.154180757975;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.251217808805);
    msg.setSource(33917U);
    msg.setSourceEntity(5U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(128U);
    msg.x = 0.281458956511;
    msg.y = 0.241846702844;
    msg.z = 0.767458079735;
    msg.k = 0.908923618792;
    msg.m = 0.00659270196021;
    msg.n = 0.906017748406;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.0593858498126);
    msg.setSource(41056U);
    msg.setSourceEntity(112U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(149U);
    msg.x = 0.418368903114;
    msg.y = 0.624834945145;
    msg.z = 0.490741645763;
    msg.k = 0.466520571226;
    msg.m = 0.693950947087;
    msg.n = 0.57578937765;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.782699800658);
    msg.setSource(62613U);
    msg.setSourceEntity(4U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(172U);
    msg.value = 0.825377752593;

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
    msg.setTimeStamp(0.560237790243);
    msg.setSource(59729U);
    msg.setSourceEntity(141U);
    msg.setDestination(34289U);
    msg.setDestinationEntity(211U);
    msg.value = 0.18822089305;

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
    msg.setTimeStamp(0.0760969897809);
    msg.setSource(61200U);
    msg.setSourceEntity(240U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(13U);
    msg.value = 0.529877320496;

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
    msg.setTimeStamp(0.00621661055733);
    msg.setSource(42627U);
    msg.setSourceEntity(154U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(105U);
    msg.u = 0.481195709649;
    msg.v = 0.665897449179;
    msg.w = 0.3615435884;
    msg.p = 0.404138214387;
    msg.q = 0.824182811605;
    msg.r = 0.966627039599;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.992537788786);
    msg.setSource(63254U);
    msg.setSourceEntity(232U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(175U);
    msg.u = 0.731003536057;
    msg.v = 0.228484128951;
    msg.w = 0.995187758261;
    msg.p = 0.0985626434748;
    msg.q = 0.134058327821;
    msg.r = 0.936954707555;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.143456574183);
    msg.setSource(5328U);
    msg.setSourceEntity(36U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(82U);
    msg.u = 0.675497079738;
    msg.v = 0.901203517755;
    msg.w = 0.503435402156;
    msg.p = 0.322581694498;
    msg.q = 0.341279159988;
    msg.r = 0.960101169449;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.984039403395);
    msg.setSource(32826U);
    msg.setSourceEntity(103U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 3030807528U;
    msg.start_lat = 0.540713890323;
    msg.start_lon = 0.267474089225;
    msg.start_z = 0.655551954818;
    msg.start_z_units = 53U;
    msg.end_lat = 0.941499091729;
    msg.end_lon = 0.902285101758;
    msg.end_z = 0.690902010544;
    msg.end_z_units = 174U;
    msg.lradius = 0.412729809666;
    msg.flags = 235U;
    msg.x = 0.473212163262;
    msg.y = 0.998884027792;
    msg.z = 0.310402130926;
    msg.vx = 0.651265189409;
    msg.vy = 0.495148479352;
    msg.vz = 0.184944514033;
    msg.course_error = 0.429022954519;
    msg.eta = 24326U;

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
    msg.setTimeStamp(0.479199339114);
    msg.setSource(40377U);
    msg.setSourceEntity(37U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 3898478650U;
    msg.start_lat = 0.54730619975;
    msg.start_lon = 0.851901888729;
    msg.start_z = 0.496597054917;
    msg.start_z_units = 78U;
    msg.end_lat = 0.243154506254;
    msg.end_lon = 0.130826295164;
    msg.end_z = 0.975583463449;
    msg.end_z_units = 119U;
    msg.lradius = 0.253358131379;
    msg.flags = 200U;
    msg.x = 0.493110518724;
    msg.y = 0.185735584807;
    msg.z = 0.0583702494167;
    msg.vx = 0.69424522026;
    msg.vy = 0.390197632231;
    msg.vz = 0.946672305891;
    msg.course_error = 0.207977324764;
    msg.eta = 9441U;

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
    msg.setTimeStamp(0.560408222443);
    msg.setSource(634U);
    msg.setSourceEntity(96U);
    msg.setDestination(47626U);
    msg.setDestinationEntity(193U);
    msg.path_ref = 2769203592U;
    msg.start_lat = 0.630487477339;
    msg.start_lon = 0.0493658729083;
    msg.start_z = 0.736582242847;
    msg.start_z_units = 93U;
    msg.end_lat = 0.851433390739;
    msg.end_lon = 0.55844616595;
    msg.end_z = 0.123490809243;
    msg.end_z_units = 244U;
    msg.lradius = 0.957466376322;
    msg.flags = 30U;
    msg.x = 0.0496100564412;
    msg.y = 0.247899473935;
    msg.z = 0.553310445525;
    msg.vx = 0.828362176681;
    msg.vy = 0.456257210987;
    msg.vz = 0.64593225461;
    msg.course_error = 0.952974219803;
    msg.eta = 23425U;

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
    msg.setTimeStamp(0.881345460671);
    msg.setSource(60346U);
    msg.setSourceEntity(99U);
    msg.setDestination(25595U);
    msg.setDestinationEntity(235U);
    msg.k = 0.673053769625;
    msg.m = 0.680573887076;
    msg.n = 0.110550017844;

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
    msg.setTimeStamp(0.44546343055);
    msg.setSource(47590U);
    msg.setSourceEntity(78U);
    msg.setDestination(38730U);
    msg.setDestinationEntity(37U);
    msg.k = 0.952359601558;
    msg.m = 0.243819922601;
    msg.n = 0.677660421676;

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
    msg.setTimeStamp(0.752322670529);
    msg.setSource(60166U);
    msg.setSourceEntity(129U);
    msg.setDestination(29792U);
    msg.setDestinationEntity(62U);
    msg.k = 0.805929447148;
    msg.m = 0.375758059287;
    msg.n = 0.453285317572;

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
    msg.setTimeStamp(0.796760722947);
    msg.setSource(24101U);
    msg.setSourceEntity(252U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(12U);
    msg.p = 0.601874836167;
    msg.i = 0.114991560616;
    msg.d = 0.739755964174;
    msg.a = 0.40654983147;

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
    msg.setTimeStamp(0.0802102261833);
    msg.setSource(9026U);
    msg.setSourceEntity(246U);
    msg.setDestination(24105U);
    msg.setDestinationEntity(225U);
    msg.p = 0.576706425266;
    msg.i = 0.306762524579;
    msg.d = 0.571516644778;
    msg.a = 0.794533625941;

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
    msg.setTimeStamp(0.485746533656);
    msg.setSource(55651U);
    msg.setSourceEntity(34U);
    msg.setDestination(47436U);
    msg.setDestinationEntity(8U);
    msg.p = 0.157554504799;
    msg.i = 0.72937991617;
    msg.d = 0.118358016168;
    msg.a = 0.892167532387;

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
    msg.setTimeStamp(0.724365467184);
    msg.setSource(32579U);
    msg.setSourceEntity(201U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(159U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.748588471241);
    msg.setSource(59298U);
    msg.setSourceEntity(126U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(55U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.634288439642);
    msg.setSource(61477U);
    msg.setSourceEntity(252U);
    msg.setDestination(4626U);
    msg.setDestinationEntity(165U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.0570946608511);
    msg.setSource(4148U);
    msg.setSourceEntity(253U);
    msg.setDestination(11710U);
    msg.setDestinationEntity(129U);
    msg.x = 0.728557372853;
    msg.y = 0.165723346868;
    msg.z = 0.103545965153;
    msg.vx = 2.94951813528e-05;
    msg.vy = 0.483120707208;
    msg.vz = 0.38573259302;
    msg.ax = 0.561803655165;
    msg.ay = 0.399545334486;
    msg.az = 0.609899063687;
    msg.flags = 15229U;

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
    msg.setTimeStamp(0.348878762665);
    msg.setSource(38547U);
    msg.setSourceEntity(9U);
    msg.setDestination(29260U);
    msg.setDestinationEntity(78U);
    msg.x = 0.454731371873;
    msg.y = 0.208285341175;
    msg.z = 0.794514437399;
    msg.vx = 0.948248709031;
    msg.vy = 0.341234509801;
    msg.vz = 0.280689527576;
    msg.ax = 0.0144383422528;
    msg.ay = 0.0179391906445;
    msg.az = 0.129308079093;
    msg.flags = 46389U;

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
    msg.setTimeStamp(0.143065465002);
    msg.setSource(21893U);
    msg.setSourceEntity(31U);
    msg.setDestination(52573U);
    msg.setDestinationEntity(136U);
    msg.x = 0.68143146971;
    msg.y = 0.362179141127;
    msg.z = 0.538279468502;
    msg.vx = 0.340915828817;
    msg.vy = 0.186629617278;
    msg.vz = 0.173145803509;
    msg.ax = 0.779974812452;
    msg.ay = 0.628196423449;
    msg.az = 0.132689123466;
    msg.flags = 46326U;

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
    msg.setTimeStamp(0.872192856029);
    msg.setSource(17593U);
    msg.setSourceEntity(75U);
    msg.setDestination(2747U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0253630693803;

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
    msg.setTimeStamp(0.859649490124);
    msg.setSource(52394U);
    msg.setSourceEntity(179U);
    msg.setDestination(50707U);
    msg.setDestinationEntity(17U);
    msg.value = 0.168036012596;

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
    msg.setTimeStamp(0.00610443552431);
    msg.setSource(39039U);
    msg.setSourceEntity(145U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(139U);
    msg.value = 0.157507472024;

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
    msg.setTimeStamp(0.338095588532);
    msg.setSource(50441U);
    msg.setSourceEntity(56U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(179U);
    msg.timeout = 2558U;
    msg.lat = 0.370680292402;
    msg.lon = 0.731736482896;
    msg.z = 0.581613544575;
    msg.z_units = 81U;
    msg.speed = 0.697886885361;
    msg.speed_units = 151U;
    msg.roll = 0.207938353001;
    msg.pitch = 0.5433628961;
    msg.yaw = 0.842229454237;
    msg.custom.assign("GZYZBGMLFTPMCQEAECGTWGWYCRGOEZKLKUQGVQUIIYNXDUHPOYMGFQNAXWIRFVEBIRLPWTICWKQTGUMKUONNUOJJLFEVDRKTJDAQSJZFBNFVHSGPTROKQEMSWHQTHVVNBXSKFVXKQOSHZXLHZIARYBEYBBIRLLMCMCM");

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
    msg.setTimeStamp(0.384458234057);
    msg.setSource(56051U);
    msg.setSourceEntity(149U);
    msg.setDestination(62245U);
    msg.setDestinationEntity(132U);
    msg.timeout = 15713U;
    msg.lat = 0.697976934381;
    msg.lon = 0.644682895068;
    msg.z = 0.320774637902;
    msg.z_units = 34U;
    msg.speed = 0.80292125877;
    msg.speed_units = 46U;
    msg.roll = 0.094367820536;
    msg.pitch = 0.564170754259;
    msg.yaw = 0.0352202782567;
    msg.custom.assign("QXCILYLSJXPLONNFFHMERKYHYTYHKSNVDFTABIMQHWWTRISNZOITQDVHXQDYHKSGFXAMGMKYUOEEECBGKZRRBXSIPCTJAXIVYJBXSPXVGUQWARBBQTBUUUGCZGKPZLCDDJFIZDFCAOMJOIBZNBERRHAAVOPWKMLVUDDFSZOWKLVPOKZUJLNHGTJHTQNMLTNYBJWGACWPMSGRCTQSZCYPCLUGEXKOQVEHRUQDSNEOE");

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
    msg.setTimeStamp(0.302629354746);
    msg.setSource(30648U);
    msg.setSourceEntity(89U);
    msg.setDestination(25435U);
    msg.setDestinationEntity(36U);
    msg.timeout = 13254U;
    msg.lat = 0.157381189156;
    msg.lon = 0.961415190895;
    msg.z = 0.531886198144;
    msg.z_units = 100U;
    msg.speed = 0.0506213008757;
    msg.speed_units = 211U;
    msg.roll = 0.0518495079806;
    msg.pitch = 0.77427408022;
    msg.yaw = 0.1315196465;
    msg.custom.assign("JZWHVWBQKTYRHJAKTSFAQPSUHIGROEOOTQGKQMEFRXLNRZXNDOMEJIPFGGLLOCSSKHNGXKCSXXKVWOWYNBCWBCHLNIFVTPFBTUZUQODHZDLNVFPQCFHI");

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
    msg.setTimeStamp(0.344559440657);
    msg.setSource(19727U);
    msg.setSourceEntity(239U);
    msg.setDestination(1766U);
    msg.setDestinationEntity(196U);
    msg.timeout = 62313U;
    msg.lat = 0.898944201091;
    msg.lon = 0.420835849047;
    msg.z = 0.795790656135;
    msg.z_units = 186U;
    msg.speed = 0.42978746425;
    msg.speed_units = 6U;
    msg.duration = 4606U;
    msg.radius = 0.476388423412;
    msg.flags = 92U;
    msg.custom.assign("HWKPSQDLAQQJCZTACBJOHKIDCXILYAYLITRJDUUGNLGMBAIDZBGINKVYZWLTEJAMVLEAVUZGBRBFKXPFCROQSQBSATBCOESJGMXJEJXZQQIXYVDXDTUKKMZWDXUPFLHVOPYXETRZVGT");

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
    msg.setTimeStamp(0.658723858657);
    msg.setSource(30873U);
    msg.setSourceEntity(156U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(53U);
    msg.timeout = 44211U;
    msg.lat = 0.202794016645;
    msg.lon = 0.586927285982;
    msg.z = 0.402969036243;
    msg.z_units = 246U;
    msg.speed = 0.448962705859;
    msg.speed_units = 254U;
    msg.duration = 38562U;
    msg.radius = 0.158632751377;
    msg.flags = 118U;
    msg.custom.assign("QKUSDYXPSRHLMORVKVKEICNYVICOGSECAIVSBRYYQDJQXRDJIMJLKNBUNYOEGXCSTITPJHROHUEAFLKZWCMXKLPWUCZMJALVIZRLBWHKBNAPQRDNXZAWYESVMIOCEXHTZJEHJGYOFGTADSKBAYUDXBWWJNZZCCOYDARQNXPOWEFFJQVPWZNBUXZJLPHEKTCNLVGDQLFUGGQMPGBOOIMUHMDZTMSUTMWWQFIHYFVTBVUSDLBSEQTRFRFPPGGK");

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
    msg.setTimeStamp(0.575783255472);
    msg.setSource(43986U);
    msg.setSourceEntity(191U);
    msg.setDestination(63285U);
    msg.setDestinationEntity(30U);
    msg.timeout = 11108U;
    msg.lat = 0.457509539993;
    msg.lon = 0.733651394952;
    msg.z = 0.780735443462;
    msg.z_units = 170U;
    msg.speed = 0.259039157162;
    msg.speed_units = 212U;
    msg.duration = 39333U;
    msg.radius = 0.561788062816;
    msg.flags = 35U;
    msg.custom.assign("GBQAGELXORXDOKRTOVPWDNJUXILIBJJKLMZUJKRPEQUBZNGJIPPSVWZXMSURSCCMLJKVGZXHCAQDNEMQDAKALHTMPWJYIAHYFEAITYVNNCBXNYIWADVWHGVTWHYXHVAMSVEZTTZRLGTXECLAN");

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
    msg.setTimeStamp(0.0563110151327);
    msg.setSource(31122U);
    msg.setSourceEntity(234U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("EUTGOLHHINTETJWDUXRYWKPTKVQOXZBCUYNJBQKVFRIOUYWUNBEGQFDSWFADMXZMMGQWMLFHSSIBSC");

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
    msg.setTimeStamp(0.924498575768);
    msg.setSource(64467U);
    msg.setSourceEntity(184U);
    msg.setDestination(17491U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("YUMURKOHLBVMUKVAQWHROERIBLFQVRRSECKIGCKMPSTRTTZEHFVUHWJOJYPAOQNGUUJBYHGQWXZSSHAOVDGJVWARTONQBZNKD");

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
    msg.setTimeStamp(0.783961426138);
    msg.setSource(30698U);
    msg.setSourceEntity(151U);
    msg.setDestination(27023U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("JZUOTDUOBHQVDAPTVCRVNMGCEISJDWXXZCJMPHFLHEVGPRWJBNQGZSRFMCOBQUWDKLZUYAYXHKTDYMHINJEQXDYWSREYCPBDVTCYBSZUILIXQGKKJFRKGJSRLESLTWOIFSMCJBTKOMSKWYOATBIKFFA");

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
    msg.setTimeStamp(0.472364378921);
    msg.setSource(52228U);
    msg.setSourceEntity(252U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(92U);
    msg.timeout = 62880U;
    msg.lat = 0.681456114138;
    msg.lon = 0.00171033958064;
    msg.z = 0.096609444126;
    msg.z_units = 143U;
    msg.duration = 28717U;
    msg.speed = 0.757804501204;
    msg.speed_units = 30U;
    msg.type = 50U;
    msg.radius = 0.267692097684;
    msg.length = 0.505461869082;
    msg.bearing = 0.93746210318;
    msg.direction = 169U;
    msg.custom.assign("FZRCYQZTOXNJZVYEMOWOGMSXMNWUOFHRRRDFXQSZECIAOCEAVYWAXLSGLPUPTEBREHVNOZBMAXCQDJDLJWUUEIHMMISQFQSPIKERMWPBAPNFSVZELKWYAIFPNBICZPRDEVXNMNGAKFSLUKIRJPGTXLYLHTVSKOVNLULFBUPTAX");

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
    msg.setTimeStamp(0.663177898244);
    msg.setSource(47490U);
    msg.setSourceEntity(140U);
    msg.setDestination(51201U);
    msg.setDestinationEntity(240U);
    msg.timeout = 37655U;
    msg.lat = 0.22460944785;
    msg.lon = 0.431235899186;
    msg.z = 0.101252617948;
    msg.z_units = 145U;
    msg.duration = 8884U;
    msg.speed = 0.203705107825;
    msg.speed_units = 72U;
    msg.type = 15U;
    msg.radius = 0.390093622023;
    msg.length = 0.871080519468;
    msg.bearing = 0.34472980623;
    msg.direction = 240U;
    msg.custom.assign("GEOUGCBSIJPJAWIVHSTYPXKFCSHTDHXYZWRXQKGPQWJESAEUTQTLHYPTYTAZSWNCWCAAOFLWSXKKWKBFPCXZGINKNMZCHLEOUKQRUXQALTPZRUVLRBJIDNFIMXCVYLNLXFMIQVVQPYWMBMOEPRTSCRZXEFDOEYJAYGVBDHHEIMZYPVJLJFGDQIPSCCDHRDYZESENLOVMMMNV");

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
    msg.setTimeStamp(0.303366917288);
    msg.setSource(15282U);
    msg.setSourceEntity(37U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(48U);
    msg.timeout = 11859U;
    msg.lat = 0.202255168638;
    msg.lon = 0.0439337570117;
    msg.z = 0.741580439956;
    msg.z_units = 1U;
    msg.duration = 14349U;
    msg.speed = 0.0161744326882;
    msg.speed_units = 59U;
    msg.type = 207U;
    msg.radius = 0.466839891566;
    msg.length = 0.305486522669;
    msg.bearing = 0.847008064602;
    msg.direction = 75U;
    msg.custom.assign("JKYWXYRQKGVBXGCIMUZXOYXPZJFFGPHVFMAAQJCQCRI");

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
    msg.setTimeStamp(0.641262285627);
    msg.setSource(2090U);
    msg.setSourceEntity(193U);
    msg.setDestination(55797U);
    msg.setDestinationEntity(3U);
    msg.duration = 33209U;
    msg.custom.assign("VARTUPUIOSRDHINNTCHEKWZLXQBGDCFMSKHIOIJDTXULHECYVOWAJ");

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
    msg.setTimeStamp(0.0613532282561);
    msg.setSource(41968U);
    msg.setSourceEntity(216U);
    msg.setDestination(63248U);
    msg.setDestinationEntity(49U);
    msg.duration = 3570U;
    msg.custom.assign("GWGISPUEVVSWQGGZYEHOPWZETCGBCRTCASIMEGMTAHBXFOPOEXUUTPOXHJBJ");

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
    msg.setTimeStamp(0.187513983041);
    msg.setSource(10002U);
    msg.setSourceEntity(82U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(121U);
    msg.duration = 38430U;
    msg.custom.assign("FUPRUUGAQCTEDWCZOQTYBETMSSHOCQTKFMUIXYIGIYZVBYEREASLQXJPPOIVOFNTMLAAVVDBZTLGOGLVMJSEFSKYCHGONIXHOHCJZILBYKZEUNPDNWCEKBRASWQDSRJXJKYPDFKFVOWQOBHCDWNUBIUKSVJTI");

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
    msg.setTimeStamp(0.978658869468);
    msg.setSource(39197U);
    msg.setSourceEntity(41U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(114U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.795023365935;
    msg.control.set(tmp_msg_0);
    msg.duration = 33700U;
    msg.custom.assign("EJAUCRAQRCSDFZVOFECZYUQNZMYEURLHRBBBPTZTQGEBRGWGEPGMWZKCHDLEUXTKFSVOMKRGIWDZMNIFQEEHAQXEFRNSBOSKNUXTNXQTJCVAHKGJBYLPDIIDWAKLVTBSXGIGKYFYDKNDZMLXACOLHJZHSMJJLWPYPWVPGITHQKVLM");

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
    msg.setTimeStamp(0.144121677549);
    msg.setSource(6161U);
    msg.setSourceEntity(77U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(181U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.388230326267;
    tmp_msg_0.z_units = 0U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26589U;
    msg.custom.assign("EXKPZUNPFHRAEDEYH");

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
    msg.setTimeStamp(0.858361080846);
    msg.setSource(48958U);
    msg.setSourceEntity(64U);
    msg.setDestination(53443U);
    msg.setDestinationEntity(51U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.342832349228;
    tmp_msg_0.z_units = 224U;
    msg.control.set(tmp_msg_0);
    msg.duration = 48778U;
    msg.custom.assign("RMQMBIIESDOIEUMFQIYKHSWVRYCSFPBR");

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
    msg.setTimeStamp(0.61687104307);
    msg.setSource(11556U);
    msg.setSourceEntity(194U);
    msg.setDestination(12185U);
    msg.setDestinationEntity(46U);
    msg.timeout = 39458U;
    msg.lat = 0.277317591645;
    msg.lon = 0.510159421532;
    msg.z = 0.0772274794682;
    msg.z_units = 52U;
    msg.speed = 0.992705271762;
    msg.speed_units = 89U;
    msg.bearing = 0.764981653267;
    msg.cross_angle = 0.230058251249;
    msg.width = 0.476197103112;
    msg.length = 0.024939069085;
    msg.hstep = 0.39103858355;
    msg.coff = 6U;
    msg.alternation = 220U;
    msg.flags = 97U;
    msg.custom.assign("HULLVAHSICLBGGORWOUXLKSBWHNVGFYVNCJMXZRLHEVAIEIJHICHLIOAGOKCOQYVGZHCFBJFNUWSFYVMLJAVZNQADYXGGQMXTTTNDXTGQGHPWWQHWPKYUTJDXXQSJJZGSTRXUJRIUNMQMSNRNQAURBLCQFEEKPEUANKDOFPOASZMROIRZFBPPNSULVVFYYWZKOTJWIKDBZBBCJEDITCDXRWCFTESFEAUMYCDWBVXTPMOYK");

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
    msg.setTimeStamp(0.0668786278004);
    msg.setSource(5792U);
    msg.setSourceEntity(86U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(24U);
    msg.timeout = 5126U;
    msg.lat = 0.374486067344;
    msg.lon = 0.27214490077;
    msg.z = 0.563640078466;
    msg.z_units = 17U;
    msg.speed = 0.49403700605;
    msg.speed_units = 189U;
    msg.bearing = 0.732385870125;
    msg.cross_angle = 0.946201572971;
    msg.width = 0.578695802644;
    msg.length = 0.73954984906;
    msg.hstep = 0.938577678755;
    msg.coff = 86U;
    msg.alternation = 22U;
    msg.flags = 225U;
    msg.custom.assign("AUGHPJKYEUSDKCZUHUEIZMBTWCMZFNMLJPOVHFPSGXLZWCFOOTOSYVGHBKQBRIPGQLKZNQISXABJAQQITKCMNWDNOSXCMESGLTVVXKTPBNFWQPHUQMYCNTECPYUCTVCQFFYMHKRWXNAMFXDLYHJDDFYGMEHZYVAYWGCTPRXLRKVSZBRWJISIOJKKARXXWZTDOGJPOVIRABEYOBURENAELLSWPQQDGRSUUVJBWJHDDHVB");

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
    msg.setTimeStamp(0.940172740984);
    msg.setSource(38470U);
    msg.setSourceEntity(164U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(14U);
    msg.timeout = 50474U;
    msg.lat = 0.0998661746239;
    msg.lon = 0.739486180274;
    msg.z = 0.523274349808;
    msg.z_units = 71U;
    msg.speed = 0.977367969169;
    msg.speed_units = 2U;
    msg.bearing = 0.178010432234;
    msg.cross_angle = 0.782139910907;
    msg.width = 0.593007072948;
    msg.length = 0.173154449695;
    msg.hstep = 0.0016014185981;
    msg.coff = 209U;
    msg.alternation = 170U;
    msg.flags = 193U;
    msg.custom.assign("UXHGMOLCPFBEGPZGAHUCRJWTAQPCCSPRMRNCZODVEOHBTFSDZSIUTLJWVIFNXHYSEJREDZNXLGGBPVVJYDXISTYVBCQFGCXBAVMUUXJNPYTWQZAQRAQJXWYMZRKNLQAIRZCBQAXDUJTILIFFZHYABKSELRPKOZDTSUTPFWKNXGNGADHWJLJHHUTKKEWLBMKCMZUOWMYNYIYVTRDFOOUIRMSGKYBLEFPIKW");

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
    msg.setTimeStamp(0.39800649407);
    msg.setSource(27248U);
    msg.setSourceEntity(60U);
    msg.setDestination(6811U);
    msg.setDestinationEntity(52U);
    msg.timeout = 49638U;
    msg.lat = 0.021461505353;
    msg.lon = 0.377437334494;
    msg.z = 0.815234686289;
    msg.z_units = 162U;
    msg.speed = 0.371576165055;
    msg.speed_units = 246U;
    msg.custom.assign("PMHMWNJTPEHSUSCHVNFIXWWYPOBYYXMTIUGJHAGNJJGWUPHCBODQILKXWHBVFCAYKDBFYPJDGP");

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
    msg.setTimeStamp(0.594761608189);
    msg.setSource(51338U);
    msg.setSourceEntity(113U);
    msg.setDestination(47827U);
    msg.setDestinationEntity(155U);
    msg.timeout = 13822U;
    msg.lat = 0.260943266511;
    msg.lon = 0.533683628588;
    msg.z = 0.195234665;
    msg.z_units = 240U;
    msg.speed = 0.00981718788086;
    msg.speed_units = 120U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.269933805961;
    tmp_msg_0.y = 0.109792453413;
    tmp_msg_0.z = 0.140256436138;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YIGJJPJQUKIKBMWLPLUMMTFZULPYKEURECWMZITOVUSPRIGZAZOGVIJXUNOXORDGNQXNPETNUKKVXERSRBSWLCFXSEXSHYMHONKVAMXUFUOAABELABQDXWIKTDHVVNNDWQLFQOJXGJAFPZPGUTFHNBSEYN");

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
    msg.setTimeStamp(0.822349440245);
    msg.setSource(52250U);
    msg.setSourceEntity(252U);
    msg.setDestination(6688U);
    msg.setDestinationEntity(11U);
    msg.timeout = 25476U;
    msg.lat = 0.322062737816;
    msg.lon = 0.27245443979;
    msg.z = 0.453574558946;
    msg.z_units = 142U;
    msg.speed = 0.598592986041;
    msg.speed_units = 175U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.840212122157;
    tmp_msg_0.y = 0.512361719397;
    tmp_msg_0.z = 0.327319593124;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HLWBKHJSKICPPXNCOGXRUMESDMQUAYNDVGANXMQYFCXJKSXCOSGWNFRKZRGYTWUQWEZJZPTOFHINYZVYTHCNTYRBLTMWYDBSPTJQAODROYCKICRTYVFOTDNRBBAFQLDBNVRGAWASHZUIKWGGVAICYLXSPAJJHL");

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
    msg.setTimeStamp(0.58689374095);
    msg.setSource(58893U);
    msg.setSourceEntity(117U);
    msg.setDestination(41732U);
    msg.setDestinationEntity(195U);
    msg.x = 0.567430500449;
    msg.y = 0.74806501778;
    msg.z = 0.873496044804;

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
    msg.setTimeStamp(0.224337563329);
    msg.setSource(47336U);
    msg.setSourceEntity(183U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(66U);
    msg.x = 0.735492225561;
    msg.y = 0.92164096389;
    msg.z = 0.439075499406;

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
    msg.setTimeStamp(0.0728691310762);
    msg.setSource(15962U);
    msg.setSourceEntity(245U);
    msg.setDestination(45612U);
    msg.setDestinationEntity(248U);
    msg.x = 0.929079286492;
    msg.y = 0.814360697711;
    msg.z = 0.32703153161;

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
    msg.setTimeStamp(0.351202520839);
    msg.setSource(19508U);
    msg.setSourceEntity(108U);
    msg.setDestination(54238U);
    msg.setDestinationEntity(64U);
    msg.timeout = 15941U;
    msg.lat = 0.414611959549;
    msg.lon = 0.594070339289;
    msg.z = 0.680419557318;
    msg.z_units = 125U;
    msg.amplitude = 0.84079138918;
    msg.pitch = 0.442871321801;
    msg.speed = 0.388146872532;
    msg.speed_units = 247U;
    msg.custom.assign("FBEGGEHHWVMMWFRYAGZPZSBBBWMUCGSGHWRDUFOATOBBMRHRDPJVGICEVLLSLMBFYDHUKBNYPOQQUOXPXDXQUIATNARQJDHTYEGQJJNCCLTYEUKTCJZAIVXMRALKOBPIKFAXVQXCZQNIIQUTHNZY");

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
    msg.setTimeStamp(0.142730707705);
    msg.setSource(22592U);
    msg.setSourceEntity(250U);
    msg.setDestination(23592U);
    msg.setDestinationEntity(3U);
    msg.timeout = 19980U;
    msg.lat = 0.253156166286;
    msg.lon = 0.887544901538;
    msg.z = 0.0460427542315;
    msg.z_units = 231U;
    msg.amplitude = 0.636587997462;
    msg.pitch = 0.731984222829;
    msg.speed = 0.158435721347;
    msg.speed_units = 146U;
    msg.custom.assign("RJOXZIEBZQBXWSXCLLSUKCIHBRHCHAJTIEZXQMETWZAKXXKWDPYRBOQOMJFVISZFODDWUZJJAWYDTTCDPTBZVCWMQMCDSAJIAKFNBPKLWJTHFHQITXDLWONCQMGYQXLPBFEYEAGUECQWVAYVPXVKTZRLQYLOWGMRKGAIKDLUP");

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
    msg.setTimeStamp(0.00102830031034);
    msg.setSource(20792U);
    msg.setSourceEntity(167U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(77U);
    msg.timeout = 6898U;
    msg.lat = 0.545930284478;
    msg.lon = 0.442581125762;
    msg.z = 0.884388864821;
    msg.z_units = 64U;
    msg.amplitude = 0.455622588994;
    msg.pitch = 0.90511346623;
    msg.speed = 0.291673032713;
    msg.speed_units = 197U;
    msg.custom.assign("MXUQOQSGPDSWVNZMGIZGBHYWHKSNGJBXGX");

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
    msg.setTimeStamp(0.676737766373);
    msg.setSource(55551U);
    msg.setSourceEntity(212U);
    msg.setDestination(7058U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.765200199534);
    msg.setSource(33218U);
    msg.setSourceEntity(185U);
    msg.setDestination(15317U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.96244823257);
    msg.setSource(54049U);
    msg.setSourceEntity(63U);
    msg.setDestination(31185U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.397664754682);
    msg.setSource(29602U);
    msg.setSourceEntity(186U);
    msg.setDestination(17338U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.663517181022;
    msg.lon = 0.708743283427;
    msg.z = 0.503191501229;
    msg.z_units = 123U;
    msg.radius = 0.657228500094;
    msg.duration = 63439U;
    msg.speed = 0.0525950393045;
    msg.speed_units = 121U;
    msg.custom.assign("HJMUFAXRHTYPBNWPMPVZDKUATIGWKKPOYCEVUHFRMMGHSTQKRKXWPWOCKJIDQXWTXJNSIVZIGOHMYBNHPREDJSYHVASMNPBZZUJQDCABWBOOZDBCJGVJZQQNLMACEFQKMFHZYAPAEHLBOCZXVWFDPPILFELSTRFEGDOARUICRRVXUVQVGLDWGIQFTTXNNGSQGSEWELBCJAFLCDLULLIHBXYZQVRIGTRYSBKJSUUXY");

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
    msg.setTimeStamp(0.837254609639);
    msg.setSource(23031U);
    msg.setSourceEntity(0U);
    msg.setDestination(16600U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.376013213325;
    msg.lon = 0.72735919075;
    msg.z = 0.402735484162;
    msg.z_units = 250U;
    msg.radius = 0.516713206499;
    msg.duration = 41858U;
    msg.speed = 0.712634959297;
    msg.speed_units = 52U;
    msg.custom.assign("GAUFDNNSDBPUBWJYKQGZQFTHWIDFPVWPRARDSJROYJHQTGYLURZEIQGRGKVNXLDDMEHSBYBSRNQGAHXMOJEJITCBHZKSMXCPNUCLWJPXLDCKKTYQFIICOOEMCADYMWOVFGAQM");

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
    msg.setTimeStamp(0.528985715653);
    msg.setSource(7817U);
    msg.setSourceEntity(200U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.946501474208;
    msg.lon = 0.0808098511253;
    msg.z = 0.759140074185;
    msg.z_units = 244U;
    msg.radius = 0.313530147177;
    msg.duration = 55519U;
    msg.speed = 0.444532812254;
    msg.speed_units = 182U;
    msg.custom.assign("PKTBRAZUHOQQXVIRXNYFEQOCLGMILXWIUKFHTVDIAOOJBVDMYNSGCXSRZTBBBGHEEZBAX");

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
    msg.setTimeStamp(0.160647800395);
    msg.setSource(13480U);
    msg.setSourceEntity(59U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(112U);
    msg.timeout = 22218U;
    msg.flags = 60U;
    msg.lat = 0.409539269228;
    msg.lon = 0.216484658528;
    msg.start_z = 0.171819934102;
    msg.start_z_units = 104U;
    msg.end_z = 0.708791693494;
    msg.end_z_units = 218U;
    msg.radius = 0.280816681773;
    msg.speed = 0.958434560504;
    msg.speed_units = 13U;
    msg.custom.assign("FYCUQWYVUGXIDWTHECSYKTXSNEJQNNHTPWTKDYWPOBLGFLSSJDVFQEORVJIBNZQJCBBXUHMDRBXUAQAPUZPMJMIZBWMSFDZPJQYRWXB");

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
    msg.setTimeStamp(0.682181761871);
    msg.setSource(56893U);
    msg.setSourceEntity(162U);
    msg.setDestination(57082U);
    msg.setDestinationEntity(203U);
    msg.timeout = 5747U;
    msg.flags = 246U;
    msg.lat = 0.107111575036;
    msg.lon = 0.154294938969;
    msg.start_z = 0.964470103225;
    msg.start_z_units = 208U;
    msg.end_z = 0.100774590538;
    msg.end_z_units = 19U;
    msg.radius = 0.195991267148;
    msg.speed = 0.847868712497;
    msg.speed_units = 122U;
    msg.custom.assign("SYOESFYJUOBKOHKXGVEXXKIGOEORZLBAKMXRFSRMWPMZUFTHNEFIHPKXCCIIAUFH");

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
    msg.setTimeStamp(0.677488759207);
    msg.setSource(3354U);
    msg.setSourceEntity(254U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(49U);
    msg.timeout = 13955U;
    msg.flags = 76U;
    msg.lat = 0.0313946115803;
    msg.lon = 0.706078425558;
    msg.start_z = 0.580789694496;
    msg.start_z_units = 183U;
    msg.end_z = 0.478194801292;
    msg.end_z_units = 154U;
    msg.radius = 0.234953308341;
    msg.speed = 0.0780153924738;
    msg.speed_units = 161U;
    msg.custom.assign("CUHDYYLPGOYGEEJEICJMIVORXZPFSJAQOLFBPTHIPLVFQXQNXCVKAW");

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
    msg.setTimeStamp(0.952102476481);
    msg.setSource(34340U);
    msg.setSourceEntity(212U);
    msg.setDestination(24086U);
    msg.setDestinationEntity(51U);
    msg.timeout = 16455U;
    msg.lat = 0.31524464955;
    msg.lon = 0.78916693165;
    msg.z = 0.781691727188;
    msg.z_units = 126U;
    msg.speed = 0.263415696462;
    msg.speed_units = 21U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.219203278848;
    tmp_msg_0.y = 0.478184668965;
    tmp_msg_0.z = 0.880204153267;
    tmp_msg_0.t = 0.147625381045;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XHJEMWJNESWREEDCGLRCKNNKPPQOWRIZVCAPAAOAOZYJRNQJQESQCYZXFPKIYEHHMDCDFFOUKOVPHVZBCYWPRVVFISJNTCKDTWQBWVHTVQYGGKTDZUHWLBMZQOMRSTEZWOOVTKWZDNBDXADMBSRSLYKDTENEUXAYJLLFPHITSALUCLAUMMQIBBIZFYZGBXMUG");

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
    msg.setTimeStamp(0.0107975700546);
    msg.setSource(38172U);
    msg.setSourceEntity(105U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(26U);
    msg.timeout = 41679U;
    msg.lat = 0.139260378972;
    msg.lon = 0.207423700948;
    msg.z = 0.281497348704;
    msg.z_units = 234U;
    msg.speed = 0.933377434211;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.306233722044;
    tmp_msg_0.y = 0.00988953760349;
    tmp_msg_0.z = 0.801587134472;
    tmp_msg_0.t = 0.0622724878989;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SHRDKJXMGZYJQPAPWVHJUFAFOVJGDJPMVHTBIKVKHXLQMZOUAHTONRBLXUROLZMPLHIRZMQADGGXBZFGNGSQUGIZZUMCRTVLGWBAEYLKISJTLLNRTCMRYTJSMITOMVCEQPUBBSRVDVVJDCKOZXQNEQXPDCWABYHNCBDQIWEBXYRRCZCXFCSOPUNYMTPKDAIUBKFFKWYSOXEEWSEUPHYYEZNCADSIGFLKFEPFHTLWYTFWINAXJ");

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
    msg.setTimeStamp(0.297061168792);
    msg.setSource(26262U);
    msg.setSourceEntity(224U);
    msg.setDestination(970U);
    msg.setDestinationEntity(25U);
    msg.timeout = 56490U;
    msg.lat = 0.372934751526;
    msg.lon = 0.442331040167;
    msg.z = 0.728805823249;
    msg.z_units = 115U;
    msg.speed = 0.965400611479;
    msg.speed_units = 100U;
    msg.custom.assign("YPMOLSJXZENRTWBIXIBEFGXUMGOYPNOIKSYDDUYGWXJZXITVAXHSLJYJPCLCJROCLNSDUNQKFCFHUFUBVUAZUDKQRGDMMBQAKVXKFRZFKV");

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
    msg.setTimeStamp(0.110679632342);
    msg.setSource(50340U);
    msg.setSourceEntity(81U);
    msg.setDestination(59270U);
    msg.setDestinationEntity(10U);
    msg.x = 0.736421980975;
    msg.y = 0.366414334723;
    msg.z = 0.874085758922;
    msg.t = 0.553858524047;

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
    msg.setTimeStamp(0.914537587303);
    msg.setSource(37850U);
    msg.setSourceEntity(228U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(66U);
    msg.x = 0.236431873784;
    msg.y = 0.558272430255;
    msg.z = 0.0552765004679;
    msg.t = 0.116164728065;

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
    msg.setTimeStamp(0.337407675177);
    msg.setSource(43503U);
    msg.setSourceEntity(31U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(176U);
    msg.x = 0.0155668135014;
    msg.y = 0.742740581577;
    msg.z = 0.245325325087;
    msg.t = 0.770444619296;

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
    msg.setTimeStamp(0.638214912974);
    msg.setSource(52035U);
    msg.setSourceEntity(198U);
    msg.setDestination(35656U);
    msg.setDestinationEntity(2U);
    msg.timeout = 52987U;
    msg.name.assign("TSLHSRPWLFSRLJYSLNMRWQCMBVHATEWPNGRMBGMVKDAEAMVGVONSREBGIARTWJUIUSRGKQJZKZAYHRSJJZQCBPOLPFCRDKHYWVGCIFXIKGWOXMAQHIGFBDUKFUJLBPDYSHCEFLKTDFCQJVHWJVEQXIEEBUNJZKNPHYINDESUJANLWXFPNYZEGPZ");
    msg.custom.assign("TBMFOMHFUCSJHDGVWEXAAPZTZZVBFVRRQHFJHHEUOCZEFLFXQBYLEXOVGTBWTNNTTSEGAYVERYFMSMGAVPFDAELDZOVXKHCMTXKAEFRPWLIXPRIMDJNBYJCNCDLGSNNUCMRPDDUZYIGBJIKCQCWVXRJNQSKOIAHIVHGAOJMQHQDBWPUECDPEYJRVNUQUZNPXYATUOSILAIDZSW");

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
    msg.setTimeStamp(0.568286484931);
    msg.setSource(38007U);
    msg.setSourceEntity(194U);
    msg.setDestination(36997U);
    msg.setDestinationEntity(230U);
    msg.timeout = 64368U;
    msg.name.assign("RYAZDHMUQQFOPNSXVPJRLOWKMLNTBWNWFMCXUWBGFCYMSDSCEIZDCVKXAHUHKVBYFCFRYUXSEMFZVBAURFYRIDLYWBVJLONVLXYNZDLVAOGFPBPPILQPARMGIGUOYPVTZDKEHFQTTWDRACEJTMPDYXERXKIUATELDLZQXCIOGRPTBHIZEQKMIKJEYKMHVJGGUDKQPZOBUGAKIQJNWNUQAXVETSIFOZWJJSXCCAEHZBWSJJNGNSNLT");
    msg.custom.assign("FUGESUUGYOPKHPYSAAOKKADJQAGDRPRTNWGLHCVRBXTISVMHVKAXZ");

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
    msg.setTimeStamp(0.960860582991);
    msg.setSource(28999U);
    msg.setSourceEntity(172U);
    msg.setDestination(23242U);
    msg.setDestinationEntity(14U);
    msg.timeout = 42178U;
    msg.name.assign("THCDEERJFHECWUMNIDRTAZZIJRBXFTETJQPEGXKMDAEGRINZURKPHVPCLBTFE");
    msg.custom.assign("MMLHSNMEGHOGXTLAACKYIEQSZGZQCQKCUYJYLCGRYZGPXVXUIWUWJPOFJHZVOYYZEAOJSHAFXVPNHKSSCUMBSLFAHIIDMVIAEKUBLQGTOKNEVRLWXVDNPFYFPTWEWWLQFGTNARIBYMURRRCKHMXEEWLDROJPPTMPUSRDMDFIVIVCKFTQEWDKSPJWYZGXTIDRCQGJOZBHGQZHMNOBV");

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
    msg.setTimeStamp(0.632616167884);
    msg.setSource(29472U);
    msg.setSourceEntity(143U);
    msg.setDestination(59695U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.0135158553991;
    msg.lon = 0.118838241968;
    msg.z = 0.0127535822261;
    msg.z_units = 16U;
    msg.speed = 0.793797590024;
    msg.speed_units = 57U;
    msg.start_time = 0.820192236047;
    msg.custom.assign("POUGTERVZFTOGZSJDOUMVGRBBHAZBOFCGQDDAQHQFMODSRMLTONKEHE");

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
    msg.setTimeStamp(0.972255161272);
    msg.setSource(3188U);
    msg.setSourceEntity(46U);
    msg.setDestination(61908U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.1054913349;
    msg.lon = 0.619360162185;
    msg.z = 0.794687318433;
    msg.z_units = 180U;
    msg.speed = 0.301780463461;
    msg.speed_units = 144U;
    msg.start_time = 0.83412153962;
    msg.custom.assign("CNKXZISACAGMZVKXWYVNYBIIGRXZRSFHFYQJLXWPJTLJATRVFTFLLOCFYNSRIESJEDDHOKDPBMKMUDFQWJDKXUBCGDJKXWSSYMZGJDJGFQVPZKCLOQAEXOODYQLLEQIBSNDRSJBRWDLXXAWGTTULHRBUCBKZQNOMTEM");

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
    msg.setTimeStamp(0.632640435931);
    msg.setSource(46777U);
    msg.setSourceEntity(23U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.768998700436;
    msg.lon = 0.528050660438;
    msg.z = 0.168442077393;
    msg.z_units = 204U;
    msg.speed = 0.931684017711;
    msg.speed_units = 106U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.113048634867;
    tmp_msg_0.y = 0.0827095658607;
    tmp_msg_0.z = 0.566680441581;
    tmp_msg_0.t = 0.414805800714;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.853007566186;
    msg.custom.assign("HLHTODWFDTNANFMWBKUTEQEYIKOWBYYMZOKJOTNCLZHXCKNNYXQNXJZPIAFPJQPSR");

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
    msg.setTimeStamp(0.0537661030389);
    msg.setSource(35226U);
    msg.setSourceEntity(40U);
    msg.setDestination(5258U);
    msg.setDestinationEntity(48U);
    msg.vid = 57868U;
    msg.off_x = 0.750498848212;
    msg.off_y = 0.72025817408;
    msg.off_z = 0.168743822738;

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
    msg.setTimeStamp(0.235693503294);
    msg.setSource(35341U);
    msg.setSourceEntity(134U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(154U);
    msg.vid = 30472U;
    msg.off_x = 0.0684966203978;
    msg.off_y = 0.597660309508;
    msg.off_z = 0.155695469479;

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
    msg.setTimeStamp(0.472044655693);
    msg.setSource(5688U);
    msg.setSourceEntity(170U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(227U);
    msg.vid = 21421U;
    msg.off_x = 0.268307917995;
    msg.off_y = 0.636176512727;
    msg.off_z = 0.89357810989;

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
    msg.setTimeStamp(0.345725558567);
    msg.setSource(2256U);
    msg.setSourceEntity(28U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.143515717612);
    msg.setSource(12831U);
    msg.setSourceEntity(150U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.581965984791);
    msg.setSource(8900U);
    msg.setSourceEntity(28U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.709535771477);
    msg.setSource(45747U);
    msg.setSourceEntity(61U);
    msg.setDestination(53849U);
    msg.setDestinationEntity(158U);
    msg.mid = 49897U;

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
    msg.setTimeStamp(0.43083263822);
    msg.setSource(44263U);
    msg.setSourceEntity(28U);
    msg.setDestination(31037U);
    msg.setDestinationEntity(52U);
    msg.mid = 42987U;

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
    msg.setTimeStamp(0.564155578696);
    msg.setSource(6236U);
    msg.setSourceEntity(47U);
    msg.setDestination(45621U);
    msg.setDestinationEntity(236U);
    msg.mid = 33399U;

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
    msg.setTimeStamp(0.467691570242);
    msg.setSource(62520U);
    msg.setSourceEntity(71U);
    msg.setDestination(3054U);
    msg.setDestinationEntity(155U);
    msg.state = 186U;
    msg.eta = 42572U;
    msg.info.assign("TIIYFYZYOAWABCETVQMJIKKJHGUQEGRDV");

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
    msg.setTimeStamp(0.724221893983);
    msg.setSource(22425U);
    msg.setSourceEntity(31U);
    msg.setDestination(61925U);
    msg.setDestinationEntity(119U);
    msg.state = 188U;
    msg.eta = 24897U;
    msg.info.assign("BFCSFAXHTDXADTSVLMDREFIJFVSRCUJSJOABLCYPLDYLNYJZFQHVMBNOKTVBDGXCFUBKWXQMPLVYLPTEXICUGKCWRZPCWERKOGQIRBSZHQWAPEINBMFOXQYNMLQWHRUTZXQNSDRZZLVKSKWPBZNVGIAKJXGGOIFVFIWIIXUCEGOSCRYJTUKDEGKNH");

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
    msg.setTimeStamp(0.918894645449);
    msg.setSource(20624U);
    msg.setSourceEntity(136U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(56U);
    msg.state = 224U;
    msg.eta = 25338U;
    msg.info.assign("SSQKUYFUECVJBKHQDZRADZVDIALCZNUJJHODSKQQBXMNFONXEPZMHPRLFGWGIAZZJNYWUVJGWSOZISLTDDBHVWJTHNGIZCHIYTADNZELKPUXELHVHYGBVSBNXEEISQTCWYUROVWHXRQMIOOBXGKOVJGAPMMPVWLBKQMTEKMNFKQXTJEMJCEXZXQGADFRPIKFTTYLCQYI");

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
    msg.setTimeStamp(0.939514336375);
    msg.setSource(35014U);
    msg.setSourceEntity(118U);
    msg.setDestination(40812U);
    msg.setDestinationEntity(214U);
    msg.system = 29695U;
    msg.duration = 10376U;
    msg.speed = 0.960239307084;
    msg.speed_units = 199U;
    msg.x = 0.919160749414;
    msg.y = 0.90981570537;
    msg.z = 0.863006390224;
    msg.z_units = 63U;

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
    msg.setTimeStamp(0.951971801721);
    msg.setSource(42009U);
    msg.setSourceEntity(25U);
    msg.setDestination(3812U);
    msg.setDestinationEntity(155U);
    msg.system = 56028U;
    msg.duration = 50198U;
    msg.speed = 0.251168270662;
    msg.speed_units = 231U;
    msg.x = 0.0563765688289;
    msg.y = 0.859423954298;
    msg.z = 0.756089177566;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.70996301741);
    msg.setSource(33188U);
    msg.setSourceEntity(135U);
    msg.setDestination(21754U);
    msg.setDestinationEntity(107U);
    msg.system = 29250U;
    msg.duration = 63225U;
    msg.speed = 0.897413101943;
    msg.speed_units = 206U;
    msg.x = 0.231365794871;
    msg.y = 0.528677564975;
    msg.z = 0.340891154982;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.983745930762);
    msg.setSource(43955U);
    msg.setSourceEntity(21U);
    msg.setDestination(46561U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.788155590989;
    msg.lon = 0.704048915842;
    msg.speed = 0.915415393139;
    msg.speed_units = 139U;
    msg.duration = 3327U;
    msg.sys_a = 7376U;
    msg.sys_b = 7571U;
    msg.move_threshold = 0.232029898211;

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
    msg.setTimeStamp(0.638140760854);
    msg.setSource(39721U);
    msg.setSourceEntity(6U);
    msg.setDestination(8472U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.501381613863;
    msg.lon = 0.565227204929;
    msg.speed = 0.357109054897;
    msg.speed_units = 95U;
    msg.duration = 15182U;
    msg.sys_a = 4671U;
    msg.sys_b = 35341U;
    msg.move_threshold = 0.212233609034;

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
    msg.setTimeStamp(0.544769881681);
    msg.setSource(14167U);
    msg.setSourceEntity(62U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.959509114039;
    msg.lon = 0.327007694263;
    msg.speed = 0.933050930582;
    msg.speed_units = 13U;
    msg.duration = 27007U;
    msg.sys_a = 22629U;
    msg.sys_b = 34759U;
    msg.move_threshold = 0.454805948544;

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
    msg.setTimeStamp(0.609191211685);
    msg.setSource(58297U);
    msg.setSourceEntity(167U);
    msg.setDestination(21276U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.492729219799;
    msg.lon = 0.936877936569;
    msg.z = 0.612680256726;
    msg.z_units = 164U;
    msg.speed = 0.352008156299;
    msg.speed_units = 202U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.692669536721;
    tmp_msg_0.lon = 0.125419567984;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FZSQOCGLHPXZYNBXAVWJCPSRTLMWMECHTTOBFDQKEPGAZDDBSUBNXMFOPQTBEEVITVQODCHOSEJVCJXJKANUWDXNMQVPLTYYPMFRIKNEJEPLIWYXWRHAONHEXBGHWRYFGMYLFGSMAWCIBQFKFKQJYPEFGZZMOMDPSUKLBYDBIRJQVHJGCXSITDCRGRRTBLZAVUIYWSUAAGTNDNJYLUUCNWZMZHRRU");

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
    msg.setTimeStamp(0.324125849493);
    msg.setSource(44936U);
    msg.setSourceEntity(96U);
    msg.setDestination(24616U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.857333773476;
    msg.lon = 0.0915468756219;
    msg.z = 0.250774164942;
    msg.z_units = 145U;
    msg.speed = 0.986109481536;
    msg.speed_units = 253U;
    msg.custom.assign("JFHJJHMLUKEC");

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
    msg.setTimeStamp(0.0333418883916);
    msg.setSource(10695U);
    msg.setSourceEntity(146U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.606807938424;
    msg.lon = 0.19271352907;
    msg.z = 0.148725598538;
    msg.z_units = 83U;
    msg.speed = 0.957002438413;
    msg.speed_units = 232U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.980186914006;
    tmp_msg_0.lon = 0.931071126243;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FQYXZBEEFUUEPQBOBZWWIIUAXTQFYJZAMGMLRHXTHMLGMDDXXVSGAPSNHZORLSACGASTIKDFSRDNCYVMTLRTKJSJPFLFRUCDLRCWUKCZMBOWYBPXVOXEAAFHPTWONWKJJNZIHUCZSUHRHAURRNEOMCBYQKNOCJIEFQLSPAPOQQTKYV");

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
    msg.setTimeStamp(0.402481714728);
    msg.setSource(31433U);
    msg.setSourceEntity(168U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.31694104221;
    msg.lon = 0.0189124981741;

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
    msg.setTimeStamp(0.0465023283439);
    msg.setSource(52223U);
    msg.setSourceEntity(154U);
    msg.setDestination(60344U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.590685504118;
    msg.lon = 0.984209007898;

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
    msg.setTimeStamp(0.205767965201);
    msg.setSource(1110U);
    msg.setSourceEntity(219U);
    msg.setDestination(49989U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.85901568324;
    msg.lon = 0.421753755352;

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
    msg.setTimeStamp(0.662852474853);
    msg.setSource(47418U);
    msg.setSourceEntity(61U);
    msg.setDestination(44103U);
    msg.setDestinationEntity(167U);
    msg.timeout = 733U;
    msg.lat = 0.226530274642;
    msg.lon = 0.162521144037;
    msg.z = 0.87908603176;
    msg.z_units = 232U;
    msg.pitch = 0.756461138874;
    msg.amplitude = 0.114334599997;
    msg.duration = 49163U;
    msg.speed = 0.125692287077;
    msg.speed_units = 253U;
    msg.radius = 0.00663595774446;
    msg.direction = 166U;
    msg.custom.assign("JIMYPOIKCVHSJFPXNWFYGPFVHVAWEFDRNTQEWPQHOEVNXUIBRZBJQRZKDYIAX");

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
    msg.setTimeStamp(0.564316522718);
    msg.setSource(1804U);
    msg.setSourceEntity(183U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(100U);
    msg.timeout = 34199U;
    msg.lat = 0.475958070077;
    msg.lon = 0.783617782542;
    msg.z = 0.583546483666;
    msg.z_units = 37U;
    msg.pitch = 0.214252440935;
    msg.amplitude = 0.731689740083;
    msg.duration = 14656U;
    msg.speed = 0.752962429338;
    msg.speed_units = 59U;
    msg.radius = 0.943349998681;
    msg.direction = 83U;
    msg.custom.assign("VFDSRYMLFSJYSDLCPPBBULCYOZCVKKGEBAQJKAVFRXROIDCTJQIJPHSZXLPWREXYOICKYULHVWEWQKKBNYDPCKQBQPFWZXMGWMUFQWXFIYVBHUZRIMVEANSTLIROHXEJUETNAGGUMCXUGHNLAZEAFZUGTWZHRCHNAMGHLPFODLVUTITFKODQUVDZAZSIJVWWQ");

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
    msg.setTimeStamp(0.775391615966);
    msg.setSource(33814U);
    msg.setSourceEntity(29U);
    msg.setDestination(62121U);
    msg.setDestinationEntity(144U);
    msg.timeout = 25078U;
    msg.lat = 0.590588331005;
    msg.lon = 0.318562961386;
    msg.z = 0.0971422281116;
    msg.z_units = 84U;
    msg.pitch = 0.026982047621;
    msg.amplitude = 0.566499764148;
    msg.duration = 54213U;
    msg.speed = 0.54776062402;
    msg.speed_units = 105U;
    msg.radius = 0.877495305717;
    msg.direction = 23U;
    msg.custom.assign("AODDOKKPPGDSGNUBNSWDCPATFCLVLPAQWQICXBNIATJSXGIWJVFGQHYZCLUQDTOPXVTGUEWFZJQUIKBBIMAQBYPKGWJMWORHTPMQRJYHPUUTBE");

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
    msg.setTimeStamp(0.521193839935);
    msg.setSource(52526U);
    msg.setSourceEntity(17U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("MFBXOHETRACDWVKWLZBZYUKQGMSQQNZETMIPJMUKHRGDNJFDZNTLQERHULNWTECFOMWRCODDYIOITTKICTSJPBBADHKGVBXIY");
    msg.reference_frame = 186U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61044U;
    tmp_msg_0.off_x = 0.0353178937309;
    tmp_msg_0.off_y = 0.623569613627;
    tmp_msg_0.off_z = 0.272285461872;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CJBJDAZSEPVGCDDPJLVHTWFZKWLBFFGNXCYCGLZAHBMINAIJATUZGIDVUIDJKDKFGOQQOWKHHNXMIGEHAETXQMWLTCFYCIGSKAAXKYOYPZEPAHNKANNGXZJXKOTEREPBRTRFPOVESTLNXFSVNBSRSCQPYBWVRLZOKSLJYGPTVQVBYTMO");

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
    msg.setTimeStamp(0.651412036223);
    msg.setSource(23064U);
    msg.setSourceEntity(119U);
    msg.setDestination(26012U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("SOOZPINVJDUYJLMYFTLFLYHOXSMWHOSOLSFIKQDEZUIJFNBNVMASLTGDRKBMEIUQWGAYQXJXLWYJEWOARHCGVDWXWOSURBNRDBAGYKTPCRCIJQGPMVVKQHRXNRPSJDPCGTKDAYKAMFEVAHMTBBGNCGKDBUQPIZUHEEXBUHVJCNOFPGQGXSPTXPXMHZOWSDZTILFEAVUOPWQCENFEMZBIRIUCYWTYZALEVARVZSNLKCWDRZKBUJMJQKXT");
    msg.reference_frame = 59U;
    msg.custom.assign("MWHLZEGELBHXUKYMHCNQXPRSXOYTOIOCQVNNEKZDUKKAAJNMAVSRBFZUWBLFFFCOZXCMGDQTCJDPB");

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
    msg.setTimeStamp(0.616876573893);
    msg.setSource(16618U);
    msg.setSourceEntity(61U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(138U);
    msg.formation_name.assign("OFOCLCLCFRXZARZCQGFIGUMDFXGCVPKHZTVNEHIXCVDUGKCATOBGKMPQJVWYZGJDPEDXOMJQKEABBXJUHIBTVDAARZYHXNGERFBTRNOYYCXOENWORINAQGWAHSNFWLCDBI");
    msg.reference_frame = 232U;
    msg.custom.assign("BVUCXXPYMJMSTQXBTNORLYVCQCWHABNMVAZUGQRPIJYALTTBJIBFTGKEPBSPUHNCQWSKJHLYXIEEWLZWXFOBOSYSGDHRHVZZTWKJAMRFIHKVDJYJTFDAKCKWAGOEEHTGQKWYVNYBTWQNPOUVLWFPAOIOEHYRSYEDRAJFALWZFJMGEPEXQFHLMUPAUCDNMUXBZGDXIZIKZKROPOBNZCQCREDRFSHVDLVQIMFIMOUDPCGCINSKZSNMULNVGT");

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
    msg.setTimeStamp(0.193705822422);
    msg.setSource(26551U);
    msg.setSourceEntity(147U);
    msg.setDestination(14567U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("BUCQKNKAAGUYQCFRVTBEHG");
    msg.formation_name.assign("LBMYTKMRSKLIVQTBEQFLKVCZFZWGZLMKEUTLERNDRUZGMRXAOKGYLJVHIOANYZHDAUNQTWGXOEIZGCCVOTQLMEBHWGRWRNSWFJOMMPJQNNHTQFXJEFZIYPKJYRGXRBWQUDVNXFVUCIMOZYAIKIEXYCOUADHDIUXAJNHIZCNBDPGHLPUBBCTIYKSLRMQSCQXAFSSDPVHSTSFBTBVXJPHSWMJGPBWCEOKADSU");
    msg.plan_id.assign("TVNAGQMJEIHUOCKJBTVHUWEMWXBIESRWXAFSNUVXWJUXHCTATLXFIQTQDMSHBLJBXFANQHELSHWGDJMVUMKICRJJKWZVDKFTQYYCAZAOZSPUHGHIIBGBOVZAWOOPLIKZRIZUQUBYKXTPYZDDIXRNYADQPPYVDNGCYRDWVELFLMGCNCRDNYTOKNPMEQFTMOLCZSFRPFXZJXWWEOOESFZFHSLQBDRT");
    msg.description.assign("ULYFFOCZPFVLSRPQHPQOECOTVOVOYCZRIIWFCIOVHGQBSWYMQNNAOGKLINTVJDWCVHFERDPJDMTBNXKURHBWDZLUXEPBICBQDMMZCINFHQ");
    msg.leader_speed = 0.380692974403;
    msg.leader_bank_lim = 0.700533911457;
    msg.pos_sim_err_lim = 0.873062544881;
    msg.pos_sim_err_wrn = 0.489507193882;
    msg.pos_sim_err_timeout = 11679U;
    msg.converg_max = 0.19788393383;
    msg.converg_timeout = 36447U;
    msg.comms_timeout = 3043U;
    msg.turb_lim = 0.101248543843;
    msg.custom.assign("ZHQGSBAZCEYVCNJSGDSNIZYBQDXSQWHQVBKNHVULJZFZGZZSEMJPNVOWFXVDUOXISOVIKBURNNSPCKIAZEEGSRSOUPRDMFYYBEMMMOABUYDDDOEPJCUPTTYCIELAHQGBJFULTCKPJDTCVWBKGIOFJYWYZZQONVTPVVWGJXLWSTEEAQBTKGLLGCRLNMORMPINEALAPTFKCQMTKMYTURHDPRAWWMRX");

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
    msg.setTimeStamp(0.992602118875);
    msg.setSource(55508U);
    msg.setSourceEntity(140U);
    msg.setDestination(2993U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("COHCNULFNJFSZHJDUIYWOKHCSKBTZZNLRVXNHWLRODBEYRTSHSASAJEKNPMHITGENPNUDQJWVWEBBBOYJLPEJEIWZEGJCAMPWYAJHDFRFGZEECLBTUXLCVPLURIDXGGDNVKCYMPEAMHOV");
    msg.formation_name.assign("OXUUUPRAQYHDFYPPWKVCNFBEXLVLYUQMHZXDRLRFAQZVIEUOAMMJPKQWFIVSVRZGOHTIRVSHMPDSIHTZIDAADVYJUPXKKKJFPNXDHVNMSZHBJCLSOEGITHWF");
    msg.plan_id.assign("ZLDGDOHCVHQSKFIU");
    msg.description.assign("VGCQWZPLVNFURNXEPFWVLSMAZMOISJKBYLDWOZLQUJPOYAFQBKVPEQZEFGZTVQMKYQRSBURKAOYTAKBITLDBLFUCSZWYDTRNZLNOHKHXXDIBWNBCPUHOBZMJMJAXMTDYLHHVPDKIXTKHOWCARQKWGPTDFNIDRMGTMUBSFNPCIOPLGXSREIQHAJYKGCCYCXJHESJEUHTUDVMVCIFBZJYLUYINSXDFWQ");
    msg.leader_speed = 0.373681721878;
    msg.leader_bank_lim = 0.0394537011823;
    msg.pos_sim_err_lim = 0.00848734679909;
    msg.pos_sim_err_wrn = 0.455709854729;
    msg.pos_sim_err_timeout = 55252U;
    msg.converg_max = 0.707154930033;
    msg.converg_timeout = 40705U;
    msg.comms_timeout = 45933U;
    msg.turb_lim = 0.734047641003;
    msg.custom.assign("OKVPCNPRYHNPFAPEIUWUIZMYZKKBCMSFYRLGFITLCZAPIZFCEDKYCGYZRUGINBXUGOZJSVQKAULJLOLRQHJPZVQCHTASGSPUNWTQWQDSXIRSYRUOKGWLDCENMHDVVUVYUWYBJDMQXGJNZSBALCOTKXXWAXMJJSEEDIHFIADMPECBLBEEBTEXVDTNQJPTQWOYHXNZOAFLOCDZRHURGFJQXSMWIWVYGILFHBHFVSKOMHBWGTRJKNDTFKBAPXNM");

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
    msg.setTimeStamp(0.901247486997);
    msg.setSource(39013U);
    msg.setSourceEntity(216U);
    msg.setDestination(39272U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("FEISINJYAJTYHSPEFRUILMQOFKJYUIBYGYBYAAQHKNXEJXGGSWVTTSAYUGWNHTBMYCINDZFEQIKBFCZNMLHNJDDRRSQVQLVCNSGABFNBPVGGSNKVCMDSBRHPCBCPOKRRMADKTTZHJOQPYWUXCIPVCXHZEEJVEWZVGOORMQUQRERDMAQGQJOKFUXLYLWZZKTUCWHWRXLDLUFLHXODGZUWAMIMNVAOPD");
    msg.formation_name.assign("PTIZRQUCKIXGGEIYIWNHGVUCRPRIWVKTLKNJFSUBOMSWSXRFPAUNCOJLPQLQHFKCUIZVLCX");
    msg.plan_id.assign("OWBMBZSCVOFQEGNKBWHAVWMOZ");
    msg.description.assign("VVQAYSQFDYXOJZKVOTOEYXVICASSZRKPIWKUBMAIYNCEMDVRMXLVOQMEUYWMLTETVBSQXITUZXLAPDZBDYGZQLMNEQALHZJHBSUDWSZEDNQFYNNBRWUDGTNYUHHXJIRTVECXWVUADMHGPFEHJOZCLYPWFRGJWBOCPDC");
    msg.leader_speed = 0.349612639815;
    msg.leader_bank_lim = 0.883174035816;
    msg.pos_sim_err_lim = 0.886068393801;
    msg.pos_sim_err_wrn = 0.787627346611;
    msg.pos_sim_err_timeout = 32153U;
    msg.converg_max = 0.360936986157;
    msg.converg_timeout = 26337U;
    msg.comms_timeout = 32846U;
    msg.turb_lim = 0.138554891162;
    msg.custom.assign("KVPXQGTTONZKHGCUBSHXAWLAKMOPWQBBBPGTLBRIQITIZMNJHBZQZCLEFTTPVYIGQRUCKSQZMKZFWRVYGEDIYAEJSMRTODOWTPVCWXIHFMJIMVKBWUAQOJIRXXECBGWRSHPNNLNDMCKRLOVKVCSCUEFSELDVMBXCPAPRJZFPNWYANJIQUXGN");

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
    msg.setTimeStamp(0.451819482732);
    msg.setSource(7097U);
    msg.setSourceEntity(27U);
    msg.setDestination(48942U);
    msg.setDestinationEntity(13U);
    msg.control_src = 17110U;
    msg.control_ent = 57U;
    msg.timeout = 0.354962756464;
    msg.loiter_radius = 0.266096664439;
    msg.altitude_interval = 0.997011677546;

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
    msg.setTimeStamp(0.99879087507);
    msg.setSource(20110U);
    msg.setSourceEntity(213U);
    msg.setDestination(44485U);
    msg.setDestinationEntity(126U);
    msg.control_src = 26221U;
    msg.control_ent = 9U;
    msg.timeout = 0.43241000099;
    msg.loiter_radius = 0.081951322292;
    msg.altitude_interval = 0.472208097614;

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
    msg.setTimeStamp(0.0311438465607);
    msg.setSource(50242U);
    msg.setSourceEntity(239U);
    msg.setDestination(32633U);
    msg.setDestinationEntity(21U);
    msg.control_src = 55395U;
    msg.control_ent = 211U;
    msg.timeout = 0.093933659087;
    msg.loiter_radius = 0.975781504729;
    msg.altitude_interval = 0.712113764382;

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
    msg.setTimeStamp(0.151920493589);
    msg.setSource(17919U);
    msg.setSourceEntity(230U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(163U);
    msg.flags = 146U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.837689876863;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.145556001052;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.919993404406;
    msg.lon = 0.174928395659;
    msg.radius = 0.42280128497;

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
    msg.setTimeStamp(0.713984628126);
    msg.setSource(15317U);
    msg.setSourceEntity(19U);
    msg.setDestination(42597U);
    msg.setDestinationEntity(126U);
    msg.flags = 31U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.432675989433;
    tmp_msg_0.speed_units = 18U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.185272284619;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.921964787499;
    msg.lon = 0.522210408727;
    msg.radius = 0.756348753105;

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
    msg.setTimeStamp(0.744229083436);
    msg.setSource(12496U);
    msg.setSourceEntity(35U);
    msg.setDestination(64751U);
    msg.setDestinationEntity(251U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0475494747087;
    tmp_msg_0.speed_units = 133U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.65631587037;
    tmp_msg_1.z_units = 71U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.875264760759;
    msg.lon = 0.0268431840034;
    msg.radius = 0.00459852462367;

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
    msg.setTimeStamp(0.0379002463866);
    msg.setSource(12728U);
    msg.setSourceEntity(113U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(53U);
    msg.control_src = 21078U;
    msg.control_ent = 119U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.528191042577;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.676194821049;
    tmp_tmp_msg_0_1.z_units = 135U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.195701147351;
    tmp_msg_0.lon = 0.7250453132;
    tmp_msg_0.radius = 0.955171087862;
    msg.reference.set(tmp_msg_0);
    msg.state = 95U;
    msg.proximity = 33U;

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
    msg.setTimeStamp(0.542641163183);
    msg.setSource(9896U);
    msg.setSourceEntity(201U);
    msg.setDestination(24227U);
    msg.setDestinationEntity(11U);
    msg.control_src = 62486U;
    msg.control_ent = 87U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 49U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.75015428506;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.66914581328;
    tmp_tmp_msg_0_1.z_units = 48U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.489193604902;
    tmp_msg_0.lon = 0.631202462383;
    tmp_msg_0.radius = 0.0517392508691;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.320300710472);
    msg.setSource(9576U);
    msg.setSourceEntity(187U);
    msg.setDestination(25293U);
    msg.setDestinationEntity(209U);
    msg.control_src = 22561U;
    msg.control_ent = 115U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0124668780412;
    tmp_tmp_msg_0_0.speed_units = 40U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0014535646083;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.54160612503;
    tmp_msg_0.lon = 0.101413935979;
    tmp_msg_0.radius = 0.188360723927;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 93U;

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
    msg.setTimeStamp(0.835685967759);
    msg.setSource(42607U);
    msg.setSourceEntity(137U);
    msg.setDestination(56464U);
    msg.setDestinationEntity(157U);
    msg.ax_cmd = 0.0505682645964;
    msg.ay_cmd = 0.462928946983;
    msg.az_cmd = 0.187145112542;
    msg.ax_des = 0.765661553359;
    msg.ay_des = 0.863496974915;
    msg.az_des = 0.709114719347;
    msg.virt_err_x = 0.667022932553;
    msg.virt_err_y = 0.443948678395;
    msg.virt_err_z = 0.141156790677;
    msg.surf_fdbk_x = 0.693650726724;
    msg.surf_fdbk_y = 0.324891861803;
    msg.surf_fdbk_z = 0.282651495262;
    msg.surf_unkn_x = 0.648328882591;
    msg.surf_unkn_y = 0.622548095125;
    msg.surf_unkn_z = 0.838786536563;
    msg.ss_x = 0.336978209818;
    msg.ss_y = 0.506137806244;
    msg.ss_z = 0.719139496718;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JEEINIXJFLRRFOCDENALUGSXMKENDUFRTJFBBPPJSTGRAOEPHQ");
    tmp_msg_0.dist = 0.637105939862;
    tmp_msg_0.err = 0.732801263287;
    tmp_msg_0.ctrl_imp = 0.666481699371;
    tmp_msg_0.rel_dir_x = 0.360961645915;
    tmp_msg_0.rel_dir_y = 0.338449445535;
    tmp_msg_0.rel_dir_z = 0.206121828053;
    tmp_msg_0.err_x = 0.00715597945274;
    tmp_msg_0.err_y = 0.488690005666;
    tmp_msg_0.err_z = 0.930415521819;
    tmp_msg_0.rf_err_x = 0.391013163988;
    tmp_msg_0.rf_err_y = 0.637337492644;
    tmp_msg_0.rf_err_z = 0.464279276105;
    tmp_msg_0.rf_err_vx = 0.66950701211;
    tmp_msg_0.rf_err_vy = 0.0951160433523;
    tmp_msg_0.rf_err_vz = 0.353078027857;
    tmp_msg_0.ss_x = 0.840619467952;
    tmp_msg_0.ss_y = 0.5770198506;
    tmp_msg_0.ss_z = 0.723892343387;
    tmp_msg_0.virt_err_x = 0.866767667606;
    tmp_msg_0.virt_err_y = 0.632399402118;
    tmp_msg_0.virt_err_z = 0.0713299324206;
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
    msg.setTimeStamp(0.967758692902);
    msg.setSource(22702U);
    msg.setSourceEntity(23U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(74U);
    msg.ax_cmd = 0.863478633047;
    msg.ay_cmd = 0.824305694917;
    msg.az_cmd = 0.746554715598;
    msg.ax_des = 0.849102338181;
    msg.ay_des = 0.662841102338;
    msg.az_des = 0.677939915364;
    msg.virt_err_x = 0.789256889171;
    msg.virt_err_y = 0.41270599983;
    msg.virt_err_z = 0.412795190573;
    msg.surf_fdbk_x = 0.562911043445;
    msg.surf_fdbk_y = 0.935270766697;
    msg.surf_fdbk_z = 0.400662112935;
    msg.surf_unkn_x = 0.514118142824;
    msg.surf_unkn_y = 0.593696642606;
    msg.surf_unkn_z = 0.180430731764;
    msg.ss_x = 0.0508212361215;
    msg.ss_y = 0.989885840821;
    msg.ss_z = 0.929952261998;

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
    msg.setTimeStamp(0.352433127943);
    msg.setSource(12506U);
    msg.setSourceEntity(50U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.995163230028;
    msg.ay_cmd = 0.544605538368;
    msg.az_cmd = 0.863286024733;
    msg.ax_des = 0.903073343983;
    msg.ay_des = 0.365531738545;
    msg.az_des = 0.249135573245;
    msg.virt_err_x = 0.111279081311;
    msg.virt_err_y = 0.381300306886;
    msg.virt_err_z = 0.184904259381;
    msg.surf_fdbk_x = 0.894933271952;
    msg.surf_fdbk_y = 0.625909440949;
    msg.surf_fdbk_z = 0.524607703026;
    msg.surf_unkn_x = 0.717927783119;
    msg.surf_unkn_y = 0.257190795851;
    msg.surf_unkn_z = 0.258215864547;
    msg.ss_x = 0.317708976568;
    msg.ss_y = 0.682721588442;
    msg.ss_z = 0.283124912382;

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
    msg.setTimeStamp(0.449990243704);
    msg.setSource(50671U);
    msg.setSourceEntity(102U);
    msg.setDestination(52674U);
    msg.setDestinationEntity(121U);
    msg.s_id.assign("XGJLBBLKRZOWWBRMNYZLTAJZCZLRTFYWL");
    msg.dist = 0.181409003701;
    msg.err = 0.489178696973;
    msg.ctrl_imp = 0.67677093805;
    msg.rel_dir_x = 0.0222077685733;
    msg.rel_dir_y = 0.257638101776;
    msg.rel_dir_z = 0.209308291852;
    msg.err_x = 0.974654682064;
    msg.err_y = 0.13333687279;
    msg.err_z = 0.103924444883;
    msg.rf_err_x = 0.598543759688;
    msg.rf_err_y = 0.0698798225967;
    msg.rf_err_z = 0.44457855791;
    msg.rf_err_vx = 0.345047394136;
    msg.rf_err_vy = 0.136399205526;
    msg.rf_err_vz = 0.431407964159;
    msg.ss_x = 0.167476994982;
    msg.ss_y = 0.4213715164;
    msg.ss_z = 0.0782583508168;
    msg.virt_err_x = 0.863754712804;
    msg.virt_err_y = 0.357003764962;
    msg.virt_err_z = 0.796196727517;

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
    msg.setTimeStamp(0.340896423236);
    msg.setSource(268U);
    msg.setSourceEntity(217U);
    msg.setDestination(63152U);
    msg.setDestinationEntity(190U);
    msg.s_id.assign("IYQWRVKXQBWEMPDOXDDHZXMMUBDLISNQOXLREZMVGYGGFNLZJWZGKHTISPTTVUXQJSCZRKIEKATIYKPFHDHIPGOIZZYAUBAUSLOKDTQJYRMVYZHFBANKJAPDKPKHXRRWARHQBYTN");
    msg.dist = 0.706307880948;
    msg.err = 0.778753083351;
    msg.ctrl_imp = 0.997697998502;
    msg.rel_dir_x = 0.209947537205;
    msg.rel_dir_y = 0.831325057459;
    msg.rel_dir_z = 0.286265781834;
    msg.err_x = 0.178645519861;
    msg.err_y = 0.627625624755;
    msg.err_z = 0.384984663838;
    msg.rf_err_x = 0.453095372535;
    msg.rf_err_y = 0.588164373379;
    msg.rf_err_z = 0.172220264595;
    msg.rf_err_vx = 0.412688436166;
    msg.rf_err_vy = 0.463471624628;
    msg.rf_err_vz = 0.441096454951;
    msg.ss_x = 0.740172102641;
    msg.ss_y = 0.50838254873;
    msg.ss_z = 0.815308195656;
    msg.virt_err_x = 0.517104715309;
    msg.virt_err_y = 0.204741119301;
    msg.virt_err_z = 0.510047980181;

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
    msg.setTimeStamp(0.968480469275);
    msg.setSource(43821U);
    msg.setSourceEntity(207U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(110U);
    msg.s_id.assign("NJDHBWKESTQLZYIIJDSEMZCGGPRWANAKWIEJGGFETYTZLUFRB");
    msg.dist = 0.586446458769;
    msg.err = 0.832082676629;
    msg.ctrl_imp = 0.356790982402;
    msg.rel_dir_x = 0.340285053764;
    msg.rel_dir_y = 0.491078418106;
    msg.rel_dir_z = 0.639919555429;
    msg.err_x = 0.50800324142;
    msg.err_y = 0.613230686504;
    msg.err_z = 0.866229954572;
    msg.rf_err_x = 0.672685682921;
    msg.rf_err_y = 0.674616229028;
    msg.rf_err_z = 0.45934075548;
    msg.rf_err_vx = 0.442865237147;
    msg.rf_err_vy = 0.202889019987;
    msg.rf_err_vz = 0.497647861504;
    msg.ss_x = 0.96146541951;
    msg.ss_y = 0.60469618496;
    msg.ss_z = 0.599620445943;
    msg.virt_err_x = 0.81198112116;
    msg.virt_err_y = 0.228573629084;
    msg.virt_err_z = 0.391210980724;

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
    msg.setTimeStamp(0.685955534953);
    msg.setSource(50952U);
    msg.setSourceEntity(183U);
    msg.setDestination(52586U);
    msg.setDestinationEntity(46U);
    msg.timeout = 24748U;
    msg.rpm = 0.697694007544;
    msg.direction = 196U;
    msg.custom.assign("ZWRNEDHLCBJAJQUXRVZDHHNPRDXHBMPPOKXDZFKRPBQKAFUJCRZNGYPITAQWGGMSYLRLTMOFVIVMXLBSCFDXCZLGHGECS");

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
    msg.setTimeStamp(0.959732915444);
    msg.setSource(50344U);
    msg.setSourceEntity(153U);
    msg.setDestination(53402U);
    msg.setDestinationEntity(134U);
    msg.timeout = 21161U;
    msg.rpm = 0.826645164516;
    msg.direction = 225U;
    msg.custom.assign("DKSSQTJJWVXEGDZJMOPCJWPKRZXHPMOCLFTGKEJQRCZHSZDLIGXDMQXFGGXFVUWMQIHAMGYFEDZQMWUMISSWWPYTKXKEUPLTFAPKBJSNHGQFZKWUIULOQYNOIA");

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
    msg.setTimeStamp(0.106577945578);
    msg.setSource(10039U);
    msg.setSourceEntity(194U);
    msg.setDestination(29238U);
    msg.setDestinationEntity(116U);
    msg.timeout = 60055U;
    msg.rpm = 0.264272100851;
    msg.direction = 45U;
    msg.custom.assign("DVKEFRMWVFVFAIAMDLSUQNTOBPJEQJVBPXHZBUTZKRDYMLSAIODLFQHURTESRT");

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
    msg.setTimeStamp(0.0680713929933);
    msg.setSource(61030U);
    msg.setSourceEntity(174U);
    msg.setDestination(341U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("NQDTYLJVTCBJQCRZVTVRTWRPISHMJVIHWSQHCIWMVXOUAUVQFOMXQVMYRXJSJFIORGLPSAUWOXHPFVQMUCTFNODIYGSYQCMZPNWOUWZXINLOCXA");
    msg.type = 10U;
    msg.op = 121U;
    msg.group_name.assign("JNRZAVPGZBTBGVCDBZFSKVPWIXMYHDEAXXURO");
    msg.plan_id.assign("JOWEBVZGNZRFTPLBEKUWGQKXLVXRGQUIPJQZKCZSSTIFUATIVXFYROTKOECYPLFGGJKUUGZWIGSTKUEYJLBNODKDXPSEQDDYBADMMPYNCCZWBCDPJNSNISBTMRIVRSWEPNKPAQGHMDMILGMVKCXQWZCXWPWB");
    msg.description.assign("ULWZEWHTNQKUVNTULNMOOLKROQCVWODPXQKKFBGADZGVWMXEGLFRSPTDGHCUAVQMTJKARQVSFCOIXHHVMRUQOCSUJLNBYMAAHWCNBNJGHOEMPHFCJSBSKZLYZUKVPAXPLMNJJZBXGBYOTPSLWFREWCVMY");
    msg.reference_frame = 114U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37003U;
    tmp_msg_0.off_x = 0.541101705409;
    tmp_msg_0.off_y = 0.973925515376;
    tmp_msg_0.off_z = 0.146410517118;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.446223872137;
    msg.leader_speed_min = 0.880572059079;
    msg.leader_speed_max = 0.828472915117;
    msg.leader_alt_min = 0.609884220503;
    msg.leader_alt_max = 0.56270500278;
    msg.pos_sim_err_lim = 0.453730284354;
    msg.pos_sim_err_wrn = 0.855865009286;
    msg.pos_sim_err_timeout = 57819U;
    msg.converg_max = 0.744689049447;
    msg.converg_timeout = 20787U;
    msg.comms_timeout = 25796U;
    msg.turb_lim = 0.198450585782;
    msg.custom.assign("DULEOYVAWHOXYIZUWCANCRTYCYGACJESOTBNTYJKIXOFEWPWGKRHHJPMQCPFLTGUAMDDNKIMFIJFMUMYJQEACJSLLVICSGJUQEVYWYQQVMHNAKTXNIEQHDYBMJHNQVKRFWMLDPJXGTFTOBXNUOPMHKBDSZGRRBLWKZTQSBUWEFYXZIHLZCUSCOFILOFXKRXKZGRSFGAKLBPQARPBPCDPROAVTSXLWBQGDMUPNEZBVJVRZ");

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
    msg.setTimeStamp(0.424493253148);
    msg.setSource(30175U);
    msg.setSourceEntity(110U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("RSXPJROVUEFXQVXQIQXZVQLWYBSHDNMPLJFUGNERRNYYPAXEOXISGYAFBTDZLCOSKCVSVCASEJZNILQPMPSUIYTCRRKWDILZWYVINKTCJJGHMUKDPWZCTDNTTJOMGQMHZIRRCOPFKJWXNQMZGWYDXMUBJJEHSZMWGBHIEOYVYDLAHFFHBFSDXLAHBKRWLKVTMKVPZEQEOUIAPOUENMIWHBSZTOGNBGLQFPUKJBTDWXUAAAKHGGCDYNFU");
    msg.type = 44U;
    msg.op = 123U;
    msg.group_name.assign("GOIZLKVDSIBNLCAYDDDEXQUXQTHTENGOYKWWOKGWPKIYTJAXZULXZAHCJQEIDOAIMSCTJXYWHCKRTOHOEERMRKBTPUCKUZFVZXNWRPGYMFABMALULIIHQIDAFMTCGGEEFBRTMULYAOVFFPNCHDGPHPBBBJXNSTBIMYRWSNLAVHXIGYQJH");
    msg.plan_id.assign("CVEYFUDREMYBIHSWAYHEJSCGNUZVPIBIIPNNUJLXNHCMUOBELONRWRPSYIJAOVYSIFOEKNHQMUFZWGLBMANUQZWTZRVTWBZXUKTKTNYRCMHZLFWWKQJAXDVMHPOWBZTUFXCGIPXTKMTCPOYNKDPE");
    msg.description.assign("XEHJKEQIRILMIEFTZODWNFVPUJKVMJBTIRKSDZWSUNDFMDMXCRHAXVABRHLRABOKMWBLXJXHZVSBQORKNOSLTAIAGNQJOQDBZPGJGSZRGDXPSNCWMZLGPSUCATSQXMUCLZAEGOXREOZJCUPJRLMWYHIWQYVYKNKNVFSYHWCECAOUNBENKHYXQLWZLAFHQFWDPTGFRYUC");
    msg.reference_frame = 92U;
    msg.leader_bank_lim = 0.238619942416;
    msg.leader_speed_min = 0.376892497868;
    msg.leader_speed_max = 0.716109017994;
    msg.leader_alt_min = 0.72408653093;
    msg.leader_alt_max = 0.715224377982;
    msg.pos_sim_err_lim = 0.733719390256;
    msg.pos_sim_err_wrn = 0.115468111019;
    msg.pos_sim_err_timeout = 55843U;
    msg.converg_max = 0.984584770568;
    msg.converg_timeout = 33677U;
    msg.comms_timeout = 15258U;
    msg.turb_lim = 0.669197019447;
    msg.custom.assign("LTSTYGQVYJLWSDSVEVZBJFAGXCEXYZBBMKBPGGHCXXRJOXZE");

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
    msg.setTimeStamp(0.382166518526);
    msg.setSource(44560U);
    msg.setSourceEntity(218U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(32U);
    msg.formation_name.assign("ZHTASBLZQUNZRWCVHTKDQDLZSME");
    msg.type = 37U;
    msg.op = 65U;
    msg.group_name.assign("EWOCASKWVHAZIRBZLMTZCRPLWJYJHLWRUMLGDNSPFHMOVSEWISRLDAVTGZKYGCDAXYYZBYHXJOSNFNGSUVVSMRBMFHXMXPTNEGRJEXZGUEDPQAFGPYHYAHEIWDQDYFBDTOXANKRY");
    msg.plan_id.assign("ZPYIQUGOXPIFGMKQLPAWSYZEMONHWRDMPQQJSFWHHZGWVVCYSGIETENTBDEXCHFAOXURLMVCKBJYJXAAWTAJRWUCIBNRPZGVRLYEAGRAIPQCYGKUSMNCOVFZILZURDPSGTTDDFLJPOJQJCGBODTOLDUKJFEOBKBIHOUKVRVIXFLMSWIFKZEXKYYCHXSTRBOSDLTDAVQVXMMANC");
    msg.description.assign("HRABJPCEFMPCTIPUZGLZZSPLMJDBTZKCSVRABSELQRUAVCXWKVXEDTDILHZLKJDGKUYXXYXGOJMQXJAWLNYWMGOVWEPRTSNYOTUYHMAYDVMFBVHXBFCDPOGIBNAUVCFSMGCCI");
    msg.reference_frame = 67U;
    msg.leader_bank_lim = 0.334623111704;
    msg.leader_speed_min = 0.393405701833;
    msg.leader_speed_max = 0.235308868596;
    msg.leader_alt_min = 0.880341887008;
    msg.leader_alt_max = 0.284396964015;
    msg.pos_sim_err_lim = 0.252772106477;
    msg.pos_sim_err_wrn = 0.918693095568;
    msg.pos_sim_err_timeout = 27104U;
    msg.converg_max = 0.290146677816;
    msg.converg_timeout = 46123U;
    msg.comms_timeout = 26445U;
    msg.turb_lim = 0.354027192611;
    msg.custom.assign("GGAUREFTNMCUDRQFOZVQFBDWDEYYQOAOKKJMAMVBJHLCWUEZSKMUNFTRRCXZJUGHSWAISNDLIMX");

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
    msg.setTimeStamp(0.417204502302);
    msg.setSource(65455U);
    msg.setSourceEntity(130U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(133U);
    msg.timeout = 25160U;
    msg.lat = 0.731475983766;
    msg.lon = 0.714677011013;
    msg.z = 0.734916593866;
    msg.z_units = 145U;
    msg.speed = 0.388234626411;
    msg.speed_units = 106U;
    msg.custom.assign("SHTBXPQMBOIQMAIWNNRXLKJRKHPZNL");

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
    msg.setTimeStamp(0.389953888715);
    msg.setSource(27163U);
    msg.setSourceEntity(219U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(82U);
    msg.timeout = 974U;
    msg.lat = 0.838807375877;
    msg.lon = 0.0342756455543;
    msg.z = 0.00843703360738;
    msg.z_units = 181U;
    msg.speed = 0.270734394934;
    msg.speed_units = 196U;
    msg.custom.assign("NUMXENYPSLTERCGBWOVDWRAQLIFRBZJDFWBZBZMJUXXZYISXYSEFKCJGUFWMSAYIDXIUSVEAEODHANNBPWMKQJMRTULMVOXFUBKMEKVGLSMDCWGYILQTFUCBKZAUZJOKVIJIWTZLEJOANMRGNPFHRTNVVSP");

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
    msg.setTimeStamp(0.946312401581);
    msg.setSource(61926U);
    msg.setSourceEntity(178U);
    msg.setDestination(56974U);
    msg.setDestinationEntity(245U);
    msg.timeout = 37354U;
    msg.lat = 0.909349948258;
    msg.lon = 0.248693492729;
    msg.z = 0.804678540752;
    msg.z_units = 201U;
    msg.speed = 0.501687965765;
    msg.speed_units = 86U;
    msg.custom.assign("BJIKVMGNCIWACLJROSRYYRKARXXYQMGOIQUPGTNKRCVJHFXNUMQFODILSTUTCPTEFLHEECDQUASIBWHSYOVKCBVPBEJGHRFL");

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
    msg.setTimeStamp(0.148136382836);
    msg.setSource(25373U);
    msg.setSourceEntity(91U);
    msg.setDestination(63622U);
    msg.setDestinationEntity(214U);
    msg.timeout = 35840U;
    msg.lat = 0.682958561617;
    msg.lon = 0.972716504201;
    msg.z = 0.855103256508;
    msg.z_units = 112U;
    msg.speed = 0.275699238414;
    msg.speed_units = 146U;
    msg.custom.assign("ISPGWMANRPKLMSTLSNAUYJGPKJAUZXCIWOTVXHGRORFTLTGLRIHXNPBUWBHCPSFNPEQEUMFEBQZVRVLCOAWEVWZFTZEVMYUZYWETONHIVICWOPUCDKENQRBZEAHQGSDHKCFPTTXLYJUWQRNFXMRTXASJIQIASFVUDAGXNUYHBWIMPBNDZVIFLFGCYZMHSJOGDZKQHBQRSMKJQAJVWALCKO");

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
    msg.setTimeStamp(0.155884449213);
    msg.setSource(44279U);
    msg.setSourceEntity(230U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(87U);
    msg.timeout = 60944U;
    msg.lat = 0.434782445437;
    msg.lon = 0.398416182761;
    msg.z = 0.396898930073;
    msg.z_units = 13U;
    msg.speed = 0.241596435724;
    msg.speed_units = 101U;
    msg.custom.assign("VVNPCMWMGBFDJUKRJIDWINMZLPBZAMIYVXHUPXXMZJGPXDUHVOFGPDKWYTWWTOIQLEYYQPNEUHAFWJDAIBRSEFYQDKFEFDREPOVIOYQVWUSUDKNFNLJXLCQZRMAHABUNSPIJJWGS");

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
    msg.setTimeStamp(0.837834443775);
    msg.setSource(57527U);
    msg.setSourceEntity(53U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(213U);
    msg.timeout = 33113U;
    msg.lat = 0.917268835794;
    msg.lon = 0.279814081835;
    msg.z = 0.227596991278;
    msg.z_units = 206U;
    msg.speed = 0.601829067074;
    msg.speed_units = 80U;
    msg.custom.assign("SAZHMAHLMZHDUQRBPHQCAKIA");

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
    msg.setTimeStamp(0.127113118935);
    msg.setSource(32514U);
    msg.setSourceEntity(168U);
    msg.setDestination(57874U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.322082613486;
    msg.lat = 0.109515477444;
    msg.lon = 0.833453101726;
    msg.z = 0.589871697382;
    msg.z_units = 155U;
    msg.travel_z = 0.231586409761;
    msg.travel_z_units = 53U;
    msg.delayed = 111U;

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
    msg.setTimeStamp(0.840037807244);
    msg.setSource(7168U);
    msg.setSourceEntity(83U);
    msg.setDestination(20223U);
    msg.setDestinationEntity(46U);
    msg.arrival_time = 0.671086008604;
    msg.lat = 0.619309604511;
    msg.lon = 0.10981809537;
    msg.z = 0.441387627123;
    msg.z_units = 91U;
    msg.travel_z = 0.601822989622;
    msg.travel_z_units = 216U;
    msg.delayed = 113U;

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
    msg.setTimeStamp(0.840008542083);
    msg.setSource(22153U);
    msg.setSourceEntity(226U);
    msg.setDestination(30471U);
    msg.setDestinationEntity(27U);
    msg.arrival_time = 0.58509684788;
    msg.lat = 0.781151730957;
    msg.lon = 0.588317052206;
    msg.z = 0.152539780934;
    msg.z_units = 214U;
    msg.travel_z = 0.506549040539;
    msg.travel_z_units = 144U;
    msg.delayed = 180U;

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
    msg.setTimeStamp(0.194571725629);
    msg.setSource(46118U);
    msg.setSourceEntity(93U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.798353659225;
    msg.lon = 0.22945411317;
    msg.z = 0.77872557342;
    msg.z_units = 205U;
    msg.speed = 0.0461107456746;
    msg.speed_units = 47U;
    msg.bearing = 0.905613949212;
    msg.cross_angle = 0.633457766047;
    msg.width = 0.28461210305;
    msg.length = 0.291609538045;
    msg.coff = 14U;
    msg.angaperture = 0.931348656406;
    msg.range = 39279U;
    msg.overlap = 74U;
    msg.flags = 44U;
    msg.custom.assign("XJUMOQPOWBCLGUAL");

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
    msg.setTimeStamp(0.733523636827);
    msg.setSource(2875U);
    msg.setSourceEntity(31U);
    msg.setDestination(8435U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.104776261447;
    msg.lon = 0.909260400152;
    msg.z = 0.477980233577;
    msg.z_units = 91U;
    msg.speed = 0.47801737992;
    msg.speed_units = 175U;
    msg.bearing = 0.200927924006;
    msg.cross_angle = 0.541127938322;
    msg.width = 0.961359835297;
    msg.length = 0.369152093633;
    msg.coff = 68U;
    msg.angaperture = 0.476270501455;
    msg.range = 53554U;
    msg.overlap = 114U;
    msg.flags = 196U;
    msg.custom.assign("JALXYSIUTKAUZAPBMLJSMQHXXYUDKBVUWEJWLJPCXJEPDAKFTRSCQXRRHNQLJHFFSZFWIDPZIEYLCQTDORELXRHRGQTWPUZZEFOYTUPMRASOSVDIKPOVJCSIWFHAYKENFMXXUCVZPMVOIOEWNCLVDAYTKAYWQXOGGDWFRIGCNSVZBRCDNYZVMOEOHNIGBTEFMRJOBQLIS");

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
    msg.setTimeStamp(0.37775749088);
    msg.setSource(9686U);
    msg.setSourceEntity(156U);
    msg.setDestination(8627U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.559860521497;
    msg.lon = 0.866772510274;
    msg.z = 0.207169412056;
    msg.z_units = 25U;
    msg.speed = 0.521603546989;
    msg.speed_units = 139U;
    msg.bearing = 0.0393510117798;
    msg.cross_angle = 0.576100309252;
    msg.width = 0.745156813779;
    msg.length = 0.485716007697;
    msg.coff = 95U;
    msg.angaperture = 0.847591909972;
    msg.range = 31608U;
    msg.overlap = 47U;
    msg.flags = 238U;
    msg.custom.assign("SNMFNNLXYKWBAEHTFGOALKJIBMYTVBPNGDNVVWJYBVUTMQQIWWZCKCZDXCAAZLQBNADATTEWWTIYSZVPSFIEPJXHRJFDATGCBQYRUVUXNYOPJPUHMZQGGMXAKPMSKLLXSBSSOODMODOZRZMHJXHLFSCEVOHLROXWEPJUUDKHRRQZSLTIQCWSUYBIIDTEFBUXWUGEDRDKFRTLHIJVBKUILFNWA");

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
    msg.setTimeStamp(0.880776722971);
    msg.setSource(12554U);
    msg.setSourceEntity(24U);
    msg.setDestination(42952U);
    msg.setDestinationEntity(118U);
    msg.timeout = 65493U;
    msg.lat = 0.835896552334;
    msg.lon = 0.936976406757;
    msg.z = 0.603573864568;
    msg.z_units = 152U;
    msg.speed = 0.846719832551;
    msg.speed_units = 106U;
    msg.syringe0 = 52U;
    msg.syringe1 = 245U;
    msg.syringe2 = 176U;
    msg.custom.assign("ZEFENSZQEBLFIIPZTTKHYDJFDWZIFQRSTNYXCUVJNYKNQFGOKEUJPXDMWWTMYGOBASDCDKZQBIXXLUIVNZFPHWQCCECCLXUSBUVWXEQWXMSHTSPOVJPRIDPUMKKKEJAUXKOIPDJTVXQERZCBOHWQCAZYUTYVGBMANLOVNSYHJSRJGRSLSNRCZOHEMBGKVPEHTGRFNWVLFIYMYLKCQAHTJAFAHGAMIWAGGNQUZPURDABMTIXVJ");

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
    msg.setTimeStamp(0.413259801284);
    msg.setSource(3266U);
    msg.setSourceEntity(43U);
    msg.setDestination(37680U);
    msg.setDestinationEntity(195U);
    msg.timeout = 49668U;
    msg.lat = 0.759086910346;
    msg.lon = 0.295068914599;
    msg.z = 0.783721494335;
    msg.z_units = 225U;
    msg.speed = 0.198307868128;
    msg.speed_units = 130U;
    msg.syringe0 = 30U;
    msg.syringe1 = 142U;
    msg.syringe2 = 90U;
    msg.custom.assign("BKPCIJVNGBRQPRHRUKIAZYYLBEIYZNBLGWGNOUYNEFTFPOLSPCIHSKXDDXVTQNDTNKOJNDTVMVLDLKOJZSVUHOI");

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
    msg.setTimeStamp(0.397177701428);
    msg.setSource(49998U);
    msg.setSourceEntity(203U);
    msg.setDestination(36971U);
    msg.setDestinationEntity(245U);
    msg.timeout = 5703U;
    msg.lat = 0.0167205858533;
    msg.lon = 0.982345313566;
    msg.z = 0.0771802687283;
    msg.z_units = 237U;
    msg.speed = 0.888828541314;
    msg.speed_units = 164U;
    msg.syringe0 = 148U;
    msg.syringe1 = 21U;
    msg.syringe2 = 185U;
    msg.custom.assign("WHDJYBZGNULXOSQZJYNJMWYTMUOBFHUUJLCEOWYLITZXTJVURKMMCXFEPZDGKKZUAEHIQEZPKNBSYCDDIDPMLSGEFMGFYILXJQDIMEISWHLTPBDESN");

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
    msg.setTimeStamp(0.494700246111);
    msg.setSource(65493U);
    msg.setSourceEntity(211U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.585638917611);
    msg.setSource(38475U);
    msg.setSourceEntity(15U);
    msg.setDestination(22576U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.0125332600414);
    msg.setSource(43530U);
    msg.setSourceEntity(187U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.232390135878);
    msg.setSource(43826U);
    msg.setSourceEntity(143U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.128733321616;
    msg.lon = 0.598382725831;
    msg.z = 0.891702602334;
    msg.z_units = 53U;
    msg.speed = 0.800086634145;
    msg.speed_units = 3U;
    msg.takeoff_pitch = 0.645862015613;
    msg.custom.assign("KRQBAKDQIIWHXGNVYOHIVECLRPKVTLECHSVGBTZCMMZZDJLEFPDQWFMKWYDFCFSKUTFUAOJGOPITAHIUPCSZCSVKSFMPMIUXXDKCEBJPJYYQTXRRYCIZWWULUDQSVAUUGRVLZAIDXW");

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
    msg.setTimeStamp(0.95127761761);
    msg.setSource(65525U);
    msg.setSourceEntity(175U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.468950438779;
    msg.lon = 0.0174302692095;
    msg.z = 0.996305211473;
    msg.z_units = 121U;
    msg.speed = 0.991641712937;
    msg.speed_units = 211U;
    msg.takeoff_pitch = 0.98842379747;
    msg.custom.assign("PXZMUBLFQZMKMAAOCKJEPIWPWDUTZRAROFQKCWKXDUMVGSQWEDISBCDQCIEXKGLHMPOABGOTACKVDXYIFZKLELEHFBRFJNYNLGGHJTSQZVFYBRQHUSRDOWXGOYCSBNVTOKQUCQKIEVRNBXSRZWJLCBWAPUVPKXDTHADJNGZUJMHJVYMGPGONSXWSCNIHNPEYJJYHMTQHDYHVBABFTFZISREEULAGNSOETW");

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
    msg.setTimeStamp(0.671168183056);
    msg.setSource(36884U);
    msg.setSourceEntity(49U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.118505389468;
    msg.lon = 0.43828578211;
    msg.z = 0.21161073742;
    msg.z_units = 246U;
    msg.speed = 0.492982013028;
    msg.speed_units = 13U;
    msg.takeoff_pitch = 0.795625700856;
    msg.custom.assign("CSJHOALOIQAUCWZTZEALRLFBOPLBKNEIPCTYGHYLKLWYQDNAHRVMYFBGAYNZCDDCNJBDKWCCIJTNGLQDLDUZBPUQJGTFSFBNIOAEIAATZFTXBXXMURWCVUUKQRRYZVPIRLMZEQRQPYEGWJQYRXSBPJGNQWOAFEVTHVSUPHNTRDMFSSOHVOWVPPRJQZXE");

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
    msg.setTimeStamp(0.455295921491);
    msg.setSource(25787U);
    msg.setSourceEntity(166U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.0972521769783;
    msg.lon = 0.790804957234;
    msg.z = 0.235486652558;
    msg.z_units = 202U;
    msg.speed = 0.815296235347;
    msg.speed_units = 41U;
    msg.abort_z = 0.00874125412438;
    msg.bearing = 0.711599440134;
    msg.glide_slope = 206U;
    msg.glide_slope_alt = 0.286997340216;
    msg.custom.assign("PSMVVYNFIULTVLKRHUQGTDJSZZAFGPKLBUIAIKHWNIBLQCGXYHUZEMKYCMSPZHNOEMAFWZSRQFDXOPAYEXWZCVOLXBMLRTSXNTYEVPWQIWOOTFLTRVJCJIGURPDADRXBCAUCJRROSZLXZMFJQHBNMYAJOVKPXYHEWBPKJDKYXBSMTIWYAGNGC");

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
    msg.setTimeStamp(0.720193849384);
    msg.setSource(23296U);
    msg.setSourceEntity(0U);
    msg.setDestination(22601U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.0974198112945;
    msg.lon = 0.346532398188;
    msg.z = 0.493695552503;
    msg.z_units = 239U;
    msg.speed = 0.0800385642886;
    msg.speed_units = 234U;
    msg.abort_z = 0.497966173819;
    msg.bearing = 0.226932488435;
    msg.glide_slope = 16U;
    msg.glide_slope_alt = 0.833193687021;
    msg.custom.assign("SVSVVHNWHXRQNYHCGACSTAEXPJKOCRQUYXPXHJTEBQUTPJIYSTOWNYSLMBAAZBWPCCVJMNMEUMLDEGWWMJUOYUUQMSVFDCGEGPMQZOCPIIAKFGVJYZXZUKVFTQMPVBTFRHNDGOWGWOBIXHACAOPKTIDMHOGFJHIJKYKZSXJUYOFDFAKFXLNFDLRENYZHNB");

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
    msg.setTimeStamp(0.165163844213);
    msg.setSource(12199U);
    msg.setSourceEntity(113U);
    msg.setDestination(34421U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.311579324232;
    msg.lon = 0.764357018305;
    msg.z = 0.087847621088;
    msg.z_units = 75U;
    msg.speed = 0.057408611869;
    msg.speed_units = 91U;
    msg.abort_z = 0.589976975607;
    msg.bearing = 0.74839154728;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.503036358066;
    msg.custom.assign("DAGTBCNGNRHTLPKWGBEJQHLJNMVGNIIBOLKMLPDKSHTOCNDCSCSDZEFXYYTVIYALUSFUOIHQBWDWODA");

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
    msg.setTimeStamp(0.349079785906);
    msg.setSource(14795U);
    msg.setSourceEntity(240U);
    msg.setDestination(64494U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.74031215362;
    msg.lon = 0.150239770488;
    msg.speed = 0.75089310735;
    msg.speed_units = 52U;
    msg.limits = 35U;
    msg.max_depth = 0.163790781829;
    msg.min_alt = 0.123306232677;
    msg.time_limit = 0.260849906603;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.459248179104;
    tmp_msg_0.lon = 0.822951391006;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KEZJGMXPTQVTLUKLROZEDBYUNHWE");
    msg.custom.assign("REOVSGWWIIXRBJCXWMTOD");

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
    msg.setTimeStamp(0.431504605734);
    msg.setSource(3690U);
    msg.setSourceEntity(12U);
    msg.setDestination(37442U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.647117825602;
    msg.lon = 0.331302951074;
    msg.speed = 0.664102571257;
    msg.speed_units = 210U;
    msg.limits = 76U;
    msg.max_depth = 0.0973836804703;
    msg.min_alt = 0.997793500561;
    msg.time_limit = 0.852997521972;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0368602364424;
    tmp_msg_0.lon = 0.758317267456;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ZDZCDKUNAJHZVPUZVEVXYHBJIIMVRRGMXCVDCAGKWSTODLVYJIWFVFNZBTCGWAURJNXPKESQTCZLTRFQPLJYFLCGGJZCISFAOHQRMBNUMFYSNXNIDBMQOPQTTDZRHOJXLA");
    msg.custom.assign("VYPAHZRVPPZVCISDKZQGWVXJBVSHXMRYITMSDLLOLCQFFBRFWIERGDYOAVQUPUUNITJCTGCSBJHBLETHM");

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
    msg.setTimeStamp(0.323287865202);
    msg.setSource(63756U);
    msg.setSourceEntity(5U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.366423458623;
    msg.lon = 0.349746642498;
    msg.speed = 0.308444831704;
    msg.speed_units = 187U;
    msg.limits = 244U;
    msg.max_depth = 0.0374112617188;
    msg.min_alt = 0.800916721218;
    msg.time_limit = 0.793645697036;
    msg.controller.assign("VUHTRSYMEWOQVUZJYGPEBEYXPHHSNOSJFPPUCAZIVKWNVIGDMQKPCAJYVKLUYWRREZCRMBPMSSNRQZGTCNECZWKMQUVXVXMONVPJQTUUKREALHEDJBKVFFOFSUOGWHRHCHRZOJFCOLXSKZFXXEYLRLANDMGQTSXADCMZHTYBHLBKRVMWBDLCTJWODFBEZIDQOMNGWKAJDBIAELPXSLWNJGXQIUIGTDKOGFFDTWFXJIPQGIYNBYHITAZQS");
    msg.custom.assign("ZFEALPJWOUIMJIXCQEJQUBSXVHGBWPRIADMDDVKXQRWPSWUCLAAEGEYGZZULNOSBVDKCWTXHJTLZYBTFNBYLKBSCTZJGWFWXQKFHLRHNOMRHQNPIIQEEVJUEVXIYLYMKKVFNOJIBLCRAYZXZXPPAFTCXTKHRKMQOTQMJJKHQDCCIOTMCRYVGMNHMIRBGDAWLLYYFHVOPHUFJEDSOGASURCREGKGWBVXISDTZNSVPFPAENU");

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
    msg.setTimeStamp(0.624880438891);
    msg.setSource(25137U);
    msg.setSourceEntity(16U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(66U);
    msg.target.assign("WLRDHWRTFMSJTNBVHRFLTUVZMPOIQVOUQXPEBPQIGMOWJPKE");
    msg.max_speed = 0.627831103373;
    msg.speed_units = 87U;
    msg.lat = 0.100976961889;
    msg.lon = 0.842322610605;
    msg.z = 0.0390806033707;
    msg.z_units = 162U;
    msg.custom.assign("YTLANQANXEXJEUHXABYNVIMRQLXDMIIOQPMUHMWSZDGCSYXCADQPFHHWZWXIZKGHFOEUPELTJTXWBYCZLOEWZBCCZDXPCBYFTOWORQSNUIKXQAAZVUMTGSABWEHYNVPJYJDDEPZIGMSNUOWJKIRVFGUYKRUFAVZBC");

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
    msg.setTimeStamp(0.752076842404);
    msg.setSource(36821U);
    msg.setSourceEntity(147U);
    msg.setDestination(4302U);
    msg.setDestinationEntity(186U);
    msg.target.assign("ZKBBMREMLYCLMGTBNFSWBQIHNCEUHWFRQJBZBTETQNZMNYXPWVCIEKLXFZPUCRQVPAIXGXSELNBQGRTOIGPDMAVGJJOXALAMIICCVCHKFUHPFPBKHYUHXSWWNVPHCQSEIDFYRMARXZXKGGIWJPAEXSFUEOABHGWRYSDJGRWVLKSQSDDJFYFTNZOTKQESDUZVONNLPORTUSYZMQMHGDAU");
    msg.max_speed = 0.905687069869;
    msg.speed_units = 107U;
    msg.lat = 0.958099434179;
    msg.lon = 0.914384971543;
    msg.z = 0.237145042699;
    msg.z_units = 76U;
    msg.custom.assign("QNWVMKGEMZCWELFOUOFYAEZKRTSNFFEKCUJVSJVSFMFJYDNSLRJWKOQKAZYCYJULNCQXRGYHITAPVMBTVPRPWBXHEKLDJ");

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
    msg.setTimeStamp(0.606585543607);
    msg.setSource(28284U);
    msg.setSourceEntity(77U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(228U);
    msg.target.assign("ALUPVBBJERTXFAFNNQGTNCMGWRYLXDMJSLENH");
    msg.max_speed = 0.0188776188021;
    msg.speed_units = 10U;
    msg.lat = 0.360914142313;
    msg.lon = 0.106958954281;
    msg.z = 0.902830602302;
    msg.z_units = 9U;
    msg.custom.assign("CFPEVZAJYNEOBRXYHSXMJODHLLMCWJALGRWHZQELPKYIWXBUTYFFSWPSCFZNLDPGHEVFAZJFRWLT");

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
    IMC::Handover msg;
    msg.setTimeStamp(0.436425539918);
    msg.setSource(19394U);
    msg.setSourceEntity(94U);
    msg.setDestination(42657U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.342945663125;
    msg.lon = 0.415315011063;
    msg.z = 0.389609032356;
    msg.z_units = 154U;
    msg.speed = 0.881894254876;
    msg.speed_units = 91U;
    msg.radius = 0.421667610357;
    msg.direction = 230U;
    msg.rc_handover = 213U;
    msg.custom.assign("SQQCQROUAETDYCPIPHZBGWANMJTPVHFDVOXYRDYCCHQGKUOTNQJLOALNNZNUUHAKPXLBCBVEIFQLXGKZVOVNRTFIFGMQZJEJRWXDQJLWRZDLYPRZIVTAICGQFUWZHHJQGYEIREFGIBVPCMPUBLXBDOMAEIMKPKNUWNUBNDTJOUTNSASTXOMKFHSCBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Handover #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Handover msg;
    msg.setTimeStamp(0.736942607449);
    msg.setSource(57993U);
    msg.setSourceEntity(99U);
    msg.setDestination(34198U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.372071361151;
    msg.lon = 0.0369359366088;
    msg.z = 0.398360695529;
    msg.z_units = 220U;
    msg.speed = 0.355143003044;
    msg.speed_units = 185U;
    msg.radius = 0.584507959068;
    msg.direction = 69U;
    msg.rc_handover = 161U;
    msg.custom.assign("TWZMWSVXTTTPVRMKIRYHGBPGUTUZMXSKAKVCYPDHGLFQLKXIEVYXKFGCBXJXZGDDRWYYJGALKCZMXQZMFMBFHEQUHBUAHUNHMOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Handover #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Handover msg;
    msg.setTimeStamp(0.774361777923);
    msg.setSource(13868U);
    msg.setSourceEntity(215U);
    msg.setDestination(45322U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.308616406907;
    msg.lon = 0.379813750765;
    msg.z = 0.593909962695;
    msg.z_units = 146U;
    msg.speed = 0.534155389392;
    msg.speed_units = 36U;
    msg.radius = 0.417797005856;
    msg.direction = 154U;
    msg.rc_handover = 181U;
    msg.custom.assign("PBXFRPERWAUTFGMAEDYIPSYHBQGZVXDWRGIQSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Handover #2", msg == *msg_d);
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
    msg.setTimeStamp(0.101343422689);
    msg.setSource(7011U);
    msg.setSourceEntity(240U);
    msg.setDestination(3699U);
    msg.setDestinationEntity(226U);
    msg.op_mode = 229U;
    msg.error_count = 25U;
    msg.error_ents.assign("ICHPNZCARXCDAFGTBSBYIIXVEIIBCNA");
    msg.maneuver_type = 55212U;
    msg.maneuver_stime = 0.0405844705693;
    msg.maneuver_eta = 25305U;
    msg.control_loops = 569339914U;
    msg.flags = 148U;
    msg.last_error.assign("XXRPSKRVRTWDGEUVZNTGCIBPJDOJXFXUMBDUXBLEJGULZFIYKYQHEVJQZPDAMQILSLUQKCSBWTHEGUJLCWATJSKNSFABWMKLXWYSYWNZXNRHVYXTOQZAJZEPQDSUDRDNBVPEOCSHKSFVIKCJTGHGIXDHRPROLGKGMOIQCYBFWTCLOETRZMODYMTOFQIMGE");
    msg.last_error_time = 0.733558951803;

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
    msg.setTimeStamp(0.915368447188);
    msg.setSource(63291U);
    msg.setSourceEntity(42U);
    msg.setDestination(44707U);
    msg.setDestinationEntity(233U);
    msg.op_mode = 2U;
    msg.error_count = 188U;
    msg.error_ents.assign("AMFSRQRDQLZSPQVNAVXCQXWC");
    msg.maneuver_type = 6634U;
    msg.maneuver_stime = 0.753275631237;
    msg.maneuver_eta = 22064U;
    msg.control_loops = 479862616U;
    msg.flags = 212U;
    msg.last_error.assign("BRLIKWWNRNJEMHFCQVIWQGRIPDFEZZWLUWTPQIBOODPLSYRPRNAAIXBOQMVMQMZDPUTUKAGCZTIYFGWEKTVYJWMZJYYUVAWLHFYPJGLCDGDEVDLENBBBFTONYLSGKUCDUFNSWLRHTTXVKOUEZNXCIIZTMJQSCJIECDHSZBEKYLJNPZKHESRPUGONDKCOXBXKXEMVUQV");
    msg.last_error_time = 0.671186427556;

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
    msg.setTimeStamp(0.318765600956);
    msg.setSource(46151U);
    msg.setSourceEntity(70U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 78U;
    msg.error_count = 145U;
    msg.error_ents.assign("YGNZAWBBJVYUICQQSGMKTKBWFZDTRDPLUGRCMPKWZFHLZDDVIDHYQOURIUXMJARNJYNAFWDCDMMPHECEFONVRVCHJPLNUSSDINUWMCIWSUHJBCPVXOARCOTGZKPSTHUPCINGXOOWUEAGHVFOKBJFVMTGSRRELHMHLFZNNDQGGQPJXKFTZKTXZOTLUXEQWNEBYQYAIRWGESBVBKV");
    msg.maneuver_type = 4815U;
    msg.maneuver_stime = 0.975307223126;
    msg.maneuver_eta = 52861U;
    msg.control_loops = 3426955567U;
    msg.flags = 228U;
    msg.last_error.assign("LQRZAKMMUIJUJNMXCXTRHHWBLGIKXYZQGKJEEBVOFQJQXSWYAWTOKFDWFYGIYUSCPVNADLSMSTIYRCCFECSNXLRUUOXXZCIAPQQNFAVWKMTRCITPXLVUXEOZJKMEZIVHWRNYEJRZYTOKKJDHHGDMJNTFONUBUQFDBSMVOCHKHD");
    msg.last_error_time = 0.316567460409;

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
    msg.setTimeStamp(0.473975445837);
    msg.setSource(34373U);
    msg.setSourceEntity(164U);
    msg.setDestination(58878U);
    msg.setDestinationEntity(181U);
    msg.type = 65U;
    msg.request_id = 28423U;
    msg.command = 186U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 48572U;
    tmp_msg_0.flags = 31U;
    tmp_msg_0.lat = 0.910901262303;
    tmp_msg_0.lon = 0.813137002544;
    tmp_msg_0.start_z = 0.782424748829;
    tmp_msg_0.start_z_units = 183U;
    tmp_msg_0.end_z = 0.635982517828;
    tmp_msg_0.end_z_units = 12U;
    tmp_msg_0.radius = 0.471206462929;
    tmp_msg_0.speed = 0.0912642578002;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.custom.assign("JLQUSMKRJSHADYWZHPOMLNNDVZRDSBBLDDWBGUTOPDYWOIDUZQPNBSTKV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45976U;
    msg.info.assign("YBCYRDYNSVMPTXJPZNEIRABLFXYOPXYIGOERQTIPPFQVGQJRNULAVLUXLOGNSZNQODWFCBFZRHMBEOXEGGYYKHDNIUJQBVCPZRBAUAXIZFMJRTJZSEWKFJBDLQDAZIHPKUGMNTOGAIVRWSVLYWYHF");

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
    msg.setTimeStamp(0.751166804359);
    msg.setSource(21827U);
    msg.setSourceEntity(178U);
    msg.setDestination(51888U);
    msg.setDestinationEntity(188U);
    msg.type = 226U;
    msg.request_id = 59151U;
    msg.command = 24U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.360203201518;
    tmp_msg_0.lon = 0.767686089686;
    tmp_msg_0.z = 0.559379965893;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.radius = 0.382524962417;
    tmp_msg_0.duration = 13508U;
    tmp_msg_0.speed = 0.371575028237;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.custom.assign("RQHUBLTJERDAMPGLJIQSYQVLZNWIYZBVXBIUCIBCPIMXTRYWSEORJXGVECZSPMTTKRXJOWEAGZNOOYGYHNHXOWODWZKTGANWUPVBGXDUVEJEMHDKXHHOBTLCMSCKAFBCRRAALUDDGLVKOFGAZIMPKJWXKYZWQVWEEMCFSITROAINTLFKQDSUXCVIHNMGMYMVZEHBBPCJNFQNPZQNNRJPKSQQYHFAIRTJBJSKSOQUUPYPFWDFFYVLZLFUDUTES");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45110U;
    msg.info.assign("DHZUGIEKBLYBCPWNRZQLMULNCLKNGNHKINCAOGYPSTTZV");

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
    msg.setTimeStamp(0.438894742414);
    msg.setSource(6426U);
    msg.setSourceEntity(6U);
    msg.setDestination(18612U);
    msg.setDestinationEntity(135U);
    msg.type = 96U;
    msg.request_id = 40712U;
    msg.command = 221U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 24256U;
    tmp_msg_0.control_ent = 239U;
    tmp_msg_0.timeout = 0.391802964705;
    tmp_msg_0.loiter_radius = 0.616832103163;
    tmp_msg_0.altitude_interval = 0.85778890866;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59586U;
    msg.info.assign("UGLKSFEREXVMDEOUPXDRVUQUPTTDXGNYMPYFLSWZNOWGPMDRJKNIYKFUXSLAOHXGXZVHHQBSUBJWUNZTIFWPKJALZWSANGJVXTBMQTFGKHIJZCQBCOHNLFIBZNMXOYVBITOZZZTFQCCVEAGLEMPYRPNDWDCZHQXBTQVMLSHYHYOLFKYMPJBAFURHJCTLNEJEORDKDKWVOKMWUDGAJVPYCAWSQABTAIMRJNRSEFPIWGCACIHIRD");

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
    msg.setTimeStamp(0.365132202048);
    msg.setSource(23800U);
    msg.setSourceEntity(18U);
    msg.setDestination(36446U);
    msg.setDestinationEntity(223U);
    msg.command = 3U;
    msg.entities.assign("DPLCQUIYOHPHJVVLLWEXYPWNWSPGOLHUABCKOXJOVUDPVYGDEGSOUMTVXRXKZCVVEYFWQYGXAIWPTADQFZRJFRSEINBTUMFDQDNRYTSAAIBRZSKGBWAGJETHMPMBCHRRDZUQTFTXZUMGHLAHNZIHTJUQCBJHWBBOCPJAISSGXKDFYVYSNDFNLXVYWHCLPAMKTKRKVIKNZYGOJRM");

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
    msg.setTimeStamp(0.0476061378213);
    msg.setSource(13625U);
    msg.setSourceEntity(25U);
    msg.setDestination(35048U);
    msg.setDestinationEntity(192U);
    msg.command = 225U;
    msg.entities.assign("XZEDKRVIRVBAUYWSGGNCVXUMCRQJVWYMPTCDKXVFJDITDXLGNQYOXAHMBTOPHMVNNMSJSGLOLTLZVZDMRYQEHJAKETQQBCSEVOCWNDANWAKAAEIUQEIIYZYQTBKDBZPJQSTWHIBHXUZKPMBECEOFURZFWZSFMFCFHGJODONUGPKNEXIPODUWIYPHMLBVZRIGGKBPPEKCOVCFNHTDLAARUTQAWSKBZLGQFLNTRUYRYFS");

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
    msg.setTimeStamp(0.383276152805);
    msg.setSource(37365U);
    msg.setSourceEntity(114U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(92U);
    msg.command = 82U;
    msg.entities.assign("OUNJATOJWDJKHYHFDIUBFVCHUBZSQHUCKKKBEQZADNPBQTHGGHSCETVFZTNAZRHPNTMQRRRMSSVKQPDGWSVRLFSIPFYDGQLICIFKXIEFNXMRICEFMJEXLRJJDFL");

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
    msg.setTimeStamp(0.908966463288);
    msg.setSource(37195U);
    msg.setSourceEntity(38U);
    msg.setDestination(9502U);
    msg.setDestinationEntity(89U);
    msg.mcount = 102U;
    msg.mnames.assign("PAIRXEIFFAIWFDWLKYKVJWXQWSPOEUFY");
    msg.ecount = 158U;
    msg.enames.assign("VKMGEOIRTUQHPVGNCAHLQDMAYIXBXNZJCNTCXIHGPKNXCDKQAZPHPLWWDAEFFAOMBFROEATMGKWFIWMJALYPXSOVQIFOMRWXEWBVCQJUYIESBKGEVEJGIFXVLHWHIXQZTCHTSNAYITCBIRUBVPYFQOAFCPYNRDDCZYOTRRSTJZTKGVQ");
    msg.ccount = 219U;
    msg.cnames.assign("OUXUPRANYCVWNZDJTCZTEQOZKODVOAERJFHFWVJRAHKUQLTNZOHZWSBGLIUXVWCFOOCSBQAECVHDGXLSTXY");
    msg.last_error.assign("GBUOPIQJQXTAOCMCVMHTCVJYJJYZTINRHNMSXKBOLLXEYRMHDZTQKOSIWVGAKIFGYSWHVLCEAOPPMBHDOPLWKRIKIMGKEYUZUXBSLREBUHWHGGDIJAKXTWQZLSSTLMSKQCSLWBFJNQTEPYWDEFVZLFHCAMDOAUWJQGFYXFNBRBEVGPFNZABOTUDPNZPZXUYXMHRHVIEYCZXGPSTERSIPXNOIQKVUQJAFDAFNDWECR");
    msg.last_error_time = 0.730441944993;

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
    msg.setTimeStamp(0.91966029754);
    msg.setSource(40840U);
    msg.setSourceEntity(202U);
    msg.setDestination(247U);
    msg.setDestinationEntity(87U);
    msg.mcount = 191U;
    msg.mnames.assign("KMZZPHZBNCNDBIBHFXSSVYEQELZQKVJIPRCSIOBMQNESGINPYDWAPRQUYXDLLIGFXIVHNYCFATDEGUWIRYQBSZ");
    msg.ecount = 57U;
    msg.enames.assign("TZFLLLEVHINVWRWDBPNFZZQJJULIKTPBMGLXPPWYDRGUAKIQCTSZPJTQQGVNXYSYGJSWHKADHMOYCBIIMVEPCUANIWRWEHDKFJOTEODPDVALXSCQCGQYU");
    msg.ccount = 99U;
    msg.cnames.assign("IJTNWSYSMVUPAJMD");
    msg.last_error.assign("GYBSHIXIBWQEGPJPXOEDDFRPLTFVNLORPMMEXHPHGTAWGYUGOJCISYZGADBLHGIAYJWXQWVRIBFANLWMGQAEKEUIYXMYVMJVKADJDCFLYUCCFEAVTXXXENZHEJDZISLTQYLWFBVNBZCRRZKZUUDGUOTCLSRXAJKVJYOCZNLNRFIORZORHQPTSKI");
    msg.last_error_time = 0.133890661567;

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
    msg.setTimeStamp(0.932226009461);
    msg.setSource(48328U);
    msg.setSourceEntity(16U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(88U);
    msg.mcount = 162U;
    msg.mnames.assign("TEPRHCDDCLZCGPBDEJOIXSWSVKRFKMZIMDZHTGIOJZTLXYFMALMHMYUKBQHIMWJEHFFUXCWCGXWWSCAZJROUKIVFLUPTJMBEVQAABWEVJTEDQBLQYPPXZUT");
    msg.ecount = 235U;
    msg.enames.assign("LUCKZORBMABXPFEOEUFJFGUQDVRYVDLMLGKLYCSEVVITQQPFULZAMEAQPFVPBXOXXQIVZRYHTFSCJJLKUIRIZZXTSWBYOSQHTMBAYEAKGPXPCEQNJP");
    msg.ccount = 164U;
    msg.cnames.assign("XLYNNAPCPYWTBBQJRSNSLZPIOHRXEMXGEMGHVCIROYZAQRFUCOUJESFLCNPXQOWFCTXJTKAEEODIDLXVBLIVKOBKXMGEBZEUYOPEKAFYHVBPNMNQWJVVCOALQAQKSUUUDTNDSH");
    msg.last_error.assign("SGHTISTTDZCAULRWYKXDJOZZ");
    msg.last_error_time = 0.555348092107;

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
    msg.setTimeStamp(0.435823286008);
    msg.setSource(14561U);
    msg.setSourceEntity(1U);
    msg.setDestination(50851U);
    msg.setDestinationEntity(216U);
    msg.mask = 1U;
    msg.max_depth = 0.701825600783;
    msg.min_altitude = 0.00911104749483;
    msg.max_altitude = 0.328353653431;
    msg.min_speed = 0.0090288556122;
    msg.max_speed = 0.21396385162;
    msg.max_vrate = 0.451060766303;
    msg.lat = 0.390074911375;
    msg.lon = 0.990995391905;
    msg.orientation = 0.753371053704;
    msg.width = 0.327466133264;
    msg.length = 0.816212937419;

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
    msg.setTimeStamp(0.769825585282);
    msg.setSource(20888U);
    msg.setSourceEntity(27U);
    msg.setDestination(41455U);
    msg.setDestinationEntity(99U);
    msg.mask = 45U;
    msg.max_depth = 0.156610458307;
    msg.min_altitude = 0.1411386435;
    msg.max_altitude = 0.977284021785;
    msg.min_speed = 0.723557497566;
    msg.max_speed = 0.131385118047;
    msg.max_vrate = 0.718256676988;
    msg.lat = 0.114192546946;
    msg.lon = 0.646368812964;
    msg.orientation = 0.968541966872;
    msg.width = 0.792762399139;
    msg.length = 0.279221220328;

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
    msg.setTimeStamp(0.654219192583);
    msg.setSource(62923U);
    msg.setSourceEntity(112U);
    msg.setDestination(44451U);
    msg.setDestinationEntity(105U);
    msg.mask = 33U;
    msg.max_depth = 0.213177221071;
    msg.min_altitude = 0.752243834433;
    msg.max_altitude = 0.772572756485;
    msg.min_speed = 0.13408055603;
    msg.max_speed = 0.852977467747;
    msg.max_vrate = 0.0261377118982;
    msg.lat = 0.720020651722;
    msg.lon = 0.744320614493;
    msg.orientation = 0.755766832802;
    msg.width = 0.510983211654;
    msg.length = 0.875031311689;

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
    msg.setTimeStamp(0.0871734255453);
    msg.setSource(8164U);
    msg.setSourceEntity(245U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.118850525988);
    msg.setSource(61880U);
    msg.setSourceEntity(123U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.584457203538);
    msg.setSource(45298U);
    msg.setSourceEntity(80U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.00923047981265);
    msg.setSource(27153U);
    msg.setSourceEntity(41U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(8U);
    msg.duration = 55720U;

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
    msg.setTimeStamp(0.361683838545);
    msg.setSource(22823U);
    msg.setSourceEntity(33U);
    msg.setDestination(15846U);
    msg.setDestinationEntity(134U);
    msg.duration = 64342U;

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
    msg.setTimeStamp(0.966110045886);
    msg.setSource(7516U);
    msg.setSourceEntity(60U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(34U);
    msg.duration = 3958U;

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
    msg.setTimeStamp(0.286473300187);
    msg.setSource(60464U);
    msg.setSourceEntity(186U);
    msg.setDestination(15902U);
    msg.setDestinationEntity(140U);
    msg.enable = 85U;
    msg.mask = 762996636U;
    msg.scope_ref = 2326973688U;

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
    msg.setTimeStamp(0.420787659027);
    msg.setSource(23425U);
    msg.setSourceEntity(44U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(109U);
    msg.enable = 22U;
    msg.mask = 3148939159U;
    msg.scope_ref = 3687809418U;

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
    msg.setTimeStamp(0.281151941897);
    msg.setSource(12232U);
    msg.setSourceEntity(131U);
    msg.setDestination(53026U);
    msg.setDestinationEntity(213U);
    msg.enable = 84U;
    msg.mask = 2878970645U;
    msg.scope_ref = 1195216197U;

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
    msg.setTimeStamp(0.59896805426);
    msg.setSource(54776U);
    msg.setSourceEntity(16U);
    msg.setDestination(54409U);
    msg.setDestinationEntity(150U);
    msg.medium = 245U;

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
    msg.setTimeStamp(0.211019879462);
    msg.setSource(15448U);
    msg.setSourceEntity(86U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(21U);
    msg.medium = 198U;

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
    msg.setTimeStamp(0.232684029194);
    msg.setSource(509U);
    msg.setSourceEntity(231U);
    msg.setDestination(32339U);
    msg.setDestinationEntity(69U);
    msg.medium = 211U;

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
    msg.setTimeStamp(0.49656901663);
    msg.setSource(40309U);
    msg.setSourceEntity(103U);
    msg.setDestination(52824U);
    msg.setDestinationEntity(61U);
    msg.value = 0.648308079344;
    msg.type = 131U;

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
    msg.setTimeStamp(0.561363589796);
    msg.setSource(42371U);
    msg.setSourceEntity(163U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(126U);
    msg.value = 0.721272538008;
    msg.type = 29U;

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
    msg.setTimeStamp(0.644902003713);
    msg.setSource(41620U);
    msg.setSourceEntity(52U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(160U);
    msg.value = 0.84242960258;
    msg.type = 150U;

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
    msg.setTimeStamp(0.24755233313);
    msg.setSource(56051U);
    msg.setSourceEntity(69U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(120U);
    msg.possimerr = 0.00220860726601;
    msg.converg = 0.177595317154;
    msg.turbulence = 0.620477656046;
    msg.possimmon = 74U;
    msg.commmon = 72U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.535824145136);
    msg.setSource(62077U);
    msg.setSourceEntity(32U);
    msg.setDestination(18905U);
    msg.setDestinationEntity(145U);
    msg.possimerr = 0.501937573556;
    msg.converg = 0.104434229359;
    msg.turbulence = 0.255715312011;
    msg.possimmon = 44U;
    msg.commmon = 191U;
    msg.convergmon = 139U;

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
    msg.setTimeStamp(0.480936314274);
    msg.setSource(65058U);
    msg.setSourceEntity(225U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(196U);
    msg.possimerr = 0.501329371315;
    msg.converg = 0.331373434481;
    msg.turbulence = 0.499027285861;
    msg.possimmon = 73U;
    msg.commmon = 212U;
    msg.convergmon = 153U;

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
    msg.setTimeStamp(0.516362478823);
    msg.setSource(25264U);
    msg.setSourceEntity(8U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(58U);
    msg.autonomy = 14U;
    msg.mode.assign("RXMKLEWHYKSMWWBFWIWFTZOWZNDEBQSPUMDDVMKDTZVTTKPOAHJGACGUJRAVOWEJIULJOERYCSSBUEZVIYDUEXNRGWRAVKJMFPFRYWENRYUHMLHUNXSGKXYQRDOIXQYJSUAVBDPCXHGTSGAZQTIZJLHTMIUBWMPKTLSTNPYAGDHLZQXCCIKCPXKBOFBHFVVCQFHNOJRPNUJOQQARZYEQNSSOFVMYPOGBICE");

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
    msg.setTimeStamp(0.509518998402);
    msg.setSource(28122U);
    msg.setSourceEntity(112U);
    msg.setDestination(31855U);
    msg.setDestinationEntity(86U);
    msg.autonomy = 147U;
    msg.mode.assign("BNPUWJGRZHHGMFKMUMRAHWVVJGFLRPKYLOQJLGIEDSKZLKTF");

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
    msg.setTimeStamp(0.40727493352);
    msg.setSource(47005U);
    msg.setSourceEntity(101U);
    msg.setDestination(51364U);
    msg.setDestinationEntity(193U);
    msg.autonomy = 251U;
    msg.mode.assign("LAQOJZJZMNWXZBIWDDKTIJOHKGASXIFXOAFEEESLXJUUHVTNWMVTOQUONWDKYIFUPVMJ");

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
    msg.setTimeStamp(0.42601664342);
    msg.setSource(46126U);
    msg.setSourceEntity(223U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(51U);
    msg.type = 185U;
    msg.op = 77U;
    msg.possimerr = 0.113932008635;
    msg.converg = 0.36533450997;
    msg.turbulence = 0.866449529987;
    msg.possimmon = 116U;
    msg.commmon = 57U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.385373940435);
    msg.setSource(4700U);
    msg.setSourceEntity(230U);
    msg.setDestination(22695U);
    msg.setDestinationEntity(6U);
    msg.type = 18U;
    msg.op = 248U;
    msg.possimerr = 0.145346276277;
    msg.converg = 0.978503920732;
    msg.turbulence = 0.520487477767;
    msg.possimmon = 160U;
    msg.commmon = 66U;
    msg.convergmon = 24U;

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
    msg.setTimeStamp(0.32643602089);
    msg.setSource(57342U);
    msg.setSourceEntity(197U);
    msg.setDestination(20670U);
    msg.setDestinationEntity(228U);
    msg.type = 147U;
    msg.op = 184U;
    msg.possimerr = 0.356480658686;
    msg.converg = 0.615833049712;
    msg.turbulence = 0.641874689344;
    msg.possimmon = 91U;
    msg.commmon = 154U;
    msg.convergmon = 132U;

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
    msg.setTimeStamp(0.94312118053);
    msg.setSource(34669U);
    msg.setSourceEntity(30U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(172U);
    msg.op = 109U;
    msg.comm_interface = 177U;
    msg.period = 57695U;
    msg.sys_dst.assign("WPAYPAZYYFFERRHLVMUVYSXSMKKDGXKLYGHVPNCIBTQJSLSGEBIAGVFEGWPWMJERDGFFVWWFIXJBAVJIDTWBJQYBJEBLGPKSMMURYCZXCPGTAXSTUDQGENSZAKUFUXZZDWAONLDUQIVWKRHSBQXYQTVLTTOEAHGOQDNCDHHPFYNRZTLROLLNNWBXIYK");

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
    msg.setTimeStamp(0.385615458879);
    msg.setSource(31082U);
    msg.setSourceEntity(172U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(0U);
    msg.op = 199U;
    msg.comm_interface = 124U;
    msg.period = 26902U;
    msg.sys_dst.assign("PEROUEYTDETJSKCEGJNHVHLEPASMGLGHFVFJNRTUTHWNQRHZYKLEGRGYBPWUGUPXYMFBOTVJYZXGVYBJOCKOYNPPIQIIRFKZTRFDVCWBLZLDSDURASWZPCVCBKEQHKFAQIOXOLLYEUJSCXISMFOECXNBWCBYXDHKJMGEIQZDGYZTJMXWDCAVAKZDQNO");

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
    msg.setTimeStamp(0.0320940882077);
    msg.setSource(14802U);
    msg.setSourceEntity(52U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(204U);
    msg.op = 25U;
    msg.comm_interface = 30U;
    msg.period = 23932U;
    msg.sys_dst.assign("ELZXMIZBZILUOVIRRPODGTAUSEKJHHFXIFCUAUHTLLVDWBZPSNTIBNCGMMDWLTBGERJYHNJTRERBDSBLPPZZQZMPFAGRIFXKELYDNCYDUEYFADVOQKJWHBTQCHTJDOMKPQOAKBNVYOJ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.562270128977);
    msg.setSource(41845U);
    msg.setSourceEntity(155U);
    msg.setDestination(12879U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.422055721989);
    msg.setSource(9825U);
    msg.setSourceEntity(99U);
    msg.setDestination(1125U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.805424807494);
    msg.setSource(12541U);
    msg.setSourceEntity(183U);
    msg.setDestination(22008U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.121733288955);
    msg.setSource(19376U);
    msg.setSourceEntity(179U);
    msg.setDestination(5000U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("NJRTZXBBIAJKRIKXEDUZNKYZIDRSWMOODRFSXKLAJSKLOJJOETUXIADATKNJVFRZGFPBVLHUTHUQDPMCGTRYOFRFSQMCGJIHPYYJUCTFLMWHHCTNNXVPSMRKQYWMUHDMHEZLMGBGBOWQGEPTWECVPOCPUFQYPQEWPVSZUBXWDLEEOWEEIANALL");
    msg.description.assign("MRVKKDINOYXYJLZQFGGBZEBVXFSPKCGOMHDZVWEPEVDMRLGAYRIFYPDNUTAJBSOAPQIKQKCQCRZWIDAHERIOWTOUNNFVJHHMHYQFKJIXFTWXIWJCBJTNV");
    msg.vnamespace.assign("AQORCFXSXDVSITQUAYPMMBSSNWEYNQNLPZRCVLOXVPAFXWLGRRUJHBBQZNJHFJUDVHBZKIXKGQDBCYPHPVPULMTWIVLQEMCNCXYGAYPOEAZRALWCQXKGYOEHLWBEAISWJRIHPZEZNNMDFHFNTQXUDGOGHZJDWMNMJUUFYLMFMJXYCDOGEKLRCUDFIZVWMTBHAIOTASBRTFKVSAKUKGKKOODBESIVRTZITSCINTHFXJODYREVZSLPJTCQEUWK");
    msg.start_man_id.assign("YNHGFPOROIGXETOYHEYHPTFOMKROQRYYUCNKWMZUUCAPWQIBNHDWUILFSFVFYVTGORQVKRLDWPUJVCZYVXQMPMCTABEQHXBZMJTTYNSHSXMKIQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GCCGFHWRZIWTXYABWVPMPGJFWFSUHLPIKRAZMQBEHEYSZXVLBBZCYGRQTFVDKIZNHJUDJFAQOXVOHQDJALFCLTNVOATSYTONQHHORHQRPGPAQBILNXYMKNDZNNYKPSWVIPHVOLCXBPBCDSGZBEOCSKBKXWKIAP");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.649875123438;
    tmp_tmp_msg_0_0.lon = 0.433517507959;
    tmp_tmp_msg_0_0.z = 0.0732332142012;
    tmp_tmp_msg_0_0.z_units = 21U;
    tmp_tmp_msg_0_0.speed = 0.617573168705;
    tmp_tmp_msg_0_0.speed_units = 14U;
    tmp_tmp_msg_0_0.custom.assign("USOWTLAYOTIVTTWSANVXLTFHYIRIIHZIXHJYHCWRHDPWZEOPMJZHPEYVFTSZGVZPEAFLXYAOCROFFUDQMXZBGLRMETJOCFNPUVYZFDVHOJYKCQEMFJCJNDULGPXXIGGPBPPUNNGOIBAVRWKYVKQKCSRLIX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::HistoricTelemetry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.altitude = 0.308464585953;
    tmp_tmp_msg_0_1.roll = 52188U;
    tmp_tmp_msg_0_1.pitch = 37428U;
    tmp_tmp_msg_0_1.yaw = 47260U;
    tmp_tmp_msg_0_1.speed = -24585;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.487642810476);
    msg.setSource(55490U);
    msg.setSourceEntity(207U);
    msg.setDestination(44649U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("LTOADDKLEBILRFHVMWZAZWUKHBKJFOCGKKFUZPM");
    msg.description.assign("RWJCELRGAMJPBHMMVFLQBSTZMJBCQGTTDZYDKNGLUVOFQVNEPTFUKMQBEHWKPAACYXUKCXKVPMFRAGYDDKSOBLHHIFQBGMARTMOPESDOXINWDPSAX");
    msg.vnamespace.assign("MCCKUEQDQEGZADIMYZBLRZNMWRNNUBEYFYRLBAXOXMYSJIFHMFBSQVLNUSETBFASWNBXDMWFKJWPONAJPORLTVVDNTVGTISVCRKOAFYEHWUPHLOWXYXTTLUELBRGDBNQALJUXAVXJWJGPQKPQWJBZDYJEGZUPHCZIXBP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PHCWDEEIZBYLORDMYDISTSPCREXDUQGLYUJWWHAGRHDMXMQHSFITVBGUIXUDHPZKOCSNMFUMJVVMLOBANIVYPTGFSSXCIZUUTZQYHCBAYJNGPOWBKEEUGRRCWEOXZCZYLJLIOBDZSQLLXZGGASFNOHTNHVQJ");
    tmp_msg_0.value.assign("QYHGUYBKXMWPQKRYEATOLWUAHSUSDYELTSXFNAFWUTVDVAUCLTHIBSSJELCHFUGVMSHIFLLMRWEKOSWNDVMEXFRZVJWOFMKODBOSGTXWNVDPPUQMYCVKFFDHOJYVTZGGBZGCBNMQBLXP");
    tmp_msg_0.type = 166U;
    tmp_msg_0.access = 222U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JRCEJGIWSOATRLXRJQPZCBTBVDWJVRZGWMFPDIMCKPOUXOPJPBFAOTEYPUQBHKHQMILAIPTADDYOCKVTCRFNXZZCDYLEABHEUUNBFMFDCPYIEISJWQQBZRDLIXWSJLXURKXFOBQTMASXUTMOWQSEWHGNNZIBGLVSHZNJBHYGEUUOX");

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
    msg.setTimeStamp(0.470773462346);
    msg.setSource(12832U);
    msg.setSourceEntity(54U);
    msg.setDestination(13274U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("HHMUMDZJLBFXLCSABJEENTFVSVQKVWWPWIKPYKJXIUZLKRRCFWVDORMCOYSNZFSXGCQSGIBAKSTCNUOAGQHTC");
    msg.description.assign("ATWLMWKMAELXGWCOMHHQNQOSXJCBEEPZOYLALHOVBFZEIRXQMSHYOGIBAYCABTZBVJJEKLYGXTSLANRTAOQTFKKRMJFFGLRBUSQYDUBCHPDYHUQKJNZOPUPOTWTNBTDZEGOSNZLZDTUMPIHIGMQHPXXRLWCDMTXDVUIFKYWQXCIAKYNJEUMVSBFCEMNWDVPNVZJXWVZIGWJSKVFYDVYOFJGCISQPXCKANDRSIJRUZW");
    msg.vnamespace.assign("ZACXDQYOMFMJSNXSYGSCTVDEZCELENMKPUGENPWANQKZRRSJPFWDVXFMVDIEHUVLB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SIEMTFSXECFCHRSINWBNSZELTKWGOYTYAI");
    tmp_msg_0.value.assign("ICFRPCABCBXNGOILVDLEXVDIHRCTMSF");
    tmp_msg_0.type = 132U;
    tmp_msg_0.access = 110U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JIPNARAUVKHUQLQYQIICNGQXTZQUEEPXNVFCMCVLYBNYMQEZHQFSIBUKLHVKBGGHGYCFKAHZ");
    IMC::CloseSession tmp_msg_1;
    tmp_msg_1.sessid = 1251956138U;
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
    msg.setTimeStamp(0.0961343411673);
    msg.setSource(32167U);
    msg.setSourceEntity(18U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(249U);
    msg.maneuver_id.assign("YEITUCABVXCITYWIWOKEGBATOURMRFVOSZKGSJSMRCAEJMBZXFDZQFXTJYZAHBFTMHMBLPFQMWLHSPEEXPGXQIQHEBGWGHFWDQURRPVYEUJQCJOAIFNELCPORADHSNFILSLYOXQAPCRILARZVGKINJUGVMJXJBHFJ");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.852243730048;
    tmp_msg_0.lon = 0.0508943680254;
    tmp_msg_0.z = 0.913194331235;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.494864095143;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.takeoff_pitch = 0.0552441783243;
    tmp_msg_0.custom.assign("ENBQMNUZVUBRMTJPEJTAUNIVLYGIBTKNTBWUL");
    msg.data.set(tmp_msg_0);
    IMC::CloseSession tmp_msg_1;
    tmp_msg_1.sessid = 1167610727U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Turbidity tmp_msg_2;
    tmp_msg_2.value = 0.842923779247;
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
    msg.setTimeStamp(0.0548797379968);
    msg.setSource(25594U);
    msg.setSourceEntity(111U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(24U);
    msg.maneuver_id.assign("LETBRJPNVSINOYAEGBJYXBKZSVVILIQCZVUORGEGARJTRYTKMS");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.30296313319;
    tmp_msg_0.lon = 0.630736299203;
    tmp_msg_0.speed = 0.00362306321776;
    tmp_msg_0.speed_units = 177U;
    tmp_msg_0.limits = 51U;
    tmp_msg_0.max_depth = 0.332464291532;
    tmp_msg_0.min_alt = 0.329432232181;
    tmp_msg_0.time_limit = 0.698920056311;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.493555222894;
    tmp_tmp_msg_0_0.lon = 0.0336144011629;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("XTDGQYDDVVLIQLZEUNPQTHJWSIMVOTLZBNITDZRBJFADIWGOMKZXLCUMPLYBEYMWQFXBFYSEOLCGJBZJJIKKHCIBTWVRNJKHRFSXXWRGUIURIRUNFTDHRYBOYAKQWMPX");
    tmp_msg_0.custom.assign("VIJCXSZFAYOUTDBUNXRHVYLNJWRMZZTXBEIRCVCHVANNJOKBYPAWERDADHSLSDSLLSGRSGKGWJVTMRGDOZZZLLJHMFCDUZSUEBGPOHTPAPTKBKXFHRMEVQPNZCAHGYUKOELWQMJHK");
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 62844U;
    tmp_msg_1.lat = 0.501747837845;
    tmp_msg_1.lon = 0.288583168183;
    tmp_msg_1.z = 0.612708380781;
    tmp_msg_1.z_units = 189U;
    tmp_msg_1.speed = 0.847210909218;
    tmp_msg_1.speed_units = 202U;
    tmp_msg_1.bearing = 0.311951276275;
    tmp_msg_1.cross_angle = 0.0596718329679;
    tmp_msg_1.width = 0.107450886988;
    tmp_msg_1.length = 0.199378529755;
    tmp_msg_1.hstep = 0.00140148182089;
    tmp_msg_1.coff = 40U;
    tmp_msg_1.alternation = 206U;
    tmp_msg_1.flags = 183U;
    tmp_msg_1.custom.assign("CLVDVVDZUZRCDYPTBCJHETUBZNRMGGKMGLRWGFHTTEHIIXQSRGLXSTVPKNTGWXS");
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
    msg.setTimeStamp(0.971844051833);
    msg.setSource(41917U);
    msg.setSourceEntity(52U);
    msg.setDestination(24270U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("ZDQKNZCFMZCVRFTZHOJDNPAVGOQSYIPGXTHNLIBJOIYESMYPVGPZAHUPDRBQWQKERSJQMFGURFMXTFROWXZEVXXONOLNUKJLSEDPQJMTDSDABEKCFPTAVCBJPIVGAJEKSYBLWKEOXTWWLSFCDNLKBIUZIMHXQYKPYVYODLXYAAMURHBNFICHFXGHANIUFMSLMUETKRYKICGBTNSVIYVW");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.19948967913;
    tmp_msg_0.lon = 0.0872020198385;
    tmp_msg_0.speed = 0.351868797671;
    tmp_msg_0.speed_units = 191U;
    tmp_msg_0.duration = 39055U;
    tmp_msg_0.sys_a = 63645U;
    tmp_msg_0.sys_b = 41242U;
    tmp_msg_0.move_threshold = 0.0580893930845;
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 18875U;
    tmp_msg_1.lat = 0.265440848844;
    tmp_msg_1.lon = 0.391119209453;
    tmp_msg_1.z = 0.102996393804;
    tmp_msg_1.z_units = 46U;
    tmp_msg_1.speed = 0.271063961601;
    tmp_msg_1.speed_units = 251U;
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.852992900518;
    tmp_tmp_msg_1_0.y = 0.526391054726;
    tmp_tmp_msg_1_0.z = 0.0515039037663;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("SYIFKSHAULRLXGDXABBALEKFNQSZHTGMZQFGOLXYCJWDUCPCYGKDVICPOVLGUEQTKUNTUTIAZEWVTIOCYDXNDQTEWKEWZQRNZSYZDBOSWRNYLUPMIZSJWHPSHIPFLENFRJVKI");
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
    msg.setTimeStamp(0.721057672877);
    msg.setSource(51530U);
    msg.setSourceEntity(186U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(17U);
    msg.source_man.assign("CJDQTIKCTGATTNZZNFHFOFEVFXGUDVDGRODEZHXRKUAMHCFMPBPSGWPLQYATWSFPAILOPPRHZSOMWRRXIINJHPEMJJOHUVLFCRYSLUKVTOPGXCBYHLGGIWIJRLEFFNIGANDPZUWSHSRZEBYNIQYOQKZSXUUEQCKBZBOQMLLMDKWYTFRVVYUDOJYNIBHWVBENTSQVXWOSJDLBB");
    msg.dest_man.assign("DGNTFEEBNNLLDMYVBFNZHXPHQVBZLPRYTTFPJDDUXWADADDQSDBOTPYNVWVJIAZNCKXCFKRHLJUJRFEMBIHWGUKSYQHXWJEIYGICGSSLIDXMSLHWVJXZUCVOOOPEKFRBPEHCUSXWBQYWNMKWFDUGSZYHFCLPKSRYQATRFCBHGXBXVZQTOBMEQKRKZPAENOIFKMGRZTRAIPRMOUSUJKCAGPSEU");
    msg.conditions.assign("TYVLLMSRBDSXJQFZKGJCMDEMVXRFDERYXOLJDQPPBJUNEHAKYDNGWYCMGEFIMQFGNRQQTDBILYZIOECIENSYALWYBSYOTIQCOTUTIJBMMDKZFCMJLOCWZRJSWFOGHOKSNFDHGNRYJHKUACUPNJUXXUAHOEPOAGFHCUZMPTAPFNETRGXLDHVWQWAHLCWNAWSBHNZKRTZYSARXOPPZKPJSKEQBBDWLXRTTAP");

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
    msg.setTimeStamp(0.690834179621);
    msg.setSource(53176U);
    msg.setSourceEntity(157U);
    msg.setDestination(27588U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("EMNKFUKZIDXMOBUXITTZXBAYVHOCORLGPHEAWBCVSBMKGDJMIPYTTOOXVBULGFRLTGXHUARIQWNTQEOHOOGBJQTQGIFHNLDJFMRVTFUEFDELKEAJUXZIHVFOAJCQEQBQLIXDWNUXIZPNNDSCJJVDZRMMNQYOMJLIWVBSPHVBZYGNTRCAJGZYUHBRSFCRZGKPWRSEWHQKLNMHUAWVWAYRZKYSLS");
    msg.dest_man.assign("FTLGJHVXQZSSIZQDERCJKLQGITVFWTJLSQKQVOTHABMJOLCZRADIYIFHUFYUAKJZCXSOLMBAWXKBNMUGFYSJMEEDTHCZHVSIKFCNJAEESHGNIUVMPBACRSNOCEDFEJCLGLAIBPYKAMOZDPJWQPSNVHYIBHRS");
    msg.conditions.assign("DJTCKFBTBIIWPOYNYPUOIYIMJIWQNMSVEHGPKCTBBVUVTSWFPPKDBMOOGDAHMAUVAKLJLKCNLKNNGYHIXSEXASACTZVCJBUYXDSFFUPGJBNSDVUZKMHWUIHULEQKQLENKFZYFCZQMEQVTCTWOXYVXNAJTMPOYAWQJTOCDOGWZHPSWNPBBPLRMESICMLXERCLGHOXZAINFLWHSADRZQHWZHFZRGRJXXROREXARRZLUGGQJEVFUYDSVQTFB");

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
    msg.setTimeStamp(0.546671442226);
    msg.setSource(48735U);
    msg.setSourceEntity(129U);
    msg.setDestination(51008U);
    msg.setDestinationEntity(222U);
    msg.source_man.assign("VUGQARQZQYUVKXYROBTZLDEMRRPRHETGQPCCFHVCQMXISSXUZHUBIMNTGGOXTNWWDFSLBPDOLCFZVJXDIWIBTYVPCHIHQDJFEBFAAGNJYZROAWUNFDPMCGXYWPPEAEAUXRSDDYTZKHCNW");
    msg.dest_man.assign("IEOPFDSISWYJTBBKUSPPVSUQDKAWUBOVPKPHBKARBQFHQQALLRFCYINHMTHGKIZWUGOPQZMRHXLBOTUTOEAHSWMDHADZCYWYLUKEZYGKEFAOERRLFQVIWGDZHMPZZFSJWUSYDEOICIXCFZJQUYBON");
    msg.conditions.assign("ANJPFLXYHKMKCMBQYPXYZJOFQYRDRDQGLFUJBRLAHSVEVVMZCUZV");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("NBXDTDIVIHLIOQNICXVDNEGDQOCYPYRSCWEGZSKJXHSMQPENGPBLCTFJRGJBFWFKUANUBUBXKBJMASISXUSVPFULXTDRZGJUEAIOSJPKATZESQBUGCLMCYLRGWMVPAKKYRWVAFKJHOTYHTVKIYWUOANDIDYEUOMHWQBCVDHASNPGRCMRBPQFSLHICEZQPZKOWPZBWZFOOGRRLMZ");
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
    msg.setTimeStamp(0.276391203779);
    msg.setSource(30687U);
    msg.setSourceEntity(232U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(153U);
    msg.command = 84U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LMWPTUHECGNESQZUSROWXYSFYEMTJPPIVFJFRYQFQAXWZXQTIUNULYVTAVELVBRFACESHOVTWIQPZLEINFIHGJCGMSKFHORTYDNIMKLRQVEWXKKBZMVFAPXQCJUYLPCQBHACKICPVCBUMWTZSTUCNZSAXROWDJKHDGSJDD");
    tmp_msg_0.description.assign("LIXWSISPKIWZDDDVQEFYQUWPHGQAQKLCZKZOCQGVLACVNRZGGSOFYXUKYGWYBOJYUUTNXLNKQVRNKMRZEALSEUFZBTTDNJXZNPZKWCUXIJPHPUUIIDBQJUTBSYOQGOEILFNGBVF");
    tmp_msg_0.vnamespace.assign("XRVLCSVRUTPOJBFCCGSEZADEIHACXQDMWKLTBJKRYKNHEUOFWGKBGSAGTTZWFRJVXEJRBYPANIKYKGSPJNXPSFMZNHMZVNOORIYGAKQMYIWSTLUDLGXBSJXLOWYYJEPUZGIJQVFKHNGXYMRXLAYXBDIMUGZYQSUNQHCNIDOF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CXTZWJBAGIXLAEJPNUSIKIDQKZWTGXBNPKFZYBZUSVGQQLECZEJYAJVCXDRPJXQVDWBLSGCKVZKHTFILWMUKWTLUXOPZOVNYZJALIVBALLMQDAKURMBADWMSSPDFPSBONCRMRFGBHBCRGWDNKA");
    tmp_tmp_msg_0_0.value.assign("DEMEWDUBCDRTZTVOGBMGAPEAFQLQTYJXARPEVOSSKAMQEYGYJGWZOHGFNO");
    tmp_tmp_msg_0_0.type = 48U;
    tmp_tmp_msg_0_0.access = 212U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZQMGSVFLTPYXYFFNNELHOCPHMPNBCTVNKWNWQY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QWIWFUBPSMZAAZTTRYFLNQKMKOOTJ");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 22202U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.924430271508;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.508261707016;
    tmp_tmp_tmp_msg_0_1_0.z = 0.957066104698;
    tmp_tmp_tmp_msg_0_1_0.z_units = 215U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.187335404463;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 116U;
    tmp_tmp_tmp_msg_0_1_0.duration = 59915U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.746999143606;
    tmp_tmp_tmp_msg_0_1_0.flags = 53U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PLRUFOSVDLYYJEDGGRQFFZRSQWCAHMNGMOZEABMDDREYGHCWXBHWBMBRCVBXDFHCNRNTTTKAHMIFH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AirSaturation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.394456255983;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Pulse tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.289195448187);
    msg.setSource(62547U);
    msg.setSourceEntity(229U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(224U);
    msg.command = 188U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HLROJVPRSFBMESPTVYBRQTTVVRYMOQYXKTFIMWHWACRADJBUZWLWPYGFSFEBLBLGNGOSIWPWUPZXVTVEZYIHIBAKGJMYSASDSZVRZSSPQBARKZNLLJKETQCJ");
    tmp_msg_0.description.assign("MPAEYXPQJTSBAUJRZVEAYSCNPAWTWNQBBQUUTCZRRKGMHSTPUMYIIVLFWDJRVWXJFYNZIFHQGRMJUXWPZPUCGSIGXODUIAPONBEZN");
    tmp_msg_0.vnamespace.assign("DNRNAIRIWVVBCJTVDEHKQSZEIIXULFT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XVARFGAVEVBQGXMUBYTRNZUTKIRGOOFQCOLAXFMXSPLWDQKXHJQQIFWKJDGT");
    tmp_tmp_msg_0_0.value.assign("PMEZUPITBMHWCGOBGATINDWLZGWIUCDXIGDMLTBZNBTXAOJKMZSPNLARONOSTWRHUXKRVFWDMVQKYZVQLKPEKQYLUJYFBAAENGACXENMLMRVAWDTQBFZIOCFSQMPPCGPGEJLRCXKSRQYLCBJHBFKHYAWATSIRILYDBBYPGRHDGAXRESFSPZSUEFWUDJNIOQVXICJHIHNVDNCHVYXJTVWEFDXOUNEUOGVHMYCQQYMJ");
    tmp_tmp_msg_0_0.type = 208U;
    tmp_tmp_msg_0_0.access = 72U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IYOKWWDZEVLRNVMCADQDIIJPKJBRVUPXBQXIJORUKJGFLSSKTXVGBITQLWTHDKVDKCTMSJRJAYIAWDBHXLRBFEMDCIXSJIFYBULQHBVPPOBSOOEYNCTBUUUCRHCODLGWIMYVAPGCMFQSAYZNJXGGZNDULYHTENYTGCFHZMDHQCUKXEZTNQKFRFEAOWMBVWELQAASZAKQNLCNGXPXUMYSQWPMRHJSEUHREEKFP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SEBGUSMBRSPWWKJLXAASISEARKDNXUSWCEPDKQRTFYGDFEZYEHFDZFAVKBALGNLMGCEWJUMQCZZJOUMHXDWQSLMFFSHYHVWTICIFGOKOCOIMKULBBCYCYRNRPCQRZSUROVYFESOWXOYJPQVTINQ");
    tmp_tmp_msg_0_1.dest_man.assign("WGGQJZZROVAQQQDSEHUBRHVMAINMLILCVPSCHBFSXDBVTBALTTFJQDKKYKPDFQJTYXKGOXWMUMYRPPFAUHTISNURQKAZBWF");
    tmp_tmp_msg_0_1.conditions.assign("ZJPYQTMNDLYMRUNEZWONUJSEYPCTABZJVQWIERJWUVIEFCPOBYEUPOUGDHUKXXASFCTKHNOQGAKBVNKSQMFOVFJRBDMWDWMITAUWHFGHGPQLXYDTZOZGQJMPMQTCVIOFADDMLHLJFZXNQHRSPYRLEHUKAGRETNZYGERBXJIASBMIWVVOLBGVBRTPFOGXHLSWIN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("STGTQPMEUELXOGIHPRAASZYWLYMFDXTRDHEMMQADXNKREY");
    tmp_tmp_msg_0_2.state = 113U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RemoteState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.327141870494;
    tmp_tmp_msg_0_3.lon = 0.836801199008;
    tmp_tmp_msg_0_3.depth = 154U;
    tmp_tmp_msg_0_3.speed = 0.514500478973;
    tmp_tmp_msg_0_3.psi = 0.223087977919;
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
    msg.setTimeStamp(0.300148434864);
    msg.setSource(21608U);
    msg.setSourceEntity(154U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(127U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQSZWBPBQSFITKOGRTRWCQSUBTARNFMNUAGHTASPHHCFAVNQJDKG");
    tmp_msg_0.description.assign("WYELAHDGPBEBCJBALZORDXWPFDPZIVNSQXFWLIMEZZGQSNXWNXXRFHCDZINUBLZDIWKFSNYYMNMPTLQGMBOXYZYJTGEQVSXGYJTDQ");
    tmp_msg_0.vnamespace.assign("XLDBTHRSPOHGAWVBCOKQINJKKGUZXSRFXXKLFFAZEDWYJZBCYNLJ");
    tmp_msg_0.start_man_id.assign("JCRPKEODGSCTUOUZRMXSMSQETYOYIYWMZDFIFZNCVRAOBIXOMUIMVIZYETWQKHRBBWEPHLKLVNAYJNTQVAJKNGKDJQYISTEGPFELAAGMSVZAIZTHWTOOJSZTNJPUXCRRAHUWKGLPHLABUNSBMWRPEOKFDPVSGQTCCGGKDDQZQYLCHXBHFQWZOIBWHUBFFUCDANBJOAMLYIYXTIBVQNZJPW");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 5605U;
    tmp_tmp_msg_0_0.lat = 0.0292403660511;
    tmp_tmp_msg_0_0.lon = 0.570882030833;
    tmp_tmp_msg_0_0.z = 0.0733692348302;
    tmp_tmp_msg_0_0.z_units = 84U;
    tmp_tmp_msg_0_0.pitch = 0.708146834621;
    tmp_tmp_msg_0_0.amplitude = 0.000486143340171;
    tmp_tmp_msg_0_0.duration = 44313U;
    tmp_tmp_msg_0_0.speed = 0.257759542182;
    tmp_tmp_msg_0_0.speed_units = 16U;
    tmp_tmp_msg_0_0.radius = 0.0905970303909;
    tmp_tmp_msg_0_0.direction = 33U;
    tmp_tmp_msg_0_0.custom.assign("DPDRMTUSCHJWKWMIWRAJCSOYFALUJJABNBBXKGTTDDCMGATOBMSYHGBGQZWLUMIKXLWUDKKYACQEYPJRUFJPSTJBV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ESHXMXRRCZYTHYYUWSTZUNRARAOSQOPLLOTIWOGQGGQKUIVQBJCUDHQGCCBLIUMEOZFWJSPYAGJFFEANKWGNIGPV");
    tmp_tmp_msg_0_1.dest_man.assign("ILBVUAGBYAEGLVFIDTQUSRWPBOOFCFJNYBZSQEXFMQBBMJLUUPY");
    tmp_tmp_msg_0_1.conditions.assign("YPOVRRVJFDJNJCFJHVCTEZUFDUNGUTTKZMRXPCMWWLPOGZSEVIMKQAFCYWNQUBAHWYLBHXGAPFOTHIFGHQDSKXOKCKERSRSBQKYADNW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.835744698342);
    msg.setSource(53416U);
    msg.setSourceEntity(178U);
    msg.setDestination(64469U);
    msg.setDestinationEntity(42U);
    msg.state = 168U;
    msg.plan_id.assign("DBCZKUKXLGVJWVFIAGHXZVBZVNRHLPGWWMJKMDITTYSHPPXRIVYOXIDIGNZDFU");
    msg.comm_level = 49U;

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
    msg.setTimeStamp(0.338179942288);
    msg.setSource(3580U);
    msg.setSourceEntity(166U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(239U);
    msg.state = 148U;
    msg.plan_id.assign("XXRWMQTHEMMUQFFAKIXQMCYYBCBZJKGPCGLVDXQLGIXJJSPNOMWSOBNATCLUUYVCXOZUXQTDMUIBVYZBUFAJFFRZARVPSHQKDEWGDJXOWHOEHWTAAJGANTPPLKPIKBLLDSWHGSJLMVEJRYVYSIRHOIGYDYZHPFNOQSEBUCKHFNXONAIVCGIVRASWCCEADYKKZSNQYBGVUQLBELEMLTRZIIBZCPXTNZRTFKPND");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.433817426011);
    msg.setSource(52506U);
    msg.setSourceEntity(1U);
    msg.setDestination(56213U);
    msg.setDestinationEntity(9U);
    msg.state = 121U;
    msg.plan_id.assign("LOWCFLWDWCAGGDOKMUCDTOVSSQNXVTGNJMWSWIMVQCKNPFASTRBKVXYBHHBRSEQWQKNJAYZSMYKYEFALPEAJURRWUYGPFSQYZJETZQNNVFOHWNBLXTKTXXIKPCLEZJIBZAZZPRLSWHJTLNVIGGVOUJGYMVBXEIYHRGPDDSFHCCMDJOIZBTYPCHQTASVOLEUBUNMLORRDPEJICFKFEXXDCTZGUHGBPQQF");
    msg.comm_level = 80U;

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
    msg.setTimeStamp(0.814666694144);
    msg.setSource(11727U);
    msg.setSourceEntity(235U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(108U);
    msg.type = 247U;
    msg.op = 234U;
    msg.request_id = 37583U;
    msg.plan_id.assign("ZDVJXKHGBSOGAWNXJKZICZOZAXMTMUPDSHRTXRWRLOMPCUPTNENIBLBAIBHUYGRKEJKQMTTIVOWXVRKFQCNCEGHZIKSFDNRTHNXYBCYIPUFCYDNYGVKWWJMLHYBKPNWBLZWOGORRGRUPFSJQJDHWLQKQGSBVCDSVTYOEEZOMYAHQQIMEWBISOTZIVPUHJAKFNFSVOFFVYMAJSQFEGQFSBMXNLJVCEAXTDTDHXXZPJIRPUGALEY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YBYLCTYHRKWQPQJQNERVXYIMPVYEKKXVITJLZOMJILLKTIGFIFGZUDLLMICMUAWQRWFVKBCREYKTBHSVDZZWUZRFTHAPQQNFWGOWPFCOXJJGKNWOFWGKATDQSDXMJUOMHTBSAHAHESQOEFJOOGSKYCTSTN");
    tmp_msg_0.sys_type = 160U;
    tmp_msg_0.owner = 3191U;
    tmp_msg_0.lat = 0.821156827031;
    tmp_msg_0.lon = 0.550849782433;
    tmp_msg_0.height = 0.385885156085;
    tmp_msg_0.services.assign("MASOVTYZKZLFNCBELZVBPVCWRGOTTZCVUYGSDIAVXYHFSXZIXBNCQXDTERFFLKLESFFORSCRWQMAHAXOETDLIVYWJSKWIRANJABH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MKBBQXACRLXHYGZWNCHWTVSETDJVCRHCOJUAPQAOJLQEKDNFQYYFYKLYISHKUHHDDGZVOZNRBIBLYTQMTEAXIUDBCPLRTBSVMHTAJGUMHOCPEFGIOY");

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
    msg.setTimeStamp(0.186752687598);
    msg.setSource(55736U);
    msg.setSourceEntity(51U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(128U);
    msg.type = 140U;
    msg.op = 203U;
    msg.request_id = 11902U;
    msg.plan_id.assign("LVBRJXZUFISFPGII");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 72U;
    tmp_msg_0.entities.assign("JAKSMZPICFRUNHKJUBWKYLSUVJHJNYDQFGXQLXHMOQCBDBQFDPPQQADSWAMSFEYXEFTWDNOMYTCV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JJVNWZYEBANCBGYHBPTYXUWGHIVGMFALDOKERSDMOZKXTWJJKWZJKHARVDYNETLXRMPFSLCTVW");

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
    msg.setTimeStamp(0.0847496232898);
    msg.setSource(52212U);
    msg.setSourceEntity(198U);
    msg.setDestination(53242U);
    msg.setDestinationEntity(154U);
    msg.type = 214U;
    msg.op = 204U;
    msg.request_id = 43178U;
    msg.plan_id.assign("XBHBCULXWFDDKGUETJFKYISCFFSAMMNWZ");
    IMC::MsgList tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JFKOBPJULDWTPELSHXGFLKUKWIRFRYQFHUVXBSWNQRQNBMUDDLIBJZMONMIVVQHDM");

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
    msg.setTimeStamp(0.330086878116);
    msg.setSource(47540U);
    msg.setSourceEntity(8U);
    msg.setDestination(29243U);
    msg.setDestinationEntity(41U);
    msg.plan_count = 28885U;
    msg.plan_size = 3408726349U;
    msg.change_time = 0.884011081818;
    msg.change_sid = 47831U;
    msg.change_sname.assign("PYGJSTMKDAWPQRLLURZTURSYMNLLAHZCESWMWUSMODDEMIOWNKYQUJGJHTKJHEMQGOAPEUIVRWOXBXUCVANVGJBDATPHBNQMIPZIPSYEIRVFXHGDTURWZVSQFBTKYTCOHAFECCGYAQFTXNKLUHQGXDDBIETSVKIPZKCDQOECXLLPSMFPFYNADBNZQVJDHJVRXAFWGGSXFUJAVBZMYNRTFRKZYWWVHIJ");
    const char tmp_msg_0[] = {100, -103, -61, 49, 87, -90, -22, -125, 89, 31, -53, -30, 84, -58, 39, 8, -116, 15, -88, -64, -13, -40, -113, 3, -12, 44, -118, -63, -41, 29, -68, -104, -26, -7, -37, -51, 122, 6, -32, 121, 81, 110, 56, -86, 17, 118, -88, -72, 45, -69, -8, 60, 102, -98, 32, 49, 98, -95, -23, 46, -112, -66, 87, -2, 28, 54, -19, -90, 63, -52, 15, 11, 29, 71, -48, -21, -88, -87, -62, -89, 72, 39, -18, 14, 73, 117, -98, 105, 60, 45, -109, 29, 40, -25, 50, 89, -29, -94, -114, 27, 1, -96, 84, -99, 80, 52, 53, -82, -107, 55};
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
    msg.setTimeStamp(0.016678477334);
    msg.setSource(22218U);
    msg.setSourceEntity(90U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(139U);
    msg.plan_count = 19730U;
    msg.plan_size = 819860676U;
    msg.change_time = 0.336652841903;
    msg.change_sid = 25789U;
    msg.change_sname.assign("HXQXIBPIBAPQEKXFZBFYIQKFFZLOONIKWNPEHYRZDGOUWJZNRSMFLHQIZEXUSZFDEMRMLCWXCKCNLMROHLYVCCVBTQVGRMPEYHUAAAAJENLYIGBXTZHGFGDTSLRGWLFIHLOXXBDWUTDULSPMSJTSAVTFAJZATIMDOFBJCKORCWMTOQMBJDBUQCKYUNYVJKRJCBQKPWKSTESJPONPGWWYKVWS");
    const char tmp_msg_0[] = {-27, 14, -8, -114, 16, 115, 45, 20, 42, 99, 124, -38, -117, 42, -108, 34, 120, -121, 121, 39, -48, -62, 74, 52, 73, 29, 47, 71, 89, -106, 98, -120, 26, 119, -70, 55, 101, -24, -99, 72, -117, 70, 26, -80, 28, -31, -21, -34, -119, -83, 83, 113, -42, 59, -42, 34, 109, -91, 42, 44, 20, -99, 50, -99, -73, -30, -52, -80, 122, -48, 6, -6, -72, -10, 52, -4, -122, -126, -29, 14, -30, -68, -117, -13, 54, -18, 107, -74, -1, 33, -12, -113, 126, -22, 54, 46, 102, -64, -21, 17, 90, -16, -6, -85, -60, 113, 123, -4, -31, 66, -8, 57, 61, -79, -128, 45, 64, -68, 15, -89, 83, 119, 31, 38, 102, -94, 95, -73, -98, -36, 125, 77, 97, -80, 73, -106, -1, 32, -76, 78, 72, 118, 118, -71, -91, 106, -56, 99, 63, -58, -96, 17, 22, -64, 114, 66, -92, -55, -5, 96, 29, -61, -100, 33, -2, -122, -73, 35, -78, 7, 1, -84, -37, -28, 114, 116, -40, -128, 100, -89, -113, 67, 92, -80, 48, -95, 126, -109, 36, 36, 4, -23, 24, -99, -47, 75, 50};
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
    msg.setTimeStamp(0.508975797009);
    msg.setSource(35973U);
    msg.setSourceEntity(222U);
    msg.setDestination(25390U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 35254U;
    msg.plan_size = 3940854535U;
    msg.change_time = 0.744201933767;
    msg.change_sid = 26237U;
    msg.change_sname.assign("NWKONDOKRXIZJRDTNRPOSMUNBFMXOYZSNIOAHLZGZVOUIADHTBMDJAEKIQHSUEGSCUBGIPWYIHXZHBVTJRQCLELPDBAFQEVNEAOP");
    const char tmp_msg_0[] = {-113, 111, 24, -18, -11, 82, -61, 90, 114, 58, -60, -37, -80, 50, -6, 4, 58, 85, 17, 62, 104, 114, 69, 120, 47, 108, 48, 74, -88, -115, -94, 63, -34, -11, 88, 106, 105, -72, 103, 74, 27, -36, -1, -95, 110, -65, 91, -35, -14, 66, 56, -5, 86, -52, 8, 68, -43, 107, -114, 80, -11, -4, -42, 31, 117, -26, -63, 88, 27, -73, -97, -63, -55, 36, -45, 8, 78, 66, 123, 1, 119, 23, -72, 118, 70, 52, 7, 93, -79, 121, -19, 93, 9, 42, -85, -62, 103, 19, -14, -128, 38, -54, -91, 82, -52, -24, 106, 66, -40, 121, -127, 34, 105, -56, -54, 4, 71, 7, -14, 118, -77, -66, 48, 13, -54, -114, 85, -124, 97, -40, 18, 37, -37, -6, 68, -44, -124, -61, 8, -37, 31, -43, 61, 28, 78, -107, -120, -48, 10, 81, -7, 38, 72, 18, -30, -80, -111, 38, 124, 89, -78, -10, -33, -108, -42, 49, 52, 60, 16, -116, -14, -12, 2, -96, -66, -47, -101, 83, 31, -109, -97, 103, 95, -13, -103, 51, -61, 119, 108, 23, 38, -35, 93, -110, -20, -108, -43, 117, -64, -19, -37, -37, 120, -14, 53, -87, 64, -28, 104, -5, -127, 58, 26, 123, 114, -106, -95, -119, 82, 19, -127, 96, 104, 30, 19, 106, 97, -86, 81, -47, 97, 96};
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
    msg.setTimeStamp(0.0618336169753);
    msg.setSource(54175U);
    msg.setSourceEntity(141U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("HTFVVJEJJHLBUGSUFYREQDTIYADGTWFNPYBYCPANSMVITLOCUQBSZJBQUIYWWQKVWRCLYQNBOHEMVORIOKKUFGTKPJKZXFARMSXVXUOHVXJDEXKOZGMSFMDPSALFIJAYCGAECDAGSWXBXDQEVWTLGXERZMUIPPPRVNZJBGCKBYNCQSNHTNTHZGKNLPJQOMCZZKEZDBJOMQDTVWLIMHPMUDYARUFRHXHPLTSAAERODHLQCWERNBI");
    msg.plan_size = 16321U;
    msg.change_time = 0.726441429639;
    msg.change_sid = 31159U;
    msg.change_sname.assign("VMSQHZLWRSPRTBZTGWCZQKGJVKSWJDADYHTLWRAESZLOEOXRBIHPXLMXAUUTWVESRCQ");
    const char tmp_msg_0[] = {-117, 44, -86, 33, -33, -108, -66, -8, -45, 55, 66, 16, 37, -77, -84, 78, 83, 117, -34, -74, 84, 72, 57, 117, 122, 80, 119, -25, -123, 112, 124, -30, 21, 76, -125, 91, -78, 63, 73, -74, -62, -85, -64, 75, 119, -111, -29, 104, -89, -118, -33, 25, -50, -69, -97, -127, 55, -60, -1, -73, 104, 2, -34, 6, 36, -86, 96, 62, 84, -45, 63, -8, 109, -114, -20, 18, -19, 1, -47, 73, 46, 9, 81, 124, 72, -23, -79, 43, -108, -117, 75, 35, 71, 16, 13, 105, 52, 105, -60, 48, 112, 18, -10, -111, 108, -118, 30, -61, -10, -54, 18, -126, 48, -98, -124, -108, 45, 1, 65, -31, 114, -88, 106, -124, -54, -27, -113, -117, 18, 106, 21, -120, 18, -123, 20, -120, -125, 63, -13, 56, 109, -11, 32, -107, 18, -5, -40, 76, 27, 60, -69, 120, 51, 83, -89, 23, 44, -96, 32, 20, 39, 88, 104, -32, -30, -115, 80, 4, 30, 94, -27, -125, 39, -65, 11, 110, -70, -53, 30, -94, 13, 68, 55, -12, -4, 10, -72, -91, 23, 55, 82, -121, -125, -110, 34, -119, -49, 111, -91, 114, -63, -90, 125, -62, 5, 125, 70, -1, -42, -22, -80, -126, -4, 51, 93, -108, -15, -83, 54, 70, -37, -21, 45, 77, -38, 19};
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
    msg.setTimeStamp(0.194897149178);
    msg.setSource(57089U);
    msg.setSourceEntity(154U);
    msg.setDestination(31565U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("LGMARNLWGHPMJCQSRCIOFHTLGWBFLNIPMOIUFOUFHEDDGJHRZUBEVBRRNGDEKSPUMKSQMZKVPYVQWQCFBTSBZCDCAXKUEHUCGXOCRAIUDADCRYRRZWNVOLJZFRZSILCQAKGQFIYYDPXQXJKEMEVOTVOSSYPIQYBFDXPHVTGYXITZTDMEYELTXKJIALKTFPJNNZUBQZUWOTOFDVLWPJNXAGMAAEBNEWH");
    msg.plan_size = 57365U;
    msg.change_time = 0.432724344796;
    msg.change_sid = 12508U;
    msg.change_sname.assign("MUJFYSUWWYQILKUYNRTLSKJFJBOVKNRRXZOLQJQEFAHPFHVTLJPLDQKMIIHQDAHWPXOAZPCMNNYBOZFTVRCOQQKNLMPAXDMHFUPBCBCFPWNBYNNUEXUKRBDCSVDVHEIJCVGZOKDLAERVJQHGBTDKZYZETEMHOYXCZYISLSXWFMTAINWVXIWSAMUUHWCPIYGOVGOZXSEPRAAGKSRSWLHDBJMFNJXRDJEQEBZSVDCZGUIWCKIRQPO");
    const char tmp_msg_0[] = {1, -105, 74, 116, -74, -78, 12, 9, 12, -3, -93, 93, -105, -65, 11, 74, -87, 30, -94, -106, 82, 10, -81, -91, 53, -101, -86, 60, -84, 109, 78, -62, -42, 37, 112, -109, 88, -109, -90, 61, -1, -71, -102, 92, 27, 80, -68, -96, -82, -117, 101, -76, 55, 47, 8, -7, 73, -15, -43, -127, -47, 23, -95, 52, -62, 7, -42, -66, 124, -122, 9, -39, -60, -13, -79, -80, -65, -41, -101, -63, 97, -21, 91, -19, -26, 43, -47, -48, 66, -81, -89, 72, 40, 109, -42, 24, -87, 36, -122, 124, -78, 83, -7, 18, -20, 119, 69, -46, 117, -83, 115, 85, 10, 94, -117, -25, -54, -34, -100, -21, -87, 1, 13, -100, 55, 79, -87, 85, -51, 74, 123, 59, 22, -112, -113, -6, 7, 121, 71, 43, -72, -106, 5, -69, 101, 69, -37, -87, -88, 33};
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
    msg.setTimeStamp(0.817759422894);
    msg.setSource(23637U);
    msg.setSourceEntity(126U);
    msg.setDestination(21628U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("WKXZJFUIBXGHSIBMQHCNEPYXHOJRAPUZMHQVKSSHBEKPYARIXLGFVXAOFRXSQZBGUDATBZQE");
    msg.plan_size = 5447U;
    msg.change_time = 0.358017449813;
    msg.change_sid = 36995U;
    msg.change_sname.assign("ACIRMRHJKLTPXSTAWPCFNQDZPDIRCHUD");
    const char tmp_msg_0[] = {-79, -79, 44, -34, -101, -59, -109, 54, 58, -100, 79, -99, -104, -70, 101, 102, -38, 14, 24, -124, -78};
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
    msg.setTimeStamp(0.902381037154);
    msg.setSource(23497U);
    msg.setSourceEntity(166U);
    msg.setDestination(47685U);
    msg.setDestinationEntity(129U);
    msg.type = 208U;
    msg.op = 235U;
    msg.request_id = 11254U;
    msg.plan_id.assign("SBQTBPHRCUMPRWNJQHMXEZSZIBUTGWZXJCVOIKYEARAXNJOIWQXKJUHKCHDVGEUKUKMHARVDPBIPIWLSZZUFLJLXKMTCVYWOENUKQUJTOFDODSTFLOHZRXDGJQYVHNGYBZERDQIYNDFAAKLMVYJQHOARTOSEUGMSSVWLIBYBLSJCFPVEANRYADMGRFTZYBICTEHSAXATFPNXXFINFMWPQOWNLG");
    msg.flags = 15317U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("NEGHJVOGSWAARMIWVPPICOLLRNURMTHYLLYWZPBIEDGUOVEBNQKSADYPZUBWYDCUIFCGIPQPLYKPZVUZKLADBQHMBQYCKCZXFXJAFZQSKWXVSYFAOEKFBKQDDMYJTLETTEWTZISURSXFODFRHXFTYZKVWLOHSFIPGCNLEHAHIZBRCPJWDQJXEUBACHGH");
    tmp_msg_0.formation_name.assign("GBTAPCEZDWHRQCOLKUXQKJVXCESOTNKOQIDYXZOPBBNRYEVWQOLZZVPAPYAPETGVCKHWAJLVKSNYKBWAVZNEZFMAEFYSSCIWEITZGNXNOOHQDVLJYGQKUPBWINQCIUSSFAHMBBMVIRRYHDUHRBIKGRKXCQFCYHFWWPSKRIA");
    tmp_msg_0.plan_id.assign("WFFJGRTEXDWLLFUWOSSVVKFFJTMOWXQAWYXRJFGSZDSGNVCNXOXGHJXLKBGEMZLEGHUCSEPJQYHOLUJPTYCTRNSPQUHODHDPICTGCZYIKQRWWQEVDGADVQQFVOVGIAMQUESTOPP");
    tmp_msg_0.description.assign("HRRXNSUANRPQW");
    tmp_msg_0.leader_speed = 0.440583717262;
    tmp_msg_0.leader_bank_lim = 0.580797138654;
    tmp_msg_0.pos_sim_err_lim = 0.300991934667;
    tmp_msg_0.pos_sim_err_wrn = 0.0703317836691;
    tmp_msg_0.pos_sim_err_timeout = 40878U;
    tmp_msg_0.converg_max = 0.164582897385;
    tmp_msg_0.converg_timeout = 47829U;
    tmp_msg_0.comms_timeout = 14169U;
    tmp_msg_0.turb_lim = 0.0190269160647;
    tmp_msg_0.custom.assign("EIADZIPFUGHWSCFQGFCQWBTQGIYMTTXZARBHTMNLZBDSAJPMWIONBVQZNKCNAXWDXKIOZWSXPSGQHNVYJYBAKIUJLJQHRTPDSIRAYFLXZBDXOUHJD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NIJWDXMSWTEVNVOQSVKZEYJPULOFPTKJIGGLUPACGGXCBTJGSGYMUYWQMCULANHDHILYYUMNINHLDDHRBFDCYGZXAILFIAHXSMCOTQNWWJXIXEDVFBSSPKSBLHECVBWMUAOPTFTLPNLFXZZCAFQUYEXBKYYDFOVIOMQVPETZLFUMOPRBJRKQIRSCJBAVAHQWZMSBUGAJPRPR");

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
    msg.setTimeStamp(0.220631127291);
    msg.setSource(5650U);
    msg.setSourceEntity(163U);
    msg.setDestination(43650U);
    msg.setDestinationEntity(197U);
    msg.type = 192U;
    msg.op = 29U;
    msg.request_id = 5104U;
    msg.plan_id.assign("LAGWZAXZWUDPKZHLWQLPNOBPZEBQAWUDTNQYNTWJVXYJVXKGMAYBYRKMPABDVFXMLGMLQMXRQVGKIFJPCICFZTNJAXUONYLKHJMONOFXAGVIBGSLTRTMDKMYHYTBUFFZIPWRCMFHWACDXETNYDEOCIPSSPWD");
    msg.flags = 10042U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("OKNHYIDXMTLEZMXMARSVCOXLH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDIWNKCZOMVWSCOKGANFZFAGNPBOSUDEUPGNEMMHUWDPZBDAMUJHHYTZTRJIACNGEGILPXSJHRAAQMKVHBLDSKLGJYHUZQSWOSDSIFGEBVXDYVZTAPLFQFRBFETBZQWRIDUVLXWQEFBFTHEIXOBNJMPHDTMKCRAUYQJNKNGLTMYRLXUXZOQYIMRKNZGKRJVRMFJKIPOINSYVQSLJZOOQWVETKPFHRYLDTXWBCJU");

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
    msg.setTimeStamp(0.168074364101);
    msg.setSource(58571U);
    msg.setSourceEntity(180U);
    msg.setDestination(23900U);
    msg.setDestinationEntity(235U);
    msg.type = 111U;
    msg.op = 7U;
    msg.request_id = 37050U;
    msg.plan_id.assign("XOTSQFGCATQOKDYLZZEPBJCFUJLWFXKUSETDFIIUQJBOUFOEDHMJIGLFSNPDHXQGBRRAXTYYGAT");
    msg.flags = 27097U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2715909124U;
    tmp_msg_0.messages.assign("ZLGLRIFAEZNMOSDHFPTFDHBVTYENJIYEVUHPUYVPEKBCLZKE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HPCYEVMMGDRZYXMIYQVZROHHEGTGRQJHLFHCZDSKJQEISWZVIGYLZBGLNTMTKTUUTDBCXIJAFLKBXOFUESESOASWZCVVWLNTSHPDXLKEAPBSKBFXLJPLOQEPMPXHRBNEDMWHQOGXVRVAARQZIKYYMBUSSVNIUQ");

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
    msg.setTimeStamp(0.740756535776);
    msg.setSource(53292U);
    msg.setSourceEntity(0U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(101U);
    msg.state = 211U;
    msg.plan_id.assign("QFRBBCATHWKWMZNSJPZTKXJJIDXLRJRCRVHOZKNMLXBKQPMOUTSZYFXQJXNOMSYWPNWNDBQDUTTJTVOYZCSRGSXIYMUZAISBONAVVYMDLKLKIKDSNMFXOTRMZHYLHRGFHSGMEEBXITAECBAZPUITSPWIWFMQKWGALBOQYAYJEFGN");
    msg.plan_eta = -1619806266;
    msg.plan_progress = 0.828641378682;
    msg.man_id.assign("XSGRBBJFSRUAQKFEMZBOKWMYSGRCRMXFPHLTWUURTFL");
    msg.man_type = 15235U;
    msg.man_eta = 1381400273;
    msg.last_outcome = 226U;

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
    msg.setTimeStamp(0.364741414559);
    msg.setSource(51311U);
    msg.setSourceEntity(71U);
    msg.setDestination(42716U);
    msg.setDestinationEntity(215U);
    msg.state = 101U;
    msg.plan_id.assign("TEZYPBNPZYVHDKOTTBITNRDHLRYIGOYEKSUJGDZTXOIKBMTKGVDWMKYPNLECNKMROZNFGXJPVPXKIWGONIUDWREPJUMCNSZSAAHVZOBJRVQKNMODR");
    msg.plan_eta = 411455517;
    msg.plan_progress = 0.121264753007;
    msg.man_id.assign("VXLVKCQYETUSMJNWGPDOPKAFLFFRESVQXWWAYIRHYGWHHURTDFIHBXAPRCTVEFTDZCMCOHNXNDRLTLQCDYLXPQNVIOMYKGTGFGJBWQORFPJCOMYISQOHGDDBBUZDHJVFNLUYRHJRDVXXSKCMRHGWJJKAZVAUWKIQSEJGUEEZYLSZTLIYXTAVIQWUBBTZLZGWOSICKSUEOSGMPVJY");
    msg.man_type = 10546U;
    msg.man_eta = 1845399140;
    msg.last_outcome = 148U;

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
    msg.setTimeStamp(0.329254022794);
    msg.setSource(7269U);
    msg.setSourceEntity(140U);
    msg.setDestination(60944U);
    msg.setDestinationEntity(90U);
    msg.state = 178U;
    msg.plan_id.assign("UYVRIRFWQPBCJGWSLNWVABAPGNHVWJBKQXKCNUZDRCOYUUXNHCAINRCYHTAUFQXLDOGOJGGALQKIFSPEEQDJIAXXVXWUDHLWKTQCKFMJFGSVUEXDEYLZROYGZRMTLLEMDBMMDOUEBHMJQBDYTIVMSSKXLAWCFFHFJRBFVXXEIKWRSKCKZNETWZPZHCTSHR");
    msg.plan_eta = -1008293256;
    msg.plan_progress = 0.894948547052;
    msg.man_id.assign("OGWBWCYVJNAOGMKXULHIIARJSRQQQLUREJVICFWADAVBLKNKAZNQDYUPIFHWBBZVTVWQMMIHTMOEVKMDYEHOYOCCOVPLGEGFNKLPBGBCSFIDSZNZIWZNRTASUSEYFNLVCBJJQXXINYOXHFOGZPLRTDWIIMLEUXXKTVXNWUBHHWJUQE");
    msg.man_type = 50184U;
    msg.man_eta = 2078996013;
    msg.last_outcome = 149U;

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
    msg.setTimeStamp(0.385020498443);
    msg.setSource(16271U);
    msg.setSourceEntity(229U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(204U);
    msg.name.assign("PCDXKZXPOCRIYHCKEXUYYYNOWXAZATBZFDJWFINFAQANNVCGEGXMCVBEMCMKXDBVGOWYQMBBANJKZMLHYGCRLIWSSVHBQRJQBLDMUKJQHRZIWXAUUGVJJYUETFNXTZKWSPHNDSUPRTLAHFTBAKJXATHPFLQELGFZMSCSUQEVLLZUDCGWPSDQQVIMJRTDRZHPVIOYATPNURZULHRFDESOFTJEYMVBYPQRGLGWIMGEKNOSOKPIWE");
    msg.value.assign("UQEMNFHAXVMBGXMBDTCIOTTZKNMSIYGAOQHPXRHBYAUSJRYCYPHUWEXKWDOVTETJRCXIBCQTAIEUIACNFLSUQUJDWWJSDZRAWXQKNEFQNSLAQZZCFLYDGCNHRYORZUOCYPKDFZKQUGWDDIMGOTLPYXMOIGKNJOUEG");
    msg.type = 112U;
    msg.access = 174U;

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
    msg.setTimeStamp(0.381520251045);
    msg.setSource(49298U);
    msg.setSourceEntity(15U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(177U);
    msg.name.assign("UDFBUMWKBAQJIYQFUPOPYUQOVWLZFFVNZEIWDUGKQLUIHZMTPOQFOAWUAEESJPMNRVCKSUQ");
    msg.value.assign("UHMXEAEMIUEDNEIZSDDPKOFPLSDQOLANLRVSQCYBCRUOXTYMVVNYPDYKGGFPVCCXJUTHZUOIGOKJQAUBLTSSGYJWMLAFYIHCWVRNPXBYECIFQVFOIVYJWRMDWZMOKQBNJJQFGIHILNPKXKGBHAAL");
    msg.type = 226U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.908923524954);
    msg.setSource(288U);
    msg.setSourceEntity(76U);
    msg.setDestination(2235U);
    msg.setDestinationEntity(68U);
    msg.name.assign("ZKHGACTREFEQBPRZNWJVEFNGKVGIUDFVIJKYVTLFT");
    msg.value.assign("CDUSIPCEDOLFMHZBKZOIONJOOXGYZBCISHPRNHWFCUOQALXBWGNVOYXDSNYCAQTWVYGOVTFMGNXDMMEYJTGBUACRAITZFFRANHRFWEUIQSJUQJTYJF");
    msg.type = 112U;
    msg.access = 138U;

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
    msg.setTimeStamp(0.126335052148);
    msg.setSource(29911U);
    msg.setSourceEntity(128U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(74U);
    msg.cmd = 192U;
    msg.op = 22U;
    msg.plan_id.assign("GHHNAWGTTRGXKHOCAXKLKUQSIBYCVSMFWKONEJNFWGWHPCFWCMMMVORHNPODFBVWAEKHLCMQIREMHTTPJSPFADECQEIMOVQOGXQSEXFZBCWUREAPYEFBULZIAULEUTILZLMIBVBPJRMNQFYTSPWPJOLONDYFHLVRZIDVWKXBGZDUQLNPYXKCQXEVAXTDJQWVZSJHZKZICRXDTGSMDGYYYAGRCUDJOPONHXKBIAGIUJS");
    msg.params.assign("MZENRYWZTAQVHZJZBIVWZOTNNODBKNNZASJXCWIGAARSYDFDLHGPCYWLURDBIYUFYABTSKYLULCXZBDAPSCJXMSDVGQQCVMEJHBASBELLJIIPRDTBTEJOEHFGFNTITWXCKLGKGLFVXMKDHKJZWPOMEYNQULTROSOPRVKAXQREPJSLRQYVXFGYDYNDHFUCOMFOZUKPQFROCBNM");

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
    msg.setTimeStamp(0.291909473589);
    msg.setSource(9897U);
    msg.setSourceEntity(46U);
    msg.setDestination(21146U);
    msg.setDestinationEntity(233U);
    msg.cmd = 195U;
    msg.op = 149U;
    msg.plan_id.assign("UKXSUYXKETBWMQGZVCQLPHYFGCHLLMZERVCZIOXRGZSVNAPDVERJGTRKMMJCZY");
    msg.params.assign("QJESCYFXOBTQSWAYGAJSHOOMJNSLBSCYREDZBJJOTFJKCSZMGUGPNKBVEDRTOKMBTWCZCXYDKHNIRIDUJBAHEBLOZCTALNTIKQVXIMPD");

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
    msg.setTimeStamp(0.816143958393);
    msg.setSource(39007U);
    msg.setSourceEntity(107U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(32U);
    msg.cmd = 128U;
    msg.op = 64U;
    msg.plan_id.assign("ZYTMAQJZSXMIEVTXYDRCAJFGJWBNHNEOWNZCYZSYPJIOAZBLRJUYVNTFPPJMOLSQXVVWDNMWBXDCZMJNNMFAUXKJIYFOPTHDBVTHQSSQDFSUKOZQECRQOAQKRQDBIOBKUFPQUNKASVCYJRHRFUTELHKAFUOMIZXLHRJBLWRCKGHGWWVWCCYCRDZMNOGBNHHLGBGCKSLUHPTUI");
    msg.params.assign("FNGWNDDRNTRYJRLWUECLNGTSAVBKIIKMALUXEHYFDPESKSQUONQMCXLNSMBTZKLMVXKHHGCCSPWIKFEVTSAHLWAAVRZJDCEFUXMBVSFUTECIWDXUXGZSYBCGPEXUPRQIXQLRDFJS");

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
    msg.setTimeStamp(0.488454127424);
    msg.setSource(6386U);
    msg.setSourceEntity(176U);
    msg.setDestination(26913U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("TWHCQLUXMABYMZRYQHMZLXUJLTGDHOFKQSVZENTATCZMFYNREVBVRPWDOCYBSSVSWVAXMMBKPNXRNWNIUCKHUJNOPXDHOQEVDAWKSNCQGVJQJPABQVEPDSYKIRMFKKBYTWZHOLITNORKGAIPOGUZXFIHJTAMTOESCJLCXGIIGBEDUELCKSUGACKSJZOLDUYXGRFWYHPH");
    msg.op = 118U;
    msg.lat = 0.728260532853;
    msg.lon = 0.202571697301;
    msg.height = 0.42983113044;
    msg.x = 0.0406321239624;
    msg.y = 0.75922191483;
    msg.z = 0.632601867894;
    msg.phi = 0.417861049943;
    msg.theta = 0.603192253035;
    msg.psi = 0.773157711849;
    msg.vx = 0.596369488523;
    msg.vy = 0.748852708681;
    msg.vz = 0.565067588191;
    msg.p = 0.250721340022;
    msg.q = 0.965964918154;
    msg.r = 0.031691363463;
    msg.svx = 0.41986163582;
    msg.svy = 0.150431499883;
    msg.svz = 0.303834584943;

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
    msg.setTimeStamp(0.758814218478);
    msg.setSource(34718U);
    msg.setSourceEntity(4U);
    msg.setDestination(27714U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("HIPWUPCUJUXUPNESLMECRCYCTPARIUONYMVSELRTTJPFSBMRICXFFORSKYQQZLOHZHDQNSZCJNWXCZKRKAUGLZLORSTWTNGXQRDAVAKQWYPBOJVVBJIGWFGZUYQXPFKLQJDRTNXVAYZGKBETQVQICEHBNEGXOJPSFWLDXHJPSLBINCZOAMVWKGGFDHGKODWJTBUTMRBOLAUPNKWUATEEYKGZ");
    msg.op = 85U;
    msg.lat = 0.179189218513;
    msg.lon = 0.181198746371;
    msg.height = 0.169510499222;
    msg.x = 0.487076701492;
    msg.y = 0.148594772903;
    msg.z = 0.747612388105;
    msg.phi = 0.540755537209;
    msg.theta = 0.547718137078;
    msg.psi = 0.573823251414;
    msg.vx = 0.0204789729652;
    msg.vy = 0.712098311634;
    msg.vz = 0.532224245806;
    msg.p = 0.664268178273;
    msg.q = 0.737612402482;
    msg.r = 0.563835458599;
    msg.svx = 0.841927163161;
    msg.svy = 0.780334124852;
    msg.svz = 0.0775251942875;

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
    msg.setTimeStamp(0.658678439163);
    msg.setSource(52158U);
    msg.setSourceEntity(246U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("QWGQUFSITLSTODIHNILWJPKVANOCOWYRVPJKFNZZPFPAZTKMJDOLH");
    msg.op = 19U;
    msg.lat = 0.37165139172;
    msg.lon = 0.280698821568;
    msg.height = 0.617774192118;
    msg.x = 0.0928550091374;
    msg.y = 0.53794741221;
    msg.z = 0.500110079307;
    msg.phi = 0.755596610789;
    msg.theta = 0.137263509638;
    msg.psi = 0.964525575053;
    msg.vx = 0.907111749779;
    msg.vy = 0.635534468007;
    msg.vz = 0.0205794597056;
    msg.p = 0.874755717122;
    msg.q = 0.791960260154;
    msg.r = 0.764663979268;
    msg.svx = 0.457812400806;
    msg.svy = 0.632700139294;
    msg.svz = 0.874994662135;

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
    msg.setTimeStamp(0.16425479718);
    msg.setSource(33139U);
    msg.setSourceEntity(94U);
    msg.setDestination(14098U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("BVSNFURTYLQKFXVGIVTSPQFBCOIKAWGVMWHDOIXYVLKOJBEXGZRYOLYQZPNGIQHXWPROWFIMBUQOWJHNKAFCFYUILBHEAFYXHKESPCPLYJPAYNRPOCRB");
    msg.type = 201U;
    msg.properties = 8U;
    msg.durations.assign("KAUFRLONPHAELPWHAKNSGOSKUDFAVUIZLCXSGVBCWLWUTQWXNEMDZORXHPMDMBREVEXOCUHSIFXUMZCRHCIOEROFIJKHDZMEQPJYEQTNLRSWUZRXYACWMTWPOQYQQSDTOOKNZTKIEJDRLVRYUNUYZTBRBJEWX");
    msg.distances.assign("QMIEEPWWZFFXEBCGLXKXSPJJTDKIWKQGZFDNOGKNYLGQNZTNUVEONUQVZPLGQHDZIFYWL");
    msg.actions.assign("UOEVIMDOTLIJSFPZZZRDWHBYQATXGIFTYOPMVQUMFPNVXTKWJWJGCVXFZWLRETWFHZMHEIRAAKRFYIOXUGESNSLWMTGLHAWMNHQWIDKIMCABSHSPVPONCRYRGQJZMCEJQBVHKURKGZZKEIVXDYDFHCDFOEURUUSFGXZXSNJQKBDXTXINQIGNEGCLJ");
    msg.fuel.assign("SDGENNQGIFWANLNBYLVFVFFOJMFMTWABTEEBXLKRLKURJYXICIOVGYJOIESDIPPRQKMWDRUICPYOCJFKDQDTFALJRGSYOLYKAVHDVNEIITMQPKWOERPC");

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
    msg.setTimeStamp(0.569882452331);
    msg.setSource(7840U);
    msg.setSourceEntity(172U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("QOCQRLXWBSVACCJWNWUDMKXAUTANOHTPNCFEDBTIPZAABYLKSUTQDUOUFYTPIAOHVKDKTCLZ");
    msg.type = 23U;
    msg.properties = 135U;
    msg.durations.assign("IVSHUKQQNMCXBOBHORPUEXOZWLHYTWVEAGAJXMXZKABBHYCFABFLNMOOHHLXTKRUASQJBRWAZOUMXGDCQMZEJCYQWDRLMWCKBFKUDKENUXKAJVGTSGBYIIWRRDWZFKESQOJUTEETELQAHIYPZNIJZCTVUJCVCXPTWPCVHYSDVVUVLNICPHPSNMYHGPNWPNIIFGRGYODGPDXKLFQZFWADDNYTKB");
    msg.distances.assign("EALTEILHDJJXAZYAJEXCGTWXEHMUYZCSHFIKQMEDKKGWPWNKQFRWZWPGZBYWKWSYGZHLTEZGOCVSGUTGCHLRAFSXIXPPTMLUXGLLIEUBVPXPORAOUDVMOLQDYKNJJNLSBVRVPMDPJNBBEHQDRRZHJHYQTZFQFUSTUCGYBODFCHKICDAWTHQMRRDONFBBIZUBJLBDQTCWUXXXCWIOICNUFATMJMOSRFAYVYEVM");
    msg.actions.assign("WXNIIHZDRQVACYPCIDEVAWYNXQXBMYEFOLVECDUFNSSMFTZQCFBBRTKGKTRBXOEMHSZZGIRDQJTULSHNBGPKYNZXHILVLSLPLJDHWKZNYNH");
    msg.fuel.assign("QQHZFMHNERKJLRENMQUGQGKQTWKTMCFIYFFRJTFCZDTXJUDTKPIZRUTPFEUEVDBOOIDNCDWCDJLBBNSOHODJEVHPCRBZVSOEZCSURMSGCJIUGDXZLYKGWZHULNAXMBPOYATHWVGWVORIQBPOZAGWGGTLSAVRIQKYCGJJYQUXEYJ");

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
    msg.setTimeStamp(0.489588854689);
    msg.setSource(41975U);
    msg.setSourceEntity(123U);
    msg.setDestination(2536U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("PCOECNRKEZIQSAVSDWFJZLQYSRLAJWLIJTSAMTUVFUIYXECIRGKSITDNKXDPVRXNNAFRCTHVNYUCCGQYXPMLHFUFWBDYPBFMTBRKXLYQHVACVIMJRTOZWZGETGHOQNUKIAIZUDGCYLSEPVWYMVZADOLPCHWGEMQYKRLDJ");
    msg.type = 75U;
    msg.properties = 173U;
    msg.durations.assign("HQXOCBXJGKDJVRDPNVYLDMMBHMFEYIZNVMHMNEUMLVIDCKZWDCSKHRHQLKFKJDHSDCTWUXUITMZRGQQGBJKAMSBCOFALFAJGTJTFJYDOECVAWYUKXRFVUGTAZHWKSOWSWLXBSXBXEBYCOTXWOIXUSPLRUIRQRPZBVNVVJIZEQLDMBBNWCIVHTXSGZYFCTZOOQYFPTLIEJPYLQNNLWAOZEAEYSJUSENRNUOZAN");
    msg.distances.assign("VHIANISWLXHXXPVDJQGGOOCKQKPMWSOFLUSWHZBTNMGVZWOYYZAGAMLMQLIYQGXAGXTADNYBFHIKPYRTTJSBNCBBUCMPVUENOCBKSZVAGRHTOQOSPAEHDTITJREWZHUEDECHKKLNYRIFWYTFISSJFXSJUGTRMNMPARCAQYPLXCCVBGFFWWWPOAIKENYSRFMUHDLBQPJCZQZEDRIT");
    msg.actions.assign("JKZUQKNQMTHCNRPBMHCJQQUGXPNHGIKPFFNOQORYMZYVBPAESGVN");
    msg.fuel.assign("QNUODUPXGRBNSEPNHJEHFQUQUVLRUCCHZQJIC");

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
    msg.setTimeStamp(0.0304206532862);
    msg.setSource(39562U);
    msg.setSourceEntity(218U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.791555501422;
    msg.lon = 0.173671859435;
    msg.depth = 0.483452957938;
    msg.roll = 0.970480325499;
    msg.pitch = 0.554212627845;
    msg.yaw = 0.0036850360325;
    msg.rcp_time = 0.252662793736;
    msg.sid.assign("ULKOWYVGAPKCWZEDOLJPZCYVEKSLVCPPTFZNASDMD");
    msg.s_type = 45U;

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
    msg.setTimeStamp(0.667343413062);
    msg.setSource(32787U);
    msg.setSourceEntity(5U);
    msg.setDestination(63723U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.524026862716;
    msg.lon = 0.417740643656;
    msg.depth = 0.660536762975;
    msg.roll = 0.489016397073;
    msg.pitch = 0.747259741719;
    msg.yaw = 0.768766103844;
    msg.rcp_time = 0.930906884653;
    msg.sid.assign("TRLIQPMBCIYATTRJYPJTFKWEFUKBQQLLNMVDUNADEPHBCJJFLYINYMOOCUFLWIQSIHRVZKTHEDBZWZDVGYSFWIDACYRDQOPCJFGTIVOAUNMIGCWMYKSBFFECONHYCZKQVCRRZKSXDAXTUEOVZFPLBZTZTJGGBBHGXPQAIPEUSNUHVLJPAKGRGBHGWVMOOEYZOM");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.769257188024);
    msg.setSource(9273U);
    msg.setSourceEntity(99U);
    msg.setDestination(43363U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.669729439248;
    msg.lon = 0.0606235089481;
    msg.depth = 0.0527933656275;
    msg.roll = 0.281567745226;
    msg.pitch = 0.417758493154;
    msg.yaw = 0.0970953827271;
    msg.rcp_time = 0.78285278143;
    msg.sid.assign("HGNCUVTYEPAXZMAWYJFXDIRHXRVZPGXLYNDDBSHZCYDGSOVPAAUFFYWBAHROTRXQNYCJMPZWLHJYAQBNLZZCCDSPJWVCJCPTMEYRVLQTCBQVFNKFUHZZXJSFBBPOMIDZQJAQYXLBKVKWQTNEQEBUVKUVEHSJBLWFWZGQFKCEFMOAUMRTTEBYNKGDJOIMTK");
    msg.s_type = 155U;

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
    msg.setTimeStamp(0.588090187488);
    msg.setSource(8986U);
    msg.setSourceEntity(147U);
    msg.setDestination(61235U);
    msg.setDestinationEntity(165U);
    msg.id.assign("RRIQLEUTQVYZCXVCNBHYGEMBPPWMKPNUXSNZAYWUFOBCBTXKTFJTWXQUKAQQIZLVXNURHGROZUCBIHWNM");
    msg.sensor_class.assign("ZYLQOMHGVOVJPHCGETCFLDRKBVERQSRDKPLRHCUOSRVGWXYURSKGVFOIHCONUTHIUCEWDBJY");
    msg.lat = 0.067498165586;
    msg.lon = 0.933036764058;
    msg.alt = 0.151695423494;
    msg.heading = 0.677158833607;
    msg.data.assign("OJYMGTWGRHJDVKXKGJFPDBEHEPVCPOLVQUFYYBYAGAYAZUOCMKBQSKNS");

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
    msg.setTimeStamp(0.544670688886);
    msg.setSource(14837U);
    msg.setSourceEntity(149U);
    msg.setDestination(9440U);
    msg.setDestinationEntity(224U);
    msg.id.assign("MUIJBSMRTESZSNWXVLQAIZPVTVOYGYIJJEQO");
    msg.sensor_class.assign("RBYCUMVXFXLOVTWBMLLKFDJCQRAQKZZPNAHSKPFJRXHRSJTDSTDRKVBGXASMHIGEBQYVENCQIKHCHPLOLTTLAOKXAETHPWKWXRYDZSNMURNVKPFQECGENFYUGXYUYESPNVIMNOTYJDHHZCIPRNAYFBBECGWDMKXGHVWUINIWOUOSADOBIKSVZZMUICFFXMOXZJCT");
    msg.lat = 0.0472708723957;
    msg.lon = 0.35937466634;
    msg.alt = 0.736130379127;
    msg.heading = 0.156484863188;
    msg.data.assign("OZWRGZLRUFPYZXETVBGOUAYCBXBLEPIKCGPEMLMNNPPCIBCNQYNYVUZPAKXIHETLUFNJCUXDSXXVPGEVYUWBVAOSKQXYFSWPLEILFEUMZF");

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
    msg.setTimeStamp(0.880888265627);
    msg.setSource(21706U);
    msg.setSourceEntity(117U);
    msg.setDestination(36553U);
    msg.setDestinationEntity(95U);
    msg.id.assign("ZVAKCBQFOVMAFXJKTMKJDLEXQFAGLQDZWBVYZCIDBURNEXGUXCRZJYUINIGJBTKMUORZVWDDHGODLSSJWRMQFVWLYCWPHFIGXKIMRQCTQVMSAHOJ");
    msg.sensor_class.assign("LYPLZKXEXPRFSJYVBJTEBLHCYDOKMTJHPULELWSASQVCKRXQDTWQZMDXIGE");
    msg.lat = 0.866379501262;
    msg.lon = 0.111297259534;
    msg.alt = 0.402363476789;
    msg.heading = 0.0647489617318;
    msg.data.assign("AWBHSUNGIPOKZBROHRIKXPLYUMRFZVRWYZAFSPDMVZYVGDEUQYGIUDZZFTMPMTWNCKOGMAJHQXEUONDCZRLMJDQADFTLRNTHXXWNAEPLMJBSSLVCOOXSVZULIHXDYIRWAGFEXZCLQCIOMBEEUGRGEVLJSXHTXOGYETBDPRQIWBNQNIKEZQWTVAAAGVTHNCPCUWBUSKTHWJYKUQTCHJKHAQVQBCBFPECLGIPPMJFSLONNBIFKSFYDF");

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
    msg.setTimeStamp(0.349079175586);
    msg.setSource(41673U);
    msg.setSourceEntity(92U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(8U);
    msg.id.assign("CZEROPGOXBDMXHULQQQLUJVKRYGEVNZLVZBXATNEPVILXYCSPWOYOPHIYKKTWHYIIPQOWOQGWRSRCIBPIXMTRBAMKDGCVFANFHZUAAECWKBODWVCJSWVYUNGPKJTLYJMD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GRKXOJQFXTKXOQOXFSVDSUVJYHDNUZCJFZNSTWMJAVCWMBSYHCQM");
    tmp_msg_0.feature_type = 99U;
    tmp_msg_0.rgb_red = 70U;
    tmp_msg_0.rgb_green = 40U;
    tmp_msg_0.rgb_blue = 66U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.735165814242;
    tmp_tmp_msg_0_0.lon = 0.939998111556;
    tmp_tmp_msg_0_0.alt = 0.791189551986;
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
    msg.setTimeStamp(0.297802862315);
    msg.setSource(33762U);
    msg.setSourceEntity(42U);
    msg.setDestination(13541U);
    msg.setDestinationEntity(176U);
    msg.id.assign("GOTXNWWSKGQJULHHCRAJIHOFKCBDXCANTRRSDZKPLZHVPKTOSJCWUMMFNSTFLNTESZDJEEVRQGAROKBEMNQJYEFOLPQBMVZHKWGYDXUTKNQOVJXEMCHHNAXRMDSYUUWBGUYBVUNCVPKUPVLTBMTIHWQTBLYGVDIDMLXWWYKWHAOGLAEZZXQAXQEBILRFVFZFIHAPTCCOSNISPGFXZSZULYIIIANYXPUFJE");

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
    msg.setTimeStamp(0.484939658268);
    msg.setSource(27888U);
    msg.setSourceEntity(133U);
    msg.setDestination(15518U);
    msg.setDestinationEntity(69U);
    msg.id.assign("ZAUHNBGRPQXYCLIRONBGBJN");

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
    msg.setTimeStamp(0.562802392613);
    msg.setSource(38745U);
    msg.setSourceEntity(233U);
    msg.setDestination(39130U);
    msg.setDestinationEntity(179U);
    msg.id.assign("BZZETGAYQCWKRLLGCXYNFSYITDXCVBUAJDWQUWBFQZOYFZGIHWMNFBIQHOKPUHVOSVZJXPINZFYPTGVIKCKRGAWTHDYNNVRCSNOUWGJLGEUDBMEJPQTTKMBSHLYSNIRPJYFOXPSUQMHAWFUDECIDRQARLLTDYMJFGNPXSNOWHPCRJAMCZTOVRQMKXZDLSJMUOWLFIEEAFTOMGOAMGXRLSCJ");
    msg.feature_type = 162U;
    msg.rgb_red = 28U;
    msg.rgb_green = 67U;
    msg.rgb_blue = 143U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.421730404895;
    tmp_msg_0.lon = 0.452059967876;
    tmp_msg_0.alt = 0.997918076423;
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
    msg.setTimeStamp(0.375472801737);
    msg.setSource(57899U);
    msg.setSourceEntity(104U);
    msg.setDestination(19535U);
    msg.setDestinationEntity(33U);
    msg.id.assign("GWDFOTRGRVWNBGVYKUTBGLYMDIXKCTCLSQHQHMUDZVFCARDPLCFFOKHQOHQASEDHLOAGKLJIGJFEYVWCXETFAQJMKSJRZSTNDTWWTGSIEMIJDIHSJYPUYNRMJVMTAIXLPEOS");
    msg.feature_type = 121U;
    msg.rgb_red = 10U;
    msg.rgb_green = 90U;
    msg.rgb_blue = 202U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.499376976654;
    tmp_msg_0.lon = 0.490817215978;
    tmp_msg_0.alt = 0.220275448867;
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
    msg.setTimeStamp(0.98826903952);
    msg.setSource(30325U);
    msg.setSourceEntity(91U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(97U);
    msg.id.assign("TMGDJYJFLKQXLRTQUCOAGVOAGMBZWSLIRKXQZCJXKPCTNRIIEEWRKVHDYTURHOFLSVRLTIRUXSKLYOYKUMHEZQULZSETMMXITVMCXTOHVDREVUGACSWMXTJUYOBYCQREDGVHKDPNSBNDBIOZNAVWJOOFBQECLFDFDVMFNWIYBSSGAJJIHNSZYPSGEIEMBWFWXAPPGYNFNPAQLWURNLTQYUPZKCWIZNHQGCAPQXAOKHCBJBV");
    msg.feature_type = 245U;
    msg.rgb_red = 32U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 235U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.424627673001;
    tmp_msg_0.lon = 0.539425633531;
    tmp_msg_0.alt = 0.362688390959;
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
    msg.setTimeStamp(0.396853724547);
    msg.setSource(31060U);
    msg.setSourceEntity(24U);
    msg.setDestination(10352U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.304545032974;
    msg.lon = 0.901506504665;
    msg.alt = 0.325275191663;

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
    msg.setTimeStamp(0.795315525415);
    msg.setSource(32185U);
    msg.setSourceEntity(94U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.470321936576;
    msg.lon = 0.830327459188;
    msg.alt = 0.432176879192;

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
    msg.setTimeStamp(0.936008072696);
    msg.setSource(11791U);
    msg.setSourceEntity(53U);
    msg.setDestination(12303U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.0443296750091;
    msg.lon = 0.914020112402;
    msg.alt = 0.393322365329;

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
    msg.setTimeStamp(0.782762728208);
    msg.setSource(51830U);
    msg.setSourceEntity(202U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(115U);
    msg.type = 191U;
    msg.id.assign("AUPBJNHIKTYATQEJMIJWXFQIDTBXBPMFNLXOVWDSERSUMVLBZRUVFHOAEROSTHPLVYZYHAWTDLPYSSWOEITTVPGFUKRZZKRPLPCAJZYQHFUCUDKWTGGWCIDMESCUKGO");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("SXEKQZKLTEWPXFNSVDBDIYKCBLFXMI");
    const char tmp_tmp_msg_0_0[] = {69, -117, 70, -96, -94, 99, -67, -87, 69, 93, -74, 91, -125, 125, 90, 99, 83, -75, 63, 23, -108, -67, 113, -82, -73, 55, -39, -72, 33, 26, 37, -25, 25, 96, -79, -115, 46, -38, 35, 115, 51, 72, -88, 93, -126, -103, -52, 91, -55, -30, -104, 116, 89, 115, 50, 103, -85, -56, 68, -32, -12, 19, 88, 59, -60, -35, 53, -118, -20, 113, 48, -126, -35, -72, -46, 69, -10, -87, -97, 20, -60, 26, 63, -72, -32, 121, 63, 97, 117, -63, 115, -5, 69, 108, 68, -118, 54, -36, 59, 98, -10, -21, -5, -73, -70, -104, 97, 79, 91, -83, 67, -96, 27};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0751530439251);
    msg.setSource(55870U);
    msg.setSourceEntity(157U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(128U);
    msg.type = 214U;
    msg.id.assign("POELKRIFIPWZHFHCYIZEPETAFMNPTVYOWCDGXNJTLCCAQAXBCSKLAROJSHDXPQDBDVDWNWTXJHUONBFGOIBDIWJZLXSELAIXQJPUSKXUDCOIEMOTRVWJJRFJIGQWBQPZKMJLMNXFGEDEQVTPIVOPYBKVSKSGYRZEROAEDYRVTSUIZHATAMYQONKHBNEZMSMSYCLNTHUMLBWCGHVAWHKVRA");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("GQNPZOKCIERETHOBMMNMEDGOYESBZNDWJECRAPGNDQYMDFVKDLRXHCVRRJJMRYUTHZGXOQVKVIGIBLMTOIACUSICVTYTRBXBVUTFUUUYRZMESTZNFSQZMWLXOUIHZCACLIRRXLOYDKBQKAFXIHQBWNKUTBSFLXJDVVKZLQGKWXPELZDNYQZWBWHPISH");
    tmp_msg_0.action = 94U;
    tmp_msg_0.grouplist.assign("BNQVUGVKESSBBKXTQRCILBKALLCHXELUMQDLDADNCRVEXULSUOPIUWASCTDCWQCUZWWIUTSHVNOXWKREZDZNHCOAIOMGTNEZPUJQTEKTGDYJHJAUNYPIKYOKUJBDRERMWSYLVRDHSNGQZFLAFVVMCJBQRDTQNPMYBJEVQEJJENFMFFZGLVITXMHPOYMZBOYOYZGBXKFRRJPSG");
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
    msg.setTimeStamp(0.90201185317);
    msg.setSource(18040U);
    msg.setSourceEntity(5U);
    msg.setDestination(60317U);
    msg.setDestinationEntity(71U);
    msg.type = 191U;
    msg.id.assign("TYKOPINVXFOBUXQPELVNXURGBMYXDZKQPAUBRXIF");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 192U;
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
    msg.setTimeStamp(0.0152502857708);
    msg.setSource(24921U);
    msg.setSourceEntity(51U);
    msg.setDestination(23235U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("SDJVQNGZUTHHIBXOIDPEWEXEKDBCHJKHSGMEENGZJVALDSBCQNDPSFOMXTOYJYWRWFXORUISSCCUTELLKGMUYRVFIPCHXOQSEFSWTABQNJLPKUWRRQTPFLMGDJUNPZOUDKNIPSHOJMVKXLJXWMRZPIWDZRKQBYIBIOMZTBDJROGBMFLLVXGVKFTGYNSQZACUYMCANYGJFPRCAOCUDCYTYQAWHXUAKBVZIVZBIFRQKPEZNWQVVLEALAYHET");

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
    msg.setTimeStamp(0.479634066804);
    msg.setSource(51282U);
    msg.setSourceEntity(244U);
    msg.setDestination(3357U);
    msg.setDestinationEntity(11U);
    msg.localname.assign("TKFTGIWMLYYRBOQLITLLKFYXVNVCWAUTYTDVLDSZPRMQFSEAPOVHAMNNHPCDXLETZJRPDZNL");

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
    msg.setTimeStamp(0.102264600611);
    msg.setSource(12454U);
    msg.setSourceEntity(137U);
    msg.setDestination(3594U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("WLTQNFDGBNMBSENXGJVVIUMTODSQEPXIEBDZSZDOIIYHUFKZQXVGKQWBGYCCWJTBDSQNM");

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
    msg.setTimeStamp(0.693166523071);
    msg.setSource(63686U);
    msg.setSourceEntity(39U);
    msg.setDestination(8409U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("DGPIOQYLESNXERLYMPDTZETHNKLMZUKPSAAMWOFWQVTEJDLORDUVORZCSMUJRFSBXEMCLVZANCXUVKFGNIOHUVBYIGDFBYTKBOFHOBKPWNKTXRIQZBGZNVWHGOCAITCWOZHQEHFRFEVBMXJJCDIJGYGFVLCXE");
    msg.predicate.assign("YROZYJSEOQFYIIAJNXLTDRQBHIWFEPJYIMKBDFXENQYXDRGYUMAOFMTLPWFPUDJUKQUMPRTZLGSWCCVUOMGTBDHVCDZDTKJYIMQQGCNJCBJFSBZXVWINR");
    msg.attributes.assign("SDYOJTYTZWBHWUC");

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
    msg.setTimeStamp(0.00715455694357);
    msg.setSource(1887U);
    msg.setSourceEntity(137U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("NDCUPTORRXQJEUSWOGTWBOCFAMXTMVAGXBJQYNZLQKQRUQKLACGYBMZEPOMHLTYLOBCVBZYUKVFGPNILVTJJHNHFMAMQPOWIXFUNPQTNRXISGLAJTBFISKJQCVAKGDYFRGDDSNAUEWRCMMHX");
    msg.predicate.assign("GFXKDDZOTGSCTARZIYLHLSEMNPBSJHNXXIIIDGLEDFRQOJZSTVIWNVVJRNJOOGERMPXFJDYMYWOEVVULWPSUQQEAVJSWIYBDKHZ");
    msg.attributes.assign("UTHFWPGVTXHODOMEOLEEVHXIMSBLGHNUPAJTHYXSWARKSQTQEXR");

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
    msg.setTimeStamp(0.718210004208);
    msg.setSource(20984U);
    msg.setSourceEntity(9U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(68U);
    msg.timeline.assign("IPIHECPEZYNEUQKCTWUEVJPLBXLHSBZSBLCIXFNGOVLWYVFCLMUKNRFHJAHNKMMIRDYWXGDXKZRDUTSACVZLXVRMHNPNPKUJOOMG");
    msg.predicate.assign("LDDFKGOIADFBVSDRVFPFOCOCYAUWJHPOXXRNWGIQIYXVKKUFRNYBCPRZJQZILZQYBVWOHSPLCWBHLDWAXEXGKOKGAEEEXYETMMCDGTBHCPXTRWNDHVLEJUFEHATFHJPAEVPBVBQYZSOZTIPPAZDVONNJFLOUM");
    msg.attributes.assign("EIQRWHZSEBIMHE");

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
    msg.setTimeStamp(0.975881762672);
    msg.setSource(6445U);
    msg.setSourceEntity(2U);
    msg.setDestination(40719U);
    msg.setDestinationEntity(29U);
    msg.command = 43U;
    msg.goal_id.assign("DKUMGRSBNMWFNXEXOLJLOVCEVTGFXANVJEEDZCYATHWKTBDBAHMGVHMACZLMBJGRJKOCZLBEFQPMI");
    msg.goal_xml.assign("DUGTBMEUVNKDNNHQQHMWKQQLVXQADYKZOODLWIHMXWNNOAIF");

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
    msg.setTimeStamp(0.436838492784);
    msg.setSource(2648U);
    msg.setSourceEntity(50U);
    msg.setDestination(32384U);
    msg.setDestinationEntity(208U);
    msg.command = 136U;
    msg.goal_id.assign("EHDRCFGSRTROZLTZALQBPCSDVKNYPWLZGUPQHJODMBFAUCIGBTEYTEERPUYMIIEWOKQXHWARYROUJDNIQANICXFDUUZQRBUESNSZSSYBOTLVLVOKNSZVHTFHTMISDIKXLUVWYZQWYKMJECFPFCCDBCOVYQPFABJVKXMPMQCXHVLGWLLEFZKBTURLAVINWJ");
    msg.goal_xml.assign("YCAOODKGJHTMKVFUCQPFDQZXPONTVHMLZDWYOLMUPAIRFITOVAKAEFJJDXTTBPNENXRQDEYARB");

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
    msg.setTimeStamp(0.864534488902);
    msg.setSource(15942U);
    msg.setSourceEntity(127U);
    msg.setDestination(30343U);
    msg.setDestinationEntity(63U);
    msg.command = 202U;
    msg.goal_id.assign("USLSXAUZTEKPXZDLPHPLVXSKDKYJFOCCGYFEAOISUNWIQUNRKWUMEPKDXVEJHFYUGZTJRXJ");
    msg.goal_xml.assign("QGMYAEDAYXSEFLHPLOWJWKPACPUBSZDRMXDHHVQKMDKWPVSSKANHTN");

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
    msg.setTimeStamp(0.774664334056);
    msg.setSource(5781U);
    msg.setSourceEntity(240U);
    msg.setDestination(38932U);
    msg.setDestinationEntity(159U);
    msg.op = 118U;
    msg.goal_id.assign("KHSRHPLGMPFBRAWESLHOCUZZXQWPVFUHEAPFKPAKMEAUJCHJOBRJDJPUOBAHMILKFYEGRFMWPNUCXEGOBCDYWKOYXTVVODSLYWQOKBYVKXMLOTIEVBROJMDBTGWWXRHPYPCTGIRANLDZZKSVJXIFYTLEIXWYSFIHQZQMNGNJVCARAHTDQSLGMMAXIOTGGFVHCQEFWKUSEIXQRSBNTZIQZBSWVZNRUJQUSUJENZYCB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WIUJHDIRPNBSHLVTCNOWENJRTDBWFZQWYVARQRFMKUQAZUXALTCSYKQOVOMMDLMBXDPGBLCNHPMIQGEXBBLKJXMXJDEDMRASKLCBYSCHGTAGCWITZZOLBMPYHROXOEHXYVZENIWSGPHWSTYIEBVDTFOUGVCDLEZKVNRVPFKUAOWTCUFS");
    tmp_msg_0.predicate.assign("TIAQTQHHUKTTMOTSMUFXZPDVTGLCYPKWDFMQMXGOIHCEVXJARNLCZWCAIAQNNVGBDDEWZGNWSFAOFZPCWOYTJLEPSOSEGREMBIWLKDXZVGGFQJQODNBWOJCMFTHIYELUSGYUMTRYIVNKEPPEKBAIWBHOQJBCQAJMEFLKUMRKXXNVKUKLNQREJTUUYDCURLASBIQNDHZHJWXZFHGHAJSOVWRDFCFLPBMZ");
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
    msg.setTimeStamp(0.223673600236);
    msg.setSource(64336U);
    msg.setSourceEntity(68U);
    msg.setDestination(37583U);
    msg.setDestinationEntity(84U);
    msg.op = 228U;
    msg.goal_id.assign("FKBHLXZWCHISKMZBPRLHJMMXQZXPDJKDCYARXIJEFYMRMZIBIPMHSSQKZDVUCTCWNEUGGDSMGJTXAQNAXVAQJHWNFSTUZUFUFYYVRPBVLXAXPGHGSVFITKDCIFRYVHTWEKXDDZQUYIJMALVVTPOUHZLNCKCBDRYXAOYASW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OGNLKEEZBIWFINVVUZNHIWBEKWYAPWXJCHUIRQTVJQHKUWWEARQSKQHVRGVXQCDGYOTEWVHZZHDNFRPOSLXXAJFTLTOUOGFGNSLLMATYLBPNSZTMRJFMMFGRZYRHPOOGURSYJTKYDBKVNIBAUQEAVQCOCPRCDKGIDESYOPFGWWBXCZZM");
    tmp_msg_0.predicate.assign("TLSUHZQHAFNARGWYMLZTDLLXGIWDCLEXZYVAQZCO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KNFCGYNJSSUECOJBRKFMGRITMIVHPUDGRATPRSBLRKHNWEVXSYEGANXOXXSGIZJQTEXRTNLDLPWFWYEMBQQMHZMBKTWFMIBKJRJBGDCOBYAVYJSFZCUTTGTIZIPVDSLDNCLKUXIUNWABASBPQKFLWZVQODLZULRIQHZHHFPVQZFCWGDPDNIMJWHMRAEKEIJHYHDXUZFCLVEKKAWGHCSZYUMABTGONWPODUXCXUERAYPOLVQJVEXFJA");
    tmp_tmp_msg_0_0.attr_type = 51U;
    tmp_tmp_msg_0_0.min.assign("HPKQDMYIWRFVRLBDXARALCYOGIVAUJWKUKUIXQPNTNMGXDINSMLGVJYMNNXCKKAFOVZKJSRZCEVWQCOJUFGEBZYHXXFVLJCDBSHFZNZTKRZULMBQACSDYSOOVLZSHYUHNDYYDLCUPGETEACAFJWCGMHTVQZSNFZKQAEMRJQGFGPNPGMMTR");
    tmp_tmp_msg_0_0.max.assign("RBUREDIIGWBUUINAPPXYFNYCDVEGMQDFORYBWZNZYFPTZESGDTJVCDEYATSOKINHUWNXJWSGPCRLVFUOLYULCSNEAQOIAQWTRZWIYMXMBOZRAKLPTYPKPDIWFAXGLJYXMBVKTEVCAGUQWWMVCBFSDLQJZEHHQPVOXBLVJDKKRCUNIQOAQXMRQGNPIQVHCTSFAJ");
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
    msg.setTimeStamp(0.747853981801);
    msg.setSource(16892U);
    msg.setSourceEntity(232U);
    msg.setDestination(45478U);
    msg.setDestinationEntity(124U);
    msg.op = 74U;
    msg.goal_id.assign("TDXVAMCRRPDBOWPUOYZHXEHSTFNWZJSTRQQWWIIKKPFSBEIGBUZMTJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JZOMEGQWOSDTJYBLVRAZYBJZKNHIWCCEYVUSVKITKGFYULIRJTPEQZNMGOSIACSNWOSDECRYYRTP");
    tmp_msg_0.predicate.assign("YQJYJYGLGVZKBBIAMUCWHBXSVOCBKFFQKRPMEFBCQSGRPPJFLXLEXSZRYIQTPAVWLIBHJHMKOJUCMVEMXACXFMSFLCTZVJAQCZFEYRFSIMHKVRBVU");
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
    msg.setTimeStamp(0.274754914318);
    msg.setSource(23013U);
    msg.setSourceEntity(47U);
    msg.setDestination(39229U);
    msg.setDestinationEntity(40U);
    msg.name.assign("MJMDKNXEKTHTRLWDWATNSCYICSSZSOOWCQMIXQXTNUZEJLBPVGUMWFDADUJRAQJCYVBRLIKZHRYZGOVETVRPENWSPFUISCSEBLOHOAWZSNQBENAGBNQEFWCYZUHGKOTDGQJJGIHXYRIALPMLDGEFOXVGVIAXKBOPLTTDURLBKSHOARRFRKPDVZXVYHYNYXZBMFCCEOMLWKUNMMFGIWVTDBQMGPQ");
    msg.attr_type = 220U;
    msg.min.assign("HQDVKGRGFFZJYISQTSNYSHHXNITZEAWLUJTYYSVYOHUYCVRIOXIUJYDETOQKPNROBKNMTNFVVVMTVLAICPCZMFKUZMEYKXUDEW");
    msg.max.assign("GXQULEJBVQOIUGDMTNGNSVBDQFEFEDGAVEOQIXHJCXTBASWGUXAXSYMBFJIKWLVDBKSSCUZFQBNTOPZSHMKOSSGNBAJIYLZJTDJTAPIGEFUV");

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
    msg.setTimeStamp(0.979505260179);
    msg.setSource(20029U);
    msg.setSourceEntity(220U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(112U);
    msg.name.assign("FLCZXRGSKRXBTROGSUQNRXSTMFZBGGEEKJVMYJJGXMHEQVNNSYHMIXSUYKSWWWHCSDDPZHAQGBXRVDCZVTLIDYDGAEVEIFLHFXKQVFLPCWZWRENOOMNCZPQHXCAFLHKIYPLUKAGKFOIYIHSJPWMCCBKLICT");
    msg.attr_type = 187U;
    msg.min.assign("JMOXBKTPYIMFVSKWCFTZPGSYUNZKCVJELGGORNVXHLRPNTP");
    msg.max.assign("AQVIIDVUDZXNMHSJBHOWJQOUVKAYFBPAXKHJOJOLEBQMCSJMZERFPOBPGPAMCVUGLWYMITGLXQAJPFDIUDTBOYZWAVLLFEHNESNWHN");

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
    msg.setTimeStamp(0.0918193995667);
    msg.setSource(59178U);
    msg.setSourceEntity(174U);
    msg.setDestination(6224U);
    msg.setDestinationEntity(235U);
    msg.name.assign("EGMWQSPKKLZLVNAVTMWVIBAYC");
    msg.attr_type = 123U;
    msg.min.assign("VMNBAKBMZCYYNGUKWZRXHCONWOAQWICWESORBSZXTXECTPYXQATDUTFNR");
    msg.max.assign("VDKSRRZBDYBNWINQKIUGYMALXKM");

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
    msg.setTimeStamp(0.557424976878);
    msg.setSource(22315U);
    msg.setSourceEntity(235U);
    msg.setDestination(13686U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("HRUZINEJFQCJETHWFLYDZIDZOBOPTDJBCKQQABNXIPZSGEFZCIZJMWNPCBDXPBMXVTVFYUUKGBKWGXTBWAOGYJEGMXKNNLAZRCDZSHTVDQHVOYTJPXMBVFPXNONDEIWGCSRLLKCAGUVXF");
    msg.predicate.assign("CZNHHKPOYKAETOWCZBQLMHJURFGBJRPLYYCHCVM");

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
    msg.setTimeStamp(0.962986228274);
    msg.setSource(22796U);
    msg.setSourceEntity(23U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("WNBMRXLVGMFMXWEKLPLTOZDMTIZTVJRDCZBIJTAAQIIQQJTODBCNEMUHEDYAZCYIQNBRWDSMUVMWNBTNXSBRHVLAKUGOBEPKZVJYZPEKILYMENCCLJDDGWFOYZFSLTTWWRSYSPBOFDYZLPZCOJSRKW");
    msg.predicate.assign("DDMYSIVKLZJYMGGUJZYCJMOBAPHMXAEGNIPDYABPRZICVKWKWCHBKKNNTZNDTDXXFSSOANDMTDUZQLEEJKXERQVWWBFWLKRAAQPOTZUEGTLRQHUDOUCKBEQSHGSUZB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UQWCPVEIZQQOYIRRKBBJSYMFTBFESJLDUISTGJIBJTGPXWEYQKHODJCEVUWCJVKYFCVXMICJNUSNRUHOYRLGDDAOOYRAFMHNAXSWVLQGLMNLEWPPEPGMVLBXURTKOKMWSGDXSYNGBXN");
    tmp_msg_0.attr_type = 126U;
    tmp_msg_0.min.assign("VGLPUKEJRTGFUHBNXTSGJWAJGDBKWHVLFDIQTOUREUTNACMCAOFORWNPRZVXGLSJAKEQWALLOKEHCLPZRHPMZYEDYTMBZCESBPXGEHWWBCYTMLQVYOCZXKWMRSXEUNKXIHPZGVQYUOXFJNERAQPAGDJFWRILMQTVZFDMHPFJSINLZCIYBXGYBNZFEJSUDFVZAKIIGQRSNXPOXFTACKIHCWANYIYUOCOKJSVTDHSUYMPDVDQVDTBNBMQWMHJOS");
    tmp_msg_0.max.assign("WSFOQNELOSTZPKURKQKZFLBLPCNTTURCRMOIPYDVUJOBKFCQRFWQYZIGFEXZCUHQERTGEJQLRTRAMFGHOCGECRUPSSWSOXNLHBQJPPTJVFKTBIFDHMKCXWEPVGAYIYJAKQKLVOIMXIXTWQZJBWZHXSEUGNUMAUWGNFLIKGVKXIUMPVDVCSOYDLECHOSYLHZEDSBADYTJPQTULDJIJHJNWWBYXXAYVWNFMDMNGARPEDZMONANBARHVGYMD");
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
    msg.setTimeStamp(0.396317020745);
    msg.setSource(60367U);
    msg.setSourceEntity(29U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("CGOPUZDAZPDNWBHKUALMBYSUETZMYYWSAGUQVHJHFPTQSTETWHRWTGLJBBRGYVIXIQRTXAQHXUCYSIWIBQTGPHKTNMEMWSKKSMLCKDCOFFDTZNIGKFFIFQARXMMBVJURVNBPKVQC");
    msg.predicate.assign("TSHBFFFKZLYQWTSMXMPOQCJDOCWMHJCYEAYDLICMYNZIXRMQWMQXPWPRIAIBZMKDQLZWOBSOXIREOTRPUEOCTTHLZHWWKUNGKJTBRGSVHWVODKXEVZDSAUNCHBTILLIZUIEYN");

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
    msg.setTimeStamp(0.89954062421);
    msg.setSource(48573U);
    msg.setSourceEntity(208U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(222U);
    msg.reactor.assign("XPABRTNCYKVPDEXVPXICSQHMDOJVEVZSRWYCTZDYYBLDJXSBTLORZVRIAGATSIUOLBJXKHWJKLNNDEBOMHUXAKRTDFXMIQCBDNJEWTBAZGHAYCKWGRDKHYJGFIPUVFHMIGGSWULZMWSZWCACEMMIFIYXWLUDNPQTAPCENURMT");

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
    msg.setTimeStamp(0.835477142042);
    msg.setSource(56707U);
    msg.setSourceEntity(32U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(215U);
    msg.reactor.assign("PGPYVSNVTUSYTFNOHQOZOEUDJKAZQNPNLDRRWHGQMLBEAEBTMPIOCLKWNKIICSUHIZGNWJEDBUCQLXXZDZPECLINSDUOFYGJJPCMGDWXFILYBHWFOWMUVDRPRMZUUSSEAWABKCZPAFTRHJYAKKVJFBYSZMKEVHBTXPRXRQXJDICKSCZWAITHUFXMJIPZIAXATXVHBEYCHDNVWVGGGOWBOXVYELNGJBQQJMMTHYTNURM");

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
    msg.setTimeStamp(0.850237464203);
    msg.setSource(2880U);
    msg.setSourceEntity(200U);
    msg.setDestination(35048U);
    msg.setDestinationEntity(251U);
    msg.reactor.assign("WPLLXVHGDCBNGYWLABBQUGCSAXUTBZYCZKXEIPELHYLRJFRGHMIHNRJIQNVJCCTCRMBANZCKKPDFIUMIEVVTYJTOUCRAGZACOGYRDAOKDQEQPTTQHJSNKYOPJWSAQEDASZZFEVWORSWHUIJJBPG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LFYEXYQAJQSWZUWBHGHPKQJKCIMSRVFLEIABZWXQDTPDTURBJXTWRVAJYCVCITLCXMJQBOXNFWQDYTMIGQKSPNFLCNKTVBMVYUEZZYSNJCZLFSUUPRHGTOUUSRVKIMJGJHPXYFPL");
    tmp_msg_0.predicate.assign("WAPAZBEOIENSOPSTWJJFZKVNELZGZTISUZTDLRQOYEGMEAVBUISXXPNABVLUYCYQMABGGKWFZTRSQDFSCXLKHIBBVDNFWURVNJYRMIKXDAPQTENRWHWXPWWQZAEUGUDSWVYICRCMNLYABJRHDUHJGCPBGVNHYZLIMOUHKFWQGZIOQEXMMUJOYJORKYVDVBMXOHFSPVPJPC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YIFBNDIAMDUXOPOQNQFUWBPUTYAGZRFYILHSLCZVXWPMSIVMGSYPBGWFUDXHOOEUSEFFCSCEBHAAODCWRITKDQZSTMWITLXCWLOEFTYTQKGHVWSNREOVUSAKDXQVKIJTKKYXLBWVTJEFQGBTTXVQMRNPBCWSCHNGAMJLGVVDRXVZZPJQYPHPMJKORYBLHCEBOYLEHZ");
    tmp_tmp_msg_0_0.attr_type = 131U;
    tmp_tmp_msg_0_0.min.assign("GSFAGWAIZPKHNVWGQCLGBYYMOPHRPWCMXZMGWDWZPWHAHQJRMCQNFYLDVJPEKMHRJYNAEKOXIBTSXKTFKIRNTVZONXSKDQIFQTULNLQBHVPPYMSNKMJLUXAGSSRVGYPXJGPUTOOMFOLXRTXQQZKDIEBLBCOGCEEJMIZJFYWFNDTGIRZLAAMSDJVBDFJBNOBHPT");
    tmp_tmp_msg_0_0.max.assign("EKMLSHSGEBLIOKGOPTGTCOAJIZRSPBBTNEVMWQVSBAUGJCNPUKLVHYNOGVIDMTPLCTOCZDMUWILOAHFWWDOKDSXIULV");
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
    msg.setTimeStamp(0.122315022696);
    msg.setSource(26628U);
    msg.setSourceEntity(226U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(14U);
    msg.topic.assign("JQNBSQTICLHKUUXAOLKSVHQZZLDBAWXWTSERQMTLRMXJWNCDOFTJPYYNLXKKYELUGTIROGMBXECPIOOINVQXGEZHZZBMHWEVQEHSQEAVCJDFOVAZULTRFPTOIBCCPUAVFKKNMINYFDJASCXTGIXOAWYSMPAYAJGXWPTSBQSOJWIYIHBFVUWKMJGLJNGJLCPNFGHEVOCDRBPBFVEYMRXDHRDDNKYKRTIUSQWABU");
    msg.data.assign("FGURGIRFEMKQDQSIWWEKPBSWDNJASCISZBVBTQGYUVCHOMUESWTETRITEQKZXRQVIGVKKBNNMMYLBOJQYBLIBHCOJPOPNXSWLGMQL");

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
    msg.setTimeStamp(0.221449159896);
    msg.setSource(10256U);
    msg.setSourceEntity(196U);
    msg.setDestination(2932U);
    msg.setDestinationEntity(204U);
    msg.topic.assign("BLSPEKTPLEOIIXNZQSLCAAHYJQRLFETKYJSBDNOZNWAGDZLFEQBZTCXZSUOZPWXJKORMCODAMKWVMNVUFHTTGMHAFEXWVVSYGCQOYLZUYZXJMRHKRTWBKAKBYKUDRYNEJBCKRWSTPUGGPVOQPBIAMQHTPSDVECAMEOOVSPRCNWIKIYXWFHCIUQTZVQFQHXIRIBFQUIDYFNANNJLFULLGZXXUCRUPMARMWOSHHVDYG");
    msg.data.assign("LXNPXRLOVZLFTRNDAKOYGEKBMCYCRPXCOAKZUYJQOPELNTSDHJQXMAVKNYENDKHVOISGPEANLCWCZDMEMNKPXQRJMYZVXQHYDDRBTZBEAISCSJZPYWSRVEWEBLGUWKUUHMMUIUJITWOCDFFTBWQFBBAUTZOULVQUSCEAFQTOVRLDJKQGJR");

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
    msg.setTimeStamp(0.247403916218);
    msg.setSource(51556U);
    msg.setSourceEntity(253U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(224U);
    msg.topic.assign("CUUZPXMMUUNCVIBGYRSPHBQWOFKLYOTEGDSMZVUWWKFXZDMYWLTDFBZPKUAYEIBCOIJCPDZSHHCVXWEHIMTMQELCAPKYICOCDTEYGRFTWAHTWJISHQVMGSLLBFKXMNNWDQFNPQXAYIOGJQRTLPEOSIRYWDBSVMLURUAJAEZFGHVTSNBUJHLRKRVERDBCNDBTGZQFVWHROSPJ");
    msg.data.assign("SSZKYOESOVUVGTHCNKJQGGKEXYFDHBJCWUCWWEQQQFRNHFZMACAFXOCRRPGALQXZPVSNUQKNBHXRITDRFKTYBLYTUWOVAOYNNPOYDTZYIZZEWGGAMJ");

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
    msg.setTimeStamp(0.00671719507244);
    msg.setSource(29026U);
    msg.setSourceEntity(240U);
    msg.setDestination(29416U);
    msg.setDestinationEntity(112U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {77, -115, -74, -45, 91, 47, -90, -62, 78, -82, -88, 42, -87, -23, -28, 61, -95, -67, 125, 123, 47, 60, 87, -63, -16, 56, -12, -96, -117, -74, 122, 84, -51, 123, -95, -26, -108, -32, 61, 4, 116, 11, -56, 75, 122, 124, 67, -45, -27, 94, 37, -32, 82, -23, -125, -69, -117, 72, -82, 114, 118, -65, -16, -82, 14, -10, -76, 110, 1, 66, -39, 47, -30, -53, -13, 30, 116, 101, -82, 0, -37, -75};
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
    msg.setTimeStamp(0.787084436045);
    msg.setSource(45873U);
    msg.setSourceEntity(242U);
    msg.setDestination(12743U);
    msg.setDestinationEntity(166U);
    msg.frameid = 210U;
    const char tmp_msg_0[] = {8, 122, 43, -81, 17, -31, -128, 32, 46, -22, -11, -127, -64, -73, -54, -84, -30, -67, -61, -96, 49, -128, -21, 116, -104, 118, -77, 58, -104, -48, -26, -123, -67, -59, 70, 46, -51, -53, -109, 48, -105, -56, 123, -109, -43, -46, -62, 46, 75, -50, -84, -12, -10, -22, -24, -54, 123, 62, -18, -116, 52, -120, -56, 82, 57, 103, 116, -86, -48, -106, 29, 30, -16, 99, 35, -91, -97, -68, 50, 104, -69, 93, -52, -66, 52, -25, 69, 108, -100, -35, 119, 49, 64, 45, 50, 15, 81, -88, 125, -13, 25, 70, 111, 77, -32, -95, 39, 45, 111, -109, -101, -33, -99, 114, 30, -44, 62, -92, 17, -115, 70, 88, -8, 68, 109, 22, 14, -61, -54, 108, 123, 67, 6, 23};
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
    msg.setTimeStamp(0.143188485264);
    msg.setSource(4844U);
    msg.setSourceEntity(141U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(54U);
    msg.frameid = 132U;
    const char tmp_msg_0[] = {-71, 80, -107, 106, -42, -58, 15, 41, 110, -2, 43, -126, -2, 123, 70, 4, -111, -11, 78, 11, 116, -21, -116, -34, 17, -24, 19, -47, 64, -72, -32, 104, 12, -92, -105, -80, -9, 112, -75, -36, 110, 14, -78, 27, 80, 116, -36, 27, -119, -99, 70, 51, -83, -38, 44, -6, -125, -57, 31, -118, 53, -112, -66, -48, 23, 81, -34, -65, 74, 27, -115, 114, 33, 48, 63, -32, -12, -104, -79, 98, -49, -62, 30, 126, -16, 13, -63, -82, -7, 107, -104, 77, -102, -115, -21, 50, 46, -31, 26, 16, 126, 76, -71, 63, -52, -68, -9, 64, 19, 55, -104, 45, -28, 18, 70, 56, -34, 108, -29, 58, 13, 16, 49, -20, 69, -3, -87, -83, 124, 124, -109, -49, -81, -116, 13, 2, -18, 35, 5};
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
    msg.setTimeStamp(0.243543728723);
    msg.setSource(35695U);
    msg.setSourceEntity(243U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(81U);
    msg.fps = 180U;
    msg.quality = 220U;
    msg.reps = 83U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.547863237179);
    msg.setSource(35245U);
    msg.setSourceEntity(153U);
    msg.setDestination(38157U);
    msg.setDestinationEntity(232U);
    msg.fps = 78U;
    msg.quality = 104U;
    msg.reps = 52U;
    msg.tsize = 135U;

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
    msg.setTimeStamp(0.891876233791);
    msg.setSource(20445U);
    msg.setSourceEntity(58U);
    msg.setDestination(43193U);
    msg.setDestinationEntity(76U);
    msg.fps = 219U;
    msg.quality = 241U;
    msg.reps = 9U;
    msg.tsize = 83U;

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
    msg.setTimeStamp(0.679482920005);
    msg.setSource(58135U);
    msg.setSourceEntity(130U);
    msg.setDestination(49282U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.835470918386;
    msg.lon = 0.284992954062;
    msg.depth = 107U;
    msg.speed = 0.0780968323286;
    msg.psi = 0.749945321452;

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
    msg.setTimeStamp(0.413209346113);
    msg.setSource(10622U);
    msg.setSourceEntity(244U);
    msg.setDestination(55738U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.851488893273;
    msg.lon = 0.788199951842;
    msg.depth = 197U;
    msg.speed = 0.638297738008;
    msg.psi = 0.551787841623;

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
    msg.setTimeStamp(0.0407927612405);
    msg.setSource(36524U);
    msg.setSourceEntity(235U);
    msg.setDestination(49961U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.939768618434;
    msg.lon = 0.642198641455;
    msg.depth = 66U;
    msg.speed = 0.275169721463;
    msg.psi = 0.147670737163;

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
    msg.setTimeStamp(0.886066289947);
    msg.setSource(20191U);
    msg.setSourceEntity(132U);
    msg.setDestination(8224U);
    msg.setDestinationEntity(198U);
    msg.label.assign("UJHRNQOOPVQHJBHWJYODRQVDUXTBRZRKYVRTMUYQAQBDQF");
    msg.lat = 0.103313654718;
    msg.lon = 0.910673510555;
    msg.z = 0.530424710416;
    msg.z_units = 14U;
    msg.cog = 0.463943701651;
    msg.sog = 0.949287113996;

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
    msg.setTimeStamp(0.993200969952);
    msg.setSource(20135U);
    msg.setSourceEntity(108U);
    msg.setDestination(27997U);
    msg.setDestinationEntity(175U);
    msg.label.assign("THUXLDCBWHTTKVDJAD");
    msg.lat = 0.377838198667;
    msg.lon = 0.55108928122;
    msg.z = 0.943131932504;
    msg.z_units = 40U;
    msg.cog = 0.116886534975;
    msg.sog = 0.315853773077;

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
    msg.setTimeStamp(0.816167041839);
    msg.setSource(8888U);
    msg.setSourceEntity(236U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(216U);
    msg.label.assign("ZZXZRJVLZWRJBYSDAHJFLKURRPKITGQSLIQLPDWWBDHRAEVSENXMWGFVXXUFIFPOTEQXZNQSGOYZTIVOHXYDRPSECTPEJRMVTCVLCXBCKTGUWYZRHSNAQAZHGPJDSWFYFOG");
    msg.lat = 0.593922371628;
    msg.lon = 0.868519967505;
    msg.z = 0.838806164625;
    msg.z_units = 141U;
    msg.cog = 0.569305510096;
    msg.sog = 0.0742847889001;

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
    msg.setTimeStamp(0.700038740555);
    msg.setSource(64703U);
    msg.setSourceEntity(227U);
    msg.setDestination(21325U);
    msg.setDestinationEntity(13U);
    msg.name.assign("FVSDYHJGHHHFVBZURWFDFMBTNLTGFLSLJXXSUKETKAOKTBTMPCWOQVXHUQXDFJRSQRGCYXFFNPLWGNIEEMWRKLODERAQMUCOCIMVKDGKSWDJZUURZJIPGARDIOUZLHWOYVTYJMVMLBGNEXOPOCCBMVEIHPZXATKQXVSEYZQAALZAHOOQFZILUNLWPCSRQVKSWBTUWH");
    msg.value.assign("LEIMNDMBJNGYHXWTKRSOWMLUBRQBDIFXYPVCETOLNYNBLKVWYAXVQEHZBTYIUE");

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
    msg.setTimeStamp(0.74217669005);
    msg.setSource(47479U);
    msg.setSourceEntity(77U);
    msg.setDestination(30222U);
    msg.setDestinationEntity(106U);
    msg.name.assign("ISPOESFLAFRDQTKJARPSJKGVBUKGVSJMSKHILRCQVOGHPZRXKOBECXLVGVOCJJLIQHHWUWWMHHI");
    msg.value.assign("TIGTOHTVXSCLKIDFLJMEGLPFSEJKXVDHFCIHNOVFQOCXWHYVNGZXYRZJGOMAUIPGZRSUESULGXJZWWKDPAPSWWEEYUVIYRUDQSAZRHDHMKWRNAPQYBNJIRBCTMRBWMVSLYXYBMVOPKHMVTLKRRBNADGHLOEXUDZKFANCBAIQAPDOKBLWGBSQXZLWMTYFZAUOYUWKIECCJPHJQJFIQMFZTBTNUXCIQFPKNADZTPGSCG");

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
    msg.setTimeStamp(0.00944044813215);
    msg.setSource(59008U);
    msg.setSourceEntity(220U);
    msg.setDestination(6732U);
    msg.setDestinationEntity(184U);
    msg.name.assign("FXWNGVWUPJVYMOTVSQKMGSEHBAUDWNVADILIBOMXEOYCTHJEQZDSGNBAQZSLFROZCIXFJOWTDTPZRDRNEAZOSVPMYUDBLZYMIPTXTRHQBAMXSSKEHCMGGRZGPQYNKECBZEYCFR");
    msg.value.assign("QJVXMANMGMXRNYIKWDSWEBPTPCKEIPWAOBRBRTQQHNGETDGKFILMCJIJCYPXHHWIXDCSQURUAZCLJDREXAVGKLUCURINOFQPEZQTKVBTDYPTWVSSSHSXYKCYBQYUPCMBCFMGOZEUDYARFZNDZQBOOFTQSJISKLNKOPVXBGLOLUFITMF");

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
    msg.setTimeStamp(0.0923956204883);
    msg.setSource(54991U);
    msg.setSourceEntity(207U);
    msg.setDestination(26962U);
    msg.setDestinationEntity(89U);
    msg.name.assign("KZBIRGLGSFVGWXXMOXMHKPWCMEXTAUQLBNBAVTRLBQFJU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QXQJGTJBLAEYMJIZFOLPDGKEGUDRNCZCHZFCWEWBLTGDYCAOZWPABXXOPURWKKVWILAHHDNKNGTMWJMYUIUQCVSJLKMEMPUNTHSUMFRBNYPWLQEGSIZCEVXUBRSSJOHKFDIVQUIRDD");
    tmp_msg_0.value.assign("PMGCGRWUTCHLJEKYVRDQBCTXJCRMNPXOFSWVZFYAJKHNCGTBDEMCRIRVKUTFTBDCBPAIUOITRESBRZMXGZYYBUYKSIQPHMICFQOFGTYUAXYVGJSKNBPEAQPPXIHSHZQQMFACSWWDDLJBIGXIDFLOAKNDNRZHYEUOVGNMLVTIJLJZAMVTXKNPITHQSOLLOQVKUW");
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
    msg.setTimeStamp(0.0960483330065);
    msg.setSource(5209U);
    msg.setSourceEntity(16U);
    msg.setDestination(58868U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HBODQVILXXWLLGWOTJOVENJVPRJSATIGBXQAZKESAYZNDPHIPHNIXJKUSGZNTGZVVAYAZLBSAZXJRHVGKWUIPPQKQAZLYHGWCSOPDKNQOHDAELXPCBSRKLZYDBMYWZSVXOTYLHYOWMCTYGCWCMKEFQWCMUQBUTDOTBRPAMIFHRLICDWBPYFNJNFEMXXGVFFCMXNIUCDFUWILJR");

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
    msg.setTimeStamp(0.00719523286839);
    msg.setSource(35969U);
    msg.setSourceEntity(153U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(248U);
    msg.name.assign("YDOCAXXLFEFOHAPSOGEYRQLFHNDNSBEPKDXNWUVNSKOLNPKBZFOIEXJUORHWFVUVENCQGGYQIHVSTEULDRQAWNQMSKPWGJPZTVQGBIVUMRPHWLRYTEZJZZCTJEPYLVKCIYUITSGTSLJQAKXCPCRIBHIRJBCOWGEZVZTIYMMB");

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
    msg.setTimeStamp(0.791760046642);
    msg.setSource(39171U);
    msg.setSourceEntity(157U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(108U);
    msg.name.assign("QEFBZHRPGGYBIDVZOZCKGUBAWMTAJISUSXHMCWEWJVVRJNXNHQMKKHFCDRLZLDGRPNUMIGAAASFQYJUOMGORCRIRUWJDTAFTKKUQIIDPGQNKTWNTFQIEKINHBUWPFBHOBDBZDTDSYFSGOFLZBWYVVLJXTSEJXHOELGCOEAFYQJUXWNGSNYDMMCMQBBPPDOPCTRVEPZLAZRLAKEHLXIJOPOKMWVYXKANCLRTYTIZUSS");
    msg.visibility.assign("YSZOLTWKLEUZDRXIIPTLZEWGWMEOCHFLGOJVANYHMZSHZWKKQTJVPYLZXEBQDBHJKFUDGSOYGJNWUEOYLSSMHFHMBNQQFNRAPYCVAJDXTPACMTWYDGFSBVVMBJTINUKLNSKERV");
    msg.scope.assign("OWCNVYVHUQOFJEHCLKBZDLCMJDBAXAMJQUGAHDOLSGAUPGFKFHPUFYZEGBKZKGIYYXXESLMTQJTLPCRVFXZKISNNHSMOVQUPMZHFYMNYYMPZQOAJOXJB");

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
    msg.setTimeStamp(0.80481103185);
    msg.setSource(21173U);
    msg.setSourceEntity(233U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(250U);
    msg.name.assign("JHPLJVXJFFYOPGAUPBTVHXWORQHDQFABYKEZJENEACUNBDKBTSIWDMURSWWKSIANMZVLEBMSLOMRYCLNXIUQLHGGBOJSUYPVCUZDRMWVNGIZXCTVXIWGJVXZICFGFNERLLSREHSTDRMTHMZGAZNUAWPFCMFDOKKGJHQIXWJMYYAYDXT");
    msg.visibility.assign("AGPFUHTHBLMPKNZTJHEOYTVGJKCZOHUUPRVVLWR");
    msg.scope.assign("OYFUPIMXQCKLKBVOYSAVQYDGLTZWVEPHCIOQAMXHDJPPYKMLMDSTKJPWUSFSZUCIPNYFQKPTHFFBDBURNWPGDIGCRFUBEGDUYOAXZJWVWLIBSAZHMHXKESJJGCYQIIXCEBZEANMOZPEMWNDRBLYDNJXMCVHQLGRGZUELRLRWQWHHQVVEIKATSAZRJENKTBDSTXYAHFRJGNZORXV");

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
    msg.setTimeStamp(0.292580796678);
    msg.setSource(25772U);
    msg.setSourceEntity(186U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(43U);
    msg.name.assign("HVXDWOFSCMZZFYCVIDTLJAJAKQFWXUOPMTSOSWZGVBNKHNVBVDOSFGQPIH");
    msg.visibility.assign("ZRCRRDTNDQKXKZIDRG");
    msg.scope.assign("CMCOPXXTGYNZIWBXXLLLVONPEYARSLSXXCWJMZDNLRFGPARBXFDSVQMZSJVSXHTFJLOZZIRJJMQTWWDUBEUUHBTUJCXIVTYNPNKMOOZBAHFL");

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
    msg.setTimeStamp(0.380521142293);
    msg.setSource(20081U);
    msg.setSourceEntity(110U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(78U);
    msg.name.assign("GDGFVRFSDTOKNDGODMZOCOLPRSEPEEUIHLDJAKRFAILLLEHPRQVAFKHGFSAIUUJIQINQWWWJYNRYXHBQUMKIZSXJLYYODGVFBELPNVAOXNGHUIQPVQBFZZDLCTAYDEGUZWNBMJAQRNDBSJMZSFSNWZUMGLXOEBWAVUMWZ");

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
    msg.setTimeStamp(0.265621185355);
    msg.setSource(23237U);
    msg.setSourceEntity(62U);
    msg.setDestination(2175U);
    msg.setDestinationEntity(236U);
    msg.name.assign("IGVQCTQPUKKVZLEBNDWYPYISSTOPOSWVYUWUZLWFVXZNZBFCUHDRWGSXYNIXCGDFAOJXFXCATVGJTJUMDIGHLQQINBOIHSKAVEIFNWXHEVBBHUIKPGZETJNKGPMPZAEWPECJMVKMFQNIUNHORRFWRJEPMQNBZMYCEPHKGSDSRQKICBLRONLWOWTXRLJRFQADDCUSDXVXA");

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
    msg.setTimeStamp(0.358991102591);
    msg.setSource(29084U);
    msg.setSourceEntity(254U);
    msg.setDestination(10702U);
    msg.setDestinationEntity(142U);
    msg.name.assign("VLOHAHUJZODWHETQUYNFDUCOOKDGVJTXEKMQZMVVGYUCRMJNSLKVMDNQZQPZAXSKNENECTCJAAWQJLWZBLTIQPYEXZITNFBYDZWUIKXPWXHCVESRBICBKSXHBEQZBATPESJRIPTPUSBGGPACFRSUCLRLIDDDIPEZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NAQXIAPRJBHHBKVTSJOEDKONMHHDKEOMFIHIYRLMCOXBUKJFFZAXEUWZSNTMOFQJGPIXQJQGZUYWVIYGUDNZZIPTUVVCWRVBCFCUGWWXUFMHWERHOLCLCJGXFPEYCJZBLQTZXHODBWJRUCIYASDPBADLRQJGZLMAEOKGDDWYTEXVMLNYWLLYQMZCVXSKNPQRKKPIFBEMCRYKSTTASDRISSF");
    tmp_msg_0.value.assign("HSNWFSKXODI");
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
    msg.setTimeStamp(0.00218701582589);
    msg.setSource(16630U);
    msg.setSourceEntity(234U);
    msg.setDestination(1247U);
    msg.setDestinationEntity(127U);
    msg.name.assign("KVIRMKNWWJLUPKDOMJUJLGPQLHQAQXXCEXJESMYEVGUJDNTKMBFPPQVIOIQGBWBFGBXF");

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
    msg.setTimeStamp(0.915063149358);
    msg.setSource(15232U);
    msg.setSourceEntity(178U);
    msg.setDestination(40530U);
    msg.setDestinationEntity(159U);
    msg.name.assign("IVWQJUNFCULUPVIMCPGMLXPDWYNZOQVULCLGRCRHDDWMJWVOFWRNPZMRNEXUDNAYBXGXPWJZYKBJZZREAKEQAGSATFIICIZAPCMGDUONIWYVYWHKZTFEOSWDBOXQYLEIXAIBEQLHHXIJDETK");

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
    msg.setTimeStamp(0.252021143645);
    msg.setSource(54399U);
    msg.setSourceEntity(97U);
    msg.setDestination(33449U);
    msg.setDestinationEntity(95U);
    msg.name.assign("GWLUIWHKPXXAIMFBWZXOJZQIXPGZPHRVHYXJNAEDLNYBDLUVNKYVOL");

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
    msg.setTimeStamp(0.373748735448);
    msg.setSource(27530U);
    msg.setSourceEntity(118U);
    msg.setDestination(39744U);
    msg.setDestinationEntity(118U);
    msg.timeout = 1608076097U;

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
    msg.setTimeStamp(0.518267691717);
    msg.setSource(43182U);
    msg.setSourceEntity(6U);
    msg.setDestination(16158U);
    msg.setDestinationEntity(139U);
    msg.timeout = 2977479016U;

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
    msg.setTimeStamp(0.236720926761);
    msg.setSource(9233U);
    msg.setSourceEntity(215U);
    msg.setDestination(3181U);
    msg.setDestinationEntity(11U);
    msg.timeout = 2754154668U;

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
    msg.setTimeStamp(0.426541561689);
    msg.setSource(29806U);
    msg.setSourceEntity(131U);
    msg.setDestination(26510U);
    msg.setDestinationEntity(67U);
    msg.sessid = 609224197U;

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
    msg.setTimeStamp(0.289341490787);
    msg.setSource(29085U);
    msg.setSourceEntity(170U);
    msg.setDestination(26699U);
    msg.setDestinationEntity(229U);
    msg.sessid = 416928331U;

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
    msg.setTimeStamp(0.706963042473);
    msg.setSource(5886U);
    msg.setSourceEntity(15U);
    msg.setDestination(32310U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3003178585U;

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
    msg.setTimeStamp(0.961393840815);
    msg.setSource(32142U);
    msg.setSourceEntity(68U);
    msg.setDestination(22186U);
    msg.setDestinationEntity(222U);
    msg.sessid = 251577715U;
    msg.messages.assign("CDVJXFNGUJJDPDQEHUIISCZBUWGSOWHRXPSORMAJURYTWVVXBMUIPFYSFTYKEUCNVDBLMAIHOCXXPMWNAIBGWIQYBLIKTRF");

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
    msg.setTimeStamp(0.438861173556);
    msg.setSource(19871U);
    msg.setSourceEntity(195U);
    msg.setDestination(42334U);
    msg.setDestinationEntity(45U);
    msg.sessid = 4045624798U;
    msg.messages.assign("IOVQNERYTOBDLAVPJYLBPOAVXTPSPIWMNOUNSRMCSOHWSTCHSGEILUFJTDREVEPGUFVGUZZQC");

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
    msg.setTimeStamp(0.592059475734);
    msg.setSource(49338U);
    msg.setSourceEntity(25U);
    msg.setDestination(47547U);
    msg.setDestinationEntity(55U);
    msg.sessid = 2726846682U;
    msg.messages.assign("CVHEXJWDPAHNZSWOHMWZVGRCIGNKKPIMUFTBQRIVLFMUMFEBSLCMSQKT");

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
    msg.setTimeStamp(0.991457590977);
    msg.setSource(24026U);
    msg.setSourceEntity(194U);
    msg.setDestination(54450U);
    msg.setDestinationEntity(104U);
    msg.sessid = 987005209U;

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
    msg.setTimeStamp(0.435916179559);
    msg.setSource(17416U);
    msg.setSourceEntity(191U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(77U);
    msg.sessid = 3875716512U;

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
    msg.setTimeStamp(0.714847400442);
    msg.setSource(20761U);
    msg.setSourceEntity(163U);
    msg.setDestination(22483U);
    msg.setDestinationEntity(170U);
    msg.sessid = 3610729212U;

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
    msg.setTimeStamp(0.688722006671);
    msg.setSource(24805U);
    msg.setSourceEntity(93U);
    msg.setDestination(56845U);
    msg.setDestinationEntity(1U);
    msg.sessid = 2403516683U;
    msg.status = 185U;

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
    msg.setTimeStamp(0.578490005152);
    msg.setSource(64478U);
    msg.setSourceEntity(161U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(248U);
    msg.sessid = 103146645U;
    msg.status = 23U;

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
    msg.setTimeStamp(0.248425400942);
    msg.setSource(47226U);
    msg.setSourceEntity(29U);
    msg.setDestination(14630U);
    msg.setDestinationEntity(112U);
    msg.sessid = 1877646021U;
    msg.status = 52U;

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
    msg.setTimeStamp(0.142902853079);
    msg.setSource(23356U);
    msg.setSourceEntity(93U);
    msg.setDestination(30478U);
    msg.setDestinationEntity(63U);
    msg.name.assign("IVRVONBDGPAMLCDSRHQAAFXNVIKZHQUJMPWZDEELLDDJJPCWTQTKRGQXFOTGHFGYXVPJZOJWEROLDSFOXCUFVLBZLYFRNMSCXOUPLWGXYNCIGJUUFHKXCLINJNCKAQDOBVPYYTOBFTHEKSAWYFCZEGYNSQWWQMUOARPDSZDSZYTNTARIZSZKR");

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
    msg.setTimeStamp(0.603008101777);
    msg.setSource(10242U);
    msg.setSourceEntity(153U);
    msg.setDestination(37090U);
    msg.setDestinationEntity(64U);
    msg.name.assign("QJHBIUTYHGOEVSBINXRALHJKEOQPMZVZQVOSLKGPFNPVNCDZGCWEANWXVBEXGUUIBBPKBRHHDHWJYNIZTBCDFYPGYSLMDTBLCJKOXUWSXASEMPXAGOHDTDRMWUYVERJYGIEXZJUXJZCESUDYGTEHDNRLPQICOMXOBAKNWDTFEFFZMZXGNIIAFWSRSRQUFTKRJRGLHDPKFTKJQIHC");

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
    msg.setTimeStamp(0.259551840488);
    msg.setSource(27869U);
    msg.setSourceEntity(164U);
    msg.setDestination(21200U);
    msg.setDestinationEntity(130U);
    msg.name.assign("TCGPGQUOVPTGVGDLXRUKEZTYHDWJPYMJUQGGMKKNZQHFRPTBBLOSLXJVBYLAQZBLRQHVZSSXINHEONHNRQUIVYTKEMGHLWUJKWXSOYPAYUFEXCIAPJLFGSVBRYBZKHOUXRMMYMJFROQBIJZSTDHVWARTMLXNRIDFEZCNDNMFAESGBD");

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
    msg.setTimeStamp(0.719928804714);
    msg.setSource(7789U);
    msg.setSourceEntity(72U);
    msg.setDestination(54925U);
    msg.setDestinationEntity(5U);
    msg.name.assign("XWRKBZAUDSFALTVZLFOPLZVXKHCQJQDMPEXARQWOUSGEDCSRQJBOCKEICRKFUEMPBXXXCGCLZBYRWBNGWGBZHYJFXXWGELMVBQZIVTILPJOPTLEVGIMKSBOYQZWQNHGRHBFDYDUISCQJGFJHDNTPRXGJSAYITNSSWXMFNKFITVH");

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
    msg.setTimeStamp(0.377344177425);
    msg.setSource(1382U);
    msg.setSourceEntity(24U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(100U);
    msg.name.assign("CSHOZIZLXFLLTDDOWPJELWNZOSCMMQCDJDGGQAEHPXUSUPSNUJAATNETGTWJGHHPYWQUKKFYPGNLZEIPJWUCARLWZJFBBFAIMPEQQLARQBIQJXKSPDQXBMAGTDORIVDWABVLUKEZIMZXUVOVYONVKETKWVNVZGGERFAXFJYQNXTF");

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
    msg.setTimeStamp(0.979670707585);
    msg.setSource(28691U);
    msg.setSourceEntity(215U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(13U);
    msg.name.assign("KQWMTPONFJNMWRVUJWRMAFMPDHZYAHFPAIXONUDHZYEUMRLWNOCGSHBAXABWUTLTUOBMBCYIXFHINPQYOXLWGRQFDXSFRARZEVMDSRNCBLLNSDGIETOAGSMECEVJZJVAEVLLNKESVTJBTJFXIYZLYPQPIZD");

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
    msg.setTimeStamp(0.718806200916);
    msg.setSource(20623U);
    msg.setSourceEntity(5U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(175U);
    msg.type = 71U;
    msg.error.assign("LUEUGLLRXGIUXDLSKWAIXDUNGCHYOZSLKXSQEXNJMTEEDJOASHGZWPKQVIYMWFYEEAXFQCJTBHZPVYDFYBAELNCRZCLUOIOGDMVDXORPTZVWPGJTTFGAWKMEZRYBVTWJF");

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
    msg.setTimeStamp(0.0438223160176);
    msg.setSource(59167U);
    msg.setSourceEntity(119U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(237U);
    msg.type = 219U;
    msg.error.assign("BEDWGZYDHUSSZNMIBKBCNEJBOQFTSPCOPMYKRATSNLZUTQQACVDNUHHUTIGAWCHIAO");

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
    msg.setTimeStamp(0.215687839705);
    msg.setSource(39992U);
    msg.setSourceEntity(216U);
    msg.setDestination(19033U);
    msg.setDestinationEntity(2U);
    msg.type = 245U;
    msg.error.assign("FJAQBJXMRGXLCDNFRQCOGIFSXTYPZYHWFMSIVNZIGYQZGLOKMHWPSSLDRHHJAJRRNHWLTDFVUTMTGHWQBKXKJBSDEBKJNLVBTSUDLRGPNBNULNZAIQBMEDTEHXJPWGSZAYWRXLQF");

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
    msg.setTimeStamp(0.94563915111);
    msg.setSource(57050U);
    msg.setSourceEntity(32U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(96U);
    msg.seq = 48485U;
    msg.sys_dst.assign("XCSRSJQIIOVJSPMVETFAWYIDQAWFJWUWVNTGIFMDRLPOTJCRDLLGAJKBLFFLTZGPZVDMLQQLSYKTGAKWKRWTNRHLQXUFHPNJOBPJVGCNACTYOGABJSWPSOLUXYDSBNHYJAUDCNIUPQ");
    msg.flags = 55U;
    const char tmp_msg_0[] = {116, -20, 102, -25, -85, -86, 86, -35, -44, -102, -87, -104, 92, -95, 81, 100, 102, 102, -80, -4, -90, -113, -34, 102, 68, 42, 44, -7, -10, -15, 25, -43, 9, 58, 3, -10, -20, 70, 92, -124, 89, 42};
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
    msg.setTimeStamp(0.850900123764);
    msg.setSource(17578U);
    msg.setSourceEntity(163U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(20U);
    msg.seq = 1902U;
    msg.sys_dst.assign("JIRGEZLAJXAESDFELGXAWFHXYNWIZIWMVGVCLYJEQJQSJLSYGCMDMGBNUMWGCWTTTNEMFFQBKLKJZPYCTNDNKDQRCTPWIPZOHGNVZTHIQJWSRHOBBCRKYHQRJQONBHBALAKYSHUVZKBIGIKCKZNE");
    msg.flags = 53U;
    const char tmp_msg_0[] = {-27, -113, 63, 91, 103, -93, 32, -12, -86, -83, 32, -89, 97, -26, 54, -24, 69, 97, 80, -71, -19, -10, -113, -70, 103, 39, -110, 73, -100, -16, -104, 70, -54, -111, -125, -73, 114, 64, 43, -122, -23, 2, -48, -87, 66, 31, 24, -17, 39, -93, 73, -116, -101, -90, 9, 0, -44, -59, 124, -10, 62, 98, 104, 67, 90, -37, 118, 27, -35, 65, -75, -103, -112, 36, -25, -30, -2, 105, -114, 119, 63, -69, -48, -66, 69, -5, -50, 7, -9, -4, -43, 75, 25, 76, -97, -27, -78, -17, -70, 44, -70, 126, 100, 104, 91, 102, -52, -105, -117, 64, -105};
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
    msg.setTimeStamp(0.447979498529);
    msg.setSource(13009U);
    msg.setSourceEntity(101U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(86U);
    msg.seq = 25491U;
    msg.sys_dst.assign("HMOMVBSKRGB");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-28, 11, 61, 53, 17, -70, -100, 105, 31, 103, 51, -89, -66, -100, -22, -25, 105, -8, -15, -80, -50, 85, 104, 41, -3, 39, 29, -55, 119, 13, 96, -71, -4, 27, 52, -91, 24, 91, 64, -86, -66, 50, -75, -63, 8, -65, -51, -65, -1, 1, 92, 80, 5, -30, 122, 122, -76, 117, 92, -101, 54, 82, -124, 104, 11, -51, -5, 73, 12, -79, -89, -10, -29, -49, 78, -105, -41, -52, 45, 124, -126, -68, 120, -48, -8, -94, -29, 111, 103, 116, 126, 32, 51, -11, -122, 16, 102, 72, -92, 1, -1, -3, -99, 114, -126, 29};
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
    msg.setTimeStamp(0.073897499051);
    msg.setSource(57553U);
    msg.setSourceEntity(133U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("WNXUQMXWCFXGSAHQGYMJXLZZIOLQOIVBBNJKXGTYJMVECZIXDUAQCCYHKDLKODUJTJDYWZBFNEKFAVXYLDNGQRGZOJISZEMHIGWXPIRMVZFTSHNWJWWQGPAMKBOMRJHHGT");
    msg.sys_dst.assign("UITGLZPYABATKRDMOUMKHGUZSHRNQPYSYBDLFJKNCRBVKXKKJODHNWGXZLQTPMNUZWOCQDJZUXWJISDLVKMNMTERUHAQIXDEWSXYFFPVMBIWJXCJWUYEZBSQECNLRGMUBMHTKKQYHCIBUFXPSKTAOLADHPEOQZRODPPYOCLFHIBCVRZQGHRISQGTFFXJWXUVNJPLQAIAMZVEOJRGVFVJYWNNXBTEVRHLA");
    msg.flags = 114U;
    const char tmp_msg_0[] = {73, 98, -71, 52, -84, -57, -116, -102, -93, 67, -20, -42, 123, 41, 72, 31, 9, -7, 1, -72, 115, -18, 5, -93, -56, 112, 78, -76, -48, 73, -5, 22, -113, -43, 40, -91, 6, -99, -44, 59, 10, -43, -117, -108, -118, -73, -121, 30, 91, 126, -119, 37, 18, -80, 27, 124, -77, -32, 99, -27, -127, 86, -114, 120, -111, 72, -68, -43, -115, -47, -42, -31, -37, -23, -96, -84, -74, 111, 79, -1, 126, 78, 49, 5, 113, 60, -21, 10, -92, 17, 98, -68, -72, 51, -70, -97, -102, 34, -93, 109, -45, 107, -124, -53, -98, -74, -26, -5, 84, 119, -46, -100, -62, -128, 83, 66, -21, 88, -107, -125, -112, -56, -48, -45, -101, -34, -92, 6, -93, -37, 85, -105, -80, 94, -118, -108, -62, -19, 36, -92, -64, 20, -16, 96, 82, 65, 26, -108, 46, 85, 84, -71, 61, 25, -1, 3, -82, -57, 44, 33, 16, -18, 99, 109, 80, -120};
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
    msg.setTimeStamp(0.254852281598);
    msg.setSource(55352U);
    msg.setSourceEntity(6U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("KALUBSADBJCFWPZYQFMYLREROYKLSGJEHVFIHPWTSULSGE");
    msg.sys_dst.assign("RYZGMZFKHOBQSTQUONGVYTQEZBXWCDXSINBMJLEUXKWGNJPVDOFILIGKYSQLWNOLSICFIYEKZWPGPWRMDRLIUNYLPFUJDJHPVSWATAIRCZQYDUTAWDJNPYAHMKVFJECTOJUDXOZQROOEFVCBRIHTUNQCE");
    msg.flags = 113U;
    const char tmp_msg_0[] = {55, 95, 91, -49, 49, -125, -54, -32, -91, -91, -9, -87, 19, -105, 126, -49, -87, 59, -12, -66, 64, -68, 18, -101, 35, 69, -114, -42, 70, -77, 120, -88, 85, -118, -94, -96, 81, -6, -73, 40, 16, -52, -61, 13, 23, -89, -27, -31, -11, -27, -15, 48, -113, 107, -47, 22, 121, -37, -23, -118, -106, 7, -44, 43, 124, -109, 54, -11, 98, 119, -16, -7, 39, 20, -10, 49, 120, -89, -80, 20, 82, 53, 3, -116, -21, -40, -11, -73, 86, 74, -38, -81, 34, -41, 65, -8, 89, 34, 70, 27, -107, 77, 31, -94, 106, 49, 46, -14, 101, -1, 8, 116, 16, -55, 96, -19, 92, 55, -29, 19, 30, -48, -126, -75, 40, 115, -102, 56, 94, -28, -27, -46, -65, -81, 104, -101, -87, -48, 54, -45, -15, -106, -123, 102, 35, -99, 70, 22, 2, -30, 22, -15, 37, 42, -74, 50, 87, -6, -119, 55, -69, 74, -13, -44, 27, -87, -8, 52, 22, 114, -4, 26, 61, 11, -90, 49, -6, 52, -115, 105, 79, 103, 87, 26, 54, 12, -36, -4, 107, 87, 12, 61, 103, 42, 122, 11, 114, 3, -116, -37, 92, -123, -10, 44, -29, -98, -58, -89, 8, -127, 124, 90, -59, -96, -120, 106, -44, -48, -83, 107};
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
    msg.setTimeStamp(0.607190182616);
    msg.setSource(27443U);
    msg.setSourceEntity(222U);
    msg.setDestination(17395U);
    msg.setDestinationEntity(115U);
    msg.sys_src.assign("HYBEUESBASYNXIYQRWVBDJHRCNMVRQSIWJNPSTAJZQAFMRXVHKRJKDJUCUFEKBOIMGTEPFPYECBPPXRFMVXKTOSADQNILTETNZLDINWAXWXPGGGTHFUIOQBLFDTYWGAHTMDHMFHJBOKUGDQMDWKGSCOCNRDNHCOVMQUYIYVZVRUQCRESPSTXQQKJFWLLVPHZKVAZBNXRJZAXELCLVBYOIULFCECSAPULGKIHWDPNXZAKWZZLGUBT");
    msg.sys_dst.assign("GWGWMOJMGQOOOUXYIOJUEZKFWOTTEIAFYABIDBVSNLUYVLMZXUWJKFLFCCTCNMKBSMLMMIPCTKBOQLRKYCAWQRGGIPVJHEDRYQCGWHCUDZWFQFS");
    msg.flags = 186U;
    const char tmp_msg_0[] = {-89, 45, 78, 31, 64, -1, 100, -9, 42, -120, 4, -61, 69, 45, -68, 19, -67, -109, -125, -47, -26, -104, 118, -10, 121, 90, -32, 101, 48, -6, -114, -123, -121, -78, 17, -42, -5, 3, -9, 77, 53, -113, -59, 113, 7, 48, -37, 46, 61, 4, -54, -98, 66, -6, 67, 80, 113, 63, -29, 92, -54, 48, -72, -46, 15, -43, -74, 78, -61, 1, -14, 36, -47, -110, -119, 78, 31, -102, 58, 19, 63, -83, 16, 61, 40, -5, 100, -36, -50, 106, 12, -120, -69, -76, 76, -32, 19, 57, 55, 115, 26, 3, 46, -100, -14, -57, 76, -84, 102, 119, -100, -3, 116, -72, -86, 95, -84, -5, 40, -80, 103, 34, -38, 33, 125, 44, 116, -37, 47, 6, -98, -64, 100, 84, 117, -119, -110, -76, 93, 0, 108, -36, 73, 31, 13, 49, -79, 93, -122, -20, -25, -61, 18, 45, 88, 63, 11, -38, -24, -12, 118, -53, 13, 27, -32, 125, 69, 126, -78, 53, 114, -18, 57, 126, -103, 41, 27, 107, -105, 2, -47, 44, 97, 43, 84, -76, -43, -85, 96, -97, 42, -81, 41};
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
    msg.setTimeStamp(0.924216105659);
    msg.setSource(47428U);
    msg.setSourceEntity(180U);
    msg.setDestination(12384U);
    msg.setDestinationEntity(223U);
    msg.seq = 16025U;
    msg.value = 73U;
    msg.error.assign("HPVQSOHYSOSCHYYCFLNSTOQUSYZYDVWTRYHCZIXYWUTHIRWHMJEUQRTGVQBEDAECWRLWXERNKIVZMDGWQECOPNFDYKZ");

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
    msg.setTimeStamp(0.206853362917);
    msg.setSource(3103U);
    msg.setSourceEntity(173U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(213U);
    msg.seq = 24677U;
    msg.value = 78U;
    msg.error.assign("TMVJHRLPCFJYZBVIIEEHEHPPZQPZRSXBJVZTUZPUTKAAYOFKTKNTCGSOLMAJCVKKLRDNOBDCRIIMYOLOQEFUUCTRQUVTHDTBVBRGFWNHGUQRADCCZLPCIHDQEPQWJIXBHQXSXBEXSINVXEJLOBWMULYZCMGDAWGLSJXWPSSLJASMWVJXKLFONNTMAQIXWFAYVQBKPKYIKDOGYZFNPZZ");

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
    msg.setTimeStamp(0.0740032370188);
    msg.setSource(9231U);
    msg.setSourceEntity(207U);
    msg.setDestination(54687U);
    msg.setDestinationEntity(75U);
    msg.seq = 15747U;
    msg.value = 43U;
    msg.error.assign("ASVTSBGFOZCAYQYOLCGRWDZJSMWPYSPBAZPVXEJXGTWAXVTPNCJSUXNNLNYSDBHVTGQKHUWDIUNVCIHEFSYEYFPTCEIPWCAQXHKEMZCIIJEIMJMQYXDBFSOKRRESNXKAOMOTKZLBBEHKRYLJBGTRWSKAPGQFZMBFUZHDGJTICJVOTUYJWU");

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
    msg.setTimeStamp(0.553090727417);
    msg.setSource(30869U);
    msg.setSourceEntity(216U);
    msg.setDestination(33498U);
    msg.setDestinationEntity(65U);
    msg.seq = 22928U;
    msg.sys.assign("YIUIIWSKZQKZW");
    msg.value = 0.596713264673;

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
    msg.setTimeStamp(0.942948370372);
    msg.setSource(43560U);
    msg.setSourceEntity(60U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(102U);
    msg.seq = 51023U;
    msg.sys.assign("NKXMQCVLTZFRJAZIPIILBWFVEZTHDEVUFCQMAXRNSPXAGS");
    msg.value = 0.673030879773;

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
    msg.setTimeStamp(0.124018034263);
    msg.setSource(5514U);
    msg.setSourceEntity(143U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(20U);
    msg.seq = 30013U;
    msg.sys.assign("BPHTZFEMLTDVWNCYWVAORYPUEVVNQLSNTSYKIDNBEKAGTSOTDZEKHKMIWFCRPJXZQLHBUZWHNSXOORUMUZONUUQIRWRONHJIEKEDUXDPHAQCIDKYFCDUGFCSKARVUBTAAGXSYZIKDXLXJRNAQZBBIUZXBHAMLXLLTZCWKYNTEGYRJGQMJPYFLJXDGYFTSQEJORSPSCVWOEDGWFVBVFVQHJAITGRQLBVFOJPMNWPMWZQOMIMPSGBEKP");
    msg.value = 0.261052547968;

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
    msg.setTimeStamp(0.66468221192);
    msg.setSource(5877U);
    msg.setSourceEntity(196U);
    msg.setDestination(21258U);
    msg.setDestinationEntity(34U);
    msg.action = 68U;
    msg.longain = 0.0748222988843;
    msg.latgain = 0.860222388143;
    msg.bondthick = 2080981032U;
    msg.leadgain = 0.917002774762;
    msg.deconflgain = 0.632659890191;

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
    msg.setTimeStamp(0.89894145898);
    msg.setSource(35816U);
    msg.setSourceEntity(163U);
    msg.setDestination(32634U);
    msg.setDestinationEntity(43U);
    msg.action = 241U;
    msg.longain = 0.550882083594;
    msg.latgain = 0.50424695866;
    msg.bondthick = 2596391235U;
    msg.leadgain = 0.939968748202;
    msg.deconflgain = 0.236080590051;

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
    msg.setTimeStamp(0.498190872833);
    msg.setSource(51142U);
    msg.setSourceEntity(130U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(64U);
    msg.action = 34U;
    msg.longain = 0.883649844034;
    msg.latgain = 0.466461556879;
    msg.bondthick = 4273083531U;
    msg.leadgain = 0.551668069162;
    msg.deconflgain = 0.708448976722;

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
    msg.setTimeStamp(0.244411248194);
    msg.setSource(48995U);
    msg.setSourceEntity(19U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(30U);
    msg.err_mean = 0.128807184278;
    msg.dist_min_abs = 0.710729528447;
    msg.dist_min_mean = 0.768718298168;

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
    msg.setTimeStamp(0.561017928415);
    msg.setSource(55071U);
    msg.setSourceEntity(137U);
    msg.setDestination(55648U);
    msg.setDestinationEntity(177U);
    msg.err_mean = 0.070102778653;
    msg.dist_min_abs = 0.990486853863;
    msg.dist_min_mean = 0.147616835106;

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
    msg.setTimeStamp(0.644224388041);
    msg.setSource(12555U);
    msg.setSourceEntity(90U);
    msg.setDestination(48150U);
    msg.setDestinationEntity(21U);
    msg.err_mean = 0.0719662251026;
    msg.dist_min_abs = 0.578569405043;
    msg.dist_min_mean = 0.962428835009;

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
    msg.setTimeStamp(0.717868556178);
    msg.setSource(13151U);
    msg.setSourceEntity(59U);
    msg.setDestination(7427U);
    msg.setDestinationEntity(131U);
    msg.action = 81U;
    msg.lon_gain = 0.631773781323;
    msg.lat_gain = 0.225191429031;
    msg.bond_thick = 0.0704975826218;
    msg.lead_gain = 0.688972379017;
    msg.deconfl_gain = 0.890451980228;
    msg.accel_switch_gain = 0.222181824602;
    msg.safe_dist = 0.306623621371;
    msg.deconflict_offset = 0.882648878996;
    msg.accel_safe_margin = 0.88061018849;
    msg.accel_lim_x = 0.963915656996;

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
    msg.setTimeStamp(0.971620652748);
    msg.setSource(16485U);
    msg.setSourceEntity(210U);
    msg.setDestination(43711U);
    msg.setDestinationEntity(131U);
    msg.action = 150U;
    msg.lon_gain = 0.921972815748;
    msg.lat_gain = 0.105011447763;
    msg.bond_thick = 0.0271605940739;
    msg.lead_gain = 0.392395654928;
    msg.deconfl_gain = 0.697644261889;
    msg.accel_switch_gain = 0.28130734963;
    msg.safe_dist = 0.409500478438;
    msg.deconflict_offset = 0.390350845559;
    msg.accel_safe_margin = 0.387364726195;
    msg.accel_lim_x = 0.670877931983;

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
    msg.setTimeStamp(0.64287672662);
    msg.setSource(43325U);
    msg.setSourceEntity(24U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(222U);
    msg.action = 98U;
    msg.lon_gain = 0.860902801799;
    msg.lat_gain = 0.786169229565;
    msg.bond_thick = 0.528760307729;
    msg.lead_gain = 0.279381791718;
    msg.deconfl_gain = 0.256055025407;
    msg.accel_switch_gain = 0.655192518772;
    msg.safe_dist = 0.355554191424;
    msg.deconflict_offset = 0.617234851103;
    msg.accel_safe_margin = 0.0609662465674;
    msg.accel_lim_x = 0.596171376229;

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
    msg.setTimeStamp(0.0317340955018);
    msg.setSource(42233U);
    msg.setSourceEntity(60U);
    msg.setDestination(45731U);
    msg.setDestinationEntity(65U);
    msg.type = 183U;
    msg.op = 32U;
    msg.err_mean = 0.180651163952;
    msg.dist_min_abs = 0.765639555638;
    msg.dist_min_mean = 0.826469338523;
    msg.roll_rate_mean = 0.387928510639;
    msg.time = 0.2821765931;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 98U;
    tmp_msg_0.lon_gain = 0.618333554875;
    tmp_msg_0.lat_gain = 0.128728510117;
    tmp_msg_0.bond_thick = 0.614405425503;
    tmp_msg_0.lead_gain = 0.673435819759;
    tmp_msg_0.deconfl_gain = 0.540327507125;
    tmp_msg_0.accel_switch_gain = 0.0795097328312;
    tmp_msg_0.safe_dist = 0.787661419506;
    tmp_msg_0.deconflict_offset = 0.778544022789;
    tmp_msg_0.accel_safe_margin = 0.58288855417;
    tmp_msg_0.accel_lim_x = 0.105262772457;
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
    msg.setTimeStamp(0.135501915693);
    msg.setSource(5461U);
    msg.setSourceEntity(218U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(69U);
    msg.type = 35U;
    msg.op = 104U;
    msg.err_mean = 0.890198981458;
    msg.dist_min_abs = 0.613487942286;
    msg.dist_min_mean = 0.990066316196;
    msg.roll_rate_mean = 0.278031122936;
    msg.time = 0.864045200174;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 202U;
    tmp_msg_0.lon_gain = 0.0713365082461;
    tmp_msg_0.lat_gain = 0.242622293185;
    tmp_msg_0.bond_thick = 0.768094538331;
    tmp_msg_0.lead_gain = 0.238620537662;
    tmp_msg_0.deconfl_gain = 0.211079569682;
    tmp_msg_0.accel_switch_gain = 0.346422756173;
    tmp_msg_0.safe_dist = 0.168113266642;
    tmp_msg_0.deconflict_offset = 0.869576270544;
    tmp_msg_0.accel_safe_margin = 0.579562543093;
    tmp_msg_0.accel_lim_x = 0.282251752953;
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
    msg.setTimeStamp(0.289062261827);
    msg.setSource(19636U);
    msg.setSourceEntity(194U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(83U);
    msg.type = 83U;
    msg.op = 233U;
    msg.err_mean = 0.969601841045;
    msg.dist_min_abs = 0.398301458329;
    msg.dist_min_mean = 0.596968421196;
    msg.roll_rate_mean = 0.913890044514;
    msg.time = 0.693620594818;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 185U;
    tmp_msg_0.lon_gain = 0.571927104718;
    tmp_msg_0.lat_gain = 0.480623872;
    tmp_msg_0.bond_thick = 0.759224854677;
    tmp_msg_0.lead_gain = 0.446217496653;
    tmp_msg_0.deconfl_gain = 0.227895149295;
    tmp_msg_0.accel_switch_gain = 0.698193639203;
    tmp_msg_0.safe_dist = 0.782373140776;
    tmp_msg_0.deconflict_offset = 0.64096865454;
    tmp_msg_0.accel_safe_margin = 0.0691905827118;
    tmp_msg_0.accel_lim_x = 0.698082110138;
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
    msg.setTimeStamp(0.488479892838);
    msg.setSource(48190U);
    msg.setSourceEntity(119U);
    msg.setDestination(36732U);
    msg.setDestinationEntity(122U);
    msg.uid = 145U;
    msg.frag_number = 139U;
    msg.num_frags = 14U;
    const char tmp_msg_0[] = {72, 8, 1, 35, -6, 103, 73, 23, -55, -52, 29, 106, 100, -119, 50, -39, 49, 6, 105, -118, 66, 58, -80, 31, -56, -2, -115, -21, -83, 33, 45, -8, -59, 98, -116, 113, 28, -31, 36, -92, 59, -59, 16, 88, -64, -103, -94, 45, 2, 53, 41, -60, -57, 41, -25, -93, 93, -86, -57, 35, 108, 112, -47, 19, 94, 43, -103, -82, 30, 45, 39, 14, -15, -84, -11, -55, 29, -102, 27, -42, 39, -67, 60, -56, 51, -118, -21, -124, 75, -5, 34, -73, 25, -16, 48, 90, 92, 87, 109, -50, -14, -89, 44, 47, -109, 19, 102, 13, -87, 12, -126, 105, 58, 25, 29, -81, -91, 73, 115, 35, 47, -112, -48, 106, 9, 95, 111};
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
    msg.setTimeStamp(0.701653494739);
    msg.setSource(22272U);
    msg.setSourceEntity(121U);
    msg.setDestination(2171U);
    msg.setDestinationEntity(195U);
    msg.uid = 176U;
    msg.frag_number = 17U;
    msg.num_frags = 141U;
    const char tmp_msg_0[] = {-16, -84, -107, 96, -118, 68, -98, 37, 122, 126, -90, 4, -121, -29, -4, 65, -98, -82, -12, -11, -37, -120, -100, 87, -86, 59, -91, 84, 95, 97, -125, -124, -125, 29, -5, -110, -68, 17, -115, 104, -78, -99, -118, 16, 69, -101, 85, 101, 26, 55, -2, -104, -100, 19, 95, 77, 0, -119, 86, 59, -127, -103, 38, -61, -47, 48, 62, 45, -38, 21, 13, -25, 123, 103, -14, -31, -83, 91, 46, 7, 120, 61, -21, 90, 12, 67, -24, -57, -77, -107, 12, -36, 96, 11, -44, -127, -92, 49, -3, 107, 23, -117, -85, -109, 67, 46, -114, -53, -52, 113, -23, 42, 5, -97, 76, 24, 34, -6, 44, -10, 67, -107, 50, 92, -67, 57, 24, 7, -18, -100, 89, 88, -108, 20, -109, -81, 53, -10, 102, 82, -3, -113, 32, 118, 40, 108, 56, 93, -70, 58, 64, 126, -116, -96, -33, -39, 2, 56, -86, -32, 49, -87, -120, -55, 76, -43, -35, -103, -33, -107, 96, -126, -61, 13, 112, 86, -55, 14, 68, 33, -81, -22, 119, 3, 119, 78, -60, -15, -106, -107, -88, 78, 70, 109, 4, 25, 10, 17, 24, 93, -112, 89, 7, 97, -122, -69, 49, 113, -17, -35, -71, 118};
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
    msg.setTimeStamp(0.422503172867);
    msg.setSource(54993U);
    msg.setSourceEntity(91U);
    msg.setDestination(25277U);
    msg.setDestinationEntity(67U);
    msg.uid = 86U;
    msg.frag_number = 84U;
    msg.num_frags = 202U;
    const char tmp_msg_0[] = {24, -41, 35, 64, -101, 80, 1, 18, -80, 64, -49, -10, -86, 41, -101, 13, 116, 39, 114, 103, -53, -75, 31, 121, 3, 119, 61, -61, 62, -68, -107, 13, 80, -55, -4, 116, -36, -60, -31, -38};
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
    msg.setTimeStamp(0.100534340382);
    msg.setSource(37457U);
    msg.setSourceEntity(215U);
    msg.setDestination(4819U);
    msg.setDestinationEntity(174U);
    msg.content_type.assign("LAUHJHDGQFWSZWFTHCWXSUANXHYDQDFTLSUAVPNPZDWVUQLVBWSXUMDRJOYLXPOPNKAMEGUORHCINWPHSCSITLSRWVOYIYHXPACEMATDCPJFPIMUJNCMKRMRUYBARBQKTKERGSZPJMGZCMDJBQBBKIADQREOYEFVEOKXDMLJTIXTBZTUQOAIQYECRGMSKZJSWFYBAGXNLPHLXLJIUKZEOBFIVTDWCTEQJGGRNZFHVOKOFYGIQZBNVYNHEZCFVV");
    const char tmp_msg_0[] = {-18, 36, 125, 55, -27, -12, 45, -87, 98, -20, -40, -98, -105, -66, 74, 58, -14, -101, 47, -28, -13, 66, -12, 103, 123, -100, 121, -126, -79, -49, -106, -25, -56, -65, 19, -53, -118, 123, 49};
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
    msg.setTimeStamp(0.432971548023);
    msg.setSource(15245U);
    msg.setSourceEntity(99U);
    msg.setDestination(45809U);
    msg.setDestinationEntity(177U);
    msg.content_type.assign("RUYWGOVVYWWSLIJECAIUALUDXEHOGHDJNPZBDSGVRBIFPERZYDMYSLVXUBEFMVKJMFAWZBNOBKPSDCPLQ");
    const char tmp_msg_0[] = {-108, 84, 4, -105, 47, -64, 11, -120, 34, 50, -53, 62, -82, -53, 126, -93, 98, 98, -43, -110, 97, 30, -109, 107, 63, -126, 73, -48, -32, 14, -76, -45, 21, -19, 92, 41, -72, -119, -31, -101, 91, -109, 57, 17, 121, 2, 48, -92, -82, 11, -29, 93, -28, -34, -81, -85, 7, 99, 42};
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
    msg.setTimeStamp(0.656604939535);
    msg.setSource(6903U);
    msg.setSourceEntity(5U);
    msg.setDestination(29312U);
    msg.setDestinationEntity(59U);
    msg.content_type.assign("DDKBKGMSLAZMXNKEBDYFTWNBKLTWCAYYINBRWZPKRXR");
    const char tmp_msg_0[] = {-104, 20, -116, 99, -25, -105, -77, 44, 43, 83, 39, -70, 53, 33, 93, -124, 108, -77, 15, 118, 38, 16, -121, 19, 90, -102, 38, 21, 64, 99, -89, -23, -75, 31, -103, 81, 5, -42, -121, -95, 70, -32, -128, -73, 16, 24, -114, -17, 9, 24, 108, 90, -60, 92, 12, 11, 4, -65, -66, -26, -6, 87, -120, -55, 10, -85, 6, 4, 53, 88, 109, 123, -74, 84, 0, 122, 37, -2, 115, 55, 103, 68, -17, 112, -62, -104, 66, -60, -75, -64, -48, 120, -112, 9, 34, -51, -88, -109, 83, 19, -43, 89, 45, -111, 76, -72, -83, 94, -26, 41, -39, 86, -122, 95, 107, -81, 62, 121, 65, 125, -18, -44, -93, -89, 84, -74, 60, -11, -14, -65, 62, 44, 39, -30, -20, 88, -63, 16, 68, -109, -40, 16, 102, 64, 64, 48, -108, 102, -117, 94, 63, -16, 23, -85, 19, -110, -57, 120, 79, 114, 88, 80, 71, 84, -8, -57, -49, -93, 126, 60, 106, -49, -8, -79, 117, 95, -67, -62, 22, -61, -54, -8, 75, 27, -20, 93, -61, -36, -78, 56, -35, -34, -3, -99, -100, -45, 19, -18, 33, 13, 18, -109, -31, -58, 23, -50, -30, -43, 104, 73, -74, 82, -58, -87, -95, 11, -36, -71, 42, -114, 67, -80, 60, 62, -73, 35, -85, -32, 39, 114, 118, 54, -14, 32, 116, 51, 77, -54, 76, 66, 48, 76, 0, -2, 61, 103, -27, 80, -84, 50, -32, 14, 63, 103};
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
    msg.setTimeStamp(0.849242165677);
    msg.setSource(19015U);
    msg.setSourceEntity(78U);
    msg.setDestination(38286U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.272370706335);
    msg.setSource(40809U);
    msg.setSourceEntity(217U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.251747418619);
    msg.setSource(39581U);
    msg.setSourceEntity(219U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.960407751239);
    msg.setSource(33799U);
    msg.setSourceEntity(45U);
    msg.setDestination(11766U);
    msg.setDestinationEntity(131U);
    msg.target = 19974U;
    msg.bearing = 0.59543108994;
    msg.elevation = 0.0113791744123;

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
    msg.setTimeStamp(0.0385574696749);
    msg.setSource(1077U);
    msg.setSourceEntity(124U);
    msg.setDestination(47750U);
    msg.setDestinationEntity(216U);
    msg.target = 31389U;
    msg.bearing = 0.380743181515;
    msg.elevation = 0.709164684268;

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
    msg.setTimeStamp(0.0483101179916);
    msg.setSource(54676U);
    msg.setSourceEntity(54U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(125U);
    msg.target = 2759U;
    msg.bearing = 0.320483796666;
    msg.elevation = 0.268769985704;

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
    msg.setTimeStamp(0.821497183474);
    msg.setSource(26356U);
    msg.setSourceEntity(243U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(55U);
    msg.target = 61218U;
    msg.x = 0.00561695603806;
    msg.y = 0.199108595735;
    msg.z = 0.765454737463;

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
    msg.setTimeStamp(0.0121325008658);
    msg.setSource(36785U);
    msg.setSourceEntity(244U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(111U);
    msg.target = 31483U;
    msg.x = 0.0968053262101;
    msg.y = 0.893865826617;
    msg.z = 0.0814858180515;

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
    msg.setTimeStamp(0.854284648967);
    msg.setSource(49843U);
    msg.setSourceEntity(232U);
    msg.setDestination(13487U);
    msg.setDestinationEntity(83U);
    msg.target = 13772U;
    msg.x = 0.278782234077;
    msg.y = 0.785300588986;
    msg.z = 0.473585694055;

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
    msg.setTimeStamp(0.473588167717);
    msg.setSource(4926U);
    msg.setSourceEntity(216U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(166U);
    msg.target = 8638U;
    msg.lat = 0.116851642374;
    msg.lon = 0.941970704207;
    msg.z_units = 247U;
    msg.z = 0.00790591342931;

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
    msg.setTimeStamp(0.31999934157);
    msg.setSource(42835U);
    msg.setSourceEntity(136U);
    msg.setDestination(31713U);
    msg.setDestinationEntity(201U);
    msg.target = 56046U;
    msg.lat = 0.481629588401;
    msg.lon = 0.832440958131;
    msg.z_units = 108U;
    msg.z = 0.182842825671;

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
    msg.setTimeStamp(0.869499044747);
    msg.setSource(11192U);
    msg.setSourceEntity(68U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(6U);
    msg.target = 454U;
    msg.lat = 0.0628829085771;
    msg.lon = 0.353868282007;
    msg.z_units = 159U;
    msg.z = 0.717717224487;

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
    msg.setTimeStamp(0.501787264796);
    msg.setSource(39801U);
    msg.setSourceEntity(163U);
    msg.setDestination(5236U);
    msg.setDestinationEntity(5U);
    msg.locale.assign("NUGERFHROCXBMUQWPMOXW");
    const char tmp_msg_0[] = {-78, -117, -1, 60, 69, 45, -36, 113, 61, 52, 40, -29, -73, -97, -84, 19, -15, 61, 59, -112, -117, -86, -35, -32, -16, -86, -45, -14, -121, 39, -1, -54, -126, -61, -19, -86, -53, -127, 95, 49, 2, -111, 44, -23, -28, -78, 69, -121, -64, -25, -75, -35, 65, -106, 42, 102, -128, -11, -103, -111, 74, -83, -31, 94, -49, 113, -24, -108, 22, -50, -105, 70, 72, 69, -50, 122, 13, -82, -64, 82, 60, -70, -54, -111, 99, -36, -45, 12, 82, 87, 32, 11, 84, 117, -8, -62, -37, -57, -27, 114, 126, -91, -66, 11, -4, 62, 6, 51, -50, -93, 117, 121, -46, -86, 19, 48, -66, -120, 45, 115, 122, -62, 121, 37, -27, -60, -23, -27, 70, 83, 55, -117, 11, 29, -22, -18, -116, -28, 69, 89, -104, 114, -82, -54, 96, 15, 30, -42, -16, -93, -3, -51, 0, -58, -66, -34, -65, 104, 6, 40, 43, -13, 81, -39, -123, 99, 21, 39, 84, 66, -66, 15, 100, 37, -23, 99, 118, -107, -103, 78, 62, 81, -21, -65, 83, 48, -127, -116, 113, 114, 80, 120, 99, -47, 68, 11, 28, -29, 59, 68, -123, 121, 102, -105, 72, 13, 64, 109};
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
    msg.setTimeStamp(0.0349438778861);
    msg.setSource(29923U);
    msg.setSourceEntity(181U);
    msg.setDestination(21950U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("WQFCOPEOEELYFZXNXDFKFVWWAPRFPWTTQOJEURUHLWTQMFLDVSMHBXGDMZCLOKDQRP");
    const char tmp_msg_0[] = {111, -112, 119, 63, 37, -125, 34, -65, -118, 78, 106, 82, 52, -85, 114, 45, 109, 123, 66, -22, -106, 120, 46, 10, -30, 32, 5, -124, 117, -44, -58, -18, 72, -100, 83, 70, -63, -88, 41, 41, 87, -20, 5, 97, 46, -24, -119, 53, 53, -32, -95, -44, 87, -41, -59, 95, 68, 39, -123, -4, -103, -125, -74, -73, -46, -23, 125, 17, 4, 33, -116, 64, 9, -117, -100, 32, 104, 79, -106, -42, -81, -24, 18, 111, 27, -8, -15, 93, -98, -95, -77, -16, -46, -51, 104, -96, 87, 62, 112, -36, -42, 35, -33, -64, -126, 17, -97, -109, 32, 116, 116, -75, 96, -126, 96, 44, -64, -119, 49, 76, -126, 69, 86, 68, 73, -27, 117, 45, 47, 34, 113, 92, 30, -27, -25, -107, 9, -105, -51, -10, -116, 17, -106, -74, -85, 107, 10, 18, -77, 82, 104, 112, -49, -117, 39, 84, -97, -57, 105, 74, 55, 30, -43, -107, 122, 32, 37, 87, -37, 87, 1, -13, -68, 89, 77, 59, -9, -127, 17, -36, -14, -69, 39, -94, -45, -81, 9, 69, -7, -39, -115, -73, 26, -3, 52, -4, -80, -71, 50, -55, -90, 13, -43, -66, -17, -79, -75, 35, -83, 30, -81, 35, -115, -5, -9, -40, -49, 14, 88, 109, 84, -95, -46, -104, 22, -65, -102, 5, -73, -28, -38, 69, 119, 105, 123, -101, -50, -81, 77, 29, 26, 107, 8, -108};
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
    msg.setTimeStamp(0.24202525869);
    msg.setSource(61767U);
    msg.setSourceEntity(203U);
    msg.setDestination(28112U);
    msg.setDestinationEntity(107U);
    msg.locale.assign("IYWFBWOKWWCFZIHIXTVGEMOCBKZGMCUNJNVIAILPCGNKQCFXPRJOSQBULQWBETLBPDTQ");
    const char tmp_msg_0[] = {-89, -56, -40, -120, -2, 21, 42, 121, 11, 69, 112, -14, 45, 98, 39, -75, 36, 118, 97, 100, -113, -40, -119, -26, -111, -109, -34, 38, -52};
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
    msg.setTimeStamp(0.904442741558);
    msg.setSource(56483U);
    msg.setSourceEntity(86U);
    msg.setDestination(23957U);
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
    msg.setTimeStamp(0.954434153162);
    msg.setSource(261U);
    msg.setSourceEntity(2U);
    msg.setDestination(29350U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.0705606440134);
    msg.setSource(44180U);
    msg.setSourceEntity(220U);
    msg.setDestination(39753U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.376384559702);
    msg.setSource(55567U);
    msg.setSourceEntity(151U);
    msg.setDestination(45779U);
    msg.setDestinationEntity(4U);
    msg.camid = 249U;
    msg.x = 65192U;
    msg.y = 5425U;

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
    msg.setTimeStamp(0.646926261048);
    msg.setSource(43850U);
    msg.setSourceEntity(229U);
    msg.setDestination(20412U);
    msg.setDestinationEntity(199U);
    msg.camid = 56U;
    msg.x = 25585U;
    msg.y = 35924U;

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
    msg.setTimeStamp(0.987224407928);
    msg.setSource(32580U);
    msg.setSourceEntity(12U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(73U);
    msg.camid = 175U;
    msg.x = 40952U;
    msg.y = 61500U;

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
    msg.setTimeStamp(0.364677094553);
    msg.setSource(28774U);
    msg.setSourceEntity(253U);
    msg.setDestination(17591U);
    msg.setDestinationEntity(66U);
    msg.camid = 49U;
    msg.x = 149U;
    msg.y = 597U;

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
    msg.setTimeStamp(0.605916545383);
    msg.setSource(48584U);
    msg.setSourceEntity(106U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(129U);
    msg.camid = 96U;
    msg.x = 3180U;
    msg.y = 61098U;

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
    msg.setTimeStamp(0.158087575104);
    msg.setSource(45894U);
    msg.setSourceEntity(124U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(180U);
    msg.camid = 3U;
    msg.x = 65365U;
    msg.y = 23966U;

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
    msg.setTimeStamp(0.935421512311);
    msg.setSource(7904U);
    msg.setSourceEntity(47U);
    msg.setDestination(45786U);
    msg.setDestinationEntity(30U);
    msg.tracking = 169U;
    msg.lat = 0.721087268777;
    msg.lon = 0.222430656181;
    msg.x = 0.716020967927;
    msg.y = 0.77787891014;
    msg.z = 0.212476069738;

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
    msg.setTimeStamp(0.688495987276);
    msg.setSource(43115U);
    msg.setSourceEntity(205U);
    msg.setDestination(48651U);
    msg.setDestinationEntity(226U);
    msg.tracking = 97U;
    msg.lat = 0.985640248904;
    msg.lon = 0.683173957914;
    msg.x = 0.529774180207;
    msg.y = 0.62808912163;
    msg.z = 0.605950064448;

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
    msg.setTimeStamp(0.249197809997);
    msg.setSource(64275U);
    msg.setSourceEntity(201U);
    msg.setDestination(48801U);
    msg.setDestinationEntity(123U);
    msg.tracking = 154U;
    msg.lat = 0.278742254483;
    msg.lon = 0.304286478837;
    msg.x = 0.254183431044;
    msg.y = 0.220462854948;
    msg.z = 0.795656977274;

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
    msg.setTimeStamp(0.399873341052);
    msg.setSource(26203U);
    msg.setSourceEntity(82U);
    msg.setDestination(44410U);
    msg.setDestinationEntity(211U);
    msg.target.assign("ODNXKQFQRJUSETRHJEQPHSDDGAZQPHFCSWZERHLCMIWKUZJEJLKLQZNDXDLDSYWWVCMLVKUQGWXMIGUSSWGPOVFUMVFRSKTCSBNPIMPZKIFBHMLOTHFACYYLFJHIZNBANCXBOZDQWTGMCEBNHEJQMQCXNHTYGAERMRLQ");
    msg.lbearing = 0.673818174194;
    msg.lelevation = 0.779683171109;
    msg.bearing = 0.853490190751;
    msg.elevation = 0.281884378395;
    msg.phi = 0.346484703744;
    msg.theta = 0.842323890489;
    msg.psi = 0.11837812666;
    msg.accuracy = 0.565547289483;

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
    msg.setTimeStamp(0.163222277479);
    msg.setSource(34400U);
    msg.setSourceEntity(62U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(218U);
    msg.target.assign("WHGOCLANUZQWFEHLWQGLFHORVEZEQURQNWSYHQARSUGIYFGPOWDEKKQXCFSXOBBUVVZYZCERVKQXFXWAAEQBHNTTFAGJSCMPTXSFBCUEGJMYNIFNMBTZVYDYXMSPSHNDVZBXPMJIEHVYDPGJQNNVBZORVHLUKWRPLRUMYLLJYCICATRKDZDCUFLOWWXIOROHMSIDKIAMBGLDTSKOPBTAPKHTXITKEEZGIKRD");
    msg.lbearing = 0.451959980506;
    msg.lelevation = 0.251656529046;
    msg.bearing = 0.257944057468;
    msg.elevation = 0.26204613322;
    msg.phi = 0.954017292053;
    msg.theta = 0.824702996823;
    msg.psi = 0.635590293771;
    msg.accuracy = 0.425884842527;

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
    msg.setTimeStamp(0.806049654097);
    msg.setSource(50800U);
    msg.setSourceEntity(42U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(217U);
    msg.target.assign("HXQGTJYSWCQTRLCFQEBITCKUNDKPPXBRWIZEZWOGBBHKPLFAIBRCJOZWADVFAQFTCJUMYRNNTHURSDODKCOZWUFMKKKYLNJEVCUUGVXLGMSEMGDWSYXJZHTKCNNYGPRMHLXHYQDZCFEVHPRQFVJYX");
    msg.lbearing = 0.740476091432;
    msg.lelevation = 0.475746525506;
    msg.bearing = 0.514171614583;
    msg.elevation = 0.799323073848;
    msg.phi = 0.737798749586;
    msg.theta = 0.202053155566;
    msg.psi = 0.50429870653;
    msg.accuracy = 0.0303414328328;

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
    msg.setTimeStamp(0.628811983033);
    msg.setSource(48160U);
    msg.setSourceEntity(106U);
    msg.setDestination(55333U);
    msg.setDestinationEntity(75U);
    msg.target.assign("FOBRLBRXNYTDZONVZVZPMVSZPFWWPBUDYUYDYYTGCWALGQJGPHXOQGMLXDFFRILKNLAGRDM");
    msg.x = 0.13383875582;
    msg.y = 0.111620124608;
    msg.z = 0.0465147754967;
    msg.n = 0.607065622765;
    msg.e = 0.680310246131;
    msg.d = 0.490139628483;
    msg.phi = 0.121075458114;
    msg.theta = 0.166021493151;
    msg.psi = 0.876793675586;
    msg.accuracy = 0.662080437629;

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
    msg.setTimeStamp(0.0730003809991);
    msg.setSource(40638U);
    msg.setSourceEntity(45U);
    msg.setDestination(24239U);
    msg.setDestinationEntity(74U);
    msg.target.assign("RRVIUCFAJBEHEAKFOLUUMHXOPSDDRZ");
    msg.x = 0.865677393473;
    msg.y = 0.786082854435;
    msg.z = 0.818855433037;
    msg.n = 0.137296059551;
    msg.e = 0.967665496854;
    msg.d = 0.17781678693;
    msg.phi = 0.923256650451;
    msg.theta = 0.665899205101;
    msg.psi = 0.432758374189;
    msg.accuracy = 0.366751877254;

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
    msg.setTimeStamp(0.573597891558);
    msg.setSource(14748U);
    msg.setSourceEntity(24U);
    msg.setDestination(63613U);
    msg.setDestinationEntity(241U);
    msg.target.assign("SJMSJUXQGHPADTDKDQWBNOUYZYTGTIHHHPEOBPSANKZXURHJLFBVDVTWZYPRSNBAJRCIKQESFUMLTZFUWZVYFPVAZYFGIBNELRYQCUJZECMMJFJCNNVQCNWBWYWDPGAFFOVOXQJCAILVEHEIVHNGAJLCZCYSDGOTHGJMRPWRRTACXWMESYVIFPLKPLGMAEVTXINBOBDTUFDBPQSBQOWTQUERSOMLKYUIEOMDX");
    msg.x = 0.822403118824;
    msg.y = 0.963763647126;
    msg.z = 0.667143222168;
    msg.n = 0.223890902976;
    msg.e = 0.674488262929;
    msg.d = 0.129337902645;
    msg.phi = 0.440989098805;
    msg.theta = 0.502738053232;
    msg.psi = 0.978725430814;
    msg.accuracy = 0.840431356236;

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
    msg.setTimeStamp(0.411459342824);
    msg.setSource(36398U);
    msg.setSourceEntity(177U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(64U);
    msg.target.assign("EAMVZQOERSJNEIAUOFSYSCGVYCXEWLSSHBYTPMXXRBIWVUTXRMYXBBGNBXHDYZMTDMNQPQPYWIQHJBPVVLSMGQAFSVCDHLFKIUVIGKDVRBKYZ");
    msg.lat = 0.670744418951;
    msg.lon = 0.482315620481;
    msg.z_units = 126U;
    msg.z = 0.712916669971;
    msg.accuracy = 0.925441602412;

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
    msg.setTimeStamp(0.985013010554);
    msg.setSource(2356U);
    msg.setSourceEntity(19U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(222U);
    msg.target.assign("AMVVZSRRMFAIITLCXWAPXCMKBVCCUNYTICHNMWOYNNGGVYLJSDIFPWXAAUKTPHLQKGTXVJYESSBFGTMOUEWEBSFUMVBDTO");
    msg.lat = 0.53355936834;
    msg.lon = 0.474368907659;
    msg.z_units = 6U;
    msg.z = 0.856816137129;
    msg.accuracy = 0.327955345774;

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
    msg.setTimeStamp(0.741629998857);
    msg.setSource(60889U);
    msg.setSourceEntity(115U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(100U);
    msg.target.assign("ZOIYFWWVCWAEDHYNAUDVANMCKBLENAMYMILVXGKHEPWEXVTCGDRSUANDSNIOFHBIPDLMEJZSOPMBUSHVMQPUFUBLBYDKERCPIKLALZTUWKZQYOCYKXQVBRPJUFYXMWRLZERLTXJVSCZHUPTWXITFWVMHJIPCDQVKEGGJGDWOGNFVHKNSQJPKGTBJTARZXAISYML");
    msg.lat = 0.980588636857;
    msg.lon = 0.764363515394;
    msg.z_units = 10U;
    msg.z = 0.560359901438;
    msg.accuracy = 0.885668934168;

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
    msg.setTimeStamp(0.439433614483);
    msg.setSource(23326U);
    msg.setSourceEntity(73U);
    msg.setDestination(31102U);
    msg.setDestinationEntity(165U);
    msg.name.assign("WXWXRZNXFNABJKIYMCIOMJODQHQBNAVNEKNWUUEHOBZVLYYPMWJAQQXAMAOYBFGGWFHSVGPLSWYYOFZKTMFATSTAARVCLFYZQKSIUOLJQMZHZYGCESDKCZDXOGBOLHMXLZRMLIPVFURXZHHLISTFBFWGTENCOVENPVDVUXPOEFUHGZTINCQKWBYKJMKTSJGPRPUUKQJRCLCUPND");
    msg.lat = 0.682891688349;
    msg.lon = 0.994927162203;
    msg.z = 0.129505448028;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.115630043344);
    msg.setSource(22092U);
    msg.setSourceEntity(164U);
    msg.setDestination(40541U);
    msg.setDestinationEntity(129U);
    msg.name.assign("TFSTIEAMOUFWSGOJOMKKFTQLGQZTXVZGEONJGSGEWUQLDPDVTOCRARNNSYMUTPJXTNBDBR");
    msg.lat = 0.54697450625;
    msg.lon = 0.869914640179;
    msg.z = 0.142862645249;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.30799925057);
    msg.setSource(24486U);
    msg.setSourceEntity(107U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(69U);
    msg.name.assign("KYXATXFQZFKFMZBBBDHGFJVMDXPWMAEAKIYUQTWNPUBEOJJYOQJCZZBDZCAXHVYFOXKPMHQVWZNRKPOVOVKPKLPREVWCMGRJSREAHWYWZCLA");
    msg.lat = 0.202883364216;
    msg.lon = 0.0559219654758;
    msg.z = 0.939263405292;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.969309086475);
    msg.setSource(12226U);
    msg.setSourceEntity(85U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(80U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.3394270113);
    msg.setSource(27083U);
    msg.setSourceEntity(159U);
    msg.setDestination(22303U);
    msg.setDestinationEntity(127U);
    msg.op = 139U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VNJDQDLXVYBGDQGTXUQMTHKDLZMBVZMJYWWHPMKTHWRKZGNDYGEOLTNRNHTXEWFSHTTDYXSSITCUFAUAJGJOJUISWPQJUEJASIUVLZNGKQPIFBIMUOZBCXVVOCUDSOCHPVKCTHZYYEJDQRRQNRFKLIOLEEOPWRROUEVKCNHGWSIMIWHZQDPXDBBGXPNJPUZLAIPOQBMTYXSAXYJIRZBAZRMAKKEVMFXWFFMCCFAQCEYOGLLKBFNSL");
    tmp_msg_0.lat = 0.969977938662;
    tmp_msg_0.lon = 0.902850917257;
    tmp_msg_0.z = 0.617460323819;
    tmp_msg_0.z_units = 137U;
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
    msg.setTimeStamp(0.267343609434);
    msg.setSource(40867U);
    msg.setSourceEntity(208U);
    msg.setDestination(22663U);
    msg.setDestinationEntity(248U);
    msg.op = 71U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DTFQHEOASUEUTNRSRHRXGORKCSAYVMUQBKJVZLLOKMUPMBHXWNTPKCKDYXDWQVSNFBANFCWYZRGMFOGYPFIXQLGCXESEUYWAPGGUQHLHCETPDMCAYRRMYIOKZPULRVQVICNZBBSDNIKDFMJBJPOJINHELYBIAEOTFLBQJTJPWYGZXDVQXWJDAQHTYPWSUVGTWDJALWTSHLRRZZXGM");
    tmp_msg_0.lat = 0.100846430211;
    tmp_msg_0.lon = 0.712355115118;
    tmp_msg_0.z = 0.432546865144;
    tmp_msg_0.z_units = 148U;
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
    msg.setTimeStamp(0.205562071869);
    msg.setSource(13944U);
    msg.setSourceEntity(114U);
    msg.setDestination(19999U);
    msg.setDestinationEntity(103U);
    msg.value = 0.668834072858;
    msg.type = 131U;

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
    msg.setTimeStamp(0.712420198553);
    msg.setSource(59521U);
    msg.setSourceEntity(12U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(202U);
    msg.value = 0.558384648023;
    msg.type = 94U;

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
    msg.setTimeStamp(0.488752083702);
    msg.setSource(37917U);
    msg.setSourceEntity(206U);
    msg.setDestination(52363U);
    msg.setDestinationEntity(117U);
    msg.value = 0.671639217051;
    msg.type = 20U;

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
    msg.setTimeStamp(0.164576013215);
    msg.setSource(55350U);
    msg.setSourceEntity(210U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(24U);
    msg.value = 0.76899433886;

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
    msg.setTimeStamp(0.955013693197);
    msg.setSource(64255U);
    msg.setSourceEntity(82U);
    msg.setDestination(48966U);
    msg.setDestinationEntity(247U);
    msg.value = 0.161167741151;

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
    msg.setTimeStamp(0.194165466098);
    msg.setSource(1106U);
    msg.setSourceEntity(39U);
    msg.setDestination(31041U);
    msg.setDestinationEntity(143U);
    msg.value = 0.795315252677;

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
    msg.setTimeStamp(0.596843313304);
    msg.setSource(21358U);
    msg.setSourceEntity(29U);
    msg.setDestination(64028U);
    msg.setDestinationEntity(120U);
    msg.timestamp_last_service = 0.29382540168;
    msg.time_next_service = 0.625378806969;
    msg.time_motor_next_service = 0.205637435364;
    msg.time_idle_ground = 0.302869565454;
    msg.time_idle_air = 0.0712796663072;
    msg.time_idle_water = 0.919446319409;
    msg.time_idle_underwater = 0.128324360975;
    msg.time_idle_unknown = 0.206041004282;
    msg.time_motor_ground = 0.989284462099;
    msg.time_motor_air = 0.509446191808;
    msg.time_motor_water = 0.668991690665;
    msg.time_motor_underwater = 0.489441416517;
    msg.time_motor_unknown = 0.984286558329;
    msg.rpm_min = -27282;
    msg.rpm_max = -4686;
    msg.depth_max = 0.556089197374;

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
    msg.setTimeStamp(0.868004116808);
    msg.setSource(32937U);
    msg.setSourceEntity(178U);
    msg.setDestination(47839U);
    msg.setDestinationEntity(160U);
    msg.timestamp_last_service = 0.885163350612;
    msg.time_next_service = 0.597579921094;
    msg.time_motor_next_service = 0.746473024036;
    msg.time_idle_ground = 0.191873074934;
    msg.time_idle_air = 0.449153575815;
    msg.time_idle_water = 0.619450715426;
    msg.time_idle_underwater = 0.734170854677;
    msg.time_idle_unknown = 0.0726035814031;
    msg.time_motor_ground = 0.704740455879;
    msg.time_motor_air = 0.981316660671;
    msg.time_motor_water = 0.128619733593;
    msg.time_motor_underwater = 0.325864789107;
    msg.time_motor_unknown = 0.960817989684;
    msg.rpm_min = -22245;
    msg.rpm_max = -7433;
    msg.depth_max = 0.774200098857;

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
    msg.setTimeStamp(0.453427051588);
    msg.setSource(26143U);
    msg.setSourceEntity(209U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(151U);
    msg.timestamp_last_service = 0.492057446403;
    msg.time_next_service = 0.750086642479;
    msg.time_motor_next_service = 0.13632454863;
    msg.time_idle_ground = 0.54753672912;
    msg.time_idle_air = 0.210191971574;
    msg.time_idle_water = 0.215798046603;
    msg.time_idle_underwater = 0.926949338057;
    msg.time_idle_unknown = 0.501873447316;
    msg.time_motor_ground = 0.964168313263;
    msg.time_motor_air = 0.462774278507;
    msg.time_motor_water = 0.767288188354;
    msg.time_motor_underwater = 0.896004463174;
    msg.time_motor_unknown = 0.672656734787;
    msg.rpm_min = -6949;
    msg.rpm_max = 15688;
    msg.depth_max = 0.996725480222;

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
    msg.setTimeStamp(0.373065436645);
    msg.setSource(62846U);
    msg.setSourceEntity(105U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(18U);
    msg.severity = 36U;
    msg.text.assign("IGZYPLNYXENULYCFUMSRIVFNAVQVEPVBPDYW");

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
    msg.setTimeStamp(0.0453803929753);
    msg.setSource(57559U);
    msg.setSourceEntity(163U);
    msg.setDestination(937U);
    msg.setDestinationEntity(57U);
    msg.severity = 199U;
    msg.text.assign("HDSKRKCSJAIXXUYMLIQQXWEPWYGPBDOTSBZQBSHEDLPHPMBZHMMIHIAOVYPGLCPAUIILYWOQIDXWOLFDBZGKVAKOCOZGVZOQFMVVSEYRZNWCKSGNMETYZUYDDXUVIFVKZLRRMRSZFCYJWQMJWPCCRVXNELGJSSOTXGHJAUG");

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
    msg.setTimeStamp(0.477187273568);
    msg.setSource(62980U);
    msg.setSourceEntity(191U);
    msg.setDestination(57291U);
    msg.setDestinationEntity(39U);
    msg.severity = 194U;
    msg.text.assign("MJCPRISVJNKRZTXREEOALNQGYPZUUOYCYKHIFWRQDSXFPFWRLNTDAVOHYAXTJCBVIASJVPNXGBMVJYQMOBWRVZQTLOTTIEILDPYSMDBGJMFGV");

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
    msg.setTimeStamp(0.17480544269);
    msg.setSource(20841U);
    msg.setSourceEntity(198U);
    msg.setDestination(5001U);
    msg.setDestinationEntity(33U);
    msg.channel = -32;
    msg.value = 320447281;
    msg.gain = 186U;

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
    msg.setTimeStamp(0.184025860479);
    msg.setSource(17998U);
    msg.setSourceEntity(247U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(211U);
    msg.channel = -26;
    msg.value = 72779466;
    msg.gain = 8U;

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
    msg.setTimeStamp(0.298825322562);
    msg.setSource(32034U);
    msg.setSourceEntity(55U);
    msg.setDestination(58304U);
    msg.setDestinationEntity(136U);
    msg.channel = -3;
    msg.value = 1437941491;
    msg.gain = 252U;

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
