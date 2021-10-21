//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: f5318f0e21fa63bcaf932ef6568a522a                            *
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
    msg.setTimeStamp(0.6965150628582004);
    msg.setSource(53889U);
    msg.setSourceEntity(79U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(59U);
    msg.state = 101U;
    msg.flags = 174U;
    msg.description.assign("ROAIKUWTKTOBSTQMILXVGZZEWHFLJFRJCSEOHRFKVWAFVOEMDFQLABCZSRMZSXMRJUQCZJKMOZWLGFNUIUXNNJBTUQYAFSGGQWRFBKDWMLSKEMUHKQONIDVSTKOEZTCCLYTQJXPRAHJERHAPBBOWNMWVFJXSXDWXQGWPMXBSEKCBPZPIGXZCVICVHTOLBPYGDDCIUTPJYANGELPYYHNQPYAXTIGPAKMBDUFDNCRDSQHEIRV");

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
    msg.setTimeStamp(0.9486251068761381);
    msg.setSource(21940U);
    msg.setSourceEntity(138U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(201U);
    msg.state = 2U;
    msg.flags = 32U;
    msg.description.assign("APMQIJCTUPDZYZZLEAVQNJLRFWXEGJSFTJRXHBDUVHGRVPXPIIRKTDMBOYKABZRXAGGSKYZJDIOMZDWNROMKQRCWHREWAPERFZMGUGUNWHGPISTOKLZLXEFFKIYSPYEVOCLWOXTLAGTNBBLCUVAJNISLNWJHCCMHDDWWGYZXOKIFVAJSERQNKEVCAIUSQHTKADCJQBTVHYOYHBYBFTQIVOBOTSQXUGQNUEXWUPJVPHMQMSFFUCLDLDCSNPNYF");

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
    msg.setTimeStamp(0.7341593174552236);
    msg.setSource(21243U);
    msg.setSourceEntity(234U);
    msg.setDestination(35603U);
    msg.setDestinationEntity(130U);
    msg.state = 174U;
    msg.flags = 107U;
    msg.description.assign("GXHCYFEOFNOFXOUNLRRAWRMPRLZQATVYYJOQYZOZLQIIZPZKKVHKEHPMBQZXWDWIOKBGMWPHSHXBAORNBHWXPELYFURSBLUYUXTQOHIEFSCDETRGKJTXMAQXMIVGPIFGNVTBILUASWESCVCLBRVCSEGPRTTMKANUUFMSQD");

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
    msg.setTimeStamp(0.5269334442912091);
    msg.setSource(56557U);
    msg.setSourceEntity(90U);
    msg.setDestination(18146U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.390212930247689);
    msg.setSource(38225U);
    msg.setSourceEntity(59U);
    msg.setDestination(17197U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.06518639056979936);
    msg.setSource(47225U);
    msg.setSourceEntity(191U);
    msg.setDestination(27715U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.3734673828799233);
    msg.setSource(52781U);
    msg.setSourceEntity(130U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(79U);
    msg.id = 17U;
    msg.label.assign("LFRGGVTDACWBJUOTIFEIBMLXNYIEUZMTTFFIQQQQEDORFHCQCJDDAHRNKXZMLYVLCRKKEFNVVPMYSNHEOXKJZOVPSYXFMGQFALAPVHPWDJCRWBUNZDLMBCTEWMWTBONPHXAKSJOSAIJFNODXCOIDHNKXBGYABRSFGQCVHYUKPZZVUKOZVYEXASDTWMGHSPIUMZKWQWSCRNGPQOQTKVUPTLJYX");
    msg.component.assign("HYNSCTVQHRXNUTIYXJXICIQWHBWROGJDTYMJNPFMUIZYZONISEVPHZUHOHTDKJIUGONBUVCVYDHEAMSSBZDSLNVMFLTPJPUTOALKIPKEKRSFVYACMPQEALJAUDROBDPILYRRBZAEXVAVIYFWCLXXZDXJVRULWKMZDKWRDOSRKJGZX");
    msg.act_time = 46448U;
    msg.deact_time = 36756U;

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
    msg.setTimeStamp(0.7614773679867491);
    msg.setSource(46243U);
    msg.setSourceEntity(3U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(136U);
    msg.id = 250U;
    msg.label.assign("VIPRTXHGMNQHYHACMQAWEGONDAXAALYIUEEJ");
    msg.component.assign("SRIIXIVDMNDZJPJXKCKHYOFSWDIWRBYFUXYGMRJOULOCHQJXFMHMGFJPSXTUYEZENLPEYBTYSPDNMWGEXSTSDDK");
    msg.act_time = 11971U;
    msg.deact_time = 51426U;

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
    msg.setTimeStamp(0.7269159151881518);
    msg.setSource(18748U);
    msg.setSourceEntity(108U);
    msg.setDestination(7661U);
    msg.setDestinationEntity(210U);
    msg.id = 116U;
    msg.label.assign("PELFVIGAMGMSRDQHWBIEBBCYOOEYJTCBSCEPHYSZTAVVROEKVKDSSZWCSETGNJKITFSQRMFUZOOFUYHINCGIWGPUBPPWDQPHROCNQLAWEDRMMPJUMDALUWKOMWSAXJNWINRHLJDLXJJSOHLXHZFXYHRFRIQBYKBJKNDPEXGBVWXUSHQVZVRVBFIUZYKVHUQBOLEIALQDTNNNUGEKRCZTTKQJJICYUXMAXQXGGPYAFATLZFZTCYLDAKGNZTMCX");
    msg.component.assign("GFRMXHFDKAETECZKXUDPRGNUSTRLAGIENJIYYMMSCBCYWUBPTQVYBSMFJKOHTVFNBGKALEKXPIXLUTGJCBZARMDMKPDBBZCUWAZZKVNLYQLLNQQBTINZWDPWRDJLGLHZIAYJHXOUTHAQJRACNJOBPBXVCOEQFYUSWXMZJQFAQFCWOTGNEUGDYXDERSZRLLMUAVWDOEFVIWHVKSNYKQFVWFSOCPGOSJHJPRNHSCEOZMRHVEIQKGVTXSI");
    msg.act_time = 31176U;
    msg.deact_time = 41040U;

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
    msg.setTimeStamp(0.6976254417478145);
    msg.setSource(28410U);
    msg.setSourceEntity(240U);
    msg.setDestination(46940U);
    msg.setDestinationEntity(172U);
    msg.id = 153U;

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
    msg.setTimeStamp(0.4309719733201356);
    msg.setSource(15192U);
    msg.setSourceEntity(162U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(218U);
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
    msg.setTimeStamp(0.19938808822544563);
    msg.setSource(52677U);
    msg.setSourceEntity(197U);
    msg.setDestination(3241U);
    msg.setDestinationEntity(65U);
    msg.id = 45U;

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
    msg.setTimeStamp(0.5154051473002741);
    msg.setSource(63680U);
    msg.setSourceEntity(176U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(17U);
    msg.op = 183U;
    msg.list.assign("WPPTBFDDJAKZOIJLCGKTVMVWDAAPPRSFKTUQRLFMJPBJGUOOEONKIXEWQRAWDJCRYZJZXIHUBCNNESHCMREUZZCMMSFRNGSCUBTNQLGHTPJFJCJYETEQIYHGNQMQVPRVGBBDEGFBSNZSWIGKOYBKUMFZWXXHJ");

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
    msg.setTimeStamp(0.5563785455296092);
    msg.setSource(63137U);
    msg.setSourceEntity(24U);
    msg.setDestination(62193U);
    msg.setDestinationEntity(118U);
    msg.op = 237U;
    msg.list.assign("OCGKUZMGIRBLZQQTLEFEAZKGFMKPOHWMDNJISEQYRGPUZNFQPRFLXMSQWXTSETEMACVBDJIMIVLYBXRARLPCHESOBTVZZFPPRJYFUUXJVOJNRBINVBXWXONCIDCDOQMOKFYXBAZGZUONRPDKUPSEDHXHLUNCAJHGLEUPWKYTCSBLAYNUOSFSJGDKXAHRQIBVVUFMKDHIJVYNCWTODKMTGWIDWTLGYCGQAMIEBZKLJAWFXV");

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
    msg.setTimeStamp(0.7934049624930363);
    msg.setSource(45715U);
    msg.setSourceEntity(196U);
    msg.setDestination(13014U);
    msg.setDestinationEntity(243U);
    msg.op = 125U;
    msg.list.assign("ZHCWTYXANSUZYPGGEGMMOXS");

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
    msg.setTimeStamp(0.351229228492442);
    msg.setSource(25918U);
    msg.setSourceEntity(174U);
    msg.setDestination(61037U);
    msg.setDestinationEntity(36U);
    msg.value = 122U;

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
    msg.setTimeStamp(0.3762586283482371);
    msg.setSource(1463U);
    msg.setSourceEntity(49U);
    msg.setDestination(56665U);
    msg.setDestinationEntity(165U);
    msg.value = 173U;

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
    msg.setTimeStamp(0.8009908183838108);
    msg.setSource(47598U);
    msg.setSourceEntity(184U);
    msg.setDestination(44251U);
    msg.setDestinationEntity(159U);
    msg.value = 5U;

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
    msg.setTimeStamp(0.65775643789458);
    msg.setSource(11899U);
    msg.setSourceEntity(61U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(99U);
    msg.consumer.assign("IDCQCUKHDITODOSLJLXOLZCLASHGKRVWVXERZTQKVESSMWOSEZOJKYWHYGQBQMNTMMYTVINBTCCCFSYIBZXZSUUTJYOPTDNOPPAPMQZOLAGIKJRRBGXPMHNBEAHDUSSGHNYKFADYHFWE");
    msg.message_id = 62585U;

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
    msg.setTimeStamp(0.39887199853875754);
    msg.setSource(25468U);
    msg.setSourceEntity(198U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(192U);
    msg.consumer.assign("DKZDXRSRTQLODVMDHEAEJQCAXWGYGZLWIHKBOLJGYVLIFOJFFEBXDWLAPNKNTQTCOJAVDRVTMOOEEPTTRZKFJQDGZSZMXAXZMHCKAHAUTPYNXVSYCIBRKCTFJ");
    msg.message_id = 12958U;

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
    msg.setTimeStamp(0.4333348272399494);
    msg.setSource(61237U);
    msg.setSourceEntity(87U);
    msg.setDestination(48017U);
    msg.setDestinationEntity(180U);
    msg.consumer.assign("NSPCBOIYCLLYHDKBRYVDISCUNYSAUTMUBOKYFHMJQGGDQXMNWSMIYOTYRXSLPHUHVIGGSDWVNZGAAXPJQECMAKEGJZVCSSGZVUEMQXKLEDYMGEZXLQDTAPTVNFFALJAZOYXNXPBPFQPDIOXJEURVMWKJQBMDKTOONFXDWTIQRNOEHVPROETUN");
    msg.message_id = 230U;

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
    msg.setTimeStamp(0.16731013824997976);
    msg.setSource(29552U);
    msg.setSourceEntity(134U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(181U);
    msg.type = 14U;

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
    msg.setTimeStamp(0.15895166976895325);
    msg.setSource(14226U);
    msg.setSourceEntity(61U);
    msg.setDestination(90U);
    msg.setDestinationEntity(127U);
    msg.type = 168U;

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
    msg.setTimeStamp(0.9598419944294415);
    msg.setSource(59356U);
    msg.setSourceEntity(32U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(17U);
    msg.type = 252U;

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
    msg.setTimeStamp(0.318889362312056);
    msg.setSource(7267U);
    msg.setSourceEntity(2U);
    msg.setDestination(9872U);
    msg.setDestinationEntity(240U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.18265739263920655);
    msg.setSource(5265U);
    msg.setSourceEntity(249U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(21U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.3186176251245346);
    msg.setSource(49183U);
    msg.setSourceEntity(84U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(116U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.6616205043670963);
    msg.setSource(40534U);
    msg.setSourceEntity(5U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(107U);
    msg.total_steps = 37U;
    msg.step_number = 203U;
    msg.step.assign("SGPQWVJFHBARRTVWGAEQGRNEXXOZMZRIJFDJLHCQFFDSPBEZNEIOLOCOUJXVMHXSXBYXFQAMNNNKHCEZSWLPWDPXYDG");
    msg.flags = 143U;

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
    msg.setTimeStamp(0.7293054888467478);
    msg.setSource(21292U);
    msg.setSourceEntity(46U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 187U;
    msg.step_number = 172U;
    msg.step.assign("WQCBKXKWFBQSLYKIFLYPESEYQWGRDTBAMFGOJTRFJJWAWURQHVTZYFIJDZDTUGNLALIDIDUQRHCAEXCUIIHJASFBZDHPQSRUOZVCSBNBOGVJPFTMFCNWJXQFLJMKTSZRTTKHXMMPNMHXEYKOPPCUZVEEOHIHNDSLGCYVRJB");
    msg.flags = 162U;

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
    msg.setTimeStamp(0.6063671382977546);
    msg.setSource(20059U);
    msg.setSourceEntity(168U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(53U);
    msg.total_steps = 139U;
    msg.step_number = 18U;
    msg.step.assign("EYYLNMKNQDJXVNZYEBFBMOSGJOXCCGFMINBTUEWOJCVWDPVJDFTRAXHSQWFKTYUCAVAXMFVZGLBQCKEAOAOLPEYNBBKVRMZNKPGIZZRDHRLBRSSGNQHLPDWOHWUMTRBADBIWRUHMHZPJRJVPMI");
    msg.flags = 89U;

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
    msg.setTimeStamp(0.6649010645540654);
    msg.setSource(49943U);
    msg.setSourceEntity(100U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(94U);
    msg.state = 253U;
    msg.error.assign("EBNXGOUZODMVVIMMXQSXHGUFTAJBGIBZICJWHUGQTZPHNDDSDCCFHQDMRLJNBHJWDHFUAWIOFQZNLQNMEOLILBABIRJPYPCFVKJWLSEEOLGICZRUDWNBFXRLPBSXEAGZJCZSYOFNAVMITHLKSWQRXKYCEIUNTIVSRUWQGVWKYLPZXTKUXPHJRURBZQQG");

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
    msg.setTimeStamp(0.3928904848713338);
    msg.setSource(21103U);
    msg.setSourceEntity(152U);
    msg.setDestination(11070U);
    msg.setDestinationEntity(21U);
    msg.state = 80U;
    msg.error.assign("WGXRKRSJGFAGCVYCWXKBJKULEUBPDNBJJSRGENJFDLSYXBDQJBGOCFTHWJCNZEVPMQIZSQCGVHDK");

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
    msg.setTimeStamp(0.9620684921247686);
    msg.setSource(51784U);
    msg.setSourceEntity(118U);
    msg.setDestination(8885U);
    msg.setDestinationEntity(185U);
    msg.state = 71U;
    msg.error.assign("IWEZRJPECKDXEXDUKTSDKXABBZSDIUHYNDTNHJMBPCHJZSPUE");

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
    msg.setTimeStamp(0.9062209567160626);
    msg.setSource(19389U);
    msg.setSourceEntity(44U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.1924007654928499);
    msg.setSource(51364U);
    msg.setSourceEntity(17U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.9483276620873844);
    msg.setSource(7066U);
    msg.setSourceEntity(205U);
    msg.setDestination(33331U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.5506060846658074);
    msg.setSource(51801U);
    msg.setSourceEntity(155U);
    msg.setDestination(36483U);
    msg.setDestinationEntity(121U);
    msg.op = 157U;
    msg.speed_min = 0.21188958680393022;
    msg.speed_max = 0.0665362127484852;
    msg.long_accel = 0.2650840250275337;
    msg.alt_max_msl = 0.5161509036076419;
    msg.dive_fraction_max = 0.8616473270986683;
    msg.climb_fraction_max = 0.9699442019309994;
    msg.bank_max = 0.020667460876892974;
    msg.p_max = 0.41409973960878943;
    msg.pitch_min = 0.10136412262742522;
    msg.pitch_max = 0.25172425124286846;
    msg.q_max = 0.10501618100636778;
    msg.g_min = 0.6377188749403533;
    msg.g_max = 0.08568153559976877;
    msg.g_lat_max = 0.4461479866093059;
    msg.rpm_min = 0.4649491627586261;
    msg.rpm_max = 0.9767417624960207;
    msg.rpm_rate_max = 0.30403662235165896;

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
    msg.setTimeStamp(0.2639309061219596);
    msg.setSource(22289U);
    msg.setSourceEntity(85U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(117U);
    msg.op = 54U;
    msg.speed_min = 0.5656648881216688;
    msg.speed_max = 0.21266756935145004;
    msg.long_accel = 0.08563747593765392;
    msg.alt_max_msl = 0.1365560731265939;
    msg.dive_fraction_max = 0.15611647490115332;
    msg.climb_fraction_max = 0.9683636145098407;
    msg.bank_max = 0.2798033048227947;
    msg.p_max = 0.8753245597940236;
    msg.pitch_min = 0.8815953861632997;
    msg.pitch_max = 0.6037941817761585;
    msg.q_max = 0.6292210884436827;
    msg.g_min = 0.5393437653927313;
    msg.g_max = 0.2849390361593346;
    msg.g_lat_max = 0.9692020555168195;
    msg.rpm_min = 0.16995817462333906;
    msg.rpm_max = 0.41280038921409334;
    msg.rpm_rate_max = 0.5056333845737249;

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
    msg.setTimeStamp(0.026205759390250494);
    msg.setSource(32528U);
    msg.setSourceEntity(23U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(2U);
    msg.op = 227U;
    msg.speed_min = 0.8458985876264875;
    msg.speed_max = 0.31239639122599894;
    msg.long_accel = 0.35045615858274515;
    msg.alt_max_msl = 0.7499954863927424;
    msg.dive_fraction_max = 0.21454206781667218;
    msg.climb_fraction_max = 0.12777127177074277;
    msg.bank_max = 0.34787799212055315;
    msg.p_max = 0.20322598624864285;
    msg.pitch_min = 0.8276485088183462;
    msg.pitch_max = 0.5726034673763084;
    msg.q_max = 0.2318646079697847;
    msg.g_min = 0.7673373946332499;
    msg.g_max = 0.1798348261712055;
    msg.g_lat_max = 0.1860012841293297;
    msg.rpm_min = 0.8272928765110963;
    msg.rpm_max = 0.6666207203052462;
    msg.rpm_rate_max = 0.6410414964550304;

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
    msg.setTimeStamp(0.39087679010867704);
    msg.setSource(45194U);
    msg.setSourceEntity(126U);
    msg.setDestination(23430U);
    msg.setDestinationEntity(145U);
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.625647295064502;
    tmp_msg_0.lon = 0.7569920371232642;
    tmp_msg_0.z = 0.3173502702141493;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.5929448068989936;
    tmp_msg_0.speed_units = 99U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.3218505315160143;
    tmp_tmp_msg_0_0.y = 0.4707771124375455;
    tmp_tmp_msg_0_0.z = 0.13187726790303445;
    tmp_tmp_msg_0_0.t = 0.9173289330246635;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 29392U;
    tmp_tmp_msg_0_1.off_x = 0.8685342041587607;
    tmp_tmp_msg_0_1.off_y = 0.7137238578033325;
    tmp_tmp_msg_0_1.off_z = 0.17921284173771035;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.6669327488323926;
    tmp_msg_0.custom.assign("EGXDXSRCQSDHLROLSDSREKEVJMT");
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
    msg.setTimeStamp(0.0054416418640040876);
    msg.setSource(38214U);
    msg.setSourceEntity(21U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(43U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 45852U;
    tmp_msg_0.lat = 0.6584880754275888;
    tmp_msg_0.lon = 0.5743179808580627;
    tmp_msg_0.z = 0.5552325405686587;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.7145339153448058;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.bearing = 0.24785777787902108;
    tmp_msg_0.cross_angle = 0.29464026075878047;
    tmp_msg_0.width = 0.006651739514113464;
    tmp_msg_0.length = 0.14363775535558088;
    tmp_msg_0.hstep = 0.15442520026572093;
    tmp_msg_0.coff = 16U;
    tmp_msg_0.alternation = 201U;
    tmp_msg_0.flags = 15U;
    tmp_msg_0.custom.assign("VCYTSRLNACDAJSAMJHOIFMGRPCFJDJYGSJFBILWOQSLZOQMPEGFIBIMFDSTQIUHRWBEQPYWNAEPVAHWUGZPXWCNOVBXGRHIELFSVZLJAFTLZYKQRBZSYHCFMYOOIUOQXSDWZDMNCLNVVCXCQAACLIPV");
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
    msg.setTimeStamp(0.578031545266157);
    msg.setSource(10019U);
    msg.setSourceEntity(57U);
    msg.setDestination(60287U);
    msg.setDestinationEntity(249U);
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.39114944254784934);
    msg.setSource(43396U);
    msg.setSourceEntity(67U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.5557799948983294;
    msg.lon = 0.5609330112161826;
    msg.height = 0.635184529021287;
    msg.x = 0.4757287078750776;
    msg.y = 0.24776087867574093;
    msg.z = 0.829683400027654;
    msg.phi = 0.40069611369958047;
    msg.theta = 0.7386830762221207;
    msg.psi = 0.5167808680075076;
    msg.u = 0.1350139776463033;
    msg.v = 0.4385748277763486;
    msg.w = 0.4798128793740368;
    msg.p = 0.3583544557054098;
    msg.q = 0.9766917970922333;
    msg.r = 0.7007764795245726;
    msg.svx = 0.5840300397905356;
    msg.svy = 0.5003136375739674;
    msg.svz = 0.7950736623355038;

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
    msg.setTimeStamp(0.7160337551121015);
    msg.setSource(10700U);
    msg.setSourceEntity(233U);
    msg.setDestination(12976U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.5371796191890771;
    msg.lon = 0.6993764773403297;
    msg.height = 0.2693728328259932;
    msg.x = 0.8322320176565717;
    msg.y = 0.587348840020123;
    msg.z = 0.49804869698206766;
    msg.phi = 0.3550679861957654;
    msg.theta = 0.5598465751052203;
    msg.psi = 0.5604019452070093;
    msg.u = 0.2217877256419577;
    msg.v = 0.17475724751937283;
    msg.w = 0.8643560756085596;
    msg.p = 0.5246965696398028;
    msg.q = 0.7595828727709497;
    msg.r = 0.2802676035280208;
    msg.svx = 0.6103524210187589;
    msg.svy = 0.5015271198256263;
    msg.svz = 0.4243159422994247;

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
    msg.setTimeStamp(0.73697717550469);
    msg.setSource(3411U);
    msg.setSourceEntity(212U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.3233534334583513;
    msg.lon = 0.34945374208958246;
    msg.height = 0.756444092652001;
    msg.x = 0.9630199193964537;
    msg.y = 0.42691214046358794;
    msg.z = 0.9076735894997607;
    msg.phi = 0.26300515370278543;
    msg.theta = 0.23920514004870197;
    msg.psi = 0.8653129859446206;
    msg.u = 0.026456855228140452;
    msg.v = 0.7261164814960406;
    msg.w = 0.4879208048916781;
    msg.p = 0.3726590183994567;
    msg.q = 0.17217134853195148;
    msg.r = 0.5724797802834108;
    msg.svx = 0.7813579906615644;
    msg.svy = 0.46850589727403913;
    msg.svz = 0.017235378970711035;

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
    msg.setTimeStamp(0.8470498354505055);
    msg.setSource(55239U);
    msg.setSourceEntity(0U);
    msg.setDestination(9352U);
    msg.setDestinationEntity(94U);
    msg.op = 224U;
    msg.entities.assign("EWQAVKJZXWDZVEXRVOZHVHJGNONZRMMZFOHAELUBOEKAASKWIUCBPKUMNBBGBYGYPYUNNRDTFKAWUVTPKVPUSKCQZEQAXTQDLRTYIMWVWCFAQFXZGRMQGHYPFZ");

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
    msg.setTimeStamp(0.8059954590209736);
    msg.setSource(46479U);
    msg.setSourceEntity(45U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(245U);
    msg.op = 127U;
    msg.entities.assign("JJCATAGBWLWAMHLGYLDUQNBFHWHXWIWKINHKCPABJXO");

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
    msg.setTimeStamp(0.16504315760026833);
    msg.setSource(27242U);
    msg.setSourceEntity(55U);
    msg.setDestination(8471U);
    msg.setDestinationEntity(34U);
    msg.op = 82U;
    msg.entities.assign("QGZVNDBUKBVETSZICAMHUTRQLVAFJEMWNKXIDNNTEUGMJPVQOFSOJRZLABSSRVLOYYEVOTOEMSNREFCIXRRKHMYNKYYRPJRMXYXPGVDDAZKOALPPRAXQBDCWDRCQNHQBUYGSLGAWHTUJCFXPKWEHKDICHUZMECGVJCTVXWFZYKQYFGWNIFUMDFLTOIQHJQCSDXMUCTJNFBHGVDBMPSOBSNOAZLHI");

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
    msg.setTimeStamp(0.8724656314786589);
    msg.setSource(33879U);
    msg.setSourceEntity(161U);
    msg.setDestination(54951U);
    msg.setDestinationEntity(139U);
    msg.type = 29U;
    msg.speed = 30354U;
    const char tmp_msg_0[] = {-52, 11, -90, 103, 29, -73, 52, -9, 90, 22, -13, -25, 12, -3, 113, -93, -53, 53, 18, 102, 29, -83, -32, 75, -128, -85, 104, -124, -116, 63, 64, 14, 70, 106, -76, 24, -12, -2, -62, -4, 92, 56, 58, -91, -106, -40, 3, -88, -36, 6, -7, -50, -109, 15, 89, -3, -76, -36, -84, 95, 3, -98, 79, -56, -6, -60, 66, -12, 96, -116, -2, 102, 99, -63, -46, -63, 29, -61, 67, -73, -36, -53, -54, 57, -56, 19, -120, 110, 48, -74, 44, -88, 123, -10, -53, -101, 48, 41, -48, 19, 76, 23, 121, 91, 55, -126, 95, 17, 81, -21, -36, 23, 100, -89, 4, 73, 53, -65, 87, -84, 63, -12, -95, -69, -38, -25, 97, -59, 123, -95, -78, 74, 98, -80, -55, 95, 79, -46, 59, 88, -109, 1, -105, -88, 40, -55, -61};
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
    msg.setTimeStamp(0.9140679308875111);
    msg.setSource(4652U);
    msg.setSourceEntity(106U);
    msg.setDestination(2576U);
    msg.setDestinationEntity(179U);
    msg.type = 194U;
    msg.speed = 11360U;
    const char tmp_msg_0[] = {65, -101, -125, -56, 4, -13, -78, -109, 82, -2, -112, -99, -87, -22, -19, -108, 90, -19, -44, 29, -66, 55, -110, -47, -124, 119, 64, -13, -105, -73, 60, 120, 21, -38, -102, 92, 101, 15, -77, -26, -62, 118, -118, 31, -111, -10, 44, -56, 4, 46, -101, -67, 52, -124, 41, 110, 126, -82, -71, 21, 30, 35, -102, -24, 9, 34, -25, 126, 34, 17, 22, 72, -103, -119, -69, -119, 74, -109, -42, 17, 104, 4, 108, -104, 103, -92, 11, -5, -48, 112, 84, -22, -60, 86, -77, -124, -6, -60, 56, -41, 19, 3, -37, -117, -92, -115, 119, -5};
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
    msg.setTimeStamp(0.09852989584720262);
    msg.setSource(20382U);
    msg.setSourceEntity(26U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(60U);
    msg.type = 231U;
    msg.speed = 59004U;
    const char tmp_msg_0[] = {-114, 17, -76, 1, 100, 40, -122, -71, -104, -78, 123, 48, 125, -71, -80, 26, -38, -40, 27, -81, -108, 65, -74, -21, -112, -108, 64, 55, 89, 85, -26, 35, -58, -33, -26, 111, -58, -12, -117, 56, -26, -81, 88, -63, 85, -33, 48, 74, 72, 118, -128, -70, -91, -53, -76, -13, 31, -101, -124, -71, 6, 19, -94, 122, -45, -29, 125, -108, 76, -114, 61, -7, -1, -102, -27, 6, 9, -87, -27, 7, 47, 36, -116, -79, -64, -28, 1, -36, -69, -21, -29, -18, 98, -84, 31, 28, -39, -55, -55, 91, 2, -30, -30, 27, 47, -83, 75, 77, 120, 112, -94, -104, 80, -42, 87, -11, 29, 121, 27, 82, 8, 11, 100, 38, -8, -18, 11, -64, 11, -86, -32, 9, -42, 71, -72, -9, -25, -45, 20, 32, 63, -21, 51, 37, 15, 4, 70, -24, 21, 100, 90, -128, 27};
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
    msg.setTimeStamp(0.5858307830566002);
    msg.setSource(18030U);
    msg.setSourceEntity(136U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(108U);
    msg.op = 130U;
    msg.tas2acc_pgain = 0.7508462235048016;
    msg.bank2p_pgain = 0.4232925469038652;

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
    msg.setTimeStamp(0.16050128013641474);
    msg.setSource(1447U);
    msg.setSourceEntity(111U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(183U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.2691615105000561;
    msg.bank2p_pgain = 0.057606249621212524;

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
    msg.setTimeStamp(0.7173955714619451);
    msg.setSource(9003U);
    msg.setSourceEntity(12U);
    msg.setDestination(9064U);
    msg.setDestinationEntity(3U);
    msg.op = 240U;
    msg.tas2acc_pgain = 0.2248007606338409;
    msg.bank2p_pgain = 0.4379853226594257;

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
    msg.setTimeStamp(0.03537371652352117);
    msg.setSource(7792U);
    msg.setSourceEntity(187U);
    msg.setDestination(31545U);
    msg.setDestinationEntity(37U);
    msg.available = 3441635810U;
    msg.value = 55U;

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
    msg.setTimeStamp(0.6422995853278622);
    msg.setSource(37223U);
    msg.setSourceEntity(226U);
    msg.setDestination(32446U);
    msg.setDestinationEntity(225U);
    msg.available = 2905173715U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.33512324370776914);
    msg.setSource(29392U);
    msg.setSourceEntity(189U);
    msg.setDestination(40591U);
    msg.setDestinationEntity(129U);
    msg.available = 1671094686U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.9263906358843732);
    msg.setSource(64656U);
    msg.setSourceEntity(246U);
    msg.setDestination(63776U);
    msg.setDestinationEntity(222U);
    msg.op = 97U;
    msg.snapshot.assign("FVGEYGEIWIWKKDWNTNMPCEWCEZMWOGUUYIQQNULURBHBDDZZIGLQWQMYGHNAJYPPCBTXMMSYPHAKRPJMLAUCXFRYRHHCHOBGPCSZLMNGUJZALXHEGNFJVPHZLJOMRITFZMAVVCRDIXDKTYUEZRSSBCDQODJCXJDXLSXVPQVFTTYFZQQPOKBTNZLSACFFJAXTOIVSGEQMWDUYKQNOVGUFENVYTBVAITBAKNJSOBBSWKFIXRWIWPSAOLD");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 187U;
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
    msg.setTimeStamp(0.09792257277788985);
    msg.setSource(20347U);
    msg.setSourceEntity(112U);
    msg.setDestination(13512U);
    msg.setDestinationEntity(46U);
    msg.op = 121U;
    msg.snapshot.assign("DOMUKFWIAYLTUCUZDUBRANVXSZHTAVDPMPELVCQFBMFXMPTJGONVRMRDMKUFKMSORWAIIAGEBCTZTNZLXNJCXNDCHG");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.8139696386493803;
    tmp_msg_0.reason = 185U;
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
    msg.setTimeStamp(0.7470916580623146);
    msg.setSource(46263U);
    msg.setSourceEntity(133U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(241U);
    msg.op = 44U;
    msg.snapshot.assign("VGTOIMEZNJYRZSFMOKCZLWZOCZRWQFBHXNDWXQRBLBDIQFSUBWIKAFKUOVQFOOMVAYGSKFJGEIHBHOIBRNMXZIVWGJOBMZMXYNNQTLUJTCLHNSSFJUWEGHHPVPQUTRDWYJAXMQYCXALUUHGADUZQGKPFNVTKSARYWSFYAMMVTBPQIJDVSKJKPXCTXWZCNTAPGEIDRUQNYYHXWEOUDKBPGLV");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.9892315189215095;
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
    msg.setTimeStamp(0.06193779623920903);
    msg.setSource(59634U);
    msg.setSourceEntity(107U);
    msg.setDestination(50877U);
    msg.setDestinationEntity(97U);
    msg.op = 172U;
    msg.name.assign("GTAXIICVMSJYTDSFDSPSKBXIXNYBPPSIKDGVGRUSDHCJRRDTWUKOKLVTBXMTFBAYOKTNKQVQEKYFHIOAVYVEUQRH");

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
    msg.setTimeStamp(0.14492615045347368);
    msg.setSource(61633U);
    msg.setSourceEntity(245U);
    msg.setDestination(33262U);
    msg.setDestinationEntity(45U);
    msg.op = 232U;
    msg.name.assign("QMRWONOZGPRYHBVKRBODAZUBSHOTPSNPULUKPELYNCTHDNZKIMXAVRWKMALVPVSTUQRVMNJQFWCEPWVCJTQYCWSCWCHEUWVMFDYWFJPOZNLKZHUOKNBMEBHXAUQYXRLJRYHTRDGBVYDCIXEFVGTDBDNFQMFMBIDHSWKGECIFASLMUBSZELGKQAAJ");

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
    msg.setTimeStamp(0.6788409242217204);
    msg.setSource(65160U);
    msg.setSourceEntity(162U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(170U);
    msg.op = 151U;
    msg.name.assign("EYQKWMZYFPSLLASYGVZGBPDFZRSZKWGYCZDJNDAUFUNIJZBAXJWIQNBRBPNWARVENEKTFETNGLPFHAHXBRULMXBUQWTNKDFKXUBBVHWDEKMKIEQIOXLBATHWCFLGCXLCGIECSRLJQQFMREGZNWHUHCDEDSTQFJYIPSCOJZDMVGYZXEYRRYJTKPCLOOOIMRVVMXPVDVOJOHIFUVKUSYAGPCJNBHSITAQDOXLSZQKTMYWN");

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
    msg.setTimeStamp(0.9015380509061527);
    msg.setSource(12119U);
    msg.setSourceEntity(26U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(104U);
    msg.type = 20U;
    msg.htime = 0.9240837563379514;
    msg.context.assign("YYAGIHBMHBZTQIXZVHZDKPMINUSNDXOAMMVWFRWHERCMKYIEOZUZKGHVAHJAJYWPMUTTSSJBEQFASFLJPJOZYRIKQDQCVGGJALIESRNOYNLOURQFPMCKVQPDGELRVYUZJXFGIPTCXEYNVQGZCDTUINJKLPKFXBMKBLSGZFOPGHOOWAVUFEXNWQNXXDBTBUOLTAQYDCWNQXBCWWR");
    msg.text.assign("MWVKVBTGSHLKBEQAXHBHOPCTZSEVKEVACZOZFZWTZAYDMDQGBYGKKHERMBYWGGQMSEQBHNPRXAWJMWXCPONKZAMUBIJZCZQUNIVBOXOFHNEZYJFJINUTPLYXGF");

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
    msg.setTimeStamp(0.8610604458576517);
    msg.setSource(26106U);
    msg.setSourceEntity(71U);
    msg.setDestination(53515U);
    msg.setDestinationEntity(155U);
    msg.type = 229U;
    msg.htime = 0.6517093900858334;
    msg.context.assign("GDNDJDCBTJBXUCYFXLMSDTRBPMCAACJKOWYINZFORXLFXTZNHXAVJCHDYXPLZVVY");
    msg.text.assign("XDERVOCRVESDUIIGSH");

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
    msg.setTimeStamp(0.5693797854804948);
    msg.setSource(7601U);
    msg.setSourceEntity(11U);
    msg.setDestination(38748U);
    msg.setDestinationEntity(214U);
    msg.type = 135U;
    msg.htime = 0.5855222200658788;
    msg.context.assign("DSOSRBBKXJACBBXFMQPKINCEEMYNUYVFQTDUDJYEMRTDHHENVVIXTWRSLWAJYXMLPVLTBMSVOPOGTJUGYJIRYIVRDJSWCGDHVLBWVFTAPEETFGNXTZNNGQSXCIBFJKDPHLICXUOFOTPMFJQNWDZLMFQIMNH");
    msg.text.assign("XZUUOOCZMDBASWWODIYSQLXQMUPSCDLZKKQCBFMNRXRNJJGOWJNRZBGHGHZXNCWNJBMJPTRATTGLQXNBPL");

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
    msg.setTimeStamp(0.9050926860655165);
    msg.setSource(24506U);
    msg.setSourceEntity(81U);
    msg.setDestination(11290U);
    msg.setDestinationEntity(13U);
    msg.command = 248U;
    msg.htime = 0.8388777608121569;

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
    msg.setTimeStamp(0.8361776370351212);
    msg.setSource(33798U);
    msg.setSourceEntity(254U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(11U);
    msg.command = 89U;
    msg.htime = 0.31868592883468927;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.htime = 0.48129001787196724;
    tmp_msg_0.context.assign("LEDSXMHQCZRXZPMAUATUJRNKG");
    tmp_msg_0.text.assign("LBFXWUWBSECSHZPKQAGKVVWOGOBTNWFIMWMSJRTZRYIMFNMCTVMBKMZQDRAVPNHKTIXJLYNGFQPYORQEKVBHUMVPNCIXFXGYZCNFIRIIJHPGYNFKFXEQLDSABIVHJWKDJAAXYSLUBGPPLAYRGYJFUHVW");
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
    msg.setTimeStamp(0.49006215525423935);
    msg.setSource(49094U);
    msg.setSourceEntity(215U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(88U);
    msg.command = 169U;
    msg.htime = 0.05227446884798215;

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
    msg.setTimeStamp(0.4754288288375763);
    msg.setSource(13212U);
    msg.setSourceEntity(152U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(6U);
    msg.op = 47U;
    msg.file.assign("RIMNMPJZOVKWYZWFTSADBTGMSWGFYJHMZCVQFYBCTBGSCGSVPWCRJPKORYNVNXJIAXNIAYVPGQIFAQWRDZWZAUBUFEXLBGHQVKHBEVDDZCQOYPPYZYDRHPIHLMGBJMROPBIGWTLJMDEXAWKVSNRBLOKBQHLHQEEIMUCQACGAEXKXEOEVUNPLNSMIYHVDSCNJSJRAWDOOF");

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
    msg.setTimeStamp(0.33851638120135485);
    msg.setSource(16495U);
    msg.setSourceEntity(170U);
    msg.setDestination(2906U);
    msg.setDestinationEntity(204U);
    msg.op = 127U;
    msg.file.assign("VXEALPBQSFKHEEMWGVCJSYDHAGBAMNHFIKJTIPLAOJRBSLXFWWCLTOQXYIHXKAQLMTSWEZTRVTIKXBLRMCBIJVHAXKSKAUZQMWOBHVGJSTCFUGON");

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
    msg.setTimeStamp(0.06898689334935193);
    msg.setSource(37257U);
    msg.setSourceEntity(185U);
    msg.setDestination(32058U);
    msg.setDestinationEntity(18U);
    msg.op = 60U;
    msg.file.assign("BYGBVAIUOHQVQFUXCMCLPAZAYSEGSQIWOMWOIHOKAFLQJUCNXKCRDCEYOGNWENXJVTDPNUCQXQQSHNODKFLTRVMXAURHUJDRLSKYKWNJLMAWHBPWITLFPPJGUEXCEDFYDIBKITMDVKZJAEFKSAYYMWRDOIIGVGGSHYWLQMZNGGXXRPZKPEEMUNAUYXLNHUTLRTFWCFVCMHKRSSHRJVOZHEQBBZTDBZBLWTZYGVOZPN");

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
    msg.setTimeStamp(0.8245531891653162);
    msg.setSource(41468U);
    msg.setSourceEntity(10U);
    msg.setDestination(48638U);
    msg.setDestinationEntity(133U);
    msg.op = 123U;
    msg.clock = 0.23709209411740562;
    msg.tz = 91;

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
    msg.setTimeStamp(0.7007274898077918);
    msg.setSource(45949U);
    msg.setSourceEntity(82U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(161U);
    msg.op = 15U;
    msg.clock = 0.2843170719486262;
    msg.tz = 56;

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
    msg.setTimeStamp(0.996017452570863);
    msg.setSource(57322U);
    msg.setSourceEntity(32U);
    msg.setDestination(20361U);
    msg.setDestinationEntity(113U);
    msg.op = 82U;
    msg.clock = 0.6051476184804527;
    msg.tz = -122;

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
    msg.setTimeStamp(0.6179517978655217);
    msg.setSource(7330U);
    msg.setSourceEntity(4U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(112U);
    msg.conductivity = 0.3150060758990436;
    msg.temperature = 0.710792589350114;
    msg.depth = 0.7263207389735868;

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
    msg.setTimeStamp(0.16330169149206863);
    msg.setSource(18619U);
    msg.setSourceEntity(183U);
    msg.setDestination(64605U);
    msg.setDestinationEntity(85U);
    msg.conductivity = 0.7812605938337506;
    msg.temperature = 0.3378159265716796;
    msg.depth = 0.4132617597451087;

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
    msg.setTimeStamp(0.8836227623383606);
    msg.setSource(53275U);
    msg.setSourceEntity(213U);
    msg.setDestination(16227U);
    msg.setDestinationEntity(214U);
    msg.conductivity = 0.47062677307892564;
    msg.temperature = 0.09326917714073402;
    msg.depth = 0.9765843020154902;

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
    msg.setTimeStamp(0.3591139546108386);
    msg.setSource(21154U);
    msg.setSourceEntity(163U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.16864051872469477;
    msg.roll = 6862U;
    msg.pitch = 46823U;
    msg.yaw = 59553U;
    msg.speed = -16971;

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
    msg.setTimeStamp(0.7168312681354208);
    msg.setSource(60940U);
    msg.setSourceEntity(214U);
    msg.setDestination(657U);
    msg.setDestinationEntity(126U);
    msg.altitude = 0.9426375494211112;
    msg.roll = 64688U;
    msg.pitch = 40648U;
    msg.yaw = 50382U;
    msg.speed = -7268;

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
    msg.setTimeStamp(0.25863270460113563);
    msg.setSource(48129U);
    msg.setSourceEntity(235U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.6016738872116911;
    msg.roll = 44035U;
    msg.pitch = 3885U;
    msg.yaw = 47190U;
    msg.speed = -3709;

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
    msg.setTimeStamp(0.5902890755789425);
    msg.setSource(1494U);
    msg.setSourceEntity(143U);
    msg.setDestination(21694U);
    msg.setDestinationEntity(95U);
    msg.altitude = 0.7978523304218545;
    msg.width = 0.009491316147643758;
    msg.length = 0.6968890923825996;
    msg.bearing = 0.8923634320765458;
    msg.pxl = 18275;
    msg.encoding = 92U;
    const char tmp_msg_0[] = {47, -25, 24, -19, -44, -85, 106, 9, -31, 30, 15, 51, 69, -118, -80, 42, -4, 69, 83, 55, 73, -96, -56, -54, -18, 57, 84, 86, -34, 43, -118, -17, 51, 7, -89, 17, 12, -60, -9, -24, 68, -19, 47, 42, -89, 69, 46, -83, 84, -122, -86, -66, 113, -78, 19, -1, 36, -81, -126, -55, 52, 108};
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
    msg.setTimeStamp(0.8951569222980279);
    msg.setSource(38497U);
    msg.setSourceEntity(76U);
    msg.setDestination(32486U);
    msg.setDestinationEntity(229U);
    msg.altitude = 0.08006835646290422;
    msg.width = 0.1855143736931133;
    msg.length = 0.025360341340187498;
    msg.bearing = 0.8510140665461519;
    msg.pxl = 10440;
    msg.encoding = 39U;
    const char tmp_msg_0[] = {25, 92, 4, -74, 90, -70, 16, 43, 54, 126, -106, 99, -44, -60, -119, 5, 75, -60, -92, -37, 106, -66, 39, 40, 17, -85, -76, -85, 24, -124, 40, 84, 78, 117, -125, -50, 26, -125, -52, -40, 123, 4, -113, 118, -115, -44, 118, -34, 98, 58, 32, 10, 92, 18, -5, 79, 66, 39, 106, -1, -45, -23, 83, -1, 58, 95, 29, -126, 107, 88, 20, 41, 106, 4, -114, 42, 97, -50, -69, -34, 109, 24, 103, -84, 51, -87, -16, -94, -82, -33, -124, -66, -109, 72, -124, -10, 6, -62, 104, 16, -17, -110, 40, 117, 111, -2, 52, 60, 52, 74, -50, -41, 86, 45, 62, -26, -34, 66, 30, -58, -109, 94, -53, 120, 73, -120, -25, 65, 121, 21, 21, 102, 81, -37, 26, -63, 22, 71, -50, 70, -98, 62, -26, -76, 109, -90, -71, 20, 69, 20, 26, 4, -34, -44, -35, 3, 103, 77, -38, -47, -58, 39, 89, 38, 124, -72, 87, 110, -125, -6, 104, -112, 118, -106, -114, 5, 37, -72, -87, -115, 69, 121, -83, 35, -37, 109, -90, 117, -19, -92, 105, -38, 12, -50, 62, -19, 66, -78, 44, 122, 115, -64, -95, -15, -79, -50, 10, 115, -84, 4, -97, 71, 89, 56, -63, 72, 94, -36, -37, 88, 90, 76, 19, -115, -98, -122, 91, 100, -123, 49, 100, -120, 107, -70, 69};
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
    msg.setTimeStamp(0.18651150102722103);
    msg.setSource(60725U);
    msg.setSourceEntity(23U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(72U);
    msg.altitude = 0.31305006634445187;
    msg.width = 0.4821086937843041;
    msg.length = 0.22719497813715905;
    msg.bearing = 0.4694957187598877;
    msg.pxl = 28430;
    msg.encoding = 92U;
    const char tmp_msg_0[] = {89, 15, 119, -5, 27, -10, -23, -11, 64, 111, -101, -50, 30, 112, -82, -27, -21, 40, -128, -90, -18, -17, 69, -65, 56, -104, 10, -67, 18, 49, 60, 29, -79, -128, 58, 34, 51, 61, -91, 12, 85, -112};
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
    msg.setTimeStamp(0.11289549190125192);
    msg.setSource(43144U);
    msg.setSourceEntity(142U);
    msg.setDestination(13475U);
    msg.setDestinationEntity(184U);
    msg.text.assign("ADNQLKWASHUKMOLHFIOYVRBCTPN");
    msg.type = 151U;

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
    msg.setTimeStamp(0.7430563762750598);
    msg.setSource(41629U);
    msg.setSourceEntity(121U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(67U);
    msg.text.assign("NLJKCESSPVEUAZCHCVTGMZRRDEMQHHLBHSVDPHAOELIPWVJRJMZGCYFJNBMAKYTWWTSUHSVLDYBIONGJKEJOQGKPKXYKTTUCDTOORINZFGANBEBLOIUQH");
    msg.type = 22U;

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
    msg.setTimeStamp(0.7039445536275931);
    msg.setSource(55637U);
    msg.setSourceEntity(0U);
    msg.setDestination(57264U);
    msg.setDestinationEntity(221U);
    msg.text.assign("IURPADSOHLVPDCLILGMIPIBGTNPLVGVOTDCOOCLQIEZNWIUHNJGHSYYBYQFSQAKMSQLSBB");
    msg.type = 130U;

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
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.3581134004135871);
    msg.setSource(39535U);
    msg.setSourceEntity(118U);
    msg.setDestination(58039U);
    msg.setDestinationEntity(26U);
    msg.parameter = 123U;
    msg.numsamples = 76U;
    msg.lat = 0.39560796257533903;
    msg.lon = 0.12412319133706895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.002082884519869377);
    msg.setSource(21719U);
    msg.setSourceEntity(136U);
    msg.setDestination(36964U);
    msg.setDestinationEntity(13U);
    msg.parameter = 89U;
    msg.numsamples = 138U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 22326U;
    tmp_msg_0.avg = 0.40677705740254855;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.2608115054676958;
    msg.lon = 0.8885858308816511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.8796528892770346);
    msg.setSource(11747U);
    msg.setSourceEntity(155U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(89U);
    msg.parameter = 69U;
    msg.numsamples = 91U;
    msg.lat = 0.12546578771855832;
    msg.lon = 0.3034639288699905;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.16552863102335524);
    msg.setSource(31714U);
    msg.setSourceEntity(221U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(207U);
    msg.depth = 43670U;
    msg.avg = 0.454607264930424;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.6614496270152019);
    msg.setSource(61837U);
    msg.setSourceEntity(147U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(184U);
    msg.depth = 38942U;
    msg.avg = 0.5434173098680479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.4553822643602822);
    msg.setSource(20648U);
    msg.setSourceEntity(246U);
    msg.setDestination(26650U);
    msg.setDestinationEntity(60U);
    msg.depth = 36170U;
    msg.avg = 0.7352833877820247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3409405000468303);
    msg.setSource(6262U);
    msg.setSourceEntity(104U);
    msg.setDestination(34999U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.4007202308075355);
    msg.setSource(38626U);
    msg.setSourceEntity(179U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.6741062647135087);
    msg.setSource(24425U);
    msg.setSourceEntity(94U);
    msg.setDestination(37527U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.587841460325353);
    msg.setSource(21638U);
    msg.setSourceEntity(80U);
    msg.setDestination(34375U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("AGKJGXOTINXARXEXYOLNJEONRZQTUPARBALBDZVZKMOUMNWBDKDHHLTPHDSQTIMRSIMVMBCXEKYVFOTZLTILJESITAUSQPZMRIFJECNUCVKLFWWQKHEXVYFAGCJXPGPOWXKECFCLSWTAAYGZTTOZMVRJPPYLBFKWGRQSFFKQGWMSQBOPLQZQDMWJSYPBYAZDPCVZLDRUJGHEHHOGSCNIHIUUNUNNEDCUCNJUJHHAIDQXYKYWGBXVDRYFSB");
    msg.sys_type = 182U;
    msg.owner = 763U;
    msg.lat = 0.2726200029131328;
    msg.lon = 0.7401445905702626;
    msg.height = 0.9615625961588683;
    msg.services.assign("HZHOWKXDJWTQBFYXDBLCOJAVDDBWFPKLEDPBWSRWCWUSEGAAHIOSJZTNFEHYBEGDRVYYJKTUIILHOGCAVGMLBOZKQAMJWUUWKFICPQICKNCMNYZBHRFQLTHACKLZQGKBIZGGOFVZXXCCTOIHQPLVMXMQEHEKSTRYFJUHSJYZYKSQPTPXYPLNBSPVVWPVITTGAXVZAMIBYEPMUFTSEJXDLNDQRRRFQXGJZNGOSUIDUFNOWEXUMREACNDSRMLNV");

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
    msg.setTimeStamp(0.651153348908962);
    msg.setSource(10774U);
    msg.setSourceEntity(32U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(121U);
    msg.sys_name.assign("WNLKCHFQPFQZXPKSOBUHTNWCHDXUGLZLKFUTAEJOECGCDXGXNESWMUBAOOXGTNSEAPUCMIBDFASJNQLDLIKIPQVRGKATVBUDRDAQFSZTQCURMTQXSYWBJDQMOBPSOWXFGVRUUJMJVZILKIBUDHOTVRLNOMXCAHQGBYTELEIVPYYAYFFZKCVYAVWT");
    msg.sys_type = 74U;
    msg.owner = 10236U;
    msg.lat = 0.5638750660978338;
    msg.lon = 0.9037747561636806;
    msg.height = 0.6310190558059894;
    msg.services.assign("FHDYXPFBYRIQGWKLQZSYGTMBMDVQLANUCAGQGHOMYQZUFMUJTHKSODGFZPDSUBCABOSLCTLWFWBXVOVRYLQYMKZESSTLMPZDJIPJPCJIOXFSUUGGXMAJPOFBGLCIDSACDNPIHOFPTURWZRORWVGHEAZKHEXUIXVMZIUTAQYNNZCYMTRYEJYEINTXDF");

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
    msg.setTimeStamp(0.8208421789812425);
    msg.setSource(45582U);
    msg.setSourceEntity(5U);
    msg.setDestination(52975U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("NYBWPUWWGGDZQAGRGVIZPRCQKCETOTUAHNIMYSYEHMFRDZMEDLRUFPWRJQQPRJHTNVPEBANLLNMBZKYOTAZSCHKN");
    msg.sys_type = 180U;
    msg.owner = 39507U;
    msg.lat = 0.41089522720516547;
    msg.lon = 0.062021792637335205;
    msg.height = 0.818716351738428;
    msg.services.assign("ITSEQZEPIRCJPXZVBIKXOZWSEXFNBNNJEFNQYRCIGVCSUUJHGLDPPTWDAJMQTYFQDTUDBZQOOFQMHOAULRKIVBIPKTFVKIPGLHAFCIUTMBMYAEWMRV");

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
    msg.setTimeStamp(0.9505239294768811);
    msg.setSource(37397U);
    msg.setSourceEntity(106U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(145U);
    msg.service.assign("FSRAHMWQPUUKZOYXUJNFBXOCZJSTLAKTSLYSTFGYAHAEGECCVUQWBGDPENUMASKNOGBVSQTBGFVWDOUEZSZXICXGKCPANQWOVQFKKHFJPPQMXLTRANYNDTJLOFOMOHBLBNTYHPOFEYCJVYRIDASVKIDSITIWRZXMJHJJMYCKUDZMBRNKWRZXQGWIFYREBMIQKGLPZRDBLLQOECVDRNZWVHYTIQXMWUEXDG");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.939710385448459);
    msg.setSource(55276U);
    msg.setSourceEntity(230U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(155U);
    msg.service.assign("VXZKNBRBFQYJRQBDBDLSCYMHSXBDNPOFTKYWKPQWCTRMPZTNMIAYGWXWJULXW");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.08127836086485563);
    msg.setSource(56574U);
    msg.setSourceEntity(82U);
    msg.setDestination(12716U);
    msg.setDestinationEntity(188U);
    msg.service.assign("YHKRZETVHQMDDHBCOJSJAYLXGHRZNOQIMLIDYMAEMSWJVZNHLFZDNDIECEPPWUBDJQODHGJJTBATZZFBWECBBKUVWCGKVSOPTLCFCWTOIMAHGQUSVNVGOPHOBIYEHXRAKVZWUNULSKPATGXIXLKELXVXSGHQOFJAIWTMGWRAMQJNSUC");
    msg.service_type = 213U;

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
    msg.setTimeStamp(0.22197977830185445);
    msg.setSource(61317U);
    msg.setSourceEntity(99U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(74U);
    msg.value = 0.8453120853292356;

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
    msg.setTimeStamp(0.6335250739807445);
    msg.setSource(30781U);
    msg.setSourceEntity(175U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7054548279325105;

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
    msg.setTimeStamp(0.47681222958827674);
    msg.setSource(43925U);
    msg.setSourceEntity(97U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5417908666711505;

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
    msg.setTimeStamp(0.023028836889662285);
    msg.setSource(62316U);
    msg.setSourceEntity(116U);
    msg.setDestination(37956U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5694676928600173;

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
    msg.setTimeStamp(0.8029457111464243);
    msg.setSource(6618U);
    msg.setSourceEntity(148U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8900605054880549;

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
    msg.setTimeStamp(0.45192804941509823);
    msg.setSource(16421U);
    msg.setSourceEntity(187U);
    msg.setDestination(44537U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6316418759324767;

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
    msg.setTimeStamp(0.4645321601105422);
    msg.setSource(52378U);
    msg.setSourceEntity(93U);
    msg.setDestination(11331U);
    msg.setDestinationEntity(2U);
    msg.value = 0.961876720437304;

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
    msg.setTimeStamp(0.487164292158214);
    msg.setSource(12038U);
    msg.setSourceEntity(72U);
    msg.setDestination(30999U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6756405210316698;

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
    msg.setTimeStamp(0.651550168228255);
    msg.setSource(54480U);
    msg.setSourceEntity(228U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7724772157283747;

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
    msg.setTimeStamp(0.6204547155391967);
    msg.setSource(7658U);
    msg.setSourceEntity(87U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(244U);
    msg.number.assign("CPNWRYFEEKIRPDNXWSUKTVNLGSKUWFCKZKXWETEPHKQTJBVQSOCNGXEFMJWFL");
    msg.timeout = 9417U;
    msg.contents.assign("WMBNBLMDLRSQEZEAGIFVSKPYAXYLNWACMJBDFNEFWNKZAQZHFECNFQQCVFCUGLUTNJYO");

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
    msg.setTimeStamp(0.7344121374609583);
    msg.setSource(19203U);
    msg.setSourceEntity(83U);
    msg.setDestination(18874U);
    msg.setDestinationEntity(153U);
    msg.number.assign("AVSGOJFADAWHBRPCUBIMVZFMELRJBJDGZOGIQZHKDYFJURLROHWSGTCMOAHQXHQUCQLGQSOZOVEYXBXZENIBFCMAVWKZRGLIWMFDLVSVAMWXUNGOAPGTEYJIKVCVMTQYSKFZCOAHMLRMNJRKNJFYZNTBNKCOKNYYPPWYESBTBQXUHCFPIEKSKZWINLPNDHTEYCDPWUHJBWQURWTKSGXXXLP");
    msg.timeout = 3344U;
    msg.contents.assign("ADGMPMJKLRCPRBYXTLEPVOAUPQXSFVAYFZWEYFKPIUBCXWXWESEMNBLUWDGLRHIGBZTJNFEKXGHDNOAANRSUDBSZJGCHJFWPINSPOCMIRQYHGSNRHNLXDMFVTDNNUTWHAHKJXCECSALKGVTVQUHBZMCQYQBPBASJMWVGKRJLQIZADQWMPGBCQYNZLYRJZFTSZKCDTSRBYHIOCDOXKRVFMAEWMZ");

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
    msg.setTimeStamp(0.10428048331622441);
    msg.setSource(56883U);
    msg.setSourceEntity(39U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(110U);
    msg.number.assign("BXIIVIUGPQUNYKEJHSXOJZICNRRUBCBLKYTLRZVGEEXFMPEWUNHKKADSKNVRDAOZFMKVSUIEWHTLBYLTQLHYRWUEGVPFBOASGITONTPVVZNUSQHFFXMSZZDWWMXXYTGYKHONAJXMRZDIHCWMHCVBONLVBDJJELQQDCCEQYWCNDJGWOSFNLLFOTEHYMGXAXTJUBPWBXQIKYGMQPOFFPSGFREWPDZCAIYCJILGAZHRKDTJVOMAZDPPQSR");
    msg.timeout = 60098U;
    msg.contents.assign("AYJVUPQOSZLYOVJUURQHOQHUBFVYXWCBOXUULSMGJXLTZKIXCZEGQTITQWENRQTLUSJRNFIHYDHGIDEEUDYPPKGRYYZXKBNOPMJCDMZPEQWDELVSIRYGBWJTWJVSVVBSXLMWHFAPNAFCOHASDDSVTKFZACGMKHPIGNAYFHTLEMMJNKYGIUOGJWFBO");

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
    msg.setTimeStamp(0.9839642833294296);
    msg.setSource(47492U);
    msg.setSourceEntity(96U);
    msg.setDestination(53390U);
    msg.setDestinationEntity(216U);
    msg.seq = 1178390368U;
    msg.destination.assign("SFAJIMIKUWXLGKFMXJDMTAKTZYXOTCGODRHGJEARIYIQJZLZXGOSNBQTWDAYXZHNJBIQTASPWHZYRLVPTSDVFLIXQOUEUCDVCLUTEBZKJBGMHJZJWA");
    msg.timeout = 42381U;
    const char tmp_msg_0[] = {-78, -48, -86, -125, 35, -62, -85, -52, 11, -65, -102, -60, -42, -9, -124, -114, -75, 80, 89, -96, 58, 13, -113, -109, -66, -35, -16, 23, -61, 21, 38, 57, -4, 57, -74, -87, 77, -106, -70, -12, -24, 20, -117, -92, -46, 68, -97, -5, 31, 93, -63, 70, 118, 9, -28, -79, 53, 12, -4, -9, -118, 74, 97, 64, 104, 60, 35, 90, -69, 39, -37, 17, -67, -56, 34, -110, -124, 110, 58, 53, 8, 111, -59, 27, 77, 48, -48, -91, 119, 11, -43, -13, -106};
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
    msg.setTimeStamp(0.006459627177451299);
    msg.setSource(10065U);
    msg.setSourceEntity(228U);
    msg.setDestination(32262U);
    msg.setDestinationEntity(9U);
    msg.seq = 2973330019U;
    msg.destination.assign("STZVQRINGABIODPZIXKVQEZGWQKBXCHQSEYO");
    msg.timeout = 24347U;
    const char tmp_msg_0[] = {103, -42, 90, -52, -6, 56, 79, -74, -85, -49, 78, 12, -3, -1, 41, 89, 87, 45, -75, 76, -51, 116, -66, -61, -46, 92, -84, 98, -8, 40, -36, -91, 125, -66, -84, 106, -28, -13, 107, -103, -38, -69, -5, -67, -79, -108, 102, -66, 4, -98, -34, 122, 38, -31, -37, 68, -67, 2, -35, 103, -42, 30, 67, 95, 39, 66, 76, 96, 10, -63, -113, -103, -95, 106, -105, -57, 86, -97, -23, -68, -91, 28, 108, 18, -16, 32, -43, 69, -50, -50, 24, -68, -105, 5, 46, 109, -62, 46, -1, 9, -16, 113, 53, -102, -65, 42, -99, 80, -44, 21, -58, -63, 119, -22, 80, -57, 94, -112, 69, -103, 17, 119, -41, 25, -110, 50, -12, 31, 80, 60, 25, -7, 64, 77, -6, 109, -98, 106, -105, 83, 18, -106, 71, -8, 50, -125, 88, 0, -58, 125, -87, 23, 13, -4, -46, 121, -127, 76, -13, 124, -117, -21, 29, -1, 11, -125, -21, -52, -78, -118, -28, 52, 48, 57, 118, -13, 118, 82, -94, -18, -2, 75, 21, -29, 96, 119, -111, -83, -12, -45, -21, 47, -77, 88, -11, 105, -116, -27, -47, -23, -70};
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
    msg.setTimeStamp(0.7901666457998638);
    msg.setSource(17386U);
    msg.setSourceEntity(23U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(67U);
    msg.seq = 1769166333U;
    msg.destination.assign("LFHLKWCCKDJODHECZIEVZWLQGQEYGJJRYBTYNLIHFGVGLSPBSOUKIJXSAVBQVNYCWMRTPDARPFSZXVIYCZQNFGXKLICIUABVTINCMDQZYGOXGDMTDVBNYASWWSPFHQUTXENHNEUMXQOSZVJQGWDSKTLJEJROYHMDHYHAKTWBNWWXENRABVVZAWMTTXIORQZPOQIRFBZPMCYPXRXODJLSDZKOTMPUPRMBULHUCUCUKEEKERS");
    msg.timeout = 16690U;
    const char tmp_msg_0[] = {-106, 72, -110, -13, 31, -100, -90, 62, -50, 104, -107, -88, -9, -8, 72, -51, -8, 25, 1, 49, -110, 47, 14, -62, -35, 65, -43, 32, -68, -120, 80, 58, 2, -69, 123, 18, -110, -54, -108, -88, 25, 112, 86, -24, 110, -13, 42, 34, -67, 112, -27, 100, -115, 109, 114, -62, 62, -63, -35, 15, 89, -42, 52, 33, 94, 100, 13, 80, -102, 24, 42, -35, 24, 17, 91, -114, 115, -25, 89, -106, -20, 76, 27, 21, -104, 7, -33, -101, 123, 8, 104, 10, 56, 14, -26, 33, -121, 25, -25, 83, 80, 78, 25, -50, 51, 107, -24, 108, -67, 68, 48, -9, 56, 124, -46, -84, 93, -106, 106, 61, 106, -40, 39, 87, -92, -95, 76, -26, 19, 120, 74, -61, -10, -38, 58, -3, 8, 60};
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
    msg.setTimeStamp(0.10182668470060607);
    msg.setSource(20998U);
    msg.setSourceEntity(26U);
    msg.setDestination(33958U);
    msg.setDestinationEntity(39U);
    msg.source.assign("AQWZUZSZDCCKMJPYUQBEZNEGIFUPWQUWFKYAAVFKASFQNAXIEBXJLIHDKIRSVNCPCDOPYGELEROTLTWMHTTDNZVHZJPSDYSERGSEHBITGKCCRLWREQOPIJMOLJBCCNRLDCMATBPZQDFAXNLUGTFJMWXGDFOOFRQIXSH");
    const char tmp_msg_0[] = {96, -45, 16, -29, -67, -79, -11, 50, -70, 102, 26, 108, 46, -39, -81, -8, 87, 37, 21, 126, -102, -125, 71, -25, 120, 67, -58, 40, -25, 52, -41, -84, 31, -123, -58, 2, 90, -98, 101, -91, -39, 126, 22, -108, -50, -43, -44, -98, -98, 86, 54, 81, -39, 23, -70, -32, -51, -68, 122, -47, -12, 11, -7, 125, 100, -96, 35, -8, -63, -82, 121, -107, -112, -56, 72, -15, -111, 81, 112, 105, 76, 41, 93, -110, 54, 121, -35, 64, -64, -38, 59, 83, -47, 102, 104, -55, 114, -100, 77, 39, -65};
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
    msg.setTimeStamp(0.7763359876164905);
    msg.setSource(32078U);
    msg.setSourceEntity(202U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(111U);
    msg.source.assign("YVKPDBXMJFFGVLTNYOMYE");
    const char tmp_msg_0[] = {64, -76, -17, -103, 59, -74, 25, 103, -122, 7, -114, 0, 100, -17, 19, -93, -11, 32, 105, -104, -72, -78, 5, 57, 46, 100, 43, -127, -27, 123, -89, 47, 119, -43, -76, 3, -11, -45, -42, -58, 22};
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
    msg.setTimeStamp(0.13694709981184272);
    msg.setSource(42266U);
    msg.setSourceEntity(168U);
    msg.setDestination(6614U);
    msg.setDestinationEntity(99U);
    msg.source.assign("DPKARZKDKDABWJNGHRADNCBHBJXJPJXWVNFQETCMEKEUBIOJTDBLNAFSNCUGOUFTVEKCJZGSALZUUSXZRPVDBNQWSROINUZGHIWZMIZPFNOKTTEQMAGSUBKYOHBHTSIWYGCVMDYXSCPRCFORIFWFVYMIODMLPYKSDEPKHGJRHAUVUGWVQLXHFIAVLHZVRXTEWPBNJBAXLMFLRCIYAECLVOQFJTX");
    const char tmp_msg_0[] = {53, 10, -25, -93, -119, -2, 117, -25, -89, 105, 17, -39, 82, 37, 89, 17, 122, 28, 115, -82, 124, -116, 39, 90, 28, 30, 82, -78, 106, 85, 27, -94, -31, -85, 81, 14, 72, -98, -6, -18, -89, -42, 56, -75, -25, 113, 106, 2, -84, 7, -18, -64, -24, 73, -117, -105, 116, -16, -110, 96, -14, 100, 18, -122, 11, -63, -45, -123, -23, -73, 7, 14, 91, 11, -8, -48, 12, 98, 97, 83, 120, 95, -37, 59, 26, 106, -15, 42, -12, -34, -106, -82, -26, -51, -122, 13, 9, 67, 24, 98, -27, -8, -36, 57, 86, -71, -109, 66, -66, -107, 99, -63, -87, 110, 10, 20, -15, 126, 20, -81, -18, -66, -125, 87, -1, -116, -108, -104, 97, 109, 50, 43, -67};
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
    msg.setTimeStamp(0.06071369423293227);
    msg.setSource(59632U);
    msg.setSourceEntity(180U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(127U);
    msg.seq = 1005648332U;
    msg.state = 173U;
    msg.error.assign("IBEOFFVQTPPCMKYPGCTNWIUZHXYPQZSULBLUQVPAS");

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
    msg.setTimeStamp(0.41022191990539725);
    msg.setSource(36122U);
    msg.setSourceEntity(2U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(141U);
    msg.seq = 1967173105U;
    msg.state = 243U;
    msg.error.assign("RXLAWSNWXLGJQHPJPZDJXIGGYLIDHHWNKQYB");

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
    msg.setTimeStamp(0.9455771526683026);
    msg.setSource(8132U);
    msg.setSourceEntity(162U);
    msg.setDestination(63188U);
    msg.setDestinationEntity(132U);
    msg.seq = 1367711790U;
    msg.state = 156U;
    msg.error.assign("XEVYBTFXGYCRGEVRSMIPPWCAWSGCSIYPQHLWPFTHCMJOWOSKKJVSDNZTAICFNZZSDYYQLMOIDIMGQPZKAJWFAZZBZJJKHBBSONFRLNKWXWCRDGTQDDPNGDYQLUYEZKLPPNLFKMISWAZEZQKHVVU");

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
    msg.setTimeStamp(0.26204832897484265);
    msg.setSource(12818U);
    msg.setSourceEntity(242U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(214U);
    msg.origin.assign("SIMIGVXIAWOFUWPLIWMRPFWIMJLMOKHKPDXJRWYZEQCXHBKJMQATTXJIJKJWKABCCZHFZCBGUTZMNOJLMONHVHMNSMTEDNJOYNUDPRFKCWBNOHDUDBZBRQRTGXROBMYDSKKHVPZWYLRVQZNXSXDI");
    msg.text.assign("RRKEFCEUAEBPCMNAOCEHKGPGVZTKNMKNVGQNXQSXVIGUABWESTBZLMHLPTHZRNCWMWDJMZMYSVED");

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
    msg.setTimeStamp(0.029552158503577175);
    msg.setSource(58713U);
    msg.setSourceEntity(199U);
    msg.setDestination(59745U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("RJGNUIBCOGUZBTGPPMMCBTLTUIQSGFWIVWACPZCHDHXPAJQKRDXPGZBNAYIZOIRFPPKXYGYAEWTNMYVUZDOLAEBMAXXOKOZOYFFLLEYTCRXVYEQMKMDQUZSDRUWEWRSQHLRPLNKCQWMOBRUMLXWAVBQZZSGDJIDAFHJLFYMJDCZFUDIXFXMNSJSORKVBBEVJGOFGVNFUKIVTWIGDAVNRBNLCLWHQEKHPJEYSTSHEANCOSJYVIQ");
    msg.text.assign("LICDSEOYJAZFTNJFPVQABNXFZBCKOGTUEPYIGPXAIFTUVABZWMPTKGKJLRNRNALPZKDYITVCGLSCJNWKUNHCBGFUMAKFMYIRHYRXBZDVOIHJBQWSOLVGMZSANPDMLPEHWRTSGAMDDGWIWQYYSOQEEETXVFXAUNRHRHLWQSWDZDXGTEZHPDXPMRCQEQIKHFXXHWVSJTFUWREQ");

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
    msg.setTimeStamp(0.6638932910542356);
    msg.setSource(38741U);
    msg.setSourceEntity(125U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("YKZJXXUODPPPIAHFUQYPBCWIPJNWIQNUCMFRBONVXRHNSHDTSGIWDCAGEYUXVCHZMEYWS");
    msg.text.assign("BSRLGPUNZVFEDOKXLEMUBUHDLROKCQKJXYHKOUQKSAWHEHRPDFAPNUSLXFXXJICXDTKSGWLNPXZTQBFTNQTEDHFBPMFOCIXTYACONRUVTTWDAVEDWCREWQQISMLYRDMNBWMOPMNCIGGWBGGELBPYWMVRQGQTMNMWUASZOGNII");

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
    msg.setTimeStamp(0.7003916296862215);
    msg.setSource(24569U);
    msg.setSourceEntity(93U);
    msg.setDestination(58730U);
    msg.setDestinationEntity(226U);
    msg.origin.assign("QZSGAWQKKCSMLPYNQRINDEFCJXBLYLKBZAFOPSRWEDETIONRRCJKMPDBUDJFUJVCXJFMSUMUXDVYOTIOFLIWUEVPURAMYEALYBEOXNJAVTFNUBZBGTEAHJTOCCXMFYYSCOAGAIGVXLOZTSTRYWHIFHVTWKPSQDCNWVYUIJFWUZPSQAFSXLBCTNDMALGRKVIGTWMEOHRRVZMMNQUHQZHDHPNRDZHKPDZJPBVGWGLL");
    msg.htime = 0.8912151648144826;
    msg.lat = 0.878181108746402;
    msg.lon = 0.7629261793734459;
    const char tmp_msg_0[] = {-35, -32, 93, 122, 36, -125, 20, -70, 29, 88, -56, -114, 94, -87, -25, -88, -46, -119, -12, 30, -67, -31, 107, -55, -100, 86, 66, -128, 97, 100, -111, 118, -59, -18, -103, 63, -67, -109, 108, -44, -120, 2, -124, -107, -26, -111, -63, -64, -127, -48, 19, -104, -3, -25, -128, 89, -71, -70, -91, 89, -18, -23, 1, 36, -6, -52, 67, 16, -12, 81, -23, 64, -4, 60, -110, -38, 22, -118, -40, -7, -54, -13, -127, 43, -99, 37, 43, -12, 36, 54, -39, 108, 95, 96, 99, 77, -58, -73, -111, 29, 24, 27, -110, -105, -14, -126, 95, 30, -27, 75, 94, -51, 64, -33, -53, 61, 117, 66, 60, -85, -82, 65, 88, 57, -23, -32, -33, 55, -104, 16, 61, -28, 38, -33, 25, 39, 36, 97, 117, 124, -105, -36, 116, -46, -64, -67, 30, 60, 111, -106, 6, 85, -116, -31, -81, 63, -43, 1, -10, 87, -84, -109, -14, -34, 61, -26, 69, 115, -72, 69, 29, -6, -36, -59, -88, 104, -77, -2, -5, 23, -104, -71, -58, -56, 55, 71, -87, -128, -31, -86, -95, 41, 111, -1, 112, -101, 121, -29, -66, 36, 2, 65, -88, -34, -57, -13, 51, 97, -125, 119, -92, -60, 6, -37, 43, -43, 112, 82, 112, -126, -49, -11, -5, 97, -56, -11, -2, 73, 109, 104, 66, 124, 48, 48, 5, -57, -114, 107, -107, -16, -76, 126, 35, -40};
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
    msg.setTimeStamp(0.29999900071377394);
    msg.setSource(24823U);
    msg.setSourceEntity(103U);
    msg.setDestination(34783U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("YWLABTOXOIBMDIZCAUXPSFUPVKNDLPAEMZTFXATET");
    msg.htime = 0.9936834424378336;
    msg.lat = 0.30176626238260396;
    msg.lon = 0.8592435708644403;
    const char tmp_msg_0[] = {-118, -86, 39, 40, -40, -108, 111, -49, -35, -11, -116, 84, -116, 5, 14, 6, 125};
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
    msg.setTimeStamp(0.9014170782263105);
    msg.setSource(53809U);
    msg.setSourceEntity(116U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("XVGUHMPBABXZ");
    msg.htime = 0.46993862115947993;
    msg.lat = 0.6005386075846125;
    msg.lon = 0.19007652846816292;
    const char tmp_msg_0[] = {-57, -66, -52, -22, -115, 81, 65, -59, 30, 100, -54, 97, 57, -12, 119, 74, -13, -117, -64, -77, 1, -39, -71, 109, -48, -75, 14, 16, 51, -36, -121, 84, -23, 10, 91, -53, 35, -26, 4, -108};
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
    msg.setTimeStamp(0.937553617141673);
    msg.setSource(46715U);
    msg.setSourceEntity(197U);
    msg.setDestination(629U);
    msg.setDestinationEntity(196U);
    msg.req_id = 43897U;
    msg.ttl = 62665U;
    msg.destination.assign("OINQXISTEWBCOZVWXOMRPDLNZIHURWXT");
    const char tmp_msg_0[] = {35, 98, -84, 36, 103, -43, 86, -1, -107, 94, -111, -24, 37, 123, 26, -46, -75, 26, 53, 10, -55, 13, -23, 78, 111, 83, -56, -29, 58, -31, -87, -106, 123, -82, -35, 107, -85, -48, 62, -59, 46, -118, 117, -59, -99, -92, -40, 109, -73, 101, 29, -125, 103, -76, 44, -106, -121, 59, 15, -45, 115, -49, 118, -74, -55, -65, -58, -53, -53, 35, -76, -37, -46, -13, 57, 74, 0, -99, 17, 36, -120, -12, 47, -33, -52, 126, -108, 96, -47, -109, 49, 119, 9, 81, 14, 10, 12, 12, 103, 67, -62, 126, -47, -106, 98, -114, 66, -67, 115, 91, -32, -106, -121, 83, 72, -6, 83, -19, -56, -93, 112, -57, 70, -84, 48, 63, -120, -22, -84, -101, -48, -48, -127, 85, 98, 36, 21, 41, -119, -80, 114, -72, 120, -13, -108, -121, -20, -78, -126, -127, -57, 63, -80, 47, 120, -30, 77, -73, 5, 116, 42, 123, -39, -116, 22, 111, 9, 97, -10, -53, 51, -33, 45, 116, -34, 41, -19, 91, 25, 44, 23, 29, 42, -99, 89, 73, -68, 89, 90, 70, 110, 40, -57, 55, 47, -86, 83, -20, -64, -3, 72, -92, -111, 31, 1, 93, -26, -75, 74, -6, 113, 94, -63, -71, 108, 72, -112, -7, 13, 50, -96, -81, 50, -115, -31, 90, -46, 8, 0, 24, -120, -100, 53, 93, 108, 1, -99, 57, -29, 113, -10, 14, 0};
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
    msg.setTimeStamp(0.8661593602140428);
    msg.setSource(23900U);
    msg.setSourceEntity(28U);
    msg.setDestination(7837U);
    msg.setDestinationEntity(150U);
    msg.req_id = 34299U;
    msg.ttl = 59058U;
    msg.destination.assign("ORVRRHWOPADYBIQYVZEFGUSTUJQMHKSVCSMXWXUAIEFPQFWVPJSXYSBQWYVHBUQURQDSRNAAHFLGCUCXTXFWFITCEMXH");
    const char tmp_msg_0[] = {4, -31, 101, -83, 25, 5, 58, -63, -11, 119, -114, 5, 64, 12, 77, -3, -125, 32, 33, -40, -78, -51, -60, 70, -115, 119, -67, -63, 24, 64, 40, 41, -91, 81, 89, -78, -60, 7, -52, 5, -105, 55, 37, -5, 115, -80, 109, -96, 120, 106, -127, -39, 7, 33, 72, -87, -68, 63, -55, -55, -67, -5, -88, -122, -21, -67, -122, -53, -37, 20, -4, -11, -88, 35, 125, -126, -5, -27, 119, -97, 20, -71, 99, -50, 53, -77, 65, -121, -22, 107, -109, -52, -23, 106, 40, 32, -1, -120, 25, -32, 112, 99, -60, -122, -73, -98, -8, -117, 0, 61, 79, -106, 107, -116, 111, -68, 60, 60, -107, 115, -107, -111, 82, 10, 50, 107, 79, -10, -105, -71, 81, -94, -35, 121, -33, 88, 81, -72, -121, -52, -30, 124, -112, 20, -92, 79, -76, -48, 69, -65, 95, -95, 34, 61, -20, 42, 0, -80, 125, -36, 11, -103, -42, -7, -102, 11, -52};
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
    msg.setTimeStamp(0.212931507198313);
    msg.setSource(6501U);
    msg.setSourceEntity(65U);
    msg.setDestination(25731U);
    msg.setDestinationEntity(0U);
    msg.req_id = 16767U;
    msg.ttl = 37785U;
    msg.destination.assign("CDMEUXNGZOKANKFRACBSQVEPVCWGFIZIZTWKGTDBYSJQSDRDTKOZEAISSGHLMNXLVUSYLQLTIMUFTAHTYHPDDXADOVASKKSMJDFCWBXAENUHHIBTNVGMNRQIPPRUCJYEWXUVQYLEDKCQUYOIZGUAIWFAZJGZMYJWFPVKKONVCFTHXBOFGEZJRQXPHRETSUXLLIBORSIHWPA");
    const char tmp_msg_0[] = {69, 65, -59, -55, 52, -71, -22, 26, 48, -58, -31, 51, 86, 98, -3, -27, 88, 115, 48, -53, 70, -31, 28, -11, 65, 18, 31, 1, 74, -121, -49, 10, -110, 104, -90, 47, -49, 52, 43, -74, -106, 29, 54, 86, 119, -1, 12, 109, 16, 17, -51, 61, -60, 107, 71, -126, -12, -80, 11, 14, 22, 65, 30, -68, -127, -110, 28, -14, -15, -113, -60, 3, 104, -87, -35, 68, 11, 123, -34, 126, 10, 67, -37, -118, -22, -90, 39, -20, -17, -73, 44, -12, -20, 69, -128, 76, -65, -30, 89, 39, 126, -126, -114, 20, -94, -88, 101, -126, 12, -113, -101, -28, -113, -14, 40, 79, 93, -55, -104, 11, 45, 61, 99, 118, 46, 1, 57, 120, 48, -79, -40, -75, 112, -52, 30, 71, 117, -34, -56, 108, 4, -125, -41, -45, -77, 73, 78, 92, 120, -35, 61, 125, 25, -105, -71, -121, -10, -59, 115, 79, -72, 31, -125, -7, -93, 103, -25, -121, 1, -2};
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
    msg.setTimeStamp(0.6549330287635233);
    msg.setSource(56451U);
    msg.setSourceEntity(222U);
    msg.setDestination(56295U);
    msg.setDestinationEntity(117U);
    msg.req_id = 4490U;
    msg.status = 210U;
    msg.text.assign("RGHKKEETTMCEALVIHHZSDOAODMNYLZPXILVVUYQJJIZMYVKSGATYGXFNBO");

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
    msg.setTimeStamp(0.37772142593321967);
    msg.setSource(59630U);
    msg.setSourceEntity(212U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(101U);
    msg.req_id = 58897U;
    msg.status = 249U;
    msg.text.assign("NNVJDKZRTRAYAEEDQYMYSHMKLQKMFPXQPPFYWZKIOZDTHLSCBHSFGAQANEHLBCYLTBRAMUOEIHOFFMYFXNMFDKDWMUWKVZYJGLXHAODYVZWMIAAJBOAOWXCZPTYQWTJVHEIRQTETFVCJPGYSWPHISNXGUHKLTBEMLKDSNZ");

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
    msg.setTimeStamp(0.07377729589264226);
    msg.setSource(8182U);
    msg.setSourceEntity(94U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(36U);
    msg.req_id = 64566U;
    msg.status = 160U;
    msg.text.assign("BMYETJVHIUGVPNRPBZKDILSEJEPCIFCRNOEKZOBUFDAQVDJKIUXXZVAOAYWIGQKTLOYHARPDJTFFXUKMGMAHAYNTWODUFTOVOASDULJLIWJSGBPRUZLNPBMCJETZKZASRMLXSJBHDBMLCHQBJDOGXWNCCTSZRHHVKPMHGYRADDZLNRFCGFICYQVKIXGWNSUQUQNGIKHYBPRNVXIXMMAPSGQOCJYEOWSEY");

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
    msg.setTimeStamp(0.8821599794136656);
    msg.setSource(888U);
    msg.setSourceEntity(69U);
    msg.setDestination(6543U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("KSDRYAVTAJCEMVKK");
    msg.links = 2118748452U;

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
    msg.setTimeStamp(0.3611503420881981);
    msg.setSource(40248U);
    msg.setSourceEntity(180U);
    msg.setDestination(30948U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("ELCEILVEQRDYMDZCXWBDLQTKTODILKJHWOUBFBCJFQRNUDQGPHJFRCYHBSXLFRQNKSAVRBHNNGRNRVKTTTALJYZLHJFPLAPBIXOSZEEOSCYVKCGPKYUDWUTXMMASXICSPDUPQJSBOFICEWHPSYPREOWMYQTKZALBTSNIJIYVHQMJYINWPATVUQNJFYKZCLNUPXSXWEIRMXEHOAZXAFJGCFKTUAVIU");
    msg.links = 3166663090U;

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
    msg.setTimeStamp(0.04483696984593444);
    msg.setSource(32796U);
    msg.setSourceEntity(246U);
    msg.setDestination(53835U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("FYOCAKCARHVNSHHKOYDJOVNIYWQMTCRXGRQLVOPALBIZNDPHKME");
    msg.links = 1097286722U;

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
    msg.setTimeStamp(0.12092837823119507);
    msg.setSource(33246U);
    msg.setSourceEntity(246U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(57U);
    msg.groupname.assign("LUULVNKIJDUWBIZOOSSHLXCUMTDHRVPGXQYSBCRCBKKB");
    msg.action = 180U;
    msg.grouplist.assign("MWPSWRROXDKKHXQDTOSKUPFVFQFUZAYRULCOYRWPHSLBLGDMICBKGVJJROSOWGQQECUMJFAIVLYXYYCOIOUQKPQXVGMULNZZTKBZUXDWZITBOBTSXXWJAFHBRLAGAHVZWAYHDEMCNSVQUNMJLOCVGTJPEFPEXBQNSFHZAVNMXYKMWIEHGDTIGPCYPLTWRCBEYNTDZSKDXBSCNMGZIDTROFPUIHECGRZNMS");

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
    msg.setTimeStamp(0.10634900099812872);
    msg.setSource(44612U);
    msg.setSourceEntity(40U);
    msg.setDestination(65352U);
    msg.setDestinationEntity(166U);
    msg.groupname.assign("NYRFZHIQWVMARUQRUIACCULQUUQTGHKSJCFEKONUTFMJEINAAIPMCYLSDGHHEPBPZLQRLBBXXTRLBTDVXEWAEGYOPDNMRIXXYGLHOPACQNKSHFWSKVDOCKDIDFKUQVZZAZQSJYKMVOXRAMOOESKSTNPRMHGCZNFGIXBNBLYCVBXKHJOEQX");
    msg.action = 44U;
    msg.grouplist.assign("LVQDALUYJWTDOFOCPDMWCMOPPZYJZZTJUXZFUMTDTZDPGJANXUQKWCOSNMENKXIVNMEPBXVSPHNSNGEMUIIARFNYKGYHDYRPHQJQITCFRXSEGCGSUBTHJBUOGWCWQNJELHDHGB");

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
    msg.setTimeStamp(0.6584805483351849);
    msg.setSource(30679U);
    msg.setSourceEntity(71U);
    msg.setDestination(42380U);
    msg.setDestinationEntity(167U);
    msg.groupname.assign("FCVKMHFGVBZHSIUDQKTDNCFLAZENJ");
    msg.action = 47U;
    msg.grouplist.assign("EWLRSRGCZVEZHOWXEOWRFDAPBRGRGQUXXBFFUCTTVOSEQQAJXYELIGZZMBWQIGKXFDXPKYNJXDUSFCSTFRNNIKTUTOCMMHNDEBYXDYVABHDSNKKMKCGLMTRNFNISALUACLOQSVTIZHQUURDEFSHHHYVVNPUCMCBWWMIZSXJADWBPPXJLYAGGOPMKNUCPGZWJQQILZKHYPTSWYVJQOZEYFDLUOLOGEVNJE");

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
    msg.setTimeStamp(0.7554379297809705);
    msg.setSource(20407U);
    msg.setSourceEntity(151U);
    msg.setDestination(56725U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3008378231402763;
    msg.sys_src = 21762U;

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
    msg.setTimeStamp(0.7425140066689442);
    msg.setSource(39687U);
    msg.setSourceEntity(142U);
    msg.setDestination(31738U);
    msg.setDestinationEntity(62U);
    msg.value = 0.321057180566956;
    msg.sys_src = 9808U;

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
    msg.setTimeStamp(0.479193235121782);
    msg.setSource(65394U);
    msg.setSourceEntity(1U);
    msg.setDestination(20259U);
    msg.setDestinationEntity(103U);
    msg.value = 0.06082655100320744;
    msg.sys_src = 2391U;

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
    msg.setTimeStamp(0.8377914712875674);
    msg.setSource(8977U);
    msg.setSourceEntity(220U);
    msg.setDestination(28031U);
    msg.setDestinationEntity(27U);
    msg.value = 0.28339819716392933;
    msg.units = 148U;

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
    msg.setTimeStamp(0.868195629402043);
    msg.setSource(33819U);
    msg.setSourceEntity(23U);
    msg.setDestination(16819U);
    msg.setDestinationEntity(103U);
    msg.value = 0.08930122567210241;
    msg.units = 23U;

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
    msg.setTimeStamp(0.7854674602960576);
    msg.setSource(19015U);
    msg.setSourceEntity(242U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(2U);
    msg.value = 0.011918989584114081;
    msg.units = 198U;

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
    msg.setTimeStamp(0.8468617794550531);
    msg.setSource(6201U);
    msg.setSourceEntity(245U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(9U);
    msg.base_lat = 0.15693745156735184;
    msg.base_lon = 0.5059264645893127;
    msg.base_time = 0.10324296918499865;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 36748U;
    tmp_msg_0.priority = -71;
    tmp_msg_0.x = -17807;
    tmp_msg_0.y = 28597;
    tmp_msg_0.z = 19405;
    tmp_msg_0.t = 15794;
    IMC::TransmissionRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 49016U;
    tmp_tmp_msg_0_0.comm_mean = 199U;
    tmp_tmp_msg_0_0.destination.assign("UDIPLBXOYGIEJALDRMKZQUKTMPHTTIXMOQYHHAXVIFXAESNCGZPMJKZTNWCGPKKSUNNYCRZXTPWKFWVEPVBFHNMCXUAVHGHYDQSIWPTXRHARJIUQDJYIZJZQSZZVGNDLVFIRNSLVOLJAENXEPZGDVQOHOSCPTEALSRJBESJMYMRWJJOXEFITTOIYNXFUFNREVCLOBUYRQCOWBFADKASKMBWPUQYGMKLDHBWCUER");
    tmp_tmp_msg_0_0.deadline = 0.04149079787231158;
    tmp_tmp_msg_0_0.range = 0.5839880279000046;
    tmp_tmp_msg_0_0.data_mode = 10U;
    IMC::LinkLevel tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.30923916238117;
    tmp_tmp_msg_0_0.msg_data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.txt_data.assign("GAXMSTDCEYADFABEHYFMETODWSKDOJYLUFPFXMLVPCGJEHNFMRRTQNXNNFYJLVTVDJBTUUODIAAXMHHPKRGITTJJLWIJWRZRVUUYSVKNPSWYCFLKZWQBWEJZGZAXPAJMCMRSIKQMQGVPHHQARIESIPLXUOEZAVJCTCIUUSWHULGWTACCISSQHGKWODZKDXYQKVRHOYLQPNVPQLRGBSXHFBROMEFZITXIZZBPUGMNDYBNKLYCXEZC");
    const char tmp_tmp_tmp_msg_0_0_1[] = {90, 106, 80, 63, 29, -89, 59, 108, 107, 32, 50, -59, 120, -49, -69, 74, -119, -121, -78, 92, -125, -83, -43, -66, -42, 102, 89, 120, -112, 83, -6, -103, 69, 28, -57, -105, 109, 113, 7, 107, -105, 96, 69, 29, -77, 113, -83, 76, 71, 62, 105, -20, 110, -93, -78, -82, -106, -124, -117, 121, -74, -28, -67, -52, -104, 75, 83, 101, 105, -60, -115, 12, 59, -12, 121, 32, 29, 32, -72, -112, -110, 50, 14, -78, -110, 26, -74, 77, 122, 39, -51, 71, -85, 71, -27, 85, 39, 5, 33, -16, 72, -39, -105, 52, -74, -113, 42, -73, -63, -122, 118, 103, 73, -43, -3, 75, -68, 7, 7, -67, 123, -44, 103, 8, -114, 22, -92, 63, 44, -86, -115, 20, 19, 88, -124, -61, 45, 65, -58, -37, -125, 98, 74, -70, -33, -72, 30, 58, 24, -43, 7, 34, 123, 105, 53, -64, 120, 95, 45, 37, -79, -77, 31, 119, -78, -104, 7, -84, -49, 11, 98, 16, -83, 96, -52, -44, -80, 26, -36, -104, 53, 52, -126, 55, -23, 116, 10, 1, -1, 70, 106, 32, 9, -97, 124, -15, -63, 55, 110, -59, -80, -30, -112, 102, 31, -48, 80, -89, -51, 58, 15, 67, -20, -18, -121, 115, -73, 57, -102, -7, 45, -19, -52, 69, 124, 115, -102, 111, -45, -90, -77, -13, -38, -43, -43, 77, 120, -47, 38, 45, 59, -47, 107, 9};
    tmp_tmp_msg_0_0.raw_data.assign(tmp_tmp_tmp_msg_0_0_1, tmp_tmp_tmp_msg_0_0_1 + sizeof(tmp_tmp_tmp_msg_0_0_1));
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
    msg.setTimeStamp(0.005776989920046827);
    msg.setSource(43718U);
    msg.setSourceEntity(50U);
    msg.setDestination(6883U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.41015713264079157;
    msg.base_lon = 0.343309566310101;
    msg.base_time = 0.6081174065561827;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 2836U;
    tmp_msg_0.priority = 114;
    tmp_msg_0.x = 1738;
    tmp_msg_0.y = -25235;
    tmp_msg_0.z = 27861;
    tmp_msg_0.t = 30252;
    IMC::EntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KXVDQMHDYKRWWECMCNJFGBENSHLHGKVEQMJIKLORCUTHCTPNQYVAOZXGQJSCSZBQUVTLLSK");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0917582433306593);
    msg.setSource(25099U);
    msg.setSourceEntity(153U);
    msg.setDestination(20021U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.29729126141995543;
    msg.base_lon = 0.6692566256143933;
    msg.base_time = 0.6789712851108922;

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
    msg.setTimeStamp(0.14491945545550278);
    msg.setSource(29405U);
    msg.setSourceEntity(95U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(156U);
    msg.base_lat = 0.16402144718649814;
    msg.base_lon = 0.36205238862821243;
    msg.base_time = 0.39216971132175626;
    const char tmp_msg_0[] = {82, -19, 14, 56, -21, -52, 115, 105, -22, -95, 36, 113, 95, 97, 95, 30, 115, -69, 0, 53, 20, 2, -57, 47, -24, 95, 77, -35, -27, 38, 71, 33, 105, -88, 109, -25, -99, 121, -37, -108, -61, 12, 107, 95, -68, 82, 89, -122, -9, 70, 27, -94, -49, -46, -68, 22, 0, -33, -52, 86, -32, -94, -79, -88, 102, -121, 62, -20, 84, 61, -45, 107, -20, -113, -102, -96, 44, 121, -63, -120, 21, -5, 76, -15, 36, 1, -60, 56, 72, 64, 74, -76, 87, 5, 14, 23, -23, -24, 89, -53, -112, -49, -22, 47, -81, 105, 29, -57, 92, 83, -11, -56, 61, 4, -62, 40, -105, -109, 120, 84, -17, 116, -81, 47, -115, 119, 66, 50, -2, 46, -43, 61, -54, 57, 110, -113, -12, 106, -122, 10, -122, -31, -59, -115, -113, -60, -90, 124, 62, 6, -13, -49, 54, 86, 102, 17, 117, -91, -5, -13, -6, 118, 77, 59, 35, 51, -3, 71, 52, -43, 116, -27, -34, -50, 32};
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
    msg.setTimeStamp(0.5603989921640321);
    msg.setSource(9634U);
    msg.setSourceEntity(69U);
    msg.setDestination(41941U);
    msg.setDestinationEntity(39U);
    msg.base_lat = 0.5844907254738608;
    msg.base_lon = 0.6267716704360744;
    msg.base_time = 0.18553079043636955;
    const char tmp_msg_0[] = {35, 86, -100, -32, -125, 114, -68, 55, 112, -49, 94, -14, 15, 35, -10, 98, 103, 67, -95, 35, -81, -30, -125, -33, 67, -65, 32, 5, -1, 56, -18, -27, -95, 92, -106, -115, -1, 11, -7, 62, 41, 22, 78, -108, 70, -93, -116, 73, 101, 75, -29, 22, -116, -54, 37, 126, 124, -104, 105, -90, -105, 98, 18, -79};
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
    msg.setTimeStamp(0.30373113208208025);
    msg.setSource(29928U);
    msg.setSourceEntity(165U);
    msg.setDestination(36149U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.3569426369634743;
    msg.base_lon = 0.0033395393826777253;
    msg.base_time = 0.5258154879434904;
    const char tmp_msg_0[] = {-104, 1, -63, -42, -11, 22, 21, 77, 16, 53, -41, 121, 43, -24, 75, -38, 114, -125, -96, 82, 14, 41, -73, -10, 72, 31, -42, 6, 15, -64, 9, 117, 114, 124, -104, -3, -122, -69, -124, -105, 79, 17, -68, 75, 125, 97, -32, 24, 102, -73, -91, -99, 7, 104, 26, -25, -105, -71, -71, -10, -93, 101, 31, 82, 107, -27, -79, -73, -110, 115, -26, 103, 21, 10, 95, 47, -36, -87, 81, -2, -43, -7, -33, 101, -85, 17, -67, -103, 60, -18, -15, -26, -31, 10, -100, -101, -9, 10, 117, -113, -24, 119, 106, 65, 58, 36, 96, 99, 49, -102, -41, -82, 66, -26, -128, -34, 9, 52, 69, 38, 86, -36, -21, -79, 40, 40, 69, -111, -59, 104, 48, -98, 67, -84, 62, -41, -93, 100, -108, 33, -115, -52, -43, -102, 85, 84, 69, 44, 59, -123, 117, 105, -76, 102, 104, 61, -68, 91, -72, 73, 9, -109, -1, -41, -32, -77, 26, 55, 27, 16, 79, 18, -78, 28, 74, 16, 23, 119, -126, -46, 58, 28, -91, 84, 6, -79, 113, 95, -70, -95, -7, -66, 92, 98, 30, -80, 7, -23, -77, -55, -49, -119, 100, 69, 30, 60, 86, 49, 21, 62, 120, -120, 102, -119, 119, 77, -124, 28, 11};
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
    msg.setTimeStamp(0.08183908984835464);
    msg.setSource(7274U);
    msg.setSourceEntity(192U);
    msg.setDestination(10608U);
    msg.setDestinationEntity(5U);
    msg.sys_id = 4961U;
    msg.priority = 25;
    msg.x = -19354;
    msg.y = 10227;
    msg.z = -3785;
    msg.t = 31471;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 17439U;
    tmp_msg_0.lat = 0.4027867335592412;
    tmp_msg_0.lon = 0.4128933509603103;
    tmp_msg_0.z = 0.13874199101466445;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.speed = 0.196444864788906;
    tmp_msg_0.speed_units = 127U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7560042249179905;
    tmp_tmp_msg_0_0.y = 0.9081264530853508;
    tmp_tmp_msg_0_0.z = 0.503430020097751;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("LFZZAAFJRVSIIBIURHDLBLCOKVHCEEHVWVOMWMXNLDZMJEFNIEDFSMVHZTJLXLWTCUQDNCJIASZBUZFBQQCWZYTV");
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
    msg.setTimeStamp(0.7676838181813326);
    msg.setSource(54563U);
    msg.setSourceEntity(52U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(106U);
    msg.sys_id = 63455U;
    msg.priority = -4;
    msg.x = -15284;
    msg.y = -5971;
    msg.z = 5441;
    msg.t = -25154;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 102U;
    tmp_msg_0.system.assign("YABBKLXTJOAXJWYEMXBBWCEXUMALDWVHJKSGFSCPDIBEEKUJARDRGMKYUROUVQVYTHUZHTLFGCQHFOYIPRJMCFMUXQIKLNNBFAVVIXNIWUKGGNTNRFTZXIUPTPSCZHHQYBOWXCGRZLEVFSLPCSQVOTONEQWDHCNLIMODZZSQVTQKWWEPKMJWNSMLSHPNVTOJJKROJYYZIBFJRMVBGD");
    tmp_msg_0.range = 0.0020584005628347946;
    IMC::VehicleMedium tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.medium = 180U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0496429131270717);
    msg.setSource(15814U);
    msg.setSourceEntity(112U);
    msg.setDestination(32309U);
    msg.setDestinationEntity(168U);
    msg.sys_id = 16117U;
    msg.priority = -33;
    msg.x = -25574;
    msg.y = 6185;
    msg.z = 11716;
    msg.t = 7921;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.2694350086528806;
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
    msg.setTimeStamp(0.28713245694763556);
    msg.setSource(8360U);
    msg.setSourceEntity(166U);
    msg.setDestination(24849U);
    msg.setDestinationEntity(38U);
    msg.req_id = 22527U;
    msg.type = 68U;
    msg.max_size = 2797U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8066579861833936;
    tmp_msg_0.base_lon = 0.1266037103578701;
    tmp_msg_0.base_time = 0.6926536044573481;
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
    msg.setTimeStamp(0.1372265137299027);
    msg.setSource(31575U);
    msg.setSourceEntity(104U);
    msg.setDestination(15643U);
    msg.setDestinationEntity(231U);
    msg.req_id = 56910U;
    msg.type = 12U;
    msg.max_size = 27243U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9077811841109776;
    tmp_msg_0.base_lon = 0.5349731196920385;
    tmp_msg_0.base_time = 0.5667947719333929;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 60664U;
    tmp_tmp_msg_0_0.priority = -24;
    tmp_tmp_msg_0_0.x = -6603;
    tmp_tmp_msg_0_0.y = -25653;
    tmp_tmp_msg_0_0.z = -10753;
    tmp_tmp_msg_0_0.t = -242;
    IMC::Launch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 54797U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7908933576429409;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7135036144584815;
    tmp_tmp_tmp_msg_0_0_0.z = 0.38103157951396804;
    tmp_tmp_tmp_msg_0_0_0.z_units = 144U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.04992414430331582;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 132U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ESXGTYJNPOYHKAIDARYSOPQGZTWKVPDDUVLUVNEUMHIWFP");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.19009163807593543);
    msg.setSource(33522U);
    msg.setSourceEntity(56U);
    msg.setDestination(31413U);
    msg.setDestinationEntity(182U);
    msg.req_id = 6179U;
    msg.type = 227U;
    msg.max_size = 53971U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6141131456614448;
    tmp_msg_0.base_lon = 0.005893376698313468;
    tmp_msg_0.base_time = 0.680494677054359;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 36150U;
    tmp_tmp_msg_0_0.destination = 40456U;
    tmp_tmp_msg_0_0.timeout = 0.6371217236039131;
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9745476055885298;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8598196546400257;
    tmp_tmp_tmp_msg_0_0_0.z = 0.10064106246805471;
    tmp_tmp_tmp_msg_0_0_0.z_units = 247U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6724095755186725;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 85U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.6868211495378228;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.23070209039363354;
    tmp_tmp_tmp_msg_0_0_0.width = 0.7506798964823661;
    tmp_tmp_tmp_msg_0_0_0.length = 0.7763519868356965;
    tmp_tmp_tmp_msg_0_0_0.coff = 105U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.05033027486530839;
    tmp_tmp_tmp_msg_0_0_0.range = 20737U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 41U;
    tmp_tmp_tmp_msg_0_0_0.flags = 64U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("THFXZZJZGKVTCGYLCOBYBXHLSOZFFOCFBJULFJSUQZIHFAEZWOSBCSDEISPMITRSKVTLKOEWVMRQRFHIPGEOVLJPYCNQYBBGGIMYIR");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.24903763811704638);
    msg.setSource(21484U);
    msg.setSourceEntity(37U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(52U);
    msg.original_source = 9463U;
    msg.destination = 46478U;
    msg.timeout = 0.3362553851527498;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.5646055083550625;
    tmp_msg_0.ay_cmd = 0.3656506765482489;
    tmp_msg_0.az_cmd = 0.3568920196237272;
    tmp_msg_0.ax_des = 0.6087360653998172;
    tmp_msg_0.ay_des = 0.4759060682352596;
    tmp_msg_0.az_des = 0.8605012236962759;
    tmp_msg_0.virt_err_x = 0.008900346503886714;
    tmp_msg_0.virt_err_y = 0.03333904155449352;
    tmp_msg_0.virt_err_z = 0.8068002045957745;
    tmp_msg_0.surf_fdbk_x = 0.31424570051698986;
    tmp_msg_0.surf_fdbk_y = 0.5115346278967904;
    tmp_msg_0.surf_fdbk_z = 0.3437464466629927;
    tmp_msg_0.surf_unkn_x = 0.5763194110415709;
    tmp_msg_0.surf_unkn_y = 0.07184830891823668;
    tmp_msg_0.surf_unkn_z = 0.4488071536014673;
    tmp_msg_0.ss_x = 0.23345439886355235;
    tmp_msg_0.ss_y = 0.7309900995425195;
    tmp_msg_0.ss_z = 0.7245991252590944;
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
    msg.setTimeStamp(0.888033640524305);
    msg.setSource(39013U);
    msg.setSourceEntity(20U);
    msg.setDestination(11381U);
    msg.setDestinationEntity(107U);
    msg.original_source = 62381U;
    msg.destination = 27358U;
    msg.timeout = 0.2605992010242164;
    IMC::ManeuverDone tmp_msg_0;
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
    msg.setTimeStamp(0.016886149535288775);
    msg.setSource(35472U);
    msg.setSourceEntity(136U);
    msg.setDestination(38420U);
    msg.setDestinationEntity(65U);
    msg.original_source = 8057U;
    msg.destination = 52130U;
    msg.timeout = 0.3366181723390016;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7518771758953282;
    tmp_msg_0.base_lon = 0.173608639256412;
    tmp_msg_0.base_time = 0.763370439759856;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 16866U;
    tmp_tmp_msg_0_0.priority = -47;
    tmp_tmp_msg_0_0.x = -10196;
    tmp_tmp_msg_0_0.y = 31567;
    tmp_tmp_msg_0_0.z = -13812;
    tmp_tmp_msg_0_0.t = -23946;
    IMC::PulseDetectionControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 12U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.9235724809820798);
    msg.setSource(63762U);
    msg.setSourceEntity(231U);
    msg.setDestination(474U);
    msg.setDestinationEntity(240U);
    msg.type = 233U;
    msg.comm_interface = 41112U;
    msg.model = 33398U;
    msg.list.assign("QBRYRSRUUJWETGKQPGMNOAUBZRHGQSLHFNXNDHQYTRWCDHIPAFKAVJHMYDBZOPKUDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.8923467874053362);
    msg.setSource(56611U);
    msg.setSourceEntity(165U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(150U);
    msg.type = 141U;
    msg.comm_interface = 54709U;
    msg.model = 40786U;
    msg.list.assign("BHJSMSPOETNWFYVIEDEXMCYKUCMRZVVGJAVNBAHJZCGCJHLRLLYPFVKMYOWSOIKFHAXDBUKQBBTUPFQCPISIDWBLTUOBGVOHCIQMJHPHYGJZOQPZOSTWAMNZRLUDAWLNUIXUVPYRFDNRXBDYSFAKPDGDKBZCQDMIVGJRIOWLRNHZDTKSGLCTQFALAEKHGQXUTPOYEVXFQBNTQXZTJGVEROHLMWPSKNGJMIZCYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.269607309672217);
    msg.setSource(38567U);
    msg.setSourceEntity(247U);
    msg.setDestination(335U);
    msg.setDestinationEntity(7U);
    msg.type = 46U;
    msg.comm_interface = 44627U;
    msg.model = 34769U;
    msg.list.assign("MWUNVSOCRSZUCRBXKWCBUGBLNYSFXMFKEXOLOFUOPYNEQXLNBRPYGXJQYNJIPGMPEKOKCPFAUVPTGCYVTHDVCBTHJFQKLWVEFSIDHHZQXDPTHADIJTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.7165125433046515);
    msg.setSource(38810U);
    msg.setSourceEntity(107U);
    msg.setDestination(56071U);
    msg.setDestinationEntity(1U);
    msg.type = 82U;
    msg.req_id = 1365564353U;
    msg.ttl = 42085U;
    msg.code = 59U;
    msg.destination.assign("YGFYQGTGOBMQXXNIKSCAAFVKXFBFFQLVZEMIBTSKSMPAQWNRQUDZYZAKFNOZUDBMFTRRDQENHHYHGWKSYPVLOEZOTHQWLJIIPHXIIEVENWFFMLUJHYQEVJCDWKJLNSTJOOGBKBBPJTCTUEYBPUWOSWPUUCCSAYJAKVUDIEMHYZMSEDARTKIZFMNPZYPQOSAWCBBDUSNIRONECZGRHXAVLXZLMOJTJRALGWRGNCXCIDHPKWUGXVVQGTPHRJCVM");
    msg.source.assign("LSKUUJNWURRSKSHNOVDXIJYGXSZXWMVNIWUKTFAKNUCOFJLBDATUQJTPDYNNBOVJIHZOTPARTQGLMLHJOEJXEVFKWICBSZCFSRIJAABETTPWANQFYNDPFVDHGTFUHPLKBHXNLOLKMFCYYAPBYJVSMMSKGBDVYQOPWHGCCJXZEHGOXMWEIRMVFBLCWXZGWRTOUQICGZQRDHAGEEBA");
    msg.acknowledge = 249U;
    msg.status = 206U;
    const char tmp_msg_0[] = {-105, -88, 120, 30, -78, 74, -118, 23, 17, -96, 80, 72, 86, 87, -10, 13, -91, 74, -23, 121, 72, -14, 115, 13, -70, -61, -54, -108, 114, 111, -6, 101, -116, -23, -23, 58, 124, -66, 90, -16, -118, 1, -6, 109, 94, -121, 54, 27, -18, -13, -97, 110, -39, 8, 118, -90, -33, -127, -85, -88, 27, -49, 73, -69, 39, -95, 10, 41, -125, 105, -90, -119, 125, -22, 23, 30, -93, -36, 1, 33, -103, 77, 7, 111, -88, 55, -77, 39, 118, 113, -109, 30, 58, 125, 20, 63, -37, -51, 113, 48, 98, 17, -113, -39, -65, 68, -40, 120, -68, -83, 89, 114, 39, -5, 40, 36, 68, 31, 6, 52, -14, -46, 95, 42, 32, -74, 120, -110, 18, -87, 114, 76, -39, 31, 63, 105, 89, -5, -19, -79, -14, -60, 3, -75, -58, -44, 5, 94, -36, -108, 68, 56, -68, -88, -110, 98, -86, -82, 54, 45, 92, 92, -48, 125, 0, -67, 40, -109, -57, 36, -80, 74, 89, 49, 12, -128, -111, -85, -47, -73, -88, -19, 91, 95, -72, -92, -83, 89, -72, -48, 38, -34, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.05108267896460161);
    msg.setSource(11675U);
    msg.setSourceEntity(157U);
    msg.setDestination(30885U);
    msg.setDestinationEntity(206U);
    msg.type = 59U;
    msg.req_id = 4257514046U;
    msg.ttl = 51058U;
    msg.code = 104U;
    msg.destination.assign("EKJLDYMMDSHQSTIPQLBVOXOYLYHCGVKYWJRFTHBJXZGPVYLNPQHCKTWASSTWOETYACMHBFGBBJELGJAXOVKRCZKDRQXMTJFZEOIKIVUMQQFAVGLUOUCAOJRAZCBNDIRTXTZGJTDESGZEICSMVYPWDNINNVHONLXRIYMFPSQWWFDRXUSRNWBUHUCBPUXFQKKVSZPZA");
    msg.source.assign("EFKYTNKUCXFOJMDEFWMIISEQZRXGZTDBVRIPCHUWCSCJBHHMHKSFCBXKVCEFZTAQFZOPFJALTYZOATWLRQKARFQWSHAWIPGORTUJPTDILGTKDLDOMQEWYVKQVJOYRAXEZYIYMUDVNPYKSESFNO");
    msg.acknowledge = 153U;
    msg.status = 18U;
    const char tmp_msg_0[] = {-112, 31, 2, 60, -128, -98, 40, 49, 92, -21, 68, -75, -43, 103, 115, -34, 66, -54, -87, 11, 7, -99, -4, 92, -97, -68, -41, -115, -51, 28, 29, -83, -37, -65, 84, 100, 78, -92, 89, 120, 18, -14, -71, -115, -110, -94, -23, 117, 37, -58, -47, 25, 64, 74, 16, -82, -36, -39, -46, 3, -67, 60, 107, -84, 43, 30, 77, -4, -33, 14, -52, -72, -72, -16, 116, -114, 111, -3, -33, 10, -121, -56, 89, 45, -74, -22, 107, -37, -48, -25, 44, -94, 120, -33, -44, -59, -48, 1, 101, -101, -74, -73, -61, -102, -64, -116, 94, 22, -77, 13, 65, -23, 44, 94, -32, 58, -101, -52, -35, 46, -58, -127, -124, 71, -120, -119, -59, 97, 102, 124, 29, -36, 97, 4, 13, -20, 39, 119, -50, -74, 104, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.3824259024044495);
    msg.setSource(41594U);
    msg.setSourceEntity(53U);
    msg.setDestination(26634U);
    msg.setDestinationEntity(73U);
    msg.type = 202U;
    msg.req_id = 50141385U;
    msg.ttl = 42240U;
    msg.code = 76U;
    msg.destination.assign("MEGYNDMVRSKGZFSGWLVHSLLXAQWKYRCADIXJKORBOKRBZWLFRIOMAOZGNFJEXOCBQJJHZIUILVNCRWZYDDGPEQQZUNCWZERHTLPTPTHVVWWCIHTKPAKECVMAQDIPUWQCJJLGVYLFYBUOXMYBOSNKHRUPOPAQFRCXJ");
    msg.source.assign("UGKRSLSCKEAMOHUL");
    msg.acknowledge = 137U;
    msg.status = 94U;
    const char tmp_msg_0[] = {37, -117, -73, 68, 93, -85, -18, 114, 16, 83, -54, -97, 85, 70, -106, 67, 0, 123, -127, -113, -27, 8, 19, 48, 82, 107, 54, 36, -34, -53, 108, 0, 82, 77, -87, -15, 107, 77, 37, 116, 10, -46, -32, 104, 58, 33, 38, 87, -29, -120, 64, 52, -72, 67, 70, 21, 35, 20, 98, -28, 118, -108, -112, -39, 55, 56, -125, -19, -119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7385493575126344);
    msg.setSource(27058U);
    msg.setSourceEntity(4U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(92U);
    msg.id = 84U;
    msg.range = 0.14884429234640573;

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
    msg.setTimeStamp(0.9633293693344338);
    msg.setSource(25178U);
    msg.setSourceEntity(152U);
    msg.setDestination(18985U);
    msg.setDestinationEntity(10U);
    msg.id = 119U;
    msg.range = 0.7758648679815838;

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
    msg.setTimeStamp(0.5664589038016786);
    msg.setSource(29493U);
    msg.setSourceEntity(183U);
    msg.setDestination(4998U);
    msg.setDestinationEntity(7U);
    msg.id = 88U;
    msg.range = 0.4810067429590983;

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
    msg.setTimeStamp(0.8471570646514258);
    msg.setSource(17067U);
    msg.setSourceEntity(106U);
    msg.setDestination(48477U);
    msg.setDestinationEntity(217U);
    msg.beacon.assign("TQMUHSHTWDUUMTVBHMOLSWKS");
    msg.lat = 0.3009251384508089;
    msg.lon = 0.11288563068744406;
    msg.depth = 0.979903094203301;
    msg.query_channel = 7U;
    msg.reply_channel = 36U;
    msg.transponder_delay = 4U;

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
    msg.setTimeStamp(0.13997260370049402);
    msg.setSource(16235U);
    msg.setSourceEntity(158U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("BUBJZGPCTKEHWEBKXCPORNXP");
    msg.lat = 0.7883498151642879;
    msg.lon = 0.44872726051619327;
    msg.depth = 0.9833889781725619;
    msg.query_channel = 26U;
    msg.reply_channel = 68U;
    msg.transponder_delay = 48U;

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
    msg.setTimeStamp(0.8600919828238471);
    msg.setSource(50445U);
    msg.setSourceEntity(101U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("QTGVFFRPBXJZEV");
    msg.lat = 0.9042803898257707;
    msg.lon = 0.6701898899114085;
    msg.depth = 0.9886031140720435;
    msg.query_channel = 81U;
    msg.reply_channel = 174U;
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
    msg.setTimeStamp(0.6054331577627996);
    msg.setSource(2475U);
    msg.setSourceEntity(154U);
    msg.setDestination(59245U);
    msg.setDestinationEntity(5U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.10116753905827036);
    msg.setSource(154U);
    msg.setSourceEntity(96U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(139U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.28763785867230673);
    msg.setSource(49938U);
    msg.setSourceEntity(104U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(116U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.9021426713310708);
    msg.setSource(21654U);
    msg.setSourceEntity(81U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(76U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 34351U;
    tmp_msg_0.lat = 0.741170069963877;
    tmp_msg_0.lon = 0.3892211154888955;
    tmp_msg_0.z = 0.19568385691338241;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.speed = 0.173368020340672;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.bearing = 0.49361603542899946;
    tmp_msg_0.cross_angle = 0.6785144111600373;
    tmp_msg_0.width = 0.7925606714717495;
    tmp_msg_0.length = 0.8580896876078205;
    tmp_msg_0.hstep = 0.9070440816926459;
    tmp_msg_0.coff = 38U;
    tmp_msg_0.alternation = 147U;
    tmp_msg_0.flags = 12U;
    tmp_msg_0.custom.assign("NEGQCKEAKNQIKLXBZKDZKUWROUYVNBRJCFIMSPJUZELNRDUJBHN");
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
    msg.setTimeStamp(0.5376201622645228);
    msg.setSource(61031U);
    msg.setSourceEntity(175U);
    msg.setDestination(2304U);
    msg.setDestinationEntity(202U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("HUAALXWMBDVJQUFKINBLTEEGRVXYUTTSKHOZMWTXNXEZXWIRPLFTNQQMCBDPHVLQGUKQFEBSHUGNQZPZOJRYOAYFDJYRELXVYQFNHMYDROYG");
    tmp_msg_0.htime = 0.21188228529261144;
    tmp_msg_0.lat = 0.6005255458113946;
    tmp_msg_0.lon = 0.03979346072384182;
    const char tmp_tmp_msg_0_0[] = {51, -112, -85, 101, 33, 104, -69, -56, 94, -105, 123, 92, -60, 113, 122, -106, -67, -93, 94, -88, 37, 94, -91, -105, 2, 16, -88, -56, -1, -126, 13, -107, -74, -101, 93, 90, -50, -104, -46, -6, -56, -33, -7, 29, -11, 3, -6, -17, -113, -63, -8, 43, 33, -40, 64, 82, 58, 38, -22, 70, 90, -112, 37, -48, 116, 116, 100, 82, -24, 24, -58, 40, -19, -117, 77, 14, 100, 86, 82, -24, -75, 104, 68, -30, -43, 113, -33, 22, -10, 45, 28, -97, 22, -12, -85, -22, -57, 55, 36, -57, 113, -42, 48, 4, -18, -15, -79, -88, -85, -28, 17, 67, 19, -36, 22, 125, 9, -42, -10, 66, 125, 54, -107, -6, 46, -34, -92, 24, -68, 58, 47, -86, -98, -102, 45, 11, -82, 33, 73, -82, 98, 58, 11, 84, -2, 114, 17, -103, 9, -122, 45, -48, -4, 49, 95, 87, 31, 87, 73, -16, -79, -6, 82, 118, -113, -6, -79, -20, -14, -36, -125, 100, -41, 34, 25, 123, -16, -117, -27, -88, 122, -89, -112, -53, -98, 5, 45, 61, -68, 62, 38, -63, -11, -45, 110, -93, 74, 63, -120, -53, -75, -66, -24, -3, -24, -5, 55, -11, -63, -105, -44, -78, -114, -115, -118, -74, -12, 114, 73, -97, 91, -34, 37, 99, 67, -32, 63, -123, -21, 87, 37, -16, -112, 38, -117, -55};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7409635218706099);
    msg.setSource(15839U);
    msg.setSourceEntity(22U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(252U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 125U;
    tmp_msg_0.request_id = 14057U;
    tmp_msg_0.command = 155U;
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 38263U;
    tmp_tmp_msg_0_0.control_ent = 7U;
    tmp_tmp_msg_0_0.timeout = 0.586637482416277;
    tmp_tmp_msg_0_0.loiter_radius = 0.13804419394059309;
    tmp_tmp_msg_0_0.altitude_interval = 0.8150429979164754;
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 8598U;
    tmp_msg_0.info.assign("TNURSHNKNFSZKVQMPXUMXGFKRBSEGICDAHJLJMXODXSVYRREHYMYFMJYYAGPYDQTOTKWZCUNPXQDHVDLRBTFPIMZOCPUOTLTOLKBYLKETQBSELFJSAIAYIZKTJCSCZXGHVARIEMWWMGJMILNKBHYQBDZQOFEIUROSNUZVGZBLUSOQXWCAUVJFOGBJWFBPAPNUEQGZ");
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.24846985074140748);
    msg.setSource(17093U);
    msg.setSourceEntity(222U);
    msg.setDestination(46249U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.7924248010444827;
    msg.lon = 0.4174095866741766;
    msg.depth = 0.7421264634421423;
    msg.sentence.assign("EHVXKLTIOYRJKNJHXSGBSMUQVTJUQHBLZOLUASRFDTEPDPQMTWTUOCJNTNZWCKQMGPM");
    msg.txtime = 0.3003738931575568;
    msg.modem_type.assign("CGGLILATRWEJBRUQONXTXGFHNDECUKQPDXIEOHYALIEOKRNQGMJGCQPNOKLJQOCTBWHDRGNYQSSQUZAAXSTWNRLMOMQCUGXAXWKRTNXEMILMGBJBJYEFUHGEDMYZOERVJZDDXZIVCIDHECOVQWZTUAFCBJDCPMZA");
    msg.sys_src.assign("IOEJRFJTCBCOQLCZLKSHUZIYHVIMWLEPJOKBHLDQEDKSRHYCKNTPURDKCPBBASZHDWILDVBHOPIWXQMQQOQAGVFUGUGYXNMUHYOFQMOTAABNLHPLUDZOCLEVXGPEFSZVFEKJDWTSGATBTKQCKXCTGHMMYFKHNRJTGPVWUFCUUJFSVSSKRMEEIWXETRPWXGSAJNIXNDXWMXVZVMZZCIAWGMG");
    msg.seq = 5717U;
    msg.sys_dst.assign("VVNEZNLENBUPTBRNSFCKVCBETNATSIDEGBIUTIDFXIBZATFORJHTAOODOVEMHATSSJIMWQJPKNPSXSMFKQHVXMGURPGMCTLZQAQUVEKZCGQOVLRFOUNJZDHHRJCS");
    msg.flags = 181U;
    const char tmp_msg_0[] = {25, -80, -26, 3, -78, 106, -99, -34, 97, -3, -11, 25, 71, -110, 97, -73, 88, 91, -36, 20, 5, 2, -14, -107, -94, 121, -67, -50, -12, -79, 40, 98, 121, 54, 42, 110, 67, 101, 57, 36, -55, -52, 66, 90, 118, 8, -110, 26, -100, 0, -27, 84, -114, -79, -2, -74, -121, 52, -122, 7, 56, -28, -55, 106, -18, 35, 89, -78, -52, -58, -61, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.09594732085180468);
    msg.setSource(63982U);
    msg.setSourceEntity(213U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.8512271224591994;
    msg.lon = 0.6396513395090642;
    msg.depth = 0.4207129485033688;
    msg.sentence.assign("ZYSLWRVOXOFRZIXWMSCNFCUTFYNUEQLWJDQZMVBAGONDLTEPIKRJWGIBMNGKTCFKUWETQAZBOCXVJTBHFVWLENFYRTMHLVRZUAWQSJNEXACTCQFAPGVDIPMPMPCYKNPHYWFAYDUADSDLSDJBBRHVJJSEIUCROEOCCIVMBPBBANU");
    msg.txtime = 0.7633903934173206;
    msg.modem_type.assign("CVCJPVMHXVHLLWDGBAHXAXFQNZDUXISJWJYHLKZHKCKSOLITIMCHUTCWSJUQEQTNPAEZNWAOCQRNXUZCJKUIYGPDOQTLKBPOOMEMRJGDGKYZCWGUJXWVHREOMEMFBFOWRCPZNGFDBAHUR");
    msg.sys_src.assign("EVBTJAUJYCXWGGZQMIZRMTXOEAOCOPPCSWWQPKFZRAFB");
    msg.seq = 40169U;
    msg.sys_dst.assign("WOSVIRIQRPQFZFJYCRYXDSHHGOBGXGSUWHJCLQVKPZHWLELFPWIGXXTDYCRRBGQBZTHC");
    msg.flags = 131U;
    const char tmp_msg_0[] = {-61, 76, -109, -6, 117, 26, -70, -125, 54, -23, -96, -121, -113, -39, -47, 53, -108, 1, -86, 25, -51, -59, -70, 99, 56, 9, 57, -75, 0, 33, 62, -16, -122, 95, -21, 122, 111, 8, -85, -71, -3, -61, 82, 44, -60, -80, 82, 42, 110, -126, 3, 47, -45, 8, 109, 55, -63, 53, -113, -127, -17, -28, 117, 5, -90, -98, 97, 21, 125, -64, -7, -9, -119, -57, 84, 5, 102, -81, -120, 79, -58, 74, 9, 76, 27, -52, 123, -12, 91, -127, 78, 85, -5, -124, -66, 111, 123, 42, -48, -103, -44, -110, 24, 24, -125, 99, -37, -26, 95, 111, -3, -9, 23, 102, -70, 35, 32, 71, 29, 6, -44, 73, 85, 50, -109, -116, 94, -98, 103, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.8336963692997368);
    msg.setSource(32304U);
    msg.setSourceEntity(151U);
    msg.setDestination(15488U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.725185997645369;
    msg.lon = 0.29167947717083964;
    msg.depth = 0.8303264770680585;
    msg.sentence.assign("NSFPBEXJEKOHLADTZRRUJBKCHHTRUFYZPJBNSATDDGNPHGFGPBCUONGAOSQAPNIVLWRTSMYXDAZCTMJOKOFACQZSXMUQNAZBDWSUIHHWTQBMCJDLTCELEKGUTILWRPNYEEXCNPVDPWFEIZFRJGUJASOKLXWWVMHXLYRVVLMWYGVMIOGFZVQUCYHKRFHYITZH");
    msg.txtime = 0.9012921493157359;
    msg.modem_type.assign("VYVJJXTYDWHWHWMXLPXKEHBQYVILGOOARARNVRHMVFDTQNANBGAZMRTBDBSLVOCEBEPPHQSNYNWIZNIQSLEWRQTWSWIZPXZUGCECBOAIMZTVDIFLZADQZFACUOFWJVLHXCLLTCUXUFYMZUFENGYLIOISNSNTYOGJTLJAIKFUMYHXGXDJGERJKUYAXMCFBZQPYQCHZDGQUKIPMOJKTDF");
    msg.sys_src.assign("JWFDOCPMSLQSQBXPEUSKKYOICXEMIPHBFIGSUOICNMPFUOUBZYUTFRVMMBHLWJTMLQHIUS");
    msg.seq = 58504U;
    msg.sys_dst.assign("JHCIPEYEUKKYOK");
    msg.flags = 83U;
    const char tmp_msg_0[] = {23, -37, -87, -10, -74, -16, 111, -35, 74, 118, -69, 109, 106, 55, 5, -16, -114, -23, 50, -116, 20, 32, -37, 38, 124, -51, -39, -88, 70, 17, 22, -7, 76, 27, 57, 24, 114, -44, -117, -32, 125, 77, 53, -71, 90, -99, -75, -68, -59, -125, -40, 42, 31, -119, -102, -122, -66, 87, -110, -9, 86, -14, 19, -54, -95, 74, 51, 78, 14, 20, 105, -40, -58, 17, -54, -67, 116, -77, 111, -75, -87, -67, 120, 61, -81, -29, -14, 99, 31, -75, 110, 37, -84, -70, -97, 61, 112, -26, -105, 54, 74, -59, 40, 29, -87, -30, 46, -29, 116, -68, 31, -101, 43, -49, -80, -31, 4, 44, -77, -30, 76, -104, -88, -90, 19, -37, 28, 114, -9, 42, 108, -82, -72, -57, 23, -92, -114, 88, 75, 109, 94, 55, -102, 72, 27, 120, 96, -103, -53, -15, -26, 93, 16, 30, -9, 11, 109, -111, 21, 108, -124, -72, 53, 96, -27, 101, 125, 84, 114, 110, -17, 108, -1, -118, 66, 7, -113, -91, 88, 91, 40, -46, -112, -97, -53, 75, -34, 64, 44, 73, -2, 69, 96, -37, -58, 109, -57, 10, 46, 63, 35, -63, -110, 74, 15, -103, -21, -64, 11, 102, -24, 32, 64, 120, 43, -18, 124, -101, 76, 85, 53, -96, 91, -73, 50, 23, 28, 2, -24, 9, 116, 31, 19, 35, -32, -47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.035281811220481574);
    msg.setSource(47840U);
    msg.setSourceEntity(20U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(31U);
    msg.op = 86U;
    msg.system.assign("LAUTZHWWICRIYZLNENSKLNCBNCQXZKIUGTLWKAPTYIWDJKRBIWQECUKFERVA");
    msg.range = 0.9371772921290221;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 92U;
    tmp_msg_0.error.assign("HSKXXPYVRBBMDDQZTDPQLDSJFLVFXJGMGMTBVUKHUAJONSCRSXAMBEUQNDXGGNIVEVYGGWWEGLSIZFOPKYYDVKZMOWNPEDWXHSVQYYCUPYMKHFCCIKUHIJQRYLCSKVPVQTGAUCJDIDQZRIJZEEXBNUTLCBIERHEMAWOPEZGHC");
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
    msg.setTimeStamp(0.6483183882122276);
    msg.setSource(61826U);
    msg.setSourceEntity(182U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(176U);
    msg.op = 9U;
    msg.system.assign("QADAQDFOGFWSFRBSYJEVEKGPCEJNXOSPUTBKBDOAICQTLUXFIXAPSLXTZUIQLFWMNOOOHIBCVNGJCCFPKZEL");
    msg.range = 0.4407852588958696;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.30482017881878876);
    msg.setSource(15236U);
    msg.setSourceEntity(103U);
    msg.setDestination(13537U);
    msg.setDestinationEntity(154U);
    msg.op = 155U;
    msg.system.assign("RGJRTIWCZLSADBDHLNAKNERGSZHEIYQLQJAENOBFPVMYACULXHMPGZPKTGRIJEFHOMNETSFGPIUNUKVBFAYBFTIUZVYPGQVQMVEQIYKKNXHBHMAVLQVYUFFXBPQFIAMUCSPDWYBCDASKRULJKRYNBJHSASXMJXOZRISGHAMOLNDJKLWVQXOSWXXGJLOCYZHUMCXCDO");
    msg.range = 0.7837322594408441;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.6703362806022735;
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
    msg.setTimeStamp(0.3412655251365596);
    msg.setSource(29087U);
    msg.setSourceEntity(112U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.33105185019649297);
    msg.setSource(12897U);
    msg.setSourceEntity(91U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.07592774774241928);
    msg.setSource(7342U);
    msg.setSourceEntity(84U);
    msg.setDestination(39772U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.9275078185953258);
    msg.setSource(24919U);
    msg.setSourceEntity(26U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(51U);
    msg.list.assign("DTURRPNLNYZWHGVWTVUOZJLAVWWBSJKTVQLSEXJSUXLORPAMCEKYYXPRQBRVJEWEHYINHGSZEOTFRUXTUCVTYFZAYNTIXOEONIQWBYMPRUSZKDMTFPKPQFMWDUDCJCBMQMEACVIGOEGILLFLXXYSFOBMPQAIIHHUVZSSGCDJZYKOUSGHZXFJMFEBJTQOHKWXAGKSRRCKCZPDLPIWAYWMNADUDKJEHNMQDQPCBQLJACFAGVBZRO");

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
    msg.setTimeStamp(0.1937303002107451);
    msg.setSource(31548U);
    msg.setSourceEntity(175U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(215U);
    msg.list.assign("OBSYRPTHDJOXSQMBAJFQAGLGGL");

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
    msg.setTimeStamp(0.2155706852530901);
    msg.setSource(12306U);
    msg.setSourceEntity(96U);
    msg.setDestination(6481U);
    msg.setDestinationEntity(240U);
    msg.list.assign("BXAWSWQVTUMHDSJXPPIOMCUVZYJQFFZTAZLWTKSMQQDAGMAICHPAYMVNWHVYRPIONKNINVOXLSGDRNMZLGPLSOJOFZQDENSDJCEJBTXGXZEQPRQERCCKVDYSLVENTXWDGRQUZEBCJ");

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
    msg.setTimeStamp(0.5334303090047902);
    msg.setSource(38297U);
    msg.setSourceEntity(155U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("JVUUANJSWAYZDZVAVGSQVDPKOHHFPMAJIBWYXOJYQUDMRVRBHEATPEESMCMSXYFQOFXZVAZCDJHZDJOSAOYGUMNLUSMJVGXTUIGCNKFBCLMUNNDWUSWLTGRLJAGXROWIGXGZZLZNPKREZUFWNIDITPQHDOGXRPALBZBPCRTKEKSDQHYPIPTEISWE");
    msg.rssi = 0.3092190694099094;
    msg.integrity = 27770U;

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
    msg.setTimeStamp(0.7228172025004366);
    msg.setSource(33232U);
    msg.setSourceEntity(103U);
    msg.setDestination(64251U);
    msg.setDestinationEntity(216U);
    msg.peer.assign("PSKMUOHNSOFGQJATTURTXTWZBMCHRJVSNVIVCSUMRJZRVKNEKWIQQJBMHMYFNUHKEEEJSLXNJKOIOIWGWNYITPZZYMEBXDWLLURUPLODUHXQEGPYFVAHSPMBXKOYWFPWGIPCDDJJWIPBKGHSURPHXZY");
    msg.rssi = 0.04643598852906816;
    msg.integrity = 34397U;

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
    msg.setTimeStamp(0.7763140624944783);
    msg.setSource(17604U);
    msg.setSourceEntity(27U);
    msg.setDestination(28454U);
    msg.setDestinationEntity(172U);
    msg.peer.assign("WHPDUHVPJXWJQMRCWEKEUQDMZZCF");
    msg.rssi = 0.659448841030317;
    msg.integrity = 16057U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.0014978856621582493);
    msg.setSource(7187U);
    msg.setSourceEntity(103U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(108U);
    msg.req_id = 39684U;
    msg.destination.assign("CRMRHUTAYSIVHQMX");
    msg.timeout = 0.7360750044422855;
    msg.range = 0.8509478111714587;
    msg.type = 234U;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 210U;
    tmp_msg_0.name.assign("RUUBFDKJMLRRVJUOAWDQRLDNPKNBQQOKFWILFPECMUKSXATLLLZQNWPAIQVIKA");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.717845693610798);
    msg.setSource(12230U);
    msg.setSourceEntity(183U);
    msg.setDestination(44100U);
    msg.setDestinationEntity(165U);
    msg.req_id = 54798U;
    msg.destination.assign("WJGJMWAKOGYWLGOTQQUSMEJBFQVNABHZLNFJSFBMYTKUCFULFLYWUOSHXPTPVNVCSJUHKTDAOCENOCNPDGLZUAORJXRITGDYNLHESMFKVKNEHXCXICQAPEVZASUVFNWHRFSPPJR");
    msg.timeout = 0.001452366281573858;
    msg.range = 0.18563106182080236;
    msg.type = 3U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.16656847121687346;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.6949035941342878);
    msg.setSource(29923U);
    msg.setSourceEntity(106U);
    msg.setDestination(28626U);
    msg.setDestinationEntity(149U);
    msg.req_id = 53678U;
    msg.destination.assign("TDRZDLIBAPTIPUPNTCGBVYSBQVJLDDIADYANKWGGIAQEFNSHCKXUZNIJCZJDFRVMRZMHIHUOZSGHXUTPEPEFFMERLWOEXHZJRUJCBMAYVWAGYWWUBKRCBNYUYKRNYUBAVSKNXFOBMXIALEKMLO");
    msg.timeout = 0.1812140746004357;
    msg.range = 0.2996774390219584;
    msg.type = 135U;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.5016563476908934;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.5882538053919085);
    msg.setSource(5940U);
    msg.setSourceEntity(132U);
    msg.setDestination(63172U);
    msg.setDestinationEntity(223U);
    msg.req_id = 63145U;
    msg.type = 152U;
    msg.status = 129U;
    msg.info.assign("BJBNSRYIOOFLJWUAZXFCKKUHWZTZZBCDINMQSXUREPNNVMLUQGDTLSKQXVOSMXQCQJMXJILORGHBKHYDHCKEJTWPHRZRTSDCALONPNNLEXILCWRRZAWTTPETGETDLDIUVDZYICMKXUKAQYUYPSNTAFAUGJPNHESRXCAND");
    msg.range = 0.9596755035716853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.30058598516038004);
    msg.setSource(53813U);
    msg.setSourceEntity(33U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(4U);
    msg.req_id = 12506U;
    msg.type = 124U;
    msg.status = 194U;
    msg.info.assign("MJRHFDVBJTONYVCQBQYIYQBCPXTOWFKPSXLMOXKVCVFFGHZGCSFQZXIOEZFVXWLMPEMRKQVJGTPLEDLBRIXNSFOASI");
    msg.range = 0.551535336464166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.23739085768523105);
    msg.setSource(39416U);
    msg.setSourceEntity(103U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(215U);
    msg.req_id = 22794U;
    msg.type = 151U;
    msg.status = 179U;
    msg.info.assign("OUQXPNVKCQOJEJCQZEBPMYZOAQQDWDNUREFEHWJZSGODXWBLJZUWAAKPHUIKCKRATTDTCDVRCWZTVMMKJDSVHRLFYJOKUBNZKGSJZUYOZTGVPFFYMHILOPGBMYKUG");
    msg.range = 0.753045783585105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9873274300601049);
    msg.setSource(19356U);
    msg.setSourceEntity(57U);
    msg.setDestination(44894U);
    msg.setDestinationEntity(157U);
    msg.value = 10102;

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
    msg.setTimeStamp(0.17391148134107126);
    msg.setSource(34904U);
    msg.setSourceEntity(170U);
    msg.setDestination(44970U);
    msg.setDestinationEntity(184U);
    msg.value = 26900;

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
    msg.setTimeStamp(0.994432134055957);
    msg.setSource(27716U);
    msg.setSourceEntity(62U);
    msg.setDestination(43731U);
    msg.setDestinationEntity(10U);
    msg.value = 7486;

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
    msg.setTimeStamp(0.5946563638009732);
    msg.setSource(9038U);
    msg.setSourceEntity(24U);
    msg.setDestination(51902U);
    msg.setDestinationEntity(50U);
    msg.value = 0.12633083495488884;

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
    msg.setTimeStamp(0.4581687655413229);
    msg.setSource(27076U);
    msg.setSourceEntity(31U);
    msg.setDestination(9696U);
    msg.setDestinationEntity(156U);
    msg.value = 0.3979718768994389;

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
    msg.setTimeStamp(0.8778300836849863);
    msg.setSource(2770U);
    msg.setSourceEntity(221U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5116590496581186;

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
    msg.setTimeStamp(0.7049637028883297);
    msg.setSource(11101U);
    msg.setSourceEntity(188U);
    msg.setDestination(22752U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5640901629243448;

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
    msg.setTimeStamp(0.041851142088468185);
    msg.setSource(58775U);
    msg.setSourceEntity(239U);
    msg.setDestination(14532U);
    msg.setDestinationEntity(206U);
    msg.value = 0.852937141884949;

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
    msg.setTimeStamp(0.27671704557048515);
    msg.setSource(19759U);
    msg.setSourceEntity(26U);
    msg.setDestination(27970U);
    msg.setDestinationEntity(166U);
    msg.value = 0.30846059187985153;

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
    msg.setTimeStamp(0.636165966750278);
    msg.setSource(33558U);
    msg.setSourceEntity(215U);
    msg.setDestination(42389U);
    msg.setDestinationEntity(60U);
    msg.validity = 5864U;
    msg.type = 136U;
    msg.utc_year = 31720U;
    msg.utc_month = 115U;
    msg.utc_day = 198U;
    msg.utc_time = 0.5237998022852978;
    msg.lat = 0.8944744057933302;
    msg.lon = 0.5719827768418322;
    msg.height = 0.4135622107968402;
    msg.satellites = 93U;
    msg.cog = 0.4196610257021104;
    msg.sog = 0.6774569333442655;
    msg.hdop = 0.6670730727259475;
    msg.vdop = 0.018350242957037577;
    msg.hacc = 0.13835866038824196;
    msg.vacc = 0.7492914516225095;

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
    msg.setTimeStamp(0.010321557155677286);
    msg.setSource(54230U);
    msg.setSourceEntity(33U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(250U);
    msg.validity = 41028U;
    msg.type = 145U;
    msg.utc_year = 58745U;
    msg.utc_month = 6U;
    msg.utc_day = 166U;
    msg.utc_time = 0.6849439330440816;
    msg.lat = 0.5402042663856722;
    msg.lon = 0.9377803910740234;
    msg.height = 0.3404207513194236;
    msg.satellites = 245U;
    msg.cog = 0.6738794265188334;
    msg.sog = 0.022025816343855142;
    msg.hdop = 0.9419402875817151;
    msg.vdop = 0.24917913617418153;
    msg.hacc = 0.8835620842546886;
    msg.vacc = 0.1140936767018671;

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
    msg.setTimeStamp(0.372275515495875);
    msg.setSource(53220U);
    msg.setSourceEntity(107U);
    msg.setDestination(64237U);
    msg.setDestinationEntity(97U);
    msg.validity = 2811U;
    msg.type = 9U;
    msg.utc_year = 48447U;
    msg.utc_month = 100U;
    msg.utc_day = 57U;
    msg.utc_time = 0.6382940333358664;
    msg.lat = 0.727318253685348;
    msg.lon = 0.7399171860297356;
    msg.height = 0.3878445759559209;
    msg.satellites = 144U;
    msg.cog = 0.3627244631772768;
    msg.sog = 0.6567931667044604;
    msg.hdop = 0.3294715667307274;
    msg.vdop = 0.30105611009549116;
    msg.hacc = 0.17462067866831754;
    msg.vacc = 0.03374495262330779;

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
    msg.setTimeStamp(0.4767779276241828);
    msg.setSource(59788U);
    msg.setSourceEntity(70U);
    msg.setDestination(5365U);
    msg.setDestinationEntity(29U);
    msg.time = 0.3800123771939319;
    msg.phi = 0.8537117440975112;
    msg.theta = 0.9412114961588941;
    msg.psi = 0.3803325454508494;
    msg.psi_magnetic = 0.6462721783437353;

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
    msg.setTimeStamp(0.9161220150604793);
    msg.setSource(11858U);
    msg.setSourceEntity(88U);
    msg.setDestination(28716U);
    msg.setDestinationEntity(126U);
    msg.time = 0.9370529852805521;
    msg.phi = 0.21247416450908552;
    msg.theta = 0.5049718059259566;
    msg.psi = 0.7819642671766045;
    msg.psi_magnetic = 0.39832377569092525;

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
    msg.setTimeStamp(0.07833470717014324);
    msg.setSource(44546U);
    msg.setSourceEntity(98U);
    msg.setDestination(3917U);
    msg.setDestinationEntity(58U);
    msg.time = 0.08393927206833596;
    msg.phi = 0.8280325183339635;
    msg.theta = 0.7901108441200396;
    msg.psi = 0.8040266822984482;
    msg.psi_magnetic = 0.09029719348275833;

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
    msg.setTimeStamp(0.6865530975520118);
    msg.setSource(55465U);
    msg.setSourceEntity(8U);
    msg.setDestination(9091U);
    msg.setDestinationEntity(142U);
    msg.time = 0.13690498505118387;
    msg.x = 0.25844552459098835;
    msg.y = 0.35236723343316934;
    msg.z = 0.5937725100050724;
    msg.timestep = 0.5681802080894763;

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
    msg.setTimeStamp(0.7055066479264266);
    msg.setSource(60269U);
    msg.setSourceEntity(202U);
    msg.setDestination(48312U);
    msg.setDestinationEntity(164U);
    msg.time = 0.1518713435025031;
    msg.x = 0.7749380215638165;
    msg.y = 0.494698953464926;
    msg.z = 0.01484982496323839;
    msg.timestep = 0.082477602818541;

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
    msg.setTimeStamp(0.5679676764087109);
    msg.setSource(37477U);
    msg.setSourceEntity(202U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(50U);
    msg.time = 0.9553176048134462;
    msg.x = 0.6766317390818629;
    msg.y = 0.8410758564135042;
    msg.z = 0.7811051097346863;
    msg.timestep = 0.9109467614481775;

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
    msg.setTimeStamp(0.8444369021756787);
    msg.setSource(63573U);
    msg.setSourceEntity(136U);
    msg.setDestination(29358U);
    msg.setDestinationEntity(102U);
    msg.time = 0.9126283946465574;
    msg.x = 0.6654025477912798;
    msg.y = 0.28228854805497494;
    msg.z = 0.0735657208654652;

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
    msg.setTimeStamp(0.8924864051499268);
    msg.setSource(1320U);
    msg.setSourceEntity(168U);
    msg.setDestination(3045U);
    msg.setDestinationEntity(207U);
    msg.time = 0.3726245903506509;
    msg.x = 0.12430071571718238;
    msg.y = 0.7188592148581623;
    msg.z = 0.6786474675517403;

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
    msg.setTimeStamp(0.4745943349455136);
    msg.setSource(51620U);
    msg.setSourceEntity(211U);
    msg.setDestination(30418U);
    msg.setDestinationEntity(45U);
    msg.time = 0.13233035180055142;
    msg.x = 0.023964788963211858;
    msg.y = 0.07361405384233366;
    msg.z = 0.9569096832259711;

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
    msg.setTimeStamp(0.924414869471858);
    msg.setSource(56633U);
    msg.setSourceEntity(19U);
    msg.setDestination(22477U);
    msg.setDestinationEntity(192U);
    msg.time = 0.4492921720603341;
    msg.x = 0.13917166470864595;
    msg.y = 0.7663670427812421;
    msg.z = 0.5715712419801856;

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
    msg.setTimeStamp(0.7199822489093567);
    msg.setSource(42945U);
    msg.setSourceEntity(181U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(185U);
    msg.time = 0.4964246386536847;
    msg.x = 0.8538187177860719;
    msg.y = 0.020113694094103685;
    msg.z = 0.4171661437819998;

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
    msg.setTimeStamp(0.5017852405714526);
    msg.setSource(15149U);
    msg.setSourceEntity(42U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(230U);
    msg.time = 0.7338914620607216;
    msg.x = 0.7333410619182683;
    msg.y = 0.45581141786145496;
    msg.z = 0.03067124595839832;

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
    msg.setTimeStamp(0.4380725775003085);
    msg.setSource(38572U);
    msg.setSourceEntity(14U);
    msg.setDestination(21703U);
    msg.setDestinationEntity(137U);
    msg.time = 0.5661455050594115;
    msg.x = 0.36080419654228946;
    msg.y = 0.23488509143993164;
    msg.z = 0.48453083489696425;

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
    msg.setTimeStamp(0.647604017958089);
    msg.setSource(35826U);
    msg.setSourceEntity(219U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(157U);
    msg.time = 0.2699296629544782;
    msg.x = 0.6873459888997064;
    msg.y = 0.8366418201548105;
    msg.z = 0.9269601091592204;

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
    msg.setTimeStamp(0.45402665024142175);
    msg.setSource(11732U);
    msg.setSourceEntity(124U);
    msg.setDestination(13543U);
    msg.setDestinationEntity(167U);
    msg.time = 0.3387159567653495;
    msg.x = 0.5045319652708719;
    msg.y = 0.5037050306444407;
    msg.z = 0.9317559497383855;

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
    msg.setTimeStamp(0.553709748108153);
    msg.setSource(11199U);
    msg.setSourceEntity(21U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(53U);
    msg.validity = 187U;
    msg.x = 0.0013989755660932524;
    msg.y = 0.969974030547021;
    msg.z = 0.509654208942263;

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
    msg.setTimeStamp(0.11962788240194278);
    msg.setSource(1121U);
    msg.setSourceEntity(205U);
    msg.setDestination(40420U);
    msg.setDestinationEntity(226U);
    msg.validity = 253U;
    msg.x = 0.5517654904485729;
    msg.y = 0.28200285421412485;
    msg.z = 0.3580606608581367;

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
    msg.setTimeStamp(0.22726959874728558);
    msg.setSource(30236U);
    msg.setSourceEntity(136U);
    msg.setDestination(15121U);
    msg.setDestinationEntity(185U);
    msg.validity = 5U;
    msg.x = 0.5793728650871923;
    msg.y = 0.3683256283712547;
    msg.z = 0.962306123764857;

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
    msg.setTimeStamp(0.741997986830819);
    msg.setSource(19913U);
    msg.setSourceEntity(56U);
    msg.setDestination(7453U);
    msg.setDestinationEntity(185U);
    msg.validity = 253U;
    msg.x = 0.14199772537199684;
    msg.y = 0.6014474530994938;
    msg.z = 0.7243264935765009;

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
    msg.setTimeStamp(0.9626543112551685);
    msg.setSource(1969U);
    msg.setSourceEntity(55U);
    msg.setDestination(39616U);
    msg.setDestinationEntity(124U);
    msg.validity = 171U;
    msg.x = 0.9445607068161664;
    msg.y = 0.10787107116203609;
    msg.z = 0.35862746651053334;

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
    msg.setTimeStamp(0.867608391894672);
    msg.setSource(24872U);
    msg.setSourceEntity(201U);
    msg.setDestination(26016U);
    msg.setDestinationEntity(49U);
    msg.validity = 142U;
    msg.x = 0.2518854023381215;
    msg.y = 0.5242902893203332;
    msg.z = 0.4165742141845932;

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
    msg.setTimeStamp(0.9991821398870898);
    msg.setSource(6620U);
    msg.setSourceEntity(231U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(52U);
    msg.time = 0.5181749926332063;
    msg.x = 0.6945305408774315;
    msg.y = 0.4508799646250742;
    msg.z = 0.7858511000033228;

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
    msg.setTimeStamp(0.22752152800182335);
    msg.setSource(40823U);
    msg.setSourceEntity(166U);
    msg.setDestination(52325U);
    msg.setDestinationEntity(100U);
    msg.time = 0.46914608507293865;
    msg.x = 0.4078226786298472;
    msg.y = 0.8557084777008696;
    msg.z = 0.909186645553896;

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
    msg.setTimeStamp(0.44809674690829016);
    msg.setSource(24573U);
    msg.setSourceEntity(147U);
    msg.setDestination(33064U);
    msg.setDestinationEntity(99U);
    msg.time = 0.3094998214967062;
    msg.x = 0.14120814012241345;
    msg.y = 0.40962912434532417;
    msg.z = 0.3704326492188159;

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
    msg.setTimeStamp(0.4304695144567864);
    msg.setSource(12830U);
    msg.setSourceEntity(247U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(53U);
    msg.validity = 142U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4014567562713801;
    tmp_msg_0.y = 0.3878673997734202;
    tmp_msg_0.z = 0.4005309971646255;
    tmp_msg_0.phi = 0.1179030101342855;
    tmp_msg_0.theta = 0.24713561988319455;
    tmp_msg_0.psi = 0.563467050118555;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5930980455445187;
    tmp_msg_1.beam_height = 0.3909477589219291;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7174715790488974;

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
    msg.setTimeStamp(0.05314582300188764);
    msg.setSource(58012U);
    msg.setSourceEntity(175U);
    msg.setDestination(37938U);
    msg.setDestinationEntity(120U);
    msg.validity = 220U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7184480499034198;
    tmp_msg_0.y = 0.7869722254875862;
    tmp_msg_0.z = 0.9123212061883264;
    tmp_msg_0.phi = 0.6908271449198048;
    tmp_msg_0.theta = 0.6200280870907149;
    tmp_msg_0.psi = 0.6147906075400085;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8472776654327094;
    tmp_msg_1.beam_height = 0.47742487128768907;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3568253102630238;

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
    msg.setTimeStamp(0.2814054470761441);
    msg.setSource(50582U);
    msg.setSourceEntity(96U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(251U);
    msg.validity = 221U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7487171178463692;
    tmp_msg_0.y = 0.05475693345898003;
    tmp_msg_0.z = 0.8508577684806292;
    tmp_msg_0.phi = 0.14932608069052722;
    tmp_msg_0.theta = 0.4843830521132848;
    tmp_msg_0.psi = 0.9954987319405245;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8922736274047555;
    tmp_msg_1.beam_height = 0.49000952957626187;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.05875778837880685;

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
    msg.setTimeStamp(0.9510968971708442);
    msg.setSource(10996U);
    msg.setSourceEntity(113U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(108U);
    msg.value = 0.49809708828646915;

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
    msg.setTimeStamp(0.3741195575918508);
    msg.setSource(53233U);
    msg.setSourceEntity(252U);
    msg.setDestination(42302U);
    msg.setDestinationEntity(233U);
    msg.value = 0.33261786433420093;

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
    msg.setTimeStamp(0.5319668452393707);
    msg.setSource(7078U);
    msg.setSourceEntity(190U);
    msg.setDestination(62901U);
    msg.setDestinationEntity(212U);
    msg.value = 0.7275017016279014;

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
    msg.setTimeStamp(0.031030486220686937);
    msg.setSource(21352U);
    msg.setSourceEntity(94U);
    msg.setDestination(50710U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9095968476257622;

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
    msg.setTimeStamp(0.13730808120478477);
    msg.setSource(57007U);
    msg.setSourceEntity(73U);
    msg.setDestination(1184U);
    msg.setDestinationEntity(19U);
    msg.value = 0.360560755124927;

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
    msg.setTimeStamp(0.5138464923185699);
    msg.setSource(22546U);
    msg.setSourceEntity(190U);
    msg.setDestination(50407U);
    msg.setDestinationEntity(198U);
    msg.value = 0.4586580096036411;

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
    msg.setTimeStamp(0.9866814158618532);
    msg.setSource(28263U);
    msg.setSourceEntity(221U);
    msg.setDestination(54965U);
    msg.setDestinationEntity(113U);
    msg.value = 0.7013743151426781;

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
    msg.setTimeStamp(0.07066149408554756);
    msg.setSource(63736U);
    msg.setSourceEntity(141U);
    msg.setDestination(46303U);
    msg.setDestinationEntity(129U);
    msg.value = 0.740272629378104;

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
    msg.setTimeStamp(0.4120222016651577);
    msg.setSource(34341U);
    msg.setSourceEntity(239U);
    msg.setDestination(38599U);
    msg.setDestinationEntity(152U);
    msg.value = 0.08137961366376023;

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
    msg.setTimeStamp(0.20694796602760235);
    msg.setSource(3789U);
    msg.setSourceEntity(56U);
    msg.setDestination(60846U);
    msg.setDestinationEntity(164U);
    msg.value = 0.4056637524986022;

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
    msg.setTimeStamp(0.8981680741253525);
    msg.setSource(48942U);
    msg.setSourceEntity(21U);
    msg.setDestination(61942U);
    msg.setDestinationEntity(124U);
    msg.value = 0.9340939754732144;

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
    msg.setTimeStamp(0.5952095049039191);
    msg.setSource(54839U);
    msg.setSourceEntity(201U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9596628271842448;

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
    msg.setTimeStamp(0.2587737807041599);
    msg.setSource(60886U);
    msg.setSourceEntity(244U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(162U);
    msg.value = 0.900698572464837;

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
    msg.setTimeStamp(0.7448433808312934);
    msg.setSource(65351U);
    msg.setSourceEntity(77U);
    msg.setDestination(35281U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8445717934468142;

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
    msg.setTimeStamp(0.5455971228655748);
    msg.setSource(60734U);
    msg.setSourceEntity(230U);
    msg.setDestination(60680U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5426319524064643;

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
    msg.setTimeStamp(0.4367079481634818);
    msg.setSource(63683U);
    msg.setSourceEntity(147U);
    msg.setDestination(3483U);
    msg.setDestinationEntity(227U);
    msg.value = 0.9586269866600275;

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
    msg.setTimeStamp(0.27273520467237755);
    msg.setSource(13646U);
    msg.setSourceEntity(121U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(252U);
    msg.value = 0.07888282850351758;

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
    msg.setTimeStamp(0.9571892985267191);
    msg.setSource(25160U);
    msg.setSourceEntity(42U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6406769868757889;

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
    msg.setTimeStamp(0.6205087728207435);
    msg.setSource(16093U);
    msg.setSourceEntity(85U);
    msg.setDestination(13790U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5906968361766551;

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
    msg.setTimeStamp(0.56208488152852);
    msg.setSource(33273U);
    msg.setSourceEntity(125U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3865235692727994;

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
    msg.setTimeStamp(0.532147830269523);
    msg.setSource(9979U);
    msg.setSourceEntity(246U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(28U);
    msg.value = 0.36780189206624314;

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
    msg.setTimeStamp(0.15458639525899232);
    msg.setSource(27681U);
    msg.setSourceEntity(125U);
    msg.setDestination(38067U);
    msg.setDestinationEntity(95U);
    msg.value = 0.06171404392488222;

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
    msg.setTimeStamp(0.45048145708575094);
    msg.setSource(44954U);
    msg.setSourceEntity(5U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(198U);
    msg.value = 0.19026688369728328;

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
    msg.setTimeStamp(0.5445826234742033);
    msg.setSource(35712U);
    msg.setSourceEntity(128U);
    msg.setDestination(14372U);
    msg.setDestinationEntity(85U);
    msg.value = 0.6085448614760887;

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
    msg.setTimeStamp(0.8237860274766268);
    msg.setSource(1220U);
    msg.setSourceEntity(126U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.9493502527937979;
    msg.speed = 0.6660352490855384;
    msg.turbulence = 0.3315655080099399;

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
    msg.setTimeStamp(0.9653105060450298);
    msg.setSource(45090U);
    msg.setSourceEntity(169U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(250U);
    msg.direction = 0.1796463024297652;
    msg.speed = 0.31895122181925484;
    msg.turbulence = 0.8486152488572305;

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
    msg.setTimeStamp(0.22903484636016946);
    msg.setSource(65419U);
    msg.setSourceEntity(157U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(110U);
    msg.direction = 0.3043962807733488;
    msg.speed = 0.36151103268243057;
    msg.turbulence = 0.10238949031121058;

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
    msg.setTimeStamp(0.8990782107604798);
    msg.setSource(39289U);
    msg.setSourceEntity(123U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(16U);
    msg.value = 0.16272521387774586;

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
    msg.setTimeStamp(0.42613064923345445);
    msg.setSource(51475U);
    msg.setSourceEntity(193U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(113U);
    msg.value = 0.2802162317793915;

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
    msg.setTimeStamp(0.15953594205680033);
    msg.setSource(50412U);
    msg.setSourceEntity(178U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5897553664203801;

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
    msg.setTimeStamp(0.2089961957324955);
    msg.setSource(48205U);
    msg.setSourceEntity(217U);
    msg.setDestination(41540U);
    msg.setDestinationEntity(161U);
    msg.value.assign("QYUVFSLIKTKRHLYBEYGKAPTXJEJUYKONTAGTZAYZTQQDHZVBGVMSICOLIKGBAOGGXPVOAETNZJDADFGCYRUFKBOSXZCWFHACNIQBNIULDVXXTMRQUDDRYHVRMPEAOSVQOEHMUPABQEURUWMLCOMPCJT");

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
    msg.setTimeStamp(0.5642149157786228);
    msg.setSource(33781U);
    msg.setSourceEntity(5U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(186U);
    msg.value.assign("QYYJVKPTRJDOBELKPQNYHBBAXDRFWEFXIZCDFNGXOQJZZPYGULPHOSNHBDXCHJHQOTARFVYQVLLWYDFXRHOGLCFHIAUVDDTOJOYKZGMSGIDKBRDWSWAQGIXZXVOFUUAEPJLFFVIV");

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
    msg.setTimeStamp(0.5627383399525777);
    msg.setSource(25605U);
    msg.setSourceEntity(233U);
    msg.setDestination(59576U);
    msg.setDestinationEntity(75U);
    msg.value.assign("SWLJMDPRXHVLCFZXNOPSAYLQHBSBEVAYLZTWKOLXAHHEUMYABUXXBAWIDUCQOKIITETGPVSTGPKWXLOUFSAGKOGBIPHJUWMOQRCDAHPIYKZSLKVSYIKCZTAZCCRVQJJMHJGRCJCY");

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
    msg.setTimeStamp(0.8259817468430876);
    msg.setSource(58743U);
    msg.setSourceEntity(124U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(220U);
    const char tmp_msg_0[] = {-65, 122, 13, 102, 1, 50, 8, -109, -23, -70, -46, 84};
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
    msg.setTimeStamp(0.26644937553243697);
    msg.setSource(30491U);
    msg.setSourceEntity(219U);
    msg.setDestination(15931U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {93, 47, -118, 89, -53, 58, -59, -42, 112, 34, 103, -42, 41, -76, -21, 58, 87, -5, -70, -13, 107, -83, -61, -10, 70, 24, 46, 17, -103, 42, 63, -41, -66, 79, 88, -58, -47};
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
    msg.setTimeStamp(0.8356451423841028);
    msg.setSource(27330U);
    msg.setSourceEntity(161U);
    msg.setDestination(51392U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {79, -27, -72, -43, 41, -77, 105, 79, 7, -21, -112, 38, 64, -39, 64, 22, -96, -88, 38, 117, 80, 71, 87, -9, 97, -72, -50, -126, -89, 84, -104, 45, 109, 118, -113, 18, 41, -17, 30, -105, 2, 25, -111, 57, -128, 71, -107, -106, -78, -10, -20, 10, 56, -28, 66, 16, 14, 31, 1, -121, 26, 103, 118, 55, -71, 62, 49, 18, 36, 77, 116, -45, 54, -51, -104, -63, 18, 126, -37, -63, -52, 42, 90, 32, -35, -94, -128, 13, 39, -56, -22, 86, -95, 15, -77, -104, 65, -9, 71, 0, 85, -8, -57, -10, -82, 97, -23, -34, -90, -52, 15, 13, 8, 26, 23, -103, -54, 123, -48, -5, -10, 43, -67, 5, 0, -92, -76, -94, -78, 52, -76, 68, 95, -52, 125, 33, -66, 9, -120, -2, 31, 5, -80, -93, 71, -12, -64, -40, -121, -63, -127, -89, -64, 23, -81, -85, -23, -63, -36, 1, 105, 66, 65, 64, 0, 70, -120, 94, -96, -57, 8, 21, 62, -7, -87, 56, 84, 75, 54, 33, -99, 76, 44, -72, -26, 79, -74, 80, 118, 45, 47, -42, 99, -125, 36, 4, -23, 50, 126, 43, -82, -80, -84, -121, -101, 79, -44, -120, -68, 20, -9, 75, -48, -17, -112, 98, 56, 123, -31, 82, -14, 76, 14, -55, 64, 94, -2, -28, -55, 74, -98, -31, -58, 85, 43, 108, 63, -45, -123, -96, 1};
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
    IMC::Force msg;
    msg.setTimeStamp(0.08161653578685091);
    msg.setSource(14709U);
    msg.setSourceEntity(240U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(89U);
    msg.value = 0.6609740419238812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.6566662470757548);
    msg.setSource(27457U);
    msg.setSourceEntity(71U);
    msg.setDestination(51439U);
    msg.setDestinationEntity(115U);
    msg.value = 0.968937426216983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.5842146500513997);
    msg.setSource(23553U);
    msg.setSourceEntity(26U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5078611296191317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3698521887611884);
    msg.setSource(9633U);
    msg.setSourceEntity(10U);
    msg.setDestination(23992U);
    msg.setDestinationEntity(41U);
    msg.type = 243U;
    msg.frequency = 1495048568U;
    msg.min_range = 25429U;
    msg.max_range = 3478U;
    msg.bits_per_point = 223U;
    msg.scale_factor = 0.1439660466815823;
    const char tmp_msg_0[] = {-71, -1, 31, -69, 113, -71, 121, -40, 65, 121, 26, -62, 110, -93, 58, 41, -83, -8, 114, -31, 125, 24, 38, -30, -62, -124, 35, -35, 58, 68, 61, 84, 92, -115, -51, -113, 16, 119, 47, 38, 51, -73, 95, 27, 37, 109, -3, -57, 13, 56, -80, -78, 42, 16, -79, 45};
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
    msg.setTimeStamp(0.12549265959321265);
    msg.setSource(44859U);
    msg.setSourceEntity(22U);
    msg.setDestination(50504U);
    msg.setDestinationEntity(138U);
    msg.type = 139U;
    msg.frequency = 782698012U;
    msg.min_range = 1462U;
    msg.max_range = 45477U;
    msg.bits_per_point = 184U;
    msg.scale_factor = 0.09740037774982246;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.36112466523594133;
    tmp_msg_0.beam_height = 0.11607561758832119;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {103, 98, -64, -44, -96, -128, -54, 97, -110, 118, -124, 60, 120, -65, -60, -33, 31, 28, -124, -19, -102, 77, 60, 77, 113, -111, -66, 16, -11, 74, -70, 75, -122, -40, 35, 94, -71, -117, 33, -22, -100};
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
    msg.setTimeStamp(0.25419731315934757);
    msg.setSource(11263U);
    msg.setSourceEntity(84U);
    msg.setDestination(51467U);
    msg.setDestinationEntity(216U);
    msg.type = 41U;
    msg.frequency = 1479343445U;
    msg.min_range = 42732U;
    msg.max_range = 53243U;
    msg.bits_per_point = 57U;
    msg.scale_factor = 0.6192954558340809;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7473555496544801;
    tmp_msg_0.beam_height = 0.09270320686990086;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {8, -54, -25, -59, 113, 15, -29, 17, -33, -111, -20, 77, -86, 29, -64, 45, 55, 105, -13, -108, 61, 97, -102, -2};
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
    msg.setTimeStamp(0.664159519402386);
    msg.setSource(6214U);
    msg.setSourceEntity(231U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.5774009233357035);
    msg.setSource(49675U);
    msg.setSourceEntity(87U);
    msg.setDestination(29302U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.5755604163678845);
    msg.setSource(29308U);
    msg.setSourceEntity(252U);
    msg.setDestination(50732U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.5028315718778478);
    msg.setSource(33146U);
    msg.setSourceEntity(22U);
    msg.setDestination(44314U);
    msg.setDestinationEntity(88U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.5386139583409281);
    msg.setSource(51743U);
    msg.setSourceEntity(8U);
    msg.setDestination(50710U);
    msg.setDestinationEntity(51U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.9874792392474508);
    msg.setSource(24952U);
    msg.setSourceEntity(144U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(238U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.7585532897921394);
    msg.setSource(19589U);
    msg.setSourceEntity(54U);
    msg.setDestination(59564U);
    msg.setDestinationEntity(116U);
    msg.value = 0.6080734456311058;
    msg.confidence = 0.3249419245243397;
    msg.opmodes.assign("COQNHMWWXUEXVOVYPSLFEECWOQPRYGIM");

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
    msg.setTimeStamp(0.8919954975422356);
    msg.setSource(15780U);
    msg.setSourceEntity(186U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(219U);
    msg.value = 0.7130782412512079;
    msg.confidence = 0.6891129625122013;
    msg.opmodes.assign("OZHUINLIHNSPDNMJWSVTOIBNAWSFUJXBMKYNFOYJEGZYIJDUWKWHLTIMAMAEYSPWDIQCVOUVZYWYHTDGYTVKBBAHWIAPULCBTRFVRKGUEJJILEFZOIPGOFQPJOXPBHRXRBAODLHZGWKATRJVNZMGQEVNSSFTDFQSMXEYCHKYZFXMVLGXSAGUEQOICLQGVEMXPCWCTD");

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
    msg.setTimeStamp(0.6506390680503016);
    msg.setSource(21477U);
    msg.setSourceEntity(7U);
    msg.setDestination(35754U);
    msg.setDestinationEntity(126U);
    msg.value = 0.42052446333513815;
    msg.confidence = 0.766214471467507;
    msg.opmodes.assign("SWKHODIFXWDWSUWDDNFSSBCGGENRZSUANJEHZGHXLTCKCHQBXVMLMYRYQNJPCLHRIQFYNSAFJMITWWKILRGWYIEBYQMHUCRYAVMKODGPLBPZRBAMOCDAABQFUDVLXIKTVHKTXYVSOTPLEDRZTLOZHKSELEECUMXNUJTZOEOQTPXNEGWXVINVQJXXZVTOADM");

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
    msg.setTimeStamp(0.18478529323315818);
    msg.setSource(42562U);
    msg.setSourceEntity(84U);
    msg.setDestination(22060U);
    msg.setDestinationEntity(186U);
    msg.itow = 643118109U;
    msg.lat = 0.5193356016386924;
    msg.lon = 0.4308219709929342;
    msg.height_ell = 0.2771577836932726;
    msg.height_sea = 0.5038652739484727;
    msg.hacc = 0.0907072044707431;
    msg.vacc = 0.7895080138776922;
    msg.vel_n = 0.8736041781865969;
    msg.vel_e = 0.5038314138251413;
    msg.vel_d = 0.48286703090076655;
    msg.speed = 0.20447779750302597;
    msg.gspeed = 0.5090727639234468;
    msg.heading = 0.5413595700965953;
    msg.sacc = 0.9162712985160032;
    msg.cacc = 0.6585803666553472;

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
    msg.setTimeStamp(0.9447335861270688);
    msg.setSource(61958U);
    msg.setSourceEntity(20U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(162U);
    msg.itow = 1183813137U;
    msg.lat = 0.2526993627683618;
    msg.lon = 0.4137247937858919;
    msg.height_ell = 0.33515010681794877;
    msg.height_sea = 0.34293162660922605;
    msg.hacc = 0.6753415545132525;
    msg.vacc = 0.0650745112097757;
    msg.vel_n = 0.6632183116164805;
    msg.vel_e = 0.5570679321565;
    msg.vel_d = 0.33897939313182557;
    msg.speed = 0.8717656175928172;
    msg.gspeed = 0.8288177257197628;
    msg.heading = 0.9538759054018556;
    msg.sacc = 0.6706201204427976;
    msg.cacc = 0.38505131636517864;

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
    msg.setTimeStamp(0.3853945534184453);
    msg.setSource(16919U);
    msg.setSourceEntity(77U);
    msg.setDestination(48035U);
    msg.setDestinationEntity(154U);
    msg.itow = 3528893602U;
    msg.lat = 0.8565606698699413;
    msg.lon = 0.9510282901450404;
    msg.height_ell = 0.11235834373306719;
    msg.height_sea = 0.03833299151564418;
    msg.hacc = 0.7220594582242884;
    msg.vacc = 0.10391483257507239;
    msg.vel_n = 0.4875606563853958;
    msg.vel_e = 0.3050560653108225;
    msg.vel_d = 0.8297239002329095;
    msg.speed = 0.03397159409996853;
    msg.gspeed = 0.22453345926620905;
    msg.heading = 0.9346700008931477;
    msg.sacc = 0.38638247919910185;
    msg.cacc = 0.8435094172191756;

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
    msg.setTimeStamp(0.19926195872318675);
    msg.setSource(20532U);
    msg.setSourceEntity(27U);
    msg.setDestination(47942U);
    msg.setDestinationEntity(144U);
    msg.id = 128U;
    msg.value = 0.2663479958149537;

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
    msg.setTimeStamp(0.26346961837916427);
    msg.setSource(12410U);
    msg.setSourceEntity(207U);
    msg.setDestination(53169U);
    msg.setDestinationEntity(231U);
    msg.id = 109U;
    msg.value = 0.9115372845053801;

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
    msg.setTimeStamp(0.9307840964281964);
    msg.setSource(41570U);
    msg.setSourceEntity(16U);
    msg.setDestination(34630U);
    msg.setDestinationEntity(194U);
    msg.id = 58U;
    msg.value = 0.5734612757697073;

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
    msg.setTimeStamp(0.8261477601963562);
    msg.setSource(975U);
    msg.setSourceEntity(151U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(26U);
    msg.x = 0.7145857971294763;
    msg.y = 0.2599013268098176;
    msg.z = 0.5987573045034306;
    msg.phi = 0.35515371730214373;
    msg.theta = 0.48730784706707575;
    msg.psi = 0.09637240758780119;

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
    msg.setTimeStamp(0.9504798970256227);
    msg.setSource(46643U);
    msg.setSourceEntity(94U);
    msg.setDestination(59991U);
    msg.setDestinationEntity(28U);
    msg.x = 0.7990001922727338;
    msg.y = 0.5362136991844315;
    msg.z = 0.6171312683721906;
    msg.phi = 0.23430377310833506;
    msg.theta = 0.7620316066387357;
    msg.psi = 0.2101886911448474;

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
    msg.setTimeStamp(0.9159849932352216);
    msg.setSource(61979U);
    msg.setSourceEntity(29U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(244U);
    msg.x = 0.5832904199829283;
    msg.y = 0.6357284992639626;
    msg.z = 0.20244287806901662;
    msg.phi = 0.38215878979849205;
    msg.theta = 0.44157153859838405;
    msg.psi = 0.7429255991291713;

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
    msg.setTimeStamp(0.23402574859784375);
    msg.setSource(57329U);
    msg.setSourceEntity(127U);
    msg.setDestination(60588U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.0682183188518144;
    msg.beam_height = 0.5829962698990021;

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
    msg.setTimeStamp(0.15800251467465654);
    msg.setSource(52266U);
    msg.setSourceEntity(68U);
    msg.setDestination(25986U);
    msg.setDestinationEntity(238U);
    msg.beam_width = 0.148738637553827;
    msg.beam_height = 0.8419590145087025;

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
    msg.setTimeStamp(0.00568063754632997);
    msg.setSource(19554U);
    msg.setSourceEntity(246U);
    msg.setDestination(26861U);
    msg.setDestinationEntity(194U);
    msg.beam_width = 0.05022563517339795;
    msg.beam_height = 0.7684691571098079;

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
    msg.setTimeStamp(0.03912459228339493);
    msg.setSource(6518U);
    msg.setSourceEntity(1U);
    msg.setDestination(65402U);
    msg.setDestinationEntity(181U);
    msg.sane = 170U;

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
    msg.setTimeStamp(0.4796677867371406);
    msg.setSource(38367U);
    msg.setSourceEntity(136U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(184U);
    msg.sane = 247U;

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
    msg.setTimeStamp(0.9931838778653713);
    msg.setSource(50423U);
    msg.setSourceEntity(74U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(209U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.4768300376020719);
    msg.setSource(309U);
    msg.setSourceEntity(190U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(72U);
    msg.value = 0.020818002790693124;

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
    msg.setTimeStamp(0.07540358858895946);
    msg.setSource(20350U);
    msg.setSourceEntity(181U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(61U);
    msg.value = 0.2707797049434073;

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
    msg.setTimeStamp(0.8642496276519475);
    msg.setSource(33187U);
    msg.setSourceEntity(214U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(188U);
    msg.value = 0.49771090679415664;

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
    msg.setTimeStamp(0.6190179363149774);
    msg.setSource(62800U);
    msg.setSourceEntity(79U);
    msg.setDestination(41535U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4011060976836197;

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
    msg.setTimeStamp(0.3493328928385162);
    msg.setSource(17846U);
    msg.setSourceEntity(76U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(16U);
    msg.value = 0.02518723437370618;

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
    msg.setTimeStamp(0.5848585643969348);
    msg.setSource(33707U);
    msg.setSourceEntity(198U);
    msg.setDestination(60861U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7170010656346013;

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
    msg.setTimeStamp(0.7326246623138892);
    msg.setSource(42201U);
    msg.setSourceEntity(101U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(85U);
    msg.value = 0.6167055099623534;

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
    msg.setTimeStamp(0.5725807512728621);
    msg.setSource(3944U);
    msg.setSourceEntity(182U);
    msg.setDestination(41033U);
    msg.setDestinationEntity(194U);
    msg.value = 0.06379838869504917;

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
    msg.setTimeStamp(0.7823880355594015);
    msg.setSource(23203U);
    msg.setSourceEntity(254U);
    msg.setDestination(10604U);
    msg.setDestinationEntity(37U);
    msg.value = 0.2968384442379245;

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
    msg.setTimeStamp(0.5594988343399913);
    msg.setSource(4810U);
    msg.setSourceEntity(144U);
    msg.setDestination(44957U);
    msg.setDestinationEntity(31U);
    msg.value = 0.36328887261169374;

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
    msg.setTimeStamp(0.25740836722778815);
    msg.setSource(62715U);
    msg.setSourceEntity(51U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(154U);
    msg.value = 0.2512072498103185;

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
    msg.setTimeStamp(0.3307802897999439);
    msg.setSource(34239U);
    msg.setSourceEntity(19U);
    msg.setDestination(30168U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9618337201364014;

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
    msg.setTimeStamp(0.5306741142098964);
    msg.setSource(304U);
    msg.setSourceEntity(179U);
    msg.setDestination(58199U);
    msg.setDestinationEntity(96U);
    msg.value = 0.02434975209870127;

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
    msg.setTimeStamp(0.0005562223983425207);
    msg.setSource(45567U);
    msg.setSourceEntity(200U);
    msg.setDestination(22947U);
    msg.setDestinationEntity(209U);
    msg.value = 0.46038579807084434;

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
    msg.setTimeStamp(0.421383953771186);
    msg.setSource(59006U);
    msg.setSourceEntity(20U);
    msg.setDestination(2982U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2396422329471004;

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
    msg.setTimeStamp(0.4563854740841673);
    msg.setSource(40019U);
    msg.setSourceEntity(247U);
    msg.setDestination(8053U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5551755458360348;

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
    msg.setTimeStamp(0.5279831309446374);
    msg.setSource(60513U);
    msg.setSourceEntity(221U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3817517388949524;

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
    msg.setTimeStamp(0.5305089789370799);
    msg.setSource(60069U);
    msg.setSourceEntity(101U);
    msg.setDestination(49484U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4161901311844659;

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
    msg.setTimeStamp(0.8164931615401467);
    msg.setSource(17500U);
    msg.setSourceEntity(39U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(148U);
    msg.value = 0.09289396524101923;

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
    msg.setTimeStamp(0.26322771870284045);
    msg.setSource(58448U);
    msg.setSourceEntity(211U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(151U);
    msg.value = 0.4493087588550184;

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
    msg.setTimeStamp(0.0861452075175404);
    msg.setSource(30570U);
    msg.setSourceEntity(171U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(202U);
    msg.value = 0.27991807310348804;

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
    msg.setTimeStamp(0.28132337838834665);
    msg.setSource(35649U);
    msg.setSourceEntity(157U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(213U);
    msg.value = 0.16192943609550559;

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
    msg.setTimeStamp(0.8502977740668416);
    msg.setSource(20367U);
    msg.setSourceEntity(129U);
    msg.setDestination(59439U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8108027131446492;

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
    msg.setTimeStamp(0.3659570298304434);
    msg.setSource(64923U);
    msg.setSourceEntity(230U);
    msg.setDestination(27175U);
    msg.setDestinationEntity(211U);
    msg.value = 0.6737210215982236;

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
    msg.setTimeStamp(0.19997341396402146);
    msg.setSource(6951U);
    msg.setSourceEntity(113U);
    msg.setDestination(41911U);
    msg.setDestinationEntity(203U);
    msg.validity = 63680U;
    msg.type = 130U;
    msg.tow = 2748389175U;
    msg.base_lat = 0.7399167049951809;
    msg.base_lon = 0.8015182317373108;
    msg.base_height = 0.34088563876421585;
    msg.n = 0.9624874878342454;
    msg.e = 0.9853622392514815;
    msg.d = 0.2598688474648768;
    msg.v_n = 0.11451991866133948;
    msg.v_e = 0.22255191088930593;
    msg.v_d = 0.02507107588639257;
    msg.satellites = 105U;
    msg.iar_hyp = 4272U;
    msg.iar_ratio = 0.0922985733103141;

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
    msg.setTimeStamp(0.6275022173206195);
    msg.setSource(61118U);
    msg.setSourceEntity(112U);
    msg.setDestination(50471U);
    msg.setDestinationEntity(175U);
    msg.validity = 32658U;
    msg.type = 48U;
    msg.tow = 239769089U;
    msg.base_lat = 0.6030368114779384;
    msg.base_lon = 0.4014703630653259;
    msg.base_height = 0.7382053442738575;
    msg.n = 0.5261061894031694;
    msg.e = 0.8083663087349489;
    msg.d = 0.32973572803283413;
    msg.v_n = 0.8498218056253304;
    msg.v_e = 0.7887599742018232;
    msg.v_d = 0.76917342708513;
    msg.satellites = 202U;
    msg.iar_hyp = 16003U;
    msg.iar_ratio = 0.26681719622079036;

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
    msg.setTimeStamp(0.9817002471330221);
    msg.setSource(10487U);
    msg.setSourceEntity(93U);
    msg.setDestination(8145U);
    msg.setDestinationEntity(104U);
    msg.validity = 26128U;
    msg.type = 90U;
    msg.tow = 245957053U;
    msg.base_lat = 0.006294883162160092;
    msg.base_lon = 0.8411031866241105;
    msg.base_height = 0.6626094614839548;
    msg.n = 0.23907280116768537;
    msg.e = 0.40155596189988607;
    msg.d = 0.5666193849061821;
    msg.v_n = 0.5278640600492496;
    msg.v_e = 0.607518309478787;
    msg.v_d = 0.9304561823764903;
    msg.satellites = 56U;
    msg.iar_hyp = 39176U;
    msg.iar_ratio = 0.1883963190693272;

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
    msg.setTimeStamp(0.37034758286404823);
    msg.setSource(37957U);
    msg.setSourceEntity(196U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(140U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5465963211334338;
    tmp_msg_0.lon = 0.7175697744576086;
    tmp_msg_0.height = 0.5127976006658261;
    tmp_msg_0.x = 0.9049048014355654;
    tmp_msg_0.y = 0.050608803462867114;
    tmp_msg_0.z = 0.9604571576041743;
    tmp_msg_0.phi = 0.046778176681409156;
    tmp_msg_0.theta = 0.8292770472182892;
    tmp_msg_0.psi = 0.02446210673761484;
    tmp_msg_0.u = 0.4483480355191024;
    tmp_msg_0.v = 0.8582081809400146;
    tmp_msg_0.w = 0.3785454965487012;
    tmp_msg_0.vx = 0.8120099087320908;
    tmp_msg_0.vy = 0.42039377748186824;
    tmp_msg_0.vz = 0.4632356804801683;
    tmp_msg_0.p = 0.8530449206762286;
    tmp_msg_0.q = 0.43804781292733086;
    tmp_msg_0.r = 0.19277233969640528;
    tmp_msg_0.depth = 0.16518864413654555;
    tmp_msg_0.alt = 0.42315249335791705;
    msg.state.set(tmp_msg_0);
    msg.type = 223U;

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
    msg.setTimeStamp(0.7046260856221884);
    msg.setSource(47040U);
    msg.setSourceEntity(87U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(43U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5622789073575638;
    tmp_msg_0.lon = 0.27640905647410285;
    tmp_msg_0.height = 0.2459025084403349;
    tmp_msg_0.x = 0.5406789358764856;
    tmp_msg_0.y = 0.27032184427489636;
    tmp_msg_0.z = 0.82038207059073;
    tmp_msg_0.phi = 0.19187837252650253;
    tmp_msg_0.theta = 0.7581881626753016;
    tmp_msg_0.psi = 0.25119420852474217;
    tmp_msg_0.u = 0.30995858711176516;
    tmp_msg_0.v = 0.6347400406796573;
    tmp_msg_0.w = 0.4867161325640541;
    tmp_msg_0.vx = 0.008170260820002495;
    tmp_msg_0.vy = 0.5997285094427017;
    tmp_msg_0.vz = 0.07578360065528866;
    tmp_msg_0.p = 0.27036238060824047;
    tmp_msg_0.q = 0.889374687673209;
    tmp_msg_0.r = 0.01678048410764399;
    tmp_msg_0.depth = 0.1705150828239297;
    tmp_msg_0.alt = 0.2582257857007785;
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
    msg.setTimeStamp(0.6535099112095749);
    msg.setSource(33101U);
    msg.setSourceEntity(43U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(221U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3172214759338685;
    tmp_msg_0.lon = 0.2845476512506169;
    tmp_msg_0.height = 0.08310791407050333;
    tmp_msg_0.x = 0.4289618515756142;
    tmp_msg_0.y = 0.94441221979991;
    tmp_msg_0.z = 0.41549917740940945;
    tmp_msg_0.phi = 0.43968679092373186;
    tmp_msg_0.theta = 0.6647505114581568;
    tmp_msg_0.psi = 0.4468095377038943;
    tmp_msg_0.u = 0.5406944497578625;
    tmp_msg_0.v = 0.6762865485935102;
    tmp_msg_0.w = 0.09991005993068236;
    tmp_msg_0.vx = 0.8340744917355035;
    tmp_msg_0.vy = 0.5078041701121814;
    tmp_msg_0.vz = 0.23187179475139275;
    tmp_msg_0.p = 0.8978853290421263;
    tmp_msg_0.q = 0.005356585264349234;
    tmp_msg_0.r = 0.6986375182171888;
    tmp_msg_0.depth = 0.5199550330945122;
    tmp_msg_0.alt = 0.9976516239471341;
    msg.state.set(tmp_msg_0);
    msg.type = 207U;

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
    msg.setTimeStamp(0.8733175967576522);
    msg.setSource(4113U);
    msg.setSourceEntity(31U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(127U);
    msg.value = 0.4041567619759753;

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
    msg.setTimeStamp(0.2592058427081084);
    msg.setSource(64920U);
    msg.setSourceEntity(219U);
    msg.setDestination(3809U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8174100055230521;

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
    msg.setTimeStamp(0.33306903795655296);
    msg.setSource(1967U);
    msg.setSourceEntity(3U);
    msg.setDestination(635U);
    msg.setDestinationEntity(42U);
    msg.value = 0.12503977818878587;

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
    msg.setTimeStamp(0.7399197787844601);
    msg.setSource(14836U);
    msg.setSourceEntity(248U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5588280579459532;

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
    msg.setTimeStamp(0.2660120565116363);
    msg.setSource(59221U);
    msg.setSourceEntity(114U);
    msg.setDestination(2218U);
    msg.setDestinationEntity(131U);
    msg.value = 0.347621049096713;

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
    msg.setTimeStamp(0.3363198184243912);
    msg.setSource(38136U);
    msg.setSourceEntity(207U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(204U);
    msg.value = 0.25309684522274223;

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
    msg.setTimeStamp(0.39168278498512865);
    msg.setSource(46311U);
    msg.setSourceEntity(6U);
    msg.setDestination(7939U);
    msg.setDestinationEntity(216U);
    msg.value = 0.7437346838714171;

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
    msg.setTimeStamp(0.2781754917412478);
    msg.setSource(64030U);
    msg.setSourceEntity(238U);
    msg.setDestination(9700U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9973243699374632;

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
    msg.setTimeStamp(0.7984097800575265);
    msg.setSource(34820U);
    msg.setSourceEntity(254U);
    msg.setDestination(40467U);
    msg.setDestinationEntity(103U);
    msg.value = 0.4366599699097008;

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
    msg.setTimeStamp(0.6548883231090131);
    msg.setSource(31230U);
    msg.setSourceEntity(236U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(49U);
    msg.value = 0.08608802163633078;

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
    msg.setTimeStamp(0.39515846487279993);
    msg.setSource(39367U);
    msg.setSourceEntity(140U);
    msg.setDestination(35758U);
    msg.setDestinationEntity(111U);
    msg.value = 0.08800856789033873;

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
    msg.setTimeStamp(0.2855941087228743);
    msg.setSource(18629U);
    msg.setSourceEntity(102U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(134U);
    msg.value = 0.007762332594812293;

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
    msg.setTimeStamp(0.4167285416173939);
    msg.setSource(58984U);
    msg.setSourceEntity(39U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(210U);
    msg.value = 0.4734624650114293;

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
    msg.setTimeStamp(0.0501531985576793);
    msg.setSource(16076U);
    msg.setSourceEntity(145U);
    msg.setDestination(59528U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8738511698268724;

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
    msg.setTimeStamp(0.0636345496875631);
    msg.setSource(52960U);
    msg.setSourceEntity(172U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5723850916911718;

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
    msg.setTimeStamp(0.7619772176017862);
    msg.setSource(6107U);
    msg.setSourceEntity(85U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(20U);
    msg.id = 144U;
    msg.zoom = 41U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.9526477831381833);
    msg.setSource(14090U);
    msg.setSourceEntity(2U);
    msg.setDestination(44355U);
    msg.setDestinationEntity(167U);
    msg.id = 36U;
    msg.zoom = 197U;
    msg.action = 139U;

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
    msg.setTimeStamp(0.33922451258028063);
    msg.setSource(33431U);
    msg.setSourceEntity(241U);
    msg.setDestination(14446U);
    msg.setDestinationEntity(158U);
    msg.id = 2U;
    msg.zoom = 231U;
    msg.action = 94U;

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
    msg.setTimeStamp(0.5766792222659781);
    msg.setSource(18828U);
    msg.setSourceEntity(77U);
    msg.setDestination(54883U);
    msg.setDestinationEntity(117U);
    msg.id = 216U;
    msg.value = 0.9477558477317827;

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
    msg.setTimeStamp(0.1000924482903559);
    msg.setSource(41456U);
    msg.setSourceEntity(14U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(227U);
    msg.id = 92U;
    msg.value = 0.548256001599223;

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
    msg.setTimeStamp(0.0744628831689973);
    msg.setSource(51648U);
    msg.setSourceEntity(66U);
    msg.setDestination(63869U);
    msg.setDestinationEntity(156U);
    msg.id = 53U;
    msg.value = 0.8587659534448213;

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
    msg.setTimeStamp(0.9690392003635572);
    msg.setSource(62335U);
    msg.setSourceEntity(205U);
    msg.setDestination(2974U);
    msg.setDestinationEntity(16U);
    msg.id = 241U;
    msg.value = 0.15738093355687333;

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
    msg.setTimeStamp(0.8048242792502273);
    msg.setSource(1188U);
    msg.setSourceEntity(122U);
    msg.setDestination(62530U);
    msg.setDestinationEntity(46U);
    msg.id = 43U;
    msg.value = 0.33421948806273105;

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
    msg.setTimeStamp(0.823144254527422);
    msg.setSource(32611U);
    msg.setSourceEntity(140U);
    msg.setDestination(21170U);
    msg.setDestinationEntity(243U);
    msg.id = 218U;
    msg.value = 0.1614495782155373;

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
    msg.setTimeStamp(0.5286751280447197);
    msg.setSource(3894U);
    msg.setSourceEntity(49U);
    msg.setDestination(14102U);
    msg.setDestinationEntity(111U);
    msg.id = 8U;
    msg.angle = 0.9042741770205275;

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
    msg.setTimeStamp(0.2899931343373049);
    msg.setSource(64084U);
    msg.setSourceEntity(56U);
    msg.setDestination(8301U);
    msg.setDestinationEntity(90U);
    msg.id = 41U;
    msg.angle = 0.7710531146618773;

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
    msg.setTimeStamp(0.8809535585827849);
    msg.setSource(32286U);
    msg.setSourceEntity(144U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(57U);
    msg.id = 71U;
    msg.angle = 0.2410727928454769;

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
    msg.setTimeStamp(0.7818901677270843);
    msg.setSource(15874U);
    msg.setSourceEntity(102U);
    msg.setDestination(19771U);
    msg.setDestinationEntity(61U);
    msg.op = 40U;
    msg.actions.assign("GIQTHNHSJZGRZHPCDURBOIAQBAHXJVOKLWACCGWDSUUUEQPFJBPUVYGVYQXLXPGMPJKTQEAQJBDSKONSRGIVHQWOFWYYXHXYPSEJQIB");

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
    msg.setTimeStamp(0.2879409982590887);
    msg.setSource(36615U);
    msg.setSourceEntity(97U);
    msg.setDestination(55794U);
    msg.setDestinationEntity(95U);
    msg.op = 51U;
    msg.actions.assign("NNXLNHYFXXBEHUHRWFSZNMWAKYVFWVHKVIVSREVVLFHKZSBRICZKXKRUZTFZAFGWEOBHNDXUUKETAJOOMOWWCVUFMCYSLXKYDIMLEHGRWOUVNMLGIQPLMFPQQGTOZSJWYSBPHBQBPGOIDAYTPTGAACDDESOKDPUJTSCBCGBZRCNJYUOLRZIQJXFCJNCXXSNMADJWUPVPLDTEQQQMJIHBZGRMGLIKNFBEDAPST");

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
    msg.setTimeStamp(0.7668978415546674);
    msg.setSource(61803U);
    msg.setSourceEntity(154U);
    msg.setDestination(3734U);
    msg.setDestinationEntity(25U);
    msg.op = 176U;
    msg.actions.assign("XVAUXDAHVDFUWZYHYUTKVVMGHZASMNBCFUMNBNBKRJUYESBTGNEJUJQXFXXJGELCWXIREXIVZOFZMPDUCQGTFIXFFOQRANHKZWATBEYWYQHRXJEIPVJLZYOHDQWQEXESRZLKQRPJTULPBSEKNPGAHSZBTICILRMFNCVDWSIWYLPMKCPYPOYHMMCQSHKMOFVKDBGGISNTG");

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
    msg.setTimeStamp(0.6309800487317911);
    msg.setSource(44712U);
    msg.setSourceEntity(193U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(146U);
    msg.actions.assign("NFPKQSAUDGCJWLNTDCRFHPIRVYTJFWKPSIZYEHMJEWTQLPBZZZNVXJIGZSYZKFBCDELYNS");

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
    msg.setTimeStamp(0.9261885648726871);
    msg.setSource(47787U);
    msg.setSourceEntity(91U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(158U);
    msg.actions.assign("NGVWPOXORMQRSDODLZJJKQCWLRXTZTUTKZOYAONNAYFAZBMVEHEKHDTCBMBQOPUSXIZAFVCEYFLVCWAGJVYXFXRVFLTFXKZZSRQJSJSUMEXGPUJTIJICIGLADLGYHKCSKVSWISKOMVFXIEWNXMWRWH");

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
    msg.setTimeStamp(0.9017480242413847);
    msg.setSource(39179U);
    msg.setSourceEntity(3U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("MTMPMDMNZWYGPPWLVERTPQGCCKIANCVJCBDBTYOYOEXGJWEIMJSLDUAFQLJANGNRHDHBOGWRAPJOTLUZJSYFHMYKWSBQUUCZJVWYDQQKQCPLTUAQIHEGISVJZDQPYUKMSIVOVMXBESNRAIXNXDYJKLHCGIZWXRRFKGZDDFLUHQKYYRSTZAR");

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
    msg.setTimeStamp(0.8483662934063902);
    msg.setSource(64833U);
    msg.setSourceEntity(11U);
    msg.setDestination(46266U);
    msg.setDestinationEntity(7U);
    msg.button = 109U;
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
    msg.setTimeStamp(0.7442741782072676);
    msg.setSource(51628U);
    msg.setSourceEntity(67U);
    msg.setDestination(63670U);
    msg.setDestinationEntity(215U);
    msg.button = 189U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.5038928887828609);
    msg.setSource(32253U);
    msg.setSourceEntity(82U);
    msg.setDestination(39578U);
    msg.setDestinationEntity(138U);
    msg.button = 219U;
    msg.value = 9U;

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
    msg.setTimeStamp(0.27679862295149027);
    msg.setSource(59420U);
    msg.setSourceEntity(13U);
    msg.setDestination(10542U);
    msg.setDestinationEntity(40U);
    msg.op = 87U;
    msg.text.assign("SNDEHHUMYPFCTTWZYWZNIPCBBPSHGIZDHKTOGBEOSTMYHXKUEABEKEUPCAKDARUDZKPWLXTKVDIEYJTLDZLBASBGIMBBVVOTFLZKTLMHMMRKLEVQIWSXBBQQFGDCO");

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
    msg.setTimeStamp(0.21314469025686722);
    msg.setSource(27714U);
    msg.setSourceEntity(136U);
    msg.setDestination(45694U);
    msg.setDestinationEntity(157U);
    msg.op = 116U;
    msg.text.assign("BKOTEFUQXDVCFZHZXUQHMVODBPRKMILYWRNNONSABCKSIJVUOJJYTPAQSKJJPTGGKTDPXHWYMDILIPOIJEMTDJEPMVCVRQYJPOCLGZUIKVSZSNWAWNWHVNBGRILDLJGUFMAQRTGVOOQSAFGXRYNFLBEWEZWPSX");

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
    msg.setTimeStamp(0.9550821631393196);
    msg.setSource(10848U);
    msg.setSourceEntity(189U);
    msg.setDestination(56521U);
    msg.setDestinationEntity(10U);
    msg.op = 253U;
    msg.text.assign("GFTIOWCJPVQHHHEAFDKNRNSQAWKEZTHLQRJGNDX");

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
    msg.setTimeStamp(0.9808019450363626);
    msg.setSource(60955U);
    msg.setSourceEntity(209U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(12U);
    msg.op = 63U;
    msg.time_remain = 0.6488317615982062;
    msg.sched_time = 0.6230828214182915;

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
    msg.setTimeStamp(0.8139082789848047);
    msg.setSource(49617U);
    msg.setSourceEntity(132U);
    msg.setDestination(31919U);
    msg.setDestinationEntity(37U);
    msg.op = 43U;
    msg.time_remain = 0.3091953310472274;
    msg.sched_time = 0.41285047485428483;

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
    msg.setTimeStamp(0.13255541859529807);
    msg.setSource(45701U);
    msg.setSourceEntity(87U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(163U);
    msg.op = 180U;
    msg.time_remain = 0.1848073343469092;
    msg.sched_time = 0.38234399750981996;

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
    msg.setTimeStamp(0.14050876130976386);
    msg.setSource(65254U);
    msg.setSourceEntity(254U);
    msg.setDestination(53365U);
    msg.setDestinationEntity(165U);
    msg.name.assign("OTVJEPXHOMOBWQVPTAKYUTXGSJANUQGPXYAXOHTWZRCSUIJLJJWXTBNGDCCRQISFDAIIHLMFCHYGIOOFFMQKDAEIUFUKCOVBHKDWNJYXSPWPILJWIRZDBEYQVYLSTQLABWLRKEZABMRXUEUTDEJKUWFAEKIFM");
    msg.op = 28U;
    msg.sched_time = 0.0816870678854541;

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
    msg.setTimeStamp(0.5755791813731116);
    msg.setSource(23004U);
    msg.setSourceEntity(97U);
    msg.setDestination(25179U);
    msg.setDestinationEntity(168U);
    msg.name.assign("CXXUZQYTALXASIMEJHQBBYFOKMRAXU");
    msg.op = 219U;
    msg.sched_time = 0.4804850102842375;

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
    msg.setTimeStamp(0.4493630134807125);
    msg.setSource(13944U);
    msg.setSourceEntity(59U);
    msg.setDestination(28183U);
    msg.setDestinationEntity(236U);
    msg.name.assign("IPCXHNJCEITRLRUARHQVEGEOQEGRUSPAGSHVKRNUDRIXUTKJEQTPVYFOBLXEAHWGZYMXGTYFQDIYLPWXKNQBIRVSIMAWMTBMVUQAKPCJBTCOUEFFRLVBRKHLONCWDECSCEKPOLZHJWNK");
    msg.op = 208U;
    msg.sched_time = 0.794567857989193;

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
    msg.setTimeStamp(0.6623058390151172);
    msg.setSource(61677U);
    msg.setSourceEntity(175U);
    msg.setDestination(18548U);
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
    msg.setTimeStamp(0.07574474008223164);
    msg.setSource(61903U);
    msg.setSourceEntity(62U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.7450177825687789);
    msg.setSource(42025U);
    msg.setSourceEntity(239U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.6870835341196813);
    msg.setSource(18068U);
    msg.setSourceEntity(103U);
    msg.setDestination(62604U);
    msg.setDestinationEntity(251U);
    msg.name.assign("UAWVBPZAWGSZAJYBOKJPIBIVIKCLGUZNMCIMZFPOBOQTDXHYDLWCDQMHPKGNBTNXGBOVTLAMCAIRBWQJHWLRQKUBMXWENCMOGFSMSWOGLQEDQUUUAQYQHMRQSUWFZDMRREPCVWLZ");
    msg.state = 233U;

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
    msg.setTimeStamp(0.8034761161660028);
    msg.setSource(59826U);
    msg.setSourceEntity(222U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(30U);
    msg.name.assign("HJCJOAEBUMMNKGUSVFVZSYOFWLER");
    msg.state = 25U;

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
    msg.setTimeStamp(0.005051016057418867);
    msg.setSource(52349U);
    msg.setSourceEntity(30U);
    msg.setDestination(10704U);
    msg.setDestinationEntity(182U);
    msg.name.assign("ZXQMNSCCSLKLGXYMEAWDWIOUBNRLNTQLRGBZXEVKHLHPJEYHDVQQCDEKVYOQSBJGNHKIFDTCYOIAMTFFWFHFYRYELUSARDYWJSHACIVLHOVXTPKBVJTRTYBTKPJBRPZGXNKJFZCGICQPCESHYLMRNUWSBAKMCIGFDZWUVOSEDRJWXSWEMXMRSKBXJTEXOBOWGAMPUZTKIZAPANJVLQZP");
    msg.state = 178U;

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
    msg.setTimeStamp(0.6283327967278574);
    msg.setSource(51370U);
    msg.setSourceEntity(70U);
    msg.setDestination(4490U);
    msg.setDestinationEntity(170U);
    msg.name.assign("BWBTAYZUULZKYVCMHNKCWETRXPTLWFZXAVLEOLOOJRJNMNIDWBXNYNBKQITPTRIPUFTGLSQIIFDGQJBOSVCUKYFYEGTIMLSUQBBMDGDWGZYSSEWMMDVGELNKSEBPIXBMKMOAYCDUMQIVRSAIYVTXAOHACSJRRQJVCWYOLXODFECJPKCHHZRPWXWHUDEGJAYUUCZGTHZERZFHANJWSIAAHPPFNVLGNUQTJQNPOZQZBKPCFVVKHFSQGJRO");
    msg.value = 62U;

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
    msg.setTimeStamp(0.8690631201789637);
    msg.setSource(18489U);
    msg.setSourceEntity(242U);
    msg.setDestination(20024U);
    msg.setDestinationEntity(182U);
    msg.name.assign("EGRVTNSLGNUSETROIGXYXASLUEDUHJIAUTUVWGZDIAG");
    msg.value = 124U;

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
    msg.setTimeStamp(0.06603210013858385);
    msg.setSource(49534U);
    msg.setSourceEntity(250U);
    msg.setDestination(49968U);
    msg.setDestinationEntity(173U);
    msg.name.assign("GJKMBCYHNQLIAJMTIIHOROVHWBACAKICDTQPRTKWADQFSWXKZGTSXBXWQGYQCJZZVREFOSBIYGWLBODPPABWFZKPUVBWLDCRJUMKTYXVUFKCDHJTAYVXIUZBYNOQAMADJVNRTJFYLOFTZENTWPLISDMNOSRDZVVMCLEXLEOAJHGXXSFFGURNPLVUIMKYWUYCPGKERSQMMTUUXLUMHRFENHVEQQG");
    msg.value = 117U;

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
    msg.setTimeStamp(0.981561468587791);
    msg.setSource(39654U);
    msg.setSourceEntity(163U);
    msg.setDestination(52644U);
    msg.setDestinationEntity(107U);
    msg.name.assign("RLPVISWGVTGKDFYOXXPIBHJVACLPWVQEATJRSYNJYPWONPZUNLLWQGSECACFETTWXWSLJRDRUSUNRKWOIVUNOKFFBBKF");

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
    msg.setTimeStamp(0.8188723268552545);
    msg.setSource(52732U);
    msg.setSourceEntity(161U);
    msg.setDestination(6856U);
    msg.setDestinationEntity(129U);
    msg.name.assign("GWMGBUASENQQSUXSLCNYYIFTRPFDPNDBYOETRHZKONMRFXYQUCQSRXVOTPEFEBCHDJCDMVIOUUDZCHAHFSICFHQXQWEAEHKXEWFGHJAZTWQNOGAIL");

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
    msg.setTimeStamp(0.25995782388242783);
    msg.setSource(51743U);
    msg.setSourceEntity(247U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(70U);
    msg.name.assign("BETGMUEHQLYQXIUIFHCYJEEZMCXULUIUGRIZJXRXZREBTRQPBJAYNIGQQWXEWNNNVULTPHDMKSFEOYBBOIQWVLOCTDGDZADRBWAQUADSJCXMKPNOLLZYWJNFCCDFUYDKQOHWPSWKKMKQXRSHFVTEVEMDATJAT");

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
    msg.setTimeStamp(0.4263319192413566);
    msg.setSource(35080U);
    msg.setSourceEntity(19U);
    msg.setDestination(34764U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HQAMWTJVXUWSYFVHLEUUZODPOATIXLSMNSUWGEYSMOLBQJDYONJBOPECKITXRPUHTIKHGEMYCZHDPTUYTIIXQMPSCKPBYGBFPKXVZXLSDKLQLOIVWCVNWJSRDAIWVYTFQFAXVOCRJDPRGTANGRKNZSQWXEDRFXGUBEBPHWNZKLDCCTORVHZNLXCZQJVYAEHBGMGJNCUEMRYFTMSKACIMRZPSKZBY");
    msg.value = 246U;

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
    msg.setTimeStamp(0.10127432547677495);
    msg.setSource(53809U);
    msg.setSourceEntity(197U);
    msg.setDestination(6093U);
    msg.setDestinationEntity(63U);
    msg.name.assign("XHMRUPWJPERWNHKYMYYPMSRTKWTAOCJDFLQUMADNFSRMP");
    msg.value = 195U;

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
    msg.setTimeStamp(0.7447254583668076);
    msg.setSource(46389U);
    msg.setSourceEntity(97U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(175U);
    msg.name.assign("RCGJHFYBEVXKYV");
    msg.value = 32U;

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
    msg.setTimeStamp(0.2839845881660664);
    msg.setSource(14076U);
    msg.setSourceEntity(171U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(209U);
    msg.id = 63U;
    msg.period = 386108765U;
    msg.duty_cycle = 2367339891U;

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
    msg.setTimeStamp(0.3165535026278431);
    msg.setSource(52396U);
    msg.setSourceEntity(88U);
    msg.setDestination(52257U);
    msg.setDestinationEntity(116U);
    msg.id = 157U;
    msg.period = 4187354810U;
    msg.duty_cycle = 1914464465U;

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
    msg.setTimeStamp(0.44810636262416614);
    msg.setSource(61351U);
    msg.setSourceEntity(28U);
    msg.setDestination(62553U);
    msg.setDestinationEntity(76U);
    msg.id = 82U;
    msg.period = 683671467U;
    msg.duty_cycle = 4001263423U;

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
    msg.setTimeStamp(0.11688542052267037);
    msg.setSource(21328U);
    msg.setSourceEntity(82U);
    msg.setDestination(3315U);
    msg.setDestinationEntity(216U);
    msg.id = 111U;
    msg.period = 859374701U;
    msg.duty_cycle = 126721675U;

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
    msg.setTimeStamp(0.10750920857816149);
    msg.setSource(57083U);
    msg.setSourceEntity(91U);
    msg.setDestination(65131U);
    msg.setDestinationEntity(148U);
    msg.id = 93U;
    msg.period = 3259188282U;
    msg.duty_cycle = 169324509U;

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
    msg.setTimeStamp(0.05985090540639049);
    msg.setSource(22946U);
    msg.setSourceEntity(159U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(74U);
    msg.id = 62U;
    msg.period = 1856605433U;
    msg.duty_cycle = 3722351498U;

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
    msg.setTimeStamp(0.9322467493951424);
    msg.setSource(13443U);
    msg.setSourceEntity(138U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.1300011699270721;
    msg.lon = 0.16523164074585617;
    msg.height = 0.12646310117518533;
    msg.x = 0.32040091062053555;
    msg.y = 0.4788254480121653;
    msg.z = 0.16599046800576478;
    msg.phi = 0.3998817098680373;
    msg.theta = 0.8731689280204137;
    msg.psi = 0.09833759246311824;
    msg.u = 0.6740611423591648;
    msg.v = 0.1723349553043052;
    msg.w = 0.08231048295356791;
    msg.vx = 0.14754877023521618;
    msg.vy = 0.34888467159354664;
    msg.vz = 0.03979862194902928;
    msg.p = 0.31920460358572333;
    msg.q = 0.8022083578872199;
    msg.r = 0.8108354344465433;
    msg.depth = 0.7706740327682408;
    msg.alt = 0.09878416819138414;

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
    msg.setTimeStamp(0.44152113865305687);
    msg.setSource(51739U);
    msg.setSourceEntity(117U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.24969888291015319;
    msg.lon = 0.5415834839642271;
    msg.height = 0.20691498917116458;
    msg.x = 0.0326561456005624;
    msg.y = 0.8888837640610979;
    msg.z = 0.025836603507065847;
    msg.phi = 0.0691789006241279;
    msg.theta = 0.4022046790448949;
    msg.psi = 0.4308802189080081;
    msg.u = 0.2380507436486481;
    msg.v = 0.6713124953116244;
    msg.w = 0.8780315028418488;
    msg.vx = 0.1826942503724901;
    msg.vy = 0.34271658591304033;
    msg.vz = 0.7179088425974597;
    msg.p = 0.883648482101775;
    msg.q = 0.7762665268142245;
    msg.r = 0.9138321904114634;
    msg.depth = 0.38825699606420916;
    msg.alt = 0.7624329345134063;

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
    msg.setTimeStamp(0.17964757784428764);
    msg.setSource(52452U);
    msg.setSourceEntity(74U);
    msg.setDestination(3298U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.41514652480569003;
    msg.lon = 0.3309573264500344;
    msg.height = 0.9978879675358034;
    msg.x = 0.5051517887561608;
    msg.y = 0.3245937734909261;
    msg.z = 0.9940928856565395;
    msg.phi = 0.5050765817494189;
    msg.theta = 0.5123807008506291;
    msg.psi = 0.4540330057852956;
    msg.u = 0.1602845489507867;
    msg.v = 0.883328607003012;
    msg.w = 0.8697608264042679;
    msg.vx = 0.6349216925128798;
    msg.vy = 0.23642072764902966;
    msg.vz = 0.3208965276028367;
    msg.p = 0.5957686922824726;
    msg.q = 0.17750889380788637;
    msg.r = 0.9945058214589704;
    msg.depth = 0.8937492974408613;
    msg.alt = 0.8658415981722979;

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
    msg.setTimeStamp(0.7134035472276197);
    msg.setSource(44979U);
    msg.setSourceEntity(184U);
    msg.setDestination(30097U);
    msg.setDestinationEntity(141U);
    msg.x = 0.03690133576095456;
    msg.y = 0.34680889850855734;
    msg.z = 0.035800662452110554;

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
    msg.setTimeStamp(0.3070129387431899);
    msg.setSource(24017U);
    msg.setSourceEntity(183U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(46U);
    msg.x = 0.6984404081040415;
    msg.y = 0.4643084686686487;
    msg.z = 0.8180796433408676;

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
    msg.setTimeStamp(0.2590669724924335);
    msg.setSource(3465U);
    msg.setSourceEntity(175U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(28U);
    msg.x = 0.5026793302578523;
    msg.y = 0.841731911365127;
    msg.z = 0.8122554703517657;

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
    msg.setTimeStamp(0.4565863762163531);
    msg.setSource(26591U);
    msg.setSourceEntity(161U);
    msg.setDestination(25002U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6891062015058218;

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
    msg.setTimeStamp(0.5092839022880004);
    msg.setSource(40036U);
    msg.setSourceEntity(147U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8612586591545239;

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
    msg.setTimeStamp(0.5204296080556624);
    msg.setSource(46488U);
    msg.setSourceEntity(103U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(155U);
    msg.value = 0.35482398176079677;

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
    msg.setTimeStamp(0.8425961946330476);
    msg.setSource(46042U);
    msg.setSourceEntity(228U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3798464370450494;

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
    msg.setTimeStamp(0.5537536161354193);
    msg.setSource(43766U);
    msg.setSourceEntity(89U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6669015375751193;

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
    msg.setTimeStamp(0.3984290077075895);
    msg.setSource(54286U);
    msg.setSourceEntity(45U);
    msg.setDestination(41086U);
    msg.setDestinationEntity(35U);
    msg.value = 0.35146323515741584;

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
    msg.setTimeStamp(0.3912417148921471);
    msg.setSource(43197U);
    msg.setSourceEntity(233U);
    msg.setDestination(38840U);
    msg.setDestinationEntity(48U);
    msg.x = 0.41469820989767414;
    msg.y = 0.06308661204341026;
    msg.z = 0.4949043252381812;
    msg.phi = 0.9079368577974831;
    msg.theta = 0.4552042342761209;
    msg.psi = 0.19330047032664732;
    msg.p = 0.0790724844784898;
    msg.q = 0.4773909432293696;
    msg.r = 0.023926349564665328;
    msg.u = 0.8754115314864689;
    msg.v = 0.3518946526488873;
    msg.w = 0.577425251810219;
    msg.bias_psi = 0.21358292540248836;
    msg.bias_r = 0.6177412683548914;

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
    msg.setTimeStamp(0.21674051479796697);
    msg.setSource(47850U);
    msg.setSourceEntity(234U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(199U);
    msg.x = 0.14210301373391832;
    msg.y = 0.2919868032171903;
    msg.z = 0.39198127747920253;
    msg.phi = 0.23843308330361246;
    msg.theta = 0.20543423932269889;
    msg.psi = 0.14984578541795424;
    msg.p = 0.021317208006512156;
    msg.q = 0.020244649273679527;
    msg.r = 0.19761912006064553;
    msg.u = 0.8055828714447318;
    msg.v = 0.16353890575374375;
    msg.w = 0.07827827881912064;
    msg.bias_psi = 0.7683976124868752;
    msg.bias_r = 0.7776047989899675;

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
    msg.setTimeStamp(0.2811530617744121);
    msg.setSource(33560U);
    msg.setSourceEntity(106U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(100U);
    msg.x = 0.5072655625133934;
    msg.y = 0.5030908228457117;
    msg.z = 0.7400086606326413;
    msg.phi = 0.8540210602958073;
    msg.theta = 0.2875243950505133;
    msg.psi = 0.2616015938652978;
    msg.p = 0.7169823943423492;
    msg.q = 0.8156284701817792;
    msg.r = 0.1469257703149056;
    msg.u = 0.1960485764349107;
    msg.v = 0.5772529013331508;
    msg.w = 0.4880225592989983;
    msg.bias_psi = 0.9683468504550413;
    msg.bias_r = 0.6189291402946984;

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
    msg.setTimeStamp(0.7999893059918901);
    msg.setSource(8396U);
    msg.setSourceEntity(198U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(37U);
    msg.bias_psi = 0.029338784981686516;
    msg.bias_r = 0.18796865683318897;
    msg.cog = 0.00790389554779225;
    msg.cyaw = 0.22566167186772212;
    msg.lbl_rej_level = 0.16114950363771097;
    msg.gps_rej_level = 0.16916982516021306;
    msg.custom_x = 0.34855561382918254;
    msg.custom_y = 0.4444219640108473;
    msg.custom_z = 0.1312170512168681;

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
    msg.setTimeStamp(0.215110658633331);
    msg.setSource(31334U);
    msg.setSourceEntity(197U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(22U);
    msg.bias_psi = 0.4649751631746062;
    msg.bias_r = 0.06459842383894121;
    msg.cog = 0.9349195503418016;
    msg.cyaw = 0.12535143969930207;
    msg.lbl_rej_level = 0.7617506256308219;
    msg.gps_rej_level = 0.8089199382551986;
    msg.custom_x = 0.020001152051882243;
    msg.custom_y = 0.6067020281504345;
    msg.custom_z = 0.8752253397659362;

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
    msg.setTimeStamp(0.06256693841242977);
    msg.setSource(16936U);
    msg.setSourceEntity(4U);
    msg.setDestination(58170U);
    msg.setDestinationEntity(188U);
    msg.bias_psi = 0.8162497371306912;
    msg.bias_r = 0.06813543714950099;
    msg.cog = 0.2351677898144542;
    msg.cyaw = 0.07366630257289475;
    msg.lbl_rej_level = 0.2193096701765216;
    msg.gps_rej_level = 0.9763667782180215;
    msg.custom_x = 0.22118915910898185;
    msg.custom_y = 0.18798537116459657;
    msg.custom_z = 0.6467342353528136;

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
    msg.setTimeStamp(0.7217065931618118);
    msg.setSource(6066U);
    msg.setSourceEntity(196U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(228U);
    msg.utc_time = 0.47953911333863675;
    msg.reason = 10U;

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
    msg.setTimeStamp(0.31699221135341304);
    msg.setSource(45496U);
    msg.setSourceEntity(229U);
    msg.setDestination(15566U);
    msg.setDestinationEntity(218U);
    msg.utc_time = 0.5259690011826021;
    msg.reason = 38U;

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
    msg.setTimeStamp(0.7708523848259008);
    msg.setSource(53960U);
    msg.setSourceEntity(166U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.4092531501883654;
    msg.reason = 54U;

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
    msg.setTimeStamp(0.20109715306530007);
    msg.setSource(7219U);
    msg.setSourceEntity(120U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(50U);
    msg.id = 136U;
    msg.range = 0.014382658257111491;
    msg.acceptance = 154U;

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
    msg.setTimeStamp(0.16165177109072182);
    msg.setSource(53985U);
    msg.setSourceEntity(239U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(184U);
    msg.id = 244U;
    msg.range = 0.3819593875823777;
    msg.acceptance = 18U;

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
    msg.setTimeStamp(0.52072188643798);
    msg.setSource(56331U);
    msg.setSourceEntity(117U);
    msg.setDestination(40247U);
    msg.setDestinationEntity(120U);
    msg.id = 63U;
    msg.range = 0.5831401165616814;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.9596969337471392);
    msg.setSource(12077U);
    msg.setSourceEntity(37U);
    msg.setDestination(25655U);
    msg.setDestinationEntity(25U);
    msg.type = 138U;
    msg.reason = 75U;
    msg.value = 0.580732651300351;
    msg.timestep = 0.9356353126207734;

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
    msg.setTimeStamp(0.23649485241242263);
    msg.setSource(4503U);
    msg.setSourceEntity(22U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(217U);
    msg.type = 140U;
    msg.reason = 168U;
    msg.value = 0.5129862722978233;
    msg.timestep = 0.16016218723625897;

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
    msg.setTimeStamp(0.26262485370958333);
    msg.setSource(62460U);
    msg.setSourceEntity(202U);
    msg.setDestination(38418U);
    msg.setDestinationEntity(228U);
    msg.type = 196U;
    msg.reason = 93U;
    msg.value = 0.12875530461005968;
    msg.timestep = 0.34898927652030076;

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
    msg.setTimeStamp(0.0722430672436144);
    msg.setSource(49831U);
    msg.setSourceEntity(249U);
    msg.setDestination(26257U);
    msg.setDestinationEntity(171U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("USAZCDUFIHWKFUVPGIMMRGWPXMJPLGBVLUAEEZKBZKPTVQVWNCFBOJQMDMDHLUJEYLYHBISEGSOEJWZLPEXHGHJGTXMIUNLXQDIWOGEOPRXVYAKWZXCHVBAGMSVIPJCTXERICRLFCQKBDDJQNBCYJDXHEIBCRVITHWWNSWNOKWHVCNZXUDYZZSYPCHYTNBANNQTKYIBTFLRUSZOOGTQPSQNGJUAFXERZYTOKMRUMLDTAM");
    tmp_msg_0.lat = 0.5233397733855425;
    tmp_msg_0.lon = 0.72603155527905;
    tmp_msg_0.depth = 0.7464114801717306;
    tmp_msg_0.query_channel = 95U;
    tmp_msg_0.reply_channel = 8U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7391890381924312;
    msg.y = 0.6375891757166428;
    msg.var_x = 0.16511642631593682;
    msg.var_y = 0.8189089606683944;
    msg.distance = 0.3961519229381646;

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
    msg.setTimeStamp(0.9259399810843703);
    msg.setSource(49203U);
    msg.setSourceEntity(50U);
    msg.setDestination(43147U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VWIIEJGIZEXTLELIJSUKMPSNIKBSKLQJTFNLRHVNBKXFAHIKQISDTXDBEOGUTJQNUWVQMZDYPFXLKGHKDNOGCNMVWBEFBZWLWZACVSUAAQD");
    tmp_msg_0.lat = 0.4514117782978815;
    tmp_msg_0.lon = 0.5686798511058208;
    tmp_msg_0.depth = 0.7641355699840202;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9954762707447564;
    msg.y = 0.21463321087740383;
    msg.var_x = 0.9252203766351208;
    msg.var_y = 0.1830409408428173;
    msg.distance = 0.1983549526007684;

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
    msg.setTimeStamp(0.14565112699962934);
    msg.setSource(31661U);
    msg.setSourceEntity(166U);
    msg.setDestination(59226U);
    msg.setDestinationEntity(11U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UMQSINWWXGVWHDZPTZLRZPXIYVZBVQXD");
    tmp_msg_0.lat = 0.2113757418598503;
    tmp_msg_0.lon = 0.6777074981345035;
    tmp_msg_0.depth = 0.6526256781549418;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.19037130265145297;
    msg.y = 0.31499076924813985;
    msg.var_x = 0.07187507677593252;
    msg.var_y = 0.9340240884726759;
    msg.distance = 0.8485527345980038;

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
    msg.setTimeStamp(0.8426971913264898);
    msg.setSource(18879U);
    msg.setSourceEntity(203U);
    msg.setDestination(25883U);
    msg.setDestinationEntity(27U);
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
    msg.setTimeStamp(0.9266055979271551);
    msg.setSource(25062U);
    msg.setSourceEntity(30U);
    msg.setDestination(8050U);
    msg.setDestinationEntity(37U);
    msg.state = 8U;

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
    msg.setTimeStamp(0.26925848420649434);
    msg.setSource(27599U);
    msg.setSourceEntity(20U);
    msg.setDestination(27565U);
    msg.setDestinationEntity(192U);
    msg.state = 113U;

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
    msg.setTimeStamp(0.3561175133506388);
    msg.setSource(62802U);
    msg.setSourceEntity(101U);
    msg.setDestination(39628U);
    msg.setDestinationEntity(207U);
    msg.x = 0.3085908718569841;
    msg.y = 0.6993305036273073;
    msg.z = 0.08430317689855626;

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
    msg.setTimeStamp(0.6308375841778943);
    msg.setSource(7415U);
    msg.setSourceEntity(22U);
    msg.setDestination(37724U);
    msg.setDestinationEntity(111U);
    msg.x = 0.9205347402427037;
    msg.y = 0.5667749761741459;
    msg.z = 0.2659019259210783;

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
    msg.setTimeStamp(0.6527942686054353);
    msg.setSource(16699U);
    msg.setSourceEntity(170U);
    msg.setDestination(57151U);
    msg.setDestinationEntity(36U);
    msg.x = 0.6643160095680792;
    msg.y = 0.744863035949035;
    msg.z = 0.8443779116754875;

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
    msg.setTimeStamp(0.46071970466483536);
    msg.setSource(54627U);
    msg.setSourceEntity(111U);
    msg.setDestination(12826U);
    msg.setDestinationEntity(1U);
    msg.va = 0.10217430273395722;
    msg.aoa = 0.6688148844817232;
    msg.ssa = 0.7526240931143575;

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
    msg.setTimeStamp(0.5120860829950464);
    msg.setSource(54801U);
    msg.setSourceEntity(95U);
    msg.setDestination(55738U);
    msg.setDestinationEntity(49U);
    msg.va = 0.32396283832387873;
    msg.aoa = 0.4436944980989813;
    msg.ssa = 0.26741529366129035;

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
    msg.setTimeStamp(0.015314276447232378);
    msg.setSource(60162U);
    msg.setSourceEntity(163U);
    msg.setDestination(47956U);
    msg.setDestinationEntity(126U);
    msg.va = 0.4812967424667798;
    msg.aoa = 0.9984663982434102;
    msg.ssa = 0.671909760309976;

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
    msg.setTimeStamp(0.015620850029998912);
    msg.setSource(58248U);
    msg.setSourceEntity(239U);
    msg.setDestination(20168U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7355395920402761;

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
    msg.setTimeStamp(0.4468945312949333);
    msg.setSource(38702U);
    msg.setSourceEntity(35U);
    msg.setDestination(47255U);
    msg.setDestinationEntity(238U);
    msg.value = 0.1010275637313014;

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
    msg.setTimeStamp(0.3360385812573794);
    msg.setSource(52450U);
    msg.setSourceEntity(46U);
    msg.setDestination(57475U);
    msg.setDestinationEntity(230U);
    msg.value = 0.4577959025569247;

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
    msg.setTimeStamp(0.34988795024938923);
    msg.setSource(50393U);
    msg.setSourceEntity(152U);
    msg.setDestination(27543U);
    msg.setDestinationEntity(68U);
    msg.value = 0.047108941925091075;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.9468509261445325);
    msg.setSource(4884U);
    msg.setSourceEntity(160U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5557580708494012;
    msg.z_units = 36U;

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
    msg.setTimeStamp(0.8381146172051311);
    msg.setSource(31367U);
    msg.setSourceEntity(82U);
    msg.setDestination(28529U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8740557484220334;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.36953421463720626);
    msg.setSource(51291U);
    msg.setSourceEntity(65U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6001269716923638;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.4494115540972762);
    msg.setSource(30572U);
    msg.setSourceEntity(149U);
    msg.setDestination(63575U);
    msg.setDestinationEntity(129U);
    msg.value = 0.08461227368336277;
    msg.speed_units = 242U;

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
    msg.setTimeStamp(0.7076568326381769);
    msg.setSource(34208U);
    msg.setSourceEntity(68U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6547378097174422;
    msg.speed_units = 230U;

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
    msg.setTimeStamp(0.7003203304155577);
    msg.setSource(55003U);
    msg.setSourceEntity(147U);
    msg.setDestination(46144U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9564169878639217;

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
    msg.setTimeStamp(0.15793834705176102);
    msg.setSource(8795U);
    msg.setSourceEntity(89U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(68U);
    msg.value = 0.48293212966023125;

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
    msg.setTimeStamp(0.7628127615843772);
    msg.setSource(2328U);
    msg.setSourceEntity(159U);
    msg.setDestination(39069U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6953534102866942;

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
    msg.setTimeStamp(0.1270710731034439);
    msg.setSource(47681U);
    msg.setSourceEntity(30U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(223U);
    msg.value = 0.3797751780873695;

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
    msg.setTimeStamp(0.09365704913733841);
    msg.setSource(25272U);
    msg.setSourceEntity(123U);
    msg.setDestination(64836U);
    msg.setDestinationEntity(6U);
    msg.value = 0.9659228478873726;

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
    msg.setTimeStamp(0.22839965742539814);
    msg.setSource(27093U);
    msg.setSourceEntity(124U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(212U);
    msg.value = 0.4572029948783708;

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
    msg.setTimeStamp(0.2778465946405825);
    msg.setSource(8531U);
    msg.setSourceEntity(212U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(166U);
    msg.value = 0.17450261495154384;

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
    msg.setTimeStamp(0.3840994823970354);
    msg.setSource(62107U);
    msg.setSourceEntity(67U);
    msg.setDestination(34346U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6771774094340846;

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
    msg.setTimeStamp(0.21543680279224642);
    msg.setSource(6262U);
    msg.setSourceEntity(21U);
    msg.setDestination(65437U);
    msg.setDestinationEntity(205U);
    msg.value = 0.7699763917753439;

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
    msg.setTimeStamp(0.03106283342047511);
    msg.setSource(23000U);
    msg.setSourceEntity(115U);
    msg.setDestination(12860U);
    msg.setDestinationEntity(194U);
    msg.path_ref = 1773672764U;
    msg.start_lat = 0.753545107884353;
    msg.start_lon = 0.9475667415689198;
    msg.start_z = 0.8240006419254806;
    msg.start_z_units = 162U;
    msg.end_lat = 0.0104101272650583;
    msg.end_lon = 0.14127382178623216;
    msg.end_z = 0.6941726927208808;
    msg.end_z_units = 99U;
    msg.speed = 0.5716267149178796;
    msg.speed_units = 245U;
    msg.lradius = 0.43512595953750544;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.9725963639350744);
    msg.setSource(1699U);
    msg.setSourceEntity(110U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 2428747986U;
    msg.start_lat = 0.4985185199342461;
    msg.start_lon = 0.5188273447595712;
    msg.start_z = 0.5116566109038366;
    msg.start_z_units = 165U;
    msg.end_lat = 0.029927951576628198;
    msg.end_lon = 0.9571921464651507;
    msg.end_z = 0.4991789000550886;
    msg.end_z_units = 251U;
    msg.speed = 0.36976514414820294;
    msg.speed_units = 181U;
    msg.lradius = 0.28795184633468973;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.6481127597511763);
    msg.setSource(45121U);
    msg.setSourceEntity(200U);
    msg.setDestination(1777U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 2601815514U;
    msg.start_lat = 0.8260743805001967;
    msg.start_lon = 0.9328893437995367;
    msg.start_z = 0.6308721338766367;
    msg.start_z_units = 98U;
    msg.end_lat = 0.7694432731618048;
    msg.end_lon = 0.5711145086906473;
    msg.end_z = 0.210424110718207;
    msg.end_z_units = 79U;
    msg.speed = 0.05080993778514553;
    msg.speed_units = 50U;
    msg.lradius = 0.20121871433818594;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.07232188298961928);
    msg.setSource(25154U);
    msg.setSourceEntity(180U);
    msg.setDestination(38989U);
    msg.setDestinationEntity(36U);
    msg.x = 0.6956217516600319;
    msg.y = 0.5690125937341751;
    msg.z = 0.2541459721954594;
    msg.k = 0.937410861328603;
    msg.m = 0.5184843296932956;
    msg.n = 0.6609227407166673;
    msg.flags = 200U;

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
    msg.setTimeStamp(0.7742438709059327);
    msg.setSource(6705U);
    msg.setSourceEntity(29U);
    msg.setDestination(31312U);
    msg.setDestinationEntity(171U);
    msg.x = 0.06831229151743268;
    msg.y = 0.06432772166348655;
    msg.z = 0.5567914927964432;
    msg.k = 0.19734208550788035;
    msg.m = 0.76065575423498;
    msg.n = 0.636440502212438;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.9543248956478467);
    msg.setSource(56505U);
    msg.setSourceEntity(23U);
    msg.setDestination(31516U);
    msg.setDestinationEntity(246U);
    msg.x = 0.7617376945767977;
    msg.y = 0.9024053955267325;
    msg.z = 0.782929320925633;
    msg.k = 0.010632133458261417;
    msg.m = 0.5775656418276593;
    msg.n = 0.15514069576192258;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.08611922599147326);
    msg.setSource(11663U);
    msg.setSourceEntity(82U);
    msg.setDestination(39759U);
    msg.setDestinationEntity(245U);
    msg.value = 0.7343182147133174;

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
    msg.setTimeStamp(0.8469420074742141);
    msg.setSource(44161U);
    msg.setSourceEntity(60U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(107U);
    msg.value = 0.08350223777612276;

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
    msg.setTimeStamp(0.7129760265091555);
    msg.setSource(45359U);
    msg.setSourceEntity(235U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(157U);
    msg.value = 0.1827658574696498;

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
    msg.setTimeStamp(0.058982194051410364);
    msg.setSource(61218U);
    msg.setSourceEntity(2U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(2U);
    msg.u = 0.8417131825580332;
    msg.v = 0.37266166165600023;
    msg.w = 0.06629506022161502;
    msg.p = 0.5510742516251597;
    msg.q = 0.5375495016795281;
    msg.r = 0.4236137915876398;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.08313212140116188);
    msg.setSource(15479U);
    msg.setSourceEntity(163U);
    msg.setDestination(64619U);
    msg.setDestinationEntity(127U);
    msg.u = 0.5905249070221544;
    msg.v = 0.16490840843477228;
    msg.w = 0.1876349759388557;
    msg.p = 0.10076548910914107;
    msg.q = 0.07886232661573467;
    msg.r = 0.7468416580968052;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.6768392850323186);
    msg.setSource(18854U);
    msg.setSourceEntity(4U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(44U);
    msg.u = 0.5133931903673594;
    msg.v = 0.6391148844060253;
    msg.w = 0.5784795919113893;
    msg.p = 0.9932321568420167;
    msg.q = 0.5457871612063389;
    msg.r = 0.2527192661680283;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.8708551643471776);
    msg.setSource(8651U);
    msg.setSourceEntity(48U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 657950696U;
    msg.start_lat = 0.8825440113945388;
    msg.start_lon = 0.11447720667322969;
    msg.start_z = 0.7788964622408856;
    msg.start_z_units = 102U;
    msg.end_lat = 0.7154391048659043;
    msg.end_lon = 0.0084133370283348;
    msg.end_z = 0.17875797601107168;
    msg.end_z_units = 124U;
    msg.lradius = 0.11846087625470825;
    msg.flags = 22U;
    msg.x = 0.8699199092889185;
    msg.y = 0.6309339262827797;
    msg.z = 0.5150327839723507;
    msg.vx = 0.15910838897097568;
    msg.vy = 0.4000101043657366;
    msg.vz = 0.29783003361103244;
    msg.course_error = 0.9872163866145682;
    msg.eta = 63563U;

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
    msg.setTimeStamp(0.4529581506758281);
    msg.setSource(20095U);
    msg.setSourceEntity(96U);
    msg.setDestination(58966U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 2379635605U;
    msg.start_lat = 0.4787439894469485;
    msg.start_lon = 0.3302112827749235;
    msg.start_z = 0.7047115340129797;
    msg.start_z_units = 214U;
    msg.end_lat = 0.22604353501511243;
    msg.end_lon = 0.6342887535757755;
    msg.end_z = 0.36329230990383665;
    msg.end_z_units = 242U;
    msg.lradius = 0.7786725878786132;
    msg.flags = 232U;
    msg.x = 0.732790034038722;
    msg.y = 0.9245299651729517;
    msg.z = 0.8432135192408645;
    msg.vx = 0.9712861025499551;
    msg.vy = 0.6122909496030284;
    msg.vz = 0.7680929257546135;
    msg.course_error = 0.21968424657919627;
    msg.eta = 43627U;

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
    msg.setTimeStamp(0.8132089529993669);
    msg.setSource(5614U);
    msg.setSourceEntity(191U);
    msg.setDestination(30617U);
    msg.setDestinationEntity(178U);
    msg.path_ref = 335395163U;
    msg.start_lat = 0.3768240157800231;
    msg.start_lon = 0.9844597111867839;
    msg.start_z = 0.00580756977307062;
    msg.start_z_units = 253U;
    msg.end_lat = 0.4057781648534301;
    msg.end_lon = 0.0018182725601183503;
    msg.end_z = 0.8282647132793608;
    msg.end_z_units = 121U;
    msg.lradius = 0.4056285888291926;
    msg.flags = 191U;
    msg.x = 0.3524134462141021;
    msg.y = 0.5928562480439193;
    msg.z = 0.2906552998054295;
    msg.vx = 0.08061505632159882;
    msg.vy = 0.7484987580253141;
    msg.vz = 0.39326339287438605;
    msg.course_error = 0.4310116562605283;
    msg.eta = 10198U;

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
    msg.setTimeStamp(0.6889123171095912);
    msg.setSource(11247U);
    msg.setSourceEntity(75U);
    msg.setDestination(48965U);
    msg.setDestinationEntity(3U);
    msg.k = 0.8294724435778212;
    msg.m = 0.019462920726399213;
    msg.n = 0.5266000136663387;

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
    msg.setTimeStamp(0.2853611076283653);
    msg.setSource(47186U);
    msg.setSourceEntity(36U);
    msg.setDestination(64303U);
    msg.setDestinationEntity(8U);
    msg.k = 0.6094897647435812;
    msg.m = 0.2382762849304494;
    msg.n = 0.9075542610619018;

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
    msg.setTimeStamp(0.15917440394837212);
    msg.setSource(31945U);
    msg.setSourceEntity(187U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(108U);
    msg.k = 0.461526759983672;
    msg.m = 0.16650206564618164;
    msg.n = 0.8239892290529207;

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
    msg.setTimeStamp(0.9499117574802689);
    msg.setSource(58835U);
    msg.setSourceEntity(9U);
    msg.setDestination(36429U);
    msg.setDestinationEntity(209U);
    msg.p = 0.4761934847348319;
    msg.i = 0.3553210746576494;
    msg.d = 0.10961154622581237;
    msg.a = 0.5250398583338077;

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
    msg.setTimeStamp(0.998875817611751);
    msg.setSource(4776U);
    msg.setSourceEntity(164U);
    msg.setDestination(29244U);
    msg.setDestinationEntity(17U);
    msg.p = 0.02359822634269071;
    msg.i = 0.6543829392629078;
    msg.d = 0.5213180053299596;
    msg.a = 0.6023810803773367;

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
    msg.setTimeStamp(0.8688742187455898);
    msg.setSource(48089U);
    msg.setSourceEntity(30U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(17U);
    msg.p = 0.34938081170679114;
    msg.i = 0.763834581182026;
    msg.d = 0.2932344913443653;
    msg.a = 0.22545530985424778;

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
    msg.setTimeStamp(0.7211351560750332);
    msg.setSource(31014U);
    msg.setSourceEntity(67U);
    msg.setDestination(54528U);
    msg.setDestinationEntity(193U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.02263553528292772);
    msg.setSource(48093U);
    msg.setSourceEntity(193U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(140U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.7108965231619833);
    msg.setSource(2732U);
    msg.setSourceEntity(203U);
    msg.setDestination(35390U);
    msg.setDestinationEntity(114U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.8796294202634416);
    msg.setSource(24283U);
    msg.setSourceEntity(60U);
    msg.setDestination(14245U);
    msg.setDestinationEntity(4U);
    msg.x = 0.40035280369236403;
    msg.y = 0.6723595225899591;
    msg.z = 0.543141000309914;
    msg.vx = 0.7663604139906552;
    msg.vy = 0.027408860724094986;
    msg.vz = 0.32612535904469875;
    msg.ax = 0.8097783398075202;
    msg.ay = 0.9326138030481441;
    msg.az = 0.3674125785958089;
    msg.flags = 8160U;

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
    msg.setTimeStamp(0.26997729044246443);
    msg.setSource(54080U);
    msg.setSourceEntity(158U);
    msg.setDestination(37753U);
    msg.setDestinationEntity(214U);
    msg.x = 0.6436207050188508;
    msg.y = 0.9877756904770221;
    msg.z = 0.9311524161328057;
    msg.vx = 0.4493810894467364;
    msg.vy = 0.5373345252565651;
    msg.vz = 0.8387272131087291;
    msg.ax = 0.4569709545404894;
    msg.ay = 0.8470132218541148;
    msg.az = 0.08726254630872521;
    msg.flags = 36653U;

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
    msg.setTimeStamp(0.18929461778402057);
    msg.setSource(12220U);
    msg.setSourceEntity(212U);
    msg.setDestination(63845U);
    msg.setDestinationEntity(22U);
    msg.x = 0.6657118727055756;
    msg.y = 0.36100197146238855;
    msg.z = 0.12686959885774984;
    msg.vx = 0.0007267224169605901;
    msg.vy = 0.8312103128852097;
    msg.vz = 0.14663247685197722;
    msg.ax = 0.5437094355314253;
    msg.ay = 0.5500346911091483;
    msg.az = 0.1677448103464253;
    msg.flags = 34317U;

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
    msg.setTimeStamp(0.8466655721887294);
    msg.setSource(40178U);
    msg.setSourceEntity(211U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(228U);
    msg.value = 0.38334085109586;

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
    msg.setTimeStamp(0.8186233574643245);
    msg.setSource(14484U);
    msg.setSourceEntity(177U);
    msg.setDestination(54360U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8003286774351999;

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
    msg.setTimeStamp(0.6066889131621844);
    msg.setSource(26484U);
    msg.setSourceEntity(65U);
    msg.setDestination(18152U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6021437587985684;

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
    msg.setTimeStamp(0.8285721975388594);
    msg.setSource(45318U);
    msg.setSourceEntity(16U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(2U);
    msg.timeout = 538U;
    msg.lat = 0.1890062987522061;
    msg.lon = 0.6494518138577363;
    msg.z = 0.3193360532854611;
    msg.z_units = 36U;
    msg.speed = 0.42232394168059084;
    msg.speed_units = 148U;
    msg.roll = 0.8850583905969684;
    msg.pitch = 0.7742595115545898;
    msg.yaw = 0.6886834847507687;
    msg.custom.assign("MUCOMRVQHSHPLIXHWZBLYXDF");

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
    msg.setTimeStamp(0.035552700004908844);
    msg.setSource(8375U);
    msg.setSourceEntity(161U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(67U);
    msg.timeout = 20461U;
    msg.lat = 0.5904325411934453;
    msg.lon = 0.19571042806463712;
    msg.z = 0.13626629858224204;
    msg.z_units = 160U;
    msg.speed = 0.43729530512776926;
    msg.speed_units = 180U;
    msg.roll = 0.6178491117796898;
    msg.pitch = 0.6301215104177588;
    msg.yaw = 0.014349363777416357;
    msg.custom.assign("OOCPWVYWAAMQOLAVFPTAXNGPODLGDYPGCGSGTMWWUHUCKBGIFRSCRWNFIXUQBRMSPGIZERXXSLNZZTIQYHVIMAOXWCLTOOAHRLUGTKAJBOSZSLWDHXNFKUMVDVIIJQRJRFSMOJYQHOUTWYRZFDCXNHDDHBBYWNVAQEKLPMRVEUMFZNKDBBFIAMIFHAPENNHQLZVYKYDYVCJBKK");

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
    msg.setTimeStamp(0.14435096933699998);
    msg.setSource(54532U);
    msg.setSourceEntity(79U);
    msg.setDestination(56632U);
    msg.setDestinationEntity(14U);
    msg.timeout = 42808U;
    msg.lat = 0.9089856259838708;
    msg.lon = 0.7421966555756692;
    msg.z = 0.7550553918358032;
    msg.z_units = 79U;
    msg.speed = 0.2288969845921165;
    msg.speed_units = 28U;
    msg.roll = 0.24657818422114908;
    msg.pitch = 0.4734455011162385;
    msg.yaw = 0.8373997052877594;
    msg.custom.assign("KAYGQVPRSMOMEWXBTFLUBVNVEWRD");

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
    msg.setTimeStamp(0.023589973646656826);
    msg.setSource(3503U);
    msg.setSourceEntity(235U);
    msg.setDestination(30211U);
    msg.setDestinationEntity(13U);
    msg.timeout = 36388U;
    msg.lat = 0.026704925045036965;
    msg.lon = 0.25776587695019937;
    msg.z = 0.7530749521629786;
    msg.z_units = 170U;
    msg.speed = 0.30938874583057097;
    msg.speed_units = 52U;
    msg.duration = 20918U;
    msg.radius = 0.7801663983006212;
    msg.flags = 150U;
    msg.custom.assign("CJXCVKCIXRDDSUTWKYRZXNRBTJNAGLKDUWWPORSWQHQADQBUBFETOKOSUJYHUSKSMUFYRRNZICTOFVNPMVSXZMXQUEPMDEWPGZGLVBMRQOZYHGKBNQJAVZLRPBEFQFEICUOMLPEBGVYXXDZGKYDBQNPFUESKWIYARNQAEHCVLJHX");

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
    msg.setTimeStamp(0.35121224564062226);
    msg.setSource(29558U);
    msg.setSourceEntity(89U);
    msg.setDestination(22044U);
    msg.setDestinationEntity(56U);
    msg.timeout = 58495U;
    msg.lat = 0.49755878617580684;
    msg.lon = 0.5725008198598178;
    msg.z = 0.5258548569077361;
    msg.z_units = 157U;
    msg.speed = 0.008026515604927509;
    msg.speed_units = 225U;
    msg.duration = 17216U;
    msg.radius = 0.5267244380509857;
    msg.flags = 177U;
    msg.custom.assign("OPXOLOKMUNPVETCWZAHTCZBTGOQKAUYGVSBMVOMDFFVVVFDLIWCBVICFEZLKKLDMUMBYESRQMRJVXHNLHPOIRYRWKEGFPTPOYWSGTUQYFXQUKJJNXAIPCQLDQSNZAJPIRFTCDJAREUTGUWHNAERYINZBWECHSRRNEGYCQYJTDUMHXDJXLXYZSPBQCDWXJYALVPQNMABONQZWWEKIG");

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
    msg.setTimeStamp(0.23783630718315596);
    msg.setSource(61859U);
    msg.setSourceEntity(139U);
    msg.setDestination(47878U);
    msg.setDestinationEntity(150U);
    msg.timeout = 26923U;
    msg.lat = 0.7540315600397508;
    msg.lon = 0.3858991845369141;
    msg.z = 0.8354712306030329;
    msg.z_units = 239U;
    msg.speed = 0.8885560029562658;
    msg.speed_units = 166U;
    msg.duration = 13396U;
    msg.radius = 0.2428197337954079;
    msg.flags = 221U;
    msg.custom.assign("HDPHKDIFCHNGFKPWQTZSZZEGBNFRADLQMZDRXNXSWMEMVIIHBWFELVZVYJOOLAWUKAPQOUSZBTUICOQUUPMMAEFHVPGDXSQXMTASFRXRYOKGULIQGPNYZOQSGCDCBKRQUDVYTRICJHSYAUSDCWXYIYMTYJVKTQTCGFJFZESWOHNK");

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
    msg.setTimeStamp(0.3976038920885814);
    msg.setSource(22153U);
    msg.setSourceEntity(15U);
    msg.setDestination(44436U);
    msg.setDestinationEntity(100U);
    msg.custom.assign("XBFUVNQPTZSZIB");

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
    msg.setTimeStamp(0.44144352318775026);
    msg.setSource(13963U);
    msg.setSourceEntity(252U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(177U);
    msg.custom.assign("WDPHJZXGPSVBMZEFTZXYWVJKYVHDYIPYEGIFW");

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
    msg.setTimeStamp(0.69104566203288);
    msg.setSource(22132U);
    msg.setSourceEntity(242U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(254U);
    msg.custom.assign("HVTZMBOCXQQDOZMXDBXOIJXMKMWLVQNKHBORNNQXQDRFVIZXUGCHNHIZLGYJWCXGSZKJGZRSWRKLLJVAUUVBTCPNYGCTBTUIYEXYZMOAALBNTTIFNWHUYEWJMDDHEUAFWTVMNLEFPKVPDTBIKCEGQLVCEJFHWRPOSLBAUMGKYRYIHAEVDAQWWSYWPHQSMXCEJFZUQTASDIBMOGSPYUCFPPOLOKSKIRJRENZBFGFLPDAHOZSCIXEFGNKRVRSJUQ");

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
    msg.setTimeStamp(0.04318887134661897);
    msg.setSource(27677U);
    msg.setSourceEntity(187U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(97U);
    msg.timeout = 62035U;
    msg.lat = 0.8793879188854122;
    msg.lon = 0.29018283931553124;
    msg.z = 0.780161935141235;
    msg.z_units = 24U;
    msg.duration = 20667U;
    msg.speed = 0.9220297003905688;
    msg.speed_units = 143U;
    msg.type = 77U;
    msg.radius = 0.5710156144847144;
    msg.length = 0.9312623657720813;
    msg.bearing = 0.9826727374039049;
    msg.direction = 179U;
    msg.custom.assign("BWWGMRKOJACEEXTLZLCMPNWUJEHVNAKDLITRVZQITYWITAJPODNDEEBMLPKBTVDCPKQBZOWPJMMXMWGIQASZLHPEFPULMNYMUKJQYJJJNQBTSDHOVXQCNMQICUSLXUXJKUAHBZWBVTSRZNZRGLAVDODYBNRYXAOAIKFYO");

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
    msg.setTimeStamp(0.4719807577803705);
    msg.setSource(15693U);
    msg.setSourceEntity(59U);
    msg.setDestination(44163U);
    msg.setDestinationEntity(142U);
    msg.timeout = 15222U;
    msg.lat = 0.9961793970074224;
    msg.lon = 0.38656285223663556;
    msg.z = 0.03340644805248105;
    msg.z_units = 174U;
    msg.duration = 42739U;
    msg.speed = 0.6140292088006863;
    msg.speed_units = 10U;
    msg.type = 45U;
    msg.radius = 0.3109052605275099;
    msg.length = 0.0799722762641244;
    msg.bearing = 0.08470125187501043;
    msg.direction = 209U;
    msg.custom.assign("VSPYPWSSGOSIVVBPOPRVGVNUSIHUDHNUTZCBFRWZQWKKCNSYFOEUQKEKJWWDUZBHFXXCKMHDUPPEBAQOHXKNYOFCMGATRHARTZEGNTPRPMRQFMBIGLZUIDDYENBUQG");

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
    msg.setTimeStamp(0.05297157066596836);
    msg.setSource(3106U);
    msg.setSourceEntity(196U);
    msg.setDestination(2675U);
    msg.setDestinationEntity(124U);
    msg.timeout = 4228U;
    msg.lat = 0.9946670308675308;
    msg.lon = 0.7457804172010728;
    msg.z = 0.20820064472548527;
    msg.z_units = 107U;
    msg.duration = 3940U;
    msg.speed = 0.2218306372327442;
    msg.speed_units = 39U;
    msg.type = 137U;
    msg.radius = 0.139482792050028;
    msg.length = 0.48854728427289795;
    msg.bearing = 0.7916515438839835;
    msg.direction = 103U;
    msg.custom.assign("BLQZEUEIAFRCAPSLTFVDTWOFGYNHSJZLICHBNDAGHWOPQSACLEGIPKAAKZSUTNYRFXJVUBTNECBMIRWWENPXRYPLHOOTVCHUIZKDFFWYXDLHRDFRXWXRIDKAWOHSJXHJBXCXIEMQPLKOKSDMEQACYZTKNZPZYJJBMNQJVQVGDJMRVBPNRTEKREKUUOMGPM");

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
    msg.setTimeStamp(0.29097921743425026);
    msg.setSource(50704U);
    msg.setSourceEntity(88U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(60U);
    msg.duration = 50866U;
    msg.custom.assign("EMJKBSQDJROXSPFUSYFOMQIYFMMQSPYSPXURICTZBWKRLCMOCDMHPJISICFQHLDAHJBJWQPKOIHZHJGVBDXGKJBJSFAYRVHGTSOTAURWZQMUFAVINQEAYCHWEMNPFMKNTKXLVCYVGEBOKWGXATYNYVXYBCIERBUILVQJQLNGCOEABUSXYUXIVOGWVKHAAMNZBWJTZXWRKFLXH");

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
    msg.setTimeStamp(0.9119589315387319);
    msg.setSource(37213U);
    msg.setSourceEntity(247U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(98U);
    msg.duration = 1607U;
    msg.custom.assign("YYNTHWFPMEQLGMEUEQXQDH");

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
    msg.setTimeStamp(0.8641121100374912);
    msg.setSource(32046U);
    msg.setSourceEntity(221U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(1U);
    msg.duration = 14604U;
    msg.custom.assign("QHOSJPDWSHHUJFLNCGPAUXPQQTCXPICIAKNYWJZTBXVMRFENWFUFABVWKYQHBKRLKLREAIHLECNHEMVNEPTNZGSCHTSCUGYLMWJGSZZVSGWAVAXVIONAUFUGHDDZQVQMOBOBOSDTPWARIEJKOKSVHKGFZRCMDORWEFPXXRMZFYIVTLYGB");

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
    msg.setTimeStamp(0.7781304640104859);
    msg.setSource(63326U);
    msg.setSourceEntity(218U);
    msg.setDestination(31100U);
    msg.setDestinationEntity(41U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.3149669376470777;
    msg.control.set(tmp_msg_0);
    msg.duration = 50654U;
    msg.custom.assign("NSVJRQHCDMANTDRWBTOAVBXMDPIDWLBBFYPNSHBIOGJYLGPHWEEGLDUCTYLXTQIZNFZMBJGZTUGWYFESPHILVRZEIF");

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
    msg.setTimeStamp(0.20748344390444184);
    msg.setSource(52117U);
    msg.setSourceEntity(197U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(32U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8359165493981885;
    msg.control.set(tmp_msg_0);
    msg.duration = 7790U;
    msg.custom.assign("JIKZHURHGMFPWQPDNTHFYUCFOXWZIBOTIZDWZPYBEFPAMEUGYRAVYJIJZABXPGSOQGLTYLQKNHIYRNCXGUFXHNAETBFDETULSTS");

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
    msg.setTimeStamp(0.34681834621828467);
    msg.setSource(48548U);
    msg.setSourceEntity(179U);
    msg.setDestination(13737U);
    msg.setDestinationEntity(243U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.1769188847513702;
    msg.control.set(tmp_msg_0);
    msg.duration = 12550U;
    msg.custom.assign("VIPTQGWPVCVXEVLKMIHTJCIQKYGDCKQ");

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
    msg.setTimeStamp(0.24219060634056955);
    msg.setSource(62962U);
    msg.setSourceEntity(16U);
    msg.setDestination(7432U);
    msg.setDestinationEntity(80U);
    msg.timeout = 18062U;
    msg.lat = 0.6424833833122395;
    msg.lon = 0.45811523194524906;
    msg.z = 0.47943155671491555;
    msg.z_units = 46U;
    msg.speed = 0.2703415432194328;
    msg.speed_units = 201U;
    msg.bearing = 0.5992554936269876;
    msg.cross_angle = 0.313105152927861;
    msg.width = 0.880951535908684;
    msg.length = 0.9663261467169169;
    msg.hstep = 0.38438307711630215;
    msg.coff = 40U;
    msg.alternation = 170U;
    msg.flags = 66U;
    msg.custom.assign("TANPAKIWPDTZHUDFDMDRMKXETAGFUHQTUOVYFPKBJKWBGOCOYQXFZIXJLKDJXMTSNHUJNCJC");

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
    msg.setTimeStamp(0.5430142405918628);
    msg.setSource(58338U);
    msg.setSourceEntity(60U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(149U);
    msg.timeout = 15585U;
    msg.lat = 0.990033490858232;
    msg.lon = 0.06532461784556509;
    msg.z = 0.4140270103115673;
    msg.z_units = 145U;
    msg.speed = 0.5638379737878199;
    msg.speed_units = 223U;
    msg.bearing = 0.20622322592012376;
    msg.cross_angle = 0.4422966972172998;
    msg.width = 0.00200323869737673;
    msg.length = 0.5748484569720758;
    msg.hstep = 0.524349349689809;
    msg.coff = 157U;
    msg.alternation = 233U;
    msg.flags = 30U;
    msg.custom.assign("HTJDVRFNSUUVCJGCLBHWZJHCETIYHETMSCKGOXBKEYWDRSORNIXEQCXQTGVLAAEXKJGOBGLYGWTKFDUTBJZODQRSHOEPFLRHUYUKRRYATGFPCVJLDZWQVRNYBFBKJUTOWXOAZMXPFPSLXVWBTZKFXPGIESDDVVIALBAAVEMNAZZMEPIBWXBEFLDNTSZWSUYYIJLVQKP");

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
    msg.setTimeStamp(0.5086617299642383);
    msg.setSource(11060U);
    msg.setSourceEntity(46U);
    msg.setDestination(3168U);
    msg.setDestinationEntity(247U);
    msg.timeout = 54517U;
    msg.lat = 0.18301300418375488;
    msg.lon = 0.3756380727760692;
    msg.z = 0.4746261559736138;
    msg.z_units = 217U;
    msg.speed = 0.7890326688213601;
    msg.speed_units = 138U;
    msg.bearing = 0.08937654715184118;
    msg.cross_angle = 0.1593304502282915;
    msg.width = 0.6080136731970206;
    msg.length = 0.912929907169426;
    msg.hstep = 0.9838530962175361;
    msg.coff = 177U;
    msg.alternation = 161U;
    msg.flags = 180U;
    msg.custom.assign("NTXBWZBVQWKPVTWYQSHJMVGDUPCDJZKUWNGGNZBYSVGTRLQZRUQQMR");

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
    msg.setTimeStamp(0.004488893531209848);
    msg.setSource(4743U);
    msg.setSourceEntity(76U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(173U);
    msg.timeout = 22648U;
    msg.lat = 0.6385311885812605;
    msg.lon = 0.9943306385422824;
    msg.z = 0.8508917082019948;
    msg.z_units = 39U;
    msg.speed = 0.4892746930175891;
    msg.speed_units = 234U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3194830439155877;
    tmp_msg_0.y = 0.6400316802088444;
    tmp_msg_0.z = 0.11888614856718738;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UKIAAVOCXFIDBQWZOKRPAOT");

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
    msg.setTimeStamp(0.05686483700655143);
    msg.setSource(2263U);
    msg.setSourceEntity(93U);
    msg.setDestination(27613U);
    msg.setDestinationEntity(40U);
    msg.timeout = 27238U;
    msg.lat = 0.9523830089771076;
    msg.lon = 0.8276669238630386;
    msg.z = 0.30362329323074266;
    msg.z_units = 175U;
    msg.speed = 0.03172326513711132;
    msg.speed_units = 147U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.24925659931109112;
    tmp_msg_0.y = 0.8818296637476961;
    tmp_msg_0.z = 0.4853449667013239;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XBLCNDJTSCZQACROEXGEVGMAYXAAVEDQRBODXULXLMIWNAOURQ");

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
    msg.setTimeStamp(0.6204447134262077);
    msg.setSource(48819U);
    msg.setSourceEntity(124U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(114U);
    msg.timeout = 3638U;
    msg.lat = 0.32061369822882113;
    msg.lon = 0.45341480185734395;
    msg.z = 0.7216123627209752;
    msg.z_units = 70U;
    msg.speed = 0.06344937929960681;
    msg.speed_units = 15U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0321002679921818;
    tmp_msg_0.y = 0.46155245245937027;
    tmp_msg_0.z = 0.3817901288262505;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZBXXANJOUGWLABMEONFICEDCCBFDTRCQJGDZRGTKUVKVPIYZIYROWMMESKVAUVYWQWPSIWVSLBRTYPKUZMBNNMXYDSLOLFNAYHKFKNTVQDWNPAZIJFLASMUMLGBZNSRFKPQCJRYRWCQCJGPXGGJIDMJ");

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
    msg.setTimeStamp(0.8331323880279694);
    msg.setSource(47805U);
    msg.setSourceEntity(187U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(108U);
    msg.x = 0.5168354585582416;
    msg.y = 0.6401803604411301;
    msg.z = 0.4100728677687414;

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
    msg.setTimeStamp(0.796696503893625);
    msg.setSource(23158U);
    msg.setSourceEntity(4U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(70U);
    msg.x = 0.7706877881448951;
    msg.y = 0.2731143768798798;
    msg.z = 0.28263184960609256;

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
    msg.setTimeStamp(0.6530795201300328);
    msg.setSource(37409U);
    msg.setSourceEntity(157U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(55U);
    msg.x = 0.19691231780332585;
    msg.y = 0.3317923373052294;
    msg.z = 0.4770968881328803;

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
    msg.setTimeStamp(0.13422670811729298);
    msg.setSource(39756U);
    msg.setSourceEntity(26U);
    msg.setDestination(32089U);
    msg.setDestinationEntity(195U);
    msg.timeout = 56389U;
    msg.lat = 0.7947867437108459;
    msg.lon = 0.19879983486861297;
    msg.z = 0.1931494778170063;
    msg.z_units = 151U;
    msg.amplitude = 0.5963904564416747;
    msg.pitch = 0.5497145510961418;
    msg.speed = 0.40284875120061847;
    msg.speed_units = 18U;
    msg.custom.assign("USPUOUMZNAYKHWCBLJRRLXBWQCJKNYCPVVTWOAFDBEBJKAFSIQQQCKEZKTSXDAQHPYDWFIKRFGRTVARZMNZKVVUIEIDJMAOSQQLGELOXRSZMBQDWFTXGZOHGTNFUEVYSJNVVEIADODGHUFOBMCPIZJFNCVZLOTJPJANHLLVTMPMSWKJGXGQRRKMYHWLY");

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
    msg.setTimeStamp(0.9821680698686466);
    msg.setSource(2764U);
    msg.setSourceEntity(215U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(134U);
    msg.timeout = 6180U;
    msg.lat = 0.5880048992200158;
    msg.lon = 0.27853200146038537;
    msg.z = 0.3568779653263402;
    msg.z_units = 76U;
    msg.amplitude = 0.2326641797207617;
    msg.pitch = 0.7231349512254864;
    msg.speed = 0.4272529171620988;
    msg.speed_units = 48U;
    msg.custom.assign("LYCJIMXYBKLGBAKZDHTMEWOIOSTBKXTOIGCXSKUPMNAJHAWEOPHKZQOSELHWXNCF");

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
    msg.setTimeStamp(0.1212982524506716);
    msg.setSource(11719U);
    msg.setSourceEntity(84U);
    msg.setDestination(41792U);
    msg.setDestinationEntity(78U);
    msg.timeout = 16375U;
    msg.lat = 0.4744366963383213;
    msg.lon = 0.0961266542254593;
    msg.z = 0.45296549092788363;
    msg.z_units = 143U;
    msg.amplitude = 0.7013365424122445;
    msg.pitch = 0.08577655117332994;
    msg.speed = 0.6143757328144662;
    msg.speed_units = 164U;
    msg.custom.assign("GPVWMZKGPBTMTRNKLHUUCQSCNIJTPVIZIHJWONKUNBRWJYAXLYPFCTOZGOAZQEAKUMYJMCIZZQTNGGMPHJVHRLHHOYGWIWDXSVQWDWNEKESOEJVRXQDWIRCLJRHTAYSCYVYXXIAJNVBLZOCFGYXBXKYUBOAUDYMKBXBISHEBSFNLPSOVJERPDFOFLQFFIXFQZUVDCTNWHCMMXAATESFPBARODL");

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
    msg.setTimeStamp(0.7634625175010998);
    msg.setSource(63208U);
    msg.setSourceEntity(64U);
    msg.setDestination(32674U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5558260195943252);
    msg.setSource(32654U);
    msg.setSourceEntity(237U);
    msg.setDestination(26938U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.47612976911749105);
    msg.setSource(63073U);
    msg.setSourceEntity(11U);
    msg.setDestination(4694U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.6992909175428991);
    msg.setSource(12498U);
    msg.setSourceEntity(75U);
    msg.setDestination(26615U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.4829435639490207;
    msg.lon = 0.5774388353006081;
    msg.z = 0.9845583619064792;
    msg.z_units = 210U;
    msg.radius = 0.09820055290084662;
    msg.duration = 35581U;
    msg.speed = 0.20043353343045878;
    msg.speed_units = 91U;
    msg.custom.assign("BWUZJNQGUMFMKZIDMMYOBW");

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
    msg.setTimeStamp(0.8973148943630351);
    msg.setSource(28664U);
    msg.setSourceEntity(87U);
    msg.setDestination(45566U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.5356395215643929;
    msg.lon = 0.07073235003288836;
    msg.z = 0.3425085317509139;
    msg.z_units = 45U;
    msg.radius = 0.9818850996439444;
    msg.duration = 3840U;
    msg.speed = 0.29617871026454023;
    msg.speed_units = 85U;
    msg.custom.assign("PGDCWSIREVSICEMNSYNNWZLPRN");

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
    msg.setTimeStamp(0.23684629912287947);
    msg.setSource(49183U);
    msg.setSourceEntity(153U);
    msg.setDestination(52182U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.6342872049442307;
    msg.lon = 0.1763706231747164;
    msg.z = 0.2972456574698168;
    msg.z_units = 49U;
    msg.radius = 0.11339985650395756;
    msg.duration = 37977U;
    msg.speed = 0.2934578848765268;
    msg.speed_units = 88U;
    msg.custom.assign("LGDRLVXBSOJEVGGZPPUZFCAGIAFMCHTLNXEPIENSGWUMAPKVRNEHMBZCYNPNEYVXQEWTADDVYYLKTOECOAUWFQSFJMZRJRUJQYCKMNIDOFVTBDBUOYTOTSTIBVZEJZRYCCGPSIKKBXDOZMRABWSNZWKOJPQHHIIYVLBAMQQFLMABDDBWFPHWEXJNGUHXZYSRGHQZHKSLITLNRIYSOWMXGWFWQGVVUQAQKRFNTLDPHX");

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
    msg.setTimeStamp(0.5730790533385436);
    msg.setSource(22603U);
    msg.setSourceEntity(119U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(105U);
    msg.timeout = 5349U;
    msg.flags = 133U;
    msg.lat = 0.7271384737905096;
    msg.lon = 0.36568216131172526;
    msg.start_z = 0.8461653952600099;
    msg.start_z_units = 173U;
    msg.end_z = 0.697148922132114;
    msg.end_z_units = 83U;
    msg.radius = 0.5766646128337534;
    msg.speed = 0.25784798394305175;
    msg.speed_units = 94U;
    msg.custom.assign("JVSVZUYLDOGZRGKCMJOPHVFGXKBTITNJTILMUZFMQSPATAZUHNOXJBYSQVZVCLGPTGBHUYNXRKAXACLEEXMKYTDPRYRDBWPGVGPPCHADQJCMMDYLGHWWREPVIAJXZGDITADWEFOFTRIRTOWUBZFC");

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
    msg.setTimeStamp(0.5259929853157205);
    msg.setSource(60863U);
    msg.setSourceEntity(47U);
    msg.setDestination(27037U);
    msg.setDestinationEntity(142U);
    msg.timeout = 8360U;
    msg.flags = 90U;
    msg.lat = 0.023019298439587832;
    msg.lon = 0.21183584689249646;
    msg.start_z = 0.37190657539072636;
    msg.start_z_units = 208U;
    msg.end_z = 0.3361043889158347;
    msg.end_z_units = 148U;
    msg.radius = 0.5242301937180556;
    msg.speed = 0.11872368540876777;
    msg.speed_units = 200U;
    msg.custom.assign("EJTVOAMCDUBYRDAVNEXWHGQWKPNYGYIAGVFYZWQTBLAUQCLADALLJZIUKXQNHGZUGCLVPJHPIKICGBZYEVDHERNGINTPNMFMSWNUAKZBIPJRSVFRUCYXKWHAPHSSVCFFOETMTWCFDIJPYHHHFTBMCBKSYODBMBXBKRCRJWVISMIRZDAZNONWSOQCZLUEPXURSGMYTZFMJOGQLUJWQEZMKXEFVQLROTTED");

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
    msg.setTimeStamp(0.810455586335777);
    msg.setSource(26313U);
    msg.setSourceEntity(196U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(63U);
    msg.timeout = 5402U;
    msg.flags = 141U;
    msg.lat = 0.4776998973214083;
    msg.lon = 0.5052323390522645;
    msg.start_z = 0.19101887267364293;
    msg.start_z_units = 1U;
    msg.end_z = 0.5384553186274935;
    msg.end_z_units = 217U;
    msg.radius = 0.4321798399472577;
    msg.speed = 0.742929331737586;
    msg.speed_units = 2U;
    msg.custom.assign("YISFLEBOASITRNOVMJNVBF");

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
    msg.setTimeStamp(0.8567362094638088);
    msg.setSource(51457U);
    msg.setSourceEntity(139U);
    msg.setDestination(34008U);
    msg.setDestinationEntity(81U);
    msg.timeout = 12560U;
    msg.lat = 0.44386997559824326;
    msg.lon = 0.7257782958143799;
    msg.z = 0.6347261543291108;
    msg.z_units = 18U;
    msg.speed = 0.812323142516442;
    msg.speed_units = 153U;
    msg.custom.assign("MQDRBSEVVSCXHEYQUXMSLWIAHZJFOPRQVNWTYAWYAOAKZIDLTIIZCEDSTTXMJDBCDHOPSBTENNMZPVGKENYPKWRUQJOAMCZJOZLJAUMSGVJBWPFPBHGXRUFQFJHETKLBYKORMULLCZSBKTQRJCKRFJNMVVQBAFQXCZNCAXYOAYWWOVA");

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
    msg.setTimeStamp(0.89014345587492);
    msg.setSource(11628U);
    msg.setSourceEntity(198U);
    msg.setDestination(53511U);
    msg.setDestinationEntity(53U);
    msg.timeout = 13064U;
    msg.lat = 0.9382294052433122;
    msg.lon = 0.11471747611863103;
    msg.z = 0.23433712253927508;
    msg.z_units = 143U;
    msg.speed = 0.5257959522167054;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6956169877459414;
    tmp_msg_0.y = 0.8560120833727868;
    tmp_msg_0.z = 0.6578705307881813;
    tmp_msg_0.t = 0.9295421720131368;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MVHFZJHFILHVOTCDSNZOHNCAVZFWNKQJCXNQPSUFXLITVSYIOYRNLGEEOTDVOOYUCAGGZKBKNFNQGVQREVSYAYIXDZBKQEZLUWAFIAKETLRBPRMHWJBJVZBPGXYWFYCBXJZWASEWBUSNDDXMRBEWMBMYKJKQZTKQCWSYSSPMQGUJAOJPTGEFURMMHCLTEG");

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
    msg.setTimeStamp(0.9897315498252486);
    msg.setSource(38028U);
    msg.setSourceEntity(159U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(95U);
    msg.timeout = 2342U;
    msg.lat = 0.5473805310016371;
    msg.lon = 0.19479285167581595;
    msg.z = 0.3603108497439289;
    msg.z_units = 217U;
    msg.speed = 0.7195579116046084;
    msg.speed_units = 18U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6035059006860516;
    tmp_msg_0.y = 0.783307766008627;
    tmp_msg_0.z = 0.558443009909863;
    tmp_msg_0.t = 0.6163547746843455;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HCUCLDTTBVESZBJGBGMSLSHQKMKGTLJORSQVXQKWLQAKQJQFMKVQNQFTKUWHLDHIPYFEJAMRYCACXFYLAFGDSYEIKMEYVHADXPIXFPNQGMSDDRJISHKCAXTUTSHDUMZCUOLOVZFRBOJXPIKYQGZTOXGJSLYIJPNINWEGFCXTLNPTMYEFRIWVHUJZOGOXRNRENCROWNWDJIROFUWUERDEBVZDNIPBCVABZPZEUPZWMLAVNYKVWAOBHGXPMU");

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
    msg.setTimeStamp(0.5276354393660911);
    msg.setSource(57893U);
    msg.setSourceEntity(214U);
    msg.setDestination(45945U);
    msg.setDestinationEntity(72U);
    msg.x = 0.7086228889440828;
    msg.y = 0.7414119490019189;
    msg.z = 0.8606793635365524;
    msg.t = 0.8332325356665425;

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
    msg.setTimeStamp(0.08281269853667372);
    msg.setSource(29567U);
    msg.setSourceEntity(75U);
    msg.setDestination(6329U);
    msg.setDestinationEntity(209U);
    msg.x = 0.8019681272409868;
    msg.y = 0.6486593649429958;
    msg.z = 0.9616796050067524;
    msg.t = 0.6584825244332654;

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
    msg.setTimeStamp(0.9594497293246191);
    msg.setSource(24181U);
    msg.setSourceEntity(94U);
    msg.setDestination(25204U);
    msg.setDestinationEntity(197U);
    msg.x = 0.5139580749441076;
    msg.y = 0.7793965305282753;
    msg.z = 0.5838021534964313;
    msg.t = 0.22642586722503966;

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
    msg.setTimeStamp(0.2018353412171736);
    msg.setSource(6572U);
    msg.setSourceEntity(113U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(43U);
    msg.timeout = 22526U;
    msg.name.assign("AAOKRBTMBYOCWWUWHIMSVSSNFAMHGBOUJPBXFSNGGGJBQBWFRRKXKXXDMQXHUARTEGZXZWNJRRIIPYYAZUHESMYQWPLBFHJINFYRCZULEEPODXZOVXCXWSTEWULODIHVYTQQBVYSFKCNDWEGYSSIYULIKJEADUKHUZTVTMCPRDJFOOQJPAESDJCCKLPXHTDARRGKELNNVTQACFMKTHEFLZCWVYIPBQN");
    msg.custom.assign("BPTQWHSQUAKCDRJWYVUZFIHRJ");

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
    msg.setTimeStamp(0.8508228550470862);
    msg.setSource(52281U);
    msg.setSourceEntity(62U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(123U);
    msg.timeout = 44560U;
    msg.name.assign("ICDMZXTJGBDLWMLOLPXWDIFGDYCLDNUSLIYWWJERAZGTDHBWQNHHLGRBEUCTOBHOFSPSBEMPILOJYXQRECJHFCPNDJQUQGJERYVJVXBASCRIVIZTKWYHNVMPIVZQDKVOQSFMTVEKZQGCDOAAFZPLCMXTKURWNFAJKSIW");
    msg.custom.assign("ZECEMSZPLTHAOKIFPNPEOJLDYOPCLTYWUXUWGBSFYZMFFGBFYEVVFFIXDKIDWHJDVXDARRDUUMCOQIVEATYZHWGTGNTJKRAGBXQHNHMWAXEAYACPMRKLRNZCQPMZQGJSTWQGXGYUFJPWCJVLBXEXMCLXGDXKOYDUYQZWEKMCADNBINNSTKHNZBUVSIIJQVTRILLSPJVKDCPSQI");

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
    msg.setTimeStamp(0.8904919547484081);
    msg.setSource(25314U);
    msg.setSourceEntity(150U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(235U);
    msg.timeout = 9584U;
    msg.name.assign("AZAMPJRBWMJHLZTVHVZVDLUVBUCSRHKIREYORVUATOOWNHKBAYBIPWEMFYWFAINGYMSECKCGONDSZHPQWZTWHRQSSBVIFCLOPXUXMFDIMPOFLPMLQVXBSAJJGAGBNQPEFYCTGCFRDZMTZZSDIPUUVNGXRJCKZFGOSMNKCIGQDKKXODHKITEXJUTOKEGXEYR");
    msg.custom.assign("NCDHFEBSZIIOAJDWKXZRXDFTMPTGKEWYVAVCPRSYCYCDPKBBFVNOVLBTWMTUKFDVSBWDXKNJFFQYPRZRLZLPNLGQJNTNGVJRYAOLUXHKGIIBOBZI");

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
    msg.setTimeStamp(0.8674147323352969);
    msg.setSource(42173U);
    msg.setSourceEntity(79U);
    msg.setDestination(60907U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.24193747482607975;
    msg.lon = 0.925653626078909;
    msg.z = 0.9553580343132821;
    msg.z_units = 53U;
    msg.speed = 0.6432811695135441;
    msg.speed_units = 111U;
    msg.start_time = 0.6941023472273201;
    msg.custom.assign("HDWIWYQLRXXMGLTPZGQGLYSNKMEFLFGUEVNVIZPNLKBBSPFOBAUNKKXTXZCUYFNZYEIOHDTWOVHUOCTJHPRYGVLWWJYMJOVQHEIONIQLJHVVHTKTFDDQHHJXEUEPFAYCZIPXSBMXBWTJPUMEJUCCZDRJJBUCXUQRRGE");

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
    msg.setTimeStamp(0.16671121675478306);
    msg.setSource(44019U);
    msg.setSourceEntity(141U);
    msg.setDestination(57027U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.9322129727624932;
    msg.lon = 0.199744958193948;
    msg.z = 0.7963489752196184;
    msg.z_units = 122U;
    msg.speed = 0.6960438630201449;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6749737779684537;
    tmp_msg_0.y = 0.4259384460410943;
    tmp_msg_0.z = 0.00829980998685187;
    tmp_msg_0.t = 0.29344725889985246;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 39687U;
    tmp_msg_1.off_x = 0.1562391873840926;
    tmp_msg_1.off_y = 0.7945868008372519;
    tmp_msg_1.off_z = 0.29434499397088154;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.3757091514956875;
    msg.custom.assign("ZBBGZIMEVBCYMYIWYBSCPLSHCWHAOCBXAQDHSIOGRLDHTEENKMIVLPASOLYXLHIWUOYEYDWMCJTRUYTQOQZJBAKFPMXISTHEYUVAFNHVKVUTYFTOBTWXYOJELGPRXAJCJFIVKMZGROTNBOVJEPJXPQZUEHWGUDKDEZRCTGBXSNLFDLAVVZDHNXFSALURNPGKPJQZRGMQBMLHFSARUVPIXCAPWUCSR");

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
    msg.setTimeStamp(0.9905306263493101);
    msg.setSource(62007U);
    msg.setSourceEntity(73U);
    msg.setDestination(32522U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.5218837286603679;
    msg.lon = 0.24449497162358136;
    msg.z = 0.023186292233497885;
    msg.z_units = 230U;
    msg.speed = 0.30805560105917096;
    msg.speed_units = 156U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33584U;
    tmp_msg_0.off_x = 0.9781675451307634;
    tmp_msg_0.off_y = 0.9562195499063618;
    tmp_msg_0.off_z = 0.8543972799165303;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.1544790191060893;
    msg.custom.assign("VUZOXLWXXIPVPLKVIPPOMIBBXWULGHZIASPKGQMMGLJMJOQMGBARSCGHFNQTARBDVRLJESSCYGQEZIOXHVTODQWAUIZDUAOJUYZPN");

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
    msg.setTimeStamp(0.7234325810237352);
    msg.setSource(42602U);
    msg.setSourceEntity(194U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(242U);
    msg.vid = 42365U;
    msg.off_x = 0.39344043315310284;
    msg.off_y = 0.42637132927258015;
    msg.off_z = 0.8895732437981236;

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
    msg.setTimeStamp(0.19900899109647596);
    msg.setSource(22610U);
    msg.setSourceEntity(67U);
    msg.setDestination(50764U);
    msg.setDestinationEntity(247U);
    msg.vid = 25003U;
    msg.off_x = 0.9777371467097851;
    msg.off_y = 0.40129084941941195;
    msg.off_z = 0.9484841390014254;

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
    msg.setTimeStamp(0.9028648103815134);
    msg.setSource(13882U);
    msg.setSourceEntity(223U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(249U);
    msg.vid = 35514U;
    msg.off_x = 0.012350248128719765;
    msg.off_y = 0.0799452177448986;
    msg.off_z = 0.49682182022261656;

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
    msg.setTimeStamp(0.39385302766161134);
    msg.setSource(59583U);
    msg.setSourceEntity(80U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.14420629737367852);
    msg.setSource(20413U);
    msg.setSourceEntity(36U);
    msg.setDestination(10374U);
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
    msg.setTimeStamp(0.8726260044979182);
    msg.setSource(40496U);
    msg.setSourceEntity(254U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.19280539864990864);
    msg.setSource(65473U);
    msg.setSourceEntity(190U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(205U);
    msg.mid = 42026U;

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
    msg.setTimeStamp(0.0887147999285064);
    msg.setSource(18529U);
    msg.setSourceEntity(92U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(213U);
    msg.mid = 48255U;

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
    msg.setTimeStamp(0.4062717906781792);
    msg.setSource(45813U);
    msg.setSourceEntity(55U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(237U);
    msg.mid = 40242U;

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
    msg.setTimeStamp(0.6420123959016102);
    msg.setSource(45926U);
    msg.setSourceEntity(191U);
    msg.setDestination(26435U);
    msg.setDestinationEntity(136U);
    msg.state = 215U;
    msg.eta = 58619U;
    msg.info.assign("RSHIIRJGVAMPLTXXAIYJJYLQJACVSPTQFGTICBICJUNPEOOQYBUIQHFPZPZCJPFQLRTSYJFWOMWWEPGBVTYMAKAKTZZZRGXPVXDHZOLZEK");

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
    msg.setTimeStamp(0.9386212840214427);
    msg.setSource(32701U);
    msg.setSourceEntity(153U);
    msg.setDestination(53704U);
    msg.setDestinationEntity(39U);
    msg.state = 83U;
    msg.eta = 22866U;
    msg.info.assign("AMZELTUVBTVEDRXQDIKRRJOJPYDBYHWQUAOGKBVETYEMVWZDKYKMQ");

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
    msg.setTimeStamp(0.9276877095630155);
    msg.setSource(53407U);
    msg.setSourceEntity(234U);
    msg.setDestination(35927U);
    msg.setDestinationEntity(209U);
    msg.state = 240U;
    msg.eta = 20249U;
    msg.info.assign("RUMDMELVUCCADXBQIQMHFCNXISZLQFXHSPRWPZLUJOBJHPDUWSNNJLCJKKKPDKCKXWOBAITHAMZEUXEZFRBYGEOOPJINSQRWGHTSSHEQPHXQSXSOOZZTLAYVCYNCJUTTWDEZIHGUNFXKZRODCRYJIYGNGGBQDIUBIQGLAYTD");

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
    msg.setTimeStamp(0.1816659727159171);
    msg.setSource(14881U);
    msg.setSourceEntity(78U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(13U);
    msg.system = 18135U;
    msg.duration = 51124U;
    msg.speed = 0.950518248092763;
    msg.speed_units = 74U;
    msg.x = 0.25534063115792893;
    msg.y = 0.8134147330599161;
    msg.z = 0.8618657010014501;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.2255436986377174);
    msg.setSource(50221U);
    msg.setSourceEntity(25U);
    msg.setDestination(1469U);
    msg.setDestinationEntity(65U);
    msg.system = 3900U;
    msg.duration = 4672U;
    msg.speed = 0.1794075981244665;
    msg.speed_units = 169U;
    msg.x = 0.4802821928360501;
    msg.y = 0.6178248537223513;
    msg.z = 0.22561244486539878;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.08271797717985896);
    msg.setSource(49832U);
    msg.setSourceEntity(243U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(81U);
    msg.system = 36170U;
    msg.duration = 64615U;
    msg.speed = 0.028625309366182017;
    msg.speed_units = 170U;
    msg.x = 0.5366620394610421;
    msg.y = 0.646574737062749;
    msg.z = 0.08261489948193168;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.21167035366404519);
    msg.setSource(39052U);
    msg.setSourceEntity(176U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.5632184030006454;
    msg.lon = 0.8509563307322492;
    msg.speed = 0.7276838157120271;
    msg.speed_units = 106U;
    msg.duration = 51479U;
    msg.sys_a = 35152U;
    msg.sys_b = 23641U;
    msg.move_threshold = 0.8631322810476987;

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
    msg.setTimeStamp(0.7414600088711115);
    msg.setSource(63112U);
    msg.setSourceEntity(29U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.02609849416480059;
    msg.lon = 0.009991388391458633;
    msg.speed = 0.3774368517381608;
    msg.speed_units = 222U;
    msg.duration = 13556U;
    msg.sys_a = 27808U;
    msg.sys_b = 50305U;
    msg.move_threshold = 0.08246897439684109;

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
    msg.setTimeStamp(0.3611118324005934);
    msg.setSource(4329U);
    msg.setSourceEntity(162U);
    msg.setDestination(44607U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.7534211418784403;
    msg.lon = 0.7903950199546184;
    msg.speed = 0.9770416251550007;
    msg.speed_units = 101U;
    msg.duration = 47737U;
    msg.sys_a = 6969U;
    msg.sys_b = 47739U;
    msg.move_threshold = 0.42723872195264245;

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
    msg.setTimeStamp(0.11035099010906235);
    msg.setSource(24114U);
    msg.setSourceEntity(2U);
    msg.setDestination(59575U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.6290875102775915;
    msg.lon = 0.3651975747193137;
    msg.z = 0.654644916109492;
    msg.z_units = 178U;
    msg.speed = 0.9321706494197859;
    msg.speed_units = 40U;
    msg.custom.assign("IEFGQILBEYECYOGHMOLRDLFUCCFFGZNPEWUNMJVQISWGRHMYLOTJUGKVTCKXQKKVUPSMWMYRBGJANTRUIKDKDQPJCAEOVAFINGXQQBIYJFLUFHJMPTIIWJVFQKWVDGMEPQPHXWXOUJDTYFHCNDBSXZRGWRZLVEMACAIZHSAOXBCDXSSCPSTEANCNBTDBUX");

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
    msg.setTimeStamp(0.7322328550628114);
    msg.setSource(15154U);
    msg.setSourceEntity(96U);
    msg.setDestination(42611U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.7302153244533135;
    msg.lon = 0.6779219502655043;
    msg.z = 0.9324072420769491;
    msg.z_units = 136U;
    msg.speed = 0.4853129720431065;
    msg.speed_units = 201U;
    msg.custom.assign("CDDYYZBMCFISJFKCSZFLOVZBXDIFIRIOGWNVEYRQNLQPITNHPUTSEVDGJAREAMERCODOW");

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
    msg.setTimeStamp(0.13087488799480906);
    msg.setSource(22820U);
    msg.setSourceEntity(241U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.6094540247417236;
    msg.lon = 0.5727788378379977;
    msg.z = 0.6923237684191794;
    msg.z_units = 117U;
    msg.speed = 0.932892953417216;
    msg.speed_units = 39U;
    msg.custom.assign("PWNEBVJNVIQJWSZYMSQKV");

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
    msg.setTimeStamp(0.8203676393407721);
    msg.setSource(34426U);
    msg.setSourceEntity(89U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.0026583162000287652;
    msg.lon = 0.5595799661577199;

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
    msg.setTimeStamp(0.5723230756765918);
    msg.setSource(9136U);
    msg.setSourceEntity(122U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.945825985176004;
    msg.lon = 0.6961794393555335;

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
    msg.setTimeStamp(0.5323904577167422);
    msg.setSource(63702U);
    msg.setSourceEntity(108U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.985643170929687;
    msg.lon = 0.7847835780658163;

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
    msg.setTimeStamp(0.5026000745006316);
    msg.setSource(47997U);
    msg.setSourceEntity(153U);
    msg.setDestination(17148U);
    msg.setDestinationEntity(10U);
    msg.timeout = 64242U;
    msg.lat = 0.31696527260791396;
    msg.lon = 0.9839975081830542;
    msg.z = 0.914299961442645;
    msg.z_units = 56U;
    msg.pitch = 0.10021968104358259;
    msg.amplitude = 0.5865773660336284;
    msg.duration = 27297U;
    msg.speed = 0.7604828315189861;
    msg.speed_units = 119U;
    msg.radius = 0.5557032372613937;
    msg.direction = 182U;
    msg.custom.assign("ZNASVRQVBHEHPCAQOHBOIPRLGPPYYPFWVESUGORUUTGGXUISKPBKWODPWKFRGWTBDZFQUIPICNEDDDTMLVLLGEAJJZXIJVXKRYEIKJWHLHDTTBRZPADWTAKZHRSIFFUCBICDJLFIXMYKJFCANJMSQNNMOAUCKDBRMJVWNANKMJSRLFZJQ");

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
    msg.setTimeStamp(0.5419173860906513);
    msg.setSource(37904U);
    msg.setSourceEntity(78U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(144U);
    msg.timeout = 1629U;
    msg.lat = 0.3764946153476746;
    msg.lon = 0.09304802245807342;
    msg.z = 0.40534671662497024;
    msg.z_units = 91U;
    msg.pitch = 0.967548763882509;
    msg.amplitude = 0.28795874331450033;
    msg.duration = 7269U;
    msg.speed = 0.8987727423879529;
    msg.speed_units = 30U;
    msg.radius = 0.7588860625877926;
    msg.direction = 216U;
    msg.custom.assign("CNLZPKFGSMIKHBHHKEYCZKTSYSXOAMVTYVIVDBWHCBYZFNNAIMPBKMWYLDSIGHQOKSFOGXPEHGYLIPFYXROIEUMMKTUNBJUVMNXRCBFRZBCSGJJQSURLTQTWUQDZONVQPZWQPFDQRBAXWYLABJKJCATVLOOGZGGOTRAGWFPXFNUWJDPGUITAAJDLZUTQXFRDERVMEDSWBSQ");

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
    msg.setTimeStamp(0.09193660012712368);
    msg.setSource(42476U);
    msg.setSourceEntity(139U);
    msg.setDestination(28420U);
    msg.setDestinationEntity(137U);
    msg.timeout = 59706U;
    msg.lat = 0.054854470028431246;
    msg.lon = 0.6666155642448103;
    msg.z = 0.13469226121588074;
    msg.z_units = 113U;
    msg.pitch = 0.19273536708175165;
    msg.amplitude = 0.3966081504512089;
    msg.duration = 8625U;
    msg.speed = 0.03331708734767225;
    msg.speed_units = 242U;
    msg.radius = 0.0940251163729744;
    msg.direction = 60U;
    msg.custom.assign("HPHVZUSQYANDFSKAIPLGNXQITEQULLDHNRNRJSFLUOETNCDJWYPMAQRTWIGBFMDVZMKGEZECNELKMOZMWAPTGNZJUQSRGFXPOTRBWJDXTSHIEYYTLHKCHWKU");

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
    msg.setTimeStamp(0.42747729319913164);
    msg.setSource(5588U);
    msg.setSourceEntity(222U);
    msg.setDestination(1379U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("JMXWBUYAKWMXUZDUCNXZGUHEXKLORPJILUZVKNVVCVMEWNTKTQQZHQIPTEHARSGLKJGZXXNITMGWESOVCTSPZRGMJEWDROFHTSJIGQEDOQVFXLCZMYSDHAKFNUYAOFQXZIPYYVYFOIXBLFSNSWBZMUDJKCNJACLLMBYUTMHEVWRCQRXIEBDGYMATUSZPOPLNAYJBVCBKKFGTDBC");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45606U;
    tmp_msg_0.off_x = 0.5041101910973896;
    tmp_msg_0.off_y = 0.8348268128475951;
    tmp_msg_0.off_z = 0.42035231261270223;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MYHFMJTLFXFBRBYIRIRSTYVHEQLLIDFGCHDDQHJWKOSTWKSKOTFDAVGOYUOWYTPFGHPFQCUUCQMCLQWCOCJYHEIXWGUKNEAKODXJNHWNLIXDXJQVZPBJTCRQGBPMMRHRZKKYMESZEZFPACTCVGALGAMPAVROUSSJNNIGNORVMABXJSNTADHTYXBPFJLBPWEKQCLLDZUTRVN");

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
    msg.setTimeStamp(0.4956436328961188);
    msg.setSource(22455U);
    msg.setSourceEntity(63U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("SUUMQDNKGVURFJRWOXKXLBWOLASZLWTTVVUNUZWROTJTSJPLHUVFXCTYQBATCDIFVJESKVSJRAYQRPBOIZQBKAECAMFZKKLZODSGTSYDGSLQIYDIPMGZUHKZZIAEXNETXHEXEFNRMGLYFWVHYKRMCCWFXKZIUQSSMDJOFMV");
    msg.reference_frame = 164U;
    msg.custom.assign("BODGTPCQAIFJWPUHDMMVLEUZDMBONBYTMUQXIOELFHJNIXEVANMSTPQERXZMBNVPZKFGPCTLZACBLHKMFYLVSQXUJFKBPQCNVKBOVHZDTUVTEEYADOLAYOCY");

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
    msg.setTimeStamp(0.43510131600721);
    msg.setSource(47830U);
    msg.setSourceEntity(149U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("FETNYCJRXEFLBAMYKRQAQJISKKJYXSFAQZIAFCMJXZEEWPHNHEMVMLPOVCTLANFECXXHHDJZPQTVKHBIZOXDJKXSREODGDBLNJDZEMWJUREKIOFTGRPAGFWTHVWBMBUH");
    msg.reference_frame = 123U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18087U;
    tmp_msg_0.off_x = 0.9548318516368849;
    tmp_msg_0.off_y = 0.17936182454195326;
    tmp_msg_0.off_z = 0.2906653877460438;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZWDCYMTXRHKKNDMHUOBYTGRRJDJNWPDNQ");

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
    msg.setTimeStamp(0.7682614612948209);
    msg.setSource(3040U);
    msg.setSourceEntity(144U);
    msg.setDestination(52279U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("HWRRCYCGGOZWUWRPVIOUFCNUJXSYATOPKZDJCKNQPAMLSEFMFGBWPTHFNLCEOEYGSQIVGDLTKRQUFSWTNBZEXNKNJ");
    msg.formation_name.assign("AANEGSJQYIQYSMVQ");
    msg.plan_id.assign("KNBBMIPXATTUXJCEDDLPAHQZBDKAYJSIOBWSNRCRTGAAQVGIQYJUSHJTYWNCPZZVULTQFRGVBPCOWNGEVQHSVXOCXLQGIVDLIYBDSTYELLOSLKAXVUSFEJCHPWIJLGNVKUWRVQODMCOEFXLWZSPCRBWKEIJ");
    msg.description.assign("YGTAFVDNGNSCXYJVTIIGAEBHERK");
    msg.leader_speed = 0.9869590899346733;
    msg.leader_bank_lim = 0.1358257666878706;
    msg.pos_sim_err_lim = 0.8723976241866837;
    msg.pos_sim_err_wrn = 0.8620091742359829;
    msg.pos_sim_err_timeout = 56912U;
    msg.converg_max = 0.11327917490912254;
    msg.converg_timeout = 32520U;
    msg.comms_timeout = 39708U;
    msg.turb_lim = 0.8074595943623729;
    msg.custom.assign("QDNHWVMEEVAHFWNNIACFJIZLYKPGDLRYPAMJHDTGLKNLDYXOTTSKSKCTJWZUBYGFDCGNRTAQWATAFAYCFFJBERFXMNWPBRULVRLCHBFJSPKLEEMXJXUOOVGRIBQSFTKNGBEUAVIYWNBOTSGESQHVXINVWVAJIIJOCMSEDMEFGYVMMHTKWOJZHPXZHUZKSRPOPCPDIAXUQZSMQNOWUZHLDKOPQCQIHBVGDQTZWUZC");

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
    msg.setTimeStamp(0.3230512811424705);
    msg.setSource(31184U);
    msg.setSourceEntity(18U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("FVYTPMZWSBHDZVHFVLXUGNCTMISDUJDWCAROKEXKZMVICZFXJISQBZRUABOEQRQULYZWGPGHUFJHBCHEPIDDLEXWERAIROLVFDVRDLUGFXNWXPRRJFMYIPIEBHMULIKJJWOHASHTTASOXDUYAIMJWLRMNPZBSYEFFZNQDHTZKAOACRKUSNMYLEGOPV");
    msg.formation_name.assign("RGSGTBLYZQOGRKXZUHFMXMHSPPGDYCKGYJJNAXUFHTWLPHZUXXFQTQJHXYGDEKNTERWOIIJJHFKPZCBPML");
    msg.plan_id.assign("KQHXDDTFQTAMLUHBXCBFDUOMSVQNYVLUJHINGFYOTOXQDYTBZOCHMKNDNGYXKKZUBXFXJZOGUACMCNJVZGMIRYJCYGQVAUOOWUPREDPTEQOCXBXITZTBMQNAKJEYVHPGSWQWWSLULUUYRIPFLNEDJBVPILJMAEHWIZESOZJWXTARZGIRFKBSZLGTERLPV");
    msg.description.assign("XWLTGUVBHDCHCMKLUPEXMNWYPPUOPUESPOGJL");
    msg.leader_speed = 0.5969875415390168;
    msg.leader_bank_lim = 0.059446646493017896;
    msg.pos_sim_err_lim = 0.02867929260766111;
    msg.pos_sim_err_wrn = 0.5785762891939825;
    msg.pos_sim_err_timeout = 35846U;
    msg.converg_max = 0.3209843581178431;
    msg.converg_timeout = 30012U;
    msg.comms_timeout = 22006U;
    msg.turb_lim = 0.811459228233022;
    msg.custom.assign("QTTASAUGBDSBOBZNBHLTVZGOXGYKNFODBHZPYTEWQIULMZQJMHYYKVWJSMUJGPFWBJMJAXSQNPVVNUWMTAERREZQNJKYAFQKCFIVPRIERRDHZKLKUXBXWTCUPZTZKHMDNSGZRCFCIFFSYPYGIUFMHPFOMYCHXLYAZRLNMIWSEGDXEDPUHXSTIGOAQQJRSDKMPDGXOVLWLXHCCRVCPALCH");

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
    msg.setTimeStamp(0.5591586215877092);
    msg.setSource(15716U);
    msg.setSourceEntity(88U);
    msg.setDestination(2150U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("ZMKLGRABKRDFDXCBLBCUKLARLPNYAYUPDWOXSITHOIOSKRYCPMKKTIEEOLRCVUATZOUBKGWQFPVWTVMHEIMIWJYJVQJTPRPGSCNWPZHVSOZYSAQKIQZCLLUURDEFBJNHVJO");
    msg.formation_name.assign("QYPPJVRJIVUMGSOCMYSIXPALJXJZKBTJSNZLFDUGXHONDOCDNCMRMDOJRBORMUYUWYXBFGAMWKKXQEYACAGEVWHEPIRYAWLQSWONYTHVMB");
    msg.plan_id.assign("XQHAKQFGYTKAYKNGTOXAJCPCBSOTXAILNZDSKGZXMRYTHHINYZXMCZSBYWKPKIYFYVSVEIZLBRUHROYVSGJBKWLMBZOOUWZOENWQEVOWDMFJLPHUURWLALOXGMVFTJACDEGQEPDICVXAUFEDPRCTPBWZLWSVOXHNBYVJBIQGMNQKTEZUMRHJQJECRSVRNUPTBAJHUFUCASYKCLIKIDN");
    msg.description.assign("RPRFPDHFGNZKWQAHCOTAIUXULUVGJPQUKVLROJJYZCYFOWMJGTSEPKXEMIFDLOWUNDMHMZQZNFVCLDOGEWASWJYVIZPSBCAWVXYBFNPBTBKRFUGEPNHPDYNVTLXSUGBJCNXSBTXCYYOBFVTOLMHXPHGKECORQTZKSTYZSURRICMQNBQDODDAIHRILMOFTCWHJDXXNUQUFEAEAGXMLNHGK");
    msg.leader_speed = 0.7695136392198202;
    msg.leader_bank_lim = 0.12960492205413143;
    msg.pos_sim_err_lim = 0.43521030839587205;
    msg.pos_sim_err_wrn = 0.8701623892482581;
    msg.pos_sim_err_timeout = 6252U;
    msg.converg_max = 0.367107846343124;
    msg.converg_timeout = 13147U;
    msg.comms_timeout = 26919U;
    msg.turb_lim = 0.3297889523335593;
    msg.custom.assign("FKCDDKSEOYHGLCSCBNHFZNRGOVKMUTGNAEDNOJQKVREPPHGLMXPQEZBCDAJTDFUQXRBQICRIYNDWOSRLAWYATWGP");

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
    msg.setTimeStamp(0.5394692929809003);
    msg.setSource(35597U);
    msg.setSourceEntity(244U);
    msg.setDestination(3968U);
    msg.setDestinationEntity(131U);
    msg.control_src = 4027U;
    msg.control_ent = 89U;
    msg.timeout = 0.807558755035447;
    msg.loiter_radius = 0.5031904219560857;
    msg.altitude_interval = 0.07184416838644592;

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
    msg.setTimeStamp(0.8978683943882743);
    msg.setSource(19136U);
    msg.setSourceEntity(29U);
    msg.setDestination(18355U);
    msg.setDestinationEntity(174U);
    msg.control_src = 14935U;
    msg.control_ent = 205U;
    msg.timeout = 0.8695660614850097;
    msg.loiter_radius = 0.497509903239715;
    msg.altitude_interval = 0.3554926941793244;

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
    msg.setTimeStamp(0.7085179809153738);
    msg.setSource(51409U);
    msg.setSourceEntity(211U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(41U);
    msg.control_src = 50336U;
    msg.control_ent = 89U;
    msg.timeout = 0.8356608102571425;
    msg.loiter_radius = 0.171269220459356;
    msg.altitude_interval = 0.5093037687880034;

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
    msg.setTimeStamp(0.2333621509124959);
    msg.setSource(32248U);
    msg.setSourceEntity(200U);
    msg.setDestination(55221U);
    msg.setDestinationEntity(77U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3861542892746017;
    tmp_msg_0.speed_units = 16U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.36368496742400913;
    tmp_msg_1.z_units = 112U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1675163542680963;
    msg.lon = 0.45827921374776803;
    msg.radius = 0.3119512602610047;

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
    msg.setTimeStamp(0.23331574491512042);
    msg.setSource(53292U);
    msg.setSourceEntity(180U);
    msg.setDestination(13440U);
    msg.setDestinationEntity(231U);
    msg.flags = 81U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9602943594684877;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6048483229672854;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.45376921579997787;
    msg.lon = 0.32596283636338075;
    msg.radius = 0.46647631488547436;

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
    msg.setTimeStamp(0.4268023667172417);
    msg.setSource(37884U);
    msg.setSourceEntity(224U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(241U);
    msg.flags = 141U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9746140049030477;
    tmp_msg_0.speed_units = 130U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09663733011319098;
    tmp_msg_1.z_units = 204U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8233196392008915;
    msg.lon = 0.1863606870604203;
    msg.radius = 0.8314834930411232;

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
    msg.setTimeStamp(0.34285388043605436);
    msg.setSource(23354U);
    msg.setSourceEntity(159U);
    msg.setDestination(10646U);
    msg.setDestinationEntity(166U);
    msg.control_src = 38136U;
    msg.control_ent = 162U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9451816317947845;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.30479079280804666;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9034430760808533;
    tmp_msg_0.lon = 0.43103725246117663;
    tmp_msg_0.radius = 0.3551086734387626;
    msg.reference.set(tmp_msg_0);
    msg.state = 78U;
    msg.proximity = 89U;

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
    msg.setTimeStamp(0.42718437203543635);
    msg.setSource(26471U);
    msg.setSourceEntity(234U);
    msg.setDestination(34014U);
    msg.setDestinationEntity(248U);
    msg.control_src = 32186U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9770339345664222;
    tmp_tmp_msg_0_0.speed_units = 250U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1360187641622207;
    tmp_tmp_msg_0_1.z_units = 244U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3748784435456679;
    tmp_msg_0.lon = 0.8034874752445204;
    tmp_msg_0.radius = 0.18083792230946316;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 238U;

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
    msg.setTimeStamp(0.3783815457958982);
    msg.setSource(11986U);
    msg.setSourceEntity(65U);
    msg.setDestination(52568U);
    msg.setDestinationEntity(65U);
    msg.control_src = 22869U;
    msg.control_ent = 93U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 122U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11490848206895754;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8522546722967099;
    tmp_tmp_msg_0_1.z_units = 175U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7078676364865166;
    tmp_msg_0.lon = 0.5993184106657579;
    tmp_msg_0.radius = 0.04745735538711138;
    msg.reference.set(tmp_msg_0);
    msg.state = 22U;
    msg.proximity = 112U;

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
    msg.setTimeStamp(0.005344084272111305);
    msg.setSource(1502U);
    msg.setSourceEntity(36U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(135U);
    msg.ax_cmd = 0.12275119679623792;
    msg.ay_cmd = 0.7143294381494389;
    msg.az_cmd = 0.8758987861914398;
    msg.ax_des = 0.6815235770723261;
    msg.ay_des = 0.2260468142125962;
    msg.az_des = 0.010296468777553969;
    msg.virt_err_x = 0.29590881794621193;
    msg.virt_err_y = 0.24011043845302704;
    msg.virt_err_z = 0.6187125631639393;
    msg.surf_fdbk_x = 0.4241991447722364;
    msg.surf_fdbk_y = 0.9490825500743759;
    msg.surf_fdbk_z = 0.4276222648490472;
    msg.surf_unkn_x = 0.25592192551089765;
    msg.surf_unkn_y = 0.24824957579529616;
    msg.surf_unkn_z = 0.8187135927467992;
    msg.ss_x = 0.4170373869690548;
    msg.ss_y = 0.36095369715715686;
    msg.ss_z = 0.9167927448040696;

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
    msg.setTimeStamp(0.2011942236425237);
    msg.setSource(46553U);
    msg.setSourceEntity(205U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.05351170250167703;
    msg.ay_cmd = 0.3972417865963189;
    msg.az_cmd = 0.1793553759941363;
    msg.ax_des = 0.9202742457401663;
    msg.ay_des = 0.0523134051969919;
    msg.az_des = 0.30964365417565665;
    msg.virt_err_x = 0.21638189605492575;
    msg.virt_err_y = 0.922604078533165;
    msg.virt_err_z = 0.9796776301517656;
    msg.surf_fdbk_x = 0.3226352829324193;
    msg.surf_fdbk_y = 0.2056866591244647;
    msg.surf_fdbk_z = 0.09416190604068198;
    msg.surf_unkn_x = 0.4059668066606841;
    msg.surf_unkn_y = 0.24487193801632257;
    msg.surf_unkn_z = 0.45412756473744176;
    msg.ss_x = 0.8718593096736863;
    msg.ss_y = 0.22137856722256855;
    msg.ss_z = 0.5909202799809555;

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
    msg.setTimeStamp(0.7333088799099823);
    msg.setSource(43485U);
    msg.setSourceEntity(111U);
    msg.setDestination(29729U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.27636074012015666;
    msg.ay_cmd = 0.8722630442499364;
    msg.az_cmd = 0.668041264579244;
    msg.ax_des = 0.8080253389730933;
    msg.ay_des = 0.6479775768826903;
    msg.az_des = 0.4951242459713723;
    msg.virt_err_x = 0.3215543159425256;
    msg.virt_err_y = 0.011569306849471772;
    msg.virt_err_z = 0.8415105945409795;
    msg.surf_fdbk_x = 0.769615451959568;
    msg.surf_fdbk_y = 0.7343402385881591;
    msg.surf_fdbk_z = 0.2762042626582767;
    msg.surf_unkn_x = 0.46802589922838544;
    msg.surf_unkn_y = 0.4615757472870018;
    msg.surf_unkn_z = 0.537364756778149;
    msg.ss_x = 0.48221438637216807;
    msg.ss_y = 0.41736758442731403;
    msg.ss_z = 0.22278616460946832;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DOVYPCKIRDLBGCVFUCPYZIACLCYMPFVYESZCLVSYIOSRFIPWGZWXBXGIYBWJPSAPUTLQFODXXMTBWSR");
    tmp_msg_0.dist = 0.26169418236405984;
    tmp_msg_0.err = 0.782033863237391;
    tmp_msg_0.ctrl_imp = 0.10487155072722631;
    tmp_msg_0.rel_dir_x = 0.1512827289942843;
    tmp_msg_0.rel_dir_y = 0.10568773273173004;
    tmp_msg_0.rel_dir_z = 0.19179233991179412;
    tmp_msg_0.err_x = 0.27241438711599686;
    tmp_msg_0.err_y = 0.4051870187477875;
    tmp_msg_0.err_z = 0.575155898449573;
    tmp_msg_0.rf_err_x = 0.7433403377129818;
    tmp_msg_0.rf_err_y = 0.924984323295531;
    tmp_msg_0.rf_err_z = 0.7351341637619647;
    tmp_msg_0.rf_err_vx = 0.9806707252805361;
    tmp_msg_0.rf_err_vy = 0.13854485229254565;
    tmp_msg_0.rf_err_vz = 0.7936478018464999;
    tmp_msg_0.ss_x = 0.4657867574019404;
    tmp_msg_0.ss_y = 0.6472008215431307;
    tmp_msg_0.ss_z = 0.2961862190964286;
    tmp_msg_0.virt_err_x = 0.7915503739695355;
    tmp_msg_0.virt_err_y = 0.8198306961088931;
    tmp_msg_0.virt_err_z = 0.45254622488546814;
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
    msg.setTimeStamp(0.14859715538561535);
    msg.setSource(59841U);
    msg.setSourceEntity(194U);
    msg.setDestination(52126U);
    msg.setDestinationEntity(202U);
    msg.s_id.assign("SGOGEVSGQFBFUUMFAIGYMNNPKTKKUYNKHBSOVOWCPVFTTUZLTNSGXPAIDKLTRCBHDHWGDPGGXQRSDMYAQMPDIMKEQOKXETDEYMZRVHEBFJLBRBSAFJJBMIXOEOZOEICLCVEDBWAYYPWRVIQXFRMSWTCYSYLZFWHVXLXAXJNDAYTOIUCRBKBTINHUMTG");
    msg.dist = 0.6756668050973175;
    msg.err = 0.9176446645657592;
    msg.ctrl_imp = 0.9368222535142015;
    msg.rel_dir_x = 0.5555509327826231;
    msg.rel_dir_y = 0.7556009649680298;
    msg.rel_dir_z = 0.5088819841971998;
    msg.err_x = 0.5410549552321129;
    msg.err_y = 0.627812605485255;
    msg.err_z = 0.21798393760333423;
    msg.rf_err_x = 0.8898534818500733;
    msg.rf_err_y = 0.9751246041750791;
    msg.rf_err_z = 0.7075865258966252;
    msg.rf_err_vx = 0.1331967768735215;
    msg.rf_err_vy = 0.38111103792145107;
    msg.rf_err_vz = 0.8881184164631614;
    msg.ss_x = 0.33783492714727703;
    msg.ss_y = 0.4106958893078272;
    msg.ss_z = 0.6826806516920239;
    msg.virt_err_x = 0.5549020035732013;
    msg.virt_err_y = 0.16025770845594145;
    msg.virt_err_z = 0.7321001905786673;

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
    msg.setTimeStamp(0.8417808489245283);
    msg.setSource(55183U);
    msg.setSourceEntity(172U);
    msg.setDestination(54081U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("OHNUYWQMAAKZJUHCBKVIHNWRONMLRRDJHSSWTVPNYMNYLGICAMFZPLENJOBUOULUKLQYQSLNMWQQTKXCPKOHBDOZZCRZUIXTXTHFKDLTRS");
    msg.dist = 0.771179296864721;
    msg.err = 0.4710410379908955;
    msg.ctrl_imp = 0.5119034160991942;
    msg.rel_dir_x = 0.23473087571673645;
    msg.rel_dir_y = 0.4018322518957672;
    msg.rel_dir_z = 0.06584514850486234;
    msg.err_x = 0.18594094218631485;
    msg.err_y = 0.12846510962298818;
    msg.err_z = 0.8520515684603749;
    msg.rf_err_x = 0.019018997861763753;
    msg.rf_err_y = 0.20205255315485737;
    msg.rf_err_z = 0.584730081607669;
    msg.rf_err_vx = 0.12131178181770874;
    msg.rf_err_vy = 0.44370855908055007;
    msg.rf_err_vz = 0.6915037118095263;
    msg.ss_x = 0.6459660406440225;
    msg.ss_y = 0.2503145650925106;
    msg.ss_z = 0.43832995323435586;
    msg.virt_err_x = 0.10160193271444484;
    msg.virt_err_y = 0.8095345692299564;
    msg.virt_err_z = 0.6140701808911593;

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
    msg.setTimeStamp(0.9908964587250746);
    msg.setSource(51193U);
    msg.setSourceEntity(148U);
    msg.setDestination(37679U);
    msg.setDestinationEntity(189U);
    msg.s_id.assign("ZPETKOHAVPQCELILEBODOOOJQOHFSMNUNRQGPGTGJSCRLPXIXUU");
    msg.dist = 0.5461471912969391;
    msg.err = 0.3043076428360123;
    msg.ctrl_imp = 0.6436998904597068;
    msg.rel_dir_x = 0.16218157081432893;
    msg.rel_dir_y = 0.35599764616179563;
    msg.rel_dir_z = 0.25788832733233324;
    msg.err_x = 0.9240920201363223;
    msg.err_y = 0.21529448157376208;
    msg.err_z = 0.7257942170583547;
    msg.rf_err_x = 0.2981273544555999;
    msg.rf_err_y = 0.990971164056812;
    msg.rf_err_z = 0.23584369289775897;
    msg.rf_err_vx = 0.9087385969378806;
    msg.rf_err_vy = 0.6584370748341821;
    msg.rf_err_vz = 0.6971243245792661;
    msg.ss_x = 0.4298985968381782;
    msg.ss_y = 0.8699679889676797;
    msg.ss_z = 0.8950533188055212;
    msg.virt_err_x = 0.18357621975943794;
    msg.virt_err_y = 0.3605523736600601;
    msg.virt_err_z = 0.699591246669088;

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
    msg.setTimeStamp(0.291712071887691);
    msg.setSource(49084U);
    msg.setSourceEntity(58U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(165U);
    msg.timeout = 8015U;
    msg.rpm = 0.5941723451329015;
    msg.direction = 95U;
    msg.custom.assign("TDPLOYMBJSZGRAKLIEVXVZJNUIVBEAKNYUYPILQOZYBMJCULEMRGVZCRTTEVFPWZFEOPTOBQXLSUDSTVGVHXQAMIPRAJVNMLXIEHQFNXISAAUPLEZMTYLQXJKQXCSFRRRBJOGWBFBYUFQFMHXMNARUGPWDTWCDCTHKFGWZNYXJWBZZOMJWJUHCWOWVIGTSKAHSSDBHCXKN");

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
    msg.setTimeStamp(0.2683375403404037);
    msg.setSource(60718U);
    msg.setSourceEntity(65U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(94U);
    msg.timeout = 8213U;
    msg.rpm = 0.10480362574718183;
    msg.direction = 104U;
    msg.custom.assign("QXGHAVIXPNUDMDJFGHWODQXOWIWLTUNNADPUNPEHITLAHCAYKGSBHUKIWUYUMQ");

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
    msg.setTimeStamp(0.4284454000143516);
    msg.setSource(11124U);
    msg.setSourceEntity(204U);
    msg.setDestination(20290U);
    msg.setDestinationEntity(160U);
    msg.timeout = 11814U;
    msg.rpm = 0.7569508564897677;
    msg.direction = 158U;
    msg.custom.assign("HJULVLGFDEKUHDWKFYEZZNIJBHXBAGCVCDWIWWSNPTYVZYAZXQSOIGXCIHHRBJMQLETJVOLYMTAKGZIUUZVTXYUJYCCQCKWHJGLXVDMGMLAVQAUXQOFFRVEUDRRGPAPHWBPWYFRITSDKSUSEMABCBAXFXETJZMZFHJRNBKOQTYKSPCEMNVSFPLRUNTUTGQDWSHIQRHANIKYPZQYSGDOPICIKXQSEKLOEDBFWNMRFBPNAXENMMOZ");

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
    msg.setTimeStamp(0.3927401848646863);
    msg.setSource(18988U);
    msg.setSourceEntity(0U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("DPIALIABKBURLXJPXSPEDTUBKXOFDFKDLMBUXFKTNKGIREMCYWLAYOZULTLMTPSOABHGECJOMFLLEQJNQGKJCHXGEHDPFYXIWCWNRMOAVSFRXZZNETXXVZADETBBJOQCGRMCTIYLWYHPKRRNWWUVJEYAHHNJS");
    msg.type = 176U;
    msg.op = 17U;
    msg.group_name.assign("DPNKNCRTERXSKQDRWSSBOVGGJUVAFZREXOUZHJUGHCTFZHSOYFKARCZVKTNZYTHZWRCDYCDBIEHBQJAQNIGDFABYRPLEQHMHODYPUJPHGWQOIUZEXX");
    msg.plan_id.assign("XHAGQVCMVZWSEBDHFYGUDWPXCQUNIZVABWSFHRHBNPRAJTPXYI");
    msg.description.assign("BWXLLDIIPWGRDBVQZNNCDTGRZPVLLFRYFWBGHNHSMPCHXYSQSOCKBTFCKJVQZOYFXSHSFAYMKRMDARNMZHEEFJDAPLHLXXEXYGJSTRQMRPALXJPDHCKMURQEKTNKGUVGSDQQWARUFLGCNPQSISSQKWIITLIAUWEOFEDGZEOBJMVXPYPTJ");
    msg.reference_frame = 59U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28149U;
    tmp_msg_0.off_x = 0.5987017681237434;
    tmp_msg_0.off_y = 0.7273884760996743;
    tmp_msg_0.off_z = 0.7361353190075512;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5356817244532649;
    msg.leader_speed_min = 0.28706938879719135;
    msg.leader_speed_max = 0.7061928831462196;
    msg.leader_alt_min = 0.2588068517673183;
    msg.leader_alt_max = 0.8988828754167909;
    msg.pos_sim_err_lim = 0.8957767583565526;
    msg.pos_sim_err_wrn = 0.9559826601396897;
    msg.pos_sim_err_timeout = 50908U;
    msg.converg_max = 0.9048067886840233;
    msg.converg_timeout = 53192U;
    msg.comms_timeout = 53066U;
    msg.turb_lim = 0.16506058885524066;
    msg.custom.assign("CXQODZPSTMCGMPXBGNPFMDDKXQDOOLHGUXEWVPSRECTA");

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
    msg.setTimeStamp(0.9017980598960103);
    msg.setSource(56825U);
    msg.setSourceEntity(11U);
    msg.setDestination(24223U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("BISTBLSPESBQNHVCBJRTDZWTWVYXAHURFHREBLNIQQYAAOKVTVGMYGEUFMCAIHFTKSLDPLSVOKLMVZKIZMFQHUHIUDGZWWJBCCAKZJVPEHZUOQFDOKFEPOETJOPZXLDWNYRJSKZOUDYMRRFLBTACQCZXVUGYHOPVRYQJNXPRKXGGCCGNMCIYOJVHSBIGXJYGRWWUHKNAUPSBYT");
    msg.type = 108U;
    msg.op = 17U;
    msg.group_name.assign("CDKYRYHFLAKKHCQXDFWANGATFCTNGVYPWMTQCLSOASDGEMMHFYMAPOLRDYOBHPLVWDZHVBNPJOKOIVEBVLDZHOSLZWUMNUAZUFHDVQVDVGCRKFBUKHRTFTISZWYPCWTZGJAWSNXOCNPUFXZTKKGEUACG");
    msg.plan_id.assign("ITXWTNDIGUOOQRJZ");
    msg.description.assign("XGLKRVIDIKGQVOIJMFRYULIVXQJZPWONXBRTDAHSJRNUDPIARKTKKPZECUHWDDEMFTVRQPQBEIGPNTJCSCZMHHZFWIOOEDYJBXKTTBOWUUSQOQFAWXCUZNXFENYHCLQZILPZBASWIUAUTYYMDOVQJV");
    msg.reference_frame = 234U;
    msg.leader_bank_lim = 0.3498195700479012;
    msg.leader_speed_min = 0.9088923265742326;
    msg.leader_speed_max = 0.9652107603117669;
    msg.leader_alt_min = 0.7891047549593623;
    msg.leader_alt_max = 0.22388901580191223;
    msg.pos_sim_err_lim = 0.7084779521465742;
    msg.pos_sim_err_wrn = 0.451339827326649;
    msg.pos_sim_err_timeout = 28588U;
    msg.converg_max = 0.38290065266894713;
    msg.converg_timeout = 3993U;
    msg.comms_timeout = 61466U;
    msg.turb_lim = 0.9701232169706164;
    msg.custom.assign("OJXMRVBTEWGBFKQATFAZSNKVV");

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
    msg.setTimeStamp(0.529597650636514);
    msg.setSource(25642U);
    msg.setSourceEntity(53U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(41U);
    msg.formation_name.assign("ZBVDHDDWGWNITZZQXVYQLEEEMCAFPIDKPLIYBHJQHHLHFIULCFKUBOKMUWISSWHRMXNCKKYLXUQAZOWNHSXPDFIAJVGGVNQCUXAVRCZLCEBAJBZFOXAHGFJTYPMWBRJGQNVTEFXSWTDJFSMGBTNOQRPKUCNJHQXPUGOARZKRLJIPTRZUOCZIKCYVXBIJEYQMONSLMSSPLUIPDNXEARVLDEDOTMWYKFNYJTCVFOASMAYT");
    msg.type = 159U;
    msg.op = 121U;
    msg.group_name.assign("DCJKZPWMILCEVBVOFRUFMLTIIVWWRAOXQDGEDWXSQJYYUYZXEKRBWTDPTSGNQJDAYQFFRTSPCENGCZFHAFELUYCYJPMMGZMOCJVIRAWFKGTUAHSPUOSEIIVEDUJMMFZLKBLBRGXIZJYVGVLRYWFKTAZUHIOAAATLLSBJGOPNDNLEDXKPHNVOQINSSDQXXHURFIHRBQUCQUOP");
    msg.plan_id.assign("ZJFGBVDQKLQPMTPGCGXCFYSKFUCOGUDSTXAXQHRQTRUAMKQONGP");
    msg.description.assign("EWJKESCRGOICNJSJUNAULQYQWXBPGDXRBTVMCOSPIBWQOPQYQKR");
    msg.reference_frame = 123U;
    msg.leader_bank_lim = 0.7704605630434284;
    msg.leader_speed_min = 0.5962882723203619;
    msg.leader_speed_max = 0.38428842893476556;
    msg.leader_alt_min = 0.7224045723216687;
    msg.leader_alt_max = 0.5899245425223342;
    msg.pos_sim_err_lim = 0.5227863198500771;
    msg.pos_sim_err_wrn = 0.5788442837879995;
    msg.pos_sim_err_timeout = 20179U;
    msg.converg_max = 0.5664436332926323;
    msg.converg_timeout = 27691U;
    msg.comms_timeout = 37183U;
    msg.turb_lim = 0.05895155723931045;
    msg.custom.assign("OCQFZFIDRIJHOFUDVKZAOXAAPIEALPKSKWMJNBMAYRYLNQWXXEYNKSFHTSZQIQEBOAPCGROJSDTUGJQBLEYKNWHCWFTZOTSZFRKDQWQSWBSTXIDGJNEMLIIJSBDAHCMCTHVBRVAAZMUYQKUUU");

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
    msg.setTimeStamp(0.6756596728673235);
    msg.setSource(22712U);
    msg.setSourceEntity(157U);
    msg.setDestination(5224U);
    msg.setDestinationEntity(82U);
    msg.timeout = 19628U;
    msg.lat = 0.12697430224469808;
    msg.lon = 0.4071562037313745;
    msg.z = 0.9263580508602661;
    msg.z_units = 52U;
    msg.speed = 0.21764431666046558;
    msg.speed_units = 72U;
    msg.custom.assign("KEKDWSGFEDXYOLYWHFYBCIJDTMTUCGKXNYXTJICTXXLSDAPKURHWHEGXUFBOGAGMIHQEHOPPC");

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
    msg.setTimeStamp(0.26859675731183963);
    msg.setSource(16941U);
    msg.setSourceEntity(105U);
    msg.setDestination(62687U);
    msg.setDestinationEntity(142U);
    msg.timeout = 62062U;
    msg.lat = 0.9711669700163198;
    msg.lon = 0.3160744168413754;
    msg.z = 0.4576159499243704;
    msg.z_units = 225U;
    msg.speed = 0.9994583720546688;
    msg.speed_units = 180U;
    msg.custom.assign("PZDLVRWGEZOEIKISOVQQJKISQTHZMHKAUZFIGUNYXOXFSYYLKSURBMFXSJTPVXBXUKQMOLHVPINNXSHTMOGROOEZMWPTKUVGUBYRNDNPTQFVWYOKHGJBDVAGAACRIIAYCSWBWDTHVFVWEHTTPLNSDIPJTXAMZBDJNSMEKAAOLAAFHGCLGGLEJDCBHUKUFEQZICCYEXGJEJPWXW");

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
    msg.setTimeStamp(0.34851894389580695);
    msg.setSource(34574U);
    msg.setSourceEntity(121U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(10U);
    msg.timeout = 48463U;
    msg.lat = 0.8574388538799776;
    msg.lon = 0.3714958601473415;
    msg.z = 0.1151783205688991;
    msg.z_units = 229U;
    msg.speed = 0.49350122819031794;
    msg.speed_units = 212U;
    msg.custom.assign("VNNXDJGNMZRXWAUSVBXBFZDDUXLLNAAOMURACPRPQJCWHZEOOSRBWYRVWXKTCDZNGEAXTHLIARUMVPFKVWVITKZLNKQTCZLTFPSYTCBSMEJXCPUHVBMKIREATXQW");

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
    msg.setTimeStamp(0.8097902729753991);
    msg.setSource(20622U);
    msg.setSourceEntity(202U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(245U);
    msg.timeout = 50715U;
    msg.lat = 0.01795703847557395;
    msg.lon = 0.05134402650070091;
    msg.z = 0.9849061980402655;
    msg.z_units = 157U;
    msg.speed = 0.7704386255453937;
    msg.speed_units = 197U;
    msg.custom.assign("FWEONLPXJOPK");

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
    msg.setTimeStamp(0.792568686608784);
    msg.setSource(59687U);
    msg.setSourceEntity(117U);
    msg.setDestination(38190U);
    msg.setDestinationEntity(135U);
    msg.timeout = 48757U;
    msg.lat = 0.9983753552331711;
    msg.lon = 0.9557344164244795;
    msg.z = 0.03494869608247331;
    msg.z_units = 208U;
    msg.speed = 0.9081733819437422;
    msg.speed_units = 200U;
    msg.custom.assign("YNAYFCXVRPSAJXHISDKVBIAVKIETQKMVQVXTTBLIPGROJXSAKUVSNATPQOPNFWFGWI");

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
    msg.setTimeStamp(0.16492913404480425);
    msg.setSource(18961U);
    msg.setSourceEntity(26U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(75U);
    msg.timeout = 19391U;
    msg.lat = 0.7442615288822374;
    msg.lon = 0.6746189223027559;
    msg.z = 0.8638202645578467;
    msg.z_units = 91U;
    msg.speed = 0.4344544811898251;
    msg.speed_units = 240U;
    msg.custom.assign("GSQRTKYBIPOMSXMDHUEWICJXRBBVZLZBGVWBIVXNNTEEXRYAOOMOKWMZGUIA");

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
    msg.setTimeStamp(0.028573436573264832);
    msg.setSource(27144U);
    msg.setSourceEntity(235U);
    msg.setDestination(14329U);
    msg.setDestinationEntity(122U);
    msg.arrival_time = 0.6514563784124229;
    msg.lat = 0.011446562329866294;
    msg.lon = 0.2135590653056587;
    msg.z = 0.0629327583602246;
    msg.z_units = 252U;
    msg.travel_z = 0.23233102391347094;
    msg.travel_z_units = 91U;
    msg.delayed = 217U;

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
    msg.setTimeStamp(0.6738611809979285);
    msg.setSource(56581U);
    msg.setSourceEntity(238U);
    msg.setDestination(50313U);
    msg.setDestinationEntity(152U);
    msg.arrival_time = 0.8952232666597644;
    msg.lat = 0.5892620238790812;
    msg.lon = 0.24384365355239446;
    msg.z = 0.7613994726955501;
    msg.z_units = 101U;
    msg.travel_z = 0.4545961766749481;
    msg.travel_z_units = 103U;
    msg.delayed = 96U;

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
    msg.setTimeStamp(0.07250714787170309);
    msg.setSource(62120U);
    msg.setSourceEntity(109U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(157U);
    msg.arrival_time = 0.8592684596253528;
    msg.lat = 0.7878156590914458;
    msg.lon = 0.22455671071701566;
    msg.z = 0.3817401213077136;
    msg.z_units = 139U;
    msg.travel_z = 0.7694629457704041;
    msg.travel_z_units = 45U;
    msg.delayed = 110U;

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
    msg.setTimeStamp(0.5149745207512268);
    msg.setSource(28466U);
    msg.setSourceEntity(83U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.36564773451118393;
    msg.lon = 0.8642114334266072;
    msg.z = 0.025592754747042035;
    msg.z_units = 39U;
    msg.speed = 0.07711897293068015;
    msg.speed_units = 192U;
    msg.bearing = 0.9133427981462304;
    msg.cross_angle = 0.721613536190576;
    msg.width = 0.23201635811761967;
    msg.length = 0.9190028307731453;
    msg.coff = 111U;
    msg.angaperture = 0.5344865344129572;
    msg.range = 29210U;
    msg.overlap = 242U;
    msg.flags = 193U;
    msg.custom.assign("ATZYEPJUPLHKPIAFEBTYFTJKQJJBRWFEBLVPCRXRIPZWGQSKIDMHTEMKQBIFIIDNMQTHOOVXNWFZEDYHUECCOXURDNLWRPJHNVWVFBLROLAVCPUMHBIPVQVYZEVIFOYJMMOSZUGKLDCSWSAQOSRXDAKYMQKEXRZFSNJMVXXHLTCCGUTUFZBNEJSQNUBDKMACOLWXCAABGRGYIUQJLJWOZGQU");

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
    msg.setTimeStamp(0.6179109753174484);
    msg.setSource(15646U);
    msg.setSourceEntity(108U);
    msg.setDestination(51540U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.29911011433766554;
    msg.lon = 0.7064474925711878;
    msg.z = 0.4585109379322567;
    msg.z_units = 134U;
    msg.speed = 0.4082775276860289;
    msg.speed_units = 188U;
    msg.bearing = 0.8040892693761866;
    msg.cross_angle = 0.11353775141487255;
    msg.width = 0.3578830789139239;
    msg.length = 0.9974363469023895;
    msg.coff = 77U;
    msg.angaperture = 0.3597939274366587;
    msg.range = 26762U;
    msg.overlap = 182U;
    msg.flags = 195U;
    msg.custom.assign("EMXCPYDBXMJWUKOEJOTWVQMCAPEDVEUGCWYBNACNRXRBJEOJJIVOKDKQUFLGNQBXUXPKYRDITOZVRSZRLFYLQBZBZWQWUXYQTQWMDVTFZJEPUHGUSHANSLIIFZTZGMKFCJITDKNALFSQVSJBHWKLARSBMSMUKNLAPCQKZRSBFOHWMHHGPXFHAGLBHGNVGPGJCUEIYDDPVWXYYVWIHYIOXTOEPLRAUROVCGNCCZMANREONTJE");

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
    msg.setTimeStamp(0.600763795891323);
    msg.setSource(5966U);
    msg.setSourceEntity(234U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.14933562162335945;
    msg.lon = 0.8945649357849036;
    msg.z = 0.28374683403719514;
    msg.z_units = 43U;
    msg.speed = 0.8979000171717316;
    msg.speed_units = 144U;
    msg.bearing = 0.9510768772671118;
    msg.cross_angle = 0.18595698449797127;
    msg.width = 0.19722585743094845;
    msg.length = 0.05404085020082294;
    msg.coff = 32U;
    msg.angaperture = 0.5257064276361245;
    msg.range = 48052U;
    msg.overlap = 111U;
    msg.flags = 216U;
    msg.custom.assign("YTPRSYMRNIUGLMJSNLPFFWNEPEBXVQVNYGUVAHGNGUGHWUANZZJTGCCBYDPVMJEIMAYPIBTILFXMJYBLJVLEPYDRKHOVEHJAKAQXONQXVZFURATWLBHJSBSJMEURQCNQDIZXFSDSPFWRIQMTXUY");

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
    msg.setTimeStamp(0.6920234477706482);
    msg.setSource(16789U);
    msg.setSourceEntity(2U);
    msg.setDestination(34261U);
    msg.setDestinationEntity(132U);
    msg.timeout = 50735U;
    msg.lat = 0.07713252408988014;
    msg.lon = 0.7127257091297702;
    msg.z = 0.19139751249537906;
    msg.z_units = 207U;
    msg.speed = 0.2135751532750214;
    msg.speed_units = 114U;
    msg.syringe0 = 241U;
    msg.syringe1 = 144U;
    msg.syringe2 = 217U;
    msg.custom.assign("WXHITWIRKVBRBZSYMMVBURGQUUWFXJGUOVJOCDJHOPRYTYCNAQNSBTXIEKLVRMVPOXLOUWTQPDSGHJTYVHNADYCDSKVAORXMALKZQGMRINYMVLFECBOIXBJMOIESYPPEQNWXEIOJFUPZPBELPJAZPEWHKJSZRLDGTXZOGTRTNNQRDTGFICCKICCUN");

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
    msg.setTimeStamp(0.05694856930194481);
    msg.setSource(20431U);
    msg.setSourceEntity(140U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(217U);
    msg.timeout = 9600U;
    msg.lat = 0.8269856928855859;
    msg.lon = 0.7739004244429025;
    msg.z = 0.5040780881677955;
    msg.z_units = 3U;
    msg.speed = 0.9370617252299976;
    msg.speed_units = 229U;
    msg.syringe0 = 99U;
    msg.syringe1 = 53U;
    msg.syringe2 = 85U;
    msg.custom.assign("QVRHMLTNIMAEYVHXFMIRWLQWIYGAVWAPZWQHLPZOJVHDTYSAOPDUDLDZCSGICDNQMOADNJUAEBESBJTFTUPEFRNCBIXHRIZIRBVEEZOHPXEUAFQVVDYPLJJRYXKFBWNXJBGYNZLOHUULGSCOKKKOWSTSPKMHCMSUUECDRLMIGCTBSJKNLHTJXZZTJFNCXCIBPNYHGBVF");

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
    msg.setTimeStamp(0.8500748376426595);
    msg.setSource(62956U);
    msg.setSourceEntity(133U);
    msg.setDestination(32619U);
    msg.setDestinationEntity(163U);
    msg.timeout = 50121U;
    msg.lat = 0.6963751872363048;
    msg.lon = 0.8505086084425152;
    msg.z = 0.5379630303217825;
    msg.z_units = 26U;
    msg.speed = 0.8229338894949584;
    msg.speed_units = 132U;
    msg.syringe0 = 38U;
    msg.syringe1 = 7U;
    msg.syringe2 = 59U;
    msg.custom.assign("KERPCEGERPDABLHDKSZSBVKZIHHYFXFHSPNITHTTUGIHCZXSGBQTUXWWVYNEENBLFPARUELFSSYULNXCJRJYJLOHMA");

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
    msg.setTimeStamp(0.7436618849999186);
    msg.setSource(15006U);
    msg.setSourceEntity(153U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.3566917911360912);
    msg.setSource(51364U);
    msg.setSourceEntity(227U);
    msg.setDestination(54206U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.30765059040230613);
    msg.setSource(30178U);
    msg.setSourceEntity(253U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.4647677325377463);
    msg.setSource(55009U);
    msg.setSourceEntity(93U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.45186435222689547;
    msg.lon = 0.2689873768521167;
    msg.z = 0.6997451349726724;
    msg.z_units = 2U;
    msg.speed = 0.11425954066885091;
    msg.speed_units = 34U;
    msg.takeoff_pitch = 0.5661695000933399;
    msg.custom.assign("WHARXVFJTQRXPJYNNGFFWASOVUENLETBTQWQOEKINIXOHOTBMHCVQWILAKIDMGIHMZJPOVCPCTDNRYDBILJHBOWRSHPJAKKYSECODPUWGXREVSDFEAHHJBTESUKMNCAFANICZAOUZENMSATJXIAZBCVSRTKYWGKCBQLSUJZWZLLI");

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
    msg.setTimeStamp(0.8818609464966233);
    msg.setSource(18366U);
    msg.setSourceEntity(15U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.6816390516447804;
    msg.lon = 0.646772192543179;
    msg.z = 0.20739654451876588;
    msg.z_units = 19U;
    msg.speed = 0.6843993758717055;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.574990596991423;
    msg.custom.assign("XGEOFRPUBCMNUPEAKXZZZVWJOAHMGANLPIGVOIPKXLUUCRFSLWSJYSXAPBHQDYENSLWGDXLUVVTXABMQTVVJYDWDSJCUBVJGOQPXKGTITMHYCCFOPRVQO");

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
    msg.setTimeStamp(0.3462411724484711);
    msg.setSource(6941U);
    msg.setSourceEntity(32U);
    msg.setDestination(27529U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.3935003573144321;
    msg.lon = 0.47627841790820236;
    msg.z = 0.1400996419301045;
    msg.z_units = 224U;
    msg.speed = 0.9644200729116876;
    msg.speed_units = 81U;
    msg.takeoff_pitch = 0.884528329413062;
    msg.custom.assign("LSQLOMRUOFMWVEPPZIURSAXKIVUPRKOGFKDKUGEBNVKATWLXJYAHNLYPRMETDUBJAUWFRETUDNAXDBQCVKNSZHSMZPTSTOJOMHAFHUMYCBLQVJWOECRYSYDMGUWWRGSIWCIXQDBFCQXLVXVZJXYIIOTHFZYKNJQNLNRANLGHPOCEFGXWOJIFIDOBMEZPYPETYNRHGZLLQDMAIBFHAZCTVECVBRKFKEWXSNGYBVSZCKHIJQSUMJDQWJAGQXGD");

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
    msg.setTimeStamp(0.7130117197394447);
    msg.setSource(37800U);
    msg.setSourceEntity(141U);
    msg.setDestination(22198U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.9138094806701325;
    msg.lon = 0.06867096600891087;
    msg.z = 0.42891700256828535;
    msg.z_units = 33U;
    msg.speed = 0.5034795325533543;
    msg.speed_units = 56U;
    msg.abort_z = 0.5784942197881827;
    msg.bearing = 0.8536413779343375;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.5918534288582256;
    msg.custom.assign("NXQFOUXAVXIIADGCCWTSPHHRCBADXQBACXQKYNHDWASJUMJARZMTESIGHF");

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
    msg.setTimeStamp(0.48290166693748104);
    msg.setSource(61167U);
    msg.setSourceEntity(108U);
    msg.setDestination(47832U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.13286968666209542;
    msg.lon = 0.6351715900879072;
    msg.z = 0.19791669624580743;
    msg.z_units = 247U;
    msg.speed = 0.008660590873719065;
    msg.speed_units = 130U;
    msg.abort_z = 0.9715505274285214;
    msg.bearing = 0.7657980634685352;
    msg.glide_slope = 220U;
    msg.glide_slope_alt = 0.5761381644509826;
    msg.custom.assign("SOCABQXRBTACXXNXBQWYCKOMCUCASHSYUMKAQRIMNWIQNXNCZKWBLIGIMNVEPNAI");

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
    msg.setTimeStamp(0.07843325576189164);
    msg.setSource(52844U);
    msg.setSourceEntity(101U);
    msg.setDestination(60870U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.7235205222872035;
    msg.lon = 0.5032900740384393;
    msg.z = 0.439659126408249;
    msg.z_units = 151U;
    msg.speed = 0.1483869271518926;
    msg.speed_units = 176U;
    msg.abort_z = 0.12810050371665327;
    msg.bearing = 0.4591656402145424;
    msg.glide_slope = 254U;
    msg.glide_slope_alt = 0.46486125802070266;
    msg.custom.assign("DATHZGTVYQODBSFCJDBNOYCRKRJQWBTWDHPEQYNQVJXZOEGXTPIXYMBOKNVVDVJXFXULFVJLHYSSCPKBMNSAKTNJLTCLHQXCYSZWOAGUZMSRPROFIQCPCTHEBDITWGYMULZEURKMBEDLSAIIHJJEKSQ");

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
    msg.setTimeStamp(0.731745191925966);
    msg.setSource(8394U);
    msg.setSourceEntity(193U);
    msg.setDestination(22635U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.5492254446776292;
    msg.lon = 0.8463290705972369;
    msg.speed = 0.10235316298305452;
    msg.speed_units = 193U;
    msg.limits = 0U;
    msg.max_depth = 0.9854861193573373;
    msg.min_alt = 0.09840543042927086;
    msg.time_limit = 0.8174155360519688;
    msg.controller.assign("IHLDKFXWRZGKJJQ");
    msg.custom.assign("EIZOIGATXYICVQCUSQLSWOGROWMGWOBLOGUZEQLSTTPHSNXDLYQPSNUXUBNVCJTMZDVLHFRWAMLCXNORCMXKLBZMZALYXGFNBJFKQHLWUTEJKXAHWWAEZJYOPFHEKNFIQWUJZKHPPDBVHWYIXDRAKBLGACDPMBDUZTDNXYTAVIKRVFOQFPBCPSE");

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
    msg.setTimeStamp(0.4581167467561066);
    msg.setSource(18604U);
    msg.setSourceEntity(4U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.43270999199753457;
    msg.lon = 0.7900514006589895;
    msg.speed = 0.8301689828619527;
    msg.speed_units = 22U;
    msg.limits = 158U;
    msg.max_depth = 0.2326942189426311;
    msg.min_alt = 0.38178189936301377;
    msg.time_limit = 0.17117732506747185;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.23646784303152835;
    tmp_msg_0.lon = 0.5637087818859039;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YNVHSDUODKSUVSOJEHVDCSGUWVOPWEYLZZMHYULNRXHTBTQHROFIAJGQPOXDQAAVYRTRREZPLHLOUKHMBBGAHQKZPMUFOFXCQRTJWFK");
    msg.custom.assign("EGHVVIMMPQMMGHTZPUPLKRQTTSXJBCZAVFCEGOGIKWUVOEBHXJZDF");

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
    msg.setTimeStamp(0.8431105979815187);
    msg.setSource(49021U);
    msg.setSourceEntity(44U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.6626158462038765;
    msg.lon = 0.34765077863894045;
    msg.speed = 0.8439385825145853;
    msg.speed_units = 178U;
    msg.limits = 211U;
    msg.max_depth = 0.22248906049289696;
    msg.min_alt = 0.14591901690997378;
    msg.time_limit = 0.5858874066484845;
    msg.controller.assign("DTGOSWWSLREESVSWINPOIJKAMLJIQGKNFBFGQHRAGUZTAYXDWGDWEFWBDBFTCXMFUNTQGYCJRYSVOUBPCDYXJHJFRYOY");
    msg.custom.assign("EBVRMXHDCNEVPUFCWHBNRSTWZOQGDYCBHPXLRPIATSZCZRZRGVHDKSTMYQPWQNJWKTZDINYHBHFRQQOIQVUOSYUUEUVPNXSMIMLFBLVHCSYKEEJQKVJUPMSMWKJXFEJGXNTWYATDFJUHCXBMOCXILSRXRVORNAGKPYFOUWGTGZCAAPLPZJYYBZAKSHXADCOLKJJTIAWGOLZEOLAO");

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
    msg.setTimeStamp(0.9293688255275581);
    msg.setSource(57012U);
    msg.setSourceEntity(90U);
    msg.setDestination(393U);
    msg.setDestinationEntity(181U);
    msg.target.assign("MBFXKUYPMAIYYTLPFKXQESLRKJBQDFRJIVADHTTBVYBEQZNPXOBNJWMGSQUAEUIZMFOEGSJWVJXLMDWCHFZQIXORCIEMASOZOFYNREXJRLAZWSRUOJPJPBNZOQSECYCPVWNHITLLMDEKVHTEAQXAYGNRCGNGASHUEOFCRGBIUNMGVZCQOLHXYDLAFNURIIKDKWSBIWVZKHUHPSZCHTUJBUTKSGPV");
    msg.max_speed = 0.36876331922500916;
    msg.speed_units = 171U;
    msg.lat = 0.7655865348132449;
    msg.lon = 0.27088553427744533;
    msg.z = 0.3751482129996826;
    msg.z_units = 21U;
    msg.custom.assign("UPWYXXQVVTLOLHJTFRFIYTDEZWXPMWIFHWMRUNCPFSPFCFWNAONMSKQRGVAHGTG");

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
    msg.setTimeStamp(0.16252429517400657);
    msg.setSource(28513U);
    msg.setSourceEntity(220U);
    msg.setDestination(42744U);
    msg.setDestinationEntity(72U);
    msg.target.assign("PCMIFIVXWFPVICMPYNKUGPNMROLYQKUQCENQAWJZQKHAGVJPLDLSTYOROTRUPLCJFGKHDLXRBNVUWJKSZEEPIDFXSMYZBKIJWMKONJPXDZIFWZUGGXYIDQOUESQNXVSPJMGTQLWMCZAOREWGFVHGQWKSYCTTHCOEZYSNQFVKTXNZFEAVGIRXHTAHDGVABMIWKEDDBRISBS");
    msg.max_speed = 0.8286717399145488;
    msg.speed_units = 111U;
    msg.lat = 0.9135410837449945;
    msg.lon = 0.6238305470872024;
    msg.z = 0.003764264313408594;
    msg.z_units = 69U;
    msg.custom.assign("ZHSMXLTFGIWQOICQVBHGGQIYQLJPUPEX");

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
    msg.setTimeStamp(0.5503285643876694);
    msg.setSource(54019U);
    msg.setSourceEntity(97U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(143U);
    msg.target.assign("APPWDISCTXVYZUGOZYHQDTMXCFRPFPCATNJZDYNXDEMEZEJEWTVDBIKKHBNPEEJHWKWIVEFVUBSKNTQHNXGMFGOCUTISBTTSRMBMNFRHMMSYDRMIZGAWUROSQTRKXBEVWRWAPIYORCUFZHVLHNZHYMQDYCFONASUZSVDNQVNKPXGPIYFLJAKGFUZPVSRQWACKOXPQGAAGOLC");
    msg.max_speed = 0.5860360303959234;
    msg.speed_units = 203U;
    msg.lat = 0.09104098808851757;
    msg.lon = 0.5833446557741313;
    msg.z = 0.9594546228444014;
    msg.z_units = 112U;
    msg.custom.assign("VMZRMUXSBCVIZCENBDGHGGKJQUNFOTNBSFNRMCHKJNAQ");

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
    IMC::Alignment msg;
    msg.setTimeStamp(0.5781787295712191);
    msg.setSource(27354U);
    msg.setSourceEntity(229U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(55U);
    msg.timeout = 36673U;
    msg.lat = 0.11741042788030132;
    msg.lon = 0.3165062985627509;
    msg.speed = 0.6217003576441382;
    msg.speed_units = 18U;
    msg.custom.assign("QKBXGVGXAKBMZWXTKCMHTMDQWJCWERWBHGUGBVRAKAPVDLTBYFRSBZNJLEPVACDMNKEGFEBSDAYAHLONHOUOMESIIAOLKPTMCMYIURXZVIIDBUDCGCQFFUBGNZZYQCTSVYDKTTIAWURPZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.3558800876935022);
    msg.setSource(25910U);
    msg.setSourceEntity(136U);
    msg.setDestination(54965U);
    msg.setDestinationEntity(109U);
    msg.timeout = 9754U;
    msg.lat = 0.3617566262324371;
    msg.lon = 0.05019861360453737;
    msg.speed = 0.09827766267750992;
    msg.speed_units = 64U;
    msg.custom.assign("OBWPJXQETOEJOALECKHRTGUUVPBHSKVIIAYDMRKJYCQLGSUSSIPVINYAOARMZTEHNMZKLGXCRPASOAIQFFWENDGZOWUENGWGNIEHYVXMQVLZZXTELPXCGKJDPQCJNDIJXLMTQBSSIOMVQOQBTDTQKNECDMBEWHZYVYLABBXCHSSRLMVLBWUYRUURFKUFYBPQWIFPWNZWFJMAPGYFVXKCHHJXUCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.5289773465746496);
    msg.setSource(60262U);
    msg.setSourceEntity(149U);
    msg.setDestination(36499U);
    msg.setDestinationEntity(132U);
    msg.timeout = 54916U;
    msg.lat = 0.18363745098873607;
    msg.lon = 0.5559918942802504;
    msg.speed = 0.3850013142500591;
    msg.speed_units = 192U;
    msg.custom.assign("AQMGYHSKRZAULSAUDOGPFRSXTRECAKXUKBWNOQHOPPPUIRBVCEVABEHTLTJFIKGJZLOGQONNZDEPVBYGHZIMXUCXCBATOWPTWYJJZSVYDHYUUGOWGJUVFNQOGDNBRVMSJYUHPCKJMYSMQFTWXXZFNZEWHCILSFQGFMPOTTDDFLPIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.4100507774784572);
    msg.setSource(62225U);
    msg.setSourceEntity(39U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.64080273641055;
    msg.lon = 0.9144215776521861;
    msg.z = 0.4776617942730508;
    msg.z_units = 146U;
    msg.radius = 0.5334986172973624;
    msg.duration = 1028U;
    msg.speed = 0.7038832090322998;
    msg.speed_units = 96U;
    msg.popup_period = 32730U;
    msg.popup_duration = 53055U;
    msg.flags = 195U;
    msg.custom.assign("KEFSNVLUZDZUQXTVGOWKVHLMJOPIEKVBCWPAQYHTDVDYJFDXGTIJTLHRAMQPDFCTIGPXAAENKGCCBUXMOYPTPZZOBMAVKCMXSQAEUJQNAHDWMNJNYCYYIVXWOTCLISYBQZLZUGNGURPDEQDLYCPVJSMCJWROTBOGWQQBKGGQFALHHMSFTAIMJRRRZHXJZONUBKBODFFZSRDILLHYEYVWBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.393577853095753);
    msg.setSource(50890U);
    msg.setSourceEntity(222U);
    msg.setDestination(3486U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.38952746550690187;
    msg.lon = 0.5235461713842375;
    msg.z = 0.03673828633798215;
    msg.z_units = 38U;
    msg.radius = 0.33319023388399027;
    msg.duration = 59935U;
    msg.speed = 0.37030800299127564;
    msg.speed_units = 20U;
    msg.popup_period = 11058U;
    msg.popup_duration = 47182U;
    msg.flags = 235U;
    msg.custom.assign("ZKIAHKIMUSREMXSBRFYTEHGLPQCIIMWFBTZAVBSZAWCQAOAMEDWBWEUDLWKOZJPHKBFYEJDZEGXSAVXQEZFQDLMYNBYIZYPNGHDRMIQJTCQIJKRTMHFDPKRZNNJCHBDDGEOVOCHWVNCCJLDYFOTLRPWTGPIXFPSJKJTWRSXVUYMAVLEJPFNOKIWSXTAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.9254500327745947);
    msg.setSource(54407U);
    msg.setSourceEntity(218U);
    msg.setDestination(57507U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.5864032506137364;
    msg.lon = 0.06502777156199446;
    msg.z = 0.5788076135554681;
    msg.z_units = 60U;
    msg.radius = 0.9729241852360833;
    msg.duration = 64148U;
    msg.speed = 0.7107644205154807;
    msg.speed_units = 245U;
    msg.popup_period = 36354U;
    msg.popup_duration = 14799U;
    msg.flags = 66U;
    msg.custom.assign("WLKVYMYCUWDAOVAIPXGRQNKNLRCMEKABMANQZNLXZXBMWZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.20677352405913407);
    msg.setSource(39829U);
    msg.setSourceEntity(214U);
    msg.setDestination(41580U);
    msg.setDestinationEntity(240U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.018455341267404335);
    msg.setSource(54104U);
    msg.setSourceEntity(23U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(186U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5304175306449879);
    msg.setSource(31760U);
    msg.setSourceEntity(68U);
    msg.setDestination(59666U);
    msg.setDestinationEntity(182U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.037205060452073724);
    msg.setSource(24914U);
    msg.setSourceEntity(128U);
    msg.setDestination(10111U);
    msg.setDestinationEntity(154U);
    msg.timeout = 11382U;
    msg.lat = 0.15810127514485772;
    msg.lon = 0.967753519557288;
    msg.z = 0.45892820539671475;
    msg.z_units = 210U;
    msg.speed = 0.08483749023581721;
    msg.speed_units = 136U;
    msg.bearing = 0.8531640299029201;
    msg.width = 0.13120738789090347;
    msg.direction = 105U;
    msg.custom.assign("YIGGVFHDAYJOPTUZVZFEECFTIDBCXBRBAINYEVKKXBGVIRUNVCEAKXFWMVNJZQOQJJQODFWPPYVJPNTLASWJPSMYDOTSQEOOYKRGMHJKWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.6719725488463411);
    msg.setSource(57172U);
    msg.setSourceEntity(211U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(1U);
    msg.timeout = 51146U;
    msg.lat = 0.28227161872421025;
    msg.lon = 0.9383016645964076;
    msg.z = 0.8474279135252442;
    msg.z_units = 94U;
    msg.speed = 0.02999761957494307;
    msg.speed_units = 114U;
    msg.bearing = 0.3633987604684418;
    msg.width = 0.3487534502530414;
    msg.direction = 32U;
    msg.custom.assign("JWHINQCDFVEYVNCDAREXIINGFTXDMLCBPBOJMCXKFIWZTAYGFCOBRWYMYLPEYMAJUQDAZSXPHEOPOPSAEJUWCYIQIAERMKUTXZPBAWFTPGVQWCSSXTRSLFJQNJRKMSOQUXULLOTFZJMBAMDKUCVQQDGZMFTZVECYNUHZQISHCEFULSHBIERJBZGLVGGRNGIDNVBOORIGBKQDRYHJUATLXFBPKKHTDURH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.8854760732489081);
    msg.setSource(60995U);
    msg.setSourceEntity(185U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(1U);
    msg.timeout = 11664U;
    msg.lat = 0.17414763429220048;
    msg.lon = 0.6400921468771752;
    msg.z = 0.9602409321335004;
    msg.z_units = 35U;
    msg.speed = 0.9029926529461876;
    msg.speed_units = 11U;
    msg.bearing = 0.7369917871100744;
    msg.width = 0.026806915683551535;
    msg.direction = 31U;
    msg.custom.assign("GRXNBHBOQOFUNLUHPOYHGNDXLZXUYWSEMIBGWRNEEIYQHIDGTBFTXIPBNBPVRYLJLVYSRRVGFUBJWQELHEBDROQZPMLRHKWUKSAXWCLNLZXYUPHJCOBTUXWJYNYATHHACCFPJBLKTETQFISMSESPOVCNKWXWKCSAYOJJXMZDEIIUHPGCJDKMZLKDAKMROSPTCTMMAQZMOZQANERAQIPFTMCXVJYQWNGJVTDFFAZZFIVVSZAUWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6097395623436567);
    msg.setSource(32771U);
    msg.setSourceEntity(19U);
    msg.setDestination(19906U);
    msg.setDestinationEntity(34U);
    msg.op_mode = 250U;
    msg.error_count = 22U;
    msg.error_ents.assign("HIOCDFIGKOTEFSPQBETJETEPOBMWYECYKJHJQDOAGMJMWDRUKQI");
    msg.maneuver_type = 31803U;
    msg.maneuver_stime = 0.9543557863453042;
    msg.maneuver_eta = 61251U;
    msg.control_loops = 2300813430U;
    msg.flags = 53U;
    msg.last_error.assign("WQSUSCPRMATTQNTFQYSAVIYEUULHDUNLHEXVFSQJVRZRSHGJMWBEHNUSZOEDWAOFGTSQVGHJPYJWMVBJGMRIKJNYUCDOZFFOPSQHKCZPMMXZCXHIKPXLXOAVBPOVGJAZLXWJPAUIOCFGRMADKKCFFYCIPGBTVDQJTCAQIBL");
    msg.last_error_time = 0.03776840896810996;

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
    msg.setTimeStamp(0.9248034823908561);
    msg.setSource(12404U);
    msg.setSourceEntity(232U);
    msg.setDestination(50689U);
    msg.setDestinationEntity(165U);
    msg.op_mode = 203U;
    msg.error_count = 88U;
    msg.error_ents.assign("XOTUXKCLFYQAQZLZFBGKAQOVEWDADDZMXDBSEICGVLOQNMZJIVXYDCFVICSKDGITISZTGQUTSXUPVUCRMHUOSNFFWXEJURSRCOXEAJKYQMPFLAZCYNLPSHPYYRDNNLZLHEKGMWBVQIAOMJBKVMEJRNHYPTEWFYNTUGQETDNZWDZJXCRPEASKKPHHRGFIWHLEOWXNWUIWH");
    msg.maneuver_type = 53129U;
    msg.maneuver_stime = 0.6661148134832587;
    msg.maneuver_eta = 2895U;
    msg.control_loops = 1037072488U;
    msg.flags = 191U;
    msg.last_error.assign("TSYMBZDOPZYRZIGHCLGARSENPJWZKSJQSNPGYVB");
    msg.last_error_time = 0.028500420826394812;

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
    msg.setTimeStamp(0.31683294413888474);
    msg.setSource(38726U);
    msg.setSourceEntity(63U);
    msg.setDestination(42193U);
    msg.setDestinationEntity(125U);
    msg.op_mode = 74U;
    msg.error_count = 211U;
    msg.error_ents.assign("TMEQYBQKEXJBSYPIYHDEMXIMFVRZAZGWOSAJTUDMNTJRLOKKVBWKKQTGXRVSNROCJACFNDCIYSFRGROQJHFVUAUWSHNDMTQEWBPAIIXNXWOBGBJESOQIOHUGPNIMKHGFUJHNLVWSEZVXKSQHJYZPZTSZELHNASTLGCJDROPGYOECQZXYC");
    msg.maneuver_type = 3621U;
    msg.maneuver_stime = 0.9986550075850121;
    msg.maneuver_eta = 32851U;
    msg.control_loops = 82553147U;
    msg.flags = 110U;
    msg.last_error.assign("MDJDPTAZKQPQCZSFPJMZGAFDWIWQVFDZAUKBXCRYDGSTMOEDIZIHAILNBKTPIFXNWMLGLUUBKUTJERYNXB");
    msg.last_error_time = 0.18740290244793312;

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
    msg.setTimeStamp(0.059425277371336405);
    msg.setSource(2044U);
    msg.setSourceEntity(1U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(155U);
    msg.type = 106U;
    msg.request_id = 6188U;
    msg.command = 165U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("YZLRGBFEOXOKWSJPYILDDXQTUMWKRILYCFWJMBMFGZKMKVVXHHHENZNELGKJBEZHZKDAHXRGVXBTLQNCYVDOQYRUCVCTASMJUACWFQEFBSIBDVSWGJHVPOBYVZFPKITJNPPWTGAYAPFDEEXWJIGCPIBRTQACQSALFKNUCOTDRLKJZRGWOWCUIRSVKENFRPOITZPC");
    tmp_msg_0.max_speed = 0.6836889463854977;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.lat = 0.5783454685349471;
    tmp_msg_0.lon = 0.09155778348566923;
    tmp_msg_0.z = 0.7721889873290737;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.custom.assign("IZLSKXYOLYRFJDWQYLUUAVTWEOLHITNTTTDMOARKDUSJNZCVJMCQYOUUBUWEGRHGTJHYSKHGXSJJIWFIANKBNPKHOOEVUSPROPQBKYWZMVRTLFFTMAEFYDLOJYQHQBWZZGDPGTRNLCVNEIRWXXSCCEMFPSPUSC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32452U;
    msg.info.assign("OVBHARSNHTNKXBVRZPLWUZCXEIKIGAOKSANPOKXYGTQRDCBVYKUDRIUJZEOLCFPPHAOMSBMGXWEUXIBGHCWPAJDTACL");

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
    msg.setTimeStamp(0.5440229093904224);
    msg.setSource(19239U);
    msg.setSourceEntity(40U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(18U);
    msg.type = 237U;
    msg.request_id = 44792U;
    msg.command = 80U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 56494U;
    tmp_msg_0.lat = 0.5618934965157613;
    tmp_msg_0.lon = 0.3766634514735471;
    tmp_msg_0.speed = 0.9249522511455085;
    tmp_msg_0.speed_units = 85U;
    tmp_msg_0.custom.assign("IYPMGXJQZGABYBQKXZBUEGPDPOMVUFXRRSWYVLAPSCXAYRGBFCLXYASKLQRNKPQMHFVCWUAMDZZBNDNLTPGBJWKBIWQAYJNFPMSLDURLYIGMZSQJCUWSKOEUAWXOXMUBOATLTOLROEVWZOVENSQHTTPHAPZQNVVXTRYFIOLCBCFEPU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32556U;
    msg.info.assign("OXEWQWKMQSGTBLXZ");

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
    msg.setTimeStamp(0.5998464569175732);
    msg.setSource(45471U);
    msg.setSourceEntity(51U);
    msg.setDestination(13625U);
    msg.setDestinationEntity(101U);
    msg.type = 207U;
    msg.request_id = 62981U;
    msg.command = 9U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 28278U;
    tmp_msg_0.lat = 0.30436173414722845;
    tmp_msg_0.lon = 0.25911892111107626;
    tmp_msg_0.z = 0.05145746671508078;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.speed = 0.6168316032346282;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.bearing = 0.4119500330211888;
    tmp_msg_0.cross_angle = 0.5419877220126439;
    tmp_msg_0.width = 0.2865447199251232;
    tmp_msg_0.length = 0.11348457443941995;
    tmp_msg_0.hstep = 0.4838640422638002;
    tmp_msg_0.coff = 88U;
    tmp_msg_0.alternation = 10U;
    tmp_msg_0.flags = 199U;
    tmp_msg_0.custom.assign("LSZEOODZCJFTGDVQBALLCFXTLHHOFWKVGALPRHZOUKNXZYNDRWIXZMCCJWEJEOFZNVICLWVLQIKWYIBTDRTBDPZAYKGNNRIEWQQAIWVSNSROYXAIJMBCUYTLGEKHOKJGJTDSZUYPTRSQTMCUFDFGJUSYANAW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27894U;
    msg.info.assign("MKCBNIJZFCYDBYTUFWQUQGHFBJFSZCASRNBIWEAQOBIXEZOIGUMLZYXMRCPEIOHRJJDNVDSFDKXUDWXLYEDNSCMFVJOLCLDVSOXBIDATILVXSWYQQALSHKW");

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
    msg.setTimeStamp(0.24904895140948247);
    msg.setSource(2028U);
    msg.setSourceEntity(43U);
    msg.setDestination(20079U);
    msg.setDestinationEntity(48U);
    msg.command = 102U;
    msg.entities.assign("NIYEGYOMUTRRZECQQP");

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
    msg.setTimeStamp(0.1843581037005041);
    msg.setSource(20806U);
    msg.setSourceEntity(179U);
    msg.setDestination(17647U);
    msg.setDestinationEntity(83U);
    msg.command = 18U;
    msg.entities.assign("VVVXFHFWQPAGPTJOKURESQOGNTTEOZICTHBWHDJXPFVYWCZDYSODNSJIQVDV");

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
    msg.setTimeStamp(0.460466814663662);
    msg.setSource(10196U);
    msg.setSourceEntity(2U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(158U);
    msg.command = 95U;
    msg.entities.assign("HVZMODMWSOSGYHGIXUIIHJSNZVIWIULYNWUQRRDYDCRWDPIDIBRSVJUXTVYSYTAFLVGSQATLXRQLHOOQDFWCIETNDNPP");

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
    msg.setTimeStamp(0.940996757439104);
    msg.setSource(169U);
    msg.setSourceEntity(177U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(250U);
    msg.mcount = 191U;
    msg.mnames.assign("FSXNLYAOCEQNWOWFXGMCSMCVJRFRKXNCUZILXKTKGIIEZYXLQKVZPONGUCEABWHQAAHNSOVGZATUUBPPHPLFRIJYXTNVG");
    msg.ecount = 246U;
    msg.enames.assign("SEYBFQEKZWKCDIQFULACXYYFITKVDEBZBCHZUXCWVAUJLVVEGOBJZLUNZDZASNTUOORXROOSFWQHLJPINCRVNYCADAUTAAZKOCQROBZDGPIIPMRJBWWMQDXPEJZDPISF");
    msg.ccount = 116U;
    msg.cnames.assign("IKPUPUATWFJXUBJSGMUDTGMMIRJIDBISCVCEFMZSKXKOHXUBXCAUQGOYLZONUZZHHECLDINQNREVZAROYOFNGJFBUDMVDTLRSMBWAWHQFZHXKJTDKMACOVSENRWISDKGBSCNCYXHKEPFHARXGELEZXHVVKKGCITQLPXDDIALTTQF");
    msg.last_error.assign("WNPGULWJPQACXETCAMWIAOUSHCHXSLSVRWABZIGJQBOFETZRLYEGNDPFEDHCWJNBVRMZLFDOTVVIYRRTNROVSMNLCNDNEYDMEPEKGOMKUJFHXJUPBWWIXJLAIWAUXONDCQYHNHIKJOEHCQJGYDMGZKJFXLYBRPAKRTZIDQRVQMYXVEKHKCCOLCQXSSIGLUXZAZDZOFWPTKYZWBNVGTYPP");
    msg.last_error_time = 0.41745110432659227;

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
    msg.setTimeStamp(0.9035621047561909);
    msg.setSource(7538U);
    msg.setSourceEntity(86U);
    msg.setDestination(38511U);
    msg.setDestinationEntity(34U);
    msg.mcount = 148U;
    msg.mnames.assign("JRUXYBXRGJHCAUBBDSIAHYAYSWEIEUFYGSGBLVWUTMFRTNVRJKKQFVOTSJOU");
    msg.ecount = 71U;
    msg.enames.assign("RMOWULAXKFPGABWSLRUWKYPYXWLEGOSXHOICLZEUMCNMBJDMRNGPGVUTNQPRNBPKMDUJUPYVRHBIATCJZQNAZOSJDKEVLQYMJEWXMMTVEVCSHGDQZFKJAQSFCMPAHOZFYORNAMTNLLSETBTXJWYEZINUEU");
    msg.ccount = 38U;
    msg.cnames.assign("QAGDJFIEVCOWDEOCHPVZWUKTCUOOSQKLUHXIPEDZAZREUTYWATFNTFLATYIEAJRPFPHMHSXTMCHLOWPVVSHYDYSFILRIUXPAINBMBPI");
    msg.last_error.assign("QQSHORYDDJDNCZRPFOOZVBHEPMFRKPVPYZQVAFHKFQZWHNSBQCNNNSITVAXIAUPQYVRGUNMBXVRBVHDMJYHZEAWPGOKGLFXRUIYCIUREUHJTWUMLQSWTINCTQCKJVNSOXCFEFIDAIJGLPVBCTEODKSD");
    msg.last_error_time = 0.4472447357656668;

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
    msg.setTimeStamp(0.3115082507090571);
    msg.setSource(19367U);
    msg.setSourceEntity(206U);
    msg.setDestination(7986U);
    msg.setDestinationEntity(186U);
    msg.mcount = 41U;
    msg.mnames.assign("VWEPAVBIJLOIMPNWCFATFIQDZLQZKDYCQUHLDESGJAMBZPBHLGSROMBCGLKSVVTTGKPVKNEUFZWFKDZYIGUVMRHHXKJHYTXOOUWGJERCWQYOPIMMXEWJUMRJATZOXTQNIBUSEHOLUFSRQCSNKBAHFWNMTRWSKDOEOYRZWDDHPR");
    msg.ecount = 25U;
    msg.enames.assign("ZIKLGHXJIKGXSJQQEFVAJVATOIYSCNZFIQDBPWOXURMMSQNGMJBIMXPJZKGWOLTDYVPMYNJBNPKOFFTDWEGDYBFOZTGZDEVLHMWDUGIHRRCNFGRSOKPFYEGPVHAUDBSAQDTIZCLWQJXXVHDCCIWNUVKEHTZXEOLFVUAUBTQNSKEBJLWRMAHRKZT");
    msg.ccount = 8U;
    msg.cnames.assign("VUSWUZDWZZHSTBWJXOHKPVRYRLFWNVKPSMXGIXQZFAUHPHJTKTJDACUHVJPDFZMLCMEBBULRPQWUGDBSSRALYQMFAYDIBMUCMDHEVNEQK");
    msg.last_error.assign("BNYCEHOYVOFNQPKJOQEUUCCDIUYTRHQWOAJBLWMJQCAAUMBSZFIWWBBTHSDNGXJDYHKKCZEGFIKYOSMWIBUBWNENSKMPVPYPDOVL");
    msg.last_error_time = 0.5554632433135643;

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
    msg.setTimeStamp(0.02018309298116483);
    msg.setSource(4892U);
    msg.setSourceEntity(89U);
    msg.setDestination(24426U);
    msg.setDestinationEntity(47U);
    msg.mask = 221U;
    msg.max_depth = 0.14138760452200205;
    msg.min_altitude = 0.9932614574512854;
    msg.max_altitude = 0.49945053582537935;
    msg.min_speed = 0.45110802311038944;
    msg.max_speed = 0.9599825969775648;
    msg.max_vrate = 0.9384898011792335;
    msg.lat = 0.6370159760740881;
    msg.lon = 0.10674166698382093;
    msg.orientation = 0.7704313714823023;
    msg.width = 0.587436609993712;
    msg.length = 0.2111325693333611;

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
    msg.setTimeStamp(0.646431003093035);
    msg.setSource(29335U);
    msg.setSourceEntity(166U);
    msg.setDestination(12173U);
    msg.setDestinationEntity(48U);
    msg.mask = 78U;
    msg.max_depth = 0.1987209821054603;
    msg.min_altitude = 0.1018188500510313;
    msg.max_altitude = 0.7913245984105739;
    msg.min_speed = 0.6636692427969029;
    msg.max_speed = 0.6951766904879013;
    msg.max_vrate = 0.3365172153306062;
    msg.lat = 0.5862689055590499;
    msg.lon = 0.6535541418884483;
    msg.orientation = 0.7555848060415932;
    msg.width = 0.04120780047541017;
    msg.length = 0.9814431309719038;

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
    msg.setTimeStamp(0.28517736095847257);
    msg.setSource(45162U);
    msg.setSourceEntity(59U);
    msg.setDestination(21106U);
    msg.setDestinationEntity(138U);
    msg.mask = 245U;
    msg.max_depth = 0.4379627037534095;
    msg.min_altitude = 0.015585723458092948;
    msg.max_altitude = 0.30949069679744656;
    msg.min_speed = 0.6715324246160136;
    msg.max_speed = 0.7023619082756929;
    msg.max_vrate = 0.08301326411253263;
    msg.lat = 0.6755884981160036;
    msg.lon = 0.5425687259413746;
    msg.orientation = 0.557679408398451;
    msg.width = 0.3465654663095702;
    msg.length = 0.7376840273957681;

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
    msg.setTimeStamp(0.5918816856428103);
    msg.setSource(60104U);
    msg.setSourceEntity(41U);
    msg.setDestination(19756U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.5777574086432828);
    msg.setSource(48331U);
    msg.setSourceEntity(168U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.9473130707437809);
    msg.setSource(57539U);
    msg.setSourceEntity(245U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.003420639867435016);
    msg.setSource(45711U);
    msg.setSourceEntity(39U);
    msg.setDestination(13518U);
    msg.setDestinationEntity(209U);
    msg.duration = 47976U;

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
    msg.setTimeStamp(0.19917755216574007);
    msg.setSource(61623U);
    msg.setSourceEntity(92U);
    msg.setDestination(41660U);
    msg.setDestinationEntity(152U);
    msg.duration = 45623U;

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
    msg.setTimeStamp(0.16315744733350745);
    msg.setSource(33726U);
    msg.setSourceEntity(53U);
    msg.setDestination(1685U);
    msg.setDestinationEntity(85U);
    msg.duration = 41034U;

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
    msg.setTimeStamp(0.14081024074592008);
    msg.setSource(56907U);
    msg.setSourceEntity(92U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(249U);
    msg.enable = 219U;
    msg.mask = 1562089738U;
    msg.scope_ref = 1875085589U;

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
    msg.setTimeStamp(0.534413496438038);
    msg.setSource(46734U);
    msg.setSourceEntity(46U);
    msg.setDestination(26396U);
    msg.setDestinationEntity(51U);
    msg.enable = 105U;
    msg.mask = 1015545164U;
    msg.scope_ref = 985477794U;

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
    msg.setTimeStamp(0.033419532954723);
    msg.setSource(31386U);
    msg.setSourceEntity(223U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(52U);
    msg.enable = 188U;
    msg.mask = 1308499498U;
    msg.scope_ref = 2577694371U;

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
    msg.setTimeStamp(0.07435020592782571);
    msg.setSource(25046U);
    msg.setSourceEntity(61U);
    msg.setDestination(14998U);
    msg.setDestinationEntity(250U);
    msg.medium = 187U;

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
    msg.setTimeStamp(0.9722762696008539);
    msg.setSource(65161U);
    msg.setSourceEntity(41U);
    msg.setDestination(13073U);
    msg.setDestinationEntity(1U);
    msg.medium = 79U;

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
    msg.setTimeStamp(0.556087244578846);
    msg.setSource(53889U);
    msg.setSourceEntity(227U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(74U);
    msg.medium = 107U;

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
    msg.setTimeStamp(0.13017884124350088);
    msg.setSource(54172U);
    msg.setSourceEntity(23U);
    msg.setDestination(38468U);
    msg.setDestinationEntity(113U);
    msg.value = 0.24923202138089562;
    msg.type = 208U;

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
    msg.setTimeStamp(0.25305310047895535);
    msg.setSource(28839U);
    msg.setSourceEntity(217U);
    msg.setDestination(6578U);
    msg.setDestinationEntity(130U);
    msg.value = 0.6662486497668854;
    msg.type = 142U;

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
    msg.setTimeStamp(0.2716210892679346);
    msg.setSource(64224U);
    msg.setSourceEntity(27U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(66U);
    msg.value = 0.48966562976327876;
    msg.type = 103U;

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
    msg.setTimeStamp(0.15960411090890714);
    msg.setSource(50118U);
    msg.setSourceEntity(173U);
    msg.setDestination(24024U);
    msg.setDestinationEntity(129U);
    msg.possimerr = 0.702724659276555;
    msg.converg = 0.8053447951760343;
    msg.turbulence = 0.20541030680599415;
    msg.possimmon = 235U;
    msg.commmon = 70U;
    msg.convergmon = 58U;

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
    msg.setTimeStamp(0.16798521180156945);
    msg.setSource(53956U);
    msg.setSourceEntity(231U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(77U);
    msg.possimerr = 0.0624315454482377;
    msg.converg = 0.6131522494988481;
    msg.turbulence = 0.7326859911839847;
    msg.possimmon = 164U;
    msg.commmon = 122U;
    msg.convergmon = 26U;

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
    msg.setTimeStamp(0.4586870732581394);
    msg.setSource(28088U);
    msg.setSourceEntity(68U);
    msg.setDestination(45054U);
    msg.setDestinationEntity(133U);
    msg.possimerr = 0.7649164379531432;
    msg.converg = 0.43357306483911295;
    msg.turbulence = 0.8185637514333559;
    msg.possimmon = 168U;
    msg.commmon = 134U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.8900329948884543);
    msg.setSource(8489U);
    msg.setSourceEntity(251U);
    msg.setDestination(63385U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 236U;
    msg.mode.assign("NTMYFKWBRSVILZECMEEBVZTBSNAFGITWWCACLJEVPMWUKFAEKOQJBYTKJJBZLHIHWQCYQQCVBHEGITUFJTYQXJHRNVJRAOCXVCLGRLNYWPSQHSAVULMWGNTJKUSWDSBKFJHDVBGPW");

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
    msg.setTimeStamp(0.27710787844459395);
    msg.setSource(5784U);
    msg.setSourceEntity(154U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(142U);
    msg.autonomy = 180U;
    msg.mode.assign("FMKVFXWFSBMMYGFUBAEQMCUGZZITXIDCOQKCCVBXOTWSEXOIVMBMBGHSQNFLEGUJQZEFBVDNHATXKOCYNAAQNLOJMQRHSJHBQYORFDLZTTAJEULPCVWDSOWNMHGWACRDJ");

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
    msg.setTimeStamp(0.08917066220861336);
    msg.setSource(34468U);
    msg.setSourceEntity(227U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(31U);
    msg.autonomy = 40U;
    msg.mode.assign("ABNKXYAILUGPECOSAVXGHOSZR");

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
    msg.setTimeStamp(0.986416906868279);
    msg.setSource(54808U);
    msg.setSourceEntity(105U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(109U);
    msg.type = 178U;
    msg.op = 176U;
    msg.possimerr = 0.13281653313905772;
    msg.converg = 0.1779371272664354;
    msg.turbulence = 0.5139192481472329;
    msg.possimmon = 40U;
    msg.commmon = 34U;
    msg.convergmon = 122U;

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
    msg.setTimeStamp(0.5844230327259796);
    msg.setSource(21631U);
    msg.setSourceEntity(191U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(80U);
    msg.type = 237U;
    msg.op = 160U;
    msg.possimerr = 0.515697749565145;
    msg.converg = 0.9014774663895928;
    msg.turbulence = 0.8208236507985539;
    msg.possimmon = 128U;
    msg.commmon = 44U;
    msg.convergmon = 249U;

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
    msg.setTimeStamp(0.8051319851036787);
    msg.setSource(59907U);
    msg.setSourceEntity(6U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(56U);
    msg.type = 63U;
    msg.op = 164U;
    msg.possimerr = 0.16714472591001095;
    msg.converg = 0.4410995154635;
    msg.turbulence = 0.24341589463217495;
    msg.possimmon = 61U;
    msg.commmon = 2U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.43752525850501345);
    msg.setSource(39991U);
    msg.setSourceEntity(108U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(158U);
    msg.op = 53U;
    msg.comm_interface = 239U;
    msg.period = 8449U;
    msg.sys_dst.assign("CWFIVFKBZJREHNLGJWXEEGPLXULIGUODCDIJWHTMQUJG");

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
    msg.setTimeStamp(0.603037077682892);
    msg.setSource(25351U);
    msg.setSourceEntity(113U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(144U);
    msg.op = 236U;
    msg.comm_interface = 229U;
    msg.period = 42799U;
    msg.sys_dst.assign("RGUKITJVSMWWAOXWYPQOTUVFCRNUSBGRYPKCKBOJAOFQQMCHWKSHCUQMSSSKAJDNUMXIVWVCQTDOJSDDQPGZEPKXBMGWIYHZEIRBEAVLWYBJUPTBFPNIBDXVTNRVKTBLZOPAKCDGTNZHKLGDFHWXIGKIQVCRALZUTSUJEXELDLPFFINCZLZOFGMELJEYALRSXHANZEWNTYERBSWVMYCFUC");

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
    msg.setTimeStamp(0.5421968689845598);
    msg.setSource(42366U);
    msg.setSourceEntity(32U);
    msg.setDestination(46012U);
    msg.setDestinationEntity(193U);
    msg.op = 249U;
    msg.comm_interface = 24U;
    msg.period = 28152U;
    msg.sys_dst.assign("KGKQDELPFZOWWHTAXJOWVRHIQKIUSMDDNETXLUCWVABAFPEAZKFMZEXYHJDMBMSQTKLIKUVZIYBCTNTVCMKHPSICBSSWEGEPTLGXHDBCCJKPUX");

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
    IMC::StateReport msg;
    msg.setTimeStamp(0.7188959820312852);
    msg.setSource(24894U);
    msg.setSourceEntity(229U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(173U);
    msg.stime = 2618688010U;
    msg.latitude = 0.3930272525350823;
    msg.longitude = 0.5415017882029852;
    msg.altitude = 10370U;
    msg.depth = 58069U;
    msg.heading = 47950U;
    msg.speed = 1288;
    msg.fuel = -6;
    msg.exec_state = 32;
    msg.plan_checksum = 39086U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.6253869391079869);
    msg.setSource(52521U);
    msg.setSourceEntity(15U);
    msg.setDestination(54621U);
    msg.setDestinationEntity(182U);
    msg.stime = 2005518290U;
    msg.latitude = 0.19067153886121602;
    msg.longitude = 0.53995946488282;
    msg.altitude = 63676U;
    msg.depth = 54029U;
    msg.heading = 32209U;
    msg.speed = -10060;
    msg.fuel = 103;
    msg.exec_state = 77;
    msg.plan_checksum = 60090U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.4634846835724611);
    msg.setSource(18748U);
    msg.setSourceEntity(204U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(72U);
    msg.stime = 2103266390U;
    msg.latitude = 0.6927082482227918;
    msg.longitude = 0.5901140410569444;
    msg.altitude = 28434U;
    msg.depth = 10723U;
    msg.heading = 37339U;
    msg.speed = 23716;
    msg.fuel = -87;
    msg.exec_state = -6;
    msg.plan_checksum = 22173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.32714694788201304);
    msg.setSource(43270U);
    msg.setSourceEntity(50U);
    msg.setDestination(17085U);
    msg.setDestinationEntity(249U);
    msg.req_id = 59632U;
    msg.comm_mean = 186U;
    msg.destination.assign("GCDLWXBQKEZICZTMGVJSMXPQMPBJYLYMQISNZBFTWLEROOUEREPGLXHWSIYMTVCDRETHWBHCFHMXBZDGNUAFYNTKYYUSONCNFGKJWTAIQADUNMLIKSTNWVSEGTFSJMRDBOHJMWFYRYVYCFBAQGSJZUFZRCQUXDOBPVTSKIXOQURKQDVKCOKABO");
    msg.deadline = 0.4700574816063602;
    msg.range = 0.6421961032978909;
    msg.data_mode = 138U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZTBNWXQSPZPMSYHVUACLSWKFFMRKUISLROLPFKVBQGEDQVSOCVDGZUJHTGQQFMWWNDHNMJMFRCXHELWGTARVCEQAIERTIHQUUKJAGLOCORGTMHEXQVKZLAXIAYBBTOJSRBRFYLHVLDCPPZNADMEOZISYUMNYJHFWBKSJJJJENDBMNOLDOUMHOPAFCWPIXIDZVPUCXAPOWGXTLKEBQJCQGYTPWWKIDNEYRAYXFIEYSUNVFSZUTNVBXIB");
    const char tmp_msg_1[] = {-48, 60, -18, -44, -16, -100, 7, -34, 125, 52, -85, -73, -63, -84, -114, 8, -56, -54, -104, -82, -119, 114, -110, 77, 80, -46, -118, -73, 83, 38, -36, -38, -52, -73, 51, 37, 58, 109, -91, -3, -102, -6, -98, 96, -16, -7, -23, 74, -5, 77, 64, -125, -37, -69, 117, -4, 23, 101, 125, 31, 101, -66, 91, -42, 88, -94, -5, 13, -112, 44, -67, -119, 6, 36, 74, -125, 94, -45, 45, 41, 70, 61, -29, 90, -34, 99, 0, -72, 11, 64, -25, 85, -47, -62, -73, -27, -53, -121, 92, 13, -66, -35, -7, 93, 44, 9, -91, -49, -126, 2, 30, -116, 86, -18, 99, 32, -21, -83, 119, 122, -48, -110, -112, -33, -26, 12, 26, 51, 3, 110};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.24323188131144502);
    msg.setSource(37371U);
    msg.setSourceEntity(168U);
    msg.setDestination(14182U);
    msg.setDestinationEntity(123U);
    msg.req_id = 64694U;
    msg.comm_mean = 18U;
    msg.destination.assign("ALBGPNMFYRXHZXKMLCBIWVJPSOKWVDECTNPWCNRRFTMINUEKDIJNGGYJILADYYXPBZRZVSCSYRZFNTOJYRTDPWVIGRQVSMSQAZHDAUAKQHZTOXHUQYHMVMXEHUPILXEWSCTXBGHXYJHKSGCEMDOWQFHGBBOTCQALZBYLJJGMVRDLZDUIWSFNXAAKMBQQXLUIVBUVZOPTJIJCWHNFDRGNOZ");
    msg.deadline = 0.41915127443735;
    msg.range = 0.17750465892532408;
    msg.data_mode = 6U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.request_id = 39567U;
    tmp_msg_0.command = 212U;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8885202988253496;
    tmp_tmp_msg_0_0.lon = 0.5607946364995599;
    tmp_tmp_msg_0_0.z = 0.050224889445616094;
    tmp_tmp_msg_0_0.z_units = 160U;
    tmp_tmp_msg_0_0.speed = 0.33351780115446306;
    tmp_tmp_msg_0_0.speed_units = 211U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.8739337024212457;
    tmp_tmp_tmp_msg_0_0_0.y = 0.15455495132435382;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7567230377004295;
    tmp_tmp_tmp_msg_0_0_0.t = 0.558010330822868;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.4398941889974338;
    tmp_tmp_msg_0_0.custom.assign("UBWTGBNZEEDR");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 58597U;
    tmp_msg_0.info.assign("THCQDBBSUNHAYIPLDOLDWCXWFHKNFTFGEJBZBSZNUGKMXUXHIRYQRUPWJIRNCYTPNZADOGFKLLBKGLWGSURCTGARQCWVXIIFFZAMSBCMLMFRVEVQAKHVQQDOITBEXMOEZTYFYM");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OTJPDKYZFVENGYCGTEUMHYWESOBVHKCAEOBQZBOMZWZMVPBOLVWCVQWIPKSEMCYNTJHLIEQHGRSFEMHULJDZJNCVIHAKXRORNYBIGAFXRLNQFEHJFQUMCJVAGKFBAWXSXDUKROAADXCDWDSONJFYQLZSTXLGPVZPUWBTNGNKGTCPUL");
    const char tmp_msg_1[] = {-101, -51, -110, 90, 93, -102, 28, -111, 47, -96, 12, 49, -128, 104, -18, 14, 86, -113, 67, -37, -121, 42, 39, 50, 23, -27, 89, 37, 106, -46, 49, 33, 51, -80, -73, -105, 59, 119, -39, 25, -113, 69, 30, 9, -17, 85, 15, -55, 95, -39, -41, 11, -94, 82, -124, 17, 97, -53, 31, -28, 75, -94, -127, -94, 0, 77, -2, -19, 2, -54, 46, -114, -20, 104, 55, -12, -106, 3, -93, -45, -97, 97, 63, -44, 93, 53, -100, 100, 87, -113, -45, -91, 96, 99, -77, 25, -39, 61, 50, 107, 26, 41, -77, 85, 91, 58, -96, 97, -2, 2, -47, -2, 11, -96, -49, -94, -93, 103, -21, 60, 40, -90, -99, -63, 35, 53, 37, -63, 100, -60, 91, -123, -29, 29, 2, 83, 62, -33, 75, -124, 88, 57, 19, -52, -78, 82, 105, 2, 91, 122, -56, 41, -81, 101, -91, -79, 32, -55, 118, -124, 63, 3, 43, -107, 71, 19, 0, -8, -52, -83, 52, -108, -17, -125, -59, 7, 16, -114, -123, -78, 22, 77, 79, -70, 101, -10, 87, -81, 96, -65, -77, 113, -97, 57, -70, 24, 119, -126, 120, 118, 79, -46, 28, 45, 109, 53, 33, 18, 48, -7, 76, 116, -107, 82, -85, 21, 14, -38, -128, -36, 84, 31, 19, 104, -60, -105, -18, -101, 79, -16, -62, 95, -4, 54, -90, 66, -88, -25, 11, 42, 75, -49, 106, -25, -20, 46, 15, 80, -100, -22, 26, 34};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.5935261711928442);
    msg.setSource(25555U);
    msg.setSourceEntity(70U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(245U);
    msg.req_id = 48168U;
    msg.comm_mean = 239U;
    msg.destination.assign("ZJIPQHSIPKLKCGLXJQXNDSEMDEZRCDAFHGIYDDGFGXZRMKXZADONKYITQSYAMRAHOECTNFJVXXBHJUHGKQRNVOESHKFOAYJATUWJNJOVCUGCTRDVMGPFDXLRVIGWIHNBMBWFPHYZTMOEYWUZUFEBABWWYZXBOWEGQXDCQJTCQALPOZEMBKZFPACKUWZWSGKIRICRJYQUMOPVSN");
    msg.deadline = 0.494971399731731;
    msg.range = 0.48466582169241845;
    msg.data_mode = 29U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.7244571393983026;
    tmp_msg_0.lat = 0.3424111043786402;
    tmp_msg_0.lon = 0.8650273041920452;
    tmp_msg_0.z = 0.30143793653593565;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.travel_z = 0.4882053644321326;
    tmp_msg_0.travel_z_units = 73U;
    tmp_msg_0.delayed = 41U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YHBGAHVSWIAJXWVQRFQKSCOPZMEAOFDBOVXZSXLJBXIHBFXRZF");
    const char tmp_msg_1[] = {-38, 14, 76, -95, -48, -109, -31, -68, -91, -123, -99, 12, 34, -121, -65, 109, -8, 21, -128, 83, -60, 54, -2, 120, -56, 59, -65, -106, -47, 41, 124, 113, 70, 48, -76, 0, 70, 32, 62, 92, -67, 75, -97, -1, 69, -111, -124, -86, -108, 111, 82, 57, 80, -47, -10, -103, -56, 67, 26, -16, -19, -63, 83, 61, -116, 57, -50, -20, -29, 3, 71, 3, -52, -38, -62, -114, 35, 3, -69, -2, -120, -49, -68, -48, 57, -49, -98, 55, -104, 39, -6, 36, 91, 44, -2, -128, -10, -2, -93};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.2778435332636573);
    msg.setSource(61386U);
    msg.setSourceEntity(171U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(10U);
    msg.req_id = 23187U;
    msg.status = 88U;
    msg.range = 0.737402148639807;
    msg.info.assign("WDCUDWSKHYWKNAYKXZGWPFQOIGQUBGNZAFDYNJYGCQVKSJIIKPLNIMKDPRSPPHLEVZQDWLEBPNNFXZNUHZVFJOWOXWTULOXMAHPCSXWHKHTBKZLQXGAIACSHLCUNDTQAJTGBJMDVUCYOETOQDCUYJVSZREHLERSLEMMWMGIWIKVDUSXOYTXLIVRMCGOBXAVFSPHOSFMAJYVPVTJARQYRRGCNBBTNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.9332591067323878);
    msg.setSource(26170U);
    msg.setSourceEntity(69U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(145U);
    msg.req_id = 62942U;
    msg.status = 120U;
    msg.range = 0.024991184624785223;
    msg.info.assign("AVDJJSWABKRLXVYGONJPYWITUMIHCSLFBQATRWDNGGMKLZOBLERFSRYJDJQMPQWTNUNVTKVDBRXXQAKURPOXDXMMCNSEKEVIUQNBHXYTVFYOIJOAAMNFLLLJFIVKESSEZHIBXITEGCCKCQNGDMCAHFINHKUXJSHOYCNZIZYOOUZVTWHPPVOEPRRAWPDRYLKQSDGMOZBWVDWBFYGKLQMHXYPZTSWGGBUZCPZRHTFTEFJSLPADFIQHCJBEUMQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.45751817516111626);
    msg.setSource(30247U);
    msg.setSourceEntity(3U);
    msg.setDestination(25024U);
    msg.setDestinationEntity(60U);
    msg.req_id = 58131U;
    msg.status = 4U;
    msg.range = 0.98028319603823;
    msg.info.assign("VIWCWBRWOWSLSCDJYJWQLIUHHSZOIMBKTCGYOAZOLFKMFYQUHRVHHRMLTAQQAWBNASWVKMEEPYSIGAXCLUKSUTEJXNCBYIOPVUDNPIUNQJOITOKOMNAJGURRROQUDCGLPOQRTDVKFZPGHPPGFFNYVGQJERMYTJJVSUWMXXRHVAGDZFTKQLCYEHYLKCXBDSZDJADITEZRIZVFSHXSNXABBCFQNGYNPUTVXXJKMBFAZWDEEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.891609954139383);
    msg.setSource(8346U);
    msg.setSourceEntity(184U);
    msg.setDestination(44295U);
    msg.setDestinationEntity(116U);
    msg.req_id = 38933U;
    msg.destination.assign("TEFCHNNWDJGKNIHWCQDMJBSYOPNAKGGRLYVMCUIKWAYOBKDZFZHJTMBZRVQYYFOCODDXQUOMPRZMDVUJUWUOZUKLALQHXICACVAJIYZDXXXBEJMSDYVHSNWAXCNRB");
    msg.timeout = 0.5422487017463313;
    msg.sms_text.assign("LIKCLBYWDSNQGMFPXFEJOWIZJVZYQLCILMYQHLHVMOWDJFRSCXZZGEMWAEPUQZFZKTLMAURJGTUIWUUMTGATNBLNTOYCIYZTDTVGOOSQKQSSTRYUODHAXBWXSAHDXGMIADPXRKVPHQCVERPTGDPSBEVXPNCBCYIUFGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.30193400345099364);
    msg.setSource(57547U);
    msg.setSourceEntity(143U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(58U);
    msg.req_id = 32871U;
    msg.destination.assign("WCEBIIOGDPCEGTPMTSZQERSAJUTIVJLEQPLPRUMJSCSRKGKATDHFOREVZFCPOXVQUTBIMDRABFZADGYRFYPUNAPEWWQZHBPRSBDZPCOWJNBYBLGTFQNNAVEAMYVZXMWQHWKYOCCJXAKNYQNOUSVYBYUSRXUWYLVIVJESKTUNSWFHXTAXLJDPLOIDXLHKVZWXVHCLKBHOHKJKIDQRGCEFHUYFROCJQSIFFAKGHMTJTZGLNXLIMZUMW");
    msg.timeout = 0.6405526097239348;
    msg.sms_text.assign("JAGVTVQMPBXVQYYFXMAZQIOCEQPPAXYHKKOGPDHOKXYASCTTREZTLLNBXZSXJCTTWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.4810201252784184);
    msg.setSource(51097U);
    msg.setSourceEntity(228U);
    msg.setDestination(42714U);
    msg.setDestinationEntity(54U);
    msg.req_id = 47837U;
    msg.destination.assign("ULGISWJVVYBOHQSCFLAFHAYMDNCDASCZJXPFREPMMPKWVJBTRUBOMHBZTYOOCHKZCOJHZKCEIDFK");
    msg.timeout = 0.35950872628724984;
    msg.sms_text.assign("DHUDYNISFGEKVBMOYTKMCRSGQXWRGQSUJNBLVXNSUMKTOIWJANRZEFGOSZIVBMFODBKHZLIZRBQXTSBUSGCOXHWZDEVQDEWBJMYLQPOGRFPESOFRQTYPZJNLZGNIFKRYANAVIDTPJJJYJXTMICHKCHVJEMKWMAIHXYSIYZOEGUVHTDLLWPUHNYCFPTCQRABGQKWXELORPUNQANIZORV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.7030899500854472);
    msg.setSource(44391U);
    msg.setSourceEntity(170U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(198U);
    msg.req_id = 28411U;
    msg.status = 42U;
    msg.info.assign("WONNSTQMNRIRSCSAAEIKMUKMQJZPPRFVVHKRIGXXRYAEYLEZKCTUKXGPHYBYEJZAUGLBWPKVFHGDVWQIUXKXYIGVAMUBALIXNJZMJOZQWLNUQNBRPJJPTJSPCHQGNKDTSECHCMSEYVCXPWHJMEBVBFRTDXOLBKIACQDWBWMCCOUOFSRLFWBGEGHRQDSLTQNDHZWKFUSOFTNZZXOJZOAOBJVLHLWECUIDYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.42851451413742925);
    msg.setSource(5141U);
    msg.setSourceEntity(128U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(127U);
    msg.req_id = 3634U;
    msg.status = 22U;
    msg.info.assign("LUHYMPATRXAAKCVYYKMHHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.02575593640647289);
    msg.setSource(37831U);
    msg.setSourceEntity(194U);
    msg.setDestination(23250U);
    msg.setDestinationEntity(225U);
    msg.req_id = 3955U;
    msg.status = 58U;
    msg.info.assign("SOAQYKKRVNIZVPCRVZZIIOJRTHJFLQWMETDTUKBGZZNRQBHEVPGXCCVWJGXTITDQQXOWJDOEVYYQNFAUHZMKOMFKXYAXXDJEHSDSSTBAULEQSBMFRMXIOAUGPRGCUYPQBYKDYULNAIADTKBRJBWPGTJXKAEZVSZSCNFKVCUHNBAGWUTHTLEPNHOUPYGIHSSYDHXBRMCINSFBCWNFOLLDMIGZYJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.047139099705600485);
    msg.setSource(30718U);
    msg.setSourceEntity(57U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(107U);
    msg.state = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.4821518574985947);
    msg.setSource(51746U);
    msg.setSourceEntity(136U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(51U);
    msg.state = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.6237618624950482);
    msg.setSource(20988U);
    msg.setSourceEntity(82U);
    msg.setDestination(56602U);
    msg.setDestinationEntity(125U);
    msg.state = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.3569840084327023);
    msg.setSource(55484U);
    msg.setSourceEntity(125U);
    msg.setDestination(34706U);
    msg.setDestinationEntity(170U);
    msg.state = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.6718283465956879);
    msg.setSource(57462U);
    msg.setSourceEntity(146U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(46U);
    msg.state = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.2547712361949056);
    msg.setSource(48583U);
    msg.setSourceEntity(69U);
    msg.setDestination(44621U);
    msg.setDestinationEntity(22U);
    msg.state = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.03626089604143856);
    msg.setSource(39396U);
    msg.setSourceEntity(152U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(79U);
    msg.req_id = 45667U;
    msg.destination.assign("RXPUXYBJEBAAKUEBYIMVGZYMWTSJVGUSXHIBICKLOGZWAQLFKVWIDULWLGODTYHAABDRGSAHTQVGTDDOGPZBZHGYQIISOQQUXNGZPJVEQHAUCRCPSELJJXXRKCCRMYXBFWDNJSAKFFVCMKKBCOUPZJHLKNEQXDLTDMOSOUVVLGPEZUTZEJEBNYLUZMPNOYKPCPHVTFNEFJRWTXTRNWODMM");
    msg.timeout = 0.6987637941051361;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 58048U;
    tmp_msg_0.sys.assign("QYLIHPEJWSRPKOIDJUNXOWOEHDVWCWBLCCYWNCMFFMLGBWVMNZGATBCJKMDAVIUOQSAZTPEVGQLGTWN");
    tmp_msg_0.value = 0.2986370052828836;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.3629580595505628);
    msg.setSource(46190U);
    msg.setSourceEntity(38U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(179U);
    msg.req_id = 4667U;
    msg.destination.assign("JKCGGBNFVQCTYFGVZMKAQHBEKIJIURFNQUFQWDYHUKWXPVJQDFUPDITZNCSPCXRHOYLLGBLLVAEXWHMRTNKLSALAIAPKKMHQDOCFXJOZDITDWEHILPZBHFTDDNSVXZPZJVHABBZOCUSFWRQOZGYSLJOMOVKYAEWWNTESRIETWXICMONDEJSPKXONMNIRZOPEXYJGSFCHXVPBAEGMGZTSQUBGWLCJYUWPRVLNAAYXMDUBBQ");
    msg.timeout = 0.7177601203806006;
    IMC::DtlsMessage tmp_msg_0;
    tmp_msg_0.ipaddr = 3565294329U;
    tmp_msg_0.port = 4878U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.683029171855274);
    msg.setSource(14452U);
    msg.setSourceEntity(95U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(40U);
    msg.req_id = 53481U;
    msg.destination.assign("AXXEDPUXQCTSVYWCXPFSDNOLEGNDAMVWARTJDWXYCKELKARLVRREGRLICKZXICKOKHZIXDGSVGQQSBIHQGEGVNKOVAABPAWDMYLPBO");
    msg.timeout = 0.10856953305678163;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("SNULDYGTIUPBOCCHZQLUNZGOEQOFIQCLXONFYPRFDEQSWHCHZVQIMBFAWMRJIJJSNGLBEDZSTGKBOCCKIVQGDEXKXJYOWLMWJXFALLGMXKLTAPXKQCUBTNIMJRTX");
    tmp_msg_0.reference_frame = 110U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 44002U;
    tmp_tmp_msg_0_0.off_x = 0.24427231445298658;
    tmp_tmp_msg_0_0.off_y = 0.329605836907102;
    tmp_tmp_msg_0_0.off_z = 0.8308574950905121;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RXBKDKYZMLLIKGZXLVSSPFBUJYULTWNWVXTJQHZJDPKSUPRDNIHLGDLSTUNXZYIURYASPTQFCBJHUKTWNGQYONAIMHTYIXXGMBCCHFAASDOGUAVIYQQKGDAJLHZPFYEOCRVVHAEIMVNEZBXHCMSBVTQKGNRAKMZLEIRNOEGTVHPFTCDEBLPVNOWJJFODQBQBPMJZRMJWZAWWUWZFRPCOHYEDVESULMXEIGWSCQFXPUGITWO");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.37483636739307524);
    msg.setSource(48546U);
    msg.setSourceEntity(135U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(129U);
    msg.req_id = 52152U;
    msg.status = 38U;
    msg.info.assign("AVRCOXMWZNJXYHUNKOEVRXRDCWWIZQMWHCTSYARNHTGLRAEDABTWNSIAPJGMOSQOFPQFYKCYUHSJOVAUHISZGZOCZPDXLZFULTINNPBGSVQYNQJPWLBVWKQWUUKGDXDUGAEBARKYCHDEVFDTFMIYRTIQNHWVKMHHRWXVZTRKHQMBPDNYUTBBICLXECMTNLPJLYJKJZYRZIFPXQOECVXXZBLOFUEPJIKJBGSBSOUMIAJMCLEASEPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.3994618409978744);
    msg.setSource(30638U);
    msg.setSourceEntity(139U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(201U);
    msg.req_id = 35031U;
    msg.status = 35U;
    msg.info.assign("LMXLWHJFUCFOQQXSZELPPRVONEQORIYMYXQCADNOWQAJXNCJJZHSVYXHIHBFZMPRRVVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.21359367579267108);
    msg.setSource(43696U);
    msg.setSourceEntity(100U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(47U);
    msg.req_id = 35101U;
    msg.status = 11U;
    msg.info.assign("ZBUIXMCUYMCMQZJCWITOJVPQPZVZZFDOXPGFWCPYERIEHLHMCECOMOUHVHBLBIFHWLBJRWBSPELHSWAILUYNZARXFVYDTCKTAIPDFKHSLVOATJQDZGZGGDCUJQHTURSITAMLVXPAUWOMTGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.1720449665366357);
    msg.setSource(58679U);
    msg.setSourceEntity(244U);
    msg.setDestination(56205U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.10745771742042376);
    msg.setSource(29131U);
    msg.setSourceEntity(36U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.6293818193903085);
    msg.setSource(63907U);
    msg.setSourceEntity(235U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.6734437482748729);
    msg.setSource(62438U);
    msg.setSourceEntity(235U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("TDJQKVABPKMTONZIVOWUXBXXIAWERVCRLPLNRWRBANPXUASFENWJPYTKGGSBZNLFUDGFMERCFLFQGYDQOKGBIXTHONIJUSHJFIABQKWCYDPSICCXRYDSDDZSCOWZJJOBXVTDMIUEZCZQHSXQVFMLODBEHPQRHVNOEFHFOKPRPGVWVQTVABLYJXULZHPQAAGMZRYNCZNIEGVYIHTGAEOYSKWWYEHDKPCNFHMXWATUKGJSUMTJ");
    msg.description.assign("LJLLOFTMAQCXBPUMTENXRYNDDOBIQAXQSGDJYCAUZSWDCFB");
    msg.vnamespace.assign("EGWMQDRCGEABDNTHBKXJMUICEWRFWMRFGWRTFLSDIQOBVRRTFFBXVNRIXGCLCLDIZMNJJREMNSXPYMZKYADJVOJLHTXKSUZWUQKNRHEUAQWVGYPACTZKAXADIJZWXMVHZOWPILOFVCLIIDYIUEZXDTBNBHJAOUIHCHT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CMFZNWFSXWKRVQRUQKPISQNKDSJMAEEXZPVZJBBJKVBINGWELPCWYUKVRGTORONXCVDJVWILIWBEUXJTS");
    tmp_msg_0.value.assign("WBDGNFFCPCWHHLVMIUDARWINMVSRMXNQOZXPXKXYRFUBXZNUQTOGRPYBDTVWYGHIQTPNNLSOPAVRJLMKIIARIZLCEEMHYZJETUSVNXGPJECKJYJGIMTKSTJEAQRAMVPVPVHRZFRJEEANUBMKTMGFOAZQKWEQIXELQOSO");
    tmp_msg_0.type = 225U;
    tmp_msg_0.access = 224U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NVWURULBHDQQWKJCBDXDEWQXLGUFZGEDQXAJMXHWTDZSRYTQHRFAPWNRAYXNPKBVVKEMJTTOOBMKWNDSRGNAUMTCCFBSYDZSHOTZIILEMTTJKTGYKVPNEVPDKGHAWGBVRNCOEAHIZHNHRYFMYYRGJFRMJYLZSYGDIBWFQCBFRQFXZCJNFOVZXVIOTIEJLUBHPAOESIHWYJBPFUVA");
    IMC::EntityList tmp_msg_1;
    tmp_msg_1.op = 9U;
    tmp_msg_1.list.assign("EPEZRIFVJDTNGBMBTFDPLCMZSAHDFKIJCCOEGZIO");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamTxStatus tmp_msg_2;
    tmp_msg_2.seq = 2394U;
    tmp_msg_2.value = 215U;
    tmp_msg_2.error.assign("ZYSOBMDOZTDABERXYFGRFPSXRNWBPHUETBOGEDEDGCBRASZLQWDLFWHQYTASSFNEVXMAWSWIOJQWPHONSFASSNNKNXJCUEVLMEZMGOKLGCIORUVQRIUMUWRPPAXUETKXUVPCODZRBZIAAPDUFGPYKDGIHQFKCNLJIETQYCDGULTNFKRKAMBWHBTHCHMYMHLMIJNVWZQGVM");
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
    msg.setTimeStamp(0.037145232264074846);
    msg.setSource(37965U);
    msg.setSourceEntity(133U);
    msg.setDestination(22014U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("DLUIQIZQPAAPRQCKTJOMFVTXXZZUZ");
    msg.description.assign("DMGDHEDNASLKUDFFZSJTYJGNRTCQTKRRFCAQYGZOMMBLNGNXEXIBOVBPIFZZYIMKFBKWLIEWGOQQITEEDMAKUWHSFTVIHUZSRSEHUDGWNOEGKLOXXNHVPINAGDBMRVOJKHSXNIPRJNTJEYHUPUWRHDIPEDUXFYABWUNCPMVZAZCHVOXBMLJXTQQJYESWWAHBRQSQJYJCCCQZKKUPQUOALLSXBTMPA");
    msg.vnamespace.assign("IJZHKDVOXDBEOSARZAZQCTQXFPWNHBMYEVUSZXUBMRHCKFTPKCBWRLZMBRTVVGNLNNXJTNHFLKVSCQPXOJYDMHNJECOXMXAVXGYEZJNDSBUWAUTCREFWJKRQHBTIMJZMFPYJFNAIZOMEWBPUCJORAGSIKNDSVOGPIWQPLFXGXEDACZD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PCINPIRXRRAHOVPGNKQBAMBTESZZYTMTDLGTXGLASMUJKHQNKYCDOAMOLSGEHRMKVTVALUVSDHRGTIPBZSQLNBGKOGWCTFFCIXXOMNOHJYFCWFPPCZRGUILURUCDTFOPETSDUYWBJQLUIVXJXKJYIALOAFVECJHWHXZQWBIPZNYZJRYMFNRCIZWUEUVLWMDAHJQAZDQFDSKXBWXWGUAKHXNPSCVKBRMJQKBVEOQEFEJYSTBEMSOWD");
    tmp_msg_0.value.assign("XEAMDOOCQCMUHVHNIDZDBESKWKCTMGVRJQWEQHGFVTSTUNBXJSPXHCEHICGJZDBSNUMVQVLYDDBFZBYRHMJBPWYYBTFNZPARYFZPILECKVAYSZWTQDXUKZXLYRCDZLGWOXHRTJMKIWSNFDOJXZNOHGVXXOEPFKABMGSQPSRDNKCMCAFALBXNRIAUCOOJUQQIMATEMGUEOJLWIEUTWGHERVPPYLQVKTAQFLJKJIAN");
    tmp_msg_0.type = 170U;
    tmp_msg_0.access = 78U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UMHLQSBYLYYCQANGSTPNVBGATKWYIECFQHVXAHCGNQMFWSIVNENDULPORTDFOVJHMXGPFVERTUOBEXMNYGGLDNUADWYOTXJBZEFHPHXJVKCIUYGMEPZPDXLYJLKGOOKDTRAWGFIDFBPDB");
    IMC::IndicatedSpeed tmp_msg_1;
    tmp_msg_1.value = 0.500813079693361;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblRange tmp_msg_2;
    tmp_msg_2.id = 77U;
    tmp_msg_2.range = 0.14374320514309258;
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
    msg.setTimeStamp(0.12625092854423192);
    msg.setSource(19292U);
    msg.setSourceEntity(128U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("QYCGBFXAODJETCLREMJOIDEWCQOFAHMIQZLEFOIZTAKOPQXBDTYSCNTYKGZLCGYSTUPJPXUVJPIQCBXGUDZFNXANSCRQHUTKZUURLHIGYVRDVXFVJPYYRKVA");
    msg.description.assign("HHOILAPWWPRJECJECTWESLOSTFOFQUPCCOYQOWUKHNVJHJGZOTYEGMVGZQKRVUUVGMIVXZUWJZBXNRZLUZMMDXAXVMXERIYFQS");
    msg.vnamespace.assign("CCGPCVZXTIDPCQIMQPRZYKTFZXZXNROMLFQGYWUHNSENRDTRQDVVVXAPLUDPWGLKTXIWEXDWLSUUZYBEQRTYHYNANKTFXYK");
    msg.start_man_id.assign("MZAWYAFZWLULKFGRUMUIXSMDLBEQFKZMESIAGOUJMYQCCLWPKTAGDWHLVJSXMIHLYRAKQNVIENSXUHSCCXCRZKIRJDPPQACMCSNUXOEBVLIUHVJFBHPNYTHJEOZRXVNZFPOGEBHRNMMGTKWWBVTDEKUPTTBVGQDLIAJEAOGZDQVKFAYTVFREOFCSJQNKBPQL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XJXMWFRIEVFTFKCQKTXYIQFPTNQRGPHAMIDXKATOBTARUZNQLIZHIOQMXSRETZCHMUYXMLUWVAHGSEMTWJACBYJOPZEILBPXMPVQUHVAQMDXRFNGSSKHYBHDADWIHSFYQWFALJBFCLUDVVIDSONGZUVPXABJJIECDPDXVCZZCNENWKNCJDRGKNZYUSQTJUWWZKCEERNBKKOBYBLOFDSYPYLRMQKUWOZELOTSOLTERRGVBCGLSJUGMNPG");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 10519U;
    tmp_tmp_msg_0_0.name.assign("UWALBQEDCFEWJQQXQOATOHBXFCRZWJAGNMPEORWGYVKVHIKGPIUISVBCMKSRWGORNLYQUXQFRXJPFNMWZASQGWYMKDHOHJZDSVNZJIXTWUYYOXTESHIZGLKTWIUEFMLPLKBHDNSHMCVMTACSSPYTTBJXKFGHAHMBAIPVDURCMBLKDCIVCFNBZFNFZTVQMEOVBPB");
    tmp_tmp_msg_0_0.custom.assign("IMQTLJQXCAFYNZAZMVFCBFJVTYPXSYMZRNXXMLGNYLHCPBVSIUGZOXPODMKSHHHAHQUR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.47799239741259614);
    msg.setSource(59325U);
    msg.setSourceEntity(110U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(27U);
    msg.maneuver_id.assign("ZWYBBOAMMKAYYNZVJPGVUCPOBQAPRANDRQH");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 7403U;
    tmp_msg_0.lat = 0.16700404624379217;
    tmp_msg_0.lon = 0.6362252067883433;
    tmp_msg_0.z = 0.2654819471910147;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.amplitude = 0.6831688413705904;
    tmp_msg_0.pitch = 0.5343880514250788;
    tmp_msg_0.speed = 0.8610413539051366;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.custom.assign("ZHELQEJZAGFBRLCTJAWPIHGOFJIRQKMDFTXBEALKASQNOCCQSDYKETBLEAUENMYEAYPVTDOVSVFGFFBLGOMHRGQHXAIDQFXSRRKPJVTIRODBPHF");
    msg.data.set(tmp_msg_0);
    IMC::VehicleState tmp_msg_1;
    tmp_msg_1.op_mode = 191U;
    tmp_msg_1.error_count = 202U;
    tmp_msg_1.error_ents.assign("JVYMVADQVCNRTBYEAPPFMCNCTSEHYUWEZTDUFFJETFWUQVUGXJPZOBYPRGSDVLNQKNZHLWTASTEXQVBTSTLQZIDKFVKAUKRDIGQGLXOFSWJWLIZMHVLRSBKIWBEJSUMZOJCBPXTECNKEIAVRNPYQUOMRZPYCIQROEVMMRFUMPBFJPHQDBCDBXNDDIGCXLOCKHWALGYZHASIHEDZKX");
    tmp_msg_1.maneuver_type = 49511U;
    tmp_msg_1.maneuver_stime = 0.9651858572454365;
    tmp_msg_1.maneuver_eta = 20657U;
    tmp_msg_1.control_loops = 1146492749U;
    tmp_msg_1.flags = 55U;
    tmp_msg_1.last_error.assign("VDFTPXVURHINQBQLSPMFBDYXVOCBVDUHHEMERNEGWSOXUTPHBJZQLWNNLCOXECAHZQIKJJLRKMMJTQQJGGAUWYUSMZJGKUSONOHJQFPDTBXWAYREIGSFUOBNJRNAVMIXZKTNELQXGVGXYDBKYYVWOOCBFFERDIIXVDEPCZPKWYALEFDMHHAQFOGZSTYAHTLNLPTVACDSDHUCIMZMTSRKWKFJGUXLNQYROIBIULSPWME");
    tmp_msg_1.last_error_time = 0.5962034976249977;
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
    msg.setTimeStamp(0.997976969476556);
    msg.setSource(56690U);
    msg.setSourceEntity(135U);
    msg.setDestination(58208U);
    msg.setDestinationEntity(212U);
    msg.maneuver_id.assign("AZDKRCTEZICVPUHDALUWQMTBDA");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 41875U;
    tmp_msg_0.lat = 0.6324746865668968;
    tmp_msg_0.lon = 0.28105017036116786;
    tmp_msg_0.speed = 0.3255676805884863;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("PAFNRRMFSWZBAVJLDBOGRQOQCTLOKBHLQRFEDBUKGDJGSACFZNEUDNWSGXQNEHWNQOFSSKURPDGHVMHFRYKOQNVOXIFBKWAPRDEZKNWCXKVRBMSYJEUQQFPYOGVITCSIWWUYJJTBDGJHXMIMXIMUTQASTZNYJGTCAQIVFBUMKPZPWUIKJVKJLLLYIXYZDCZTMERHTLAPHLNOGLZWUFOYCBPNECO");
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
    msg.setTimeStamp(0.4019724212955532);
    msg.setSource(45849U);
    msg.setSourceEntity(64U);
    msg.setDestination(52502U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("STKCUIPEKCNEZTQTXOPSNGAFMHUYGPLGWRCERADPUHWIQLHAERBUYUMGMBANULXDBOYJNXJZFXVHSYIKUYSDYRBCQVSWVRNEAKUMDRXMQVZDSIOMFGHNAFUFQBIEOWDQPDJCZXPLARJFCLLHLXSBZOJQYFBFDCWIJKTTCIBHOMXSJA");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YRUXNSUTBKYUNBBXOKXGSWHJPOHZGPYQRAEOKUAOTFAFIOPAWZJFNJEZHMHINSDFEIVVRNXQKFZIAUPCXGWEMSPIYFQCWVFCVNBGSDCJMZVVPDRNHWTDDXAKDKETQJFLCRQEURBRACILEAGYQZIGEFHSQZVBMULXKMMAZCTFHHYPOTZUNGKJOQLXUIJBIRLZEJDMLQSUCLBNBYTOQTDCITOVWD");
    msg.data.set(tmp_msg_0);
    IMC::HistoricCTD tmp_msg_1;
    tmp_msg_1.conductivity = 0.6328026190587007;
    tmp_msg_1.temperature = 0.820477467657906;
    tmp_msg_1.depth = 0.9113731757412162;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryLedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("SPMEGHTPZXAXETYFAKQITHMTBBHCBDRAPMRVKLUSQOKPAIXYZJQTWQPMQTDPDBVUJNAFRDYJBJHMGQEPHLQNYZHBJXMWVRVNHUKYXAWKUUDMLLBFREXFYNTKNGJYTDBOJAGIK");
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
    msg.setTimeStamp(0.7575378025379724);
    msg.setSource(53336U);
    msg.setSourceEntity(155U);
    msg.setDestination(8294U);
    msg.setDestinationEntity(223U);
    msg.source_man.assign("XZWQPQBHKAYXKXRXLHGRJEHLKTCJSDSONCVWRJRGYAVVFJLKFBDOBUUJXAMBAVBZBXHGPAGUDOTKTTOMCCPEIPSEBIVUAYLWPYHYSESQRTPCRHEURASGA");
    msg.dest_man.assign("GHYDWOZJAEZYWYAQFLVKYKTGUIACREZICWEVCEOSRRZEXPUVZFDROFATKCUDXUVRADVWMXYVEHBZIXNUKCQSOVWBXNLCPQMVEMCNKBFVSIYYMJYVKGXONMWWAMUHRESQHAQMXPKGQCKIKRSDIELJXJPFDTJBJBSPDBLJZLNQQUGFDUOILIXLSLDTYGGPRWIOUQTSPSNHSUFHWPOWNFKFPXHNBFRNMJABYPHJLBBIGZ");
    msg.conditions.assign("NWJDQTYOQOEIJQVEBCNUEJSKZCKAVZTWCTZPRKPADALPKPCZLRKDGEMBGXJKAUROOFOVPHJJIWZGBQGQDNGSXHUKKYMFXISYAIPMKIGDOVHJIFXUDBVFFUVLHPFWUBUHPFLNSVLOXMHTWATVPBTIBSFEWCSGUNTVYCAZRXYIAYQCTJNIMGSTELEOWBBKHRYFYRQQNXVZXNFDPMCQDSEHLDWLAJSRZOZESYM");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 35962U;
    tmp_msg_0.lat = 0.8039013232755986;
    tmp_msg_0.lon = 0.6944198642001513;
    tmp_msg_0.z = 0.3164227807511344;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.speed = 0.20388740464064525;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.custom.assign("BXASCNRFPZITUPJGLQYOIFZ");
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
    msg.setTimeStamp(0.5669925984915201);
    msg.setSource(5420U);
    msg.setSourceEntity(214U);
    msg.setDestination(46676U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("RTELHVPMTQWXRSASCLIDIFKEGZRNOFZPXNSYIUJRWCBQVSTMWWSKBAWXEUJSAFYACFBHFGTZXGTPUVKLBMMGQGIEQASMUOKM");
    msg.dest_man.assign("DUFDHSOFFTGGYPNAZJCOEEOHANXRGJUNNZMZICFKMLOLMODZVLARMHVIDNGGESF");
    msg.conditions.assign("GSOWUBFAWQXNQDQVBWMPGMPEQDRIOFBULBERUANVIVKCIYDTJVXIXYPEKPPJCYWZTRUENEMAZQOFYJXXMTOHINECFQBZIKCAGVZSLNKE");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ARGHVNQRTZIMVRRXCYKAFUWJHAJHDXWAPBFRFAMPIUUWUVCRYILZQUFWLLOACJPPOVEYTSUQLMKKJBKQPDEFYFIHNXZENMLGWMOYGBK");
    tmp_msg_0.max_speed = 0.08734308662254764;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.lat = 0.5421555706715345;
    tmp_msg_0.lon = 0.511582054653975;
    tmp_msg_0.z = 0.053788232329275765;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.custom.assign("PFRTSZVSWHXLQJJNGIONPACNPLVSOAIPURFOGJRNILQNGBCDRSJGVQYESAPHQWUFACXHZRVUZJLXCFLMDKLIOCMDAEBQOUHYVYQFTUZQDNBYULAJVDCPCTZBLQHNZMSJDKQIWYEVFRPPKRXLIRMDOUXOHOGTBMWINJWWEXCAQHNOMNLGDSWKVXHABKFKEYIFZWKZCVBSUIREWKTZKZYMEIJDMBEVYEESGKTGHARSGFJDWXTUHYU");
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
    msg.setTimeStamp(0.7172150155784462);
    msg.setSource(13264U);
    msg.setSourceEntity(66U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(222U);
    msg.source_man.assign("OPWRANARJSFRMLHWFMPDTNUXBYGIKUFLUPZ");
    msg.dest_man.assign("TSVSEEWWOMMCSGQPQVFXJJEXVRBGTUZEFOVXYWPFQFDLTUENRZZGFUJZAR");
    msg.conditions.assign("IJCSOOESVXRRFMSLCNFTXDDXDNFCPEMUSNOKYJXOQTIAFCSKQPVWQMBJBRJHOSWYQZJLXVLIGVYBUXYZQHFZNEBGGKROCGJIPMZNMCZGWKRPDBKJZIEALSHDXPCVQVTZUYVYQWBFALFBBMVXEMBOQNNHMWDMHPHL");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("SFJKXWHAYZSKONBQSGCIVROJFQIAOPUHARVCKALPPIRETJOSQLPQGEYSTNQECUWVDGIFNJHMNHMJSVWGZMFMDYMXTZQUNEYXRDBVXZUTMIOYKXEHQBRWLBPBMWNXGFFSXKBOYOYORWFARTIFGPPSQADKUCVIQ");
    tmp_msg_0.htime = 0.2025720578020439;
    tmp_msg_0.lat = 0.9985500835013758;
    tmp_msg_0.lon = 0.7628607131063361;
    const char tmp_tmp_msg_0_0[] = {-4, -22, -104, 53, -84, 121, 61, 4, 37, -20, -61, -70, -14, -69, -32, -58, -25, -113, -68, 25, 44, 121, 2, -26, -116, 7, -104, -7, -101, 10, 120, 2, 98, -66, -101, -17, -13, 71, 90, -57, 78, -16, -39, 53, 41, 29, -10, -62, 77, -115, 42, -94, -37, 74, -90, -86, 33, -98, 30, -127, 31, 42, -25, 68, -121, 121, -18, 48, -66, -37, -14, -70, -117, 96, -70, 122, 25, 20, -58, 104, -55, 36, -55, 25, 119, -118, 26, 44, 48, -53, 72, 101, -31, -52, -71, -65, 122, -40, 70, -50, 61, -74, 6, -90, 67, 57, 7, 2, 49, -75, -54, 81, 90, 99, -109, -2, 15, 42, 39, -99, -81, 58, 75, -50, 21, -74, -27, -27, 109, 30, -71, -98, 88, -17, 1, -6, -3, -56, -106, 3, -70, -10, 102, -90, -87, 1, -57, -23};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3798045114843067);
    msg.setSource(322U);
    msg.setSourceEntity(242U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(192U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AKJFGUPZXMKZBFYHXRCTQRJTEKFEQBLPUFIFFLAMILJBYTKDVAYUUUEKKRRHSGWROMVNFNUZZDCNWWXICDEPVCXDETTLQBUSOGDPWVZBAKRVZSFHNASAGYONZYMGUPDCHBXQOZ");
    tmp_msg_0.description.assign("GSJMCDCGOCWNFUIXFKZAEJBULDCGGLWSMJDIRKWZFEWPQSBZBOXZNXYQMW");
    tmp_msg_0.vnamespace.assign("SXGXTPGLTKEABCWWEVQBYDNHLGFUTVFRDVKJILEDVDZGVSYFKDOYSZAQIOKAPTNMGRCCIVTVUSWOMDXFZSWXBTCNCZIOMQXQXLPDEHKRHAEZKKGNLDNOHNHWVJYDQCCUVZAPWUIGPUBFYGZHPJBMHRBMXLIUUPHCLDJJJLRZKPZZNJSMRTBWJRSKOGHSQYYIFQHWMNEPMMGBAFSXTEQFANCOBLOEKTAYOBXLUFQVICOYIRNWAMXRRS");
    tmp_msg_0.start_man_id.assign("MKUTTNCVWOUWQXXHLAUAOO");
    IMC::DissolvedOxygen tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7000697826227891;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5298132342391432);
    msg.setSource(42916U);
    msg.setSourceEntity(32U);
    msg.setDestination(20371U);
    msg.setDestinationEntity(208U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IOVMPNWCRRLDSAMVZZGPUDKANYXMBKJRYSNBVMXBUFMSPVDFMCYQLIQRNUEKPYKAALURPECHECEQSYDGIXXTLHFVXXGCTKRJWWPCMTTGTVCPITMHVHVQJQSWAZOOHKDUZUYCTTGFALRNRLUZKBSLWQZYUBKIFKTJRWBGLOMIJEOMOFLPYNQFSINUPEZWEFH");
    tmp_msg_0.description.assign("WLADLHYXJQSQBZNSDXGNRFSLVSPBSWEFSARXYHQELDIRATDUTTNQMUMPPVWVCVOBQQHCQACFDWZNPKXJSWFMSHVWLKDVJQCBCHJUDJUGIBKHGNZYYFHIOYJMGFITJOEOWOAABYGCOPZXVRCADUPYZNZIYPUKAZUFSEHGINRKTFTNECYMQLEKKJHNLBECOMGWCPIE");
    tmp_msg_0.vnamespace.assign("IAKZGWDBWHMTGRYEPBDOPDXXKYKRHXTGTWRMQJJBQNXMXTIZMOVUSCLAAFJLNVYZQJULPHEGGDHYQTIATZBEYKVNISQEUXDSLEIUFNUMFNVNBKVUXNYIWNPCSISBWGTRPYOCRSDAVZLFAKVMOQOAPXFKARLAUMQSADUWGFQMZURPXEVKYJOWTFJHEPXCOJMLKIHWSBHV");
    tmp_msg_0.start_man_id.assign("FGFLCIYHADXCQKTHICCOUUTSNRDUVXKXSZDVCKOVRWZMDVYRJXEOQJKPWADWYIOMTDSFEMUTWGGDJPWNUZFROEZHJAXSREZRURICTYBMBLQEZXQSVHFMNQNTIGGRDWGOXSTJGYPSCGZXTMWTYUSIQBBYLADPAZPNJMJUDFEOIKBPKWFCPSLETVWFVNNEAHEOGYHILALJUJVLUVQJZX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RGBQLZGRSIFYXRHUZOVXDESFMFPFMMDJNGJEZEWAQNZQVZCRFKGIKYOOIHWJCEAXONBCJNIOAASMIBLZLNLCYOANLFUMTPTGHWYTOLSXWSGEVNOKLEBVMFKUDXDHLSDHCPJGBTDWCZIHMACFBHRVTKODASICQVXXUYTEFRBZDUTDHPUUFBKNZQSQCSWYIRPMJGVAHYMYPQJUNHVKBPKQVGQVWAR");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 50430U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("XWHZSIEZNQBVTGHOSVHFMUPBMHRYDARSZHYOMJUQNLDTHILJWJJEAWYOUSAPIMPERNQZLJWDTNBO");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ASDRVOLVZZEAURWLOMFRPZBVYHTEUYAEVWZVNNOCCXGPMJXMBEJKLDQAHKHLMRHBNGHPBZIYENUTPWGWPOUTODBHFFUFXKINCBJFNTOZUAPUKEPQUCAMIDIYSKTVQLWCA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanStatistics tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("HCQGIFIETKKQMXJRVCOHOUZDYECYXJGTUTYWHBSDSLDQYMYJGWZQMIBULWRCISNNHPFJYKGANKKDVMMCIWHPEZTNU");
    tmp_tmp_msg_0_1.type = 237U;
    tmp_tmp_msg_0_1.properties = 184U;
    tmp_tmp_msg_0_1.durations.assign("JWHBASBEAMYBGXQWVDASHTRZVCSQHGQPCXIBELGFZOPALWXQBIEPFRKATLADRMAIYDUEDYDKZMUHVZQLCIGAUKXZTXJOJRIWBTTENUWGIBRFRJHCGXVREVBIXCWE");
    tmp_tmp_msg_0_1.distances.assign("UIJMERYSGKAISQJHJOAHWZVUTRSVWMHFDYYVQVHAECWNAHSMBPRACTZHLNSYXMLQX");
    tmp_tmp_msg_0_1.actions.assign("AANEISTVETHAXBJELQWFUIXXGKZQYAGJTLWLRDFRVXMPJMRHIENIQTNPUQWBHGZUGXCGNUOUGTEKFZMDNOZRKDBHYJPYSEMOMKZZBZOYRTFUIKDJPTTFIYALKYKBBAQYGJUCCRLGHKQFPLRVPCLSUVHWXXPWRVSDIVWAEVFKKHDVBMEJYISBXZUNYAORCZACFLCPMACMJFLXZDONUEQRJWBOSDQGBSPGOTNSMNNPHVWWDQSHWOLDVCMH");
    tmp_tmp_msg_0_1.fuel.assign("UABHZUFBARNXDVKQSHZTIPWMJGXVZHKQDEEADPNEUWCCRYLTTOLTDHDBIQXOOYEXYXSQLKSJZAGNHFKSHFRPTRGOVOVKMHTBLTJXPZBAJEAXSCAFFPCLCGECGNYSUQVKTPIMHDIWUDJZQTJYEUMNJOWMYFNRMDBEMIKVCZZRFHYSPIWNAVGKUWOBBAPJOZBPXSINWFWMIICNBLSRGUWARDLOFNRE");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.5717397134402447);
    msg.setSource(60414U);
    msg.setSourceEntity(236U);
    msg.setDestination(54051U);
    msg.setDestinationEntity(89U);
    msg.command = 215U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SFVMFIEPWXQOMYESEXZVTYCTBEVWTKORSZBDNKKVXOTLIFUQZTXHQGYZGUCWISKINKVNAEYKPDDQIDFITHPMZNJZSIPTLFUACWCJKVCLNWSXYSBHFDGMANLJXWOXGELUAKGLAFWFDZXIQLPE");
    tmp_msg_0.description.assign("NAHSJIXMGAWADZMTYBTRNYOZDJYQKSZUSDPTAJGAZFLOYMCDEEKVEEHVVTLQVXUJXMNMURIDXLMAZVIAOHCVGLWZHJXJRLCQPRPRUKFDTFHURZNNHJCATRQGNWHEBOGUCJFQLCDOZONCFYLNVNEBYOIWKHBDLTAQTWQBKIESKSZBRWFVFIWPBKVSPCBEFGKJDLERIZF");
    tmp_msg_0.vnamespace.assign("XRUBMGSKEVZPGHPZETXAJPAOXRPTIEGJTBDCSNIZUBBTQKHNHVFXAJKEHLYDGDZSBFUYXFVDOFVDURDIGJZKURHERNIOMMKZFOOMXQOWRVBWWQOAFXHIBCRVBMC");
    tmp_msg_0.start_man_id.assign("ORBBMNFGVFPGXYDSYESCWEHKVYCCMNVRFIHDTTHWATDOVGBYSXAYCHULYNWNOYGQADHFJDHZFKBZTXBWCPVJALORUNKGRPDVCFSNIBPPVCMJSZEMEEKGTUAPBQVTJQUUMPBMCSPAHEZEJFESUIMHLUTXXJYQIKZDYDTOVEWBLIAVK");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DUQJIDISIXXQFMFTAVLIKIGTWCNFTVMPGGFBHLXOCCLYAQEMBWNYTEXASTCWJGFBNDVMPYRPOXEBYJVGKYHQKJUWPYMPTZPZBUWGOEWQARKOLSHFPJUODBKJCVCF");
    tmp_tmp_msg_0_0.dest_man.assign("PAONMPFBJFLHNEQITKRNZTSDZLFSZQHBMVWBIUQZSZITBUXBQXXEALRRPKBBRBTJMCBBLJYGLHCWOPSWDINSHEPUTAULNQOCCJKSMVELGFCJISXNKEAVQRUJKCJQQKQDLXGYIXDEIPGKMSAAPNWFDMRDFDEYWVGFQXVRLDUDXAUHXPHAMDIWZY");
    tmp_tmp_msg_0_0.conditions.assign("CNQZWSORACJDYFTOUJRXAFHPTVBAYMQALUKCZWVVGHCLCWPGUGSDAMPEMWTAZWSEIFSCPKLIGQIHILRVBIBYQBYTHZFYANKOVGAXJMFGCTCZDOJWINGQDKSEIGJJYEHYOJIDEPKYURXPUGBPVLEXMMXBKEXSLAVPRKNN");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 47151U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3732524366188915;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.294803535529344;
    tmp_tmp_tmp_msg_0_0_0.z = 0.13937339835376683;
    tmp_tmp_tmp_msg_0_0_0.z_units = 78U;
    tmp_tmp_tmp_msg_0_0_0.duration = 7399U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.37033639404722163;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 178U;
    tmp_tmp_tmp_msg_0_0_0.type = 87U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.5035687305677577;
    tmp_tmp_tmp_msg_0_0_0.length = 0.022136053931928745;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.24344059660981787;
    tmp_tmp_tmp_msg_0_0_0.direction = 112U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DXBIYSANMPSZWMVXJVRIOGTIOQUFRULBHCLIBFMUBNXDWDYCXOGQBCVKAYEXSTYZEOIAT");
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.2950628103933235;
    tmp_tmp_msg_0_1.beam_height = 0.8320980189100631;
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
    msg.setTimeStamp(0.6624822767562583);
    msg.setSource(39616U);
    msg.setSourceEntity(138U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(241U);
    msg.state = 94U;
    msg.plan_id.assign("LQPYFLJJYTIENCWBQTYDNZIKRTYZHNOXVXFZQVPUVXTLAQWZUDPIVJHZLHMTMELMNSNIJEV");
    msg.comm_level = 1U;

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
    msg.setTimeStamp(0.283630017339212);
    msg.setSource(62928U);
    msg.setSourceEntity(22U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(181U);
    msg.state = 120U;
    msg.plan_id.assign("URTJJPBSQDIHQOZKFQVIGYLPWZLPXDOSFZRKILUXRFQTBBOKKIMKIUTUTAZVKRSJPPBJDSTYGRVBEPGLBZNXQZOEXHEXGZVMQIHEYNH");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.2625215876063922);
    msg.setSource(33806U);
    msg.setSourceEntity(230U);
    msg.setDestination(20699U);
    msg.setDestinationEntity(78U);
    msg.state = 196U;
    msg.plan_id.assign("ZSNMVGKMYHOBNXSKCIMREHEHFUQIIISNTTTKBGGHGUZGYZMSQBSYSLERFMFUCMPGJAMWCMGCKXQPQIHKODWUGAGHAXWEIYBPOYZBCPCDTIUFJWTZXETZUJJXUPITRCPKUVKAZIDJTLJJXYPBLVDPKWNXRQLTLRJCFLWZNKWXXPACFNOLVQAWNKNWHYSVVVPOSEQAXONHHEZVH");
    msg.comm_level = 34U;

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
    msg.setTimeStamp(0.3719671350309893);
    msg.setSource(10288U);
    msg.setSourceEntity(196U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(6U);
    msg.type = 50U;
    msg.op = 105U;
    msg.request_id = 18006U;
    msg.plan_id.assign("HRCBIUKAPRJJXXNIFABTZZITDSSGZBNCWYHIGBPGMLUUDSAFMESUWMOGOLEUKPVHUDOYAHCRMRFTIKLVHEXCYRWCZLBGFHSFGNTWPSVETGOQVRUYJYMIZQZDWLKTQNFZLQBKAFPPCTSTVGPXCZORMJQPNFNKPKJETVOCWEAYIWDMATURNXVLSDJINIURBIBADLXLAKKOJMSFHJHOEVRACQYWOXSBXHCW");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.longain = 0.5298024338200904;
    tmp_msg_0.latgain = 0.24297941487236463;
    tmp_msg_0.bondthick = 6711698U;
    tmp_msg_0.leadgain = 0.043558886673542796;
    tmp_msg_0.deconflgain = 0.6529929433991447;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VTINVNBHNMYRDSKSRNAYOQFEWSAPUZHXRGWQVDYAYTZYJGSZSTKUEOIKOOWKAKVCDZEBWKOLDIBMOSRXHWPGUFVMTTLEYS");

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
    msg.setTimeStamp(0.8998858501915954);
    msg.setSource(4278U);
    msg.setSourceEntity(119U);
    msg.setDestination(30021U);
    msg.setDestinationEntity(201U);
    msg.type = 153U;
    msg.op = 190U;
    msg.request_id = 15490U;
    msg.plan_id.assign("DXLQHRJYABWJRDKNCNHBZFAIQDPCUCTTSNUNEMNCPSQOAHZOYVVIVRVDGNLJERVFHDITCKFYXAGZYOMGBVOCDFOOZOPJXAEUSTWYGUMPWSKUQPXBLBXPTITYZKZUCJZVYGAVKXERLRLRSJIVMNJMHEJPPQYOGDMWTQKIFXPGDWBLBHMMWHDZDTQIAEWIITSAOCQXJULNZZLAFJRLFWBMBT");
    IMC::AcousticMessage tmp_msg_0;
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 7295U;
    tmp_tmp_msg_0_0.lat = 0.9701090134638336;
    tmp_tmp_msg_0_0.lon = 0.6020718683367046;
    tmp_tmp_msg_0_0.z = 0.8925988939030763;
    tmp_tmp_msg_0_0.z_units = 122U;
    tmp_tmp_msg_0_0.speed = 0.6641372809141083;
    tmp_tmp_msg_0_0.speed_units = 155U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.9478415392448363;
    tmp_tmp_tmp_msg_0_0_0.y = 0.18275375517885106;
    tmp_tmp_tmp_msg_0_0_0.z = 0.012779374172707247;
    tmp_tmp_tmp_msg_0_0_0.t = 0.9382605785428944;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("FOYRRHPTDCBTWMGSBHSEGUOHMBMJKCJPSMCEMKTQQEOLMXLYGPUZOIVSGEUAOAUOBHIVJNKPLJJWLJHIVQWISDEYEKAIUHITYBSEAUDFNTSGDETZLGBORKODPKBHXQJVAXLRGYRWCHJZIQKNXMIFGPWQZUCUEWOUGXNFPERNXPCBLQNMTCZPKMKDPYIBFUZXJIXDRVZWKZSQAQSAMYNRVQFHLYLXAFOSLAVDCWYRNZWZFY");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OEFTTSXEPQUATZJNADRSBMLBESEMGZPBMPSVHFAYMLRSQJLEKMLQIUNUJXFPHGGJLXPZIPVLZCAEAOYQKWLYPSMEQWAYOZWRTUCPRHPGDMJDXWMVOZIRHEXRZFJIDCVXIPDNKLXBCYYOHBWDCUNIFKTXDQOKRCSAQHEBJKQGUOTYDGOVJRKDHSWUNNWZWMFBVGKFSYHT");

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
    msg.setTimeStamp(0.109369660829288);
    msg.setSource(39703U);
    msg.setSourceEntity(45U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(254U);
    msg.type = 16U;
    msg.op = 239U;
    msg.request_id = 46275U;
    msg.plan_id.assign("BXDNKGQPWOMGPXUPAFNQLZQRDTLLSVBWQSLAJNRZUTPXCMKTAUSJLWDBLN");
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 203U;
    tmp_msg_0.comm_interface = 61344U;
    tmp_msg_0.model = 26898U;
    tmp_msg_0.list.assign("VTELULELQMPMBULFYTVGJOSVIVVSWVWNHDRNGYFDUWXHQYCOHSVBUVZFOMWOPRWAYHJCZXHIGIDRKWAWKBQVQJAY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JAWZRVDWCDFBFBIXHQCVWUKJOSPTYALYMTBTNHLPAKUDRIVSCMBPJJJSGANUPDOBANFXOSVUFDHUHESDKZDOVZKKJOZIEWDDGGXVGUXAOXZYCZWZEEQNXAMQGJDUNILTZOWIINESJHNKMTRPRNKUBCKBYESANPFCCRGYVTQCLZELHRGTIABCPYYFBFLRHEMITKVAQHGOQPKG");

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
    msg.setTimeStamp(0.8369921412043294);
    msg.setSource(31124U);
    msg.setSourceEntity(156U);
    msg.setDestination(47365U);
    msg.setDestinationEntity(240U);
    msg.plan_count = 45222U;
    msg.plan_size = 1461210319U;
    msg.change_time = 0.30636814383857425;
    msg.change_sid = 41652U;
    msg.change_sname.assign("HHQRBPJKQNEJJCDJGZNZYNFDZMCDKFURTLIJNWWQIOSUVSQFGJLYLTIZXHSGPMTMKLTSBYUWVOOFSPOVNTH");
    const char tmp_msg_0[] = {-90, 120, 23, 125, -24, -47, 26, -82, 39, 60, -21, 22, -54, -80, -10, 63, -96, 101, 4, -57, -92, -28, 124, 72, 68, 63, -106, -101, 85, 13, -113, 1, 26, -17, -105, 126, 36, 45, 58, 95, -127, 104, -75, -20, -68, 15, -90, 44, -21, -68, -85, 115, 52, 90, 7, 117, 31, 46, 99, 29, -96, -93, 97, 22, -31, -94, 77, -68, 101, -48, 118};
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
    msg.setTimeStamp(0.0010255350565435695);
    msg.setSource(47555U);
    msg.setSourceEntity(219U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 47967U;
    msg.plan_size = 181513498U;
    msg.change_time = 0.9811321632022318;
    msg.change_sid = 53594U;
    msg.change_sname.assign("BCLPOXEATACSGWOTQRFCDQNYVMYALBFWDFCTXHHTUCNJDUOKPPENAVMUWHZYSGGBBPKFGRLWCUNVU");
    const char tmp_msg_0[] = {116, 66, 126, -119, 32, 49, 53, 27, -124, 24, -125, 100, -102, 38, 103, 13, -30, -95, 78, -26, -100, -120, -127, 61, -82, 46, -5, -66, -21, 68, -20, -61, -66, -87, -23, -11, 4, -18, 82, -108, -19, -42, -49, 126, 87, 40, -33, -64, 9, 122, 49, 108, 6, -30, -6, -39, 57, -67, 20, 102, -60, 109, 23, 2, -35, 41, -117, -71, -89, -4, -7, -61, -98, -26, -88, 105, -60, 78, 50, -124, 92, 92, -14, 95, -78, -37, 78, -111, 94, 1, -123, -112, 25, 101, 42, 121, -92, 125, -117, 61, -104, -27, 5, -103, -26, -48, 95, 53, -91, -5, -46, 13, -65, -96, -20, 111, -73, 43, 94, 88, -41, -2, 16, 123, 122, -15, -54, -91, -110, -29, 125, 37, -57, -89, 25, 30, 91, 38, 124, 35, 57, -96, -106, -114, 81, -1, -21, -73, 9, -117, 76, -84, -1, 85, 86, -120, -122, -55, -29, 84, 48, -46, -26, 82, -75, -107, 70, 31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZYSKRIVDUEPVRXBRLSJFEMOHVDWPUVBTNFFFZOOVCHAQAWNTABYLMMHNTXLVLAQGJMFOQAHHJILFRBNIQBPUFEWSYULESGDLZTJLGUTUWSYDVGZIZBARDBSCHVACNAWP");
    tmp_msg_1.plan_size = 58706U;
    tmp_msg_1.change_time = 0.8084447597636768;
    tmp_msg_1.change_sid = 16841U;
    tmp_msg_1.change_sname.assign("BENJNHNHUCMRXFPHVLIRAQQZZBJTIWGMQAUNIHZUXTTEWOQJJFUJGSTIYHIHFFBJAUBRZZKXIQPDLEDGWYAOAVOMDUBMZEVWPOQYNYQWNJDKYBMTKMLKSJUYEOVOYIBKBCVLFKHZ");
    const char tmp_tmp_msg_1_0[] = {21, 12, 95, -7, -18, 41, 10, -70, 106, -83, 31, 82, -116, 47, -58, 108, -108, 92, 2, -88, 95, -92, -78, 18, 32, 96, 73, -59, -19, 17, -118, -72, 56, -62, 12, -45, 65, -41, -10, 53, 35, 22, 124, -31, -97, -66, -55, 105, 93, -10, 1, -86, -3, 110, 5, -100, 92, 31, 26, 93, 67, -42, -123, -85, 92, -93, 43, -119, 21, 20, -89, -26, 77, 8, -106, 8, -23, 14, 52, -76, -3, -52, -69, -100, 19, 25, 49, 19, 67, -15, 108, -45, 24, 92, -19, 56, -60, -54, -106, -55, -54, 18, -81, -63, -32, 92, -50, -21, 17, -10, -86, -63, -39, -113, 103, 117, 16, -21, 98, -70, -94};
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
    msg.setTimeStamp(0.972314659079838);
    msg.setSource(49261U);
    msg.setSourceEntity(110U);
    msg.setDestination(27788U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 3188U;
    msg.plan_size = 2739327412U;
    msg.change_time = 0.5926008324971255;
    msg.change_sid = 20962U;
    msg.change_sname.assign("GBBMNYWHTPIATDIVFHVKGRDDLFALHUHV");
    const char tmp_msg_0[] = {5, -96, -119, -19, -48, -42, -56, -25, 48, -66, -104, -26, 15, 48, 3, -35, -51, -113, 76, 98, -114, -76, -48, -104, -54, -124, 12, -67, -21, -15, -110, -61, 113, -35, -128, 34, 40, -121, -93, -79, -82, 4, -62, -40, 35, -128, -91, 75, -3, -120, -6, 91, -120, -73, 17, -71, 106, -110, 111, 54, -119, 40, 119, -59, 42, -122, -100, -87, -29, 32, -79, -99, 22, -115, 22, -120, -24, -51, -97, -17, 37, 51, -120, -37, -125, 0, -91, -47, 78, 96, 25};
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
    msg.setTimeStamp(0.09213386898655429);
    msg.setSource(61396U);
    msg.setSourceEntity(108U);
    msg.setDestination(34560U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("MTXQUYYITZKKEPMHNDRUFJHUOZGUGBYPOATTZQSJKKABYKJHPNSBALLQIWCECZSGFYFRPXGUFOYNEVEOCSFFHAWJPPLHVMXBQDXMTBJCDKGUUHPUARMSAZKVMNUGZYNZRDCHWDIXBJSWQKFSOED");
    msg.plan_size = 1561U;
    msg.change_time = 0.642685383457074;
    msg.change_sid = 35787U;
    msg.change_sname.assign("HOULOIMHKBELHQSDVI");
    const char tmp_msg_0[] = {-63, 1, -15, 6, 107, 38, -54, -61, -82, 10, 65, 33, 75, 0, 52, 122, 53, -112, 113, 47, -48, 60, 84, -51, 79, 34, -8, 116, 117, 95, 98, -82, 13, 45, 60, -27, 35, -2, -125, -82, -83, -126, -14, -50, -75, -72, -106, 10, -17, 126, 18, 15, 119, -80, -4, -98, 82, 101, 28, -29, -22, -5, 105, 48};
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
    msg.setTimeStamp(0.9135518914288295);
    msg.setSource(27616U);
    msg.setSourceEntity(33U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("HXQUAGBYKHZOXURACTTTXTPYMBSLJTCGXLIWCWGKGNFGCVRDUSNRJWZBDEGWKBEVGOENWVFEYMWIHGAXQJGOPJYDKRVQEYZQADKKVXTLYVRDDONDWDHB");
    msg.plan_size = 47817U;
    msg.change_time = 0.7241772118070722;
    msg.change_sid = 33340U;
    msg.change_sname.assign("GXAQAZLKVGXTPOSBRYYCLIZUKQZFKHDJEKSPWZVLACNCOBZTAWHOJFXMUDRQWXQQTNEYDTIMHLTIFJVEUDNYQPCUAOOYIVIWVHKCSLDBZEBKGQXEEBGIYHVBACRQOHJZRSXSJCFNGHXUEMPRAGJXKMCZPBNETRKITSROMULNOPSYGMWGOULVJQCUCNHKSTINMVLMWVJWLQBFZKTAGWXUOPHDJNRDLMDSMRBREEBATSFVX");
    const char tmp_msg_0[] = {58, -77, -78, -18, -33, 29, 65, 87, 64, -49, -64, -23, -18, 10, -123, -22, 95, -87, -126, -58, -7, 66, -25, 102, -76};
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
    msg.setTimeStamp(0.5078945522561994);
    msg.setSource(104U);
    msg.setSourceEntity(254U);
    msg.setDestination(22640U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("TNABYMBJSTZXXXROGBCAXOCMPEAJVRMQPGVRQHYZEWDBHNCNUHGNZJADIZXFESLNYVFPPUKUYNEQSCVJCHBFUZYASUMNDYTWROBEWETYGGMOWLKXSPCOFFZNRTGP");
    msg.plan_size = 42166U;
    msg.change_time = 0.7045624101902414;
    msg.change_sid = 61834U;
    msg.change_sname.assign("BLAGUTABBKYLDSDQRAQGKMRULHYTTCTWULYEMYJCQIPDQJVARBPALGUBOJRPGBUXHDMTMJNAMZYIDDGAPPYXDQVGBJOKKRNQCIWFVYIESWNJFUUNZAVLFSUKWKFYNBCCZOYXFFXOSQVPGWPLIPMRACXPEUHTFSTEHEZCTTJERDKSFKSHQIEJCFWZHGLWUMCPCGZOVZRSFRVMEWBZBXXENIVNINSHKVGRMODWODVXSHXMQOLZK");
    const char tmp_msg_0[] = {38, -115, -88, 24, 50, -25, -61, 67, 47, -102, -97, -77, 107, 44, 93, -76, 77, -81, 100};
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
    msg.setTimeStamp(0.45440623926533896);
    msg.setSource(33198U);
    msg.setSourceEntity(131U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(245U);
    msg.type = 113U;
    msg.op = 219U;
    msg.request_id = 40355U;
    msg.plan_id.assign("NTZKXZPBEETNTLEC");
    msg.flags = 51720U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 8623U;
    tmp_msg_0.rpm = 0.0709539047044484;
    tmp_msg_0.direction = 104U;
    tmp_msg_0.custom.assign("VPFIUSRYXSMWHUKVFMHIAAWTNAYGCCYZDRDFOCXQKFXMWVBCRGWDDHAJCWSLFYVBCRBUVMNGEIOQXZMTMHEOBERDPAFTKUTPXYTRNQZEBTFRINTCOYJPINBNQPZVNTPXUACIYHKAFEMJSDVMZHRPQJLXHZMALEHITSUKDJXNLWEPSIBOZLLCLWEPJVUGLKBXAHWIJYK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XMJMNCYLYNVVCFTRELCYUYZJNZQCHMJMRUCTOWQDXPLVVMPCRGTJCRKTKEJGEUYJIFTBRDXTUESFTGKLSOEMFVOAFDKXHCQQGNGRGQPZZNQJAAHHUWLOQWGFWMON");

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
    msg.setTimeStamp(0.9917817803108397);
    msg.setSource(58369U);
    msg.setSourceEntity(6U);
    msg.setDestination(58566U);
    msg.setDestinationEntity(9U);
    msg.type = 5U;
    msg.op = 61U;
    msg.request_id = 61836U;
    msg.plan_id.assign("MGKIGALFUHPLBCZJQKXTSXYNJECXDBKKPVERDZUYUDEQNQMDIXWXCBAHLSITNWRYHVBAOQMSILGDHXCXLKCURBJDWABUKQVRUPKZJZLPGEWTHCHOSQNGJGAGDZJOCOVFAFLNFXVKFMCNTEFPFNJCKBAMAIFTVCBAYTLNNSMYMSHWOXJREIFOYEZBZQUDVPMMTVSZUKJ");
    msg.flags = 54273U;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 249U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWXDNYEWIVVILJEQDPEMXRGXJDSFKADYOLYVADJJJGFBQNJQKNAURZLVEKKPZXOUMQZWBGUBUHBBGGIUFHFEPEMCEHCQQPLLNSRMDVBISQMXMNZBSMWRWSTBCGFYZAOQJKXZNHTTJOGOCDWHVLUGSYOCPPJIPRUKXMAHQYSRTOLLLVRRCZVCDDZIIPASIATESAVNCDEPZWOBFYUNHYBXAHNZTWJKQVGEFHOYSTRUF");

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
    msg.setTimeStamp(0.6542234392124379);
    msg.setSource(12977U);
    msg.setSourceEntity(151U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(184U);
    msg.type = 185U;
    msg.op = 236U;
    msg.request_id = 53000U;
    msg.plan_id.assign("TBDRTSYFIQX");
    msg.flags = 26648U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2146926729U;
    tmp_msg_0.start_lat = 0.24990430248778794;
    tmp_msg_0.start_lon = 0.9398341784163684;
    tmp_msg_0.start_z = 0.7434510033094511;
    tmp_msg_0.start_z_units = 136U;
    tmp_msg_0.end_lat = 0.22621830807582033;
    tmp_msg_0.end_lon = 0.9762852686328641;
    tmp_msg_0.end_z = 0.150506793216601;
    tmp_msg_0.end_z_units = 244U;
    tmp_msg_0.speed = 0.5651326042676458;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.lradius = 0.8715365351607005;
    tmp_msg_0.flags = 68U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FUHPMZIFHCVWBHSQJRVSQGMPJHXHQZVSFEIFXNYTWZLKSKXTIZWHMYVEOKYRFPQUKNIRLBWMGOFMGRZHAXCROKNPEAVCOTQSUKLCPNJXUKKSYWGZBNKITVKXMDIOIIHALHDURPNHAIMMSOUVDMUADCDYFWCWWMDERYULGBWDDEQOPWPYRBCNCNTQSXTBJTTCAZUQTEJFGJXBYLOXAQTLXGVZBLGEZBLYOA");

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
    msg.setTimeStamp(0.2185373016417278);
    msg.setSource(56268U);
    msg.setSourceEntity(180U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(26U);
    msg.state = 90U;
    msg.plan_id.assign("UEYJOLEPCCHQYAYIVEUWNWMXDGJAVODGJFTEBM");
    msg.plan_eta = 454813624;
    msg.plan_progress = 0.5683073142287939;
    msg.man_id.assign("NCWFNBXBLXUDPIWSXHAROWUIISMG");
    msg.man_type = 63324U;
    msg.man_eta = -1812341301;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.7188741942942607);
    msg.setSource(64502U);
    msg.setSourceEntity(243U);
    msg.setDestination(40088U);
    msg.setDestinationEntity(129U);
    msg.state = 30U;
    msg.plan_id.assign("XXCNWVBGWBCTFFMZKZARXYQJTQNFQYGDESRDBCDLXLSYLOPVXVZMHCEXEHJGWXANVGCVZILFVASWAESGAMMAULPRKITESWLOIALOZADYQGFDPYDUNIDHPCNJRDYOTTXUMCMFBHJOXJPSHBTCGLWOBGMEZRWJQUDNYPKUAICSHQZSJGPZQKFRUDANFMUYFEKJBBMKRCVOVEHXJP");
    msg.plan_eta = -2130775422;
    msg.plan_progress = 0.62158713387528;
    msg.man_id.assign("SFWGUKMITMMXMQYDNZRIOTNMLBYCEAVWQCNUEAJXPDGNIZSME");
    msg.man_type = 62446U;
    msg.man_eta = -2134877441;
    msg.last_outcome = 109U;

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
    msg.setTimeStamp(0.06331468718776712);
    msg.setSource(6989U);
    msg.setSourceEntity(252U);
    msg.setDestination(44192U);
    msg.setDestinationEntity(52U);
    msg.state = 132U;
    msg.plan_id.assign("OQTWUECTMIHSGGPZQTWSZLTPOVCDRCGDVABRCRKSLBNDVQBRNXKOXXLGDGDMOSRUSBRLQJOYMYJPTHZYUGMWIUDUPKKFFUJFLBZEAORXVEJHWLUXYIECQUQQZIKTVQNEBMGHVKNKZKQHBXALYRVXJIMISCRNCWHGWYJGMXJMWFNNWSIHVPEQVHCVIYFZWKUFAPADEBAADYATSIEMEFBLLJJTZLPTYNEDSCSHWDFKXBINFJPFGCHOAZPOTURZNA");
    msg.plan_eta = -1759958451;
    msg.plan_progress = 0.4644421718789784;
    msg.man_id.assign("LQEGCWFTRGADYSWXWOLLYXBHPLUCEDAXIVJYSJCWTTAMBEORQNXG");
    msg.man_type = 35721U;
    msg.man_eta = 886889826;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.11278480387221301);
    msg.setSource(47537U);
    msg.setSourceEntity(145U);
    msg.setDestination(16560U);
    msg.setDestinationEntity(196U);
    msg.name.assign("YBUODJNMWSLUDFXJZFQJPOKARLHGBGHLKCYFMTRAOZVMUM");
    msg.value.assign("NRJMNPAEYWBEFQZSSEYVQUXYCYZUHJSCXHZYBPKOCBIHOHMYPLYDMEXBZIBJULESUUKDOGCNDTMXGZVEWLBAGKARTKSIOXRQFWMJCVFZXTXWRTRPPQVHVJPNARSRGWTWNGOKRMGPKKZDUAMVQEQXTVJLFJHADFQDSFWOQIUZMNLPVHALFJW");
    msg.type = 140U;
    msg.access = 219U;

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
    msg.setTimeStamp(0.7955246942467208);
    msg.setSource(39767U);
    msg.setSourceEntity(20U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(180U);
    msg.name.assign("EAIPGSYUOFCTDVRZFVTNLWPSIXSBTJOOTCCMGNXOUKQDMEUXMBAKPNPAL");
    msg.value.assign("VBTGVUFGSXNHISSDGMJUIYOJOYDRQZZPOVSILPOXEPEAZVUGCKLYUPOUHJAELDHJCWCVOPQSASJCNORNNTQTMGJEPJM");
    msg.type = 173U;
    msg.access = 119U;

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
    msg.setTimeStamp(0.704075052280999);
    msg.setSource(12812U);
    msg.setSourceEntity(40U);
    msg.setDestination(20221U);
    msg.setDestinationEntity(4U);
    msg.name.assign("IODWXKZRMMGZFCTDQOQNUUJAUUXKWNLQENMSDFZQUAJAPGFPIHZJDJXAYUYLISOKYMHQEXCZWTZQJDVSPKLXOOHOVFTSZLAHXM");
    msg.value.assign("NXBMRZORDVJCVYEQSXGRUKSFGJTJFLHLNVBDZOMWZGEONAOKTVQVWNADNOZWVMSKTIPECXPQAXDNWPOLRHZKUKYUECEIAMQEHP");
    msg.type = 200U;
    msg.access = 71U;

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
    msg.setTimeStamp(0.7754898259227142);
    msg.setSource(5188U);
    msg.setSourceEntity(229U);
    msg.setDestination(33591U);
    msg.setDestinationEntity(19U);
    msg.cmd = 210U;
    msg.op = 146U;
    msg.plan_id.assign("IPAWKCDMACUDFCEDSBFZIXZGMLYDDGOZHEFSGYSCTQNNFHKUZOGIRHOTGSRWOTXOCWNSFWKZBLANYWLRVFNXUNNVDQZRJVCAJKAPWLVPRONIECFFPYPTIZKBEWQBPQGJIMTKZHIYRSOHSVUOCBUATUVGSVHDWXTPBMLWVNQBO");
    msg.params.assign("XSEAGIETWYPDPMBCTNFGZRPUQUVRJKLYHCXHHYMWSUSSJRAISFLRFGALNLIXLMMXYBFANFXPBZGHVZKRQVEYAEENQDVOHRQVXUGDINUGBCJKLSOWHZZKGOAZRPLTOOBJEMBDKSYBCZQANZJGEHNVIRPKHLWPTAKLCWQXCJWNWYUOVAFE");

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
    msg.setTimeStamp(0.3215194506206386);
    msg.setSource(34209U);
    msg.setSourceEntity(105U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(188U);
    msg.cmd = 170U;
    msg.op = 44U;
    msg.plan_id.assign("KQXUTZXAUFIGTROHYXWYJWBSAUVLECTGXNWVPOWHCXHQBUHYBHBPPMGJSECQZDQRITSNKQULRLTJMRMENWDBMJJTYXUAVOEKJDPERYYLZXGPQPDPWIYNSVMMOZJDIGDZRYZSWOCVGFDMFLGFCOXDFKIHBJUWGIZXHKJLSYIPRVHSBCYKICHFTNIQFZOAOUAAVBWVTWLXNKKNRAAB");
    msg.params.assign("JNOOZIKRCNCTZDRSWLJGBRYTKOIAGAOSNLHEYDXCJSDJWMRVPYTRYBZHQVEAEJMSTUEHLOGYIWYXPKFLVMDFNJUFUEMILBLYWHLBCNHNDVY");

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
    msg.setTimeStamp(0.020952858687950604);
    msg.setSource(7995U);
    msg.setSourceEntity(107U);
    msg.setDestination(39975U);
    msg.setDestinationEntity(203U);
    msg.cmd = 55U;
    msg.op = 228U;
    msg.plan_id.assign("UOADZMFVGDTTSNJSPJSOMTIRCSBXEOCSAYQMQIAECHGROSPKSFDNYIMQPILPYOWRDWAFVNFHQELNTQEICNXHGVNJZFBFYMJSLAWMGPDWKNRZWXJLOGISXENPYEMUFKIGPFXWKAWJBVKDLGOLPQUHJRESCBXAYERPIHDDUZAUADHDWCVXYBHBZBIUWJFWLKXKHBMRGYQCOBITMYXVOLZUUTPCBCZQLAYOGERQXTKNTHVJNE");
    msg.params.assign("PQKZWQLTLSJRTRCI");

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
    msg.setTimeStamp(0.13265349239021063);
    msg.setSource(36200U);
    msg.setSourceEntity(152U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("UOUROBRNRLWATCIHNXQAUWEHTAFHYMNEFLTLZSNKGZMBSSJQRQKFCHCAJEADPZEGMQKTZPYCRVHBRMOMHICMMVVUEIICUXAPVSJQYSRUHBBKOJTDXWXUDCNJSPLHA");
    msg.op = 176U;
    msg.lat = 0.26231824701565276;
    msg.lon = 0.655178491815267;
    msg.height = 0.08851986799021294;
    msg.x = 0.5535581481761584;
    msg.y = 0.8728870214511485;
    msg.z = 0.9696789322881386;
    msg.phi = 0.4641191004607351;
    msg.theta = 0.22001109752414993;
    msg.psi = 0.5391409498904493;
    msg.vx = 0.70999476666599;
    msg.vy = 0.29905488259601687;
    msg.vz = 0.24430915715262047;
    msg.p = 0.733409590475908;
    msg.q = 0.363898827046084;
    msg.r = 0.1681735388653618;
    msg.svx = 0.18470061104430147;
    msg.svy = 0.5503905526083884;
    msg.svz = 0.22329685536335986;

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
    msg.setTimeStamp(0.05495245601377319);
    msg.setSource(44934U);
    msg.setSourceEntity(249U);
    msg.setDestination(6126U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("IVCOMTPAABZMZTLKCBLYHNYDQOJSXWAXETFXLFXCIVPIOPCHVDBKRNDSFGMHUOVJUOUQRHKTADSMZOBKSPYYDIZHJQDYTACWNMIRGHLLV");
    msg.op = 231U;
    msg.lat = 0.9361427588814867;
    msg.lon = 0.656677259776158;
    msg.height = 0.6374470960122689;
    msg.x = 0.6588785497679712;
    msg.y = 0.6947307620054849;
    msg.z = 0.3924898675929892;
    msg.phi = 0.011213574551627858;
    msg.theta = 0.5628353352997685;
    msg.psi = 0.7869725430424374;
    msg.vx = 0.6601575571886521;
    msg.vy = 0.5452892743395645;
    msg.vz = 0.7548005122944383;
    msg.p = 0.5125562807613481;
    msg.q = 0.641897069104816;
    msg.r = 0.5225318827171543;
    msg.svx = 0.5063409076137847;
    msg.svy = 0.3635930527275767;
    msg.svz = 0.11287529574867416;

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
    msg.setTimeStamp(0.28859345940302383);
    msg.setSource(16534U);
    msg.setSourceEntity(170U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("TBHPYPBGLKOCTBDYDPIDAYVHFPXKURFGMIEJCIRDHNMXMCQROZUJWEPZGSDMFWISKQPWRNZAUJSGMQLWHTGVFJLMVYWSEODRPQ");
    msg.op = 117U;
    msg.lat = 0.9483037038243931;
    msg.lon = 0.9377838092279954;
    msg.height = 0.3483146446739298;
    msg.x = 0.7308507421390738;
    msg.y = 0.8336718646720813;
    msg.z = 0.7167901155736184;
    msg.phi = 0.014104009788767358;
    msg.theta = 0.9168874786719792;
    msg.psi = 0.8260015482255796;
    msg.vx = 0.7791946415108421;
    msg.vy = 0.022620156867690033;
    msg.vz = 0.6016369633585583;
    msg.p = 0.9170493295006868;
    msg.q = 0.15385853563109675;
    msg.r = 0.6051780945910636;
    msg.svx = 0.5695768125144066;
    msg.svy = 0.42506117372982666;
    msg.svz = 0.4300434578250619;

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
    msg.setTimeStamp(0.3987946937649395);
    msg.setSource(36633U);
    msg.setSourceEntity(19U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("WTQWLTFKWRVAGOPXRKRXNCNIFIASCFLCQMZNLFYEGBPNAEXFVNIHGBBYPHFMBAGEDZDPEIUTXKSOJWHYYHYDBQWUKRDSCJICUPRLFYEAGUHGLVNTMUYPAOSVEQLJYUQZDZRYGVODAYVAAMDJEHSFKWQWSBGJRLPHPTRBQOHXKPIJXFPNIKCLHVOTOJNVXCZZQUXWLVQOHRIMNBSNKMKIQZDSXZSFBZUKJEEMMVCADJSCWJZOM");
    msg.type = 48U;
    msg.properties = 112U;
    msg.durations.assign("OSXYZFLFUEWBHENXNINTRJPSUPKVOEAAUBXBQVMNTXQIGCSORZVZZRRUSYFTFYLXBYZMDOCTEULGSYZHKDFUQWEYLDZJVQCNHBUYCFRLSJFFCGVWIPEFXWJJPTMDDCTZMJTMGAPKPQXQSGIBXQMQOHMGCBLRGDNCAYSILWAKEIPCWERADJTIKNDIPUNPQHN");
    msg.distances.assign("NWEXDOUEIFYWKVDHGRNQALQHISZBAJSKKZDGZFANIWJZNMZURXIUVXCRTVTCJSYQBXDUBRGZJCWQBXJDQPWKTYJSHMGHAPHAAXFIOEHUSFIMCOIDALWKEYCLGJVOKEPZPOHBXNN");
    msg.actions.assign("HHHSERLBDIONIBOTVNQKRVHCMOWJMUPBIOCUOLJVBECMYZX");
    msg.fuel.assign("TIRYVHNHXDN");

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
    msg.setTimeStamp(0.5421331480445969);
    msg.setSource(48564U);
    msg.setSourceEntity(106U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("KBHKDNKUJCRDANBVBPHCALITGXXRGAYQBPDUCPPBLWZIMVVMKZQTNOCYFOYFJGYFUUTKEOXZQXGUJYPGGETLNJMIHZNPJFVCSOVKQIAIJISQOXFJQFZDBXPBQTEMWODJLLEHYEYEWMIJOKFZDVZTWGQIEHLXXAOENMWADDRIXAMWYXLQRLWVCHZBNWMCHPOQYWYNSRRUDTOGSCTTBGEFRSLERFGC");
    msg.type = 112U;
    msg.properties = 15U;
    msg.durations.assign("CLDKVTRENKVRJQRNIYDCBXARNLUHOPZAZVWHLGOZGGJUPFYUQWFLQCQBHPIMIEUGYYBMBLRMZTVYVEGCBVWYAUIOSXWAPPINSFZGDWSJPOIEABPXKGNLKFMWBMQFCQGCTXXADWBHT");
    msg.distances.assign("HORMWXNDIRJEKWKTBSWDIITCSVJLRFAFKFZRZRXWXGLOIENBZPNUGLHLVJCPCLQTFRNEMBQGNYQSIJTEXIKODSOWVKCGAFFQTSYZSTWOMXAMFAERKQGMSECYJMKHUGQNZXOYUDAODLIZULFWQXPJPVLRDMBXWHNQRCHOFEKGUCHELDVKNVJGJVTPBZOQBXVBRJSHYWYYZIAJTUAEPCMSLDEAPBVGBSTPQTPGOZCUHMHNPDKNIBYFIYUDUZHM");
    msg.actions.assign("JVIGJPXWCROKZNDXSSFLKSTJSFSFRXESGXNKJOITFIHUJUBXDHNHKYVOKHVDXMYRWTIYOGSGFPDAONCQQMUMCEVDRUKLDGKSVBNAYRZFLLADAFCYMPPQQCJWQCWCMGAMUBTADBCTMAEZEAOPRPVQWJHVHYXSGZFGRDJCNQNIRILLZEFBWEYUOITMXUBUXWHLPLPTDETYORFCJTWOBOQJTZHPXIQHHPVW");
    msg.fuel.assign("TTROXERYZHEZPWFJUDRPTTUQPGGPKOLHVVQHOTOXBNBFTMWSPGBJALRAANBPOXIMRBEESFCUIWYKNNMHKQLMVCXUVDQEVLKQFDAVILSCIJSJAHGAWOFYXTLFGPRTSJHECXPTJDQACNZAZSJUHRPGJWMLKZKCEYACJPIUZRUHLOBWDNDWGZUYKNYMNXSZGGWLZIFYIOMNUXQWYDVUEVGQKBBIAFSJOSKSXDFKYZRVBQHRH");

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
    msg.setTimeStamp(0.8984284832486169);
    msg.setSource(32699U);
    msg.setSourceEntity(160U);
    msg.setDestination(2324U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("TIASPBXUIMFSCQYZZIAHRNAVTDPCWYHJFXPFBTQUAVXFDZWMZUYLBQCHYAEQSQTAMWRWUDSGACJRSBVWFCTMNHLXKSBKOWWZPLPOLBJCFZMXZXJFMMWIUGOXOARIIPFUKQJNNMYQHVHNSNKRYJDDGIELYATDDFOGBGUMTVREFHWNLPQOKJAKGVEHINLEOUDEEVIPUJKGTHZP");
    msg.type = 209U;
    msg.properties = 48U;
    msg.durations.assign("STMUBPMFXAZLQKKVLHTHOWUJDVEUORFFMJZRCWTRAYUWUATJFRWJXVSVRXPCHEKZYLVFQAEIKNGFYJTYCSZKSYNMOLSNMRDHHOQLGPBSKUMFCKTITVXIWGXDI");
    msg.distances.assign("UTAXCKXZAOWEVANGIJXLWEBEFIIAATQRYQTHSTXHHKVMEMUQNBVCLDHEDWMZQZXHNBNQAHGYRQASBJWIMBWGNRUCRHYIBRHSMGPCPFPYVZOKACKNOUBKDZJKCOVBJLYCJOTGWRSSUVTXVROOEMKUAUDMIW");
    msg.actions.assign("HXRDVCVLVQWRTVNBLIMQWAKXDZEWOGUFOKHRTUSLDPYRQWFDNVIIOGFONQFFBCDHABOZHRJVCBPBNMXHFQWFJZIYWPYCAJEPWMKXIERBVJSLLUPAUZTYGPUGMKBKXYHTTUGJLYEKSAHCCICZKWWSLSVA");
    msg.fuel.assign("TDWDUJWEGNUXKERHIYBUWSFTLXGHBLPFMONWQPJOTCKUJVOHVOLKPRGMJRHLXSUJXTZZHQVIYYMMRVLJWISOJRFQAGDGDDUVVTEDASHQDQALCTEFSJQAIOYACICRKDAKHQBGGBPOOEPAHALFYJVSNUMKNFZWKCVWYHMXQCMHBZJSWZXGXITPZVCCSMCFAIZPQNZYDUKSFOQENKFYXBZNNDV");

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
    msg.setTimeStamp(0.05771962226432881);
    msg.setSource(43549U);
    msg.setSourceEntity(194U);
    msg.setDestination(55369U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.18757720261591349;
    msg.lon = 0.6372860642363285;
    msg.depth = 0.9076506494229476;
    msg.roll = 0.4650479173017702;
    msg.pitch = 0.9730509074680467;
    msg.yaw = 0.7971126355358439;
    msg.rcp_time = 0.5013583306078316;
    msg.sid.assign("YDLJCIJNUEPBNCIQPHFSBYWAEBLWKQC");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.21647857600245302);
    msg.setSource(60523U);
    msg.setSourceEntity(7U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.4649905141743266;
    msg.lon = 0.05854337405612264;
    msg.depth = 0.6098886783148526;
    msg.roll = 0.7879157387539059;
    msg.pitch = 0.7305651744396442;
    msg.yaw = 0.6231527286193613;
    msg.rcp_time = 0.12558330205270896;
    msg.sid.assign("ZIWRVDLHYDLMHDZVPPNSCAAQABSJXGZBEKQALNPMJNBOCILGQTZUUMKVYJWBXOYYBWFPSVMHYMWC");
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
    msg.setTimeStamp(0.060831170737952855);
    msg.setSource(64390U);
    msg.setSourceEntity(117U);
    msg.setDestination(812U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.31840774184951515;
    msg.lon = 0.7047534497514986;
    msg.depth = 0.5306067296860486;
    msg.roll = 0.5331647055796994;
    msg.pitch = 0.6034418645318926;
    msg.yaw = 0.09106290132819606;
    msg.rcp_time = 0.19442564679429053;
    msg.sid.assign("PYMCRFQOKFUTDBNJXJYIIJBQZIUBLTTTYQMLWRPVRDGPOKHARSJLNPVUFXUBQGYDKCEQZJNYCECDMLZFSVZEOKSKURLEULCPVWEWOAXDTXYSZWWMXMDFCSFHZBTXUNWLYMUABVAODQCIMKAAPH");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.24823384146620098);
    msg.setSource(31161U);
    msg.setSourceEntity(59U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(118U);
    msg.id.assign("IHAGWGMBQMCDUYWOZREIXJELNPOYGDHVSTJLDORAXAZBWTJBSFVZEVSFKYQPSKSRRFIBWNULKCIFPWECPNFTAPUGMQKQHRCTDLJEQTVOXICMAZOMIPGRVYYUUCMVXKBZXYYEJAUNMBWXWUMGKDUBUVXEZEJHCANAYCNBEFJGIKZVRMBPMRQTHGVKSDFOHFPHNFD");
    msg.sensor_class.assign("EVXVUWNNVKDTGPGDROHYSWCRMOZRCYULFRCTBSGEJIGPDYKFXXAFLBJDQJXQEBSICEZINTMBMUXZ");
    msg.lat = 0.7655934569648377;
    msg.lon = 0.059736956665978;
    msg.alt = 0.01390944221960344;
    msg.heading = 0.2184491923592926;
    msg.data.assign("WPXQAKXVXWTUUMRNZIIYCQFNCOABKTVSAACGPSQGOVGRLLXNQJJPRMVUJEBIRSMQVDRSUNEXOZCRNEYGHDJZVARDWHFBDDNZKMTYBBHEYLVYLFFPMOSELUQFUEVKXFDTKCPZOMJFWSHWOUHXZIWECILDJEPUJQSPUYSCZQAWPSIK");

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
    msg.setTimeStamp(0.9669729423536924);
    msg.setSource(5260U);
    msg.setSourceEntity(129U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(246U);
    msg.id.assign("EPQILISHZUXAMTWNIIFQ");
    msg.sensor_class.assign("HAMSPHKYKTUFSYKHJNIUZAHUFJZHEIRKEPKOWVNQSPXINRNUCICQTRFWYQLZCMECUTOLULPWQMGRBNVYGATQXHYDVMRNONUKZDMTNXIPYCMPSIEAFQXCWSNVJKFSJFZMDWBSDEGADMYBWXULTLJXOGABRWZJTWJUOMRQSGLVZJZRGXAABOSPCDWDOEDGCQBJFKFLKTBIXALBPSODKIWMRCHVVUOBZLV");
    msg.lat = 0.3187179480149215;
    msg.lon = 0.41557360137858557;
    msg.alt = 0.9592729715555345;
    msg.heading = 0.48242418551575805;
    msg.data.assign("BUXGBXSEMVQRALOQAJDWLWFWOGBKRNOUIWNZCFVSYMNWQMVIBNDELUAZALPLCOZTMOQSHJUUDTYCEFUDUOFPFKZYKNKABGXTQQSXDHZHRCLRYAKAJ");

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
    msg.setTimeStamp(0.1518701482754874);
    msg.setSource(48619U);
    msg.setSourceEntity(248U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(115U);
    msg.id.assign("BCUHQIEAMFTIEA");
    msg.sensor_class.assign("IAZTUWFATRKKNQRDSJTGXFUPVJXQKEDFPRKDJOSGCAAIETRZGPHVKXVRSYBNA");
    msg.lat = 0.6250357987719064;
    msg.lon = 0.42330379796047146;
    msg.alt = 0.8153557333589138;
    msg.heading = 0.4578216912033032;
    msg.data.assign("KGZHTZXCJJZGFAISTMLUXDRASQEGHBTLQEODYGHZLQNOAGMCHKEBXRQDNGNTCUXEDLVPEJPVZAVNQFLPKUFQLBXJTQVDOUOLCRUOMPORYJMWZYGDVKVRUMLGA");

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
    msg.setTimeStamp(0.9076445788917475);
    msg.setSource(60237U);
    msg.setSourceEntity(105U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(146U);
    msg.id.assign("FRHVQNBSGDBTQRIESVIHNJIOKWENJZOYZQUZRBTEWGR");

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
    msg.setTimeStamp(0.6940496222603931);
    msg.setSource(1488U);
    msg.setSourceEntity(174U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(210U);
    msg.id.assign("YTECOHAQFBYIRVSIYONGQUJHNEFUFGTYJNVZQULPXDHAJXKPOAKDSHRVLGVOTNRFJTVBGHFXDBOLRFINBXLZJQUJAZSPEWILDUQDKUCSXIUAVBNBKBWDTNSWZJKOYEEAHOZQKCOJOIMRTXZZVRKWYMPZARMKWGRITLLCYEPEWUMPRGJRYGQVWXCMFHELDLHBHXYBMCHSQMUWNTKQBQGMPAKYXGAPJPLI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SJKNAQCRDIGZQKCQYAADPY");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 194U;
    tmp_msg_0.rgb_green = 210U;
    tmp_msg_0.rgb_blue = 112U;
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
    msg.setTimeStamp(0.7160662981194861);
    msg.setSource(64234U);
    msg.setSourceEntity(134U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(152U);
    msg.id.assign("TRYDSVHCGMOZVZJPFFTLABURTPBXBZHYGHZBNUOEUIRJKGBEUSNOYKVJZXXWYJMUTLKVHNZOXPJJVEPSDQRNLNYFEMMPWIADKKWKGNGGHOQITLLJWDCCLGJIECEIDCDHLSSWEQWNBYSQCFFVSANXVXCXDIDZUS");

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
    msg.setTimeStamp(0.4109875271976289);
    msg.setSource(42962U);
    msg.setSourceEntity(7U);
    msg.setDestination(51224U);
    msg.setDestinationEntity(149U);
    msg.id.assign("ETMJIPLZVTUZBXREXAQXDJJVNOPPXPXFTADTPIYWFYWNWDSFCVBGQFVUJGNGOIYBKAQIAYJDTMUBGWFAZMQKRRQXMDVCSEUHCUOSSHPZTULECLOWQJLCQVNSKENYCVFMDLRRNSVYSNHDCXRZRPVGKCHWMEACUKYLRKJZCEDXLAFTZXMRMGJUQ");
    msg.feature_type = 53U;
    msg.rgb_red = 148U;
    msg.rgb_green = 214U;
    msg.rgb_blue = 64U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3403304014934181;
    tmp_msg_0.lon = 0.29802664613392904;
    tmp_msg_0.alt = 0.8439493503356789;
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
    msg.setTimeStamp(0.8168446671665303);
    msg.setSource(10987U);
    msg.setSourceEntity(167U);
    msg.setDestination(35291U);
    msg.setDestinationEntity(248U);
    msg.id.assign("EFPXUPESSQMJURJOBUASKIMODWIXLMIGXRUESSELOQLMWMTLOYOREGCPYDLUVQIHCZYOBYHJPRTMEJCANUPLZPPOFEBFEYXTKIIJFNKKCXJAMTEQXGDFIWKDQBGCURSVBNQYZURXNTCCNWNOTKBDPHFZEXGBUCFKYJUSKILNNAWDABOAVYVWARNAIRGZVPSGDVXAFPTCFXHBJTOMHMJKGWHDDQIDVLWSQAYZTYZZTZZG");
    msg.feature_type = 89U;
    msg.rgb_red = 128U;
    msg.rgb_green = 136U;
    msg.rgb_blue = 22U;

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
    msg.setTimeStamp(0.30448612281070053);
    msg.setSource(4796U);
    msg.setSourceEntity(66U);
    msg.setDestination(33799U);
    msg.setDestinationEntity(190U);
    msg.id.assign("BXRDVHZGHYYONNHBYTIVZBUIFZJJWWUIFRPBFQUKIZANUWBDGRSVAHBYZAWRVTWGLZMLQTJTKPJVLAUQUCCGXIUEVSLRMKCQRTYMJPAMSRNOWTQEOHXYFIMDDVOTIVOSLEQIYWNFJDWKCBHQEOKCNLCKKBELZFGSZXSNDXIDFG");
    msg.feature_type = 32U;
    msg.rgb_red = 24U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 31U;

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
    msg.setTimeStamp(0.5825815969468409);
    msg.setSource(47846U);
    msg.setSourceEntity(235U);
    msg.setDestination(41745U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.4286778061030432;
    msg.lon = 0.5834525955880927;
    msg.alt = 0.016710092795817255;

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
    msg.setTimeStamp(0.975449780032824);
    msg.setSource(18063U);
    msg.setSourceEntity(177U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.9016375789206466;
    msg.lon = 0.3952848771109938;
    msg.alt = 0.7189936980993722;

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
    msg.setTimeStamp(0.24803253322511543);
    msg.setSource(35012U);
    msg.setSourceEntity(182U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.4820779330316737;
    msg.lon = 0.41540030912098835;
    msg.alt = 0.4850912663316739;

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
    msg.setTimeStamp(0.7434220799038889);
    msg.setSource(45296U);
    msg.setSourceEntity(140U);
    msg.setDestination(5376U);
    msg.setDestinationEntity(226U);
    msg.type = 37U;
    msg.id.assign("BLEBJGNCODEPIYKQECVRKMTFMUSFTMJAANGBZKPXNIKQGWISXZBGVTHLIXJIHDKMAAAIQNVHPEWQMJUUYHAEXZYQJOXAUDNLFHTHUTKGQZJIXPFLOTVHSGXEDRFYYEQVHCERPNFRVVZFZSCSNWJELLKYLSYOQUAZIGRJNMD");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.7458458724997314;
    tmp_msg_0.bias_r = 0.1030441914285598;
    tmp_msg_0.cog = 0.6595955122319631;
    tmp_msg_0.cyaw = 0.6727743443803782;
    tmp_msg_0.lbl_rej_level = 0.9300820830591422;
    tmp_msg_0.gps_rej_level = 0.04023565296883225;
    tmp_msg_0.custom_x = 0.11101699381136321;
    tmp_msg_0.custom_y = 0.7036468739255611;
    tmp_msg_0.custom_z = 0.39508761012141114;
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
    msg.setTimeStamp(0.6669276971878408);
    msg.setSource(25407U);
    msg.setSourceEntity(212U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(111U);
    msg.type = 61U;
    msg.id.assign("SLCWJWAZRWQCMWQMBXBVMDDQWAIYOYHBIKQZQAJGWTCNUQUISUDFPUUVFIGPGCJBYIDLOUKECHADDFPYEXFBBUZRW");
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 99;
    tmp_msg_0.value = 1267850807;
    tmp_msg_0.gain = 230U;
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
    msg.setTimeStamp(0.7345917734819754);
    msg.setSource(6881U);
    msg.setSourceEntity(179U);
    msg.setDestination(43814U);
    msg.setDestinationEntity(137U);
    msg.type = 194U;
    msg.id.assign("UMCYXICERJYZAWJGTFMRBIYAEMAGQSIWWWXLDINYECQHMNTEQGDITIVDPQQTQAZJALSCHMTWNSCKAEBAJPOHVKRFHYVLYIERYJEBBUVZONIBPHSLDKWDFBBEXLUYKDXLFDGNYFVOQLTNINUXLWTKYMUOSWHJAHVHUGZXDAXBLPJKUOPGPZCMRRUUFUSIWPEPRSVCCBNNSXZJZJCHQKSRQHCPRTWVGABOFZOPGTFTEMJZFFKSGMKVXL");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MOXTNKTMOHCYZIPRQNEVWIILHILTDLKCGBMPMJRKXDGMBWDTOANVKWEZJUZSVDOAMQWYEUZGCNVHMZVNGWRUFUEBVHUGYFXLQWFZHFAOIDRCHJZCDPSFEHQWVAYQEMEAHSIOUPRZDOVGJSENTTPQPRFGKXO");
    tmp_msg_0.lat = 0.04962705307729742;
    tmp_msg_0.lon = 0.7126162267601284;
    tmp_msg_0.z = 0.024438062460369725;
    tmp_msg_0.z_units = 208U;
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
    msg.setTimeStamp(0.18383385945912845);
    msg.setSource(34227U);
    msg.setSourceEntity(155U);
    msg.setDestination(52410U);
    msg.setDestinationEntity(181U);
    msg.localname.assign("NSUBKITECTDKGWWMMTYQFPALVUELQFSQADZCUHKHITZSXJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WSIRTELDIZZZOIWRZYFPASBBOROOMRANDSEQLJLUDYHPWMZUWHKWSTMZTUFLIFVPNQGSNXJYEUBHCCNALKBVBQKVQVXVZTDORQFJCZKJIKKOXNPJXYCLCANSGUVEQOPQITCFUEFOROLMYBJPNXCZUEDHVBEYNXDKADQRHJFTHBVUKUAQYINLVVCOLFMZFPTHWGLSTMASEHAYJCBXBMSGWXMRKJASGGIDYTPAP");
    tmp_msg_0.sys_type = 217U;
    tmp_msg_0.owner = 17090U;
    tmp_msg_0.lat = 0.3553023854405495;
    tmp_msg_0.lon = 0.3495026506789548;
    tmp_msg_0.height = 0.37641299373791626;
    tmp_msg_0.services.assign("KQDORCWWJYXZFKMTPRVICBVGITHZIGXXERZOFBVLBVEBJPRWNXQWASAECNPJQUPWAZUJMEBAYIUMSXDYYIVHCMGUXCPUTYTTYILFQWXQRPSDWAFSHDULVOGCJCLFMBJKBNKTKK");
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
    msg.setTimeStamp(0.7039843873410468);
    msg.setSource(10713U);
    msg.setSourceEntity(208U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(185U);
    msg.localname.assign("EWBDLMXTNOMPAMTWOMLWYXTOIDSHLVLAFCPJPNCZOUYFCNTUHFAUNLKGMFRCCVAXTGNUYKQBJWQEXJVQPFZRDYUCNCDGSOJDYWQBBXOHGBTZKKNMJBEIOERRDRUECNGKZVVRRSTWXSSHUAGBSAZZBLCFRPRKIRUCXNJXLPDHIYASQMXPOVZXQFQSWHKTGIJEAPVVI");

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
    msg.setTimeStamp(0.8315796533868958);
    msg.setSource(17488U);
    msg.setSourceEntity(109U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(198U);
    msg.localname.assign("SVOVFNPPYLLYGZRHEMQKQESDNVIKXGQSOAAZY");

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
    msg.setTimeStamp(0.3994080183895471);
    msg.setSource(13462U);
    msg.setSourceEntity(252U);
    msg.setDestination(48499U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("RXSXLKBDIZUKLQDMFVPHELOMWVCEVTQCNIRWHXKQLUBWXYFUTEROFSUFNSNTJWLDUPWLLPRDSKENGBJMNPBTEIWOYHYKZWZHQXD");
    msg.predicate.assign("SEDESOEDRQEBCJANMIAKYRYDRYZJPLDKFMUDDWMNEONZCORKCNULRDPWYGDQBGB");
    msg.attributes.assign("XGIPZWGZLNCJIXVSZNVDMMCZRXNSXHEHBSDPJGFJCPIKEJJVGLEQDBRZDABHPQFJOONINLAOTAXTPWTTLZWYTMJTWIDONYQGJHFSDRXKDUPVGHKFZFOVFUGFIQEBWHRWJNBSSREAKAYKCOCCANDMNWPFSWQOBBCGOYASANYYJOWEAXFKKQETUUICFMXPROHLEHMRYQUZVCQGAIEEIQRBPVLRVTMVCUZUWSLUSTPDYHXUHDYLKMVMLIXYLGMKRT");

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
    msg.setTimeStamp(0.7786326596188808);
    msg.setSource(1448U);
    msg.setSourceEntity(167U);
    msg.setDestination(46167U);
    msg.setDestinationEntity(225U);
    msg.timeline.assign("RAILUMMSOPENNQZFBHDKUJXXBKCNKUCVEGRJGXMCAHFVSORFTOLVRMNQSWVKCBUDMWQSDPDGBCTEIKVUSDHIGPTAEJEDTYGYWOMEJXAZBNYQEQJPLUAPMGMATCFZPIZTXTRHRYMLQQRVLWYGNSJWPHDBSQMWYWFZAFXTYKFIACJZEYLYIWCXJUVGZOIXJVBNYEGSKFFHRHXSZQNQOLH");
    msg.predicate.assign("TIJFWUDFODEEHEBCJPGPIGSCBXJQFYSSALRJFPBKHDZWWJBNEGGSHFNZWDYSYHUSKCYGAPKMWWOHWZKAEAMXEUCROAKYQARKGDZCHJTXIUNVPMLTMHOKVNHVVSIWNNUJPZNMNWRBSLRIZJZGRIOTELQOH");
    msg.attributes.assign("DKUOVQPWDGOEXVFPTWZDPNMPSSEEYAI");

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
    msg.setTimeStamp(0.15558537065759737);
    msg.setSource(65520U);
    msg.setSourceEntity(38U);
    msg.setDestination(53777U);
    msg.setDestinationEntity(9U);
    msg.timeline.assign("DZVCFZGNJVKKZQHNRBLNSQSKTHGWFCFIATNDVJWSJHVMADNXAYPSCKCYESIWRXQFPGVUVPOKBIKTAIIHHJWSGQODRLQCMMGGIRUFWUVCPOJONICYRRYLREFPWTOLBEUHUPXBDBMBLTTZQZDDASYEFLDHNXUQFXWANBWVAAZRSIDIGQSLOJBPCMLORAKXRXUSETWWNOKFDJEGQHGUPFYMMUVOETYXLPI");
    msg.predicate.assign("SXZOXKNVDLYNONVRFPFGBWFYBAFDTTRMDYJSZUCKUZIBTTPWMWTHLSMWCSYXSNNAXHIOAFECFCZOPROPUQYFXPRLGNJJHHWEOABOIVCXAKRRMTHUJLXDHPTYADRWABBXEWPMQZJSKZGXCVLDULHSQZKIEIMOQLVWGTRMKW");
    msg.attributes.assign("CVXZHZFSAVGZSCDHWWPOZCFFOPUNENTDPEAIVDSVGDIAUFJVYQXYEUMBKYOFOJPTCAOXSCULGTNXGSRLOYPZRFMECMPKXECYQHKMIJVLJUUIDIHGWJIDRSZLUIWVHUBQNXFSXGQPLQAOWMWGNBOCRWZEKHJVNQWXJPRIRBIBCAEMVXBEOTTPBQZQWBKERMALLDUFDRAPVUGYNHQJTBMTBLXNWRFYDSKKJGHMKTFIHKAYMJTTADCQN");

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
    msg.setTimeStamp(0.7108503186657978);
    msg.setSource(29062U);
    msg.setSourceEntity(244U);
    msg.setDestination(61851U);
    msg.setDestinationEntity(42U);
    msg.command = 5U;
    msg.goal_id.assign("XBSUWTVSIRBEBIDHHPSFSMCPOIGADCQCAKBPZXCAFQSYCUBLNTQIEGI");
    msg.goal_xml.assign("FOFCUUQYKHDOKCIGEWLMTPWDZGFQSFMZYTHGOTPDBJUEMQXFOIATBXRGMBBNFCQDZRSJNQAEFUJULXCNVYZBNLRUWZJYRXWYBFVHGBMUWPZTXFSMMRKIMLDKHRQCKOIEAOLUYVPKRJPMVSSA");

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
    msg.setTimeStamp(0.8503790904477262);
    msg.setSource(24423U);
    msg.setSourceEntity(140U);
    msg.setDestination(62856U);
    msg.setDestinationEntity(95U);
    msg.command = 71U;
    msg.goal_id.assign("ZFTRQMVEOIPI");
    msg.goal_xml.assign("AZOJQHYYVMTKUNEHIZSPPUPCOFXXBCORZVQYQIGKWZMOILBWNLOJSNXAXIHUALIIDKGJTGMXSVVEEHDFZBVMJPQLKASRECLHYNCKKMQRDZVNUJELBNEGRATTICXUF");

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
    msg.setTimeStamp(0.6958942422428399);
    msg.setSource(37256U);
    msg.setSourceEntity(47U);
    msg.setDestination(18612U);
    msg.setDestinationEntity(203U);
    msg.command = 167U;
    msg.goal_id.assign("UIENWWQKSZXDOZVFTAQYUIGRZXDAYCPRJMKTFFBEJPORWWXNYXHAJXDYHUPMJGOSPNAQXSLSNVSQHMIRVK");
    msg.goal_xml.assign("JXUUXWDKRINVVBMPPFDFVDXHILMNOJTCGOPOPLWKJQVEYIIAHBHGPCMNFOVOXCOPJZKBDKUBCMTJPFCGSOUOIZVFKYSQRXPSNSVJHILNYMLDLFBUWXBDJFTRMUGYYCLXUKRJPDACBJFXAHEWGZAUELHIMEAZWTSIWKSTXNDQSQJTIZKMOZZRYSGUAWRAWPYCHLKGLOQARZTVQMERWUEVZIELRGCMNKFQHQXBSGNYZECAEBDHSAHQDT");

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
    msg.setTimeStamp(0.41738554994588006);
    msg.setSource(41376U);
    msg.setSourceEntity(70U);
    msg.setDestination(46648U);
    msg.setDestinationEntity(145U);
    msg.op = 102U;
    msg.goal_id.assign("HELZSNHHCZGVESMULCVTJBKYR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EBWCVMSFACNUHX");
    tmp_msg_0.predicate.assign("OKMRVYAXPALBCYGHSMZIOIRZSABCWIKZDVBCUSYJNJBNGSGXJFATPMEYROSUYZQPMUQXJBKMVNGOZFTZYCGTORRHTXDWAENESDVLIJDEMKKNZKKWTNEGIXSLFJUZDEYMQSQDLERWHWGYAUOERTJEFYGAYXVCOCWILOWQPQAWRKASCZNKVEBUVXRXPOCCHJVSCPPZWQGRFHBTJFDFIDFJINWHTBLALHBDKVQLHUPUUHBFDQPLPT");
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
    msg.setTimeStamp(0.8617540709797694);
    msg.setSource(25269U);
    msg.setSourceEntity(78U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(196U);
    msg.op = 217U;
    msg.goal_id.assign("ZSYLJFXHFCZNYKBQUBHLXOZOGP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GXMHUHRCDQULHSYYQCXZONBSSBFRVZZIJKOKJXPWNGEKUWZTJPHJFHUQYVXMMZTQNFSMUWAVRMWCTGLEUKNLSQBGWHOCEFHOBAYTVSNPQVVPYDDGBZECFNMLSXMCQRACNEIALZBYFBDOXIQGDGITOWCEHIUDTSCIXBXFCLAIYTILDLNPSLDRJFUGYVOWVZPPHRZOXUJFTIJOAKRVJAQKAMKMZERSDTLQREPONWPMHBYGV");
    tmp_msg_0.predicate.assign("OXEZPJQLHJEFGMSPYHUBKYQUDHACWDAPYZWEWTIFLOKEBSPOUUXDXHRLZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PHWDYYRZSZHYPLQWEJLDAQLAPAIZWZKWXRGPISTYESHMCRYOTCRJITLEHOEPFQGVEFBIGUNJLRDVVFDDUQICUZBFDIJOVNJBUMGLAAHCBSRUOTXTCZAZWPMYCMTRYZFDSAPEQZTWKVVRIWHONSXB");
    tmp_tmp_msg_0_0.attr_type = 179U;
    tmp_tmp_msg_0_0.min.assign("KMOQIIPECZWYUHRQLRKCPSU");
    tmp_tmp_msg_0_0.max.assign("WAYAUYPWULPXEHRJZENBCASHBENFKWUHNKNZDDWDYAZRNJBROGTYHGOYUHGSUXPGJLBSVLAMCLHWFFDATONFOMIBABLIMRZCOIWWUJIPANSVKDTDO");
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
    msg.setTimeStamp(0.32664209211092);
    msg.setSource(20031U);
    msg.setSourceEntity(174U);
    msg.setDestination(50820U);
    msg.setDestinationEntity(142U);
    msg.op = 15U;
    msg.goal_id.assign("QFRARPEQCDBDTWKOKHVLVUGHPGGVXGUECJWQETMASMWFIWFCDTINMFXOUM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IYLXMNFHPHTXXDPJGAJAHWSRZTFFCYEPBHSSZWHFJVFMPKYEEBVLAVUULPLTAUXGBSWHUKYQHRPQOCFMSMLRAULNQWJEMYBCTLVCXDIDYATJAEVMOEHOGRBFUQWDXVUAQDRTQHBQILRKMZYDQOGOOKSTICVQLRZZLINJNPXPZPEMASTSPKWWIFOGKUVCDJNJIYWDBKEJQVYIBCZJHFGERKBBGTNKOMT");
    tmp_msg_0.predicate.assign("ASHIWMKNMQAABPXDCQNTUQKXIWLYKMFJYONKDWMDXKOSDXWFWSNVJIWVHBFCGAMPRXZNRLXZOOEPNZPQIZHLFCBGHROXPYJSAXDFJAEOOQVRLAULRRSUXJEGGNRNYFZUDKVPGGDWFDCLIQTQISVPJJFISYGGEWKNFLTEZTBABLOACISGUUVHUMYHIF");
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
    msg.setTimeStamp(0.34443062972055416);
    msg.setSource(39478U);
    msg.setSourceEntity(185U);
    msg.setDestination(25905U);
    msg.setDestinationEntity(198U);
    msg.name.assign("OYTWOCBUREGRSPDYLFNRQGTXCZVNWBIINFZAALFCMSWPLMXOCIHGIDIVZEHJYSNHNADGVSTPO");
    msg.attr_type = 225U;
    msg.min.assign("ZHFRUBIVTVARJFQMIMWJVAEZSCMJFRFHSXSDONEMWDBEKIAJFGTWUETFEILCOUJOBHFXIDNZYUEDVDJRAKKIMZEQYOCVKQQHIFOBHNCULTZJTGQRHNWPIOQTECKBMJCZZAWEVDVXWLSLGSDXK");
    msg.max.assign("WZGHNJOYMDAOQUUSBKRHOEBUKZAWXKBOWJYGRKVZLGHLKMEPIRWPVGTEYECZEWPWTSGMMVYFPDXUQFEWYORUXTIKYOVUIQKFXHBKIASHMBSFLUUDPYLRNYONDTCQEWDELBIGOLJRTCKANPRMCFZQFBQLVDJXJQLWFZXIZCIHBASCTUBTNFVEZEJQFRBVOXVNKXDPNJUITCYSMPOMDSAL");

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
    msg.setTimeStamp(0.30786636970094594);
    msg.setSource(45329U);
    msg.setSourceEntity(69U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(242U);
    msg.name.assign("IOWCYXUAXMFTQCCDFEHIRNHWVTHULQTEDNZRDIGUAOCGEAZYJYPLUGMMTALZZPINKSCCXAFNEGRNRNVODSDSJVPGQOBIXKYEWUBIJBIEMUIOTTXXKEWZPHJBD");
    msg.attr_type = 56U;
    msg.min.assign("RHQRGHIBRRUFKEPRMCUEMKRQHUXWWZVFSGJAGLSOJBXMYYFNENPNRIKXMNMAFRJCWTTBLFCOHLPAAAEVMPKMS");
    msg.max.assign("NXWMRRVKNVGPBVAZFSXKDICGHCDROAYKZLCLWVZMLFRHPHTGJTHBZKSBFTSFCEMCYAAUVJGIDCLRTTJDMQMQGZPEXBCONJHYKCIGKNDXNWMXINLZINGPNLEODEJEOJVLHWFOHGTABHWPEVKTYERLOWBPVWBCYSPXOUVQIOQUQQVFQSOLKDXKJUNMBWCYYAUFUXMNTKUARBBAPFSGXTSIHDUZAPLRQREGZWIJQTAXISQFUYRMUIMDJD");

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
    msg.setTimeStamp(0.1604689462638672);
    msg.setSource(4947U);
    msg.setSourceEntity(85U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(28U);
    msg.name.assign("DHPMLAYFOKLEDBLQQAWCIQJBTXHGIHQDOEUSHEFSPRITKIZGJVNVXRDFOSINFQPYGQYJBTMKKACEUJTTVTRLNLQYRMKMZFJCBGCUNRYRHFUCLAWJSNWLOZKUCUHPUSSAFXIHEBEGDZGBZZVPEYNSKDORWQMXLORACWOHMDSWBYJWDNRSGDMWVZVZAKNGEJJXLANQMYIIVXTZBFUIYAZYXXHCFHPFQTCUBXPTE");
    msg.attr_type = 237U;
    msg.min.assign("QNOGFHBDSOHXERHUIZLROWGGYNTDRVEVDUSLFCZTNSMGGKISMJFEZHWYIXVQKGKWZHKZKYRXRLDINYBAUCBKFPKUORJDVRHCMKBOUXNYQOYDVMVOBRLIKYHLXBQCDAE");
    msg.max.assign("OBSMCMEUERMIFLDPJMQJUZVWPCFNVNAHUZGENBORURIBYVDCZUGLVGEDJBTPNQZLIKMWKRKECLTWLXXBHWJVUTACVRKLQVHBNMQADXAZXYUEPXSJIKSR");

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
    msg.setTimeStamp(0.7980124768036703);
    msg.setSource(31824U);
    msg.setSourceEntity(214U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("HHBKVFFOEBYOCDDPIGTYQNZMFTWKUMBKOYERKWPUQIUMVZCNIHSWBALLYPCBRDTYOVCGDAEAFJLNKLRVDZVEHTPGPSCMHESJWMJMCVYEWVOSXHFREQXPZFRXUIQXISJUJKLKUZPXLVGNJRZPFPAJZNTRQYGVXEIBLHGWRQTZNFESDJHAJIWGXKNBUHABLNCXMACBKFMNRMDOXD");
    msg.predicate.assign("NDEXLHZZDLOBFQVCHAIXYVLMPE");

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
    msg.setTimeStamp(0.38458952242793587);
    msg.setSource(3901U);
    msg.setSourceEntity(228U);
    msg.setDestination(64868U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("ZZJJSIGTDYBRFBAEAO");
    msg.predicate.assign("CUBZTPSPLBTJKNFNXTMRYJSBYINPITXBWKPTHEZQXYUQVHIJMHTVSUIZOFEWGCGNPGRKMOUVSBSLOGBAXSAVMHENIQYP");

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
    msg.setTimeStamp(0.6879825880450412);
    msg.setSource(21784U);
    msg.setSourceEntity(195U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("GKTTIGBRVAWRKOVWGGHMBAZNBNIYW");
    msg.predicate.assign("UWZNJZLPUNJMGBSJBFDDFSUWINHFEKXEPIYHGXJQPEADAXIWFHCLNBDY");

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
    msg.setTimeStamp(0.17727365248360705);
    msg.setSource(11191U);
    msg.setSourceEntity(88U);
    msg.setDestination(26560U);
    msg.setDestinationEntity(119U);
    msg.reactor.assign("HNVUUYOAKNETLSFANLVOMGXAVANJXLGOZXXGMHJPWCFWUUQDZTQHHVETWIRRSFPZJAYYWRASUHBHBVHMZKJFJGNEUCMKFQSECTKLPCCPRKIVMNKIRCEMZZSRCLLOVXDYGYYSUQMY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PEFDGBCAYUCWSGLDUNQEOTUMXYTGEYEZMHANNUNRGDJNKXUPROHJMJDLBQFKF");
    tmp_msg_0.predicate.assign("OVYTFEQCDDNBXEMJJLOI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BSPZKHDLHKUFPEPKNMFTDYUIJYQXSGCGTLEUROGNIUKONPL");
    tmp_tmp_msg_0_0.attr_type = 52U;
    tmp_tmp_msg_0_0.min.assign("PJRFWTNIDMLZBXKPTEYGBBLYJJRPSULKHZMPFQZMCVEMOTJFDXJFPGSARMLXMXSXJLIQCIOWUOMDUYRIQUUZ");
    tmp_tmp_msg_0_0.max.assign("YIVHXZJTGJSMJARNIWFKAOGHAOFASSZHDNZLNHANIPXKTVTGGSPCPXWILACVMGSZYZMEMQYTYQFBUCMHRLQFYDGAOMQRXLEPNRAIJVCEJAE");
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
    msg.setTimeStamp(0.8695699541189863);
    msg.setSource(57603U);
    msg.setSourceEntity(183U);
    msg.setDestination(2799U);
    msg.setDestinationEntity(20U);
    msg.reactor.assign("BEWUKARLAOCSPCBIZZWDLFMGJCMNQSDLCYBDSNNFPEHTAIZRFKQBNLIDQSBCSOMVHXWKQLUMWCBVGXRZKHIUNEWUMBFHCBMGQCVNPVEYZPNUICTJYAOJDRXIXWEWRFRNVUTXOGVWHOJVGRYQPDJ");

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
    msg.setTimeStamp(0.770131174466928);
    msg.setSource(42228U);
    msg.setSourceEntity(108U);
    msg.setDestination(63032U);
    msg.setDestinationEntity(204U);
    msg.reactor.assign("USZDPXWOGAANIKMFCXJLLXHBGTZYDWEVUHTZNDIYCAYVKHZUKTEGTPBDDORVRBBPGZGWGWEEPGJQONFQVHOSFSFGJJYXKLJVDAUHVUCHWETEIEMYQVICBOSBSBMWNRCJDABUOWXQNEJYEIFBFNVUTOLFERFMLWCVGSBUHOQYPPQKDJLTRKIYKPZASMIOLVSYHQT");

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
    msg.setTimeStamp(0.4538961291029674);
    msg.setSource(62393U);
    msg.setSourceEntity(221U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(121U);
    msg.topic.assign("EYDSLCUVTARDILNDUJLMKQFIUMSTZWYQGDZNXBTJHAWEPVOSZNXIEQUMEOGLGKCUSSSOGVXWVVHVSPQCGEUZRMYEBKXALLYYRUIQAIDFFZOMGSPXCDPZNGLYZMJCOMAOTPGAXUDJUTMJNKWWQQQGFIBZTRZOHBVGANFHHKBETHDPAWWBVDHRLTYYRNBWMPKPKROHJDZCFYQLH");
    msg.data.assign("YQFBAXUCTHYJJBDXYVANSATFMKANIIAGQBOLSPLHEMTSBATFOWXFNZFPETAGLSJXJVCLQZTXNDEUDOGWNMCYZGVNCWOUKREOXLIVGGNENZYWUVCRLBOGPZOHPHDZYUMULXKKFSKCCEZUHGYTYASWCHJBVZVBBJGAUMPKJP");

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
    msg.setTimeStamp(0.3893694534153911);
    msg.setSource(54242U);
    msg.setSourceEntity(145U);
    msg.setDestination(23930U);
    msg.setDestinationEntity(205U);
    msg.topic.assign("NBEGGLJQVVZUNAABCERZEODBAQKHVQDALMGTGPODVZMNOYSXGMVYUPJEFQKJAKZMAYXURRAMEHRUZWFEMHGUTCMJSHSUBHDGWKKIWJTEOSLDBSJDKYDUEPABVRZTR");
    msg.data.assign("LZLBRQOEKFMLWWBCSGLDTNHJJHDGKUIGNEHSDZDHAPQPUGEUBQIBGBIYFCZBNCCPVMRNPOBHYXCXFMCYITWZDJOQLLOELSZQOSSWZGATPNRGJNFEWVKXFTJKGZZWYXFYKETWQRWJUQJI");

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
    msg.setTimeStamp(0.39351154485915973);
    msg.setSource(4378U);
    msg.setSourceEntity(168U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("RCEAEOUKTICCBJOBYGFHCXATEVTYGEUGTYVZMFZPQACROIWAWRCUHAWVCJFDLQFJZMEEEKDGBULTPZTFJAKFLVZSXPUZVXOYZYQLX");
    msg.data.assign("QFEUAZBNTGMJRQDSVMEIBJLXLYONMTVESPZTXMQQQGRSOSDFSKNGPVXTLYYLMTHFBGHYRDRFHHOJYYGADFCZMZBUSMOHOYKNMBWOQVNFAJRXAVLPQWWKFZFTZILXAKBEUKBCUHAHCIWPJBDXHLUSJLVXDDGCPE");

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
    msg.setTimeStamp(0.6158008956122051);
    msg.setSource(17569U);
    msg.setSourceEntity(12U);
    msg.setDestination(40566U);
    msg.setDestinationEntity(24U);
    msg.frameid = 49U;
    const char tmp_msg_0[] = {101, -126, 81, -62, -20, -62, -103, 15, 55, -38, 126, -41, -116, -108, -38, -97, 81, 82, -126, 37, -21, 111, -56, 6, 1, -53, -73, 36, -45, -118, -124, -48, -103, 1, 112, 7, 92, 5, -13, 100, -56, 25, -103, -88, 57, 94, -7, -74, -62, 59};
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
    msg.setTimeStamp(0.002704922010676958);
    msg.setSource(28270U);
    msg.setSourceEntity(139U);
    msg.setDestination(61874U);
    msg.setDestinationEntity(148U);
    msg.frameid = 26U;
    const char tmp_msg_0[] = {41, -27, -73, 114, -71, -70, 72, 9, 90, -78, -51, -84, -89, 72, -80, 59, -6, 80, 97, 109, -40, 97, -32, 18, -24, 26, -115, -91, 18, 68, 36, -29, 37, 124, -54, -46, 8, -14, -74, -124, -15, 72, -98, -122, 22, 96, 94, 111, 18, 34, 40, 61, -19, 60, -68, -26, -80, 16, 95, -71, -69, -122, 58, -30, 60, -81, 81, 31, -24, 30, -60, -118, -35, 36, -91, -83, -54, 81, -72, 38, 39, -21, 18, -13, -124, 35, 106, 19, 27, -23, -95, 97, -10, -106, 118, -99, 77, -116, -14, 27, 61, 50, 49, 99, -73, -43, -127, -44, 24, 36, -73, 15, -16, 17, 86, 36, 125};
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
    msg.setTimeStamp(0.9694067328512314);
    msg.setSource(61576U);
    msg.setSourceEntity(58U);
    msg.setDestination(21438U);
    msg.setDestinationEntity(147U);
    msg.frameid = 10U;
    const char tmp_msg_0[] = {97, -57, -70, 51, -78, 92, 53, 49, 25, -112, -117, 48, -108, -34, 78, 83, 35, -120, 64, -29, -82, 57, 114, -78, -120, 103, -114, -28, 32, 41, 14, 37, -115, -100, -94, -124, 14, -3, 47, -124, 92, 51, 17, -8, 31, 19, -13, 85, -69, 110, 109, 82, -80, 77, 75, -17, -115, 108, -124, 47, -51, 94, 114, -78, 92, -24, 82, 92, 109, -116, -127, 77, 55, -115, 122, -102, -11, 40, -84, 30, 37, 36, -15, -35, 109, -53, -17, -28, -29, 55, -127, -72, -12, -100, -107, 79, -80, 3, -126, 23, -59, -69, -45, 108, 70, -63, -49, 88, 45, 20, 72, 97, -32, 91, 80, 61, -73, 125, -1, 62, 55, 31, -29, -27, -36, 38, -9, 28};
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
    msg.setTimeStamp(0.7757261317683978);
    msg.setSource(52319U);
    msg.setSourceEntity(37U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(71U);
    msg.fps = 110U;
    msg.quality = 32U;
    msg.reps = 249U;
    msg.tsize = 62U;

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
    msg.setTimeStamp(0.39429574586167115);
    msg.setSource(19248U);
    msg.setSourceEntity(104U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(15U);
    msg.fps = 48U;
    msg.quality = 6U;
    msg.reps = 82U;
    msg.tsize = 22U;

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
    msg.setTimeStamp(0.21751189050469644);
    msg.setSource(54674U);
    msg.setSourceEntity(7U);
    msg.setDestination(14487U);
    msg.setDestinationEntity(31U);
    msg.fps = 65U;
    msg.quality = 135U;
    msg.reps = 212U;
    msg.tsize = 24U;

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
    msg.setTimeStamp(0.15404529100613362);
    msg.setSource(8305U);
    msg.setSourceEntity(189U);
    msg.setDestination(50969U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.6275776861904373;
    msg.lon = 0.11516431454370213;
    msg.depth = 61U;
    msg.speed = 0.08038413754312157;
    msg.psi = 0.8682441320234721;

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
    msg.setTimeStamp(0.5514706258376902);
    msg.setSource(43610U);
    msg.setSourceEntity(243U);
    msg.setDestination(13941U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.4969422617576099;
    msg.lon = 0.9937785431978485;
    msg.depth = 254U;
    msg.speed = 0.4924496916419038;
    msg.psi = 0.4549784215160455;

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
    msg.setTimeStamp(0.8318294660634067);
    msg.setSource(19888U);
    msg.setSourceEntity(100U);
    msg.setDestination(791U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.3189741987694329;
    msg.lon = 0.6767757171130485;
    msg.depth = 136U;
    msg.speed = 0.8839426761625998;
    msg.psi = 0.8757369013118071;

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
    msg.setTimeStamp(0.812676210499391);
    msg.setSource(30721U);
    msg.setSourceEntity(232U);
    msg.setDestination(49933U);
    msg.setDestinationEntity(181U);
    msg.label.assign("JFAFQIBKWZWZGSMLYXMGRPGIXQOZALINUDTVJUMDZKLFFSUFRHJCVUOLMHVWFCPSNXKHDUEDXHCQHVQLQEEAVOCNJUOTFZCYPHZMNTKSHWKWXZ");
    msg.lat = 0.3531371669845713;
    msg.lon = 0.6561577437617399;
    msg.z = 0.6709818931269583;
    msg.z_units = 149U;
    msg.cog = 0.7134845263537334;
    msg.sog = 0.29515592836344373;

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
    msg.setTimeStamp(0.6268686984907903);
    msg.setSource(36423U);
    msg.setSourceEntity(74U);
    msg.setDestination(52912U);
    msg.setDestinationEntity(6U);
    msg.label.assign("GCCPSVGEQHYNUWMFNIJAGDXWXPTMYVEVZFSBKATAKCOMJXUHRNZRDWQOJVSDHFANDGIUTJWVVECUQILPDAQJYHLLHOEWCHSIXBJCRSNPJFLTWZWIGEXQDIMSVDFBEZGDUPVOKRSYSZUIYTQAQDLAYFIVRXLOYHTYSUMNVGEMZB");
    msg.lat = 0.28298985643693764;
    msg.lon = 0.04531128435015275;
    msg.z = 0.392473808794112;
    msg.z_units = 60U;
    msg.cog = 0.5344220278288824;
    msg.sog = 0.26082628507328576;

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
    msg.setTimeStamp(0.5233756997126373);
    msg.setSource(28915U);
    msg.setSourceEntity(185U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(232U);
    msg.label.assign("DHOXKDLOKFRVNTIACDPVISHPQZURTBIBUZWXISFHFMUENOGVQUKJNSKELZQLWGIWYUMECSPDWPQDJMLRIAGDMUETEPSKMPGVKFPCKWAAYE");
    msg.lat = 0.501905519040368;
    msg.lon = 0.23563923053268354;
    msg.z = 0.8102817411327538;
    msg.z_units = 13U;
    msg.cog = 0.3382203128062763;
    msg.sog = 0.28353103429738424;

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
    msg.setTimeStamp(0.8489876285378612);
    msg.setSource(8962U);
    msg.setSourceEntity(183U);
    msg.setDestination(952U);
    msg.setDestinationEntity(218U);
    msg.name.assign("GIUIMLYTTAVCNASIQCYMGAIPEPEUAJWTBUFWGZDMLGUOGMJKNLTXWTBUIHCMKJKMBLSSZOYIYYJBMPKQXLPCFXQJKZVNCHBLRLMHVJVHBRSGVVFFWRSGNZAVDXYDNYJFQDZBGQOHNRRZTIVAERDCHXEUWUZSSCABKBCTOTRZMYWUELOXFWHIBPRZNNPFROPQOAAVDEJYJHPCTQXJWAOEHNKLQZYFIQIF");
    msg.value.assign("VKUGLEDBRXRVUYOSCWHWIBCTFOTKZHISJZGWLNDACMDCSHDPVQTXKOAMNZOLATNIIPSCYILKZMKRJHWHDSOAFKUEFACEBBGXTJUEFQOGLWRGTWKYUBDTHQNQUBZUJWKPYNRMCYXGXPUBXIZZVYFDOGRJCHJNLQIDIBFXMIPEAQCYMBMMEW");

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
    msg.setTimeStamp(0.3494300605850609);
    msg.setSource(40889U);
    msg.setSourceEntity(154U);
    msg.setDestination(41135U);
    msg.setDestinationEntity(232U);
    msg.name.assign("HRMGYBXNCELQYNYXPKXTXNTKPMUPLKAGOFDQAVTLUWCNRLPCJDSFFTIHPWIDWZJVWTGYREBZDJXGAJTSBFBCXKOHOOMJEPZHILJRWAVTBLFHKAVMJUUZOHEHLZPASZRRLGSWLYVUFJJDBAWKRVUERNNFQBKPECQESZTDGQMNCAGPYGQOQZIVBSAIFOCWLIOSMEYRUYMADKIMNDSQQMCVURXYNZNHSZFGQBCTWHDIE");
    msg.value.assign("MTOPRCFQJEZWEEDPTEQOMANJBQYGDSNLWORMOYFLRXD");

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
    msg.setTimeStamp(0.0822281951981163);
    msg.setSource(4797U);
    msg.setSourceEntity(136U);
    msg.setDestination(46270U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NRJTKCXWUPBFCBXMSHLELLDWNMPJPEXBMLYIWMJAMNYWDOBNVVFUXZTCVTIAQRHAPMWQXFXOWRBFSYYFLTYUEUKHOAFGHZNFIDEOCVWJRCQAEGLBJSANQQQIUGCEJSZJAZGDMNHGSTJWRWEBIRCMHUS");
    msg.value.assign("YERDCAVHZJEOUBBLGSVWEMMSYFOHIQPZIJWPVYEURQFYRONDEZSBTVSXJKADXCFVIZDNTKKQZXGUALNIKFRMIPUTUATDGRCFUWGMJAKOIYPUILARHFUVVYSHNWJRSLIQOCGDN");

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
    msg.setTimeStamp(0.06837886318697217);
    msg.setSource(10540U);
    msg.setSourceEntity(220U);
    msg.setDestination(56711U);
    msg.setDestinationEntity(117U);
    msg.name.assign("LZSEUUBKHWKZVXAVNZGZYBDCMHDAXRSNLCGXQEEJEGKIZXXVCYMBRUWQECRYUPJDHLCIITRMCDNZOVQHDLTDGQGGGRFIOYXYNLIOUEFAAIJ");

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
    msg.setTimeStamp(0.5531898131658672);
    msg.setSource(25965U);
    msg.setSourceEntity(54U);
    msg.setDestination(42810U);
    msg.setDestinationEntity(121U);
    msg.name.assign("BKGOLDZHSIJGLXUIGWKNDMEKUAWDZEMWNOOJWPGBMSJYSEJJS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RYACEZMFGMPISQIGOPCLZXDKKNUPLVPWSJVLQPKCGJKUONTFRJGTERPMTBUHZWYNKYAUFVJGZZOSFBKBBVHWMMKQXFUTXLGZQVCHXGIINASXHBVZEREHFRWAIB");
    tmp_msg_0.value.assign("KFCBFWUQBLMTEJABVQAOHRTRPETKAWIGJXEXCFLVIZUUOLHNVGSNENBMWDGOTQMCYDLTBDYOHILZOKJPKEOAKMSYPUPRWVJAHPYYDPOGIRWUKAETUESR");
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
    msg.setTimeStamp(0.18971934681151337);
    msg.setSource(60254U);
    msg.setSourceEntity(237U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(182U);
    msg.name.assign("KWMTUSHVOPBXQJZXYOMDIUKNTNRTVKBAHMJSPJGGBEYYJQCCTCZPGIDUGNSELUOMJVYLNRTVCZHATPKIBHREUBHYNKUOFZGRVIFDI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HNIUEFIBWPCRKPAFOZDTUOCSMRXSUMNNPKLDHVPFDLYUZYMYEGQEGLXAAPQRGKXGVTVWTHWFVLMNPBEHVOCQFZXOYSSZRXWDEUTZBKMLPJJQAYAWAMKROWBPBQBTNBTCIEOZWPEFFZOTXKFJGQXLIMSZDMOQHMUDURIUYJYJKIDNNPQSUFSEVAJGACSBCCATBNSTJCKHRKJXQRDHCFWLVLDVBOSAZQGIGZTYKHOHIUENIRDER");
    tmp_msg_0.value.assign("RBCXHDIZFDQA");
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
    msg.setTimeStamp(0.814939232757573);
    msg.setSource(31886U);
    msg.setSourceEntity(23U);
    msg.setDestination(36008U);
    msg.setDestinationEntity(235U);
    msg.name.assign("HZDPUPKGKJBRHBYQNAGCCGOQHYCISXROWOFVGBLFXZOACPWZLSFHXLARNNIKXJLYFWHXSVAKWAQPRYMKWDFJDQQYTSQTYOQLMSWHNUKMFTKXBUVRVCULROJWOIDHLFTWETBEKMCXMTSGJDUNIPZTPKCEVGAAAEODZXOUI");
    msg.visibility.assign("NGSCLMZPDTY");
    msg.scope.assign("MWOEENVCPNPXJOOZODNHCOEZRYQOMCRGAJFMPBUCAZVERDMKFHQSKANZQHXWLYIPHDXVWMCKIHDPUBQGSQASETLQYWBTQLNXDRZWXRARHVQTNJLOEDYUCMBDGIJZJZBAXMYNFSGBEGKOTRWDJBPSNIXMZVLFGDZVUWSEXNI");

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
    msg.setTimeStamp(0.9613885012303989);
    msg.setSource(16451U);
    msg.setSourceEntity(46U);
    msg.setDestination(53972U);
    msg.setDestinationEntity(106U);
    msg.name.assign("HAUWWSEWOGWDXPQAKOCGFEVQYWWSHYMCEZVHXBOEAUYZVTKUOHUJYNEUTHMRRWGZNESQB");
    msg.visibility.assign("BYKTVKQJQTDPWWWREWLNVIFIVOKYKZRGDEVUMZORZPCPZNDIUUBIAPFNOOAATKURGQMFILTQRDWZPSCAMWTVMCREYMUOAHSLGQPDKBZLBSEGYXIQBEOXFBXFHBSUQARNIBCQXJVLESZQJDFGPXNYXQFGFGZTNNBJNDCPXTXWTFHGAMJVRYLHOSAINCBSWUEVHKEORXELYTCHPZCDAVLORCHKJHHYUKAIJLVGM");
    msg.scope.assign("ICHFLYXLHWMEIRBCHQLJHCMRVWEYRASWNFFLBZAWFBFDENUPPJSRBKOOZMIDVFKWVRGXPMPZKQUMTAIHTXRMHQXNNVPFLXKODKNDFPZUZEUTQSSYSSMRMWDEDZEQCQJANQBVGYXTTJIDNAIEGPYYUHQMXOJBWCAJFTNUKRYGIXUECOZUDAVMZOTSBGLJYQSGFNOWSEHAHTZGYBCVHBPXLOSWTTVURAKIR");

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
    msg.setTimeStamp(0.5637793185586365);
    msg.setSource(43822U);
    msg.setSourceEntity(3U);
    msg.setDestination(10586U);
    msg.setDestinationEntity(48U);
    msg.name.assign("XQWRYMZUUUJBMQIAYPTKLRDZJSFNOUDBTZLVVBMHSBKJNWVOKEFLEVYGKAPKMYEQCLWITDJHTGWNVPGKNJONTACVQU");
    msg.visibility.assign("QNQUGDMMHKOGWYQWEKCYLENOKBUKJBBPPZCKQTLHJXEFKFMRCDVBLXWIMLRMTSZJVTEZNOAYYAXGVADGSEAFNYITJHCXCSRWRUQYKPJCAPIWGXKKLBMFIDAQUTHHHFPNFEWJUOXSYBCHCZJDIWTDTHZMZBNZMRUPQFVVRSJZIRGBUAQA");
    msg.scope.assign("NGKPFZUHHXPNBQJSLRFXQOQUEKIYKBHFFXRVXTBAHMNAWNDJBDQZLLRWSAWATRXFLRPDAUCVZCYKRZDZKDDVEJXDJCWNMPYAURHSHTNTNPRQAZDCQGSXUFNNXTPLBUSIJ");

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
    msg.setTimeStamp(0.8983427196078579);
    msg.setSource(30685U);
    msg.setSourceEntity(174U);
    msg.setDestination(41010U);
    msg.setDestinationEntity(144U);
    msg.name.assign("ERRYCDZSKYAQSLKGIRYWGEJNKLAGRVMGJEWNKMBLBRSWOBSLUQQQYXDNVIHIFMFGWNLEOZFJPRVJVMLFLHOWKYNCNISFHMGJJXHEILXCNAUAVAQDUOYFPPCHOJUGJVZVQBYMZPHJLSSQWKKOOFQKIXACTRBCTTZPZBEPPDSUVAEEVUTQH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EBKEQSFNKMDUTSWLCWYXURAPGJICXTYGZLMUSYNFCPFABEVFHYQMNBTHDDNLEBWLYHYXPIUJQGHKTQUYYJJGRUTZEEVOVWHETKRNLJBPDXPLUIHBJUKHONRDUVKXBHPQLDBFFWOUWMSOWNOVFAZFCMMEIOQAATGRGIKPSJLIVQVSKZIIJSDKMXRRBVBDGOAYOLQKZODNXTLTWNCJPARFO");
    tmp_msg_0.value.assign("MDOVGTSYAJHAAIXRZCPCXDNKCTKXUQUEEOKVYPXIZVPIPDEGHTDQWSWQDDNJQSSMDMKYYXBUGXQYFCRMJETKWIQXRZMSUIBORWZWNPHBATAXSALEBZRGTTKURJUVLMEMCZSLGCLZFHKLEZHOVBSOEWYHPWZJDHCORWSOMGXMNJDRYFGIHABJINPYV");
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
    msg.setTimeStamp(0.3256964027182);
    msg.setSource(5903U);
    msg.setSourceEntity(33U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(206U);
    msg.name.assign("VCCTQADVPKMTNFHXUAGBWOTRGBWS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DMGOXRUDMGAWRHGOOCYWLYDQISNBAGURYTEEMRNVKSVNFHHPPMDCQQVBOANXTESQQZBIYQPMAHNBUGUAPTQRBCVFKJP");
    tmp_msg_0.value.assign("BNCDGYWAOVSDHAXASRPYKVPKWFOMIQEHRFATMYHKNLFFXHIEZGQUGTQJBIXLFNZNSBLKRLEAKFCIPVDNHSTOETEKCERD");
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
    msg.setTimeStamp(0.08622655361487797);
    msg.setSource(7620U);
    msg.setSourceEntity(184U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(219U);
    msg.name.assign("RFELODJALBQVUMXXQRUOSAXFXXHASPLTGEWNIMIBRKACGRIWJSQKPVZTULFTFTLRXNYGABTJYALWLYKDCVUZQWVPOCACYYDFOBVOBDCLZGDXSYFRMQFEJSIH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NCYGQDAMUXBGHMKDLCVOELMLUCEGJMTVDIUNGTXIZVBJLIEQFAIKVWBQKTSKYURWOJJCOXVIPGQOJIRRH");
    tmp_msg_0.value.assign("MXZXIVQIPVTZKJAPVXUBINMRGLEAHIWXRYAKCMOAJMGCSYQUFUVGSTKNTRGCH");
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
    msg.setTimeStamp(0.6343408373599004);
    msg.setSource(61183U);
    msg.setSourceEntity(184U);
    msg.setDestination(53066U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WFNGISUKYRWBRIFWDAXFIQRDQOAXMOHNRCUHMDKFFXHQUDECEYTVWVLBISZLIPCTZNJEEMZWCRYDJZQYNZIPRWMXOHNWFMPTHLAVCKMYHJZXPQQCQCTEGNRAAUMZDNYSYKOSQLBLAZDTTAHOFBKGOCHYGUJITNMUOIBKSCWGNGXVSZ");

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
    msg.setTimeStamp(0.015606217902182085);
    msg.setSource(43209U);
    msg.setSourceEntity(41U);
    msg.setDestination(17222U);
    msg.setDestinationEntity(135U);
    msg.name.assign("TXZXSPPGABLVTIWOUIJQBEWHSRXOHYZVSCZMAZHYVEVHGKMNQDBCEAZYLGIVWUUUDXWHZSVQAEEDPIHOAPAGVMQKNORFPGDUGIJOBBLOYPTICLPDFSYKLPUBNHNXMLMFFTDJMUXRSSCQQISNKCVEGWKGPTOJLYRBERWHXMAXUVIRWYFWBFT");

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
    msg.setTimeStamp(0.8420451708521861);
    msg.setSource(51224U);
    msg.setSourceEntity(250U);
    msg.setDestination(42644U);
    msg.setDestinationEntity(38U);
    msg.name.assign("IABRXJZMXKQBPVEAGBYFFPFMRLSYATUKCFAXGCYKTBIHDCPWBVZAIXVQMTBMNMWOCXLCY");

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
    msg.setTimeStamp(0.12796146017629018);
    msg.setSource(62738U);
    msg.setSourceEntity(116U);
    msg.setDestination(38568U);
    msg.setDestinationEntity(5U);
    msg.timeout = 2359028859U;

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
    msg.setTimeStamp(0.14325419802617678);
    msg.setSource(62542U);
    msg.setSourceEntity(208U);
    msg.setDestination(20410U);
    msg.setDestinationEntity(229U);
    msg.timeout = 3293264791U;

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
    msg.setTimeStamp(0.5140920250948502);
    msg.setSource(571U);
    msg.setSourceEntity(157U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(232U);
    msg.timeout = 1652034836U;

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
    msg.setTimeStamp(0.7967146939701766);
    msg.setSource(21072U);
    msg.setSourceEntity(163U);
    msg.setDestination(23544U);
    msg.setDestinationEntity(158U);
    msg.sessid = 3378294209U;

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
    msg.setTimeStamp(0.5504103321354588);
    msg.setSource(32786U);
    msg.setSourceEntity(210U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3435143789U;

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
    msg.setTimeStamp(0.5031177979803944);
    msg.setSource(52326U);
    msg.setSourceEntity(97U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(212U);
    msg.sessid = 2349617405U;

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
    msg.setTimeStamp(0.16939764782642552);
    msg.setSource(7284U);
    msg.setSourceEntity(220U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(164U);
    msg.sessid = 998696905U;
    msg.messages.assign("TNMHBCHRUWADRBI");

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
    msg.setTimeStamp(0.47958346720756406);
    msg.setSource(36480U);
    msg.setSourceEntity(190U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(72U);
    msg.sessid = 3248378846U;
    msg.messages.assign("VZSXWSLCVYEELLXGDPHOSNYNFRFXIOQTDLBUKACUEOVKPNHJLZECCPZHQVUWXDKAFAERHMHZORBOXNIKWCPCQSSDGDWQESCBDNCZQVPEQPRIRYMPURMUTGJHRUBTQJJLJSWKVDYTDGAKPOMVNTFSKHUXTLMLQJYYTVWAWPNUTJQZMZP");

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
    msg.setTimeStamp(0.10043942711373188);
    msg.setSource(11627U);
    msg.setSourceEntity(116U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(93U);
    msg.sessid = 4028288412U;
    msg.messages.assign("GZGTVFXHXXAQCDNFXRWICNAHLEIYPJJBXIMZBUYBMZZGAOFKSUHQBXVGKMWPOESPXAEJCMONUTWQYAOYCNDELVWSULGE");

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
    msg.setTimeStamp(0.6635261986837755);
    msg.setSource(38466U);
    msg.setSourceEntity(100U);
    msg.setDestination(14090U);
    msg.setDestinationEntity(93U);
    msg.sessid = 4136439058U;

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
    msg.setTimeStamp(0.12957544371824536);
    msg.setSource(1030U);
    msg.setSourceEntity(85U);
    msg.setDestination(28225U);
    msg.setDestinationEntity(226U);
    msg.sessid = 981785531U;

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
    msg.setTimeStamp(0.1847086738468089);
    msg.setSource(34971U);
    msg.setSourceEntity(241U);
    msg.setDestination(23995U);
    msg.setDestinationEntity(143U);
    msg.sessid = 125933400U;

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
    msg.setTimeStamp(0.005263218167804173);
    msg.setSource(2386U);
    msg.setSourceEntity(237U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(72U);
    msg.sessid = 2157516878U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.36089677568461587);
    msg.setSource(46827U);
    msg.setSourceEntity(7U);
    msg.setDestination(41471U);
    msg.setDestinationEntity(90U);
    msg.sessid = 3465680522U;
    msg.status = 150U;

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
    msg.setTimeStamp(0.6989247805738783);
    msg.setSource(34227U);
    msg.setSourceEntity(62U);
    msg.setDestination(21525U);
    msg.setDestinationEntity(1U);
    msg.sessid = 2440833604U;
    msg.status = 242U;

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
    msg.setTimeStamp(0.21104424111782105);
    msg.setSource(28962U);
    msg.setSourceEntity(170U);
    msg.setDestination(58916U);
    msg.setDestinationEntity(20U);
    msg.name.assign("MBWXJTAAUAFSBKYDFAAWVJUTEGPDPDCBXFYHSBVGKOSMYSXEUGPCHWXZMTLBGXUKINYQPNQWKDTNQQGXYQLYPUBMGJZJDLTBOEIGKAUVTKMPWAQEZCJCRTDVABLEIBFNOVNLIAZRJUJIOICESVDGMUGRHCQFPQMXXREGTKWKAYNZODLVHIEYCZHSZIRCVHTFHFFMOKRZ");

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
    msg.setTimeStamp(0.040064549243838954);
    msg.setSource(22769U);
    msg.setSourceEntity(33U);
    msg.setDestination(30663U);
    msg.setDestinationEntity(59U);
    msg.name.assign("NNTINNNCEMSDGHNPXFBMWQZOIODLSKEUHPDWKHPVSDPGJUIIKPRASCGECYZWQEYIKAAYUMHBQJFAFHCHZUTRIDQAYJQJSYUIBWHYTSANTCWXSQXWXTDOXRMZTQEELCMKVJGADBEHSNPGOYWXPOROYUVUFKOGMCZWXXCUJYJLTRGZLBDBFVFVUADGAVFJFEUVQFIYKIKMWLLPPRBZWDPREKZOORQZTGMBGNBCFOJVMXVNLZMTQLTSR");

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
    msg.setTimeStamp(0.6500207393777415);
    msg.setSource(7766U);
    msg.setSourceEntity(202U);
    msg.setDestination(61377U);
    msg.setDestinationEntity(20U);
    msg.name.assign("OHFOXJWGEIIYWGEZZSJNBZJSAIRLLRXHBAOWVJAYHBRGOCKNSUBETWXDRELKYWMKSKGLYDHPZSIDLFWWVPIFUJEOTTZPYXNUMJGKAYPIUMDVYGQHIQIKAXMAQQEKSUBYDUGYTCFHMPVQAENTVSSRVDMZCHBOCWNSVCJBHWIXVMRKFRCCPOXBTDPNQPMETGAXZIVQHLVLKTYNATCM");

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
    msg.setTimeStamp(0.9282031158861391);
    msg.setSource(8032U);
    msg.setSourceEntity(249U);
    msg.setDestination(62137U);
    msg.setDestinationEntity(97U);
    msg.name.assign("CQWPQRFSGLDXMZYIELLJUEGKLPKMHREBUACFGBGGGNIPUXMFZLOADFQVLWNDQEITCMHIGGJVZBHEDKRJDUCKJOYURDVMVP");

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
    msg.setTimeStamp(0.5990521845136574);
    msg.setSource(37953U);
    msg.setSourceEntity(118U);
    msg.setDestination(8288U);
    msg.setDestinationEntity(223U);
    msg.name.assign("IFEYWGJZGZSZYATVKQD");

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
    msg.setTimeStamp(0.6843286987851871);
    msg.setSource(7070U);
    msg.setSourceEntity(150U);
    msg.setDestination(11385U);
    msg.setDestinationEntity(22U);
    msg.name.assign("TIMLDRJOAFAWGQPTLIZXNONVXCJYGVIAQDLNZZQEFYWBXBHAVLKHYUHLZYOKEXCXRITMJAUVYYUKG");

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
    msg.setTimeStamp(0.5698723111666822);
    msg.setSource(26025U);
    msg.setSourceEntity(6U);
    msg.setDestination(51716U);
    msg.setDestinationEntity(239U);
    msg.type = 239U;
    msg.error.assign("GGNHDQQYCNJUSKUPEGRDLHPSGADPOLUKFIEYFZXIOHVYXMESFGIOJWJOMHHRYPLVODSGZMMOFLONPUKKUAAVUWYNKRKEOQHWSXYQDZVADWHFQOGXJZDUQHUXAPVBLB");

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
    msg.setTimeStamp(0.5977829054032812);
    msg.setSource(7116U);
    msg.setSourceEntity(180U);
    msg.setDestination(51268U);
    msg.setDestinationEntity(53U);
    msg.type = 20U;
    msg.error.assign("ZQWHCXOZXKIMDXYYNAEJLBSPLJFXCHKQPFKWEUBTMNBAXGRAOZBALYGPSYALYZBMKDVVSGFHRIQBWTHZEIFRPQUZUCZZXOOJPHLXUWESSVUMIAEEHKINNQPJDRODPKSFSE");

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
    msg.setTimeStamp(0.9025195875210528);
    msg.setSource(11912U);
    msg.setSourceEntity(99U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(253U);
    msg.type = 44U;
    msg.error.assign("COONTGFQUBGVGHDNRRRHXFSDHXQNQAVEIEZGHVFAQDLWWQZRFUYEKKVKSTFHKKERIRLXPBPDXPMTGFMOFWLJWMTOOHMQBXSBNVKPJUBAIMPRSTJYFZRJSMTEBOUDGNVWCPNZACOGATLJMYEXDXYQSUACGCAUNDIACBIBECOVHYZNPOAA");

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
    msg.setTimeStamp(0.4481436905721037);
    msg.setSource(43270U);
    msg.setSourceEntity(171U);
    msg.setDestination(49981U);
    msg.setDestinationEntity(87U);
    msg.seq = 39760U;
    msg.sys_dst.assign("QFGGWVTTJJSDOSRRXUBERNSGNNUFLIEPCHYYKDCAAIBIVHGKKSWPTAUCBHBCFGZVKOTQDGABTOY");
    msg.flags = 202U;
    const char tmp_msg_0[] = {52, 47, -128, 6, -43, -55, 47, 94, 58, -95, 24, -110, -78, -24, 82, 13, 33, -30, 102, -25, -30, 58, -75, 54, -31, 104, 4, 10, -24, 99, 71, 119, -109, 63, -14, 69, -69, -70, -43, -10, 103, -116, 70, 30, -96, -122, 117, 124, 5, -13, -2, 118, -11, 124, -68, 90, -12, -13, 19, 61, -7, -95, -95, -29, 82, -111, -19, 126, 91, 81, 100, 123, 37, 36, -29, -98, -66, 80, -69, 53, -66, -109, -110};
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
    msg.setTimeStamp(0.7671988922296037);
    msg.setSource(21585U);
    msg.setSourceEntity(17U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(92U);
    msg.seq = 36728U;
    msg.sys_dst.assign("AEFETDIBHNRIFTMQD");
    msg.flags = 24U;
    const char tmp_msg_0[] = {43, -77, 65, -10, -99, -75, 43, -119, 116, -17, -95, -64, -12, 7, -126, -12, -27, -110, 62, -26, -57, 26, 15, -78, 104, 21, 4, -65, 124, -91, -101, 117, 92, 30, 118, 17, -122, 97, 19};
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
    msg.setTimeStamp(0.7159054112586986);
    msg.setSource(2766U);
    msg.setSourceEntity(54U);
    msg.setDestination(58068U);
    msg.setDestinationEntity(15U);
    msg.seq = 6756U;
    msg.sys_dst.assign("DASOWOURKEXPCLOHABDZABUWSBTEAHYZ");
    msg.flags = 13U;
    const char tmp_msg_0[] = {-103, 4, -93, -92, 15, 108, -43, -36, 119, 67, 79, 1, -87, -79, 102, 20, -98, -36, 50, 113, -105, 81, -24, 109, 92, 26, -36, 4, 30, 28, 38, -4, -63, 23, -65, -103, 99, 66, 42, -70, 64, -10, 89, -79, -68, 91, 36, -27, 64, -55, 39, -29, -15, 86, -11, -113, -71, -24, 66, 58, -102, 84, 119, -31, -19, 57};
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
    msg.setTimeStamp(0.3700842745240831);
    msg.setSource(9584U);
    msg.setSourceEntity(213U);
    msg.setDestination(20105U);
    msg.setDestinationEntity(51U);
    msg.sys_src.assign("CZOXBRMEQDZQUSAKPIKITMNPXOVTFRVCXHRKGFEPWDGFXZXGKQPWKLZNPOSSBUPFKGJVDHEMMQJREOMTZFPYNLLBBSJLWIBXIHJDEVIYUMWMGNMIYRIWLOJAACKVZTYQWWLRFHCNUYICPVATHWZSFRGQSATXORWU");
    msg.sys_dst.assign("NMHRBUSVJZMIVYJKMEPHE");
    msg.flags = 158U;
    const char tmp_msg_0[] = {5, -113, 123, -128, -38, 63, -60, -37, 36, 37, 125, 76, 75, -86, 21, 39, 33, -7, 109, -16, -75, -33, -66, 112, -126, 28, -82, 80, -31, -28, -90, -126, -69, 112, 87, -88, 67, 22, 84, -114, -36, 42, -48, 69, 34, -51, 124, -16, -3, -112, -40, -40, -47, -93, -124, 22, 7, -123, -40, 46, -17, -52, 80, 126, -60, 105, 124, -41, -84, -54, 31, -94, 23, -49, 75, 111, -10, 60, -121, -43, -55, 83, -100, 114, 11, 33, 87, 94, -50, -6, 88, 42, 43, -12, 11, 88, 29, -128, 77, -79, 30, -109, 73, 101, -118, -50, -117};
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
    msg.setTimeStamp(0.5944308688273751);
    msg.setSource(9030U);
    msg.setSourceEntity(111U);
    msg.setDestination(46829U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("UMMWIQXNWFDTLUWWIOQNPHMKWSHGFJZZGAGTUCTZMSHIFL");
    msg.sys_dst.assign("OUEEYJIRNANBFQUSQIREVCKRQFSXSM");
    msg.flags = 11U;
    const char tmp_msg_0[] = {12, -83, 61, 74, 34, 48, -90, 91, 104, -106, -16, -6, 2, -76, 104, -86, 60, 46, 80, 89, 125, -109, -2, 21, -105, 112, 42, 49, -83, -57, 92, -22, -35, 11, 5, -106, -90, 32, -43, 119, 37, -36, 1, -69, -6, 76, 104, 0, 50, 90, -31, -14, -104, 0, -4, -17, -35, 6, -122, 59, -29, -127, 114, -47, 25, -52, -39, 75, -113, -114, 65, 99, 9, -81, 3, -30, -77, 48, 29, 118, 94, -113, 26, -26};
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
    msg.setTimeStamp(0.6211855300830298);
    msg.setSource(34040U);
    msg.setSourceEntity(179U);
    msg.setDestination(17002U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("WFNYOSOAIBWIDXWVZKTKIODRZCKMKKOOHLCJBOMYHWCUUNQVPLVGAJFUPYHUMNXBRMTYIABUTCEEAIYXFDLIXQUEWJUCDDXRWFTR");
    msg.sys_dst.assign("JNSZZIFGQQMEWUKTQBMFVJZYCZRXJYVAUJSMKFASBTIROVOTFLNPWEHHODPDYOYHRNNEEXGEAZKXIRGQLDCCJMFJPITFZDERRDCCCDLUMEBAOXWGUPP");
    msg.flags = 116U;
    const char tmp_msg_0[] = {80, 38, 10, 122, 108, -123, 115, 57, 119, -53, -92, 100, 105, -90, -96, 5, 48, -116, -83, 91, 103, -112, 23, 42, -38, -27, 21, 85, 16, 91, -122, 67, 46, -53, -101, 62, 115, -92, -62, 31, -45, 16, -128, 83, -89, 113, 66, -96, 89, -88, 71, 61, 75, 64, 12, -102, -103, 63, -76, 46, -24, -63, -49, -54, 15, 3, 62, 95, 40, 92, 109, -109, -76, -119, -68, -82, -108, -65, -74, -119, -50, -102, -72, 105, 35, 99, 10, 1, 90, 96, -121, 37, 26, -30, -39, -127, -26, -35, 90, -38, -28, 87, 37, -76, 4, -9, 114, -55, -111, 14, -7, -33, -79, 7, 14, -119, 97, 80, 43, -72, -41, 26, -53, -15, -3, 28, 43, 120, -36, 104, 116, -109, -106, -107, -124, 7, -128, -54, -27, -36, 9, -21, -63, -126, 113, -113, -83, 92, -47, 59, -85, 100, 31, 43, 98, 30, -39, -56, 111, 122, -75, -44, 97, 32, -58, 103, 22, 107, 68};
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
    msg.setTimeStamp(0.46396002071035614);
    msg.setSource(53184U);
    msg.setSourceEntity(29U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(126U);
    msg.seq = 63390U;
    msg.value = 190U;
    msg.error.assign("YXKJUIMLSAYDIRSYJYADSQOFNQAKWEWJONTGJQKHBILRCCWCEKVOLXNBDYNPCTNMSLTJWMLGTLVOHPDCDFWNZSEAXGQIJEWGXC");

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
    msg.setTimeStamp(0.7194514797561038);
    msg.setSource(43075U);
    msg.setSourceEntity(24U);
    msg.setDestination(18583U);
    msg.setDestinationEntity(163U);
    msg.seq = 57510U;
    msg.value = 220U;
    msg.error.assign("XOQCRNMDJGYDCUCYCKXUNZQWWZEDTORDOXSVAKLWIX");

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
    msg.setTimeStamp(0.17184884812594514);
    msg.setSource(46462U);
    msg.setSourceEntity(69U);
    msg.setDestination(13343U);
    msg.setDestinationEntity(38U);
    msg.seq = 12425U;
    msg.value = 205U;
    msg.error.assign("NLBZFLMYNQNWJAGKRDWNLAZVXPVBLBVKUNXYCTRJPOKAGUQHJQHFDAGDEPZZIZKPOMRSFXPVSNLE");

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
    msg.setTimeStamp(0.4074458216704996);
    msg.setSource(6212U);
    msg.setSourceEntity(9U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(206U);
    msg.seq = 59824U;
    msg.sys.assign("QHBOQNLBLDBXPWFDZQYOKZUCLWZRSBIRTIMFPLFASWUDFNIHCJJFGSRNFZOXRCJHHTAULBDEANGPLFWGOUTZZDJEXXDVUPMUVIVSKXZSBWDJVYSEHYEYKHYUXYMYFMGMHWXPWSQMCNATGEWODALZSOAQKSIYYNCRPJCNNKFVMAQMWRBIQHGAPEQARNKBUGIXCJJGOBGSDJTLDTM");
    msg.value = 0.911718688005474;

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
    msg.setTimeStamp(0.0918650681480464);
    msg.setSource(39306U);
    msg.setSourceEntity(3U);
    msg.setDestination(64087U);
    msg.setDestinationEntity(190U);
    msg.seq = 60816U;
    msg.sys.assign("LKMPGNZNSHSTPXQRECXLWJCPKMAUDZTNDUGRFWFBOYJZDJBMLN");
    msg.value = 0.4726690806023106;

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
    msg.setTimeStamp(0.7700367122132155);
    msg.setSource(9501U);
    msg.setSourceEntity(114U);
    msg.setDestination(41460U);
    msg.setDestinationEntity(121U);
    msg.seq = 4684U;
    msg.sys.assign("JFTRZORONANNEFMNVSQJOMMGHIYZEMGUMWHFVPHYKYVQKWLGLAVCIGQPJUCBIZZMMDCFGFAZWVHMKLRVDRDILLSOCTWHEXEXQSXBZYDNCFBNHP");
    msg.value = 0.4515260654418628;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.47388061629126854);
    msg.setSource(4761U);
    msg.setSourceEntity(109U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(96U);
    msg.seq = 15020U;
    msg.sys_dst.assign("YHGCAEMTWIEUNODVJMJ");
    msg.timeout = 0.27226603809581806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.3459889800276099);
    msg.setSource(45394U);
    msg.setSourceEntity(242U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(93U);
    msg.seq = 56413U;
    msg.sys_dst.assign("OBZQJQTNHTBXOETIKXFLBPLWEKCCAUU");
    msg.timeout = 0.1581753991159779;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.6411170737049183);
    msg.setSource(58637U);
    msg.setSourceEntity(128U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(33U);
    msg.seq = 41960U;
    msg.sys_dst.assign("AGVMOEOWPEOOFJUOYQJZZWJRZQBZTBFQXRHBYZQKHYPRLQIYVNDNTISHAPDBGWCTUMFBKHULGEPI");
    msg.timeout = 0.9911521351347744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5001995749425416);
    msg.setSource(10120U);
    msg.setSourceEntity(159U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(94U);
    msg.action = 107U;
    msg.longain = 0.03441740055530895;
    msg.latgain = 0.08411838588767706;
    msg.bondthick = 884687433U;
    msg.leadgain = 0.8307806528288753;
    msg.deconflgain = 0.911748644883499;

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
    msg.setTimeStamp(0.394316369394103);
    msg.setSource(57654U);
    msg.setSourceEntity(113U);
    msg.setDestination(29451U);
    msg.setDestinationEntity(110U);
    msg.action = 242U;
    msg.longain = 0.8679215606572824;
    msg.latgain = 0.2596484680081851;
    msg.bondthick = 1566888716U;
    msg.leadgain = 0.877337653070824;
    msg.deconflgain = 0.8638474712504477;

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
    msg.setTimeStamp(0.30815450717357973);
    msg.setSource(24629U);
    msg.setSourceEntity(41U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(81U);
    msg.action = 97U;
    msg.longain = 0.6265655544206012;
    msg.latgain = 0.11301549709977565;
    msg.bondthick = 466709944U;
    msg.leadgain = 0.8492595888915929;
    msg.deconflgain = 0.5986095048735626;

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
    msg.setTimeStamp(0.36256999578913784);
    msg.setSource(60283U);
    msg.setSourceEntity(97U);
    msg.setDestination(62147U);
    msg.setDestinationEntity(90U);
    msg.err_mean = 0.9767352858800871;
    msg.dist_min_abs = 0.18993685267225568;
    msg.dist_min_mean = 0.6890986008443759;

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
    msg.setTimeStamp(0.3669466548535043);
    msg.setSource(17978U);
    msg.setSourceEntity(76U);
    msg.setDestination(29120U);
    msg.setDestinationEntity(80U);
    msg.err_mean = 0.4186047465260818;
    msg.dist_min_abs = 0.3795656686768123;
    msg.dist_min_mean = 0.2155828722532378;

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
    msg.setTimeStamp(0.45886503195178974);
    msg.setSource(48259U);
    msg.setSourceEntity(248U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(174U);
    msg.err_mean = 0.4684290039409261;
    msg.dist_min_abs = 0.08660413544355638;
    msg.dist_min_mean = 0.36985477953572865;

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
    msg.setTimeStamp(0.7600127576545807);
    msg.setSource(15490U);
    msg.setSourceEntity(33U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(70U);
    msg.action = 157U;
    msg.lon_gain = 0.23253130627000018;
    msg.lat_gain = 0.4435734349128241;
    msg.bond_thick = 0.7890292307042824;
    msg.lead_gain = 0.8581239471483244;
    msg.deconfl_gain = 0.8147804284963556;
    msg.accel_switch_gain = 0.35492521678237643;
    msg.safe_dist = 0.5792653948806465;
    msg.deconflict_offset = 0.7267909582740808;
    msg.accel_safe_margin = 0.4428353639787074;
    msg.accel_lim_x = 0.4644651248209971;

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
    msg.setTimeStamp(0.2482906426421373);
    msg.setSource(32036U);
    msg.setSourceEntity(12U);
    msg.setDestination(11040U);
    msg.setDestinationEntity(35U);
    msg.action = 27U;
    msg.lon_gain = 0.3472512715073074;
    msg.lat_gain = 0.695520374639357;
    msg.bond_thick = 0.45274133231851166;
    msg.lead_gain = 0.29690886328046995;
    msg.deconfl_gain = 0.2952839119687297;
    msg.accel_switch_gain = 0.7494335182761778;
    msg.safe_dist = 0.4104159175616048;
    msg.deconflict_offset = 0.5508176440875936;
    msg.accel_safe_margin = 0.4087236741006862;
    msg.accel_lim_x = 0.43543067582517847;

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
    msg.setTimeStamp(0.8526749589077681);
    msg.setSource(40525U);
    msg.setSourceEntity(192U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(43U);
    msg.action = 87U;
    msg.lon_gain = 0.006908819648632991;
    msg.lat_gain = 0.02246089631596515;
    msg.bond_thick = 0.7270842572639177;
    msg.lead_gain = 0.7491137481887247;
    msg.deconfl_gain = 0.8687143402684856;
    msg.accel_switch_gain = 0.4341399524594046;
    msg.safe_dist = 0.9600449443741125;
    msg.deconflict_offset = 0.3914961340752945;
    msg.accel_safe_margin = 0.4462205042075226;
    msg.accel_lim_x = 0.8863395318663791;

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
    msg.setTimeStamp(0.9828511436012608);
    msg.setSource(33127U);
    msg.setSourceEntity(79U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(163U);
    msg.type = 105U;
    msg.op = 244U;
    msg.err_mean = 0.5564790664881794;
    msg.dist_min_abs = 0.49833823358804086;
    msg.dist_min_mean = 0.3035123078894565;
    msg.roll_rate_mean = 0.7322185067244277;
    msg.time = 0.307725635478298;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 103U;
    tmp_msg_0.lon_gain = 0.12950033893607327;
    tmp_msg_0.lat_gain = 0.4628551011679739;
    tmp_msg_0.bond_thick = 0.5189470315959775;
    tmp_msg_0.lead_gain = 0.7862428027648115;
    tmp_msg_0.deconfl_gain = 0.44457050266038867;
    tmp_msg_0.accel_switch_gain = 0.6800288073991992;
    tmp_msg_0.safe_dist = 0.3591324673344264;
    tmp_msg_0.deconflict_offset = 0.31382673542454875;
    tmp_msg_0.accel_safe_margin = 0.9665188469029866;
    tmp_msg_0.accel_lim_x = 0.21440471915812975;
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
    msg.setTimeStamp(0.8519228781201174);
    msg.setSource(3369U);
    msg.setSourceEntity(198U);
    msg.setDestination(53248U);
    msg.setDestinationEntity(47U);
    msg.type = 47U;
    msg.op = 172U;
    msg.err_mean = 0.9588660464809734;
    msg.dist_min_abs = 0.13262479878532152;
    msg.dist_min_mean = 0.5500345542498787;
    msg.roll_rate_mean = 0.5833080216347728;
    msg.time = 0.8942496664053836;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 237U;
    tmp_msg_0.lon_gain = 0.8361634828846239;
    tmp_msg_0.lat_gain = 0.020330415295374604;
    tmp_msg_0.bond_thick = 0.18896307122328382;
    tmp_msg_0.lead_gain = 0.020114304975875963;
    tmp_msg_0.deconfl_gain = 0.8174757937459833;
    tmp_msg_0.accel_switch_gain = 0.3433374286930374;
    tmp_msg_0.safe_dist = 0.7389713519228612;
    tmp_msg_0.deconflict_offset = 0.7202305130206059;
    tmp_msg_0.accel_safe_margin = 0.3019881459739654;
    tmp_msg_0.accel_lim_x = 0.8384418072119959;
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
    msg.setTimeStamp(0.33882651928825946);
    msg.setSource(11914U);
    msg.setSourceEntity(78U);
    msg.setDestination(10336U);
    msg.setDestinationEntity(47U);
    msg.type = 10U;
    msg.op = 113U;
    msg.err_mean = 0.68069404608621;
    msg.dist_min_abs = 0.4959276944603087;
    msg.dist_min_mean = 0.617581968699243;
    msg.roll_rate_mean = 0.6919603678703461;
    msg.time = 0.7864031606313617;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.5627925368679199;
    tmp_msg_0.lat_gain = 0.2952682587488127;
    tmp_msg_0.bond_thick = 0.016648459344144828;
    tmp_msg_0.lead_gain = 0.978402259167403;
    tmp_msg_0.deconfl_gain = 0.6974587627234934;
    tmp_msg_0.accel_switch_gain = 0.6366501115099444;
    tmp_msg_0.safe_dist = 0.45770467192246644;
    tmp_msg_0.deconflict_offset = 0.5298522656042638;
    tmp_msg_0.accel_safe_margin = 0.9974150000320164;
    tmp_msg_0.accel_lim_x = 0.9910618799870481;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.8971138996609017);
    msg.setSource(58833U);
    msg.setSourceEntity(250U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.4570006497176524;
    msg.lon = 0.1552830784530509;
    msg.eta = 1191877037U;
    msg.duration = 39134U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.4684945236562974);
    msg.setSource(48880U);
    msg.setSourceEntity(161U);
    msg.setDestination(22499U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.49551382896053864;
    msg.lon = 0.6213531196106907;
    msg.eta = 4191366770U;
    msg.duration = 62009U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.8249416038812629);
    msg.setSource(56137U);
    msg.setSourceEntity(36U);
    msg.setDestination(53150U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.25445532169253626;
    msg.lon = 0.3466535132217381;
    msg.eta = 2062606403U;
    msg.duration = 56002U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.10306734561622999);
    msg.setSource(29295U);
    msg.setSourceEntity(30U);
    msg.setDestination(17086U);
    msg.setDestinationEntity(205U);
    msg.plan_id = 49702U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9318929168259615;
    tmp_msg_0.lon = 0.8982421356127953;
    tmp_msg_0.eta = 3099250896U;
    tmp_msg_0.duration = 41036U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.027199728490403086);
    msg.setSource(33401U);
    msg.setSourceEntity(207U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(162U);
    msg.plan_id = 28790U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.44504457062717595);
    msg.setSource(44135U);
    msg.setSourceEntity(24U);
    msg.setDestination(30731U);
    msg.setDestinationEntity(97U);
    msg.plan_id = 18527U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.05746872744474818);
    msg.setSource(22342U);
    msg.setSourceEntity(213U);
    msg.setDestination(10493U);
    msg.setDestinationEntity(233U);
    msg.type = 23U;
    msg.command = 142U;
    msg.settings.assign("SIZAPXSJJSTTNAAIDMSBORGKWHNHTJHVPVWYTZKCSMLMIGGFVLTFODLYSWDCMNXEDOUSRBAPPOJQHRFQLQONAPVYTSCILEVIRUZDRAGTNZF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62997U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6011447720635775;
    tmp_tmp_msg_0_0.lon = 0.5030449385413783;
    tmp_tmp_msg_0_0.eta = 3346013574U;
    tmp_tmp_msg_0_0.duration = 21110U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OCSQSVEIRWNGJVAIBMPYIYCPDGLBFDKXBMFRUXYMORXWYHDCYAOUULLWXUUUJEPBFFEQGBVEWDVUKTEKSKBKNMVRYEGTAJFOYLTWSZNIIGTRTBRLYVAKHQWSCWOQGQCOVKQZUMDJQOHJTXNKQNGPPPZJJMZZVNIMGHPWSHWZKGXTOMYSFUELWVFCDIAGZAADSBMXOHLFPPQBCNFYHXNFLRULIDHQEITDXDZBTSJAMETJCSVPJXRAZLAZHCEKCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.6425779914856412);
    msg.setSource(44361U);
    msg.setSourceEntity(124U);
    msg.setDestination(7760U);
    msg.setDestinationEntity(150U);
    msg.type = 102U;
    msg.command = 208U;
    msg.settings.assign("QHBHNAIZILZNWJBWNKWGBVSMCXIJCKUJTMDNUISSGVQMYFQRTSNIKRAUSPGOWVTQIRWERKSDFYLCEOWFTGOMBRGHDYNHPCKANPVDMLUTIKVUDXZEMJZPFTVXKURWDKXAZZLPEAPCUFHJLDSPGOYRHHLFFBDUQXEOGPAXYJQKTCODGLA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22192U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BWAONSZPXBTCPDSPRMTLSJVZMGGGUFZZKIIVFALVQNEYZEZRJXMHYGGMORROCRBHYLAHOADQCDIRHUBXQUQENGEBKXQZOHWQMFNSWCPTKNLAOUNCAHOOVJFPIEYKMWYWSITKWTHMSRTJGDSRTVNZXFPOYHJACXMKBNFGVCDYDLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.7053693236225669);
    msg.setSource(13373U);
    msg.setSourceEntity(13U);
    msg.setDestination(52574U);
    msg.setDestinationEntity(212U);
    msg.type = 103U;
    msg.command = 221U;
    msg.settings.assign("ZSEOBNCQGQYGEGMIOAJYRJQQPJGMBXLVKSLVCHZECRTOBYILBZSMRUDBWQAPNCUXUNCABXXYQOTICWKGJJICDWUQGWTXQFRLUYHMMGKNWDCUISIIXNBPGFHDTKFBTKBORSVFHKEDVFCEVYTGEZRXHJSNPOHAZVKMJSVHYSZDXMUAVIXHFHFSZJEXLEFZVHFOODFZKJWDLCULVBOTIDWRTLMEAYEUWUWPNZRPQTIPNOLTNQKA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39856U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DFHDAUZJLYPTQWVDAKYTNOQPGKTMEBCYUIEWOVHOWCGFOAIJSXMSEBQJETYQVFFRCTUELZVONLFIUJSVVXCWNZLHWRDJOEOBEADABLJIMGVMRHTPXPLXHRXDNVPMNBITZXUNWAQDKQMCJKSKBRWULEWGBFRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.20449283929094175);
    msg.setSource(58036U);
    msg.setSourceEntity(65U);
    msg.setDestination(26372U);
    msg.setDestinationEntity(194U);
    msg.state = 98U;
    msg.plan_id = 26936U;
    msg.wpt_id = 254U;
    msg.settings_chk = 54945U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.7130514077467681);
    msg.setSource(41073U);
    msg.setSourceEntity(180U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(228U);
    msg.state = 161U;
    msg.plan_id = 9542U;
    msg.wpt_id = 17U;
    msg.settings_chk = 4697U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.5756749073598171);
    msg.setSource(30494U);
    msg.setSourceEntity(220U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(64U);
    msg.state = 167U;
    msg.plan_id = 21827U;
    msg.wpt_id = 202U;
    msg.settings_chk = 47803U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8718034373608275);
    msg.setSource(52838U);
    msg.setSourceEntity(234U);
    msg.setDestination(5563U);
    msg.setDestinationEntity(178U);
    msg.uid = 238U;
    msg.frag_number = 131U;
    msg.num_frags = 57U;
    const char tmp_msg_0[] = {-36, 69, 81, -107, -105, -7, -11, 75, -27, 116, -73, -34, -55, 11, 89, 57, 21, 59, 105, -30, 97, 19, -64, -104, 86, 44, -121, -32, 6, -48, -118, 55, 55, -123, -74, 35, 80, 81, 12, 40, -73, -65, 11, 78, 17, -92, -59, -118, -124, 5, 46, 55, -82, 120, -65, -61, 84, -65, 15, -44, 77, -99, 85, -73, 107, -42, 110, 29, -126, -121, 119, -88, 25, 85, 74, 66, -31, 10, 48, 121, -100, -122, -20, 5, -57, 106, -11, -43, -108, -38, 44, -5, 109, -67, -43, 68, -19, 35, -123, -98, -49};
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
    msg.setTimeStamp(0.14521356378326655);
    msg.setSource(57517U);
    msg.setSourceEntity(249U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(95U);
    msg.uid = 117U;
    msg.frag_number = 29U;
    msg.num_frags = 51U;
    const char tmp_msg_0[] = {36, -50, 37, -86, -103, 18, 89, 101, 78, -40, -7, -92, 58, -23, -70, 32, -9, 81, -68, 43, -21, 81, 51, -83, -31, 2, -95, -103, 78, -119, 84, 59, -78, 85, -64, 104, 44, -93, -126, 119, -29, 62, -68, -48, -103, -23, 75, -86, -114, -2, -104, -86, -126, 87, 20, -48, -35, 15, -96, -114, -40, 16, 86, -67, 99, -103, 15, -29, -59, -39, 53, 76, -19, -84, -125, 27, 37, -128, 110, 59, -32, -78, 10, -74, -64, 66, -50, -115, -13, -69, -78, -81, -33, 89, 48, 59, -46, -104, -46, 110, 33, -122, -111, -120, 30, 27, -98, -106, -60, 95, -63, 14, -5, 88, 81, 23, 119, 109, -4, -102, -59, 96, -33, 104, 75, 39, -79, -40, -4, -92, 95, -53, 6, -78, 97, 14, 89, -40, 35, -59, 86, -79, -88, -83, 121, 99, 87, 74, 52, -2, -17, 95, -111, 87, -50, -99, -89, -11, -64, -10, 93, -109, 42, -58, 75, 73, 15, 66, -36, -34, 18, 20, 54, 27, 21, -8, -117, -126, -12, 61, -50, 5, 14, -43, -81, 21, 58, -38, -116, -8, -65, -49, 4, 43, 25, -110, 94, -95, 57, 16, -72, -89};
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
    msg.setTimeStamp(0.9249991880952839);
    msg.setSource(48118U);
    msg.setSourceEntity(213U);
    msg.setDestination(37268U);
    msg.setDestinationEntity(177U);
    msg.uid = 183U;
    msg.frag_number = 198U;
    msg.num_frags = 80U;
    const char tmp_msg_0[] = {-35, 3, -102, -87, -62, 57, 13, -48, 64, -55, 58, 11, -82, 91, 75, 73, -101, -115, -73, 100, 80, -16, -1, -20, -25, 70, -76, -104, -27, 85, -122, -125, 31, 76, 117, 3, 119, 69, 99, 81, 96, -35, -116, 46, -66, 23, -86, 62, 63, 91, -34, -14, 91, -115, 120, 51, -37, -14, 30, -7, -4, -20, 84, 41, -104, -18, 126, -85, 107, 76, 65, -40, 80, 111, 22, 98, -46, 107, 66, -47, 2, 21, -126, 67, -53, -96, -72, 90, -40, -30, -36, -59, 3, -71, 70, 40, -10, -86, 59, -12, -1, 48, 49, -30, -31, 75, -72, -119, 88, -72, 45, -65, -30, -126, 52, -96, 39, -26, -123, 126, -62, 96, -16, -97, 37, -45, -110, -69, -15, -13, -111, -17, 82, -14, 54, -27, -39, -89, 19, -29, 4, -85, -108, -49, 3, -62, -55, 10, -74, -100, 39, 51, -109, -101, -38, -36, -45, -65, -102, 46, 68, 84, 52, 35, 101, -52, -118, 62, -84, -88, 3, -36, 33, -123, -46, -114, 107, -25, 57, 41, -58, -110, 44, -122, 99, 63, -27, 8, -102, -38, -38, -90, 74, -24};
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
    msg.setTimeStamp(0.9313816582800158);
    msg.setSource(13892U);
    msg.setSourceEntity(189U);
    msg.setDestination(57763U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("VZNOEEJDSBLRNSDMGEXCHAZEPDTRYBWWNAOUOUQMXYQWHIOMNZTKPFPVWUHRBYXNETWMLTSKPXABVXZCHUXSAFMKKRWHOOJPISFMCGZLDDQSTAKWVFVYLK");
    const char tmp_msg_0[] = {-17, 44, 60, 54, 104, 108, 101, -84, 89, 61, 68, -26, -90, -96, 49, 29, 123, 113, 34, -35, 107, 58, -77, 60, -52, -121, 104, 105, 3, -70, -26, -101, 81, -20, 123, -92, -121, -3, -11, 105, 78, -98, -94, -117, 9, 93, -42, -127, -76, 17, -124, -44, 93, -53, -99, 92, 83, 112, 70, -13, -7, 96, 8, 78, -33, -65, 32, -62, 43, -119, -70, -45, 18, -34, -91, -21, 88, -52, 75, 77, -112, 86, 68, 27, -121, -106, -62, -122, -128, 89, -42, -92, 101, -4, 61, -38, 119, 76, 58, -7, -90, 117, 74, 9, -5, 124, 64, -58, -102, -105, 93, 44, -93, 15, -40, 6, 86, -126, 3, 37, -76, -83, 47, 125, 96, -122, -51, -11, -96, 43, 88, 102, 102, 6, 11, 123, -96, 113, -27, -44, -24, 28, -38, 57, 108, 48, 63, 60, 36, -3, 94, 77, 113, -117, 81, 113, 101, 109, 115, 64, 110, 108, -55, -49, -119, -33, -18, -92, -27, 121, -7, -41, 115, -79, -9, 61, 0, -126, -48, -96, -111};
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
    msg.setTimeStamp(0.4310892655261759);
    msg.setSource(2754U);
    msg.setSourceEntity(197U);
    msg.setDestination(43947U);
    msg.setDestinationEntity(196U);
    msg.content_type.assign("YAKODHXVADBONGPUOOMQPGNWVRXRRYMZNTMGHFETNFJQGDNJCDTNWXJUSCAYESHLYTDKGNVQPBLGJTARILIVJEEFUZLMKXCPFTJYQFFDOCLXDLLBBXHUCTMAZVHWEEXKWEFOOMABTBHDIRPCPCYEIWZVKBZOSMRHMWPUPUWYVKQQTGPGQQNRUFRYEZTMDFIKJGIIQANJGZVVUHSYYWRSJHUBZVSALAXPXCJNLOQ");
    const char tmp_msg_0[] = {-110, -79, -92, -72, 76, 63, -63, 37, -58, -124, -32, -60, 117, 36, 47, 88, 43, -42, 125, 34, -117, 10, -59, -99, -72, -80, -27, -6, -53, -38, -80, -22, -92, 66, 78, 70, -1, -81, -21, 116, -103, 8, 70, -3, 21, -61, -43, 40, -25, 103, -45, 53, 52, 16, -31, 45, -16, -67, 61, -99, -20, 11, 1, -37, -121, 73, 2, -29, 119, -93, 10, -105, 27, -117, -126, 4, 100, -49, -124, -12, 8, -91, 98, -25, 126, 85, 99, -28, -24, 78, -8, 105, -77, -11, -65, 78, 10, 118, 32, 124, 25, -100, 119, -5, 27, -71, 48, 16, -34, 82, -113, 38, -28, 55, 47, -25, 9, -51, 17, -39, 9, 69, -77, 89, -83, 68, -59, -121, 53, -29, 21, -97, 11, -112, 59, -127, -75, 91, -107, -81, 55, 38, 77, -23, 65, -55, -83, 45, -79, -26, 20, -110, 48, 125, 45, 57, -26, 88, -35, 27, 56, 45, -54, -60, 41, 13, -114, 118, -128, 104, -60, 77, 15, 8, -2, 21, -47, -124, 55, -29, -118, 80, -121, -116, -22, 25, -40, -32, 39, 98, 58, -68, 37, -20, -99, 71, 77, 69, -2, -45, -42, -47, 126, -2, 75, -5, -98, 15, 59, -97};
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
    msg.setTimeStamp(0.8834568976428757);
    msg.setSource(18066U);
    msg.setSourceEntity(76U);
    msg.setDestination(28046U);
    msg.setDestinationEntity(105U);
    msg.content_type.assign("GXDLKMPIAF");
    const char tmp_msg_0[] = {-24, 63, -22, 34, 44, -122, -82, -78, 53, -78, -65, 87, 54, -57, -47, -108, -77, -85, 7, 6, -23, 29, 126, -15, 81, -91, 37, 106, 40, 59, -47, -74, -100, 15, 112, -102, 32, -73, -123, -50, 44, -19, -74, -58, 68, -83, 58, 0, -106, -41, -120, -6, 3, -33, 64, -67, 30, -55, 80, -113, -4, -121, 84, -43, -94, 19, -48, 20, -43, -22, -62, -6, 4, 106, -48, 2, 55, -83, -35, 31, 125, -44, -71, -87, 108, -128, 2, -11, -69, -11, 29, 96, -26, -90, 10, -57, -40, -5, -22, -115, -107, 104, 83, 110, -116, -88, 74, 98, 95, 124, -112, 109, 89, -24, 78, 81, 43, 14, -112, -38, 91, 46, -39, -28, 15, -104, -85, -59, -83, 33, 7, -12, -53, -17, -72, 80, 85, 84, 58, 49, 32, 5, 73, 104, 59, -1, -68, 71, 71, -120, -55, -22, -31, 94, -101, 18, 86, 87, -113, -48, 36, 120, -90, 38, 106, 83, -21, 54, 87, 79, -12, -111, -10, -78, 61, 68, -34, -128, 26, -52, -80, -69, -87, 15, -31, 96, 44, 113, 64, 21, 48, -77, -47, 119, 123, 87, -62, -23, 6, -14, -74, -55, -6, 50, -101, -55, -110, -17, 51, 79, -16, -13, -97, 30, 1, -123, -3, 45, -37, 104, 80, 22, 20, -20, -123, 72, 115, -49};
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
    msg.setTimeStamp(0.8409618074549319);
    msg.setSource(5033U);
    msg.setSourceEntity(71U);
    msg.setDestination(38520U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.13289606986103575);
    msg.setSource(59663U);
    msg.setSourceEntity(125U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.4606299182637603);
    msg.setSource(12198U);
    msg.setSourceEntity(222U);
    msg.setDestination(33077U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.21458895983331205);
    msg.setSource(52178U);
    msg.setSourceEntity(224U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(53U);
    msg.target = 31196U;
    msg.bearing = 0.23101199992070331;
    msg.elevation = 0.5949704281449537;

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
    msg.setTimeStamp(0.34780015892183147);
    msg.setSource(36692U);
    msg.setSourceEntity(65U);
    msg.setDestination(46183U);
    msg.setDestinationEntity(48U);
    msg.target = 63728U;
    msg.bearing = 0.46091262169127034;
    msg.elevation = 0.15370469106884155;

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
    msg.setTimeStamp(0.7992916583938994);
    msg.setSource(45068U);
    msg.setSourceEntity(124U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(194U);
    msg.target = 8383U;
    msg.bearing = 0.5770072593781671;
    msg.elevation = 0.08408221847747388;

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
    msg.setTimeStamp(0.7635378129617795);
    msg.setSource(34436U);
    msg.setSourceEntity(206U);
    msg.setDestination(29493U);
    msg.setDestinationEntity(123U);
    msg.target = 48941U;
    msg.x = 0.3605808856642747;
    msg.y = 0.994147486766353;
    msg.z = 0.27898603140860123;

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
    msg.setTimeStamp(0.8339096164876905);
    msg.setSource(7865U);
    msg.setSourceEntity(223U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(99U);
    msg.target = 11669U;
    msg.x = 0.5262750626604484;
    msg.y = 0.8486273820275252;
    msg.z = 0.38211701765670236;

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
    msg.setTimeStamp(0.9595455072783268);
    msg.setSource(39520U);
    msg.setSourceEntity(243U);
    msg.setDestination(62548U);
    msg.setDestinationEntity(89U);
    msg.target = 9954U;
    msg.x = 0.5935102031705741;
    msg.y = 0.46838572703640335;
    msg.z = 0.8540366967835903;

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
    msg.setTimeStamp(0.47489300913189625);
    msg.setSource(26475U);
    msg.setSourceEntity(24U);
    msg.setDestination(59913U);
    msg.setDestinationEntity(97U);
    msg.target = 27856U;
    msg.lat = 0.41615548463872065;
    msg.lon = 0.23600799356307856;
    msg.z_units = 27U;
    msg.z = 0.9414209066029869;

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
    msg.setTimeStamp(0.47911636529674506);
    msg.setSource(44622U);
    msg.setSourceEntity(93U);
    msg.setDestination(45478U);
    msg.setDestinationEntity(77U);
    msg.target = 58896U;
    msg.lat = 0.03289871986991966;
    msg.lon = 0.739779605808043;
    msg.z_units = 173U;
    msg.z = 0.6893910990022926;

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
    msg.setTimeStamp(0.7764063343159355);
    msg.setSource(26204U);
    msg.setSourceEntity(211U);
    msg.setDestination(10243U);
    msg.setDestinationEntity(172U);
    msg.target = 65345U;
    msg.lat = 0.4177876440790622;
    msg.lon = 0.5649755334973938;
    msg.z_units = 68U;
    msg.z = 0.4060390381371297;

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
    msg.setTimeStamp(0.3428989744975286);
    msg.setSource(36744U);
    msg.setSourceEntity(61U);
    msg.setDestination(43051U);
    msg.setDestinationEntity(101U);
    msg.locale.assign("VMQXKNGICELIPOSQNVYDZCVHECQNCBEWHZAVULLOZEWLIJPJRTOTVUVPMFIGOMXWMIGTEMSKCJFPBHNBZFFDZATUHHPMGLAZSYRXVCAXXQFNDQKGKBZDKDKCTXBVGNXKVQYNFWISIGZAFRSHPIZMUAXEJBTFHHSYYLSKAUTPCUBTNURHANRKWOXSGDEEDMMOUDRYBAJPSTOAYRZUUJCLYHJWW");
    const char tmp_msg_0[] = {-65, -120, -46, -124, -31, -37, -38, 120, -72, -30, 91, -99, -15, 72, -39};
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
    msg.setTimeStamp(0.18534531077456706);
    msg.setSource(43898U);
    msg.setSourceEntity(165U);
    msg.setDestination(40870U);
    msg.setDestinationEntity(193U);
    msg.locale.assign("YHRERRSXWNCOVSCVTTBHAEXCQRRQKSIBZPMOPHVXDBEPCWFKEJOTABYGFIQAANCRKXVQHUWLERZNZUZAQBYXWRGOCXGZJFYIFWBOBLHRQBIJCGLYZEZFMFPXGWPHKGJFMNNTMQUPUMDKKMVVDNTLEYMPXKUILLTCITOCONYUDNMQAQEESZLHETAIAUVTJJIDUSDKVZ");
    const char tmp_msg_0[] = {-84, -57, 76, 26, -92, -16, -80, 80, 125, -3, -106, -20, 84, 123, -103, -71, -116, -61, -74, 1, -68, 16, -42, 68, -62, 15, -21, 29, -66, -73, -123, -17, 97, 84, -98, 75, -58, -126, 40, 116, -28, -109, -33, -68, 18, -16, 103, -127, 88, -38, 12, 33, 99, 12, 32, -85, -74, -92, -11, 80, 82, -113, -14, 36, -109, 114, -114, 56, -26, 33, -85, -90, 45, -69, 76, 4, -37, 63, -106, 12, 64, 32, 19, 13, -65, 43, 29, -92, 102, -93, 82, -87, 9, 0, -17, -30, -17, -88, 64, 7, -86, 41, 36, -56, -68, -45, 120, -118, 68, -100, -32, -120, -42, 73, 49, -107, -52, -78, -53, -71, -87, 25, -50, -42, -113, -57, -122, 20, 49, 93, 115, -45, 46, 50, 93, -39, -92, -3, -38, -27, -116, -82, 49, 88, 26, -18, 43, -119, 93, 53, 40, -4, 106, 124, -59, 47, 32, 41, 14, -35, -84, 41, 22, -121, -36, 76, 79, 25, -93, -47, 17, -122, 106, 8, -112, -25, 54, -112, 32, 95, -16, -30, -1, 113, 67, 68, 22, 55, -70, 67, -121, -34, -127, -15, -123, 123, 43, -126, -37, -48, 123, -114, 48, 52, -59, -26, -100, -67, -10, -11, 118, -65, 81, 45, 109, -87, 52, 34, -56, 88, 15, -106, -66, 6, -67, 115, -22, 27, -13, 41, 57, 13, -92, 15, 26, -64, -1, -63, -108, 108, -5, 124, -53, -29, 73, -112};
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
    msg.setTimeStamp(0.9182138943895193);
    msg.setSource(3008U);
    msg.setSourceEntity(95U);
    msg.setDestination(47998U);
    msg.setDestinationEntity(175U);
    msg.locale.assign("BSPYLGLFVEGRQNLUAZSJICFVQWOBCQMJHZRVETHLLCTEJNFCQRWWMOJKCTUSNFKBVCVKDGBOAWAEQEYPAE");
    const char tmp_msg_0[] = {86, -109, -17, 88, -49, 119, 17, 90, 101, -87, 92, 50, 85, 76, -79, 99, -6, -41, -49, -4, 87, 114, -19, -98, -97, 75, -38, -63, -103, 97, 34, -106, -108, 102, 75, 89, 70, -23, -60, -11, 117, -36, -43, 28, -99, -116, -28, 46, -97, -48, 121, -74, -78, -123, 93, -65, -8, -127, 79, -93, 85, 42, -63, -74, 32, -38, 99, 112, -114, 93, 14, 9, 2, -105, -93, -61, 31, 63, 17, 79, 34, -114, 80, 104, 65, 83, -122, -11, 125, -126, -48, -54, 39, 35, 65, 73, -37, 29, -95, -61, -37, -62, -27, -90, -12, -30, 43, 28, -119, 106, -78, -15, 119, -88, 115, 66, -106, -4, -74, -84, -115, 97, 91, -72, 0, -13, 41, 31, -61, -40, 99, 113, -122, -64, -83, 50, 1};
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
    msg.setTimeStamp(0.1372621177429726);
    msg.setSource(63135U);
    msg.setSourceEntity(231U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.36497268036893504);
    msg.setSource(25726U);
    msg.setSourceEntity(26U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.25188567941487516);
    msg.setSource(40429U);
    msg.setSourceEntity(93U);
    msg.setDestination(33743U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.9434078552078342);
    msg.setSource(16573U);
    msg.setSourceEntity(118U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(249U);
    msg.camid = 178U;
    msg.x = 64843U;
    msg.y = 53007U;

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
    msg.setTimeStamp(0.3989118598034488);
    msg.setSource(33608U);
    msg.setSourceEntity(137U);
    msg.setDestination(49267U);
    msg.setDestinationEntity(130U);
    msg.camid = 253U;
    msg.x = 600U;
    msg.y = 15068U;

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
    msg.setTimeStamp(0.6275535072756598);
    msg.setSource(29367U);
    msg.setSourceEntity(118U);
    msg.setDestination(63046U);
    msg.setDestinationEntity(127U);
    msg.camid = 136U;
    msg.x = 32925U;
    msg.y = 20560U;

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
    msg.setTimeStamp(0.2917724326942207);
    msg.setSource(12624U);
    msg.setSourceEntity(87U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(108U);
    msg.camid = 135U;
    msg.x = 32685U;
    msg.y = 61217U;

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
    msg.setTimeStamp(0.02877421694675586);
    msg.setSource(60652U);
    msg.setSourceEntity(43U);
    msg.setDestination(50402U);
    msg.setDestinationEntity(21U);
    msg.camid = 250U;
    msg.x = 15230U;
    msg.y = 60972U;

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
    msg.setTimeStamp(0.4084499599104371);
    msg.setSource(44375U);
    msg.setSourceEntity(107U);
    msg.setDestination(3178U);
    msg.setDestinationEntity(136U);
    msg.camid = 83U;
    msg.x = 12939U;
    msg.y = 33535U;

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
    msg.setTimeStamp(0.34648066078398854);
    msg.setSource(15950U);
    msg.setSourceEntity(1U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(198U);
    msg.tracking = 7U;
    msg.lat = 0.09391996662421387;
    msg.lon = 0.28407904783227234;
    msg.x = 0.5580735541514559;
    msg.y = 0.28440398493312946;
    msg.z = 0.3283571973024787;

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
    msg.setTimeStamp(0.5619991224228873);
    msg.setSource(31297U);
    msg.setSourceEntity(233U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(77U);
    msg.tracking = 251U;
    msg.lat = 0.04661702684663749;
    msg.lon = 0.17955286236407142;
    msg.x = 0.046576694243785965;
    msg.y = 0.3302205617565638;
    msg.z = 0.6506824521820216;

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
    msg.setTimeStamp(0.7912155307719767);
    msg.setSource(9152U);
    msg.setSourceEntity(253U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(195U);
    msg.tracking = 36U;
    msg.lat = 0.003390900904759242;
    msg.lon = 0.7146890925196946;
    msg.x = 0.09969297541110256;
    msg.y = 0.9486601696346825;
    msg.z = 0.9908195760535148;

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
    msg.setTimeStamp(0.3667170398784183);
    msg.setSource(63482U);
    msg.setSourceEntity(5U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(123U);
    msg.target.assign("ZPJWEPNEZDFOOTAKBHOAGTBTGYOMHWGIDXYURWFHTPPLXYSCFPZAMFZWSSXIDHWOCXRDGJSTLFAIGZTHMDQFFJPVXVUVUYVFRACHDLDTTUQMXQGYJTMGKVXRDADSLJDEKVKETNORCINYJHJBHQCPQZPRLNBQKYVYQRMYKAMZYUNULNWAVHUHNEXSMBKZGQPARMFZCL");
    msg.lbearing = 0.9513973390001703;
    msg.lelevation = 0.21082946933544522;
    msg.bearing = 0.5625156048933252;
    msg.elevation = 0.8163908742267479;
    msg.phi = 0.5810368129886005;
    msg.theta = 0.7604231157309552;
    msg.psi = 0.0628110238906493;
    msg.accuracy = 0.7826028331116595;

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
    msg.setTimeStamp(0.2590476121665932);
    msg.setSource(25220U);
    msg.setSourceEntity(105U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(131U);
    msg.target.assign("AQYSRPWZHVEPGESIKDSUOPWGZUCGJIITVSDPYXFQZMULDJQPFJYJXUSYHANBGFOYKEKIJNAGAXFOHFQNZLTNMUAMVWPAOQBAVKOZGFVQETWJDIAFKWJLBZRGEMNZTZPTDDBONJMBXCERRATKFYXCXRTUXJQSXWHSYFPGLSTIWKMTFTVE");
    msg.lbearing = 0.33438318652513044;
    msg.lelevation = 0.9158074665379955;
    msg.bearing = 0.4973028085684318;
    msg.elevation = 0.6059266434315824;
    msg.phi = 0.568518863981096;
    msg.theta = 0.32865782135590305;
    msg.psi = 0.2570914615169402;
    msg.accuracy = 0.5439800793362467;

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
    msg.setTimeStamp(0.34012094809450943);
    msg.setSource(10479U);
    msg.setSourceEntity(161U);
    msg.setDestination(46271U);
    msg.setDestinationEntity(249U);
    msg.target.assign("OSSTVSBIRISSMIEFZLJAIKPXDDWJWKUKAHPUWDTNFOECCZDRINMXUHWEMVXYVQDRXBQCGAITVHKJCFPVBANGCEXUOZGIULLXVGXBIBEYYSTCSQUPMSFJFHGQHBVABANNNZTPOTHXETBVSJZUHVGGXO");
    msg.lbearing = 0.3139315168776;
    msg.lelevation = 0.5782302973443225;
    msg.bearing = 0.9324352532737534;
    msg.elevation = 0.6719195413270047;
    msg.phi = 0.8103071670240489;
    msg.theta = 0.19168572142478346;
    msg.psi = 0.7731034567310938;
    msg.accuracy = 0.2911130847685983;

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
    msg.setTimeStamp(0.40651636764414156);
    msg.setSource(61870U);
    msg.setSourceEntity(193U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(186U);
    msg.target.assign("TEGQOHELIMVZSGBMXJKGIDH");
    msg.x = 0.6514678348942037;
    msg.y = 0.23513407959539212;
    msg.z = 0.765629271352556;
    msg.n = 0.3141615414345519;
    msg.e = 0.6975340897188066;
    msg.d = 0.35645837176954787;
    msg.phi = 0.42451721337326986;
    msg.theta = 0.5956611283447499;
    msg.psi = 0.8385334721711825;
    msg.accuracy = 0.7806922109054841;

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
    msg.setTimeStamp(0.10686235103187691);
    msg.setSource(20063U);
    msg.setSourceEntity(134U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(207U);
    msg.target.assign("OESUKTKTKUCMPJZQJSPDEIRWXNIRLU");
    msg.x = 0.04661558138145905;
    msg.y = 0.21016863291776;
    msg.z = 0.3572787287136133;
    msg.n = 0.36285673022402365;
    msg.e = 0.318416782322114;
    msg.d = 0.8581445759625472;
    msg.phi = 0.3549302226632781;
    msg.theta = 0.39226362645284707;
    msg.psi = 0.9169298816676993;
    msg.accuracy = 0.249149332720637;

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
    msg.setTimeStamp(0.23103220203990504);
    msg.setSource(49412U);
    msg.setSourceEntity(1U);
    msg.setDestination(17115U);
    msg.setDestinationEntity(10U);
    msg.target.assign("KMJSBZHEMMNZPIQCZSSZBXYZWLYLQQJZEDSCMBNBOLUYJMWVUVTXXIHQEVLUAANNKOXKAANVCDBDDWXRRFAUNQYOPFUDYKRPGXPLKJCPLOKUEHGHXZVLCFOVODVUFCWOIUDQQFTHJJPJHFEBRVLSCSGYLATUGNKRMGE");
    msg.x = 0.38286011580339785;
    msg.y = 0.9097315248778387;
    msg.z = 0.32207734987464;
    msg.n = 0.14862858589625827;
    msg.e = 0.7325072158058993;
    msg.d = 0.7042607980799885;
    msg.phi = 0.0026451024521503275;
    msg.theta = 0.0826751730744455;
    msg.psi = 0.25806492507051215;
    msg.accuracy = 0.8272274507177061;

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
    msg.setTimeStamp(0.5051186532369927);
    msg.setSource(15325U);
    msg.setSourceEntity(11U);
    msg.setDestination(20060U);
    msg.setDestinationEntity(112U);
    msg.target.assign("DVBSSSEPLZIPMLZQOLTAOMIAYQZXGYXJGTINMEETXTQSGQRGBBYKACXUOAWDRZOSMERVJUISMVKIDUJL");
    msg.lat = 0.8573813780950984;
    msg.lon = 0.830784005558606;
    msg.z_units = 73U;
    msg.z = 0.7746327586449793;
    msg.accuracy = 0.061143022582462625;

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
    msg.setTimeStamp(0.5583078370170445);
    msg.setSource(51155U);
    msg.setSourceEntity(230U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(161U);
    msg.target.assign("UJXCJAIMGDZSFWR");
    msg.lat = 0.970368445274428;
    msg.lon = 0.2031702717896885;
    msg.z_units = 248U;
    msg.z = 0.28834967757339225;
    msg.accuracy = 0.4486543493675864;

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
    msg.setTimeStamp(0.6137385534737351);
    msg.setSource(43041U);
    msg.setSourceEntity(56U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(162U);
    msg.target.assign("BPQINTNWAGCBOLUVYUTNCMDWYVCWRGPIAYZQZWKWN");
    msg.lat = 0.4330544855750783;
    msg.lon = 0.17784555560837756;
    msg.z_units = 203U;
    msg.z = 0.8436193300060549;
    msg.accuracy = 0.4971597453983496;

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
    msg.setTimeStamp(0.9872220423097284);
    msg.setSource(56503U);
    msg.setSourceEntity(214U);
    msg.setDestination(3130U);
    msg.setDestinationEntity(235U);
    msg.name.assign("AIMSGVYIVPAROXPZAEJBXDFRWSFGBYFAQRKZTMHENJBJQCPLQOVSWFQIUCHHGOUERBRDMLEFIRNMKIYBNNKDVSJGPAXOYVENXXTVNQFXVQGJRDQZKEMEKLBZXCYKWVUVTPXHUCYWSDLMWKGXSFWUHDHPPBUDCJITIRYCBROEWYJZTJPNZHQSMQF");
    msg.lat = 0.7844294619283523;
    msg.lon = 0.7250105713316064;
    msg.z = 0.693616141976975;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.9469814726294049);
    msg.setSource(61704U);
    msg.setSourceEntity(38U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(199U);
    msg.name.assign("NOMBOEFAQKIEVJYGICNLGJAFHHMQVKKZZTKHFNSGZMNQQLAYHCCJKTHIDOOULICTBEKGDFRFATUXPRYYAFJWSVWZNHWWSUDGBXPEJDOAIEJPXLBAMRROPFKEULZTDHVCYRCBPZZYMSPXVPDXUGWQTSBBMOIILWVXDRQTXTKQKPIUISEYULFTVPFTJAMNRASGJGDJOLZBLCZSEWQCNGQYFVKNEDSB");
    msg.lat = 0.9701175750455394;
    msg.lon = 0.49186169823799286;
    msg.z = 0.36181682959801176;
    msg.z_units = 110U;

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
    msg.setTimeStamp(0.9259689423760029);
    msg.setSource(47128U);
    msg.setSourceEntity(226U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ODMOMTFDVPAECOIEEDGDHDHPMELGEOBJVVLIWURDICORQKXJYYBMNGBPJEXBEOWHKKRNWQWYGBUPJULQMCZGUDHBUQAQYDKUHIKNZRLTPTYHWWRODATVREPUGXVQNFHRXSLHTTYLLINABEVIN");
    msg.lat = 0.1690373066280183;
    msg.lon = 0.5109505539650566;
    msg.z = 0.04785407730656155;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.11074778314849132);
    msg.setSource(36806U);
    msg.setSourceEntity(120U);
    msg.setDestination(28264U);
    msg.setDestinationEntity(140U);
    msg.op = 91U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JIWXXPDHJTESRRCBEHBEJBWXFYAAFCDUSNRPLXSRPTOMXZA");
    tmp_msg_0.lat = 0.1630864279867238;
    tmp_msg_0.lon = 0.6069089830414663;
    tmp_msg_0.z = 0.15993366683394628;
    tmp_msg_0.z_units = 55U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.10786341435734503);
    msg.setSource(19843U);
    msg.setSourceEntity(60U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(243U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.9287362875986561);
    msg.setSource(35757U);
    msg.setSourceEntity(76U);
    msg.setDestination(524U);
    msg.setDestinationEntity(232U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.9655304019030773);
    msg.setSource(49876U);
    msg.setSourceEntity(211U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(244U);
    msg.value = 0.1166081234898444;
    msg.type = 185U;

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
    msg.setTimeStamp(0.8086045883053072);
    msg.setSource(36645U);
    msg.setSourceEntity(214U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(41U);
    msg.value = 0.46127827573807734;
    msg.type = 67U;

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
    msg.setTimeStamp(0.28547861700958366);
    msg.setSource(9580U);
    msg.setSourceEntity(125U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(32U);
    msg.value = 0.15488336499150257;
    msg.type = 163U;

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
    msg.setTimeStamp(0.7873463419799559);
    msg.setSource(35268U);
    msg.setSourceEntity(173U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(34U);
    msg.value = 0.36365876622383475;

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
    msg.setTimeStamp(0.49243881472715645);
    msg.setSource(29176U);
    msg.setSourceEntity(178U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(123U);
    msg.value = 0.5549576206913794;

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
    msg.setTimeStamp(0.540864423507113);
    msg.setSource(10555U);
    msg.setSourceEntity(92U);
    msg.setDestination(4382U);
    msg.setDestinationEntity(253U);
    msg.value = 0.568875334295617;

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
    msg.setTimeStamp(0.05474335452109724);
    msg.setSource(24721U);
    msg.setSourceEntity(24U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(144U);
    msg.timestamp_last_service = 0.709188735469417;
    msg.time_next_service = 0.1214369581067829;
    msg.time_motor_next_service = 0.23786701789583042;
    msg.time_idle_ground = 0.4206370863927815;
    msg.time_idle_air = 0.7179332109216089;
    msg.time_idle_water = 0.5896493183860809;
    msg.time_idle_underwater = 0.19965734026170545;
    msg.time_idle_unknown = 0.10216102069731303;
    msg.time_motor_ground = 0.7388798139481267;
    msg.time_motor_air = 0.5779099508704341;
    msg.time_motor_water = 0.4650035004107679;
    msg.time_motor_underwater = 0.07092811552449496;
    msg.time_motor_unknown = 0.9119937118366244;
    msg.rpm_min = -11434;
    msg.rpm_max = 32415;
    msg.depth_max = 0.5227863035813878;

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
    msg.setTimeStamp(0.8691360200674558);
    msg.setSource(44914U);
    msg.setSourceEntity(248U);
    msg.setDestination(47956U);
    msg.setDestinationEntity(229U);
    msg.timestamp_last_service = 0.3474352857639249;
    msg.time_next_service = 0.11245263725701926;
    msg.time_motor_next_service = 0.5902748499748256;
    msg.time_idle_ground = 0.3442427015996209;
    msg.time_idle_air = 0.7036821314093117;
    msg.time_idle_water = 0.17711518303914942;
    msg.time_idle_underwater = 0.4770481342745415;
    msg.time_idle_unknown = 0.33067924801301474;
    msg.time_motor_ground = 0.52495307691737;
    msg.time_motor_air = 0.8448262874809664;
    msg.time_motor_water = 0.05528920881382826;
    msg.time_motor_underwater = 0.05077709977688094;
    msg.time_motor_unknown = 0.9438611577477788;
    msg.rpm_min = -30462;
    msg.rpm_max = 29439;
    msg.depth_max = 0.3541767049386796;

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
    msg.setTimeStamp(0.12983020724231897);
    msg.setSource(62481U);
    msg.setSourceEntity(101U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(43U);
    msg.timestamp_last_service = 0.4415454065145402;
    msg.time_next_service = 0.3804933996420866;
    msg.time_motor_next_service = 0.17448685601032377;
    msg.time_idle_ground = 0.08831011787399101;
    msg.time_idle_air = 0.3828227680120858;
    msg.time_idle_water = 0.3298880149546458;
    msg.time_idle_underwater = 0.20915334421633636;
    msg.time_idle_unknown = 0.13840215103964504;
    msg.time_motor_ground = 0.8029332393997516;
    msg.time_motor_air = 0.5947060894522482;
    msg.time_motor_water = 0.6008574810788951;
    msg.time_motor_underwater = 0.5320496065227015;
    msg.time_motor_unknown = 0.5316875860694009;
    msg.rpm_min = -8043;
    msg.rpm_max = 14021;
    msg.depth_max = 0.5342756890516602;

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
    msg.setTimeStamp(0.5184766546338608);
    msg.setSource(35692U);
    msg.setSourceEntity(109U);
    msg.setDestination(39856U);
    msg.setDestinationEntity(35U);
    msg.severity = 227U;
    msg.text.assign("CGGDCIWXSINQYZNLNJUFUDPXRNFXGZXRBEADZATGHZSUSMFVLEKXEUYJHZHWNBTXUDFNLWIBTMICVWEQEQYWYAHFRIOSZGJYMNPWCNPFQPIDNMXTZAVLMYORGMZCOQKUDLJTDSUQPJRBFDRHKKOXVKXQTPUBLQFPYEFHHHGWLCTMGKKCVOBSY");

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
    msg.setTimeStamp(0.4090992737031789);
    msg.setSource(19225U);
    msg.setSourceEntity(62U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(76U);
    msg.severity = 19U;
    msg.text.assign("OCEOWRXWJMXYZFTBPEHJTGTWUBDWVCJANCGHIRRUCMROMRCPGEVCLZZBOAANQNISHBRZEWPCSWDLKBYOTMFZHVJBQYVUXWXFAMQEQTZRSSSMAVHMLZHDDJUELQKTXNGOFMDAGTJIKEIATYSRBPKUHUPQINSUUYVYGDFLYGCBPFLJ");

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
    msg.setTimeStamp(0.7694612496412349);
    msg.setSource(50162U);
    msg.setSourceEntity(212U);
    msg.setDestination(64873U);
    msg.setDestinationEntity(234U);
    msg.severity = 85U;
    msg.text.assign("AMQINIGTXRNWUJNEUCERTBJHCJLBLHJFXIBHYAMRJHDMNARFTHUCQLCMCQUWQVSFPZDRWTKVBEDVPSVEWLWINZQPKPKPZIKESPKYFMDLXTSQBOHRFAMOFKUBUQGYLFZHYXGHAMWPGWOJDSLZPWCETOCRIYTXAKOLHMVMUMYNFYWYQXLRVAFNRZIBKBSAOULXCXQDGPOJOZNTIGZSASBDJOGERBSNCYJGWDIZEXGIDQEUKHSVTXGVJ");

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
    msg.setTimeStamp(0.8844995940664123);
    msg.setSource(6849U);
    msg.setSourceEntity(40U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(14U);
    msg.channel = -57;
    msg.value = 1812907822;
    msg.gain = 114U;

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
    msg.setTimeStamp(0.2597960937281275);
    msg.setSource(49409U);
    msg.setSourceEntity(132U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(132U);
    msg.channel = 5;
    msg.value = -940671754;
    msg.gain = 107U;

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
    msg.setTimeStamp(0.6700492132764603);
    msg.setSource(25522U);
    msg.setSourceEntity(91U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(93U);
    msg.channel = -127;
    msg.value = -433836173;
    msg.gain = 127U;

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

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.8748897204614041);
    msg.setSource(20076U);
    msg.setSourceEntity(160U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(213U);
    msg.ch01 = 0.7253667825868528;
    msg.ch02 = 0.12881869442316396;
    msg.ch03 = 0.29720581263305534;
    msg.ch04 = 0.09180708676832072;
    msg.ch05 = 0.5228884314620188;
    msg.ch06 = 0.5663462611239223;
    msg.ch07 = 0.3133977804586966;
    msg.ch08 = 0.013121187715785187;
    msg.ch09 = 0.392819099212142;
    msg.ch10 = 0.45167918815792785;
    msg.ch11 = 0.5715787059228994;
    msg.ch12 = 0.0771864740281133;
    msg.ch13 = 0.14994192575362486;
    msg.ch14 = 0.2897595215700529;
    msg.ch15 = 0.2033955072585093;
    msg.ch16 = 0.33911081307135904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.529694902327669);
    msg.setSource(34142U);
    msg.setSourceEntity(22U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(213U);
    msg.ch01 = 0.8298504704018422;
    msg.ch02 = 0.436705748746155;
    msg.ch03 = 0.7704886231327297;
    msg.ch04 = 0.0165753229095168;
    msg.ch05 = 0.04814893756759864;
    msg.ch06 = 0.3902746928207417;
    msg.ch07 = 0.8130407772030885;
    msg.ch08 = 0.29863090644669854;
    msg.ch09 = 0.9782882809405485;
    msg.ch10 = 0.7235376051551007;
    msg.ch11 = 0.06699901603462532;
    msg.ch12 = 0.40313783139478643;
    msg.ch13 = 0.32948876716317477;
    msg.ch14 = 0.5155740893256517;
    msg.ch15 = 0.8076258323444057;
    msg.ch16 = 0.3033851776540918;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.8398539501752228);
    msg.setSource(58405U);
    msg.setSourceEntity(109U);
    msg.setDestination(5174U);
    msg.setDestinationEntity(26U);
    msg.ch01 = 0.24736642009003162;
    msg.ch02 = 0.6600161670425805;
    msg.ch03 = 0.4864427548688791;
    msg.ch04 = 0.027771405588288278;
    msg.ch05 = 0.29959706743533787;
    msg.ch06 = 0.8808601231865929;
    msg.ch07 = 0.34129620406381345;
    msg.ch08 = 0.8512919724537242;
    msg.ch09 = 0.5721282696790803;
    msg.ch10 = 0.4038162706167311;
    msg.ch11 = 0.3724324373274789;
    msg.ch12 = 0.7364912229242152;
    msg.ch13 = 0.17427396523576455;
    msg.ch14 = 0.5495521948577256;
    msg.ch15 = 0.7419389156904181;
    msg.ch16 = 0.934447129997032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.6475877152070919);
    msg.setSource(22544U);
    msg.setSourceEntity(105U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(148U);
    msg.value = 0.2838219773792021;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.5954681502858092);
    msg.setSource(887U);
    msg.setSourceEntity(132U);
    msg.setDestination(60526U);
    msg.setDestinationEntity(76U);
    msg.value = 0.8851216233711645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.882055472383439);
    msg.setSource(29550U);
    msg.setSourceEntity(106U);
    msg.setDestination(38126U);
    msg.setDestinationEntity(49U);
    msg.value = 0.9118869242404606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.8178451541950935);
    msg.setSource(11417U);
    msg.setSourceEntity(129U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(217U);
    msg.op = 15U;
    msg.lat = 0.7502034138569319;
    msg.lon = 0.078290245777206;
    msg.height = 0.8763681671789791;
    msg.depth = 0.5854251315815986;
    msg.alt = 0.830887340126309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.08813759242142405);
    msg.setSource(29245U);
    msg.setSourceEntity(181U);
    msg.setDestination(52116U);
    msg.setDestinationEntity(193U);
    msg.op = 81U;
    msg.lat = 0.5727843955740404;
    msg.lon = 0.5972431567905683;
    msg.height = 0.3608546617672279;
    msg.depth = 0.6135554047128119;
    msg.alt = 0.07726137507931319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.8424247616271078);
    msg.setSource(12278U);
    msg.setSourceEntity(209U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(36U);
    msg.op = 9U;
    msg.lat = 0.30077146566860824;
    msg.lon = 0.47311442091132094;
    msg.height = 0.28272590852178103;
    msg.depth = 0.7097124095663081;
    msg.alt = 0.44887770185078757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.38142201989844216);
    msg.setSource(28745U);
    msg.setSourceEntity(239U);
    msg.setDestination(37896U);
    msg.setDestinationEntity(97U);
    msg.ipaddr = 2565865368U;
    msg.port = 49337U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.07828312039284335);
    msg.setSource(38732U);
    msg.setSourceEntity(165U);
    msg.setDestination(62295U);
    msg.setDestinationEntity(4U);
    msg.ipaddr = 1234915114U;
    msg.port = 23239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DtlsMessage msg;
    msg.setTimeStamp(0.5040484029859986);
    msg.setSource(53660U);
    msg.setSourceEntity(220U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(103U);
    msg.ipaddr = 2847385190U;
    msg.port = 46137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DtlsMessage #2", msg == *msg_d);
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
