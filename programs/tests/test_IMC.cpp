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
    msg.setTimeStamp(0.456434735224);
    msg.setSource(26332U);
    msg.setSourceEntity(147U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(177U);
    msg.state = 26U;
    msg.flags = 143U;
    msg.description.assign("GVKBRIYNCJXQGXLBNQRXDVJDKPEKBQCHCFJXUZZSZGZDPBAKECMVUQJRKURMLDRDFGBEWAIAVFNDYPMXOHZPGEWLJQNXMPWJHUPEZFCFSTOQVWM");

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
    msg.setTimeStamp(0.172006570763);
    msg.setSource(53912U);
    msg.setSourceEntity(227U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(177U);
    msg.state = 56U;
    msg.flags = 174U;
    msg.description.assign("WFRHUDMGSXTHHRIQBCCBPABOODKFBQMAMINNELMUBNICLTSGPDZQPCPGLTJWNOKQFVEESVEIUZSCNDXKOCZXSPYIAHNHKYQBLXHURFPLTJMGXLDMRAXWUKYCMIXRJXYRTBDKTJOIEMFVWNOZEVWGPJYSRJYSZXOYGZICZTRQFEFZPHNQKNLDXZIEQKEAQDHHUAKUATYVLCUFQVYLUWOGFRBCHDPKDIWGVRJSVPNEW");

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
    msg.setTimeStamp(0.459322139467);
    msg.setSource(33777U);
    msg.setSourceEntity(207U);
    msg.setDestination(6925U);
    msg.setDestinationEntity(109U);
    msg.state = 123U;
    msg.flags = 15U;
    msg.description.assign("CTKMHVBWROBQSGMPXODQGEQUJMLEPCDAHYSRDQUOYVDAWAILCQLLYFQARWAUSWT");

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
    msg.setTimeStamp(0.847719419283);
    msg.setSource(44750U);
    msg.setSourceEntity(144U);
    msg.setDestination(61839U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.264428285792);
    msg.setSource(4804U);
    msg.setSourceEntity(30U);
    msg.setDestination(29547U);
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
    msg.setTimeStamp(0.289660104912);
    msg.setSource(20372U);
    msg.setSourceEntity(74U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.00781927592471);
    msg.setSource(52790U);
    msg.setSourceEntity(57U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(18U);
    msg.id = 122U;
    msg.label.assign("CBMLFYSTRIULWGQYOOZFAWNTQXKRNFJKWIHVPSHCSHYAXXDZSNGMIRFXNPTSZSVVULMYNKBOIVVKEVQZGFGOGPHQWPHHFYATBWJKVKELCUYVBBENMXGZEFYMFUKASUSRGDPDXNCHPJHDNVBQJDAJFYGIZDBNZPAILPUEOOKEOERVLJAEXYLUQATQLDRRTZAKWOGQQLWCFUCMJDTSRLCDXQSMPJWXUOMW");
    msg.component.assign("FWGENILUWUBSZCZYFSQNBHGOEGAQZCEYFYLYYLWPKEUTXKVQBIHXQJIOYKVZATKZSMHNXMHARLQQBRCMHKXPHYDWGKLAZSDHXUCLUGSIBJKGZVSAOXBIGPCTCBZTGRQAFIFEFFNDNXBMCLXRVWWVABWPOXKRPTJDPSMTCHJQNJWIYNFKBREDOUOVWYPDODSJOZTTNJACDZGOMDYAKIFPMFTMEQMTJPISRC");
    msg.act_time = 6636U;
    msg.deact_time = 33143U;

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
    msg.setTimeStamp(0.0492506443214);
    msg.setSource(60838U);
    msg.setSourceEntity(23U);
    msg.setDestination(12835U);
    msg.setDestinationEntity(130U);
    msg.id = 17U;
    msg.label.assign("URURTNTLTPYMQNMATBPSOYIXMBZHQEFAVIITXPGZWMKJFMGJDTQEMGUZLAGPZFJNDIGOWREEBEBBFA");
    msg.component.assign("RYXMTNJHIIKKFGUMKALRZSWUZSJBMHRYPWEFPLCZPXRVFASKQMIINAXPLHMOFQIDYESVIYJDIVYRPLHBJKEQUMFGQEOHCURVBDGASGVUDWQETABFSSNYRADJPUJQUHEOWNKOCNXDLHCEZYTCWXGNALZXZJSEXBBZN");
    msg.act_time = 44011U;
    msg.deact_time = 44316U;

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
    msg.setTimeStamp(0.48260069026);
    msg.setSource(9553U);
    msg.setSourceEntity(19U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(42U);
    msg.id = 28U;
    msg.label.assign("JWIHHDKULOVGODYTVRGD");
    msg.component.assign("JZROSALRBKWLASDOCHDVECTTZHTJVHEBJXHNALXPMIHTPUYQUQJVFCKAUGOSNNWYQQVAMIYLUOSZPCYJWILBEZIDOJUXLKXWUTBXXGQIHDUBMMAQFCHFPPYKVGLLGCTXSSHDJOCZNKZPSQGDIEZYWARKBQUSNJGEFDMLSOAWBVPYNYRPMXRTJZWPSTHEKZVAFGWEKQDPLOFWRRYIMNIDBIJXGECGUN");
    msg.act_time = 49672U;
    msg.deact_time = 10517U;

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
    msg.setTimeStamp(0.200915517879);
    msg.setSource(59760U);
    msg.setSourceEntity(199U);
    msg.setDestination(12788U);
    msg.setDestinationEntity(41U);
    msg.id = 143U;

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
    msg.setTimeStamp(0.754885815768);
    msg.setSource(19100U);
    msg.setSourceEntity(59U);
    msg.setDestination(20238U);
    msg.setDestinationEntity(145U);
    msg.id = 235U;

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
    msg.setTimeStamp(0.551233480141);
    msg.setSource(51480U);
    msg.setSourceEntity(211U);
    msg.setDestination(57356U);
    msg.setDestinationEntity(89U);
    msg.id = 233U;

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
    msg.setTimeStamp(0.285373001616);
    msg.setSource(24719U);
    msg.setSourceEntity(132U);
    msg.setDestination(31778U);
    msg.setDestinationEntity(242U);
    msg.op = 66U;
    msg.list.assign("YHDJTYFNWHUDGGWNOVTRYHFOBVWLSSZPCZMHVLNUKYNBHAIRSSIVUUIAAFCQUFPWDEZMKXABPDIKDZKCPRGOKTAJOGXDBBCPWWWNUMXMYVXTMVQYPKQXBXJVACMNAHXQJBRKCCIZCQABKZQGUISWLKNRS");

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
    msg.setTimeStamp(0.0190732045256);
    msg.setSource(17424U);
    msg.setSourceEntity(120U);
    msg.setDestination(61874U);
    msg.setDestinationEntity(97U);
    msg.op = 111U;
    msg.list.assign("ILKZTIIYHHYNPNHIZBRBETMMBJDNXXNVEKOSTXUVKLWFCVUSIVIXQFZGEWDJFYHPADBUGJRJWXSXATZJMCCNQUUTNHARKDPRZRHMKGLAKFELIJFDBKESXOFGYWDYALBWCMVHVCMDA");

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
    msg.setTimeStamp(0.861389000126);
    msg.setSource(812U);
    msg.setSourceEntity(106U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(66U);
    msg.op = 163U;
    msg.list.assign("HZJNYBTYQPGAXPTOTTITRSIGLSNFLZPJGALCZTVCYWEGXXGBRBQBAXXHHNYGXAIYCXZMQZKHEDAAQVHJSAOFWBLHJEOKPBZSYIMCJNNJDYCKUFRSRHWDIKSZHXLVSIRQVHFQLUVAUQFQLEVIEPEDNDAPZXTGLYHKEMVBNMTCUGQDWJPGITSFFKUMUJJCRDKCWESBTFOPFCUPJMRKSRUMKXUWZBVBWNYNNEORLWCPWLODDDOOIYUWQOR");

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
    msg.setTimeStamp(0.702535784891);
    msg.setSource(45817U);
    msg.setSourceEntity(219U);
    msg.setDestination(38467U);
    msg.setDestinationEntity(134U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.910533971582);
    msg.setSource(23590U);
    msg.setSourceEntity(240U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(243U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.893850743299);
    msg.setSource(16216U);
    msg.setSourceEntity(205U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(238U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.928375243377);
    msg.setSource(10694U);
    msg.setSourceEntity(105U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(140U);
    msg.value = 149U;

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
    msg.setTimeStamp(0.429027984102);
    msg.setSource(49986U);
    msg.setSourceEntity(86U);
    msg.setDestination(100U);
    msg.setDestinationEntity(66U);
    msg.value = 88U;

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
    msg.setTimeStamp(0.91572555119);
    msg.setSource(25120U);
    msg.setSourceEntity(223U);
    msg.setDestination(46782U);
    msg.setDestinationEntity(21U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.432638325507);
    msg.setSource(50161U);
    msg.setSourceEntity(9U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(179U);
    msg.consumer.assign("LFLJDERAOJQMTDMRPVCJYZFBJNKWNQIDDTANKMYMSTXBIRBLGUFOCNPUEVKEHZQAWFPXBLSEBYKLGNRZRNNXAYWHQXQHIOIHEDVUFCETACWDLJKDJIHANOGYWYZAUKMEZZOXIXBZFXASWWGQCAPTSRCPURTUZSTFSWIEOYYDSPIEKXVTCZSRNWXUXYLUGMSPQHWBOYHJKUV");
    msg.message_id = 53398U;

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
    msg.setTimeStamp(0.51777598757);
    msg.setSource(31085U);
    msg.setSourceEntity(102U);
    msg.setDestination(31630U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("CWRUJLZJVOJYJBJVNFPTXYSYCGHRDZRELGVKLAIKPAQMCMWEWNJQOQLZREKSUOROBBHDWUIKTQEEWPHZOZILYDZFRZOQBFLNZASIFNVWGWXUITUOLMXNSPQMYGUSYKKXDYUSCGAFMVQGTPHJPXHKP");
    msg.message_id = 65281U;

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
    msg.setTimeStamp(0.116363873401);
    msg.setSource(43381U);
    msg.setSourceEntity(50U);
    msg.setDestination(46950U);
    msg.setDestinationEntity(72U);
    msg.consumer.assign("OOTATSWKHFSQGMVRANZZEKFFARWXUHWDISURCEGDALUSQWZHHOYQYCBQEKXPRANVCMXZNUOKZVQYQBBPAVZVFRSUGJGLLJTVBCCBAGOTAMMKSFEMKMDJHCZHGJFTSGHTGIZNICJXPVPLJYEL");
    msg.message_id = 34072U;

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
    msg.setTimeStamp(0.62428979579);
    msg.setSource(41948U);
    msg.setSourceEntity(105U);
    msg.setDestination(55595U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.805823121624);
    msg.setSource(61531U);
    msg.setSourceEntity(235U);
    msg.setDestination(61474U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.150357349317);
    msg.setSource(63317U);
    msg.setSourceEntity(114U);
    msg.setDestination(42111U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.788641351688);
    msg.setSource(374U);
    msg.setSourceEntity(198U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(222U);
    msg.section.assign("BIDCDMCQMIWC");
    msg.param.assign("ZCUQQTVCEMVFGVSOFEBNHCFLWBYMPKEFTAQXQXCAHQCMPQKVWORZMHYSINZ");
    msg.value.assign("WBFVTBXYEGSHNKCZLHLSXGYEDLLCBGQZSJUVRMQDKZPJAUATIRDCUGPTYQUEJBBZYQURVWCELPRBDFZHGOJNMXXCABZKTCCAXOITQNZHPVLDLFWKPVPKERMFXXGZYFMDKEIEHGJMPIFWHJJCIOXQAFMYPBNNTAGSWNMWZSWQYHLZSDOOHSWKODSOJDNXVARRUCUAAG");

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
    msg.setTimeStamp(0.924671742713);
    msg.setSource(10854U);
    msg.setSourceEntity(241U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(7U);
    msg.section.assign("RHITTSMMJIIDCRFTBHVOGRYKOELJGRHOPTLWCTNUTOHDZHXLMFCVJVAYIAWPZWYLSNLGUQDKRHDYOCTMKOQBURLHAJEAGNVEBEFDLVYBXTSALJNJPSKZMQNAZYXMAMIFPBDUXFCUFVUMAEGIPEZRZPGWXIEKPCOEDLHVUOVSVSHBGXUGZBBJNTQKGDEJSPENZTXCMDQRJAGIARZWQWOFNXULKPKCINSUKYQSZYXQ");
    msg.param.assign("AWOEUHARYZMDQUIJLWMTVIHSQQVFUMUMESYFHTZLDUAUERZEVEOYXPEKFWIBKSBWSOZIXYHAACIPDFVYXVBQBTUNQSMROHGZEMCTNLDAFXFIBFXACFOLJGNRWPKWODPTCOBWGPAVECOGMQGYRDDNXGJSJITHXKWZZVPNSPJRTBUROKMZPRCYYGSHFVJWJDONALNNINHUYJXYSKZMIGCEDRKK");
    msg.value.assign("QSPMZPTAFMGSEXTQAEYCPMKHQPGAFMEFHYTZDRDKRMIURJUOKMXIINMOKCRBGXIHKVGVUZLDWVEPTFWSINAPNXTXBJWFKZISSLULGLYAEIKZNCPKWUYCQLAGYACEUHLXOVDQSCPAHCEFRSWHBUDZOLLLWDGZMTFSDJXNJOOYCFBJGOMBRTGYEWAKDYHOBTXOXWAYLVJSCCIJ");

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
    msg.setTimeStamp(0.179884273332);
    msg.setSource(46272U);
    msg.setSourceEntity(184U);
    msg.setDestination(34541U);
    msg.setDestinationEntity(24U);
    msg.section.assign("WWWZIYOPOBHDGBMDIXYENWASIYZFMVXDOTBMIUYHPXGANJDVIGKOZCZJRLJGTFBQMRKJNLOEIEPEYVESXKGVRQSTKENUDAOFYSBEPFTENYANZDULGGJSMJZORTNDYHLNSAQLULMUKBQQHVZSWUMMCLFBDCRVUPDCHMKIRLAJJQEQTPMTRHGLQVPHWFWAQSVPZUWBBAOFXNIWFZCCRXUVOGSPCPIKXKXWIUFYHNAFCEKQSRDBG");
    msg.param.assign("QTPRNUMJTCGBAKLQGFVTQJBVISCTKVRZFTNMXFSLHFJ");
    msg.value.assign("PYXABZCXGAPEHOJCBLZCJWNVIRAPAREVMDYBIQCQVWKFMWKTRPVYJOUSPGSURODTFORBF");

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
    msg.setTimeStamp(0.82183964956);
    msg.setSource(27088U);
    msg.setSourceEntity(31U);
    msg.setDestination(34913U);
    msg.setDestinationEntity(136U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.61387130903);
    msg.setSource(29166U);
    msg.setSourceEntity(135U);
    msg.setDestination(37839U);
    msg.setDestinationEntity(201U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.249039028714);
    msg.setSource(26933U);
    msg.setSourceEntity(253U);
    msg.setDestination(31615U);
    msg.setDestinationEntity(204U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.970898859782);
    msg.setSource(4865U);
    msg.setSourceEntity(107U);
    msg.setDestination(28926U);
    msg.setDestinationEntity(123U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.57642843573);
    msg.setSource(63804U);
    msg.setSourceEntity(189U);
    msg.setDestination(46380U);
    msg.setDestinationEntity(228U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.854310935201);
    msg.setSource(46430U);
    msg.setSourceEntity(137U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(127U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.548152213898);
    msg.setSource(9443U);
    msg.setSourceEntity(193U);
    msg.setDestination(7503U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 144U;
    msg.step_number = 207U;
    msg.step.assign("FVCCXPZRSOLODVIBEHJKAXYZOKYJZWRWLQALMGDRGNBVULPVMLXXXSTMJGIAWTBJPYEQKUPXHSCHLG");
    msg.flags = 87U;

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
    msg.setTimeStamp(0.294300876987);
    msg.setSource(18781U);
    msg.setSourceEntity(225U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(64U);
    msg.total_steps = 138U;
    msg.step_number = 77U;
    msg.step.assign("AJZBFYPYIONAREFQNPSKESDFYXDUXUACVNOIYYASQLMIEDFNHWHLYRLVIHGZVPOCRZLSGRZYRVLTOLGLPXDNSHKMQIGCQSTSZQANURKGCMUPXUYTOHERIMJTJDAKTUOIFZYDEIETBRGKXJHVMLDZZSUVMLKQEFVSBQQZYRHJTLKQXNVDOGUPAFCUOAWMBOTNEQPFNHCPGFBAWPWDWGAHKXXDCZBWJEGJCFPJCWISKMBWBMHNUXJBVJO");
    msg.flags = 121U;

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
    msg.setTimeStamp(0.204156461134);
    msg.setSource(21826U);
    msg.setSourceEntity(2U);
    msg.setDestination(16839U);
    msg.setDestinationEntity(66U);
    msg.total_steps = 87U;
    msg.step_number = 200U;
    msg.step.assign("VQLJGIWQHXWXBVAPWUIDIUTEDLKCHNVFQPLBODUMCJZIEGXCRVKHVZZPUJYGUMSNOYKGVROHLLARRKNIXNSGEHKDPONXFZMWXERKSOQISZOSCJKUWNFQPBGXDOGECQOGYSZYAPBKJWJTUTJRPATOREMVLAKEYYUFFGJOXQMHPWYVSHBJTSATHDYCIWBFYABNFHMGQTCZPFSNQAZFITLKUZWJXIDNTDDPEWMCBRATDSVYRCBHUBQC");
    msg.flags = 250U;

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
    msg.setTimeStamp(0.514107838491);
    msg.setSource(28356U);
    msg.setSourceEntity(158U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(204U);
    msg.state = 10U;
    msg.error.assign("SAGWPMOGSLZPREVRBMUBOWVGHXZCNDKUWXYZAFJREYLXRTKRMWMFALQSPWMVDVBQQGFYDIFGRSDJJHIQZVMACTPXHNDLKBYTIDGYSHSUOWCITHPKMUAABLGNIVGDJREOGEQNZIHPOCQWRINXCYSJFL");

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
    msg.setTimeStamp(0.299512434457);
    msg.setSource(7670U);
    msg.setSourceEntity(36U);
    msg.setDestination(36797U);
    msg.setDestinationEntity(13U);
    msg.state = 154U;
    msg.error.assign("FDUYXBMINQOGDUKIJSYIBGEDDXMDENLIFANUBECPTPEXFKBCNNPFTNQYFKCYQDGAYSNLAJHDJT");

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
    msg.setTimeStamp(0.40279383034);
    msg.setSource(8105U);
    msg.setSourceEntity(88U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(246U);
    msg.state = 190U;
    msg.error.assign("HJVGOXDMLACPHPSHZJIZZREFHACIKDEYENDHPNYSUWOQMUDGUDEBMYTMINGZULLCMVOKEQSRGEWWHICSXBVTTTXGKSAXUOSHEJIRUBNNNXDGPWTTHSBKFWZWRUDLIZKJZGOPITYPYBPPJGZUZCNBYJXMNROLOALAEOWBRSPHAR");

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
    msg.setTimeStamp(0.439517074158);
    msg.setSource(5355U);
    msg.setSourceEntity(181U);
    msg.setDestination(41568U);
    msg.setDestinationEntity(128U);
    msg.op = 188U;
    msg.speed_min = 0.788820138332;
    msg.speed_max = 0.304512808035;
    msg.long_accel = 0.108203983166;
    msg.alt_max_msl = 0.783190687538;
    msg.dive_fraction_max = 0.188776977642;
    msg.climb_fraction_max = 0.937164282536;
    msg.bank_max = 0.999747307335;
    msg.p_max = 0.728392601734;
    msg.pitch_min = 0.209774986468;
    msg.pitch_max = 0.358279471023;
    msg.q_max = 0.0583202229536;
    msg.g_min = 0.318341919957;
    msg.g_max = 0.859896699309;
    msg.g_lat_max = 0.143061507679;
    msg.rpm_min = 0.223410032302;
    msg.rpm_max = 0.973609761041;
    msg.rpm_rate_max = 0.186498939434;

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
    msg.setTimeStamp(0.510972259664);
    msg.setSource(65000U);
    msg.setSourceEntity(9U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(22U);
    msg.op = 195U;
    msg.speed_min = 0.412301967193;
    msg.speed_max = 0.568986244206;
    msg.long_accel = 0.612562120379;
    msg.alt_max_msl = 0.676288388866;
    msg.dive_fraction_max = 0.127179810043;
    msg.climb_fraction_max = 0.90104396105;
    msg.bank_max = 0.99647597349;
    msg.p_max = 0.249834671609;
    msg.pitch_min = 0.336890295904;
    msg.pitch_max = 0.99794025754;
    msg.q_max = 0.477592335959;
    msg.g_min = 0.351107056197;
    msg.g_max = 0.607778677604;
    msg.g_lat_max = 0.450474680589;
    msg.rpm_min = 0.965893269081;
    msg.rpm_max = 0.644525380593;
    msg.rpm_rate_max = 0.119682543629;

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
    msg.setTimeStamp(0.395352829244);
    msg.setSource(65440U);
    msg.setSourceEntity(31U);
    msg.setDestination(50775U);
    msg.setDestinationEntity(243U);
    msg.op = 123U;
    msg.speed_min = 0.555132905391;
    msg.speed_max = 0.25695176004;
    msg.long_accel = 0.969078302447;
    msg.alt_max_msl = 0.440251159708;
    msg.dive_fraction_max = 0.529828491088;
    msg.climb_fraction_max = 0.937090163674;
    msg.bank_max = 0.98934644702;
    msg.p_max = 0.848220771001;
    msg.pitch_min = 0.787610765949;
    msg.pitch_max = 0.479757008217;
    msg.q_max = 0.905232558093;
    msg.g_min = 0.355439985045;
    msg.g_max = 0.376189430762;
    msg.g_lat_max = 0.0141097136374;
    msg.rpm_min = 0.662388819537;
    msg.rpm_max = 0.341092929001;
    msg.rpm_rate_max = 0.615385248624;

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
    msg.setTimeStamp(0.814366159562);
    msg.setSource(14308U);
    msg.setSourceEntity(113U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.584802836518;
    msg.lon = 0.0769054734679;
    msg.height = 0.742953732694;
    msg.x = 0.598727620634;
    msg.y = 0.111155416491;
    msg.z = 0.841895960349;
    msg.phi = 0.0504689193758;
    msg.theta = 0.774953724334;
    msg.psi = 0.145539998502;
    msg.u = 0.960090765384;
    msg.v = 0.348554945747;
    msg.w = 0.303273594014;
    msg.p = 0.652734104229;
    msg.q = 0.98336678191;
    msg.r = 0.817517879802;
    msg.svx = 0.184284765172;
    msg.svy = 0.00497412009575;
    msg.svz = 0.631727742884;

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
    msg.setTimeStamp(0.449171862761);
    msg.setSource(7822U);
    msg.setSourceEntity(7U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.433910507993;
    msg.lon = 0.61476790997;
    msg.height = 0.517466826714;
    msg.x = 0.0208564316221;
    msg.y = 0.811986489261;
    msg.z = 0.81147535553;
    msg.phi = 0.211144299812;
    msg.theta = 0.295441512524;
    msg.psi = 0.421758593463;
    msg.u = 0.459431391016;
    msg.v = 0.431354625809;
    msg.w = 0.878984372241;
    msg.p = 0.934666748898;
    msg.q = 0.0722844540643;
    msg.r = 0.947769325739;
    msg.svx = 0.919069373764;
    msg.svy = 0.89221237631;
    msg.svz = 0.209463792587;

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
    msg.setTimeStamp(0.247158009512);
    msg.setSource(48213U);
    msg.setSourceEntity(86U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.0021701049399;
    msg.lon = 0.325017138117;
    msg.height = 0.806853414204;
    msg.x = 0.19287021781;
    msg.y = 0.211465052393;
    msg.z = 0.792512251063;
    msg.phi = 0.735754891229;
    msg.theta = 0.993014624211;
    msg.psi = 0.731924385968;
    msg.u = 0.0953661001627;
    msg.v = 0.965154881698;
    msg.w = 0.460266955467;
    msg.p = 0.269519946486;
    msg.q = 0.957682270375;
    msg.r = 0.112780816571;
    msg.svx = 0.227453406432;
    msg.svy = 0.888689605746;
    msg.svz = 0.814942297677;

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
    msg.setTimeStamp(0.98919829797);
    msg.setSource(11278U);
    msg.setSourceEntity(155U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(167U);
    msg.op = 106U;
    msg.entities.assign("NUJIZHWHISKNQLZJXFVOSNASMFEBOBQSGRMNQDHVDKSERUXTJWAOGLOJULXVRLYHNFTTZWSWMTRLMEIXPIVAZIYHCAEXGCFN");

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
    msg.setTimeStamp(0.458360547547);
    msg.setSource(47416U);
    msg.setSourceEntity(37U);
    msg.setDestination(12713U);
    msg.setDestinationEntity(210U);
    msg.op = 168U;
    msg.entities.assign("BELFXZJMTIMXEDJRNRHDKJPREHLJBBZELPLXPXJJGTKZCYUOYKSBMRWXKKQGVLPOENZPCWHGFQDQKTSFGCSIAOVUUFZAYIUUMHNXRGEUHJ");

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
    msg.setTimeStamp(0.374236919174);
    msg.setSource(53106U);
    msg.setSourceEntity(37U);
    msg.setDestination(26293U);
    msg.setDestinationEntity(253U);
    msg.op = 11U;
    msg.entities.assign("HWRFTYBCDMEUFVWMUOIOLGKLTXSYMBVWBIPJCZNSYVRAKWCAUPIUGWCQORBQNKGOBJYSPWLUCKGNCEJXUNZZQPFQZJBHAPHGIDGVJZRDAXXTTPEKGOOPXPFASNRTZDVGRAGWMDKQIBRJJDSVXOUFONBKFSZVHFQVDFAQHHIQCMXUEWXMTEBFDITYEJRWYHYNTLCHDEAMKQMRUCSPYTNYZSLKVXZNMWLSLZLIQEUTYBAHIHDVGJJOFELOEAXLI");

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
    msg.setTimeStamp(0.224203050757);
    msg.setSource(25958U);
    msg.setSourceEntity(150U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(47U);
    msg.type = 137U;
    msg.speed = 54088U;
    const char tmp_msg_0[] = {-18, -36, 34, -101, 27, 36, 85, -65, -117, 91, -122, -75, 78, -107, -76, -117, 99, 103, 71, 70, 50, 91, -41, 79, 112, -48, 62, 59, -30, 39, -9, 21, -34, -36, -15, 29, 117, -125, -54, 74, 33, 95, -115, 121, 9, -43, -126, -63, 118, -30, -91, -127, 112, -97, -46, 32, 33, 85, 42, 106, 24, -85, -96, 81, 21, 67, -24, 107, 42, 91, -121, 110, -128, 91, -95, 55, 99, 108, 92, 72, -28, 51, 7, 106, -121, -57, 36, -118, -29, -44, 111, 81, 17, 78, -75, -94, 46, -86, -100, -123, -12, 2, -16, -93, -70, -73, 94, -36, -42, 45, 16, 69, 52, -46, -101, -59, -1, 114, 115, 56, -84, -74, 115};
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
    msg.setTimeStamp(0.610177950963);
    msg.setSource(30924U);
    msg.setSourceEntity(181U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(140U);
    msg.type = 137U;
    msg.speed = 64214U;
    const char tmp_msg_0[] = {-58, -66, 38, 64, 120, -19, -8, 69, -60, 5, 58, -122, -50, -74, 55, 122, 104, 113, 120, -54, 34, 29, 82, 82, -120, 112, -46, -57, -52, 54, -52, 115, 66, 97, 22, 87, 65, 7, -112, -104, 94, 60, -116, 14, 60, -45, -106, -46, -51, -14, 3, -38, -66, 121, 112, 119, 22, 24, -64, 96, -105, -42, 122, -67, 110, -54, -2, -123, -13, -8, -26, 12, -111, 122, -30, 53, 112, 92, -24, 82, -70, -19, 123, 19, -14, 50, 108, 1, -48, 84, -34, 4, -88, 28, 89};
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
    msg.setTimeStamp(0.177212396201);
    msg.setSource(39011U);
    msg.setSourceEntity(100U);
    msg.setDestination(8009U);
    msg.setDestinationEntity(254U);
    msg.type = 102U;
    msg.speed = 8076U;
    const char tmp_msg_0[] = {-127, 42, 28, 34, 114, 46, -101, -78, -86, -128, -14, 96, 79, 93, 107, 120, 67, 38, 85, 5, 57, -74, 116, 24, -38, -17, 121, 19, 90, 107, -120, 23, -87, 24, 111, -46, 98, -18, -1, 52, 100, 112, 113, 119, -27, -38, 75, -47, 96, 26, -8, 4, 37, -98, 10, 24, 125, 14, 87, 90, 49, -118, -15, 50, 15, 112, -59, 10, -65, -42, 1, 35, 86, -17, 51, 71, 88, 90, -10, 64, -116, 110, 52, 40, 61, -98, -121, -84, -47, -29, 28, 114, -127, 102, 21, 70, 42, 33, 15, -101, 85, -124, -35, 87, 51, 14, -15, 73, 30, -112, -117, 23, 1, -26, -81, 6, -71, -104, -110, -118, 27, -76, -108, 38, 32, 122, 89, 126, -43, -21, 25, 125, 36, 61, -102, 15, -23, 104, -79, -55, 63, -89, -112, 31, 13, -3, 126, -35, 33, 124, -3, 83, 113, 109, -4, -85, 93, 36, -88, -41, -31, 85, -39, 118, -34, 70, -85, 63, 0, -94, 84, -65, -67, -88, -7, 5, 21, 48, -4, -19, 85, 85, -120, -70, -41, -32, 64, 6, -81, 17, -98, 12, -64, 29, 8, 120, 108, 15, 10, -96, 36, 52, 91, 7, -47, 54, -8, -97, 62, 114, -13, 76, 48, 118, 18, -107, 76, -21, 96, -3, 126, -27, 93, 106, 49, 96, 17, -81, -113, 98, -72, 30, 97, 25, 29, -105, -59, 75, 60};
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
    msg.setTimeStamp(0.833435314806);
    msg.setSource(41988U);
    msg.setSourceEntity(241U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(80U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.0851690299275;
    msg.bank2p_pgain = 0.037710008897;

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
    msg.setTimeStamp(0.740590999878);
    msg.setSource(47018U);
    msg.setSourceEntity(107U);
    msg.setDestination(58731U);
    msg.setDestinationEntity(134U);
    msg.op = 216U;
    msg.tas2acc_pgain = 0.579879750353;
    msg.bank2p_pgain = 0.72978252878;

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
    msg.setTimeStamp(0.243108931345);
    msg.setSource(59649U);
    msg.setSourceEntity(187U);
    msg.setDestination(42240U);
    msg.setDestinationEntity(95U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.294129091895;
    msg.bank2p_pgain = 0.116803695507;

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
    msg.setTimeStamp(0.650618775332);
    msg.setSource(45505U);
    msg.setSourceEntity(204U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(244U);
    msg.available = 286019769U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.516705288304);
    msg.setSource(1518U);
    msg.setSourceEntity(42U);
    msg.setDestination(26041U);
    msg.setDestinationEntity(75U);
    msg.available = 2541204857U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.957138914549);
    msg.setSource(60871U);
    msg.setSourceEntity(22U);
    msg.setDestination(20149U);
    msg.setDestinationEntity(2U);
    msg.available = 1946885632U;
    msg.value = 69U;

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
    msg.setTimeStamp(0.0567968845221);
    msg.setSource(43982U);
    msg.setSourceEntity(201U);
    msg.setDestination(15902U);
    msg.setDestinationEntity(184U);
    msg.op = 230U;
    msg.snapshot.assign("RFIEJTSMEGGDPNIJLHLYTZWTCALMFEVMDBKZOWMYODIINUSMAPFNMSNSZWPYSZSCNCMQOGEOHXAYNENOPKTGGVBCEGLYJKISRUMCPYJBJHPHGKACARWRZBDQYLWQKJOKQYZIXOPLHSQXXADIQNFPSFSIUZAGJIVVEWWAWQRUXBBULQNJAAQTOKFBFJXDZFTCUDETDXUBRUPRGTDLHDCKVHRZEJXLZTPQVBHYLHCXVTB");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.803867303877;
    tmp_msg_0.lon = 0.883442411318;
    tmp_msg_0.depth = 0.686307873845;
    tmp_msg_0.roll = 0.833875106206;
    tmp_msg_0.pitch = 0.89519217735;
    tmp_msg_0.yaw = 0.798803554671;
    tmp_msg_0.rcp_time = 0.0270106374192;
    tmp_msg_0.sid.assign("BZVWYYWFUDEPAQWKWSQGPQAKKJGTIUDXIIRLGQGPQLMVYXRPCVZSQKZUNCXLZEQYFYFXBJKONFLNHHSKMZZYDQPCNFMB");
    tmp_msg_0.s_type = 155U;
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
    msg.setTimeStamp(0.0629409926572);
    msg.setSource(64896U);
    msg.setSourceEntity(116U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(3U);
    msg.op = 100U;
    msg.snapshot.assign("ZJDCGRKZKBRAWQSVYTECEFPUDCGDTVLLOUIYLFZWNHISKMJQZTOXXIZFADDXFXSVMLGQALNJTNIRFURFXHMVDQVSJAWKNUPILSLGWVTEHUJYATAMUOGTGVBMNBLHCBTYP");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.60059622423;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 52855U;
    tmp_msg_0.custom.assign("KZCRVNBUXECBJTOUYKNNZHDDPETSKVYAJFULDNIQTOCNXYJORGMNHPVOTFVMQIQUMQVHETOAKYHFZMNIERLEWPGPWBBWWTBDXJSJBYLWZMVDKQBJZGALIGOROIYSDSVCEWMDUVFPGLUFEGZKPCXVDQUHBFSEJDQIIQRHECZSEAHIPJVFOXUKOSRJPLSUFHKMGILFBRWWXNGTAGBTCAGQPCCCMY");
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
    msg.setTimeStamp(0.348856979946);
    msg.setSource(42453U);
    msg.setSourceEntity(238U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(124U);
    msg.op = 122U;
    msg.snapshot.assign("MGKXBQPQTUARBVJRRYKGUBJXAFEXMPYRENKZBYPTDYRQPMXVRDMOVYSRIUBLGEHMQJRBPDCMMAWOOYCFUIPLSYTXJWREHCKYQHKJNFSCWXCVCZAAFTGEGNGHVCNMUMAOSJBYHKGMATTKDNUSFLAXIEPISVTFLWSONSPSWWLLVHUQVLGGEBOGXJFJQZXUFQTAAXDPHIVBSQN");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.13262909518);
    msg.setSource(29264U);
    msg.setSourceEntity(188U);
    msg.setDestination(17511U);
    msg.setDestinationEntity(127U);
    msg.op = 118U;
    msg.name.assign("UASPZFEMSZIVWMDWFLSJNLQQDHBNYPGLAVZOQTHVPJEMEFRSJHJZXPFBDRMYONVKHLCLRERPZETXDGSDEVNXBIQRDTKIRHVVGUWYTTNXZSAYMRUNXUWJCOXGIQEAEQCCKQIYNAMJKJFKLXIKRLYYGWDCMQXMNNLTHDHFJLEGXGIKZFWFIRYQARSPCAUVBOZXTYQMFCWSGGJTWBOBBKPHENGPKHIHFSJOYKOZTVSWCCTUDOB");

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
    msg.setTimeStamp(0.311340361739);
    msg.setSource(12031U);
    msg.setSourceEntity(224U);
    msg.setDestination(52814U);
    msg.setDestinationEntity(184U);
    msg.op = 231U;
    msg.name.assign("HCYRMBVVHJSSZGPKKZASENKHUPCKQCFMAXHQBNSCJVOUOLYWUIDKPAYVGZNYJNKERDTHUSUNQPGORLRVLPXGMPOTFJMTYEZPHDFFBAIMTXQZIZAUWGIOSBAVGZQJRFBEINR");

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
    msg.setTimeStamp(0.775176808798);
    msg.setSource(10402U);
    msg.setSourceEntity(9U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(218U);
    msg.op = 232U;
    msg.name.assign("JTQXQOWIIFEOAPVGBVCIRSGKDZVEUOWHCDFIQHWAVHNVTEXNNOBBAQROIMQOQCZFGFPHYWHOQZMDCBKSLJVGGZJEODPVUKLDKSUACXZUTYNEHMGPLQACRWNMSWCRSTDZHHKXZKPMUEQMZAFMYWYBJDMTNLJDFKGLWLABYDSRSXTAPLVRUXIIEHBIRGTZOLSAIEBCUOJYRPERNPUTNLKBAJBJGSWEDCFUJXPUYTVJYFSXKNHZKXY");

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
    msg.setTimeStamp(0.65004756924);
    msg.setSource(44612U);
    msg.setSourceEntity(91U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(163U);
    msg.type = 96U;
    msg.htime = 0.976209892912;
    msg.context.assign("MUBTUQCCXZPMXEMADYSKZBNLSWWIXBROMWCDBPDRTNLVQLQKNHWLONSFNHPJFXXFUFAAUVTQYYMXDDQBVPIJGDLQTECPNQUGWETUXXWJNPRZUVATVORBOVRAOJMZLQNLAHBIVJDILCYZEVFKZUJKMBYHYAHJFCQFEDORMINHITQTJRWLKEVJOLMGEIKFWJAYSHYOSKHGUGDZUTHBCFSASAGVIEZPONWPKOCBDKXMPSXZPZCEFSWKIHG");
    msg.text.assign("ZTPVJOYGOILQKKTPLPMXEQVJLSURNLLNAPABIWJVAZJKOODLCDCJYRRNHTAEMODKHISSRJTWVPAZEFFCXBTVLJRYGUAXCGEHOQKOISCQIKITYCSDMDVHMWQRPXDTG");

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
    msg.setTimeStamp(0.822391162487);
    msg.setSource(32635U);
    msg.setSourceEntity(152U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(175U);
    msg.type = 150U;
    msg.htime = 0.945832082204;
    msg.context.assign("RGOEGQVFWPQOYTXAYNPYJYWGDYRIKDJDKXCHUUWKIRIWSVLSISHNRBOJVPEUVDCGSCCQOLRKMHYFRBCGOXLVSDFAZTRKGUJHPZFHCFAYCZOONMZJZHIEJAXPNEWLEZAFKSCRPLDTTZUDEWMPSNKNKBRJGPFBUJZAYLTCNIXXQOHGUZQPOEBA");
    msg.text.assign("GHFDPTLFLVGVINWBCKBDCTXZILXRQZSTMKJGDONWMYOMCTYEKGICHULRZKFAHIJABQLUBLZAWQBRLCXPEPDCUOFPIOLQWVKNWGJENWSZMBXMKINAWGPOYRIHJHPDBSHPGDSCKYLIYGEJWJTTAAEVFNDTEZAFQYVNDBUONUUMKATCSTQRPRHFOKW");

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
    msg.setTimeStamp(0.553494583471);
    msg.setSource(27152U);
    msg.setSourceEntity(53U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(46U);
    msg.type = 19U;
    msg.htime = 0.238499130708;
    msg.context.assign("FQFMLBBOOOJIHJGCXWSSRKPYTROICFOBNFSSSJNDFZKBWAGYEHMZDLUHZFEUHLCMIRPIIZKPJRHBNQMV");
    msg.text.assign("NONIYHLVVKRGOORCPBSBPQSYKDPIJESLQWAFSCMYFLEAZTEJIFKLCDOXDTKUSMUHHCJBZVPTJZBNOPOXNVZKKKZAGWPRYMNIHFEHEPXGXNTIVGWXAOTXKSTOBFFLJQJGIMLGWYWCWDCDBRH");

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
    msg.setTimeStamp(0.0305043026234);
    msg.setSource(28017U);
    msg.setSourceEntity(165U);
    msg.setDestination(56843U);
    msg.setDestinationEntity(28U);
    msg.command = 117U;
    msg.htime = 0.344457097714;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.htime = 0.93933691149;
    tmp_msg_0.context.assign("EEJQUHQCUEQIPVVYNCRZMRBTFISHTNITSNIPJHWDGKQZOPWQQKEIQHHHGCJOYREXDZEWJFLDNOCAUOXKRIVZTJDBVMHZFSKJAFZLOMTPCABKJIWVBYNXFYDFAXAPRDKYOKXGRFUJNCFWWMAMFWSMVAALTGOGABCIMPFSGUQUYUBUPAVYYEQKOLNTCNMWHTRGHSXJRGRLPJDCLVZRTVBSBZZ");
    tmp_msg_0.text.assign("WAYMMFCLYUVBSSWERTKYCGRVJQEJCMHXFVIGBRNONHISVZFREVIJDOCYUKUCVZSORFLJOQWMKEQABTSTQFITZDUPKHTPSLZXIXTTULAYYISXDJMPJNLMPFFBHNVXYKCGLIBWOBNGGWOCLZJDY");
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
    msg.setTimeStamp(0.108097390056);
    msg.setSource(24324U);
    msg.setSourceEntity(124U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(44U);
    msg.command = 128U;
    msg.htime = 0.515606163347;

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
    msg.setTimeStamp(0.0735496311731);
    msg.setSource(54120U);
    msg.setSourceEntity(207U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(253U);
    msg.command = 26U;
    msg.htime = 0.572551816283;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 97U;
    tmp_msg_0.htime = 0.86615638789;
    tmp_msg_0.context.assign("DEPSCGGKZEVADAORLLIRJMPTEYITXJWUEODSKYOUFXGCHBQUBTQXRPZTXCAHZWMQAOBTNCZYKBNUVNNJDOHAYNHOYCNECPEHTQVUJVBYFMLWOCZMMNIOWSJGKVMDLDJGQDYPGZPFATRIWYCRNUEGHHFTKRJFJWVSQZYALEGPBLSMFMKIWHBYIZSLNAPSZKIABSORLOXGSMLKXWKVRLSQ");
    tmp_msg_0.text.assign("HKRKCXRDDGPMTEKPRKTGEEFROGPMBPQXVISOEGYNANDLYFOGJALHZSSLQQGZWI");
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
    msg.setTimeStamp(0.171857936299);
    msg.setSource(62735U);
    msg.setSourceEntity(173U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(44U);
    msg.op = 252U;
    msg.file.assign("KKNAMFFUOUSGXHZTRMRVNZSJEGETDFPPKHRNDWAWKCNGVPPACRJVWYTNADNKLTWBSDINLEIGELWCXZBRJXQXCQJLXOZYKDEDQMUGUVFAQTBTCPHCDZQAOOYWUZSCZYQTOJYWYEMSGQUHMLXRFHYYAFACRNWMBSBBHMOFLTWXXOZKJEILQHGYNOUPZJLKGOFSOFXMNLXCFMVJ");

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
    msg.setTimeStamp(0.447809576976);
    msg.setSource(30541U);
    msg.setSourceEntity(78U);
    msg.setDestination(42882U);
    msg.setDestinationEntity(56U);
    msg.op = 165U;
    msg.file.assign("KLUHSJMSJFAVUEOKFRTRGDLYTJJNZOAHSNZVBSMZJYPPZFCRXVAVFYGHCBWUGQLRQODQMUHIYDUVTNLKTMHTHXFMZUVGJTIOZDJFCMFABWKSWFUMQXLXWNPABBPPRBRLMKKSCTNTHOODQAIGASUXAIWHESPIYXCEWDNJLXUW");

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
    msg.setTimeStamp(0.826474477879);
    msg.setSource(8730U);
    msg.setSourceEntity(132U);
    msg.setDestination(54964U);
    msg.setDestinationEntity(145U);
    msg.op = 161U;
    msg.file.assign("QBCWVQNTREIPBKDATYSZOEYCLYWITLLHPPAFGUWDPNEGZAHRLDVGJVEBCHSXQXCKDWOUDMGVIAXHMZUCOKAJZCSJFRNFMTOEMVWKLYJACHLNQJKSIPQGDXJMEAUXYKCCHBDSNZBOXBDZQWJFAKBGSAKTWTELKISURFTXRJF");

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
    msg.setTimeStamp(0.57955950918);
    msg.setSource(11775U);
    msg.setSourceEntity(60U);
    msg.setDestination(64419U);
    msg.setDestinationEntity(42U);
    msg.op = 35U;
    msg.clock = 0.147861751757;
    msg.tz = -52;

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
    msg.setTimeStamp(0.329784817441);
    msg.setSource(27165U);
    msg.setSourceEntity(118U);
    msg.setDestination(15531U);
    msg.setDestinationEntity(3U);
    msg.op = 158U;
    msg.clock = 0.197247647832;
    msg.tz = -92;

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
    msg.setTimeStamp(0.455030604132);
    msg.setSource(47471U);
    msg.setSourceEntity(93U);
    msg.setDestination(54088U);
    msg.setDestinationEntity(97U);
    msg.op = 215U;
    msg.clock = 0.449781251778;
    msg.tz = 0;

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
    msg.setTimeStamp(0.294291960814);
    msg.setSource(40048U);
    msg.setSourceEntity(206U);
    msg.setDestination(16013U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.710444792751);
    msg.setSource(59176U);
    msg.setSourceEntity(208U);
    msg.setDestination(35667U);
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
    msg.setTimeStamp(0.76717475751);
    msg.setSource(40900U);
    msg.setSourceEntity(108U);
    msg.setDestination(21642U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.428079187592);
    msg.setSource(19561U);
    msg.setSourceEntity(222U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("ZIFPBBKALDVUGQUGEUMWPT");
    msg.sys_type = 119U;
    msg.owner = 36460U;
    msg.lat = 0.966967281838;
    msg.lon = 0.284899657109;
    msg.height = 0.557395163886;
    msg.services.assign("MXOQECABJIEANQMHWFHDAUMLTRGBBYXAVZYEUFHITCDBDTOXQTLKPKTZQHNZKMUPHUVFDPCJIHMONKGMCAJZVTAOUNQPIAEURPCREVQQCWISZSRZXLREREJBOTXNVPOJPSTDSFHUZSLGBDARXSRWEEUIMNMUNSDTBYFIZWSRZMCGNPWCNBKWJKEPXBSX");

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
    msg.setTimeStamp(0.848377407356);
    msg.setSource(10914U);
    msg.setSourceEntity(12U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("NNIODKKHZQHYPBIEKUQDCFFLCDWXPFCHYOQODHURYLAOFBGWZXQRKSSQESMMRAPWJGQNLHTWCTDIISULE");
    msg.sys_type = 232U;
    msg.owner = 30428U;
    msg.lat = 0.73349626553;
    msg.lon = 0.972790183907;
    msg.height = 0.866822744478;
    msg.services.assign("SZMSRPAHERFLHGRQHQJLEZUARKWEZBJLALWUFEIVPWJPIVWTFDSPXVGBRTLWWVMXDCONNUMUWXKDFDXTOIMXZPAIMOZCSAHYGWJKKVUDMFCAZESUCAXLELNXIXPUTTRKGZQOOIYEU");

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
    msg.setTimeStamp(0.57929001403);
    msg.setSource(58351U);
    msg.setSourceEntity(49U);
    msg.setDestination(28605U);
    msg.setDestinationEntity(140U);
    msg.sys_name.assign("PUDUGXQCNMQNBVLOYKQSSLURENADKZIQNCWGPWXALLGGICZGGNLUJTAAIZHTUYNHCSCRPEIXWVLTZMLMHXZHJRZKIUTWOVBMKXVVDFEUFVGPXDQFYODILTARPNREWXYQTHIWICPLMKWTBDOOAQGYRZEAPIDBFKJURRHDFRDYHSQVVOYCYEVFKRNKGZQOMXJZMBYBPLUYTWCSBBKHFEZNOUMGVSFMOMAEJJ");
    msg.sys_type = 124U;
    msg.owner = 37610U;
    msg.lat = 0.729647212406;
    msg.lon = 0.875313746409;
    msg.height = 0.142970145986;
    msg.services.assign("MMKWMJVYFDSIFQRLSDKJKVRNBEILNTTGDTFGNNMGNWVQRTFAQEWCRDTOAHXHPJSXDVYKVITRUUNBPOCHNOCCUZWOJHNYACUZZZXHLRSYSQTKCPFEBWIWOSQKIXPGFOUILPDORQBARDJGPCZHXPYGYELUGLWUSSMBXPBEEWJYUHWZIHXDXJBTFSYUBLAVEVGMLMUAOQTOHJMDIHXEDL");

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
    msg.setTimeStamp(0.527523369832);
    msg.setSource(30243U);
    msg.setSourceEntity(234U);
    msg.setDestination(58472U);
    msg.setDestinationEntity(199U);
    msg.service.assign("MPOTZPMCPACXHSWDHPSRLODHUJROOGEUSPOEXNSAKFBLIRMQQTCHYLSKDZILRROZMJHUBESGBTWVCBBZJPXLCNRWVTTLQXYKXNBPGDIVPJUYLUVRVFYHQPWASVCGNMOAEZISKLQGNKDMSOYTWDXCBEBJQWFTNBHEUGAUDKKRFVJQOZWXIBWNHUZJCAECIRG");
    msg.service_type = 141U;

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
    msg.setTimeStamp(0.00609759565424);
    msg.setSource(33188U);
    msg.setSourceEntity(111U);
    msg.setDestination(48492U);
    msg.setDestinationEntity(122U);
    msg.service.assign("FOIGVCCEENUMBMFKIXLPPZEIKUXKJVCUMLSLNJGPEFTXGYYLRCOSFBUBCRRDMWDTAIXHDKSHOHMGXKDWOGGHKBJQTTZKLNFVCKSUESLRQSADXRDFCICOTN");
    msg.service_type = 182U;

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
    msg.setTimeStamp(0.696605000892);
    msg.setSource(40489U);
    msg.setSourceEntity(241U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(125U);
    msg.service.assign("KWKOEDNNLYLRKDCFZIAWUXKQYZGIMTZCYWHGMJQAIZHAEALDCJTTTDOOXVVKPOEYJZWXSETHWBJMCIDQSGIGLWRVGUBFVFOANCMOBHZVTEJEZSKDWPMWNBVBHUQUIFSXUAIHLXQCKBEGQTSFOPNV");
    msg.service_type = 220U;

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
    msg.setTimeStamp(0.70454337312);
    msg.setSource(54108U);
    msg.setSourceEntity(166U);
    msg.setDestination(19479U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0876822048344;

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
    msg.setTimeStamp(0.261301055292);
    msg.setSource(37064U);
    msg.setSourceEntity(135U);
    msg.setDestination(41359U);
    msg.setDestinationEntity(158U);
    msg.value = 0.933367098767;

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
    msg.setTimeStamp(0.826999647577);
    msg.setSource(57828U);
    msg.setSourceEntity(13U);
    msg.setDestination(32329U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0873338272181;

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
    msg.setTimeStamp(0.223592854262);
    msg.setSource(52619U);
    msg.setSourceEntity(241U);
    msg.setDestination(38117U);
    msg.setDestinationEntity(240U);
    msg.value = 0.482040084765;

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
    msg.setTimeStamp(0.33103492097);
    msg.setSource(37411U);
    msg.setSourceEntity(10U);
    msg.setDestination(22335U);
    msg.setDestinationEntity(22U);
    msg.value = 0.140765834972;

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
    msg.setTimeStamp(0.371936317768);
    msg.setSource(46070U);
    msg.setSourceEntity(151U);
    msg.setDestination(40632U);
    msg.setDestinationEntity(138U);
    msg.value = 0.685568358344;

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
    msg.setTimeStamp(0.171944938241);
    msg.setSource(12833U);
    msg.setSourceEntity(219U);
    msg.setDestination(64301U);
    msg.setDestinationEntity(241U);
    msg.value = 0.755451122209;

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
    msg.setTimeStamp(0.943871718192);
    msg.setSource(3786U);
    msg.setSourceEntity(68U);
    msg.setDestination(31235U);
    msg.setDestinationEntity(230U);
    msg.value = 0.856696802896;

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
    msg.setTimeStamp(0.159770425189);
    msg.setSource(14980U);
    msg.setSourceEntity(42U);
    msg.setDestination(32604U);
    msg.setDestinationEntity(156U);
    msg.value = 0.700974965449;

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
    msg.setTimeStamp(0.772035425662);
    msg.setSource(39413U);
    msg.setSourceEntity(81U);
    msg.setDestination(42419U);
    msg.setDestinationEntity(208U);
    msg.number.assign("OJWSJNRBAHAOUVLGXINWHPMRBBPUFPYKBDDAPMKXGYEYLUSPCTQLNHRYJMWMMDHYWIUVGROCPSONXGQEOVCZYBJHRORWLQQF");
    msg.timeout = 27485U;
    msg.contents.assign("AWYDBCAGGKLXVRFWONKHPVAKKGOLRULMEQJSWAUKQMCCUJHNLNUNGLFPDCEZJBXYSDMHFKPDFPJDMORJUAPRREQFIVTTIBPULWCBZXRYHQNYCHLJCEFTGIJBXEBFSSNJVQVGEPPZXWBOWIYZVMCGGCQMBTADLEFNLYXSXTTHFYEYSTHSDZIUNQMHSATMAVORWSOWIIPTKEWRRIU");

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
    msg.setTimeStamp(0.23701262864);
    msg.setSource(40384U);
    msg.setSourceEntity(94U);
    msg.setDestination(48700U);
    msg.setDestinationEntity(114U);
    msg.number.assign("CIBXAZYMWPXMJHYGHOUSNIRMRJDFLAJBYUQQRPCHOLURKSZSOQUIVSEKQLYGMAZPICKZRXJVMLSQRPSFHKTAKEGXZTXGLL");
    msg.timeout = 18628U;
    msg.contents.assign("CGKMRVHSRHYBPLAXRVHFLQZQBIKNPMZKDHMDXUZBFBMNJQJGEATXWNYWYSIOHNONAURFXDVFJIFHWOEFYJTPAFLGAQCBNPRBYEQJSWMOOASEGQHKOSTLNYZJBTHECWDTUQYKIE");

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
    msg.setTimeStamp(0.116172907114);
    msg.setSource(52719U);
    msg.setSourceEntity(196U);
    msg.setDestination(56596U);
    msg.setDestinationEntity(135U);
    msg.number.assign("YSFJXZKIBHFSAXLKPNZICXLHNDHTJXVYVKVETDYKNSMAGXBWGRILTNGRZPTLEUFEMRYKMECVMDBOYYIXRPUUIQWKZXFCOJJIODUBLSUQHCYAJVBZNRQIKSAUEQRICNTFVVQYXOGRXGMNEKGWQPFASDQGTPWQONURDZWNQJ");
    msg.timeout = 49901U;
    msg.contents.assign("KOWGZZMUNTZMTZULJJJIYDFMAYBPJZYVOWMMMKOPVROCHOKO");

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
    msg.setTimeStamp(0.843754196939);
    msg.setSource(10660U);
    msg.setSourceEntity(44U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(43U);
    msg.seq = 3649384254U;
    msg.destination.assign("FAIZSFVODXVJQPWPKMXZPSIYHYBXHREQOXWXSQQYMRDJHLWRGBBFCNYZILVLDUAFKBBEZNSFWBTDGVMVNVKK");
    msg.timeout = 18033U;
    const char tmp_msg_0[] = {-48, -42, 6, 67, 50, 78, -4, 31, 75, 112, -20, -122, -118, 123, -119, -106, 57, 12, 79, -28, 9, -92, -119, -36, -11, -75, 34, -93, -89, 11, -111, 75, -63, 87, 114, 10, -102, 116, -60, -50, 86, -127, 15, -109, -113, 74, -1, -78, -34, -9, -125, -109, 124, 53, -98, 93, -14, -103, -93, -102, -62, -2, -80, -43, -47, -27, -91, -72, 89, -16, 105, 70, 46, 12, -70, 81, 57, -57, 122, -46, -35, 60, 76, -53, -22, -22, 50, 40, 39, 16, -73, -58, -84, -2, -74, -111, 12, 1, -112, -105, 98, 3, -117, -10, 92, 9, 15, -64, 105, 5, -46, 88, 32, -33, 3, -3, 5, -54, -112, -112, -119, 78, -66, -75, -68, 42, 18, -94, -76, -80, 91, 53, -80, 10, 32};
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
    msg.setTimeStamp(0.598646309019);
    msg.setSource(39865U);
    msg.setSourceEntity(128U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(47U);
    msg.seq = 3962161844U;
    msg.destination.assign("ZSYNVYBGBACVEFPFPKECJFTENMSCQEVWFZDSCJZLMVEBLOHUIYRUIPRBQCFWUKCNEJHSGDLRUZHXWDNYTMODIOGNKADWWAFSIXMKRWGAWXFCODOQCB");
    msg.timeout = 7832U;
    const char tmp_msg_0[] = {-126, -16, 109, -26, 126, 90, -72, -46, -96, -40, 86, -56, 74, 104, 69, -6, -76, -114, 90, 27, 74, 62, 58, 75, 18, -126, 18, 51, -83, 93, 12, -48, 43, 19, -128, 18, -93, 43, 17, -112, 26, 122, 11, 90, -27};
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
    msg.setTimeStamp(0.152483395454);
    msg.setSource(25724U);
    msg.setSourceEntity(185U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(194U);
    msg.seq = 4118328039U;
    msg.destination.assign("RLFQVPWOJUSPFYQ");
    msg.timeout = 34539U;
    const char tmp_msg_0[] = {76, 115, -77, -111, -104, 75, -58, 90, 125, 50, -103, -84, -4, -47, -26, -121, -101, -26, 44, -97, -118};
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
    msg.setTimeStamp(0.080807852907);
    msg.setSource(48823U);
    msg.setSourceEntity(225U);
    msg.setDestination(56809U);
    msg.setDestinationEntity(22U);
    msg.source.assign("ASSGJZZQIPECLNBDTYSMWOXUOWFDNIQEYYDUILDUGLRXRBIPOTWSZAWLCNLUMVJMTAHPRHGGOKYRJBUVQMSTQQFMTKXCJMEW");
    const char tmp_msg_0[] = {44, 61, -86, 88, 61, -7, -107, 37, 67, 19, 126, -115, 44, 62, -120, 0, 20, -109, 61, -20, -97, 39, -101, -105, 46, 126, -31, 120, 106, 2, -37, 114, -88, 47, -101, -55, -111, 121, 79, 87, 24, -126, -1, 31, 91, 88, 8, -40, 83, -20, -31, 93, -42, 102, 40, -30, 69, -55, -116, -5, -9, -123, 7, -63, -123, 80, 89, 83, 87, 65, -95, 56, -1, 46, 79, -123, -49, -117, -74, -77, 31, -98, 2, 125, 88, -65, 76, -59, 126, 76, -33, -125, -99, 20, 67, -83, 74, 11, 93, -118, 104, -94, 44, -42, -43, -36, -75, -8};
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
    msg.setTimeStamp(0.346570154169);
    msg.setSource(46759U);
    msg.setSourceEntity(176U);
    msg.setDestination(33902U);
    msg.setDestinationEntity(181U);
    msg.source.assign("ECINEBOSZCTCNFFAQMXHHDCT");
    const char tmp_msg_0[] = {86, -79, -63, -1, -114, -53, -6, -76, -94, 68, 99, -28, 98, 20, -12, -17, 51, 65, 84, -58, -76, 85, 107, -56, -32, 104, -55, -5, 29, -56, -116, 114, 30, -33, 97, -120, -57, 2, -97, -66, -76, 76, -6, 8, 39, -56, 97, -1, 70, 1, 2, 49, -46, -28, -39, 80, -18, -108, -123, -120, 97, -109, -113, -24, 63, -118, -107, 61, 51, 72, -79, -96, 12, -2, -71, 42, -58, 0, 51, -3, -54, 71, 53, -14, -117, -78, 68, -48, 61, -64, 113, -16, -107, -94, 81, 91, -86, -37, -46, -38, 94, -25, 113, 5, -104, -91, -114, -32, -30, 10, 111, -44, -18, -70, 58, -122, 104, -49, -115, 20, -88, 84, -41, 93, 50, -66, -32, -25, 88, 95, -84, -89, 54, -103, -87, -92, -111, 15, -10, -99, -93, 56, 116, -40, -126, -110, -90, 89, 19, -42, -119, 48, 91, 104, 4, -56, -42, -16};
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
    msg.setTimeStamp(0.0110548785399);
    msg.setSource(29700U);
    msg.setSourceEntity(113U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(166U);
    msg.source.assign("WJRLEOQDSXPIAWNZCNVGUOIGKPYMPDKNPREEDICAUBGQKUGBLYEYDQGRWMQRTCFOABGVTOBNLEGHNTJGCTDAMUXNKSZZMZYMIZDICBUDSDULDVTSYHTLMWJJEJFR");
    const char tmp_msg_0[] = {-92, 125, -69, 19, 67, -60, 45, -97, -72, -6, -25, -127, -98, -57, 64, 56, -43, -111, -19, 90, -49, 95, 20, -4, 87, -36, -52, -121, -48, -65, 17, 9, 16, 16, 5, 111, 85, 63, -25, 65, -37, 93, -25, -40, 121, -34, 61, -13, 73, -38, 52, -34, -91, -86, 62, 0, 117, -5, -127, -17, -84, -65, 82, -8, 109, -107, -106, -13, 26, 34, 72, 86, 47, 97, -1, -79, 58, 83, -124, 95, 126, 105, -11, -20, -59, -28, 82, 19, 73, 28, 23, 48, -104, -67, -115, -84, -24, -95, -69, -119, 84, -49, 43, -9, 58, -30, -34, -74, 65, 12, 98, -122, -18, 109, -72, 122, -1, 46, 52, -100, 124, -35, 42, 49, 79, 111, 63, 72, -15, -85, 95};
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
    msg.setTimeStamp(0.216393884167);
    msg.setSource(8625U);
    msg.setSourceEntity(79U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(88U);
    msg.seq = 893547205U;
    msg.state = 12U;
    msg.error.assign("GPFMAZLEDCMVYFJDCZDWCSSHQHDGRERNVXSFCTBUUSUNNODQZERIRXAEQJWKPYSMFIVUUKQATYWCQNQILDRENLZRHDAFLIHNVKUQGLWHNSMDF");

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
    msg.setTimeStamp(0.456674929645);
    msg.setSource(57608U);
    msg.setSourceEntity(92U);
    msg.setDestination(21790U);
    msg.setDestinationEntity(33U);
    msg.seq = 1594073811U;
    msg.state = 11U;
    msg.error.assign("LMYHYSARQSDUEANUBMMFOWNMKPORGJJOBMHKONFQDLFPMDDCRGUKWCIOFZEJCPPVAHTYSGYWFQFWSXPWYWZRCVXUCUVIPEVJIQHEBCIHNYZAFRRJGIENJIOKKDWPBJXWUOVTGNQATQBTKULZYOTXJSHACIZXRMXQNZXBUTHWAJIPZHAVZLLYOXHSGYXGKJBOTGCACDVXRPLMHDLEQMLW");

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
    msg.setTimeStamp(0.5653977783);
    msg.setSource(18679U);
    msg.setSourceEntity(77U);
    msg.setDestination(21309U);
    msg.setDestinationEntity(42U);
    msg.seq = 167374862U;
    msg.state = 185U;
    msg.error.assign("DWVRKWPPARSRHJEILFBERAOLTDXWYFTDTYNNSKIIBLZSZZNYYUKNCGMTGPWRWHBYNUGFFKFAPKVMQXTIOLXCBRKH");

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
    msg.setTimeStamp(0.198031604685);
    msg.setSource(26552U);
    msg.setSourceEntity(222U);
    msg.setDestination(28878U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("UYPCCDAYPCXRYECGLZOIWLTHHRZDLFHIZTYNPAVMQJVJOSKXBRGSZNRWKXSOWWEVDGJSULEZUHTOAJKBFOQJCDRBQQFQRZMDVEPEAZHYMZPVSIAEBKRHHRBLUCSPVUBKTAQKPEBICWVQIBEHRMDUVZWFIMGL");
    msg.links = 1194809955U;

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
    msg.setTimeStamp(0.618770915382);
    msg.setSource(14347U);
    msg.setSourceEntity(9U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("LBYQPAPLLVSHNNVNBFSTJEADOKVMSMHPBZHYPVWGRYCRTZWWOSFUENBYOHTDJTXIKVRFZQLCIQUQRJKEF");
    msg.links = 1258249833U;

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
    msg.setTimeStamp(0.590563842753);
    msg.setSource(54425U);
    msg.setSourceEntity(24U);
    msg.setDestination(17270U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("AYYEGPTYQCITUARYBWGEKKUDAKXLPDIMUWMJKEAZZCVCIZZYAUNDGVDPRAFYIOVGKW");
    msg.links = 4054316782U;

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
    msg.setTimeStamp(0.450290437944);
    msg.setSource(26824U);
    msg.setSourceEntity(223U);
    msg.setDestination(3216U);
    msg.setDestinationEntity(184U);
    msg.groupname.assign("QWWYKHDPGLTSFQIXSGQITLWZUAQUNLUXQGOCXNXOPRADVRLJVPVZSRXCROPRBLNHJZZNSYEEJSWZFMMQIUNATNGFSBTDKALIMBOVOBUCPELCXAAKYLGYJABFAIHHMHVOXFMDZOZVUORRUCQPUZVKLCBCULJHTXBCWEJBWQ");
    msg.action = 86U;
    msg.grouplist.assign("VYMYZTCPXUDEKLNBCPWHXAQMKUHKZRRCXXSWIIVNZOLPOUKEEFFMYMQOLONUCYINFCSUEWUAQJJDKZVHXPQJIYJXIBONPDDQTOSAWTSPMSBPMYSRFDJNN");

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
    msg.setTimeStamp(0.448861037589);
    msg.setSource(36585U);
    msg.setSourceEntity(113U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("GQRSQPMXZYZMWINPWFJJNMYPAHXUEJYQY");
    msg.action = 92U;
    msg.grouplist.assign("EBGQGXRLCTAJZVBEHUTUMPWKIILRHHYWYXDNNJCILYIYNTTNKQZOWGERFXOUEXTZXIMTOUXSVTZTMPAAZHCWJVVAYQKBPFGCOKREWNNBRHLJVAOBAUNGOFADDCFEDARWPSFHOOZDCPDONCROPAEPQCFAPMHWKVWELUJZYSYWXMIBXPNBCISDQQZRIHHXBQFRKJDJVUTEVFBPGFYBKXMGWSSGZUTKDLSJSLKMRIZYMSUHYSG");

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
    msg.setTimeStamp(0.326201776667);
    msg.setSource(31707U);
    msg.setSourceEntity(110U);
    msg.setDestination(8116U);
    msg.setDestinationEntity(32U);
    msg.groupname.assign("DKTDLXAFSUWXZIFUDLCVHCXWGHRZJWBJCORRXWKORNVNOFFCBJWCKYBRNXIUUVINGBQJGBGTQNSEUJLKEUHMRQSDGROXOQIMKWMIFVEWOMSZUCDYAHMISNXXOLIHVKCYYPEQMLTXAETWTUYLPNJDFZLSJSXDKFAMIYDWPVPEKWPNOYGYTHEHBJPA");
    msg.action = 102U;
    msg.grouplist.assign("KDUQAPGCPVZHNRFEHVSLIKEIZIGYITFKLDLOVWASTYVKSDSHYINGXOEVZMCJNQSOYOUXTJCVFEBTGGAXRJKPTJOLGUCFYCLXMYBHFCNMYOHRJDTJFJMSMNERHAANWMROBMJESVRHUBBUCQLVDWBNFBQDUFJANIFJIPAEUESMPDXWBIIFPHXHQPVYWLMEIYDOXTOVSZQTCMGWDRPKBQPGRAZZXUKGCQZQWOXBYDKUQU");

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
    msg.setTimeStamp(0.542157792714);
    msg.setSource(49806U);
    msg.setSourceEntity(163U);
    msg.setDestination(21561U);
    msg.setDestinationEntity(32U);
    msg.id = 19U;
    msg.range = 0.366310358626;

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
    msg.setTimeStamp(0.0644863648934);
    msg.setSource(48529U);
    msg.setSourceEntity(208U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(118U);
    msg.id = 238U;
    msg.range = 0.656045045051;

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
    msg.setTimeStamp(0.338605688535);
    msg.setSource(43198U);
    msg.setSourceEntity(221U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(118U);
    msg.id = 197U;
    msg.range = 0.59361061908;

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
    msg.setTimeStamp(0.617748876251);
    msg.setSource(44102U);
    msg.setSourceEntity(113U);
    msg.setDestination(39545U);
    msg.setDestinationEntity(187U);
    msg.tx = 167U;
    msg.channel = 27U;
    msg.timer = 27705U;

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
    msg.setTimeStamp(0.54035240662);
    msg.setSource(55497U);
    msg.setSourceEntity(12U);
    msg.setDestination(7056U);
    msg.setDestinationEntity(138U);
    msg.tx = 146U;
    msg.channel = 96U;
    msg.timer = 40577U;

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
    msg.setTimeStamp(0.458440274768);
    msg.setSource(5751U);
    msg.setSourceEntity(123U);
    msg.setDestination(59394U);
    msg.setDestinationEntity(17U);
    msg.tx = 67U;
    msg.channel = 27U;
    msg.timer = 2480U;

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
    msg.setTimeStamp(0.292039338733);
    msg.setSource(34668U);
    msg.setSourceEntity(152U);
    msg.setDestination(17623U);
    msg.setDestinationEntity(73U);
    msg.beacon.assign("BOWIFTWAFCKCVJCVZSCCCOBUQUJNGUKTILQXDUFDNHYZOTNLFVSWAQGSAJHOGIWIADKKYQWBAVPEZNBEBEMSOILRMNQRJNGTLLHGDRYRJAMLRFSOSMZXZBBTZMQCXRVDPLFXXXYWAUPEIRPIVQWVYJPQXEXSDFZHBBJSRTXYMEKATZPHYQGNUHAWLGOHKTBIYAOIGDPD");
    msg.lat = 0.937926843113;
    msg.lon = 0.0765276387758;
    msg.depth = 0.341129260882;
    msg.query_channel = 97U;
    msg.reply_channel = 153U;
    msg.transponder_delay = 38U;

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
    msg.setTimeStamp(0.185103815786);
    msg.setSource(38425U);
    msg.setSourceEntity(105U);
    msg.setDestination(29684U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("OVHTVNRZFUCHHRYYLRQBQZOOQWVSYVPBRXEWTQVDIGLNMDXMIYSOVGJJAUWZAKTNNIBVFTRPDWLOHTNRJROHKBVTMUGBETUCWGAERJMPZPCOAWKGDAKFAMXFZYJUCXMBYMQSYPEEYHPPBSKNUSXTUBCOCWLKWFJXUKICLDXQSZAPAAXPIWISEXMHUKS");
    msg.lat = 0.992304008184;
    msg.lon = 0.403873770266;
    msg.depth = 0.561168223719;
    msg.query_channel = 156U;
    msg.reply_channel = 218U;
    msg.transponder_delay = 144U;

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
    msg.setTimeStamp(0.954918617117);
    msg.setSource(28786U);
    msg.setSourceEntity(157U);
    msg.setDestination(8293U);
    msg.setDestinationEntity(246U);
    msg.beacon.assign("GBDYVIEBRRYFOZGZAMJDRVKODPLAEWTIFAQJQMVJ");
    msg.lat = 0.273141636945;
    msg.lon = 0.291393516875;
    msg.depth = 0.880833921034;
    msg.query_channel = 178U;
    msg.reply_channel = 79U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.574491076311);
    msg.setSource(20739U);
    msg.setSourceEntity(240U);
    msg.setDestination(56992U);
    msg.setDestinationEntity(24U);
    msg.op = 118U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GEJMTYVKYUYQZTGNHHCFDHIPLOHFHADGYDXJWFMJXJWKSDRLLALMI");
    tmp_msg_0.lat = 0.218702408522;
    tmp_msg_0.lon = 0.651853452594;
    tmp_msg_0.depth = 0.700189363871;
    tmp_msg_0.query_channel = 215U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 69U;
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
    msg.setTimeStamp(0.322468817323);
    msg.setSource(4972U);
    msg.setSourceEntity(229U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(1U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.637202615162);
    msg.setSource(30112U);
    msg.setSourceEntity(115U);
    msg.setDestination(4430U);
    msg.setDestinationEntity(62U);
    msg.op = 127U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IIDGDOYKMIJVRWLHMWSKDXVN");
    tmp_msg_0.lat = 0.770338301751;
    tmp_msg_0.lon = 0.260370897664;
    tmp_msg_0.depth = 0.452965208159;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 242U;
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
    msg.setTimeStamp(0.498686478627);
    msg.setSource(51603U);
    msg.setSourceEntity(147U);
    msg.setDestination(64986U);
    msg.setDestinationEntity(123U);
    msg.address = 85U;

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
    msg.setTimeStamp(0.552906248355);
    msg.setSource(19137U);
    msg.setSourceEntity(72U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(168U);
    msg.address = 6U;

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
    msg.setTimeStamp(0.911087102669);
    msg.setSource(10973U);
    msg.setSourceEntity(146U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(35U);
    msg.address = 74U;

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
    msg.setTimeStamp(0.178954425787);
    msg.setSource(36430U);
    msg.setSourceEntity(86U);
    msg.setDestination(29352U);
    msg.setDestinationEntity(105U);
    msg.address = 191U;
    msg.status = 247U;
    msg.range = 0.797688712961;

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
    msg.setTimeStamp(0.233641753363);
    msg.setSource(59663U);
    msg.setSourceEntity(117U);
    msg.setDestination(38826U);
    msg.setDestinationEntity(92U);
    msg.address = 177U;
    msg.status = 128U;
    msg.range = 0.939601497419;

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
    msg.setTimeStamp(0.866108458467);
    msg.setSource(48368U);
    msg.setSourceEntity(131U);
    msg.setDestination(8978U);
    msg.setDestinationEntity(109U);
    msg.address = 43U;
    msg.status = 123U;
    msg.range = 0.360782263152;

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
    msg.setTimeStamp(0.829845901706);
    msg.setSource(31947U);
    msg.setSourceEntity(1U);
    msg.setDestination(30462U);
    msg.setDestinationEntity(126U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZTLJRGIJUGCKODKOJZQPHRMHYYHZOMSQMSBEVSHQDPELFCGZXOLENXIKTYAFZRPCWHWVHALZDMWQNESVIFBQJUODWEBHVUIEJBQCDKEYKRCQYWCLCQEIFGLGYBDSAAGSBIDSNXGPKFYBEANVFLXAXKXPHPWODIWSADZLJTZRRQRNAK");
    tmp_msg_0.value = 14U;
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
    msg.setTimeStamp(0.802336995346);
    msg.setSource(7605U);
    msg.setSourceEntity(3U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(56U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.369832006764;
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
    msg.setTimeStamp(0.687549245355);
    msg.setSource(32337U);
    msg.setSourceEntity(144U);
    msg.setDestination(4142U);
    msg.setDestinationEntity(34U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 45370U;
    tmp_msg_0.lat = 0.317818359151;
    tmp_msg_0.lon = 0.296647216243;
    tmp_msg_0.z = 0.259221150361;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.amplitude = 0.881103400716;
    tmp_msg_0.pitch = 0.0843280166325;
    tmp_msg_0.speed = 0.493018377743;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.custom.assign("JKNALEKKBYHXNRUFDKCJMGQEOUVHGOIWQTCVTVEFNJCCYPK");
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
    msg.setTimeStamp(0.89582555286);
    msg.setSource(51967U);
    msg.setSourceEntity(174U);
    msg.setDestination(12167U);
    msg.setDestinationEntity(103U);
    msg.enable = 150U;

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
    msg.setTimeStamp(0.436452474582);
    msg.setSource(53630U);
    msg.setSourceEntity(189U);
    msg.setDestination(27690U);
    msg.setDestinationEntity(73U);
    msg.enable = 96U;

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
    msg.setTimeStamp(0.330287151982);
    msg.setSource(35610U);
    msg.setSourceEntity(67U);
    msg.setDestination(4632U);
    msg.setDestinationEntity(42U);
    msg.enable = 117U;

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
    msg.setTimeStamp(0.814783990518);
    msg.setSource(46091U);
    msg.setSourceEntity(63U);
    msg.setDestination(25104U);
    msg.setDestinationEntity(93U);
    msg.summary = 205U;
    msg.level = 247U;

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
    msg.setTimeStamp(0.763398140634);
    msg.setSource(59583U);
    msg.setSourceEntity(22U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(82U);
    msg.summary = 159U;
    msg.level = 28U;

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
    msg.setTimeStamp(0.209741983143);
    msg.setSource(47156U);
    msg.setSourceEntity(184U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(60U);
    msg.summary = 22U;
    msg.level = 146U;

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
    msg.setTimeStamp(0.88945410276);
    msg.setSource(9913U);
    msg.setSourceEntity(147U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.105103683437);
    msg.setSource(8160U);
    msg.setSourceEntity(229U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.523174535761);
    msg.setSource(29065U);
    msg.setSourceEntity(90U);
    msg.setDestination(10356U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.195154809817);
    msg.setSource(16731U);
    msg.setSourceEntity(6U);
    msg.setDestination(10153U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.870798284266);
    msg.setSource(12186U);
    msg.setSourceEntity(58U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.511482766311);
    msg.setSource(14401U);
    msg.setSourceEntity(156U);
    msg.setDestination(13462U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.247456128135);
    msg.setSource(59262U);
    msg.setSourceEntity(135U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(34U);
    msg.op = 176U;
    msg.system.assign("YDMAVPFWUPLDSULGWINIGMHKLAKUVJABEUUSNCQRATBNETEOHEQKMMEOJCXGQBPJTZIFLRRTBDWNZACSTRONGXRCTJBFQSHXGTIAHGOWZVYYYELNDPHPVQRUSJJRRQANLWCDNGCXGDYUOXQMLWIEMVUODPIZJKSHPCIBZNIYKHXTZBNWATYVWATZFOEKZKRKGHAYPFYVM");
    msg.range = 0.1955755589;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.369675586856;
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
    msg.setTimeStamp(0.208435113439);
    msg.setSource(48987U);
    msg.setSourceEntity(195U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(173U);
    msg.op = 215U;
    msg.system.assign("PLDBTLIXXGAEIJZTCVVSPKIDRJPNCJNLTGVUVRMKLNFCQCLVLSZTMAEQMJCDFCEISYQWYYJBUJRAYXWQBIZBDNWSIAFHNVBBZKSORWXWMGOTYIQDCHDZPPCHKOFEBHDWXQAVHPNDDOYHVZPOFXLIGEBPVMMRRWFYLTPKMUUYNWZKSYAUZTSGIRKGTJUYHNKZNXDG");
    msg.range = 0.903369724659;
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 62U;
    tmp_msg_0.width = 34095U;
    tmp_msg_0.height = 17194U;
    tmp_msg_0.widthstep = 2158U;
    tmp_msg_0.channels = 91U;
    tmp_msg_0.depth = 209U;
    tmp_msg_0.finaldata = 188U;
    const char tmp_tmp_msg_0_0[] = {-111, 39, 122, -62, -19, -119, -71, 12, -1, 51, -3, -89, -110, -12, -28, 33, -101, 106, 85, 61, -117, -117, -9, 55, 66, 102, 121, -21, -34, 35, -20, -101, -35, -17, -9, -14, -38, -26, -54, 15, 72, 92, 114, -96, -10, 4, 110, 122, -3, 15, -67, 48, -14, 126, -22, -2, 115, -17, 75, 56, 56, 70, -66, -98, -38, -13, -21, -103, -81, 16, 76, -77, 59, 22, 37, -126, 126, -62, -74, 70, 15, -73, 13, -42, 1, 47, -48, -79, -56, -52, -127, -52, 9, -72, 32, 119, 91, -69, -120, 106, -120, -68, 7, -28, -13, 68, -91, -52, 125, -24, -57, -105, 125, 65, -25, 22, -66, -23, 31, -74, 7, 123, -90, -24, -33, -65, -81, 89, -22, 49, 99, 37, 82, 66, -41, -76, 85, 32, 9, -53, 46, 112, 116, -6, -40, -116, 11, 88, -108, 17, 51, -58, -47, 91, -88, 62, 17, 25, -104, 20, 79, -79, -60, 96, -125};
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
    msg.setTimeStamp(0.090937047827);
    msg.setSource(11552U);
    msg.setSourceEntity(43U);
    msg.setDestination(63366U);
    msg.setDestinationEntity(232U);
    msg.op = 180U;
    msg.system.assign("YSRQQCZTDROHNIGWVLQCVPRNZCZIPVBKSXPLLOPECCM");
    msg.range = 0.351220641402;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 236U;
    tmp_msg_0.entities.assign("MYEDSQCOVDGQRLZLVWWCFHPEOFXQYVTMKJUZRXNXCOYHCAMKISAZSGDXOAVBOCKLZCOOHDQRHSQBAHYWXFFKHWFBPCQWBPICRJKAIZYRNQXFDIDRWBLBLXLENUZJEYWMPJTFT");
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
    msg.setTimeStamp(0.909828706527);
    msg.setSource(40417U);
    msg.setSourceEntity(34U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.521611309843);
    msg.setSource(19843U);
    msg.setSourceEntity(235U);
    msg.setDestination(40669U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.416370842077);
    msg.setSource(975U);
    msg.setSourceEntity(52U);
    msg.setDestination(32613U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.3685990899);
    msg.setSource(55595U);
    msg.setSourceEntity(77U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(155U);
    msg.list.assign("OUGUDJHTVBQTTUTCNQRREEDPYBWZGINAFUPZSLKYFSHLLVUZVIZGJEPNEASBFAYZZDXCIQERAWFMNOHXPFHWPCALMXQHWFDYUVPQNJCEVACDKRIWNNLIBIYSIVLJRAEKZGKOQOQMHPCKSDFSGYBCOQKMJIMXLUZXYWSJKMPJJYJOCKPTSRNWBNMDRWHSHDGFZYLICCBQHKNRODXRETXMRLSGTTFUOTVAVUEBEWOWGXIAVJMAFGDQUM");

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
    msg.setTimeStamp(0.289104693697);
    msg.setSource(42207U);
    msg.setSourceEntity(107U);
    msg.setDestination(47253U);
    msg.setDestinationEntity(83U);
    msg.list.assign("AYQYMSBTCLLRBYOUKOYPHV");

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
    msg.setTimeStamp(0.880307360588);
    msg.setSource(40672U);
    msg.setSourceEntity(239U);
    msg.setDestination(38786U);
    msg.setDestinationEntity(26U);
    msg.list.assign("DLCWKZJIWYEXRBRNTTIWHCJSZVENTCKNVQIMPANKIJCOAQGSORJHDFWTAIXVJGQUXPFDWLHPYVAUBYENDAHHQVIZDOFGGWEYUTPKVQB");

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
    msg.setTimeStamp(0.828731226339);
    msg.setSource(49320U);
    msg.setSourceEntity(108U);
    msg.setDestination(3044U);
    msg.setDestinationEntity(135U);
    msg.value = 24003;

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
    msg.setTimeStamp(0.752306094848);
    msg.setSource(3216U);
    msg.setSourceEntity(100U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(140U);
    msg.value = 28206;

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
    msg.setTimeStamp(0.0599764601219);
    msg.setSource(40196U);
    msg.setSourceEntity(102U);
    msg.setDestination(64952U);
    msg.setDestinationEntity(2U);
    msg.value = 3548;

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
    msg.setTimeStamp(0.881880603691);
    msg.setSource(19357U);
    msg.setSourceEntity(165U);
    msg.setDestination(11856U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0561010201394;

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
    msg.setTimeStamp(0.0016723641011);
    msg.setSource(62587U);
    msg.setSourceEntity(246U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(204U);
    msg.value = 0.501002050944;

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
    msg.setTimeStamp(0.0292566237002);
    msg.setSource(40067U);
    msg.setSourceEntity(102U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(252U);
    msg.value = 0.63898519401;

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
    msg.setTimeStamp(0.181855560047);
    msg.setSource(42229U);
    msg.setSourceEntity(66U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(7U);
    msg.value = 0.997345410903;

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
    msg.setTimeStamp(0.24824214086);
    msg.setSource(21521U);
    msg.setSourceEntity(171U);
    msg.setDestination(47723U);
    msg.setDestinationEntity(145U);
    msg.value = 0.637999040946;

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
    msg.setTimeStamp(0.071058378844);
    msg.setSource(61384U);
    msg.setSourceEntity(151U);
    msg.setDestination(4972U);
    msg.setDestinationEntity(239U);
    msg.value = 0.109383076909;

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
    msg.setTimeStamp(0.266950794402);
    msg.setSource(36334U);
    msg.setSourceEntity(147U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(161U);
    msg.validity = 56328U;
    msg.type = 219U;
    msg.utc_year = 11400U;
    msg.utc_month = 169U;
    msg.utc_day = 144U;
    msg.utc_time = 0.806117294408;
    msg.lat = 0.681146495119;
    msg.lon = 0.243727689286;
    msg.height = 0.674690280808;
    msg.satellites = 10U;
    msg.cog = 0.789671787593;
    msg.sog = 0.655329576772;
    msg.hdop = 0.964373647189;
    msg.vdop = 0.821421865624;
    msg.hacc = 0.326505907882;
    msg.vacc = 0.397308342775;

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
    msg.setTimeStamp(0.79372954258);
    msg.setSource(21026U);
    msg.setSourceEntity(118U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(218U);
    msg.validity = 31096U;
    msg.type = 242U;
    msg.utc_year = 20529U;
    msg.utc_month = 188U;
    msg.utc_day = 187U;
    msg.utc_time = 0.319964635977;
    msg.lat = 0.633142717339;
    msg.lon = 0.642442288935;
    msg.height = 0.551927014174;
    msg.satellites = 216U;
    msg.cog = 0.416938822393;
    msg.sog = 0.617517113986;
    msg.hdop = 0.230660469463;
    msg.vdop = 0.850056470326;
    msg.hacc = 0.137023748982;
    msg.vacc = 0.962435609385;

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
    msg.setTimeStamp(0.294037604863);
    msg.setSource(53946U);
    msg.setSourceEntity(221U);
    msg.setDestination(13856U);
    msg.setDestinationEntity(227U);
    msg.validity = 22486U;
    msg.type = 128U;
    msg.utc_year = 48654U;
    msg.utc_month = 94U;
    msg.utc_day = 244U;
    msg.utc_time = 0.935463098448;
    msg.lat = 0.523834649799;
    msg.lon = 0.215981080783;
    msg.height = 0.762629392576;
    msg.satellites = 134U;
    msg.cog = 0.091986056104;
    msg.sog = 0.515014999237;
    msg.hdop = 0.691276878946;
    msg.vdop = 0.430943634751;
    msg.hacc = 0.26475859607;
    msg.vacc = 0.106322566514;

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
    msg.setTimeStamp(0.659838473911);
    msg.setSource(22924U);
    msg.setSourceEntity(251U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(164U);
    msg.time = 0.0761370435005;
    msg.phi = 0.280353480232;
    msg.theta = 0.908400912765;
    msg.psi = 0.741617906125;
    msg.psi_magnetic = 0.863964647818;

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
    msg.setTimeStamp(0.630724666062);
    msg.setSource(46967U);
    msg.setSourceEntity(55U);
    msg.setDestination(43800U);
    msg.setDestinationEntity(0U);
    msg.time = 0.480662313192;
    msg.phi = 0.145891258787;
    msg.theta = 0.598791548668;
    msg.psi = 0.278314812213;
    msg.psi_magnetic = 0.96985947657;

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
    msg.setTimeStamp(0.3565026476);
    msg.setSource(1711U);
    msg.setSourceEntity(152U);
    msg.setDestination(32020U);
    msg.setDestinationEntity(81U);
    msg.time = 0.52418576377;
    msg.phi = 0.47185165837;
    msg.theta = 0.244488577836;
    msg.psi = 0.212569541734;
    msg.psi_magnetic = 0.129236878775;

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
    msg.setTimeStamp(0.285194448721);
    msg.setSource(1735U);
    msg.setSourceEntity(67U);
    msg.setDestination(61553U);
    msg.setDestinationEntity(49U);
    msg.time = 0.529047389124;
    msg.x = 0.598300727024;
    msg.y = 0.0350539916191;
    msg.z = 0.780416128706;
    msg.timestep = 0.224407174831;

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
    msg.setTimeStamp(0.177513968751);
    msg.setSource(42264U);
    msg.setSourceEntity(1U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(195U);
    msg.time = 0.731188431323;
    msg.x = 0.175963747704;
    msg.y = 0.554541187116;
    msg.z = 0.10682301613;
    msg.timestep = 0.785792948887;

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
    msg.setTimeStamp(0.689367745998);
    msg.setSource(52093U);
    msg.setSourceEntity(158U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(47U);
    msg.time = 0.444309739445;
    msg.x = 0.00313411495574;
    msg.y = 0.94998006185;
    msg.z = 0.891468709416;
    msg.timestep = 0.675246590007;

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
    msg.setTimeStamp(0.32302633918);
    msg.setSource(53836U);
    msg.setSourceEntity(135U);
    msg.setDestination(41308U);
    msg.setDestinationEntity(99U);
    msg.time = 0.777011114013;
    msg.x = 0.964639775476;
    msg.y = 0.0492974129744;
    msg.z = 0.853872773701;

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
    msg.setTimeStamp(0.19871976017);
    msg.setSource(54132U);
    msg.setSourceEntity(38U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(207U);
    msg.time = 0.560335938431;
    msg.x = 0.500499566924;
    msg.y = 0.814822542608;
    msg.z = 0.264873270097;

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
    msg.setTimeStamp(0.352888197578);
    msg.setSource(18986U);
    msg.setSourceEntity(54U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(18U);
    msg.time = 0.544826831657;
    msg.x = 0.0296871149743;
    msg.y = 0.214775774569;
    msg.z = 0.898217289581;

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
    msg.setTimeStamp(0.0619038423696);
    msg.setSource(29776U);
    msg.setSourceEntity(62U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(202U);
    msg.time = 0.482457274262;
    msg.x = 0.487098809726;
    msg.y = 0.777543526208;
    msg.z = 0.967232635121;

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
    msg.setTimeStamp(0.287658260533);
    msg.setSource(38821U);
    msg.setSourceEntity(47U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(212U);
    msg.time = 0.337890779517;
    msg.x = 0.709997283851;
    msg.y = 0.731631585001;
    msg.z = 0.331174534159;

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
    msg.setTimeStamp(0.41142124075);
    msg.setSource(5599U);
    msg.setSourceEntity(138U);
    msg.setDestination(16772U);
    msg.setDestinationEntity(176U);
    msg.time = 0.930993074557;
    msg.x = 0.221257538842;
    msg.y = 0.562286821207;
    msg.z = 0.47628866984;

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
    msg.setTimeStamp(0.174078173086);
    msg.setSource(24345U);
    msg.setSourceEntity(16U);
    msg.setDestination(43961U);
    msg.setDestinationEntity(216U);
    msg.time = 0.0958286488675;
    msg.x = 0.816405490913;
    msg.y = 0.97709186523;
    msg.z = 0.531151906364;

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
    msg.setTimeStamp(0.606633970937);
    msg.setSource(4171U);
    msg.setSourceEntity(94U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(19U);
    msg.time = 0.928020798336;
    msg.x = 0.659821359632;
    msg.y = 0.532433463454;
    msg.z = 0.559682243997;

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
    msg.setTimeStamp(0.897461924908);
    msg.setSource(272U);
    msg.setSourceEntity(102U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(47U);
    msg.time = 0.550956056989;
    msg.x = 0.764761817986;
    msg.y = 0.955514471472;
    msg.z = 0.036668639287;

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
    msg.setTimeStamp(0.72129256967);
    msg.setSource(59437U);
    msg.setSourceEntity(86U);
    msg.setDestination(172U);
    msg.setDestinationEntity(19U);
    msg.validity = 127U;
    msg.x = 0.973569480395;
    msg.y = 0.720041137127;
    msg.z = 0.265585179395;

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
    msg.setTimeStamp(0.386925091899);
    msg.setSource(22648U);
    msg.setSourceEntity(43U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(192U);
    msg.validity = 221U;
    msg.x = 0.274723123564;
    msg.y = 0.408532381161;
    msg.z = 0.444690380751;

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
    msg.setTimeStamp(0.641186810963);
    msg.setSource(36092U);
    msg.setSourceEntity(80U);
    msg.setDestination(37826U);
    msg.setDestinationEntity(99U);
    msg.validity = 33U;
    msg.x = 0.260653463134;
    msg.y = 0.847974274861;
    msg.z = 0.57704176882;

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
    msg.setTimeStamp(0.578493447307);
    msg.setSource(64899U);
    msg.setSourceEntity(235U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(50U);
    msg.validity = 110U;
    msg.x = 0.51562570271;
    msg.y = 0.421256479864;
    msg.z = 0.864316386364;

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
    msg.setTimeStamp(0.019059261684);
    msg.setSource(5120U);
    msg.setSourceEntity(246U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(9U);
    msg.validity = 131U;
    msg.x = 0.212103436633;
    msg.y = 0.542200416185;
    msg.z = 0.581469053674;

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
    msg.setTimeStamp(0.488169602061);
    msg.setSource(17258U);
    msg.setSourceEntity(57U);
    msg.setDestination(429U);
    msg.setDestinationEntity(221U);
    msg.validity = 37U;
    msg.x = 0.352079152202;
    msg.y = 0.292347252121;
    msg.z = 0.503914413765;

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
    msg.setTimeStamp(0.933171994043);
    msg.setSource(63304U);
    msg.setSourceEntity(75U);
    msg.setDestination(35261U);
    msg.setDestinationEntity(37U);
    msg.time = 0.73730833891;
    msg.x = 0.83162941827;
    msg.y = 0.446881787891;
    msg.z = 0.665292506434;

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
    msg.setTimeStamp(0.576621733084);
    msg.setSource(16567U);
    msg.setSourceEntity(165U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(134U);
    msg.time = 0.172823373607;
    msg.x = 0.236122782527;
    msg.y = 0.643918145051;
    msg.z = 0.463093377545;

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
    msg.setTimeStamp(0.0287222675012);
    msg.setSource(6261U);
    msg.setSourceEntity(206U);
    msg.setDestination(64424U);
    msg.setDestinationEntity(151U);
    msg.time = 0.0818999592708;
    msg.x = 0.0909677606228;
    msg.y = 0.188849117436;
    msg.z = 0.65105851108;

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
    msg.setTimeStamp(0.475000276641);
    msg.setSource(22405U);
    msg.setSourceEntity(53U);
    msg.setDestination(18176U);
    msg.setDestinationEntity(225U);
    msg.validity = 246U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.486936239262;
    tmp_msg_0.beam_height = 0.108132490458;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.941546442456;

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
    msg.setTimeStamp(0.631024061638);
    msg.setSource(48707U);
    msg.setSourceEntity(192U);
    msg.setDestination(63687U);
    msg.setDestinationEntity(76U);
    msg.validity = 156U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.487829958199;
    tmp_msg_0.beam_height = 0.972467027578;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.228539123307;

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
    msg.setTimeStamp(0.428686760347);
    msg.setSource(53418U);
    msg.setSourceEntity(66U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(33U);
    msg.validity = 147U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.767010888145;
    tmp_msg_0.y = 0.807144659764;
    tmp_msg_0.z = 0.406067082081;
    tmp_msg_0.phi = 0.941017752782;
    tmp_msg_0.theta = 0.568841726754;
    tmp_msg_0.psi = 0.766644027163;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.313090675761;

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
    msg.setTimeStamp(0.125075615546);
    msg.setSource(9049U);
    msg.setSourceEntity(176U);
    msg.setDestination(43771U);
    msg.setDestinationEntity(141U);
    msg.value = 0.00564609707214;

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
    msg.setTimeStamp(0.465907226465);
    msg.setSource(1903U);
    msg.setSourceEntity(120U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(45U);
    msg.value = 0.669803227776;

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
    msg.setTimeStamp(0.878197358535);
    msg.setSource(42889U);
    msg.setSourceEntity(164U);
    msg.setDestination(16299U);
    msg.setDestinationEntity(173U);
    msg.value = 0.427107947911;

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
    msg.setTimeStamp(0.744811040791);
    msg.setSource(38166U);
    msg.setSourceEntity(165U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(190U);
    msg.value = 0.202193407423;

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
    msg.setTimeStamp(0.305815283388);
    msg.setSource(2475U);
    msg.setSourceEntity(234U);
    msg.setDestination(43252U);
    msg.setDestinationEntity(25U);
    msg.value = 0.297116297334;

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
    msg.setTimeStamp(0.472941298757);
    msg.setSource(25496U);
    msg.setSourceEntity(30U);
    msg.setDestination(39088U);
    msg.setDestinationEntity(184U);
    msg.value = 0.278475834775;

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
    msg.setTimeStamp(0.344315830182);
    msg.setSource(24106U);
    msg.setSourceEntity(217U);
    msg.setDestination(6618U);
    msg.setDestinationEntity(51U);
    msg.value = 0.32035845033;

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
    msg.setTimeStamp(0.484586158316);
    msg.setSource(40004U);
    msg.setSourceEntity(49U);
    msg.setDestination(24539U);
    msg.setDestinationEntity(251U);
    msg.value = 0.948372392653;

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
    msg.setTimeStamp(0.175221921354);
    msg.setSource(45680U);
    msg.setSourceEntity(69U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(157U);
    msg.value = 0.61635829222;

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
    msg.setTimeStamp(0.77722942777);
    msg.setSource(11857U);
    msg.setSourceEntity(110U);
    msg.setDestination(18109U);
    msg.setDestinationEntity(173U);
    msg.value = 0.2616282046;

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
    msg.setTimeStamp(0.722246522745);
    msg.setSource(37261U);
    msg.setSourceEntity(33U);
    msg.setDestination(30855U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0596238531465;

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
    msg.setTimeStamp(0.195749212737);
    msg.setSource(38740U);
    msg.setSourceEntity(73U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(83U);
    msg.value = 0.661630744834;

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
    msg.setTimeStamp(0.111016445989);
    msg.setSource(2995U);
    msg.setSourceEntity(39U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(254U);
    msg.value = 0.649272753676;

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
    msg.setTimeStamp(0.110753791429);
    msg.setSource(26925U);
    msg.setSourceEntity(210U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0363576410074;

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
    msg.setTimeStamp(0.633768550379);
    msg.setSource(11968U);
    msg.setSourceEntity(106U);
    msg.setDestination(49693U);
    msg.setDestinationEntity(163U);
    msg.value = 0.312186258697;

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
    msg.setTimeStamp(0.762771574493);
    msg.setSource(64970U);
    msg.setSourceEntity(186U);
    msg.setDestination(55370U);
    msg.setDestinationEntity(121U);
    msg.value = 0.656179665696;

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
    msg.setTimeStamp(0.343746609982);
    msg.setSource(10082U);
    msg.setSourceEntity(20U);
    msg.setDestination(59343U);
    msg.setDestinationEntity(201U);
    msg.value = 0.977252033634;

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
    msg.setTimeStamp(0.778608390054);
    msg.setSource(26139U);
    msg.setSourceEntity(79U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(121U);
    msg.value = 0.647442441877;

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
    msg.setTimeStamp(0.483027469333);
    msg.setSource(8563U);
    msg.setSourceEntity(108U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(105U);
    msg.value = 0.875627296252;

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
    msg.setTimeStamp(0.782491749402);
    msg.setSource(23681U);
    msg.setSourceEntity(92U);
    msg.setDestination(62279U);
    msg.setDestinationEntity(79U);
    msg.value = 0.698908764512;

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
    msg.setTimeStamp(0.654977301172);
    msg.setSource(18309U);
    msg.setSourceEntity(254U);
    msg.setDestination(13448U);
    msg.setDestinationEntity(46U);
    msg.value = 0.718695380149;

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
    msg.setTimeStamp(0.819271311182);
    msg.setSource(59686U);
    msg.setSourceEntity(84U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(155U);
    msg.value = 0.879244467723;

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
    msg.setTimeStamp(0.432978500326);
    msg.setSource(4789U);
    msg.setSourceEntity(136U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(160U);
    msg.value = 0.996492448833;

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
    msg.setTimeStamp(0.177171486191);
    msg.setSource(44504U);
    msg.setSourceEntity(160U);
    msg.setDestination(27508U);
    msg.setDestinationEntity(45U);
    msg.value = 0.719505316574;

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
    msg.setTimeStamp(0.755507606671);
    msg.setSource(51668U);
    msg.setSourceEntity(108U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.890708935818;
    msg.speed = 0.668258600415;

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
    msg.setTimeStamp(0.958074060525);
    msg.setSource(17670U);
    msg.setSourceEntity(233U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(45U);
    msg.direction = 0.214484830962;
    msg.speed = 0.527005484473;

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
    msg.setTimeStamp(0.140380483336);
    msg.setSource(8655U);
    msg.setSourceEntity(89U);
    msg.setDestination(46155U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.493171114914;
    msg.speed = 0.475845941063;

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
    msg.setTimeStamp(0.175350034953);
    msg.setSource(49033U);
    msg.setSourceEntity(37U);
    msg.setDestination(29121U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0311113261044;

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
    msg.setTimeStamp(0.4344294258);
    msg.setSource(63588U);
    msg.setSourceEntity(180U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(145U);
    msg.value = 0.987539357711;

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
    msg.setTimeStamp(0.268348260145);
    msg.setSource(8824U);
    msg.setSourceEntity(224U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(117U);
    msg.value = 0.81037385185;

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
    msg.setTimeStamp(0.840211123766);
    msg.setSource(64519U);
    msg.setSourceEntity(120U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(161U);
    msg.value.assign("QKERVHZIGYGGVYSRNRNPRWEFXMOJZJSEEFXAVHTEVSQUTBDGJMKLGBRZCGBQSJMHQEAISDIOUKEZSZDWCSACZPLAPVKDZMHHHZOALIKBXHTCRYVBBSYPDPNBNVLWYYOWSADQOJOACCRQMSTYHVWXMPOJCPWIFJQDVFLUTZCJBOYUFFWDVIMPNXAEJLJNNCBGTRMPLFMTGBGUOWDKFLZTKQUQUFOKYTNRWUHEI");

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
    msg.setTimeStamp(0.557775683619);
    msg.setSource(42463U);
    msg.setSourceEntity(118U);
    msg.setDestination(37099U);
    msg.setDestinationEntity(5U);
    msg.value.assign("TBPKWZSKUNJDFJYVUOMHSYPVQNOGMIRYAZXQPLRCYEVMLSFOLEKLIWIGYVDCJCJZWUXBQIYWZTMTTKXOXNUCNGLZCDWBHEJYFDQSSLDEQFAGPABQJSIQRWRFAHGAFRIYCXEODYKSHONWAEJUDVCZDJBUVRTEPOHAQJIKLPTRVUKRSTFWVJNDDLHSHUHUNZGPLGYBTTSGIXHCGIEEBXNBBOWCGAEPPMZMXBKMTZAMROMFHVLIZNQORKNFWQVA");

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
    msg.setTimeStamp(0.37769627442);
    msg.setSource(3700U);
    msg.setSourceEntity(92U);
    msg.setDestination(46885U);
    msg.setDestinationEntity(177U);
    msg.value.assign("XNQZBGUYRPHHYWWDSEPKHDUNMRAMSBZSUXNTBVJDJLYDMTCVWSNAZIHCCOKVTZDGWFRINKLLLGXNOFQPVYIQRECWBAXAGCFDFIQFLVINMKMJMPTOSJRAUWJUAPLKQVWFSZCJHZTOTDSMSGEKISBTPTCBEYKQIHTEQCJHALYYFGBKGUQVVQDFRYOPEPUBPKZXFREGPBXWEZDMZVJRLHACDKLJUTOBNQIWOGXJ");

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
    msg.setTimeStamp(0.0870426064215);
    msg.setSource(4907U);
    msg.setSourceEntity(87U);
    msg.setDestination(51018U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {-66, -52, -86, 31, 123, 15, 87, -92, 66, -108, -122, -85, -109, 105, 70, -16, -25, -93, -112, -76, 47, 39, -80, 13, 116, -82, -116, -92, 70, 65, -33, -55, 51, 2, -3, 85, -120, 111, -92, 0, 20, -63, 42, 69, -83, 112, -49, -70, 118, 117, 76, -128, -9, 45, -87, 62, -12, -78, -80, -103, -25, 31, 19, -108, -41, 19, -44, -28, -23, -17, -72, 2, -102, -124, 4, -42, 96, 114, 18, 60, 73, -90, -110, 95, 28, -15, 61, 65, -53, 20, -32, -50, 64, 70, -50, 99, -56, 18, -128, -97, 15, 42, -116, -20, -116, -43, 35, 14, 17, -18, 83, -99, 46, 29, -116, 102, -14, 20, -48, 39, 87, 123, 79, 36, -48, -7, 124, -80, -5, 1, -2, -9, 104, -54, 27, -37, 43, 32, 30, -43, -65, -2, -82, 65, -112, -8, -114, 105, -70, -75, -55, -4, 115, 68, -107, -68, -55, 31, 53, -19, 104, 75, 78, 120, -81, 19, -76, -75, -4, -16, -89, -76, -28, 97, 126, -125, -118, 84, 87, 9, -80, -124, -67, 92, -76, 99, -99, 122, 13, 34, 8, -65, -44, -122, -69, -79, 107, 65, 24, 90, -34, -122, 107, 12, 49, 14, -118, 95, 99, 41, 61, 29, 32, 40, 55, -73, -111, -71, -43, 84};
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
    msg.setTimeStamp(0.747477473617);
    msg.setSource(12825U);
    msg.setSourceEntity(82U);
    msg.setDestination(35260U);
    msg.setDestinationEntity(157U);
    const char tmp_msg_0[] = {108, -103, -34, -123, 89, 120, 15, -103, 79, -47, -90, -29, -114, -86, -13, 84, -104, 21, -27, -8, -7, -67, -89, -75, -9, -104, -98, -99, -6, 63, 47, 94};
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
    msg.setTimeStamp(0.452379416722);
    msg.setSource(2817U);
    msg.setSourceEntity(104U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {42, -104, 125, -118, 38, -52, 26, -75, 7, 121, -87, 82, -68, -9, 18, -60, 34, 80, -37, -110, 59, -44, -27, 68, 122, -22, 94, -95, -105, -53, 23, 74, 35, 51, -32, 103, -79, 55, 92, -76, 119, -9, 91, -45, -45, -120, -89, -7, 96, -82, -110, 14, -103, -60, -72, 5, 64, 20, 104, -118, 89, 14, -79, 77, -27, 113, -102, -57, -99, -70, -89, 15, 62, -41, -117, -14, -88, 72, 24, -49, -66, 107, -110, 30, 12, -66, 12, -47, 38, -24, 107, 109, -10, 118, 30, 87, -17, -83, -123};
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
    msg.setTimeStamp(0.356841940439);
    msg.setSource(53211U);
    msg.setSourceEntity(61U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(29U);
    msg.frequency = 3491204127U;
    msg.min_range = 57375U;
    msg.max_range = 37826U;

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
    msg.setTimeStamp(0.803567761668);
    msg.setSource(61611U);
    msg.setSourceEntity(40U);
    msg.setDestination(4345U);
    msg.setDestinationEntity(35U);
    msg.frequency = 4141026262U;
    msg.min_range = 54341U;
    msg.max_range = 12422U;

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
    msg.setTimeStamp(0.701717038892);
    msg.setSource(10635U);
    msg.setSourceEntity(252U);
    msg.setDestination(3001U);
    msg.setDestinationEntity(207U);
    msg.frequency = 549677274U;
    msg.min_range = 8015U;
    msg.max_range = 38751U;

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
    msg.setTimeStamp(0.364488767293);
    msg.setSource(4629U);
    msg.setSourceEntity(243U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(17U);
    msg.type = 227U;
    msg.frequency = 3203261309U;
    msg.min_range = 27675U;
    msg.max_range = 10432U;
    msg.bits_per_point = 75U;
    msg.scale_factor = 0.643261459992;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.950947531153;
    tmp_msg_0.beam_height = 0.525827875102;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {9, 34, -120, -42, -28, -118, -102, -32, 96, -24, 1, -50, 13, -124, 23};
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
    msg.setTimeStamp(0.495115453365);
    msg.setSource(38096U);
    msg.setSourceEntity(165U);
    msg.setDestination(17846U);
    msg.setDestinationEntity(202U);
    msg.type = 215U;
    msg.frequency = 2758964170U;
    msg.min_range = 24181U;
    msg.max_range = 25374U;
    msg.bits_per_point = 94U;
    msg.scale_factor = 0.799634803502;
    const char tmp_msg_0[] = {108, 121, -68, -10, -7, 125, -47, 97, 103, -52, 57, -34, 92, -100, -73, -75, -14, -44, 46, 46, 102, -62, 73, 87, -9, 100, -90, -115, -121, -66, -22, 53, -101, 10, -125, -60, -28, -87, -68, 99, 108, -81, 55, 64, -110, 59, -21, -14, 118, 115, -64, -12, -59, -54, -64, -68, -15, 94, 22, 113, 105, -33, -39, -126};
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
    msg.setTimeStamp(0.0194743563732);
    msg.setSource(25453U);
    msg.setSourceEntity(147U);
    msg.setDestination(28341U);
    msg.setDestinationEntity(35U);
    msg.type = 174U;
    msg.frequency = 3521459177U;
    msg.min_range = 32433U;
    msg.max_range = 14036U;
    msg.bits_per_point = 229U;
    msg.scale_factor = 0.419638431572;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.941535971532;
    tmp_msg_0.beam_height = 0.322051333997;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-93, -58, 98, -128, -94, -38, -24, -78, -70, 22, -41, -2, 116, 10, 103, 14, 36, 34, 38, -116, 19, 19, 11, -100, -93, -53, -99, 105, -68, -14, -124, -63, 104, 27, -25, 39, -122, -5, 86, -71, 88, 40, -95, 43, -118, 36, -54, -75, 124, 77, 112, -57, -31, -81, -46, 117, -62, -80, 115, 68, -50, -56, -65, 53, -69, -124, -76};
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
    msg.setTimeStamp(0.112033609261);
    msg.setSource(6252U);
    msg.setSourceEntity(197U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.94254154716);
    msg.setSource(62019U);
    msg.setSourceEntity(76U);
    msg.setDestination(15909U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.810743358994);
    msg.setSource(22408U);
    msg.setSourceEntity(9U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.498013545618);
    msg.setSource(7280U);
    msg.setSourceEntity(22U);
    msg.setDestination(13231U);
    msg.setDestinationEntity(236U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.16672442066);
    msg.setSource(11697U);
    msg.setSourceEntity(184U);
    msg.setDestination(8840U);
    msg.setDestinationEntity(22U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.244980623953);
    msg.setSource(57404U);
    msg.setSourceEntity(211U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(213U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.698286755296);
    msg.setSource(62783U);
    msg.setSourceEntity(18U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(237U);
    msg.value = 0.21906999321;
    msg.confidence = 0.00925293367277;
    msg.opmodes.assign("URREGIODQGDMHOOAUJYIXNXTXIWGELUEPSTWEWJBYLAAWYLBUQZDLZVNFWDWZLKHINQTUEQKKYFVRZJQHMPMGMFXBGNNTZYJTYTUJXWCSXKOFKT");

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
    msg.setTimeStamp(0.31154436036);
    msg.setSource(20213U);
    msg.setSourceEntity(227U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(47U);
    msg.value = 0.945560063552;
    msg.confidence = 0.173554941556;
    msg.opmodes.assign("ZSFRVORUNWPRLESNBZYMHKHJJTYO");

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
    msg.setTimeStamp(0.82186536616);
    msg.setSource(19718U);
    msg.setSourceEntity(18U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0982237105328;
    msg.confidence = 0.0679787229312;
    msg.opmodes.assign("WXHMNCAQXKAWXFHJDVKHEKKRFPCWGMUANSKUINKSVKSYLGBZZOTDJTSOQXHYTRZXTSYISXCPUDLVHJWIOZFVXPSMQENABPXNRYTQDIUEMURBCVGHZYLGTOF");

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
    msg.setTimeStamp(0.571463006814);
    msg.setSource(46961U);
    msg.setSourceEntity(65U);
    msg.setDestination(59668U);
    msg.setDestinationEntity(67U);
    msg.itow = 1777070163U;
    msg.lat = 0.475028223124;
    msg.lon = 0.159550876788;
    msg.height_ell = 0.291008726292;
    msg.height_sea = 0.720409644802;
    msg.hacc = 0.677835064398;
    msg.vacc = 0.503407471381;
    msg.vel_n = 0.0992456761481;
    msg.vel_e = 0.74847630543;
    msg.vel_d = 0.265328449422;
    msg.speed = 0.356971785921;
    msg.gspeed = 0.155976100269;
    msg.heading = 0.0939515811479;
    msg.sacc = 0.791846651175;
    msg.cacc = 0.00336698695671;

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
    msg.setTimeStamp(0.0907558873438);
    msg.setSource(13472U);
    msg.setSourceEntity(190U);
    msg.setDestination(29755U);
    msg.setDestinationEntity(16U);
    msg.itow = 1885176001U;
    msg.lat = 0.062550485901;
    msg.lon = 0.0949177636027;
    msg.height_ell = 0.0327703323596;
    msg.height_sea = 0.819840366672;
    msg.hacc = 0.646574014898;
    msg.vacc = 0.661403676096;
    msg.vel_n = 0.928206906444;
    msg.vel_e = 0.925189883056;
    msg.vel_d = 0.10160054186;
    msg.speed = 0.817193512499;
    msg.gspeed = 0.808607121108;
    msg.heading = 0.915093498879;
    msg.sacc = 0.10437643863;
    msg.cacc = 0.50193076894;

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
    msg.setTimeStamp(0.545918253676);
    msg.setSource(46277U);
    msg.setSourceEntity(58U);
    msg.setDestination(3902U);
    msg.setDestinationEntity(69U);
    msg.itow = 901471197U;
    msg.lat = 0.0572796473559;
    msg.lon = 0.403435565263;
    msg.height_ell = 0.0120338243257;
    msg.height_sea = 0.870581354073;
    msg.hacc = 0.36403976099;
    msg.vacc = 0.597227102941;
    msg.vel_n = 0.3710596974;
    msg.vel_e = 0.805027381046;
    msg.vel_d = 0.241149001011;
    msg.speed = 0.937074655623;
    msg.gspeed = 0.0876156639394;
    msg.heading = 0.149137881684;
    msg.sacc = 0.671581614643;
    msg.cacc = 0.137138607629;

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
    msg.setTimeStamp(0.618290346107);
    msg.setSource(25136U);
    msg.setSourceEntity(197U);
    msg.setDestination(48983U);
    msg.setDestinationEntity(241U);
    msg.id = 7U;
    msg.value = 0.495741302882;

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
    msg.setTimeStamp(0.187957287596);
    msg.setSource(62616U);
    msg.setSourceEntity(112U);
    msg.setDestination(32864U);
    msg.setDestinationEntity(54U);
    msg.id = 110U;
    msg.value = 0.381761001124;

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
    msg.setTimeStamp(0.918842059245);
    msg.setSource(46569U);
    msg.setSourceEntity(103U);
    msg.setDestination(30239U);
    msg.setDestinationEntity(113U);
    msg.id = 206U;
    msg.value = 0.335461679325;

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
    msg.setTimeStamp(0.56205642841);
    msg.setSource(33129U);
    msg.setSourceEntity(121U);
    msg.setDestination(31746U);
    msg.setDestinationEntity(157U);
    msg.x = 0.55792795052;
    msg.y = 0.452191017442;
    msg.z = 0.629185517651;
    msg.phi = 0.61727078716;
    msg.theta = 0.533171282499;
    msg.psi = 0.185228850954;

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
    msg.setTimeStamp(0.843596810374);
    msg.setSource(18091U);
    msg.setSourceEntity(161U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(110U);
    msg.x = 0.272785003386;
    msg.y = 0.56449569439;
    msg.z = 0.279131870606;
    msg.phi = 0.230877413698;
    msg.theta = 0.936270305445;
    msg.psi = 0.668103660253;

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
    msg.setTimeStamp(0.108697477722);
    msg.setSource(30423U);
    msg.setSourceEntity(228U);
    msg.setDestination(22391U);
    msg.setDestinationEntity(31U);
    msg.x = 0.293109225886;
    msg.y = 0.56875734453;
    msg.z = 0.987549267514;
    msg.phi = 0.105163825414;
    msg.theta = 0.844020185793;
    msg.psi = 0.108240589238;

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
    msg.setTimeStamp(0.112115028119);
    msg.setSource(34731U);
    msg.setSourceEntity(144U);
    msg.setDestination(21362U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.559545286658;
    msg.beam_height = 0.437483403757;

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
    msg.setTimeStamp(0.878685015176);
    msg.setSource(31451U);
    msg.setSourceEntity(16U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.219000634531;
    msg.beam_height = 0.499804513207;

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
    msg.setTimeStamp(0.567534153754);
    msg.setSource(49484U);
    msg.setSourceEntity(246U);
    msg.setDestination(27401U);
    msg.setDestinationEntity(92U);
    msg.beam_width = 0.900953250469;
    msg.beam_height = 0.641131877507;

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
    msg.setTimeStamp(0.826710186675);
    msg.setSource(47425U);
    msg.setSourceEntity(123U);
    msg.setDestination(47005U);
    msg.setDestinationEntity(46U);
    msg.id = 93U;
    msg.zoom = 72U;
    msg.action = 119U;

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
    msg.setTimeStamp(0.943540742414);
    msg.setSource(35846U);
    msg.setSourceEntity(10U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(72U);
    msg.id = 162U;
    msg.zoom = 217U;
    msg.action = 138U;

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
    msg.setTimeStamp(0.780160418581);
    msg.setSource(33614U);
    msg.setSourceEntity(61U);
    msg.setDestination(12827U);
    msg.setDestinationEntity(84U);
    msg.id = 161U;
    msg.zoom = 143U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.774436813187);
    msg.setSource(12328U);
    msg.setSourceEntity(133U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(239U);
    msg.id = 240U;
    msg.value = 0.993630818253;

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
    msg.setTimeStamp(0.188104585209);
    msg.setSource(30314U);
    msg.setSourceEntity(154U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(0U);
    msg.id = 254U;
    msg.value = 0.703612665015;

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
    msg.setTimeStamp(0.184868979052);
    msg.setSource(24964U);
    msg.setSourceEntity(66U);
    msg.setDestination(36105U);
    msg.setDestinationEntity(15U);
    msg.id = 159U;
    msg.value = 0.112801826813;

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
    msg.setTimeStamp(0.980734776278);
    msg.setSource(13413U);
    msg.setSourceEntity(0U);
    msg.setDestination(39919U);
    msg.setDestinationEntity(81U);
    msg.id = 249U;
    msg.value = 0.96777089597;

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
    msg.setTimeStamp(0.634771186619);
    msg.setSource(36947U);
    msg.setSourceEntity(83U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(193U);
    msg.id = 105U;
    msg.value = 0.994195983484;

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
    msg.setTimeStamp(0.904061104864);
    msg.setSource(48088U);
    msg.setSourceEntity(131U);
    msg.setDestination(30120U);
    msg.setDestinationEntity(244U);
    msg.id = 118U;
    msg.value = 0.322954610126;

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
    msg.setTimeStamp(0.582569128687);
    msg.setSource(43393U);
    msg.setSourceEntity(29U);
    msg.setDestination(12190U);
    msg.setDestinationEntity(177U);
    msg.id = 108U;
    msg.angle = 0.881772207218;

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
    msg.setTimeStamp(0.254067310651);
    msg.setSource(50362U);
    msg.setSourceEntity(188U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(150U);
    msg.id = 18U;
    msg.angle = 0.404568048212;

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
    msg.setTimeStamp(0.339889642946);
    msg.setSource(21770U);
    msg.setSourceEntity(34U);
    msg.setDestination(61844U);
    msg.setDestinationEntity(161U);
    msg.id = 200U;
    msg.angle = 0.904493226592;

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
    msg.setTimeStamp(0.800488839446);
    msg.setSource(15313U);
    msg.setSourceEntity(129U);
    msg.setDestination(53093U);
    msg.setDestinationEntity(102U);
    msg.op = 111U;
    msg.actions.assign("GIEXTDFDZVQZZIZEDTYSGAOKBMJOEIKHJNCGFSZIBYTAPEKNVPFKYIJGZXUNFRCQUPOUXWDARFJATRGEOHOITRNRGRQDUKQIQPJYGTEMLZHENRSMEZTMVFOXRUSWQHVOQKWQHOCAIBSWJQNNGSJHIKPJBXFAZMVMLMSGFPPDQFDALXHUMP");

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
    msg.setTimeStamp(0.39787325416);
    msg.setSource(46664U);
    msg.setSourceEntity(0U);
    msg.setDestination(63898U);
    msg.setDestinationEntity(157U);
    msg.op = 166U;
    msg.actions.assign("PYPLOHPQPOBYRSDOBMMTAHBXXBGICMCOJDRQQHKLCVWWWRBAFOLRHCJUECPZCFAGRYKBTTEWTJMUKIVIJLCJZKFVLNELEQBKVDOZMPTSTHNQSXTMNYJUCDXYUFWPVDFYCSENNZXFVFKWOAALPDLAICAYJYDKKDUZVGSWOZDXDINEGMZTQHRHXNUEKUPHSHRVZ");

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
    msg.setTimeStamp(0.0130981266203);
    msg.setSource(40703U);
    msg.setSourceEntity(245U);
    msg.setDestination(53605U);
    msg.setDestinationEntity(196U);
    msg.op = 41U;
    msg.actions.assign("FCOJNVFEMLVHBLAAEFEFAHSSOJXTGIIMMBMXLEZPJQOUEQKYQWDKYQODAMDTFLUXRSNJIGZXPZGDGWSYBKTBKRKJIGOVPALARTHFRFXJLGPPXVSBHPQRMHGJGRZKHZUWKHLXHLYJWUYXVYMPCVVBNOYUFDKNWCHBSKORYICPBDVNWOQAOMDDBTZSPGZTRJOCCEWCVWAQZUTKEAZDULMQITENBIMNUXSTUNPNISXVIFCEDNAJCYYH");

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
    msg.setTimeStamp(0.577246006362);
    msg.setSource(56487U);
    msg.setSourceEntity(222U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(123U);
    msg.actions.assign("DHWHEYPRBAFOBCURWCMOJZQIEQXKZZGAVSXVSJTXMTHFHWCCHLVSFRUKCSEDPYVPASEXUFYRLLZEQYTTDAOMHNIXLUSQJYJWVGDKZWZXZBRYTOCJMXGMNBMVJELVGPFDIKOABTAMW");

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
    msg.setTimeStamp(0.622004543551);
    msg.setSource(42973U);
    msg.setSourceEntity(246U);
    msg.setDestination(43767U);
    msg.setDestinationEntity(190U);
    msg.actions.assign("VZSOFFJXQTFBCDJWABNVJGTRDGROCMBDHQPYCUPNTOCHMKKIDPEVKAYLWPQEWMCBFOFGQE");

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
    msg.setTimeStamp(0.400671407402);
    msg.setSource(24017U);
    msg.setSourceEntity(94U);
    msg.setDestination(54783U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("IULHOZWBHJTCZQPTOIUWLQOYMNUQCRMCGMGBLBNLDZM");

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
    msg.setTimeStamp(0.0818906984623);
    msg.setSource(21566U);
    msg.setSourceEntity(189U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(124U);
    msg.button = 126U;
    msg.value = 101U;

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
    msg.setTimeStamp(0.102302942914);
    msg.setSource(48747U);
    msg.setSourceEntity(174U);
    msg.setDestination(52812U);
    msg.setDestinationEntity(205U);
    msg.button = 138U;
    msg.value = 21U;

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
    msg.setTimeStamp(0.971845835618);
    msg.setSource(19227U);
    msg.setSourceEntity(25U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(234U);
    msg.button = 202U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.580195222288);
    msg.setSource(29065U);
    msg.setSourceEntity(165U);
    msg.setDestination(50090U);
    msg.setDestinationEntity(238U);
    msg.op = 109U;
    msg.text.assign("KYVFHOTWKZOSIVURLAR");

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
    msg.setTimeStamp(0.263033899763);
    msg.setSource(59820U);
    msg.setSourceEntity(231U);
    msg.setDestination(3149U);
    msg.setDestinationEntity(238U);
    msg.op = 204U;
    msg.text.assign("QBFYWLVNFOFZUZHEAVJYYADNKGOXFXXRDYGPRPPESMTTBXNTFQEDKBZCQFYXSPBKEJHDCDECEYVLIKZCR");

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
    msg.setTimeStamp(0.341453714556);
    msg.setSource(3227U);
    msg.setSourceEntity(223U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(45U);
    msg.op = 127U;
    msg.text.assign("JEIWNHGMWDAZREXLQQMBILQOSDZFEGQOWIBUQHQAWPFYLUMNOFSWYCITFXVNQGADWNUIOO");

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
    msg.setTimeStamp(0.783059342002);
    msg.setSource(13960U);
    msg.setSourceEntity(184U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(242U);
    msg.op = 249U;
    msg.time_remain = 0.00524327505521;
    msg.sched_time = 0.989329138915;

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
    msg.setTimeStamp(0.844013778405);
    msg.setSource(22540U);
    msg.setSourceEntity(205U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(195U);
    msg.op = 187U;
    msg.time_remain = 0.673611789079;
    msg.sched_time = 0.136967306877;

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
    msg.setTimeStamp(0.149438085074);
    msg.setSource(35839U);
    msg.setSourceEntity(31U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(187U);
    msg.op = 132U;
    msg.time_remain = 0.451595357211;
    msg.sched_time = 0.120675455602;

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
    msg.setTimeStamp(0.543509879804);
    msg.setSource(13941U);
    msg.setSourceEntity(165U);
    msg.setDestination(33989U);
    msg.setDestinationEntity(127U);
    msg.name.assign("YISRWCRABULMBJWSWDPEIJTMOYHGMBFXZHEGOPITKNMSOCDCRHKYQIVOBFEEPLXJBEDMYHUUQVDXS");
    msg.op = 84U;
    msg.sched_time = 0.74731482264;

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
    msg.setTimeStamp(0.774754753848);
    msg.setSource(52097U);
    msg.setSourceEntity(92U);
    msg.setDestination(60074U);
    msg.setDestinationEntity(14U);
    msg.name.assign("ZOWQMYDLPADOAPEGDRMHSYHXQKWLMRLHUQRSHGYHWWTHPUJGNYCUGFZFPQEAZNEONLRUTZZBXBIMUCGZCRVJTSCKTYXWNVWIMEKWXSFQBXPIVJLGIDPUWKLNSXRVCEYBAL");
    msg.op = 222U;
    msg.sched_time = 0.868442593504;

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
    msg.setTimeStamp(0.885502624564);
    msg.setSource(24503U);
    msg.setSourceEntity(111U);
    msg.setDestination(30639U);
    msg.setDestinationEntity(30U);
    msg.name.assign("OHDLPWGEGTFRIBQJSUJDXIYVQAUGFCTDVDDFYMPULBVRDPVJZATKZRBEMJDMHXXBNDYTFFKVXGGILVSAYHWFCEEBOTLFWMLAFJMAEIMSVITYXUZO");
    msg.op = 112U;
    msg.sched_time = 0.648746468544;

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
    msg.setTimeStamp(0.889707118026);
    msg.setSource(18447U);
    msg.setSourceEntity(153U);
    msg.setDestination(17563U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.85573794306);
    msg.setSource(11470U);
    msg.setSourceEntity(54U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.188641355237);
    msg.setSource(63711U);
    msg.setSourceEntity(160U);
    msg.setDestination(49750U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.72391004046);
    msg.setSource(42034U);
    msg.setSourceEntity(122U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(18U);
    msg.name.assign("BAKCICKAUZOEPGCFOMSSPBBKVMBIBTJFBHKJMTGUHNZJSGSYZLWBLAGVAXIHOXJFWKXNWTDUVRPAPUERYUJKWECZIIKUDUALFHJTMWSFNXXMSLCTQUCRQQEHONQMGWBWHXQFANGSYNNDNDEHIZVZZYGODDZRPBFEKVAYSJUCXWLMUJEFNRMEOTZELLWOXVYITYOGZXSKRQWDYRIYPHVVIPJ");
    msg.state = 119U;

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
    msg.setTimeStamp(0.91001238699);
    msg.setSource(37792U);
    msg.setSourceEntity(144U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(215U);
    msg.name.assign("PWTTAMQMBSBEIFIMKGIAYSEUJADCUKKLYCUHWCFSLOIXDGTSSXTBLTZJMOAGNPRNVOAWTEPZUTEMJIKTWOYDV");
    msg.state = 36U;

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
    msg.setTimeStamp(0.401948030762);
    msg.setSource(10915U);
    msg.setSourceEntity(124U);
    msg.setDestination(64633U);
    msg.setDestinationEntity(10U);
    msg.name.assign("KBJQIJDOBWJALHITTNRVPSYFXJPWQFWWITXZVERJMGRDRKDLILTYYIHDTWUXZGHQNIZGHWNDQOKGECAZQGGOTXEUHSLKNUZHDFJBDWOLMYLTRBYSCPCUBSPOEACHUJFAEWVOVMMPVIACUBRLMLCEUSV");
    msg.state = 131U;

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
    msg.setTimeStamp(0.467952470511);
    msg.setSource(58558U);
    msg.setSourceEntity(187U);
    msg.setDestination(48782U);
    msg.setDestinationEntity(75U);
    msg.name.assign("KWBZUQAERJIWIIIJDRSMCYHBSAZOXWLNMONYGMMVUKELPLIKKQZUHEPGINMRVJDGVLQNPNYBHCGNZREFPSVOSZXUQQCFDWYZWUAXBRIACYCDRHIKPCSMMXYRHMLBA");
    msg.value = 115U;

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
    msg.setTimeStamp(0.387765852691);
    msg.setSource(40720U);
    msg.setSourceEntity(10U);
    msg.setDestination(40265U);
    msg.setDestinationEntity(73U);
    msg.name.assign("GTQFRQNMRRUJSTYJWWMOXBTEELOXPXIMOMGEYFZJZAOEIYAXMWGIFTJJPFVTDBHNICPOQKWSURMUYHVZYCZBNAUVYMHOOAPJADPPNWCFSTSVEHIGMYWGGOVXVFDHKUBIKDBGNJXZCQRDGHRKQWKFTDQZFEGVPZOLQKLJAKBJCPCDLVHSAASLYDVUZBONURDSNFMQNEKEBPHUHCFSRRIZWEQNAUTIYSQHTVTDICLBLMICLLABKJSXNK");
    msg.value = 82U;

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
    msg.setTimeStamp(0.505253488163);
    msg.setSource(45060U);
    msg.setSourceEntity(120U);
    msg.setDestination(63856U);
    msg.setDestinationEntity(242U);
    msg.name.assign("SEPIIMCTMXKPXMNOEFZICREOMFQLLKSBGFTQQOPPWVBNNFKBNDJKJGNTHRLIBKQEXZYRINWBVIRETTAMTIXZZCWZSHUJGOVTNXJVCQCYSMYKPWPVUFXEZJLJBLYNHVDEUXYQXHUGCEDGQAAIBQPYHZODDBPRMCFADSRHALROMWYJULPUBWIKFGTLUZOANYFORWQGGJUWENFRRSCOCWSDVGSJSEAABLHXOVZKPDYDDTHIUJVASHHCQ");
    msg.value = 201U;

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
    msg.setTimeStamp(0.0278576098744);
    msg.setSource(34159U);
    msg.setSourceEntity(90U);
    msg.setDestination(36325U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GRSYSHIPVFYKCUEEZAYTJOWMMHRFBEHDPQBC");

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
    msg.setTimeStamp(0.631322601485);
    msg.setSource(25687U);
    msg.setSourceEntity(227U);
    msg.setDestination(60133U);
    msg.setDestinationEntity(197U);
    msg.name.assign("LIOCGHYRDULPYARDZKUSCZFTSJIHNSZXAAAZWDWGYWYRKNQYXSCQWBUNHXFFHVPXZEKLFTXXKKONIQTHGOVONOTHBDGYEUEBIUKORDYVKXRMHQJPTALWXQTYLKGVJUCIGMWCSFTSPGEUIJEFCVRBKMINJQUCFOAMRRPIAGAUTLMHJJMVAMLCXMQRVSDYSAJOSYZPZFEFCZQBLBCVOTDONNGMJWBGIZPQNEWDLPBDERVDBMJK");

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
    msg.setTimeStamp(0.78779611618);
    msg.setSource(38138U);
    msg.setSourceEntity(122U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(179U);
    msg.name.assign("CEYNMUGYPKBGLKGNCTNTCLUFFLMSJLPAQAPKCIYWZVMTPNCLDRPQMUXWFHAWGVKJONZBYJKXQDRTVNTABVMSJUUPEE");

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
    msg.setTimeStamp(0.891093958565);
    msg.setSource(37967U);
    msg.setSourceEntity(86U);
    msg.setDestination(21416U);
    msg.setDestinationEntity(159U);
    msg.name.assign("YCVIUOMAIMANDRENPZNOGIACDAWUCSJSCRAJIRVXWPCLKESFJFKPUUSZGJVQZWDDROVBPIWMGWTVVQWFLKXBEECZNTKDZYKFFTRFSPRTWAAVFXQWUZWZXRBPKQKWNKHLIMFGFBXEIXGCPZJPHLTSTMQNYJOEMEPFUEJYHXR");
    msg.value = 104U;

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
    msg.setTimeStamp(0.7075024865);
    msg.setSource(16462U);
    msg.setSourceEntity(16U);
    msg.setDestination(16955U);
    msg.setDestinationEntity(98U);
    msg.name.assign("VWDCHNIQWWOCPTGCAFRMKAXMTGUVURLFHOTPVBXBDSFMCPBCZBBPUHHRQETBXLYVUGJPRYUAFYKAPPEWNAJAZSCLTO");
    msg.value = 37U;

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
    msg.setTimeStamp(0.248482953431);
    msg.setSource(10628U);
    msg.setSourceEntity(145U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(100U);
    msg.name.assign("ENKGAYAMVGODALHILEIBSLGRCPOVHLVYFNNKGUHSYZCYLOIVCHKKQVKILQMJSOSWUEBNOJGXWQFBXQRCGXCYCRYBTOUTPSFKEQDUZXRC");
    msg.value = 191U;

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
    msg.setTimeStamp(0.524034844481);
    msg.setSource(27160U);
    msg.setSourceEntity(103U);
    msg.setDestination(27435U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.300025260733;
    msg.lon = 0.14533038663;
    msg.height = 0.95683985892;
    msg.x = 0.754256632179;
    msg.y = 0.362616472927;
    msg.z = 0.717167444039;
    msg.phi = 0.739955881167;
    msg.theta = 0.278102437616;
    msg.psi = 0.443921344648;
    msg.u = 0.838975849846;
    msg.v = 0.409018975078;
    msg.w = 0.984635046931;
    msg.vx = 0.112659497104;
    msg.vy = 0.306532259732;
    msg.vz = 0.20769776325;
    msg.p = 0.816631143068;
    msg.q = 0.440151405256;
    msg.r = 0.269271252364;
    msg.depth = 0.565373198862;
    msg.alt = 0.227620518431;

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
    msg.setTimeStamp(0.342934006589);
    msg.setSource(12338U);
    msg.setSourceEntity(96U);
    msg.setDestination(37757U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.834146571591;
    msg.lon = 0.477155585214;
    msg.height = 0.7386870216;
    msg.x = 0.901788436996;
    msg.y = 0.0417861281277;
    msg.z = 0.310925849065;
    msg.phi = 0.398120160671;
    msg.theta = 0.459194660615;
    msg.psi = 0.586313675487;
    msg.u = 0.906961975514;
    msg.v = 0.58744343331;
    msg.w = 0.508516609095;
    msg.vx = 0.450721648475;
    msg.vy = 0.282636216559;
    msg.vz = 0.193448428459;
    msg.p = 0.734890061661;
    msg.q = 0.677527455293;
    msg.r = 0.794903346851;
    msg.depth = 0.370590727589;
    msg.alt = 0.118323006307;

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
    msg.setTimeStamp(0.260781511566);
    msg.setSource(64513U);
    msg.setSourceEntity(45U);
    msg.setDestination(57664U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.00543967224559;
    msg.lon = 0.0215373536608;
    msg.height = 0.785650007888;
    msg.x = 0.0293658871007;
    msg.y = 0.915493779421;
    msg.z = 0.108615897452;
    msg.phi = 0.981136764729;
    msg.theta = 0.292940870432;
    msg.psi = 0.885446324261;
    msg.u = 0.585257481037;
    msg.v = 0.425697546788;
    msg.w = 0.82517017325;
    msg.vx = 0.824148974968;
    msg.vy = 0.773216008843;
    msg.vz = 0.246972751427;
    msg.p = 0.475459867471;
    msg.q = 0.481939604167;
    msg.r = 0.636620945034;
    msg.depth = 0.775569567756;
    msg.alt = 0.152198450758;

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
    msg.setTimeStamp(0.320340612634);
    msg.setSource(2153U);
    msg.setSourceEntity(21U);
    msg.setDestination(49442U);
    msg.setDestinationEntity(232U);
    msg.x = 0.237679623266;
    msg.y = 0.538094047773;
    msg.z = 0.798144278861;

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
    msg.setTimeStamp(0.685995385173);
    msg.setSource(32468U);
    msg.setSourceEntity(213U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(110U);
    msg.x = 0.64541234499;
    msg.y = 0.0523392138688;
    msg.z = 0.26023411748;

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
    msg.setTimeStamp(0.931910543904);
    msg.setSource(35665U);
    msg.setSourceEntity(36U);
    msg.setDestination(31744U);
    msg.setDestinationEntity(188U);
    msg.x = 0.405644561775;
    msg.y = 0.614036164;
    msg.z = 0.753317266147;

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
    msg.setTimeStamp(0.0461217552672);
    msg.setSource(61222U);
    msg.setSourceEntity(217U);
    msg.setDestination(24268U);
    msg.setDestinationEntity(176U);
    msg.value = 0.466660317578;

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
    msg.setTimeStamp(0.840799053846);
    msg.setSource(15684U);
    msg.setSourceEntity(245U);
    msg.setDestination(1821U);
    msg.setDestinationEntity(202U);
    msg.value = 0.608589437003;

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
    msg.setTimeStamp(0.717896903586);
    msg.setSource(9685U);
    msg.setSourceEntity(221U);
    msg.setDestination(5977U);
    msg.setDestinationEntity(178U);
    msg.value = 0.580282986786;

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
    msg.setTimeStamp(0.641534601656);
    msg.setSource(4780U);
    msg.setSourceEntity(167U);
    msg.setDestination(28652U);
    msg.setDestinationEntity(250U);
    msg.value = 0.199836255792;

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
    msg.setTimeStamp(0.686731324002);
    msg.setSource(52410U);
    msg.setSourceEntity(75U);
    msg.setDestination(13792U);
    msg.setDestinationEntity(185U);
    msg.value = 0.499041698944;

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
    msg.setTimeStamp(0.730313065182);
    msg.setSource(58309U);
    msg.setSourceEntity(168U);
    msg.setDestination(53942U);
    msg.setDestinationEntity(243U);
    msg.value = 0.0651371400561;

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
    msg.setTimeStamp(0.542124855243);
    msg.setSource(38044U);
    msg.setSourceEntity(44U);
    msg.setDestination(27542U);
    msg.setDestinationEntity(130U);
    msg.x = 0.209642082324;
    msg.y = 0.707782466312;
    msg.z = 0.235379127891;
    msg.phi = 0.127624632128;
    msg.theta = 0.367762350122;
    msg.psi = 0.739333814865;
    msg.p = 0.813172538437;
    msg.q = 0.855751296774;
    msg.r = 0.511592603776;
    msg.u = 0.00297099603219;
    msg.v = 0.821759904035;
    msg.w = 0.804442027876;
    msg.bias_psi = 0.136771591424;
    msg.bias_r = 0.284094274557;

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
    msg.setTimeStamp(0.503959139891);
    msg.setSource(12254U);
    msg.setSourceEntity(56U);
    msg.setDestination(56473U);
    msg.setDestinationEntity(37U);
    msg.x = 0.652834352341;
    msg.y = 0.308328848765;
    msg.z = 0.387238512728;
    msg.phi = 0.420452320478;
    msg.theta = 0.517637621848;
    msg.psi = 0.684272343519;
    msg.p = 0.646640161327;
    msg.q = 0.407169265994;
    msg.r = 0.556363453424;
    msg.u = 0.80915488008;
    msg.v = 0.196256388384;
    msg.w = 0.513569869833;
    msg.bias_psi = 0.586699684372;
    msg.bias_r = 0.928401468275;

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
    msg.setTimeStamp(0.447963476964);
    msg.setSource(9102U);
    msg.setSourceEntity(182U);
    msg.setDestination(48019U);
    msg.setDestinationEntity(19U);
    msg.x = 0.530955249703;
    msg.y = 0.851960303393;
    msg.z = 0.171964003678;
    msg.phi = 0.475324710238;
    msg.theta = 0.0333281394619;
    msg.psi = 0.586371111314;
    msg.p = 0.760093993532;
    msg.q = 0.895322042092;
    msg.r = 0.779449328847;
    msg.u = 0.920503782601;
    msg.v = 0.578048657098;
    msg.w = 0.451531610946;
    msg.bias_psi = 0.0744464563807;
    msg.bias_r = 0.97448389647;

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
    msg.setTimeStamp(0.46065349471);
    msg.setSource(33094U);
    msg.setSourceEntity(230U);
    msg.setDestination(58916U);
    msg.setDestinationEntity(47U);
    msg.bias_psi = 0.423783613434;
    msg.bias_r = 0.270550555133;
    msg.cog = 0.774486462337;
    msg.cyaw = 0.156844883887;
    msg.lbl_rej_level = 0.816685882383;
    msg.gps_rej_level = 0.288252970074;
    msg.custom_x = 0.706401217065;
    msg.custom_y = 0.874920455573;
    msg.custom_z = 0.649548170232;

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
    msg.setTimeStamp(0.48470319623);
    msg.setSource(7946U);
    msg.setSourceEntity(145U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.469615350951;
    msg.bias_r = 0.691662059747;
    msg.cog = 0.461434071858;
    msg.cyaw = 0.232580008426;
    msg.lbl_rej_level = 0.964995498979;
    msg.gps_rej_level = 0.0396326092807;
    msg.custom_x = 0.468268096871;
    msg.custom_y = 0.0100153084649;
    msg.custom_z = 0.658867252032;

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
    msg.setTimeStamp(0.859345149364);
    msg.setSource(6931U);
    msg.setSourceEntity(237U);
    msg.setDestination(10396U);
    msg.setDestinationEntity(124U);
    msg.bias_psi = 0.56771216969;
    msg.bias_r = 0.897052002969;
    msg.cog = 0.234927206712;
    msg.cyaw = 0.516692702401;
    msg.lbl_rej_level = 0.374082543018;
    msg.gps_rej_level = 0.212468562192;
    msg.custom_x = 0.194870455558;
    msg.custom_y = 0.948234789644;
    msg.custom_z = 0.588321896717;

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
    msg.setTimeStamp(0.531313915502);
    msg.setSource(35889U);
    msg.setSourceEntity(90U);
    msg.setDestination(40361U);
    msg.setDestinationEntity(90U);
    msg.utc_time = 0.226345619354;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.578428993268);
    msg.setSource(63856U);
    msg.setSourceEntity(155U);
    msg.setDestination(43326U);
    msg.setDestinationEntity(185U);
    msg.utc_time = 0.153122826221;
    msg.reason = 194U;

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
    msg.setTimeStamp(0.671318980225);
    msg.setSource(7879U);
    msg.setSourceEntity(20U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(156U);
    msg.utc_time = 0.182260433278;
    msg.reason = 101U;

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
    msg.setTimeStamp(0.260792612437);
    msg.setSource(34727U);
    msg.setSourceEntity(32U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(5U);
    msg.id = 184U;
    msg.range = 0.371782287962;
    msg.acceptance = 20U;

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
    msg.setTimeStamp(0.675123568274);
    msg.setSource(17037U);
    msg.setSourceEntity(191U);
    msg.setDestination(25444U);
    msg.setDestinationEntity(65U);
    msg.id = 115U;
    msg.range = 0.965759023156;
    msg.acceptance = 103U;

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
    msg.setTimeStamp(0.0764630999528);
    msg.setSource(11244U);
    msg.setSourceEntity(67U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(110U);
    msg.id = 6U;
    msg.range = 0.791597824649;
    msg.acceptance = 231U;

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
    msg.setTimeStamp(0.415130782475);
    msg.setSource(10559U);
    msg.setSourceEntity(252U);
    msg.setDestination(5431U);
    msg.setDestinationEntity(79U);
    msg.type = 95U;
    msg.reason = 105U;
    msg.value = 0.580631519412;
    msg.timestep = 0.70114311274;

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
    msg.setTimeStamp(0.681381722363);
    msg.setSource(27015U);
    msg.setSourceEntity(28U);
    msg.setDestination(47006U);
    msg.setDestinationEntity(84U);
    msg.type = 110U;
    msg.reason = 219U;
    msg.value = 0.487764791351;
    msg.timestep = 0.982831144538;

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
    msg.setTimeStamp(0.761361633794);
    msg.setSource(39966U);
    msg.setSourceEntity(205U);
    msg.setDestination(54562U);
    msg.setDestinationEntity(37U);
    msg.type = 226U;
    msg.reason = 217U;
    msg.value = 0.219525772267;
    msg.timestep = 0.180491824555;

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
    msg.setTimeStamp(0.870721051503);
    msg.setSource(21218U);
    msg.setSourceEntity(104U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.973887415861);
    msg.setSource(46812U);
    msg.setSourceEntity(104U);
    msg.setDestination(60119U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.85581557776);
    msg.setSource(23048U);
    msg.setSourceEntity(78U);
    msg.setDestination(38891U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.540885914529);
    msg.setSource(62628U);
    msg.setSourceEntity(218U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(54U);
    msg.beacon.assign("MHOFBPFFPAFBRNJESDQYNACMUGXYSNLYWDILPBURRMLBGTUEVZXWCKDEKPZMRAVHCKEQVAQZEKOVZBXDMLJVXLXCZLUXIHJOOGEUYETSYSGJCQJIHNOXTTXQBRKBTMAHERZWJWJCSLWQJSDFAOYNVTPVLGIICIZA");
    msg.x = 0.826570156216;
    msg.y = 0.994724880158;
    msg.depth = 0.0349085912436;
    msg.var_x = 0.0184649085383;
    msg.var_y = 0.215180083271;

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
    msg.setTimeStamp(0.22976378969);
    msg.setSource(57174U);
    msg.setSourceEntity(144U);
    msg.setDestination(43440U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("GNCEWNPJTOMWUPLQHUCGEQXURQUPCVQHAHXXYOLJVGGJEZZWCSFAIJJXSBGFQROSDGPLEUHNOZTHTUUSRXZNECKFMRMSEKJIDLDZYZAWIKQLBPEETAGAJJAFVBRDCWMEYLBFKKWHAKZTWOTVPAFIHIXYQLNSHYPGFEKOHYHGOCKXNTTVQQPXOWSBSOSFFRQXNBYVNIBRTTIWKOLYJARDYFNPB");
    msg.x = 0.746591382467;
    msg.y = 0.446012747571;
    msg.depth = 0.80359663333;
    msg.var_x = 0.147102805071;
    msg.var_y = 0.101779944058;

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
    msg.setTimeStamp(0.981425135268);
    msg.setSource(40800U);
    msg.setSourceEntity(60U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("LSWSJAERPIRWPJOQDXYCXWAZVRQGCOVYLUGHSYUVRGMKTBXLDJIBQMEVUNIUPBLWOMFUUQHLINNPLWAGXXMSEEJELBPGZBFDLNASHNCDKZVLNOTANKMKNUQRIOZZTHIQONCVILIKGESVVDHKMPFMFWCEFTQESTKAOKYDHZBYJMQPRABHHGWPWMFQOZTYVOSCJFADTTHCCYFBSXFNDRSBUAJXTDYUOXK");
    msg.x = 0.136813110922;
    msg.y = 0.689740650357;
    msg.depth = 0.987224736778;
    msg.var_x = 0.200491816398;
    msg.var_y = 0.780522967616;

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
    msg.setTimeStamp(0.513475874469);
    msg.setSource(2477U);
    msg.setSourceEntity(192U);
    msg.setDestination(19793U);
    msg.setDestinationEntity(2U);
    msg.x = 0.353175129607;
    msg.y = 0.596141755321;
    msg.z = 0.175810946203;

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
    msg.setTimeStamp(0.369793252034);
    msg.setSource(22253U);
    msg.setSourceEntity(239U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(107U);
    msg.x = 0.460966857406;
    msg.y = 0.815135192863;
    msg.z = 0.463173265647;

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
    msg.setTimeStamp(0.485087055701);
    msg.setSource(37696U);
    msg.setSourceEntity(53U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(23U);
    msg.x = 0.177584694254;
    msg.y = 0.312838653113;
    msg.z = 0.0732019021958;

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
    msg.setTimeStamp(0.291565376384);
    msg.setSource(51138U);
    msg.setSourceEntity(92U);
    msg.setDestination(18064U);
    msg.setDestinationEntity(123U);
    msg.value = 0.581262909456;

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
    msg.setTimeStamp(0.188329148311);
    msg.setSource(33250U);
    msg.setSourceEntity(221U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(232U);
    msg.value = 0.479532342838;

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
    msg.setTimeStamp(0.761618241966);
    msg.setSource(27486U);
    msg.setSourceEntity(174U);
    msg.setDestination(59885U);
    msg.setDestinationEntity(124U);
    msg.value = 0.516096898597;

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
    msg.setTimeStamp(0.616021280617);
    msg.setSource(6133U);
    msg.setSourceEntity(239U);
    msg.setDestination(26071U);
    msg.setDestinationEntity(241U);
    msg.value = 0.256623105029;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.387245753972);
    msg.setSource(52067U);
    msg.setSourceEntity(127U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(185U);
    msg.value = 0.496953551675;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.393315771039);
    msg.setSource(55107U);
    msg.setSourceEntity(144U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(161U);
    msg.value = 0.485555425808;
    msg.z_units = 218U;

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
    msg.setTimeStamp(0.310454851215);
    msg.setSource(15638U);
    msg.setSourceEntity(40U);
    msg.setDestination(504U);
    msg.setDestinationEntity(219U);
    msg.value = 0.747885099537;
    msg.speed_units = 116U;

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
    msg.setTimeStamp(0.200448141137);
    msg.setSource(44862U);
    msg.setSourceEntity(10U);
    msg.setDestination(31184U);
    msg.setDestinationEntity(85U);
    msg.value = 0.757355677391;
    msg.speed_units = 24U;

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
    msg.setTimeStamp(0.150096382012);
    msg.setSource(30333U);
    msg.setSourceEntity(118U);
    msg.setDestination(24233U);
    msg.setDestinationEntity(168U);
    msg.value = 0.182725078382;
    msg.speed_units = 202U;

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
    msg.setTimeStamp(0.976040228724);
    msg.setSource(39411U);
    msg.setSourceEntity(78U);
    msg.setDestination(43103U);
    msg.setDestinationEntity(108U);
    msg.value = 0.773645589364;

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
    msg.setTimeStamp(0.32442893757);
    msg.setSource(18159U);
    msg.setSourceEntity(50U);
    msg.setDestination(36487U);
    msg.setDestinationEntity(219U);
    msg.value = 0.562546456649;

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
    msg.setTimeStamp(0.992562639586);
    msg.setSource(23066U);
    msg.setSourceEntity(216U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(253U);
    msg.value = 0.242798826347;

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
    msg.setTimeStamp(0.243669238148);
    msg.setSource(1834U);
    msg.setSourceEntity(79U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(185U);
    msg.value = 0.322803457927;

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
    msg.setTimeStamp(0.781162677278);
    msg.setSource(38069U);
    msg.setSourceEntity(41U);
    msg.setDestination(50203U);
    msg.setDestinationEntity(91U);
    msg.value = 0.190360795531;

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
    msg.setTimeStamp(0.505070443205);
    msg.setSource(30044U);
    msg.setSourceEntity(39U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(183U);
    msg.value = 0.218719310321;

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
    msg.setTimeStamp(0.23793546958);
    msg.setSource(46568U);
    msg.setSourceEntity(97U);
    msg.setDestination(49384U);
    msg.setDestinationEntity(173U);
    msg.value = 0.918647505924;

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
    msg.setTimeStamp(0.208330193964);
    msg.setSource(514U);
    msg.setSourceEntity(79U);
    msg.setDestination(44426U);
    msg.setDestinationEntity(120U);
    msg.value = 0.791127862127;

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
    msg.setTimeStamp(0.118964543099);
    msg.setSource(28676U);
    msg.setSourceEntity(160U);
    msg.setDestination(4572U);
    msg.setDestinationEntity(173U);
    msg.value = 0.892150757477;

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
    msg.setTimeStamp(0.051877326618);
    msg.setSource(45014U);
    msg.setSourceEntity(113U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(248U);
    msg.start_lat = 0.934209167988;
    msg.start_lon = 0.89247685792;
    msg.start_z = 0.947906550593;
    msg.start_z_units = 68U;
    msg.end_lat = 0.778621250323;
    msg.end_lon = 0.827503286141;
    msg.end_z = 0.435918851873;
    msg.end_z_units = 241U;
    msg.speed = 0.632476056015;
    msg.speed_units = 205U;
    msg.lradius = 0.401267536094;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.769639961683);
    msg.setSource(8346U);
    msg.setSourceEntity(109U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(241U);
    msg.start_lat = 0.654392651032;
    msg.start_lon = 0.319746642796;
    msg.start_z = 0.730072766278;
    msg.start_z_units = 196U;
    msg.end_lat = 0.408415996989;
    msg.end_lon = 0.835750201478;
    msg.end_z = 0.594822760869;
    msg.end_z_units = 233U;
    msg.speed = 0.327596949602;
    msg.speed_units = 129U;
    msg.lradius = 0.53402703421;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.454175124891);
    msg.setSource(15283U);
    msg.setSourceEntity(23U);
    msg.setDestination(38890U);
    msg.setDestinationEntity(166U);
    msg.start_lat = 0.121122326134;
    msg.start_lon = 0.399993724197;
    msg.start_z = 0.375941929061;
    msg.start_z_units = 195U;
    msg.end_lat = 0.249147532909;
    msg.end_lon = 0.869060254613;
    msg.end_z = 0.421369057227;
    msg.end_z_units = 112U;
    msg.speed = 0.375455178971;
    msg.speed_units = 35U;
    msg.lradius = 0.0705108960552;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.0575640158039);
    msg.setSource(2760U);
    msg.setSourceEntity(213U);
    msg.setDestination(8130U);
    msg.setDestinationEntity(221U);
    msg.x = 0.381440795366;
    msg.y = 0.284741828268;
    msg.z = 0.713340463459;
    msg.k = 0.701776661373;
    msg.m = 0.781052097754;
    msg.n = 0.806159284711;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.58058846539);
    msg.setSource(13395U);
    msg.setSourceEntity(135U);
    msg.setDestination(8540U);
    msg.setDestinationEntity(102U);
    msg.x = 0.0783516985072;
    msg.y = 0.0676559242474;
    msg.z = 0.0142833939958;
    msg.k = 0.681929087213;
    msg.m = 0.41390047517;
    msg.n = 0.286981957172;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.730267839912);
    msg.setSource(59549U);
    msg.setSourceEntity(100U);
    msg.setDestination(15002U);
    msg.setDestinationEntity(113U);
    msg.x = 0.299500643651;
    msg.y = 0.187826677048;
    msg.z = 0.552823878221;
    msg.k = 0.699326868118;
    msg.m = 0.227810840819;
    msg.n = 0.537868789136;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.483393225936);
    msg.setSource(13062U);
    msg.setSourceEntity(53U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(154U);
    msg.value = 0.422777500528;

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
    msg.setTimeStamp(0.0499486229335);
    msg.setSource(29423U);
    msg.setSourceEntity(243U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(0U);
    msg.value = 0.450456007301;

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
    msg.setTimeStamp(0.780935097865);
    msg.setSource(40187U);
    msg.setSourceEntity(216U);
    msg.setDestination(26841U);
    msg.setDestinationEntity(140U);
    msg.value = 0.580175923163;

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
    msg.setTimeStamp(0.632935294071);
    msg.setSource(28104U);
    msg.setSourceEntity(79U);
    msg.setDestination(11400U);
    msg.setDestinationEntity(23U);
    msg.u = 0.253347156308;
    msg.v = 0.00421918883489;
    msg.w = 0.76857584601;
    msg.p = 0.549891961086;
    msg.q = 0.57310462138;
    msg.r = 0.616284640939;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.917637562287);
    msg.setSource(49417U);
    msg.setSourceEntity(198U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(49U);
    msg.u = 0.574596899073;
    msg.v = 0.993666013403;
    msg.w = 0.685485011063;
    msg.p = 0.198182726784;
    msg.q = 0.449601790783;
    msg.r = 0.858659492752;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.4466184843);
    msg.setSource(5955U);
    msg.setSourceEntity(202U);
    msg.setDestination(63582U);
    msg.setDestinationEntity(153U);
    msg.u = 0.610711205702;
    msg.v = 0.897701399949;
    msg.w = 0.228359825024;
    msg.p = 0.587651935191;
    msg.q = 0.83714379145;
    msg.r = 0.182936229115;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.0583312490138);
    msg.setSource(30728U);
    msg.setSourceEntity(172U);
    msg.setDestination(23161U);
    msg.setDestinationEntity(180U);
    msg.start_lat = 0.0038693446435;
    msg.start_lon = 0.242683807771;
    msg.start_z = 0.28742547709;
    msg.start_z_units = 46U;
    msg.end_lat = 0.948014394819;
    msg.end_lon = 0.75320587168;
    msg.end_z = 0.593078507212;
    msg.end_z_units = 153U;
    msg.lradius = 0.132402244301;
    msg.flags = 122U;
    msg.x = 0.704782645118;
    msg.y = 0.422751075483;
    msg.z = 0.738813067264;
    msg.vx = 0.151050742887;
    msg.vy = 0.850959829305;
    msg.vz = 0.681534541311;
    msg.course_error = 0.667424981654;
    msg.eta = 50540U;

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
    msg.setTimeStamp(0.780297508882);
    msg.setSource(30945U);
    msg.setSourceEntity(24U);
    msg.setDestination(235U);
    msg.setDestinationEntity(79U);
    msg.start_lat = 0.564944549549;
    msg.start_lon = 0.185966751378;
    msg.start_z = 0.235466644677;
    msg.start_z_units = 136U;
    msg.end_lat = 0.0687971562102;
    msg.end_lon = 0.677326725976;
    msg.end_z = 0.155728239282;
    msg.end_z_units = 161U;
    msg.lradius = 0.744670509798;
    msg.flags = 228U;
    msg.x = 0.0397556811013;
    msg.y = 0.448504378938;
    msg.z = 0.889461915526;
    msg.vx = 0.38480662405;
    msg.vy = 0.738843972584;
    msg.vz = 0.638938660946;
    msg.course_error = 0.0254150293325;
    msg.eta = 3214U;

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
    msg.setTimeStamp(0.674658980431);
    msg.setSource(57979U);
    msg.setSourceEntity(190U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(146U);
    msg.start_lat = 0.188997647427;
    msg.start_lon = 0.169655038247;
    msg.start_z = 0.443426592008;
    msg.start_z_units = 176U;
    msg.end_lat = 0.215077541848;
    msg.end_lon = 0.93993845685;
    msg.end_z = 0.331276974795;
    msg.end_z_units = 88U;
    msg.lradius = 0.147675964681;
    msg.flags = 144U;
    msg.x = 0.301675281419;
    msg.y = 0.844512844525;
    msg.z = 0.155653632047;
    msg.vx = 0.724369518954;
    msg.vy = 0.822858132888;
    msg.vz = 0.736842617178;
    msg.course_error = 0.674537459103;
    msg.eta = 8165U;

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
    msg.setTimeStamp(0.983622313947);
    msg.setSource(13434U);
    msg.setSourceEntity(77U);
    msg.setDestination(27756U);
    msg.setDestinationEntity(215U);
    msg.k = 0.361330790224;
    msg.m = 0.179406466413;
    msg.n = 0.924165313539;

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
    msg.setTimeStamp(0.455395412103);
    msg.setSource(57703U);
    msg.setSourceEntity(236U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(131U);
    msg.k = 0.0620891709163;
    msg.m = 0.884968368694;
    msg.n = 0.809307299535;

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
    msg.setTimeStamp(0.974923329499);
    msg.setSource(46837U);
    msg.setSourceEntity(98U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(10U);
    msg.k = 0.341208554604;
    msg.m = 0.672524496661;
    msg.n = 0.553703202799;

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
    msg.setTimeStamp(0.364730005292);
    msg.setSource(10949U);
    msg.setSourceEntity(156U);
    msg.setDestination(18908U);
    msg.setDestinationEntity(6U);
    msg.p = 0.791503824138;
    msg.i = 0.433809896545;
    msg.d = 0.555548723672;
    msg.a = 0.276887723413;

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
    msg.setTimeStamp(0.182640573185);
    msg.setSource(54335U);
    msg.setSourceEntity(79U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(127U);
    msg.p = 0.446128794242;
    msg.i = 0.135616553094;
    msg.d = 0.628296906028;
    msg.a = 0.680071685154;

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
    msg.setTimeStamp(0.925733760156);
    msg.setSource(61202U);
    msg.setSourceEntity(0U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(143U);
    msg.p = 0.511809342775;
    msg.i = 0.441506807189;
    msg.d = 0.929411612726;
    msg.a = 0.952251327263;

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
    msg.setTimeStamp(0.774961862385);
    msg.setSource(64506U);
    msg.setSourceEntity(69U);
    msg.setDestination(58751U);
    msg.setDestinationEntity(74U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.995768822197);
    msg.setSource(2981U);
    msg.setSourceEntity(113U);
    msg.setDestination(33530U);
    msg.setDestinationEntity(92U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.505551195159);
    msg.setSource(49647U);
    msg.setSourceEntity(168U);
    msg.setDestination(36363U);
    msg.setDestinationEntity(41U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.679798339742);
    msg.setSource(17779U);
    msg.setSourceEntity(193U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(235U);
    msg.timeout = 17579U;
    msg.lat = 0.947179163648;
    msg.lon = 0.455294555609;
    msg.z = 0.925728378191;
    msg.z_units = 64U;
    msg.speed = 0.552928133744;
    msg.speed_units = 154U;
    msg.roll = 0.80396890548;
    msg.pitch = 0.539262091721;
    msg.yaw = 0.85065738347;
    msg.custom.assign("DQNLKXCDQJWRDVBCXABARPOQYBHLVNBIXBSIGZPNPKQSRFLNFDXFNFGDYZMLKOGSHGVCUZAUWRBDVTMGKGSXIPMAISXEMYMDFXELVJOVTMWNOTQUJIOTDEIUJKJVLVCFEPTUOPLCRPMJEZGYIF");

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
    msg.setTimeStamp(0.203828473067);
    msg.setSource(48251U);
    msg.setSourceEntity(39U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(155U);
    msg.timeout = 35939U;
    msg.lat = 0.87818670652;
    msg.lon = 0.647577089531;
    msg.z = 0.258135882336;
    msg.z_units = 55U;
    msg.speed = 0.0817869418356;
    msg.speed_units = 139U;
    msg.roll = 0.846828389901;
    msg.pitch = 0.487528245605;
    msg.yaw = 0.30153580274;
    msg.custom.assign("ZKFNWEBQRLJLVOUYVHNMJTOXYLRTPHFAXRDNHZWPNEAHARWOUUHPGNRSMIYROMEVJJOOEVGOJMICCLALLYFDSHAQBKAZMFGTXZMFXLXC");

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
    msg.setTimeStamp(0.00418733964087);
    msg.setSource(60548U);
    msg.setSourceEntity(226U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(68U);
    msg.timeout = 36456U;
    msg.lat = 0.544423263968;
    msg.lon = 0.814721606885;
    msg.z = 0.802380863967;
    msg.z_units = 141U;
    msg.speed = 0.57998886882;
    msg.speed_units = 22U;
    msg.roll = 0.798805011904;
    msg.pitch = 0.865851935179;
    msg.yaw = 0.795433623941;
    msg.custom.assign("QVBIMGRCDOAZRFYBGABTJOOPISHJFJHMYOMTAJSYHPOKKIXBSPZNULILQZDPFSYTMDANSCWAZGJXRZVCXBWQFKWNNIQETXRYJYCRKLTUQVAJPAHELEWEULFKMNRONATGFCMGVYKETHDVJDNZFPDCWBBYMLEAXSPXE");

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
    msg.setTimeStamp(0.0854495274044);
    msg.setSource(63940U);
    msg.setSourceEntity(69U);
    msg.setDestination(48278U);
    msg.setDestinationEntity(240U);
    msg.timeout = 52458U;
    msg.lat = 0.220995831;
    msg.lon = 0.300008167322;
    msg.z = 0.479554566727;
    msg.z_units = 53U;
    msg.speed = 0.474809296723;
    msg.speed_units = 216U;
    msg.duration = 23592U;
    msg.radius = 0.410050979247;
    msg.flags = 206U;
    msg.custom.assign("RFJIOZOBJIZZTLELKKZJTOOLHZDUNAOHWNPKPNBJKGDYPVHUGUMRAKHFDACJDZAQSCQNOI");

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
    msg.setTimeStamp(0.340091614257);
    msg.setSource(42778U);
    msg.setSourceEntity(126U);
    msg.setDestination(17284U);
    msg.setDestinationEntity(3U);
    msg.timeout = 56467U;
    msg.lat = 0.207908828806;
    msg.lon = 0.664024970844;
    msg.z = 0.561951293313;
    msg.z_units = 2U;
    msg.speed = 0.124302062507;
    msg.speed_units = 133U;
    msg.duration = 59175U;
    msg.radius = 0.816382202178;
    msg.flags = 42U;
    msg.custom.assign("BOGEDWMIFUTGRUVNUEWEGCQMRBJKQLDKIWGCNQKFWNPHWQKLJBJFTOYRNDVFGHHAGYZDLENMDBIULWIHXLJNXIRYTDWSDCANJCPEKPOIGTSTADDSTRQBSLIBZJFZZKYXHGSUKDEVMRJFOPMAPKXAFHBOCYEXORWEFKYXJNFSFXRQNRZGSPNUXCIAAPLZGXSVMUWMSMEBOVVTQWLSHUQTEUVJOZHIXYMCTOVBZUAO");

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
    msg.setTimeStamp(0.204166746);
    msg.setSource(9825U);
    msg.setSourceEntity(228U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(101U);
    msg.timeout = 60960U;
    msg.lat = 0.564617569399;
    msg.lon = 0.489148956716;
    msg.z = 0.92194113374;
    msg.z_units = 54U;
    msg.speed = 0.322320150063;
    msg.speed_units = 15U;
    msg.duration = 42210U;
    msg.radius = 0.607944561003;
    msg.flags = 25U;
    msg.custom.assign("DXCKJOOYLKZPHEPFJIGVTNPQNFVJAERUHKUWFAMIVELVBZDOUFQTFWCC");

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
    msg.setTimeStamp(0.61007499044);
    msg.setSource(34445U);
    msg.setSourceEntity(227U);
    msg.setDestination(33293U);
    msg.setDestinationEntity(153U);
    msg.custom.assign("AOEOSGTDGBKUPACMFX");

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
    msg.setTimeStamp(0.649005468056);
    msg.setSource(28518U);
    msg.setSourceEntity(158U);
    msg.setDestination(7975U);
    msg.setDestinationEntity(231U);
    msg.custom.assign("BIMSNSSWYGMTPAYHKZXZQLPFXDVMKPRERADGNYZXPANTZXFKWVUPBKZLDSMSTFYCIINCNACEYMQQJZDVHGGTELQSRQJLVWBBLJUJELDYR");

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
    msg.setTimeStamp(0.570258242407);
    msg.setSource(5525U);
    msg.setSourceEntity(0U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(221U);
    msg.custom.assign("QTZLAUHULLYGJSCAVQYVYONTBMIDWASGNSQDZUCGJKMCONUABKPNZASVOFDPGLRXXSZNEOQHXYBQQNYPCXUFPCNEBDYKEOZXBJGNIJPSIAOYMJ");

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
    msg.setTimeStamp(0.449894315887);
    msg.setSource(32700U);
    msg.setSourceEntity(109U);
    msg.setDestination(32810U);
    msg.setDestinationEntity(36U);
    msg.timeout = 48779U;
    msg.lat = 0.473993287842;
    msg.lon = 0.910482230848;
    msg.z = 0.770678769828;
    msg.z_units = 249U;
    msg.duration = 45909U;
    msg.speed = 0.881282726126;
    msg.speed_units = 145U;
    msg.type = 170U;
    msg.radius = 0.907308920256;
    msg.length = 0.576763512878;
    msg.bearing = 0.512240874871;
    msg.direction = 6U;
    msg.custom.assign("YHOUBFGOXXZUSEEIV");

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
    msg.setTimeStamp(0.961804773428);
    msg.setSource(28504U);
    msg.setSourceEntity(171U);
    msg.setDestination(8782U);
    msg.setDestinationEntity(108U);
    msg.timeout = 27184U;
    msg.lat = 0.269701272929;
    msg.lon = 0.700816655942;
    msg.z = 0.191922393619;
    msg.z_units = 174U;
    msg.duration = 35750U;
    msg.speed = 0.934730540005;
    msg.speed_units = 133U;
    msg.type = 240U;
    msg.radius = 0.101866347978;
    msg.length = 0.083159394458;
    msg.bearing = 0.485130220758;
    msg.direction = 58U;
    msg.custom.assign("KTVTITWQQBJEQHRJOFZITNCVGEGVWGPKSNPSKBZRUMSXRFOGMKHJTTZUOJSCVQUSEHOLNFMMQTHKVAMYVXMEWMPLHIRCYSCZEVIWDEYWSXDFQIPHDZNJQICGSTXFMZYLLKDUHNBAIBOQPCELDHNOFOWTSUUKCLANQCBTOKPGWVSJWDNWZJUUAIBUAXFBGJPBXRHU");

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
    msg.setTimeStamp(0.303562360502);
    msg.setSource(57543U);
    msg.setSourceEntity(179U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(52U);
    msg.timeout = 17761U;
    msg.lat = 0.380376593146;
    msg.lon = 0.619701260194;
    msg.z = 0.702535996834;
    msg.z_units = 117U;
    msg.duration = 10024U;
    msg.speed = 0.34060939151;
    msg.speed_units = 44U;
    msg.type = 215U;
    msg.radius = 0.79077008613;
    msg.length = 0.83590782809;
    msg.bearing = 0.630760310129;
    msg.direction = 62U;
    msg.custom.assign("PMJXAKONVCQOOPEMXELXNXCAZDGZVGRADKBGGEUJUGOZLNEIPYOLBBBNQBZVARHPEJAQZTZJXUWPG");

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
    msg.setTimeStamp(0.275548109688);
    msg.setSource(59123U);
    msg.setSourceEntity(211U);
    msg.setDestination(51483U);
    msg.setDestinationEntity(30U);
    msg.duration = 49044U;
    msg.custom.assign("DFZAUWIPRTOTFHRKSGIMQGCHRJPXICZHJYFRGWAJVTZPGAVKDKKJW");

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
    msg.setTimeStamp(0.603244549793);
    msg.setSource(59298U);
    msg.setSourceEntity(89U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(167U);
    msg.duration = 62641U;
    msg.custom.assign("CNMUFARSQIJKBVUTOYIZVLPUICHOHDAQ");

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
    msg.setTimeStamp(0.946174797575);
    msg.setSource(17347U);
    msg.setSourceEntity(153U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(171U);
    msg.duration = 53465U;
    msg.custom.assign("NHYFOZHSNKKMRBUAPENJRKPIVOITFTETHKCFBDLMDMTPIMJBWIQOPYFDNWJNWXVWLGXYYGXRCOWDTBGJERBUJNLOZWIAPXRZFHDYOKSJYDROBUTPSUURBSUVHLQOTIBUACNZJQFQMGKFMUZVWVHQADTEQWZHPVIGSDGGQAJCAPCAPDXVSMNUCRWHSMKEGYGIWZHZCIYKEOVSRLCLLHFKZQDSNCAFLEXXXBTPLMZQGEYNYLJUERQAXS");

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
    msg.setTimeStamp(0.862080353825);
    msg.setSource(23739U);
    msg.setSourceEntity(152U);
    msg.setDestination(57120U);
    msg.setDestinationEntity(105U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0199263771609;
    tmp_msg_0.speed_units = 46U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58463U;
    msg.custom.assign("WIPVTVWZVGDCSULNOFOROLDFWOGLQULRXAWURFTJXFYYTKQIKGNZVCQWNIBSTDQYTBMVEZRQZBIZ");

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
    msg.setTimeStamp(0.870640295322);
    msg.setSource(4163U);
    msg.setSourceEntity(161U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(92U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.279465829787;
    msg.control.set(tmp_msg_0);
    msg.duration = 31907U;
    msg.custom.assign("VYYAWIRWQHHSGBJUDUMLBWBWNVELVCPJXNZGPAQBRZIEHIAQDDQEZIHKKCFCLKIAFNTZGTRIYNHUKIMCXNSLLTUGPAMOCFTTNECMABFQMSULKXFVJTXDQCJZBNOQOODZSGEFWBGWJZNBGVHRPSQDPOBTSHPSMEXVFTYDZMYUVYJSRWVNKYEE");

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
    msg.setTimeStamp(0.961648861079);
    msg.setSource(53596U);
    msg.setSourceEntity(200U);
    msg.setDestination(50293U);
    msg.setDestinationEntity(122U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0013958379283;
    msg.control.set(tmp_msg_0);
    msg.duration = 25785U;
    msg.custom.assign("RTQAHLOMXVDMIQFSMACBBWIYDZUTUXBHUEUVGVMDSSDVCLLKHRSKJBVKQRZSYRGMTEFOCBBUFIGPZUKEASPFTBYVDUVWPQHJLEUONFLGXKCNDQTALQXZLBTMCVJPCDWXCBAPKZNZHHYIRJMGAYOVGTRWYNTJZMRECBJEOCWXRIWKHSQPXFNYMQQEEMYKRXNUFSKEIWWRLOSXIQAWEFCXIGJNOPGIDPZHJAONLGAN");

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
    msg.setTimeStamp(0.168430126885);
    msg.setSource(33176U);
    msg.setSourceEntity(231U);
    msg.setDestination(55165U);
    msg.setDestinationEntity(209U);
    msg.timeout = 26392U;
    msg.lat = 0.884202868007;
    msg.lon = 0.294702159064;
    msg.z = 0.643655953182;
    msg.z_units = 74U;
    msg.speed = 0.167123065817;
    msg.speed_units = 209U;
    msg.bearing = 0.731713602711;
    msg.cross_angle = 0.346088958929;
    msg.width = 0.630533392188;
    msg.length = 0.401220676251;
    msg.hstep = 0.685010789004;
    msg.coff = 121U;
    msg.alternation = 136U;
    msg.flags = 199U;
    msg.custom.assign("SMEYPKEEHGVNIMCQFGPUOYXNXDNKKDUFRGKYGTONGNRTZYKILLXNDBFGJJPVFEFRZCHCTNPQKPJVXATOHQZAZIHPGPLTQKSQFIIDIDOICFDBMCZZWHESURRUSGTJDWCYPTYIHMJQBOVZSWWBUFIQSXMLBYMDWNVWTKESYKXBUPNOASRTDAXVZXAWVX");

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
    msg.setTimeStamp(0.923714508295);
    msg.setSource(17910U);
    msg.setSourceEntity(132U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(56U);
    msg.timeout = 34676U;
    msg.lat = 0.585681855429;
    msg.lon = 0.340647575306;
    msg.z = 0.911795325322;
    msg.z_units = 92U;
    msg.speed = 0.617422422547;
    msg.speed_units = 19U;
    msg.bearing = 0.28911358774;
    msg.cross_angle = 0.254892649534;
    msg.width = 0.351970202921;
    msg.length = 0.678720695938;
    msg.hstep = 0.514813186033;
    msg.coff = 28U;
    msg.alternation = 246U;
    msg.flags = 206U;
    msg.custom.assign("IAANSCUAKCVAMTHUAPUEGIEPEVLCXHUQXDXFFQTRQMFFTLCQUKRHGEMXZIVSCLKDPQMKWFRWVCFNZPWFOKEINVGENGZBXUBHFDSJJBAAMIZSJTIOYHCU");

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
    msg.setTimeStamp(0.930198772264);
    msg.setSource(25869U);
    msg.setSourceEntity(10U);
    msg.setDestination(15103U);
    msg.setDestinationEntity(51U);
    msg.timeout = 19497U;
    msg.lat = 0.919353390236;
    msg.lon = 0.54915954603;
    msg.z = 0.80461302766;
    msg.z_units = 113U;
    msg.speed = 0.343469854711;
    msg.speed_units = 34U;
    msg.bearing = 0.979019098375;
    msg.cross_angle = 0.948184434243;
    msg.width = 0.126214891591;
    msg.length = 0.952433691912;
    msg.hstep = 0.335289862347;
    msg.coff = 207U;
    msg.alternation = 190U;
    msg.flags = 31U;
    msg.custom.assign("LYYUYCASBPUHQLOAAEMHNYXCLPWBMKFNKRTH");

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
    msg.setTimeStamp(0.307210934357);
    msg.setSource(10298U);
    msg.setSourceEntity(24U);
    msg.setDestination(22421U);
    msg.setDestinationEntity(209U);
    msg.timeout = 16054U;
    msg.lat = 0.530819056352;
    msg.lon = 0.30983690179;
    msg.z = 0.191563278658;
    msg.z_units = 24U;
    msg.speed = 0.305326049577;
    msg.speed_units = 1U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.135758275762;
    tmp_msg_0.y = 0.228656173743;
    tmp_msg_0.z = 0.312738255551;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("REXNULWLVFCBDHOXDHVNZSXXUPXGHZPNKFRTAAOWLGITNWSTNIEMMVWZHOJIPFIBEBBRGUPQYNYCLCVVFIRYIKRRUVIARODDA");

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
    msg.setTimeStamp(0.973645414346);
    msg.setSource(34565U);
    msg.setSourceEntity(11U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(43U);
    msg.timeout = 31244U;
    msg.lat = 0.0762089698277;
    msg.lon = 0.0409988518666;
    msg.z = 0.363669597333;
    msg.z_units = 247U;
    msg.speed = 0.676981642911;
    msg.speed_units = 181U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.436000957515;
    tmp_msg_0.y = 0.981448837044;
    tmp_msg_0.z = 0.508790536982;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PHDFOSNAPQIGDZHDCJKXTIVNWNOYCLIYSXAGKREBQYXUJAMECBYEJBDZSUWBPJUAVLVUAJQFZNEQCDQXEMJCKFFKJTBCBPSIVECCKGAQHTGPFKMYONOUYSVXURWHYGBMNAEXKGTTESCLXVQDFPCKPMHDRDRHSBRIGDMPRZRTQUTOFEHONNBPYWMZXRJAUWFNUILMZFGHIBYDLWASTZRVOKYUXLNVEZXZLLGQWIWRO");

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
    msg.setTimeStamp(0.143370145999);
    msg.setSource(56408U);
    msg.setSourceEntity(248U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(20U);
    msg.timeout = 14214U;
    msg.lat = 0.857979464118;
    msg.lon = 0.312823404087;
    msg.z = 0.100915651876;
    msg.z_units = 66U;
    msg.speed = 0.454909844909;
    msg.speed_units = 114U;
    msg.custom.assign("IOWOIORDTUPFLDUNOVENOLKZIVGMYDKGUKQDPBDWOZSRTNESZPMXTRBLYQELOITHNJSDSHFYXYTGUXHGCJPVXWRVHWTKQBMMNOJYFVISRQCUMCQGAWVVDDAICGZQUMEAHZHLRBJRKFWZKCEUZBRNJSLJFHGMIWMATSXEBYTWAECVNICYFLQXHZKBPILJAFXOT");

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
    msg.setTimeStamp(0.184097420157);
    msg.setSource(49019U);
    msg.setSourceEntity(80U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(197U);
    msg.x = 0.382658505919;
    msg.y = 0.622458463048;
    msg.z = 0.668235850053;

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
    msg.setTimeStamp(0.356749817208);
    msg.setSource(37800U);
    msg.setSourceEntity(135U);
    msg.setDestination(16817U);
    msg.setDestinationEntity(30U);
    msg.x = 0.0749214371954;
    msg.y = 0.841683481485;
    msg.z = 0.145959631729;

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
    msg.setTimeStamp(0.0799575912888);
    msg.setSource(25133U);
    msg.setSourceEntity(115U);
    msg.setDestination(56187U);
    msg.setDestinationEntity(65U);
    msg.x = 0.220495858143;
    msg.y = 0.888119643318;
    msg.z = 0.000948948105346;

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
    msg.setTimeStamp(0.720795156501);
    msg.setSource(22229U);
    msg.setSourceEntity(84U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(225U);
    msg.timeout = 31794U;
    msg.lat = 0.910554547434;
    msg.lon = 0.963057260103;
    msg.z = 0.97809378276;
    msg.z_units = 149U;
    msg.amplitude = 0.596721786912;
    msg.pitch = 0.868766082953;
    msg.speed = 0.235410927801;
    msg.speed_units = 63U;
    msg.custom.assign("FDYLUXWHQOPATNZTSEEYBGXPTJXPFLMUAIAEWRUIVCPQRSOTICKETDFWHNVNUSLSKUZHLD");

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
    msg.setTimeStamp(0.941304753344);
    msg.setSource(55758U);
    msg.setSourceEntity(176U);
    msg.setDestination(42866U);
    msg.setDestinationEntity(89U);
    msg.timeout = 38950U;
    msg.lat = 0.305405250505;
    msg.lon = 0.817406745016;
    msg.z = 0.863858888942;
    msg.z_units = 171U;
    msg.amplitude = 0.905011425132;
    msg.pitch = 0.435138600077;
    msg.speed = 0.76526739966;
    msg.speed_units = 216U;
    msg.custom.assign("THCKTVWLGFVDKBNMZMBRJZZQJXHCYWWYZOGJKZXVQVGYAQWMHNVBMVPBYOANDCMZIPOVLEUGJJEEQFHUZRCOBHFKEJIROJDTQGIPGSVVNWLWQHBCTPKNZWNKYUDMEFRSSXHRJELBMFLCIPJLQURTQEDNIIHSTWX");

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
    msg.setTimeStamp(0.220468436093);
    msg.setSource(15885U);
    msg.setSourceEntity(154U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(0U);
    msg.timeout = 25457U;
    msg.lat = 0.347021100493;
    msg.lon = 0.626392935045;
    msg.z = 0.626011861123;
    msg.z_units = 83U;
    msg.amplitude = 0.894873366616;
    msg.pitch = 0.96481496337;
    msg.speed = 0.704370560776;
    msg.speed_units = 37U;
    msg.custom.assign("FGQORCZAQXGHVYJJUUNHHKYHZHQTKMHFUSKJCC");

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
    msg.setTimeStamp(0.91475714634);
    msg.setSource(46469U);
    msg.setSourceEntity(82U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.803881324952);
    msg.setSource(59630U);
    msg.setSourceEntity(29U);
    msg.setDestination(56172U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.383355649488);
    msg.setSource(18585U);
    msg.setSourceEntity(35U);
    msg.setDestination(26169U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.624442293295);
    msg.setSource(10455U);
    msg.setSourceEntity(121U);
    msg.setDestination(41403U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.695433976958;
    msg.lon = 0.442290541505;
    msg.z = 0.657374712919;
    msg.z_units = 11U;
    msg.radius = 0.878337869159;
    msg.duration = 61532U;
    msg.speed = 0.867133585106;
    msg.speed_units = 8U;
    msg.custom.assign("HQWNLUJOJNGRAVNREGLQAZZVQGFEXLBNYDQNNFDSHZZAFDHLBYCJXXDKXSLHALTZQMILVCXTKFCCDXPPTZVNVDBCFWMOUUMENGVGRDRTKBYVPQUBCQEZIRJVACZIGUYPCOEUASJEMTFGPELHYISKBLDROAYKQVMBHYHWDOLWYXTCBITIJMIPNEWUSATKEDFSZJPWSYMIWPPKQURWQU");

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
    msg.setTimeStamp(0.950029640913);
    msg.setSource(45744U);
    msg.setSourceEntity(121U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.604396921946;
    msg.lon = 0.013826382581;
    msg.z = 0.529013325336;
    msg.z_units = 136U;
    msg.radius = 0.122812215214;
    msg.duration = 16022U;
    msg.speed = 0.684449127995;
    msg.speed_units = 160U;
    msg.custom.assign("IAJUMIJWJIAERKIYBGIPYKXWPYAHDCCDFQYPYEPFOWVXEBBDMPHMYSLLLNDLEGYKOOIVAMDHTYAGSZMQUVXSWNECRTNKDUURKDWHZXFUNVOPLVVBSKBYFWRBWVQPZTZGKLEASXCXZJQDNLWKPOWTFJMXQNJTLUKVUXQLEXEBTIZICRMGJRJBOQNRTRONAMFHFNDFFHBAGWZPVSNESXTALTI");

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
    msg.setTimeStamp(0.301316777838);
    msg.setSource(60287U);
    msg.setSourceEntity(0U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.133208448371;
    msg.lon = 0.0173536537015;
    msg.z = 0.573027041989;
    msg.z_units = 166U;
    msg.radius = 0.86028055402;
    msg.duration = 43720U;
    msg.speed = 0.386333887506;
    msg.speed_units = 55U;
    msg.custom.assign("CRJOUVLBGTZOGDJCYWXOUUZLEGJIUTWKCFGIQJONXCKTGMJOJNTGUWQTEDSBBKWBIZBXHAEFPZBAPZCWLVPYMVURGWQEVZRDTRHSDQIVNHYLCCVFOSYRAXZQPFDPKAPHISMIIBMXAKAFJSPVOXQJW");

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
    msg.setTimeStamp(0.403491990114);
    msg.setSource(35939U);
    msg.setSourceEntity(234U);
    msg.setDestination(34658U);
    msg.setDestinationEntity(26U);
    msg.timeout = 64788U;
    msg.flags = 18U;
    msg.lat = 0.166198471329;
    msg.lon = 0.0631631950262;
    msg.start_z = 0.622880421778;
    msg.start_z_units = 180U;
    msg.end_z = 0.247292977221;
    msg.end_z_units = 175U;
    msg.radius = 0.976597835426;
    msg.speed = 0.351695834055;
    msg.speed_units = 49U;
    msg.custom.assign("GVMQFNCUEEXUWKYVMPAMIUOIWHNKARWKXWI");

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
    msg.setTimeStamp(0.098687634287);
    msg.setSource(64194U);
    msg.setSourceEntity(32U);
    msg.setDestination(33730U);
    msg.setDestinationEntity(152U);
    msg.timeout = 17509U;
    msg.flags = 40U;
    msg.lat = 0.998443107622;
    msg.lon = 0.644406721868;
    msg.start_z = 0.99825897545;
    msg.start_z_units = 56U;
    msg.end_z = 0.853644699019;
    msg.end_z_units = 252U;
    msg.radius = 0.715737682136;
    msg.speed = 0.728435058174;
    msg.speed_units = 217U;
    msg.custom.assign("BOFRUORQNPNCGJAWDFXBHZNYDRBGRDIOQJSNMVVGDXWJQLFFECBKPGITWEIOEZUKSQGIATGPLHHTWJZRFYMVCQKGZHSOUMNGDUVJBKCUFFKZACWKEXXRAIKXVXXBPICDACMFYHUGSFJHTFBGZLWNDWZYPLCOPYTYEHERAWLVDOTCZPRDNUSSEEMTEYNUUBTMXIEJCILKBDKHMSLQVRWYVORIZAXANMMPYYNUJJHLMHQATIVLPQKPVZAS");

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
    msg.setTimeStamp(0.581051533089);
    msg.setSource(36571U);
    msg.setSourceEntity(138U);
    msg.setDestination(38750U);
    msg.setDestinationEntity(182U);
    msg.timeout = 57003U;
    msg.flags = 137U;
    msg.lat = 0.455602415701;
    msg.lon = 0.262940232598;
    msg.start_z = 0.490315813945;
    msg.start_z_units = 137U;
    msg.end_z = 0.662994052778;
    msg.end_z_units = 182U;
    msg.radius = 0.904100522557;
    msg.speed = 0.227371671936;
    msg.speed_units = 244U;
    msg.custom.assign("DLGFLGRJCMKMUUERRAIBJXFEEPXRFQGJVWBOZJBNXISNVDPGBJUCTHBDATVOHYVJPDSDHRHWOKLWQGQPXYJQOTQNNFVYMFWIZZKCMEKYATFAYSDXXKJIAOWQYLTZMXAVRCVCFQUZVZWKSERFSHXAAMRBFTOMGINKBMWTOBNQLPSDCGMCHLDNXJYPHFSVNLYAEDEWVKNSUO");

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
    msg.setTimeStamp(0.104550713266);
    msg.setSource(63903U);
    msg.setSourceEntity(157U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(18U);
    msg.timeout = 30355U;
    msg.lat = 0.782558873886;
    msg.lon = 0.419977821748;
    msg.z = 0.629261051402;
    msg.z_units = 81U;
    msg.speed = 0.399109531035;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 5.39914163638e-05;
    tmp_msg_0.y = 0.0152690207702;
    tmp_msg_0.z = 0.361909932082;
    tmp_msg_0.t = 0.781640644487;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PBGGLJDIYTNHDZCHWBHBDLGERMBRTCRQLCOEDUSXUZQDDJWPPIVWNNENUTDSXKVNCXUYMNMPJJTLAYXIQCAAMNABEDLSIMSULEHGWOTEQBRQRLSBOYFHTJCHCXDEBKUXVFQKSV");

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
    msg.setTimeStamp(0.0382470669536);
    msg.setSource(3360U);
    msg.setSourceEntity(183U);
    msg.setDestination(54007U);
    msg.setDestinationEntity(76U);
    msg.timeout = 45710U;
    msg.lat = 0.766513783743;
    msg.lon = 0.873361578745;
    msg.z = 0.274857783365;
    msg.z_units = 20U;
    msg.speed = 0.979086518026;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.65023598123;
    tmp_msg_0.y = 0.221588076118;
    tmp_msg_0.z = 0.189927546276;
    tmp_msg_0.t = 0.688548864911;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UWCPKXHMRKVNBCALHRRLTAQDNZAWVOFZKPRSJPMERXCEUVYYMUPBJIHRUQEHFLQGKWIBOAHFFYDZORONGYZLOOJBXHEVUQXJXXPNXPSMNBWGTIZUPSKMECQMMDWGJQNLFDYHIZXFIIUATLKSWWVPOOAAKGVHLSQCLGDZSHLYDOTSGCYJVKNMBJMUIYAAAREDRITBOTPQWKFDSGTGHVXQDEZNIMCJLCSFJDXBSV");

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
    msg.setTimeStamp(0.74455789292);
    msg.setSource(43098U);
    msg.setSourceEntity(170U);
    msg.setDestination(21224U);
    msg.setDestinationEntity(94U);
    msg.timeout = 41250U;
    msg.lat = 0.216353538137;
    msg.lon = 0.354365984613;
    msg.z = 0.602400235138;
    msg.z_units = 33U;
    msg.speed = 0.530651573883;
    msg.speed_units = 231U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.94221434492;
    tmp_msg_0.y = 0.498039294489;
    tmp_msg_0.z = 0.484284768348;
    tmp_msg_0.t = 0.959067463218;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AYMPLIQAFDPBTZQFWLFQNLFXFYJEXRTESDVNVT");

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
    msg.setTimeStamp(0.919693375063);
    msg.setSource(26201U);
    msg.setSourceEntity(67U);
    msg.setDestination(36555U);
    msg.setDestinationEntity(96U);
    msg.x = 0.342106415617;
    msg.y = 0.545779784488;
    msg.z = 0.457322837505;
    msg.t = 0.236131117361;

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
    msg.setTimeStamp(0.268844238071);
    msg.setSource(13858U);
    msg.setSourceEntity(128U);
    msg.setDestination(60080U);
    msg.setDestinationEntity(186U);
    msg.x = 0.864654708653;
    msg.y = 0.503654801762;
    msg.z = 0.708737537353;
    msg.t = 0.751486386706;

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
    msg.setTimeStamp(0.223766313785);
    msg.setSource(24528U);
    msg.setSourceEntity(222U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(73U);
    msg.x = 0.132881958473;
    msg.y = 0.73197646054;
    msg.z = 0.650062217708;
    msg.t = 0.620123245407;

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
    msg.setTimeStamp(0.931529005363);
    msg.setSource(10459U);
    msg.setSourceEntity(18U);
    msg.setDestination(6936U);
    msg.setDestinationEntity(4U);
    msg.timeout = 14979U;
    msg.name.assign("MASWXRZMRHXTJJDHWKSVTESHDURZMFEYCVBPSPQJIKFINDKEXTIVKQLEOTDXUMOSKIOQLWNODBMNESBXTJU");
    msg.custom.assign("QCMKPEKPTUZUJVCMUOOJGSDDARIMSJMDRBBOFEJLKNIZHGHUGNYDPR");

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
    msg.setTimeStamp(0.427691494589);
    msg.setSource(45155U);
    msg.setSourceEntity(86U);
    msg.setDestination(32462U);
    msg.setDestinationEntity(40U);
    msg.timeout = 15482U;
    msg.name.assign("MRXTVSZLUMEREJQIAYQNOW");
    msg.custom.assign("TBQTEXTYRLNMZVRKYSITGMXZXSNHNFZARRIXQ");

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
    msg.setTimeStamp(0.0295244783293);
    msg.setSource(62108U);
    msg.setSourceEntity(114U);
    msg.setDestination(41982U);
    msg.setDestinationEntity(27U);
    msg.timeout = 4148U;
    msg.name.assign("QPKJVGPPNXCBOBWSEHKVCEQTVXDRPGUBJPHASBEOXIJJNUMHAMQNIHHYRBTSTLSMJLGUXXJKIXHJCECZKQZLSNOXZLDLCRYSQEFCZBYCDGMQTVEROOOOOOHDQAKGTAXWGSQFFGADITXGNZKRSQBPHKKYYUUL");
    msg.custom.assign("BRNMUHUASRJHYXMWCHUBXELXAWAFUNEFOQSWUCQVBUPKZERKPBROUXFGXGVAWODQDPWMOIRSLTFHFDIKCKPSFJAKLDEJSXEDWCNDMHKGETQDPWQIFXJUGCZETMMGAZSBNHRUPIZRBACECLYKZGVGQYRYMZQQPSDRTVLDECKISHJLXJBGXSTLDHYIMG");

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
    msg.setTimeStamp(0.151342270163);
    msg.setSource(26882U);
    msg.setSourceEntity(159U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.493048023356;
    msg.lon = 0.846815843438;
    msg.z = 0.604119748948;
    msg.z_units = 51U;
    msg.speed = 0.140043847876;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.971489518957;
    tmp_msg_0.y = 0.280964371927;
    tmp_msg_0.z = 0.842269504459;
    tmp_msg_0.t = 0.491994350779;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0352907363677;
    msg.custom.assign("ANCWTLGRCJIJTTHDSARVQHHKAMYOPFHCNAVETMFOKECQVULTJBLFOHSRQNOLEMBUBVCROZBKGNWZLJBDBAFECYSQYUAWBFQJXYESGGDYHWVDHRNLUDZXTEGYLMQUNJBOJQEHXZDXSQPIWOXFCDRAODAZQGSGOMFLVBUXWFWPQXC");

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
    msg.setTimeStamp(0.443885434614);
    msg.setSource(21061U);
    msg.setSourceEntity(74U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.480804363756;
    msg.lon = 0.213869856078;
    msg.z = 0.0822887956298;
    msg.z_units = 225U;
    msg.speed = 0.693066779178;
    msg.speed_units = 240U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.97044488523;
    tmp_msg_0.y = 0.665383221591;
    tmp_msg_0.z = 0.348102247604;
    tmp_msg_0.t = 0.598926102981;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 52518U;
    tmp_msg_1.off_x = 0.0273780570837;
    tmp_msg_1.off_y = 0.764224287823;
    tmp_msg_1.off_z = 0.314615635392;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.217536282272;
    msg.custom.assign("OCGEZEQHKIUNACLVAPFUILZNTQFDV");

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
    msg.setTimeStamp(0.633565015668);
    msg.setSource(41379U);
    msg.setSourceEntity(48U);
    msg.setDestination(46903U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.874445725186;
    msg.lon = 0.967811526917;
    msg.z = 0.120127458428;
    msg.z_units = 243U;
    msg.speed = 0.679467480125;
    msg.speed_units = 157U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28802U;
    tmp_msg_0.off_x = 0.448670379737;
    tmp_msg_0.off_y = 0.58954935323;
    tmp_msg_0.off_z = 0.143937835903;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.47978752363;
    msg.custom.assign("KAQSJITQTZYAEAAELWMWYXWIWZH");

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
    msg.setTimeStamp(0.866003378921);
    msg.setSource(54117U);
    msg.setSourceEntity(108U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(179U);
    msg.vid = 6939U;
    msg.off_x = 0.801827649741;
    msg.off_y = 0.605967447638;
    msg.off_z = 0.785871667562;

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
    msg.setTimeStamp(0.456284790876);
    msg.setSource(44217U);
    msg.setSourceEntity(45U);
    msg.setDestination(45724U);
    msg.setDestinationEntity(34U);
    msg.vid = 21678U;
    msg.off_x = 0.573563881889;
    msg.off_y = 0.506731664466;
    msg.off_z = 0.336521506924;

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
    msg.setTimeStamp(0.306019253331);
    msg.setSource(8620U);
    msg.setSourceEntity(116U);
    msg.setDestination(322U);
    msg.setDestinationEntity(172U);
    msg.vid = 56437U;
    msg.off_x = 0.914821247847;
    msg.off_y = 0.181255659823;
    msg.off_z = 0.625552773109;

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
    msg.setTimeStamp(0.17544280958);
    msg.setSource(57555U);
    msg.setSourceEntity(170U);
    msg.setDestination(24833U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.40117449874);
    msg.setSource(15298U);
    msg.setSourceEntity(97U);
    msg.setDestination(33132U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.456620823967);
    msg.setSource(31651U);
    msg.setSourceEntity(156U);
    msg.setDestination(40694U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.360528154901);
    msg.setSource(15942U);
    msg.setSourceEntity(1U);
    msg.setDestination(48869U);
    msg.setDestinationEntity(32U);
    msg.mid = 61963U;

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
    msg.setTimeStamp(0.79692623188);
    msg.setSource(51528U);
    msg.setSourceEntity(177U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(0U);
    msg.mid = 26858U;

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
    msg.setTimeStamp(0.335357876059);
    msg.setSource(52421U);
    msg.setSourceEntity(54U);
    msg.setDestination(56213U);
    msg.setDestinationEntity(196U);
    msg.mid = 17868U;

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
    msg.setTimeStamp(0.685234019334);
    msg.setSource(6642U);
    msg.setSourceEntity(113U);
    msg.setDestination(2880U);
    msg.setDestinationEntity(168U);
    msg.state = 3U;
    msg.eta = 50287U;
    msg.info.assign("VUJIETIDSGZVYUHKWMDKKLDYPWSQLIBZBGDFHLNRKTJHALRUHZKMIFXXKNPYAYRMPDTFUMTGSDWSBVGXTCRSZIBRABGVLNMNAAEEBLPHCWGJORQVOKHMZDUE");

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
    msg.setTimeStamp(0.987552271883);
    msg.setSource(34999U);
    msg.setSourceEntity(208U);
    msg.setDestination(24840U);
    msg.setDestinationEntity(87U);
    msg.state = 142U;
    msg.eta = 57259U;
    msg.info.assign("BEUJJLJOHVHTQZQUVXOJYILBTVKYWKTWPGVZJEDABUYBJOYSYHVCIQWWOUPNHBQIETAMHGWZKLRCGFGSDVKCLBXZATEYFRWPSVHRIPIYYRPUKLMS");

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
    msg.setTimeStamp(0.827540384242);
    msg.setSource(43778U);
    msg.setSourceEntity(126U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(120U);
    msg.state = 223U;
    msg.eta = 35656U;
    msg.info.assign("QRIDZBPOTPWMJPUABRJSASFAFXJJPHJSQKPSYRZHXEFGRKQHKOWXJZFQLXHGUJOSPTWRVXUDXPVREIMZSBCDBNCNJICA");

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
    msg.setTimeStamp(0.980915935531);
    msg.setSource(13866U);
    msg.setSourceEntity(112U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(245U);
    msg.system = 27708U;
    msg.duration = 42029U;
    msg.speed = 0.13205720416;
    msg.speed_units = 58U;
    msg.x = 0.00295979948646;
    msg.y = 0.961943772288;
    msg.z = 0.612240604603;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.316959545608);
    msg.setSource(55910U);
    msg.setSourceEntity(214U);
    msg.setDestination(2231U);
    msg.setDestinationEntity(154U);
    msg.system = 57833U;
    msg.duration = 42750U;
    msg.speed = 0.947829342548;
    msg.speed_units = 122U;
    msg.x = 0.553229164707;
    msg.y = 0.82857374155;
    msg.z = 0.529856571661;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.0950386957153);
    msg.setSource(5381U);
    msg.setSourceEntity(28U);
    msg.setDestination(831U);
    msg.setDestinationEntity(144U);
    msg.system = 56013U;
    msg.duration = 16412U;
    msg.speed = 0.00106632489159;
    msg.speed_units = 84U;
    msg.x = 0.246038922728;
    msg.y = 0.0495816801512;
    msg.z = 0.614585881518;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.193885749774);
    msg.setSource(7310U);
    msg.setSourceEntity(230U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.929959999861;
    msg.lon = 0.0923699917594;
    msg.speed = 0.781895702427;
    msg.speed_units = 164U;
    msg.duration = 28927U;
    msg.sys_a = 56163U;
    msg.sys_b = 52462U;
    msg.move_threshold = 0.161230322558;

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
    msg.setTimeStamp(0.715203360611);
    msg.setSource(8042U);
    msg.setSourceEntity(154U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.456926126038;
    msg.lon = 0.114179462543;
    msg.speed = 0.723924858527;
    msg.speed_units = 130U;
    msg.duration = 1069U;
    msg.sys_a = 7050U;
    msg.sys_b = 52806U;
    msg.move_threshold = 0.604442454306;

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
    msg.setTimeStamp(0.627313915149);
    msg.setSource(61106U);
    msg.setSourceEntity(213U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.864960129913;
    msg.lon = 0.58101159145;
    msg.speed = 0.0836501838464;
    msg.speed_units = 232U;
    msg.duration = 33494U;
    msg.sys_a = 36729U;
    msg.sys_b = 758U;
    msg.move_threshold = 0.709116204711;

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
    msg.setTimeStamp(0.541855212403);
    msg.setSource(49757U);
    msg.setSourceEntity(120U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.439174199779;
    msg.lon = 0.678738664262;
    msg.z = 0.0157520291011;
    msg.z_units = 169U;
    msg.speed = 0.342292255573;
    msg.speed_units = 141U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.82174396981;
    tmp_msg_0.lon = 0.0847301602423;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZMYTNTABXADGZXMGWLJYLSCRVXHYNJRFDUTCSDWCIOQTVYKMIJFHNNSPSZYCKPVTHFEBZIDZEYYOKQROEUAZIABAEHXBQFCRMYRFNNSLVAWNTAPOMPMILFWUVHGYEOJIWEBXNODKASRVPSSJIUHDPGYKX");

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
    msg.setTimeStamp(0.454929573786);
    msg.setSource(8856U);
    msg.setSourceEntity(209U);
    msg.setDestination(50677U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.058660262754;
    msg.lon = 0.609968788382;
    msg.z = 0.137901494043;
    msg.z_units = 65U;
    msg.speed = 0.296371003804;
    msg.speed_units = 252U;
    msg.custom.assign("PBOHCLASMNINOXNFZYKDRMPLWWEWSGFVKQTUMZOHIPZFYLNLVBKGPBQULSJAAVDPOHPCDTWVIKCIMNVSEVO");

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
    msg.setTimeStamp(0.864110259985);
    msg.setSource(57442U);
    msg.setSourceEntity(176U);
    msg.setDestination(12202U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.721659690676;
    msg.lon = 0.81401436591;
    msg.z = 0.30905868931;
    msg.z_units = 150U;
    msg.speed = 0.0130120146133;
    msg.speed_units = 226U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.760607557888;
    tmp_msg_0.lon = 0.460682181045;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KDFOFNDGYQEJVOVLTFEZRMUSPGNAXYGYNOMMRUFQJFDPDHXNZLOKLAIZUKHRSYLIBZTVUEMSDJEESXKVJBDFMMANMQGCIIHEZHKVMZQUAHDJCKIPRJTUWSTEAWBVUOOCNNQILIIFZSVCUAPCFLKRYMKXQMHNYDCABCSWGXSBOXLBURSBBEZTIROTRNXC");

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
    msg.setTimeStamp(0.728099394299);
    msg.setSource(57952U);
    msg.setSourceEntity(89U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.266642948068;
    msg.lon = 0.147103430508;

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
    msg.setTimeStamp(0.303605353507);
    msg.setSource(53543U);
    msg.setSourceEntity(221U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.921198283895;
    msg.lon = 0.124523734756;

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
    msg.setTimeStamp(0.972300933212);
    msg.setSource(42254U);
    msg.setSourceEntity(237U);
    msg.setDestination(9746U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.535060772786;
    msg.lon = 0.208495535324;

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
    msg.setTimeStamp(0.390058839337);
    msg.setSource(3633U);
    msg.setSourceEntity(95U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(41U);
    msg.timeout = 55174U;
    msg.lat = 0.416063003623;
    msg.lon = 0.343766873937;
    msg.z = 0.70116037808;
    msg.z_units = 119U;
    msg.pitch = 0.551715330102;
    msg.amplitude = 0.938541836688;
    msg.duration = 40293U;
    msg.speed = 0.00128188645659;
    msg.speed_units = 20U;
    msg.radius = 0.65242343195;
    msg.direction = 228U;
    msg.custom.assign("GCNNVURHGPWIVEYNUIHNYLZRQXNBMKJWRFZGDWVWMKCTHOIIDIQMWPNDTTQYMURIOKLRCRXKSPLMIONSAETXDFWKT");

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
    msg.setTimeStamp(0.157119957735);
    msg.setSource(49761U);
    msg.setSourceEntity(140U);
    msg.setDestination(53698U);
    msg.setDestinationEntity(121U);
    msg.timeout = 3913U;
    msg.lat = 0.456928314986;
    msg.lon = 0.489566629302;
    msg.z = 0.434750044203;
    msg.z_units = 60U;
    msg.pitch = 0.802724178507;
    msg.amplitude = 0.707231975322;
    msg.duration = 28156U;
    msg.speed = 0.244156142461;
    msg.speed_units = 192U;
    msg.radius = 0.415786606351;
    msg.direction = 147U;
    msg.custom.assign("CWGJLFYFRYNAQIYULFTAMPUDEUDKYSSIYQBTLPJAZJLEPRKOECLZZTPHYTVGFWPVMLBWOOTBCOEAHAQUNFNTFSWREXYJBPYKIVMGLGSVDELKUC");

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
    msg.setTimeStamp(0.0411869212208);
    msg.setSource(31595U);
    msg.setSourceEntity(175U);
    msg.setDestination(57906U);
    msg.setDestinationEntity(24U);
    msg.timeout = 6788U;
    msg.lat = 0.356698706703;
    msg.lon = 0.931559212433;
    msg.z = 0.27812118209;
    msg.z_units = 192U;
    msg.pitch = 0.762538979962;
    msg.amplitude = 0.581881281726;
    msg.duration = 11300U;
    msg.speed = 0.297099411589;
    msg.speed_units = 114U;
    msg.radius = 0.859982567954;
    msg.direction = 174U;
    msg.custom.assign("OPJJFSMRYRFOTENSNFPTYESPJSOAMHI");

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
    msg.setTimeStamp(0.508117234531);
    msg.setSource(48046U);
    msg.setSourceEntity(57U);
    msg.setDestination(53514U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("ZBFOJGMVQCAJE");
    msg.reference_frame = 187U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18070U;
    tmp_msg_0.off_x = 0.700490723596;
    tmp_msg_0.off_y = 0.210391643312;
    tmp_msg_0.off_z = 0.309696582337;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ELEUSRNMOVHKVJXBYRIDSNRGWSBQIVZFCAYOJOOQLZMUMUDSFQGWKGGTAXGRTKENIZPHWAWSKBPSBKRNJPICSUQWHRJTDNXAZQBJWHKEHLXMLBXTSZNEAFA");

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
    msg.setTimeStamp(0.974875636932);
    msg.setSource(9384U);
    msg.setSourceEntity(179U);
    msg.setDestination(151U);
    msg.setDestinationEntity(184U);
    msg.formation_name.assign("ZXYWDLREREFWEBCWZUONIXZHWAYFBCCSIQCQESPNHKFVMRJGLBBIBKJYESFUQGSSNEBHXLDPGHKWCPGQKPIWNQDNMYGRIDIFPVHOJWLXHFLNPUAEELRFMLDAALLMSDGNURIOTVBPMUTZJGJCSYRWWVTITXGBJWYYNVTHSPQMCIKQAAOPYRTZXQFDOTO");
    msg.reference_frame = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47146U;
    tmp_msg_0.off_x = 0.613738449307;
    tmp_msg_0.off_y = 0.0181760038653;
    tmp_msg_0.off_z = 0.0260231117184;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SRYOXFSPNGQSXEHSCHGQBUIZACGLUIRYRHXVUFIJLCPTCFLDRW");

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
    msg.setTimeStamp(0.359710798666);
    msg.setSource(36153U);
    msg.setSourceEntity(24U);
    msg.setDestination(7065U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("CRLCBVUTEGATHKVHWQILJWYIQLXXKJZMRDGKBMTSMVEKYUKIPSXJMALGSTQRRZNAPSVPTJERUWONXBFGHCCUZOQLUEXOGNCDRUQPBBWHOZIYECJOXHBFMRHXKSHPQUZMDESBDUVYEYJZCDFYYMDQFLFVIQWAJQZNPNGCSPXAYCKHGMYARNYFWLJINDVMIBTPVGZ");
    msg.reference_frame = 118U;
    msg.custom.assign("QETVZZQWSXYLYTTKJNJLRFIOBVMMDSFVSVEKMWHDMFRHBJMLBKMRODSNYZDAUEHPAVBNVAIOOFOPGUYQCSUITALTAZQZCUJSCKXEPKAQROYFSORXKLLYQJOIVRKZBOZANEDQMBXZXXCNUCQTR");

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
    msg.setTimeStamp(0.68602834356);
    msg.setSource(2997U);
    msg.setSourceEntity(27U);
    msg.setDestination(31374U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("ISTYSDGSGMJTASRZCTKHDAAIJEOQZZNPPTLXFUMSDIMDUYOLDXV");
    msg.formation_name.assign("VHOTIPIMXKZQUDNUQEJZUTKWTIZCTKGPRIUUCDUNEDNBVYXHDOCKZRXUZEAFMGWZSHFCMOPQXCENAWETCOYLAKNMVVRXSTSHDKXLYHTXJWFEOMXLZJJHENDKQLLEFSTBLJ");
    msg.plan_id.assign("QEXICAMYDMEYOIRKCBYPJGFBCQWSBWGIRNLZPZUOMODGYOYNZOWYVXQHLSUPFGNKIAKSWIGOGDGKARXLLBIRMMZZCFSDBADMEKIXSWHVQXJPZKVTJRHVYXFQELCFOFHHUNABRTHFPJJNAHVMMAJOYYJJWNLLNGDWPFAXDEQCKJUTQVVCKTLTXZIERUNUSSVKPBRALSYBPXFTBEINZBPMLHSDEXQVIWHSHDKTWG");
    msg.description.assign("GBGEFCNLCUFFMVVZYBCJYIDVHCUJAMZCCVIQHPFMFIVHHXANLXLSBJDKILYAGDSAKS");
    msg.leader_speed = 0.460735368024;
    msg.leader_bank_lim = 0.268098335827;
    msg.pos_sim_err_lim = 0.935272017205;
    msg.pos_sim_err_wrn = 0.63498527497;
    msg.pos_sim_err_timeout = 43532U;
    msg.converg_max = 0.805059961147;
    msg.converg_timeout = 24152U;
    msg.comms_timeout = 23029U;
    msg.turb_lim = 0.875336993674;
    msg.custom.assign("AZGVMQUEOJJQWWFVDKTEZQXYDXIGLRLUMPKJSCXLNYAGHIOHIMVWWDNYBATUWMGKKKMYMNNKEDNZILURINSAFIEETZRVHNRZZPHVHUCCSLRXOUTG");

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
    msg.setTimeStamp(0.87768917527);
    msg.setSource(14867U);
    msg.setSourceEntity(184U);
    msg.setDestination(42498U);
    msg.setDestinationEntity(168U);
    msg.group_name.assign("MMJKACHWXNVWFTEKTMPOTTSICXSTDJVACXIOACIACXJVCFNIEHOTFZUKPOOBKVWAJDBSFKPYCLUESQDQ");
    msg.formation_name.assign("SAKLWSFCRIHTDFOKRUNWAJYQWUPCRKQIINFCJURITHPTMMTFUHOLTNBKVLKVCASSOVYEFNNYVGUUYVLEGIWPDJOLGGXHRYXHGTRAXJVCKXLZOGXKSBJZJSJLCVQNGFQBIZPVEWMRRNMZMDXQXONLQBSCOLWKBOEYDTEUQMARDCUGEDKHCVJZZVRTIBBAFSPSITJKJH");
    msg.plan_id.assign("HEZOZUEYKQMDFHOXCLSPRDQDVKLKICEOFPXWVNLDRNGAXAIHGP");
    msg.description.assign("RKBQWOZPMWGBJVKFYAJSVRSYSXPFWUTUFTNYXJKHBCCTVTUCEPTELSNMNDOSROCICKYIAROINYLGJXAKDDIUIMWGGZTFGDAJVZPZQVBFFHAOLEEHGQEKCIWFSPMMGOUKXMZTRPLVUKYZHYFHLVJ");
    msg.leader_speed = 0.842720269637;
    msg.leader_bank_lim = 0.618081953387;
    msg.pos_sim_err_lim = 0.197918673704;
    msg.pos_sim_err_wrn = 0.410149333135;
    msg.pos_sim_err_timeout = 28988U;
    msg.converg_max = 0.864343387493;
    msg.converg_timeout = 26452U;
    msg.comms_timeout = 14329U;
    msg.turb_lim = 0.161454093782;
    msg.custom.assign("FDQMPJIXILPRUFNOQNGQYRXJBBSCXGKPVGFCFZLDSZOTOSHLBKJDPZNLVYAUHWWEMULNNMCSEUDDRLCZDSTBIVDTTMKDPMHSZWTWJYSCCHEVEDGUXKEJICUNIHLYNKJMHTLQRKCLQNFIYYGIKBAWKFXNWFUYGVRGOTFXQLOYBQBZRBFYPHJTXCYQAIASMROJHIQWWPXVWOVSRQUROTEVDKUASMEGOFRAZM");

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
    msg.setTimeStamp(0.861517405781);
    msg.setSource(31631U);
    msg.setSourceEntity(128U);
    msg.setDestination(41377U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("VMGERXIJISIZKOGXMRWPRXAJTHRBPMGDVFGNSZOTVFPPOGBBMZWHURLWWTHQJNNBFRHYEVRFIDSXJJHCXDVGCKHZYEHUSXZEKBCFOVEFBSLQJSVPUEKDZ");
    msg.formation_name.assign("IBFTQDPGUUGEMMPKWPSXNQZYPLNMMCIAJNLBOARFDSQUOAOEZVHXQZUVHBWHVCGJSCSPIBIFTAHNKZMTRWGKQCMWSGKPLFUXXCJJCZTGIVZHYVBJYNNLMLFWPHRSJYREEQELUXPRDQVDLTOJQDSAXBXKUHNYSVRBCJXFOYVRZZZZMNRKOEBHGDWSIIAPASIYJYQAWYKFYLDDOGBLMRQHUCNFOVIKUGWTRJNILEMDETEKFBUFHPXTCGKVWTWD");
    msg.plan_id.assign("RKOACIAPXYNSCXEAWJOBDFSEUZHUEVDLSKYWRQBRIEOHOZWMWMCTVMATWHDVOYQWJFMGRTXF");
    msg.description.assign("WISTTUONAMJNPCIHBJPTTZSVCNAVCGERKTCSNXXFRWHZEKHWOFBDVIOWHPQFKCHJVLRMLNBEQ");
    msg.leader_speed = 0.979041738598;
    msg.leader_bank_lim = 0.975416498958;
    msg.pos_sim_err_lim = 0.42499977164;
    msg.pos_sim_err_wrn = 0.691221986071;
    msg.pos_sim_err_timeout = 39251U;
    msg.converg_max = 0.855825617698;
    msg.converg_timeout = 52850U;
    msg.comms_timeout = 58575U;
    msg.turb_lim = 0.626033501456;
    msg.custom.assign("EYTRBXBNIZAVWPXWPZNFZVVOLMEYYSLFSKMKXCCHKMPQBBLMOZBDJJSQGAUBIWYDIZXKLTYAGAMRQIBNVCFTJIEGTNUCOYLMBDDGVRZEOSUKPKYAGMQLPLORWFOCMKRZQVFLAIKHNMRONXYRHADTCJZIHUFEKHMRGHEWYGEJPOKGSBISXQJTFPUASTDBQGFPPEUECVCIHTSWSWJHOLUAOQLNIDDJVVFXUFDNYCGWXQARWXDUCQ");

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
    msg.setTimeStamp(0.269282280945);
    msg.setSource(54564U);
    msg.setSourceEntity(210U);
    msg.setDestination(4437U);
    msg.setDestinationEntity(47U);
    msg.control_src = 49761U;
    msg.control_ent = 241U;
    msg.timeout = 0.394184306614;
    msg.loiter_radius = 0.472657838095;
    msg.altitude_interval = 0.133308889446;

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
    msg.setTimeStamp(0.704116431413);
    msg.setSource(25609U);
    msg.setSourceEntity(191U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(82U);
    msg.control_src = 15593U;
    msg.control_ent = 134U;
    msg.timeout = 0.477075946355;
    msg.loiter_radius = 0.880925908928;
    msg.altitude_interval = 0.889543176348;

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
    msg.setTimeStamp(0.437554357775);
    msg.setSource(9548U);
    msg.setSourceEntity(2U);
    msg.setDestination(48572U);
    msg.setDestinationEntity(245U);
    msg.control_src = 10088U;
    msg.control_ent = 108U;
    msg.timeout = 0.592072664104;
    msg.loiter_radius = 0.831716314794;
    msg.altitude_interval = 0.859326494049;

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
    msg.setTimeStamp(0.734659283617);
    msg.setSource(7559U);
    msg.setSourceEntity(164U);
    msg.setDestination(16828U);
    msg.setDestinationEntity(45U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.982971065682;
    tmp_msg_0.speed_units = 31U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.818620222488;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0662145300924;
    msg.lon = 0.557213256763;

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
    msg.setTimeStamp(0.566253188493);
    msg.setSource(58249U);
    msg.setSourceEntity(89U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(251U);
    msg.flags = 71U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.407595587395;
    tmp_msg_0.speed_units = 78U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.700947596802;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.474244566522;
    msg.lon = 0.360649959711;

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
    msg.setTimeStamp(0.64348849873);
    msg.setSource(43877U);
    msg.setSourceEntity(39U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(166U);
    msg.flags = 237U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.860156023406;
    tmp_msg_0.speed_units = 42U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0201000810531;
    tmp_msg_1.z_units = 78U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.136462492729;
    msg.lon = 0.496492409777;

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
    msg.setTimeStamp(0.806433325509);
    msg.setSource(23217U);
    msg.setSourceEntity(3U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(230U);
    msg.control_src = 48468U;
    msg.control_ent = 155U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.175964281007;
    tmp_tmp_msg_0_0.speed_units = 86U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.638790907628;
    tmp_tmp_msg_0_1.z_units = 117U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.177444357288;
    tmp_msg_0.lon = 0.601400148064;
    msg.reference.set(tmp_msg_0);
    msg.state = 138U;
    msg.proximity = 168U;

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
    msg.setTimeStamp(0.954921989809);
    msg.setSource(45247U);
    msg.setSourceEntity(232U);
    msg.setDestination(56323U);
    msg.setDestinationEntity(221U);
    msg.control_src = 43233U;
    msg.control_ent = 48U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.629446499136;
    tmp_tmp_msg_0_0.speed_units = 0U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0219933176329;
    tmp_tmp_msg_0_1.z_units = 146U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.841972109006;
    tmp_msg_0.lon = 0.408338392182;
    msg.reference.set(tmp_msg_0);
    msg.state = 129U;
    msg.proximity = 176U;

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
    msg.setTimeStamp(0.808034808898);
    msg.setSource(40877U);
    msg.setSourceEntity(18U);
    msg.setDestination(21840U);
    msg.setDestinationEntity(245U);
    msg.control_src = 6652U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 32U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.271772403461;
    tmp_tmp_msg_0_0.speed_units = 121U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.344555825429;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.214591544272;
    tmp_msg_0.lon = 0.790128240998;
    msg.reference.set(tmp_msg_0);
    msg.state = 218U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.0153592677544);
    msg.setSource(18446U);
    msg.setSourceEntity(223U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(104U);
    msg.op_mode = 249U;
    msg.error_count = 213U;
    msg.error_ents.assign("HNURVEBGHRYJSTMWSXZSO");
    msg.maneuver_type = 30329U;
    msg.maneuver_stime = 0.198305935808;
    msg.maneuver_eta = 9538U;
    msg.control_loops = 2174043018U;
    msg.flags = 222U;
    msg.last_error.assign("YOOPKSKNRLNWCWOYFIZNXLFZRDSNKQUENTMLALSTDDVAMZIFFVYPQMZNMAEHQCLOWERMUHYDJIBNYKGAAGYDQYPXYHHKKVJZRFOXIVZAMXTWVSOCJTCVTDPHPRVFWU");
    msg.last_error_time = 0.504865455951;

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
    msg.setTimeStamp(0.474660866611);
    msg.setSource(50246U);
    msg.setSourceEntity(151U);
    msg.setDestination(18311U);
    msg.setDestinationEntity(123U);
    msg.op_mode = 120U;
    msg.error_count = 80U;
    msg.error_ents.assign("AQORITJOTYAVIAZHCIECYRUXROVWBLBPTCJYQUXJFYIORKTBGMADHUWPKSBDKIUFNEKFYGYGOLHLJZWQQLHZJVTHNASSXTPGJXFSTWPXAMUWKBOVVPMFBZYLMCMUNVZYSDFPDMATFLLGWMRJVPGNYHCXNVLXEQRUMRZFFWZENLQBUUEFKQCCRQYUDIKHSIOKEJ");
    msg.maneuver_type = 46635U;
    msg.maneuver_stime = 0.892195187093;
    msg.maneuver_eta = 14985U;
    msg.control_loops = 3613024847U;
    msg.flags = 33U;
    msg.last_error.assign("YJCFYEFICDZEWUQJPVTVQIDLXVLMDLJMNYAFBGEDKVEZZXNFTBNAAZZGWWTZRRERPHAIHUSICMXRENQUMCAAWWDRPVSBLPQOUPSTQJUBFYBSOONGJPKIMUCGTZLBXRPQEMHBJKAGRMIYABHDWTJRUDQYEINFTOASXIVKY");
    msg.last_error_time = 0.172530548997;

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
    msg.setTimeStamp(0.98446376699);
    msg.setSource(52942U);
    msg.setSourceEntity(137U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(184U);
    msg.op_mode = 18U;
    msg.error_count = 33U;
    msg.error_ents.assign("RPUEWCITDBGZZTMDQTVUXRBUECSBYOAFFJWYAZFLNOCLLVJUHOXKRODSLUQJFQVHVOFHCRLPQWDLWAAPMOJLKZSNGKTHDYBQUVAYWEJGVHOIPPDVTYMPCCIBHNKHQTBQRWEUAGBEDZROJMAATGEVWLVIQSFYZBEXRFHLXBBWCEQS");
    msg.maneuver_type = 60708U;
    msg.maneuver_stime = 0.331259693224;
    msg.maneuver_eta = 50871U;
    msg.control_loops = 3124994866U;
    msg.flags = 41U;
    msg.last_error.assign("ZGCURNAQPCKMDCLCHWAWTSYIJOLHBFEBOKIYSPWBGGAHGBBKOSVZMZTFPXITSPDGXZXYYNLWKHMNGDDZEJFOOJVVELTKOMQJDGPNNFYVSVUAHSJPVMDWANIHVXRWHFYDQCBINRLTZBMXTAJZKULXQAEAXLUQLOMDZSMIEYLRWERMR");
    msg.last_error_time = 0.186292877021;

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
    msg.setTimeStamp(0.641798407212);
    msg.setSource(3200U);
    msg.setSourceEntity(42U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(108U);
    msg.type = 149U;
    msg.request_id = 7938U;
    msg.command = 203U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0864815580652;
    tmp_msg_0.lon = 0.103259632611;
    tmp_msg_0.speed = 0.00789665288119;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.duration = 38446U;
    tmp_msg_0.sys_a = 10836U;
    tmp_msg_0.sys_b = 50052U;
    tmp_msg_0.move_threshold = 0.561585649995;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10787U;
    msg.info.assign("KIQZPYWBJWMCYTEBHQEREJVSUCSEAPLWNTRWGXGMYVADBIYSMONSAXAZSXLAWDVNDICOIYFQFHMODSBZLCPOYEENVQLQWPVRACTUKAWMJNDAIWXLCHHZTLZZBOBNJNUXCQHRGRHFELHOGURRMTFNCGFCCTQNEWTGKBEVPJXBBJ");

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
    msg.setTimeStamp(0.615420538062);
    msg.setSource(21452U);
    msg.setSourceEntity(186U);
    msg.setDestination(31542U);
    msg.setDestinationEntity(237U);
    msg.type = 36U;
    msg.request_id = 31945U;
    msg.command = 12U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 9758U;
    tmp_msg_0.lat = 0.255589915717;
    tmp_msg_0.lon = 0.332811147988;
    tmp_msg_0.z = 0.320792264186;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.speed = 0.866258660048;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.bearing = 0.593169930019;
    tmp_msg_0.cross_angle = 0.521452454045;
    tmp_msg_0.width = 0.836991756424;
    tmp_msg_0.length = 0.380222342143;
    tmp_msg_0.hstep = 0.922447404055;
    tmp_msg_0.coff = 1U;
    tmp_msg_0.alternation = 114U;
    tmp_msg_0.flags = 118U;
    tmp_msg_0.custom.assign("FTBYDGDJNJCUVIVYGVFBSKOANHLKNPKWAHEBFRBIGLCLEJTAFDIPHJRJZRCTRMZZQXWTSDVLDXDGYUQIUXKYEMYBBFTXUUQOMMVAZVD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40568U;
    msg.info.assign("VSQTHYWHKIVJBEAZGGYLNTGLTUJPVVAVBTBEVENIFNHITNREHNFXHFDCONJWYDCQATQAHSFXBCDACHDMFYBKCJLGIQKSLMSXFOMJOARMIURZPYPWWSRQVZVWLYVJLQCPXKESBYKXUUKWINEMLCEUVSBKDGRQWDOBNDECFRYZ");

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
    msg.setTimeStamp(0.649619879321);
    msg.setSource(43753U);
    msg.setSourceEntity(39U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(207U);
    msg.type = 211U;
    msg.request_id = 14788U;
    msg.command = 180U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.268120443647;
    tmp_msg_0.lon = 0.875311649438;
    tmp_msg_0.z = 0.43551488519;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.504685165676;
    tmp_msg_0.speed_units = 123U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.443085538732;
    tmp_tmp_msg_0_0.y = 0.934130380636;
    tmp_tmp_msg_0_0.z = 0.783258804371;
    tmp_tmp_msg_0_0.t = 0.183754626993;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 16727U;
    tmp_tmp_msg_0_1.off_x = 0.377083498356;
    tmp_tmp_msg_0_1.off_y = 0.640152905811;
    tmp_tmp_msg_0_1.off_z = 0.526435678987;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.701282252248;
    tmp_msg_0.custom.assign("TTJDIEPRKNFQYQGDIFZRBCPEPBDVSSXFDMDYDKTVPOLPNPVCHKMZLCNUTWAHIJLMVTALBPTHEWDGKUXJGVRUZMGIMXGLXEWUPAILAHNMGFYJNCANZZHMNBFXLFBUIOLTCYVEUQBVILSCEUCSMDROMXJMXQDPORASFRTJZHSRVCWXSOXEAWQZIITWRNAYJRCJWTRBYQYYBHOKFKWZEUZZKSOOJOAWJKUNQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44162U;
    msg.info.assign("ADEVZBNIYAUKRVGLTPQGYDEKXVUUFBZOJSKNEGSXNSOWFYLBINCVQXSDQRFDYRZDVMUTIPWHILBNCPHGKZPVMMLDOLBWBOCDWRFDALQWPRZNQFCOPPAMIJWZEHUEOWETGKGUBZPCHJHUYYBTWABXSKRJELITCJSTZLHHRIVKXOMKFHMNYWIPLIADVJXWECEJYFLIVJUURZZ");

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
    msg.setTimeStamp(0.710246075783);
    msg.setSource(64515U);
    msg.setSourceEntity(230U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(148U);
    msg.command = 6U;
    msg.entities.assign("OFDYTEPNUWIQEOVCERJZPHZHTAGFQXPMVGJYMSPKGXSSMQQQPIADYZTUFHSVWRHTCUIAGDAQMQOBKBKLGKMZSPJNBNPPOQVBQFKJUGPERSSNWXGHMWDUNKZRJZLIWWHVRACSLAOLOIKADPDFCEWJKTUBYCMRRXFRLYCGUATBZTLJMAGH");

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
    msg.setTimeStamp(0.0545228255175);
    msg.setSource(62613U);
    msg.setSourceEntity(191U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(249U);
    msg.command = 246U;
    msg.entities.assign("ZSBXCCVRHHRIJLMVATAAGXOUSBMPQSRDFZWICNOBCGYORNGSPPKMWFKADVUMFXLETLLNHEDLNMZHJZUFQMXGMKLQDWQHKBPWHSALJBBWMYOIGHVRBUMUWIXNDQXDECEVUSPYFZYGOJXICPRPXIJTTTKYGTLG");

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
    msg.setTimeStamp(0.682846011263);
    msg.setSource(24678U);
    msg.setSourceEntity(73U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(43U);
    msg.command = 93U;
    msg.entities.assign("WXYAVSWEWUOFWWGTAERZFEMBOBFKZHZNQNJBKSSECUSOBBCFTQEYPXQSMFOFCXXFULWCJNEPIJYTNPJUZICTTGRGMISLDMHFPGUC");

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
    msg.setTimeStamp(0.0569034618375);
    msg.setSource(16398U);
    msg.setSourceEntity(194U);
    msg.setDestination(28339U);
    msg.setDestinationEntity(27U);
    msg.mcount = 46U;
    msg.mnames.assign("OBJMBBBCTOMQNIVKTKYEFLYKQCOJMATNTPIHHJBSYWEMNBUGGRVEQXZLOQXAAGXGKOXSCUWORQKQWPFOSDHNAUSVWIJPGFJROGHHZEMXYJZPYQPVDZANSLNOVPRARMUZHEUKXJXCFPIYYMSIENECTXVRGQTLVHRFIIUHYFZPRUILDYXKPGACFQRFPCUHBMCSNTGLFWDSSRNBDMZEYZ");
    msg.ecount = 141U;
    msg.enames.assign("ARJBBXIDPZWMNGWUFTJREEGLQSERBSSNIMQCTYOZONWBDOZZNSXQCLYAULWVOWGZ");
    msg.ccount = 80U;
    msg.cnames.assign("GODDFXZISLPJJRLWKFYZXSVULSPJEBMAGHWVNZFMOVUXXJCBZHKGOTTAQJVWPJYWUGOSDUGALWUIKFYTSHUTQVXXZWMPVLOYSLGIXQEKDIAEVCOBNKHRYEDWEMBJPRQXJQWKHGUIMYACMLKODPWCFBMTFUABSRZGQEZIVCPZDTLPHDRIFMFWPV");
    msg.last_error.assign("HZFBEKQFWSWWXNWFQTYZNUVXOKAAUEXMYGHZJGEPNBDXBBKTMBKBJZFIWKTCSXOZQJPELYLEJHIOOFSXITPLLEPHHIDOCDJVTINUVNLQCQFSYRDVMCKDNCXYPSQTRSXSFVRNWTYNPULGCNMHAUDTAURYVHLGGKZCDCSXHM");
    msg.last_error_time = 0.110161463589;

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
    msg.setTimeStamp(0.232049580063);
    msg.setSource(28562U);
    msg.setSourceEntity(186U);
    msg.setDestination(48343U);
    msg.setDestinationEntity(133U);
    msg.mcount = 201U;
    msg.mnames.assign("UXPNXBQORIWNBIWZNVMDJCFNCPTS");
    msg.ecount = 149U;
    msg.enames.assign("FGUCOTANVXQMKNVOYNRXUAFPDCDFRPZVYBQGBBTVJDFEFSKIIYMQURWWGFAWOGQKTLXWJNYLQBPHPIVZNCQPUJRHCTG");
    msg.ccount = 171U;
    msg.cnames.assign("LWSYEWHCLXYKBBFLRHVCDROHDKKBZRYSPCAXYJNHQFKSEXUOUPADLDWJPVSZWVGAGBRTPNZQLQOIZIINMPEJLZQUIUFRQEHGSYIIAHPFHFQZXUENGRDWKYCZTOKPXWOEWCJUCPEOINNSXRGGOVVSLJGCRHMVQJDYXNQAMBFNOBNEAMMUZMBATKPPTZVFIRFMLKWITAJYKLDRTHWBAQEDUCMFGZNDBYIVXLSXKAGMJTUDSVXBYGQEWJ");
    msg.last_error.assign("MAFOYNHLIZIZRJOURHQDGUKSXRAKGBDWZEKIQBPRBTTXHNFXPSVRCRLZDFXJFOYRIITNBIWYJKCALSSMSNESBGZLUEGCSBWGUONQATMLSTOTKLAPWZNQZYWCUKTOPVDIEDTPCZEHGOXGVVWUMKFUBKLEWMMGHYECNOLFEWRAPMJIVECMNZOCW");
    msg.last_error_time = 0.311339868356;

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
    msg.setTimeStamp(0.903706933525);
    msg.setSource(13307U);
    msg.setSourceEntity(22U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(76U);
    msg.mcount = 0U;
    msg.mnames.assign("SLTEVIOVRKFGCGYRKXVNHNSQOXPZAWHXIKUAMPULTNKHEJSXQQGPSIQDCUGYFGVZJXIYPSPXCMKPRMYRXWRMETTCILQADIHTLGBJKUZLITWJXB");
    msg.ecount = 247U;
    msg.enames.assign("EYDRXMFQXGWNUZIDLVHDLY");
    msg.ccount = 227U;
    msg.cnames.assign("RQYQSWDDTVNDMJYIECAWJJLKMNETRQHSVVYYVQPSVISCVOEJQEPGDJUDWAFKKEUAFRSSPYPFCBWHOHGEBKBHMXRLZGBMUXILUZDLFJNTTNIWXAAMGYHVXQFPUZOBCCZYFTBLTUDOGSUGDRUCVNNCEBKA");
    msg.last_error.assign("SKGEUXMPTBOZUZFBKCIJDCHLREKMSGRMAFDXOPAKGSWYM");
    msg.last_error_time = 0.326979927204;

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
    msg.setTimeStamp(0.760256015542);
    msg.setSource(23514U);
    msg.setSourceEntity(243U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(210U);
    msg.mask = 2U;
    msg.max_depth = 0.935401625277;
    msg.min_altitude = 0.0917783387078;
    msg.max_altitude = 0.443418381343;
    msg.min_speed = 0.656381383001;
    msg.max_speed = 0.476193283702;
    msg.max_vrate = 0.367642619207;
    msg.lat = 0.335972495988;
    msg.lon = 0.945050074375;
    msg.orientation = 0.921281203212;
    msg.width = 0.0892055142306;
    msg.length = 0.114413878995;

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
    msg.setTimeStamp(0.63411325144);
    msg.setSource(17382U);
    msg.setSourceEntity(164U);
    msg.setDestination(64144U);
    msg.setDestinationEntity(175U);
    msg.mask = 49U;
    msg.max_depth = 0.252556377855;
    msg.min_altitude = 0.199890066521;
    msg.max_altitude = 0.927561990682;
    msg.min_speed = 0.292440394679;
    msg.max_speed = 0.574130763002;
    msg.max_vrate = 0.78282208827;
    msg.lat = 0.900961975799;
    msg.lon = 0.167100531845;
    msg.orientation = 0.258513450569;
    msg.width = 0.347956245005;
    msg.length = 0.958517867395;

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
    msg.setTimeStamp(0.118660549806);
    msg.setSource(10943U);
    msg.setSourceEntity(144U);
    msg.setDestination(22366U);
    msg.setDestinationEntity(143U);
    msg.mask = 60U;
    msg.max_depth = 0.441976226878;
    msg.min_altitude = 0.170810175144;
    msg.max_altitude = 0.138107860195;
    msg.min_speed = 0.279299966649;
    msg.max_speed = 0.64173403227;
    msg.max_vrate = 0.470656917317;
    msg.lat = 0.94069841236;
    msg.lon = 0.261022657009;
    msg.orientation = 0.272198848577;
    msg.width = 0.349197154599;
    msg.length = 0.861449395946;

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
    msg.setTimeStamp(0.511234771608);
    msg.setSource(39509U);
    msg.setSourceEntity(216U);
    msg.setDestination(20342U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.611672355189);
    msg.setSource(50732U);
    msg.setSourceEntity(143U);
    msg.setDestination(1306U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.972526605324);
    msg.setSource(58449U);
    msg.setSourceEntity(109U);
    msg.setDestination(60316U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.917650431403);
    msg.setSource(17836U);
    msg.setSourceEntity(242U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(168U);
    msg.duration = 27119U;

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
    msg.setTimeStamp(0.221770984092);
    msg.setSource(58462U);
    msg.setSourceEntity(150U);
    msg.setDestination(53688U);
    msg.setDestinationEntity(74U);
    msg.duration = 31221U;

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
    msg.setTimeStamp(0.413246175431);
    msg.setSource(53485U);
    msg.setSourceEntity(200U);
    msg.setDestination(6107U);
    msg.setDestinationEntity(98U);
    msg.duration = 46173U;

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
    msg.setTimeStamp(0.622326006062);
    msg.setSource(38711U);
    msg.setSourceEntity(24U);
    msg.setDestination(46219U);
    msg.setDestinationEntity(37U);
    msg.enable = 207U;
    msg.mask = 3976589344U;
    msg.scope_ref = 0.242777125143;

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
    msg.setTimeStamp(0.391962561146);
    msg.setSource(14290U);
    msg.setSourceEntity(108U);
    msg.setDestination(6013U);
    msg.setDestinationEntity(35U);
    msg.enable = 56U;
    msg.mask = 3758177618U;
    msg.scope_ref = 0.877919571607;

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
    msg.setTimeStamp(0.734383602997);
    msg.setSource(50898U);
    msg.setSourceEntity(138U);
    msg.setDestination(28448U);
    msg.setDestinationEntity(100U);
    msg.enable = 60U;
    msg.mask = 468679779U;
    msg.scope_ref = 0.27518244576;

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
    msg.setTimeStamp(0.645876018236);
    msg.setSource(42968U);
    msg.setSourceEntity(0U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(22U);
    msg.medium = 251U;

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
    msg.setTimeStamp(0.425595656419);
    msg.setSource(46307U);
    msg.setSourceEntity(151U);
    msg.setDestination(1219U);
    msg.setDestinationEntity(222U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.576934287506);
    msg.setSource(45277U);
    msg.setSourceEntity(222U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(230U);
    msg.medium = 194U;

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
    msg.setTimeStamp(0.116706489787);
    msg.setSource(14591U);
    msg.setSourceEntity(226U);
    msg.setDestination(62900U);
    msg.setDestinationEntity(49U);
    msg.value = 0.295547109525;
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
    msg.setTimeStamp(0.113439866249);
    msg.setSource(37255U);
    msg.setSourceEntity(249U);
    msg.setDestination(55043U);
    msg.setDestinationEntity(244U);
    msg.value = 0.624042186668;
    msg.type = 170U;

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
    msg.setTimeStamp(0.786784090045);
    msg.setSource(26582U);
    msg.setSourceEntity(195U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(192U);
    msg.value = 0.894231847748;
    msg.type = 95U;

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
    msg.setTimeStamp(0.457438068071);
    msg.setSource(32378U);
    msg.setSourceEntity(24U);
    msg.setDestination(12506U);
    msg.setDestinationEntity(37U);
    msg.possimerr = 0.0414552716295;
    msg.converg = 0.0432875183605;
    msg.turbulence = 0.340689590707;
    msg.possimmon = 65U;
    msg.commmon = 219U;
    msg.convergmon = 92U;

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
    msg.setTimeStamp(0.732536728671);
    msg.setSource(42352U);
    msg.setSourceEntity(127U);
    msg.setDestination(5618U);
    msg.setDestinationEntity(71U);
    msg.possimerr = 0.385618441023;
    msg.converg = 0.183880889798;
    msg.turbulence = 0.509394167642;
    msg.possimmon = 170U;
    msg.commmon = 92U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.797814631009);
    msg.setSource(54683U);
    msg.setSourceEntity(101U);
    msg.setDestination(25535U);
    msg.setDestinationEntity(134U);
    msg.possimerr = 0.422643043085;
    msg.converg = 0.345443987537;
    msg.turbulence = 0.367242913996;
    msg.possimmon = 243U;
    msg.commmon = 20U;
    msg.convergmon = 32U;

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
    msg.setTimeStamp(0.699882393121);
    msg.setSource(35412U);
    msg.setSourceEntity(199U);
    msg.setDestination(51404U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.0607683442157);
    msg.setSource(4346U);
    msg.setSourceEntity(177U);
    msg.setDestination(51996U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.330312144745);
    msg.setSource(65438U);
    msg.setSourceEntity(227U);
    msg.setDestination(40438U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.506465268079);
    msg.setSource(63486U);
    msg.setSourceEntity(110U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("UKRESYMZIHASAXIUKPCRPTIVXYXWTFSVWUZPHJFPYSJFDKNRODWZFKSPYXANAKPXVVRULQKUJJWUXDDLTJGRMRZIFMLLOEEZAIBOCISJKQVBCNPFSQNKECDWYIWGJGTBCAIHUZZAIVUBLHQSPHJMQBNCVLZTUECAAGTHNDMFZBOXONTYAGPDLFRBPWBYBOINDRQXWCXGJCNOVETOEELDQLQGHQHOEJTNYWL");
    msg.description.assign("CYCMMZJPVZIYHGUMJSFSZFGLYGOQHPHQW");
    msg.vnamespace.assign("JKYPRFJSJKYPMANSTHPWCJRUCUAMECTVWDQXWQMXDEXUKIHTNSELJGKZYKGOVGQHG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LQWXZZJTEGRMYQGROPXKBVIXQJGVCWOFADZHVAXCDUCWMFRFJSOTSVXFUDPMYSTEPZGTDQGKRRCFGVSFA");
    tmp_msg_0.value.assign("ADKISQCDFZYIRPMBVDXBMURORFJFCZCYEINDKOVRGLLGFUAYHMGQEERDMZRHXJPFYGYJVWX");
    tmp_msg_0.type = 33U;
    tmp_msg_0.access = 234U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GKHTQQYCTKASHFHYPAPEFDCVTMEPVVMERJTLJNGSWTZLFTOWBIUIJNTLEWDNBRDQGPRDCJPKDORQZEFVUIUPQBFQISIXZOXNMFDKKSQMLRPLUBDEFMGJYQKNXGUSHCLVRAIXJMMOAZBJOEUCXBXUGNABSGTOUWDKADYHMCWHEPODNERYWSKRINBCXNGOCJPBIHKAZHXMLJUGILWFVAIOVZARHXGVZQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QFZTKGLZWRDSYEOMLSDYEYXNQTIDGTTXCNMFSFJACRRKGVDLJIVCBLZSGXGFMVAWQPAHKUYLUTZDGBKDHVCZPHLLRKQMAAFEBDBPMGNBIOSSIUJIC");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 23296U;
    tmp_tmp_msg_1_0.lat = 0.551158213269;
    tmp_tmp_msg_1_0.lon = 0.625746994576;
    tmp_tmp_msg_1_0.z = 0.230164531186;
    tmp_tmp_msg_1_0.z_units = 146U;
    tmp_tmp_msg_1_0.speed = 0.00778246933118;
    tmp_tmp_msg_1_0.speed_units = 248U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.124240364414;
    tmp_tmp_tmp_msg_1_0_0.y = 0.281725353574;
    tmp_tmp_tmp_msg_1_0_0.z = 0.323979199553;
    tmp_tmp_tmp_msg_1_0_0.t = 0.799648219872;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("LLWVIPNOAWGIHDOLRMUBMIZFPRKFNBZJXWBDHTUNLNBWIMOORAPYDGTIGSHERLYMEEPMLDOMCFGTKHUJJX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Reference tmp_msg_2;
    tmp_msg_2.flags = 222U;
    IMC::DesiredSpeed tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.738017136934;
    tmp_tmp_msg_2_0.speed_units = 154U;
    tmp_msg_2.speed.set(tmp_tmp_msg_2_0);
    IMC::DesiredZ tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.value = 0.112077168736;
    tmp_tmp_msg_2_1.z_units = 217U;
    tmp_msg_2.z.set(tmp_tmp_msg_2_1);
    tmp_msg_2.lat = 0.49082143338;
    tmp_msg_2.lon = 0.965946856544;
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
    msg.setTimeStamp(0.907423184668);
    msg.setSource(20829U);
    msg.setSourceEntity(14U);
    msg.setDestination(48535U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("POLQIACWZCCVEXWTQSDNZDGHFKUJDRPRE");
    msg.description.assign("BZBZKKLMAHQXUHMFLFJXLECQMPMSWKWQFPVFEWTJXOLONEBYYUIKBNHAGCDOXBPHSAKKVNIOPESWANDCBYFTKCULWGDKCCXHWNSEDFRASDULXVIBRJIGOTXTN");
    msg.vnamespace.assign("ROIZFAFJSKVGTVCLDOCFNXHFPKARPGJRVPIKRMBLIWFSNMLVXUOERDWJCTIDTUMIPFRNUZSVWMYZAMMWXYHNHZCTKJAZDJTUQWRUBNGQTQVPURIEGAKYHXHQBGBKELXFNVAIBSORBOXPHXMTHOSDRYCEBMHPXIKUJCOJMGNOZWBEQUQOUCYAOISTEEGLWKGLFGSLYALBZZDVJNJD");
    msg.start_man_id.assign("OFQRUICHZFTBVBQZKLOIXPXXRMJFJQDJNWCPKYNMHXOLHEBGHZJBUSYQSYVXDDKBTESN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UBQTULGUQYRWLHSVJLIZEFXQLNVKDOIBGUCXCHTXYKNHPWREKTILOXSZJUPQHAMGNHUTZVPACTRBDFSUBAMDTQYVNLOTHSRLCACVRWZWOPDADADVGKMMYACWWACQZCAJRCY");
    tmp_msg_0.dest_man.assign("OSMOGQYHMGESZVTLFZLICLEHKRYYDYFYDVDVOAHGRTOUNZBTFKQOPTBYHJZINKQOZMPBIYXWFMIOHLGGCUVALCWCGMVKSDNREBTSEOKW");
    tmp_msg_0.conditions.assign("EELALNJIBZDBMNWTNESUGXVKRYOYRRKAGVDNFWTXDMSTHRZOLIJXDDGPAGMMAZKECFKKVWUEYKXHOSCIQHMMARIDAFWDNCOJHELSFOSTZXNJRAPWIZBUVLXYITBLQBRWQNCJQSVAXFCORUWWUYCABNVFGOMQJACDRX");
    IMC::LeaderState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("WXCQVWGPNSNGGELOZGSUBAWXSRHHLMCESDNTPCSSILMAVGGREKSAPESURMTKCLYUWYRIEJRDZJMICPWPTXMZQWUOEMUNNOITZXFQYZHBEJJSXBVBKPRTCFGMRNIDZVAPWANYIQFHAKJDLMHTOLWNLYRJKHFUCIOZDJZMYFWZUKMOXGEGFHFFTBRTPPDDHBFYQTVJAXNOVLEKUKLNQEQFIQCKOBBJARHXOYDK");
    tmp_tmp_msg_0_0.op = 63U;
    tmp_tmp_msg_0_0.lat = 0.23892830076;
    tmp_tmp_msg_0_0.lon = 0.449851656512;
    tmp_tmp_msg_0_0.height = 0.557952595894;
    tmp_tmp_msg_0_0.x = 0.0280079014273;
    tmp_tmp_msg_0_0.y = 0.57916367833;
    tmp_tmp_msg_0_0.z = 0.910816417974;
    tmp_tmp_msg_0_0.phi = 0.363933028116;
    tmp_tmp_msg_0_0.theta = 0.0986107304804;
    tmp_tmp_msg_0_0.psi = 0.199440572283;
    tmp_tmp_msg_0_0.vx = 0.669341403668;
    tmp_tmp_msg_0_0.vy = 0.357708943849;
    tmp_tmp_msg_0_0.vz = 0.146461910243;
    tmp_tmp_msg_0_0.p = 0.982821264649;
    tmp_tmp_msg_0_0.q = 0.0423630925627;
    tmp_tmp_msg_0_0.r = 0.627044222209;
    tmp_tmp_msg_0_0.svx = 0.599660833526;
    tmp_tmp_msg_0_0.svy = 0.792007755604;
    tmp_tmp_msg_0_0.svz = 0.0376162892767;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.115344498342);
    msg.setSource(13911U);
    msg.setSourceEntity(99U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("MLICVPNWQIJPZUYRYDGQSENKRSERUUYDJVFQEHGFKLJBHIXUNJVIEXOKCLMOUHDTGCBDWXFACXUZHBAXWWTOQZTFKLMUHEWPINWFTOVTIGPVOSRKXVDFTISZBUFYA");
    msg.description.assign("OCBHODONUSGKBCHEOJXCFUVLLLBVHBEJSVIKNFQHZFREQDHJPEBIHMAZRTDA");
    msg.vnamespace.assign("SQIGLQDQDHVCFZODCIWJCASFAPVYAGQZBMRZFIHCLBKEGINLQRLSHXN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MZLQVPRWQOJUCPOSQQQOGULJSDEUAGTGZXYTLONLGRRFTZPKOLOBRWJMVXIWKDUUZGFWHJYBTPFFYZMYCLHSNWJWJLGRYAJBQFPCVKTANTKUSIMTLREYSKHETAZZXVXGRDVLIAEUBAROHTDGFFTDWHUBEHXPPRQHCWHIYDOYJNWCIMHNZKKX");
    tmp_msg_0.value.assign("NOXLCKAQQATMVRONLOVXTZKKLIVWJVDOCFGHSRCHMIIUIVUNMBLJBEQYKPAZKDGLJGCALQSTLRIMBGPKDZWOTFAPTEWPBXYUHFXT");
    tmp_msg_0.type = 108U;
    tmp_msg_0.access = 98U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HLDTKQAWHBOWHBHJXXOYEGSVOEGVJDPVONEJILRASHRWFYQWTZDXDVYZLNBLIIAJEYPPKRIPRBVUYUHNJBMVYPXZXDJLQKMHCSVRCEEEUCWUTFGGKWDPGGFGEMACNFOLPLATKBRQOSDNUCJFGSNCYGQIHTWPDTZFJBSNJIXKWTYPZXVHPMCBLUAKLAOMCSVXTOZZNIUMCCMFRIAQRZBUAGELOBQJKIIMSWKXX");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IJQWTWNIDWLJGBJZNBZBLLPR");
    tmp_msg_1.dest_man.assign("MGMNBRULLXSSIDNKQNYXHRFMOUPEIUPQAJEHTROBZDWYHVCTNAIBTEGISGHYGUPYVWMTOPMQWDGPXKJNTTHYXLLRBYZSHMZLDAFQBDEXYSSHOL");
    tmp_msg_1.conditions.assign("ZXQWSBPTVJBVLYQSNZWHGZEFUDWURPBRJPNYUVDKHTKICAXGORRQLJLJHTQHFDFPWNJTSMJQGCDWYYBPDSOXBWLUZ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Teleoperation tmp_msg_2;
    tmp_msg_2.custom.assign("GHAZTVXGODVHSOYEGAVJOHKXZJVPLTEMCFMUUHNUYNADJHKDEQVTJVQEBIYTASNLKFWPHEINSKOL");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DesiredHeading tmp_msg_3;
    tmp_msg_3.value = 0.705594060633;
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
    msg.setTimeStamp(0.272696241833);
    msg.setSource(64219U);
    msg.setSourceEntity(184U);
    msg.setDestination(19227U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("AZLPFXDYDAQQOFIPYFVQPSWRWVRCFWEFUKXZNNHXXUDYHGJOFEOCJTGUNGSSHHBGYXEPCDKVYDUSHNIZPPEAFBICMAALYRPRFQODBASIEJFEKJCHUQMMRZXBAJIAXTMPHGTATURKZWZSCLIJZGZRNDEKKK");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("AKSPIJRICPQBPZZVJCOASIYUTEGKMNWRDMUEXODAHFNDDNLNLHXNZNOTQNRVSMEELNIXLIWOFWPTLGRHLWLSOHUDTDPIGMCBDZAVWJQINLXRMYGFCVNEVEXJGOKZOFPBQYCUTHTQMAZ");
    msg.data.set(tmp_msg_0);
    IMC::DeviceState tmp_msg_1;
    tmp_msg_1.x = 0.918985755776;
    tmp_msg_1.y = 0.945349444985;
    tmp_msg_1.z = 0.872213433599;
    tmp_msg_1.phi = 0.217890196471;
    tmp_msg_1.theta = 0.227061850292;
    tmp_msg_1.psi = 0.80105703613;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LowLevelControl tmp_msg_2;
    IMC::DesiredPath tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.start_lat = 0.346728510425;
    tmp_tmp_msg_2_0.start_lon = 0.567268766494;
    tmp_tmp_msg_2_0.start_z = 0.676608354776;
    tmp_tmp_msg_2_0.start_z_units = 42U;
    tmp_tmp_msg_2_0.end_lat = 0.892805610266;
    tmp_tmp_msg_2_0.end_lon = 0.332546331085;
    tmp_tmp_msg_2_0.end_z = 0.75702387647;
    tmp_tmp_msg_2_0.end_z_units = 81U;
    tmp_tmp_msg_2_0.speed = 0.854999041726;
    tmp_tmp_msg_2_0.speed_units = 194U;
    tmp_tmp_msg_2_0.lradius = 0.442310120883;
    tmp_tmp_msg_2_0.flags = 239U;
    tmp_msg_2.control.set(tmp_tmp_msg_2_0);
    tmp_msg_2.duration = 44974U;
    tmp_msg_2.custom.assign("LIENESNMPDVDZWJRQFJIYCNPDWEQNLALCTDGPVPAOKDNFFYMNQMUFMBESWTICJZBAEAQPXUVAJRXODBVBKQOISHGYWPGTHGOYJLBHHLIK");
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
    msg.setTimeStamp(0.00279992512371);
    msg.setSource(64339U);
    msg.setSourceEntity(19U);
    msg.setDestination(20343U);
    msg.setDestinationEntity(250U);
    msg.maneuver_id.assign("FOGCUZTIVNGLBJDSLNRWJLQFHEMYTPZWSHMQODRGSNCZLMEIYFFMZIXLOHMLZYCAKGRIZBJPPJTDFXPAXYFWBWBTRKMWAOADOTZDDDXHEOQUNSNTXSKQMGJMPVEGVTSCSIDUHJDVSKCHQRVCANPOIAZ");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TXKKHAEQHQNPSHIONIFRIXYHSEAZOBSPUCFWPTMUBMDGVMCVKYEKKJTINUFUZOGRBNMYYZAWZHJEGLPPAPXBTYDZOQIOTRVJHLJAZUCRSTGQHRJXVUVAVLURDVPETXJLWBYOCDCSHPXVNBGWLDMAGLNWOFOKTKFMMDZJSPWMVJTSECNBWYRUKWGSCEQJLPDMQAZJWQSUIRMHDFKQEIGSQFAHNIY");
    msg.data.set(tmp_msg_0);
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("NIANXPVIVOWFEWKCSRYLZCFKGWEJULDMRCJJUIHGRILYXHLQTUVPTISLGMTKNHMJIQBCRNRVLDXLFWASZTFJWBGPQLQNDWMFVWRNWNAJXFROWEHYVSKBAQOUPGDRKJZDGEHPTZMBBKMCZSYGCKC");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("ZQVOWKSJKFILJFEYNCQLWTTAVMFMAYDNEIZHFTXSAEBRADBSHKNMBXTWBQRPZSMGLGLKLKHVAOGXIIFPHCGOITXXYAUJJEIQRESCDCOEUVTOOGZNHVDQWJZMFBZDCMORKSNAPWFGHPTHIBBVZNIRPPIHKPJTEAPLBUSKMU");
    tmp_tmp_msg_1_0.value.assign("FBUCKMQFTLIJKWQUPKIGZDVNYAFDITNFWKSUYWOMHPMYLAYVQRCWHBMLSBAGSUXEJLAOWGOHMJQJFNQLWGCUQOLONXDOZEDDIXVIXMJSWTNIZRNHBYUIOSEDCCXBDIKGZYXORPAUCVPPQZBGRACKAFQFNZZPMBWFQZJIXHTGPENTKMTRSNEPRTLSGBERXYRTVUJOVEIPCVLDHZLMKWHWKEAJVFHDRBO");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RSSI tmp_msg_2;
    tmp_msg_2.value = 0.70915282037;
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
    msg.setTimeStamp(0.627123172618);
    msg.setSource(46247U);
    msg.setSourceEntity(243U);
    msg.setDestination(58678U);
    msg.setDestinationEntity(212U);
    msg.maneuver_id.assign("ZRDRNQXBGOOYBUW");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.840858445231;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 20514U;
    tmp_msg_0.custom.assign("GBQBBFPQLRJYARKVNTEZTSICRAGZEPFTLVFWJQKOCILBCWTPPDKOKLTRPPAOYMMXCHFDDJTRJEFGGMUUJTNPOEWHINNIMYFLZEEIDULODCASHMLYZNBHBLIOEYIDMCQUJJTHYK");
    msg.data.set(tmp_msg_0);
    IMC::ImageTxSettings tmp_msg_1;
    tmp_msg_1.fps = 33U;
    tmp_msg_1.quality = 54U;
    tmp_msg_1.reps = 178U;
    tmp_msg_1.tsize = 191U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CommsRelay tmp_msg_2;
    tmp_msg_2.lat = 0.562144728354;
    tmp_msg_2.lon = 0.97213563906;
    tmp_msg_2.speed = 0.83516989524;
    tmp_msg_2.speed_units = 195U;
    tmp_msg_2.duration = 56944U;
    tmp_msg_2.sys_a = 45893U;
    tmp_msg_2.sys_b = 33748U;
    tmp_msg_2.move_threshold = 0.0651848717726;
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
    msg.setTimeStamp(0.826613185516);
    msg.setSource(31769U);
    msg.setSourceEntity(125U);
    msg.setDestination(54950U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("IKDBJIXDRWWCRZONNJEPEMLFWGWMATWJQZCTVBRVDAUMLFKGJOPOGDBJAHCTKAJVBBFQRQTLPTVBZNTIKQIRNBAOFTRSNDXWUPDIQOYAKEYUMBJIYEVSEHQMCVOZPFSLRRYNNHQXDOUOFCZPGICRYGCXKQSLSUCENHSXSWVXSVWMAXEPGGGUNEK");
    msg.dest_man.assign("KDVBKZLIMHDPGXGBHLFBALSXZZRGLFWIJKIFQPKLPYQWCJVJZZUJFXDUQTTIHUFUJWMJDHMOECQARPYSQYCYKSSOZMTITWYUEAEKOSLCDFRVPHAYNUQGOUADVHXCAZGIZFEHLAPAJJZVESSCKZAOVYLJGK");
    msg.conditions.assign("AYIEPTTSLEHDASNCKCNZHBNCWPXXKQT");

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
    msg.setTimeStamp(0.147411506249);
    msg.setSource(15590U);
    msg.setSourceEntity(10U);
    msg.setDestination(15165U);
    msg.setDestinationEntity(59U);
    msg.source_man.assign("BTFJVSDVHFSAVZKKXRPTKDBEPOJEVKOLKFYMOGBICXQNGNDQPTHIJJRUTPJQKUBCLFYMAAULDEBLGWWOEJSDXNUZOR");
    msg.dest_man.assign("HJQXHGXGVQNAOYDICJASMANQPEEOJRFIANTLBLTVYEELIMDBIRWANMIPEOQFUWERSHUOFDWPZYUHBLMKKICNVTUGJUGHCOODWOMULMKAKWFHSFUGXLSVOBYZCNQKCMIPBCWW");
    msg.conditions.assign("XSOOBVKECQNKMVAQPNZSTKAAFJXMWTJLFUKIWZMBRYRYRAXVXPCAVAFHRZUZAHSCYFDQUIZPSWDKIAVQREXZQEYQWHYIPTBJ");

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
    msg.setTimeStamp(0.0025243472717);
    msg.setSource(58497U);
    msg.setSourceEntity(40U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(154U);
    msg.source_man.assign("UCFCYTKXLFFXUEMIJMOTKRRXKRPQHSUUWMVOYABIFCFQDKOOFYXNBWLYDVDPGCCBJXJQXKUZJUMWNLPKGZYJDVHAENZPGRMULGPTZQETMJKBYBJCKEEFNFEMIGXCHVVXAARXIRJQNWTRVITESTBHGDYRXCVWLTUAFEQOPKRZAQWKLYMSIIPDEZAGBFPBZNHCBAQ");
    msg.dest_man.assign("UKCOEFGDRUBEBPGRBATWNUDVDVYWVBNMUCOQXOCMDLTGAJODWFX");
    msg.conditions.assign("QIYGSAFOZNEDAUNKKBFTHAIGDWYVMVXXOVPCXMULAYJZGOHNHAHKNIJGJIERUCPJHJISNRSTRN");

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
    msg.setTimeStamp(0.11927562392);
    msg.setSource(55235U);
    msg.setSourceEntity(66U);
    msg.setDestination(35664U);
    msg.setDestinationEntity(30U);
    msg.command = 231U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QBKPBECHSWDGVVRQPAUEWWVWIAJKLQXVYTRDLBVFAZEUXFTAAJJHZZSSOVPFDPNCRLJIYJZLOHXPOGKCTLJKJWDUAXBROFUBLBGSURQJMOIFSAHSXNQEHGPCONLBYBIIP");
    tmp_msg_0.description.assign("UMCKWTEOMXWYEJYWJOHNUFQTAIBQFAZIDKVQCXBPNATCISNGAZPDREEHDDODGFSJPQHWLODINBSRYYUZTUCQFCMQZHJPRPXSOULXVBVQJEHPVGGDKJHKVLIFZXROKXLUTWM");
    tmp_msg_0.vnamespace.assign("VWKFHQZBUBMTJXDTXZRELKZNGKAASMBXAXCGPPFEJGIUDMWSVWLUDPNURSEXIADTWVKAHGMFZOQJMOSYBLMUHMNQPIPWEIXYKBGOTRFREVERZWNWDSWVRLOWIIEPADNYYIYEEHQYUSXTVTFASHKGRRVOVFOYIQFNQJJOGDOLTABYYAIHWBLLXGFJZCNBPANCHHDXSJCMOKUMBZCVGCPTDSQZKCLKNTXOCUQLRZVUZSKUFPJQRJFYETIDPCQH");
    tmp_msg_0.start_man_id.assign("ZBOHNDOOUFELRJNPSOKQLRMJDEISTHCBVNDGTPOTUMTXCEFSNPMUWLJGYEZIKRVDNQBBNXGCMHJSQFAMMWQXZYAYATIYLTPNBIJPQDKLHFGAKRVMCFL");
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
    msg.setTimeStamp(0.00476901608713);
    msg.setSource(39453U);
    msg.setSourceEntity(170U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(13U);
    msg.command = 240U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QKTLTITJRTBOQIGYCYAOLEHTUDRYKSEMPOPYYHSZWAHVGDEQUWVDCWAHBTSZZLGFPUBYZQUEUEGQZSNJNVEVNKDWFJMNHOM");
    tmp_msg_0.description.assign("TZCGWQQWDAZFPNDOZLXVMRUCTOBXBWTGNEMCFKWYQMXFGALDYJHSPXPHSCKMKWHRRMAXRXGIFSNLMKUWRESOWCODOJDCIZOSUHNCQVTNEIALGMUIHSKBNOEDJSOIBXJWDECYNXIREKNUFBVHXGKQSYPULMPULPEHQUZVYGNIITZFJ");
    tmp_msg_0.vnamespace.assign("UFPFJBGORKSYRRFXNCEXYZHKBWFXZUDCYHSNETEYNAQFQXJXOEOBCJLGSCVYIKOTEEMP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IBTXGYLZKRJIDYXPVDNLBNLBFQEJGZVWRWTDYJZQQNZKNGGU");
    tmp_tmp_msg_0_0.value.assign("AZXCLHMSWXSFAJAFUSAGTWNFAMEGVCUZGNHINRQ");
    tmp_tmp_msg_0_0.type = 8U;
    tmp_tmp_msg_0_0.access = 26U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CGLFQFVGXSEMPJXWTJVAMEGWZBEMTTINBDJSRVNEXICRDOSTDLFATGSNYXCKHMTZDWWZMELFVOLPIJPGOUZQITQVYNYNLOFNOCKTLDUAUXLGUTQCYKEYOCWHRCQSFWTUBCPCBDBWWHOXSENHUOPAGEYFZRBNQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XQIQRTFQWMKIDNVCCUWGOZPOTXAYVEFDDPNTHRNGPYRGOIMDJSAWNHXXNWPKBVYQBZVUKVBNLFJACRXJFOKOEKSJSZRKBSPMQEWDSAOWYHJKUPPMYSYAHZATWUKLIEVRUCKFIWOTPQEBWGVMABTEHHCRMSQUOFQDZLYVDUZNCIEATYJRZVINGEJPXCNMBHZVRITJDFOKUCJESGH");
    tmp_tmp_msg_0_1.dest_man.assign("QMFQWWMOGJONVEHPXSUEBSDBSNHEJUKSRETFRSRPDOOWDMSVNQTMTEDKKTHQQXBIXGIOMGAEXKDLVXZKAZEWUMCNNBAURMFIIPFHWVGPVWYSHDEGLLLCYZ");
    tmp_tmp_msg_0_1.conditions.assign("OVEFCPJHFOMKZIAZSOJMFUHUBRHOEWDHNEDHWQUGNZRCZZVHPWLITBIMRDROAEFAXTVPQDACKVHXZSLEAPIIGBIHNWOYYYLNJLWZ");
    IMC::SessionStatus tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.sessid = 1865193915U;
    tmp_tmp_tmp_msg_0_1_0.status = 89U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EstimatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.789233229456;
    tmp_tmp_msg_0_2.lon = 0.332355670336;
    tmp_tmp_msg_0_2.height = 0.195881655063;
    tmp_tmp_msg_0_2.x = 0.594227853092;
    tmp_tmp_msg_0_2.y = 0.384719510502;
    tmp_tmp_msg_0_2.z = 0.927288748701;
    tmp_tmp_msg_0_2.phi = 0.422198999203;
    tmp_tmp_msg_0_2.theta = 0.173902546925;
    tmp_tmp_msg_0_2.psi = 0.0538367923997;
    tmp_tmp_msg_0_2.u = 0.529337104741;
    tmp_tmp_msg_0_2.v = 0.871740992921;
    tmp_tmp_msg_0_2.w = 0.0403494531626;
    tmp_tmp_msg_0_2.vx = 0.822698682739;
    tmp_tmp_msg_0_2.vy = 0.309117386499;
    tmp_tmp_msg_0_2.vz = 0.692431469958;
    tmp_tmp_msg_0_2.p = 0.671573545095;
    tmp_tmp_msg_0_2.q = 0.374159612727;
    tmp_tmp_msg_0_2.r = 0.485455377468;
    tmp_tmp_msg_0_2.depth = 0.610163885437;
    tmp_tmp_msg_0_2.alt = 0.485028725832;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::QueryEntityState tmp_tmp_msg_0_3;
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
    msg.setTimeStamp(0.967489869339);
    msg.setSource(50984U);
    msg.setSourceEntity(252U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(200U);
    msg.command = 149U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CADHXIDHZVTATUTWODLAEYHICYTYDMWWSXR");
    tmp_msg_0.description.assign("VBQLSIAQLYONTDGAKUWRIELJTRNFDPIZHFEQSUPQXXA");
    tmp_msg_0.vnamespace.assign("PMGXLWEDWIEPGJFBACQMFGYDNKSCDAPTKJHYGRPKVVMMGORIWTOHNNNAMNPBEZUESFZIEXUOZPZOYLSP");
    tmp_msg_0.start_man_id.assign("DZILGUVXVVQWVDGT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NIASVMAZXMPOCYXQDCKCAQOTJQKYKZVKMEYTIXAARMSRUHKOREJSBHSGDOFRUGJT");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.547075501891;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.700118757226;
    tmp_tmp_tmp_msg_0_0_0.z = 0.829287188337;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.599900787082;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 171U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YHBGJLWYZAXPCBOUVGTZGDUJLQPXMVJJRLYNFOZQEIHFBKCRMVDNCBUPTCAIPVPQFIBMOYDTJIDFFTQWIYEENMQQVQHKCXNKOSKVDDVIBYLWWRSNRUGYNFDIQAUEPLHSLMSWIVEJIUAXZNRAGXJRZCCFYASKHWBYPOSXRAJXTHRLZOUTOMOGKZHCLTKOKUJQBOGNEBMUPXL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.group_name.assign("DLOMKSPIEOOZJYLXKLZBUBILMINQBGLTAJXKTNPXDDF");
    tmp_tmp_tmp_msg_0_0_1.formation_name.assign("ILALLSKBOWUBXFGAKTAPCQFJTDSPPSJRYZLHSPWGDOQJDRZMHNOBVWMDZFOZQJFWMYELBSOTLSCUVRMQEPPHFPMKUEEXJGXLULNACRV");
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("PIJTRYUNNFISDZAPWLIUYIOYXJQQGBGLVTFRMPBUPJRCWXZVKKJNCKLBWSUYOQXZOMEPDJSGVBBVNQAKQHDPDEQCYCEGWTJQOCILMWDWFBHXHYUIUBIZGFMKHMAXPKZYXMDTIWKETHUVDWFOHGDDELTQRAFACFZXNFOMJIKNYSIZVAANLHOVRGCVMRXNBFJLASPCSXRSTOEGOZSZKCUEMHWHUYWNXVUNTTEHLF");
    tmp_tmp_tmp_msg_0_0_1.description.assign("KBOLINPCJHKTPFBCADQPPLZRHUQFLAFDJVYDPJGVGCKYRYXMLXAYOQXSGBXRHFT");
    tmp_tmp_tmp_msg_0_0_1.leader_speed = 0.142571756526;
    tmp_tmp_tmp_msg_0_0_1.leader_bank_lim = 0.691097032756;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_lim = 0.107741550618;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_wrn = 0.607315692184;
    tmp_tmp_tmp_msg_0_0_1.pos_sim_err_timeout = 10024U;
    tmp_tmp_tmp_msg_0_0_1.converg_max = 0.00638793298809;
    tmp_tmp_tmp_msg_0_0_1.converg_timeout = 41898U;
    tmp_tmp_tmp_msg_0_0_1.comms_timeout = 13836U;
    tmp_tmp_tmp_msg_0_0_1.turb_lim = 0.112566173499;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("CJZESBDROOVLGFXAHOYMHNSKCXVUJQXQDRNRSRCTBBSIVBVZKZGOYVIMPKSGPUQGJUKAFY");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZSWNONJAPJYOUSSUVHHWAAFOYEVRYMIZXNLGQEYIXIVOFUDCMGWWALHIPIXRMYNUSJBZTZUHXZPCXKVTNKXNYTXQLGKG");
    tmp_tmp_msg_0_1.dest_man.assign("KDONGDTSNVJUMTGYECRQAAWAQTOTUNZDUXVZFQJKZUCZSTJFMTGCBQIILERKHNLASNSFIBRWGYYNPZLKWGJEVCZCBJYDKESHWKIVOCQEXJLXEMPXZADOHEZBOMXOGIBRDMZNIDSUP");
    tmp_tmp_msg_0_1.conditions.assign("XVBCXNPBRZCMIWYRYGQOCGBFNRAOTQEILINBWEIKLEPUAUGNSHNOKHSQTJLATKHDGEIJHDRPVJZMWZGTWOHEYBLTSXYVFXZGIEIHIDAJXTVZFRDMCOJCTXAGFCVDQHZYZIEDPRSWBFSFQLY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DevCalibrationState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.total_steps = 22U;
    tmp_tmp_msg_0_2.step_number = 28U;
    tmp_tmp_msg_0_2.step.assign("AOVEJVSBNGRGJDVQXQXROCAWYATBZSLPUFIWXGHDLQTNGQFJYGTJQNATESKGFLGPUQHXMPUTCEKPRIVLXZBBMIZCGXBCBPVPKFKQCOBUMKNOFOVTDMHKJIYOBXFTEMRQWHZMCDWYYMYPWMLINMXYBAUQAJCKBVINKRJOYURUDNZEFZPLZZWPZTELLSCSHHMYCODXGRRESUUWHRVDKIGH");
    tmp_tmp_msg_0_2.flags = 240U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.473875245567);
    msg.setSource(29855U);
    msg.setSourceEntity(202U);
    msg.setDestination(17909U);
    msg.setDestinationEntity(140U);
    msg.state = 119U;
    msg.plan_id.assign("VXDHSBMJNKIMRSPIEJTMIQRFMMKZCHREAEKKPLNTZKWJFHXYBXBCWLPDSPFZKCTVKTYTFWPHZBYWVGXKDCPDBOUNAUDXCUBRFLPSMJEEEQNPTIYAXMMWURSLWOCBVQFCSZGKFGWQOIHOZRUQGODUIYETUVZUZAGIRLSYBHHOCLLATGIDPQHEZAOOYSTGAUNXVQLJHLSMUJRVXVGNCNTJZKEYNYJVWP");
    msg.comm_level = 151U;

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
    msg.setTimeStamp(0.326902850424);
    msg.setSource(31939U);
    msg.setSourceEntity(208U);
    msg.setDestination(43309U);
    msg.setDestinationEntity(84U);
    msg.state = 43U;
    msg.plan_id.assign("EPZRTOAAJQQGILYWCGSFJFPFIODFZMWHPOFIMOBPVMJSHVNNHZYYZWMUMSJTBIDQEUGRDHJOIZVCDKKAC");
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
    msg.setTimeStamp(0.0942188877726);
    msg.setSource(19064U);
    msg.setSourceEntity(211U);
    msg.setDestination(57768U);
    msg.setDestinationEntity(17U);
    msg.state = 83U;
    msg.plan_id.assign("FAZBEPOTNGHLFVBNKIBDHDNRHJFZYTEPLLSTBLDAHPFSGWOKSHNDAETJDKIEYSBNAOWHIYXGMXWCQEDWIRIQMRCSMRCCIDKLLZMKRJUZZQAMWUGFJXPGCJGJMFBOIPGRLHWYASXCXFBNWEP");
    msg.comm_level = 19U;

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
    msg.setTimeStamp(0.558789156189);
    msg.setSource(25342U);
    msg.setSourceEntity(33U);
    msg.setDestination(42025U);
    msg.setDestinationEntity(2U);
    msg.type = 50U;
    msg.op = 155U;
    msg.request_id = 13841U;
    msg.plan_id.assign("ACPISWVDHJECRFMTBUJULOCQANQBYUZNWXLYPPEMUIXJIBGIEDUIVIOKSDJRMUZOATNZSETGYHSIFQAEGAZHMTVOYLXGHBLVMPAUHOJLEBPDZWFOTSQCRFFPPURNGDQQARGWG");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.629725517586;
    tmp_msg_0.m = 0.631053141055;
    tmp_msg_0.n = 0.0858146206312;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZBHFPJDBLCFAMFKLTEUGXKPDSFFIMQRRHHGOYHYTZEPTSVVENVQYMMBKFEREOGWILXHPZBDKGLBNJYFINIMFQDPCUHXXPVQUYWSRAWLJLUNZUZTOKSVIDVRMBEKIPPTCZRQBVNDHCQOYKXSDAHUYUWORQSSACGMSDJNEXTZXSLWBMXNEPCKAZZTPLAFUHWDEJODGYJORYCIOTMNLXSTJCNYGKGWCIGVCRXUJTAMOZWNIQFOBIAVARQLHJQ");

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
    msg.setTimeStamp(0.121274285593);
    msg.setSource(31755U);
    msg.setSourceEntity(156U);
    msg.setDestination(15910U);
    msg.setDestinationEntity(71U);
    msg.type = 223U;
    msg.op = 86U;
    msg.request_id = 53781U;
    msg.plan_id.assign("XRKSICGEEXLKHAUSTCGPASEALHMNAEPUZIJBALDJFIWJHMSGJDQLRWKBJHGVAZMHBSLRNTHCVKTFFVMNWPRPJRIVOVSOUMVEHCYDTFUKDBOUFIGVBCB");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.frequency = 4162322874U;
    tmp_msg_0.min_range = 56711U;
    tmp_msg_0.max_range = 41900U;
    tmp_msg_0.bits_per_point = 59U;
    tmp_msg_0.scale_factor = 0.0934286694903;
    const char tmp_tmp_msg_0_0[] = {93, -63, -67, 26, 91, 1, 96, 36, -57, 100, 33, -32, -125, -84, -65, -88, -80, -109, -59, 42, -104, 77, 80, -58, 91, -7, -108, -74, -56, -29, 115, -79, 126, -60, 90, 58, -60, 109, -50, 72, 61, -92, 59, -59, 2, -37, -4, 27, -118, -72, 66, 126, -46, 31, 3, -92, -39, 86, 88, -48, 51, 72, 60, 30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGEYNEBZDDVFRCBPTCIGQHQOHMZCRAXOCUHIPAC");

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
    msg.setTimeStamp(0.116605810742);
    msg.setSource(10890U);
    msg.setSourceEntity(99U);
    msg.setDestination(28230U);
    msg.setDestinationEntity(141U);
    msg.type = 142U;
    msg.op = 189U;
    msg.request_id = 36816U;
    msg.plan_id.assign("ULFQUWJOUYXHBJKTYUIITDPHM");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 111U;
    tmp_msg_0.frequency = 1586837393U;
    tmp_msg_0.min_range = 49792U;
    tmp_msg_0.max_range = 48027U;
    tmp_msg_0.bits_per_point = 44U;
    tmp_msg_0.scale_factor = 0.649581781641;
    const char tmp_tmp_msg_0_0[] = {-63, -2, -20, 60, -83, 25, 3, 17, 74, 54, -102, -36, -110, -55, 20, -53, -91, 124, -65, 82, 79, -122, -79, -2, -42, 108, 113, -53, -56, 3, -32, -118, 27, -45, -105, -36, 29, -47, 26, 46, -52, 86, -47, -22, -101, -34, 122, -7, 101, -92, -67, -41};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VBJSNFNUECSPKTIYGRUQUCPMSJSVTQWTWNMOYXPRL");

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
    msg.setTimeStamp(0.489227773619);
    msg.setSource(16928U);
    msg.setSourceEntity(121U);
    msg.setDestination(38620U);
    msg.setDestinationEntity(100U);
    msg.plan_count = 42999U;
    msg.plan_size = 3791061686U;
    msg.change_time = 0.593248043461;
    msg.change_sid = 62836U;
    msg.change_sname.assign("ICOGNZIXOWNKCRFWEOMHSHAXYUIRGGLLZSKZMQYTWSTZRIPJURAJBJAWLREDUJVNLIOSLZWFFNKSIRIVEQEGUTVSLVCBLUXRJSFXIBMKQGMSTZHGNIOAQNPDTMDMJSNHRGIXBJVVEHWFECTMYRDOYAYEKKQACXVFYCQKBFVUZQCOLHMWGYVPPHESAMXHPQUGDLVGXCPFDBBNADKJXQCWFDHZYBJAABWUHXEYD");
    const char tmp_msg_0[] = {-57, -70, -80, -79, 92, 17, -74, 9, -70, -15, 20, -107, 44, -102, 80, -124, 64, 0, -104, 36, -109, 10, -125, 69, -80, -28, 124, 42, 46, -90, 62, 65, 28, 86, 43, 46, 63, 121, -66, -16, -109, -45, -88, 25, 119, 43, 89, 86, -42, 109, 51, -1, -22, -19, 57, 66, -68, -84, -29, 94, -39, -35, -104, -65, 62, 124, -98, -108, -113, -114, 33, 58, -21, 27, 21, 56, -65, 74, -4, -106, 38, 52, -12, -33, -56, -127, 24, 16, -46, 6, -86, -120, -16, -114, -10, 28, -84, 59, -111};
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
    msg.setTimeStamp(0.601926940918);
    msg.setSource(6157U);
    msg.setSourceEntity(235U);
    msg.setDestination(45247U);
    msg.setDestinationEntity(204U);
    msg.plan_count = 14382U;
    msg.plan_size = 165827321U;
    msg.change_time = 0.718906491487;
    msg.change_sid = 31033U;
    msg.change_sname.assign("TECSBVPKHSNNHYVHWIURWHNZYDXETWZ");
    const char tmp_msg_0[] = {50, 21, -27, 102, -79, 0, 108, -113, 83, 4, 87, -60, -72, -30, 41, -38, 62, 69, 108, -53, 115, 114, -119, 49, 101, 113, 105, 24, 35, -52, 70, 109, -120, 79, 34, 95, 39, -40};
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
    msg.setTimeStamp(0.92801556087);
    msg.setSource(39506U);
    msg.setSourceEntity(34U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(136U);
    msg.plan_count = 6625U;
    msg.plan_size = 2285068051U;
    msg.change_time = 0.862263168959;
    msg.change_sid = 3739U;
    msg.change_sname.assign("PMUHZEHKLKOBGDTCHJQFHIVBMAGWSLAPTNAZVSBEYQRRXGPZPMATHCOLCDADDSLNKMJPHWQJIJHVRAEFBDGBUEXVQRBMEVCGJDLGNJJZJCSJQAKPQNNRFCTRGUSO");
    const char tmp_msg_0[] = {-103, -77, -1, 110, -99, -73, 16, 77, -53, 86, 74, -86, 107, 62, -27, -49, 74, -70, 27, -39, 80, 75, 85, 38, -96, -122, -29, -35, 102, -71, -43, 97, 19, -40};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CZJITYWIJXJILFNZSVBGBVZZYBPAICTWGOOLHLFDJMTPRCDQNVNSPTHLRQVXMWUDOAUFQILQJDTEQOXSSKXXIOUFBSOHTZRVYJYZIUKKKWHLVAQN");
    tmp_msg_1.plan_size = 52296U;
    tmp_msg_1.change_time = 0.513423211115;
    tmp_msg_1.change_sid = 62028U;
    tmp_msg_1.change_sname.assign("DVWPXGIWUORYNXMLHJXIPECXCNJMIKHJMRCUSBV");
    const char tmp_tmp_msg_1_0[] = {113, 34, -36, -126, 93, 7, 77, -11, 93, 73, -98, -48, 40, 113, -107, 110, 121, 36, -68, 118, -89, 66, 10, -39, -40, 64, 59, 52, 69, 34, 56, -31, 18, -84, -95, 123, 98, 18, 20, -20, 33, 46, -37, 4, -30, -111, -54, -33, -91, -112, 125, 34, -93, -105, 57, -32, -79, 58, -82, 114, 117, 63, 41, -42, 38, -61, 27, 120, 6, 112, -51, -82, -8, -117, -84, -98, -83, 96, 3, -120, -26, -78, 54, 41, 21, -41, 95, 108, 126, 74, -47, -107, 32, -90, 75, -3, 76, -39, -12, -77, -13, -88, -45, 51, -40, -32, -16, 26, -87, 62, -62, -75, -117, -28, -78, 63, 69, -111, -41, -95, 123, 59, -72, -108, -11, -34, 61, 64, 72, -24, 119, 2, 79, -53, 66, 77, 111, 38, 105, -42, 1, 125, 114, -105, -7, 76, 109, -32, 33, -65, -51, -52, 120, 4, 90, 73, -112, -27, -26, -122, 108, -46, 40, 63, 44, 60, -40, -43, -98, -51, -59, 16, -79, -49, 117, -44, 115, -123, 79, 4, 39, 119, 83, -20, -128, 49, 46, -23, -111, 115, 89, 94, -25, -110, 3, -84, -18, 27, 59, 10, -104, 31, 100, -48, -27, 118, -16, -73, 94, 103, 57, 53, -114, -116, 26, 40, -20};
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
    msg.setTimeStamp(0.201639724787);
    msg.setSource(62397U);
    msg.setSourceEntity(145U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("BQLJFHPTQKSTFJAGOEPWGZUFCPEMNIYOTVICALSGDRVIDOVETRYNUOTLGNUXSYMKBJSLXGGKJQCWEEOSRRMQIKUPBFAHFQUSQHXXOBYDNDMBGKPYZFOFG");
    msg.plan_size = 29015U;
    msg.change_time = 0.0646190580795;
    msg.change_sid = 52407U;
    msg.change_sname.assign("BRTDWHULLXFETMBWKGPVHSSUFJZRDNMDJALLY");
    const char tmp_msg_0[] = {4, 98, -61, 111, -78, -77, -81, -62, 52, 116, 115, -11, 84, 106, -83, 46, -76, 32, -94, 1, 86, 85, 36, 60, 61, -107, 24, 67, -53, -72, 68, -107, -14, -31, -24, 51, -67, -48, 113, -126, -44, 6, 22, 97, 29};
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
    msg.setTimeStamp(0.632251499495);
    msg.setSource(62305U);
    msg.setSourceEntity(190U);
    msg.setDestination(38684U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("GPRMUGBGTYPDDIJASMUHVZCSXORKQAQTWGNLZGRJEHTJECRPAGWQRMJDQYZVRVYNLDLZOTPFFOBSRPKTXSVUDOICEKIQBLSEDATCUUCQMLLNQBIWGFLRBPDWZPDYEABBENMCKLXPYXBJSALWCAWWWUGMWHSNMSIYJJEKXFUYHVSAOAMMQJEXTUFOYXIIPCUTOHEDKNZZYHMHHJFFOVL");
    msg.plan_size = 20469U;
    msg.change_time = 0.149460893671;
    msg.change_sid = 13346U;
    msg.change_sname.assign("QLIOZIYCXBUKDDDFDFYGRMLZHTBWVNGLSZZMPCRCOEHCKNAUGLKRQWWIWQHDEMKJXBFLASMJBJSBIMLVIZPMNZZBIUWNAQQYLVZHSDXIVPFUJZQNGEWTJETSEQJUHFXMXBSAPEVFKUOESKZHYJHTNUTUCUAHERHRVYFAKWWNAVSOFGVPQNFTYANABQSCOEPVROPTLQTWWXCPRDHVIYCGOJIRJDDPTUPLELRMCXDGIBGX");
    const char tmp_msg_0[] = {-21, 40, 94, -77, 82, 79, 121, 70, 103, 88, 56, 21, -70, -72, 120, 25, 113, -40, 8, -61, 57, -38};
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
    msg.setTimeStamp(0.827314338186);
    msg.setSource(36563U);
    msg.setSourceEntity(192U);
    msg.setDestination(43118U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("OTABJRDKYZQSVPJZJEFTDNPHZFDJVQISMSJLTWARTCBNAUBUMZMXXBZYDAEMXFEXNYQKVHVBRGHOVTGXYQXAGUDTEPUDJFICZQACYILIBGJACRFPVHXJUSORWZAKZMBOCVWHFXGNLAWEYYOQRWNFGRSMKFCKKSCANWCQMKLYIUEJKDBZOHQKYONNIFRGWIOTDZQSGLT");
    msg.plan_size = 54889U;
    msg.change_time = 0.213208067523;
    msg.change_sid = 6693U;
    msg.change_sname.assign("SLKBIRMYLCYOCSRJKTKWRTAGWPIEBKARSJZDECHWPPVUABGQITEHNDZPYSWZNIEXCFVXTUERJINFUAMFVSCOHPOEFJLTHVLR");
    const char tmp_msg_0[] = {-86, -74, 81, 14, 90, 61, -68, 30, -58, -93, 88, -119, -102, -74, -121, 15, 2, 92, 120, 51, 77, -105, 92, -117, 7, 0, -60, 17, 67, -116, 4, 116, -36, 31, -98, 63, -16, 3, 112, 96, -16, -8, -64, -105, 87, 32, 114, 21, 9, -110, 84, 102, -57, -128, 92, 11, -69, 23, -10, -120, -114, -11, 106, 105, 22, 89, 3, -82, -67, -77, 81, 75, 15, -96, 78, 83, -26, 76, -19, 110, 117, -97, -23, -95, -81, 80, 73, -4, 71, -94, -31, -48, 102, 24, 93, 106, 120, 43, -6, -23, 18, -52, -110, -23, -113, 74, -48, -125, -102, -87, 80, -35, 120, -33, 10, -77, 113, -123, -116, -60, 78, -63, 110, 26, -68, 7, 15, 24, -122, -25, -121, 16, 65, -51, -56, -45, -77, -82, -33, -3, -54, -72, -20, 112, 24, -34, 15, -95, 67, -91, -81, 22, 30, 54, 58, 115, -24, -88, 45, -99, -107, -80, -106, -117, 36, -101, -105, -54, -30, -47, 13, 15, -120, 26, 55, 84, 22, 26, -50, 86, -67, 25, 50, -94, -50, 119, -76, 16, 57, 76, 1, -5, -37, -29, 79, 44, 21, 7, -72, 32, 59, -80, -71, 20, 55, -124, 30, 113, 40, -1, -38, 105, 77, 72, 97, 31, 110, 14, -7, -6, 35, 44, 4, 6, 7, -19, -16, 9, -84, -86, -106, -108, 14, 49, -8, 51, -13, -108, -80, -41, 123, -115};
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
    msg.setTimeStamp(0.665068656453);
    msg.setSource(4920U);
    msg.setSourceEntity(148U);
    msg.setDestination(43911U);
    msg.setDestinationEntity(242U);
    msg.type = 11U;
    msg.op = 25U;
    msg.request_id = 1532U;
    msg.plan_id.assign("GMSLESADBWVUGOCQFIXXBCHHNGZLRXVOHFRQACAPWPDUIAELHHGWFLBAJYUVADETF");
    msg.flags = 39989U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.231868102317;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZOVMXYKFADRGAXEKMJJQKLIGOJRUFIYEDWCNDCOHTIRHLNAXUUKQIFJBXVGTUVRWPXZPPDGHXDIPEOKEQQDDBLGWTNUZVPIDTACAXWMMPNQUCJSRVXBHNFEQCWHZWQDMFWJIQLHLNNURJFSKTVLQRXGHYPSVLNOIRZMCQJUEBBATHYABTNRLTMKLYEPIUOOIYGABYZZWSGBNJZFLTVEHSDBZVKJSOOVPRSFKSCCAUSPYWBZYSGXYFWMEKCMM");

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
    msg.setTimeStamp(0.570294830155);
    msg.setSource(46094U);
    msg.setSourceEntity(126U);
    msg.setDestination(38272U);
    msg.setDestinationEntity(115U);
    msg.type = 102U;
    msg.op = 114U;
    msg.request_id = 52521U;
    msg.plan_id.assign("TNHAEZIQISJRVQZZTBVPIWHTEULEISJEXYQMWTGJNKTNKSCMFXPUKHMDQQEUTFUSDYWCRHYGVOXRBCFUEANBYGIUMGLZJPKOENPBRZMLTPXQFBLCTGCYNDOKD");
    msg.flags = 4138U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DXQNVYAYUEHCRDISCVWZQMNPVINNVRKKFCPQCZKRASUROUGNTQHJDBKJKUXRZSCWDZJHGLEBOILCMGLTIWABUPGJYFWBWQAFLSZEXATFONRVTBHNLFMAVHPFJJTXFBISWSZX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPDQJLESWKHFFJTFP");

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
    msg.setTimeStamp(0.194966792118);
    msg.setSource(28037U);
    msg.setSourceEntity(190U);
    msg.setDestination(44632U);
    msg.setDestinationEntity(70U);
    msg.type = 179U;
    msg.op = 138U;
    msg.request_id = 24027U;
    msg.plan_id.assign("IFTCVTRZMRSJJAKYZNYHWLZRFNBJMZYPVOVDCKQEDCUUNOSRXHSVOMAWWOJEBHTEXFOTQCSXZXO");
    msg.flags = 59888U;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 180U;
    tmp_msg_0.step_number = 1U;
    tmp_msg_0.step.assign("ZPBKRBPETUNYOLQBEDJNLRMTSZVSCGOCUUWHLVSHXPALNNWWSCBZFPOSAJVVIOAYRYCRIUGXDDHXPRFICZHBKHDDNWSBZDQCENQGIMMKLTGIGXBAPYLJRFUGKEQWPZ");
    tmp_msg_0.flags = 158U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTSGQCGMEVPGYRUTSYMAPWORQOHLRQDUPCVLJAMXMDZQFWWWACCCTXCBYWEUEVHSLHJESPHPDKZKGQYJARDCMEFTKGSDFOWLVBYNBPJQOKJWOZZRPOTLGFHSDTNZHOXN");

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
    msg.setTimeStamp(0.912971461306);
    msg.setSource(34371U);
    msg.setSourceEntity(194U);
    msg.setDestination(50055U);
    msg.setDestinationEntity(121U);
    msg.state = 244U;
    msg.plan_id.assign("TNSSRPKNGUETSSDGNRAECSXYCDGMZROZMTVUXEICQYKZNODWJBAPKEVEECBSAXHBHJHKMVMPRFUVVHYMHSUCEKQWMZBOYIUVVCAYALIAJXPMQIILNJT");
    msg.plan_eta = -1989550208;
    msg.plan_progress = 0.277020890499;
    msg.man_id.assign("HHYKTDNXNKIHCPWATABDTENZLSGDJQMBEEIBYTCYIFSDXGQIZPJOYTFSGNVFNFVCUYQRMLIYLACSQCCMZHQXTQAIJUGJLLCEQSDROMAVZGVRTROWZFUHSFWUHXUIFZEBGTMZPHOJDVGMOKWJOPKDSBTWKKXGLOAVCRXNBNQDNPZMYWQAEFIPFZMPS");
    msg.man_type = 13562U;
    msg.man_eta = 1035030748;
    msg.last_outcome = 205U;

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
    msg.setTimeStamp(0.345693616609);
    msg.setSource(10816U);
    msg.setSourceEntity(180U);
    msg.setDestination(54357U);
    msg.setDestinationEntity(12U);
    msg.state = 201U;
    msg.plan_id.assign("SUNRAWYIGILQIBKVPPOOWRISEJFPOIXELCRTKCRSSFEXILMYGXXVCIYLVGURQUWDUXDXCKGGYBVEDSPPTOQGBWKFENEAUZKLQTDKRDWXRTNOTUKZCB");
    msg.plan_eta = 547059865;
    msg.plan_progress = 0.297550225157;
    msg.man_id.assign("BUPNBLGHZLVSZZQQXAWPDCQPXAXDHHFNQROTGYSEYQIJHUIRYPGKZUTVERTVANJEEVFDLOCNCWSKLRVGOHRJFXLFINACTRPIMQBJBOSIEZANAVRIDWEGKXQJPRHGOODDBDJXMWMUSGIFAOYBVKHNLBMFFKUEGKPCHXKHYYCQWIIWSJPFBJSPZLWYLHTASMMYUTZZZRVMQAEW");
    msg.man_type = 56292U;
    msg.man_eta = 157587570;
    msg.last_outcome = 4U;

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
    msg.setTimeStamp(0.795005408009);
    msg.setSource(30584U);
    msg.setSourceEntity(14U);
    msg.setDestination(42710U);
    msg.setDestinationEntity(79U);
    msg.state = 66U;
    msg.plan_id.assign("XQHSXXGUITRVCJKYOAMTGKMBSAWIEZUQWWVNADSPYJHOLFXVSRUK");
    msg.plan_eta = 2021133827;
    msg.plan_progress = 0.181680332204;
    msg.man_id.assign("FTJUDROSPYYVJLJYXEFVMZIGZNSCURNYAAEXSWODIEJTPNGAVDYOZQLZDXUZTSVSLJQBDRWXQPCXXHHIJRTRBXHYNGZSVFBUWBIHLQQPFHNNKBAZDISPXGQLSCQBAGCMVSWXRPUGMRLQNPFYMEBMAPLW");
    msg.man_type = 13618U;
    msg.man_eta = -1480234874;
    msg.last_outcome = 204U;

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
    msg.setTimeStamp(0.000715085971652);
    msg.setSource(24636U);
    msg.setSourceEntity(46U);
    msg.setDestination(38048U);
    msg.setDestinationEntity(171U);
    msg.name.assign("QPJLFFGHYKLKKUSMJREROHQPISUTIDYBY");
    msg.value.assign("OOBWDDZPCBCNFGGADXTEEKJOMAEXTKEKNTUONBDYQRSXEQTHSABMNPITMJGIYDPLWEUGLHODRYCCBYBTWTPLCJQVPINPXUMRSLXWAKIFUHCJMRBQZMZRMNHJDEDFUPSLRJKWYSGNVPLOXICXIWIPJCROAAKSNXQFSYUUMNHEPVRIDHUJVQLWONVWZQVGGSYGCBZQQTIXOBWVMRKAABISAKJQTFHUUZGHVFLTXKSZAGYEWMDHZFKJCLRY");
    msg.type = 122U;
    msg.access = 92U;

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
    msg.setTimeStamp(0.560225492146);
    msg.setSource(7569U);
    msg.setSourceEntity(106U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(191U);
    msg.name.assign("UPEDBEBVUBLPRATAVVKUTOZWJNCHQLBXYIZAJMRATZVSWOAEFOR");
    msg.value.assign("IBGSXROEEMQYYYVDNMLPOMXMCKYROFYOPJJKDUJASVEZEDOTMZNISQLRXLUFTKDPS");
    msg.type = 156U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.130117604125);
    msg.setSource(38745U);
    msg.setSourceEntity(143U);
    msg.setDestination(13806U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VLRPRTYRCYUMMVPEFDHKJVQFEPWSNMDJODVNZTGDCEVMLTRUQVONOXWITTUUUXPFLBHQBGBBGEEPYKIDEWAJCQCGXOZYJGXWACPKBNLIKZLAGPNGSINMAFLFJRTETUERPWFNCGMICFHHYOLAGJYXXRDKYESXLZQFVWXUBQIACXSISIUKAFDUSKZLYJWCIWKRHMODOTQEBTJDAFHQVZHMOYTRZVOIBZDBZKHYQJSPAQZH");
    msg.value.assign("VTAAUTPIZIMQPTLFPDRQSAGLDENFWTHAOLYGMKWIEFTAJJFCKUCVNYZCUEJPOOOGQKBBGXYATCYVZRHJNNUXIHPFQTRVJVGVSIRPLKYRYQBKNJJVBISIKXCKEHHXXUCWSBGSTYDCZLDZYUPMHEZZBXFTBWXQLHNPUHRRJEWWCBMBJMAWWDEAONO");
    msg.type = 131U;
    msg.access = 26U;

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
    msg.setTimeStamp(0.897006187727);
    msg.setSource(47954U);
    msg.setSourceEntity(24U);
    msg.setDestination(17718U);
    msg.setDestinationEntity(1U);
    msg.cmd = 221U;
    msg.op = 245U;
    msg.plan_id.assign("NBCOUUSPJVHJRCNQZDRVUJRAMVOCZRIEIWRNYQTFFGICDCISKTYKHGWWZGBLSXNJVDMCBGINUJPKPXZATCZYITVBCNSBGPXFXVXWQWBWOHGUIJMPADSTDEPLXQZACMAXYQUWHMETKHNSARTXFLSAERSJEWIWGVHOKDMKJYHUSYHXBVLIPFOMIGGVTOLFZNUEWCLLDFMUARROHOYPSLNM");
    msg.params.assign("RBTWXMBNULDNIISPLFLLUXWOFOPZUTELWRAHBQMMFPYZOFGRIHLVNQUHEVYKWAIVQJKXPJGSAJKFDWBDHNPIYJVKTOGTUEROXWXZWBRULCZVHEKJUVNZABDXVDYJFWSGXXJPCTJQZYAPJBGQGSPOHWSDFEQCEKNVODPQMMD");

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
    msg.setTimeStamp(0.979556299266);
    msg.setSource(44679U);
    msg.setSourceEntity(202U);
    msg.setDestination(45595U);
    msg.setDestinationEntity(86U);
    msg.cmd = 80U;
    msg.op = 231U;
    msg.plan_id.assign("YUELHXHQLCAKXKTAXOHVSLHQXRKSWIUZLDSPMVZWSIAOOMBJPPJTOMWTNPWWCGMNMPXABRJFRGJEYDFLROUTEQXHZOVDXW");
    msg.params.assign("CDQUHEDTESFJLDLQAOPRQWDHFVYOTWPQIABKYPZLCBQOKMUJNSVLVJQZYHVQHSHRGLZUXFUPGALBKUWVNTHEEC");

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
    msg.setTimeStamp(0.28195008409);
    msg.setSource(62016U);
    msg.setSourceEntity(17U);
    msg.setDestination(7309U);
    msg.setDestinationEntity(101U);
    msg.cmd = 146U;
    msg.op = 119U;
    msg.plan_id.assign("PSCKNFDJNJAKLYMJDIELXOZOPONIBMKCOMG");
    msg.params.assign("JDYQRJAEWIYSIHBSUEPANJOJUILPEHXHVTMPPBIGCXMFDYZAWBFFKWVLLIXBVHZOPZBRDVQOFJKNKQOGTUMKHLSNTSNVLVXREJNAZFS");

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
    msg.setTimeStamp(0.857490094233);
    msg.setSource(35161U);
    msg.setSourceEntity(58U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("QGEZKKSPLNIUTUHLGBRSHSMWXHKN");
    msg.op = 32U;
    msg.lat = 0.77811569033;
    msg.lon = 0.203800648028;
    msg.height = 0.549363479961;
    msg.x = 0.651023953332;
    msg.y = 0.225072434332;
    msg.z = 0.862695163366;
    msg.phi = 0.765330441967;
    msg.theta = 0.89021027853;
    msg.psi = 0.907471276071;
    msg.vx = 0.95039112142;
    msg.vy = 0.89317372308;
    msg.vz = 0.673014843972;
    msg.p = 0.919272151934;
    msg.q = 0.135788204746;
    msg.r = 0.113955663867;
    msg.svx = 0.196170388169;
    msg.svy = 0.267108338264;
    msg.svz = 0.0421709904462;

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
    msg.setTimeStamp(0.384579788153);
    msg.setSource(30958U);
    msg.setSourceEntity(198U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("UXULZWUOHFXNURRJLQWQFVKPWANGBIAZZBLHXAVMGIDOZTCFUQJNJMBJRQFGTDAAXYQOUTKIOHWRPMDMRDDKCPYMASJKHGAIEJSMQYSBWEKPHZIDGHWVHHUKSQBNLGSEBCYRNITGOUJODICFPOXPTEEKRJVZURVATLLVBECDJVYYZGZATPFYXNNOEWPBLYOHCXBLNMPSKKBTVGPFXSCWX");
    msg.op = 76U;
    msg.lat = 0.306747942956;
    msg.lon = 0.699693698699;
    msg.height = 0.900943454888;
    msg.x = 0.870773598451;
    msg.y = 0.848752337168;
    msg.z = 0.484400452409;
    msg.phi = 0.685983516748;
    msg.theta = 0.416550062104;
    msg.psi = 0.640549777218;
    msg.vx = 0.837601137557;
    msg.vy = 0.0702116812352;
    msg.vz = 0.455495243121;
    msg.p = 0.171008751994;
    msg.q = 0.543811687469;
    msg.r = 0.469197053648;
    msg.svx = 0.0329706797262;
    msg.svy = 0.611931724542;
    msg.svz = 0.292091250476;

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
    msg.setTimeStamp(0.597107770236);
    msg.setSource(60320U);
    msg.setSourceEntity(236U);
    msg.setDestination(15756U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("RVPZPLQMNKRDTIGNZFFYBVCACHYUAYNXLTHJDXOGXSVKGDOWKERBANAWGHPXANIMXHFODUEMXCLBGQNISDYYGECHIIYAYBLCAJLHTURPOZMEIEBWKPZWBVLGWGACEJUTIFTD");
    msg.op = 149U;
    msg.lat = 0.685056137643;
    msg.lon = 0.472702041219;
    msg.height = 0.645981140311;
    msg.x = 0.92677502118;
    msg.y = 0.112900242142;
    msg.z = 0.810170081424;
    msg.phi = 0.809581907448;
    msg.theta = 0.0989598924629;
    msg.psi = 0.860819644064;
    msg.vx = 0.225343529862;
    msg.vy = 0.550076467435;
    msg.vz = 0.159429297114;
    msg.p = 0.909788389153;
    msg.q = 0.354927544474;
    msg.r = 0.479281510052;
    msg.svx = 0.124264915663;
    msg.svy = 0.890608002722;
    msg.svz = 0.0220854062924;

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
    msg.setTimeStamp(0.0536511594431);
    msg.setSource(52768U);
    msg.setSourceEntity(181U);
    msg.setDestination(37734U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.0604114663322;
    msg.lon = 0.320146379202;
    msg.depth = 0.350588820307;
    msg.roll = 0.444893734553;
    msg.pitch = 0.0735767826159;
    msg.yaw = 0.990758027896;
    msg.rcp_time = 0.104621518458;
    msg.sid.assign("DJMTPZWTXQCTAFSKMWXF");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.407078165901);
    msg.setSource(65397U);
    msg.setSourceEntity(207U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.414251767376;
    msg.lon = 0.8762590031;
    msg.depth = 0.796903639267;
    msg.roll = 0.674324598525;
    msg.pitch = 0.296789950808;
    msg.yaw = 0.251238981984;
    msg.rcp_time = 0.297270396327;
    msg.sid.assign("NGFDXDZUWVIJQOPMDOVMTBVAUFYTNKCQYPCBXNIXKEDMDLRDFBQANLWCKPZXFLTRUTBAARGDIGHVNIKHIEVJHXXJSPFHIGLXYZGOTQUJKEKTVGTRLQXIOKPKBBCABJMXCMYSZSNGNMPPOBEPHPZDQWFZXCFGOCZGWWLEZWQIEWJREWVRRIOHZFNA");
    msg.s_type = 174U;

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
    msg.setTimeStamp(0.89845747736);
    msg.setSource(11373U);
    msg.setSourceEntity(28U);
    msg.setDestination(25763U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.227132004586;
    msg.lon = 0.579881475226;
    msg.depth = 0.333267327681;
    msg.roll = 0.56548791658;
    msg.pitch = 0.967765206694;
    msg.yaw = 0.0488487118452;
    msg.rcp_time = 0.609997960619;
    msg.sid.assign("WOTMEAWLUEZVHERFQIUCLETFWOTEVRSEWUUEOPIUNJHDGFRBZZQPXQXRTQYNSGJXNVRXHBRIIRZPIKKANNKPJJUMINBKTJOWYSASBOVUAGLHOYQSAAADYPQGTYBDNMWNWHCPHMSMHJBMIZWDSJDIMPVAXVVJVLSCUGGBYEWGKFTFBFXVCZPJES");
    msg.s_type = 230U;

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
    msg.setTimeStamp(0.756535179359);
    msg.setSource(7044U);
    msg.setSourceEntity(66U);
    msg.setDestination(15122U);
    msg.setDestinationEntity(74U);
    msg.id.assign("VKGQBQQNYALLQJMRNZQAUBEUBPYIVRMEIFSEWOVGKQJVYBPVDKXCUOGSYQHDFUWCTHHHDOFNGYBIWVXEXHTFNPFTLPVDIWNXKXURIJKVMSJPKEDCCZZBHBAPCSAYWSMZHQNTMXYMDBORQXOPSNXNSUTFBHZMASZBRWIYCMDLHCAFEFCIREMGJFVGJJZXUPFYLAZOHWLLIUSNIDQOXLMRPSLDYGTZZWDJNWOKTTEKOAURCREKVRLOGGUJTEJA");
    msg.sensor_class.assign("QMUDUWHKYBXKVGRNTAARIASNEGQTXFXFVTOPMAKPCHCQHJBDWMZHOHCQWGEJTBFWJECIUKFSQCQNSKHIDRNIABOVZVOLXZGXLLOYYFLFPAZUMRMEFXJIOHUVSQATMVLWUPBGKRZGHSAIDPKZCFFPOBWFSGUNRMUJEWZWPXYUIQUVMTGQVMCNRLADJMRJY");
    msg.lat = 0.628216250229;
    msg.lon = 0.908649248707;
    msg.alt = 0.560570230908;
    msg.heading = 0.753344409576;
    msg.data.assign("NQFIRMHUJWZNVTFRWMUVFXLHRUYHKIDFCFBAYEJNACPBUKWTEWLQOMSZRLQUAWQUZXEMYEXEHBZAQZLAMTDBROLGWQYEWIJBBOTZVBTMJIAKQACJSRRVYMECYXKGFKNGDPHUPPXTBBSFXLHVMIHGCSFCZSNNLEYNPOZSKTPKEGVDYNKODWOPCONVVLGMJAUBKELICOVFDIDXJNIZSIOGWXSDT");

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
    msg.setTimeStamp(0.856086707101);
    msg.setSource(4076U);
    msg.setSourceEntity(96U);
    msg.setDestination(32052U);
    msg.setDestinationEntity(43U);
    msg.id.assign("LVYMMKAVJESOQIQBWLNNSXZDDJGHXGRUYOJJGATNAOANTWQBMRMNGYHEGUWPTJPUIZUMYSXCHRODRYXEJTXAOBVJFOLUBIHLRTSVYABSHEZAFDXNCWVMVIUDYZWTKXYPJNPGKIRKKRWMMPBOEPPDFGZEUUYPWXFHXLECWQYNFMKWGENDCCFK");
    msg.sensor_class.assign("RLTMWIHFNIAQRWYJOPYAOUKDVTKTVOVE");
    msg.lat = 0.838238996099;
    msg.lon = 0.34846141155;
    msg.alt = 0.224049971308;
    msg.heading = 0.2896380724;
    msg.data.assign("RRSXVWOCZQMODLTIJCFSHGJUMUQPPISXBNDWKJXEBFBPBYUUOBUHYJQSHFSIATDMFJZSEVBWCZBYGFGKDSCANVDLGIPYJIDTQMRRVJNZKPVJELOWOXDSLH");

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
    msg.setTimeStamp(0.0650609207636);
    msg.setSource(31063U);
    msg.setSourceEntity(53U);
    msg.setDestination(36815U);
    msg.setDestinationEntity(18U);
    msg.id.assign("FVQXXIKRQLIYGDEFXEVZTBKUINRANVRHIABDJPRAFKPNNZBZWNTOKDQOSGNEMSZJXPARULHWLVSSMOHZOPUCGWCGOEPOATBGWWPKJCIRSZXWCYLADYSOFZNFPJYYBLDDMIMSQCKKDQXNFOLSJXECUCUPJFICJBGTUFMQHTSNJWVBWK");
    msg.sensor_class.assign("JUUUAIFZWYNQATOLHGANZSFBWOVUTCARGERERVBMEQJQMLSINAIOBAXEHIXXIRCBIBGDDWCCQMFBRTKUOMKGCFYYKXYHDITZZMZL");
    msg.lat = 0.866070913257;
    msg.lon = 0.0563226274979;
    msg.alt = 0.503248475207;
    msg.heading = 0.80123443491;
    msg.data.assign("XFUJRFVPZODVJKUJABVTXQBZJSMPVDYZCAVCEPPCEYGOVRGWWCWVECDNRHUIHLSSAHYZDIAAGXURKUGFICL");

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
    msg.setTimeStamp(0.823554503457);
    msg.setSource(50793U);
    msg.setSourceEntity(161U);
    msg.setDestination(50554U);
    msg.setDestinationEntity(161U);
    msg.id.assign("ZSZCWYRKPFKXNQIWFGIBXPSAVYRHBRFXSWDLQANVCMAMQTPSEAJLHZGKHSYWJICENNGAMMHYBRJOUVMROWLGKHNITTDNEXBUJFJALUHJGUZYXLGXOCTIUMRFISYPODVSYZVSIMNIHQTQOUC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WLSTGIRWXNEXWABBTTACM");
    tmp_msg_0.feature_type = 8U;
    tmp_msg_0.rgb_red = 169U;
    tmp_msg_0.rgb_green = 66U;
    tmp_msg_0.rgb_blue = 29U;
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
    msg.setTimeStamp(0.00282271431554);
    msg.setSource(39804U);
    msg.setSourceEntity(119U);
    msg.setDestination(49752U);
    msg.setDestinationEntity(84U);
    msg.id.assign("DHQKKHQURXNAEBBWVZJZXIKGWFUOFLYOQVVUBSOKBGLTMUEXZMXSRGTWFNAIEOIQMLWFCNMXHSHJDEKRBNSRYRKILMCZTYJYMBQAIAKFJEVTPJZPGOSTYJFWWFMHNRNEGAWJECUVWXGDBCDEPCNDPLZCVTHIFPROUPQTLQYDVAGKOHHXYXWZAQIUORHLBPPZFECVSMCUDBLLTRKJOMGYSADVWTPVZKIGYXDALXADH");

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
    msg.setTimeStamp(0.283683428996);
    msg.setSource(6699U);
    msg.setSourceEntity(105U);
    msg.setDestination(38904U);
    msg.setDestinationEntity(103U);
    msg.id.assign("XBKRFORGMZMCUPKOLWLVJTBTUYWVOEJGXTZFTSZGYDPNYNPIYNVDYETELLPMVOTZXLOYHGQZASMHPRBJNGOBBZHSYIDZFWMXVSVOXHLOWICDQFBQCEPGAJBRNLWAECFOUBTUBZQDNSZRYWMTSWRECJMFNRSHXA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("USQELCKFGVGGUDHYVVHWWYMETAFOYJXQRSWYIDHMAKFSIVRAALGINTMKPGNAJCOFINDCVURTFSSZXYANZBQWMTJWEVZNCLJJXILCKJXDIEEORFKNZMPBBXZHVTPHOBHXUPYPORUBYSOWJJHUYBLMKDBGTEHQIRCSAIOWPSPMUBLPMYNLGXDSRUOTLWIADZTFRXKEHEQWBDRAXG");
    tmp_msg_0.feature_type = 41U;
    tmp_msg_0.rgb_red = 124U;
    tmp_msg_0.rgb_green = 237U;
    tmp_msg_0.rgb_blue = 134U;
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
    msg.setTimeStamp(0.677572885607);
    msg.setSource(61341U);
    msg.setSourceEntity(43U);
    msg.setDestination(13245U);
    msg.setDestinationEntity(116U);
    msg.id.assign("BXLOZLJPFUNZUIQSRSKAMNDKEECBVWSOGWYARRHHMQDGKSKYGRJHZIQDCKJMJVYCJQZNBOHYPQVDRQWIECERQQUAUPFWBROFEHUODMEOXFASLLOHPNDSZHGTCYBRAVDJFPBKCMJVSMFACECLKQUAIGBRPKLWENIKPEMS");
    msg.feature_type = 204U;
    msg.rgb_red = 239U;
    msg.rgb_green = 112U;
    msg.rgb_blue = 1U;

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
    msg.setTimeStamp(0.9307418903);
    msg.setSource(24565U);
    msg.setSourceEntity(99U);
    msg.setDestination(36116U);
    msg.setDestinationEntity(41U);
    msg.id.assign("GNTYNNXFMUVJOTLFZHMKWVDYQBRXJUKBYHOIWAEMFUGWQMDXAWSDZCRFCEWUEHRNBZDOTIKQRJAWOHNIQYFKGPICZMHEFSYBCBOANNVRVOBRGCQHEHQMBJIATRSHVGLXFTYGYPYUKGFLVWCWUPMQZISRFVMTDCLZKRKDTDXLTZULXDFKISGQXAHZPOGXZINUSJOOOLABIHYPPJA");
    msg.feature_type = 240U;
    msg.rgb_red = 226U;
    msg.rgb_green = 70U;
    msg.rgb_blue = 20U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0366220190646;
    tmp_msg_0.lon = 0.99886158511;
    tmp_msg_0.alt = 0.357316881955;
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
    msg.setTimeStamp(0.237510291041);
    msg.setSource(43566U);
    msg.setSourceEntity(121U);
    msg.setDestination(47680U);
    msg.setDestinationEntity(20U);
    msg.id.assign("LXGAVNVLTOBPDXIKHQFCAHMB");
    msg.feature_type = 50U;
    msg.rgb_red = 10U;
    msg.rgb_green = 2U;
    msg.rgb_blue = 152U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.148250200452;
    tmp_msg_0.lon = 0.622812414123;
    tmp_msg_0.alt = 0.082673454228;
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
    msg.setTimeStamp(0.516595004509);
    msg.setSource(26880U);
    msg.setSourceEntity(251U);
    msg.setDestination(9308U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.366464358637;
    msg.lon = 0.0558474955553;
    msg.alt = 0.90994726302;

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
    msg.setTimeStamp(0.989034976994);
    msg.setSource(52104U);
    msg.setSourceEntity(108U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.45673210013;
    msg.lon = 0.191626124039;
    msg.alt = 0.75359034358;

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
    msg.setTimeStamp(0.680475987697);
    msg.setSource(20943U);
    msg.setSourceEntity(41U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.42577102538;
    msg.lon = 0.0587702392861;
    msg.alt = 0.00486858977029;

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
    msg.setTimeStamp(0.269746694451);
    msg.setSource(29794U);
    msg.setSourceEntity(0U);
    msg.setDestination(17255U);
    msg.setDestinationEntity(253U);
    msg.type = 48U;
    msg.id.assign("YBHTPAJWCZFZIXVZMSKEOQFHGGOQLEQBOPGFCKWZPDGMKAVTKDMELNUFESLKNLDDUUJCX");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 66U;
    tmp_msg_0.actions.assign("BNAVMNTEHDZBCEOYXPYTHOYYYZXRQSGNJLOWJMF");
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
    msg.setTimeStamp(0.857278478024);
    msg.setSource(21243U);
    msg.setSourceEntity(234U);
    msg.setDestination(237U);
    msg.setDestinationEntity(80U);
    msg.type = 250U;
    msg.id.assign("CDRZAVMASJHMIIKLGUEPNLVBMHYIIODUTFYEJCCXJBGBNHSVZNJHZNATCYHVFRFVYWHODGSRAWCKVRIMHFFXXRBJBTPWFAZUUKRUYEWNYOHGHAIXLEQQPWOWQQUAEIGOCNJCNEOKIWILXQMESMXSDLAXGBQYUHBVBLKXZUZOGDZRKVSN");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3057555225U;
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
    msg.setTimeStamp(0.295786582249);
    msg.setSource(34406U);
    msg.setSourceEntity(28U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(5U);
    msg.type = 46U;
    msg.id.assign("FTIIEQHXKQTPTFICJVTYUCFLBJXCMRCOWTDDLANUCKZVLUOWOZPYJRYIVBEAVRAUPYYMMZKQDLNGULNZSUKHOPEQSLOMBHXGZBQAFEPROMBSPIGAGXWEKFREZGMZIJMPRXUJFDIOAZYHTGZWNEFFWCSLYBDWNOLQWWCGVJO");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("QQTNVIGYMNBEKIXOBJSSMDCRAFQABCYQUALDSPZLCWBNRVCOWPTFJHXMEGUFENBZPQQYBJPVLQHLEPEGPXNHVUCNVSCONDGKVOWUUDIRIIWUXW");
    tmp_msg_0.op = 115U;
    tmp_msg_0.lat = 0.144196241504;
    tmp_msg_0.lon = 0.388618283593;
    tmp_msg_0.height = 0.231707235033;
    tmp_msg_0.x = 0.468446897349;
    tmp_msg_0.y = 0.617445325697;
    tmp_msg_0.z = 0.662543602289;
    tmp_msg_0.phi = 0.534750046847;
    tmp_msg_0.theta = 0.901159587532;
    tmp_msg_0.psi = 0.315171561462;
    tmp_msg_0.vx = 0.405156949046;
    tmp_msg_0.vy = 0.842934225561;
    tmp_msg_0.vz = 0.457436976778;
    tmp_msg_0.p = 0.911975725994;
    tmp_msg_0.q = 0.356382084542;
    tmp_msg_0.r = 0.218316474002;
    tmp_msg_0.svx = 0.673762509817;
    tmp_msg_0.svy = 0.535994548618;
    tmp_msg_0.svz = 0.211139513034;
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
    msg.setTimeStamp(0.414437542546);
    msg.setSource(43059U);
    msg.setSourceEntity(253U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(213U);
    msg.localname.assign("XXYKCJSXURUMNBJUFGQVHGJODFLPMENBEJLNMQBLRZLKCXRFVNYYAVQTGWWYBZBOAEGRZUQYEEOWRTHWWDQOSJIFZHXSIXIIDQPKCLVLSENDHKQALHKLMADGMHJBKMKVUTTBYYCFZRGUAZQDHSTGGLCO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MIJYDLFJGQBRJRQRPUWGYUSCJEXGESPJRKVIIGYNDZBKWNFXWJMDLNQQWQTLALGIRPZWMMBHWRDAKTCKBVCTQEFNPGBCMOXAOOZPXEPOICPO");
    tmp_msg_0.sys_type = 11U;
    tmp_msg_0.owner = 61922U;
    tmp_msg_0.lat = 0.360007014232;
    tmp_msg_0.lon = 0.484452038283;
    tmp_msg_0.height = 0.429505614489;
    tmp_msg_0.services.assign("TEATXGRDWQKFPCWNFPLGRZXJTIMKRDMEVTRVVRQVUKOAAEPKDRJIYGWAPAHSYSJVNOZQOIYPHVIZULSYZIJBWSLMXSGDBKHITMYECENPJWDBUXTEHHLJQZAIHSOJCZCOJZCRAQKDQBUKGTZCCFVNPRNDBSUPYBPAFSD");
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
    msg.setTimeStamp(0.459923496095);
    msg.setSource(26529U);
    msg.setSourceEntity(6U);
    msg.setDestination(1096U);
    msg.setDestinationEntity(207U);
    msg.localname.assign("HGOJIKHVPELGFYSIGEMYLQMTKLYLVAFUVDSKFCRRNEBDJWIVESHPJPGCBWVNXJIXHYTMEOKYXWMIMXSAOVBLREQGLTVBGOBKBWSZNIMGUYDQPHCZJUTBLBRKCNDAJJQXATPOQXALZKUCPUTTRZVLCUWGFFGMHPONIAFCHZWQFFRDNDKCDSDJIZZPHRTNSAKEJUCMQPQUEXYEES");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JMONCNSSCXSETTLJEIDOANSWDPAAFGTLQKOLBTEDRLM");
    tmp_msg_0.sys_type = 200U;
    tmp_msg_0.owner = 20627U;
    tmp_msg_0.lat = 0.960081080469;
    tmp_msg_0.lon = 0.522898326077;
    tmp_msg_0.height = 0.00460940169124;
    tmp_msg_0.services.assign("CZTPYWIFBZTQWFXVYHDVLGDUOSYWRMHCWIGKJXTVJVBEBCMJBADEEGWFYKBSWQRHGBFSKKKVNEXIHTTTCLKKSKHXWAFICLQETRDQJKGAEDLIJDQVFNEZEGPORLQYFNRMIZQLCHKMVFDGAQWTUSRDHPZRYPSUAUNWYTVJRGHPSPOEPNUOCIRHZSRAYJACJFXCPMZD");
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
    msg.setTimeStamp(0.0739050946018);
    msg.setSource(22772U);
    msg.setSourceEntity(124U);
    msg.setDestination(23973U);
    msg.setDestinationEntity(63U);
    msg.localname.assign("MYKBGJKGOXPJIJVXLOQBHAYKAPAZWBODXQVHYVMTMJHTVNUGSRYBXUDIUFEQILBWQSMDUBI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DAMHVYYPVLXKGDMZNCX");
    tmp_msg_0.sys_type = 183U;
    tmp_msg_0.owner = 12454U;
    tmp_msg_0.lat = 0.463453657647;
    tmp_msg_0.lon = 0.921182446495;
    tmp_msg_0.height = 0.50030893553;
    tmp_msg_0.services.assign("ZZJIRVACQIVEUCSLACTRXIWYMSNVHRAFVYKCMUWOASRCYVUOHQOPTBWSCZIVEHJIUOLHQDGHWJTBOLYUWSGNGISRQSIZBFKDFLQGTPSCMUEEKUPTDTAXYPEJYKMPHPDGCFOAHJCPGGIZWVLAYNJBYFTLKFNLXBMHDENFQVJKSCJZXAYUXIKRRQORPJHESWEXZXWQBNEZMJKBZODUFATIDOMFABMTDGWNVRL");
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
    msg.setTimeStamp(0.399835919505);
    msg.setSource(39810U);
    msg.setSourceEntity(42U);
    msg.setDestination(12230U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("USZJQMFGIIMPCEECHSWTUBQFCHEUBTAELWHPGVNMPXZPREMRAJQRFIRVJBSKKCFTDKOFPYNLJWQMZOPOFHBSLWRSCQYDZWMVYCFOWSNYUPIHMINQQGNDIVMBGKJGEMSXLUSVLDZDOKAUYISWBAZZRFDCMWJANVXRONATXKWTAUDBOTHJYKECLVLAGBUNDHLFYTIKQXHLXXUXGZPBCOGP");
    msg.predicate.assign("ERBICWOCIQFELLZCZCBTFXKAOORGDXYYHTQDBSAAUQSUKHSWMYQDATWYTYELQPHZNQWJEWFOGESUTXKFATMYQUKILAVSAQHNPEMCZGRWTIBDVJISQODKJMZMFXHNRZVXIKJWZDBNRSGNKJBTIGDBKBXOFBMHNSWNKJMGOJUMGCLKYNMFPJNUUYTVHGJXJHEYLUGLCWTCUBHOQPIAPLDACAHOLNOZFXRPRZFIMYDWPCISSZVVPX");
    msg.attributes.assign("DWDJDNSCSMNKNDOVOVCXJYKTMYAHKVSLPVMRXGGAKCLQUVIEFPQWYREVFHXDXP");

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
    msg.setTimeStamp(0.152608606908);
    msg.setSource(32868U);
    msg.setSourceEntity(47U);
    msg.setDestination(31362U);
    msg.setDestinationEntity(41U);
    msg.timeline.assign("RJEGAMUSOCYMZSPJLZRLKYVEVOQODHUWOALNWKHVNITRKQJEQAXFPFDFBJPQNYMBOYLUFGHSNVPKLWKADJBBFYACBAUGVGJCXTGNGCTTBIZVXPSCEJQIPRZIHNWSUCDIQAHDMQUPOYZYIWBSXGBCPQXOELTTBHEZMSRJJBVWCV");
    msg.predicate.assign("AJPNXOQZMWIBUDRZSQTNEDXTUFGZTYJHGHHWIHWTAMIDSBMKVPUDFVSNXPXCNSZVTIJEMSTBTBDJGNBQAQFZNXOCWRCYDOREXWYICUTTNCWOEWHWKGVBEDAKEXIPBQAIGBKJMARHLYLLLHCHPPGOFRWMZSSJSVOVKVZEXDUUICAGGAVMFOZYCMSCFEKGHFOJNVKRUPJFUYLQPBXRR");
    msg.attributes.assign("YJKIYQVVJPREZDXOVSNWYSINCYTXPWLCTAXZLGTAZVMSTWDREOYOHBEBSGGTPLFQDHCVUOIPAXRMNFITHMEGLNPUNWQAFTYCTKQHCFCDUNJZUXINOURBSYLSCXRBKDSQVVKQGHXGRCVHSAVESPBZIKWJUQYPIJHWUZELEWZMLJMHDQRWKHFAGAZJFJJDMZDUBAPUTWU");

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
    msg.setTimeStamp(0.151824939539);
    msg.setSource(26486U);
    msg.setSourceEntity(223U);
    msg.setDestination(12251U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("RTGDVHHOLTDUICQNETZOOOISWZUSTWJIQP");
    msg.predicate.assign("IBDBGEJZIXAXGTRYXWMNTNKQSSBXMDGRDUQFCLJAXQEZROVDSUHFKKPDSFUTCANKDDMWCBAZCOZLJGKMNURRBILHGOOJJXANIBVTQFVDEANHCEWTURZMOVFEFEPBLTOAWTNHCIUYQVBYZIGIQLJSZUVFOYIRLPKEHKPJMIMGQHQTATJKCUDXOBVKLSAMVXOBRUWMKEWYCJQVZWFPHWYOGPXMHALSRSPXLCYDWHFVHWYNYCPZNSPLFPQJEGI");
    msg.attributes.assign("NECAOEDQQLHWJIGYJQVOLFNNHJQEFKMRQAWHBRQAFVLOYZPHXAPBBGKDAYAUXMDKZQRMBFHPSKNVZCFWBLZDQEEOUGMTSRURMTYGNIZSTFLEWURIUXLUHFGFUYUYEQKPGSWEXMXIOBUGXIWHVHPPHSCGJXGKWLCVBIJSOALABYFJSRNDNIGMPY");

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
    msg.setTimeStamp(0.496914792549);
    msg.setSource(7995U);
    msg.setSourceEntity(137U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(241U);
    msg.command = 216U;
    msg.goal_id.assign("YGSPQLINSBHPJYHKMZYSTJSABVUSVFZMKXSDHXUDXNLJDMGYAUOHMNARXCJDIEOWXCOXEIJQYTMEGHHSBBFTECFDDUXP");
    msg.goal_xml.assign("PHNURQYABIFTJGKLOQZJDSDHMGLGYTRJSAOBRAZMDQYWJQFEOVZZMNCBFPSD");

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
    msg.setTimeStamp(0.737599974754);
    msg.setSource(34194U);
    msg.setSourceEntity(107U);
    msg.setDestination(10878U);
    msg.setDestinationEntity(105U);
    msg.command = 119U;
    msg.goal_id.assign("SFAWWXSODCOHCUOUNBFKIUPTYERIIOJKRABZRDGMJYUNTBYKBSXAJSTLVMXQTGQGCGUNOSVBFAECNNMJAIMUMQRBIZOPFEHWDHHMJPPVYXFEYAWFANRIGUSLOVPDCCXGGZTRHLHYKPIVKHQVKIZJLKYWLKMYNSZLFWDXXEDVLJYPQUFHPDGNEQCHUAJREQEMWHNCMWZBRSDOTKULIJ");
    msg.goal_xml.assign("XDLACGXVOAZPQXFZVSCHTZOMIMWYQHDCKENNDJKNPEJEXAIZBHKDVZIIKSVCTSYF");

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
    msg.setTimeStamp(0.237436904578);
    msg.setSource(28571U);
    msg.setSourceEntity(250U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(149U);
    msg.command = 62U;
    msg.goal_id.assign("KFRSLHTSVMRBBFGIDEIEAHPZQRXRVHAEZXRLSJJTDZNTKIUZSEJVQDSBRQPFYFIKYKIAUGDKFTAXOLOITIXNMGLCKMNIHBEOGMVAQECHQUBFQTHZUNPRAFQGUTBFCNXPHVNW");
    msg.goal_xml.assign("UFKJHVEYAIQIMQSPHILBPHKQKRXPRHGMUYYNZSXCTKLTVNDTPGUUOCJDEOPJRUZWMTBLMFQVFBPXELAZJJKJA");

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
    msg.setTimeStamp(0.0726948553528);
    msg.setSource(17210U);
    msg.setSourceEntity(148U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(80U);
    msg.id = 104U;
    msg.width = 51513U;
    msg.height = 48215U;
    msg.widthstep = 25592U;
    msg.channels = 119U;
    msg.depth = 228U;
    msg.finaldata = 122U;
    const char tmp_msg_0[] = {-124, 28, -10, 81, -120, 113, 68, -19, 86, 93, -24, 92, -12, -120, 45, 44, 88, -82, -2, -59, -56, 83, -87, -31, 119, -32, -53, 28, -80, -30, 29, -48, -19, 66, -106, 21, 34, 119, -99, -54, -106, -54, -93, -73, 28, -112, -76, -62, 41, 42, 102, 78};
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
    msg.setTimeStamp(0.388351227983);
    msg.setSource(54481U);
    msg.setSourceEntity(141U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(232U);
    msg.id = 233U;
    msg.width = 13716U;
    msg.height = 32740U;
    msg.widthstep = 5846U;
    msg.channels = 229U;
    msg.depth = 52U;
    msg.finaldata = 253U;
    const char tmp_msg_0[] = {28, -99, -99, -33, 102, -40, -12, -128, -66, 87, -47, 98, -10, -64, 111, 95, 51, -94, -126, -112, 52, -51, 50, 109, 73, -100, 10, -52, -24, 97, -39, -103, 99, -121, -59, 99, -94, 49, -11, 71, -93, -75, -24, -28, 22, 101, -126, -127, 37, 75, 70, -88, 74, -35, 18, -57, -67, -29, 49, 8, 0, -124, 34, 54, 83, -104, -31, -10, 62, -128, -24, -73, 78, 86, -23, 123, 3, 3, 10, 26, 34, -2, 28, -63, -73, 82, -18, 35, 11, -68, 42, 31, 65, 53, 59, 28, 58, -55, -63, -10, -65, -21, 63, 7, -116, -55, -62, 74, 8, -51, 66, 61, 89, 12, 80, 95, -13, -116, -99, 89, 86};
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
    msg.setTimeStamp(0.306640071172);
    msg.setSource(40509U);
    msg.setSourceEntity(122U);
    msg.setDestination(58524U);
    msg.setDestinationEntity(177U);
    msg.id = 177U;
    msg.width = 36957U;
    msg.height = 7922U;
    msg.widthstep = 27988U;
    msg.channels = 156U;
    msg.depth = 48U;
    msg.finaldata = 241U;
    const char tmp_msg_0[] = {85, -122, 57, 17, 85, 84, -101, -91, 63, 57, -46};
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
    msg.setTimeStamp(0.0273249720728);
    msg.setSource(32081U);
    msg.setSourceEntity(61U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(152U);
    msg.width = 15963U;
    msg.height = 42508U;
    msg.channels = 165U;
    msg.depth = 143U;
    const char tmp_msg_0[] = {-72, 73, 65, 32, -113, -56, -66, 45, 45, -100, 116, 54, 29, -79, 18, 118, 24, -6, -14, -36, -55, 68, 121, -58, 36, -2, 22, 110, -36, -28, 102, 36, -109, -112, 89, 11, 110, -69, 40, -106, 30, -89, 49, 55, 15, -122, 92, 89, 75, 74, -58, 26, -16, 19, 110, 32, -96, 3, -18, 99, -16, -83, 75, -50, -9, -42, 81, 41, 110, -18, -5, 51, 49, 72, -85, 12, 23, 123, -58, 32, -118, -7, -22, 66, 2, 108, -111, -7, -43, -19, -63, -15, -69, -19, -125, 40, 3, -16, 60, -123, 89, 32, -97, 86, 93, 84, 60, 13, 45, 46, -97, -88, 86, 21, 5, -69, -111, 55, 91, -77, 12, -27, 34, 102, -1, 30, 121, -19, -121, 31, -114, 40, 9, 6, 60, -24, -40, 34, -124, -15, -114, -103, -4, -40, 15, -61, -28, -14, 68, 25, 84, -113, 0, 73, 90, 104, -117, -123, -54, -74, 88, -22, 49, 26, -10, 26, 91, 92, -76, 70, -1, 81, -125, -2, -63, 45, 5, 89, 83, -78, -49, 102, 36, -50, 31, -123, -76, -87, 31, -86, -80, -28, -25, 108, -28, 38, 33, 7, 56, 52, 37, 57, 19, -68, 92, 75, 27, 66, 83, 24, -5, 111, 55, -43};
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
    msg.setTimeStamp(0.46936854211);
    msg.setSource(34630U);
    msg.setSourceEntity(149U);
    msg.setDestination(34067U);
    msg.setDestinationEntity(147U);
    msg.width = 6385U;
    msg.height = 62667U;
    msg.channels = 249U;
    msg.depth = 235U;
    const char tmp_msg_0[] = {-124, 26, 113, 30, -7, 36, -73, 31, -85, -110, -55, 61, -41, 10, 10, 101, 115, 63, 110, -62, -13, -125, -59, -63, 122, 58, -37, 15, 78, 97, 87, -120, 33, 98, 113, -33, -119, -30, -115, -19, -107, 31, 32, 95, 108, 55, 4, 64, -60, 116, -65, 77, -108, 41, 80, -46, 45, -92, -93, 89, -128, 21, 52, -96, -9, -71, 52, -65, -121, -17, 109, 94, -52, -61, 19, 61, 49, -26, 122, -88, 57, -77, -95, -78, 19, 76, 12, -1, -15, -66, -90, -74, -39, 120, -24, -96, -12, -122, -4, 106, 110, 74, 79, -53, 85, 69, 112, -83, -59, -71, 24, -106, -97, 7, 79, -57, -36, -24, -120, -86, -41, 52, 97, 79, 123, 28, -77, -58, -16, -122, 6, -99, 51, 61, -103, -20, -61, 10, 99, -38};
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
    msg.setTimeStamp(0.21496371049);
    msg.setSource(6035U);
    msg.setSourceEntity(113U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(77U);
    msg.width = 36455U;
    msg.height = 61905U;
    msg.channels = 121U;
    msg.depth = 96U;
    const char tmp_msg_0[] = {-95, -32, -80, -28, 23, 115, 10, -11, 19, -123, -14, 124, -1, -16, 58, -54, -118, -70, -43, -15, 32, -92, -28, 44, -64, 102, 9, -27, 38, -57, 68, -113, -120, -1, -103, 96, -76, -52, -45, 111, 62, -5, 52, -65, -11, -21, -54, 59, -17, 123, -102, 106, 114, 68, 126, 60, -79, -33, -104, 125, 67, 32, 60, -25, -36, -1, -45, 28, 83, 64, -6, 90, -53, -126, 112, -47, 73, 13, -42, 62, -61, 84, 98, -57, 26, 119, 20, 56, 115, 86, -110, 60, 118, -27, -50, -56, -88, -67, -101, 68, -5, -100, -85, -80, -67, 60, -64, -92, -92, -32, 29, -44, 55, 97, 88, -21, 106, -120, -114};
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
    msg.setTimeStamp(0.0166937689042);
    msg.setSource(10517U);
    msg.setSourceEntity(217U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(68U);
    msg.frameid = 22U;
    const char tmp_msg_0[] = {57, 117, 108, -96, 46, -37, -6, 99, -27, 63, -99, -11, 115, -47, 43, 31, 101, -22, 94, -104, 34, -45, -11, -52, -39, 104, -49, -121, 89, 115, 38, 51, 14, -54, -14, 37, 12, -37, -87, 64, -5, 5, -114, 126, -95, 68, -1, -8, -98, 115, 66, 89, 101, 4, 114, 35, -5, -127, 83, -22, 84};
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
    msg.setTimeStamp(0.758554455319);
    msg.setSource(41086U);
    msg.setSourceEntity(65U);
    msg.setDestination(52756U);
    msg.setDestinationEntity(142U);
    msg.frameid = 192U;
    const char tmp_msg_0[] = {35, 53, 93, 53, -62, 33, 55, -87, -42, 75, -115, 19, -89, -22, -41, -31, -98, -11, 9, 63, 94, -105, -104, -94, -36, 58, -87, -76, 7, 53, 21, -75, 116, 67, -71, 108, -96, 46, 126, 85, 78, 92, 38, -52, -90, -102, -79, 119, -64, 19, -120, 46, -86, -14, -64, 65, 77, -115, 69, -60, 33, -22, -70, 30, 14, -76, 85, -113, -42, 66, -15, 97, 100, -23, 47, 23, -69, -106, 2, -31, 98, -78, 46, 122, -112, -27, 122, 2, -59, 26, 88, 71, -128, -28, 84, -18, 53, -126, 26, 46, 73, 108, 84, 77, 101, 80, 68, -56, -14, -81, 20, -73, 25, 120, -50, -34, 112, 94, 59, -30, 52, -8, 120, 31, 90, 65, -32, -90, -19, -110, 122, -27, 116, 97, -111, 20, -23, 96, 105, -32, -88, 124, -40, -19, 65, 13, 2, -67, 112, -16, 32, 17, 20, -127, -126, 36, 51, -69, 44, -111, -90, 45, -12, -104, 107, 0, 31, -85, -65, -97, 59, -104, 78, -50, -33, -104, -47, 36, -43};
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
    msg.setTimeStamp(0.799294222556);
    msg.setSource(5903U);
    msg.setSourceEntity(236U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(198U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {-37, 17, -41, -21, 114, -78, 42, 5, 23, 33, -85, 117, -62, -53, 8, 45, 2, 83, 99, -14, 111, 101, 23, -9, 67, 67, 2, 7, 68, 0, 108, 34, -121, 80, 50, -50, 2, -55, -126, 34, 93, 76, -96, -3, -62, -16, -41, 12, -32, 51, -15, -100, 55, -75, -74, -37, -10, -16, -122, -47, -47, -37, -104, -45, 73, 43, 47, 125, 44, -6, -84, 23, 36, 117, -18, 16};
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
    msg.setTimeStamp(0.0729468010016);
    msg.setSource(57917U);
    msg.setSourceEntity(197U);
    msg.setDestination(40395U);
    msg.setDestinationEntity(101U);
    msg.fps = 112U;
    msg.quality = 219U;
    msg.reps = 183U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.72906434431);
    msg.setSource(35459U);
    msg.setSourceEntity(193U);
    msg.setDestination(60921U);
    msg.setDestinationEntity(66U);
    msg.fps = 59U;
    msg.quality = 95U;
    msg.reps = 90U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.23336720571);
    msg.setSource(60355U);
    msg.setSourceEntity(91U);
    msg.setDestination(52499U);
    msg.setDestinationEntity(57U);
    msg.fps = 214U;
    msg.quality = 226U;
    msg.reps = 180U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.0160699776407);
    msg.setSource(43459U);
    msg.setSourceEntity(124U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.171632696254;
    msg.lon = 0.782476532669;
    msg.depth = 83U;
    msg.speed = 0.125656451859;
    msg.psi = 0.0371881816362;

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
    msg.setTimeStamp(0.773695955065);
    msg.setSource(28465U);
    msg.setSourceEntity(59U);
    msg.setDestination(61950U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.140320171027;
    msg.lon = 0.100959866479;
    msg.depth = 82U;
    msg.speed = 0.620893844915;
    msg.psi = 0.775362359648;

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
    msg.setTimeStamp(0.975039004893);
    msg.setSource(51297U);
    msg.setSourceEntity(65U);
    msg.setDestination(22559U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.336472038258;
    msg.lon = 0.557587718273;
    msg.depth = 69U;
    msg.speed = 0.197738927125;
    msg.psi = 0.201687974146;

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
    msg.setTimeStamp(0.515964565137);
    msg.setSource(11328U);
    msg.setSourceEntity(167U);
    msg.setDestination(46042U);
    msg.setDestinationEntity(109U);
    msg.label.assign("PENJRKYJCIYDVOORWSJJQLKTTYQFCUMIVHKOJFCHXLZHOJFTXXGBEZWVNPLGYRWIUZLBACQLIZWJCCZRFXBSWP");
    msg.lat = 0.832099330198;
    msg.lon = 0.186212984456;
    msg.z = 0.975052919556;
    msg.z_units = 44U;
    msg.cog = 0.80800766125;
    msg.sog = 0.641845703141;

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
    msg.setTimeStamp(0.607007676391);
    msg.setSource(432U);
    msg.setSourceEntity(216U);
    msg.setDestination(52836U);
    msg.setDestinationEntity(166U);
    msg.label.assign("EGXVLSHLLMRSSGQPRXWRDB");
    msg.lat = 0.74923539138;
    msg.lon = 0.048979716074;
    msg.z = 0.175954034896;
    msg.z_units = 237U;
    msg.cog = 0.964690099236;
    msg.sog = 0.413414639552;

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
    msg.setTimeStamp(0.308476796091);
    msg.setSource(21666U);
    msg.setSourceEntity(85U);
    msg.setDestination(2329U);
    msg.setDestinationEntity(91U);
    msg.label.assign("HGMNORXPXXBDKCGIAYXPOAVJWBMTTMQPSVSURRABUWNBLTKOIVLEOUNSENWELJMIMWPWFUVVPAYDQKDOIYPFGRCCBVDZRKAJJDDAFHQXBGJZVWQZBRCNMNGYYOMOCQGHWULEHLLBKDDULHFCJXSKNYZQSCHNAWRFI");
    msg.lat = 0.606328507489;
    msg.lon = 0.557246970441;
    msg.z = 0.334224956927;
    msg.z_units = 62U;
    msg.cog = 0.479644933046;
    msg.sog = 0.218938668595;

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
    msg.setTimeStamp(0.122620008577);
    msg.setSource(51700U);
    msg.setSourceEntity(145U);
    msg.setDestination(33138U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QSWHZATBHPRSCWLOQPBNKGIKFZBPKKLPESUPR");
    msg.value.assign("GHSHAMJZPNPWHZDIMMGUGGPSWCTBHDRVSRXUOPTBYUBLVIOAYWWWXEUDVXXIQSQQWQUIV");

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
    msg.setTimeStamp(0.905904424664);
    msg.setSource(29211U);
    msg.setSourceEntity(69U);
    msg.setDestination(19331U);
    msg.setDestinationEntity(57U);
    msg.name.assign("BUDTYNMGOIDHAVDRGPJEVUUXPBGJNRBLWFCMURZEMKVEQWKKOXLNJBWXGTAXMNZ");
    msg.value.assign("ZSYGFYZVCPPVMKCGQTQXFJNYJWYORUCNLSZYXJEJCXVRDXHVKKUUYOXHQGFKDQLCUHRGSOZNOLPURKWFALTLFMGTQIDODXZXQRAWMNWDMVIUOHJPYIMIDTTHZZBRPABNEPBAKKHTUBZPWCDQGVXCSEQAILMWIJUMIMVEINSSKFLPZHAAH");

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
    msg.setTimeStamp(0.55835152049);
    msg.setSource(24152U);
    msg.setSourceEntity(170U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(185U);
    msg.name.assign("BISOIIAHWDAEGZICOLHFJYFTHISEWWOMSATDKVSUNUUKQQTGQENYOXRSSPFJDUTTSLPVFAWDKYCMWWUOVEZCLBYBCAHXIRYPJTAYCQDBRKYDQXMKYPNERFKTZOQKGPSIOAIXJTCXFAJHBZMAFJXGFXGMNMZKUUWRMCZQLTREGVHNTVZXLEOSLDJLYRLH");
    msg.value.assign("LPVMBTTPSCCJEIYUQEKFSFGMEUXZJGPBAPDGFPXFBOLILTAGMQOQBVRICAMDLJNDUOTINNCDARJMXHZEIZUXAUDZFURNXZKJQNGZADYFHAQJKAKCPODWQ");

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
    msg.setTimeStamp(0.833085998906);
    msg.setSource(37827U);
    msg.setSourceEntity(64U);
    msg.setDestination(24911U);
    msg.setDestinationEntity(173U);
    msg.name.assign("NXVNSXDCIIBXTNMWJOJMRKUWKBMOWIYUVPTBVVFAZXTMEDOLAUCGMTHLAQCHFMCLIIMVAUXEPPFMWSBZBCSXSFZIEKFAYRUZSNFLPYAVUBTNSGSGPHJJKBKZVBYJIQHHLHZKJGFXQEGNIWLZSDSUQKCHZCOIMTAGXPCXLTOLBGYJNZDDCWEDVIKREAARXYGHFQKLKQYQRHYPRHTPE");

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
    msg.setTimeStamp(0.0274053543134);
    msg.setSource(65293U);
    msg.setSourceEntity(208U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(83U);
    msg.name.assign("MSNGEZQKWRBMMRHJQPHVJHCTOXGOAAGUJLPABWMMUZHCBIQZDMPFXAHADRLKLQWUYNDZXYCOSNSALPRWGGVNODIKTEMWZXJZIBRBVCWYJELGFGSSQEZAZCLVOQTNPIKJKFYUFLXHPLNTKPPEQXETDJYNYCEMVRQAGVXTYTDDUCGHJDNPWUCBIBUCCJNFFFQSOYWHKSKDQBAHRHW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QJCMVWKEVCUGXMPFGNXWBMUFYOMQJVZQSLRUOLSPTFGKRMFUZPOJFQBQFTNHJGAECNTDRDNPKLIXMPVFRNSKBCVXQUODWYXSLCWSTDWACQBYNHHBIANAVWPIUFJSSZVYQHENVDCFJTNTMEE");
    tmp_msg_0.value.assign("LLXBHQJCKLKEQBSYAPVXCBRKPVMGJRSMXUMGWQHXFEKMNQDUVVNCMUKGYHWOJRSLDPEZMOZ");
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
    msg.setTimeStamp(0.460588634098);
    msg.setSource(49530U);
    msg.setSourceEntity(191U);
    msg.setDestination(25828U);
    msg.setDestinationEntity(208U);
    msg.name.assign("JYGTWUWJCFLUDUGRGTDX");

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
    msg.setTimeStamp(0.619211216203);
    msg.setSource(54057U);
    msg.setSourceEntity(117U);
    msg.setDestination(56232U);
    msg.setDestinationEntity(20U);
    msg.name.assign("RCJBYEHCMWBJLSKVFRTIRJMZKNNOSAEVDQNXGZVXAATHEIHMQXRUXKZTWJJWDNEDNSWWLJNYOXQTKFBWVMLFTKRJZJOYOMGBHOZGCFWMSQUZPDVULTPWAAXDUFGDPYDGAPOVAEUWXZIOMGVUOXARRGAQWECTNMHUQBJFFLADIHOHFCNQHCVIBUKPFLBGIIL");
    msg.visibility.assign("PICCPLWRNNMAXZIBZIPJCTGHSKGJWGYDWKSHULCBBYPSJYVNZDWQQVALOXXEBIWBADOCFZGQAFWDRBWKXYXHKRMYNYPVMZTEEFOVOWWJXFKCMHJNKUERGZDNLLGJHSZTCOCEPDHALNKYTOMOAIAGIDPQOJUYLEFYESNVHUAXHMOFBCAXIKNRPUMIEGLTRHFUMTUIQRCSVYDSVFJUADZQBTVRTSWSZNDHIVLJMSVJZLRKFXBUKRPTTQE");
    msg.scope.assign("SLSUVLPCJYDECTMNDOUZCPWCNAG");

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
    msg.setTimeStamp(0.708350930985);
    msg.setSource(33754U);
    msg.setSourceEntity(161U);
    msg.setDestination(14068U);
    msg.setDestinationEntity(4U);
    msg.name.assign("IWPBVTOYSXUWLWIWYMOBJNGLLPRIGSSFMFKKYEMBYKCLTIGYBDVJKHCUDBDRJMHLRITDEZRZMWPWIJAAQARYVCPZCNMOXVADEKRPEVALCEUXSCMCFQQQPLYNXWVZOXOBSSZXXTAZNTMAZWSETQMAZYJSRFFKPONHTFURXQ");
    msg.visibility.assign("OGDAOTYNHVBUBLGJTODRFPALPQRJVWCMJXKRHDAPDPFMAEISGESZFSOSNJTJOXGBSJLICWTQZRVTFTKQLMNUQIIJDUCZGZVOUGYQLQWVEUSHDMUYTYRUXWJKXYSBBWVMHICNFFLLXRNEUEXFOIZYSXNCUARQMPFXBXAAWEFZEYVRKGUSDHLRENIFGKNDINBRZMCZIWNTGGQCQKYKSBMBKCPWHPPAYODBHMHEPVW");
    msg.scope.assign("BQWVKOTUOOWEZSKHEDMCWLMMYDPQQTCIUDQRNNIHUWTFLOFLQQRYYSJQJVPVSBBCUJAHEZCJUWHIBGLUKFEBOGXYMSLZOMHOFKDSTAIMAZGNSGJPCEGYGTPWJEXBHKZRCFSRMRKFRAPXVTVWYDBMUMNUNHD");

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
    msg.setTimeStamp(0.999292685225);
    msg.setSource(23373U);
    msg.setSourceEntity(9U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(58U);
    msg.name.assign("OMTWGOXKFJDEWHDRNBNDJLQTQSHDLRNZYTPGPPPMDFGCTORPIWESIZKYGAGZAFEMYYBYPQEM");
    msg.visibility.assign("JMLCKMBGSBPOYEQRTQJFGRFISZYOQZRCTWCXWEXZNKZDR");
    msg.scope.assign("RULCYQHBBJIJONMDLCEPZZKALLLZWSEKMWNSTGEXGFWHLMZYXMBADBTBVNGHKEQRCHOTJURTFRPDAFGACPTAYJNWZAMPZQPWPTWKABDQEWPVXJRYSRJWSZONFIGQHXJICXLGUOTASMJDXSVCBKGKDRRIXNMSQQINFNYEPXIHFZINMCTGMIVOHFKUCLBPVTLOJXFQKDSBLUOUKMVBIFJGYUVHXHOYVUCEHOYSRYTKVDWEIRQSCNQWAVPFGY");

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
    msg.setTimeStamp(0.605755369833);
    msg.setSource(24352U);
    msg.setSourceEntity(146U);
    msg.setDestination(45369U);
    msg.setDestinationEntity(17U);
    msg.name.assign("UTUPSFKPMRMXVLMBLRXWTTCLWANXSJPVCZASXKLSPSYOFUNPQFGYQCAEWTQDWOJCTDQBXNBWNAYQSRMPUUICMLTDJKJSVWHUCVYDONXUNBLUGJRIGZHIJBZGHTILYSZKOCGGWHCFEWETPSAMVRRGIHGOQQKIZKECOJYWOLJENARFKVLYHBKMPEXFVEHVTGBZRZEHBJYZAH");

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
    msg.setTimeStamp(0.196636816837);
    msg.setSource(10177U);
    msg.setSourceEntity(138U);
    msg.setDestination(12311U);
    msg.setDestinationEntity(154U);
    msg.name.assign("FOQNPRFSLQBHKCTGXZGRAHDHVLUELKVVVELW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BKNQPXULEWLXQMGHPKWSIISSAUZONHDZDOFFCXAWKFBBPXRIDBDNCCZPYSGPEEHUGEMOETYXWTQJPNVMMHSSIGUWGPJHXWXOMNQYOIDZVZBCEPBUQBBJFJNODVVMYGRCLOFPLZVYEHTRUVGRHAVMCTZZOYRWTYCMWAJQAMSANFJRI");
    tmp_msg_0.value.assign("IDFQODXNCNALEEMHPFAKFMFMQYVHBBOAGBWNPPUVQYXGIZOJDJJNTEAESBSECOIWHNMLPLRIQACKOVZQJSMCQFKFYTZCOXJLRQMXWDGYZYUVWIMYPXLWRQUBGAPCUUAWRPFMPRJ");
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
    msg.setTimeStamp(0.79725961431);
    msg.setSource(49165U);
    msg.setSourceEntity(95U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(200U);
    msg.name.assign("MCOHSVQWHOPRIDIQJRURUAIKGOAWPQWAOQCVXVBLPACUCMDNWAVVTBBFKSHYKXUERYZJFYIPRYETNSWKWXEBYUDUCHWMRWJZUINGSBQLFCTEZXSZMSKLJDPIHOXEBZJKINCDQKHEMJZOLAIXERFZTFDRLYBSONRVEDVTUQOGGOPJTIJDPACBDGSUMQMLGFSZJFCXUPHMFPYMLWIYGLYLOXAEVGGZKAZEKLGVHFCTNQRVKANYTJPBBXQMTNF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WRUERTDFEXNFUGSYPQNGAEEVCTFKJYWPBGOJSJOZJCHMGTOCRWHLXIXZKIYIMHDCSURZUEUPYWVFLKAMQSOONMAUWSEOBEIXXKFNSCKXKQCEBXHLQUYCLNWBIXQPIVEBVMHQYDWZZBJTPKJILBAQJNYRRDGFAAPZVORVNYICCPABLTVGNFTZPTWYHQSPACGGOMUXDMSLARDJRKGLXGMBRTUVTHJNNKDQIIQLDDS");
    tmp_msg_0.value.assign("UAKUDIROLJJDBLUZYMNZTVKXMQLMEUPEOFWSEAAPZCYXPNNYVTWFJKCGDALHDRHYVFQHJYXXJZSXRDBLOSUTBDTPUZLIYWUVQFYFIGPSOYDTHKNZTPFZGVNRHSTNFQWQSEGWMBOLRVNFARBARGMAJTVZWHUEHMWONSFJGEEKYRPBINKHCYOTKGD");
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
    msg.setTimeStamp(0.0942396813691);
    msg.setSource(1923U);
    msg.setSourceEntity(158U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(61U);
    msg.name.assign("FXYXUNMMGZLKSFOFLRBFNQBNKUMOHLCIVYYEJOXSZDQAMSHTCAEGRRTDQLZIMWKQXJMBQQXPZTGDZVLSEIQGVLKKCOAAKDPBKBRUXF");

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
    msg.setTimeStamp(0.167659467146);
    msg.setSource(7030U);
    msg.setSourceEntity(169U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(161U);
    msg.name.assign("XJRSNISHWKLAMWTSYCEGUFOJUIETLVPBEQFIPYCMTYLJWVJYXPHSPXRTTVYEAWLOQII");

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
    msg.setTimeStamp(0.430197721801);
    msg.setSource(62122U);
    msg.setSourceEntity(231U);
    msg.setDestination(50640U);
    msg.setDestinationEntity(59U);
    msg.name.assign("QFAKKXIAGZKHBKCHMULRBYXASMJVIUNBOSNSDYRMVWYJSBT");

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
    msg.setTimeStamp(0.641466853378);
    msg.setSource(60893U);
    msg.setSourceEntity(129U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(190U);
    msg.timeout = 2370808459U;

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
    msg.setTimeStamp(0.0918235942049);
    msg.setSource(54344U);
    msg.setSourceEntity(25U);
    msg.setDestination(34438U);
    msg.setDestinationEntity(191U);
    msg.timeout = 879309613U;

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
    msg.setTimeStamp(0.21107572591);
    msg.setSource(25832U);
    msg.setSourceEntity(120U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(58U);
    msg.timeout = 2186771093U;

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
    msg.setTimeStamp(0.087693895327);
    msg.setSource(36439U);
    msg.setSourceEntity(4U);
    msg.setDestination(51217U);
    msg.setDestinationEntity(195U);
    msg.sessid = 265424526U;

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
    msg.setTimeStamp(0.431227019783);
    msg.setSource(40491U);
    msg.setSourceEntity(45U);
    msg.setDestination(9151U);
    msg.setDestinationEntity(137U);
    msg.sessid = 3640786907U;

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
    msg.setTimeStamp(0.0263845663854);
    msg.setSource(25680U);
    msg.setSourceEntity(167U);
    msg.setDestination(11668U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1054707932U;

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
    msg.setTimeStamp(0.525273358686);
    msg.setSource(34847U);
    msg.setSourceEntity(223U);
    msg.setDestination(21908U);
    msg.setDestinationEntity(162U);
    msg.sessid = 1362107581U;
    msg.messages.assign("ERNKTWPJGLISRWSKNIFQVATKDXTJVWVKJLHJVEPOXYJPNPHAYEYQAOISLZGPQINJF");

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
    msg.setTimeStamp(0.323011775991);
    msg.setSource(58561U);
    msg.setSourceEntity(234U);
    msg.setDestination(645U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1109111389U;
    msg.messages.assign("SIXAPPFSTYCZHOYSLRBHNKOJHPBGZKBEJCTUJRTMTSHNXCMLRAWIALJPQHAIZNXDDLVVTYXWHGNVHTVCKQOOQFUGEYKLUQQOBRFSMKKTOPREPWJQDFHFBDESEFIGMZMDIALUJNLRVYEEUDTHZQKPTIXKBBPJCIQVPMEDWCZC");

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
    msg.setTimeStamp(0.733743317563);
    msg.setSource(42322U);
    msg.setSourceEntity(56U);
    msg.setDestination(2373U);
    msg.setDestinationEntity(223U);
    msg.sessid = 3902480052U;
    msg.messages.assign("DITUVRRZKYXNPZFGFSBKEEKDMFCCCUEAILBYNMILSAKLWSNFARLYQOFABNUNJJMLREJOVKCUTXULU");

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
    msg.setTimeStamp(0.469625172593);
    msg.setSource(11087U);
    msg.setSourceEntity(58U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(226U);
    msg.sessid = 1167483322U;

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
    msg.setTimeStamp(0.112096750291);
    msg.setSource(53776U);
    msg.setSourceEntity(201U);
    msg.setDestination(6019U);
    msg.setDestinationEntity(131U);
    msg.sessid = 2962332395U;

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
    msg.setTimeStamp(0.923144269711);
    msg.setSource(29454U);
    msg.setSourceEntity(73U);
    msg.setDestination(64300U);
    msg.setDestinationEntity(151U);
    msg.sessid = 4237450603U;

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
    msg.setTimeStamp(0.954720443579);
    msg.setSource(24035U);
    msg.setSourceEntity(133U);
    msg.setDestination(52833U);
    msg.setDestinationEntity(90U);
    msg.sessid = 1689518965U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.561589002143);
    msg.setSource(35946U);
    msg.setSourceEntity(231U);
    msg.setDestination(55900U);
    msg.setDestinationEntity(127U);
    msg.sessid = 2101432489U;
    msg.status = 66U;

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
    msg.setTimeStamp(0.734754528828);
    msg.setSource(27463U);
    msg.setSourceEntity(146U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2360187636U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.29503647379);
    msg.setSource(36921U);
    msg.setSourceEntity(121U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(192U);
    msg.name.assign("LZKOXPFJJNGMRBXDFDBCVXCROOYADVMLRWMLICEORODAWCIOTNFZNHXQUYKSGGFITMVRPXTIIYKDYPLRHWHMHBSOHGECBVTGTJHQAPUGMOPJAJQSMNFKWYPXZCVSZVBTVLDQJRUMUBOGKXWYBLDSGQRUHWZERUCSKWYZZXNAQITQIPFEFKPCNQKFEZEGSNSFYBVQWKNSMLHBCPUIIABENJRVJHWDLWXDYZDZVCSHTTAPXALT");

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
    msg.setTimeStamp(0.232561997433);
    msg.setSource(9210U);
    msg.setSourceEntity(200U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(212U);
    msg.name.assign("IJIPXQXSHBUILOWEQSPVMGMDVCRTWRWFPKCSUXPASTAPRGLCCBQWUCBLZANEJLANKHZNOYGFVHBKDGIFQFRHGPKZBMOSGJKWWXDMYFFHWJLMPTALWVJTSZNQINMDSUGJDUOYSNXUBDBZKJGASXNJGKKDHEVURKLQLECVFTYRIFVAVIYRPAEAJGZRCXOHITUQQBUVOMZZMPJTWYDBSOYOTHHKXLM");

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
    msg.setTimeStamp(0.47182941333);
    msg.setSource(50960U);
    msg.setSourceEntity(47U);
    msg.setDestination(38U);
    msg.setDestinationEntity(179U);
    msg.name.assign("FWFSRQHNJDNIWLCHZTBGZZOUERUVNVFLCPKGRTSISBHZKAZGDPHFVWUVQTYXPCPOWBALVQJMGPFXHJKYFIFUWCRMQMTAZQERCQSUKAECUMAHZCNYODGREWGGKBBYJSFTXGLYZWITS");

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
    msg.setTimeStamp(0.444596875459);
    msg.setSource(1554U);
    msg.setSourceEntity(71U);
    msg.setDestination(17444U);
    msg.setDestinationEntity(110U);
    msg.name.assign("DVISUMMPQLRQLYGAHIBIZVJBABEMNJZAPLMHVNCPIDDAMOPSTRUTSBTQRXBKAXTHWNEKWYZWLADUYJHVZKOTMJZVOLKSODNLOWXDANDOUIQQJXURSBIBFYYNTKYPRWVPXXWSHJFMGUIKPFDHINQJCREBOPSSIICYWNVFQFREHJCEGTWCKFCAFMCZERYQTKUORUGKESGFGHOBLLCREZWJAULEXYGDHTPABFGMPGZMQXVHXVNXCDJZTW");

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
    msg.setTimeStamp(0.450996967755);
    msg.setSource(58973U);
    msg.setSourceEntity(251U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(227U);
    msg.name.assign("MRHFKNYUKOZNRHFAEUVCIKVGEDHGNBLEXZKDABJWDKFBACLQDVXUASRURUIRLABQCFZAJPPQZDBJVYXSDQHEQSMGWLYVNFROGOAHIHRHQPJPVOCJLCOGDLJOMABGJLPWKHLUTMZNFTXTBGKBMKIRCLBPEASXUZIQFSXUYVKYMYYQXFT");

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
    msg.setTimeStamp(0.857789943129);
    msg.setSource(29311U);
    msg.setSourceEntity(95U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(196U);
    msg.name.assign("YPKKVWKXYJKHQLCRQZLSDPUPOFNFFWUAGVZ");

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
    msg.setTimeStamp(0.0693518844261);
    msg.setSource(63591U);
    msg.setSourceEntity(18U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(70U);
    msg.action = 25U;
    msg.longain = 3607788787U;
    msg.latgain = 31068333U;
    msg.bondthick = 2465926062U;
    msg.leadgain = 668174455U;
    msg.deconflgain = 1700737328U;

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
    msg.setTimeStamp(0.343139636544);
    msg.setSource(53316U);
    msg.setSourceEntity(139U);
    msg.setDestination(51247U);
    msg.setDestinationEntity(174U);
    msg.action = 241U;
    msg.longain = 3898123280U;
    msg.latgain = 2898458127U;
    msg.bondthick = 383552297U;
    msg.leadgain = 656355770U;
    msg.deconflgain = 2904839744U;

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
    msg.setTimeStamp(0.384193572424);
    msg.setSource(14100U);
    msg.setSourceEntity(133U);
    msg.setDestination(38252U);
    msg.setDestinationEntity(66U);
    msg.action = 106U;
    msg.longain = 1930284935U;
    msg.latgain = 3944642870U;
    msg.bondthick = 624910296U;
    msg.leadgain = 3253199191U;
    msg.deconflgain = 3360547775U;

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
