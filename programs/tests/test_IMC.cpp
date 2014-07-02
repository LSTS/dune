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
    msg.setTimeStamp(0.394930998512);
    msg.setSource(44517U);
    msg.setSourceEntity(209U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(207U);
    msg.state = 149U;
    msg.flags = 101U;
    msg.description.assign("EWUOHYYLTGWRRGMEOGEAKIQSJXKMFNNJIOSGNRGFUALQPVVHKQPMSUARTYBCKQZVKMTMPZGSEQEPZADFVLJFJMUNNWBEJXMWHQIBZUMCKBBWXIJYSCTOBIEPGTUOQRKZIFSFNLNWCADTUUHYAUBNEJOROERVRZDTFGNHSXPVQJCIEDZP");

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
    msg.setTimeStamp(0.992620338575);
    msg.setSource(55133U);
    msg.setSourceEntity(199U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(12U);
    msg.state = 63U;
    msg.flags = 216U;
    msg.description.assign("GMPDAPBZJHNXOQDLRSVLTGNAUUKYJBVCWJO");

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
    msg.setTimeStamp(0.859583325368);
    msg.setSource(26099U);
    msg.setSourceEntity(57U);
    msg.setDestination(21842U);
    msg.setDestinationEntity(191U);
    msg.state = 198U;
    msg.flags = 199U;
    msg.description.assign("VAIBXUIRPCMKFDQCALMQYFLXECXXVJDYXOPFOTOJVHPSIBTGSOVHZVNTCAZXELMVGGQMEITHHUFWKJGRGKPKSTKGQJLXTDLLXUYZUREZWKYBWHPPSGNYZWGKSTGHMRQEFPSNWERCTFAYDDWZOJBFEIAZDRZHBRTMVFSIURJVXOEYJMCZDKAFVMYFNIBNQWADWLQLUGMUISALOWUCRUDWZASOJBDNKPYQB");

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
    msg.setTimeStamp(0.28272025505);
    msg.setSource(48740U);
    msg.setSourceEntity(245U);
    msg.setDestination(34455U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.320874705875);
    msg.setSource(49181U);
    msg.setSourceEntity(114U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.440200496361);
    msg.setSource(31985U);
    msg.setSourceEntity(244U);
    msg.setDestination(38061U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.711576217437);
    msg.setSource(24098U);
    msg.setSourceEntity(101U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(173U);
    msg.id = 86U;
    msg.label.assign("RGGSRMGWGTDMIPLISQWBVYUMKPFGBLZUJDUZTUDHDLAZPJTWROZAQRQYKBSFESKUHOMZCODCNPBSEQFTBXUIVRXSCGZRFDKWAMHTOWSIVGSHGAWFFVZTPLQPJEUILNUXQNZYCIIKYKTSNVJJDXDXGRPFBXKHTACYOCVHLIMZKKPWOLJNHVDAKQEMHOXTCMHYMJLRNYXIGVUEDBUNA");
    msg.component.assign("JDCWGSPYOJNDRLEWGDFPIIKTZWYIXVZTTOFOBUWKROMJMHDUBYAFUPQHJBSAJJIZJREYKGFKOEWCKROBUEVSXRIXARYVVRHNERJATQWMMGEDZMGGQQHOKDGXUHFXCLJQWSNNMSANIVMZIESAYVZGRXLPKISKM");
    msg.act_time = 16757U;
    msg.deact_time = 4405U;

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
    msg.setTimeStamp(0.166275210907);
    msg.setSource(4662U);
    msg.setSourceEntity(19U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(170U);
    msg.id = 6U;
    msg.label.assign("VNZASZOVGKKDSWAGRJFSQVCIGYZYNTYXFHTTXEFDEEATAQNPIWFLSMASSPKSVQBNIKEHJJMOTMMWCQZCIHDOOEWKVFWKUUUGDPRLBJDXYVHXTZQXQRJXMNNMYGEBDRZO");
    msg.component.assign("OCGTGNXXGEQCIDBZAQRRHFFRHUMODACQPANSSBPEWPDUNUFGELBEVZRVHAHMTDGCUHOBOUISVNNHKPSWYFBKZBHTKIJDWTCZTJVCUJKVDBSKCQCAXOVKGMXENZDAFLVOMAFQFNJPNYBBRQXSTIKEFHGOCQPMTKQPZJLMDXEYDIUWR");
    msg.act_time = 17270U;
    msg.deact_time = 1160U;

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
    msg.setTimeStamp(0.149239862836);
    msg.setSource(14856U);
    msg.setSourceEntity(115U);
    msg.setDestination(28716U);
    msg.setDestinationEntity(80U);
    msg.id = 11U;
    msg.label.assign("PNRUUEDUNKEJLQCJNFSIKGIHMOJVEGBXYMDDOZGLDZCZOTKLKOMZFYVXPUDWCDMIRQZGQBAIWPFXPXRHKADQZFTMNWEWRRGEHWJSVBDLMBQZPKNISTXJQEYIARXOSFEFFEPUYJCJCHQPTNARHBTTEQFOGFIULAKNNHFGSSLWGHCGMZHNIWKAQCTTMIRMPROLCCWZAUVSXWUHOXCJXVYBKBVVLTSJAEDYOLJSVZMLB");
    msg.component.assign("SSKNKNYZMGPTCNGHCUVJPPBSWCDO");
    msg.act_time = 1423U;
    msg.deact_time = 30403U;

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
    msg.setTimeStamp(0.142235139753);
    msg.setSource(25639U);
    msg.setSourceEntity(196U);
    msg.setDestination(39843U);
    msg.setDestinationEntity(111U);
    msg.id = 89U;

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
    msg.setTimeStamp(0.202017406314);
    msg.setSource(3370U);
    msg.setSourceEntity(182U);
    msg.setDestination(38699U);
    msg.setDestinationEntity(132U);
    msg.id = 73U;

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
    msg.setTimeStamp(0.264091056876);
    msg.setSource(22328U);
    msg.setSourceEntity(27U);
    msg.setDestination(42606U);
    msg.setDestinationEntity(76U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.904763715015);
    msg.setSource(14864U);
    msg.setSourceEntity(145U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(250U);
    msg.op = 230U;
    msg.list.assign("ISWUWRIHJRXKUXZWSOTECEOUZVUVQJWYJUDYYKJCRIQKBQLLCCVUMVVBMHLPASIMGCPPQNWTHSOSJGOXG");

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
    msg.setTimeStamp(0.0590594945911);
    msg.setSource(60231U);
    msg.setSourceEntity(57U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(240U);
    msg.op = 137U;
    msg.list.assign("SNRISVDDWPPRENKQDJIZAQAGSJJVRYEFEADMRTSWSQZKJJWNYAMMGHPZRCTAYZLXTI");

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
    msg.setTimeStamp(0.446403230102);
    msg.setSource(13165U);
    msg.setSourceEntity(63U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(110U);
    msg.op = 123U;
    msg.list.assign("YKJCLCOARCWESQFCGQPLFKSAHHPFPVGIMJEUWGGXLURWTINTMFQKBMKNRFSMHBFLDNKTYSXNWNQEZYLGFWOMOUDKRFYEHCFOUPLCJJXZAKVKTPWAIYYTULJBTDRNSJJMETBEZCBYXGPHDZPHCBMVQKCQOXGXARSJCZEENJYEQMAIIRADVBOSOAIGUJVVFVNIORHAEVRLXZDZZDUSHNQTUWWTUTHDDXZYNXBVSIKGUSDOXQL");

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
    msg.setTimeStamp(0.0407581414268);
    msg.setSource(20279U);
    msg.setSourceEntity(81U);
    msg.setDestination(24121U);
    msg.setDestinationEntity(189U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.230509664849);
    msg.setSource(52506U);
    msg.setSourceEntity(243U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(177U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.680237627841);
    msg.setSource(32976U);
    msg.setSourceEntity(174U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(54U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.979623640557);
    msg.setSource(57831U);
    msg.setSourceEntity(141U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(174U);
    msg.value = 194U;

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
    msg.setTimeStamp(0.68727752313);
    msg.setSource(21965U);
    msg.setSourceEntity(210U);
    msg.setDestination(58791U);
    msg.setDestinationEntity(75U);
    msg.value = 89U;

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
    msg.setTimeStamp(0.830085939333);
    msg.setSource(27303U);
    msg.setSourceEntity(88U);
    msg.setDestination(35837U);
    msg.setDestinationEntity(120U);
    msg.value = 99U;

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
    msg.setTimeStamp(0.0704490734887);
    msg.setSource(64534U);
    msg.setSourceEntity(103U);
    msg.setDestination(38283U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("RMJYPZBPVQWBHKQSOFEKNLTPICWFMHXZPLYTIWC");
    msg.message_id = 20624U;

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
    msg.setTimeStamp(0.84003206931);
    msg.setSource(37004U);
    msg.setSourceEntity(28U);
    msg.setDestination(3477U);
    msg.setDestinationEntity(140U);
    msg.consumer.assign("VPMHHKSRBTOLFYOUCPIFDRSUPMPFPQQNTZXKXXDCHA");
    msg.message_id = 20917U;

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
    msg.setTimeStamp(0.829317774809);
    msg.setSource(13247U);
    msg.setSourceEntity(32U);
    msg.setDestination(20761U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("NMZAFYTMPIGBUDVZSKEHQXWZVWILMYWDJLURTSXUEJJZMKHJNFLSLJXCUSQGKDIBSLXESQVQCPPFRVJQMMCTZHVZJYOKCGECIPEXJUCGYIYEVGATXYRYKPTTQBBNOJX");
    msg.message_id = 47625U;

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
    msg.setTimeStamp(0.623474322637);
    msg.setSource(24621U);
    msg.setSourceEntity(73U);
    msg.setDestination(24085U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.877353809871);
    msg.setSource(58863U);
    msg.setSourceEntity(90U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.345838858205);
    msg.setSource(65385U);
    msg.setSourceEntity(162U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.167736019949);
    msg.setSource(47856U);
    msg.setSourceEntity(145U);
    msg.setDestination(49366U);
    msg.setDestinationEntity(62U);
    msg.section.assign("MDCLLALNTIQKGJBJLSOPJEGUXGTZEKESXWPLXGJNWJNNPXXDJQWBOWIBRXPFTDAWDRNXMPWQISSFVZHYLOPENTXVWYUJNPZCURHLDEMAVJMRUDZGBKJYIATTGCIOAOBCAUFVMRADTURZFIHPNDBOYHGWSCKIESCEZCHFEUNRQHIGYAN");
    msg.param.assign("ZFWPNRGBIIBDZQYAFCYOKJDEYDPKIQWGT");
    msg.value.assign("GRKMGISAGKFHTNKNBVQRGAABTUBSYZSZLQSCJGAEYQALOCADZAOYJFNRPLCXRJADBUWWZFIBLXSIDCFWSUNGZYDKOOWXHJFBVHSIEDJYCNWAFUUGIXQQWYHOESLTNQLOJMTTNVMRNZCMPMDMCPKTVHKBCQXUMRXHVYUSPXFIXKKBEQTP");

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
    msg.setTimeStamp(0.0089963794045);
    msg.setSource(8701U);
    msg.setSourceEntity(127U);
    msg.setDestination(24245U);
    msg.setDestinationEntity(231U);
    msg.section.assign("HDPCZHCBGKPV");
    msg.param.assign("AULKEIDNANSJTCSDXVVTJGDSSOSOXXJXMRZTQBFRNKQBZERATKYPZLJYWGYUXDYPWXBISEVFUHZQVIOUHGYLNFKOWHIHBMQFDEJOIKYMFXCLMULHOVFHWLGVBBIPLDNGSANSACPXGBQPTQTMDQAM");
    msg.value.assign("EDPOLYPCLUTS");

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
    msg.setTimeStamp(0.414311457003);
    msg.setSource(59538U);
    msg.setSourceEntity(43U);
    msg.setDestination(52429U);
    msg.setDestinationEntity(93U);
    msg.section.assign("VGKXTTLDJRRXWRRDQSKIMKFNGPYQWMUIVPPWWCZDWYYYKJFLNHERGZEJCLJNQXYMDQAMGWJPDTJKLASCLQTJTZOIVXZNWGATVHWFCRBUPBAZWUVFHOBINHCHGFNAAUYRHEIYSRGOFEBDZJQKGTHSWVDLPIMTVUOYKSEHAO");
    msg.param.assign("HMSYLZESXDRQTBKVJLQEUVFCNNWDYESLBELCKPEPXIPTTXCJKVQKUAKZQSGQBYRWJEWGGGKTGUYJCACNKZFEJOUBZYHSMGVVIQXWMOKAAFZIMEPOTSOTFFUNBLQTIXFMOIWSRLHXIXFDIAYYTVKIZHGWEOHLGHHDQYRBYCHAJMCUPXQPJSOWJUJONAJHWZRDIUBINKZPRXRBDDAUDLTZMDCSNPBGVNWCOLTMVMVWBSYPLFRRNGAPQCVRAHNDE");
    msg.value.assign("RYTHCFARBFJXXSBLHXZGRNYRGDTIICKAHCJCUHHMUHNWIFZDZBJPLKOMQHLERUFGSKQXTDAPDAMHEIYMYSRMNPIXNEROGAZLUOPDLLHVPJISLJWKFUMSTVUDYDKQWKXAYESEXTTWZGEYMGEMCFBOIOQWPAFNNKPMGINWDDPQENCJTVSOBYJLGEJLUQNOZZGNSFQCYQAKXRWBJVPUSVXOLMZEFJAOHZFBBPDWXWBUTVUCCIVCTKVV");

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
    msg.setTimeStamp(0.793280333727);
    msg.setSource(4508U);
    msg.setSourceEntity(39U);
    msg.setDestination(21076U);
    msg.setDestinationEntity(165U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.453459731404);
    msg.setSource(58066U);
    msg.setSourceEntity(200U);
    msg.setDestination(63280U);
    msg.setDestinationEntity(22U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.648719364262);
    msg.setSource(6991U);
    msg.setSourceEntity(141U);
    msg.setDestination(6880U);
    msg.setDestinationEntity(84U);
    msg.op = 159U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("SNNKVGDFPUSTLNWJLETLATRVHCATN");
    tmp_msg_0.param.assign("XUXHGRYMRXNZCLAOMBVTNPMTGYBILHSTFRQUUEZMWAKIQHKEWVAIQH");
    tmp_msg_0.value.assign("RMGUTYCNBCQINDHUJXCPUMLDFNVVFWESXMXWZEAGEZWJYTXMNITJYQLLAHZAXKJNFHUPWAPGNWQMYQTRFQWFPEXIGZFMKOXFKAYNSABUBVQTMKFRNRWSEVJJ");
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
    msg.setTimeStamp(0.223937869471);
    msg.setSource(28795U);
    msg.setSourceEntity(126U);
    msg.setDestination(37946U);
    msg.setDestinationEntity(136U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.659162197878);
    msg.setSource(24992U);
    msg.setSourceEntity(167U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(52U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.412605662455);
    msg.setSource(3119U);
    msg.setSourceEntity(123U);
    msg.setDestination(53456U);
    msg.setDestinationEntity(168U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.143267650335);
    msg.setSource(60546U);
    msg.setSourceEntity(134U);
    msg.setDestination(39238U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 3U;
    msg.step_number = 143U;
    msg.step.assign("DBAUMHFWTHARWISDKLGBKDSKTOZXACXSURQVJMFBARFBPYAVIYHYUXFONPAZTCXZPXNEFXCVZRILFOGZJDQGQQYZEDWLRIEKGMPUNUDLZSBTDMORERCFPDNBYMLUMJPIVNKTENCFHQQQCIMVTHDGQEETNMVHSCXSEKQTINPWMOHGHUIJBJTHJKVBWGJKTZPCFL");
    msg.flags = 127U;

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
    msg.setTimeStamp(0.522277971041);
    msg.setSource(33247U);
    msg.setSourceEntity(160U);
    msg.setDestination(33602U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 245U;
    msg.step_number = 203U;
    msg.step.assign("QGKAHDWKPRWAHXEHCGAXJGZLICCZXAYCHUTIWFPEKNDDMBGSTUWNWXJYBNTVDZOIIVJWSIVSBETEOPRQJRMINKEQFQDJQTVZYYQIFNMALNTWWYESLPYZHDBRHBJHECYPFZAKARJTTBQZWDSLGNXLCVFLGULXFSCGYJN");
    msg.flags = 79U;

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
    msg.setTimeStamp(0.588272422139);
    msg.setSource(33286U);
    msg.setSourceEntity(128U);
    msg.setDestination(59249U);
    msg.setDestinationEntity(76U);
    msg.total_steps = 67U;
    msg.step_number = 39U;
    msg.step.assign("LVYPRTVSLTTROBBPNRENEJGZJEISLNXVQIVXWMYBSAQTEOAAHCUNRHCKFQECVSGWBGDMIRRDXFWSXBOOHYQOEKZRVP");
    msg.flags = 198U;

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
    msg.setTimeStamp(0.367958798078);
    msg.setSource(8208U);
    msg.setSourceEntity(88U);
    msg.setDestination(314U);
    msg.setDestinationEntity(45U);
    msg.state = 145U;
    msg.error.assign("XNOSQJHJHYOVOYINYGJKUAILFRJMFSQBQHXWGSHNTNOSTNQHOMUVVRVTZXJYVUVRIRFWFVLLUDKGDQFBXPOINTEXUWACPGFNAYQJZAIIJELDEQXAAZV");

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
    msg.setTimeStamp(0.50009772466);
    msg.setSource(49602U);
    msg.setSourceEntity(181U);
    msg.setDestination(11191U);
    msg.setDestinationEntity(235U);
    msg.state = 170U;
    msg.error.assign("WZTXNSZEDGSTIHDGRRRIPEAELPCFYUSQDZALXAYUISGKELMWXZRJXUVBWTTMFIUNYDNPSJUWKOMFFGQRSJLOCHADRMYBSIAXKONQEUOFBBTRAPEZIYCGLMLCNDVKVCTFTOWWVKYYTEMQHADACPURYOKBJWUSCXAWLFRLJNMPJPSGBZQQBUW");

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
    msg.setTimeStamp(0.514140912274);
    msg.setSource(44662U);
    msg.setSourceEntity(0U);
    msg.setDestination(45119U);
    msg.setDestinationEntity(121U);
    msg.state = 24U;
    msg.error.assign("SJIMAUDODGMFKCOMEQAVEDWYATWPHDKWKUAUJIUKEOAMVKPIHDITFGOCNSXMWXBDGZSZGWGEMFLIQYJPXVFRLNPLJRISYJMRZVTQBRZHDYVPKOLOMJCHZHGVNEZBRDXUOVOGKTKLFWYCTQXRQFHINZIFZPSAWVVUTRP");

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
    msg.setTimeStamp(0.632542156706);
    msg.setSource(35579U);
    msg.setSourceEntity(238U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.815769031376);
    msg.setSource(17612U);
    msg.setSourceEntity(110U);
    msg.setDestination(57740U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.964042537441);
    msg.setSource(43027U);
    msg.setSourceEntity(231U);
    msg.setDestination(61611U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.159146761681);
    msg.setSource(39773U);
    msg.setSourceEntity(229U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(14U);
    msg.op = 133U;
    msg.speed_min = 0.539478338991;
    msg.speed_max = 0.595482258031;
    msg.long_accel = 0.855970331039;
    msg.alt_max_msl = 0.346618971351;
    msg.dive_fraction_max = 0.0163887994599;
    msg.climb_fraction_max = 0.443666667733;
    msg.bank_max = 0.424974889284;
    msg.p_max = 0.605868790685;
    msg.pitch_min = 0.0117151185092;
    msg.pitch_max = 0.598179724745;
    msg.q_max = 0.45368522521;
    msg.g_min = 0.670348788578;
    msg.g_max = 0.651030660646;
    msg.g_lat_max = 0.640810065002;
    msg.rpm_min = 0.00152266363545;
    msg.rpm_max = 0.516323114232;
    msg.rpm_rate_max = 0.0959911533304;

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
    msg.setTimeStamp(0.750083514935);
    msg.setSource(60825U);
    msg.setSourceEntity(189U);
    msg.setDestination(47592U);
    msg.setDestinationEntity(123U);
    msg.op = 175U;
    msg.speed_min = 0.271607290235;
    msg.speed_max = 0.968798115376;
    msg.long_accel = 0.450095575557;
    msg.alt_max_msl = 0.994594989251;
    msg.dive_fraction_max = 0.392960371154;
    msg.climb_fraction_max = 0.180134498905;
    msg.bank_max = 0.865161559142;
    msg.p_max = 0.240080038056;
    msg.pitch_min = 0.184231623097;
    msg.pitch_max = 0.392295466149;
    msg.q_max = 0.488999398191;
    msg.g_min = 0.422724572363;
    msg.g_max = 0.641209039298;
    msg.g_lat_max = 0.951979119789;
    msg.rpm_min = 0.0995547776184;
    msg.rpm_max = 0.169824371779;
    msg.rpm_rate_max = 0.726668687309;

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
    msg.setTimeStamp(0.177248414048);
    msg.setSource(1211U);
    msg.setSourceEntity(137U);
    msg.setDestination(15567U);
    msg.setDestinationEntity(106U);
    msg.op = 192U;
    msg.speed_min = 0.214858104831;
    msg.speed_max = 0.287768438885;
    msg.long_accel = 0.160799864938;
    msg.alt_max_msl = 0.00839264705633;
    msg.dive_fraction_max = 0.720325877222;
    msg.climb_fraction_max = 0.14738019839;
    msg.bank_max = 0.368997416197;
    msg.p_max = 0.518304787437;
    msg.pitch_min = 0.341749888157;
    msg.pitch_max = 0.618712461195;
    msg.q_max = 0.633957339161;
    msg.g_min = 0.930243696759;
    msg.g_max = 0.363637187458;
    msg.g_lat_max = 0.496837704418;
    msg.rpm_min = 0.509183407446;
    msg.rpm_max = 0.204115528453;
    msg.rpm_rate_max = 0.713794082002;

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
    msg.setTimeStamp(0.973717543181);
    msg.setSource(48462U);
    msg.setSourceEntity(64U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.925344725777);
    msg.setSource(7273U);
    msg.setSourceEntity(19U);
    msg.setDestination(44300U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.90822794679);
    msg.setSource(44248U);
    msg.setSourceEntity(123U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.568411083147);
    msg.setSource(29748U);
    msg.setSourceEntity(252U);
    msg.setDestination(57992U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.0432404786513;
    msg.lon = 0.759023961226;
    msg.height = 0.128711893478;
    msg.x = 0.116694794021;
    msg.y = 0.935438591355;
    msg.z = 0.794426905038;
    msg.phi = 0.0227391749471;
    msg.theta = 0.543981325154;
    msg.psi = 0.577578362381;
    msg.u = 0.596517204347;
    msg.v = 0.0137350394047;
    msg.w = 0.966623259017;
    msg.p = 0.434404465737;
    msg.q = 0.838334726646;
    msg.r = 0.563712501394;
    msg.svx = 0.487318765454;
    msg.svy = 0.517551954886;
    msg.svz = 0.980871044713;

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
    msg.setTimeStamp(0.0828534739451);
    msg.setSource(53295U);
    msg.setSourceEntity(166U);
    msg.setDestination(20138U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.629329634322;
    msg.lon = 0.735933616943;
    msg.height = 0.259887134416;
    msg.x = 0.0310528837364;
    msg.y = 0.978632766038;
    msg.z = 0.899503374478;
    msg.phi = 0.147600590583;
    msg.theta = 0.997079759835;
    msg.psi = 0.427011547371;
    msg.u = 0.517083933456;
    msg.v = 0.47161054409;
    msg.w = 0.157958214165;
    msg.p = 0.298619580986;
    msg.q = 0.0318367683464;
    msg.r = 0.566152693627;
    msg.svx = 0.918030476539;
    msg.svy = 0.553583093259;
    msg.svz = 0.684195941809;

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
    msg.setTimeStamp(0.36223123453);
    msg.setSource(8129U);
    msg.setSourceEntity(142U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.501746560939;
    msg.lon = 0.0437306892705;
    msg.height = 0.353530064301;
    msg.x = 0.57216230324;
    msg.y = 0.467089360614;
    msg.z = 0.35250096019;
    msg.phi = 0.504883224719;
    msg.theta = 0.0593499457682;
    msg.psi = 0.649121962716;
    msg.u = 0.230035380637;
    msg.v = 0.144789311578;
    msg.w = 0.49842195801;
    msg.p = 0.0850985610057;
    msg.q = 0.30773225868;
    msg.r = 0.184470408346;
    msg.svx = 0.35145784221;
    msg.svy = 0.92431181729;
    msg.svz = 0.175355579017;

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
    msg.setTimeStamp(0.405306502054);
    msg.setSource(39146U);
    msg.setSourceEntity(22U);
    msg.setDestination(28147U);
    msg.setDestinationEntity(97U);
    msg.op = 45U;
    msg.entities.assign("KZFPDGVZSJWGPVCZOJJKBCGX");

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
    msg.setTimeStamp(0.790087579736);
    msg.setSource(34056U);
    msg.setSourceEntity(77U);
    msg.setDestination(23254U);
    msg.setDestinationEntity(72U);
    msg.op = 152U;
    msg.entities.assign("MOAWGPMKJFGBGFJVQIJUXIDLXOOVAOTTDUMHJPLVQNHKHEQDEKKJZZSLQYXFCWYYFEOGSOANVBXMHRHMLGXMBXRNBRTUUQAAXRIWBLDSDOVCIPCNUWGZGWZIGRXOZHCJPUNBSDCVMHSLHGUSXZFGPKRHWWTXTYMIJEPPYEIMQTLCECLMWSVJNYFNYFOKAWQKRRKQAKIUAYNVEUYITPYLTFDORQSBNDEVCNAZCFEJAKBS");

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
    msg.setTimeStamp(0.652558784347);
    msg.setSource(574U);
    msg.setSourceEntity(136U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(237U);
    msg.op = 50U;
    msg.entities.assign("EHMYNGTQBAJLKVEQBWBEYROFASRLKISLAZDXISFRIZKRNQCIXNPSUFTSYVRGCUAIFDGVOLYQMDJGGTRUNWPVFEXPPFRHPEVHLWCQLXABYURVJJWPGNHTKWMCEPQJBXNJDHDEIRREPQXYAIVNWV");

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
    msg.setTimeStamp(0.99890127839);
    msg.setSource(18340U);
    msg.setSourceEntity(184U);
    msg.setDestination(7692U);
    msg.setDestinationEntity(125U);
    msg.type = 145U;
    msg.speed = 38605U;
    const char tmp_msg_0[] = {-76, 45, 15, 122, 20, -114, 118, -115, -4, 90, 69, -39, 74, -88, -46, -41, -79, -64, -95, 103, 5, -34, -54, -95, 11, -122, 44, 108, -3, -26, -74, -56, -62, 69, 46, 2, -44, -26, -81, 40, 46, -17, -42, -125, 25, -60, 123, 27, 78, -124, 4, -48, 64, -109, -104, -6, 58, -44, 4, -10, -109, 28, 11, 99, 82, -107, 98, -111, -91, -96, -106, 74, 56, -44, 10, -35, 90, 124, -85, 44, -49, -57, -35, -33, -87, -55, 85, 2, 94, -49, 104, 83, -109, 15, -65, 37, -44, 98, -1, -88, 120, -123, 102, 91, -32, 119, -38, 123, 30, 69, -49, 1, 44, -128, -13, -104, 119, -31, 35, 106, 112, 35, -26, -93, 60, -17, -91, -61, 79, 101, -115, -127, -85, 82, 0, -53, -115, 32, -33, -116, 113, 34, 10, 63, -23, -78, 99, -106};
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
    msg.setTimeStamp(0.348669280905);
    msg.setSource(43310U);
    msg.setSourceEntity(109U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(19U);
    msg.type = 183U;
    msg.speed = 8321U;
    const char tmp_msg_0[] = {-16, 19, -62, 109, 43, 85, 107, 15, 58, 65, -65, -116, 48, -31, 115, -115, -109, -87, -37, -104, 49, 82, 21, 86, 37, 80, 9, 99, -10, -74, 70, 22, -39, -52, 69, 20, -119, 3, 22, -37, 75, -99, 89, -94, -71, 9, -47, -33, 28, -102, 45, -105, 93, 46, 51, 48, 110, 110, 92, -44, -126, 47, -88, 46, 41, -118, 25, 59, -108, 5, -10, 19, -33, 33, 17, 72, 44, -57, -121, 75, -62, -105, -36, 22, -29, 23, 109, -110, -11, -61, 106, 79, -56, 36, 81, 53, 32, -67, 111, -100, -67, -13, -20, -113, -72, 11, -88, -123, -7, 16, 89, 49, 5, -79, 58, -8, 110, -32, -56, 33, 120, -53, 14, 7, 11, 108, 3, 54, -3, -73, 21, -123, 18, 36, 6, -83, 37, -111, -94, 83, 99, 71, -2, 71, 78, 47, -110, -43, 32, -58, -97, -73, 40, -41, 4, -28, 55, 95, -113, 30, 51, 123, -36, -59, 36, -121, -51, -58, 72, 124, 32, -58, 50, -26, -43, -63, 9, -50, -124, 108, -1, 3, -88, -27, -98, 27, 30, 121, -82, 0, 74, 54, 20, -107, -48, 8, 4, 8, -54, -82, -105, 14, -14, 60, 96, -77, 8, -16, 117, -25, -116, -12, -20, -72, 71, 17};
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
    msg.setTimeStamp(0.252699706371);
    msg.setSource(53932U);
    msg.setSourceEntity(32U);
    msg.setDestination(45557U);
    msg.setDestinationEntity(170U);
    msg.type = 251U;
    msg.speed = 37668U;
    const char tmp_msg_0[] = {-84, 15, -77, -84, 91, 34, 16, -116, -118, -50, -113, -114, -24, 46, -3, 23, 70, 113, -35, -9, 62, 70, -49, 28, 8, 115, 70, 38, -56, 30, 9, 95, 103, -25, 40, -81, -43, 75, 124, -33, -117, -83, -46, 38, -44, -39, 27, -51, -72, 65, 44, -88, -7, 39, -74, -21, -79, -100, -40, -98, 23, 25, -24, 113, -75, -75, 93, 72, -91, 113, -73, 38, 121, 57, 70, 107, -113, 47, 121, -6, -56, -17, -61, -24, 35, -39, 12, -23, -58, -40, 97, 12, -94, 55, 10, -115, -38, -76, -40, -38, -43, 125, 17, 91, -10, 68, -79, -38, 97, -49};
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
    msg.setTimeStamp(0.595098197003);
    msg.setSource(52759U);
    msg.setSourceEntity(119U);
    msg.setDestination(6846U);
    msg.setDestinationEntity(120U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.595246404492;
    msg.bank2p_pgain = 0.552365533795;

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
    msg.setTimeStamp(0.26859081078);
    msg.setSource(49883U);
    msg.setSourceEntity(147U);
    msg.setDestination(5523U);
    msg.setDestinationEntity(227U);
    msg.op = 192U;
    msg.tas2acc_pgain = 0.193313443402;
    msg.bank2p_pgain = 0.680189930775;

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
    msg.setTimeStamp(0.572085976864);
    msg.setSource(57025U);
    msg.setSourceEntity(66U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(214U);
    msg.op = 186U;
    msg.tas2acc_pgain = 0.88107418102;
    msg.bank2p_pgain = 0.875296990218;

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
    msg.setTimeStamp(0.0981239896991);
    msg.setSource(11969U);
    msg.setSourceEntity(104U);
    msg.setDestination(30736U);
    msg.setDestinationEntity(12U);
    msg.available = 3961416445U;
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
    msg.setTimeStamp(0.444251870316);
    msg.setSource(14561U);
    msg.setSourceEntity(124U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(198U);
    msg.available = 779635109U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.924833916028);
    msg.setSource(19602U);
    msg.setSourceEntity(181U);
    msg.setDestination(28279U);
    msg.setDestinationEntity(114U);
    msg.available = 717199464U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.742441450896);
    msg.setSource(58713U);
    msg.setSourceEntity(109U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(254U);
    msg.op = 211U;
    msg.snapshot.assign("WKWPSITEROBHMVRLMEJXSVVFMEIJADKECYRYHNJXQBSZUROWQDGIQPPVXBUGHSTCSTKHOXQUDJQLRKBXHPHTPDUYTCSWO");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("PMWVIQINXECSLRSIHKKMFATMLFGOEOLPWGBBJOUHQEFOVRIHAGNPKPAWNYJA");
    tmp_msg_0.text.assign("WNPXSJNIJZPAEVUXURGKISLHOSJYTIUBVYKFDVNHVTHQQGJCMCRHGFMACEZCUPQBKLUZECLPRIZCNNBTZQDBDWLDYCAADKQGUJEKDSWHOZMIWGEKBLFEHPIQNWMVRGGMOGMBRYZFOQNRFAZJPJDUXHBLVTTODIOW");
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
    msg.setTimeStamp(0.267008221741);
    msg.setSource(701U);
    msg.setSourceEntity(173U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(208U);
    msg.op = 246U;
    msg.snapshot.assign("VOQKWPFFJIFJBRZTXCKLQXCHRDYQLMAXESXBAQQEAZZVCRNBNQISORYTIEIKPWOEGIAVNVOGZAMSWJLNCJIBGQWHNPBKCYYJPMDDYDBHDRAYCRUQEMLNKNMXHUKPDTUPQMXUDGGNKKPLYFZTROEWZVSAIQADGHPJVNGBSXVHYYGREFJLWRMSPEWDSISRCCJWFLSWYMF");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 59605U;
    tmp_msg_0.value = 24U;
    tmp_msg_0.error.assign("TKISGJCNZGQQTFEDPFARYKIDVOIOGMLMXWOPZWNKABRMBLNDOSBJVDTJBKQURMTZPABITBURGHE");
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
    msg.setTimeStamp(0.893113732365);
    msg.setSource(15375U);
    msg.setSourceEntity(18U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(239U);
    msg.op = 227U;
    msg.snapshot.assign("SDDSKFDYEVEEXMKHRMZDFQLPUMXSAUAACOBSPXHBQNYCIXRYSFVYLLCWQARSNPBPXRWRGRYPQIZHCTXJDGMOMGWGNKJMOUB");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 41911U;
    tmp_msg_0.status = 75U;
    tmp_msg_0.text.assign("PIYXXNNULIUEPEXPTCYTAKTLYZVANJRGJIQLHKPLHUQMYKGOPZCZHVFJRIJFNZBPDYHXFFXNEECYVEYZJFKURYUNTVSSDKVMGBWWNGQGCAQDWXHAGAQWAMFEZUECTMMITXEMNWKRSWIZCRZVKHPQPDTRLXOBAGUOUIVQRMOVDAMSPJBFWGBSJCFTBRBBZMMYEJJWDBROCQSTNSOZFACHLGHS");
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
    msg.setTimeStamp(0.166549832071);
    msg.setSource(61784U);
    msg.setSourceEntity(222U);
    msg.setDestination(35648U);
    msg.setDestinationEntity(133U);
    msg.op = 95U;
    msg.name.assign("VKIBFUPZFUAKFZWKMGURMJVDQHDLXTZDEKNEABGLGWLWAZQLGPJIIZXPHEYEARWPYYJNORRKCTVKCSDEVRUNLPGYEPOGWTYJJAWOHNJOFBQUFXSYOWCQUYWAZOQVCFHNSHHZGAGGPMEXIFYMVPNDXTJTRXASDYXTDEAUQWOKSQQBYRFVIOMSNMCARSUIBLTJHIBBGMHZCKCKRVZTUNLUJWVSLZLRHESKPEHMQDXPVBOTLMSNTXFIQNCJBXDI");

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
    msg.setTimeStamp(0.059901960792);
    msg.setSource(25746U);
    msg.setSourceEntity(115U);
    msg.setDestination(28901U);
    msg.setDestinationEntity(47U);
    msg.op = 229U;
    msg.name.assign("GFDEPAVVSERZUKCBTLHHZBAXRWENRBYXNOHLEWUYPBGYRUWQYFOEELSXHMXDCYITBASOOJWRXFTBBITHDPXE");

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
    msg.setTimeStamp(0.466569999422);
    msg.setSource(8769U);
    msg.setSourceEntity(148U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(55U);
    msg.op = 180U;
    msg.name.assign("RCDNGZNLQVHEHUNPFIHANXBQEQFAPTILNXWIPBPLDLOPJJKKXCGGWNCWXQMFJATMCYQKTLNLOHYDCCVSJOZOUVLZMNPMIQKRBSABXRKEXEDYXRWSAGIYOCJDJUATGHTTTCQDRVHWMPABCRZXASBZHWGKSBVKUUQRUSYZMRJSQ");

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
    msg.setTimeStamp(0.566594238593);
    msg.setSource(34905U);
    msg.setSourceEntity(30U);
    msg.setDestination(28444U);
    msg.setDestinationEntity(105U);
    msg.type = 121U;
    msg.htime = 0.95145610468;
    msg.context.assign("AIOWVAMDGZVTCYEXUQROTJYFZXYBSARMVNFEJMQFIZPZPAFMYPBPXFDUWKSIIWYCZROYEGCSPGVDCSNFXNSVUXUWGCVHWLZFBPRLFTEQHPJWFBOABDUSLANNLTOEONRCIOHIKADLMSKUGMIHQRWSZDYPYKLMIKQXEDPKYRCBOPWXVTTXLCRJNEWBUITQQKHWUVQNRRVMBTCQTSOEZDUJSNFIHYZBMVHCGJGJXKTAAKKAOGZJJHBMLXHJQLEHED");
    msg.text.assign("QIBEPIEISNCMEUNXQQICUXSONJJQBJUQEXZDLTVYXWVWBVGZJZUENXKDSQQXGCICAVISLMOGACYKHKHNOWBIHPNAAUOLPNFOITFGJLTPGWRKQNSEIMTCMDRBRKDKZOTCZBZYZXYVLBHSAZRTAAMWTAMJOOPSFKFERXLWSEWOCWUCHDKVIBRUBUPDVKJUZYFFDHE");

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
    msg.setTimeStamp(0.129692963511);
    msg.setSource(11437U);
    msg.setSourceEntity(233U);
    msg.setDestination(57060U);
    msg.setDestinationEntity(95U);
    msg.type = 206U;
    msg.htime = 0.1119897355;
    msg.context.assign("UMPBDDAAIUEMIVHCGNAJWMFZNDVPLZOPYNCGLPFQAZZBKFQTCWSGCPHUJQEQEBYFTLLIYWBXJSZPHHV");
    msg.text.assign("MGBLVKUPPGHZEJULOKEXCANITFWSTWQPRUMIWSCNOCAIAEHBTQXPIOOBANAQCDETLDVVWAKGQPJFSZYBLZJATSJRQFRPSLTFAUKADBIRZGYXMPCZYZQRXQHVMHXYBPHMEYZNCESKRDNRHUEDWBKSYUEJXGSGWBDPNKXSRQVLNUZXZYVKQPITFHUDGNDHL");

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
    msg.setTimeStamp(0.0722138221907);
    msg.setSource(39820U);
    msg.setSourceEntity(39U);
    msg.setDestination(1281U);
    msg.setDestinationEntity(99U);
    msg.type = 11U;
    msg.htime = 0.46267735886;
    msg.context.assign("BKSUUTNXNJGKJMILIMAVYTGLILFCDFGUFQXRHMVSRFFITORTBOKQRZMSWZQPDOUROIMLTWHMLGGNNGHWATMKNPXYKJXSBBZWMXEFPPPZJLOUAJLNRWDOHCCTCEDUCFEAVYJHASFBAQQQNXBSTVYHHN");
    msg.text.assign("SDEFFKXRJFKKXBIQFDMEGBQVJVYFDANCHGHYZQKRZBJILJSBOHNUYOMWOWMYDZWMNWFCIPIGCIIUWWVZLFRQRJHWPGJAGJVNPPUOMDGICOZVI");

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
    msg.setTimeStamp(0.0866187388827);
    msg.setSource(5237U);
    msg.setSourceEntity(49U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(19U);
    msg.command = 171U;
    msg.htime = 0.966107917234;

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
    msg.setTimeStamp(0.821537057782);
    msg.setSource(10458U);
    msg.setSourceEntity(253U);
    msg.setDestination(63766U);
    msg.setDestinationEntity(134U);
    msg.command = 209U;
    msg.htime = 0.0678554864996;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 16U;
    tmp_msg_0.htime = 0.629720074235;
    tmp_msg_0.context.assign("UMCYDJLUDUQEABBNDCHBNGARAKGIBWHJHGVCEJVVKNMSDPCECDTAIAODAHZQQCMIZQOCNPHLYNFBLE");
    tmp_msg_0.text.assign("RVMWXSAAJZWCVHQAHEUDZISBMLJWVOQYUXBBKAQDDABYQNDEPPTLDHMSAVLFIPUXGFMFVILVWTNLISOCAIQKIKQKJHUOJYUXDYFWASTFYBYQGWKDNNRIEYKJEHBUTVIFHXGGTMLRBCPPZRVJFFRMFEUWRGKMYHHZONKGTTNXOCC");
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
    msg.setTimeStamp(0.955066991882);
    msg.setSource(49680U);
    msg.setSourceEntity(90U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(114U);
    msg.command = 220U;
    msg.htime = 0.86619574051;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.48217574071;
    tmp_msg_0.context.assign("LIQKAESTGJECZTXCPYFWAKBQLMIRZDAHQLRUWCQDDNNTJQVSEWFAYRZCJXRQWSHNEHURGAPT");
    tmp_msg_0.text.assign("WZYRAEIINHYPCRGBXYVEFATRUUNUQENCKINMXQPUSYNULOCCSJLLXGKGMDWRMWMZAPVKMI");
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
    msg.setTimeStamp(0.756038395336);
    msg.setSource(8771U);
    msg.setSourceEntity(237U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(70U);
    msg.op = 169U;
    msg.file.assign("ZXDFGKPDSVTDYHCORIBZZFBAFHWJLKTWZUQAEEHVGFJXBEVUHUUCYAKMOMZNFCZHVKANBHFJLZIUYKPBYWLLOQQBDXXRXTTKLNTDOPZSBTGMRDGQUJGAVAUDRSI");

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
    msg.setTimeStamp(0.139990944368);
    msg.setSource(59691U);
    msg.setSourceEntity(68U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(205U);
    msg.op = 126U;
    msg.file.assign("GRAHPZBMJTURZBFMNBAHUOLTYPSOZQNFGHCEIGLAZGMRFFRAMTFLISMBOWDBALXDDVKKILOWVWPWLPYBDKXBXLEOEZDXSEXNQEWPPMRPRLWVRUODFSKNYIKVWTQCDEKFURQICMICIEJYLAKAXQNUMFHTTHXHE");

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
    msg.setTimeStamp(0.105042546453);
    msg.setSource(63686U);
    msg.setSourceEntity(219U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(33U);
    msg.op = 30U;
    msg.file.assign("HAWMUYTFPJXNFCUEDFXNKBPZNCZEQLSMYSXVRQFIGAOOLMCCNIDYNPDKSVLZOPCRRHCBNUYKUONQWZDWHAEMZHDMBGCDSKFYRWXBOLLIRVVATQGDIIBUOLMKOXGCAZHBKZKHEXQEQSTFGSYQUTWT");

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
    msg.setTimeStamp(0.219704746805);
    msg.setSource(9039U);
    msg.setSourceEntity(230U);
    msg.setDestination(17805U);
    msg.setDestinationEntity(24U);
    msg.op = 147U;
    msg.clock = 0.240871840591;
    msg.tz = 18;

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
    msg.setTimeStamp(0.629563574409);
    msg.setSource(61790U);
    msg.setSourceEntity(19U);
    msg.setDestination(32162U);
    msg.setDestinationEntity(26U);
    msg.op = 0U;
    msg.clock = 0.925856761314;
    msg.tz = -36;

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
    msg.setTimeStamp(0.747866166589);
    msg.setSource(56523U);
    msg.setSourceEntity(62U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(254U);
    msg.op = 34U;
    msg.clock = 0.112320963737;
    msg.tz = -119;

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
    msg.setTimeStamp(0.256429444766);
    msg.setSource(20677U);
    msg.setSourceEntity(176U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.458508585742);
    msg.setSource(3268U);
    msg.setSourceEntity(43U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.544539121596);
    msg.setSource(48268U);
    msg.setSourceEntity(147U);
    msg.setDestination(10884U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.454634356196);
    msg.setSource(50077U);
    msg.setSourceEntity(119U);
    msg.setDestination(20552U);
    msg.setDestinationEntity(104U);
    msg.sys_name.assign("JNLXVTWVGZSNARAAEMOFGDTHQWSOMHABLRDZKOJVFSIJGSZZBSYDFCUTOHQREMQKRUWPUOCZAKSSIJYOAMNXUPFLCUPRLXBCIDWHGVGQXJWBQXTZTAQIJZZCPWDRFOKCRXMIISY");
    msg.sys_type = 69U;
    msg.owner = 56836U;
    msg.lat = 0.0487529275998;
    msg.lon = 0.704677639382;
    msg.height = 0.112114894574;
    msg.services.assign("FEKCZMRLDVFWPTKFNANOUNUIXYZHDJMIINAYFIHYHHBNNPQJCPYWUTWYLTOZWIPUXKQBEXKDKIAZQRWUDSXJBRZERLZQOCIXPVJWOKCEGERFZOPJRUXQZVQMWJDRAKDGZQVTBMQXHVGMKCPKTVYSYCLOGULNBCAAAGGDXHEERMMRUFSHGLCCLQLGPFYMPTLHGYBIJNMGDISEDEXJYVOKPOANITB");

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
    msg.setTimeStamp(0.33200435249);
    msg.setSource(33339U);
    msg.setSourceEntity(116U);
    msg.setDestination(60073U);
    msg.setDestinationEntity(205U);
    msg.sys_name.assign("WGBEHRQMPYCUNODIAGEYETVSBOISLDCHUHSNXKAOFXWFWCLVZTGBZFFGGTCZHONMHKHEEGKSXEWNZMJPISOOAEOFPSJKFLCPYODRDBVPNTMIXVWFYYICABBUQTFATCYUJHWBARQXGJVTEMAQJLLKJRRLWAIFKCE");
    msg.sys_type = 62U;
    msg.owner = 54158U;
    msg.lat = 0.139215188326;
    msg.lon = 0.79042092148;
    msg.height = 0.00617400444783;
    msg.services.assign("TTSJOWUNXWCZSEAMZCVUEGQPPXYZTEKLNLUQRGKLPVARRSJPHHVDIYIWESLBDNUACVACYBATIJNJXBMGZXFEAUOKPGKJVHJMDZWKKWIYDCXWQZNQMAPYXYKMMVMYFOHPMMYOLXRYF");

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
    msg.setTimeStamp(0.558510861715);
    msg.setSource(41651U);
    msg.setSourceEntity(106U);
    msg.setDestination(33711U);
    msg.setDestinationEntity(160U);
    msg.sys_name.assign("UQRAYHSBVYSAOPOQILUCCGQVLFJWBPLWWKJQWSBJPMQXNIQRWSRZPJSODIFIVINHMNGATUOHMYFPIIOFZGFVDXDVQDGPMCTXSCVMHYLLEUVBXLQTCJPFTVFAZIJKLENARUCGYPPXZKUCLWECORQTEBBGNDWYGCABZHMKWURMUZKKYVEEJYEUFKDTBPORMOUOT");
    msg.sys_type = 165U;
    msg.owner = 4780U;
    msg.lat = 0.558991430484;
    msg.lon = 0.919839132801;
    msg.height = 0.0306293168304;
    msg.services.assign("FEWBFBXKTSRYVLRXNULKAHBFMAMGTJBRHPSLEYFXFYICOICCHXRJMZOZHXKODKVQQWFMCCPKJOEGCKCDSFBEUQUWCHUQMTZOVXAWEPNQKVMDWASUVGHZPPBNXVWSBAWLFIXNDNBOFYNRGLGDSAJSLOLNUFBONIIUJKYJXSRYMDJLAYPDIQPWTCBLPTRIKEVTJHIIVDTGOZCUGESPRAZQMOWQRUXTJUWHTZEYGREMGPKZZDANV");

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
    msg.setTimeStamp(0.710500411335);
    msg.setSource(29253U);
    msg.setSourceEntity(37U);
    msg.setDestination(54528U);
    msg.setDestinationEntity(229U);
    msg.service.assign("QKJRHRFLWGMUUYSEZZSLUZNBXRYVIPWYXQYJXISFEEBNBKKCKJRLMFZNXTMWDBORVPTJMEFUQZAOZWMGRTRZSQPVDTKAPADSGPPNWHKHLMHAODHHKKEBVNRBJTMCDPAOUKOWQNFACDBPCVBUIVAUHFZJSQWCLNVYIZOCYHLKOTUUGC");
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
    msg.setTimeStamp(0.399576679525);
    msg.setSource(55050U);
    msg.setSourceEntity(233U);
    msg.setDestination(56246U);
    msg.setDestinationEntity(42U);
    msg.service.assign("DFDMJYDVANSTEDPIZUHOKAMXIXDTGFKVJVJCDCSCJFSDNADYGWCFOTWSXLVZZRABNGWANGWGHIHGRMYTKNOERXBQPWYTGCIPUTAQNWYMNYPVJKNCZIBZXAZXQLEBHK");
    msg.service_type = 186U;

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
    msg.setTimeStamp(0.183614962706);
    msg.setSource(64349U);
    msg.setSourceEntity(12U);
    msg.setDestination(49997U);
    msg.setDestinationEntity(56U);
    msg.service.assign("QKHSSMKFWELAGHFUQJFDEZZ");
    msg.service_type = 35U;

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
    msg.setTimeStamp(0.317106524312);
    msg.setSource(1677U);
    msg.setSourceEntity(167U);
    msg.setDestination(10211U);
    msg.setDestinationEntity(216U);
    msg.value = 0.262317999845;

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
    msg.setTimeStamp(0.557487741618);
    msg.setSource(8812U);
    msg.setSourceEntity(219U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(44U);
    msg.value = 0.19358217631;

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
    msg.setTimeStamp(0.750865558702);
    msg.setSource(56588U);
    msg.setSourceEntity(192U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(63U);
    msg.value = 0.354020248253;

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
    msg.setTimeStamp(0.252840589665);
    msg.setSource(9020U);
    msg.setSourceEntity(74U);
    msg.setDestination(33911U);
    msg.setDestinationEntity(148U);
    msg.value = 0.940731199048;

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
    msg.setTimeStamp(0.861230446173);
    msg.setSource(5148U);
    msg.setSourceEntity(246U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(174U);
    msg.value = 0.823264690652;

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
    msg.setTimeStamp(0.714553477321);
    msg.setSource(12273U);
    msg.setSourceEntity(127U);
    msg.setDestination(30655U);
    msg.setDestinationEntity(173U);
    msg.value = 0.173208449349;

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
    msg.setTimeStamp(0.764055278301);
    msg.setSource(2997U);
    msg.setSourceEntity(147U);
    msg.setDestination(46266U);
    msg.setDestinationEntity(242U);
    msg.value = 0.488861048;

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
    msg.setTimeStamp(0.616553601616);
    msg.setSource(27199U);
    msg.setSourceEntity(185U);
    msg.setDestination(52516U);
    msg.setDestinationEntity(53U);
    msg.value = 0.77147157902;

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
    msg.setTimeStamp(0.0930597743234);
    msg.setSource(24627U);
    msg.setSourceEntity(162U);
    msg.setDestination(20730U);
    msg.setDestinationEntity(205U);
    msg.value = 0.12126236321;

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
    msg.setTimeStamp(0.700186464238);
    msg.setSource(25729U);
    msg.setSourceEntity(104U);
    msg.setDestination(27156U);
    msg.setDestinationEntity(115U);
    msg.number.assign("HOKYBNLTJCGLOVZGKAUAEIKJQDXJFNUEIHZHVEDEBVHSZQMHOALCAAVNTIVLQGPJRKQLYFMMUJDMZCTNOZFSEGQNZSSLDFWVKZHQAXEUBOYGXOPBFGOESNRRKXYNQCWUTBFQIPDWIIVBRUWFCDPGTEYLJPIRCMCECLXKJPXIPPXHTBCBYGFAUTIPYAZKXFUMEODRBJIZVGOLWRDDMZVRSMBHSQAOUUDWVYNNQ");
    msg.timeout = 7565U;
    msg.contents.assign("ZGYXGANQVFCUSKQEUXJSPOSRNISPCYPJWATFQXWBXPHFIZZNTGNZGWKCBBMDAIJVOPTDTMFEBKJHBAJXFZIUICYKKNHIYURDTUIGCPEJYOBURVQKCPUQGIPKSZMYGHOQXVDJOVV");

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
    msg.setTimeStamp(0.34302342203);
    msg.setSource(62031U);
    msg.setSourceEntity(207U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(37U);
    msg.number.assign("CQRQTKCXBMTZFJKNWCHEUAWHWHNUGOIOFHDJYNHLFBJCXKVUGMUITLAUOFZZNOBLRENDWTSNEJAMRUWIBAWIPJORGVBTLSFPXCONDPVIEAZYEGXLZLPKMRDDWXTKZLGZRYQRABGYY");
    msg.timeout = 30700U;
    msg.contents.assign("CWGFVBSIGRXDHATOVFYKJZZOXPGTLXJRJOVOMZXSJDLPYEHZDLEUBBWNVBXHGVWIBXRKUIQFDNFNYEGUNVOLIWVIAUFOKHMHEMDPRRGCCHBWACTTUYNDYGQLHMAFIQROMTVOGXNIPTBHNCSDJLTDJAOAZUGCPJXOQSSUJLPYESDRIGZWKMARPBTFAMQKS");

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
    msg.setTimeStamp(0.970847028031);
    msg.setSource(11503U);
    msg.setSourceEntity(39U);
    msg.setDestination(46654U);
    msg.setDestinationEntity(243U);
    msg.number.assign("ZWNGAXDNOLWAAUQPGRVOTKFPVOEXZHKVZTMLBUSXSBQNJDEBYKIOEAXPRRFQMPRWLJFHOBQZEGHATJEWWVVPDDLQLZZGXXETIAVGZFYKWJRTIGFQIBQUROGIPSMGCWHGXFMPDBBYGCJEYKDOIKHYNZRUSIHFTAEWRSYOIVCLEYLFXUKYHNQYSSIDAWSZVJXKMKDSFKCUJXUEMPNIRPZMCLFVCMQHRWNQHUCBBPNUTATHLDJOSNUNV");
    msg.timeout = 27941U;
    msg.contents.assign("HVWUMXNFZAQRBHRZAKHVGTUSVQMTVFAAOAREHYYAEXEQHEBLNOXMQJYUWWVIVZETEJISLLBMQEHBMNWYOTYXBGGPDRLKMRKFGZBN");

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
    msg.setTimeStamp(0.505960065492);
    msg.setSource(55378U);
    msg.setSourceEntity(111U);
    msg.setDestination(40771U);
    msg.setDestinationEntity(170U);
    msg.seq = 2513307989U;
    msg.destination.assign("KKPZZMCOMSCZHCXZAXLKBCIXWWCGALMEENBJFJCANOPUNMGUOHVBGQPDASBYYKBISDCPZJMLXNWVLQHYEQCRKCW");
    msg.timeout = 33395U;
    const char tmp_msg_0[] = {-22, -92, -27, 117, 18, 107, 72, -115, 70, 5, -48, -126, 87, -97, 62, -68, 9, -29, -107, 24, 65, -100, 71, 37, -87, -82, -39, 9, -29, 5, 110, 89, 113, 93, -15, -3, -91, -76, -95, 33, -55, -126, 65, 55, 28, -77, -19, 36, 11, 17, 102, -76, 13, 79, 24, 110, -78, -5, 101, -60, -9, 78, -121, -101, -19, -77, 75, -90, -28, 32, 71, -81, -39, 9, 55, -93, 25, 125, -54, -8, -90, 71, -98, -29, -1, 61, -7, -22, 52, 0, 93, -84, -6, 92, -127, 117, 96, 108, -41, -127, -65, -58, 30, -14, 94, 33, 15, 95, -27, -25, 1, 104, 10, -96, -81};
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
    msg.setTimeStamp(0.19507330795);
    msg.setSource(50345U);
    msg.setSourceEntity(192U);
    msg.setDestination(4469U);
    msg.setDestinationEntity(41U);
    msg.seq = 2922096967U;
    msg.destination.assign("NEBEBWFBQRGWIQATBKDTSACLDZIVJFUPEKAHAAZFEVJSWWYXHKYEMNAMXLZBDHOZZIPYJYXUMIQRWVBDYPQWBFRILZFHGDQLJPZFMPAPIROTSFLOWOHJTZCRPNNDQCKEPGVCGBXDRUMADD");
    msg.timeout = 923U;
    const char tmp_msg_0[] = {63, 71, -125, -93, -45, -120, 54, 80, 5, 41, 112, 85, 26, 34, -108, -4, 80, -82, -93, 28, 91, -83, 14, -89, -104, 122, -23, 9, -23, 42, -57, 109, 51, -98, -114, -97, 48, -75, -37, 68, 35, -3, 114, 4, -84};
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
    msg.setTimeStamp(0.725622569504);
    msg.setSource(56199U);
    msg.setSourceEntity(161U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(110U);
    msg.seq = 2143621469U;
    msg.destination.assign("SJCQAADYXCZUJMJODEVTMDPISVHNNTHRSHEKATVWXDRGYLMAJQXWZIJCLLZCTJVKFUBLEPXECHGTMGJQRZFLFIWONKQDYCL");
    msg.timeout = 52518U;
    const char tmp_msg_0[] = {97, -75, -22, 78, 103, -54, 52, 16, -68, 49, 29, -92, -60, 125, 21, 71, -90, -54, -62, 40, -53, 35, 125, 6, -95, -40, -36, -86, 74, -47, -125, 123, 122, 121, 89, 65, 74, -38, -7, -80, 15, -63, 38, 37, 1, 24, -1, 32, -95, 87, -122, 117, -109, -105, -47, -20, -60, 13, 19, 21, 100, 7, 102, 110, 115, -84, -97, 49, -50, 46, -61, 23, -81, -67, -23, 123, 2, 2, 31, -50, 23, -107, 82, 25, 19, -55, 94, -28, -6, 125, 99, -26, 92, 40, 38, -64, 91, -94, 93, -40, -27, -20, -100, 109, 115, 4, -61, 123, 105, 55, 17, -60, 36, 54, -60, -10, -52, -69, 87, -106, 106, 26, -46, 40, -65, -15, 39, -39, 89, -34, -20, 104, 80, 71, 87, 72, 20};
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
    msg.setTimeStamp(0.935691003904);
    msg.setSource(41132U);
    msg.setSourceEntity(6U);
    msg.setDestination(52853U);
    msg.setDestinationEntity(95U);
    msg.source.assign("PAGSSYUYDFYXWWGBUOKEWKHSDFQWLRTICVCRUUYOQBDPPTBLVOCJFHRYGEPLXVHMTANKZETUE");
    const char tmp_msg_0[] = {72, 10, 41, 72, 114, -68, 107, -94, -44, 109, 70, -77, 29, 88, -85, 71, 71, -45, -15, -116, -72, 47, -29, -121, -126, -13, 53, -118, 62, -87, -27, -21, -81, 14, -51, -3, 24, -10, 89, 15, 106, 7, -30, -77, 3, 108, -93, 122, 17, -104, -36, 33, 6, 2, -112, -95, -102, 65, 117, 12, 20, -30, 53, -28, -81, 83, 106, -25, 115, 58, -95, 4, 38, -95, 18, -82, 72, 63, -40, 108, -25, 58, -71, 117, 1, 45, -45, -47, 68, -114, 17, 116, 40, 97, -82, 58, -91, -20, 111, -114, 70, 109, -77, 54, -111, 2, -95, -33, -112, -51, 111, 29, 80, 100, -27, 36, -103, 25, 35, 52, 114, 17, -60, -6, -10, -40, 117, -25, -9, 126, -89, -13, -88, 118, -112, 56, 120, 119, 70, 93, -7, -122, -38, -58, -119, -44, 114, 106, -105, 111, 120, -105, -98, -19, 66, -4, 11, -97, -124, 5, -81, 6, 116, 109, 32, 0, 123, -49, -109, 20, -56, -8, -5, -103, 114, 28, 69, 27, -77, -118, 109, -53, -109, 33, -118, 1, 78, -42, 119, 32, -56, 31, -26, 60, -120, 7, -11};
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
    msg.setTimeStamp(0.041001053956);
    msg.setSource(32198U);
    msg.setSourceEntity(179U);
    msg.setDestination(58060U);
    msg.setDestinationEntity(205U);
    msg.source.assign("LIELHIPNBBVCUQBMNLOVQJSAHDVXERCRVLTJPDYDSSRZPSWGDLAKEBSALKPUGWPNJDZRWFUGWBSFPIUOPELHVOOTXKFQTDZGKRBMHTHYIFTFTQULCMRUJQNXZVRZWNAYWSWYSHFTIYQCHI");
    const char tmp_msg_0[] = {-84, -44, -28, 82, -125, -25, -110, 45, -24, -125, -94, 100, 110, 47, -29, 78, 58, 87, 125, 67, 118, -46, -37, 13, -79};
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
    msg.setTimeStamp(0.323793058897);
    msg.setSource(45913U);
    msg.setSourceEntity(238U);
    msg.setDestination(36561U);
    msg.setDestinationEntity(100U);
    msg.source.assign("MFMWPXQPUKDWORHACXXKJRNJREVTTKSSCFUBNGYZEDDNIUABKTBZFVQDMFBYOHUWVUHPRZIIKLYAJHBYLSIQDWMTTBRXYNNANSLVICFZ");
    const char tmp_msg_0[] = {-68, 84, -56, 34, 19, -67, -50, -17, 126, 57, 90, 118, -41, -71, -108, -128, 112, -77, -126, -103, 32, 53, 53, -69, 36, 26, 83, -76, 109, -91, -94, 13, -21, 125, 71, 46, 60, -41, -44, -127, -120, -4, 102, 2, -78, -64, -43, 63, -109};
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
    msg.setTimeStamp(0.850970975725);
    msg.setSource(41175U);
    msg.setSourceEntity(143U);
    msg.setDestination(45716U);
    msg.setDestinationEntity(109U);
    msg.seq = 733184743U;
    msg.state = 29U;
    msg.error.assign("BCKLNPMEVIMOXSQCSPLJVXRJKIYMWBODVVLXUDELMQCAKEQYCBIZIASHHQJNDOVMRYCUTHVAJAVDNFGWZRPGTLMTTRHJFLEFISRGANBKORBOPGBAQGRXWUQTKFNZYWXODREJVTHVLIOLNWMIGNFTHKMKYUWIDLWFYZDXRJIAKHDEPUAWIEZUEPGXTCVRCQK");

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
    msg.setTimeStamp(0.784815507739);
    msg.setSource(3454U);
    msg.setSourceEntity(91U);
    msg.setDestination(1186U);
    msg.setDestinationEntity(163U);
    msg.seq = 366208301U;
    msg.state = 113U;
    msg.error.assign("EIEVIPNCARWRKPZUTFVQIEMCWNYSEIWDLPPBIYLRYLFBVKZBPVSVYYBUMVQPVLCQGUEXXUNJEFDRZUAGHAWZOYRAAVXDGMYJPGKQLTAQHIIDCAQCKCJOLQIJORJSIWCSGDEKNZNDKVKHMMUUAQHUMCPVBWFDZOHIKRFOSCKTWZXXJNUWTRMGNTYFTFTSCSONHDBJEGLQOYLQTJOMEOLBMZXPXUSDOLXAMSBFGRWKTFTZNHJPHGBG");

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
    msg.setTimeStamp(0.402112822912);
    msg.setSource(8363U);
    msg.setSourceEntity(40U);
    msg.setDestination(42157U);
    msg.setDestinationEntity(67U);
    msg.seq = 1822921904U;
    msg.state = 99U;
    msg.error.assign("IEKELTWBSRWPLGUSXNOGJRIDFXQGROTPYJSSWGDFKZKFVXTHRKVFRCVAMAVHIDKGXTKWCAVMGIKJWJCQTZAVPYTUUAJRQAHMMNFLAQIPIGEXNQBYJYYFKNPDJPYWUFJXDOUQSXSYFBSWCRSNXUQPISWCYOZEMULYNLTZVRZNMKEHNJPSBLAREOBITLL");

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
    msg.setTimeStamp(0.557651299148);
    msg.setSource(38403U);
    msg.setSourceEntity(168U);
    msg.setDestination(38304U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("GGDDRZCSLQAZTRWFVHVUNSWKERFEDKIOBCGXWEQJBBUOTLETGBAGNPIBNHKWUC");
    msg.text.assign("CICSKYTXNVYNGPWRPTUPTRTQZNVFQDDYYPNOZLKDARDMCXUZSHUPWHYTAKCAEPLJSAIDRCREDWXPNUAFLIEWQFLQKSMVXIVYKBMLBEXQUGDGEJSIRJGJWMYWGWMO");

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
    msg.setTimeStamp(0.739344083549);
    msg.setSource(58035U);
    msg.setSourceEntity(108U);
    msg.setDestination(33265U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("NUHVJBIZXHOEHPRBOPKTDIOUVDKMXSAQOFRIIAKTVHMJMTBQXLXJPQEGKYROPGVYQIWWLARWCLJSGXJTFDPCMBKZFZLHISGPUUYGNNWFRCZPTDNJZCFRLCTSQJWZOIVYVRSYLDZQSAGC");
    msg.text.assign("EYDDNMGSCYAUPXLCHJLUYUPAEPRZBWZZBFOMHRIQKYQQNHGGEMJVFQDSICRDXPGSXUSTINYJBYVRRSAKWKHOSCJAJMEQGBFOEUMGQZYXVROQTFYDLPKHWJGUFATGANCCEPXACOVXNOFESIISREAEUSXTHBZVVAHTDWNQQWUTBJJIFWOTNBQZTLNWUPKMGMUCVLZNXHPPEOZKILRVTLNIMLZBMODHRFILWYCISHJBMFXDAKYFWTKOGRZK");

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
    msg.setTimeStamp(0.665241499261);
    msg.setSource(26916U);
    msg.setSourceEntity(115U);
    msg.setDestination(30589U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("XCRDSIPNNPSOUWICHKLNJHOLKQPALEAWKAEJHYQIRHSSBDOEAQMGJMOSFGZUVZBODCXGKTFQMEKIUBQCYYMTQEBJNINTTQYVDFUNIUTNPCENIXYQSZJZXAWMFRXDIDSWKVHPZILTMBRATREPEJGLVRYPKFQXNKUEVZFOVRXYECDCKS");
    msg.text.assign("MQDIUFRXCTXXNGSVTSCOPLKUZXPKLJJGJBUCUZDTCEJLRIVZMDKESCFBAYZGJBTMSQFCMHHADSURSZRPJQVFNBHBHQFHINIWGQNUIELLGXLYMIXMTDKHKVSJK");

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
    msg.setTimeStamp(0.360580168261);
    msg.setSource(26192U);
    msg.setSourceEntity(218U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("GFKKKGQGJHAWLUXCNUPQPXYGDBSFKGOCEFYUEVPIKMPFHVNHZYKQIKRODAOVLDYDFMZSHOOQWVSXZEBSBXGGJLQWRIFIVOHMNIHJBGNJRTXRJNEOY");
    msg.htime = 0.863072419303;
    msg.lat = 0.161472217947;
    msg.lon = 0.0811925175867;
    const char tmp_msg_0[] = {-36, -67, 67, 81, 98, 63, -97, -76, 66, -44, 31, 38, -54, -34, 114, 36, 68, -87, 126, -37, -96, -71, -3, -29, -41, 33, -122, -52, 30, 123, 108, 29, -81, -19, -100, -78, -75, 88, 79, 112, 40, -27, -88, -54, 17, 106, 2, 117, 97, -13, -69, -84, 107, -3, 34, -72, 107, 97, -4, -10, -90, 118, 37, 69, 85, 105, -94, -2, -39, 51, 72, -8, 117, 93, -111, 125, 68, -56, 69, 41, 118, 65, 110, -24, 36, 15, 107, 105, -48, 86, 11, -27, -90, 81, -47, -46, 68, 73, 104, 35, -127, 11, -71, -100, 22, 11, 28, -48, -15, 8, 83, 62, 17, -88, 120, 48, -45, 121, -93, -106, -67, 23, 84, 52, 8, -7, 118, -114, -32, -103, -36, 112, -118, 109, 31, 35, 4, 84, 22, 85, 61, 23, -61, -118, 68, -42, -68, 90, -22, -31, -96, 71, -24, -20, 6, -29, -70, 14, 122, -19, 84, 102, 31, -4, -109, -37, 92, 84, 60, -96, 97, 38, -128, -47, -52, -52, -122, -10, 86, 27, -77, -59, -9, -102, -10, 70, -99, 56, -4, -11, 108, -88, -127, 75, 10, -52, 89, -123, 68, 91, 7, -31, 103};
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
    msg.setTimeStamp(0.843598795522);
    msg.setSource(25816U);
    msg.setSourceEntity(104U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(200U);
    msg.origin.assign("OEZTAAWXLVPBXVKGXKBUFYRSECHFMAPLEKREFXDOQPIZZZNKCOQTBRLHBIKKUFXVSSVDAHNPEKMSCDECEMGHTJQT");
    msg.htime = 0.400919543403;
    msg.lat = 0.530687957886;
    msg.lon = 0.388489899261;
    const char tmp_msg_0[] = {-22, 5, 45, -125, -25, 16, -120, 4, -104, -41, 93, 119, 56, -77, -84, -74, -14, -90, -25, -124, 91, 88, 81, -15, 4, -125, -117, 117, 20, 93, 52, 112, 49, -48, -110, 60, 2, -60, 2, -127, -23, 45, 28, -22, 117, -124, 87, -15, 7, 78, 43, -29, -126, -73, 62, -22, 32, 86, 59, -54, -91, 59, -74, -88, -54, -55, 51, -22, -33, -45, -24, -80, -104, -110, -4, 113, 118, -92, 85, -126, -62, -85, -8, -39, 92, -102, 40, -59, -33, 52, -49, -87, -50, -72, 33, 63, -12, -80, 104, 93, -4, -116, -22, 23, -66, 101, -94, 64, 49, 108, -53, 49, 77, -62, -38, 47, -1, 5, -38, 44, -93, 109, 21, -74, -33, -88, -115, -24, 55, 47, -99, -128, 63, 71, 65, 55, 123, 39, -61, -118, -27, 89, 24, -30, -86, -65, -124, -113, 66, 47, -59, 68, -49, -48, 91, 38, -48, -128, -121, 35, 103, -42, 34, -17, -70, 99, -83, -97, 6, 118, 36, 52, -90, 54, -69, 106, 1, 7, 41, 32, 82, -13, -49, -23, -55, 4, 86, -13, -27, 9, 106, -60, 109, 11, 106, -97, -69, -47, 101, -12, 40, -89, -125, -108, -66, -119, 64, -44, 0, 76, 107, -75, 119, -70, -63, -114, 66, 123, -36, 101, 51, 96, -115, 65, 76, -8, -78, 28, -28, 80, 12, -100, 68, 102, -34, 81, -110, -113, -31, -101, 87, -31, -104, 61, -126, -95, 72};
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
    msg.setTimeStamp(0.954850103404);
    msg.setSource(29498U);
    msg.setSourceEntity(126U);
    msg.setDestination(47081U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("UTFFWGIBVLCIMGBWGJALWCDFWFERTRNHZSRHXIEOHCCXAWEXGWYVCHFIOCQOPLXKAJZPUKUYWOQXGPAPBWEESFBOZIKOXISVZLMQKDDNADJFLPSRKHJVPDBMGHZHTNEOFXXPXMVFREGNTTYASQQDQZYFINOUGYSZWSLNYZUUYCKTDBKNBSOHMPLXLENJEDQMBHWRQGKBTKDEISJRQNPURCYAAMYAJVPRUHUJVIJ");
    msg.htime = 0.154541207551;
    msg.lat = 0.498035071383;
    msg.lon = 0.145572491169;
    const char tmp_msg_0[] = {-125, -26, 93, 122, -27, 98, 8, 39, 72, 112, 89, -94, 61, -52, 71, 86, 20, -62, -84, -111, -120, -117, 92, -99, 83, 83, -5, 95, 125, -2, 75, 42, -44, -26, -95, 9, -109, -78, -76, -45, 1, 24, -55, -42, 79, -108, -21, 121, 51, 99, 32, 42, -86, -101, -52, -10, -42, 86, -10, -78, 87, 16, 99, 50, 40, 61, 25, -23, -56, 75, 8, 78, 106, 46, 62, 39, -89, -99, -8, 54, -53, -5, -117, -96, -37, -115, 34, 46, 93, -48, -118, 120, -116, 64, -98, 103, 28, -14, 92, -90, 69, -65, 64, -33, 68, 12, -13, -49, -102, -106, -70, 33, 57, 23, -52, 21, 47, 45, -82, -84, -29, 118, 75, -72, -29, -91, 55, -52, 72, -57, 89, 14, 66, -47, 50, -46, -114, -113, -6, -82, -75, 79, -125, -73, 13, 88, -94, 38, 21, -36, -32, -81, 50, 85, -34, -70, -50, 35, -89, -72, 36, 81, 14, -17, 82, 56, 49, 38, 56, -1, -111, 109, 37, 0, -61, 36, 29, -46, 96, 89, 121, 85, 27, 104};
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
    msg.setTimeStamp(0.875060364654);
    msg.setSource(45611U);
    msg.setSourceEntity(130U);
    msg.setDestination(23690U);
    msg.setDestinationEntity(47U);
    msg.req_id = 37356U;
    msg.ttl = 20070U;
    msg.destination.assign("VQAFZWMAMTRGRFKNDAPUBGYTBQZDVDVRWJXOIROBUNFPERWPMZAJELCESQDDSOCZBYMBOYYVEQSULRVWIGDQELLQKWWSCXGEIEESNGBJTTDWWDMFFASFTMAOPDHOIHOLKSDACLKSVXNJGROGKZKYGLOHNUNUUCTHWMXXJKRJCAYKIUMXRVZVWMHFZKSCJPT");
    const char tmp_msg_0[] = {99, 19, 93, -118, 97, -48, -44, 53, 102, 82, -88, 31, 47, 44, -62, 105, 24, -5, 96, -39, -3, -95, 110, 13, 54, -3, 21, -126, 65, -42, -36, 117, 18, 90, 114, -95, -121, -43, 4, -121, -60, -46, -33, 20, 58, -53, -77, -49, -124, 59, -79, -87, -75, 63, -104, 18, 75, -93, 95, -89, 67, -53, -17, 86, 55, 47, 104, 12, -12, 77, -60, -121, 92, 16, 102, -7, -72, -23, 103, 36, -6, 80, 11, 103, -13, 120, 19, 120, 7, -88, 70, 51, 111, 74, -100, -52, 76, -124, -36, -79, -115, -53, 30, -81, 68, 23, -85, -87, 75, 85, 67, 38, -58, 11, 114, 25, 69, -61, -42, -106, 39, 16, -32, -69, -3, 90, -46, 81, 90, -27, -32, -58, 52, 42, 29, -41, 104, 53, -4, 110, -9, -1, 19, 35, -128, -11, 1, 3, -106, -87, 68, 57, -21, -28, 112, 29, 3, 2, -117, -96, -121, -63, -43, 114, 122, -31, 32, -60, -12, 79, -49, 106, 92};
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
    msg.setTimeStamp(0.751838962139);
    msg.setSource(3224U);
    msg.setSourceEntity(20U);
    msg.setDestination(30541U);
    msg.setDestinationEntity(50U);
    msg.req_id = 32416U;
    msg.ttl = 26798U;
    msg.destination.assign("ZMMACRPWBSVYQBWNJAOUKABEJHFICDNKHXQSDLXDSOKKSTAQJWPTXZIZMUERYONIXROSGMUCQRCMC");
    const char tmp_msg_0[] = {-36, -101, 39, 112, -55, 84, -50, -57, 51, 86, 12, -36, -118, 40, 28, 2, -36, 120, 36, 104, -94, -54, 26, 12, -23, -26, 73, 24, -108, -104, -12, 121, -73, -50, 95, 25, 73, 20, 30, 126, -89, 107, -5, -29, 125, -2, -26, 70, -115, -122, 80, -52, 49, 89, 42, -9, -106, -128, -79, 40, 55, -69, -28, -80};
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
    msg.setTimeStamp(0.343637286798);
    msg.setSource(43623U);
    msg.setSourceEntity(101U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(78U);
    msg.req_id = 52194U;
    msg.ttl = 17176U;
    msg.destination.assign("LMQCTTTBQYHCOUPQVISKFYEXMAYKKZUIJRBSCQEZGSHXJGHBJDPASQJOYRHDPLNKRTNVORDSFNAERVZLXWXJIWMA");
    const char tmp_msg_0[] = {-97, -18, -81, -109, -10, 120, -65, 104, -13, 78, 84, 18, -122, 61, -103, -91, -73, 0, -10, -15, -2, -71, -46, -2, -68, 86, 45, -14, 77, 117, 62, -82, -21, 97, -13, 56, -125, 56, -34, -118, -116, 21, 121, -45, 1, -126, 82, 105};
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
    msg.setTimeStamp(0.196541557118);
    msg.setSource(65279U);
    msg.setSourceEntity(205U);
    msg.setDestination(48421U);
    msg.setDestinationEntity(150U);
    msg.req_id = 8634U;
    msg.status = 248U;
    msg.text.assign("JTZCTVRYUHQIIZWXWGKLCRXFKZHOOSFHTNSCQPSJDIYYUBTIRWTUOIWXLKBPCMUWTDOUJISBNQHAELGKPIQOMVXAFHDCJZUGQDYESPKYLAEPRQ");

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
    msg.setTimeStamp(0.622101144488);
    msg.setSource(40906U);
    msg.setSourceEntity(19U);
    msg.setDestination(2270U);
    msg.setDestinationEntity(75U);
    msg.req_id = 46714U;
    msg.status = 185U;
    msg.text.assign("FYLGXDUVRWUUTQMADQTHXSRWNJEKALZCZMKDRBHPAAINPDIWWYOQGKGNTROMQMJPLEXMUPYOHBICVMFMLMSBQSGRJYEJPVZFIZOIINJIHJRSBFFZWWVWBQOVGCKLCPIOKUHLIBCKGUXCTVUGLPDYSFXMTDDFQNKRCGHAPECEZELDEODFIQVYTENJXHYKZXOAJXBZUJXAENNKTYTYCFHKASGOFAVHLUMGNLSZJUHPAXZWSDPNRBEOVWQBYWSTQ");

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
    msg.setTimeStamp(0.979895715085);
    msg.setSource(42505U);
    msg.setSourceEntity(116U);
    msg.setDestination(23464U);
    msg.setDestinationEntity(174U);
    msg.req_id = 327U;
    msg.status = 33U;
    msg.text.assign("XFRPRMLCWTWCGQUVPSEIVRTDOIZAGKJDUJCRHUIQNLYIUFXAIMXLJTLDNTLXWJJXDIBRMIRYLTNBUHQFJTNKKHDZEBN");

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
    msg.setTimeStamp(0.537090039484);
    msg.setSource(17763U);
    msg.setSourceEntity(160U);
    msg.setDestination(1994U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("XACFXLQWMSKXELJIGXXBOTQCZZFGBLCWAGPPJZYSDKRIOTVXZRSMAHPBIKEGQCOYHLCJHPDPOVCYRSSQVMZNVHVFRFYUERUENORQTSJEDJWEPT");
    msg.links = 565309435U;

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
    msg.setTimeStamp(0.415622386409);
    msg.setSource(38070U);
    msg.setSourceEntity(246U);
    msg.setDestination(59068U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("VDVOXHHYRZBDGOJOEFPTBQWQNKEESQWMUFPKZFVKGRUTXFCBJVAISCPMHNJADYAIJTWMSZQCYWBVIFWPTAQQEHVUGLXNHZM");
    msg.links = 2934288007U;

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
    msg.setTimeStamp(0.682188637456);
    msg.setSource(39519U);
    msg.setSourceEntity(162U);
    msg.setDestination(38353U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("CMCESZBKPLZPABVYGVMGRVKODPZXGEIGBWHKHJTXBTEFWMXQDHOHORYAACAUJFBZZWSLVBJDOEEWAMPKWQJQPOYFUNKLBUAHULCYXYLXFVFPTTSDTDQSFETIEQWYPZLPDBGNLYRGQCSFVXGKSJJIIWVRCNNFORSWSUXUNYDISJUFRIYIWBKYRBWRITNHIZKOKMMPTMGANSOKLCOXAZHUCHXNEVFRULMCODTQCTHAJHMN");
    msg.links = 318419057U;

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
    msg.setTimeStamp(0.834550226376);
    msg.setSource(49912U);
    msg.setSourceEntity(211U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("BWQGFWMDVEFSWRDKIEJAUPHHDGAWURKKXCNBKGGYAGBFRQPQWLXNKPETUNGYCXXPHBCUMUJBNIORZJNYUGMDEZSNYNRMFIFBOMFJIAJEOEUFVQPASQDVDXXBKYHODERTLHVHLLJVOZJRVHPTTXWOHMUSWHKSMRCRWIUVILSAGLZGVYCHSOZQWPNZQQYJAMKXBYINAIKPCTFVLTCETPXUTEWDFVOFKZNAQ");
    msg.action = 139U;
    msg.grouplist.assign("DAWJUFFATGJNEKBRAXISKQMSJJDQNLZJPKPFQITXUPXLFPTVFHBCUHDGLNWCCIGBBHCUYONVOIFQENGPNZLPMYQAZSMGNNOEKLMXTIIQVVEMEZZDSQDFVADTXGLWRZYTJOIVKVJGYFZJQIMEKDEDRUXGBLKQBEWHUCKBNPOPVJYYTABMVYRB");

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
    msg.setTimeStamp(0.577364656224);
    msg.setSource(32986U);
    msg.setSourceEntity(155U);
    msg.setDestination(51823U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("YQXMXSGDNTNBVJFAYTYVJODQTQZFPTSRHGQDIIZTIH");
    msg.action = 63U;
    msg.grouplist.assign("HASWGEGIRGSHMGXYUFWJAGILVWFWGLPMNINSXAI");

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
    msg.setTimeStamp(0.722656452551);
    msg.setSource(59594U);
    msg.setSourceEntity(193U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(20U);
    msg.groupname.assign("XKLEPLOOTRGQEKZLOZNFRVZJUWNMJUPQOGEUZGNTJXBYSAQLIVJQNABDQMRFXFCULEKIAXJEYYVCFDEDJNISNQMSRICWZS");
    msg.action = 172U;
    msg.grouplist.assign("GXMFUKXGIOMMNOTAKFOWWRYLNTIQMCJSJTIRTXNAJISIHSWGM");

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
    msg.setTimeStamp(0.584789724052);
    msg.setSource(6762U);
    msg.setSourceEntity(220U);
    msg.setDestination(23172U);
    msg.setDestinationEntity(232U);
    msg.id = 77U;
    msg.range = 0.687028049246;

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
    msg.setTimeStamp(0.664655861256);
    msg.setSource(2620U);
    msg.setSourceEntity(102U);
    msg.setDestination(19037U);
    msg.setDestinationEntity(116U);
    msg.id = 128U;
    msg.range = 0.711569142468;

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
    msg.setTimeStamp(0.782025013728);
    msg.setSource(15357U);
    msg.setSourceEntity(216U);
    msg.setDestination(7907U);
    msg.setDestinationEntity(67U);
    msg.id = 165U;
    msg.range = 0.98667099035;

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
    msg.setTimeStamp(0.295961438063);
    msg.setSource(11372U);
    msg.setSourceEntity(101U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(92U);
    msg.tx = 205U;
    msg.channel = 125U;
    msg.timer = 61979U;

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
    msg.setTimeStamp(0.901763470363);
    msg.setSource(42781U);
    msg.setSourceEntity(1U);
    msg.setDestination(11785U);
    msg.setDestinationEntity(205U);
    msg.tx = 32U;
    msg.channel = 32U;
    msg.timer = 17652U;

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
    msg.setTimeStamp(0.47222854337);
    msg.setSource(13316U);
    msg.setSourceEntity(189U);
    msg.setDestination(18330U);
    msg.setDestinationEntity(53U);
    msg.tx = 92U;
    msg.channel = 103U;
    msg.timer = 50823U;

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
    msg.setTimeStamp(0.300804981523);
    msg.setSource(44734U);
    msg.setSourceEntity(30U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(19U);
    msg.beacon.assign("IBWQLRUKNLXQKCVZINHQTZGDLTQBYHISVWHDDFCNRXPOQYDGPYNWPIPZJDSROTULHTJMPVMGOHUUKDYGLIGRAPVPAMTSEMJQXEEMKZASBKBJAJNISHBPBEYFRDJSCUX");
    msg.lat = 0.827885553854;
    msg.lon = 0.836770855623;
    msg.depth = 0.597700425997;
    msg.query_channel = 103U;
    msg.reply_channel = 129U;
    msg.transponder_delay = 107U;

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
    msg.setTimeStamp(0.0610369927947);
    msg.setSource(52212U);
    msg.setSourceEntity(215U);
    msg.setDestination(64069U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("VQLBCYIREZPXWIJFQBRYDQOUGEEBPFYAWMFGGBFJPFWKZJUYMKUAKHNHEOYGZFUJXCYWVIISJRNUVZDUXDARNBGXDOUNMDGKZMBUHOSZAMEYJNGOKLNAWVSPLAXHJNROMTYRKT");
    msg.lat = 0.726813276975;
    msg.lon = 0.524321646169;
    msg.depth = 0.555666123469;
    msg.query_channel = 253U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.831653336387);
    msg.setSource(37105U);
    msg.setSourceEntity(180U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(181U);
    msg.beacon.assign("YCMPPHUCOIDBNDTSARVVRDWHQTFBZQGMSDMDDSDISSCPLVPYMKHAJHKIUHKGAEDLWUBONNHJJAPKBZZVHYGORWSFGNTKGITRXQAVGNNZAOUSYNDLRJBXLIGWQKWUTIULKCJXMYJZJVGUSSJARYRTTZQCWNQQFAMBGNIQZUFEAOPOOBRWXBXFFXZFDEMIZEWVFXCTOXOLBJEYYBMCCHMPYRVLWVKAWXPRNMOPCUVJQLCHZTGTKLL");
    msg.lat = 0.623659573416;
    msg.lon = 0.317358921887;
    msg.depth = 0.697639847279;
    msg.query_channel = 58U;
    msg.reply_channel = 160U;
    msg.transponder_delay = 138U;

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
    msg.setTimeStamp(0.236460826959);
    msg.setSource(61234U);
    msg.setSourceEntity(40U);
    msg.setDestination(57917U);
    msg.setDestinationEntity(158U);
    msg.op = 197U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OPOVAMPLUDHQJPAYDCQNTIMEWZGSHMKHYZMIDCGVYVXBPAGJGKPKEEYPIDNEABWFEMRIXFRVRTILTMOVOZCIOMEYJLHIALNTXNXDWUSPFNUQSCLESZLQCPGFRGKJRFSBCJTYJUJWNVZWREBANSEGTHWWWXEALBZYRXOTPRSJSQKDIQKBPXWJTYCHMDTLCQBIDZJLBSCOGFMBHYFIDVVUVZUAVOTGRKDUZYUXM");
    tmp_msg_0.lat = 0.697842642672;
    tmp_msg_0.lon = 0.614184304287;
    tmp_msg_0.depth = 0.173538707228;
    tmp_msg_0.query_channel = 106U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 216U;
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
    msg.setTimeStamp(0.323382360659);
    msg.setSource(33416U);
    msg.setSourceEntity(84U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(217U);
    msg.op = 82U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QTDGEFLINDKONYUBNUPMOTFSMWYTRARUELLGRKGMMGHAHASSCUVKTCD");
    tmp_msg_0.lat = 0.791703592291;
    tmp_msg_0.lon = 0.71035941439;
    tmp_msg_0.depth = 0.627501581309;
    tmp_msg_0.query_channel = 99U;
    tmp_msg_0.reply_channel = 71U;
    tmp_msg_0.transponder_delay = 51U;
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
    msg.setTimeStamp(0.873692226752);
    msg.setSource(45356U);
    msg.setSourceEntity(68U);
    msg.setDestination(17363U);
    msg.setDestinationEntity(62U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.883220156391);
    msg.setSource(9856U);
    msg.setSourceEntity(239U);
    msg.setDestination(48633U);
    msg.setDestinationEntity(100U);
    msg.address = 134U;

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
    msg.setTimeStamp(0.555567480631);
    msg.setSource(10807U);
    msg.setSourceEntity(206U);
    msg.setDestination(20036U);
    msg.setDestinationEntity(175U);
    msg.address = 241U;

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
    msg.setTimeStamp(0.064866359551);
    msg.setSource(4501U);
    msg.setSourceEntity(125U);
    msg.setDestination(49318U);
    msg.setDestinationEntity(237U);
    msg.address = 149U;

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
    msg.setTimeStamp(0.46979687991);
    msg.setSource(25096U);
    msg.setSourceEntity(160U);
    msg.setDestination(54687U);
    msg.setDestinationEntity(207U);
    msg.address = 28U;
    msg.status = 183U;
    msg.range = 0.998852507726;

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
    msg.setTimeStamp(0.418655977747);
    msg.setSource(26145U);
    msg.setSourceEntity(236U);
    msg.setDestination(37606U);
    msg.setDestinationEntity(84U);
    msg.address = 2U;
    msg.status = 73U;
    msg.range = 0.0980236669721;

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
    msg.setTimeStamp(0.763763678639);
    msg.setSource(33686U);
    msg.setSourceEntity(8U);
    msg.setDestination(9610U);
    msg.setDestinationEntity(98U);
    msg.address = 56U;
    msg.status = 51U;
    msg.range = 0.937222647108;

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
    msg.setTimeStamp(0.73563667374);
    msg.setSource(31615U);
    msg.setSourceEntity(60U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(47U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.588856000899;
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
    msg.setTimeStamp(0.910376414034);
    msg.setSource(44679U);
    msg.setSourceEntity(51U);
    msg.setDestination(29327U);
    msg.setDestinationEntity(106U);
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 56693U;
    tmp_msg_0.control_ent = 9U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 130U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.196555221956;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 1U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.820669600099;
    tmp_tmp_tmp_msg_0_0_1.z_units = 25U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.585320982199;
    tmp_tmp_msg_0_0.lon = 0.142062280921;
    tmp_tmp_msg_0_0.radius = 0.487127918423;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 104U;
    tmp_msg_0.proximity = 68U;
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
    msg.setTimeStamp(0.926462055926);
    msg.setSource(46301U);
    msg.setSourceEntity(106U);
    msg.setDestination(48560U);
    msg.setDestinationEntity(70U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("GRXWYAXETJIESZCINVOWOZHLWEZENPDQUVNSGUIKIOMHEBRDJDXKKWTPSQVGHWIWVNJCXVVIFRPQMNBRZKRHQCOVXNCZWTSDFOYRN");
    tmp_msg_0.htime = 0.121399279515;
    tmp_msg_0.lat = 0.911882417298;
    tmp_msg_0.lon = 0.490867435192;
    const char tmp_tmp_msg_0_0[] = {-108, 34, -81, 100, -97, 33, 117, 31, 109, -89, 14, 50, -106, -10, -68, 4, -103, 7, 73, -29, -117, -4, -13, -27, -34, -25, 110, 86, 104, -5, -6, 126, -53, 43, 93, 50, -91, 7, -42, 37, -70, 54, -116, -34, 93, -63, -16, -63, 66, -98, -50, 103, -38, 82, -117, -109, -128, -40, -19, 94, -48, 103, 90, 115, -14, -76, 11, -66, 11, -98, 54, -60, -79, 87, 99, -89, 109, -57, -73, -30, 46, 109, 104, -16, -119, 23, -10, -33, 106, -13, 99, 111, -97, 76, -53, -86, -35, 71, -108, -57, -81, -55, 68, 110, -71, -52, -55, 14, -3, -110, 125, 90, 103, -31, -123, -48, -115, -114, 117, 91, 17, 29, 114, 48, 54, -43, 101, 118, 66, 25, -110, 104, 92, -59, -100, 32, -5, -107, 42, -84, -64, 62, -110, -58, -22, 110, 65, -32, -64, -60, 104, 38, 18, 32, -94, -110, -116, 34, 19, 47, 86, 65, -60, -79, -36, -128, 52, 42, -79, -25, 13, -104, -80, 64, 124, 83, 52, -26, -116, -109};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.567707970193);
    msg.setSource(12583U);
    msg.setSourceEntity(40U);
    msg.setDestination(40453U);
    msg.setDestinationEntity(191U);
    msg.enable = 103U;

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
    msg.setTimeStamp(0.949790943735);
    msg.setSource(19605U);
    msg.setSourceEntity(96U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(151U);
    msg.enable = 16U;

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
    msg.setTimeStamp(0.32044796893);
    msg.setSource(27304U);
    msg.setSourceEntity(153U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(217U);
    msg.enable = 82U;

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
    msg.setTimeStamp(0.77691265982);
    msg.setSource(26299U);
    msg.setSourceEntity(23U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(39U);
    msg.summary = 147U;
    msg.level = 13U;

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
    msg.setTimeStamp(0.844244540063);
    msg.setSource(26787U);
    msg.setSourceEntity(2U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(196U);
    msg.summary = 244U;
    msg.level = 143U;

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
    msg.setTimeStamp(0.222588369856);
    msg.setSource(31462U);
    msg.setSourceEntity(246U);
    msg.setDestination(37743U);
    msg.setDestinationEntity(147U);
    msg.summary = 138U;
    msg.level = 235U;

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
    msg.setTimeStamp(0.995860997876);
    msg.setSource(10702U);
    msg.setSourceEntity(35U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.776617608832);
    msg.setSource(43454U);
    msg.setSourceEntity(139U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.870343161025);
    msg.setSource(54677U);
    msg.setSourceEntity(86U);
    msg.setDestination(30431U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.249623925888);
    msg.setSource(11711U);
    msg.setSourceEntity(23U);
    msg.setDestination(6273U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.392762166572);
    msg.setSource(55135U);
    msg.setSourceEntity(243U);
    msg.setDestination(45457U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.963838460682);
    msg.setSource(18032U);
    msg.setSourceEntity(125U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.197288622614);
    msg.setSource(32745U);
    msg.setSourceEntity(49U);
    msg.setDestination(38616U);
    msg.setDestinationEntity(157U);
    msg.op = 109U;
    msg.system.assign("BLJGMHIXYLKNIJLNHRMMOUBBSHNJGMCCQYVDHEZPOJGTWXVRVEXAUMZZPQQBKXQZDFTKTPCECYGSAWRHREKDNJGTFFXIEKHSOSRWIFXTLPUHNSLAIKJBDDQHQDTAHPPSWSBUQAPYOGNQZCAIYEJWDKWZMCBIVXZLJISMDMQULBBNUYYUVEMVYFUKKTPGQSCVOIFZAGLFOYNMEOTIYPOSZLNOXLRRFGXJVAEEWRGXAVFPDNTCZCWROAKVTFRW");
    msg.range = 0.181097128104;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 21738U;
    tmp_msg_0.control_ent = 43U;
    tmp_msg_0.timeout = 0.0662371801256;
    tmp_msg_0.loiter_radius = 0.546307896602;
    tmp_msg_0.altitude_interval = 0.946504804749;
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
    msg.setTimeStamp(0.069646164178);
    msg.setSource(15662U);
    msg.setSourceEntity(21U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(83U);
    msg.op = 0U;
    msg.system.assign("YYSEQHEQKWUWLZGRPEHKXIUONXTAOLYULTAEMUFQFFHWCBJAQXWNLBIBDPFNSZIUMXISPOOXCLYZXQCIRQCSMRUEHKLJAPTRSUOFHRRTMVFDFMDGDSBVBPAVHLHSQVLLJUGTAXJZIAGDRGOMGFBZOUMKFEOQTKBQBHWIJNDGXTAKJYCWIPAKLVCTSNOXYZXQROGNJFDKWIKSVTMWHEVZRNJGGCMZBSYJPDNJMCDVHINWYACDKUPPZB");
    msg.range = 0.896172115806;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 230U;
    tmp_msg_0.speed = 37784U;
    const char tmp_tmp_msg_0_0[] = {-44, -30, 11, 22, 112, -75, 36, -99, 107, 52, 11, -75, -24, 24, -17, 63, -125, -116, 56, 74, 31, 17, -89, -28, -84, -45, -116, -94, 124, 27, -32, 112, -92, -19, 57, -28, 62, 117, 16, 34, -34, 84, 71, -39, 31, -1, -73, 0, 82, 29, 10, 2, -34, -49, -18, -20, 81, -44, 74, -50, 31, 90, -95, -128, -54, -61, -86, -128, 15, -3, 78, -47, 31, 15, -5, 95, 123, -20, 69, 29, 61, -79, -23, -32, 10, 64, 46, -58, 31, -20, -77, 41, 45, 47, -40, 68, 55, -104, -88, -3, -104, -47, 2, -126, 16, 64, 26, 98, -110, -97, -37, -13, -102, 3};
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
    msg.setTimeStamp(0.976053655879);
    msg.setSource(35958U);
    msg.setSourceEntity(42U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(17U);
    msg.op = 24U;
    msg.system.assign("PLTOWBQPXUUWAJHRUQXQECDEYSLSCMBZLANIFCDOOMEIPEJVBNDAMFSJNYGJPARLTHHLFDENRNBNISVVBUDNOYNSYMIIWGHKBRCGXRLDYGAFPCOYUEIZGEZUTOCPVXZIZSZMKFGWFTQHZUTZHXPWSDPJJXLUGPTXCRQJXUMRLCRHVQAVADPOKJVRVQOAHKRBGKIFWHCK");
    msg.range = 0.218479164493;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 27U;
    tmp_msg_0.time_remain = 0.488159192236;
    tmp_msg_0.sched_time = 0.675049217565;
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
    msg.setTimeStamp(0.98817128953);
    msg.setSource(3833U);
    msg.setSourceEntity(30U);
    msg.setDestination(24521U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.654621788044);
    msg.setSource(32408U);
    msg.setSourceEntity(80U);
    msg.setDestination(63325U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.823848599559);
    msg.setSource(30746U);
    msg.setSourceEntity(174U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.710000140638);
    msg.setSource(63456U);
    msg.setSourceEntity(183U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(173U);
    msg.list.assign("KBRCERPKIFKRLQQCVUAMQDGJFSSQFNGAELXWGBWSUOPVVRRFXXJOMAHRIRBENVLNKIHZFCELAFHOCSBMBNCJIIQZJDHILTDPYMWEHWSPZAOZGCQGHCNDBUWGUPF");

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
    msg.setTimeStamp(0.902203491739);
    msg.setSource(15673U);
    msg.setSourceEntity(156U);
    msg.setDestination(35672U);
    msg.setDestinationEntity(200U);
    msg.list.assign("SZZSETNERCDYFJVLUJVHURCVVAPOSXKOLTMMSABFGBYNQQUPFMXZUYKLDWJDIJZZHSPBGVQQKFUBCVAILWPFDMJNKCYNZHBKCZSYIENWHMXRQQXCASPNOTYOEOHCWUOXVORRGDADTT");

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
    msg.setTimeStamp(0.875351311793);
    msg.setSource(8340U);
    msg.setSourceEntity(190U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(213U);
    msg.list.assign("FNYMZJLGVOWJSKQCFWTYPCAFLLTUNHSZJOZPDLPKCXOUUPZMOHC");

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
    msg.setTimeStamp(0.396088280817);
    msg.setSource(14023U);
    msg.setSourceEntity(110U);
    msg.setDestination(32991U);
    msg.setDestinationEntity(75U);
    msg.value = 6327;

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
    msg.setTimeStamp(0.561286109031);
    msg.setSource(23173U);
    msg.setSourceEntity(117U);
    msg.setDestination(26070U);
    msg.setDestinationEntity(124U);
    msg.value = 9671;

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
    msg.setTimeStamp(0.652878709229);
    msg.setSource(41469U);
    msg.setSourceEntity(163U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(7U);
    msg.value = -30956;

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
    msg.setTimeStamp(0.550566165709);
    msg.setSource(26337U);
    msg.setSourceEntity(24U);
    msg.setDestination(29562U);
    msg.setDestinationEntity(97U);
    msg.value = 0.258945953308;

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
    msg.setTimeStamp(0.993240169601);
    msg.setSource(39021U);
    msg.setSourceEntity(62U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(32U);
    msg.value = 0.180307162523;

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
    msg.setTimeStamp(0.440055875221);
    msg.setSource(54214U);
    msg.setSourceEntity(55U);
    msg.setDestination(21627U);
    msg.setDestinationEntity(66U);
    msg.value = 0.000837727837874;

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
    msg.setTimeStamp(0.138167121631);
    msg.setSource(325U);
    msg.setSourceEntity(101U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(191U);
    msg.value = 0.452170269271;

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
    msg.setTimeStamp(0.389026743188);
    msg.setSource(14599U);
    msg.setSourceEntity(17U);
    msg.setDestination(1265U);
    msg.setDestinationEntity(167U);
    msg.value = 0.466713964611;

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
    msg.setTimeStamp(0.398705032731);
    msg.setSource(38720U);
    msg.setSourceEntity(252U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(207U);
    msg.value = 0.292779772827;

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
    msg.setTimeStamp(0.975432210742);
    msg.setSource(13361U);
    msg.setSourceEntity(188U);
    msg.setDestination(6657U);
    msg.setDestinationEntity(208U);
    msg.validity = 44406U;
    msg.type = 111U;
    msg.utc_year = 16446U;
    msg.utc_month = 90U;
    msg.utc_day = 145U;
    msg.utc_time = 0.728779103925;
    msg.lat = 0.183534499022;
    msg.lon = 0.599717639659;
    msg.height = 0.0739499281145;
    msg.satellites = 124U;
    msg.cog = 0.9695279127;
    msg.sog = 0.719603220321;
    msg.hdop = 0.489609713072;
    msg.vdop = 0.16388934081;
    msg.hacc = 0.16210410157;
    msg.vacc = 0.897071045095;

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
    msg.setTimeStamp(0.0657306054639);
    msg.setSource(33870U);
    msg.setSourceEntity(23U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(129U);
    msg.validity = 22566U;
    msg.type = 180U;
    msg.utc_year = 28709U;
    msg.utc_month = 224U;
    msg.utc_day = 137U;
    msg.utc_time = 0.893335026835;
    msg.lat = 0.645557739577;
    msg.lon = 0.64247940089;
    msg.height = 0.991497169065;
    msg.satellites = 217U;
    msg.cog = 0.678539860647;
    msg.sog = 0.815725929664;
    msg.hdop = 0.72929502286;
    msg.vdop = 0.337635525726;
    msg.hacc = 0.874364852571;
    msg.vacc = 0.251854100284;

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
    msg.setTimeStamp(0.559715841178);
    msg.setSource(36708U);
    msg.setSourceEntity(53U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(245U);
    msg.validity = 55292U;
    msg.type = 134U;
    msg.utc_year = 10450U;
    msg.utc_month = 31U;
    msg.utc_day = 55U;
    msg.utc_time = 0.147910446413;
    msg.lat = 0.807464448786;
    msg.lon = 0.624492301496;
    msg.height = 0.421183595802;
    msg.satellites = 127U;
    msg.cog = 0.654955193937;
    msg.sog = 0.0341480121494;
    msg.hdop = 0.230628784024;
    msg.vdop = 0.391938025437;
    msg.hacc = 0.88581520144;
    msg.vacc = 0.545489103995;

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
    msg.setTimeStamp(0.688180196474);
    msg.setSource(5491U);
    msg.setSourceEntity(6U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(106U);
    msg.time = 0.396105307657;
    msg.phi = 0.264457366529;
    msg.theta = 0.367292041108;
    msg.psi = 0.209666537884;
    msg.psi_magnetic = 0.57428919997;

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
    msg.setTimeStamp(0.316125941515);
    msg.setSource(25721U);
    msg.setSourceEntity(143U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(243U);
    msg.time = 0.983053554402;
    msg.phi = 0.226954198396;
    msg.theta = 0.671182642982;
    msg.psi = 0.919550555708;
    msg.psi_magnetic = 0.18245210725;

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
    msg.setTimeStamp(0.857594246494);
    msg.setSource(33648U);
    msg.setSourceEntity(224U);
    msg.setDestination(28986U);
    msg.setDestinationEntity(166U);
    msg.time = 0.648728341035;
    msg.phi = 0.930252559284;
    msg.theta = 0.727892468611;
    msg.psi = 0.220562009436;
    msg.psi_magnetic = 0.80036153375;

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
    msg.setTimeStamp(0.0238068511515);
    msg.setSource(20379U);
    msg.setSourceEntity(184U);
    msg.setDestination(55061U);
    msg.setDestinationEntity(151U);
    msg.time = 0.221845471109;
    msg.x = 0.612980192414;
    msg.y = 0.520043872094;
    msg.z = 0.152298012555;
    msg.timestep = 0.818412398067;

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
    msg.setTimeStamp(0.866318727111);
    msg.setSource(26291U);
    msg.setSourceEntity(89U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(202U);
    msg.time = 0.334739368523;
    msg.x = 0.218729120529;
    msg.y = 0.562714450305;
    msg.z = 0.465830760275;
    msg.timestep = 0.7645610031;

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
    msg.setTimeStamp(0.927333805836);
    msg.setSource(33567U);
    msg.setSourceEntity(45U);
    msg.setDestination(9053U);
    msg.setDestinationEntity(165U);
    msg.time = 0.908197174939;
    msg.x = 0.362371220269;
    msg.y = 0.522522311711;
    msg.z = 0.507207653021;
    msg.timestep = 0.832599931343;

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
    msg.setTimeStamp(0.446409233349);
    msg.setSource(28280U);
    msg.setSourceEntity(236U);
    msg.setDestination(16793U);
    msg.setDestinationEntity(219U);
    msg.time = 0.849716322258;
    msg.x = 0.00820337744874;
    msg.y = 0.485525163975;
    msg.z = 0.484178709012;

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
    msg.setTimeStamp(0.384025145069);
    msg.setSource(40649U);
    msg.setSourceEntity(78U);
    msg.setDestination(56518U);
    msg.setDestinationEntity(23U);
    msg.time = 0.262778259317;
    msg.x = 0.904662063972;
    msg.y = 0.133543020979;
    msg.z = 0.812285928787;

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
    msg.setTimeStamp(0.167336196782);
    msg.setSource(45924U);
    msg.setSourceEntity(60U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(195U);
    msg.time = 0.00414276362994;
    msg.x = 0.485885792105;
    msg.y = 0.327059894268;
    msg.z = 0.161237896098;

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
    msg.setTimeStamp(0.120684032806);
    msg.setSource(47955U);
    msg.setSourceEntity(66U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(136U);
    msg.time = 0.332688635846;
    msg.x = 0.809414524017;
    msg.y = 0.305415842516;
    msg.z = 0.83311138896;

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
    msg.setTimeStamp(0.473430586385);
    msg.setSource(57848U);
    msg.setSourceEntity(224U);
    msg.setDestination(63677U);
    msg.setDestinationEntity(246U);
    msg.time = 0.107322683167;
    msg.x = 0.00198410953543;
    msg.y = 0.139498674055;
    msg.z = 0.101184461228;

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
    msg.setTimeStamp(0.0322417559373);
    msg.setSource(5510U);
    msg.setSourceEntity(168U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(39U);
    msg.time = 0.932442716329;
    msg.x = 0.846681578012;
    msg.y = 0.344619088332;
    msg.z = 0.549818019311;

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
    msg.setTimeStamp(0.0726273439088);
    msg.setSource(11543U);
    msg.setSourceEntity(237U);
    msg.setDestination(41298U);
    msg.setDestinationEntity(164U);
    msg.time = 0.597649323532;
    msg.x = 0.38601065923;
    msg.y = 0.879009693328;
    msg.z = 0.802818520984;

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
    msg.setTimeStamp(0.832662297267);
    msg.setSource(2198U);
    msg.setSourceEntity(77U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(135U);
    msg.time = 0.0170317553157;
    msg.x = 0.58432751284;
    msg.y = 0.28317663093;
    msg.z = 0.27163491504;

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
    msg.setTimeStamp(0.0215716425547);
    msg.setSource(53756U);
    msg.setSourceEntity(150U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(195U);
    msg.time = 0.370907888816;
    msg.x = 0.520085567292;
    msg.y = 0.824378053195;
    msg.z = 0.128306910447;

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
    msg.setTimeStamp(0.691551383285);
    msg.setSource(3359U);
    msg.setSourceEntity(70U);
    msg.setDestination(63158U);
    msg.setDestinationEntity(10U);
    msg.validity = 196U;
    msg.x = 0.953370637365;
    msg.y = 0.487524592038;
    msg.z = 0.32056722906;

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
    msg.setTimeStamp(0.367846623527);
    msg.setSource(58446U);
    msg.setSourceEntity(139U);
    msg.setDestination(6469U);
    msg.setDestinationEntity(131U);
    msg.validity = 232U;
    msg.x = 0.606117228013;
    msg.y = 0.825366801437;
    msg.z = 0.146889115648;

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
    msg.setTimeStamp(0.383186709436);
    msg.setSource(3613U);
    msg.setSourceEntity(164U);
    msg.setDestination(34505U);
    msg.setDestinationEntity(185U);
    msg.validity = 192U;
    msg.x = 0.426112414408;
    msg.y = 0.953606196392;
    msg.z = 0.404457221746;

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
    msg.setTimeStamp(0.96001654182);
    msg.setSource(35658U);
    msg.setSourceEntity(250U);
    msg.setDestination(2094U);
    msg.setDestinationEntity(172U);
    msg.validity = 60U;
    msg.x = 0.92254755407;
    msg.y = 0.165198041321;
    msg.z = 0.542948240188;

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
    msg.setTimeStamp(0.931813538269);
    msg.setSource(39255U);
    msg.setSourceEntity(52U);
    msg.setDestination(59156U);
    msg.setDestinationEntity(222U);
    msg.validity = 209U;
    msg.x = 0.74981571097;
    msg.y = 0.701166133213;
    msg.z = 0.152232420339;

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
    msg.setTimeStamp(0.667942955278);
    msg.setSource(42089U);
    msg.setSourceEntity(37U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(202U);
    msg.validity = 14U;
    msg.x = 0.498353025983;
    msg.y = 0.395573089827;
    msg.z = 0.0815071715379;

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
    msg.setTimeStamp(0.866989634749);
    msg.setSource(61732U);
    msg.setSourceEntity(77U);
    msg.setDestination(58480U);
    msg.setDestinationEntity(189U);
    msg.time = 0.725800715184;
    msg.x = 0.888553665817;
    msg.y = 0.160423758689;
    msg.z = 0.571371332146;

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
    msg.setTimeStamp(0.206697568573);
    msg.setSource(19042U);
    msg.setSourceEntity(96U);
    msg.setDestination(50574U);
    msg.setDestinationEntity(76U);
    msg.time = 0.376229211197;
    msg.x = 0.677014153688;
    msg.y = 0.0204096914252;
    msg.z = 0.680236041782;

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
    msg.setTimeStamp(0.707000479582);
    msg.setSource(7889U);
    msg.setSourceEntity(212U);
    msg.setDestination(12672U);
    msg.setDestinationEntity(2U);
    msg.time = 0.999179437052;
    msg.x = 0.184833197348;
    msg.y = 0.204614983403;
    msg.z = 0.94735780305;

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
    msg.setTimeStamp(0.842397804466);
    msg.setSource(48812U);
    msg.setSourceEntity(180U);
    msg.setDestination(14780U);
    msg.setDestinationEntity(3U);
    msg.validity = 91U;
    msg.value = 0.666856150568;

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
    msg.setTimeStamp(0.871738314458);
    msg.setSource(22230U);
    msg.setSourceEntity(83U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(229U);
    msg.validity = 105U;
    msg.value = 0.225331648228;

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
    msg.setTimeStamp(0.193929433104);
    msg.setSource(60336U);
    msg.setSourceEntity(2U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(55U);
    msg.validity = 30U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.166528151448;
    tmp_msg_0.y = 0.469441912328;
    tmp_msg_0.z = 0.870339000622;
    tmp_msg_0.phi = 0.588594664166;
    tmp_msg_0.theta = 0.278253845591;
    tmp_msg_0.psi = 0.859249357441;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.529145294112;
    tmp_msg_1.beam_height = 0.550519314183;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.742730620577;

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
    msg.setTimeStamp(0.752134972738);
    msg.setSource(56388U);
    msg.setSourceEntity(251U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(77U);
    msg.value = 0.00542482525731;

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
    msg.setTimeStamp(0.524027423495);
    msg.setSource(10785U);
    msg.setSourceEntity(92U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(27U);
    msg.value = 0.250711895495;

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
    msg.setTimeStamp(0.584988927688);
    msg.setSource(5255U);
    msg.setSourceEntity(87U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(58U);
    msg.value = 0.691665073327;

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
    msg.setTimeStamp(0.131798069687);
    msg.setSource(50790U);
    msg.setSourceEntity(142U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(12U);
    msg.value = 0.381918036033;

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
    msg.setTimeStamp(0.814593663299);
    msg.setSource(54339U);
    msg.setSourceEntity(125U);
    msg.setDestination(62258U);
    msg.setDestinationEntity(239U);
    msg.value = 0.134950986437;

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
    msg.setTimeStamp(0.352902949324);
    msg.setSource(28023U);
    msg.setSourceEntity(41U);
    msg.setDestination(5417U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0753679539394;

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
    msg.setTimeStamp(0.435696873546);
    msg.setSource(36904U);
    msg.setSourceEntity(70U);
    msg.setDestination(2077U);
    msg.setDestinationEntity(226U);
    msg.value = 0.684505683428;

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
    msg.setTimeStamp(0.172468876074);
    msg.setSource(48102U);
    msg.setSourceEntity(77U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(211U);
    msg.value = 0.703458670034;

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
    msg.setTimeStamp(0.16706566464);
    msg.setSource(10825U);
    msg.setSourceEntity(143U);
    msg.setDestination(903U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0920626589624;

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
    msg.setTimeStamp(0.636769533513);
    msg.setSource(52325U);
    msg.setSourceEntity(249U);
    msg.setDestination(38445U);
    msg.setDestinationEntity(7U);
    msg.value = 0.303696665972;

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
    msg.setTimeStamp(0.691075129642);
    msg.setSource(35543U);
    msg.setSourceEntity(173U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(193U);
    msg.value = 0.888456353289;

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
    msg.setTimeStamp(0.578225052402);
    msg.setSource(42105U);
    msg.setSourceEntity(166U);
    msg.setDestination(28748U);
    msg.setDestinationEntity(215U);
    msg.value = 0.344189981872;

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
    msg.setTimeStamp(0.448203104091);
    msg.setSource(50215U);
    msg.setSourceEntity(41U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(73U);
    msg.value = 0.695499614744;

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
    msg.setTimeStamp(0.85429113906);
    msg.setSource(58014U);
    msg.setSourceEntity(67U);
    msg.setDestination(52681U);
    msg.setDestinationEntity(58U);
    msg.value = 0.343119539928;

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
    msg.setTimeStamp(0.523329204451);
    msg.setSource(30975U);
    msg.setSourceEntity(131U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(95U);
    msg.value = 0.707358226637;

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
    msg.setTimeStamp(0.615577118886);
    msg.setSource(29609U);
    msg.setSourceEntity(43U);
    msg.setDestination(11183U);
    msg.setDestinationEntity(216U);
    msg.value = 0.416734246948;

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
    msg.setTimeStamp(0.832774513626);
    msg.setSource(61378U);
    msg.setSourceEntity(184U);
    msg.setDestination(12122U);
    msg.setDestinationEntity(157U);
    msg.value = 0.767614196503;

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
    msg.setTimeStamp(0.867007212213);
    msg.setSource(30114U);
    msg.setSourceEntity(196U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0567899958252;

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
    msg.setTimeStamp(0.963461405166);
    msg.setSource(43600U);
    msg.setSourceEntity(189U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(155U);
    msg.value = 0.507356310693;

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
    msg.setTimeStamp(0.724897885613);
    msg.setSource(37536U);
    msg.setSourceEntity(23U);
    msg.setDestination(2762U);
    msg.setDestinationEntity(81U);
    msg.value = 0.649933867322;

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
    msg.setTimeStamp(0.207362238647);
    msg.setSource(9034U);
    msg.setSourceEntity(53U);
    msg.setDestination(48128U);
    msg.setDestinationEntity(33U);
    msg.value = 0.310889771845;

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
    msg.setTimeStamp(0.64642338579);
    msg.setSource(55865U);
    msg.setSourceEntity(166U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(131U);
    msg.value = 0.431268130931;

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
    msg.setTimeStamp(0.491830101816);
    msg.setSource(62715U);
    msg.setSourceEntity(3U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(124U);
    msg.value = 0.69217428661;

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
    msg.setTimeStamp(0.959939102733);
    msg.setSource(63267U);
    msg.setSourceEntity(121U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(97U);
    msg.value = 0.227906413068;

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
    msg.setTimeStamp(0.651644924981);
    msg.setSource(29207U);
    msg.setSourceEntity(237U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.686992941515;
    msg.speed = 0.682360005086;
    msg.turbulence = 0.385849662593;

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
    msg.setTimeStamp(0.245607676915);
    msg.setSource(38945U);
    msg.setSourceEntity(208U);
    msg.setDestination(42979U);
    msg.setDestinationEntity(224U);
    msg.direction = 0.153987212933;
    msg.speed = 0.990920058461;
    msg.turbulence = 0.807058597026;

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
    msg.setTimeStamp(0.482822345599);
    msg.setSource(8749U);
    msg.setSourceEntity(185U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(48U);
    msg.direction = 0.428641058943;
    msg.speed = 0.0759127499622;
    msg.turbulence = 0.0520500542503;

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
    msg.setTimeStamp(0.810450463967);
    msg.setSource(42098U);
    msg.setSourceEntity(220U);
    msg.setDestination(29344U);
    msg.setDestinationEntity(55U);
    msg.value = 0.932010909696;

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
    msg.setTimeStamp(0.922729132671);
    msg.setSource(54351U);
    msg.setSourceEntity(103U);
    msg.setDestination(26305U);
    msg.setDestinationEntity(200U);
    msg.value = 0.130787555907;

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
    msg.setTimeStamp(0.399118446091);
    msg.setSource(37049U);
    msg.setSourceEntity(66U);
    msg.setDestination(25389U);
    msg.setDestinationEntity(223U);
    msg.value = 0.302052198405;

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
    msg.setTimeStamp(0.280046968623);
    msg.setSource(64715U);
    msg.setSourceEntity(17U);
    msg.setDestination(20455U);
    msg.setDestinationEntity(140U);
    msg.value.assign("FEGDWXNWUUTXJHUGCSVZTXDTWAXHELRTTWGBEIMNAGPPVQIBLCODQRYRPTYZBKLVMBFQSIMOZSZZFMIVUOLKQSEOVMRJIWUWLSJLKBMBFHYHJDLCGYTEJOJREOOQCVYXDAFWSLZIQKGKIUDSKJ");

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
    msg.setTimeStamp(0.0907518585069);
    msg.setSource(30644U);
    msg.setSourceEntity(64U);
    msg.setDestination(12773U);
    msg.setDestinationEntity(207U);
    msg.value.assign("ERDXJIKCVZRXIBFNRWANSPCOMKWYLVONUXBDJNQBVVFGFTQTELBVWOTYLGJFXKURLUQYUUHMWUTMHYPTECCEGNUXTMPRPYFQWLJNINAEKAZIHISPALRKWWOPRSVTIQZFSFHCHLTEOMEHDXTUAOHZDCGGNXDBJKYZXENSXRVCIMASFOVPIGMDCGRGBCKUHSDYJDRDKJJQOALYHQBOZZSBXSJGWPQOAAAPYFWLZYHZGQLMMTBCQWJBFDMENIV");

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
    msg.setTimeStamp(0.901996533853);
    msg.setSource(3521U);
    msg.setSourceEntity(191U);
    msg.setDestination(26226U);
    msg.setDestinationEntity(93U);
    msg.value.assign("EMUPGPAVUBGRHXQSLNSDXZSAVJYNKISACFUZUAIKSJHXVIWFPZQRXRFVVYOTWXYCELOBOVWXBLMAVEZSOMWKWYNNDBLFFMUGGHKEJGYDWGKDLPGETDHYKJRRSJFDIHOKTQEUTSQTTSQENQJMCUWIPARLDFNNKYIXRCHXUDVZLLPGLBOMCJINWHZANIRCWDXAQBJTU");

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
    msg.setTimeStamp(0.480169288256);
    msg.setSource(30046U);
    msg.setSourceEntity(155U);
    msg.setDestination(41202U);
    msg.setDestinationEntity(127U);
    const char tmp_msg_0[] = {-99, 106, -41, -120, -110, 29, 29, -9, 106, 55, 105, 23, -120, -13, -16, 97, 20, -88, -13, 81, -8, 121, -122, 43, -99, 25, 12, 15, 114, 86, 37, -14, -88, -83, 35, 17, 122, 25, 92, -120, -9, -8, 90, 42, 12, -58, -111, 25, 84, 24, -44, -56, -23, -123, 124, -68, -78, 31, -22, -43, -67, -7, 122, 2, 86, 38, -114, 58, -62, 7, -79, 44, -43, 125, 39, -7, -70, 95, -34, 37, -20, -113, -25, -121, 48, 116, -31, -94, 81, -105, -76, -26, -70, 14, 89, 22, -117, 81, 60, -75, 57, -45, 100, 70, 108, 46, 69, 37, -63, 6, 33, 61, -116};
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
    msg.setTimeStamp(0.182760131151);
    msg.setSource(25417U);
    msg.setSourceEntity(40U);
    msg.setDestination(61553U);
    msg.setDestinationEntity(212U);
    const char tmp_msg_0[] = {33, -56, -36, -3, 89, 40, 99, 73, -112, -44, 27, 87, -21, 5, -60, -22, 115, -2, -6, -66, -98, 121, 77, 24, -3, 123, 88, -38, -113, -113, 72, 25, 8, 61, 55, 2, 51, -51, 116, 8, -127, 33, 63, -58, 12, 68, -100, 82, 87, -121, 3, -47, 50, 31, 6, 23, 106, -54, -124, 42, -33, 31, -39, -22, 100, 41, 82, 119, -56, -73, 66, -79, 120, -20, -81, -123, 114, -62, 33, -89, 57, 88, -96, 81, -82, 42, -92, -116, -128, -102, 59, 50, -121, -84, -115, -22, 87, 82, 23, -76, 60, 126, -82, -6, -120, 70, -70, -4, -25, 23, -69, -34, -71, -65, 10, 36, 73, 97, 25, -122, 38, 22, 99, -90, 34, -29, 61, -17, 19, 115, 118, -126, 119, 50, 125, 2, -33, 66, -112, 98};
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
    msg.setTimeStamp(0.328857109603);
    msg.setSource(1609U);
    msg.setSourceEntity(162U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(32U);
    const char tmp_msg_0[] = {122, 13, 20, 22, -127, -54, 96, -81, -52, 76, -119, -2, 68, 79, 22, -9, -3, -108, 109, 73, 5, 37, -49, 50, 59, 75, 84, 35, 5, -115, -122, -39, 28, 92, -65, 94, -108, -12, 99, -22, -44, -6, 122, -52, -59, 84, 17, 106, -124, -15, -51, -7, -82, 66, 22, 8, 26, -26, -89, -72, 34, 3, -36, -6, -75, -19, 27, 63, -85, 6, -128, 26, -127, -60, -110, -17, 12, -46, -78, -4, -57, 11, -126, -107, 18, -28, -125, 5, -113, -41, 17, 79, -88, 8, -121, 18, 105, -70, 75, -75, 41, 7, 100, 89, 75, -46, 16, 92, 24, 17, 20, -79, -128, -104, 116, 60, 49, 5, -69, -66, 81, 26, -5, 125, 29, 15, 42, -72, 19, -3, -58, 27, -43, -48, 88, -102, 120, -62, 52, 58, 16, -49, 60, 57, -126, 9, -64, 93, 71, 101, -113, 47, -114, 78, -111, 107, 19, 89, 93, -80, 86, -84, 10, 105, 29, 14, -87, 34, 94, 56, -112, -27, -88, 80, 69, -120, 16, -128, -118, -113, 61, 116, -80, 90, -3, 57, -82, 30, 40, -95, -6, 117, 118, 99, 102, 107, 30, 81, -84, 59};
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
    msg.setTimeStamp(0.302042944999);
    msg.setSource(53014U);
    msg.setSourceEntity(45U);
    msg.setDestination(987U);
    msg.setDestinationEntity(106U);
    msg.frequency = 744239297U;
    msg.min_range = 12989U;
    msg.max_range = 51021U;

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
    msg.setTimeStamp(0.81615365926);
    msg.setSource(40590U);
    msg.setSourceEntity(108U);
    msg.setDestination(22406U);
    msg.setDestinationEntity(237U);
    msg.frequency = 2359238207U;
    msg.min_range = 56139U;
    msg.max_range = 48403U;

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
    msg.setTimeStamp(0.811333052591);
    msg.setSource(12798U);
    msg.setSourceEntity(72U);
    msg.setDestination(3383U);
    msg.setDestinationEntity(60U);
    msg.frequency = 1599960081U;
    msg.min_range = 2230U;
    msg.max_range = 18354U;

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
    msg.setTimeStamp(0.519758638528);
    msg.setSource(10123U);
    msg.setSourceEntity(230U);
    msg.setDestination(32077U);
    msg.setDestinationEntity(30U);
    msg.type = 21U;
    msg.frequency = 2479391938U;
    msg.min_range = 54182U;
    msg.max_range = 29842U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.298366435104;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.303846853663;
    tmp_msg_0.beam_height = 0.119145163598;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {101, 104, 76, 105, 103, -126, 61, -91, -48, 1, -14, -70, -93, -105, -81, -67, 26, -15, 2, 32, 58, -47, -59, 4, 35, 15, 104, 53, -36, -68, 99, -98, 80, -7, -112, -63, -28, -38, -112, -23, -47, 97, 105, 36, -108, -81, 115, 119, 73, 61, 93, 30, 74, -76, 69, -83, 64, -15, -113, -42, 8, 96, -6, 103, -64, -100, -35, 107, 12, 76, 26, 75, -28, -111, -101, 126, -123, -72, -79, 98, -57, -94, -85, 30, -20, -102, -14, 76, -25, -60, -115, 21, -108, 91, -102, -64, -75, 51, 78, -23, -14, -92, -105, 42, -41, -116, -52, -85, -93, 92, 59, -123, -94, 22, 43, -6, 12, -83, -116, 42, 72, 29, -91, 96, 22, 67, 76, -70, 33, 90, -57, -60, -38, 50, -61, 126, -109, 21, 114, -111, -19, -52, 20, -17, 75, -16, -69, -8, 85, -31, -91, 12, -13, -126, -66, 121, -83};
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
    msg.setTimeStamp(0.774337712039);
    msg.setSource(39144U);
    msg.setSourceEntity(248U);
    msg.setDestination(4873U);
    msg.setDestinationEntity(251U);
    msg.type = 152U;
    msg.frequency = 608087237U;
    msg.min_range = 37480U;
    msg.max_range = 8858U;
    msg.bits_per_point = 175U;
    msg.scale_factor = 0.117536372406;
    const char tmp_msg_0[] = {-99, 91, -1, 82, -78, -103, 29, -91, 62, -68, -6, 104, -12, -71, -89, -29, -42, -112, -41, 70, 113, -51, -12, 69, -90, -126, -65, 90, 3, 9, 28, 63, 47, 33, 82, -103, -91, 10, 6, -80, -16, 103, 57, 107, -19, -45, 4, 52, -115, -42, -82, 91, 111, -44, -119, 52, -108, -8, -101, -113, -90, 91, -62, -63, 62, 75, -121, 45, -8, 48, -87, 29, -108, -9, 37, 46, -18, 117, -53, 12, -33, 40, 69, 38, 38, -18, -39, 61, -69, 48, 62, 41, 32, -110, 126, -44, 62, 114, -97, -51, 124, 117, -127, -69, -28, 83, 70, 76, -51, -90, 84, -81, -92, -71, -92, 30, 18, -93, 118, -47, 9, 79, 122, 42, 110, -63, 41, 123, -8, -23, -9, -49, -124, -103, 74, -70, -91, -16, 69, 24, -63, -97, -90, 119, 100, 103, 65, 30, 37, -92, 113, -108, 53, -47, 34, -74, -55, -89, 118, -119, 64, 5, -128, 31, -8, -70, -117, 93, 40, -106, -73, -36, -66, -33, -1, -57, -37, 100, -118, -77, 121, 71, 1, 22, 96, 121, 24, 89, -96, 60, 88, 98};
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
    msg.setTimeStamp(0.867199441608);
    msg.setSource(25300U);
    msg.setSourceEntity(177U);
    msg.setDestination(25172U);
    msg.setDestinationEntity(124U);
    msg.type = 124U;
    msg.frequency = 2323415949U;
    msg.min_range = 33121U;
    msg.max_range = 52323U;
    msg.bits_per_point = 19U;
    msg.scale_factor = 0.112419015752;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.72881786979;
    tmp_msg_0.beam_height = 0.744660714295;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {28, 18, -41, -61, -78, 100, -108, -112, -3, -64, 14, 75, -66, -13, -121, -128, 111, 97, -78, 74, 35, 120, 38, -113, 15, 91, 110, -106, -30, 9, -109, -110, 122, -33, 96, -65, -96, 49, -21, -121, -86, 53, -85, -40, 6, -72, 52, 55, 6, 10, -16, 123, 20, 2, 11, -100, -27, -85, 5, 29, -95, 0, -11, -6, 81, 29, 73, -94, -6, 28, 69, -82, 10, -31, 98, 121, -52, 84, 67, 19, -27, -14, 77, 85, 57, 102, -12, -31, 122, 71, 101, -91, -42, 95, 60, 16, 112, 79, 40, -99, -33, -2, 58, -102};
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
    msg.setTimeStamp(0.841296062769);
    msg.setSource(60635U);
    msg.setSourceEntity(77U);
    msg.setDestination(9449U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.776009259805);
    msg.setSource(9343U);
    msg.setSourceEntity(244U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.622733984879);
    msg.setSource(18936U);
    msg.setSourceEntity(45U);
    msg.setDestination(7831U);
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
    msg.setTimeStamp(0.567761940815);
    msg.setSource(39411U);
    msg.setSourceEntity(135U);
    msg.setDestination(19253U);
    msg.setDestinationEntity(5U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.791623874444);
    msg.setSource(47537U);
    msg.setSourceEntity(99U);
    msg.setDestination(12005U);
    msg.setDestinationEntity(140U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.770148300435);
    msg.setSource(30395U);
    msg.setSourceEntity(142U);
    msg.setDestination(15887U);
    msg.setDestinationEntity(87U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.704449044663);
    msg.setSource(53721U);
    msg.setSourceEntity(192U);
    msg.setDestination(54767U);
    msg.setDestinationEntity(227U);
    msg.value = 0.118729005095;
    msg.confidence = 0.964409857693;
    msg.opmodes.assign("CUMTQMYHWPPBBNCUUJILSJYSFRV");

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
    msg.setTimeStamp(0.478872181505);
    msg.setSource(39984U);
    msg.setSourceEntity(251U);
    msg.setDestination(2439U);
    msg.setDestinationEntity(75U);
    msg.value = 0.778878824405;
    msg.confidence = 0.188549756882;
    msg.opmodes.assign("QMAORCWJGXYEUCQOETNAMHDVOJQCIDMAQVHPWBLNLXEDNCYRXGJPMGRHITPQQWPVWKEZEWGHHCMEVWBXJFDNGUBVZOMLRMGMJFLXSGFSUHKFDABCZTCNQHNOVZUFIAEVXKRCOEPDLSRKXTHYXFXRJPHXTKJJAVZBKUSAGHIGIYFTJDSQRWZAZAINUMYBUNSYIK");

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
    msg.setTimeStamp(0.139386634889);
    msg.setSource(24142U);
    msg.setSourceEntity(154U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(27U);
    msg.value = 0.631700342819;
    msg.confidence = 0.239368980371;
    msg.opmodes.assign("JFEWPYAKMCJSSVLNTEOERMDNXGPEKMSPARQINBAKHSQWHRAMHGZRGTXMKCFQTNOIYDSKBQDLUVRORAHLJBXVBNUBZTOPADUPBYWWLNYGREVZOXFI");

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
    msg.setTimeStamp(0.493631479659);
    msg.setSource(53662U);
    msg.setSourceEntity(198U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(141U);
    msg.itow = 31440858U;
    msg.lat = 0.284457102622;
    msg.lon = 0.103693338353;
    msg.height_ell = 0.57064620859;
    msg.height_sea = 0.490154966839;
    msg.hacc = 0.922815195852;
    msg.vacc = 0.400209502662;
    msg.vel_n = 0.6826745654;
    msg.vel_e = 0.27812381648;
    msg.vel_d = 0.847467886548;
    msg.speed = 0.184179621058;
    msg.gspeed = 0.668332672078;
    msg.heading = 0.736112071058;
    msg.sacc = 0.471956651351;
    msg.cacc = 0.65932501676;

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
    msg.setTimeStamp(0.0465704558864);
    msg.setSource(46272U);
    msg.setSourceEntity(43U);
    msg.setDestination(18848U);
    msg.setDestinationEntity(89U);
    msg.itow = 4050593917U;
    msg.lat = 0.139543340659;
    msg.lon = 0.607207951163;
    msg.height_ell = 0.315027684182;
    msg.height_sea = 0.616884201334;
    msg.hacc = 0.579839456894;
    msg.vacc = 0.173938666;
    msg.vel_n = 0.290748407672;
    msg.vel_e = 0.492088201488;
    msg.vel_d = 0.0527690450764;
    msg.speed = 0.679328483019;
    msg.gspeed = 0.106286603302;
    msg.heading = 0.213787183382;
    msg.sacc = 0.0922149900683;
    msg.cacc = 0.925910861589;

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
    msg.setTimeStamp(0.0514555554144);
    msg.setSource(42371U);
    msg.setSourceEntity(179U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(184U);
    msg.itow = 2859877014U;
    msg.lat = 0.181453791451;
    msg.lon = 0.319166011079;
    msg.height_ell = 0.722335467448;
    msg.height_sea = 0.0765351223466;
    msg.hacc = 0.668028693484;
    msg.vacc = 0.0653144936074;
    msg.vel_n = 0.118944073431;
    msg.vel_e = 0.016932276365;
    msg.vel_d = 0.413238974791;
    msg.speed = 0.836362192579;
    msg.gspeed = 0.204477295114;
    msg.heading = 0.471228138644;
    msg.sacc = 0.227602346963;
    msg.cacc = 0.721960490551;

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
    msg.setTimeStamp(0.364669551939);
    msg.setSource(28570U);
    msg.setSourceEntity(32U);
    msg.setDestination(56990U);
    msg.setDestinationEntity(61U);
    msg.id = 185U;
    msg.value = 0.517886530229;

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
    msg.setTimeStamp(0.967960758999);
    msg.setSource(19970U);
    msg.setSourceEntity(12U);
    msg.setDestination(43764U);
    msg.setDestinationEntity(141U);
    msg.id = 73U;
    msg.value = 0.918322825663;

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
    msg.setTimeStamp(0.190136496216);
    msg.setSource(65214U);
    msg.setSourceEntity(47U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(135U);
    msg.id = 41U;
    msg.value = 0.786928042184;

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
    msg.setTimeStamp(0.383550382348);
    msg.setSource(17225U);
    msg.setSourceEntity(170U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(37U);
    msg.x = 0.955085693922;
    msg.y = 0.111630675438;
    msg.z = 0.582556330962;
    msg.phi = 0.850286147583;
    msg.theta = 0.635010236863;
    msg.psi = 0.125969504924;

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
    msg.setTimeStamp(0.795843870418);
    msg.setSource(50001U);
    msg.setSourceEntity(201U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(158U);
    msg.x = 0.898488937605;
    msg.y = 0.548313777059;
    msg.z = 0.689350926978;
    msg.phi = 0.0784849141165;
    msg.theta = 0.857679846017;
    msg.psi = 0.165167485417;

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
    msg.setTimeStamp(0.50934773885);
    msg.setSource(46899U);
    msg.setSourceEntity(6U);
    msg.setDestination(33280U);
    msg.setDestinationEntity(66U);
    msg.x = 0.12273618999;
    msg.y = 0.481721968407;
    msg.z = 0.664087742524;
    msg.phi = 0.40904727442;
    msg.theta = 0.26377947993;
    msg.psi = 0.347213493046;

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
    msg.setTimeStamp(0.692898718759);
    msg.setSource(48432U);
    msg.setSourceEntity(163U);
    msg.setDestination(58030U);
    msg.setDestinationEntity(147U);
    msg.beam_width = 0.703591921238;
    msg.beam_height = 0.523714250815;

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
    msg.setTimeStamp(0.20731943949);
    msg.setSource(52382U);
    msg.setSourceEntity(181U);
    msg.setDestination(40618U);
    msg.setDestinationEntity(44U);
    msg.beam_width = 0.954628339182;
    msg.beam_height = 0.488746261893;

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
    msg.setTimeStamp(0.0471466589342);
    msg.setSource(36784U);
    msg.setSourceEntity(19U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(50U);
    msg.beam_width = 0.192918939886;
    msg.beam_height = 0.801147958638;

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
    msg.setTimeStamp(0.761598485162);
    msg.setSource(5039U);
    msg.setSourceEntity(38U);
    msg.setDestination(5412U);
    msg.setDestinationEntity(117U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.652346292686);
    msg.setSource(63733U);
    msg.setSourceEntity(250U);
    msg.setDestination(36010U);
    msg.setDestinationEntity(109U);
    msg.sane = 55U;

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
    msg.setTimeStamp(0.0777383593737);
    msg.setSource(37722U);
    msg.setSourceEntity(67U);
    msg.setDestination(47975U);
    msg.setDestinationEntity(113U);
    msg.sane = 137U;

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
    msg.setTimeStamp(0.947144711532);
    msg.setSource(11045U);
    msg.setSourceEntity(25U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(0U);
    msg.id = 81U;
    msg.zoom = 61U;
    msg.action = 147U;

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
    msg.setTimeStamp(0.144929090975);
    msg.setSource(11797U);
    msg.setSourceEntity(18U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(219U);
    msg.id = 246U;
    msg.zoom = 26U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.675479220047);
    msg.setSource(63688U);
    msg.setSourceEntity(98U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(140U);
    msg.id = 239U;
    msg.zoom = 61U;
    msg.action = 128U;

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
    msg.setTimeStamp(0.656773164416);
    msg.setSource(59856U);
    msg.setSourceEntity(129U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(83U);
    msg.id = 186U;
    msg.value = 0.332009486225;

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
    msg.setTimeStamp(0.552830993729);
    msg.setSource(52229U);
    msg.setSourceEntity(113U);
    msg.setDestination(23665U);
    msg.setDestinationEntity(224U);
    msg.id = 133U;
    msg.value = 0.355519496722;

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
    msg.setTimeStamp(0.288535605132);
    msg.setSource(11280U);
    msg.setSourceEntity(139U);
    msg.setDestination(38202U);
    msg.setDestinationEntity(229U);
    msg.id = 29U;
    msg.value = 0.857199814982;

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
    msg.setTimeStamp(0.808563697808);
    msg.setSource(44081U);
    msg.setSourceEntity(76U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(44U);
    msg.id = 36U;
    msg.value = 0.398086383434;

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
    msg.setTimeStamp(0.756340829187);
    msg.setSource(16957U);
    msg.setSourceEntity(201U);
    msg.setDestination(4901U);
    msg.setDestinationEntity(235U);
    msg.id = 173U;
    msg.value = 0.785353115455;

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
    msg.setTimeStamp(0.846719233691);
    msg.setSource(37772U);
    msg.setSourceEntity(82U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(118U);
    msg.id = 208U;
    msg.value = 0.983655201876;

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
    msg.setTimeStamp(0.375784794195);
    msg.setSource(31071U);
    msg.setSourceEntity(80U);
    msg.setDestination(12684U);
    msg.setDestinationEntity(52U);
    msg.id = 182U;
    msg.angle = 0.84070727347;

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
    msg.setTimeStamp(0.602942370013);
    msg.setSource(50421U);
    msg.setSourceEntity(252U);
    msg.setDestination(41444U);
    msg.setDestinationEntity(154U);
    msg.id = 11U;
    msg.angle = 0.482153346433;

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
    msg.setTimeStamp(0.962972466493);
    msg.setSource(54220U);
    msg.setSourceEntity(219U);
    msg.setDestination(55090U);
    msg.setDestinationEntity(122U);
    msg.id = 102U;
    msg.angle = 0.538985151153;

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
    msg.setTimeStamp(0.915953149124);
    msg.setSource(114U);
    msg.setSourceEntity(62U);
    msg.setDestination(3796U);
    msg.setDestinationEntity(139U);
    msg.op = 46U;
    msg.actions.assign("DVEBHNYZLTMVEWNDVBOLAFFNKNBFAZAUHXNOLYWBLZVWJSXCTBVIOHIIUTNSRHCTYGPGOXIRMUIZSJMK");

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
    msg.setTimeStamp(0.400853024371);
    msg.setSource(39391U);
    msg.setSourceEntity(243U);
    msg.setDestination(11244U);
    msg.setDestinationEntity(178U);
    msg.op = 93U;
    msg.actions.assign("TZNBGEQIDRRUYEGHVVPQLAXLVWUSQKTKMTRMEEHGDZLXWKJPKXJYQYMWHMXDOCBZYDVPDTKSNHTOURNSFYSNZAZUPFQZFXCNIPJLGLCQDUBLLKJNCSCWGVN");

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
    msg.setTimeStamp(0.0595550148151);
    msg.setSource(10297U);
    msg.setSourceEntity(177U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(126U);
    msg.op = 88U;
    msg.actions.assign("SZGLMHIJYKREQEDCZJSTQJLVISKEOCMUZIOCGUELNXNPASUHXGVXHWAUK");

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
    msg.setTimeStamp(0.810775325977);
    msg.setSource(12275U);
    msg.setSourceEntity(99U);
    msg.setDestination(49481U);
    msg.setDestinationEntity(244U);
    msg.actions.assign("FMKANTMOVXSGLLZQGRJLTPHXLKSVOFLIZNZIDQRAUFQZSYWQZSNHTYDJPRSZJAFCYCJEZKFMEKVMIKEGIUGOLBOAIWYKNZOXUCIVBPTLFAOIIWUXDEVU");

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
    msg.setTimeStamp(0.192425542521);
    msg.setSource(25138U);
    msg.setSourceEntity(9U);
    msg.setDestination(63789U);
    msg.setDestinationEntity(101U);
    msg.actions.assign("EJAHCYWKDVEIVICEQPHVKUNJWGFFYZUNOJPTKPTAWKVFEVMCOHMNVPBESXIIIDBLMYAULNDXATDIUJCRNSTYURBSSELQFVLUDAFBQWCESONHTKYRZGXAWXPYYRACGZPFHGXOKLEHLWGSCJGNJOX");

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
    msg.setTimeStamp(0.27706192973);
    msg.setSource(61895U);
    msg.setSourceEntity(214U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("PSBDWDFUTKSOLAEOMSXFBGRXLBKFNIQXYJIAMNNVUEHRTVFGOFIGZGIAWYYCIFQKWCYRHDWHCLFDGBMSMYJPAMIUVLLTNNLXQTVLFWU");

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
    msg.setTimeStamp(0.742819330542);
    msg.setSource(54870U);
    msg.setSourceEntity(97U);
    msg.setDestination(57490U);
    msg.setDestinationEntity(225U);
    msg.button = 197U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.19831478561);
    msg.setSource(22676U);
    msg.setSourceEntity(208U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(228U);
    msg.button = 44U;
    msg.value = 118U;

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
    msg.setTimeStamp(0.122959347573);
    msg.setSource(44945U);
    msg.setSourceEntity(48U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(107U);
    msg.button = 192U;
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
    msg.setTimeStamp(0.306743662463);
    msg.setSource(289U);
    msg.setSourceEntity(27U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(194U);
    msg.op = 18U;
    msg.text.assign("VQEITHIHQJDFRTXBFJJMLHPLFPIALVI");

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
    msg.setTimeStamp(0.21838765824);
    msg.setSource(23141U);
    msg.setSourceEntity(19U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(75U);
    msg.op = 8U;
    msg.text.assign("KJKEYQGOLTXPHYAITEZUHOYPHOPEWVWDLYLDRMFTGGAANSFZTAGLIQBDGJIMSPNSFXZYJZJKQFFRHGQXDABLWERFNOSHJOMUTIIOTMKXWKLAGVBPCTVNESVFEPJBWZVOTGQMVBCXXKRCWOWYUDWOIDLXDYXNVZBRYUHCKICFMJKAIUSHOAEHKSSEQUUKBVCSWPRDBRPDQTIJHVZIQUMCACLXUBYZELXMG");

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
    msg.setTimeStamp(0.348826430884);
    msg.setSource(32123U);
    msg.setSourceEntity(130U);
    msg.setDestination(56867U);
    msg.setDestinationEntity(243U);
    msg.op = 69U;
    msg.text.assign("EGHYIVRCBTPZDBHMAUPAIMGNAMKQJHNCAERUJDVQOTJKIYYSECXXWSZUFBYWGJLJMRSABNDESDAFGQLZBHNKTQUIGFKJYBLDONZPXOKNPVTAXZOAUGISKFXLREWGFHDBIMVOVJUUIVPLSAPSUYCFRMPTFMZILUTHWHKNNFD");

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
    msg.setTimeStamp(0.472240091846);
    msg.setSource(10779U);
    msg.setSourceEntity(227U);
    msg.setDestination(61230U);
    msg.setDestinationEntity(108U);
    msg.op = 9U;
    msg.time_remain = 0.307960895213;
    msg.sched_time = 0.830910559272;

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
    msg.setTimeStamp(0.0767761298886);
    msg.setSource(47374U);
    msg.setSourceEntity(226U);
    msg.setDestination(49819U);
    msg.setDestinationEntity(51U);
    msg.op = 17U;
    msg.time_remain = 0.992057110661;
    msg.sched_time = 0.962303965472;

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
    msg.setTimeStamp(0.184791673127);
    msg.setSource(20253U);
    msg.setSourceEntity(125U);
    msg.setDestination(38065U);
    msg.setDestinationEntity(55U);
    msg.op = 135U;
    msg.time_remain = 0.899679398802;
    msg.sched_time = 0.712084669344;

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
    msg.setTimeStamp(0.573922359183);
    msg.setSource(17888U);
    msg.setSourceEntity(107U);
    msg.setDestination(50302U);
    msg.setDestinationEntity(175U);
    msg.name.assign("WCWYUIOBIIKZHAPRRDIYGZJTQNPTIRUOWFYJWUGMHXZVKYZOZZCGRDUGOXPNCMEQGLHYHIQFLECIQMEKMWALGDMPSBABYNBCCBASUCXJM");
    msg.op = 243U;
    msg.sched_time = 0.881238974995;

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
    msg.setTimeStamp(0.528381268712);
    msg.setSource(2239U);
    msg.setSourceEntity(31U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(56U);
    msg.name.assign("JZKOQAQAKWGBKYZSYENEFJYFCPFAROPSUSFPHOUTDOIGIPORVJMDDQQBTGZHCPBTRGTIDTNFDVZMKJMQKUCVBONJXATBBLCLBKMPKFWGWLGUZQELZVRRCCYSJEKULFICQNYWXAEDJMXNVHJNXSIXYRPQSZADOYXNVIUJSFBPUWVLNWEOQDCCALHKMLLUVZVKIXHWAIRGEXHPDTEBFRLHVMHWABMIHXOYEZJSROGNUP");
    msg.op = 125U;
    msg.sched_time = 0.894215311878;

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
    msg.setTimeStamp(0.179321942219);
    msg.setSource(58839U);
    msg.setSourceEntity(40U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(38U);
    msg.name.assign("RQAIJSEIOENUDPTIPEOPSWPCTYXYGKLMWYXCIMRHYDLYDDGDKMBXPXTCITJPFLXBPUUHQSFBYORZHUZVSVKSHAEBAZCQTNZZTWXJHWRHYEWWKXIUDRJULMVBKVMFGXTHFBJIFLSSFAENQBCPG");
    msg.op = 252U;
    msg.sched_time = 0.631187717274;

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
    msg.setTimeStamp(0.901481293796);
    msg.setSource(31040U);
    msg.setSourceEntity(153U);
    msg.setDestination(14512U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.503799526546);
    msg.setSource(38740U);
    msg.setSourceEntity(221U);
    msg.setDestination(47477U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.568513947318);
    msg.setSource(33075U);
    msg.setSourceEntity(165U);
    msg.setDestination(30792U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.896106517983);
    msg.setSource(18403U);
    msg.setSourceEntity(110U);
    msg.setDestination(10569U);
    msg.setDestinationEntity(205U);
    msg.name.assign("MCYWNNYVACXSGLHFZEGRUBJASDIRALZIMZBLXONHAWFFCLLTIDOTJEKGDVVESSKEKZFDZMGHZOOTRVMRHLLQMUJZFJBOQPITJWOOBUYRRXHYTFHQPAMMDXPCSPTEGZMOYHBQCONUJKCHGMXLERYCFCIVUCPHIAUWXFSPXS");
    msg.state = 15U;

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
    msg.setTimeStamp(0.0914740433545);
    msg.setSource(29567U);
    msg.setSourceEntity(94U);
    msg.setDestination(3472U);
    msg.setDestinationEntity(56U);
    msg.name.assign("GPFMCRENFYRDPUJWSKMEBELGGNSCJGUHHOZULSHXNWUMLVEEYDVIVJLEFLFLAONQRGZMCIKIRZUTWJPBHTKGYUMCKPJCNADJPBILOF");
    msg.state = 68U;

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
    msg.setTimeStamp(0.504793316857);
    msg.setSource(29909U);
    msg.setSourceEntity(130U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(91U);
    msg.name.assign("YIDFLVFMDPYMSULKUKHRHADJURCYBMKANTEQYICIEJCFQYBPSGWHTQHUOMFSQTFQXAGWKLSICMZQFQKCMRZIHQTVOVDJNRMILLRAEWXRVEQSOZNAGZHGITWAHKGCSGNTDXDXWYBWOSCMYJHIFUMNJOLSKZXEVPWDPIEPBAXKPVANBJZLKWRNLVEVREPWYREJCFV");
    msg.state = 163U;

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
    msg.setTimeStamp(0.788822521595);
    msg.setSource(45455U);
    msg.setSourceEntity(240U);
    msg.setDestination(40921U);
    msg.setDestinationEntity(144U);
    msg.name.assign("ODPVAVVNABZWUDZETUHIGLKBRUABQRGINAEWKIUNCHWMLYXDCYURHBCHGGSMNPSFZVAZRMHQHRCFMYLBNMVZHZFDEVGMPQWCXPQEVONGFPWAINCFBDXOBTPJBRDKOWFLYQRLYVTGNOYSAJQAJPKYYHEVSZWVKJWZFTLK");
    msg.value = 84U;

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
    msg.setTimeStamp(0.49598025865);
    msg.setSource(24837U);
    msg.setSourceEntity(109U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(1U);
    msg.name.assign("SSYSWMGRGXYPTKQKFISFPECDEKBYVANVCAECJWRWLFGJBLGHXRMRVRMECBFYDJIXWFGSOHUZDVAVDOLVN");
    msg.value = 160U;

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
    msg.setTimeStamp(0.335611975062);
    msg.setSource(27746U);
    msg.setSourceEntity(123U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(126U);
    msg.name.assign("YZKFWELPFPFWHUCQZNPJNVFXBVXXULELDHICGMPVUKQZXFCIOBMCEFXZABTRBPATXGKKYQIODYEZIRUSNMVSGNJCFWPWJBXTHOYTZQMMXTSMEQJYAASOUWOYJUSRCNTRJPCQA");
    msg.value = 184U;

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
    msg.setTimeStamp(0.526899865109);
    msg.setSource(26623U);
    msg.setSourceEntity(4U);
    msg.setDestination(34453U);
    msg.setDestinationEntity(45U);
    msg.name.assign("YPAVJWIEBDVGIHTFCJCLZBCLXSXQKEUGANBCXZYRHPCXLSNQPPRUCUWTVBYPHYRBGJNQDSDQTOURSIENJBKNDNZKWSTGDLMTDGFWEZLJUNAHJVUDRCHDU");

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
    msg.setTimeStamp(0.562691559373);
    msg.setSource(3025U);
    msg.setSourceEntity(82U);
    msg.setDestination(54429U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FELFHYWVSZUTTZLLVFIYVEHRITLBNSXGNKKTYWZBOKBXIGPCQACQUGDYGACPAGVMEUVOOAZOQLKUPTYDTFBIBUSMRVKXZMVKBXIUIPUPJCPRACEWSQLWSRCKMRBQURNFJXQERAHCAHMKKYOWRTGJWMPEUXQHGSMLZTTXHLOTHYEPHGGVA");

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
    msg.setTimeStamp(0.971599699047);
    msg.setSource(42037U);
    msg.setSourceEntity(170U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(111U);
    msg.name.assign("PAFQCDBEZJBURYTKLRZYNTKAFKTTCUOWNRQYFVMCJDOSUOEAJRQSLZAPNIDDPQIUZECNNEVGEUDQNRKQWWFLFVXJFITHYLMMISGWGAEVSABI");

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
    msg.setTimeStamp(0.358024790297);
    msg.setSource(5571U);
    msg.setSourceEntity(158U);
    msg.setDestination(24920U);
    msg.setDestinationEntity(245U);
    msg.name.assign("WWBHLHXCXMZDKDAEBHUWBXBZLHONWHMXFXRFOKXHFCNFAGQTNYFTTYVJLPCWBPVSZ");
    msg.value = 152U;

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
    msg.setTimeStamp(0.479539231005);
    msg.setSource(40730U);
    msg.setSourceEntity(183U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(126U);
    msg.name.assign("YVHLTUPSPOBFCDXMRCWEJGZETZDQMLFAEZQHRZGNVCQFIWITUXDXMU");
    msg.value = 27U;

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
    msg.setTimeStamp(0.751226964049);
    msg.setSource(55305U);
    msg.setSourceEntity(23U);
    msg.setDestination(38369U);
    msg.setDestinationEntity(127U);
    msg.name.assign("QNPWZZXEHBOKTASPUKWAEGJYWBMAXEXOKZVQBGKSMVKNGGDBCFRNXEJRMNSSANLJOQAJCRDQCHGJKZEFYPNKNIEFCVCMEUIFGZUGYJZDBJAWCFUELVSIITGQUWHTXRRYCYHUWVDBLSMYHPVXMLZIGWVTTXHWJISPIBYXQOBCTWHTBYLDTAEUFLCFHQYISWRSXAMDIKULVROHQPMVJONDSTAOY");
    msg.value = 210U;

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
    msg.setTimeStamp(0.198067361613);
    msg.setSource(38226U);
    msg.setSourceEntity(117U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(78U);
    msg.id = 248U;
    msg.period = 1844906793U;
    msg.duty_cycle = 1533071464U;

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
    msg.setTimeStamp(0.971142911857);
    msg.setSource(21353U);
    msg.setSourceEntity(137U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(111U);
    msg.id = 2U;
    msg.period = 3308081451U;
    msg.duty_cycle = 1255778431U;

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
    msg.setTimeStamp(0.580674711875);
    msg.setSource(65312U);
    msg.setSourceEntity(175U);
    msg.setDestination(47524U);
    msg.setDestinationEntity(247U);
    msg.id = 94U;
    msg.period = 1038263618U;
    msg.duty_cycle = 2266887465U;

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
    msg.setTimeStamp(0.452586603745);
    msg.setSource(13465U);
    msg.setSourceEntity(213U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(135U);
    msg.id = 190U;
    msg.period = 1421062807U;
    msg.duty_cycle = 465554869U;

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
    msg.setTimeStamp(0.0256058632947);
    msg.setSource(40577U);
    msg.setSourceEntity(214U);
    msg.setDestination(9651U);
    msg.setDestinationEntity(207U);
    msg.id = 252U;
    msg.period = 8471644U;
    msg.duty_cycle = 1771327136U;

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
    msg.setTimeStamp(0.389924473562);
    msg.setSource(53724U);
    msg.setSourceEntity(101U);
    msg.setDestination(43432U);
    msg.setDestinationEntity(107U);
    msg.id = 99U;
    msg.period = 4285194374U;
    msg.duty_cycle = 2298607859U;

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
    msg.setTimeStamp(0.552378140254);
    msg.setSource(64911U);
    msg.setSourceEntity(47U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.739094584876;
    msg.lon = 0.793584018548;
    msg.height = 0.85181406602;
    msg.x = 0.784667900659;
    msg.y = 0.874654001529;
    msg.z = 0.556802042368;
    msg.phi = 0.56746539037;
    msg.theta = 0.625518899188;
    msg.psi = 0.228367365939;
    msg.u = 0.146602370911;
    msg.v = 0.596730900333;
    msg.w = 0.175883124817;
    msg.vx = 0.187670736452;
    msg.vy = 0.754462091459;
    msg.vz = 0.963911416512;
    msg.p = 0.221893292815;
    msg.q = 0.697961740247;
    msg.r = 0.0631798214156;
    msg.depth = 0.777598121864;
    msg.alt = 0.591062614538;

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
    msg.setTimeStamp(0.272217873987);
    msg.setSource(9284U);
    msg.setSourceEntity(208U);
    msg.setDestination(13288U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.871512841141;
    msg.lon = 0.540453353068;
    msg.height = 0.535337094917;
    msg.x = 0.384624530231;
    msg.y = 0.487946372645;
    msg.z = 0.849291936268;
    msg.phi = 0.376965855596;
    msg.theta = 0.345030678639;
    msg.psi = 0.755006453527;
    msg.u = 0.892616594789;
    msg.v = 0.580434126762;
    msg.w = 0.571735438576;
    msg.vx = 0.25154989248;
    msg.vy = 0.521664334788;
    msg.vz = 0.650782505433;
    msg.p = 0.417400582282;
    msg.q = 0.653757483124;
    msg.r = 0.0351266197663;
    msg.depth = 0.770189685743;
    msg.alt = 0.214727933583;

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
    msg.setTimeStamp(0.525694873322);
    msg.setSource(51275U);
    msg.setSourceEntity(89U);
    msg.setDestination(8927U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.140092646304;
    msg.lon = 0.627613416315;
    msg.height = 0.647149248392;
    msg.x = 0.740919765821;
    msg.y = 0.286221692205;
    msg.z = 0.788102025676;
    msg.phi = 0.628638365877;
    msg.theta = 0.808563635163;
    msg.psi = 0.171953443105;
    msg.u = 0.251782162706;
    msg.v = 0.620466258246;
    msg.w = 0.739304729559;
    msg.vx = 0.928664099132;
    msg.vy = 0.641616206282;
    msg.vz = 0.42132498894;
    msg.p = 0.618199938226;
    msg.q = 0.406513679675;
    msg.r = 0.685429262053;
    msg.depth = 0.0409930023846;
    msg.alt = 0.339703396987;

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
    msg.setTimeStamp(0.0886491566693);
    msg.setSource(64395U);
    msg.setSourceEntity(192U);
    msg.setDestination(23892U);
    msg.setDestinationEntity(141U);
    msg.x = 0.865888333203;
    msg.y = 0.78864931805;
    msg.z = 0.664546242759;

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
    msg.setTimeStamp(0.215226751815);
    msg.setSource(58461U);
    msg.setSourceEntity(115U);
    msg.setDestination(45836U);
    msg.setDestinationEntity(252U);
    msg.x = 0.634059221846;
    msg.y = 0.380462658924;
    msg.z = 0.202274216654;

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
    msg.setTimeStamp(0.98283800004);
    msg.setSource(51878U);
    msg.setSourceEntity(213U);
    msg.setDestination(19753U);
    msg.setDestinationEntity(229U);
    msg.x = 0.186310744293;
    msg.y = 0.734885939593;
    msg.z = 0.0408685745494;

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
    msg.setTimeStamp(0.214585531565);
    msg.setSource(44665U);
    msg.setSourceEntity(70U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(122U);
    msg.value = 0.27942853873;

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
    msg.setTimeStamp(0.308192358513);
    msg.setSource(32399U);
    msg.setSourceEntity(57U);
    msg.setDestination(22388U);
    msg.setDestinationEntity(12U);
    msg.value = 0.839933774514;

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
    msg.setTimeStamp(0.56431757481);
    msg.setSource(54074U);
    msg.setSourceEntity(233U);
    msg.setDestination(45587U);
    msg.setDestinationEntity(115U);
    msg.value = 0.775582196511;

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
    msg.setTimeStamp(0.0414013151213);
    msg.setSource(21700U);
    msg.setSourceEntity(8U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(120U);
    msg.value = 0.748250013292;

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
    msg.setTimeStamp(0.291063446935);
    msg.setSource(16699U);
    msg.setSourceEntity(152U);
    msg.setDestination(64702U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0059419957306;

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
    msg.setTimeStamp(0.0425547911323);
    msg.setSource(60552U);
    msg.setSourceEntity(30U);
    msg.setDestination(25517U);
    msg.setDestinationEntity(204U);
    msg.value = 0.102704551063;

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
    msg.setTimeStamp(0.615317310712);
    msg.setSource(46360U);
    msg.setSourceEntity(10U);
    msg.setDestination(20178U);
    msg.setDestinationEntity(224U);
    msg.x = 0.00960679166057;
    msg.y = 0.39442217538;
    msg.z = 0.813802540514;
    msg.phi = 0.327693538304;
    msg.theta = 0.481387665327;
    msg.psi = 0.266599796509;
    msg.p = 0.89033635574;
    msg.q = 0.881079188982;
    msg.r = 0.542304260656;
    msg.u = 0.954453047884;
    msg.v = 0.682815151476;
    msg.w = 0.291496412434;
    msg.bias_psi = 0.0390089402309;
    msg.bias_r = 0.422658166747;

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
    msg.setTimeStamp(0.861344306262);
    msg.setSource(48011U);
    msg.setSourceEntity(142U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(126U);
    msg.x = 0.08938089412;
    msg.y = 0.42912883718;
    msg.z = 0.17961382958;
    msg.phi = 0.433772706073;
    msg.theta = 0.488899063655;
    msg.psi = 0.974773454813;
    msg.p = 0.946309900349;
    msg.q = 0.659815717715;
    msg.r = 0.116092209965;
    msg.u = 0.750869059539;
    msg.v = 0.519622512654;
    msg.w = 0.0396394690164;
    msg.bias_psi = 0.884905811259;
    msg.bias_r = 0.69560987601;

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
    msg.setTimeStamp(0.603499261477);
    msg.setSource(10642U);
    msg.setSourceEntity(231U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(241U);
    msg.x = 0.417707900246;
    msg.y = 0.792088924773;
    msg.z = 0.201248074666;
    msg.phi = 0.298493720778;
    msg.theta = 0.302624771496;
    msg.psi = 0.388111732768;
    msg.p = 0.561263310249;
    msg.q = 0.988701470719;
    msg.r = 0.551217758538;
    msg.u = 0.238909336681;
    msg.v = 0.841610288057;
    msg.w = 0.704619987391;
    msg.bias_psi = 0.400758810143;
    msg.bias_r = 0.653633328549;

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
    msg.setTimeStamp(0.549183607183);
    msg.setSource(6298U);
    msg.setSourceEntity(54U);
    msg.setDestination(27160U);
    msg.setDestinationEntity(248U);
    msg.bias_psi = 0.0198156776263;
    msg.bias_r = 0.799944533435;
    msg.cog = 0.578432946846;
    msg.cyaw = 0.474334130997;
    msg.lbl_rej_level = 0.934658307358;
    msg.gps_rej_level = 0.119965322146;
    msg.custom_x = 0.589748658725;
    msg.custom_y = 0.465282935244;
    msg.custom_z = 0.455433580598;

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
    msg.setTimeStamp(0.211714545618);
    msg.setSource(60036U);
    msg.setSourceEntity(175U);
    msg.setDestination(41245U);
    msg.setDestinationEntity(241U);
    msg.bias_psi = 0.467275181389;
    msg.bias_r = 0.364213793858;
    msg.cog = 0.621556429189;
    msg.cyaw = 0.458307014731;
    msg.lbl_rej_level = 0.384530697572;
    msg.gps_rej_level = 0.871315029502;
    msg.custom_x = 0.413953236838;
    msg.custom_y = 0.113544186168;
    msg.custom_z = 0.248753959979;

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
    msg.setTimeStamp(0.297437769282);
    msg.setSource(51471U);
    msg.setSourceEntity(232U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(234U);
    msg.bias_psi = 0.317335616377;
    msg.bias_r = 0.462650817163;
    msg.cog = 0.998757187052;
    msg.cyaw = 0.601923785483;
    msg.lbl_rej_level = 0.542009804801;
    msg.gps_rej_level = 0.716507266071;
    msg.custom_x = 0.487317582033;
    msg.custom_y = 0.274987641065;
    msg.custom_z = 0.278678304774;

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
    msg.setTimeStamp(0.604558984156);
    msg.setSource(24848U);
    msg.setSourceEntity(116U);
    msg.setDestination(58375U);
    msg.setDestinationEntity(10U);
    msg.utc_time = 0.733923831553;
    msg.reason = 82U;

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
    msg.setTimeStamp(0.571622904585);
    msg.setSource(48787U);
    msg.setSourceEntity(66U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.839699582925;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.371781050362);
    msg.setSource(40921U);
    msg.setSourceEntity(174U);
    msg.setDestination(32620U);
    msg.setDestinationEntity(128U);
    msg.utc_time = 0.390273758691;
    msg.reason = 200U;

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
    msg.setTimeStamp(0.505605214131);
    msg.setSource(29634U);
    msg.setSourceEntity(247U);
    msg.setDestination(34354U);
    msg.setDestinationEntity(96U);
    msg.id = 225U;
    msg.range = 0.0462209038099;
    msg.acceptance = 123U;

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
    msg.setTimeStamp(0.654418788915);
    msg.setSource(17000U);
    msg.setSourceEntity(35U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(213U);
    msg.id = 211U;
    msg.range = 0.968446309451;
    msg.acceptance = 61U;

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
    msg.setTimeStamp(0.961269278645);
    msg.setSource(9369U);
    msg.setSourceEntity(234U);
    msg.setDestination(49655U);
    msg.setDestinationEntity(73U);
    msg.id = 50U;
    msg.range = 0.0524577234919;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.493599665791);
    msg.setSource(45554U);
    msg.setSourceEntity(131U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(104U);
    msg.type = 144U;
    msg.reason = 44U;
    msg.value = 0.369229103202;
    msg.timestep = 0.0175651810481;

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
    msg.setTimeStamp(0.188501812885);
    msg.setSource(64502U);
    msg.setSourceEntity(12U);
    msg.setDestination(54201U);
    msg.setDestinationEntity(184U);
    msg.type = 152U;
    msg.reason = 40U;
    msg.value = 0.1482478818;
    msg.timestep = 0.934724603235;

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
    msg.setTimeStamp(0.347946563688);
    msg.setSource(35329U);
    msg.setSourceEntity(22U);
    msg.setDestination(58781U);
    msg.setDestinationEntity(75U);
    msg.type = 217U;
    msg.reason = 176U;
    msg.value = 0.665664786888;
    msg.timestep = 0.298757426351;

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
    msg.setTimeStamp(0.670758607026);
    msg.setSource(57701U);
    msg.setSourceEntity(162U);
    msg.setDestination(13279U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.707557424016);
    msg.setSource(32649U);
    msg.setSourceEntity(78U);
    msg.setDestination(7452U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.461174365641);
    msg.setSource(27847U);
    msg.setSourceEntity(92U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.497980339801);
    msg.setSource(9942U);
    msg.setSourceEntity(32U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(120U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NPIUQNBBNM");
    tmp_msg_0.lat = 0.0295112999713;
    tmp_msg_0.lon = 0.418659028422;
    tmp_msg_0.depth = 0.871882358038;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 125U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.239140998536;
    msg.y = 0.535486975558;
    msg.var_x = 0.728227658175;
    msg.var_y = 0.23108396538;
    msg.distance = 0.214046880764;

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
    msg.setTimeStamp(0.0912391876208);
    msg.setSource(41364U);
    msg.setSourceEntity(14U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UCSYKAVUHGMMJNWLFTIGXWXMYPWRJPCQRZLJENUQGPXZOLVNFBAIDDNWZLUKQDHKHMJFYWNMTLVBBFEQZCKUPEQQSKCUJLZYPHWFZQMQEIUSSDEKBOQYNXITSAT");
    tmp_msg_0.lat = 0.136037396831;
    tmp_msg_0.lon = 0.0482297029917;
    tmp_msg_0.depth = 0.414463877048;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 39U;
    tmp_msg_0.transponder_delay = 157U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.746127066704;
    msg.y = 0.103620136378;
    msg.var_x = 0.486138821456;
    msg.var_y = 0.170781585871;
    msg.distance = 0.0146941895393;

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
    msg.setTimeStamp(0.408772498525);
    msg.setSource(40539U);
    msg.setSourceEntity(6U);
    msg.setDestination(10721U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XFJJPAFRHNESKHXECGKEOWXZVDVQWCKJJICZJMMOWUEWZZENPSHHQSITQNTSQCIVZBCRSUKINXYTDFHSPAPDLDQTNTLNFGMPOACDHRIUQQSLSBFBRSAXEXGIMDFNLGGYFXZHNVFJROKPTOLUTGWKCUUOQUVDEIYJZBTZKBNWIMIVOUVYGRCQPMSMBPKALFCOUGDLYBNPKDJQGMRLABGBLWBYHDECZAWRTWXAWITOYMPFERUYYRHOEX");
    tmp_msg_0.lat = 0.0189868424247;
    tmp_msg_0.lon = 0.559264945835;
    tmp_msg_0.depth = 0.321704893201;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 101U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.547104241785;
    msg.y = 0.428307634522;
    msg.var_x = 0.970605235141;
    msg.var_y = 0.12840163455;
    msg.distance = 0.429877312148;

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
    msg.setTimeStamp(0.392430293287);
    msg.setSource(50544U);
    msg.setSourceEntity(114U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(55U);
    msg.state = 49U;

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
    msg.setTimeStamp(0.866396468358);
    msg.setSource(28856U);
    msg.setSourceEntity(80U);
    msg.setDestination(45053U);
    msg.setDestinationEntity(172U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.262775201573);
    msg.setSource(32836U);
    msg.setSourceEntity(30U);
    msg.setDestination(45006U);
    msg.setDestinationEntity(19U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.622558741614);
    msg.setSource(24498U);
    msg.setSourceEntity(35U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(135U);
    msg.x = 0.828427412644;
    msg.y = 0.850944719601;
    msg.z = 0.169861086021;

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
    msg.setTimeStamp(0.0871497530853);
    msg.setSource(11183U);
    msg.setSourceEntity(1U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(239U);
    msg.x = 0.539615655038;
    msg.y = 0.933388502161;
    msg.z = 0.159271519638;

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
    msg.setTimeStamp(0.927079139146);
    msg.setSource(31929U);
    msg.setSourceEntity(15U);
    msg.setDestination(8369U);
    msg.setDestinationEntity(136U);
    msg.x = 0.117606946611;
    msg.y = 0.860123197056;
    msg.z = 0.237180976943;

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
    msg.setTimeStamp(0.600028661282);
    msg.setSource(24588U);
    msg.setSourceEntity(195U);
    msg.setDestination(47550U);
    msg.setDestinationEntity(40U);
    msg.value = 0.621483101317;

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
    msg.setTimeStamp(0.158232549481);
    msg.setSource(52095U);
    msg.setSourceEntity(178U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(178U);
    msg.value = 0.219820411078;

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
    msg.setTimeStamp(0.595259336077);
    msg.setSource(42206U);
    msg.setSourceEntity(5U);
    msg.setDestination(31078U);
    msg.setDestinationEntity(135U);
    msg.value = 0.713505479764;

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
    msg.setTimeStamp(0.816598821578);
    msg.setSource(60905U);
    msg.setSourceEntity(212U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(25U);
    msg.value = 0.471180918772;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.60299130868);
    msg.setSource(6362U);
    msg.setSourceEntity(111U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0621643290433;
    msg.z_units = 57U;

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
    msg.setTimeStamp(0.310290262784);
    msg.setSource(20155U);
    msg.setSourceEntity(179U);
    msg.setDestination(14872U);
    msg.setDestinationEntity(18U);
    msg.value = 0.766265698193;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.403621143338);
    msg.setSource(64513U);
    msg.setSourceEntity(184U);
    msg.setDestination(3047U);
    msg.setDestinationEntity(97U);
    msg.value = 0.936556864113;
    msg.speed_units = 189U;

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
    msg.setTimeStamp(0.178444715421);
    msg.setSource(23461U);
    msg.setSourceEntity(62U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(81U);
    msg.value = 0.190859823179;
    msg.speed_units = 185U;

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
    msg.setTimeStamp(0.210982956726);
    msg.setSource(14156U);
    msg.setSourceEntity(169U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(114U);
    msg.value = 0.546546839122;
    msg.speed_units = 128U;

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
    msg.setTimeStamp(0.662371523199);
    msg.setSource(56951U);
    msg.setSourceEntity(35U);
    msg.setDestination(20706U);
    msg.setDestinationEntity(80U);
    msg.value = 0.54083714343;

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
    msg.setTimeStamp(0.0277063493209);
    msg.setSource(42051U);
    msg.setSourceEntity(107U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(0U);
    msg.value = 0.545773760475;

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
    msg.setTimeStamp(0.647255307795);
    msg.setSource(61638U);
    msg.setSourceEntity(205U);
    msg.setDestination(59896U);
    msg.setDestinationEntity(162U);
    msg.value = 0.769724993754;

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
    msg.setTimeStamp(0.973380828931);
    msg.setSource(61284U);
    msg.setSourceEntity(213U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(186U);
    msg.value = 0.912292773849;

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
    msg.setTimeStamp(0.151715277089);
    msg.setSource(17082U);
    msg.setSourceEntity(67U);
    msg.setDestination(42097U);
    msg.setDestinationEntity(169U);
    msg.value = 0.415649481166;

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
    msg.setTimeStamp(0.500818775392);
    msg.setSource(14264U);
    msg.setSourceEntity(187U);
    msg.setDestination(37690U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0970965815115;

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
    msg.setTimeStamp(0.309455537153);
    msg.setSource(44420U);
    msg.setSourceEntity(155U);
    msg.setDestination(48193U);
    msg.setDestinationEntity(234U);
    msg.value = 0.919874195569;

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
    msg.setTimeStamp(0.0462504679565);
    msg.setSource(10123U);
    msg.setSourceEntity(83U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(125U);
    msg.value = 0.377333016374;

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
    msg.setTimeStamp(0.910919828143);
    msg.setSource(6165U);
    msg.setSourceEntity(104U);
    msg.setDestination(42870U);
    msg.setDestinationEntity(143U);
    msg.value = 0.642310541249;

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
    msg.setTimeStamp(0.675634671044);
    msg.setSource(63018U);
    msg.setSourceEntity(56U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(82U);
    msg.start_lat = 0.851664833122;
    msg.start_lon = 0.799451849918;
    msg.start_z = 0.899028942372;
    msg.start_z_units = 177U;
    msg.end_lat = 0.765851201232;
    msg.end_lon = 0.0123549704066;
    msg.end_z = 0.717477035624;
    msg.end_z_units = 143U;
    msg.speed = 0.456810733309;
    msg.speed_units = 173U;
    msg.lradius = 0.69350656823;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.386204978408);
    msg.setSource(13453U);
    msg.setSourceEntity(142U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(190U);
    msg.start_lat = 0.435929563023;
    msg.start_lon = 0.507913995872;
    msg.start_z = 0.565459091958;
    msg.start_z_units = 25U;
    msg.end_lat = 0.300589735514;
    msg.end_lon = 0.741967712534;
    msg.end_z = 0.714155736993;
    msg.end_z_units = 2U;
    msg.speed = 0.924349580304;
    msg.speed_units = 69U;
    msg.lradius = 0.616591829173;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.735785379615);
    msg.setSource(39577U);
    msg.setSourceEntity(250U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(164U);
    msg.start_lat = 0.786604355098;
    msg.start_lon = 0.161303143233;
    msg.start_z = 0.856101159675;
    msg.start_z_units = 30U;
    msg.end_lat = 0.849493272026;
    msg.end_lon = 0.551097764909;
    msg.end_z = 0.0906521000623;
    msg.end_z_units = 13U;
    msg.speed = 0.25568549799;
    msg.speed_units = 245U;
    msg.lradius = 0.183238426515;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.819663007649);
    msg.setSource(47735U);
    msg.setSourceEntity(180U);
    msg.setDestination(23631U);
    msg.setDestinationEntity(36U);
    msg.x = 0.0309352406974;
    msg.y = 0.271977468252;
    msg.z = 0.7316256168;
    msg.k = 0.0883843993486;
    msg.m = 0.497056565261;
    msg.n = 0.494486951278;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.824808910062);
    msg.setSource(22575U);
    msg.setSourceEntity(157U);
    msg.setDestination(10694U);
    msg.setDestinationEntity(238U);
    msg.x = 0.704067934371;
    msg.y = 0.0345917993992;
    msg.z = 0.199022402015;
    msg.k = 0.474539289707;
    msg.m = 0.931866676804;
    msg.n = 0.344914449071;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.738814630825);
    msg.setSource(16782U);
    msg.setSourceEntity(169U);
    msg.setDestination(60429U);
    msg.setDestinationEntity(27U);
    msg.x = 0.995821943055;
    msg.y = 0.870187955052;
    msg.z = 0.225550288034;
    msg.k = 0.867747840411;
    msg.m = 0.979064737463;
    msg.n = 0.316286428104;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.359596418524);
    msg.setSource(54897U);
    msg.setSourceEntity(96U);
    msg.setDestination(27163U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0741722180865;

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
    msg.setTimeStamp(0.680840137929);
    msg.setSource(15967U);
    msg.setSourceEntity(17U);
    msg.setDestination(20882U);
    msg.setDestinationEntity(129U);
    msg.value = 0.78236808447;

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
    msg.setTimeStamp(0.84882534904);
    msg.setSource(55883U);
    msg.setSourceEntity(183U);
    msg.setDestination(21699U);
    msg.setDestinationEntity(164U);
    msg.value = 0.512379763706;

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
    msg.setTimeStamp(0.436722767435);
    msg.setSource(47803U);
    msg.setSourceEntity(172U);
    msg.setDestination(46492U);
    msg.setDestinationEntity(241U);
    msg.u = 0.14115851666;
    msg.v = 0.178240778814;
    msg.w = 0.22686567585;
    msg.p = 0.951912144094;
    msg.q = 0.0310748295332;
    msg.r = 0.286967871576;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.44636121721);
    msg.setSource(16164U);
    msg.setSourceEntity(181U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(221U);
    msg.u = 0.193525224634;
    msg.v = 0.0703663024886;
    msg.w = 0.551712951133;
    msg.p = 0.653678190615;
    msg.q = 0.839885869415;
    msg.r = 0.25815049325;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.28188148694);
    msg.setSource(33920U);
    msg.setSourceEntity(77U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(120U);
    msg.u = 0.718880454994;
    msg.v = 0.232812676889;
    msg.w = 0.685781067727;
    msg.p = 0.948998205445;
    msg.q = 0.312740661325;
    msg.r = 0.182008891023;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.929997157293);
    msg.setSource(45307U);
    msg.setSourceEntity(78U);
    msg.setDestination(47024U);
    msg.setDestinationEntity(145U);
    msg.start_lat = 0.50670681979;
    msg.start_lon = 0.520088354335;
    msg.start_z = 0.833127507834;
    msg.start_z_units = 212U;
    msg.end_lat = 0.870253614878;
    msg.end_lon = 0.278087005446;
    msg.end_z = 0.788998124267;
    msg.end_z_units = 79U;
    msg.lradius = 0.179800077032;
    msg.flags = 77U;
    msg.x = 0.332672739676;
    msg.y = 0.438644332426;
    msg.z = 0.0164719845839;
    msg.vx = 0.958674664519;
    msg.vy = 0.700731401809;
    msg.vz = 0.573227118947;
    msg.course_error = 0.548481267244;
    msg.eta = 53277U;

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
    msg.setTimeStamp(0.748464728322);
    msg.setSource(13753U);
    msg.setSourceEntity(40U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(242U);
    msg.start_lat = 0.21988356466;
    msg.start_lon = 0.490129908622;
    msg.start_z = 0.669827253299;
    msg.start_z_units = 42U;
    msg.end_lat = 0.0649955823162;
    msg.end_lon = 0.457977420253;
    msg.end_z = 0.886655218979;
    msg.end_z_units = 224U;
    msg.lradius = 0.31066859816;
    msg.flags = 20U;
    msg.x = 0.824884323224;
    msg.y = 0.833352949096;
    msg.z = 0.798226702768;
    msg.vx = 0.831467474587;
    msg.vy = 0.369758333035;
    msg.vz = 0.216450065763;
    msg.course_error = 0.865831119775;
    msg.eta = 18216U;

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
    msg.setTimeStamp(0.731616473256);
    msg.setSource(40687U);
    msg.setSourceEntity(101U);
    msg.setDestination(60692U);
    msg.setDestinationEntity(178U);
    msg.start_lat = 0.13428246195;
    msg.start_lon = 0.14031563642;
    msg.start_z = 0.566714803518;
    msg.start_z_units = 232U;
    msg.end_lat = 0.238687170942;
    msg.end_lon = 0.00481379297522;
    msg.end_z = 0.278351245398;
    msg.end_z_units = 251U;
    msg.lradius = 0.189087803631;
    msg.flags = 162U;
    msg.x = 0.449004701249;
    msg.y = 0.221500456895;
    msg.z = 0.388081620811;
    msg.vx = 0.939086588955;
    msg.vy = 0.1572226179;
    msg.vz = 0.846317000368;
    msg.course_error = 0.843042086812;
    msg.eta = 30231U;

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
    msg.setTimeStamp(0.84548075323);
    msg.setSource(60984U);
    msg.setSourceEntity(91U);
    msg.setDestination(62013U);
    msg.setDestinationEntity(106U);
    msg.k = 0.214092274206;
    msg.m = 0.80307605483;
    msg.n = 0.381742339136;

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
    msg.setTimeStamp(0.411510673695);
    msg.setSource(18294U);
    msg.setSourceEntity(112U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(63U);
    msg.k = 0.534591565806;
    msg.m = 0.916593031149;
    msg.n = 0.787486824057;

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
    msg.setTimeStamp(0.186624110194);
    msg.setSource(45201U);
    msg.setSourceEntity(39U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(230U);
    msg.k = 0.415753893013;
    msg.m = 0.222000209564;
    msg.n = 0.598778471262;

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
    msg.setTimeStamp(0.909909675392);
    msg.setSource(45044U);
    msg.setSourceEntity(82U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(133U);
    msg.p = 0.292923057483;
    msg.i = 0.524546698833;
    msg.d = 0.650020015092;
    msg.a = 0.163576788529;

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
    msg.setTimeStamp(0.410034863703);
    msg.setSource(5695U);
    msg.setSourceEntity(132U);
    msg.setDestination(25561U);
    msg.setDestinationEntity(12U);
    msg.p = 0.945836919912;
    msg.i = 0.70719966201;
    msg.d = 0.63328958914;
    msg.a = 0.669686955034;

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
    msg.setTimeStamp(0.395381148097);
    msg.setSource(5494U);
    msg.setSourceEntity(207U);
    msg.setDestination(7193U);
    msg.setDestinationEntity(198U);
    msg.p = 0.395783185383;
    msg.i = 0.688723594075;
    msg.d = 0.30134471105;
    msg.a = 0.869659972724;

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
    msg.setTimeStamp(0.708453823981);
    msg.setSource(18598U);
    msg.setSourceEntity(82U);
    msg.setDestination(33966U);
    msg.setDestinationEntity(171U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.690010224799);
    msg.setSource(7319U);
    msg.setSourceEntity(177U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(18U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.501454111936);
    msg.setSource(54048U);
    msg.setSourceEntity(156U);
    msg.setDestination(46284U);
    msg.setDestinationEntity(139U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.34982351617);
    msg.setSource(11864U);
    msg.setSourceEntity(246U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(85U);
    msg.timeout = 20621U;
    msg.lat = 0.249254450946;
    msg.lon = 0.454631365892;
    msg.z = 0.260539460323;
    msg.z_units = 212U;
    msg.speed = 0.939771780298;
    msg.speed_units = 224U;
    msg.roll = 0.208792155946;
    msg.pitch = 0.531075745211;
    msg.yaw = 0.0902650162004;
    msg.custom.assign("PWNYAIKHFMXZREEKUMPDSWCWMKJDZLMPSXTX");

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
    msg.setTimeStamp(0.98042913967);
    msg.setSource(45409U);
    msg.setSourceEntity(177U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(75U);
    msg.timeout = 21382U;
    msg.lat = 0.853304617091;
    msg.lon = 0.343192802348;
    msg.z = 0.597471644139;
    msg.z_units = 232U;
    msg.speed = 0.697468449167;
    msg.speed_units = 116U;
    msg.roll = 0.525319894537;
    msg.pitch = 0.360402090481;
    msg.yaw = 0.294046668226;
    msg.custom.assign("RJMYYOQWJUIWOGGJANXWD");

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
    msg.setTimeStamp(0.917381438099);
    msg.setSource(30398U);
    msg.setSourceEntity(171U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(67U);
    msg.timeout = 7999U;
    msg.lat = 0.520350475645;
    msg.lon = 0.479481333719;
    msg.z = 0.958498383764;
    msg.z_units = 240U;
    msg.speed = 0.277096617423;
    msg.speed_units = 227U;
    msg.roll = 0.632789480467;
    msg.pitch = 0.932064909799;
    msg.yaw = 0.531835320977;
    msg.custom.assign("WUHCFRVHOXDFWCFMNHPTXMGZISTBGMZRPYXELZTYPRPJNPSJAIZKLHVDLUKNYWYMZWMEDRFBONPXTCYLSUWLHGXKAJCHGBUUXZJLGXEEFBWFBKSYBVIGCRTYCMOIIYJTUQKANONBXTYJATRNIDLMQSWGMDGEUDIWQCZEOVAPQQMHKEPRCXVLXFAQZPBTZROONVHW");

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
    msg.setTimeStamp(0.620117895073);
    msg.setSource(31174U);
    msg.setSourceEntity(183U);
    msg.setDestination(48535U);
    msg.setDestinationEntity(57U);
    msg.timeout = 8974U;
    msg.lat = 0.752341670244;
    msg.lon = 0.269924505143;
    msg.z = 0.580401815022;
    msg.z_units = 148U;
    msg.speed = 0.0400972475176;
    msg.speed_units = 174U;
    msg.duration = 16356U;
    msg.radius = 0.835099765385;
    msg.flags = 242U;
    msg.custom.assign("MCCJSNGIDZSADGTRLJOUBCYZHOODRQQSQCWBFCXMPATAWKMLFYXDMHFHDVQGIEVJAJGDAQRIEGORU");

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
    msg.setTimeStamp(0.831654946922);
    msg.setSource(24033U);
    msg.setSourceEntity(172U);
    msg.setDestination(44914U);
    msg.setDestinationEntity(135U);
    msg.timeout = 49805U;
    msg.lat = 0.162748913695;
    msg.lon = 0.493209967526;
    msg.z = 0.897400757976;
    msg.z_units = 24U;
    msg.speed = 0.917354641804;
    msg.speed_units = 159U;
    msg.duration = 10451U;
    msg.radius = 0.706808363751;
    msg.flags = 244U;
    msg.custom.assign("POTQCQHUCYGWBZMJXTPHONUDIFOEGDHILKBTHRNNEHWVHSCPSRUHVCHAOYLQBFVMSDRXOIUGFJIBYRSWRLUDLDVRKREQPAFYUOWNFSEJBITGTJJIYALJIDAXMLNEXDHGIYFJOXKYKBTWEXSBMPQSKXAUADMVLYMGEPVO");

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
    msg.setTimeStamp(0.108187024585);
    msg.setSource(11222U);
    msg.setSourceEntity(36U);
    msg.setDestination(7243U);
    msg.setDestinationEntity(244U);
    msg.timeout = 41176U;
    msg.lat = 0.0054073421194;
    msg.lon = 0.00167219246485;
    msg.z = 0.216680702664;
    msg.z_units = 254U;
    msg.speed = 0.146323159944;
    msg.speed_units = 199U;
    msg.duration = 52751U;
    msg.radius = 0.544678179274;
    msg.flags = 180U;
    msg.custom.assign("NBVUTWMWVGPVNKIPWIPREJWRJHOECIUBPJVLWKPZCGKBAWODXTYEMOBRJKKHDVGYDOLT");

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
    msg.setTimeStamp(0.876595876309);
    msg.setSource(16142U);
    msg.setSourceEntity(96U);
    msg.setDestination(50267U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("JJUAPVPFLFEMTYCBHQCFJSIRJHRPFHMISXYVEDCFHIGZAIYRIEBOGCQWZSPKEMDXGLVVONRLEULKUSMYANVHNUKGGTWFTCWTVWDHVWUZWRCNLMOFHBZDEQFRKDOAUHXYLBUJMEIZTEZRLUCTJKRIAPQQKXIGRHLBXXGXBWQMEWSQPEDWDBOMVSZXTKNCTSVXVTAIOSJDHKOZUYQZANYITSGFYGJOPJXOASQGZPUOKBNCPWAYCMN");

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
    msg.setTimeStamp(0.917259645136);
    msg.setSource(30261U);
    msg.setSourceEntity(43U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(243U);
    msg.custom.assign("WDLRPYIGZDVB");

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
    msg.setTimeStamp(0.998277941584);
    msg.setSource(14484U);
    msg.setSourceEntity(167U);
    msg.setDestination(5956U);
    msg.setDestinationEntity(240U);
    msg.custom.assign("IINYZUQXNNRWMYVKPGRDXSCTYHKXQZGGYSLTNOVFIVNPBILTRDVXLTBGKBZPUCUPNOZIURLEZERDUKFUMMMCUITBCWAAIZLDMJTOFRQAFHBQXSQMAYBOOTKDLLJKEWTNHRDRHWJLUZFGHEGQHPDJWFBSGDWCZPOSMEOVESERSPOQKPHEAKNVNPMNVJWCWGJMSJWSCUYQTAJHXWGDXGLJILYFOFVFHIBKKVAQYIYXFEXMYQTBSEACB");

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
    msg.setTimeStamp(0.543630751317);
    msg.setSource(31815U);
    msg.setSourceEntity(14U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(74U);
    msg.timeout = 41428U;
    msg.lat = 0.126107893295;
    msg.lon = 0.871373032691;
    msg.z = 0.594231152425;
    msg.z_units = 166U;
    msg.duration = 27265U;
    msg.speed = 0.734652145557;
    msg.speed_units = 98U;
    msg.type = 91U;
    msg.radius = 0.721832055497;
    msg.length = 0.373354858236;
    msg.bearing = 0.872652987544;
    msg.direction = 53U;
    msg.custom.assign("RNWQJMEPFSLOKNSUHNCSOLCDITRLXSQAUUHQIGEFBNBNBTNQFVAELLHSBQEHBYIJMTXYWSFWRKWRQSVQJZOCMATUMLPPJZZTCKHRMFFNFDHHHMYNZMXMAISGZVELDWCDIBGGWTYARSJAA");

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
    msg.setTimeStamp(0.729966387987);
    msg.setSource(14654U);
    msg.setSourceEntity(30U);
    msg.setDestination(4558U);
    msg.setDestinationEntity(93U);
    msg.timeout = 56937U;
    msg.lat = 0.927848826088;
    msg.lon = 0.466271551482;
    msg.z = 0.876501019142;
    msg.z_units = 148U;
    msg.duration = 13262U;
    msg.speed = 0.38893520154;
    msg.speed_units = 145U;
    msg.type = 4U;
    msg.radius = 0.532349543282;
    msg.length = 0.463120544152;
    msg.bearing = 0.672824617389;
    msg.direction = 16U;
    msg.custom.assign("UTZKPSNMTIXDUJDOMAMGYAJRGTHJOV");

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
    msg.setTimeStamp(0.173981968406);
    msg.setSource(7277U);
    msg.setSourceEntity(6U);
    msg.setDestination(48974U);
    msg.setDestinationEntity(151U);
    msg.timeout = 48560U;
    msg.lat = 0.685991794901;
    msg.lon = 0.724872454525;
    msg.z = 0.901935254537;
    msg.z_units = 69U;
    msg.duration = 48958U;
    msg.speed = 0.530251556983;
    msg.speed_units = 147U;
    msg.type = 73U;
    msg.radius = 0.991459592443;
    msg.length = 0.0535044350348;
    msg.bearing = 0.846006113508;
    msg.direction = 139U;
    msg.custom.assign("QQFQCHOFTG");

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
    msg.setTimeStamp(0.759470430508);
    msg.setSource(22422U);
    msg.setSourceEntity(42U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(125U);
    msg.duration = 27058U;
    msg.custom.assign("GQEJXVDTSXFERQWHOMHIZIGRFZPGPTPDGUMEWQZLNLXTTZALLCWDKKORSOPWKLNYJPKVYUUDVSBOJCPHCNMSYQRHCBWQQLOEXJTPFUSJDMDRYCBZSHBZVUCYGDSOAKIVPYWKENQZBVNFWRMKFNPJVQCLWHGLQOJZTPMESXCLNJZAFXKHWVEBGAFDORIECBHZOYNHTMKBVAQSRSWKGMIJATXIUVL");

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
    msg.setTimeStamp(0.617861072392);
    msg.setSource(37986U);
    msg.setSourceEntity(251U);
    msg.setDestination(43613U);
    msg.setDestinationEntity(242U);
    msg.duration = 50441U;
    msg.custom.assign("TOZXZFEHLTMWJYGAVCPQVCDSMEDEWBCVKWXDPBAONTSRAHIBNWNZFCJPXHKFTKJLRQNSWSTZJHFGOEVZSDWUDEGMLRUQRYMIAEUFTLXZKURGAYLAILZMHIQTAPCWBGOVNVUNISOXBIRLFUPQHUOGDOQISMPOSQDGRFYCFDQJTJGXKMKKAZJEBV");

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
    msg.setTimeStamp(0.919840317836);
    msg.setSource(31348U);
    msg.setSourceEntity(96U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(156U);
    msg.duration = 62560U;
    msg.custom.assign("JDDYXMUDBMGFJKVUOZZQKPRLTVQIYHGYHIUNOCPXFFAQLMJLWKMYBWPRWLIHTMYQBFLYACZRGERBWFXEHOIDOAMJEZSBODYPVAZNXTURQSXCHCMUWSNCWIOVXNKLOFAAQROBPEAXUDQEGCSWSJT");

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
    msg.setTimeStamp(0.722355686769);
    msg.setSource(57982U);
    msg.setSourceEntity(206U);
    msg.setDestination(4088U);
    msg.setDestinationEntity(109U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.00118910746558;
    msg.control.set(tmp_msg_0);
    msg.duration = 59693U;
    msg.custom.assign("JFYYROFKKZRRQHKOJTYVVMWGUJHCVFPXGEVWWVYIXAEZJLLWIETPITLADENOHNAIBMKCXDOLKAXHUDVIEWKRWCUXBSPXNTDSAXSNQJRQANPMEAOIVGTFRDIFDOBUOQCJPKBBJTZTSRWMIMLRLVJRFLGZYTOWPFDGSGQHCUTPUOUHSBXBWTYQLHBMMJGSZMXUNIQBNEFYYGNLMDZSEALBFIZFUKCYVRSMEHEAZDNYCPHGHPJSVXKP");

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
    msg.setTimeStamp(0.0961916318275);
    msg.setSource(12534U);
    msg.setSourceEntity(140U);
    msg.setDestination(1588U);
    msg.setDestinationEntity(49U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.277906547484;
    msg.control.set(tmp_msg_0);
    msg.duration = 20793U;
    msg.custom.assign("UQUOOFUNTOESAZEPHMLUFGFGFUDYNJRADMBQXELSBVJCGWJNBAVZSZPYBHERGZPCYAXIRVLCXIKLDAFBANBATSJGRFYPTDDHBRANCKZWWCMWGEKEOMFJFYNQGMPVTUSBASVMUEROXOYITILWQLVHHTKXHNGOHTXSQEDJCVRKRCJMFURYLPNNVMOPOLIPCZDMHQIWHJBKWXCGOWUAUKQSFZYXKYBPED");

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
    msg.setTimeStamp(0.608253901431);
    msg.setSource(43079U);
    msg.setSourceEntity(172U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(7U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0853033054601;
    tmp_msg_0.speed_units = 75U;
    msg.control.set(tmp_msg_0);
    msg.duration = 35734U;
    msg.custom.assign("HRYVPWJFBRKXFDGNRIFYWMYGXHLQBINIEXYKNTANZLAPICCQBLNTCKNVZKRWDNMPGLSWWVEEMBNUJOSJOSLAKOCNAMHSOREFZRZRSHOLGS");

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
    msg.setTimeStamp(0.270853634282);
    msg.setSource(16872U);
    msg.setSourceEntity(61U);
    msg.setDestination(43061U);
    msg.setDestinationEntity(188U);
    msg.timeout = 28588U;
    msg.lat = 0.261671278981;
    msg.lon = 0.182668313817;
    msg.z = 0.952944836962;
    msg.z_units = 185U;
    msg.speed = 0.0980571173308;
    msg.speed_units = 94U;
    msg.bearing = 0.290630522357;
    msg.cross_angle = 0.27118221989;
    msg.width = 0.355893249948;
    msg.length = 0.0708958879568;
    msg.hstep = 0.383409912542;
    msg.coff = 33U;
    msg.alternation = 105U;
    msg.flags = 194U;
    msg.custom.assign("JLSAFIZKDTWYJSDMXFHKFMOCNFMQMGUAZYZXAJIBKFEWPPWCELANROXNRYUNQJPHHIVGPKHUZXIGPHPLFBYBZGAMNUJYOETDLCXTMYQFVCXRDWQWTVRZZXNEJYLRVEQNKZHOSDDOGSKZSCMQBKVAOLCSMQCKPGNDOLEPGUFIRDBYRHHWHEECAAUBBNIWDXGCTYJPYIOJVFTAUSDEOWL");

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
    msg.setTimeStamp(0.438330658922);
    msg.setSource(18478U);
    msg.setSourceEntity(155U);
    msg.setDestination(10822U);
    msg.setDestinationEntity(74U);
    msg.timeout = 27465U;
    msg.lat = 0.981198046048;
    msg.lon = 0.091796520162;
    msg.z = 0.234623552295;
    msg.z_units = 16U;
    msg.speed = 0.736906138721;
    msg.speed_units = 155U;
    msg.bearing = 0.7231852383;
    msg.cross_angle = 0.111478186029;
    msg.width = 0.313194054106;
    msg.length = 0.325501831355;
    msg.hstep = 0.564013155036;
    msg.coff = 127U;
    msg.alternation = 3U;
    msg.flags = 193U;
    msg.custom.assign("SOEHGMQTWRJOKUXNFAMUDORYYEYTNWPYWFYLONRVHCNIKRLNNMWECAPVNJPCZUGQQDLDTGXDZDLIFIRNPUJOQTWBTHPZERQOBXKIGBRHSENGQOGPFJPUHVEAAADTIHWFWYVBWCMLOUACTLKSPGM");

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
    msg.setTimeStamp(0.183569278797);
    msg.setSource(6280U);
    msg.setSourceEntity(180U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(197U);
    msg.timeout = 13248U;
    msg.lat = 0.661715121098;
    msg.lon = 0.716849351013;
    msg.z = 0.13341786392;
    msg.z_units = 154U;
    msg.speed = 0.795759932952;
    msg.speed_units = 23U;
    msg.bearing = 0.583884262052;
    msg.cross_angle = 0.888499846741;
    msg.width = 0.566943098181;
    msg.length = 0.320007200815;
    msg.hstep = 0.0572046369256;
    msg.coff = 199U;
    msg.alternation = 75U;
    msg.flags = 167U;
    msg.custom.assign("SZURYQRJHAUCRNIMMWVGXXFPRMIVJBKGQTUEPYDCMJAKMIEVONZIGMLJKDAQLMKCEENZSYLLBIUWEVDGZLSOAQUSTMFGOAHLFBUJSQQMNNEUETPRWOUAJJOCRAROOPYSCNAPVGTKSDSBVDTYYCQMWTTBBHFKIPVOGJPOXZZDWHNHEXWTBFWIXFQSBILPDIYYDPZUHXLUKYQSKXDJGFAOPRLHEZCBVWRL");

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
    msg.setTimeStamp(0.311719623582);
    msg.setSource(37892U);
    msg.setSourceEntity(238U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(14U);
    msg.timeout = 61183U;
    msg.lat = 0.0212814794297;
    msg.lon = 0.839040628454;
    msg.z = 0.55190958172;
    msg.z_units = 174U;
    msg.speed = 0.441801640632;
    msg.speed_units = 68U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.381465836355;
    tmp_msg_0.y = 0.258468925418;
    tmp_msg_0.z = 0.0488541775885;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KAWEPCFLZQIUPDWJYMFODWIGOJKSSBPMIPDXJHGEYOZLYHFHSEKNRLMMTDNSSPRVFEIGNNVNMXUZOIBZQRCCEBMQSMGWOQBCNTPKMRYTYXRPFLHTABDSLHZAFEEVTAZNQZAOYDDCVUKHWNBOUXAQGLULAZINVJGRYSIZJIWOJAO");

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
    msg.setTimeStamp(0.553805400702);
    msg.setSource(905U);
    msg.setSourceEntity(167U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(139U);
    msg.timeout = 43246U;
    msg.lat = 0.626491883808;
    msg.lon = 0.771424796362;
    msg.z = 0.941411120839;
    msg.z_units = 224U;
    msg.speed = 0.356552112202;
    msg.speed_units = 41U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.842343425721;
    tmp_msg_0.y = 0.765386681768;
    tmp_msg_0.z = 0.320717912806;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FYKFUDVXUDYJMWKBNCWKARTGDSBWGUUCZWYAGNYPXTJOLFPNORBCOQVLKSQDDQFRHASKWDNTXJJHSDMQBAOCPVGDWAMURGRRTGJXQVADZWVQFSPDRLJ");

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
    msg.setTimeStamp(0.177663578107);
    msg.setSource(50117U);
    msg.setSourceEntity(27U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(143U);
    msg.timeout = 44673U;
    msg.lat = 0.539572022139;
    msg.lon = 0.244836927975;
    msg.z = 0.910863931646;
    msg.z_units = 69U;
    msg.speed = 0.381599324631;
    msg.speed_units = 57U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.568878129717;
    tmp_msg_0.y = 0.490395106926;
    tmp_msg_0.z = 0.974662174391;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DCDHQCZPVTIMADBASXODXAHOUZLBCNIJIGFIJXFZTDMVNWVZNGGKBYZLFYKMWVRLSEHQRVMJEHUDWUVCBTYYNREPLSFCXPPJCREXHESSNONOTLXOUAHGEXFPGARFVOEWINTKQBLTPASUTCMWRLOKQEWGEZJOKGANXQEUIQFSRHBPVHITYXMJKYYMKU");

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
    msg.setTimeStamp(0.189328901406);
    msg.setSource(5389U);
    msg.setSourceEntity(150U);
    msg.setDestination(39839U);
    msg.setDestinationEntity(246U);
    msg.x = 0.943543920509;
    msg.y = 0.916986765498;
    msg.z = 0.10164735053;

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
    msg.setTimeStamp(0.504981223656);
    msg.setSource(42652U);
    msg.setSourceEntity(9U);
    msg.setDestination(50897U);
    msg.setDestinationEntity(151U);
    msg.x = 0.721450554631;
    msg.y = 0.298800107714;
    msg.z = 0.364461499403;

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
    msg.setTimeStamp(0.386342649732);
    msg.setSource(29012U);
    msg.setSourceEntity(49U);
    msg.setDestination(21577U);
    msg.setDestinationEntity(109U);
    msg.x = 0.891035296136;
    msg.y = 0.372763702036;
    msg.z = 0.173946578893;

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
    msg.setTimeStamp(0.298385605514);
    msg.setSource(10463U);
    msg.setSourceEntity(169U);
    msg.setDestination(23941U);
    msg.setDestinationEntity(30U);
    msg.timeout = 64489U;
    msg.lat = 0.510318450605;
    msg.lon = 0.100845264599;
    msg.z = 0.110875552029;
    msg.z_units = 251U;
    msg.amplitude = 0.989535755941;
    msg.pitch = 0.267519584156;
    msg.speed = 0.522380099389;
    msg.speed_units = 46U;
    msg.custom.assign("HMKKUZIGTIUHXAYYGAIWXBYODQXEMUJQGDXWFPSNXFDLQEONGFLWQCPHFHOTCFPPIRVYTVVAOBTMTLGYNPGXVGYCHZKIAKXFPUFXSWTKTOQJIEDKJNMTTYOVLNJHLSSLWUCROYLYCGZACSWQJDRUFMJFLIBIP");

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
    msg.setTimeStamp(0.532192158303);
    msg.setSource(59507U);
    msg.setSourceEntity(172U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(167U);
    msg.timeout = 42815U;
    msg.lat = 0.70941581273;
    msg.lon = 0.649753770779;
    msg.z = 0.669096639513;
    msg.z_units = 254U;
    msg.amplitude = 0.645824505939;
    msg.pitch = 0.750678500782;
    msg.speed = 0.225894683966;
    msg.speed_units = 65U;
    msg.custom.assign("WLOBELHTNGHAKBGUWMPPEIEIRRRYPJVUSUZUDQFGZHLYCUAPJZQSDZMCAQZSCSVNXZMLIKDTGQISRSNNRTZEEJGVXENBXJITBAKWEUUJXWOOGOLHUDYRFTUFFDOGIXSPCPLZLEVMCTDUYIMOJKCMXKANMQYTWPDCYLAYXJRKNPVOXBBGKZQQWNORVFXAKVBCBHAEMIGTWQFDIHHVCHLBJYLYRCXHOJVPMWSAORASNYKTGQQKFVE");

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
    msg.setTimeStamp(0.293154969276);
    msg.setSource(54402U);
    msg.setSourceEntity(68U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(163U);
    msg.timeout = 59329U;
    msg.lat = 0.664202848097;
    msg.lon = 0.636277363978;
    msg.z = 0.447207424975;
    msg.z_units = 131U;
    msg.amplitude = 0.218589190448;
    msg.pitch = 0.502764504887;
    msg.speed = 0.36739755547;
    msg.speed_units = 61U;
    msg.custom.assign("UIKDUVPIPBCZSXQNMNGOIFIAXJKBSYLRTSNMWGHLYYBAMKVEFQTRLHDJBGGVDNWZJLUCBCRWOVGYLCBLMOUHKWJSEIJXTFDZPIMGTEORNJUCWHIBXXOBFRLGHOXOKEWUESXZRAYNIGFDMQMPANKCVSBVAYCTESTKIPMUUJDOQNA");

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
    msg.setTimeStamp(0.897978528631);
    msg.setSource(20761U);
    msg.setSourceEntity(214U);
    msg.setDestination(53126U);
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
    msg.setTimeStamp(0.574147658631);
    msg.setSource(53900U);
    msg.setSourceEntity(199U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.610123502996);
    msg.setSource(64494U);
    msg.setSourceEntity(240U);
    msg.setDestination(51622U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.612480310067);
    msg.setSource(40679U);
    msg.setSourceEntity(186U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.639288324588;
    msg.lon = 0.609994564885;
    msg.z = 0.744578303573;
    msg.z_units = 11U;
    msg.radius = 0.679064355517;
    msg.duration = 19472U;
    msg.speed = 0.722668984996;
    msg.speed_units = 243U;
    msg.custom.assign("YZGWQUCKRQEMXTISFLEHSLKVWEYSDHFACFGVCHPMXUOECCWRHIJBEPIUBNKXLRINGQQCBDVWJYYNTXJMQVA");

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
    msg.setTimeStamp(0.149521853607);
    msg.setSource(52930U);
    msg.setSourceEntity(140U);
    msg.setDestination(21849U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.49806474172;
    msg.lon = 0.607286915253;
    msg.z = 0.585370124935;
    msg.z_units = 218U;
    msg.radius = 0.355612691247;
    msg.duration = 57537U;
    msg.speed = 6.94006869544e-05;
    msg.speed_units = 100U;
    msg.custom.assign("GTTWNDIHZZBQJJACVNOJNHMBAXCTMHTEEWWTPGPATJRCNHERLCIROLFWXCGAIOUEWZRDZCNQNNZQKSOXUYQPBIJAROMVLHHWLUPCQZVOKIGMKPPJYQSEUBTOC");

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
    msg.setTimeStamp(0.961894618177);
    msg.setSource(47903U);
    msg.setSourceEntity(106U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.957785177978;
    msg.lon = 0.32797507862;
    msg.z = 0.145925874776;
    msg.z_units = 89U;
    msg.radius = 0.122974412221;
    msg.duration = 44594U;
    msg.speed = 0.846367759652;
    msg.speed_units = 66U;
    msg.custom.assign("PGXPBMYUJHBKMQUTAJVZVXHDLQZXSTKQPUEGRTTAELNFCVWRNXEZHEGMHWSNM");

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
    msg.setTimeStamp(0.510468442012);
    msg.setSource(22245U);
    msg.setSourceEntity(116U);
    msg.setDestination(50281U);
    msg.setDestinationEntity(99U);
    msg.timeout = 13685U;
    msg.flags = 58U;
    msg.lat = 0.256027882957;
    msg.lon = 0.911385593847;
    msg.start_z = 0.508670998205;
    msg.start_z_units = 250U;
    msg.end_z = 0.233485627146;
    msg.end_z_units = 106U;
    msg.radius = 0.238202913964;
    msg.speed = 0.500571638021;
    msg.speed_units = 247U;
    msg.custom.assign("TJRUBKDOYZPZLIJZKCWSPIQFIYEFTGIISGWPCKGWLUJMDQHOKXYJZYOBYCGYFZVZLDHXXNKQIUMDDCFSXDQRMFCNBBMUTAEVJCPRECCYQOKNKHZTHGWGOOAUFLIVHHTLE");

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
    msg.setTimeStamp(0.653439290691);
    msg.setSource(37438U);
    msg.setSourceEntity(29U);
    msg.setDestination(57363U);
    msg.setDestinationEntity(195U);
    msg.timeout = 58675U;
    msg.flags = 101U;
    msg.lat = 0.952314914903;
    msg.lon = 0.939990635369;
    msg.start_z = 0.183695461005;
    msg.start_z_units = 158U;
    msg.end_z = 0.960686290123;
    msg.end_z_units = 248U;
    msg.radius = 0.793975224965;
    msg.speed = 0.430234880089;
    msg.speed_units = 20U;
    msg.custom.assign("OAEKIWLWWRGAEUIPFLQKZFJP");

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
    msg.setTimeStamp(0.605612843961);
    msg.setSource(62550U);
    msg.setSourceEntity(177U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(96U);
    msg.timeout = 44530U;
    msg.flags = 82U;
    msg.lat = 0.19246796569;
    msg.lon = 0.969020492647;
    msg.start_z = 0.899092337555;
    msg.start_z_units = 193U;
    msg.end_z = 0.534395059741;
    msg.end_z_units = 219U;
    msg.radius = 0.762333203533;
    msg.speed = 0.0469529416199;
    msg.speed_units = 116U;
    msg.custom.assign("WGOKJYZWDAGWNLPJYVQWUDRXQBVUCXOUPDKCXCCHAYNQMMBFIQPYJCCRBIBSJDUXIRESWOLXEHLTIOVRATCFESELIOXLPMHVKVJZBTYQCBNBRURUHG");

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
    msg.setTimeStamp(0.701629865642);
    msg.setSource(20738U);
    msg.setSourceEntity(15U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(96U);
    msg.timeout = 43752U;
    msg.lat = 0.542770801015;
    msg.lon = 0.764500254115;
    msg.z = 0.586765325173;
    msg.z_units = 150U;
    msg.speed = 0.534358484494;
    msg.speed_units = 138U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.713638945273;
    tmp_msg_0.y = 0.623728537293;
    tmp_msg_0.z = 0.44562577379;
    tmp_msg_0.t = 0.549739587198;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CXFOZYFTYVFHCNJCCMENQJLCIJOYMSNWKDZGUHUTVFMZODPLSQBNYTCXTHRORFZUXCLXQPGKZVEDGMMUTPTEFBZERDIMYMWCLRDNMOQOGAAOOKFRJLHSLSJNHBWMIWLDYJJKNAVIRZUASEUJ");

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
    msg.setTimeStamp(0.174183316161);
    msg.setSource(50496U);
    msg.setSourceEntity(248U);
    msg.setDestination(22003U);
    msg.setDestinationEntity(211U);
    msg.timeout = 25941U;
    msg.lat = 0.373059534767;
    msg.lon = 0.454965706677;
    msg.z = 0.948416509374;
    msg.z_units = 21U;
    msg.speed = 0.544311004824;
    msg.speed_units = 254U;
    msg.custom.assign("BKLMSCECELWERRFGUJSDRWJNUNIJIMVTNOJTEBLAGISYMPSUX");

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
    msg.setTimeStamp(0.101984637098);
    msg.setSource(38491U);
    msg.setSourceEntity(214U);
    msg.setDestination(30765U);
    msg.setDestinationEntity(200U);
    msg.timeout = 27180U;
    msg.lat = 0.98815097155;
    msg.lon = 0.959940174729;
    msg.z = 0.326790895148;
    msg.z_units = 175U;
    msg.speed = 0.859729690073;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.570950228909;
    tmp_msg_0.y = 0.0361872735396;
    tmp_msg_0.z = 0.456020489778;
    tmp_msg_0.t = 0.618079877638;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OMAHZUVBHULYMPEMZVXMVXKPIAYQODALLFVLAWNIYLOHHOSEXDYWSTJIEKGCHMTQNRTCVMEXUJYZDWVVUARSFIWBUDXKPNHOHF");

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
    msg.setTimeStamp(0.220247954904);
    msg.setSource(45154U);
    msg.setSourceEntity(252U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(100U);
    msg.x = 0.301725927235;
    msg.y = 0.774361181217;
    msg.z = 0.171017784712;
    msg.t = 0.89929338736;

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
    msg.setTimeStamp(0.322085327531);
    msg.setSource(41925U);
    msg.setSourceEntity(17U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(28U);
    msg.x = 0.403031072198;
    msg.y = 0.659908408448;
    msg.z = 0.376670731489;
    msg.t = 0.625642002597;

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
    msg.setTimeStamp(0.214037883356);
    msg.setSource(1618U);
    msg.setSourceEntity(169U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(38U);
    msg.x = 0.999075076242;
    msg.y = 0.647894368658;
    msg.z = 0.163998660204;
    msg.t = 0.0885651154892;

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
    msg.setTimeStamp(0.558842494341);
    msg.setSource(48142U);
    msg.setSourceEntity(230U);
    msg.setDestination(41165U);
    msg.setDestinationEntity(91U);
    msg.timeout = 52963U;
    msg.name.assign("EXGJFFKNOGMMJTSQO");
    msg.custom.assign("NHDJCLSUBRXJZBWYPNKIGMRDJANPKUPPJWPRCDUAHYTQNWEKUWSFHZYGKIBGYBVXEHEUMQMMKZDUSVNYLAVPTOLDANXCFHGWLLQAGHVBLXBHJQMCIBDSQCRGI");

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
    msg.setTimeStamp(0.592848450529);
    msg.setSource(37856U);
    msg.setSourceEntity(69U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(116U);
    msg.timeout = 64601U;
    msg.name.assign("MSJVSQFPEKZNAVAENTGWPSVHZAPNBGDJUCTFVTRZQGWRRWULLXKFFBQLCDCGLHKBXXHLYTMLTJFYXEWFRZWORVQGQOBIWYLSFYXHQBFQARANKPEMOLOOSGJYXXJUJWAJFMIVPYVKVGRDCNHWURPIUAEZMKZDHENOPHIIJCBCDTHZKXXUWTOGOHDCYUBUSUZAMGSZTBBSFGRQEYWSIVLRBZNSKHDNDIPOTMDQOLKENICIAE");
    msg.custom.assign("FMLYOMKBWPPJXGREZDZTPNYRNUO");

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
    msg.setTimeStamp(0.830224344845);
    msg.setSource(57115U);
    msg.setSourceEntity(25U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(186U);
    msg.timeout = 61056U;
    msg.name.assign("QRQGRXAPCVZPWZSYRHZGLBWPMPXGYVPQWISTODBFZZGZDLHFOMWUQTCEPLEODIRSFMQKFNRBTHATXHEMWQQHLJXLMMXESYAKAKGABKPKIQVRGFKLOTIUIUVXENCASAJIFSRUOVTPVUDRVGOZGXFNIEAFOSYTUQYOMDTYJXRNI");
    msg.custom.assign("GIOYRABBBPGELSLCEUBFVRLPQAOTXJFFZWZMCNPJAKIVHITMBJAVKFQZWQEYEHIKYOTLMATOWCZCTXSAAYJHNEFJVRSUTXPXWZULGPGOYOEWHZRAOYZSJLQSZUSGTDITPZTPGNDDCVNFLRXFIFLBMYQQJMRWDXVGKURGCSDNKWPMOLUEWNIDAEBORMMDHUNTRSLYEKHXIHXOBBVKFUCQANEJSJMDSYHNFBKWKJMZGCVYV");

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
    msg.setTimeStamp(0.552190249448);
    msg.setSource(17822U);
    msg.setSourceEntity(17U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.448153353009;
    msg.lon = 0.660098457639;
    msg.z = 0.201453605365;
    msg.z_units = 178U;
    msg.speed = 0.822835413067;
    msg.speed_units = 143U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.682993444597;
    tmp_msg_0.y = 0.906584892476;
    tmp_msg_0.z = 0.0572154954475;
    tmp_msg_0.t = 0.231255101422;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13256U;
    tmp_msg_1.off_x = 0.346249104933;
    tmp_msg_1.off_y = 0.0314089051653;
    tmp_msg_1.off_z = 0.470781898405;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.878056246794;
    msg.custom.assign("YVPDOZLCANKUIRHHVVFLNSUANNFTBLBQYYJKMUQJISJMDVRQTEXDNODRYXTUODJKSSJBPRTRSAABEQBXLFIXLKOZLRCYNWVPMHUPMKYVRTPEHFUAWMOULGNHOTCZFFCKQJMVWHYTXDHSGCZJIBAQERGWYIZOOJEFWUGPWUIDHZWCVRCONXBMFWFQVCLLYUPJJIM");

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
    msg.setTimeStamp(0.835955172665);
    msg.setSource(1921U);
    msg.setSourceEntity(15U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.00277125236643;
    msg.lon = 0.779022012097;
    msg.z = 0.109495909356;
    msg.z_units = 223U;
    msg.speed = 0.204077465657;
    msg.speed_units = 173U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9529U;
    tmp_msg_0.off_x = 0.444864624413;
    tmp_msg_0.off_y = 0.677722425033;
    tmp_msg_0.off_z = 0.0613493334543;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.755871035866;
    msg.custom.assign("YURFQVVJMULFPGLETVWGVSXLQNFLSIJNEEACZDFPBSCCPJWCFZTKHRBHRGEYAZBBHHVLRUOG");

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
    msg.setTimeStamp(0.603006905884);
    msg.setSource(42965U);
    msg.setSourceEntity(210U);
    msg.setDestination(16694U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.502395621748;
    msg.lon = 0.890159157273;
    msg.z = 0.105262890137;
    msg.z_units = 159U;
    msg.speed = 0.786651053756;
    msg.speed_units = 210U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.318479001871;
    tmp_msg_0.y = 0.777397266807;
    tmp_msg_0.z = 0.246765616967;
    tmp_msg_0.t = 0.207413684623;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63261U;
    tmp_msg_1.off_x = 0.342240189374;
    tmp_msg_1.off_y = 0.0038970676295;
    tmp_msg_1.off_z = 0.951634417525;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.199632832383;
    msg.custom.assign("CWLPXXYWGAXHMGMWUMIFTPDZBEZBBAJOKBGVHCDZOIZFUFNPDXBAPRGERANUIODCVMVYLOKXIIYVMCZVRWNWIFXQQQQCZDXGQHGFKAZPSSESOMNTSWGNSFUJLXS");

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
    msg.setTimeStamp(0.693450552188);
    msg.setSource(42912U);
    msg.setSourceEntity(96U);
    msg.setDestination(57149U);
    msg.setDestinationEntity(218U);
    msg.vid = 45663U;
    msg.off_x = 0.501536720729;
    msg.off_y = 0.0143438234982;
    msg.off_z = 0.480899873515;

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
    msg.setTimeStamp(0.346726186062);
    msg.setSource(30825U);
    msg.setSourceEntity(118U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(170U);
    msg.vid = 4212U;
    msg.off_x = 0.943384512062;
    msg.off_y = 0.107732920859;
    msg.off_z = 0.968396598778;

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
    msg.setTimeStamp(0.0314517883073);
    msg.setSource(999U);
    msg.setSourceEntity(116U);
    msg.setDestination(30020U);
    msg.setDestinationEntity(186U);
    msg.vid = 18469U;
    msg.off_x = 0.34933087734;
    msg.off_y = 0.0405041267836;
    msg.off_z = 0.80644363419;

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
    msg.setTimeStamp(0.0978527814743);
    msg.setSource(48335U);
    msg.setSourceEntity(33U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.720230123257);
    msg.setSource(7467U);
    msg.setSourceEntity(33U);
    msg.setDestination(109U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.298789899419);
    msg.setSource(48513U);
    msg.setSourceEntity(147U);
    msg.setDestination(53374U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.612277669125);
    msg.setSource(61693U);
    msg.setSourceEntity(31U);
    msg.setDestination(16682U);
    msg.setDestinationEntity(124U);
    msg.mid = 56929U;

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
    msg.setTimeStamp(0.319746746422);
    msg.setSource(29305U);
    msg.setSourceEntity(33U);
    msg.setDestination(28543U);
    msg.setDestinationEntity(90U);
    msg.mid = 44198U;

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
    msg.setTimeStamp(0.733778916246);
    msg.setSource(28138U);
    msg.setSourceEntity(21U);
    msg.setDestination(30199U);
    msg.setDestinationEntity(213U);
    msg.mid = 23018U;

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
    msg.setTimeStamp(0.416252468211);
    msg.setSource(7070U);
    msg.setSourceEntity(92U);
    msg.setDestination(44702U);
    msg.setDestinationEntity(205U);
    msg.state = 25U;
    msg.eta = 26197U;
    msg.info.assign("PWEPIPTBEWGHWJMMRPUTGKDRLTDOEYFSKJTXS");

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
    msg.setTimeStamp(0.764804083831);
    msg.setSource(25573U);
    msg.setSourceEntity(74U);
    msg.setDestination(298U);
    msg.setDestinationEntity(65U);
    msg.state = 57U;
    msg.eta = 28747U;
    msg.info.assign("UTDHBWABSVPLCTBJGLUOOLNWJXTEGCJHCDKGOAFYMICJTEDEHYRASFDFBVQ");

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
    msg.setTimeStamp(0.32933425251);
    msg.setSource(52359U);
    msg.setSourceEntity(123U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(228U);
    msg.state = 208U;
    msg.eta = 45320U;
    msg.info.assign("INSMFFXZYUXPXHCEOGLKOWOCNJLDIMQXBENQVFWOTVXYTDCUNDEVRMSNKYBAXMRTNLCJSISBDLDGSQIGQQHQHAATJLAMHGPUYECXRXBRPWJGCWGCAIDMRW");

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
    msg.setTimeStamp(0.5948064193);
    msg.setSource(3634U);
    msg.setSourceEntity(246U);
    msg.setDestination(48872U);
    msg.setDestinationEntity(4U);
    msg.system = 47213U;
    msg.duration = 4532U;
    msg.speed = 0.276289428308;
    msg.speed_units = 56U;
    msg.x = 0.00970835933397;
    msg.y = 0.0243513012532;
    msg.z = 0.0663713238099;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.0320326062205);
    msg.setSource(41587U);
    msg.setSourceEntity(45U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(111U);
    msg.system = 42783U;
    msg.duration = 11759U;
    msg.speed = 0.734494183763;
    msg.speed_units = 130U;
    msg.x = 0.781156739181;
    msg.y = 0.387565135759;
    msg.z = 0.428293862004;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.791469752722);
    msg.setSource(46103U);
    msg.setSourceEntity(249U);
    msg.setDestination(14883U);
    msg.setDestinationEntity(229U);
    msg.system = 29117U;
    msg.duration = 63946U;
    msg.speed = 0.889610355471;
    msg.speed_units = 30U;
    msg.x = 0.127247179296;
    msg.y = 0.960870893094;
    msg.z = 0.358055749194;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.179475002124);
    msg.setSource(58542U);
    msg.setSourceEntity(68U);
    msg.setDestination(8758U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.249441750157;
    msg.lon = 0.230773966313;
    msg.speed = 0.397566803518;
    msg.speed_units = 104U;
    msg.duration = 8472U;
    msg.sys_a = 16473U;
    msg.sys_b = 58679U;
    msg.move_threshold = 0.73596511258;

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
    msg.setTimeStamp(0.74609090269);
    msg.setSource(40376U);
    msg.setSourceEntity(178U);
    msg.setDestination(51688U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.88082364147;
    msg.lon = 0.0984707453447;
    msg.speed = 0.174976815073;
    msg.speed_units = 53U;
    msg.duration = 25349U;
    msg.sys_a = 38270U;
    msg.sys_b = 56561U;
    msg.move_threshold = 0.880504715637;

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
    msg.setTimeStamp(0.882062919381);
    msg.setSource(61449U);
    msg.setSourceEntity(132U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.494579241008;
    msg.lon = 0.55652516661;
    msg.speed = 0.453149938068;
    msg.speed_units = 59U;
    msg.duration = 214U;
    msg.sys_a = 40202U;
    msg.sys_b = 20447U;
    msg.move_threshold = 0.606563778019;

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
    msg.setTimeStamp(0.647851605849);
    msg.setSource(55557U);
    msg.setSourceEntity(41U);
    msg.setDestination(18549U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.993382063995;
    msg.lon = 0.76030280167;
    msg.z = 0.78720504656;
    msg.z_units = 173U;
    msg.speed = 0.121067548732;
    msg.speed_units = 145U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.749003273105;
    tmp_msg_0.lon = 0.904370034988;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SNUBTRHAXPKJCCQLNXURQDNAOWQCUYUKAIYPSXKTBCPHXQNFTWSFFDAQVLGPRXDIKXCOOIQMBYFJSVZTZUWVEMZJGHZVHJJZIINEBOHAHUSWLFDEYNESAUMAMQOGEFVGVTKCF");

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
    msg.setTimeStamp(0.854865080376);
    msg.setSource(3U);
    msg.setSourceEntity(38U);
    msg.setDestination(35918U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.660374931652;
    msg.lon = 0.621952108221;
    msg.z = 0.773707326615;
    msg.z_units = 119U;
    msg.speed = 0.380940362337;
    msg.speed_units = 5U;
    msg.custom.assign("ZFFZCKITWHFWTLMUSJVUZNAAHPYJHWHCOFYDMXTBUUAWGJATHWGSGYSEHIPBYRZYCDCHPIPJQIOGQNCLBIEMBPGKQNKADGPRK");

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
    msg.setTimeStamp(0.38467154266);
    msg.setSource(20937U);
    msg.setSourceEntity(54U);
    msg.setDestination(1989U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.671817021928;
    msg.lon = 0.239852464745;
    msg.z = 0.924217273441;
    msg.z_units = 91U;
    msg.speed = 0.305638663717;
    msg.speed_units = 246U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.358869623749;
    tmp_msg_0.lon = 0.776636025148;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FNLAEOIFRNEAAHEQPUXIOVQZCCVLKJYBCQADIBNZNLBVHDLVNSIMPHJJHLWPIXCTXXYEMPQBDIWGOIZHOEUYTFICYQSSSHMZQXYMGMHAOYUGWWFDAVHGYBKTOKZQUZPLBHFGRLKYSXQJWZMGTCWRRJTIWUZS");

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
    msg.setTimeStamp(0.92400091304);
    msg.setSource(58934U);
    msg.setSourceEntity(103U);
    msg.setDestination(34284U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.874870636844;
    msg.lon = 0.489830625483;

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
    msg.setTimeStamp(0.496202498587);
    msg.setSource(1433U);
    msg.setSourceEntity(123U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.839890983395;
    msg.lon = 0.655861526109;

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
    msg.setTimeStamp(0.202225965663);
    msg.setSource(39019U);
    msg.setSourceEntity(149U);
    msg.setDestination(51674U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.290880929094;
    msg.lon = 0.812430153348;

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
    msg.setTimeStamp(0.191908736502);
    msg.setSource(44043U);
    msg.setSourceEntity(164U);
    msg.setDestination(37286U);
    msg.setDestinationEntity(223U);
    msg.timeout = 610U;
    msg.lat = 0.804815597511;
    msg.lon = 0.0420122886529;
    msg.z = 0.150476648549;
    msg.z_units = 8U;
    msg.pitch = 0.0787346160834;
    msg.amplitude = 0.743161318052;
    msg.duration = 32660U;
    msg.speed = 0.902797012646;
    msg.speed_units = 28U;
    msg.radius = 0.703537279128;
    msg.direction = 72U;
    msg.custom.assign("AQHDCBLVUSBKHLHOFQZKVIDPKKNEUYXGHDFDYJWGYKAPNAKHWWRCGZJNXHEZNWVRFMMYLHQYDZFNURSVTVZTCOAMGSEPMBETZEGUSRODDCXVIQLYBICI");

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
    msg.setTimeStamp(0.584518653853);
    msg.setSource(9925U);
    msg.setSourceEntity(192U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(113U);
    msg.timeout = 27311U;
    msg.lat = 0.113610649923;
    msg.lon = 0.0650282463351;
    msg.z = 0.630675289821;
    msg.z_units = 5U;
    msg.pitch = 0.558787973802;
    msg.amplitude = 0.339765648049;
    msg.duration = 22860U;
    msg.speed = 0.235108463436;
    msg.speed_units = 135U;
    msg.radius = 0.585839748424;
    msg.direction = 80U;
    msg.custom.assign("AIZEDEIRQMMAHLVNWMOTHDQKKRKEGTMXPZDBHFOCWQLKHYJNZRXTMWBYLOOSEQNHSSFSARMLCJ");

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
    msg.setTimeStamp(0.267555399973);
    msg.setSource(39226U);
    msg.setSourceEntity(212U);
    msg.setDestination(2721U);
    msg.setDestinationEntity(37U);
    msg.timeout = 10494U;
    msg.lat = 0.540303662105;
    msg.lon = 0.551168729212;
    msg.z = 0.456452999191;
    msg.z_units = 167U;
    msg.pitch = 0.53103552894;
    msg.amplitude = 0.559192727083;
    msg.duration = 25359U;
    msg.speed = 0.781149474434;
    msg.speed_units = 125U;
    msg.radius = 0.393831716911;
    msg.direction = 7U;
    msg.custom.assign("RWKRCYQVYPJXTUMNGSPQTCPHGJJEFWISHRDVAPKKSBCMQLEHOZPZLONQDEEXKWUBGXUKUYXZHKVSDPTIJYWQYCSLNEAFWUKKNTFHKNHEQHGVBEAGOBYZSUAPLYGCVCWOMLRLNSUJWOZPAXFAWBMJBJASWUYPCEQERYNCOGHBMXGATODRJIDZZMMAGBLSICQEHUBNVGVFTIVXNIFJOTBKYOVLZADSFDQUTVXWFD");

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
    msg.setTimeStamp(0.84995435161);
    msg.setSource(1994U);
    msg.setSourceEntity(13U);
    msg.setDestination(36163U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("IIRPONMTSSJMAZPFMGEPUKRDVOPZEOGRFGAKVPZUHAEFRTVFSTRYBQTVHSNFACCWBBLZLVZCCFCNCVIIQGODTYJYJBKUVXWNDGXHGAHBDWSCAYASGIKZMJXWE");
    msg.reference_frame = 84U;
    msg.custom.assign("HEXMFOLKCRISKDDBAVFKJRNJNOLSWXZEZVKAQZVPBKRAMOPERNFJZABUUMFHRYTJALUAXTQYFZVUNPPTNKJZIDMDTMBXNWGOBYOVSCIHRTTXBVHUGRHLPLXAJEZFEJWCIKUGPXCCUYRDPLGPBYKGKGGVG");

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
    msg.setTimeStamp(0.425935400412);
    msg.setSource(56930U);
    msg.setSourceEntity(174U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("TAHRQRTCJMSVPFLOQRRLLABWYUOLOJTTDTKSQBQRKHPUUDEIVBSMZPFAEPGAEKHELNGYKXNVAIXLMBHHJBNYWZATSJOJVHKWHUPLKYCMKZOFXNJAQBESHXVIGWSNFLIPXNJVYZEYQQYCRZGEONCCBWGJSTNZBXMPDIOFEUJKDURWSWUMRLDYUGSFGXBVDKENMUFKVGYPXFPZXHVVTBWLIRCOWAFUQIIEXRQSDMAZDJCCNMDCDWGZIGZO");
    msg.reference_frame = 140U;
    msg.custom.assign("HXZZDSVSDEOJFERZXYZFQVXCMEVZIYKPBAJPBXGNYTYPIKWZNCOXJCMMJUONBLPGASJQGXUDTVRPXOTWZEGUMHEBWLUGMGCEDWEIRBDRTGRSNUKBMLOOYQBNHSABVDGAFPNLQWOMDEHCIKQFDCMYKNHLRAVSKANVTPD");

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
    msg.setTimeStamp(0.351237300704);
    msg.setSource(10507U);
    msg.setSourceEntity(242U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("BMQIVSMTHREZTPJPXEHDGAUBVJVFCEYQJNNTYWUYVDXXYXGWSKUUWFURWBXLZA");
    msg.reference_frame = 184U;
    msg.custom.assign("HLRKPRDFVAPJDIDTIQZHWZMKLXKSYJFVNCLMZKDZSX");

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
    msg.setTimeStamp(0.742150585769);
    msg.setSource(11941U);
    msg.setSourceEntity(100U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("UFWUNGRPAABJUQCMQSLEJCBCJPOSGG");
    msg.formation_name.assign("WXURZHBMUWXBKPIBLRYWTBTCQSHVCFXVVMAKGMGTAYARQEUIVNDNJNKWE");
    msg.plan_id.assign("WJPAFXGZFIB");
    msg.description.assign("JYSZCDABPTTJXDHYOXPERLJITAFKHIVGVQDMREVNYOTJNKQMZCUKELFIEJZJOGBFJWNVGLFBTDCRQYTRUFTAIFQSNZISJUVUGNFMSPPQRHWPKVEPDEUSOULOXASKGHZSWCYKQRMDWRWVNXBDZSAQOWKPXEMHR");
    msg.leader_speed = 0.944872792417;
    msg.leader_bank_lim = 0.252149108038;
    msg.pos_sim_err_lim = 0.226908693685;
    msg.pos_sim_err_wrn = 0.302053244683;
    msg.pos_sim_err_timeout = 34766U;
    msg.converg_max = 0.998367152324;
    msg.converg_timeout = 804U;
    msg.comms_timeout = 62883U;
    msg.turb_lim = 0.922333814811;
    msg.custom.assign("SJREUKNSOLKKUWQOWNIYDKEGTWATWMXIEDBJWLPGKVQVRQIDRDFGUVFJJJYSRQAMFXVDHRLLXTPTPXUPYZNMRFMZ");

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
    msg.setTimeStamp(0.236721965411);
    msg.setSource(63523U);
    msg.setSourceEntity(78U);
    msg.setDestination(1238U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("GOIQHXZLIGKYETKPSYPMOBHNXWIJLKDOECVULAOZEVQFMPJHYCXBXARCSVVP");
    msg.formation_name.assign("LMVHGXJFTMIZENAERXMLWIFDZKQBYQCABZTKATSZCLMBAQXQTWODCZGSJGDPJGQWNWFYUHXLSSZPDRAGIS");
    msg.plan_id.assign("ZJSJIGSTCSDTUUAOEKXHWTTWALKJNFZZEEOQQVGQBQMCMDVLHIPFVYWZHEOVJBUWGGLFOVFZNKHDCUZUSTMRBAPEXHMGVMWTUACVJQRYWXKQCCKMKLFDHVBAENVBNLPAXJLPYRKNALUDGWSARSBWISWSTGJMYKBQHQYRTCIOFFVRPGXLUXUCHYNZLIBDOGMQEKHNOXQJXPUJAEFGDNMFYRZPOPFYRI");
    msg.description.assign("HMJZIWOAQPIIUEYHRJQVKMJUGFDQUCXYIKEWNWEBDWDFDEOVUOWZBOASUEZPPSELMGRWFLBXZMHYGNVFSKTCFIHTMAMPMHGAZGLPRNKQLHFARCCEQGJUPSRMZHMNXLSSBUCODNLOYKSETUKVWJINPCHDTALFBPNXZIPOCHCRKVTSAXIBXVYOZRLBDFXVAKTIBZJY");
    msg.leader_speed = 0.4929668221;
    msg.leader_bank_lim = 0.102730840897;
    msg.pos_sim_err_lim = 0.916977864414;
    msg.pos_sim_err_wrn = 0.0271203979853;
    msg.pos_sim_err_timeout = 34474U;
    msg.converg_max = 0.521242842299;
    msg.converg_timeout = 45042U;
    msg.comms_timeout = 32669U;
    msg.turb_lim = 0.99679917972;
    msg.custom.assign("WGTIPBPJTUKQIRQAVCVTUVIWWASGNCPSCBAPHOBUAYQCOFNOEVSJZLTLOSXOGBQTOTJBJUQEWXWBGIZHENGBQREUXWBEEEPMRUXGIKTHBDCLIKVNSFMNHYLCATQFIRCWHWDGMSFGOXQKSRKFLMKNYTAWYQJLHXHPNTDHUDDVSIOLUEFYLPMOFVCJUFDAYHKMDKHOSZZMVJRRVYZCDWQNALMXF");

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
    msg.setTimeStamp(0.718419913358);
    msg.setSource(63182U);
    msg.setSourceEntity(184U);
    msg.setDestination(6595U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("VTVAUQSEZJEBNQEBPZISLMVIFPCUS");
    msg.formation_name.assign("TXSQACIDEDZPEPOGNSDYWXBQXRVGFBSIEQCUVTVILMTUPKKVXJMNWXGVFILYAFHLNEQSBCVRANLBKFBQBHNJSWCWPYNWXHSWNGROOHKUVBLEACYBYJUSIRKEHQRLFZKDWSYRSEWZCC");
    msg.plan_id.assign("PQFRTYZYMWKSXHJSESFUIWGRHYDPLBGRKOAGQEUCSFOKHLKIUWXDNJMOXBVLAFATYDHYDZUWBZCBFMRJJSIFPMSAGOGADSFCIACANMCTHTXLGKOMHFMEXXDAEQPVJOY");
    msg.description.assign("NTAEXKUDMVLJUIJRFHKXCAQSNDNTPWOUSEREQKYFNNBLVBVGVHQATXJNYHURNEHTIYJHTYSLEBBZVEMRYRHMWWXTIQLGYGUPMTJYQKZWTIYGVOCPVIMHFJPDEUASKPXXRMKSOZAHIVCSYMDOQMBEQIQZOEFCZDDW");
    msg.leader_speed = 0.914102094245;
    msg.leader_bank_lim = 0.0789904218932;
    msg.pos_sim_err_lim = 0.0451481965715;
    msg.pos_sim_err_wrn = 0.473195197914;
    msg.pos_sim_err_timeout = 18118U;
    msg.converg_max = 0.105209604389;
    msg.converg_timeout = 32451U;
    msg.comms_timeout = 54264U;
    msg.turb_lim = 0.0200868876911;
    msg.custom.assign("SLORSFMUXBLVVKBPWJQWQGZMXEAJTQEJVAJAZIGRUHPYUPUCRYMKMZPZIBVJXTAKWUADNCHXZSXVYWUPLNMQVM");

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
    msg.setTimeStamp(0.027982342674);
    msg.setSource(3774U);
    msg.setSourceEntity(41U);
    msg.setDestination(1071U);
    msg.setDestinationEntity(16U);
    msg.control_src = 4514U;
    msg.control_ent = 47U;
    msg.timeout = 0.424106742164;
    msg.loiter_radius = 0.243750283853;
    msg.altitude_interval = 0.246429544294;

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
    msg.setTimeStamp(0.516627697984);
    msg.setSource(28386U);
    msg.setSourceEntity(240U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(183U);
    msg.control_src = 14181U;
    msg.control_ent = 239U;
    msg.timeout = 0.53028101439;
    msg.loiter_radius = 0.408313155726;
    msg.altitude_interval = 0.575728683568;

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
    msg.setTimeStamp(0.497806076371);
    msg.setSource(10874U);
    msg.setSourceEntity(65U);
    msg.setDestination(44253U);
    msg.setDestinationEntity(75U);
    msg.control_src = 49229U;
    msg.control_ent = 185U;
    msg.timeout = 0.869373393855;
    msg.loiter_radius = 0.572293497752;
    msg.altitude_interval = 0.85141453923;

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
    msg.setTimeStamp(0.448267208926);
    msg.setSource(51463U);
    msg.setSourceEntity(130U);
    msg.setDestination(54729U);
    msg.setDestinationEntity(223U);
    msg.flags = 16U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.931071846289;
    tmp_msg_0.speed_units = 109U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.25037058313;
    tmp_msg_1.z_units = 251U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.834887180882;
    msg.lon = 0.93284653799;
    msg.radius = 0.17627568582;

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
    msg.setTimeStamp(0.989581709717);
    msg.setSource(64418U);
    msg.setSourceEntity(6U);
    msg.setDestination(36419U);
    msg.setDestinationEntity(61U);
    msg.flags = 29U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.773655036275;
    tmp_msg_0.speed_units = 216U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.56044947352;
    tmp_msg_1.z_units = 210U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.843338603216;
    msg.lon = 0.494480727159;
    msg.radius = 0.379351566399;

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
    msg.setTimeStamp(0.810627111608);
    msg.setSource(11055U);
    msg.setSourceEntity(244U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(207U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.66919134992;
    tmp_msg_0.speed_units = 239U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.795905071506;
    tmp_msg_1.z_units = 95U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0938743567951;
    msg.lon = 0.699652672476;
    msg.radius = 0.991469343055;

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
    msg.setTimeStamp(0.00247579617294);
    msg.setSource(26352U);
    msg.setSourceEntity(129U);
    msg.setDestination(15769U);
    msg.setDestinationEntity(241U);
    msg.control_src = 26989U;
    msg.control_ent = 222U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 54U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.520410598366;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.195959208385;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.793891709005;
    tmp_msg_0.lon = 0.596646467386;
    tmp_msg_0.radius = 0.961861981496;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
    msg.proximity = 141U;

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
    msg.setTimeStamp(0.0509188470595);
    msg.setSource(4250U);
    msg.setSourceEntity(153U);
    msg.setDestination(51428U);
    msg.setDestinationEntity(104U);
    msg.control_src = 7674U;
    msg.control_ent = 146U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.229667846508;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.643818006701;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.417383938055;
    tmp_msg_0.lon = 0.174995517909;
    tmp_msg_0.radius = 0.785065439021;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 197U;

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
    msg.setTimeStamp(0.0523551545524);
    msg.setSource(53488U);
    msg.setSourceEntity(54U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(190U);
    msg.control_src = 4743U;
    msg.control_ent = 130U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 22U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.361477676684;
    tmp_tmp_msg_0_0.speed_units = 157U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.240742879995;
    tmp_tmp_msg_0_1.z_units = 20U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.660381241479;
    tmp_msg_0.lon = 0.0293168817403;
    tmp_msg_0.radius = 0.0904930626634;
    msg.reference.set(tmp_msg_0);
    msg.state = 141U;
    msg.proximity = 68U;

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
    msg.setTimeStamp(0.748772468515);
    msg.setSource(24572U);
    msg.setSourceEntity(5U);
    msg.setDestination(19248U);
    msg.setDestinationEntity(168U);
    msg.ax_cmd = 0.265699019647;
    msg.ay_cmd = 0.471113059051;
    msg.az_cmd = 0.0118865331852;
    msg.ax_des = 0.455053111789;
    msg.ay_des = 0.0525028818718;
    msg.az_des = 0.773141994787;
    msg.virt_err_x = 0.535291456868;
    msg.virt_err_y = 0.632931338206;
    msg.virt_err_z = 0.38773630929;
    msg.surf_fdbk_x = 0.0854660531376;
    msg.surf_fdbk_y = 0.945918304003;
    msg.surf_fdbk_z = 0.297379752221;
    msg.surf_unkn_x = 0.969993944796;
    msg.surf_unkn_y = 0.242559285877;
    msg.surf_unkn_z = 0.17952776357;
    msg.ss_x = 0.824579126266;
    msg.ss_y = 0.29319635255;
    msg.ss_z = 0.872164968986;

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
    msg.setTimeStamp(0.600886390178);
    msg.setSource(44808U);
    msg.setSourceEntity(124U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(51U);
    msg.ax_cmd = 0.630185617101;
    msg.ay_cmd = 0.733307122683;
    msg.az_cmd = 0.259280508225;
    msg.ax_des = 0.278012147476;
    msg.ay_des = 0.916552641154;
    msg.az_des = 0.607959457799;
    msg.virt_err_x = 0.67078366405;
    msg.virt_err_y = 0.181328278469;
    msg.virt_err_z = 0.234141271484;
    msg.surf_fdbk_x = 0.463281133492;
    msg.surf_fdbk_y = 0.348400613254;
    msg.surf_fdbk_z = 0.86215314729;
    msg.surf_unkn_x = 0.281954582516;
    msg.surf_unkn_y = 0.829305727492;
    msg.surf_unkn_z = 0.965824351141;
    msg.ss_x = 0.872888025207;
    msg.ss_y = 0.534113951931;
    msg.ss_z = 0.475338466542;

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
    msg.setTimeStamp(0.274792510052);
    msg.setSource(18273U);
    msg.setSourceEntity(109U);
    msg.setDestination(54970U);
    msg.setDestinationEntity(204U);
    msg.ax_cmd = 0.196639108915;
    msg.ay_cmd = 0.599028532901;
    msg.az_cmd = 0.815998665178;
    msg.ax_des = 0.276998671447;
    msg.ay_des = 0.584918757284;
    msg.az_des = 0.603607001717;
    msg.virt_err_x = 0.624402858737;
    msg.virt_err_y = 0.858039056255;
    msg.virt_err_z = 0.961270504065;
    msg.surf_fdbk_x = 0.264270263428;
    msg.surf_fdbk_y = 0.208396865696;
    msg.surf_fdbk_z = 0.595008733186;
    msg.surf_unkn_x = 0.794217129754;
    msg.surf_unkn_y = 0.364319526313;
    msg.surf_unkn_z = 0.0681949882383;
    msg.ss_x = 0.0336741482881;
    msg.ss_y = 0.562099280827;
    msg.ss_z = 0.0329308694962;

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
    msg.setTimeStamp(0.283270193684);
    msg.setSource(906U);
    msg.setSourceEntity(212U);
    msg.setDestination(52627U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("CMWZDWAHLIQBJDAWUDEVIMYITZSGSHRJHPGBAO");
    msg.dist = 0.693335389077;
    msg.err = 0.195266029643;
    msg.ctrl_imp = 0.193258145679;
    msg.rel_dir_x = 0.0617307540393;
    msg.rel_dir_y = 0.317905151624;
    msg.rel_dir_z = 0.658808867097;
    msg.err_x = 0.123698232226;
    msg.err_y = 0.454080593214;
    msg.err_z = 0.765775057527;
    msg.rf_err_x = 0.362083021424;
    msg.rf_err_y = 0.0698486554874;
    msg.rf_err_z = 0.941760714931;
    msg.rf_err_vx = 0.808308827689;
    msg.rf_err_vy = 0.414691875631;
    msg.rf_err_vz = 0.207896179873;
    msg.ss_x = 0.254577337738;
    msg.ss_y = 0.618957312393;
    msg.ss_z = 0.926030725069;
    msg.virt_err_x = 0.0538462096764;
    msg.virt_err_y = 0.608175889066;
    msg.virt_err_z = 0.811451042466;

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
    msg.setTimeStamp(0.61573896136);
    msg.setSource(52815U);
    msg.setSourceEntity(249U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(41U);
    msg.s_id.assign("TMZGBOMSOZLSMKEKASDFQADJYUCXKUOGDJPNCFBXVFESMJLTKXDZYLTPBCWPORJKKMXNTHUUJBCZNXEDOEBULXZASRQMWOYTGBNPVNRJBEDFDIGLECIPXHRIGWVCNRPRLYRTHSWMIQJMRUDFIJFTGLNLRZANYNWYECSGNHIZKRUUPAHAYZVVVLEFDQFGSSFZQXAWWWBMASLOMOQQZU");
    msg.dist = 0.523900742349;
    msg.err = 0.908896572238;
    msg.ctrl_imp = 0.702816009675;
    msg.rel_dir_x = 0.410843263;
    msg.rel_dir_y = 0.775291891017;
    msg.rel_dir_z = 0.615818234932;
    msg.err_x = 0.659648718192;
    msg.err_y = 0.962570149399;
    msg.err_z = 0.588107993423;
    msg.rf_err_x = 0.546842261847;
    msg.rf_err_y = 0.933978747763;
    msg.rf_err_z = 0.500727591766;
    msg.rf_err_vx = 0.920754505253;
    msg.rf_err_vy = 0.736556651593;
    msg.rf_err_vz = 0.499681716343;
    msg.ss_x = 0.0376520483475;
    msg.ss_y = 0.270576757789;
    msg.ss_z = 0.799427888743;
    msg.virt_err_x = 0.161552017746;
    msg.virt_err_y = 0.106253233736;
    msg.virt_err_z = 0.595604441325;

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
    msg.setTimeStamp(0.812692828489);
    msg.setSource(15455U);
    msg.setSourceEntity(85U);
    msg.setDestination(14716U);
    msg.setDestinationEntity(57U);
    msg.s_id.assign("ISUVNAFUYMBJTWPLAPZKJFVEVPWPMSNIYOYENCIHOIVRLUALLUXNOCJWGEHBMJVTHIVYABAOKAUZZYOBSGLNETWFLBQYRCBMELWTGVXFOQXMHMBZQTFFEEXMMISJPOZBQDYGDHQYRICKXXWDTSZNQKFRPBQ");
    msg.dist = 0.858892606859;
    msg.err = 0.405210212393;
    msg.ctrl_imp = 0.594535643837;
    msg.rel_dir_x = 0.53309225492;
    msg.rel_dir_y = 0.730487564966;
    msg.rel_dir_z = 0.628513782164;
    msg.err_x = 0.588264728034;
    msg.err_y = 0.808217785149;
    msg.err_z = 0.112255827254;
    msg.rf_err_x = 0.6314624745;
    msg.rf_err_y = 0.0342255041077;
    msg.rf_err_z = 0.0613033616065;
    msg.rf_err_vx = 0.789903673708;
    msg.rf_err_vy = 0.710254620267;
    msg.rf_err_vz = 0.00286393697191;
    msg.ss_x = 0.587666295644;
    msg.ss_y = 0.512314362636;
    msg.ss_z = 0.970337884736;
    msg.virt_err_x = 0.994121515809;
    msg.virt_err_y = 0.926374122733;
    msg.virt_err_z = 0.709293989571;

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
    msg.setTimeStamp(0.198733417551);
    msg.setSource(52037U);
    msg.setSourceEntity(179U);
    msg.setDestination(60946U);
    msg.setDestinationEntity(147U);
    msg.op_mode = 130U;
    msg.error_count = 237U;
    msg.error_ents.assign("ZYKSNHIHHAFXUEDVSHSYWMOKUGPPFDBKOQZUDZITQBUUJQKYYQLIGIWXVSHHPWWXFRSRQJIGHOFKGQVORYJVIGVLYDNIASCIEEBYNBZBAOJEFXNRWPUTMKWIEGFEPMRXFCEOWRJQZCXRIAGLBJMNAOJZRCLWZVAVSJPNDZKDLULMRHVLPXQOTPAXONKLNQGUBBTPLNDQJGZC");
    msg.maneuver_type = 18419U;
    msg.maneuver_stime = 0.398414270259;
    msg.maneuver_eta = 30049U;
    msg.control_loops = 2478758110U;
    msg.flags = 198U;
    msg.last_error.assign("EFALFGPSZMIUKKNJYDNZVYUMGIWBBIBNNMYWHQXXHWJZSNBHCGTVUPPMHLOKQMAGQZMYSOFMJURPEGFEODJAOJEETSTWEKACSRQSELNTJHZFDQBROARKDCORLECBHLGJWHXSTZNIBPLCIOQRYRZJOVCKGUVKQAVFBGIYYXLTDPDRCVEAUNZTXKOMZFTGQMNJCQJOPGRPUHFDLTVVXWLKYSAHAFWZUVFNX");
    msg.last_error_time = 0.557020659598;

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
    msg.setTimeStamp(0.453650331973);
    msg.setSource(34699U);
    msg.setSourceEntity(245U);
    msg.setDestination(46753U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 218U;
    msg.error_count = 89U;
    msg.error_ents.assign("XCSBLVJAQLLKGTEKZNDAQGKWJPGPVICFSYUJOZOROHFSMUCIMZNIQONQUBXZFZMLNESMIRJYZFPVLWXUWRYPEKSSNOZAGINVDTMLEBTTVDOZTFCGUOWXVDKVWWICQKUQREQOHLKYTRXHVMHUCMXXFZALUHNQBMINKAHRPHGGJPFQTDGBECCIEOWTSFPMKDBCURAHSYAYBHJZJHJUYLJGFXNOVEJWSFI");
    msg.maneuver_type = 8525U;
    msg.maneuver_stime = 0.75195572058;
    msg.maneuver_eta = 4042U;
    msg.control_loops = 265488921U;
    msg.flags = 28U;
    msg.last_error.assign("DKSVZARLQPQJXGYBEHTKIJPRYDANRLLLXVYGETIWYOSDYSPZPYUXFOFPNCJRHDLRNVIOSTEZHHFJGUX");
    msg.last_error_time = 0.818468083851;

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
    msg.setTimeStamp(0.527538991181);
    msg.setSource(13958U);
    msg.setSourceEntity(51U);
    msg.setDestination(11921U);
    msg.setDestinationEntity(66U);
    msg.op_mode = 200U;
    msg.error_count = 114U;
    msg.error_ents.assign("VQPGXFBPQXZKZMCVAJAFCMPNWKCDZHXKMWKPEEUPSGMZLETZZGOJFJBTMXQISBXSNEBJCJITYPGBLQSXWMWHAHYCZNFVRAOGRMHHYJMWLOADNJPTZRXUWB");
    msg.maneuver_type = 35697U;
    msg.maneuver_stime = 0.439998894171;
    msg.maneuver_eta = 41578U;
    msg.control_loops = 674540247U;
    msg.flags = 153U;
    msg.last_error.assign("FTUPODFIROSEVEUXCVJYVODTGPTPZMLMHHQLMEROPGUDIEEDX");
    msg.last_error_time = 0.800993773179;

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
    msg.setTimeStamp(0.206617430864);
    msg.setSource(65167U);
    msg.setSourceEntity(90U);
    msg.setDestination(44600U);
    msg.setDestinationEntity(101U);
    msg.type = 15U;
    msg.request_id = 53479U;
    msg.command = 37U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 56069U;
    tmp_msg_0.lat = 0.614467688205;
    tmp_msg_0.lon = 0.704541425963;
    tmp_msg_0.z = 0.277919185733;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.amplitude = 0.041633428672;
    tmp_msg_0.pitch = 0.527451901554;
    tmp_msg_0.speed = 0.411070394982;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.custom.assign("OMBNMJOVYHKWYOOKFIRCSEQIVXMTZEFINDPFRZUZZAIKRYILSNYHHVECGLBKKCMTRUXANYJJQTEWUBQHLZTLXKJLSFMQJNXPQZSIDXUILQUQZTMYYAVUPRSDVDXKCLIBAZSPFDWGGHHPTHC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60464U;
    msg.info.assign("IFAOYONCNHGECZPLKAIPQXPBRHCOIBHRJQWSSBXWPYGLDMVMXTHEJWWOHVAIEFNQKSTLWIGJCQUZLGUMJZQFZXUORCVRYQPEXMHVBYLZSTIJRSFPFDAACUAYKSDGSLU");

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
    msg.setTimeStamp(0.68269661846);
    msg.setSource(47593U);
    msg.setSourceEntity(69U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(30U);
    msg.type = 226U;
    msg.request_id = 40827U;
    msg.command = 166U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 7368U;
    tmp_msg_0.lat = 0.17051862628;
    tmp_msg_0.lon = 0.577001363538;
    tmp_msg_0.z = 0.954700569511;
    tmp_msg_0.z_units = 59U;
    tmp_msg_0.speed = 0.483339593757;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.custom.assign("QCUOPXLBXWPJRFZBXBDCIABPQXGACLPEBMZXCWJUZZFGAJNS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50675U;
    msg.info.assign("SGGNDCNRPHUKGKSVEKLBMPOGHERDORJJNXLVKVEUEBOVWGQHZACBDWCTYZMWZQTAPTDQMZBUNQFSMISTCXDUZLUAFCFJRDDYMJWLZOXJHJYUTSFGEQOMTKFOKBNWXHSXZKQWNPGIUXLALLDHO");

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
    msg.setTimeStamp(0.272757160369);
    msg.setSource(13873U);
    msg.setSourceEntity(195U);
    msg.setDestination(53298U);
    msg.setDestinationEntity(202U);
    msg.type = 211U;
    msg.request_id = 42818U;
    msg.command = 35U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("NSBIXOXAEJZ");
    tmp_msg_0.formation_name.assign("PZTINMETREBDRRQXJGBOEHFIRIMSXOCFZSVFYANPGJFHYSDLGQGYQRIYLJVTQVBZUSLQTJVAIEEHNENBLYVBOWWHLKVTJWMGMGDAXWOWRKOCUWZNPTXVXDLGFOGQMXZAGFD");
    tmp_msg_0.plan_id.assign("KKJTSKFWDNBCPCHTRRJZSTLCIDJCFFHQQQFIBWBVFVYSCOPROETZNHFMBHOVMDYUQNXFEPAZYGROWYJGUVAMQBYCWIRIWYUNEEGDJIGHAWTZDLNBZKHPJTANJVTUDNSOQOLLQZSA");
    tmp_msg_0.description.assign("RPVSXEMEQPHRQOCORHMDLZZAJJHMINDVUJHVNGWKQZNM");
    tmp_msg_0.leader_speed = 0.534425477891;
    tmp_msg_0.leader_bank_lim = 0.228611779518;
    tmp_msg_0.pos_sim_err_lim = 0.368333349729;
    tmp_msg_0.pos_sim_err_wrn = 0.144872049065;
    tmp_msg_0.pos_sim_err_timeout = 37002U;
    tmp_msg_0.converg_max = 0.997362150144;
    tmp_msg_0.converg_timeout = 42446U;
    tmp_msg_0.comms_timeout = 33386U;
    tmp_msg_0.turb_lim = 0.325097697246;
    tmp_msg_0.custom.assign("ZATFVIEIVQBTJUTPWNBABPPXECQFNSDDDALJISICNVLJKDKHFBOCSZRXPVODYMTFGGNCZZNVYSIVGEPIOMYMGLPSFXSZGMFDKMBSJXTRGIKUQCBCQHQMZVAKAEWTPWHMRWBNIJPECJAKOLVNNGAJBWHKOGTJUMWQFGLEOZMUUYJFXYCQNSRHWDLZUBKHEVAIRDKCHFRJWEENZOLUOHWZOTBSALLOTKHRYATPQEXGD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61697U;
    msg.info.assign("GELIWZKOIMBXHVQPUQCJUNDLWLASUBSLDQHVTYZYMVHPEDJVYIKYBGEGCSTNELENAIKHVWBTFRXHIXGORJGYBSPLUAXXCCZMNJBVAYSHFRBZFYAEHEMJQCPUTGSURSDXSMUEFZIYWXGT");

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
    msg.setTimeStamp(0.350558572412);
    msg.setSource(23325U);
    msg.setSourceEntity(203U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(188U);
    msg.command = 199U;
    msg.entities.assign("MELSCNLDTTJOPTWJUKLQVMBCPHY");

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
    msg.setTimeStamp(0.699649339251);
    msg.setSource(27509U);
    msg.setSourceEntity(55U);
    msg.setDestination(29442U);
    msg.setDestinationEntity(56U);
    msg.command = 63U;
    msg.entities.assign("LDTOXYCQLKCUXXNTBIUGTLOLKXGOQWFKILJYWIIKPPFZXJPWJXNNNVACHCZMFWOSYRTPZTFVPWBYEVOAVIHTGZOGEOTIULNZFUPGNENARSMVLHAUWHYZRWKFPBDXVRPSLZZUVAOCKMUBCDGQHHM");

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
    msg.setTimeStamp(0.467683682076);
    msg.setSource(56689U);
    msg.setSourceEntity(98U);
    msg.setDestination(35712U);
    msg.setDestinationEntity(20U);
    msg.command = 16U;
    msg.entities.assign("RURPSWHMEYEZAFWOALVAHANDMUICUJQKZTLNEVOKPKXGPWBRAIWMBYVXGLCHTDNPVKNFCHCGNIKYAOVNMISDZCAFBQBUQZNGWFOQJKQQRQBIZAYMHMRTYJHJSDLVPHQGJORXEDCTSZAESUUEUUFLMLGHRPADOYTJYZSCOEJOWEISGGWFLTBBNGWXPBKLFCOOFXPTVNEGPVWDKDTVFRTYLMXXQ");

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
    msg.setTimeStamp(0.285137787371);
    msg.setSource(46717U);
    msg.setSourceEntity(193U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(101U);
    msg.mcount = 66U;
    msg.mnames.assign("ZFYNFVLBPSRSIMZMQEVGEBRJEFNYMWBRUOFJADEQDREJXCNGUAPKQCGWOZQLJWXHJUJIUCVJIWWBOSYGKQLUNNBZYAPGPPZCVSQRJAMUHSYUTDGLRHZOKOWVWDVNFDCEPPHVRYLIWETMDIOMNTCLXSUND");
    msg.ecount = 111U;
    msg.enames.assign("TIZLZXBECGUPDMRDDUHJSHMGWQQBXCBQTEKVNSUYHOSEJNJRMHPAKFOSCFBIWCDSGRFEJPQBTLIVJVXDQYGVKOIXMSOMPACNRMVRKCJKEVKROPACMGSBUYNSTKEWRGUWDTXQTFEO");
    msg.ccount = 84U;
    msg.cnames.assign("IFFMDTMRVYQMQCCYBHJOESZLXTLNSZVTED");
    msg.last_error.assign("QGEEJKLSECAYRSVTIOUFKOMBMDFKHUMFNBOXNRNBCXHPOSWGETZYQGXWISSVTEKIBDQWPKDTPYRRNZVJEEYRQFGSDHDLIHWYZCQVQMAMWKWPPSWRDQXHTVMKHTJDDFIIUZLYDJPLHXWFAUYRVOGJBTLHXACXXJKNOALBTTHOFYRIBCP");
    msg.last_error_time = 0.187369223081;

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
    msg.setTimeStamp(0.363685721802);
    msg.setSource(10303U);
    msg.setSourceEntity(217U);
    msg.setDestination(65071U);
    msg.setDestinationEntity(173U);
    msg.mcount = 244U;
    msg.mnames.assign("NJFPZXGJFDHXBEWNUYXEEMSGPUOGZZCFITSAXAAHIBCZACZWFZCEDYISSHDUTKXYVGPDVAUWBBIMZWBPNJRMFFYVEBMMEKXNGHJOTAJYIMNXEMUGDQYSAD");
    msg.ecount = 34U;
    msg.enames.assign("ZWWEEHWIMTPKBAIDITQYLPRLATOIENPUZHMXGVSDYEOXUFYPSPTICYDBBNPNHGRKECKSXEFJJJCHGMPXGU");
    msg.ccount = 50U;
    msg.cnames.assign("GSTQMDRFLYIBXCKTEHXVAIJYCPVNWKCJCQILSQWEUVSJEWMVIZAGQATNXLKSTAJYBLLHWTDZOMWBOCQPPXLYRGJCFNOXKHVAOUULEFMJHHEZJJHNUTVRNKGMWHPOAKKMMRXVVIBIZMRYUDDKVTCWZWGBAQTPSQCYSOENORLXAYNIQBNGHBIXFACSKUAQDPWEWYBFFERLCDTYIZRKQZBEDVUMZRJZMLPFXRFGXEFUFGBSPJDDZPSGONUGOY");
    msg.last_error.assign("ZWCXCOHVWJIGCQJJFCRWNRWLJSMQQFFTLFAEGMJLHRXXBBDHSIZKQIJALRHHYND");
    msg.last_error_time = 0.402587055783;

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
    msg.setTimeStamp(0.90823150395);
    msg.setSource(12912U);
    msg.setSourceEntity(241U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(191U);
    msg.mcount = 111U;
    msg.mnames.assign("HPEHBAUBMJHZTWKV");
    msg.ecount = 116U;
    msg.enames.assign("KWUXFXLGMATPNITGQSBLPTZJUFYJHZKDCVJMFIIEZABNRPFNHQGGQXMZAQOWASXCPHXRAWFJSNCKNCRXILICGYTBSURZDOOEOBSLICKVHWLFP");
    msg.ccount = 48U;
    msg.cnames.assign("NDRWHLBSKRTFFDWHIXCFIRQOYGVXQYPCSYLQHBZISNMVLLZTAZJKHTVIUSYCUMTJKSXFLZXBAECUFANDYAIRVRIQTOUFSSPAPLWIHADKDNMUOLQJGOOWWPXHUXZGAFRNBBEVODYAWJEYPXXMQQFDEYYKVVEKJTMTDUZCKKIQROUMARISXPGPEIEJMTOCCTWCVBQEFKPZJGSWQFRNBZAHLGCPLMDZHCEEVGSUMNNRNJDUZPTHXBVG");
    msg.last_error.assign("OQORPDAUZESUEXCGWERMGCHVVZYSTVLXLJPRCY");
    msg.last_error_time = 0.606054200585;

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
    msg.setTimeStamp(0.881749946729);
    msg.setSource(6513U);
    msg.setSourceEntity(38U);
    msg.setDestination(64409U);
    msg.setDestinationEntity(57U);
    msg.mask = 130U;
    msg.max_depth = 0.675019204061;
    msg.min_altitude = 0.465204853589;
    msg.max_altitude = 0.181619587268;
    msg.min_speed = 0.895551237751;
    msg.max_speed = 0.165082738174;
    msg.max_vrate = 0.77559137034;
    msg.lat = 0.902294466018;
    msg.lon = 0.665648993056;
    msg.orientation = 0.156503013396;
    msg.width = 0.294700754445;
    msg.length = 0.514054365084;

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
    msg.setTimeStamp(0.598381022492);
    msg.setSource(38758U);
    msg.setSourceEntity(75U);
    msg.setDestination(40130U);
    msg.setDestinationEntity(221U);
    msg.mask = 4U;
    msg.max_depth = 0.267280869698;
    msg.min_altitude = 0.878463579087;
    msg.max_altitude = 0.499705186582;
    msg.min_speed = 0.532425676549;
    msg.max_speed = 0.604548874123;
    msg.max_vrate = 0.0561535105014;
    msg.lat = 0.106367567145;
    msg.lon = 0.763570564495;
    msg.orientation = 0.143542330775;
    msg.width = 0.889678952496;
    msg.length = 0.520533321933;

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
    msg.setTimeStamp(0.854798584444);
    msg.setSource(51974U);
    msg.setSourceEntity(167U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(235U);
    msg.mask = 83U;
    msg.max_depth = 0.327260178813;
    msg.min_altitude = 0.848658907355;
    msg.max_altitude = 0.783203884283;
    msg.min_speed = 0.37401070547;
    msg.max_speed = 0.482760166006;
    msg.max_vrate = 0.545016871111;
    msg.lat = 0.0833131971475;
    msg.lon = 0.341642307638;
    msg.orientation = 0.292785799669;
    msg.width = 0.357177222039;
    msg.length = 0.610199880118;

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
    msg.setTimeStamp(0.761730518775);
    msg.setSource(43376U);
    msg.setSourceEntity(229U);
    msg.setDestination(21623U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.567169939413);
    msg.setSource(59547U);
    msg.setSourceEntity(1U);
    msg.setDestination(15246U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.623017477522);
    msg.setSource(58080U);
    msg.setSourceEntity(53U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.687938788398);
    msg.setSource(61988U);
    msg.setSourceEntity(91U);
    msg.setDestination(54213U);
    msg.setDestinationEntity(3U);
    msg.duration = 33216U;

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
    msg.setTimeStamp(0.243739815278);
    msg.setSource(37632U);
    msg.setSourceEntity(235U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(234U);
    msg.duration = 46830U;

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
    msg.setTimeStamp(0.460659254284);
    msg.setSource(12685U);
    msg.setSourceEntity(118U);
    msg.setDestination(49146U);
    msg.setDestinationEntity(236U);
    msg.duration = 41985U;

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
    msg.setTimeStamp(0.2074738724);
    msg.setSource(38874U);
    msg.setSourceEntity(115U);
    msg.setDestination(33671U);
    msg.setDestinationEntity(226U);
    msg.enable = 2U;
    msg.mask = 2680021080U;
    msg.scope_ref = 1170330869U;

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
    msg.setTimeStamp(0.223760796243);
    msg.setSource(25832U);
    msg.setSourceEntity(79U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(70U);
    msg.enable = 102U;
    msg.mask = 172450010U;
    msg.scope_ref = 1785419680U;

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
    msg.setTimeStamp(0.132575026634);
    msg.setSource(81U);
    msg.setSourceEntity(174U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(168U);
    msg.enable = 160U;
    msg.mask = 3414256970U;
    msg.scope_ref = 1372333586U;

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
    msg.setTimeStamp(0.73842304367);
    msg.setSource(18221U);
    msg.setSourceEntity(186U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(216U);
    msg.medium = 151U;

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
    msg.setTimeStamp(0.999368268354);
    msg.setSource(54819U);
    msg.setSourceEntity(200U);
    msg.setDestination(8688U);
    msg.setDestinationEntity(37U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.187709718083);
    msg.setSource(11676U);
    msg.setSourceEntity(109U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(92U);
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
    msg.setTimeStamp(0.00320537795936);
    msg.setSource(58451U);
    msg.setSourceEntity(254U);
    msg.setDestination(52997U);
    msg.setDestinationEntity(101U);
    msg.value = 0.786383552787;
    msg.type = 64U;

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
    msg.setTimeStamp(0.062058038321);
    msg.setSource(61163U);
    msg.setSourceEntity(197U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(149U);
    msg.value = 0.613796514799;
    msg.type = 187U;

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
    msg.setTimeStamp(0.96680555786);
    msg.setSource(29597U);
    msg.setSourceEntity(241U);
    msg.setDestination(21170U);
    msg.setDestinationEntity(15U);
    msg.value = 0.00412124023884;
    msg.type = 188U;

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
    msg.setTimeStamp(0.152740963356);
    msg.setSource(2576U);
    msg.setSourceEntity(1U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.824889635832;
    msg.converg = 0.211937660436;
    msg.turbulence = 0.888964621189;
    msg.possimmon = 177U;
    msg.commmon = 81U;
    msg.convergmon = 36U;

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
    msg.setTimeStamp(0.993049959791);
    msg.setSource(4968U);
    msg.setSourceEntity(90U);
    msg.setDestination(5423U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.509944941355;
    msg.converg = 0.191249370194;
    msg.turbulence = 0.725454057724;
    msg.possimmon = 147U;
    msg.commmon = 168U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.019063799683);
    msg.setSource(20429U);
    msg.setSourceEntity(134U);
    msg.setDestination(46393U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.306359799405;
    msg.converg = 0.600362610488;
    msg.turbulence = 0.991522068063;
    msg.possimmon = 59U;
    msg.commmon = 75U;
    msg.convergmon = 182U;

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
    msg.setTimeStamp(0.104075194831);
    msg.setSource(56110U);
    msg.setSourceEntity(97U);
    msg.setDestination(45794U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 26U;
    msg.mode.assign("DNTUVGCLWYIREHEFAJQCTPDYRGVXXZUMDHOYEPSJICZVSKVLTORLMYTDHGMZFISNNCXPWLPIOSGT");

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
    msg.setTimeStamp(0.289375228427);
    msg.setSource(51635U);
    msg.setSourceEntity(213U);
    msg.setDestination(19910U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 241U;
    msg.mode.assign("MFPMQOONPQNPUFSTAGIFBAJYNQIZLGVPZYKHLILQIKRMYDHQZZDTFEOKLRNHCJATAHZVONUULVVWWQJGUYZNJDFZSMTDTMBYWSWXQUOZYABYHSUVHDHBFISGBYKQEHEKAJXRCRMRYLUCACIGESNMSBPVKKFEGAYMERBWJTXHSSAWROUPVJDFKNDPXOTTBKCFTEEODZG");

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
    msg.setTimeStamp(0.725874794254);
    msg.setSource(40271U);
    msg.setSourceEntity(192U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(149U);
    msg.autonomy = 249U;
    msg.mode.assign("OGLHZLMOWONEOPOJWIXWGMXAIUZIUZCSZTLEVBXTZRRFAFGQWJPQKWMXFSGSTNCCJOVONNBQVQFZJGGCHQDSM");

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
    msg.setTimeStamp(0.427702986739);
    msg.setSource(17076U);
    msg.setSourceEntity(24U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.46716468171);
    msg.setSource(32938U);
    msg.setSourceEntity(175U);
    msg.setDestination(44095U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.230095564131);
    msg.setSource(40444U);
    msg.setSourceEntity(247U);
    msg.setDestination(48816U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.568261476072);
    msg.setSource(29777U);
    msg.setSourceEntity(223U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("PHXZZTBLCNMFWOCDYRPIBMMTQGTYGMQLCTBLWFGPIJZUPOEASEUWHEZJADSILNPKLT");
    msg.description.assign("WOJXLBBWLULGYFZLYDMULGBGVZIRAFQKTOHSJONWOHILMDECOAXKTQGZWJZD");
    msg.vnamespace.assign("OZVEVQPSNTLBXJWKIMVNUCWORKBBMXEFHSDNKDLOKSVEBEUWGJHARVNQNPQFZPMRPGJAOFOXUNLFUBMSPLOBSRDIQM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YPGYXMTQWUGIHOEYSJEWIOCXSJKEXYOVNVJPUIWHHTICUXRFSIFHSNCSJQGWDFRUBBOQMNXZGKFOZWDVEDSLCHEDATZDYJDWGTYVLLOTZAMHIQDMTBUPRQWNXQNWRGJUQVEFHZRJAUVFBCMLKCJAICKILQBYGWCXHZAKSEPFGJPRRKNVDKGMQCBVZDUQPLAYALXYNNZKATRBNSZFWJSPMTTMCKPUMEALHPONABSXXGO");
    tmp_msg_0.value.assign("QUSLCZOYXWQUHOTNRQL");
    tmp_msg_0.type = 119U;
    tmp_msg_0.access = 55U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SMSCGJOOEOKOTRTKORCSMBPVKOTAMNQKAXMDBDBSJFLVATHIUUQGPJTHLFJBRGGFNQICSPUCJNBEHCRJYZIQJZEKECDLEAMSZZKNWUUIYHTPWTXGGVYHFNAJWOTDGZFGZNGXSVHPFDLERDAAHRQHUKQTLYVMA");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("UBYJZWEYQTDVIUEHOCAHWZPLXUYKRKMIVNDLBXAGFEOCHSVLOTEDJWOBFFROPHRJZTTPRYWNMZZSXVDAKDPQBNGJCLNYWUXCULUAAQIPOUSVXHWSBRFSG");
    tmp_msg_1.dest_man.assign("PKYJUFJMPBXKDELQDZFBYPQGCSFHERXPMVZMXHWEOAIVPCKTARVPAXWMOTTYCUBIBTAGJRQHZWNCQDFZCUTNONZLWWSGSLQOZLQCLUULJQVDWPAM");
    tmp_msg_1.conditions.assign("POJXOQRZHPULSVXWJCOVGQGPJNESULZSIRTJUKKHMYBXNLRTVNTVSIFDEXSRBXYDYUTRDTWKPZGVA");
    msg.transitions.push_back(tmp_msg_1);
    IMC::FollowRefState tmp_msg_2;
    tmp_msg_2.control_src = 42314U;
    tmp_msg_2.control_ent = 240U;
    IMC::Reference tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.flags = 9U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.value = 0.355648600932;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 207U;
    tmp_tmp_msg_2_0.speed.set(tmp_tmp_tmp_msg_2_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.value = 0.0302779111186;
    tmp_tmp_tmp_msg_2_0_1.z_units = 236U;
    tmp_tmp_msg_2_0.z.set(tmp_tmp_tmp_msg_2_0_1);
    tmp_tmp_msg_2_0.lat = 0.0115427477284;
    tmp_tmp_msg_2_0.lon = 0.365413232009;
    tmp_tmp_msg_2_0.radius = 0.589070401079;
    tmp_msg_2.reference.set(tmp_tmp_msg_2_0);
    tmp_msg_2.state = 102U;
    tmp_msg_2.proximity = 116U;
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
    msg.setTimeStamp(0.536195454956);
    msg.setSource(65039U);
    msg.setSourceEntity(252U);
    msg.setDestination(30233U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("HWQMIDIKWGNSYDMIAWULFSNDCSEDTGXSJEAOVIYHCOUOWPMZJEMLQQECQZYJRNORZPAEJRVPAQLLPAQKUFHXOPLJZGPPDMHBDPVOTEBHAAKVLRCXDTYRUJOBCRZZNBLCFFR");
    msg.description.assign("HATKCAMCBPJQQPQQNZGWKLISKRSIKECNOXGDDWSSBVHDMLKUZMNQTTXYJYNEVCUETVJSVUWHULFGNMGTLOQXEFAMYWFOUZ");
    msg.vnamespace.assign("KXOUJEMBKQPGLYYBOYFHDAXVVEOCUAFTLAYESFQQNRBPZAGAMLUWIOXXGXJBOTKPITVWJTVEIOMEKIIXNAFSIXPCGHSDXMMUAHQCZZRIQIRPQENKMHRJWCJGRLPMWB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NPPIYQSUKTDIVWKFURGMQHZZRSVWSQBXAIDTVJBRWBTFYZHLJHYLUJDBWDVHJTBNFAASFJ");
    tmp_msg_0.value.assign("BVAWCGXFBCWFCFSWJMIXNBGCCIXBZPRHYMLWIAJOTATWMYNSDGNMIVURKXRQQYQLLKSYV");
    tmp_msg_0.type = 234U;
    tmp_msg_0.access = 49U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RRDHBDQTYQSYKLNOIPJZVPBEEGCEJYLNIWPKPBZJLDOVDGWMK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TRYJZEOVFMDPJCEQIWXGHBFWYSFUKADETKDOMXUCRHZGCDGJJKVSXQOAEXALUTXLNLRZASKNMCGPXRYJYCHHNFCOJWLBVJWGCYAKK");
    tmp_msg_1.dest_man.assign("JLKCGHSORISMVWKEGSZFNDQPPFGIPWMJESFACAAGKGUEKLCPSCNIGUIDLJEBGKTUXUAZVGYIIEEYTUQZFGV");
    tmp_msg_1.conditions.assign("AEDJILXJRZUBYGCSTVGAAZIKXWIRFTLEAWHMJSVXWUOCBPNHPKEAZOZDDQOPWTZPLNJN");
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
    msg.setTimeStamp(0.592360072375);
    msg.setSource(24865U);
    msg.setSourceEntity(253U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("DFXHYAOHICWHEFEAUMFQAXASULAMPEXTABBMTRFJRSBOCNAKKHGMUKJWYPQRBLOFYVBPVGCGGVZGYDXMZDWNNVLY");
    msg.description.assign("KNHUIAGQFPABDPCRJOREJDVLQRSMBEFMVDWIOUXZEZWTWEXXZFXFNIFPRPNNDBBMMRIVLM");
    msg.vnamespace.assign("UJPHDNQYSFWQPOUIRYKFHJNSDXWOUSQJIWAFAXJFSOEUXXTKOOVDXRCBIAAEGZXVOGURNJPZAJZIKVBQZRELIXRHWUMSYKMFMGNMTNKRCPYKMLAIAVZQKCDYEJVXTHPXCILTKMNZZSLFRUGWLPFZWCANPJZQDYECBMOYUHNQEVLVWLVIDDGEREBUEDYKKSOBDTW");
    msg.start_man_id.assign("IGVHQAQFWASOVEWVEREJGZBFSOECDXDAKTMSLXUWIIZOJEDNOQIUCJLRECLOMKJHZXIXTIRDFGBYMTCMRKOPPPZNXADUZEYRERUGNINSSTJDRVQVDXNFXFBDKVWCHAMOTANJNAZKRQPBWPPLHUBCLZEJWKKGTWUXZHFTYWOOQFDSMMYGHMAIIYCYVBVNYSILEZTJXNUGBWZBWXVYKQQCHFNMQKRTGHFGDTJPRLBUCSLFMUYH");
    IMC::Abort tmp_msg_0;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::SessionKeepAlive tmp_msg_1;
    tmp_msg_1.sessid = 1835362988U;
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
    msg.setTimeStamp(0.756074512707);
    msg.setSource(35330U);
    msg.setSourceEntity(73U);
    msg.setDestination(34694U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("EWXZXSBVGLSSCERLLKIPYAPUORPPEMWPPTLXZAYDROMTHUCXOSQGMSZUIJDFLHJWAJUFMFVCBTOCYEKMWLAJLIBIRKIRINRYKIHIXCKCABVEGCAVTOJQHNQOTWAVWGAPFFMKHNZVWUOCXEUNLZDYMMKZRGGFBBWZJNQVZFSIJTYJTMYGOFQAHNJFUNUGDKVSBBSRUBHTEFQARZWDWHYNQGQXQN");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 13834U;
    tmp_msg_0.lat = 0.967970769091;
    tmp_msg_0.lon = 0.699009456067;
    tmp_msg_0.z = 0.303207124107;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.pitch = 0.577224201134;
    tmp_msg_0.amplitude = 0.419311953433;
    tmp_msg_0.duration = 37792U;
    tmp_msg_0.speed = 0.17301699539;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.radius = 0.940867023815;
    tmp_msg_0.direction = 182U;
    tmp_msg_0.custom.assign("CBASPRYQDBJMFBYRHVKOZDTDVDCQLCNG");
    msg.data.set(tmp_msg_0);
    IMC::Reference tmp_msg_1;
    tmp_msg_1.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.139386622289;
    tmp_tmp_msg_1_0.speed_units = 81U;
    tmp_msg_1.speed.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0621291474386;
    tmp_tmp_msg_1_1.z_units = 254U;
    tmp_msg_1.z.set(tmp_tmp_msg_1_1);
    tmp_msg_1.lat = 0.431601684309;
    tmp_msg_1.lon = 0.461869930192;
    tmp_msg_1.radius = 0.182228565569;
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
    msg.setTimeStamp(0.805660065604);
    msg.setSource(27861U);
    msg.setSourceEntity(60U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(27U);
    msg.maneuver_id.assign("WYKNPQKUAHFWTSEHQSUNKQZFRLBEQDOVCHLPVPMCHKVSSOKGFNTIGEOYVAGDMDIRRXXGVJSYWAZROAZDDMPWXSEYWNQNKHHONREKDYGPBQBFBDYFBZTXNLZXDHOMJBIUCCLBIAEHCCYEVWMKJGDTXGJJEUZXDOPAALEMZRWIQZGHTFPSYXIOOCJSMITXGNFACTPPWXJUVUMVKBGLQNTMVWT");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 38889U;
    tmp_msg_0.lat = 0.0632812324621;
    tmp_msg_0.lon = 0.017609646659;
    tmp_msg_0.z = 0.330583296033;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.duration = 43334U;
    tmp_msg_0.speed = 0.62575190363;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.type = 55U;
    tmp_msg_0.radius = 0.863854648481;
    tmp_msg_0.length = 0.534676860674;
    tmp_msg_0.bearing = 0.198710988312;
    tmp_msg_0.direction = 173U;
    tmp_msg_0.custom.assign("YIJSEFPNCGZBWKZMZRYURZTXTYEQBAHNFQVEHLLLYVLYVWDEBZCVKFBDCKUJJZOUCSAISOAPXPBOWCTIAHPDOGHYWGGCB");
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
    msg.setTimeStamp(0.616820334833);
    msg.setSource(40233U);
    msg.setSourceEntity(163U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("LFCXWSWYHBFIZGRTQKGVSMPERTHIHPJGCEQUQKWKXLNLTYAGBPZMJTDYGAOONTLREFOPIYAGFKDT");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 2185U;
    tmp_msg_0.control_ent = 19U;
    tmp_msg_0.timeout = 0.636775629941;
    tmp_msg_0.loiter_radius = 0.931903692017;
    tmp_msg_0.altitude_interval = 0.0279668372201;
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
    msg.setTimeStamp(0.891477498475);
    msg.setSource(32205U);
    msg.setSourceEntity(200U);
    msg.setDestination(31237U);
    msg.setDestinationEntity(38U);
    msg.source_man.assign("GWQSWYVLZHBMVNGWTSIZFBPFPJUIWQOBNADRMOSEDNRTNEVBKVQCJEBICLLVFWSZDYSYPACENVIQJRXUAKJOUOLMWQAKNKKUMWESPICWDCXYBXACBUTIAFZYUSPOKEWPNCRJRZJDMGHZZHVHIXQEYRDXPBAQAXNUTOJHGQZTEGUGNCAITLUXFF");
    msg.dest_man.assign("NSIAJCLEIHMEH");
    msg.conditions.assign("FEEAIPURGJPTDFTMUOIIHCQXUFDWPKAJBRAKWJGYQFVKKGPYHLIGRCCTFBUOCNBHHUCVNFBFOLSKSPHGZXNWMYVHHAZRLNXEBQCPCUKOVVQWXLFXDPQOIJIEINOWYJXOZPZYBQMDMDW");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.121330884558;
    tmp_msg_0.v = 0.0246897887719;
    tmp_msg_0.w = 0.12336010396;
    tmp_msg_0.p = 0.0721521941707;
    tmp_msg_0.q = 0.296515050333;
    tmp_msg_0.r = 0.775632211932;
    tmp_msg_0.flags = 17U;
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
    msg.setTimeStamp(0.452324995374);
    msg.setSource(12811U);
    msg.setSourceEntity(21U);
    msg.setDestination(11425U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("LLLIYAVMTWPPTWWKIGTLEMDCIQUQFGSAGPCQDKDJGXMHORUSCDEYLDHRFKVGUXRHTMNAHSUOJRTYYRIXAHAVAMBYRGRWLBOYDOCJZHUPNBKNMWQJBDBNVFBSPFWQDQLTIJWFJOTGMMQKOENLDXBSJJSJAX");
    msg.dest_man.assign("SVHAEKJILMAQKTZRQCSZIOXKSGXCZVAFRBUVNJDGMHZRUHEZPYVXNAWTRLCTIMBMOS");
    msg.conditions.assign("XPTCYSUJNEHPMJEVNAFZOILZNWOIYRHHQXJJDEVGGUKPUUAVMKCHNSPPFTTCTLOOUACGQVBIFMIWDLMDSATVLXOLFRSVDKEMJNWKDNWSLRAXOSNNYKSIJYSRRSYBBWCPVCBOBPYZAIZHHGZQBAXMZVHVWOCBAEEWASFDQXZYYWQJNMCOHQGDETUQGZTJKUPMEHFLQKFXRYIZRLRU");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.945934845831);
    msg.setSource(26729U);
    msg.setSourceEntity(84U);
    msg.setDestination(19191U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("OXTGMRUPXJYPDCMDSOSAGLOEEHJUKPASSTVWJQMJFFSWOVTOBDZFKZZQNIVIZQAYYGQIPDTKVSQIGQENAWOTBRFUBOGVSPZWFEHCXTAYKAYBNAISCKQXDHQFOWURULIUCTSMNRTXBKNHCHBXIABWBUVWMCYZDNUDOLEIETDKPGMRZLKSFUGHUMAOCFYJMPNLQVPMYAMJVDJGZEHEKYVEJXYVCPQDRCBERHRIR");
    msg.dest_man.assign("EZLJFRZTQVJZGLHZKVPYCULOSJDMCSIISSUXYKMGIDGKOAFXRWAHTMGIAQCOELJERXVAIWOQKWXIVQFZMDGUYHXUWNRHHRLZZPYSYPPKIQEMQUXJJFKQDFWTQGEXHAXYCCNMPKBCIWEZBRSYUPNNECLLBLTFNKGBFHTADCBBVQKBYMSYHWPRSILDEUHVNVFLNBPDMNAWAAWSFCZTVXUOGYQJNHEUOTG");
    msg.conditions.assign("CUWXXQSAZFPRBTMSDBRIZJFCQBROOZLHLPFOLMNKPWLZKAKVDRJSPJXUVFVUHZKQAYQXGFRNWYOIXDBNGAJOTGXPUIPMNJIOINXSWCHPCTVPBTOEAQEBGVLQWMPVQYEEMLBZYGCZYSWHRYBNDWKFNHISRSDTWKMJATIQGXEEUFDZNOECKRFMKLITUTYRSK");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 68U;
    tmp_msg_0.x = 0.041252401033;
    tmp_msg_0.y = 0.908036053533;
    tmp_msg_0.z = 0.522310737214;
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
    msg.setTimeStamp(0.266743976882);
    msg.setSource(53132U);
    msg.setSourceEntity(89U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(123U);
    msg.command = 91U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RSLKDUNJHZNDJVEUXDSWWWXFCPXQPTIKWLAXGKTSLBNQRKBGVOYJILFTLLLEGEPRQIAPRNJGMI");
    tmp_msg_0.description.assign("UCEOZGOLDYVZHXBEWUVQDEBNJIYBNKNKDZFSQPGFJURHPXZWFLYQMPP");
    tmp_msg_0.vnamespace.assign("KTLQMPZJSXBWJMDSSEAXXKWZCQGUQHRFIDLCMNSCMHYOVUUJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UPLUTYCEEEBLJCRCQSMRNZXDSYBFMLJKAPKNDRRCXSBHTZOWGJAPFLILHNJLPOKIGQZXSVAIVAXWXHGXPAVYTBEZEMCDYYFQZHKMGUKFEMATTZLTFQEIONXDCAKUKXCCIRURNBWORSPONMIFVVWFJYNYIGHRQPVYBAYEHVGPQMVGKNLQSOXIEZXSJBCHVMBOZQQUQPWWD");
    tmp_tmp_msg_0_0.value.assign("MRFJBTMAYSEHKVIGGHHZFNUZLUWZCYCPYHBRDRGZVTBYNTVBDILREPWUOMDYMFQINQUOXIWSZZXUDPXVMKXDNKJWAEZKZLHIFFWJAESUSBPZPJYHHQFPLQUKDJOXMGVTQYPFLXOEDLGXYMALRMWCRKFEBCGBQMAWGLUNSOOEGZHYELSHPKGOTJEUOOTVCWNVBCSCAS");
    tmp_tmp_msg_0_0.type = 112U;
    tmp_tmp_msg_0_0.access = 105U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JJSCLDPHYIWYHKXQCMFXCKHPFIDBKRVZYELYFNYIQTQRGBFMLUGRUUENXDZMVZERIHWUPQBWOTZTWDDOBUTXWAHAMXOOBGVKZUKAXESHJWMFAUPXAJGCQNVQYMEIENBRSIQBTECSCJSAZLPKIOXYSKFNFVOKH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GYTKHWVJTBIWXZWPJUQTIRNJRFPMONQZLMXDLKSNPMUJCYHSHRIIVUBSEVCQWFVWJNOFXGMDSRDKBVGEOOIOMAKKQXPDNYAEDVYREDYFPLQUKHAIKFMFVLCXSCAPQHRTACLMDOOJRMNAZQGVTEFZWOXMOGRSYEXKGZJWCUAHNPJBGGXTUWPZZUQSTZCNCGBUXHDUPGLTZABHYJLBXLVKOWJENBSASLFQVRTBEHDLZIYIMIFCUEC");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 5943U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 72U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.522657101581;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.415576993543;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.780187212056;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("UJPFQYCWZZJDYSKGGGCSXQAMQJNNATRGULLLNSUXWKBDXWPFQZFBWTOGIRVFJTUUBJRAYBHQYSKCKROPHEDZZPDHWVUUSEFAKEAAZZYSVAE");
    tmp_tmp_msg_0_2.dest_man.assign("DKROVXMCDELNFEDWKFQZUYXGKVCHQDBK");
    tmp_tmp_msg_0_2.conditions.assign("GWCLYIHBNAXXQXFNXCOEMMNDOQYFRTRURWNWJBEPRZPZHABOUMMKUTLXVGQGXEDYGPEECTYUQKQDVIFTTADSFNTOYZGAPWHUPHORDWIHLTKCPJVCSKEFJVXFBOLZITNNJIVVMDVSCHQBCAWQEYLMZSIZJLAFPXEMWJHUYBQKSORGUYBEXYLJCDZXLVUANRQKKWBWSJNDMFBTHRZZGPFAJOAGLGSBIRVZOFICNCMUJUPVESSIILHSYHAKDMOGK");
    IMC::DesiredVelocity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.u = 0.310925006058;
    tmp_tmp_tmp_msg_0_2_0.v = 0.0640028213706;
    tmp_tmp_tmp_msg_0_2_0.w = 0.84715860917;
    tmp_tmp_tmp_msg_0_2_0.p = 0.581524980866;
    tmp_tmp_tmp_msg_0_2_0.q = 0.934266010858;
    tmp_tmp_tmp_msg_0_2_0.r = 0.0781499402849;
    tmp_tmp_tmp_msg_0_2_0.flags = 89U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::AutopilotMode tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.autonomy = 131U;
    tmp_tmp_msg_0_3.mode.assign("EPEFBCGZTSYKPADMRHDMGUGHBLHKUVERGKBDYPXXSFPYRBELYANNVJSIQIZTSSVKGTPEJNMFZEJZRKBUXOLSILSOWIMYQOEEDUNARC");
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
    msg.setTimeStamp(0.576185057405);
    msg.setSource(59675U);
    msg.setSourceEntity(24U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(159U);
    msg.command = 77U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GUBDBJIISZPEWIPFCPLXXFPWOZCGGCRMEDTGTOKVKZJILCAKQXYZMSJB");
    tmp_msg_0.description.assign("LEMULYSSUYEJXTDFDUEHTJHIXQVVFICWRVCAQULAJZQOSFTHNMMKNUHKSZUCDJWGFCDPLZGJVBRVOEXTEILNXWFWKYIQFYGRBNKVCDNYZSDVNDKAQJXNTUTAFFPWPIXDMDHIJSINMSHIRCKJWBZRNOMPZOMZYGCRXSNYTLHYIQPLROUJZGBCVAGPURLOABF");
    tmp_msg_0.vnamespace.assign("BALAWMUUDJTEJLJMBFWCUNWVPKTHOWSEKSAPIEBUSAOZUSMNJQNUTVFAAMCAHMLJYV");
    tmp_msg_0.start_man_id.assign("RSZTFGWHKKDPAFAWYUDBZGIAPBDJGHOOGWRXEYLRYVWLVBDQJINQIXRSEPKJMVBAWFWCXIHTRXAEZOPTJZPNHCVVOLYITDRNHBNJPHSQEOPLUBXRIJNEZQOZXTEWIGCYIENZDCCEQYUOFMVACNLSTBQSGFVSBUAXFGKTSIZVVCKUMLAIPHKWLLWQKXKUGSQFQTORHJQJYDGSFRAFNDYAWTNOKDEGFLMXCKHRSBDMZLPCMMUCYZMEUBMMVXUOJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LXGTUGDRSPGEVIXTLPBWKTRPXKSVEEYZOVOIDFBRWRPPQNRJZUQATEYYWPHIOZOCGAQYWVMQLCLKUUVHFSLVDGMPEFQNMCVDZDQIEOXCCGBIORDDAHAJXGBC");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 43878U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LPSIJKOHXMWYYSJUXPVLGLFQFBAJXSEMYLRSFZVTGQXYRNCNLSCQGPIPLUUCHFNXZRTKGZETMJIDBLPFGJVGOZAUSQCHJWUTOBMYTJHVYZYHZQEGIPQKAPGEYQKZTOFANEFIQBJIOWDVROKMUMTJECBTBHPKCWSMHNAJWWARICHQQUBIPXVTWBXDVDRZCKA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FVJKNSZTUSSXRLGGRDVDMUUHREMPWBJFFCIQAWGJPIRZUSGHLLLHBOWEUNRAJQVFXFNYJLDISIORYOZHLMYJTPTIQMKVTCVAYMOXOCMJNPAVHQUROSSPXEZVEA");
    tmp_tmp_msg_0_1.dest_man.assign("CZPGNPRXVEJAMBERHWEU");
    tmp_tmp_msg_0_1.conditions.assign("VJPDOMLDWTMNYDVWCBZCLEINDGCGKKNWQXZOXXHMXYMUVEJMBOARYIJTAVD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("HOWIPEKOHMISQKMWNELVSYVNYDRTCEOWXSSIRATRSIUEFXYGXNVGJOCRRJVMWQGUVPNGBLNQYBLLZLKQMOBBXGQYOZJMJFBYFXJZNZZHQISUPHUQJCYWDXEILDZXAFLAOGKPG");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.14270755632);
    msg.setSource(40950U);
    msg.setSourceEntity(117U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(114U);
    msg.command = 65U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JRYHLNIQWKAEEYLVERXOZKMIOYTBQEQEEUXASXWSBXDSYNKBWFFF");
    tmp_msg_0.description.assign("BQVLOTHXYMTQAUXPTNOVFQOSUXINDFTZRRSINDRFPOUKYFEEJTCFGLMNFCJMQIEDPWSSNC");
    tmp_msg_0.vnamespace.assign("NRTSXNSEUPUGLNZUPFTLSMYKXZBXOKSIMQEDMNUVBOREZXUYPLRFFSJTZAGNAITTJAYAKUMOYZYTSHTHYNHARXCOGPGXKFGLNDDQEZVPCTDUWCMKECJHEMDLWJQGCSFWIQBYXEHFJMCOWYDNCRLCRBXSLKRJLVDHOLPHBBPWPJHOZHVPVAWBBPLIMODKIYVFKGUEFGGXWAXRBOVBCQSQUFTQKIERKJRWWA");
    tmp_msg_0.start_man_id.assign("XMANBENNEEBTHGWDJRPVVVLFHHQLQAFGZWLEAEJUPWQFXFMDMOJONSIEAHLYMRGXGFKAQZSBGZDFYVGPZUWTBAEIKEZHSDQYJUMHNNRHTTFDZGXXLXDJQIWETOC");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RTUMIDLWXKZNYOUUBWMXKUMSEGFAQQINDFSUJZ");
    tmp_tmp_msg_0_0.dest_man.assign("SOLKYNXXOGYQUZHPIOBOWGWTHXFGNMUULWRDGLIXVLWXDZAKWKSDJUZTJFZJRVHQVWCXJPJFMRTQKMTHDNYPWAMLRJLBDCZJXIMAVRRCRGUKRKYVOIFNXTOIPRCZJEEEYSNVJKZXUSPPQDIQNBASNPIDRAENMSYZABDABESSHCLMHBVSMHAMNCGEDQFGWKOVTFFEPBGBOOTJIFWAQCTBCHV");
    tmp_tmp_msg_0_0.conditions.assign("POINQQSJLQWLKAIDWWVUHPTMQVRUNDALGBBMVJDFKCABCZMNOKMXBQDJWOCKYRKOUDAZTJTXDGMAUKHINHERBZYXJCUGEZJTILNRPFLVELVFK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Elevator tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 47576U;
    tmp_tmp_msg_0_1.flags = 67U;
    tmp_tmp_msg_0_1.lat = 0.574531639823;
    tmp_tmp_msg_0_1.lon = 0.196038599219;
    tmp_tmp_msg_0_1.start_z = 0.629855727545;
    tmp_tmp_msg_0_1.start_z_units = 27U;
    tmp_tmp_msg_0_1.end_z = 0.316535105494;
    tmp_tmp_msg_0_1.end_z_units = 107U;
    tmp_tmp_msg_0_1.radius = 0.967236051311;
    tmp_tmp_msg_0_1.speed = 0.211233654416;
    tmp_tmp_msg_0_1.speed_units = 25U;
    tmp_tmp_msg_0_1.custom.assign("TKCSIAUHSNMHDPUTZECGYLEGRXDJQTXLONRPQYFPBKISQGACGDPVUVMCECAARUKQZQVABDGCFOLZHFXRWVWOM");
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
    msg.setTimeStamp(0.0305317758749);
    msg.setSource(62687U);
    msg.setSourceEntity(164U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(206U);
    msg.state = 54U;
    msg.plan_id.assign("MUCWKSZRRKKQYMSYQYCJFZNUDOWLDTVZYBWTVOOVQXTVBXARAFAEUCBNJAVVFQZZLCCXFVI");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.655475841766);
    msg.setSource(52732U);
    msg.setSourceEntity(108U);
    msg.setDestination(43950U);
    msg.setDestinationEntity(253U);
    msg.state = 158U;
    msg.plan_id.assign("ZMZDYEOJAHXHBDTGDFAGKSMNNQHXUFTZUIMWBTJZKJKKXARTWCXLUZYISRDFXVEHUPRBVUZAEUGPGRSBVTNOJL");
    msg.comm_level = 166U;

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
    msg.setTimeStamp(0.0903691691926);
    msg.setSource(44448U);
    msg.setSourceEntity(37U);
    msg.setDestination(6653U);
    msg.setDestinationEntity(215U);
    msg.state = 54U;
    msg.plan_id.assign("NBLOTXSTEWFYHWKZAMVLMACFRJDSYHXGBLMQDZKNVDZXOMGZAMFXUQRONEBVZREIYWDOYJQWOKAARCDRBKKRJVGYEENWTUTSLGYBSMFWOYWACNKXVPKNUPUENCLOGNFVUQPCHYGLYZVCIQJMSPTZQPCLHPUQPGPJXKEC");
    msg.comm_level = 67U;

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
    msg.setTimeStamp(0.477874176454);
    msg.setSource(51703U);
    msg.setSourceEntity(32U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(114U);
    msg.type = 10U;
    msg.op = 229U;
    msg.request_id = 43126U;
    msg.plan_id.assign("CNSIFYGLJMYITKNPQLZUNDVHQCAVDEJANFGOZQKLREYYBSHWUYCHFERDFSPZJLOZMRHOHJBZPYISXIDKRPVCIDO");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.502607222928;
    tmp_msg_0.x = 0.746566291201;
    tmp_msg_0.y = 0.848547723187;
    tmp_msg_0.z = 0.32408036618;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FJLBOYPPPVSXP");

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
    msg.setTimeStamp(0.307492857125);
    msg.setSource(6146U);
    msg.setSourceEntity(81U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(200U);
    msg.type = 94U;
    msg.op = 122U;
    msg.request_id = 60128U;
    msg.plan_id.assign("NVHFZEDAVLYPAKXKSMBFSHHYXUOABLAFZGUDRQMLCTDRFXRYSZGOOGFDHIULIVCTOUDYWUZUBSLJQDAEPCCRKXUVTPEPNXGVJKFGPNTKNQELXIMNFYNZYGTRAPCWQHPFVCDEJREUTOIOCSKLMBYQMMCSIYHABQHLJRISVEZRENVATJKBJHEPTLGNWBAWSZQPWEADMTBCDWHVIKUSVBOZKNXUCHSIOMOXQZFWWXBOJJYRKGPGQINZRLMW");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 164U;
    tmp_msg_0.value = 0.693011832485;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GGLDISZOVWKLXQFNTXMZTMDYVNMVJKBTQPHFLIIVAPBJEIYSOSWBHEAUWRKBDABFCVJRINVUTFRKXDKVIH");

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
    msg.setTimeStamp(0.237216569649);
    msg.setSource(19698U);
    msg.setSourceEntity(196U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(109U);
    msg.type = 245U;
    msg.op = 22U;
    msg.request_id = 4244U;
    msg.plan_id.assign("TVPXKXGFBDTLHMIZLHTZPSDGIVVMNXECXSFSALDGXLZQVOQJUDVJMVJHEPRMKUZCWFEXTFWSLUIBDXGAKWLPJUMUEHEFBATNKUECPPNSTINUGYAWRUZRSNYNBXDYPUQPCRQWKWBYQBZBQOJRYYWIJYEBSPDOCTSJOBQKROCCQOSQJYZXKGGDGZORLALVHYHLKERHFUCONNIFWRHFF");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 203U;
    tmp_msg_0.value = 0.499991124934;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QHMFNYOLEYYADSOXGLRKMGWTZSPNIMWMZPAUGPXW");

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
    msg.setTimeStamp(0.845867342324);
    msg.setSource(25589U);
    msg.setSourceEntity(175U);
    msg.setDestination(12874U);
    msg.setDestinationEntity(94U);
    msg.plan_count = 39400U;
    msg.plan_size = 3262581797U;
    msg.change_time = 0.729628449625;
    msg.change_sid = 16246U;
    msg.change_sname.assign("JLUZATQQYMDMZWIQHBSPA");
    const char tmp_msg_0[] = {-112, 107, -50, 125, -48, -118, -115, 52, -11, -52, 12, -69, 50, -32, -68, -42, 4, -111, 6, 82, -37, -83, 0, -68, -36, -50, -65, 63, -27, 102, 51, 31, -68, -37, -56, 71, -32, -122, -28, -43, -4, -15, -18, 12, 102, 121, -2, -42, 105, 118, -88, -4, -69, -54, 6, 82, 14, -42, 27, -109, 29, 117, -39, -2, -123, -127, -33, -30, -30, 124, -14, 2, -13, 26, -91, 66, 108, -22, -41, -61, -90, -125, -125, -127, -40, 91, -50, 2, 23, -93, -118, 28, 30, -29, 110, 49, -59, -104, 18, -108, 66, -25, -115, 4, 43, 20, 56, 123, 77, 118, 79, -68, 64, 39, -111, -107, -6, -59, -114, -23, -45, 106, -20, 12, -69, -103, -60, 92, -5, -36, 110, 81, 102, -46, -85, -21, -47, -68, -1, -1, -116, -28, 87, -87, -86, -53, -73, -28, -99, -118, 108, 71, 86, 119, -100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CJSVIHWONRQABMNQCJHNEQKZDUTRZZWWQSUKJTASJYVUVDHKZAAZDQDGIWPCLBWTXCYQCTWVTKFRDGKXMY");
    tmp_msg_1.plan_size = 32982U;
    tmp_msg_1.change_time = 0.202587091723;
    tmp_msg_1.change_sid = 37440U;
    tmp_msg_1.change_sname.assign("GXJPMDBLAVUECTFFYITUQEORCHDGJLTEPSNOYTRFXUMZABAQMJRDSEOLBIJBRSZCOVEJGPMGFVINA");
    const char tmp_tmp_msg_1_0[] = {-95, -46, -86, -88, -86, 52, -53, -81, -69, -60, -101, -104, -13, -44, 54, -127, 38, 23, 28, 38, 45, 7, -36, -15, 38, 21, 106, 4, -100, -33, 72, 22, 110, -26, 87, 88, -52, -65, 74, -111, 91, -15, 108, -5, 18, -89, -103, -54, -92, -10, 110, 14, 84, 41, -2, 78, -91, -46, 66, 124, -79, 94, 115, 59, -71, -54, -59, -59, -115, 3, 109, 78, -91, -25, -17, 26, -60, 2, -8, 6, -38, -11, 113, 8, 55, -124, -110, 37, -44, -12, -97, -4, -62, -1, -93, 81, 115, -113, 81, -28, -13, 78, -126, 115, 24, 99, -86, 86, -93, -64, -78, -34, -118, -31, 106, -122, 105, -14, 81, 1, 53, -81, 31, -42, 7, 79, -96, 108, -30, -53, -63, -22, -8, 92, -6, 46, -40, -93, 39, -107, -38, 93, -52, 89, -96, 22, -94, -100, -19, -21, 22, -78, 106, -33, -49, 19, 2, 25, 116, -12, 56, -117, -100, -128, -17, -12, -52, 105, -111, -78, -99, 124, 74, 33, -54, 9, 70, 106, 34, 31, -67, 67, 61, -68, 38, -91, 104, -101, 64, -86, 69, -127, -99, 118, -81, 96, -63, 123, 39, 118, 0, 50, -66, 29, 56, 60, -37};
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
    msg.setTimeStamp(0.869337091885);
    msg.setSource(10621U);
    msg.setSourceEntity(177U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(74U);
    msg.plan_count = 38369U;
    msg.plan_size = 3586576972U;
    msg.change_time = 0.971242819871;
    msg.change_sid = 19465U;
    msg.change_sname.assign("RADIQIOMWYZGPLGQZUMPSSSYOPFFZRDEPMQXTDZTJOFTHXAWCGUISMVTDPKIAMDVYODFWFNHUUUPDHNLQALAHKXRXJJRLVIAKIUGEHUEBEHOLZWEXTGWCBBQBNKSEVLUMCGVEZJKBQFTWLANBRHRJYSGZPSSJKX");
    const char tmp_msg_0[] = {4, 116, 5, 26, 120, 30, -117, 123, -27, 66, -90, 10, 32, 85, -35, -114, -46, 85, -116, 120, 109, 52, -20, 73, -42, 26, -57, 24, -107, -46, 118, -29, 30, 114, 97, -127, 61, 107, 124, -28, 124, 44, -36, 13, 26, -106, 25, -33, -8, 47, -79, -76, -124, 78, 115, 8, -27, 95, 45, 78, -118, 31, 12, 73, 67, -121, 43, 64, -39, -2, 20, -6, -71, -128, -108, -14, -94, 97, -48, -31, 12, -56, -128, -80, 47, 97, 101, -43, -92, 55, 73, -62, -108, -71, 88, 21, -101, -17, -40, -10, -73, 123, -101, 75, 30, 95, 61, -128, -7, 27, 27, 47, 9, 19, -116, 117, 81, 95, 86, -115, 104, 61, 54, 31, -33, -36, 87, -6, 48, 81, 55, -13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PPUOVRVXMZPDAPJXCKVEFFSQFKAVURHJRHXQOMRWEPINRNZNFYGBADGDYDGDIQQULVZSCVABJHCGBTOJNZVNKSTNHRUDOWOMMDQYXYSQEHVEDAKTOLWMUFGPSXZBSWMJWTLLTOIJHLOHCXPNWWMYIYGXZZUUJBAIREAZKZSFPYVIKRAYQPQKDSNKUFGLAXBPCSULVKFICRQGHLYKBTWLECBCOUQCOMIJNLIYFTTG");
    tmp_msg_1.plan_size = 56844U;
    tmp_msg_1.change_time = 0.118325737463;
    tmp_msg_1.change_sid = 42866U;
    tmp_msg_1.change_sname.assign("MTELKMGKARMIAGHBAXVVLYHAFIUEPOPHXPALRJUEMCHWRQDJTZYXKYHLWJNBRGCZRWCSPFLTWKIBQRCPNDIUFOTGMEMIJIPAYWPVHOWZVXKSJPBAGYSDNZYRACIWOOFKYSMOZDWASSQKHUQRIFXWBNMMUZNCVZFFLBSZJQNHDBETXSCGTXVKOFYEPGA");
    const char tmp_tmp_msg_1_0[] = {-76, 35, -90, 76, 99, 36, 60, -95, -40, -42, 56, 63, 27, 65, 112, 99, 88, 76, 74, 72, -10, -17, 60, -44, -39, -99, 35, 123, -125, 105, -128, 112, -24, -102, -53, -98, -46, 111, -40, 56, -103, -43, 121, 107, -3, 126, 52, -101, -1, -117, -3, -68, 54, 112, -74, -98, -5, -54, -113, -126, 116, -108, -70, 1, -52, -71, 80, -13, -121, 47, 17, 26, -58, 111, 125, 123, 28, -33, -28, -96, -66, 74, -48, 88, 57, 103, -25, -30, 48, 69, 116, -58, 105, 11, 56, -54, 24, 50, 122, 126, -68, 42, -24, 47, -41, 37};
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
    msg.setTimeStamp(0.707184678094);
    msg.setSource(47663U);
    msg.setSourceEntity(213U);
    msg.setDestination(10392U);
    msg.setDestinationEntity(181U);
    msg.plan_count = 32956U;
    msg.plan_size = 2586432645U;
    msg.change_time = 0.543530788739;
    msg.change_sid = 4773U;
    msg.change_sname.assign("MPFMNKZHSORDXGRLIQEQMIRLAVCUUBRPPJYVALCDQWALXEZQBARINEFRHUNTKNCQXYIQRMPRGTVCGDMZQUVCTVSHFYSROBOOYMTYSICUPTQBFCAFWXHIGITMGCWKSBONOFGHZKAGFTDWEPFPDNELWNJKZZVBSX");
    const char tmp_msg_0[] = {-37, 17, -109, -74, 84, 31, 89, -68, -126, -64, 64, 120, 53, 31, -107, 90, -33, -60, 74, -120, -90, -29, -46, 58, -103, -31, 10, -92, 44, 88, 79, -112, 70, -38, -33, 71, -15, -102, 112, -65, -63, -91, 31, -45, 33, -77, 25, -31, 126, -61, -56, -35, 64, 103, -72, -105, -67, 119, 115, 116, -113, -55, 16, 49, -55, -95, -78, 49, -119, 120, -82, 96, -101, -126, -37, 119, -121, -62, 55, 124, -11, 19, 100, -123, 16, 21, 126, 57, 21, 83, 102, -74, 71, -71, 82, 38, -92, -76, -39, -57, -118, -33, 17, 8, -56, -126, -51, -26, -106, -1, -97, -29, -71, -71, 92, 20, -106, -28, 101, 64, -33, -126, 38, -74, 35, 77, 60, -95};
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
    msg.setTimeStamp(0.331923129142);
    msg.setSource(21182U);
    msg.setSourceEntity(144U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("QGFVQYXXQIWAESWXHVHLWCDHWLGPDSNKSERE");
    msg.plan_size = 6252U;
    msg.change_time = 0.829184492935;
    msg.change_sid = 33083U;
    msg.change_sname.assign("VFDJLHKWFDVKZMJNMWHZXBUDHNDAUBLWRTAAONEMXBENLBFSKTU");
    const char tmp_msg_0[] = {118, -85, -98, 107, 26, -116, -38, -84, -19, -123, -88, 8, -87, 17, 57, 55, 82, -53, 22, 19, -80, -127, 108, -92, 16, -47, -46, -111, 21, 80, 109, 41, 26, 60, 22, -44, 16, 6, -38, 114, -90, -83, 70, 87, 106, 56, 99, -15, -128, -3, -90, 45, -33, 111, -58, 66, 89, -13, -38, 74, 11, 4, -60, 113, 54, 121, -1, -99, -48, 16, 121, 20, 93, -80, -30, -13, -59, -9, 14, -68, 34, 83, 16, -9, 77, 95, 52, 109, 124, -26, -37, -48, -47, 25, 35, -32, -120, 51, -92, -77, -77, -8, -59, 55, -8, -80, -78, 59, -114, 67, -47, 62, 32, -66, -112, -21, -9, -20, -87, 34, -61, -72, -12, -80, -113, 107, -128, 13, -97, -75, -118, -14, 84, -47, 88, 10, 25, -84, 89, 94, 114, 95, 59, -49, -56, -33, 96, -101, 31, 114, -55, 5, -109, 84, 58, 19, 0, 103, -61, 103, -122, -117, -77, 37, -89, 3, -113, -70, 118, 109, 12, -1, 38, 45, -106, -105, 32, -17, -40, 123, -31, 34, 11, -91, 83, -43};
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
    msg.setTimeStamp(0.15777000432);
    msg.setSource(34876U);
    msg.setSourceEntity(172U);
    msg.setDestination(48406U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("NPEKKXOTXQUOTHXVMYHCZBKQGMZNSSCYULFXWMPJZNJIWOCESDVQMRDZTVNGGIJCACNULHCHIAXGBBTOBURYPTLELHAKSTRRYYUPAZHUMGGKJWCJUFRJSDJQIFNFTQXHJLALYOMEPWWWFTYGUFIRLOWDSHDJBHJWPSYXPXVZCXAEFDVGVEEDPZBRVDQFRIYFFQCWEQTZVZLVKTSBUGONBMAKDGIKISZ");
    msg.plan_size = 7203U;
    msg.change_time = 0.394859504367;
    msg.change_sid = 5663U;
    msg.change_sname.assign("HFGZXSODTVZUOMVMNJBHCLLODTLKYQRJUMJOTQMCJSJXFUIIXOIQODSUCOYQGZWCFPEWEKZJIQPXIY");
    const char tmp_msg_0[] = {107, 32, 58, 48, 124, 28, 57, -24, -90, -102, -86, -56, -100, -103, -89, -96, -33, 116, -122, -25, -69, 37, -48, 90, -67, -64, -34, -68, 4, -41, 64, -119, -6, 2, -60, -42, -40, 3, 126, -36, 51, 84, 110, 94, 115, -94, 97, -37, 118, 43, -45, 53, -126, 111, -105, -97, -113, 81, 38, 103, 16, -49, 118, 58, 2, -77, -80, 14, -39, 126, 107, 7, 89, -80, 78, -27, -100, 88, -124, 82, -15, -19, -87, 30, -46, -107, 16, -41, 101, 100, 76, -24, 64, 121, 41, 52, -89, -50, -36, -52, 78, 68, -4, 48, 0, -22, 82, 79, 42, -68, 84, 107, 113, 53, -60, -86, 83, -114, -126, -111, -118, -98, 55, -82, 68, 36, 93, 63, 34, 97, 75, -66, -16, 95, -10, 117, 77, -49, 64, 98, 110, -68, -93, 50, 51, 18, -106, -60, 72, -3, 88, 66, -65, 38, 41, 20, 29, 99, -70, 108, 94, -20, -62, 30, -116, 1, -69, -62, 92, -104, -118, -59, 64, -66, 2, 38, 5, 125, -93, 91, 47, -104, 68, 19, -57, 35, 36, 115, 13, 68, -101};
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
    msg.setTimeStamp(0.430846742764);
    msg.setSource(3894U);
    msg.setSourceEntity(254U);
    msg.setDestination(14820U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("TPOTINYFWOSBEPCDHXEKSQDRIGOATKOSSAOVGAVNBQCSUCGCQZXBQPLDJHITSCCUYRTJLKNEHFEMRKLMF");
    msg.plan_size = 25091U;
    msg.change_time = 0.835822547691;
    msg.change_sid = 5450U;
    msg.change_sname.assign("MQOGXGEVUSQPOYGBAMZGSWBYNYHVGZBDUZLBAWAMXYIZXLSOFSSMFCNTZEYKNRPVLUUHTB");
    const char tmp_msg_0[] = {80, 34, 20, 3, -16, -24, -110, -84, -56, 69, -24, -69, -115, -92, 114, 117, 1, -82};
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
    msg.setTimeStamp(0.831787504052);
    msg.setSource(54192U);
    msg.setSourceEntity(47U);
    msg.setDestination(9897U);
    msg.setDestinationEntity(253U);
    msg.type = 228U;
    msg.op = 154U;
    msg.request_id = 7691U;
    msg.plan_id.assign("HEUQNGVQKIWWUUVFPIURLEGGABHPKQIJRD");
    msg.flags = 13238U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 50681U;
    tmp_msg_0.value = 174U;
    tmp_msg_0.error.assign("TDQTMHQKIQNTBMMLBTDDVZUIDSELMAMRVWYEIEFBKGNQFXRJWXVBVRVREPRQFGCPSALZJEKPORFUXVHOJYOPAPJAZXTHBQBEHPCGNMOHSSHDAMLIDGNUQQWVCHZRSPBGQPGRPIIUBTOMWLEHDICOUSVWXAXIOHTCGKYZLIZJIOSKADGJNWTSTKNNKWOSYCVJYXBYCGVHDLZFZTYNEFNBEXCKKYLFMARMYAJECFL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RHZERHNAACRBBQINXIYYBBGUKNBXWOG");

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
    msg.setTimeStamp(0.468860544846);
    msg.setSource(61599U);
    msg.setSourceEntity(103U);
    msg.setDestination(23495U);
    msg.setDestinationEntity(44U);
    msg.type = 188U;
    msg.op = 108U;
    msg.request_id = 5648U;
    msg.plan_id.assign("CBZZMWXGXQBDANCXMWGRKXYEGABXDFURJHQUOBNEJDDRKKNISHDHEVGSZKWXHTSIVZZBMTJVUNRYLIBQFBQUYQQKVUUPUUTMDTOFVXJYRRFAHTNPUIGBJEIEOHETKOPNCAEXWZLOJCDCOVPOWAVPZLCEHRXDLMJN");
    msg.flags = 62024U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 215U;
    tmp_msg_0.plan_id.assign("ZBWFNYJUJGMRYNTPKCTOCIOASHCQUBJPHEEXATUDBMSWQIUHGXFLZUOOGXHDPEJZSPDAUCPNORKEDTSTPFZQGLKGRPQKGQNJAHQQAHWODGEYOBJSXZVIBPVVEDOWHFKRDRLGZBYCNCPUHCGIWIJVIVRCAMTTWATCDFTMVKGILYCYVQ");
    tmp_msg_0.comm_level = 163U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AVKYPGVPHIWBIYRQVMFDUMBDNRHCKFBVNSSXSVODRQKCMNGZYUTFHWJXSTBETJXGCBHAOUOKEUMAWSEYWCDLKWGSZBYYRPAMXUEEMVSACEGZXQFZALKVQMPJELOXDONQUHVWGOUPIZXPJAXIACUZRLQVVXITJBPWMTIFREGUIOSJMHJUHEPDTFZCGRAEQQBYJWKDQGLNNLSKBFNAPLOCLDNPLIJZSTFKWCHDGFYT");

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
    msg.setTimeStamp(0.00343406370113);
    msg.setSource(3994U);
    msg.setSourceEntity(146U);
    msg.setDestination(305U);
    msg.setDestinationEntity(121U);
    msg.type = 216U;
    msg.op = 44U;
    msg.request_id = 54937U;
    msg.plan_id.assign("NFLHWKUAXOUNTWZXDTWZCZCBERRYTEBLHBGGRHGQYTWSJHWTPVMYKNBVE");
    msg.flags = 6928U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 172U;
    tmp_msg_0.tas2acc_pgain = 0.398602328392;
    tmp_msg_0.bank2p_pgain = 0.716881874647;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VFSEDIYJLANVPQAUSJRNBCNAIKMFCWPYTFCESXLPCKRJKEFJXYJSGEVHOYJZVBELAZYRNLRNNDNNOZRFGALHDRBEQLOMEIHU");

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
    msg.setTimeStamp(0.567170876165);
    msg.setSource(42271U);
    msg.setSourceEntity(164U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(122U);
    msg.state = 3U;
    msg.plan_id.assign("LJIOXGUGAFNVEMWTDHEQNYVUHSSVRTWPYZDZBGTKQ");
    msg.plan_eta = 340943353;
    msg.plan_progress = 0.0444136129069;
    msg.man_id.assign("LEELKQOYGRATNXUWRLFNQFFXRMVDSZIKICJDGURNI");
    msg.man_type = 25170U;
    msg.man_eta = 694406310;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.0847624244823);
    msg.setSource(4288U);
    msg.setSourceEntity(104U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(184U);
    msg.state = 139U;
    msg.plan_id.assign("OPRQQCAKPVJZCBGHPJKRVDBBME");
    msg.plan_eta = -217416483;
    msg.plan_progress = 0.172476698186;
    msg.man_id.assign("MQZNCXLREJOMQRJKMVPRCEKEUWTMPMGDTHKFYFIQEUKBAEEVVLOGAPYXPHRDJWHGSLTIUNWDXHJEOCBZDUCXAZKFZPDSHLRBOTVIAJBXNTVUOUZQLIUZTKLN");
    msg.man_type = 60956U;
    msg.man_eta = 1946778077;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.23398864528);
    msg.setSource(32729U);
    msg.setSourceEntity(49U);
    msg.setDestination(8164U);
    msg.setDestinationEntity(68U);
    msg.state = 99U;
    msg.plan_id.assign("WWEBCSPUSLIPMNYLEDAHEGDZHLVVHJVSVGLXKGTQTNNPMINRHZBMTBODLJSCVQJTRKYOIZIJGOBKYMNA");
    msg.plan_eta = 1554428334;
    msg.plan_progress = 0.714275447712;
    msg.man_id.assign("XXTZTIRAXIBQ");
    msg.man_type = 55095U;
    msg.man_eta = -154714557;
    msg.last_outcome = 190U;

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
    msg.setTimeStamp(0.914852101755);
    msg.setSource(18944U);
    msg.setSourceEntity(245U);
    msg.setDestination(53509U);
    msg.setDestinationEntity(167U);
    msg.name.assign("WREZMJCIEATXOLAPFLQINDVZHHKQCTIQJPBSUIK");
    msg.value.assign("RPKNIIUNCWLGBGVKGUXMLGUDHWJIUDLN");
    msg.type = 153U;
    msg.access = 85U;

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
    msg.setTimeStamp(0.386915505307);
    msg.setSource(2350U);
    msg.setSourceEntity(134U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(216U);
    msg.name.assign("XUKWJYISCJPUIFXRNNBFBPJEMOAWOEIVUOGCIFGNTMVDZVKZSHAEUFBHCLRABPGHADLHZUJJMFXTAYFCOYJRCVLKLONZXKRQNTRXEJIGQWQKITNFVYXPNQEVHPWBGIWQXKWIZGDUSCLWZROWOSCPIJDMQYTAAH");
    msg.value.assign("JZZFDKTRMRYCNQVRTIBZXPLMFFJCTHDFJEOCH");
    msg.type = 2U;
    msg.access = 116U;

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
    msg.setTimeStamp(0.866627824138);
    msg.setSource(43606U);
    msg.setSourceEntity(244U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(30U);
    msg.name.assign("GHQTTTULYNAHWFLHXBZJYSRGJLUKJGAZBIBCABGLKXRDJNULTFROQDMYOOYEKSNMKDSWMYYKQRIZHMSPXEPZHCPBWRTGJBNSJUAOIXXTTPDSRWVFOUZNVHHQVEXFRODDPFSNPCHBSDGMNARAPSGZYMZTUKIMINZUOZDBSCCAWQMPCUQHLVXJHBGWMFACQROEEGYVKYNGVOKJCOKEUBFV");
    msg.value.assign("NLTNZFSGYQUBVVABVUYPMJKAFEZWADGOBDFHIORNMCACTMEZUIGBKXK");
    msg.type = 148U;
    msg.access = 106U;

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
    msg.setTimeStamp(0.0437995392054);
    msg.setSource(24952U);
    msg.setSourceEntity(186U);
    msg.setDestination(4539U);
    msg.setDestinationEntity(240U);
    msg.cmd = 118U;
    msg.op = 53U;
    msg.plan_id.assign("YPGTMWKTXIIOZEPCCVNCOYOOXJRSTVZAVDGRUQQQCHOYBSIMZGHFSRLWZWUMNLGRZZPVDXWTJPZHIGEUHJCIGOCDDLEUBWAJGINRFYMYHVTFIDHQKTGNPAOYTPAKQUWIHABANFWNZSMKZEPPRMTBYRJPTZSRULMUBVFRFNKKKIMXBYPELQODSDYLHDBNDMNVYXEWLNESAHFLQHCAVDWFSCLECVXSARFUQIAFEJCUQEOQXBKJVBXGTXJS");
    msg.params.assign("UXXYAVASGGWVEZOOCXQXRJPTDDDOLNVRTSWEYJHIVUPU");

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
    msg.setTimeStamp(0.132949080142);
    msg.setSource(52860U);
    msg.setSourceEntity(65U);
    msg.setDestination(1939U);
    msg.setDestinationEntity(232U);
    msg.cmd = 143U;
    msg.op = 191U;
    msg.plan_id.assign("PERTNRJQFLCIGCPSECXKJDGFVKQTTXZKVHODAMXZJCGSNWOKJEMXGADZNQOBEJYXIWYJEIQPILYMMBQIALFMQBHGUPUPUVFMOXNWZBLRYEFZVEJSSEECVUSDKBZQWZQBYTFKPUPZXJHINYSVRHLNRPGQQUTXTCNHRLNTWJSKFUBNVDYFDIHSVDLTRBCKUZDOASRYLOTWNIRTWPBACAWG");
    msg.params.assign("LNQKVWUUWEAUQFIVXSXRHTSRZJANWYOXXHBGNKSZFQGJMLGOXYYDVTIIQDALPGKBHMEMVGHKDALNQJFMYFZOPFATMFULWV");

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
    msg.setTimeStamp(0.701016416006);
    msg.setSource(13283U);
    msg.setSourceEntity(195U);
    msg.setDestination(18491U);
    msg.setDestinationEntity(75U);
    msg.cmd = 244U;
    msg.op = 180U;
    msg.plan_id.assign("RZQPEEJOEZLOIXSZNFMTDXWTJDRJQMXZBRAZOFIHWEYFFCINXUMKKRRGJWXUSHQBMHDGLIPARSMJJACGMJCTXYEHPPIIVXMBCFPRQCUEPCZZDBQUVYSLHPNYXYSLOICFTBGWODGSLGXOQVHSPPNWTOOVBYWAKKTIAMQKJVBHKQJEKNGSWNEGFUUZYLULDGNZQIVDKMVSYICBLJLUROQEYAUDCRUHDTEAMBXNTOKAHFWZGDVF");
    msg.params.assign("SKKPTHALMFIUFDBYGWZQQEMSPTWPAKEJKFPGCONYBXGABDGNEYNHDNGXFKOCWDKTQCXERLDWBCDGQMEARXMUFSRTDXRELYOJVFYCCPPVZSLFLRVYVJNKOBUHFTJITQLAOMZVZIPNOWNORXHXQJMHVHWXRNRMVWILHJGAILUJTJQQOZZBVAIVSMYZCLUYYFODECBUNQZRZSFTXKSHDNXIBOIPZWQE");

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
    msg.setTimeStamp(0.263806155929);
    msg.setSource(45960U);
    msg.setSourceEntity(231U);
    msg.setDestination(60097U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("GBAJKXYMMNOWLWRNWUFBAGQSXEJKMGGUEVDXLBSLRMEQUZZIIXZHKYGXCZHA");
    msg.op = 159U;
    msg.lat = 0.873374587808;
    msg.lon = 0.423496489634;
    msg.height = 0.182113318156;
    msg.x = 0.603814456032;
    msg.y = 0.887083837007;
    msg.z = 0.396822572744;
    msg.phi = 0.740356311798;
    msg.theta = 0.985056943997;
    msg.psi = 0.684759981235;
    msg.vx = 0.504425350671;
    msg.vy = 0.563066886485;
    msg.vz = 0.804762762569;
    msg.p = 0.383481552006;
    msg.q = 0.100266946705;
    msg.r = 0.565787815659;
    msg.svx = 0.0174880709127;
    msg.svy = 0.884916917429;
    msg.svz = 0.392774936815;

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
    msg.setTimeStamp(0.220028724131);
    msg.setSource(21158U);
    msg.setSourceEntity(208U);
    msg.setDestination(496U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("YOXPTJZLRNGRKRZZMESXFGPLTVGUQDWAULLMROTGCJTPIQEKZEWAGHGJBUQWQHBQPKARCFNJVYWJLSCXCOPDVICIUSAKYMDTWSCSXMLNXSFRIWBDHMJVUNYEOLTEFDULYMIDRBHOANHKPNWEGMZSHYNDFPXOTNMCWFCVZXCBQKZVGTHYCJPOJYTBAVQEMMPIEKFGIKASYJVKEJUHIDAXSWBOXRLZZQDHOTU");
    msg.op = 190U;
    msg.lat = 0.190587576837;
    msg.lon = 0.975733386197;
    msg.height = 0.784804275797;
    msg.x = 0.959156241818;
    msg.y = 0.138964529947;
    msg.z = 0.752565495824;
    msg.phi = 0.238160613836;
    msg.theta = 0.86908974331;
    msg.psi = 0.455335276859;
    msg.vx = 0.082263400988;
    msg.vy = 0.072111851858;
    msg.vz = 0.866321577367;
    msg.p = 0.340391026102;
    msg.q = 0.632013429765;
    msg.r = 0.387630450908;
    msg.svx = 0.853659977335;
    msg.svy = 0.0464651179034;
    msg.svz = 0.661988466056;

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
    msg.setTimeStamp(0.933617853934);
    msg.setSource(45568U);
    msg.setSourceEntity(197U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("PKRFTDGRGCLWIKCRTGDSQDTTSTPHAAKLKEURXWSZFJUYUVNFDTRAEOZOZO");
    msg.op = 252U;
    msg.lat = 0.815415664267;
    msg.lon = 0.187196743489;
    msg.height = 0.337119488961;
    msg.x = 0.0512501693903;
    msg.y = 0.637037387038;
    msg.z = 0.509225598411;
    msg.phi = 0.418432074298;
    msg.theta = 0.53424658333;
    msg.psi = 0.303751801097;
    msg.vx = 0.93748878324;
    msg.vy = 0.98089548576;
    msg.vz = 0.413273952109;
    msg.p = 0.0201545809348;
    msg.q = 0.6619805426;
    msg.r = 0.603740944997;
    msg.svx = 0.542772239805;
    msg.svy = 0.820813781021;
    msg.svz = 0.787628024325;

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
    msg.setTimeStamp(0.923583903697);
    msg.setSource(41534U);
    msg.setSourceEntity(97U);
    msg.setDestination(32051U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.36564369961;
    msg.lon = 0.775011915748;
    msg.depth = 0.604356484865;
    msg.roll = 0.205131582418;
    msg.pitch = 0.376724590741;
    msg.yaw = 0.530879896552;
    msg.rcp_time = 0.744871648482;
    msg.sid.assign("HSQGIVYKTKEAIAKLEBF");
    msg.s_type = 212U;

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
    msg.setTimeStamp(0.285190036381);
    msg.setSource(19899U);
    msg.setSourceEntity(177U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.923083862746;
    msg.lon = 0.604933286949;
    msg.depth = 0.131462805572;
    msg.roll = 0.915982885752;
    msg.pitch = 0.525720333822;
    msg.yaw = 0.893347352657;
    msg.rcp_time = 0.661773765719;
    msg.sid.assign("UNRYIZFVVQ");
    msg.s_type = 164U;

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
    msg.setTimeStamp(0.530364353463);
    msg.setSource(54254U);
    msg.setSourceEntity(198U);
    msg.setDestination(3825U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.0125260511915;
    msg.lon = 0.684820533383;
    msg.depth = 0.962619069951;
    msg.roll = 0.409903317083;
    msg.pitch = 0.416993659385;
    msg.yaw = 0.822737581758;
    msg.rcp_time = 0.134689872514;
    msg.sid.assign("HGRYHANDARZGMNBNUMGDFCUGBUQHSYYIVHVTNNRROBGQJIWQXXVCAZKZCETFSRBPXJLXJQPZXBIIHEDXWGODLXDGCLFQZMCHPEOEZRPCCOHEMTESHLJTYUOOIMDWLYWOWLYSIFSTEVYBPEHVNKB");
    msg.s_type = 220U;

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
    msg.setTimeStamp(0.440828556457);
    msg.setSource(25966U);
    msg.setSourceEntity(245U);
    msg.setDestination(51561U);
    msg.setDestinationEntity(217U);
    msg.id.assign("HBSPNARLZRHWWXAZKQLZDCJLXDVPBLGOLDCKJAFOSDECIKHGQBMIFVPRHWVIOXRWBZWKNMFDTEOYYFEMVMKGXAUGRNUQCFOBQCR");
    msg.sensor_class.assign("DPZXYNDWZNDTIWDLYBYQTRVZENUJMEZJMAFRRCEEJUXFSZJRWCDGK");
    msg.lat = 0.966847056368;
    msg.lon = 0.693584759449;
    msg.alt = 0.0742556364229;
    msg.heading = 0.987248975174;
    msg.data.assign("HJHVQGZHLBMTHYKOAPBYJEJSPSNNBQXCBHZBXPBHIAAVTIRDQKTEGYOSXZZRUNKFEIQJMGDQWBNFJSNA");

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
    msg.setTimeStamp(0.571780457991);
    msg.setSource(10880U);
    msg.setSourceEntity(251U);
    msg.setDestination(53878U);
    msg.setDestinationEntity(182U);
    msg.id.assign("XLRUVWDNBSXNDCFHJUCBYFTMCXVGTLSSJKLWOLKXUQRSDLAFNTFAATNQVKMDVRPZESGZSEMQINTJFY");
    msg.sensor_class.assign("MJDZCBLHDTYMOMOJXSBIRIMANQCOVQWUHXSQIOIEOVEEWNHJZJTEUWYRGEVTFRBUJZVCRZXBNTKUBWNDVQZOBRGFCLFKPLVHJDSNTGJKDFHMRSXGSBJQDIASYGPSLFZHJXEAVTDQFPPTMXPNHWFAAGTMIQBZYPXWVGWGRYHUEGUWMTEFDLXEKIZUARCZQOVACXU");
    msg.lat = 0.0120929387444;
    msg.lon = 0.22151376264;
    msg.alt = 0.591996120741;
    msg.heading = 0.950282598144;
    msg.data.assign("TTRGZOQTOMJKRFIZGLNTHMJZIJHRZWJSPUBRMMRPKHSYKWBYHLBBBABUBXYADFVHMWTEPFWEPOHSIKPAIABDGXNEQUCKQDZEIRCINNLFPNUVMJIYAZUGWVUKRVFLGIEYXTCRQKNZQIMHETSBFDQOAXGPDUPYBCVKYWSOUXRXMKGGODMCTAXJXWNSORPCJZCOHSNTEWLWCAUNPSNK");

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
    msg.setTimeStamp(0.280476193049);
    msg.setSource(59595U);
    msg.setSourceEntity(236U);
    msg.setDestination(37251U);
    msg.setDestinationEntity(126U);
    msg.id.assign("ESBUHRGKFODRTCSUOKDMJOXSNZIAVCBOTBAOJRAVYYKPCZQGLXSZANPJTQMIZJNMGBASPLUZHTPXLLHBTCLGUXCWBKENVWAJPZZRJQNHHFGFMKSXYYOJINYFWERIXETWZQDLHXVUUDUKYJSDBYHKPJFZMYVRGXNFS");
    msg.sensor_class.assign("HGLENGRNQJPFPKFZTUVGRFGYKNWRDYEFJJKFKZKUAXOQJHFWTSNEUBSKCESTHJMCMCDLTDMBXDMOIIWOQONMZWBDWYDVPVCOOTPRUASLMZHUFIRKERSCBPOYCYIYQKULBDUNQTEQJICKOTTJYZWQTWEPFHVMHXBNFPPLEXASPDB");
    msg.lat = 0.694258132264;
    msg.lon = 0.584361060814;
    msg.alt = 0.151377008097;
    msg.heading = 0.533046159168;
    msg.data.assign("FIYOLMQNJHSDAICORGOCVGMSGAFKXWNPPSMWAUWYYDOUNOOTSTDIFZSZDYHIUKBPIPTPPCAQKMIHCJNOWBDHVCVELEVUULJAXZPUYRJRMOCLTLVYZAYGVBRENXSBKINGMRARWZZJYXWYFNVDMVBSTXUIMBUVFXKVHYXAS");

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
    msg.setTimeStamp(0.172187581481);
    msg.setSource(14750U);
    msg.setSourceEntity(34U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(217U);
    msg.id.assign("DOZFDRNGOKCLWCYQRZYPAAWXONXIOPQLXZLP");

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
    msg.setTimeStamp(0.0142479890194);
    msg.setSource(19279U);
    msg.setSourceEntity(15U);
    msg.setDestination(20049U);
    msg.setDestinationEntity(233U);
    msg.id.assign("OBXJBPQYLNAKJWLFWOXASPVAZBDQOSYOUXUAREQCCABIUOTDQZJNJXEPCOEPEZCQTHTZRFIXRVANWGFSLKFGMFDKKHTKVZDGFTDTVCBELTPWIXLRKVHOKALZBQHRVWLJQYLHMINXPZSUHEXQSHEMNVIPNRCTD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XWVZFJSUUPKTZUBYKCQPRANHXWKWYSUNVWNZNGEKYEPAJJUVSEQ");
    tmp_msg_0.feature_type = 83U;
    tmp_msg_0.rgb_red = 138U;
    tmp_msg_0.rgb_green = 145U;
    tmp_msg_0.rgb_blue = 121U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.53316147374;
    tmp_tmp_msg_0_0.lon = 0.231200205571;
    tmp_tmp_msg_0_0.alt = 0.386291273879;
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
    msg.setTimeStamp(0.237940984223);
    msg.setSource(17157U);
    msg.setSourceEntity(94U);
    msg.setDestination(63884U);
    msg.setDestinationEntity(65U);
    msg.id.assign("IUFOJTORGPMWVBJOHSSXEKWGGUDZMCCYNKCEPCUPFVXUGSAIXZKPMDWRXLAYBOQJMYEUZIVPUAEWHBPMBHBIZJSXDOUQEZXQYYYVMSOCSCNBELCCNZRVFNZGSTWX");

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
    msg.setTimeStamp(0.771126882814);
    msg.setSource(37369U);
    msg.setSourceEntity(1U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(87U);
    msg.id.assign("TQMPWMBPOFKOKOFPIJPFKLNCHVWABRWGUICYYOOSESAZPDOVSKGXPZHAAJKTUATZMKLVHSLEXWMSNZUJMATKQTZUILDMZPFNNERSRVKJVZAVONGLLRHOWAZSJHJXLUXTWYCGXDCLIGRVMXXYPDWDEQSMNLCBOHMDBWCQFBVRUXPFQYBYACQDWDJETQBHGZNBWVMN");
    msg.feature_type = 170U;
    msg.rgb_red = 17U;
    msg.rgb_green = 43U;
    msg.rgb_blue = 196U;

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
    msg.setTimeStamp(0.922993085197);
    msg.setSource(17052U);
    msg.setSourceEntity(90U);
    msg.setDestination(39026U);
    msg.setDestinationEntity(209U);
    msg.id.assign("LKDETBEZBHNZQVMVMAWXGNKREJPKIFWSEIGEIUT");
    msg.feature_type = 249U;
    msg.rgb_red = 128U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 170U;

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
    msg.setTimeStamp(0.451648435518);
    msg.setSource(55127U);
    msg.setSourceEntity(238U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(11U);
    msg.id.assign("TAIQZECYPNWIMYILGGQBQISTDNZHWJWHDHIYMALTVKGUFZKZUYENUHDQVEUTWHAARAXJNMFJOERSOA");
    msg.feature_type = 106U;
    msg.rgb_red = 180U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 212U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.18295259114;
    tmp_msg_0.lon = 0.736672829241;
    tmp_msg_0.alt = 0.725012457444;
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
    msg.setTimeStamp(0.826866180838);
    msg.setSource(49095U);
    msg.setSourceEntity(252U);
    msg.setDestination(30317U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.111142180927;
    msg.lon = 0.750551059205;
    msg.alt = 0.630997679461;

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
    msg.setTimeStamp(0.722536070983);
    msg.setSource(31520U);
    msg.setSourceEntity(114U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.856728779396;
    msg.lon = 0.176356745984;
    msg.alt = 0.646420005391;

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
    msg.setTimeStamp(0.103122765716);
    msg.setSource(58242U);
    msg.setSourceEntity(64U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.0844270656662;
    msg.lon = 0.0828898464918;
    msg.alt = 0.410521502703;

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
    msg.setTimeStamp(0.330906323968);
    msg.setSource(17672U);
    msg.setSourceEntity(117U);
    msg.setDestination(33940U);
    msg.setDestinationEntity(204U);
    msg.type = 107U;
    msg.id.assign("RHFQDPKOOOGMAPCVJBNUVFLWEXOLLPEISDDLXMZFQZHNOJLOTEXEJGCORDUVWYXNYTBJQHGXACTCBIISGXUHRBAQJQWUWUFRKPNSXKMYGMSYFRUXNJJKVPEYEZFDHPWQUKYRXZOUDAVBYRGDRBSGJWHKSTZAB");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2257855741U;
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
    msg.setTimeStamp(0.88420137935);
    msg.setSource(35907U);
    msg.setSourceEntity(253U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(184U);
    msg.type = 44U;
    msg.id.assign("AYSXPOPPLOCCJRNDUJLVMAJWPPFKHUTBEQUMNZBDXUEBDXKERKOGGQXIVNLQJJNTENRHFWHSWYQRCEGANJWKTQCOPUXFBRKPYBAB");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 208U;
    tmp_msg_0.request_id = 18252U;
    tmp_msg_0.command = 158U;
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 59080U;
    tmp_tmp_msg_0_0.lat = 0.982633773934;
    tmp_tmp_msg_0_0.lon = 0.779963004968;
    tmp_tmp_msg_0_0.z = 0.780670086455;
    tmp_tmp_msg_0_0.z_units = 31U;
    tmp_tmp_msg_0_0.speed = 0.0708876427523;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_tmp_msg_0_0.roll = 0.400003424256;
    tmp_tmp_msg_0_0.pitch = 0.180515299952;
    tmp_tmp_msg_0_0.yaw = 0.375425926879;
    tmp_tmp_msg_0_0.custom.assign("CJIVDNJRAVIPUMKDQMMWPURDOESEQQNSNKVTZFEIABYYBWXWBEZGFXTDYDWOQKLCNNWRPTWONISOWIFWJLZZGNMTSRSNPCJOGPVAYAIKJMLFHDKXKUBQFGXKAFVSIQJCOKYYUBPBJHZICMSGLOSUHFNLTZQMJTRVHTEXZKTDZCBTVEXAPRJIVNCRHLEWCPADMHYYPVLHB");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 25187U;
    tmp_msg_0.info.assign("VTGWXNWQSWASKPWLGZVBHTEUORSM");
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
    msg.setTimeStamp(0.526725950354);
    msg.setSource(44526U);
    msg.setSourceEntity(29U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(194U);
    msg.type = 235U;
    msg.id.assign("WWRSKCKGGRNKSXECTJIRVFBGXLJSHJQQLZSUVBVNYBLUIJZBRPDWEALOAYJURJGEDMGOBNQKUQKYPZYMVMMOMBAUPMZIBLIFINOTBPHIMFGRNKOSUOWTRXLPGHNXKOCJFVCZRA");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.629736559751;
    tmp_msg_0.lon = 0.591683102317;
    tmp_msg_0.z = 0.510046161218;
    tmp_msg_0.z_units = 133U;
    tmp_msg_0.radius = 0.781403245311;
    tmp_msg_0.duration = 57498U;
    tmp_msg_0.speed = 0.191282255845;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.custom.assign("CBAPHLEYRWHOMAUSUZVFTVYFVPVATHHOUDBSENHIORSCRUGIYUQNPCSKZIYJITZMAWWDTDNZTFJKOAJMAQDRCMIZOFXSFLMRKBIRZEQB");
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
    msg.setTimeStamp(0.386766727421);
    msg.setSource(47183U);
    msg.setSourceEntity(202U);
    msg.setDestination(14383U);
    msg.setDestinationEntity(62U);
    msg.localname.assign("VNKFJDQPHNZCGKWUFZKQIKRFJGKTBJYXPWHUOVOZEHTMARYAXROJILHQSFFIPENCPJMYGZDQCBMTUDJIYKLHYISXRFYXASBDGHGLPQEWBPTTPDKOIREEGHNCQMHNTVLELJOWMZORKRONFRZDTAXZCEDPTOFNUCVXDXMVSLFULDLUIUMLHBQBMVTMTJAAZZXVXKBISSKJUYONESG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MIZOTNBABIQCPAMFUXRUCTGBLOMHDIQKKHLFHCYLYNQCYIEUGNOFFGHKDREVDSTHQSVVUWCRJVAWFJCPTXVZMDQVLZKELXNFLVUJXMIGJANXBYDYCDPEZYVPOXUOSEAANJCS");
    tmp_msg_0.sys_type = 97U;
    tmp_msg_0.owner = 10488U;
    tmp_msg_0.lat = 0.830613724644;
    tmp_msg_0.lon = 0.47821156618;
    tmp_msg_0.height = 0.760524231443;
    tmp_msg_0.services.assign("IQLGWWUETDTBFFFMYDHCAOJYCUGNJFHUNFIDMTQJDNSIPSJBMGVJBPNSEZUQCOFLZLSBKIXXEXTLAGVOAPMKAKQAERKGWPCEFICYKEWUYZPVAVBKDVXUSWURWMCUXPQMRZLXZQSPYVYHHPNXAEWGRTUHDIGKPJOQGYLMKNFLDHWFZQKLBUGKPVZIOMSRNXDXNGSTRTERJZTABOWLHONXBIRJACVMT");
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
    msg.setTimeStamp(0.520543884682);
    msg.setSource(51874U);
    msg.setSourceEntity(112U);
    msg.setDestination(16343U);
    msg.setDestinationEntity(31U);
    msg.localname.assign("XOWCNAFQRFRGBLAZUTDFZBOHRNGFLZJQHZUZEVPGMCEKIHPVMLDWNIFMQQTDGPYYVRQCBFWSJMTYAISMZKJCXESRYEATXXWVXUDUQQYCDEAWLHYOBBRGZMXOTRTHFBHQUHMJGNGKDXEDBWIGSDDASDNNAZPSJFYSRKCOSGYFIEYRAMXAIOMKCONVQNQXBUIW");

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
    msg.setTimeStamp(0.435441111848);
    msg.setSource(20940U);
    msg.setSourceEntity(214U);
    msg.setDestination(40184U);
    msg.setDestinationEntity(49U);
    msg.localname.assign("KBIZTMKSDMXMRAPNOEWFOIYIPEQIIEABVMNAORKJPLLBLTWDKXGDEWKXCMXFEISUQEYCZARUWTVICXPHZNGKACQJNHSXSPLNGYTHTXQSJGUGERPPDMQRWWKAICVSRVOWABNBRVYMBQLZNJTNSZOOOIBMBFGJZLKUYABOVNUQRWHJNYEYQCQRFCZAUDLLPZSYURUVXTHZQFSSVFAGJXOIDBFPDKJOVHEUWPTFJHCHVXH");

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
    msg.setTimeStamp(0.888529024128);
    msg.setSource(55440U);
    msg.setSourceEntity(142U);
    msg.setDestination(40541U);
    msg.setDestinationEntity(50U);
    msg.timeline.assign("ALZWGSQNKOJNCXLKPCYTIWPOWAZFDXYXVJGCWPKYGEXLYOJUMRJAPQSDDSTKNDVPKBTQMVUHMQXZODTEIQTISUJPGEFHFWWESFFN");
    msg.predicate.assign("WXVZGJZEHXMIQIYZVMDNVSLGJOGJWHUZOPWUBQBNBSQYPHSOGKAFVHLXUVUKGULECKEGFXAXDIDBACZQNXKNCFAYZEOTUTMFDQKFMPDHUKRBMAWUYIRILLLSTYMDWVTAQPCBJWXNCVZOPEEEJNOEWBRCZXPNOARSYTFMQYLPHWKCKZRTAROIINRBRVJTLMHHXWTJZRSXIQDAYMSNPTEKVDVNHQYEGJCYFFDSISLUFOKBPSDUPIBWTGLJGQA");
    msg.attributes.assign("PFAYQJCKHRRRDTTLTSEWADGDGSEOLWMHZPBUDSXXTIRYINDFHGDGJPFPWFVCAHOQSBBPMCRZDNZGCZKFHBVBQVYSNURBTAMVBWZNAAIKMTYQFHCYSUUOWKNKTFJGZURMIPKAEYMVCZOXOWIERXYEVLJNLXGTKKZOHJVSMPUFGJIXEBLPUNSCRWOXLXVLXCWZ");

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
    msg.setTimeStamp(0.281279862628);
    msg.setSource(16946U);
    msg.setSourceEntity(76U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("MVQYLHFANVSXKKWLWVMHKGENOURMMCZCEUDMMZGFRZRBIBJPVTUPIVWQUFLHBRWCLYBUBDIAEJWQUJCNDZFHBJIYQZYKNPONILESMGOEWWJEULXKXYHVOXSRGPCXODGTCKRSUTAIYAIUGYTPZLZTKJNHBZUYQFBEGOATIKTVLNOOJXVWYRLXSFQZSIZTVOGRBYFJPCHMAF");
    msg.predicate.assign("RQCWZCYVTFIQTMTOYMBBFISMXUYCAWWANYBIKURVVDEEZKGAZSJRVNTGSXRUHKCJOFEWNDVJPMBZWZGBJZXUUJVPPMNBHGDBPFLQNEVIQMQIPLHWRZWEDFQQRLKAYJRBYMEHXYUUAHDPXCMUF");
    msg.attributes.assign("FHLMQJSPCVBDIEVNSBKSKUJPAGUSAKEVGILRMZAOYFSZZZSKWCLKFXOAMNLDHURCNMIQNPNGKWCBO");

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
    msg.setTimeStamp(0.141798420213);
    msg.setSource(16195U);
    msg.setSourceEntity(95U);
    msg.setDestination(19100U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("SVMSIFKDEILLQPOFZANHXTSCEOLSRCNECILJYCWJQGIKECWMYZBGPZGVTUMNCTWJFKZJVULPSYCQMCXISEMYJTHHBWYNAXLXNVMOXZKRGLKPSXRBBIDDOOOWLMWHGJTPYQDEBQNQVWMUPAZFWZZFYWXUPYHOUUBOFUHOTLNJFRQA");
    msg.predicate.assign("PJAWEFKAFPABLDNPRCWOWYHPJSHJMXXTOMYVBWRJGXSQQOECSENJGKNKIZVURGCKYBRWIQRXQEAAPMBEUFDFLUGFQLKTRTCQQBXCOQLERQERJIVSXYINKNTTNWHCFX");
    msg.attributes.assign("TGMURQZNRQAFMOYASK");

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
    msg.setTimeStamp(0.0620056838944);
    msg.setSource(54847U);
    msg.setSourceEntity(116U);
    msg.setDestination(4215U);
    msg.setDestinationEntity(95U);
    msg.command = 175U;
    msg.goal_id.assign("OZNMCIPMVXRUOUDQQHGVTNFQBCDEFLVZWLUHIVKSFAQQINHJLXVYDUWPNJSGMDMCWLDYQKRWXALQOEZYZHCYTPVWPUMGXDAMOHVFWBOOTHIQTPEMEADWYFOESFLJJWIN");
    msg.goal_xml.assign("WOQIVVLPVDCQIUTSUFZCVEJFWHNDPVWVAUVWXEULHPSJFKYSWRCNVIFSTVGMPHUQBESCWVXARSLBSXDDXQCBIMEATOUOKKETHSILRRFOLHHJITDBGWZTNETKYAMNOGBAXAJYBKDNFYYJRWQBPXZBXIKKZKZSLADOHWYEKFBEYOIMFHQQNLJPCZYFJLNBXCAYGGUR");

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
    msg.setTimeStamp(0.0660341205281);
    msg.setSource(33232U);
    msg.setSourceEntity(248U);
    msg.setDestination(58840U);
    msg.setDestinationEntity(108U);
    msg.command = 177U;
    msg.goal_id.assign("NCZKJGKMATZSGXQZI");
    msg.goal_xml.assign("JUSRYCDKFDNRFNZEULFMJZZEDWGYISANBHVWWDMKCUXKTZMOWINHPPYNCCYTCUDWNPCDJSGAJXTTYRSXMNYNPQQJQGIRULGTLUSVZEFHIUEXIHJVOJXLZPRLEYVTEZHZNEYPKGXVQATPMQLIQKKMYKAXBMEFMLVATWFZAHBQEIBQEXBPAGHOJRRLTCHCAOIWOXBYKVUGPCQRSUXVKODACSSWIFHKNLFTJGBVWVDOMGMSSAGBOOFZR");

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
    msg.setTimeStamp(0.251657106374);
    msg.setSource(30846U);
    msg.setSourceEntity(130U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(3U);
    msg.command = 51U;
    msg.goal_id.assign("MVOPXRSTZJIXKNQJXKYWMDCFHLLTXIKRAYQPQAADULSJPRKDHGFULURCLOEIHMYAGHQWCVICTNXTJEJOCZZKPTGAXUXASETPHXGMFRLFRPRUJLYWVONOYAQBWZSUPQNBTBCTFKHBCHFWIKFBVJSFFHZGKALKYUWWSQNDVROBEDZDLXEDSZPJIOBNNIEYHOYWVSHQINFGKCTYRYDWNRDWQIEMXAVCUGBUOGBJAMQMGVGZZIPSEMLCMEO");
    msg.goal_xml.assign("ANCPNAOPTFXFSNZPIYJOHBGIUBRDVDEDAPAFLONDAVWMBKGSCREBIAXAWNWNLVXFVEWEEQLNVRYVEWHULLKRUQMCUBNKAXRPDMEUZDKFOITHHZHFYHNFMUBWSUBIIFPALHZU");

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
    msg.setTimeStamp(0.483388584542);
    msg.setSource(56341U);
    msg.setSourceEntity(134U);
    msg.setDestination(7682U);
    msg.setDestinationEntity(79U);
    msg.op = 196U;
    msg.goal_id.assign("USVQADVHCFISZNHPIZFZXOALTOWFMWZDUWYMCULILRXLYMNPHCQJETZASBABQBREHZAKQBIGMNYTRNXGYRNZBAMMVNACFYUWZDCVABYVIGNIXKXVKSOCRSOXTFJJSFTKVAESLIGOJTTJVKPCWJUHWQLUYGJWUTSPCF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EXVVXDLRBTLMZXPSFITGJTUCXRXCSWNZHEEEUNATZBTLGAKZPZNYFORSIQOFFUYIMCDCNGIONLDNCNXKVPTEYZPVPLHDVLTWYGRUJOPJHBAQUYFWQQZLOMEUAEKFJMHQSBGXCIUZWHVFLTAGWIGUDWYCFJVJBPTOYHKODPVAMJHEDRXGIAOVU");
    tmp_msg_0.predicate.assign("LBTFOLZNFXFNEABGHFKLEGWZRWYDBQLEIMIEDHOHOQSTVSNCRBUMWVUXBPSOHYQAOIKMWAHANVYRPEPXCNQAOXUDRMLYCTJPWDBKTWICDGLYRNPRBUZYCUSDPIVDPEJTGTZWOADMJLYUOIWIIVPNKIHWJANZJLUKTXTZHBGFFRHJKWXZKATRCGESSCRVMMYMGIGSULGPVCFVZOHXEGESUQ");
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
    msg.setTimeStamp(0.888421398644);
    msg.setSource(49487U);
    msg.setSourceEntity(128U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(2U);
    msg.op = 64U;
    msg.goal_id.assign("MYCHFYTOFOAOBMKPKRJJHLNHBBNMUCZGUMHQLWZEZKLOEWIPBCTMQOXROCWNAGGEWRTNYSLLTRXZZIIGKLDDIWJOFTXEZCLGDMLQNERPKPPQFQKVNUOYFTJSCHEIRQZYPDVOOBKHYUFFDMTMSUYWBCBAEMKTIVYYDBUZVFQJRASVXSXNWAQKAHFWJPQCFHJDIVNDAWSPSYJIZAJRGREVDCBELUXGZJSGLVASIPNAWDTGUXM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GELIYBEWXQLCARLNSGCRXYEAOXWJJBHKVHFDNJPGUXZTLMTK");
    tmp_msg_0.predicate.assign("RASSTQINJOFRLDKLLYSLCHQHHQPPHMTPYGFRXUSPWGABIBZDGJWKIVJTZNLSENXMMJVIEDDKFIZAGBCMPEAXUXDWPOVNGYYEEKDTABXDYTQARZBBUZGVLEEJKJEXQSORWEIOUJMHWOACGWAHVTJNZWUWRMTLJSRMKNSCCCZUDIOUKULZHMMEKXPLNIIFCAYBVDLYDOS");
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
    msg.setTimeStamp(0.158579624732);
    msg.setSource(30545U);
    msg.setSourceEntity(124U);
    msg.setDestination(41062U);
    msg.setDestinationEntity(157U);
    msg.op = 102U;
    msg.goal_id.assign("QMKEKUNZQLVVHDOAGLUEASODHHIKBVSJPVWNFINLAHNMSCAFGXYOVBIFHUWZQRXQKLIXMXAXZXJJBWFWFQYUCDCRYUJPZQRHWVIXQXENVBMUWYELZFDSWPEDBKPLWCVAJJRZANTR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CAQMGNZDXCPTFFSEJXYQWJSKZBNBGOEZRCTQQFPPMBASYDOZBSHEJRMZKDEQHWGHVGUJRKSPSMEYUZIJSFKPXYDDOZUVMBPQRU");
    tmp_msg_0.predicate.assign("UJYNGBLGIOZYBMZHXDBMYMKLBWWHQTMBGZIVWHVIIBYFRETUSPGXYIAS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VJQHRNSZKVSXEFATLYIKLBYQHDJZEWVTCOXFNSXMRQEHQDLAYDGUXNGKNCIFAPMJNZPRNDTIDIAJVFTTASYBNVMWHWCESTBHUUKJSRJKBNBICBQBCDBX");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("OHPXSMHZAVGPASHPTFAZEJWXKDNRWSZOVOGLFBGAFBUIWEIZJOVLNZAQYMBIZVNOBYCPSIXXKHLSGJZECZQMMVQNRWHFMCYMHYITLTF");
    tmp_tmp_msg_0_0.max.assign("BPLZFIZXVBZAHFAALFJONMMRQESOHQXOHUGKLRRZXENSGDYHZPMLWNPVJGQFAEKDFBTBRZUIMUWJHQQBJGDJIUBUHKFTDFDLZNRDQVSWNGRF");
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
    msg.setTimeStamp(0.204715286363);
    msg.setSource(38375U);
    msg.setSourceEntity(49U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(9U);
    msg.name.assign("AXPNCTRFJRHPARZAFIBJOSGXLMPAHDPFAKKAUEXWIOKHUTTZBIGIVCNWQSOMSZNNQYCHZQJAERZOUDVCGFFVSYBXYZSPHDTDNMXCMGEXYNIWOSCCPXQLGWXOLKQPHMVRX");
    msg.attr_type = 57U;
    msg.min.assign("WKGEMFXBJOGPOUOEINJNAEUNZMHPZLLCCOUNZTFCLNKVWXDDEEXZDB");
    msg.max.assign("JGIQGKBGFUWPYCMZREFRUQFFTWDJBSBNACQMTWQIIROFWEQSLXXNGDUJDVTKODCXQEHUEGQGGLRGHJPFVXVNLZEBCXSTKA");

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
    msg.setTimeStamp(0.57452678885);
    msg.setSource(51716U);
    msg.setSourceEntity(151U);
    msg.setDestination(5676U);
    msg.setDestinationEntity(35U);
    msg.name.assign("YFGLITMASTQAHEWWLUVJJDADPXERNWVS");
    msg.attr_type = 228U;
    msg.min.assign("YEYAYEIBTDJDWQMMOYSGOHTCXWULGHFGAPBLTFDYWBXTBFEUAURFIKCQGBANOHEZFIPFVICGLIDOSXYVNOMCQXHUCOCDHMNGAZRNZJWVCIDTKBRAFEHYMHWOCUEXSKKDTWSZAJVPZNMCASKEPVLGUXEJVOXKOPZIUWGCNDTESXKFUQBQILLNPPBRYQJRSFOBXTPYJHMVWLRNASRQJV");
    msg.max.assign("RUQOHBXEDWGTAVWZYRSSLTJDMJAKDDQGDZQHTPYYNPZIPRGAJYBSHSPUPLAHLLLIOQSRALEKVIYENLFUUVNWFBASTEWRGBHIXVEAQKYIBAMCQNVTJWCBXHIHODNOCXPDKCEGQTFWRNXSZFZYCTZZNFGKAUXEXBKPNV");

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
    msg.setTimeStamp(0.162116313279);
    msg.setSource(36774U);
    msg.setSourceEntity(188U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(24U);
    msg.name.assign("YLJPDUVKXREQWNOPLKQRUBEGOGZFOPRNOOTQRPSUOKLQUSGFQV");
    msg.attr_type = 178U;
    msg.min.assign("GDZBXCNSOSUQXHKPOMOOFNIGIWBGKYFKDSVVAYCGAAMQHEYAMSBBUDAEQPMFAWHJKKIDIXTTWQZUIQFPWRMSLAJFYMGCLZLNGVJOHDFTDTVYNJWHHCMVYPQFCXDJWINXJZIOWSSJBKNWWEIZVHPPZLBPDVZFPARPZJBTGURGXEOLCHLTCLRFBXTMRJHYXPGLOUKYKEWNSVDBZUUYKQQERALICGTRSYTCHFDUUBEXTNOMVKR");
    msg.max.assign("FFWUYKFOYRAYJTODXLXFMIQZVCOMT");

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
    msg.setTimeStamp(0.493023895113);
    msg.setSource(24863U);
    msg.setSourceEntity(231U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("BFLIUYRGDZOEADEVFQQNQQZORINUVGHOWKUVOCHYSDEUUYEIHWZHDRLXDTRXKOUFMCWMJRBUWEDJLSQVHWWZBYMISDMANWGPAKJKCTJHAMVSFFQTYIFXCZLSAGGJOXWQATNXNSWGPBKBVYPYNFIPUNNHPYAHBXLETRQYFLUZYVZVJUZIWIGNIXMRAJMOKGPEBC");
    msg.predicate.assign("LDFEILKQNXZRIKZSWAAKJYUALQMZPXJRINCJPXVMONHFBKDTTMTMIQXWELKGEVBKZOJCUHIASYNOVAP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OZKICQCKKCLSNPFQRBSBTFIFQYHOXMWNXMFKNIKATEMNHWQOGGKUVEKYFARDMWTSUGSVUOKAGTJXZRKNOQVNOSLTCKCEUHRBBMJNCVIMQJTIRUTGFPGDXEPXADOZDTFALXUUTFBCSBUPYUJAZFGO");
    tmp_msg_0.attr_type = 170U;
    tmp_msg_0.min.assign("FPLZQSGNHFEXGWAUKLXLIOYYWTTBLTMZSFOHPUZIXXWGRNLVNNHPJRDAUHWKIXNRRQGRSPVGCZTPLBQATHSVZXQZKABNCHOXROBWLTYSVTEICPJNDELMBJRMHFOEXRJHWMGTJPBIGATDHFLFBYSYPCWMVKDPFQPDMXVUKKQQVOFJACIJFXDQBQYBZNAUJEUTYONWZIMDYKALMSJFDHVMQGRGVSOCAYEI");
    tmp_msg_0.max.assign("OODHRYAQGPUZYRMCJTYDVOTCQCPFKPSHMDMFNBWDIHYTBNSKRVVFCHVKZDTLTRKUEPIXKHRWZGWDMNLTGPVLDIVLFSWLUUDTAKJJEOAEVXWVBFAKYQSNXCUNLOXWJQHHEMRQAGZXSGOHSJCXTAPNIFGTPOEN");
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
    msg.setTimeStamp(0.614644550707);
    msg.setSource(22103U);
    msg.setSourceEntity(254U);
    msg.setDestination(34108U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("TYBGSSXVUTKRTPIVHNOYTJBIGKCVMCOUXDSXQSXWWTLNNWDMAQCAJZSFYAZPZDEGGNKVLBVMMHAPKGYLVVHBEJAIDPODMYCLJHLNWLRTCVNZBSKGZKRCABWVOAQZKARWQUWYFJNQJJ");
    msg.predicate.assign("JXDZOKJCINHWXJTHAPNKJUCEMEMIGDIYZOOBGTQVJKHWKYEWMYYSUBFFBEVDQERLLKDARCZSBGLQQJKYFSPVXTTDZIOUSOPGWPPOOWAWTVMJFRXQEZRSHKUWSFNWNDTUPRBGLBXGJEBFOXSTCYUHNEBVRPUBSQHXIAUXJMVPCQFCWSDNEKTOLCAWAQSLLMRMMAKGALZMPLVGYORZVJUTZFKGHINPGRIDQZHNYVILCM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QQXSPNZGQJPQKWZXMPBTQGNEHVFFCGACTOXNKJLKKWYUBQSWNDILRIZR");
    tmp_msg_0.attr_type = 67U;
    tmp_msg_0.min.assign("LTDUJJOGPQWKVFRQLNWORHQTQPHIGRYCXUVUDSVEGTZRYRHVECJKPCIXGYKLIGJWMOUQZBORACPSFMUBMSQPXUEKYFEOJWFQWULVHBXXTJNVMQIQEDVOUM");
    tmp_msg_0.max.assign("TNFVHLNGJIEERKRVLSKUDBZFVIOPHQZUYYXAQCBPUOKPPDEPEDMLHTUTEBYPWYCYUHPSFXTGEIEUWFCWBGXRVUOLVMNZGGZBHSCZQLLVVZJRAAMNZPOXJOCNHLCBNRUMOGRJQKNWWHSSDKXFQGWWSXBXAAGIJTPQKEOWAIBZYIDDYFFMMRTAFDUYEZKIRSSWJMEHUNYLJFZTGDKJVHQVSOAQMDRNIJATFLHQAXKTYRGCNOOCMBBDXM");
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
    msg.setTimeStamp(0.213233728777);
    msg.setSource(47105U);
    msg.setSourceEntity(212U);
    msg.setDestination(28997U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("QICZMSCNIULFQIXPSLISTKWJTKNDBCENMLTRJSPMMYWAYAVBSOMMCPPEFVZOXZDFJVMLYWTGCWZXVITYFKKRGOGOBPGJDPKDCQOHUGUEFWNJVUQWXNNRIDDBYROISDWSRDSEATWFTZYDEPVRAJGHKGZWXFZBDQYQQWJBZUCKFHQPIILBCLMPARAARNEOGHHUNRJVTLMXQYGKXXOGARNUHUUCV");
    msg.predicate.assign("EHVWFNLEQKGTTNXYXRQNXGAOFQMICOMFTYVYMTTDLWRMDAYAATOUPXVDSLVMUNFWWSFTZFJPHRAZBOPHIPGPMFVULIGUFXBDQBGNSQBMUCHASOPKQJBOCBHUSLZRVUJG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PUXMKDYZTDAESMEUBYNXAOBYCHZWDIFOHCMCKJLMSPTILIAKSUEUJSDCYWRSKEKNDZYTDIJQNVNCDFKXRVCLDEIHNSADLAWUURGPCVXTZTLHVEZBUQKGOTAFNSZHOVLMQPJGOFM");
    tmp_msg_0.attr_type = 229U;
    tmp_msg_0.min.assign("KQJIHNPWQPWFSYUWJIMQMWXBFSXBPACQGUKFAALPKBIJEUIFGVPYMRWAHWTRSXDGLWBRMORDPNVFGUFVDPBKNLNATMYMZDTRIETGOWXVNRSVWVCLQASGCDTOEILT");
    tmp_msg_0.max.assign("WYNTMGJSFENIPDSOKTNHYOTXLVMSJPFMGBJFDDYXPZWKNRDTCVCUOVRYEZYGUBJTLIQFIDQQXUCUJLDXIHHDCAYWZKSIWRAFLQNQFIXQEPHASBREGMWYQPCROLLUEUKSAAQGXBOGRGAPMPRJZGRCUTDHZWMEEHXSCKBCVEKLTI");
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
    msg.setTimeStamp(0.341716823371);
    msg.setSource(37551U);
    msg.setSourceEntity(172U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(251U);
    msg.reactor.assign("SKXRGPULTAKRWTMZPCPQLHLOXHEVONHXIALPGDFZZKADFYJKQTUHKNBCIYPFBJTFJCYNOQLEFZSUJYEPFTFCGUWQEOFOANBMSJULMYKXILG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WIQZJSDTVMIEOAXEQOIHLZGXRWCPCILDKKMJRYVTZJNSBOGREVUKQQVPGGPQNTLNRXYITKOMZIMEFEYNXWYCFAXXDKMGLVTNJYZQPWZQKEWULHODAARGQSHDWDNYIZBOHPEZHBPCBSJAEFIFFSZRAXMHTVBYKGHYQDMUTOWACVFMTTLUNAJRXRECFSBNMH");
    tmp_msg_0.predicate.assign("MXXFHXXOVRYXFYCPHTAZSIPNTTYEFSWPALPVNSTFQREZCIRICHKRJFZZAWBKTVEOULLMMSNGYDVSFVCAGNNLMRDOCXFXYMVYHPJGWUSALRTCJYJQNFSIHOFVBBGEGEDVPOUOZTKTROGLBANDXJQQBUQIUHIUBUQQKEMJOVOYLKWEIGMXQJBEHSAURUPFIYXEIKWBNTZLYDJHAJ");
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
    msg.setTimeStamp(0.103433643574);
    msg.setSource(16357U);
    msg.setSourceEntity(169U);
    msg.setDestination(65138U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("APWLFBNMLLGHXQEZUXHJKQGJSVCMJUATGPLFZGTDIDENDGRPCGMKTYCQNLSSJBFIH");

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
    msg.setTimeStamp(0.297228252024);
    msg.setSource(18475U);
    msg.setSourceEntity(15U);
    msg.setDestination(5814U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("KNVVPMMLPGBZTWHTTDTTQWWCLRNRWOOUYAOFXXUHHTIKO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BWLKWMUTKYWEVJPNNREEPFZYRVSOPFCNJRQRBFLCOABOPWUQJIGQZHBSZWTQAFDDHDMDSCADVMIEHFTNKEDUGBPKPSZVDNWEIHFQARLVYKBZCOLRHSTNNOXABGKWJAWTRUPMSFXUGIIULYMNUCDJKYHVZOXFZICYZRJANZCFCRTKRQLKYHVUWAYYWPJONSCTULBIBGVEEDAYCGMXELOZXIXGLM");
    tmp_msg_0.predicate.assign("EWQYQJPREXOWCLOGVAPAKMDVQQSPJGNORFXFHRKCDWOJPXEALCZFIYVTGFRIJUFASRTGANGGPYQGMVZHZSKHMLDULONCYPBUHZJCOBRLIPCGTKJWHOWLOIDDNPZFRPIBNICYSSBARBOAWEDTWMTLJEWUVNJLKDNIMZGUHUVQESHYTZRQINCBTYYYTPLTDVSQKAXMUWBGJEENMLCKFZDR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CTVGUNLMMNJANCVHZDFDCHFJIBKJPCKAYIJTDUVLIOALPPITCV");
    tmp_tmp_msg_0_0.attr_type = 21U;
    tmp_tmp_msg_0_0.min.assign("YOCCATGLFCZSVQJUOMODQUHPLEIMFPONWWURWDNTQHKHELYTBTZVPCJUQUFVKOOJIAGYZNMBLWUFBIIACKVBJWDLKSJAZLVRUTSFDPDOYVQNEIXKLQWFWYURHHUQY");
    tmp_tmp_msg_0_0.max.assign("CGOBDFDEFDVJJNMBFHKBSIIZVXPEMKLNPUQEJAYLEDQNNEVEPWNBTKGPXRETABOGWQLGUTRFCOONRZYKZIJRCTMVTYQPQNPLCAJUVJDQLQDOVLUJXLGESUUMIYTFIKSWUUWZUSHMCXGPDAMZRUOBXXVKXHSRZYKGCJRSRCQVYJGTAASIHPWMJIAXSDOLYKSQOYNFWSIWHDAWKLKCHTIFVNFAMXHBHPTMCELHREQPFDZ");
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
    msg.setTimeStamp(0.292336112126);
    msg.setSource(31987U);
    msg.setSourceEntity(107U);
    msg.setDestination(15613U);
    msg.setDestinationEntity(14U);
    msg.id = 76U;
    msg.width = 49724U;
    msg.height = 16180U;
    msg.widthstep = 63972U;
    msg.channels = 35U;
    msg.depth = 9U;
    msg.finaldata = 135U;
    const char tmp_msg_0[] = {48, -75, -51, -112, 92, 50, 104, 46, -27, 84, 117, -30, 47, -79, -82, -111, -16, 13, -56, 54, 56, 68, 17, -4, -65, -72, 19, 36, 86, 26, 100, -40, -32, 10, 15, 90, -79, -30, -85, 26, 109, -42, -28, 107, -88, 79, 30, -21, 17, -52, 61, 116, 89, 6, -107, 71, -106, -110, 63, -19, -84, 124, 27, -12, 75, -37, 84, 73, -6, -13, 122, 120, -49, -17, 51, 68, -116, 118, -44, -10, -2, 46, 120, -116, 75, 19, 95, 94, -98, -40, -84, 6, 97, 78, -120, -107, -47, 8, -61, -98, -11, 107, 122, -65, -18, 122, -104, 75, 29, 60, -102, 56, 15, -124, 103, -48, 16, 114, -98, -55, -18, -59, -49, 73, 92, -24, -7, -121, 121, 106, 48, 49, 5, 35, 105, -56, -87, 101, 43, -62, -17, 14, 92, 103, 7, 77, -67, 115, -69, 11, 5, 49, -43, 6, 46, 39, -69, 28, 31, 101, 10, 4, 19, 93, 66, 59, -56, 31, 125, -96, -108, 82, 118, -60, -120};
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
    msg.setTimeStamp(0.39559191435);
    msg.setSource(58222U);
    msg.setSourceEntity(177U);
    msg.setDestination(5688U);
    msg.setDestinationEntity(123U);
    msg.id = 86U;
    msg.width = 38584U;
    msg.height = 16914U;
    msg.widthstep = 23871U;
    msg.channels = 91U;
    msg.depth = 216U;
    msg.finaldata = 2U;
    const char tmp_msg_0[] = {62, 84, 91, -101, 81, 61, 61, 26, 74, 54, 90, -42, 65, 34, 37, 91, -45, -123, 21, -64, 35, -21, 14, 26, 32, 119, -63, -90, -17, -127, -105, 41, 105, 92, -76, 47, 84, -2, 114, 60, -91, 63};
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
    msg.setTimeStamp(0.794338217722);
    msg.setSource(43920U);
    msg.setSourceEntity(120U);
    msg.setDestination(28357U);
    msg.setDestinationEntity(209U);
    msg.id = 143U;
    msg.width = 34450U;
    msg.height = 22915U;
    msg.widthstep = 31038U;
    msg.channels = 48U;
    msg.depth = 91U;
    msg.finaldata = 223U;
    const char tmp_msg_0[] = {49, -34, 92, -76, -22, 69, 70, 104, 106, -43, 58, 77, -67, 2, 37, -28, -8, 90, 112, 74, -20, 25, 94, -48, -52, -25, 70, -41, -41, -74, 10, 6, -74, 97, -49, 77, 91, -89, -120, -121, -82, -93, 53, 49, 53, -11, -79, 24, -90};
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
    msg.setTimeStamp(0.677952746233);
    msg.setSource(49509U);
    msg.setSourceEntity(177U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(238U);
    msg.width = 60658U;
    msg.height = 4424U;
    msg.channels = 11U;
    msg.depth = 30U;
    const char tmp_msg_0[] = {125, -16, 8, 5, -112, -51, 82, 88, -45, -58, -116, -111, -105, -123, -104, 14, -101, 92, -66, -94, -122, 112, 72, 44, -28, -53, -63, 49, 19, -127, 35, -62, -42, 27, 79, -26, 114, -30, 101, 33, -127, -37, -30, 95, 23, -54, 110, -22, -10, -103, -6, 44, -2, 32, 2, 101, 97, 40, 35, 61, -47, -84, 78, 24, 33, -70, 52, -54, 20, -3, -74, -122, 69, 22, -85, 11, -104, -35, 116, -125, 102, -84, -4, -9, 106, -121, -17, 70, 16, 86, 45, -101, -12, -110, -75, -47, -31, 116, -108, -101, 48, -75, -104, 10, 5, -50, -41, -109, 53, -18, 108, -84, -80, 26, 107, 98, -7};
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
    msg.setTimeStamp(0.291717056733);
    msg.setSource(45989U);
    msg.setSourceEntity(73U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(94U);
    msg.width = 14446U;
    msg.height = 62723U;
    msg.channels = 153U;
    msg.depth = 0U;
    const char tmp_msg_0[] = {113, 86, 2, 30, -17, 51, -98, -102, 76, 113, 120, 45, 35, 67, -69, -14};
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
    msg.setTimeStamp(0.140824338375);
    msg.setSource(36611U);
    msg.setSourceEntity(114U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(224U);
    msg.width = 50207U;
    msg.height = 59078U;
    msg.channels = 109U;
    msg.depth = 80U;
    const char tmp_msg_0[] = {-33, -51, 80, -5, -89, -112, 71, -37, -35, 10, -111, -39, 18, 22, 71, -68, 84, 71, -111, 41, 4, -21, -111, 42, -75, 51, -81, -35, 3, 31, 93, -113, -22, -104, -77, -27, -102, 110, -35, 27, 73, 21, -29, -38, 38, 94, 121, 108, -74, -8, -117, 1, -85, 36, 108, 60, -66, 102, 45, 84, 53, 72, -89, 17, -121, -47, 119, 117, 34, 116, -9, -84, -3, -22, 122, 87, -58, 96, 38, -4, -1, 67, -37, 49, 46, 22, -48, 105, -25, 34, 119, -49, 29, -109, 83, 55, -82, 90, 78, -23, -90, 98, 86, 3, 33, 16, -98, 14, 53, 53, -109, -21, 116, -101, -103, -100, -78, -58, -80, 6, -110, -11, -39, 66, -89, -86, 85, 28, -84, 66, 82, -99, -93, 70, -5, 23, -105, -24, 66, -76, -108, 110, -87, -36, -120, 99, 97, 55, -29, -38, 4, 27, 84, 60, -2, 97, 123, -112, -12, -51, 98, 17, -102, -117, -2, 90, 76, 121, 68, 68, 54, 83, 59, -117, 54, 81, -101, -71, -115, 16};
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
    msg.setTimeStamp(0.940292389239);
    msg.setSource(46975U);
    msg.setSourceEntity(31U);
    msg.setDestination(12432U);
    msg.setDestinationEntity(237U);
    msg.frameid = 157U;
    const char tmp_msg_0[] = {-125, -12, -118, 62, 114, 98, -63, -74, 36, -73, -79, -44, 21, -93, -114, -52, -94, -120, 91, -4, -54, 124, 113, -21, 3, 30, -109, -59, 3, 96, -68, -31, 116, -49, -30, 51, -121, -6, 107, -76, -50, -37, 106, -99, 85, -75, 62, -101, -72, 76, 44, -64, 62, 72, 7, 46, 52, -32, 94, -52, -67, 40, 63, -40, -94, -80, 88, 2, 119, 13, -62, -106, -117, 87, -117, 84, -34, -28, 73, -61, 0, 50, -79, 124, 34, -43, 17, 101, 93, -26, -49, -95, 88, -78, -118, -6, 31, 102, 10, -49, -32, 11, 114, -36, 2, 110, 39, -92, 23, 89, 70, 90, 55, -62, 85, -48, -120, 39, 116, -118, 85, -45, 85, -116, 41, 80, 33, -18, 125, -97, -55, -84, -104, 19, -5, 94, -46, 19, -71, 79, -16, -119, -21, -54, -48, 126, -67, 32, -102, 90, 63, 56, 49, 59, 77, 1, 52, 101, 90, -12, -18, -61, -50, 38, -25, 91, 12, -68, -71, 14, 21, 113, 8, -73, 109, -5, -10, 92, -19, -98, -13, 27, 108, 34, 16, 81, 28, -45, 41, -85, 67, -57, -39, 102, 52, 106, -107, -80, -51, 70, -43, 15, -94, -21, 18, 72, -44, -55, -1, -40, 74, -77, -36, 18, -48, -51, 3, 113, 101, 111, 92, -37, 100, 115, -45, 10, -105, 25, -67, 58, -8, 121, 35, 103, -106, 121, -112, -84};
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
    msg.setTimeStamp(0.450168188089);
    msg.setSource(22818U);
    msg.setSourceEntity(167U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(218U);
    msg.frameid = 236U;
    const char tmp_msg_0[] = {-58, -83, -82, 5, 42, -74, -2, 25, 125, 92, -88, 90, 9, 118, -44, 63, -9, -84, 69, -110, 110, -104, 65, 10, -18, 124, -62, 20, 113, -127, 121, 108, 86, -25, 59, 58, 101, 108, -11, 81, -122, -51, -96, -3, -19, -7, -68, 97, -104, 60, 88, 40, 125, 103, 53, 93, -21, -116, 123, -48, -21, 90, -80, 32, 51, 1, 70, -46, -18, -117, -71, 18, -38, 57, 91, -113, -117, 3, 88, 109, -14, 3, -108, 124, -101, 18, -87, -99, 122, -45, 26, 4, -31, 51, 58, -16, 30, -73, -122, 43, 87, 33, 45, -11, -28, 87, 29, 66, -16, -19, 105, -35, -108, 67, 55, -109, 111, 88, 87, -103, -16, 69, 62, 106, -106, 15, 78, 18, 94, 89, -92, 81, 73, -6, -15, 88, 23, 53, -107, -101, 31, -61, -66, -106, 68, 91, -73, 61, 91, 69, 122, -16, -97, 17, -10, -37, 12, 42, 1, 4, -108, 13, -62, 7, 86, 10, 125, 77, -82, -68, 121, -106, -85, 109, 26, -29, 39, 68, -121, -97, -111, 0, -67, 112, 76, 84, 114, 89, 72, -80, 24, -27, 19, 39, -79, -89, -85, -122, 57, 84};
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
    msg.setTimeStamp(0.809251571731);
    msg.setSource(9768U);
    msg.setSourceEntity(228U);
    msg.setDestination(38661U);
    msg.setDestinationEntity(219U);
    msg.frameid = 64U;
    const char tmp_msg_0[] = {17, -127, -3, 60, 106, -24, -45, 92, -39, -11, 24, -8, -81, -52, 50, 52, -60, 105, -69, -70, 75, 74, -29, -86, -32, -1, 109, -57, -21, -126, 93, 57, 31, -83, -80, 57, 50, -103, -81, 34, 0, -90, -84, 63, -81, 126, 69, 75, -13, 22, -11, -76, -55, -90, 109, -127, -79, -48, -68, 73, 115, -106, -24, 74, 40, -94, 24, 39, 88, -112, 26, -111, 121, 69, -113, -123, 68, -10, 123, -103, 99, -109, -65, -67, 79, -56, 108, 15, 109, 100, 49, -111, 115, 22, -115, -35, -120, -56, -62, 86, -42, -44, 12, 65, 32, -29, 110, 58, 104, -27, 101, -112, -107, 21, -74, -33, -19, -28, 32, 20, 28, -97, -71, -51, -65, 73, 7, 22, -67, 109, 111, 21, 28, -45, -98, -19, 54, 29, 76, 101, -18, -66, 68, -94, -57, -89, 67, 103, 68, -12, 29, -69, -73, -45, 68, 66, -97, -75, -22, -57, -120, -16, 91, 108, -68, 40, -55, 31, -121, 67, -95, -9, 77, 106, -53, -13, 72, 22, -65, 2, 65, -15, 35, 85, 14, -83, 108, -62, -52, -4, 55, -60, -3, -119, -39, -108, -89, 76, -112, -47, -116, 22, 87, -86, -81, 104, 60, 18, -18, -46, -94, 50, -74, -52, -6, -106, -13, -60, -4, 70, -123};
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
    msg.setTimeStamp(0.656975909885);
    msg.setSource(5061U);
    msg.setSourceEntity(66U);
    msg.setDestination(8095U);
    msg.setDestinationEntity(215U);
    msg.fps = 177U;
    msg.quality = 33U;
    msg.reps = 153U;
    msg.tsize = 202U;

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
    msg.setTimeStamp(0.570979909505);
    msg.setSource(51513U);
    msg.setSourceEntity(191U);
    msg.setDestination(62355U);
    msg.setDestinationEntity(158U);
    msg.fps = 116U;
    msg.quality = 138U;
    msg.reps = 200U;
    msg.tsize = 138U;

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
    msg.setTimeStamp(0.0803601481041);
    msg.setSource(12653U);
    msg.setSourceEntity(26U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(235U);
    msg.fps = 131U;
    msg.quality = 89U;
    msg.reps = 18U;
    msg.tsize = 176U;

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
    msg.setTimeStamp(0.0834975186963);
    msg.setSource(13812U);
    msg.setSourceEntity(179U);
    msg.setDestination(16311U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.9112960554;
    msg.lon = 0.767312823506;
    msg.depth = 118U;
    msg.speed = 0.911454636834;
    msg.psi = 0.00194341882708;

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
    msg.setTimeStamp(0.520742525001);
    msg.setSource(33888U);
    msg.setSourceEntity(15U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.434785382278;
    msg.lon = 0.822504467771;
    msg.depth = 13U;
    msg.speed = 0.0779222964292;
    msg.psi = 0.0312927593836;

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
    msg.setTimeStamp(0.1871234742);
    msg.setSource(50701U);
    msg.setSourceEntity(65U);
    msg.setDestination(17116U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.993247569283;
    msg.lon = 0.239821185816;
    msg.depth = 97U;
    msg.speed = 0.247769256425;
    msg.psi = 0.524425583197;

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
    msg.setTimeStamp(0.146555316308);
    msg.setSource(52483U);
    msg.setSourceEntity(212U);
    msg.setDestination(38617U);
    msg.setDestinationEntity(125U);
    msg.label.assign("NIUKOSCAIZRLCCBNVTSTQDEEENXZGZHSWKJTTJUVQREZUDHSLJFWRAADJPOQZLGWOEDGAIKGVLNHLYXVRSHMEDOFVVOJAKIHZKBMBDDFHPKPEMVEAJPQKXP");
    msg.lat = 0.233458456863;
    msg.lon = 0.0228683672853;
    msg.z = 0.192875227665;
    msg.z_units = 47U;
    msg.cog = 0.419236155314;
    msg.sog = 0.109936050441;

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
    msg.setTimeStamp(0.905405099575);
    msg.setSource(37818U);
    msg.setSourceEntity(29U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(132U);
    msg.label.assign("AJJJUIXLUDNWFGDBSRQPKRAHLHTAYEJLXPEHCXYIYTXQWSMEAQZNIUEGBPFWDCGERIKGMSWHCMZNWGCXRJOIZUBPBFLFIOSKBJTFLVKKDHNRPNYDWUH");
    msg.lat = 0.862512676473;
    msg.lon = 0.648584697531;
    msg.z = 0.341757429685;
    msg.z_units = 30U;
    msg.cog = 0.635520017536;
    msg.sog = 0.765108348993;

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
    msg.setTimeStamp(0.288444835567);
    msg.setSource(42028U);
    msg.setSourceEntity(143U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(32U);
    msg.label.assign("EMAPOEYRSQAWXMJPRLYGKEIACIMOBEPZFKNXJUJKPUTLIEYILMJHBOZRLQKDVXNVOFHYYGRK");
    msg.lat = 0.931507018677;
    msg.lon = 0.837311482785;
    msg.z = 0.913766172816;
    msg.z_units = 194U;
    msg.cog = 0.88135810691;
    msg.sog = 0.0485679997531;

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
    msg.setTimeStamp(0.149182527631);
    msg.setSource(43706U);
    msg.setSourceEntity(106U);
    msg.setDestination(2661U);
    msg.setDestinationEntity(135U);
    msg.name.assign("IJKZJMXZHSFMVTHHRSBBBDVAZJHRUIXRGQGJMCFOLLWTPRUMRTXXLMBEWSIHWSHLVYBDRZOSVNPFTUKOWWLVQTGUPAQUJUTMRIHZQXEFFPNAK");
    msg.value.assign("PXCZQLQCQHGDJJJELWBKQBHSMKWDQCVCNFKEQKGQBLTVATSGFYKSSPVWTODGFGXSKIHZAGCGQTWMIAYRBESFPBZAWUFNTYMPNILJOVSKNGMLRJTXIIKOTJBBXRAPFSWJOJYMDYMYCBODZTXXHLRRYHEZDPEHDFFGENSCVATJXVSVPCCTWCAIHAOIWDHARGZALEXXOUONIUNRMNVDLNYKQER");

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
    msg.setTimeStamp(0.470471431525);
    msg.setSource(12450U);
    msg.setSourceEntity(86U);
    msg.setDestination(61522U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HLGCEUHGNPXGROEUJOAVFTOVGLLKKRIRDIPYHMAUDQIQTEAJPLSCZYNADNPGNJXKBYUQNECMWIOMJ");
    msg.value.assign("GLIRINNUZWDTHDACFYVYJWYYPSZCJBCEZOUNXQDIZNXLEHPVDTQNLMRDRILAJBEKAXYEFFJATVMZUTBWQSCCHSVJWYSYDOMHYTOKXBMRDDOULOQVHBWESXTWGWBZHKJCDRLMVFOQUFGRGQGPKEPAZVJXCOXRHABUSOTAMVGEUMAELQKIAWKYMKYOINBMX");

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
    msg.setTimeStamp(0.830672777204);
    msg.setSource(3539U);
    msg.setSourceEntity(144U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(174U);
    msg.name.assign("IFSFVXROVVODLWDGQNWFEVYQTUEDWWUQTNRVJQLWMBFGMQXLNBRGLPMECNJKLDVKETPUUTSBKTJYSPUBRCCGHHHSXZNQZMZZIQKIHXRHOYHTBPKNALYESICBIJRGSOFZANOFHXVIYCVGXMMGLKE");
    msg.value.assign("QOVFHTICLYBJVHUBNAUREMMLGJALOYRJKWKZPVUEZJSQTQXNEPSIJOIRVUWYFIJTNBGVIQCMRBMTASMXPVSBLNTMZDGYFCGKCPF");

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
    msg.setTimeStamp(0.0585818830389);
    msg.setSource(10933U);
    msg.setSourceEntity(145U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(187U);
    msg.name.assign("MFSUMLQWUKBGXNAUAZPHENEKYGFCUEAYVPEJPISBQJINMBFPTPEKWANSABBHCYPSORLEONMFUIDMATXUZQTSKMAMNETAVLTVHWPGXYBDLLGMHNOVGKXDJHRYLYDVPARHPQOGLGTFJIFNYWEOTH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PEKBRWSGADVBAIZNPUHITWAEODKDQCOKGMYRMMYWQPHKUFPIFHDCCLGMFQHERHDXYZVWHMLONLBVSTUKUYNSPEDTB");
    tmp_msg_0.value.assign("RBSDBNGNDVGUPOXIDTJHOAFKEXJTIQNVGBWHZWUAVDQYVFTQUPEGKVUWNXLDAJHYZAZWMMFZGIPVTAGTXXNSBYRIRGAFQJAKCHVRP");
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
    msg.setTimeStamp(0.289377575121);
    msg.setSource(7782U);
    msg.setSourceEntity(21U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YFKRREWOGKSOYQICBRDSOMBPURIGKHDHDQRFCWXVIAFCMETUHNJYEKQFNSEIPSOWOWXLUVGPJKGZXBKKTAFDYEMOOFAHBDZQCGSSTCWLFQJETIIZXCRPMUBRAJCBSGFYUARUGRNDXCOIBPNYULPLIACOHMIVWUQTGWVEZFEBDVKJ");

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
    msg.setTimeStamp(0.192006626472);
    msg.setSource(60069U);
    msg.setSourceEntity(10U);
    msg.setDestination(63159U);
    msg.setDestinationEntity(192U);
    msg.name.assign("LYJOXDUJGIUNTECMBANTBAZFLUCVHIKSBOHZQVDVIQEXHBVAAGXXMUTGHDZIHUHHZQQLEXZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EAMNMYCZRYEOKGZNEPIPBPCGTDMDFODYJLXBRFGKUSWL");
    tmp_msg_0.value.assign("JJQDRJPLMZRMNPGUGMYWMYYWVEDKAQKWXIITKSXPONVRYQFQFWHKPVOSGEOHEUUICVJRRVZAJQAIGKYELSTMBWZFJUTCZF");
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
    msg.setTimeStamp(0.543661490839);
    msg.setSource(747U);
    msg.setSourceEntity(82U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(94U);
    msg.name.assign("ELTHRFMSQNAVXIHMPDTOHJSXCSWFGIQEUOZGKJXGOKVNPTSKUXCCT");
    msg.visibility.assign("UKINVXYQBCNCNUKBZRURDPBBDTXTXXDFDAGJOYQOKOASPOJMOMTMSVRJFPVRHLQZWELQWRPFLHQQSYIWGH");
    msg.scope.assign("GZOWOKTRIJFGLWWMTVTIKFFXPMBFAFJNIQRS");

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
    msg.setTimeStamp(0.550894239671);
    msg.setSource(539U);
    msg.setSourceEntity(107U);
    msg.setDestination(32125U);
    msg.setDestinationEntity(86U);
    msg.name.assign("HWDFXYLRVHHNGTLHGQPLDXUSKUKNHSQATOISBMMOWQVJLICUEQGJSBCIYCPHVQJOJWKFFPHRRYJTIEGATVRUVCVZWYAJZEUZKPPUDBHIMNLPT");
    msg.visibility.assign("BNQBBFEVQRWZLAVLPUINUZECNZYSFWNVGTQEVZZPCMBUQAOCPPATQKMLYS");
    msg.scope.assign("LXMCMSNLZHTSCIYNWTTJMISFEHUXBLODYWCNZFRQMBKYKWWNIZPHGGUTNUNGKXVQGDQEJRVIMASMPDYKJPREMFAAPADICQAPRHSIUUMZDTHMJFVZOBVYXJGXEBSAEHPFWEIRGLKAPHETHLYOTGTOBDUVZOFEJSHDRNPKQNCNKMWSJRASZYULGXCJXFXDRVBAPUFXKIWOJWBQCQWCQVEWVBODEUDZKSBIYLLZQYVZT");

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
    msg.setTimeStamp(0.843877201591);
    msg.setSource(3672U);
    msg.setSourceEntity(115U);
    msg.setDestination(16578U);
    msg.setDestinationEntity(67U);
    msg.name.assign("PGQJVARGLBZUOUFOUXSWISCJRQCZCFJTOMZAYAVGUBONPTHAZSJDWPGMSRFLWKPYIDQXXKFRLEMGRJDPJWLYCEYGFLUZVMCEOEWYINHXBZQANNMXIBTUHUIAHEYAHHOZKWRFAPPLOKMBEKDXRKVQQFBESGRKHNLVANGPIKFFBZGICLTOCZUXRDCVWJESNYRFQHVMTKLYCEOJUNZPVIXTDONWUQXCDGVSHSYKQLPIDXWMHYQVS");
    msg.visibility.assign("AXSACMDQLULEKKNEXLSAOZFXCQYRGVPSVNQOMDYXBKDJMVRTVTCTHFDTSTKHBKRIZJGDFLIGNWAHCEZZOSNAYCGZDEZWTGGNJJJOHWNRIJJCWYDRAPDIFWXMBIFMCBLUTHORXJLUPAGUXEOJZKNPOPLPOKGCJAPUTUSIPYMQAREVTDGUTNKXSWEFBMRQYHQIYSBBXQYMCQPMKFYFLEZNQRXMLSUCBFBEBHIPVIWSHAQVDROKWHZEN");
    msg.scope.assign("CJVZTQCOZDYRZOLPEEJACLEXEFPSXNRXSXAYMEDUFTRAVDLDXSCKZJGUCWJGSWVBXIPMIHAKASFYKZQLWRDWXBYQMVPQGZMMQXU");

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
    msg.setTimeStamp(0.321900947954);
    msg.setSource(38789U);
    msg.setSourceEntity(51U);
    msg.setDestination(6560U);
    msg.setDestinationEntity(26U);
    msg.name.assign("JAOPEKBYUBRGAXCMNUQYFRPKICHPPTMMSFLJEBDMYDGHSYBYUDKUPDEAQEUZRDMFLGZTSXXVSJZTJUUKGOABOEVCJEEIBIVILMQIKWWWUTOADPWVEMAQUSXIROPOXFXSNLWU");

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
    msg.setTimeStamp(0.184783853294);
    msg.setSource(29604U);
    msg.setSourceEntity(241U);
    msg.setDestination(45603U);
    msg.setDestinationEntity(0U);
    msg.name.assign("BJKNIPRAGCSASSBPYGKMJDF");

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
    msg.setTimeStamp(0.778205674965);
    msg.setSource(4663U);
    msg.setSourceEntity(128U);
    msg.setDestination(43316U);
    msg.setDestinationEntity(161U);
    msg.name.assign("UHMJQCWJOGOJLOLIKCTCPIKWKSSWVUGFJXMDTTDERFBNMGCYMPYMQUHBOGBHSQGHNTLOSCOUSNTQPGJBMISDCEZFQFQTSIWIZXIYOBYVUTHDYWKYARCZDMQYQLBXXZGYRANIDPKCHKENAEPSBIUQHMFAORNKHSGEXPFBKZAWSDZTQGFVEYMUHZWRJEITBZVPAVWPVLODTBLYLJLP");

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
    msg.setTimeStamp(0.514105508302);
    msg.setSource(18823U);
    msg.setSourceEntity(94U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(228U);
    msg.name.assign("PQDWOVEGXTVNCJLLZGHYTYNMHMPZERYGFJSGEJSKFXZRIVAYHKWWBEDJYCTXDKAIZGVFWJKZYKEYPBFLFCVFKSXWURMDOTQHBAPPXBJEUMOGFWCRRLBKVFIPSAKSUCZARHASONTKUZDNATNOLGQQJYACRVLIFPQWIBXCBPWXOSIDNVUT");

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
    msg.setTimeStamp(0.840031263946);
    msg.setSource(4232U);
    msg.setSourceEntity(12U);
    msg.setDestination(47743U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EDZHCNMICCEYGYSYVGIRYILNNJYOOFUWIPDDKELSXQCBJPWRHDDYQLFVYGGSTMNYWPBWKHOTMBDKVCAOKIHOCYRJEWBRBKTFFZMZGFPAVHAKBBFQXWAEGUQREDJMFVVMPXZTIBZLHAQPRZERGJGNMTCKIXVTNEBQTZ");

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
    msg.setTimeStamp(0.331239964474);
    msg.setSource(44428U);
    msg.setSourceEntity(70U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ICCWIASCXOWHBSDJUQKCVEFJJSMEMNHLYF");

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
    msg.setTimeStamp(0.170588248899);
    msg.setSource(45269U);
    msg.setSourceEntity(44U);
    msg.setDestination(50948U);
    msg.setDestinationEntity(53U);
    msg.timeout = 2031900365U;

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
    msg.setTimeStamp(0.304615211427);
    msg.setSource(2680U);
    msg.setSourceEntity(140U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(92U);
    msg.timeout = 1186963822U;

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
    msg.setTimeStamp(0.329062428332);
    msg.setSource(50976U);
    msg.setSourceEntity(183U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(172U);
    msg.timeout = 842976013U;

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
    msg.setTimeStamp(0.309897944036);
    msg.setSource(20773U);
    msg.setSourceEntity(240U);
    msg.setDestination(47075U);
    msg.setDestinationEntity(18U);
    msg.sessid = 2157036736U;

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
    msg.setTimeStamp(0.437022320789);
    msg.setSource(62267U);
    msg.setSourceEntity(134U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(239U);
    msg.sessid = 1160861267U;

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
    msg.setTimeStamp(0.157024531831);
    msg.setSource(59753U);
    msg.setSourceEntity(186U);
    msg.setDestination(59078U);
    msg.setDestinationEntity(6U);
    msg.sessid = 3158209962U;

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
    msg.setTimeStamp(0.0962209013275);
    msg.setSource(46063U);
    msg.setSourceEntity(229U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3705032944U;
    msg.messages.assign("WQSYWZRCNUFWPDJUWHVYJVVLOHJIMZSGTHXLNZMMYWAGFJJVQRBZHRPFTQZWPZATGXTWKNLUDREGQIUMTTSVUTOUIFEDFQRRBDDBIGHRFLBBNGINGCRIHLSWVLSVPOQUGWBJBHCADCDKMQNJMMBUOOOVDYSKMNQDXUTDNIYZYOSO");

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
    msg.setTimeStamp(0.643340049173);
    msg.setSource(60034U);
    msg.setSourceEntity(137U);
    msg.setDestination(21498U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1017195326U;
    msg.messages.assign("ZTRCANDPVSMONCXIRKVAQORZGYHWULVHIOGPBNHOPDHJUMRSGXGWKBSAXJFKUXMYFRTTFWHJIVPIKDUJULILTQCVTLTHCIFBYTZJWYAFPCCUKVNGQEPADBYBYQMLRQWKLTJKEXNNSERDZTEKLMHFYZMEJMBT");

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
    msg.setTimeStamp(0.819125741788);
    msg.setSource(10335U);
    msg.setSourceEntity(87U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(230U);
    msg.sessid = 827233081U;
    msg.messages.assign("TWJOFHCQQWRTNINGKJPLSSOOOVSETDXDEUJREKLWBUJASHKWLPNIONZXOAQMFUVCUNBOSOBCFYYDDYMWYAIMZCGGCRHLJLMFEXPFJECEJYYCPGPZBTCOYIGCHUKB");

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
    msg.setTimeStamp(0.120756146644);
    msg.setSource(65455U);
    msg.setSourceEntity(96U);
    msg.setDestination(1731U);
    msg.setDestinationEntity(98U);
    msg.sessid = 3672077895U;

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
    msg.setTimeStamp(0.628637083734);
    msg.setSource(81U);
    msg.setSourceEntity(71U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(215U);
    msg.sessid = 1744539682U;

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
    msg.setTimeStamp(0.563428067344);
    msg.setSource(46743U);
    msg.setSourceEntity(74U);
    msg.setDestination(10917U);
    msg.setDestinationEntity(237U);
    msg.sessid = 1281949119U;

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
    msg.setTimeStamp(0.684645525061);
    msg.setSource(56917U);
    msg.setSourceEntity(233U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(46U);
    msg.sessid = 4185611810U;
    msg.status = 215U;

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
    msg.setTimeStamp(0.246462516086);
    msg.setSource(55274U);
    msg.setSourceEntity(133U);
    msg.setDestination(9033U);
    msg.setDestinationEntity(61U);
    msg.sessid = 4103916374U;
    msg.status = 108U;

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
    msg.setTimeStamp(0.392015527013);
    msg.setSource(36325U);
    msg.setSourceEntity(235U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(41U);
    msg.sessid = 3204440596U;
    msg.status = 69U;

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
    msg.setTimeStamp(0.524808299857);
    msg.setSource(4423U);
    msg.setSourceEntity(187U);
    msg.setDestination(57746U);
    msg.setDestinationEntity(7U);
    msg.name.assign("HETMETSNITWAAOWRVCHBNNLGEBOLTXQJUZOFWGTOOKFZUSGPLSALXJHWADKPVGLVNUKWWXGPFCEYKHPPZDXXEYVHXMRGJUZVUSXERCBORKLRKDKQPYLAFQXD");

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
    msg.setTimeStamp(0.396447449381);
    msg.setSource(4863U);
    msg.setSourceEntity(64U);
    msg.setDestination(48954U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NXIDHXCVMBBHJCRXQSWYPQDJCAIYUFTIGSXVUAGJAPVMUFJPWCTONJWPJVOUJFFZKAEEKSPUYHICSCTFSGXLCHQDDKEZKWBGPBFNNMTRIWLYFMAODONOLAQYLVJRUOZJSWDTBGTLXQGGSJRROSKZBTGNTHVPYMEHTMRTBZNLEU");

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
    msg.setTimeStamp(0.0810533672986);
    msg.setSource(59373U);
    msg.setSourceEntity(52U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(135U);
    msg.name.assign("VRKZWFIXRADEKHIJGXNAYJAFBTWNZQLVDSGITUDDVZSHIUJUFVSPYJGUIOXTJFQPTKRZPOJGOSHWEEOPCPCDBKBWQTCQOKHEEGPMBH");

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
    msg.setTimeStamp(0.78893101125);
    msg.setSource(31877U);
    msg.setSourceEntity(117U);
    msg.setDestination(58399U);
    msg.setDestinationEntity(31U);
    msg.name.assign("XLZGABYBCAPVSMRFDZGWKYQBTBRMUNACMTBMSHLCNTVHJCXRXRKMOLSUIJYCPTHYDTHJRHLVXNFKSWNVZXJVGWHOQPBGNBOXEDMIKTLIODAUQECWFAWPMAGGKSBRWFEQZGKJVHHWUMPRJ");

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
    msg.setTimeStamp(0.0897075275454);
    msg.setSource(43416U);
    msg.setSourceEntity(32U);
    msg.setDestination(17908U);
    msg.setDestinationEntity(162U);
    msg.name.assign("CLAPVXJNEITEVJLTNLRHKMNDGNRCHEEPZXFPEWLZRBGPMPHEVJBWAZULIYFXYMFKJRLKSZPYHGYFOOFSF");

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
    msg.setTimeStamp(0.403194382937);
    msg.setSource(15045U);
    msg.setSourceEntity(65U);
    msg.setDestination(32038U);
    msg.setDestinationEntity(13U);
    msg.name.assign("HJDXRTLIOXCFHMDYBZVLKYQGLHYJDLHQLIWWIBGYBHDMQVKUBGKUOCKQUWXRUHIADS");

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
    msg.setTimeStamp(0.0293008783439);
    msg.setSource(54967U);
    msg.setSourceEntity(2U);
    msg.setDestination(34465U);
    msg.setDestinationEntity(113U);
    msg.type = 215U;
    msg.error.assign("ABGIXNTZMVYVTZKLHNRKNCPMULVQQMFGIFSXXFEUPDJSRABEWOZDHOHVBKZKBIYALKTVCSOENRUQOBDYCXGORWUWCYEALMRRHLXYPBECZCMEFCIWDAVPIRJFDNFOLLZUDLXRBWXWSSHKTZCEPGDAFJFMAQJTSVBDUMQCZOTWGUNKGLPTQVYYIJFJNZRXSPIHEEIUQMPVHQDZNHBWSGYKKGBNWLWNYPTMRCHJI");

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
    msg.setTimeStamp(0.158862859494);
    msg.setSource(25321U);
    msg.setSourceEntity(0U);
    msg.setDestination(22458U);
    msg.setDestinationEntity(161U);
    msg.type = 22U;
    msg.error.assign("BUSIZMHRCPPYTAKHECXYUPMTRKKLAMETGLNMQKPUZFQEZWGPEGSVLYMGRSXFTGMNHBIVKQSDILSVZRTTLFWMKFJHNOLDXBIQLAFAPUJFNTALAWOCWKSLIR");

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
    msg.setTimeStamp(0.613238837325);
    msg.setSource(46945U);
    msg.setSourceEntity(146U);
    msg.setDestination(16187U);
    msg.setDestinationEntity(32U);
    msg.type = 78U;
    msg.error.assign("QMDUJXVETENYHKSNALXHOXLNFVROJWRQJZKSUUVMZVWKRQFRSLOTMHBLJVZZHDASTAFIHPWTYQAQWCLXTDWBPIUVNMFWOIWQFAEMFKQIRGLAJCTOPJHEXKSYUSRPXOXYBPZEQGYTODFBRYKWZDENJULEHO");

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
    msg.setTimeStamp(0.179704644309);
    msg.setSource(55646U);
    msg.setSourceEntity(15U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(240U);
    msg.seq = 62672U;
    msg.sys_dst.assign("MCZMIDGXODWYSWKGGGBQOIKDSZDYQBUDFRHYGNYPDMMJGVTRSLOSEWYEUNIFWDCCFEWZVPJSQBADICPZXPPJDYAGAXWOJQLZQUKPFHUECCJRLVZOTYRIHWBJQEQTBPXNJALKXCRPBLUXK");
    msg.flags = 224U;
    const char tmp_msg_0[] = {22, 59, -58, -55, 42, -6, 107, -94, -97, 108, -2, 37, 107, 1, -54, -68, -83, -118, 105, -15, 114, 66, 19, 71, 97, -121, 60, -59, -89, 74, -85, -37, -78, 16, 104, -85, -44, 17, -76, -25, -105, -126, -82, 18, 16, -76, -77, -6, -126, -84, -27, 107, 118, -118, 10, 37, 10, 81, -58, -45, 111, -124, -101, 116, 102, 15, -68, 37, 46, 46, 95, -33, -69, 12, 77, -97, -75, -119, -45, -62, -24, -82, -66, 84, -8, -30, 93, 2, 118, -46, 49, 107, 99, 63, -12, 124, 118, -85, 30, -94, -112, -94, -62, -102, -53, 85};
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
    msg.setTimeStamp(0.895626113691);
    msg.setSource(13742U);
    msg.setSourceEntity(253U);
    msg.setDestination(10149U);
    msg.setDestinationEntity(51U);
    msg.seq = 61304U;
    msg.sys_dst.assign("TABNGJLODJTQIPVPASRMCGERMIMKRMYUVOXOZDCQKWHDHDRWTRBJXCDPHXCBQGQAZSLEGAVSFBX");
    msg.flags = 173U;
    const char tmp_msg_0[] = {-73, 92, -50, -119, 111, -86, 2, 65, -101, 14, -114, -30, 35, -5, -117, 102, -115, 14, 18, 17, -122, 45, -104, 105, 39, -30, 38, -7, 112, -81, 55, 95, -97, 112, -69, 36, -108, -109, 105, 116, -72, 68, 122, -13, -50, -62, -10, 67, -74, 95, -90, 105, -81, 75, 68, 102, 45, 107, -116, -49, -6, -95, -86, 25, -59, -127, -32, 109, 72, -80, 81, -76, 17, -15, 17, -118, -94, -84, 113, -59, 92, -13, -15, 86, -116, -67, -128, 24, 114, 42, 25, 72, -10, -109, -124, 19, 72, 87, -53, -2, 83, -38, -115, -100, 76, 73, 14, 85, 70, 105, 52, -105, -116, -19, 75, 106, -45, 58, -101, 33, -12, -40, -16, 53, -113, 89, -1, -71, 58, 23, 61, 105, -118, -49, -101, 65, -109, 5, -17, 37, 56, -56, 55};
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
    msg.setTimeStamp(0.327428141584);
    msg.setSource(16370U);
    msg.setSourceEntity(94U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(78U);
    msg.seq = 29003U;
    msg.sys_dst.assign("DEUTTABKHSRNOAIYPPNYILJUTBOPURYDJZDOSRRXTFORVUXMXETNFQGVWWDSAKTKFLVJDLVILZUVWISMAKPGABZPPIYMGKFEHGTXPCAZCVM");
    msg.flags = 210U;
    const char tmp_msg_0[] = {23, -61, -119, 47, 103, -125, 17, 68, -98, 10, 8, -101, -45, 45, -37, -87, -107, 7, 76, 72, 83, 42, 63, -30, 28, -42, 96, -68, -86, 38, -123, 10, 44, -12, 76, 89, -123, -42, -75, -78, -10, -107, 90, 2, -10, -20, 104, -77, -104, -71, 79, -7, -74, 0, 90, 28, 118, 121, 49, -115, 44, 58, -28, 34, 1, -30, 53, -67, -86, 27, -74, -51, 81, 112, -92, 15, 7, 5, -19, -121, 62, -10, -59, -10, 10, 60, 60, -18, 107, -112, -119, 31, 25, -96, -91, 70, 116, 58, 75, 8, -64, 69, -35, 111, -85, -58, 80, -65, -57, -68, -26, -105, -123, -2, 52, -115, 10, -34, -115, 109, -42, -119, 117, 105, 60, -44, 115, 18, 14, 62, 67, -30, 39, 12, 71, -27, -63, -68, -96, 47, 18, -39, 62, 47, -73, -2, 53, 31, -112, -117, -18, 35, -42, 113, -110, 57, 106, 48, -19, -125, -59, -104, -63, 46, -49, 9, -48, -16, -109, -58, 42, 68, -128, 66, -9, -92, 81, 76, -74, -94, -74, -102, -57, -92, -41};
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
    msg.setTimeStamp(0.789583413149);
    msg.setSource(1246U);
    msg.setSourceEntity(119U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("IDVBWNMQHJRWFSPOQIKKXFTIJNWDKDFVPLJXXTEOTIFPRAHXUUCQWAQKYXIRDMQLECUUMSOPEQPABRVBXOHDWSZOZFPMTIVBUJG");
    msg.sys_dst.assign("CKGPQBGSNXBKGKWUAZNZPFNHOEOFQAOIOXQYLLMFTPMXZOUKRBTNSCGZJFBUZWHRBRSQLXBOLVFFMGSAMXQVIEFCPVEHCIPMLVIVBDZJDDVWPLCLWGYRTKVHSYYCDQRXZJODJESQFADOWEPXJPIJUEQKBRJSKTDMVULYGZYAUFLNTSKNCCHCHGMBAUWIKTLEQHSIOEETROTDHRXARZBWGSPIVPIMIYNNJH");
    msg.flags = 89U;
    const char tmp_msg_0[] = {-68, 58, 48, -66, -6, -124, -124, -82, 83, -79, -30, -92, 86, 51, -83, 39, 122, 113, 40, 41, 56, -12, 40, 52, -43, -116, -75, -53, -10, 27, -103, -116, 99, 9, -64, -33, -65, -63, 85, 121, -41, -119, -46, -103, 38, 13, 40, -66, -65, 53, 82, 124, -55, -2, -126, 33, -35, -98, 33, -16, -86, 31, -128, -44, 46, 35, 115, 108, -43, -45, 43, -47, -109, 76, 42, 41, -85, 17, 85, -91, -20, 100, 107, -83, -98, 107, 46, -30, 64, -23, -104, -124, -23, 91, -115, 9, -37, 29, 83, -33, -35, 4, -42, -98, 38, -2, 6, -53, -69, 57, 122, -71, 4, 3, 71, 97, 1, -98, 64, 118, 2, 2, 82, 101, -28, -22, -42, 66, -78, -71, 105, -83, -37, -107, 116, -96, -51, 119, -5, 63, -86, -123, -115, -119, -40, -98, 5, -123, 8, -107, 125, 21, -9, 77, 45, 83, 53, 76, -62, 69, -30, -9, -113, -92, 52, -39, -71, -110, -114, -82, -9, 97, 104, 82, -111, -40, 62, 13, -72, 23};
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
    msg.setTimeStamp(0.141828964733);
    msg.setSource(3924U);
    msg.setSourceEntity(170U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("BLCRCJNDXSGFEVWHUAKEBCMSDFXJGDHCKMPEBIMAEOXJXRFFWWJBKXAGBKEMQJWZRNLYOYYNFTXDTZGAHKYAKSLSWADLSQYWVGNJLQSCVGTIGSCJO");
    msg.sys_dst.assign("OXTREARUXQZDGZDNBIPYHMY");
    msg.flags = 110U;
    const char tmp_msg_0[] = {-63, 16, 49, 47, -13, -77, 28, -96, -29, -4, 121, 102, -8, -87, 98, 82, -118, 104, -78, 103, 121, -108, -7, -90, -7, 93, 49, 125, 33, 29, -4, -39, -107, 97, 98, -99, 12, 50, -21, 84, 125, -76, -51, 46, -49, -12, 91, 16, 43, 71, 45, 13, -83, 10, -79, -93, -106, 65, 111, 23, 30, 73, -114, 25, 55, -53, 75, -89, 36, 96, 53, 28, 51, -103, -62, 51, 11, 64, 101, -102, 46};
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
    msg.setTimeStamp(0.177173452184);
    msg.setSource(2659U);
    msg.setSourceEntity(159U);
    msg.setDestination(50292U);
    msg.setDestinationEntity(63U);
    msg.sys_src.assign("EONQEESUKMIEVVCQIQJJSPIUALRMUBZXDHEZVWJZHTXRGQJKAGWSPQUYIPWYKDIMHAZJTYATYPYSCRRHWALCBNXKRUGODLUJDCAFFIYPIYZFPKYWUBDSHTOXVCNFCFIZQQMQNZJGOXZPLCUDKJSVEFTHMSFTDVM");
    msg.sys_dst.assign("UMCNKPTSUWSISOGAYMVFGPNKJZHNASDNVVHDVAIAIBBTMEWLJXDPNFPYMTNXCGOEWMRRSRCEEHFWYEKJCLIKQCNXBOTXRGMJLQKAXFZTHHJRZKZCVBXXPCBGWIYSLYJOLPXUWYFOKZUFDXD");
    msg.flags = 18U;
    const char tmp_msg_0[] = {-67, -118, -81, -82, -107, -3, -8, 1, -79, 108, 122, 31, -81, 112, 4, -37, 110, -27, -68, 92, 19, -34, -53, -38, -114, -117, -94, -101, 31, 2, -56, -118, 55};
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
    msg.setTimeStamp(0.153166012176);
    msg.setSource(27017U);
    msg.setSourceEntity(52U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(149U);
    msg.seq = 3402U;
    msg.value = 74U;
    msg.error.assign("EQRSUPFKPBMNFYYAXIJWQDBHTFDLKKWCOZIIWFXZMFWMCQTPNYAZRKGRAAWWNHUMRGQGSLXWKRNDQGMXVPBEZPOALXHUSIZEDGZENYOZOPKVASOEOYRNGTTXFWNPYPXLNAHAUOLQBXFBQJXGTLDYRUCXTRDMJKCJEMHSESCSVMQDHJJIZSRHMJCVNHIAQHBCVJLD");

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
    msg.setTimeStamp(0.618765558973);
    msg.setSource(33536U);
    msg.setSourceEntity(173U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(128U);
    msg.seq = 17411U;
    msg.value = 117U;
    msg.error.assign("VAATAOAQCFOOOPVFKWDNSQWSNPMOLMXUKWRDJZWOGAIFGTPEFZKHXZGBTUKEPBMUXBGRKKEVSQTRANJNIRHJHUYTFSAMIFMDEHZIBA");

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
    msg.setTimeStamp(0.779818011474);
    msg.setSource(4344U);
    msg.setSourceEntity(119U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(170U);
    msg.seq = 62809U;
    msg.value = 231U;
    msg.error.assign("KWTFSZCLUHIHABDRQEUZFETZLUXRCSNLBOTSHJDVNENJJXPFEBRJJDWYUQPTYIWWQODAGYPZX");

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
    msg.setTimeStamp(0.949393236938);
    msg.setSource(10291U);
    msg.setSourceEntity(95U);
    msg.setDestination(3391U);
    msg.setDestinationEntity(190U);
    msg.seq = 35063U;
    msg.sys.assign("ZMRJEGUWOTCPVPVHVYPTNLZTWPOCPWOYNLEACXIPXIKHASMXENVGUEVVQFLJNSODDTRDEFTLZAZRKIPVUQQRXYFTGEOBSKWPYMNPSOGAHUIQBFKOCSZXYKRWWRFZIPMYNSWRCZLVEJMQSBCDOEWDU");
    msg.value = 0.407726242748;

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
    msg.setTimeStamp(0.872647610538);
    msg.setSource(48038U);
    msg.setSourceEntity(76U);
    msg.setDestination(11587U);
    msg.setDestinationEntity(71U);
    msg.seq = 1269U;
    msg.sys.assign("YMVYUZHTRSVKPBTGGWQEXIHYGBCNNDFWCPIQCGFOJEFDBKNFPKDATHFUDYJLSYYABXBVO");
    msg.value = 0.161827097729;

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
    msg.setTimeStamp(0.77093533859);
    msg.setSource(24973U);
    msg.setSourceEntity(68U);
    msg.setDestination(65323U);
    msg.setDestinationEntity(200U);
    msg.seq = 62546U;
    msg.sys.assign("NRSELEPETRKPMIZHDEEKCKBJHQXOONJVZJYPANHKZNAYBQEBRSOTDG");
    msg.value = 0.00192359838032;

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
    msg.setTimeStamp(0.285136974396);
    msg.setSource(60948U);
    msg.setSourceEntity(125U);
    msg.setDestination(51741U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.26637645957);
    msg.setSource(53931U);
    msg.setSourceEntity(48U);
    msg.setDestination(44474U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.204052393824);
    msg.setSource(55608U);
    msg.setSourceEntity(214U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.458342848834);
    msg.setSource(50041U);
    msg.setSourceEntity(59U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(23U);
    msg.action = 116U;
    msg.longain = 146268441U;
    msg.latgain = 4032227955U;
    msg.bondthick = 2429252993U;
    msg.leadgain = 107732088U;
    msg.deconflgain = 540782007U;

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
    msg.setTimeStamp(0.571813881022);
    msg.setSource(3072U);
    msg.setSourceEntity(233U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(220U);
    msg.action = 17U;
    msg.longain = 3791527466U;
    msg.latgain = 965947754U;
    msg.bondthick = 2999679611U;
    msg.leadgain = 28364215U;
    msg.deconflgain = 2463394403U;

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
    msg.setTimeStamp(0.700995770913);
    msg.setSource(41666U);
    msg.setSourceEntity(211U);
    msg.setDestination(39321U);
    msg.setDestinationEntity(160U);
    msg.action = 158U;
    msg.longain = 962788079U;
    msg.latgain = 348596650U;
    msg.bondthick = 3672584072U;
    msg.leadgain = 1341291075U;
    msg.deconflgain = 157752210U;

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
    msg.setTimeStamp(0.858965870412);
    msg.setSource(42391U);
    msg.setSourceEntity(71U);
    msg.setDestination(6754U);
    msg.setDestinationEntity(36U);
    msg.uid = 253U;
    msg.frag_number = 249U;
    msg.num_frags = 241U;
    const char tmp_msg_0[] = {82, 105, -77, 21, -104, -58, 37, 62, 111, -50, 115, 33, -69, 84, 121, -65, 106, -57, 6, 33, -110, -35, 14, -110, -94, 118, -39, 102, 122, 22, -23, -53, 126, -118, 22, -9, -8, 20, -14, -122, -26, -82, 99, 107, 5, -26, 103, 107, -114, -22, 24, 69, 88, -40, 94, 92, 113, 16, 72, 79};
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
    msg.setTimeStamp(0.220540265179);
    msg.setSource(51894U);
    msg.setSourceEntity(44U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(49U);
    msg.uid = 182U;
    msg.frag_number = 38U;
    msg.num_frags = 184U;
    const char tmp_msg_0[] = {-32, 113, -69, 24, -29, -102, -125, -15, -89, 3, 5, -13, 64, 72, 75, -31, 6, 57, -100, 55, 11, 73, -58, -107, -48, 79, 101, 108, 27, -96, 117, 13, -47, 110, 103, -125, 105, -44, 34, 55, -97, 76, -37, -110, 55, 108, -48, 90, -75, 30, -21, -125, 58, 20, 18, 69, -2, 117, 101, 102, 12, -19, -112, 96, 49, 56, 126, -77, 38, -50, -44, -80, -37, 102, -58, -91, -98, -78, 68, 18, 49, -126, -18, 9, -85, 120, -51, 55, 74, 26, -44, 94, -82, 24, -99, 33, 71, 57, 96, -122, 98, 16, 4, -56, -28, -67, -104, 102, -108, 78, 86, -37, -45, -101, -98, -48, 109, -101, 119, -104, -44, -61, -61, -50, -102, -52, 9, -107, 115, -20, -99, 83, 38, -3, 109, 91, 58, 72, -98, 101, 110, -114, -50, 33, -94, -53, -33, -44, -55, -59, -58, 56, -30, -117, -46, -47, -104, -35, -105, 99, -21, -48, 48, 8, -110, 78, 28, -11, -13, -97, -21, -51, -89, -30, 43, -27, 86, 24, -119, 14, -26, 109, -112, -103, 27, -73, -97, 65, -96, 123, 72, -75, 35, -124, -25, 116, 61, 124, -109, 73};
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
    msg.setTimeStamp(0.681970158579);
    msg.setSource(10506U);
    msg.setSourceEntity(7U);
    msg.setDestination(20606U);
    msg.setDestinationEntity(187U);
    msg.uid = 35U;
    msg.frag_number = 191U;
    msg.num_frags = 46U;
    const char tmp_msg_0[] = {-24, -83, -127, 23, -85, -43, -98, -125, -117, -98, 10, -75, -27, 101, 11, -12, -12, 8, -124, -8, 104, 8, 42, -7, 79, 123, -3, -123, -62, -27, 99, -108, -78, 46, -47, 45, -58, -18, 20, 104, -70, 48, -22, -114, -37, 48, -54, -42, 39, 50, 29, -22, -4, 70, -44, -111, -58, 92, -37, -13, -93, 49, -13, 54, 109, -27, -60, 28, -88, 0, -56, 116, 120, -58, -21, -45, -58, -22, 60, 75, -89, 33, -26, 7, 79, 8, -26, -69, -39, -21, 66, -7, -34, 2, -59, 16, 79, -48, -74, 5, 79, -9, 72, -118, -77, 29, 67, 25, -23, -106, 89, -99, -57, -54, -42, -36, 24, 23, 5, 104, 125, 125, -109, -41, -81, -6, -86, -103, -69, 36, 93, -120, 42, 4, 75, -33, -23, -117, -38, 15, 0, 123, 114, -10, -40, 34, -78, 15, -11, 40, -106, 81, -61, 61, -17, -50, 57, 63, 4, 91, 80, -57, 78, 94, -95, -77, -53, -112, 49, -75, 22, 19, 94, -71, 38, 17, -126, 44, 98, -105, 80, 0, -113, 39, 77, 42, -51, -48, 29, 53, 79, 107, -7, 117, -6, 89, -43, -6, -1, -77, 88, -16, 79, -45, 94, 78, 31, -98, -19, 32, -112, 25, 54, 60, -91, -128, 6, -82, -118};
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
    msg.setTimeStamp(0.393428456343);
    msg.setSource(63383U);
    msg.setSourceEntity(142U);
    msg.setDestination(43041U);
    msg.setDestinationEntity(8U);
    msg.content_type.assign("JQLCEQBPGSSEKRXGLDADGRCRHDLEFBCVHABVFYLCUGWKJUAXAVNHYTIHN");
    const char tmp_msg_0[] = {-116, -20, -39, -114, -98, -100, 29, 83, 45, -114, 75, -4, 103, -74, -7, -21, 47, -125, 26, -72, 66, 24, 119, -3, -29, -68, -115, 73, -77, 71, 125, 118, 23, -14, -18, -2, -124, -127, 114, -105, -114, -36, 22, -32, 52, -31, 77, 103, -46, -12, 90, 44, 25, 13, -1, -23, 10, -74, 95, 122, -96, 59, -12, -56, -95, -73, 75, 53, 77, 55, -33, 32, -86, 77, -3, -82, -42, 69, 42, -126, 1, -85, 20, -89, 38, -58, 41, -96, 71, -49, 98, 66, 71, 115, -51, 123, 114, -81, 112, -96, -27, 36, -39, -107, 50, 125, -67, 50, -97, -99, 96, -88, -58, -63, 41, -123, -60, 81};
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
    msg.setTimeStamp(0.275119412864);
    msg.setSource(57932U);
    msg.setSourceEntity(223U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("FSBCCDTULIWWTYTBFEEVRAXOXXVTGXEHXZYWWOZEINJMJFQVPYVYDRWCQMIIKSGKISDMKBSQTIJQUYMCNQOUNYOXNXSKQSRKFPOSZMFPEDRYZAGDCANGQLWBLZTVTYMW");
    const char tmp_msg_0[] = {19, 36, -75, -126, -108, -22, 76, 59, -123, 99, 56, -12, 113, 112, 4, -65, 29, 123, -62, 21, -74, 121, -1, 23, 28, 42, -125, -14, 78, 44, 61, 66, -55, -52, 54, -83, -99, 8, 66, -1, 5, -88, 50, -99, 97, 114, 114, 108, -35, 113, 54, -103, -26, -47, -51, 124, -40, 20, 85, -19, 40, -91, 49, -48, -20, -77, -99, 31, -44, 42, 110, 63, -84, -88, 13, -51, 84, -9, 83, 16, 6, 18, -48, -17, 17, 97, -7, -114, 20, 104, 6, 35, 68, -83, 59, 53, -13, 13, -115, 51, 121, 21, -111, -46, 72, 49, -109, 90, -120, -44, 62, -21, 82, -122, -95, 49, 25, -104, -13, 104, -36, -78, 48, -42, -39, 98, -80, 40, 34, -40, 31, 102, 43, -50, -66, 14, -25, 9, -126, 68, 21, 28, -63, 52, -108, 50, 89, 96, -65, 70, 54, 88, -49, 114, 3, -120, -97, -105};
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
    msg.setTimeStamp(0.0653665078637);
    msg.setSource(59101U);
    msg.setSourceEntity(151U);
    msg.setDestination(43513U);
    msg.setDestinationEntity(229U);
    msg.content_type.assign("GHRJMZSJYBSNOQBIHXIEGYGUQTWRRQNRVAWKNKXKGHTILDTGFXDIJGAICXMUDBCEYEKPTZPPSDQFRSXTNSZFYFFHWAAVIHVOCHUKMYZQLWKWYSYAZFWAXLFCEEWNTJSSOFIVBHCIQUNORXLTMOTXEAEQZEPLMQVCRRMVUVBBGPYOGCGOUVPEDCTRVUOVDDDBQGHPMYLOUJJQWMLLHCUSLRAZKIMDXKZSBB");
    const char tmp_msg_0[] = {70, -8, 97, -60, 14, 123, -75, 89, -12, 5, -82, 68, 11, 72, -35, 110, -36, 75, 70, 3, 88, 11, -85, -58, -48, 40, -28, 55, -7, 115, -17, 23, 30, -124, 27, 85, 36, -125, -102, -97, -70, 113, -21, -32, 10, -90, -22, -79, -56, 81, 75, -115, 76, -24, -31, 68, -104, 80, 40, -12, 61, 1, 34, -124, -84, 77, -95, 37, 118, 105, -49, -28, 54, -126, 26, -77, -15, -1, -115, -8, 39, 73, -40, -107, 19, -120, -82, -23, -53, 114, -54, 18, 7, -86, 23, -125, 52, -9, -47, 27, 81, 114, -92, 41, 115, 18, 70, -14, -31, 87, -23, 55, -119, 77, 7, -50, -63, 93, -32, -31, 113, 116, -64, -32, 50, -98, 98, -97, -2, -24, 28, 36, -113, 12, 76, 40, -2, -40, 49, -13, -38, 122, -126, -15, -32, 62, 75, 1, -76, -33, -114, 82, -106, 80, -57, -51, 48, -110, -85, -56, 16, 17, 23, 35, 63, 71, 61, -96, 65, 107, -52, 58, 93, -97, 99, -13, -4, 26, 22, 117, -75, -6, -53, 80, 22, 51, 5, 98, -126, -44, 73, -88, 53, 114, 28, -57, 72, -113, 90, -4, -68, -95, 116, -37, 70, -60, -76, -53, -105, 8, 113, -31, 65, -92, -4, -42, 39, -45, 1, 38, 13, -121, 102, 125, 119, -115, -21, -116, 55, 19, -38};
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
