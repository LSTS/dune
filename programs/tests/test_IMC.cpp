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
    msg.setTimeStamp(0.759169928725);
    msg.setSource(56598U);
    msg.setSourceEntity(2U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(86U);
    msg.state = 14U;
    msg.flags = 210U;
    msg.description.assign("IFJBLBKJHFJQSJKRZNQIYFYBWVRDWVAOWMGCLWNCEIESTCIOZTSZDXQDKFYQTGYGCVPGGKHPZZSICUPZEMQFVABLFLCMNLESCHNXEDXHUMDSIXQRBIBRMJAKFXAVKOSTBWPSTGOWNEUWBMGEYOOTUKVGPOHGJYAEMLHUZJUPQ");

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
    msg.setTimeStamp(0.197848103513);
    msg.setSource(58981U);
    msg.setSourceEntity(214U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(184U);
    msg.state = 181U;
    msg.flags = 4U;
    msg.description.assign("HNVCSMTPRXQEAUKASZDXUCTRKHVKDYQPZXOBLLOTZMCFOBWESRMVDXCGYWYWIAKAEEDPUWAQLOKASFNLUYNJTLBTIYSAISTFFZBJRVCBHDCYNPINHFGYYOJEYRDXDIWQAWHXHDXQQQSQOZYZMOXRGCNVBVEZUUZKJPKUQXLWHDOPOWLRJUIRKPCMNPRIZMHAUEGJGWBEFGDCSVFUIAGHJFBSSMTEBT");

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
    msg.setTimeStamp(0.0268245983273);
    msg.setSource(3926U);
    msg.setSourceEntity(147U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(251U);
    msg.state = 213U;
    msg.flags = 55U;
    msg.description.assign("TDNSPJRSGSSCCGDQAVRTVXOVXUJKPBCIBAJQGMOHDWFYDDSKOLBAOYQYMXDNWYIPRIREKIOXIRWRWYAIRGOBKLRZWZFXBHIMMADGUZXCNBLAZFRQHMEWLKUNSKVFFVGYPXYNMGLPE");

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
    msg.setTimeStamp(0.583103696368);
    msg.setSource(53798U);
    msg.setSourceEntity(160U);
    msg.setDestination(57054U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.874785436651);
    msg.setSource(214U);
    msg.setSourceEntity(225U);
    msg.setDestination(58438U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.124582751397);
    msg.setSource(23007U);
    msg.setSourceEntity(56U);
    msg.setDestination(44223U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.552863302552);
    msg.setSource(34950U);
    msg.setSourceEntity(243U);
    msg.setDestination(4360U);
    msg.setDestinationEntity(248U);
    msg.id = 65U;
    msg.label.assign("LDZNMJTIWUBMQZEARTWKWYQXCPCULLSFTQAVFVOCSWBDSLSFOCJBTKCBJYNYGEPHANPTEUQDIGLLIUODEKGWJYXUXVKFDVERZAC");
    msg.component.assign("AIGXILSALBJWCBGKDMAPANFCMYSCMHRCWDQEPHYZSOLGZXVNRKJDCWRPFHRNZDMOOMTODFHJUEILNPWPGNYRQCKGXMKYPKPSXWMQILBTJEVUZFMGNTVOQTUQVOIESRGKJOKZKEOEDLIJJARNPZHAULUDYQBFSFSHJZSWVVYMCVQLCKWXWQFEZDPIQJE");
    msg.act_time = 37823U;
    msg.deact_time = 33126U;

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
    msg.setTimeStamp(0.423075515653);
    msg.setSource(47245U);
    msg.setSourceEntity(227U);
    msg.setDestination(24849U);
    msg.setDestinationEntity(69U);
    msg.id = 144U;
    msg.label.assign("DBTGCLGXSWSKXRZNZSDELDACDAOHYXCFMFHBJMWCMIVNZEROEOQPXMQNBUBSTWXEWLLQDKHKAYSKACFYHZJAHKNJSMJO");
    msg.component.assign("DQVXFICRQQBTMHEWXFMZKLQIXDCRQTGCMLKKDFLXEVBYIAMAPCRBGEUKLEZKMDJRGWDAWUNTANXVWSETUHYEBSBYIOTTNUPVPNYLKRWEMRCKCTTLUMHERWJNBOHJZSFSQFBW");
    msg.act_time = 62637U;
    msg.deact_time = 3358U;

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
    msg.setTimeStamp(0.392984265043);
    msg.setSource(53312U);
    msg.setSourceEntity(174U);
    msg.setDestination(63907U);
    msg.setDestinationEntity(168U);
    msg.id = 119U;
    msg.label.assign("LDSJJIUWGSESGXMUEVYUOSUJLAXYFKKPKIBBZYATVPGQVLZBJZBDUXKGWPIQFFCJJBDAEAPXDSQLWFJYBNCHFZFFQSMPVMHNGS");
    msg.component.assign("XEWSNBCQSWTHDTJRRFBYRABUAGEXUXYOBMXTAPKITTPJXNPFHSEQPANNNDBHWKHFLOITTCGIIMZRLFRHGUTMQLGGEGFNOUELVOLIAYUPBFQYWNEOWLKWDMCAJSPHASYYKCNZWPOYHJPPVKNMMATQGCQOQBUBUZGIEMVWLEFPSAXOCKR");
    msg.act_time = 60248U;
    msg.deact_time = 8977U;

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
    msg.setTimeStamp(0.10556822134);
    msg.setSource(47862U);
    msg.setSourceEntity(165U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(64U);
    msg.id = 117U;

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
    msg.setTimeStamp(0.896369500926);
    msg.setSource(7404U);
    msg.setSourceEntity(168U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(211U);
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
    msg.setTimeStamp(0.229493525729);
    msg.setSource(39353U);
    msg.setSourceEntity(196U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(70U);
    msg.id = 218U;

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
    msg.setTimeStamp(0.83508687337);
    msg.setSource(59255U);
    msg.setSourceEntity(125U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(11U);
    msg.op = 239U;
    msg.list.assign("TMZYFSIGOPXACRHUVPRLQGZKJBINCSTLFRKFPAVFPKTJTEYBIOKHGKRSCGUABZSDMWRLSMEUILUTBLQEYOKJMUFHFPPGWVQKDXJGANHAYXSQQDXWZJOSYBVQXXPDGODWVEBZZWZXHBVCOYRMYSTMNHLUCFECKSERRGUOPBUOTLQAIHIWXWOIBNADNFIDJFRYHQNJTOILNZUNCCTTKMVE");

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
    msg.setTimeStamp(0.495307425077);
    msg.setSource(50170U);
    msg.setSourceEntity(1U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(89U);
    msg.op = 129U;
    msg.list.assign("MUEFBYQCZPZUJVEVQLNICHZTSPVCCDNNHJIWGSORWEDHSZOJEVBKWWKPTGLEOAQDSTCRAQOPHLVUYYWMPXCELFABAJY");

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
    msg.setTimeStamp(0.628305912404);
    msg.setSource(4367U);
    msg.setSourceEntity(7U);
    msg.setDestination(32930U);
    msg.setDestinationEntity(173U);
    msg.op = 65U;
    msg.list.assign("XEEUUAJSVTUIKDLWAZEJZUHZJXNPESWYCGGIFJJAKQGZGMXLFWESEIKWHBCOOXQPIYUGSJVFTSATFBK");

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
    msg.setTimeStamp(0.571217950111);
    msg.setSource(42917U);
    msg.setSourceEntity(53U);
    msg.setDestination(50187U);
    msg.setDestinationEntity(124U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.290498957937);
    msg.setSource(23204U);
    msg.setSourceEntity(22U);
    msg.setDestination(53074U);
    msg.setDestinationEntity(65U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.912390829116);
    msg.setSource(56010U);
    msg.setSourceEntity(83U);
    msg.setDestination(45188U);
    msg.setDestinationEntity(220U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.785181699924);
    msg.setSource(17749U);
    msg.setSourceEntity(58U);
    msg.setDestination(28875U);
    msg.setDestinationEntity(205U);
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
    msg.setTimeStamp(0.828004898629);
    msg.setSource(54899U);
    msg.setSourceEntity(237U);
    msg.setDestination(14793U);
    msg.setDestinationEntity(75U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.305885790386);
    msg.setSource(48438U);
    msg.setSourceEntity(31U);
    msg.setDestination(51785U);
    msg.setDestinationEntity(13U);
    msg.value = 174U;

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
    msg.setTimeStamp(0.152367505924);
    msg.setSource(15247U);
    msg.setSourceEntity(155U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(118U);
    msg.consumer.assign("AUGCHBCNHRDYJQSOTOASJOXOFYXVMFFTORYQESVIPBCZABGSVLLQNTBJAYJTWACQDLTHGVFLXMLBLZIMUXIZ");
    msg.message_id = 20139U;

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
    msg.setTimeStamp(0.252444688957);
    msg.setSource(48652U);
    msg.setSourceEntity(143U);
    msg.setDestination(20013U);
    msg.setDestinationEntity(10U);
    msg.consumer.assign("ZOOYYPFJMPLKFLSJNVORHUAMSFGCHRNMVKNXTLYOLGFTCRYDFQOPGCWKMLWARSTDMJSUJVAVZRDUCFCSOSWLABIIEE");
    msg.message_id = 20219U;

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
    msg.setTimeStamp(0.44788964881);
    msg.setSource(34715U);
    msg.setSourceEntity(194U);
    msg.setDestination(14152U);
    msg.setDestinationEntity(88U);
    msg.consumer.assign("HTSGEIOIZMAFMIDRDBQRUDKSRACCCCHZLWYTVIJQTSPZLKLLEIFZMUYEPTVGXJFNTALNINLJXABGEMMEOCROOIYAQVNCTMNOSKJBEHWUAHEGWDKSTWBHYXUL");
    msg.message_id = 47084U;

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
    msg.setTimeStamp(0.406439136301);
    msg.setSource(50242U);
    msg.setSourceEntity(123U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.396130780919);
    msg.setSource(2882U);
    msg.setSourceEntity(91U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.831110452519);
    msg.setSource(48903U);
    msg.setSourceEntity(163U);
    msg.setDestination(29621U);
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
    msg.setTimeStamp(0.0752008044124);
    msg.setSource(21200U);
    msg.setSourceEntity(154U);
    msg.setDestination(38289U);
    msg.setDestinationEntity(29U);
    msg.section.assign("NQZFAEWDAHDOSOZJKXLZTLPJYKKCMKUYSXAUMUJPOZNMVYZHAPKVLSTCGSOUOBAXGRPEFCZTYYZXJSJED");
    msg.param.assign("LLKYEAITMEUISONRLTXLRVDZD");
    msg.value.assign("YGTXTJBFXJLMIBOHHCBZCKZIZFUXMECNITTVKWSTUJOJANIFXFQWZRGOKHBWKLGLYALQNIEEJVAXZJFVORXINL");

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
    msg.setTimeStamp(0.155668050498);
    msg.setSource(5962U);
    msg.setSourceEntity(39U);
    msg.setDestination(33151U);
    msg.setDestinationEntity(159U);
    msg.section.assign("ITWXWQXGDHCPBHEVDTCJMOWYRFNZTPTGQHACOMKODINMTAQNAICUZGGBRATXGTVOPFXUIWHXWPQVMQBFKWZXZRSUCYZUCKLRFJWMISSKABSVYDJPEEDBYLOSEHULJHPMDCOOLSHYNESNRVEQKLUKHOHNUBLQVSKFBDWYAFWW");
    msg.param.assign("IUNKPLRVRQBXZKIJQTEQITO");
    msg.value.assign("ECMGNJLAYHJQAJMDZMKJOYBNJCESJZEUJVUDSNRKXLUHLMYWKJFTFNTPHPJXRWVZOCUWCQWLLUOPXRGUBKWZAPQUSXIWTENPVTXXBESKUAGJHKMHFZOSDAOTAEIWEDTCTDIVIGLUCQWGSSGVFKHYNLDYOPHFYFGOMQHKBTQNODQIRZRFLRHZSARLHDGUMPGYBAZBONFQQFKEPDARZLYVMIIQVMCXVKSXRRBBXANWDZFVTM");

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
    msg.setTimeStamp(0.315955314762);
    msg.setSource(20897U);
    msg.setSourceEntity(205U);
    msg.setDestination(51367U);
    msg.setDestinationEntity(92U);
    msg.section.assign("OIOJBIZEPNVWYZQKXSTIVIAFOMVVK");
    msg.param.assign("VEKDRUCHJAUAYSJYJSBAJPIEFWCBIUTTTYSARCBQTSEOGRYXQFLIGPOKWJDHXZVGUPQKFRTEODPWAOBHVEHFOMHSAXMSLDAFYCTVGZUVNMHBQELJLOHJAZOMCBZMRNUXNTWPNUKEWYHXQWURWRYKLGKWLRPUQRTGI");
    msg.value.assign("TBVPLTZJTPCMRFYWAAVOCSFDEEPQCZLAJTPBNZCKYJDNXBCKDWAYLNRZTYGSUJCVRMNGWEFQPHWMNYOPROAFIHQHHNAIXJZLBVQMQQNMCLZSKCGSBJHNXUODFMTIAZMUEQIBW");

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
    msg.setTimeStamp(0.327550929448);
    msg.setSource(6862U);
    msg.setSourceEntity(169U);
    msg.setDestination(11272U);
    msg.setDestinationEntity(39U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.355599741624);
    msg.setSource(8191U);
    msg.setSourceEntity(132U);
    msg.setDestination(55042U);
    msg.setDestinationEntity(143U);
    msg.op = 200U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UFQLYZSLWYHCGGRIFUDHGPLVVNJNPWXAFRQLCFXHBFY");
    tmp_msg_0.param.assign("BIUYLCWGFXAVZFKJDOFIKZWBYMDHJZRTOKFAOTQYLQCTBMQUSPESLWPRPRHAHQMQJCUPENZFEBKYLHTCTYWIVNOCUMMDUNNCNGZTA");
    tmp_msg_0.value.assign("PKOLXZGOGBXQQAG");
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
    msg.setTimeStamp(0.816136190819);
    msg.setSource(41439U);
    msg.setSourceEntity(102U);
    msg.setDestination(63027U);
    msg.setDestinationEntity(217U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.290077869937);
    msg.setSource(32368U);
    msg.setSourceEntity(204U);
    msg.setDestination(19415U);
    msg.setDestinationEntity(198U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.407364216519);
    msg.setSource(30803U);
    msg.setSourceEntity(42U);
    msg.setDestination(17352U);
    msg.setDestinationEntity(18U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.912966932286);
    msg.setSource(38733U);
    msg.setSourceEntity(90U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(74U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.581602967141);
    msg.setSource(23687U);
    msg.setSourceEntity(127U);
    msg.setDestination(40676U);
    msg.setDestinationEntity(2U);
    msg.total_steps = 38U;
    msg.step_number = 30U;
    msg.step.assign("ZWEMCWDCUNFVOKTUBYZOHPFFIXFMILLJTKRAHXDIRCVRXVKDEJPLMUPEWDGQAQBUOXWLDVZSZTKVUGKCUVXXJMPWZVNTXKOQDICBFDKQMEGEDGMKBOADOCHM");
    msg.flags = 36U;

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
    msg.setTimeStamp(0.0588848548211);
    msg.setSource(50764U);
    msg.setSourceEntity(177U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 192U;
    msg.step_number = 130U;
    msg.step.assign("LHYECADLVBWFBDOQPTGO");
    msg.flags = 168U;

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
    msg.setTimeStamp(0.938029937159);
    msg.setSource(25421U);
    msg.setSourceEntity(221U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 159U;
    msg.step_number = 28U;
    msg.step.assign("ENSUTDQJFNOXMRQRUTXCIFNXSTKKYJPQKLVZUGVLNXNFTWYWTEYZLWVZOFMVPDBQQULKUZJEEJPMOHIAXBMIXCHEGSRRAGXNWWSUHRAQLOSNEKIOI");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.384285740993);
    msg.setSource(34154U);
    msg.setSourceEntity(88U);
    msg.setDestination(10016U);
    msg.setDestinationEntity(240U);
    msg.state = 206U;
    msg.error.assign("UMFBGWNELNUEZQTAWKOSIHNOGQBTQWXFXFEXXOIPRWIGTTKNLMYPAMCDCBIEAARDJVDGUNFAFHCCOLRKBEZJCEFLUHSJRELULGPXMQWSPFPTRXOAJPGNNLRDVZIRGBLXYAXBXFNIFKYVFWCTZTMSELMZVMMGKQSAUPZJRWYKKD");

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
    msg.setTimeStamp(0.768418126209);
    msg.setSource(54087U);
    msg.setSourceEntity(215U);
    msg.setDestination(61263U);
    msg.setDestinationEntity(88U);
    msg.state = 184U;
    msg.error.assign("LHRAWCMQKFPPOPCHIMHTNEWORKYNWSEDTSUZHBNIRMHFACJJZKTOGAVPSKBKUHHXNEDTXLOBLMNVPDBHQNHVVYKBKGRJLSMOPGAZJBEYRRZYCLXRCFZPYEIJCKNBLDWYFLQJEOQWEQLJQTEOWVGIILMSFGYQXFOUSTVGBXAIYCXZUEUUXQTRKLMSHSMVU");

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
    msg.setTimeStamp(0.562242898835);
    msg.setSource(19111U);
    msg.setSourceEntity(241U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(127U);
    msg.state = 177U;
    msg.error.assign("DBIEQKRJFSWUBNTRHNGNLFNKXVIUCYSLKPQWKCPXOJONGSNKIRMAGFDUBPKVOAHUXYBJAULEQOBDPYTEHFRHEVAYKTBSHCZUHVDZCMEMFG");

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
    msg.setTimeStamp(0.310594330767);
    msg.setSource(34489U);
    msg.setSourceEntity(54U);
    msg.setDestination(17034U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.650481514865);
    msg.setSource(34899U);
    msg.setSourceEntity(78U);
    msg.setDestination(25545U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0981497311125);
    msg.setSource(22091U);
    msg.setSourceEntity(70U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.325143282971);
    msg.setSource(35965U);
    msg.setSourceEntity(104U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.113493276575;
    msg.lon = 0.155361912275;
    msg.height = 0.792196696888;
    msg.x = 0.945551541842;
    msg.y = 0.525543397865;
    msg.z = 0.172179376472;
    msg.phi = 0.999703995495;
    msg.theta = 0.099038922165;
    msg.psi = 0.22335441224;
    msg.u = 0.0719745783468;
    msg.v = 0.0369105458581;
    msg.w = 0.270846662925;
    msg.p = 0.394348874084;
    msg.q = 0.606861819753;
    msg.r = 0.475724744165;
    msg.svx = 0.474865204817;
    msg.svy = 0.515174059878;
    msg.svz = 0.0325439128789;

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
    msg.setTimeStamp(0.0716706000216);
    msg.setSource(27755U);
    msg.setSourceEntity(89U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.248319090767;
    msg.lon = 0.117454726543;
    msg.height = 0.470268725457;
    msg.x = 0.980580240525;
    msg.y = 0.150634757277;
    msg.z = 0.00441081936867;
    msg.phi = 0.939626084085;
    msg.theta = 0.839636368776;
    msg.psi = 0.580995198689;
    msg.u = 0.722496888518;
    msg.v = 0.490867589307;
    msg.w = 0.0206735605173;
    msg.p = 0.924832741071;
    msg.q = 0.640843705921;
    msg.r = 0.771132717472;
    msg.svx = 0.971209585163;
    msg.svy = 0.215045439124;
    msg.svz = 0.401396528933;

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
    msg.setTimeStamp(0.662028747911);
    msg.setSource(27536U);
    msg.setSourceEntity(44U);
    msg.setDestination(48270U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.169631064895;
    msg.lon = 0.162568237407;
    msg.height = 0.802888677583;
    msg.x = 0.653343913244;
    msg.y = 0.178619063603;
    msg.z = 0.403716711257;
    msg.phi = 0.665216676587;
    msg.theta = 0.166947097139;
    msg.psi = 0.0138449116616;
    msg.u = 0.764169422207;
    msg.v = 0.17080331244;
    msg.w = 0.435659346746;
    msg.p = 0.257654443622;
    msg.q = 0.206142203636;
    msg.r = 0.0471681306395;
    msg.svx = 0.058184870493;
    msg.svy = 0.79421599289;
    msg.svz = 0.909390556751;

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
    msg.setTimeStamp(0.240169703695);
    msg.setSource(26066U);
    msg.setSourceEntity(40U);
    msg.setDestination(43893U);
    msg.setDestinationEntity(203U);
    msg.op = 24U;
    msg.entities.assign("RSJGHLUKTGOMLOKXRJKLWPFRHDZOMYTLQL");

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
    msg.setTimeStamp(0.249603374277);
    msg.setSource(29350U);
    msg.setSourceEntity(68U);
    msg.setDestination(10863U);
    msg.setDestinationEntity(162U);
    msg.op = 49U;
    msg.entities.assign("AQUGSONGXSXUIBDSRXXNLDBOHRNFFAUTJNGTPGOYFAIIBFPEOFJEYACJHCGMRNOCMVSPIKLBTWKWQPLBULYXWEDKCOZUVZDEBGCQWQVEZHLPYUYMTLDBYDLXPSKKTREOHNREZWTDGLVQAWFKZWLGCMAAVZHEMKFTIIWJIQJLRZHQSS");

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
    msg.setTimeStamp(0.824926528349);
    msg.setSource(4632U);
    msg.setSourceEntity(227U);
    msg.setDestination(43496U);
    msg.setDestinationEntity(242U);
    msg.op = 32U;
    msg.entities.assign("OLSWBBKDRVDBLSFHUKZWRTFMCSPFFIAXIVXTXWYKKRDYSEKHPVAQNYZBKFLNXTBVMFCOHDDMVYSNNMWHEZKFCYWLXVGHIOTBUGOEJNUQXRFAORSABNCJGPISALADELRMWTZEGLYQEJFZKNSHZYVQLHEBJLYSUZDRJRCYMGNPKJGMJCWNGAWUODIHIPOTNITGPJQSPBXG");

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
    msg.setTimeStamp(0.44121766851);
    msg.setSource(21153U);
    msg.setSourceEntity(115U);
    msg.setDestination(13630U);
    msg.setDestinationEntity(248U);
    msg.type = 233U;
    msg.speed = 17644U;
    const char tmp_msg_0[] = {-114, -89, -82, -37, 59, 79, -13, -2, 124, 41, -22, -34, -4, 29, 59, -126, -23, 77, -37, -12, -27, -28, 21, 85, 33, -47, -89, -31, 49, 91, -71, -78, 53, 57, -74, 80, -39, 12, -26, -4, 56, -22, 52, 125, -48, -25, 23, 123, 5, -76, -38, 107, 44, -124, -53, 35, -54, 4, -102, -33, -65, 116, -93, 124, -58, -85, 15, -45, -49, -116, -4, -8, -110, 111, -32, 106, -73, -101, 2, 87, 73, -1, 33, 105, -128, -54, 104, 108, 72, -110, -11, 81, -79, 4, -39, 96, -91, 109, 51, 116, 51, 104, -47, -98, -20, -98, 107, 109, 22, -62, 91, -66, -39, 110, 18, -45, 96, 54, -87, -122, 52, 36, -75, -45, -91, 110, 4, 6, -48, -8, 55, 34, 107, 74, -126, -117, -51, 91, 3, 19, -3, -73, -126, -47, -117, 33, -63, -38, -25, 79, 116, 59, -61, 16, 75, -58, 75, -22, -38, 123, 75, -11, -98, -73, 85, -85, -123, 64, 92, -86, 124, -29, -118, 23, -53, 34, -81, 59, -13, 106, -20, -73, -7, 65, -105, 79, -59, 77, 35, 9, -92, 35, 16, -101};
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
    msg.setTimeStamp(0.652651746729);
    msg.setSource(401U);
    msg.setSourceEntity(21U);
    msg.setDestination(12079U);
    msg.setDestinationEntity(157U);
    msg.type = 231U;
    msg.speed = 63255U;
    const char tmp_msg_0[] = {32, 124, 0, -128, 111, 48, -31, -8, -7, -91, 90, -91, 6, -55, -81, 7, -65, -107, -82, 103, -121, 19, 24, 9, -84, 98, -71, 85, 115, 98, 75, 94, -100, 91, 93, -78, 66, -116, -65, -41, 36, -106, 104, -40, -96, -125, -23, 117, -12, -4, 71, 122, 92, -9, -41, 97, -86, -73, 42, 66, -32, 120, -85, 107, 23, -96, 8, 82, -94, -116, 93, -115, -26, -52, -32, 45, -54, -5, 47, -61, 51, 72, 105, 100, 119, -98, 46, -48, 8, 118, 126, 90, -2, 92, -36, 7, 42, 49, -114, 31, -44, 17, 49, 81, -76, 5, -30, -19, -117, 85, -31, -1, 16, -111, -4, 68, 21, 117, 2, 106, 126, 99, -125, 121, -49, -115, 63, -64, 3, -86, 115, -23, 33, -86, -79, 1, 92, 103, 58, -71, 31, -94, 24, -59, 1, 104, -91, -5, 19, 6, 86, 99, -71, -113, -82, -125, 2, 53, -88, -68, 27, -53, -108, -31, 116, 75, -73, -101, 98, 113, -118, 59, -7, -12, -28, -15, -112, -40, 48, -88, -109, 68, -127, -46, -19, -34, 78, -109, 109, 21, 43, -78, 4, -99, -56, -4, 71, 64, 120, -62, -117, 18, 60, -102, -103, 105, 66, -93, -17, -82, 45, 63, -93, 34, 89, 97, 7, 95, 106, -13, -84, -22, -61, 76, -117, 125, -26, -89, -85, 124};
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
    msg.setTimeStamp(0.455396072072);
    msg.setSource(62089U);
    msg.setSourceEntity(21U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(105U);
    msg.type = 200U;
    msg.speed = 43710U;
    const char tmp_msg_0[] = {91, 8, -62, 27, -15, 111, -19, -128, 26, -45, 122, 107, -55, 80, 121, -122, 79, 54, -27, -53, -63, 115, -88, 92, -110, 47, 49, 45, -1, 52, -42, -39, 49};
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
    msg.setTimeStamp(0.107275283368);
    msg.setSource(64195U);
    msg.setSourceEntity(187U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(13U);
    msg.available = 4212246237U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.596185135953);
    msg.setSource(50789U);
    msg.setSourceEntity(189U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(99U);
    msg.available = 233425249U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.197183465106);
    msg.setSource(27000U);
    msg.setSourceEntity(54U);
    msg.setDestination(63665U);
    msg.setDestinationEntity(149U);
    msg.available = 1095160033U;
    msg.value = 187U;

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
    msg.setTimeStamp(0.152199688687);
    msg.setSource(63572U);
    msg.setSourceEntity(184U);
    msg.setDestination(19518U);
    msg.setDestinationEntity(3U);
    msg.op = 237U;
    msg.snapshot.assign("PDXKSLHLXCVOYCCPLVWVDSGRKAMEQNCGASMWUXYNYIWBOMLAMTP");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.277305109759;
    tmp_msg_0.lon = 0.467392983608;
    tmp_msg_0.depth = 248U;
    tmp_msg_0.speed = 0.4498393409;
    tmp_msg_0.psi = 0.0460477155433;
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
    msg.setTimeStamp(0.877504421691);
    msg.setSource(31727U);
    msg.setSourceEntity(235U);
    msg.setDestination(53574U);
    msg.setDestinationEntity(188U);
    msg.op = 80U;
    msg.snapshot.assign("WTITJRJBRLSOPPQYNYMFAPAGQHPMVBZJJDGZPGDZUOLIXFCWZY");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 247U;
    tmp_msg_0.goal_id.assign("ZJAAMCCCXEQTEVOFARPVXLMZOBCDXPJWIZTFCNRIMWVLAFSTLWQEJYUQSRYRKHQCPEXSTNWBXLSHJESILXDYNPHMJGBXHDILPUIUQYLVAKVWNYDOXLASRAGDUDGYGFKDAEKNGLUWUTSGDHZYHBSCHPCUJOTBUKGBOFMFYAJNQRPEWMEZQZOIHVPZPB");
    tmp_msg_0.goal_xml.assign("SUQODTSYZFKSKGVPIQZVPMFZRQGSFALCXGKPJTUKQFORQJHCDIDAOZBROCBERPSRTEMGIUUDJFVVIHCIWVGGBTEXDZFJLWOCUCNWBEBSEILZMRRXNHOSUVNMJXHLUSYSSHGQUXHYWPDBTLTWAVEHBBMYFNRAYOITCWXXTABWEQNGFFPYAQJDVIOKGPNFIEKLDMKZN");
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
    msg.setTimeStamp(0.114851397612);
    msg.setSource(1691U);
    msg.setSourceEntity(79U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(206U);
    msg.op = 21U;
    msg.snapshot.assign("PAYNPIIESJVPGDQGWJJTQFSZCBWGDEHTRZUUBHNIGVGMKXRBSVOBIXXDBFNSNWVWPLZJDMLNBUMKYKAYUSNHPERGXTYCUCETQBMMWFRCKAQQFVGXWJOJ");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 22853U;
    tmp_msg_0.lat = 0.0314854719391;
    tmp_msg_0.lon = 0.346098180275;
    tmp_msg_0.z = 0.999506519847;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.amplitude = 0.35235898219;
    tmp_msg_0.pitch = 0.329394580915;
    tmp_msg_0.speed = 0.443412590694;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.custom.assign("OXHCMIVTFVHHYLKQJIZDJFHJUJJUUPNRLSIBGLWJOCKVJHCTQRXRQDAMUKWOFEWAPPKTRLBXOAHEFNUQZXIOOSZLKBXIVGLHLOAWZZYHSAENDYUOCPQTYCFRMRRBDSSWECPZIGFVXYXPJTCVKPGGJETZWPN");
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
    msg.setTimeStamp(0.983106095503);
    msg.setSource(25467U);
    msg.setSourceEntity(235U);
    msg.setDestination(44071U);
    msg.setDestinationEntity(170U);
    msg.op = 217U;
    msg.name.assign("TISKOAFVCDACEZAIDPUBELQNQYSGLVFKSXDJPHDCGKLBKMHYQIISPDOTNKRWRTHNQELQYFCWURNKKZPBPSDOFADQUBXQCMUJUICTNDCNGFTYLBOETNTMZEPSBLXOIQGFZNAWZEWXGUAEAPKAIGBRSXVTURVVEYXTWOOYJNHHRKZFIBTWMHUJFWPEAYXAJCHGGRCKYLWMPRJVYWUJHZVBMSJLDZPBGSJWSFZXQOHN");

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
    msg.setTimeStamp(0.512288293662);
    msg.setSource(49461U);
    msg.setSourceEntity(32U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(245U);
    msg.op = 43U;
    msg.name.assign("QIVALRTZHOXSGXYXHJOXVDFZXJZPQLGFUANGDEKPFPLZWUINBTYZTXIICAEILUMJUHAPDHWQOOKMNTCKVJGITEFKERKVMSVXKUYYHCLYJCDFHWLQYTDJTDWTABPCWKGHVKABBQWGFLUDNEZKPYDZKCPITJMADWH");

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
    msg.setTimeStamp(0.629118143707);
    msg.setSource(24370U);
    msg.setSourceEntity(92U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(168U);
    msg.op = 147U;
    msg.name.assign("NKFBUFEIDRZSXHRGEYXFUZDZZKCBLDZGAQLSEYXVJSGAAXMCQIBQXMSRAVCTMXOPMWFEHPIGTJOJPYTQKOHOXKHNWXVPRGDNFATREUQLKJSNEJXZFTMONLSAMCVRVMLLIWGSHKWYZLOFIUKUVALBLHUJDIWHPFCSTTPRCNSMYOFZEDYWBEBGOWYAPLJACJWNMCKGBERQTSRPVCNDHMAJFUQDVJDIVC");

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
    msg.setTimeStamp(0.119151633938);
    msg.setSource(1077U);
    msg.setSourceEntity(164U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(250U);
    msg.type = 161U;
    msg.htime = 0.607699610335;
    msg.context.assign("NXDDJPPBUAVDEHTDGEYQNKCEWLCXEQVGTVVJECABDVPBYKRMCXAVZFOUQWGITWNFAHOBOCRGRMYTEFPGHKSAEIJQTNZHQBMBOSJPIYBRWZXYUYZFFGMMVVQXXWHBOADKDAUWUMPJRODCKGCNZOERZXHLLIPCTQKGOFODYNXWKPILSSNZSSATQVBSHTEKXLNRJFUYJZJQGLHI");
    msg.text.assign("WBGPXVMOUQPHZJMCSJEFLYAMMJATWTRWCSKYADQFJREWAXIQINTGUXEKUIR");

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
    msg.setTimeStamp(0.903531488288);
    msg.setSource(16584U);
    msg.setSourceEntity(176U);
    msg.setDestination(48373U);
    msg.setDestinationEntity(149U);
    msg.type = 40U;
    msg.htime = 0.485683202015;
    msg.context.assign("RHHZUYFAZNPDLFARGKEIGLCPLKISXMTINELAUOJUMBAGRRSDQCKQJNZJUKMBMMHSLTNGXBZUSGSFRIVRVJFGVIWNEDSMEZIBHXGRWQOKUNHCEIQTCZNQFEOCFVZZAZDHRKEYJVCYDWTPTOQAUSPNXQXCLBBHTXKTOIOQIROMGJA");
    msg.text.assign("MKQJNAYMDLE");

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
    msg.setTimeStamp(0.348238474658);
    msg.setSource(35039U);
    msg.setSourceEntity(225U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(55U);
    msg.type = 102U;
    msg.htime = 0.986503524559;
    msg.context.assign("SYMWDHUEHMPBXXWJWXXWTDUDMOHSHDGVFBXBJLHHNEUVKKIVQYNMNRNZTQDPTQUVGHTVBQNBFEEODKDEAZPZRTJLCKEABMELDZYYJSLOABPNVYQVNKUTIFTEWOAYSGRY");
    msg.text.assign("WQOJAWUSFLACFGALBKDFNRTFTYKTQIZCUZYNMIYHOIIGZVLRUEAYWTBKBRJJAPNNRAKOBQ");

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
    msg.setTimeStamp(0.114144734055);
    msg.setSource(55305U);
    msg.setSourceEntity(200U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(106U);
    msg.command = 94U;
    msg.htime = 0.996529850839;

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
    msg.setTimeStamp(0.88283359312);
    msg.setSource(52804U);
    msg.setSourceEntity(110U);
    msg.setDestination(43237U);
    msg.setDestinationEntity(59U);
    msg.command = 139U;
    msg.htime = 0.127522670564;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 226U;
    tmp_msg_0.htime = 0.885237522561;
    tmp_msg_0.context.assign("WODEESAFWVDXFNHMALXYTDATNNIOAXFVKDRVJGRIRWSBAYEYMPCHIJBLDBVNSEUQUKTHJSQPFPXMIIUJQWQEHKYFJOLQUAAVCXBTCLWGTGRKDWXPRJHBSQQCJKZAGPZVGUWVGZZQKXYSCFZRINOUBGYZTCLUJGLLUGYVRHXZPIYKRMTZCUOFIECDMNFARLTQV");
    tmp_msg_0.text.assign("AACSQTKFDSSVKOTZTQWVGOSYSVQQAGFNBPHIJXHMWHPPCQNMFJHXVDLITNOPUJPXRIBCFWELGXNLNJYGVKHATPJPUWCIOIEADSZQDRIECZZTSVVRCWXOVVBWXACGBKTHUDLJXHSRJOFLMKWXFLUBNGEOQBJALPGXMVTAIPOEUYMGMDCMMMDEYBREUUYPQKEYRKTRZ");
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
    msg.setTimeStamp(0.23085048128);
    msg.setSource(19581U);
    msg.setSourceEntity(92U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(166U);
    msg.command = 106U;
    msg.htime = 0.757676568036;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.htime = 0.324803370785;
    tmp_msg_0.context.assign("LNIJCOIBWUSJRTEIKDHDHBQHXOTSEBYZTFMROIZIFNCCLZVHSOFFHVNYSKBUXTXQGKDJSDMPWLWWCABPHVETYCLBHAXVNDFKCHYFYUYELUMHSCKGGUATKAZLBWRIULJGVQEQYNEWCAPROXXFSOZPELTVTCOMEQMOYRVAXZJKZFJGOBRJUNJGOEQIQWXAGDBQRDVJLJTEGDSNXWQUMTRDPANLMYPZKPMCWSNIGUINWHBRAZFFDZMKS");
    tmp_msg_0.text.assign("OGQHMNJVKFLTYOVMVLNNBWSRUQYXPZUXSANWXVYRN");
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
    msg.setTimeStamp(0.429133902414);
    msg.setSource(56465U);
    msg.setSourceEntity(216U);
    msg.setDestination(27193U);
    msg.setDestinationEntity(75U);
    msg.op = 96U;
    msg.file.assign("NYDVEGQNBZNXENHLZLRFWYEBGUIAADTFBEDUWNNBMCRCRSCQEMDHPHWYZXXYEUQSFRKHKUPDYQBQCOIGBVHQDKVECPUZNKTVHSVVGYGZMJLSQOOLUGSK");

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
    msg.setTimeStamp(0.623011431511);
    msg.setSource(20518U);
    msg.setSourceEntity(39U);
    msg.setDestination(48973U);
    msg.setDestinationEntity(92U);
    msg.op = 209U;
    msg.file.assign("CRKILQZXQTDLFABGSEURAVZELSFFKWPMVINDHYWKSWQQGDAOHIROBTOPUJMNLMXKDQUZRSSRTVUBECTDPRATYHJNQEQGUHYEYOINAUDJCGCIBWJIHGPVGLKVEVMFPFVFUUFMGGXTWQ");

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
    msg.setTimeStamp(0.710485643529);
    msg.setSource(1685U);
    msg.setSourceEntity(138U);
    msg.setDestination(3315U);
    msg.setDestinationEntity(153U);
    msg.op = 179U;
    msg.file.assign("CBXGOBCYLMEUJUGRVTXQZYIOIUXCPYAXQOBSGPIFZSHQJQBEFYROCINXMENHQBFCXTKLEGRCPBHUWRVNZDTFLVDZCGVEEADODNLUHLRPOVONMTDAUSJTSUWSNJUFSWTDPXETJ");

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
    msg.setTimeStamp(0.185443700932);
    msg.setSource(39814U);
    msg.setSourceEntity(154U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(80U);
    msg.op = 174U;
    msg.clock = 0.763086588614;
    msg.tz = 15;

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
    msg.setTimeStamp(0.53954549207);
    msg.setSource(61002U);
    msg.setSourceEntity(109U);
    msg.setDestination(751U);
    msg.setDestinationEntity(103U);
    msg.op = 84U;
    msg.clock = 0.409461442191;
    msg.tz = -93;

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
    msg.setTimeStamp(0.230829330873);
    msg.setSource(52323U);
    msg.setSourceEntity(56U);
    msg.setDestination(53001U);
    msg.setDestinationEntity(63U);
    msg.op = 109U;
    msg.clock = 0.841275683779;
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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.893345595627);
    msg.setSource(870U);
    msg.setSourceEntity(109U);
    msg.setDestination(30333U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.00676929159767);
    msg.setSource(19248U);
    msg.setSourceEntity(54U);
    msg.setDestination(21963U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.334329886743);
    msg.setSource(31064U);
    msg.setSourceEntity(138U);
    msg.setDestination(15469U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.0245070259275);
    msg.setSource(38952U);
    msg.setSourceEntity(10U);
    msg.setDestination(21807U);
    msg.setDestinationEntity(39U);
    msg.sys_name.assign("TVHVJHDNVMEBYQHIBMJUJTYJFJJKCJXXADDFXMWNVEIEXNGGMQRKRCLRSYLCPCLBXWFBYBWKRRCAUOOWXSHBUIVSAAORPFLTMKHNWIKOISJLAMZEXUKSPOMVUBXPTWZSATBTVYFLLUILDZODMRZPJCVGLCCSOVDNYBSYWEZFHAUNUSPHTUATWIZLHUYJQCFSZNQWGZFNEDRXXCGOIMKEQRPY");
    msg.sys_type = 202U;
    msg.owner = 58809U;
    msg.lat = 0.0126420238935;
    msg.lon = 0.0680185966998;
    msg.height = 0.377671653659;
    msg.services.assign("QCBENRZMCIETPXOBFYFQZTGCZJEEZGURRWVYZNGMQLFTUKKKGNBPCRALZLIVOODPLDCVVKULQLYYJXKCNSVTRLKYTHLEYMOWIZBECAVAFAQAWWKAPWDHHIJWHXGUEUPQJGBTFZDTSXCZIXPCIRMDNUYBAXSGJIDDILMMGTIAAVJ");

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
    msg.setTimeStamp(0.761956246793);
    msg.setSource(54212U);
    msg.setSourceEntity(85U);
    msg.setDestination(25289U);
    msg.setDestinationEntity(228U);
    msg.sys_name.assign("BUNORXMKXIENEGONLVZODKCLBRPTJXYWQSKVUZJJPABDSGPAFDAVMQFVVUCJPLTBZSHLYKBOTYXYEMUPAFHRZFHYWDASRMVBIASFWLAIQHGYFDTJRYRHQGMEIXKVFOENBNTWCXZZUPDGG");
    msg.sys_type = 251U;
    msg.owner = 39240U;
    msg.lat = 0.950252150419;
    msg.lon = 0.162189719613;
    msg.height = 0.0648088721005;
    msg.services.assign("ANEGWMSKTLJWFDIPIBAXVVDHTMCJHURFRTKASCRRLGVNKGVNKRVFPBODFTYQRGLYTJDTCAHSYWJNHOSRUOXFQOIOBAZZFUNIEDTQFYOVEAFMUVXNSLWCNJQOCZYXRLWMPWSDMLSUHBCENXJKEHDIXDLIVGYHZMPOZCGQICJVXGWQXKABYHQZZEABZEUSOUSTPKKBTLGUYMMJKMZW");

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
    msg.setTimeStamp(0.946413531545);
    msg.setSource(43189U);
    msg.setSourceEntity(228U);
    msg.setDestination(48311U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("KEXRGEYLTCIDABNCVACTBFYMSCFLFRVPDHOXYWVTHMNHQBMZDBUSPXHVAQANHLMKK");
    msg.sys_type = 237U;
    msg.owner = 47801U;
    msg.lat = 0.194476466261;
    msg.lon = 0.28349803188;
    msg.height = 0.123901240229;
    msg.services.assign("CJELJEXETKLNUIKBNWFSNTRURRBOTSJNMVAWPCIWLVTIHARAFETQFKQZQYXZWBQSDNLSVVFPRMSKOXUQNRMIGHFTYVYMCWCXXHVXDCUBUCEKPYMJVPZITGDGHYKTGQLOROQUYQFLFOJIVTAL");

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
    msg.setTimeStamp(0.336568550865);
    msg.setSource(45806U);
    msg.setSourceEntity(18U);
    msg.setDestination(487U);
    msg.setDestinationEntity(22U);
    msg.service.assign("JSJPEYSXUOSAIKTAOBJYHQDZEORQLNKQDKBHWSYVVLSCTBNYERWHXXDCKMAKYLCLTXKHLVXSTJIWDCTMQVFKWJQUROAQTFGITIXEGP");
    msg.service_type = 127U;

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
    msg.setTimeStamp(0.704318544155);
    msg.setSource(23781U);
    msg.setSourceEntity(244U);
    msg.setDestination(29717U);
    msg.setDestinationEntity(202U);
    msg.service.assign("UXTFQIQRFJJXCHJMLDHGNZEIKUTYKYGGLGJABMYQWZAGDRKSMXMAZMYQULHMSHAPHCQBNMCEXLOGZZWGPIIQRNRIMWTDTFVKVZZLRBCWDDPFIRCVEIAPAYWAAZYQHONTBFOKOURHNPGTKSQCKAPQYDUTMLGVIXPNWBWCVZDIEOBEHIGETPUNSSMKETOBXLXJEDQLVTORYWOUSNHNUSEELOKCS");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.941441215117);
    msg.setSource(39650U);
    msg.setSourceEntity(22U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(70U);
    msg.service.assign("NQMVYCKQTDTKPCONKXPFTKSYOPITISUJUHTXINGUWAAQJGKFZHGDCHMLBPJSCAGNGDVLWXVDNRZQHMMMJSFBUIBHATCXSDXCYAEISRJUPNFWFFOOBIKAFVUQEEZZYYDQGDYJSPQGIDGVSWJUXYMWVLKYFMFHQBIIPMBXJZLNULWTKEUBGWWEZZQHKNDBSGARPORIWMSTAR");
    msg.service_type = 127U;

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
    msg.setTimeStamp(0.254300673202);
    msg.setSource(22638U);
    msg.setSourceEntity(173U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(127U);
    msg.value = 0.241929374674;

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
    msg.setTimeStamp(0.686139022813);
    msg.setSource(32426U);
    msg.setSourceEntity(68U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(222U);
    msg.value = 0.892431322939;

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
    msg.setTimeStamp(0.811428265849);
    msg.setSource(20644U);
    msg.setSourceEntity(38U);
    msg.setDestination(48353U);
    msg.setDestinationEntity(177U);
    msg.value = 0.0147634739498;

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
    msg.setTimeStamp(0.287341474136);
    msg.setSource(6878U);
    msg.setSourceEntity(139U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(190U);
    msg.value = 0.0336320840129;

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
    msg.setTimeStamp(0.892420896251);
    msg.setSource(3054U);
    msg.setSourceEntity(8U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(239U);
    msg.value = 0.514479112211;

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
    msg.setTimeStamp(0.547560456224);
    msg.setSource(22016U);
    msg.setSourceEntity(181U);
    msg.setDestination(41684U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5704653318;

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
    msg.setTimeStamp(0.463137560124);
    msg.setSource(50661U);
    msg.setSourceEntity(105U);
    msg.setDestination(14706U);
    msg.setDestinationEntity(153U);
    msg.value = 0.104177843662;

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
    msg.setTimeStamp(0.752711011165);
    msg.setSource(64974U);
    msg.setSourceEntity(219U);
    msg.setDestination(59021U);
    msg.setDestinationEntity(69U);
    msg.value = 0.970329202287;

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
    msg.setTimeStamp(0.0570249049635);
    msg.setSource(41596U);
    msg.setSourceEntity(137U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(231U);
    msg.value = 0.998240404953;

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
    msg.setTimeStamp(0.937092647532);
    msg.setSource(397U);
    msg.setSourceEntity(70U);
    msg.setDestination(7160U);
    msg.setDestinationEntity(140U);
    msg.number.assign("FLECRNHDWKMXWPFVUPGGCPNJGOJSDHQPDWAMUANYHPZJYLZTQVBMFZWEOBMYFOJSWAEIGZUTQOXRQUVXRFVLJALVKJTXCSAHUADTLTWDKEPWBBRDZQQYMWIXOZHROZTUFCXUUE");
    msg.timeout = 20399U;
    msg.contents.assign("KHYVBMEUNRMV");

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
    msg.setTimeStamp(0.246088323828);
    msg.setSource(18823U);
    msg.setSourceEntity(57U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(159U);
    msg.number.assign("LGTHQUPPMLPYPJRZROXAGGRJYEYXODSD");
    msg.timeout = 50309U;
    msg.contents.assign("UMVUZQMFXWHJDZK");

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
    msg.setTimeStamp(0.299535044579);
    msg.setSource(28719U);
    msg.setSourceEntity(52U);
    msg.setDestination(31411U);
    msg.setDestinationEntity(127U);
    msg.number.assign("FKJGJUIOJHPCHNKKIXZMUSHMFQNVMMTL");
    msg.timeout = 36697U;
    msg.contents.assign("IFUPGHPALTLDVILTNPVNXDXCBUCDEAVLBNKKRTFTEYHECPJUNGPVRYQKVKMDFKGIZBZ");

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
    msg.setTimeStamp(0.401636898537);
    msg.setSource(3536U);
    msg.setSourceEntity(160U);
    msg.setDestination(48486U);
    msg.setDestinationEntity(75U);
    msg.seq = 3080957352U;
    msg.destination.assign("BWTCKUSYPIHENTQAJUBPMMAJIDERMQNDTWUYZZRXLWFWWHNGXGSIPUQRNMLKGESSPLYWPCVLTPXGUPNLLVFRLYRTNVOKKHMHAQHGCJIKXBZRQHVJGIOGYZMESEDFFDQOBLHQYRKXLQTOXFYHSEAZEICEUJFBVICDRFIGYUWVRUAIRXAJZOKSPOBBCIKTQTFSZXONOUSMFMCQPUSJTG");
    msg.timeout = 37594U;
    const char tmp_msg_0[] = {-113, 65, -16, -103, -24, 35, -34, -23, 91, 56, 15, 113, -85, 115, 24, -42, -120, -26, 89, 22, -77, -125, -69};
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
    msg.setTimeStamp(0.0267798747238);
    msg.setSource(32748U);
    msg.setSourceEntity(94U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(107U);
    msg.seq = 3703371718U;
    msg.destination.assign("AMTPGSEHKVFDFCYUWXCKMXUUHKUZJCSMXFIKCJMGABFYYINTIFMOBUZHPERMYJCDOSXAHNLEWTORWEOJQZKSLBOINLBLEXQVDZTWCISYFFBBYHHPSKAVTBJGNEXXWJCDDEPHFTNJVAKQWGQOPWJMDLKPYELRJYTRVRGQIGVHZZDDAPNOOPXTUKIVUPCAIJWDVHQNDOFNKBCXYMVUGRTNMRTEAGGRNBSUFWBQRZSQVQAZIZXLMWHISLQPG");
    msg.timeout = 11965U;
    const char tmp_msg_0[] = {-36, -53, 96, 23, 42, 57, 65, 59, -74, 38, 33, -84, -120, 3, 14, 3, 54, 72, -44, -86, 28, 98, -26, -49, -112, 109, -100, 78, 11, 111, 90, -37, -112, -114, -24, -30, 106, -72, -2, -78, -109, 57, 45, -23, -110, 60, -21, 118, 68, 9, 39, 39, 101, 29, 21, 19, -95, -122, -13, -74, -63, -18, 108, -74, 85, -80, 73, -94, -65, 5, -86, 95, -59, 73, 83, -4, 40, 104, -37, -60, 32, 35, -36, 60, -20, -29};
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
    msg.setTimeStamp(0.166735157307);
    msg.setSource(26278U);
    msg.setSourceEntity(196U);
    msg.setDestination(60663U);
    msg.setDestinationEntity(85U);
    msg.seq = 3168976137U;
    msg.destination.assign("YTZYJUWMPKMHAQRLBLTCCOEZMUZHDRBCXVOWQVFXCTGEARFKQLNTOQXYYCOTBEWNUQEIJMICOGRRTUPTEIUQASVEAXDSZLZGDWHLWLGJSNEOBHDHOBGQKSUHWBOPJSUDNNCLMJAKSQHSBUAXJFDEKQFFOSMKEIMTDZRYLIVAXVVLXKZINRFVMFWVSAIYRUPJUFIPPOCJDZHDPPTAQKERFSCFDGKNZXPYWBYBAYNWTWHLMICVXM");
    msg.timeout = 41894U;
    const char tmp_msg_0[] = {-80, 19, 118, 17, 103, -33, -113, 85, 30, 75, 113, 17, -25, -69, 79, -94, 115, 12, -116, -52, 21, 26, 107, -78, 43, -81, -35, -126, -85, 102, -33, 27, -19, -84, 104, -37, 18, 0, -63, -50, -42, -82, 44, -108, -62, -98, -125, 24, -45};
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
    msg.setTimeStamp(0.0128407846158);
    msg.setSource(54003U);
    msg.setSourceEntity(205U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(139U);
    msg.source.assign("PUICEGKSSFBZIXVVANWDXPOWHP");
    const char tmp_msg_0[] = {-50, 9, -100, 56, -49, -108, 105, 73, 52, -81, -66, -46, 54, 111, 83, 13, -94, 44, 109, 83, -99, 68, 125, 30, -96, 112, 20, 14, -52, 4, 16, 68, -30, 111, -101, -38, -67, 52, -20, -91, 6, -99, -109, -119, -77, 122, -96, -78, -31, 107, 41, 5, 119, 35, -66, -79, -4, 96, 99, -89, 10, 11, -118, -88, -97, -63, -113, -19, -60, 54, 27, 9, -53, -70, 46, -19, -2, 2, 82, 95, -44, 60, -20, -35, -18, 125, -56, 99, -119, -61, -52, -5, -2, -49, -50, 98, 60, 27, 18, 0, 11, 69, -14, 7, -104, 109, 34, -55, -59, 57, -48, 114, -64, 60, -128, -13, 115, -105, -120, 31, -125, -76, -126, -125, -19, 57, -16, -87, 96, -84, 48, -67, -50, -47, 123, 18, 47, -64, 109, -92, 102, -15, 24, 23, 125, 109, -91, 19, 55, -85, 114, -77, -78, 82, 10, 66, -51, 80, 110, -14, -57, 126, -94, -28, 77, 106, 83, -119, 53, -50, -96, 43, 56, 28, -6, -96, -44, -121, -9, -23, 19, -72, -25, -88, -109, -122, -112, 63, 70, -1, -58, -36, 71, -54, -8, -104, -4, 72, 76, 87, -85, -40, -61, 26, 68, -96, 73, 6, -103, 109};
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
    msg.setTimeStamp(0.86058446688);
    msg.setSource(54282U);
    msg.setSourceEntity(252U);
    msg.setDestination(3920U);
    msg.setDestinationEntity(153U);
    msg.source.assign("GLWDFXYMYWMMDVUPLACRQHKHKSXTQUDIHDXIQMSXVEFGPEURRJNMZHWKBO");
    const char tmp_msg_0[] = {34, -103, 83, 24, -19, 113, 71, -19, -85, -82, 17, 119, -118, 20, -33, 66, -92, -29, -28, 91, 71, -45, -128, 40, -75, -44, 2, -80, -57, -110, 70, -3, -15, 53, -23, -48, 38, -8, -78, 38, -102, 125, -122, -41, 41, -17, 6, -19, 110, -102, -127, 14, 34, 117, 108, -18, -118, 122, 116, 94, -85, 100, 62, 77, -22, 79, 84, -119, -19, -22, 14, 109, 112, -24, -25, 114, -111, 44, -73, 45, -59, -23, -83, -123, 28, -36, 66, -112, 98, -22, 91, -48, -97, 27, 88, -113, -123, -44, 39, 67, -26, 36, 37, 74, -111, 68, 34, 1, -115, -51, 87, 103, -57, -39, 104, -22, 104, -125, 42, 103, -79, 96, -125, 45, 65, -2, 2, 64, -61, -56, -44, -108, -81, -65, 63, -22, -126, -117, 72, -114, -35, 41, 104, -73, 69, -72, 75, 116, 123, -20, 76, 38, 8, 78, 110, 25, -106, 89, 54, -56, 17, 60, 85, 102, 69, -35, 117, 4, 7, -73, 28, -108, -57, -2, 94, 118, 21, -14, -44, 57, -127, -32, -74, -75, 103, -2, -119, 69, 57, 123, -16, -102, 39, 12, 40, 57, -114, 79, 20, 63, 102, -73, 125, -61, -73, -83, 82, 77, 29, 32, 45, -82, -15, 59, 85, -52, -68, -48, -91, -44, -87, 37, 42, 19, -38, 92, -45, -74, 95, -95, -37, 64};
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
    msg.setTimeStamp(0.136594891417);
    msg.setSource(11762U);
    msg.setSourceEntity(122U);
    msg.setDestination(2566U);
    msg.setDestinationEntity(235U);
    msg.source.assign("CMGUZENAODJXORDHQKCSEALIZYGRTALVAITJBZRQVKHYLHPFMALACDLZAWYFVJXWNSPFZHQRXJSVUQSVPBMUKWVQWSRIOXQFNKIRTFZLEFRSYEANSRCJXCSOWGBBLECXFXIRPPGPMHKQJYTCNMJTKCGNZUNDKANKCOWFMVBMLWHEMUDOOZKJZOYFYBIWQDEVBQUMPXA");
    const char tmp_msg_0[] = {101, 45, -100, 123, 70, 63, -15, 77, -107, -108, -91, 37, 110, 109, -106, -100, 85, -97, -2, 67, -86, 91, -127, 13, -89, 77, -62, 119, -69, 67, 109, 99, 91, 74, -89, 47, -98, -33, 58, 79, -76, -49, 65, 49, -94, 78, 109, 50, -107, -20, 102, -109, 34, 31, 70, -108, -67, -75, -101, 41, -56, 89, -125, 39, -59, -95, 8, 50, 18, 93, -47, -49, 87, 38, -38, -23, -47, 43, 12, -60, -42, -128, 15, -59, 67, -96, 83, -65, -120, 85, -11, -122, -13};
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
    msg.setTimeStamp(0.634533539705);
    msg.setSource(24317U);
    msg.setSourceEntity(193U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(111U);
    msg.seq = 1280226647U;
    msg.state = 251U;
    msg.error.assign("KGOCETPTZCBJZMZGNSTXLWNU");

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
    msg.setTimeStamp(0.630201892288);
    msg.setSource(42965U);
    msg.setSourceEntity(228U);
    msg.setDestination(65048U);
    msg.setDestinationEntity(229U);
    msg.seq = 3440620680U;
    msg.state = 171U;
    msg.error.assign("XSTUNOINJHCUWQVNQYOPKSGPNVWMZDGHJWHYZKIKLULSXXCKBOZEUYXLCPMWTRKAOSGDIYZRWNEFCPAYQUQOFCXEOQKNCBUZAXYKBAPUIGXLLQGJTARTVLTFOJSQCEFUAEIPELTJASLHAPLTQBMBVELFAYJDXEDZSHBIIIRFPDDWNXRFABX");

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
    msg.setTimeStamp(0.794621939936);
    msg.setSource(60418U);
    msg.setSourceEntity(102U);
    msg.setDestination(3561U);
    msg.setDestinationEntity(140U);
    msg.seq = 2168890167U;
    msg.state = 79U;
    msg.error.assign("OBNCNYEQNDEJZPVPYXOEDUSE");

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
    msg.setTimeStamp(0.92280479915);
    msg.setSource(28789U);
    msg.setSourceEntity(32U);
    msg.setDestination(8476U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("JYIRZTHWYSCUKNAVAPSGIQTPIMSTXACUFKFHGPKLNVFZWDPDEUTHYPBWRNKOBFYXDNOBWEUEJJDMXKQUGSJVFFTCFEEBRVRFIGOZABQQM");
    msg.text.assign("VPMYCLQVGKWOOGNXMNYEUFPDTAQKJPCHREQAFNTDMMELYVLKYCEYXVPQVGDIJJORCLUFEGIIPWTAGHVKRRNMBAUCZJKWQTRWSBDWQWHKNSDUXIGZQQBTIKDAMJDKTUAPVHFSOXGJMBPENPVXHSODCFQVXLUHRBFSIBNABHXVYSIBPRNOYLZLOWJETZXDLJUFZKCEZNALZCWTTHFRBHHPLZEOZUJSWAGXFUXOMSIOMYYIJTCGDRY");

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
    msg.setTimeStamp(0.296212770872);
    msg.setSource(14680U);
    msg.setSourceEntity(91U);
    msg.setDestination(37136U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("HMXCEVUACIGBZFGVDGXQDNIWZNPOVISMYLNOWTRNQGUBCIWAAUUCIJWJVEZOKLLOXNKYNADAFKRYFDZAXZGWFLTSSYHPIOWCQVLKRTMOW");
    msg.text.assign("GLGOWIAMQEBXBJOABDMSLPKSKPWDKCJTXTAYKUPIHMLGHEZKLHSJZTRUFBUIIOQXDKWWONQNNHVHUELRRNJARGUPQRQLMZLCZGZRYCDVMVRMPEIPGLEKYOAEKFPLTNUFNJRBKPDWYYOMDDSASVVSNNGHQOREZXMBBBAOUUWWZZFYCVYJZIVTIXZXCPGC");

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
    msg.setTimeStamp(0.894777532836);
    msg.setSource(26348U);
    msg.setSourceEntity(178U);
    msg.setDestination(59503U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("RYTSFVUZMBKDXASJKZVIJDWLQUCKKSURPBVZAKWHNXYXDMJNLIUAWQFTJJAOGMGNRAEHRFVYFXUWYTBODBFZTMQNGMCRIBHF");
    msg.text.assign("LXVRYRNSGMUNXUYCNLVTZMSHDHNTRQUGADOGNWHJWCSMIVEXJFZGNEJUHBBEIAKPKLCPSLATAZYFWGYPUGMQPKQIJUGBCLESVDZXCFBHCWATOFICBRDJMHXIBTRAXFVIVPBTSIICYDDNKQRNZZT");

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
    msg.setTimeStamp(0.0819905373055);
    msg.setSource(54900U);
    msg.setSourceEntity(112U);
    msg.setDestination(6647U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("RDSBRJHUCRWDVNVPIEWSRSMNYWMYAGBIUDCFEOGQQOLZ");
    msg.htime = 0.371008581098;
    msg.lat = 0.804208189586;
    msg.lon = 0.441743219774;
    const char tmp_msg_0[] = {-54, -99, 93, 113, -16, -106, 98, -8, -125, 63, -68, -42};
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
    msg.setTimeStamp(0.702138754733);
    msg.setSource(50612U);
    msg.setSourceEntity(164U);
    msg.setDestination(21064U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("MCTCLSJTSIWNOMEJXJAADKYEZXALEYPGDGJERILZJRZVXKJPNCBQBHTEBPKQRSINHUKQIBFAIPOPXEQHPFUNRBNIHUFITJWVUPNXLJUDVYRAO");
    msg.htime = 0.884310242126;
    msg.lat = 0.0469653706418;
    msg.lon = 0.390324299279;
    const char tmp_msg_0[] = {-121, 13, -89, -72, 62, -100, 99, -91, 68, -92, -68, -70, 115, 44, -52, -24, 40, -114, -59, 82, -56, 71, -79, -71, 19, 120, -119, -80, 1, 70, 30, 100, 81, -37, -70, 6, -36, -33, -13, -57, -74, -3, -120, 110, 26, 51, 5, 59, -102, -76, 82, 1, -1, -89, -32, -66, -76, 15, 86, -123, 85, -108, 11, 120, -49, -44, 7, -34, -53, -72, 64, -2, 42, -102, 89, 114, -63, 1, 55, 51, 45, 84, 106, 35, -71, 115, 81, -92, -4, 17, -116, 12, 115, -115, -42, -94, -88, -61, 109, -23, 45, 88, -21, -113, 126, 9, -67, 35, -93, 16, 25, 16, -36, -74, 124, 73, -120, 104, 91, -95, -51, 18, -103, -56, -54, 105, 110, -80, -109, -49, -3, -63, -74, 54, -31, 116};
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
    msg.setTimeStamp(0.845813004266);
    msg.setSource(13632U);
    msg.setSourceEntity(219U);
    msg.setDestination(19616U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("MMGXLBIFNZSSAYYIFIFEZZVCUKAQQ");
    msg.htime = 0.285064387523;
    msg.lat = 0.23658522826;
    msg.lon = 0.562539981582;
    const char tmp_msg_0[] = {-97, -65, -45, -91, 84, 25, -101, 103, -88, 120, -100, 57, 2, -110, -116, -113, 16, -104, 34, -7, 38, 78, 100, -56, -68, -8, -11, -52, 122, 40, 101, -89, -104, -73, 52, -58, -88, 50, -57, -109, 75, 28, -27, 126, -9, -12, -81, -68, 61, 120, -94, -11, -115, -44, 110, -71, 102, -70, -72, -48, -5, 56, 18, 0, 60, -13, -27, -85, 59, 0, 117, -93, -57, 50, -63, -19, -114, -6, 34, 43, 34, -47, -55, -97, -58, -45, -67, 74, -73, -114, -112, 11, 3, 56, 26, 110, 84, 4, 83, -72, 13, 42, 40, -38, 65, -111, 71, -113, 88, -103, 27, -92, -78, 109, 76, -57, 96, 69, -85, -123, -62, 117, -107, -108, 51, 124, 72, 28, 42, 13, -71, 123, -7, -127, -47, -94, 21, 126, -79, -96, 104, -67, 99, -86, 70, 95, -9, 79, 103, -22, 56, -62, 122, -90, -29, 35, -126, 97, -97, -86, 6, 114, -35, 69, 15, 30, 41, 84, 102, 34, 107, 0, -64, -93, 2, -40, -68, 9, 60, -111, 13, -44, -92, 44, 71, 25, 71, -28, 95, 75, 119, 105, -35, -36, -107, -7, 53, 110, -103, 29, 124, -4, -62, 120, -90, 40, -40, 29, -83, -83, -121, 115, 0, -120, -77, -71, -20, 80, -33, -18, -4, -43, 41, 85, -120, 10, -98, -104, 117, 98, 88, -23, 126, 37, 2, -81, 77, -19, -92, -91, 68, -117, 101, -91, -20, -62, 31, 26, -32, 18};
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
    msg.setTimeStamp(0.890495958133);
    msg.setSource(24083U);
    msg.setSourceEntity(194U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(178U);
    msg.req_id = 30111U;
    msg.ttl = 29080U;
    msg.destination.assign("WSVIHFVJPHLKRUQDCYAEYMQNGFHKYVLTFOFGLKRFDUTDYVAQQUYOBAZCYJZBSHAINLNZETJOUWKBSFEDEMCWIALBDUHXUAGUMZBAWZKHDWMRFIXXLJJFDEPJRWFIUBRPZIKJSTYMQXIXNKEVFGQORGTTONQVXWNATUDZGXPSORMOGCO");
    const char tmp_msg_0[] = {104, 92, -90, -73, -50, -95, 81, -11, 90, 120, -16, -121, 7, 20, -102, 42, 37, 26, -78, 108, 84, -73, 85, 10, 76, 74, 2, 38, -60, -65, 64, -61, 8, 72, -102, -79, 45, 42, 78, 21, -3, -103, -80, 77, 104, 58, 91, -74, -119, -79, -65, 63, 120, -67, 105, 76, 38, -33, -5, 86, 13, -77, 9, 4, -42, 39, 37, 68, -89, 42, -96, 78, -95, -51, 123, 53, -12, -80, -38, 7, -11, 105, -40, 108, 7, 12, -113, 123, -45, 82, -108, -29, 77, 43, 47, -53, -78, -30, -18, 63, -31, -121, 117, 103, -118, -59, 81, 12, 72, 49, 60, -62, -44, 11, 18, 5, 22, 99, -121, -58, -25, -68, 116, -18, -28, -46, -97, -73, -127};
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
    msg.setTimeStamp(0.17074751884);
    msg.setSource(62406U);
    msg.setSourceEntity(180U);
    msg.setDestination(54025U);
    msg.setDestinationEntity(208U);
    msg.req_id = 3177U;
    msg.ttl = 2908U;
    msg.destination.assign("IHTFOHCZIAXQTDVXHFRCLFVWBAQGREEWHXOONLHNXZXLFNCYQPWGNKJOHKFDFTULZKKQVGLZBXEUCXXEJBQ");
    const char tmp_msg_0[] = {73, 61, 68, -110, 4, 118, 49, 33, 7, -82, -38, 53, 17, -108, -40, -73, -126, -100, -64, 56, -113, -85, -48, 85, 102, 37, 14, 24, 4, 81, 23, -94, -2, -99, -110, -91, -61, -72, -99, -103, -43, 9, 70, 18, -42, 15, 123, -16, -16, 80, 125, 24, 29, -60, -95, -128, 52, 100, 38, 96, -59, 63, -109, -116, -114, -15, -26, 32, -96, 68, 88, -91, -59, -68, 48, 103, 61, -106, -18, -48, 5, 109, -123, -17, 39, -43, 125, 4, -125, -22, 48, 45, 62, -65, -58, -55, 70, -116, -110, 55, -86, -4, 27, 51, 48, 31, 112, -124, -43, -72, 74, 28, 39, 84, -88, -78, -54, -105, -119, 78, -103, -42, 1, 56, 56, 42, -12, 124, -77, -50, 71, -119, -107, 100, 12, -75, -30, 92, 36, -109, 94, 69, 46, -3, 42, -112, -48, 48, 3};
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
    msg.setTimeStamp(0.411093692163);
    msg.setSource(19474U);
    msg.setSourceEntity(154U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(139U);
    msg.req_id = 61845U;
    msg.ttl = 54U;
    msg.destination.assign("NGWAIYPICADHRQDJWJSUFEPRLLLNYBGVMTWHTIBRLVZBTHIJESVDVZZTYDAKSORNOKULJKUWUWKFLAFQTRPYOMOXLNZPSLFKNXWUBBRSHEQSOGJFTAZGZOIXDKPSQDGAKERCHNXECKWCYHNXUPFC");
    const char tmp_msg_0[] = {85, 110, 70, -5, 80, -104, -1, -124, 37, 98, -70, 103, -32, -90, 62, -54, 19, -48, -107, -96, -113, 4, 22, 116, -48, 70, -65, -17, -75, 96, 49, -3, 18, 68, -67, 100, -117, -45, 17, -72, 110, 55, 52, 49, 29, 57, -19, -57, 64, -98, 99, 54, 102, -82, 67, 77, 93, 92, 63, 10, 48, 30, 126, 35, 32, -50, -48, -112};
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
    msg.setTimeStamp(0.0966829983585);
    msg.setSource(60250U);
    msg.setSourceEntity(55U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(64U);
    msg.req_id = 29450U;
    msg.status = 20U;
    msg.text.assign("IGBSEIASWBKKAFOPXREDPICBICFJRXSWEPXCTTQLDVIDZXZIUHFTHHOQMRSGIEOSRWTUBEUDRTORLUYY");

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
    msg.setTimeStamp(0.885045396768);
    msg.setSource(37213U);
    msg.setSourceEntity(119U);
    msg.setDestination(32853U);
    msg.setDestinationEntity(189U);
    msg.req_id = 42072U;
    msg.status = 2U;
    msg.text.assign("ZXEJIMNHOUXOVWWXWTLTNQKRUARSVJEPNZJLPWZCUNYTDAFJWVVVROZLPGNHKQYACGSHUTCDGEILPGTMHSTMHZDZQBKMOXNOBMFSRGTIPRWGJWP");

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
    msg.setTimeStamp(0.482321480854);
    msg.setSource(35791U);
    msg.setSourceEntity(175U);
    msg.setDestination(33903U);
    msg.setDestinationEntity(200U);
    msg.req_id = 61139U;
    msg.status = 232U;
    msg.text.assign("WVSMQRSBHBUDBVWUAMXYUCPQZKEVFWQHIRBSODFTQICV");

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
    msg.setTimeStamp(0.119089643613);
    msg.setSource(61710U);
    msg.setSourceEntity(238U);
    msg.setDestination(64536U);
    msg.setDestinationEntity(191U);
    msg.id = 93U;
    msg.range = 0.761847342314;

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
    msg.setTimeStamp(0.363664307934);
    msg.setSource(43707U);
    msg.setSourceEntity(35U);
    msg.setDestination(11021U);
    msg.setDestinationEntity(182U);
    msg.id = 198U;
    msg.range = 0.176221084331;

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
    msg.setTimeStamp(0.768822194187);
    msg.setSource(340U);
    msg.setSourceEntity(71U);
    msg.setDestination(7531U);
    msg.setDestinationEntity(18U);
    msg.id = 68U;
    msg.range = 0.969839775306;

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
    msg.setTimeStamp(0.659883811028);
    msg.setSource(38789U);
    msg.setSourceEntity(148U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(197U);
    msg.tx = 212U;
    msg.channel = 152U;
    msg.timer = 54329U;

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
    msg.setTimeStamp(0.111868914719);
    msg.setSource(46748U);
    msg.setSourceEntity(203U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(90U);
    msg.tx = 63U;
    msg.channel = 87U;
    msg.timer = 17735U;

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
    msg.setTimeStamp(0.326023647445);
    msg.setSource(37732U);
    msg.setSourceEntity(158U);
    msg.setDestination(60345U);
    msg.setDestinationEntity(70U);
    msg.tx = 88U;
    msg.channel = 81U;
    msg.timer = 51695U;

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
    msg.setTimeStamp(0.493303764899);
    msg.setSource(42611U);
    msg.setSourceEntity(171U);
    msg.setDestination(1752U);
    msg.setDestinationEntity(244U);
    msg.beacon.assign("GJUUOLJQNKXKBVBDONEXTREOBDVHFSXSTFISKCPCAOBESSZTARQGKSJTXYECLXDCLZIPMKVFGDTRYVALDYHWIRSXBZCMTUJNMKIKYZPRXVBRRVOPMUCENNVZYEWZWUOFLAHNSYDXLQQP");
    msg.lat = 0.929638141525;
    msg.lon = 0.516124477889;
    msg.depth = 0.815983189284;
    msg.query_channel = 159U;
    msg.reply_channel = 200U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.564528594225);
    msg.setSource(5643U);
    msg.setSourceEntity(175U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("XBTVRXCEQNFQKPKASCZQAHTQWDQPGITBRNIZIMXHQJHPBHHRANTGYZUDSOXNSHEQCVBGDWKEGMFKHFSXMDXREGBVVUIJEOAMAHFYWUROPBILMKAXGBYIKJXUVWBZFCGJNIQIFETJW");
    msg.lat = 0.186738966218;
    msg.lon = 0.152649653739;
    msg.depth = 0.0330042819318;
    msg.query_channel = 212U;
    msg.reply_channel = 50U;
    msg.transponder_delay = 68U;

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
    msg.setTimeStamp(0.000749077120687);
    msg.setSource(5471U);
    msg.setSourceEntity(232U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("PVJYWLEBANTCGOMJZUEPNUVCOSYPASYSSHWZRUSKHEJOUDGFRTIIWYLULLKAORCHAOWNQDGBJIXZXYDLGLJLIMFZCCEUKESJDYMYYXX");
    msg.lat = 0.340102003883;
    msg.lon = 0.215343776511;
    msg.depth = 0.0389490731048;
    msg.query_channel = 115U;
    msg.reply_channel = 208U;
    msg.transponder_delay = 153U;

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
    msg.setTimeStamp(0.445353205025);
    msg.setSource(43980U);
    msg.setSourceEntity(153U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(183U);
    msg.op = 48U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZPGXNONLFWNUVIFJBYZXFMDPXLBWEZITIHQFSAFVUQPDREMQHPWTYCOBSAEANVRJYCRFUMKWHEQSPKHKMMGSTFMSNRSLPLJZWTYGOWHLGNCNVSKJXYCKNMFBVUA");
    tmp_msg_0.lat = 0.0439749573091;
    tmp_msg_0.lon = 0.865510469615;
    tmp_msg_0.depth = 0.616183582463;
    tmp_msg_0.query_channel = 254U;
    tmp_msg_0.reply_channel = 30U;
    tmp_msg_0.transponder_delay = 206U;
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
    msg.setTimeStamp(0.199861510761);
    msg.setSource(21565U);
    msg.setSourceEntity(26U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(13U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.798045266364);
    msg.setSource(12904U);
    msg.setSourceEntity(25U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(200U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.072226440013);
    msg.setSource(4462U);
    msg.setSourceEntity(219U);
    msg.setDestination(44397U);
    msg.setDestinationEntity(48U);
    msg.address = 89U;

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
    msg.setTimeStamp(0.488146774619);
    msg.setSource(54339U);
    msg.setSourceEntity(177U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(28U);
    msg.address = 192U;

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
    msg.setTimeStamp(0.642625804447);
    msg.setSource(30875U);
    msg.setSourceEntity(65U);
    msg.setDestination(28892U);
    msg.setDestinationEntity(6U);
    msg.address = 224U;

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
    msg.setTimeStamp(0.11062809739);
    msg.setSource(46836U);
    msg.setSourceEntity(152U);
    msg.setDestination(58879U);
    msg.setDestinationEntity(142U);
    msg.address = 111U;
    msg.status = 11U;
    msg.range = 0.0670739816601;

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
    msg.setTimeStamp(0.439568186822);
    msg.setSource(6648U);
    msg.setSourceEntity(216U);
    msg.setDestination(30626U);
    msg.setDestinationEntity(133U);
    msg.address = 70U;
    msg.status = 12U;
    msg.range = 0.705036411925;

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
    msg.setTimeStamp(0.061569261367);
    msg.setSource(47417U);
    msg.setSourceEntity(253U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(211U);
    msg.address = 149U;
    msg.status = 124U;
    msg.range = 0.768307466938;

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
    msg.setTimeStamp(0.82184665694);
    msg.setSource(18404U);
    msg.setSourceEntity(77U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(131U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 64608U;
    tmp_msg_0.lat = 0.524921485427;
    tmp_msg_0.lon = 0.740003750069;
    tmp_msg_0.z = 0.0372706202122;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.541061205433;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.bearing = 0.205452288644;
    tmp_msg_0.cross_angle = 0.618518974035;
    tmp_msg_0.width = 0.964528358277;
    tmp_msg_0.length = 0.687213123409;
    tmp_msg_0.hstep = 0.439748905854;
    tmp_msg_0.coff = 224U;
    tmp_msg_0.alternation = 224U;
    tmp_msg_0.flags = 235U;
    tmp_msg_0.custom.assign("QRGICCZOOLMPRXGYPDOBDVUAJYULTFCIGEJAIILEHMS");
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
    msg.setTimeStamp(0.0748940898207);
    msg.setSource(47907U);
    msg.setSourceEntity(253U);
    msg.setDestination(62387U);
    msg.setDestinationEntity(117U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 226U;
    tmp_msg_0.clock = 0.215422680719;
    tmp_msg_0.tz = -100;
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
    msg.setTimeStamp(0.292516267283);
    msg.setSource(34011U);
    msg.setSourceEntity(15U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(146U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.831691987922;
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
    msg.setTimeStamp(0.0593544417108);
    msg.setSource(12693U);
    msg.setSourceEntity(36U);
    msg.setDestination(9516U);
    msg.setDestinationEntity(253U);
    msg.enable = 192U;

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
    msg.setTimeStamp(0.136446377492);
    msg.setSource(47525U);
    msg.setSourceEntity(246U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(169U);
    msg.enable = 81U;

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
    msg.setTimeStamp(0.919449233165);
    msg.setSource(15062U);
    msg.setSourceEntity(16U);
    msg.setDestination(30957U);
    msg.setDestinationEntity(68U);
    msg.enable = 34U;

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
    msg.setTimeStamp(0.078170072095);
    msg.setSource(32976U);
    msg.setSourceEntity(204U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(76U);
    msg.summary = 83U;
    msg.level = 107U;

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
    msg.setTimeStamp(0.449936476326);
    msg.setSource(39579U);
    msg.setSourceEntity(31U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(175U);
    msg.summary = 157U;
    msg.level = 101U;

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
    msg.setTimeStamp(0.473752348398);
    msg.setSource(52804U);
    msg.setSourceEntity(64U);
    msg.setDestination(44731U);
    msg.setDestinationEntity(37U);
    msg.summary = 247U;
    msg.level = 114U;

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
    msg.setTimeStamp(0.905483962488);
    msg.setSource(37243U);
    msg.setSourceEntity(82U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.438526964501);
    msg.setSource(20832U);
    msg.setSourceEntity(166U);
    msg.setDestination(7353U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.331685333352);
    msg.setSource(62383U);
    msg.setSourceEntity(145U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.0328431013087);
    msg.setSource(28310U);
    msg.setSourceEntity(237U);
    msg.setDestination(22520U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.769818954552);
    msg.setSource(35052U);
    msg.setSourceEntity(148U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.239082111411);
    msg.setSource(29988U);
    msg.setSourceEntity(237U);
    msg.setDestination(46554U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.93697243393);
    msg.setSource(12604U);
    msg.setSourceEntity(162U);
    msg.setDestination(48038U);
    msg.setDestinationEntity(230U);
    msg.op = 218U;
    msg.system.assign("DHEBHIHCGMDUKPKYWRAWCCWDJATQPGLJEZBGONMZHNHXWFAGKVIGKZKTYBFIC");
    msg.range = 0.388660703665;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.800358237995;
    tmp_msg_0.x = 0.787827637487;
    tmp_msg_0.y = 0.0367685237595;
    tmp_msg_0.z = 0.866008871984;
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
    msg.setTimeStamp(0.871290029695);
    msg.setSource(4307U);
    msg.setSourceEntity(158U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(189U);
    msg.op = 194U;
    msg.system.assign("MDFYIUMBESPPRRYISEUCOCWNUVDFJLAKXLGIJDTTFEHXTUNZPRCJPEMJTKNJHVRZCOJYFZPJEYHNBDBGCWMZVGBQBYORIQVCYHIGJKJENQDDUSWQFZTHGUASOBGMQFINWXGISKYHSLWLCEAXBQZKBVXVFPEPWDVCMKZRLWLDYXZKJVIRRGXYMEUQGSAASMNWAWPMKXUHBHXTVAFCOLIZNPDUOAUSARLNOCHFQEPLKYAKILGOFTMOTHTXB");
    msg.range = 0.971686716362;
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.293116998849);
    msg.setSource(7869U);
    msg.setSourceEntity(127U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(127U);
    msg.op = 75U;
    msg.system.assign("WTXLZHVQEPGKFINPPXOCTUWYVUJKMDZVMLZFTPSGPJ");
    msg.range = 0.415451413684;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 60472U;
    tmp_msg_0.type = 129U;
    tmp_msg_0.utc_year = 32247U;
    tmp_msg_0.utc_month = 253U;
    tmp_msg_0.utc_day = 206U;
    tmp_msg_0.utc_time = 0.350429578969;
    tmp_msg_0.lat = 0.353660683494;
    tmp_msg_0.lon = 0.288450519719;
    tmp_msg_0.height = 0.639206201129;
    tmp_msg_0.satellites = 244U;
    tmp_msg_0.cog = 0.803660585259;
    tmp_msg_0.sog = 0.867108610041;
    tmp_msg_0.hdop = 0.209660113375;
    tmp_msg_0.vdop = 0.38401453786;
    tmp_msg_0.hacc = 0.681806347739;
    tmp_msg_0.vacc = 0.268973564854;
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
    msg.setTimeStamp(0.206807389423);
    msg.setSource(39744U);
    msg.setSourceEntity(6U);
    msg.setDestination(12865U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.693911568003);
    msg.setSource(31895U);
    msg.setSourceEntity(249U);
    msg.setDestination(5130U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.140792470043);
    msg.setSource(19876U);
    msg.setSourceEntity(131U);
    msg.setDestination(40793U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.992690672427);
    msg.setSource(63970U);
    msg.setSourceEntity(41U);
    msg.setDestination(34149U);
    msg.setDestinationEntity(230U);
    msg.list.assign("FARIWOZCPZLCLYLBIYVFXZJTTKBJYPGDWIXXMVOROFVKUEBEMSVAPDKRFAJMOXSZOQJZSPMZSDUKYBIEMNDGUMGCMUWOEGVJHLTHPXYRVSCQJWWBYMBQPAZEPWDWIHCYCCJWEVAWUHNHRBGRDLIUKVXNQOLTDLSASTDIZSUOHSALTEBBNQKJMKKFEWUOMFIXYAAZJQGIJHBNPPQKEXVRTPGHFUFFRQG");

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
    msg.setTimeStamp(0.474882343691);
    msg.setSource(42270U);
    msg.setSourceEntity(1U);
    msg.setDestination(41512U);
    msg.setDestinationEntity(109U);
    msg.list.assign("KOWSYXIWZXJEIBYFXLKOEOSAGIPCVWJMUSVKBNNRKBYLMYVET");

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
    msg.setTimeStamp(0.766672395904);
    msg.setSource(10594U);
    msg.setSourceEntity(241U);
    msg.setDestination(51222U);
    msg.setDestinationEntity(117U);
    msg.list.assign("RAITMRUOHHRLEBNUSPQLYTAQ");

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
    msg.setTimeStamp(0.428498167008);
    msg.setSource(57575U);
    msg.setSourceEntity(50U);
    msg.setDestination(47763U);
    msg.setDestinationEntity(80U);
    msg.value = -1925;

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
    msg.setTimeStamp(0.641908816895);
    msg.setSource(23012U);
    msg.setSourceEntity(233U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(167U);
    msg.value = 4763;

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
    msg.setTimeStamp(0.845392169091);
    msg.setSource(23590U);
    msg.setSourceEntity(97U);
    msg.setDestination(33366U);
    msg.setDestinationEntity(182U);
    msg.value = 4681;

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
    msg.setTimeStamp(0.685893188765);
    msg.setSource(4260U);
    msg.setSourceEntity(223U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(229U);
    msg.value = 0.173139613138;

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
    msg.setTimeStamp(0.399495057597);
    msg.setSource(19557U);
    msg.setSourceEntity(155U);
    msg.setDestination(53695U);
    msg.setDestinationEntity(131U);
    msg.value = 0.33229135898;

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
    msg.setTimeStamp(0.110854065678);
    msg.setSource(34259U);
    msg.setSourceEntity(101U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(162U);
    msg.value = 0.979423988561;

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
    msg.setTimeStamp(0.760288172481);
    msg.setSource(43595U);
    msg.setSourceEntity(244U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(128U);
    msg.value = 0.0204118382288;

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
    msg.setTimeStamp(0.914178396134);
    msg.setSource(50609U);
    msg.setSourceEntity(17U);
    msg.setDestination(26070U);
    msg.setDestinationEntity(222U);
    msg.value = 0.746365712381;

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
    msg.setTimeStamp(0.590590165104);
    msg.setSource(32011U);
    msg.setSourceEntity(225U);
    msg.setDestination(33510U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0653838226652;

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
    msg.setTimeStamp(0.828668617493);
    msg.setSource(29270U);
    msg.setSourceEntity(88U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(134U);
    msg.validity = 52551U;
    msg.type = 122U;
    msg.utc_year = 40692U;
    msg.utc_month = 166U;
    msg.utc_day = 156U;
    msg.utc_time = 0.33710904452;
    msg.lat = 0.25760509586;
    msg.lon = 0.840228889639;
    msg.height = 0.445203380874;
    msg.satellites = 228U;
    msg.cog = 0.750569452459;
    msg.sog = 0.656075193429;
    msg.hdop = 0.929874318489;
    msg.vdop = 0.616459103752;
    msg.hacc = 0.761588089813;
    msg.vacc = 0.67797884317;

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
    msg.setTimeStamp(0.568472741148);
    msg.setSource(14426U);
    msg.setSourceEntity(6U);
    msg.setDestination(22083U);
    msg.setDestinationEntity(169U);
    msg.validity = 23942U;
    msg.type = 9U;
    msg.utc_year = 28561U;
    msg.utc_month = 254U;
    msg.utc_day = 73U;
    msg.utc_time = 0.638470775393;
    msg.lat = 0.403258798579;
    msg.lon = 0.437497945595;
    msg.height = 0.221536401693;
    msg.satellites = 202U;
    msg.cog = 0.969222039782;
    msg.sog = 0.466029336345;
    msg.hdop = 0.491357583315;
    msg.vdop = 0.0485242562389;
    msg.hacc = 0.318966848784;
    msg.vacc = 0.726880162465;

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
    msg.setTimeStamp(0.179612404474);
    msg.setSource(25428U);
    msg.setSourceEntity(135U);
    msg.setDestination(4380U);
    msg.setDestinationEntity(126U);
    msg.validity = 34478U;
    msg.type = 177U;
    msg.utc_year = 20636U;
    msg.utc_month = 191U;
    msg.utc_day = 171U;
    msg.utc_time = 0.795906908096;
    msg.lat = 0.68254918743;
    msg.lon = 0.460131809648;
    msg.height = 0.906695726015;
    msg.satellites = 199U;
    msg.cog = 0.677349724384;
    msg.sog = 0.565126866724;
    msg.hdop = 0.102918366842;
    msg.vdop = 0.451048471764;
    msg.hacc = 0.61927845968;
    msg.vacc = 0.536302349308;

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
    msg.setTimeStamp(0.310424859478);
    msg.setSource(38596U);
    msg.setSourceEntity(182U);
    msg.setDestination(39109U);
    msg.setDestinationEntity(116U);
    msg.time = 0.0466589578909;
    msg.phi = 0.521831165009;
    msg.theta = 0.554418574635;
    msg.psi = 0.276365247081;
    msg.psi_magnetic = 0.679720400299;

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
    msg.setTimeStamp(0.0696756316302);
    msg.setSource(42703U);
    msg.setSourceEntity(164U);
    msg.setDestination(58657U);
    msg.setDestinationEntity(220U);
    msg.time = 0.524358170899;
    msg.phi = 0.444999278102;
    msg.theta = 0.810662137146;
    msg.psi = 0.657857786036;
    msg.psi_magnetic = 0.739591692311;

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
    msg.setTimeStamp(0.0422859483338);
    msg.setSource(39532U);
    msg.setSourceEntity(176U);
    msg.setDestination(61806U);
    msg.setDestinationEntity(183U);
    msg.time = 0.339604253719;
    msg.phi = 0.721414651207;
    msg.theta = 0.0516384076456;
    msg.psi = 0.534580220829;
    msg.psi_magnetic = 0.162485625783;

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
    msg.setTimeStamp(0.00105380204334);
    msg.setSource(46292U);
    msg.setSourceEntity(134U);
    msg.setDestination(21731U);
    msg.setDestinationEntity(39U);
    msg.time = 0.245360062172;
    msg.x = 0.946879457443;
    msg.y = 0.256772190076;
    msg.z = 0.648241089983;
    msg.timestep = 0.640232486245;

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
    msg.setTimeStamp(0.558609224812);
    msg.setSource(39968U);
    msg.setSourceEntity(102U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(29U);
    msg.time = 0.11380371163;
    msg.x = 0.444899455101;
    msg.y = 0.550639497582;
    msg.z = 0.400360372257;
    msg.timestep = 0.382471830165;

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
    msg.setTimeStamp(0.746262138263);
    msg.setSource(8735U);
    msg.setSourceEntity(59U);
    msg.setDestination(35780U);
    msg.setDestinationEntity(77U);
    msg.time = 0.537921556103;
    msg.x = 0.904861307879;
    msg.y = 0.450921966121;
    msg.z = 0.920592146057;
    msg.timestep = 0.388597404984;

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
    msg.setTimeStamp(0.473793312055);
    msg.setSource(27849U);
    msg.setSourceEntity(44U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(70U);
    msg.time = 0.597696101045;
    msg.x = 0.0682493140306;
    msg.y = 0.597398295118;
    msg.z = 0.419592570445;

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
    msg.setTimeStamp(0.212009565302);
    msg.setSource(30201U);
    msg.setSourceEntity(238U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(169U);
    msg.time = 0.50930001324;
    msg.x = 0.66445270616;
    msg.y = 0.751498345877;
    msg.z = 0.574960757317;

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
    msg.setTimeStamp(0.715090168524);
    msg.setSource(12826U);
    msg.setSourceEntity(211U);
    msg.setDestination(55805U);
    msg.setDestinationEntity(87U);
    msg.time = 0.709904745323;
    msg.x = 0.557256249441;
    msg.y = 0.970055372994;
    msg.z = 0.0906628230282;

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
    msg.setTimeStamp(0.314796323662);
    msg.setSource(52015U);
    msg.setSourceEntity(164U);
    msg.setDestination(16539U);
    msg.setDestinationEntity(214U);
    msg.time = 0.198809064074;
    msg.x = 0.97489862707;
    msg.y = 0.442659775033;
    msg.z = 0.612587397746;

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
    msg.setTimeStamp(0.0162710515528);
    msg.setSource(16712U);
    msg.setSourceEntity(70U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(168U);
    msg.time = 0.448016618865;
    msg.x = 0.249807137749;
    msg.y = 0.808805220068;
    msg.z = 0.63782984337;

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
    msg.setTimeStamp(0.274649162902);
    msg.setSource(56618U);
    msg.setSourceEntity(13U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(229U);
    msg.time = 0.426581588601;
    msg.x = 0.805657248862;
    msg.y = 0.846272191737;
    msg.z = 0.89535842006;

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
    msg.setTimeStamp(0.823739858836);
    msg.setSource(61668U);
    msg.setSourceEntity(77U);
    msg.setDestination(30318U);
    msg.setDestinationEntity(174U);
    msg.time = 0.0694389530814;
    msg.x = 0.257903069772;
    msg.y = 0.622642568238;
    msg.z = 0.770915255777;

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
    msg.setTimeStamp(0.0939061867253);
    msg.setSource(7560U);
    msg.setSourceEntity(234U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(69U);
    msg.time = 0.815380542046;
    msg.x = 0.613897514444;
    msg.y = 0.988648277057;
    msg.z = 0.189371401011;

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
    msg.setTimeStamp(0.879733878424);
    msg.setSource(21403U);
    msg.setSourceEntity(219U);
    msg.setDestination(10213U);
    msg.setDestinationEntity(190U);
    msg.time = 0.983261031326;
    msg.x = 0.0699840161584;
    msg.y = 0.404557798186;
    msg.z = 0.284596848129;

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
    msg.setTimeStamp(0.177383593969);
    msg.setSource(47447U);
    msg.setSourceEntity(15U);
    msg.setDestination(22542U);
    msg.setDestinationEntity(34U);
    msg.validity = 233U;
    msg.x = 0.808153525165;
    msg.y = 0.280661028945;
    msg.z = 0.441848173779;

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
    msg.setTimeStamp(0.351687913768);
    msg.setSource(31756U);
    msg.setSourceEntity(161U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(172U);
    msg.validity = 220U;
    msg.x = 0.441259913606;
    msg.y = 0.880807619854;
    msg.z = 0.063555850519;

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
    msg.setTimeStamp(0.498784691789);
    msg.setSource(44084U);
    msg.setSourceEntity(99U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(22U);
    msg.validity = 214U;
    msg.x = 0.0232923602921;
    msg.y = 0.376099738557;
    msg.z = 0.486633045;

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
    msg.setTimeStamp(0.532912186028);
    msg.setSource(3026U);
    msg.setSourceEntity(125U);
    msg.setDestination(20183U);
    msg.setDestinationEntity(240U);
    msg.validity = 65U;
    msg.x = 0.534333417907;
    msg.y = 0.427197528751;
    msg.z = 0.458367332015;

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
    msg.setTimeStamp(0.965891702513);
    msg.setSource(1981U);
    msg.setSourceEntity(94U);
    msg.setDestination(48531U);
    msg.setDestinationEntity(217U);
    msg.validity = 101U;
    msg.x = 0.84960775667;
    msg.y = 0.689277524836;
    msg.z = 0.507565896547;

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
    msg.setTimeStamp(0.230071435679);
    msg.setSource(11529U);
    msg.setSourceEntity(218U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(0U);
    msg.validity = 223U;
    msg.x = 0.108407383092;
    msg.y = 0.697704351669;
    msg.z = 0.372281824716;

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
    msg.setTimeStamp(0.448038480569);
    msg.setSource(56082U);
    msg.setSourceEntity(11U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(94U);
    msg.time = 0.428089833355;
    msg.x = 0.539074941206;
    msg.y = 0.404239861824;
    msg.z = 0.500517597066;

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
    msg.setTimeStamp(0.313279409189);
    msg.setSource(36400U);
    msg.setSourceEntity(49U);
    msg.setDestination(8252U);
    msg.setDestinationEntity(17U);
    msg.time = 0.108714481283;
    msg.x = 0.800584425203;
    msg.y = 0.896562379713;
    msg.z = 0.667207226391;

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
    msg.setTimeStamp(0.0599015123967);
    msg.setSource(28096U);
    msg.setSourceEntity(178U);
    msg.setDestination(3415U);
    msg.setDestinationEntity(103U);
    msg.time = 0.183114697084;
    msg.x = 0.652195759813;
    msg.y = 0.758140745087;
    msg.z = 0.75386159203;

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
    msg.setTimeStamp(0.375009847998);
    msg.setSource(43974U);
    msg.setSourceEntity(66U);
    msg.setDestination(44591U);
    msg.setDestinationEntity(166U);
    msg.validity = 155U;
    msg.value = 0.450923842376;

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
    msg.setTimeStamp(0.257148051217);
    msg.setSource(21681U);
    msg.setSourceEntity(249U);
    msg.setDestination(61459U);
    msg.setDestinationEntity(229U);
    msg.validity = 245U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.299585666842;
    tmp_msg_0.beam_height = 0.999561485363;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0485963850473;

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
    msg.setTimeStamp(0.288189467253);
    msg.setSource(26818U);
    msg.setSourceEntity(122U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(21U);
    msg.validity = 243U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0418807885193;
    tmp_msg_0.beam_height = 0.362387337577;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.270882314302;

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
    msg.setTimeStamp(0.628283198982);
    msg.setSource(54206U);
    msg.setSourceEntity(56U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(79U);
    msg.value = 0.168326226455;

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
    msg.setTimeStamp(0.734969564766);
    msg.setSource(48769U);
    msg.setSourceEntity(109U);
    msg.setDestination(57U);
    msg.setDestinationEntity(116U);
    msg.value = 0.0929057800443;

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
    msg.setTimeStamp(0.996177456433);
    msg.setSource(44920U);
    msg.setSourceEntity(128U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(222U);
    msg.value = 0.970653334975;

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
    msg.setTimeStamp(0.781227276317);
    msg.setSource(60002U);
    msg.setSourceEntity(238U);
    msg.setDestination(24157U);
    msg.setDestinationEntity(194U);
    msg.value = 0.538468368513;

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
    msg.setTimeStamp(0.019442816357);
    msg.setSource(48586U);
    msg.setSourceEntity(225U);
    msg.setDestination(32559U);
    msg.setDestinationEntity(192U);
    msg.value = 0.822246701879;

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
    msg.setTimeStamp(0.167088454242);
    msg.setSource(57580U);
    msg.setSourceEntity(148U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(208U);
    msg.value = 0.323668590942;

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
    msg.setTimeStamp(0.547449290771);
    msg.setSource(24717U);
    msg.setSourceEntity(68U);
    msg.setDestination(12777U);
    msg.setDestinationEntity(42U);
    msg.value = 0.662491961558;

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
    msg.setTimeStamp(0.635747190343);
    msg.setSource(26090U);
    msg.setSourceEntity(250U);
    msg.setDestination(21239U);
    msg.setDestinationEntity(39U);
    msg.value = 0.200897918342;

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
    msg.setTimeStamp(0.637396876138);
    msg.setSource(52770U);
    msg.setSourceEntity(229U);
    msg.setDestination(25550U);
    msg.setDestinationEntity(231U);
    msg.value = 0.747084125313;

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
    msg.setTimeStamp(0.396455536607);
    msg.setSource(7154U);
    msg.setSourceEntity(169U);
    msg.setDestination(29820U);
    msg.setDestinationEntity(131U);
    msg.value = 0.280602971047;

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
    msg.setTimeStamp(0.276570831516);
    msg.setSource(5851U);
    msg.setSourceEntity(154U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(202U);
    msg.value = 0.809111198415;

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
    msg.setTimeStamp(0.437395966085);
    msg.setSource(4568U);
    msg.setSourceEntity(3U);
    msg.setDestination(8000U);
    msg.setDestinationEntity(126U);
    msg.value = 0.716135419365;

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
    msg.setTimeStamp(0.121301862993);
    msg.setSource(14486U);
    msg.setSourceEntity(5U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(233U);
    msg.value = 0.108717108259;

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
    msg.setTimeStamp(0.045368625067);
    msg.setSource(36578U);
    msg.setSourceEntity(154U);
    msg.setDestination(54273U);
    msg.setDestinationEntity(218U);
    msg.value = 0.835122066733;

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
    msg.setTimeStamp(0.909319130262);
    msg.setSource(32399U);
    msg.setSourceEntity(148U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0328466102917;

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
    msg.setTimeStamp(0.839783472688);
    msg.setSource(11908U);
    msg.setSourceEntity(214U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(123U);
    msg.value = 0.981232364499;

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
    msg.setTimeStamp(0.833413232089);
    msg.setSource(55896U);
    msg.setSourceEntity(52U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(153U);
    msg.value = 0.815488633076;

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
    msg.setTimeStamp(0.765635944163);
    msg.setSource(13739U);
    msg.setSourceEntity(176U);
    msg.setDestination(43243U);
    msg.setDestinationEntity(0U);
    msg.value = 0.27386933486;

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
    msg.setTimeStamp(0.683353963089);
    msg.setSource(50439U);
    msg.setSourceEntity(1U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(56U);
    msg.value = 0.920031113171;

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
    msg.setTimeStamp(0.19430227769);
    msg.setSource(1469U);
    msg.setSourceEntity(180U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0236393738231;

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
    msg.setTimeStamp(0.723619773378);
    msg.setSource(48874U);
    msg.setSourceEntity(232U);
    msg.setDestination(29889U);
    msg.setDestinationEntity(74U);
    msg.value = 0.214662502485;

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
    msg.setTimeStamp(0.120174753612);
    msg.setSource(38179U);
    msg.setSourceEntity(212U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(135U);
    msg.value = 0.568599843567;

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
    msg.setTimeStamp(0.159434425733);
    msg.setSource(53668U);
    msg.setSourceEntity(117U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(202U);
    msg.value = 0.913221608958;

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
    msg.setTimeStamp(0.359967255924);
    msg.setSource(37785U);
    msg.setSourceEntity(104U);
    msg.setDestination(47599U);
    msg.setDestinationEntity(144U);
    msg.value = 0.967385672866;

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
    msg.setTimeStamp(0.0805356459767);
    msg.setSource(12016U);
    msg.setSourceEntity(94U);
    msg.setDestination(53672U);
    msg.setDestinationEntity(199U);
    msg.direction = 0.138562977654;
    msg.speed = 0.953326026866;

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
    msg.setTimeStamp(0.94824502739);
    msg.setSource(58730U);
    msg.setSourceEntity(69U);
    msg.setDestination(57191U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.377023236217;
    msg.speed = 0.933148818726;

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
    msg.setTimeStamp(0.767704278053);
    msg.setSource(50519U);
    msg.setSourceEntity(42U);
    msg.setDestination(38899U);
    msg.setDestinationEntity(198U);
    msg.direction = 0.0663818438871;
    msg.speed = 0.866522933405;

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
    msg.setTimeStamp(0.60625504268);
    msg.setSource(16841U);
    msg.setSourceEntity(211U);
    msg.setDestination(33671U);
    msg.setDestinationEntity(175U);
    msg.value = 0.701223407774;

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
    msg.setTimeStamp(0.00752371625912);
    msg.setSource(5354U);
    msg.setSourceEntity(93U);
    msg.setDestination(60910U);
    msg.setDestinationEntity(170U);
    msg.value = 0.205517207123;

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
    msg.setTimeStamp(0.691911598858);
    msg.setSource(9326U);
    msg.setSourceEntity(147U);
    msg.setDestination(19520U);
    msg.setDestinationEntity(166U);
    msg.value = 0.438490233766;

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
    msg.setTimeStamp(0.673804086454);
    msg.setSource(14593U);
    msg.setSourceEntity(146U);
    msg.setDestination(30812U);
    msg.setDestinationEntity(108U);
    msg.value.assign("EXDSWPMYLDNITKJGEMMWHAJHXMMIVMHHVBCGTWKPZUHBGLHFVWRSQRXZNWXSKDNAEAXOFLNEIJQWLYCYTKAUUIGZIHRVGUSPNUVDKNLFOXJRAQURYMQSEJOOWQ");

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
    msg.setTimeStamp(0.219686163242);
    msg.setSource(17274U);
    msg.setSourceEntity(3U);
    msg.setDestination(56824U);
    msg.setDestinationEntity(0U);
    msg.value.assign("AGIFLMRLXRAAVXDNGZQYVKWWWJNBIYNYLBFWBJRZORMJCRWDSFYONWPAQOCABSEPJJXHSOXRXUQGWFWLOMTEVWYXFCVYUTNSDCZPNJEYGVTLQBMIISHOERINYUZACTZKEDSVGEFIEQB");

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
    msg.setTimeStamp(0.920940524913);
    msg.setSource(28506U);
    msg.setSourceEntity(10U);
    msg.setDestination(5023U);
    msg.setDestinationEntity(173U);
    msg.value.assign("XBQUYEFYYUPFHPMTQPEWWUMATKEKLLTRJYJNNDJPHJAGWLCDFPTCMKYVPGADVQBUJDYRRTPFFZXIHXLOHNYGSUHOAPBZXMKQHCZRNFJIASFQXSVSMWDYBBNWIRSNUZQEEBNCTQDIXBCAFEVOSHOTVNMXMRXGSKYVCIADHXWOQTGZBLIDVWZNOZSGHFU");

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
    msg.setTimeStamp(0.371680394766);
    msg.setSource(43371U);
    msg.setSourceEntity(59U);
    msg.setDestination(42290U);
    msg.setDestinationEntity(173U);
    const char tmp_msg_0[] = {56, 13, 55, 76, 105, -53, 55, -46, 28, 45, 118, 33, 63, 115, -25, -79, 54, -87, -48, 86, -19, 100, 4, -42, 98, -50, 13, 49, 82, -29, 78, -80, -81, 53, -120, -96, 40, -76, 15, 16, -71, 24, -89, 52, 68, 30, 112, -78, -57, -119, 100, 80, 75, 81, 97, -35, 122, 75, 68, 48, 86, 5, 18, 69, -112, -111, -79, -49, 66, 71, 68, -14, 82, -58, 53, -99, 61};
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
    msg.setTimeStamp(0.165618985211);
    msg.setSource(62813U);
    msg.setSourceEntity(54U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(50U);
    const char tmp_msg_0[] = {96, 64, 62, -97, -126, 115, 25, -95, -44, -47, 32, 47, 91, -56, -15, 113, -113, 95, 126, -113, -25, 54, -65, -87, -106, -56, -64, 60, -64, 35, 43, -67, -21, -39, -104, 92, 15, -45, 64, 99, 73, -12, -23, -94, -8, 44, -34, -120, 115, 39, 32, -14, -58, 106, -84, -118, -83, -52, -31, 104, 75, -7, 85, 77, 56, 16, -114, 97, 29, -59, 116, 44, 114, -65, 100, -85, -94, 116, -20, -94, 76, -54, 99, -33, 53, 60, -45, 73, -52, 19, 12, -4, -113, -45, 115, -31, 35, -36, 73, 12, -49, 78, -115, -45, 50, -120, -73, -80, -63, -59, 87, -113, 109, -29, 52, -113, 115, 125, 3, 118, 108, -60, 6, 87, -57, -68, 111, 38, -57, -28, 55, -81, -16, -48, -43};
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
    msg.setTimeStamp(0.433985465431);
    msg.setSource(163U);
    msg.setSourceEntity(61U);
    msg.setDestination(25676U);
    msg.setDestinationEntity(52U);
    const char tmp_msg_0[] = {-88, -107, 54, -24, -35, -13, -31, 81, 46, 57, -16, -18, -37, -95, -7, -55, -40, -87, -70, -81, 89, -120, -45, -44, -29, -42, -89, -122, -39, 76, 8, 122, 125, -81, -11, 71, 57, -80, 65, 92, -122, 12, 114, -21, -110, 71, 79, 69, -109, -59, -70, -92, 34, -85, -69, -96, -22, 100, -64, -65, -86, 42, -112, 6, -123, -37, -75, -44, -46, 57};
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
    msg.setTimeStamp(0.848914719748);
    msg.setSource(41017U);
    msg.setSourceEntity(181U);
    msg.setDestination(40182U);
    msg.setDestinationEntity(252U);
    msg.frequency = 344298755U;
    msg.min_range = 15663U;
    msg.max_range = 15081U;

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
    msg.setTimeStamp(0.368868834297);
    msg.setSource(5463U);
    msg.setSourceEntity(116U);
    msg.setDestination(18128U);
    msg.setDestinationEntity(50U);
    msg.frequency = 673887884U;
    msg.min_range = 36311U;
    msg.max_range = 39371U;

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
    msg.setTimeStamp(0.781049886296);
    msg.setSource(64699U);
    msg.setSourceEntity(3U);
    msg.setDestination(59786U);
    msg.setDestinationEntity(70U);
    msg.frequency = 1700112464U;
    msg.min_range = 19228U;
    msg.max_range = 28072U;

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
    msg.setTimeStamp(0.906166763381);
    msg.setSource(49561U);
    msg.setSourceEntity(36U);
    msg.setDestination(21089U);
    msg.setDestinationEntity(170U);
    msg.type = 69U;
    msg.frequency = 3089617664U;
    msg.min_range = 29687U;
    msg.max_range = 34938U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.0996168521465;
    const char tmp_msg_0[] = {98, 116, 29, 66, -61, 84, 46, -36, -9, 4, -91, -47, 124, 18, 87, 40, -43, -105, -119, 35, -5, -25, -97, -58, 96, -87, -56, 115, -19, -107, -50, -87, -15, 62, -82, 100, -121, -26, 83, 4, -2, -105, 125, -113, 110, 122, 95, -15, 32, 118, -57, -15, 64, 61, 52, -21, -50, 20, 67, -13, 21, 11, 34, 48, 105, -96, 119, -118, -43, 126, 53, -98, -113, -8, 51, -5, 28, 67, 77, -1, 92, -87, -37, -95, -44, -56, 103, -26, -49, 89, 117, 81, 105, 46, 28, 19, -1, -97, -109, 29, -51, -32, -4, 41, 51, -109, 37, 96, -99, -43, 41, 7, 10, 37, 33, -112};
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
    msg.setTimeStamp(0.501064704454);
    msg.setSource(956U);
    msg.setSourceEntity(145U);
    msg.setDestination(21737U);
    msg.setDestinationEntity(55U);
    msg.type = 220U;
    msg.frequency = 1026081456U;
    msg.min_range = 17730U;
    msg.max_range = 44794U;
    msg.bits_per_point = 128U;
    msg.scale_factor = 0.497938456139;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.819720333154;
    tmp_msg_0.beam_height = 0.392331293309;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {94, 81, -51, -10, -87, 75, -127, 108, -99, -11, 101, -55, 26, -98, 55, 108, 94, -99, -110, -41, -52, -47, -53, 53, 34, -89, -11, 94, 11, 34, -23, -65, -7, 0, -56, -26, -70, 98, -104, -70, -31, -115, -122, 121, -69, -120, 5, -14, 7, -11, -109, -22, -28, -62, -22, -62, 81, 41, 100, 75, -24, -63, -3, -103, -22, -34, -84, 73, 90, -113, -110, -74, 103, -26, -29, -11, -87, 92, 99, 124, 101, -50, 10, -31, -123, -80, -53, 5, -66, 72, 59, -45, 18, -92, 11, 102, -115, -114, 5, 60, 46, -124, 57, -87, -21, 71, 99, 4, -41, -53, 33, -94, -17, -52, -91, -75, 49, -58, 89, -98, 52, 10, 43, -56, 118, -107, -127, 118, -116, 117, 40, 36, 65, 73, -41, 79, 68, 40, -13, 44, 53, -48, -108, -46, 47, -29, -78, 90, 89, 29, -14, 55, 13, 21, 25, -62, 51, -97, -29, 75, -20, -108, 11, -93, 41, 7, 17, 122, -74, 52, 78, -88, 124, 30, 105, -8, 31, -65, -61, -9, 111, -106, -117, -26, 89, -104, -10, -72, 108, 31, 15, -72, 114, 89, -98, 22, -54, 81, -6, -123, -53, -88, -87, -81, -121, -56, 77, 86, -38, -19, 111, -103, -74, -5, -56, -44, -92, 64, -7};
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
    msg.setTimeStamp(0.942679891119);
    msg.setSource(13188U);
    msg.setSourceEntity(5U);
    msg.setDestination(28208U);
    msg.setDestinationEntity(118U);
    msg.type = 240U;
    msg.frequency = 1942703686U;
    msg.min_range = 59561U;
    msg.max_range = 14698U;
    msg.bits_per_point = 193U;
    msg.scale_factor = 0.661272094087;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.185609051319;
    tmp_msg_0.beam_height = 0.0989845296751;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-112, 69, -104, 75, -20, 12, -34, 24, 32, -24, -76, 77, 47, 89, -97, 77, 78, 21, -23, 126, 9, -61, -45, 16, 47, 83, 84, -88, 32, 75, -51, 1, -112, -33, 55, 67, -59, -115, -71, -45, 15, 44, -81, 109, -26, -63, 92, -100, -34, 46, -112, -108, 112, 2, -34, -119, 78, -56, 89, 109, -52, 113, 83, -14, -22, -1, 81, 97, 19, 52, -45, -128, 56, 14, 126, 11, 25, 38, 115, -53, 84, 115, -50, -55, 17, 2, 54, -127, -103, 38, -45, -120, 22, -86, -26, 97, 87, 120, -70, -31, -5, 110, -48, -61, 112, 96, 14, 124, -24, 107, 59, -78, 6, -27, 50, 119, 11, -103, -85, 101, 65, 75, 31, -43, -80, 1, 54, 22, -61, 62};
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
    msg.setTimeStamp(0.559662961262);
    msg.setSource(32158U);
    msg.setSourceEntity(150U);
    msg.setDestination(36332U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.117049056644);
    msg.setSource(52699U);
    msg.setSourceEntity(130U);
    msg.setDestination(56005U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.445174911326);
    msg.setSource(12826U);
    msg.setSourceEntity(8U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.181981630986);
    msg.setSource(27480U);
    msg.setSourceEntity(149U);
    msg.setDestination(138U);
    msg.setDestinationEntity(110U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.0872380889245);
    msg.setSource(48658U);
    msg.setSourceEntity(246U);
    msg.setDestination(11380U);
    msg.setDestinationEntity(198U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.0683556625795);
    msg.setSource(40236U);
    msg.setSourceEntity(90U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(13U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.756574276727);
    msg.setSource(1849U);
    msg.setSourceEntity(11U);
    msg.setDestination(17085U);
    msg.setDestinationEntity(30U);
    msg.value = 0.867522559827;
    msg.confidence = 0.524803272539;
    msg.opmodes.assign("UJPYGSSIXXSWOKZYAGHQNMMFRXLVKFWVAQPFDIJIJTRUCAEVHUAJOMTPKPYIFAIWJHKVTMFFLEPZYVLZKMGPHMQNLDHNEIUDFSGXXFEKGZXFWZUALWSTYLOBCQLUQDDNYRGAUO");

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
    msg.setTimeStamp(0.054394058443);
    msg.setSource(27669U);
    msg.setSourceEntity(184U);
    msg.setDestination(59603U);
    msg.setDestinationEntity(54U);
    msg.value = 0.268359023614;
    msg.confidence = 0.513681830466;
    msg.opmodes.assign("LWTTVFPUEQBSCMJTNMVRDUXCGALDJELUKVDASCBJIMGV");

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
    msg.setTimeStamp(0.456086569185);
    msg.setSource(10573U);
    msg.setSourceEntity(166U);
    msg.setDestination(40535U);
    msg.setDestinationEntity(151U);
    msg.value = 0.413101677274;
    msg.confidence = 0.761580159041;
    msg.opmodes.assign("SCIBQMWMOTKYBUOFXOZSOIAGFHJKZQGOPJDUUVTOPVPAGMBSHNTRJHANRFLGIASKUBEVVCPDTOYQUCLQBSGMTNXCDUXRYARZDFTAWPMDDEPYVEZHZUMKWZXQQVTATRRNCLSWXKCZYHPQWGUSTHLJCYPHFNVOZHI");

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
    msg.setTimeStamp(0.687859741638);
    msg.setSource(30894U);
    msg.setSourceEntity(57U);
    msg.setDestination(11686U);
    msg.setDestinationEntity(227U);
    msg.itow = 605764087U;
    msg.lat = 0.708553002859;
    msg.lon = 0.485045777102;
    msg.height_ell = 0.326880559317;
    msg.height_sea = 0.527253097501;
    msg.hacc = 0.578929219303;
    msg.vacc = 0.415452020082;
    msg.vel_n = 0.724083926234;
    msg.vel_e = 0.00532640562036;
    msg.vel_d = 0.213340109034;
    msg.speed = 0.851694729148;
    msg.gspeed = 0.542736731812;
    msg.heading = 0.916499227784;
    msg.sacc = 0.0429105969144;
    msg.cacc = 0.744647972412;

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
    msg.setTimeStamp(0.582483895295);
    msg.setSource(58371U);
    msg.setSourceEntity(135U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(21U);
    msg.itow = 3912987269U;
    msg.lat = 0.451822885426;
    msg.lon = 0.831482989323;
    msg.height_ell = 0.350833380083;
    msg.height_sea = 0.292987233861;
    msg.hacc = 0.507488089884;
    msg.vacc = 0.529463532663;
    msg.vel_n = 0.0130316349583;
    msg.vel_e = 0.320943821472;
    msg.vel_d = 0.323385458572;
    msg.speed = 0.0482958887651;
    msg.gspeed = 0.865094171764;
    msg.heading = 0.504800676822;
    msg.sacc = 0.751726942753;
    msg.cacc = 0.599158674708;

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
    msg.setTimeStamp(0.259253467399);
    msg.setSource(40104U);
    msg.setSourceEntity(42U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(13U);
    msg.itow = 3097849341U;
    msg.lat = 0.975283910639;
    msg.lon = 0.383568876094;
    msg.height_ell = 0.371910401542;
    msg.height_sea = 0.561688113486;
    msg.hacc = 0.206274806225;
    msg.vacc = 0.61050245776;
    msg.vel_n = 0.0530505070935;
    msg.vel_e = 0.816069509287;
    msg.vel_d = 0.287628987478;
    msg.speed = 0.331915244089;
    msg.gspeed = 0.880181717287;
    msg.heading = 0.244316289731;
    msg.sacc = 0.108041687161;
    msg.cacc = 0.579018409547;

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
    msg.setTimeStamp(0.66430820626);
    msg.setSource(23684U);
    msg.setSourceEntity(100U);
    msg.setDestination(61137U);
    msg.setDestinationEntity(206U);
    msg.id = 87U;
    msg.value = 0.341314906485;

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
    msg.setTimeStamp(0.301253563765);
    msg.setSource(56936U);
    msg.setSourceEntity(35U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(154U);
    msg.id = 120U;
    msg.value = 0.910228432617;

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
    msg.setTimeStamp(0.993649512732);
    msg.setSource(38474U);
    msg.setSourceEntity(16U);
    msg.setDestination(8503U);
    msg.setDestinationEntity(121U);
    msg.id = 108U;
    msg.value = 0.0265297652074;

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
    msg.setTimeStamp(0.805475521255);
    msg.setSource(41310U);
    msg.setSourceEntity(36U);
    msg.setDestination(52014U);
    msg.setDestinationEntity(209U);
    msg.x = 0.219632905462;
    msg.y = 0.949732616292;
    msg.z = 0.5183033924;
    msg.phi = 0.437150305146;
    msg.theta = 0.57609802326;
    msg.psi = 0.0978079356013;

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
    msg.setTimeStamp(0.466522981083);
    msg.setSource(24688U);
    msg.setSourceEntity(157U);
    msg.setDestination(63477U);
    msg.setDestinationEntity(102U);
    msg.x = 0.374229583559;
    msg.y = 0.440162234574;
    msg.z = 0.380367063799;
    msg.phi = 0.103413042057;
    msg.theta = 0.997132796556;
    msg.psi = 0.537582745842;

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
    msg.setTimeStamp(0.632406300503);
    msg.setSource(40056U);
    msg.setSourceEntity(246U);
    msg.setDestination(15345U);
    msg.setDestinationEntity(90U);
    msg.x = 0.967931359998;
    msg.y = 0.936261322522;
    msg.z = 0.437295780571;
    msg.phi = 0.107913521173;
    msg.theta = 0.353194318691;
    msg.psi = 0.367479953865;

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
    msg.setTimeStamp(0.75137556686);
    msg.setSource(18598U);
    msg.setSourceEntity(194U);
    msg.setDestination(12489U);
    msg.setDestinationEntity(53U);
    msg.beam_width = 0.536857238591;
    msg.beam_height = 0.0176392410245;

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
    msg.setTimeStamp(0.567869022403);
    msg.setSource(30753U);
    msg.setSourceEntity(151U);
    msg.setDestination(29620U);
    msg.setDestinationEntity(120U);
    msg.beam_width = 0.801184332395;
    msg.beam_height = 0.822560997942;

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
    msg.setTimeStamp(0.914584590564);
    msg.setSource(17400U);
    msg.setSourceEntity(223U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.304662195538;
    msg.beam_height = 0.553401632041;

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
    msg.setTimeStamp(0.554953295544);
    msg.setSource(27827U);
    msg.setSourceEntity(86U);
    msg.setDestination(36094U);
    msg.setDestinationEntity(39U);
    msg.sane = 183U;

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
    msg.setTimeStamp(0.20188895452);
    msg.setSource(39796U);
    msg.setSourceEntity(114U);
    msg.setDestination(51510U);
    msg.setDestinationEntity(80U);
    msg.sane = 8U;

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
    msg.setTimeStamp(0.211591008729);
    msg.setSource(26942U);
    msg.setSourceEntity(1U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(224U);
    msg.sane = 104U;

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
    msg.setTimeStamp(0.404424170843);
    msg.setSource(32067U);
    msg.setSourceEntity(250U);
    msg.setDestination(19035U);
    msg.setDestinationEntity(9U);
    msg.id = 90U;
    msg.zoom = 131U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.977324438679);
    msg.setSource(32368U);
    msg.setSourceEntity(30U);
    msg.setDestination(20858U);
    msg.setDestinationEntity(50U);
    msg.id = 89U;
    msg.zoom = 175U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.163585520216);
    msg.setSource(56822U);
    msg.setSourceEntity(27U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(15U);
    msg.id = 165U;
    msg.zoom = 166U;
    msg.action = 178U;

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
    msg.setTimeStamp(0.478465234628);
    msg.setSource(14128U);
    msg.setSourceEntity(1U);
    msg.setDestination(50093U);
    msg.setDestinationEntity(95U);
    msg.id = 93U;
    msg.value = 0.640991816409;

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
    msg.setTimeStamp(0.56615327143);
    msg.setSource(8613U);
    msg.setSourceEntity(211U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(0U);
    msg.id = 215U;
    msg.value = 0.959518741021;

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
    msg.setTimeStamp(0.894676736123);
    msg.setSource(10477U);
    msg.setSourceEntity(91U);
    msg.setDestination(7773U);
    msg.setDestinationEntity(23U);
    msg.id = 146U;
    msg.value = 0.362247272526;

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
    msg.setTimeStamp(0.461500970291);
    msg.setSource(38853U);
    msg.setSourceEntity(35U);
    msg.setDestination(38801U);
    msg.setDestinationEntity(29U);
    msg.id = 34U;
    msg.value = 0.492079702004;

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
    msg.setTimeStamp(0.719111062561);
    msg.setSource(31401U);
    msg.setSourceEntity(212U);
    msg.setDestination(13267U);
    msg.setDestinationEntity(117U);
    msg.id = 128U;
    msg.value = 0.697427744364;

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
    msg.setTimeStamp(0.564644314204);
    msg.setSource(16927U);
    msg.setSourceEntity(81U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(64U);
    msg.id = 212U;
    msg.value = 0.851073424997;

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
    msg.setTimeStamp(0.794017276998);
    msg.setSource(51757U);
    msg.setSourceEntity(61U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(182U);
    msg.id = 160U;
    msg.angle = 0.900446066977;

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
    msg.setTimeStamp(0.015735018782);
    msg.setSource(9650U);
    msg.setSourceEntity(36U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(183U);
    msg.id = 202U;
    msg.angle = 0.689360896924;

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
    msg.setTimeStamp(0.145140273904);
    msg.setSource(46102U);
    msg.setSourceEntity(74U);
    msg.setDestination(29049U);
    msg.setDestinationEntity(52U);
    msg.id = 232U;
    msg.angle = 0.94908343119;

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
    msg.setTimeStamp(0.00544186012589);
    msg.setSource(16327U);
    msg.setSourceEntity(218U);
    msg.setDestination(56296U);
    msg.setDestinationEntity(160U);
    msg.op = 224U;
    msg.actions.assign("BGDBBMASYIPKTZPTITAWXSMWIMVXVHCDAZJMGQNFJPTLFWRURJOQWVRCDPXEOHXKXUSZWFOTABXDGNXPGEIGWMNCPBGMZVEKYJMXMWCJKVRHOJJQSFVAISBFNLNUOIQCZDRYLEGKBQ");

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
    msg.setTimeStamp(0.790375304506);
    msg.setSource(24769U);
    msg.setSourceEntity(74U);
    msg.setDestination(61546U);
    msg.setDestinationEntity(246U);
    msg.op = 105U;
    msg.actions.assign("TMDBKJCILNVNPIKYUTXVOXHZZKQHQDREAJVJKYHATILSUHPMBODWZQZIMRDRJYLXSREEYEGKPIEHFWWGIVFTQSMRHWPZOOCYDJKJPXROFANYGNGRZMUACPGKWL");

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
    msg.setTimeStamp(0.778949731497);
    msg.setSource(13369U);
    msg.setSourceEntity(176U);
    msg.setDestination(6536U);
    msg.setDestinationEntity(83U);
    msg.op = 192U;
    msg.actions.assign("ZYKVWOZEVMJCUDZSLGWUNVGINAAQQLLFEFRSGYFQOUQPMTUDNIGDGL");

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
    msg.setTimeStamp(0.442756497626);
    msg.setSource(61651U);
    msg.setSourceEntity(240U);
    msg.setDestination(27555U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("NSXJGNMUWUBLWZALHRACGZOCJHMTRYYOYOLHQSPAVQJRAIPARMDILFYIZADLDPGMCVEVJPNDOQCWBFETTIVTLFJSILFWXVKSQZVGUNVGGSBQBXNPIDZTUBTKCUVP");

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
    msg.setTimeStamp(0.988449227817);
    msg.setSource(5623U);
    msg.setSourceEntity(68U);
    msg.setDestination(28619U);
    msg.setDestinationEntity(36U);
    msg.actions.assign("HKFPDSMRFGZLZVMZWDXEXZTETRIPVDUFRRTDJWOPPKYFSSYWMLETLYWUUMWXQHCVGFDTLNKVCFVAJTMCCQAJWBI");

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
    msg.setTimeStamp(0.598952233465);
    msg.setSource(19544U);
    msg.setSourceEntity(178U);
    msg.setDestination(43313U);
    msg.setDestinationEntity(198U);
    msg.actions.assign("QJKVGGEURBLEXUSDMXBKGWJFIPMKYJAXWOYCVRAUJNYYSUKZWSTEPDWAEAMXVVKLEBQKNANRQBLYFDYHXFDXMNHSCRNZJARGNFAEGZIBWTCCXTPQMIDGTMPQCFIJUUVSKDBQFDCIJPXRKDMXEJOOPRTTWO");

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
    msg.setTimeStamp(0.183082056501);
    msg.setSource(1012U);
    msg.setSourceEntity(20U);
    msg.setDestination(49615U);
    msg.setDestinationEntity(32U);
    msg.button = 125U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.897983341383);
    msg.setSource(22020U);
    msg.setSourceEntity(30U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(105U);
    msg.button = 230U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.359901393595);
    msg.setSource(1858U);
    msg.setSourceEntity(154U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(130U);
    msg.button = 222U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.138647375283);
    msg.setSource(30811U);
    msg.setSourceEntity(38U);
    msg.setDestination(25905U);
    msg.setDestinationEntity(111U);
    msg.op = 33U;
    msg.text.assign("RBDJLJIHEWTRSFBTVSCWAEKOIDYKJBUMVRNCXXINWKESGADOIFFYFJVENZMTKZAKZNGMSXYZHKXLPAWDGIT");

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
    msg.setTimeStamp(0.285731828562);
    msg.setSource(59505U);
    msg.setSourceEntity(72U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(127U);
    msg.op = 22U;
    msg.text.assign("FYOJBQFTCQOWHBQOFPSIGLAOWTKUUMAQXYCZGYXAHEBDXNUSLXFGRBWAPNUBYMGTNZJVJEEPUGRDLISAHLIZRKVCICOCENSBKWJOZPQLHMQVLBNSSGPFKXQMVWPAHKWFYMZSSGQKHTIAVVAZXYJIRTKTYKNAYEDPUJEOWDLRMZZBDUGDMJNKIMVFNXPIDEQAJZMVECXRWJIFTXNOVRFTNLVD");

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
    msg.setTimeStamp(0.880976764725);
    msg.setSource(51473U);
    msg.setSourceEntity(151U);
    msg.setDestination(38700U);
    msg.setDestinationEntity(137U);
    msg.op = 242U;
    msg.text.assign("XPPCMUIWQOHUOQCQOBIOTHBGPYYEUGDSDJHAJCJWSJMYNVUKALIRMELGKCZERZDDRXMRICYYFVQPPTMFVHHFHTBARNNWLYFTXTNGXGSHMKNPBLQHJLKIVTVRLWMKODMZRXOXNGBJVCUWVMBRSVDUOIDAGAFOQFKXHNGJPCCRJLCZLWZNQEDYOKUOWFMXPEEPAEWLYEQYTKFCYNEAWAXZZSZNVDGDHSSUEUKTIIXFKTLQIBFJAPTZUBGVJW");

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
    msg.setTimeStamp(0.0447374251614);
    msg.setSource(42447U);
    msg.setSourceEntity(161U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(17U);
    msg.op = 144U;
    msg.time_remain = 0.827319697752;
    msg.sched_time = 0.193856070526;

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
    msg.setTimeStamp(0.442464411068);
    msg.setSource(58077U);
    msg.setSourceEntity(199U);
    msg.setDestination(1619U);
    msg.setDestinationEntity(238U);
    msg.op = 148U;
    msg.time_remain = 0.434036182717;
    msg.sched_time = 0.47871100002;

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
    msg.setTimeStamp(0.563583051144);
    msg.setSource(1328U);
    msg.setSourceEntity(231U);
    msg.setDestination(17528U);
    msg.setDestinationEntity(251U);
    msg.op = 87U;
    msg.time_remain = 0.0988269715546;
    msg.sched_time = 0.00634649036685;

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
    msg.setTimeStamp(0.246727564583);
    msg.setSource(45546U);
    msg.setSourceEntity(21U);
    msg.setDestination(61763U);
    msg.setDestinationEntity(199U);
    msg.name.assign("IAZZOHZGDOFDR");
    msg.op = 144U;
    msg.sched_time = 0.623579235115;

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
    msg.setTimeStamp(0.650982139608);
    msg.setSource(32663U);
    msg.setSourceEntity(115U);
    msg.setDestination(30691U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JNWMHTBQSYMOZIVDMYRVACKKZDYPQBUGWSZUAYPJZLJFIVFLDXXVGTAEBXTXRROLECFZYXKWNJNJOZKEBQCOMFWCODHUQHVUUNNCZDMGQKCRILVDCYTILUOHHZYEBABHBGA");
    msg.op = 86U;
    msg.sched_time = 0.487959708937;

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
    msg.setTimeStamp(0.929275047575);
    msg.setSource(28229U);
    msg.setSourceEntity(63U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ERTDKYNGEIAJQLIQSNDLXNSNPDSZYNVUDRBIXWAJARNZPRFQMOZCUKQGRJKRBPOQHEGDOGBENCEDFBTMSAOCYKVLFZAPZKLZPIHVJJUHUZUPGDDGSBMOLSSITFVVMOYUNGUCCROCBWJGEAHTQKWGOUFTDVTCJXYWSINANLJIMCXCBGUFEQIXXWBPIYEWWHMKQAIXEHYHXKDSWQPRPQTKKLJABXMLFSOVVHXHF");
    msg.op = 203U;
    msg.sched_time = 0.166131587307;

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
    msg.setTimeStamp(0.128500375368);
    msg.setSource(38739U);
    msg.setSourceEntity(236U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.577359266998);
    msg.setSource(52376U);
    msg.setSourceEntity(89U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.581778298212);
    msg.setSource(3509U);
    msg.setSourceEntity(29U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.801138768697);
    msg.setSource(60012U);
    msg.setSourceEntity(194U);
    msg.setDestination(2093U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JTEFTLGDSVBXKYXQTZMGRFHDLRBKDCGDBFOAFTVBSXQBYCJRIIVEIYXMBPJVFPMHNESVSAUWZMJFVENIKTWQYNIGCHURHUEKONCS");
    msg.state = 21U;

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
    msg.setTimeStamp(0.0336650887873);
    msg.setSource(43696U);
    msg.setSourceEntity(91U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(44U);
    msg.name.assign("LMCORDRUZJPGEUAJAITDYWCDZBACEIUZDVMWBFUSXVCEPROMOOYJNLEXBKIVWQPGEDKZMEUYBBQVFINXSOPKGSRVVNNDLRSJTZKVOMPHIOUKVLKGIUCQFJPZMTWFOYYYLWTHCGHBLQEF");
    msg.state = 195U;

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
    msg.setTimeStamp(0.212020443343);
    msg.setSource(59755U);
    msg.setSourceEntity(162U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(172U);
    msg.name.assign("ZOWHPVFWISIDZXUOXIDZSBAPHCUZHIALLJJ");
    msg.state = 177U;

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
    msg.setTimeStamp(0.745995806083);
    msg.setSource(8459U);
    msg.setSourceEntity(222U);
    msg.setDestination(23146U);
    msg.setDestinationEntity(204U);
    msg.name.assign("EGEKINCUAQIFLVCWGOIVKUYKNWNDNZYPXIGEBPLGKEUZTRIEXGXWHSOURURBPMMEIPQDPWDODKOUJMSEPOYXVXYSDTYBFYSBCWIVEAFWDSITCZGPWJSAATHIQUYMQVTDLCPFSXZRVQBQOFCXHNIFOZYXDSRMAZYWBELLTHCJNBRJTGKKFMF");
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
    msg.setTimeStamp(0.929663642745);
    msg.setSource(8008U);
    msg.setSourceEntity(28U);
    msg.setDestination(30903U);
    msg.setDestinationEntity(68U);
    msg.name.assign("ZMGEEWGHWVFMARZPNFCUPCXQBJODCTECDYTZDYEZLPXATOWBJLKRNBNIRBGJARUFAFQKPTOJAIYBVEBIIYSQNJDVJ");
    msg.value = 117U;

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
    msg.setTimeStamp(0.0406726341145);
    msg.setSource(64218U);
    msg.setSourceEntity(230U);
    msg.setDestination(11142U);
    msg.setDestinationEntity(111U);
    msg.name.assign("RDKLXRTAGFHZNQIMFFPKWJBPOXNZPEGRSQHIZHNKCSXLYAKUDHSICSRXBNEVAQRWWVFSCEAEJMMYVTQRWFVDMUBHMTVZECJWDXYYGQENGGVMIOMQBPKB");
    msg.value = 84U;

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
    msg.setTimeStamp(0.675434202064);
    msg.setSource(9117U);
    msg.setSourceEntity(116U);
    msg.setDestination(51928U);
    msg.setDestinationEntity(132U);
    msg.name.assign("CXRMBXOGVZGKBMTGIBQLNDQZROESWRDKKAQGAXRSNTNNQDKMGZAYZDACEGHLGKFLLOXHPDSSHVFPCQXPELRESDPTUYWTBFEUNTPRNJUFYOCUEBCTZMBTXJVWOLVPLOKYJATYUPCYZSUYFMHLQPCBVVMUEABJDSWCGPHDTVZJIJFMORAGMHFZDJBQTQSWXHLZYUZ");

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
    msg.setTimeStamp(0.926305072165);
    msg.setSource(42774U);
    msg.setSourceEntity(2U);
    msg.setDestination(12218U);
    msg.setDestinationEntity(121U);
    msg.name.assign("JQXBELIMLNJCFHQHYVLDVKYZKODZ");

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
    msg.setTimeStamp(0.565439422378);
    msg.setSource(7923U);
    msg.setSourceEntity(156U);
    msg.setDestination(49444U);
    msg.setDestinationEntity(14U);
    msg.name.assign("XVKIBNLXHDLSHYYDDFHWMKYBBLVRVYUQXLPACOMNGFNUMNMBOBUUTYPRXNHUWWNXGJZBDQCATLNNPYWQOPDKALVCYNFVJMPQUFKWXVIRBQSICPTGSACCVXOORATXJERDGTFRGWGZMHODCSEAHCZGPTIJKFDFANIZOJGEDJIHBAERA");

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
    msg.setTimeStamp(0.297287786692);
    msg.setSource(36595U);
    msg.setSourceEntity(162U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(71U);
    msg.name.assign("DPFHWFJVXIKSSKDCGIKTYZGWQCRUGSNNGKBMSOXVVBMJMZGEJFWIQCAHMCXZWZCHKZMAOFUVNYIGRELJHORAQBNJYQGBHXKWODLRZNSGAMISKUUZFHNXOPGLYUWILJYTLSKLYOYPCWMRSRTDBHMDLXBIHFCWDBKZRULIAFOXVFSDYLJWQTTYRKEPDVLJEMTCUP");
    msg.value = 153U;

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
    msg.setTimeStamp(0.42458624983);
    msg.setSource(55295U);
    msg.setSourceEntity(149U);
    msg.setDestination(46029U);
    msg.setDestinationEntity(164U);
    msg.name.assign("DDYTBYLBDGXWOXULJKMAKHJVJCENSXQWZDNZZTFXBIQJAIJJCDTAIKXZJBJNPUEJUNFLTDHASGRZXNXMFKOESGQGHRLUAFYUMDTCOJSFXEHANOQPSOLRLHHUDVWUSLQFYLYPTCWMFXLWYTQATBKURZDKYERLOSEBHIWOFOVHPIEMSUTCVPYVCDIOGHNKGIYMUEWRMATCMHIABGN");
    msg.value = 253U;

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
    msg.setTimeStamp(0.798310111551);
    msg.setSource(29616U);
    msg.setSourceEntity(80U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(209U);
    msg.name.assign("VQWIKTSPXFLOXKUIMNAWHHYPYMRSUVOPOZWZFIHMXBEWFIJSWOXBNYINYLXBXOGIAMOGQLGGCRLQZTPSUZCY");
    msg.value = 40U;

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
    msg.setTimeStamp(0.186389478205);
    msg.setSource(22819U);
    msg.setSourceEntity(159U);
    msg.setDestination(47743U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.0749608056903;
    msg.lon = 0.218380303338;
    msg.height = 0.514087678287;
    msg.x = 0.918315401547;
    msg.y = 0.564260663826;
    msg.z = 0.148993166463;
    msg.phi = 0.0839467041638;
    msg.theta = 0.810500454602;
    msg.psi = 0.578182536139;
    msg.u = 0.138832111744;
    msg.v = 0.637641535785;
    msg.w = 0.0740671804623;
    msg.vx = 0.129293129451;
    msg.vy = 0.877082388359;
    msg.vz = 0.569283246586;
    msg.p = 0.989163179634;
    msg.q = 0.431004473112;
    msg.r = 0.93314660937;
    msg.depth = 0.677058081017;
    msg.alt = 0.978500992818;

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
    msg.setTimeStamp(0.449364166796);
    msg.setSource(54695U);
    msg.setSourceEntity(237U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.861531464556;
    msg.lon = 0.384186052617;
    msg.height = 0.1237525165;
    msg.x = 0.595563089802;
    msg.y = 0.804558914066;
    msg.z = 0.914996759553;
    msg.phi = 0.459327549601;
    msg.theta = 0.879457941463;
    msg.psi = 0.563797712872;
    msg.u = 0.0995266022501;
    msg.v = 0.943511915544;
    msg.w = 0.829034245281;
    msg.vx = 0.0410509735962;
    msg.vy = 0.394923595096;
    msg.vz = 0.672087517455;
    msg.p = 0.581122368987;
    msg.q = 0.498275540802;
    msg.r = 0.702767882867;
    msg.depth = 0.668252896312;
    msg.alt = 0.340119105733;

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
    msg.setTimeStamp(0.345813873484);
    msg.setSource(12496U);
    msg.setSourceEntity(131U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.348774440858;
    msg.lon = 0.781234649386;
    msg.height = 0.203346265818;
    msg.x = 0.304554964721;
    msg.y = 0.00503294404533;
    msg.z = 0.166784782331;
    msg.phi = 0.242877330523;
    msg.theta = 0.509575405657;
    msg.psi = 0.262178964127;
    msg.u = 0.626956129139;
    msg.v = 0.752157829754;
    msg.w = 0.458996609079;
    msg.vx = 0.894144306935;
    msg.vy = 0.473029854572;
    msg.vz = 0.908861694602;
    msg.p = 0.405166534668;
    msg.q = 0.147720352488;
    msg.r = 0.575614503247;
    msg.depth = 0.872817141139;
    msg.alt = 0.071452700682;

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
    msg.setTimeStamp(0.0874066380867);
    msg.setSource(2944U);
    msg.setSourceEntity(220U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(84U);
    msg.x = 0.762665588546;
    msg.y = 0.133757987538;
    msg.z = 0.0936092153014;

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
    msg.setTimeStamp(0.174436321577);
    msg.setSource(41140U);
    msg.setSourceEntity(176U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(219U);
    msg.x = 0.945385889851;
    msg.y = 0.796710147935;
    msg.z = 0.21186288337;

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
    msg.setTimeStamp(0.94962576106);
    msg.setSource(26288U);
    msg.setSourceEntity(103U);
    msg.setDestination(50209U);
    msg.setDestinationEntity(74U);
    msg.x = 0.122296267539;
    msg.y = 0.766143639939;
    msg.z = 0.0142049619074;

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
    msg.setTimeStamp(0.379731920416);
    msg.setSource(63810U);
    msg.setSourceEntity(37U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(245U);
    msg.value = 0.429053542612;

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
    msg.setTimeStamp(0.578389863061);
    msg.setSource(36571U);
    msg.setSourceEntity(183U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0084733432767;

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
    msg.setTimeStamp(0.793133174506);
    msg.setSource(46322U);
    msg.setSourceEntity(34U);
    msg.setDestination(129U);
    msg.setDestinationEntity(96U);
    msg.value = 0.138134238912;

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
    msg.setTimeStamp(0.705717970262);
    msg.setSource(50743U);
    msg.setSourceEntity(79U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(201U);
    msg.value = 0.557850758209;

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
    msg.setTimeStamp(0.687639319909);
    msg.setSource(56137U);
    msg.setSourceEntity(13U);
    msg.setDestination(34836U);
    msg.setDestinationEntity(28U);
    msg.value = 0.582103582271;

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
    msg.setTimeStamp(0.295171876385);
    msg.setSource(63615U);
    msg.setSourceEntity(193U);
    msg.setDestination(36552U);
    msg.setDestinationEntity(135U);
    msg.value = 0.138313699449;

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
    msg.setTimeStamp(0.0660536539869);
    msg.setSource(44474U);
    msg.setSourceEntity(231U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(8U);
    msg.x = 0.995516006755;
    msg.y = 0.9737881008;
    msg.z = 0.0491298195755;
    msg.phi = 0.154276036435;
    msg.theta = 0.733475269125;
    msg.psi = 0.923930502557;
    msg.p = 0.840333682267;
    msg.q = 0.383024375357;
    msg.r = 0.417803940311;
    msg.u = 0.630087469135;
    msg.v = 0.00560678232006;
    msg.w = 0.277028629498;
    msg.bias_psi = 0.907264291802;
    msg.bias_r = 0.613017102818;

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
    msg.setTimeStamp(0.846072665691);
    msg.setSource(53153U);
    msg.setSourceEntity(60U);
    msg.setDestination(15377U);
    msg.setDestinationEntity(131U);
    msg.x = 0.946915699294;
    msg.y = 0.556981794576;
    msg.z = 0.35681872539;
    msg.phi = 0.477559869901;
    msg.theta = 0.927318964329;
    msg.psi = 0.116285924858;
    msg.p = 0.396099414114;
    msg.q = 0.60482405348;
    msg.r = 0.711758351985;
    msg.u = 0.557382242694;
    msg.v = 0.197744721018;
    msg.w = 0.940122187178;
    msg.bias_psi = 0.736275464905;
    msg.bias_r = 0.102858943154;

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
    msg.setTimeStamp(0.636129836433);
    msg.setSource(7588U);
    msg.setSourceEntity(113U);
    msg.setDestination(12732U);
    msg.setDestinationEntity(88U);
    msg.x = 0.998237075068;
    msg.y = 0.836142428127;
    msg.z = 0.898060626667;
    msg.phi = 0.964788085051;
    msg.theta = 0.607190872136;
    msg.psi = 0.66396300137;
    msg.p = 0.722057203674;
    msg.q = 0.997149662158;
    msg.r = 0.330874514168;
    msg.u = 0.355514919973;
    msg.v = 0.388225969423;
    msg.w = 0.971144124174;
    msg.bias_psi = 0.264643177137;
    msg.bias_r = 0.631389185685;

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
    msg.setTimeStamp(0.309939124116);
    msg.setSource(20929U);
    msg.setSourceEntity(41U);
    msg.setDestination(4499U);
    msg.setDestinationEntity(126U);
    msg.bias_psi = 0.464442578552;
    msg.bias_r = 0.175359808345;
    msg.cog = 0.138851499154;
    msg.cyaw = 0.234570099288;
    msg.lbl_rej_level = 0.380559715302;
    msg.gps_rej_level = 0.246345377549;
    msg.custom_x = 0.575921542129;
    msg.custom_y = 0.978688714987;
    msg.custom_z = 0.639454091908;

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
    msg.setTimeStamp(0.867400368202);
    msg.setSource(6664U);
    msg.setSourceEntity(234U);
    msg.setDestination(62971U);
    msg.setDestinationEntity(249U);
    msg.bias_psi = 0.929893905842;
    msg.bias_r = 0.55584527351;
    msg.cog = 0.304087915424;
    msg.cyaw = 0.406759880129;
    msg.lbl_rej_level = 0.529931482361;
    msg.gps_rej_level = 0.0946141155339;
    msg.custom_x = 0.30095251852;
    msg.custom_y = 0.359824478672;
    msg.custom_z = 0.346612962399;

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
    msg.setTimeStamp(0.50125927865);
    msg.setSource(21938U);
    msg.setSourceEntity(250U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(186U);
    msg.bias_psi = 0.89846785543;
    msg.bias_r = 0.902714393742;
    msg.cog = 0.918743740055;
    msg.cyaw = 0.629633349701;
    msg.lbl_rej_level = 0.228219383069;
    msg.gps_rej_level = 0.782762830008;
    msg.custom_x = 0.97926659958;
    msg.custom_y = 0.861768448533;
    msg.custom_z = 0.763998440524;

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
    msg.setTimeStamp(0.0578538229222);
    msg.setSource(37411U);
    msg.setSourceEntity(24U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.678039146337;
    msg.reason = 141U;

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
    msg.setTimeStamp(0.150922722039);
    msg.setSource(26074U);
    msg.setSourceEntity(33U);
    msg.setDestination(61507U);
    msg.setDestinationEntity(234U);
    msg.utc_time = 0.748848872102;
    msg.reason = 211U;

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
    msg.setTimeStamp(0.883358250288);
    msg.setSource(29164U);
    msg.setSourceEntity(104U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(103U);
    msg.utc_time = 0.212214986793;
    msg.reason = 110U;

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
    msg.setTimeStamp(0.664947710302);
    msg.setSource(54720U);
    msg.setSourceEntity(74U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(220U);
    msg.id = 140U;
    msg.range = 0.95194242327;
    msg.acceptance = 113U;

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
    msg.setTimeStamp(0.120165739878);
    msg.setSource(22957U);
    msg.setSourceEntity(92U);
    msg.setDestination(14290U);
    msg.setDestinationEntity(54U);
    msg.id = 151U;
    msg.range = 0.120073794154;
    msg.acceptance = 250U;

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
    msg.setTimeStamp(0.282295529346);
    msg.setSource(51367U);
    msg.setSourceEntity(159U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(216U);
    msg.id = 135U;
    msg.range = 0.297404034244;
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
    msg.setTimeStamp(0.864735105507);
    msg.setSource(40669U);
    msg.setSourceEntity(177U);
    msg.setDestination(45106U);
    msg.setDestinationEntity(60U);
    msg.type = 163U;
    msg.reason = 35U;
    msg.value = 0.849967259485;
    msg.timestep = 0.231568816955;

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
    msg.setTimeStamp(0.923406189463);
    msg.setSource(16119U);
    msg.setSourceEntity(34U);
    msg.setDestination(211U);
    msg.setDestinationEntity(186U);
    msg.type = 10U;
    msg.reason = 128U;
    msg.value = 0.583455214611;
    msg.timestep = 0.679966407301;

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
    msg.setTimeStamp(0.541675730913);
    msg.setSource(7174U);
    msg.setSourceEntity(0U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(55U);
    msg.type = 132U;
    msg.reason = 184U;
    msg.value = 0.144943761809;
    msg.timestep = 0.893562120576;

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
    msg.setTimeStamp(0.7652859988);
    msg.setSource(23805U);
    msg.setSourceEntity(147U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.36205600661);
    msg.setSource(2092U);
    msg.setSourceEntity(32U);
    msg.setDestination(26867U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.37939070706);
    msg.setSource(38578U);
    msg.setSourceEntity(138U);
    msg.setDestination(50522U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.445097727749);
    msg.setSource(39595U);
    msg.setSourceEntity(15U);
    msg.setDestination(21413U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WEXPLYEALWZNBRIKDBZQIXGXNSJKTMTTIWTUVYBDZZVJSXPMYHWAYTNKMNSGIVCFWXJKHUBOXKXMMTDXPFOBGCASBLJ");
    tmp_msg_0.lat = 0.092311972732;
    tmp_msg_0.lon = 0.405170749881;
    tmp_msg_0.depth = 0.615243099388;
    tmp_msg_0.query_channel = 154U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 20U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.493686986132;
    msg.y = 0.496568484483;
    msg.var_x = 0.500724327587;
    msg.var_y = 0.143541392218;
    msg.distance = 0.399300504488;

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
    msg.setTimeStamp(0.420970647022);
    msg.setSource(53028U);
    msg.setSourceEntity(157U);
    msg.setDestination(50794U);
    msg.setDestinationEntity(129U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HJLUIJWYMHZMHJTRQVCYKAPWFXFKLIMIFMLCAYYRCKHAUDVGMGGSUVTONTLBOAOKQPJBGSGBLUNJICSYABVEOUDYTYHSROTSPZBGWMEZEQNTDWFZCJDZLTVZXVFAIRXEHOQBIIRUOCPDGBCJJWNXNFSWKVELWXFPSDYXVIVQQG");
    tmp_msg_0.lat = 0.627670659993;
    tmp_msg_0.lon = 0.843235876911;
    tmp_msg_0.depth = 0.929311142894;
    tmp_msg_0.query_channel = 194U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 80U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.175470536775;
    msg.y = 0.557338491116;
    msg.var_x = 0.189108781666;
    msg.var_y = 0.995941229863;
    msg.distance = 0.359489092203;

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
    msg.setTimeStamp(0.100434163781);
    msg.setSource(9376U);
    msg.setSourceEntity(247U);
    msg.setDestination(47028U);
    msg.setDestinationEntity(30U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZXYDHRCTLNSMVPDPXVNKAGILQD");
    tmp_msg_0.lat = 0.952613163726;
    tmp_msg_0.lon = 0.448176145919;
    tmp_msg_0.depth = 0.598421569176;
    tmp_msg_0.query_channel = 37U;
    tmp_msg_0.reply_channel = 119U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.918978326877;
    msg.y = 0.859232629171;
    msg.var_x = 0.239132563643;
    msg.var_y = 0.400720659445;
    msg.distance = 0.669338147948;

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
    msg.setTimeStamp(0.857941238628);
    msg.setSource(4534U);
    msg.setSourceEntity(126U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(128U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.513377056125);
    msg.setSource(62740U);
    msg.setSourceEntity(1U);
    msg.setDestination(1917U);
    msg.setDestinationEntity(55U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.698554615102);
    msg.setSource(65043U);
    msg.setSourceEntity(76U);
    msg.setDestination(18511U);
    msg.setDestinationEntity(53U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.176052001855);
    msg.setSource(36375U);
    msg.setSourceEntity(36U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8717164241;

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
    msg.setTimeStamp(0.974643932255);
    msg.setSource(49025U);
    msg.setSourceEntity(63U);
    msg.setDestination(13695U);
    msg.setDestinationEntity(246U);
    msg.value = 0.350115645899;

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
    msg.setTimeStamp(0.935152365567);
    msg.setSource(61451U);
    msg.setSourceEntity(39U);
    msg.setDestination(12212U);
    msg.setDestinationEntity(200U);
    msg.value = 0.335800422002;

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
    msg.setTimeStamp(0.956967774792);
    msg.setSource(21808U);
    msg.setSourceEntity(158U);
    msg.setDestination(19221U);
    msg.setDestinationEntity(39U);
    msg.value = 0.163257306419;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.149885250048);
    msg.setSource(6225U);
    msg.setSourceEntity(50U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(58U);
    msg.value = 0.113349168537;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.291746224044);
    msg.setSource(45602U);
    msg.setSourceEntity(113U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(106U);
    msg.value = 0.614378994665;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.874430998042);
    msg.setSource(4114U);
    msg.setSourceEntity(108U);
    msg.setDestination(62035U);
    msg.setDestinationEntity(198U);
    msg.value = 0.610258291823;
    msg.speed_units = 48U;

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
    msg.setTimeStamp(0.921069729331);
    msg.setSource(40674U);
    msg.setSourceEntity(16U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(252U);
    msg.value = 0.929197321546;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.393664549933);
    msg.setSource(58333U);
    msg.setSourceEntity(84U);
    msg.setDestination(8771U);
    msg.setDestinationEntity(13U);
    msg.value = 0.74330150002;
    msg.speed_units = 224U;

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
    msg.setTimeStamp(0.421596361372);
    msg.setSource(13782U);
    msg.setSourceEntity(67U);
    msg.setDestination(64308U);
    msg.setDestinationEntity(244U);
    msg.value = 0.967590812804;

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
    msg.setTimeStamp(0.358624999526);
    msg.setSource(30284U);
    msg.setSourceEntity(0U);
    msg.setDestination(15747U);
    msg.setDestinationEntity(114U);
    msg.value = 0.020019578531;

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
    msg.setTimeStamp(0.902926028497);
    msg.setSource(53660U);
    msg.setSourceEntity(176U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(56U);
    msg.value = 0.269070905889;

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
    msg.setTimeStamp(0.054489533051);
    msg.setSource(16227U);
    msg.setSourceEntity(50U);
    msg.setDestination(36103U);
    msg.setDestinationEntity(87U);
    msg.value = 0.68022899954;

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
    msg.setTimeStamp(0.174754998096);
    msg.setSource(20008U);
    msg.setSourceEntity(223U);
    msg.setDestination(31144U);
    msg.setDestinationEntity(59U);
    msg.value = 0.741178855263;

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
    msg.setTimeStamp(0.268418451604);
    msg.setSource(18737U);
    msg.setSourceEntity(178U);
    msg.setDestination(65267U);
    msg.setDestinationEntity(189U);
    msg.value = 0.931668526263;

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
    msg.setTimeStamp(0.862166694056);
    msg.setSource(2013U);
    msg.setSourceEntity(202U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(2U);
    msg.value = 0.610205835148;

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
    msg.setTimeStamp(0.654742033525);
    msg.setSource(57653U);
    msg.setSourceEntity(88U);
    msg.setDestination(1860U);
    msg.setDestinationEntity(142U);
    msg.value = 0.225671478395;

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
    msg.setTimeStamp(0.850883634025);
    msg.setSource(62144U);
    msg.setSourceEntity(74U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(10U);
    msg.value = 0.636132737406;

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
    msg.setTimeStamp(0.176395453131);
    msg.setSource(59507U);
    msg.setSourceEntity(134U);
    msg.setDestination(19596U);
    msg.setDestinationEntity(169U);
    msg.start_lat = 0.406247037066;
    msg.start_lon = 0.105020987342;
    msg.start_z = 0.936631368453;
    msg.start_z_units = 53U;
    msg.end_lat = 0.607347615855;
    msg.end_lon = 0.603613196753;
    msg.end_z = 0.180568958687;
    msg.end_z_units = 37U;
    msg.speed = 0.29070536651;
    msg.speed_units = 127U;
    msg.lradius = 0.309221873056;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.941972166924);
    msg.setSource(49607U);
    msg.setSourceEntity(235U);
    msg.setDestination(42947U);
    msg.setDestinationEntity(250U);
    msg.start_lat = 0.567120295458;
    msg.start_lon = 0.0302370542249;
    msg.start_z = 0.358534431838;
    msg.start_z_units = 61U;
    msg.end_lat = 0.563416251782;
    msg.end_lon = 0.547940809898;
    msg.end_z = 0.541653503116;
    msg.end_z_units = 207U;
    msg.speed = 0.0287091774707;
    msg.speed_units = 172U;
    msg.lradius = 0.386045514374;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.759749011622);
    msg.setSource(36829U);
    msg.setSourceEntity(244U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(237U);
    msg.start_lat = 0.444558931146;
    msg.start_lon = 0.729537311916;
    msg.start_z = 0.192688298581;
    msg.start_z_units = 210U;
    msg.end_lat = 0.280279246839;
    msg.end_lon = 0.0514692657625;
    msg.end_z = 0.943309112298;
    msg.end_z_units = 31U;
    msg.speed = 0.35407698541;
    msg.speed_units = 171U;
    msg.lradius = 0.0623261337525;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.107915958551);
    msg.setSource(40193U);
    msg.setSourceEntity(13U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(89U);
    msg.x = 0.620605220819;
    msg.y = 0.751078774096;
    msg.z = 0.642806250518;
    msg.k = 0.867230749452;
    msg.m = 0.285382797216;
    msg.n = 0.917426441775;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.194398493341);
    msg.setSource(21662U);
    msg.setSourceEntity(178U);
    msg.setDestination(60533U);
    msg.setDestinationEntity(152U);
    msg.x = 0.87012146516;
    msg.y = 0.948056119417;
    msg.z = 0.193232429751;
    msg.k = 0.562193884046;
    msg.m = 0.106579355573;
    msg.n = 0.479335826547;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.375512574546);
    msg.setSource(42905U);
    msg.setSourceEntity(94U);
    msg.setDestination(29047U);
    msg.setDestinationEntity(134U);
    msg.x = 0.457769962831;
    msg.y = 0.562760261377;
    msg.z = 0.245825412401;
    msg.k = 0.482747918614;
    msg.m = 0.0089622179404;
    msg.n = 0.189380749756;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.930013219535);
    msg.setSource(56899U);
    msg.setSourceEntity(210U);
    msg.setDestination(53702U);
    msg.setDestinationEntity(16U);
    msg.value = 0.408477893404;

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
    msg.setTimeStamp(0.664558932501);
    msg.setSource(17161U);
    msg.setSourceEntity(58U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(235U);
    msg.value = 0.339045622918;

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
    msg.setTimeStamp(0.960876777632);
    msg.setSource(48218U);
    msg.setSourceEntity(180U);
    msg.setDestination(48400U);
    msg.setDestinationEntity(100U);
    msg.value = 0.326585301534;

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
    msg.setTimeStamp(0.829020050543);
    msg.setSource(41768U);
    msg.setSourceEntity(169U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(126U);
    msg.u = 0.24083815367;
    msg.v = 0.286971927752;
    msg.w = 0.296098725835;
    msg.p = 0.631186909042;
    msg.q = 0.920028086153;
    msg.r = 0.269775123643;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.878123728381);
    msg.setSource(3193U);
    msg.setSourceEntity(165U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(98U);
    msg.u = 0.787354101095;
    msg.v = 0.970016590004;
    msg.w = 0.0253776818717;
    msg.p = 0.814096723132;
    msg.q = 0.151898315895;
    msg.r = 0.49703608376;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.963206060784);
    msg.setSource(42405U);
    msg.setSourceEntity(50U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(114U);
    msg.u = 0.339243554111;
    msg.v = 0.983789761427;
    msg.w = 0.961795472223;
    msg.p = 0.339408115647;
    msg.q = 0.120720121849;
    msg.r = 0.582474666476;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.755330947176);
    msg.setSource(6328U);
    msg.setSourceEntity(20U);
    msg.setDestination(49927U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.912863768341;
    msg.start_lon = 0.954814646567;
    msg.start_z = 0.544340382372;
    msg.start_z_units = 215U;
    msg.end_lat = 0.278947978351;
    msg.end_lon = 0.0508326527835;
    msg.end_z = 0.809944761076;
    msg.end_z_units = 115U;
    msg.lradius = 0.555034925166;
    msg.flags = 235U;
    msg.x = 0.694747791918;
    msg.y = 0.695002469493;
    msg.z = 0.400365717612;
    msg.vx = 0.513629310578;
    msg.vy = 0.652794679009;
    msg.vz = 0.967706955217;
    msg.course_error = 0.445882175389;
    msg.eta = 57214U;

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
    msg.setTimeStamp(0.140368805073);
    msg.setSource(10789U);
    msg.setSourceEntity(87U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(49U);
    msg.start_lat = 0.281863437763;
    msg.start_lon = 0.804670875869;
    msg.start_z = 0.556816520613;
    msg.start_z_units = 214U;
    msg.end_lat = 0.292540104702;
    msg.end_lon = 0.958702058223;
    msg.end_z = 0.205348368583;
    msg.end_z_units = 184U;
    msg.lradius = 0.982616283117;
    msg.flags = 70U;
    msg.x = 0.808785125586;
    msg.y = 0.532069286985;
    msg.z = 0.639558950318;
    msg.vx = 0.188844577406;
    msg.vy = 0.419453583102;
    msg.vz = 0.338189631553;
    msg.course_error = 0.928847427024;
    msg.eta = 29017U;

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
    msg.setTimeStamp(0.623459350248);
    msg.setSource(38727U);
    msg.setSourceEntity(45U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(142U);
    msg.start_lat = 0.587693612592;
    msg.start_lon = 0.0580705947217;
    msg.start_z = 0.673114020829;
    msg.start_z_units = 52U;
    msg.end_lat = 0.476744246455;
    msg.end_lon = 0.510820843102;
    msg.end_z = 0.658847465525;
    msg.end_z_units = 34U;
    msg.lradius = 0.793811865183;
    msg.flags = 159U;
    msg.x = 0.48066517852;
    msg.y = 0.797858644223;
    msg.z = 0.649035153219;
    msg.vx = 0.527654066033;
    msg.vy = 0.473768804496;
    msg.vz = 0.519673557143;
    msg.course_error = 0.578154053062;
    msg.eta = 40850U;

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
    msg.setTimeStamp(0.160126530235);
    msg.setSource(44828U);
    msg.setSourceEntity(125U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(83U);
    msg.k = 0.899423164936;
    msg.m = 0.599993714884;
    msg.n = 0.417605953292;

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
    msg.setTimeStamp(0.323107889857);
    msg.setSource(32528U);
    msg.setSourceEntity(21U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(163U);
    msg.k = 0.710706409939;
    msg.m = 0.152007239611;
    msg.n = 0.360423707068;

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
    msg.setTimeStamp(0.606744441767);
    msg.setSource(15998U);
    msg.setSourceEntity(212U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(190U);
    msg.k = 0.497819610342;
    msg.m = 0.11761277525;
    msg.n = 0.732132671965;

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
    msg.setTimeStamp(0.487658730806);
    msg.setSource(12742U);
    msg.setSourceEntity(254U);
    msg.setDestination(50732U);
    msg.setDestinationEntity(137U);
    msg.p = 0.0582016160743;
    msg.i = 0.487376744942;
    msg.d = 0.0273273891644;
    msg.a = 0.0443725549056;

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
    msg.setTimeStamp(0.828321433738);
    msg.setSource(14832U);
    msg.setSourceEntity(183U);
    msg.setDestination(39414U);
    msg.setDestinationEntity(34U);
    msg.p = 0.625305238042;
    msg.i = 0.468170100261;
    msg.d = 0.208904231135;
    msg.a = 0.604018643518;

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
    msg.setTimeStamp(0.898606092364);
    msg.setSource(19178U);
    msg.setSourceEntity(209U);
    msg.setDestination(26287U);
    msg.setDestinationEntity(17U);
    msg.p = 0.868981622761;
    msg.i = 0.715096411109;
    msg.d = 0.570869041365;
    msg.a = 0.509460396084;

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
    msg.setTimeStamp(0.39199665227);
    msg.setSource(866U);
    msg.setSourceEntity(103U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(220U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.487409661501);
    msg.setSource(39788U);
    msg.setSourceEntity(121U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(105U);
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
    msg.setTimeStamp(0.485559122845);
    msg.setSource(12135U);
    msg.setSourceEntity(109U);
    msg.setDestination(9333U);
    msg.setDestinationEntity(228U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.293753801198);
    msg.setSource(3322U);
    msg.setSourceEntity(59U);
    msg.setDestination(39985U);
    msg.setDestinationEntity(86U);
    msg.timeout = 20389U;
    msg.lat = 0.312839482801;
    msg.lon = 0.412014468471;
    msg.z = 0.736442588204;
    msg.z_units = 98U;
    msg.speed = 0.113278712459;
    msg.speed_units = 189U;
    msg.roll = 0.57279698941;
    msg.pitch = 0.88497100708;
    msg.yaw = 0.468943763815;
    msg.custom.assign("GZYPQIBSTNTEGKNHDTMKXMTATDJACSPJQRTBLJLRGYBFCW");

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
    msg.setTimeStamp(0.138316097514);
    msg.setSource(19411U);
    msg.setSourceEntity(122U);
    msg.setDestination(6347U);
    msg.setDestinationEntity(24U);
    msg.timeout = 485U;
    msg.lat = 0.682167532923;
    msg.lon = 0.247728543291;
    msg.z = 0.687134541987;
    msg.z_units = 217U;
    msg.speed = 0.393304181157;
    msg.speed_units = 7U;
    msg.roll = 0.677284831416;
    msg.pitch = 0.266273493085;
    msg.yaw = 0.402516333574;
    msg.custom.assign("EWIXCKRQOVMUHVEMGDRXKHSAZVNQEPLTWXTXSQMPMGZAYJSZJACNPYFKLTXJHQFJBREDDWJWVPAJLKGLKTWGEROMHQSHFWSHNTCIJGSPIFYNLCSPNTKDNMILUICFYXGBSZITPRENNXKUOUDFDUFRHRJAEVMZEDBFSDHHQ");

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
    msg.setTimeStamp(0.913886912688);
    msg.setSource(45038U);
    msg.setSourceEntity(34U);
    msg.setDestination(35979U);
    msg.setDestinationEntity(171U);
    msg.timeout = 40822U;
    msg.lat = 0.277980231303;
    msg.lon = 0.3880073113;
    msg.z = 0.355560714172;
    msg.z_units = 92U;
    msg.speed = 0.566834915015;
    msg.speed_units = 167U;
    msg.roll = 0.159313777612;
    msg.pitch = 0.0589992933313;
    msg.yaw = 0.87247776467;
    msg.custom.assign("KAOFQHXRTPKMTZZCOMCUPPXNMYE");

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
    msg.setTimeStamp(0.516084608169);
    msg.setSource(19742U);
    msg.setSourceEntity(151U);
    msg.setDestination(45660U);
    msg.setDestinationEntity(31U);
    msg.timeout = 34082U;
    msg.lat = 0.656129507318;
    msg.lon = 0.24116139613;
    msg.z = 0.344402712275;
    msg.z_units = 120U;
    msg.speed = 0.889975202733;
    msg.speed_units = 233U;
    msg.duration = 42865U;
    msg.radius = 0.32753876869;
    msg.flags = 69U;
    msg.custom.assign("XRRZLHGMKACYDTWWXQOGSJMJZEJADHVPQYUYRJCTCZNWONGGETPNSSXZHDLAOPLTFGCQXRIOZIWSUBNEYXIMSFDVLHTNYBKGDGUSPEYEKNCUQUGR");

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
    msg.setTimeStamp(0.887345515256);
    msg.setSource(20857U);
    msg.setSourceEntity(162U);
    msg.setDestination(53636U);
    msg.setDestinationEntity(220U);
    msg.timeout = 51017U;
    msg.lat = 0.106765475937;
    msg.lon = 0.0284943836682;
    msg.z = 0.301253709748;
    msg.z_units = 78U;
    msg.speed = 0.493897924134;
    msg.speed_units = 213U;
    msg.duration = 1415U;
    msg.radius = 0.888989099057;
    msg.flags = 123U;
    msg.custom.assign("IOLJITGLANJOUGRQBMOPMYNLMYFHEQARLHZSBWCXGGFPDYPWEKVKNJDRQABCTGKXJYZUBTVBIAKGQHYEXJDVCKSHLQIDGAIOJGTQXMKYIKBIFSRVXBPLGWBZDPNOVCOPXXXTSGMVMEPTTBUUNHHRPUTIFEJNAMRDZVLCTFDXOPCCUSWUESYQVRWBAKTROECJZZCMWJQVYEHZOFSEWNICRDAMUKSDHZNNZLLZOIARHUFSPNLEFDHWXQFWWF");

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
    msg.setTimeStamp(0.989968826517);
    msg.setSource(48481U);
    msg.setSourceEntity(222U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(89U);
    msg.timeout = 55889U;
    msg.lat = 0.872340357715;
    msg.lon = 0.947015634665;
    msg.z = 0.309557181465;
    msg.z_units = 56U;
    msg.speed = 0.156828352367;
    msg.speed_units = 235U;
    msg.duration = 45280U;
    msg.radius = 0.796326924312;
    msg.flags = 93U;
    msg.custom.assign("GVAAVCOVQNGVJRUGJZDCSTKMUOJLUJVELGTJMJLWDO");

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
    msg.setTimeStamp(0.566111305358);
    msg.setSource(18277U);
    msg.setSourceEntity(123U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(190U);
    msg.custom.assign("HKXYIQKVVUEDHQNGNVYWQXMDBZJAKWSUELOZVNWGNRFOOTLTPMCCIPIXHSWRHRO");

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
    msg.setTimeStamp(0.402706539192);
    msg.setSource(40485U);
    msg.setSourceEntity(207U);
    msg.setDestination(7827U);
    msg.setDestinationEntity(193U);
    msg.custom.assign("YUIGBFUZGESINGCNYRMRLFNESGATSYXKPLXQMXPUPMDVOOOCZPSKRIVRAYGQWHWIGFNIHCAMZPZQJTDAMLSJGJKZLBUWPJYQULUVFJNCVMCPLNMWXRDFJJTFHAWKBAUTLVCBKADOOSMDPQJKDNWKHFESXROIMCFUOETTCQSBWVHMNTHVGZIYQFVJSWORXIZXCQKPOIGTJAHLEHYLQZXDBXSLRTPRABKUEBUIRWGYVAXDVOQEZDNWYEDKHEFZB");

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
    msg.setTimeStamp(0.550422243863);
    msg.setSource(22856U);
    msg.setSourceEntity(158U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(116U);
    msg.custom.assign("YQDNBYKKZXXRQWGYZRITSJIWOST");

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
    msg.setTimeStamp(0.178671812695);
    msg.setSource(62475U);
    msg.setSourceEntity(236U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(58U);
    msg.timeout = 37087U;
    msg.lat = 0.458816619287;
    msg.lon = 0.638776715758;
    msg.z = 0.290449170578;
    msg.z_units = 226U;
    msg.duration = 55401U;
    msg.speed = 0.0437549937237;
    msg.speed_units = 98U;
    msg.type = 31U;
    msg.radius = 0.824806713148;
    msg.length = 0.218312967017;
    msg.bearing = 0.408224164703;
    msg.direction = 233U;
    msg.custom.assign("DZWCCCRGQNQYQFAZSDELNGHCHSOIPXXHIOYRVYCEEBRRPMSNMDJWLFNHNVKULUGSKMIBJWAMGLCQTUVVTJOHUDPNWAUFPIMXIMGLXICTYSYNPHQVYTAGZFBYZXIJUYPVBDRBSBHS");

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
    msg.setTimeStamp(0.607741824153);
    msg.setSource(6532U);
    msg.setSourceEntity(151U);
    msg.setDestination(250U);
    msg.setDestinationEntity(250U);
    msg.timeout = 45886U;
    msg.lat = 0.935265392903;
    msg.lon = 0.289907964256;
    msg.z = 0.756609397982;
    msg.z_units = 152U;
    msg.duration = 10299U;
    msg.speed = 0.106729510602;
    msg.speed_units = 192U;
    msg.type = 16U;
    msg.radius = 0.48657469704;
    msg.length = 0.0842554527852;
    msg.bearing = 0.0406650183769;
    msg.direction = 99U;
    msg.custom.assign("GRBNRYCPAJNSQWEUKLDFUGFUMEUPPGYYFZGSVWFGIVECPHMKOUUBTXQVHDRLLDZETDFIPSAFQJETOZNKOKHQYIAJXTWSKBBILMRWWRCDPQDVNFJJQBIXTBJDSVALREZSMAHCYNWC");

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
    msg.setTimeStamp(0.98981207034);
    msg.setSource(6681U);
    msg.setSourceEntity(152U);
    msg.setDestination(41640U);
    msg.setDestinationEntity(28U);
    msg.timeout = 30904U;
    msg.lat = 0.685420165088;
    msg.lon = 0.0655742577527;
    msg.z = 0.0181355768175;
    msg.z_units = 217U;
    msg.duration = 8377U;
    msg.speed = 0.32326363955;
    msg.speed_units = 158U;
    msg.type = 75U;
    msg.radius = 0.342307411198;
    msg.length = 0.78736962783;
    msg.bearing = 0.730775879808;
    msg.direction = 55U;
    msg.custom.assign("NPFMLTXYNGNUYTGOOWHWODRGPFLBFAGHMBHWAUYZIIPYRDSQKAHIBFHTLVDDSLRRSSILTEVULHPJHGDBOAVQUAGKMYWBCEFU");

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
    msg.setTimeStamp(0.225904037895);
    msg.setSource(7887U);
    msg.setSourceEntity(103U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(107U);
    msg.duration = 25663U;
    msg.custom.assign("EUXEQADKYIHDKYVJVBRJZWDGRLHUIHOGAFKNCVPJPKBUGZTZXFEDPHOMEFPPRAYAZFVKNSSIJFWRFXSFTKIWQCILDXCEYPLTSGUJOZP");

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
    msg.setTimeStamp(0.0906906973078);
    msg.setSource(50394U);
    msg.setSourceEntity(150U);
    msg.setDestination(54271U);
    msg.setDestinationEntity(97U);
    msg.duration = 25162U;
    msg.custom.assign("VHNKQWSBMGXTDPQJHKXUCYUKGFOAUVBANDWTSQBJHQXKATKSEONVLXZSVXOHJNPQVYREASMUGFUIZPCFBLRFGSMIXSEDJKICPYWOIQQRNGYVMIOCUZNOZVLQFIEDLZRZYKYRJNEMCHI");

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
    msg.setTimeStamp(0.569858091343);
    msg.setSource(63341U);
    msg.setSourceEntity(6U);
    msg.setDestination(14729U);
    msg.setDestinationEntity(113U);
    msg.duration = 38992U;
    msg.custom.assign("FLZQFHMSWVLOOCVUYSADOQXENFMVYMFSJZEHZXJTZJPUIJTGOVPMCPLDEWFUZDTLWNDB");

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
    msg.setTimeStamp(0.454780995485);
    msg.setSource(36184U);
    msg.setSourceEntity(140U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(83U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.569318844059;
    tmp_msg_0.speed_units = 121U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63446U;
    msg.custom.assign("KGFMNVDDRTBHTVFIYQJDOAPWUGWTAROOWZLMSJFGFXHZBWTRCRHPHGMDJIACQZVIMSBHUIPJFTEBZFYDLOYTHJXMKKMEXHGRFCQHCXJDLDEJYCYPGNBNMJNSSXQPKOJLGLSFHXSJVVIPMKRZLNUOPTINPRALIOZCAUIUKVEQSAOSEBFGZIYLNYUCWDWKWQBQZRNAKXZWEOQAZCVTWQNULKBXYGNETFURVCE");

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
    msg.setTimeStamp(0.357711928377);
    msg.setSource(52131U);
    msg.setSourceEntity(111U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(198U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.841870043819;
    tmp_msg_0.speed_units = 95U;
    msg.control.set(tmp_msg_0);
    msg.duration = 18549U;
    msg.custom.assign("VCUIKJFXMNHVIPQZLDHYOWFZGMTZKDLQRSJKPHISRXBJPOEEAQXXPGGKWEGZDHTATFCFXMUKYMFDPVKDPFSEQLVRXKDFHYQVCTSENMKONYIUQNGCADOWHBPRCWVNJMHJNAEAFAYBWXUQOSITRDUDVNKCCVUGBBERRGALZZBIIAOSGPZBLWCXJJGSALMWMYTZUFNOLUMEOTEQMTZWYPBNCPWITIJBLTOEKRVLFBJCSJRI");

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
    msg.setTimeStamp(0.571658166378);
    msg.setSource(48844U);
    msg.setSourceEntity(199U);
    msg.setDestination(22053U);
    msg.setDestinationEntity(65U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.206632590983;
    tmp_msg_0.z_units = 254U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62016U;
    msg.custom.assign("ZTXZQICXSYMEYYPWNEWXOLFBVDHQXWOYDGQQZAXH");

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
    msg.setTimeStamp(0.348214403529);
    msg.setSource(51161U);
    msg.setSourceEntity(215U);
    msg.setDestination(19258U);
    msg.setDestinationEntity(156U);
    msg.timeout = 57281U;
    msg.lat = 0.447860600183;
    msg.lon = 0.702951300685;
    msg.z = 0.0421432760608;
    msg.z_units = 236U;
    msg.speed = 0.249741925581;
    msg.speed_units = 140U;
    msg.bearing = 0.170917053358;
    msg.cross_angle = 0.751840011772;
    msg.width = 0.895873102918;
    msg.length = 0.57209958173;
    msg.hstep = 0.451277913986;
    msg.coff = 157U;
    msg.alternation = 206U;
    msg.flags = 39U;
    msg.custom.assign("UGMDPHOACBWOGATOAXQXWKPREYYAPWFFQIZUWVUHZITJZYPKMCJJLIVZFZYMVDBQNRQUBBINGOKAMXUXZDEBSSCCXLZRIGSKDLNQYJOJKCQHUFYDKGUETTRKJNSSRTMLLEVUZQFFEUIWWHVMBKOCJGCVABOIADWZRPPFQXNZSUPPJFWYMQEHXAFXL");

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
    msg.setTimeStamp(0.233531777472);
    msg.setSource(25491U);
    msg.setSourceEntity(59U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(134U);
    msg.timeout = 1634U;
    msg.lat = 0.430394598673;
    msg.lon = 0.127021748532;
    msg.z = 0.121012255858;
    msg.z_units = 18U;
    msg.speed = 0.20958044383;
    msg.speed_units = 166U;
    msg.bearing = 0.982195198478;
    msg.cross_angle = 0.864528531931;
    msg.width = 0.76503506736;
    msg.length = 0.535988438022;
    msg.hstep = 0.772269944352;
    msg.coff = 108U;
    msg.alternation = 59U;
    msg.flags = 201U;
    msg.custom.assign("WYSKIORKUZJXHDUAUHYZFGRDDKADKQJTM");

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
    msg.setTimeStamp(0.82288765182);
    msg.setSource(37203U);
    msg.setSourceEntity(164U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(124U);
    msg.timeout = 9808U;
    msg.lat = 0.528682156565;
    msg.lon = 0.558737281641;
    msg.z = 0.168147228807;
    msg.z_units = 191U;
    msg.speed = 0.0628453271304;
    msg.speed_units = 249U;
    msg.bearing = 0.0908733427368;
    msg.cross_angle = 0.783830668239;
    msg.width = 0.241955040148;
    msg.length = 0.55881399133;
    msg.hstep = 0.10020038809;
    msg.coff = 46U;
    msg.alternation = 37U;
    msg.flags = 207U;
    msg.custom.assign("HTMEGDZSXEKOXBOGHWIBROGTGCJQWOQPAPRWHQMMOVBLKSKSQVUEJFEQEABZIYDBJHUASGIURVTPLUGFVHDZNKJXZTHXBNXABPDNULKLVMUQNFDFATNCWJYMLMICKGXMIYIDWAODFCDCCPSOEAXKOUZYSLRQMSFGLZAEJQRJNGVUUITTIBZBIVPXFWHEHZCVLSNYAWKFXGOMFZDNTQ");

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
    msg.setTimeStamp(0.532528721594);
    msg.setSource(1000U);
    msg.setSourceEntity(52U);
    msg.setDestination(50492U);
    msg.setDestinationEntity(245U);
    msg.timeout = 53901U;
    msg.lat = 0.253334133198;
    msg.lon = 0.430047265395;
    msg.z = 0.26288625399;
    msg.z_units = 187U;
    msg.speed = 0.293854647725;
    msg.speed_units = 148U;
    msg.custom.assign("AOIVQLXKGPXWEQGXSTSRFHBISFTFMPSSPNENVQKFKCGJNSCZCZMLFURHEJIBMHWIXRXRBZAGJFFZKRSKWARUKJZTJCZQGNEUMIOREVBLWBPWDZD");

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
    msg.setTimeStamp(0.588803446878);
    msg.setSource(51742U);
    msg.setSourceEntity(85U);
    msg.setDestination(53199U);
    msg.setDestinationEntity(86U);
    msg.timeout = 54060U;
    msg.lat = 0.288942446733;
    msg.lon = 0.285129270344;
    msg.z = 0.245861627514;
    msg.z_units = 199U;
    msg.speed = 0.461760213185;
    msg.speed_units = 50U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.701781473786;
    tmp_msg_0.y = 0.390201055302;
    tmp_msg_0.z = 0.583288864842;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YRIHHBKANUZQCMHBUWZTABPQGZLCENOSRXFASHLBUVDPFYFXKEDPOIMUOJCUXCXNXEEGGQQSOROLXDVYPRAWWZVTDVINYYDTWGPCQFYMKVVTCNTFSFZLXIWGUMYRSKOKUWCKFZJQVNZIFJXNRAFEJGPWLDOHSLJWQCWNKCYVOLTJKOPUG");

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
    msg.setTimeStamp(0.642707359987);
    msg.setSource(31710U);
    msg.setSourceEntity(196U);
    msg.setDestination(42649U);
    msg.setDestinationEntity(235U);
    msg.timeout = 1595U;
    msg.lat = 0.687196096129;
    msg.lon = 0.519071168133;
    msg.z = 0.559966340566;
    msg.z_units = 215U;
    msg.speed = 0.528999949658;
    msg.speed_units = 210U;
    msg.custom.assign("NQMEUWQOSPCEKOMGAZQMMZOMUTJPKHEACGCKKBAFSTHXKLDMHAOSLSJHLXBBEDPWPOEHFLGOVBJQIWNQZLUYRWFZSNZDXZMUYW");

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
    msg.setTimeStamp(0.986593632077);
    msg.setSource(63483U);
    msg.setSourceEntity(245U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(184U);
    msg.x = 0.767661992046;
    msg.y = 0.536322152444;
    msg.z = 0.0672042989888;

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
    msg.setTimeStamp(0.562590756619);
    msg.setSource(58513U);
    msg.setSourceEntity(182U);
    msg.setDestination(61621U);
    msg.setDestinationEntity(120U);
    msg.x = 0.0302281300399;
    msg.y = 0.132423938009;
    msg.z = 0.448544395471;

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
    msg.setTimeStamp(0.386010517811);
    msg.setSource(24319U);
    msg.setSourceEntity(132U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(91U);
    msg.x = 0.354265931985;
    msg.y = 0.584926772237;
    msg.z = 0.185206062022;

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
    msg.setTimeStamp(0.741021420603);
    msg.setSource(16903U);
    msg.setSourceEntity(127U);
    msg.setDestination(21275U);
    msg.setDestinationEntity(224U);
    msg.timeout = 41856U;
    msg.lat = 0.796413379365;
    msg.lon = 0.708592134269;
    msg.z = 0.161911346917;
    msg.z_units = 246U;
    msg.amplitude = 0.638773120999;
    msg.pitch = 0.359595679477;
    msg.speed = 0.969794176655;
    msg.speed_units = 151U;
    msg.custom.assign("EYJENSLWBUGZDERRCPPBNTJIQGMZCOXVSRXBGCLJNZAHMXVHWEVAACHXBIMYYAUXPBKETVELRTZSFJEFPOLKLBPLPJTSDNZEUQGJOAXENGIOYGXYRBCTVZARLQSSKZKKUDFCSEQQVLIBDUT");

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
    msg.setTimeStamp(0.157329264105);
    msg.setSource(59065U);
    msg.setSourceEntity(142U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(156U);
    msg.timeout = 52258U;
    msg.lat = 0.85590517528;
    msg.lon = 0.157085981017;
    msg.z = 0.110972103506;
    msg.z_units = 167U;
    msg.amplitude = 0.00741496697091;
    msg.pitch = 0.525254411241;
    msg.speed = 0.609350778117;
    msg.speed_units = 185U;
    msg.custom.assign("SLWZAYIOJLETDAPHWNBFXZBFDWVAJKUVOLDMGYFLFXTCMFJGKRIBGYSLZUVXYDEBUYPTOUXSARQHXZGXEJIQYMRETUURIMAEVOOYRWZSPERJZWWKDKLCYPOKXIGBCGCAKNWSGOMFKBNQVS");

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
    msg.setTimeStamp(0.548168636254);
    msg.setSource(19089U);
    msg.setSourceEntity(17U);
    msg.setDestination(20599U);
    msg.setDestinationEntity(6U);
    msg.timeout = 31436U;
    msg.lat = 0.0875301472224;
    msg.lon = 0.0999208746407;
    msg.z = 0.182199598025;
    msg.z_units = 210U;
    msg.amplitude = 0.842790831502;
    msg.pitch = 0.820850611226;
    msg.speed = 0.536924682284;
    msg.speed_units = 69U;
    msg.custom.assign("PJZLEJWBNTTTVRTLL");

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
    msg.setTimeStamp(0.186208135865);
    msg.setSource(46215U);
    msg.setSourceEntity(241U);
    msg.setDestination(48151U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.901506619568);
    msg.setSource(62388U);
    msg.setSourceEntity(193U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.144311455837);
    msg.setSource(31624U);
    msg.setSourceEntity(246U);
    msg.setDestination(49152U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.0415193024248);
    msg.setSource(61122U);
    msg.setSourceEntity(85U);
    msg.setDestination(28781U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.877494905356;
    msg.lon = 0.488404950358;
    msg.z = 0.803149400066;
    msg.z_units = 116U;
    msg.radius = 0.868613610387;
    msg.duration = 56165U;
    msg.speed = 0.444660962093;
    msg.speed_units = 23U;
    msg.custom.assign("MDATEKUWDBAIFMBUWQJIPBUVJWZQQFDCSOGAUPTGFWNOZOBZUSMZMTYKTTYODVBHGQJOKAALZNNKAWRAFPFZPCMPBSYGGVWCUNIOQBQRWPJZHCVNTSRMFXSVKXAHBHLCEQXETISXARDDXLBKSBUMHTERUPEWECXXOKCLWNIHJ");

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
    msg.setTimeStamp(0.763584587385);
    msg.setSource(19678U);
    msg.setSourceEntity(164U);
    msg.setDestination(21376U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.508919004087;
    msg.lon = 0.859527680053;
    msg.z = 0.30834335961;
    msg.z_units = 196U;
    msg.radius = 0.844548504643;
    msg.duration = 1426U;
    msg.speed = 0.36522550273;
    msg.speed_units = 14U;
    msg.custom.assign("LIRQMUJXBSGVNCDVZYKLRWCYQHEENAKUQXWHOLBYDKLHHAFFVXOSURQUAVDZYASHTRKJQPAXPYPKIXOBIGITVEURJSTFCAVXDJPEJNDDGRVUIOCRQXWLOVTTFLAUSFHPMLTXZUUJTBWIZYXNALFYDKEJSGIWEHOOGCBRHQHOECMDYZSGQGDNNSHYWETZCCWVSMBBGSGMKOGMNWMZBF");

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
    msg.setTimeStamp(0.216182462553);
    msg.setSource(12744U);
    msg.setSourceEntity(52U);
    msg.setDestination(4829U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.167569245663;
    msg.lon = 0.282397739495;
    msg.z = 0.129899941691;
    msg.z_units = 233U;
    msg.radius = 0.141593632707;
    msg.duration = 23096U;
    msg.speed = 0.105277596939;
    msg.speed_units = 195U;
    msg.custom.assign("PZRHMHMGAMQLIGMYODUDQAGMEVWBKTORTRLXCIJWPGJZYQQXKBMOXEHFBZYSBWVWKULYQTDWIPECJNOCIEFFTVBCBNYUEXIXHFQANPOSAWQASIPRIBNGAGKYDJKEZRVCNNUTKCZWJDTXMXNKCPBVFYSSBDEOYHYHZFPOFOILISHKJUTDNXJVUQPRSEZSSXQQPCLAETXGOZYABUMDKNPLNCAWHRDVWWFTHZVDCUMLGLSVLEGOIFZUJR");

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
    msg.setTimeStamp(0.112535154623);
    msg.setSource(45588U);
    msg.setSourceEntity(55U);
    msg.setDestination(14928U);
    msg.setDestinationEntity(54U);
    msg.timeout = 59483U;
    msg.flags = 116U;
    msg.lat = 0.581944985554;
    msg.lon = 0.335649198734;
    msg.start_z = 0.220412200896;
    msg.start_z_units = 41U;
    msg.end_z = 0.656045522028;
    msg.end_z_units = 135U;
    msg.radius = 0.447452684932;
    msg.speed = 0.243026954114;
    msg.speed_units = 159U;
    msg.custom.assign("SSNEAIEOPUPPIUYSFVTQZYMAZUPRCORDTZMPNHXUXBKHAHBZYJIEAGZWMJWQRWUCXSDCFKDIQIAXANCOGKUCJARXUCBKJVVMQLGDGQONCDTWVFILWUISQYVHYJXFAVTQNBYKBEEKFVLOJHTMCJFRXFRSCGJLGXZDSMRKSKVIGYTDWFDQBEPLMSKWEI");

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
    msg.setTimeStamp(0.350288084184);
    msg.setSource(21328U);
    msg.setSourceEntity(114U);
    msg.setDestination(17592U);
    msg.setDestinationEntity(131U);
    msg.timeout = 110U;
    msg.flags = 212U;
    msg.lat = 0.606082653386;
    msg.lon = 0.604044016307;
    msg.start_z = 0.19427543437;
    msg.start_z_units = 61U;
    msg.end_z = 0.500706033172;
    msg.end_z_units = 52U;
    msg.radius = 0.0803067100293;
    msg.speed = 0.368422194122;
    msg.speed_units = 32U;
    msg.custom.assign("PMTXQTEWYBFHAUNQJYEDPZKRCKDIWUJHASKECLVNMVFRSABILVCTWGVCEAXULKQXYWEOFIGSBUNPEGGQJDRLMRVQQZXZVEODBPIOZUSUYYCMRSJVILWOICGBQXOHVGJRYBWXHSGQOTTRYKGMBKRMFPJPOFK");

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
    msg.setTimeStamp(0.922991199285);
    msg.setSource(26533U);
    msg.setSourceEntity(100U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(63U);
    msg.timeout = 37646U;
    msg.flags = 173U;
    msg.lat = 0.557385585098;
    msg.lon = 0.795304666285;
    msg.start_z = 0.311487492322;
    msg.start_z_units = 203U;
    msg.end_z = 0.428064136809;
    msg.end_z_units = 123U;
    msg.radius = 0.876493036048;
    msg.speed = 0.52089246565;
    msg.speed_units = 10U;
    msg.custom.assign("ZQEWXKXYMCKVYGXYGHNHEPDOLAXUTJUPPXDWSCDRDJECLTRZFAZYMNUROJTGRFSMIWDLCGFOVNHVIOQUEHBLGUPFZONSNKVFZZXBIIDRAJJWWCIKNAVLZWILLCBBUYPKSMWUHTCKFDCXRNPGOMYQESTBMPBJMZVUMWPQKRGFNEJWREHDFLONAH");

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
    msg.setTimeStamp(0.520933811806);
    msg.setSource(19175U);
    msg.setSourceEntity(189U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(152U);
    msg.timeout = 3567U;
    msg.lat = 0.909943353667;
    msg.lon = 0.417024742545;
    msg.z = 0.948607038523;
    msg.z_units = 198U;
    msg.speed = 0.709782459902;
    msg.speed_units = 122U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.162882547371;
    tmp_msg_0.y = 0.459659842561;
    tmp_msg_0.z = 0.567345932167;
    tmp_msg_0.t = 0.341869616574;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JMCZKBGVFEHACPFFIQORDSLOXYVOHAUZROPVTLOGZUJNEHMAEPNDAABPTQEMSDYUVMMQYTIWCZWNNUVTKCSNYZTVEEIRWGFGPOWHCIVZJEWRNOYTIYSDPCTHQPFJRHRVFCWASLNSUXGGBLPJEKXXBAWRJWDMZGEFWNDBIVHMKUCKZBJC");

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
    msg.setTimeStamp(0.837594576123);
    msg.setSource(11315U);
    msg.setSourceEntity(32U);
    msg.setDestination(42224U);
    msg.setDestinationEntity(110U);
    msg.timeout = 48357U;
    msg.lat = 0.0548888800242;
    msg.lon = 0.420057904676;
    msg.z = 0.0744087728509;
    msg.z_units = 249U;
    msg.speed = 0.0354783760474;
    msg.speed_units = 26U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.571211856523;
    tmp_msg_0.y = 0.812695294903;
    tmp_msg_0.z = 0.0523517694165;
    tmp_msg_0.t = 0.588868880745;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KTLMRPJWGCRBUNWAAKIOMPJRQGPGXWMGVGMUQTJOWRAVLCPLAHHKXJNNDDBLGAPZBBBZFGESNZPOCKLFULT");

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
    msg.setTimeStamp(0.870726271915);
    msg.setSource(44476U);
    msg.setSourceEntity(115U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(63U);
    msg.timeout = 37081U;
    msg.lat = 0.0615864834141;
    msg.lon = 0.302375568477;
    msg.z = 0.830718095681;
    msg.z_units = 210U;
    msg.speed = 0.69829315681;
    msg.speed_units = 245U;
    msg.custom.assign("ISFVZPAZVBBPBNYQJHVKWQWONEIOMSLMMXSOUPTWQYUCBTPOZSJHHPARCZXOBGEAHYNZWJOEEVAUHOTQSDYBRURLMGLISXMTEFMWKLGHKFMKGJQNTANNPYKWADCYEXAULJERZALXCNBOQJYVBKMXUZJELFNQGXWOJWKDNSOVRGTLXXIRTYRGPAURQFPMCFSGBANII");

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
    msg.setTimeStamp(0.0383301960372);
    msg.setSource(58447U);
    msg.setSourceEntity(206U);
    msg.setDestination(16119U);
    msg.setDestinationEntity(223U);
    msg.x = 0.421977507833;
    msg.y = 0.706895776335;
    msg.z = 0.439718049192;
    msg.t = 0.567835840038;

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
    msg.setTimeStamp(0.229051076846);
    msg.setSource(61037U);
    msg.setSourceEntity(19U);
    msg.setDestination(7379U);
    msg.setDestinationEntity(80U);
    msg.x = 0.495328662345;
    msg.y = 0.784894673467;
    msg.z = 0.37866116087;
    msg.t = 0.29108813117;

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
    msg.setTimeStamp(0.82130100512);
    msg.setSource(37407U);
    msg.setSourceEntity(230U);
    msg.setDestination(25479U);
    msg.setDestinationEntity(152U);
    msg.x = 0.11630051266;
    msg.y = 0.120448529752;
    msg.z = 0.135592632223;
    msg.t = 0.0277920064508;

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
    msg.setTimeStamp(0.026964184366);
    msg.setSource(53196U);
    msg.setSourceEntity(0U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(148U);
    msg.timeout = 35103U;
    msg.name.assign("LDUOPRJMWMEMNUWVJDRPBFZPKRNHPFENBIXLQGCKHISGVJYMYZXPDXHETCPSBXLDUTUGJZWYGTTFHDPGRVNLWW");
    msg.custom.assign("WSRXRUDLJWDOHZZZNCKLVRPCSTYSBHFCACODNOHJFMAEGYPVJTNZFIGHJNWFFTKQEVOFEYITSWORCRUZXPIJCDGBLQJUASECUTOLVNBTNDKVNOYGQALUIKCMAYPKKEXMIHUHRGPTWREQZHHKVSMEQXASGMDEGNYIOSWPZAEZBRFMGV");

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
    msg.setTimeStamp(0.166795400904);
    msg.setSource(43756U);
    msg.setSourceEntity(97U);
    msg.setDestination(11620U);
    msg.setDestinationEntity(219U);
    msg.timeout = 57614U;
    msg.name.assign("NKUDRBDATGRSHQGEXRCMPPCRKZEOUEETWEYOKOXXCFZYSRUGBIJLQKILAMWPFHIFIZDWLVZUZXLSCGQEHQOYQJFPVMFVUUANMVIQVARSATBXAZXYIFTDPMOHJWMNKZWWFPUUMGKPA");
    msg.custom.assign("BNVRXJKAUBJIYDIOBINAAVTAPYTELMCWYLXFCPAFJYUPFRQROYMYSQXCWQLSCLGVWDBFIGKXKTTUNGVZHQJDXEDJEBNYFWOHPVUSNXJUJMEMFIHZRADCPZASJOSCDXGGVZSHZYQZQZNGSMECZOMSHGOOLGCTDCBFKOHYMASKSRDKHWVXNGWIPPCUXBEOTALZGMIXHKFANTUUPEIFLZBRRULNIBQFTDJWTRKMTELWKVDVIPEJQQPUBVNEHKH");

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
    msg.setTimeStamp(0.424353852259);
    msg.setSource(10373U);
    msg.setSourceEntity(202U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(80U);
    msg.timeout = 8664U;
    msg.name.assign("LTPLKUWTZNCWJLIYHMNACLSXILGKWXOPEMMUBQVLHUZJXPDSEOCZVF");
    msg.custom.assign("QJLYOOBPUHBXTPJFRSSXBAKYNVLENDCVGEWPMZKJDESALS");

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
    msg.setTimeStamp(0.150340531511);
    msg.setSource(16852U);
    msg.setSourceEntity(163U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.134733607587;
    msg.lon = 0.966398010033;
    msg.z = 0.466425380071;
    msg.z_units = 133U;
    msg.speed = 0.405658701965;
    msg.speed_units = 11U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0440836005812;
    tmp_msg_0.y = 0.755913077113;
    tmp_msg_0.z = 0.294116773243;
    tmp_msg_0.t = 0.487576889647;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 41866U;
    tmp_msg_1.off_x = 0.962419164547;
    tmp_msg_1.off_y = 0.0452122583295;
    tmp_msg_1.off_z = 0.890798668437;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.200184175879;
    msg.custom.assign("RDTWIFNZMCFEQXPGZYPUMMJKULH");

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
    msg.setTimeStamp(0.745015552397);
    msg.setSource(3176U);
    msg.setSourceEntity(167U);
    msg.setDestination(30394U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.513883089104;
    msg.lon = 0.00715959203031;
    msg.z = 0.969472401014;
    msg.z_units = 230U;
    msg.speed = 0.260225507998;
    msg.speed_units = 2U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.630809990773;
    tmp_msg_0.y = 0.974898612635;
    tmp_msg_0.z = 0.277280860562;
    tmp_msg_0.t = 0.380033535661;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 52944U;
    tmp_msg_1.off_x = 0.465307917594;
    tmp_msg_1.off_y = 0.398024364548;
    tmp_msg_1.off_z = 0.63651989102;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0270132485855;
    msg.custom.assign("DFHCUIBSSXNZHPDZYFVRDACKLATGKAWJZAFWKFHSHCCDEVQXKSOPZMNGOHNTYCLJYGDKUAHIRDEVFFGLNQXOSNOKXGFQMCVSZBACROHJEVCGMEWVMRYBRUJOCKZQZWEFWMMOJYKWUPAJTUFGRBLGZYWIPVDFOISXSKMYRXPJVRPUDJEUNGEPIHELCLBWQSKMTQPRNBLEQXYQLMUXBEIUPTNLMTAVOVJIYTWYAWUNQBTIITODGZ");

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
    msg.setTimeStamp(0.576391292163);
    msg.setSource(53837U);
    msg.setSourceEntity(175U);
    msg.setDestination(34895U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.210914596492;
    msg.lon = 0.229956718954;
    msg.z = 0.936702171686;
    msg.z_units = 237U;
    msg.speed = 0.367204527533;
    msg.speed_units = 205U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7260U;
    tmp_msg_0.off_x = 0.0390743401379;
    tmp_msg_0.off_y = 0.350970783715;
    tmp_msg_0.off_z = 0.497530259981;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.33049406505;
    msg.custom.assign("MFCDPWTEWFVAMCTNDKSRVSWUADMMNSUNVYBPM");

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
    msg.setTimeStamp(0.63985567664);
    msg.setSource(57181U);
    msg.setSourceEntity(33U);
    msg.setDestination(18844U);
    msg.setDestinationEntity(114U);
    msg.vid = 21924U;
    msg.off_x = 0.975351698154;
    msg.off_y = 0.656775803726;
    msg.off_z = 0.507402085414;

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
    msg.setTimeStamp(0.734440986201);
    msg.setSource(52195U);
    msg.setSourceEntity(122U);
    msg.setDestination(552U);
    msg.setDestinationEntity(8U);
    msg.vid = 25915U;
    msg.off_x = 0.936330218508;
    msg.off_y = 0.0635884912844;
    msg.off_z = 0.296997463032;

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
    msg.setTimeStamp(0.251736268025);
    msg.setSource(4570U);
    msg.setSourceEntity(196U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(166U);
    msg.vid = 52964U;
    msg.off_x = 0.644241241881;
    msg.off_y = 0.619248683151;
    msg.off_z = 0.301439613162;

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
    msg.setTimeStamp(0.212349380908);
    msg.setSource(1388U);
    msg.setSourceEntity(9U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.2962045274);
    msg.setSource(48978U);
    msg.setSourceEntity(46U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.2090379777);
    msg.setSource(9069U);
    msg.setSourceEntity(125U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.16931900488);
    msg.setSource(61383U);
    msg.setSourceEntity(136U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(132U);
    msg.mid = 22376U;

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
    msg.setTimeStamp(0.139851043067);
    msg.setSource(1538U);
    msg.setSourceEntity(102U);
    msg.setDestination(19712U);
    msg.setDestinationEntity(191U);
    msg.mid = 31733U;

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
    msg.setTimeStamp(0.759502962923);
    msg.setSource(33635U);
    msg.setSourceEntity(71U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(211U);
    msg.mid = 57755U;

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
    msg.setTimeStamp(0.517542552814);
    msg.setSource(45111U);
    msg.setSourceEntity(103U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(11U);
    msg.state = 7U;
    msg.eta = 55634U;
    msg.info.assign("RITHNQBXVGIBSCCSTLZLXQQQFDWMMRGYATPS");

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
    msg.setTimeStamp(0.764009021174);
    msg.setSource(26082U);
    msg.setSourceEntity(225U);
    msg.setDestination(64796U);
    msg.setDestinationEntity(164U);
    msg.state = 26U;
    msg.eta = 21020U;
    msg.info.assign("YABGWBCGNEIUXBINJDAYZLWUPLSTLBDYBCAEEMOBCMLMHTVRNIEKUGTDIRHJDDEWOBMZWZLWNQCPAYRCFMTVKIWYUIHF");

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
    msg.setTimeStamp(0.507506836156);
    msg.setSource(50150U);
    msg.setSourceEntity(92U);
    msg.setDestination(58369U);
    msg.setDestinationEntity(124U);
    msg.state = 189U;
    msg.eta = 682U;
    msg.info.assign("OKKNOWSVXWMULHRBFUNGGBNQRSOQBKMTNDIMAJRYQSIUMKERFRLVKYRJGEEEZJLIUHPUJWQMPTFLHJPKPNDDETQABZDPGFSSOYDBUHUVEOUQDAWAFJXOGMYCCGACXXQWQVAQOYLBJYEVCCZZFGYEFCJDFUTOIKNHJIIXFZTCMPHOMTVMANHCXFTQUSNWVXGXLYRIBEPBJTYXWDAKMWSASSLRLIPWYDIIVLNRTB");

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
    msg.setTimeStamp(0.341750661525);
    msg.setSource(58506U);
    msg.setSourceEntity(28U);
    msg.setDestination(9283U);
    msg.setDestinationEntity(159U);
    msg.system = 13886U;
    msg.duration = 51217U;
    msg.speed = 0.477934163261;
    msg.speed_units = 42U;
    msg.x = 0.688514981149;
    msg.y = 0.814514372289;
    msg.z = 0.724601313839;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.399742835331);
    msg.setSource(17259U);
    msg.setSourceEntity(253U);
    msg.setDestination(50458U);
    msg.setDestinationEntity(116U);
    msg.system = 37014U;
    msg.duration = 5554U;
    msg.speed = 0.627393486422;
    msg.speed_units = 25U;
    msg.x = 0.012373088666;
    msg.y = 0.526321877447;
    msg.z = 0.943794362985;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.836033286671);
    msg.setSource(48912U);
    msg.setSourceEntity(140U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(45U);
    msg.system = 46546U;
    msg.duration = 4843U;
    msg.speed = 0.353057920584;
    msg.speed_units = 241U;
    msg.x = 0.482267386006;
    msg.y = 0.210592688341;
    msg.z = 0.341159427379;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.325324082093);
    msg.setSource(36647U);
    msg.setSourceEntity(37U);
    msg.setDestination(46118U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.586185939871;
    msg.lon = 0.583689993788;
    msg.speed = 0.647720949771;
    msg.speed_units = 119U;
    msg.duration = 51457U;
    msg.sys_a = 59882U;
    msg.sys_b = 27827U;
    msg.move_threshold = 0.930329440716;

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
    msg.setTimeStamp(0.213220894967);
    msg.setSource(27961U);
    msg.setSourceEntity(71U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.628005629076;
    msg.lon = 0.596040217182;
    msg.speed = 0.034917685467;
    msg.speed_units = 4U;
    msg.duration = 47793U;
    msg.sys_a = 48167U;
    msg.sys_b = 7456U;
    msg.move_threshold = 0.163238391817;

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
    msg.setTimeStamp(0.362664777358);
    msg.setSource(53002U);
    msg.setSourceEntity(170U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.955912938632;
    msg.lon = 0.468770617167;
    msg.speed = 0.41661533955;
    msg.speed_units = 200U;
    msg.duration = 5682U;
    msg.sys_a = 23935U;
    msg.sys_b = 10407U;
    msg.move_threshold = 0.47296540668;

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
    msg.setTimeStamp(0.773425965778);
    msg.setSource(37163U);
    msg.setSourceEntity(9U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.757079169051;
    msg.lon = 0.0217037112624;
    msg.z = 0.602378189163;
    msg.z_units = 184U;
    msg.speed = 0.682747388586;
    msg.speed_units = 24U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.617332623672;
    tmp_msg_0.lon = 0.0874949741968;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UTTSVHGZMOARJQSNHEHGDLIKBGMYTYKJTEHVMZMNATYADJZUVCOWVSCPHGWV");

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
    msg.setTimeStamp(0.170447508455);
    msg.setSource(8342U);
    msg.setSourceEntity(42U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.011563582873;
    msg.lon = 0.307957878703;
    msg.z = 0.810928779489;
    msg.z_units = 181U;
    msg.speed = 0.0392585046725;
    msg.speed_units = 254U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.000423797307211;
    tmp_msg_0.lon = 0.836162484697;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LHGKYLREXDNYSWGVJPCZOFGTXFZYCBHJQNLJIHTXYSGQWRLCEZDFMLDYKCUNVHJDGPNNPCIJBFMLGXKZAHJZPDIYEAYTCODZFBJXVOUBVUOBALDDNCIHVKBEGNMQUYTATXMT");

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
    msg.setTimeStamp(0.793219123914);
    msg.setSource(11913U);
    msg.setSourceEntity(191U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.0661155940516;
    msg.lon = 0.738944485816;
    msg.z = 0.532621984906;
    msg.z_units = 26U;
    msg.speed = 0.502313717592;
    msg.speed_units = 78U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.412606801174;
    tmp_msg_0.lon = 0.718534838413;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GVTJHUISRIKGDIRZAVLNKLWXVZYHIYROGYRBTVZUQSZQXMUOOMBAYNNTAXOCOVWSCBRTGPAKJSWTGKEIPEJCZTMZPFEJAQJYKZXIWPIKPLZCHDAQEMGUEBQRLVRJCJBWEFREFGUTDODFSLHPOHXIVXBGDLWNWMENNJSAZPTYYFEXBMVLDBKHTHKYJWVQNJNAWGRLOCFMQMBXNQAHKGVCSKZLSUPDMHYTDDFFQSAXCFUBIFNQEOIDWRULCOPPY");

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
    msg.setTimeStamp(0.32849710126);
    msg.setSource(14519U);
    msg.setSourceEntity(193U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.17262626323;
    msg.lon = 0.438509733301;

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
    msg.setTimeStamp(0.299925250994);
    msg.setSource(6356U);
    msg.setSourceEntity(118U);
    msg.setDestination(20185U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.488121349708;
    msg.lon = 0.80250577823;

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
    msg.setTimeStamp(0.403899587151);
    msg.setSource(27946U);
    msg.setSourceEntity(88U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0194706938577;
    msg.lon = 0.595858647245;

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
    msg.setTimeStamp(0.87484606022);
    msg.setSource(65503U);
    msg.setSourceEntity(230U);
    msg.setDestination(31207U);
    msg.setDestinationEntity(126U);
    msg.timeout = 52885U;
    msg.lat = 0.532772167594;
    msg.lon = 0.764541747028;
    msg.z = 0.809063185014;
    msg.z_units = 100U;
    msg.pitch = 0.968476226472;
    msg.amplitude = 0.0841770458951;
    msg.duration = 53015U;
    msg.speed = 0.638044962556;
    msg.speed_units = 227U;
    msg.radius = 0.871541881119;
    msg.direction = 127U;
    msg.custom.assign("GTYHPEABYWDJINWUCRMHCOFOSSGBGZLLNDDTRQZNECSRRIDOKZAUVFZOWOGPKEDCEOAGQXXYPCTGQGSBEHKWMCALFNYVGBJUZYHMIKRRBFKAVYTKZGUUVMXIFOAGETTJADFSHYOWNBQMLURSKCRJJLUUEOCDIXAJMLXLXPIJCJVFYZLPFZEQTDDUPWHTFQLSIWSXTHENIZVIPBCSVVFPRNQOHJKKDZMWMXUYVTNHNAMYVPMJKXBRAPQIWSHB");

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
    msg.setTimeStamp(0.420075269966);
    msg.setSource(51910U);
    msg.setSourceEntity(96U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(120U);
    msg.timeout = 42521U;
    msg.lat = 0.0780416892665;
    msg.lon = 0.958869199065;
    msg.z = 0.664920534232;
    msg.z_units = 61U;
    msg.pitch = 0.312174173445;
    msg.amplitude = 0.282199143957;
    msg.duration = 42862U;
    msg.speed = 0.372076987494;
    msg.speed_units = 206U;
    msg.radius = 0.281860969588;
    msg.direction = 64U;
    msg.custom.assign("MEKHMJVRKBMQZEVFERFGRXODPXANNXHGFJWAJXPXOBMLAXMZINWTQKXRNSFBBYTLWLDUYXYLTGJELEMKCZIUKUYRZDNRBJKDMPRWNXIZUMPQGBDUMAHSLPNCCGYOYVKFLNOFNIWSVBCVFLVTJGHUBQEQHSWGUHOCOABOYECGTGYOQODU");

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
    msg.setTimeStamp(0.578903870577);
    msg.setSource(39545U);
    msg.setSourceEntity(99U);
    msg.setDestination(3856U);
    msg.setDestinationEntity(122U);
    msg.timeout = 38627U;
    msg.lat = 0.700010505241;
    msg.lon = 0.847125896145;
    msg.z = 0.450615580722;
    msg.z_units = 36U;
    msg.pitch = 0.0291975604414;
    msg.amplitude = 0.1068693644;
    msg.duration = 56812U;
    msg.speed = 0.223935077307;
    msg.speed_units = 88U;
    msg.radius = 0.770683061809;
    msg.direction = 11U;
    msg.custom.assign("GFNPCJSKBUDTVEJUCCUWOZISNXJLKBFYHLVPUCWGZOQPZNRIAEVWHUDPIOKITHRAWEEMZXWYJFAGKVCQOVDZYARO");

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
    msg.setTimeStamp(0.736543616444);
    msg.setSource(21955U);
    msg.setSourceEntity(141U);
    msg.setDestination(11001U);
    msg.setDestinationEntity(29U);
    msg.control_src = 23520U;
    msg.control_ent = 249U;
    msg.timeout = 0.659094473568;
    msg.loiter_radius = 0.354913092898;
    msg.altitude_interval = 0.0605040197731;

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
    msg.setTimeStamp(0.320559836609);
    msg.setSource(48647U);
    msg.setSourceEntity(199U);
    msg.setDestination(26088U);
    msg.setDestinationEntity(106U);
    msg.control_src = 49421U;
    msg.control_ent = 78U;
    msg.timeout = 0.850031081967;
    msg.loiter_radius = 0.283024007611;
    msg.altitude_interval = 0.188296584001;

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
    msg.setTimeStamp(0.921916147108);
    msg.setSource(40336U);
    msg.setSourceEntity(81U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(206U);
    msg.control_src = 26962U;
    msg.control_ent = 252U;
    msg.timeout = 0.894625173903;
    msg.loiter_radius = 0.267845064141;
    msg.altitude_interval = 0.20968675568;

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
    msg.setTimeStamp(0.423571683425);
    msg.setSource(52870U);
    msg.setSourceEntity(75U);
    msg.setDestination(54905U);
    msg.setDestinationEntity(99U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.195143365771;
    tmp_msg_0.speed_units = 44U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.88289611516;
    tmp_msg_1.z_units = 191U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.815831786095;
    msg.lon = 0.301111093753;
    msg.radius = 0.328480198653;

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
    msg.setTimeStamp(0.424500882029);
    msg.setSource(52737U);
    msg.setSourceEntity(209U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(185U);
    msg.flags = 59U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.913720275987;
    tmp_msg_0.speed_units = 178U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0344911958705;
    tmp_msg_1.z_units = 36U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.456300815854;
    msg.lon = 0.00605790298032;
    msg.radius = 0.512371675442;

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
    msg.setTimeStamp(0.063279303119);
    msg.setSource(57124U);
    msg.setSourceEntity(80U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(194U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.618660566778;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.478132251353;
    tmp_msg_1.z_units = 157U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0189387504981;
    msg.lon = 0.284450624725;
    msg.radius = 0.326221422528;

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
    msg.setTimeStamp(0.0493360320902);
    msg.setSource(7338U);
    msg.setSourceEntity(194U);
    msg.setDestination(61118U);
    msg.setDestinationEntity(144U);
    msg.control_src = 39274U;
    msg.control_ent = 30U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 73U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.252324682037;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.510519418706;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33173938107;
    tmp_msg_0.lon = 0.600271110991;
    tmp_msg_0.radius = 0.522609404242;
    msg.reference.set(tmp_msg_0);
    msg.state = 36U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.59957646594);
    msg.setSource(16606U);
    msg.setSourceEntity(21U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(17U);
    msg.control_src = 62486U;
    msg.control_ent = 40U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 213U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.221752242517;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0922480374254;
    tmp_tmp_msg_0_1.z_units = 121U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.150843210669;
    tmp_msg_0.lon = 0.746724147337;
    tmp_msg_0.radius = 0.165428588877;
    msg.reference.set(tmp_msg_0);
    msg.state = 14U;
    msg.proximity = 146U;

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
    msg.setTimeStamp(0.159048075167);
    msg.setSource(63522U);
    msg.setSourceEntity(139U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(15U);
    msg.control_src = 58198U;
    msg.control_ent = 189U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 237U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.159961744239;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.883809802465;
    tmp_tmp_msg_0_1.z_units = 164U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.523299054529;
    tmp_msg_0.lon = 0.745364244994;
    tmp_msg_0.radius = 0.378427818968;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 125U;

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
    msg.setTimeStamp(0.498194813235);
    msg.setSource(42779U);
    msg.setSourceEntity(83U);
    msg.setDestination(56921U);
    msg.setDestinationEntity(212U);
    msg.op_mode = 163U;
    msg.error_count = 70U;
    msg.error_ents.assign("BYGYLAHUTACGTKOUGWHFNAVCSUVKMKBMQQVNLZAXYAZXHDXNXHSFZPDSXPGDVFSOTMPOWQCYFZDIJXXYFEUQKGWRVIIPWBHLXIKCUDOKIEJPPRAQMQERITVFTGNMPWWXQTBRTEPVYGLSWWFDEFTAZVJURZJUCQOZJGBWBIIAHNGDGCMMVHBERMLTFSTCJJLJYDAENNPQHNYKHWQOUSXIORNBMROJKBELRICZYOS");
    msg.maneuver_type = 46785U;
    msg.maneuver_stime = 0.525485480013;
    msg.maneuver_eta = 41959U;
    msg.control_loops = 1310098971U;
    msg.flags = 118U;
    msg.last_error.assign("YGFBPZLHJNMFOKDPXALEMXEWGFETNJUBKROUNXMLPT");
    msg.last_error_time = 0.260559995633;

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
    msg.setTimeStamp(0.042062937595);
    msg.setSource(27717U);
    msg.setSourceEntity(232U);
    msg.setDestination(34485U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 90U;
    msg.error_count = 148U;
    msg.error_ents.assign("PDDLTURHRUZDTDAI");
    msg.maneuver_type = 21388U;
    msg.maneuver_stime = 0.669143396446;
    msg.maneuver_eta = 64049U;
    msg.control_loops = 3951981540U;
    msg.flags = 136U;
    msg.last_error.assign("AYWBEGQECNAKAQQSKBCBZVPLVVPDXWFMPHWLGYAPIYIL");
    msg.last_error_time = 0.412462547343;

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
    msg.setTimeStamp(0.946319857473);
    msg.setSource(57966U);
    msg.setSourceEntity(220U);
    msg.setDestination(24533U);
    msg.setDestinationEntity(180U);
    msg.op_mode = 148U;
    msg.error_count = 121U;
    msg.error_ents.assign("CSVIKNNWJIENCGDBYNRQCUBCLSLGRVVROEWQXM");
    msg.maneuver_type = 19321U;
    msg.maneuver_stime = 0.388907823765;
    msg.maneuver_eta = 55496U;
    msg.control_loops = 1920446600U;
    msg.flags = 15U;
    msg.last_error.assign("KVNJXNYEFFBFHEOSLSUZTDQMPHTLDBONJVSFHRZYCUGKEANAEAWGSPNLKVMZJBNWGCPXEXADJZPWOQWTPPUVIIFWYZBDAIVIHJYNBKSBLLAKDLDFCXTNDDP");
    msg.last_error_time = 0.645257799556;

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
    msg.setTimeStamp(0.124559843177);
    msg.setSource(1052U);
    msg.setSourceEntity(174U);
    msg.setDestination(31409U);
    msg.setDestinationEntity(48U);
    msg.type = 101U;
    msg.request_id = 56390U;
    msg.command = 124U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 23805U;
    tmp_msg_0.lat = 0.80512410187;
    tmp_msg_0.lon = 0.984898597659;
    tmp_msg_0.z = 0.740860956002;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.speed = 0.207634237473;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.duration = 29291U;
    tmp_msg_0.radius = 0.442533367501;
    tmp_msg_0.flags = 90U;
    tmp_msg_0.custom.assign("HXIKFSWRRTECZVZVCZJXZSALNDAQVNKKTYZPYEJJFUCUHOIYDSOLNGDUKVSPMMJWKDXBAVDBHHOJPGMVNDAMECYCAFWUVPLSHUQBSQXBBEEI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55243U;
    msg.info.assign("BSSZXLVFZBCBIAYEXKXLLNFDACPDPFJEUJOOJDDKAYWGQPEZVJGJZMPPFXHCZMUXUMMMTILBUYSSWDPANNVJDVM");

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
    msg.setTimeStamp(0.111427037689);
    msg.setSource(29332U);
    msg.setSourceEntity(198U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(192U);
    msg.type = 93U;
    msg.request_id = 47242U;
    msg.command = 129U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 37944U;
    tmp_msg_0.custom.assign("TXTOHNSFFPTCWCODBYJINXQRUCIVDRELZKAEJZLQJPIQGKBYEPUCENSGFLVQRUMVRJOKSRDWSVHZWEYKGMTHUGYZGPEFXHIQCMNAAJOEJORSBEKXLRBCYADSZGGWLGULKHVQBMWAVPQDMCFSHZVPTCRYXSBWRDWFCQIANO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2370U;
    msg.info.assign("OUUEJHHKHACZNTEJWZGLKDHPDONPDLISFEYGMVNIFCRSVFLZRUJTENURKRWZWNWBPYVXXAOTPVJPOKIZMFKASZMBOBUUMYADZFTSIMVPDRGMXHQGCJSLDPOMXQNNHLFABIIMUEQQGKQXCLOCJWBTZVVTVYGFYRFXKTWISLNQTRBOYAMJPWRTLTXEYPXGWCCQZXJQHVDISWCDECJHEDYXBBIPLLZRHABWMFUASNYQSKEDFEGJBHVNUOAS");

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
    msg.setTimeStamp(0.603413631657);
    msg.setSource(49739U);
    msg.setSourceEntity(232U);
    msg.setDestination(10062U);
    msg.setDestinationEntity(165U);
    msg.type = 24U;
    msg.request_id = 44511U;
    msg.command = 136U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 18179U;
    tmp_msg_0.lat = 0.186745948253;
    tmp_msg_0.lon = 0.529508051397;
    tmp_msg_0.z = 0.994573769885;
    tmp_msg_0.z_units = 170U;
    tmp_msg_0.speed = 0.917645579136;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.duration = 54712U;
    tmp_msg_0.radius = 0.922283070047;
    tmp_msg_0.flags = 156U;
    tmp_msg_0.custom.assign("CYYAQALVGGWHIVEXZEPZKDMTMHKXXLXKOZJQXQJTZYVILAQRJUBITHFIWZPJTLMGRNFOCFWANXOAOEJGRYFZTSRLMVQDCGGJPVPBKNZVKQEWOCCMBJKZUSYYXRUEARAHCMWBDRSSYVTNIIVVGUPZDUOONOPWBUDVFTEMFFQAHRMBNURTLQHNWKYKLXNBNLLESQPHGNTFPHTIJFPDOHKSASUCMGDMYWUFCQC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4397U;
    msg.info.assign("UHMVSDWYJGFNBHHTPPOHUOORD");

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
    msg.setTimeStamp(0.597051565526);
    msg.setSource(37473U);
    msg.setSourceEntity(222U);
    msg.setDestination(56279U);
    msg.setDestinationEntity(21U);
    msg.command = 121U;
    msg.entities.assign("BVOPGDSABSBZZNRQILVYQASHNNMQPRMDHYBUISJUTWRRODBZHNTKSEGUQVSWDWYRCVBTIIAPFFXFNMXEAIZPTGSGJQDJOHWUPOFTRUNHFNXLCQQKGFMULKZRVPUTJKLDXKLIKXEEOZILTVLIJCKUILYIUDATFXNYQEYOKQVVREEJKOCHVQYCKEXTTUJJZOZAZCAJPMFFDCBSXDWEXCMFMPH");

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
    msg.setTimeStamp(0.443344037652);
    msg.setSource(39778U);
    msg.setSourceEntity(23U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(30U);
    msg.command = 221U;
    msg.entities.assign("WQJJGBRGABHXXLWMGUBMOEHAMJXBDOGYKIWJNVNDFECTGDKNTSMDNFRKRYMRVRPLXPMOAQCKUECYERGPWYFTICNBFQKNCDAHZSPLXEICZVRISFZAROBIOLGKOWJIYJQUTSWKNSPEPAVJHMPSWML");

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
    msg.setTimeStamp(0.673781710532);
    msg.setSource(43739U);
    msg.setSourceEntity(120U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(209U);
    msg.command = 39U;
    msg.entities.assign("ZDBBONWPCBREJSMMXCDJVTGCQEGTXYHNGQLFYRRDMHLLORMT");

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
    msg.setTimeStamp(0.811730173636);
    msg.setSource(65031U);
    msg.setSourceEntity(205U);
    msg.setDestination(49861U);
    msg.setDestinationEntity(134U);
    msg.mcount = 9U;
    msg.mnames.assign("QBHJKMCHTSAGCCHGJZIGJZJROBBNETTHU");
    msg.ecount = 133U;
    msg.enames.assign("BRLXDMYMXTHJACPWCIJOJLTIDBPMKNGSLJFMZIMLWOGYKFJATCXDKVQGJITNNVCFELFFENTYZEQTWYSVCFPWNGSPWUTGBSXZNEBYLKFIJKZIQVBXAQURUCNRCQNXMGOHDUOVPYZXDMXHXONATDVLTIAUERIQRCMQZAIOKZHZAVEEWBODNPOGQVWQVLWLWSFCSAJORDZXKSCMJVIHLUGHRYKWTAKKPUOMAZSBDPUYHHER");
    msg.ccount = 183U;
    msg.cnames.assign("RJYIQENXZPUPBUQVBIZIHSWALFRJPVEPTTRSAEAAHTNNBWJEGYOFRMXRQJCKIWWJLKTXJMJIGLDIMHABYJEFIGJPHXCYKCASUTBEMSFNYWPUIRKGTUKOXDFBGKDBRMZPFPOQSAVDWRXJLHGHFLDKXCNKMHVSIQFUOYZDQOVDGOADLHCCSRFCVQMOGUTCLSGRQINAHP");
    msg.last_error.assign("BCZFEFNGLJXKYNYSVTJVSLZXQNLFGOGYRMPMBIFMYMYTMXHJUGDMDWUWFVXARWJUDRTHAGMKZTVLYROALKXNLIDETSAKDTEILCZORDRRENLZVGKXUUEFZNDSAGCPQNZLCCPNIFNJVKNBQU");
    msg.last_error_time = 0.473258630416;

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
    msg.setTimeStamp(0.136721793299);
    msg.setSource(16229U);
    msg.setSourceEntity(43U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(110U);
    msg.mcount = 40U;
    msg.mnames.assign("NZYULVPYVFSUAYVKGEMVJHRRNFZYIEAXXGBQHJESZLEHPELKDJLDNGRZRLGCLZWXZYFUIKDWBCSMWYKOFNBOBJAAZYCZBMTQAEQDUYGLBWTWVTSRLFMMMIDGESJUNOHSBGOOCOHYCHQPKDTJ");
    msg.ecount = 68U;
    msg.enames.assign("FAECMRUFXWMKUXIURFAATQBAOMSGKGTOIJCDFICXAZNJYLVBSRVYGYFVYJVLZNDALRFLLCCIMCRQIQKYMZPUEPPBGRICZSNASNBMTXENNVEOXRXQZOUPZGYJDEVOQWWDHAKWFNXKZGOIRYZHSUVYPFMQIQUXMLKBGJAEUAZKIENHQDDHBSWLET");
    msg.ccount = 129U;
    msg.cnames.assign("NJGCNFYJQKPJASTBNYWGFIWBNGMNFVJLQZOLFYIFTGADURXOMCF");
    msg.last_error.assign("NVZOFHXZGZTIBGPDNAITJZWUEQHYMNDLENOGYDYTEDRIJCKUJBCXXYYVVLLHUOKTRYSOAFFHJHBQTMHWJPQOSEBRNRHSSVKPAZBNVRRQXQMDCPHLYPK");
    msg.last_error_time = 0.185004708091;

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
    msg.setTimeStamp(0.239724133392);
    msg.setSource(58481U);
    msg.setSourceEntity(139U);
    msg.setDestination(36353U);
    msg.setDestinationEntity(186U);
    msg.mcount = 120U;
    msg.mnames.assign("EPUWLORJSZVNBEGYHXSYSPCUSPFVHLDHQDOCZIRAUJNNYLQFFJYPAVURYJBVMBBJXBAOHCYOQXZUYOLWFDW");
    msg.ecount = 202U;
    msg.enames.assign("IGBWDFHNHPGDFSIACXLVNQFCEYCNMGIPSEFWFTOAMKUYWJOSKJCZVUALNHZJLWXJHYMYLUZZDTQEAFUACXPKSTDMDGBTCMIMSYCETXLEZVHBUDOFIHMQLGRVUEGTKGPLRKJHONWZYDOTBVBRXOKQASIHKRURDMXZS");
    msg.ccount = 230U;
    msg.cnames.assign("VLZHWXTWYVXUPKTNAQIHGPKBRXRTRYUZVDVIJQJUWQYGVLUYRJYHBTCBKBYAADFPCQPHKFJBQGMIJHFZDDZXYCFFKPSGPTZJ");
    msg.last_error.assign("NCYPVEGUICGWSTLYGMVICFANRZI");
    msg.last_error_time = 0.724275121045;

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
    msg.setTimeStamp(0.339717776653);
    msg.setSource(55562U);
    msg.setSourceEntity(126U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(245U);
    msg.mask = 174U;
    msg.max_depth = 0.04965403272;
    msg.min_altitude = 0.401132685169;
    msg.max_altitude = 0.837493428705;
    msg.min_speed = 0.195748402837;
    msg.max_speed = 0.739855958734;
    msg.max_vrate = 0.949946630912;
    msg.lat = 0.167257864465;
    msg.lon = 0.660049103517;
    msg.orientation = 0.390825590636;
    msg.width = 0.693713093452;
    msg.length = 0.266405803626;

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
    msg.setTimeStamp(0.198915441693);
    msg.setSource(51376U);
    msg.setSourceEntity(62U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(113U);
    msg.mask = 31U;
    msg.max_depth = 0.0541172224375;
    msg.min_altitude = 0.200612608905;
    msg.max_altitude = 0.183496279909;
    msg.min_speed = 0.564438472791;
    msg.max_speed = 0.278614007605;
    msg.max_vrate = 0.682996042149;
    msg.lat = 0.51364651559;
    msg.lon = 0.154390453497;
    msg.orientation = 0.225627757759;
    msg.width = 0.521676343019;
    msg.length = 0.650583957718;

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
    msg.setTimeStamp(0.654270949147);
    msg.setSource(38389U);
    msg.setSourceEntity(129U);
    msg.setDestination(12859U);
    msg.setDestinationEntity(153U);
    msg.mask = 107U;
    msg.max_depth = 0.592599724276;
    msg.min_altitude = 0.082970629812;
    msg.max_altitude = 0.795874789318;
    msg.min_speed = 0.894219965133;
    msg.max_speed = 0.20494801777;
    msg.max_vrate = 0.59906181791;
    msg.lat = 0.858987042751;
    msg.lon = 0.90472055101;
    msg.orientation = 0.472943536131;
    msg.width = 0.222678319113;
    msg.length = 0.108519294557;

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
    msg.setTimeStamp(0.726905378345);
    msg.setSource(39601U);
    msg.setSourceEntity(66U);
    msg.setDestination(39376U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.872409562477);
    msg.setSource(56248U);
    msg.setSourceEntity(21U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.468270657052);
    msg.setSource(50222U);
    msg.setSourceEntity(216U);
    msg.setDestination(56732U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.308916830945);
    msg.setSource(2972U);
    msg.setSourceEntity(116U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(176U);
    msg.duration = 33483U;

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
    msg.setTimeStamp(0.208588374665);
    msg.setSource(896U);
    msg.setSourceEntity(94U);
    msg.setDestination(12732U);
    msg.setDestinationEntity(48U);
    msg.duration = 11377U;

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
    msg.setTimeStamp(0.873798542439);
    msg.setSource(1375U);
    msg.setSourceEntity(159U);
    msg.setDestination(39083U);
    msg.setDestinationEntity(148U);
    msg.duration = 10386U;

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
    msg.setTimeStamp(0.828086136387);
    msg.setSource(34783U);
    msg.setSourceEntity(123U);
    msg.setDestination(38342U);
    msg.setDestinationEntity(229U);
    msg.enable = 98U;
    msg.mask = 934522245U;
    msg.scope_ref = 0.347794163588;

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
    msg.setTimeStamp(0.735455457583);
    msg.setSource(57697U);
    msg.setSourceEntity(228U);
    msg.setDestination(33975U);
    msg.setDestinationEntity(188U);
    msg.enable = 123U;
    msg.mask = 2009706926U;
    msg.scope_ref = 0.86125993499;

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
    msg.setTimeStamp(0.835356331259);
    msg.setSource(43071U);
    msg.setSourceEntity(113U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(27U);
    msg.enable = 178U;
    msg.mask = 1533508794U;
    msg.scope_ref = 0.451011187977;

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
    msg.setTimeStamp(0.490150790566);
    msg.setSource(25494U);
    msg.setSourceEntity(70U);
    msg.setDestination(16438U);
    msg.setDestinationEntity(123U);
    msg.medium = 34U;

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
    msg.setTimeStamp(0.708669422426);
    msg.setSource(40745U);
    msg.setSourceEntity(18U);
    msg.setDestination(47070U);
    msg.setDestinationEntity(59U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.415439979433);
    msg.setSource(53585U);
    msg.setSourceEntity(152U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(224U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.729895052337);
    msg.setSource(63143U);
    msg.setSourceEntity(149U);
    msg.setDestination(37067U);
    msg.setDestinationEntity(188U);
    msg.value = 0.825102271689;
    msg.type = 153U;

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
    msg.setTimeStamp(0.793823374457);
    msg.setSource(37157U);
    msg.setSourceEntity(112U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(194U);
    msg.value = 0.371928288249;
    msg.type = 106U;

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
    msg.setTimeStamp(0.0847794744769);
    msg.setSource(24451U);
    msg.setSourceEntity(167U);
    msg.setDestination(33019U);
    msg.setDestinationEntity(100U);
    msg.value = 0.719171316944;
    msg.type = 224U;

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
    msg.setTimeStamp(0.568356966485);
    msg.setSource(2022U);
    msg.setSourceEntity(48U);
    msg.setDestination(18652U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.565997986367);
    msg.setSource(53137U);
    msg.setSourceEntity(18U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.447520665616);
    msg.setSource(57217U);
    msg.setSourceEntity(124U);
    msg.setDestination(8111U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.261053128824);
    msg.setSource(3340U);
    msg.setSourceEntity(217U);
    msg.setDestination(29898U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("AMSCMXJFOTNEIGZATMIYWGTLMOHJWWMHGKTRZIBCUEWLVKFCKADGVXCNQQYXOCAFZJXJLKJVXSOZDWVYFWUNBFNBESWHYMANYDFLZKDPCYHOMPRGEUYLCYHSIVSPSLFKQKINJXOXDVCDZIOFHSQMHZZYDGRPVBBQRABKIKOQCCDU");
    msg.description.assign("UKSHEAKWWRBIBZGMSZCEFZCFOMDPCWNYVIBUXOFSJTCNPIMRWQZQOLMYXGIPHUQHVPOPKCREFSBIAUBIRMIPSUGCLEL");
    msg.vnamespace.assign("IQHEXLSBXLCCJNNHOMIVCYKQNGLPFZIZDRDDAEFNPSJPNBIOEGKJMKNTPLSRVSEAPMUWZDUCHZJHAZIRQMXIOQWVEVKTTJZKSUZOUOTVTLISYUAQJWGUDOFHUXETUZOATMMGALEDBKMFVRYCEQSKBRIPNBTTQHHANGFLJQYGVKYPWGGWUFMMQPOOFCHEVBXGXUMZJRCZRSLYTVDXYCFDBDRFJSIJBRLBGC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TKWJPKSKAUTIZJWMDBBKJCPFVKCFXUYXEWGTQZCJOTPEHDOSUMZSBSFLNLVMOCGXZYEVSVXQQMOREAIQAEJRKAJWPBRQSLNEFUCZBQMLVDNUYMRZMHBMFQIOASVCOUENWEDHLJYGTRZZFTLDDYHVGQTADKBYAGFEC");
    tmp_msg_0.value.assign("ARXZCWUWJYODESYUHVCPPGEMZSX");
    tmp_msg_0.type = 61U;
    tmp_msg_0.access = 87U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DREQMTBHVJBFPHBTKWSEFDXXYONHNOEIKHOTZVONPIPYIZSNBPWCNVGKOZQRZPASFKJJCDFKKFILSLXGAXCSTIAQHLESY");
    IMC::Pulse tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EmergencyControl tmp_msg_2;
    tmp_msg_2.command = 61U;
    IMC::PlanSpecification tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.plan_id.assign("JVDZFPFHGVGGEBIYGJWTEOU");
    tmp_tmp_msg_2_0.description.assign("PZFZJOAYXTBAEFKHIILSDFOBCMOZFQKWFVDYQHKNVXRAIWRCLYUCBXQHCRNCOODUQCEPEDUSWYKUCTWSJCVQSGEPHKGUQINBMMO");
    tmp_tmp_msg_2_0.vnamespace.assign("EDVGHNKDLTOFUYANNMEXIEPVITUNYYIAZRHPFOZWLGLDXNQPPHJVACAXHWRFIXMCWBFVBZDLILJSUEHQJLSKJHXUGSSWSSBEYQRSMAPDYVCXF");
    IMC::PlanVariable tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("BGGUDHJKSBZKUUFZJFTLNQSSWSNIKNRUGCBMJTOZNYJWVEEFENIHYRQDXTQPCLXOZIXTCMNACCVDSZECWBZHPIKGLVEOVPLQPJAQTBXDFGPRBMTRYZGWFKUYREGCHJTEUHDHVDOAKAWDMNXPPENFWOQSXUNYZPHMCGIXVAQAWJLSPWDGJMIOSULITIKKQDADTYKB");
    tmp_tmp_tmp_msg_2_0_0.value.assign("KHFRSLYOEUCXPPSLHBTBKHVXZUK");
    tmp_tmp_tmp_msg_2_0_0.type = 247U;
    tmp_tmp_tmp_msg_2_0_0.access = 159U;
    tmp_tmp_msg_2_0.variables.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_tmp_msg_2_0.start_man_id.assign("VFDKSWUOWCQMFNIVGAVFYYKSAKFHHWOPCMXDRRTHBUHSUORKWJYCLYEZDGZMOOLGPOFBLCGQLNQSTRSVMQRLMFMWPXXQAIZJDJEUSBAJLTBZLMHWOUVREDVAIBMTWIPTDXDVPGRDSQUJJRNNZJEIBACNCWZVGXGSQONXCEDKIEZARGVZITUQXWYNUOAPJGEBEVUZYELCH");
    tmp_msg_2.plan.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.674469981134);
    msg.setSource(58811U);
    msg.setSourceEntity(108U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("OAIOYJNHSOXXVMEYJHURTVCDRAMZOHVYOMRCHQUDBCBXPSLFSXNHTPKSGTMPXBCCYYRZTSLLLLIOTIRUMRSBETFSGUNQPVWNJOMKKZVDAVUZXAYKKHRBKVLDXRJQQNAEAXIFATCQUGDYMMDJDZMNSQVWNWKWFIWZTSUDWKVXGMPEIFQDGFZ");
    msg.description.assign("SBPBXSSSXZKDGIJQYWMAYCOHHHOTNPQRWJPHGIAJFNNKTYCNIJGRUIDCWFOBPZZRRQNRNHURVLKVSZHGJKUTKPNNLMQRFPMUFBPD");
    msg.vnamespace.assign("AGSZRZKPSRXIDDONIHNZVCWZHNFUMCIAVXQHRSWTQQJJSBPWOYCTCOEDXLUCTJIUGXLBELOHEBJWXCXJNYCPFWBYKIJWWDXVIGEPVHTVKYETTPTHZKOIAMUJRDIAIVKMAMHBELPFDKGTAORRMH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JTAKNTRUWMIUUDRXBRMQUAOVZFHPSZTLUZISQTEVSBKHDFUYYUDSPWYJNXGLKAHAAQIYYPOJBEZKLBRMHNNQGMQKECUGGFBPVASEBQIFJVPHISMCONLPQFOZSQSAYKZRHXCDTEWBYFNCLFHWLXXMMINSGJRCSOJGXTD");
    tmp_msg_0.value.assign("BUTJFLITWJUHORIPZYUISTRLFRZCSMEOAAOKDIGYXQQLVGXNWLYLYMZQPKVACELDVEFEIYIGGKRVUVYAUQNIHXMDMVNBVYTBJRHDMHAYFXKMPFWOHNUOWGNKZWXCFTBFYJOVRCKDEQDLKKQMZEXBQGFSMEZSJGMTSJUITATYEPZPZOAUOAWHCAVJSXNGTFXBZRNHSDDSGIL");
    tmp_msg_0.type = 9U;
    tmp_msg_0.access = 92U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WNYJWDNIXOPEPFXBPLRTDAISZUJMTLAKIGGZQMJCHJGZJGWVAEULXGFMASUZTAPOWSHMHIQETEYVBXKCVTVZOCELRXLTUTSEJHJAOIJKDWQHXSOVVMDYUDCURVOHZIGUVXGECPNXMRNSIRWFBNEKABHACKEFFNFZNDBLFKRYDNSMVVALJKZOFPR");
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.712344507132;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.414123869382);
    msg.setSource(40297U);
    msg.setSourceEntity(30U);
    msg.setDestination(46814U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("UTYGRGWGHTEHCYLVXYRLJAXWJMLGUKYKPOLFDOCVZPCZYPTDRXYJQMMYYERMRADEZXLTREFKKNEBXVQOPZICIHESKGSWMEBBCOXQABM");
    msg.description.assign("EDUFUCKAOHUYLVRGATXHKLBMIKHFWAODM");
    msg.vnamespace.assign("SGNMZOUOXYQSNDCECYGZMCPLJEPVLXFVZTFUIANSFEJWLPXCWKLIUVUKQTWQIGGZHWNGSLHT");
    msg.start_man_id.assign("BIXDPCUDCEEWYCLOTZWYJHCBDRROHBVHXGHFICMSNXLEQECCQUYVLROGWNPXLAJRMKAKYQNWTURQYUYXMWZEOLYVOALFVKWFSMUMMECMQJPRB");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FFERXLUXTESFWTDHTDXZYENJMMUNBEQAGOMXOJBTZTBKCQSLOJSXAXDEFCPDCQKCZENBXIJBICPSSNRQUBDP");
    tmp_msg_0.dest_man.assign("XBLPTFXOBPUBXBCIAXSEUHTERROIUEOHMNBGDYSUDFOAKJXLXAHBBLVPKTCFZSDZVZRMJDYWGKZWDVDXLAVRGPMRJVYFOBYQITLGSKTOEFDHCWFYGPIMTEMELJTIQWQKKLKQVJJEVWIIENSNGUHRUYKIOZZCOVSZNQDFGZRAGQPFKQJLJYCNMAHRPCQ");
    tmp_msg_0.conditions.assign("QBARJRZAVBQNOHEMMTSKKHCWDXXTNQJOTZSKBUKWPRNRFCAYSMIYBHQNHXBOJDXOFSHJAGKGROAQUDXXYLHMMTIMVEZPSGGETVDGRUQGFD");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.421340630387);
    msg.setSource(29492U);
    msg.setSourceEntity(116U);
    msg.setDestination(39305U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("GOQPBMCLAMPPDJP");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 21490U;
    tmp_msg_0.flags = 241U;
    tmp_msg_0.lat = 0.666291393445;
    tmp_msg_0.lon = 0.776432061108;
    tmp_msg_0.start_z = 0.882289614991;
    tmp_msg_0.start_z_units = 151U;
    tmp_msg_0.end_z = 0.837898951295;
    tmp_msg_0.end_z_units = 180U;
    tmp_msg_0.radius = 0.359432188256;
    tmp_msg_0.speed = 0.98471649638;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("WZIVFWXVKYQQYUSNPCVKOTVYBTHQLNTWDEYBZMEKIRWPVIOLSMFRCJCTMYTREFCBWOFJZBOKMUURIFGUENONPBGDNIVSVFDORIJPGZWHQYLCDNIJPXDVBATXPSMSPSXHEGIDDUTNEXMTYGOCJHALXKNSGSCLAMASWFFZAMERAWUQRUPYA");
    msg.data.set(tmp_msg_0);
    IMC::DeviceState tmp_msg_1;
    tmp_msg_1.x = 0.496753734512;
    tmp_msg_1.y = 0.756892047971;
    tmp_msg_1.z = 0.683137782384;
    tmp_msg_1.phi = 0.579640458061;
    tmp_msg_1.theta = 0.486920943614;
    tmp_msg_1.psi = 0.730734040533;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LowLevelControl tmp_msg_2;
    IMC::DesiredHeading tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.337156678171;
    tmp_msg_2.control.set(tmp_tmp_msg_2_0);
    tmp_msg_2.duration = 11724U;
    tmp_msg_2.custom.assign("IGFYWQWKXGBOYXZIHSKXXAJAJVLORPHFJUQQSOJCUYBGVMWCOAEIIXSDBMCTKEGAVPGQYXAJLHTPENAQVDZBHTBKLCRETSAVGXSHMENYHDZQPUVNRNDPYZZPSDRRCUPDRNRKDKBXCVCZYYTQOLTURPLEWFUYGFGOFUQEAWIEUENSHBUWQZXCMMEFTXAIDKQBOFMORNHGTMIDL");
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
    msg.setTimeStamp(0.676916176386);
    msg.setSource(22755U);
    msg.setSourceEntity(196U);
    msg.setDestination(62909U);
    msg.setDestinationEntity(179U);
    msg.maneuver_id.assign("JXEFHFDAZQNRABVQOOJHHUGNRTBLGWGUSAQNTRICTKRIYDVGHBYNUMDAMFZIASQDHRZDWJNIAMLTCLXZYT");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 8309U;
    tmp_msg_0.lat = 0.287761328598;
    tmp_msg_0.lon = 0.492395220064;
    tmp_msg_0.z = 0.854015343792;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.72931133693;
    tmp_msg_0.speed_units = 190U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.974697029607;
    tmp_tmp_msg_0_0.y = 0.837273834585;
    tmp_tmp_msg_0_0.z = 0.205662284294;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PPLKPUIWLZXJOEOQMZPJL");
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
    msg.setTimeStamp(0.325917983396);
    msg.setSource(36664U);
    msg.setSourceEntity(31U);
    msg.setDestination(51380U);
    msg.setDestinationEntity(224U);
    msg.maneuver_id.assign("OWHPKSPQNSKFNPQTWLGWKKJWYCJCXFOMSGOOVNNGLAZFZUVFPTUZQQTDEBNOSELOYYTCUTMDSHUVZVGTJPMZPEDPKEVHGNQSCCLNBKULWUBNYWRDWXCHSPBLKPEXIXAQGO");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 48691U;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.lat = 0.698911076524;
    tmp_msg_0.lon = 0.0700619721256;
    tmp_msg_0.start_z = 0.946405923362;
    tmp_msg_0.start_z_units = 184U;
    tmp_msg_0.end_z = 0.429462985856;
    tmp_msg_0.end_z_units = 162U;
    tmp_msg_0.radius = 0.515607078634;
    tmp_msg_0.speed = 0.812172114789;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.custom.assign("BTTYNDYMEBREQIWNMSCFIOEXUIXKDTEJUOEIKDSIWRJHSVPCXR");
    msg.data.set(tmp_msg_0);
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PORUTBEXGRUBFBTHVDLPAKHESIMSSZWZYFCPOVCQMBDRKHOKQVYGTBCBHYDQISDXJURATQJBHXNZWMDF");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 4771U;
    tmp_tmp_msg_1_0.lat = 0.54737378007;
    tmp_tmp_msg_1_0.lon = 0.387302313425;
    tmp_tmp_msg_1_0.z = 0.888547744272;
    tmp_tmp_msg_1_0.z_units = 198U;
    tmp_tmp_msg_1_0.speed = 0.1454783738;
    tmp_tmp_msg_1_0.speed_units = 72U;
    tmp_tmp_msg_1_0.bearing = 0.436778640259;
    tmp_tmp_msg_1_0.cross_angle = 0.345601209308;
    tmp_tmp_msg_1_0.width = 0.67750533139;
    tmp_tmp_msg_1_0.length = 0.375694844295;
    tmp_tmp_msg_1_0.hstep = 0.584241170151;
    tmp_tmp_msg_1_0.coff = 75U;
    tmp_tmp_msg_1_0.alternation = 244U;
    tmp_tmp_msg_1_0.flags = 25U;
    tmp_tmp_msg_1_0.custom.assign("JNKUHRDPXKQIFOYPVCOEHKALUAFJCQQHSFRLXSGAANFDRPEDWFIGDBVUYTXLOGHJMPMNPWITUNNMGPSTJQGZDDMBPTIZQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.101824248781);
    msg.setSource(62947U);
    msg.setSourceEntity(66U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("TYWWLOMHBNBNPAKWFOLIANCXKEZOIDQYCMHYGPHWACMEMWMMEUXVDEBXTGFPVDCUWPARQCFFIODAJNXVISBSSZHKSDYHENQBMSFVMZVXFPWRJCMDWJJC");
    msg.dest_man.assign("PPVFFDKOGLJYXGMNCYRGZIYINRFLLKENSCLOVBYJCNEARVSAWZRVVQWEKCTUMDRFWEJWLRIHTZHGOHYHS");
    msg.conditions.assign("IRXTFTKCYRICJZS");

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
    msg.setTimeStamp(0.786990053305);
    msg.setSource(50796U);
    msg.setSourceEntity(97U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(15U);
    msg.source_man.assign("MGHNKFQPIUVVBFJXERWMEQYTMVVWILWZYLLZKYTNECOLUFOAPNIQRGZQJGLVAFUQYWQUIDKBQMLHXJQYLOJUCXRBXSLLYCRPVZDCICUKJDZUEECBZGBPRBPWPCGDRKHAYSWHMMQGHKJEOFANTYEHJSDUHTPSWVOAVKMMUOZBFBOPCXGTUFXSSDWAATXNJGANZIZFPPZIOHGIVFDTKDKVRMETASAHLSENEOYDNFTO");
    msg.dest_man.assign("LOTYLGVRNAUKLMCNFXDISKYDNCCGZYOGPMAGDHGWCKYNBZEHSREBJEBRBXMLPYHUHKIOCFXGXEARNIJCQHSRGPCSCUVGBYOUEWQTWWVTOVDJPPMFVCFETNBJFAPOLWSNHWDDSLFLTRBIJFSDZRADBBCFIQVTHKUDJSVQKAPVBPTUGKPAYVNUSZQEIJDSUEMKZQIYLLMQW");
    msg.conditions.assign("JRQUBRLEDJBXPSABEWUHWPUNMTPLXFGCKDILKODJOGGBHXNYZYAUOKZRSHFZCRYAFBNCRXFZSQQTJFVEDDIWJTUYUCRYKDYNTBGALMNMOHFBKR");

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
    msg.setTimeStamp(0.523091393994);
    msg.setSource(45055U);
    msg.setSourceEntity(210U);
    msg.setDestination(697U);
    msg.setDestinationEntity(39U);
    msg.source_man.assign("YNKIRBDAYTMTHTJGAZGEHLNVDLOJEDGAGSXGWVJEKWXZBDWQOQXQOCLJYIQLFQACMXPEXNJRZIFKUAFWAVOCZQUNUIPINDFJUYSWHHTOWVVUEFINSPKZHCLCTZRDYX");
    msg.dest_man.assign("LZYWQINNCGAXLVPOHOHADIKUHGEONXLSMTIWFEBWXJRSESGARCAHJUDBIPIPJQFLEVTKPUVBKITRPJAGWTKNKVZFGSQBIABNQHKYECYYWBYBMDAPUNSHYWEBPZOSQICODUKNFMZJQRMWRXJFFVHMUFJKNGVOQTBFFMRGKGLSYMRSOZZOXHTJXOWECLXJTUWPJUSRDTTCOYDIRGCPTUDYLCDKYXMFE");
    msg.conditions.assign("MBIJDQFRJGVVWYAPIGEOCMKQYVDDAFHEHGEUFSHTGQPMBWDRUDOFNLWCZCXIYXHNBNLFBEPZQXUBTCDPOFQLXRMVBCBWSJQMFZUPASVCNGLRVARLAAQLJXXYYWUJ");

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
    msg.setTimeStamp(0.174164983396);
    msg.setSource(9692U);
    msg.setSourceEntity(233U);
    msg.setDestination(26765U);
    msg.setDestinationEntity(188U);
    msg.command = 1U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UTIKGEJLDFUAMRHVRLSRQGBOIKLDGZEDRBQVEIPXRMMMKOWJTJPYNEEWUXLTFXMXXIGDSWPFQQTUGTVBLNCXRUOBRRFAFWDSCFQYAHLSIOJPLIPOIATMFDRVWJHNXFHXCEBQPNQDEGZZSEGKZIJPIOWUJCCSFBKULXYKOUASNLEOVQENDHJ");
    tmp_msg_0.description.assign("XLKTJACBVEHJJWABSJGJIWLICSETIKRSSHNAOFIVDYHFUROKFZRSMWIIHQUNJXJXEOWQZVDUPVRUESTKHBJDXOKXZNTKFXTLWGMDIVZXWGTYVBEASOCCKNMGWRMLMEOZPKNRQXBASUGBPEUDXRGJUJTVIQDMEAULQNWFOZYPPHNMPPZCNEYVKYDG");
    tmp_msg_0.vnamespace.assign("FTSIGNMHWFAXUKTVFHMRRIJFQFEPNANPTFOEACZANBVWRXGMJRTTDBZIGCHPPGKAWPMYHBSZZVYQWTIBSWEXJYWUAGHYRZOWBQGCZLGDUXPVDNJSQUXZPNBPKKWOJLITHOONHFTUCCINELTQNYSPJVKVAPIUMDXBXQOFYJKRTDESQMLAXJCJRMGYHCMSKRGCYYFLOKDHBKEJILOVDV");
    tmp_msg_0.start_man_id.assign("CREEDVOBKZQPTYZTMZLBGERJCUPTTTHPBSAUNCYSSHSUTTDFNHJNWMFILIXEJYFUPBLWRKSRNYOVBXDVZZWYAMCNDYUSWZADDJQIIKIATZLGEVYXAOIHYKOAHCKRBEJXMLFCCKBHSZQXOMBIQGDNRI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LMUAQZEOXTYYCXWLIOAMUCKSSMIRAFKDCTTGJHDUMAFYBDBTANTCQDITCSJNKDNMUNXIJVCMPPLGZEWTDINGPCPBOMLHYABRVQSSDQXJGOMQRYOFGGGPPLDWSSTOUKLRSHHPNNVIEBWZI");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.648470446784;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.99594339383;
    tmp_tmp_tmp_msg_0_0_0.z = 0.339587579581;
    tmp_tmp_tmp_msg_0_0_0.z_units = 34U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.890438909094;
    tmp_tmp_tmp_msg_0_0_0.duration = 37525U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.905869970883;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 67U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WTHKQQFOXJUAXHSYLMXBXOBFVMBPFWJINODIVLWCCUKGXIOP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Acceleration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.420133928638;
    tmp_tmp_tmp_msg_0_0_1.x = 0.739948349842;
    tmp_tmp_tmp_msg_0_0_1.y = 0.185265348402;
    tmp_tmp_tmp_msg_0_0_1.z = 0.284939619528;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IEZBXHMFUQOVVDVYZUWOYNJTKGAZSFEGSQVSTLOXJXFIGXNRARSOETKHGHIHPMRGRMSCCLIHIACADKY");
    tmp_tmp_msg_0_1.dest_man.assign("VZIIQIRPYZMAYBFVDNPNEFHIFFQWQULWPSHSDZRXNPDNPIKTGOSXEXRMS");
    tmp_tmp_msg_0_1.conditions.assign("AUJFWAREJOZSURDCVANOSHWUBXTHPCKRPLZ");
    IMC::PopEntityParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("IIFYRYJFEPTFASEVPCDSQWSPVIBBSYRVETPXQUFAINLWNRCKTWHVEHHEHHGVOMBJQULZBFONLAGHORJURBDKREUNJDOACVHDZZOZZNVCXMDZOMKEPAKAPQUHTIUDKLCFZIQQMRIGACJDJRYTGJKXVUXLGSKTIGEQZLTHBKTWHBNMXJSJKGCYBX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::WindSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.direction = 0.308096104286;
    tmp_tmp_msg_0_2.speed = 0.16434981733;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Acceleration tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.time = 0.338220659147;
    tmp_tmp_msg_0_3.x = 0.889611444261;
    tmp_tmp_msg_0_3.y = 0.953142176062;
    tmp_tmp_msg_0_3.z = 0.995105241009;
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
    msg.setTimeStamp(0.417563546745);
    msg.setSource(23249U);
    msg.setSourceEntity(231U);
    msg.setDestination(39729U);
    msg.setDestinationEntity(62U);
    msg.command = 37U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NAFWRMAUXYABUVZZEVCONOLEOGTNURBCMZNWZUHMEIKXDNLRQHXFZFKXAEIKCEXPPURLNWLAKHYLTOBMAFHPSBDQPXIORCVNNMPFRXHDJWULSUWBEDVOPTQSPQCKGEGGTVXDUIAJSZTMFOOZABUGFZJEQJCIQEXHRJSRMHGVTWDJDKILFKFRYWBVJBT");
    tmp_msg_0.description.assign("TZFMFEPVWMYEMGJDQXEVTYZNLTXAWSDMPKQNVLHUJGIAFIZRNMJTKXPDBWYWJYZVDUOBERONSHTMVWYUKWIHVNPZKIBPYZGEJLCDZBFCSVIEBLHHLSOODLUQGKTQXPASJOBSYPMHYNEFQSJLIQAKBMRARSMPNROLXCZCTLREIJRIFMFVNAQOD");
    tmp_msg_0.vnamespace.assign("NVWMIDODQPGUGHEAWPZRHTRQAJUZEYXLUY");
    tmp_msg_0.start_man_id.assign("ZMOGJKOOIARSUDMTPOHNSNYRNEGUBWIUMMJIDPCFLEYNCBLFYIVOFPBQWCAITEKJFSQXWLFUUOSYDSTSKEGUVEYRXYCRMLZXPHCJPGXLUYBTAJHNGZFVWARIPDOAQDJTXWWFZFMUEKVIXJCJIGZSOATBDDLNTMEQZTNFXZRGKHVAWVAYVNIQXWTRPUZUBRAGFKZHKCQGORCDHYWLCQLHSEEYIBCTGAVLODPHHBDPSMKXJMLVQPNKE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VAMROMBTKSDJXNYCXLNRIYTYBYPZXZWIHFKZBZKIPSRODLYPDJWWVOCQGCFLSOJTLAKCGHZTAUVZUHOATON");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.309801453777;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.567030297555;
    tmp_tmp_tmp_msg_0_0_0.z = 0.707208530372;
    tmp_tmp_tmp_msg_0_0_0.z_units = 251U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.495582543595;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 230U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.301053815535;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.443019810821;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.765812323759;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.335236798215;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 41U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.342093434474;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.907534192416;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.884886145833;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.682737437335;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("WIXPFUCEBISRBNSEPLHOPLJRTNLBFQDUGOYAZTKQKGZNUUAQCHFIKEDMDTMTBKCXBONAPGGOWVFWAWYRLDRXQREMPEWVVQOEHKJNWCRMKHVTJKEIPXMMYNHEJG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UXIKPDXLBHNLQXZUFKCCZRHVBZZZNGNARIBFHELIFJORMSPICMVSTDLYEQZQJAECCPFCLOWNHOOXSZWJDNESFMUKPSPIBPPRVXVZDEGBAUMUFWLUMJIUMXPTWYBYOVRGKXZHBDOJKXUHQSVGCJGMWLNSKGBJTLHGFAAGBGFSQFHXGDAROCVWYWROCYOHJJMIE");
    tmp_tmp_msg_0_1.dest_man.assign("LZJLZSBRRZNCQFABTLDRQYRRSTIIGPXOTWUPGDJJWYEGGXXHVHRISJEKWUMJNADQCTNKFKLQLYYYPLJUINZNTBDDLSBXAHDUIFHQASBAUGAEMBPVSVC");
    tmp_tmp_msg_0_1.conditions.assign("JURXPROVZOYWNGJSYWJHDNLASYMBRAUDTQFJPKAPYFAUYQJSGFQAKOHLEQBEAQITIWZFWDNRJCRIZKGKMXILVMIAYNPEAIACBZGIUIEGOVTMPEIUOXUKXBVJTZWDWLF");
    IMC::PathPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.530499094953;
    tmp_tmp_tmp_msg_0_1_0.y = 0.974129850088;
    tmp_tmp_tmp_msg_0_1_0.z = 0.0649639196314;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 205U;
    tmp_tmp_msg_0_2.flags = 90U;
    tmp_tmp_msg_0_2.description.assign("GCKNNRBFSRXUTGEZMFQTTBKRAFFLWMSOQPBSHEZFKRBVDDTIOPYNINCLLUEXMQBIVUXFRFIZDHMIJOWKXSAXQUFTRCFYTYOLDAZOVKVJKQCPJSCERGHQHHVJGTZYBJJVQCPNKQSZMKWJNQGPOGHPNISZVEWPRIYWKYXEGJIWTNMJCXDZLAVLBPXIGLD");
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
    msg.setTimeStamp(0.78762666786);
    msg.setSource(64650U);
    msg.setSourceEntity(1U);
    msg.setDestination(9773U);
    msg.setDestinationEntity(174U);
    msg.command = 141U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YLJDXSUNOKKQXIIHLOCFMBJHUQRPJTFDONAWDTNWSTOUZPWWIZ");
    tmp_msg_0.description.assign("GFYVLPXINTK");
    tmp_msg_0.vnamespace.assign("BWCDQZRFDZYJHNMHTULNSCESVJMLSEXVHBHZUKADPQORRUXOJQMQVSKLCMB");
    tmp_msg_0.start_man_id.assign("JTMRLNWPBYIIQPGOXUWFCKTFXKGKWESARDLMHNNIZNPWALOFNXJCJCLARLDOZNVVPQKTJEDLFEUQBBVCSGGUVBWMMOAHVRFECYZYTAQQYGRZBPVYZPODSTOC");
    IMC::CreateSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 2103968061U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::CameraZoom tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 125U;
    tmp_tmp_msg_0_1.zoom = 215U;
    tmp_tmp_msg_0_1.action = 29U;
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
    msg.setTimeStamp(0.07977568709);
    msg.setSource(61957U);
    msg.setSourceEntity(201U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(190U);
    msg.state = 21U;
    msg.plan_id.assign("BAVTNQVVEKILYKZHDYGOSPVBOOBDFTEXWYPPPMUXSHYHHQSPADWJAMXRLMGNBURWTPRQXMZICUQQCAOVXXAKEWKXBIMGFJJDCWHTDZHIKWIURAGBHEVZUYNYERULYSFIOKTNTQGQXLBIMLQCWBZPWOBSAUNYWDLJNEZRGHNRQTOCIGOLAXIKKMFMBVDLZCGZJXTDAMZFVJVUKSEQSHSNFEVCYENSMWFJOJFTECTUOLJGCCZRSDF");
    msg.comm_level = 136U;

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
    msg.setTimeStamp(0.719483302261);
    msg.setSource(52541U);
    msg.setSourceEntity(128U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(127U);
    msg.state = 58U;
    msg.plan_id.assign("MGRJMLZVHIGSFTIWOMAHEATOXNHKPKSTVBQOJALUQIYVMJWWYGDMXWUAKBMGEQGJQZXKQIOPIVZRBHPRSMKEEMLDNTYWJXVHYJTYWCPDKEKBIAKFTYSDNEUTUJNOONCASDWPWVXGINAHTW");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.995868086606);
    msg.setSource(46655U);
    msg.setSourceEntity(221U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(73U);
    msg.state = 190U;
    msg.plan_id.assign("DKRDUTMKEMVIWIHKPOWCSEQBXMFTTKEJEWRQCFLECNSYBJRGOOYTZVIAMSZUHYVFNHAJJDMYQZTUZWBCUPNOQDU");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.414800597829);
    msg.setSource(35241U);
    msg.setSourceEntity(162U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(100U);
    msg.type = 85U;
    msg.op = 162U;
    msg.request_id = 2744U;
    msg.plan_id.assign("LJKZAQCFESDFJOPSFVTXQYREVCCAJHLFNZZRIUCIEQYWLDHQAECDAGYJWMSMPBVJITIHHKTTUKOBVBRTPIMBUWQUXTUUNJOLCPVHEJMLMAXOYGNQNIPSUQFCGEXRNEZJDRZRKALDBMV");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.399641242645;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JWVPVOCGJZCTWGEUPLYZLWADFOUOBIPSVSZIMSXUCLUJGAMDVFYNNHILOQXFTGTFPHGOPMKKBKATWHFWNXWECTLDYFWHKEXBQQDGUQNQJNYIUYBAHRVPRHJIKJEDG");

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
    msg.setTimeStamp(0.97822775707);
    msg.setSource(25399U);
    msg.setSourceEntity(216U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(157U);
    msg.type = 123U;
    msg.op = 102U;
    msg.request_id = 33490U;
    msg.plan_id.assign("XMNXUZDSHSFHZFAKEHSKTUARDGOAJMVIBZCCRJTWOYLELXDTXQRJGJRPOQNBPNAJNLCGIMQTBNLYWVEDJRATUMWQCHLZKSHLCCYAKELIFOOMXGQJJPPREOOIVSIKEQURIKUDCMBVKUSDDWBSSNWMNZGFWYOGDAXPHEQUQAXKYREBUNAFYJSWPHMZGZFRHDCZUPNTLVTBBRWGZVXFVYIK");
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("URAKAZXEPFZWHNFFVFZUCZGMRPBQIYYHTTLOHQONYBXVEAYTGSNCGAQHWCNGNRUQMKDGFHDHMMVTDLMQRFDLESFKJKUGOZQGBWWMIVXTIJICXSXSWPBGNSVILTXJAPPDRAKZJALZLYPNRPCIWITTWZQYJAEBKOTVREKLEHDYSUBROSCWZJVPVHMRUWOCYQDSUNNJPHUFSDNSEFYCOLMKZBBOLILXHQMITBBKOY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SUCTXVSDJCXJKNZIPCFOCOQDXONSNHJVIJMENHPVFDAVEBNTZSFANCKBYQYCOYNDQMLSMGSERQFKGWVBRCKWRFJXUJRDBMFKQZUQMSTXZTUBKHUAIINWDIAFOIUBKZTRJZSEAYLLARCKXQRHYRLHWQYEBWIZJPZSUTGERQUFLIPATATMXLNFTKLPXHBACHWLPIEGZGXVVMODDWCTHGXMLKVWFNPYSPYORZO");

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
    msg.setTimeStamp(0.450214777861);
    msg.setSource(46075U);
    msg.setSourceEntity(181U);
    msg.setDestination(28049U);
    msg.setDestinationEntity(78U);
    msg.type = 33U;
    msg.op = 95U;
    msg.request_id = 33811U;
    msg.plan_id.assign("EOAXLRCWYSPSCDWONKPDASYELNTURWMKQCIGFZEDKFKWSWUXBZPDDEZCNISLOZCFXVDEHIZJGHGPZSKXVGFFXAMTWNSVAEAXNNQYMEOKISZNLRQBYJIPDEUTDHUANBHCMOYVLMRJOEVUFCZPPOGLOXTVKIVCBVVJHWJ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.363958425865;
    tmp_msg_0.lon = 0.25276444537;
    tmp_msg_0.z = 0.746520776207;
    tmp_msg_0.z_units = 151U;
    tmp_msg_0.speed = 0.447001863316;
    tmp_msg_0.speed_units = 48U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.764532729848;
    tmp_tmp_msg_0_0.lon = 0.610526536548;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BYXGRJPIOPKYSWXAXRYONEEUWETBVMRKTYABMQGWVJMRZSTMHZRFIRLHUCDPIADLXTOBLSZZYTUYAMVOCIDGJKSSTFMSEZCPNMLXHTWBVIEQQANKC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RKMINLPXFRCKCIEZXVQIJZKQZHYEWNKXQKNDTJOWGZSXBJZJGPCZCPLALLSJRIBEODCYXJSDUTQXJFOFWEKCDQLBVAVCPKOPUWFHYMOGZVUCARTBPXLQGWRDJQTYNBOZTYRKUGSZFXYRURMSVZLMEBFDPUPMXNHIRSNVENNHGKDQIYBUBYGIHDYVOVCQIMESAMFST");

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
    msg.setTimeStamp(0.906504819695);
    msg.setSource(4256U);
    msg.setSourceEntity(227U);
    msg.setDestination(49932U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 22801U;
    msg.plan_size = 785725132U;
    msg.change_time = 0.978747153948;
    msg.change_sid = 53103U;
    msg.change_sname.assign("IJINWSHDGUUKE");
    const char tmp_msg_0[] = {-103, -11, 26, 88, 50, 35, -49, -20, -40, -21, 111, 120, -58, -90, -58, -20, 49, 57, -44, 64, 13, 122, 70, 111, 49, 14, -46, -37, -106, -73, 45, -108, 57, -111, 18, 51, 1, 126, 49, -79, -120, 42, 122, -70, -35, 60, 78, -113, -63, 69, -14, -32, 59, 27, -84, -8, 56, -103, -88, 63, -29, -48, -82, 15, -69, 20, 107, 27, -32, -111, 35, 71, 31, 74, -22, -11, 98, -108, -85, 39, 28, 123, -105, 3, 35, 2, -44, 25, -29, 87, -12, -122, 16, 58, -39, -75, -110, 89, -123, -116, -86, -33, -34, -28, -105, 124, 42, -59, -16, 11, -48, 10, -26, 114, -120, -20, 109, -127, -8, 37, -63, 101, 25, 1, -81, 19, -126, -17, 34, 44, -69, 38, -55, -113, 16, 97, -4, -23, -91, -20, -115, -123, 14, 78, -55, 91, 47, -55, -116, 89, -110, -28, -62, 84, -99, 118, 47, -21, -110, 27, -53, -87, 87, 60, -67, 88, -101, -40, -127, 59, 124, 19, 44, -21, -72, 74, -21, 33, 53, 8, 58, -19, 11, -7, -76, 113, -66, -61, -83, 79, 45, 74, -119, 51, 104, 24, -85, -88, -122, -45, -2, -25, 97, 98, 57, -105, -95, 62, 37, 116, 126, 58, -1, -5, 73, -7, -100, -1, 41, -43, 1, -74, -12, -25};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZINTCARYZJMKNXHFBZWSGSCPNQBFJPUADEWXPPFZJMQAMGAZILOWWFMCTACYMLHICSBPBMFIEGRZBBBAPVHITTXUSCGZPZNQORWYGVDGDIOUYVIHFKLDJSVKWLULCFJJMGOAYXKHDFAVYUXVRKHQOXLEEWUSSONVEWUDTYIYVDIXKCOEHWTPKNDJGRNQDHALKEYTUVQQYRNFJRHWLRT");
    tmp_msg_1.plan_size = 25703U;
    tmp_msg_1.change_time = 0.41328303973;
    tmp_msg_1.change_sid = 57387U;
    tmp_msg_1.change_sname.assign("PXJCSBOCKVZZKXDOSNTQTXZMNSRQDZYRNTSLIANIGABWFJHWAWERGOMLVQIQGZKLOUDFUXMEWTDJXEAF");
    const char tmp_tmp_msg_1_0[] = {6, 4, -125, 27, 51, 61, -26, -109, 17, -45, 61, -71, 53, -31, 9, 0, 32, -21, -103, 33, -41, 102, 20, -16, 33, 28, -15, 27, 15, 63, 126, -91, -55, 19, -123, -119, 111, 83, 68, 93, 76, 28, -30, -124, 22, 100, 67, 112, -119, 57, 31, 124, 32, -126, 15, -51, -44, -75, 56, -52, -120, 31, -18, 117, 10, 60, 9, 7, 41, 32, -22, 55, 23, -88, 55, 117, -101, 31, -71, -6, 77, -47, 62, -98, -90, 5, -61, 106, 6, -116, -24, -40, 38, 94, -80, 117, 45, 59, -18, -111, 118, 85, -53, -2, -35, 63, -17, -95, -10, 51, 104, 93, 85, 102, 31, 104, 36, -59, -17, -117, -110, 90, -79, -23, 44, -93, 77, -9, -36, -55, 83, -105, 83, 87, -123, -51, 113, -70, 48, -11, -117, 120, -60, 2, 14, 117, -43, -85, 15, 52, -121, 122, 103, 47, 66, 102, 90, -68, 30, 8, 58, -17, -41};
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
    msg.setTimeStamp(0.36744106408);
    msg.setSource(38298U);
    msg.setSourceEntity(246U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(188U);
    msg.plan_count = 23470U;
    msg.plan_size = 4157067194U;
    msg.change_time = 0.260857840177;
    msg.change_sid = 28724U;
    msg.change_sname.assign("GVIHFVZLELBSGPPCSPSPXZRZTNMMMVHTQAFZIYHYSGWBFUHYOXVRGKGSUSTMOYNPLHQBYRHOCMABUJLFJPBLKHCIPULBTDBJJPDQNQIQWFWBZCDRYZUKBDWMAOTQASDUJ");
    const char tmp_msg_0[] = {-25, -62, 98, 2, 83, 5, -105, -48, 78, -104, -27, -123, -60, 50, 89, -57, -46, 26, 71, -90, -32, 39, -71, -97, -122, -74, 18, -102, 90, -128, 10, -67, -79, 20, -32, 118, -33, 98, -82, 2, 96, -102, 84, -25, 106, -38, 76, -75, -84, -80, 84, -10, -84, 79, 117, 126, -68, 57, 23, -96, 82, 101, 2, -91, -118, 60, -87, -88, 93, 35, -123, 100, 121, -31, 20, 16, -82, -57, -37, 25, 92, 43, 1, -37, -11, 8, 114, 112, 64, 29, 109, -22, 77, -103, -7, 85, -47, -27, -63, 25, 18, -59, -80, -25, -109, -54, 117, 29, -85, -41, -43, -94, 8, 5, -40, -4, 120, 27, -58, -19, 43, 28, -113, -128, -70, 17, 78, 60, -67, -39, 36, -119, -56, 17, -111, -94, 71, 23, 2, 64, -78, -32, 60, -32, 46, 97, 47, 3, -28, -4, -33, -83, 48, 29, -11, -58, -32, -44, -89, -86, 17, -58, -72, -30, 68, -5, -42, -25, -10, -120, -114, 82, -123, -19, 71, -44, -38, 34, -9, -111, -124, -125, -94, -100, 0, -91, 16, 39, 37, 73, 27, -51, -87, 74, -114, 24, 75, 52, 18, -114, 73, 53, -49, 7, -45, 29, -124, -26, 46, -116, 74, 69, -111, -53, 6, 120, -104, 14};
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
    msg.setTimeStamp(0.625292140147);
    msg.setSource(3136U);
    msg.setSourceEntity(96U);
    msg.setDestination(24516U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 64664U;
    msg.plan_size = 520804449U;
    msg.change_time = 0.375711318756;
    msg.change_sid = 62439U;
    msg.change_sname.assign("HXMBLDHIWLWOIYWVPQLOLRVDEKNZRIGAZIGGEJSGWEJOWHQIHAKURVMJWBMLNOSADKGGCFAYYFTSZEYSBY");
    const char tmp_msg_0[] = {16, -51, -10, -10, -50, 120, -79, 90, 120, -92, -84, 104, 47, 38, 62, 14, 20, -18, 37, 1, 111, 12, 113, 21, 13, -24, -80, 122, 48, -29, -116, 67, -115, -76, 46, 14, 41, 95, 78, 107, 45, -103, 66, 42, -43, -35, -46, -106, 68, -17, 114, 97, 62, 21, 70, 100, 23, -104, -94, 53, 34, 102, -45, 115, -79, 25, 118, -21, 81, -82, 57, -45, 45, -63, 61, 75, 110, -64, 68, -32, -32, -90, 41, 26, 52, -102, -34, 61, 22, -114, 59, -30, -84, 49, 14, 11, 47, 6, 81, 126, -116, 104, 79, 40, -12, 4, -115, -6, -91, -53, -16, -57, 6, 55, 95, -15, -77, -21, -36, 0, 39, 0, -17, -36, 97, -63, 8, -111, -77, -70, -98, -4, 20, -75, 72, 79, -54, -104, -10, 125, -124, 22, -93, -50, 11, -30, -29, 38, 54, -17, -65, 41, -124, -86, 76, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GGAMXNCXNGMJCESEWFXQGVEYAGBBMFUFCPTDZRNUYQUZZIQRJHRIBUWLTFRYVSDEMSTSQSQGJZOXTEVHJMUSIRRCUPMXQLDLITOWLTIVVNLXTAUGOW");
    tmp_msg_1.plan_size = 26034U;
    tmp_msg_1.change_time = 0.448788250417;
    tmp_msg_1.change_sid = 51125U;
    tmp_msg_1.change_sname.assign("DUFYBKTFICGIRMPDJGJIWNFFEQHVFHPPNHEGGUFREANBKCQTGJIIBQLZMEQCVZWXVRZYYEYEUKSKMZOXANNRKCRRSJIUAHLPTNRHSTLFDCIBESPPNZBDCCTLAXAWYYRISOWJTUVZIXXWDNOKKPQARJOGKHBMAU");
    const char tmp_tmp_msg_1_0[] = {60, -40, -116, -58, -58, -71, -79, 81, 106, -47, -34, -16, -125, 85, 13, 70, -15, 53, 56, 61, -4, 84, 14, 50, -128, -6, -21, -22, 21, 1, -79, 50, 14, -20, -81, -108, 71, -34, -71, -30, 97, 8, -108, 34, 46, -12, 124, 83, 14, -41, 75, -9, -15, -54, -14, -16, 27, -64, -44, -16, 57, 86, 74, -87, 58, 58, 104, 15, -122, 26, 75, -52, -85, 68, -15, 34, 91, 14, -73, 38, -69, -27, 54, 14, 46, 77, 123, 67, 108, -102, -121, 10, 44, -102, 118, 126, 1, 80, 71, 43, -25, -99, -90, 0, -82, 124, -64, -14, 29, -55, -10, -21, -96, 59, 78, -106, -64, 24, 4, 53, 60, -44, -100, -30};
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
    msg.setTimeStamp(0.215832678885);
    msg.setSource(7079U);
    msg.setSourceEntity(94U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("FGEYOAURALKBAVMKRKTOATI");
    msg.plan_size = 21217U;
    msg.change_time = 0.699725935125;
    msg.change_sid = 5525U;
    msg.change_sname.assign("YXQDYSDIJGDIMBVMDYZHSOKEUFGGKQJEHALXZIIMUKSWZNFTNFPCVSSNFVZTWHQHAUCEAUVSOMPVQMVJYTPXAJJTKWKRZBPDUGMCAKLMFMTIOBGSPOLWMEUMRFAVYHCWPKCHXFSDREJEUWJGGTBJDRCOXXBWICYATNRNZLJIBAQWXVPHUORFHSYNDRLDRBCWUIYVGLTBIEYUQLNYQPHKQOFFESEXZTLOQX");
    const char tmp_msg_0[] = {49, 58, -100, 102, 67, 86, -104, 118, -103, -52, 4, 87, 43, -36, 43, -41, -114, 7, 8, 77, 71, -36, -59, -111, -102, 16, 42, -2, 104, 97, 56, -114, 78, 73, -100, -120, 122, 42, -116, 92, 57, 45, 104, -19, 111, -8, 31, -49, 75, 52, 64, 89, 24, 118, 62, 50, -3, -55, 81, -66, 41, -66, -100, 16, -128, -86, -78, 51, 107, -28, -87, 110, 74, 74, -25, 122, 91, 116, -85, -77, -110, 103, 116, -102, -78, 5, -33, -115, 42, 108, 5, 109, -102, 1, -39, -14, 4, -115, 109, 49, -67, -72, 40, 117, -57, 4, 103, 22, -8, -23, -29, -18, 32, -61, 101, 107, 6, -4, -97, 28, -46, -95, 0, 48, 9, -12, 98, -29, -128, -39, -113, 115, 11, -69, 48, -47, -76, -50, 66, -97, 34, 4, 110, 28, -11, -123, 87, 48, 117, -26, 90, 103, -6, 40, 19, -13, 28, -96, -87, 48, 19, 17, -101, 51, -112, 20, -47, 89, 68, 74, -79, -57, 85, 96, 7, 38, -117, 90, -94, -121, -109, -51, -126, -89, -6, 78, 104, -19, 121, -4, 123, 84, 14, 123, -91, -44, 19, 78, -92, 111, 51, -63};
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
    msg.setTimeStamp(0.610493785089);
    msg.setSource(21270U);
    msg.setSourceEntity(145U);
    msg.setDestination(14336U);
    msg.setDestinationEntity(180U);
    msg.plan_id.assign("MSGDZGNXZGFHEFLKHRCCZXKLBEOZMVOIOSQVOAZDFHBNOUPTSWNHKQKTEBCRKXCVLSWOYUQNTFGYIPMCPNTIDJRWHQDUQETSPJQLFEVPUFIRTYAWDUOHRGSMWLSJDWQJCTKZJRYJBXTYILWGFXJVAXUWYOFJZXZKFLJHUZPUEAYCNBTAXOABNGKDRLGYABMORUNMSBE");
    msg.plan_size = 29159U;
    msg.change_time = 0.0682896413202;
    msg.change_sid = 5785U;
    msg.change_sname.assign("SZVNRFTBTQQNXWYGGBHPNYBLOWXHYMUSHTSPDRSYPGZGXYVZKBCNSPEXVOESGEKQZBMLRCDGWHCWUTZUEAJEYJCIKSFDVOQDIDXZMTNWBXRUEZJKAMGACDMWSWFRMRPKVJTROLENAFCSICZUAUOKFKMOYTFAOEHIWNOJJFHFTIVLYBEQQ");
    const char tmp_msg_0[] = {69, -91, 110, 39, 63, 116, -46, 10, 95, -128, -99, 101, -94, 17, 11, 54, 38, -62, -18, 25, -114, 41, -88, -56, 43, -127, -61, -85, -77, 6, -118, 93, -115, 33, -79, -8, -30, -32, -126, -58, -2, 88, 123, -92, 59, -58};
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
    msg.setTimeStamp(0.0385258486381);
    msg.setSource(61687U);
    msg.setSourceEntity(49U);
    msg.setDestination(63064U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("DNHFLAHEHUSAZSIQAZAXZUNWAQDJILMGJBOJMECYCHXWOHQZYGPYEFZSXRRQXQPGJICWOUCXEDTDRDRFNBWMUTVUPLRPAKEJXQPK");
    msg.plan_size = 62448U;
    msg.change_time = 0.252715025844;
    msg.change_sid = 22591U;
    msg.change_sname.assign("DESINETLIVDFARYWMVTTPGPMDYDQJEVNXOHNBJR");
    const char tmp_msg_0[] = {25, 58, 126, 62, -17, 14, 69, 15, -106, 43, 5, -92, -83, -13, -3, -42, 83, 96, 100, 101, -7, 104, 3, 48, -4, 12, 36, 75, -46, -20, 52, 110, -36, 122, -31, -102, -45, 3, -100, -36, -27, 85, -48, 87, 81, -21, 47, -85, -45, 20, -91, 66, 83, -124, -74, 11, 113, -9, -57, 64, 97, -28, 121, 121, 41, -51, -15, 39, -124, 54, 13, -90, 86, -86, 100, -90, -31, -11, -18, 20, 89, 38, 99, 109, -68, 29, -112, -5, 109, 24, 72, -5, -94, 79, -79, -6, 95, 40, 112, 49, 62, 100, 119, -53, 108, -33, -58, -3, -93, 52, 65, -66, 23, 112, 88, -51, 78, 124, -29, -16, 96, 40, 25, 119, -115, 68, 69, -122, -79, 71, -8, -30, -72, -27, 118, 88, -59, 90, -39};
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
    msg.setTimeStamp(0.262192160582);
    msg.setSource(21990U);
    msg.setSourceEntity(62U);
    msg.setDestination(10965U);
    msg.setDestinationEntity(14U);
    msg.type = 165U;
    msg.op = 10U;
    msg.request_id = 63413U;
    msg.plan_id.assign("WHHSOYBJARZKTAANLKUODXUJBWSXIOINYSKRSTRMDQKJGGREOWCWBDIMLYKIPUPPYDCNZGMRORJYWWAOJGIETHJWMFLCHGZVEUHAWTMXRSEPGJMFXTQG");
    msg.flags = 63447U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 251475957U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWTYACKBSEDQFUELXHYILRRBJOAZCCDTEJLGVGJUDOJWEEWBEZOOTSGOFOINLYJLFGSRUFLAZZISPMUWSARPCPTLRFQZAXIRNSNUCPBHLMQMBPKHVVDWVWJKJXKBDGYHAMDJCKXPFWIDUVPNMEVHWGRSDYOQZSMANVZAZNJ");

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
    msg.setTimeStamp(0.427056639074);
    msg.setSource(63650U);
    msg.setSourceEntity(10U);
    msg.setDestination(34416U);
    msg.setDestinationEntity(243U);
    msg.type = 50U;
    msg.op = 35U;
    msg.request_id = 52775U;
    msg.plan_id.assign("RHILDPNXEFWHXJZSUEDEVFPQTGFVTIXCHOSEAZIRQLDLWLHUDKSBYSZIFICSPULGXJNUZENLFJUPBMBBPWODEISDKNOAYUTMVIFTRNTUKGJATVPMWOQRACESXZIYBLHGSAKGCMOYDNWALOWPJUACEYCLJIBRHQMZSFVVHWYGRFJADC");
    msg.flags = 30010U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.685841641278;
    tmp_msg_0.beam_height = 0.252787262991;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUCKAQMXNSDHJSRAHUNVMCTRZTSBPHCSHGBVAONWOOSNFTQWTHVPTCLXQOZOBBZGHAEEYUTKPNJNRQZEKINDILRRLJLPNXTTCKSUYHXWRGYKVDAJFYDWMFQCYGOIEIIAGEMZDMXDLPAZDXMBROWEZJGLYVVEOMYBBUJIBAMTWWPKIVHQWSQEKGRLJKYEKFSIRJFUGSLXUYZC");

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
    msg.setTimeStamp(0.564076062388);
    msg.setSource(59913U);
    msg.setSourceEntity(225U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(164U);
    msg.type = 81U;
    msg.op = 39U;
    msg.request_id = 18488U;
    msg.plan_id.assign("NPXCYKOXQAJEUIPDBPHPMNQEFBZFHRXOGPBEJIJOJBIWRZODFKMRSMMGGVUDYDFXDCUPVLZQABCQWFPSVZUCDTUTSLSKQIRRNUZLHQPOGEFNRNSZCFKKGYFNTJAMJJMGYTTKIBMBOLQGWHDSJCHKOWOYV");
    msg.flags = 6377U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 210U;
    tmp_msg_0.entities.assign("QXKMRENAAWFEPSQJIMLFRGWDNFIELIYAOMUNDWAHQRWYGRPTOEQSVWKNFMOCBYTRCWSQBFSJPVGDUCEYWMFRZTSBZRUJUEKLVXTZPNSBPLNVGJHOSXYU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZGUIRSOCMEGNYULEQEUNWFISDOJRHPPCYAVMYFHPTVSGNUTHXZJJTVVPWBDUWRTGRWOOPMLDZDNFUPTNTBQEGCXQYLACHMNHFGQSFYRLYQZWJNMBIHIXOEVJOLRMAVGBPTVLWXSACQLYKG");

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
    msg.setTimeStamp(0.664785310208);
    msg.setSource(25608U);
    msg.setSourceEntity(50U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(228U);
    msg.state = 169U;
    msg.plan_id.assign("MJDGVUHMWAJPYSQPMTMRLTLIOKNUFAJNRHSWLZYBGZYUXIIFTOYQKBRWBNFKPBJAYSAFDUYHTHLNQSGYIFFCWCGQERMRKYNWIMLSUWWAGXOHDQBQVCXJZPSXOBCHFQHYSUOEBI");
    msg.plan_eta = -624651019;
    msg.plan_progress = 0.554182572794;
    msg.man_id.assign("PKHQGUUIGFHJXZTCLVCWYCQE");
    msg.man_type = 29324U;
    msg.man_eta = 1823678290;
    msg.last_outcome = 116U;

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
    msg.setTimeStamp(0.160215665752);
    msg.setSource(34174U);
    msg.setSourceEntity(245U);
    msg.setDestination(44229U);
    msg.setDestinationEntity(108U);
    msg.state = 39U;
    msg.plan_id.assign("RQSSEUKQDEUOVXYLIMCLQXBHYTWUMVIIOK");
    msg.plan_eta = 563227116;
    msg.plan_progress = 0.367902845639;
    msg.man_id.assign("OOSEETSAZHFXTFSJGKARGQYUVHQLXUGVYZICMITQLFPDCQGWPFRYUTENSLIKBOEUAKTYVDWPRANRNFSRL");
    msg.man_type = 49400U;
    msg.man_eta = -44029357;
    msg.last_outcome = 51U;

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
    msg.setTimeStamp(0.918847178963);
    msg.setSource(47860U);
    msg.setSourceEntity(4U);
    msg.setDestination(28949U);
    msg.setDestinationEntity(41U);
    msg.state = 87U;
    msg.plan_id.assign("RCNYOLBGIBXATVYCCQGIUDIZEPLQKHQZMBRZKNZEXIKHTZWHILPWVERMDFSLYAGIGGCATOEZCWELQZIOEKYDPUAGASMSFBNDPHXDTPWJRWNJXHJKYGFAUNZRBRMESXCNJQOELSWYKGEKZKX");
    msg.plan_eta = 297548479;
    msg.plan_progress = 0.573799722372;
    msg.man_id.assign("OHFELNZTDTRFJDX");
    msg.man_type = 260U;
    msg.man_eta = -320007457;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.62625671343);
    msg.setSource(46680U);
    msg.setSourceEntity(80U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(14U);
    msg.name.assign("RKYONWDQHMHEKKITFEJRNHYHWOPWPIVUFEOXYZRSALGKFMJUHCKNGUANGVMJWDKKZDZUAQPXPYZNPAXFTYISQRPBHREAANJRAGDVVLPJYWCKBGVOWVLUMERIATMQDEUQHNLSTUVDQBYUNGCUDYGXXHQYPCCIMXJWPKGHRQIFTYEFPHGISTESLIBMEOOLCTOXIDFZAKFZOOC");
    msg.value.assign("TXVQYSUNSCRXHVWEKFPSFNHVGXRKNYFUVMQOBKXEZGXSURKGYLMGHIODWBKYLJGYWKINPFSQXSJLCJIZANERLYCKAYNNWTEVRBGOZWUPFHZICP");
    msg.type = 113U;
    msg.access = 127U;

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
    msg.setTimeStamp(0.0563438999411);
    msg.setSource(47287U);
    msg.setSourceEntity(240U);
    msg.setDestination(62807U);
    msg.setDestinationEntity(235U);
    msg.name.assign("MWQUALJHCWABBIIYMIPPQAXLTEHZLCBRNTKNXLRGBMRWXRKDJXJYCBHTMMUDCATTKDZICVOBYHSEVKFIZNARHOYWQFXUOGGYUJYBYNAQVNVRWRWVGMZVGFRVPXKAFNDEESSKZILDRBGIHFEUKMFKGQAPBEAITVPDSJNLXSLZYCDPCPOQFJTEQXINVCELYHJWCAED");
    msg.value.assign("RNYCODKKYVYRLSCPRIMKLUQCTQKSENWWAJEAPXBHOUKGYUCLJDIEUNJCSVEBPMNQAXTZILEZYRDFVMKXFBZZMTQCFBPZHNEHYIFRHMDCSDAWBAYPOKHZTRVAVNPCSWJKMXCGPUS");
    msg.type = 244U;
    msg.access = 2U;

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
    msg.setTimeStamp(0.560023105936);
    msg.setSource(55350U);
    msg.setSourceEntity(10U);
    msg.setDestination(45191U);
    msg.setDestinationEntity(26U);
    msg.name.assign("EZHLONQYRGVNFSCLAQBSVGGJZUTNOXRSBTKGEMEHKUSIYVAAEXSEEPBSWICGQJAPAXBRJWUYWQLTQCHZMHUMJHZCFEWWWTJLYEOHVHCHCGHXVYPLKFDMFOTBXUQGBIMO");
    msg.value.assign("JOHMKSCQDCDHUBDKFACKXSZDBHEYWADXZPFLPGCCFXOBVSOVJQQCYJBTAEFPINMZHWRWKGNERFZWYGGESALIMMLTFMCVQOTZBNUISVTLYNYSHJQHBWKMWNZRIRDENJXDFOHGTYWPRREPXCRMUNIXUXPUZTABVOQULRJAOXPITKOYBVMQYVBH");
    msg.type = 180U;
    msg.access = 48U;

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
    msg.setTimeStamp(0.353477128486);
    msg.setSource(14378U);
    msg.setSourceEntity(216U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(59U);
    msg.cmd = 232U;
    msg.op = 44U;
    msg.plan_id.assign("SYYIFKZEEMEEQQAQUXFARJSVPUPTICHDOIOMQYEQBOGDYAHARXDEXZJIILWHONBCJRBEATBXZLCRZLKHDQVLWIWOANQHJCPWZBLACSFCNSNKVTIHTSDYOXJGRIHTPUUVRDZKGGMTDKWCHXTWSSUNKUPJQZFVPWHFFNDQRKTSBIWOLVKJVEZXFOMLYCGBUEMGRRCRVQXNMP");
    msg.params.assign("OROOKQSPDBNUFNULLEAJLRNWDKURUCIVXHBWZLILRSRKUQWBDOUHWIMCMRFCHNXTMIIQULYKMJGAXVCTQBAGIVDNDTQCPYWKGAUYYHJGNGDHJQQPEPLDTYGZVITSCUQBOHIXNF");

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
    msg.setTimeStamp(0.217396023922);
    msg.setSource(64715U);
    msg.setSourceEntity(103U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(34U);
    msg.cmd = 231U;
    msg.op = 122U;
    msg.plan_id.assign("GEREOXOTXBYKOMFLYLBPZJHMGKRJMKPVPCCIFRAWPUYZWGEAYHHKATXGZKNBLXTKFOJGTLNNNOEQMGBVQULGFTDWUZMUVCEIRBCZUSROWQRLFNBKYLWTLHOSMRCFNUAVTGVDFSOQHQHQSNDBDAEBZQZCJDDKJPBOTSCIJMRQGDLXYODEVUEMPWRBXYXVMTSPSAITRVFHSJCIZJVWX");
    msg.params.assign("ICYEBMGLJUSJPZIDXGCXPYCWGQRMGKLQANJQBAOQUXPBLCVDIVRDFAWFTTYAPHRTZENBDQOLKPRHOCQIWRBFGDSVYSOQXXZNWNYZFRNZLHAQSCHDYTLQLEJSAWNUYWNKXPJSGSFFZXWOMOHVAUOHKWGNWOITTTKURXKISSNUGEPFUMTTEOZRGOBEZYSFVKCVJEMMZHBVMQBKEXCDDPPBEEWCIJLANIJIKDFJC");

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
    msg.setTimeStamp(0.273898916674);
    msg.setSource(13412U);
    msg.setSourceEntity(38U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(90U);
    msg.cmd = 209U;
    msg.op = 225U;
    msg.plan_id.assign("KYYVNMXOFHZNONBGQKAJRZNGUMWQSPXAZMHILMUEINMAOUZQJCVOJRRJVKGWMIZJOPBQVIETLVQTDJXDGYDHLFSWOYQPGPCZCCQSPQICNENLIXZFZHWLOTTITTURAMPEUBXLBBRYBTVKGTOAUAWFDRZFUSACASCSLOXKCFFBDNB");
    msg.params.assign("SVLCVCOWEPTEALVCHHOHZXRZRZQNNTUQOYLCWQDPHCRSBGPDLEAVPUKUAKWABIFRNSOWOKVMMZVULKLJAJJSFKYESBYSFHCDDPJJQKVWGYIDIQEQGNFMKJVXOJZGPBXNCYAYFZNLBOGEFETGXXIENRARJMHBUXCPQFLGKMYSTSRMWTVBDIIWWBGXGFPPGLNDXUZZJRNTIUMHZUTRTJSTIOSNQLYTMKBIOHMYUPDQQYCDWKFHOCV");

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
    msg.setTimeStamp(0.436910632042);
    msg.setSource(43836U);
    msg.setSourceEntity(89U);
    msg.setDestination(6640U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.120471686391;
    msg.lon = 0.546676264601;
    msg.depth = 0.342635897363;
    msg.roll = 0.467629104182;
    msg.pitch = 0.998420805569;
    msg.yaw = 0.350540044174;
    msg.rcp_time = 0.832825133261;
    msg.sid.assign("WCZVNFWYHQRRGCDPWYHZSPROEHENLNJCXFCQXJURMKANXSCGSDVOGJEJTRXISTLWHCFQVTUGGYIDAJJATPUJBRHGRQAOZKIZOTUIBMJBKEGHGTYIJ");
    msg.s_type = 116U;

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
    msg.setTimeStamp(0.888627479078);
    msg.setSource(50408U);
    msg.setSourceEntity(227U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.116364736649;
    msg.lon = 0.694894735285;
    msg.depth = 0.710780900767;
    msg.roll = 0.846137065699;
    msg.pitch = 0.311760724934;
    msg.yaw = 0.885187019408;
    msg.rcp_time = 0.47420785905;
    msg.sid.assign("VRFRBWAHDYIRLDQUWITWBPEOIDEJXQKJISBYJXGBJYZOATNXNCFVNMSAAYQGPFVKUPMROEBTZMXSLDYBSRCAEQOMKTRUGLAAGWHSCLFM");
    msg.s_type = 6U;

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
    msg.setTimeStamp(0.838888289638);
    msg.setSource(31275U);
    msg.setSourceEntity(21U);
    msg.setDestination(9082U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.761238861177;
    msg.lon = 0.8112224688;
    msg.depth = 0.987532809208;
    msg.roll = 0.787795960401;
    msg.pitch = 0.727934808373;
    msg.yaw = 0.845513498736;
    msg.rcp_time = 0.895615621118;
    msg.sid.assign("SLHOPEVTTRIFQBDSYBWFRNUXWCTQFRYMFRSFINUQWSLMETRKWZAJTBTENALIDRDHKUBIJCTAVQUQTVPIIEUXUCRAOKDJNTGMJJXXUUYOPSHDYSHIPJLMBHZSNVXLJDKKYLEZZCZFFRPBOAAZMXVGIQKYK");
    msg.s_type = 218U;

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
    msg.setTimeStamp(0.406766316892);
    msg.setSource(45365U);
    msg.setSourceEntity(32U);
    msg.setDestination(17065U);
    msg.setDestinationEntity(189U);
    msg.id.assign("PKEILVQAZHYWTJATCMLQGQLFSXGTDMPHVWXSDGTSWUTSS");
    msg.sensor_class.assign("MMEWRUDFVLAAVRHWSYPEOWOPXBXEJWZHVBWTMAYIAFBJPDXPACAKMUYEEOQXPBZMIZNPOGFTECPKGXSWNJCCJLIJ");
    msg.lat = 0.739744180689;
    msg.lon = 0.885337360583;
    msg.alt = 0.186645007118;
    msg.heading = 0.554715567709;
    msg.data.assign("EZFVCUJVDOP");

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
    msg.setTimeStamp(0.984554263776);
    msg.setSource(65014U);
    msg.setSourceEntity(179U);
    msg.setDestination(17094U);
    msg.setDestinationEntity(176U);
    msg.id.assign("BLCZFZWCKBESYPNTVWQOEQLRRQHKQDTHQIODFMJVHCIUOR");
    msg.sensor_class.assign("SAGWJYPUQEAJBKTVYSIVLYMOSBSODPNMHPJBNBFMZVRKBWAYLCINQHVFHOKCMWVXAWGWDWSOXKBHTFCHGXVUXPVQXNEKCKNUSUTHMMDZZRYEQGJZYNMGULCGKCPZCRWFPMBANR");
    msg.lat = 0.417212602198;
    msg.lon = 0.197694057581;
    msg.alt = 0.756794385734;
    msg.heading = 0.948829223081;
    msg.data.assign("DXRUTIQKXDMHKVJWQVUWWFTLEVEMBREKHZZRPBSRXXTTOVVSZIJXUSZRGYSVWASUJYKDZTHANWXJSAPZYWAXIEFANDSIOGRTRACBHYPHCLVGGLMTFUKCKYLMYFYBOZKMSDQOPGQUFZIPCEIEEJGXCDDQGEIYHUBALACHMA");

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
    msg.setTimeStamp(0.70677785501);
    msg.setSource(31714U);
    msg.setSourceEntity(145U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(68U);
    msg.id.assign("NJOERJTLJXALITYRYAAFWVLHDUMOHJKOMDJZSMBCTWRPPACIREBXFDMKUDNVBWTWUZANXXYCETPILPQVEUVHVKYGQYJDWERKPQSYMRVBZFHCZYWCFMXQTUCABSUQEKGVNGIXPBHGMBSPSQGDUNSIQVGGWBYKCDOVFJDTFOEKFEILOQZITNCLVYHGFBHZZANPZNFXMOKRDKPNQCXAWYNLFMOLJCAZGTGE");
    msg.sensor_class.assign("EARHOSMFXHLNPLHLKBYUYICFOYZWLYAGZMGQVKDFYFERLXQTJJEMECKNWPXVVWNDIWZEJXJHNUTGHWZIZSKBQCDNNOAPXHSCQDVLIIUTLFWPEBHDRVKYUZXJUSMS");
    msg.lat = 0.185534308066;
    msg.lon = 0.790797105158;
    msg.alt = 0.187173369652;
    msg.heading = 0.779287712307;
    msg.data.assign("RXKYNQQWCYAQQIOLSDPGBNIEWABDIWGATPKLNPABRYKLCJLISHVRZADCMVGBWZFOLRYG");

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
    msg.setTimeStamp(0.393890754149);
    msg.setSource(41270U);
    msg.setSourceEntity(126U);
    msg.setDestination(43453U);
    msg.setDestinationEntity(74U);
    msg.id.assign("QTYVLFZCGFRNPCDQIFQHWMVIVULHDMIEHRSSWYLMSOMOOUNUXLZZTZNPPCMNKJUFLTFXIUNMIDBBKWJFGVZQRXPTDF");

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
    msg.setTimeStamp(0.177557930114);
    msg.setSource(2510U);
    msg.setSourceEntity(157U);
    msg.setDestination(19846U);
    msg.setDestinationEntity(174U);
    msg.id.assign("UFCPDDRQTSUGMJAACQFMFWEVYLXIVSKJZUDZRLZRJALAPYQXFZXKFGHKVRSJGAEGSFIENLEQJHYONTCIGNNJJUQQDZQFOIOYACEHLETMPOOBHFXPEPAOISDKJSABRKPWAXWBTVSCSNGFWKGHWJMIHLBQDHVTRBSXCUYHKNMRBIRZIBNYDMLEODHGMCBOTVLWTGVKXTPZXGUNPVFZUWLJVHU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZWNJMSFSHYHAQRZDTVMBGZEJRVRZF");
    tmp_msg_0.feature_type = 229U;
    tmp_msg_0.rgb_red = 243U;
    tmp_msg_0.rgb_green = 208U;
    tmp_msg_0.rgb_blue = 147U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.659904037151;
    tmp_tmp_msg_0_0.lon = 0.690558199783;
    tmp_tmp_msg_0_0.alt = 0.453403608612;
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
    msg.setTimeStamp(0.703439009971);
    msg.setSource(46135U);
    msg.setSourceEntity(30U);
    msg.setDestination(50698U);
    msg.setDestinationEntity(170U);
    msg.id.assign("ELQIZEGXQKNWKOLGDRAFFVSOPGXPQAVCXHHYHPQEZWJOXQZRJNXSSKZIDQUIDYFLDCYJIGYGOHDLCNJPNZKCRJEPIRWEUOHLCLDKBTWOIXKGKCISTMUWMPSIBTZBYYJBADCHQMKSXQMUYWGVZAUIFQAWRBSBTIUVVYNHNXUFSAYMMRHCFTORWNOYUDLBEJCPRNANMWTA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TIXSMKUHPOBPLJHRWNWQYRUYOVWNYJYWVZRIWZKUINJATEDQCOZZSBVNGEMROSJIKGVDUXYKIGQUGPFAJLBCMCQTVEWLXJPDJKSCZYSARZVHAESFXHUHGALYFQBBJFBLAYGSQNILFEQHZOTNJEUXSDWIQLKXXIQRPRKWAMHXDCOWPDOY");
    tmp_msg_0.feature_type = 75U;
    tmp_msg_0.rgb_red = 210U;
    tmp_msg_0.rgb_green = 2U;
    tmp_msg_0.rgb_blue = 218U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.521182439953;
    tmp_tmp_msg_0_0.lon = 0.280671332271;
    tmp_tmp_msg_0_0.alt = 0.375753654622;
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
    msg.setTimeStamp(0.769943817489);
    msg.setSource(19046U);
    msg.setSourceEntity(203U);
    msg.setDestination(20161U);
    msg.setDestinationEntity(219U);
    msg.id.assign("IUVTLSWKMAUYCZTBPEVKRPAIARIGCUPDOLDRLNHQZXZYTZMXCNBVDTNNKULSJUUAWBSXYFOCENDSROPFMTHOYFJSWJQBKXUFQMUPUTEIRJPKDSSFZQYIEMRKJEOHDXXPOWCCHJAQWCJIGLVFBYAKMHCNWFNAKJJBEQEISRQACYYROPMRPOMLTENIGY");
    msg.feature_type = 54U;
    msg.rgb_red = 20U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 142U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.199735208581;
    tmp_msg_0.lon = 0.327788923709;
    tmp_msg_0.alt = 0.914544623686;
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
    msg.setTimeStamp(0.981811163633);
    msg.setSource(41803U);
    msg.setSourceEntity(209U);
    msg.setDestination(595U);
    msg.setDestinationEntity(157U);
    msg.id.assign("VCFOUPAQIUNUFYKKBMALNBDULTKJKLBWMTZJYIGPVRRLICYYCIVXXHANSPMCEVUQQEBQBRARZYTRGFRAENXHAWGEJOWIUTTESKBDLQQMFAVACORKYYRFMOJVQGZJFXLWKDDEFMSHTYHGWCXNDDJHXZCJWLNKHFUNXRTQOOOINXCIBLTKCHZHPXEEDJTWZVAGXNHWGUSPBPDATQEKDWBLPPJMSSVSWGMOFS");
    msg.feature_type = 211U;
    msg.rgb_red = 66U;
    msg.rgb_green = 79U;
    msg.rgb_blue = 142U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.141139626486;
    tmp_msg_0.lon = 0.311930267651;
    tmp_msg_0.alt = 0.458843928026;
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
    msg.setTimeStamp(0.43046183315);
    msg.setSource(3199U);
    msg.setSourceEntity(230U);
    msg.setDestination(5727U);
    msg.setDestinationEntity(247U);
    msg.id.assign("RLGYCOEWETGHIPFVXSDKQOTBCQDHRINZMEIYFTCSIWJUYRYAPZWUJQOZWHIUVFNBAWXZBXKAHOMMFVLUVOBMIJNTDBDYMMSPUCZCAMMJJWHDFNSSLLVCROYRGSXLQPQUQWBRJEX");
    msg.feature_type = 39U;
    msg.rgb_red = 129U;
    msg.rgb_green = 80U;
    msg.rgb_blue = 14U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.854526220093;
    tmp_msg_0.lon = 0.75387199091;
    tmp_msg_0.alt = 0.102716498932;
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
    msg.setTimeStamp(0.704386535687);
    msg.setSource(14388U);
    msg.setSourceEntity(22U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.803958780018;
    msg.lon = 0.0619502388534;
    msg.alt = 0.00811786216022;

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
    msg.setTimeStamp(0.914375757257);
    msg.setSource(44422U);
    msg.setSourceEntity(171U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.43181060745;
    msg.lon = 0.846784359127;
    msg.alt = 0.575009733531;

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
    msg.setTimeStamp(0.491587296479);
    msg.setSource(48706U);
    msg.setSourceEntity(236U);
    msg.setDestination(44477U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.247189545152;
    msg.lon = 0.211233018279;
    msg.alt = 0.0776445919503;

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
    msg.setTimeStamp(0.486576280905);
    msg.setSource(21306U);
    msg.setSourceEntity(72U);
    msg.setDestination(3074U);
    msg.setDestinationEntity(24U);
    msg.type = 92U;
    msg.id.assign("AIJIYXJQXZPLGIIXQKZNGWKBCVSSOAGSNYQLLPEFMFPRIFDHUVFUEZGMTIINWMOEUCQQCNBWNCHYAPCVKLCEVWQDXOTOTSDKRCMZXLAGEWJZNIMKDRXJAFXXZWJBIBRGOWUOMDJSUNYPVONYJXUKHRWZFQOSJFTOQOAHC");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WLAGPRLPSPPCAPIFBOSBTFYCRINMWGNRPLGBYRKXWWYJBFAQFUOXWEFKCCIOVDSVKANTZSDHRIRSYUSOQCNMUJQDMPMZCWGLMOUBFOSJQTFXOMJVUHIATKXFXVNMEKAEEVXDMHAGERXDGHZMYIQHPFZQIZELSSAQYIDZKLMYQDCVSWLYHUIBJHEUJHUKDTVVJKNLTNNVGGDKJRPALWXDZCNHORVXTP");
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
    msg.setTimeStamp(0.305733354814);
    msg.setSource(22063U);
    msg.setSourceEntity(136U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(38U);
    msg.type = 33U;
    msg.id.assign("WZYSQEQPWGRNVHMDCVTDCNPWLXQOFCSPVKSAESNFGTAYCJOHXCBNIVBIYWKAVUE");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NEQAEJWDHRHFSZDGQAXEHKYZVISXRBKNBQKKSMCOMPJFOJHDZVEFGGANRIKJPSWBIPQQLPLVUBULUGHYKAOLYDRIERHIQYVTHTWVYSGGNFOWYJPFXSONFCUTUQENAJ");
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
    msg.setTimeStamp(0.0982825133933);
    msg.setSource(25135U);
    msg.setSourceEntity(155U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(17U);
    msg.type = 170U;
    msg.id.assign("CAYYVJHPVABITMYPBMBLBBSRLNKHWMZYI");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 155U;
    tmp_msg_0.range = 0.513280469227;
    tmp_msg_0.acceptance = 143U;
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
    msg.setTimeStamp(0.585559746095);
    msg.setSource(23360U);
    msg.setSourceEntity(108U);
    msg.setDestination(18188U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("IMXLAFJVTAXLGYCTOATBRPZFBOWYPSHOSHMKQNIWDGYWSURHLYXXBJSFWZDXOEDJCBXENVAALKRIFJXHPUORKZTDAOSHFYQQVEBMGNAJUHBWYOWHIVCZJCUFUFWZZKTFHQSKGRQFEHWJRYZYPXEVWUNGUBPPUPKE");

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
    msg.setTimeStamp(0.882498796231);
    msg.setSource(49864U);
    msg.setSourceEntity(219U);
    msg.setDestination(55758U);
    msg.setDestinationEntity(193U);
    msg.localname.assign("BQDEYFNXMSWQNMSKGCYLEPKRJJEUEHHEDOZPGMIWUGZIJUUAINOHKJAAIDCSPXFZULWPDSGVBORHGDCVOAEJFFJASJCWYHAVKXMQSMUGBTXKQWXOLFLUVVOQCIXHNYIEGAUYDIBNSZBFZJRXQFWAZCPQKMNDTVMNYBIUOCPQMSCBVYRHPQEDDZDNFCRKTLLQLUTRJ");

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
    msg.setTimeStamp(0.59390189394);
    msg.setSource(1899U);
    msg.setSourceEntity(241U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("YEHQXULRXRVRUPYCOGZHNIQYARQPWMXXWNVVFAHNEQCIPAGTYSNFDFTCEUAJNZLPBINUDRQHLJGZAAUPMOSBLWIKRLPFNGILHSIMOXWANGFKCLADNUYMHGFTKLPHMDBZZQBXGKDMAMZBCDRKQUXYJTXBDRKTPQRSYZJOTJVSJTSWMECCOUWPUMFVKZFEUYWWOHWVESBETKKGIKNADJYTVHPOEQCDSDBJCELXRMJFOFJQCIIXHVLSE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NWUWOSOINMSBGVVXLWRLREKZOKJHPXQTDAVAMVYLOMOFXRVRMFDJBXLHBHABIYSNUZVVEFNTBIKRZTWAFAFYXQWIOYQONPYINDPWMGRYWDPFAIQXHAXURPLBGVWJWETEDJPGLUJPPFHBIRSEQLCMKPCNUDNSXQEHKDGYJQBCUZTCHIAXYNXECAZYOJCVSGEGOTTWZZPJDFSMAJKCHTMFGSYCHQH");
    tmp_msg_0.sys_type = 122U;
    tmp_msg_0.owner = 57959U;
    tmp_msg_0.lat = 0.483500266305;
    tmp_msg_0.lon = 0.630209564987;
    tmp_msg_0.height = 0.832276769651;
    tmp_msg_0.services.assign("EBEUHIMYJFIBRTZXL");
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
    msg.setTimeStamp(0.0109770567448);
    msg.setSource(41563U);
    msg.setSourceEntity(241U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("LMBMSXQMJNBLQHWFERISXOEADKBFJBFFJTWPNVPAIQCEYYUXOCEQTXRFMQAMOQTCDYLLVZLPWGBEHPKCRPUAXJJSISOCEFRNYGWTTDACZMFKRJSEHCLMUNENLVXVVHSIPXROCFXJGHZVWQEWDTAAPDRZNDIQDKONUWNEKPIXRKSBKUGYOYOHJGIKOSIVUQMMUGMUZCPGOUIVWLAGPWRDZDKBZFTYNTYDSZTBBHWHXHAGGNLV");
    msg.predicate.assign("BZALPTRCOKVWPJWLHKCNTABLXJDGCLYOPNSVYJMLGWPUESOFZOCDARFLPOXDTSQDCQHHOZXBHXNYZMIVMVNQMBAVTHFUQOSMDKSTUNJBUGTLBVECRRPDNVFBAFPLEGMRXNNEZKRQAYGKIJFH");
    msg.attributes.assign("QIKHZLGVHTVTJEFKTITDAKNG");

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
    msg.setTimeStamp(0.251498298779);
    msg.setSource(26540U);
    msg.setSourceEntity(46U);
    msg.setDestination(10056U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("BUCFPVWPRKXNFORGKVVYADVGOSFGQHMQCBJZXNVJHWYLRSBLQJQDMIZXJSNNPGVBMPAVTIZNSCYJZFGVNNZWCSYCOGZCFCYJYPURJTHUEDILOFWNPMFKKEUTHXAXPDTRSLZL");
    msg.predicate.assign("KHWOXVDISGGDOMUSZZEBXZJMAALSBQNVXLHCATXSLKEMRLXPHURFFNZBMRSN");
    msg.attributes.assign("CRYDYHONJTPQUOUMELNOHQBGGLICSNKWWYAQQCSZUFLMBOGISP");

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
    msg.setTimeStamp(0.565095499323);
    msg.setSource(5146U);
    msg.setSourceEntity(205U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("OSWYWTGKGCJAVCUFDNAAOMXVZOFKNSNSBGYQYSETDXHASYWENVQRHJUKBPNAMGHBIMBUR");
    msg.predicate.assign("BLGETUAOVNFXJFGXPLEIDEKHWVACNFNRYHYWOLZGPKVITFUEARDPNUWAHGFOSKYRGXLHIUKDBTRUFPKPMNHGDFCSYSXGQTBECMMRZAMRIZVLBUQSZKRBQNSQSBZJMUWRJUQEDJXWXBUYYQKEYDVLKCASRHSQOYVBXEFDHJLQZPDCNCCJJMOXMHEYKBULXWASVITCHGQZMPAJP");
    msg.attributes.assign("ZVEVNWGCFQXUAWUNPUJLLRTJPXRTJKIAQLTBXQLLYDVEBCZIXOG");

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
    msg.setTimeStamp(0.834890905457);
    msg.setSource(18591U);
    msg.setSourceEntity(118U);
    msg.setDestination(52668U);
    msg.setDestinationEntity(197U);
    msg.command = 153U;
    msg.goal_id.assign("CGJSMJVFWAHMPCLPHZOKZUDEJMYFDJNBIOAKOBNEIJDSAMNNLJAUEAFGQXXMOVVZCUNYSHRKXDOIEPNKOEBIZEFRSOWTYBLOGVCBIGMZTVGYLWQQRYLHNXEAEFDJHQLK");
    msg.goal_xml.assign("IIXMEUNLMIBRYTGONHYPIYDXNVUAJTUSTPORQIXLUUTKQFCKAEABJDMWS");

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
    msg.setTimeStamp(0.22856006909);
    msg.setSource(20309U);
    msg.setSourceEntity(28U);
    msg.setDestination(44253U);
    msg.setDestinationEntity(248U);
    msg.command = 96U;
    msg.goal_id.assign("CFGDEVKJSDUHOCOHGXSIUXXTRFLAGPBLPTHLBHATYRYYYXLHAZNQMCTURJMSGYSBFTUTIOZMJICWAWZQNCQVEIMXMKESRDVZKCXNWJHRDHJNWVEZAOQKYYBUJIOKVVCFSTSQVKDLJELYANKGJVZQORQENNXZJWKRUMILEMPWINLRBCDUARWOYTPMWWXBOSSPHQBDOYHWAELRUPXPUMCADFNPQGSDBQBEL");
    msg.goal_xml.assign("FNTYSRTWXEVUYASGAKUGLJHVKXQTJXMRSVOOWHRMBVYEOXRGMIOIZAQUGYRZBTNXQHWRZOAEVCKADJFZHVIFCQOQHENBCSUMZBKKPDIGYOTADHRYEUTIUOPBBUNHR");

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
    msg.setTimeStamp(0.0430210600243);
    msg.setSource(18880U);
    msg.setSourceEntity(244U);
    msg.setDestination(51549U);
    msg.setDestinationEntity(100U);
    msg.command = 130U;
    msg.goal_id.assign("ZSYKPLMALGBAZOUSGBVFCUWXZNFYVBMKBCXGYOJWKNYDTNTERNSZLRBZHRDEWWPJQVFPEDSSCWRJPXIDIRUNUTHFIYITFOGUACYHFFMLPWOVEDXCDPLYKVWTTDOJAQCQBXDXZCUKXVJYTLLHQMNTQQYSOGPKESJGJMABMBOXILSTJOQUNWGQAHZYVMWRRJMKVKCAIFEZXIGIXSHGHQIAZRVGEJPIHNCUCOEDLDAEPKSHPHVBNRUNBUKAMF");
    msg.goal_xml.assign("VPRWNZUPRMTMSOKWXAAPHVQLGADKTYSPVVMAFCFTQUNEEOTKBWETNAZHVIBOXQTIYZDSYGIPWLYMWMVFIKEZCXBKQNCZXQMEQUIQCASCQHJVKKWHSDINODXNUDPDJSEHMFFRDIJBLBBDRGJGYIZCBGQXVGWTGENCCKNUWYJAOYALHURXLTBZZFDMAKFPYJOUEXEJZLFLPHQXTPLKGVTVYSMUCLDRSSOJBROE");

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
    msg.setTimeStamp(0.309902746813);
    msg.setSource(47688U);
    msg.setSourceEntity(56U);
    msg.setDestination(45044U);
    msg.setDestinationEntity(30U);
    msg.op = 102U;
    msg.goal_id.assign("CXOGAZDJRRIVHASFHPIYBSQJAOYJKLTXNSFLIETDOJMCDIUXNTYKTPBEANFBZVIEHMRBPEFYQNFQQVCVQAVHUBKRMRYJWZLREPNAHWRIDIVWCSHUKVSHRWINMQGIUN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZHJMCKDJTYGMGCLAUCHZKZXFVTSWFCHZUZRPNMOWMZRYSTMWHAULTE");
    tmp_msg_0.predicate.assign("ZJQVRQSJYJSDTPEABHTLCKAOMNMQMONODTNKMXYFYXCGOBCLSWDOKUMKUPVIEXJCWNEYYNLCNIPXGACALDJLLQUOCQWHERWLONWVXHICKCFAOAUUKRJVBBHARGIZEZQPEISPVDMHKFSWNYVDLVONZHIVEZNHGMBHJFKTYRTIGWMUBXUYPQPSGPGHJFZDUK");
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
    msg.setTimeStamp(0.0613405176102);
    msg.setSource(62817U);
    msg.setSourceEntity(185U);
    msg.setDestination(645U);
    msg.setDestinationEntity(9U);
    msg.op = 103U;
    msg.goal_id.assign("MPQNWDGPWGPLXIWCXPZKDEFJVHRDQNUZNJYNXPAODBYOUVJGJHEAPEZHFBCNLGVACLNKJFMNZAULDMIHKPBIVIZBSAQOEXBTZSEDCGQEVBZXYMJSDTRRTXLNNWZLYYGECYTUZGZUTSMDFJQWFOIYAHRCCTUXLGBKIEQIQCSLBJRSQKWEKKGIHRGQYFSSAMAJDOVS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BEUOQCJZFMQYGUSDXCXWEDPARQLPLQZHCVKAKARVGQUJVHTWPKSNQOLYWRIMUEBYXFFCBPRNWPWYRZWFGTBMLXBNNKXPEDUOWOHGYDFJTSLITBJOITCGRSHBAPKSDKYTAEKGXBVIEIUVJWUXNICHNFSGQVJTTHMNZWPREDECPUIDXLLOSBZHTJKVY");
    tmp_msg_0.predicate.assign("WQKBJKPSKUUMPQTCLJWFHTXAUWQVRIVLNGHWKPABYFIYQKEBDHXJVUHQZCHOHIHVJFDMPMWVJEZXJCRPBKYXDOSYPAJWAMTAWSCICQFMGKAFGNGGSPEYUOIPXYCNEZCFUFNNLXZEKVEMROIMBYDWQBWZRXJOCQDGBDGIYEROOCLRTTSTDFZLXUJHMBPFHVBMDOLZTNZLIYGLEVASGTSXAKLDRERQHJW");
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
    msg.setTimeStamp(0.214090969677);
    msg.setSource(41796U);
    msg.setSourceEntity(150U);
    msg.setDestination(16947U);
    msg.setDestinationEntity(125U);
    msg.op = 221U;
    msg.goal_id.assign("EFVAWHAHILLDXTNZPIOZTYJHBOUVJEAJSVYRSQGIWGCVHCAKKQEWZQOODYWUBKBTTKPWNRDIHIETVZAKSAVIMFAPXKQTRGJMNTCZVOQTPNVLFYCROCRGQLBSODYGPZJQLXDADEMGGHPSONMBWYBRFEIEXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YJSOIPKREJCFMVRTMTXZFMDRBEJTHPPGVHNBVGYVPTIEMCFXYCDWPYWXXDYAYU");
    tmp_msg_0.predicate.assign("FDAUUUOFERQTFWUGWVDXMETIAPIQUZNXPGVKXILTEMLGWVKKKKACISJXSHCZXUVGRHCXMOZBOTFLVDFBGOAENFIMGNEROERBPIISEWHZZJNWJCXHCJJUHKFPSYNQQAYTEHLRQZSCVMSWYLPDBMGSLGZLTOQFAKD");
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
    msg.setTimeStamp(0.643067724115);
    msg.setSource(49360U);
    msg.setSourceEntity(184U);
    msg.setDestination(54660U);
    msg.setDestinationEntity(92U);
    msg.name.assign("ITJLHCEVBYMURRMYJXEINZACFVHEZVRZDBDAXKHFCMMEUPLCSYAXVOKTMYALIMXZFSN");
    msg.attr_type = 9U;
    msg.min.assign("FDLULQTOXLWQHCQDWJJSSJDRBVSPFTHOEKFATBLJALLHQZERVDEGAFCAVQRPDSIKBCYGKQXBUMQRPXSNZOFTTH");
    msg.max.assign("WPWTPNGIJOL");

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
    msg.setTimeStamp(0.297366792901);
    msg.setSource(14492U);
    msg.setSourceEntity(37U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(250U);
    msg.name.assign("IDBITYHLRIKOFOJVNNKPEEOSKJQVDOVANXFVNTUKZAJMLTUMIKWUUZBJXLEOKIPHLPGXKAOTEQUQWYKWBPXIYMYLRPNEXQACHKFUGJCFSNRESDIHMOBLRRLCDRYCBZGTVAQGHCCQPTABNQDBVDZMCFJFRLWSTVEGZI");
    msg.attr_type = 43U;
    msg.min.assign("RLMAEMWPEDYSWTCQVDZKKDCAFHMKULFXYPOLTDJMFZQKQHVVCICZNUIPGLRKZOISSSFLYOKSBTCLKQPNEBCWBAYUZRGQIVYFSJNBHHHLVFEZQUNRNJJXENDQJLWHPJRPBTSIUXGUAWXAFDICEAPFMVLJYTUZBWBBGJACMWRNHODOTGKXAJPZVIDCZDBKHXI");
    msg.max.assign("MLHZMZLJHCHZIYSHWDUXQFMQWPSMNHXHVPKZVXFULUEJNANRBFEEESUJLSSNUYZBKRHJIRUYLZRKDACIQLVUTSYQETQOXIDGCORNQRWZOFPCIHQMAKCJHCDCJDJFSNVPWPTAXBSDPWRWJXYTPBZDQBLSGRJYLWGTXTGIMBBYYKUKMRDBSXDZWAAXFDOHCNLMTIBEOUEQGAWJOKYTEFOZVAMFVVG");

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
    msg.setTimeStamp(0.527461603524);
    msg.setSource(47933U);
    msg.setSourceEntity(139U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(115U);
    msg.name.assign("QIJTFVVYXDSBXSQGPEHFLLFLECROWJJHGONLHMJDAOAFJPQEVVIJURAHBUFNBDTNSWTAFYOOQAKCKCGSPDRZSQUEWWNOPQHHPNZITBNGWMANIIYSOGUKPWUW");
    msg.attr_type = 220U;
    msg.min.assign("VKTXQFTLRZGAEYCWIJQQXUYJGXFAGTKQYZGHDNCRIXSQZTBIIMFPWWNNCBHXZCGYCQJBUGZPPFOOSVTMLPWJWGVHEUBLKEAPTEUSHSPTBQLOCJXDLXPAXKZFYYEDVOBRSILOEZIHGUUCZMUVFGAHIKFMEDRVYMPAEHRVHTOBWFTNRGBYZSHRWKSLABBYOWURCDKMMDAHEJNICMRPKMWFNDDDQKPNVSSAQRSCDQZJLVNAITKO");
    msg.max.assign("BGKLDXIURRJHPBEPWAMZZVDNKSEGPUFLQZHNVAFVMVLMQCQPDFXKOSROBQHVZIHWZGBOBBYVEMUOF");

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
    msg.setTimeStamp(0.380938635628);
    msg.setSource(41087U);
    msg.setSourceEntity(137U);
    msg.setDestination(52930U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("MJSLJLXBPOOLRVIVVYHMISJXEQTRKSNIYKUQNGSWIAV");
    msg.predicate.assign("KUDPMJLESLBQAUATMJMCAQDQZSWNBZXHZHQOLITLXPZKMKDWBHXYDQFKFMRLYAIBYHRLJGYOKRYNGDUZQSNUJCXMPKETULCTEBMIKGWFPOJMVESNGRXKOKTJEMAFEVICQBGVOARXVTSZSGNEFPTDYYNJFJVXZRNQEZVOBOBAOHSWDPYWVPGWQOJIDPICEFX");

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
    msg.setTimeStamp(0.889518292341);
    msg.setSource(37948U);
    msg.setSourceEntity(133U);
    msg.setDestination(11850U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("EQTFFHUGSGDUEWOZVOAGGMZTPFVAQKLGFBFHMDVWYWJLBTJMCNFRHCBQOFWSQBXNACRLJHMKRNKKZGPNWTPELOIYWFDUVZKSJYDOSTTYENTHMIJTVERRGXNXMIKWYUVHPEAYAVAILQTHIRKWUGXVXCXCUUWKYNEUAAFJBLSNEUSDHIOKBYNQPFOVEMLJRJDSQKJZLCQQBGLLNSHDPZZITBUOBIPDZPPMIJRARXYZXXVDXIMA");
    msg.predicate.assign("LAGJWJEBPGPIATZWVXKECVNRFRMTSJRDLOAEQCMXHYIJPXUVHSYGDVVDZXDH");

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
    msg.setTimeStamp(0.0194465948141);
    msg.setSource(53309U);
    msg.setSourceEntity(13U);
    msg.setDestination(55977U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("DRRSRNYZQDXXUODIEZRHUYVZTPQQMSLYSCEBRNFGLYOLVUOYQGLGGNBTKGKNOREOBGNEUWTMKMHCCHUKWDTIBFIJUIFAQXKCVAFQMMKKGGWFCAXQPBTDHHUIRZWCCSJMJSIZOXXLITJHYAHHZVYSKWYZPLJOIEBBRUWDJEOGBNANXAXPJZVVGJMQKMDCPWQTNFXETEYVIAWCALMFSLEUXWUOTMFOYDP");
    msg.predicate.assign("IOKGYPJMAPX");

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
    msg.setTimeStamp(0.953829078527);
    msg.setSource(45814U);
    msg.setSourceEntity(222U);
    msg.setDestination(24653U);
    msg.setDestinationEntity(44U);
    msg.reactor.assign("HRNLHDZEFSIWBWXJJNNRTYMZOYDMJNPYAUCLILMWSTCDWSPEQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UFRGMECFRBPRTNFQMNMZRDLFKYWLJBTYLEKDAOXCEMDNITFFNGIMJSLFEEMTKNO");
    tmp_msg_0.predicate.assign("OBSKZTIFDWLPBIUNUFHEBWPVSENTNXBJIHAHINJUDQQWRBFHHMCKRJEMHMYOTCLMWLNGYZIELAZKSGUASOFXIYXTJPMARCOQEVPAHLCFRRPQGXMYQPSJCOWZEDBBGRGUUIYVWENSNJFWYBUCFAM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XRIZJEKGJZZPZCXSOPKPSQEXAIRRTJDFMTWANYLBLQUSWQGOFWLHCBUECEETRULOHTFPNQTKVKVSRGOSVMIYKRFBYHXMDLUZATPISRALEZDAJYBIBMVUCOQFWODWJLDKCJXZFEPPXXUDXAZLNDXPVWPNVHBYAFJVGHGOWEQDISOYSIGUMCRQMLHHJKMJIUSYQVWFFEOJNHKTYDEWXOBCKBSTAANHNUFRRGYAZTVNCDNQMLPIBTVGBYUCZWIG");
    tmp_tmp_msg_0_0.attr_type = 160U;
    tmp_tmp_msg_0_0.min.assign("VJYLBFMOLFOMPRDQAVHDTWQRWPEETREHISCJNCRDDOUKGONGUNCTXFMJEQOIWISNAMXAAKGBZBSJHMKLOSQKCMLUFEJXZIICDASTGSHIMDKLYBIPBHGDZRFTPXBPTSIJKDUCZTEKLEUVQDLBXHAOPZWQUUSKZHWJWAGUNXTGQRQYFNFURXVWFPMCNYOPEZGRKSHKJNWVVQYWCBDYBNPZTOSXNXFLFPCHUYJGZVAIX");
    tmp_tmp_msg_0_0.max.assign("XULIVQWGORYQBSIJABAOJAYBVIXVYGRWOFDZZPUNBVPHVDKMXZKLLDZVLAIOBYVMLPGYKURTYCREYJQDSHSPUWCQQNYNXMECKWQGHUOQI");
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
    msg.setTimeStamp(0.214883791067);
    msg.setSource(29078U);
    msg.setSourceEntity(162U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(67U);
    msg.reactor.assign("BGCUYXKESJYIVHYREISGKXSFZNUTOKRPRKPEYKXGDJFSUUYOIPSIZWCZMMAPWTHVZSDBHCUKRWRMAXVZWTLIZFDRVTSDGCBXLIOYCUCDUJALHBPNAXOOLFXBPKYCABKXPENUAFMHZWJNBQHVQEGWCPIETFVJQDOYWQLSXYCVFMLRQELZMDGGOPMMVNITAQ");

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
    msg.setTimeStamp(0.442152355879);
    msg.setSource(47880U);
    msg.setSourceEntity(42U);
    msg.setDestination(28220U);
    msg.setDestinationEntity(86U);
    msg.reactor.assign("HHOGCQBDUJWWTISZCJXZSDLJNSFRYMZVHFQROFOAXQBADNIEYMSNAGUBEQLXVZGCMRFQQHFHHRCWYWJRCGAZEPHRIXEJUGBDQPZVNDDPVUZKLUPNULNIVHIAWMFJZQIGVVSKKPDXTZYMARWXBEIFHMAOWFGXSFNTYKFVEMASBLRYRKWJGUOMYCCCSDIYLYIGXCNDLHBUEOJEVECDRIPLKWQMOTOLTMSKUUNTTAKTJKZPPEK");

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
    msg.setTimeStamp(0.187551325114);
    msg.setSource(52182U);
    msg.setSourceEntity(152U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(216U);
    msg.id = 30U;
    msg.width = 52487U;
    msg.height = 41930U;
    msg.widthstep = 28695U;
    msg.channels = 0U;
    msg.depth = 82U;
    msg.finaldata = 116U;
    const char tmp_msg_0[] = {-20, 71, -73, -123, -87, 86, -101, -46, -56, 87, 27, 49, -110, 79, -58, -26, 50, -100, -84, 73, -113, -41, -124, 13, -119, -17, 94, -65, -87, 80, -48, -98, 123, -66, 50, -89, -77, -93, -28, 44, 97, 52, 124, 96, -31, 96, 121, 22, -49, 24, 60, -105, 58, -59, 102, -115, -25, -67, -118, 66, -36, -44, 30, 91, 10, 21, 90, 122, 11, 100, 15, -69, -85, 111, 48, 59, 77, 31, 85, 73, -2, -113, -17, -96, -91, -84, -85, 1, 74, -18, -24, 114, -128, 126, 82, -57, -7, 42, -94, 10, 123, -107, 75, 37, -54, -15, 57, -60, 1, -54, -122, -20, -93, -64, -22, 11, -15, -88, 20, -1, -104, 22, 52, 76, -118, -70, -64, -47, 12, 7, -128, -51, -32, -17, 124, -61, -126, -85, -19, -79, -98, 39, 112, -27, -82, 45};
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
    msg.setTimeStamp(0.0256587859214);
    msg.setSource(11003U);
    msg.setSourceEntity(119U);
    msg.setDestination(34995U);
    msg.setDestinationEntity(40U);
    msg.id = 28U;
    msg.width = 17868U;
    msg.height = 26171U;
    msg.widthstep = 40621U;
    msg.channels = 213U;
    msg.depth = 147U;
    msg.finaldata = 112U;
    const char tmp_msg_0[] = {33, -73, 103, -86, 95, -30, 111, 74, 9, 113, -82, 96, -6, -14, 116, -25, 78, -69, -107, 111, -109, -91, 31, -63};
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
    msg.setTimeStamp(0.391104468158);
    msg.setSource(57730U);
    msg.setSourceEntity(2U);
    msg.setDestination(40441U);
    msg.setDestinationEntity(69U);
    msg.id = 194U;
    msg.width = 57415U;
    msg.height = 26956U;
    msg.widthstep = 57769U;
    msg.channels = 85U;
    msg.depth = 36U;
    msg.finaldata = 254U;
    const char tmp_msg_0[] = {-67, 126, 100, -49, -41, 52, -65, -49, 107, -28, 114, -62, -116, -92, 65, 10, 48, -18, 87, 13, 25, -43, 33, 75, -123, -3, -50, -25, 94, -46, -5, -42, 122, -35, 58, -38, -104, -54, -59, 45, 54, -106, 4, 36, -10, 12, 26, 125, -63, -93, -83, 32, -32, 18, -27, -23, 74, 97, 63, -75, -122, -23, -61, -76, 30, 123, 12, -6, -57, 114, -106, 53, 108, 69, -28, 86, -41, -1, -57, 79, -109, 124, -22, 118, -56, -66, 111, -27, 52, 24, 110, 7, -24, -48, -93, -95, 90, -98, 117, -87, -107, 21, 73, 89, -80, 25, -114, 97, 19, 7, 59, -29, -124, 1, -39, -40, -97, 19, 81, 23, 57, -73, -114, 53, -118, -104, -79, -40, -50, 7, 75, -67, 14, -9, 58, 105, -55, -8, -21, -46, 79, -77, 56, 36, 5, -17, 101, 19, -36, -91, 72, -60, -110, -20, -28, -38, 72, 39, -120, 43, -18, 80, -128, 32, 9, 99, -25, -112, 91, -108, 16, 111, -127, -107, 72, -85, 57, -26, 22, 21, 95, -51, -46, -118, -82, 47, 109, 75, 116, -128, 0, -68, -46, 102, 43, 39, 111, 22, 50, 48};
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
    msg.setTimeStamp(0.496330693802);
    msg.setSource(42677U);
    msg.setSourceEntity(75U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(242U);
    msg.width = 19662U;
    msg.height = 39394U;
    msg.channels = 144U;
    msg.depth = 141U;
    const char tmp_msg_0[] = {125, -82, 19, -46, -3, 83, -64, -52, -125, 83, 58, 102, -98, 83, -125, 31, -112, -86, 38, 86, -37, -106, 17, -80, 25, 47, -32, -11, -62, -39, 40, 14, 100, -53, 64, -64, -30, 87, 6, -49, 34, 105, -20, -98, -75, 15, 51, -65, -52, -44, 62, 21, 52, 23, -11, 98, 105, 106, 72, 54, -65, 52, 89, 56, -84, 92, -12, 112, 47, 109, 11, 32, -112, 67, 35, 126, -124, 39, -13, -111, 83, -28, -52, 105, -20, 33, 120, 53, -109, 13, 105, 47, 36, 92, -27, -92, 3, -45, -56, 121, 35, -10, -50, 91, 124, 89, -74, -11, -32, 17, -91, -42, -127, 122, 62, 121, -38, 10, -26, -52, 88, 111, 110, 111, 49, -33, -17, -38, -68, -128, -65, 0, -72, -87, -110, 11, -9, -75, 98, 111, -2, 23, 69, 98, 72, -110, 8, -21, -9, -43, -81, -87, 72, -18, 48, 53, 76, 51, -36, -32, -35, -96, 77, -2, -36, 39, 70, 36, -17, -122, 4, 26, -94, -118, -4, 38, 84, 22, 23, -67, -114, 92, -29, 34, 91, -74, -3, -45, 89, -100, -45, -96, -18, -25, 76, 93, 45, -82, -35, -81, 47, 90, -40, 38, 81, -55, -79, -96, -42, 33, -97, 64, -101, 79};
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
    msg.setTimeStamp(0.302154516208);
    msg.setSource(5393U);
    msg.setSourceEntity(96U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(106U);
    msg.width = 32973U;
    msg.height = 54161U;
    msg.channels = 236U;
    msg.depth = 27U;
    const char tmp_msg_0[] = {106, -99, -95, 94, 100, 6, 64, -123, -23, 124, -128, 105, -2, -19, -27, -101, 77, -85, -93, 99, 49, -23, -39, -83, -73, 99, 33, -14, 3, -121, 1, -17, -57, -117, 101, -52, 9, -109, -62, -86, 18, -93, -112, 51, -115, -56, -15, -69, 124, 31, -4, -34, -3, -46, -9, -43, -103, 116};
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
    msg.setTimeStamp(0.0288304735932);
    msg.setSource(37815U);
    msg.setSourceEntity(62U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(90U);
    msg.width = 62384U;
    msg.height = 44929U;
    msg.channels = 175U;
    msg.depth = 140U;
    const char tmp_msg_0[] = {107, 70, 55, 23, -78, 121, 41, 8, -119, -29, -72, 57, -97, -1, -99, -65, 24, -54, 56, 10, -111, 95, -108, -80, 87, 15, -95, -110, 3, 108, -34, -3, 26, 85, 122, -69, -34, 63, 44, -102, -87, 104, 8, 33, 13, -55, 99, 109, 78, -53, -26, -41, 58, 17, 99, 55, 32, -101, -102, 19, 109, 21, 93, -90, -110, 58, -102, 125, 60, -12, -47, -21, -100, 12, 52, -15, -96, 42, -76, -123, -4, 66, 97, 106, -39, -3, -112, 48, -6, -37, -30, 38, 4, 29, 46, 106, 26, -22, 84, -23, 2};
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
    msg.setTimeStamp(0.831575843231);
    msg.setSource(47980U);
    msg.setSourceEntity(238U);
    msg.setDestination(56562U);
    msg.setDestinationEntity(24U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {-69, -112, 123, 44, 55, -90, 37, 88, 124, 89, -100, -90, 31, 80, -113, 41, 122, 13, 1, 97, -84, 83, -27, 96, -86, -36, 52, 65, -13, 77, -8, 85, -105, -67, -102, -74, -101, -114, -43, 9, 20, -67, 91, 72, -16, 42, 64, -87, 51, 56, 115, -43, -68, -58, 52, 44, 40, -54, 107, 11, 29, -46, -61, -93, 31, -110, 115, 108, 29, 69, -77, -97, 57, 80, 47, 39, -102, 116, 119, 13, -101, -33, 45, 1, -100, -63, 109, -79, 56, 39, 54, 49, -3, -40, -16, 69, -63, -7, -49, -55, 28, 93, -79, 48, 71, 96, 86, -119, -71, 95, -103, 106, -115, 33, -94, 4, -114, -75, -38, 64, 105};
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
    msg.setTimeStamp(0.68336991243);
    msg.setSource(61118U);
    msg.setSourceEntity(147U);
    msg.setDestination(9673U);
    msg.setDestinationEntity(25U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {88, 97, 53, 125, 25, -77, -60, -5, -89, 108, 43, 2, 2, -61, 73, -53, -21, 73, -111, -48, -123, 39, -117, 126, 96, 105, -74, -23, 39, 83, -74, -119, 63, -13, 110, -34, 78, -74, -108, -89, -125, -88, 100, 63, 111, 51, -31, 76, -68, 93, -21, -15, 16, 108, 15, -65, 34, -111, -5, 34, 29, 90, -65, -21, -91, 26, 112, -7, 62, -83, -34, 81, -3, 25, -41, -75, 58, 40, 66, 89, 95, -125, -49, -10, 108, 11, 28, -46, 22, 24, -118, 119, -37, 94, 106, 21, -91, 22, 8, -40, 1, 106, -24, 39, -99, -38, -6, -83, -58, 30, -45, -54, 4, -51, -117, -76, 32, -92, 63, -78, -67, 40, -22, -126, -96, -94, -115, -114, -12, 73, 74, 111, 118, 107, 65, 96, -105, -48, -75, 22, -23, -2, 87, -81, 10, 2, 13, 86, 75, -39, -94, 15, 119, -39, -54, 71, 107, -78, 97, 112, 1, -74, 117, -27, -4, -45, 61, -104, 57, 44, -91, 66, -1, -19, 107, -65, 111, -18, 108, -10, 114, -68, -47, -35, 45, -32, -102, -72, 16, -66, -78, -49, 35, -14, -19, -112, -82, 117, 48, -40, -13, 100, 9, 54, -61, -88, 5, 121, 44, 22, 13, 78, -65, 83, -42, -34, -37, -30, -38, 53, 86, 82, -125, -84, 95, -44, -29, 73, -122};
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
    msg.setTimeStamp(0.642721076171);
    msg.setSource(22059U);
    msg.setSourceEntity(161U);
    msg.setDestination(54594U);
    msg.setDestinationEntity(90U);
    msg.frameid = 25U;
    const char tmp_msg_0[] = {100, -21, 53, 106, -26, 9, 60, -56, 85, -100, -10, -89, -60, -64, 110, -68, -82, 117, -126, 49, 20, -31, -57, 90, -66, 51, 117, -94, 23, -33, -56, -86, 20, 123, 114, 113, -122, -56, -99, -80, -99, -31, 7, -86, -27, -119, 73, -94, 65, -32, -107, 30, 48, 89, -110, -39, 46, 71, -49, -33, -70, -117, -5, -90, 112, 79, -11, -46, -33, 84, 1, -32, -124, 52, 96, 8, 89, 43, -14, 94, -56, -1, -38, 125, 3, -40, -8, -15, -110, 60, -105, -33, -26, 65, -18, 84, -64, 80, -70, -30, 114, -39, -14, -57, -74, 68, -108, 125, -79, -30, 34, -121, -124, 72, 113, 16, -101, -14, 105, -119, -125, -73, -102, 14, -30};
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
    msg.setTimeStamp(0.358664085079);
    msg.setSource(49765U);
    msg.setSourceEntity(96U);
    msg.setDestination(51616U);
    msg.setDestinationEntity(65U);
    msg.fps = 225U;
    msg.quality = 137U;
    msg.reps = 6U;
    msg.tsize = 136U;

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
    msg.setTimeStamp(0.680499326128);
    msg.setSource(10922U);
    msg.setSourceEntity(83U);
    msg.setDestination(44227U);
    msg.setDestinationEntity(159U);
    msg.fps = 76U;
    msg.quality = 56U;
    msg.reps = 6U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.588671383618);
    msg.setSource(5871U);
    msg.setSourceEntity(61U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(63U);
    msg.fps = 113U;
    msg.quality = 88U;
    msg.reps = 72U;
    msg.tsize = 59U;

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
    msg.setTimeStamp(0.493028181863);
    msg.setSource(62359U);
    msg.setSourceEntity(168U);
    msg.setDestination(27971U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.121620609277;
    msg.lon = 0.595848710219;
    msg.depth = 199U;
    msg.speed = 0.954742105324;
    msg.psi = 0.435267928127;

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
    msg.setTimeStamp(0.49671557406);
    msg.setSource(10619U);
    msg.setSourceEntity(136U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.596355331468;
    msg.lon = 0.212654886337;
    msg.depth = 236U;
    msg.speed = 0.0740091303105;
    msg.psi = 0.769520250186;

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
    msg.setTimeStamp(0.123905193726);
    msg.setSource(48458U);
    msg.setSourceEntity(178U);
    msg.setDestination(22891U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.0600669700182;
    msg.lon = 0.534437136465;
    msg.depth = 217U;
    msg.speed = 0.109836599406;
    msg.psi = 0.624592249863;

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
    msg.setTimeStamp(0.332408240585);
    msg.setSource(63739U);
    msg.setSourceEntity(226U);
    msg.setDestination(38317U);
    msg.setDestinationEntity(81U);
    msg.label.assign("ZISNXCCEOMXYDMLLGBQKAKKLZTVYQWJHRZSSQALEEWEDVFOFHRURFTRERGYXEFYYPZCKFSCNVQWXRKUMSZUPTVMWHKUTBHAVXHBOWYSDNWJIBLGUDUNPIDHYOQWMNZGWJRBJAFPOEUHUOVVAXIDTWCCVERUFQTCAXFXVHGJNGASGJTAWKGQNFMBSZQQPIPOIKJPGMPDBUTZRJCINOFLIOTMYNCITXLSLYPEVRSPMAC");
    msg.lat = 0.589864665129;
    msg.lon = 0.414001547958;
    msg.z = 0.380025579396;
    msg.z_units = 173U;
    msg.cog = 0.295362615387;
    msg.sog = 0.402469487074;

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
    msg.setTimeStamp(0.451947778292);
    msg.setSource(2998U);
    msg.setSourceEntity(209U);
    msg.setDestination(13948U);
    msg.setDestinationEntity(45U);
    msg.label.assign("LITYAVDWTFIMAUBIIPDEXDMFYDCQKZVZGAACBGTFHBASEXTGYQHAKSLLBFJICK");
    msg.lat = 0.475046486777;
    msg.lon = 0.731978348589;
    msg.z = 0.656340614478;
    msg.z_units = 221U;
    msg.cog = 0.883842960253;
    msg.sog = 0.956325124556;

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
    msg.setTimeStamp(0.12820600736);
    msg.setSource(9679U);
    msg.setSourceEntity(236U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(227U);
    msg.label.assign("ABWXEJKAOQJZHLFTXNEGPLCRRPMAVZWMWMGUU");
    msg.lat = 0.357179540348;
    msg.lon = 0.969850873831;
    msg.z = 0.0298868997728;
    msg.z_units = 44U;
    msg.cog = 0.700673867773;
    msg.sog = 0.894433341541;

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
    msg.setTimeStamp(0.185781949706);
    msg.setSource(50819U);
    msg.setSourceEntity(244U);
    msg.setDestination(1983U);
    msg.setDestinationEntity(183U);
    msg.name.assign("QVJJDJUIRIECNMQKAZXRZLZHTZEUPOHYDYLRUOIKQQNTKBRJWANTJAWJNWHKZDWKEUEFDCKYCCYYVHVIWIMVXBJOIVLWQXDNBGYZLAXEUFPLCRCGEEFSRFPMDGBHGHGJWDIHDFATXI");
    msg.value.assign("PUGWHSSQVHSGNEZEWAJPYGTGECADRBVUJLKPONPOECZTDQYDRMLRUNWAYKXNNFWCOUYPJLPTIRACMUHGMKAVJKLKNQUAWVDHOLQLXHTFWBYIFXAIWVDQULBBRNODJTGBIKFMMOOKCHYLBENNZNXQKWCAPFTZFFFPCXEVMIJPBFGJVZDXZQZIYTGSTMRYXRDAOUHRQCSTISZJOHEHVEROAZDLK");

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
    msg.setTimeStamp(0.132731411018);
    msg.setSource(42774U);
    msg.setSourceEntity(12U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(103U);
    msg.name.assign("SEJQVNVUVFAAMYNMHOWVJYNZKWIKGEVRO");
    msg.value.assign("ZULSIOFTNUIMU");

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
    msg.setTimeStamp(0.0154087465789);
    msg.setSource(12903U);
    msg.setSourceEntity(63U);
    msg.setDestination(13253U);
    msg.setDestinationEntity(122U);
    msg.name.assign("NPPZXDGQWDOZGXYHORKYTADRKQIXKICYSPGSYEZHJEBTCBXVKDMTTOCNFNNTSCKCJWFILSNJMIANVLZIVDFPDNMXAOGFBPRTKLFTBTILEJHQLUKRVDROEVKOPPBUHEFACVYDZSEMHRALAZCKUOMICURWGAVQWAWEUMVRJQBJPUWUQHZDOUSLKNZCQAXGSNYXWINSLYYEFJWMRXQUGBXSMGJRFAXWBMGYDHFYFSQJEIOPVIHQCLHBWPLHUEMOZ");
    msg.value.assign("YVDRUUZGRCINMQOIQBSGXMWZGHYRMPSFENUMCDENBWRGWWSFLDBVDKYBPISRA");

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
    msg.setTimeStamp(0.839791010514);
    msg.setSource(4937U);
    msg.setSourceEntity(217U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(151U);
    msg.name.assign("ZPBHEMEZHJVRAZUXFGIYYTPCDCVQWKYXIXYPYCEHEHJZKLZMNADHDBLCEXRFQPZXNJSFXBTEAGDEZEXNDMVMIUVMQALUBVAAWJKULMIBVYVQRWMERSQKINJCTTKKHWIFDWNXBSUFGDUIPAVWIKBNOSJXAKPQLCBSASTNUOPBOYVMTLJEVGWADMFOHCFTQHHGLFFCGQDSRCIYORRJZTPZKORLUGYONIS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TPLIZOTVXKWCGWXCYBKUSPQWZQTKOSATGXVCDNGKNMOAUMCRTEPMUMJVTSQIAYGQPRGYOBBIDNMMUHTDJLRCQARAOOWCPKZNYMHBBKENESCYDSQELMKWQMGNFEOPFIDJZYJRFADBFVKFHG");
    tmp_msg_0.value.assign("UQGDNLQHVWLDUQLNRCAEGPYTLPBBNNEKHZIFBVTZTIOMYRHEJCUMPIJQISMSMYVRJQHPXYVYATNHAEKEPAPVZXHQBYLILUPJKXFRDUNSIXMVDCAZXBTAUZFJXEIOELBHXRLZQARFGRFKTOXEUFTMWNHKVFPLWGNTHITSEMJKZDDOGDQDIVCGMUYESWHWWOOLJBPCVSN");
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
    msg.setTimeStamp(0.735273153225);
    msg.setSource(19226U);
    msg.setSourceEntity(232U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HZBXQDENVNCPRLPKLSULORTWHRAUYHSCVIKZTWNFRATMVCAWKOBHMTRUINFUZLZYRCZJQGDMIYFKNQJPNDMIBGTQZPCUCIPYVQXEZLJINMOWAASJOADPKAXVQHDRGTOSETZSWMFANXZBELJCPBQWYXGXDQKKBDEMJRJGKXBHLXMWMIPHWSLLSJYDSTVHGQUGRNTZTFWEGVVASUJUYIJWPOYGVOVNOQOAXOICUFFBBKEFLIE");

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
    msg.setTimeStamp(0.204419955291);
    msg.setSource(13683U);
    msg.setSourceEntity(243U);
    msg.setDestination(17090U);
    msg.setDestinationEntity(53U);
    msg.name.assign("HMAFIHQUXBYVQJZLUJXDFVYJTRCCXECOTWCMWMJSZDAQJAMTDATHOXFMNIQMXYPZJMOLAYVJGIZFVBJCLIQIHXBGGCLWRKVUMTSRGBFVMFBSLLWDUYHIOPBNOECALYXVRQDYDKERKSQCZQEDGFUIWTKAATPJOOHKZVZPXODGQKKSBZVNWNWDEHNXI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UBJVRFIBPWSAWYHDFTODUDAQPEIMFIYTLRHJPLGOVFBGJSAQXYAZKRSRHEYYKXFLARVVJGBZKWNXICZTOKWQVVMBNNDRIDPGNHZXPQKT");
    tmp_msg_0.value.assign("POMQNCFFHUKFTRLKNICQZXPZZQCYAVANLRZMCTFIONPMIKADKGNCHBXHSLBBQAY");
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
    msg.setTimeStamp(0.121601460476);
    msg.setSource(36059U);
    msg.setSourceEntity(10U);
    msg.setDestination(30767U);
    msg.setDestinationEntity(229U);
    msg.name.assign("XSQINRVIKIAHMPWVPXAOZGBGEFJGLTAMCRFPVOHEQWGSNSKLBHZMHXVNXZVKPHRWPSTJ");
    msg.visibility.assign("EOYXLHGOVVQCMBPDRGNIPGZBKBJOENADFTNFLBHBCSBIWKEMGHYRKDOYIANVCNXAGVBNGOCKUHITZHCNKNPEJTFQTXUZDYBEIEVZVPRFTUFROFSUTAPLRMWYSCWUVZKWZJTLFMJDQVDNHBQJSPORLWUXZGDCHCEZKWIWRCGQQJSHXMF");
    msg.scope.assign("WXODYUVASCTAVSGMIQRSEMNGSKLNJDJNXFUTMMQSTJUIGPBXHMWXBXOOOUSUVKBIGZZLGKBYCQXPPXCTFYCEIVALXFMNTJDPWEXCJEYOWRIPAWQBEQGERZRGYKYKQRTZKUQLLRCYDMIWOMYWWPGIHJBIOWFYADBZSHDNGKRPEJZVVDFWYCLRLUQKTSANJJHFDBOHVDIEJTNIQVTRHECFAZOZAVHZPFNFZHDCSKGTLRULVSLAKQXPNEUAMO");

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
    msg.setTimeStamp(0.653817933091);
    msg.setSource(27447U);
    msg.setSourceEntity(44U);
    msg.setDestination(35042U);
    msg.setDestinationEntity(109U);
    msg.name.assign("GIGTWHVWLCBFDXELKIWTXXUHFCHKZZSYPHBCBPFBRAENDLNVAJQCKIBVMNLZOPWMUZYRHCYIOXVXAEXWQVKOSDWVCCDTHBQHOZIYRUYOFKYXGOKQWSJRPPUSGJCAHYPDJQUTMXNTLAEYKJYAZIUNIBACGFONKLPLMTVDOULPOMSMSIATJBJGFD");
    msg.visibility.assign("KLTJOLFPTPNLSOSRHVFOCGPYWVMFLKSSENFFRZJCJWONQBXRVVRTSZHAXEVBNYIYPXNCUQEHBXHFAXLQIDDHHCEQKJJMSDVBLUXPQONPPEAGMADATWHYHRGBJUGOKZGDBUFNFPIGTYYVHFOGXZBUDADQOKRBANRJEOZMZJRXTMREHKBUWLIIGCUZICYISYLWBVEJQVQMUFUSZKDINC");
    msg.scope.assign("ZSNITCSJLZCUGXTBSQIQCQYWIASUBWXXUDBVFKMVNEBZKUZCYWEWQIRMAAHJNFGSYQWVNOVPQMGXVEUURTKYFKJCFEKRMPSIIQHZULLJOTGZMDLENDYECATBDKPCOHOBDIWLXWRSRLBRRROTSJKJXVDEFFMGRQXDEPKDTEMHVHASDLPBN");

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
    msg.setTimeStamp(0.650827154231);
    msg.setSource(22732U);
    msg.setSourceEntity(99U);
    msg.setDestination(51226U);
    msg.setDestinationEntity(253U);
    msg.name.assign("YMEMTLRXHAJHCLOXDWBWXRFDZXATQNOF");
    msg.visibility.assign("HDMTTMGQKIKYPOICJUXKNSQEGEDAFGAFQEIDTPAGCCHTOFVMQSGNDTHAREIGPVMVMURLJHVSUOPRIWFFNNDQGQTWUHHVKBCYDBECELOYWQJXSFLNWPYFSOMBCURBIVSZZNHMRTWPEIJFHUZXOEXKPWLBVAZPJE");
    msg.scope.assign("WYKMBGZCYJNMQHLCIBIRBWZMQWKGKFKVDUYKYTRZGPXFEEYHVUJZXWFIDJSRDRYEHBNVCLERJQHGDHXYNGTLFNGPEONIMLXOGEETJUTALJPQASFTEABSIACOQKCUHSJMBUUXLLRTLXRSVAXWKNGZVWSJCTRIZSZAODOMXWIKDHMBNHZUWIJOQONWRFDVMQAOBXKZCFVBINAPOPDLSOVYV");

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
    msg.setTimeStamp(0.948286217859);
    msg.setSource(63898U);
    msg.setSourceEntity(208U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(184U);
    msg.name.assign("VBFVAADFIVMYMOWCYZPJWZWJRKUTRVQLCKSOBQTEPJHXDVEPQYGNEPUPISFZQPHMXDVBMDCICLYYDTSVWOXRMXOBKMHHFIWGWMXFTQCBLRMOUAPUOCYLETNFFGGUSRGRNSICZLDNEFHCPZWHAOZSTMESGDNABAYTFNFEHDXZJNTPBKIHACSLXJZJYREGVECAEGLOXZOGDXVQKQLUKIIMTJI");

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
    msg.setTimeStamp(0.27745955125);
    msg.setSource(7491U);
    msg.setSourceEntity(144U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(210U);
    msg.name.assign("HZYXWQMWRSZLKUDWREFEDZRMFRHPXAIQAYIORLTSDXNRGHXGLUVOBLANABTPFVOKTZRSYXVBBMJBEUKYZEKLIXDWIGCNAHACUBZCDLUYJFVBPDH");

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
    msg.setTimeStamp(0.845548236766);
    msg.setSource(39159U);
    msg.setSourceEntity(171U);
    msg.setDestination(56886U);
    msg.setDestinationEntity(52U);
    msg.name.assign("SVSWFJJGIESTYHQEFISPOMZEMRGELLQCCYTGNDCNJXIKNUJPBIGHESJBNCTIKTWLBUAOGGHYPJKVZMWVIFZKYXBPQRCFTWFLHBPDFUORSGCLAPKVCNZQLSVXOVHMDXNKRAORGXFYMIEZSOKNHDVTDNQZRJDLKRQZACRMEJQARIVGZWTXXTXZYNHKWALSKUAQWTDOCTPEQFAPBDGDUHFMBRELDAISWYBWQJL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FLTJIJZANNOGVRQTNBIEFCRZYOZMEOBDRIKZFAUNSPQGEPLLEKWUBYTDXEASJHMH");
    tmp_msg_0.value.assign("NNSKMWOPMWNXUWDFUHMCGELCACEVHYYQIGUFJHKJOHDPLLKOPLXTPLRVUVKJGTWVOEYKZOPWGFJORZRXKNPPBMURASWCBIBTGOYRPGBOSTFJBAFJCQUWAHVQUDKGJTRZIPVTREKVEBMVIRXYQMBXNUQXMCRWBITIYKWHELENNBCMXHLEBFGITSXATJMOHQQNXDDZVSGIZFJYDDOKZRJUTFQSFZZLCZDQGSFN");
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
    msg.setTimeStamp(0.0148905562827);
    msg.setSource(58370U);
    msg.setSourceEntity(62U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(87U);
    msg.name.assign("LEDTIFGBFPOZZBURGWAWIYOJMSNRNVFZJUDASRXPDMDLHXBAVCSUXWOVWQDLCABAYWCECGFQVOZHGQMPRCJJSVNKPBHAPQITDMHIFBTEIWZVUNKQYNLXLDJEUMVVST");

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
    msg.setTimeStamp(0.704690184546);
    msg.setSource(61639U);
    msg.setSourceEntity(100U);
    msg.setDestination(51707U);
    msg.setDestinationEntity(217U);
    msg.name.assign("BWGYIYUBAABJGNQSXSKXONJPOLCFQSIUNKMTHJTFXJKCWLEKZLYWOLGUGGXVLMZASYEXXXFENIWXIRCKNEAVDKKYUBPTZEBVAGQSJSRMWFJNOOLZYPGZTNARFRDIUSFADOKTWMOPPYMHDBMEAQNCH");

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
    msg.setTimeStamp(0.878572626864);
    msg.setSource(11749U);
    msg.setSourceEntity(156U);
    msg.setDestination(49924U);
    msg.setDestinationEntity(245U);
    msg.name.assign("FUPJVOFDVWXRDUCJFFRPTEBTJXSTNEINEOCMLNGPTLWHDZZDTYRPHQJZMPZFVWCSVXJEOYLRYIXVRSQKNACWGQDDAZKKPMCAWBVYSMNVXGCDBKGEOUKPNGNMDFSUGAKAEQKWQZXTIIHUWELDVOVGUOUYATJIQNLL");

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
    msg.setTimeStamp(0.523881826097);
    msg.setSource(40558U);
    msg.setSourceEntity(121U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(253U);
    msg.timeout = 4114681869U;

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
    msg.setTimeStamp(0.880668385317);
    msg.setSource(2171U);
    msg.setSourceEntity(7U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(198U);
    msg.timeout = 3184090715U;

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
    msg.setTimeStamp(0.910875674996);
    msg.setSource(32647U);
    msg.setSourceEntity(17U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(202U);
    msg.timeout = 2588744658U;

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
    msg.setTimeStamp(0.532094031969);
    msg.setSource(17422U);
    msg.setSourceEntity(199U);
    msg.setDestination(56267U);
    msg.setDestinationEntity(240U);
    msg.sessid = 698105110U;

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
    msg.setTimeStamp(0.190908752611);
    msg.setSource(64665U);
    msg.setSourceEntity(66U);
    msg.setDestination(45143U);
    msg.setDestinationEntity(94U);
    msg.sessid = 4122407679U;

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
    msg.setTimeStamp(0.678994862104);
    msg.setSource(45919U);
    msg.setSourceEntity(182U);
    msg.setDestination(40212U);
    msg.setDestinationEntity(169U);
    msg.sessid = 2067835123U;

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
    msg.setTimeStamp(0.592541117125);
    msg.setSource(41245U);
    msg.setSourceEntity(210U);
    msg.setDestination(759U);
    msg.setDestinationEntity(41U);
    msg.sessid = 608218728U;
    msg.messages.assign("DCJVANXSRSVSLSQPXVJTVCIDMEUJQVYYQHOXNVTYQOUNWIVHGDDUAJOWAUEQEXJ");

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
    msg.setTimeStamp(0.384355923025);
    msg.setSource(11200U);
    msg.setSourceEntity(30U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(64U);
    msg.sessid = 289493503U;
    msg.messages.assign("RXLUAXUJOHPDARDLRZALTRTJEASGSXLDXFGDREIQHXLZBTPUWVINZIJESAHQBIDOJWGQKWKSAYCBPWYFFBKBASCQTFDIQCTZZHOGBKMKUHNMSMTWFGWQDGULPLWAZOINNPQHEAYVWOCUN");

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
    msg.setTimeStamp(0.589621919801);
    msg.setSource(58701U);
    msg.setSourceEntity(18U);
    msg.setDestination(26010U);
    msg.setDestinationEntity(44U);
    msg.sessid = 1711542771U;
    msg.messages.assign("DVGOUIFJHVFTESNGMWJMUYGSGYCQXIQQVNQGSXKQDPVEKFTITXGHYYUWBMLNMIWERRAWNUPAJWSQHTKRHJMOPPFMQLJFUHKYSKXFMLBILOCIZBZFSADOXDZRCSLADSTSENZAGCVZKLWRYPCPWCXNTNEBNKEPAJXXCTELFSJDVEMAHHUGBBUXPIQOZPRLAXTVDCBHTKHZKLQKCRWJZOUJNHZYGUVBIIYCW");

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
    msg.setTimeStamp(0.410368001635);
    msg.setSource(50297U);
    msg.setSourceEntity(162U);
    msg.setDestination(39825U);
    msg.setDestinationEntity(21U);
    msg.sessid = 2668541729U;

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
    msg.setTimeStamp(0.454288661214);
    msg.setSource(8034U);
    msg.setSourceEntity(229U);
    msg.setDestination(16709U);
    msg.setDestinationEntity(141U);
    msg.sessid = 2890241219U;

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
    msg.setTimeStamp(0.413616310088);
    msg.setSource(5116U);
    msg.setSourceEntity(161U);
    msg.setDestination(11681U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3752282688U;

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
    msg.setTimeStamp(0.723702221773);
    msg.setSource(47200U);
    msg.setSourceEntity(224U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3280559789U;
    msg.status = 216U;

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
    msg.setTimeStamp(0.510475127092);
    msg.setSource(1691U);
    msg.setSourceEntity(142U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(237U);
    msg.sessid = 1178241479U;
    msg.status = 62U;

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
    msg.setTimeStamp(0.26730112831);
    msg.setSource(1559U);
    msg.setSourceEntity(131U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(66U);
    msg.sessid = 3643745526U;
    msg.status = 150U;

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
    msg.setTimeStamp(0.620271355461);
    msg.setSource(48877U);
    msg.setSourceEntity(88U);
    msg.setDestination(48647U);
    msg.setDestinationEntity(25U);
    msg.name.assign("UYVBIAZBZZVLLBBNGSHDFIHTKWJDANFUQPULRBGVLOCZFZWYFTPACDOGZAPOKVBWWLOAESMPIWKIIOAJRVFSLOTHMXXHBLQCIQEVQXZGZJFFGPNRCEYQWCFNHBG");

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
    msg.setTimeStamp(0.57869919279);
    msg.setSource(4980U);
    msg.setSourceEntity(104U);
    msg.setDestination(57362U);
    msg.setDestinationEntity(126U);
    msg.name.assign("BBYGHMMOFCAWFCPH");

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
    msg.setTimeStamp(0.494816802717);
    msg.setSource(26651U);
    msg.setSourceEntity(11U);
    msg.setDestination(23495U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HUTRCCIISFPGSVOJXUKZKCIZOWNZQJGEMLWGUCBBNGTMJAZBJXTKBPXIKOWNCVYIQGSVDNLIUHPMEPDRJTXVISYSHKPEMYWYGZTKIUSAUCPTXLFBHABVJHDYDAGAIKVXYNFHODOELFFAEAGREXRVTZOME");

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
    msg.setTimeStamp(0.808870502547);
    msg.setSource(57772U);
    msg.setSourceEntity(212U);
    msg.setDestination(19772U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ENFYEKGRILVSJYSBLGGEQSCTXNEJXNHIETAZQCD");

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
    msg.setTimeStamp(0.581919611603);
    msg.setSource(36791U);
    msg.setSourceEntity(59U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(10U);
    msg.name.assign("WKUHDBBCHISZTLTTAKYLKJVELITRALRMYEZKXEORMUHSNQRDFRPWLHHUUAXMKMNPRJPCBMFZWXGKPACGUFRUGKAYXIYFMGNJIGQBOUCRIEMDCSYJSEOIPWYCXCMBBTJALZJDDOOVWPEHXQXCOANFYMWLFQTHGVPNGXEVYAHCSC");

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
    msg.setTimeStamp(0.0915040436529);
    msg.setSource(36250U);
    msg.setSourceEntity(158U);
    msg.setDestination(7340U);
    msg.setDestinationEntity(27U);
    msg.name.assign("AELSGEMENBPITAUVZCKRIGKSUNSSZYVVPEACAWJHTFSNOZOGUOUUQOHVSLPTMFWMJGNNRHTAYVMNNXGCLRRSMHXOZTLXGWRYOBFTQKADLKTGKQOTWKWMSUWDEJPAPPFHQPQYICHOISUJIUCFCPNXWKXCCFVFJBBENRYBDRWMXDVCEDVVRHCAUGMDZMZZIIDFLQJELPJBQRPUJQBEOTBWGYYALKQISBIXJ");

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
    msg.setTimeStamp(0.239229494839);
    msg.setSource(13105U);
    msg.setSourceEntity(119U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(145U);
    msg.type = 112U;
    msg.error.assign("HXYLGRELQQVWGWVCCSRHQEDQTJMRGWOSTLLCLYMRVKCFYRVTZGDZFUJKSVNUKJJHTPSZOWWRBOKEXOGEPINUIJZZDOZLPAY");

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
    msg.setTimeStamp(0.847327919882);
    msg.setSource(61168U);
    msg.setSourceEntity(186U);
    msg.setDestination(26457U);
    msg.setDestinationEntity(132U);
    msg.type = 131U;
    msg.error.assign("ATBHRXDMPACRGAYHPZVSECRMQKMYOPOEPSBZDKWKJCALDGMSTFRGDULEHZBHYNNGQMNBEXVNAFQKPLZOXURZHMQYGWFSUGCPRIVNVXIZMTCGVQQWJELVGYDHDVWHTJRPJRPKIBBCJEXNJLNPKWKANIEJFXTFVWERXNDIZNAMDLIOAUYOUWTSULOEDFWSFUUIBAOFTJMYZKEZWTOLSLZCYUFXBQABBTIYPCKTVIVSUSOQMYKXJJSIXGHCQHDFW");

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
    msg.setTimeStamp(0.358820875393);
    msg.setSource(13U);
    msg.setSourceEntity(210U);
    msg.setDestination(61939U);
    msg.setDestinationEntity(188U);
    msg.type = 103U;
    msg.error.assign("VBEFHUELSUUDYMMFDFPLTSBXMI");

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
