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
    msg.setTimeStamp(0.7856635280219098);
    msg.setSource(59592U);
    msg.setSourceEntity(69U);
    msg.setDestination(56832U);
    msg.setDestinationEntity(191U);
    msg.state = 77U;
    msg.flags = 36U;
    msg.description.assign("QNZHBWQTJFRAIJORFPMCUMEIDJONJ");

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
    msg.setTimeStamp(0.3131661834026227);
    msg.setSource(60058U);
    msg.setSourceEntity(81U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(52U);
    msg.state = 144U;
    msg.flags = 171U;
    msg.description.assign("LDKUHNQTDKZGAXCMPOEOIDQMWFTTKRTVWZVGRLLWHIQDKUPEUXHERKZCVTCBVFXZBIRBLPPKBGMOWMHSSNZHSJXUTNGBSCFZVEIEXAYLPMJCXJYYOAYJVAVPZQUDPPELNFNHTYWZRUEFRCEDXRXOWUBWMLCNDQIRFIFBMPBMAKNAASZOSYMLWDZOCLIMAETOFSCVJIYHWOLGQOJBRQGDJG");

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
    msg.setTimeStamp(0.04556524716594035);
    msg.setSource(59797U);
    msg.setSourceEntity(11U);
    msg.setDestination(51808U);
    msg.setDestinationEntity(40U);
    msg.state = 97U;
    msg.flags = 246U;
    msg.description.assign("HYRITHRXDXJDBCYSZKKXESGLFMXWAVSJHAWMDUDVSLQULL");

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
    msg.setTimeStamp(0.06623276469891082);
    msg.setSource(30650U);
    msg.setSourceEntity(72U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.5721564801385723);
    msg.setSource(43882U);
    msg.setSourceEntity(176U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.8341108188866403);
    msg.setSource(44476U);
    msg.setSourceEntity(203U);
    msg.setDestination(1494U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.8793316386291437);
    msg.setSource(57146U);
    msg.setSourceEntity(202U);
    msg.setDestination(349U);
    msg.setDestinationEntity(64U);
    msg.id = 66U;
    msg.label.assign("PUJHPHMARXWLZWGCJYSHUMCUOZSVENPHYANFTLQKLQESKCYDFLFRUB");
    msg.component.assign("NMCDQZYSMDPBRWVCHZGFVOMLDTXZVCACXYTUQSLNJUZIWRJXCQZPVSBDRWOIFMEEY");
    msg.act_time = 1814U;
    msg.deact_time = 7024U;

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
    msg.setTimeStamp(0.5877802506169084);
    msg.setSource(9621U);
    msg.setSourceEntity(238U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(248U);
    msg.id = 147U;
    msg.label.assign("CAHEOXQUHNBXFNXNPWKFPAZWSAKKVEOJULSGOOFPMEVUZNHIBBQBQJILMZAXJYYPLAGOTENKEKGYRDIOYBZGJSTRXOUKQTZECRCSQCQMDALHWZXLSPNHDTBSQEDPDZBBYRSPWCTFWXBTZDHQQAFJGEUIGDUNORFCHRVSFLGCTMSUIYWZ");
    msg.component.assign("JABGCBUFHSVNFKVLOSOLCUTWUJDQWSAOZGXSBDEQTMETBGZHBSXDIYLTCIAERZZKZQYYCCWUIPFLALXMNNYALZLKUMNICYCFJWPOD");
    msg.act_time = 53662U;
    msg.deact_time = 30213U;

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
    msg.setTimeStamp(0.5690220945733097);
    msg.setSource(43253U);
    msg.setSourceEntity(146U);
    msg.setDestination(21870U);
    msg.setDestinationEntity(213U);
    msg.id = 164U;
    msg.label.assign("XCLSNQZSRCQLFNJXDBHGPYQOOKMABPOTXBBAFYJHDOGMSXNMMNAILREVITVSNLUN");
    msg.component.assign("NROICEQZYDSUSQGSWMQADBTGYMTVRUUIXTWZWBQDGHAEAFVGLRVIOFBPBEXMKTNXERFSVSEZFDRFYJOTQEHHWAJKXYISXZHZLALLXKFNYBPLJFOFHPHMMNDKCQUKVNOJBLULOJ");
    msg.act_time = 49876U;
    msg.deact_time = 32617U;

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
    msg.setTimeStamp(0.6348261534796643);
    msg.setSource(1752U);
    msg.setSourceEntity(195U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(223U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.29029445467826165);
    msg.setSource(28269U);
    msg.setSourceEntity(114U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(3U);
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
    msg.setTimeStamp(0.08701416223697744);
    msg.setSource(22579U);
    msg.setSourceEntity(243U);
    msg.setDestination(65138U);
    msg.setDestinationEntity(141U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.6670315092108338);
    msg.setSource(564U);
    msg.setSourceEntity(86U);
    msg.setDestination(24311U);
    msg.setDestinationEntity(65U);
    msg.op = 244U;
    msg.list.assign("PLGBFEUUZYIYGMKSSNPWNHJTYFZAKAHQBOZIDKUKICVQHRZTCMUKXTAPOUCVYBNWWBIMQYLFIVXPVEWIXMGO");

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
    msg.setTimeStamp(0.3084223772645248);
    msg.setSource(12485U);
    msg.setSourceEntity(148U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(100U);
    msg.op = 146U;
    msg.list.assign("CAYFYKQCXFIYPKODDIIEBZAWESNJDOCXYAAVLNYJJVBHGGPFPAUAKCRWNPXRDNOCQHUUUUEOQ");

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
    msg.setTimeStamp(0.5446725957902315);
    msg.setSource(57051U);
    msg.setSourceEntity(160U);
    msg.setDestination(63040U);
    msg.setDestinationEntity(108U);
    msg.op = 43U;
    msg.list.assign("EZGIUQDMNDWIGZMYRKMYEAKJFZXRWRQVPHYUIPPHSBSWEAODPQILSFHLQXSONUGNYPRKGTJDUVCILXPJNOHHTVFAJVCRZZJZKAKASRTYYQYWTNPOHPCVUZUKEVWMOGJXJBREYTVXJAGSLUCGFBCRFAOSAFDMANQNWBKVQBGBGJJBHTQFCDWXIRCVENNZUXKLSNVDCMUIWTPRCYULIQ");

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
    msg.setTimeStamp(0.26018260821158423);
    msg.setSource(30271U);
    msg.setSourceEntity(161U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(135U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.8054348509772974);
    msg.setSource(65013U);
    msg.setSourceEntity(167U);
    msg.setDestination(38529U);
    msg.setDestinationEntity(124U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.861649381254405);
    msg.setSource(45334U);
    msg.setSourceEntity(71U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(224U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.4717819438043208);
    msg.setSource(22764U);
    msg.setSourceEntity(4U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(215U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.5677796822167888);
    msg.setSource(57078U);
    msg.setSourceEntity(166U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(7U);
    msg.value = 112U;

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
    msg.setTimeStamp(0.05758013357249092);
    msg.setSource(6940U);
    msg.setSourceEntity(235U);
    msg.setDestination(32941U);
    msg.setDestinationEntity(185U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.6219149648745611);
    msg.setSource(41492U);
    msg.setSourceEntity(25U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("BDBRAESVZBQSAGWHCXCRDKNMDJWAFNOZXQRSHOELTYUUSMCZZZKZPKNOINXUGMRLBHXCRRYSAANMSWXHDQCTQNUOOWLFRGVJHFXMBDPZUHGKGKZAYUIPWASFBOBFUXWFJKSBQTKQOTDLCTTIPDKHWQIMZQTYCATVSN");
    msg.message_id = 56079U;

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
    msg.setTimeStamp(0.1917856073069275);
    msg.setSource(21659U);
    msg.setSourceEntity(166U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(249U);
    msg.consumer.assign("EJAPAMVTTMDZOWJQTOHGUAMZTOESRXNCUTFEYQXRXGKSFCSDJTWYLVYCBJZVHYAEAJDENDCVVAWXYSLJXCZTPDFRFQZNABGGUKVGLYQVKFFHIICWMZOEVEWHTKNGIHXHAMQHHXZGLDXWBNQKFNQMOMNIDKJRYYFAEWNTTNXZKHUSDKBOLHOPBZNSO");
    msg.message_id = 23800U;

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
    msg.setTimeStamp(0.9417711545655645);
    msg.setSource(36595U);
    msg.setSourceEntity(68U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("XEMJEFQMIIZQDJEUNPNCSDOPWSYTPUTRYRLSCHEPBDUUPFCHQPSHJTQIMRDOZXDNY");
    msg.message_id = 54677U;

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
    msg.setTimeStamp(0.8417635846520626);
    msg.setSource(59359U);
    msg.setSourceEntity(166U);
    msg.setDestination(26660U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.34923286233979833);
    msg.setSource(18147U);
    msg.setSourceEntity(96U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.21660016980672003);
    msg.setSource(16245U);
    msg.setSourceEntity(21U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.2916660159002782);
    msg.setSource(36794U);
    msg.setSourceEntity(25U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(95U);
    msg.section.assign("VHIBEYQTDVMLGJPUXNGXNFEPIVATCFYMZXVAGQDBBKSDMAAYLWLJOOEXHFGOBAZQUCLHEDJONRGFDCUOSMZPYJCSXZYTWRCBEJRVDXAVD");
    msg.param.assign("SMMZXOWWNJDPPJWPTIYTLJZUKBAKAXYELSAGGIQBSRYCGZRJRPTXZONGCQLBVUFERDVFDTIFMJJMKLHERYPGBUIRDGQZEIDTXTYWNSUVVISCCUOUXQYYAQAMHZHKLDZZRLKNDUBRZTJLDPIMPVGRWOMXKGOXOKNTNVEEJDCSQWJECDNVUPAXMHWWCVCUFEFPFFBEYCWBUASVNEGTOFMHQC");
    msg.value.assign("WQXXICAZOBZXMNADHVFXMSRSPTREMIIOBIMSZJWEHBNYKJGTGOUFVLSNXBAULBUYQPINDECQFFOLURWWSRKZUTSUBXQMRSUIMWVYGICOTFNECPRQJFWBKVTKLXKLADEOJZYHAGGUWTPATAJEYSYHCQRAYYPNKRHMDLCQNCFMYDRLDWGTVXADWKECULEPXANDKOPVCEVXJJOYPFILHMZILQUZHDVFZ");

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
    msg.setTimeStamp(0.3979102016272079);
    msg.setSource(61636U);
    msg.setSourceEntity(170U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(200U);
    msg.section.assign("XVPKGRILFWKWDQJYUFCMVHCBQGXSAJHKAMXPIUZKZPVGSTFEZUGZFZXADVHCAMJLRDYRMILTCUNHQVOERHAGMBXSFKPHZCJCYIOWNYFYIBUTYBONTWCMOZTDKIEIQJLSTSLINYIDONDBENOWQWZBCLEKSMSUUOYVKJHHVO");
    msg.param.assign("IORAQITGLNJDDKXJABEDBNHRCJVVYHSQKMUDCYHKXNGYAUUKSCSFWIGQMGJCTZYETJNFOOVWESIAWVXTBLJPWYNSMKZYMVNRRZTHWQFUNZSWJCPGBOIXVEIEUFUHOPAXBVRLOPEPCXWXPBQGGACDYHZACQTZKTMDAMFWIHXUFTYMSKO");
    msg.value.assign("NBYPQRVJWPGXEARDMLCUAGIBOHJKFUIYWCLXBRUGKZNKJOMDCJNKFHEBYPBQNYUTHBPUNKPXFUFEMSCORMSQACAVXMORTMDIQDXIZKJQMOEQFELHXVTGGFLDWHYFGZLSQHXOSSUOOEGVAIVZAMHUXKTWDWGVGNNZTLHCFKZMIZWQAAYVNTNAXYEZILLFEXDTTPGWCHSIFPTV");

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
    msg.setTimeStamp(0.7082850401097945);
    msg.setSource(60620U);
    msg.setSourceEntity(56U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(193U);
    msg.section.assign("HXAYBDMGVEJHOJSKAJPZFINTCKHAQFIQGRVCVCZNEGRAQYPKRISJYXTXXYNBZCFSLXKZFALSYULGSCWTETUUCJTLSTVDJTYWYIRSFZKUWMWNGQMVOHEPJSNXIKZDNRPBOGCOKKPKDRPZQIHLVRDBYTMBEICNGXRASML");
    msg.param.assign("QCRSJBTMCQBCZKGGHRONHRODKNETIKPYEDDYNWXAHIBVHKYWVBQOVFUWNPCMCHUXZGCSBBUEAUVOWGGDVYTZLJPIAEKMLVNIXOZOLPMTZLBWQVVIMHEJJLAPTXFFFMSCQCNSBDVGHLJYYSATNXRFORDADRAXQHUOJVGNPAGYDFSXZRWZYFZEJUGQPLPAJGLLXDJMBUCRTZKNOKEHIDYR");
    msg.value.assign("LEWMQJHKTKACZOCKAYYFVVSQWJQHXAVXJTRCUSIJLOBZZKZADBIVCPNAGZOBIJQOPAIJDYRKNXQSXZWTOPPYKRTSQNUIFTGETLNRMFAXQGCURXRDFCSGDBAUIYSVWROGBFHFMDTOLCKWHWSFGNPVSLUXZDHHEMQMYNMKEYGPMVWOUFTNLCXBRESTXM");

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
    msg.setTimeStamp(0.8208895746781502);
    msg.setSource(52830U);
    msg.setSourceEntity(220U);
    msg.setDestination(46635U);
    msg.setDestinationEntity(141U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.2554717020620778);
    msg.setSource(46355U);
    msg.setSourceEntity(227U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(214U);
    msg.op = 51U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("AZSSKCGYXUXEJGVFVFUYNQTEPIEOEYRHVLWDGBFQFIIFWKJDNNFKGDOCNLTKMDPKAVZPHGKWHIS");
    tmp_msg_0.param.assign("VQVMINKWUTFJXD");
    tmp_msg_0.value.assign("CACQVODGCTDDPSQMUGLBPADOMHJYAZLQYXPDJEWJSHMHIRCISLMLRYWTGPMGETBHYQJWHATKVTVGNZRIIXICHGNUNBPXKZYIAUSOSPEQIXQHNZYFFAFMZWNPYTUKHJNLQQOHOFQTWRWBBLMELI");
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
    msg.setTimeStamp(0.3821804937595733);
    msg.setSource(38350U);
    msg.setSourceEntity(180U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(28U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.5266430742946027);
    msg.setSource(48987U);
    msg.setSourceEntity(167U);
    msg.setDestination(36801U);
    msg.setDestinationEntity(24U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.08386094630819074);
    msg.setSource(18789U);
    msg.setSourceEntity(121U);
    msg.setDestination(42360U);
    msg.setDestinationEntity(15U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.3220330399569614);
    msg.setSource(63386U);
    msg.setSourceEntity(90U);
    msg.setDestination(12843U);
    msg.setDestinationEntity(111U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.6024352658184225);
    msg.setSource(22898U);
    msg.setSourceEntity(205U);
    msg.setDestination(54727U);
    msg.setDestinationEntity(159U);
    msg.total_steps = 15U;
    msg.step_number = 144U;
    msg.step.assign("TDISCYPECKQNKHZEMOUOEGCEJOHV");
    msg.flags = 252U;

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
    msg.setTimeStamp(0.5338105601665739);
    msg.setSource(44046U);
    msg.setSourceEntity(118U);
    msg.setDestination(21519U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 210U;
    msg.step_number = 135U;
    msg.step.assign("RLPDUTGEKUGPPMCQBWVWHLXQZNSGWYWBDKCETOFSAJTIZLPESXQUJECB");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.6586197803047308);
    msg.setSource(14021U);
    msg.setSourceEntity(106U);
    msg.setDestination(7811U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 43U;
    msg.step_number = 232U;
    msg.step.assign("FKTOFCUSZPNUCIQKXPJGWUNPHVHSXHDRMMWGQMJFAZMBQZAABVAIMLJFDYGKVTCNTVSILCYELQOPPLAASGOIDYEJXJHRZERNQQMCXGDNEIQXVCYJUQOKYEOHCCILILOFGHCDMTSFWSNGTKYNAEBWKMADKZWLGZJPBXBEFPFTHVVHAWRVJNDKUUZUUNORXRGDLRTISKBPRHOYWSQDEVUHMVWIYBSJTYLEOWXKCLZNGPXFOZQBD");
    msg.flags = 7U;

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
    msg.setTimeStamp(0.04087418399274101);
    msg.setSource(63283U);
    msg.setSourceEntity(165U);
    msg.setDestination(24420U);
    msg.setDestinationEntity(3U);
    msg.state = 79U;
    msg.error.assign("BECQZDYRLUTWUXJFWQOOWYVIIJAQRLGKDFXSIZSCDCDKJMISNZAQFOJTXUKIMPTDZNXENGWPF");

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
    msg.setTimeStamp(0.42214028240468005);
    msg.setSource(4018U);
    msg.setSourceEntity(174U);
    msg.setDestination(58582U);
    msg.setDestinationEntity(151U);
    msg.state = 118U;
    msg.error.assign("BXEAVTCNIAWYCMZSNAZXGQGIBXBPROBYNAQVDKU");

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
    msg.setTimeStamp(0.15890199140154526);
    msg.setSource(46675U);
    msg.setSourceEntity(195U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(133U);
    msg.state = 121U;
    msg.error.assign("FNNCEQCSPPRXFZPZZVXNOAHJFSXBYWEJOCDIIQOVMIMHWTWRMUJRODEWNWTKBHQTFGCXJKQPWOTGFGVTGKJARXSHTRIPZHFKZHSEMQLEPYWCUJPGIXOBCOQMDUWOHBRGITSVWZVRNMFSSSCKEAGZUUFYPKY");

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
    msg.setTimeStamp(0.46390253037762663);
    msg.setSource(22589U);
    msg.setSourceEntity(159U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.17106234335825254);
    msg.setSource(35404U);
    msg.setSourceEntity(138U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.7850587990194017);
    msg.setSource(42406U);
    msg.setSourceEntity(154U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.9217636214525281);
    msg.setSource(45423U);
    msg.setSourceEntity(124U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.2927276894563515;
    msg.lon = 0.3387606400308978;
    msg.height = 0.21645530417251613;
    msg.x = 0.332706803856026;
    msg.y = 0.2520652047904861;
    msg.z = 0.3505535846457717;
    msg.phi = 0.1525986252020387;
    msg.theta = 0.24786059711385444;
    msg.psi = 0.8460377423631292;
    msg.u = 0.002846405050306755;
    msg.v = 0.39114571502253814;
    msg.w = 0.9130469823223346;
    msg.p = 0.2937803815147265;
    msg.q = 0.8236159010029891;
    msg.r = 0.37351927426427356;
    msg.svx = 0.9621368991817835;
    msg.svy = 0.7959762387763221;
    msg.svz = 0.05493553708047072;

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
    msg.setTimeStamp(0.9305415964008015);
    msg.setSource(64058U);
    msg.setSourceEntity(217U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.13830881819382013;
    msg.lon = 0.13566761474040057;
    msg.height = 0.5049474042287435;
    msg.x = 0.05948063482687993;
    msg.y = 0.22413409907537574;
    msg.z = 0.8567576392995438;
    msg.phi = 0.037605300171957845;
    msg.theta = 0.6236342347944447;
    msg.psi = 0.28704532546179495;
    msg.u = 0.1152131518336218;
    msg.v = 0.8230626820915986;
    msg.w = 0.8040618239251439;
    msg.p = 0.8185021390822772;
    msg.q = 0.07302932344818203;
    msg.r = 0.6176427004058941;
    msg.svx = 0.5454967724753962;
    msg.svy = 0.002178192924756628;
    msg.svz = 0.29798678724285776;

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
    msg.setTimeStamp(0.8178364527413957);
    msg.setSource(4012U);
    msg.setSourceEntity(14U);
    msg.setDestination(8896U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.5370636021673166;
    msg.lon = 0.10525215029926582;
    msg.height = 0.2398290461493492;
    msg.x = 0.5655237641912126;
    msg.y = 0.06024421242706801;
    msg.z = 0.43505479646612466;
    msg.phi = 0.09361745695101575;
    msg.theta = 0.4487264142584947;
    msg.psi = 0.24847332781811626;
    msg.u = 0.046089908908481414;
    msg.v = 0.3638208539408868;
    msg.w = 0.666331582750869;
    msg.p = 0.9868368939115001;
    msg.q = 0.6526619077191391;
    msg.r = 0.19727128035369146;
    msg.svx = 0.8206719139860476;
    msg.svy = 0.36625987719165676;
    msg.svz = 0.8920859913336315;

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
    msg.setTimeStamp(0.8762957881043012);
    msg.setSource(15024U);
    msg.setSourceEntity(118U);
    msg.setDestination(21506U);
    msg.setDestinationEntity(178U);
    msg.op = 168U;
    msg.entities.assign("NBRFHULPOGIHVPIRUGLQELOLSZTZXWYANZUJKSGBEPODLRNYDHWYFMRIBTPUXJSKFBXNHPCEWLWAFMAPSILKXCCVDHIDSQCWIMEUFBRWMGAJVVABRZPOTSTXJJJYJEHQXHDUSQWFWKGUPFALSVNMCTJXYJKRBIMOVZUXDSDNMEOKOTOZZRSXTYWNIDCIFECZHHAAYZGQJQTCLTFK");

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
    msg.setTimeStamp(0.6564842598105174);
    msg.setSource(36427U);
    msg.setSourceEntity(174U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(199U);
    msg.op = 178U;
    msg.entities.assign("BRAUCAVNNBTYMGPMRHVGKMSWSOCQGMZIHQ");

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
    msg.setTimeStamp(0.8509003400210651);
    msg.setSource(8543U);
    msg.setSourceEntity(230U);
    msg.setDestination(27132U);
    msg.setDestinationEntity(126U);
    msg.op = 80U;
    msg.entities.assign("OJWQQDELLBOOYLYPRKADBPJLNWAIFWZBRAKVZQZDCUJIDKCAQSWJOPVFIAPUWSSSYZVVHVADTOYZLCEMRBKHMLYGWPJIUEFLPXTKCGIQIGPHNWGGYQQHBXRDFVZYIJKEFNXPQLNRUMBHRDBWYBNYACVOTTSCIMMUOPYUCMGFRRMTFAXMAFFJXWFURCAJTHWULENPSCRTQZXEDOKIVDHVSNGEUSQHOXKVNNLKETNSJGGXTJB");

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
    msg.setTimeStamp(0.5230867674544605);
    msg.setSource(45543U);
    msg.setSourceEntity(112U);
    msg.setDestination(36606U);
    msg.setDestinationEntity(75U);
    msg.type = 77U;
    msg.speed = 34376U;
    const char tmp_msg_0[] = {124, 48, -84, 39, 68, 114, -75, 88, 65, -81, -7, -34, 10, -116, -36, -84, -103, -6, -32, 68, 60, 124, 102, 22, 102, 77, -108, -3, -19, -43, -124, -21, -78, 60, 18, 30, -88, 56, -13, -7, -46, 69, -115, 73, 67, 104, 99, 118, 8, -24, 43, 52, -125, -96, -32, 30, -23, -121, -48, -59, -108, -117, -77, 125, 84, -38, 42, -45, -63, 113, 64, 57, 53, 2, -93, 92, 116, -4, 25, 124, 90, 114, 27, 73, 83, 87, -51, -17, -97, -42, 76, 51, 75, 119, 104, -60, -33, 113, 83, 26, -80, -126, 81, -95, 98, -46, 70, 90, -87, -28, -65, 26, 33, 7, -98, -47, -93, 59, 82, -124, 82, -24, 70, 62, 120, -85, 92, -28, -46, -44, 41, 63, -121, -100, 4, 22, 91, 111, -15, -93, 119, -21, 81, 45, 123, 8, 12, -87, -87, -102, -48, 3, -75, -42, -10, -38, -96, 45, 54, 108, -126, -55, 47, 2, -112, 82, -6, 50, -83, -95, 76, 108, -101, 22, -100, 91, -26, -58, 124, -102, 27, -16, -26, 27, 100, 98, 60, -107, 65, -10, 21, 126, -44, 85, -4, 18, 4, -12, 65, -2, -30, -114, 5, 60, 64, 44, 97, -15, 80, -90, 33, 38, -34, 14, 96, 100, -104, -67, -1, -23, -109, 36, 50, -92, -46, 17, -22, 13, 13, -58, -97, -77, -27, -34, 47, 121, 8, -104, 61, -18, -50, -88, -62, 83, 25, 25, -36};
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
    msg.setTimeStamp(0.14659092282496367);
    msg.setSource(25817U);
    msg.setSourceEntity(149U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(91U);
    msg.type = 63U;
    msg.speed = 35166U;
    const char tmp_msg_0[] = {125, -62, 80, -37, -28, -14, 31, -110, -49, 53, -90, -81, -35, -56, -21, -30, 126, -77, -109, 84, 64, -95, -59, -24, -59, 117, 67, 10, -83, 125, -6, -79, -50, -114, 48, -16, 112, -45, 57, 115, 18, 53, -59, 63, 63, 65, 2, 88, -17, -10, -3, -1, 111, 9, 28, 58, -29, -97, 43, 101, -43, 41, 43, -7, -6, -126, 38, 7};
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
    msg.setTimeStamp(0.8910445812406932);
    msg.setSource(35523U);
    msg.setSourceEntity(117U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(15U);
    msg.type = 98U;
    msg.speed = 1991U;
    const char tmp_msg_0[] = {-81, 35, 30, 124, 32, -17, -9, -116, -82, -92, -89, -89, 93, -71, -70, 102, 23, -119, -55, 16, -53, -33, 21, 72, -89, 110, -27, -25, 103, 60, 88, 102, 118, -48, 96, -80, -14, -92, 22, 94, -89, 73, -76, -25, 18, -46, -128, 103, 82, 101, -16, 31, 86, -76, -40, 29, -99, -5, -43, 62, 49, -60, 97, -101, 80, 45, 40, 93, 70, -64, 91, 7, -49, -76, 5, 20, 62, -17, -24, 44, -35, 5, 16, -88, -37, -4, 76, 106, -80, -89, 92, 74, 53, 31, 74, -31, -33, -81, -88, 24, -1, -63, -97, -16, 37, 6, 69, 52, -90, 110, 96, -84, 57, 89, 87, -68, 10, 24, 74, -42, -35, -89, -81, -101, -53, -49, -48, -76, -51, 17, 70, -125, -101, -112, 54, 95, -13, -50, 116, 97, -72, -52, 31, 19, 10, -112, -74, 98, 99, -120, 64, -45, -43, 19, 7, 19, 117, -37, -42, 74, -91, -40, 42, 114, -111, -76, -21, 82, -67, 94, 5, -32, 31, -84, -114, 46, 65, 108, 20, -74, -32, 112, -1, -77};
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
    msg.setTimeStamp(0.8655134474769919);
    msg.setSource(37093U);
    msg.setSourceEntity(242U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(35U);
    msg.available = 3436823481U;
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
    msg.setTimeStamp(0.4042818007314313);
    msg.setSource(60687U);
    msg.setSourceEntity(66U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(233U);
    msg.available = 644037307U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.9812105873764926);
    msg.setSource(52948U);
    msg.setSourceEntity(131U);
    msg.setDestination(37192U);
    msg.setDestinationEntity(174U);
    msg.available = 3922271707U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.9673010445355315);
    msg.setSource(20822U);
    msg.setSourceEntity(196U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(85U);
    msg.op = 152U;
    msg.snapshot.assign("OFYGIMKLFQDJYYVKEEGGIMDCNUBZCEXYKHSANOCIMTSAYYQPHETZASJINFOSLHRGLJDBXDGBFZOCTFFKVWZWEJLNFTYUXBGUVEZKFVNGRDADLHERVOPJSHCBQMA");
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 54U;
    tmp_msg_0.status = 59U;
    tmp_msg_0.range = 0.5137673615359261;
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
    msg.setTimeStamp(0.11582483345774941);
    msg.setSource(60339U);
    msg.setSourceEntity(88U);
    msg.setDestination(54554U);
    msg.setDestinationEntity(243U);
    msg.op = 81U;
    msg.snapshot.assign("LSUQKDPBKPUMHKYSZZLMFYSWNHCUCBSSYOCNTAGLIIPRITAUGELNABDZUPPCYOVEWSXGACWALZYFHUKCGTZGDTYGTJGFJXHVKEVVOYHHZFONVQISHINYCEVWIFERJXPMQPENRHKMWDXDRQPXINKSAFMXQANRMGZHWQRIDVFOIHTPMBKPOBZQAVTBMWSKUDYJOXTEDIMOQQJLBZGJTXDDC");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.421855976106561;
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
    msg.setTimeStamp(0.6259233370758334);
    msg.setSource(45680U);
    msg.setSourceEntity(50U);
    msg.setDestination(52239U);
    msg.setDestinationEntity(12U);
    msg.op = 254U;
    msg.snapshot.assign("ZJDZVNUEXKGAXNQXWXRCPMOPFFCBLPZKBMHJNYUUSLJWQKWMDMAGDTEONKGPLLFBHHTEVKCDEOIRUTJDOVSDRWJGWIMOCSMXQLOVUYRJLYZTMEVVFKNYICBAXOIBPPNAXISUKEGPCRDSYUQKJTVIQUHSJGQCLVAUFPREWIHTRYCORPMFMCXHVYIWTYKZ");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7362575078882385;
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
    msg.setTimeStamp(0.8572040130036868);
    msg.setSource(5343U);
    msg.setSourceEntity(21U);
    msg.setDestination(46692U);
    msg.setDestinationEntity(196U);
    msg.op = 70U;
    msg.name.assign("CVHSOOHJKPDIMUOGYCLWDPMEQPGUWJIUKTTELRSURBF");

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
    msg.setTimeStamp(0.471512503464699);
    msg.setSource(11155U);
    msg.setSourceEntity(240U);
    msg.setDestination(35806U);
    msg.setDestinationEntity(152U);
    msg.op = 65U;
    msg.name.assign("FJAJRBJZWGZKN");

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
    msg.setTimeStamp(0.039646950859089425);
    msg.setSource(54947U);
    msg.setSourceEntity(169U);
    msg.setDestination(27459U);
    msg.setDestinationEntity(125U);
    msg.op = 12U;
    msg.name.assign("LWYRMHLOAKZSVVETHEGMQJMXDXMMXFOSNEOXJPAHKHKPWDUUFCBYRNFCNATZHWZPJQFIXJDFAAQXRRPGMFBIYCGN");

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
    msg.setTimeStamp(0.07626592079069161);
    msg.setSource(21603U);
    msg.setSourceEntity(56U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(199U);
    msg.type = 70U;
    msg.htime = 0.05304634499771543;
    msg.context.assign("TLCJLPFVJKEZODLCTWYODCLSMMWRZZPPAUIZONNENNEBKGFBRCAUZXQJKSRTHFCUSJNDVBLZAOVTLCYQTDRNYRHQKMFPJRDPCBIPDELROVMXTGWODZUWWHMIMSIQKIVSUTBZRPKEGSHLXYNDDOFYSKQGVXVHBXSQNHPUEKYBJFJWFJJZIGPAAHTNTXFAEIWBXTOUC");
    msg.text.assign("QFVCMRJZSPKEYZSXNSXROOEANPBPMNTPEUGCDRBVIQIYPHNWAQCGNXHMXNSHZSCTLUYKGMWXGELOONLDYLBDSJOHRSARMZUVIRJRSRLXVYYFGWWJJTWDVNJKPVTUNBOL");

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
    msg.setTimeStamp(0.8143667674247321);
    msg.setSource(50764U);
    msg.setSourceEntity(49U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(64U);
    msg.type = 244U;
    msg.htime = 0.572749815260256;
    msg.context.assign("JLWAOYAXQVQKCJHARJUECAXLDMYHGMBMTNVKXLKZUWMCYQIDGOPDXNYPUPRUEMWFYQVSCU");
    msg.text.assign("FFMSKKQYXXQOBBRWCWVEBCKJMANYCNYSAUWGJGRWJPZDZRPWRCMJZEVTDHNQSQDNPZRYBAMAVXSHHUFNWJJIBFAVFSRKXXTRJBLONMMUVBUTCQMLODZOPRYPSCGIJJETACULQKLGAOXXYATRGKTGZFGSLZLZOUVHDFZADDPKUOLQEJFGIHHXIUWQNMVHXKBEKKPDVLIRUL");

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
    msg.setTimeStamp(0.6517399487622024);
    msg.setSource(20959U);
    msg.setSourceEntity(221U);
    msg.setDestination(14282U);
    msg.setDestinationEntity(222U);
    msg.type = 144U;
    msg.htime = 0.9488312988955298;
    msg.context.assign("SDPJSGAYRZWDVLEBFETHSOCAKUTWROJ");
    msg.text.assign("POVXENKZBFVLVMIXJOZQDHPOODFWOHXLVHTXOCZRSLNBKVXLWWJUANQNWCISAFVAMZHEPWNQMPETHMTVBUWZYERBYLGNKSZRBJJSWTTPHSGCYOUXGIOAKZBMPYMXRQ");

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
    msg.setTimeStamp(0.5628896335222419);
    msg.setSource(52049U);
    msg.setSourceEntity(0U);
    msg.setDestination(21875U);
    msg.setDestinationEntity(178U);
    msg.command = 91U;
    msg.htime = 0.7431635942508575;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 73U;
    tmp_msg_0.htime = 0.6512848122550716;
    tmp_msg_0.context.assign("WIIXYZKKEPBGFAUADOGJLSZRJEMEVZPHPTTDVSDTNFXPZKTNJDWYYVCCNXHTOBPQC");
    tmp_msg_0.text.assign("MJMMCTHIEKV");
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
    msg.setTimeStamp(0.3811750254897074);
    msg.setSource(59224U);
    msg.setSourceEntity(223U);
    msg.setDestination(41569U);
    msg.setDestinationEntity(65U);
    msg.command = 46U;
    msg.htime = 0.4056906944014962;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 166U;
    tmp_msg_0.htime = 0.699757775320043;
    tmp_msg_0.context.assign("KAZUUUAQXXLCRXUFZHHZNYJGLBXWFTEYCVHXZQLNLYBOTFGS");
    tmp_msg_0.text.assign("LDHODMSCZMRWESTKPYHGWDETQLNWQOTGJXDCMMUGWEBPFSFIAPJQWVPNIZLVJRQFZUU");
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
    msg.setTimeStamp(0.4132438646560883);
    msg.setSource(8685U);
    msg.setSourceEntity(245U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(95U);
    msg.command = 248U;
    msg.htime = 0.9382967527166406;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.htime = 0.03451171099270334;
    tmp_msg_0.context.assign("ZPBOCFZPCANMTMALOUP");
    tmp_msg_0.text.assign("VWPJHHOGOKGSPRCPWIVMOROAQUYAHAWGLWLHOAZFDHKNEHTBBKFSFCZNYMPMNTEQCMJDQBDUBPNWCXTOFXWDVKTVLAQEYQHRGZHSWGNEQSQZCRYLIRFEGATQEIPEPT");
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
    msg.setTimeStamp(0.6217134199693375);
    msg.setSource(18832U);
    msg.setSourceEntity(59U);
    msg.setDestination(40927U);
    msg.setDestinationEntity(125U);
    msg.op = 175U;
    msg.file.assign("JYNJRNLZFIURRSIEIHOPUPLBNANLDXKPJABGYLPJPKRAIMHCKFGMBYUKQMSAXCTHIKITWJBYEWPXZTGHWZEESUJIKDJUQEWWHMSETHCGJOYLOANWTCSQGOUVOVZFGLXSIDSXELGVUVLWPDDZBKWFMGDMPAPFSDVCYYXMQNCMLRYTUUQYKUEBRNKXBZZRVQFDVRDHKTFWFFVAANECHRAJVNIOOCNTSITGOXHCYFHGS");

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
    msg.setTimeStamp(0.05596637935412663);
    msg.setSource(44981U);
    msg.setSourceEntity(84U);
    msg.setDestination(22656U);
    msg.setDestinationEntity(73U);
    msg.op = 19U;
    msg.file.assign("SRNLJOBQQHYOWDMIGTGOZHVGZFNOXUMJVPTCYGWXLAXNYMKVHKASIRLKUBJJTZFVXHCWATMNABNZPELNRGJACKHFBIYIBTFFKRCRWNDBVAMLRQISDITIPEPSOUDZKWAEVBOPW");

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
    msg.setTimeStamp(0.6757788940890358);
    msg.setSource(30795U);
    msg.setSourceEntity(254U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(141U);
    msg.op = 208U;
    msg.file.assign("YKXVPCRPILKSBKPOLFXDEVLNHIAUBKBBQVEXIJ");

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
    msg.setTimeStamp(0.1362177006364571);
    msg.setSource(21731U);
    msg.setSourceEntity(65U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(205U);
    msg.op = 242U;
    msg.clock = 0.5763503862777418;
    msg.tz = 32;

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
    msg.setTimeStamp(0.9149318113433699);
    msg.setSource(54131U);
    msg.setSourceEntity(59U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(8U);
    msg.op = 204U;
    msg.clock = 0.8701894881625112;
    msg.tz = -118;

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
    msg.setTimeStamp(0.5687061567680615);
    msg.setSource(64715U);
    msg.setSourceEntity(57U);
    msg.setDestination(53631U);
    msg.setDestinationEntity(57U);
    msg.op = 77U;
    msg.clock = 0.9747928055070104;
    msg.tz = -99;

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
    msg.setTimeStamp(0.060087684611877745);
    msg.setSource(50850U);
    msg.setSourceEntity(25U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.12807336087662824);
    msg.setSource(42945U);
    msg.setSourceEntity(6U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.8711092277584517);
    msg.setSource(18844U);
    msg.setSourceEntity(6U);
    msg.setDestination(930U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.34905753477690593);
    msg.setSource(21201U);
    msg.setSourceEntity(51U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("SIOBXBKXXEAOGUDDMLAYBRUHERTAGOEQZHPCTQMYMGCDBVUELJXOCINTZZIRGJISPWZNSKYJWQNGFFPUJFCCCGNKPFURFYTMRMIVVWOUPZOHTTAAAFKJISOQVSZHHDDHHVFEWVPBXJZSMYGNVYEXJWPSYBLCPXBWLVPQREQWKWTOUHFMCXXJIJAKQLTABCNMIKUOBAELNAGTQWP");
    msg.sys_type = 66U;
    msg.owner = 54849U;
    msg.lat = 0.0304861896408698;
    msg.lon = 0.5349007398223591;
    msg.height = 0.5858810193310164;
    msg.services.assign("RYJNURWCJHSGGUKZVXIWJTLLSVNBWXPATMSXEGDVMSA");

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
    msg.setTimeStamp(0.375587510480618);
    msg.setSource(12905U);
    msg.setSourceEntity(138U);
    msg.setDestination(51179U);
    msg.setDestinationEntity(43U);
    msg.sys_name.assign("UUINWTVPHRPPDHKEFFXYONLJNI");
    msg.sys_type = 172U;
    msg.owner = 31107U;
    msg.lat = 0.43633365520712675;
    msg.lon = 0.27063004258661394;
    msg.height = 0.8436414631875373;
    msg.services.assign("ERZUQCCOCDVQSOTSMNUWFUIRKBGRJDKJWXNDXBRUUIJBHDASGLXADWJMQSDVSQJMJATFLFGEKGHIYZKLSHYZEOYMTEPFYZMXPRGTQZIEBXFCWSQNVZCIRUVCNQTRDGMHRVKOUNPEWVWXAADAJHYOHPHMTWXOHWXZEBKLGTQTBFVVJYAZSYBNELCUGNPLBVMXPKMOGFFCYPMPOULAIBSQTHGWKILZUXASJWLCOVTYJHLKCNNYOEIZ");

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
    msg.setTimeStamp(0.7879747623070382);
    msg.setSource(23126U);
    msg.setSourceEntity(197U);
    msg.setDestination(49640U);
    msg.setDestinationEntity(195U);
    msg.sys_name.assign("FWIMGPLSQWDTPSBMDJTHOTAYGZFMDPADOWVIEAGFVLXNBQJSTRNECEKHIYLMJJPSPYPMOKTUGVIDDCXNVQBQLTHHMVJHACHQKQKAVZBRIQXOQRQYCFRJFOLPGBNTZARIWCRXXAGTHDGRBYPFNVHEZVKZRFENULZGUYYNEAOOWFYIWFLSUUVIRXUSMLAIKDXGDKOSWVKEKSOEUNCJZYDLHNQZYSHZICGFECJPXTOWUXMBUCMJ");
    msg.sys_type = 11U;
    msg.owner = 8483U;
    msg.lat = 0.1627402777567456;
    msg.lon = 0.9418362774423883;
    msg.height = 0.8612207686423421;
    msg.services.assign("TJIZDIDFRQKAFPPAVMSNQBUOYAUWBYXNZGMZHQCVNBAFEPLWXYSVFDXNNKCENNNYWZFOMGLTQWZQFQGIHKWVLIBXJFCBTRSLBOILZUWPEGEUVWPKYKYMCEJKYAPTVHRSRIQBTGRBGVRAMJLPATSICIRDMOAOUEIHPDEZTVRCUXCGZMDBWQXPFZULXNPSKFULRTSNHDKWTJMMGJLEDHYQTCXZOH");

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
    msg.setTimeStamp(0.5996423841809538);
    msg.setSource(25849U);
    msg.setSourceEntity(190U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(182U);
    msg.service.assign("YHETXDCQMZIUGJXARZXHAIKVCJEPQYCYLGGDITWKYZIGZTJXVWZJBQYPHBULIF");
    msg.service_type = 126U;

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
    msg.setTimeStamp(0.960080918443552);
    msg.setSource(34592U);
    msg.setSourceEntity(122U);
    msg.setDestination(11340U);
    msg.setDestinationEntity(43U);
    msg.service.assign("WAXFCZEKODTRSEROTFSYPGBBUDXFFDLGKWBJFXOUZVBQOXLQZLRIMSYENVAQWAYHIMQMDERNCTVWQILDPHPKAIFBIUBAROWK");
    msg.service_type = 132U;

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
    msg.setTimeStamp(0.951251187958927);
    msg.setSource(2330U);
    msg.setSourceEntity(240U);
    msg.setDestination(853U);
    msg.setDestinationEntity(58U);
    msg.service.assign("TBGVFOKDJKLAFIKFIUDNXJFHELMFSYVFWQHRTSMWNWYNCGZUFHZIVNTKDUTBGLXZMPZPEWGTBCDBEYGVQARMYBEDJEROKYRSJWIJXNVDJCWHCQSXQVIXSUFQQONIBLPAG");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.1670843715059771);
    msg.setSource(32425U);
    msg.setSourceEntity(221U);
    msg.setDestination(42190U);
    msg.setDestinationEntity(75U);
    msg.value = 0.15077636326247912;

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
    msg.setTimeStamp(0.7352640530224726);
    msg.setSource(21066U);
    msg.setSourceEntity(140U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6835152885446087;

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
    msg.setTimeStamp(0.6285193598558357);
    msg.setSource(57943U);
    msg.setSourceEntity(224U);
    msg.setDestination(23426U);
    msg.setDestinationEntity(205U);
    msg.value = 0.2314644822625076;

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
    msg.setTimeStamp(0.6484668872725011);
    msg.setSource(17833U);
    msg.setSourceEntity(146U);
    msg.setDestination(61640U);
    msg.setDestinationEntity(134U);
    msg.value = 0.43417328519214715;

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
    msg.setTimeStamp(0.40998964699233464);
    msg.setSource(64690U);
    msg.setSourceEntity(117U);
    msg.setDestination(43534U);
    msg.setDestinationEntity(170U);
    msg.value = 0.2673335670474989;

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
    msg.setTimeStamp(0.9754858643970773);
    msg.setSource(2470U);
    msg.setSourceEntity(53U);
    msg.setDestination(26019U);
    msg.setDestinationEntity(209U);
    msg.value = 0.3534063971238838;

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
    msg.setTimeStamp(0.27681334105030253);
    msg.setSource(65410U);
    msg.setSourceEntity(120U);
    msg.setDestination(24105U);
    msg.setDestinationEntity(94U);
    msg.value = 0.6518448961258079;

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
    msg.setTimeStamp(0.9862788877614661);
    msg.setSource(62545U);
    msg.setSourceEntity(223U);
    msg.setDestination(2041U);
    msg.setDestinationEntity(173U);
    msg.value = 0.24293166699792823;

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
    msg.setTimeStamp(0.18001846652415698);
    msg.setSource(40596U);
    msg.setSourceEntity(124U);
    msg.setDestination(49878U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7333855270554288;

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
    msg.setTimeStamp(0.012405724450862299);
    msg.setSource(49603U);
    msg.setSourceEntity(199U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(199U);
    msg.number.assign("CFMMPXIDOFWPGZYLYMPVDWJOYVUAIGGXIIRDKEFTYGCEBMUQVEGWTJFFBCTBZPXQLMROQVKQOJGCRXNNNKWYVSERAPCYBGTOSEVFSHHZUWHCOPWSGUPJHBIKAAENDQHUPXT");
    msg.timeout = 2345U;
    msg.contents.assign("JQQFCVZYVMFFBCLAKULTRSRIEEEHQIHIQKVCCMYKWUMYBHITQRMJ");

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
    msg.setTimeStamp(0.4604877317352081);
    msg.setSource(53628U);
    msg.setSourceEntity(128U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(214U);
    msg.number.assign("QIYVRHEUZIOVWGVXJXDABTQKYDEGRBILDZQ");
    msg.timeout = 27178U;
    msg.contents.assign("TELBDVPVYHRYWBBBKZFKDQSJMVIKUFEAODPBNBLZYGUMWXZBTUYGPJDRRDRWFKIGCIQXRUFEWNWVJJLZUXUHYIQDKSISAMEJACERSJYLTEZBVCMZJSUTGANIOONEXCPNQKSKZQHY");

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
    msg.setTimeStamp(0.9621802948677615);
    msg.setSource(10484U);
    msg.setSourceEntity(175U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(125U);
    msg.number.assign("QJZMDBHNJCDLVVUOHPKFPIDXSZBTZDLTELLOYOFJXXYCALNSQPIKKRINMSOPLVGMFGICTRNQJRNIYUKUQSDGOWSMYUGRNZYDJUEDRYFQXZBPVWNWDLNPYTFESCXXWVLCOMHSIJTVROTXXG");
    msg.timeout = 24967U;
    msg.contents.assign("PHYEWDFOJFYHPDCQOGOGYYUAEILWMFMKMAWKCECYACWFPCFIBQSKUTHJESRNREQKTTOIXDFKHZRMNVBGLXXXJLVCRSCZWJNFABYZYIBCTJOEEQLLSLQREEVLGADMLWPPUYFQHRMFXNKIPHDIJMIMLNAXCRXNUZBZUWBOTR");

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
    msg.setTimeStamp(0.2047115635123139);
    msg.setSource(41279U);
    msg.setSourceEntity(81U);
    msg.setDestination(27604U);
    msg.setDestinationEntity(45U);
    msg.seq = 4158711601U;
    msg.destination.assign("TEZULTRUYQIRMQKWOYFDFZHPVAIOMEQXFSETIAPIUHFMWSVIWVWPMGZNALZNKASLJKBDKGYFYLW");
    msg.timeout = 42983U;
    const char tmp_msg_0[] = {50, 20, 58, -47, -23, -118, 46, -44, 50, 84, -91};
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
    msg.setTimeStamp(0.7627364197382368);
    msg.setSource(3986U);
    msg.setSourceEntity(220U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(240U);
    msg.seq = 3204342499U;
    msg.destination.assign("OXIKBMYKFKWQTMOYBPUEGFDQLNDOUGT");
    msg.timeout = 23209U;
    const char tmp_msg_0[] = {121, 63, 112, 120, -51, 1, -79, -23, -49, -28, -74, 3, 87, 99, 85, 67, -52, -126, -102, -123, -21, 116, 123, 94, -8, -46, 23, 56, -103, -54, 15};
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
    msg.setTimeStamp(0.40239839278116796);
    msg.setSource(56926U);
    msg.setSourceEntity(79U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(162U);
    msg.seq = 4181426803U;
    msg.destination.assign("NFHLSSDQZIQHYMDNQLTUIPTJXZIDFJEQNAGFFEAIDDNSEWEVNYMIXUCHVXNIGLGBHWJFXGEKFFSDGCPGJCDKLDWPUWSBYCZBWPPARPTLMJMJCYYXZZFKFKSXIXPVUTYJOOIJTELNQNKMVOYYXIVEROGPHKWOBUHN");
    msg.timeout = 49470U;
    const char tmp_msg_0[] = {6, 36, -103, 20, 111, 103, 103, -109, -62, 29, 57, -118, 54, 39, -107, 83, -59, -2, 80, 112, -115, 39, 84, 28, -8, 110, 59, 101, 76, 73, 65, 37, -41, 108, 124, -98, -77, -80, 22, -79, 49, -37, 98, -128, 96, -87, 3, 68, 68, -102, -48, 103, 5, -20, -47, 61, -12, -31, -16, -27, -12, -33, -45, -97, -47, 66, -81, 65, 115, -60, -79, 11, 104, -66, 85, 0, 54, -28, 14, -43, -3, -28, -32, -18, -81, 71, 21, -26, -119, 10, -104, 76, 35, -65, 41, -5, -107, -46, 123, 102, -92, 65, -51, -78, 82, 53, 105, 21, -95, 2, -127, -24, 32, -19, 116, -4, 112, -79, -13, -102, 112, -49, 82, -7, -76, -5, 30, 90, -111, -49, -115, -69, -4, 18, 38, 81, 67, 104, -10, -18, -127, 53, -42, -125, 47, 7, -102, 60, 41, 54, -7, -84, 20, 44, -16, -127, -100, 82, 110, 114, 6, 62, 114, -86, -40, 73, -100, -37, 76, 85, 100, 126, -126, 124, 23, 106, 65, -112, 4, -117, -74, 15, -111, -54, -118, 102, -46, -53, 0, 21, 68, -121, -73, -62, 72, -70, 16, 63, -13, -56, 13};
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
    msg.setTimeStamp(0.9110863153330082);
    msg.setSource(14523U);
    msg.setSourceEntity(194U);
    msg.setDestination(26413U);
    msg.setDestinationEntity(155U);
    msg.source.assign("EEXODZRKVOBZKBVFSLHTQRWXQJWVEJWJYKNDVTIOZPASEGONOAHBPSQVLGUNETGUXVRAK");
    const char tmp_msg_0[] = {-76, 2, 122, 82, -116, -35, -28, -64, -30, -98, -9, -125, -77, 53, -67, -127, 11, -109, 102, 11, -76, -84, 35, -58, -25, 97, 27, -4, -118, -13, 56, 27, -84, 113, 47, -81, -87, 68, 79, -54, -32, 99, -15, -87, 60, 7, -34, 76, 95, -37, 64, -78, 117, 103, 55, -113, -33, -116, 86, 79, 96, 25, -91, 1, 20, -63, -62, 61, 103, -83, -123, -100, -34, -13, -26, -100, 58, 106, 89, -91, 94, -59, 26, 80, -110, 28, -97, 77, -117, -6};
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
    msg.setTimeStamp(0.2942835246183362);
    msg.setSource(55394U);
    msg.setSourceEntity(28U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(128U);
    msg.source.assign("XNSIVPCSHJVFDXCNOSOFJVOEAZJEQEAJLLJXMTVGIQGIXYXREEIDRPRAZZRYRWBJGJVIPGWHSVSMRNMNTEZMWFKKGLGCYSICBVGBXYDKEBZTFKBIRDQAKMROAULXGTPBKBYHYKSKFWDTAXEODINAFNGLZWOYHTGDZJUTHVRCKCAQSDOTBCHIWYLPAVEYLNPFWKCBHDFMUMWPJOOTTWLJPSHUEPYXU");
    const char tmp_msg_0[] = {-16, 75, 85, 92, 41, 59, 125, 110, -108, -101, 7, -18, 52, -40, 24, 78, 57, -96, -108, -75, 34, -30, 73, -72, 68, 0, 3, 98, -98, -3, -93, -96, -96, 87, 39, -78, -85, -59, -49, -43, -26, 27, 81, -23, -29, -70, 73, -76, -75, -79, -7, 48};
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
    msg.setTimeStamp(0.7444357045273098);
    msg.setSource(54417U);
    msg.setSourceEntity(253U);
    msg.setDestination(16600U);
    msg.setDestinationEntity(227U);
    msg.source.assign("QVNMKMCHVSVXTAZBLMXSNFAFJAPUTBLUIQAHWOJGSMDJFQUBYXUHIUBWBWKVUKQXBIXPCOWLEVQLADXARRMSBELLKSYJTFYMYQWETZXYBACCEUNXHSOXFRQZJFIDARREPHQOPHIOYKEPHTNNWTAQCCPGTPGLIFNJERWQDMKIFVRNDSADRSJZJOMDGHNFKMDIYZOHDVRPCUHWVYKBGDGMGCFLLBYSNWVRPZOZGETIEOTPEZGJKWLOCC");
    const char tmp_msg_0[] = {92, 46, -5, 125, 34, 54, -90, 62, 58, 71, 53, -25, 119, 120, 117, -27, 103, -110, 1, 121, -21, -87, -44, -97, -116, 39, 98, -110, -61, -111, 13, -10, 68, -11, 19, -72, -32, -86, 91, -120, 44, -63, -105, 91, 102, 56, -80, -20, 73, -96, -115, -27, -63, 73, 18, -40, -78, -66, -106, 65, -70, -43, -60, -78, 38, 83, -62, 66, 21, -101, -18, 73, 80, -6, -38, 29, 105, -118, 101, -117, -71, -93, -89, 36, -62, 126, 39, 21, -12, -1, 101, -82, 71, 126, -19, 108, -103, -23, 102, -16, -119, 39, -123, 64, 122, -58, 15, -63, 116, 99, 76, -117, 32, -36, -96, -7, -49, -33, 121, 120, -79, 69, 87, -116, 52, -116, -94, -5, 45, -63, 123, 102, -59, 14, 3, -88, 20, -62, 5, -12, -84, -16, -91, 122, -59, 55, -92, 35, 94, -128, 48, 3, 49, 42, 30, 101, 60, -69, 41, -104, 26, -44};
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
    msg.setTimeStamp(0.7465240392918879);
    msg.setSource(37421U);
    msg.setSourceEntity(30U);
    msg.setDestination(51182U);
    msg.setDestinationEntity(175U);
    msg.seq = 2786912826U;
    msg.state = 16U;
    msg.error.assign("MWUBJEEIGPSYSMTQIARFPRMNPULIKZSJHCBUSYIDEHHTQDDYLTLFYKPOXQCUFLJC");

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
    msg.setTimeStamp(0.5922322661162494);
    msg.setSource(60277U);
    msg.setSourceEntity(169U);
    msg.setDestination(14033U);
    msg.setDestinationEntity(180U);
    msg.seq = 77248394U;
    msg.state = 53U;
    msg.error.assign("GFQYTGEWQXUTAVLLLAHSTCNIOKWQQKDVRNCIWSNCJQDWIBKLZZCQKDEDWLIYLPPHUYBMCFCEMNUJWSCNWZFVJCDPOPNKUUIPZOAZYGMGHIBMH");

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
    msg.setTimeStamp(0.6596123663887987);
    msg.setSource(33018U);
    msg.setSourceEntity(168U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(148U);
    msg.seq = 90343239U;
    msg.state = 76U;
    msg.error.assign("KBTODAMCZIQRWGUVBBDDUNQIFHWGHXNPKSAXUFRJDKBDAXEJXQWMISCIYNTVGBJNHKLLHZWHXO");

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
    msg.setTimeStamp(0.8268986257924207);
    msg.setSource(53085U);
    msg.setSourceEntity(195U);
    msg.setDestination(43259U);
    msg.setDestinationEntity(70U);
    msg.origin.assign("BLEUFNIWVHRJVGMQRFZTZFHXQFAZXGYBCNHJSKVLPGFWVDKYOYOWPCQGHEYBRFDKDJAHWRECTWAKATUJAPOMIELUMNDYTGFOXOIHKQBWUWLHDXVZPVGIMRILJDMSEZTHNEMZMHYCZ");
    msg.text.assign("SYYYHWDQPSUDEWYRCJBDWNMDADVOJATYZVFHMXSOZSPOSLMXVKOYGCTXBVHPTPLNWBLBJJREJZBQNACIWJHXPYXIODKRDZLGUYUAUGGNJNIUPRLIBJZHKMCKVNJQIFCGBXPWOFIUOGFKBQVTPWIRUALRQIGCWGTENAUDXDTPEOSMQKCZEFHAWRMUNQEGLHXFNAKIEYDVCOXIFLLQKEPFEARWMSUYTVZKHVSHNHM");

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
    msg.setTimeStamp(0.17871505958925504);
    msg.setSource(57336U);
    msg.setSourceEntity(72U);
    msg.setDestination(47265U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("GPPGKHQHLRBHLSVVSZCRZVRODOQRYMWGWNNRTBZEFRAIFLKTHHANHIGZJUMDSURTTPAAKHJSVUDFECYUYHBJEZDWVIXOJFZELSTAXGRARQBTFBKQLWIKCCPZVABYYIPXDMPNGSPIKPNKQQMUAOKCOFCINXDDCHIANGYTIKTVTYOLWGSLLJWGMBBXQXPFPWOQXWCYIKQOOUHFSMXDTDXBMLOSZNQUJEAUEDWBEYLMMNJNXRZFEUCCEMEJ");
    msg.text.assign("DQYRQTYQFJJCGEBQDKAQLBJZKXIYLYITCYSFGTARERMUIVFSITBCIIESLPBPPXYWDZGLAEVGHHPDKDCFUYTRTMLPRZSNCGCQINFEEVFPOWKBGUDKWCXDXREXFQNSQUTLOJABMHFXCUOOVNPBV");

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
    msg.setTimeStamp(0.6092562549029178);
    msg.setSource(27818U);
    msg.setSourceEntity(252U);
    msg.setDestination(23656U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("XPNMNZHULIAILVHIHUNMXMZMFOCCVPMGNNSNCOQWBZUVSAXEHYDJUROVEKMIIRBEZBLJPGRSUPMWFUTEYSCWRFTXKQJOQAHKKNUUYEOFRABCXLQHIPFWTHRYKCLZKGBSGVBJDZQTYLUQG");
    msg.text.assign("JIPUWSRAXFPKGYXWISYJECZNLJHZSVDZDDTQVMBQOTZSRFGCBAQLGTNHQCZPCIOBJHTOATGUFRYMHLVVENKVLEXFLKKQLUYFOWFJOFVSHMACTZIAASSNMYJFVABCDMYRUIRJHTWIEPPMBLGVOXJKPWIIXRGAERXDQXUCUNIKWEKDGHAUGZUWQPOXONHJ");

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
    msg.setTimeStamp(0.9523241210982918);
    msg.setSource(48199U);
    msg.setSourceEntity(247U);
    msg.setDestination(41105U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("DCPYUSNLEBWSTKTSQKDPHCPQRLCGDOLYTJURDFLTNYKBSXQKWOXKXJZGCHYJJCVZMTSNWWIMZDMBZTJQNAQKOTXLGERQCCZVEORVZEJVSAGNMWBOWPNDMHAIGRLVRBSRSFXFHUHF");
    msg.htime = 0.0214050953605901;
    msg.lat = 0.9933026526353911;
    msg.lon = 0.6187833281866979;
    const char tmp_msg_0[] = {91, 92, -112, 43, -53, 9, 109, 39, 106, -30, 0, -98, -59, -54, -124, 125, 78, 100, 33, -26, -22, 46, 51, 14, 27, 32, 10, 57, -4, 50, 45, -97, 83, 42, 29, 51, -55, -111, -51, 125, 34, 106, 27, -112, -67, 109, 126, -26, -30, 42, 103, -7, -72, -26, 54, -72, 124, -78, -87, 12, -70, 72, 46, -87, -115, 71, -116, -3, 39, -99, 103, 89, 104, 109, 118, -35, -18, 112, 43, 103, 38, 41, 81, 51, 9, 56, -41, -30, -98, 41, 24, -67, 125, 24, -50, 82, -78, 38, -32, -6, -1, -12, -33, 124, -79, -1, -21, 112, -119, -89, 93, 112, 124, 61, -96, -45, -121, 101, 108, -86, 48, 48, -3, -99, -93, 27, 33, 105, -49, -23, -102, -39, -105, 48, -30, -76, 108, -33, 98, -106, -49, -16, 51, -88, -115, -82, -15, -127, 109, -105, -28, -103, -30, -36, 93, 1, 102, -81, 0, -22, 89, -124, -39, -118, -53, 63, -9, -77, 58, -7, 65, -33, 98, 45, 113, -35, 57, -21, 26, 11, 60, -113, -6, 68, 51, -119, 106, -122, 2, 104, 21, -86, -38, 4, -117, 65, -119, -63, 103, -35, 69, 40, -86, -118, -30, -66, 94, 116};
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
    msg.setTimeStamp(0.5512469167249966);
    msg.setSource(59908U);
    msg.setSourceEntity(204U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("EVUAZXSSLSNQXLNTIVYJOISHEUJLPJNMVQCCUDEPRGLYSMQMYVDRTH");
    msg.htime = 0.4206466079079684;
    msg.lat = 0.5442798145115976;
    msg.lon = 0.17310135898750711;
    const char tmp_msg_0[] = {-17, 74, -19, -35, 109, -97, -87, -94, 119, -8, 112, -83, 13, 121, 62, 26, -36, -65, 45, 28, 48, 67, -7, 51, -77, 9, -127, 68, 81, 34, -79, -46, 122, -89, 119, -75, 124, -1, 90, 106, 118, -115, -35, -73, -52, 105, -8, 23, -35, -14, 9, 110, -126, 21, -103, 70, 23, -70, 112, 6, -59, -73, -25, -85, 73, -32, 77, 99, -44, -39, 24, -19, -67, 119, 67, 66, -94, -28, -6, -122, -121, -106, 124, -108, 101, -40, -46, -124, 66, 2, -89, 54, -77, 15, -24, -6, 45, -71, -57, -63, 102, 18, -117, 82, 111};
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
    msg.setTimeStamp(0.7546740094740005);
    msg.setSource(14152U);
    msg.setSourceEntity(2U);
    msg.setDestination(49025U);
    msg.setDestinationEntity(43U);
    msg.origin.assign("TFUNZOXJCSWZUEMTOFRYPJIMHMXVETQMSGEQKZQFXCRXVQLGXLIDCUKHEYVNUIWVVXQBTHVLSWBJHNUUMDLDLCMKKIYPOBZPIOBQYAEDCEGHRGCIIKFTNCZZADPJJUGUAHPJAMSABLYCCVNYSGXDUKJBMZRXRARTHTYDVWOWHTXOUAYOPWIETBPWACYKHQFVRDMSFZGQRBLSQLXRDFKPFOFIWKNPNTGSOMR");
    msg.htime = 0.6400246915357064;
    msg.lat = 0.09575011660481192;
    msg.lon = 0.46880711926756746;
    const char tmp_msg_0[] = {116, -127, 41, 62, -78, -36, 55, -88, -12, 45, 15, -84, 37, -107, -11, -84, 50, 124, 62, -74, 91, 18, 79, -60, 44, 103, 111, -87, 80, -36, 111, 32, 106, 26, 80, 15, -106, -20, -79, -112, 68, 86, -89, 109, -110, 4, -67, -84, -56, 11, 112, 34, -126, -71, 112, 11, -104, -11, 69, -40, -9, -13, -93, 25, -17, -58, 23, -102, 21, 67, -123, 83, -84, 99, 60, -103, -67, 92, 0, -65, -110, -112};
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
    msg.setTimeStamp(0.9191182796147244);
    msg.setSource(54320U);
    msg.setSourceEntity(56U);
    msg.setDestination(64192U);
    msg.setDestinationEntity(79U);
    msg.req_id = 15483U;
    msg.ttl = 2326U;
    msg.destination.assign("QIOZODRUAYXVYFAULCPUAKJEHKBUTNJCIICEODDAZMDFWTJWKGUGGEQFHVZYVWBLINYMBYDTMSDKXFSSFZZBUTWNABONVJQACEZOINAVDPHVRCSHRZ");
    const char tmp_msg_0[] = {-96, -11, -44, -30, 115, -118, 1, -2, 58, -44, -82, 106, -8, -65, 2, -110, -87, 52, -57, -126, -69, 0, -110, -73, -14, 29, 9, 2, -24, 71, 14, -106, -73, 34, 78, -39, 122, -13, 38, 84, 5, -31, 52, 99, -71, -27, -80, -32, 122, 105, -26, 77, -41, -33, 45, -122, 87, -109, 67, -92, 109, 105, 47, -125, 125, -64, 93, 83, 100, 30, 64, -22, 79, 89, 73, -108, -26, 126, -122, -110, 56, -37, 33, 1, 75, -109, -100, 47, -1, -46, 126, 81, 11, 100, 3, 67, -51, 117, 36, 7, 100, 124, -118, -35, -54, -8, 31, 33, 41, 112, -4, 30, -56, 44, -23, 10, 44, 91, -10, 41, -16, -11, 4, 88, -7, 43, -99, -65, -54, -84, 81, 90, 55, -62, 26, 95, 106, -34, 1, -74, -82, -34, 32, -24, 18, 8, 43, -111, 49, 77, -56, 120, 80, 89, 28, 2, 41, -91, -102, -87, -14, -36, 28, -26, 81, 112, 126, 53, -9, 29, 23, 64, 69, -114, -12, -14, -65, -99, -45, 85, 76, 62, 0, 28, -12, -25, 40, 86};
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
    msg.setTimeStamp(0.6751030907129594);
    msg.setSource(13515U);
    msg.setSourceEntity(46U);
    msg.setDestination(8096U);
    msg.setDestinationEntity(53U);
    msg.req_id = 19833U;
    msg.ttl = 5609U;
    msg.destination.assign("OGYXKWJRAXJQYICBVCGLTNDFTXXOIZZTJBFFPKHUJENDYXLTY");
    const char tmp_msg_0[] = {42, -76, 120, 126, 56, 46, 35, 39, -60, -15, -121, 12, -64, -98, 56, -93, 21, 60, 82, -3, -127, -117, 33, 56, 124, 19, -37, 74, -52, -36, -112, 41, 113, 0, 87, 82, -111, 96, -78, -63, -78, 107, -86, -10, 117, -21, -123, 85, -6, 48, 78, 61, -96, -12, 22, 2, -48, 9, -101, 98, -70, -18, 87, 12, 38, 51, -45, -45, -100, -117, -40, 116, -96, 2, 86, 72, -107, 89, -128, 26, 28, 91, -115, 39, 67, 126, 116, 98, -90, 33, -112, -99, 23, -45, -32, -117, -81, 22, 33, -67, 24, 41, -89, 118, 42, 43, -122, 126, -97, 87, 109, -104, 110, -2, 73, 114, 36, -64, -22, -77, -56, -128, 53, 38, 115, -17, -33, 48, -70, 90, 23, 100, -112, -126, -56, -48, -29, 43, 122, -1, 24, 116, 32, -3, 51, -69, -1, -117, -67, -90, -50, -32, 102, -78, 6, 34, 69, -41, -96, 63, -41, 26, -48, -86, -120, -38, 110, 18, 36, 42, -118, 76, 78, 42, -44, -7, -21, -66, -77, -110, -31, -10, 117, 19, -73, -54, 62, -67};
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
    msg.setTimeStamp(0.2659774475462927);
    msg.setSource(50217U);
    msg.setSourceEntity(241U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(239U);
    msg.req_id = 1727U;
    msg.ttl = 32943U;
    msg.destination.assign("JPMKSKPTPLCFYACQXZLZACOUGJLPQBBYKBGULGLGOWXVKZOZNULVJENCHLDKYHCMLYOJBEFYA");
    const char tmp_msg_0[] = {123, 19, 60, -33, -64, -65, -56, 36, -53, 113, 55, -40, 36, -60, 77, 90, 13, 29, 15, -108, 74, 96, -104, -21, -41, -37, -35, 102, 108, -120, -104, -110, 34, 42, 76, 105, -107, 109, -15, -35, -48, -104, -23, 35, 89, 60, -95, 0, 69, 13, -4, 66, -128, 7, 75, -110, -75, 87, 39, 103, -87, 88, -82, 26, 38, -87, -17, 86, 68, 59, -39, -6, 45, 83, -93, -52, 78, 84, 4, 48, -4, -59, 89, 77, -75, 35, 121, 84, -91, -8, 90, 13, -115, 24, -70, 30, -36, 100, 9, -102, -100, 123, 121, 33, -94, -118, 4, 77, 5, 126, -66, 79, -20, -54, 113, 60, 88, 78, 97, 122, -18, -19, -116, -40, 35, 65, 121, -96, 122, -42, -121, 53, -40, 105, 27, 62};
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
    msg.setTimeStamp(0.4477856254038278);
    msg.setSource(46338U);
    msg.setSourceEntity(94U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(175U);
    msg.req_id = 59104U;
    msg.status = 179U;
    msg.text.assign("BCCKMKHHXMMYBURVDJOAFUYCTJMBKSQLPSZHDQCNDTYXXSQNBRNJFQCRDHHVWZYRSKTDCZFDEFZEXUXZOJWSOOPONIAWLCCJJJSIUTCWESETJXRMVLRBXUMAIZGIWOKGZWPOEGEQEGKNMVWIFKIOKLIWUVLPAFHQFYBPIBUQRTDYATFDEEXGVILZNLLIBVJOGYPCXPALLYTRM");

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
    msg.setTimeStamp(0.7812235973903653);
    msg.setSource(36719U);
    msg.setSourceEntity(97U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(135U);
    msg.req_id = 44713U;
    msg.status = 61U;
    msg.text.assign("POTPKBSHADROFXANVPAIYXBEUESKUGTGSFWLKITEZKYCLZPMOIQDQZDJYRMUHGOZDTTTRCPHMQAYKDHFQOAIDLJFWGYCEVGUNTVYSXYKPMUEBWQIUFWJXBVRRHWELSVVSNSWIQORGDIFPOTFBXFGCNZAXQMKWGISKJBIEWOKJETPLXVJZACGHSUQKVCODOYBVJNRRNZHCNPWJUQCXGLCUNR");

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
    msg.setTimeStamp(0.16592098113321796);
    msg.setSource(33089U);
    msg.setSourceEntity(143U);
    msg.setDestination(32352U);
    msg.setDestinationEntity(141U);
    msg.req_id = 33422U;
    msg.status = 2U;
    msg.text.assign("NOVBNNMRCMUQAVUFKRFJNYICHDINWGLEWDXOQOVRYGZOALOIMNQXIKAPDBRBXIVJYETEZJGXDMAJTURPGSUFLJLCXDZGYSSXZBTHRQCHKCORVYJOQGSWFDPTIURTDGENUSGSZWENFCJYZOEPXTQKDVBUACSZOCWIWVFXYFSXYKKLAKQYZPVSVLMRAXRJOMHATIUWVPCLBGUAWHHMLQGYHDFLZBSD");

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
    msg.setTimeStamp(0.8579182582585108);
    msg.setSource(16137U);
    msg.setSourceEntity(247U);
    msg.setDestination(2407U);
    msg.setDestinationEntity(149U);
    msg.id = 122U;
    msg.range = 0.1575971189853791;

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
    msg.setTimeStamp(0.6973376254191404);
    msg.setSource(6711U);
    msg.setSourceEntity(221U);
    msg.setDestination(4492U);
    msg.setDestinationEntity(76U);
    msg.id = 168U;
    msg.range = 0.6025203087529117;

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
    msg.setTimeStamp(0.6480668997959768);
    msg.setSource(39889U);
    msg.setSourceEntity(154U);
    msg.setDestination(44409U);
    msg.setDestinationEntity(178U);
    msg.id = 144U;
    msg.range = 0.03666476975897848;

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
    msg.setTimeStamp(0.0014956593262760443);
    msg.setSource(61350U);
    msg.setSourceEntity(111U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(231U);
    msg.tx = 158U;
    msg.channel = 62U;
    msg.timer = 20759U;

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
    msg.setTimeStamp(0.6888902915106706);
    msg.setSource(15791U);
    msg.setSourceEntity(217U);
    msg.setDestination(30832U);
    msg.setDestinationEntity(250U);
    msg.tx = 195U;
    msg.channel = 220U;
    msg.timer = 64037U;

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
    msg.setTimeStamp(0.9803774934630295);
    msg.setSource(56755U);
    msg.setSourceEntity(177U);
    msg.setDestination(58925U);
    msg.setDestinationEntity(192U);
    msg.tx = 117U;
    msg.channel = 207U;
    msg.timer = 14696U;

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
    msg.setTimeStamp(0.19063137914860628);
    msg.setSource(19173U);
    msg.setSourceEntity(138U);
    msg.setDestination(45609U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("MSWCXETBGPRKRQDVMQEHDR");
    msg.lat = 0.48903348361316523;
    msg.lon = 0.43378408033331073;
    msg.depth = 0.6353919739056036;
    msg.query_channel = 123U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 115U;

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
    msg.setTimeStamp(0.4530894888072666);
    msg.setSource(23040U);
    msg.setSourceEntity(127U);
    msg.setDestination(62703U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("JSQOMYLHWFPRDEPYGFYXXPHFOSRSMZQPFDTIVBWTIEEJHOBEBKDVABSJQRZURATPXTUOAIOCMDBIZRHKNFMFFYEVQMWYNREAITCJJGJFTBPGROALBZANGROYKXSZVIGELXILLZXJHECWXGKJZETTCNMDKSIRDQVOCAKYXXLB");
    msg.lat = 0.7478382240594696;
    msg.lon = 0.8994259632325305;
    msg.depth = 0.5163474041125643;
    msg.query_channel = 218U;
    msg.reply_channel = 148U;
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
    msg.setTimeStamp(0.19479807443584374);
    msg.setSource(30278U);
    msg.setSourceEntity(232U);
    msg.setDestination(26908U);
    msg.setDestinationEntity(168U);
    msg.beacon.assign("YRFIRWJHIFPCCOLJMJWTMKQMRNFMB");
    msg.lat = 0.6577584255578821;
    msg.lon = 0.628115330849028;
    msg.depth = 0.7811781539885415;
    msg.query_channel = 6U;
    msg.reply_channel = 57U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.5235875582160341);
    msg.setSource(4478U);
    msg.setSourceEntity(108U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(167U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.13486857758304183);
    msg.setSource(6330U);
    msg.setSourceEntity(140U);
    msg.setDestination(34499U);
    msg.setDestinationEntity(172U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.13867872935396675);
    msg.setSource(19823U);
    msg.setSourceEntity(75U);
    msg.setDestination(12694U);
    msg.setDestinationEntity(21U);
    msg.op = 144U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CRYDDNSSRXTENPDHGTHMHFYBMIOYXMJPBCGRODNAMXBCBZBVJKQXFSPMN");
    tmp_msg_0.lat = 0.5061399923203235;
    tmp_msg_0.lon = 0.3581002277326024;
    tmp_msg_0.depth = 0.4368132980189251;
    tmp_msg_0.query_channel = 50U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 97U;
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
    msg.setTimeStamp(0.7408830635580009);
    msg.setSource(6394U);
    msg.setSourceEntity(219U);
    msg.setDestination(52743U);
    msg.setDestinationEntity(40U);
    msg.address = 108U;

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
    msg.setTimeStamp(0.590812688749602);
    msg.setSource(29502U);
    msg.setSourceEntity(221U);
    msg.setDestination(32015U);
    msg.setDestinationEntity(194U);
    msg.address = 72U;

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
    msg.setTimeStamp(0.9600243178403349);
    msg.setSource(52607U);
    msg.setSourceEntity(113U);
    msg.setDestination(8535U);
    msg.setDestinationEntity(104U);
    msg.address = 188U;

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
    msg.setTimeStamp(0.40531493459509726);
    msg.setSource(2231U);
    msg.setSourceEntity(99U);
    msg.setDestination(8334U);
    msg.setDestinationEntity(199U);
    msg.address = 237U;
    msg.status = 110U;
    msg.range = 0.08066535526383067;

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
    msg.setTimeStamp(0.6586155174309971);
    msg.setSource(39611U);
    msg.setSourceEntity(127U);
    msg.setDestination(64175U);
    msg.setDestinationEntity(71U);
    msg.address = 149U;
    msg.status = 73U;
    msg.range = 0.2813882531149715;

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
    msg.setTimeStamp(0.7479654004892475);
    msg.setSource(52364U);
    msg.setSourceEntity(200U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(49U);
    msg.address = 203U;
    msg.status = 207U;
    msg.range = 0.032822764275158844;

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
    msg.setTimeStamp(0.7663802939341762);
    msg.setSource(33481U);
    msg.setSourceEntity(1U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(61U);
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.571958233248831;
    tmp_msg_0.reason = 42U;
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
    msg.setTimeStamp(0.6252118737607749);
    msg.setSource(37952U);
    msg.setSourceEntity(96U);
    msg.setDestination(44719U);
    msg.setDestinationEntity(92U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 143U;
    tmp_msg_0.quality = 143U;
    tmp_msg_0.reps = 229U;
    tmp_msg_0.tsize = 98U;
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
    msg.setTimeStamp(0.7663990910424199);
    msg.setSource(20465U);
    msg.setSourceEntity(27U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(117U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 80U;
    tmp_msg_0.value = 0.9126641308318336;
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
    msg.setTimeStamp(0.4385538536462089);
    msg.setSource(52749U);
    msg.setSourceEntity(32U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(105U);
    msg.enable = 228U;

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
    msg.setTimeStamp(0.7521557098486243);
    msg.setSource(29251U);
    msg.setSourceEntity(135U);
    msg.setDestination(30283U);
    msg.setDestinationEntity(14U);
    msg.enable = 91U;

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
    msg.setTimeStamp(0.22681959338965552);
    msg.setSource(51882U);
    msg.setSourceEntity(0U);
    msg.setDestination(41085U);
    msg.setDestinationEntity(113U);
    msg.enable = 253U;

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
    msg.setTimeStamp(0.39579576913637005);
    msg.setSource(44625U);
    msg.setSourceEntity(30U);
    msg.setDestination(61715U);
    msg.setDestinationEntity(174U);
    msg.summary = 148U;
    msg.level = 78U;

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
    msg.setTimeStamp(0.42348467744874385);
    msg.setSource(53143U);
    msg.setSourceEntity(204U);
    msg.setDestination(31097U);
    msg.setDestinationEntity(234U);
    msg.summary = 235U;
    msg.level = 213U;

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
    msg.setTimeStamp(0.3602133775609415);
    msg.setSource(58588U);
    msg.setSourceEntity(71U);
    msg.setDestination(23940U);
    msg.setDestinationEntity(223U);
    msg.summary = 141U;
    msg.level = 193U;

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
    msg.setTimeStamp(0.35662894629290753);
    msg.setSource(43979U);
    msg.setSourceEntity(15U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.7182435811195302);
    msg.setSource(26222U);
    msg.setSourceEntity(197U);
    msg.setDestination(24653U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.18789402834923163);
    msg.setSource(40387U);
    msg.setSourceEntity(126U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.08684798455074094);
    msg.setSource(30744U);
    msg.setSourceEntity(246U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0060954223519392725);
    msg.setSource(56553U);
    msg.setSourceEntity(45U);
    msg.setDestination(22471U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.5056034450849414);
    msg.setSource(31608U);
    msg.setSourceEntity(47U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.9223039586262539);
    msg.setSource(51577U);
    msg.setSourceEntity(202U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(95U);
    msg.op = 159U;
    msg.system.assign("DVLLJQAAHVMMAOSICFYTBRJPWRZDKETBBSNDGWNSMRSBPMJJXTYIOFHUOMOWEDREZQROTCQWIZTVKBEYFFLLVOARYYGSCVDGTYUWSYXLIDIGLCWKFEDBHJTSYRSXVAJPLCUWRFLXYUMXTHGSUMADKWBQJZHJKXNJN");
    msg.range = 0.045642692465780454;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("THPSUAWADVEPENYTHUBEXILWHAJIUBVRJESHJDZSZRGKPIXYWYVSHNUHEMYWNFCNFQGIGWVBYWJYBLWKMPDAWEIGRZEHBOLNXGNMSEQUDOFSDKVPRKWOQTRBFYGCFICZNCFFUUOOVRXNSPSAZK");
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
    msg.setTimeStamp(0.8790277419386949);
    msg.setSource(59673U);
    msg.setSourceEntity(155U);
    msg.setDestination(10102U);
    msg.setDestinationEntity(198U);
    msg.op = 77U;
    msg.system.assign("PSNHRDHNODUDJQDTVMEERBOMHWMLY");
    msg.range = 0.994830405690344;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 87U;
    tmp_msg_0.value = 0.06455690981914164;
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
    msg.setTimeStamp(0.11480275792975281);
    msg.setSource(31850U);
    msg.setSourceEntity(172U);
    msg.setDestination(40948U);
    msg.setDestinationEntity(114U);
    msg.op = 231U;
    msg.system.assign("KSRFPAVOLJETCNLDQEQTJFVIZLVODVNXFYJXIQSEBZIKWJNCGVAMZZFAVUYOTTDM");
    msg.range = 0.19006160348932166;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.16873232701792562;
    tmp_msg_0.i = 0.968507826156866;
    tmp_msg_0.d = 0.10951560389499315;
    tmp_msg_0.a = 0.843720486161039;
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
    msg.setTimeStamp(0.6099942148464793);
    msg.setSource(51854U);
    msg.setSourceEntity(61U);
    msg.setDestination(23931U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.14294856113854304);
    msg.setSource(16360U);
    msg.setSourceEntity(15U);
    msg.setDestination(58064U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9224775958334903);
    msg.setSource(15296U);
    msg.setSourceEntity(253U);
    msg.setDestination(7359U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.49936936384149566);
    msg.setSource(21441U);
    msg.setSourceEntity(193U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(189U);
    msg.list.assign("HYLZBADSQEVFVQHUJUTOAERKHTAPEPAPORCRMVJWOTSKQGQHWFPIKYFDYHCLJPASMWEXCNJNWEXNUWKURIJVDGZRNGEJYGGUFUSVXYLEYHFZTBERXVSRTOIQUALHLMZNPDJWCRIVOMJOCKCSMKBOKBZ");

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
    msg.setTimeStamp(0.8147156527178454);
    msg.setSource(32123U);
    msg.setSourceEntity(129U);
    msg.setDestination(18426U);
    msg.setDestinationEntity(90U);
    msg.list.assign("TGOUYYEHYFDPVWPVEFZNTVNNJAUECSLBPDFCTWHOMBODPLVGMQGCSUWKYQMOMMZBHNRIAAFYBDJWJTULGOABCXJCPEUFDRZVPHFRXJRIJOFPKIQWKLNXFKTHOCIEYZOZGQUNSVQNHGSWLYNFWEIAZIKULBWSLUHIGDQBXEEVZLEHWTVVZTTCXQATXMQXIKSHKPBKYMANXAYSRPZHOQR");

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
    msg.setTimeStamp(0.8214530093679814);
    msg.setSource(30520U);
    msg.setSourceEntity(18U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(120U);
    msg.list.assign("VXVLIXRFLIPGLDYIEZIMNUIGKAPSVOKRWNDYZOBESFDXSNAAMOQHCHOEKJYZAIGEQQYUCXEFVZBTXNLPBXTJMDWIERYTSQNRGBFRLPPBHQDLPBJOFURCXZDSRGCPWJELJTCQVBRHJESOQVJGCNZTIWDWCZKLOLRAMXTKUKMNHWKSXFVUAEFETNUY");

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
    msg.setTimeStamp(0.5089272739741661);
    msg.setSource(34838U);
    msg.setSourceEntity(19U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(9U);
    msg.value = -32526;

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
    msg.setTimeStamp(0.6990156100641545);
    msg.setSource(12663U);
    msg.setSourceEntity(70U);
    msg.setDestination(486U);
    msg.setDestinationEntity(48U);
    msg.value = -11741;

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
    msg.setTimeStamp(0.7795765142131571);
    msg.setSource(28880U);
    msg.setSourceEntity(65U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(185U);
    msg.value = -15992;

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
    msg.setTimeStamp(0.5759263316898169);
    msg.setSource(5819U);
    msg.setSourceEntity(135U);
    msg.setDestination(59374U);
    msg.setDestinationEntity(233U);
    msg.value = 0.46622625564126396;

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
    msg.setTimeStamp(0.5278344828068874);
    msg.setSource(48147U);
    msg.setSourceEntity(73U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(43U);
    msg.value = 0.34399157659014057;

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
    msg.setTimeStamp(0.7629989242765929);
    msg.setSource(24541U);
    msg.setSourceEntity(132U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(128U);
    msg.value = 0.33532706113992927;

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
    msg.setTimeStamp(0.6951092313093584);
    msg.setSource(54282U);
    msg.setSourceEntity(22U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(120U);
    msg.value = 0.10976153286678636;

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
    msg.setTimeStamp(0.35319318490160334);
    msg.setSource(63724U);
    msg.setSourceEntity(95U);
    msg.setDestination(51957U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8233659632363088;

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
    msg.setTimeStamp(0.8188366667841724);
    msg.setSource(47803U);
    msg.setSourceEntity(117U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6053960627547889;

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
    msg.setTimeStamp(0.04461095475359411);
    msg.setSource(32197U);
    msg.setSourceEntity(113U);
    msg.setDestination(47533U);
    msg.setDestinationEntity(244U);
    msg.validity = 12015U;
    msg.type = 81U;
    msg.utc_year = 50009U;
    msg.utc_month = 45U;
    msg.utc_day = 131U;
    msg.utc_time = 0.39130669542212304;
    msg.lat = 0.08223621897402233;
    msg.lon = 0.09054226005668975;
    msg.height = 0.5437559237716404;
    msg.satellites = 135U;
    msg.cog = 0.06355954777501005;
    msg.sog = 0.8291331644817531;
    msg.hdop = 0.277493795264226;
    msg.vdop = 0.0019087490486098257;
    msg.hacc = 0.07950823038002885;
    msg.vacc = 0.08833643645192946;

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
    msg.setTimeStamp(0.8056859778657823);
    msg.setSource(60977U);
    msg.setSourceEntity(114U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(120U);
    msg.validity = 37458U;
    msg.type = 51U;
    msg.utc_year = 24497U;
    msg.utc_month = 33U;
    msg.utc_day = 197U;
    msg.utc_time = 0.6476214992408765;
    msg.lat = 0.4326889380649228;
    msg.lon = 0.21597311731611635;
    msg.height = 0.5437003740466428;
    msg.satellites = 83U;
    msg.cog = 0.3254602531881031;
    msg.sog = 0.19404927025711327;
    msg.hdop = 0.48611505333173277;
    msg.vdop = 0.4780167321767732;
    msg.hacc = 0.09398574722330122;
    msg.vacc = 0.2475537590115191;

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
    msg.setTimeStamp(0.9786464634988197);
    msg.setSource(49514U);
    msg.setSourceEntity(232U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(224U);
    msg.validity = 53077U;
    msg.type = 168U;
    msg.utc_year = 45590U;
    msg.utc_month = 82U;
    msg.utc_day = 20U;
    msg.utc_time = 0.04088650501747315;
    msg.lat = 0.8032505180977957;
    msg.lon = 0.5565579274324715;
    msg.height = 0.4986755238189149;
    msg.satellites = 106U;
    msg.cog = 0.7818603517767377;
    msg.sog = 0.5916698087007781;
    msg.hdop = 0.5516463753404639;
    msg.vdop = 0.6611492217380577;
    msg.hacc = 0.3428242117797261;
    msg.vacc = 0.09040594643892963;

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
    msg.setTimeStamp(0.873023807680431);
    msg.setSource(44799U);
    msg.setSourceEntity(26U);
    msg.setDestination(40474U);
    msg.setDestinationEntity(5U);
    msg.time = 0.4813559751845896;
    msg.phi = 0.9519808106663301;
    msg.theta = 0.792054349079597;
    msg.psi = 0.5688778438477489;
    msg.psi_magnetic = 0.8341203923273117;

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
    msg.setTimeStamp(0.495970355326509);
    msg.setSource(31554U);
    msg.setSourceEntity(114U);
    msg.setDestination(24071U);
    msg.setDestinationEntity(88U);
    msg.time = 0.07546967025874562;
    msg.phi = 0.5854341222180116;
    msg.theta = 0.967362895290769;
    msg.psi = 0.5753670934685035;
    msg.psi_magnetic = 0.27346498636884464;

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
    msg.setTimeStamp(0.02388451199512731);
    msg.setSource(46186U);
    msg.setSourceEntity(16U);
    msg.setDestination(10666U);
    msg.setDestinationEntity(201U);
    msg.time = 0.49419630659236957;
    msg.phi = 0.426917149013326;
    msg.theta = 0.17161251233227381;
    msg.psi = 0.40628681179680126;
    msg.psi_magnetic = 0.892437924341761;

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
    msg.setTimeStamp(0.5265385034916796);
    msg.setSource(40498U);
    msg.setSourceEntity(156U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(108U);
    msg.time = 0.3370327525297073;
    msg.x = 0.7705245085656983;
    msg.y = 0.2775000886084751;
    msg.z = 0.5225730318214387;
    msg.timestep = 0.501674965893489;

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
    msg.setTimeStamp(0.8032550138864486);
    msg.setSource(24609U);
    msg.setSourceEntity(160U);
    msg.setDestination(44814U);
    msg.setDestinationEntity(241U);
    msg.time = 0.8841916619057827;
    msg.x = 0.5428518851495724;
    msg.y = 0.4992156543895908;
    msg.z = 0.38576140041585083;
    msg.timestep = 0.8388150440020271;

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
    msg.setTimeStamp(0.28978839351801233);
    msg.setSource(18630U);
    msg.setSourceEntity(51U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(52U);
    msg.time = 0.892781854836853;
    msg.x = 0.1320948793133121;
    msg.y = 0.3217686888365212;
    msg.z = 0.5255833184789643;
    msg.timestep = 0.21627911674846678;

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
    msg.setTimeStamp(0.3083159272900591);
    msg.setSource(4809U);
    msg.setSourceEntity(32U);
    msg.setDestination(4838U);
    msg.setDestinationEntity(231U);
    msg.time = 0.5785102486961614;
    msg.x = 0.20307891821774982;
    msg.y = 0.09440808009651247;
    msg.z = 0.8839866014660532;

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
    msg.setTimeStamp(0.5732865990414843);
    msg.setSource(39672U);
    msg.setSourceEntity(104U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(24U);
    msg.time = 0.34649141066873135;
    msg.x = 0.359866998732969;
    msg.y = 0.14776243495307773;
    msg.z = 0.5479132599281682;

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
    msg.setTimeStamp(0.5004663716032359);
    msg.setSource(33606U);
    msg.setSourceEntity(151U);
    msg.setDestination(55824U);
    msg.setDestinationEntity(73U);
    msg.time = 0.40108784766123373;
    msg.x = 0.3915963120052445;
    msg.y = 0.6563467918979581;
    msg.z = 0.23067941583225715;

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
    msg.setTimeStamp(0.03787154701355866);
    msg.setSource(36283U);
    msg.setSourceEntity(28U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(112U);
    msg.time = 0.8890748985715287;
    msg.x = 0.6030615044618948;
    msg.y = 0.8669316529768029;
    msg.z = 0.17268158880951168;

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
    msg.setTimeStamp(0.8329548450125537);
    msg.setSource(50314U);
    msg.setSourceEntity(85U);
    msg.setDestination(408U);
    msg.setDestinationEntity(200U);
    msg.time = 0.09908495228595704;
    msg.x = 0.4651396351564051;
    msg.y = 0.8183400111255021;
    msg.z = 0.5743194152422545;

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
    msg.setTimeStamp(0.9269831119252095);
    msg.setSource(13954U);
    msg.setSourceEntity(101U);
    msg.setDestination(64125U);
    msg.setDestinationEntity(125U);
    msg.time = 0.4199626501523839;
    msg.x = 0.6236639822371107;
    msg.y = 0.31819587670717187;
    msg.z = 0.2458845797190884;

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
    msg.setTimeStamp(0.8539524753588265);
    msg.setSource(1107U);
    msg.setSourceEntity(254U);
    msg.setDestination(46211U);
    msg.setDestinationEntity(161U);
    msg.time = 0.35484299264960095;
    msg.x = 0.9239146114404686;
    msg.y = 0.4231367123029912;
    msg.z = 0.6885837111980796;

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
    msg.setTimeStamp(0.00018165346899856605);
    msg.setSource(45959U);
    msg.setSourceEntity(230U);
    msg.setDestination(45779U);
    msg.setDestinationEntity(35U);
    msg.time = 0.8370006408543447;
    msg.x = 0.4525961798746089;
    msg.y = 0.6914964240000117;
    msg.z = 0.6540469800537848;

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
    msg.setTimeStamp(0.5374740067170157);
    msg.setSource(22657U);
    msg.setSourceEntity(109U);
    msg.setDestination(35939U);
    msg.setDestinationEntity(170U);
    msg.time = 0.8508307092729678;
    msg.x = 0.02806378935634335;
    msg.y = 0.6883627326908575;
    msg.z = 0.5853249085406984;

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
    msg.setTimeStamp(0.18925663803033532);
    msg.setSource(58036U);
    msg.setSourceEntity(63U);
    msg.setDestination(59238U);
    msg.setDestinationEntity(55U);
    msg.validity = 192U;
    msg.x = 0.3523750649991214;
    msg.y = 0.7997360676559125;
    msg.z = 0.1490461628447074;

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
    msg.setTimeStamp(0.5566914329393727);
    msg.setSource(32818U);
    msg.setSourceEntity(98U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(80U);
    msg.validity = 217U;
    msg.x = 0.6622918827242281;
    msg.y = 0.6639237799949576;
    msg.z = 0.26781509920323876;

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
    msg.setTimeStamp(0.570926136655472);
    msg.setSource(12682U);
    msg.setSourceEntity(136U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(214U);
    msg.validity = 218U;
    msg.x = 0.5917891474333556;
    msg.y = 0.20955363981792352;
    msg.z = 0.11700277807766413;

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
    msg.setTimeStamp(0.46414539725679327);
    msg.setSource(49508U);
    msg.setSourceEntity(240U);
    msg.setDestination(63482U);
    msg.setDestinationEntity(16U);
    msg.validity = 183U;
    msg.x = 0.6578968733258024;
    msg.y = 0.2786091439806335;
    msg.z = 0.4634713714133035;

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
    msg.setTimeStamp(0.5999186342846231);
    msg.setSource(65470U);
    msg.setSourceEntity(1U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(146U);
    msg.validity = 22U;
    msg.x = 0.06760236740482184;
    msg.y = 0.9225920284611556;
    msg.z = 0.7650451675088992;

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
    msg.setTimeStamp(0.055145150790965825);
    msg.setSource(34569U);
    msg.setSourceEntity(234U);
    msg.setDestination(55612U);
    msg.setDestinationEntity(104U);
    msg.validity = 195U;
    msg.x = 0.7502298470851965;
    msg.y = 0.12486065443360728;
    msg.z = 0.5931710300934896;

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
    msg.setTimeStamp(0.7668796981132626);
    msg.setSource(5899U);
    msg.setSourceEntity(220U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(129U);
    msg.time = 0.6661140059131677;
    msg.x = 0.23059208069569115;
    msg.y = 0.19438636196105907;
    msg.z = 0.23305232401940468;

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
    msg.setTimeStamp(0.5129236154237735);
    msg.setSource(27770U);
    msg.setSourceEntity(41U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(1U);
    msg.time = 0.2203112172439855;
    msg.x = 0.366226581718028;
    msg.y = 0.7464770568576815;
    msg.z = 0.6877952705570785;

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
    msg.setTimeStamp(0.18449401757507666);
    msg.setSource(34946U);
    msg.setSourceEntity(218U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(242U);
    msg.time = 0.6880206679884665;
    msg.x = 0.303432581038947;
    msg.y = 0.6746234291734574;
    msg.z = 0.883385153981354;

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
    msg.setTimeStamp(0.7373274543643497);
    msg.setSource(54884U);
    msg.setSourceEntity(22U);
    msg.setDestination(42387U);
    msg.setDestinationEntity(132U);
    msg.validity = 170U;
    msg.value = 0.6648552324173099;

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
    msg.setTimeStamp(0.9459168618870124);
    msg.setSource(47563U);
    msg.setSourceEntity(103U);
    msg.setDestination(53224U);
    msg.setDestinationEntity(150U);
    msg.validity = 193U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9607614911153461;
    tmp_msg_0.y = 0.2768609293206038;
    tmp_msg_0.z = 0.36156248519261547;
    tmp_msg_0.phi = 0.39906558593189245;
    tmp_msg_0.theta = 0.7918935502816434;
    tmp_msg_0.psi = 0.45835480014518426;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5979593162641211;

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
    msg.setTimeStamp(0.8433676724784112);
    msg.setSource(7657U);
    msg.setSourceEntity(162U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(188U);
    msg.validity = 19U;
    msg.value = 0.7123416899621579;

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
    msg.setTimeStamp(0.5834779887483882);
    msg.setSource(16445U);
    msg.setSourceEntity(162U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(105U);
    msg.value = 0.683661219736983;

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
    msg.setTimeStamp(0.634502114707522);
    msg.setSource(23328U);
    msg.setSourceEntity(69U);
    msg.setDestination(10443U);
    msg.setDestinationEntity(88U);
    msg.value = 0.005599402037678725;

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
    msg.setTimeStamp(0.894935943990193);
    msg.setSource(55325U);
    msg.setSourceEntity(110U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8120657058508131;

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
    msg.setTimeStamp(0.9662604423298317);
    msg.setSource(3676U);
    msg.setSourceEntity(109U);
    msg.setDestination(35664U);
    msg.setDestinationEntity(12U);
    msg.value = 0.37604107262920183;

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
    msg.setTimeStamp(0.20951258770641856);
    msg.setSource(13987U);
    msg.setSourceEntity(219U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(246U);
    msg.value = 0.2431341977135112;

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
    msg.setTimeStamp(0.5921155922290579);
    msg.setSource(57815U);
    msg.setSourceEntity(102U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8803291125825914;

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
    msg.setTimeStamp(0.3742003143845297);
    msg.setSource(61411U);
    msg.setSourceEntity(17U);
    msg.setDestination(60760U);
    msg.setDestinationEntity(230U);
    msg.value = 0.1465720557502337;

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
    msg.setTimeStamp(0.6001446440971352);
    msg.setSource(41056U);
    msg.setSourceEntity(180U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(186U);
    msg.value = 0.9711334439273057;

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
    msg.setTimeStamp(0.7607648483689899);
    msg.setSource(27376U);
    msg.setSourceEntity(2U);
    msg.setDestination(9564U);
    msg.setDestinationEntity(28U);
    msg.value = 0.173391739465785;

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
    msg.setTimeStamp(0.6966350913425582);
    msg.setSource(42953U);
    msg.setSourceEntity(5U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(97U);
    msg.value = 0.864179723380457;

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
    msg.setTimeStamp(0.05142379625289506);
    msg.setSource(44234U);
    msg.setSourceEntity(152U);
    msg.setDestination(5915U);
    msg.setDestinationEntity(90U);
    msg.value = 0.6035597860535146;

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
    msg.setTimeStamp(0.8609781085204387);
    msg.setSource(54054U);
    msg.setSourceEntity(169U);
    msg.setDestination(31299U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7317993794497477;

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
    msg.setTimeStamp(0.9107313111796753);
    msg.setSource(43891U);
    msg.setSourceEntity(161U);
    msg.setDestination(11740U);
    msg.setDestinationEntity(32U);
    msg.value = 0.6827364330574845;

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
    msg.setTimeStamp(0.9649010141369597);
    msg.setSource(4776U);
    msg.setSourceEntity(81U);
    msg.setDestination(507U);
    msg.setDestinationEntity(147U);
    msg.value = 0.2392897126824809;

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
    msg.setTimeStamp(0.724213602611314);
    msg.setSource(29785U);
    msg.setSourceEntity(13U);
    msg.setDestination(40736U);
    msg.setDestinationEntity(123U);
    msg.value = 0.5897418302725534;

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
    msg.setTimeStamp(0.46356736372525853);
    msg.setSource(7357U);
    msg.setSourceEntity(42U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(190U);
    msg.value = 0.01868064871290709;

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
    msg.setTimeStamp(0.8747450977850357);
    msg.setSource(39727U);
    msg.setSourceEntity(190U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(200U);
    msg.value = 0.43404395579647514;

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
    msg.setTimeStamp(0.282909216525457);
    msg.setSource(17863U);
    msg.setSourceEntity(163U);
    msg.setDestination(31897U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8773592058332863;

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
    msg.setTimeStamp(0.5388234528481166);
    msg.setSource(51123U);
    msg.setSourceEntity(238U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(219U);
    msg.value = 0.02184975175586301;

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
    msg.setTimeStamp(0.4944903175927421);
    msg.setSource(38557U);
    msg.setSourceEntity(104U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(168U);
    msg.value = 0.20705964393485154;

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
    msg.setTimeStamp(0.3093946876791619);
    msg.setSource(8458U);
    msg.setSourceEntity(130U);
    msg.setDestination(20285U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7647689358460246;

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
    msg.setTimeStamp(0.15787077287931794);
    msg.setSource(36105U);
    msg.setSourceEntity(188U);
    msg.setDestination(37162U);
    msg.setDestinationEntity(69U);
    msg.value = 0.22118133276435925;

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
    msg.setTimeStamp(0.9109204136032498);
    msg.setSource(30973U);
    msg.setSourceEntity(121U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(172U);
    msg.value = 0.09716809197956988;

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
    msg.setTimeStamp(0.5640357619975723);
    msg.setSource(48553U);
    msg.setSourceEntity(67U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(96U);
    msg.value = 0.24718559090559755;

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
    msg.setTimeStamp(0.47958528189428584);
    msg.setSource(55402U);
    msg.setSourceEntity(166U);
    msg.setDestination(42445U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.5615363780153162;
    msg.speed = 0.10405839837833897;

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
    msg.setTimeStamp(0.7582434380031423);
    msg.setSource(51902U);
    msg.setSourceEntity(79U);
    msg.setDestination(50246U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.6768619642819046;
    msg.speed = 0.5902231418296441;

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
    msg.setTimeStamp(0.8229165845474211);
    msg.setSource(26203U);
    msg.setSourceEntity(165U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(222U);
    msg.direction = 0.4392413231846307;
    msg.speed = 0.7237283077859555;

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
    msg.setTimeStamp(0.0028885930006665728);
    msg.setSource(18127U);
    msg.setSourceEntity(64U);
    msg.setDestination(30657U);
    msg.setDestinationEntity(9U);
    msg.value = 0.33597281005961965;

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
    msg.setTimeStamp(0.03249468801813127);
    msg.setSource(28728U);
    msg.setSourceEntity(157U);
    msg.setDestination(61155U);
    msg.setDestinationEntity(120U);
    msg.value = 0.08187291274973962;

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
    msg.setTimeStamp(0.9825318412667391);
    msg.setSource(4235U);
    msg.setSourceEntity(15U);
    msg.setDestination(6784U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5826980533549936;

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
    msg.setTimeStamp(0.291813866444644);
    msg.setSource(62872U);
    msg.setSourceEntity(58U);
    msg.setDestination(1520U);
    msg.setDestinationEntity(234U);
    msg.value.assign("IETCAUWGAZAKNIRQMNRYQVSAEJQPEDVEJCBXVBHG");

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
    msg.setTimeStamp(0.5429038694146942);
    msg.setSource(19222U);
    msg.setSourceEntity(136U);
    msg.setDestination(2479U);
    msg.setDestinationEntity(131U);
    msg.value.assign("LQRZEGZVXIBHVZHQQQRWKHCJFJCZXQNLNMSPIKHLMUBYWSMFTDIRTGMQOFQIXKGKJNPOXNEYACNGAGRLGPYRPOTEJVHZLESTTATKSQXCEXMJDVFYEDNRDFYAIOIVWVLCOYVNGZCAMWZOVNBLJQJJBCKPUOPEIEKMWNJWHAPHASDKCXSFHQJXSKEUOUBUL");

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
    msg.setTimeStamp(0.9755877102068704);
    msg.setSource(53635U);
    msg.setSourceEntity(24U);
    msg.setDestination(1543U);
    msg.setDestinationEntity(9U);
    msg.value.assign("PQNXYPROVTQVRNFQGOXSHADPUCTSBKGVKREVSMHIEYCNCMGPMKKXETRZCLBBOMOCWNAQFSZOOSCTCBZFDRUYKAZCYRHULDHKTWWPBCXVVDQHOEFJRDKHDYMLX");

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
    msg.setTimeStamp(0.47504717826763765);
    msg.setSource(5561U);
    msg.setSourceEntity(80U);
    msg.setDestination(28979U);
    msg.setDestinationEntity(49U);
    const char tmp_msg_0[] = {-118, 23, -42, -93, -35, 92, -99, 24, -67, 75, 119, -88, -110, -82, -20, 10, -75, 112, -121, 87, -94, 38, 54, 120, 10, -71, -2, 8, 27, -6, -43, -41, -55, -82, -25, -34, 38, 50, -120, -46, -108, -101, -50, -91, -110, 0, 20, 118, 79, 22, -128, 49, 62, 4, -5, 16, -85, -63, -6, -52, 61, 38, 29, 31, 9, -77, -90, 54, 105, 82, -121, 33, 17, -91, 73, -77, -115, -40, -30, 69, -15, 93, -36, 53, -14, 104, 58, 60, 20, -110, -108, -125, -6, -2, -103, -116, 86, 45, 91, -64, 62, -119, 106, -95, 83, -65, 23, 67, 91, -14, 95, -89, 9, -122, -90, -17, -108, -72, 4, -25, -58, 63, -123, -3, -70, 61, -76, 27, 26, 19, 40, 16, -46, 25, 39, -107, 120, 89, 34};
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
    msg.setTimeStamp(0.12123918697967351);
    msg.setSource(30396U);
    msg.setSourceEntity(250U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {98, -87, 71, 121, -105, 117, -53, -39, -110, 114, -20, 22, -12, 81, 118, -46, 23, -80, -28, 108, -116, 99, 69, -7, -11, 10, 61, -80, -112, -82, -71, -44, -40, -124};
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
    msg.setTimeStamp(0.4307128443544701);
    msg.setSource(62767U);
    msg.setSourceEntity(124U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(65U);
    const char tmp_msg_0[] = {-104, 123, 75, 14, -103, 119, -26, 23, -54, 76, -121, -20, -92, -73, -126, -7, -89, -30, -45, -50, 123, 24, -12, -32, -2, 42, -51, -21, 99, 82, -70, -89, 44, 71, -6, -123, 80, 81, -105, -86, 70};
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
    msg.setTimeStamp(0.6687739887032166);
    msg.setSource(33533U);
    msg.setSourceEntity(184U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(233U);
    msg.frequency = 1381826012U;
    msg.min_range = 18063U;
    msg.max_range = 53474U;

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
    msg.setTimeStamp(0.7048027822117569);
    msg.setSource(21305U);
    msg.setSourceEntity(117U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(56U);
    msg.frequency = 614455634U;
    msg.min_range = 48755U;
    msg.max_range = 7053U;

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
    msg.setTimeStamp(0.18255168725423543);
    msg.setSource(3282U);
    msg.setSourceEntity(57U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(219U);
    msg.frequency = 616939570U;
    msg.min_range = 59460U;
    msg.max_range = 57469U;

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
    msg.setTimeStamp(0.25013482319075175);
    msg.setSource(25940U);
    msg.setSourceEntity(102U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(218U);
    msg.type = 64U;
    msg.frequency = 760873014U;
    msg.min_range = 32961U;
    msg.max_range = 55243U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.06656129549633871;
    const char tmp_msg_0[] = {-25, 90, 13, 20, -115, 53, -10, 15, -39, 109, 87, 0, -76, -48, 27, -7, -46, 101, -81, 74, -78, 76, -50, -119, 65, 69, -58, 122, 9, -61, 26, 25, -55, 80, -28, -108, 99, 109, -26, 72, -8, -54, 86, -115, -23, 17, 12, 64, -71, -124, -122, 14, 74, -8, 77, -82, -1, 27, -31, -85, -67, -107, -113, 81, 87, 126, -21, 22, 89, -15, 42, 78, -82, -78, 57, -112, -123, 85, -50, -41, -65, 69, -39, 101, -125, 62, -52, -4, 61, 85, -55, 57, -98, -6, -54, -112, 38, 32, 119, 9, -19, -31, -74, -29, -15, -7, -111, -30};
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
    msg.setTimeStamp(0.2702303491421557);
    msg.setSource(63218U);
    msg.setSourceEntity(166U);
    msg.setDestination(2053U);
    msg.setDestinationEntity(110U);
    msg.type = 117U;
    msg.frequency = 3081180143U;
    msg.min_range = 36925U;
    msg.max_range = 21337U;
    msg.bits_per_point = 83U;
    msg.scale_factor = 0.4483214558344911;
    const char tmp_msg_0[] = {9, -46, 39, -25, 117, 60, -61, 2, 103, -86, -37, -30, -128, -48, 118, 60, -27, 14, -105, -50, 112, -70, 80, 35, -111, -53, -55, 89, -40, 10, -3, -109, 107, -1, 55, -71, 46, -128, 51, 40, 80, 41, -112, 10, 1, 98, -104, 12, -125, -107, 89, -41, 104, 112, -47, -81, -38, 115, -29, 77, -69, 4, 30, -45, -127, -19, 45, -64, 51, 64, -38, 43, -27, 40, 112, 96, -1, -103, 102, -38, -38, -53, -11, 55, -36, -38, -104, 47, -92, -126, 9, -89, -14, -124, 5, 111, 22, 41, 57, -76, -29, 100, -15, -65, -55, -8, -103, 65, -123, -66, 7, 79, 126, -14, -83, -1, -36, -76, 70, -30, 66, 58, 74, -97, 86, -90, -79, -73, 101, 114, -102, 32, 10, 37, -98, -108, -81, -78, 93, 90, -127, -123, -53, -121, 94, -84, -68, -95, -30, 25, -46, 85, -7, 117, -55, -29, 119, -101, -128, -15, -24, -88};
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
    msg.setTimeStamp(0.32406617001138727);
    msg.setSource(61526U);
    msg.setSourceEntity(79U);
    msg.setDestination(20200U);
    msg.setDestinationEntity(86U);
    msg.type = 246U;
    msg.frequency = 3568652399U;
    msg.min_range = 26601U;
    msg.max_range = 36399U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.6754190286764244;
    const char tmp_msg_0[] = {-101, 81, 125, 14, 69, 23, -47, 108, -109, 63, -81, 16, -121, -4, 118, -74, 20, -117, 51, -83, 103, 58, 33, -15, -74, 107, 78, 97, -22, -121, 71, -36, -42, 62, -49, -111, 76, -10, 105, -106, -43, -112, -16, 94};
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
    msg.setTimeStamp(0.7646527470814651);
    msg.setSource(61831U);
    msg.setSourceEntity(30U);
    msg.setDestination(58502U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.42492693027721773);
    msg.setSource(53616U);
    msg.setSourceEntity(170U);
    msg.setDestination(26527U);
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
    msg.setTimeStamp(0.8874955906182395);
    msg.setSource(14103U);
    msg.setSourceEntity(203U);
    msg.setDestination(42158U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.5045352389699321);
    msg.setSource(31323U);
    msg.setSourceEntity(64U);
    msg.setDestination(49162U);
    msg.setDestinationEntity(232U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.6228499571122241);
    msg.setSource(14283U);
    msg.setSourceEntity(185U);
    msg.setDestination(15329U);
    msg.setDestinationEntity(164U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.28614296514227533);
    msg.setSource(30184U);
    msg.setSourceEntity(133U);
    msg.setDestination(61341U);
    msg.setDestinationEntity(91U);
    msg.op = 8U;

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
    msg.setTimeStamp(0.5663754499938731);
    msg.setSource(45359U);
    msg.setSourceEntity(216U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(151U);
    msg.value = 0.46835269960034254;
    msg.confidence = 0.08713356087395563;
    msg.opmodes.assign("CKZERBOLAMADASKOKCPUPGHYVSUDJCW");

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
    msg.setTimeStamp(0.5040034705263513);
    msg.setSource(64930U);
    msg.setSourceEntity(88U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(144U);
    msg.value = 0.3637419855516909;
    msg.confidence = 0.21853247966304967;
    msg.opmodes.assign("HVAGZKEXHRZPNSEYOCHXZHOVKEPSKDHQYRACDOSLBVPPMSEBOWYQTJLTIDHSEALGJBBU");

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
    msg.setTimeStamp(0.24035261672546915);
    msg.setSource(19670U);
    msg.setSourceEntity(228U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(23U);
    msg.value = 0.676656202544221;
    msg.confidence = 0.6322950709781966;
    msg.opmodes.assign("POUXLBQZXRZXLYJQTQCBIWREDNCBYOCOABMFKLOTGEMEQUGWSDXVDJULHWGXGKGRRBIKSGGMZKPGWJCLMZVADWWPJDHEIJYSYTPSRLYUAMWRKVDFULSMUTXAILFRSFOT");

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
    msg.setTimeStamp(0.7952791457481827);
    msg.setSource(4580U);
    msg.setSourceEntity(54U);
    msg.setDestination(55789U);
    msg.setDestinationEntity(47U);
    msg.itow = 1563049954U;
    msg.lat = 0.9078720327634904;
    msg.lon = 0.06246096071752372;
    msg.height_ell = 0.9506184137796787;
    msg.height_sea = 0.2507987536312245;
    msg.hacc = 0.8113640368297392;
    msg.vacc = 0.7030459384672049;
    msg.vel_n = 0.01698528821983436;
    msg.vel_e = 0.05903456578489552;
    msg.vel_d = 0.9454600440572429;
    msg.speed = 0.9709849935830629;
    msg.gspeed = 0.9083975169541785;
    msg.heading = 0.8673048315393993;
    msg.sacc = 0.9708426520113423;
    msg.cacc = 0.09768251709466891;

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
    msg.setTimeStamp(0.21025824186917352);
    msg.setSource(43700U);
    msg.setSourceEntity(43U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(171U);
    msg.itow = 1880699670U;
    msg.lat = 0.6026534544891723;
    msg.lon = 0.3492585101251904;
    msg.height_ell = 0.9786067848509559;
    msg.height_sea = 0.23988772052764729;
    msg.hacc = 0.5859892449324824;
    msg.vacc = 0.6930392223575605;
    msg.vel_n = 0.8691980468084182;
    msg.vel_e = 0.7708329437952515;
    msg.vel_d = 0.9029177459712328;
    msg.speed = 0.5548973992128671;
    msg.gspeed = 0.8738115228699311;
    msg.heading = 0.36844283164663405;
    msg.sacc = 0.4564446506604405;
    msg.cacc = 0.7809488502980866;

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
    msg.setTimeStamp(0.2484856698723913);
    msg.setSource(44642U);
    msg.setSourceEntity(234U);
    msg.setDestination(47702U);
    msg.setDestinationEntity(112U);
    msg.itow = 932146146U;
    msg.lat = 0.03573917635266188;
    msg.lon = 0.8902913496908192;
    msg.height_ell = 0.40642858015370076;
    msg.height_sea = 0.07913171360569682;
    msg.hacc = 0.3916805821578563;
    msg.vacc = 0.8337973989904812;
    msg.vel_n = 0.03897789161166987;
    msg.vel_e = 0.5169642993488328;
    msg.vel_d = 0.33182150995738435;
    msg.speed = 0.001001805366197539;
    msg.gspeed = 0.7991188153470529;
    msg.heading = 0.42794789700086333;
    msg.sacc = 0.6843269564937765;
    msg.cacc = 0.14239345793873648;

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
    msg.setTimeStamp(0.7588636069526504);
    msg.setSource(54675U);
    msg.setSourceEntity(32U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(9U);
    msg.id = 34U;
    msg.value = 0.9006826581951356;

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
    msg.setTimeStamp(0.09593464871265811);
    msg.setSource(49320U);
    msg.setSourceEntity(189U);
    msg.setDestination(17026U);
    msg.setDestinationEntity(103U);
    msg.id = 213U;
    msg.value = 0.6407500759472586;

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
    msg.setTimeStamp(0.8473627141127905);
    msg.setSource(38292U);
    msg.setSourceEntity(63U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(191U);
    msg.id = 74U;
    msg.value = 0.9880868336251318;

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
    msg.setTimeStamp(0.7267401705032227);
    msg.setSource(11514U);
    msg.setSourceEntity(19U);
    msg.setDestination(25662U);
    msg.setDestinationEntity(64U);
    msg.x = 0.7447510643369303;
    msg.y = 0.1617603890735526;
    msg.z = 0.7266182783042919;
    msg.phi = 0.16288140608016366;
    msg.theta = 0.22733548636354228;
    msg.psi = 0.016578442569451624;

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
    msg.setTimeStamp(0.24942031252209174);
    msg.setSource(13208U);
    msg.setSourceEntity(194U);
    msg.setDestination(32570U);
    msg.setDestinationEntity(13U);
    msg.x = 0.1581814633559231;
    msg.y = 0.689349588417822;
    msg.z = 0.9394997233764661;
    msg.phi = 0.835719288157192;
    msg.theta = 0.1163496455416283;
    msg.psi = 0.9483544310978207;

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
    msg.setTimeStamp(0.6331262394861433);
    msg.setSource(25008U);
    msg.setSourceEntity(81U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(104U);
    msg.x = 0.8724589985254564;
    msg.y = 0.002925940121071613;
    msg.z = 0.16621752212259966;
    msg.phi = 0.6586707878480451;
    msg.theta = 0.5533005828731383;
    msg.psi = 0.5208034226687601;

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
    msg.setTimeStamp(0.5540417195741569);
    msg.setSource(43606U);
    msg.setSourceEntity(240U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(62U);
    msg.beam_width = 0.9933202818291019;
    msg.beam_height = 0.6085726221266875;

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
    msg.setTimeStamp(0.37064380006390696);
    msg.setSource(56867U);
    msg.setSourceEntity(249U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(32U);
    msg.beam_width = 0.33627412494482367;
    msg.beam_height = 0.24802357596264324;

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
    msg.setTimeStamp(0.8300556212636504);
    msg.setSource(63793U);
    msg.setSourceEntity(234U);
    msg.setDestination(18535U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.7397710613373099;
    msg.beam_height = 0.8102498673608796;

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
    msg.setTimeStamp(0.05222470567667503);
    msg.setSource(62320U);
    msg.setSourceEntity(76U);
    msg.setDestination(1414U);
    msg.setDestinationEntity(235U);
    msg.sane = 87U;

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
    msg.setTimeStamp(0.9873128838662137);
    msg.setSource(2631U);
    msg.setSourceEntity(200U);
    msg.setDestination(342U);
    msg.setDestinationEntity(96U);
    msg.sane = 44U;

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
    msg.setTimeStamp(0.32152973367972615);
    msg.setSource(57674U);
    msg.setSourceEntity(144U);
    msg.setDestination(42249U);
    msg.setDestinationEntity(60U);
    msg.sane = 243U;

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
    msg.setTimeStamp(0.7404479626610263);
    msg.setSource(40698U);
    msg.setSourceEntity(214U);
    msg.setDestination(41382U);
    msg.setDestinationEntity(153U);
    msg.id = 208U;
    msg.zoom = 133U;
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
    msg.setTimeStamp(0.2795554570178732);
    msg.setSource(55390U);
    msg.setSourceEntity(152U);
    msg.setDestination(3733U);
    msg.setDestinationEntity(94U);
    msg.id = 75U;
    msg.zoom = 58U;
    msg.action = 71U;

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
    msg.setTimeStamp(0.12462282206224629);
    msg.setSource(23408U);
    msg.setSourceEntity(186U);
    msg.setDestination(65369U);
    msg.setDestinationEntity(36U);
    msg.id = 43U;
    msg.zoom = 244U;
    msg.action = 28U;

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
    msg.setTimeStamp(0.543278340720763);
    msg.setSource(11343U);
    msg.setSourceEntity(245U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(53U);
    msg.id = 142U;
    msg.value = 0.6086150277598665;

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
    msg.setTimeStamp(0.48278303839761716);
    msg.setSource(15494U);
    msg.setSourceEntity(126U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(3U);
    msg.id = 25U;
    msg.value = 0.9697700571208505;

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
    msg.setTimeStamp(0.8383610792314301);
    msg.setSource(1136U);
    msg.setSourceEntity(126U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(236U);
    msg.id = 208U;
    msg.value = 0.022533871674625727;

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
    msg.setTimeStamp(0.9328815031859835);
    msg.setSource(5435U);
    msg.setSourceEntity(137U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(232U);
    msg.id = 156U;
    msg.value = 0.20896404764645504;

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
    msg.setTimeStamp(0.48244249232996184);
    msg.setSource(36182U);
    msg.setSourceEntity(192U);
    msg.setDestination(58837U);
    msg.setDestinationEntity(143U);
    msg.id = 21U;
    msg.value = 0.05760248531035661;

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
    msg.setTimeStamp(0.3174987768923194);
    msg.setSource(84U);
    msg.setSourceEntity(131U);
    msg.setDestination(4657U);
    msg.setDestinationEntity(4U);
    msg.id = 120U;
    msg.value = 0.6977454947122973;

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
    msg.setTimeStamp(0.8823805232450586);
    msg.setSource(62298U);
    msg.setSourceEntity(247U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(20U);
    msg.id = 225U;
    msg.angle = 0.35336281069199416;

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
    msg.setTimeStamp(0.9638303178657771);
    msg.setSource(61810U);
    msg.setSourceEntity(25U);
    msg.setDestination(25259U);
    msg.setDestinationEntity(96U);
    msg.id = 195U;
    msg.angle = 0.38220137698619683;

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
    msg.setTimeStamp(0.41847563465556037);
    msg.setSource(64325U);
    msg.setSourceEntity(32U);
    msg.setDestination(15110U);
    msg.setDestinationEntity(249U);
    msg.id = 57U;
    msg.angle = 0.4008736312137462;

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
    msg.setTimeStamp(0.7169565432702126);
    msg.setSource(51365U);
    msg.setSourceEntity(158U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(146U);
    msg.op = 91U;
    msg.actions.assign("CSQLLLVANWCBRGHANOBRURNXZESRFCXQKEPCXCGZUKPCJMHENRVDJKDILMZHUJLWAIERAJXMMKMCBUJHGUOGFWKNOAPTFGDEIQQRUTXGSLJCJSWYIQIFBMVMHNVZWZRDZLIUTUGXHYTPCOWDSIZW");

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
    msg.setTimeStamp(0.7033105532038765);
    msg.setSource(41355U);
    msg.setSourceEntity(190U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(193U);
    msg.op = 203U;
    msg.actions.assign("CUCCQUYUAGXGFQLQLZEJOWXXNIBWTTARFCLRDUJTAIRFSXJMGNOGVRYXNPWPMMZTNPODLPFQZSTXGZEIOKGVHUHZRBOR");

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
    msg.setTimeStamp(0.5424475015679258);
    msg.setSource(247U);
    msg.setSourceEntity(1U);
    msg.setDestination(226U);
    msg.setDestinationEntity(66U);
    msg.op = 148U;
    msg.actions.assign("QMDHZHTYTNJPJJFMOBGKSSSMQGEVUAGFEVSBXWGMJTDVRYZLKBZDKIWHYFDEUQHQJELSEFDPZKVWCBDOWCZOKTKIJRTLHZXXIDOIVXYUCWKIUHHANUVZXOALXJGSRCLRVOICEZKGSACYCBYGBAVEMBTMULUFENJRGMURNRWNIFBAQQSLSCAOYWUYOZXNLLQPMDTXNIGMCVPCPPXRJPQDASDTIPKHIEFQBNPTPHGMYJAZKNRQ");

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
    msg.setTimeStamp(0.585067168743245);
    msg.setSource(58693U);
    msg.setSourceEntity(70U);
    msg.setDestination(283U);
    msg.setDestinationEntity(186U);
    msg.actions.assign("HOQGXIHJSIDDTPLNACIGOYRYBWPFKPFLCDWVETIIEFNBYXMPMEUOKHIZDGCSQBPTJCNLPQMFMIUNJFKVQRQZXNZSYETDIXREYQBAVNARTPFMQCCHGORIOUDCGVBUYJALVZEBVKUYLAEODYHFMFBHZLBKTNJVBTVRSUKSUHADMFXZSHSHCPQZJZPXUJXAWXEOSLMWJCYWJNNGJELAGGUBWOTZMKAAWPVXRCM");

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
    msg.setTimeStamp(0.8460378135354932);
    msg.setSource(60135U);
    msg.setSourceEntity(148U);
    msg.setDestination(33071U);
    msg.setDestinationEntity(5U);
    msg.actions.assign("QTPVLGYXPMNYRJIIEOBMICGRJFOUIZIQNRDKZBOAGSLSHNYNKIRUUHBQJOJAUXKTLYBWCEPXOVRMWWUHJOPKTGAXVLABKPQQYSBIXFLPCUNIKUVZHRBNFDKQSEDKTVSFFTUWCONMWDSONNBLZVQBWDVECZMDESESLSDLJPYYPRGMZTAXYTDEIDBARNHRVGARDFCXCGZHEGTHWQJGMZVAFJWL");

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
    msg.setTimeStamp(0.7702889364775521);
    msg.setSource(59672U);
    msg.setSourceEntity(167U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(49U);
    msg.actions.assign("DVHJBBQYWGDKVXPFGVZSYYNPBBLJEHZDEYIGSCDCRNTIRUUAGMCSLQHDZQXQPNZZTOUNIXWZUQHPCCSSUKAXTOHTCJFMWADFWVEHVQCRYJAUWAYPGEFBVJHMFBCRRLAQGDLQINSSXJWBFZLFJGAMKNNAMODJLRWKIXVOWXKMINSTRVEVBBMYHRPGJKZMTZIPTKLYODEREUY");

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
    msg.setTimeStamp(0.6233407320761334);
    msg.setSource(37251U);
    msg.setSourceEntity(155U);
    msg.setDestination(31491U);
    msg.setDestinationEntity(37U);
    msg.button = 77U;
    msg.value = 80U;

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
    msg.setTimeStamp(0.12549262673046313);
    msg.setSource(48613U);
    msg.setSourceEntity(170U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(194U);
    msg.button = 53U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.22525504775485505);
    msg.setSource(32846U);
    msg.setSourceEntity(171U);
    msg.setDestination(51034U);
    msg.setDestinationEntity(195U);
    msg.button = 254U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.9673215742122545);
    msg.setSource(8462U);
    msg.setSourceEntity(59U);
    msg.setDestination(33583U);
    msg.setDestinationEntity(182U);
    msg.op = 165U;
    msg.text.assign("LLJPPHIQGZDMURITEKYFOQOXFNNVUCUXVAVCSMSDMXBKBNAEECNMJRGQNFUDKNQRGMSOSQWJSVVZNDYUFAALDHLKPCALXZXLUEHPAIAWROIXHOCAWUGCNBJYIQXNYMEALTYJRAZQJWOROMGZUONWOYCLKBZZXDZHQWPEVKTTQDVYDSTFTHTEJJSKLSBTGHBBFIWVRYWTYBGKHSUGPDFGPZZVIEPVCXXEHYRBJHGPEFIC");

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
    msg.setTimeStamp(0.6280280903806154);
    msg.setSource(24168U);
    msg.setSourceEntity(202U);
    msg.setDestination(52884U);
    msg.setDestinationEntity(148U);
    msg.op = 179U;
    msg.text.assign("LNFZOUTWCDIYRFSIVJWPMPVPQQGGZDPXHITIUYMPPNRPQJBFEETFYKDZIASWWCWATEALUONKAKZVEDVXRVDZUTFBZYRYHKIHGXASDVMQUZSJIOMRCSFYCJFWNDPNBIQTZEKRNHXHWKWIQSPHLDAUYOCEAROMXCABMATLULDMLGHOJMXQCTFHPNGUBLXNRBGLEJJKYJLCW");

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
    msg.setTimeStamp(0.8059463733368544);
    msg.setSource(64471U);
    msg.setSourceEntity(218U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(134U);
    msg.op = 159U;
    msg.text.assign("QUAAPWGMFBHAWOA");

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
    msg.setTimeStamp(0.4277767794049724);
    msg.setSource(50675U);
    msg.setSourceEntity(171U);
    msg.setDestination(42369U);
    msg.setDestinationEntity(87U);
    msg.op = 187U;
    msg.time_remain = 0.9206294011090548;
    msg.sched_time = 0.0923800815235547;

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
    msg.setTimeStamp(0.4435525002112489);
    msg.setSource(20202U);
    msg.setSourceEntity(207U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(190U);
    msg.op = 250U;
    msg.time_remain = 0.1987632820066546;
    msg.sched_time = 0.12667039529756352;

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
    msg.setTimeStamp(0.8680303677707746);
    msg.setSource(374U);
    msg.setSourceEntity(113U);
    msg.setDestination(28029U);
    msg.setDestinationEntity(144U);
    msg.op = 11U;
    msg.time_remain = 0.13417082983548434;
    msg.sched_time = 0.7563761410828326;

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
    msg.setTimeStamp(0.7846290977530438);
    msg.setSource(38561U);
    msg.setSourceEntity(210U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(167U);
    msg.name.assign("JKZNXBFHAAHDYLWVNZBEEOEHYQABUWKVPIKISCWYIWCONVKQDVIHSXMFFPJBKFYUDTTYQXUFAJRGWLAWOTLPSDFTMJHLXDRQATQCKXPKHSDZIMOVWTRPCBIPMJKGDGMCGBJXUHEZCIIAYNGNRZKODTEZBCGTOEAKSRFYUYPVGGQUWZCWEMXOQYTULVQPLRRRXSXQOJHGLOIOFCEWPUJFJNSZB");
    msg.op = 147U;
    msg.sched_time = 0.5007328678408134;

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
    msg.setTimeStamp(0.18143501334744427);
    msg.setSource(56283U);
    msg.setSourceEntity(199U);
    msg.setDestination(34732U);
    msg.setDestinationEntity(33U);
    msg.name.assign("IIXXDBOZXSAQMZAFWJJWQNWRJVZKOMJZGIQVSSFNKOBTUYFFTTKWIZHPMYVYRHCKYDGMBCNRCTYDNPHRVCJHBFFZKZTKHUIEXRLDGOIQGUZDVFJTPLDTLXMPUNUXVSGQQVERGWREZOKYAEMKBGECENEPCOSUDCBCFYRBIOEYEPSJDHRGXFSWXIHGWBSSLRUOJALPKHYQULJCUMXQVATMPQWASKLHHCVQOWNAMLNWPNEDYPLBALXB");
    msg.op = 34U;
    msg.sched_time = 0.45235302701770963;

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
    msg.setTimeStamp(0.3272557274832272);
    msg.setSource(14309U);
    msg.setSourceEntity(69U);
    msg.setDestination(55444U);
    msg.setDestinationEntity(110U);
    msg.name.assign("WUQTDQHEPXUEICYRGJTNETHEPYBCTTZBAHFJHWOCMFPSDDLIJUOLWCUKLUQHWNMXAANGPPKSOIAWBGUANZGOFQMQSJFIIMVJMXAMPQNGHFPYOOSUBEJPXYRYODCBPJDMXFWGCIXOERGYCRYZGFNECFZHFBNZUBKJPAJHNXXMTEHVTWOIWDZXIZDMLRVQNUZHVVJYVDLAAQGIKCXTC");
    msg.op = 201U;
    msg.sched_time = 0.4969694602478011;

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
    msg.setTimeStamp(0.396898035814907);
    msg.setSource(58146U);
    msg.setSourceEntity(193U);
    msg.setDestination(195U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.10100462875941807);
    msg.setSource(24753U);
    msg.setSourceEntity(167U);
    msg.setDestination(52578U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9060635274189268);
    msg.setSource(9035U);
    msg.setSourceEntity(6U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.05645230100117693);
    msg.setSource(43687U);
    msg.setSourceEntity(231U);
    msg.setDestination(62755U);
    msg.setDestinationEntity(67U);
    msg.name.assign("EBIYIFIJUUKHOFPCAVYSDOGNSGGXBBLNEHBXJQHIACLWXPVQFVYVUPPMQLKJHAELZFIHRPWREQBOUARHJOXQBGDYOGIPLMRFGPCRCBMDHVAPDTNZBUAYEMRUIJPEZFDZLTSJGOYQDVDRWTQTFWZRLXOTNECTFHY");
    msg.state = 225U;

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
    msg.setTimeStamp(0.9369283161780845);
    msg.setSource(24630U);
    msg.setSourceEntity(140U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(44U);
    msg.name.assign("DZRQABPPYHISFHKPJUVROALTCDAKRRRELQHSVDKVLYUSNQOYNRCKIAELTSGVTYJQWIOKNPSCROXUGCYNPCODXZPFEGHFLBFWOHCGGCQGOBHDVIPVTVQEKMYZBPOFUBAOETMZFNTLAFJBXSZOLQTAUBMKMMFPWDBNXRKNVLHEXXKIYIQYWWIXWAZUJINZDC");
    msg.state = 10U;

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
    msg.setTimeStamp(0.9187463749840057);
    msg.setSource(21758U);
    msg.setSourceEntity(70U);
    msg.setDestination(61913U);
    msg.setDestinationEntity(113U);
    msg.name.assign("LRVUZKFRXEOHRUNVJOLWNXSIFNCLDESYSYVIXUCSOQMDDDSCGVYRKGZZRVBTIMPVJBTZLPLDSFQDTKOADFEPJLZVHVFOXEKZLBPOYUJIYHWPAKCQQNCXNBMQCJQJRJURWPUPHYSIAHSFHUCOYAEELNDWADGMGBEIBWTESQRKCMCXXBMCOHQIANHXIYAPPNGZAGHT");
    msg.state = 79U;

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
    msg.setTimeStamp(0.8280243684483093);
    msg.setSource(44763U);
    msg.setSourceEntity(123U);
    msg.setDestination(58762U);
    msg.setDestinationEntity(252U);
    msg.name.assign("DERWKVNNABXOSUDVACMRHXIJKLAUYVHJZJJWVCYHWXVFVABQGIERBKOXXQDHWZTBZUXZQNZZYBTYCEJWUDWBCHSBVEGRGDYVPGABFSURTWOTVUCTGZGDEQLTVATYLIDPFHDMRBRLJNLNWRNOGDPOSCIYPOPKELUFXNIHPUF");
    msg.value = 40U;

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
    msg.setTimeStamp(0.28892734047831137);
    msg.setSource(43237U);
    msg.setSourceEntity(211U);
    msg.setDestination(4459U);
    msg.setDestinationEntity(145U);
    msg.name.assign("YOMWBMSFGPTPUIHBDLYTJLASYVEURLRKRUXIQEOKNELTWBLCYAHTDQIXKKJS");
    msg.value = 153U;

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
    msg.setTimeStamp(0.1877654525515542);
    msg.setSource(32056U);
    msg.setSourceEntity(190U);
    msg.setDestination(59617U);
    msg.setDestinationEntity(152U);
    msg.name.assign("OALIEDYISVQKMTNUTBFZSOVXFUIFNZFIBXJMATWWWUZVKOEMLBRXMIACNPURTVJGCSEKUQTRPTGVVTILCHCZZWSCEFZGQJUVHECRQHWBKXJWXBBJZLYKQLACSVRKNEYHHKEPONCJHH");
    msg.value = 135U;

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
    msg.setTimeStamp(0.5368984492165482);
    msg.setSource(39417U);
    msg.setSourceEntity(78U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(193U);
    msg.name.assign("NWLOTJJEXBZUGFFOHQBZOQPUUFXENHJMASUVNPFBPWKRNOGRQDHHUXKBXY");

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
    msg.setTimeStamp(0.4694189920891001);
    msg.setSource(52848U);
    msg.setSourceEntity(189U);
    msg.setDestination(7795U);
    msg.setDestinationEntity(46U);
    msg.name.assign("RCSCLTINTYDVPFIHBZMOASNQRUHKLXWHJFEAGPMSURVIJOXLKYLOGUGAXYGVPUNRJBGQPCMCNQTVVZZLGZYLSPWDEYCFKEDOYCGESGBUBBSIEWWFHPTJSMUOCLUDZXKFQCQDJKYXNQV");

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
    msg.setTimeStamp(0.901866020143144);
    msg.setSource(32048U);
    msg.setSourceEntity(140U);
    msg.setDestination(63875U);
    msg.setDestinationEntity(76U);
    msg.name.assign("TOPEGXYJWKKDJJCEBGPCMUSTCIFKLTYARHNPB");

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
    msg.setTimeStamp(0.3179132774802541);
    msg.setSource(20760U);
    msg.setSourceEntity(136U);
    msg.setDestination(50849U);
    msg.setDestinationEntity(81U);
    msg.name.assign("NZENXOKHYJHRRWPKRIQVJVAUGBEHHWWFGMLXUWVSQQTOWDGJSIZ");
    msg.value = 102U;

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
    msg.setTimeStamp(0.843587321793516);
    msg.setSource(55269U);
    msg.setSourceEntity(47U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(119U);
    msg.name.assign("KMYXPWGMUDHOCRGOCITFFZKZTEBXHIWTFJAUSBEHZGLZSPJTZNVSDOJHNQXEFCNXOLXSWGIMLNQCKBPWVRRJVZRIPXQSKIAGDWLQSBRRPATL");
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
    msg.setTimeStamp(0.47088523720908615);
    msg.setSource(22370U);
    msg.setSourceEntity(59U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(125U);
    msg.name.assign("VDNCBYTXNGHEDGTXSAGLWITRWEEKLDXKMJFBKVWHZRABRCCULAJZXERZABVIQWGADCTMQMAOULKIDXKGSQLREMNEGYRSCKLVZMFVISJTBSMYIUNOXOSJYSXGYHZUQAAHMETLNMWVPCMZBFQNSTRFISUOPGCLTJUPUFGPUCDLYKITEDGQPZLHWXFNSUVTOBEOYQYINOKFCKVBXZPVH");
    msg.value = 35U;

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
    msg.setTimeStamp(0.766903262956269);
    msg.setSource(34250U);
    msg.setSourceEntity(58U);
    msg.setDestination(8358U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.05315477103137933;
    msg.lon = 0.9683187297024418;
    msg.height = 0.44877388432135135;
    msg.x = 0.8474027628582461;
    msg.y = 0.9434792204837499;
    msg.z = 0.11829875806117829;
    msg.phi = 0.17501752507429058;
    msg.theta = 0.3717443812666179;
    msg.psi = 0.8387321834069762;
    msg.u = 0.8012577283683299;
    msg.v = 0.23108515111508776;
    msg.w = 0.8321635208533966;
    msg.vx = 0.06438357290833785;
    msg.vy = 0.9294248557528315;
    msg.vz = 0.009490797400348971;
    msg.p = 0.5064250228424761;
    msg.q = 0.9153434692539038;
    msg.r = 0.20547803760405625;
    msg.depth = 0.6668662510181523;
    msg.alt = 0.6648627337354024;

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
    msg.setTimeStamp(0.002282181298800756);
    msg.setSource(9869U);
    msg.setSourceEntity(33U);
    msg.setDestination(48649U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.809519617114193;
    msg.lon = 0.8897080466931293;
    msg.height = 0.8729661140636872;
    msg.x = 0.808083554418239;
    msg.y = 0.43108524434534035;
    msg.z = 0.6946224380842144;
    msg.phi = 0.32744036692152145;
    msg.theta = 0.20225280072235308;
    msg.psi = 0.46839238185915577;
    msg.u = 0.9424421755482303;
    msg.v = 0.17950577362656717;
    msg.w = 0.9079589338167363;
    msg.vx = 0.7695298446891091;
    msg.vy = 0.8932948023219668;
    msg.vz = 0.31861148347998813;
    msg.p = 0.26542746986404864;
    msg.q = 0.8449111784437268;
    msg.r = 0.9600748216633916;
    msg.depth = 0.7335270909477909;
    msg.alt = 0.9070768348927369;

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
    msg.setTimeStamp(0.6011467218071573);
    msg.setSource(52027U);
    msg.setSourceEntity(46U);
    msg.setDestination(9064U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.2583045169304089;
    msg.lon = 0.033228341130525085;
    msg.height = 0.4030337756987883;
    msg.x = 0.08285573086435105;
    msg.y = 0.2687990736532401;
    msg.z = 0.18304629979716625;
    msg.phi = 0.6232270529988088;
    msg.theta = 0.7839470530359873;
    msg.psi = 0.5286556282373843;
    msg.u = 0.41409372707136927;
    msg.v = 0.49657489577857683;
    msg.w = 0.2900019523998918;
    msg.vx = 0.7390888845624344;
    msg.vy = 0.4478924422739057;
    msg.vz = 0.28803306371883286;
    msg.p = 0.15973393734562602;
    msg.q = 0.7526849027549648;
    msg.r = 0.8343492957509395;
    msg.depth = 0.24128950651779746;
    msg.alt = 0.0017635382885669015;

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
    msg.setTimeStamp(0.5798514437656597);
    msg.setSource(10556U);
    msg.setSourceEntity(73U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(186U);
    msg.x = 0.4228259024313996;
    msg.y = 0.521698027483831;
    msg.z = 0.2953667167476747;

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
    msg.setTimeStamp(0.1141817254470896);
    msg.setSource(5852U);
    msg.setSourceEntity(203U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(7U);
    msg.x = 0.640676265381119;
    msg.y = 0.4779790494277678;
    msg.z = 0.6367414883217375;

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
    msg.setTimeStamp(0.2643214140772405);
    msg.setSource(51462U);
    msg.setSourceEntity(239U);
    msg.setDestination(29301U);
    msg.setDestinationEntity(78U);
    msg.x = 0.5352444751274599;
    msg.y = 0.5691175924128492;
    msg.z = 0.9268006079189783;

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
    msg.setTimeStamp(0.5902104307752271);
    msg.setSource(21847U);
    msg.setSourceEntity(99U);
    msg.setDestination(26294U);
    msg.setDestinationEntity(86U);
    msg.value = 0.3370406380140245;

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
    msg.setTimeStamp(0.4645078162680273);
    msg.setSource(61430U);
    msg.setSourceEntity(216U);
    msg.setDestination(47395U);
    msg.setDestinationEntity(189U);
    msg.value = 0.2844854352793377;

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
    msg.setTimeStamp(0.2385577886826542);
    msg.setSource(33075U);
    msg.setSourceEntity(179U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(118U);
    msg.value = 0.010720848058294652;

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
    msg.setTimeStamp(0.6672766201935347);
    msg.setSource(43152U);
    msg.setSourceEntity(233U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5915221408117148;

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
    msg.setTimeStamp(0.5516789962899);
    msg.setSource(56972U);
    msg.setSourceEntity(8U);
    msg.setDestination(16571U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5767424361705453;

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
    msg.setTimeStamp(0.9108474950979497);
    msg.setSource(4903U);
    msg.setSourceEntity(172U);
    msg.setDestination(5218U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6516780212971913;

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
    msg.setTimeStamp(0.49233088133075653);
    msg.setSource(42280U);
    msg.setSourceEntity(45U);
    msg.setDestination(8055U);
    msg.setDestinationEntity(119U);
    msg.x = 0.9322584868291909;
    msg.y = 0.4152878245074413;
    msg.z = 0.25315286312751406;
    msg.phi = 0.8888945050337534;
    msg.theta = 0.3634033179974884;
    msg.psi = 0.596762105848757;
    msg.p = 0.9451207037814361;
    msg.q = 0.5953751828946738;
    msg.r = 0.7778345235740316;
    msg.u = 0.7583248730374457;
    msg.v = 0.11409255812677255;
    msg.w = 0.4915084509563289;
    msg.bias_psi = 0.5758579334046371;
    msg.bias_r = 0.46694976842457403;

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
    msg.setTimeStamp(0.7430389472027236);
    msg.setSource(46370U);
    msg.setSourceEntity(102U);
    msg.setDestination(39382U);
    msg.setDestinationEntity(143U);
    msg.x = 0.6811328037174554;
    msg.y = 0.5103524113392762;
    msg.z = 0.9159533166846859;
    msg.phi = 0.8318222331166;
    msg.theta = 0.6035955403170292;
    msg.psi = 0.27983001669342344;
    msg.p = 0.37053303605660814;
    msg.q = 0.5327534618887466;
    msg.r = 0.004062921873281167;
    msg.u = 0.03629627123249202;
    msg.v = 0.07338189623056823;
    msg.w = 0.03042977011289838;
    msg.bias_psi = 0.40823288242254785;
    msg.bias_r = 0.2076794839036551;

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
    msg.setTimeStamp(0.0021959711239218915);
    msg.setSource(6057U);
    msg.setSourceEntity(93U);
    msg.setDestination(51878U);
    msg.setDestinationEntity(155U);
    msg.x = 0.08445807254967919;
    msg.y = 0.8528905601617978;
    msg.z = 0.5846838229078343;
    msg.phi = 0.17999761636392364;
    msg.theta = 0.6452785667766588;
    msg.psi = 0.17514201780965544;
    msg.p = 0.8303318325226735;
    msg.q = 0.6732595083097006;
    msg.r = 0.5753646079970386;
    msg.u = 0.13167657019084966;
    msg.v = 0.19152539354755738;
    msg.w = 0.6896783204774147;
    msg.bias_psi = 0.022537809663086383;
    msg.bias_r = 0.7445484493579227;

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
    msg.setTimeStamp(0.6036743279567838);
    msg.setSource(38048U);
    msg.setSourceEntity(164U);
    msg.setDestination(45808U);
    msg.setDestinationEntity(42U);
    msg.bias_psi = 0.5791567200501927;
    msg.bias_r = 0.24926452741364935;
    msg.cog = 0.9341027198173475;
    msg.cyaw = 0.08678123184543651;
    msg.lbl_rej_level = 0.2478576020133858;
    msg.gps_rej_level = 0.6125556164332835;
    msg.custom_x = 0.175827654729243;
    msg.custom_y = 0.08360761463908906;
    msg.custom_z = 0.5580734062199473;

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
    msg.setTimeStamp(0.09677666687800657);
    msg.setSource(58188U);
    msg.setSourceEntity(110U);
    msg.setDestination(914U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.9371424660832847;
    msg.bias_r = 0.19194100117103152;
    msg.cog = 0.07469936544250466;
    msg.cyaw = 0.05878271885459774;
    msg.lbl_rej_level = 0.5985586756864142;
    msg.gps_rej_level = 0.15330789099036546;
    msg.custom_x = 0.4524421815329579;
    msg.custom_y = 0.8317861906182914;
    msg.custom_z = 0.9284526653546127;

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
    msg.setTimeStamp(0.20248025830194083);
    msg.setSource(41842U);
    msg.setSourceEntity(39U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(153U);
    msg.bias_psi = 0.8086482551869314;
    msg.bias_r = 0.25165562594289204;
    msg.cog = 0.07553077786419748;
    msg.cyaw = 0.6409304650477967;
    msg.lbl_rej_level = 0.9270632371042614;
    msg.gps_rej_level = 0.5173131087843421;
    msg.custom_x = 0.42547610200331776;
    msg.custom_y = 0.9631962322380604;
    msg.custom_z = 0.13746631675802035;

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
    msg.setTimeStamp(0.9952868012051207);
    msg.setSource(33175U);
    msg.setSourceEntity(249U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.8242148473772447;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.07792910306181278);
    msg.setSource(47362U);
    msg.setSourceEntity(233U);
    msg.setDestination(61043U);
    msg.setDestinationEntity(92U);
    msg.utc_time = 0.40051427976276344;
    msg.reason = 220U;

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
    msg.setTimeStamp(0.20648521960519328);
    msg.setSource(53265U);
    msg.setSourceEntity(62U);
    msg.setDestination(14297U);
    msg.setDestinationEntity(107U);
    msg.utc_time = 0.7530861856340069;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.0427111141488693);
    msg.setSource(61065U);
    msg.setSourceEntity(17U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(54U);
    msg.id = 14U;
    msg.range = 0.1847245149778699;
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
    msg.setTimeStamp(0.9198832988887169);
    msg.setSource(10539U);
    msg.setSourceEntity(123U);
    msg.setDestination(21551U);
    msg.setDestinationEntity(26U);
    msg.id = 110U;
    msg.range = 0.06987246984917794;
    msg.acceptance = 36U;

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
    msg.setTimeStamp(0.9762419804154654);
    msg.setSource(53746U);
    msg.setSourceEntity(182U);
    msg.setDestination(62121U);
    msg.setDestinationEntity(238U);
    msg.id = 47U;
    msg.range = 0.691109199253336;
    msg.acceptance = 143U;

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
    msg.setTimeStamp(0.9690166831694188);
    msg.setSource(32854U);
    msg.setSourceEntity(209U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(196U);
    msg.type = 235U;
    msg.reason = 85U;
    msg.value = 0.4337039161705257;
    msg.timestep = 0.704815698502238;

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
    msg.setTimeStamp(0.18957673955818188);
    msg.setSource(45075U);
    msg.setSourceEntity(11U);
    msg.setDestination(8256U);
    msg.setDestinationEntity(40U);
    msg.type = 231U;
    msg.reason = 107U;
    msg.value = 0.42957091503248146;
    msg.timestep = 0.5616849470143186;

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
    msg.setTimeStamp(0.21003193059843217);
    msg.setSource(49112U);
    msg.setSourceEntity(253U);
    msg.setDestination(12828U);
    msg.setDestinationEntity(199U);
    msg.type = 120U;
    msg.reason = 26U;
    msg.value = 0.04172023669666847;
    msg.timestep = 0.013710051364454912;

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
    msg.setTimeStamp(0.12046797735482973);
    msg.setSource(8351U);
    msg.setSourceEntity(227U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.21149228193462222);
    msg.setSource(62926U);
    msg.setSourceEntity(18U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.1998583778953983);
    msg.setSource(42000U);
    msg.setSourceEntity(183U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.955562054317146);
    msg.setSource(3618U);
    msg.setSourceEntity(169U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("ZCPNIPWZPKWOJKMIXWWGFEEXDJYLULNRMBBAUKCHRXXTXEONHLOYDGBJFPTVFVXIIWVGOHD");
    msg.x = 0.09353758694400138;
    msg.y = 0.15857056339067865;
    msg.depth = 0.9472843140088604;
    msg.var_x = 0.9051512735853869;
    msg.var_y = 0.9965285745934005;

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
    msg.setTimeStamp(0.3007532722297759);
    msg.setSource(29933U);
    msg.setSourceEntity(212U);
    msg.setDestination(52235U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("YPUPAVSFWVVOWFEBDSTWRRKUKGBCNOOUYKUCFOOVWKZYJAN");
    msg.x = 0.7340714000551466;
    msg.y = 0.10566941730105861;
    msg.depth = 0.7869865039066009;
    msg.var_x = 0.8159978937735811;
    msg.var_y = 0.6895731558025293;

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
    msg.setTimeStamp(0.5035147385707004);
    msg.setSource(6167U);
    msg.setSourceEntity(54U);
    msg.setDestination(45428U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("ATNSATLMSWNAEBIIQYNGFCRXBGNWEDYNPFVSYIPULOVVBDKZNVKVVRIFZGAKHHEWYZCBTG");
    msg.x = 0.24018085616106477;
    msg.y = 0.5410181086690327;
    msg.depth = 0.8563382623187371;
    msg.var_x = 0.051704759446651205;
    msg.var_y = 0.6248146469196774;

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
    msg.setTimeStamp(0.9307357685683643);
    msg.setSource(22878U);
    msg.setSourceEntity(92U);
    msg.setDestination(11654U);
    msg.setDestinationEntity(11U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.6390863848110391);
    msg.setSource(37755U);
    msg.setSourceEntity(251U);
    msg.setDestination(42499U);
    msg.setDestinationEntity(84U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.22020476886172424);
    msg.setSource(15509U);
    msg.setSourceEntity(210U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(235U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.06941812580400575);
    msg.setSource(46862U);
    msg.setSourceEntity(103U);
    msg.setDestination(33318U);
    msg.setDestinationEntity(85U);
    msg.value = 0.7108949344777403;

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
    msg.setTimeStamp(0.5928743632334436);
    msg.setSource(14867U);
    msg.setSourceEntity(248U);
    msg.setDestination(59008U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7927312109282793;

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
    msg.setTimeStamp(0.4316039719413156);
    msg.setSource(26786U);
    msg.setSourceEntity(156U);
    msg.setDestination(14146U);
    msg.setDestinationEntity(63U);
    msg.value = 0.4300153564671767;

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
    msg.setTimeStamp(0.7620452974873985);
    msg.setSource(44297U);
    msg.setSourceEntity(167U);
    msg.setDestination(48939U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4702213281034714;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.7459456955544336);
    msg.setSource(26415U);
    msg.setSourceEntity(144U);
    msg.setDestination(24283U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9555575255422191;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.3961401995560344);
    msg.setSource(38161U);
    msg.setSourceEntity(9U);
    msg.setDestination(21259U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8572622600176414;
    msg.z_units = 32U;

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
    msg.setTimeStamp(0.22241478266538783);
    msg.setSource(25498U);
    msg.setSourceEntity(93U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(239U);
    msg.value = 0.13511207322905938;
    msg.speed_units = 155U;

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
    msg.setTimeStamp(0.9171610536113581);
    msg.setSource(4843U);
    msg.setSourceEntity(28U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6272516662369712;
    msg.speed_units = 1U;

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
    msg.setTimeStamp(0.7946569308905159);
    msg.setSource(62915U);
    msg.setSourceEntity(60U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(190U);
    msg.value = 0.05747196817209399;
    msg.speed_units = 22U;

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
    msg.setTimeStamp(0.1507732119773506);
    msg.setSource(2672U);
    msg.setSourceEntity(217U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8841946662020367;

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
    msg.setTimeStamp(0.31524423273016566);
    msg.setSource(35152U);
    msg.setSourceEntity(232U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(126U);
    msg.value = 0.10952291475492626;

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
    msg.setTimeStamp(0.24615130495326243);
    msg.setSource(21896U);
    msg.setSourceEntity(233U);
    msg.setDestination(25179U);
    msg.setDestinationEntity(27U);
    msg.value = 0.08445217204494926;

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
    msg.setTimeStamp(0.9507300871775113);
    msg.setSource(26241U);
    msg.setSourceEntity(97U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(142U);
    msg.value = 0.49779141650766545;

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
    msg.setTimeStamp(0.5833839649267346);
    msg.setSource(1473U);
    msg.setSourceEntity(64U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0732053945561344;

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
    msg.setTimeStamp(0.7558083042361283);
    msg.setSource(63714U);
    msg.setSourceEntity(153U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(254U);
    msg.value = 0.845741149447738;

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
    msg.setTimeStamp(0.6544233317190927);
    msg.setSource(34037U);
    msg.setSourceEntity(37U);
    msg.setDestination(33554U);
    msg.setDestinationEntity(111U);
    msg.value = 0.4817135307682051;

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
    msg.setTimeStamp(0.6165504263048599);
    msg.setSource(20956U);
    msg.setSourceEntity(205U);
    msg.setDestination(2580U);
    msg.setDestinationEntity(166U);
    msg.value = 0.38709597508071336;

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
    msg.setTimeStamp(0.8889887397924847);
    msg.setSource(62497U);
    msg.setSourceEntity(24U);
    msg.setDestination(36713U);
    msg.setDestinationEntity(193U);
    msg.value = 0.4423359304393849;

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
    msg.setTimeStamp(0.5781145064201445);
    msg.setSource(31492U);
    msg.setSourceEntity(83U);
    msg.setDestination(3723U);
    msg.setDestinationEntity(99U);
    msg.start_lat = 0.04173611970076896;
    msg.start_lon = 0.4633936531356513;
    msg.start_z = 0.883901397859747;
    msg.start_z_units = 57U;
    msg.end_lat = 0.47098410874718777;
    msg.end_lon = 0.810561141334028;
    msg.end_z = 0.31787115121580567;
    msg.end_z_units = 29U;
    msg.speed = 0.5316655538736331;
    msg.speed_units = 35U;
    msg.lradius = 0.7670715426646092;
    msg.flags = 85U;

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
    msg.setTimeStamp(0.07409769554212597);
    msg.setSource(18015U);
    msg.setSourceEntity(155U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(236U);
    msg.start_lat = 0.12456301523590163;
    msg.start_lon = 0.25178287250520104;
    msg.start_z = 0.11442192872904244;
    msg.start_z_units = 163U;
    msg.end_lat = 0.7363172573048385;
    msg.end_lon = 0.369860220876188;
    msg.end_z = 0.7703796863088035;
    msg.end_z_units = 180U;
    msg.speed = 0.7248551852218507;
    msg.speed_units = 70U;
    msg.lradius = 0.24317047055974028;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.8340834420052682);
    msg.setSource(62713U);
    msg.setSourceEntity(82U);
    msg.setDestination(46971U);
    msg.setDestinationEntity(210U);
    msg.start_lat = 0.4594673341876263;
    msg.start_lon = 0.6992393363624497;
    msg.start_z = 0.28939056087624004;
    msg.start_z_units = 67U;
    msg.end_lat = 0.4585612066700344;
    msg.end_lon = 0.8769030736381406;
    msg.end_z = 0.25536682092690255;
    msg.end_z_units = 211U;
    msg.speed = 0.6136278089875157;
    msg.speed_units = 149U;
    msg.lradius = 0.7640767678266285;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.9108849127703005);
    msg.setSource(48849U);
    msg.setSourceEntity(61U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(199U);
    msg.x = 0.06837537729871512;
    msg.y = 0.8862585960872574;
    msg.z = 0.21933368200324255;
    msg.k = 0.7888375297889865;
    msg.m = 0.2000049155178747;
    msg.n = 0.3441513729998451;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.9722473292899501);
    msg.setSource(57285U);
    msg.setSourceEntity(11U);
    msg.setDestination(58456U);
    msg.setDestinationEntity(190U);
    msg.x = 0.793722890720514;
    msg.y = 0.20727111949454768;
    msg.z = 0.7578419042967397;
    msg.k = 0.8936393561369868;
    msg.m = 0.5678659644871447;
    msg.n = 0.7544044921124086;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.47356235999563434);
    msg.setSource(61994U);
    msg.setSourceEntity(67U);
    msg.setDestination(1342U);
    msg.setDestinationEntity(219U);
    msg.x = 0.878205353163937;
    msg.y = 0.012770606003505325;
    msg.z = 0.15779195233942622;
    msg.k = 0.42619314091315785;
    msg.m = 0.731778836673754;
    msg.n = 0.7728358716679778;
    msg.flags = 7U;

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
    msg.setTimeStamp(0.5754630372059837);
    msg.setSource(56257U);
    msg.setSourceEntity(214U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(87U);
    msg.value = 0.36999303601668954;

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
    msg.setTimeStamp(0.5338091523660884);
    msg.setSource(61841U);
    msg.setSourceEntity(4U);
    msg.setDestination(7415U);
    msg.setDestinationEntity(99U);
    msg.value = 0.903245298983649;

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
    msg.setTimeStamp(0.6910777392438032);
    msg.setSource(25052U);
    msg.setSourceEntity(95U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8039343911234926;

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
    msg.setTimeStamp(0.6680100526595493);
    msg.setSource(23263U);
    msg.setSourceEntity(196U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(18U);
    msg.u = 0.452027534477769;
    msg.v = 0.40358775647016076;
    msg.w = 0.2175395379783297;
    msg.p = 0.2589823216780347;
    msg.q = 0.41869606449525854;
    msg.r = 0.7877057335914787;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.03355580672063907);
    msg.setSource(12574U);
    msg.setSourceEntity(199U);
    msg.setDestination(4582U);
    msg.setDestinationEntity(125U);
    msg.u = 0.22972210857106934;
    msg.v = 0.0950881324858538;
    msg.w = 0.32020354737395607;
    msg.p = 0.11569011296229104;
    msg.q = 0.2481460336233403;
    msg.r = 0.3189857233161445;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.37863097679356883);
    msg.setSource(8631U);
    msg.setSourceEntity(218U);
    msg.setDestination(32938U);
    msg.setDestinationEntity(57U);
    msg.u = 0.12123649619024901;
    msg.v = 0.8354753300117308;
    msg.w = 0.3850737558059647;
    msg.p = 0.030188336730142984;
    msg.q = 0.8245496154161062;
    msg.r = 0.9948971617491073;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.1721673874126194);
    msg.setSource(63422U);
    msg.setSourceEntity(31U);
    msg.setDestination(34093U);
    msg.setDestinationEntity(71U);
    msg.start_lat = 0.3394195538929622;
    msg.start_lon = 0.314713482012807;
    msg.start_z = 0.5117457429052755;
    msg.start_z_units = 246U;
    msg.end_lat = 0.5299076699905217;
    msg.end_lon = 0.42722030054383886;
    msg.end_z = 0.3558141211888022;
    msg.end_z_units = 167U;
    msg.lradius = 0.5034349370165319;
    msg.flags = 83U;
    msg.x = 0.5431077013864329;
    msg.y = 0.05968703029148681;
    msg.z = 0.3069852036270845;
    msg.vx = 0.1785015496654644;
    msg.vy = 0.9037233021118757;
    msg.vz = 0.01510990676875934;
    msg.course_error = 0.8209089740454282;
    msg.eta = 24196U;

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
    msg.setTimeStamp(0.5448372154216831);
    msg.setSource(13824U);
    msg.setSourceEntity(84U);
    msg.setDestination(43777U);
    msg.setDestinationEntity(174U);
    msg.start_lat = 0.7603527333042539;
    msg.start_lon = 0.21721025479487888;
    msg.start_z = 0.03427383198911271;
    msg.start_z_units = 221U;
    msg.end_lat = 0.6914101779151903;
    msg.end_lon = 0.20449549298945602;
    msg.end_z = 0.6734442600151129;
    msg.end_z_units = 95U;
    msg.lradius = 0.3575677027559102;
    msg.flags = 209U;
    msg.x = 0.5766023663304418;
    msg.y = 0.4151982392235605;
    msg.z = 0.6302592565605398;
    msg.vx = 0.6030721160596861;
    msg.vy = 0.9718702546270767;
    msg.vz = 0.33512759361257793;
    msg.course_error = 0.39811681076784644;
    msg.eta = 50903U;

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
    msg.setTimeStamp(0.792931760341908);
    msg.setSource(56725U);
    msg.setSourceEntity(66U);
    msg.setDestination(35850U);
    msg.setDestinationEntity(151U);
    msg.start_lat = 0.9816728600987948;
    msg.start_lon = 0.2846865665316525;
    msg.start_z = 0.841624258429938;
    msg.start_z_units = 191U;
    msg.end_lat = 0.44420660057701866;
    msg.end_lon = 0.2358478965746874;
    msg.end_z = 0.026194730291011714;
    msg.end_z_units = 177U;
    msg.lradius = 0.4649303752441848;
    msg.flags = 193U;
    msg.x = 0.03694840911049457;
    msg.y = 0.362470647134149;
    msg.z = 0.475970634518766;
    msg.vx = 0.7771444389896944;
    msg.vy = 0.805037945317755;
    msg.vz = 0.08472665732380424;
    msg.course_error = 0.30948840585713844;
    msg.eta = 16934U;

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
    msg.setTimeStamp(0.7097048025589137);
    msg.setSource(22581U);
    msg.setSourceEntity(90U);
    msg.setDestination(2663U);
    msg.setDestinationEntity(193U);
    msg.k = 0.7219132518279825;
    msg.m = 0.9476191648109139;
    msg.n = 0.8283738471279939;

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
    msg.setTimeStamp(0.88038308537707);
    msg.setSource(39298U);
    msg.setSourceEntity(179U);
    msg.setDestination(24781U);
    msg.setDestinationEntity(140U);
    msg.k = 0.58071257794325;
    msg.m = 0.8963808504166974;
    msg.n = 0.6535717879009539;

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
    msg.setTimeStamp(0.04294144263891164);
    msg.setSource(16117U);
    msg.setSourceEntity(118U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(153U);
    msg.k = 0.39594299588128956;
    msg.m = 0.6870222171406553;
    msg.n = 0.20355941071869676;

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
    msg.setTimeStamp(0.11208191794959577);
    msg.setSource(53274U);
    msg.setSourceEntity(171U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(43U);
    msg.p = 0.2332601514556899;
    msg.i = 0.014679004462058831;
    msg.d = 0.8478303296456069;
    msg.a = 0.0453017222538713;

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
    msg.setTimeStamp(0.04843760133904029);
    msg.setSource(12346U);
    msg.setSourceEntity(96U);
    msg.setDestination(49940U);
    msg.setDestinationEntity(6U);
    msg.p = 0.18573069599124592;
    msg.i = 0.2739056860944984;
    msg.d = 0.9109598432307265;
    msg.a = 0.5020994331804488;

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
    msg.setTimeStamp(0.9801027474213692);
    msg.setSource(25303U);
    msg.setSourceEntity(46U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(89U);
    msg.p = 0.1462942319256375;
    msg.i = 0.9838885292492285;
    msg.d = 0.5015052212466747;
    msg.a = 0.19851908467270185;

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
    msg.setTimeStamp(0.016207686425129042);
    msg.setSource(43354U);
    msg.setSourceEntity(220U);
    msg.setDestination(32358U);
    msg.setDestinationEntity(183U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.6872331063495885);
    msg.setSource(9565U);
    msg.setSourceEntity(180U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(218U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.8056356947238431);
    msg.setSource(8542U);
    msg.setSourceEntity(163U);
    msg.setDestination(9292U);
    msg.setDestinationEntity(188U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.8190230728065072);
    msg.setSource(16915U);
    msg.setSourceEntity(179U);
    msg.setDestination(64194U);
    msg.setDestinationEntity(220U);
    msg.timeout = 38497U;
    msg.lat = 0.9213135185586862;
    msg.lon = 0.9498476500469315;
    msg.z = 0.36225064545957364;
    msg.z_units = 206U;
    msg.speed = 0.9137613080056916;
    msg.speed_units = 134U;
    msg.roll = 0.25793531497187105;
    msg.pitch = 0.5712277231849392;
    msg.yaw = 0.09018729013857796;
    msg.custom.assign("QIMXTCYTEOUFJVTDUDAOWTQLYAUQBFNCLWKOIXLQEHSJEAVKTQHPKMVBNUYPVZKNMXABRZTVXIAJOZZDPNXVJW");

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
    msg.setTimeStamp(0.29258920412190415);
    msg.setSource(50430U);
    msg.setSourceEntity(75U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(224U);
    msg.timeout = 44179U;
    msg.lat = 0.15478141014241242;
    msg.lon = 0.678549880747538;
    msg.z = 0.07694285299774517;
    msg.z_units = 102U;
    msg.speed = 0.18779557407746783;
    msg.speed_units = 223U;
    msg.roll = 0.5827450912321899;
    msg.pitch = 0.3513819793979953;
    msg.yaw = 0.43590499408363503;
    msg.custom.assign("PCVJMKROELUKEDMOGOFFBZUKAEZRXWYLDQHMOIVUCDIMLYUNYIJJNVLQFOOXGNYBHPQGAYRBPSAPWTIDGWPTHTJDCDTOERCUJHNTGSYIKHFLFZPCRXSNSMIQAYWXXADZSNZIGZLJHQREKRXQGNXZVFBSEVHFTCLNMLCLBZVOQIHWIJJWUAUHWPYSJVUB");

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
    msg.setTimeStamp(0.9534371822966773);
    msg.setSource(6017U);
    msg.setSourceEntity(22U);
    msg.setDestination(27882U);
    msg.setDestinationEntity(129U);
    msg.timeout = 28459U;
    msg.lat = 0.38473483981874934;
    msg.lon = 0.4820009502146374;
    msg.z = 0.25349609756822955;
    msg.z_units = 60U;
    msg.speed = 0.4292327543630422;
    msg.speed_units = 244U;
    msg.roll = 0.8842937214330044;
    msg.pitch = 0.14528223976247967;
    msg.yaw = 0.8733973538030982;
    msg.custom.assign("GLROTHLWXZMWVYAUISDMXDQEVZWHGERZHLNRPKQQPDVSHCWBYJMYIPMBGZNLESPHFJZPFAQITLND");

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
    msg.setTimeStamp(0.7400538733670454);
    msg.setSource(20977U);
    msg.setSourceEntity(160U);
    msg.setDestination(23657U);
    msg.setDestinationEntity(133U);
    msg.timeout = 26818U;
    msg.lat = 0.636136134663132;
    msg.lon = 0.5101946802514734;
    msg.z = 0.4239258952612325;
    msg.z_units = 40U;
    msg.speed = 0.41573944786779304;
    msg.speed_units = 58U;
    msg.duration = 1655U;
    msg.radius = 0.849139497159682;
    msg.flags = 15U;
    msg.custom.assign("WJXWMQOJHJVBDCIEHRKWDJZTLXECYGHJHVQRNEMNLPCUQ");

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
    msg.setTimeStamp(0.8887401251301288);
    msg.setSource(1238U);
    msg.setSourceEntity(132U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(220U);
    msg.timeout = 1124U;
    msg.lat = 0.314268535605956;
    msg.lon = 0.9034063903538635;
    msg.z = 0.6781380244300731;
    msg.z_units = 170U;
    msg.speed = 0.018047014558343566;
    msg.speed_units = 115U;
    msg.duration = 47253U;
    msg.radius = 0.8822268539692936;
    msg.flags = 226U;
    msg.custom.assign("TBUTXWUADCNNYGZHIKLVKTEONGXYQYCZMVPOJGKSESCCSAZATACSIAKHIVLZQ");

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
    msg.setTimeStamp(0.11880491744567367);
    msg.setSource(22099U);
    msg.setSourceEntity(83U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(86U);
    msg.timeout = 16870U;
    msg.lat = 0.13782399363878428;
    msg.lon = 0.108184224904604;
    msg.z = 0.7799944516799956;
    msg.z_units = 229U;
    msg.speed = 0.3192213549565309;
    msg.speed_units = 94U;
    msg.duration = 51323U;
    msg.radius = 0.5685119719098464;
    msg.flags = 115U;
    msg.custom.assign("HXDVHYVODQGZSSFSIRNKWPNXLBGKYCQJMJHEFMRCJBYDLUYBMPUQXOXGZVEZINFMOXOHIAESQGIHVCCBFVWCSAAHFRDWDLHJYFRYKBHOMQHELGNVTKZUZXIBRSTSGVGWNALJWDYLKKUJXHEDIPXAKZIQOUOJNDRNUNPEWEQEOIBCTKECFWETITYAGZLPLRAXFICMTAXDLFCTZJRPMDQLUFKWUYJKBPOATBMSOJTNQNUBTVGVPGPVMWZCSRQ");

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
    msg.setTimeStamp(0.5117101595884376);
    msg.setSource(63534U);
    msg.setSourceEntity(56U);
    msg.setDestination(44659U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("TKSCCUFYJHWFCAKNUXQHCWRTTFRSFMAKFXXIBJFZFMVHWNFZYLUDQMPKEQRHSVWUAQJQZFGXQJSRRQGZETYKAWBSXGTPBHYDUXJWTSDNUIZRSHGWLGDBCETVMAONBAGEBMVXLUWKSCAUWZANVKLCHOHQSAVVGTHTXGEEMJPXCTMIDIKBAGUSQJYPZLBPFZOGOIYLYIIBKJYPDROVOPPRKJDINCPVRMXJMPE");

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
    msg.setTimeStamp(0.9829218352196709);
    msg.setSource(58960U);
    msg.setSourceEntity(109U);
    msg.setDestination(26206U);
    msg.setDestinationEntity(83U);
    msg.custom.assign("OBASUPYPGZEMFOGUZTUIRTVXWCJFZHWKINLUEGZHIIPJHRYDEHLDHKUBWCFCMRJXQEUICERSWGVDSIAVFQGACPACNKOCVDNAYXLLUQFDNBAMPMTAONJQNVTZFPWDPMMTFODUHRGBYSTWPRHLKYSWJSJMYYXGEXIXUSBJKBJQZXOSYMMCGHOGGBRKYVJODOTVKQJBRWASZUB");

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
    msg.setTimeStamp(0.357333577474782);
    msg.setSource(1313U);
    msg.setSourceEntity(132U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(104U);
    msg.custom.assign("YOICNNJTNQGZQFSLHQIPBWJBTXAVIIIWAMZSLPHGJVULCUBDOUAIBZWZDBSDJWMXHPTNHAK");

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
    msg.setTimeStamp(0.6228515487075181);
    msg.setSource(41926U);
    msg.setSourceEntity(167U);
    msg.setDestination(19752U);
    msg.setDestinationEntity(26U);
    msg.timeout = 37633U;
    msg.lat = 0.1309810262367238;
    msg.lon = 0.6600620586366539;
    msg.z = 0.8021476517718157;
    msg.z_units = 95U;
    msg.duration = 22542U;
    msg.speed = 0.1084104502641513;
    msg.speed_units = 254U;
    msg.type = 157U;
    msg.radius = 0.8844656941109713;
    msg.length = 0.7095739256828973;
    msg.bearing = 0.8073512554484871;
    msg.direction = 128U;
    msg.custom.assign("NFZWVEVXQBQGFLKREIBPENQQOHNCGQRMXIBIGOIHKTDJACDOKJTWBAIJKRBMAWKLLORYQACOVOBDDMPZVBGJLDCLASQINXFHUGZJZBQPPUJQULXMCXSQPXHSBTUFGPLFYMUYTRMWUAXAZGYEISNXCMCYFTHNIRRVFEVHWKPMC");

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
    msg.setTimeStamp(0.38329664247696116);
    msg.setSource(30177U);
    msg.setSourceEntity(194U);
    msg.setDestination(17404U);
    msg.setDestinationEntity(144U);
    msg.timeout = 58285U;
    msg.lat = 0.5601369009383492;
    msg.lon = 0.3524989396668172;
    msg.z = 0.4870867627975085;
    msg.z_units = 102U;
    msg.duration = 20384U;
    msg.speed = 0.9958295100994379;
    msg.speed_units = 137U;
    msg.type = 119U;
    msg.radius = 0.6258162934202687;
    msg.length = 0.8813869269063871;
    msg.bearing = 0.917090382069248;
    msg.direction = 79U;
    msg.custom.assign("XTBHSCLVZAWKKNVCRYADAUNDNSWKJAZGVBFWQLFILNWLYJYGKZYJHIQIDMMSNMTSBQJZSVFXEQBDDFTLJ");

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
    msg.setTimeStamp(0.44200043409560863);
    msg.setSource(14820U);
    msg.setSourceEntity(42U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(182U);
    msg.timeout = 63187U;
    msg.lat = 0.42041792904706876;
    msg.lon = 0.24270183475712637;
    msg.z = 0.7190254720976362;
    msg.z_units = 10U;
    msg.duration = 29981U;
    msg.speed = 0.047717020076152195;
    msg.speed_units = 198U;
    msg.type = 91U;
    msg.radius = 0.43686770616539816;
    msg.length = 0.6314178804195913;
    msg.bearing = 0.8025323377941601;
    msg.direction = 181U;
    msg.custom.assign("VEWFISJOYOKNERPAINJYPDCJRJEIVQFOUMBBOBFYAGEMPWOLYXHQLCXMOGXGSNALODCZJPPFBCVOMMRHJAQSWTVXRTWYNHZPBDAYZGQMVWCZWHTGUMYBDASZSIFHGDXKIYVEKTLJCPZREGHRGJMORQNLUTMEUDLQIVCWUYDFNBKSPDBEXJVIIFIKFUQVKZUPXTRLTROGWX");

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
    msg.setTimeStamp(0.22358736212021868);
    msg.setSource(49991U);
    msg.setSourceEntity(157U);
    msg.setDestination(5106U);
    msg.setDestinationEntity(101U);
    msg.duration = 2243U;
    msg.custom.assign("RPEEQDHLFTRYJQOKUMLBIVDSJXRFORY");

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
    msg.setTimeStamp(0.9875844530225106);
    msg.setSource(24563U);
    msg.setSourceEntity(102U);
    msg.setDestination(24680U);
    msg.setDestinationEntity(6U);
    msg.duration = 22055U;
    msg.custom.assign("QKCKDCRSQHUIVAOJIGBEYCIPMUTZ");

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
    msg.setTimeStamp(0.6831480771196943);
    msg.setSource(20097U);
    msg.setSourceEntity(82U);
    msg.setDestination(54373U);
    msg.setDestinationEntity(10U);
    msg.duration = 17751U;
    msg.custom.assign("VENHQICRUVHLMVTYLCXADLDYBISWQQUDOJMRQHZONAGHQTOVKXPHMZIQXHKKJNMGJPWPSLIQYTZWUMA");

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
    msg.setTimeStamp(0.3124707626383366);
    msg.setSource(50961U);
    msg.setSourceEntity(22U);
    msg.setDestination(52469U);
    msg.setDestinationEntity(250U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.684149010959922;
    msg.control.set(tmp_msg_0);
    msg.duration = 35387U;
    msg.custom.assign("QHTJTGPHKKSUWFQPPJLWOEFDANGASIPLUJRVZKUDPEBBKTYPSTYRBCHGTZVMUXZONERXJFCXYOXYKPSUJIOWHTLZAYANGOMTXUFLDEFLKHOJIQXXVIZHUADWGDZBINSAVHWVHFBDYFVPOHAQQNDMYRELCEFODTUMMSGLQSAEXRZNMNGZZVPGMCAYODETQRUNIKMJGIVQJWBXWRJYCLCSEBUVMSNLZLIQCVCFICKBWXMSBWFRRANHYK");

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
    msg.setTimeStamp(0.11398204855726202);
    msg.setSource(56088U);
    msg.setSourceEntity(6U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(94U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5480929133760908;
    tmp_msg_0.speed_units = 222U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1153U;
    msg.custom.assign("POWEEWJPBWBFPDDYDJBKJDAXUVKICPQMZSMHNYGTISTXQHRMPDVX");

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
    msg.setTimeStamp(0.431308314517606);
    msg.setSource(235U);
    msg.setSourceEntity(46U);
    msg.setDestination(31022U);
    msg.setDestinationEntity(176U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.5575124448800717;
    tmp_msg_0.start_lon = 0.7572780568572113;
    tmp_msg_0.start_z = 0.20177938563321496;
    tmp_msg_0.start_z_units = 209U;
    tmp_msg_0.end_lat = 0.2177922606211672;
    tmp_msg_0.end_lon = 0.31661389960380815;
    tmp_msg_0.end_z = 0.28152576645867955;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.speed = 0.8637794520514784;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.lradius = 0.736833807821854;
    tmp_msg_0.flags = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9771U;
    msg.custom.assign("KLJLZLDVPTVTBRAETMLBCKPEQDYGOEVITLADUAMRAWLGDJNSFZHCVPIMMVZQYZQGAAKP");

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
    msg.setTimeStamp(0.6361329372049009);
    msg.setSource(28697U);
    msg.setSourceEntity(81U);
    msg.setDestination(19720U);
    msg.setDestinationEntity(132U);
    msg.timeout = 60791U;
    msg.lat = 0.9293207108372205;
    msg.lon = 0.2764593553007091;
    msg.z = 0.144109654946586;
    msg.z_units = 74U;
    msg.speed = 0.44308251059425596;
    msg.speed_units = 236U;
    msg.bearing = 0.9268100891710469;
    msg.cross_angle = 0.5744209575315089;
    msg.width = 0.5128133023108169;
    msg.length = 0.5807825295237561;
    msg.hstep = 0.3617793062242971;
    msg.coff = 79U;
    msg.alternation = 132U;
    msg.flags = 65U;
    msg.custom.assign("LGOMSDWEVCGFJCBDPNFXONKJKVSJBZNXBFOJDOGRCCZVUEGVXYRACTXRWUNLDLGYPIQQBWDRW");

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
    msg.setTimeStamp(0.3634527060780067);
    msg.setSource(15154U);
    msg.setSourceEntity(50U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(194U);
    msg.timeout = 25959U;
    msg.lat = 0.9209223413354571;
    msg.lon = 0.8608616159118264;
    msg.z = 0.0940677478427443;
    msg.z_units = 230U;
    msg.speed = 0.7066133554649281;
    msg.speed_units = 104U;
    msg.bearing = 0.5302478853261985;
    msg.cross_angle = 0.8824620431598676;
    msg.width = 0.7965293441719845;
    msg.length = 0.980309667647342;
    msg.hstep = 0.3154817886746022;
    msg.coff = 193U;
    msg.alternation = 86U;
    msg.flags = 206U;
    msg.custom.assign("DFUTJYNZQMQTRDUPTMKJCBYEBBQFHOBSREWXLFOUGKGPDZRVNTAMBBPHFRNTWXZBIAVZOKKKEMYPBTSPKYICNMCDFNKTGNXIMNEBRUJHIJULJYACROXVIMDTKGRAMYOHOCWZGHIXAUCVDWFWHEUUGFVEXQGDYXJMXJFYTVDSFPSQBCAHHVSSLSPWPEAOYOXGHWKATNQEQZOHULIRICVNSYLDGQVOR");

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
    msg.setTimeStamp(0.23976513055148818);
    msg.setSource(24044U);
    msg.setSourceEntity(176U);
    msg.setDestination(9389U);
    msg.setDestinationEntity(163U);
    msg.timeout = 40535U;
    msg.lat = 0.0782442472128263;
    msg.lon = 0.5076569219644474;
    msg.z = 0.9546630198617249;
    msg.z_units = 92U;
    msg.speed = 0.7608066765067492;
    msg.speed_units = 77U;
    msg.bearing = 0.39946908061393316;
    msg.cross_angle = 0.8864845296437024;
    msg.width = 0.0592148528688502;
    msg.length = 0.20162162067983813;
    msg.hstep = 0.5611193251720465;
    msg.coff = 208U;
    msg.alternation = 230U;
    msg.flags = 144U;
    msg.custom.assign("NFHZUTBGTXJQFJWYQXEXRBPJSPBVFLZJCLFATQKIQKCBIORMOWCYWAKDUHFFELDRKGSPLELQKWDZPOIDXGGNZOSDHQPKXVCNXYUFNBNWMUVPPUBVIVGQSJLCCMTYYEHHBUMAZULMVKBOSWKAFBAOJCELIRIJHTGNDEJYIQEFZPSVRPTDDRWIWJYWCQZTZBSCT");

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
    msg.setTimeStamp(0.39261364893426076);
    msg.setSource(43206U);
    msg.setSourceEntity(5U);
    msg.setDestination(48085U);
    msg.setDestinationEntity(153U);
    msg.timeout = 50746U;
    msg.lat = 0.3189135776865578;
    msg.lon = 0.5447200223635295;
    msg.z = 0.7496604901674373;
    msg.z_units = 80U;
    msg.speed = 0.9422142515988305;
    msg.speed_units = 102U;
    msg.custom.assign("GMIEUWODXSZCYPOTEJREOFXEKTFJLSCNRFIKDCBXHUNSNVTPNVQRMNAMXWXWAOERLVZIICDJAKPTQYUVIW");

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
    msg.setTimeStamp(0.667227744887826);
    msg.setSource(57866U);
    msg.setSourceEntity(155U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(206U);
    msg.timeout = 64055U;
    msg.lat = 0.7272219471523187;
    msg.lon = 0.5311523449053759;
    msg.z = 0.5921374749952403;
    msg.z_units = 160U;
    msg.speed = 0.964635163363203;
    msg.speed_units = 21U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.309641369562194;
    tmp_msg_0.y = 0.8802519940375442;
    tmp_msg_0.z = 0.014937972001872524;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XDEYBNEEECHUBZPNYUYIORHTQRZXQSAIZOCRBWMIRMOONQNSTJMCGGNHNXYVZCHJNHWMRICXCCSXRPHXZAYMESWVWQTHOWJVDBDUKQVYKAGWFEKZUQMDJNJJVUGNLEPHPPHFOTMBVQAWAMXATXDRADYWLSDDMGXTSYLPKIBQQRVFBYTCCUGPDFPBOYSGVVKMKGZTELWORJUILKEAFUHUKLTJOLKPXSZAAPK");

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
    msg.setTimeStamp(0.028464085872746847);
    msg.setSource(31171U);
    msg.setSourceEntity(132U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(247U);
    msg.timeout = 59122U;
    msg.lat = 0.6986290677569658;
    msg.lon = 0.5491265503900805;
    msg.z = 0.0039386814480351084;
    msg.z_units = 172U;
    msg.speed = 0.3890469733329779;
    msg.speed_units = 233U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8358044212396462;
    tmp_msg_0.y = 0.3532662218231988;
    tmp_msg_0.z = 0.43649962542838927;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IACJROPOZJGUMZV");

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
    msg.setTimeStamp(0.6310148579332419);
    msg.setSource(52432U);
    msg.setSourceEntity(26U);
    msg.setDestination(2550U);
    msg.setDestinationEntity(122U);
    msg.x = 0.45771974328688636;
    msg.y = 0.28439034847647715;
    msg.z = 0.5188676103412121;

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
    msg.setTimeStamp(0.23414296554166902);
    msg.setSource(41424U);
    msg.setSourceEntity(180U);
    msg.setDestination(64635U);
    msg.setDestinationEntity(253U);
    msg.x = 0.8501624902927566;
    msg.y = 0.34933700651887933;
    msg.z = 0.8817496058829138;

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
    msg.setTimeStamp(0.28302227355181664);
    msg.setSource(24835U);
    msg.setSourceEntity(213U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(116U);
    msg.x = 0.48046539077079853;
    msg.y = 0.9864308626419431;
    msg.z = 0.6451627568737935;

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
    msg.setTimeStamp(0.23571735463425159);
    msg.setSource(9140U);
    msg.setSourceEntity(34U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(91U);
    msg.timeout = 27315U;
    msg.lat = 0.04399490443670295;
    msg.lon = 0.864343017006437;
    msg.z = 0.9394732793911121;
    msg.z_units = 7U;
    msg.amplitude = 0.4454186034140929;
    msg.pitch = 0.6694910951709667;
    msg.speed = 0.04901471832061466;
    msg.speed_units = 206U;
    msg.custom.assign("FEZLKMRUPMMXLEKCXOHTBKRHQBIPKZIHEPUJYWILQOFKSGGBNZQNAGLEQAYCYQTRDFEVYBDOWTOOGWXWKVVNJPSYIUASYJJYHEROJXVFADOWIYUIYTXGWAVAFZSFNDUZQSMCUSVRCGACPCLNTYNZNZKXRIPDGRMXLIFCVCMWRA");

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
    msg.setTimeStamp(0.12301491539730747);
    msg.setSource(15507U);
    msg.setSourceEntity(41U);
    msg.setDestination(42905U);
    msg.setDestinationEntity(106U);
    msg.timeout = 62958U;
    msg.lat = 0.25774733812285966;
    msg.lon = 0.7962189248915732;
    msg.z = 0.6894310402372082;
    msg.z_units = 144U;
    msg.amplitude = 0.22622332550473634;
    msg.pitch = 0.6089441928349499;
    msg.speed = 0.4063482031464839;
    msg.speed_units = 87U;
    msg.custom.assign("IYWHVAEMHVHSHQRYJPXBESSPQCVZKYBGIPXLRIQTNATKDDEMPMTOADOOGCUYNQFZBHZFUKXCMJHUEJBYFOFWCXUCPDZQLWOYFYNLTNAJPGIVHMGRUOTOOKIKEZEJWJGUAWZLAVQNSYEBKGLNTPPEJNQGAVJCNPRFETGXLXCBLZSFBKFKDXNVXZETWRTDWRWUUDVMYBPMWXRCJBKBQGILSVCDAARMLIDNDRQWLSSAFMQTZGZF");

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
    msg.setTimeStamp(0.7161969199152461);
    msg.setSource(13058U);
    msg.setSourceEntity(166U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(45U);
    msg.timeout = 25431U;
    msg.lat = 0.702170593694116;
    msg.lon = 0.6444817820697658;
    msg.z = 0.734959689903433;
    msg.z_units = 132U;
    msg.amplitude = 0.4379526410886927;
    msg.pitch = 0.8894960229443415;
    msg.speed = 0.944406604396952;
    msg.speed_units = 55U;
    msg.custom.assign("QMYBKFNIRTCDHUWPYJVIAVCOHXAGTTQPSMAYDSWODUJVGKGQTJYHUCPBPFXCJYHRENNOZDHRPJLBPOEMVESWNBKPJBWHUBAZOMHKDAEUZFMTL");

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
    msg.setTimeStamp(0.7431465900479838);
    msg.setSource(36918U);
    msg.setSourceEntity(166U);
    msg.setDestination(33823U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7695243720433865);
    msg.setSource(61027U);
    msg.setSourceEntity(161U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.2659559152782963);
    msg.setSource(34789U);
    msg.setSourceEntity(191U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.5930221677717068);
    msg.setSource(62984U);
    msg.setSourceEntity(78U);
    msg.setDestination(21090U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.17535429081196519;
    msg.lon = 0.3858101035429258;
    msg.z = 0.4242886723559688;
    msg.z_units = 3U;
    msg.radius = 0.066664614369919;
    msg.duration = 12416U;
    msg.speed = 0.29724029089891946;
    msg.speed_units = 171U;
    msg.custom.assign("FQKUVVXLUHZFAEGVDWVXPSDNOWAOWLDGYKZDHBNCHBFGNPATSNAIKCGZIMFPQCAXMOURDKOWPKFWYWEVPWUPIISGVQJETORVMJWJTAAONETOLNZISMJYFITMMJTNZCBFUTSXYLHQGXRDZRIBTDOMJRDLNKFZBXRFGUCEQRSTHBLIZQQHPPYNPIYXBXO");

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
    msg.setTimeStamp(0.6483179667962286);
    msg.setSource(19158U);
    msg.setSourceEntity(50U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.9520795830242264;
    msg.lon = 0.07608997806712392;
    msg.z = 0.07409672364503728;
    msg.z_units = 90U;
    msg.radius = 0.7755735211497331;
    msg.duration = 3540U;
    msg.speed = 0.27093893504314603;
    msg.speed_units = 174U;
    msg.custom.assign("VDGAEXUCUFAROAWJHGOIXMWQPXPYBKFRBYNOAQLGRZGHSIUECPBMSNXKMIIRMBRQNWPHUMLOCBAPQBDBLTOEOMTTPTPCSUDNLEGVKXLYRXLWGZVAHZHTWNDFZDSSJEJHJSWHDVQLXYVCSDLYRLFFBVUYTGSCEOTKJZTZVETHYZINOHWPINCEJNKRZVNZKVKXIGQLGOXIOXWYIPKDYBDCKHWMYRQVZDEGAAAUMQEBJIUTCQCUQMPWNSFFRUK");

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
    msg.setTimeStamp(0.7432468321254494);
    msg.setSource(27040U);
    msg.setSourceEntity(209U);
    msg.setDestination(7719U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.9491557102257699;
    msg.lon = 0.49820307135905484;
    msg.z = 0.7767699478456097;
    msg.z_units = 35U;
    msg.radius = 0.08949107299243009;
    msg.duration = 49671U;
    msg.speed = 0.38762271401900994;
    msg.speed_units = 168U;
    msg.custom.assign("NRVBPINJWPLDWFJUNSAXZOYIRISITDQGWYKAOFUUSFDNORWRBRCQSSMMXPVSLVZCFVWMXDKNBZELVKJIQCGKPCP");

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
    msg.setTimeStamp(0.6574272433827292);
    msg.setSource(62093U);
    msg.setSourceEntity(13U);
    msg.setDestination(26653U);
    msg.setDestinationEntity(28U);
    msg.timeout = 52450U;
    msg.flags = 198U;
    msg.lat = 0.8153707133148905;
    msg.lon = 0.4603736215160982;
    msg.start_z = 0.8797903846081738;
    msg.start_z_units = 184U;
    msg.end_z = 0.08169854277185062;
    msg.end_z_units = 189U;
    msg.radius = 0.7111201266788991;
    msg.speed = 0.327421835307771;
    msg.speed_units = 196U;
    msg.custom.assign("NNQEGYSHEOBKXSIWVXXILPSUJIBVHZQCTNLZIKDTYRETPZEKSLVXOIPQLOJPKMAGMZDOHTBTSJLIVXGOPHWNJJENMBCUGGCFEGVMDADANWWMYUDMZIXJZTTAJFBNCKATHPAQYNURBFVZRFSZD");

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
    msg.setTimeStamp(0.18969065653439532);
    msg.setSource(28941U);
    msg.setSourceEntity(100U);
    msg.setDestination(54823U);
    msg.setDestinationEntity(240U);
    msg.timeout = 36313U;
    msg.flags = 107U;
    msg.lat = 0.4230686569717903;
    msg.lon = 0.38095207807777265;
    msg.start_z = 0.29189031425821343;
    msg.start_z_units = 229U;
    msg.end_z = 0.9819657275473195;
    msg.end_z_units = 173U;
    msg.radius = 0.3530591842710359;
    msg.speed = 0.339240633681791;
    msg.speed_units = 18U;
    msg.custom.assign("ROHQLAPMRRCGJYLMABZJICMHNIQXESYKETEXGUORSSYOEMPZVPOALCDFXQ");

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
    msg.setTimeStamp(0.3892313903488144);
    msg.setSource(13259U);
    msg.setSourceEntity(222U);
    msg.setDestination(44721U);
    msg.setDestinationEntity(156U);
    msg.timeout = 12519U;
    msg.flags = 124U;
    msg.lat = 0.25801758198345204;
    msg.lon = 0.8246928317879458;
    msg.start_z = 0.8261288694675405;
    msg.start_z_units = 212U;
    msg.end_z = 0.7442754996552926;
    msg.end_z_units = 166U;
    msg.radius = 0.9023334763136904;
    msg.speed = 0.2851339569796374;
    msg.speed_units = 24U;
    msg.custom.assign("VZZCRAWJBOZYQFMVXTQYNIKEBHOTVNJDUYKQUMETTPIEGTWBINSMPLPGHZWFXFPKOEUSOGJASQCFSWWMSATDKZDUZLNBEKEPEHSOADXUQDOYVFWHLSOAIUNMFXRNKKLDVOXBIKXRPLCKCNRRGEPVHDJRRHXQDEATFMRQMGLZMVBLQLKGLCWGUQSUHJQYRFYCJAOJYTINPHCBBASTCUAZTDWMFZPYEXBJ");

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
    msg.setTimeStamp(0.047350374330911604);
    msg.setSource(7650U);
    msg.setSourceEntity(39U);
    msg.setDestination(33701U);
    msg.setDestinationEntity(176U);
    msg.timeout = 32734U;
    msg.lat = 0.4190171459800488;
    msg.lon = 0.8499125472868356;
    msg.z = 0.7660704369066578;
    msg.z_units = 47U;
    msg.speed = 0.9527563572657284;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21989517439401773;
    tmp_msg_0.y = 0.5538035944094559;
    tmp_msg_0.z = 0.0504261015936599;
    tmp_msg_0.t = 0.044142176068826644;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VMOMSWYGMREPGNZMYHNDLKHPTOCREXHKUYIERWQYNFRBEJZIIZVNVPEXFTOBCMGUNOGULFTQSWBKTYMZLUJDSVWXXPKCBSKASHUEMVWLFPRFNILQCXHTAAWZOIGCLXWDAYJOWEMKGBTFYSDMBDHPISNQNJECVLAQOKBOVFSSLFGWIQUTVIJJAUDHYAYRENDROUQVQUPWPJCTRMDFCILYCHADNPQEADRQGBOJZBLGZP");

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
    msg.setTimeStamp(0.1480894565490145);
    msg.setSource(36501U);
    msg.setSourceEntity(85U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(53U);
    msg.timeout = 32083U;
    msg.lat = 0.9388672230826949;
    msg.lon = 0.38580501615924934;
    msg.z = 0.4558731027074836;
    msg.z_units = 46U;
    msg.speed = 0.0024509766919802445;
    msg.speed_units = 147U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8152695909381744;
    tmp_msg_0.y = 0.7314541322713285;
    tmp_msg_0.z = 0.6870552154846592;
    tmp_msg_0.t = 0.7381863687982417;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EJONVGUITZZVGBUGGJQORDNOYHLQIXGXVUKABDMRVKALFHBLUTGWHLKXAVRZPTPSWSRQJCCQVLMNENXVRFPWWPHQUZUKYI");

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
    msg.setTimeStamp(0.7093294925889488);
    msg.setSource(50872U);
    msg.setSourceEntity(253U);
    msg.setDestination(45715U);
    msg.setDestinationEntity(172U);
    msg.timeout = 3862U;
    msg.lat = 0.5856316892762843;
    msg.lon = 0.4410955682124813;
    msg.z = 0.8612550743715227;
    msg.z_units = 24U;
    msg.speed = 0.3289884147711497;
    msg.speed_units = 18U;
    msg.custom.assign("ZQXUSINVPPYTEBRHBXZSFNONVFRSCGKPHHVDCNCYOIPINUOQDWTXJKFZTAJBUJYFQIIABXARCZQPYVQNHMYYMLAAJGMORGHPETYUBDJBPWHTMHGLGDRIIEJEXGQFWJKSRUWZOKLLEKNUPLWWVPSNLLQGHLXMJBEAJWZEVVZDDXTARXXSOHEUQWZIYBCKUMDZICEHTAROAKSYWAMSCXUFORQVNBZGRPTCJFKKMSDNTMSDFVTDOCUO");

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
    msg.setTimeStamp(0.3127160325245333);
    msg.setSource(7289U);
    msg.setSourceEntity(121U);
    msg.setDestination(15331U);
    msg.setDestinationEntity(215U);
    msg.x = 0.7130466199105537;
    msg.y = 0.494523963135156;
    msg.z = 0.26142275585202435;
    msg.t = 0.8088129635480046;

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
    msg.setTimeStamp(0.9594878632864912);
    msg.setSource(43465U);
    msg.setSourceEntity(104U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(184U);
    msg.x = 0.7201377402196953;
    msg.y = 0.7550982631880022;
    msg.z = 0.2938493768307152;
    msg.t = 0.08101105465183944;

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
    msg.setTimeStamp(0.660218954538716);
    msg.setSource(38352U);
    msg.setSourceEntity(88U);
    msg.setDestination(49042U);
    msg.setDestinationEntity(122U);
    msg.x = 0.27526370647806975;
    msg.y = 0.3339655327842401;
    msg.z = 0.6373863487365785;
    msg.t = 0.9662677209101315;

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
    msg.setTimeStamp(0.9631188262887118);
    msg.setSource(7555U);
    msg.setSourceEntity(239U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(183U);
    msg.timeout = 35521U;
    msg.name.assign("NPRCGENVNNIHBBUFQVGZILFXHPOYBRGUXGATJYHTJZGNTIVXGTXMQINYLEWIEUMTFBDJRFXIISRAXUDUOCDEZCVWILWYWSOEWLDSBQKRRQLKRGJDWHBJWEPPJXYONMYFTSCDSHFVBCZZGJCKLZOCBMKVWKDITZWAJLQRHDHOAMIOAEGLAUVPMFZJLPMCFSBLKEJTUSCGVQHF");
    msg.custom.assign("QFCNCZRTASLFAWSMPPJOUMCYMOIBQGGLBFSLUGOGKWTJYLPWITODMKPZSKCHRTNLNH");

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
    msg.setTimeStamp(0.08011505394625884);
    msg.setSource(28836U);
    msg.setSourceEntity(85U);
    msg.setDestination(3920U);
    msg.setDestinationEntity(85U);
    msg.timeout = 59100U;
    msg.name.assign("VWETCPWLOSOILIBHMHEGKWCEKKSOQRPAPLZNDGXJLBCXJGQYMZLJNOGDJFGANXWALSNMCSEJSQJCYBWBIBBUJPXEILQPLYRFNNISUWENGLAPYUSPNARMUHKSPHEPMXRBRERCIAADGJHXPZVQAUGWFEXIZXVRYOFRCTHYYATTFVYDTUTRHTOQINQZJZUCMADDVZQHVWKCUOFSIKDNTZKMVTMWIQKDXWFGOCFHULYJUFBOVZMM");
    msg.custom.assign("HNVOBTECVSCBFMPJUESRXAVSCALWRNCKVXIJWYBQWODCYWLLZLOFMMZFHQIUDKIHIPJGYSYDQITCOPRUYYRADTNTEZBRKMRVGSEJ");

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
    msg.setTimeStamp(0.0763708582549405);
    msg.setSource(4962U);
    msg.setSourceEntity(152U);
    msg.setDestination(43996U);
    msg.setDestinationEntity(43U);
    msg.timeout = 49521U;
    msg.name.assign("XLCXAPKWTPWHHUWRQIHZSEOAHXFWZNNLUNGZUUDOXPNKCYJPKMYJSBDMFHTDBAFYGNWUIVQOZAQVPIQURRXDTJ");
    msg.custom.assign("AUAUIGGSHMPBYTSBCVHTNGRHTQKVLZXQOKEPLBKYWYVVWTAGBCHQSTELNKRXXMJWOREARPSFXTFRCADFZDKVZRGANHILPMLHGMLUOYIUTIGUFBEDXIPRDCYORHDWOYPTIFLLJQSXENKNFIZSC");

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
    msg.setTimeStamp(0.6231287559167394);
    msg.setSource(57330U);
    msg.setSourceEntity(153U);
    msg.setDestination(5699U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.15278166114327907;
    msg.lon = 0.18012419009043734;
    msg.z = 0.849470263310933;
    msg.z_units = 250U;
    msg.speed = 0.5608107592858221;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.10695998564466347;
    tmp_msg_0.y = 0.46895682125547644;
    tmp_msg_0.z = 0.0018240552320495373;
    tmp_msg_0.t = 0.5936493477256503;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29048U;
    tmp_msg_1.off_x = 0.3141491487632716;
    tmp_msg_1.off_y = 0.5741215777449916;
    tmp_msg_1.off_z = 0.15140434433092265;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.20635729124868585;
    msg.custom.assign("QYOJFSKWHSAJMBDBJOCKACIMQWBTHKIGYAKSDNJUUAXUFHBNVJFWDXLKXFDKONWBTYLRELEITNDAQVGPVUMSOAGBCYDRRVPWEFHPOMBJJNFFWBCQPLYGLXOIPULTLXCRRMTSJXIZVDZLMJBJGSADAUDHQMFUSUXTZKVZPZGVFGCWEWREVD");

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
    msg.setTimeStamp(0.09132328871215745);
    msg.setSource(56155U);
    msg.setSourceEntity(243U);
    msg.setDestination(35109U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.18799060195367434;
    msg.lon = 0.4562015570458293;
    msg.z = 0.9802169700451052;
    msg.z_units = 80U;
    msg.speed = 0.2757490349485908;
    msg.speed_units = 149U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29696U;
    tmp_msg_0.off_x = 0.34237779250563993;
    tmp_msg_0.off_y = 0.17456988606964186;
    tmp_msg_0.off_z = 0.7795051242312397;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.12468544194065123;
    msg.custom.assign("QIVSZJSBBUBNFAMMUEWZPTGXDHWMSXDZEQVUDWRYDVHNFAVJUEHVHZKUNJJEHSQVBLLMO");

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
    msg.setTimeStamp(0.9412168923611197);
    msg.setSource(38698U);
    msg.setSourceEntity(124U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.21897850039017241;
    msg.lon = 0.5253156199922226;
    msg.z = 0.8131437015027014;
    msg.z_units = 48U;
    msg.speed = 0.11520918031426874;
    msg.speed_units = 65U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42376U;
    tmp_msg_0.off_x = 0.6654311943680471;
    tmp_msg_0.off_y = 0.37517197709109684;
    tmp_msg_0.off_z = 0.10919541041379599;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.018955040231767084;
    msg.custom.assign("BLHMPTMDSFSZYLTDXHRNYKGCOJOGPUGXNGOVLEYGRTZVCBNJJNXFEJBRYXXKYIAJZCKMGZALZKSEULVLFALHTABMZMNRXIJYWCBUSQXUWVWQPOEIRKVSQMCUVHGAKCHYHZBUCTKURHDXSNMWOTMGPFDBEZNTVMTWNTWIPUAHVNFG");

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
    msg.setTimeStamp(0.5005679616906126);
    msg.setSource(28324U);
    msg.setSourceEntity(152U);
    msg.setDestination(64744U);
    msg.setDestinationEntity(75U);
    msg.vid = 1163U;
    msg.off_x = 0.8719881579436062;
    msg.off_y = 0.29209470377337776;
    msg.off_z = 0.3045317219367051;

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
    msg.setTimeStamp(0.6859098493660427);
    msg.setSource(16402U);
    msg.setSourceEntity(54U);
    msg.setDestination(14773U);
    msg.setDestinationEntity(122U);
    msg.vid = 9568U;
    msg.off_x = 0.7998046014710497;
    msg.off_y = 0.11779602753332263;
    msg.off_z = 0.673108770513995;

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
    msg.setTimeStamp(0.5029575919670207);
    msg.setSource(6517U);
    msg.setSourceEntity(202U);
    msg.setDestination(1248U);
    msg.setDestinationEntity(177U);
    msg.vid = 59261U;
    msg.off_x = 0.5934561526634977;
    msg.off_y = 0.24938361598432623;
    msg.off_z = 0.955865111702392;

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
    msg.setTimeStamp(0.4839570245958824);
    msg.setSource(63340U);
    msg.setSourceEntity(95U);
    msg.setDestination(41432U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.11466753498178861);
    msg.setSource(18871U);
    msg.setSourceEntity(119U);
    msg.setDestination(52427U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.3777003578746777);
    msg.setSource(38719U);
    msg.setSourceEntity(246U);
    msg.setDestination(6253U);
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
    msg.setTimeStamp(0.21187785091709999);
    msg.setSource(54830U);
    msg.setSourceEntity(118U);
    msg.setDestination(22755U);
    msg.setDestinationEntity(21U);
    msg.mid = 57383U;

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
    msg.setTimeStamp(0.9998145138518608);
    msg.setSource(36406U);
    msg.setSourceEntity(69U);
    msg.setDestination(41271U);
    msg.setDestinationEntity(123U);
    msg.mid = 37976U;

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
    msg.setTimeStamp(0.049184793873703114);
    msg.setSource(43658U);
    msg.setSourceEntity(206U);
    msg.setDestination(45859U);
    msg.setDestinationEntity(246U);
    msg.mid = 40484U;

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
    msg.setTimeStamp(0.6613429370992132);
    msg.setSource(37750U);
    msg.setSourceEntity(8U);
    msg.setDestination(34111U);
    msg.setDestinationEntity(217U);
    msg.state = 246U;
    msg.eta = 46730U;
    msg.info.assign("JYBNANJXJYZHQNNUCJDENXRXVGSEQFSBLRGVRWTETZXYCRKNCAGJUICAYVQLXPRIZPJBSTGYP");

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
    msg.setTimeStamp(0.7287384343609014);
    msg.setSource(13739U);
    msg.setSourceEntity(86U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(55U);
    msg.state = 109U;
    msg.eta = 6719U;
    msg.info.assign("QUZHUEISUMCOCZCYSEEOLEQU");

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
    msg.setTimeStamp(0.5744625618857682);
    msg.setSource(51413U);
    msg.setSourceEntity(147U);
    msg.setDestination(19267U);
    msg.setDestinationEntity(207U);
    msg.state = 223U;
    msg.eta = 29902U;
    msg.info.assign("FCJBLTVVOOVUPTEOIWZILN");

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
    msg.setTimeStamp(0.385997895146838);
    msg.setSource(25395U);
    msg.setSourceEntity(182U);
    msg.setDestination(40153U);
    msg.setDestinationEntity(77U);
    msg.system = 8718U;
    msg.duration = 41238U;
    msg.speed = 0.9327268502142241;
    msg.speed_units = 110U;
    msg.x = 0.8081321508370144;
    msg.y = 0.21695557211773797;
    msg.z = 0.3758444346801959;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.5842845500893062);
    msg.setSource(38621U);
    msg.setSourceEntity(136U);
    msg.setDestination(19769U);
    msg.setDestinationEntity(224U);
    msg.system = 21188U;
    msg.duration = 3950U;
    msg.speed = 0.10044431482756233;
    msg.speed_units = 142U;
    msg.x = 0.2420802650951176;
    msg.y = 0.5682435233888934;
    msg.z = 0.4266340621680629;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.2925408151111505);
    msg.setSource(6447U);
    msg.setSourceEntity(93U);
    msg.setDestination(765U);
    msg.setDestinationEntity(14U);
    msg.system = 35089U;
    msg.duration = 26039U;
    msg.speed = 0.439469974730881;
    msg.speed_units = 179U;
    msg.x = 0.31924838136034084;
    msg.y = 0.7433400340373244;
    msg.z = 0.6660912333191997;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.24511275142163846);
    msg.setSource(27863U);
    msg.setSourceEntity(118U);
    msg.setDestination(27586U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.7551121310341637;
    msg.lon = 0.6978157068709779;
    msg.speed = 0.44199299553027915;
    msg.speed_units = 96U;
    msg.duration = 43654U;
    msg.sys_a = 4666U;
    msg.sys_b = 56462U;
    msg.move_threshold = 0.07797760060789538;

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
    msg.setTimeStamp(0.11135661380910544);
    msg.setSource(27060U);
    msg.setSourceEntity(89U);
    msg.setDestination(16515U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.058047461209897344;
    msg.lon = 0.8986991393114145;
    msg.speed = 0.9419052620477014;
    msg.speed_units = 140U;
    msg.duration = 14556U;
    msg.sys_a = 60053U;
    msg.sys_b = 28967U;
    msg.move_threshold = 0.6468707938426353;

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
    msg.setTimeStamp(0.4412074940795655);
    msg.setSource(42707U);
    msg.setSourceEntity(48U);
    msg.setDestination(58246U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.05458940120242395;
    msg.lon = 0.6529718388791658;
    msg.speed = 0.40577563440019504;
    msg.speed_units = 249U;
    msg.duration = 4826U;
    msg.sys_a = 8003U;
    msg.sys_b = 60852U;
    msg.move_threshold = 0.8348331195899366;

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
    msg.setTimeStamp(0.6552320598089598);
    msg.setSource(22963U);
    msg.setSourceEntity(114U);
    msg.setDestination(44757U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.4974723590802662;
    msg.lon = 0.8553964963864069;
    msg.z = 0.7437876578167111;
    msg.z_units = 236U;
    msg.speed = 0.2166595625702149;
    msg.speed_units = 124U;
    msg.custom.assign("RZBMFYQSKQVCAYTDEVXKNDPLNECHJTBJTRCVQPSEEKDEJMKWPCZBLXCFMTMHNINXSEHPTCTZYOTBQMWGRQVOEXDSFXTJOKUGAZGGSKMUURZUZANQIR");

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
    msg.setTimeStamp(0.6275177468923849);
    msg.setSource(45622U);
    msg.setSourceEntity(114U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.4409682882052063;
    msg.lon = 0.686366553506092;
    msg.z = 0.7078189528768072;
    msg.z_units = 198U;
    msg.speed = 0.988020158950391;
    msg.speed_units = 196U;
    msg.custom.assign("EKOXTSIWFLKNAZVQWCJKZJALOYGHWCXMHDVDBZZRGFVSSKNUOLDQKHIXFYPEHDPIKKZRJECFTRSCYDDUGEIGMMIPUSZNMVUSAXEPWSJOQLIBTFRMNOQGKTVDANNAHZRBQTGPPZIGRMMVRAMQEUJNNHHYTSKIAVJWZWEOTSBRLDWBFLFYWTNPLOCRJREQCBOQDCBYQHQXHDKUZCXPHXUCGLAULNVYCEVMMOPFJYJFUTBXFYAXG");

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
    msg.setTimeStamp(0.5013992714774577);
    msg.setSource(63152U);
    msg.setSourceEntity(185U);
    msg.setDestination(41774U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.1849786454819159;
    msg.lon = 0.36058472201788405;
    msg.z = 0.0036950634394516957;
    msg.z_units = 32U;
    msg.speed = 0.6375200356297759;
    msg.speed_units = 138U;
    msg.custom.assign("IUGKJFDDNNQMUYWUDGZGHVHFRRKBULHJJHSGLNPKETRCAEDUUILJIZYLBXJGLHECOTBFEFGXLHLWEPCWDQNKPTKA");

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
    msg.setTimeStamp(0.1571377250739322);
    msg.setSource(51381U);
    msg.setSourceEntity(233U);
    msg.setDestination(28508U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.9988501396934882;
    msg.lon = 0.10137687603229173;

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
    msg.setTimeStamp(0.8891125961515505);
    msg.setSource(39491U);
    msg.setSourceEntity(84U);
    msg.setDestination(51607U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.5153333386351592;
    msg.lon = 0.7828856554247293;

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
    msg.setTimeStamp(0.41209207713983664);
    msg.setSource(8047U);
    msg.setSourceEntity(80U);
    msg.setDestination(825U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.008296642338544435;
    msg.lon = 0.9806703485075482;

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
    msg.setTimeStamp(0.6846669522677251);
    msg.setSource(27804U);
    msg.setSourceEntity(134U);
    msg.setDestination(3910U);
    msg.setDestinationEntity(29U);
    msg.timeout = 58427U;
    msg.lat = 0.4351762049907588;
    msg.lon = 0.5130375312989385;
    msg.z = 0.6208921876891642;
    msg.z_units = 153U;
    msg.pitch = 0.841968839948056;
    msg.amplitude = 0.8997081828589033;
    msg.duration = 46290U;
    msg.speed = 0.9049358523545581;
    msg.speed_units = 167U;
    msg.radius = 0.12035484309049405;
    msg.direction = 109U;
    msg.custom.assign("KLQVZYOUEUZZPTQDLOYXXHMHKQJYOAKJDGJNBNUTOIGFXUCJTDPDDMGPNQFTIRAFASGHXNGMJIVTHFFKBCTXSILAMQQGDBAJSUTYYBPYVAYZHSYKFGKEHEZQRTIVJVWOSSBJCPCDAUPCRQICVERUXLWDVRCHJRDUZNZLXYHLRZEFNZKEMRSEMPNKWGJLBKDPNNFXAWVAGIBIHLRMSHGUTMQCOXRWQSPWOOWFWXVIAFYBIWNSEOCZOMVBETWC");

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
    msg.setTimeStamp(0.3160566924601037);
    msg.setSource(27953U);
    msg.setSourceEntity(120U);
    msg.setDestination(35105U);
    msg.setDestinationEntity(117U);
    msg.timeout = 24123U;
    msg.lat = 0.5339865965500205;
    msg.lon = 0.4273808315688026;
    msg.z = 0.7356221904882406;
    msg.z_units = 74U;
    msg.pitch = 0.4278755467014538;
    msg.amplitude = 0.17004344498532664;
    msg.duration = 49715U;
    msg.speed = 0.1938027201197976;
    msg.speed_units = 225U;
    msg.radius = 0.632477361726622;
    msg.direction = 128U;
    msg.custom.assign("JWRMQQNDICVSSSLDECF");

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
    msg.setTimeStamp(0.48400121080117775);
    msg.setSource(27988U);
    msg.setSourceEntity(135U);
    msg.setDestination(22423U);
    msg.setDestinationEntity(134U);
    msg.timeout = 31376U;
    msg.lat = 0.6231594439156573;
    msg.lon = 0.47291018193285705;
    msg.z = 0.6607667183894449;
    msg.z_units = 190U;
    msg.pitch = 0.13627463931859374;
    msg.amplitude = 0.38997645051267826;
    msg.duration = 16063U;
    msg.speed = 0.968397185175138;
    msg.speed_units = 150U;
    msg.radius = 0.7141558061904378;
    msg.direction = 187U;
    msg.custom.assign("PTXQDHKGUJJUOLWTBLIBIJPVFNDTNYUVGBFYSRHUXZWHCUXJAEDAOGXCVNMYDNCROAYXZTIBHKGSRLFIFVKLHNMSDJGGOCBDEYBCWVONYCNXTMVLSSHFQBPMHMWMQZPTMZKIEWQTQOBNTNIENJKYEKMEWFVZYXWFWPIACQILTKJOPDZMOALHJJK");

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
    msg.setTimeStamp(0.4438037364396603);
    msg.setSource(32380U);
    msg.setSourceEntity(6U);
    msg.setDestination(2430U);
    msg.setDestinationEntity(2U);
    msg.control_src = 40117U;
    msg.control_ent = 20U;
    msg.timeout = 0.8862048454245315;
    msg.loiter_radius = 0.8225861443077145;
    msg.altitude_interval = 0.366998886328904;

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
    msg.setTimeStamp(0.2026517271961843);
    msg.setSource(63517U);
    msg.setSourceEntity(74U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(97U);
    msg.control_src = 28675U;
    msg.control_ent = 111U;
    msg.timeout = 0.014680740548075333;
    msg.loiter_radius = 0.9204767666197329;
    msg.altitude_interval = 0.6742566311048006;

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
    msg.setTimeStamp(0.5387965197683384);
    msg.setSource(7743U);
    msg.setSourceEntity(117U);
    msg.setDestination(58413U);
    msg.setDestinationEntity(195U);
    msg.control_src = 50138U;
    msg.control_ent = 203U;
    msg.timeout = 0.8838395105286038;
    msg.loiter_radius = 0.9796426664717781;
    msg.altitude_interval = 0.7890113997280641;

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
    msg.setTimeStamp(0.7672168282313976);
    msg.setSource(25430U);
    msg.setSourceEntity(78U);
    msg.setDestination(44485U);
    msg.setDestinationEntity(210U);
    msg.flags = 227U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6149392291207089;
    tmp_msg_0.speed_units = 25U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7147074559796476;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2954955963624679;
    msg.lon = 0.42726248362346453;
    msg.radius = 0.6494587610262799;

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
    msg.setTimeStamp(0.4152797927325613);
    msg.setSource(35654U);
    msg.setSourceEntity(214U);
    msg.setDestination(40809U);
    msg.setDestinationEntity(104U);
    msg.flags = 119U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.05375613770099641;
    tmp_msg_0.speed_units = 181U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7709330553126847;
    tmp_msg_1.z_units = 208U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20732671007171377;
    msg.lon = 0.7062126003227511;
    msg.radius = 0.36843244917108453;

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
    msg.setTimeStamp(0.14092506160505802);
    msg.setSource(15441U);
    msg.setSourceEntity(129U);
    msg.setDestination(41706U);
    msg.setDestinationEntity(83U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09584018205403044;
    tmp_msg_0.speed_units = 76U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4286134079795698;
    tmp_msg_1.z_units = 32U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43262933324211994;
    msg.lon = 0.32587611139988193;
    msg.radius = 0.7239501840576961;

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
    msg.setTimeStamp(0.04681660151834044);
    msg.setSource(15942U);
    msg.setSourceEntity(242U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(204U);
    msg.control_src = 9600U;
    msg.control_ent = 201U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 220U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7412202537558524;
    tmp_tmp_msg_0_0.speed_units = 131U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12875379834172873;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.443520411314291;
    tmp_msg_0.lon = 0.4923952904041565;
    tmp_msg_0.radius = 0.11115730560678616;
    msg.reference.set(tmp_msg_0);
    msg.state = 187U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.969135582435278);
    msg.setSource(64610U);
    msg.setSourceEntity(164U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(112U);
    msg.control_src = 50787U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 125U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7157314112654666;
    tmp_tmp_msg_0_0.speed_units = 192U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09664773004850924;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08648354366400579;
    tmp_msg_0.lon = 0.04650175439087889;
    tmp_msg_0.radius = 0.6983818158847717;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.08639622464412278);
    msg.setSource(42300U);
    msg.setSourceEntity(41U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(95U);
    msg.control_src = 42976U;
    msg.control_ent = 1U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.00881357220322554;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9668090891422146;
    tmp_tmp_msg_0_1.z_units = 1U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8770952161706629;
    tmp_msg_0.lon = 0.34420654604318457;
    tmp_msg_0.radius = 0.5798460666310918;
    msg.reference.set(tmp_msg_0);
    msg.state = 117U;
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
    msg.setTimeStamp(0.813676017833508);
    msg.setSource(17798U);
    msg.setSourceEntity(31U);
    msg.setDestination(37458U);
    msg.setDestinationEntity(74U);
    msg.op_mode = 246U;
    msg.error_count = 86U;
    msg.error_ents.assign("DIJNYBRTWOR");
    msg.maneuver_type = 17258U;
    msg.maneuver_stime = 0.03581879936260024;
    msg.maneuver_eta = 4778U;
    msg.control_loops = 1383403851U;
    msg.flags = 162U;
    msg.last_error.assign("JZMBVVNCLXZQKJITJDNBMOJRKYGGKPALNEAFEWCSOFVKDVINJBJFSONUDLANIQGLIYFZRUEMHVJXWHR");
    msg.last_error_time = 0.889406178856504;

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
    msg.setTimeStamp(0.7791858318131579);
    msg.setSource(56539U);
    msg.setSourceEntity(191U);
    msg.setDestination(24166U);
    msg.setDestinationEntity(245U);
    msg.op_mode = 0U;
    msg.error_count = 187U;
    msg.error_ents.assign("RBWZOETBMUQRHJVSNIUFNMUKLVQPQQBBYZLGTHDOQVVHPEVPMELGQJUYFILTRI");
    msg.maneuver_type = 28367U;
    msg.maneuver_stime = 0.07006664075238589;
    msg.maneuver_eta = 63952U;
    msg.control_loops = 813711079U;
    msg.flags = 118U;
    msg.last_error.assign("TPIANHNHXISPWGUDGRXYADZNVUTOVWUQQBTCXRRWPFBZHBTFYKMWGMBRSOIIAJQSRTCVZWLVJYDKUKQDUIFAQTJERNDDXJGLOAYPPBZYKUABZHCOSCSZHKMSCQTOHSJQQFENCTPGXAIKYYZPWVRHMJYFOLBYOVJNIJUNBHBLOZDEXNWJGMPLUMSILACECPNCNTWGUIHFXOFBXWZFHEEXOGLUGKMQDQRD");
    msg.last_error_time = 0.3525562141169317;

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
    msg.setTimeStamp(0.9399776030993119);
    msg.setSource(58426U);
    msg.setSourceEntity(58U);
    msg.setDestination(53743U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 131U;
    msg.error_count = 254U;
    msg.error_ents.assign("JDXMLUEBERNPJDVMVKIESQABANVTFYIYCOWCQZOAVLVIXFIOSZQCJKHRIZFHRWHZAXLRNKDWFASRPKYULTUO");
    msg.maneuver_type = 1064U;
    msg.maneuver_stime = 0.15461026703197067;
    msg.maneuver_eta = 62506U;
    msg.control_loops = 2000184298U;
    msg.flags = 110U;
    msg.last_error.assign("PXENGTYGVTEJOLORUYNLUOWADCQCY");
    msg.last_error_time = 0.957312922123239;

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
    msg.setTimeStamp(0.7567146108959956);
    msg.setSource(11566U);
    msg.setSourceEntity(88U);
    msg.setDestination(41350U);
    msg.setDestinationEntity(102U);
    msg.type = 52U;
    msg.request_id = 35876U;
    msg.command = 210U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6882508480977736;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 65084U;
    tmp_msg_0.custom.assign("ZQDENUWOMVVYRSQVOZB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50994U;
    msg.info.assign("AIGLBSEZFNWFUGKTQDMIYYHMVJHYRXZNXOFWDMJJBXDQEJCMTARLULMOWHJGOLKCQEBNVZAIFGHCJIIPCGEITAOMEAMUEBXSAXKAUVWMCUXH");

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
    msg.setTimeStamp(0.5422504312793948);
    msg.setSource(27656U);
    msg.setSourceEntity(208U);
    msg.setDestination(1380U);
    msg.setDestinationEntity(150U);
    msg.type = 24U;
    msg.request_id = 22527U;
    msg.command = 186U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("BVZNUZXTZTLCQHRHALRCNLHVTOYKDMPDSJOJSFJYIEUGOYBAPCVSZVNKGKIZBFZMXXHFHBYIMMSDVINIWXXLKRTBWMSCOYWGWAGEJUEAKJMBKVVNDSJMZZMBYNUNPRALTQIVOQMQOFXVQERBUFFRUHREPDQPGLHIXTMRPOOALPGGSFSNBKUFYLCWCIFZGQKDWCUCAHTGIEIRNLVRHPCSWLEFDTYJPXCJTDSOAQDOQAZTUNYQEKYWEX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38424U;
    msg.info.assign("WPAFINXPGVXOOWHWVCTJ");

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
    msg.setTimeStamp(0.5346597854306054);
    msg.setSource(26622U);
    msg.setSourceEntity(19U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(29U);
    msg.type = 49U;
    msg.request_id = 15906U;
    msg.command = 137U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UERCYEWWZJVHJLMVEWAFYRYOJZCYMSUGBVFRUYMVOQLJKLSIQPABDRWEMPPRWBHPGBSUCXQZNLTUFUAXSEHVRMFMTSHKSDUBACCSTJPMDQITHNRGGQUBTIFGXCELPYPDGDOBRXUUXLOYLZIQKPAWFBOZSXHPHHMJNIVCMJKYTHILWBCGLTONOARDAWAWQICXY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46586U;
    msg.info.assign("DZPVHGTYWOKWQUNLBEEZIMMXLJWQWHRVPJVDBCXQSXVDAFXZVECLCFHBNJIHOECZQULBXTOAAAEYYCUCLWJBQLXNLYEEICMNBRWRXVKOGUHPGNJXBQYNSSDWRYOMIOHIIMJHRIGGTTUWPQWDFULJSFHMFAXWVKDZOYDYRDTARAMTIYGBPBCYZQUMDDKKANNOAHNOCNMUVFSGVVJFPGK");

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
    msg.setTimeStamp(0.36556137300240876);
    msg.setSource(19958U);
    msg.setSourceEntity(159U);
    msg.setDestination(35344U);
    msg.setDestinationEntity(135U);
    msg.command = 223U;
    msg.entities.assign("DJRKMVRVGOJLDEFYQSMIGAXJBWUWDPZZFUHGPZCWKDSBJASYOCYNXPLITONYSDCWWTOOYIAKLMKWEMTBWTCEI");

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
    msg.setTimeStamp(0.11085127880180434);
    msg.setSource(30400U);
    msg.setSourceEntity(252U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(222U);
    msg.command = 207U;
    msg.entities.assign("THJRWSQEHGWTOWDHFPKLXMPOXCLIYGWMVFLVEYMGSKEFTEFXJUJCMUHXNQUVLCIBACOVXYOZPKCDOQQARNIRRNHANGNIOCVKGTIMYCMSPOXLXVDIZBQTHAWYQFSTFDWKNGNVRKATDQPKZDFPDYWTMRHMKNOAKJKUWBIBDOGSDEZBCZISLXPYLJBUZVQBVOJIBXAUSSZUAQARZUGWAFEUTEEDYN");

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
    msg.setTimeStamp(0.8358166362613304);
    msg.setSource(64443U);
    msg.setSourceEntity(154U);
    msg.setDestination(39466U);
    msg.setDestinationEntity(131U);
    msg.command = 163U;
    msg.entities.assign("DRXJJTTKTWZGDOYHPLXKEFNKOADVQNGSMOACVKQERZEQFALQMJFNUAHFEVUBBALMXEWSUBIWCUJGFVYLUXSLFFZOHIDSNIEYPSPQCOQZAJBEGWZWMWLGGUTEAWDORJLHGBZIPHMPNMHPZAVHFWISOLYILYYBZPKWDXMUVCMNGBIVJGCFRXVITHKDHD");

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
    msg.setTimeStamp(0.6846097167636762);
    msg.setSource(11812U);
    msg.setSourceEntity(61U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(11U);
    msg.mcount = 20U;
    msg.mnames.assign("JLVLXEYWPIJIUCIQ");
    msg.ecount = 28U;
    msg.enames.assign("FIODCCSGERCYMHCMWRWWSKAJTTJJRLHWZTCZ");
    msg.ccount = 138U;
    msg.cnames.assign("BBHTAPUDYUHKMYFMNZTFCRWHTKNUNAIRBBQDXAHXQEGNWECOJNTDGSIMPPVJOZVBZRSPOJCXNFROAVHJQYFOMUQKZCFKKQSESPETHZWXEJMDXGNLCMJEQMLNQSEZYKFKEPDMDRFVSVVIYIWNAOAGHLWRDPJTICJBRGLTXSKVDSAVBI");
    msg.last_error.assign("EHMVRAUDHIXCZYAELTHCJFYUDOQTPAECSADYLWTCXHLFDICFYPIXNEADUEKVQWFLOHXNBOJQJKMMVXJGHNSTBBBAGTARMGSKKJYOHZMWVUUWWLTDXULCSRNIODLDPVCWDTGHZKOPXPGFXJEWYROZRIEWFWKQILKOZRSZKPUVPMREHNBASCYMJYTVAIWKYMJGFCFANQUZLYXN");
    msg.last_error_time = 0.20620918768417207;

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
    msg.setTimeStamp(0.4137108866535808);
    msg.setSource(28751U);
    msg.setSourceEntity(15U);
    msg.setDestination(21627U);
    msg.setDestinationEntity(232U);
    msg.mcount = 1U;
    msg.mnames.assign("PJVYAFSGBWGRFTOMMLUEXZOPGERAMQDLHHOVNXHFJKAXSZUNSRUVKDSCVR");
    msg.ecount = 4U;
    msg.enames.assign("CSVASUUOBQTRAJOLUJDRINOJZQBCNYEBDNMOZAAMUAOAUMRUCXPBOORKMHVIQKCRLLIHQKDBQDHYNFOPFDSXSTTVSUEBYXIYEEJVGEHZVIEMRDCYZKWVCJHXFKDZWFVXXAHJWNSJVXK");
    msg.ccount = 225U;
    msg.cnames.assign("HPWVJJHSWIPODULKEHAKEBPXTOUQBOTAOZEICPRMPNWHKRNZCKWSRFPPCPVQRTNEBGSDCRUIWQNVKUZKJXYHLSFTYQBLVFLSOZUMDLWCEPMIZNEVTXMLXMXJMZVRFNDMQNUGTJSJJFHYAGAR");
    msg.last_error.assign("XVXQUNCWUTPLZGGPGKRZCOASCCOFMMZGJMPAURZBKRUDXJZMYTNWVLDYKKJHBOBIHNKDNVNLNFFWUIQWWJGLWIILHULODZTOWDLXXMAJCRXZPQRVOTFQCVOYYIWACWQTEPUHCXEEGRTHZBBDEIOTQAREJMSSLPVKMCUNAKQGM");
    msg.last_error_time = 0.15496648593209283;

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
    msg.setTimeStamp(0.7446950926308306);
    msg.setSource(38753U);
    msg.setSourceEntity(104U);
    msg.setDestination(65395U);
    msg.setDestinationEntity(191U);
    msg.mcount = 197U;
    msg.mnames.assign("CWURTENSJWKCQZSVJGEVLOPUMDFNMAPLFQPKPDMRJVEEOKMYYUVALBALOEKVCIHQBTMHQFIWAAZJSBPHTBCMOUDLDIJSAGCNTSPTOHGEALDEDBUYNJKQTLJMYRNSSQDWXXBHOTYZUOXLTIIIGBFUFCRFGYHFHUETTFWXZGBHWOVCCIOVWPMZKLZNNBNCYDFRRKGAYVDOKYJPVMXKXGKFAWAQEIHRZRHJDRZXQIQGBSUUISQPXSCZ");
    msg.ecount = 14U;
    msg.enames.assign("YARBUMLNCNAEYODXTXPXRSZSRDUPUGINMJZLVULONWKCSPQDWJQBRXQEJKELVDKIGJG");
    msg.ccount = 160U;
    msg.cnames.assign("VTFHXOVIXXQTEVUPEZNIQGARRCDTBOWQCRIKWLPJCFDTEYFTIRYFLYLHVWPSZAAHLSHBUEZHOCMDOXZLNBHJJYNSSBIQUYOYKKUBNWHDXIONZWGWED");
    msg.last_error.assign("ZRSWTTZHOMDXDYQICRCXVHBWGEWLKEFXUDXEEMQBWBJSHJAPIRGZQSNZWDTTYORSEKNBAMQNYJTRUCDVPMLGEPIDZJKBJPRFDVWSUTCCPIHPIQNHJXJGAXHXQAFYTZEPPFNXOAQCKIRJUOBVSMZDZKRNGOORSGKFFKGLGWJOPNCXHMIAGLOJMSAOVUINQLLRVLYYEUDHAMEOYSBBEPFWQUTUXLTBNUYIMGUFLIYDNVKKZCFZVTFQKYVSWLVWBM");
    msg.last_error_time = 0.37796326992047213;

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
    msg.setTimeStamp(0.7864215034460299);
    msg.setSource(47454U);
    msg.setSourceEntity(26U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(66U);
    msg.mask = 127U;
    msg.max_depth = 0.23005340155848264;
    msg.min_altitude = 0.5061598194419542;
    msg.max_altitude = 0.1606588652952503;
    msg.min_speed = 0.5918658092262725;
    msg.max_speed = 0.9355629161351192;
    msg.max_vrate = 0.8874125979802321;
    msg.lat = 0.9614261612951338;
    msg.lon = 0.40718492293909225;
    msg.orientation = 0.3421545549307782;
    msg.width = 0.8718756530735067;
    msg.length = 0.7856430083896605;

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
    msg.setTimeStamp(0.44009235399730273);
    msg.setSource(57278U);
    msg.setSourceEntity(58U);
    msg.setDestination(46627U);
    msg.setDestinationEntity(114U);
    msg.mask = 173U;
    msg.max_depth = 0.33526479062222403;
    msg.min_altitude = 0.8340290192281559;
    msg.max_altitude = 0.3255055768587817;
    msg.min_speed = 0.43155364974001387;
    msg.max_speed = 0.376830869256924;
    msg.max_vrate = 0.12772477334368904;
    msg.lat = 0.3016761158958893;
    msg.lon = 0.9085052950979368;
    msg.orientation = 0.8456659538861558;
    msg.width = 0.17601648460408625;
    msg.length = 0.36912014330647;

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
    msg.setTimeStamp(0.34399592167318405);
    msg.setSource(51892U);
    msg.setSourceEntity(253U);
    msg.setDestination(54931U);
    msg.setDestinationEntity(106U);
    msg.mask = 139U;
    msg.max_depth = 0.09138067643889414;
    msg.min_altitude = 0.6356059742976579;
    msg.max_altitude = 0.8605548748095369;
    msg.min_speed = 0.35170714438761674;
    msg.max_speed = 0.6577218160823248;
    msg.max_vrate = 0.9411713728582204;
    msg.lat = 0.06413046366448649;
    msg.lon = 0.2735308481390375;
    msg.orientation = 0.27064207105284876;
    msg.width = 0.9357955184520069;
    msg.length = 0.022605910464806866;

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
    msg.setTimeStamp(0.608588129687107);
    msg.setSource(10708U);
    msg.setSourceEntity(20U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.279457660381331);
    msg.setSource(51915U);
    msg.setSourceEntity(36U);
    msg.setDestination(11334U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.3002790103270876);
    msg.setSource(43453U);
    msg.setSourceEntity(78U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.7304681849177908);
    msg.setSource(30492U);
    msg.setSourceEntity(178U);
    msg.setDestination(517U);
    msg.setDestinationEntity(226U);
    msg.duration = 59366U;

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
    msg.setTimeStamp(0.9804796470830602);
    msg.setSource(17700U);
    msg.setSourceEntity(229U);
    msg.setDestination(4788U);
    msg.setDestinationEntity(49U);
    msg.duration = 52818U;

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
    msg.setTimeStamp(0.19635805663868544);
    msg.setSource(57926U);
    msg.setSourceEntity(14U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(139U);
    msg.duration = 55313U;

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
    msg.setTimeStamp(0.3240241475906217);
    msg.setSource(39015U);
    msg.setSourceEntity(122U);
    msg.setDestination(14795U);
    msg.setDestinationEntity(9U);
    msg.enable = 214U;
    msg.mask = 139551489U;
    msg.scope_ref = 0.9766416765946313;

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
    msg.setTimeStamp(0.8233125439541471);
    msg.setSource(15309U);
    msg.setSourceEntity(144U);
    msg.setDestination(63014U);
    msg.setDestinationEntity(177U);
    msg.enable = 178U;
    msg.mask = 605801778U;
    msg.scope_ref = 0.2814070132931048;

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
    msg.setTimeStamp(0.2157831915813162);
    msg.setSource(23693U);
    msg.setSourceEntity(23U);
    msg.setDestination(55073U);
    msg.setDestinationEntity(89U);
    msg.enable = 207U;
    msg.mask = 4043065158U;
    msg.scope_ref = 0.8163250768626121;

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
    msg.setTimeStamp(0.5644680356390036);
    msg.setSource(46829U);
    msg.setSourceEntity(9U);
    msg.setDestination(31135U);
    msg.setDestinationEntity(164U);
    msg.medium = 75U;

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
    msg.setTimeStamp(0.15198253267657513);
    msg.setSource(16026U);
    msg.setSourceEntity(93U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(254U);
    msg.medium = 100U;

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
    msg.setTimeStamp(0.9062812950795022);
    msg.setSource(23909U);
    msg.setSourceEntity(189U);
    msg.setDestination(38498U);
    msg.setDestinationEntity(181U);
    msg.medium = 209U;

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
    msg.setTimeStamp(0.2030745321866726);
    msg.setSource(59180U);
    msg.setSourceEntity(235U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(127U);
    msg.value = 0.5663180877453498;
    msg.type = 187U;

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
    msg.setTimeStamp(0.1700918392500742);
    msg.setSource(52695U);
    msg.setSourceEntity(77U);
    msg.setDestination(46449U);
    msg.setDestinationEntity(72U);
    msg.value = 0.619541959480083;
    msg.type = 193U;

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
    msg.setTimeStamp(0.5066206234437883);
    msg.setSource(46787U);
    msg.setSourceEntity(245U);
    msg.setDestination(1382U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4263985361082898;
    msg.type = 237U;

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
    msg.setTimeStamp(0.1776215025171043);
    msg.setSource(8844U);
    msg.setSourceEntity(84U);
    msg.setDestination(13732U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.4199780866809907);
    msg.setSource(30551U);
    msg.setSourceEntity(85U);
    msg.setDestination(113U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.9298783988318385);
    msg.setSource(51554U);
    msg.setSourceEntity(184U);
    msg.setDestination(53198U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.7743727269957609);
    msg.setSource(3077U);
    msg.setSourceEntity(146U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("MFHGZJBCRX");
    msg.description.assign("IJGHPDQGLXTJXXQOORJWOABQNCQTVAHFGCASWDFXISMVAMGNZVHGUDODKKORYEVWMXVBQBKYLETTYLYOGUFQIGEJJJTPRCTWKPVZUGALAINBZUHDPIDDHXBJSKRQMHOCFCDLXMWMELSTWZYTJEYCQPLHPYUPXP");
    msg.vnamespace.assign("RESTHXNVHBEZWAZGATGWGXCQXOEXOVVPFYBHKUJKODZQIHUXMGXYAJIVBPSEFZKUNAVBKXPSXBUZCHJDTUERQWOHRMQIAFLEYRDMMVTNIHYALDFIXNRMCYILNRRWUIPZMMFREFCOZQLJTTTLZVJJPOXKYTJYVHUQDWWDPJLLEJYKLVRMPNDFSGOUWEALWMPCPNCOFSSIQ");
    msg.start_man_id.assign("UFHCSZQBRPYGQHLODKDYIKUCEVRPMTKWAQTMFHNZECDSAXJUFGXMLXEARSMSQJBFBDENIDGJQAJODILNSMNNVPFFEJVABBRJOZGDNSICWQTQRPIHRBAXINVTLPWBYURTEYAWOCXHVFKOHGALAKYGZEEYHYDG");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 146U;
    tmp_msg_0.width = 27280U;
    tmp_msg_0.height = 32631U;
    tmp_msg_0.widthstep = 26289U;
    tmp_msg_0.channels = 64U;
    tmp_msg_0.depth = 43U;
    tmp_msg_0.finaldata = 208U;
    const char tmp_tmp_msg_0_0[] = {59, 21, -75, 94, -114, -78, -120, -94, -39, -57, 28, 57, -104, 64, 11, -95, -23, -4, -69, -49, 71, 92, 69, -40, 25, 17, 53, 24, -40, 105, -103, 17, 79, 80, -127, -61, -76, 14, 11, 95, -33, 85, -93, -46, -17, -21, 93, 117, 21, -81, 47, 113, 46, -83, 117, -43, 75, 104, -85, -36, 19, -20, 54, 26, 15, -75, 51, -65, 35, -106, 80, -15, 111, 56, 14, 76, -80, 40, -90, 4, 64, 96, 111, 28, 80, 115, -68, 114, -39, 25, -80, -62, -81, -31, 83, -99, -122, -48, -128, -76, -49, 73, 29, 8, 62, -96, -66, -31, -43, 58, -111, -36, -39, -102, 107, -110, -69, 121, 34, 79, 16, -21, -4, -97, -79, 60, -72, -61, -23, -111, -128, -1, -7, -67, 60, -41, 51, -80, 57, 103, -21, 124, -91, 76, -104, -104, 66, 104, -107, -10, 5, 91, -124, -13, 113, 116, -116, -44, -76, 107, -90};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.13212260088971106);
    msg.setSource(41462U);
    msg.setSourceEntity(75U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("PZGQHPDIJFALPROCCHXKHMPYKYQYUJSWRDPTOWYYBOAWONNGWCDPZZZEQVQJYBBSZRFWPXOMIYRQZMAKUTAAGEWMKLMJRVGICIJFTTHJTRUWTPWPZLKXXLZKHSHAABGIUJGVGLCEFBODVAKWFEKMXBSCDADXONDCZDUVUV");
    msg.description.assign("LXHDZYOGUJPXDAGNHPGVQZIGGERSNQDNAOWRRMIWRLNYQECOVITSUUBIRXZIVJXQBCREUXFXWMHOFCOCJVSCGQCTATBGSFSLGDHLFJFMMZKLAFPQVVTNETIMNYEWDOJXYLWTZBJBKPPQQMLPPBASUBTZEHFLBAUQYHPUOFGTWIFAVSPWMJKJVKOEOMALUCTHSBNNKIYDCHPKKXECKUMJYRYXXLSSTICWHGQJMZAZUYR");
    msg.vnamespace.assign("JIARWGTPTMTYJCXYUINLYKTFLBIJKKMESPMBRZRWTXJCCLUUVANZCJEXVYSWWDUHBSSSWM");
    msg.start_man_id.assign("PCDBINLAQZRFXRPRLBKXHSEAALHGUQBZTMPDXLWYITIQGIZELSXWIEDSHKRKVAQVWJPHTSUNBPMMSSVZJTBWNDKDYGCT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PCABDHEELWIWQMCXEXWSRGYRHAPOGPASNNXGTNSQQUKTSADAEQFTNFWRYOYHUNMVFMSDOLWYZMFCYJXQRCLCLULCGZKMSXEBZQJDZIEXFKRVVUBEIDPSAJFCFQPYBHTKZDAOWUVLOJVBOMOKGPHZXBQRJAVFINLFTLBQAIDAKIMPVTSYR");
    tmp_msg_0.dest_man.assign("XXAUGXWMEGXVWMSJBKPIPPRUAMCUYOVJTNFUSINFXIRGODSROYKHQOQRLZPFETIASFTYCJMBFKDPYZCFFELMOGVNFZWOLFDRIDEYVGNLYVRLNJAUM");
    tmp_msg_0.conditions.assign("BIGNSJQTMFVO");
    msg.transitions.push_back(tmp_msg_0);
    IMC::LblRangeAcceptance tmp_msg_1;
    tmp_msg_1.id = 147U;
    tmp_msg_1.range = 0.8319043727228322;
    tmp_msg_1.acceptance = 74U;
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
    msg.setTimeStamp(0.27212406760758723);
    msg.setSource(33868U);
    msg.setSourceEntity(174U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("LAGTNZDHKRBKYAFZOHSKWCIPPJDPERIUSGZEZSVBXDOCCLGYYKSYZUDXUQQYUWXUJAHCLBFVMMFZDWSAPVNXQBFAU");
    msg.description.assign("VBLEVKIBFFRPWDDSFGDHXHXPSCJCOTUONDZDAGXHPZRWKVRYUMTLQQAEXQBNJXOTEXHGXOCVBLBVHYKDBYPPVMSWWIPLAOJZUJHVWEGTQRRTMJGZDWGTPZHUJAKOQERCAQHONWMUUNLMQBEIGYKXJUIKPMMERYIJKMZLOCRMNSSKXIIFIYESPRBGATNVUUFWSFNCVCGIAHJQLLWATECGFJYXQONZCBFAIEYQMDNHLLWTDSPYZDRSF");
    msg.vnamespace.assign("BOKCTCZMNBLFSSFKIMZMKCFKELSUIKKJYOTQUNSQBATXFNTVEHAFTXEDVIBYBTABAAHWNRNHPCRUBWTFUYLBBLJGWYXMLZZCQKCRMXJCHFNUONAWDO");
    msg.start_man_id.assign("WVMGWJVAEFHNBXVTKDUGRHZASWGIIQDOWDDFGOJDPNPBZJSWBDBNSLYPHQLQGEUTARCULOCYIYNIQWUQXTDUQTSHYNPWEZMBSFCXKOKQKRPRTYNYZSEOCVQFJMGDPZEPZXKBACMISHCKSORMGQSRUKMDEVJXOLDMVEBLZFBVLJFACCJXVJTZZXETIUNONSPTHMVRFUINACWFEKJHXPNLYFVGJAWABHGXRWHTZAXOTIKGAPRURMEQOIL");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 31639U;
    tmp_msg_0.control_ent = 36U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 19U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.23066732603241868;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 24U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6281739784595162;
    tmp_tmp_tmp_msg_0_0_1.z_units = 14U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.17697562350318596;
    tmp_tmp_msg_0_0.lon = 0.8389606072228794;
    tmp_tmp_msg_0_0.radius = 0.3107147191334422;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 190U;
    tmp_msg_0.proximity = 213U;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::AcousticMessage tmp_msg_1;
    IMC::LeakSimulation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 68U;
    tmp_tmp_msg_1_0.entities.assign("HCTNWGMLINTDGMWXXGSOZNEPQGHDXPOOJRTFHHACVZXCUOPWTEZFNNSZUXHGTEZDREBJLAQUIW");
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.1394701352010228);
    msg.setSource(25039U);
    msg.setSourceEntity(107U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(8U);
    msg.maneuver_id.assign("QUIPBGTAWEJTETHXNTUVRLANWNYRLTTZFWVAEJFYODYCHFYYAZPDRPDIXKQBPWCEZNYUJPIXLSCTGCKYMSGCQOZNFMFNIXHVKRWMVODZGBSNQRWWQOEUBQSJUQUVLBLUTHWMVMFEOVSXUKQYMZLDIBKGDNLISQRUWGFAOHJIHIPLCWEMXKGHVDHPJZOKSSBDJARCRTQVDSIZARLNPCPJPGDEKEAOS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 57940U;
    tmp_msg_0.lat = 0.13593537932696542;
    tmp_msg_0.lon = 0.4982335652371245;
    tmp_msg_0.z = 0.8034578170594756;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.8592988186857335;
    tmp_msg_0.speed_units = 29U;
    tmp_msg_0.roll = 0.8936908799967502;
    tmp_msg_0.pitch = 0.13034028341330217;
    tmp_msg_0.yaw = 0.39096960600163155;
    tmp_msg_0.custom.assign("OEOUUIRQYNOQKJWLFUSSKGFVKXOHKSKREOWKXBQIZYFIPJVAGDOPFABWMKFPYNIFIDEWTSIPTDDIZLLCGBWFPMJLTCZDHCRXMWARDXBFGWAHHYGGVVTVSPSLGMFXCQXJLINLJVANSOPXCMDJTCPJ");
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.9365769370779538;
    tmp_msg_1.type = 212U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionStatus tmp_msg_2;
    tmp_msg_2.sessid = 3026013027U;
    tmp_msg_2.status = 106U;
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
    msg.setTimeStamp(0.403599314183283);
    msg.setSource(41175U);
    msg.setSourceEntity(172U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(155U);
    msg.maneuver_id.assign("KQLOQRKPWGRNIGVMQRCZVCMIFDTIHEUYLDBRFKZIWNTSUSNSBTXMCJKZFEADHFYRCVREDLNXBBCDNNQKPNOHALVUNNCXAXSNZJKKCTDIYDUC");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 8331U;
    tmp_msg_0.lat = 0.11716321200673763;
    tmp_msg_0.lon = 0.8284584318979452;
    tmp_msg_0.z = 0.7922258447437406;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.pitch = 0.19112502568273204;
    tmp_msg_0.amplitude = 0.5340778037501214;
    tmp_msg_0.duration = 50497U;
    tmp_msg_0.speed = 0.40686106815691003;
    tmp_msg_0.speed_units = 23U;
    tmp_msg_0.radius = 0.6018504032694522;
    tmp_msg_0.direction = 7U;
    tmp_msg_0.custom.assign("WNFPZULUWVNOTGOTYCJDOLRWJXXJZJCODIESWMYRGELCVAGWT");
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
    msg.setTimeStamp(0.6458770774518269);
    msg.setSource(53671U);
    msg.setSourceEntity(9U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("VROSJFRLKHGDBEGPWVSULHRGHKZTYWRFDADKDOXCJOXWWXXNYFIMGZBCWYIONLREZVNPABZVVOHQLNGPFXDHQUKKKTQCFEAPIDUYIJYPLJBOTVMBISLKMTKVIBPSPQGGDNWDWPHMXAYCIWTXXQYAQEEMZTSDRWKCNBQJEIHDVYCHVPMLBXBNLNWTMUAJHRZTLJCFUSFYMGSMJNCIARSZOENTSZAURF");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7343745976466002;
    tmp_msg_0.lon = 0.08911100885367329;
    tmp_msg_0.z = 0.192814155755483;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.6161032082592692;
    tmp_msg_0.speed_units = 222U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.49439691452539547;
    tmp_tmp_msg_0_0.lon = 0.28381635714211095;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OZDLMYQAETYKRHEMYMNFGAZPZOYYXRVQH");
    msg.data.set(tmp_msg_0);
    IMC::LblRange tmp_msg_1;
    tmp_msg_1.id = 164U;
    tmp_msg_1.range = 0.7419534361246002;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("TQEYFOLQKFVREOGQZEEUHNGSEOCBWGZSCBUGBXJVNYPTWAZOMFQRXLUDHZOIGIYHKRPMSTKPROMDDOCXXGSLMHXLYBQBKMSHIANDKQNZCMNDIQMZRSPUUBSWXUOTVYBSPLIWAYEGUAZGADNIOYFAAOYUHVWDCBEEBUELRHPJMPTNIHIHQMJVYPRJLTFJDTICFVQRTTQKRKUELZZKMXNXJVSAXACFFFPKLWNW");
    tmp_msg_2.value = 173U;
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
    msg.setTimeStamp(0.7454841772617061);
    msg.setSource(26668U);
    msg.setSourceEntity(207U);
    msg.setDestination(40591U);
    msg.setDestinationEntity(12U);
    msg.source_man.assign("KUKNYUUIKVDHJBXITEVZOYCXRWUDBTCBGFNGNLRBTFRNWOELNZXBEOIABNJVLRYUBTKWJOETJZLEGFFLKHXTMFXPHOGIMZCGPGUODSFBGPSALVHRNZAATRJZVTJPKJWSQJPSFQCRIZQPVUMQQRDQVGQBUHALLHMGYDXSSVMCOGNUAAWTRCPODEDWAIZQWFYSPCDMAHIJTKHZCXWIVYQLOSNE");
    msg.dest_man.assign("ZAGUVRWBHRCBSFUSENSZGCQIOCXIEBYRKEWGQISYJTLDFLCWY");
    msg.conditions.assign("MPEPZMBDUVEGSCVZWCUOJJTMBRNLHISCUGNNWNOQEOGMPXDFMIYFQAPXIOXGTFGXZGRHFHOSHYBBOHLFSDRIUCWVJIDLTXDUIQUVJLNEAZDOBKKESPHCREUITDJSZTBWGXHZ");

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
    msg.setTimeStamp(0.12263146191335361);
    msg.setSource(2290U);
    msg.setSourceEntity(149U);
    msg.setDestination(5711U);
    msg.setDestinationEntity(53U);
    msg.source_man.assign("RXKNVZRVZFDYTPNVNZGFCJPQBVRPWKVVASEPTCBGHTYMJOFMUUQYLUSPMKKROTGFWEYXEOSDQSKSIBJBWTMOLBRLNHQHZSEQLAUEUGVMFHWCFZOKAKLSEMDQLNBJXXWHKOZHLUITCXIGZGMLNCNOPBNHSUAFINCMCXZYDGOKYGNGRYQHAUP");
    msg.dest_man.assign("JDLXYEHTFGEONQVTSGRMOJZXQIQOPVLKVPGLJHOZLWBRVNYDUAUXFEARUHZEBMALNBBFZBGYLFBPXJKXJGTXHEPVJSIFZWANKWKUHYRCRRGROKUZPJYCIIGMYCDTMROVTSKUFOBQKCD");
    msg.conditions.assign("TODXVBINSLQBYOSPREEFSBIJSNONLLFUNEUBTYOVTGDIBQKFFPHCTUSJOMUEBTZGMGEPQRXDHIOSVBZVYYUUSCMKELZOFLAMLWXUODCENGURWFSPQHJFNFDDRTCAQZIMSDBOZPYPDMLZQTTXGFLEKXCGVWRGEUYJGOYBHWSKYXWIM");

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
    msg.setTimeStamp(0.9174636341250768);
    msg.setSource(38127U);
    msg.setSourceEntity(201U);
    msg.setDestination(57561U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("POMHVFQRFXLJKIZCSQBVRTUCBVWGVJCWODPMOKRZHWMMUMPJPTMGNLRHBUAIXBRHEIOKPPAXNYKHIKCGKWCGVTGCQBTUPFWFPVNLCDNEEDBAJMXDVCZFGFXQWDNYUAKAIYQPHYIHSXDXEGQRNLEJJTNIZUZOEOBWUXYKJHQAUDEKIRTBMSUIVLQIGWTLYHRQAEJJFSXSSDRCAEMGNOYFDYLNYOSRFOKWHAJNFTQVL");
    msg.dest_man.assign("ISDFPFRFNKNRUXQLEZGMZPIYIAEQSZKNRQEJUCQVWEYLCSTPWIJDEAFWKJPWVCBJYOGUBSOLDUAWGAKQBNVOICVDHOPASYKAYFBTODGXUTTUYXVRBBDVNZATZQMNEMLXISLZMKXVHZTHHGNJJHROCFWEKXCQOVXHJMZKHCMDGIRWHAFNXZHGEGUSPSUYUBIJQCIYWJA");
    msg.conditions.assign("TKUOAWKYNMGXHPFCWBOBZZMMZULBGKWCEETAYWNCXOYBPSKZWFYQTVHNPBVIWHMNVVAPVZ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("DQFNQLLHWOZFRUSGAEOEYOORCURVKMAAHTHPUTIRPZMXDGKMBXKQXRIADCDZELXVVGEFTNINYLTNIJGGTBYRKPHZZDLHJNNELOWUDUCIVYKFHAJIHTHKLRAQZFXOSQWFMJZTKSSNMPACIGIYRXPJPUQEBDBDCBXFUEVVLBQFTLUJDABOJEUEY");
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
    msg.setTimeStamp(0.7946623456046962);
    msg.setSource(36186U);
    msg.setSourceEntity(85U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(29U);
    msg.command = 79U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FEJYQCCMDBORLJSZMFCHQTKFRTVSBCKJRGOIZPXKMDJSDYXDCFXXMDQBGHBUONSCMKFUDHDCSON");
    tmp_msg_0.description.assign("TDPVZZOEMIDBRTKSPWAOZRLNYPJOBDGEEVTMUCRJQAYVRMKXSGQFCGYJJASFGRLHFPCUZYNQMDWTVGAEWARGNVPMVFAQAQYPIDLKCBRDLQIVUGZBKIHSKSCLKEOQZIHVFNDRPYNBJZCFTXUSSKIODHXIFIMXTUCNYKTULCFZNNPXMQSOERMHSZXNBRAXYNBJOHCWVGOEWQJB");
    tmp_msg_0.vnamespace.assign("MPIXMKWOJWYJBZEURGUQSKAUREIDHXIJOZHIYKYNTZXHSQNRHEJTHJPOECQDCWKOJKZOLFMLGTRHIRRKSMHOXRETLQBSAVRZVNAARXBHCDSYZKDPPPNVWLRYVGFVEWJOYMCXCNBAFXUPFKDPTPEQFJNTYNADWFQFKGGCSDJMU");
    tmp_msg_0.start_man_id.assign("JKTNYVQOMILRWDMRBVZHRGIFIROCCFPAFXAINCWOPYVXPSTMCMIGJRCMVTXOOWNIVQFAPCSHQFTVTNOFSHCKFDZSWEMECAHBOQAZQBEYLMEMRLIKSGDJNSOVHKRYEDBUBUWRJWDZHAURVGXBZBGNDLGAAYBYCHNJNLXTZVSAZFHDEPPDPXPFEXPUUQLYWASLKKZHBZXI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VVYRZXIAFGSCVEOUIMSADADAQQGGIZNXBDALOVPHJVXZHNYHZL");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.04375568256883289;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3671589530365068;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.3507552991341114;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 149U;
    tmp_tmp_tmp_msg_0_0_0.duration = 47121U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 64807U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 64981U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.2791743003450686;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.44517851242775397;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::PowerOperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 113U;
    tmp_tmp_msg_0_2.time_remain = 0.9865112029464085;
    tmp_tmp_msg_0_2.sched_time = 0.025626711354331255;
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
    msg.setTimeStamp(0.1960516431473026);
    msg.setSource(561U);
    msg.setSourceEntity(34U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(206U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OWVSBRFNGJIOZSJGDAYYRPLPNYZODDLEFBPIEBSPKAVQOKFCBIKZDYORFTAJHCASZGMMENOOPMQWXJWHKACNUPBVUD");
    tmp_msg_0.description.assign("RWBIGVNPDAWMDCZTDDFIOLLHVJNUVGFFFVZSJVBFLLZYPIPZUKIMCIEJIAZOGCN");
    tmp_msg_0.vnamespace.assign("NPFWZVLJBPPHJSLQBIYDWHXDKEDVFKGHQJNSLHQIBGSXAFYEPFWUICCWVRBHSLOCFOUGNHCFXQEFLWJZYYSEIUERMXPTPIWXYRQBBMADJRXVVLPGNZAKEMCCVHNEBCULKGWKJSCSRNNEWMQTXGBDKTYJQMVIDZUGVVTEYJSQVUUHSZMOONTZLOYNNPDAKIMZHRTATMU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QGFKZRMJWNARLATYLDPWVFCXZRBK");
    tmp_tmp_msg_0_0.value.assign("KRZEQFDDQPBNSAFWAAGXHTBGCCBCFQMXMRGEIIDQNQZOMUPKMURHTASOJKVLKWHAXMBMRSFLNNRJEHTPYOWTQHTOUHXLAJBVFGIFQILAJILUOKZEKSVWIHEEAOOSOKKMBFTOVPTJCISHBTUAETNZ");
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.access = 211U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZLQJWNJKVTIDBISQXDAXBAEEOTNUCFYEPRGGYATGKQJGFOLCUYKECYDVSGLIAXGKNPWHLBEDMDZNXOFNKUXOBSIFJLHGBLXDSYYBPLQOUTTVPUGZCDWXMFSQEQPUZOCCVHAWVHLKVKIATFRIWDMVVESZVGWFNHGRYCSDXSSYHMBERRTMQNFUCNARHZPQIZXBIDJPABAYZKKWSHRENKJWUPWNCOQIMURILOMZTHQFJ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FQTCMLDVTCAXUWVUBLJNBEMMGGGDJNDWXQZCPNVSTJWYJFRWZKDHHNOUPRJCHQUZNBBUAIDIDURXZSJUDUZEGDGFVEQYJHLZNMSIGACSOAYRIOZAXRFILAEVWCLKYZBWGFXMIKOBPQCKNOKESRQYLWOLAXOCMXSOQRXUFKWFNY");
    tmp_tmp_msg_0_1.dest_man.assign("URUDKJXTTZJRUWBQI");
    tmp_tmp_msg_0_1.conditions.assign("PEYSBDLDBLZBKIGWXDOVSLZLAA");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 40724U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.24603212004297137;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.542513414560864;
    tmp_tmp_tmp_msg_0_1_0.z = 0.050925255177179496;
    tmp_tmp_tmp_msg_0_1_0.z_units = 182U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8004349075717011;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 154U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.9078257691489541;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.3249182985228809;
    tmp_tmp_tmp_msg_0_1_0.width = 0.5871712059968699;
    tmp_tmp_tmp_msg_0_1_0.length = 0.594038616257949;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.18669845754756698;
    tmp_tmp_tmp_msg_0_1_0.coff = 68U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 86U;
    tmp_tmp_tmp_msg_0_1_0.flags = 190U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JJWEYTAUIYYZVFSSRSCYTNOXJQUKYLTCACBVPENEHZACYSKIKTPJAWOHVFXVCIEVMLRIBHYXYBVUJLFZ");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAnglesDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.9866593153335257;
    tmp_tmp_msg_0_2.x = 0.7637470726104456;
    tmp_tmp_msg_0_2.y = 0.3020004830637868;
    tmp_tmp_msg_0_2.z = 0.35352292842394206;
    tmp_tmp_msg_0_2.timestep = 0.8451217068988189;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Elevator tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 39622U;
    tmp_tmp_msg_0_3.flags = 221U;
    tmp_tmp_msg_0_3.lat = 0.835572828709716;
    tmp_tmp_msg_0_3.lon = 0.8093848009673458;
    tmp_tmp_msg_0_3.start_z = 0.7074974728821795;
    tmp_tmp_msg_0_3.start_z_units = 235U;
    tmp_tmp_msg_0_3.end_z = 0.2533741444512869;
    tmp_tmp_msg_0_3.end_z_units = 9U;
    tmp_tmp_msg_0_3.radius = 0.7994001280056072;
    tmp_tmp_msg_0_3.speed = 0.6807403361311652;
    tmp_tmp_msg_0_3.speed_units = 200U;
    tmp_tmp_msg_0_3.custom.assign("LVGYOKIWUENQLMNOPTRCSJNFYWJYEPHSTZZHMBG");
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
    msg.setTimeStamp(0.5059447241944215);
    msg.setSource(1406U);
    msg.setSourceEntity(141U);
    msg.setDestination(55891U);
    msg.setDestinationEntity(171U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GANINHSAWHPSMXIRHEYQQBYWPXUCVSRYPSYITZFHPQDRECOVXFBUTXRSXEWOEGFWZMYKZPEQVGZLKLWVUPUESIXJFDGUNJTJDWDNKPSIMCSUZRYJCFMOTJZWVQNIKBBAQLVXZFCCWFRV");
    tmp_msg_0.description.assign("CUBAYBDQOPHGFRKZSNCNENCZAWPBIKXMXTEXKBUCUSPWYYAOLHGJRZLVVGZJEXXWFCDZTVKWNRGAJYCRVEDVOQYQEWIWLYQNKXRILPWBNPDUAMCHFALLPLUOFRTFDKMZORVIQJDMSOSHCWZSDGEEPLDKXVKJBHHMJIUYIMOVPEYHYOQXTEVFS");
    tmp_msg_0.vnamespace.assign("EVNHRGFTYUBZKAYEFWCHJVIBSTEDELXMWRGFCUVZAALHGTFZUGNPVEYKXEAZJRQELXZUXHTRJWHLBXKFNXBHNMHUCCXFSMOJBYPIIYLIDSTYZQVZZKUQVYBCUKPGIOLPMNQGDBJTMWVWQAOSJOFOCNENLTXPPBAIWRTXAOCHFRSSUNKLQDWDVUWDDSADEQRHRCRRGAIO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VFFFBEINJAHZDIGAFSZGUCUSSSAWGDPBMEKAQSRERINUQACJSSPKCYRJDNLKTQHTZHUKVALBBIIZOBHXTGNKFKYPDQPCOVEDBPRPSWJJVMYEFLUTQKNSHRDHWVXQMGJBCELIJDRZHECIGGUDMVCATQOTKXXPBENOBJMGFOO");
    tmp_tmp_msg_0_0.value.assign("SHAZYOWRLAVCLQSIFFNNTSRCKLXNZNQCLFGWFODQEVESJZMFYT");
    tmp_tmp_msg_0_0.type = 48U;
    tmp_tmp_msg_0_0.access = 103U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QBOZVYPWUFTOOGZEWXCZQNUYXBFFDDBPNLOCKLWQRJLTRVCXSLMJTQTMREYPIISHHOKZYEFECVKKTEVAQVEHOWQLJZNQDNTCUYCNFYDIDARSU");
    IMC::EntityControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 53U;
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
    msg.setTimeStamp(0.06571181893558198);
    msg.setSource(44080U);
    msg.setSourceEntity(66U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(66U);
    msg.state = 54U;
    msg.plan_id.assign("KROIACNMDALCRYQOGPJXZEJVVTZPQBFYEUZOBFSJMILSTFMMVBQDXWTNVITUSFQOUDSAZXWDQKGHPZILSDSZGJRHUQAPLAJRRNCNWCQHFGVPYODJWVBFEGBEIBNUFVVWTHCFENRJTKEQBCKILCHHLKMMKUBAOJZDGTRSFIWHBHMMXLPETFJNPVVBOAZRKWHCNNSGZYHCLYPWKKLNCPIUOETXUEURSWLMXGKYIXTDOZYYWQIJADAREP");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.6407467872333579);
    msg.setSource(36600U);
    msg.setSourceEntity(93U);
    msg.setDestination(24715U);
    msg.setDestinationEntity(103U);
    msg.state = 42U;
    msg.plan_id.assign("ERLXSRKSMNFGIDPKUIKJEWMTYNLNTWHRPLQVWVZBNGTTZLUHICPQELVSCGDKMYZGEGDFCXXOQQCCZXBWXHUKBKHMCUGRYWHOBZEIRDDLRACAZMFXFJVHUOJCJWJVVAWGPAKLSMDAJJBSSRFXSEZBPMBMPBORTZUCOYKZIMANLSJHUGYUTFOG");
    msg.comm_level = 215U;

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
    msg.setTimeStamp(0.9522677078908511);
    msg.setSource(41340U);
    msg.setSourceEntity(192U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(43U);
    msg.state = 13U;
    msg.plan_id.assign("EWIMYJQXSHMXIQOEUPVKEJLGCELQUDZKHLUBGWTPMNGKRNKWDDUUGJUIKFIAXZHGJMSLLAJVRFMYVQJFNGTLZVXOYGYTXBCORBTOUCBYKIBPIMMPCJWRUAHRFCPQ");
    msg.comm_level = 51U;

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
    msg.setTimeStamp(0.03244741522056949);
    msg.setSource(11207U);
    msg.setSourceEntity(165U);
    msg.setDestination(3230U);
    msg.setDestinationEntity(242U);
    msg.type = 136U;
    msg.op = 5U;
    msg.request_id = 51712U;
    msg.plan_id.assign("QIWDDLFYENJXNMMAGAWBMZJNVPTDUPVAORLOUGKTSBYUGIAKTJSRXSEJPXKCUZDPQBVEGJIOCMXHCZHBWLYZGDCZMHWKJPHRCFLWFOOHSURPOVVQJBHLWQVRYWVAAZALEZGRZXCMNKMHUWCNNYFNSIIOZYUOKEKEYSTKWFDQ");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.7334787107556251;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DNZPDVCYMZUKOUKNCMLCGMSXPORTETLKMPXVWITQWFBINFZPTABRTWOERREXGMEZELFZGUAGOEWTAELCUAVDSHAHHTGFOGSBGSHZXVMETJLWPNJSOOWYYARFBNWSPPQBORZRDIZQZBFYRQGDTVMEIDXAACQHSJYJLIXNKHVQMENQJLJVTIOHUFFFRWIBZUDVYNPXXBXJSBJSKWDKYHYSVOKCBDJCDHRNUVKAQUUGYKXMYILQPHLQP");

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
    msg.setTimeStamp(0.17361613951598698);
    msg.setSource(31805U);
    msg.setSourceEntity(1U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(249U);
    msg.type = 183U;
    msg.op = 8U;
    msg.request_id = 3035U;
    msg.plan_id.assign("IKPIVLQMNIZLIEAPRIFXTVZMGOVPSGGOBQYMRZCNXEAKKVCCEUOENDPOXDTWFPPUSQUMFMLWHXCSDTUCZQPGWWHUZBRVYWFGSYRJBLIYHZTTAQNWRYLLCZCWAHLUQNJHOQNRJQBDARYVBVRIKJXVUAKYMGDASAFOOETNVBZEFNRXTHPMIYFTHKXSTDCTFJZBPKGAIDNMGYGYLNMKKUCIQJLOABHBHWDXXSBUVLFPEJJ");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 12U;
    tmp_msg_0.file.assign("APQVYDTDONQDTCRLORGNKBDXRXBFPKXJNQOAFXWJDGIJZKSXZXQLKYSHPMUMUZZFAUSNWIELKJVPRSFSOJCDJB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AQRXGLKLFPPZVGJKUFPOMNDNNJXOXZRVVOUBSGFOLSYCUGIWCLFBOBTNFXTAERALRWJRWRDYUHB");

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
    msg.setTimeStamp(0.05672218153177189);
    msg.setSource(36540U);
    msg.setSourceEntity(150U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(122U);
    msg.type = 12U;
    msg.op = 124U;
    msg.request_id = 38611U;
    msg.plan_id.assign("RXJYIHKUDJQORZLPFFCPZWGGHOXZXTVSSUKQCLSQWREUDYDAGPTITGSYWUEPTGZOQWDNGYDBSMCBEZAPDJMFIQRXBKN");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("JIXXCRPYWFHLGSFZHPODDRSSZOLHXXYMDBVDGGSPTTHSLAUPGKXYUICNXJRZFZJJJLPOENZCSICODVDRDJNUGDAFHPEKRMTNTMNVLKEXLHRYJANOOQVJEOBAILJ");
    tmp_msg_0.lat = 0.4631475474856205;
    tmp_msg_0.lon = 0.691105335371759;
    tmp_msg_0.z = 0.528288617275227;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.cog = 0.6921395184273278;
    tmp_msg_0.sog = 0.35873930692926015;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ESGTJEPXWJFFVSHWAJTWXHEIMPWLRPCMHQKXAFYQRAKSXPTUPCDHTWBJDSAUOQKZTYDGSWYXIDQNLBYMGLAYNNS");

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
    msg.setTimeStamp(0.05161774703051514);
    msg.setSource(28039U);
    msg.setSourceEntity(222U);
    msg.setDestination(56886U);
    msg.setDestinationEntity(219U);
    msg.plan_count = 11386U;
    msg.plan_size = 475408841U;
    msg.change_time = 0.15905549251508877;
    msg.change_sid = 16194U;
    msg.change_sname.assign("FUOAHRMZHLFTEGCJBEXECFPMQRNJZTWJYBIKGYMIWVUTQFGXCLSPYITAUAZEGYOFXOAUNLGVVTXWSFZYWSACZDEDBLGIXCKUWVZFHKZPIMDUPQQZCRRSEPCON");
    const char tmp_msg_0[] = {-87, 20, -65, -90, 117, 27, -107, 77, 57, 68, -104, 49, 51, 54, -33, -28, -4, -65, 84, 12, 118, -50, 52, 97, 63, -79, -118, -128, 33, -119, 47, -114, 100, 6, 97, -22, 63, 28, -113, 29, -37, -7, -104, -105, -118, 78, -125, -105, -57, 24, 27, 28, -124, 0, -69, 42, 68, -9, -65, -47, 58, -124, -8, 37, -124, -53, -43, 8, 7, 56, 57, 123, 17, 41, -116, -26, 84, -78, 35, -16, -77, 38, -126, -14, -23, 40, -69, -101, -47, 33, -92, 82, -119, -8, 7, -67, 25, 99, -53, -115, -108, -95, 118, -33, 119, 51, -91, 105, -76, 24, 20, -114, 4, 1, -118, 38, 26, 48, -78, 5, -73, 95, -76, 32, -59, -6, -26, -107, -23, 14, 82, -81, -8, -50, 85, 32, 15, -29, 58, -12, -21, -26, -63, 90, 33, 100, -84, 95, -127, -116, 21, 4, 41, -95, 96, 20, -27, -72, 117, 34, -122, 44, 109, -82, 92, 9, -37, 52, -78, 124, -82, -51, 84, 45, 43, -90, 111, -74, 110, 95, 71, -23, 122, -56, 46, 102, 82, 34, -60, -100, -103, -37, -28, 23, 11, 95, 50, 57, -37, -13, -31, 9, -50, -118, -70, 46, -106, -69, -110, 9, -113, -2, 66, -68, 43, -31};
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
    msg.setTimeStamp(0.13434297858983657);
    msg.setSource(31606U);
    msg.setSourceEntity(42U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 16981U;
    msg.plan_size = 3933017938U;
    msg.change_time = 0.7682642472272486;
    msg.change_sid = 59446U;
    msg.change_sname.assign("OHBYQSJXPZSCSBTAWDIHRKWGKTJFIHFOPDTXPCFVSPZK");
    const char tmp_msg_0[] = {58, 119, -84, 77, -83, -52, 56, -98, 86, 25, -55, 9, 107, 68, -85, -57, -20, 13, -69, 99, 91, -101, 88, 83, -11, -91, -22, -73, -109, -21, -31, -26, -27, 63, -28, -112, 117, 98, 34, -21, 40, 40, 23, -24, -65, 36, 85, -61, 113, -61, 89, 34, -88, 89, -47, 55, -99, 7, 83, 84, 45, 10, 33, -13, 117, -103, 37, 17, -29, -56, 48, 26, 106, 101, -56, -122, -73, -86, 59, -87, -67, -93, 14, -93, 10, -28, 95, 61, 41, -59, -127, 96, 74, 120, 92, -70, -1, 106, 118, -6, 79, -78, 59, -71, 5, 95, -61, -98, -73, 1, 35, -59, -44, 49, -107, -11, -29, -125, -89, -10, 106, -38, -53, 37, -106, -102, -66, -10, 36, -21, 71, -75, 103, 122, -21, 21, 51, 71, 32, -104, 124, 37, -70, -106, -101, 52, -17, -20, -1, 93, -56, 45, -84, 66, -6, 20, 38, -57, -59, 31, -86, 50, 66, -35, -34, -105, -77, -52, -10, -88, -99, 62, -76, -67, 125, -29, 84, -127, -115, -55, 22, -20, -35, -38, 117, 94, -85, -26, 63, -24, 25, 38, 23, -51, 110, -74, 105, 38, 65, 79, 107, -80, -40, -75, 28, 107, 122, 73, -45, 110, -96, -100, -88, 49, 38, -16, 111, 28, 26, 79, 20};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WMKDPFSAQATTUQXXRTWXYXBSFUORSRNUYJNZOAEIFEXUYBRDKDOSJIAGQLNI");
    tmp_msg_1.plan_size = 59925U;
    tmp_msg_1.change_time = 0.8106042233429858;
    tmp_msg_1.change_sid = 56402U;
    tmp_msg_1.change_sname.assign("WBAGTODDEQSZKTVZTJLLHAKYSFWTIFYSQCVLEOFPNFIEZLUXNE");
    const char tmp_tmp_msg_1_0[] = {-40, -59, 30, 30, -95, -108, 77, -47, 76, 25, 103, 62, 85, 76, 7, 122, 39, -13, -36, 120, -37, -40, 43, 107, -82, 117, -14, -46, 81, -125, -10};
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
    msg.setTimeStamp(0.4756789765336189);
    msg.setSource(57783U);
    msg.setSourceEntity(130U);
    msg.setDestination(21753U);
    msg.setDestinationEntity(74U);
    msg.plan_count = 63980U;
    msg.plan_size = 3652233301U;
    msg.change_time = 0.6840934497977844;
    msg.change_sid = 55970U;
    msg.change_sname.assign("LCJHHFFBWNAXPGFADZOGWZJBVFNBYMZRNQIXSYIBPPDCBDMUPETAWEIVRTQELBJZTMCOVYRCUBKZEOCWDQSOJ");
    const char tmp_msg_0[] = {88, 92, -50, 102, 68, -96, 43, 60, 20, 109, -21, -9, 78, 9, -128, 28, -125, 2, 109, 112, 40, -3, 18, -36, -103, 81, 59, 34, 89, 0, -55, 67, -90, -98, 66, 29, 116, 80, -64, 33, 49, -42, 41, 105, -33, -54, -3, -45, -74, 74, 120, 71, -27, -42, 101, -34};
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
    msg.setTimeStamp(0.5289602704026252);
    msg.setSource(20917U);
    msg.setSourceEntity(106U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("XZUXWGROVLZJXILLVIYWSKNNXCYUBWANBOPIDGJEOIOUUDTXVWKHPHCJUCTRMNLRAKXMCMYXCUPNKOSFKBQZHEALQKZFEPFYFMTURECPQHBTHAHIWZGKOJESAGMIYKFRBWVDIRBRVHVLVGDGAH");
    msg.plan_size = 46361U;
    msg.change_time = 0.09413259003027907;
    msg.change_sid = 16341U;
    msg.change_sname.assign("LRNTNXERNAQMKQTFZUATNDIIWRDKKJFYNKLFMJRUOHDVQBVCSHAFKJJGOKZXDHMLPIPUVJQJEUYZGGUVAICFIRBXDWQSRTNJHZMIXCJFBMPIJPGEEDZUZGVRCYWWZCHKTYELMDOHCDYASHUEZJNEYOFLWOQXIVAORXBPWXUBPXUFGZSUFODKGTLQCTBYYOVBVRAHEMTSNWVQBESOGSKCLTGALSEQRXBMLNACHIZAL");
    const char tmp_msg_0[] = {-105, -75, -67, 125, 79, 42, 89, -57, -128, 115, 99, 90, 117, -87, 29, 4, 33, 90, -43, -1, -32, -28, 20, 50, 16, 2, 96, 36, -114, -56, -105, 92, 10, 107, -72};
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
    msg.setTimeStamp(0.9180293895621069);
    msg.setSource(5727U);
    msg.setSourceEntity(67U);
    msg.setDestination(12837U);
    msg.setDestinationEntity(97U);
    msg.plan_id.assign("ECOLNEEYJNSKZAKRBZAUUYBGPKXSMWYXOXROIKZLLXBBUMLJQCYUG");
    msg.plan_size = 42661U;
    msg.change_time = 0.11749493962215862;
    msg.change_sid = 57471U;
    msg.change_sname.assign("KQOSHMSNFAYTQSRRNBMPZJIOFMZDZUVXNQYJJMSGNCTEWITCQFVSBFVEBSUARATKYCLXDCGORVCZJGNWMXHECZMDJPXPHOPWMPEVUUYKXQDMLQ");
    const char tmp_msg_0[] = {91, 18, 49, 76, 47, 55, -78, 3, 115, 55, -91, 36, 7, -81, -95, 104, 100, 29, -13, 30, 86, 12, -98, 101, 15, -23, -12, -93, 3, 45, 54, 37, 18, 44, 68, 107, -104, -71, -102, -100, 48, -72, -118, 105, 85, 81, 47, -38, -1, 64, -25, -8, -11, 78, -52, 48, -11, -13, 41, -89, -55, -93, -127, 23, -29, 34, 67, 66, -128, -11, -69, 55, -88, -29, 53, -58, 13, 46, -84, -14, -73, 109, -63, 24, 85, 123, 36, -98, -1, -23, 102, 54, 33, -12};
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
    msg.setTimeStamp(0.8207128598155674);
    msg.setSource(55942U);
    msg.setSourceEntity(60U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("HSFAPQCWHHDLIZLFOLINVIAUXNGONQHOLSAZPKIXJMKVIHYBOLZCQFVBWSZUEMIDSQVGNJAICPDYBRBBKMGETWJWQUPDMNJTKPGNMYCBMDJNXUPFLZDQGWPCHEAEQALZYKEHXSFBCLGCVTIXJ");
    msg.plan_size = 41791U;
    msg.change_time = 0.9402542272566974;
    msg.change_sid = 5023U;
    msg.change_sname.assign("YIRLLGEUQDCOODBUCNNOTAJLLXYIDDFXVJAAKMFIMRMYESEIMCVOZOJVYXCRAZUTFHWAXXRLGEZZNJMCKPHBWEKRTXLNGGVHKVZEGGCHYNHOF");
    const char tmp_msg_0[] = {41, -61, 100, -83, 0, -16, 73, 89, 96, -47, 105, -48, 5, -35, -2, 42, 21, 60, 67, -57, 64, 33, -66, -79, 122, -54, 1, 71, -58, -1, 37, 35, -46, -95, -77, 95, -60, 32, 114, 43, -96, 26, 83, 100, 87, -24, 89, -70, -105, -121, -25, 49, -9, 108, 124, 103, -55, -69, 106, 1, -114, -67, -44, 117, -11, -120, -19, -86, -54, 81, -98, 62, 22, -7, -7, 119, -24, -11, -57, -63, 53, 39, 41, 118, -9, -126, -110, -115, 89, 122, 71, -107, -79, 61, 27, 110, 88, 106, -124, -20, 46, -36, -95, 59, 97, 81, 109, -25, -89, 44, -17, 19, -1, -53, 95, -123};
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
    msg.setTimeStamp(0.04304540884213648);
    msg.setSource(9752U);
    msg.setSourceEntity(81U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(148U);
    msg.type = 249U;
    msg.op = 251U;
    msg.request_id = 14662U;
    msg.plan_id.assign("YNQRPIGJPONPGEHWEEZHAKNEJJQXVZXYAWTRLYLQKWTDRZFSZONSZFMNUJFNWCACLVPHSFSOWEMRXZXMWIYCLUBHCTJKOSBSCBCTIXTCDOCGMKJVYMEPJFHQFUKWVDZHVZORMZYFHIRTDVMLPKU");
    msg.flags = 13373U;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.23585620424381792;
    tmp_msg_0.i = 0.9636974301979608;
    tmp_msg_0.d = 0.1402527648449048;
    tmp_msg_0.a = 0.693601595412454;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XHVEPMPBCQWCRBXCFLQRMNUNYCCKLEHQBUEDXSWJPQTAFZRXYX");

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
    msg.setTimeStamp(0.8104727081635855);
    msg.setSource(44676U);
    msg.setSourceEntity(227U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(51U);
    msg.type = 35U;
    msg.op = 190U;
    msg.request_id = 47714U;
    msg.plan_id.assign("CFWQKOORSGUHNEIVFOLZQXKGGWKOVLGCVWJIQNYNBKTCNJXIDFZNMZGULICYJTPNQZUDYJOBKEWAVMBZKHNXWDIHUJHDQMAGVSXYSOKUPMHVENQDSPFZATGFCQYDBLEJFEMYEPLVPZROQEEDXCNRYTFVIZBITUU");
    msg.flags = 37409U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2064394553U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CQJCTMWFGTFVNNEAEVIGSXDHKQSAOMLDJBQKEWKDPBTKDMGEPNBNSCQWXULFYPXVZELQUYAOIUHNLPPXNBDTWOGIOAZXTYUBYKCRJXAVHRKMLDKNYCSLNFIMIVGYABTU");

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
    msg.setTimeStamp(0.30541614475985424);
    msg.setSource(10784U);
    msg.setSourceEntity(155U);
    msg.setDestination(12949U);
    msg.setDestinationEntity(142U);
    msg.type = 127U;
    msg.op = 31U;
    msg.request_id = 32582U;
    msg.plan_id.assign("JUKKBRVQZYBYOVMMZIVBIDZIOWTHDHDCTWVSNYBENFJJKVYKCUJUZMREVD");
    msg.flags = 6256U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 116U;
    tmp_msg_0.eta = 42710U;
    tmp_msg_0.info.assign("WBQVEEVYLOYUIURFMIIXYEIDRLPBFYNJAELLCBHRLPMUVOFGDTHXSZJQVZFCJAAVNXGCKQLDHQNDMRSDXYNAYAQJEURGJLKHFUXFGWJKODASUFUWBJCPXHNZSKPHSSCJXVBTFINCYWQCWDUROCUJZDMKEZINBMALKXZDRSTEOQKJFVQHLWOVIXURBWERHEPPTZCGFICPVOLPXDGHMZYTMWYWAOGGZBSBIYITNQTEVHBGGTMA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZAZTIRGTPAJBZCVEUWMOBRNZEOVGFMANTIRQFNXATGTJESKKWUFQRJBKLOVKSXNUQRNSSXPHVIQIREDTDLHROFMIBQHXBTOZITCLXHGXWHQVCOSQHUCPPCEJSYPUZJYFMVDLHJVEFANZNOAKKIIZBUKWAAHUDVCWNNQYZUEOPGJFRLGXMKXUCPFLLAWMF");

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
    msg.setTimeStamp(0.5539363174879931);
    msg.setSource(50930U);
    msg.setSourceEntity(111U);
    msg.setDestination(31512U);
    msg.setDestinationEntity(89U);
    msg.state = 124U;
    msg.plan_id.assign("BWOMYIHMCLRTMESMZHRLIIHTUBCPDGHWWDXSHSRUVSVKBBNJVOZBZYGQTJFLEGVRRWZJDKVFNVDUFVGNUYZXPKTMYOKU");
    msg.plan_eta = -51107021;
    msg.plan_progress = 0.3713289846762847;
    msg.man_id.assign("RLLSONPAPJSSYGANPARFXQRBQVVKCVADKDCBEWUYVNTTFRGMZPFTOWZAQSHGIDGOLGFNNVEUPBUASEXHWRRMDNZFVHGCUNLHERUXYSMWBMMHKAEDGZUPTKZQ");
    msg.man_type = 44153U;
    msg.man_eta = -161622438;
    msg.last_outcome = 190U;

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
    msg.setTimeStamp(0.8570018609794257);
    msg.setSource(46809U);
    msg.setSourceEntity(45U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(35U);
    msg.state = 78U;
    msg.plan_id.assign("ZZAWEHYIGUKXTXJLVHXVNDMHOJDHURVJSTNYSRFVRCWLGSZTFFDZUOCGI");
    msg.plan_eta = -2007866305;
    msg.plan_progress = 0.30154929472294256;
    msg.man_id.assign("HXFYUYZFUGNZYLBQBPFVDEIFFSVMEKFBIEUBOEKWDRGXRWVSJQWBMNG");
    msg.man_type = 28853U;
    msg.man_eta = 1090415696;
    msg.last_outcome = 201U;

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
    msg.setTimeStamp(0.8458781113878694);
    msg.setSource(5402U);
    msg.setSourceEntity(223U);
    msg.setDestination(7120U);
    msg.setDestinationEntity(61U);
    msg.state = 62U;
    msg.plan_id.assign("HKDYIKAGENXXXOMNXVGFQKTVWKAGDIJEGGWNBARNWUBVCIABVDHBOAZUMZTGCBRSBYOQQJPBPNWREFEVEHFSKEFSTPJLYTJZSRROPLKXFPHLRMODCRPYMSQLKUXWIDSHDJEJYYHSZJUZNKGEQZJQDXVCXCIZNSRYYTAOALOCFPKUFFXQHHR");
    msg.plan_eta = -2110686060;
    msg.plan_progress = 0.19449682884900787;
    msg.man_id.assign("TICTUYWUZTSPKCEUYZGPFAGGIKVJFWHALOHJOGYPDNINUFMQHIAAHCKSZADXKODYWBDMASCVWJJMZFATJMZNWIIUYYMDLMRQKSOVDCYXQPLWHXFIWRXRTLNJPOLGBMFNXQEBVFZAMROGPCTCBGOEEEVSMHLEBHEWBAZUHVNPQIBTPZYQJVXRUUCJPIW");
    msg.man_type = 11278U;
    msg.man_eta = -1338688643;
    msg.last_outcome = 66U;

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
    msg.setTimeStamp(0.9258011229600212);
    msg.setSource(19473U);
    msg.setSourceEntity(179U);
    msg.setDestination(18199U);
    msg.setDestinationEntity(90U);
    msg.name.assign("GABFHTHBLQINEQPJSARYUEMKWFTYXPMVRYKILIOEUVTFLUCXFHOXWWMZWNGGUOKQRRBSXBGZNZZFMCCPTRSSUBLAHNJCZTDZIICIXFSETKCBMB");
    msg.value.assign("RVLJBBAKQZBPLVHYNICPSJQBWSCEVRROQXGUNDYVSKVCQWVZMUAJFPNNIDIPYJKNSHKOWMKCMEGKYDHLGUZDUFHEZEKOXLHOZPXFWTSWAMZXLUSUXAIVRYAOLDPTPLCMQYFVVWLXRXIIPDOIBGYTHFZBLCCTSAW");
    msg.type = 104U;
    msg.access = 137U;

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
    msg.setTimeStamp(0.5083743696431685);
    msg.setSource(40690U);
    msg.setSourceEntity(154U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(247U);
    msg.name.assign("ZMXGKSFAZDXEJRXHKPOTBZYDHQNIOSATIUUAJEYFJLBYMGZMBQSYLLOYANPHBSFTCZQFIGVAUCSWRTZRMLGXWZTXQZOOLJNMYTRDFNPLFWCGRHQF");
    msg.value.assign("AYVYZVRDMPQMPETGRECEDXW");
    msg.type = 104U;
    msg.access = 187U;

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
    msg.setTimeStamp(0.2929392510896708);
    msg.setSource(40771U);
    msg.setSourceEntity(236U);
    msg.setDestination(15586U);
    msg.setDestinationEntity(116U);
    msg.name.assign("WJYHBUMHXBYUIRMTGESXFOHAJHWCUNWPCQSTJZWCZBIBFYMJBRDGUNFRAYACSAQIYWJMWRQVZCIK");
    msg.value.assign("QZOJIXQLTNNNQZCTSMMNIRXLBKOWPOLJPLFUNUKPIOMAVMYBZZPCNHJCIKMMGIQCDBTCEFEDFRYNDGRVBPODMQCPBPHRWDYEESCGNMCJFSPHYLDAFTABLWSRXSEKKYJQQYWUMOLIRSJCKWQPRSSAUJDEGVVFTXAVSXU");
    msg.type = 107U;
    msg.access = 107U;

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
    msg.setTimeStamp(0.7588931749278436);
    msg.setSource(55055U);
    msg.setSourceEntity(81U);
    msg.setDestination(38809U);
    msg.setDestinationEntity(122U);
    msg.cmd = 74U;
    msg.op = 217U;
    msg.plan_id.assign("JQIWGCOCLPMUPIIBFDUACOZRJCQEGKAJBQOUNLQKOMAWYXOBHPRHXVWAGIDCTGEXGPRHOEKVPQTKQEPCFSAVZJTGVZLWJAYNZIBKFTMWAYGIGWDNODLDBIDQLXLERRHNRIDVONQZAUEWEMYRBWRMMVSYESJKXRLUYUUFBAKYKPZFGGPHXXRYJIMHTFHZLVD");
    msg.params.assign("FBAYWUNPMMUMKOKYVHHJTDUC");

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
    msg.setTimeStamp(0.5799978039227193);
    msg.setSource(61598U);
    msg.setSourceEntity(48U);
    msg.setDestination(46088U);
    msg.setDestinationEntity(163U);
    msg.cmd = 66U;
    msg.op = 139U;
    msg.plan_id.assign("WADCWIDRPHSPOXBMWNZJJQMNYSAAEEYYVHOLUGZDXRBUZFXDCOULOYBXJQKTCJXMIVULRAOBFPFISPYZHGZEGMCDLZLHFSCMVTMHQWSODQCJQYCJWCSQIWMAYGKQHPTDONHLASEXXKNZTBTLWBJXUEGDRJFLSRGKEGFKUNALNVEVKAYKIFMNKVOTNOPFPGKLMZUSRAUERBPBHWTRTRIEUDFDGXQHOTCNIFVWVIX");
    msg.params.assign("FFFZNASGGPJNSMHMTDUPBIRQBUHRSGWOVCKZQPOHBPAAMODKKXECHKLEWZCBDGQWUJUOELBASVDGLVRZNMWYDOLNSLYBFEORYZWPGVDYRCXVKXGQFNSNZJONJRDMWIHCLPCIUQGSTCPSRVSUSOEMNLTFGITQXAIUIVMCMTGR");

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
    msg.setTimeStamp(0.5111406972183401);
    msg.setSource(48020U);
    msg.setSourceEntity(42U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(22U);
    msg.cmd = 156U;
    msg.op = 106U;
    msg.plan_id.assign("UHXUUUPNRWZRSVFCYBMGIKALWIAIVFBZYJNNZFARNYJCFCDJQSTAIVMTAJKESNRNEMKIQHKFUZMCIBWTOBWQFXAEBZQZYVWSGYHCXPCSSFWPDVLOHGVLPGBQKMBKOTOELSUJNIKDDGUNJUDPCJWBMGFUEKVMLRQBIGXDTPTKXZRQWXREDNKMLHRPHUCNSJXTJRZELSCEOJYLTPGLGFAXOVXTPHMG");
    msg.params.assign("FQPODIPKYIBSXQRKNMRBRHLLAICJAZOAYLUDFRJOMOUXVBWGDDNBEFCYTITKBVNJDKVKKPTZIXLOEPBVESUSWKKDDXLEFZYAXWMOFFCVTZOOVLBZYVQESNZPQQRXJQCYXUFMMJZRSYGIZARUJTSQPLUFDJPNEUINWTPIGHBQOHZHUTNPANKYWXLCEMXOSDMGEHXIVGAWTQGGAHPHEYHSASMRJBGQYDVCWUACLHKBJS");

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
    msg.setTimeStamp(0.5241582378090447);
    msg.setSource(13793U);
    msg.setSourceEntity(165U);
    msg.setDestination(6110U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.6968761863364449;
    msg.lon = 0.4769108400087847;
    msg.depth = 0.2649735973670988;
    msg.roll = 0.7421394757073666;
    msg.pitch = 0.9243756750124602;
    msg.yaw = 0.0561533803334775;
    msg.rcp_time = 0.7908901530558015;
    msg.sid.assign("BJTVRMAPOPOCVXKLLNJUMHVGVZMWUFUPLEIVJNJZKHGQYCAUAYYDFBDCRWVDFFDEEAOPOXMYMYBLLEWEZSXPPJYOLWRGKAWRWVZINUNSSGFRAGPCIAFVCSJYBVABQTMJNTSGBI");
    msg.s_type = 202U;

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
    msg.setTimeStamp(0.8892923170915761);
    msg.setSource(7831U);
    msg.setSourceEntity(73U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.12554504588698223;
    msg.lon = 0.01429874254580843;
    msg.depth = 0.23278454787697556;
    msg.roll = 0.40197959071911193;
    msg.pitch = 0.9745936105851634;
    msg.yaw = 0.8460034342087556;
    msg.rcp_time = 0.9380965450465792;
    msg.sid.assign("VRTCDWOQGRSCOTNAFYPOWIMQGEDDNEKSPBUHSIEEKCAEFUBSI");
    msg.s_type = 230U;

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
    msg.setTimeStamp(0.5714980909037765);
    msg.setSource(907U);
    msg.setSourceEntity(55U);
    msg.setDestination(1603U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.8416135887688607;
    msg.lon = 0.43882386889703073;
    msg.depth = 0.3948731683190688;
    msg.roll = 0.38353296029925776;
    msg.pitch = 0.9973583872674979;
    msg.yaw = 0.47354274777309735;
    msg.rcp_time = 0.7471274528381272;
    msg.sid.assign("OLJHGCOPFMWMIZXXSIORRMJXFXVRRKSKMOAQSUPUZXBZUIEEEAAPPUNHHYZBBQRLSECOVEAOYYTBGKCLJBWZNEBCGKVAAYLWKRGKHFVMHYTLAGFXTMVHPKCMWGLLQGNNYKJLJLRNXHTZZODWDEIQISDPUGBVPBVCIDTSYQTDSFNVHSPKUYCYVBNPNNQSGWQWEXGEJFTIUMYFDSJUWOAPDDFMOZZXQBLJC");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.6693028057168141);
    msg.setSource(3890U);
    msg.setSourceEntity(116U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(168U);
    msg.id.assign("YNBTAOYXCSOERAHQADXSBHTGQSCXTSZGEMCJTUJHVXGWKPVXMDCVNLHXACLNZIWXRKALRZQVVBJHQMQEEFWNPKLKFPWURLMAZULMNOMNWBTXHYEDORI");
    msg.sensor_class.assign("HFSZRYGMLGJGZUIHEDYVCTQLHXVIXKSFAPLZFRBKPXCMOOHVJTD");
    msg.lat = 0.6412473743899364;
    msg.lon = 0.8778334049044425;
    msg.alt = 0.17438853971603108;
    msg.heading = 0.7286406519432623;
    msg.data.assign("APEBIFSLWMWGQRZSNRNWDYKJJKHMTXCBUYKDZUVICTLMTCPTZUFGTXVGFJRLTYPAMOBFVUWDIPDOXQXKCGPPSFHTGLECACAROLKQRSJGYEZCQDSWAJCABBLEZCHIWNXYJROVNFOEKUNALVLMWYOXSEDQQZB");

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
    msg.setTimeStamp(0.1718752821351951);
    msg.setSource(31162U);
    msg.setSourceEntity(67U);
    msg.setDestination(26418U);
    msg.setDestinationEntity(72U);
    msg.id.assign("JBYXNQZSQVDVWIRGSMQPMLCSYELZFMDVMFPUCAWUZGZZJAAOZFCMKIDNOJZYTQWGLKBDUCQ");
    msg.sensor_class.assign("KPRELXJVGMQPLUPWFELKGHWGHWLTOOQHBVUGAKF");
    msg.lat = 0.09477333446505398;
    msg.lon = 0.5835878058435169;
    msg.alt = 0.9008609868575349;
    msg.heading = 0.7814032074444818;
    msg.data.assign("ZDIBZGJYRWYWXMZEPPZIKQPQCRLGLWVADCEYHXSPVUFFKTBUMWPUROAWMCOKCITADBCZXERJWTXOFAHMBOQXJXDQWIVHRJWXKAFTJMGOHNBUVFYKOHQFGKFSCXJKPTLMYHNSQSIBLHGVDLZUVAUZH");

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
    msg.setTimeStamp(0.8040042095086084);
    msg.setSource(4932U);
    msg.setSourceEntity(73U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(249U);
    msg.id.assign("JYBFYQFWNAZXALNHHOIGFYOQWADYSHUWVSPKHEGKZAYNATIRKBLYVMCFOQEOTSTKKTERMUGZWUJSBYNGSCBXLFTXHJZCMPAQGMLJPDSIDKYZZWFNDJZTBHVQPWPJRDGMGYLXTFDTHCMHFLAQRCEVUXDOANCUWGQXILRBMZLUJRSXBOJMPVPUROOEWWICUEXUCXIIWOPBBSIMQQRNCZPSORLJJNVUEAQDHK");
    msg.sensor_class.assign("USDACXYEDLTREBETZVPGVLKFCIHEAQICBSIBDOQKPLGKGSGDWTTXYVJFPLTHPZSWXZSOSFMXTMGRHPURRWBNMHUMSIDNYAMAO");
    msg.lat = 0.46277940076801616;
    msg.lon = 0.5035910750748375;
    msg.alt = 0.15368128097909894;
    msg.heading = 0.06210135760537716;
    msg.data.assign("DCWRZNONDMKFOYLDIEPUHLLCKIHXQABYGPBORWLOXQHIIEVGCVUOCVNZTIJJSHBMLZRGGOTBNKBIYDXYZPDSZGEARNOKDNNATCMLE");

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
    msg.setTimeStamp(0.21857458379822425);
    msg.setSource(22784U);
    msg.setSourceEntity(220U);
    msg.setDestination(2755U);
    msg.setDestinationEntity(234U);
    msg.id.assign("AYIRENKNQXLRVIBGLXKIRYAUUJGNSMDZKOPNHUYYQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RTVRLPYWCIJBHSQDYJTOSXRXOEGLROAMEBNTAPNSDYOLQ");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 109U;
    tmp_msg_0.rgb_green = 33U;
    tmp_msg_0.rgb_blue = 228U;
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
    msg.setTimeStamp(0.04918020279623092);
    msg.setSource(40523U);
    msg.setSourceEntity(118U);
    msg.setDestination(7170U);
    msg.setDestinationEntity(53U);
    msg.id.assign("RLSNCJZJHYNKCEYYRMPVLNHPDRVKHCFKFNJGXTFIIEUDQWZSKXBODQJUNAIEASBLBUKBEAEYLPTGUIDZYCTNACQGMQFBJMWUWXZDRKLMLISH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XYXMEWHRACCQWZQHNVOYKRUFOTCNXELWYPWEAQMIFPPBPKEKGUGADBIRAMWOFFKSMPMZWZIVHDGQEGRXMJQLCWSBTOVYGTFAIVJDXXECIYNUIZQPRWBCHRQDPVBTALXFIURJJ");
    tmp_msg_0.feature_type = 202U;
    tmp_msg_0.rgb_red = 170U;
    tmp_msg_0.rgb_green = 134U;
    tmp_msg_0.rgb_blue = 217U;
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
    msg.setTimeStamp(0.757915820044698);
    msg.setSource(7947U);
    msg.setSourceEntity(219U);
    msg.setDestination(17767U);
    msg.setDestinationEntity(88U);
    msg.id.assign("OPRBWQGOFDZADJMTUYCLKUVATILPLOJGQARBXJGDYVOCIUPCTHMREYLZLINXQDQUDHQEFRYADKFSNBBMHFQEMVNPWUNIKKPMDJEJSIRTZIFQWHSAYEJKNCQYFKIOWUWGIWYWVEQAKOXTVNSURJGXECPENLSHOLZOSFNBLZVHAS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KTKHAQRGIJD");
    tmp_msg_0.feature_type = 95U;
    tmp_msg_0.rgb_red = 49U;
    tmp_msg_0.rgb_green = 76U;
    tmp_msg_0.rgb_blue = 42U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8320150030429079;
    tmp_tmp_msg_0_0.lon = 0.442230046285744;
    tmp_tmp_msg_0_0.alt = 0.04316246927709699;
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
    msg.setTimeStamp(0.6382630917336297);
    msg.setSource(56285U);
    msg.setSourceEntity(192U);
    msg.setDestination(23072U);
    msg.setDestinationEntity(69U);
    msg.id.assign("VGGSAWBBWKAFNSXSYDYYOSDRTHBXVBNDRBBZVJCADKXPEEZDRTGMCMCEWKLZK");
    msg.feature_type = 138U;
    msg.rgb_red = 68U;
    msg.rgb_green = 178U;
    msg.rgb_blue = 89U;

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
    msg.setTimeStamp(0.8385445073016614);
    msg.setSource(54624U);
    msg.setSourceEntity(68U);
    msg.setDestination(13022U);
    msg.setDestinationEntity(19U);
    msg.id.assign("YAQDDVKNUWNCKKTMQSVVGCJDWZCACRSDGUKDARQYFXREGPLDWEWANJXSOUFFXTYTQYLJIYPCAHWHARCGTHGROUONVGWFB");
    msg.feature_type = 238U;
    msg.rgb_red = 96U;
    msg.rgb_green = 49U;
    msg.rgb_blue = 15U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2935553715839019;
    tmp_msg_0.lon = 0.13037962385382929;
    tmp_msg_0.alt = 0.2824932319648782;
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
    msg.setTimeStamp(0.3065104098852657);
    msg.setSource(47015U);
    msg.setSourceEntity(244U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(8U);
    msg.id.assign("MXYNGWFJYWKAUFKASRFJDKMUSMYXSIMEJHRSRVI");
    msg.feature_type = 96U;
    msg.rgb_red = 241U;
    msg.rgb_green = 106U;
    msg.rgb_blue = 120U;

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
    msg.setTimeStamp(0.5384467176689434);
    msg.setSource(12507U);
    msg.setSourceEntity(127U);
    msg.setDestination(50739U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.3478365408905084;
    msg.lon = 0.43265582870492447;
    msg.alt = 0.9129139649546832;

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
    msg.setTimeStamp(0.47456330546906866);
    msg.setSource(15164U);
    msg.setSourceEntity(134U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.9582916013968685;
    msg.lon = 0.7898342760151956;
    msg.alt = 0.9603481046078407;

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
    msg.setTimeStamp(0.5532560829185453);
    msg.setSource(50699U);
    msg.setSourceEntity(107U);
    msg.setDestination(60425U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.8852108367322351;
    msg.lon = 0.2750063505798719;
    msg.alt = 0.6662540510577382;

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
    msg.setTimeStamp(0.7621923646984412);
    msg.setSource(17608U);
    msg.setSourceEntity(229U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(159U);
    msg.type = 219U;
    msg.id.assign("PQQHNLEZAPYVUJWCBDMHNJVXLIOGOQPVKXHDXKIDNNYSPGBKXEPXJLZFJWNCNMRMEKYEZWRWBPUQZGVITTNSHVOTOTW");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 104U;
    tmp_msg_0.range = 0.294713082327522;
    tmp_msg_0.acceptance = 92U;
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
    msg.setTimeStamp(0.10151346804005079);
    msg.setSource(29007U);
    msg.setSourceEntity(111U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(164U);
    msg.type = 110U;
    msg.id.assign("TBUAZTDWULHPIYVDRJHUSHJYKIMPQEKQNYQYKVQZDUUTKASXFZWQROXONXMPVNIMCOENDUZDVJCSNUTHECJQXOHVHOJNEMCZIPTNVWOECLLARAWBAIPLGFJKYBLXDRLYLSMSWULKFAYYMQYKZTTCEVRKIQMEAJZSFDNRFJGTAPIGZSNNLKGMCHDBROXDPGAXWOIMZCVBSXVSSHWFJAREPUMPEHBFCGD");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("TNGSPABGGYYJLKZDJWPTVCPKZBHQNHOITKMSBZURLUUILQNEILOEJVOBDULAAEGSFMXWDVHBTOCCVFCTEERESEYTARRFKPOBCQIXYMEAMGCOHQSFVHWWMKERZHWUMXRUWNAYDXYJSXIGLO");
    tmp_msg_0.timeout = 60375U;
    tmp_msg_0.contents.assign("HGWXZJQVILNPBUFFOJQQYTDRPPFBRSOZHDYLGBTCYXNPVXNQOQHSOEJMHLFDXJNKICVVHGDOLCDJCMRVYZEUIZNKESCHNQSAMEAJPXXUAFMLUBCDPGBGAUXUPWUBHWYZXEIVETSIJKOJSMOTGYFQCRFJWZUWLHQLWIEFWDLKZDYOYBCRAKJIVCDADQFSENZGYHENMKTMTMTTSMUIULGCKEQ");
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
    msg.setTimeStamp(0.5521256822806357);
    msg.setSource(64278U);
    msg.setSourceEntity(90U);
    msg.setDestination(1512U);
    msg.setDestinationEntity(105U);
    msg.type = 201U;
    msg.id.assign("YCYPTQNDJEUHVGDSMRKZFDIFOUBRBBUZWEYNYVCPXSLSUVZLXWSXBJ");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 176U;
    tmp_msg_0.text.assign("LGPRCXREKWLYSEOFXOFDVTMQEPADYYQCHCNILRCZIGNNFAFWZQYUKPQYQNDFZIZGHGLDNXYVVHRQXSHNDZCCAWJGFJEVDBUTGOCSOSTMTFBJAYPCUDJDVLU");
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
    msg.setTimeStamp(0.1259648099058156);
    msg.setSource(53686U);
    msg.setSourceEntity(26U);
    msg.setDestination(16716U);
    msg.setDestinationEntity(107U);
    msg.localname.assign("ANEOEIMKASGNEYNXPASACDLVJHUUTZBFLWCETNMCCYQXRARPGJGUURIKDVOMNZDKWGMOYHFPRVCPFJZKSJDYPPMKYEQKUSBKBHODRBGZOGVOJNLZVQTNDLZYDBWZLIFXZPMPBPGSHGFSECUOZAYQQTGTQJHWQRRRFHHJIWBLXNXJGECXJVIYTBUONAHBHUIEHMMICNESUQVIM");

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
    msg.setTimeStamp(0.12229987220709027);
    msg.setSource(12374U);
    msg.setSourceEntity(227U);
    msg.setDestination(5402U);
    msg.setDestinationEntity(119U);
    msg.localname.assign("VXCJAXCSDTAHTVYSPCZTSYEBDBKIJFLFYVEPYWUCJKYXIQGTRIZRNEWPGXLNRRTPBSKCGNNYRAFWWXEMSOXQJMVTALYGHMODVIMEUIYCVWRQBGZZGKNAZMKUIXAGMCQOOURITMPCJRDDOEFMVZLDAHK");

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
    msg.setTimeStamp(0.7740453575153913);
    msg.setSource(49151U);
    msg.setSourceEntity(166U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("LHNKCJEFPVCKGUREOUIMXYRVQFAVODLATLSVYAEZOFAETPHYDCDCFJIKTSUXSEBSYBWZGKRPTZOH");

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
    msg.setTimeStamp(0.5213151995170439);
    msg.setSource(2308U);
    msg.setSourceEntity(228U);
    msg.setDestination(18617U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("YIUHZSWBRDKPKFCSLAXSCHEBLOQBUIPWEWRQHAZBVXDQANMZRDEQWVKVVASHRQDFLHGZLFTFGISYUXCEXPFQXLQZRVWNTZMEBOTYOKZNMXRTVCKFBIUURBNUOJALUBSSDDYDBRDYMQCBYNIXHVWPOSNWYYXXKZYLIPQJJQEHSFRNUMJMGIWVHFHUJGINYPKGOREXMOHAACEGJFECDKPGOT");
    msg.predicate.assign("PJKNCWPYQZVOPPBAMENDRHXULRGKMMVIDTIFMZVBTYEEOUIIBXWWBRCBLDWUEKYLOTEPJUMLQORUZSAWRPSLABZUTBDWUHRTSYGJCECCCRODJJFTVEDLYVKZFHMOFGKCQPJOWYIIXZWQPOANXTIVAZQADXSSJEMXLZHKLPVKDNQUYUTC");
    msg.attributes.assign("JWZTWRTBPWODQPTPHITAGNBDAMQSQZIHREJDQHEFDHWSATSVQCPNSOZYIWFBHNLXXECCXMESWNZLUSCNHKGRLVJZKPCIHJRJLMRLVNVDDTVFUMHGUTJPQGXYUEUYUGOBEZYIAWOYRCQAGJIOLAMTRZCQFGCXYOCFTIIALBW");

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
    msg.setTimeStamp(0.6038828804435832);
    msg.setSource(56830U);
    msg.setSourceEntity(47U);
    msg.setDestination(17371U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("KYZZQVWXMZFMHRHAJFLLMGGXUNSSEVNLHFTFSBPQDKFJZDKENRZKRHOBRZUOGEOWDEXKHMBWWAVLZXDHVAIXOROWOOIFHIVBNWPYFPBTCIVYRGWMATCUXQYLPDJDZEPUHTNXQEEUTCMJRROSVNTQDSACDPYPAMINLJJGLPAFRGBBYKGDTJYEMZBWUGKGHFSTXBZUQNWQETVEYQQUBILKJASUIXMDIPFIYLPKVNSNLMSCQAJCARKS");
    msg.predicate.assign("BVSVRYKRQXLYAFQVEJUYOUESKILBKAGREIEHKKAJUTQGGWWFHHOQYVSZNLAXPOEOJDRBBVNWVYZDDWXTHSFWTNGNNLIFIVDHAPJOZWWXKDQOOXICPMCUSXDUFZQMDFQJRAYHTZVBGRRGJKVZWWCLKM");
    msg.attributes.assign("CJCGWBJYSSKHTMQUSVVHPFABQGYLQYRIYHZF");

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
    msg.setTimeStamp(0.770636060455804);
    msg.setSource(38438U);
    msg.setSourceEntity(2U);
    msg.setDestination(56465U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("JJUTNBMJKXCBDBZAIWPYUEABKLVBHBBLINWSOLVKONSGMGQMHCKCXAZPTQUPZFKFGCFEVARWDKIOJOXFWWOQOTAZSJMSCHENZGVCPPYAIFJBOYSQNMQRKMTHQOXNGEUAJGKAXLIRJLQSDRFUVAYBVFEFYCKLWCNSDITIOXFEXDLNITKWVICZJMLHJHODZHURDEWCZUNGPDNZAU");
    msg.predicate.assign("VHXVTLTAFRZJOSJEILGKDHJOGMUIOXAUAOPYOYSQAZCFUVKKJESKBPZWMQGJHJYFCKIFHHDNLKBRMZQOSTWMTGJNCZWWPQAXMCCUHZBBWNGHWNMU");
    msg.attributes.assign("DQOMZIRWHSMGLZVMXSSKJOLVSXNOSSAIWPTNWBXMDCLOMVQSWTXUNHGEJVPGDFAPCZRPXOXPGYBIYHWKTQIFCFYDWCONIGNLEGBRVBMAQFUNKJUVTZQZAHGBKLYBYMULXJIVFJJXPOTQKZJDSBZIRPEYZAGHGRVWANVYFCXKFRUYBFEFJRTLULEHELWSJMWFAV");

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
    msg.setTimeStamp(0.4804113118699995);
    msg.setSource(64387U);
    msg.setSourceEntity(5U);
    msg.setDestination(49333U);
    msg.setDestinationEntity(130U);
    msg.command = 249U;
    msg.goal_id.assign("TMIMAGVRGLVSHULXDDZONNRCFOPPRTKFHTZAGQSNKSJKYDAFUWBDUXHYKRJNGNWKMANIBFLIPOEYXMJIJSKWSYCLQEGLACUSK");
    msg.goal_xml.assign("TCWUBQVNMGWTQXPPCBDLYFMGIRSJMMOWJTTJXQWJPOEWCHIHCHGYCYAYRQDPTZIUMKGKLOHEW");

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
    msg.setTimeStamp(0.14166061104205108);
    msg.setSource(3479U);
    msg.setSourceEntity(9U);
    msg.setDestination(21475U);
    msg.setDestinationEntity(137U);
    msg.command = 151U;
    msg.goal_id.assign("QJGOQKLMIKNOXEYMRRXGGPHXARHZAYUWCDKXELYMQIGIKWBBSLAGNBWDPNHUHNRDARTKQWKOHQVDEOZCIJCGJVYSDAVPUWFFTCEZYMMDXIHTFWTWNSUNBUJNJCWKGBJGSSSZYREJATEFELEBFUPQYSVXNKPDZVPBPRQIILXOZLQFRT");
    msg.goal_xml.assign("EHQYJXDSGHDHOYRHACQCIVWPBWDYTKWRJOUKKZPSGBWZWXNFAN");

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
    msg.setTimeStamp(0.7605625859472621);
    msg.setSource(56912U);
    msg.setSourceEntity(145U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(238U);
    msg.command = 94U;
    msg.goal_id.assign("RVZYHTNXTEFVXFWZZADKAPPIIFKQJCOMQXZ");
    msg.goal_xml.assign("YPLCWSFSIGDHAHJTFYKQOPHGTSDZIGRTZEEUKKAWOVZNTIEOJIMXDTXNZIJHDJOMOBSWWYSSQDVAXUQGGONENAABOLYMDUGRFWQAMRQOCUNMYPWXNLCWBSPVVNHUFJREFRBDKQXCFNLRKCAEFTICYSUUZXKCIXVRGJBPZCSLUELHMFFYTYIDUGJBSGYPXPPEDLEJQLJMKPCERITYBVUZBIQTCKMJVBLBARZMNKQWDVOHZZFNMHRLHPGVA");

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
    msg.setTimeStamp(0.9829955224151081);
    msg.setSource(50130U);
    msg.setSourceEntity(87U);
    msg.setDestination(4220U);
    msg.setDestinationEntity(137U);
    msg.op = 236U;
    msg.goal_id.assign("RSKGXQQWAUZZHGGHUXACPNEPDYHMUZYFKMFPRBWZCJDLEBYJVQIVZEOREFSSRBDGAHSVISBINNDEHPIWXOBIVBXGDYMKFKXGSRKNKQZBTUONPJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DMNWRFDQIREHBGUVIUWEPJIFGDMOQCYGHSLMINMRQGFTXMFVZDVACRDGSFLHFEATFEDJJSWUIRASKBCTVXASYPSSGATW");
    tmp_msg_0.predicate.assign("ZZUKJOSCXEVRVXPPICYJHPELBDTVACKYNLISARKLGWZFBEUJBAKFUBVYOVRYTPULPEJIQWKUENCZRLQKZOGNFCLWDDWXIYRARYNEDMGPGSUWUGMMFMQBWXIAYJSKTFOVNIGVRHVRWUFLOACLBCXXSTTBZEJNVWMEQIFHTCBXWFTJTWTOAMHYDGHDSUMNOMQUPRNRJHDPHSQAEQGANZDH");
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
    msg.setTimeStamp(0.977916888276238);
    msg.setSource(1960U);
    msg.setSourceEntity(117U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(74U);
    msg.op = 193U;
    msg.goal_id.assign("MVSKHNOUXXLXGSOSPJCCAFJKNZYHTTDTELZJWGGXLGIBJRRUXHFJIUBRCKRCFYJIJFNNUAYTXEYYVQEOQMNRKPKAOXJQKQMZSUWZHTHDXYVREPHMAYNCDQOZVSCDCRPPOFATEVCJDBIKDLVTLBEHYGGVRPCLLFEWABSWJDLLBZXIUOWMBAUKAGMOPOIFSZMQV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ISCKGIBGUKMFRWYCPKPOHTIMYUUETAVMXZXBSUKEPBUDANVJUQMWEQFGRKFAQBYIIXYDWVXXHGTTWEOZCNOXLNQQNPJMFRLGDYUGJQXGLLHXUOTVNLNEZLTUFYVDASPVBSHJCCZYETMPKMMJRTABUWGJRBREOHFYCLGJCDIOSKNDLRSQYMQERCWQPBNONSVKWZEIXHSWVOHPDAFDTORSZQWFBPFLAYBNZSJOVXZGMHDIJHCPIKARF");
    tmp_msg_0.predicate.assign("RLJCNUAWHFQRJASEQRSLADKVGXOTCMQPIVZZMHNOFLIYMQQVVPJCJBNZMHFVGTXBOVPCZHDJDR");
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
    msg.setTimeStamp(0.4230339308939287);
    msg.setSource(57655U);
    msg.setSourceEntity(219U);
    msg.setDestination(10842U);
    msg.setDestinationEntity(86U);
    msg.op = 209U;
    msg.goal_id.assign("VWBRZXCIJOINMAAHRGTLAVKNQYWPRKOIUJFATUMQAHQGVZIFZIHPNDXFSMKYSFTJCVCEHIMLSSRPJZLZXCMOHAKQXEZAUDYXBZXKQTXBGDCNPQYDFUEXQDUJFRBEPRHBYOTTIVOJRXNENIFAUKKVQIVWTGY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LJJFBAGYMKVYXACFCQTYTGIGRXMSDHRXCDPVTXWBNVCJUUFNWJKRSR");
    tmp_msg_0.predicate.assign("SBWODHATPRTLXVWVFUPJKMZCYULKBBJCTZKWGIPAVBZFRSATGOOUMUQDLPXCYHGISAMJBOOIKXFPPJSEXCNUUKYXRZB");
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
    msg.setTimeStamp(0.3629013821437389);
    msg.setSource(48744U);
    msg.setSourceEntity(224U);
    msg.setDestination(39258U);
    msg.setDestinationEntity(142U);
    msg.name.assign("IBIBUUZLXJKVASTX");
    msg.attr_type = 35U;
    msg.min.assign("LRJDYDTMGZFRISGXVFGCNAQBIKCEMEJXOJVLDMAYCUDZWPVRHKYWNGHBRXKATBJMWFSCFAIBWKRWUQDQPZPVOUUZLJDHBACBHWTQJAOKAEYMJSGCUNIOGOQSSHQDTXRGAMXIRRULHTOGPFSJLPRQMBSSWJFTPFEXMTGIITQKDPYMXZLNRIYOEHQINXKEUOLYW");
    msg.max.assign("HZYMLUGBWNYRMAKDMPPRRGFQSZCSQBGCJFAQTBFCPXROOBZBDASKVPAOKEXVXFIAYCLSKMWFIHFHJZXFXVSAEMONRYMCVEWBDSQGORKZEPHTLLNUPLMNGWYQVYBZ");

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
    msg.setTimeStamp(0.1561400362540969);
    msg.setSource(25170U);
    msg.setSourceEntity(247U);
    msg.setDestination(41254U);
    msg.setDestinationEntity(12U);
    msg.name.assign("KZVISWXZZIHTVTAAIQLVWPAWZOLCELCDJYKSFRDMZYTQGXPAVOYMUOEQQRQBWDGPGPCLFOIEJVFSKHIHZWIQBO");
    msg.attr_type = 179U;
    msg.min.assign("GDUFTAOJCWVTYZNAILGRNBGGOTIQDDBYSBQWTNOXRKUBZVUHQHRJLMMPLCLSDMLXYRVCXIMRPPNQHFVEONVJWYFATEZLGGETPNFFNLCCYUQSDOERHBJNSCFZKZYUISJEWL");
    msg.max.assign("MAUULHJBZFWOEIRNQETLALDUBKWLFKGKJYPBPGGYJQRDAQEVC");

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
    msg.setTimeStamp(0.2903598793808918);
    msg.setSource(63707U);
    msg.setSourceEntity(84U);
    msg.setDestination(60235U);
    msg.setDestinationEntity(82U);
    msg.name.assign("KEZJCDYVOUDBKUQMYTQIIUYNFHYFLTRXGQLFMCJCLQFAMSUOTSXTHIAWOLHTBOYJMRJKPXNPZGUETLAPXMWCDEIBZUUN");
    msg.attr_type = 57U;
    msg.min.assign("TUQPADXTWIMLBRXHYVFZNECGSHUKCGCOOOIKNEIIUDSYQGAZHLJRYXLXBJDFHLJS");
    msg.max.assign("CJQJWRSTZCYZ");

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
    msg.setTimeStamp(0.3721264539080973);
    msg.setSource(41563U);
    msg.setSourceEntity(220U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("RHHBSCYRLYMHTLRZKCEKBPDKUDIQEYKTOYRPYHWRWZTXLFVSDXTUZRGIYIEFYWECNOOSVHAZBLRZWJVMZLIVICGZUPILEQAXCCSJJZFNPQQAYCWHDRJETCFOKTXXXVFZNPVTOFQBHPFGHNRIVTQGQMMDPLIJHAASPAEGVJLSKIUQGQTKOXY");
    msg.predicate.assign("SPCVJFJNJZYXSGGRESMHFQYZYEUXTLNSVKSJFNKBCPTAZYDXNXQCZYYGFBXKJDIVAPNLIYUAWEGOPOIQVHLGFISYHXATTPLUOQERZKRPUJFRKBOE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IHUDVCJQNSXXYMBCMXRQGQZEYPWDDNTIEABUEVIWKZCFOJIULHKNZPYRSVMDVPIZVTASTLNLRQTJOTIWFHPUGZGBBSSKROZLPBKKUDMQNRLPTHNRERTWGOGDWVJHCFXOSQQKOIPGYEFBGVAGKUAHZCEAWOCKLJY");
    tmp_msg_0.attr_type = 33U;
    tmp_msg_0.min.assign("NKXVGYZBWKNCZTMPSCOXFH");
    tmp_msg_0.max.assign("KVUJNFEYVRPCPZMSXTDEZPVGQCIMMSULWXAZQLPJCWDRITXCXKAGICHXWTZBNBNPACYNSEROLOBTNFKOP");
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
    msg.setTimeStamp(0.20467178117456353);
    msg.setSource(25281U);
    msg.setSourceEntity(159U);
    msg.setDestination(36216U);
    msg.setDestinationEntity(20U);
    msg.timeline.assign("JLFKCHDRJGSTUQ");
    msg.predicate.assign("QEYARDSAPDKOKBBHBKZJRQSLRJNHXORKZWTLFIPUKLYESRRCNYTYCFWAIXZYKXCHBOWPWMACARWZIAGYQAFIYCVMRIPNCGMENZHLSOTVVZVSZUSCXKJIVZLFWXPLBIBKYUHTJGKPLTDCWMMPMDLTRAQIUSTOUXUXHEWOCYMFEDEMQS");

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
    msg.setTimeStamp(0.4185278106956678);
    msg.setSource(21972U);
    msg.setSourceEntity(101U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("BFFDONMSELXVNEIPUZXGITCYBHQKLUEAYZXYMXCKTQFHJALSQOPTQUGHORJXFMLCGSWWOQKEEACZVGPKIGMWAVUFPJHWOLNBEVWGNZBUPQYTNBCFBILYSJDUDUEXDWJAADISPCVWXZCRWIINXKJRSHTAHTRLGNJSHMSERRVGOFJVMPLKVFTYUPMZMAOYQKDMIDIFIOBDGBOPYSJQWXZNECAK");
    msg.predicate.assign("HGEQVCKUEBBWPDVDLRQFBZSPWCHBOAGRLAOYDOMSVKAOTZQJEEFQUQOCTNENWKEBIQZZCRITXUGZLNJKUNSSEHVFDXDRMIQYASWAVIHYFEBLTZCDSAMYRDJNOKNJGTVRUXYCUPSKBSVXMMCLIABHSVKJYMPDFFRQWAEGJPIHPLJLQXMFGSNHFGAJYFMTQCPYOPXNBRTWUZVBWAPG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YZFPSLUEWZONKXLYUIHCMENFMKXVPHVRGMHXLK");
    tmp_msg_0.attr_type = 205U;
    tmp_msg_0.min.assign("BJLZWBYMXXYJVEIBFTCONGJGHIUUTOAZYCXHRRAGAYLCTYXMIRFVPWBWWRSGMRVNCAGJIQKSBHQXUVECKIDKGGQFOSHNCBVVDMSNXDLFRSJBEPMVQIPHTSQJEFQLPSQKGRLDUUEDHZIJNLFWYKXYZQQJMBNRDZCCWAKZ");
    tmp_msg_0.max.assign("IMVZDEFKQMEJCZCWKGLVLVUDHGMHISDHQTCBSEYIABQIRDNPWQTJDSVUSACWIEGIINYIMXRHAOXDEJUPVZEGUAUDPSYVNYCFBNQNWFZLJLLZGSZQRMTUXJSCBUENGBHZFHMYZAASQPELHJTPRPBYXYSJDZUPBGQKWIXDUWRBFCOM");
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
    msg.setTimeStamp(0.415855502294308);
    msg.setSource(26499U);
    msg.setSourceEntity(108U);
    msg.setDestination(62768U);
    msg.setDestinationEntity(107U);
    msg.reactor.assign("PHGEKBMATBQSPQKBXFBTANWTZJBTQUAJGBDGRORQEQUQIXWZAFPMKJNYKBTEDBOOFHGXEZMPILRHCHOORTDSXOAMAPLLUNRMLWAQKIVERKCMOHUPBVYKWONWXPWWVPMFMVBGFDNUPUZFXNOUKSQEJZZSTHDZWDMNWDYDCZRSZJCJEUEYYYVSHIRKYUEIGTIFCMHCLAXHKASSDNSIJVCRFJYWCO");

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
    msg.setTimeStamp(0.544582615661999);
    msg.setSource(11503U);
    msg.setSourceEntity(126U);
    msg.setDestination(37259U);
    msg.setDestinationEntity(137U);
    msg.reactor.assign("UYQNQOUZGHSTSIVGVNTYMVFWZEQDPZDNTUWRDYLJHYGSEERKRZLFDVABMYACKQVLZSVLBMIGWZVUJTXWLOFGOOBQOXWITHLLFNFJMPPDJCJKFNKWOWLZGCPZTNFBWDURKONJEYQOVETNCPMXRBCCIDXXAQQIVL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XGPXYKFOANSRKEZWETTHHFYMDRJUSMMWRPEDLHDAIFBMZDEFBQPNHTTAHCJCOCUACBHRGPJLQDNGIHMZWCMGAQXRTCRQCSIANFWHDFXIZ");
    tmp_msg_0.predicate.assign("IBJNNETCUFBJZUHJOBLLY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JARMHVFYBMEPREVWIQZDVIVMWVAPQFXNTDWAOHJDRJBMOMIHPQSTMXGYFURZYXPSCUQHCRBKNQOEUZMJLNJPKKELETKFNTWTXWYFYGWDFLPMURZKGBQSPNKSPDZEQATZNFCGCVQJUOZSAAHUADHNXLDGMJTAKXXSGINUDISEBSWZWJEGCRVHPCGLTMRBXUZCBOHHOFBGIKISWXGPICTZBLJNYQRSYIFKVQDLJRTAUIOCUWDVCNKBLLEYLXYY");
    tmp_tmp_msg_0_0.attr_type = 223U;
    tmp_tmp_msg_0_0.min.assign("EBOHJJZIIODSNPLIEKSBGHFOXTKZNTTAVCUCMCWXMITARXMDNUADZNIJSPTFYYRJYYDHHLOMPGLUBGYPMYHYVIVBTJBTREVGULSIPRJLUXFQSCDGXQQUMQUWDRQOXEFLNJAGBEVGSFQZZJCOCAEATFWNHIWBKTKREGVQMWGDMAKPILOLFOKPHKXCHDNWAMNSCYPX");
    tmp_tmp_msg_0_0.max.assign("QKTNXOZHBOVRKCWAQIELFOXUAUANQEEBNJBSULIBJXNJNYVBLT");
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
    msg.setTimeStamp(0.2434889748029747);
    msg.setSource(44745U);
    msg.setSourceEntity(9U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("VZBMYYCXJDLXTYLTNPWKRXWGNFKADWAQISKRJXSHUXFHBDNGXUAEXDUAENBKOHYQCETOFWTKAWRYFQQTQJPSAUWWF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DNXKCBXEFJDKLKTSDJGXPIUBRQYIBHFMZWPHBMEXTEZHAKNHGLUTQUHNLSCACOALWUXTFETZGPAHKBQWVNGKTJXBJVUIFAEWEERYANOCQPMGCUFGYKFSIIRJPBASRPWGQ");
    tmp_msg_0.predicate.assign("OTVBWHJSHEWIRHZMLEQWTITZLADVAGSRKDWNPZIGBVBABSIPIRRFPBQJDEMFOVCTCHJUOBPEUMPVRTWOQXBSPUTUPZMWBOZKJKPJUWIEKGCLERXUNEFGOXLNGYDOYFVSDZRAOCMN");
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
    msg.setTimeStamp(0.6715909010701819);
    msg.setSource(50399U);
    msg.setSourceEntity(68U);
    msg.setDestination(53949U);
    msg.setDestinationEntity(249U);
    msg.id = 13U;
    msg.width = 47022U;
    msg.height = 55875U;
    msg.widthstep = 31819U;
    msg.channels = 151U;
    msg.depth = 230U;
    msg.finaldata = 185U;
    const char tmp_msg_0[] = {90, 65, 75, 92, -13, -88, 17, -115, -42, 67, 67, -24, -78, 83, -30, 116, -112, 32, 101, -79, 56, 7, -36, -71, -82, -79, -112, 29, -50, 35, 56, -53, 26, -32, 42, 51, -4, 110, 71, -112, -77, -55, -2, -119, 97, 16, 106, -99, -127, 5, 95, -26, 106, 85, 83, -98, 57, -78, -2, -97, -69, 26, -75, 24, 71, -21, -12, -16, 21, -65, -65, 103, 63, -113, 105, 0, 10, 102, 6, 16, 65, -43, -113, 106, -107, 121, 17, 14, -125, 71, -53, -90, 32, -93, 125, 83, -106, -118, 97, 47, 78, -72, -3, 48, -127, -39, 58, -99, -115, 87, -96, 31, -26, -6, -112, -114, -76, 56, -5, 77, 33, -111, 42, 26, -34, -115, -36, 46, 88, 40, -61, 108, 44, -111, -30, 52, -40, 99, -44, -67, 108, -81, 110, -119, -61, -27, 126, -25, -111, -82, 80, -70, 2, -103, -128, 11, -10, 122, 46, 72, 5, -13, 75, 2, -53, -41, -109, 46, -34, 94, 29, 53, 92, -31, 114, 53, 26, 86, -45, -104, -85, -2, 10, 89, -22, 38, -106, -43, 27, 89, 75, -52, -69, -109, 37, -123, -80, 65, -70, 51, 40, 24, -99, 60, 59, -24, -14};
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
    msg.setTimeStamp(0.6560608484381248);
    msg.setSource(2115U);
    msg.setSourceEntity(231U);
    msg.setDestination(42861U);
    msg.setDestinationEntity(246U);
    msg.id = 206U;
    msg.width = 49078U;
    msg.height = 39064U;
    msg.widthstep = 21575U;
    msg.channels = 1U;
    msg.depth = 159U;
    msg.finaldata = 187U;
    const char tmp_msg_0[] = {-34, 46, -78, -5, 97, 12, -76, 8, 19, -31, -3, -100, 105, 89, 77, 53, 50, 33, 28, -70, 116, 62, 31, -55, -33, 60, -102, 4};
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
    msg.setTimeStamp(0.7356599871580851);
    msg.setSource(21133U);
    msg.setSourceEntity(139U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(69U);
    msg.id = 208U;
    msg.width = 59945U;
    msg.height = 65273U;
    msg.widthstep = 6275U;
    msg.channels = 72U;
    msg.depth = 129U;
    msg.finaldata = 25U;
    const char tmp_msg_0[] = {55, 113, -101, 58, -43, 69, -113, 29, 66, -71, -117, -17, -56, 4, 50, -65, 118, 66, 96, -35, 46, -36, 109, 17, -116, 96, -3, -58, 97, 45, 79, -17, -105, -41, 102, -97, 49, -114, 5, -16, -54, -13, 60, 108, 65, -3, 22, 48, 124, 100, 114, -121, 29, 107, -124, 57, -58, 112, 5, -76, -69, 26, 100, 12, 11, -72, 111, -127, -86, -31, -107, 68, -78, 67, 81, 7, -6, -69, 9, -38, -45, 91, 25, 85, 62, 70, -79, 92, 50, 87, 67, -65, 115, 30, -81, 87, -120, -52, -45, -55, 78, -127, -80, 6, -4, 46, 122, -112, -97, -87, 101, 87, 50, -127, 120, 105, -128, -51, 1, 108, 94, 71, 64, 96, 33, -16, 79, 120, -102, 87, 58, 105, 46, -12, 30, 76, -112, 38, 35, 112, 91, 59, 12, 9, -105, 0, 81, 120, 9, -26, 27, 33, -118, -93, -39, 74, 84, 34, -1, 101, 122, -84, 120, -30, -31, -30, -55, -1, -58, 80, -127, -124, 41, -107, 38, 89, -57, -123, 88, 43, 2, -118, 114, 73, -81};
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
    msg.setTimeStamp(0.7462138904955274);
    msg.setSource(43111U);
    msg.setSourceEntity(218U);
    msg.setDestination(43788U);
    msg.setDestinationEntity(83U);
    msg.width = 55740U;
    msg.height = 31831U;
    msg.channels = 232U;
    msg.depth = 212U;
    const char tmp_msg_0[] = {-107, 46, -98, 45, -26, -87, 31, 75, 43, 10, -53, 84, -79, -29, 101, -128, 76, -39, 86, 76, -42, 25, -3, -113, 60, 95, -92, -63, 70, -124, 31, 55, 82, -64, -79, -16, 41, 83, 30, -110, -36, -23, 119, 67, 95, -112, 5, 24, -1, 62, -79, -125, -93, 14, -123, 116, -25, 82, -31, 126, -73, -120, -92, -119, 3, -79, -40, -25, -23, -73, 34, -121, -60, -6, -69, 54, 49, -14, -127, -4, 39, 30, 96, -127, -26, -55, 51, -56, -49, -92, 92, 17, 79, 15, -45, 40, 38, -103, -32, 27, -71, -100, -119, 11, -64, 8, 28, -28, 73, 11, -51, 82, -99, -40, 4, 82, -49, 3, 46, -77, -48, -46, -112, 41, 11, -32, 72, 109, -109, -68, 35, 78, 68, -36, -120, 12, -76, 67, 70, 21, 108, 57, 13, -43, 97, 4, -54, -122, 14, -38, 83, -7, -50, -5, -102, 16, -66, 31, 62, 97, 122, -26, -52, -128, -26, 13, 12, 76, -54, 107, -55, 73, -52, -92, 113, -82, -22, 61, -98, -119, 39, 33, -26, 9, -17, -51, -31, -85, 9, -64, 12, -92, -5, 1, -34, -46, -6, 54, -125, 125, 31, 20, 84, -23, 44, 85, 113, -12, -28, -32, 29, 15, 12, 84, -107, -121, 92, 78, 121, 62, -121, 46, 89, -24, -84, -11, 85, -61, -75, -21, 112, 90, -121, -1, 4};
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
    msg.setTimeStamp(0.24828680656662094);
    msg.setSource(65111U);
    msg.setSourceEntity(55U);
    msg.setDestination(39782U);
    msg.setDestinationEntity(161U);
    msg.width = 36816U;
    msg.height = 29342U;
    msg.channels = 87U;
    msg.depth = 144U;
    const char tmp_msg_0[] = {97, -117, 70, -4, -67, -50, -123, 34, -86, 40, 117, -80, -116, -6, -94, -37, -94, -25, 27, -109, -38, -40, 121, -122, 75, 31, -48, 107, -88, -41, 121, -8, -29, -117, 51, 30, -53, 93, 26, 101, 28, -71, -116, 86, 15, 37, -28, -49, 126, -58, -42, 39, 119, -26, -98, -79, 21, -57, 63, -106, -85, 107, 21, -3, 48, 43, -30, 70, -7, 61, -54, -42, -128, 20, -77, -74, 28, -102, -95, -26, 7, -2, 101, 92, 1, -77, 69, 111, -99, -26, 13, 112, 63, 113, 20, -120, 36, 96, -105, 115, 65, -19, 76, -44, 53, -104, -92, 17, 25, 60, 48, -124, -19, 11, 63, -92, 60, 65, 56, 21, -49, 80, -30, 74, 3, 125, 104, -6, 29, -11, -33, -46, -40, 4, 85, 51, -128, 66, -15, -70, -35, 59, 33, -17, -59, -126, -59, -119, -126, 0, 120, -86, -26, -82, -119, -120, 94, 18, -48, 114, -27, 13, 14, -107, 111, 43, 59, -27, 24, 110, -127, 67, 59, 93, 61, -8, 58, 111, -22, 125, 68, -9, -104, -16, 120, -77, 76, 87, -85, 71, 66, -104, 29, 102, -16, 13, 106, -82, 49, 95, 72, -107, -52, 101, 33, -74, 57, -10, 10, 105, 68, -118, 72, -46, -28, -73, -110, 118, 38, 31, -117, 121, -4};
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
    msg.setTimeStamp(0.913645256553606);
    msg.setSource(22326U);
    msg.setSourceEntity(63U);
    msg.setDestination(5419U);
    msg.setDestinationEntity(186U);
    msg.width = 56763U;
    msg.height = 7304U;
    msg.channels = 241U;
    msg.depth = 175U;
    const char tmp_msg_0[] = {-115, 39, -24, -98, 115, -91, -87, -100, -62, 51, -38, -123, 109, 3, 107, 19, 34, -79, 89, 64, -91, -13, 33, 80, 105, -120, 5, 105, 58, 39, 90, 32, -120, -19, 0, -56, 91, 9, -62, 116, 70, -32, -63, 40, 38, -111, 112, 85, -80, -85, 20, -79, 124, 92, -53, -127, -44, 62, 4, 80, 42, 106, -36, -61, -79, -123, 113, -59, -15, 9, -100, 99, -127, -97, -85, 37, 49, -4, -119, 82, 59, -99, -25, 118, -9, 47, -84, -99, 86, -56, 78, 98, 17, 126, -101, -30, -72, 31, -67, -38, -123, -75, -67, -96, 117, 98, -80, 118, -66, -89, -110, 31, 53, -2, -45, -89, 81, 3, 17, 64, 85, 78, 120, 35, 80, 45, -85, -71, -6, -8, 34, -89, 28, -100, -100, -10, -112, 111, -109, 50, -35, 69, 111, 27, 76, -60, -42, 77, 63, -111, 13, 92, -58, -27, -123, -6, -36, -19, 88, -37, 9, -36, 11, 62, -117, 93, -15, -3, -120, -83, -16, 18, -80, 51, 17, -89, -76, 112, -79, 42, -82, 108, 25, 96};
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
    msg.setTimeStamp(0.3656969058995164);
    msg.setSource(54882U);
    msg.setSourceEntity(151U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(119U);
    msg.frameid = 51U;
    const char tmp_msg_0[] = {73, -23, 12, -34, 14, -101, -21, 41, 110, 34, -73, -5, -10, 72, 30, -87, 119, 5, 118, 0, -48, -73, -70, 98, 88, 63, -58, 67, 113, 112, 21, 54, 76, 62, -78, -67, 46, 72, -107, 73, -12, 57, 64, 62, 42, -73, -124, 69, 56, 107, -15, 107, -14, -41, 56, 83, 57, -95, 47, 103, -46, -118, 49, 66, -102, -66, 111, -10, 112, 112, 71, 52, 84, 64};
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
    msg.setTimeStamp(0.6052512999354733);
    msg.setSource(25802U);
    msg.setSourceEntity(39U);
    msg.setDestination(37808U);
    msg.setDestinationEntity(107U);
    msg.frameid = 183U;
    const char tmp_msg_0[] = {122, -88, 80, 88, -61, 104, 110, -65, 23, 116, -92, 30, -70, -114, -34, -35, -94, -85, 97, 18, -20, -30, -2, 87, 62, 2, -1, -27, 22, 122, 46, 3, 100, 95, -90, -108, 95, 110, -111, 99, 23, -51, -13, 100, -57, 46, 104, -68, -93, -41, 47, -105, -49, -112, -92};
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
    msg.setTimeStamp(0.24470522039666043);
    msg.setSource(6107U);
    msg.setSourceEntity(204U);
    msg.setDestination(19098U);
    msg.setDestinationEntity(16U);
    msg.frameid = 206U;
    const char tmp_msg_0[] = {-118, 126, 123, 80, -14, -52, 104, 111, 33, 23, -54, -1, 0, -100, 90, 67, 37, 107, -28, -33, -73, -18, 91, 74, -97, -58, -59, 118, 78, 13, 32, 93, 65, -101, -5, -57, 101, -126, 45, 67, 45, -45, -8, 92, 122, 75, -13, 93, 42, 79, -89, 126, 112, 16, 41, 111, -29, -14, -51, 17, 120, 8, 109, -121, -64, 45, -126, -87, 17, -28, 6, 26, 50, -55, -59, 35, 69, -32, -18, 123, 22, 67, -113, 64, -59, 110, 106, -23, 42, 65, 41, 92, 118, 78, -81, 39, -112, -7, 71, -125, 101, 24, 34, 89, 6, -5, 58, -3, 43, 36, -36, 51, -48, 9, -124, 79, 11, 107, -103, 41, 120, -53, 57, 61, 126, -17, 37, 50, 13, -113, -58, 116, -23, 112, 9, -21, 125, 103, -40, -73, -72, 66, 103, 67, -42, 43, 23, 64, -128, 39, -77, -99, -55, -64, -96, 37, -43};
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
    msg.setTimeStamp(0.5646763691475608);
    msg.setSource(27917U);
    msg.setSourceEntity(139U);
    msg.setDestination(17395U);
    msg.setDestinationEntity(71U);
    msg.fps = 123U;
    msg.quality = 102U;
    msg.reps = 37U;
    msg.tsize = 156U;

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
    msg.setTimeStamp(0.5455688061730313);
    msg.setSource(59895U);
    msg.setSourceEntity(67U);
    msg.setDestination(44713U);
    msg.setDestinationEntity(217U);
    msg.fps = 133U;
    msg.quality = 43U;
    msg.reps = 172U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.8503840663588903);
    msg.setSource(64562U);
    msg.setSourceEntity(254U);
    msg.setDestination(16057U);
    msg.setDestinationEntity(144U);
    msg.fps = 19U;
    msg.quality = 232U;
    msg.reps = 202U;
    msg.tsize = 31U;

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
    msg.setTimeStamp(0.2811421733789039);
    msg.setSource(4975U);
    msg.setSourceEntity(213U);
    msg.setDestination(18301U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.05863434964599845;
    msg.lon = 0.9550431437675843;
    msg.depth = 194U;
    msg.speed = 0.7922146958347599;
    msg.psi = 0.44302693582178654;

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
    msg.setTimeStamp(0.3855857154034976);
    msg.setSource(59747U);
    msg.setSourceEntity(204U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.8791411390712018;
    msg.lon = 0.6306324242817518;
    msg.depth = 64U;
    msg.speed = 0.2694877023830182;
    msg.psi = 0.8083649154315365;

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
    msg.setTimeStamp(0.025404545095725317);
    msg.setSource(13370U);
    msg.setSourceEntity(91U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.009051065521750168;
    msg.lon = 0.7122930233544907;
    msg.depth = 195U;
    msg.speed = 0.9986476549341634;
    msg.psi = 0.0277913515121051;

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
    msg.setTimeStamp(0.2860708801351318);
    msg.setSource(24450U);
    msg.setSourceEntity(1U);
    msg.setDestination(41963U);
    msg.setDestinationEntity(240U);
    msg.label.assign("NEFCGQLXGALGTRCWJOZMERWDUREKZDGBYMQHVLEPUGKNIWCEBXQMNCBZQPDEILRNUSTSTDDDTPQGLSOABIOBCVIAUFBLRMVNAXSPFJMDINGXHUFKQUAYFCTKFJXPWZJJYLR");
    msg.lat = 0.17903662862261016;
    msg.lon = 0.334981309935487;
    msg.z = 0.21638464923628076;
    msg.z_units = 123U;
    msg.cog = 0.24938803446865931;
    msg.sog = 0.2464544974365931;

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
    msg.setTimeStamp(0.9379881414001952);
    msg.setSource(63474U);
    msg.setSourceEntity(32U);
    msg.setDestination(54269U);
    msg.setDestinationEntity(4U);
    msg.label.assign("FSQRLTTWPZOBAHMVKQIDZSLYHFYEKDAACQGVWVFZDRUDCCGUEXIYHJXPYNLLRTUISWSPKZNRKEREBSDOBVODCTANMFAZLCMWBXPIGIIJGHRHYJVU");
    msg.lat = 0.3123833829864666;
    msg.lon = 0.6849974122341445;
    msg.z = 0.24671068074604707;
    msg.z_units = 241U;
    msg.cog = 0.6930996974291634;
    msg.sog = 0.3737153903336644;

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
    msg.setTimeStamp(0.23488426279449104);
    msg.setSource(25661U);
    msg.setSourceEntity(237U);
    msg.setDestination(354U);
    msg.setDestinationEntity(89U);
    msg.label.assign("WOLHRHPVALLLVUNCTGGNXZVHPZBHOCYRVGWTKXRNGSFFTYXYWAIHQRKKZNCMNLIHOUXDSCQKPUYDMIMRVIFSZIMEEWALDUPSOOLAFKOUBTPMODOZVEJBADYAAHSQYDADQQGNRICURQVNOYPZZQGTIDMNBFWSBEQJQSYXJUBITWOVDHYCWPJMAFHMIUJJP");
    msg.lat = 0.6666712110762443;
    msg.lon = 0.5733903624933662;
    msg.z = 0.6980237661508542;
    msg.z_units = 88U;
    msg.cog = 0.02348041522303812;
    msg.sog = 0.6979844449267361;

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
    msg.setTimeStamp(0.36235174052254937);
    msg.setSource(32692U);
    msg.setSourceEntity(233U);
    msg.setDestination(24791U);
    msg.setDestinationEntity(189U);
    msg.name.assign("GHCYLNRJAJKYRUFLNCRJEQBYKGBESRASXOKVZBIWGAAHPKRBNMQXJJMZSQGHGDYQNBFDIUDESLQWHMMOVJFCSCJOLKWJUXHGSRTQTOUEAIIHPNOCPKNGFDHPBMYPCIZIPKSVDESYMAVIXOIIQVRRWTOBPFLILAWQHTFYLDQTBXQOWGVZCFLVKTETNUUENVZWUEBGSTMVTDDXFAWERZFDFELGTMPXNOHZUJOCJCALUZZMUX");
    msg.value.assign("LHLOSBLTYBZKVWDTCSUBZXOPFESXEFYIHHGSUWCIRSSARLWGUQRNQUEXADWTKHXQBNITKEYXEPOFQVUZCJWPVIJTNHNSOCSPQCHCMGKJDVPIQJDYBRLABBEUVJXYIFKXTGOFWTYOXYMAWKNMIGQZVHZUGTDAFANRHASADKZYZLBZEGKFEMNBRESRETNJFGR");

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
    msg.setTimeStamp(0.03434041470582805);
    msg.setSource(1606U);
    msg.setSourceEntity(139U);
    msg.setDestination(63459U);
    msg.setDestinationEntity(163U);
    msg.name.assign("JNDRKLGUQCEAGBFYYZAGSALBRUEILNPTRSCBCFSDMBOIAZGJYFPGSMHBPUAUOBSHKOGYMRAJLBZYNQDEEFTDHAULUWYQKUTWIGXXKMAXFYH");
    msg.value.assign("GOFBSIBMAYOZZKKRPRTITYNUCRREIMQDEKJLJATRUSGBBHDANAYZHSJVAGRYEVVULYLRGHQTACWCDQDOCIVPEXQWECLQBXBWQNCKBIYPYOIH");

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
    msg.setTimeStamp(0.6271280322948486);
    msg.setSource(13846U);
    msg.setSourceEntity(20U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(148U);
    msg.name.assign("NEETZFMMMQTVXPXPQBJHYOOUVOIROLGAAZCAP");
    msg.value.assign("SCSLSEKTONFKBWCZYCEBCHYOIZGJULRZGJLCWAXBPFHIQQDNPFOTSYWKAAVHCRISZBXSAJQRECIXDNOELQWZTAZUCADIYYZGMBXDTQSUYWMMZOFHVMHHXIRJNVIKFLEYPPABDLEPXURWQEAMIDOGHUHINNTLABPVHLXNQNXOHJKGQVVYJJUUVOKTXZWC");

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
    msg.setTimeStamp(0.9581262428716794);
    msg.setSource(36137U);
    msg.setSourceEntity(211U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(221U);
    msg.name.assign("BSPCBGGNMRVAWLKAJSWREWUPVQLPXFGDVJIZYRUDGXITQADEYLMZPICOBQJNSFGZBJXVFEVYNVFMPRCLPGKUJCZGQHTOBXNHHHVJSAMYZIGDIZZNYJMHLWORRONARDDHYINRNIWLJYPL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YMNEMCYKBTQODFYPNNURGFIAYMZNQQIVOKANDTMZWRJKXPNUUDTXZAFTVXYSOVSWTIARWWLLBSIAHXVKCHUJCOPSJHPKXHCUUSAIOCCALHUDEEGLHHLQWJJWQQRKNXVJHDLYBKFZEVJMJTNORSGDZRZEYXJHEPSULDPMMAFJCRLA");
    tmp_msg_0.value.assign("OAPRQKVGTENSQWJCLDQXUFDOSIAADRSBIVTXENZCWYPUGHNGPTTFKXLIIBFRYCHHGQJTRZCIUOFNILUODYWLFGGGHEEZUSPWZEQVJBVMH");
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
    msg.setTimeStamp(0.1718167911757572);
    msg.setSource(57613U);
    msg.setSourceEntity(153U);
    msg.setDestination(46971U);
    msg.setDestinationEntity(199U);
    msg.name.assign("SEDEMBRYAXCEKCTTIMAAE");

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
    msg.setTimeStamp(0.6173815610337796);
    msg.setSource(29834U);
    msg.setSourceEntity(65U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(58U);
    msg.name.assign("SIZLMBEZPJQQWBUQUTUDHDXTTXNSDROUQAIUPRVGWIHWTFDCEKNZBBCKPTOMWXAGCDKCRYRHIAXGLJHFOINITCKQAUOGZSWBGGKOZBLXLFSDHCZYB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HAZVZTNNTLMBQQYAEADFDSVFHREFZPOBEOWQYQDSJDOGFDJYIBLJEIRGAWCTFCNWRJPITKCBMUGELCRRKLRDMWDNBPYXYGECYHTZTULKNPANKIMBQXMZEYQSSBVUJMKQMIUYQRWLEVZLKBMNGHTGEJFTGWWI");
    tmp_msg_0.value.assign("HJOGFMOKHYKMVAISNTFQCRXTXVPNEMHJQXDEXOMRAERPSRQFNHWKADZFUGZIVBJQHKQHJWNCVXWSEFXDLJPIUCSQERDDBAGTKQLPWBCXYLRIZGZGMXDTUCEYNPAAABOLYWEBMRY");
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
    msg.setTimeStamp(0.6867976583774427);
    msg.setSource(16208U);
    msg.setSourceEntity(215U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KEOCRIXGMPYVCUMKDTVRCDUABUYOLZAUIQTOMNCUJRNRZFJZEAGSPMAKYUMGXRIPAJNFPXMBFLTSQBHUH");
    msg.visibility.assign("WBSHENSJNEPRFMEOLFSIEKLSMOJPOEPZTAAIOFGWDDALTRRWNLYWZYGILOCNTFUJLPYMFEZCVSRXNBWQDYZXKDQSKAJ");
    msg.scope.assign("YAKGFMXUXDXXKFLZQWODFEKUSPATBENAOIHVNIDCNMEOPFHZPWBWCWCZAULZCYJFIHTYCTQETYASXVPYMKPAYYHXUSPFJGGTXNJYRQBMBJOKLBQEKBWODNRSIUKMGXNCSVAUDVVDHSKZIBTEHFBAPURLMGNCSROECDQGEJLCUCAJYHQFUVTSQRRRQMWIGWEDPVPGFWJZZNGNOTSOTMQHISDMJKWMXILBORJAVRVIYRTQLDWGL");

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
    msg.setTimeStamp(0.047609481043327184);
    msg.setSource(63900U);
    msg.setSourceEntity(3U);
    msg.setDestination(18731U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IKXGKWOQAVHFWTSONKPBYQEGRTGIYXSIOROBVWPYCDFRLSFSCCMWNUZZGMNHCNXUGMXSEICXORFFUPJZZMSXADSJMDRSAEMEJWNHRZDJTICQPLLGEALHDLBDSWINUTJVFFWXKFTMGHCAKQOHRVNMOTVTGSPBFBRLUMEKYVBRMPUJBCWECUAEKPDZDXJBJIPVBDZPJZTNOYKKRNWHXQYQTDZYGQZOAQVHUETAIOLIYGVFWLXAYELUHQPIC");
    msg.visibility.assign("XOCUKLGAJOELRRWHNMHRPHPIVUXJUQVADITXYNLOBAWXYJJKUHPNGXBAGNZZBPBYRSUCPOEZQSQZFHFREYVMXQMVCYWCFJQDGLSTFUNBSMXHYWDTCMGEZDKP");
    msg.scope.assign("IVJNATZIUPRTLUFCZSCNSRSTPWFOVSDUBYQKXOPVKLVODFSFEXACPINAMZHJDQ");

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
    msg.setTimeStamp(0.3470121077572773);
    msg.setSource(18212U);
    msg.setSourceEntity(111U);
    msg.setDestination(14384U);
    msg.setDestinationEntity(253U);
    msg.name.assign("BABJIYFZICAEUNUTHBULPXXKVRROMFGZBCUMMIWEFGHNLIBGJQXZSCORSWNZQORMRVIBREKWAXCZDDXLNOKEDDNQKYFFGWOYJDGHEAPCGKZOUVBIVIWQBVZ");
    msg.visibility.assign("PHFAAPEZAYCLOKDBJRPQGINJZMBRTMLPCKYILULPKVZAWMO");
    msg.scope.assign("QKGWZUWDYPRLKYMFFEEODVQQZUPEXNJUUNHKOGALXHJPPUJKZULMOIABUFGJRYCUYPCOOYYELCBNAIJCYABSXOTINANGVOMSQHHMBIBFPZKTSWGBDJERRAZBFWKFBWWXTVDUXHRZADMXELJTYDHDZKRMQAYBTQMIIQVHWSNRZGHENKSDOYCACFJFJT");

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
    msg.setTimeStamp(0.24338606063746793);
    msg.setSource(48434U);
    msg.setSourceEntity(17U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VQWJAMFUOQQXDSZVFFNWLGNJTUISMUAGFCEWBJNJMCDSSCXWXCWRKCYZHORBGAUSIIPHUGALRVVEYUIHXNXCLZRZOZXCKSYLERXVJMYJCKPMTHNKFIFPYHRCETYPRFDATWYJAVZYWLERRCPVPIAMOVKBWSIPXBWONGTKYENDGJLEUOOAJTGDOMZDHDALQOHBQJEFVMDQXMTUNSBPDPLSVBI");

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
    msg.setTimeStamp(0.3607148186467105);
    msg.setSource(14464U);
    msg.setSourceEntity(174U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(202U);
    msg.name.assign("JQVHDTWIGCUTCAYQSZDLEKHBCBFJMTGGLKZQGSWANEZQKXADJSNRNQMMNTFWYUNWVMWWVXJGUKXECZOXHYCEPDJCIASSJWVPVHVGYLYJCRWJFSTSXFXZOCKTYYOSNYSOLMKGOQIHVNWDUPRERCFPRITZMZBVUTIFQIGBHELBUVAFJNFTSXULZPOCRMGLIKUKKAXGLAQPXRMBMYDRIZKHAHRFOBUBIAPFTEBDOJNXERLPQDDBHMIYWDOEV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WMDSVOIQJLPWPHJWAJXTBUGKAENGGIXQTPNLQHHQILEBRCCSNFXIRMBOGHPHWYBJNYRKRDVACEOCULZUSAUEZTOSRLPIZZQWCNQXSYLYMFAKTNYPWMJZROYMEPBDIPRYGIODLNXAMHZVFWWZNUYTKMKEGTXXORK");
    tmp_msg_0.value.assign("REJAUAGNQFTLIUFDIIGWGHQLABZFJXDZDBMDHURQGJOFCZPLTFMDCTZQOMPLSQDHIAYEJZXKTUXECJHTHZWBRMGXXNCCKPBHCEVOFWTYPCSGYWLPWKJYERNDVEXVKARLVUIPVSSQMKYZOTOWEKCNWYRBYYHBZUFRHNYTCBEMOJTKMVABNKONONEFXIAGIZGFIS");
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
    msg.setTimeStamp(0.13176114291234342);
    msg.setSource(12407U);
    msg.setSourceEntity(29U);
    msg.setDestination(22358U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CVNRESODKZCGTLXABUDZHCDGJSZVBSPEGXNJIYRFGMVWAUVQXHMNOEIMBFSLETGPPASIUIXKGHAPINQXJIBOZAKWELVTLQBDNKJLNYVOAFVXWMOIYOCEQFUHYKBJKLPESZSGZMYPVRTWRNQXHJDIING");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OURFEHQOZAHTPHOQVTUCRAOADMIMIIEUMEVZDLGQYOJHNSUNOSASYBOVPQAKTGQDJCJNGMTOCJBHVOOAABDLNJFFKKWRYPVFESLBSMUPTLCDZHGTFQPCYVMEGDUZIGEHZNPVJDISKRTSKBQK");
    tmp_msg_0.value.assign("SWYKWYVPNYMOSASIUNCYFZTMYLHEKPGCTTNYIKHEHQAHJGCXOJQCDCGUGRUDWXUIRFAZNVTDEMVYDWDVKELQUOQ");
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
    msg.setTimeStamp(0.4299310599260646);
    msg.setSource(34173U);
    msg.setSourceEntity(170U);
    msg.setDestination(23614U);
    msg.setDestinationEntity(198U);
    msg.name.assign("VRAOSNKGZVOXEHJLYLHK");

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
    msg.setTimeStamp(0.02268265876900699);
    msg.setSource(41741U);
    msg.setSourceEntity(86U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TSSAYZNHEKIFHFLVLQHRNHCIWCKGXFNRTMPGSCJOIJPPTZYXZEGTAGZTZRTYU");

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
    msg.setTimeStamp(0.465478182685247);
    msg.setSource(47125U);
    msg.setSourceEntity(163U);
    msg.setDestination(18811U);
    msg.setDestinationEntity(67U);
    msg.name.assign("UBMHEXCMZYBQQCOYMSFJZKIVWXBVQGUHCQMJMTZBQPTUYWLDWDTAFYSIHWAAFDMSJNIOUVZKYLBNIJVRQRLVESLKLTVKYTALCBOJTMPHWRTAPXEGCPRSCKULBZKSGKTNSOEZJXZMXOTZNGUNNPQHSXQXTLUWADMOEIXERARP");

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
    msg.setTimeStamp(0.8018547837049915);
    msg.setSource(33537U);
    msg.setSourceEntity(38U);
    msg.setDestination(41379U);
    msg.setDestinationEntity(36U);
    msg.timeout = 3658537227U;

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
    msg.setTimeStamp(0.5054263916525134);
    msg.setSource(37358U);
    msg.setSourceEntity(96U);
    msg.setDestination(44620U);
    msg.setDestinationEntity(253U);
    msg.timeout = 657843489U;

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
    msg.setTimeStamp(0.7574834251497298);
    msg.setSource(65355U);
    msg.setSourceEntity(180U);
    msg.setDestination(34557U);
    msg.setDestinationEntity(89U);
    msg.timeout = 3040608315U;

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
    msg.setTimeStamp(0.8491764874337944);
    msg.setSource(41941U);
    msg.setSourceEntity(218U);
    msg.setDestination(10873U);
    msg.setDestinationEntity(93U);
    msg.sessid = 87361120U;

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
    msg.setTimeStamp(0.7580484709123826);
    msg.setSource(5142U);
    msg.setSourceEntity(70U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(203U);
    msg.sessid = 251773382U;

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
    msg.setTimeStamp(0.7435024613742178);
    msg.setSource(5770U);
    msg.setSourceEntity(227U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(248U);
    msg.sessid = 3905619297U;

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
    msg.setTimeStamp(0.8648174705792606);
    msg.setSource(60006U);
    msg.setSourceEntity(226U);
    msg.setDestination(8938U);
    msg.setDestinationEntity(29U);
    msg.sessid = 4028193729U;
    msg.messages.assign("OONIEBDVIKLYINZTHSCQNFWPFQMRCLLOZZWGTUFZFGMZEUQIGEIYODFAGKXGAXCHDSKYHGFMUQUUSBYYSQUNIWSDANYHNRRCIYOVPMCXMBJPRLUKZMLBVFBSIERXKTKHOTZVDJJPXFJMD");

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
    msg.setTimeStamp(0.9726534299154915);
    msg.setSource(11348U);
    msg.setSourceEntity(202U);
    msg.setDestination(46654U);
    msg.setDestinationEntity(150U);
    msg.sessid = 249755096U;
    msg.messages.assign("JZXVKCGTEFRATLWPAZSKYDBAPXUKFMBOMKHTXBWMIQXQLNOSDHUEGMVETVRKGHRDUMCJOLDXNEFORCPUSLGTBIMHDDCFFBBZGTPFUKIPYNHYZBJPPYQMREAHQZKIUMXWDUFPANLISGKSEEAOXHOAPAGYCHCIRIQTBYKWDCOYRYGTZZLZLHVDNCVBVULQOXYFVFKOJWLWNMWXRZUSZEOWQJVJQCHL");

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
    msg.setTimeStamp(0.34372661419249406);
    msg.setSource(36027U);
    msg.setSourceEntity(253U);
    msg.setDestination(63189U);
    msg.setDestinationEntity(30U);
    msg.sessid = 2030315432U;
    msg.messages.assign("OILBVWCDGXJZAGDABWSYJFXFUJPPHCYKXKNUPUATRNFDWSNIGACQMAUBMHVTJGYONEMUTLNPKNBMSKZQKZGWWRYLUSRGHEYVTSGJHPQXBLEWQQQVGKSNQTDEXKWQIZMEVDVMHPOFJEA");

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
    msg.setTimeStamp(0.9211871312041755);
    msg.setSource(7377U);
    msg.setSourceEntity(7U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(100U);
    msg.sessid = 3930786302U;

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
    msg.setTimeStamp(0.5923325647986909);
    msg.setSource(4846U);
    msg.setSourceEntity(81U);
    msg.setDestination(46501U);
    msg.setDestinationEntity(70U);
    msg.sessid = 1011110847U;

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
    msg.setTimeStamp(0.827667780022552);
    msg.setSource(65010U);
    msg.setSourceEntity(246U);
    msg.setDestination(53071U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3067947533U;

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
    msg.setTimeStamp(0.2865157708984406);
    msg.setSource(12847U);
    msg.setSourceEntity(61U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(18U);
    msg.sessid = 806286679U;
    msg.status = 253U;

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
    msg.setTimeStamp(0.4421146101755984);
    msg.setSource(43253U);
    msg.setSourceEntity(206U);
    msg.setDestination(47133U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3798859677U;
    msg.status = 203U;

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
    msg.setTimeStamp(0.5199910234580232);
    msg.setSource(16470U);
    msg.setSourceEntity(118U);
    msg.setDestination(1241U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1513023834U;
    msg.status = 76U;

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
    msg.setTimeStamp(0.09871230872898784);
    msg.setSource(188U);
    msg.setSourceEntity(229U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(10U);
    msg.name.assign("NHDFJOALHWYRMAMZTKDPSPDYWFQAIXTZKMSECEMBFTSCZEBVDOPAWTSSKMWRLNBBBYRRHCYGISJBQQNGGDTMQCHCHSMEAXSLXWEAWWKJDLUFVUHQUULOJYFGIVVZLUNCFZGZFHEIPQ");

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
    msg.setTimeStamp(0.2838813890231159);
    msg.setSource(42497U);
    msg.setSourceEntity(39U);
    msg.setDestination(26787U);
    msg.setDestinationEntity(189U);
    msg.name.assign("MPJLSVVZCXAVLHBJMSGOFKNNQAQP");

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
    msg.setTimeStamp(0.5995496427686973);
    msg.setSource(17555U);
    msg.setSourceEntity(118U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(71U);
    msg.name.assign("BNKEWLVYIFFGCQQCXSZWDLARFWNGJDDVDWKVIZUFIHOSMVYBIEFSKDBOVERTZZNVYTUOVLMUFQGQHXQCDXLTRFGZCELEAKDDMXANCDICWXSJBYIRRLAWMVVWZPTMHLHQOZBTZRTQYOJPEBUPEFYQOUJKNOILSYXULZWACBTHTAGHEPHFUCRPKJFJMSONHXKXHKQGRNXEBSPMLAAIGUTVOSPJRDGZBSCGPHPJXWECUJNYPB");

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
    msg.setTimeStamp(0.2661007358561329);
    msg.setSource(27074U);
    msg.setSourceEntity(146U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(16U);
    msg.name.assign("HZUXANXLOHGHACJHNBMTGNAZMWNQHHWATDFBXGVPELPDLMSMTAOCADGK");

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
    msg.setTimeStamp(0.5421012689337665);
    msg.setSource(3484U);
    msg.setSourceEntity(130U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(22U);
    msg.name.assign("HIXDSCXVECIRVTWQKSYZGMVMYVDJPFJUXSQZQCKIRIGONLTCLSYHVFFZWABZIHMJQFOFFWPPKTAYJMOBGSLHRKJDTHGHUCFBVCGAELNOEBJQFUOJLSMQUXXMUADWIDFCXGBAJQWPDVKYAWGALEWYYOUSKSNDRDUBBJRNNIZHPXSINMXGPLKOIRWBIZLOKWZTTKEALZVEPNEA");

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
    msg.setTimeStamp(0.05776858980560684);
    msg.setSource(18352U);
    msg.setSourceEntity(64U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QAQMUYAHMIAMTKOFUCUIEEFUBCDRWHHDEOSIBU");

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
    msg.setTimeStamp(0.8251764678255613);
    msg.setSource(14017U);
    msg.setSourceEntity(225U);
    msg.setDestination(48788U);
    msg.setDestinationEntity(69U);
    msg.type = 219U;
    msg.error.assign("WWQTBTNEDYFU");

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
    msg.setTimeStamp(0.8783202940130718);
    msg.setSource(5702U);
    msg.setSourceEntity(195U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(2U);
    msg.type = 12U;
    msg.error.assign("WJGFXRHPXR");

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
    msg.setTimeStamp(0.9955944922420727);
    msg.setSource(11539U);
    msg.setSourceEntity(32U);
    msg.setDestination(13133U);
    msg.setDestinationEntity(80U);
    msg.type = 27U;
    msg.error.assign("IEEJLXJPATYGLEMJEKVWJCWRFLMSAXLPMOUGISNSRDGCZQIPMSYAKXLMSFOVODWLEJKBJDREUWHAVJQIUSNSPDBZUYIMEDCAUURGOAVYHKAWIYYXIXONLZRCBHOFUPPRTSXUVEQMPEAYENQBFQRRRGYTBWCBCDXIZZVNFONATTJCZZKNVMTKPOITHQWFHLKFZBLSYUDJWHMFAXTLSQGNKZIGMJOGOBPHDQTYNPCXCHDFVKXNHVGBKDQFUBQCTW");

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
