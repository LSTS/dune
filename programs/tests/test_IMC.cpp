//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 04ce1d1dac399100b9207708c4b21b88                            *
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
    msg.setTimeStamp(0.3665506914549278);
    msg.setSource(65312U);
    msg.setSourceEntity(52U);
    msg.setDestination(6073U);
    msg.setDestinationEntity(57U);
    msg.state = 94U;
    msg.flags = 159U;
    msg.description.assign("CNXPWHYQAXUVIKSEUEXSFSRWPRTEXUAPXJOCFQZSUMOPDMJSKWIVTHIKBCDQGZJQZKANPYSTFKWRLUEATRALZIIFBTTENQMAYBHIJXSIYCVPPVYGAVJTVDJZDMEIYBQBZMFWGYBJVLEZCMWNRHAKPQOJLRRPTXU");

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
    msg.setTimeStamp(0.31022983927167436);
    msg.setSource(37870U);
    msg.setSourceEntity(169U);
    msg.setDestination(58413U);
    msg.setDestinationEntity(25U);
    msg.state = 144U;
    msg.flags = 105U;
    msg.description.assign("CYXDCPMSPTTVMDKFITXOIKQDVLJESZKNNBJVNRHDXMAMXULELSFIWZPFONNJTQQWLUYHDNDYGTLRXPTIJOLRNKLEJBJIDYXIGPGAEHURVXKAMOUGAGHRPISSCUYNCSVHGKMSVIDQJZFAKBWCWRCZKPFUQSBACEJFYLVPMYQFUHRHEJMIBXAOBCTZQXDEGYUBBRYQNPFOEJOHWLCMOUZZBVKUTAWPGLHWMGIAWKXQFTHYSRWZCTNWZSOEVZR");

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
    msg.setTimeStamp(0.07448904157133807);
    msg.setSource(25244U);
    msg.setSourceEntity(185U);
    msg.setDestination(11307U);
    msg.setDestinationEntity(17U);
    msg.state = 55U;
    msg.flags = 125U;
    msg.description.assign("ZKWUIDLPGJFXKZGHKNDZLXEANFPHYNHJCRAFOJFVUBQXVKWSTIYMPEJDZTCFUSIISWONFXZMDVTWGJHDSENXVLMBNNPPVOTYAKHBYOFVDUUCWMXJPXUQAMSRBEUYPQYDJMLLQGRPLSKBEMXDTSYBIVOBXWRVKTAGTMRRJQZXRLCIEQDAZUV");

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
    msg.setTimeStamp(0.8784269549497642);
    msg.setSource(16287U);
    msg.setSourceEntity(106U);
    msg.setDestination(498U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.9747064629786494);
    msg.setSource(19948U);
    msg.setSourceEntity(240U);
    msg.setDestination(42087U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.7753956953418576);
    msg.setSource(38580U);
    msg.setSourceEntity(38U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.9767473900457597);
    msg.setSource(4742U);
    msg.setSourceEntity(104U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(111U);
    msg.id = 180U;
    msg.label.assign("ENCWXGOFXYWZJBENCCLZRYJPMHETUBUYDDPVNLHXBCGBTUAAXEKILYKYRLXJARMIGNKAIQDQFGOKJEUTSD");
    msg.component.assign("SBFQLWUPXGSRZDFDZSALBKAQNUMPVTNIXGDVLTZWZAUAEYFOORHYOFZUWUHVDLKNTOXBVDCGMBUMUEPYMCKYIKIGTCOJPCNYXBIXECCBYKDQRCIKNVDNSLDRHYIYSKX");
    msg.act_time = 55719U;
    msg.deact_time = 15016U;

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
    msg.setTimeStamp(0.29482040119307884);
    msg.setSource(29986U);
    msg.setSourceEntity(90U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(118U);
    msg.id = 106U;
    msg.label.assign("BTGZDZOKHKNHWTZPRAWCGOCLHAVMBWKMFMUJQSKVOHKQEFIWHKXXCTCVTRDNILJVFRWYIMFVUOQGHEUTRKKOWBPSYFMLBMRROZCWISOIEEEEJLBQVVYQTSFBLNJYPTFJPCJBZBQRIOGAQYDYHSXSHQHEETFDDECQMZNSQUUVDJOSJSPMZNGUNXAIWZDPAWLUGNHWZXXTLXUAKGLXIDIOCYINCRVELMPPPVXNDLFBDRUAZJXAYJMKPYGT");
    msg.component.assign("GRTOSFUUYZPIUWXMCRZJQL");
    msg.act_time = 52765U;
    msg.deact_time = 25080U;

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
    msg.setTimeStamp(0.2010822512279884);
    msg.setSource(17713U);
    msg.setSourceEntity(241U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(84U);
    msg.id = 236U;
    msg.label.assign("WPTFCWUJIUPZDUPNTXVVNYXDTKQJZTVBDRLBPHULIPFBVCDZXLLCHQOBRMEQMMAKKXOCNRKSJYBOMGYJLE");
    msg.component.assign("XBYOABOWJYDEPKYMUFBOVHOHLPMCJYRZIEAFNRUKMNUNZIQJSDMEGAHKRYDQOPLMPQZTXKMFAFWYWFVTQPMKXOVXCFIAHPDFTBXNTNLQEGENUGBBIISRWVJQTPBOWGQLLTBDLJSTNGOEYTGAQRVMLNKXWBEMATSKHYXIWDBVQXGPLWUZLFHZZFSKCCJGSVDSRIZUUCJSQVEKHINCJKYVUNZDDCULISHAHRMPWIJSZCA");
    msg.act_time = 40361U;
    msg.deact_time = 26553U;

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
    msg.setTimeStamp(0.3618583626020436);
    msg.setSource(30542U);
    msg.setSourceEntity(203U);
    msg.setDestination(23914U);
    msg.setDestinationEntity(56U);
    msg.id = 203U;

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
    msg.setTimeStamp(0.3574381691280645);
    msg.setSource(51768U);
    msg.setSourceEntity(89U);
    msg.setDestination(23196U);
    msg.setDestinationEntity(247U);
    msg.id = 16U;

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
    msg.setTimeStamp(0.18331135644876473);
    msg.setSource(51284U);
    msg.setSourceEntity(72U);
    msg.setDestination(30480U);
    msg.setDestinationEntity(166U);
    msg.id = 174U;

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
    msg.setTimeStamp(0.18370997273578138);
    msg.setSource(9230U);
    msg.setSourceEntity(54U);
    msg.setDestination(36302U);
    msg.setDestinationEntity(77U);
    msg.op = 10U;
    msg.list.assign("GYDTESGSKXIXUQJXPMMKDERKNRWZSPOJZNXGRMZSYJHYLUXUIOAIESILDMSQTFMPHHVTCYFQNJWCDVFAECNWVLOT");

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
    msg.setTimeStamp(0.5922778320852158);
    msg.setSource(52727U);
    msg.setSourceEntity(9U);
    msg.setDestination(28669U);
    msg.setDestinationEntity(67U);
    msg.op = 202U;
    msg.list.assign("UPXTWBIWVFAILTTRWBHYZXIADCLGCMKUTLUAOIYDGEKRXBNOXZEUVKHOWRZDPEFZSODWKLJCCZLBDVFDUEHOSSGAMOCTXJTGPXNAOJMFZUBGKMYOBXIUQCBSDPVYPYJHQDQLSKRRRELMJFJPKVXBNUYJAPADHTYSFSVWQMYFQZLCMEIASJEGIONNJEMEYXMGVVQNCTUUZDGFRCHRSKQMHFGGRVNNRLHBPWNLQQXBZWIVCWKFKZHEHIOJTNY");

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
    msg.setTimeStamp(0.5791819098901002);
    msg.setSource(6038U);
    msg.setSourceEntity(239U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(135U);
    msg.op = 5U;
    msg.list.assign("YHOVBVLPFGXGDJDUINQWRKTXVSUV");

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
    msg.setTimeStamp(0.6278888985373235);
    msg.setSource(64137U);
    msg.setSourceEntity(172U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(73U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.4101454816841167);
    msg.setSource(31241U);
    msg.setSourceEntity(218U);
    msg.setDestination(22468U);
    msg.setDestinationEntity(249U);
    msg.value = 205U;

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
    msg.setTimeStamp(0.6905498883715292);
    msg.setSource(23767U);
    msg.setSourceEntity(173U);
    msg.setDestination(1751U);
    msg.setDestinationEntity(170U);
    msg.value = 111U;

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
    msg.setTimeStamp(0.7576260831490523);
    msg.setSource(28713U);
    msg.setSourceEntity(170U);
    msg.setDestination(60375U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("YCLXJZCLUZHJVHRVPTJZQJXCWZYOMVXRKAGVNPUHHLLWAIDQSODWKKIFMIMEUO");
    msg.message_id = 52624U;

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
    msg.setTimeStamp(0.9342832550529558);
    msg.setSource(14368U);
    msg.setSourceEntity(50U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(21U);
    msg.consumer.assign("YQICKLIACLVOJFJKDTM");
    msg.message_id = 10148U;

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
    msg.setTimeStamp(0.6832937649777573);
    msg.setSource(6191U);
    msg.setSourceEntity(40U);
    msg.setDestination(6540U);
    msg.setDestinationEntity(8U);
    msg.consumer.assign("QTSEDUSJRMGVWPPNWRYEUJWFDOGXOWBVKQXHVSZLAMVMHGZNTNIUJSPQMZBYLNWDRA");
    msg.message_id = 44824U;

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
    msg.setTimeStamp(0.48359050942594606);
    msg.setSource(48997U);
    msg.setSourceEntity(32U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(156U);
    msg.type = 155U;

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
    msg.setTimeStamp(0.7705435216519795);
    msg.setSource(57072U);
    msg.setSourceEntity(102U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(214U);
    msg.type = 146U;

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
    msg.setTimeStamp(0.2108099617205993);
    msg.setSource(43515U);
    msg.setSourceEntity(150U);
    msg.setDestination(1069U);
    msg.setDestinationEntity(36U);
    msg.type = 163U;

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
    msg.setTimeStamp(0.7095119074079441);
    msg.setSource(49563U);
    msg.setSourceEntity(211U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(199U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.5178904263092028);
    msg.setSource(54124U);
    msg.setSourceEntity(156U);
    msg.setDestination(64198U);
    msg.setDestinationEntity(210U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.32593639632917915);
    msg.setSource(48248U);
    msg.setSourceEntity(114U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(178U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.7153092144348668);
    msg.setSource(41852U);
    msg.setSourceEntity(171U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(241U);
    msg.total_steps = 109U;
    msg.step_number = 104U;
    msg.step.assign("PMZXNETKIXBCDVTFGRMIRNWNJWOZQKMQFXHHZWEWZVJMGGBCMHZFU");
    msg.flags = 63U;

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
    msg.setTimeStamp(0.7006998004085472);
    msg.setSource(38181U);
    msg.setSourceEntity(56U);
    msg.setDestination(61828U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 185U;
    msg.step_number = 57U;
    msg.step.assign("OBSBWXNHQWWPNXPZVSTUGOUDOJERAQZQUSDQDEPHMSDYGZBUITVSRFFYYRYLKZBNCBRGQAVYFTTCUMSOVOHOIVPWNGYNJUAXNWRHHJNZFRYTMDPTAIDZEMUXWKFOKIJSAPKTLGTOKLKCQHYSKEIWEREMZYVCGBGPUCDDLIJLQZTVWGHMRJJTMCIVXPLZAHRLQVANCEJBJCMAASHLNVCXRMAIQUJKYWZEFWEBQPBKUICNOGFLDBFXFEOG");
    msg.flags = 8U;

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
    msg.setTimeStamp(0.2508791593880211);
    msg.setSource(6439U);
    msg.setSourceEntity(14U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(41U);
    msg.total_steps = 171U;
    msg.step_number = 169U;
    msg.step.assign("UNZLPZSWOBMAQTLELTZVKSLBEQGSFPCTEUAVQQYDOHNHLLKSJOKBGRNZXSABJNVRLGHOXMHLKBHUMCTKEIZFHKFDFXVHEYJCXWGXUDDUZXNJQITIQRDCWIZDHMRUMPIWIKZVQQYFGX");
    msg.flags = 165U;

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
    msg.setTimeStamp(0.7062488091912992);
    msg.setSource(44872U);
    msg.setSourceEntity(11U);
    msg.setDestination(21902U);
    msg.setDestinationEntity(176U);
    msg.state = 72U;
    msg.error.assign("KFCIGARHAYBQXVSOEXMURVRZJBTBDACJPGGMLEJYBQBWORAMMBVLZFKGQQUWPGWLUTXFAJQKTRERYRVAPITTJESLZPWSOYCEFGSRPZGKXFSKINCHKODHIHWDDRVDUCHPGQNNUYUIOBWEIMHCJNPKIEXFLTMWHVOQQSQJRSVHXMCKNUCCKSUZEAXLVFBBPYUVMZLXWWDMUEZNOAJPFFTQ");

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
    msg.setTimeStamp(0.7290749649107705);
    msg.setSource(9301U);
    msg.setSourceEntity(250U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(35U);
    msg.state = 91U;
    msg.error.assign("KACWFEALXNRNJICDGAFJEQDOPARQDYQBPAZLSZFGUNKSKFZFVKPVQSUMLATTWHGPVQVALEGYHOBFMSBMMCASUYMJPTUEOEXIYDSCRMCAGYU");

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
    msg.setTimeStamp(0.23789693939620404);
    msg.setSource(63126U);
    msg.setSourceEntity(250U);
    msg.setDestination(42871U);
    msg.setDestinationEntity(6U);
    msg.state = 147U;
    msg.error.assign("MGWKFCUHHKFYCZINRFCSAOOSLBWMYLOWSJUXGAIBAMHKQYWVYCT");

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
    msg.setTimeStamp(0.709869435634548);
    msg.setSource(53717U);
    msg.setSourceEntity(199U);
    msg.setDestination(52841U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.4270884057420713);
    msg.setSource(7656U);
    msg.setSourceEntity(39U);
    msg.setDestination(61311U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.3018223078186111);
    msg.setSource(4852U);
    msg.setSourceEntity(26U);
    msg.setDestination(33888U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.9971327758602828);
    msg.setSource(6346U);
    msg.setSourceEntity(248U);
    msg.setDestination(48893U);
    msg.setDestinationEntity(226U);
    msg.op = 251U;
    msg.speed_min = 0.42515031113125445;
    msg.speed_max = 0.9286114937641389;
    msg.long_accel = 0.43638367794543276;
    msg.alt_max_msl = 0.6407108900826948;
    msg.dive_fraction_max = 0.0043591082492778765;
    msg.climb_fraction_max = 0.15165365878835235;
    msg.bank_max = 0.5286346879937007;
    msg.p_max = 0.8692786180654342;
    msg.pitch_min = 0.4164895987520386;
    msg.pitch_max = 0.4200518921983839;
    msg.q_max = 0.9518054874304483;
    msg.g_min = 0.338930689031934;
    msg.g_max = 0.6518276603305208;
    msg.g_lat_max = 0.981355180374235;
    msg.rpm_min = 0.44489989657496176;
    msg.rpm_max = 0.6084488789856416;
    msg.rpm_rate_max = 0.6218612531367302;

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
    msg.setTimeStamp(0.041660417099304126);
    msg.setSource(45538U);
    msg.setSourceEntity(74U);
    msg.setDestination(64572U);
    msg.setDestinationEntity(219U);
    msg.op = 194U;
    msg.speed_min = 0.46605119101824266;
    msg.speed_max = 0.8341669346198811;
    msg.long_accel = 0.7822582528866102;
    msg.alt_max_msl = 0.5111991994530387;
    msg.dive_fraction_max = 0.18483427941374586;
    msg.climb_fraction_max = 0.16197745657540163;
    msg.bank_max = 0.903832621183244;
    msg.p_max = 0.21132496461210093;
    msg.pitch_min = 0.21519756092517983;
    msg.pitch_max = 0.8569555835834722;
    msg.q_max = 0.7319327486020265;
    msg.g_min = 0.659983516204817;
    msg.g_max = 0.8077293013667487;
    msg.g_lat_max = 0.18582743743180286;
    msg.rpm_min = 0.36555294275009054;
    msg.rpm_max = 0.6189780336682117;
    msg.rpm_rate_max = 0.42345399312808574;

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
    msg.setTimeStamp(0.15386250631856302);
    msg.setSource(26036U);
    msg.setSourceEntity(15U);
    msg.setDestination(46067U);
    msg.setDestinationEntity(205U);
    msg.op = 214U;
    msg.speed_min = 0.15208609629655934;
    msg.speed_max = 0.7620092183922687;
    msg.long_accel = 0.40461409423161887;
    msg.alt_max_msl = 0.3318031417910705;
    msg.dive_fraction_max = 0.7874011850642172;
    msg.climb_fraction_max = 0.6670647660689171;
    msg.bank_max = 0.1925729150195713;
    msg.p_max = 0.6473430124545317;
    msg.pitch_min = 0.16088502871837518;
    msg.pitch_max = 0.318858051835216;
    msg.q_max = 0.6331548227826368;
    msg.g_min = 0.2777764577568128;
    msg.g_max = 0.15869128187048864;
    msg.g_lat_max = 0.21950661303582597;
    msg.rpm_min = 0.9936540530586828;
    msg.rpm_max = 0.9813634072249418;
    msg.rpm_rate_max = 0.11020481850903463;

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
    msg.setTimeStamp(0.2400096469368993);
    msg.setSource(64814U);
    msg.setSourceEntity(101U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.6121844875060591);
    msg.setSource(51127U);
    msg.setSourceEntity(198U);
    msg.setDestination(10979U);
    msg.setDestinationEntity(59U);
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 3223364212U;
    tmp_msg_0.start_lat = 0.5930436769958409;
    tmp_msg_0.start_lon = 0.7347224045319635;
    tmp_msg_0.start_z = 0.4638989108300413;
    tmp_msg_0.start_z_units = 142U;
    tmp_msg_0.end_lat = 0.9902898671595619;
    tmp_msg_0.end_lon = 0.5428116695849506;
    tmp_msg_0.end_z = 0.004397053968459241;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.lradius = 0.0786814382825437;
    tmp_msg_0.flags = 218U;
    tmp_msg_0.x = 0.8416606248700599;
    tmp_msg_0.y = 0.7046117782825859;
    tmp_msg_0.z = 0.5063278370219252;
    tmp_msg_0.vx = 0.7062061647566618;
    tmp_msg_0.vy = 0.4581723664042675;
    tmp_msg_0.vz = 0.4018801633988277;
    tmp_msg_0.course_error = 0.6299723692852354;
    tmp_msg_0.eta = 17202U;
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
    msg.setTimeStamp(0.8493763552149738);
    msg.setSource(50563U);
    msg.setSourceEntity(68U);
    msg.setDestination(17977U);
    msg.setDestinationEntity(120U);

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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.861203986116984);
    msg.setSource(63026U);
    msg.setSourceEntity(108U);
    msg.setDestination(48302U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5477184622028101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.3034228157625092);
    msg.setSource(43996U);
    msg.setSourceEntity(101U);
    msg.setDestination(31180U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8174336691687681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.5900297389494927);
    msg.setSource(3856U);
    msg.setSourceEntity(164U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9150145285465218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7592650063966339);
    msg.setSource(24163U);
    msg.setSourceEntity(108U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.48526068077045137;
    msg.lon = 0.294364229903329;
    msg.height = 0.35704587146507283;
    msg.x = 0.7931700510109766;
    msg.y = 0.7009905797254742;
    msg.z = 0.6885874298549118;
    msg.phi = 0.1580993682234929;
    msg.theta = 0.6682478834328766;
    msg.psi = 0.1795425050055437;
    msg.u = 0.07489992120996336;
    msg.v = 0.7579992395364;
    msg.w = 0.3435184377953897;
    msg.p = 0.12362032571337767;
    msg.q = 0.7702131016088714;
    msg.r = 0.3704909231795722;
    msg.svx = 0.15960837730303323;
    msg.svy = 0.9000743316573877;
    msg.svz = 0.9530543146064948;

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
    msg.setTimeStamp(0.4833662110204586);
    msg.setSource(4684U);
    msg.setSourceEntity(64U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.2978524013457655;
    msg.lon = 0.24352520860383053;
    msg.height = 0.3564118400007257;
    msg.x = 0.2257243391364523;
    msg.y = 0.9643735513487741;
    msg.z = 0.0833343547677674;
    msg.phi = 0.7651214417100408;
    msg.theta = 0.90194607755142;
    msg.psi = 0.9505262675106683;
    msg.u = 0.057498525997981664;
    msg.v = 0.9886120639219835;
    msg.w = 0.8841515264336774;
    msg.p = 0.7187178331605494;
    msg.q = 0.16652288005698967;
    msg.r = 0.07177420106371313;
    msg.svx = 0.8677882498059555;
    msg.svy = 0.3726720971465487;
    msg.svz = 0.03054126206662089;

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
    msg.setTimeStamp(0.14220739132969917);
    msg.setSource(20979U);
    msg.setSourceEntity(143U);
    msg.setDestination(47890U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.03785117505112434;
    msg.lon = 0.7962753705769149;
    msg.height = 0.09468778069671158;
    msg.x = 0.4617574268858795;
    msg.y = 0.867680599371684;
    msg.z = 0.47722404519760386;
    msg.phi = 0.2078092372594682;
    msg.theta = 0.40446672618346324;
    msg.psi = 0.16303929451708854;
    msg.u = 0.2434852221933973;
    msg.v = 0.013411754478511284;
    msg.w = 0.9542319537960856;
    msg.p = 0.866706319808329;
    msg.q = 0.621153131499401;
    msg.r = 0.03404036353342854;
    msg.svx = 0.07059078996771817;
    msg.svy = 0.8148247807807307;
    msg.svz = 0.08639396714873238;

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
    msg.setTimeStamp(0.0047232557476013515);
    msg.setSource(29522U);
    msg.setSourceEntity(235U);
    msg.setDestination(43785U);
    msg.setDestinationEntity(234U);
    msg.op = 151U;
    msg.entities.assign("GKHOKFUMEZEJMSRVIUEXJNMDDCLVZDBNUIRQLIZPNMKVCQRGPDOIGQPQHFFQWDAYUFXXZGMTOXSTUZZJFXFNVMDTIBVWQTMWYSRZKTCAEHVXWCENJMOTRAMWBEWLAKOTEHSLAPAYAKRFQUYCONFUCWXOXGZLIBKKZCOTVYCLSHPNLVPIPOECQYJDERLSUVTCSPMHBWGNDHFHBXUNYLSOGARJNIPIIHYKAHDAWQURLFJYBQBTGGJSXKWDGRJEJY");

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
    msg.setTimeStamp(0.24987945008195);
    msg.setSource(29522U);
    msg.setSourceEntity(45U);
    msg.setDestination(47661U);
    msg.setDestinationEntity(138U);
    msg.op = 138U;
    msg.entities.assign("JPNSVLRAUBLEQDFBGPQYACBPSHJGVQZPVBMNVHJLRBCYQFHJSOOYRMZYJZIYTADWR");

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
    msg.setTimeStamp(0.8422778558879516);
    msg.setSource(34706U);
    msg.setSourceEntity(61U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(116U);
    msg.op = 34U;
    msg.entities.assign("WGTJDLMOYFITPNYGOXJUMXVZIUUAAPUKOXYUMCXALLBZSCPOAUSVGKRNFNPNFPBZSJKKTPDCCXWHRVFALCRSEEMQQTZYQDHGEQEHKQIIXIPYQVYWMWOTEYUVLGIWWNNMSSRJURKRNKCFQXZJRODDRRLEQFHSZEUFBGCEVQIBZOWGDAAKHJUNTVDHLJ");

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
    msg.setTimeStamp(0.946875211586581);
    msg.setSource(24004U);
    msg.setSourceEntity(108U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(240U);
    msg.type = 173U;
    msg.speed = 9155U;
    const signed char tmp_msg_0[] = {28, 1, -126, -9, 76, -46, 7, 115, 44, 119, 40, 98, 35, 0, -18, 102, 33, 30, -81, 86, 94, -107, -123, -113, 11, 20, -92, 26, -109, 118, 117, -94, 17, 126, -106, -11, 107, 24, -120, 121, -21, 51, 43, -67, 33, 58, -58, -124, 107, -95, -75, 18, -109, -53, -64, -45, 94, 73, -47, -102, -19, -5, 100, -11, -111, -11, 97, -120, 30, -108, -8, 62, 63, -104, -118, -14, -31, 12, -94, 109, 55, -10, -57, 116, -120, -81, -20, -117, -74, -88, 7, -127, 71, -54, -52, -69, -57, 114, -115, -128, 88, 32, 117, -93, -56, -55, -89, 105, 83, 92, 50, -27, 53, -18, 31, -103, 48};
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
    msg.setTimeStamp(0.9955591110042903);
    msg.setSource(61155U);
    msg.setSourceEntity(22U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(52U);
    msg.type = 11U;
    msg.speed = 55613U;
    const signed char tmp_msg_0[] = {126, -106, 40, -55, -61, -11, 2, -97, -2, -17, 31, -43, -45, -110, -52, 95, -82, -86, 50, -100, -47, -86, 96, -108, 81, -25, -113, 12, -32, -79, -33, 72, 74, -82, 13, 99, -70, 97, -79, -88, -117, -34, -126, -80, -5, -60, -123, -123, 57, -122, -91, -87, 44, -36, -30, 112, 21, 0, 20, 33, -88, 57, -94, 121, -8, -18, -31, -111, -121, -80, 41, -86, -82, -95, 48, 47, 73, -45, -10, 66, -56, 85, 82, 96, 74, 85, -33, -115, -8, 51, -121, -7, 119, -17, 17, -90, 39, -70, 104, -32, 120, -126, 36, -11, -1, 31, 97, 62, -91, -24, -59, -67, 106, -97, 78, -43, -103, 102, 31, -72, -44, 107, 78, 51, 115, -70, -34, 29, -18, -77, -79, -8, 120, -77, 9, 31, 111, -76, 64, -103, -105, -111, 75, -18, 42, 44, -80, -97, -33, -63, -89, 103, -113, 38, 64, 66, -46, -79, -21, -10, 41, -23, -114, 101, -93, -101, -24, 7, 22, -28, 55, 21, 11, 34, 77, -86, -128, 103, 70, -25, -55, -51, 53, 118, -47, 56, -91, -48, 17, 6, -99, -124, -74, 44, 26, -26, -17, -89, -36, 90, -78, -71, 82, 12, 27, 9, 14, 62, -14};
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
    msg.setTimeStamp(0.11137597594446647);
    msg.setSource(38377U);
    msg.setSourceEntity(253U);
    msg.setDestination(1754U);
    msg.setDestinationEntity(224U);
    msg.type = 89U;
    msg.speed = 32067U;
    const signed char tmp_msg_0[] = {108, 19, 105, 63, -69, -114, 111, 51, -46, -92, 119, -125, -118, -63, -48, -97, -104, 26, 88, 114, 69, 118, 122, -74, 39, -72, -32, 69, -16, 117, 3, 114, 22, 67, 78, 61, -15, -50, -79, -81, -56, -113, -49, 8, 68, 111, -82, 44, -118, 47, -33, -19, 99, 96, -125, 2, 62, 62, 122, -78, -34, 106, -63, -45, 21, 111, 25, -26, 110, -12, 19, 88, 79, -4, 99, -120, -32, -32, 60, 34, -30, 118, -92, 40, 90, 37, 111, -2, 21, -36, -39, -9, 106, 64, -18, -77, -82, -110, -45, 93};
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
    msg.setTimeStamp(0.7148846324088586);
    msg.setSource(61887U);
    msg.setSourceEntity(176U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(138U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.6400572557238773;
    msg.bank2p_pgain = 0.5843333899629698;

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
    msg.setTimeStamp(0.13108550589816959);
    msg.setSource(53166U);
    msg.setSourceEntity(165U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(69U);
    msg.op = 52U;
    msg.tas2acc_pgain = 0.7192988281146068;
    msg.bank2p_pgain = 0.19696265289418324;

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
    msg.setTimeStamp(0.20575322240541827);
    msg.setSource(23949U);
    msg.setSourceEntity(20U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(99U);
    msg.op = 20U;
    msg.tas2acc_pgain = 0.8194942800388697;
    msg.bank2p_pgain = 0.9456879807965373;

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
    msg.setTimeStamp(0.46203668840880063);
    msg.setSource(24840U);
    msg.setSourceEntity(156U);
    msg.setDestination(63615U);
    msg.setDestinationEntity(118U);
    msg.available = 1667038948U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.29805410078943406);
    msg.setSource(2580U);
    msg.setSourceEntity(60U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(51U);
    msg.available = 2232781299U;
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
    msg.setTimeStamp(0.8562586729908096);
    msg.setSource(33229U);
    msg.setSourceEntity(123U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(118U);
    msg.available = 1058123983U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.9697953282449926);
    msg.setSource(24813U);
    msg.setSourceEntity(66U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(75U);
    msg.op = 54U;
    msg.snapshot.assign("SFVYHJHVGEICGJCNZUHRVDPBZKOQARTJPATOJIDLWGXZPTWKUDALUEBZLNNVDCMUVMCWGPOHAMHWRBGUIPXVMLKVBLYAOYUIHIGAUHZMCZBWXXPWBEGTZPQTZCEMYDTSHFYNFNSFOTIUIRMWFCWDQINNTFQRDSDLAQDWKPPBAQYVLSSEKXJPRKKRTBOZYRYKREFMZXXJXOMUCLVNURJCEKIFJHEMTVGENSESYWQDXAJYQOLBSL");
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 192U;
    tmp_msg_0.x = 45838U;
    tmp_msg_0.y = 28601U;
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
    msg.setTimeStamp(0.2360815972320175);
    msg.setSource(8326U);
    msg.setSourceEntity(10U);
    msg.setDestination(25419U);
    msg.setDestinationEntity(242U);
    msg.op = 123U;
    msg.snapshot.assign("CUQDYMQKBMLTDYMONSFVILITMVUXJCIQXMBAEVHCRVWSOISJBJXDPNTZADZNOCZGFWEQLQCEMQXEYGD");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 11020U;
    tmp_msg_0.type = 13U;
    tmp_msg_0.utc_year = 31259U;
    tmp_msg_0.utc_month = 5U;
    tmp_msg_0.utc_day = 104U;
    tmp_msg_0.utc_time = 0.39984767154858436;
    tmp_msg_0.lat = 0.7580195170013893;
    tmp_msg_0.lon = 0.942394697013154;
    tmp_msg_0.height = 0.8293229164109241;
    tmp_msg_0.satellites = 132U;
    tmp_msg_0.cog = 0.48456194769301975;
    tmp_msg_0.sog = 0.6612486324476704;
    tmp_msg_0.hdop = 0.637296353396343;
    tmp_msg_0.vdop = 0.5114868876013126;
    tmp_msg_0.hacc = 0.664192856646479;
    tmp_msg_0.vacc = 0.6020516015820854;
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
    msg.setTimeStamp(0.5901365201073225);
    msg.setSource(55131U);
    msg.setSourceEntity(127U);
    msg.setDestination(44246U);
    msg.setDestinationEntity(61U);
    msg.op = 218U;
    msg.snapshot.assign("NXALIMULOAVEWRYFQZDWHYNUOBPONFJYWVXBGGEDAOULQHHXGFWDPDGVRHJTMPAMMSBKNPQDACVJGNQECHXNYSUGQSFIXZKTRDZXGSZINYBFSTPEKCJTDJSVVBBGFLUSYZJKYQCTVNRXPATSIYHTGKVPEKJECQMDSDAIEJFZMUZOXPQTBHBMRRBROHMNLIFK");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 40U;
    tmp_msg_0.speed_min = 0.2977532136711988;
    tmp_msg_0.speed_max = 0.5494358103250766;
    tmp_msg_0.long_accel = 0.3445443906908344;
    tmp_msg_0.alt_max_msl = 0.09972611082623883;
    tmp_msg_0.dive_fraction_max = 0.3495265512833411;
    tmp_msg_0.climb_fraction_max = 0.6516256719121716;
    tmp_msg_0.bank_max = 0.6316564497505882;
    tmp_msg_0.p_max = 0.756357972678857;
    tmp_msg_0.pitch_min = 0.18580346108475432;
    tmp_msg_0.pitch_max = 0.6346502475105059;
    tmp_msg_0.q_max = 0.9083273179927005;
    tmp_msg_0.g_min = 0.27471514371475525;
    tmp_msg_0.g_max = 0.41805009879172883;
    tmp_msg_0.g_lat_max = 0.7162085003014397;
    tmp_msg_0.rpm_min = 0.8553224748012586;
    tmp_msg_0.rpm_max = 0.5715476466009893;
    tmp_msg_0.rpm_rate_max = 0.4753395549041525;
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
    msg.setTimeStamp(0.0072004805622730705);
    msg.setSource(64346U);
    msg.setSourceEntity(172U);
    msg.setDestination(63511U);
    msg.setDestinationEntity(46U);
    msg.op = 250U;
    msg.name.assign("JGAZGLZTJJZURULXAWTUSANMRANOGTJPBTFIIDGKHRYCYRMXAQKPLZCHT");

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
    msg.setTimeStamp(0.26725334520030264);
    msg.setSource(19793U);
    msg.setSourceEntity(163U);
    msg.setDestination(29062U);
    msg.setDestinationEntity(119U);
    msg.op = 23U;
    msg.name.assign("NIFCSJXIOJDBYIGWTYFUPLAHXSITSHVIGQAHJKFSSROYKSNGHMZMJOMYKNSTQAGAVIBCUEINEVNTEHCPUDZJOGWXXBOMNDXLVRYBTRAJQLEFSWEDWQVGVQAFCPMYZCWKDOFKTWCBAEZRLDPZQPHBEHFRTZDOVEAZLYUKY");

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
    msg.setTimeStamp(0.47513159799545923);
    msg.setSource(17230U);
    msg.setSourceEntity(242U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(176U);
    msg.op = 239U;
    msg.name.assign("YGGOYJUZFHWWWEFJNZQSZTZFBBLLKDBBALCVOWHHPZAFWOKDQHRTQORRPMXDANQEVRKOSSGICDKQSWMMEMKHJELJJCSVIPMUAKOHXEIHKAXEDFUQKRPFVVUNWIKIIXBRXQNRRCPJBBGIRQFGRDNOZALDASVFYECCVVHMUPZXYJEEQPCTGAEFNDMBZDYOSUWUIYXCXLIJNVBWTJFDYNMWMTOZTNYLHGXG");

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
    msg.setTimeStamp(0.03298079741981008);
    msg.setSource(46969U);
    msg.setSourceEntity(79U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(36U);
    msg.type = 195U;
    msg.htime = 0.31234871868579817;
    msg.context.assign("YHINYRCKQLGFYMGUTMPJDMBSKXHNDVZALTCWWOQLJSMLGHDQKZMIIVPHQROQSJVA");
    msg.text.assign("HFPZZYJZZCANCVDMYFLPXOISHUGXTBQZAOOCZDWANJJKEWTBWXMPXFHZPQNGNUZDESVPXR");

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
    msg.setTimeStamp(0.49072260011267055);
    msg.setSource(5289U);
    msg.setSourceEntity(30U);
    msg.setDestination(64092U);
    msg.setDestinationEntity(146U);
    msg.type = 110U;
    msg.htime = 0.049639628606237274;
    msg.context.assign("YWFPPHRLVJATDYEVMLKRQBBXORNXJYNGMHRVWIBXCXABYWRBFIJTMACIWIUSHMBVHCOEASULFJKKADXVQMARQGKKIZVUYAGGTZKUGDEIIHQGHTBWDNDCLPCMANZRATPWGJXMONPQTPEJSYFMMXKGDVOZTAUBLOLNZZEEVNSGQHLYSTFZZQFSKGENOKXSVERMCWSVBHJLFEOOBNDPWQCQDYFZJUSPWXXIHUFCPUWIRTZJCRJLHCNI");
    msg.text.assign("GXVIJEWCIGVVGBKYIGXAWPQCZRMLEDIVKMYSTVMKOWCCQLCPFRIYSZVEXDYLYNAJRHROVSJPYDVDFTZBTGZMQEUNOVFKEHRSUQELFXOQRFRNGARGMNKXBEYHOVSDUWWPJHTKTXTHQLQRZNGSAEAKIMAYBOOLXFUPZRCBFQBJQPL");

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
    msg.setTimeStamp(0.9444101346703225);
    msg.setSource(56909U);
    msg.setSourceEntity(97U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(243U);
    msg.type = 67U;
    msg.htime = 0.542556259899306;
    msg.context.assign("YHDGZBJIVUVIUHFBWKPNJBOIDAEFRWWXYQPKLGAOTQYQEAMUYFOMHZMXSCEVSBIZREHFQVDJNKNNKHYMJSRSCDDGDOWLGYOHEQGFWPGIIUZZTXFBEWQPPTA");
    msg.text.assign("TQLQCBVNWPSYVFTOMXRTGGBIBBMNGAYRATCIKMDQDABCHJBHGJKUXFRBDINGJKMHUCGRMWLWWOCZVVCETNTWZEYSVHZCSV");

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
    msg.setTimeStamp(0.16140039653549898);
    msg.setSource(44857U);
    msg.setSourceEntity(209U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(210U);
    msg.command = 168U;
    msg.htime = 0.25079523643521784;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 20U;
    tmp_msg_0.htime = 0.052306455188189105;
    tmp_msg_0.context.assign("GSVTAVRQWDDJQXDYSSHWXRLURZOCCFZOJBAZNHYJJFPBHQQSWYEYDRDLGMDOKXRFCKIIIYQCSBCEPMLGOQJZXGCLPJXQAKAHMLOYBJSTRKFFMBE");
    tmp_msg_0.text.assign("FUIYPQVGVTPQIIDIYHYGNXVKEOPSVLWOOLJSQFVTDLRRJXBFZLCMWSOHUSAPXSQMHSKSCAUZBMWOCPYYYKBQUZPJPOJDVNHOWTBIBEFUNFMZQCHGOVUMAEB");
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
    msg.setTimeStamp(0.02456791403745373);
    msg.setSource(58564U);
    msg.setSourceEntity(85U);
    msg.setDestination(21867U);
    msg.setDestinationEntity(190U);
    msg.command = 174U;
    msg.htime = 0.5536635765751632;

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
    msg.setTimeStamp(0.20282309789376762);
    msg.setSource(64591U);
    msg.setSourceEntity(226U);
    msg.setDestination(24602U);
    msg.setDestinationEntity(239U);
    msg.command = 18U;
    msg.htime = 0.3713353327939317;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.htime = 0.7601567137908878;
    tmp_msg_0.context.assign("JATWTEEMGHLYCZSQBBPKORSOJJJRSKXQCSBNOHUWNWXYFFCZLXLDEDASFATOTUPGXBMTFKQVMGWDEJWEXFI");
    tmp_msg_0.text.assign("BWADXFASRQROWQQYXNMGAMPUEGLECFEMZLXVXQKKEOIJKPPIURBSHHBARLNNOYFVGQPNLQRWYNMADBWORSJTSIVHRJJFIYCEIEVFBIDUGFSXLSCGS");
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
    msg.setTimeStamp(0.766258492011477);
    msg.setSource(35288U);
    msg.setSourceEntity(128U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(237U);
    msg.op = 196U;
    msg.file.assign("IAQXYNLEPNLRHZTWKEDDDSYNVXDHJDNNAMKOGIUPRTSQWPYOJWDDZTNIALCIAZLGXQGHVZKYLKFYLLKCMDAPCMIPPPDROUVAOAHLTFGILGAKDSVBMZABSIOGYUCCJRQVERRFNVECTWOVRIWEQWZWEBUHPYEKIOSJESJKSQMSXXQTMXJBRQFJBHMMJZNREBZ");

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
    msg.setTimeStamp(0.8624928668416993);
    msg.setSource(20845U);
    msg.setSourceEntity(127U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(93U);
    msg.op = 222U;
    msg.file.assign("ODYVAMLWDMYNUZPNQGSYKSIBAJGJMAGVPHDHSYTKWIZKMKBWWTIXHZPLCIJBTCIDTOSAWOYDUVBKNGJIRZBUGRENUQCHKHNF");

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
    msg.setTimeStamp(0.3144204999994794);
    msg.setSource(38601U);
    msg.setSourceEntity(180U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(248U);
    msg.op = 15U;
    msg.file.assign("JUGSALZSWACKZYQRTLHOZLIMKTWNOBJJHFQZXIVAFUWJBFLTAJTZPFDPKYXXUKYMCWJWGIQYIYKLLEACQIFGDNPBHKTBEUHIVDT");

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
    msg.setTimeStamp(0.785820413690335);
    msg.setSource(39172U);
    msg.setSourceEntity(91U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(142U);
    msg.op = 204U;
    msg.clock = 0.34679993304378576;
    msg.tz = -92;

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
    msg.setTimeStamp(0.9479378418635181);
    msg.setSource(63645U);
    msg.setSourceEntity(254U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(134U);
    msg.op = 229U;
    msg.clock = 0.0695570885394663;
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
    msg.setTimeStamp(0.8197709944491146);
    msg.setSource(48658U);
    msg.setSourceEntity(78U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(250U);
    msg.op = 161U;
    msg.clock = 0.8801220302052364;
    msg.tz = 102;

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
    msg.setTimeStamp(0.5789985806023237);
    msg.setSource(31052U);
    msg.setSourceEntity(184U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(75U);
    msg.conductivity = 0.6165596262617832;
    msg.temperature = 0.9924627061524389;
    msg.depth = 0.1109049101302465;

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
    msg.setTimeStamp(0.6918395945666104);
    msg.setSource(34310U);
    msg.setSourceEntity(65U);
    msg.setDestination(27179U);
    msg.setDestinationEntity(101U);
    msg.conductivity = 0.40707024953892135;
    msg.temperature = 0.7799628286451018;
    msg.depth = 0.0812915856764167;

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
    msg.setTimeStamp(0.17551743720283242);
    msg.setSource(53760U);
    msg.setSourceEntity(212U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(121U);
    msg.conductivity = 0.4034811393811344;
    msg.temperature = 0.1477113748352782;
    msg.depth = 0.5677054208685217;

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
    msg.setTimeStamp(0.5873963963883206);
    msg.setSource(38109U);
    msg.setSourceEntity(207U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(136U);
    msg.altitude = 0.989996251991882;
    msg.roll = 50455U;
    msg.pitch = 11709U;
    msg.yaw = 61178U;
    msg.speed = 6313;

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
    msg.setTimeStamp(0.7375567505218094);
    msg.setSource(29124U);
    msg.setSourceEntity(17U);
    msg.setDestination(35282U);
    msg.setDestinationEntity(56U);
    msg.altitude = 0.2575550656261989;
    msg.roll = 49550U;
    msg.pitch = 954U;
    msg.yaw = 1176U;
    msg.speed = -994;

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
    msg.setTimeStamp(0.22240587939227852);
    msg.setSource(38377U);
    msg.setSourceEntity(98U);
    msg.setDestination(37998U);
    msg.setDestinationEntity(59U);
    msg.altitude = 0.43565913775413345;
    msg.roll = 26261U;
    msg.pitch = 9676U;
    msg.yaw = 13983U;
    msg.speed = 19445;

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
    msg.setTimeStamp(0.37991983647526273);
    msg.setSource(44491U);
    msg.setSourceEntity(88U);
    msg.setDestination(39421U);
    msg.setDestinationEntity(70U);
    msg.altitude = 0.8611015239218824;
    msg.width = 0.012616750180528324;
    msg.length = 0.6249308845457517;
    msg.bearing = 0.37502577812883753;
    msg.pxl = 14319;
    msg.encoding = 226U;
    const signed char tmp_msg_0[] = {115, 114, 35, 98, -107, 48, 96, 98, -45, 116, 18, -16, -116, 60, 34, -121, 30, 75, 87, 15, 3, 122, 29, -32, -96, -123, -53, -113, 124, -48, -98, 9, 28, -13, 115, -58, -121, -95, 99, 103, 54, 56, -4, -7, -1, 114, 104, -81, -5, 83, 12, 48, 78, 38, -15, 116, 84, -62, -26, -106, 89, -15, 3, -46, -125, -15, 55, 27, 38, -36, 72, 108, -38, -54, -71, -110, -64, 80, -105, -5, -123, 26, 103, 58, 110, -72, -41, 43, 109, -31, -96, 22, -69, -105, -71, 64, 21, 33, -58, 0, 82, 34, -49, 109, -73, -92, 63, 22, 63, -104, 12, -121, 72, 97, 6, -2, 23, -17, -93, -40, 86, -1, -52, 83, -12, -104, -45, -2, 37, 22, -80, 108, 85, -91, 117, -106, 68, -88, -49, 14, -105, -110, 33, -87, 49, 104, 109, 36, -69, 98, -14, -60, 40, 43, 4, 109, -27, -39, 93, -97, -19, -51, -37, -122, 59, -33, -23, -34, 89, 123, 91, -43, -90, 63, -56, -21, 7, -113, 100, -97, 31, 32, 108, 73, -42, 39, -3, -9, 87, -88, 55, -125, 34, 123, 112, -80, -100, -109, -14, -48, -22, 49, 10, 72, -33, -14, -11, -37, -4, -68, 82, 50, 16, -112, 53, -66, 75, 7, -80, 16, -94, 93, 122, -83, -44, 96, -6, -79, 42, 31, 93, -111, 124, 115, -123, 15};
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
    msg.setTimeStamp(0.8404353988445206);
    msg.setSource(1396U);
    msg.setSourceEntity(99U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(150U);
    msg.altitude = 0.9181167751209964;
    msg.width = 0.14001547474177922;
    msg.length = 0.20423668446962095;
    msg.bearing = 0.5411619317809893;
    msg.pxl = 1457;
    msg.encoding = 198U;
    const signed char tmp_msg_0[] = {-111, 20, 81, -33, 1, -58, -58, 92, -33, -126, 125, -75, -6, 19, 113, 100, 6, 47, 47, 89, 29, 125, -59, 118, 94, 117, -60, 81, 12, 9, -124, 94, 25, 20, -125, -86, -24, 29, -70, -78, -30, -57, -34, -67, -3, 55, -117, -96, -127, 93, -61, 41, 76, -25, 99, 116, 29, 107, -2, 66, 84, -70, -71, 8, 31, 43, -41, -38, -32, -72, 53, 110, 58, -100, -58, -49, 78, -70, -37, 55, -3, 106, 47, -95, 44, -19, 9, -79, -83, 90, -7, 64, 40, 82, 74, -112, 41, 120, -121, -107, 29, 33, -64, -17, 60, -80, -17, 4, 27, 51, -4, -99, 18, -116, -120, 87, -75, 8, 115, 98, 74, -38, -115, 51, -21, -8, 103, -58, 1, 55, 97, 33, -122, -19, -89, 70, 71, -44, 43, 110, -107, 47, -100, -125, 90, -80, 11, -64, -95, -116, -93, 46, -16, -118, -80, 68, 10, -10, -54, 17, 109, -55, 7, -53, -107, -49, -58, 98, -77, -23, -57, -46, -11, 59, 24, -124, 62, -4, -126, -31, -40, 7, -7, 27, 109, 10, 61, 98, -111, 41, -52, -34, -54, -15, 109, -36, -46, -38, -100, -96, -34, 95, -27, 108, 17, -17, -22, -87, 64, -99, -24};
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
    msg.setTimeStamp(0.9780447532243223);
    msg.setSource(44182U);
    msg.setSourceEntity(227U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(175U);
    msg.altitude = 0.030103990001469905;
    msg.width = 0.9055252151307593;
    msg.length = 0.6742377645524993;
    msg.bearing = 0.7306255144414256;
    msg.pxl = 14929;
    msg.encoding = 236U;
    const signed char tmp_msg_0[] = {34, 106, -35, 13, 56, 40, 60, -3, 23, -47, 0, 79, 22, -58, -113, 56, -103, -33, -27, -43, -88, -33, 85, -32, -62, 20, 26, -97, -53, 31, -111, 10, -117, -32, -80, 123, -51, -1, -103, -64, -62, -49, -83, 103, 85, 48, 4, 48, 16, -83, 22, -42, -111, -104, -79, -23, 7, -40, -87, 62, 126, -90, 92, -63, 94, 27, -118, -60, 21, -79, 24, -44, -103, 120, -110, -71, 37, -16, 111, 33, 10, -56, 80, -78, 35, 50, 57, -116, -86, 28, -75, 11, -57, 114, -126, -98, 43, 63, -121, 30, 66, 120, 13, -63, -48, 103, 16, -53, 113, -110, 16, 102, 107, -41, 116, -48, 81, -38, 17, 4, -58, 26, 77, 15, 96, -115, 91, 68, -32, -11, -51, -18, -54, 43, -63, 65, -35, -104, -56, -36, 55, 29};
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
    msg.setTimeStamp(0.3166253848132603);
    msg.setSource(10871U);
    msg.setSourceEntity(229U);
    msg.setDestination(36986U);
    msg.setDestinationEntity(102U);
    msg.text.assign("YGIBWVYBWTHVBITYMNLOMHVTHEUNAMVPSZYCJLFVSCINGBGPCUXIMTEFQIZDQKRZAGFZFZRMBATDRUOYOSWPUDCMEPTOJEIRIKFNDSSZBWGDPPMCYAOCNOLSBYTMGJKAXKAWBERKWDKJWCHHXVZCKKUEDVLQTPLZUFIAVLNSKJXLSHGQZEUODHSLPJXZJAEWXQBCUNFDM");
    msg.type = 30U;

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
    msg.setTimeStamp(0.6499094692093283);
    msg.setSource(21221U);
    msg.setSourceEntity(229U);
    msg.setDestination(37605U);
    msg.setDestinationEntity(106U);
    msg.text.assign("LANASDHPUJJJEOLRTOKHVSTDVHYBEUECUASFFVHRYOBNKOPNTTSJLURJFVOWMWWTJFQXMESXFWEQWCUEKQVWZEPPHUYGERYGMIVNALLSXNFJCMHJDXRFACCPKGRAWGVJLGWBFGOMXAVLIDHQKVNKCXIXPXNSQMZPQHRLJYNKQKAAHUCHDCVDYLIKLYMBORXRZDZPDSBIOZEMTNOGBXBMTFUQUGQGWOPKZCZZTIPB");
    msg.type = 152U;

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
    msg.setTimeStamp(0.5791928999141122);
    msg.setSource(2060U);
    msg.setSourceEntity(163U);
    msg.setDestination(14955U);
    msg.setDestinationEntity(236U);
    msg.text.assign("YVNPNCUSBASTEXDHVKHLNPJJDQTQDVEDCTZLCLIQNUYTZGESGPFKVLMCRXMHEAFWAQNAJIXSPORFEKBOCIDPWMSQFNVJGEQBOEUUBMW");
    msg.type = 129U;

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
    msg.setTimeStamp(0.7720556846296487);
    msg.setSource(58813U);
    msg.setSourceEntity(150U);
    msg.setDestination(59649U);
    msg.setDestinationEntity(109U);
    msg.parameter = 58U;
    msg.numsamples = 189U;
    msg.lat = 0.7624412911125128;
    msg.lon = 0.01179053942377617;

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
    msg.setTimeStamp(0.42456751252460123);
    msg.setSource(45173U);
    msg.setSourceEntity(226U);
    msg.setDestination(25748U);
    msg.setDestinationEntity(83U);
    msg.parameter = 204U;
    msg.numsamples = 130U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 14579U;
    tmp_msg_0.avg = 0.7033238448233038;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7698568071468554;
    msg.lon = 0.009427214737240397;

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
    msg.setTimeStamp(0.34799921322245086);
    msg.setSource(4204U);
    msg.setSourceEntity(153U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(70U);
    msg.parameter = 119U;
    msg.numsamples = 168U;
    msg.lat = 0.257191905849132;
    msg.lon = 0.9124134093635039;

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
    msg.setTimeStamp(0.44278633442008763);
    msg.setSource(18224U);
    msg.setSourceEntity(36U);
    msg.setDestination(55792U);
    msg.setDestinationEntity(244U);
    msg.depth = 36563U;
    msg.avg = 0.8539422595110499;

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
    msg.setTimeStamp(0.9630119104827319);
    msg.setSource(6457U);
    msg.setSourceEntity(39U);
    msg.setDestination(48710U);
    msg.setDestinationEntity(72U);
    msg.depth = 14442U;
    msg.avg = 0.6757426185756569;

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
    msg.setTimeStamp(0.2214683404055986);
    msg.setSource(1456U);
    msg.setSourceEntity(20U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(193U);
    msg.depth = 21250U;
    msg.avg = 0.9850760572995669;

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
    msg.setTimeStamp(0.5380046640798392);
    msg.setSource(56028U);
    msg.setSourceEntity(41U);
    msg.setDestination(6315U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.7775357829891759);
    msg.setSource(3957U);
    msg.setSourceEntity(113U);
    msg.setDestination(3844U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.868439810795499);
    msg.setSource(23942U);
    msg.setSourceEntity(83U);
    msg.setDestination(671U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.8406281739427351);
    msg.setSource(50462U);
    msg.setSourceEntity(173U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(227U);
    msg.sys_name.assign("WNTQPCVSWOAGESNPWSQZFLXIHKLUKPVNJILVIMROUMTGQMXCXOJYUWFZYBRBXCOMSZKTINKEBSPAIXBLPAUONMSFHKRTHQMTHDHDGCRETKJKJEBEVNTYRUXOJIKDHEYYURYSHHSGLIXGPQXCDZCPAWDCJVXJDXQQJYGOKRSJBVPBTVLRGOCQGCDPNARALWFLUMIYTZAOFHLTENVLUFDR");
    msg.sys_type = 49U;
    msg.owner = 715U;
    msg.lat = 0.44646294548650056;
    msg.lon = 0.7931701454132107;
    msg.height = 0.7675614222745883;
    msg.services.assign("LNJCTUEVKTGPKDDJFPZKIEUTELPZNMVHJUOVNFIWNOQWWSRBLDQRFSYLUEATRZYOJZGPIKFYMCFHGAGEEDGPWBXHHATZJXMEGOTCLUWLDUMSHMBSQGJKJSRTXHGXYNDYIYNXLAFIURQNUFLQBKPKCKIIBQSXKRWCUCBQVWYNDRROYJMCQXDFDPPPOZVRTZCSBXWAZSZXMH");

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
    msg.setTimeStamp(0.9925818011570529);
    msg.setSource(13461U);
    msg.setSourceEntity(131U);
    msg.setDestination(33000U);
    msg.setDestinationEntity(36U);
    msg.sys_name.assign("EQZMSXLVXJVDHJDFURGSLFAHNMDCBRRINILPGIBIJVQGVXUMICILUSHBMQPUUXTTNYFCHYENDZRUHHASSYADAJBPOKZWFNXAMXDZGZBVDKRXTOPOBOQCJVEAIHLXVCCEKORMFQFQBKJETKPKTEDFSWQHEWGOWI");
    msg.sys_type = 156U;
    msg.owner = 11280U;
    msg.lat = 0.2549501511842297;
    msg.lon = 0.4655168592675004;
    msg.height = 0.5173999097241649;
    msg.services.assign("OFNPCYGPALBLYSLYJTIINZDAVYDNHLOXZYTHOPBWMWUTTXXAKZPXORKSMFFVESYMDTHORGKYFWGHRSQUMCRPSMYZBCLAKHVBJUNZAIWMXRVERSKKEDWUTBQCPDSNQTXEJZTOXVCAPNLBJQUUVEOLQPRECFQZSTPIZHEKJVGKZUNFECBBKWTPNNXJOMIRGSURLVAFMEJFIUIVFCQCMDIGEIDFXDGWMLLJZQNQ");

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
    msg.setTimeStamp(0.6907557707257314);
    msg.setSource(32480U);
    msg.setSourceEntity(126U);
    msg.setDestination(62532U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("LMMMSCZFAONPNGHLQMDOZMSGRLJK");
    msg.sys_type = 158U;
    msg.owner = 52295U;
    msg.lat = 0.09012313288277851;
    msg.lon = 0.6974356029898804;
    msg.height = 0.3122172641599713;
    msg.services.assign("GJILGFLLTZWJNOIUEHIDJMRIVBEMOAUKRQNZDXXRXPUEXVNKGZQIYRHQNSHSWCGUJLMTECADESABFKFJEGRWIJIYYITSOAWXCVMORTJZTPFZHAHCVVRPJHPJXGYKOBFDNWRFDVXDBUUZUCBOCBQEBPUKGALWBPTNOEKTWOSS");

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
    msg.setTimeStamp(0.7400439847853084);
    msg.setSource(46799U);
    msg.setSourceEntity(98U);
    msg.setDestination(67U);
    msg.setDestinationEntity(133U);
    msg.service.assign("XXHQNYLOTPFDFNKNNMTJFUEJVTWZQPBMHSJVZVWCMGWZMIGJWBDA");
    msg.service_type = 187U;

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
    msg.setTimeStamp(0.207087501034942);
    msg.setSource(28074U);
    msg.setSourceEntity(218U);
    msg.setDestination(56533U);
    msg.setDestinationEntity(85U);
    msg.service.assign("EXLNNPWGYQXPQVYKKNVGUWDCFBNUGBZZAOCYZRMTUICSVTDFMFXWDDBIKWUUOVWB");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.16071293163368294);
    msg.setSource(35657U);
    msg.setSourceEntity(37U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(129U);
    msg.service.assign("ILYONWEPRXNAMVOXYEUFT");
    msg.service_type = 6U;

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
    msg.setTimeStamp(0.4118005207853198);
    msg.setSource(51968U);
    msg.setSourceEntity(93U);
    msg.setDestination(49727U);
    msg.setDestinationEntity(223U);
    msg.value = 0.027308279268444924;

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
    msg.setTimeStamp(0.4977257116256515);
    msg.setSource(40313U);
    msg.setSourceEntity(249U);
    msg.setDestination(24333U);
    msg.setDestinationEntity(20U);
    msg.value = 0.612227851311556;

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
    msg.setTimeStamp(0.5931652852215494);
    msg.setSource(11977U);
    msg.setSourceEntity(52U);
    msg.setDestination(55612U);
    msg.setDestinationEntity(253U);
    msg.value = 0.3392872898286031;

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
    msg.setTimeStamp(0.37501951205864503);
    msg.setSource(16563U);
    msg.setSourceEntity(33U);
    msg.setDestination(24903U);
    msg.setDestinationEntity(98U);
    msg.value = 0.3495631179204628;

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
    msg.setTimeStamp(0.5166152898819123);
    msg.setSource(37382U);
    msg.setSourceEntity(37U);
    msg.setDestination(33718U);
    msg.setDestinationEntity(95U);
    msg.value = 0.15621281021375588;

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
    msg.setTimeStamp(0.04346200675656031);
    msg.setSource(63442U);
    msg.setSourceEntity(192U);
    msg.setDestination(48711U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8587904841442892;

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
    msg.setTimeStamp(0.9498796689679915);
    msg.setSource(9917U);
    msg.setSourceEntity(19U);
    msg.setDestination(35567U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6372628029436972;

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
    msg.setTimeStamp(0.8548069435589064);
    msg.setSource(44145U);
    msg.setSourceEntity(10U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(129U);
    msg.value = 0.27091301406566637;

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
    msg.setTimeStamp(0.7977794175874915);
    msg.setSource(55556U);
    msg.setSourceEntity(194U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(5U);
    msg.value = 0.08538558831149634;

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
    msg.setTimeStamp(0.08845801467386372);
    msg.setSource(21174U);
    msg.setSourceEntity(202U);
    msg.setDestination(53713U);
    msg.setDestinationEntity(193U);
    msg.number.assign("DQOFPNVEXHMUABGRHZLDYROXCFGOMZTXWTSNACLWWDKODQXDLRFFGACKBATYLCLGAMNBWUIAQFWUIOPFJTGPYFGRPNEJUSNKPBZJKDYZYQMIKQBDQJWWJUUSFXBCJFVMQHCUZPCOLRBPSBGBVTELRFUAJVIXWETRIEEKREOKIGSAZHMVKYNNEWIGYCHCUOVYYTZCXPGXSBHVTLRAZHAITUJVNVMZIJMSKWQYHXDTSOMPLNQZHXDKD");
    msg.timeout = 26099U;
    msg.contents.assign("FRJTSPTHBNXZKKSEOQMFFVIVLUKSDQOZHPCDYVOSMFNAWXLUTRQHDZXBOZUCANUVMLBIEJAQUEWYVKMGYNLCOBHGVGRESKHOXCNGSWRUJCRXTECGVLBQJWUHVIJWUSFEGJWFLDPWKTYPXYOBZJIRJRAIJNGRNPYTTZBZJIIPHWRQTNQGP");

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
    msg.setTimeStamp(0.5758715811540449);
    msg.setSource(47415U);
    msg.setSourceEntity(232U);
    msg.setDestination(64504U);
    msg.setDestinationEntity(216U);
    msg.number.assign("FCFGDZZYAWHEVHCXGRNMMIBWVPGNJGGSTHVNGNLHARRRYQKBPKFWOTVGBVIYMLNUCJIPABPNZKVAYVFUXJMCRQWQCLRPLFLSDXKDPIGIMKKSYXGYBAATEXAWVLRCXHJPRMOKGKDBFUENPJQSCZPXEDRQSLJJTDQIXWQZZUPSOTWUMXUCBYUDMWRDOCSNLYFQSHJKYXMTHLIOOZ");
    msg.timeout = 24891U;
    msg.contents.assign("MAYCXJSRTXSGHGGZBHMZBSZGJDIZDBPKUTUFTXTGJXFXTVRASWRIRVNVCLQEUIULLCELHFPKYREMNIMPPVSYDZLBSIOZJXSRERNFCBJ");

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
    msg.setTimeStamp(0.014791432631929502);
    msg.setSource(22620U);
    msg.setSourceEntity(99U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(173U);
    msg.number.assign("XKVLYUKTSELEDZUNXNDWPYKAXAZJMHDGPHAXCZGYYBYOMZBRSUIFNJGKHHABVZPLAKSQOC");
    msg.timeout = 65044U;
    msg.contents.assign("YRAFNEBTQQZGDISHVIFTXFLWHCFMGXBOAQJEKYATB");

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
    msg.setTimeStamp(0.8146124932120696);
    msg.setSource(30612U);
    msg.setSourceEntity(6U);
    msg.setDestination(24553U);
    msg.setDestinationEntity(234U);
    msg.seq = 425966774U;
    msg.destination.assign("TCVYFVFUSHCIRFEALJOKCOZBAXGDWNDAJLCQLURZOVFDWTYUUICTBWGAKPSYBRNOENSPPZAMOUUASGPTYBXTIFAPKOJUUBVLEQAYHKQGVELIMXNNQMOLJYZDHBYEZMVKUAPWQIWHZSFJZQFEDSWHHMVEDVHNKNSSMROYPLRHLXFBRMPXJLGWNKXGXCRSTITTQJBFOMKHCTHVDDRCDGESFQXRLBUZXWIMQTGNVIEAWCPJI");
    msg.timeout = 41754U;
    const signed char tmp_msg_0[] = {-21, -77, 33, -52, 31, 103, -126, -115, -14, -39, -105, -31, 18, 115, -65, 72, -67, -25, -7, -126, -102, 106, 125, -55, 50, 29, -7, -8, -41, -62, -62, -127, -40, 89, 108, 120, -58, -26, -24, -98, 97, -44, -120, 94, -25, -77, 97, 88, -51, -95, 98, 117, 74, -29, 93, 87, -39, 55, -31, -75, -121, -104, 79, -7, -122, -60, 5, 45, -9, -16, 54, 72, -53, -13, -47, -7, -78, -14, 73, -106, -109, 104, 65, -4, 99, 59, 117, 1, 4, -50, -40, -22, -122, 67, 17, -37, -75, 20, 103, 91, -87, 107, -61, -70, 126, -111, 59, 69, -31, -53, 7, 79, 7, -64, -15, -40, -60, -97, 109, 119, -34, 94, -39, -84, 63, 111, -76, 16, 31, 27, 114, 44, -24, -14, -18, 90, -21, -40, 70, -111, -111, -33, 0, 6, -87, -76, 4, -82, -5, 98, 35, 0, -115, 91, 10, -106, 75, 104, -107, -56, 56, -113, -55, 13, 85, 8, -49, -34, -126, -80, -92, 52, 39, -31, -122, 86, -74, 96};
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
    msg.setTimeStamp(0.3414630866723818);
    msg.setSource(18706U);
    msg.setSourceEntity(28U);
    msg.setDestination(58202U);
    msg.setDestinationEntity(238U);
    msg.seq = 3064824881U;
    msg.destination.assign("EGIVBUHLKDWDATNQHFAWNJRHEJNNXQBMUQWBDRTYBCUTMODXKQYEPDAVEBM");
    msg.timeout = 6924U;
    const signed char tmp_msg_0[] = {7, -81, -15, -120, -81, -14, 54, 74, -87, -34, -90, -31, 81, -89, 105, -124, -100, 73, 41, 29, -27, 96, -69, -38, -59, -49, -59, 55, -66, 67, -27, -75, 101, 16, 115, 90, 29, -95, 21, 53, -83, 22, 102, 110, 16, -102, 86, -111, 123, -63, -120, 23, -43, 16, -124, 15, -10, 120, 46, -23, -11, 108, -106, -105, -38, -112, 46, 85, 25, 123, 77, 104, -80, 0, -68, 20, 16, -113, -86, -52, -95, -34, 88, -12, -46, 47, -78, 116, -127, -105};
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
    msg.setTimeStamp(0.1104899544999487);
    msg.setSource(21517U);
    msg.setSourceEntity(210U);
    msg.setDestination(48914U);
    msg.setDestinationEntity(120U);
    msg.seq = 4096527804U;
    msg.destination.assign("MTZFWFWZAWAQVBLAVDJOTCIUSIARVXUKJOIRVZTNQLLYUESAJBHWQPKLLDSCTDMHFPGMZWZUXYOGFGYTMPPCVASCVJMQMCKVUDOWHMXIGDXBXEGCLKRLBCOIBZNTXRVPACWCJNDIMOHQMNQRFYNJGFEBBTCWNPWJWZSOETQQQSFPEIGBOUOHMZQDRRRPPHGGRE");
    msg.timeout = 62674U;
    const signed char tmp_msg_0[] = {77, 32, 16, -110, 91, 9, -124, -91, 61, 38, 97, 7, -74, -87, 62, -85, 15, 5, 118, -2, -43, -45, 81, 30, 113, -118, 116, 106, 17, 98, 90, -61, -122, 30, 40, 30, -51, 44, -48, -57, 9, -66, -125, -25, 98, 26, -18, 47, 114, 35, -84, -10, -77, 2, -117, 89, 33, 48, -43, -121, -98, -114, -34, -117, -11, 104, 80, -40, -54, 109, 18, -24, 77, 121, -113, 45, -89, -29, -43, 15, 34, -63, -68, -105, -71, -10, -27, 89, 52, 29, -39, -56, 9, 36, -84, -67, 74, 62, 56, 99, -85, 53, -43, 62, 112, 29, -70, -9, 11, 88, -2, -40, 86, -28, -38, -81};
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
    msg.setTimeStamp(0.29572881434577325);
    msg.setSource(9539U);
    msg.setSourceEntity(196U);
    msg.setDestination(46187U);
    msg.setDestinationEntity(99U);
    msg.source.assign("KNZNYPGMXAPYXXVBRZBYDULWFWYCTVROCBCXHZKRJTYKNBADUKLXBXFDULXVSDDEZGWAFEBHUWDQRVBGKCSVLHCZOOGFRQZUQEGRHMHOVFMDEUKJPFPKZBJTHIAAPLSVYJONPHNNMJVJGDRGFSMWQESJIDWDCMMIWTIONQTMZXXIUKWLJQLITNURGPBAUEHMPMLEQ");
    const signed char tmp_msg_0[] = {-51, 10, -34, 96, -59, -83, 27, -119, -83, -103, -108, 48, 90, 39, -31, -109, -74, -103, 30, -47, 54, -46, 30, -94, 27, -126, 31, -8, -107, 117, 30, -98, 85, -84, 113, 10, -103, -4, -37, 51, 85, -46, -49, 126, -40, 46, 39, 112, -25, 26, 25, 43, -87, -88, -98, -24, -51, -6, 35, -7, -30, 126, 58, 21, -104, -68, -55, 28, 14, 75, -116, 60, 114, 96, 34, 17, -26, -1, 66, 3, 96, 35, 93, -77, 83, -55, 81, -71, -104, 91, 91, -22, 79, 40, -8, -104, 19, -101, -101, -98, -5, -109, 51, -42, 44};
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
    msg.setTimeStamp(0.5799956759043984);
    msg.setSource(58241U);
    msg.setSourceEntity(4U);
    msg.setDestination(51399U);
    msg.setDestinationEntity(169U);
    msg.source.assign("KQEOXZMFOQHDGPRPIRSNUDFENZJFCWOXYPCJTLABGIQVPGYCBSNWMFQWIAZJEQPKKMNYFBAPKPBHHRWJTVMBNUSHWJJDGQHPMECDTL");
    const signed char tmp_msg_0[] = {109, 57, 111, -98, 51, 32, -113, -102, -69, -88, 40, -107, 121, -28, -81, -40, -122, -42, -43, -48, 23, -47, 95, -1, 15, -22, -29, -53, -44, -108, -88, 91, -127, -118, -73, 39, -20, 63, -80, 77, -89, -112, -119, 30, -14, 125, 46, 79, -84, -92, 124, 112, -127, 123, -17, 99, 84, 109, 110, -37, -88, -82, -44, 14, -73, -49, 9, -30, 27, 26, 72, -54, -69, -115, 81, 44, -55, -50, -61, -124, 14, -16, -72, -126, 3, -79, -47, -16, 59, 112, 44};
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
    msg.setTimeStamp(0.41290383566271427);
    msg.setSource(13737U);
    msg.setSourceEntity(238U);
    msg.setDestination(13948U);
    msg.setDestinationEntity(25U);
    msg.source.assign("KUJVPYKCZVRAOIYKICKFTOWHYNJDFUISRUAHA");
    const signed char tmp_msg_0[] = {86, 13, 101, -86, 35, 79, 45, 73, -15, -117, -60, 42, 109, 65, 16, 111, 47, -68, 96, 9, -61, -97, 106, 50, 69, 30, 0, -122, 29, -9, 11, -14, 12, -99, -106, -85, -51, 69, -104, -8, 61, 115, -102, -56, -25, 46, 44, 98, -9, -38, -21, 65, 28, 82, -38, 38, -38, 13, -104, 114, 11, 26, -5, -48, -76, -51, -87, -32, 57, 1, -84, 76, -78, -119, 32, -18, 69, -72, -89, -5, -6, 13, 76, 60, -57, 113, 43, -93, 32, 116, 56, 82, 123, -117, 32, -64, 37, -20, 92, 106, 33, -18, 19, -27, 60, 84, -83, -60, -73, 112, 111, -38, -27, 10, -34, 65, -47, -40, -29, 99, 11, -35, 14, -17, 86, 67, -124, 72, -118, -79, -98, -77, 126, 35, 28, 97, -42, 26, -24, 86, -68, -102, -124, -7, 75, 90, 117, -18, 109, 35, 108, 28, 53, 118, -38, -60, 49, 123, 60, -111, 18, -93, 62, -12, -112, -94, -16, 3, -99, 64, -119, 44, -5, -115, -33, -28, -86, 44, -98, -36, -87, 117, 64, -17, -96, 9, -45};
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
    msg.setTimeStamp(0.8101306930135881);
    msg.setSource(47083U);
    msg.setSourceEntity(52U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(182U);
    msg.seq = 452038109U;
    msg.state = 121U;
    msg.error.assign("AVCBDJIUJPOAUIBKTTSIQVUEAOVGLAQVVJEZCCQEFSYPYKYXERQQWFKKMBXFYNZLNJJKASUDELHDZZZYXUESPQWOWCJKSTNPKDFVUCCXHBPFLNPSIGKIBDCNJGQXGWCMEMIGTRRYWSDXAVORATLXROXNGYRFUHZIIHEWFVTKNHSJDARWCL");

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
    msg.setTimeStamp(0.4649122457140825);
    msg.setSource(34969U);
    msg.setSourceEntity(196U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(67U);
    msg.seq = 1536651826U;
    msg.state = 207U;
    msg.error.assign("EDJRXPVFULAXUSYAMRLEHKIRUJYBLZWHZCSFTJMAUKSZFXYRXVWURNBHASXTJPSPNVQDYQC");

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
    msg.setTimeStamp(0.9019758722627708);
    msg.setSource(28801U);
    msg.setSourceEntity(26U);
    msg.setDestination(8601U);
    msg.setDestinationEntity(190U);
    msg.seq = 3881711432U;
    msg.state = 167U;
    msg.error.assign("ZHJZFCRUDRSEHHZKTDBUZSLKXWPJWJCCDOYAZIYTFXOPYIVGZRCKQHNNXBSOBVKZGNIHGUDGAIRFFEFYIEHITZSAHCMLIPCHQDXUVTOOWMAPOFQNRJCOQPVSGDSDEYWWFUMUUWKRDHJLXLKYQXLWWFNZYTQOISWEKJULSDVKEBPSMXBXBBA");

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
    msg.setTimeStamp(0.33690664453418206);
    msg.setSource(35698U);
    msg.setSourceEntity(132U);
    msg.setDestination(15611U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("EVUOPFGICIJFENAEWFXXAYUIXHRQAMBXRHMZUODAWZJPSJQB");
    msg.text.assign("UBTNHAVUSEGVEABXFPUMFQXYNJZNGLHGMHJIECNNJTMYOLEIBSHXJIZKHSGNKQLRXMFKDJPPGSYAWVRJJI");

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
    msg.setTimeStamp(0.5369809497937965);
    msg.setSource(46531U);
    msg.setSourceEntity(153U);
    msg.setDestination(50403U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("KMUWYBDDQUIHEEESLTSHRIHHLLRYCQPMOKAHKPFDZGGJCRAVIKYAQXFYGZALAEXHOGOMTOBSIYXUFCWPZKALFPWCIVCIOFIZCPLVZKOGKKWIHJEMJDSAUGMQSCDROJQTRYRBJNNXHGXFWEQLTNBEQRGZWMKTABYJLJJPGXFOETAPNVMUCDETDRMQFLZPVLNRJZNPMNATEBWNHYCPZFYXFDVJSUVNVNWKMBGZXUY");
    msg.text.assign("JUCWLDYEZJXHKFGMUHCFKVMXREUBVWERSVCLKHIVQFEYJHNFQSWKZUSSNCQJSBNJIBTPPTTPRMYRGOMCVLLIKMADDZNHGDYTGXAPZEOOQFDBLYOPOWHXUSVMRKUEKFTJVNZEUORUMTTDACFQIBJWCRAI");

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
    msg.setTimeStamp(0.4091816326366964);
    msg.setSource(54497U);
    msg.setSourceEntity(223U);
    msg.setDestination(38388U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("KYPQWUGEMWRKCZHNQQKKAPOASQZUCBFJMLBWKRKCWYNMBERSOIFGYLHHRFZUCGQFJMSXZIRGOKJOTDHLXSRDHDVGNAQZETDGHJJUWCYUNSTAKATOWOMEUCPICXPA");
    msg.text.assign("QRBRYZDUYBQXSTXMSWAJROWKHVPWXEBLSKODKKIKFIOCZTELJECIUZDBLXIUDHWQGGRJIXBMXHECVDWUVUZQHRMZQWHSOHNGNVQHJGTFMSIUARDEZFYWSZZLYTXFCAUTWEPHLOKJGABNNAFMMBDALNOFVNVPEKEGLDUEXFCQMBJYOLS");

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
    msg.setTimeStamp(0.6329081708493729);
    msg.setSource(59151U);
    msg.setSourceEntity(179U);
    msg.setDestination(12112U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("ZAETMJZDEKNBDYVYQMBXGLCYCAWLUXGOPVWLPLFSPSICUGGSBDFXBTXESICDPFZ");
    msg.htime = 0.1423021358582196;
    msg.lat = 0.3468474660735662;
    msg.lon = 0.5501255404727854;
    const signed char tmp_msg_0[] = {61, -123, -117, 65, 116, -34, -89, 125, -103, 96, 119, 84, 112, 98, 82, 52, -117, -19, -21, 62, 64, 35, 45, 80, 119, 98, 86, -18, -43, 10, 126, -79, 58, 52, 104, 99, 70, -25, 52, 74, 9, -123, 94, 25, 55, 47, 82, -114, 61, -116, -88, 88, 68, 38, 55, 25, -86, 48, -97, -68, 79, -22, -109, 40, 73, -125, 99, -48, 14, -61, -56, 110, 115, 25, -85, 8, -49, 38, -62, 56, -21, 32, 114, 21, 97, 10, -115, 16, 108, 126, -22, 12, 37, -82, 61, 66, 69, -14, 126, -2, 95, 117, -60, 25, -100, 9, -120, 72, 113, 47, 43, -83, -38, 12, -108, -110, 84, 112, -16, -87, -105, 4, -115, 79, 52, 18, -12, -83, -93, 100, -79, -35, 83, -21, -99, 17, -116, -40, -113, 123, -85, 26, -97, -118, 62, 105, -39, -78, 110, -50, 33, -77, 27, -105, 36, -123, -100, 81, 92, 5, 3, -127, -7, 95, -101, -81, 30, -113, 82, -31, -47, 122, 24, 58, -90, 125, 46, -36, -28, -88, -44, -123, -113, -39, 100};
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
    msg.setTimeStamp(0.0014907675677500176);
    msg.setSource(6575U);
    msg.setSourceEntity(117U);
    msg.setDestination(63663U);
    msg.setDestinationEntity(148U);
    msg.origin.assign("EHMSRVKLNPBJAVXHJUTFHNULUOLRYADABZSIHSMZCVXJQLTVHYJVHUTDFFNGKDNWKQGEAZNOAWWLCQALVROJSOPYXCFFQOIFCNPYTPIWQDZEWFRCRANEHAIZYFGHQTKNIZGNBCDXKTRYCOGESIJMGSUTUBZRBZKQMFXMPYZMZJIGTRXEUDUBRTSI");
    msg.htime = 0.6469155736928884;
    msg.lat = 0.08250688736839507;
    msg.lon = 0.7885097183701791;
    const signed char tmp_msg_0[] = {81, -92, -18, 16, 33, 109, 73, -57, -123, -97, 111, -35, 49, 20, 68, -51, 118, 62, -5, -83, -20, -61, -52, -58, 90, 82, -21, -93, -34, 43, -91, 75, 103, 38, 43, -123, -114, 38, 29, 98, -61, -102, -22, 49, -93, -12, 29, 27, 84, -99, 17, 109, -47, -39, 89, -81, 19, -109, 118, 126, -34, -71, -68, 38, 60, -36, 121, 11, 120, -1, -125, -89, -80, -10, 90, -69, 26, 106, 85, -30, 68, 26, 19, 82, 76, -42, 5, -56, -31, -70, 110};
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
    msg.setTimeStamp(0.036646730079125);
    msg.setSource(34272U);
    msg.setSourceEntity(139U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("PBSROMOGLTBUSKGFAIZQEAHNMIHPYEBDTZYCIUWPEJQVOYSRHUBJYACHTFPEBYAJJBCGLAPPIXQLDAXXWGTUUKKOOVUBUAXUWHFDLOHRQQHFIRYXBRGZFHVHIECFDNOYJNLKQJDFVKEQNPDFPXWVGDJKNVHXLZIFWLV");
    msg.htime = 0.09139689154851593;
    msg.lat = 0.6326548625244032;
    msg.lon = 0.6069519566452684;
    const signed char tmp_msg_0[] = {70, 81, 94, -67, -4, 37, 63, -16, -32, 25, -88, -113, -26, -96, 124, -70, 19, 35, -18, -107, 121, -3, 74, -71, -17, -48, 119, 95, -123, 43, -82, -67, -113, 81, 10, -40, -17, 5, 101, -3, -124, -25, -63, -109, 106, 22, -17, -58, -19, -56, 2, 0, -59, 20, 42, 90, 22, 18, 31, -24, -22, -112, 88, 1, -119, -4, 122, -81, 67, -119, 68, 112, 45, 100, 26, 123, 77, -86, -90, -11, 53, -7, 47, -50, 80, 54, -22, 20, 92, -5, -109, 19, 89, -24, 39, 122, 77, -112, -63, 47, -69, -5, 2, 63, -115, 33, -52, -103, 111, -43, 51, -94, 4, 97, 63, 94, 22, 55, 61, 50, 24, -11, -42, -27, -74, 20, 54, 67, -95, 75, -1, 3, 45, 76, -82, 102, -15, -78, -24, 21, 105, 35, -128, 108, 23, -55, -121, 13, 36, 38, -91, -70, 13, 93, -67, -118, -51, 22, -122, -125, 98, 41, -59, -123, -57, -112, 12, 103, -25, 88, 122, 68, 87, 111, -2, 121, 49, -32, -50, 33, 72, 10, -10, 2, 8, 82, -88, -70, 122, 36, 91, 42, 28, 111, -117, 56, 64, -9, -105, 115, 23, -54, -95};
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
    msg.setTimeStamp(0.5319276842169279);
    msg.setSource(53319U);
    msg.setSourceEntity(127U);
    msg.setDestination(58565U);
    msg.setDestinationEntity(247U);
    msg.req_id = 37708U;
    msg.ttl = 40600U;
    msg.destination.assign("RUSTJOQWQURHXSPPDPAQGPRKQNGWWNCVFZGTILANQZEAQJYFBPIXKMLBYXJGZKOHKKKIDZWRTGERJTCUYELDWMHWISMFHLBRIJHZNYOTSXNPTBXXHVCDLSSOELMVVRFCNTFWOOECVSV");
    const signed char tmp_msg_0[] = {111, 105, 0, -45, -48, 107, 107, -101, 62, -61, -82, 58, -87, -19, -110, -54, -119, 92, 76, -41, -110, -71, -29, 125, 118, 45, 39, 32, -80, 112, 122, -19, -34, -49, -106, 21, -126, 35, 96, 104, -22, -118, -110, -30, -76, -95, 72, 2, 46, 75, -70, -107, -82, 19, 12, -37, 33, 50, -121, -77, 95, 48};
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
    msg.setTimeStamp(0.8641561685841652);
    msg.setSource(7920U);
    msg.setSourceEntity(42U);
    msg.setDestination(60446U);
    msg.setDestinationEntity(236U);
    msg.req_id = 60730U;
    msg.ttl = 38731U;
    msg.destination.assign("TOZGJPTYWBCKTFSOIFXDCVHMGTOKUBGRZZKCNIOOQQNLFVUBSNGQNWEYLBVHGWHDZUJCTCSJBXNCAIVRWAULMNIYZQAFRANUETHOPLEKAKFSAIROUIVPTOXISBIZLMCBRCSWFXYHLEOWEGTBFSXMMNDCNFJZERGEYPJFJKQXLYTDQSQADDLVVQUSDXTMHKLUBRLWVIZMZYUDRENSJEFQMHMZADVAXPAJPKEKQXPJGWMVUHHRXGOBYW");
    const signed char tmp_msg_0[] = {-110, -76, -123, 119, -13, 81, -121, -47, 37, -57, 25, -70, -44};
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
    msg.setTimeStamp(0.4536818498803298);
    msg.setSource(48425U);
    msg.setSourceEntity(48U);
    msg.setDestination(62528U);
    msg.setDestinationEntity(199U);
    msg.req_id = 4069U;
    msg.ttl = 41177U;
    msg.destination.assign("VCTMXRAVSJLONDGZNKBBULXCRBPKFWOEJEDSEVYPSYLDCAPWGMYPKDVMZNYEDHMIOORIYDAQTUPLUJJGIDMRWANOWLPPTHQAZJDSMBXQCMJQQBYFFMEKCQXRQXIZN");
    const signed char tmp_msg_0[] = {-40, 15, -95, 76, -104, 72, -16, -37, -51, 118, 53, -121, -39, -21, 54, 52, 40, -77, 101, -10, -74, -63, 25, -95, -93, 47, 88, 36, -124, -94, -45, -128, -11, 25, 8, -75, 50, 34, 83, 62, -10, 12, -10, -109, 13, 24, 66, 19, -90, 40, 84, -29, -7, -1, -45, -55, -61, 99, 73, -24, 106, 45, -52, 14, -123, -39, -12, -4, 122, 28, -36, -116, 43, 116, -128, -96, -7, -28, 77, 117, 3, -55, -110, -97, -111, -1, -99, 35, -92, -104, 41, -82, -1, 81, -128, -55, 24, -110, -1, 4, 20, 109, -98, -105, 61, -64, 82, -112, -19, 80, -51, -33, 41, 126, 38, -119, 41, -42, 97, -56, -8, 20, -91, 10, -121, 89, 61, -49, -61, 117, -87, 62, 100, 30, -96, -19, -19, -47, 111, -97, -96, -66, 122, 6, 3, -84, -80, 11, 77, -28, -81, -113, 83, -41, 19, -123, 24, -52, 29, 103, 84, -7, -52, 75, -41, 100, -123, -2, 125, -97, 111, -25, -81, -90, -123, 6, -112, 97, 15, 23, 84, -11, 21, -11, 22, 113, 37, 103, -5, -40, -111, -50, -25, 116, 10, -45, 26, -17, 90, -29, 47, 102, 41, -56, -124, -94, -32, 31, 111, -97, 71, 115, 94, 18, -42, -105, -48, -18, -39, -94, 46, -70, 111, 36, 21, 16, 103, 0, -112};
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
    msg.setTimeStamp(0.8823163693847602);
    msg.setSource(7208U);
    msg.setSourceEntity(135U);
    msg.setDestination(8636U);
    msg.setDestinationEntity(84U);
    msg.req_id = 32438U;
    msg.status = 140U;
    msg.text.assign("OXEFOYGDBVMVCIXKKEPSVZVOSQUPIFKPTWQDUVPXBRKOFWOUHFYMZJDAMLWZKYEVIEYDGNNXHFWZSYGMWKCUSANVZXQLNGCIUTTLCPQPHCWLMREGRQBGIHURRRUYYDKJXHCAOZAQNZJCWJJTMTCJHEMTF");

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
    msg.setTimeStamp(0.040113811020682566);
    msg.setSource(25072U);
    msg.setSourceEntity(95U);
    msg.setDestination(49359U);
    msg.setDestinationEntity(149U);
    msg.req_id = 25063U;
    msg.status = 120U;
    msg.text.assign("WSRVPVAJIPNXAGNABJTAHICQKYUPEIOXQUPYLNVDTXGWMOAKKKDGDCWICFSKEYQBVWQJYOKBOZZVSHIUVTTMZLDMFJRIRDRGTPASBQWZDBWNCDYAXFTPBWEZEZFRBSCVNKYQNZLLYTLLHOXUYFJHBYUHNUTPIHMMJBXELOHCGLXNSHMUNCHXMIJAGZQWRMDRJBFRUOMZJLATEHEFQEFSSL");

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
    msg.setTimeStamp(0.5813971366060929);
    msg.setSource(60328U);
    msg.setSourceEntity(186U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(247U);
    msg.req_id = 30671U;
    msg.status = 3U;
    msg.text.assign("EOYDHDVFPDCPVEFGMSUMUXBRKQKMWLONHFPNEFIIZELFAVGRANFYKOHKOPCMQOAGTPVBARTJXGRLESXAMBSGWFPCLCRTIGMYJOYKBLBPYBAUXAJFUQIQIRADDZSHABNYXYZQRWFJDEDBYHJGZWKPLUOVWJVYZPRSANXJTCVCUHNZEVNGORMIXUHTVGWZGMTMSLW");

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
    msg.setTimeStamp(0.0037527452576712195);
    msg.setSource(23903U);
    msg.setSourceEntity(252U);
    msg.setDestination(23985U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("PBSXGQATCJKRAKOMXYGSPVYYAFEPTLTGEJSCJZFPEWSLQAIKGUPFYRXMCRBBZVATEIDLFULIUDTXHTEOBPHORWMONQZNEZQDWUNXYDBNAGWC");
    msg.links = 28392735U;

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
    msg.setTimeStamp(0.40870908518525884);
    msg.setSource(22307U);
    msg.setSourceEntity(134U);
    msg.setDestination(52044U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("DCIDGKMBNRCRLFELZACMQYYJTBTHRVPHSEZBNHQRLUFLSDEMOCIGQWIQLGXARNKXLOUJQDYBFLOTQMTKEOEVIPBMDVSZKWCUJPLMIHJSFGSCXKAPTHACWCJGTECWQHXSWQBROHAVQFRNOX");
    msg.links = 2518730489U;

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
    msg.setTimeStamp(0.950821953003007);
    msg.setSource(27259U);
    msg.setSourceEntity(109U);
    msg.setDestination(39247U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("DODSDODXVAHEFMPMFNCGSQSVARDHXAF");
    msg.links = 1200199374U;

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
    msg.setTimeStamp(0.3518678152078455);
    msg.setSource(13470U);
    msg.setSourceEntity(150U);
    msg.setDestination(27062U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("HHWYCYZJRSLWYHXQAGDRKMIXQBSMXUIXYZNZIWQRSUUPLLB");
    msg.action = 115U;
    msg.grouplist.assign("UBHTNLTHILTSQFBOZMGKLCPURWXDHHFBERBFAYUYFVMWJWYWFRBLTGVZBQKQRZLCPVXYYNDYTVZRIRBGPJXVYWPEYBODJDHBGNPMZWEIKAKNXIBHXSHLSTSOETUTDV");

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
    msg.setTimeStamp(0.08327431431906651);
    msg.setSource(40890U);
    msg.setSourceEntity(78U);
    msg.setDestination(40412U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("WZGIKNZLUSZSDXXTCWANZPBVDQKGVWWSRBFGFOYIGSSPJWEUDFBFLZFVXZHICFJZSVEZYOGRRHBVIPTIMICJEPEIAGCZYYNMAMDWQUYOQYJAM");
    msg.action = 70U;
    msg.grouplist.assign("CKFCJQRIZTQWLPTVXSOIVJBHARDPUUIJYCFUEZPPDLUNENCHOQWGIOYUJUVTBVRCMGIITESAOKSAKHGPXLQSVBECFEVZBIOHWCLEDMHMNPBBIAYYLMIVQJLWZGQK");

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
    msg.setTimeStamp(0.5104649802042109);
    msg.setSource(55468U);
    msg.setSourceEntity(182U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(187U);
    msg.groupname.assign("MXRNJBNNCJPJAGEJAKONVBUMHVZMHQDJBMIRUQXSLWWTQTJCMYCBZNRQXCSSTKVSIYOKVHNEQEBIQRHHBSIGDBPZIJCSUZRWIYYMCYLLGQCXDRTGWHKAWFLRXXGLERIXFSIJZLUDWTVUDDOMFYUFNSIAJPCEBVKPWFHTKVFIOT");
    msg.action = 70U;
    msg.grouplist.assign("EVVXENKYWORTTSSEUFRRCQIFJQSUMXLXQIPXHVQFPZDVZONYACOBDBLKZTXJATDFHBJZPUKVAQLJAHCMXBHGBWDISBLOGAONPMANORNITYIBYUKJDWBTQGFJXNPHGFYUHAESTFUPLMSXLMOTUEHATKIJBZYBVRWSPCSHCKDYIADFUMNDZTWOQHIERWPMZKINZWLZOLGLWDGDWPECYNVRUCXFGEJGAUKEEVIFW");

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
    msg.setTimeStamp(0.32679539955719494);
    msg.setSource(5863U);
    msg.setSourceEntity(28U);
    msg.setDestination(1775U);
    msg.setDestinationEntity(134U);
    msg.value = 0.23181602834502113;
    msg.sys_src = 60800U;

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
    msg.setTimeStamp(0.7426716369408737);
    msg.setSource(31528U);
    msg.setSourceEntity(127U);
    msg.setDestination(14100U);
    msg.setDestinationEntity(41U);
    msg.value = 0.4511754738416467;
    msg.sys_src = 46061U;

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
    msg.setTimeStamp(0.5704844328106121);
    msg.setSource(8895U);
    msg.setSourceEntity(248U);
    msg.setDestination(40222U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7943260083383368;
    msg.sys_src = 52066U;

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
    msg.setTimeStamp(0.46167783072399293);
    msg.setSource(6150U);
    msg.setSourceEntity(90U);
    msg.setDestination(4862U);
    msg.setDestinationEntity(98U);
    msg.value = 0.4215644778114601;
    msg.units = 59U;

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
    msg.setTimeStamp(0.8789832206331449);
    msg.setSource(18950U);
    msg.setSourceEntity(155U);
    msg.setDestination(31581U);
    msg.setDestinationEntity(86U);
    msg.value = 0.5921114521619526;
    msg.units = 46U;

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
    msg.setTimeStamp(0.3453352170927534);
    msg.setSource(1194U);
    msg.setSourceEntity(132U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(112U);
    msg.value = 0.24038386075166351;
    msg.units = 8U;

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
    msg.setTimeStamp(0.04484668208664111);
    msg.setSource(55705U);
    msg.setSourceEntity(104U);
    msg.setDestination(42913U);
    msg.setDestinationEntity(170U);
    msg.base_lat = 0.058916318731473516;
    msg.base_lon = 0.2554021312183834;
    msg.base_time = 0.8237876186588907;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 59625U;
    tmp_msg_0.destination = 50482U;
    tmp_msg_0.timeout = 0.6189074306104828;
    IMC::WaterDensity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7849210068084038;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.48742204759970187);
    msg.setSource(37632U);
    msg.setSourceEntity(208U);
    msg.setDestination(544U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.6030311526430985;
    msg.base_lon = 0.17246843821967484;
    msg.base_time = 0.7428832705014319;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 55904U;
    tmp_msg_0.priority = 125;
    tmp_msg_0.x = 21021;
    tmp_msg_0.y = -8853;
    tmp_msg_0.z = -26774;
    tmp_msg_0.t = -4374;
    IMC::SmsRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source.assign("VWTOJXYDLCGBTZRIQZYMXSSUGPRNKZSBFIMAEVBVHNQZUGLAXRHUMDQXZHYTFNTBFEXJLFOROYJWMAUNRFNTEOGYNCAFDQSSQLPCXTUPMFBJPXKQBNKQTPSCKGDSHIOGFWLTIHVOHEVUVECWKCYVPLBRUIDQDKPYOSMVZBAMDUEROZIYXMULCCWHVAAJGJNEPNJSHMTMDFHNWQKZEGUKGJWKLDZWLPTQSIWIRGORJKHEIBFCDWXOVX");
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-2, -113, -32, 53, 18, 35, 38, -25, -128, 68, 21, 8, 95, -74, 64, 48, 35, -102, 18, 30, -123, -101, 77, -22, 53, 24, -101, 88, -84, -107, 23, 6, 14, 25, 123, 51, 92, -30, 101, -119, -53, 56, -49, 11, 17, -102, 120, -74, 42, 15, 3, -117, 58, -15, -19, 28, -118, 50, 64, 67, 63, 120, -56, 115, -92, 0, -20, -120, -67, 42, 67, -18, -65, -89, -45, 49, 50, 119, 113, 81, -95, 27, 33, -127, -58, 89, 125, 33, -54, -17, 63, -74, 27, 40, 40, 20, 77, 47, 36, 89, 63, -125, -50, -114, -3, 94, 6, 88, -63, -11, 30, 32, -5, 71, -106, -61, 4, 97, -47, 15, -123, -77, -96, 123, -9, 53};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.2746846611310838);
    msg.setSource(24200U);
    msg.setSourceEntity(58U);
    msg.setDestination(52874U);
    msg.setDestinationEntity(198U);
    msg.base_lat = 0.3664275494977971;
    msg.base_lon = 0.8946987592442673;
    msg.base_time = 0.16214643591398104;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 9004U;
    tmp_msg_0.destination = 64240U;
    tmp_msg_0.timeout = 0.6581137474923976;
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 2982U;
    tmp_tmp_msg_0_0.lat = 0.43733486381544484;
    tmp_tmp_msg_0_0.lon = 0.5525163164896644;
    tmp_tmp_msg_0_0.z = 0.002873696584150043;
    tmp_tmp_msg_0_0.z_units = 78U;
    tmp_tmp_msg_0_0.duration = 46344U;
    tmp_tmp_msg_0_0.speed = 0.36931842369465495;
    tmp_tmp_msg_0_0.speed_units = 132U;
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.radius = 0.23198005443148373;
    tmp_tmp_msg_0_0.length = 0.07133648811082338;
    tmp_tmp_msg_0_0.bearing = 0.8348073256129699;
    tmp_tmp_msg_0_0.direction = 31U;
    tmp_tmp_msg_0_0.custom.assign("KXROEVRWPAVVYUOYWQSPPFSGTTUUIJGPUSEEQQKLYBWLXM");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4545223898479973);
    msg.setSource(43486U);
    msg.setSourceEntity(188U);
    msg.setDestination(44926U);
    msg.setDestinationEntity(209U);
    msg.base_lat = 0.7509200876164279;
    msg.base_lon = 0.16279445520083258;
    msg.base_time = 0.33270005271517766;
    const signed char tmp_msg_0[] = {12, -53, 7, -123, -99, 38, -1, -126, -14, 87, 58, 59, 47, -61, 37, -117, 27, 77, 56, 104, 44, 3, -37, -65, 87, -103, -91, -67, -70, -102, 76, -93, 53, 68, 111, 90, 109, 125, 91, 30, 84, -100, 47, 31, -51, -53, -116, 119, 1, 101, 76, -63, -99, -102, -104, -13, -108, -120, -68, -98, 57, 74, 51, 4, -76, 3, -126, -14, 106, 29, -115, 107, 8, 90, 0, -82, 36, 22, 57, -127, -106, 70, 78, 34, -77, 18, -106, -71, -10, -80, 108, -98, 77, 69, 102, 110, -29, -38, -78, 17, -63, -123, -77, -43, -121, -38, -68, -84, -117, -125, -5, 33, -102, -125, 60, 51, -10, -17, 29, 3, 107, 45, 32, 81, 75, 76, -49, -68, 89, 108, -120, -115, -39, -66, -73, 69, 50, 7, -36, -69, -96, -114, 37, -73, 74, 58, -77, -11, 39, -22, 13, 65, 121, 104, -49, 76, 81, 0, -18, 29, 39, -87, 45, -76, -18, 49, -21, -21, 4, 59, -82, 63, -8, -3, 64, -11, 57, 60, 33, 13, 39, 103, -7, 105, 36, 21, -106, 123, 64};
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
    msg.setTimeStamp(0.3300612262206405);
    msg.setSource(17618U);
    msg.setSourceEntity(210U);
    msg.setDestination(24796U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.4833648630992804;
    msg.base_lon = 0.5364461317318114;
    msg.base_time = 0.09980190378051224;
    const signed char tmp_msg_0[] = {-120, -104, 56, 22, 95, 83, 97, 71, -22, -48, -38, -111, 31, -38, 102, -5, -122, 65, -97, -90, 14, 31, 66, 21, -1, 111, 89, 25, 16, -28, 95, 83, -80, 31, 110, 47, -53, 71, -15, -115, -98, -48, -25, -68, 55, 114, 90, -105, 39, -67, -25, -18, 96, -40, 33, 39, 18, -89, 61, 23, 33, -84, 8, -29, -44, -19, 115, -6, 62, 61, -120, 64, -1, 94, -103, -29, -110, -27, -79, 98, -5, -110, 86, 5, -66, 39, 6, -4, -26, -24, -38, 50, 118, 125, 65, 58, 34, 93, -118, -111, 23, 8, 51, 37, -101, 58, 23, -117, 47, -109, -126, -62, -51, 126, 85, -77, 29, 107, 31, -103, -64, -46, -9, 74, -115, 5, 63, -128, -16, 27, 64, 69, -55, -117, -12, -115, -14, 98, 99, 38, -54, -86, 69, -122, 123, -111, -105, 126, -92, 15, 55, 12, -2, 100, -29, -103, -78, -57, -40, 31, 31, 105, -68, -76, 95, 34, 65, 3, -36, -52, 123, -38, -71, -35, -57, -9, 89, 35, -6, 39, 79, -74, 118, -45, -62, 108, 116, 51, -73, -126, -92, -50, -98, -29, 56, -112, 116, 110, 106, 37, -21, -123, 117, -110, 41, -84, -37, -38, 33, 100, 94, 52, -3, -14, 28, 27};
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
    msg.setTimeStamp(0.37535949569660054);
    msg.setSource(45949U);
    msg.setSourceEntity(90U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.6252460729306111;
    msg.base_lon = 0.748444150316176;
    msg.base_time = 0.5258410750850074;
    const signed char tmp_msg_0[] = {48, 7, -98, 86, 62, 53, -27, 33, 42, -38, -107, 111, -85, -75, -82, -9, 118, -53, 65, -13, 25, -22, 116, 79, -84, 110, 96, -57, 83, -54, 126, 60, -98, -99, 125, -91, 75, 74, -17, 31, 81, 81, 52, -21, -82, 28, 46, 19, 82, -33, 60, 99, 85, -26, -45, 94, -60, 110, -117, 83, -112, -72, -60, 49, 120, 10, -34, -42, -86, -37, 104, -41, 11, 32, 122, -70, 125, 46, -45, 10, -125, 49, -37, -64, 123, 89, -120, -25, -36, 85, 15, -81, 122, -83, 28, -62, 47, -30, -39, -70, 93, 43, 53, 42, 52, 68, 46, 67, -77, -44, 50, -99, 76, 121, -109, -9, 13, -87, -42, 18, -97, -14, 126, -116, -71, -44, 58, -70, 48, -21, -70, -85, 37, -84, -2, -32, 122, -107, 65, 26, -43, -21, 126, 6, -106, 91, -104, 74, 89, -48, 63, -92, -87, -103, 109, 23, 24, 64, 68, 110, 97, -92, -78, -5, -59, -119, 66, -25, 84, 42, -104, 46, 14, -5, 18, -122};
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
    msg.setTimeStamp(0.5291593176932862);
    msg.setSource(63642U);
    msg.setSourceEntity(159U);
    msg.setDestination(2093U);
    msg.setDestinationEntity(238U);
    msg.sys_id = 21599U;
    msg.priority = 37;
    msg.x = 15762;
    msg.y = -6746;
    msg.z = -18675;
    msg.t = 5592;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VWBRJEDTVGCBDCHDHIAXWBLFRQRLCUXTSWGIHVWYHEDKGXEVJJMKRXAVKFXBAOBEGEAZNCHUSDYNFZZUSMQADDWKZCITJNLFQFTPRRKRRILLQYSQZTOSKMGFMBXPAUIETIUBNJZCMTFAVGNGGSXUWSNAAPOQJNOPJTHFMCVZPCXTLIODIQJPPVUWFPODOZSOYIWTEZXVVLXYFLQMNNAZYHSNYPYOQRUWJEMMKYRWHIYBEPLUMCCJEKGUKBDG");
    tmp_msg_0.lat = 0.834224006752276;
    tmp_msg_0.lon = 0.6223909745791816;
    tmp_msg_0.z = 0.21734526390054398;
    tmp_msg_0.z_units = 224U;
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
    msg.setTimeStamp(0.3434757113709265);
    msg.setSource(33916U);
    msg.setSourceEntity(243U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(242U);
    msg.sys_id = 46248U;
    msg.priority = 17;
    msg.x = -19354;
    msg.y = 2590;
    msg.z = -28692;
    msg.t = -86;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("PEEHSMASDMKUWKZLGSFYJPLGBQJBQYYGTSKYTDKGQKUTDVJBGNACLGIYQHNHRRHROVQCRZNUOMLQAOBMOTNHKKRCLINFVDYXN");
    tmp_msg_0.sensor_class.assign("SVNNSUXSWBAHSHBNNZNOMCEZJDODRWFJCJEUOTRGVKJBTVOMXWZTGPGKYCTPHWPGQSBOHSUQDEVBHMHDQAKMJXRNACFSXKKINGURLMGHYDCIRTYYTFRBMLRFWVAAKFQXSEWCNBLNDVWOJQTPJCNCMRIAHPMJERWKDCTYOPZVQKOUTYELYJKXVAVUCXGIGKBMYMLFDWVURIFIYADPEQEPZIQFZQYOIEUWASLZO");
    tmp_msg_0.lat = 0.3349347160951923;
    tmp_msg_0.lon = 0.6574354956903807;
    tmp_msg_0.alt = 0.3265884935376605;
    tmp_msg_0.heading = 0.5383227779730159;
    tmp_msg_0.data.assign("OMTGARMREHXSBDTMRSULKPQBYAHSHELVHRXFZLORKQJGGLCFLZDB");
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
    msg.setTimeStamp(0.9372744249812776);
    msg.setSource(64498U);
    msg.setSourceEntity(107U);
    msg.setDestination(13552U);
    msg.setDestinationEntity(33U);
    msg.sys_id = 39676U;
    msg.priority = 105;
    msg.x = -5013;
    msg.y = -2027;
    msg.z = -28210;
    msg.t = -10557;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 60953U;
    tmp_msg_0.status = 86U;
    tmp_msg_0.text.assign("FCSQBPJJRLMEPXRQULWDSNCPHTEOKHWIRZODZJYGECJKDHMWPUHNXSQHQMLBJORGOWTDRKULWZHATEDENBELMNFVBZVXWUIRMCPFPCGVZLOZVWBLHTIGVNYPKTUMQLLHIYNFDYOBXIEUMUUAYTGEGJVAAPNKXQDAJOCFOCRXIFFAYCPLGSXI");
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
    msg.setTimeStamp(0.567413872670813);
    msg.setSource(63687U);
    msg.setSourceEntity(20U);
    msg.setDestination(4657U);
    msg.setDestinationEntity(216U);
    msg.req_id = 29391U;
    msg.type = 253U;
    msg.max_size = 19414U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.30606657447092045;
    tmp_msg_0.base_lon = 0.45439549050876493;
    tmp_msg_0.base_time = 0.3934315035550473;
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
    msg.setTimeStamp(0.43370177313688296);
    msg.setSource(7188U);
    msg.setSourceEntity(163U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(30U);
    msg.req_id = 41987U;
    msg.type = 94U;
    msg.max_size = 23250U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9837839174769835;
    tmp_msg_0.base_lon = 0.37003281053915804;
    tmp_msg_0.base_time = 0.6246396161692004;
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
    msg.setTimeStamp(0.20771801392870926);
    msg.setSource(19870U);
    msg.setSourceEntity(242U);
    msg.setDestination(53418U);
    msg.setDestinationEntity(149U);
    msg.req_id = 26978U;
    msg.type = 134U;
    msg.max_size = 756U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.17276922533303163;
    tmp_msg_0.base_lon = 0.874900389009044;
    tmp_msg_0.base_time = 0.3837631936256162;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 48436U;
    tmp_tmp_msg_0_0.priority = 77;
    tmp_tmp_msg_0_0.x = 27776;
    tmp_tmp_msg_0_0.y = -29250;
    tmp_tmp_msg_0_0.z = 14829;
    tmp_tmp_msg_0_0.t = 7807;
    IMC::ProfileSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.depth = 48038U;
    tmp_tmp_tmp_msg_0_0_0.avg = 0.5918774216226894;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.849367612604422);
    msg.setSource(15506U);
    msg.setSourceEntity(53U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(193U);
    msg.original_source = 34824U;
    msg.destination = 50271U;
    msg.timeout = 0.9729992453192132;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7322978057059666;
    tmp_tmp_msg_0_0.lon = 0.7989737684243574;
    tmp_tmp_msg_0_0.height = 0.9420227395594494;
    tmp_tmp_msg_0_0.x = 0.5747600648914798;
    tmp_tmp_msg_0_0.y = 0.8958782949867674;
    tmp_tmp_msg_0_0.z = 0.9964977307548318;
    tmp_tmp_msg_0_0.phi = 0.506320242576972;
    tmp_tmp_msg_0_0.theta = 0.7913618316420313;
    tmp_tmp_msg_0_0.psi = 0.08836820985686544;
    tmp_tmp_msg_0_0.u = 0.6215966681656544;
    tmp_tmp_msg_0_0.v = 0.6409411995110149;
    tmp_tmp_msg_0_0.w = 0.972188144134593;
    tmp_tmp_msg_0_0.vx = 0.3117709333057176;
    tmp_tmp_msg_0_0.vy = 0.2841943773696096;
    tmp_tmp_msg_0_0.vz = 0.7016713633349809;
    tmp_tmp_msg_0_0.p = 0.5476546692504446;
    tmp_tmp_msg_0_0.q = 0.3971772852854033;
    tmp_tmp_msg_0_0.r = 0.2226854201529631;
    tmp_tmp_msg_0_0.depth = 0.6979995409987669;
    tmp_tmp_msg_0_0.alt = 0.8786645888966476;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 230U;
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
    msg.setTimeStamp(0.9165147651937073);
    msg.setSource(14530U);
    msg.setSourceEntity(161U);
    msg.setDestination(26238U);
    msg.setDestinationEntity(10U);
    msg.original_source = 29671U;
    msg.destination = 54882U;
    msg.timeout = 0.12000837321486912;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 27772U;
    tmp_msg_0.plan_size = 1148055547U;
    tmp_msg_0.change_time = 0.29882897677907705;
    tmp_msg_0.change_sid = 44443U;
    tmp_msg_0.change_sname.assign("INODFDBJBDHMQFWBWSZGWS");
    const signed char tmp_tmp_msg_0_0[] = {-120, 14, 7, -15, 66, 108, -14, 73, 68, 31, -20, -111, -52, -78, 51, 70, 102, 77, 55, 78, 123, 87, 0, -87, -95, -10, 79, 110, -45, 109, -29, 82, -41, -125, 43, 38, -38, -28, 57, 52, -99, -109, 123, 106, -57, 35, -101, 15, 42, 120, 16, -62, 32, -36, 84, -126, 105, -78, -13, -55, 12, -38, -63, 109, 9, -116, -91, -116, -81, -95, 44, -60, -33, -60, -90, -80, 72, 81, -12, -87, 116, 98, -6, 60, -87, 10, 95, 52, -43, 90, 118, 94, 66, -18};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5964401059170154);
    msg.setSource(18151U);
    msg.setSourceEntity(196U);
    msg.setDestination(6188U);
    msg.setDestinationEntity(66U);
    msg.original_source = 37869U;
    msg.destination = 48800U;
    msg.timeout = 0.2233063778892942;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("VKLSMEZTUUKCSIZRCYJTNFRKHWEPYPIISOZMCUGYNWMXALHEKIXCHFSUKDSANPQOPXHBSKLWHHPAWQJSQOXJGZMKRXDLGBVVVOOYQHGDRXRMWLPEJPJVBWIVDWSJCKZCNGBRAUENZCBODYEDRTGCPJVOVRZITFQBDXSZ");
    tmp_tmp_msg_0_0.lat = 0.2039825400785269;
    tmp_tmp_msg_0_0.lon = 0.638014315931922;
    tmp_tmp_msg_0_0.depth = 0.6469518885890261;
    tmp_tmp_msg_0_0.query_channel = 25U;
    tmp_tmp_msg_0_0.reply_channel = 148U;
    tmp_tmp_msg_0_0.transponder_delay = 146U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.4967514685409441;
    tmp_msg_0.y = 0.7810807981058124;
    tmp_msg_0.var_x = 0.28324519303862994;
    tmp_msg_0.var_y = 0.4970913273278311;
    tmp_msg_0.distance = 0.726438219436001;
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
    msg.setTimeStamp(0.27652469745705777);
    msg.setSource(29953U);
    msg.setSourceEntity(207U);
    msg.setDestination(15989U);
    msg.setDestinationEntity(23U);
    msg.type = 242U;
    msg.comm_interface = 2116U;
    msg.model = 64759U;
    msg.list.assign("YNIZZDSOURPZLRDPENGPNXPNSQVGZCERBEUSHYRFIWYVLDTODCXTZBHNQTQIRFRLJGMGYLWQGODEKKIYPODYKMCYASBTSBCAJFLXYNPTWTMWTIZEVJJBPBLCFGMAJLAOYJOVHITVJAWPMQWUEPLTNFRSUXKFEKUSAUFIAFKANZBAXCGWLEVHMQAXUDBTOHGSHZMVMVVRWHBUNXJL");

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
    msg.setTimeStamp(0.8189922871151455);
    msg.setSource(31257U);
    msg.setSourceEntity(27U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(3U);
    msg.type = 111U;
    msg.comm_interface = 34136U;
    msg.model = 25011U;
    msg.list.assign("TGPEVZSPNTGXLLZFSMWGRGCHCUARKQBNSMKAFJWJPANWKMWIVATXBSAVWNHPCOXVUSZJQYPOELFQWJPOIQDZCCRWVUKFWLKVMHTDJUUDZEDLHRVOKKNIVFUODTO");

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
    msg.setTimeStamp(0.30707279641982943);
    msg.setSource(57995U);
    msg.setSourceEntity(137U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(230U);
    msg.type = 1U;
    msg.comm_interface = 16963U;
    msg.model = 43692U;
    msg.list.assign("LLCRVIIYXUXHJENCGPXBUQDDAJMZHFLJQAKFMWOAKFOGLYJPPKIJMRDEFWLPUYLRAKHQAUSARAJDAJALKQERUDLTIMRKCKHWTZDIVXPWKZWTVYOKPMBXSGGDOYZWOPRGUGWWCQACYZBHMQHYOODRFSCLSENBXBRGEWVNFMXMGPSVQQVMGHYZZVITKNYWXJNJSYF");

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
    msg.setTimeStamp(0.5701268722070982);
    msg.setSource(2505U);
    msg.setSourceEntity(164U);
    msg.setDestination(13989U);
    msg.setDestinationEntity(141U);
    msg.type = 124U;
    msg.req_id = 4156966417U;
    msg.ttl = 12983U;
    msg.code = 199U;
    msg.destination.assign("ISXYEHRBROLYDUTQKSGLCAIHHQHMATTKPNDEKVZOFFRVCTWWOCDPFEYUSBXNNEALSJUTXMYUHCJGPUTGANEQKRKZGFAVQMDHZGVAGIUMZIVJPJHHNQQBQABUGOJKLHIMEAMWDSQTQDWOLXRKVBIEBZMXTBXMZSZIOCS");
    msg.source.assign("TLITAFRFPYKKTWTPRZOVNBCHQFJJWFDNKTGQSXXXZOUDPCQSNGEVKTLOKXAEQWDBUDGCHQIAYULDCLIROQXIMLPOHNDUUWEKMPNMGJASCIXEVKYRTEDJUZZVFOKSSFMAWGSULCEBWLGAFPHSFRPMYCGQZRRBZBGIJOXKWNETNVQGHPCDMYDVVJZLVYNBYWGABMYWIMXFYPRSRRTAKSCLQVBBEYPJOUZJHHXIWVMC");
    msg.acknowledge = 37U;
    msg.status = 225U;
    const signed char tmp_msg_0[] = {18, -46, 21, 62, -84, 59, 13, -15, -20, 42, -128, 32, -1, -67, 45, 109, 14, 61, -64, -114, 63, 75, -82, 45, -122, 113, -73, -61, 62, -81, 37, -76, 14, -81, 48, -62, -49, 61, 73, -11, -100, 7, 117, 46, -27, -41, -37, -68, 3, -40, 66, 8, 15, 42, 21, -88, -52, 77, 66, -83, -6, 14, 31, 93, 16, -97, 26, 81, 77, -42, -30, -71, 51, -41, -121, 87, 57, -55, 13, -71, 66, -84, -103, 55, 112, 108, -106, -128, -15, -128, 100, -46, -46, -74, -42, 18, -122, -67, 85, -92, -89, 87, 59, -100, 32, -121, 11, 19, 112, -62, -70, -54, -126, 83, 126, -15, 82, 18, 26, -83, -84, 10, 63, 62, -11, 119, 53, -48, -126, 95, 53, 78, 95, 123, -32, 92, -11, 7, 15, 16, 42, -29, 111, -47, 95, 41, -114, -105, -81, 111, -111, -38, 106, -67, 67, -91, -58, 32, 77, -39, 94, -114, -47, 23, -121, -56, -124, -98, -121, -71, -82, 105, -33, 14, 53, 126, 28, 107};
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
    msg.setTimeStamp(0.4104840105396593);
    msg.setSource(31675U);
    msg.setSourceEntity(172U);
    msg.setDestination(31130U);
    msg.setDestinationEntity(111U);
    msg.type = 7U;
    msg.req_id = 3423176922U;
    msg.ttl = 27143U;
    msg.code = 203U;
    msg.destination.assign("ERDWYONJKDPPLYFNCJRGJKTGODFCBMCGMAYOYUZSTUGJRZONJIFUUGXXXHUYIQZTOFEPHRNWAFROVIPOHKRGASCIVCZXGIHWLOVZBJQCRJDNTBISMSXXLBBPZANPMVBKPSWQKSWHEUEKIPATNFMDWKXOLEXVNGVWWHMZPSSKXQUOQ");
    msg.source.assign("DWPEQOFLVIUZUEGFKYNOFJJOOUXCGMMZWJDIJYWSAQQNSFOXKYBVIOMQVFKWVBQICGLTRZETDCSJWSXXQHLAKUIGVGPGUIHMTCBDBCRHDLMZLCKSTYWVEDFFHGYCLYWEZWZKMPJPMRFANMVVPDMPEQAQENXTQBTJKIQLRWYUABHDAXNMXKNPJVKNRVHUBJAICSCEHRKGNUIAPOHRYYDHETZBRZDEHORSNXGOPSTSTPOUZRBWB");
    msg.acknowledge = 208U;
    msg.status = 189U;
    const signed char tmp_msg_0[] = {-61, -70, 46, 56, -18, -102, 76, 63, 126, -44, -123, -94, 10, -124, -114, 44, -111, -58, -90, 20, 0, -112, -86, 71};
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
    msg.setTimeStamp(0.4625788851336199);
    msg.setSource(65129U);
    msg.setSourceEntity(154U);
    msg.setDestination(51433U);
    msg.setDestinationEntity(120U);
    msg.type = 180U;
    msg.req_id = 1508399472U;
    msg.ttl = 37180U;
    msg.code = 93U;
    msg.destination.assign("AHMMHDNXYUEWKZTFZQBJJBMMRGDVKCEIPWLEBLPBGNOHKJYCSUJEAZEDFVVOCJUAIUENGROXBIITPRLEJNIXXMMNCJVCESDMMLHCWJUYBDJIFNLPXJYKGRVVPSUPQKPTTDCGLOBAHFGWSHDWANFZXQCYSAFZVEDTBAFSUBIYQKRWIAGXYORKOAQRQ");
    msg.source.assign("CAHOQNBSKUNCILKKSAHMJJQRGRGOULKNCGHJNNSUSJGBXUXYMFQFVUPYWSEBXPRJTDNCQOEXZWFZGZVIVBCCSDPSLXTEKAIGLAABBITNU");
    msg.acknowledge = 152U;
    msg.status = 133U;
    const signed char tmp_msg_0[] = {125, -47, 31, -97, -75, -25, -27, 0, 36, 33, 64, -9, -78, -118, 10, -116, 75, -84, 17, -117, -24, 37, -101, -2, -47, -65, -75, 12, 47, -66, -67, -46, 70, -54, 44, -123, -7, 11, 9, 45, -99, 84, 14, 41, -37, 8, 89, -95, 101, 86, 75, 76, 55, -76, 18, -32, 49, -63, -35, 19, 34, -104, 86, 77, 64, -90, -19, -32, -37, 81, -32, 78, 74, -66, -116, 88, -122, 21, -103, -106, 114, -67, -122, 65, -79, 61, 7, 8, -59, 81, -13, -92, -127, -87, -92, -64, 113, 100, -88, -40, -118, 95, -13, -78, 65, 28, 45, -42, -27, -76, -109, 32, -95, -103, -73, 5, 123, -123, -125, 53, -99, 76, 100, -23, 71, 26, 95, 20, 66, 26, -39, -38, 119, -22, 119, 120, -89, -78, 84, 33, -44, 103, 30, 91, 102, -36, -87, -82, 68, -82, -57, 54};
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
    msg.setTimeStamp(0.40550590470945624);
    msg.setSource(19152U);
    msg.setSourceEntity(167U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(161U);
    msg.id = 49U;
    msg.range = 0.4801828013460724;

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
    msg.setTimeStamp(0.07517186201978532);
    msg.setSource(37038U);
    msg.setSourceEntity(201U);
    msg.setDestination(16284U);
    msg.setDestinationEntity(29U);
    msg.id = 26U;
    msg.range = 0.7241914434157745;

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
    msg.setTimeStamp(0.3631513833412626);
    msg.setSource(60100U);
    msg.setSourceEntity(8U);
    msg.setDestination(39217U);
    msg.setDestinationEntity(149U);
    msg.id = 217U;
    msg.range = 0.32482824741098537;

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
    msg.setTimeStamp(0.16173373648603728);
    msg.setSource(4321U);
    msg.setSourceEntity(168U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("SZCBLIHTKJREXOWVELBLRSJYRCAAQVZKBRLHQUKIHAPATTKOGVELDHNYNPUBLMEYOHNMOXENGPYOYAMDCMLCDHHYDNCZODFTBGCWJDTHSWMGNXFFDDAZQIMMNVPPPKSXKMZQKGTWJZKQCPMWQZSCXWF");
    msg.lat = 0.7893134965414382;
    msg.lon = 0.22989296680033122;
    msg.depth = 0.1864937150209247;
    msg.query_channel = 83U;
    msg.reply_channel = 66U;
    msg.transponder_delay = 250U;

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
    msg.setTimeStamp(0.14086969157042184);
    msg.setSource(7824U);
    msg.setSourceEntity(130U);
    msg.setDestination(2471U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("YXSQEAOUTYALCDCEWSUGZVSDFGXSWJROYUCWNLYBNPGEGJSSRGOYXYFVTMCLQEUNMQYGMQPLRLTZAEGWDDHIFFSEURLMUJZVZHCZVONQQEUUVQOHIBHGPNOIBCWPBPMKBDVHEXDVDNJPTIWVRCPKLMUXBKUEDVKAXEROJMBKYITMICNBWJSCTZYHHQNXIFJRQZFNHAAKGNJMTYRLXSWJKIADWBIZJVACBMTAF");
    msg.lat = 0.1297697309487913;
    msg.lon = 0.6427483509024863;
    msg.depth = 0.1938954581226655;
    msg.query_channel = 43U;
    msg.reply_channel = 77U;
    msg.transponder_delay = 102U;

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
    msg.setTimeStamp(0.3107712917621872);
    msg.setSource(48151U);
    msg.setSourceEntity(10U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("HUNOARKUZRAUFUDNPVEDUCQCLVXSPGCNYNVKVKIHWZLGJMHAEAPFFETINOFBSMYVBTBWTKRGIXRIVUJEMSGZJABTNKXVQKIEPYELRSMHQGACDQZXUOOBCHIOHDMHBKMGWPMXOYZJHQQFYNLXVGCLYLWWAFOKUXWYXTLYOJBVMU");
    msg.lat = 0.4870864506908694;
    msg.lon = 0.13029058945139893;
    msg.depth = 0.9481065505320138;
    msg.query_channel = 76U;
    msg.reply_channel = 63U;
    msg.transponder_delay = 207U;

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
    msg.setTimeStamp(0.9162686869560002);
    msg.setSource(20077U);
    msg.setSourceEntity(115U);
    msg.setDestination(8308U);
    msg.setDestinationEntity(124U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.9964493921562861);
    msg.setSource(8702U);
    msg.setSourceEntity(38U);
    msg.setDestination(28526U);
    msg.setDestinationEntity(56U);
    msg.op = 187U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HODKQAUHXZMUYWSNCOVPDNQXIWMAPSTHGWREGSVVFIRZMOYJFAMXDIYUBRLICFSYQLKMBNJDZXLBZWWLSOGNUZGVEFPHLMLBESQBUGHRODAPPQYHVQWCEIJQYGTLJZEVSQFTFYXZPWTZRBUQYHZNNCQKSGHXDGCBJVAORAEJDTXATRDYRFBGBOHTETMJZMCCSIIKCXNXGAMKDKODUHAUWWPKFLPFYVLBLOFVJNKCXUPKIIKC");
    tmp_msg_0.lat = 0.7835506116977237;
    tmp_msg_0.lon = 0.6735471323775704;
    tmp_msg_0.depth = 0.0557442061353105;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 130U;
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
    msg.setTimeStamp(0.6600320002500568);
    msg.setSource(31609U);
    msg.setSourceEntity(3U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(191U);
    msg.op = 114U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YUXISRGZCVDHBTNUYOPOQAHMHJALNJOERWUQJGJUFYBXNSPBEIZDYFDHZJXNOGSXEGIKAPBYXBPFNDCFARMSASHXERQZLVIMVQDZYPRVCOSKHTRLBOFDQIPCNEYCYWCAOVBUK");
    tmp_msg_0.lat = 0.8616086516092099;
    tmp_msg_0.lon = 0.5970171628965805;
    tmp_msg_0.depth = 0.0752282434358299;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 205U;
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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.2689503075964774);
    msg.setSource(5474U);
    msg.setSourceEntity(173U);
    msg.setDestination(56307U);
    msg.setDestinationEntity(201U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("SSIPRCFTJYMEELTJJWKCGGUOIIWJILKJUBJISXJTZOLOSKVEHSLJCDAUPIWYZGKIQYXAHTCHVWWKE");
    tmp_msg_0.formation_name.assign("QEUKLSXKPQDLAUVRQLNFHYDEAAYETSBZCMIWDYVXQDJUIBDZWTMSJLAICXVPXBCNGYPXVUNBSPIYXEXXNAPCOVIKCMCRTOSLMDGGUFLWJKZBEJDKHHGSWAOOTGHEBOVZORNFROQFYAUQYFLJJTFLNHIKRCESJXIYTHFYJYOGNRQTLQTJQWFBPESBRKWVPIDCZZKKBPWAENOVMIVSMMRZMGHGUDVMTJLRNAH");
    tmp_msg_0.plan_id.assign("BMWUIFNHZFEAWGKVPBVSQJXAKUNPWIBKSTLWSYFGNUREPPJUGQYKQSDIGTUTBIYOYRGXIRKQRET");
    tmp_msg_0.description.assign("ITPHKFGKZYCDXSOWHUENZBCTTAJBFNAXQC");
    tmp_msg_0.leader_speed = 0.2557811875472923;
    tmp_msg_0.leader_bank_lim = 0.2974331524586077;
    tmp_msg_0.pos_sim_err_lim = 0.21497289931187846;
    tmp_msg_0.pos_sim_err_wrn = 0.3679148336240262;
    tmp_msg_0.pos_sim_err_timeout = 53678U;
    tmp_msg_0.converg_max = 0.4812967426194422;
    tmp_msg_0.converg_timeout = 5415U;
    tmp_msg_0.comms_timeout = 28808U;
    tmp_msg_0.turb_lim = 0.5309542771989055;
    tmp_msg_0.custom.assign("OOUMPAHZCSTMPXFZPTQVSKHN");
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
    msg.setTimeStamp(0.22207156329259314);
    msg.setSource(5222U);
    msg.setSourceEntity(47U);
    msg.setDestination(34116U);
    msg.setDestinationEntity(176U);
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VENLVXBLKIZSJCLDGNWJETRMECRLSKUVHTZITFTQDOJJBOQDLBQUVWIQGFDKTTHXFULNBEOBHZOVJOZYYDZAYGAIMLMRCWGDHUAZFMTZHOGUGYMRDXCOPVSJCZMKHRFIPAVVEPPMZNAJISSNSFKMGRWSKPHJVPBBMCJLWPBUTSIPURANRXFXSXKKZCHYUQXFWGQFQOWPGUVGEUOHECEHPYDWENYNKBTYCEIOYAFWIDNAQTXXCAAWRBSQDLQY");
    tmp_msg_0.dist = 0.9962600807683704;
    tmp_msg_0.err = 0.47025815474836286;
    tmp_msg_0.ctrl_imp = 0.12539937771776988;
    tmp_msg_0.rel_dir_x = 0.6151376593502704;
    tmp_msg_0.rel_dir_y = 0.8644912209414188;
    tmp_msg_0.rel_dir_z = 0.3004126073693295;
    tmp_msg_0.err_x = 0.7873317439894978;
    tmp_msg_0.err_y = 0.0553942488925413;
    tmp_msg_0.err_z = 0.9545558473593448;
    tmp_msg_0.rf_err_x = 0.23595737417388551;
    tmp_msg_0.rf_err_y = 0.43572974671789944;
    tmp_msg_0.rf_err_z = 0.5550329664006441;
    tmp_msg_0.rf_err_vx = 0.13364824615336302;
    tmp_msg_0.rf_err_vy = 0.12059799849597297;
    tmp_msg_0.rf_err_vz = 0.7529619594266634;
    tmp_msg_0.ss_x = 0.7321607124151234;
    tmp_msg_0.ss_y = 0.010753099160651258;
    tmp_msg_0.ss_z = 0.5547467554373766;
    tmp_msg_0.virt_err_x = 0.2521883641596535;
    tmp_msg_0.virt_err_y = 0.645860201423477;
    tmp_msg_0.virt_err_z = 0.38155419982209937;
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
    msg.setTimeStamp(0.11387953198290635);
    msg.setSource(17394U);
    msg.setSourceEntity(43U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(132U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.04868887393724375;
    tmp_msg_0.y = 0.09731884509491229;
    tmp_msg_0.z = 0.5903521842470197;
    tmp_msg_0.vx = 0.6717230988860993;
    tmp_msg_0.vy = 0.22357694922307525;
    tmp_msg_0.vz = 0.38490789163663464;
    tmp_msg_0.ax = 0.20227445239311426;
    tmp_msg_0.ay = 0.15578342217293406;
    tmp_msg_0.az = 0.0660532463636635;
    tmp_msg_0.flags = 7142U;
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
    msg.setTimeStamp(0.2898076771928293);
    msg.setSource(15514U);
    msg.setSourceEntity(161U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.8542836745226327;
    msg.lon = 0.26760493757125714;
    msg.depth = 0.025124322745788685;
    msg.sentence.assign("ICOGEWEPJVVWGCFMMRQPWLGCOSTUQTRFJTZNZKXBSHWLSYSFIRZYRAWKYAAULXKQBAYEQTDVGTMYVVHEXHAZGECRJLIENSRPBIKMSSOKDPHIRG");
    msg.txtime = 0.07003585764728915;
    msg.modem_type.assign("YKJBKRHHXAITQLDTVBME");
    msg.sys_src.assign("SWPDKWNPTHJKJIQBNGVQBOKIAWEMHEDTETRAYQHN");
    msg.seq = 21911U;
    msg.sys_dst.assign("UPOZOPMEISFSGAWMGUIUPSHNZSCVJFJGOQGMOGYQLKQMTNZVCKJYTBSKHREGBBDGRPQVWIRYANRKRDUYHVEPELTDXNFYLDPWBAVNXTKPXQTCQCXADBDHVOZXVERUYROQDLAUSWTNFQFHNKYOJWSZXACJTURNHEZYMYKAPZLJXKEAWHHVDBWYHLJIFQNUPFFGLBXSLUZVTCOIMREXBONFMDMELUWTVROIZSWZ");
    msg.flags = 172U;
    const signed char tmp_msg_0[] = {-40, 35, -100, 24, -20, 15, -12, -125, -29, 23, -61, -56, 49, -26, 101, 63, -32, -109, 60, -56, -96, 42, -94, 82, -21, -25, -59, -13, -14, -122, 51, 50, -6, 88, 33, 100, 96, -30, -26, 76, 41, -55, -49, 54, -11, 59, 49, -82, -121, 105, -43, -80, 10, 59, 79, -78, -11, 14, -110, 12, 104, 34, -58, -68, -92, -122, 91, -90, 72, 79, -7, -36, 38, -3, -117, 97, 126, 61, 112, -54, 93, 71, -108, 64, -113, -64, -66, -63, 120, 113, -103, -110, -128, 95, 94, 110, -81, -14, 23, -65, -43, 77, 113, -56, -98, -95, -114, -98, -58, -119, -105, 28, 38, 89, -48, -104, 110, 100, 88, 124, -14, -45, -36, 75, -118, 92, 2, 56, 124, 10, -2, -24, -33, -103, -118, -36, -34, -21, 88, 80, 118, 73, 81};
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
    msg.setTimeStamp(0.033428179756978094);
    msg.setSource(2538U);
    msg.setSourceEntity(95U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.6786656716286328;
    msg.lon = 0.7397430609443766;
    msg.depth = 0.43642323182261533;
    msg.sentence.assign("QFJGBNZUTZHUIXUPDEDBIPEYDBCZMKKBTNVPYEKFTDTFYSWETAIYBVBHPNFCYUOXWYLKMQFMJJTFOQOLRJUDXRCIRNHMGCSFGZTQUHAJMDPWJQDOEBVVYHWDUCIQWMLNUENTGSYEMSVROHMPUWZQJVBDCNJBXCILKPMNWZXRKFUHIRKJVTXSAPCJZQLRGRSHSFAGLXBAEHIWRICXEEWYANOZ");
    msg.txtime = 0.7015133642293735;
    msg.modem_type.assign("RUJQHHAZMSJDNDREVCSLFUAVNXINWITNOYEJRUAXMECIWFRXTRUFXKQYWZZABHVYQOGGMZKXCUASVALOFETBLDZFNIAWXIJZVYLKMGEUYOSDEWPKCXAXDCZRMTNMZKMLHPFDLQSTBDMPTLTJUJBRYSJSVMOYPQPGFWUTFLJCMHBPGQKBLONOCVBEDV");
    msg.sys_src.assign("JKDSZQGQXNGOFADKETFLCNRYYBIQVRPXRRJSRSNJFHMQAOAQS");
    msg.seq = 12875U;
    msg.sys_dst.assign("CELCZIBGNORPBGMPFWPBARBDCLWGRHGVQSEMEMJNTDSULZFZGJKZVQEHKJNLIDSOEZWPBIRZYXFRPGZNAJYKHFV");
    msg.flags = 80U;
    const signed char tmp_msg_0[] = {-93, 94, 122, -109, 43, -16, 54, 4, -3, -115, -23, -71, -38, -80, 120, -71, 79, 116, -32, 92, -101, 86, -98, -44, 122, 99, -119, -73, -71, -1, -108, -32, -56, 44, 21, -82, 52, 69, 110, 71, -13, 100, 33, -40, 6, 114, 53, 55, 2, -20, 5, -15, 109, 64, -47, -56, -116, -123, -13, -83, -105, 121, -87, -48, -84, 9, 46, -37, -42, -44, 87, 44, -71, -49, 107, -67, 49, 113, -124, -95, 63, -6, -70, -119, 12, -45, -6, -94, 99, 104, 30, 60, 32, 69, 8, 66, 12, 46, 3, 118, -4, -119, -59, 123, -96, -76, 10, -118, -84, 90, -12, 78, -81, -43, 38, -31, -23, 70, 86, -39, 112, -55, -30, 53, 64, -42, -22, 5, -48, -13, -118, -100, -86, -25, -116, 33, 97, 56, 91, -71, 5, -100, 21, 70, -45, 16, -21, -44, -111, -54, 67, 93, 5, -42, 37, -61, 17, -121, -126, 16, -120, -73, 47, -3, -82, 69, -56, 78, -91, 120, 23, -22, -96, -29, -94, 56, 16, 57, -100, 110, -61, 45, -4, 114, -18, 60, -66, -40, 64, -127, -79, -112, -18, -60, -119, -76, 21, 1, -84, -17, -115, 29, -126, -34, -89, 74, 5, -111, 60, 88, -66, -66, -98, 86, 88, 109, -40, -4, -50, -78, 45, -66, -43, -19, -57};
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
    msg.setTimeStamp(0.15943910232852843);
    msg.setSource(5134U);
    msg.setSourceEntity(45U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.6051914936578575;
    msg.lon = 0.36609791671802683;
    msg.depth = 0.43213281897577027;
    msg.sentence.assign("VLLKLUSWSJAEOMHSGLWQBXGWMITIIXDOUFNJDGIMOZUJTNXDXEZZFLPIOYWFDCKAKQGNYQTZECHKLIOHKCTRTRFYHXSUPEYYIDATAVCZTPDZCRXFBJELNFQVVRCGVWUYEHQGPNXHEKNQXZMNFGARRWNQUURQBP");
    msg.txtime = 0.6454856357450236;
    msg.modem_type.assign("NEOWQKKRAYONAAZHPUCUHULWXPGLCVPOBCCPLGIIOFDEQDGCDSYZTTVDAHWRMGSZKTJAIUSZKSABWTGPHEBXRLKYFNHREXLCZVJENZMTSTJMJPMPIYMXAXYEVDCGKIYLFFUMLSDQTIXVC");
    msg.sys_src.assign("FYVTADDUCXYGXVUQCUZXAHHIRCTHOHJZUMXQLJFJBMTSWYESRNBZPGIPFARLIQACPDUTIDNJYGBYIJBNZTWXLIFAPTRZXWENKINOOUVJFWHOLEKDAUCPPOWCFY");
    msg.seq = 21487U;
    msg.sys_dst.assign("NTNFQDBMUGUYMBEDKGIVPAAZCVFBDQZCNVBJFHVEKRRQOZUEALXOMHMPUTWGYIWFGAFUBDITTCTPKIFUZXVGCPXQWHGBYYZKEJTSRCQJWPEUZDZHJIHSSKALXDRQTXLDIRWLRQEPGANPHCKF");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {-116, 114, -57, 104, 78, -109, -111, -40, 106, 33};
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
    msg.setTimeStamp(0.6887727264788419);
    msg.setSource(1455U);
    msg.setSourceEntity(23U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(79U);
    msg.op = 113U;
    msg.system.assign("KVLDNDOCTJDSLPYEAORCTPXHACEXXOMBXSQCRCQQAVKQTFMLADQMMCKBRJEXJQSUFUVKFOBBOGBQSSJYEUQFNNWZYMINWFVLJYYLFIFUQSOEVOUJHXHPMVPMHZFGCXKDZRXUUOVGVOERNESQARVMZSKDRSCGDLIYTXIZYYUFNPGTWJEPGTVUSBWBHAYEZKTZMHIRBNAKHWJIZH");
    msg.range = 0.8809748728393394;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2672644166U;
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
    msg.setTimeStamp(0.6559962884405686);
    msg.setSource(43641U);
    msg.setSourceEntity(140U);
    msg.setDestination(14630U);
    msg.setDestinationEntity(44U);
    msg.op = 54U;
    msg.system.assign("TQWYSNTMIGDSEQYOLJRWUUDMQVNCNHXGOAMYRZFRSMHBWJQFIHJTKGWTUBULWLHJSRMLRFGACEZTHOWDURNWPXFGIGIPDJEMQDOABEVLKLOBBVEUMQZSGUFABULYRIOETEBYYJCCTUB");
    msg.range = 0.5287411462348014;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 8U;
    tmp_msg_0.op = 182U;
    tmp_msg_0.possimerr = 0.8202898988371159;
    tmp_msg_0.converg = 0.6451160927931296;
    tmp_msg_0.turbulence = 0.8008756961147803;
    tmp_msg_0.possimmon = 126U;
    tmp_msg_0.commmon = 44U;
    tmp_msg_0.convergmon = 137U;
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
    msg.setTimeStamp(0.907445252096185);
    msg.setSource(11095U);
    msg.setSourceEntity(39U);
    msg.setDestination(23748U);
    msg.setDestinationEntity(201U);
    msg.op = 93U;
    msg.system.assign("EYKVSBRCNVKVOEADKXWXWUBNGTKHTMQCCOBVQYTNJIXUTFETLQYZCAOMBDUKNFXZQJWUXKXIOVSVNZHPQTBGUSIQZEDZUNPBINSVPOHMJMLIRVSPXQDSTYQGOWWOHHF");
    msg.range = 0.14495109551652463;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WQHGPCXNGWDAOSNGHDTAERUQVHJEWERRXPVJTMLYXZUSYZHOTLDZIEFNWLTRWIOUCXZLPISCKJMUONKOKRXSYYDCQUZRMRFPQEAFTFBXDCBRMVLBPYLEVAWVKSSEIZUZLDOXBCQGABZNNAOFDCZKHMKYHXYGNFWYHLWKQSAVKVDMQERZGTLHJWBIMJSXVPEGYJTMEUXQCSWI");
    tmp_msg_0.sys_type = 141U;
    tmp_msg_0.owner = 27778U;
    tmp_msg_0.lat = 0.9452567794061892;
    tmp_msg_0.lon = 0.7132348410533597;
    tmp_msg_0.height = 0.74828317569576;
    tmp_msg_0.services.assign("BPGHCMDALYFHATAJFVHXVRZQVVCLMJFOGTALMMUKDVUKRZAUJXVBEYMBSLEUQNJIHGKJOZHWLYYUPMKPEMHNBBYJOOPHYXGNPGRZJFNDEWWETDDICYSLSICDGIPOACSZKHYXOIEYQWNEZWPNQTVGIXQLQOSAXUJELXVOKMQCCETOWZONUBKPXHKBQFWYHWXD");
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
    msg.setTimeStamp(0.18674381611155466);
    msg.setSource(43059U);
    msg.setSourceEntity(186U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.21560274305691063);
    msg.setSource(56864U);
    msg.setSourceEntity(136U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6072642528681723);
    msg.setSource(42117U);
    msg.setSourceEntity(71U);
    msg.setDestination(23352U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.19579578319460145);
    msg.setSource(4234U);
    msg.setSourceEntity(71U);
    msg.setDestination(7713U);
    msg.setDestinationEntity(224U);
    msg.list.assign("WWFSGUOCQGFKOTEZFPJQYAIIKYUVGERZSAWJMLXLXGPNRWVMXISEDPQKRYSMQBNNHJKAIUBAVAYWSPQEXCXNHHAEEBQHRINGPYTUYCDFUCGYUCBZLDCJMYHBRFZUDDWORUCJDMOLNIPPB");

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
    msg.setTimeStamp(0.6774819721906126);
    msg.setSource(2337U);
    msg.setSourceEntity(8U);
    msg.setDestination(40028U);
    msg.setDestinationEntity(31U);
    msg.list.assign("BFOVIHLJEKADLGMNZBTNFMHCDKPHKMJEZQCMFJEXOGPXDAYOXBRFQJWVOUNZQLMELNTRANPMFDYWVNVEVGCLA");

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
    msg.setTimeStamp(0.3272683491292643);
    msg.setSource(65448U);
    msg.setSourceEntity(11U);
    msg.setDestination(47030U);
    msg.setDestinationEntity(15U);
    msg.list.assign("AGXQLXQLPJKYEYMYYJAMDWVZOOJRBBMFLSQMGVHVESMZGSCFLDUYKNBXDIBJLVAKFDJKWAQDVMGFNMIZQSJBVISPUOVHHWZCTPKPZWKJLDZWCAVFWGGNKBENNCZRNAHHBFTMO");

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
    msg.setTimeStamp(0.7919321295177334);
    msg.setSource(42832U);
    msg.setSourceEntity(104U);
    msg.setDestination(41853U);
    msg.setDestinationEntity(75U);
    msg.peer.assign("EKAGJRUFMPFFDBQARGJHERONYKNYVUFYJOSRHJZPIRRVAUOAMHGKVLTIUXCLBCASGJ");
    msg.rssi = 0.3890993223617717;
    msg.integrity = 24790U;

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
    msg.setTimeStamp(0.36238402042202955);
    msg.setSource(55149U);
    msg.setSourceEntity(1U);
    msg.setDestination(9330U);
    msg.setDestinationEntity(104U);
    msg.peer.assign("CZCIIGQGISHLVKEFPXELJDKIJDINHIOOYFEUZATKAYLCSEXNOVGIWCADKPHSIVNWCWKAQXZXCLXOPHSULFBMEELDKXQXNVGLWBKUOFDBJRJNBJTJMCFALRJYQCRPLYTBYTMWNPUZHDRVDMYTFLHFZWTNQB");
    msg.rssi = 0.4842596259498334;
    msg.integrity = 12012U;

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
    msg.setTimeStamp(0.025965340248794933);
    msg.setSource(23731U);
    msg.setSourceEntity(85U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(190U);
    msg.peer.assign("HEIYFDWVSZLOJJVOKQZPYMMLCFRKUBNWIGUQWVVITXERSKQFMNPPNQMSKZHACUEXDRNVWNAXMSPTBWBGGFTLLAIDYTACFVDHBGPFXYTTHJAGVKWAHZJCZYEUPDNIX");
    msg.rssi = 0.14304803153720436;
    msg.integrity = 35074U;

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
    msg.setTimeStamp(0.43691690816574436);
    msg.setSource(22260U);
    msg.setSourceEntity(155U);
    msg.setDestination(25706U);
    msg.setDestinationEntity(36U);
    msg.req_id = 51914U;
    msg.destination.assign("ZLYCKWMEQXVTJRNSMDECLHCQNJVIGQFDQJXHDSOTBMBQRSZUFNBFOMFSYVJZXTLEJXMFBOAWTWAWYTNAXGATBDYKGUUVDLHZUSNLQEHEGRAUPJZAPERAYYRICUOPOMJZKYGFFKMNIIOQHLKPRRCIUIFQBTFNLHPXECDWWEGANPSYXUWLMOCGFRBTVVHPEJG");
    msg.timeout = 0.363950725704589;
    msg.range = 0.42210670450426924;
    msg.type = 235U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7558652192295048;
    tmp_msg_0.y = 0.6201700252096523;
    tmp_msg_0.z = 0.9346754340294552;
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
    msg.setTimeStamp(0.7416444967144217);
    msg.setSource(14540U);
    msg.setSourceEntity(238U);
    msg.setDestination(51743U);
    msg.setDestinationEntity(229U);
    msg.req_id = 53343U;
    msg.destination.assign("BYWYVKKHPLFCATHTUMXUXQEJHLRAFJZEZCKIQBEPZSWCBOZCQRBJOJCQPGMKNITFWSGGVYMDYKLTTWKGDTJHRRVBLLNGXCNURBIOESYIGFWSQNREUTMWFFXMZSMQTPPLPREBDUGKOLNUXOITYYAMRVBWFAJD");
    msg.timeout = 0.5828493293165251;
    msg.range = 0.9476825846107174;
    msg.type = 55U;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.8737880834114279;
    tmp_msg_0.speed = 0.980613660343371;
    tmp_msg_0.turbulence = 0.9765453588215948;
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
    msg.setTimeStamp(0.3849593589889121);
    msg.setSource(15843U);
    msg.setSourceEntity(221U);
    msg.setDestination(15032U);
    msg.setDestinationEntity(103U);
    msg.req_id = 7340U;
    msg.destination.assign("QUGDKPZHQIZMHAMJGDUYZMNYEDHGASXOPQOVVNBMMRTORZZJNNXOPEUKOTGEAWWXLYLVDKFCLPTWKMBHBBNTLKGLSDHYLQGRLSSTYTVWFRJDBMEVYKAVCNSFQERYHAIURVMDLLWXDSEXIUAVRKOIZEFZWIOXNHEQQWIFPYVXYBPHBZUBPVWOCDPTEXFMAUQTFWQOUGJICXSBYPZNBHTINIJHGCGJQAJSALFKJJNCGWSUR");
    msg.timeout = 0.725983586986065;
    msg.range = 0.24555755359305054;
    msg.type = 195U;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.1256204303703795);
    msg.setSource(27503U);
    msg.setSourceEntity(247U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(78U);
    msg.req_id = 38393U;
    msg.type = 115U;
    msg.status = 100U;
    msg.info.assign("LCVNIRCXGEPELELSPEVSKUCZRKHTNDDIHCIOFGDYQHDSVAEUWQTJKVXOTLLJBHBJAYY");
    msg.range = 0.8989904624035593;

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
    msg.setTimeStamp(0.6706364587212729);
    msg.setSource(5428U);
    msg.setSourceEntity(89U);
    msg.setDestination(283U);
    msg.setDestinationEntity(161U);
    msg.req_id = 22475U;
    msg.type = 245U;
    msg.status = 9U;
    msg.info.assign("CJAGYCRWWYWMUTAYFMDHRAFTCWIANPSAJKGTYATBMCXJOSGLWQCLBURJOYWQOJKVKQZQBPXSFJASNFEERPODSUZHXVLWIZJMZESIQBDMHWAUBZQZUKEWYPKNCPRMRHZRERQJSBZNTRKDPOWEMSGTKYAHBENOLNVXDQIHFXGLQSJCNXKETFVPDNZNIHXY");
    msg.range = 0.23726992618666343;

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
    msg.setTimeStamp(0.10719738499653664);
    msg.setSource(21691U);
    msg.setSourceEntity(117U);
    msg.setDestination(52479U);
    msg.setDestinationEntity(155U);
    msg.req_id = 27491U;
    msg.type = 79U;
    msg.status = 105U;
    msg.info.assign("BWQYRYHMVLDUTRW");
    msg.range = 0.06701281507351009;

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
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.5051224506762668);
    msg.setSource(49253U);
    msg.setSourceEntity(36U);
    msg.setDestination(21634U);
    msg.setDestinationEntity(6U);
    msg.system.assign("CDNLOCCKEQBAGMMESDCUHTCKQVNOGVWUBJAMPEVISVBZJYOBEDMMXHBGSD");
    msg.op = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9856756903310773);
    msg.setSource(34760U);
    msg.setSourceEntity(30U);
    msg.setDestination(39744U);
    msg.setDestinationEntity(180U);
    msg.system.assign("RECCVEMRKCXSEHGWYUKWHWSCIVQLHVFTZQFJVJVLNDNYZIBRLJCTNVXTJOEFAFLZOFCJRVQIZKUDRFNFXJTQXGQZOSNBFLCSBGKWUDBBGYBNOXWOOUMIUMPRSYLJGMEEVGQBZYOHULHOCMCMKTKMKVUIJPXYNTFMMJETDAWPYNXYHPELKEHUWZSHPAISPXQIDTXLQZRQDAQAGPASKPWKTJPBUDDWS");
    msg.op = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9740763775319424);
    msg.setSource(24355U);
    msg.setSourceEntity(93U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(166U);
    msg.system.assign("FOFRENTJDQXTYSGPYXUJDSURHWNMWUOVQIKJACXLPBTNENVJSK");
    msg.op = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5525503343550436);
    msg.setSource(16193U);
    msg.setSourceEntity(147U);
    msg.setDestination(53473U);
    msg.setDestinationEntity(4U);
    msg.value = 5039;

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
    msg.setTimeStamp(0.06593356348038637);
    msg.setSource(57319U);
    msg.setSourceEntity(105U);
    msg.setDestination(5192U);
    msg.setDestinationEntity(230U);
    msg.value = -7593;

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
    msg.setTimeStamp(0.778722315347408);
    msg.setSource(723U);
    msg.setSourceEntity(238U);
    msg.setDestination(33959U);
    msg.setDestinationEntity(13U);
    msg.value = -27657;

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
    msg.setTimeStamp(0.1397046665308348);
    msg.setSource(63224U);
    msg.setSourceEntity(106U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6315497346097931;

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
    msg.setTimeStamp(0.723508422077444);
    msg.setSource(33611U);
    msg.setSourceEntity(23U);
    msg.setDestination(39383U);
    msg.setDestinationEntity(103U);
    msg.value = 0.05733126043385961;

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
    msg.setTimeStamp(0.3063541302687861);
    msg.setSource(12045U);
    msg.setSourceEntity(35U);
    msg.setDestination(25911U);
    msg.setDestinationEntity(52U);
    msg.value = 0.781619882694457;

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
    msg.setTimeStamp(0.8757371847832732);
    msg.setSource(63678U);
    msg.setSourceEntity(39U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7951199615161563;

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
    msg.setTimeStamp(0.31134731279459515);
    msg.setSource(8755U);
    msg.setSourceEntity(61U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8986228703954806;

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
    msg.setTimeStamp(0.7448219314213722);
    msg.setSource(25676U);
    msg.setSourceEntity(169U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8692807780000519;

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
    msg.setTimeStamp(0.6394886791617246);
    msg.setSource(10088U);
    msg.setSourceEntity(38U);
    msg.setDestination(58481U);
    msg.setDestinationEntity(97U);
    msg.validity = 7885U;
    msg.type = 223U;
    msg.utc_year = 15983U;
    msg.utc_month = 144U;
    msg.utc_day = 142U;
    msg.utc_time = 0.4036301636584009;
    msg.lat = 0.24465659723145372;
    msg.lon = 0.6130918316721968;
    msg.height = 0.23810996316172195;
    msg.satellites = 233U;
    msg.cog = 0.5305330524702334;
    msg.sog = 0.9045565765562399;
    msg.hdop = 0.537221680609534;
    msg.vdop = 0.13376294107137787;
    msg.hacc = 0.45611096539457463;
    msg.vacc = 0.7562139522617363;

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
    msg.setTimeStamp(0.05185858001557697);
    msg.setSource(30248U);
    msg.setSourceEntity(191U);
    msg.setDestination(4284U);
    msg.setDestinationEntity(202U);
    msg.validity = 52556U;
    msg.type = 50U;
    msg.utc_year = 27669U;
    msg.utc_month = 208U;
    msg.utc_day = 108U;
    msg.utc_time = 0.778720044758956;
    msg.lat = 0.21494326677214937;
    msg.lon = 0.9167767218353349;
    msg.height = 0.3012714031723064;
    msg.satellites = 7U;
    msg.cog = 0.4372269141333254;
    msg.sog = 0.07180831226775264;
    msg.hdop = 0.6056323545650574;
    msg.vdop = 0.523569190088474;
    msg.hacc = 0.01684837309293219;
    msg.vacc = 0.5131672766304387;

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
    msg.setTimeStamp(0.18791743047627352);
    msg.setSource(4201U);
    msg.setSourceEntity(221U);
    msg.setDestination(10973U);
    msg.setDestinationEntity(40U);
    msg.validity = 25950U;
    msg.type = 216U;
    msg.utc_year = 64249U;
    msg.utc_month = 252U;
    msg.utc_day = 128U;
    msg.utc_time = 0.14609910202106424;
    msg.lat = 0.23420255167766713;
    msg.lon = 0.4115199976299845;
    msg.height = 0.07348223305947221;
    msg.satellites = 80U;
    msg.cog = 0.3124156793711209;
    msg.sog = 0.5847816941557284;
    msg.hdop = 0.8377891793015575;
    msg.vdop = 0.8855140738661668;
    msg.hacc = 0.8598010798458042;
    msg.vacc = 0.4583887256952034;

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
    msg.setTimeStamp(0.0483885090271029);
    msg.setSource(35081U);
    msg.setSourceEntity(189U);
    msg.setDestination(7704U);
    msg.setDestinationEntity(80U);
    msg.time = 0.8144380875801823;
    msg.phi = 0.3949672463239897;
    msg.theta = 0.2020864624684815;
    msg.psi = 0.7136070287664513;
    msg.psi_magnetic = 0.7729339437473897;

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
    msg.setTimeStamp(0.9973623800273743);
    msg.setSource(34741U);
    msg.setSourceEntity(148U);
    msg.setDestination(52708U);
    msg.setDestinationEntity(59U);
    msg.time = 0.8693747304312345;
    msg.phi = 0.9142704827470237;
    msg.theta = 0.11742869238334397;
    msg.psi = 0.6780577500513898;
    msg.psi_magnetic = 0.3011248782963807;

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
    msg.setTimeStamp(0.8230445241643393);
    msg.setSource(28804U);
    msg.setSourceEntity(4U);
    msg.setDestination(3718U);
    msg.setDestinationEntity(147U);
    msg.time = 0.3674325954116112;
    msg.phi = 0.7683975222690771;
    msg.theta = 0.21055020497971355;
    msg.psi = 0.6405758129602497;
    msg.psi_magnetic = 0.31609760749847426;

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
    msg.setTimeStamp(0.631128532144728);
    msg.setSource(34021U);
    msg.setSourceEntity(46U);
    msg.setDestination(63979U);
    msg.setDestinationEntity(44U);
    msg.time = 0.44824736006673327;
    msg.x = 0.9627917795227189;
    msg.y = 0.5374256384340217;
    msg.z = 0.5270852463820781;
    msg.timestep = 0.5772717838244947;

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
    msg.setTimeStamp(0.982303006849104);
    msg.setSource(11179U);
    msg.setSourceEntity(43U);
    msg.setDestination(23858U);
    msg.setDestinationEntity(128U);
    msg.time = 0.9257755667711255;
    msg.x = 0.5259382608641534;
    msg.y = 0.19343623284736167;
    msg.z = 0.0909003723414803;
    msg.timestep = 0.527649243029319;

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
    msg.setTimeStamp(0.3298109985363131);
    msg.setSource(49098U);
    msg.setSourceEntity(226U);
    msg.setDestination(50079U);
    msg.setDestinationEntity(157U);
    msg.time = 0.9704885344474542;
    msg.x = 0.27064733714862066;
    msg.y = 0.7241126925218861;
    msg.z = 0.5183081135092371;
    msg.timestep = 0.9928914346942738;

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
    msg.setTimeStamp(0.5383781185795157);
    msg.setSource(40031U);
    msg.setSourceEntity(89U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(132U);
    msg.time = 0.5496801777876257;
    msg.x = 0.657254006697503;
    msg.y = 0.7918319568785808;
    msg.z = 0.7856008655962919;

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
    msg.setTimeStamp(0.906183460853786);
    msg.setSource(43149U);
    msg.setSourceEntity(162U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(85U);
    msg.time = 0.36075371203454554;
    msg.x = 0.0825516678796796;
    msg.y = 0.2054853732678129;
    msg.z = 0.1763303893350705;

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
    msg.setTimeStamp(0.12487733802647216);
    msg.setSource(56879U);
    msg.setSourceEntity(94U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(130U);
    msg.time = 0.5490146006790034;
    msg.x = 0.5053524870865665;
    msg.y = 0.6491510330044908;
    msg.z = 0.6263998600088491;

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
    msg.setTimeStamp(0.46242563447397167);
    msg.setSource(40316U);
    msg.setSourceEntity(234U);
    msg.setDestination(39547U);
    msg.setDestinationEntity(241U);
    msg.time = 0.6615886845650654;
    msg.x = 0.9608469221853098;
    msg.y = 0.7617188624109875;
    msg.z = 0.09220517490751645;

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
    msg.setTimeStamp(0.1629864331197387);
    msg.setSource(37149U);
    msg.setSourceEntity(8U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(179U);
    msg.time = 0.6834610852332482;
    msg.x = 0.20367833925163603;
    msg.y = 0.21356439438480357;
    msg.z = 0.3960341053562191;

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
    msg.setTimeStamp(0.9764456374229352);
    msg.setSource(29502U);
    msg.setSourceEntity(4U);
    msg.setDestination(36536U);
    msg.setDestinationEntity(205U);
    msg.time = 0.7927552494374318;
    msg.x = 0.7024354131201875;
    msg.y = 0.5604974217269986;
    msg.z = 0.4031047285185062;

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
    msg.setTimeStamp(0.7628294884978797);
    msg.setSource(46646U);
    msg.setSourceEntity(158U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(23U);
    msg.time = 0.9465425959363964;
    msg.x = 0.5257440528049813;
    msg.y = 0.9721228626118377;
    msg.z = 0.3937207217426316;

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
    msg.setTimeStamp(0.9051556884618551);
    msg.setSource(50172U);
    msg.setSourceEntity(200U);
    msg.setDestination(48687U);
    msg.setDestinationEntity(151U);
    msg.time = 0.9141558904271693;
    msg.x = 0.6942666288372011;
    msg.y = 0.1425425737548336;
    msg.z = 0.7961770756100515;

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
    msg.setTimeStamp(0.7622165690203153);
    msg.setSource(49259U);
    msg.setSourceEntity(35U);
    msg.setDestination(28439U);
    msg.setDestinationEntity(246U);
    msg.time = 0.4541162981883571;
    msg.x = 0.20686138205234528;
    msg.y = 0.1232792666785546;
    msg.z = 0.7729148523933845;

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
    msg.setTimeStamp(0.23975027163040086);
    msg.setSource(60378U);
    msg.setSourceEntity(105U);
    msg.setDestination(56393U);
    msg.setDestinationEntity(13U);
    msg.validity = 235U;
    msg.x = 0.5859135424774143;
    msg.y = 0.7411184758284132;
    msg.z = 0.5643294534269595;

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
    msg.setTimeStamp(0.9706649441349807);
    msg.setSource(53808U);
    msg.setSourceEntity(34U);
    msg.setDestination(62142U);
    msg.setDestinationEntity(40U);
    msg.validity = 235U;
    msg.x = 0.6476972422687187;
    msg.y = 0.15104856118910948;
    msg.z = 0.2998575442382826;

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
    msg.setTimeStamp(0.5736481240083233);
    msg.setSource(8028U);
    msg.setSourceEntity(179U);
    msg.setDestination(38527U);
    msg.setDestinationEntity(84U);
    msg.validity = 148U;
    msg.x = 0.8781216015875469;
    msg.y = 0.17934170939746774;
    msg.z = 0.32628064733806206;

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
    msg.setTimeStamp(0.5235366325193834);
    msg.setSource(32693U);
    msg.setSourceEntity(243U);
    msg.setDestination(24506U);
    msg.setDestinationEntity(162U);
    msg.validity = 10U;
    msg.x = 0.6479036043407831;
    msg.y = 0.3120745121861699;
    msg.z = 0.5737782196695926;

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
    msg.setTimeStamp(0.25106369200643464);
    msg.setSource(36014U);
    msg.setSourceEntity(136U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(199U);
    msg.validity = 203U;
    msg.x = 0.7425996780678314;
    msg.y = 0.7336091355226273;
    msg.z = 0.7237048133767038;

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
    msg.setTimeStamp(0.6157019418240948);
    msg.setSource(38054U);
    msg.setSourceEntity(130U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(53U);
    msg.validity = 25U;
    msg.x = 0.22686416521098218;
    msg.y = 0.46086643480845546;
    msg.z = 0.8146832091677303;

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
    msg.setTimeStamp(0.980045793626363);
    msg.setSource(57288U);
    msg.setSourceEntity(157U);
    msg.setDestination(6721U);
    msg.setDestinationEntity(93U);
    msg.time = 0.27512330564716714;
    msg.x = 0.2749951021912742;
    msg.y = 0.2655859055057228;
    msg.z = 0.585837822877587;

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
    msg.setTimeStamp(0.1615624473441658);
    msg.setSource(32216U);
    msg.setSourceEntity(55U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(3U);
    msg.time = 0.4831672815073582;
    msg.x = 0.8525563320300745;
    msg.y = 0.035144076778747424;
    msg.z = 0.7032218300280423;

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
    msg.setTimeStamp(0.675293254942786);
    msg.setSource(32732U);
    msg.setSourceEntity(190U);
    msg.setDestination(18419U);
    msg.setDestinationEntity(57U);
    msg.time = 0.03859345714773388;
    msg.x = 0.18765374629245302;
    msg.y = 0.014068489412271012;
    msg.z = 0.1962270319594378;

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
    msg.setTimeStamp(0.0059884087463450975);
    msg.setSource(43989U);
    msg.setSourceEntity(239U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(51U);
    msg.validity = 24U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7324799509568515;
    tmp_msg_0.beam_height = 0.8648869903025124;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4245803021766924;

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
    msg.setTimeStamp(0.7729391863884378);
    msg.setSource(178U);
    msg.setSourceEntity(119U);
    msg.setDestination(53508U);
    msg.setDestinationEntity(78U);
    msg.validity = 76U;
    msg.value = 0.16399343069475814;

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
    msg.setTimeStamp(0.31842424687916393);
    msg.setSource(34952U);
    msg.setSourceEntity(107U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(66U);
    msg.validity = 101U;
    msg.value = 0.8585638061104169;

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
    msg.setTimeStamp(0.019261573169082613);
    msg.setSource(20069U);
    msg.setSourceEntity(182U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7165944444393474;

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
    msg.setTimeStamp(0.9389826389908925);
    msg.setSource(30658U);
    msg.setSourceEntity(134U);
    msg.setDestination(53548U);
    msg.setDestinationEntity(40U);
    msg.value = 0.4971421394302671;

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
    msg.setTimeStamp(0.4378823376049401);
    msg.setSource(60240U);
    msg.setSourceEntity(91U);
    msg.setDestination(587U);
    msg.setDestinationEntity(31U);
    msg.value = 0.17926261768839113;

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
    msg.setTimeStamp(0.32901877693959447);
    msg.setSource(23388U);
    msg.setSourceEntity(32U);
    msg.setDestination(16008U);
    msg.setDestinationEntity(96U);
    msg.value = 0.13517271474178727;

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
    msg.setTimeStamp(0.9771839665084714);
    msg.setSource(32357U);
    msg.setSourceEntity(152U);
    msg.setDestination(61336U);
    msg.setDestinationEntity(6U);
    msg.value = 0.09733739078583259;

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
    msg.setTimeStamp(0.5471617364515993);
    msg.setSource(33077U);
    msg.setSourceEntity(108U);
    msg.setDestination(15513U);
    msg.setDestinationEntity(2U);
    msg.value = 0.3971176099539534;

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
    msg.setTimeStamp(0.6760385324149903);
    msg.setSource(9464U);
    msg.setSourceEntity(12U);
    msg.setDestination(23053U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3897224490536654;

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
    msg.setTimeStamp(0.05612796295777167);
    msg.setSource(61343U);
    msg.setSourceEntity(14U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(99U);
    msg.value = 0.21333324942851606;

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
    msg.setTimeStamp(0.107455752813996);
    msg.setSource(44581U);
    msg.setSourceEntity(56U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(97U);
    msg.value = 0.02215221415634494;

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
    msg.setTimeStamp(0.3752071848320466);
    msg.setSource(33807U);
    msg.setSourceEntity(45U);
    msg.setDestination(13811U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9990370489196655;

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
    msg.setTimeStamp(0.10232309174682874);
    msg.setSource(2112U);
    msg.setSourceEntity(168U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6128925452563759;

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
    msg.setTimeStamp(0.17072255235511702);
    msg.setSource(38529U);
    msg.setSourceEntity(85U);
    msg.setDestination(14679U);
    msg.setDestinationEntity(157U);
    msg.value = 0.504178334055547;

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
    msg.setTimeStamp(0.1798344956572352);
    msg.setSource(16306U);
    msg.setSourceEntity(137U);
    msg.setDestination(35192U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9591321511991489;

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
    msg.setTimeStamp(0.6538342849086275);
    msg.setSource(47682U);
    msg.setSourceEntity(40U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7052882380111549;

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
    msg.setTimeStamp(0.15912232898197498);
    msg.setSource(59209U);
    msg.setSourceEntity(227U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(73U);
    msg.value = 0.13522558396852224;

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
    msg.setTimeStamp(0.10581112814162852);
    msg.setSource(52229U);
    msg.setSourceEntity(111U);
    msg.setDestination(17463U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9490813068685061;

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
    msg.setTimeStamp(0.7560557482646163);
    msg.setSource(38310U);
    msg.setSourceEntity(28U);
    msg.setDestination(64880U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7250809234893638;

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
    msg.setTimeStamp(0.6287337164913955);
    msg.setSource(46982U);
    msg.setSourceEntity(88U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(105U);
    msg.value = 0.570291837415008;

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
    msg.setTimeStamp(0.17684391355521967);
    msg.setSource(24180U);
    msg.setSourceEntity(191U);
    msg.setDestination(10795U);
    msg.setDestinationEntity(173U);
    msg.value = 0.7362774852911502;

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
    msg.setTimeStamp(0.4634069378914417);
    msg.setSource(38319U);
    msg.setSourceEntity(125U);
    msg.setDestination(49620U);
    msg.setDestinationEntity(86U);
    msg.value = 0.0919739112407818;

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
    msg.setTimeStamp(0.7343689880744706);
    msg.setSource(25656U);
    msg.setSourceEntity(179U);
    msg.setDestination(8526U);
    msg.setDestinationEntity(243U);
    msg.value = 0.41074599076447693;

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
    msg.setTimeStamp(0.3082470094753136);
    msg.setSource(59542U);
    msg.setSourceEntity(69U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(87U);
    msg.value = 0.09061073714200196;

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
    msg.setTimeStamp(0.12434820948093683);
    msg.setSource(45604U);
    msg.setSourceEntity(125U);
    msg.setDestination(14063U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8511673549456423;

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
    msg.setTimeStamp(0.7769621061690724);
    msg.setSource(32124U);
    msg.setSourceEntity(62U);
    msg.setDestination(47893U);
    msg.setDestinationEntity(153U);
    msg.value = 0.1488058314649533;

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
    msg.setTimeStamp(0.23305502737829253);
    msg.setSource(60305U);
    msg.setSourceEntity(20U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(202U);
    msg.direction = 0.12243412432650425;
    msg.speed = 0.8467886969392843;
    msg.turbulence = 0.19867551117815008;

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
    msg.setTimeStamp(0.0734188709965754);
    msg.setSource(9718U);
    msg.setSourceEntity(63U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(4U);
    msg.direction = 0.7603617898638847;
    msg.speed = 0.5679877245790208;
    msg.turbulence = 0.9595420412245123;

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
    msg.setTimeStamp(0.06326990951758893);
    msg.setSource(11113U);
    msg.setSourceEntity(202U);
    msg.setDestination(53465U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.8642487040560979;
    msg.speed = 0.7657181792402733;
    msg.turbulence = 0.8085481219358515;

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
    msg.setTimeStamp(0.6288732607514833);
    msg.setSource(42618U);
    msg.setSourceEntity(161U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(14U);
    msg.value = 0.1934798261510331;

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
    msg.setTimeStamp(0.7032163992470117);
    msg.setSource(35446U);
    msg.setSourceEntity(233U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(246U);
    msg.value = 0.21624881795443507;

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
    msg.setTimeStamp(0.1445947075964107);
    msg.setSource(29563U);
    msg.setSourceEntity(47U);
    msg.setDestination(9517U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8239346508273587;

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
    msg.setTimeStamp(0.8660376738444656);
    msg.setSource(7831U);
    msg.setSourceEntity(106U);
    msg.setDestination(43646U);
    msg.setDestinationEntity(110U);
    msg.value.assign("RVSLAPKXOXPHDIWKFAPBRJGKUUUAZJCDXRQXTPPXBHTKUPVMWFEIPZDLYGANFQOTJNYKIMMIEBKENHIEOTGRPGZLVGJLBCCXDJFCBVVSRDRVQLAZOXNTRRIOTWVJPDYWMZRYISWACMZLGKTVLMJSCMDOAECHZSEOKWOQLNHXQ");

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
    msg.setTimeStamp(0.9118735105118732);
    msg.setSource(3160U);
    msg.setSourceEntity(44U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(103U);
    msg.value.assign("HQPAVNPCVBNLNHQMRISXMWFVFQQYOTUBUBNRDCUEGLUAIJEMRDAABCXQWTNOBAMIZUAYGLRFEUVPVNHGYMQPTVCAYRJXKWOHRKGANLVZJISCXGCNGDDCMOBFRBJTEKQWYMTWSADGJLNDESHDXTPRFWCUSWD");

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
    msg.setTimeStamp(0.612412447945691);
    msg.setSource(47140U);
    msg.setSourceEntity(243U);
    msg.setDestination(22891U);
    msg.setDestinationEntity(208U);
    msg.value.assign("LXDPUMVIZSDBZEWVZOCYSWETDXAKMJQHUQRUKNGZERLTCBIMQFYITDLEYVSBYHRIBAZCDAFKCKIQWLFXLXOXBBTTHNJDEBFXNPGAMDGBYJGXEY");

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
    msg.setTimeStamp(0.6675563807046077);
    msg.setSource(63282U);
    msg.setSourceEntity(57U);
    msg.setDestination(26718U);
    msg.setDestinationEntity(91U);
    const signed char tmp_msg_0[] = {-8, -78, -52, 6, -100, -72, 89, -58, 27, 74, 55, 92, -79, 51, -50, -94, 82, 62, -3, -103, 17, 116, -92, -46, 115, 0, -7, 24, -35, -105, -74};
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
    msg.setTimeStamp(0.540201341467582);
    msg.setSource(19030U);
    msg.setSourceEntity(53U);
    msg.setDestination(32792U);
    msg.setDestinationEntity(253U);
    const signed char tmp_msg_0[] = {4, 29, 108, 55, 78, 122, 88, 122, -107, -25, -123, 110, 27, 32, 126, 3, -7, -27, 8, -10, 105, 76, -15, 3, -115, 75, -28, 125, -34, -104, 90, 122, -46, -81, -83, 100, -104, -27, -127, 15, -41, 57, 32, 27, 39, 43, -128, 6, 55, 103, -19, -33, 14, 109, 17, -33, 45, -104, -119, 3, 98, 0, -56, 53, 26, 8, 3, -124, 0, 63, 58, -21, 81, 112, 38, 57, 100, 56, 68, 36, -81, 98, 33, -85, 51, 73, -97, 38, 92, 47, -42, 31, 34, 46, 113, -83, 0, 110, -100, 122, -78, -13, -80, 5, -70, -78, 118, -41, 10, 0, -84, 20, 124, -32, 36, -58, -48, -53, 6, -45, 59, 86, -67, 108, -55, 34, 88, 7, 47, -117, 4, -42, 41, 45, 107, -18, 21, 39, 60, -124, 91, -50, -55, -84, -121, -39, 125, 51, 64, -99, -51, -69, -19, 71, 73, -93, -57, 96, -69, 2, 107, -98, 9, 25, -33, 55, 47, -58, 125, 87, -39, 27, 69, 46, 76, -26, 28, -41, 85, 83, -21, 27, -103, 0, 9, 112, 12, -87, 57, 69, -78, 8, 80, -48, 75, 34, 117, -128, 63, -78, -69, 102, -127, 27, -28, 104, -113, -35, 83, 94, 122, -73, -37, 21, 11, -117, -57, -12, -59, 63, 126, 66, 66, -50, -10};
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
    msg.setTimeStamp(0.9229847440335459);
    msg.setSource(10470U);
    msg.setSourceEntity(241U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(184U);
    const signed char tmp_msg_0[] = {-49, 19, -65, -41, -52, -98, -84, 14, -22, -93, 46, -89, -37, 108, 108, -68, 126, -38, 12, -18, -63, 50, -27, -42, 25, -34, -9, 19, -74, -98, -123, -122, -32, 34, -103, -119, -64, -125, 111, -124, 26, 100, 107, -31, -98, -94, 73, -9, -82, 117, -90, -99, -6, 98, -7, -63, 119, 29, 46, 22, -52, -91, 107, 25, -1, 87, 4, -94, -120, 44, 97, -31, 27, -51, -20, 99, -52, -11, 102, 87, 58, -37, -78, -84, 63, -95, -29, -108, -80, 9, 47, 125, 77, -69, 98, 28, -104, 123, 47, -122, 17, -91, 48, 23, 111, 62, -82, 85, 75, -104, 83, -125, -127, -54, 55, -90, 53, -22};
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
    msg.setTimeStamp(0.6449171554175879);
    msg.setSource(54558U);
    msg.setSourceEntity(64U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(212U);
    msg.value = 0.0029116831442282942;

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
    msg.setTimeStamp(0.6470563769327993);
    msg.setSource(65158U);
    msg.setSourceEntity(64U);
    msg.setDestination(38562U);
    msg.setDestinationEntity(55U);
    msg.value = 0.1652374849451127;

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
    msg.setTimeStamp(0.14099595204841298);
    msg.setSource(57377U);
    msg.setSourceEntity(136U);
    msg.setDestination(34815U);
    msg.setDestinationEntity(146U);
    msg.value = 0.2619600043843714;

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
    msg.setTimeStamp(0.9134807761242087);
    msg.setSource(38540U);
    msg.setSourceEntity(117U);
    msg.setDestination(53661U);
    msg.setDestinationEntity(115U);
    msg.type = 82U;
    msg.frequency = 2416320166U;
    msg.min_range = 49910U;
    msg.max_range = 47637U;
    msg.bits_per_point = 17U;
    msg.scale_factor = 0.3037470976525448;
    const signed char tmp_msg_0[] = {88, -113, -86, -21, 84, -105, -101, -120, 99, 69, -32, 71, 80, -82, 117, -30, 76, -8, 117, -6, -63, 121, 93, 64, 69, -38, -118, 22, -25, -99, 95, 18, -25, -61, -4, 40, 125, 104, 24, 31, -32, 35, 52, -88, 121, -70, 69, 74, -28, 103, -105, 111, 52, 62, -30, 29, 117, -11, 43, 68, -36, -18, 31, 73, -67, -105, 68, 55, -117, -72, -2, -63, -104, -104, -121, 63, -63, 67, 54, 40, 81, -102, 59, 17, 7, 91, 28, -124, -76, -49, -15, 94, 95, -16};
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
    msg.setTimeStamp(0.12844558779263238);
    msg.setSource(11564U);
    msg.setSourceEntity(0U);
    msg.setDestination(61097U);
    msg.setDestinationEntity(73U);
    msg.type = 36U;
    msg.frequency = 660377980U;
    msg.min_range = 15036U;
    msg.max_range = 44931U;
    msg.bits_per_point = 5U;
    msg.scale_factor = 0.4495930844926199;
    const signed char tmp_msg_0[] = {-95, 106, 40, -120, -15, 90, -122, 47, -47, 115, -116, -104, -94, -69, -75, 41, -50, 126, 113, 11, -31, -35, -31, 85, 11, -56, -36, 44, -111, 28, 41, -57, -97, -1, 60, 52, 4, -88, -122, -48, -117, -111, 6, -68, 66, -27, -66, 30, 55, -9, 101, 103, -81, -109, -107, 78, -67, -114, 121, -99, 124, 96, -26, -54, 96, -119, 98, 70, 41, -12, -14, -1, -60, 123, -7, -9, -58, -27, 103, -88, -127, 18, -14, -8, -65, 59, 7, -83, 3, 36, 23, -40, 91, -55, -40, 21, 88, 90, -87, 95, -75, 35, -54, -92, -96, 104, -26, 114, 78, -69, -123, -127, 55, 76, 6, 21, -69, 113, -110, 51, 7, -76, 27, 97, 49, -118, -82, -117, -97, 9, -55, -12, 105, -109, -74, -23, -90, 98, 43, -66, 23};
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
    msg.setTimeStamp(0.6183767713114445);
    msg.setSource(51611U);
    msg.setSourceEntity(114U);
    msg.setDestination(26148U);
    msg.setDestinationEntity(82U);
    msg.type = 72U;
    msg.frequency = 3925216578U;
    msg.min_range = 8625U;
    msg.max_range = 51297U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.9130547038919634;
    const signed char tmp_msg_0[] = {-27, 30, 66, -70, -63, -28, -41, 110, -2, 76, -96, -119, 106, -107, 10, 107, 15, 44, 90, -70, -86, -12, -13, 99, -49, 23, 3, -82, 85, 45, -70, 23, -26, 49, 118, -75, -113, 75, -57, -103, 14, -64, 79, -18, 68, 10, -66, 25, 114, 9, 64, 83, 8, 119, -27, -33, -16, -80, -114, 113, 25, 21, 108, -5, -89, -67, 94, -46, 85, -111, 69, 43, 60, -34, 76, 68, 69, 6, 1, 126, -96, 126, -88, -31, 23, 73, 103, 37, -87, 68, 73, 74, -53, 52, 71, 121, 86, 82, -22, 123, -72, 122, -51, -115, -3, -113, -54, -128, -77, -78, -63, -34, -57, -118, -69, 25, 95, 74, -74, 91, 125, 33, -62, 113, 47, -99, -111, -62, 46, -69, -4, 3, 96, -119, 13, 92, -68, -28, -64, 101, 51, 41, 118, 73, 101, -94, 57, 12, -45, -27, -111, -113, 126, -78, -72, 29, -126, 22, 2};
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
    msg.setTimeStamp(0.5262900896072527);
    msg.setSource(4501U);
    msg.setSourceEntity(100U);
    msg.setDestination(6231U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.952009992936536);
    msg.setSource(11416U);
    msg.setSourceEntity(187U);
    msg.setDestination(28701U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.8514012363661894);
    msg.setSource(31758U);
    msg.setSourceEntity(58U);
    msg.setDestination(27600U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.09554572870097988);
    msg.setSource(21891U);
    msg.setSourceEntity(18U);
    msg.setDestination(39182U);
    msg.setDestinationEntity(162U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.013557514267256932);
    msg.setSource(11769U);
    msg.setSourceEntity(234U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(204U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.5242079882755935);
    msg.setSource(26611U);
    msg.setSourceEntity(207U);
    msg.setDestination(64689U);
    msg.setDestinationEntity(150U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.8357889308788835);
    msg.setSource(47618U);
    msg.setSourceEntity(94U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(56U);
    msg.value = 0.1347832098037428;
    msg.confidence = 0.5539333538459742;
    msg.opmodes.assign("TRTMHRYRIYIGTENXVUWCNRDCIQDAWOZLWXVBXSRDEYUAMJCLYDKWVMRMANBMPOFKSBUSFOBDFWPKGPQYHEZHGOCGZGBOVOTNXR");

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
    msg.setTimeStamp(0.894690368007556);
    msg.setSource(35730U);
    msg.setSourceEntity(172U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(146U);
    msg.value = 0.10020139500392111;
    msg.confidence = 0.7527320166063161;
    msg.opmodes.assign("SGGQHXQUUUEGDBHKXDWTFLSQMLEVZNCOXXAUYVLLOKWDXEROMTHOMSRAYFPTNVUKQPBZRYHZETGHWYPCKWVJPVUZVDAXMSLFJCBKLHOWCXHVLYFSIAUGTQJCSYYEMDUBJFRKNFBADJEUZRAXQYWMKWEFAXGIBNZPCDRBYDTGZFOWDIOJMMLPINLBCIOKHLMEQICTCIBNZXZMNVJQQSTJUPAKFJGODNAEGNIPKOS");

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
    msg.setTimeStamp(0.8525609661787892);
    msg.setSource(3304U);
    msg.setSourceEntity(26U);
    msg.setDestination(39088U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4007844544634146;
    msg.confidence = 0.0761208517425711;
    msg.opmodes.assign("DMNYGJNFZKVBLLGSQZHKMNLRXUUZQEHSKWABWOTBPECUSEFPQCQKMTXKVUZLKKBQTFDXFTLHVCAFZRHQIYYSEMDHEKFOGYCDJDULVQMEMFKWCLYIJZRBOWAMWCYOCMTXVROADOSHGAHIQXTRQIFRDWJSOMUIDXAICWVKGHEAZYNTTXUZVNDPIPOBBHNSPPJPAZGGVPSDJNQGENIYIFVOSWOBVJCERAWPLXGWMXRJIPBXENJUHZRGSUTLFUYR");

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
    msg.setTimeStamp(0.36632035563718435);
    msg.setSource(48436U);
    msg.setSourceEntity(5U);
    msg.setDestination(10787U);
    msg.setDestinationEntity(202U);
    msg.itow = 1032921203U;
    msg.lat = 0.6376464120422227;
    msg.lon = 0.28015458739160015;
    msg.height_ell = 0.7472877284699047;
    msg.height_sea = 0.9321252883939989;
    msg.hacc = 0.20532308782109243;
    msg.vacc = 0.7549491591567347;
    msg.vel_n = 0.9929991047662793;
    msg.vel_e = 0.4128716582028382;
    msg.vel_d = 0.9663356460509949;
    msg.speed = 0.8670969214560368;
    msg.gspeed = 0.5197239709927048;
    msg.heading = 0.8990544759586084;
    msg.sacc = 0.8192012025352583;
    msg.cacc = 0.7869158401423515;

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
    msg.setTimeStamp(0.5991971183772641);
    msg.setSource(41687U);
    msg.setSourceEntity(27U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(33U);
    msg.itow = 733063113U;
    msg.lat = 0.16648382561867803;
    msg.lon = 0.34879849071221936;
    msg.height_ell = 0.6092027636468467;
    msg.height_sea = 0.09124226991804785;
    msg.hacc = 0.233787679532528;
    msg.vacc = 0.5562660346803874;
    msg.vel_n = 0.5096022319597229;
    msg.vel_e = 0.6294224236348412;
    msg.vel_d = 0.09360233909955651;
    msg.speed = 0.423306392746748;
    msg.gspeed = 0.9711966122378001;
    msg.heading = 0.17028026690797515;
    msg.sacc = 0.17652640967231492;
    msg.cacc = 0.4225578670290474;

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
    msg.setTimeStamp(0.5445951135589209);
    msg.setSource(56128U);
    msg.setSourceEntity(128U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(86U);
    msg.itow = 482714016U;
    msg.lat = 0.47450030202614546;
    msg.lon = 0.1785680274270096;
    msg.height_ell = 0.9199331748842362;
    msg.height_sea = 0.209814449911371;
    msg.hacc = 0.32469711832874437;
    msg.vacc = 0.5224750984472731;
    msg.vel_n = 0.5116596310354117;
    msg.vel_e = 0.5023713360539535;
    msg.vel_d = 0.37303411888964144;
    msg.speed = 0.9568012462043841;
    msg.gspeed = 0.6222775909504814;
    msg.heading = 0.41312829488047975;
    msg.sacc = 0.7281258402703327;
    msg.cacc = 0.15767885856725194;

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
    msg.setTimeStamp(0.8587226612540021);
    msg.setSource(18163U);
    msg.setSourceEntity(196U);
    msg.setDestination(44578U);
    msg.setDestinationEntity(238U);
    msg.id = 12U;
    msg.value = 0.9305528020682218;

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
    msg.setTimeStamp(0.48789607674861135);
    msg.setSource(11800U);
    msg.setSourceEntity(176U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(96U);
    msg.id = 53U;
    msg.value = 0.2869689481801849;

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
    msg.setTimeStamp(0.6286655126447588);
    msg.setSource(49474U);
    msg.setSourceEntity(23U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(180U);
    msg.id = 224U;
    msg.value = 0.7686827760419604;

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
    msg.setTimeStamp(0.7039924928413415);
    msg.setSource(13422U);
    msg.setSourceEntity(68U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(120U);
    msg.x = 0.9002783144496438;
    msg.y = 0.8624894640788028;
    msg.z = 0.6832271516648307;
    msg.phi = 0.4409363146054893;
    msg.theta = 0.9930175062148283;
    msg.psi = 0.23933199655066117;

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
    msg.setTimeStamp(0.0392898805098455);
    msg.setSource(31202U);
    msg.setSourceEntity(196U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(159U);
    msg.x = 0.46651479510761273;
    msg.y = 0.13428627186552433;
    msg.z = 0.9846462772264973;
    msg.phi = 0.4217494356575735;
    msg.theta = 0.6838365549509425;
    msg.psi = 0.5524379207391101;

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
    msg.setTimeStamp(0.5673447376590723);
    msg.setSource(17863U);
    msg.setSourceEntity(184U);
    msg.setDestination(40014U);
    msg.setDestinationEntity(250U);
    msg.x = 0.9695354136634007;
    msg.y = 0.4809804790093589;
    msg.z = 0.6950758338045608;
    msg.phi = 0.29198583906892017;
    msg.theta = 0.6978828192933224;
    msg.psi = 0.4122173382802874;

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
    msg.setTimeStamp(0.2693499885797751);
    msg.setSource(22321U);
    msg.setSourceEntity(191U);
    msg.setDestination(4591U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 0.026248737559687818;
    msg.beam_height = 0.3409085679032863;

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
    msg.setTimeStamp(0.4107759044034196);
    msg.setSource(31586U);
    msg.setSourceEntity(24U);
    msg.setDestination(2233U);
    msg.setDestinationEntity(68U);
    msg.beam_width = 0.008761339028817705;
    msg.beam_height = 0.6905946066987427;

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
    msg.setTimeStamp(0.7139726607110934);
    msg.setSource(825U);
    msg.setSourceEntity(171U);
    msg.setDestination(45717U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.5032987256171886;
    msg.beam_height = 0.2830431951390845;

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
    msg.setTimeStamp(0.21373220409112148);
    msg.setSource(40909U);
    msg.setSourceEntity(183U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(99U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.03592396619678384);
    msg.setSource(34472U);
    msg.setSourceEntity(107U);
    msg.setDestination(53102U);
    msg.setDestinationEntity(180U);
    msg.sane = 122U;

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
    msg.setTimeStamp(0.5867036183104787);
    msg.setSource(47356U);
    msg.setSourceEntity(79U);
    msg.setDestination(58587U);
    msg.setDestinationEntity(59U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.05973708483444695);
    msg.setSource(36314U);
    msg.setSourceEntity(187U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9287338394009067;

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
    msg.setTimeStamp(0.777707136383315);
    msg.setSource(31422U);
    msg.setSourceEntity(69U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(33U);
    msg.value = 0.2876091849917901;

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
    msg.setTimeStamp(0.1606555721048205);
    msg.setSource(24240U);
    msg.setSourceEntity(180U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(136U);
    msg.value = 0.9842587354237122;

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
    msg.setTimeStamp(0.7528386106005202);
    msg.setSource(44346U);
    msg.setSourceEntity(193U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9890433942101027;

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
    msg.setTimeStamp(0.3935141294528337);
    msg.setSource(58712U);
    msg.setSourceEntity(189U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(178U);
    msg.value = 0.2380846825809797;

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
    msg.setTimeStamp(0.41831281766347805);
    msg.setSource(61184U);
    msg.setSourceEntity(34U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5305261080710661;

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
    msg.setTimeStamp(0.009286725171670174);
    msg.setSource(25010U);
    msg.setSourceEntity(112U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5719160268269028;

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
    msg.setTimeStamp(0.3872522224114453);
    msg.setSource(5266U);
    msg.setSourceEntity(22U);
    msg.setDestination(65214U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5535810444479436;

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
    msg.setTimeStamp(0.7870266164438144);
    msg.setSource(55629U);
    msg.setSourceEntity(49U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(221U);
    msg.value = 0.1710743146283541;

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
    msg.setTimeStamp(0.6364882138402606);
    msg.setSource(37252U);
    msg.setSourceEntity(232U);
    msg.setDestination(39057U);
    msg.setDestinationEntity(24U);
    msg.value = 0.821482759619896;

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
    msg.setTimeStamp(0.024902589506335393);
    msg.setSource(63515U);
    msg.setSourceEntity(178U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(72U);
    msg.value = 0.5844669724826342;

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
    msg.setTimeStamp(0.9479582906832732);
    msg.setSource(50699U);
    msg.setSourceEntity(42U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(213U);
    msg.value = 0.10881287049912458;

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
    msg.setTimeStamp(0.8496920187338337);
    msg.setSource(20549U);
    msg.setSourceEntity(239U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(116U);
    msg.value = 0.6933719611236902;

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
    msg.setTimeStamp(0.19261908002687322);
    msg.setSource(41719U);
    msg.setSourceEntity(26U);
    msg.setDestination(6665U);
    msg.setDestinationEntity(85U);
    msg.value = 0.2739502744527288;

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
    msg.setTimeStamp(0.774101763459778);
    msg.setSource(25297U);
    msg.setSourceEntity(99U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(80U);
    msg.value = 0.17895752659702657;

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
    msg.setTimeStamp(0.46997762403852417);
    msg.setSource(36601U);
    msg.setSourceEntity(146U);
    msg.setDestination(11037U);
    msg.setDestinationEntity(0U);
    msg.value = 0.9341751571530982;

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
    msg.setTimeStamp(0.40813371907009033);
    msg.setSource(33783U);
    msg.setSourceEntity(189U);
    msg.setDestination(7188U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0985933086610381;

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
    msg.setTimeStamp(0.5423485876596124);
    msg.setSource(41279U);
    msg.setSourceEntity(171U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(34U);
    msg.value = 0.957649346693571;

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
    msg.setTimeStamp(0.8185107739608424);
    msg.setSource(33156U);
    msg.setSourceEntity(212U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6349975627608907;

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
    msg.setTimeStamp(0.500381426049297);
    msg.setSource(42824U);
    msg.setSourceEntity(83U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(38U);
    msg.value = 0.40757691442113475;

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
    msg.setTimeStamp(0.6691241375957363);
    msg.setSource(11394U);
    msg.setSourceEntity(203U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8219763885400234;

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
    msg.setTimeStamp(0.4028132972146007);
    msg.setSource(746U);
    msg.setSourceEntity(212U);
    msg.setDestination(33079U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7545566284521931;

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
    msg.setTimeStamp(0.28256903277506507);
    msg.setSource(39213U);
    msg.setSourceEntity(183U);
    msg.setDestination(45067U);
    msg.setDestinationEntity(50U);
    msg.value = 0.20194090231046558;

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
    msg.setTimeStamp(0.9444570027268596);
    msg.setSource(7630U);
    msg.setSourceEntity(206U);
    msg.setDestination(1480U);
    msg.setDestinationEntity(197U);
    msg.value = 0.8569126223354093;

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
    msg.setTimeStamp(0.8184388900808887);
    msg.setSource(14719U);
    msg.setSourceEntity(214U);
    msg.setDestination(2639U);
    msg.setDestinationEntity(33U);
    msg.validity = 49603U;
    msg.type = 60U;
    msg.tow = 1915445541U;
    msg.base_lat = 0.7465011476148746;
    msg.base_lon = 0.5859781148590185;
    msg.base_height = 0.6358881108031385;
    msg.n = 0.8292307463560759;
    msg.e = 0.9728889405480412;
    msg.d = 0.776958715530519;
    msg.v_n = 0.9593627296608529;
    msg.v_e = 0.8418395126657526;
    msg.v_d = 0.2322970772802796;
    msg.satellites = 67U;
    msg.iar_hyp = 44137U;
    msg.iar_ratio = 0.13850187027507066;

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
    msg.setTimeStamp(0.6820630594248308);
    msg.setSource(49410U);
    msg.setSourceEntity(222U);
    msg.setDestination(60160U);
    msg.setDestinationEntity(73U);
    msg.validity = 21031U;
    msg.type = 20U;
    msg.tow = 3551022046U;
    msg.base_lat = 0.7063800912714645;
    msg.base_lon = 0.4216387385105804;
    msg.base_height = 0.36665892293603086;
    msg.n = 0.618721665144988;
    msg.e = 0.7124740281628325;
    msg.d = 0.29446126690874075;
    msg.v_n = 0.7953813652837197;
    msg.v_e = 0.6838931381596464;
    msg.v_d = 0.7503865496473946;
    msg.satellites = 188U;
    msg.iar_hyp = 45822U;
    msg.iar_ratio = 0.017648613632733956;

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
    msg.setTimeStamp(0.7069481534297629);
    msg.setSource(37680U);
    msg.setSourceEntity(68U);
    msg.setDestination(53752U);
    msg.setDestinationEntity(156U);
    msg.validity = 57993U;
    msg.type = 209U;
    msg.tow = 4094935418U;
    msg.base_lat = 0.4340908830313638;
    msg.base_lon = 0.07609511331235119;
    msg.base_height = 0.5466470689513371;
    msg.n = 0.5634273594544612;
    msg.e = 0.3221177163016007;
    msg.d = 0.533184869404853;
    msg.v_n = 0.27223158049435425;
    msg.v_e = 0.23079170415418615;
    msg.v_d = 0.9293631273626882;
    msg.satellites = 228U;
    msg.iar_hyp = 49711U;
    msg.iar_ratio = 0.43912616265396076;

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
    msg.setTimeStamp(0.2745648150665315);
    msg.setSource(21388U);
    msg.setSourceEntity(233U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(32U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5610561283713582;
    tmp_msg_0.lon = 0.9726385586407871;
    tmp_msg_0.height = 0.8151560580461791;
    tmp_msg_0.x = 0.1229624717286012;
    tmp_msg_0.y = 0.8962278277138207;
    tmp_msg_0.z = 0.7884348072648715;
    tmp_msg_0.phi = 0.04979310728164854;
    tmp_msg_0.theta = 0.5518673487399144;
    tmp_msg_0.psi = 0.3222277280561361;
    tmp_msg_0.u = 0.8443347704319455;
    tmp_msg_0.v = 0.9662811792604087;
    tmp_msg_0.w = 0.6368234934307406;
    tmp_msg_0.vx = 0.8375676935906188;
    tmp_msg_0.vy = 0.5513698284889195;
    tmp_msg_0.vz = 0.9244696141004267;
    tmp_msg_0.p = 0.08893354528315334;
    tmp_msg_0.q = 0.46341161761225225;
    tmp_msg_0.r = 0.32726966500677657;
    tmp_msg_0.depth = 0.5498575618001185;
    tmp_msg_0.alt = 0.23802668688237516;
    msg.state.set(tmp_msg_0);
    msg.type = 38U;

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
    msg.setTimeStamp(0.5881175065095994);
    msg.setSource(1079U);
    msg.setSourceEntity(27U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(181U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04472685904828044;
    tmp_msg_0.lon = 0.15469580573679897;
    tmp_msg_0.height = 0.0102428795203926;
    tmp_msg_0.x = 0.9434830654969478;
    tmp_msg_0.y = 0.5760810773229315;
    tmp_msg_0.z = 0.8801697335809472;
    tmp_msg_0.phi = 0.6769679610667905;
    tmp_msg_0.theta = 0.0256352329593319;
    tmp_msg_0.psi = 0.8056261158718865;
    tmp_msg_0.u = 0.17132956194656723;
    tmp_msg_0.v = 0.21025569178420866;
    tmp_msg_0.w = 0.069555782059043;
    tmp_msg_0.vx = 0.7986532092691695;
    tmp_msg_0.vy = 0.27814908830422524;
    tmp_msg_0.vz = 0.5278446495811918;
    tmp_msg_0.p = 0.12280182485117608;
    tmp_msg_0.q = 0.3496436298789356;
    tmp_msg_0.r = 0.2873257145557123;
    tmp_msg_0.depth = 0.3152088149105974;
    tmp_msg_0.alt = 0.0335304722755303;
    msg.state.set(tmp_msg_0);
    msg.type = 38U;

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
    msg.setTimeStamp(0.8178056611425076);
    msg.setSource(41054U);
    msg.setSourceEntity(190U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7709709807061191;
    tmp_msg_0.lon = 0.8433171700422641;
    tmp_msg_0.height = 0.1940721887750242;
    tmp_msg_0.x = 0.9062961637487207;
    tmp_msg_0.y = 0.7215889894497726;
    tmp_msg_0.z = 0.04547636885333395;
    tmp_msg_0.phi = 0.21596821405606792;
    tmp_msg_0.theta = 0.4492373868955666;
    tmp_msg_0.psi = 0.7329152762359419;
    tmp_msg_0.u = 0.0784263419229907;
    tmp_msg_0.v = 0.901594973588403;
    tmp_msg_0.w = 0.48707913144354853;
    tmp_msg_0.vx = 0.2752729653452779;
    tmp_msg_0.vy = 0.04207408338532437;
    tmp_msg_0.vz = 0.4546552808711557;
    tmp_msg_0.p = 0.6440761256717931;
    tmp_msg_0.q = 0.6723947201145284;
    tmp_msg_0.r = 0.8237826629898067;
    tmp_msg_0.depth = 0.8883536721816039;
    tmp_msg_0.alt = 0.8817208540176098;
    msg.state.set(tmp_msg_0);
    msg.type = 181U;

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
    msg.setTimeStamp(0.022248792290095243);
    msg.setSource(46836U);
    msg.setSourceEntity(136U);
    msg.setDestination(44143U);
    msg.setDestinationEntity(74U);
    msg.value = 0.8243520946050096;

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
    msg.setTimeStamp(0.5466439317642159);
    msg.setSource(42423U);
    msg.setSourceEntity(114U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(42U);
    msg.value = 0.2077090737590105;

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
    msg.setTimeStamp(0.04950599812108425);
    msg.setSource(50020U);
    msg.setSourceEntity(239U);
    msg.setDestination(3160U);
    msg.setDestinationEntity(70U);
    msg.value = 0.12517819483151715;

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
    msg.setTimeStamp(0.29803868044138404);
    msg.setSource(23853U);
    msg.setSourceEntity(17U);
    msg.setDestination(56186U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9814833051052703;

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
    msg.setTimeStamp(0.31326025609180863);
    msg.setSource(25763U);
    msg.setSourceEntity(209U);
    msg.setDestination(43695U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3198157022319885;

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
    msg.setTimeStamp(0.8802678588875017);
    msg.setSource(13898U);
    msg.setSourceEntity(191U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(66U);
    msg.value = 0.9352638305749628;

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
    msg.setTimeStamp(0.21988888941199736);
    msg.setSource(10418U);
    msg.setSourceEntity(242U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(22U);
    msg.value = 0.1394524973435699;

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
    msg.setTimeStamp(0.5587863286779378);
    msg.setSource(9376U);
    msg.setSourceEntity(25U);
    msg.setDestination(24616U);
    msg.setDestinationEntity(165U);
    msg.value = 0.4862686964299696;

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
    msg.setTimeStamp(0.8552954117483842);
    msg.setSource(12685U);
    msg.setSourceEntity(124U);
    msg.setDestination(47329U);
    msg.setDestinationEntity(154U);
    msg.value = 0.17988491634421278;

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
    msg.setTimeStamp(0.7918940318225681);
    msg.setSource(16593U);
    msg.setSourceEntity(60U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(27U);
    msg.value = 0.07631700840114874;

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
    msg.setTimeStamp(0.9469022390824379);
    msg.setSource(63925U);
    msg.setSourceEntity(15U);
    msg.setDestination(53489U);
    msg.setDestinationEntity(139U);
    msg.value = 0.08956139281079878;

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
    msg.setTimeStamp(0.612816461927002);
    msg.setSource(34762U);
    msg.setSourceEntity(222U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(142U);
    msg.value = 0.031115075346522247;

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
    msg.setTimeStamp(0.6970180649034897);
    msg.setSource(59992U);
    msg.setSourceEntity(21U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(109U);
    msg.value = 0.945197938016921;

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
    msg.setTimeStamp(0.6170463016379929);
    msg.setSource(51694U);
    msg.setSourceEntity(234U);
    msg.setDestination(46802U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4806089843877984;

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
    msg.setTimeStamp(0.2892921260010446);
    msg.setSource(39699U);
    msg.setSourceEntity(201U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6401126221192311;

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
    msg.setTimeStamp(0.7677624793710902);
    msg.setSource(33961U);
    msg.setSourceEntity(36U);
    msg.setDestination(52201U);
    msg.setDestinationEntity(64U);
    msg.id = 150U;
    msg.zoom = 250U;
    msg.action = 196U;

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
    msg.setTimeStamp(0.5338307153992644);
    msg.setSource(27704U);
    msg.setSourceEntity(179U);
    msg.setDestination(64789U);
    msg.setDestinationEntity(19U);
    msg.id = 228U;
    msg.zoom = 100U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.6361234836510602);
    msg.setSource(48786U);
    msg.setSourceEntity(176U);
    msg.setDestination(59800U);
    msg.setDestinationEntity(157U);
    msg.id = 14U;
    msg.zoom = 23U;
    msg.action = 149U;

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
    msg.setTimeStamp(0.4836754394964289);
    msg.setSource(45640U);
    msg.setSourceEntity(211U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(249U);
    msg.id = 145U;
    msg.value = 0.22390842360005603;

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
    msg.setTimeStamp(0.20053177983891946);
    msg.setSource(37604U);
    msg.setSourceEntity(28U);
    msg.setDestination(13352U);
    msg.setDestinationEntity(114U);
    msg.id = 206U;
    msg.value = 0.6053596244631985;

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
    msg.setTimeStamp(0.1977534557956333);
    msg.setSource(57690U);
    msg.setSourceEntity(2U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(100U);
    msg.id = 251U;
    msg.value = 0.3014965747571996;

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
    msg.setTimeStamp(0.7740548429116686);
    msg.setSource(26216U);
    msg.setSourceEntity(228U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(163U);
    msg.id = 230U;
    msg.value = 0.029586559916555566;

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
    msg.setTimeStamp(0.4116075701460121);
    msg.setSource(21620U);
    msg.setSourceEntity(236U);
    msg.setDestination(5041U);
    msg.setDestinationEntity(226U);
    msg.id = 125U;
    msg.value = 0.660025769386355;

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
    msg.setTimeStamp(0.4143313058912558);
    msg.setSource(32695U);
    msg.setSourceEntity(96U);
    msg.setDestination(50876U);
    msg.setDestinationEntity(244U);
    msg.id = 232U;
    msg.value = 0.5654550668493167;

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
    msg.setTimeStamp(0.20781241990731025);
    msg.setSource(15450U);
    msg.setSourceEntity(198U);
    msg.setDestination(60224U);
    msg.setDestinationEntity(129U);
    msg.id = 232U;
    msg.angle = 0.9187469432632906;

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
    msg.setTimeStamp(0.695827920462276);
    msg.setSource(61571U);
    msg.setSourceEntity(168U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(66U);
    msg.id = 227U;
    msg.angle = 0.32496791593929175;

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
    msg.setTimeStamp(0.9125906683112431);
    msg.setSource(5031U);
    msg.setSourceEntity(95U);
    msg.setDestination(31777U);
    msg.setDestinationEntity(186U);
    msg.id = 149U;
    msg.angle = 0.8711809991714605;

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
    msg.setTimeStamp(0.9373176539051833);
    msg.setSource(29296U);
    msg.setSourceEntity(20U);
    msg.setDestination(59049U);
    msg.setDestinationEntity(87U);
    msg.op = 10U;
    msg.actions.assign("MTOBFJSHSUGNKVOHRVCVPFORNCIAIYRLTBENZXAXDMXKIEJENNOXFMFPFDIUWQRWQGFLWEXDMSESHYOQECTMOTFXPHHZYPPJQGJDCWLREDBEDBIKGDPCOLZAEPFKKILAWJTVIXSZKUSUFMYWZYBCGGYJUTRZDUSMECNT");

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
    msg.setTimeStamp(0.4029194912315619);
    msg.setSource(63721U);
    msg.setSourceEntity(167U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(160U);
    msg.op = 138U;
    msg.actions.assign("VTIZMWMVCNZAWDUGCNWLQXAPOTAJZDPQZRIUYMYVFUCYNCTQYQVQGZUWHYHHLBOKVOFSFUIWJXBYSGKXZFESGERELNHXNQEKLHAWXENVXUDDSUGUDAAMLHWZSYBPIKOPSMHRDPOODERYBQWGGIIVJODFBNVCNZJXBCCXAFXIESRRGFBPHKEDCPLYZTJLLMMBTCTRJKQRRJFFJDYGOWPHBQSMMVLPRT");

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
    msg.setTimeStamp(0.9053946109390612);
    msg.setSource(27198U);
    msg.setSourceEntity(216U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(249U);
    msg.op = 8U;
    msg.actions.assign("UGLTIOJEDTWROYTDDAIYURZBSMBWUXZWXCTWTTKYPEUQFFQHNKUULXZYKIPSRNXOYHMRLXBKNCWKEWEGXJZKJXZTS");

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
    msg.setTimeStamp(0.04557965262572061);
    msg.setSource(62081U);
    msg.setSourceEntity(119U);
    msg.setDestination(55640U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("YIMXTNHGYDDARUYMNBNLPPGTCTHQXHAPXRSJOWKLVRJKYQADLJOTHCBJVTUYCIUHRBTZMDBKJYGEKSVMLXGM");

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
    msg.setTimeStamp(0.43185771150855234);
    msg.setSource(65234U);
    msg.setSourceEntity(154U);
    msg.setDestination(33864U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("IORTUZLXKERIZNALREJHVAVUFAMYSXDGRLLEXLHBTSDWBKIGMWTRSJOQDNHHPVEHDQOJIDDRNZKMTTSAQIFNGKLNVNPQRQYEBYCKVGGOHCAPFZKCYJWQWCGWFKBPQCLBIEZFJFYPOOHBLOHM");

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
    msg.setTimeStamp(0.0847104766024308);
    msg.setSource(52173U);
    msg.setSourceEntity(3U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("TEXMIPSOPQZJXISMGSDYTYBXYNRTAFZQTTLDXLKTEWGXOBGNOHGNHTJVYNANFYDVSZRHITAGGVMUSKKBWUFOGQEBIANJPJKIKSABGGOPLQYPBNQCWUVRUFRQ");

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
    msg.setTimeStamp(0.09924146074964113);
    msg.setSource(8211U);
    msg.setSourceEntity(41U);
    msg.setDestination(11187U);
    msg.setDestinationEntity(89U);
    msg.button = 57U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.696799541524638);
    msg.setSource(1684U);
    msg.setSourceEntity(12U);
    msg.setDestination(57009U);
    msg.setDestinationEntity(104U);
    msg.button = 199U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.699956072431734);
    msg.setSource(23767U);
    msg.setSourceEntity(34U);
    msg.setDestination(17105U);
    msg.setDestinationEntity(201U);
    msg.button = 197U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.9652678674133105);
    msg.setSource(42027U);
    msg.setSourceEntity(58U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(158U);
    msg.op = 38U;
    msg.text.assign("PTCYAMOFMCGFRSNYOQTYBNMBLRWGVFEMCT");

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
    msg.setTimeStamp(0.26509017948983427);
    msg.setSource(16404U);
    msg.setSourceEntity(188U);
    msg.setDestination(5060U);
    msg.setDestinationEntity(202U);
    msg.op = 5U;
    msg.text.assign("PJSDUTMGDYTNVMMQALKEKJLIDBUXNDQRPRRXYORKYTSPJFOQHTQWYXTYTBGWICPGZQTALRLXRLSNNGKPPCLVHZEAMJOXHKIWYVYZHTNIIQRUIIZQXDZNWGAEJLDYEHBTPWPBNCMCQYZOROSHKFOWDBWXKHSMMFIANIFSZDHNBBGSHQVSSCLOAVLMCU");

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
    msg.setTimeStamp(0.6906404007676002);
    msg.setSource(57632U);
    msg.setSourceEntity(222U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(158U);
    msg.op = 177U;
    msg.text.assign("SRJWLEDINBUGYFXUGDIQICPVHSSBYVDBTJYRRKWQGUNDONHWKDTJOBPVMFCHFSBHPHYBATBPXLEFSKNIMBZIZLLAQNFMRISZXVQTDJYLQACUNGJLUXAEVCVRDZKXCERXKOVYSNXGOGIPGZXCUTXHMLJKMSDSTTHXMPFQPVHAWWRIDMAWEABJYVQRRENAEH");

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
    msg.setTimeStamp(0.9016678437477541);
    msg.setSource(17408U);
    msg.setSourceEntity(45U);
    msg.setDestination(374U);
    msg.setDestinationEntity(39U);
    msg.op = 231U;
    msg.time_remain = 0.7752711211048493;
    msg.sched_time = 0.4099235745270793;

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
    msg.setTimeStamp(0.14505491484395017);
    msg.setSource(44383U);
    msg.setSourceEntity(146U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(222U);
    msg.op = 38U;
    msg.time_remain = 0.007824086497780991;
    msg.sched_time = 0.27226260876482267;

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
    msg.setTimeStamp(0.7804845818202095);
    msg.setSource(20839U);
    msg.setSourceEntity(26U);
    msg.setDestination(7894U);
    msg.setDestinationEntity(142U);
    msg.op = 100U;
    msg.time_remain = 0.8725833985277087;
    msg.sched_time = 0.17498623445884998;

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
    msg.setTimeStamp(0.8155016086004487);
    msg.setSource(49578U);
    msg.setSourceEntity(90U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(171U);
    msg.name.assign("MNUZRLMTSEILMBUYHGCWHNIWYUDHKLPZACFXGMFNEXPBBOKQOSDQNEENFVOOMREGRNIMIIOXXSJOHIRAQSPFRZLCKNPOPXBVODVWCNKXZIVZHUUWDATPGQSGABCCDBSVWHCFIQIPYWKEHVTLGFPUKWAAYGGSGJDUAYLBUJRJFEIJRMFTSY");
    msg.op = 200U;
    msg.sched_time = 0.4126161032274769;

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
    msg.setTimeStamp(0.06270054703610439);
    msg.setSource(43091U);
    msg.setSourceEntity(28U);
    msg.setDestination(60564U);
    msg.setDestinationEntity(81U);
    msg.name.assign("XXDNJJQMCLGJRJSWVUISTFXCUOTNJGQYZWGUKBXKEWSQFEHACJITTYEJBKSVFCMPSGEODMXIDFLIYULDRUKKGBCUTHIZFYAGQWSYMSXFOIYNIHFPRPBLDSYVAWMYRMAHTKPXECEZRKCOHYPINFXCMKTVPBCJHKLXVRFLPBAQQNJJUUQLPVUOBRAMODBTYRNZQDTMWWOAZEZMOLNEWECNHIHZVDKRSEVVDZVAUZFPZGNQBGWOBPDNQGXHRI");
    msg.op = 78U;
    msg.sched_time = 0.12750302489721466;

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
    msg.setTimeStamp(0.9309046934089945);
    msg.setSource(39054U);
    msg.setSourceEntity(233U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(26U);
    msg.name.assign("SEAPDQEJDAPSJQUECTRNDUOQKWDNNTPWEYFKZYKZOQEBSRFPJVFQOLVSBGBZXHUIPRWECDBMMMHXJUALCILMWNCQEZSSTLTAVIFZLKZUTATRPYNKY");
    msg.op = 233U;
    msg.sched_time = 0.6765216761011504;

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
    msg.setTimeStamp(0.45240053131887925);
    msg.setSource(62216U);
    msg.setSourceEntity(18U);
    msg.setDestination(381U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.9420460045300436);
    msg.setSource(24858U);
    msg.setSourceEntity(82U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.9975132151504267);
    msg.setSource(25795U);
    msg.setSourceEntity(140U);
    msg.setDestination(40124U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.7550527160602621);
    msg.setSource(32276U);
    msg.setSourceEntity(100U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(29U);
    msg.name.assign("TSYEBHFALJANJCKTDFVZYASDOPSWTYWJMFZCMRWLAPNIVAWOGULXQREQQKJBUSTOSDGZFVJKYFEDHWOEXNFZICFTBSAXMMDNKZIRDTKCEBQGICIBSRBIVQWECPIDEZVJRXQUHXDQGMKRRG");
    msg.state = 95U;

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
    msg.setTimeStamp(0.7283600494809495);
    msg.setSource(17575U);
    msg.setSourceEntity(182U);
    msg.setDestination(49394U);
    msg.setDestinationEntity(253U);
    msg.name.assign("DASRZRIWNDHFFHXXXHFYNMNPTBBPQUSWGNWIAZYSGWBXEGWDLXMTGSZSKJCFIYCVLXJRLOLVLTCOVEAZNEYOTLJKPMLDGBHFMQKJNDPHKUJCKLEPAHGIYCZUETORUEPKQAYRFYOVEEBHSVAAFDGPSJVDUFXOZVNBLMNCNOAVMQVI");
    msg.state = 157U;

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
    msg.setTimeStamp(0.3589584009894653);
    msg.setSource(49163U);
    msg.setSourceEntity(9U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(59U);
    msg.name.assign("JUQNBJYWOHNIJHAPZFCNQXCBWQRIGAHVEREFWWRVVOGDZPRPNTXKVQLEDMIHBBSXTMRDNQTRWEQHUVUYEDCLHVIUDDIMWBMYZGSUNZICMKCM");
    msg.state = 25U;

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
    msg.setTimeStamp(0.47201234710522166);
    msg.setSource(172U);
    msg.setSourceEntity(40U);
    msg.setDestination(64621U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TVPHIQWAVLVHUUFYAIUANVHAQCINNFAZXWFSBCUZXDTHQIDLZIOMVTYQFTPNVECYPMBLJBGWTJWXTSHTKPDKSWSBIBWIDVJRGFUZHZFGXOXOEZWOPRQDPGCEJNQKURASAOIGEDOCKGFHWPVEAMJBEFEMUZDQZZSYMOEBRTLLRMKQLSKBNZCGCODC");
    msg.value = 248U;

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
    msg.setTimeStamp(0.7859777464844154);
    msg.setSource(65386U);
    msg.setSourceEntity(1U);
    msg.setDestination(28564U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OWCUDTGIJIINRTELSVUVCZLQSHEWMCAXGVKRXCQXRHDMZKNFCFSYVKVKRMEXGQNWRIAUBACLFUFLDEBYPKAWWJYZTBEEQWULEDMPKRXTPBQTXLNIOQFZKSKNIAFPDJOHHVCHBDCTLWUYRPLETBYKFCMVHDOGSAGPYEOMJW");
    msg.value = 222U;

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
    msg.setTimeStamp(0.857210113674923);
    msg.setSource(6758U);
    msg.setSourceEntity(125U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(11U);
    msg.name.assign("SVXDBGSMVLJZWBCBUSRYVKKPIVOXOAPUCGWTZQQWFMXPAAULDGRNMXDYERUQHWJSYYIAOHENAKGRGWSXTYPGNEFMJQTFAYBPTTLMLNIZTDYQORKWZTGWDKYLCCPCFBJBKUJKHIBZCPTWFEDBGKYJDVOUDDMCSGRCEJZNSTCQUUNNIOBMFOJWEVPZEXSXUFQTZRIHRHNLSMPZM");
    msg.value = 160U;

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
    msg.setTimeStamp(0.5858528411381652);
    msg.setSource(35627U);
    msg.setSourceEntity(238U);
    msg.setDestination(44906U);
    msg.setDestinationEntity(211U);
    msg.name.assign("YUZJTNQTKJJTSDNLSHZWIDIMLOFFVJEXIZWTSRFNXCGFPSCITGMPZRRZAAYNOZDDKQCRBRXNZVMUDLYFLOTSVKRJBKQEPWUEXLFCLZNYYBYLUDHWYTOAMWYQVBOXUCKQMHIWNPFQEYGSNOCAHFVRQSLZIDABDPSWVEVGGMKK");

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
    msg.setTimeStamp(0.9830923527211762);
    msg.setSource(55092U);
    msg.setSourceEntity(5U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(8U);
    msg.name.assign("EQCBJTAVIQLHMXKVTIEEDQHPSPFKIWURAVWMVOXTIJCLDGSMFOFVVWLJZULYZAZCJNYEBQTFDXGTYGUDODRTUDVFNYMXAEAPHLUHMBXVCBNXXCTEQJAPCNR");

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
    msg.setTimeStamp(0.5242374213243287);
    msg.setSource(41878U);
    msg.setSourceEntity(122U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(21U);
    msg.name.assign("FOZVJMPHDIJMJTZJVCSDSFSPNQQZRXYMTDJTYZAANEVWBCWNHXVQPKGTUNAZNDBJMOZBVVVFVQQHBWWOATPMLFSBWXXEBZWINQEGRWLULGRKAUUISTYRKILQSJLDDIKRFPHYPMQRAPECYRJFKKXJGYRYEGYAIWTJRULPTOUXL");

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
    msg.setTimeStamp(0.23747915599306169);
    msg.setSource(48902U);
    msg.setSourceEntity(88U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(57U);
    msg.name.assign("COZWRUOLUVVTVZUJCGPRJGMTPROUKEIYEIEFDNEUAUTQGSHUGIHVBLKGYLPZISDBITLBRDYQCRLECJBLKXFVPMXMFWSHIHPVFZOYMQHKZBPZAMRQDLCMDZBKQGFANZJHRKYYIJNFCSSXZJJJLOANOQHDSLAVMUCPPANQRBNYPNXPAZGIYTVFTOWTY");
    msg.value = 44U;

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
    msg.setTimeStamp(0.33037379016865565);
    msg.setSource(45189U);
    msg.setSourceEntity(49U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(166U);
    msg.name.assign("DAHZEQBLWURQQSFCWVTEKCVJEIFRRJNYUUIDUZPFMFPRYPSLQSGEUN");
    msg.value = 51U;

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
    msg.setTimeStamp(0.640492356326949);
    msg.setSource(40765U);
    msg.setSourceEntity(44U);
    msg.setDestination(34165U);
    msg.setDestinationEntity(212U);
    msg.name.assign("OWVIQVGDYSZSQWZPFPYGNPCZGVATVLSSDNGEHSLMCROMNXKMNDEXFIFABXWZZRGKIEHBBRFYBGSUOXHCTNNRXSTTLIZTYLAPHJYBULUJSMRQGTKUECHAFAFVDACUJDNYKADLWGJQIKWEWKCIZJAVULDPXQXQUC");
    msg.value = 12U;

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
    msg.setTimeStamp(0.44427916742964335);
    msg.setSource(36665U);
    msg.setSourceEntity(80U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(40U);
    msg.id = 46U;
    msg.period = 3972742647U;
    msg.duty_cycle = 533807867U;

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
    msg.setTimeStamp(0.8003529993587541);
    msg.setSource(5099U);
    msg.setSourceEntity(47U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(6U);
    msg.id = 140U;
    msg.period = 123911503U;
    msg.duty_cycle = 2888757959U;

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
    msg.setTimeStamp(0.9074221731069846);
    msg.setSource(8616U);
    msg.setSourceEntity(86U);
    msg.setDestination(57116U);
    msg.setDestinationEntity(60U);
    msg.id = 126U;
    msg.period = 3054019251U;
    msg.duty_cycle = 3885603612U;

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
    msg.setTimeStamp(0.4217620441696517);
    msg.setSource(30546U);
    msg.setSourceEntity(25U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(44U);
    msg.id = 146U;
    msg.period = 144220763U;
    msg.duty_cycle = 3505274118U;

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
    msg.setTimeStamp(0.9786877304237479);
    msg.setSource(6242U);
    msg.setSourceEntity(136U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(1U);
    msg.id = 106U;
    msg.period = 3755429220U;
    msg.duty_cycle = 421297267U;

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
    msg.setTimeStamp(0.5551936814746362);
    msg.setSource(36731U);
    msg.setSourceEntity(228U);
    msg.setDestination(4073U);
    msg.setDestinationEntity(141U);
    msg.id = 222U;
    msg.period = 4025829596U;
    msg.duty_cycle = 1343429887U;

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
    msg.setTimeStamp(0.5671158581327758);
    msg.setSource(14298U);
    msg.setSourceEntity(67U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.2131279286669423;
    msg.lon = 0.7900947945030917;
    msg.height = 0.9286144370426924;
    msg.x = 0.17999108032410271;
    msg.y = 0.789649118217412;
    msg.z = 0.5260415881757255;
    msg.phi = 0.18651796276984456;
    msg.theta = 0.007704730441171703;
    msg.psi = 0.1922551980211754;
    msg.u = 0.5383110065650792;
    msg.v = 0.26739695478725767;
    msg.w = 0.20735514530502996;
    msg.vx = 0.3124257333047673;
    msg.vy = 0.608759186403958;
    msg.vz = 0.9360660108685974;
    msg.p = 0.5252440401391744;
    msg.q = 0.4282176608147338;
    msg.r = 0.6832168670525801;
    msg.depth = 0.7824937973069824;
    msg.alt = 0.6318737878500276;

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
    msg.setTimeStamp(0.0011295732087501786);
    msg.setSource(5123U);
    msg.setSourceEntity(154U);
    msg.setDestination(38812U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.28727052021579;
    msg.lon = 0.7389811539898024;
    msg.height = 0.20403164637347204;
    msg.x = 0.7037648677447855;
    msg.y = 0.07038965521186735;
    msg.z = 0.5194085434397627;
    msg.phi = 0.755624555781756;
    msg.theta = 0.5118088225938656;
    msg.psi = 0.8382682519986747;
    msg.u = 0.44851030597140606;
    msg.v = 0.3819924731994506;
    msg.w = 0.4606825900113276;
    msg.vx = 0.24171752695028415;
    msg.vy = 0.9843973665878539;
    msg.vz = 0.902272719770308;
    msg.p = 0.1588297143143128;
    msg.q = 0.028769763400665616;
    msg.r = 0.5906284018606787;
    msg.depth = 0.3368372874956299;
    msg.alt = 0.9930033900515371;

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
    msg.setTimeStamp(0.15346876360649953);
    msg.setSource(16917U);
    msg.setSourceEntity(218U);
    msg.setDestination(50098U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.4126731396443779;
    msg.lon = 0.8272690571747656;
    msg.height = 0.9247792475963533;
    msg.x = 0.17465168844912338;
    msg.y = 0.9601493117321944;
    msg.z = 0.29698134325947056;
    msg.phi = 0.7954598613436097;
    msg.theta = 0.18751726808494296;
    msg.psi = 0.9564802796077717;
    msg.u = 0.32581246752638726;
    msg.v = 0.8457838897336399;
    msg.w = 0.0917757161889281;
    msg.vx = 0.39925656137244203;
    msg.vy = 0.18107120678973;
    msg.vz = 0.10640047204190484;
    msg.p = 0.8780168767845107;
    msg.q = 0.03620658620952388;
    msg.r = 0.9285704552614624;
    msg.depth = 0.12887673837580937;
    msg.alt = 0.17062078715216256;

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
    msg.setTimeStamp(0.6160135992216932);
    msg.setSource(20895U);
    msg.setSourceEntity(242U);
    msg.setDestination(45434U);
    msg.setDestinationEntity(46U);
    msg.x = 0.380855578158507;
    msg.y = 0.7764960084978295;
    msg.z = 0.4305536547369473;

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
    msg.setTimeStamp(0.9008994540934958);
    msg.setSource(24744U);
    msg.setSourceEntity(54U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(37U);
    msg.x = 0.5518929377424008;
    msg.y = 0.9782853209822672;
    msg.z = 0.7637341678145567;

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
    msg.setTimeStamp(0.9031785821276416);
    msg.setSource(36971U);
    msg.setSourceEntity(210U);
    msg.setDestination(33337U);
    msg.setDestinationEntity(88U);
    msg.x = 0.35892511009199735;
    msg.y = 0.863077304309519;
    msg.z = 0.8210112809482952;

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
    msg.setTimeStamp(0.11227767767000418);
    msg.setSource(8062U);
    msg.setSourceEntity(189U);
    msg.setDestination(10023U);
    msg.setDestinationEntity(232U);
    msg.value = 0.29107360768156887;

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
    msg.setTimeStamp(0.9763500942267717);
    msg.setSource(45742U);
    msg.setSourceEntity(79U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3595346457084756;

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
    msg.setTimeStamp(0.9723543110236448);
    msg.setSource(16341U);
    msg.setSourceEntity(164U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8942343168803679;

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
    msg.setTimeStamp(0.935170060769331);
    msg.setSource(28475U);
    msg.setSourceEntity(57U);
    msg.setDestination(58890U);
    msg.setDestinationEntity(115U);
    msg.value = 0.10752543720650753;

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
    msg.setTimeStamp(0.22109606166753726);
    msg.setSource(62987U);
    msg.setSourceEntity(82U);
    msg.setDestination(11671U);
    msg.setDestinationEntity(62U);
    msg.value = 0.3886829315539766;

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
    msg.setTimeStamp(0.05733396555838266);
    msg.setSource(24333U);
    msg.setSourceEntity(125U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8164308259792706;

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
    msg.setTimeStamp(0.18716541961271316);
    msg.setSource(4129U);
    msg.setSourceEntity(67U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(232U);
    msg.x = 0.5997788390867049;
    msg.y = 0.7352287360704118;
    msg.z = 0.35258111072873854;
    msg.phi = 0.1627280057464241;
    msg.theta = 0.528466979835437;
    msg.psi = 0.9012364056140623;
    msg.p = 0.1858545243968993;
    msg.q = 0.9577009215708756;
    msg.r = 0.8724709118749508;
    msg.u = 0.15938031630111804;
    msg.v = 0.6963695642357656;
    msg.w = 0.5783456841512465;
    msg.bias_psi = 0.2789574207395411;
    msg.bias_r = 0.7484819860325097;

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
    msg.setTimeStamp(0.6524696422050013);
    msg.setSource(2004U);
    msg.setSourceEntity(17U);
    msg.setDestination(14688U);
    msg.setDestinationEntity(151U);
    msg.x = 0.4950084270635422;
    msg.y = 0.5285065973033203;
    msg.z = 0.19727709578475439;
    msg.phi = 0.7080780221730778;
    msg.theta = 0.3344024978740018;
    msg.psi = 0.8476244424852131;
    msg.p = 0.5424628174845033;
    msg.q = 0.9751175942342258;
    msg.r = 0.7018488046340066;
    msg.u = 0.3739233938100808;
    msg.v = 0.1456517034200545;
    msg.w = 0.20284998522152664;
    msg.bias_psi = 0.989185735959888;
    msg.bias_r = 0.5755064205573291;

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
    msg.setTimeStamp(0.8366360123490643);
    msg.setSource(49950U);
    msg.setSourceEntity(100U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(233U);
    msg.x = 0.5754694528204195;
    msg.y = 0.0010219668815090177;
    msg.z = 0.9957310324957926;
    msg.phi = 0.3420001925596169;
    msg.theta = 0.5227215701784937;
    msg.psi = 0.9568136670637281;
    msg.p = 0.20587240189999223;
    msg.q = 0.9771800729037589;
    msg.r = 0.8370937698954426;
    msg.u = 0.3733994299946277;
    msg.v = 0.023859241759522254;
    msg.w = 0.29339446492532195;
    msg.bias_psi = 0.8488177713378832;
    msg.bias_r = 0.2574059430622643;

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
    msg.setTimeStamp(0.2707537452896903);
    msg.setSource(40415U);
    msg.setSourceEntity(7U);
    msg.setDestination(64666U);
    msg.setDestinationEntity(11U);
    msg.bias_psi = 0.47983361834134364;
    msg.bias_r = 0.1103302239709868;
    msg.cog = 0.3620196290320895;
    msg.cyaw = 0.17853703493352746;
    msg.lbl_rej_level = 0.5822895840662806;
    msg.gps_rej_level = 0.00503232263992015;
    msg.custom_x = 0.032331370495040535;
    msg.custom_y = 0.5970096810468617;
    msg.custom_z = 0.09737044183247279;

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
    msg.setTimeStamp(0.3765317292731666);
    msg.setSource(757U);
    msg.setSourceEntity(19U);
    msg.setDestination(31655U);
    msg.setDestinationEntity(43U);
    msg.bias_psi = 0.6270263381568941;
    msg.bias_r = 0.8748329434116916;
    msg.cog = 0.039930808863669065;
    msg.cyaw = 0.1476333656568921;
    msg.lbl_rej_level = 0.3015004383782298;
    msg.gps_rej_level = 0.5078823041522205;
    msg.custom_x = 0.8951385918236;
    msg.custom_y = 0.8339695150110041;
    msg.custom_z = 0.4329330163529207;

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
    msg.setTimeStamp(0.10028077597564722);
    msg.setSource(31728U);
    msg.setSourceEntity(244U);
    msg.setDestination(57048U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.8386150592411328;
    msg.bias_r = 0.8543387079155851;
    msg.cog = 0.09676471185822277;
    msg.cyaw = 0.1991771441426079;
    msg.lbl_rej_level = 0.7396435490611236;
    msg.gps_rej_level = 0.8294430918356279;
    msg.custom_x = 0.05802589767555877;
    msg.custom_y = 0.8440697724656128;
    msg.custom_z = 0.568690912256408;

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
    msg.setTimeStamp(0.0752743689490708);
    msg.setSource(61323U);
    msg.setSourceEntity(134U);
    msg.setDestination(5532U);
    msg.setDestinationEntity(181U);
    msg.utc_time = 0.3060556077028964;
    msg.reason = 216U;

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
    msg.setTimeStamp(0.8393023742860405);
    msg.setSource(40027U);
    msg.setSourceEntity(133U);
    msg.setDestination(35916U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.9457555943837069;
    msg.reason = 175U;

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
    msg.setTimeStamp(0.21456855588967028);
    msg.setSource(32534U);
    msg.setSourceEntity(121U);
    msg.setDestination(31090U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.44189178816164676;
    msg.reason = 168U;

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
    msg.setTimeStamp(0.032069924547786566);
    msg.setSource(63223U);
    msg.setSourceEntity(10U);
    msg.setDestination(3942U);
    msg.setDestinationEntity(15U);
    msg.id = 86U;
    msg.range = 0.36357073459304967;
    msg.acceptance = 0U;

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
    msg.setTimeStamp(0.4057973139735479);
    msg.setSource(57472U);
    msg.setSourceEntity(209U);
    msg.setDestination(5448U);
    msg.setDestinationEntity(15U);
    msg.id = 100U;
    msg.range = 0.791821567370527;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.7122225073462556);
    msg.setSource(56700U);
    msg.setSourceEntity(160U);
    msg.setDestination(34011U);
    msg.setDestinationEntity(102U);
    msg.id = 139U;
    msg.range = 0.26948608034448973;
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
    msg.setTimeStamp(0.3844819025411428);
    msg.setSource(34310U);
    msg.setSourceEntity(139U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(85U);
    msg.type = 47U;
    msg.reason = 33U;
    msg.value = 0.2871403714389852;
    msg.timestep = 0.6638034385724104;

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
    msg.setTimeStamp(0.3678912263946641);
    msg.setSource(1318U);
    msg.setSourceEntity(216U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(92U);
    msg.type = 230U;
    msg.reason = 9U;
    msg.value = 0.7658253665090048;
    msg.timestep = 0.09709267624526474;

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
    msg.setTimeStamp(0.9101125020430072);
    msg.setSource(52806U);
    msg.setSourceEntity(125U);
    msg.setDestination(28146U);
    msg.setDestinationEntity(65U);
    msg.type = 37U;
    msg.reason = 69U;
    msg.value = 0.13347577082759754;
    msg.timestep = 0.9734512527148086;

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
    msg.setTimeStamp(0.6200687116293868);
    msg.setSource(61610U);
    msg.setSourceEntity(187U);
    msg.setDestination(38101U);
    msg.setDestinationEntity(165U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QRABYLORGWXHZEVBTURGMKZUZUSDHIBFCEWHACXYWPSZDHRAVKYJFUSMOVSUSPZNNTATQTHXQDCMTXGDZOBEKFLWJLYFJRVIUJSPOPMJPKXQNCBUDICYLEZBGLDIHJXWYNRVWEQRODGLKVEQLKYZGNDAINFMXTLCYQAKUAWKHJMFKODMJHFBCZXGEFIRINLSNORO");
    tmp_msg_0.lat = 0.6046743351062932;
    tmp_msg_0.lon = 0.8445066634026717;
    tmp_msg_0.depth = 0.2537984952347765;
    tmp_msg_0.query_channel = 81U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 229U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12308291757860812;
    msg.y = 0.9665066403985101;
    msg.var_x = 0.7003350678986521;
    msg.var_y = 0.055019356757327276;
    msg.distance = 0.5051238372634443;

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
    msg.setTimeStamp(0.7319317619118475);
    msg.setSource(16553U);
    msg.setSourceEntity(30U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(169U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KAMCBFDHSNMZKYPZFZFSIXKUYKWTWJPDKQTGHGBMTVERNUQSQPLTENVRRKRPUTQIGZDFVMOLSNAFAWQGSMGETW");
    tmp_msg_0.lat = 0.47452248503650307;
    tmp_msg_0.lon = 0.20458232976692015;
    tmp_msg_0.depth = 0.6131045527797359;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 18U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.08698554119616264;
    msg.y = 0.6416368460032938;
    msg.var_x = 0.8524840801459;
    msg.var_y = 0.5712578318403336;
    msg.distance = 0.537147369400809;

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
    msg.setTimeStamp(0.9045703023630776);
    msg.setSource(51079U);
    msg.setSourceEntity(0U);
    msg.setDestination(63779U);
    msg.setDestinationEntity(84U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NQOHIFGPDFZWDDSR");
    tmp_msg_0.lat = 0.36732169822976846;
    tmp_msg_0.lon = 0.6163965030558186;
    tmp_msg_0.depth = 0.6636436642318825;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 121U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2426682984491083;
    msg.y = 0.5010733527222015;
    msg.var_x = 0.00608213282514658;
    msg.var_y = 0.3079586330003189;
    msg.distance = 0.11974941105006376;

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
    msg.setTimeStamp(0.8168311223416767);
    msg.setSource(40026U);
    msg.setSourceEntity(136U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(64U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.9409108278175644);
    msg.setSource(26184U);
    msg.setSourceEntity(105U);
    msg.setDestination(887U);
    msg.setDestinationEntity(127U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.4807489195991862);
    msg.setSource(44161U);
    msg.setSourceEntity(101U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(196U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.30249790688103684);
    msg.setSource(54774U);
    msg.setSourceEntity(194U);
    msg.setDestination(18334U);
    msg.setDestinationEntity(0U);
    msg.x = 0.6415265601033657;
    msg.y = 0.03224539899828072;
    msg.z = 0.6259880385203528;

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
    msg.setTimeStamp(0.6339544706688547);
    msg.setSource(61416U);
    msg.setSourceEntity(173U);
    msg.setDestination(45785U);
    msg.setDestinationEntity(253U);
    msg.x = 0.011229142011789928;
    msg.y = 0.6078905534055731;
    msg.z = 0.6013406320137908;

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
    msg.setTimeStamp(0.03121157116731388);
    msg.setSource(35518U);
    msg.setSourceEntity(186U);
    msg.setDestination(20800U);
    msg.setDestinationEntity(206U);
    msg.x = 0.40542095066171324;
    msg.y = 0.9677188418387308;
    msg.z = 0.41049927396085895;

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
    msg.setTimeStamp(0.14292876477588456);
    msg.setSource(44395U);
    msg.setSourceEntity(153U);
    msg.setDestination(48140U);
    msg.setDestinationEntity(113U);
    msg.va = 0.7190128486222284;
    msg.aoa = 0.47760766221617235;
    msg.ssa = 0.8874781176821248;

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
    msg.setTimeStamp(0.5930733188192864);
    msg.setSource(23030U);
    msg.setSourceEntity(131U);
    msg.setDestination(9098U);
    msg.setDestinationEntity(223U);
    msg.va = 0.6679980681885832;
    msg.aoa = 0.2736031552656346;
    msg.ssa = 0.3550647926228033;

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
    msg.setTimeStamp(0.5289918215869645);
    msg.setSource(65419U);
    msg.setSourceEntity(206U);
    msg.setDestination(26648U);
    msg.setDestinationEntity(69U);
    msg.va = 0.8500145308258158;
    msg.aoa = 0.01753774081862891;
    msg.ssa = 0.005667633632788549;

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
    msg.setTimeStamp(0.9005181595889136);
    msg.setSource(3479U);
    msg.setSourceEntity(163U);
    msg.setDestination(47564U);
    msg.setDestinationEntity(207U);
    msg.value = 0.15015010687588215;

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
    msg.setTimeStamp(0.6715393254338622);
    msg.setSource(26274U);
    msg.setSourceEntity(129U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5790031750942425;

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
    msg.setTimeStamp(0.28199844364077153);
    msg.setSource(35889U);
    msg.setSourceEntity(99U);
    msg.setDestination(50235U);
    msg.setDestinationEntity(93U);
    msg.value = 0.994097691607534;

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
    msg.setTimeStamp(0.10311544714554488);
    msg.setSource(61237U);
    msg.setSourceEntity(98U);
    msg.setDestination(32973U);
    msg.setDestinationEntity(204U);
    msg.value = 0.02095298574172;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.31004199074553274);
    msg.setSource(18834U);
    msg.setSourceEntity(213U);
    msg.setDestination(36562U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5681788539558774;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.7688435736355136);
    msg.setSource(40544U);
    msg.setSourceEntity(108U);
    msg.setDestination(21352U);
    msg.setDestinationEntity(32U);
    msg.value = 0.00032551752238330067;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.5194952569431127);
    msg.setSource(36669U);
    msg.setSourceEntity(237U);
    msg.setDestination(14135U);
    msg.setDestinationEntity(38U);
    msg.value = 0.14028894737602937;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.03912970446757014);
    msg.setSource(61815U);
    msg.setSourceEntity(220U);
    msg.setDestination(6939U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8989781781716072;
    msg.speed_units = 127U;

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
    msg.setTimeStamp(0.9418799993121537);
    msg.setSource(49385U);
    msg.setSourceEntity(54U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(42U);
    msg.value = 0.752332989773891;
    msg.speed_units = 167U;

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
    msg.setTimeStamp(0.7527597955657694);
    msg.setSource(25171U);
    msg.setSourceEntity(48U);
    msg.setDestination(27914U);
    msg.setDestinationEntity(21U);
    msg.value = 0.7767895593405885;

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
    msg.setTimeStamp(0.39526133124485485);
    msg.setSource(19585U);
    msg.setSourceEntity(166U);
    msg.setDestination(25735U);
    msg.setDestinationEntity(35U);
    msg.value = 0.1473387223640672;

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
    msg.setTimeStamp(0.3636465069157395);
    msg.setSource(12766U);
    msg.setSourceEntity(230U);
    msg.setDestination(11280U);
    msg.setDestinationEntity(108U);
    msg.value = 0.15037891147703752;

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
    msg.setTimeStamp(0.33489913107961833);
    msg.setSource(33642U);
    msg.setSourceEntity(126U);
    msg.setDestination(12293U);
    msg.setDestinationEntity(71U);
    msg.value = 0.4166572769464233;

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
    msg.setTimeStamp(0.671094776555736);
    msg.setSource(15460U);
    msg.setSourceEntity(101U);
    msg.setDestination(52294U);
    msg.setDestinationEntity(141U);
    msg.value = 0.44457800636945977;

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
    msg.setTimeStamp(0.9219381660007571);
    msg.setSource(41059U);
    msg.setSourceEntity(105U);
    msg.setDestination(57820U);
    msg.setDestinationEntity(71U);
    msg.value = 0.11134959945918987;

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
    msg.setTimeStamp(0.7852756367921699);
    msg.setSource(36046U);
    msg.setSourceEntity(77U);
    msg.setDestination(9628U);
    msg.setDestinationEntity(104U);
    msg.value = 0.12754941457746005;

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
    msg.setTimeStamp(0.3238380234118148);
    msg.setSource(39850U);
    msg.setSourceEntity(7U);
    msg.setDestination(58805U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9234055011375898;

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
    msg.setTimeStamp(0.6516251155039614);
    msg.setSource(42453U);
    msg.setSourceEntity(150U);
    msg.setDestination(630U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6549720127065162;

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
    msg.setTimeStamp(0.7465138689822216);
    msg.setSource(28235U);
    msg.setSourceEntity(138U);
    msg.setDestination(62706U);
    msg.setDestinationEntity(247U);
    msg.path_ref = 3843147403U;
    msg.start_lat = 0.08555311051950276;
    msg.start_lon = 0.8928239100727029;
    msg.start_z = 0.21200656804171125;
    msg.start_z_units = 156U;
    msg.end_lat = 0.12774227883430278;
    msg.end_lon = 0.895250672584465;
    msg.end_z = 0.8292844339044063;
    msg.end_z_units = 103U;
    msg.speed = 0.3416064651429802;
    msg.speed_units = 103U;
    msg.lradius = 0.6809286555296454;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.8023393112372609);
    msg.setSource(43447U);
    msg.setSourceEntity(127U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 632209406U;
    msg.start_lat = 0.48526700772751086;
    msg.start_lon = 0.6101217822333805;
    msg.start_z = 0.5424985049400597;
    msg.start_z_units = 203U;
    msg.end_lat = 0.3205109326223665;
    msg.end_lon = 0.22530836463558457;
    msg.end_z = 0.6192386705623567;
    msg.end_z_units = 118U;
    msg.speed = 0.2020933002746299;
    msg.speed_units = 188U;
    msg.lradius = 0.6614988627149716;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.6419480300239071);
    msg.setSource(59143U);
    msg.setSourceEntity(66U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 583309101U;
    msg.start_lat = 0.07359403798486319;
    msg.start_lon = 0.7661490029297614;
    msg.start_z = 0.09088565502764123;
    msg.start_z_units = 68U;
    msg.end_lat = 0.23006631784884501;
    msg.end_lon = 0.48373067519434065;
    msg.end_z = 0.4374857868743284;
    msg.end_z_units = 197U;
    msg.speed = 0.0834095418377363;
    msg.speed_units = 210U;
    msg.lradius = 0.0015635844404852106;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.6631036542054293);
    msg.setSource(38532U);
    msg.setSourceEntity(114U);
    msg.setDestination(43976U);
    msg.setDestinationEntity(99U);
    msg.x = 0.9713414787606796;
    msg.y = 0.6815887725696553;
    msg.z = 0.6450093741240752;
    msg.k = 0.37460712464990786;
    msg.m = 0.15249883303502032;
    msg.n = 0.396583176219793;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.08191401255283826);
    msg.setSource(12285U);
    msg.setSourceEntity(142U);
    msg.setDestination(36474U);
    msg.setDestinationEntity(188U);
    msg.x = 0.5011502695839192;
    msg.y = 0.6229736334281566;
    msg.z = 0.8930850852282489;
    msg.k = 0.0040814601355431135;
    msg.m = 0.3407418651996753;
    msg.n = 0.024212648104730228;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.273172272419102);
    msg.setSource(53258U);
    msg.setSourceEntity(145U);
    msg.setDestination(19150U);
    msg.setDestinationEntity(222U);
    msg.x = 0.6776836250058315;
    msg.y = 0.9798921647110957;
    msg.z = 0.17145280362104076;
    msg.k = 0.518546094663811;
    msg.m = 0.5998013116975979;
    msg.n = 0.9850214600292108;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.4507117654157793);
    msg.setSource(31362U);
    msg.setSourceEntity(73U);
    msg.setDestination(207U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5205468758929084;

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
    msg.setTimeStamp(0.6757567098586674);
    msg.setSource(28299U);
    msg.setSourceEntity(67U);
    msg.setDestination(6029U);
    msg.setDestinationEntity(212U);
    msg.value = 0.890528268088422;

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
    msg.setTimeStamp(0.017314832938289615);
    msg.setSource(236U);
    msg.setSourceEntity(246U);
    msg.setDestination(33124U);
    msg.setDestinationEntity(78U);
    msg.value = 0.12862955323557546;

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
    msg.setTimeStamp(0.9335952141556805);
    msg.setSource(26624U);
    msg.setSourceEntity(12U);
    msg.setDestination(48615U);
    msg.setDestinationEntity(160U);
    msg.u = 0.15735389908144415;
    msg.v = 0.357239600625614;
    msg.w = 0.6829117871218893;
    msg.p = 0.49550155455275113;
    msg.q = 0.183861345296902;
    msg.r = 0.9789494840381953;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.4633378086084631);
    msg.setSource(49U);
    msg.setSourceEntity(139U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(80U);
    msg.u = 0.9135479782952605;
    msg.v = 0.15826759879185603;
    msg.w = 0.43265247056978196;
    msg.p = 0.5841856025992024;
    msg.q = 0.1849781255993126;
    msg.r = 0.11254021259289382;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.0837614842625033);
    msg.setSource(31491U);
    msg.setSourceEntity(109U);
    msg.setDestination(45839U);
    msg.setDestinationEntity(236U);
    msg.u = 0.7483092798615908;
    msg.v = 0.8354833091286238;
    msg.w = 0.9874721272928726;
    msg.p = 0.5084184050728852;
    msg.q = 0.9388069743447844;
    msg.r = 0.2776006876357602;
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
    msg.setTimeStamp(0.5316476967827036);
    msg.setSource(12618U);
    msg.setSourceEntity(220U);
    msg.setDestination(1297U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1748051695U;
    msg.start_lat = 0.2995814303381761;
    msg.start_lon = 0.005009534769409019;
    msg.start_z = 0.016967752007670756;
    msg.start_z_units = 62U;
    msg.end_lat = 0.7805341293223854;
    msg.end_lon = 0.04942543380340825;
    msg.end_z = 0.01542355942237661;
    msg.end_z_units = 50U;
    msg.lradius = 0.48884826000717363;
    msg.flags = 22U;
    msg.x = 0.3445663627255664;
    msg.y = 0.32297185019678787;
    msg.z = 0.7092418647520186;
    msg.vx = 0.8549456467508949;
    msg.vy = 0.5650637303432492;
    msg.vz = 0.11442623938187568;
    msg.course_error = 0.37505847417592364;
    msg.eta = 36180U;

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
    msg.setTimeStamp(0.2808719347402453);
    msg.setSource(51492U);
    msg.setSourceEntity(90U);
    msg.setDestination(37093U);
    msg.setDestinationEntity(42U);
    msg.path_ref = 3709020267U;
    msg.start_lat = 0.5098207121415671;
    msg.start_lon = 0.4024417729157639;
    msg.start_z = 0.22385873735819017;
    msg.start_z_units = 110U;
    msg.end_lat = 0.4138764786708953;
    msg.end_lon = 0.13955426046287445;
    msg.end_z = 0.08053964732190821;
    msg.end_z_units = 219U;
    msg.lradius = 0.38478430254631035;
    msg.flags = 218U;
    msg.x = 0.5769074564003995;
    msg.y = 0.07680311410093699;
    msg.z = 0.8342145853939092;
    msg.vx = 0.2979073076402122;
    msg.vy = 0.49768513210819876;
    msg.vz = 0.09528496318962643;
    msg.course_error = 0.279019045010543;
    msg.eta = 2229U;

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
    msg.setTimeStamp(0.883264529559858);
    msg.setSource(8103U);
    msg.setSourceEntity(156U);
    msg.setDestination(51751U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 3069816748U;
    msg.start_lat = 0.1454678199368865;
    msg.start_lon = 0.07688133209882975;
    msg.start_z = 0.9639295031090772;
    msg.start_z_units = 43U;
    msg.end_lat = 0.4917325315354224;
    msg.end_lon = 0.3973612718273717;
    msg.end_z = 0.8895289996791409;
    msg.end_z_units = 29U;
    msg.lradius = 0.6230623017771212;
    msg.flags = 246U;
    msg.x = 0.357561485507337;
    msg.y = 0.5901456428520004;
    msg.z = 0.952062775937343;
    msg.vx = 0.3883546849192876;
    msg.vy = 0.9315790857548331;
    msg.vz = 0.537333604847054;
    msg.course_error = 0.9299282661974868;
    msg.eta = 17471U;

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
    msg.setTimeStamp(0.3205261598770054);
    msg.setSource(14099U);
    msg.setSourceEntity(133U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(24U);
    msg.k = 0.2550326840752598;
    msg.m = 0.9685035904284214;
    msg.n = 0.917605366972202;

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
    msg.setTimeStamp(0.7753012659992948);
    msg.setSource(31166U);
    msg.setSourceEntity(36U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(210U);
    msg.k = 0.6858589600348797;
    msg.m = 0.8767067515850852;
    msg.n = 0.7960765053777916;

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
    msg.setTimeStamp(0.7873209709060859);
    msg.setSource(17808U);
    msg.setSourceEntity(198U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(215U);
    msg.k = 0.8044063346935779;
    msg.m = 0.1042808349136034;
    msg.n = 0.04275062722372247;

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
    msg.setTimeStamp(0.2136424266447906);
    msg.setSource(57305U);
    msg.setSourceEntity(46U);
    msg.setDestination(12503U);
    msg.setDestinationEntity(110U);
    msg.p = 0.9974435707776625;
    msg.i = 0.6228429022206989;
    msg.d = 0.10797027783718993;
    msg.a = 0.13403472494277602;

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
    msg.setTimeStamp(0.11989653309708981);
    msg.setSource(63495U);
    msg.setSourceEntity(111U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(207U);
    msg.p = 0.07423514391531949;
    msg.i = 0.36062604972643464;
    msg.d = 0.4824193845460698;
    msg.a = 0.20822489007783285;

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
    msg.setTimeStamp(0.7416958506355672);
    msg.setSource(19219U);
    msg.setSourceEntity(38U);
    msg.setDestination(14702U);
    msg.setDestinationEntity(193U);
    msg.p = 0.6405594227421134;
    msg.i = 0.5359167686954575;
    msg.d = 0.7157123536599507;
    msg.a = 0.13543504089974534;

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
    msg.setTimeStamp(0.2630676246417313);
    msg.setSource(50845U);
    msg.setSourceEntity(145U);
    msg.setDestination(9726U);
    msg.setDestinationEntity(178U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.012219397737167403);
    msg.setSource(28790U);
    msg.setSourceEntity(0U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(164U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.40514452755862296);
    msg.setSource(15938U);
    msg.setSourceEntity(193U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(109U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.0834927438399885);
    msg.setSource(35672U);
    msg.setSourceEntity(196U);
    msg.setDestination(48632U);
    msg.setDestinationEntity(8U);
    msg.x = 0.23380234474876838;
    msg.y = 0.6082581416615891;
    msg.z = 0.5343124767017977;
    msg.vx = 0.2528179839151906;
    msg.vy = 0.3492278293510064;
    msg.vz = 0.92944159857489;
    msg.ax = 0.21414334559305936;
    msg.ay = 0.6219817135557366;
    msg.az = 0.3442126162056498;
    msg.flags = 48710U;

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
    msg.setTimeStamp(0.45750763403456407);
    msg.setSource(17233U);
    msg.setSourceEntity(122U);
    msg.setDestination(65247U);
    msg.setDestinationEntity(160U);
    msg.x = 0.31638660652595996;
    msg.y = 0.6457489227798331;
    msg.z = 0.4949869365965409;
    msg.vx = 0.35467247562072124;
    msg.vy = 0.690604674362914;
    msg.vz = 0.3944234767922017;
    msg.ax = 0.017538203463658086;
    msg.ay = 0.10376547446557449;
    msg.az = 0.01213127264843683;
    msg.flags = 8131U;

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
    msg.setTimeStamp(0.20676462846983212);
    msg.setSource(33542U);
    msg.setSourceEntity(192U);
    msg.setDestination(60294U);
    msg.setDestinationEntity(182U);
    msg.x = 0.34023651736842153;
    msg.y = 0.17617992718101982;
    msg.z = 0.2649985181198129;
    msg.vx = 0.7302359440902488;
    msg.vy = 0.09524715500369418;
    msg.vz = 0.9058729215808375;
    msg.ax = 0.00721915151706487;
    msg.ay = 0.3971802230647268;
    msg.az = 0.09592334554306314;
    msg.flags = 38411U;

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
    msg.setTimeStamp(0.7011882876947112);
    msg.setSource(1518U);
    msg.setSourceEntity(223U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(103U);
    msg.value = 0.9344437538236265;

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
    msg.setTimeStamp(0.3477856232512282);
    msg.setSource(24982U);
    msg.setSourceEntity(70U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(39U);
    msg.value = 0.41354250867856734;

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
    msg.setTimeStamp(0.42835263260791034);
    msg.setSource(50702U);
    msg.setSourceEntity(179U);
    msg.setDestination(52076U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7041143651075489;

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
    msg.setTimeStamp(0.07062223179440164);
    msg.setSource(29719U);
    msg.setSourceEntity(46U);
    msg.setDestination(29178U);
    msg.setDestinationEntity(94U);
    msg.timeout = 50727U;
    msg.lat = 0.9138674486658012;
    msg.lon = 0.785629285215772;
    msg.z = 0.7726302064443317;
    msg.z_units = 170U;
    msg.speed = 0.5545225938320505;
    msg.speed_units = 71U;
    msg.roll = 0.5790529097152933;
    msg.pitch = 0.8578486107697479;
    msg.yaw = 0.5323749927630563;
    msg.custom.assign("USXVMHHCRWSAACTGUNEPRJYOHHPLUBMKJWDCQJLXXASDEPOLSKAFJMETEEBDRAJEHMJFPBRZQAOQVMRPFMCSYRNETLNZMRYNICSWIJZUZTWZZCDWTET");

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
    msg.setTimeStamp(0.27654155673229575);
    msg.setSource(60140U);
    msg.setSourceEntity(60U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(246U);
    msg.timeout = 31510U;
    msg.lat = 0.5876444781179074;
    msg.lon = 0.07604224965581197;
    msg.z = 0.7865228421719664;
    msg.z_units = 28U;
    msg.speed = 0.19951909566085002;
    msg.speed_units = 136U;
    msg.roll = 0.226313704774748;
    msg.pitch = 0.5225342479439394;
    msg.yaw = 0.2927249880748555;
    msg.custom.assign("PYHNUDCCGSAQPFFNPVWNGSGSMJLIPXKNHHWTIZAEQTTUKGNKKQJTLDRXTGPVTBDWXVWJBYZEXPEFZZSVRJNOZLLTQYYSASLZQJHMFUKOYYFRGFCKVIOROFIHCYDJRITKCZAEAOFPMCNBVDXOWCUUARZEXVBZOWUNI");

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
    msg.setTimeStamp(0.04803740144460367);
    msg.setSource(32111U);
    msg.setSourceEntity(147U);
    msg.setDestination(46469U);
    msg.setDestinationEntity(7U);
    msg.timeout = 55238U;
    msg.lat = 0.7507873294381482;
    msg.lon = 0.5423132731535691;
    msg.z = 0.8501646207619553;
    msg.z_units = 78U;
    msg.speed = 0.15306158153726712;
    msg.speed_units = 179U;
    msg.roll = 0.5650400702992547;
    msg.pitch = 0.5831600714898537;
    msg.yaw = 0.876576127819339;
    msg.custom.assign("MGAVWENKOFLLOYXGMSDBUYTZCXGNARTPUBWJEGEEBIVLDKRVMTDGSWLCPYSKYTOIYRFVFYXNDZBSOWCMSTFEMJZPKVOEPYJEFJSHVK");

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
    msg.setTimeStamp(0.20758169338692567);
    msg.setSource(32979U);
    msg.setSourceEntity(91U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(175U);
    msg.timeout = 9763U;
    msg.lat = 0.19248234572651657;
    msg.lon = 0.3354809376130635;
    msg.z = 0.19545979211220732;
    msg.z_units = 90U;
    msg.speed = 0.11158823134052831;
    msg.speed_units = 70U;
    msg.duration = 25919U;
    msg.radius = 0.8940235613030095;
    msg.flags = 8U;
    msg.custom.assign("SLUIFOENASLRRKATUBIOFNNCCTJYUKJMAPOXEXDEPYLXVWSOHCZDTQNPHOHCOEMMJVFWDB");

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
    msg.setTimeStamp(0.02282069607895887);
    msg.setSource(28162U);
    msg.setSourceEntity(29U);
    msg.setDestination(60707U);
    msg.setDestinationEntity(62U);
    msg.timeout = 14343U;
    msg.lat = 0.606006669204598;
    msg.lon = 0.4791622688802556;
    msg.z = 0.1810688285123342;
    msg.z_units = 127U;
    msg.speed = 0.2587644640691209;
    msg.speed_units = 86U;
    msg.duration = 41800U;
    msg.radius = 0.5140453751677576;
    msg.flags = 142U;
    msg.custom.assign("XQCIMKNDJALQHUXJESODWDVCSIBJRWKDPSTTJVAXSQOVWMYHTMNQGKZSHKGQLMCNJZNOBFBOFVTRRMRHAYQSPGFUULIPVPEUOGUHCPEMGTSMEILJT");

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
    msg.setTimeStamp(0.697109106354944);
    msg.setSource(7080U);
    msg.setSourceEntity(158U);
    msg.setDestination(52931U);
    msg.setDestinationEntity(88U);
    msg.timeout = 51037U;
    msg.lat = 0.0542918731269979;
    msg.lon = 0.09970447493340207;
    msg.z = 0.7538799457276738;
    msg.z_units = 137U;
    msg.speed = 0.7372458463076896;
    msg.speed_units = 158U;
    msg.duration = 39604U;
    msg.radius = 0.8478399394364933;
    msg.flags = 128U;
    msg.custom.assign("MMYBACGBAQBUFSLYTIEJDQGGMMDXTIUGDAUNOSRBARYQVYTZKSVLNXSKNTEHPRFEZUDAGYWMHKBPVTXEPVGOCBZCOZNRMRTFAXOEOYNSHNVPPDZCRZNVSAYIPWGNCNKEXEWZQOCWOHWUXWNUUROJIAHMKMPHJPHSCFBLTVRDDTQLMFWGKRDFZLEXK");

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
    msg.setTimeStamp(0.8504083554012886);
    msg.setSource(55508U);
    msg.setSourceEntity(170U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(53U);
    msg.custom.assign("ZNWGOYUGEIPCKPKINODAWQEHRTMCHUOWTDHFXXGXPBYLWBUBXWYDUZBRWZFSJEJFDPZGIHEKAKIVALXKRANAUXCJDTAEKVSOGPFQDUPCWVAQMNBWSNVTRFJXLEHESPBMVTRZHMZQQRJRFPGRVYNCGSTNJKSMVAEAYSUZSKLQZTTXVQCLB");

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
    msg.setTimeStamp(0.930394422875754);
    msg.setSource(51327U);
    msg.setSourceEntity(31U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("HVUDWHXANBNKQRNQQGKEHJZIPGLCFFBNCKNOASHUNGFQIHWARJZPOZYWETHXIJEUZWZVWIFOAQDTBVKELXGGVJTIDWCPLVTVPSOOLDLPFMLQXRJYVAUDFCMR");

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
    msg.setTimeStamp(0.2537507657801217);
    msg.setSource(26428U);
    msg.setSourceEntity(33U);
    msg.setDestination(3468U);
    msg.setDestinationEntity(49U);
    msg.custom.assign("SKFAPNRWMYHCUJKJHKQFQLSOXLBHYSMNZUOGORZRJVJBRZHDDNDIOVYQNBWXMEBTUWWXEYAIRUTVAWJGFTNTULTROSMDGELAOIGSXRPSZCFJGDSAFTYTNPQZGGXBBHNCNSCHPLVPX");

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
    msg.setTimeStamp(0.8015025452911533);
    msg.setSource(28005U);
    msg.setSourceEntity(236U);
    msg.setDestination(47815U);
    msg.setDestinationEntity(140U);
    msg.timeout = 19061U;
    msg.lat = 0.23147354179449575;
    msg.lon = 0.9081287956618916;
    msg.z = 0.6499904791018212;
    msg.z_units = 143U;
    msg.duration = 10878U;
    msg.speed = 0.7809377414291807;
    msg.speed_units = 196U;
    msg.type = 144U;
    msg.radius = 0.12790421472366342;
    msg.length = 0.3942948890538629;
    msg.bearing = 0.07407690906891606;
    msg.direction = 212U;
    msg.custom.assign("DLGWJNHRIULVTCQKQOLUSPIGHKJXXASJKUBKCYQLAXQQRFBYCOLLSMRNSFTVUITTLEBWBZKZAZHEQKYFQWGOSWFNMLVGPEPYBYUAFOPLANKRXMNOJMZNTUMCFEHYDKIVJIATPPWGNRDYTCATBZYEBMASVYDRTHWOJ");

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
    msg.setTimeStamp(0.5663595639543648);
    msg.setSource(28530U);
    msg.setSourceEntity(118U);
    msg.setDestination(62224U);
    msg.setDestinationEntity(158U);
    msg.timeout = 11921U;
    msg.lat = 0.5086983002113004;
    msg.lon = 0.013428372625572504;
    msg.z = 0.10879095489196366;
    msg.z_units = 111U;
    msg.duration = 55847U;
    msg.speed = 0.9101673551551909;
    msg.speed_units = 202U;
    msg.type = 92U;
    msg.radius = 0.7906497697381414;
    msg.length = 0.45909061373876414;
    msg.bearing = 0.9632463247395548;
    msg.direction = 66U;
    msg.custom.assign("DYXEBHDYSTFDFMJNLZPICDERXUVBGVNFEQLHPQOAKHZ");

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
    msg.setTimeStamp(0.7156596753171288);
    msg.setSource(51094U);
    msg.setSourceEntity(191U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(87U);
    msg.timeout = 16919U;
    msg.lat = 0.1726060460834914;
    msg.lon = 0.3858637014401991;
    msg.z = 0.05000996872906527;
    msg.z_units = 31U;
    msg.duration = 21846U;
    msg.speed = 0.2901578126564869;
    msg.speed_units = 233U;
    msg.type = 130U;
    msg.radius = 0.6409217787784267;
    msg.length = 0.19034356161992017;
    msg.bearing = 0.08280762299971178;
    msg.direction = 99U;
    msg.custom.assign("ASXFICAOJYGOVON");

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
    msg.setTimeStamp(0.5931038907060344);
    msg.setSource(61096U);
    msg.setSourceEntity(98U);
    msg.setDestination(27395U);
    msg.setDestinationEntity(118U);
    msg.duration = 34485U;
    msg.custom.assign("FQRGVKOTNIYRUVIWSQACNFBRMDCZIMZJTRMXAPIHDXIVMRAZ");

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
    msg.setTimeStamp(0.47368975614382447);
    msg.setSource(15895U);
    msg.setSourceEntity(170U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(246U);
    msg.duration = 15591U;
    msg.custom.assign("WGCPYJBJXNXQBVZBPHZDWIYOSNNRBEKTIJTLCNEIRFQODUWQIUKGZUILMUYMXEXSMUFLNQBURRVYWYJMQXWRSAUFQDZIYKZUHXAGKLEFXECOAEMRFHWUBVWCPVJFALKFNZOVGLGEGWTNADFMROQISYYSVAOHS");

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
    msg.setTimeStamp(0.5477823457268847);
    msg.setSource(54043U);
    msg.setSourceEntity(46U);
    msg.setDestination(7916U);
    msg.setDestinationEntity(34U);
    msg.duration = 52219U;
    msg.custom.assign("OOVNBUXTARPYQXLEJZBSSUMPINTKZOHLVDGYPOXERZUSGWMWISWVISQCYTYPAESADYBVLXIOGYFOFQDARGTBZTDPVNUJKQWFSUJECTDIKMLKWWQYHHJONEWPRUJHRMMCHNVHFADMYKQWMFQPBLPQGSHRUYXIDXSFIJ");

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
    msg.setTimeStamp(0.8565497608837612);
    msg.setSource(40651U);
    msg.setSourceEntity(10U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(65U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.8174991967042582;
    msg.control.set(tmp_msg_0);
    msg.duration = 39479U;
    msg.custom.assign("IOGIJTFRNUQYVUIQSZRNPBYPLDNSUHHWIRCNDKHVKJKQPEFOYTUACMCHNGODBRMPJTZMYKRTEREZBBQIMQUGWYWUBBLEAFENTCDEDFWFIDEAOBGDZSCMJXKFRKLNZB");

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
    msg.setTimeStamp(0.7839131123838343);
    msg.setSource(9913U);
    msg.setSourceEntity(195U);
    msg.setDestination(61564U);
    msg.setDestinationEntity(118U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.27453592141512684;
    msg.control.set(tmp_msg_0);
    msg.duration = 29428U;
    msg.custom.assign("MDVKGXFLHSZQOBALFVAHLVVYNRWQEZCUMI");

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
    msg.setTimeStamp(0.8186328275446667);
    msg.setSource(5407U);
    msg.setSourceEntity(30U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(99U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.14724216299657988;
    msg.control.set(tmp_msg_0);
    msg.duration = 6266U;
    msg.custom.assign("KRLZHATNVIRWETRPSXEUSPHINCROBJMBDUXSSHBMVFEBKYNCGBXZLGDLNLAHJKXMENSSWXBYUWCIIGTPEDACDHNDHLQHQ");

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
    msg.setTimeStamp(0.6925460845889619);
    msg.setSource(53482U);
    msg.setSourceEntity(145U);
    msg.setDestination(51085U);
    msg.setDestinationEntity(108U);
    msg.timeout = 27154U;
    msg.lat = 0.7992719334813863;
    msg.lon = 0.98027435759624;
    msg.z = 0.5855146755355151;
    msg.z_units = 121U;
    msg.speed = 0.41659455681958046;
    msg.speed_units = 60U;
    msg.bearing = 0.734663648296041;
    msg.cross_angle = 0.6065280137792247;
    msg.width = 0.7650296137806486;
    msg.length = 0.5628147626566109;
    msg.hstep = 0.8161702562465118;
    msg.coff = 250U;
    msg.alternation = 107U;
    msg.flags = 27U;
    msg.custom.assign("DJDZMFTWOAXXTQOPHCSCWQVYFFZQAA");

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
    msg.setTimeStamp(0.5508952795734833);
    msg.setSource(16210U);
    msg.setSourceEntity(153U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(222U);
    msg.timeout = 16570U;
    msg.lat = 0.6750077674415529;
    msg.lon = 0.6956935038399129;
    msg.z = 0.4008934731233329;
    msg.z_units = 93U;
    msg.speed = 0.19574737476515647;
    msg.speed_units = 64U;
    msg.bearing = 0.47994590645905466;
    msg.cross_angle = 0.7390426629075013;
    msg.width = 0.058054177002023644;
    msg.length = 0.15852184726740814;
    msg.hstep = 0.4524141964217073;
    msg.coff = 234U;
    msg.alternation = 43U;
    msg.flags = 160U;
    msg.custom.assign("FXZPEKHKGHKUAPHBSPTJULNFAMQNBSINQHJBOFWVOSMOJYSDGSWATCTAUTYUXYLWRRVVIPBOYLWNIRSKBCZUQVDGKC");

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
    msg.setTimeStamp(0.34219328157650775);
    msg.setSource(32916U);
    msg.setSourceEntity(68U);
    msg.setDestination(54380U);
    msg.setDestinationEntity(25U);
    msg.timeout = 27360U;
    msg.lat = 0.9990638469019032;
    msg.lon = 0.6201914393662943;
    msg.z = 0.22810062842553946;
    msg.z_units = 168U;
    msg.speed = 0.7033968142729586;
    msg.speed_units = 163U;
    msg.bearing = 0.5289513961290694;
    msg.cross_angle = 0.977465974446744;
    msg.width = 0.7352929567798722;
    msg.length = 0.7991107714236098;
    msg.hstep = 0.6442853462131046;
    msg.coff = 106U;
    msg.alternation = 142U;
    msg.flags = 242U;
    msg.custom.assign("IQITXBHVEQJSVYYMMAOGZXFNQCEZTZXFEPMDMCWZKXTISKDHDZIFKGPNMYWT");

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
    msg.setTimeStamp(0.6438834883933662);
    msg.setSource(21487U);
    msg.setSourceEntity(142U);
    msg.setDestination(3822U);
    msg.setDestinationEntity(161U);
    msg.timeout = 3711U;
    msg.lat = 0.1739018001104572;
    msg.lon = 0.024489137790147275;
    msg.z = 0.9314453376105833;
    msg.z_units = 193U;
    msg.speed = 0.4043123460954132;
    msg.speed_units = 219U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7047988235846833;
    tmp_msg_0.y = 0.8917161591729513;
    tmp_msg_0.z = 0.09602423746363542;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TQOOUNNGDKBWCETRKPDUXMWDCLUFKREOEHXXFZLKIHXVVCSOHVAIPMNNHYTYRNKVBTHBKTQRSYCCOFDRVZAUXUZOGUTOQETNMJEHJUKZIVZMGFWZQLJSDBKYVTDPPHFALSOLAMQDJOYIHVANGGANGLSMPYJWRSJIPFSTIJCMZEQJCYIW");

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
    msg.setTimeStamp(0.7365603128717477);
    msg.setSource(56832U);
    msg.setSourceEntity(159U);
    msg.setDestination(26266U);
    msg.setDestinationEntity(250U);
    msg.timeout = 6399U;
    msg.lat = 0.14786959198810157;
    msg.lon = 0.8820080245350073;
    msg.z = 0.6785949650031267;
    msg.z_units = 75U;
    msg.speed = 0.9974842578537015;
    msg.speed_units = 94U;
    msg.custom.assign("JCLRADXDXELDVWCRGKHFNJWZSLOJFBPYIUDNTWQSEENMZBIICBRNKZGUIIBRXQHLXOKAVMBYRRLFWTQEDWFLAVMKHIDGMERBBOTWWJGVBUESDZWPPCTUHWSISTEXQVZPQKNUZQZVG");

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
    msg.setTimeStamp(0.9137230420601348);
    msg.setSource(1673U);
    msg.setSourceEntity(118U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(120U);
    msg.timeout = 46511U;
    msg.lat = 0.5716559532656156;
    msg.lon = 0.8973851479948198;
    msg.z = 0.2578849302613242;
    msg.z_units = 221U;
    msg.speed = 0.03903343020358152;
    msg.speed_units = 15U;
    msg.custom.assign("OYJXNNVTGNPJPTLVZZADGQYHM");

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
    msg.setTimeStamp(0.8305539445112092);
    msg.setSource(1379U);
    msg.setSourceEntity(107U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(174U);
    msg.x = 0.6488438783887059;
    msg.y = 0.4566002627044935;
    msg.z = 0.4158814956927036;

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
    msg.setTimeStamp(0.4874965130740945);
    msg.setSource(57694U);
    msg.setSourceEntity(161U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(219U);
    msg.x = 0.4800298153322877;
    msg.y = 0.6001801183331597;
    msg.z = 0.3006281762176055;

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
    msg.setTimeStamp(0.7043070552055803);
    msg.setSource(8413U);
    msg.setSourceEntity(107U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(40U);
    msg.x = 0.38642599611822626;
    msg.y = 0.24560714302760855;
    msg.z = 0.6595880521141246;

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
    msg.setTimeStamp(0.06720272223723012);
    msg.setSource(61682U);
    msg.setSourceEntity(236U);
    msg.setDestination(41074U);
    msg.setDestinationEntity(84U);
    msg.timeout = 49788U;
    msg.lat = 0.14616702016967165;
    msg.lon = 0.20397339445141494;
    msg.z = 0.574135245523726;
    msg.z_units = 2U;
    msg.amplitude = 0.9724203250946049;
    msg.pitch = 0.25445317751381635;
    msg.speed = 0.35719354157922434;
    msg.speed_units = 124U;
    msg.custom.assign("LFLRURKUYEZFXRTZNDLJPCOA");

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
    msg.setTimeStamp(0.22001226415742603);
    msg.setSource(6432U);
    msg.setSourceEntity(239U);
    msg.setDestination(20454U);
    msg.setDestinationEntity(147U);
    msg.timeout = 54541U;
    msg.lat = 0.7894174117821777;
    msg.lon = 0.4018326764210751;
    msg.z = 0.7903014836435356;
    msg.z_units = 168U;
    msg.amplitude = 0.9033348663821955;
    msg.pitch = 0.9659463321128909;
    msg.speed = 0.8271488470502348;
    msg.speed_units = 174U;
    msg.custom.assign("FSNUIDGCTHUCWGEQNRHSGVEPWEKZBEUOSPQIGNILFXHMJXKKYAIWDGTBAPJNTXMBEZYTDVOSRTPXGTIBEWWAKBFZULCSKYAPBFBZLHKCNCVDFJDCLVL");

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
    msg.setTimeStamp(0.4630847651712404);
    msg.setSource(24496U);
    msg.setSourceEntity(175U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(137U);
    msg.timeout = 40524U;
    msg.lat = 0.1783071581202902;
    msg.lon = 0.9906236585227167;
    msg.z = 0.37738914193530226;
    msg.z_units = 68U;
    msg.amplitude = 0.7136002421412516;
    msg.pitch = 0.36874576055149444;
    msg.speed = 0.0293391779493134;
    msg.speed_units = 7U;
    msg.custom.assign("ZFZPAWDIRYXBVXQRADYTQYEBBAKHBYXMLGQEFBDIAWRKIIOSTHPUSG");

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
    msg.setTimeStamp(0.9345873885337183);
    msg.setSource(17278U);
    msg.setSourceEntity(6U);
    msg.setDestination(46744U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.47189395424349523);
    msg.setSource(33502U);
    msg.setSourceEntity(108U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.9259434639938412);
    msg.setSource(8129U);
    msg.setSourceEntity(191U);
    msg.setDestination(20329U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.32445142208083433);
    msg.setSource(47168U);
    msg.setSourceEntity(152U);
    msg.setDestination(59274U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.06024172192454935;
    msg.lon = 0.637319970689461;
    msg.z = 0.9282534874083075;
    msg.z_units = 205U;
    msg.radius = 0.9510292946427615;
    msg.duration = 13002U;
    msg.speed = 0.6284234029273965;
    msg.speed_units = 72U;
    msg.custom.assign("GNQXIYPDHIWVBDKOYZNFKSWTSRVPLMKIUEFOIHNZFKJAIWQBUBCSVJFDVHYQIUDJKRPKXPQSEULTPMLDYJGBZHRZQPTUOJJMWYROVDSQXWTQYVULGIJWQDOXJFEPSWZGNUBRIEYFUMVMZMYIBKGSAXZADHCNZLEXWGJDZPUUOSRECBSRTORLLEOVTTTEK");

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
    msg.setTimeStamp(0.9170295275906492);
    msg.setSource(38095U);
    msg.setSourceEntity(130U);
    msg.setDestination(44712U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.5255954631218812;
    msg.lon = 0.9546854112933982;
    msg.z = 0.8997459895429679;
    msg.z_units = 243U;
    msg.radius = 0.9957991166444833;
    msg.duration = 11262U;
    msg.speed = 0.8934537662945207;
    msg.speed_units = 171U;
    msg.custom.assign("CCCLJFFQYEGYTS");

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
    msg.setTimeStamp(0.730690104347487);
    msg.setSource(45599U);
    msg.setSourceEntity(62U);
    msg.setDestination(40742U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.8321239284719225;
    msg.lon = 0.49036803245213223;
    msg.z = 0.2805559466681583;
    msg.z_units = 122U;
    msg.radius = 0.6342283216624256;
    msg.duration = 62422U;
    msg.speed = 0.1858392856513753;
    msg.speed_units = 234U;
    msg.custom.assign("VLQVWTYYWQESPJPNUOGNHLBTUEOVNMQFUSYUQURSOSRSWZHGDFSAAELAKMCLWZDCLCIHTIVLLIZOCJ");

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
    msg.setTimeStamp(0.07742052939269783);
    msg.setSource(55946U);
    msg.setSourceEntity(19U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(11U);
    msg.timeout = 2580U;
    msg.flags = 133U;
    msg.lat = 0.8229302635657075;
    msg.lon = 0.4094543540799145;
    msg.start_z = 0.9731817992726889;
    msg.start_z_units = 144U;
    msg.end_z = 0.5728340161118042;
    msg.end_z_units = 143U;
    msg.radius = 0.8160806357648133;
    msg.speed = 0.30597989935915537;
    msg.speed_units = 219U;
    msg.custom.assign("UVETZOQACHJRLHESHHXRPQTBHEPTQJKQJGVQFKGDVRABHYISIGSLOTHUSHABDZNYFUKMRLQBMZLVSTNOECVGDWJYNLMVTYRBPMCTDWMLTHXOIKNFMFKZRTCBJARQDICNFNSYPEFTLPDYZXMUJKGYCHPUOCBXACVXKYWAYXAPAEJZSDARFLGU");

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
    msg.setTimeStamp(0.6956469935311371);
    msg.setSource(53737U);
    msg.setSourceEntity(161U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(197U);
    msg.timeout = 60635U;
    msg.flags = 71U;
    msg.lat = 0.5194844543989922;
    msg.lon = 0.9775794556635341;
    msg.start_z = 0.5906246695511983;
    msg.start_z_units = 30U;
    msg.end_z = 0.6036406521872882;
    msg.end_z_units = 197U;
    msg.radius = 0.5468074139921546;
    msg.speed = 0.5331852352519433;
    msg.speed_units = 108U;
    msg.custom.assign("AISFKJTQESOYSUSNMCYXUQOVKKQVRFHFPCBXKMIRZVVDJTRWVFJTTZGGBLVRJPAKCXDXMTHGROQUPZDOILBJYEIZGQFYEVZCOUOKIBPZGLNWYHZIDUNWNBEATMEFNAHYMPLMMCUOEUWFSYBJAEHUNPFWKVRQPUIXLIEDLLBXOZDLDQTCHSSGRQKHRRXXKYCHIAGGFOYCBNONTLHDWZSJLHDJZPFQANWESU");

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
    msg.setTimeStamp(8.227229538526615e-05);
    msg.setSource(16083U);
    msg.setSourceEntity(94U);
    msg.setDestination(23974U);
    msg.setDestinationEntity(93U);
    msg.timeout = 7390U;
    msg.flags = 64U;
    msg.lat = 0.22536429730723995;
    msg.lon = 0.5497667486375334;
    msg.start_z = 0.9672428383550539;
    msg.start_z_units = 18U;
    msg.end_z = 0.35687339655328587;
    msg.end_z_units = 123U;
    msg.radius = 0.06610165618570762;
    msg.speed = 0.20254611322690041;
    msg.speed_units = 186U;
    msg.custom.assign("EDIGLMODDP");

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
    msg.setTimeStamp(0.3375080772372282);
    msg.setSource(39663U);
    msg.setSourceEntity(186U);
    msg.setDestination(59205U);
    msg.setDestinationEntity(197U);
    msg.timeout = 41392U;
    msg.lat = 0.9815786137953594;
    msg.lon = 0.3510427814243742;
    msg.z = 0.6438436443920353;
    msg.z_units = 147U;
    msg.speed = 0.0817981278428761;
    msg.speed_units = 107U;
    msg.custom.assign("XESJAGJLMBEBQPLRBZPYZNTRNEKANFCFBFRNGBWEUGPSYYLMYOFLORHJTKDDHAIFIHDMKYCXCQIQYWUSOPFTPRUAMDVRKFDRIDGQTCJFMCSLAGOBNQQBGJXT");

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
    msg.setTimeStamp(0.8695291195721291);
    msg.setSource(62569U);
    msg.setSourceEntity(169U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(140U);
    msg.timeout = 47929U;
    msg.lat = 0.5671975059339863;
    msg.lon = 0.8757628579448821;
    msg.z = 0.6556019305057453;
    msg.z_units = 153U;
    msg.speed = 0.20804067374639623;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.31716452636648407;
    tmp_msg_0.y = 0.6022026562190919;
    tmp_msg_0.z = 0.7036118454074083;
    tmp_msg_0.t = 0.7022753564387518;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TUWQNMHURUDVLJGPEWOSTJRIZWDOOEIGEGZLZNDKQMFFCPDJGATASYGYXQVTTIOHSAVZQXHRKQEPKDPZBEIZMTUBCWFRQCMTJBNXOHOAYBUOLMWDCLYLJJEKPXYEHNRGHGWUAUUYLKCQNNEZDNTCFPIKCKNQLMEGFYOJPVMMQXCAHHLONXBPUSDBVRDSHVFIAFXAYUB");

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
    msg.setTimeStamp(0.9711353593909599);
    msg.setSource(53561U);
    msg.setSourceEntity(125U);
    msg.setDestination(60814U);
    msg.setDestinationEntity(33U);
    msg.timeout = 7152U;
    msg.lat = 0.3882956780680038;
    msg.lon = 0.9639055164560514;
    msg.z = 0.3107633565140795;
    msg.z_units = 149U;
    msg.speed = 0.2057114252597153;
    msg.speed_units = 218U;
    msg.custom.assign("NWIKTIWOPZNWIGENBCZRQIKYENLOJSNNUXPWSEWOSVBAVFTYUPCLDGBZTWXEWLADMXZUEADCGAXOGVLSTQQZGRMRGPAMAMTREFZHCSUOXJIBJNBKXFOHMPFJJBXCEOFGPBLZLCWUDDVBORTIPAYTASXLUHJBFMOY");

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
    msg.setTimeStamp(0.637526136027263);
    msg.setSource(36449U);
    msg.setSourceEntity(4U);
    msg.setDestination(19092U);
    msg.setDestinationEntity(107U);
    msg.x = 0.3118385658318289;
    msg.y = 0.624490766013217;
    msg.z = 0.624322829200647;
    msg.t = 0.21847503195313334;

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
    msg.setTimeStamp(0.8304816520511088);
    msg.setSource(11297U);
    msg.setSourceEntity(198U);
    msg.setDestination(54880U);
    msg.setDestinationEntity(102U);
    msg.x = 0.3151467710142848;
    msg.y = 0.38786463454040476;
    msg.z = 0.5236371802644515;
    msg.t = 0.44159905419035916;

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
    msg.setTimeStamp(0.5549657665338378);
    msg.setSource(61947U);
    msg.setSourceEntity(44U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(51U);
    msg.x = 0.44156166833968125;
    msg.y = 0.7908389786653205;
    msg.z = 0.9926663808498429;
    msg.t = 0.17384470592557322;

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
    msg.setTimeStamp(0.6050991597634403);
    msg.setSource(2920U);
    msg.setSourceEntity(160U);
    msg.setDestination(13214U);
    msg.setDestinationEntity(0U);
    msg.timeout = 54319U;
    msg.name.assign("TKLUSEFEHSPAPDZFYZDBVOLDZYYJONTWDJZUUHGCOWFYRMGTJQIMYWMZAQMCRDEMYCGNTXJFRYAMEBUCCLMXZUEJFBMNOQBQHZNHAS");
    msg.custom.assign("SFSNPMBSDCLWDHMQUVOFMXHKAMPEZVEPSZBJBQSRUYEQTFFMOWMABPJKIIQYVTBWOANRPVVEDZFAJEFVIRAGEOGTXCLAEZRXUYBJLWQOWXDRLCWQYNGWTJCWGUMUOFEHXMZYBGMJXTDHNIAQJGQBOZBHRIGTKUKEHNVJNNDKXGTUSTIYNVOCPRJGHCFHSAPVNIRYILKCRFBDYPKDOXCKWPLESZ");

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
    msg.setTimeStamp(0.030601111851102925);
    msg.setSource(2391U);
    msg.setSourceEntity(114U);
    msg.setDestination(8803U);
    msg.setDestinationEntity(209U);
    msg.timeout = 13190U;
    msg.name.assign("SBCEAAIGBWXRQVKAOQUINYXPCYDKTVOBTRXAUTVSNAOPSSWMMEGFRPHPBMMVWDHGNUDEICZOZJKPSSJWGNLUKJUXYBRETAMIDIDOLRMTSTHYWPFLCGQDMWWKTQ");
    msg.custom.assign("GQGBKGDTWOCNRYDIBLTRDUIRDZAVMRHDWDGGAMPZUWAZQHSPPJFPSVXIMCNDUOBREBZQUJXIKALUXQESVEVHUKHCZZANNKKUPOCSRCIPVAERZVTGBNKNBEEFEFASOPKLSKPVCNAKTHLMAYJWLYTXJBXPZFZQUCYHKTLSTXWJLXIWDROOIGFFEXSHMRCCIYFPBGBZVIYTMUJWFOCJNFAJBSYTQWWGMDOWUMSQ");

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
    msg.setTimeStamp(0.9388139676641459);
    msg.setSource(17435U);
    msg.setSourceEntity(148U);
    msg.setDestination(756U);
    msg.setDestinationEntity(3U);
    msg.timeout = 1324U;
    msg.name.assign("TAAHQQPEFVJKFDEGASQOCVMDBOFVFXWDGCSOBVGGOOYCNQQIILMSNYMFYWEXKSZLNIIXZSJTPHIPTRALKYIGOPZZRLCQPEAFVQXAPNE");
    msg.custom.assign("UXZDUNOVVYLXXTKUVUFGLHJVAUJKNUVXQODHATKMQZNQULXNYJKZWCDSILWTVHHHVMOFXNCPSGSQWHBQGPJEIODDDPJDQCAGERPCDIPYZRTHLTWGGOTAMYRIZC");

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
    msg.setTimeStamp(0.9965086698451909);
    msg.setSource(14905U);
    msg.setSourceEntity(123U);
    msg.setDestination(50628U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.5766418347246596;
    msg.lon = 0.08018055278496394;
    msg.z = 0.9196778175110385;
    msg.z_units = 177U;
    msg.speed = 0.16260418490812967;
    msg.speed_units = 183U;
    msg.start_time = 0.3780649316362046;
    msg.custom.assign("WQWVLXTPKLAXDMHDXMEZXEQPZFOUARJDHOFJJYPMZHCVBCITMDMTYCGPEOTJDNRYEOVUUDYKSQZAVRPHEOVWZBQGHFYPJKQIWHXUBQSBFGKTRDUWXFPALCDLRWLXZVBVKNXZQIGWNHVCGAUTRCFMNIIYQLBGMLSUDMUPJHHAACGVENWEOFROFAFINPNBSCIZIGETGSLSTRMSSLLYCKYEYIXOJBNUZWDBRZOKPUVYEWSA");

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
    msg.setTimeStamp(0.9411267766054934);
    msg.setSource(7086U);
    msg.setSourceEntity(104U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.7331022836221546;
    msg.lon = 0.6720848208146798;
    msg.z = 0.6370584950239259;
    msg.z_units = 200U;
    msg.speed = 0.44165847892896504;
    msg.speed_units = 39U;
    msg.start_time = 0.7441090803458293;
    msg.custom.assign("GBCCEXXIJVJMWPLFRQYDHZZYSKFSWNOZRLSOXQZXHOJVHMFBUQTBGITDJYHWCZUXALLSRWCQDFSHNKPLYMYFULWYHHAMYSETPOEBQIAJIRSFOPJMJNUAKAVGDASDOTEOSQOVBZYWIBMYWLFTRIIVLBBNNCGRTGWRZPPKKQXBEVNGKRHEKGFNPXUFCJHUEHDDZOLPGRZNDB");

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
    msg.setTimeStamp(0.2369461211618039);
    msg.setSource(6070U);
    msg.setSourceEntity(154U);
    msg.setDestination(54333U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.6418485840208197;
    msg.lon = 0.7418472023705179;
    msg.z = 0.31515406671301494;
    msg.z_units = 204U;
    msg.speed = 0.6041221880450389;
    msg.speed_units = 142U;
    msg.start_time = 0.6520001505310271;
    msg.custom.assign("GWSAUOXMVVDRKNFYQTYIPXBZTJAKOF");

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
    msg.setTimeStamp(0.030194922767993515);
    msg.setSource(47451U);
    msg.setSourceEntity(79U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(221U);
    msg.vid = 3606U;
    msg.off_x = 0.7106133900055595;
    msg.off_y = 0.19210510905764067;
    msg.off_z = 0.7645639878626339;

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
    msg.setTimeStamp(0.817621605966777);
    msg.setSource(18745U);
    msg.setSourceEntity(86U);
    msg.setDestination(53368U);
    msg.setDestinationEntity(21U);
    msg.vid = 12613U;
    msg.off_x = 0.6030961324283549;
    msg.off_y = 0.46155377459823344;
    msg.off_z = 0.3252227925919319;

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
    msg.setTimeStamp(0.9021693486876041);
    msg.setSource(56920U);
    msg.setSourceEntity(9U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(15U);
    msg.vid = 33994U;
    msg.off_x = 0.5812609419025355;
    msg.off_y = 0.7265883127099829;
    msg.off_z = 0.9377152127067427;

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
    msg.setTimeStamp(0.9408467806293229);
    msg.setSource(24023U);
    msg.setSourceEntity(93U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.6914190516078019);
    msg.setSource(9554U);
    msg.setSourceEntity(89U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.8693066924906449);
    msg.setSource(53949U);
    msg.setSourceEntity(8U);
    msg.setDestination(18043U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.6011495544092058);
    msg.setSource(45945U);
    msg.setSourceEntity(41U);
    msg.setDestination(30945U);
    msg.setDestinationEntity(84U);
    msg.mid = 31454U;

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
    msg.setTimeStamp(0.17112445284604927);
    msg.setSource(36763U);
    msg.setSourceEntity(188U);
    msg.setDestination(18602U);
    msg.setDestinationEntity(78U);
    msg.mid = 21350U;

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
    msg.setTimeStamp(0.4285565753632943);
    msg.setSource(28487U);
    msg.setSourceEntity(138U);
    msg.setDestination(34464U);
    msg.setDestinationEntity(158U);
    msg.mid = 26222U;

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
    msg.setTimeStamp(0.6278885673314419);
    msg.setSource(6074U);
    msg.setSourceEntity(96U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(176U);
    msg.state = 225U;
    msg.eta = 61979U;
    msg.info.assign("RXOPSIXUETLOCWWKVFFZDXEYLILDLKKDBUSYUNVPSKAJLZXLHFDVXGWEPBYORYMAZDWKOJIBJCXAQOETJGWVQJTUHCECQFFZIZPTEMIZVZJHYLDDGKDJCPPNUFJHJVBPYGBWNSMTAGOUFJVMBYONMMAHRRIVCPFUSNHANMCYKBEALSLZTRNCRXDNKQHFMQGAUUUHFZQTZRPBVQYSOHOWTQHXOEYGGQXBECWX");

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
    msg.setTimeStamp(0.7383545510443028);
    msg.setSource(62062U);
    msg.setSourceEntity(149U);
    msg.setDestination(3074U);
    msg.setDestinationEntity(165U);
    msg.state = 161U;
    msg.eta = 20612U;
    msg.info.assign("WVMBOFCLKJNWSIIYSPEXNNULMBDTKTBUASXKZFFDEPRSNUMSCUQQFLKNPMIGCIBCAHIAMVVOIUTHHORFYJQEDLJNFTWUQKMLCI");

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
    msg.setTimeStamp(0.9297302331908316);
    msg.setSource(59845U);
    msg.setSourceEntity(251U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(26U);
    msg.state = 200U;
    msg.eta = 29847U;
    msg.info.assign("DONAHPJUOJYRAFHKJFFMWNPAEFCZLBLQUFUJGGGWBOMGVMSJWPQHBFAURXPQWGDEKRNZOJSSJLRXESKQUKORYE");

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
    msg.setTimeStamp(0.3883679014632827);
    msg.setSource(59195U);
    msg.setSourceEntity(246U);
    msg.setDestination(49596U);
    msg.setDestinationEntity(38U);
    msg.system = 64722U;
    msg.duration = 23174U;
    msg.speed = 0.8028213312423509;
    msg.speed_units = 8U;
    msg.x = 0.45058687469388126;
    msg.y = 0.5510047666009894;
    msg.z = 0.7354683694997026;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.7837649708121439);
    msg.setSource(46U);
    msg.setSourceEntity(28U);
    msg.setDestination(3213U);
    msg.setDestinationEntity(140U);
    msg.system = 46071U;
    msg.duration = 45011U;
    msg.speed = 0.34831581246476917;
    msg.speed_units = 107U;
    msg.x = 0.6448773584346109;
    msg.y = 0.04474739292906038;
    msg.z = 0.5829293479862515;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.4418927491081509);
    msg.setSource(58534U);
    msg.setSourceEntity(121U);
    msg.setDestination(10745U);
    msg.setDestinationEntity(73U);
    msg.system = 29154U;
    msg.duration = 19546U;
    msg.speed = 0.18945279008811755;
    msg.speed_units = 98U;
    msg.x = 0.6317890291052759;
    msg.y = 0.21539091451704107;
    msg.z = 0.9780616503018809;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.2266584281210482);
    msg.setSource(26691U);
    msg.setSourceEntity(119U);
    msg.setDestination(51539U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.5631976441885532;
    msg.lon = 0.7938691004509022;
    msg.speed = 0.051341038143861595;
    msg.speed_units = 52U;
    msg.duration = 9287U;
    msg.sys_a = 46235U;
    msg.sys_b = 13803U;
    msg.move_threshold = 0.6963515855910616;

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
    msg.setTimeStamp(0.25380150277077806);
    msg.setSource(11166U);
    msg.setSourceEntity(120U);
    msg.setDestination(61321U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9636076531349745;
    msg.lon = 0.05262955955824433;
    msg.speed = 0.9165863926343681;
    msg.speed_units = 184U;
    msg.duration = 49653U;
    msg.sys_a = 9133U;
    msg.sys_b = 30315U;
    msg.move_threshold = 0.3650999949147369;

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
    msg.setTimeStamp(0.7725368187904824);
    msg.setSource(56402U);
    msg.setSourceEntity(112U);
    msg.setDestination(43581U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.8897230198435367;
    msg.lon = 0.015633374276406764;
    msg.speed = 0.8253985123500055;
    msg.speed_units = 239U;
    msg.duration = 62819U;
    msg.sys_a = 15825U;
    msg.sys_b = 16501U;
    msg.move_threshold = 0.5183939673527412;

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
    msg.setTimeStamp(0.9820327802373725);
    msg.setSource(17598U);
    msg.setSourceEntity(0U);
    msg.setDestination(51163U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.7731926746892889;
    msg.lon = 0.27002619685964013;
    msg.z = 0.9839603296182682;
    msg.z_units = 226U;
    msg.speed = 0.1653000231214642;
    msg.speed_units = 52U;
    msg.custom.assign("YOBDXSWBCXIRIRGNOQFKHZYMHBSJH");

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
    msg.setTimeStamp(0.5855080085346479);
    msg.setSource(38803U);
    msg.setSourceEntity(172U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.7350100839592573;
    msg.lon = 0.08107508134071717;
    msg.z = 0.1572283332085096;
    msg.z_units = 136U;
    msg.speed = 0.5760415972346079;
    msg.speed_units = 113U;
    msg.custom.assign("BBMHMGMOGZXYEZGNIW");

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
    msg.setTimeStamp(0.12263469951076578);
    msg.setSource(56512U);
    msg.setSourceEntity(93U);
    msg.setDestination(32970U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.27611118203465246;
    msg.lon = 0.03837286592265177;
    msg.z = 0.9270668135314903;
    msg.z_units = 77U;
    msg.speed = 0.5851934482370226;
    msg.speed_units = 4U;
    msg.custom.assign("FVKDAJDZSRCCWQCKYGHIHSNFOFHFZXEOFCFTOIKTPUPNWCVJTJKALBQUPRJUBPROTNKRDMJLELYCVYBUUVDWCFAGETAFMWXIGUHXSEVYUHWYNRVLTVAYIQQOLYZRJIKOQZZQRDNWTAWIPXWUZKRHTLXFTJKQMNDORRXDXEPYHEEBUSSSGBMCXYLNKAICMXANNGLHGGVDZBIBHQGSISDAJOFEZVBKPIOZ");

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
    msg.setTimeStamp(0.2107285536082696);
    msg.setSource(11117U);
    msg.setSourceEntity(211U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.13539730398326966;
    msg.lon = 0.32412179420145826;

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
    msg.setTimeStamp(0.44596937530105085);
    msg.setSource(40465U);
    msg.setSourceEntity(165U);
    msg.setDestination(41252U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5620682877667211;
    msg.lon = 0.0015810301497000134;

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
    msg.setTimeStamp(0.5928393301545521);
    msg.setSource(7136U);
    msg.setSourceEntity(57U);
    msg.setDestination(11021U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.3501100201803867;
    msg.lon = 0.3928717966885278;

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
    msg.setTimeStamp(0.8252179304511548);
    msg.setSource(9817U);
    msg.setSourceEntity(187U);
    msg.setDestination(54657U);
    msg.setDestinationEntity(11U);
    msg.timeout = 59604U;
    msg.lat = 0.4775911254694535;
    msg.lon = 0.8050620729025532;
    msg.z = 0.7310497990486866;
    msg.z_units = 237U;
    msg.pitch = 0.3688173267761312;
    msg.amplitude = 0.7514594189277117;
    msg.duration = 27443U;
    msg.speed = 0.20153285931578713;
    msg.speed_units = 107U;
    msg.radius = 0.7716076468956361;
    msg.direction = 85U;
    msg.custom.assign("CDVZSXZSJBNYUFIWM");

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
    msg.setTimeStamp(0.049745125966770276);
    msg.setSource(30080U);
    msg.setSourceEntity(218U);
    msg.setDestination(45612U);
    msg.setDestinationEntity(236U);
    msg.timeout = 41841U;
    msg.lat = 0.2087204174732089;
    msg.lon = 0.36600844290515144;
    msg.z = 0.08442292345258195;
    msg.z_units = 150U;
    msg.pitch = 0.6685542534426868;
    msg.amplitude = 0.29417817334147645;
    msg.duration = 45560U;
    msg.speed = 0.9505849480683906;
    msg.speed_units = 122U;
    msg.radius = 0.5397629042555849;
    msg.direction = 179U;
    msg.custom.assign("PSTRWCXABTSMTPUANMAVZOIJWNUME");

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
    msg.setTimeStamp(0.5943200588499743);
    msg.setSource(32250U);
    msg.setSourceEntity(193U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(233U);
    msg.timeout = 14738U;
    msg.lat = 0.30989846697062273;
    msg.lon = 0.6276660476258245;
    msg.z = 0.9138652912206182;
    msg.z_units = 99U;
    msg.pitch = 0.7787199662301568;
    msg.amplitude = 0.7248348098001537;
    msg.duration = 55818U;
    msg.speed = 0.0011176421586838181;
    msg.speed_units = 24U;
    msg.radius = 0.9275668936293409;
    msg.direction = 83U;
    msg.custom.assign("WVLVDHQRIKXECLSYHGPBOXYJMJEJKRFXEQUJGWRLRTVNETUSPIZDWVODMJYNFXKQCTPCKMTUMNGOKOBANJBDEPVPGSYBANUHGU");

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
    msg.setTimeStamp(0.5105551121069172);
    msg.setSource(28604U);
    msg.setSourceEntity(181U);
    msg.setDestination(18105U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("RCZBYKYTNBWNQJDYRFAXWGNOCYGXYCZZBCLYLOWDHFAFQFZJPMHASPVOKTXHSLOGUOIUCDAKHMVHJMVQTIGOTHLQVPIYUIJFUUUYBDIJQFCRZFUQVDXNIQSWWDQKEEBWOMORLWAMJRCMXFHPLREWTTBTXKD");
    msg.reference_frame = 221U;
    msg.custom.assign("WUGPKHNXOEKHIABSCNCYSATSZNDBASQITMKOGXTWFWZHRTEXCRKGHHLFVPJCIBWQJBLHPMTVTDPIKEJYCVJUJ");

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
    msg.setTimeStamp(0.8438582781521581);
    msg.setSource(29155U);
    msg.setSourceEntity(128U);
    msg.setDestination(15742U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("KZVLJAIOEMOFHELLZGUUNXUEZMYRPRRXBHBVQGWTKXCQNJSMVGHFQAVBKQJODCAPFZDUSYVDHLFICYBWWJDSTYBIREHFOECTXSDNKMPDBULNROXRKMRDCCRLOMSGPPICLWSFBNJEQMAGEPPZRZYAQJKWMXLXGABSMKDTBNDVNOQFUJZTQXIVXKYJILVZZHGEKDTUOWHCGAFVPSKXJHTIUQTGTSUYCIHBJEQIZYWCS");
    msg.reference_frame = 232U;
    msg.custom.assign("XPFTWOLXAFHHKNXDJUEACRDYBYINLCOVFKHZIZLPZZVFRMSPGAISVEPKBNMEYHSDKUQLXEOTNXBGPRGLIKEYTCCXVVCTSMMMAXETTQWKGKJOGOWUZQJACFDVBMCLICWUPQYZWMVZNLLPQSFSSAIYJRODUUJYSMKHRYCOSYHWOHQBPADTITGUTNWGRMEPBDYZNXSHOBMLFA");

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
    msg.setTimeStamp(0.15088918941991525);
    msg.setSource(59024U);
    msg.setSourceEntity(109U);
    msg.setDestination(52408U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("MVQTNMEEOCTSOOXBHQFTMYVNVJAJYNZSVXLLYILBRLHCBWIUUIPPUSHCJXEOUXPZXUYNRFAHOHXDLVGSKEXCJLRLKDFRCBFAVJQWTCLJGMPFZNAWEZYAISSBHYDAGECQKPYBUXQRWZKPWUQTDMCVHMIPJUGKBWZRDQFGISVPTGIXIFGKSNSQNODBQFOWKRTRMMKJSDOA");
    msg.reference_frame = 190U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1641U;
    tmp_msg_0.off_x = 0.8819538588005784;
    tmp_msg_0.off_y = 0.639529586451664;
    tmp_msg_0.off_z = 0.9668363985530843;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RFRNHJKUUWSJRSJZDTXBBXGULWLYIHMMOCSGPFMZZYHVANGXNVIBWQHEVPONVDMPATEUDKGTRZPIJZGPJRZLSEPSZFIUFRISVAEAHKQERINCYMOJCKKQXQXWTABBCOCKDDYVGWYTTKJWFNXCJHCAOYIQTXUMIAITQXZHOTPVBGLFUPDSYSFKMULCDVBAWFDXLLJOHNOAWHEADBEKROHFXCWMVLFCYULEQSM");

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
    msg.setTimeStamp(0.8992936929291891);
    msg.setSource(21061U);
    msg.setSourceEntity(211U);
    msg.setDestination(31100U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("YNIDGQOLRUIKNGKHJTUPMJFOOPLOBCQEVVQKTCFRCGFBTYMFFOPVHQIMWWCGMUPTEPEKUPBIRCXKNG");
    msg.formation_name.assign("MUEJULMVPQTBETCHJWZKOWODVEMGKALFUIOFXIUFJNNIFHFBURSBLLFSPGCDKYXQSZQWAMUYVZXSJFKYANIRAUEZIILXMYCXEDEMJLOKDKRETHGFCTYNBQYQOKBOOPQJACHGVLWXVOREHZBGOQRZWHDHHAS");
    msg.plan_id.assign("MRONVGCSJUSTDNARCSPSVHBLGYHHMHDUDTEPOBCJVQVBUJRTPEZQDCEBSOLTEXITUGYIWVTKGFANWXNKIMYUXLY");
    msg.description.assign("XYJKRVSHRCIQAPDKXGEYEBGEVOPFIDUWEPZBJVTDXVPTLYQVBZWFJNTRLXAVYOICSMLAOHMEKQYVGSTNWMZABLQTHKKZRQOFNJMPUDCFDBAAZITOFLPAUYXUYBSJFWDWCTJAMPRFEUOGVCGKXO");
    msg.leader_speed = 0.3734193650852843;
    msg.leader_bank_lim = 0.912165855703027;
    msg.pos_sim_err_lim = 0.001394282121576551;
    msg.pos_sim_err_wrn = 0.37816386804928215;
    msg.pos_sim_err_timeout = 5403U;
    msg.converg_max = 0.964838172571021;
    msg.converg_timeout = 29974U;
    msg.comms_timeout = 44814U;
    msg.turb_lim = 0.5796879070500306;
    msg.custom.assign("WIXRCOSTZHCAXMUHKECSUMDEK");

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
    msg.setTimeStamp(0.7934745366615849);
    msg.setSource(30197U);
    msg.setSourceEntity(158U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("BNOHXXVLVXRRTCBLZYYLBQYSPVABKLVCAIITBUFDPDSRTNXCZSCZNTBOBCKQXBMFRTUSHIOPQVMJOYBHVSQWJOMWFLGPFWJSANNZYWVOMQAIPFUNDGDTECKAPHDEVWAGDZGIHLHQTJQGUDFEIUFKZGCKOKHYMGSYDYMXJHRWLYEUPMENQWBQXZAYZCIPAPSKTCUWSJJRKOUNEH");
    msg.formation_name.assign("WCPHEGBLSRWSFSEZNMYDIBTXZBUQUDYTMMHMCLHUDROHALWAPIMXWFHMAXFJXPPVEBYKKJTARA");
    msg.plan_id.assign("SOMZOIBALOUEBTWNPKEWDVKTNEGMYNIRKULTEZDYLHIEWRMQCJPOJGQZEMZMWEZTKNIFDXNTRVFQXOFJPYGJJNICSBCVMLPBJCNPOBAFKISDVWHARJYCFCBFUYZYSASLEWHUIQQOPPBIEMZCUKBWLVDRKXAZVWXXFVGMXLSHMOIYOYTUQQCXUHMQHKRNPWZYLBVHGHVDGVGFRXALSDWODRAHDBUKTCTURAIFPFSNCGTZLSQKXGJNHR");
    msg.description.assign("MOAKXXDAEMPHMONJUJYISHILBLCPLVZJYPYTTXGFZVZXWNBTUEYMOURHLPBF");
    msg.leader_speed = 0.850074932348321;
    msg.leader_bank_lim = 0.4372587767352383;
    msg.pos_sim_err_lim = 0.10061221577522861;
    msg.pos_sim_err_wrn = 0.7918401211044293;
    msg.pos_sim_err_timeout = 45784U;
    msg.converg_max = 0.22552803093650053;
    msg.converg_timeout = 29134U;
    msg.comms_timeout = 7474U;
    msg.turb_lim = 0.7740373896052263;
    msg.custom.assign("KKQFAKAZLHTWVTYYRQBJDURHJJPVNLPHFNTMMZHKRNLPGPAZQOKIDWBSCPECRDC");

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
    msg.setTimeStamp(0.9054465747053329);
    msg.setSource(31220U);
    msg.setSourceEntity(66U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("POMCNVTWDCZIBJDYLDXZZWXVBUNDEIUJGVOEKIKBTCSPHULEQLSTEXRXGAWCAZUKFVUGAZJAFNTWUWBXNFNUHJPOWJMTUFVEZKLYSNELRIBHFEQZYURQGGLYWCKKOWBQMNXOYJHMPS");
    msg.formation_name.assign("UKVMRAWMDWCADGZCTXCHXVDNMSXPGRMMDFZUXCVAEFTCAGQLZEZRBDRSQHSCVLVECZSGHBPJVIOHOEBMFXADJIKJPNBEJAGUSAQTGETKMYHXLUUJVRHSXLUQYUWKZHOXLKOYYCZVBTOTTXPIIPPGCFIQNYRLPJLNBUJZYONZQVRWQBLZWWQWJAMFDRUOFHONK");
    msg.plan_id.assign("GVUQTOYDBJXXXKWNJNCFHGSFXFLZCTINOWQEMDFOSJRPCYMNQEZTGGFXVXECLTOPJONWQDSAAZFHAVIBFZTKMGCPWMBHPBSWVDIPMTIRDUXIQIYWZRHSNOYAEKAEPVLOBJQTHJZZIYGDQMRLLBMLTURMMSEUOEKBEBBGHCUKVCGRWD");
    msg.description.assign("PXFNGTEQEZJURLNXBFQAXADKPRGTBBOGOSXBPAFVVTVOROZZRALJRVBSPPIZETEVYGYXFIOFBASLQPWSQVDFM");
    msg.leader_speed = 0.36330191366905484;
    msg.leader_bank_lim = 0.7341236905441499;
    msg.pos_sim_err_lim = 0.9196442767885334;
    msg.pos_sim_err_wrn = 0.42583418215175284;
    msg.pos_sim_err_timeout = 38014U;
    msg.converg_max = 0.5888625611775303;
    msg.converg_timeout = 51129U;
    msg.comms_timeout = 5865U;
    msg.turb_lim = 0.5236334382370901;
    msg.custom.assign("YUCPFJGOWXDQKVQA");

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
    msg.setTimeStamp(0.21915993022235414);
    msg.setSource(28807U);
    msg.setSourceEntity(251U);
    msg.setDestination(59145U);
    msg.setDestinationEntity(237U);
    msg.control_src = 52008U;
    msg.control_ent = 189U;
    msg.timeout = 0.4349873192839999;
    msg.loiter_radius = 0.8863512885462785;
    msg.altitude_interval = 0.6755165597736186;

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
    msg.setTimeStamp(0.4823363075004441);
    msg.setSource(47498U);
    msg.setSourceEntity(124U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(60U);
    msg.control_src = 2524U;
    msg.control_ent = 99U;
    msg.timeout = 0.939525860583018;
    msg.loiter_radius = 0.6866340635676333;
    msg.altitude_interval = 0.4853202248528393;

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
    msg.setTimeStamp(0.3674697904712406);
    msg.setSource(60295U);
    msg.setSourceEntity(148U);
    msg.setDestination(24890U);
    msg.setDestinationEntity(71U);
    msg.control_src = 30321U;
    msg.control_ent = 74U;
    msg.timeout = 0.5679740521103785;
    msg.loiter_radius = 0.9666056464027778;
    msg.altitude_interval = 0.4011499328590721;

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
    msg.setTimeStamp(0.08450425546323759);
    msg.setSource(58742U);
    msg.setSourceEntity(231U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(66U);
    msg.flags = 140U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39140240973498786;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6033227781318082;
    tmp_msg_1.z_units = 99U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.46951782644711937;
    msg.lon = 0.19630522638486525;
    msg.radius = 0.2355460422503981;

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
    msg.setTimeStamp(0.044492194624361714);
    msg.setSource(60742U);
    msg.setSourceEntity(58U);
    msg.setDestination(1737U);
    msg.setDestinationEntity(122U);
    msg.flags = 201U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9491199170957624;
    tmp_msg_0.speed_units = 46U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2319575887162788;
    tmp_msg_1.z_units = 244U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5850866728730493;
    msg.lon = 0.8928237363691478;
    msg.radius = 0.5053233109334915;

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
    msg.setTimeStamp(0.51286249817958);
    msg.setSource(9961U);
    msg.setSourceEntity(38U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(248U);
    msg.flags = 5U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6738280462746588;
    tmp_msg_0.speed_units = 243U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9585546220736764;
    tmp_msg_1.z_units = 33U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.04525954350903738;
    msg.lon = 0.5458291880959225;
    msg.radius = 0.5310025926756505;

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
    msg.setTimeStamp(0.8787265961047427);
    msg.setSource(41505U);
    msg.setSourceEntity(254U);
    msg.setDestination(7882U);
    msg.setDestinationEntity(204U);
    msg.control_src = 6052U;
    msg.control_ent = 190U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7083840972965674;
    tmp_tmp_msg_0_0.speed_units = 192U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7546966277271977;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8166576383977883;
    tmp_msg_0.lon = 0.3078590272776398;
    tmp_msg_0.radius = 0.6230742109062215;
    msg.reference.set(tmp_msg_0);
    msg.state = 204U;
    msg.proximity = 223U;

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
    msg.setTimeStamp(0.19744487431233926);
    msg.setSource(10305U);
    msg.setSourceEntity(29U);
    msg.setDestination(53195U);
    msg.setDestinationEntity(154U);
    msg.control_src = 61641U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 5U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8514870243192612;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4155890592636624;
    tmp_tmp_msg_0_1.z_units = 46U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2720252081822401;
    tmp_msg_0.lon = 0.27183876497457204;
    tmp_msg_0.radius = 0.9143688518750626;
    msg.reference.set(tmp_msg_0);
    msg.state = 179U;
    msg.proximity = 219U;

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
    msg.setTimeStamp(0.1834527265840924);
    msg.setSource(63964U);
    msg.setSourceEntity(40U);
    msg.setDestination(60562U);
    msg.setDestinationEntity(40U);
    msg.control_src = 17701U;
    msg.control_ent = 93U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 54U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09983860909383191;
    tmp_tmp_msg_0_0.speed_units = 49U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6519450198274788;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5771819469110351;
    tmp_msg_0.lon = 0.01348358424717555;
    tmp_msg_0.radius = 0.8716684095494215;
    msg.reference.set(tmp_msg_0);
    msg.state = 122U;
    msg.proximity = 167U;

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
    msg.setTimeStamp(0.16600069812536344);
    msg.setSource(3074U);
    msg.setSourceEntity(126U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(65U);
    msg.ax_cmd = 0.6560202571703204;
    msg.ay_cmd = 0.2886812352696906;
    msg.az_cmd = 0.3372315141702663;
    msg.ax_des = 0.7253555532067127;
    msg.ay_des = 0.01864376502045295;
    msg.az_des = 0.03927106392317459;
    msg.virt_err_x = 0.44357908229378074;
    msg.virt_err_y = 0.9164194785215725;
    msg.virt_err_z = 0.030584656268932475;
    msg.surf_fdbk_x = 0.09167296086089105;
    msg.surf_fdbk_y = 0.824412022307575;
    msg.surf_fdbk_z = 0.952807194531141;
    msg.surf_unkn_x = 0.007064545537474931;
    msg.surf_unkn_y = 0.29153417917268687;
    msg.surf_unkn_z = 0.12729550281463242;
    msg.ss_x = 0.187739818400391;
    msg.ss_y = 0.9684071508776645;
    msg.ss_z = 0.45424808621139534;

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
    msg.setTimeStamp(0.6023547819645724);
    msg.setSource(18879U);
    msg.setSourceEntity(126U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(209U);
    msg.ax_cmd = 0.9003706098288533;
    msg.ay_cmd = 0.3186418305470039;
    msg.az_cmd = 0.33546291219829405;
    msg.ax_des = 0.0908896291123451;
    msg.ay_des = 0.018996502316302344;
    msg.az_des = 0.733389792767217;
    msg.virt_err_x = 0.11081346416037896;
    msg.virt_err_y = 0.13447367869384785;
    msg.virt_err_z = 0.3784335691516908;
    msg.surf_fdbk_x = 0.39943021386384836;
    msg.surf_fdbk_y = 0.7044242587242845;
    msg.surf_fdbk_z = 0.02710244994345412;
    msg.surf_unkn_x = 0.5184265125398314;
    msg.surf_unkn_y = 0.9696803184842774;
    msg.surf_unkn_z = 0.7246060008360935;
    msg.ss_x = 0.4753723908127817;
    msg.ss_y = 0.30604659175186566;
    msg.ss_z = 0.888034807995565;

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
    msg.setTimeStamp(0.29039712868834267);
    msg.setSource(6677U);
    msg.setSourceEntity(4U);
    msg.setDestination(48380U);
    msg.setDestinationEntity(194U);
    msg.ax_cmd = 0.9095862786681382;
    msg.ay_cmd = 0.44595052475941144;
    msg.az_cmd = 0.1829708178609074;
    msg.ax_des = 0.5257869594457455;
    msg.ay_des = 0.7375904508702161;
    msg.az_des = 0.18123039657541662;
    msg.virt_err_x = 0.5683423774934977;
    msg.virt_err_y = 0.13785993814904074;
    msg.virt_err_z = 0.8224121441590239;
    msg.surf_fdbk_x = 0.710956347378635;
    msg.surf_fdbk_y = 0.5035601822895633;
    msg.surf_fdbk_z = 0.40757053556147294;
    msg.surf_unkn_x = 0.8686428531802467;
    msg.surf_unkn_y = 0.2116004739380869;
    msg.surf_unkn_z = 0.3476911611081408;
    msg.ss_x = 0.36932486015055077;
    msg.ss_y = 0.8179271750831105;
    msg.ss_z = 0.7835271512010598;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZFXUWHGWMKASQPDQJMDWYLLRFECZMBRKKRLKLKHUOEFATCXPBHZKYUNJKSWAC");
    tmp_msg_0.dist = 0.941955085668562;
    tmp_msg_0.err = 0.5121818761880069;
    tmp_msg_0.ctrl_imp = 0.3567431849487499;
    tmp_msg_0.rel_dir_x = 0.8124945658146272;
    tmp_msg_0.rel_dir_y = 0.048351875507759434;
    tmp_msg_0.rel_dir_z = 0.04202329853275788;
    tmp_msg_0.err_x = 0.2535080634589699;
    tmp_msg_0.err_y = 0.5716602586766828;
    tmp_msg_0.err_z = 0.5568978695366182;
    tmp_msg_0.rf_err_x = 0.18072338378971142;
    tmp_msg_0.rf_err_y = 0.79092726201185;
    tmp_msg_0.rf_err_z = 0.9054122178073314;
    tmp_msg_0.rf_err_vx = 0.966409302900891;
    tmp_msg_0.rf_err_vy = 0.6987272378873511;
    tmp_msg_0.rf_err_vz = 0.6747364378181854;
    tmp_msg_0.ss_x = 0.2470841830116972;
    tmp_msg_0.ss_y = 0.3322957570094368;
    tmp_msg_0.ss_z = 0.6386160099028056;
    tmp_msg_0.virt_err_x = 0.5885381592232616;
    tmp_msg_0.virt_err_y = 0.3521400426752329;
    tmp_msg_0.virt_err_z = 0.38339978339670155;
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
    msg.setTimeStamp(0.6520413667285101);
    msg.setSource(5696U);
    msg.setSourceEntity(141U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(196U);
    msg.s_id.assign("WMXUTMHKBOHFZUUINXGGIEFPYNYYUBHMTMFMHDJJDLLWMLPTGHSXLDWBSUUJVSAVAECRKNDRCQVJXWTRLNBTADGSAOOWYAIFEJTCKFODZRPDWSAEPBTAFVSJBMXHYHE");
    msg.dist = 0.27463783115581164;
    msg.err = 0.3768740027269275;
    msg.ctrl_imp = 0.11783309416291221;
    msg.rel_dir_x = 0.9345743346747971;
    msg.rel_dir_y = 0.010582491906834024;
    msg.rel_dir_z = 0.29397500569056667;
    msg.err_x = 0.5134753967058457;
    msg.err_y = 0.3709772845192215;
    msg.err_z = 0.4625930791659969;
    msg.rf_err_x = 0.6265751697828911;
    msg.rf_err_y = 0.09407505851667763;
    msg.rf_err_z = 0.4843674681964093;
    msg.rf_err_vx = 0.2868315530937928;
    msg.rf_err_vy = 0.7509795120981104;
    msg.rf_err_vz = 0.4634166853057782;
    msg.ss_x = 0.054199355770426894;
    msg.ss_y = 0.4521455669266903;
    msg.ss_z = 0.29277842650069885;
    msg.virt_err_x = 0.8670247366753946;
    msg.virt_err_y = 0.08782170127220545;
    msg.virt_err_z = 0.041899958295729345;

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
    msg.setTimeStamp(0.018907101022358486);
    msg.setSource(60077U);
    msg.setSourceEntity(35U);
    msg.setDestination(19349U);
    msg.setDestinationEntity(134U);
    msg.s_id.assign("BZEYKXOQNDEFUYVTZFMWGGHKYPC");
    msg.dist = 0.7326665337148237;
    msg.err = 0.8690374747018705;
    msg.ctrl_imp = 0.40394273117270196;
    msg.rel_dir_x = 0.6796491905871772;
    msg.rel_dir_y = 0.549040747345302;
    msg.rel_dir_z = 0.1962856359335139;
    msg.err_x = 0.1931148875125288;
    msg.err_y = 0.5166160310934419;
    msg.err_z = 0.9212139228246595;
    msg.rf_err_x = 0.732641321346605;
    msg.rf_err_y = 0.7221850774062011;
    msg.rf_err_z = 0.8933586870451887;
    msg.rf_err_vx = 0.4592043558653214;
    msg.rf_err_vy = 0.49672568852835164;
    msg.rf_err_vz = 0.037587757630818786;
    msg.ss_x = 0.12736907367322914;
    msg.ss_y = 0.47581977416606214;
    msg.ss_z = 0.6400535451478473;
    msg.virt_err_x = 0.19056358687326458;
    msg.virt_err_y = 0.7096779246809698;
    msg.virt_err_z = 0.18790551460476623;

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
    msg.setTimeStamp(0.6541432088013059);
    msg.setSource(31346U);
    msg.setSourceEntity(3U);
    msg.setDestination(15866U);
    msg.setDestinationEntity(26U);
    msg.s_id.assign("ITEDWUFAKCKRGFRSMOLCRPGGIUGPNCAUGSMZSLHHHQUQMBUSFQJPXZVSVEQOZD");
    msg.dist = 0.39432856695802376;
    msg.err = 0.7348633019506133;
    msg.ctrl_imp = 0.19780069902078423;
    msg.rel_dir_x = 0.35567232006219074;
    msg.rel_dir_y = 0.23797116418067954;
    msg.rel_dir_z = 0.3500085688702601;
    msg.err_x = 0.33886945753174136;
    msg.err_y = 0.7306718118702762;
    msg.err_z = 0.8418315151472412;
    msg.rf_err_x = 0.7203085343976102;
    msg.rf_err_y = 0.5215816252017621;
    msg.rf_err_z = 0.003392113615705683;
    msg.rf_err_vx = 0.4591033812389792;
    msg.rf_err_vy = 0.32069166656500225;
    msg.rf_err_vz = 0.2207557899556375;
    msg.ss_x = 0.5663259343238893;
    msg.ss_y = 0.127858874402501;
    msg.ss_z = 0.5291831325954172;
    msg.virt_err_x = 0.010307819394137274;
    msg.virt_err_y = 0.37963040394021197;
    msg.virt_err_z = 0.2089058569304102;

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
    msg.setTimeStamp(0.4139287223762481);
    msg.setSource(60695U);
    msg.setSourceEntity(129U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(15U);
    msg.timeout = 52234U;
    msg.rpm = 0.4328635202046742;
    msg.direction = 4U;
    msg.custom.assign("BJFWPBRPFJZHOPKEXDOXGHSKNLJHGAZHHTIIOIATINQIATQASO");

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
    msg.setTimeStamp(0.5055090702806192);
    msg.setSource(4888U);
    msg.setSourceEntity(99U);
    msg.setDestination(12290U);
    msg.setDestinationEntity(234U);
    msg.timeout = 15572U;
    msg.rpm = 0.29652238842511736;
    msg.direction = 59U;
    msg.custom.assign("HFFQLDXSDRYICUVDDFBMBMVMBPGIXXOXUPMOEGMUKDEVJEHHYWJSYNYHBAWRTCPLAFKBOPECUSUAXCSWJBWCZDRSBTNOAELLWOLTTHMAZKURSJEUDRHLIHSCGFRPKNGYKWLIHSTVOKYWUNNMGKGXNCYERMPKNNDJZQTZTXXCVBQBUXIPFVYZVZIFJEOTDYKGVOSIIZ");

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
    msg.setTimeStamp(0.0381089045939943);
    msg.setSource(4563U);
    msg.setSourceEntity(39U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(60U);
    msg.timeout = 28848U;
    msg.rpm = 0.8122530060807694;
    msg.direction = 50U;
    msg.custom.assign("ZRONYNHUVMRAXGGGSTWAPHFFEPORPIDEWRQRQLJ");

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
    msg.setTimeStamp(0.15467754592369387);
    msg.setSource(12176U);
    msg.setSourceEntity(163U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(9U);
    msg.formation_name.assign("YMREFHVUDXYBHENKEYTJBZEMLBWCIXCEBNHVGJHDXYXMKLSGZDTGFWKKCQPOPTXCQZZLOKEFNNMASATYBEZBJUCRQDZYMNPHYPWPAJKPIMFEHAVFQEOVZSROYYUT");
    msg.type = 193U;
    msg.op = 121U;
    msg.group_name.assign("JXUQFUDEEBRBRYBMIGDSOHLEQELAHBYCARMRGRDHBSBVADKPPNEHLQMAGHVEXLAJUQ");
    msg.plan_id.assign("SSEZMQGIOCMJFHFWKKURNSLXNPTDLTSVYCKOZPZPQWBEIPNDLDCMGOILECGKUEIUHJMCIWHOZMHWLLJXARSADHPQPZSGVAIAFJIBXQVESBRLJZNVYSPGHARKYZZIEMOWMUNTDZFBQPKCUTEING");
    msg.description.assign("IGXORHYCKRWVSIGCHFFCONOIZHWTHWPLNEQESKCSYTNOXWGGQAGAZPUYHJQEVXBMXXZIPYJBZLOVZILDUGNOVJNMDRENAMRPXJGNPJJHRYKMJNDOUVFBFSTMZMEEUUWYZDLDDKYWSNRDDFIAFXUUIHTWVQRBLAIZMBPQTJIYKMBGWQUEGJWKOIQFULEYCXCDFBTRRZCHCWHFTFLTAEXCLAEBGPVOB");
    msg.reference_frame = 211U;
    msg.leader_bank_lim = 0.12065073981274577;
    msg.leader_speed_min = 0.13125112593770427;
    msg.leader_speed_max = 0.14197154110268384;
    msg.leader_alt_min = 0.4982553223558951;
    msg.leader_alt_max = 0.1315160935139026;
    msg.pos_sim_err_lim = 0.4447727385800214;
    msg.pos_sim_err_wrn = 0.2241741936502476;
    msg.pos_sim_err_timeout = 22576U;
    msg.converg_max = 0.7632388858724813;
    msg.converg_timeout = 49882U;
    msg.comms_timeout = 39153U;
    msg.turb_lim = 0.6329774806213351;
    msg.custom.assign("ENQPVVUVDBGCIOKJYECOVYIFBOSRRC");

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
    msg.setTimeStamp(0.7188352093431817);
    msg.setSource(26565U);
    msg.setSourceEntity(56U);
    msg.setDestination(57121U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("EWLGPUZNXPDUIDWPTMRDERFHFTWGNITGMDPKKPVXNRMBYVDWJXSMJSAZHARXMDMBSEYHBAUQQBGTTWVMNXLMKGOWFOCCTUCUGSEDCVIDFJQYKXJOEYLBTOUOQSUJEZOOHXVMZ");
    msg.type = 85U;
    msg.op = 198U;
    msg.group_name.assign("GCOVGBHIZDOEJQCBPAXDKSQHZVATULVZCIJHYTABZVAGTSNYZMJXGCQWMUCHNBLACBRYANCDSAYLFVVXAODVGVYYWGJQ");
    msg.plan_id.assign("XXGCKGMJNENUFLRCUSASBZWYHAMHDQVSGLNAUTNTITOBZXRBOBTFTXPLUZRDUHJUYNFVHYHZILQFZCPOAXWLJZQVROYADLHDZZSZXNPPIUECKBJVANYEPIIEMIKKBGMBTKROBMSOXRVROCCDEDGPCDFFEGEYWHXKIOGGYYQMQEMWBVGJXS");
    msg.description.assign("PHNWCVNAXWRSWIMJLQWUCRFDZGLMUSLIFMFVBIRPGYUYXMBGDSMOQKYPFTJDJTVSCLXDIGITUYIEFLWNQYIKQDXUKHPXBDWVAZEANUEOIRZSTPBMEZKVQOVVENJVSWRHENZAKRXAFZLJLNTABLBYHOTSMNMDCWMGXXJYYULCVKUZUHTOJCTEBOOCDHXKCJZAQHYOGVFGWAFEWHPTSAHUBPPICJSFRLQD");
    msg.reference_frame = 244U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35097U;
    tmp_msg_0.off_x = 0.3739721919495891;
    tmp_msg_0.off_y = 0.219984427223335;
    tmp_msg_0.off_z = 0.6250614321645599;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.1567639264771581;
    msg.leader_speed_min = 0.7827233100475862;
    msg.leader_speed_max = 0.48863567864771373;
    msg.leader_alt_min = 0.8934039693577257;
    msg.leader_alt_max = 0.815929954440435;
    msg.pos_sim_err_lim = 0.6299562849804387;
    msg.pos_sim_err_wrn = 0.9557675461665155;
    msg.pos_sim_err_timeout = 22384U;
    msg.converg_max = 0.37870438274852236;
    msg.converg_timeout = 7553U;
    msg.comms_timeout = 48468U;
    msg.turb_lim = 0.03726722487178202;
    msg.custom.assign("HUFNZGKRCFFPATPQOM");

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
    msg.setTimeStamp(0.4659767195347889);
    msg.setSource(37281U);
    msg.setSourceEntity(47U);
    msg.setDestination(51472U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("WQAWHYJZXOSJXYSXJMPFBEZAPOKTPGBTVXUPSQENBVXGQNYVABCJQIKDHLCFXLRKUWEYBQUEPGAZLJDSJGEUBQDXFJWOIZIBMUKUCXOYFTSMZBHOHUCRHVV");
    msg.type = 87U;
    msg.op = 98U;
    msg.group_name.assign("OLBPSUJZNUILEJRKJXXWYIBLMLBSSELVFFEEMFOXKVDXBPBMHJORCWRHKKAMXNIZJYDPZGWLUXVCHGYQEGGXBQCLTZQZKMUBVOVEARWUVORTGNROSOCPAGMGHHUQZUIJTNQFJUNOKOTRPDFSFWAGIVHTFLHNKMPEYTZQGXWACAYJYEDAZAMPPPDXQPTWGWBDHYODXNNICSCIHKMAKBYUQNBIDSDHEUIQS");
    msg.plan_id.assign("ZLNDYQUYWTDFAEJMJRLLFUFSDRBPGOFBPGCSRIEHWPYKYZWSVBQJKQKNYDFKZVTFJNHVHOQRCYKMVAAGIGTAERJQHOZLKKTGAMGNWRAJPPIUNUORQBLCFMBSBHNDL");
    msg.description.assign("LBMHZBKYTWNMMQAKJCUTLJPOVFFORQUJEMDWLNOJGABLKGSQZYWASORJITLDYNDHWIZGCDIKQNWXNFBFTQGEEDPTLFKACDEHJVCRISRDHXZDCBSPMEGSLOENEYJGHXIBFUFBEAINRNVRHQWUOUSSJCSYNTFITGZKOUAOTGQYTAVMUITWBPLPPMQXVVXCFUWZCHQVJHBXLKRNMUHRKARCHDKXYDXYYZPACVOFKPVWVQJESXPGZAIUG");
    msg.reference_frame = 149U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33769U;
    tmp_msg_0.off_x = 0.7974968055181474;
    tmp_msg_0.off_y = 0.8019899518974664;
    tmp_msg_0.off_z = 0.49781413037234024;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9118409204110659;
    msg.leader_speed_min = 0.04369988160506433;
    msg.leader_speed_max = 0.48009980379199113;
    msg.leader_alt_min = 0.011083786263170525;
    msg.leader_alt_max = 0.859349645472448;
    msg.pos_sim_err_lim = 0.20859629310123073;
    msg.pos_sim_err_wrn = 0.07674033601805341;
    msg.pos_sim_err_timeout = 60434U;
    msg.converg_max = 0.8544437456389053;
    msg.converg_timeout = 43848U;
    msg.comms_timeout = 35195U;
    msg.turb_lim = 0.6701636494287159;
    msg.custom.assign("KGMMXYNTPNBBFMJJGHVSTFDXPBHRSZHRNUJEUIXL");

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
    msg.setTimeStamp(0.37228616522322033);
    msg.setSource(48152U);
    msg.setSourceEntity(182U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(2U);
    msg.timeout = 8504U;
    msg.lat = 0.6944243282500795;
    msg.lon = 0.8096538435049364;
    msg.z = 0.7938571055558046;
    msg.z_units = 224U;
    msg.speed = 0.8979455484218035;
    msg.speed_units = 105U;
    msg.custom.assign("HXEXWFMQWVQVUODZBXLHMFIBRUPRUWICGOUVXKIYPNGOERFTEANLHJDRCRKFBJLLJCCTNSQSAXIAYTZORUAYWDSDFKAMCBNGNTCLPHCYDLPYOISU");

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
    msg.setTimeStamp(0.9751995351789229);
    msg.setSource(30488U);
    msg.setSourceEntity(17U);
    msg.setDestination(13292U);
    msg.setDestinationEntity(204U);
    msg.timeout = 40173U;
    msg.lat = 0.07689707817211144;
    msg.lon = 0.358006428304938;
    msg.z = 0.8982634367956994;
    msg.z_units = 128U;
    msg.speed = 0.7352465950011969;
    msg.speed_units = 45U;
    msg.custom.assign("CNYVZSRBJCVUXXXMQXYPAUFZITGOACPINTYMYKRGKLHWPFG");

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
    msg.setTimeStamp(0.14649017564910594);
    msg.setSource(31593U);
    msg.setSourceEntity(207U);
    msg.setDestination(28397U);
    msg.setDestinationEntity(228U);
    msg.timeout = 12890U;
    msg.lat = 0.6260182904208313;
    msg.lon = 0.21403008049264238;
    msg.z = 0.9483048274318754;
    msg.z_units = 40U;
    msg.speed = 0.7488779486670493;
    msg.speed_units = 154U;
    msg.custom.assign("RUZXSPQDXLCFRNPDUAXTQCPUAYGPTJWYEYFVEMWRLZQNQRCCQOIUZPSGWVNKLHKUQLFRAGVHHVEBKTWSNYUJCDKHZGYFFWIFXNRFSCPBWAZDLMOGIZKP");

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
    msg.setTimeStamp(0.5642061746702159);
    msg.setSource(33747U);
    msg.setSourceEntity(12U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(30U);
    msg.timeout = 40022U;
    msg.lat = 0.4787542699010222;
    msg.lon = 0.5129636542058912;
    msg.z = 0.2520291716915837;
    msg.z_units = 57U;
    msg.speed = 0.31206761187289667;
    msg.speed_units = 149U;
    msg.custom.assign("VUAFXUHFUHYGPCZNEHBDBCKPLFGIXZGZVXVOMQPTZIPTYJRELAOPKTDONMZZDHSNUCJZRNASYSIWTJTFFMQERUVQCYVZHLXVKMLMDBZREMQUQJKANACWNHTWXQQWDCPUIGEQHSRGAGFAGGYICPDSJDOGXNNLOVRKWZTSIBVEULWYDMVDWTFYBGHSEBBIIJVOUPTOLWQTYCRPYFKQCRE");

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
    msg.setTimeStamp(0.4676186788955561);
    msg.setSource(44682U);
    msg.setSourceEntity(233U);
    msg.setDestination(32298U);
    msg.setDestinationEntity(163U);
    msg.timeout = 32349U;
    msg.lat = 0.01606877691745423;
    msg.lon = 0.007485442736250181;
    msg.z = 0.13212064512735033;
    msg.z_units = 88U;
    msg.speed = 0.8885139273594554;
    msg.speed_units = 215U;
    msg.custom.assign("KSSKDUXRXQYBEVBKKCYLFGWAQAGETJFICXEFVSFMJABJFCFBYLONPZZVHVLZWSVJKJNWDMSDUYTHBKXIOGIMNPOIQQVGQLTAECBJVHHMJXUWSELODLQKRDMZBMCPMQUUGNXUCCMYPCNTLDJWIWITIRFKDWHJQDNALUFOHZHHYIPTJKWFNVAORRIEAEEWAPGZRGOSBAPUDBRCSXVMEQZ");

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
    msg.setTimeStamp(0.040635276350581395);
    msg.setSource(52764U);
    msg.setSourceEntity(206U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(22U);
    msg.timeout = 27064U;
    msg.lat = 0.13940795862864386;
    msg.lon = 0.42643984896186793;
    msg.z = 0.021105662357350452;
    msg.z_units = 30U;
    msg.speed = 0.5374671620363305;
    msg.speed_units = 135U;
    msg.custom.assign("IMPXUVDSPESXJTSWZBQSQCZRPHXKXUWHEMCOZOXGPXLDYAWHFHVAVOMMPASBAEMENAJCDMJTRNLQEGLXTZYPRVBANIENZNKOZRBGA");

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
    msg.setTimeStamp(0.5660731235870383);
    msg.setSource(52730U);
    msg.setSourceEntity(175U);
    msg.setDestination(40474U);
    msg.setDestinationEntity(84U);
    msg.arrival_time = 0.4000878986030455;
    msg.lat = 0.5430532595341903;
    msg.lon = 0.10695014204031483;
    msg.z = 0.05193379414066579;
    msg.z_units = 108U;
    msg.travel_z = 0.20858031616352513;
    msg.travel_z_units = 87U;
    msg.delayed = 13U;

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
    msg.setTimeStamp(0.8676417478618459);
    msg.setSource(53729U);
    msg.setSourceEntity(238U);
    msg.setDestination(20855U);
    msg.setDestinationEntity(114U);
    msg.arrival_time = 0.08274490991904115;
    msg.lat = 0.30549245036603534;
    msg.lon = 0.38053354934777783;
    msg.z = 0.1515572184138424;
    msg.z_units = 210U;
    msg.travel_z = 0.23800120118880908;
    msg.travel_z_units = 212U;
    msg.delayed = 108U;

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
    msg.setTimeStamp(0.9627910875054043);
    msg.setSource(36556U);
    msg.setSourceEntity(28U);
    msg.setDestination(59180U);
    msg.setDestinationEntity(160U);
    msg.arrival_time = 0.4392382620518702;
    msg.lat = 0.7739349985636591;
    msg.lon = 0.5324970621976093;
    msg.z = 0.6661914145644491;
    msg.z_units = 28U;
    msg.travel_z = 0.7412188453368547;
    msg.travel_z_units = 3U;
    msg.delayed = 59U;

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
    msg.setTimeStamp(0.9051039717668807);
    msg.setSource(11922U);
    msg.setSourceEntity(226U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.12062253008980794;
    msg.lon = 0.6097130749625478;
    msg.z = 0.5028181019848378;
    msg.z_units = 235U;
    msg.speed = 0.7096592688345451;
    msg.speed_units = 69U;
    msg.bearing = 0.8840421640173938;
    msg.cross_angle = 0.21125658706503403;
    msg.width = 0.26428712078834293;
    msg.length = 0.8304973011095399;
    msg.coff = 231U;
    msg.angaperture = 0.6272018236848741;
    msg.range = 45248U;
    msg.overlap = 102U;
    msg.flags = 163U;
    msg.custom.assign("LMOFNQJAGTUIHDAMNPELEWABZWXZUWMRLSIYSRFDTTBONQXYGDJCJBFTJINHTCCZCRUALMTYPVDFFNWIJHKHCIPZ");

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
    msg.setTimeStamp(0.004526426267964401);
    msg.setSource(18464U);
    msg.setSourceEntity(85U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.3034314267907118;
    msg.lon = 0.035529314575816984;
    msg.z = 0.9959513918652527;
    msg.z_units = 42U;
    msg.speed = 0.8687661212789533;
    msg.speed_units = 182U;
    msg.bearing = 0.26166953270076565;
    msg.cross_angle = 0.14792288734505343;
    msg.width = 0.00098866582305146;
    msg.length = 0.6055912693228814;
    msg.coff = 61U;
    msg.angaperture = 0.8279360097895867;
    msg.range = 20307U;
    msg.overlap = 181U;
    msg.flags = 165U;
    msg.custom.assign("FJQFYNUWOUXDOFYALPAWJVNNOMWSHMQEFYYMAFQSNTFDAPVFCBTQZSHNIWFEEUXRXPHNNZSOMSXBMCORREVGLZCTLEJHYTAQTBRVORGJHMXSBUKYHKTGSQBGPFIWDVJGZOANBXDMWCMTLDGRIJPUPRKCTSDRUYHKGKYOFPEVBLCIUQXDEZSJASZTUXLVZCINWKBZIARAGLCYPXWUAILLHHUPGGTEKNZ");

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
    msg.setTimeStamp(0.6597517425458557);
    msg.setSource(47664U);
    msg.setSourceEntity(47U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.8265826608432454;
    msg.lon = 0.6681115246112506;
    msg.z = 0.9678480797383231;
    msg.z_units = 104U;
    msg.speed = 0.3085570976917379;
    msg.speed_units = 75U;
    msg.bearing = 0.9800907810986325;
    msg.cross_angle = 0.7689635284979908;
    msg.width = 0.2526986735749799;
    msg.length = 0.2207371418602998;
    msg.coff = 118U;
    msg.angaperture = 0.09849178589236562;
    msg.range = 22166U;
    msg.overlap = 202U;
    msg.flags = 132U;
    msg.custom.assign("UVJLJDHSMFZYCBRTSTZYWYZCTHVVUUGIDLOEIHHYSMTRLKGPQQCNARWPULBCFYEKWEIJXNUWFJISAFSVAAOEQURB");

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
    msg.setTimeStamp(0.5320162961656332);
    msg.setSource(53956U);
    msg.setSourceEntity(51U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(72U);
    msg.timeout = 52213U;
    msg.lat = 0.938625572563525;
    msg.lon = 0.25912663836594874;
    msg.z = 0.05736580658863821;
    msg.z_units = 88U;
    msg.speed = 0.6689002014389565;
    msg.speed_units = 249U;
    msg.syringe0 = 166U;
    msg.syringe1 = 86U;
    msg.syringe2 = 212U;
    msg.custom.assign("LJPZRSXMYPMXIRBEYHEKTXHHCYLDUQGQFERVQNCUWGVIMBOWLJWLQSYVYSCVACCFLNGOQJXIBIRERMAFOAHCHFBMMLAKHYWTDAPOTGSCVZIWAUONZPULJNVOKQNUJKSIFKDNJORYDPJKMYLONPZTBNBGWVDETXYBRIUXASXQHDNROFMKIBUEDOHMUXKUICGFBCJHPDQNKGZVTAHAWTFQAGUVJZZVEIWLBKZLGMWZSR");

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
    msg.setTimeStamp(0.06796350019054043);
    msg.setSource(9039U);
    msg.setSourceEntity(48U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(109U);
    msg.timeout = 28608U;
    msg.lat = 0.8797920031346277;
    msg.lon = 0.04804473586749525;
    msg.z = 0.7605469750891767;
    msg.z_units = 30U;
    msg.speed = 0.5446311555977614;
    msg.speed_units = 216U;
    msg.syringe0 = 15U;
    msg.syringe1 = 8U;
    msg.syringe2 = 145U;
    msg.custom.assign("IMAEKBZVRQHEIWIRXNGOLWNEU");

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
    msg.setTimeStamp(0.5868772769424186);
    msg.setSource(61035U);
    msg.setSourceEntity(243U);
    msg.setDestination(48699U);
    msg.setDestinationEntity(101U);
    msg.timeout = 5077U;
    msg.lat = 0.495379492509042;
    msg.lon = 0.00906292102469064;
    msg.z = 0.4300700700778115;
    msg.z_units = 193U;
    msg.speed = 0.17780574121404358;
    msg.speed_units = 203U;
    msg.syringe0 = 245U;
    msg.syringe1 = 1U;
    msg.syringe2 = 75U;
    msg.custom.assign("RSXTKVWFKKLASGBZJWYDUGJOVQAOIXILOYPAJEAGTAZRSHVOFOEBMCCOAJTQVIQEROLXGWPLMUXAXJXYHIXDKAMTLYQVLWUPANXNLGKGNSPMYKYNIIWMECWWEHIMMDNZJJIPLZRODNKHFUGTZOBJQNVWNSHGFUPCRFCVPXILSYTXYKECCFWAD");

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
    msg.setTimeStamp(0.9674211585357974);
    msg.setSource(1102U);
    msg.setSourceEntity(155U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.05303145592140912);
    msg.setSource(884U);
    msg.setSourceEntity(240U);
    msg.setDestination(25407U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.8735422606676138);
    msg.setSource(3140U);
    msg.setSourceEntity(194U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.8172125879386687);
    msg.setSource(51188U);
    msg.setSourceEntity(38U);
    msg.setDestination(48839U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.7046643048245355;
    msg.lon = 0.21417682916959246;
    msg.z = 0.2607085210707215;
    msg.z_units = 33U;
    msg.speed = 0.7327415619632703;
    msg.speed_units = 165U;
    msg.takeoff_pitch = 0.22610191209275343;
    msg.custom.assign("NOWXINIDBGQVOPQAWLOAWKDSMMMEQVBOFCWADZZ");

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
    msg.setTimeStamp(0.7724058889292887);
    msg.setSource(34874U);
    msg.setSourceEntity(8U);
    msg.setDestination(55355U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.7447387272323418;
    msg.lon = 0.017585177249066608;
    msg.z = 0.13763839603145278;
    msg.z_units = 177U;
    msg.speed = 0.2900521259624059;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.5721625829767847;
    msg.custom.assign("GCHFFKVTGOHVSEDCPJTNLJLCUZGMXKRQZSVMXGKFWRRBGMULMNM");

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
    msg.setTimeStamp(0.07047925381725817);
    msg.setSource(37304U);
    msg.setSourceEntity(179U);
    msg.setDestination(17384U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.07877764674314358;
    msg.lon = 0.0286480280416338;
    msg.z = 0.05017764179986195;
    msg.z_units = 101U;
    msg.speed = 0.31586714590794707;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.13816418883794757;
    msg.custom.assign("RURALANMNELLDNFBRPSNEQQROWEWNEEDOQVAWKTDUASMKLXWXHCNBQFVTYHGKTIBKJADTZVCVBYPYODEJUVTKZLYBYIWDOFLPFDWRJZDRSIGLKXDRJPFCSSEOFXGUGYQTWNKLPXIVINEGTZSUUHYCLJNGIILZMSZVGHNIPWBXUMZSRXZFXSBEAOAUVOIVTCUIWXUQCCKYQRFOHJBMMKGJAFDAMCBZVPHTMYQCGKGJAQMJWP");

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
    msg.setTimeStamp(0.5125289129388819);
    msg.setSource(53866U);
    msg.setSourceEntity(123U);
    msg.setDestination(27524U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.5653098367922936;
    msg.lon = 0.24093893135240474;
    msg.z = 0.3907489019664837;
    msg.z_units = 21U;
    msg.speed = 0.4807967016971205;
    msg.speed_units = 197U;
    msg.abort_z = 0.015420254482745865;
    msg.bearing = 0.20204079857979795;
    msg.glide_slope = 180U;
    msg.glide_slope_alt = 0.4054405106808301;
    msg.custom.assign("POOSWHBUKKOYLDZQIZNFVKVPDMSELOIJCIBJHPHDVJYVWJQQPXPFLEEDBAASGVETHMKQXVJXFGLBOONSYUIGZHIMFZZLZNCGAWNPDICAURWGTMIBBJLYXWTXRRNAYGHIWNEHBHYCCFVJKYMIWGKZTJSMBGFKWE");

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
    msg.setTimeStamp(0.21043055214759787);
    msg.setSource(5735U);
    msg.setSourceEntity(195U);
    msg.setDestination(31835U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.33554371920306025;
    msg.lon = 0.7049601631605834;
    msg.z = 0.5826549401213789;
    msg.z_units = 27U;
    msg.speed = 0.5472813187709957;
    msg.speed_units = 46U;
    msg.abort_z = 0.9085322749741986;
    msg.bearing = 0.8765520122231699;
    msg.glide_slope = 238U;
    msg.glide_slope_alt = 0.7646534913531755;
    msg.custom.assign("RJJHJMVHLPMVYSDYNJACGFAYMVDKGMXJCRNXZOJSXGSTEHYBSFNBNDFBVAPADIROHURQDZFZPXZVKHWLWQLPITJSECURUWZDADJQQAVEEONZLCEMVYTKPPEWEPUYNXRZQGBWSMQSVMKXBFLGYHXIKBLUUOVKTICWROQJIYPMEGK");

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
    msg.setTimeStamp(0.789370704155684);
    msg.setSource(38247U);
    msg.setSourceEntity(40U);
    msg.setDestination(48993U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.6385321969231843;
    msg.lon = 0.6671657085868072;
    msg.z = 0.16339761750803738;
    msg.z_units = 169U;
    msg.speed = 0.12967836931536525;
    msg.speed_units = 84U;
    msg.abort_z = 0.37845778204163816;
    msg.bearing = 0.6974712451729884;
    msg.glide_slope = 208U;
    msg.glide_slope_alt = 0.531734211367524;
    msg.custom.assign("TISLAGYJJXNPJPQCZTGPYVIKUREVPWXPKEVMWWJRVEURYBKAGBPHUMOZIKQCLSNYJMBHBFPYXCCDBZDBISYVRFGWUDUTTMATEHSEH");

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
    msg.setTimeStamp(0.5945834410233611);
    msg.setSource(37189U);
    msg.setSourceEntity(194U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.3162927648188004;
    msg.lon = 0.8845994879853851;
    msg.speed = 0.9850566320545682;
    msg.speed_units = 221U;
    msg.limits = 171U;
    msg.max_depth = 0.7306723831092948;
    msg.min_alt = 0.469306899430306;
    msg.time_limit = 0.2405943760291852;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.47911844111102453;
    tmp_msg_0.lon = 0.3483037536820224;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GASIXDFSOVWJBGCXUCVNWDFPRPATFZKUXIRFHOZMNUXLNQOLEQUEACWRZOWAJZKRHXGSFNBLRPDJBGMGKYILCMUNWJFCBSOKRJVIRUBWENDPHBRHIPIVUQDQMMZLJWZTNBEHYZNOFFPYSFDADICKZGBMQCYTJVVEOSSYQTCHCPUKVCWQRKIKILNHZAVTSYLXXAYXQPKTUEIGMZLWHQHSBPLTEEAMXKFJTOGSJNVEAEWQPYDYM");
    msg.custom.assign("XWSNGVAVSKJXQGQPMYPCZCPFYBWTKKWYOFELJYJEUAYZLMZRORRRASZUJQJTOHSSHTXPYL");

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
    msg.setTimeStamp(0.5113052026722642);
    msg.setSource(51166U);
    msg.setSourceEntity(189U);
    msg.setDestination(25692U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.763202644964991;
    msg.lon = 0.06766056498006745;
    msg.speed = 0.9725855980743662;
    msg.speed_units = 88U;
    msg.limits = 28U;
    msg.max_depth = 0.7181855478076821;
    msg.min_alt = 0.1096343323196114;
    msg.time_limit = 0.9513980290066182;
    msg.controller.assign("PRHDCBNSYCPXHOOZFMIXJNRJLTUVGZVOFKPHZJYQPFYXBSPIEWTZAGJQXFNKRBIKFCEZROUXMILEFSOMYBMKAMEHMOEBNGOQOYBSDHPLCDANLBDTVCUUCUTZPJDNZLWGCVXNDQWQGKHYEAQTEKSSMDARQDJJTRFCVSTPVYXJLBISKHIDBYUUAQWNKLEGRDYVEVQAFXOARFISHLOVJVIKUWZPTUE");
    msg.custom.assign("BDGAPXQONVCEJYPXTOPTHTLPHNLLGINSKTWAZCWUGWSBXILZNBJAOIPGGUQQKXRKDFRFAASDHJHMXXEHUEGBUVCLSYRDBDMDOEZVXAAEFJWQDJJGMVNVVBOPMEIAQCILYVSAWKUSTRQRSFIGLNYLMCPXTFUGDGCKM");

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
    msg.setTimeStamp(0.3030669695942687);
    msg.setSource(62315U);
    msg.setSourceEntity(98U);
    msg.setDestination(63223U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.12798649166720133;
    msg.lon = 0.8338654576843023;
    msg.speed = 0.3412620764927138;
    msg.speed_units = 0U;
    msg.limits = 16U;
    msg.max_depth = 0.6214769639754429;
    msg.min_alt = 0.4606653032158079;
    msg.time_limit = 0.7210904246675893;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0158414739198679;
    tmp_msg_0.lon = 0.3279146240107973;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LFAJOPEJDRZZDKNFJBYAFHH");
    msg.custom.assign("HKSSFVORTXVNQVTOAHEYLDOZPADVSATTKUNFBIBBIASQNXWCLMKCENSZHEFLZNEQAIXLDCPJIRMFOYWXJADMCNWPXIRCUSLQDTPIYXOBLBQKJGRDIQYUUKMHHLRBZTUOEYVNNZKWECLYSUTHNWXCFENGQDHQTXWMPDRECSUGYJETBIBRKZOFHPDRAFCJIXGZVPWFEAYBRPOAOGVPMUQSOJGMLJUJPMRCDG");

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
    msg.setTimeStamp(0.13642124553251178);
    msg.setSource(48754U);
    msg.setSourceEntity(228U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(37U);
    msg.target.assign("KFPEBZKVEYIFNALBEPOCDLBQYNJVJMREKNWNIQUACKJMQJFTETOZUYSAIHDOROBYMXVHLSRTBZDXYRLLJPTLGHEWTGOAWUVNENQDDVCASURXZGTAMDKHQPYVDFHXFYCEOQFESLGXCRMBILJXTMSGVWBRJKLFWDZZOAIZPQOVNIUBFOPQHSZNHBIWYSZHVASPHINUGUUGVIRGMMCEAAMQXZKTCMIPKCDJWGRFXD");
    msg.max_speed = 0.8765573517371719;
    msg.speed_units = 167U;
    msg.lat = 0.026101108424495534;
    msg.lon = 0.14052305408963206;
    msg.z = 0.3700541434782151;
    msg.z_units = 146U;
    msg.custom.assign("OPXSCXDJSRTSITEATHQDTNVPQKMNGROUZCANQOXUIUCPZZKBKJPYXCHSOLFXSRMYNWJLMATIFBIASDTZUKAZYOSEJBYISLCIXWXZLANVVWCOZVMLHAYNCKPNMFENXTKEYMFRUGQEJWBDHUQOBOUFHRJFQUYLQKDMJJWGQZHYCCDK");

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
    msg.setTimeStamp(0.47776511257647813);
    msg.setSource(4037U);
    msg.setSourceEntity(77U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(146U);
    msg.target.assign("FUCMKBZUCZJPMGXOITUDZJDYVOGZBFIXYESGLTZJYPONTUNKZHVNLABUWHSWDAYFTCKHQOSLMF");
    msg.max_speed = 0.8410586824077199;
    msg.speed_units = 111U;
    msg.lat = 0.06805670296975608;
    msg.lon = 0.29468788767911414;
    msg.z = 0.10841248239073564;
    msg.z_units = 246U;
    msg.custom.assign("KIQIEFXHDVNTFETOEPWJNXQOIPVJVLGSCEMJASLMQRGWGXYLUGVHLUOCBKRLZMUHABALSIWYMVYPMTCFBPCDZFPKJNCGJWUHIRRFAZODXXEPFFFZSZTMLYVNXOLISQOBEBVAMKSAHDICQAWCHZMZEXEWDBOTGXUNIDTQVNKQ");

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
    msg.setTimeStamp(0.8136354668588782);
    msg.setSource(27557U);
    msg.setSourceEntity(179U);
    msg.setDestination(54182U);
    msg.setDestinationEntity(113U);
    msg.target.assign("LKVSWAGUBDQTZARKTYFONUBCLXSEVPNMJCHBPIHQWTLKPFQCEOZVRWFDRAROCWCMJLQUIRHMGWCTDGBNZSJBKPWKYCPGQIGVXYANMFDSLPDFZKVGUSYQAOHRYJUOSHTNOFQYIPMECCJNMDGMNPWV");
    msg.max_speed = 0.5384339176903876;
    msg.speed_units = 183U;
    msg.lat = 0.00024796709992569443;
    msg.lon = 0.9648779014500103;
    msg.z = 0.46278022559513865;
    msg.z_units = 133U;
    msg.custom.assign("BJKWTSWYCALEKZDEFYVYZJRHGPIHEDBEFQIHFLRZDOFMYOEURRS");

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
    msg.setTimeStamp(0.9656302626895336);
    msg.setSource(3343U);
    msg.setSourceEntity(100U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(56U);
    msg.timeout = 8474U;
    msg.lat = 0.37188357755298473;
    msg.lon = 0.6779611152367958;
    msg.speed = 0.5788419796485541;
    msg.speed_units = 138U;
    msg.custom.assign("XMVDSNZQJEUEFVVLMLCNQIYYGNSCHKBBIPNQOUAOUGLYDZUERKRJYAJGJNOOGDLHXEQLWODKGBBCSTBGFPDNAFXZXASXVRUJTBWXAPWVJGMZUPLYFFZIRPDTBVQYRWRYTIVPKYHAO");

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
    msg.setTimeStamp(0.19371596442453165);
    msg.setSource(41003U);
    msg.setSourceEntity(76U);
    msg.setDestination(11396U);
    msg.setDestinationEntity(200U);
    msg.timeout = 6172U;
    msg.lat = 0.5263235526960081;
    msg.lon = 0.45333066772758457;
    msg.speed = 0.8010951571700602;
    msg.speed_units = 238U;
    msg.custom.assign("AMQBPWYVESOZSFOEVJCQLBVHWZXNOORDRVRMXPADGPCXRYSUVECLEXXSAHDSGEPYUTHRNOQXLIOHLWIYADUBIMJQWMZXGEBQCKRUNAZEEUZLFKTDCLYIFNTJOGMUFVLGUPDG");

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
    msg.setTimeStamp(0.8621988168491969);
    msg.setSource(51599U);
    msg.setSourceEntity(63U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(192U);
    msg.timeout = 28221U;
    msg.lat = 0.32333518113988813;
    msg.lon = 0.3500284013864544;
    msg.speed = 0.6293492423084973;
    msg.speed_units = 160U;
    msg.custom.assign("BNHGSTFLYBACGXQXCDXBATDPUWIQRHKXJLJCBLURKMWMTEWBVPTAAKCYUFJVUVDHLZZGEMLIEWEYWIHKPOGLVVUAOHEDEQHKIMORPKNQFFMYJYTLHIQWSZOJXYGKSLHAYRKCNKNTJQIXRWZBPRQXGVBA");

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
    msg.setTimeStamp(0.9650542134657192);
    msg.setSource(31900U);
    msg.setSourceEntity(246U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.39891411707936786;
    msg.lon = 0.6626555404893911;
    msg.z = 0.296938962929422;
    msg.z_units = 88U;
    msg.radius = 0.27710729878462903;
    msg.duration = 34987U;
    msg.speed = 0.19179800918024437;
    msg.speed_units = 108U;
    msg.popup_period = 40367U;
    msg.popup_duration = 29344U;
    msg.flags = 67U;
    msg.custom.assign("YSILMRXETXDKXXVHUUZBQLXZDUOELZNFVRTBVLDHQONMFLPHPBLHQXDIIPZNKWBUSTSVFJTUXOJXSHKGZJKLGNUPJKUPCFJYACPQROWZIPOWSKWPBYYDICOAFHVEXPWZGIYRTMPGWMJVWRHBKQLMEJYFGAQSQEYMCAO");

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
    msg.setTimeStamp(0.8646292017972295);
    msg.setSource(24355U);
    msg.setSourceEntity(246U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6767506070915857;
    msg.lon = 0.4893807788661637;
    msg.z = 0.27605860199858545;
    msg.z_units = 150U;
    msg.radius = 0.018919478891154418;
    msg.duration = 15853U;
    msg.speed = 0.3164000967172552;
    msg.speed_units = 176U;
    msg.popup_period = 32002U;
    msg.popup_duration = 52994U;
    msg.flags = 189U;
    msg.custom.assign("AKAGHJYFLSMBTUDUQIPCBUTNOSYILNVVGTSUEKAWQRNKRONSBDIUHMKSMPZLIXWVESXFHJZIHDFMLXPOHMJCMT");

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
    msg.setTimeStamp(0.9570156769005007);
    msg.setSource(40032U);
    msg.setSourceEntity(1U);
    msg.setDestination(677U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.6325951021307746;
    msg.lon = 0.5614007563096454;
    msg.z = 0.2149486818337668;
    msg.z_units = 104U;
    msg.radius = 0.8607529666600415;
    msg.duration = 53509U;
    msg.speed = 0.3939586889856539;
    msg.speed_units = 49U;
    msg.popup_period = 5359U;
    msg.popup_duration = 53058U;
    msg.flags = 103U;
    msg.custom.assign("CZHOIFWSZVDZACCADMETHTAPQKBSPYQYLLUBJAJGVOSBEWCDWPCZUQNBHSYQLXBAFUMUGRXJBCMBVNRGOJYONPMLHACWOZBRBUMGVNXIDMEOPKYEJECWIHIIKAVQALKFDKQZERGRLCMXPUOPTUGGGXJDZZ");

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
    msg.setTimeStamp(0.4448049856720221);
    msg.setSource(60760U);
    msg.setSourceEntity(40U);
    msg.setDestination(17930U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4946713700219393);
    msg.setSource(5195U);
    msg.setSourceEntity(3U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.40533382517157235);
    msg.setSource(60188U);
    msg.setSourceEntity(227U);
    msg.setDestination(34569U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.13706938040555794);
    msg.setSource(9781U);
    msg.setSourceEntity(108U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(254U);
    msg.timeout = 34057U;
    msg.lat = 0.818214539045913;
    msg.lon = 0.6596691631773413;
    msg.z = 0.2867134989187582;
    msg.z_units = 167U;
    msg.speed = 0.7339905766112078;
    msg.speed_units = 210U;
    msg.bearing = 0.23871191440880224;
    msg.width = 0.35596709560410555;
    msg.direction = 70U;
    msg.custom.assign("JHZLVVHHWAQADRKLQIFRXTRSQMZIUEUOYSOGKXSZRQTONSGDCDXNWYWPYCDKPDICLFYPVZFRDYBETFILWHMMJTZNFXEIDYHNUSVIQJAUVEBVRCCPJJPGMWKEESOFXLHQTKGATQEPKGGEKTHUUNGMCYANUFYZ");

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
    msg.setTimeStamp(0.8761840048716627);
    msg.setSource(30825U);
    msg.setSourceEntity(252U);
    msg.setDestination(1074U);
    msg.setDestinationEntity(2U);
    msg.timeout = 4782U;
    msg.lat = 0.5525053697972424;
    msg.lon = 0.2277360097250528;
    msg.z = 0.8529922838952905;
    msg.z_units = 117U;
    msg.speed = 0.8364695387539886;
    msg.speed_units = 33U;
    msg.bearing = 0.9946302508804254;
    msg.width = 0.19274678135504153;
    msg.direction = 102U;
    msg.custom.assign("MQKTZRVDNWOTIGGFMTRSAAPJQWDRCRLOJHUKIWTGVFHATVUPJAZPEREQLMMVGNYQOMYBEYFHBLZYZVXOHGUUPCBBDLEAUNHBWKHYNMBPZBPOJHQZFLCEXANEJVHYHKEDTUIFTUXCUVSXLFQWWPXAMGCCLEUIGPMKCUSTFCKKGYTWDSVYOZ");

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
    msg.setTimeStamp(0.04270693108982038);
    msg.setSource(18629U);
    msg.setSourceEntity(139U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(7U);
    msg.timeout = 13987U;
    msg.lat = 0.6911575056126977;
    msg.lon = 0.41845644007837146;
    msg.z = 0.18328852307286803;
    msg.z_units = 1U;
    msg.speed = 0.9488900883251574;
    msg.speed_units = 242U;
    msg.bearing = 0.6474986303252382;
    msg.width = 0.4560389169160124;
    msg.direction = 228U;
    msg.custom.assign("NLZGIOMPCRDHSKNZHUKBHYUGFYHPNDNKICBOCNROPLFLFBGXTUQTBSXNOMEAHZJLMWTOSREQBRDYFGNVQDXSNRJYAZQZVUPGSKAPXFUHMOJMIMEDDWGPFRORTYKSAZVSXGQJPXAWZVFJWCKZGUDMWNUVCPWTVBQHCUDXRDLWELCATCIFQJYOLBHKETNIOQXFZDWHVVJSUMQEGAYEVLKQKLRFCYTAMRTIACBTBOZYPLJPHWMUEYVJJBIESSXIK");

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
    msg.setTimeStamp(0.0023437950450422296);
    msg.setSource(51330U);
    msg.setSourceEntity(17U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(207U);
    msg.op_mode = 31U;
    msg.error_count = 163U;
    msg.error_ents.assign("HAWLWDMRHSQJMYUQBZIYIBTOMAEETINJRVTQJDGCEYYCAMHONPKFMVPESXQDUFXQZUBQNWKXZKHGREHXVJWLNPOCKSHYYNPIHZTGIJYVWZUCPCZOEFQPIRNSSLWXXXYKMEBHXMCTIDPUPFWAFAGHNAGBFLFGFATWWDNCWYDLSULVZAJKTNBRTCTRQKACRRVDBQAXKRDYOVJZBECFIVBGSPUJDSLIXEJIUTMNGVKBKUOLLRS");
    msg.maneuver_type = 17102U;
    msg.maneuver_stime = 0.281376321467538;
    msg.maneuver_eta = 5810U;
    msg.control_loops = 1219775315U;
    msg.flags = 12U;
    msg.last_error.assign("RDIYMADBUQBNSDUVAAHXWNWIPRFONRIAXRHJMBNKJBRFZPCHVZJSKXBADPGNCQZLGEIXTJTCUSOLYWIIRQHNVHHQNGMZEXYWVQLPETPYHGVOTLVQUKTHYYNGVIZAWFWLZXJXPMBSTXHQHJZFEDMIUWCFTASQIOJGDLMMMXEKBTLUKCKYOVILMUQKKLFXPJGUKSZEOACODSPEDWNYSNFBZDRTCYOJEYUFWFLRAOZPDPVRSB");
    msg.last_error_time = 0.292958407154841;

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
    msg.setTimeStamp(0.8485986459087614);
    msg.setSource(62534U);
    msg.setSourceEntity(200U);
    msg.setDestination(1195U);
    msg.setDestinationEntity(83U);
    msg.op_mode = 150U;
    msg.error_count = 253U;
    msg.error_ents.assign("WPYOGYCCEBDSCOWTJUFNLULVKZJIDKGVGGPVHRUFZZZIVSUSCLDOXFTQKYLXWKRTXYGKMFAHEMPTOFAIXUQYZWUJBSMTOAGBQECWJCHHAFHMNXLQABAGRSXTDFCMWNJSTRYFLVPMJPCUROENZAGPUBCQJKBFRDDZPIHQEMMDRCMDQXHLTJIZLBXUKDADENWYNNQUWOONHYLRIZGIARLVOFSHVEXIHKTSBKNRKIESBESVQVIYNGMAJ");
    msg.maneuver_type = 5716U;
    msg.maneuver_stime = 0.2577581153355696;
    msg.maneuver_eta = 55527U;
    msg.control_loops = 1958189362U;
    msg.flags = 79U;
    msg.last_error.assign("KUFKFPZWSFGQULMRMFZSXVQQDXUTJBNETWNWOWDYCUMQAYDTLMIGFVRBDJILHCZAMYGNBVQZFYVDVDSBNZYARRVCAYJEBYRXBMLCTXLHPEKTPGOCFLZCDPPTUHTISBRHAVUICJSADCJRMFUWMKPECYKFIESTOHQAZWSRUVPZXIEERPCZOELQZJJAEGQSVHIMBKNHNILYKGOYGUHNDUQGKVWXONXOLEAHPDJXG");
    msg.last_error_time = 0.9795590523585943;

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
    msg.setTimeStamp(0.599705436111165);
    msg.setSource(7847U);
    msg.setSourceEntity(95U);
    msg.setDestination(49538U);
    msg.setDestinationEntity(155U);
    msg.op_mode = 80U;
    msg.error_count = 202U;
    msg.error_ents.assign("XCUIYWRAUXOMIURLFSACFJPEXPQJAAMRICTZBDRWRPDYOEIQKMKICIOH");
    msg.maneuver_type = 19512U;
    msg.maneuver_stime = 0.6419424591039706;
    msg.maneuver_eta = 28525U;
    msg.control_loops = 3242944799U;
    msg.flags = 234U;
    msg.last_error.assign("XVECXKYXKDLOYUDMVTJZPAWVUIFLIHFSCETZFDVFNWTUFFWBUESAEZRODHXQCYKIQGOENPTHVVURCKGSDWDCHCMVXBOPKTTRZROV");
    msg.last_error_time = 0.3322435734815702;

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
    msg.setTimeStamp(0.3725074080436164);
    msg.setSource(26943U);
    msg.setSourceEntity(23U);
    msg.setDestination(24603U);
    msg.setDestinationEntity(176U);
    msg.type = 71U;
    msg.request_id = 41798U;
    msg.command = 55U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8197957359777185;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 20722U;
    tmp_msg_0.custom.assign("LZPZNWIXIGBXNXCQMQXAOSHCOOSCZDHNSAKFHHYGMNNIEEBTKFUHVQCHXVZW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45213U;
    msg.info.assign("FRRZGXWZDAVADHPQDEUDACLHQLHPIFIRNEPQWVCIROLOSOUOOBEZCAPMVDHJBUGYAKWVEGZKUOXTFIHQWYIGSJTHBWKWUSIAWFWAWSGFLTYKODCXNDMGPFMRJKUEUQBTXXIVKJSILBSYYTHZBSPRCZQLDMOJTADDSMKRPLVBZXMLQLQTKRNJNZENEWGARTJFSUXJQGXKNVTPKIMLQENYAVMBYYZTPVHMCOCSHXBRXOUYY");

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
    msg.setTimeStamp(0.8147979787731814);
    msg.setSource(59870U);
    msg.setSourceEntity(170U);
    msg.setDestination(57572U);
    msg.setDestinationEntity(40U);
    msg.type = 249U;
    msg.request_id = 27460U;
    msg.command = 66U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.6210873520763827;
    tmp_msg_0.lon = 0.6645495774478815;
    tmp_msg_0.z = 0.811927739952814;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.radius = 0.533530495273284;
    tmp_msg_0.duration = 22486U;
    tmp_msg_0.speed = 0.4728557434491448;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.popup_period = 25517U;
    tmp_msg_0.popup_duration = 2643U;
    tmp_msg_0.flags = 62U;
    tmp_msg_0.custom.assign("OQSWPFEHNXKEUYDWRXJSKIMZLYTXQNBCAYDCJITKOOCLBJVTLGSAEPDIJJALVEXRVMTNMHGHGRLSYXRAWZRCRQMMELZBJHXPYFBPVPGQKDPQPFQTDCZEPNOICIZKIXHVJCYHYRWKKVWHLFWIKXQVIPABTOV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24566U;
    msg.info.assign("LDEPFRCFGDGPVFBGAKHKHWUCKBWHVYNQZPUMYTEWZZSDMUMKCEAHMQIBRSWTHLMYILVKNHROMWZZPCBQKVXYCJDBJTQNUPSAUSFYQKDMQ");

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
    msg.setTimeStamp(0.570199722560772);
    msg.setSource(3141U);
    msg.setSourceEntity(4U);
    msg.setDestination(26474U);
    msg.setDestinationEntity(122U);
    msg.type = 234U;
    msg.request_id = 1451U;
    msg.command = 11U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 65427U;
    tmp_msg_0.lat = 0.9812362331700686;
    tmp_msg_0.lon = 0.7836472231842939;
    tmp_msg_0.z = 0.3593637865333035;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.speed = 0.028150905269105464;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.bearing = 0.07751105726684049;
    tmp_msg_0.cross_angle = 0.3658853328848971;
    tmp_msg_0.width = 0.5141978022082201;
    tmp_msg_0.length = 0.7550970490579568;
    tmp_msg_0.hstep = 0.03976232672256086;
    tmp_msg_0.coff = 143U;
    tmp_msg_0.alternation = 32U;
    tmp_msg_0.flags = 114U;
    tmp_msg_0.custom.assign("FXSPZLQTAQISVTYHNAWNWNJVZFQTRGWOANBRROLMSRIGVDHWWJVUKTHSJHNXXPFDQICRHRBFVFCGXXEXDDTPRZVJSPZJDEOBUMMQONTBMIDABRUEKUSKEHZFWEEGJMDCGVCYRLZCVGPYAKLCLBHQLIHUQXJFTFDSBZPKPPVPAGGIWCOYTYXKUVFBEMNUBACZQTHGXUOAUUXEJLMTNIYZWLOAEFNJSQYNWIZILODIWLOSOGKYH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51908U;
    msg.info.assign("PVZGJASYVVFVYAZWIFLXNAZQRYJXXQGHIHIPJMOMDVRSWFJLBDLIIDRVYAGBFELSGXSOVPEFQTMJKPGWUPZVDZUDQURHTEFPITKODHHBOIEKMCXUOHWCUYCFXETNJIBWDUEROXRKBLXNNCMRHV");

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
    msg.setTimeStamp(0.0033035934072299655);
    msg.setSource(29270U);
    msg.setSourceEntity(67U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(191U);
    msg.command = 49U;
    msg.entities.assign("JWRNWDACLAWAUCENNQVFLKNOXVESQKVPSJIXDXQFZIMCTGFAKEYZZITFSPMVEYSCBYKHSXVMZDBZKAZXYUOSEMATOGGONFYWEULOUGRWJDXQLBQMUFWPJUDUXBIUJNRSAMFSDONBAQRVZLJFJVHBTBMEQLCEPBLYTIGWWHGWKCZHHLKUECIQECCRXOIT");

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
    msg.setTimeStamp(0.38052911982417614);
    msg.setSource(20314U);
    msg.setSourceEntity(25U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(205U);
    msg.command = 54U;
    msg.entities.assign("VFVSUBMJFQWECNDMZXTIXOAGZUXAGGDMPUEGOIHEOEBNBWRVYUAVHRRQGQEEFJBDKMFDTSBTVDOCSLRLNIKZEGVCLSHUYYYMKTXSNLXNQTDAYSBULIPOICKANCOPMNKOQRONACHZFDGFPUEZLGSKOEVABFYAQZXFPBCRVVAHYNMQUZRRLSWCQZITBHYDXIQWCWJTNMQJTVSPJKMZTKLPGKIGADRXROCBXHHLF");

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
    msg.setTimeStamp(0.9833832482923159);
    msg.setSource(31697U);
    msg.setSourceEntity(159U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(151U);
    msg.command = 119U;
    msg.entities.assign("MVXGSMKIUZMRHWVUKNLSEYBUTCNESSPLXXOVYJLGPYATGHCJRQQWJXZXAVEETJMNKLHHDIDDQQYDWNROTFMYSUYTLXREEOFJHWUNHWGSOCUPYXMQPAQRHRTCIPAABULPIZYAHWSYFIPHDGBMPJPFGGLFEIKIFOJQQVEFEWAVIIKMFOURZRLFKVJZOZDNVTVTZGMQKLGOESMKAWJBBBPZBXKYCKNJAZ");

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
    msg.setTimeStamp(0.6303994501819296);
    msg.setSource(16479U);
    msg.setSourceEntity(6U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(167U);
    msg.mcount = 158U;
    msg.mnames.assign("KVSRQUTRTPJADEOMDTVEOJUUWXCIYYAWNLCFPKQWADMFSJYHVWPKMPDCFSNBQHYXDXBKHSYIULZONF");
    msg.ecount = 193U;
    msg.enames.assign("EOVPFUPRIDUQQCOLTJBIZWAGHWDVUZEABHPZMKPIKYMIXGORJRKOCFYLXPBBBVUIHFDSYJJWGCARGIHZGVOEMXSTPYAROQUEYNYHIDGZQLHHLXQQFQDJEXKXSVTCJVSIVWMFCZAFAYNNWDVMSIFGJFHJLWEGGWASPCNKMDNLROKETQTBPDXERHMUWJNCNTTLADALCRUSZXLVYUMKRVNZTQPAGBUNPMOKYBKOMNXQEESYIRLOHJC");
    msg.ccount = 86U;
    msg.cnames.assign("MITTIVUCYLAWCAFLSOFCZWBHDKFRKZIBAVELBFPDPERTUNZRNSVKRUOTFJOFLGHPRJBXYVLCSMTKQMWHCNOXPRYJKTNPIDOJPLPVNZR");
    msg.last_error.assign("EVKNLSUTPSMHUWHBGULOHLMEJPRYCRKIYOMLUPHAZNK");
    msg.last_error_time = 0.5637581705645037;

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
    msg.setTimeStamp(0.7459284346952484);
    msg.setSource(40359U);
    msg.setSourceEntity(40U);
    msg.setDestination(6347U);
    msg.setDestinationEntity(10U);
    msg.mcount = 117U;
    msg.mnames.assign("AIFEJVWTZYOZYKJFMMHMXRYMNHEZVFTLNXABGXSTIWRXQGOIOZQNBTDGEPGUNHIWCBFOPSCSNMYIEBPBKMVKSDOOJQSQJEIUBWTUEOLQQDRFSWPTDZYGKYWU");
    msg.ecount = 181U;
    msg.enames.assign("WAVBBAOXILMSSSZSWCWOHDDJADFZAAMBZBEHVKYBKJCPICTVNLJYXYVQZUIEMUXGNCUS");
    msg.ccount = 191U;
    msg.cnames.assign("AKFWERCNNTHHUOMESECOLADMHLWRWFMQVDDVFGFXYGGJPFXNBCFGIKEJIUQCVQCUMOTHPAUQOXWVTLASFSZYNFQDVVBAOQYXIXNYMMTNJZINYTUSDWXBBLRRHVQTMGPBTAEYUWZQTBPW");
    msg.last_error.assign("IJHXJDSNNIKDZVTEPQLFBCTQMPPOSQQREKOCDMSJAVQTVQAQKULFEOFCLLZXKUMYJJSHKNGUZRYTUIUNSNSLFWVTPKEUWADBZYTHZVAYBWUGWCLNLMRFPFRSDOQX");
    msg.last_error_time = 0.7348421228097567;

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
    msg.setTimeStamp(0.7238812622296928);
    msg.setSource(46342U);
    msg.setSourceEntity(231U);
    msg.setDestination(62969U);
    msg.setDestinationEntity(179U);
    msg.mcount = 21U;
    msg.mnames.assign("CPWXSGSNPBOMZRSWTQIVWYUOMGHUUDUKUHJHETDPGZNZVFOXLEHIATF");
    msg.ecount = 131U;
    msg.enames.assign("LUGXQNLPBSJHYYMGAHANPWBRHOVFOABXKCPDJDYCEZMBAFZXTFMCIPXVKHCVZZECPUXWGJIWLLXDOQR");
    msg.ccount = 93U;
    msg.cnames.assign("MVTQBOGFZXHXEIMPEDQQJOCSWOEFJQKXGRSVZFTVJGMYIZIXEFKHDYUEKTKGWLVDSLJCINWDXSLJNWWQKVVMIEZOAWTNUPCQFLBQABYONKCYMUTAFGQEBIPQRPXWBVRUGVKCBIJDMYKUFWJSKAXPDLABHTQSHAHRTPLIZNFARPTNIUCXZYWKYLREOOBJBOCGDUMZMPSGTHBTOSYLMHOHZNCARXRFZVDANJMWDGCHC");
    msg.last_error.assign("DEMTMRHXTNTZZKRQDLHMBMWPBEQUKWOWHXAAPDDPCOZNRLNFJCPWPKSSOYYAPLAWDCJAFIDIQOGUUHGBLLMTJCQSGOHQEZUAOVWEXXEAOIZTFVOJGPDYIYLGTGBFHVYBHYKZFJERUQFEYXTJXQHPNXZUPKRTCZBLGCOUIVYHDKEMJMCNLJUWOMVNMAIQESEPVUASSNBIUI");
    msg.last_error_time = 0.3890206637557305;

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
    msg.setTimeStamp(0.34765103517882634);
    msg.setSource(5100U);
    msg.setSourceEntity(80U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(133U);
    msg.mask = 131U;
    msg.max_depth = 0.13238597249580752;
    msg.min_altitude = 0.448259045306415;
    msg.max_altitude = 0.7559831103750628;
    msg.min_speed = 0.13120554555259212;
    msg.max_speed = 0.6590657310564573;
    msg.max_vrate = 0.7922831598059996;
    msg.lat = 0.7532419651010713;
    msg.lon = 0.798012832030745;
    msg.orientation = 0.797451918788611;
    msg.width = 0.5910204666583909;
    msg.length = 0.19090902102021756;

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
    msg.setTimeStamp(0.09092395658103358);
    msg.setSource(15010U);
    msg.setSourceEntity(120U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(35U);
    msg.mask = 95U;
    msg.max_depth = 0.11353233892740877;
    msg.min_altitude = 0.72680854050882;
    msg.max_altitude = 0.09984500555139508;
    msg.min_speed = 0.7031288284371839;
    msg.max_speed = 0.03589559121748909;
    msg.max_vrate = 0.0023780666243763404;
    msg.lat = 0.46368054098211664;
    msg.lon = 0.8695251368211475;
    msg.orientation = 0.3452297939430746;
    msg.width = 0.912096547496926;
    msg.length = 0.6783328315364866;

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
    msg.setTimeStamp(0.34225902711670164);
    msg.setSource(15146U);
    msg.setSourceEntity(88U);
    msg.setDestination(5302U);
    msg.setDestinationEntity(167U);
    msg.mask = 146U;
    msg.max_depth = 0.3081919596653889;
    msg.min_altitude = 0.32468937584043644;
    msg.max_altitude = 0.9436409734970347;
    msg.min_speed = 0.07055832831874553;
    msg.max_speed = 0.48709607357343154;
    msg.max_vrate = 0.8926927706777804;
    msg.lat = 0.14572788578688145;
    msg.lon = 0.06471492571171467;
    msg.orientation = 0.9288215745118787;
    msg.width = 0.44085223171885934;
    msg.length = 0.49666206425564574;

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
    msg.setTimeStamp(0.18936976018948481);
    msg.setSource(8113U);
    msg.setSourceEntity(5U);
    msg.setDestination(19575U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.3494698168745415);
    msg.setSource(28160U);
    msg.setSourceEntity(239U);
    msg.setDestination(27559U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.7252522219407058);
    msg.setSource(25172U);
    msg.setSourceEntity(4U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.8898316751027158);
    msg.setSource(658U);
    msg.setSourceEntity(25U);
    msg.setDestination(23733U);
    msg.setDestinationEntity(185U);
    msg.duration = 31497U;

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
    msg.setTimeStamp(0.06248230369854535);
    msg.setSource(22477U);
    msg.setSourceEntity(66U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(97U);
    msg.duration = 56033U;

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
    msg.setTimeStamp(0.5961919225528798);
    msg.setSource(59998U);
    msg.setSourceEntity(252U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(153U);
    msg.duration = 2379U;

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
    msg.setTimeStamp(0.1007952131073554);
    msg.setSource(64851U);
    msg.setSourceEntity(27U);
    msg.setDestination(6886U);
    msg.setDestinationEntity(51U);
    msg.enable = 244U;
    msg.mask = 3673120415U;
    msg.scope_ref = 3590996548U;

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
    msg.setTimeStamp(0.5710629239552069);
    msg.setSource(45860U);
    msg.setSourceEntity(161U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(226U);
    msg.enable = 140U;
    msg.mask = 2743433271U;
    msg.scope_ref = 437276440U;

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
    msg.setTimeStamp(0.6849207817651903);
    msg.setSource(35165U);
    msg.setSourceEntity(254U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(209U);
    msg.enable = 31U;
    msg.mask = 2667347181U;
    msg.scope_ref = 1062880506U;

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
    msg.setTimeStamp(0.5606538393914137);
    msg.setSource(15701U);
    msg.setSourceEntity(146U);
    msg.setDestination(23956U);
    msg.setDestinationEntity(176U);
    msg.medium = 40U;

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
    msg.setTimeStamp(0.5639861030428349);
    msg.setSource(44606U);
    msg.setSourceEntity(210U);
    msg.setDestination(20250U);
    msg.setDestinationEntity(55U);
    msg.medium = 105U;

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
    msg.setTimeStamp(0.9415674180645167);
    msg.setSource(31338U);
    msg.setSourceEntity(30U);
    msg.setDestination(61797U);
    msg.setDestinationEntity(60U);
    msg.medium = 156U;

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
    msg.setTimeStamp(0.9780706830008283);
    msg.setSource(34721U);
    msg.setSourceEntity(183U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(204U);
    msg.value = 0.23132109264226808;
    msg.type = 233U;

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
    msg.setTimeStamp(0.7645030843442298);
    msg.setSource(43242U);
    msg.setSourceEntity(59U);
    msg.setDestination(52732U);
    msg.setDestinationEntity(165U);
    msg.value = 0.20372739721605604;
    msg.type = 50U;

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
    msg.setTimeStamp(0.05083543096185961);
    msg.setSource(53529U);
    msg.setSourceEntity(54U);
    msg.setDestination(13828U);
    msg.setDestinationEntity(8U);
    msg.value = 0.859873226826635;
    msg.type = 48U;

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
    msg.setTimeStamp(0.9983319604584868);
    msg.setSource(52202U);
    msg.setSourceEntity(199U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(87U);
    msg.possimerr = 0.9854174331236062;
    msg.converg = 0.8665234806372161;
    msg.turbulence = 0.19268836791880262;
    msg.possimmon = 166U;
    msg.commmon = 176U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.3953598024705659);
    msg.setSource(21167U);
    msg.setSourceEntity(35U);
    msg.setDestination(37483U);
    msg.setDestinationEntity(168U);
    msg.possimerr = 0.23900643127094745;
    msg.converg = 0.7953456809142421;
    msg.turbulence = 0.9838713186265847;
    msg.possimmon = 50U;
    msg.commmon = 85U;
    msg.convergmon = 50U;

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
    msg.setTimeStamp(0.39911366585192);
    msg.setSource(3322U);
    msg.setSourceEntity(246U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(177U);
    msg.possimerr = 0.3597439947138321;
    msg.converg = 0.45928046750119134;
    msg.turbulence = 0.3532615412274568;
    msg.possimmon = 199U;
    msg.commmon = 85U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.5793139692106005);
    msg.setSource(29196U);
    msg.setSourceEntity(212U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 78U;
    msg.mode.assign("GWHFARVKRXWJGASTIBBSBVNQKVZCYMMPSQHDUQAMGPZKKQLYJHDEXECPYWEYZZCOJKKHRHYUSLOZOWPIQGBCMSOJVVLTZZNCYNFFLMWLHAENKPTABQUFGEPZUZEMDRJRQIDLCAMSIRIGYVDKFBNEUTUDSODTNVEBPGOOIGDHGRWUQUTPCDJMVMEVXWYFQXCJVXJPSBLDSFLHGCNRIIXYNTW");

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
    msg.setTimeStamp(0.28608617489353716);
    msg.setSource(12168U);
    msg.setSourceEntity(188U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(226U);
    msg.autonomy = 22U;
    msg.mode.assign("KFWYNQSRZTSEYMHTFARJUFDGAPIOIJLSSMHWJYUKHARIOEFQCVAEJJPVBOITTNQYMVWXLVTKLZXPDVYEQAMWYBGUNQIOOUHWGTNLALZKLXXWQUOPWACGXGBNPCNRMMHCRCTEVDOGFAFBDTZGBBLQORXIETMBIWVIZRYDDCCBLJUTSFASJHLQPPEKNVFNJRPYMMWMXDUGKKCGJEYZBSIUEFHUDSCSFLDAHD");

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
    msg.setTimeStamp(0.6595207453732757);
    msg.setSource(8891U);
    msg.setSourceEntity(54U);
    msg.setDestination(37835U);
    msg.setDestinationEntity(74U);
    msg.autonomy = 205U;
    msg.mode.assign("IRDAWSZYURNZGGJSVHXPJTAWEZEWNKLZCDGHYWNRSHCGTYXRZBTMWPTKVORCPXFQCPYGBIELIVBFMQYDUHNPUJUEFTACEORUDNPRTQFZUSPTMYTMZFHYOKBQEJHKVELSKDKE");

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
    msg.setTimeStamp(0.7291117063005378);
    msg.setSource(16594U);
    msg.setSourceEntity(187U);
    msg.setDestination(48841U);
    msg.setDestinationEntity(41U);
    msg.type = 53U;
    msg.op = 77U;
    msg.possimerr = 0.1283786535587722;
    msg.converg = 0.2705051133456743;
    msg.turbulence = 0.5968176504506358;
    msg.possimmon = 11U;
    msg.commmon = 200U;
    msg.convergmon = 204U;

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
    msg.setTimeStamp(0.8974262501826212);
    msg.setSource(11380U);
    msg.setSourceEntity(171U);
    msg.setDestination(9262U);
    msg.setDestinationEntity(23U);
    msg.type = 247U;
    msg.op = 153U;
    msg.possimerr = 0.7443148866946726;
    msg.converg = 0.6912089951873874;
    msg.turbulence = 0.4386220607041008;
    msg.possimmon = 76U;
    msg.commmon = 61U;
    msg.convergmon = 127U;

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
    msg.setTimeStamp(0.8800420039911854);
    msg.setSource(2184U);
    msg.setSourceEntity(223U);
    msg.setDestination(396U);
    msg.setDestinationEntity(57U);
    msg.type = 151U;
    msg.op = 34U;
    msg.possimerr = 0.398405690804455;
    msg.converg = 0.9737185587537479;
    msg.turbulence = 0.16856418900125114;
    msg.possimmon = 151U;
    msg.commmon = 34U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.16989975966155746);
    msg.setSource(12952U);
    msg.setSourceEntity(254U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(213U);
    msg.op = 139U;
    msg.comm_interface = 179U;
    msg.period = 12184U;
    msg.sys_dst.assign("QKKJDESLNNOZDVHJHNAQCPRQZXJRKUHVFAGMXAEURYOOCEOPYSQIWMCQOQLXSURKWNZUVLSLNWELCYCYXJIUYBIYCFVROELVQPBBNJUWYBXQGNXFPXVPPVIEHADVDGKOKMBMWDJKOFMFHDVFGJYHZIJGRPKZHEZTGTSAUTCYFGKNWZKZRUBTBXMTLTAHEOSRBIGOFNAIYRSDIZNPW");

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
    msg.setTimeStamp(0.9787431337176358);
    msg.setSource(48661U);
    msg.setSourceEntity(0U);
    msg.setDestination(46049U);
    msg.setDestinationEntity(114U);
    msg.op = 169U;
    msg.comm_interface = 0U;
    msg.period = 51677U;
    msg.sys_dst.assign("DRVLNQGEWTPMHACWNHKAWFIKGTBJHWZDYLZRVOCCYYJCXLNREEDNMMAUKVAMIUGOKUWEQCZDNAROFDSRNHHFGXNBIKENKTPSNDDJQKCGJYLCQXYOLFAMTTRTWFSGKUSVBUAFPMCDWRBAECYSAXYQXXJPEBUWJGQHIXOIZAPBWGJSTJZILKIJPENZZHRZOUQO");

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
    msg.setTimeStamp(0.3800440791802351);
    msg.setSource(54368U);
    msg.setSourceEntity(174U);
    msg.setDestination(945U);
    msg.setDestinationEntity(181U);
    msg.op = 75U;
    msg.comm_interface = 210U;
    msg.period = 18428U;
    msg.sys_dst.assign("FOEWAJWWNBZUZOUYZXTVYWQYHRFULIWCIBCSUXSUGHIBZWDTVPPENPMXTNGAVOXKWDJKIRFEDMMZJVNKBAODLTYH");

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
    msg.setTimeStamp(0.1292948242473364);
    msg.setSource(18936U);
    msg.setSourceEntity(88U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(18U);
    msg.stime = 4094603759U;
    msg.latitude = 0.04168150971641005;
    msg.longitude = 0.621809093815802;
    msg.altitude = 18694U;
    msg.depth = 7208U;
    msg.heading = 25036U;
    msg.speed = -18783;
    msg.fuel = -50;
    msg.exec_state = -12;
    msg.plan_checksum = 42056U;

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
    msg.setTimeStamp(0.751131121240967);
    msg.setSource(32715U);
    msg.setSourceEntity(14U);
    msg.setDestination(44674U);
    msg.setDestinationEntity(118U);
    msg.stime = 3006254093U;
    msg.latitude = 0.6827561354001892;
    msg.longitude = 0.06295377768900212;
    msg.altitude = 16754U;
    msg.depth = 63506U;
    msg.heading = 22662U;
    msg.speed = 24330;
    msg.fuel = -117;
    msg.exec_state = 99;
    msg.plan_checksum = 34992U;

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
    msg.setTimeStamp(0.8263224622091674);
    msg.setSource(14126U);
    msg.setSourceEntity(177U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(171U);
    msg.stime = 3187670537U;
    msg.latitude = 0.6746167460643059;
    msg.longitude = 0.9938479642058424;
    msg.altitude = 29487U;
    msg.depth = 16034U;
    msg.heading = 17881U;
    msg.speed = -1670;
    msg.fuel = 35;
    msg.exec_state = -20;
    msg.plan_checksum = 11826U;

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
    msg.setTimeStamp(0.687937628315099);
    msg.setSource(64979U);
    msg.setSourceEntity(129U);
    msg.setDestination(44888U);
    msg.setDestinationEntity(80U);
    msg.req_id = 38296U;
    msg.comm_mean = 227U;
    msg.destination.assign("MKMTTUSLZWXQOSNYGSWNAAGDYZBOOXRHMDCPMIYXQVFQYVRLZIQWJBGMXSOQYGKLYXDKLPDADYZWTGHBHKBCDHGKPXZUZEVCLVWVGEGZESJBOGHGAXQQHUQRNHNNPIPEBTRSYJCCUQKBDRLIBHJMTWXIEOIVKPLRWCUCRUMIDSCVOEKSFUURAFMADKFBITRFJUNEIJTKVVSFYEYWCSWZOAEZVWTHPBNFPFJCOMDONNPJFETJM");
    msg.deadline = 0.417039781770257;
    msg.range = 0.5295349090154607;
    msg.data_mode = 34U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.9904922639622055;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ONZXOTPAQDUFEXYVHWEFDGDQTRWQOQJOFTPAYFVGUNAJPICEWYNNUMMLDBUSCVFPTZMAKTRIXSZQMGGILHEKVPBSDYDJNBWGOZEXPBWKZEJKNPXUHYHVJOJCAXKZZVIHLBSLBXECOJAGQYSF");
    const signed char tmp_msg_1[] = {-92, -95, -118, 15, 112, 69, -7, -17, 62, -51, 99, -64, -54, 114, 9, 109, -61, -17, -83, -111, 124, 102, 53, 88, -60, 102, -22, -97, -101, 1, 34, -60, 40, 75, 42, -71, -126, 49, -65, 31, 91, 121, 2, -104, -10, -31, -46, 17, 123, 83, -47, 26, 82, 81, -67, -34, -86, -96, -76, -86, -99, -35, 32, -115, 35, 87, -113, 90, -62, -28, -1, 75, 10, -2, 116, 126, 65, 79, 46, 30, -118, -42, 63, -95, -76, 122, -50, -100, 30, -11, 74, -35, -51, -90, -51, 18, 33, -89, -110, -71, -56, 104, -60, -91, -106, 62, 78, 125, -117, -4, -107, 44, 109, -26, -37, -97, 97, -69, 65, 5, 42, -43, 72, -90, 52, 72, -121, -127, -34, -42, -117, -73, 44, 63, -59, -95, 117, 30, -54, 125, 110, 68, 33, -72, -102, 98, -3, 104, -105, 53, -42, -91, -67, 114, -37, -48, -32, -11, -40, 47, -60, -81, 31, 63, 61, 83, 5, -3, 77, 4, 19, -56, 102, 109, 41, 85, -18, -108, 2, -35, 64, 14, 5, -10, 98, -125, -85, 67, -87, -83, 61, -115, -85, -110, 20, 122, 36, 123, 67, -19, -93, -112, 51, -93, 109, 23, 117, -123, -6, -44, 12, -33, -90, -127, -81, 23, -18, -89, -69, 81, 45, -5, -89, 77, 116, -33, 30, -49, -24, 72, -102, -49, -107, -20, 53, -40};
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
    msg.setTimeStamp(0.8776064049506255);
    msg.setSource(44235U);
    msg.setSourceEntity(169U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(8U);
    msg.req_id = 4477U;
    msg.comm_mean = 92U;
    msg.destination.assign("VQTCLOQVCHAWLTUVEMDZFXKAMOFARGNHNK");
    msg.deadline = 0.583225441467757;
    msg.range = 0.6526863560942886;
    msg.data_mode = 199U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 160U;
    tmp_msg_0.error.assign("VOKSOYWSBCTQOAILCLHZAJGXVZHE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GMFDAYNHFJWELKIYNDZGCRRSHDZCKVQMUPBOSMLZMYKIJRHOXRLIAKKQBRAWFAIUQPRUQLSENTTQIAZBWOUUENRYGJFSGUMDCRZZTCXXEHFYTLOMDQWUAVPJQGXPCNEKOVGXWKSPTYMXBNPSZBUDQWAYCVPXGZJLTITZHILFHOPK");
    const signed char tmp_msg_1[] = {-104, -40, -21, 122, 99, -103, -50, -98, 8, 1, 109, -84, 81, 42, 55, 95, 52, 68, -64, 12, 77, 1, -94, 40};
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
    msg.setTimeStamp(0.6468739551511589);
    msg.setSource(45077U);
    msg.setSourceEntity(41U);
    msg.setDestination(42435U);
    msg.setDestinationEntity(168U);
    msg.req_id = 649U;
    msg.comm_mean = 67U;
    msg.destination.assign("STZYJKWNSNVWQDQMVCHXBMCJVUNOYYHUAGDPUIPNXMAPMRAACUDBCRJP");
    msg.deadline = 0.2996531696302359;
    msg.range = 0.5021896990389448;
    msg.data_mode = 137U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 53U;
    tmp_msg_0.htime = 0.32841907808641435;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 67U;
    tmp_tmp_msg_0_0.htime = 0.332852528172739;
    tmp_tmp_msg_0_0.context.assign("FSQFLQQNUJZWXWIBHZVZNSZOGUVSXYPKWDSJORYFTGTWLNZDSDRHIIUABYHQWKDIYPSGWACMZCPULKPAICEQKMYHIRKRXBGPEAKYTRRCKAJLFLIUNJMEOOFLUCKJJTNONZYMKEXDRLXHTGLUBRUFOSVTMATHBDSGBH");
    tmp_tmp_msg_0_0.text.assign("MPYXVZYIPJEVZDHBICSETUMSDJNKGWYHAFNLLINJOXDTZBNXAVCAAFDRSIOEDUFSCAUTQUPAEKVUGTOXWCBZCGAZIGRVJVQNWSAVNFKNDGLQLHDMCFTZKLFKLIRAQULMIUW");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TXDRMWHEFJKUCWGONONHJUUHAMSSRMGNTJCFAARRFHCOULRWWSCEZLQLSWZAQHLKBLSDHQPMWJKCWCPYQJT");
    const signed char tmp_msg_1[] = {68, 126, 16, 31, -114, -113, 118, 10, 13, -109, -35, 100, -81, 91, -74, -118, 103, -67, 43, 13, 27, 6, -72, 2, 120, -33, -8, -112, -6, 15, 76, -99, 3, -114, -101, -77, -124, -96, 6, 50, 9, -54, -76, 24, -19, -120, -72, -80, 88, 76, 66, -37, 59, -44, -59, 125, 98, -118, -91, 4, -6, 101, 117, 13, -84, 72, 57, -117, 56, 24, -120, 36, -100, -90, 91, 116, -66, 63, 0, -9, 35, -63, 122, -30, 40, 53, 46, 18, 35, 99, -56, -127, 96, -111, -53, 66, -45, -61, -114, 1, 104, 61, 82, -124, -97, 7, 7, 7, -81, 7, -17, 57, 38, -73, 57, -43, 90, 74, 64, 37, -16, 34, -104, 25, -8, 7, 63, -128, -77, -53, -51, -49, 108, 94, 81, -122, 27, -106, 126, 63, 94, 106, 109, 50, 65, 53, -58, 109, -90, -87, 18, -76, -27, 103, -98, 14, -66, -11, 81, -119, -18, -29, 7, -41, 105, 92, -67, -97, -71, -81, 74, 18, 59, -82, -62, 123, 9, -18, -98, 9, -59, -87, -74, -51, 78, 90, 109, 116, -111, -26, -114, 9, -119, -105, -40, -112, 42, 70, 20, -90, -32, -39, 66, -127, 103, -41, -124, -10, -29, -11, -19, 0, 13, -75, -30, 124, 120, -55, -16, -70, -16, 85, -85, 121, 68, 98, 46, -37, -55, 105, -109, 61, -19, 44, 23, -79, -2, 30, 110, -40, -13, 89, -88, 108, -36, -126, 57, 100, 44};
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
    msg.setTimeStamp(0.18810679221325965);
    msg.setSource(65449U);
    msg.setSourceEntity(158U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(185U);
    msg.req_id = 48886U;
    msg.status = 0U;
    msg.range = 0.5594303758967962;
    msg.info.assign("IDRYRIGULPJTFUXQDWBHKUMZBNYDFZSZKKVOAAXDIENYVOVFPHHLPZBBNPWRCBZFWXAFHWYFAKWGESWHQTJGTIRTCNSNCQSUMVKCOQZDSNIVPXNCEJPIKCPBJEMPECMXLDFWDQFOLAIZTTWZTQSASBHKYMQLVNUJMJJLLKHZGISROJHOSAVYDCJVGXEHPAUGFLQPUYYFJEQRMUMNWQC");

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
    msg.setTimeStamp(0.8165981821429484);
    msg.setSource(24359U);
    msg.setSourceEntity(36U);
    msg.setDestination(10319U);
    msg.setDestinationEntity(85U);
    msg.req_id = 39679U;
    msg.status = 39U;
    msg.range = 0.22758118479724176;
    msg.info.assign("RSMACWPSBQWTZERYAEVKWRLJOBFKKNSBFUNIIAQGYDEFIBSQXCXSLVVGTVYGMHPSLORVOAQCNQTGYGCAUCIIJUYKNVZUOP");

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
    msg.setTimeStamp(0.058036899648457374);
    msg.setSource(6749U);
    msg.setSourceEntity(227U);
    msg.setDestination(22238U);
    msg.setDestinationEntity(163U);
    msg.req_id = 60889U;
    msg.status = 112U;
    msg.range = 0.009047203862538655;
    msg.info.assign("XDGBDVGUYIRZPTJWCTBGKRWEWFAHYPVJXZGXFPJJHHUTCMUJLNFEWMNZTELANCAHYBOKAJOCVDBNURSXIJIHDBKMSANVKDSYXKVOROZXVCCQMXSLMXQISWVULZURGTOAZJSLIRULKHPLUESXBRZQMDGPQNBCCDBFVHQIEEKQXMTDELSKPHNOIWYOWRMYODQNBLFULEIWJFBETFYCVKKDQQSAMZWOFYGANFWZYTPGIIPGECHRHUJMZP");

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
    msg.setTimeStamp(0.8155523057537393);
    msg.setSource(58104U);
    msg.setSourceEntity(9U);
    msg.setDestination(13587U);
    msg.setDestinationEntity(145U);
    msg.req_id = 31253U;
    msg.destination.assign("EVEQCPWSYQUHOYVHASTJGXQBOKS");
    msg.timeout = 0.019979914335967353;
    msg.sms_text.assign("ERMQHTMTJEONXVBAYCEWZWKKJCZYDPYDCXPEMFAQNGNLQHQXALUB");

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
    msg.setTimeStamp(0.26501706540889647);
    msg.setSource(1361U);
    msg.setSourceEntity(135U);
    msg.setDestination(59293U);
    msg.setDestinationEntity(94U);
    msg.req_id = 44030U;
    msg.destination.assign("ILPERODQIJBYPDXAJLTLOKKVYGQVYBHGAEAZBKWSWYKZHCBFEXTGXDENKFDNYAUFCLUOABQWCXSXJMLDFSUTUWATEZJVWXMLHKHDBQCAUSBMNGLWIDZWZYNNPO");
    msg.timeout = 0.4904559164395178;
    msg.sms_text.assign("WIFLIUPGXZVM");

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
    msg.setTimeStamp(0.5579077834261276);
    msg.setSource(25034U);
    msg.setSourceEntity(222U);
    msg.setDestination(4583U);
    msg.setDestinationEntity(153U);
    msg.req_id = 44427U;
    msg.destination.assign("GUTBQYOPZBHZHOEOEJORKODLUGWIGDPJAADQOEHVBGWCVVOPF");
    msg.timeout = 0.011901300565458461;
    msg.sms_text.assign("VFBNWUUZTEAJBOALIUDEEGJCLMCNYUQDWXVGAZNHLWNOLCALIVDAMLOONFVFQQIYYSTWOQRQIVGBJWXNRGOADGJDVHRQKDCCZSKNZHHSMIPKIPHYZFQXKRKTBFVEYSSLXJZVOYRNLWBKZKBFJZXIBEXKUL");

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
    msg.setTimeStamp(0.5988975129477254);
    msg.setSource(33271U);
    msg.setSourceEntity(48U);
    msg.setDestination(50588U);
    msg.setDestinationEntity(116U);
    msg.req_id = 15457U;
    msg.status = 103U;
    msg.info.assign("XXIVKCJLFRKHNIEQDLKKUAUSGEFONKWZVGXYRAUGPAYDYIXEIRCTEFMITTFPYDBWCSOGWVKASLRZQODYAPYCVBXIDEJAWTFPWBUWALJZECTDZPQXSWGRJOFPPUMYLURBJXBWLCZKQICHVTJVAOBWGOIBDOLVSJETSLONFFIURWBEGPVSQNRHKMQSHNSOVAYUZCAMXTG");

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
    msg.setTimeStamp(0.19065576365367987);
    msg.setSource(14354U);
    msg.setSourceEntity(195U);
    msg.setDestination(1242U);
    msg.setDestinationEntity(23U);
    msg.req_id = 54667U;
    msg.status = 63U;
    msg.info.assign("KOMYSEMFXJCJSJFQQNJVHYZNWQWZCGMDETAQXSYPIENBICOBBYFWYJKPOIVTXBGJKMQMPOIIHGNHVDVBWZK");

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
    msg.setTimeStamp(0.9214236139639689);
    msg.setSource(4302U);
    msg.setSourceEntity(62U);
    msg.setDestination(54005U);
    msg.setDestinationEntity(113U);
    msg.req_id = 10623U;
    msg.status = 200U;
    msg.info.assign("TPAJTWAFMNAYURTZVSMRKJWET");

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
    msg.setTimeStamp(0.6650337679998883);
    msg.setSource(10504U);
    msg.setSourceEntity(233U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(121U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.6508238040297342);
    msg.setSource(53343U);
    msg.setSourceEntity(159U);
    msg.setDestination(57089U);
    msg.setDestinationEntity(200U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.8900607633680898);
    msg.setSource(1188U);
    msg.setSourceEntity(237U);
    msg.setDestination(20542U);
    msg.setDestinationEntity(249U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.10944542026030324);
    msg.setSource(64868U);
    msg.setSourceEntity(66U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(63U);
    msg.state = 181U;

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
    msg.setTimeStamp(0.6457645919290477);
    msg.setSource(33199U);
    msg.setSourceEntity(145U);
    msg.setDestination(39178U);
    msg.setDestinationEntity(230U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.6975414418738333);
    msg.setSource(11792U);
    msg.setSourceEntity(11U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(60U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.3504882298588713);
    msg.setSource(46824U);
    msg.setSourceEntity(126U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(18U);
    msg.req_id = 4656U;
    msg.destination.assign("IPHDXITWVTPUIJICSHZPQEWFP");
    msg.timeout = 0.7247404515739496;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 67U;
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
    msg.setTimeStamp(0.9162001780288361);
    msg.setSource(40999U);
    msg.setSourceEntity(92U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(76U);
    msg.req_id = 2307U;
    msg.destination.assign("OWMUSGWLHUXJGVATYAVYTKFUSQAGWVJQAQZYDCVZSSTRPJJQUSMHHHYONIZNIJGEZUYDIFF");
    msg.timeout = 0.9280536591195369;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1354256509U;
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
    msg.setTimeStamp(0.48908916564809124);
    msg.setSource(30616U);
    msg.setSourceEntity(37U);
    msg.setDestination(53625U);
    msg.setDestinationEntity(17U);
    msg.req_id = 19357U;
    msg.destination.assign("GUDIPQTSRMWVCOIIRTVOTUBZVAQPAIUWTYEXYADCAMZDDPTFLWVDBUEEEBMNRXQMIXTQVUFNNYJNKMEZORSQBHGSHZTPPKBYNMSLZRYIUNCQKZQDIKNFBOVUGPUFWLGXPERSLYMYMGTJUWXHVLCBFJOWTBIOAGDAHKJEOZQQEPZJLKJVVFDKG");
    msg.timeout = 0.24383560591384523;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 217U;
    tmp_msg_0.label.assign("BQYGDVWRTZZNHZDYCHBIUJILXRSWTGONXABGEMLWLCQFNAIEUDPGUKMVLYYTFHPHEDFKGBGJHVASBAWIZRCEXKNZFRMRDWNQBIEQZZQXGWEPJUTIJKRWALMBVKPAONQTMVNPKPFMZRZSCVMOYCRCOSGYXDIYAQKDOCGQPHYKJIBONCANJLKTTCEUBVQTPFUEWURXFULITHOSDWUQICHLSFSFLOVXOOUMHWYBMAXJTVXVGJRAZXHESJLPNJD");
    tmp_msg_0.component.assign("NAXPGYSCDZBLDURBOTJPGYQGZULHIEJUBJPAXIZHQXVLAYMCPIBALUTDVVOWSSZMCSHFZKVKDQMBCWPFBOJHVPZRYOXSQYLLFUNQCEPJREZNOOSWHIWVUGAXOIQDXYDBSHUYTXRCGNASOMXEEEKRFQVJTFKQG");
    tmp_msg_0.act_time = 27934U;
    tmp_msg_0.deact_time = 30164U;
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
    msg.setTimeStamp(0.6554615816905096);
    msg.setSource(30381U);
    msg.setSourceEntity(180U);
    msg.setDestination(59654U);
    msg.setDestinationEntity(167U);
    msg.req_id = 7742U;
    msg.status = 177U;
    msg.info.assign("RWVXOWJGDNVUVOVLGRNUIWKGIAHSYCAATSEXRNJTZSUHZSFCFHYEQPUTISFPYUMRRYXOUXDGQJLNPLSUQKRPJRKBVOKQOSHLZNIMPRXFFPDDZVITXQGKYQLEPNAACNWYHKGTLCHAJQLQZHPCYVYBUMOWNTEIKALOILR");

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
    msg.setTimeStamp(0.9973918666513424);
    msg.setSource(25708U);
    msg.setSourceEntity(37U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(136U);
    msg.req_id = 14349U;
    msg.status = 102U;
    msg.info.assign("COEPAXEWNYZKOYIDBHNKRUKDBEBVBASNPQOFCMUJJFAWSQVPVEBFZKDBZDSWULUITNHJAPIOQFASVGWEMFBLQRMFCUFMLPHGQGHSFCDCINEZMAYRCTPMQAAIMXVDRWTGWENIJKXYRCJSQCJTHFPWRKRIUQKLNXYOMUOQXDYWKAZCPCNJTZYDVNXYGBHOTSWSFRMBHNTUMKXJILLPLIZXRZRLAYVBGUXGSDGWLHGJVZDHHTVYXTOGSI");

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
    msg.setTimeStamp(0.9145300811728645);
    msg.setSource(57195U);
    msg.setSourceEntity(82U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(177U);
    msg.req_id = 9604U;
    msg.status = 141U;
    msg.info.assign("FTULKHILXRWEFVHUBFUSQKDGTIFSBVSZPOJUGVPRXSOIJEZCARUCLNOOCCUSGNNEWQBIOYUAXJTKG");

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
    IMC::AssetReport msg;
    msg.setTimeStamp(0.835681534768576);
    msg.setSource(27597U);
    msg.setSourceEntity(196U);
    msg.setDestination(1718U);
    msg.setDestinationEntity(117U);
    msg.name.assign("XECBFYHCFAOYLCHBNBTXTCUDWSUFSVWXSNAGMJQJFSBIVWTJXUDZLOQYPPWEFSUWSPMBZDVZTWKMBMKRKUWOALHITSYIBMCTZDQGKBMGYQVYQOGIVV");
    msg.report_time = 0.8196998984443263;
    msg.medium = 85U;
    msg.lat = 0.2694091752267843;
    msg.lon = 0.07561033761509928;
    msg.depth = 0.3917550891032604;
    msg.alt = 0.7433768846637155;
    msg.sog = 0.6278564201032885;
    msg.cog = 0.32845488827876346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.9495842016198118);
    msg.setSource(49368U);
    msg.setSourceEntity(199U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(249U);
    msg.name.assign("WMILSXUYQWOVISGGUWHQYMZZZYBEOXRZEVZGLZHNRUGVPATPOQYBNKNWSPGMQXXYHSNTZFTGXPVGJPIZHTAERAXHDJWOESKKEDDAQ");
    msg.report_time = 0.8407428416612446;
    msg.medium = 200U;
    msg.lat = 0.07215079295554638;
    msg.lon = 0.8875669588092125;
    msg.depth = 0.04615541846659643;
    msg.alt = 0.7302180088148676;
    msg.sog = 0.41263582450757663;
    msg.cog = 0.36066961606640935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6880336399757491);
    msg.setSource(1907U);
    msg.setSourceEntity(213U);
    msg.setDestination(26773U);
    msg.setDestinationEntity(235U);
    msg.name.assign("ZKOAILQFNJDJLUFGDYKANUDOTYLPEYPWWLOBSUNBJDEFEGFXGTJKHHGTMUAIJLCCRUDLCEEQTZXRLABGRCQSSEZLNBLHXWETVZEXZBUROQVLKQBTVWMPDFFAFKDTWYYZRPNPCCYORIVOTIAHQZESUHIYVARNKMMGSSZINBIWCNTWQVRHMFFAODCUYTFJPXZGJPQHOJ");
    msg.report_time = 0.9112333459168185;
    msg.medium = 115U;
    msg.lat = 0.03376639543795201;
    msg.lon = 0.9608992474449922;
    msg.depth = 0.46206133357770274;
    msg.alt = 0.55347339816433;
    msg.sog = 0.8665884715808261;
    msg.cog = 0.7120870602148394;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 5596U;
    tmp_msg_0.bearing = 0.7860307656952693;
    tmp_msg_0.elevation = 0.21262135317749065;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2723927882550653);
    msg.setSource(11151U);
    msg.setSourceEntity(252U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.5754344428689773);
    msg.setSource(20502U);
    msg.setSourceEntity(54U);
    msg.setDestination(143U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.2512358587010909);
    msg.setSource(62197U);
    msg.setSourceEntity(221U);
    msg.setDestination(48179U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.5352547352831538);
    msg.setSource(32252U);
    msg.setSourceEntity(183U);
    msg.setDestination(54706U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("WZSBPIBIACHEVKYMMHVNMIVCLHOFOCFPBGOZOKKCAJTERIYUPFQAYOMJRDHDCDVNQGQNIHZTLRZVGJXZWYRVNTOHQFLWDUJPQLBXECUIUCTGQFIMPBWEKLXFELWRZFJJQWMMPCGXWSNMW");
    msg.description.assign("DKHEXLOMUDHFDXRRKLLVOBAUJRCPNAXBXUKZDGYOJQITDQFZIOXDGXZGVLFJSJVWAZMEOWVUUIXXZJ");
    msg.vnamespace.assign("SZHRVAXSIQQLXDWRQCSFRXAQWYDGFJOAEZJEWIJMGHVKFCTMNBELBIAIAZYDZKZUVBYOVRPRYLGFHTIZXJLOUCOWBIHUPPNSFKUVWANGMAOWJHSMYKPEBXKJGUEEPJCWHHCWKZCNQYVHQLLVGPJFYDFFVOTUBKXVLKZW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MGTBUELLXNHJTYSMWYNLFPKEGLJLYBZWRHTBWREUCKKHVADUKIJCVJCHQLXBKZYHBEOPFRUERCBIVJPVWKRWUHXPZOMZTWVXCDYLVNBNMOFJZRXKAAWNTIUECKNGSVVGHMSXCISXMUQSZEATFPOLGORZTOBRJJXKYPEWJOPMDHPHFUYVGMDOQMYCFQQS");
    tmp_msg_0.value.assign("OVFKITUFHSCJPYSPSERFOZUXPWJMRTPHVBECAPSRVCXQHQDOYANUORTWHEZJARBFEBYKSDVNEZEPLABQIGHXTDMUFINCCLLSFWGTLLHKXOEBIYIKDZGKZNBFCMCRKFIISJBOFNLGOIAWWJNDYEGVHAD");
    tmp_msg_0.type = 110U;
    tmp_msg_0.access = 165U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QHCBEVASWDADDWHSFWOLZRQGKWNJLAFZFJXPXDPMJTJJIJHLUYQDHIMURKUURUBIEMQTRQGTLUTBPNESQTYDVPVAJSKUICGOBQNKTPUCPMHNXKQSBMKQWEGHWOBKWLBRVEYAXTGJCPVGZHROLOEIUBLRRGYIZHPWGXFSEOFFGIZKZDZIMWREAHBOLJCSNVJXHKYVFTXICUXDCAMNOYDAZYKCXSI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QSIGFUZGKTISUXXARSDWFMPCHGQKMEHKOYGNFDNZVEVUUYTZVTFCZVHOPBMBZDIEORFEDWMBLAMQHMBCHXDSVSXLOAJHGKQWZSLIVWNJ");
    tmp_msg_1.dest_man.assign("UEGDNKNVEIHMNWKCWJFJLZXTOWHYOTTBPQSHQSDYSQXVALBZGCMIRJFHGENXYMRPRWIMODVAEEVIKOX");
    tmp_msg_1.conditions.assign("ASKWIZLTSMSBRYVKJYCGHAPCRWDIGNTZJFTVVPUDTEFJLOADFUNHPKWEUCSDJAUBLQCOVTLHMTRQBLXKTBILMCFKJFMPLKQHRUZMBMZGLJCFAUONABHXTQSPDJICGCBNYQQVOYROIHEKSDWJDPPPAEGLWYIDWROZKZTNRDXZXNFXYRBVPCXBFJGIHMQNIAYXGVFNWDZQFEEMHCM");
    msg.transitions.push_back(tmp_msg_1);
    IMC::CompressedHistory tmp_msg_2;
    tmp_msg_2.base_lat = 0.7335633685888144;
    tmp_msg_2.base_lon = 0.3688967889121083;
    tmp_msg_2.base_time = 0.6267432591975909;
    const signed char tmp_tmp_msg_2_0[] = {-74, 24, -52, -53, -58, 98, -54, 30, -56, 102, -26, -45, 107, 29, 49, -118, -103, -35, -31, -11, -61, 4, -61, -122, 91, -61, -20, 16, -57, 56, 86, -9, 25, 86, -52, 46, -72, 101, -70, 1, -97, 8, -55, 84, -2, -51, -106, 43, 1, -91, -126, 79, 32, -25, 0, -93, -37, -5, -4, 8, 78, -109, 39, -116, 52, 75, -54, 122, -123, -66, 4, -79, -7, -47, 14, 101, 55, -105, -90, -99, 43, 7, -64, -91, -2, 11, -102, 61, 68, 49, 39, 51, 121, 36, 40, -31, -29, 17, 126, -49, 111, 94, -112, 21, -84, 58, -49, -78, 4, -21, -53, 78, 43, -128, 10, -110, -7, -128, 18, -49, 36, 50, -105, 122, 65, -112, 32, -106, 96, 75, 125, 4, 123, 90, 18, -63, 39, 32, -3, -22, -22, 30, -22, -12, 62, 16, 19, -38, -77, -15, -125, 23, 57, -97, 101, 24, -60, -100, 103, -117, -69, -4, -32, 39, 4, 71, 80, 40, 25, 125, 37, -45, -13, -15, 83, 59, 105, -90, 52, 51, 111, -57, -110, -79, 58, -88, -11, -49, 4, 27, -58, -22, -119, 88, 102, 101, 52, 83, -25, 38, -8, -62, 84, -60, -30, -81, -125, 92, -10, 82, 77, -124, -116, 54, 42};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.4366374881731092);
    msg.setSource(46196U);
    msg.setSourceEntity(237U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("URKWBUSPTCARZIBTTXLDXPULTCOGCLMVPSEKQYMXQLXOOUQHXJLKASRZOFGIDISMHHTXDXODIHJAZDAVNDCWKQKZQYNZKRYFBDNAGWHKWZJMELLOWGBWVYWEVAKFJGGBPWSAIPTNGQRKUVCFDYCEFZUZSGTOMHJJYXYW");
    msg.description.assign("NJTRGAEUQHPEOJSTBXGJRRHDZUDJEMVMFPBBBSMMYFZIDTIJWULICXVUISGHVLCCVGGEJFPXLVPBOQOMNQFDSMAVTOTXRYXDKGWNPLOJGCSEYSKECDYCONTYFCULPJIWHCNUQHWPKQLWMRVFAZAKBWAIF");
    msg.vnamespace.assign("EYHSIFUOSEYVHKNHCSEDLEQLEBSYTMZKVVTWDTKSWPNZFOXWPJXXOGGMQBUCZATKIPPXOWR");
    msg.start_man_id.assign("IUJEWTVPALBTMBDHXPHVIXALSRDOYJHSKSFEEUMAGXOPLBZUZLIWREVVQRODMXMYRGSBFCVOGLDJYWRZDUPRITJOBYCBXNWMKUHOCBWDZCGNFXGUVOYUQIKECBVMNSBKDFTCRHUJHQHTYWYHWAWKMIIHJLEVEJFZQQUTLNANXKJZDLDGGJSCIZPVAPSNHUGFQSZWQGONIMXVTESFPADTYGTL");

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
    msg.setTimeStamp(0.3544356925857499);
    msg.setSource(55239U);
    msg.setSourceEntity(59U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("BHYMISSTPVSXEBPEJYTMZAEIQOANXBFXWAYAPEGVOTIAMDHNNNNCXLCLUOLKLOQVKJQKADJXUKGMKFRGETXVWVCJIOTDAODDPEFPFBYDOQVBWBXXXLDSJBIKYDFXSYUVSTFJZDSMAUNLHR");
    msg.description.assign("ULKGDPRXQSBIXNYFOZQNNHAVKUQZRWSFDYDJAC");
    msg.vnamespace.assign("UAJHMPTANZWBIBNEKITVLWMEDIMBNCCFEAFNWXSJJJTVQWNYZVMYAVAOJHFQAQOJRVCOBKBLYCTYNVUGWWGDNYKZLEIPRRHDEQZ");
    msg.start_man_id.assign("VAXZVZUQDWAIJRHDKNBWYJGOEQJTKFHZVRPQBTSLCBSIBXYFCOLZQDZRISXXIGLLEQMDKCAPNVKZJNHBKPJVYR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JIGZKQNUWTNSYSSMSOBMICOPTSZHCKZMQLAAJLYLWMRQMLVUPJVQXTUPBDPGTOBLQ");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 55819U;
    tmp_tmp_msg_0_0.lat = 0.4642179308490627;
    tmp_tmp_msg_0_0.lon = 0.47221717686854914;
    tmp_tmp_msg_0_0.z = 0.7257266084245405;
    tmp_tmp_msg_0_0.z_units = 181U;
    tmp_tmp_msg_0_0.speed = 0.4701599782747615;
    tmp_tmp_msg_0_0.speed_units = 171U;
    tmp_tmp_msg_0_0.custom.assign("OCPKMMWYGZGCCBBKUDCWUEIUHQXGNRIEEPBMYXJFPOAWUMJCZAQJIQSLLVIHVZYXIEXZOZFWSWVKPWPERNRSRKECVPGRBDTBMMRUAOJRMTLQRQYLSYFNZNDSSONKXQYGHMAVPHTOHZXKSUFTFIWKIATPIZZQIXGOVVGUYUDGLFJEBCEXBUKHOJWUYNTVMSNPIKWQXOHFHONSKBQCLAABATND");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Takeoff tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.9071484555306477;
    tmp_tmp_msg_0_1.lon = 0.677540020919959;
    tmp_tmp_msg_0_1.z = 0.7074080865870968;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_tmp_msg_0_1.speed = 0.8917023184113148;
    tmp_tmp_msg_0_1.speed_units = 212U;
    tmp_tmp_msg_0_1.takeoff_pitch = 0.2251189920226786;
    tmp_tmp_msg_0_1.custom.assign("LTAVMICXGZBURGSXVXLWXGHMSOMJQYRNYHERFJZRTXKSNDRYOTTJJPYHQNCIKKWQBCEVORVSIKYVWAHJFYUPCOSHCSUXYQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DevDataBinary tmp_msg_1;
    const signed char tmp_tmp_msg_1_0[] = {-120, 47, 121, 93, -82, -17, 112, 79, 122, 104, -75, -103, 100, 66, 79, 35, -128, -22, 38, 46, -93, -27, 100, -120, 78, -110, -63, 121, -124, -26, -103, 48, -68, 61, -54, -37, 105, 5, 46, 7, 111, 32, -6, 20, 10, 99, 19, -31, 122, 7, -121, -114, -42, -66, -109, 63, -111, 86, 123, 68, -29, 13, 81, 65, 15, 30, -95, 35, 38, -30, -25, 23, 44, -2, -41, 100, -93, 125, -79, -63, -99, 48, -13, 100, -97, 12, 49, 61, -66, 53, 43, 65, 110, 55, -57, 30, -10, -121, 99, -100, 6, 87, -96, 103, 44, -121, 26, -36, -51, 24, -36, 65, 98, 37, -100, -65, -20, -69, -75, 11, -82, 43, 22, -123, 96, -60, 79, -84, 97, 2, -71, 32, -49, 8, -110, 112, -81, 31, -126, 58, 107, 57, 45, 85, 89, 83};
    tmp_msg_1.value.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.3888379432993909);
    msg.setSource(1387U);
    msg.setSourceEntity(77U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(152U);
    msg.maneuver_id.assign("LWXVVWZUOBJGNVTMJBGMPDLBKQHISYWXERIHPJUBBJXUMMGYQSHNJZPNWALCFLUWFUYVOMQZJVEFSPQFYWIXCOWOGNRCDDHFDMTTIHWKNBBSCTKNSXMMFIDQRIEZATXTTWNBZGFLYYUSIVQPASSQQAAPHPKFLWEMNEJIHZGYCHRIJESBDXREEFOZODAKXASPVLJGPCCPKKJTUZONTAMQYCKRRTLEYUCANAGZXVOUKXORULVFRCROHYG");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QWTRHSKQXSEMGLIOVZTOWGIMVLZNKFJCXNFBQVZDRTGWVFWERCRZOGNAPIUPQJIXYROSHAJSENAEWHBNCPSQXRCKFLBEDTGTUGAZOMIYBFDWUS");
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
    msg.setTimeStamp(0.6701725585044341);
    msg.setSource(18531U);
    msg.setSourceEntity(138U);
    msg.setDestination(48856U);
    msg.setDestinationEntity(225U);
    msg.maneuver_id.assign("ADOFDAJSUTLIZDDTXKPVDXIDGMC");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8913140939076889;
    tmp_msg_0.lon = 0.762102432252414;
    tmp_msg_0.z = 0.5857598426446687;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.7531163795570783;
    tmp_msg_0.speed_units = 141U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 7135U;
    tmp_tmp_msg_0_0.off_x = 0.4629550303516424;
    tmp_tmp_msg_0_0.off_y = 0.9004003651006002;
    tmp_tmp_msg_0_0.off_z = 0.3028895146255255;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.39218220671790305;
    tmp_msg_0.custom.assign("YUQHUVOQJHSSILCVLABPDJFDINMAKLTYMSYUUGOBADJJKEOCMJOBMWCZXKECTMIJHFZQNPCBORTONHYOYQGLXFYDFWKBZIZXDBUBVJAERRXNWWGZSQVPZPWULUPCHTHKTIKAGKYBVYACFXHLTSHZXLMEEIQLZHRIJZIMTGARZEFXNPRSOLIEWSXNVQMVDJXPEYCVKGYTCVURTWAQSNGBAPPPGDFVUFDSGREEFBWXHCWJKGOINSQAKDU");
    msg.data.set(tmp_msg_0);
    IMC::PlanDBState tmp_msg_1;
    tmp_msg_1.plan_count = 50030U;
    tmp_msg_1.plan_size = 3523662423U;
    tmp_msg_1.change_time = 0.8099108455758594;
    tmp_msg_1.change_sid = 42811U;
    tmp_msg_1.change_sname.assign("BXLLNCBUACYOLFXTSOZVDWCNXHEFTHZIQIJZODEJIFKTYGSBUEUWTFOHBTEJOMNLEJRSTYRSJGYQEIJRXRWGLGVZPOHYOPSFEAANQPMMDKYFSMUFDRYVZMAVUSQIGLQVGWTBOPIIBRHTHYAZPNSPWZVHPKXTSACUERLQJWICVCHHMWCSXHVKALLBMUYGBPJ");
    const signed char tmp_tmp_msg_1_0[] = {57, 110, 48, 76, 100, -100, -60, -57, -88, -75, -25, -35, 60, -114, -114, 61, 71, 24, -46, -37, 125, -26, -98, -104, -50, 10, -88, 31, 120, -75, 123, 88, -97, 91, -68, 58, -21, -100, -103, -117, -79, 70, 84, 45, 110, -58, 49, -46, -43, -127, 104, 26, -93, -29, 78, 41, 65, 4, -84, -52, 16, 84, 114, 19, -61, 49, -37, -76, 116, 102, 69, -94, -120, 106, 80, 8, 22, 1, -58, -112, -47, -126, -19, -84, 43, 81, -125, 110, 60, 67, -70, 76, 71, -89, 67, 23, -11, 25, -93, 58, -49, -62, -110, 64, 6, -100, 33, 12, -106, -42, -101, 23, 48, -79, -87, -87, -19, 81, 113, -4, -36, -33, 68, 61, -41, -42, 115, 109, 9, -105, 81, 61, -29};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    IMC::PlanDBInformation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_id.assign("EVQVUNKSBACOSWIENOOFXGBVBMDEHWUCFTNKNIBNKDFKECZBROMBIQGXRGJAUKMPGZGXRRNTITCVYGNAPDCXZAFPAMSJZJCADTXOQVSUQOWEUMYVHRQULQREQNTUDWGZMSIMKXPMZAK");
    tmp_tmp_msg_1_1.plan_size = 56844U;
    tmp_tmp_msg_1_1.change_time = 0.615259242711306;
    tmp_tmp_msg_1_1.change_sid = 33155U;
    tmp_tmp_msg_1_1.change_sname.assign("FIDBGUYVFULIHWEZFPGXVBUTAAZZIEASVJALKJSLOLNTNSCAJYFXXTTPAAFZCQKSHQHKXDEMCHEMYUYRFLKJKMKQSDRORANGBUEDEAEVRPHNNHQTJWQKNWPQICZDIEYFBNFXMHHITWPMDILDBTJKLVRMJEBJSZMZOUSOYDMNTPXTIYUCQBIZXURXGAHDZTCBRLUWWDLZWOSGUYXFLQCWNVHVOMNPSPPRERYGFKGVBWCOYIJGXQ");
    const signed char tmp_tmp_tmp_msg_1_1_0[] = {-121, 31, 45, 71, 38, 61, -89, -63, 24, -28, -11, 67, 60, 67, 46, 106, 87, 26, 100, 6, -87, -60, 96, -63, 83, 16, -56, 78, 15, 107, 53, 88, -75, -114, 45, 104, -91, 122, 103, 8, -76, 20, -74, 118, 89, -126, -50, -104, 63, 37, -73, -25, 90, -70, 15, -84, -88, 124, -74, 126, 51, 107, -96, 54, -16, 28, 49, 34, 106, 17, 55, -83, -116, 50, -77, -42, -54, -5, -49, -94, 98, 9, -68, -44, 12, -55, -121, -124, -20, 49, -39, -66, 42, -12, 10, 18, 43, 65, 65, 115, -8, -68, 86, -99, -45, -27, 118, 9, 50, -99, 95, 36, 12, -128, 32, 66, 101, -30, -37, 92, 6, 107, -9, 41, -59, 75, -22, 104, -83, 10, 26, 81, -43, -5, -28, 73, -25, 21, 61, 65, 22, 112, 20, 24, 10, 103, -97, -21, -110, 82, -88, 64, 104, 104, 78, 0, -120, -56, 55, -5, -104, -106, 5, 64, 115, 13, -41, -88, -41, 3, -64, 76, -93, 52, -108, 92, -94, -113, -95, 9, -111, 50, -13, -99, 123, 3, 118};
    tmp_tmp_msg_1_1.md5.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.plans_info.push_back(tmp_tmp_msg_1_1);
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
    msg.setTimeStamp(0.541506839863975);
    msg.setSource(45637U);
    msg.setSourceEntity(52U);
    msg.setDestination(53172U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("WZBHWJIOYYEURMRHLVYMGQCNATFWMRNXPZFTBJWJTDLACIKMENXFZKNRUFMZZLCMJARGWGZUBBXTUCVBTHVLXAFKBAAGTHXBTFUZLKBQUHMTPSOGASTVAJPFPHFPSYQCEKUEYWINIVRRPYXLXXJMDRALXNIKENPQSGKOZSLISWQXECDQAYOSDBDHNNUGKHVGIGVNSDDMBVCCIPSZQYMLOSWUQCRO");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 46633U;
    tmp_msg_0.lat = 0.4226226269736323;
    tmp_msg_0.lon = 0.48885488514218756;
    tmp_msg_0.z = 0.08049088697668882;
    tmp_msg_0.z_units = 122U;
    tmp_msg_0.speed = 0.4149094018568862;
    tmp_msg_0.speed_units = 48U;
    tmp_msg_0.custom.assign("HVFYXIXYRCUQRPHLUDFBYJCSZBPWFOKLYMQNOHZWUVCEKDKDVMOICOQTGX");
    msg.data.set(tmp_msg_0);
    IMC::FormationEvaluation tmp_msg_1;
    tmp_msg_1.type = 173U;
    tmp_msg_1.op = 195U;
    tmp_msg_1.err_mean = 0.7398142285749699;
    tmp_msg_1.dist_min_abs = 0.40541487189749603;
    tmp_msg_1.dist_min_mean = 0.06672309796464193;
    tmp_msg_1.roll_rate_mean = 0.8876493080133323;
    tmp_msg_1.time = 0.21814441383782168;
    IMC::FormationControlParams tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.action = 35U;
    tmp_tmp_msg_1_0.lon_gain = 0.0030800620099958875;
    tmp_tmp_msg_1_0.lat_gain = 0.5548496703693339;
    tmp_tmp_msg_1_0.bond_thick = 0.809711606274859;
    tmp_tmp_msg_1_0.lead_gain = 0.27519442017536777;
    tmp_tmp_msg_1_0.deconfl_gain = 0.5076546883171413;
    tmp_tmp_msg_1_0.accel_switch_gain = 0.4362411203727805;
    tmp_tmp_msg_1_0.safe_dist = 0.3016543324208546;
    tmp_tmp_msg_1_0.deconflict_offset = 0.37149793095540606;
    tmp_tmp_msg_1_0.accel_safe_margin = 0.33280918434602147;
    tmp_tmp_msg_1_0.accel_lim_x = 0.9121116483517445;
    tmp_msg_1.controlparams.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.03062973100558941);
    msg.setSource(40555U);
    msg.setSourceEntity(96U);
    msg.setDestination(26762U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("GBMHKMNQBUOPTUJTKBGVLBGWJAIGMRGNWBJWAXEMYSEADIJSYHVGLBOXEZHCY");
    msg.dest_man.assign("DFQTWVCQIHTLZAYNKYWTAFEHDQEUZFODIHJOGVSUWZPYLWKKMGCIHDOUWIJEICAGFWJZBPCISMQVFYZIXDVKNTEQPPCGOUNGHNOLRQTYLBNGNXEBWMORKNXLKSHZLDANZRLVQBYGHFBFNXCMSSTCOVSVEGYVUUCIUDPBAYQYQENLXKWXBAOSRRKSZCJOAZM");
    msg.conditions.assign("HWKUNVIAWVQXVQQHGMFRFVKDTDIQSBYFECEZDEPCCYIMHIKRJNNWAISTWQGLAHHYPMUQHOVSBVQ");

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
    msg.setTimeStamp(0.17849548119660263);
    msg.setSource(59746U);
    msg.setSourceEntity(111U);
    msg.setDestination(3799U);
    msg.setDestinationEntity(40U);
    msg.source_man.assign("HMZSDGWYAAKKTLNTDXISIZDFANYWUXENBLRLCYJEDCXFURKIKTXZLQVOQWYGWTLRXRXJGHFLNASKPINDHRHQSBMISVUTACCIGBTVPKDRSWFWMBFXIPBDRFIUOSLVXFBUDNOKYOEPPZPEMJMTPSNBWPUTJOQHMCMAHRJEXNMNVQKWQABKEMYQGAZVWJSLHJOHQBHZDFEHQIVCIGYZEMUDGYCPJGTZVYLWCCZZ");
    msg.dest_man.assign("QGLRORNXRBZTNKRZFDXBUZYNZSCOJFOHJKACHYWSIWA");
    msg.conditions.assign("SRNEPOVQXFMHFSU");

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
    msg.setTimeStamp(0.052166373028541435);
    msg.setSource(13399U);
    msg.setSourceEntity(225U);
    msg.setDestination(49866U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("EENZSAEHCBLJZGSAIARRY");
    msg.dest_man.assign("YKKUERTHDHWEWEALPVWFCBMNLTNGFPVLDVWMIGEUMZOZJZJYCSXIJTBKBXMLOXINWWFEBPYDQGIDTQSJBJFTVSRJRFLQEXQUJGEXZJEHWQXVZVOLRICACXALODBIORGIPPDFTTDUVNJPZKUVXISAGYSAGAOFOVBCHBXRKZLTWUYHEANCAQIFKRHQMVDAHSNOLQGOROCYBUKKK");
    msg.conditions.assign("LHZKMBIWWDTQMKYDTMUKOLAIJNDJFOIYSAHIVBBBQEUEQOVBFBTHPRETNWTXGTSQYCBUNZZPMCDTZIMUVRXRWQXJRXGOPGSSOAJYRBVHHZWGCGDWLVNJXGKVQAVOPLGUFMYZZICHMEEMORIEOSJRTWJPVFUCRAGJBVLAHNNCWSNIMOKULVAWGLPZYFNHUFJYDDPKXEXRQGIFSUMTATNAIPNYFCSJBHSAPCYKYECKLZKWXQZEER");
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4105253135992627;
    tmp_msg_0.amp = 0.9374450922882327;
    tmp_msg_0.cor = 24U;
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
    msg.setTimeStamp(0.9732022758764604);
    msg.setSource(7139U);
    msg.setSourceEntity(130U);
    msg.setDestination(56510U);
    msg.setDestinationEntity(245U);
    msg.command = 100U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UVUMYUEIGXZNNQXLYMTMPESFDLZTZJHZFHYJMQRGMVYOVDBAKOIAGERBFPKPQUQXKNDODCWSEFMDTPVSHYUZNOETMYIXSRROGAJIVHKRLYILNSYGHKORCWVSUBBVQTSBWIHZNTBDJDPOOQWQTVEAWMIEHTQLJEWICLZWHCHXKFGXNVXEANBLZRFNCMOILFIGDFHGSSWJWTWLLPUNCGAZRJXDUUPBQXVRYKBKJJQKOEAUJCTCGRPAFCXBSPDM");
    tmp_msg_0.description.assign("FEDFPCWIUZAWQBNTXUROMGXVFDLJWGXYSAETVSOAPFGZLTMQXBBBTCDRYINKQHENCKXMBOHWQXLLVOZTYMXKJQSJDFINDUPSPXIKLRJLFKAKVEDPOUQEKOUPRABIYUFYCYCRNJIYIBVHECMFSAWQSPWGEHZCQTODUYBAHGBWFPMDJSZRLTXVGNEDHOPWGXKJSYBZNUHCYJRZMAFOIIG");
    tmp_msg_0.vnamespace.assign("DWTXJVIKYRSCXMXDJWYSIMXDMNMMECNUUVYFRGCLKPWGHYIINMZXRKTEUZMPEPHOKPKLYHQIQGGZEFVGCQRZGJLPNHAPWLNUSBTQFEABDPFNNQCRCWDLOWQAUZRPYSLKXVBAKLQDYUHZKI");
    tmp_msg_0.start_man_id.assign("NWMCRGGYTUINWFOFZYYMXYKHVYTSUZXAPEQZBLCLWIBFONDTRCAKGDNALPRJYMLHIBFNWXZUSTCMQMPMWKKSXOWPTOZSDUUJRDFFVEIIYNSO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DQRFGXOGJUSLHGKRRKXHISVBMGXNPJMJSUCHYLLITUQKNWTWHP");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.09187308158206409;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8226149177363005;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7429446958331117;
    tmp_tmp_tmp_msg_0_0_0.z_units = 137U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.17854173747998991;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.25439986408079884;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.11581581669738539;
    tmp_tmp_tmp_msg_0_0_0.width = 0.6255179781835172;
    tmp_tmp_tmp_msg_0_0_0.length = 0.5217338447611233;
    tmp_tmp_tmp_msg_0_0_0.coff = 41U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.9250425813449682;
    tmp_tmp_tmp_msg_0_0_0.range = 22364U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 62U;
    tmp_tmp_tmp_msg_0_0_0.flags = 144U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NGEFDCUPSEOAMTOIRDVXZPGCFEDETSVSWIVRQIKGGSXWTODSNNFSONNHZYWBMEJPKLSVAIYQVJXYDIJWPVI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UFXKNYLGEPGPBONRLPUDYGHPBVNJISOMFPRAIZTFLVUIZYVAWDOWKRMNNKFKBOVVYUQEQWEUVZECDCFGWAXDHIJJCARWHOBFGBZYTFJDQIERTBOLDKDVHBVRKFSEZRKDAHMOKNPPEYRZTVTJIQCHNMHSQQUWCSLNCZPKHWUNRMQTBAJXSFHYGOOXMAXGIXJMAAES");
    tmp_tmp_msg_0_1.dest_man.assign("AMCMTOQPGQNLESIUWYDHTCVYBJXSDDJKXNQJYPZUVOKFOLPODVXRVSHNCNBFULRNFTFJTMNGACQGVTOMZCCUZ");
    tmp_tmp_msg_0_1.conditions.assign("TDVLNVNRQDSFPEFRBBXWNBBHRFOIYSACKXFCRENWMTAGQVQUREYPSPEGIGENOFNZZENCOFOMHHJAXSFURZCVZCGDKIBLMYZLOUYNMXJY");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("YHNFMEOUCSQBWGGOJHYVUULHJLEMGBPLNDTQIWVFYVKPGAXZPKXZMZVTUKXVVJGLDBTSDZYMJAWQKXKCAEGSUOSKIUANWCMRZSDPRJKTIQZPDPBS");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("EHQVAHHPJTQZPSOIOLFASACNUIOLBCBMVGHVTWJEGAPQPRKDMAATRKUCSMKOOLHXYRISGBQDKJRQPLXUBVBMKISKTSLMCSUCWWZNYSTCXHETXNWJDTNNOYZHUMMLJJPWDUCECERXNZDTWFKGDKBTKYVPIFLAOQGGMAEXQPZVQAH");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("ZQZMTMNNLVSJGJMVRNOSBJARMSOHSEWALCYZEVTGOWYCCBKMXAWEFGKCXCMYLHETDHVZZILQGPTFDTSXNFKFTIDCXCPQVJBNVWOEHTZXAXDUINRAACZEJSGDOIIRKPKROWJJZQOUVPEQGCKBGHFPGUWGFMEIJQDRTWAEJPBWLIRVSHIYABVPZGFTFBPIUDSLUNWJPHLBWHMUOQCBIXRYNPNHMN");
    tmp_tmp_tmp_msg_0_1_0.description.assign("ZHMZVYZUXKIDQBYHWDBCHPGNYLQWLZDZFFQCUTCAQHEODJLWMNMIVAFBKJLKTRKWTOYMASXJTFMUDX");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.07713326941327858;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.806546823058398;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.9331289116563593;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.726928566781938;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 55565U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.8513053781360255;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 17673U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 30359U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.14439300572228964;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XLBLWEMQZJSURTKNNGTVGJADVYPIAJFGNLAOVLMQAEANLYTRPEBFHHQXBTNXSNXVXIVUYZPNLVABVCGMOJZYKZBGRCJFUVVUMUFDQXQCPPWLRXMWJRMHNSHWZFYHZSQIEEDCPHZWJPKSDEBPDGSQORVUMIIRXLTHJ");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Aborted tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::QueryTypedEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 53U;
    tmp_tmp_msg_0_3.request_id = 3779646708U;
    tmp_tmp_msg_0_3.entity_name.assign("BERIWIESQIGNUJNUKVRUZSURUNATEPQWKTZYMHDRYFLSALHTVZSECFPMJZCJLRXVWRYNKDYKGLMDEDSLXHGUWJMJXIEWSKQAIRBGIPKBPJLOZOBYCCHCMFCRGANQNBSYHATOBDXJPLEPQMAOZWMXOIBFLJFVBACDFOQGVTEHQP");
    IMC::TypedEntityParameter tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.name.assign("XDNYJYHFTIVGJUNFDRBLPRSJRAQKFASUPMDGWXCEHWLOFLIFZOTNXKVUEREDWSGVKVSQNKBZMWGTHOYWICQPAKVFOLTIHTANIXYQXIJKZXKOLBOKCVCGKHTACMCLYULGAPVBFTHULZKSMEGFDACWTSCYELRNYOWXHZMLAETXBCQHRHBWEDVRSGASDXBJZPQZUNDOMDR");
    tmp_tmp_tmp_msg_0_3_0.type = 19U;
    tmp_tmp_tmp_msg_0_3_0.default_value.assign("YTSFEAGKPCCTNRYMXLZRQVRUAOKOFPTEBWDMXXCTPFVHKUSODLEKHEJZPUXIZCGQPLMRMWMCDNATDEHQBRGPOSSXVTQZLNENHVNMQCAABSJSUQBHOJQBKJGFIFSUXJTIIXCOAZPNWQWTQOIIIURABWSZLDLDGHKWGYVYGKZNKOMCVVKYRZFWFHNWDWLAMJPVYIYNZLDMRLYNZILXABHGSQUYXWBUMFROGBFJDXIERPJUVEBHHGKEFS");
    tmp_tmp_tmp_msg_0_3_0.units.assign("CLTPRBYCGQQOWARKMPHBYBBNDQVDHIWROHCJLKHXUYIAZMOZQTMYVXNWGKZPQIMLVXPFNHUDSTZNCINXYBBQCEJEEFNCXUDYLJTFKLPHLKDDJAMKUFOTQITRHLDCVSVSMXIGRSHPXUUDQAKNOBLAUBTZGMAOGPGGPVQJASRJWWVGRPXJFMUNRLSOILNPSURNFHIWBRCDTGKAWEZFUOZVSYVOTWDKJMYMEZIHZCFFCI");
    tmp_tmp_tmp_msg_0_3_0.description.assign("IKRHVEOAVOAPUZSLDV");
    tmp_tmp_tmp_msg_0_3_0.values_list.assign("ZYMOUZZVBZCLRJQXEIAJCMTONUQHUUHDTXVASYHIDEKS");
    tmp_tmp_tmp_msg_0_3_0.min_value = 0.3358189798220209;
    tmp_tmp_tmp_msg_0_3_0.max_value = 0.4600201762155026;
    tmp_tmp_tmp_msg_0_3_0.list_min_size = 79U;
    tmp_tmp_tmp_msg_0_3_0.list_max_size = 244U;
    tmp_tmp_tmp_msg_0_3_0.visibility = 58U;
    tmp_tmp_tmp_msg_0_3_0.scope = 166U;
    tmp_tmp_msg_0_3.parameters.push_back(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.931495754466047);
    msg.setSource(41120U);
    msg.setSourceEntity(14U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(178U);
    msg.command = 54U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LTRHSOEOLKPJAXATMFTKABAWCREEIWUHWCOJABIIKRXNUEUCJSZZBJGJCIGEZRLRRYIGGNZLWDBSPSYKYAAHNCKOJRMYONDFLTREHISXQWAMTHVOLBBGGFBYUXQXIMSUDJ");
    tmp_msg_0.description.assign("AKKLECLPOAUXDLJQYHPRGFHXBCMOWAHSAGCKIZEJCJOUCTYFCUSTZVNPJHXFYMGGREVQBJDQWCRVLCQUUYYICUTUDZHINPURMMNNYBIJMSSSSGSENJQIXTURYDDCLHHGVFOB");
    tmp_msg_0.vnamespace.assign("DUEFWCYQRLOFGOXWJPNGCKEVWHJMIUMHYUWCIXROMXHHYOOZVTOKVJNBSUDTYYFRDN");
    tmp_msg_0.start_man_id.assign("WIQOSSIJDGJPXTQESLIOKNRAHGGQHPXFKGZUPLKNYVGBFDJNSYLB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZCAGBTPWQALOCWWFRNJWVQYNNTTAOHYJBDQGFE");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.22406625062313368;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7093129286811932;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8252049660502825;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9363829236023397;
    tmp_tmp_tmp_msg_0_0_0.z_units = 230U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.9604176673730836;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 101U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 21U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.3363525104057137;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.03578649617466656;
    tmp_tmp_tmp_msg_0_0_1.z = 0.04529482434821497;
    tmp_tmp_tmp_msg_0_0_1.z_units = 145U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.13279566898423656;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 63U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.580775080585316;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.9977430101696079;
    tmp_tmp_tmp_msg_0_0_1.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.custom.assign("UVXKFXEEOEQFANQWSNULNAJRCMHHTNXFJWTMDZETKAOLZYJGZMZFXGYNTBNORHZHRLKQEOLAIPKKNACDHEACXDGIFMIFCGMVSLSDRPCTPBOMMDPLFQIZIVOUYZLDGCWZCUPPTVPBJVRADGXQBBHUQCMWYLVHSKMVCTSRYKJFHSXYSGAERURUNTHGTQEURIFBBUIJDWXSUJBLQSCOKPAZGIKVTDNSJWEQVGXIQPRALKWEWWDMZBON");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DXPLESYCULYTXNKABBEFFQXRSBCRWPGEFKEQUJMUAWTORXIHUTBQNEKKVIWFPSDQBCJOTQXAAQSBLMMXPXKJMEAHDTNNQDQVHBBLHLJRXKMRMRNECLYVOLUGZDNYVIHIOZUZTYAKIHXJNYUYUFHSWTIACXQAAKOZHJDODSRPHVRYWIZBJWLAOLDMTKRCQOSJTYCPFOBPRGPVWDCFCFMGENZDULNZVUGFISSWGGENVFMZW");
    tmp_tmp_msg_0_1.dest_man.assign("VAXWODQRTFABQICOAPSWVQEZKHKMIHINXBCFLMVNUISQFAKLDACSSIUSWQPXPYSLUHEAOJTEYOUBLWYGKDHUXRMTDWVN");
    tmp_tmp_msg_0_1.conditions.assign("AGTRERUFZGDZJDNVIXFYNAJAITHFUIBUKKSWURQXYXNCOPZQPNYSOXEK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PathControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.path_ref = 1350875883U;
    tmp_tmp_msg_0_2.start_lat = 0.0581275965179886;
    tmp_tmp_msg_0_2.start_lon = 0.19183932425741534;
    tmp_tmp_msg_0_2.start_z = 0.9832037101363094;
    tmp_tmp_msg_0_2.start_z_units = 206U;
    tmp_tmp_msg_0_2.end_lat = 0.018053174952990747;
    tmp_tmp_msg_0_2.end_lon = 0.032733073477213326;
    tmp_tmp_msg_0_2.end_z = 0.41334366765985053;
    tmp_tmp_msg_0_2.end_z_units = 249U;
    tmp_tmp_msg_0_2.lradius = 0.8196782157221785;
    tmp_tmp_msg_0_2.flags = 132U;
    tmp_tmp_msg_0_2.x = 0.221272599144535;
    tmp_tmp_msg_0_2.y = 0.05801699628471091;
    tmp_tmp_msg_0_2.z = 0.8706995814206108;
    tmp_tmp_msg_0_2.vx = 0.6402321557163223;
    tmp_tmp_msg_0_2.vy = 0.28870390436617654;
    tmp_tmp_msg_0_2.vz = 0.5677199266011518;
    tmp_tmp_msg_0_2.course_error = 0.29233450376077597;
    tmp_tmp_msg_0_2.eta = 50937U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::NeptusBlob tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.content_type.assign("DLZTJFGHLWQVCOSPGILSMGXMBTQFOSUJERKRKHZAULVRAAUZGRHTZTNPPAZBSKCRWRCJODQIPXSNCOTHLMDZZJMESPVOXYZDQIBNVOAYTEBFZPMVKJBNNEQORCKMAQWDWSCUXFRXYOJLVELYCLNNBEFRXGDIIDGUXTHVJKPTKFJOJHWHQURBOHVKDM");
    const signed char tmp_tmp_tmp_msg_0_3_0[] = {-78, -37, -116, -37, 53, 81, -126, -22, 55, -29, 65, 73, -57, -84, 51, -50, -66, 41, 104, 85, -2, 111, -42, 82, -98, 6, 98, -119, 112, -12, 9, -119, -31, 104, 6, 69, -87, 4, 126, -125, 70, -83, 86, 98, 88, 123, -40, 27, -25, 117, 10, 99, -50, -18, 53, 57, 45, -24, 51, -27, -8, 89, -109, 105, 1, 81, -51, -118, -93, -21, 124, -73, -32, -80, -39, 43, -37, 111, 52, 103, 52, 36, -25, -109, 44, 106, 63, -60, 31, -52, -32, -123, 106};
    tmp_tmp_msg_0_3.content.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
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
    msg.setTimeStamp(0.21873665715075208);
    msg.setSource(38753U);
    msg.setSourceEntity(114U);
    msg.setDestination(6558U);
    msg.setDestinationEntity(229U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PCTEDOSWYBEUJRNDMQANSUOJWBJMDNRLUIFHFNFTMQJPYGOJOVROGFSECSKLLSPAPBU");
    tmp_msg_0.description.assign("RYKEEGARWAGTPPYROYNMTPRROLSKXKFEIMNVMEWXGJQCVAODZFZAXCNMQOYJSQWDEZQWHIEISFMFEVIYZFSTQSBDZQLHLOG");
    tmp_msg_0.vnamespace.assign("HPNRRQJRUEEGJELVSISIBAVYKFAERHIPQINJGMDDSLTGNDRIBXHCVPNYRMJESCZJSEOFNBGXEMTQVZAJXCBZPXVNXBZHQWWPTUTDIGEMUUILVFSBMFMKZR");
    tmp_msg_0.start_man_id.assign("LSZBPFGGLHUMJJLGPMRWKYYUPBTVGHCVADKVKYZSAWJDPCOIEZNTHVLHYYNVTVZUKWXHYYHFSUDIXGCQPXRXEVMIDRUJENKZHJWQSFPOXKTJBEEONSSRHSGCQKANUDFPBGR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TAMICINXFPLNQFVJVVVBKUUKCGUVASDHMAOFPTWTYHVNXMSYCCBQXAMRYGZEBOR");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("RROTYORSNKJJZMCKVOQUHLAWNFQZOFUAIBJEXOVPCWYBXNPGKDQRKBDMEGAUNGUHBYLYPHNZIDNSWSWILHJRVIQXRUYKGZOMTHRWCQTNCSEEANBTAHKSPSJAXWLKXLFXXXOIPUVYSPVYFJEVHDIZOJXRANBWDMHEQSFTTWCZSGLDJLUAGMQQRIGKEQYVUFTKMICCREGPW");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("TXHEMRMMDUVLJMKYXNANUSEITWCFTQOYOIQXJICFRTJJKQGZNPIBYBHTALVKDXCYDBMKVUTUTAJGEVSDHOWYXDZZONLCWPEIPEIWPZFNGHROXAPEZIKVMFGWPMIPPNKCDDVHASFLTRRJLOXRLLWBQULNGOMSYSKTJMVHJZZGMVXQUZO");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("KJSDWSXGJRVUBNORPFNHHCVSGGJTUUFHCIGDOWKQTVTPINEQWIEAOKGASLXFVTSTDXEELJOORGCGMRUZPFKARIMZOOTRYLIMIVQUCHLOJTNMKYVYDKPAUIHZGNGFACFPBWHSEXYBDYDWWERCJTEPQDZBLPHECXMWVXMIJWRDSKWOKILXCMYQZZATETZULZSQVCNFYKIUMDBJFCZZRWAQXYBPASMUANJXSNQLYJNHBVN");
    tmp_tmp_tmp_msg_0_0_0.description.assign("VWCQEKHTZHGKNYXFOCQMVIDRPJFUWCGGWTAQJBMOCDAXOXPESDEFITISYOLDKFZHFWRXYRHXLHYEO");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.4321436840601358;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.5434936755957069;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.6998341435251989;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.7644766239013197;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 43701U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.06564091410104678;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 36605U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 56051U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.8261375381073821;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OVPGQZZIMEYRKIVYXMZNYJAELYHYZOOSKPDCJGPDYWFYVGVEUQKXCXBTBJQDQAFRYNLKRZKWDRJDNQIBNOSCFGMBFIHJSNPJBLMBWHIBIHPQWDCRZAMMVKGVTRFLNLLUAXFBOFE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::BeamConfig tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.beam_width = 0.28693936099027084;
    tmp_tmp_tmp_msg_0_0_1.beam_height = 0.8407335762014221;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
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
    msg.setTimeStamp(0.6728683391011764);
    msg.setSource(63379U);
    msg.setSourceEntity(11U);
    msg.setDestination(57329U);
    msg.setDestinationEntity(54U);
    msg.state = 236U;
    msg.plan_id.assign("RAIZUOQIPBTTHLESFGIZQREBXYRZMYOYCFPOLBYWLJSWLQXZDGHWRDSAJXSAVBFLLQCWFIRJKVGVYSEUZGFMFRDEQUWVPXKLYNTXNNVUFZKNXNWLJNWJBGDDEDRYCPYGAWMQUTDOJTEFMMHEHBTGSPTIJNUSUTIMLNXITQUUMAIWVRRKZJHCHQDZCIXOCXGPKXKCTFGADHYUOSVAEVFPHOB");
    msg.comm_level = 48U;

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
    msg.setTimeStamp(0.44578809588205537);
    msg.setSource(57539U);
    msg.setSourceEntity(175U);
    msg.setDestination(13402U);
    msg.setDestinationEntity(199U);
    msg.state = 76U;
    msg.plan_id.assign("HLZFOTTPEXWBRVIAUMAJBVCAMVZOPNPRASMTVYNNQRFHHWIFACJGPYICGOETGLGHEDCURBBMRLWXSZKJMWCSGVNBI");
    msg.comm_level = 0U;

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
    msg.setTimeStamp(0.9389460374528072);
    msg.setSource(2343U);
    msg.setSourceEntity(92U);
    msg.setDestination(11649U);
    msg.setDestinationEntity(160U);
    msg.state = 177U;
    msg.plan_id.assign("SDGMCUAPRMFUKXZVVOKAJSMCANVQVFRIOAWFQPYMUAHLFUYJNDGVNJOZAIDXXFPGAHLCZSYMKFLKYTOUMHXURYZOHIBKXCTNGRTLODMXZTCGTEPVQNSTGPWWNPSNESJCPHDHVBEVYHFEFIJJLSJWWSXOKLRBZYKBZ");
    msg.comm_level = 143U;

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
    msg.setTimeStamp(0.17432976237406117);
    msg.setSource(11181U);
    msg.setSourceEntity(56U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(44U);
    msg.type = 207U;
    msg.op = 105U;
    msg.request_id = 15047U;
    msg.plan_id.assign("QIMHWVFEPOESG");
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 29700U;
    tmp_msg_0.status = 142U;
    tmp_msg_0.range = 0.06358513266678101;
    tmp_msg_0.info.assign("DABYMDUJQCUQLHZKGTIXHTCSZBIHIOYOAFNNVRUCEIBVEZRHSOPNCUKMKEVZAASTQRDHLFMFMHJYCHLWLEBUVPNKTTSWVKKZRKPGWWMSJTINBPOCCWGPDMOWOYOHRBEQSFXGZXJJUATNVMGQFLDFLPUD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QEYMAFRORFZNNPZULCWBDBJLAPMORTMKWELEJAYURPNLBOJKSRVIGPOSBJOUZMDTVBGAXUYGAHQJGKCPORLOMQZRGVNMWZFUTESSSOKDOJMWDVIIWLRGLABHGFELE");

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
    msg.setTimeStamp(0.6640066295015469);
    msg.setSource(50869U);
    msg.setSourceEntity(234U);
    msg.setDestination(29181U);
    msg.setDestinationEntity(57U);
    msg.type = 171U;
    msg.op = 43U;
    msg.request_id = 48349U;
    msg.plan_id.assign("YTBGXDEKJIRDNXWAJBUFPNOFAMUSBVMWWZWZVVBPJZXYCRLURFUTKIEHVDQDSOSMYQEUTETTOPWRFXAGEXHHCPLXWIVZQVXQOONDIORJPOCLYTTNFJ");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.6058617012574595;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CVYHSMTKEWWLWEHYXMSJMVOUEGMWBSEWYSGZPCIGXMPTLJPUDJVUPCDQOOODQKLWBAZHYKYIXXAQVICACCQKBNUTVTVEDNWXFSVKBNFZYZTDTWCEJNRAIOGMMRJAUPGSTJRGESGCQZZUBEQRDYIPRXCIHGIQDFBLNNFTINLHIFVKKYLFSIKAEMGHKZSLHWNZQBHWFOCL");

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
    msg.setTimeStamp(0.1845944043341632);
    msg.setSource(9302U);
    msg.setSourceEntity(237U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(195U);
    msg.type = 79U;
    msg.op = 184U;
    msg.request_id = 1554U;
    msg.plan_id.assign("QWVDQQQFSIEFSFHVWPUGMTQHUTIDHJNPEGSMLKGBRHCJRCAAWECUNITVCOSBPKEBQXAKSVUKXWMJEERQVOKIKZAPCWRGCZYBSGSZPAVVLTFQUGAKXVUPMXRYOYDXBARPWUNHWMDHCJZDJHLXAEKKLWLTUOJPXHLVNSFXBZZOA");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("CIEONKTQXZZPLCZCFLDNLSFRSCLAWBKYTGPEUZDSELFIPGSVYQWAVJOHTLOHYZKILGWRMUGLTPRHDIFGXZBYSRZENGQJMIWKUWJUIPMCBWITGHNUFIAXCVQMSNARNRJZVMXAHWCXRBQEJQGWKBJNOOBAXMTSJXDBFOLXSR");
    tmp_msg_0.plan_size = 871U;
    tmp_msg_0.change_time = 0.4179706458939729;
    tmp_msg_0.change_sid = 3929U;
    tmp_msg_0.change_sname.assign("RWOKYDJMYLSCSQGECXQQDBIWHRRHYHZKISXIUVMYZGIWWPELCWV");
    const signed char tmp_tmp_msg_0_0[] = {45, -48, -95, -2, -27, 61, 111, 9, 45, 26, -101, -29, -21, 29, 56, -64, -96, -59, -30, -67, 96, 39, 59, 114, -57, -115, -70, 12, -82, -91, 99, -28, 109, 42, 18, 73, 77, 15, -35, 45, 90, 84, 72, 91, 59, 105, 82, -82, -79, 9, 117, 77, -94, -90, 88, -59, 121, 82, 118, -7, -49, 28, -43, -60, -102, 80, -8, -49, 16, 78, 74, 59, -111, 7, 44, -124, -26, 106, 11, -1, -84, -49, 77, -61, -59, -11, 61, -92, -107, -59, 32, 10, 55, -78, 3, -71, 21, 116, 70, 2, 64, 32, -128, -88, -11, -120, 24, 61, 30, -6, -113, 33, 48, -94, 93, -54, -80, 68, -98, 111, 111, 94, -92, 24, 41, 121, 2, 48, 38, -78, 53, 8, 47, -38, 78, -26, -84, 104, -41, 27, -4, -38, 5, 42, 15, -107, -115, -69, 61, -50, 67, 78, -8, 48, 125, -120, 40, 73, 7, -114, 123, -127, 91, 46, -23, -57, 54, 121, 73, 83, 53, 74, -36, -2, 1, -82, 10, 17, 67, -111, 108, 27, 108, 88, 41, 57, 123, 40, -107, -83, -121, 73, -47, 73, 28, -124, -10, 97, -79, -83, 69, 119, -105, 46, -105, 37, -64, -89, -120, 53, -49, 75, -62, -125, 57, -70, -15, -77, -116, -71, 70, -85, 25, -30, -81, -78};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUWAKQWVKNUJTDMSKUNAXLCRFJEHTGIUOABNDYSSTVCNMHOBBTDYNZEAEVLIIXAXZQFFHEJZASCFBXHRRBVHVGDXAEAAJULMCRBOPMXFTSKDFWCYOQREMLLMRJHWXDC");

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
    msg.setTimeStamp(0.38727517202365835);
    msg.setSource(17253U);
    msg.setSourceEntity(114U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(101U);
    msg.plan_count = 55720U;
    msg.plan_size = 1021157906U;
    msg.change_time = 0.5225896019073318;
    msg.change_sid = 42168U;
    msg.change_sname.assign("TSPPMEHKTZRBJLWGYOSCPCVXYYHESUITAKNAKVCLADHFLGVBWITTGOQHYSJEWSKRHUOQAWWDJOBYUQMSOVXROEGCJALIWCWDFRRUEHFNLCJAPTZEXHSEBURUCJNBCPZMUYGNXIVLSMMVTIAUKNREIWBSYXEJDIFMLZVKTHGNCILJDJQVBFKAKNSPPQMOVPDQZLQRBTYDXRAXYWTZMIQZY");
    const signed char tmp_msg_0[] = {85, -81, -78, -45, 8, 52, 93, 80, 13, -69, -14, 56, -13, 87, -15, -48, 60, 68, -102, -74, 53, -98, -9, -59, 84, 42, 82, 0, 3, 43, 71, -42, -55, -98, -76, -101, 85, 13, -24, 32, -58, -128, 24, -26, 62, -55, -35, -51, 20, -58, 71, -101, -13, -65, -123, 68, 86, -118, -113, 74, -24, 3, -1, 45, -32, -115, -51, 66, 125, 121, 52, -104, -19, 26, 9, -107, -82, -62, 98, 72, 94, 124, -110, 101, -14, 89, -12, -77, -49, 108, -124, -47, -72, -25, 111, 27, 0, -20, -16, 6, 3, -5, 45, -20, -72, 90, -85, 76, 7, -83, -44, 7, 85, 9, 45, -98, 9, -121, -26, -126, -93, 88, -127, 13, -90, -35, 46, 113, -58, -38, 90, -109, 89, 73, 102, -103, 112, -51, -26, -74, -43, -65, -50, 63, -26, -104, -68, -50, 95, -40, -2, 77, 73, -40, 94, -78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EJNMMCFJIBQXGVYOSASIDIAPFQEDLEOVAXCUJACTSNEKXMLNCHUZJLTNGCJHERBTRSKVARDTMSEWYAYXSKMOCJRSYDNBQWCDJQJNPHOWKBFGXHVKIMFBHTHGPXAQIGRXGNEXLLOGACQLTXHDRCDGLIKDZLZIBTNYQVVSZUTZYKYYVVTOUOAYPDHXUVEUTFFRLOEPLFJQHGRPKBIKFZWZSUBOPWCMUPFDRW");
    tmp_msg_1.plan_size = 18852U;
    tmp_msg_1.change_time = 0.898998940968829;
    tmp_msg_1.change_sid = 34425U;
    tmp_msg_1.change_sname.assign("IUFGEOQXCIQVPPKCITNACBTMSHAOEYMNQIJGMUINBBOIAOUTVLSWEZJWKUTGRUMYXWISXDVPPZHZCHFVEJLXRRGJBMNRMACEVRIQLZMLVEKHSITYMUZKWIXWJHLNFONGDYVDAQABBJNLAKDZTR");
    const signed char tmp_tmp_msg_1_0[] = {-23, -97, -33, 14, 8, 56, 64, -24, 114, -97, 95, 42, -26, -15, 28, 99, -77, -48, 24, 48, -29, 48, 5, -60, 53, -71, -27, 111, -77, 39, -2, -97, 51, -126, 74, -125, 52, 111, 57, -112, -74, 94, 82, 74, 24, 72, 99, -37, -33, -75, -74, 117, -102, 14, -26, 53, 9, -117, 49, -56, 14, 91, -66, 95, 76, 67, -32, -52, 88, 64, 11, -57, 65, 3, 88, 6, -87, -110, 8, 58, -51, -49, 80, -65, -90, -36, -110, -16, -46, -80, 49, 21, 41, 58, -76, 1, 23, 5, 32, -105, -78, 33, -12, -27, -95, 102, 61, 60, -59, 126, -9, -47, 5, 15, 102, 48, 122, -24, 124, -13, 68, -23, 51, 113, 118, 95, 104, -63, -19, 23, 12, -2, -11, 70, 37, 6, -115, 50, -35, -86, -17, -16, -21, -88, -109, 30, 120, 111, 15, -45, 3, 72, -103, -15, 114, 47, -88, -72, -124, 22, -103, -57, -28, 44, -60, -59, -124, -49, 29, 76, 39, -101, -30, -48, -82, -123, 102, -120, -91, 28, 11, -65, 2, -82, -56, 48, -109, -77, 85, 93, -29, -63, -104, 93, -42, -48, -119, 32, -35, 87, 66, -65, 27, -119, -2, 54, 26, -127, 96, 125, -97, -62, -9, -8, -127, 50, 80, -72, -64, 98, 72, -9, -25, 100, 122, -106, 21, 15, -56, 10, 19, 80, -54, -106, 7, 72, 116, -51, -117, 62, 51, 62, 61, 44, -95, 68, 32, -102, -68, -82, -95};
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
    msg.setTimeStamp(0.8407734932946774);
    msg.setSource(60868U);
    msg.setSourceEntity(204U);
    msg.setDestination(34019U);
    msg.setDestinationEntity(190U);
    msg.plan_count = 28411U;
    msg.plan_size = 2563979576U;
    msg.change_time = 0.3886102043379318;
    msg.change_sid = 31053U;
    msg.change_sname.assign("KKLDTSGXTEJLGACFEBQKMGVQBXXLDFCIKVWXOJWVZRIQZJXWUTBPWSLLSCKFNIJMIXUGSNTYMSBGNACPLGYDEOENOQZYQYVRJIROICHFBQDRGYVQFANZTPMBZUVH");
    const signed char tmp_msg_0[] = {-79, 39, 18, 114, 78, 114, -87, -48, 83, -53, -65, -122, -101, -45, 79, 49, 114, 82, 50, 53, 92, -17, -119, 70, 29, -73, -33, 38, -4, -5, 10, 124, 47, 35, 81, 79, 99, 104, 119, -46, -84, -58, 62, 38, 109, 69, 43, -12, -77, 8, 78, -3, 44, 59, 123, -49, -11, 119, -121, 32, -56, 95, 124, -121, 39, -44, -70, 126, 59, 118, -1, 14, -6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UCSWUGVYGMSZMQCZCNKWQAVSHJSXPKSEDNYVRMOVNVPUMEKCLOUJRZLECAZVDSX");
    tmp_msg_1.plan_size = 43866U;
    tmp_msg_1.change_time = 0.6677033478817471;
    tmp_msg_1.change_sid = 24386U;
    tmp_msg_1.change_sname.assign("CJOTBAAJCEBTPGLKTNHTDXOKMDSRXUTLFMRXAHCSSSFKHBMPHYUXZRMVDZPJRREEGIFSYLVEKEJXAZRDHV");
    const signed char tmp_tmp_msg_1_0[] = {82, 76, 24, -44, 4, 112, -33, -117, -23, -121, 58, -57, 7, -91, 14, -37, -70, -72, 38, 88, -92, 13, -101, 114, -81, 25, 73, -64, -126, 81, 75, 0, -80, -27, 61, 115, -59, 25, 22, 37, -26, -108, -46, -18, -18, 124, 111, 66, 69, 79, 64, 59, -59, 42, 124, 42, -79, 105, -59, -50, -16, 24, 53, 20, 93, -78, 10, -14, -25, 86, 13, 89, 124, -61, 97, 100, -78, -47, 109, -54, -118, 109, 5, 111, -51, -47, 33, -75, -66, -106, 56, -8, 55, -52, 10, 27, 109, 29, 121, 92, 16, -24, -23, 40, 40, 22, -105, 18, -3, -71, 17, -33, -106, -53, -108, -110, -45, 118, 47, -124, 47, -62, 109, -85, -66, -20, -16, 51, -120, 9, -109, 102, -92, 101, -58, 97, 31, 14, 11, 96, -69, -34, 40, -122, -12, 11, -80, -52, -48, 110, -57, -108, 93, 96, 10, 45, 73, -100, -98, 79, -35, 35, -27, -64, -72, 109, 125, 69, -60, -46, -95, 30, -114, -14, 17, -88, 41, -25, 64, 48, -19, 80, -91, -128, 71, 120, 102, 22, -31, 120, -24, -98, 81, -85, 6, -110, 66, -3, 85, 120, 71, 123, -11, -87, 70, -115, 14, 102, 22, 82, 22};
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
    msg.setTimeStamp(0.36359434675744984);
    msg.setSource(42868U);
    msg.setSourceEntity(177U);
    msg.setDestination(36203U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 30457U;
    msg.plan_size = 2233996447U;
    msg.change_time = 0.7374598738434113;
    msg.change_sid = 61740U;
    msg.change_sname.assign("IGVEBCVLGONMDEFOHJHEMBYLIFHRHRVXNZFWZZBOKBAZZJSKCCNTTWERZMVGDOLBIRHMQTBSBSKJIYULSPOZSOMDULHVWTKLDIEKQNLARQFMJCFEACHFJCZCWPXKHGTGPPVPWYPNYVZGQAKOMPRKVGNXAXOAPSEWNTWTDIDBIBVXGYQQOUJYMTAMQPXQKCNWNJYODDFZUQCXJHCYYIGXALUTSSFUALVUELJGEYFJBEADRSKRU");
    const signed char tmp_msg_0[] = {90, 10, 121, 72, 67, -122, -94, 87, 98, 63, 85, -53, -104, 103, 14, -58, 88, -88, -112, 97, 2, -120, -54, 24, -121, 80, 45, 4, -28, 124, -107, -46, -122, 57, 10, -94, 116, -121, -85, 30, -124, -2, -7};
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
    msg.setTimeStamp(0.21288443392459555);
    msg.setSource(34705U);
    msg.setSourceEntity(101U);
    msg.setDestination(19486U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("OFCBGDUKABGANBJIAKPSDFOAYEZGQARJCZXOFDBRKTXZEFHKAGLQIOWFGCXSWBMKQDYQHIMYJWZUOEBVDTJJJPYWRDEEAXPMDXHHURCMLETIGPHTMDZRMSMRLPUUPINLZZSRKCBVORXJJIFKYQEDSPCLUILOVPQOFKNWWZJVHTHINNVQJFHDHAXGSUWGWVISCBUVNAKYCYLGABU");
    msg.plan_size = 16938U;
    msg.change_time = 0.9020199422696402;
    msg.change_sid = 62854U;
    msg.change_sname.assign("NJWJHUSNSDCPPZIVBOUNLHZUBPGRLWIRZIJUFBC");
    const signed char tmp_msg_0[] = {-2, 47, 77, 58, 98, 112, 73, 88, 27, -43, 86, -126, 10, 23, -11, -11, 99, 89, 118, -120, 23, 75, 59, -69, 57, -112, -45, 35, -2, -47, -10, 35, 72, -88, 77, 113, 93, -91, 68, 103, 1, -7, -59, 90, 40, 51, -11, -98, 56, -60, -19, 84, 99, 86, -52, 99, 17, 44, 112, -101, 22, 91, -77, -111, -15, 73, 120, 63, -67, -26, -121, 45, -21, 102, -20, 123, 76, 13, 115, -85, 92, 16, -16, -92, -94, 126, -3, 44, 28, -24, 75, -88, -90, -74, 25, 8, 102, 126, 41, 50, -16, 53, -33, 58, 100, 122, 22, 120, 110, 119, -109, -37, -68, 78, 68, 80, 104, 86};
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
    msg.setTimeStamp(0.8736712639997909);
    msg.setSource(61007U);
    msg.setSourceEntity(179U);
    msg.setDestination(40436U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("VUJOIKWUFYZAWNJYINFYIHXWBIQDRXIGTDZTJECACTIQUTGHAYGCAFUTREJYJVILQGFXGVHMLPXRGANLSYRVMSPQHHDTWQHOQUEBXCDEBULVNWZMXYJWFLVVBCEZOCKERPUTBPAGZRJPFRGJSMCSNGLFMDXQEPXB");
    msg.plan_size = 35472U;
    msg.change_time = 0.5549687395153076;
    msg.change_sid = 1345U;
    msg.change_sname.assign("FKJMESUXFYZJIKMYQKFWBIURMCGZJDMUSRUZQDEDGPOVKTHTBCHDHAOAAICVANAULLIIVRIIBNKEUNVNLFDOMJBZAZODCILGYLXHNWYEIKIQFSZXSFCBHNUXGSOMTPXBWRYJFETWWQJYBBJPPW");
    const signed char tmp_msg_0[] = {-46, 13, -122, -32, 103, -67, 1, 87, -70, 17, 29, -40, 26, 112, -41, -17, 94, 24, -99, 25, -118, 59, -14, -72, -19, 105, 9, 39, -102, -2, 114, -82, 80, 33, 20, 101, 112, 106, -38, 98, 26, -68, 113, 13, 38, 94, -85, -4, 104, 15, -23, 102, 118, 40, 72, 62, -34, -37, 50, 78, -85, 70, 90, -13, -59, -83, 101, -47, 100, 93, -5, -79, 7, -71, -79, 122, -63, -120, -119, -99, -37, 47, -57, 70, 70, -54, -82, 47, -60, 64, 35, 115, 92, -49, -113, -115, -29, 75, -40, -55, 34, -83, -40, 115, 91, 49};
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
    msg.setTimeStamp(0.7766242494224757);
    msg.setSource(24096U);
    msg.setSourceEntity(25U);
    msg.setDestination(52776U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("CMAWSVUOBZVQDXYFLPWYBYPOGFPLTUCNNXAZCSXEWNUMHJFTIGZUBJKFVOTEHSERTMIRVIKVTSBJPIVULSZYBGFCLYIXWMXYPUNJXRHFFDQQCNUKSPEEDILWCRWYIHLYDOKBFNMWUJXHZKQYREVDCPFPZJGPRAHMOSORGJEXQSFD");
    msg.plan_size = 38149U;
    msg.change_time = 0.0049130758770293825;
    msg.change_sid = 6594U;
    msg.change_sname.assign("MBZCDNAOCT");
    const signed char tmp_msg_0[] = {41, 66, -120, -44, 108, 30, -80, 66, 42, 25, 92, 91, 42, 92, -122, -86, 120, 10, 20, -25, -18, 92, 109, 40, 125, -39, -42, -11, 76, -19, -53, -62, -117, 78, 12, -60, 44, -39, 105, 87, -87, 93, 34, 69, 21, -95, -117, -12, -96, -38};
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
    msg.setTimeStamp(0.2485074145152405);
    msg.setSource(34036U);
    msg.setSourceEntity(246U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(203U);
    msg.type = 114U;
    msg.op = 86U;
    msg.request_id = 30142U;
    msg.plan_id.assign("IXQLMWFPFPSPAHIOWEFOPHVOFMIRPQMHCHNDGFNREWZUNGCEQAKBEWQULHUCNZJTPLVXBMYHDDVIWXVJFLYKJENEZAGSQSVYIVRGGUWKKUMKNJZFYSPRTXAYOINXXZBBZYJAZVPWKZZKDBXUVSPNNWHTHFCO");
    msg.flags = 27408U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 29U;
    tmp_msg_0.quality = 120U;
    tmp_msg_0.reps = 165U;
    tmp_msg_0.tsize = 191U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DXSOKHTDCJJXUSOTWYAMOJYESRHKYFHNLKROQLIRGFWEZYGNHQRNEUAABBZAWFVCBTSFGUUXCQNGLBIGQCYXYPPGRPQBGMWCNUTRMFEUXPCJJGOSVQWOOMQWTSSYFZRYJRRAZVPANSPGVCAMMITBZLBODYGKIDFMUNKKEKBKLDKHAMEETUKIEJPPHNXNAUELSZORSMHXDHTWFLAZZDHYCIX");

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
    msg.setTimeStamp(0.8765154129609932);
    msg.setSource(37112U);
    msg.setSourceEntity(232U);
    msg.setDestination(16011U);
    msg.setDestinationEntity(155U);
    msg.type = 189U;
    msg.op = 0U;
    msg.request_id = 31382U;
    msg.plan_id.assign("BOLUFQVQYEMULLSRMHATKKLLMTZPJUQQTONJEXVUFZECUCDJNLOLHODHWWACBNVRNOMRXTUBWZVEAESAPYCZUYIDHCSZNPKVRDUXPHEDNNYSIWJBJVFPQCMRK");
    msg.flags = 23590U;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("UJJZUBZUXXNZDWPCFXCBEYHXSXJFTYIDGJYBHRNQFYVCSOBPQQVFSWXTIAVOABVMAUPMPNJVTMMAONDQYSAEGPKDZQYTJ");
    tmp_msg_0.op = 171U;
    tmp_msg_0.sched_time = 0.4653657948352494;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBNWBFXDEYVNHASZMRHZPGUXDZTKGOPBQLPTITXVWQSSIQQDJLRRPMIEYZQZNGPLYHAXOFEWQDHKWMCAD");

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
    msg.setTimeStamp(0.20839765078276207);
    msg.setSource(27213U);
    msg.setSourceEntity(232U);
    msg.setDestination(27532U);
    msg.setDestinationEntity(16U);
    msg.type = 12U;
    msg.op = 42U;
    msg.request_id = 37503U;
    msg.plan_id.assign("SCBWMXOYOVMBPPAUBJQEDHJXMMLDHWOEQMTGAYVEXTIQEPPDNHQDHTYUDRSVACWVKGYWNDIDINUUAOTLPUFLH");
    msg.flags = 57051U;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.8543661538152845;
    tmp_msg_0.x = 0.9072358946355829;
    tmp_msg_0.y = 0.9277725710537393;
    tmp_msg_0.z = 0.4331503347425858;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PVYBXBNADHMHBKKCCISVAVANGIQKLPHXTYZJJTSYPCZVKQMVMMQTZCSPEWTRSHOHIFRRBPLDDQYJFREEILFEOMWNFJXADOHNRMFWISUDZXPWAXLVYAGUHGLCOZLOXQYSPKDMMDWBVUPFGQDNUUNHNOQDELZXGTSECYNTIJFVTWIMUQZBFWYGUBSK");

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
    msg.setTimeStamp(0.7638362184168062);
    msg.setSource(28427U);
    msg.setSourceEntity(60U);
    msg.setDestination(59124U);
    msg.setDestinationEntity(11U);
    msg.state = 36U;
    msg.plan_id.assign("OJFCFXRQWZXZEOBIRSLUPACKYUEPIQGBFQRHIJVWHINWSDVYGMRZOXWDLPHTJHXJMNMECPDOCEGWJSCFRNXDPXMOKFBDYAAUFQBPOYDQTNFXVINOTOSADWQKGNZNYVCVRAMCGSHUTZQUAEFLJBHYXUVKGKRAMMYQLTUYCSMRYKDRPBN");
    msg.plan_eta = 1067373694;
    msg.plan_progress = 0.661952341874103;
    msg.man_id.assign("DSPMVXNNYUIVADBTBJINERORWIDMKNTKJGFZAQJUJAOBOYCGMQVBOITNPXAKCLVWYFAZWEZQJKDLQFGOFSCQXVHLDGFPEMGQCCWSHABOUDOLMKZTUEHMLROREIRXOBLBHJXJWACGEHDFCSWGNIYGJDCDQTXYJLRGIPQVFYXUIAMWSNMRHERNSPSYWHZJCWFNTBMXQPBSHTHTTXFRPZRMPFCKVLKLNQUZUEYUTPIAEBVWLVSYEXDYAUPIKU");
    msg.man_type = 27661U;
    msg.man_eta = -550987728;
    msg.last_outcome = 144U;

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
    msg.setTimeStamp(0.530310874591066);
    msg.setSource(4496U);
    msg.setSourceEntity(29U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(80U);
    msg.state = 86U;
    msg.plan_id.assign("VHKDKDCWUXXQWKHKDCDHEBUZSGRPIYKLSQLTDEWPNUOVUVQSLQOBFTUWYPYLRFFCRSC");
    msg.plan_eta = 622435730;
    msg.plan_progress = 0.25442624222702326;
    msg.man_id.assign("VHAXQOLSGAJRSAKAHYTUFVSYDBXAFAGEPQCJDJBZYUFNSUDTCIMQUZMKIKUCWNSEXNVUOIYEGHSXVTUYZUYZOBVPTOZALFHMVHHCGJGMLIHJCFQYLAHKCTBYTLCTFMDIW");
    msg.man_type = 51813U;
    msg.man_eta = -709057764;
    msg.last_outcome = 251U;

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
    msg.setTimeStamp(0.8397079042069201);
    msg.setSource(59859U);
    msg.setSourceEntity(140U);
    msg.setDestination(40477U);
    msg.setDestinationEntity(132U);
    msg.state = 19U;
    msg.plan_id.assign("UTETRJSKOOKIMVWZWQEXCJLAVSMRBPVFPCARXDPMQWQXFTLVGXVZKSKBIDJTDBGZNNYSTYPDHPYLQOTFEZSRYOFBLPGIONAZUUGBPIYQXTCNAPQJVJYRPUQNAWCWJHFCNIRRGYXCCKJVUZZMNVWFHHMSLAOFZUSJXMFXEOHDDLSQKIMUAHESDBMDADMHWKUIULXGIVEBBHMGGITZNOYTCKXRRKNFPLWWQGOKACYE");
    msg.plan_eta = 657552657;
    msg.plan_progress = 0.2753959777882874;
    msg.man_id.assign("LWACHDJOUJWATGIHMTGYYVQFMCEIDFCQPSRVUSYBKDWZRWJOOGQXLYWNBNVMBPKJXZHDHRUXHCSQGRHEPWXTBFVQZMAHETUBWDPEGZXRLXFYFKK");
    msg.man_type = 58649U;
    msg.man_eta = -1441300307;
    msg.last_outcome = 119U;

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
    msg.setTimeStamp(0.7680701081488908);
    msg.setSource(20637U);
    msg.setSourceEntity(93U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YRVIXOBBYSPITWLPMUFVQJVJXDXTCDTUEDBXXBABRUJGNKWKNQKQKCQCDMLFYSEUTGALJSPEIFUKDMWJXZTPWSWHGZNCKOOBBMEUOGUABAYYMLKNRXYAST");
    msg.value.assign("TBVEOZJXTRWUPCYEICIWGCRFRHUZMPAGZZUHGFYAJLDZNQKGJOPMJUSOCNRKFDZEIBYSTYCBHLARWXAOQLALCPKMPWBPJJXKTFHBQELMGGUZIORUXLMUGYVBSRHJDZMAVZSNVRDXWXFJKSESEKDGQPWNEOMWSW");
    msg.type = 168U;
    msg.access = 217U;

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
    msg.setTimeStamp(0.03553667400494931);
    msg.setSource(17165U);
    msg.setSourceEntity(186U);
    msg.setDestination(32378U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZXIDZYANPIESFWSJYVKQTFONLTJKTFMVOYFTWFPHEABTGNEUHYYSLSPFYZKOOVEGPXMLAUE");
    msg.value.assign("JGRVTIZNYGKFDHQFAQHKKXCFGKLBHOHMDAPQAXIVWXHHWLQEIFDQDGOYRJALGRGAVNVSHQSUMPWOJFQEROCVULFKEERANBHXLYDXJAOZMOJBBJUEEJWTYILIDTHFCNCOBKEJMXSPWSBXSZZXXESPJICOFZPBDRQJVEYNVGTNIN");
    msg.type = 165U;
    msg.access = 87U;

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
    msg.setTimeStamp(0.49347863831855854);
    msg.setSource(8148U);
    msg.setSourceEntity(254U);
    msg.setDestination(49514U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XIUYVRZOWNPRNYYATPZEQXWJLIUEXCINVMRFXXUYOVBUZPYJEHHKSBOZQCPXERWHDLTAQKBRH");
    msg.value.assign("UBHXTJVHFSLOZCBMLTTKOFLCINACETJGAUYBICIHDFRAGWPOPNBRCWIMPAEVKUYDQMLVHAGLXXPZJDWOKGAESHVFYFKODHYHGBGRKURPYOXONSQZSYVZVTMZRTEWDQMQZSVMOXHLINCBGJ");
    msg.type = 77U;
    msg.access = 210U;

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
    msg.setTimeStamp(0.6687511491193424);
    msg.setSource(2218U);
    msg.setSourceEntity(231U);
    msg.setDestination(44453U);
    msg.setDestinationEntity(74U);
    msg.cmd = 68U;
    msg.op = 133U;
    msg.plan_id.assign("DQQQIYSSTIZFJPPVHJLYGHOGZZMBONXOVWPVYMXGKLQWWJSWEXAYYDXHVRVDDZUYVIEJWNSHJHIMNWSLTHTRCKMURLBIIKIMKBZVVWFXFYLBZ");
    msg.params.assign("NCKGLWFPHITOGBDLGZEOLMXYGYCDXWTPUIVHJWTEXILDNQOMZIBNBOJQYVJIRAIHSQXGNKDMBMBPOCBDAHCGMHIXIYKFLJBBXEORCSLUPGWXJVYOFLGZMZEQKCQXOSRCYFAUEAHWIDJJUBNIDTZNQHFRUVUHVWCUTQYNPAPKTGRU");

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
    msg.setTimeStamp(0.7001002130498085);
    msg.setSource(55729U);
    msg.setSourceEntity(99U);
    msg.setDestination(29622U);
    msg.setDestinationEntity(72U);
    msg.cmd = 202U;
    msg.op = 170U;
    msg.plan_id.assign("WYFQASBMZZFACBPQSRXBEIMHNRJRDARRGPADALXEVZBZLTAKUCIUNCSMYITOPLJVHZNAEFVNGPGSRCKCUZGMBNPCNNJISOCDQPTWVXTXMHONXFDZFBMHLKHHWRPFUYDZVOGEAAETLKTIKNFYJDSMHBRSLXRSXBTQEONWKUPOGVWUMBQKUQSMTTOGLYJLVJVEHYYJYDRXKZJQUJVWLBEEYIJCICWOYIGGMLUHWIIOSCKVXQXQDDFGPKQDPUZTO");
    msg.params.assign("AGYNWJORYUMXCNNGZJLOQNETLDHPAUILZMELICQYITJNSUYTKMINLSDHFLRBEUOQEBUWWYVOPSWYLSFLUSMHRXTHKYMHSQIHAFXIRDKBBJMXQEXPIKZGKYHTCOQEZDFAJFGRZVYCADPVSKOIKQPJRABWWTESMJLVHDVFKMDGVPBVXDQEBGCDVWTJUXWCFIFPVHNXCGECE");

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
    msg.setTimeStamp(0.00891710576771143);
    msg.setSource(14421U);
    msg.setSourceEntity(59U);
    msg.setDestination(44154U);
    msg.setDestinationEntity(168U);
    msg.cmd = 168U;
    msg.op = 159U;
    msg.plan_id.assign("JJUJDTFKTIVUOMJCWDVQRXVDXDSUKEFKEBDQFQTCOBULHWVDFTARNKAZLSEHJVXNYIDMRYFNWBDOLDFBSRRLQFESRBCWWXAMIRXMPKCPALXMGH");
    msg.params.assign("IZZKXIVXIEOTHESXQCSWUALTXQPYVFVLOSDCSDNSTZERNBZFNZJMPTGJNYUJBZKVGAAGIDUPOPCBLDTKGEFIWDIUZNCMGXMJBEHBTLJUSMRPLWRJZSBXKHMYQQORHIXVQCQRUGWMFDTZBUPCMMSNBKKOQRAFQYDHWAVLTEAUAEWFSMWFCTVVRU");

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
    msg.setTimeStamp(0.5668129465248329);
    msg.setSource(8749U);
    msg.setSourceEntity(153U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("BNZEABNOCGZWEWJWIFTNPDCOGWSXCMHSNETJDFDRVUAVUGSJLNYXLIZHSPCJHPMPSVPQXJLZHBAKNPQYVMCJAOIWLFGLZCQFRBKRZFOGVVGBXVJGVXMFQTDCETMDXYRHFMCJRZQTLYYKOADORBRRBZTUQFXEINVJUZKQDHIIY");
    msg.op = 30U;
    msg.lat = 0.5287006950123303;
    msg.lon = 0.5366178585669157;
    msg.height = 0.8250272966479274;
    msg.x = 0.6554462521454933;
    msg.y = 0.9533248343528111;
    msg.z = 0.705206365193134;
    msg.phi = 0.5559605009017433;
    msg.theta = 0.16409954200028432;
    msg.psi = 0.48208954380288593;
    msg.vx = 0.47317189376576296;
    msg.vy = 0.3373786557956787;
    msg.vz = 0.31922199968633536;
    msg.p = 0.9098815727594969;
    msg.q = 0.2844226774244347;
    msg.r = 0.6648442995485897;
    msg.svx = 0.17608975286009898;
    msg.svy = 0.20366040149230757;
    msg.svz = 0.5110233331365532;

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
    msg.setTimeStamp(0.6690581544639633);
    msg.setSource(55615U);
    msg.setSourceEntity(5U);
    msg.setDestination(16023U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("AIXIVLVFEKGBPZORPYIUFWSVQDKBRRDELMQKBHFSPBMNGYQJRMUVXPBSBORDCHYIWXWVNDSMKZIQSSGXWKMCPJIHEVVOFQHMIEAGYFHZMDFYPPOCMGQOGWUKSESTPNUXJVDAJWSJHTRWKKWILXDOJXZHCNGLQCUMKSCLBYJAJLATCMATUBEORXGUCD");
    msg.op = 21U;
    msg.lat = 0.6174743757153478;
    msg.lon = 0.5165853819065446;
    msg.height = 0.29104939362383786;
    msg.x = 0.2052215416995864;
    msg.y = 0.11037100432525015;
    msg.z = 0.9971445452423456;
    msg.phi = 0.23380909455228183;
    msg.theta = 0.010953041524257578;
    msg.psi = 0.04001149863198428;
    msg.vx = 0.09294453216121401;
    msg.vy = 0.5738341182728995;
    msg.vz = 0.42972169557336926;
    msg.p = 0.5579555681602228;
    msg.q = 0.261101473846136;
    msg.r = 0.5795516278135567;
    msg.svx = 0.1251290363778551;
    msg.svy = 0.8090093181835862;
    msg.svz = 0.44843798116631306;

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
    msg.setTimeStamp(0.5384442941285434);
    msg.setSource(23398U);
    msg.setSourceEntity(174U);
    msg.setDestination(42821U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("UGQEJVSJJMCFWCSSNDXXIEAIFZYOFEEAMRRHFZINNOUPSXITTWUNQNNJEFNVOJZDLHXYRMKBUDOMXHWIMWRHNZRBZQLKKGVOZGLTWWXCROBKGEOOXXTZEUJURWFFVQJDMGIPPVDVCMSSWIVPUIAYLKRCCYQYAUKQCXGKNJTLBTPNISHPAUXFHCRPHWBTGTRDBOSPSVJQLYYTADQLPIYWDGBGBAHDZCUMFHGKSECBVZLLH");
    msg.op = 236U;
    msg.lat = 0.5439227778417534;
    msg.lon = 0.2182186136000196;
    msg.height = 0.2867519377600407;
    msg.x = 0.7883759099982676;
    msg.y = 0.6357193772969801;
    msg.z = 0.8351123389030323;
    msg.phi = 0.5431482744149485;
    msg.theta = 0.18581189122637776;
    msg.psi = 0.9641864363178752;
    msg.vx = 0.04499171030357585;
    msg.vy = 0.6776050737560745;
    msg.vz = 0.0360959627761529;
    msg.p = 0.17639462493974256;
    msg.q = 0.8566397358871621;
    msg.r = 0.057269857729485896;
    msg.svx = 0.23220752416059476;
    msg.svy = 0.26332104602911255;
    msg.svz = 0.5513627759271551;

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
    msg.setTimeStamp(0.6390488726104719);
    msg.setSource(25352U);
    msg.setSourceEntity(7U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("KYQUCMQMNLTIRQNHQXWHZHUMZCTYAYMMRESHTQKHOLCXJWADYSZTMRVNPDNTILABBXNERHEQEOECWFTGNLWIRRTTMVSPAQJZBJBKKUFVWPHEGXFVPRBENGCXPWAUJGLEUSVMGAKVOBBDUEZCMGXNRAZOFIJCUYDIKFTXOFBJTFKLUQVYCJDWPOVOBUWYSIDAYQJKCDFZHKONRGULPAVZEDHGSCYMSILFGBDSPDLSGXONIIOAWJZ");
    msg.type = 17U;
    msg.properties = 200U;
    msg.durations.assign("OCWXTJYHKZIBEIFNGQULHNMIKFYEVBTBOXESVHAIJWPQVCRBEJXTWDCSCVMEWOGXFSNQXHUYUZNLFNDVJMPISJKSPQMFHZOYMIEPNZIRYUQATATQJWYKPRTGLDIOSJWHTYTXSZDACOVREXIRE");
    msg.distances.assign("NRTOFDFWIGYHKMMMXVPJMBDWUZLSFSGXTQAABEQKREOKVYOLOWWRDJRIYHSXDBDXNVMZCGSDDUIECNHKMIPJNTVVIJKQTWHFYQQIPZASMVNGBWODZCUPBKWUHCKRXAJPIULUUNFEULZXEJBQOPYUAFGYLGPJWXPGLITSLTRRYJQBETZRAPYQDJVSIBMQEALZAGZDNHNAQVJIHCLGCWUXWKZXSOECSKATCFHOHNCBRYRVSMTOG");
    msg.actions.assign("DWDHYHPIVIVBEGKPWBETZ");
    msg.fuel.assign("YDPFKGLDRMJAJWNQDPCIWBGVBPIBFYBUWCEALNHRNVMKYAZMAWQROZCGZXOEVRCGPJZMDXCUPLPOHUEEQQCPASTISHUIVDXYCKHGITJFEROZUDQWNXSZTJVRDASAUWEMOIPZETHKGASYMXVEFTBBQHUKZNLODLXAHSXYRGBJKPFRFKKZZUMIINJOPQTBCCWKELIGMTWX");

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
    msg.setTimeStamp(0.5671184937978848);
    msg.setSource(23738U);
    msg.setSourceEntity(253U);
    msg.setDestination(9436U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("XMBWEAQGWDGSANOPNFPRSBWVQCMYZFSBUHMTGTQILVUEXECGOBFGLIWACKEPQAXFIRIFKSBSHWRCPCTQDKPLJEJOYHZOVYHWUD");
    msg.type = 161U;
    msg.properties = 201U;
    msg.durations.assign("ZMMYJDPWYAADHUMONXXWONYJKBLHCCMAYFTIWQBDNWHBXYGELCXYQPTBRSBZSXLHWWGUSWXZIMRQDYKZAJVYGPETVNWMSFIPNKKIRSUEKPCWMNBTOVSHODDCZQGICPTUJZKROBIVEDDRHXCVOOTRTFKGAQLGDFYGXTUFLKVJPRVBQJ");
    msg.distances.assign("VFJUTYCAOINDBPKCJYUHHSCNKTPEXPGIJLGZRDYOLTINAVLDAACAWGEI");
    msg.actions.assign("UZVXKJVJAFSGWFPBTFRQOJWXBOBBDRYBAIVYFBUENKDPLIRSETMCVCYMUHDUVWBKZHDILCHCRXGE");
    msg.fuel.assign("PXENHIJYVXSKTZGJPSYGNIIYABMWSTQXNRFVUOPJTQCPGMHNOCEILJECZXQLWBGWMAPXITNLVFTXRFFKOCFMEEVXLHOBRLXGYRNONYISCZWEW");

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
    msg.setTimeStamp(0.9619622038851612);
    msg.setSource(2342U);
    msg.setSourceEntity(74U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("VCGZCAGGXGDMLXORIKIQXZJGZIMRRJIMMVTWPINCEOBLPWLZDRHUWGQWXOTVYIHQFQP");
    msg.type = 158U;
    msg.properties = 83U;
    msg.durations.assign("PWIOUHMLVCKOXXIDLAUBIOTQBYIOKWPOPYKIXEAGNQMHJNRIEWDLCLEZDCSIHNMCR");
    msg.distances.assign("GGBCQSQYEKFAUVPKNCMLGPYOFKJYTLXZNPZVDXDVRPNYGXWCSHUTLQIQMXBNCSKMTVIZXIOZSELUDAPDCOCMFRFIHWFUOOGPTFIVAJDTCMSBEQSFQNHZYUJLDRRBDHMKLAAFZWUIXEEPRTJIJHUNYHWQYTUOCMSMOBPWGMORQKRAIUIWQPPLNEFTYMIDBTWWRXJXEEB");
    msg.actions.assign("OXZKPLUDBHMTQLWDYYKJVQRF");
    msg.fuel.assign("OWYTRWSQLLJQCCHXFUZPKFMKQVPIGASNCIOORHEIMPGMXGHJIFMTJVCHDBDJXOPCWKTFSRGLXSRIVYPSJDEWSWQFNRTVKMCCUHBJAJIBLIAAZUHQBKXYYMCIRVSTHKFOBGPVZXWNDLPQEWAQAHLYGLEQCUECNBVRQDVWYTSDZUYMEEAASWADGOEOTDJDMNS");

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
    msg.setTimeStamp(0.055451431667293716);
    msg.setSource(4368U);
    msg.setSourceEntity(29U);
    msg.setDestination(3063U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.9300604875320189;
    msg.lon = 0.1892206411700239;
    msg.depth = 0.6227143171535021;
    msg.roll = 0.18747460279767347;
    msg.pitch = 0.352173001947782;
    msg.yaw = 0.6132594542762876;
    msg.rcp_time = 0.8557310309264055;
    msg.sid.assign("PQZHMQKPCDGNSAPCMNWDAUWZHHDRBSFDNQFEORTESPSYJUUFRNIGCWVVPBACKYHYXJAOZBGFTSVNUJTOUANUUDXNVJWDSKJVTZQQJRSQTOIDBUKGWOHGORYRJ");
    msg.s_type = 163U;

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
    msg.setTimeStamp(0.9478814613180463);
    msg.setSource(63825U);
    msg.setSourceEntity(42U);
    msg.setDestination(649U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.6267568023792558;
    msg.lon = 0.5457588799581435;
    msg.depth = 0.3206281114270457;
    msg.roll = 0.556499583349245;
    msg.pitch = 0.7847121655306005;
    msg.yaw = 0.4642218495770365;
    msg.rcp_time = 0.5945757044208778;
    msg.sid.assign("PTHBXACRKROWKXZQZCQPOQYJBRAOCOPPLMWNIHHHFFXWEBGCCOGDHXRFOTXYNQHMPWNSQLJHQVCBEAUYGNZELWXRVTIBESACPATYDZAQYEFYLVJDFYAWGQUIXTOFSVKQQMXEIZRTWDBGUMJGNNSEIDGNRSSMCNXOKCLNEJIHUBEYPIVVZPKSMSWJITIUFUNDTHVKSOKPKLXAMLBKIFHKTJVERDSAUMDMLUUVTGZAUDCMRWRGJZ");
    msg.s_type = 136U;

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
    msg.setTimeStamp(0.3048742589709814);
    msg.setSource(3181U);
    msg.setSourceEntity(105U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.673466893385762;
    msg.lon = 0.6454433322834499;
    msg.depth = 0.18869509895456882;
    msg.roll = 0.32340046659770516;
    msg.pitch = 0.6904583607765912;
    msg.yaw = 0.3992681527610986;
    msg.rcp_time = 0.8285457018967074;
    msg.sid.assign("CWXBMTTZGAMZZBNGNPLLZWMBADOSBIKPMREULQLJEQRXHABFWPJINLNEKFYOOAEPSAVGATMTSGTJMFDVRWFXW");
    msg.s_type = 83U;

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
    msg.setTimeStamp(0.5204372780183811);
    msg.setSource(14592U);
    msg.setSourceEntity(182U);
    msg.setDestination(32180U);
    msg.setDestinationEntity(23U);
    msg.id.assign("JYBVJUQEUGAZTFFOJUOELWTUAYDINQGLURAYWMLYJSMIREDDALHSMVZLZBXUNIGPUILDVBNBSSEJQKDNSMXPNOAAQVAPCDPGEFSNIOCHBZFTXB");
    msg.sensor_class.assign("RWPHLPRWHPNHXPVQAAZBUXDQJCFSVKEKGBQUAGHTOQKNPYXYYFPJFVMDHHAEXJWZOQDZIBTESEVGGFMKLFMRCNQZDITPVWGRGLCXEKIHYGHDKBONVZXRBRIDBJQRBASFOCWXZKZYGWEVFVEAMJLPEACNNULMYTITDCSOCUZNM");
    msg.lat = 0.7945742284480147;
    msg.lon = 0.18050021755612433;
    msg.alt = 0.3101295517644632;
    msg.heading = 0.3121192989142505;
    msg.data.assign("JQMQDFNKKIFCXBJLRKXJMHZWCUGALKJNJUSQXKNIQOCOUDIWVNBBEALPSLHUDIIBPZDDQRMDX");

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
    msg.setTimeStamp(0.036837028184150356);
    msg.setSource(35642U);
    msg.setSourceEntity(32U);
    msg.setDestination(28815U);
    msg.setDestinationEntity(177U);
    msg.id.assign("EMTAMZQHIAHJWTHFTKQOFLJXACZBDHDTSABNPLDTYPDVLNBYCGUZENJJIBKSRHDJVDPFBEKPGRQFGJTOSGKWWLCXNWWBESKCULLKGVNRRFTQSNVUTYIGOAFPCLZNUJIFEXKEOMZRUVMXFECQMSAVHLUIDDIOWEPUZPEZNRVLOGKJVSGB");
    msg.sensor_class.assign("JLFODNBBWPXFSSBYZGVMLJSSADSUZFGUXJLLHXKIPFDRCEHGDAMHAYWNGFXSCYCPLEUGWBXQMNPRHCTZCNVVTJIZEX");
    msg.lat = 0.004130311357397387;
    msg.lon = 0.9025172624450559;
    msg.alt = 0.932041299639754;
    msg.heading = 0.30105902265032713;
    msg.data.assign("MIJNYJLRGCFUKIBOPOYOGWUDASXWABSVYEXTHHGUVLOYHJFNENKJHORFJOIWGAHRMSSTNMRCGNKWVQMEMXLCIPDCSJDZARAGZXTYDQBLKKARAKZSEVQRURJCNHPLEATQZZUDOHQIFSOPQSVUGGUQXFMKMMFPGVJUOIMSHIWJXYTWZFWUYPBA");

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
    msg.setTimeStamp(0.09580827480354837);
    msg.setSource(50580U);
    msg.setSourceEntity(179U);
    msg.setDestination(47495U);
    msg.setDestinationEntity(15U);
    msg.id.assign("PKKDJUOMYECHRXOVMEIYONYZVTEYARSNSUYMJHTAIZNMHOBRLHDHKEQUQXAOXSQOKCUMILNCLPR");
    msg.sensor_class.assign("DEIWWQKREVCRQMWKEECNAXGRZVDAJORYCVMMVZTLQFFYGPMWMBQMMONOKHMAUVQFCLYHTCZBFUHRPLSSTIDEHWXLOMGFYFHRUBUDJITJTNJVLJCCZOXWEFBDYALTZGPIPJOWDKXKTRGMLDFBWPXHIULZCVRXNPKNEJKXOVUJCAUZSSGFDBEBFSIXNSRHZNYIPAAHYHROCGBTDZPQWTJXYAVVXIPGQOKQODEISUAYPBNEAUYBIZ");
    msg.lat = 0.9173939512144128;
    msg.lon = 0.8203895952709962;
    msg.alt = 0.13984966815093958;
    msg.heading = 0.19971391755088774;
    msg.data.assign("HMQTNRMJHADRUCLWVOBTBWYZOUHBVKVSLTVGYGHLNOUBJUNTZHRGSYVDVOAAMEKZHQNZUEQYXYPHTIZFQIINMBJCDGZKECMDKRKRDFLAWWZWXUAMDPTJBEYOGAIXIAXMCPGNXXCJZHDUUDSOTVJQFPSRWNVPRTEKQOLFFZEFLBXMYQIJSRFKMBRFISYLLSQZWQHWOLKNCWDHCYPXSEVYVGCSXIFL");

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
    msg.setTimeStamp(0.3159730417081945);
    msg.setSource(36814U);
    msg.setSourceEntity(113U);
    msg.setDestination(8477U);
    msg.setDestinationEntity(195U);
    msg.id.assign("WPGXSBGBQQDCYEZNQVLYJCVEGFBZZWUBLEJKZKAUGCNYVAPGMLLEUDQFILRCMSHDJCEDLESYXAGQVTLVWYJPLRHSVZGDUOOKFOOZQKXMCDIJWOCMRTFXMNPVMZTNNRTLBEXXDBXKODAAIUKUFBZWAYXSRRYWPZFTJMIOMHNTUSKFEJNGYFC");

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
    msg.setTimeStamp(0.2538145142354006);
    msg.setSource(49135U);
    msg.setSourceEntity(119U);
    msg.setDestination(10765U);
    msg.setDestinationEntity(92U);
    msg.id.assign("PGMFVVEDXGOQYCSRLYWVURAVQIJGNFFTOHGDMBKXCELLADZZUZRPEXATDVXKAVBWITIUSPXCAWCTKSHPKQJFVHJSDFVPAYXJMHGZIGMSPXODPAAHXEMIVEGNGIUZGYMJBLAUZCKTRWZWWIYUEL");

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
    msg.setTimeStamp(0.6343741678287189);
    msg.setSource(11576U);
    msg.setSourceEntity(62U);
    msg.setDestination(46760U);
    msg.setDestinationEntity(67U);
    msg.id.assign("PASTQUDZKXWYNGRZXKVHARLEOANBUGUEIWZCRFERLRUDNCBABJYJDNJYIIUNRCOTNJJXHKAGLZFQSIIUBAHVBLXCZRBCPRPMGLPVWLVSRVCYSQOIYQDSFHBIOTPEQEASDDMMPMNEUSZTYRTS");

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
    msg.setTimeStamp(0.0682624289724647);
    msg.setSource(38730U);
    msg.setSourceEntity(151U);
    msg.setDestination(24530U);
    msg.setDestinationEntity(1U);
    msg.id.assign("CSQEHETVSTNOVREVZVBAMXLKZXEWCNQYLIL");
    msg.feature_type = 248U;
    msg.rgb_red = 103U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 222U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7597351761757535;
    tmp_msg_0.lon = 0.6256901537222046;
    tmp_msg_0.alt = 0.487796713664269;
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
    msg.setTimeStamp(0.6403572568822723);
    msg.setSource(5228U);
    msg.setSourceEntity(233U);
    msg.setDestination(55252U);
    msg.setDestinationEntity(245U);
    msg.id.assign("UVCKYCAOPOJKHUSAUOJCAIVIEQVLRQWEZDHQRUZNELVOLATQWI");
    msg.feature_type = 82U;
    msg.rgb_red = 157U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 119U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9708075771818743;
    tmp_msg_0.lon = 0.3829506376475832;
    tmp_msg_0.alt = 0.40471612646012856;
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
    msg.setTimeStamp(0.8939622642474854);
    msg.setSource(7316U);
    msg.setSourceEntity(253U);
    msg.setDestination(58075U);
    msg.setDestinationEntity(246U);
    msg.id.assign("DQOQQJXSUNWMSOSNJZBFIEVMVQACJCNFSPTZAOUFQMYEJJQNAAXXQVZOUBTEQQLYTCALYTLNUGABVPETGYLHKJJKLGRHKHIKHXWILJWUVMIYCNWVTXAMMBOCFVHK");
    msg.feature_type = 5U;
    msg.rgb_red = 235U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 163U;

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
    msg.setTimeStamp(0.0010401513394522333);
    msg.setSource(46U);
    msg.setSourceEntity(6U);
    msg.setDestination(18724U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.5626985742443436;
    msg.lon = 0.24861191534834082;
    msg.alt = 0.10724539723419257;

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
    msg.setTimeStamp(0.8500936948720145);
    msg.setSource(27637U);
    msg.setSourceEntity(122U);
    msg.setDestination(51466U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.1529126476911402;
    msg.lon = 0.13067088390543946;
    msg.alt = 0.42049234953384174;

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
    msg.setTimeStamp(0.9293644530814371);
    msg.setSource(9309U);
    msg.setSourceEntity(87U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.6110221483945926;
    msg.lon = 0.6142551164663077;
    msg.alt = 0.20668335919927094;

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
    msg.setTimeStamp(0.36770222984057843);
    msg.setSource(42515U);
    msg.setSourceEntity(231U);
    msg.setDestination(44268U);
    msg.setDestinationEntity(218U);
    msg.type = 250U;
    msg.id.assign("KJZOBHWAVREAPKHHYOZMHNXVEHOFSIGEYJMPRVGFLLXIMQXWIKWYGUAMUNWFTXKPLQVKVYNMKERIDBRCDDWIQAZQTQXL");
    IMC::AcousticRelease tmp_msg_0;
    tmp_msg_0.system.assign("CFLBZGRRWCZSZQKJYZKDXXYGZGSOJIPWOTCPHDGMSPZNPQXOFUKWXHIUWCRRFL");
    tmp_msg_0.op = 206U;
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
    msg.setTimeStamp(0.7416172156018048);
    msg.setSource(11855U);
    msg.setSourceEntity(8U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(135U);
    msg.type = 124U;
    msg.id.assign("ZXSFJCLJYJYSXDNUJOWAHGHICDPEMQUYVUTTFUGNCTRPNYQNULRIVSWHXPKSICNITTWYCURSOCEBGUSZVXPHGTGCLWPQAKKDRPIJDZSPQJKMJVRNQKBVDUFAXFEQJDZKOZVHXXOJGBUVABONTYWDRCFETADHWXDMWMZXLRIDPHBLZEVCEBZGWFSTFSHVRFPLABKYIMXNOVGGLAABEQNKOLL");
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.5450141675529118;
    tmp_msg_0.units = 8U;
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
    msg.setTimeStamp(0.6905998127037885);
    msg.setSource(10207U);
    msg.setSourceEntity(43U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(54U);
    msg.type = 1U;
    msg.id.assign("MCHHSBOIVECXPJYYDA");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 3754481948U;
    tmp_msg_0.start_lat = 0.07622590952227493;
    tmp_msg_0.start_lon = 0.28821239592121306;
    tmp_msg_0.start_z = 0.6568180712868209;
    tmp_msg_0.start_z_units = 58U;
    tmp_msg_0.end_lat = 0.1788940253106286;
    tmp_msg_0.end_lon = 0.19524016526652965;
    tmp_msg_0.end_z = 0.838671187788929;
    tmp_msg_0.end_z_units = 153U;
    tmp_msg_0.lradius = 0.6356013276795677;
    tmp_msg_0.flags = 200U;
    tmp_msg_0.x = 0.7241588144432444;
    tmp_msg_0.y = 0.11601236383196267;
    tmp_msg_0.z = 0.6812320918653012;
    tmp_msg_0.vx = 0.2890009759198393;
    tmp_msg_0.vy = 0.6470747025921919;
    tmp_msg_0.vz = 0.47816424746693964;
    tmp_msg_0.course_error = 0.5430745576853401;
    tmp_msg_0.eta = 55954U;
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
    msg.setTimeStamp(0.9325631432727466);
    msg.setSource(31307U);
    msg.setSourceEntity(60U);
    msg.setDestination(245U);
    msg.setDestinationEntity(205U);
    msg.localname.assign("HYVHBAAVCMBEPXWAHVUMAZAXNEYWPXEQYOCBQWXBRKNZZFNTVUNOUQCFRAIJNEWWQQNJTRIHLFISNMIVPMUGOPRJEMLLZCFKQNSNRMXTOFSTAOSJGKRMWYHFFQPHWGLTPYGWIKJYESAVUFZVCBRSWDHTLBFDAGIUOYLLRSGTXDQIZUZKMEPSZOGEIKDBVRKDVTGYJNDVMEFJODWBURHJQDLOCCJECSOCKQPUCPHJPYKLXITK");

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
    msg.setTimeStamp(0.4439560743091615);
    msg.setSource(46159U);
    msg.setSourceEntity(231U);
    msg.setDestination(14150U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("WJIDKNCDIDLEJMBLYFOBQSIQVFIBKFOJWXPVGZYWVCZWLIGLNXZSTFRPFMXVKAWDPTWORHOGLXHHDXYRCUZTEJEGVFNVGLBXGMTCUSMKA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DDKXGYSMXPXAWZGXVGBJYLNVVKTFDESVMPWMMAVOHKSSRPTLPKMZONEXEQVUEUSZQSFGXPGKZEFTJHERRAIFEVFLAYPHJUNBCMKWBROXYHATKMNFPUOGUXQLHIAKLXDUMJUAMSCWPGGTACZJBFOIZTQJGIHIFBDKHWTFIQIPRMAUYBWENWBZHXYYOVCRCDYKNCJBCRDEEDTBDS");
    tmp_msg_0.sys_type = 184U;
    tmp_msg_0.owner = 42841U;
    tmp_msg_0.lat = 0.16846988704764188;
    tmp_msg_0.lon = 0.13107419358008887;
    tmp_msg_0.height = 0.1366019095138088;
    tmp_msg_0.services.assign("VHCPHDJABAYOZMONYPHOCUAQWWJLCBIJYRRVBNCDKRXPFBQQFEGZJLRTNBPEPELAPFUHCSDDRWGLYPEYVQUW");
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
    msg.setTimeStamp(0.5310881953708468);
    msg.setSource(17131U);
    msg.setSourceEntity(49U);
    msg.setDestination(42695U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("JLMJJUGULSFNAYIXFQZCWCPKQUBFEBIGYTAZVSZZLTWJOSLFKNPHXPFVLHKHTCBMEQOISWTFQJRBOEMKVXCKYMAHEGAILOKCXNPCHXNCKDSSKXVPRDDQOZYPIYRFMHIAQPDUR");

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
    msg.setTimeStamp(0.05463071329945823);
    msg.setSource(12238U);
    msg.setSourceEntity(30U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("THLMJRZRBBGBZIDBODPXYCSZHCHMSFBDHEJSBEFAXKKAKETNOBEARYQKJNODMWVPRNLUCLWEGPXIRVJFFDMGZHILCWSSDXLGRIYGEQLUNSJUDWZRQOOAXTKLTQMDWJGMDKQTTCJFWMUYSUXVNCKBSMNJQNWHPSCIDEAHAZZCAXPOZEOQT");
    msg.predicate.assign("BBYBUFWTURVQDFCXZTVURKCBSQHTJZKXBVXADAXUSLQTYSEJDWXBXENXTQZLWNNZVPKEFYMASOYPFGGRTQSBEGFMDGWPYGCFZOKZQLHMHEGINNDJMKPHXUKFZVRDEHPLFOJOMAZIWAHCJHXNUIKCEKAYAABTRRYIRLTZSDDQODLZESDOSTWOPGCCFLLNWGOAJCWWVRPUISJPXISITFHKUUWEQVHIPVNC");
    msg.attributes.assign("GGMJTESYMWJEHFASIQUNBSRNLAVGPKPIHISZMLRJDEVCVUZXNJFOBOCKMGXCJPZOPXFEWXIOJLBXWUWLXZTDRCUIYTFYLAQRDBGPKQRZALUCEMAWYMDMJQZEEHTNGJPYHODNVVQFTISAWGKUTWHPSC");

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
    msg.setTimeStamp(0.31425466261524715);
    msg.setSource(4613U);
    msg.setSourceEntity(250U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("HVRIXOHMWLEXNZICNGBDHYBWMSXBRLVYLGZUMOTKDUKNUFPNBAMREJIMRMJWTXASDACVHVPUNLXTOTSIUQDJEYZXYPGQIGGFPCMZBDNVCPIFLHOZASAGPFMWBJWQYKRABRQBJTIRJVFOOJGQOIDPAZWWIQODEEOKXCGTXACAXSETCHZCGZD");
    msg.predicate.assign("PVNLURHRTSTMMBJKXBFTQDRSTSBRDREYJTCDNISEPHPSLBGNDMLAAZGHDJKERYYKGVWNGZEDFVGJBJEIUZFBCPLQWLCFFVDXESNPVXHNICMEFZROQIZVHFCHWGOLYCEUUYXNBKPQXLMDXXEUIWIVAHQIAMBDKOZBQJQIOZVJZFECSUYKKYUWQVHGTATYAGMSAWO");
    msg.attributes.assign("LLCVNGEXLRBRHOLPINGCUILWTFJUIDVUXECACMOUKJCMUIMKOTBMKAGMMQYOXANUAIDBEXWZLVODYDHDOZMWFLZJNPYPYQBMOQKJSKHQPCTTFQBHWNSQINWWKFNTVAXLPHSSEFCYMDIROVNVQTCYXRGLRYWXTEKHOBPPJJJPGCVZKOZGENFDYGIKIKXTABTYTAMUDJZFUBDESSZERSWQIRAGQQPDEWGHPVUYWF");

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
    msg.setTimeStamp(0.2080226407830702);
    msg.setSource(19035U);
    msg.setSourceEntity(117U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("BGGYXDBTZFHYSIVWHWEZKOXFWWKQOKCDLAINMLJCOBFPIIUQICAJNPVLPKCZRTCOMDJQDCUERNROWUEGGDYONVAWKQBCFIRJIZLKPXOZVUVEEPSCGFEJSXHBQVWUQRDL");
    msg.predicate.assign("QHSQSCADNASZEIRYWWYLBLPKYIBEGFGIPKMIHNFWELUYEYWDMTTPEUPOTCOVGEDSNRQJCCBAXGPSPRJEYIOJKXBMJWNFXFXWBJHTOBVPGKMKGGHGDQFFJXJNAYVRIJAZZVQQN");
    msg.attributes.assign("MGPGQWPFKAPBPOXCVTUVSERZQIOINBIYLWIVNUTSWJMLJDFZDJSCFZUHZTUXTSLNKAUYOIPD");

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
    msg.setTimeStamp(0.4107338180188994);
    msg.setSource(28589U);
    msg.setSourceEntity(144U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(251U);
    msg.command = 227U;
    msg.goal_id.assign("AMXIUUIZSUQFDOWBORSLSZUATYTQRMYXHVYJJUEVKZRLYDFQHBHYIKQLWMFSGOCDFGPKNYXBZMPAXPRFIPDOCBHOYPCVIOTLNWZYIMGEJSVCADWULNTJQRGHIPZVYUEGNDIQHKXBVUABLHADAJNTFGSFKZEFKQUIEMHNJLPZOKXBXCDZPOWZPVF");
    msg.goal_xml.assign("KICJZBODWLTWVXPMZISFMTQALJZHGYGSKMPIXDCNOTOZFGXKHXRHNSOYHLUYZRVPFPPLNDKDQROWHYURDNIAHEJEUSXMFGCOCCLFBBDMPVSLIGYVRCTEYEACBGVFABAXIWGTZAJQXZNATQIUMTESBDULUAMGFTIBLTNPGJQYPAMVSCBZUSWVHRHUNJQJLEMBCPEUFWQLMNTQJDIRSJVXWKREXWQFHKNKVESEXVYKZUWNYCDOHW");

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
    msg.setTimeStamp(0.9556274453205396);
    msg.setSource(39910U);
    msg.setSourceEntity(107U);
    msg.setDestination(64288U);
    msg.setDestinationEntity(137U);
    msg.command = 93U;
    msg.goal_id.assign("IVQPTCURBSCSPWDGGHHIHDHCJSWARPNXTZQOLAZLGVDZNQBYXTSLKWGILERZKOPQGPWCKOYLMGDEFLRQDTCWEJUZZBARQNLMJD");
    msg.goal_xml.assign("OPAVPJWJTHZQOFZIDXBVNELMHQPRJUZQRMPTIDCMKNTLFSVGJBICSHYTSYERAZHXJYXKPDXLYOQZWBQRXARWVYXMEBXIKOZGGCWHWTCBQSXDKZLOYTVKVELYNSFFTTEJFNLKYGUFXNBPMUWSKHWOKXFAQDDWIUYONSACODMIQWDEU");

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
    msg.setTimeStamp(0.5133738519659103);
    msg.setSource(48177U);
    msg.setSourceEntity(144U);
    msg.setDestination(46756U);
    msg.setDestinationEntity(109U);
    msg.command = 152U;
    msg.goal_id.assign("CZCEBTEYIHPMKTOIPQRJRNCWWHNNIWMQSAVKQMV");
    msg.goal_xml.assign("BPJNZYJMJBDFXBSOVNOTXYCYDLUDAARCELSKTQIRUKWMNTEEZFWAPSZLBVPUHJNQEOGIEJTXHLERMTESZVWYLCQNDIVSIEKRVJCKFTKAKBOQMMHCADRXP");

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
    msg.setTimeStamp(0.6113913434237181);
    msg.setSource(17532U);
    msg.setSourceEntity(190U);
    msg.setDestination(26256U);
    msg.setDestinationEntity(140U);
    msg.op = 44U;
    msg.goal_id.assign("MPIFBKADOSKHNEJQFKAXLHVXZKBTJPFDCQVIHYAAOVTYMLFBMDRDKHESBACCZYEXHFQZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LZEXLRBJFAHPMIROWIOKQJPCHBHTXDIHDEZDXJGHLETEYUWNHFCRLSVBWKAUBSHVYAPIRWJIDVFJLBVXVZVFMIFGDMMTCFLISYUQYDUKQPKDDPWRNFPSKFWNMFHZHIEDSCASEPUGZKAQXEAHFBBCTNQGQGTOKRMYMDBOLVBNLPAXAEBSJNIOWPYRECSZQUKVGTPQGVYXJ");
    tmp_msg_0.predicate.assign("WPMGOLLMVWNDZMZKOJJNBDXYEOOIMCPDNKEWKMYNEZNIJUBVWTXTVBVRGSHHSCSXJYIBAIUEHJNDTDGCXJWSPUOWSADCLAZQFWCCIBXQYKXFQORRYSZQJOXS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MAESEXAKXIMHKGUOWUTCFLZZXCCJQSXIBGIVCFBURNPBOPTWGNLILEQFZBNQATTZHTGYJCEIJJDPVJUWXXAJBOVRHYGRUOSSEDIVXKVSFGRKRDFSPHWYU");
    tmp_tmp_msg_0_0.attr_type = 26U;
    tmp_tmp_msg_0_0.min.assign("FESHEGMWCQFKOHRHQWFXQZJESUNEUCJMXYVQTDIYIKXBGSHWJZQWMOXGXCJUKVBFIRAIANNIYPGEQOTBMLVPEOZHZZWFAKBPDMISYULZHHXZIPLQLGNOFEDJAXVRWPSGXOKLVLSBDSTOUIVOLQMMNWUFTRTTCFYDW");
    tmp_tmp_msg_0_0.max.assign("KPZWEBTYUNHGCXQXBPMHHCGZYBJLKUQIUBYCUIZGWIOMXLXKAFWIGFFNEOLAVZXLARDFOJTXPRPBHJXCDKRSNOQQKJTALRRIGJMQMYDGVYNVEHHSMZKUDCZOCBWCDOPTHSQVFGUSIGJSUNLASEJVDYAZIFEDTESGQRNFFWTNMRZGHRLPLLKUDWOYVWCWAJXBBTFHBIHVMDWMCMPITKAKCVENZQNESAVFOJVODJMQZXIRTLRWPSYEAEXSOTNY");
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
    msg.setTimeStamp(0.7364302344834077);
    msg.setSource(5877U);
    msg.setSourceEntity(246U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(10U);
    msg.op = 103U;
    msg.goal_id.assign("MDPYNBTHITJTLHVTRMEHEZENBQAWKBUUSLOFOGQVUXDCIIVXVKWCZSYFNPPOEBNVGWELTOTCIHPHNLCKASGGMODFWKGCKYOYGSRAJQOXYPSGQVZZNMARLPTDMUJBXPWWZRQMOEZFUGYCIBTRHCU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SJCAUSPMNHRDKMVOASQLDJNOIKGRFGLHSAEWXSNRYWRKDYMIZTFRDECURPFJREMVLXWNBBLBAQXZGAADTWBQKUNTCPTTLJZVULPICVRVVYHIVCBKMKJFQFMDESYIOUPLZWIE");
    tmp_msg_0.predicate.assign("SLIWBXGMOPTELVMZPVDAEIUGZKEAJWSKRJHTNYWDHHSCPKNRPNMSANKEOJLFMAIHQDCTDUTSUKJCAYQLQJZARRBVMHTZTOK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ENFKUANJWVTPDZQCXWPPAWMSNQSMHODIXXDPWCLWVINMNOTHYRIKYULZUWJBQXIDJSEQIHRBJBUGBYCTBOCRYKXVYSICDJJYTKBZEJVCMDVNWHFNJEUQKO");
    tmp_tmp_msg_0_0.attr_type = 140U;
    tmp_tmp_msg_0_0.min.assign("VPZEJRBQGBQQQFSJWUGVPMDSDKBENABYBGKEZQOJMOAATYHERZMOYFAFWZCIGLLDAHRQWGYVFCKBEXAXMVLHUPXGIVKFUWNFKLTOQNSELJTRWDXHSATFGZBYIZMUIADSPWYZHTCPDOHJIPOLDVFNXCVPGSXRSNMGOKEMJDKD");
    tmp_tmp_msg_0_0.max.assign("RMADITSSKFJHQDBAVUSMCQLUWQSWSCHLRATIBEYCGDNZXAODUJEWRBHNWINB");
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
    msg.setTimeStamp(0.5122419762637324);
    msg.setSource(3131U);
    msg.setSourceEntity(69U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(11U);
    msg.op = 82U;
    msg.goal_id.assign("KJFGOAQLDDCNVNIABZMXQSJUAGQBLXQZVVJRPNYMPSNVRMUQJDIEALKTSXSUHIIXXMRAMBNPLKXCETVBWRGYCOIODLNEAGGCXOECLWHTVJRUCQHVHUIMPBUGJHSFXDVLGETFTYBTCWUFCARFEYJKXGRMUONDJAKFDSWQYWYOIOPGLKUFRIQKSKNABJDYHCYHZVJZOFPNBFPEIHOTIRSZZLKSCEWDVNWT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MCPHCWMZTUIAGBLAIORXRVNNWUAAJRGKSQPROLCVVYJETDFXNVBIFMRYUMGYQYJKRLNYKJYAIRXDULLASFOMFWCCUQPBKFFSGFQQHZVYZEQQBMDEGDVJNTDYDOJESTTKFSJVUBWGYPNQMGTSEXQTXVIVGUOHAIEDOJHBEIPZF");
    tmp_msg_0.predicate.assign("VJWSBYTKZRXJFPQNIGBVVOATNXOZLPMUNZPRALVGUYWCRQGSTXIUFSDDQGZLCIHPYMZVEHSHUWAZXJYENEYBAACBMXFIEQZUPWDXMZDZLIQEJFKFELFCRZSFLQDFONNONJWMIEQERJCRGTLYY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KLZVRSTJUNDBIUTJLBKNTENBVNOHXGXEHZRAWOMYVVHLMKYPTLXYASFMYWUMNPYVUQJJIEJORSURNLEBAONMJOYKEFURCICYGAWFDSZPCEKFRLUKFMFFCIYBPOZXHGSZSRWQHHCB");
    tmp_tmp_msg_0_0.attr_type = 235U;
    tmp_tmp_msg_0_0.min.assign("SUCPSOHQJXPZWMMNYNSJVELFHZPWRNNDRQDSVKSLFWOMBCXKNIVBGVAIRJFGQQDOMVQAUHROUTWEYWULSPJOGXKXBCDNJTJXPFKZFR");
    tmp_tmp_msg_0_0.max.assign("SRPSKPQFODTCYBHGNZTUDGMDNVKWUHALVMWMELUXYOFHPZTSHCLQRMTQGJCUQRBBAACOICSQODWUCOLKYWRRORETBLWTMVYFBIDPCPOAHZEXFQUMDKHYIMJZXGVPFCNNSWSENZMKJDGKGPIJZAGXAIXWGBNUYQYLSCINWOEZBLNQTJAESNIQDJFFPLTJ");
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
    msg.setTimeStamp(0.35673206481952835);
    msg.setSource(25608U);
    msg.setSourceEntity(148U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(140U);
    msg.name.assign("JGUGPYMERJUUQFPEBLSNAXVPQSNWBTYRTNXKZRIOKBNPUUZWQCDJPOLKQECWETMILPHQWECNQCNDSXK");
    msg.attr_type = 209U;
    msg.min.assign("ACIRLQELVVSMSJAKWQYCZQOVDXSZRORRMTPPROQZAZYWUFNGNFIICXIVULNPXWVVLGDQEAAJMXYQTQHFSESBIHOIHWEUNKFPFNUTODFKOJREKCGL");
    msg.max.assign("BOWYVQFCJKIKUZLOEQTHTSWDUAWQZFMWXRZSIUYTUAJ");

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
    msg.setTimeStamp(0.24279873585891487);
    msg.setSource(47724U);
    msg.setSourceEntity(82U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QUQOLJBYSK");
    msg.attr_type = 148U;
    msg.min.assign("UQQGVRLCVYFELWRYQMJYSFZZSZQWVDTEIMXBEPKPJRLWWUAODDUKKZMMFVDTASNPUAVMGCQKMPDDLLALZJDXNHLGWCCJSXRJEHTRRSIOTCIVNHEWOIXTHPEYOGBFECMQYIBVNSMVGUTHNNXGQUONMKPXBB");
    msg.max.assign("VBDGOLZGUAIVFTQUCMYMTIFADINXMNSDXLGJLBHZIQVHADGHWCZYXUIVIJNKKRFEZBPSEWCMALCUERLMOWZIYQWFHEKASNPURXQPCWVOVLJHHYCHPDCJCUQRERBTQVOPOIWMGYLZVFPGPMHUWUKKZNDYJADIGFAEOSKXVCEKPNRAMZAJJWVBSIXKTGWOQPNTGSTKZLGPOXWEOQUYFDYBBOH");

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
    msg.setTimeStamp(0.5156539718975935);
    msg.setSource(61929U);
    msg.setSourceEntity(211U);
    msg.setDestination(17200U);
    msg.setDestinationEntity(118U);
    msg.name.assign("HZLSSWLEUZLFJPTYXRAXDQLJOKUUQRTUMVXFEACKIYSRLWQZCHXPZAGIGQAJEHMTRIEFLYPRPLNOFDWGUUVHVDCGFMEBJBNMOAVDNRUHHZBKIYZOGQOXBMVVQYSRJTLUFJPDWGOWMIXMYBWGGNWCGVHBKIWJCOJD");
    msg.attr_type = 23U;
    msg.min.assign("TRVWBZIPTABCUIYZZFPKRMJBPUCIGEDVNQVEDRJTENOSHNICMWKPTUQKZDOHBRZXN");
    msg.max.assign("RTUXRXCYKDGCXGBLCADOEM");

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
    msg.setTimeStamp(0.5789358566882389);
    msg.setSource(2609U);
    msg.setSourceEntity(115U);
    msg.setDestination(24909U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("TEXDRKXVLYVEMZXJFRLPFXPPIACGFQDQE");
    msg.predicate.assign("MOPLJWDVITKGLEOYJRAKYWLYQLAEBPKHJQOBUJSMCTIPUWSWJBHTHSWBSKWZ");

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
    msg.setTimeStamp(0.6730664268692491);
    msg.setSource(60209U);
    msg.setSourceEntity(232U);
    msg.setDestination(27308U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("EYQRZLRAMZFMDSJNTAGALOVOEZUKKHWPDEXXJSFKFPNTRMTFXRQWSPGVYLGCBASOQKFOXTISUVBLDTWRMKUWNMQNPKEGIMNZSYBOHTHVIQQWCBVZENRSCPJDIGZJFDIKAJQJRMSOUZDSUBWEVOCDDRBGQDUVTXFREPWXHGQJXAPLGHPLTICFCKHINBMZYVVAGJCZMLPAOIOEKSXIUQZYCIYKHLYMBYEBURWGPHWT");
    msg.predicate.assign("VDVEDNBTILIMFYVHSCSBLSZQIDBNXKFCRIRCSSJNMCDOAJQOEGUULFGIORGJXUQQIJUNYYHSGACNZVYOKAPKWMFBFZCTKJWYOXJHPIUKSJPLPDESEJXPHZJMOKEDAGQBFPUDFIAXMLVXAUGRBTYAVGUDLBZVQHZTHSEWQEAEWOLMXHSQOWBQVRZWTPFTGZFEMNRPCCMTMPIDYVGTKKQBNEXRYFTLJCUYO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SGIDDFBXUERGQHOHZJDIYUPZDTXLYLCLHCMPFRJCNORAQXHVTOXJIHKEXEYMBTEVVCOTZNGVDOWYUAYMXAEBRXLRDUWBQDIEEQAYMMBFPNHCAQKMOGJBRPNWNZZSWRUNTLHKCGIEWKHQKDJXKYZSRLVSMSEZZWYTNBVNCUMQIUQKTRDPB");
    tmp_msg_0.attr_type = 148U;
    tmp_msg_0.min.assign("UWIHZWBWFDQMDSOREDEPTICYYHBAZZTOSVMAFZNRYLFDHXLQGMNICPKDOHQTQCUQGEPGMUJJROVHQICSKCYNXDANOHCMIJPEMPEIOGRHGQFKYPWBVNJTIWKUNJBVLJJFVPQATAOLEPUTEXYBRRBQYWVNBIIDVMHSZUVXCAPNKCXNTMKZUUFLSVFSHYFORCWYGWDDOCXREKALJLGTGGLKWFETSGZMIBBJ");
    tmp_msg_0.max.assign("THYQSSHDTGYSUEKPVSFZNXBNFXUZ");
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
    msg.setTimeStamp(0.44556137517307937);
    msg.setSource(55164U);
    msg.setSourceEntity(34U);
    msg.setDestination(38880U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("XGSFJNXYVEEONSHPAKAXUSUIPDEWLNCNCVPEDFPENYITETUOECNZGSTAXIMCVLIEDOHYNHGBJYCXODJQTQUVG");
    msg.predicate.assign("MRGANXKLKXJGVWNMPROSUEJDLMSQKDGAMVUOJLHYYPEWXBILDZCNYINJBZFSBCWSYXMTRHURWIXNCLPVRZGCTTTHRQVCWOQBMQBBXQPLHUDNMZUVLJHLAZFNDWGJAVDUWLMAVYKP");

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
    msg.setTimeStamp(0.8888025203054822);
    msg.setSource(8044U);
    msg.setSourceEntity(127U);
    msg.setDestination(25498U);
    msg.setDestinationEntity(230U);
    msg.reactor.assign("TVNAVUUVMFHATHAXYEOOYIKHAZIIAMLSUIJULRNZSUSEUHXVEGPK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UGKITZSRIHMOIINBWCQJOLHLUTQYPMUVXRHAWHZEHOLEGQVQGEQPPVIGIFXIFABDBNZSVEHHNZYSIQKONMXBLYHYXKDQWTPRKWWTGGNPKRCJBAOJCDQYJFEERSIVVZTHHMZKDYMAXZDMGOUFBVANFURLARXVPJCCYGOPNFJBTGAAUKMQJZBUUD");
    tmp_msg_0.predicate.assign("ZFGMNLIGWPEXANEPBIZMTAUKC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZITCDXUZQXVTERFMOJOSVGVQOJCYSHWKWYREKPX");
    tmp_tmp_msg_0_0.attr_type = 63U;
    tmp_tmp_msg_0_0.min.assign("PSQQNEMRCXPALMAJVEXBKWQYXFMWHIBMKRWIGHTXJCKWHYEDAAJGPFLZVTQGNUXGRFYSZKCLILIWNBTODHMEGSLTNDKOLPFIDVZUQDTWAEUIXRPCJKJHACLWPYTWBGQKBJGLCPDREEBLHVEFVPOXSFXZDNACNOIPFFJUDRUOKCUPIZZQZBIAZFIYRYHXQAFCMOSVHHQYUDNBYNUUYOVSSREJEZTSZBTQCATGRRMSXMBOGUWGKJWLHJYSNVND");
    tmp_tmp_msg_0_0.max.assign("PWIGCDGJFBFJKBHLLZLDMXOCNONPOMSQQUZYGMXJWJQTNKAMF");
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
    msg.setTimeStamp(0.48219510121405673);
    msg.setSource(55312U);
    msg.setSourceEntity(208U);
    msg.setDestination(13058U);
    msg.setDestinationEntity(189U);
    msg.reactor.assign("RFIEHUABYLGRBLPZCIFTSUAWJWGMLDCFDQEIQRPUXORYCXSQCSEIGYACJAJTNWHBKRNADGADDIHVXKMKDPHEBRZBTVSHJWPDYPBQLGANQEFZOKYQUUVBMXUCUGWTNCDXKZVTWPOTYBSOZEFEAMVXHGIOXQKWSSAFJGOYFTVYHQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TARELRXZYPTEOZUNJOHIFIHKXIESFEJWYVGIAYNYGGIMQXNWMNMOVHRPAHLJEOZHVHPNWSVWGRJVHMZLLYLTKRAIDBHCZVOFDNSEJXXZTIKMBNFBKKFJWONIFBPFTJGZULCKWSUJVDSBDYMRAMOQRSDXNQUAHCAPWWNXQAOLYHYOGYVDRQBGZKCVMCWSFLWUUYLPQSUJPCFKTQMCAITUKEPDGQTECXZCALEMOJFBBUZBVEKRPRCPQTUGS");
    tmp_msg_0.predicate.assign("OCVMWJAHNNEUHTRYFADNSXSVMTWBLPFAUXURGUESSCFVJIDJFNASQCVTHSCMMXZAOQZFBTRYKDGHKCQTOAYDZLVBKMWIDVLHSYRMHOQQPMJRQPLZXIVUGZYTWZELLITBDWJXRHGEIDOWCNFLNIFHPKYBZVIHEJYMPVJWUPSGEKOBW");
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
    msg.setTimeStamp(0.5632924642454729);
    msg.setSource(28050U);
    msg.setSourceEntity(84U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("JRORJIFAUSTEZESMMVHFEDEPIHFDIFABBDOXWVKOSFYNCOHLXVJQLCUQTNHGMKKQVKBOJRQJMWJQLUTDVBIYSXGSIIJPZLQTRXWNAHEEFNLTOCNGSDZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZPXCSYKDUCMCNPOBLESJYSMXJRFGRPAWVBJZKTGWMXONNLQKTSLZDGXUKNUXJUKVOXRWQAMHHCIUGB");
    tmp_msg_0.predicate.assign("QEJKGPGWCKCKHNNVNHADTXPKHDWXECZXKTFURJRLGOVQJYOTLPCMBSDXQBYXE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LKUZDZSOZDWNNYLXXSBYEVDSPEDOIJJUZMVLGUOXJJLTKYPRERFVAIJHTPFXWJTBXHISNHWWYEMLXQUZQENISVMCFOLSSPKKKPQTFYYOANFECRTZBIBJVQROGZEHUAZAXHVTBMMZMJPDMOWCENKHAGKACIGQQJVQDKGGGBAEBWQCSBXDTOFVDAREANQCCWBAUMPPWKYHDYQKZFHVTW");
    tmp_tmp_msg_0_0.attr_type = 3U;
    tmp_tmp_msg_0_0.min.assign("YKIYGGVVAGDORIWPUQDZCLTFNKERWTKCEWWQBHXEUNUFRABKFZVHNNMSBTDHDYKMFTCJXWYPKLPMVOCYFSWAKBPACIYMURQMAHBBENUCJQMEFINNEPNQHRTUYJITSEADLVCOARGHWGUJBXZMXSYDYIWTPOJTXOZLZLPJZGEJFSITLXFFVSPWWR");
    tmp_tmp_msg_0_0.max.assign("FTCSIJLZRMBOQBLEOWQEODVQNIUVSUNUTLWFAKSOMKIZNLBPJCTVWUWOYXPQGBUHKQGUCPPQDDILEOKIJOTLBFZJXIYRCLZTKDLXSAKLTDZFASRVAIVQORPMXYGAGYAUQPXNGYHNCAOZEUQTXBMDRVSJNSMZRDFAYBYVDEITYNXBGSDNCHKMEZVWWNWFJJIMPSNHL");
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
    msg.setTimeStamp(0.9207392875670489);
    msg.setSource(20887U);
    msg.setSourceEntity(41U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(138U);
    msg.topic.assign("SDNCRLZJSKWEIUPYBVCDZYOGGRSTGLRFKPGVZCVURWYMBMLQJNXMAECZQHRUDDIEKKSIYDUEZNMTRLLVDFTHBAXFJYLVUHKSCWHIBFLAMEWAZPNTCOFGLVYQCPQCYQJMEBFTQWBTJVWBGQXKIORHVFGGHNGXJEJUNZVQAQANWLJNXDNODLOTJFWPQITCISYKVYZKBIOGPEDTOA");
    msg.data.assign("RGHMFWQVKMEXAWVPVTHYIXLGJCITNAYLYEJJYGEHYQBGNRBWFSYVLVAFIMXCCBPRMUTJYDOAUTTENDINEEPSDSAXDQFISUNIRHOZPKVAMBVJBQRKLMHSJBLQSFCRZZBKOSMJMJKJLDYCLTFYQATPZO");

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
    msg.setTimeStamp(0.4144885078561654);
    msg.setSource(29161U);
    msg.setSourceEntity(17U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(240U);
    msg.topic.assign("UMMFBGHCEHDSVTRAXYSFWNUEDAUKIT");
    msg.data.assign("DBFNELEWZWATUGYQXICVJUSPRQKZCMDUYCMPSUASTLWVDULLPWMQJCXIRMVOOESZHXEYIZFKJXVDJQCJTHMNPTLGXMWOHRHOHOOEUPTKKGOPYIXRVUAQFAVKTWTYNJFQIJIMCLKXYTZVOFGA");

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
    msg.setTimeStamp(0.20419007710595727);
    msg.setSource(11560U);
    msg.setSourceEntity(197U);
    msg.setDestination(43901U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("QZNRCMOTZVGCOUXEASWYWZYNDBGDLYVJRMCUBRWHUAKOFOGFATXTXRZAXTBYVTHSVDVIQFTCEDBLHLASKJCPDNBSKAGPJPLNKTQJHARBJOYEYGWUXMWBMHAHWTFGFPQPCUCFZDTRXZUNOLVESXCMRHFZREFJEPMIVHKEVBGQXIOJRXZQKLUNLFKPMPEHSANLOPGNOQGUIUKKDKIABGWXIMWOITCNDJQHIYFYDEIQ");
    msg.data.assign("TSGYQYIWHYTJOSUYVRNAUUPJJHGMJCHXAPESKZVSODZXFMJPAUAIPWGIKNMESWOKTWLTNKXSKSGPIZXCJEERUTFLFVUBPHBCTINQOLHIEWWPPDRVNQJVEXVRC");

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
    msg.setTimeStamp(0.5761409217226583);
    msg.setSource(32108U);
    msg.setSourceEntity(90U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(76U);
    msg.frameid = 36U;
    const signed char tmp_msg_0[] = {21, -49, 117, -53, 72, -67, -126, 35, -2, 62, 53, 30, 124, -79, -81, 14, 46, -50, -93, 38, -49, 62, -42, 28, -83, -54, 10, 69, 84, -106, -47, 89, 12, -63, -30, 35, -80, -10, 44, -90, -124, 38, -52, 33, 3, 50, -120, -110, 18, 105, -73, -49, -76, -79, -76, -7, 117};
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
    msg.setTimeStamp(0.24932636074072811);
    msg.setSource(22272U);
    msg.setSourceEntity(0U);
    msg.setDestination(22890U);
    msg.setDestinationEntity(240U);
    msg.frameid = 62U;
    const signed char tmp_msg_0[] = {23, -76, 43, -22, -20, 64, -26, -71, 14, 57, 31, -48, 81, -117, -116, -118, 125, -47, 24, -58, -11, 2, -38, -73, 25, 100, -107, -123, -28, 110, -86, -60, 76, 64, -68, 7, -104, -103, 96, -18, 40, -66, -24, 94, 40, 121, 40, 70, 83, 74, -67, 55, -103, 51, -18, 2, 41, -78, 43, 46, 32, 53, -126, -128, -52, -5, 2, -100, 9, -119, 80, 106, -11, 12, 45, -126, 112, -89, 61, 3, -47, -91, 32, 122, -95, -27, 19, -118, 68, -113, -15, -50, 63, 97, -115, -78, 30, -94, -98, 23, 100, 84, -26, -102, -62, 60, -114, -53, 17, -65, 44, -44, -64, -99, -76, 80, -87, -25, 11, -71, 42, 53, -16, 19, -29, -25, -96, 87, -92, -72, 64, -16, -118, -41, -126, -95, -93, -22, -16, 89, 81, -88, 31, 17, 111, -32, -108, 112, 115, -85, -31, -40, 72, 102};
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
    msg.setTimeStamp(0.099047846193269);
    msg.setSource(62035U);
    msg.setSourceEntity(180U);
    msg.setDestination(14607U);
    msg.setDestinationEntity(119U);
    msg.frameid = 67U;
    const signed char tmp_msg_0[] = {21, -8, -42, 106, 73, -39, -64, 54, 13, -88, 31, 74, 0, -117, -83, 88, -21, 6, 74, -78, -39, 69, 3, -26, 8, -46, -77, 39, -16, -103, -71, 103, -89, 89, -87, 13, -56, -64, -93, 43, -125, -20, 87, 13, -75, -53, -60, 40, -68, -36, -53, 40, -87, 81, 47, -67, -47, -47, 52, 77, 1, -102, 61, -95, -25, -6, -86, -109, 116, -11, -81, -18, 116, -120, 72, 50, 57, -17, -65, 57, 74, -93, -29, 42, -122, -46, 59, -15, 5, -18, -78, -96, -35, 57, -107, 51, -58, -16, -10, 28, -59, -34, 50, 87, -22, 10, -34, -123, -117, 65, -33, 33, -126, 105, -18, -9, -93, -23, 16, 70, -51, 125, -117, -95, 48, -103, -44, -88, -95, 45, -85, 115, 53, -63, 65, -119, 39, -89, -35, 92, 110, 109, 20, 80, 60, -21, 124, -69, 42, -22, -77, -20, 33, -73, 56, 73, 113, -15, 105, -4, 121, 55, -76, -16, -99, -36, -5, -31, 70, -60, -8, -91, -127, 2, 7, -97, 8, 57, -74, -61, 78, -2, -114, -72};
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
    msg.setTimeStamp(0.4621652488492214);
    msg.setSource(11546U);
    msg.setSourceEntity(188U);
    msg.setDestination(58316U);
    msg.setDestinationEntity(26U);
    msg.fps = 217U;
    msg.quality = 118U;
    msg.reps = 220U;
    msg.tsize = 166U;

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
    msg.setTimeStamp(0.6256330379123213);
    msg.setSource(12596U);
    msg.setSourceEntity(133U);
    msg.setDestination(43225U);
    msg.setDestinationEntity(107U);
    msg.fps = 236U;
    msg.quality = 50U;
    msg.reps = 93U;
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
    msg.setTimeStamp(0.8167550807535302);
    msg.setSource(60131U);
    msg.setSourceEntity(138U);
    msg.setDestination(36346U);
    msg.setDestinationEntity(170U);
    msg.fps = 241U;
    msg.quality = 102U;
    msg.reps = 67U;
    msg.tsize = 98U;

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
    msg.setTimeStamp(0.4968179517666109);
    msg.setSource(5036U);
    msg.setSourceEntity(203U);
    msg.setDestination(50249U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.8454190052477393;
    msg.lon = 0.5349130679626757;
    msg.depth = 135U;
    msg.speed = 0.9692138626817195;
    msg.psi = 0.42726023087070664;

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
    msg.setTimeStamp(0.8326437918021444);
    msg.setSource(21050U);
    msg.setSourceEntity(251U);
    msg.setDestination(46689U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.04890392061562743;
    msg.lon = 0.37508824707028465;
    msg.depth = 33U;
    msg.speed = 0.5843736391027204;
    msg.psi = 0.42543491072277007;

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
    msg.setTimeStamp(0.8144235961626418);
    msg.setSource(17046U);
    msg.setSourceEntity(61U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.18119476304196336;
    msg.lon = 0.4249160162948896;
    msg.depth = 2U;
    msg.speed = 0.057786875852624986;
    msg.psi = 0.7233356463135131;

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
    msg.setTimeStamp(0.12270713453095294);
    msg.setSource(59742U);
    msg.setSourceEntity(43U);
    msg.setDestination(5093U);
    msg.setDestinationEntity(84U);
    msg.label.assign("MICHRCFVOZMAQBEXYOAIXBQMQJVGEFUAYTQRGADYSYQKMDXUVLFGHYSNJZEZISSZTEKBILXDDXTPNCLNJBUWZIQLTVHVIAJCLZRXLCTVWKHPTYBSWEAHJGKSEFXQIQUFFERFTUZGZYWORPMKBKYVWHYSYPVODQSRJLPOJDUGMRKBD");
    msg.lat = 0.5888928287288638;
    msg.lon = 0.9214092560747459;
    msg.z = 0.7094818666157208;
    msg.z_units = 141U;
    msg.cog = 0.8162003684449364;
    msg.sog = 0.5185469947216982;

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
    msg.setTimeStamp(0.9302423233140282);
    msg.setSource(54054U);
    msg.setSourceEntity(180U);
    msg.setDestination(33782U);
    msg.setDestinationEntity(116U);
    msg.label.assign("RTDHQBNQKUCSMNROWKNIXYSYL");
    msg.lat = 0.5577591004895909;
    msg.lon = 0.4441970319093317;
    msg.z = 0.09481204107646946;
    msg.z_units = 131U;
    msg.cog = 0.8850708176130293;
    msg.sog = 0.5895102415335882;

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
    msg.setTimeStamp(0.8229480613061724);
    msg.setSource(59203U);
    msg.setSourceEntity(61U);
    msg.setDestination(61927U);
    msg.setDestinationEntity(151U);
    msg.label.assign("JZDITEVNUDZGAITRFWBXPKHOGWHEJBILUOSRIMRSOVYYJYMCEKTMCDEZCARYVHPYFHWSAMPWDBUGZDCZTRSZRGXKQISYCVVPWWVLXUKPHUHCKQOLEEKXZTLNPHZDNAGBBMUTGNQCOTJFYYVQJLS");
    msg.lat = 0.8135050491257304;
    msg.lon = 0.33073691966550833;
    msg.z = 0.010849336249350472;
    msg.z_units = 57U;
    msg.cog = 0.20151535418649513;
    msg.sog = 0.88536161784843;

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
    msg.setTimeStamp(0.49245987465298713);
    msg.setSource(28240U);
    msg.setSourceEntity(78U);
    msg.setDestination(32700U);
    msg.setDestinationEntity(146U);
    msg.name.assign("CZGZBNZDRTDOXBWXKBWWYOVRLMNPXUOVIBHDYOANVFISEXMQNLLJQFPVHZUXWUQJHJKYATPGHYCRUPAGGUCKSGONTBJYVTHVCHLWJZOWTBQIROPMXSQHGKENMAMQTYKSBZIUYLGMNKFZFXAKXFLSDRYMTPUFYWLBCECZRICBAGRRQ");
    msg.value.assign("GVDWJFVKCEASQUEPQGUOQXLGRPEAOBUASKDYHITZWNLAWGKKELTXQTRUHYDIGNUPTCCDKHIENDBLPQMADCFGKAFVEWHLEZJJZCYDNZQRQDAYIUEPOUVRHAOYJFIMHFFLITTMMJRORTMPJQWOBOHKYUILPNHLCDQSVBBCSSNSGNLJBXRJMRCEJHXNMVRTZWAOWBZZHZRYTWWWFEQYKKG");

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
    msg.setTimeStamp(0.7882555544235368);
    msg.setSource(36412U);
    msg.setSourceEntity(101U);
    msg.setDestination(54675U);
    msg.setDestinationEntity(86U);
    msg.name.assign("YCQOFUCLUPSKHGDWUKBLMYZNAJYJMONOZFOUTTVWNXWLXYVZVIJBVKEYITVGWSIIBBZMTKJGPUTEQKGUURPUWAPCLLOYVW");
    msg.value.assign("XFLSXQUOYUWEYJRWJXNPVVRBRFKXPUTJEQISJWOLFATSTTEAZSBMWOKGNJCRTQHJKHMYPISCQZWNHNLCNXMMBPSAORGYFGGISOHWOEGCKLQMMANBBVBGGKFLIZQSPCDEHLZDZFAHLFKHCQATBCKYJHEMKQPBLNEPMDFZWVDYTMOIJJDGUUXVNZRH");

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
    msg.setTimeStamp(0.689698822094005);
    msg.setSource(28169U);
    msg.setSourceEntity(94U);
    msg.setDestination(27340U);
    msg.setDestinationEntity(1U);
    msg.name.assign("GYZOVKTHYYCKQHVTGGGBRMSVZWVNYGOQIUKZIUIDSJTNEKKEEQQTWLNFUIUPEFECYPFWJBLBWMJSLDSQDNFAPSIXYFBZUVMVJZPCSHLFTSALPUCIUMTJIRYENOKOEWWA");
    msg.value.assign("PAHRUGYXSJVCYAMHSDMJOLGRJVYUILNZEIFQUPPO");

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
    msg.setTimeStamp(0.8920992895315588);
    msg.setSource(46225U);
    msg.setSourceEntity(158U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(170U);
    msg.name.assign("BFTONTCABEUOGMCOLOQHCCNISSLQTDAOMBYUVQUKAPOXBKTWXKYRIZP");

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
    msg.setTimeStamp(0.4640849220913147);
    msg.setSource(8778U);
    msg.setSourceEntity(124U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(213U);
    msg.name.assign("NXNMUKFZMBLAQIUGMHGKAFVONDKCIMRGZTPGHVGBWYSARURXNGLCPYWJVUURRCQJJDJIXWDNQQHQQUZXWCXWUFNICRELBFSJUVRZLBQPRHGENBFLPTBCFEHDMEZBGFDOAAJSDIVJACVBWVC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UHFIGNWNEOMJEFZSVCXEKLEVXOAYUXZSSLDVQLMDBYDIRYPTIOMLFGIUBNVCMYPAJBXHKDATYHKCHBFIIJZUDRIQDKJFHZGKPGWRRNVALNFYJSBSWMQYEABMMCIKXRKPHVTKSNGXVLQEJCNDGGPWJTTYEWYSFJVKFATWXMAHFXQIHLUNZQJUDQLFZ");
    tmp_msg_0.value.assign("XPYFWVGDOGJTFNQWIJCTYOKUVNBBQRVARQWEZCLTRUYSSAKFMLUNSPBRGVTFBCTOGMIZYQKMFAKVIPXXWCAIUWBSASCLCJKUUOFPB");
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
    msg.setTimeStamp(0.7845138042848085);
    msg.setSource(27090U);
    msg.setSourceEntity(53U);
    msg.setDestination(2600U);
    msg.setDestinationEntity(56U);
    msg.name.assign("EUKNRCXILGINHMQIAHSQOJJBODQIMUEJLGGFHKQUWFCOPVMWXGLSHVPTGYIWTKVUQZTXOWSFSURCEIAVENPCPRRCUYFEFZXIPRHQEUWSRAGPYBWBBVNSEXHJTDOOPCMWUDSHYZPKFKSBMJIAGUAGZHFYTYEDQAVLODKCHRCFXKPZJTVUOLZTAHLDW");

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
    msg.setTimeStamp(0.4161421804750812);
    msg.setSource(13595U);
    msg.setSourceEntity(3U);
    msg.setDestination(45462U);
    msg.setDestinationEntity(25U);
    msg.name.assign("VRHNJPFBDCTDSLHQBGWYKETEQBSVAZTXJFWUKULZKMKXFDSZAQUDEIDTCCJENCEUKLMUCIQY");
    msg.visibility.assign("JJIEAGJOUMVXWQZMYXWVSFHUNIFYCDODTKVVAIUTXTQQCKJSTRYKGLZJEPFJQJHDCGBULNLIGDGGQSOSHTAFUJICGYKMABVPKFWUG");
    msg.scope.assign("TCLXBXXXACLVNJURLFDISSKHILLVVGUWLYXWFVPMLMOVZSRBIJNGRBBGRIJAFXWOHTHFEXQYUDKZWJIQQAQTQIGFMPGZHQKYRWEAAUZEWOQGEPBBZCMOOWNEDPBBWPVNGSCQWSKZYCFBIOVIITTSEGHKHYKMXCRUYTTPSPZVKJKOUCCLVUTFYTFMDPNZFBATAWDPIHZNRJEKEAHXADQOMNMMNYLOAESM");

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
    msg.setTimeStamp(0.8173311588177383);
    msg.setSource(34081U);
    msg.setSourceEntity(218U);
    msg.setDestination(39242U);
    msg.setDestinationEntity(3U);
    msg.name.assign("JLCVGHLPHBUBBZMAAHQSOYIUSJLGMOMSTCPTRXQLAZNBSGNYQBXNONKDZJNULZKVGUMYRPEDTYDSZFVZRJNLZWXFDEOMTDJDMRHFSJRTYHKEAAQWMCSEFKFUCZOBMGTGJTCYUVV");
    msg.visibility.assign("MXPZXDPLXSJLGWUIWZIXVBCVDPSUKRKMQFFBNCHWLDVWATCRXGFUYUKLUEQUPOQOJHZMQJFAJWZJUYSRNZYLEQTLOPSUKKSTQGYQOCNIBPFRTBQDMVJCVKECBMSDMEECZAZZHIRTNLIYBYUKJDNFLSOHXKCBQWPAEBMSVTSOHVFPIYJERSJLDGDATFGWHL");
    msg.scope.assign("YCWGZLENCVHFVZUTVLPHPXKGWWELBTHRRFYZASPBKSZIAIMZXQOCUOTYFGZGYYFWTKLAUVIFEIMOCMKPHXGNOJBMKYPNEQHIYVSKVDLRTFONZJPNRPJNLVEPOUANUTDKOIGIRY");

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
    msg.setTimeStamp(0.2020818816821659);
    msg.setSource(62755U);
    msg.setSourceEntity(89U);
    msg.setDestination(25621U);
    msg.setDestinationEntity(100U);
    msg.name.assign("OXNLJLSAVHEKYABVYJNVMGOAPSGTFXJGQHOPBPZCWVECFTYRCLVJFSNNHIMUIDBKHPIGBTDWZHWBRWRFYATNUUFVZIKBRAJKBELTIHQRFDYFHPWHWJQUSIQJXZXSISGDPGNZEQMTYYJBVQDNYOLOPHVAEMRGZPQDLUDYDTEZEWKAOBUQBULWVRNPSOGFKIENDKUVNSMZMYXOCMAXSCIKXJCCCKPFGWFDQO");
    msg.visibility.assign("UYAHTDKQDYENIWSTLYRTLXJFBRLHSWAKCOBAHWBMHVACHEMYUSIWCFOLJGHFMJNWVOJNMICRJKXNUPIKGICRJAKYSTVYQOBWQZUVO");
    msg.scope.assign("OTLGLJKJKARVPTZTOMNMRTYFIXKIPSFNEO");

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
    msg.setTimeStamp(0.6887239443757261);
    msg.setSource(60641U);
    msg.setSourceEntity(143U);
    msg.setDestination(64111U);
    msg.setDestinationEntity(177U);
    msg.name.assign("EKEGDEIUSOSQRGTUSRMHULWTZJAIWZHAXUWZVCOJXDFFLXBVRLQFTOTNAEJJTARQZKRHUWPKVXHGDSVNCHRVYEMPGHLCFTYYHIBLYMJXEMDUNUKCALFRCIULDEPMGMZBPLZGOPOHGADMHNCUDGYCJYUAXDPJZMJFQRCDRE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MTXSOTFBHNGBWDQCIANVGQKOBOFKCHXFMMEOBKNXATSHJMIOKTYIZHP");
    tmp_msg_0.value.assign("WSIRWLBKTUSEBMRHSFJAKPZEMXIMHNPIAHHVSGALTHSRAMDHJTDPHFTLWMZIEXFDUAKJOXRFZAUVUDYYNFHEDGHCXVXJJCGYMMMGGNYGFLBILOOJNXRTQPJNQOSZSDZIRWYQUMOTIQTLBCZBXOUDOJQKPYRGQVLXXDPGHJRBPWNZTANVQRCKWQGBFEZPY");
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
    msg.setTimeStamp(0.9250282489421776);
    msg.setSource(34909U);
    msg.setSourceEntity(57U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(90U);
    msg.name.assign("FCJFSVQMEQFNBNOSCWLAZJNXDAQAGYUJXBLIJYVGGKPOFHBWCHLEYQMWMTPXHKJYLCIDCBVFUDTCDUIRMJKPRGSTDIZMRUNYOSZOSVXVTXEYPQHCCSWFPUTQKYEXYOEYNPUTLSECOWTTJRZAQHMLMISQH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NTFKQJGOVXFWEHVJ");
    tmp_msg_0.value.assign("TEOCTNNHAYBUVGGPRBEVWMOCYOYKSXOXDKOQCBGNQXKBDREUFQOZCQQQFDDXNCPJIBETLFEAPKPFEYSBMBIXTWHXFIJUNSKUOAFYWHSTVZHWBMGTRMXCHERJDZKPMYVZLSWRMOEKZGYRENKVNNJMHUTXSQKYCJFXJQDAJDIEGJULVKAIZGUSAMVFTWOZDRLQTFVIDWNPWPYHJCYISLBGLRO");
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
    msg.setTimeStamp(0.053745823324784836);
    msg.setSource(9180U);
    msg.setSourceEntity(175U);
    msg.setDestination(38603U);
    msg.setDestinationEntity(148U);
    msg.name.assign("KIPALEIVXVSUCAEWQKEYVNGXAZUXWKHWMRQDZTLMXVXZDFGKMXCCYCVWMHNUMKCIHTHAWGKOBWTRVCBTDWIODJPJEMRYBZVCBXFQJNIULTDSYLNOBYKCHWRSRORZPGQSSYR");

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
    msg.setTimeStamp(0.41965793531928275);
    msg.setSource(2884U);
    msg.setSourceEntity(141U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(29U);
    msg.name.assign("XRHOVTIZOPNJKMVTCXVXGUKRCLQWRHCBKQASDKNSEYJVUVIFUZJIXJJIAXOWPCXCQRRMPEGRGCMZFHURCCLYLJMDTOIWHHYOLUZYUZWFYICNTQXAAHPBSDPVGSKBWHLYOPBGSUMAYIWTIQDBREWQNNEJDYGVFKXTEFDDOCLJOEFOMAZQSFVXF");

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
    msg.setTimeStamp(0.7699364808495954);
    msg.setSource(43101U);
    msg.setSourceEntity(246U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(163U);
    msg.name.assign("AMRLLNQZGFGGNPXNDGJVRRTQZSBVUUPRYVJVQDSWDSHYXMIKMIEHCODNHEYARGNWYTMMHZEFRWWDIVCTGTBGXUZRZOKNBUKFBLVRLPALGABICBMGQFUFEICEWFCOARTKQUXPHGLMPIZLVYFEABVXDJMSSHFYWQPHWOPHQSYBXDFUMXBNHAOIZYPTDICPXSJJZ");

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
    msg.setTimeStamp(0.7819919889793809);
    msg.setSource(54913U);
    msg.setSourceEntity(186U);
    msg.setDestination(34022U);
    msg.setDestinationEntity(45U);
    msg.name.assign("IXQBAEEQVLBRUQUMNGYMXTFZDLWAGMJRSFOWOJUSVTGEQNEEOKVXCUCQJEEWUKPZWHOSHSLMNOPJUKYJ");

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
    msg.setTimeStamp(0.5611594333169538);
    msg.setSource(30843U);
    msg.setSourceEntity(182U);
    msg.setDestination(3264U);
    msg.setDestinationEntity(6U);
    msg.timeout = 3236728888U;

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
    msg.setTimeStamp(0.652644275068462);
    msg.setSource(46009U);
    msg.setSourceEntity(147U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(4U);
    msg.timeout = 2023176898U;

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
    msg.setTimeStamp(0.6867596697654277);
    msg.setSource(58693U);
    msg.setSourceEntity(6U);
    msg.setDestination(7832U);
    msg.setDestinationEntity(100U);
    msg.timeout = 2097692015U;

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
    msg.setTimeStamp(0.7603517203184607);
    msg.setSource(19210U);
    msg.setSourceEntity(236U);
    msg.setDestination(41858U);
    msg.setDestinationEntity(112U);
    msg.sessid = 4237669400U;

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
    msg.setTimeStamp(0.35324120070014864);
    msg.setSource(59717U);
    msg.setSourceEntity(91U);
    msg.setDestination(32878U);
    msg.setDestinationEntity(226U);
    msg.sessid = 513209215U;

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
    msg.setTimeStamp(0.4074097430832536);
    msg.setSource(64207U);
    msg.setSourceEntity(65U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(40U);
    msg.sessid = 856205957U;

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
    msg.setTimeStamp(0.7960330943757442);
    msg.setSource(63458U);
    msg.setSourceEntity(48U);
    msg.setDestination(36266U);
    msg.setDestinationEntity(55U);
    msg.sessid = 371022790U;
    msg.messages.assign("LRDGGYAWXPYUJHZEEORWCBVSQZLKHBZJAMPIKJJXIDTQGTURXNTWQLVIZMPAINWXNGWXXACMMNRUWSYKCLBGBPPCMABSCPFLQBMBZHOHLGXQTHQAIZVJGJWFEATFTGFHFAHFDQUFUUSSSKETEIKMJHWOVMQCGQDYDKDMRRJFTZBP");

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
    msg.setTimeStamp(0.7832514595759614);
    msg.setSource(17774U);
    msg.setSourceEntity(148U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(134U);
    msg.sessid = 304599958U;
    msg.messages.assign("URKJITMXHPZWBBNAKUBQQQTCBSFRIYJOCURSXKZLJWPGVUZYZSTQAYFEZICOCGTHLJTGBEEFXPPWRJBPQLAXGYHKVGUZPRWHAEIHRLZDUSWDVYQXFKALOQEUNTIJMJKFDVBRCGGYNMYHPDFVRMCGGIODJCNWNNULJKUJCDYFWNVVKBQPXAF");

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
    msg.setTimeStamp(0.23541697113880666);
    msg.setSource(60509U);
    msg.setSourceEntity(106U);
    msg.setDestination(21834U);
    msg.setDestinationEntity(185U);
    msg.sessid = 2322285082U;
    msg.messages.assign("SVCFNTJQANSMRAWDZEVPJXDSPUZRBEZFGQFYYPDSTLMNTXQNHWOTUNDWHKUCU");

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
    msg.setTimeStamp(0.7356651114362875);
    msg.setSource(29483U);
    msg.setSourceEntity(226U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(169U);
    msg.sessid = 3276842868U;

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
    msg.setTimeStamp(0.6142151663562723);
    msg.setSource(58770U);
    msg.setSourceEntity(126U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(239U);
    msg.sessid = 1939365665U;

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
    msg.setTimeStamp(0.16976324184459046);
    msg.setSource(39651U);
    msg.setSourceEntity(175U);
    msg.setDestination(181U);
    msg.setDestinationEntity(167U);
    msg.sessid = 672401486U;

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
    msg.setTimeStamp(0.3417274062468916);
    msg.setSource(5637U);
    msg.setSourceEntity(191U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(41U);
    msg.sessid = 3299902953U;
    msg.status = 127U;

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
    msg.setTimeStamp(0.9421117515413293);
    msg.setSource(62878U);
    msg.setSourceEntity(191U);
    msg.setDestination(53814U);
    msg.setDestinationEntity(78U);
    msg.sessid = 1330960223U;
    msg.status = 15U;

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
    msg.setTimeStamp(0.9658662387203177);
    msg.setSource(11166U);
    msg.setSourceEntity(125U);
    msg.setDestination(58504U);
    msg.setDestinationEntity(75U);
    msg.sessid = 82109710U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.6094109687012792);
    msg.setSource(38390U);
    msg.setSourceEntity(137U);
    msg.setDestination(59781U);
    msg.setDestinationEntity(215U);
    msg.name.assign("HXAXIVTKMQNKQLORGTZFIJPEXCISBCUZQNDRYQTEUBGSCZXBLBGEBCPSSXWBKCWYCXNAOJYGLZRPDOSSMAXDZIUKVCQFOLJWJZUNRTFSBXZKQUFDLUGFMRSIYAPJWHOEXYQICAVMMWINUFTLFNAGKODTMFHYVHATVHWVIKVHRRKDPCAG");

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
    msg.setTimeStamp(0.298706772283426);
    msg.setSource(17982U);
    msg.setSourceEntity(19U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(133U);
    msg.name.assign("BCYUDHZXNRMJXXUYEGMWESCNFNHBGGWSQJZTYVQHYTQNEZUFCHYIJNRUFKLUEVRS");

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
    msg.setTimeStamp(0.4435801082391162);
    msg.setSource(17790U);
    msg.setSourceEntity(39U);
    msg.setDestination(11451U);
    msg.setDestinationEntity(187U);
    msg.name.assign("EYWOJTTZXLWFJHJTBHNMKVQDFAXXBAQTKQXODTUXNLEOPQDMXEFJWLUUXWZKFVIISWDJWEGIOGFNPFMLVTVDZTACSTYIFSCJOCSNYLPNNOBPPQPNHMZLMCWMBBVKBAGAGULCHVDZHTGKGRBGUJXQIOUNJQBEEYKSUVRRDWS");

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
    msg.setTimeStamp(0.7059906770941913);
    msg.setSource(27188U);
    msg.setSourceEntity(184U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(237U);
    msg.name.assign("EIWUZRCDUQIMTYETKCGLNFEMNSILHYEWFZJTVGYDDRORUKDEHDJZKWQMSMMIMKUHMMXBQAVEEGLVEZARGL");

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
    msg.setTimeStamp(0.20197282896855917);
    msg.setSource(19448U);
    msg.setSourceEntity(212U);
    msg.setDestination(44710U);
    msg.setDestinationEntity(206U);
    msg.name.assign("LNBCCCGRWQKIDVUAYDDWYCNOJAMPY");

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
    msg.setTimeStamp(0.7619706380742755);
    msg.setSource(55055U);
    msg.setSourceEntity(56U);
    msg.setDestination(36767U);
    msg.setDestinationEntity(56U);
    msg.name.assign("WHYBTURBXYAKCTDMEOTGNAKZHZIGLQIYGLKYDVRJVTJZVORYEWIEGNCIZJUPPXNNAVUMZBWRTMFCYDXERUVFJLOWXBKOAOFPERXCCJYDSUEKLTWDQEPMQZMWHFQBKAZHJLPWXBKWF");

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
    msg.setTimeStamp(0.7650176469766817);
    msg.setSource(54590U);
    msg.setSourceEntity(11U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(36U);
    msg.type = 129U;
    msg.error.assign("ZLCFJITDPHUCIXKYVEIXJBXQUTQMKOSIKNSQPVFWMYWNWWOSLQTSXWQPXGCIYUAOETQLUXFGOHPXSXUDNEQVRFRAVGLHTP");

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
    msg.setTimeStamp(0.2609219147737524);
    msg.setSource(5983U);
    msg.setSourceEntity(150U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(249U);
    msg.type = 158U;
    msg.error.assign("RWUOOPXCUWWPXEARXDDPUABIXAWSDYFIEQ");

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
    msg.setTimeStamp(0.11373502426756554);
    msg.setSource(27033U);
    msg.setSourceEntity(172U);
    msg.setDestination(49827U);
    msg.setDestinationEntity(97U);
    msg.type = 111U;
    msg.error.assign("ZUZYYYWHZUFKOIWBDKYOCHRKJRVABFDOGGNPUIMVGVBCYFXCOTSKWGVCXHOZOINLFPXADJJC");

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
    msg.setTimeStamp(0.7201781053985274);
    msg.setSource(42846U);
    msg.setSourceEntity(75U);
    msg.setDestination(42365U);
    msg.setDestinationEntity(85U);
    msg.seq = 5217U;
    msg.sys_dst.assign("PYCXIKVKZWOSMCYLXSLKJPJJZHBOBKGTEQHUXDFENWUURLQBNQOLWAAOBMDCQYLDIOVNCDICTUNMUFMFQXADNRAPIHGAZSBHFAUZPZDFAHNRKJGYOYVVLYNQJUSBFARUQGRFSEXVDWTLXR");
    msg.flags = 89U;
    const signed char tmp_msg_0[] = {16, 51, -98, -97, 105, -58, -24, -34, -90, -108, -1, -78, -112, 87, -37, 65, 46, -119, -89, -4, -11, -120, -82, 75, -110, -8, -77, -53, 48, -94, 82, 124, -66, 101, 112, 12, 15, 120, -111, -16, -79, -21, 97, 5, -102, -43, -66, -41, 10, 77, 97, -126, -111, 97, 3, -8, -126, 63, -103, 55, 50, 28, 3, 23, 77, -111, 97, -44, -100, -93, -48, 75, 114, -80, -12, -48, 62};
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
    msg.setTimeStamp(0.20433618274039034);
    msg.setSource(17805U);
    msg.setSourceEntity(142U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(75U);
    msg.seq = 35190U;
    msg.sys_dst.assign("MJLRXTKEGDNQTFPJQCTCCHTPUVTKGJRRUUBBOVNFFOVVRBRF");
    msg.flags = 16U;
    const signed char tmp_msg_0[] = {20, 57, 60, 105, 55, 116, 28, -10, -61, -60, -68, -92, -105, 23, -113, 30, -99, -13, 107, -14, 40, -30, 121, -100, 32, 38, -105, 59, 35, -112, -112, 2, 11, 93, 15, 36, -66, 69, 23, -84, 87, -121, -10, 47, 104, -78, -69, 50, 118, 108, -24, -60, -60, -95, -29, 67, -35, -46, -60, 107, 102, 5, 109, 14, -58, -30, -83, 99, -111, -22, -86, 80, 62, 69, -26, -124, -107, 102, 78, -6, -63, -99, 30, -5, -104, -44, -51, 23, -21, 11, -54, 6, 30, -41, 45, 118, 30, -124, 16, -108, 102, 32, 121, -26, 97, -64, 73, -14, 52, 67, 20, -87, -64, -38, 31, -11, -101, 102, -31, 12, -41, 108, -99, -124, 89, -5, 69, -122, 74, 37, -42, 102, -108, 95, -99, 116, -96, 99, -115, -86, -58, -38, -124, -126, -73, 28, -54, 56, -56, -78, -2, 49, 117, 42, 107, 122, -19, 20, 43, 8, -65, -76, -36};
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
    msg.setTimeStamp(0.5852188511396641);
    msg.setSource(15344U);
    msg.setSourceEntity(254U);
    msg.setDestination(22221U);
    msg.setDestinationEntity(6U);
    msg.seq = 53756U;
    msg.sys_dst.assign("ZMEQOYLUABXIJZDWEIRGSDOIKELFMRJAOYJGOSUNXMGCCYWDQIYBUCZOIHXRQNQRJTTJYWZRSDVTNFYVHWKWQHBOPFEPLMNAFQDRZUDJBAZCMFZGWRLGKYIXMEVUSLGOOHPOHVCPRIGBPFTTSXUXNLVRCPKCGJJDZDCTVEFENVYSPNNGLVWFNSSBLYIDHQFUHBVMHBYXJULKA");
    msg.flags = 159U;
    const signed char tmp_msg_0[] = {-118, -76, 94, 122, -110, -76, -61, -112, -125, 60, -18, 95, -118, -97, 118, -12, 33, -82, 20, 91, 111, 30, 89, -34, -6, -32, -30, -88, 61, 39, 24, -29, -70, 1, 24, 89, -73, 67, -66, -61, -34, 97, 28, -93, -52, 70, -97, -109, -34, -56, 10, -122, 93, 37, 50, -94, 30, -78, -126, -3, -62, 114, -13, -22, -48, 49, 110, -75, -117, -119, 46, -118, -118, -107, 94, -126, 28, 101, 83, -101, -104, 92, -31, -118, 104, -119, -60, 21, -89, -116, 101, 92, 89, 33, 3, -111, 83, 102, 120, 67, 49, 98, 47, -64, -72, -119, -27, -86, 41, -66, -94, 85, 113, 11, 35, -90, -27, -68, 100, -34, 66, -9, 47, 10, -13, -55, -122};
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
    msg.setTimeStamp(0.7691949940588768);
    msg.setSource(51849U);
    msg.setSourceEntity(5U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(178U);
    msg.sys_src.assign("YZSXDFIDECREOBJQMTFZRGIKGMWAJCECWPTQPRIBBDMERBXWBWGPZYF");
    msg.sys_dst.assign("KUYHIWAYPELFRPVAZXWHXNNACTXIHCOAJFQONGWZFKFTVQSNLREVSOUVRFCJSRFNPMGZHE");
    msg.flags = 190U;
    const signed char tmp_msg_0[] = {76, -20, 55, 83, 120, -74, 42, -20, 0, 77, -22, 53, 24, 27, 117, -126, -4, 0, -12, 34, 73, 70, 8, -102, -18, -103, 76, 32, 80, 84, -127, 122, 42, 69, -34, -19, 61, 87, 31, -22, 57, 124, -93, 90, 78, 99, -49, 56, -20, 31, 0, -68, 55, 39, -18, 51, -9, 99, -20, -87, 58, -8, 70, 22, -50, -31, 79, -115, -124, 118, 44, -19, -44, 39, -33, -119, -124, 85, -11, 125, 68, 99, -11, -61, 103, -65, 122, -7, -100, -105, 51, -28, 118, 30, 84, -44, -127, -99, -12, -87, -35, -125, -126, 111, 34, -28, -33, 122, -78, 94, 119};
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
    msg.setTimeStamp(0.0794200467763927);
    msg.setSource(12920U);
    msg.setSourceEntity(158U);
    msg.setDestination(9374U);
    msg.setDestinationEntity(50U);
    msg.sys_src.assign("HKQUGNCGUGOZAYWIGYPUQWTCTVUOSLJSWLCDKJIOVFCZQRZRMLNSFHGKBJJBCZWWEWJFZXTMSMHNMTWDUFFLEKHKLBAXVIACGVDNXZPJTXHQQFLAOHDPYXOHISBBVFCSOMDOREWLMAZCBEOYXDDGQHZRTJGLDXHXFNQEKUTQRNMCMATYKKARELJIXHSIFVBERDRULXIBUGYR");
    msg.sys_dst.assign("GFSBSYVHYCKWFEJNMLOISGNFGJFQZVLMMCPXXASEPIOTGGFEABKODCFEQOSHYVPKCQUQPMPRSWEWUPHACUZMROOLEALVRTUFRJTPBFO");
    msg.flags = 63U;
    const signed char tmp_msg_0[] = {126, 93, -112, -19, -90, 15, 49, -119, -43, 94, -58, -5, -69, -68, 42, 86, 36, 13, 89, -36, 105, -104, -69, -28, 76, 118, -27, 35, -99, 36, -40, 115, -45, -69, -59, -72, 122, 6, 74, -109, -31, 68, -68};
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
    msg.setTimeStamp(0.8478943127251585);
    msg.setSource(8320U);
    msg.setSourceEntity(197U);
    msg.setDestination(13607U);
    msg.setDestinationEntity(130U);
    msg.sys_src.assign("QPUZPFAALHLXQMBUCUATONQVKATDWKGCFBGWNXJRNNBTGSBZRHZOUZWLVDZXZTDEVROKKIWVUAEDXFKYXLJIICCPEEIDUWBFMNFDAWZLWNAHVRIJLIBYIXHQDAJFKPRUQMHSYQEGSOEPYVOPLTJXHCEYJBRAMJEYKLSUURIXSXRSTNQOKFWYRBKJMWMPSOCGBZTOVDGLIQKCORVHA");
    msg.sys_dst.assign("CAZXYORCFMMRMPLDIGVKDCAHZQWDOFBJMSOXSATEINTUSOSZWIBFHDVDQXPTWPYAWLFTBNKXMZVGTUVPKHVEUPKXTFJQQGYELHZWGVMHXKEYVREPOSNJNLQUYWHZGAJQKAZCNLIKWHUCTSYTLNMBGUEIAFSIDDGOMNBVQQPIQRRIOFUKIWBCPASEVJBGZEKLPSDAJVIJSCNENBDRRQBLULHAOKLUDXJZWMJXTOJRYGOHXTRPMCZCGBRXNFEYU");
    msg.flags = 5U;
    const signed char tmp_msg_0[] = {26, -5, -94, -97, -43, 13, -72, -21, -45, 40, -4, 19, 24, -39, 110, 66, -55, 57, 2, 1, 24, -79, -59, 20, 36, -58, -27, 55, -125, 54, -59, 122, 21, 27, -15, 16, 82, -27, -114, 15, 20, -32, 111, -103, -98, 114, -20, 41, -19, 101, -34, 78, -27, -121, -113, 110, 30, 69, -78, -19, 51, 125, 96, 26, 97, -16, 33, 116, 73, 14, 33, -55, -14, 66, -3, -49, -15, 36, 118, -124, -41, -62, -78, -77, 18, -66, 26, -56, 91, -92, -85, 111, 56, 72, -94, -26, 6, -115, -116, 117, -90};
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
    msg.setTimeStamp(0.5151383022544853);
    msg.setSource(25692U);
    msg.setSourceEntity(118U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(70U);
    msg.seq = 58781U;
    msg.value = 250U;
    msg.error.assign("SZXHHBXADGBLQNANPGCPVMNKRGYNPTIJWRMECHOTVUDVEKROKKVNRWUDOZMIFWYWAIFPIZSHUQXSGDOEYOBRDTQMKAQHRHXDVSSUWQODLECMOCCSJGBXJQNRMENZPFFCSOSEMRQSFMGAZIYTWCBGZBDDD");

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
    msg.setTimeStamp(0.9100542145572985);
    msg.setSource(54146U);
    msg.setSourceEntity(85U);
    msg.setDestination(29611U);
    msg.setDestinationEntity(68U);
    msg.seq = 5669U;
    msg.value = 237U;
    msg.error.assign("WIVPHGGVTFQXHTSEAQZBIDMLZUHALOTHMTLJRRBSPWZIWNYFJCUOUXDKFZCNTPOZPKFYRTICQVMDEPXGNYIBRUMKSITHLYIDNSGRSGQBDDPUWZQGWYQUONCKCDKQTCBZMJHNBDAENYFKHENGUMBLMPTCFJOIALGOMUENSIHCFVQBOOWEVLYIVSFJXPOJARWXEDJSJMBJEJKUXUNSEYKHGLZWWAQGX");

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
    msg.setTimeStamp(0.907905346721118);
    msg.setSource(43301U);
    msg.setSourceEntity(137U);
    msg.setDestination(27834U);
    msg.setDestinationEntity(231U);
    msg.seq = 46123U;
    msg.value = 181U;
    msg.error.assign("LZSMSOPUULKLGULQKJUNOIRPHQWBBPDPKNISPQLOBHZSGACACEHOLQDIQDFCAFKFWGUYIYJBNYNOQCOMYMIQRLBWPEKXZFXDGCDMRLATNDAYMEVSHQHKNTYYEHVZQKKXVXGPRNAIODEGVAOTXJBFMVZYHOTWBJXH");

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
    msg.setTimeStamp(0.7510501181466361);
    msg.setSource(51074U);
    msg.setSourceEntity(7U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(182U);
    msg.seq = 60750U;
    msg.sys.assign("GFYJTKJOXJXBTNMVVANUKBKRDYN");
    msg.value = 0.4473927278921783;

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
    msg.setTimeStamp(0.08945974631287734);
    msg.setSource(25893U);
    msg.setSourceEntity(6U);
    msg.setDestination(18316U);
    msg.setDestinationEntity(152U);
    msg.seq = 35001U;
    msg.sys.assign("XTNBKKRBUBCJLXWSVGAOQHPMCBKXTJIJOUPGSGCKNHLEWGDETXTMABVHDOWPHNOPJSIUUGWHIACSRRKRQUGEMFKARNCRHNZWLCDNDXVPYQMOSMYIGFUTEBVEFQVJZVAXRPAMHDBZGSAYPNTBOPPTDKYZTWIILEYDCDFYAQVZ");
    msg.value = 0.48328893631622394;

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
    msg.setTimeStamp(0.34428825802710783);
    msg.setSource(18546U);
    msg.setSourceEntity(121U);
    msg.setDestination(19885U);
    msg.setDestinationEntity(235U);
    msg.seq = 950U;
    msg.sys.assign("FVYTBLCTYDEXRTZMCJTSPYAALMZKEKLNRCMGWIYSQNDOWMLGEBLZGJUZWBYBDIZHKQQBMATUGBTCKJMKJUCLJWBQOAQQELPRZFKRZOXVNXUPABPHOYFUDQBXYFNSAPITGNMEEIPMPXVHMHGDRIHRCBWFNWQVXGUCIEUE");
    msg.value = 0.4839201560309305;

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
    msg.setTimeStamp(0.730650239123216);
    msg.setSource(21764U);
    msg.setSourceEntity(31U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(43U);
    msg.seq = 24534U;
    msg.sys_dst.assign("LSPJIOJVSBIYZIZXCCBBUUGZHLJRDOXMXIJZDGFDPJANAGIATBYHTBBCMXSCLKOOOWAYKBAPZFEDDWZRXQRSQVWXHNOTECJGYIPCQVJNVSZWHGDCLHUXKEJKZYLAMLJHTVLDBQRPKUQORNERSPQQPMNHWAXQDLYKEYGPTWNKUSMFINUCIVIWYXOLTHFFMGPRMSKNFLOT");
    msg.timeout = 0.48275388540340936;

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
    msg.setTimeStamp(0.6576113862454154);
    msg.setSource(41068U);
    msg.setSourceEntity(122U);
    msg.setDestination(53522U);
    msg.setDestinationEntity(45U);
    msg.seq = 51878U;
    msg.sys_dst.assign("ZNPQFVPOHPEGEVDLHGXXSRUEMDZFDEQJULEJHINJOYLOVPZEIOPEPNNELJDTIWBAHCOUTRUHMVSAZCJIUVYTNGGQLFWAMBWEAXSQVKAWSFHBVKLTVFXANDZMKHFDMVORYRU");
    msg.timeout = 0.6190212239793308;

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
    msg.setTimeStamp(0.3518611063227848);
    msg.setSource(38033U);
    msg.setSourceEntity(113U);
    msg.setDestination(45722U);
    msg.setDestinationEntity(115U);
    msg.seq = 14145U;
    msg.sys_dst.assign("MRMCJXPZGOCZOWXIVSLSEZTQNAHYFULAOOQJAFMKCKQLUHLUILIHWVNEXGOFVTLQSENKGBDQSHDDTINDYICIDPGBKKCBMDJXIJWZXZAMNMH");
    msg.timeout = 0.5123402258042987;

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
    msg.setTimeStamp(0.7547971228155067);
    msg.setSource(9064U);
    msg.setSourceEntity(145U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(153U);
    msg.action = 150U;
    msg.longain = 0.14830809121704214;
    msg.latgain = 0.8074482634018453;
    msg.bondthick = 1954689680U;
    msg.leadgain = 0.5316618430749286;
    msg.deconflgain = 0.849553900319835;

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
    msg.setTimeStamp(0.5498160258901956);
    msg.setSource(48476U);
    msg.setSourceEntity(45U);
    msg.setDestination(53627U);
    msg.setDestinationEntity(12U);
    msg.action = 169U;
    msg.longain = 0.9581424744986718;
    msg.latgain = 0.027948217526204466;
    msg.bondthick = 1279835271U;
    msg.leadgain = 0.9682857133570583;
    msg.deconflgain = 0.3521637817792922;

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
    msg.setTimeStamp(0.05022182076191162);
    msg.setSource(60678U);
    msg.setSourceEntity(226U);
    msg.setDestination(44756U);
    msg.setDestinationEntity(63U);
    msg.action = 87U;
    msg.longain = 0.40101441332975607;
    msg.latgain = 0.29738252231767714;
    msg.bondthick = 196978290U;
    msg.leadgain = 0.514495209461292;
    msg.deconflgain = 0.21141405520511047;

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
    msg.setTimeStamp(0.29018453750238193);
    msg.setSource(40021U);
    msg.setSourceEntity(201U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(118U);
    msg.err_mean = 0.2775140776860935;
    msg.dist_min_abs = 0.05276705018674743;
    msg.dist_min_mean = 0.33290462885868655;

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
    msg.setTimeStamp(0.34382100708567775);
    msg.setSource(52539U);
    msg.setSourceEntity(207U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(161U);
    msg.err_mean = 0.6021900282684374;
    msg.dist_min_abs = 0.05239916015905721;
    msg.dist_min_mean = 0.1932270084847173;

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
    msg.setTimeStamp(0.49892329006503866);
    msg.setSource(36963U);
    msg.setSourceEntity(234U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(218U);
    msg.err_mean = 0.008435305360659728;
    msg.dist_min_abs = 0.4667294811837024;
    msg.dist_min_mean = 0.04836212061095546;

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
    msg.setTimeStamp(0.410842039261182);
    msg.setSource(30260U);
    msg.setSourceEntity(22U);
    msg.setDestination(60034U);
    msg.setDestinationEntity(156U);
    msg.action = 225U;
    msg.lon_gain = 0.6655038329114003;
    msg.lat_gain = 0.8352783483133949;
    msg.bond_thick = 0.5470726884366022;
    msg.lead_gain = 0.05933231816572704;
    msg.deconfl_gain = 0.32836300634472537;
    msg.accel_switch_gain = 0.7583574675690254;
    msg.safe_dist = 0.25445629160628214;
    msg.deconflict_offset = 0.06288044970808215;
    msg.accel_safe_margin = 0.3319181749525496;
    msg.accel_lim_x = 0.0018913951821345476;

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
    msg.setTimeStamp(0.9910041853550668);
    msg.setSource(47972U);
    msg.setSourceEntity(46U);
    msg.setDestination(33636U);
    msg.setDestinationEntity(240U);
    msg.action = 186U;
    msg.lon_gain = 0.692076514736539;
    msg.lat_gain = 0.2761789786946761;
    msg.bond_thick = 0.7442033811139509;
    msg.lead_gain = 0.0321859669383725;
    msg.deconfl_gain = 0.1403984018479958;
    msg.accel_switch_gain = 0.4901876924155186;
    msg.safe_dist = 0.6036251398427132;
    msg.deconflict_offset = 0.9289330089033773;
    msg.accel_safe_margin = 0.7340101782821614;
    msg.accel_lim_x = 0.15566040405471016;

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
    msg.setTimeStamp(0.7959147309813259);
    msg.setSource(44987U);
    msg.setSourceEntity(143U);
    msg.setDestination(48470U);
    msg.setDestinationEntity(210U);
    msg.action = 228U;
    msg.lon_gain = 0.4605365473977576;
    msg.lat_gain = 0.1946959956455776;
    msg.bond_thick = 0.19237041078385408;
    msg.lead_gain = 0.606704447361435;
    msg.deconfl_gain = 0.3266404030176071;
    msg.accel_switch_gain = 0.7986990782430822;
    msg.safe_dist = 0.33972897103687405;
    msg.deconflict_offset = 0.37818040780066287;
    msg.accel_safe_margin = 0.210539207579043;
    msg.accel_lim_x = 0.7253179683139317;

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
    msg.setTimeStamp(0.26293750628334733);
    msg.setSource(21070U);
    msg.setSourceEntity(148U);
    msg.setDestination(34224U);
    msg.setDestinationEntity(63U);
    msg.type = 116U;
    msg.op = 198U;
    msg.err_mean = 0.1826588587467407;
    msg.dist_min_abs = 0.06846494298203254;
    msg.dist_min_mean = 0.12730436815054902;
    msg.roll_rate_mean = 0.9694855719633372;
    msg.time = 0.40483801949563236;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 92U;
    tmp_msg_0.lon_gain = 0.6760638159956687;
    tmp_msg_0.lat_gain = 0.23942138291678094;
    tmp_msg_0.bond_thick = 0.5120474195050357;
    tmp_msg_0.lead_gain = 0.796967846945674;
    tmp_msg_0.deconfl_gain = 0.4142850121598157;
    tmp_msg_0.accel_switch_gain = 0.6389287222048148;
    tmp_msg_0.safe_dist = 0.5751521339785054;
    tmp_msg_0.deconflict_offset = 0.07803673923007703;
    tmp_msg_0.accel_safe_margin = 0.6795723317926992;
    tmp_msg_0.accel_lim_x = 0.0683671270493349;
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
    msg.setTimeStamp(0.23612180575911468);
    msg.setSource(58962U);
    msg.setSourceEntity(229U);
    msg.setDestination(28033U);
    msg.setDestinationEntity(208U);
    msg.type = 59U;
    msg.op = 9U;
    msg.err_mean = 0.7596237245988434;
    msg.dist_min_abs = 0.9976543242784445;
    msg.dist_min_mean = 0.3674932192317022;
    msg.roll_rate_mean = 0.44791762868786256;
    msg.time = 0.3296935014267902;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 166U;
    tmp_msg_0.lon_gain = 0.4197257450950952;
    tmp_msg_0.lat_gain = 0.828588682450298;
    tmp_msg_0.bond_thick = 0.30774378164619287;
    tmp_msg_0.lead_gain = 0.7210169139553235;
    tmp_msg_0.deconfl_gain = 0.4726772791831164;
    tmp_msg_0.accel_switch_gain = 0.9456527751571355;
    tmp_msg_0.safe_dist = 0.24572128356359613;
    tmp_msg_0.deconflict_offset = 0.4357075142977118;
    tmp_msg_0.accel_safe_margin = 0.5595474138172627;
    tmp_msg_0.accel_lim_x = 0.6002135643492753;
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
    msg.setTimeStamp(0.7901904600650795);
    msg.setSource(45425U);
    msg.setSourceEntity(6U);
    msg.setDestination(56169U);
    msg.setDestinationEntity(105U);
    msg.type = 215U;
    msg.op = 229U;
    msg.err_mean = 0.3786346985596232;
    msg.dist_min_abs = 0.25249309547901844;
    msg.dist_min_mean = 0.22367249790421295;
    msg.roll_rate_mean = 0.07305374888716565;
    msg.time = 0.2640614247380546;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 53U;
    tmp_msg_0.lon_gain = 0.9991743441333588;
    tmp_msg_0.lat_gain = 0.7453949633222821;
    tmp_msg_0.bond_thick = 0.8186370218809166;
    tmp_msg_0.lead_gain = 0.8735064796106862;
    tmp_msg_0.deconfl_gain = 0.9709620802665787;
    tmp_msg_0.accel_switch_gain = 0.8194050005093004;
    tmp_msg_0.safe_dist = 0.9268029061513026;
    tmp_msg_0.deconflict_offset = 0.14856730509929195;
    tmp_msg_0.accel_safe_margin = 0.08459805035331225;
    tmp_msg_0.accel_lim_x = 0.9340368798120948;
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
    msg.setTimeStamp(0.7348589985856185);
    msg.setSource(20746U);
    msg.setSourceEntity(104U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.44796871971787167;
    msg.lon = 0.5831424247834971;
    msg.eta = 50461090U;
    msg.duration = 43814U;

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
    msg.setTimeStamp(0.09874695068531647);
    msg.setSource(56269U);
    msg.setSourceEntity(138U);
    msg.setDestination(22386U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.608689595406331;
    msg.lon = 0.5181576373233873;
    msg.eta = 3801237521U;
    msg.duration = 64196U;

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
    msg.setTimeStamp(0.9524105588252771);
    msg.setSource(55303U);
    msg.setSourceEntity(48U);
    msg.setDestination(11444U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.1647783486531954;
    msg.lon = 0.8807903691265682;
    msg.eta = 847179723U;
    msg.duration = 3076U;

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
    msg.setTimeStamp(0.435028068899756);
    msg.setSource(808U);
    msg.setSourceEntity(146U);
    msg.setDestination(19681U);
    msg.setDestinationEntity(48U);
    msg.plan_id = 8361U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.39548330747381566;
    tmp_msg_0.lon = 0.8605437448215443;
    tmp_msg_0.eta = 2732773779U;
    tmp_msg_0.duration = 9536U;
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
    msg.setTimeStamp(0.6078260471459953);
    msg.setSource(32990U);
    msg.setSourceEntity(197U);
    msg.setDestination(19073U);
    msg.setDestinationEntity(9U);
    msg.plan_id = 49289U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5227366857120729;
    tmp_msg_0.lon = 0.9768950510337024;
    tmp_msg_0.eta = 3595887149U;
    tmp_msg_0.duration = 31577U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.37892872972795955);
    msg.setSource(23385U);
    msg.setSourceEntity(205U);
    msg.setDestination(30832U);
    msg.setDestinationEntity(83U);
    msg.plan_id = 13485U;

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
    msg.setTimeStamp(0.8060905792205567);
    msg.setSource(18327U);
    msg.setSourceEntity(38U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(236U);
    msg.type = 97U;
    msg.command = 64U;
    msg.settings.assign("DZTZFCAAEKBDGZNZUKDGJURSPCKGGKMXRZPWHVYJNOVLHJJGXDRRCAJYIFOXXPERWKZNVZJJMUEPHFYMTII");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49375U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.986996979983768;
    tmp_tmp_msg_0_0.lon = 0.165386442736713;
    tmp_tmp_msg_0_0.eta = 2960540004U;
    tmp_tmp_msg_0_0.duration = 4595U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FYSHUMDPAYZJOQGZGFSDMPALRMTMSSTLVIITPOUHNEEROJUWZVMCHCPTJGIAUYZUPUSBWCEEMZJVJTBEBNNRXDDKFKALSCNAEKQQZFWHVBGQNHLAJCSJROWNUYRIHNTXKDCIIXSPXHFBQFLKTAARGOLVIIRVRTBWCDFUKABDWZGTKOYUSPVPRVOJCYMJKYLZLOEMGP");

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
    msg.setTimeStamp(0.4693631031791743);
    msg.setSource(28120U);
    msg.setSourceEntity(26U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(68U);
    msg.type = 196U;
    msg.command = 228U;
    msg.settings.assign("UZSISGHOURNSEUSUBVNQJXGTFOETESBWWDGPOZWBZYLXHGIVHRJJRLNLGCTOKSODMVKKCANLNHVEHZQPJSBIKUXTAOBJPF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 60050U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LZZBEXQNXEWMJJBNIEELKZXXNHARSWREPZVBXGBETOZHMRLVYOBWZRTJATGVFCYXIBJQVIUUSK");

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
    msg.setTimeStamp(0.7013460116980322);
    msg.setSource(37133U);
    msg.setSourceEntity(26U);
    msg.setDestination(41036U);
    msg.setDestinationEntity(242U);
    msg.type = 251U;
    msg.command = 1U;
    msg.settings.assign("IPALHWMTSYXJRLQXVGLLQLXHZCAYXRHMHPMKEBNPMTGCRJYPANOOQFPSBNCCJKGOTQJQTHYJXVMDWSJSUOIZWRDZSUWBMUWUGKOUYQWBEBFUSNHWVZCARVIURUTNZTGFNYOJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17226U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5746898184370912;
    tmp_tmp_msg_0_0.lon = 0.9557561048543858;
    tmp_tmp_msg_0_0.eta = 3136435021U;
    tmp_tmp_msg_0_0.duration = 47129U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IBECCVQYZNAEFAMVRNNMDSZSGUVHVGDZPSZQGGXBYZKTSXGNMINZIAXKNHDVHMKJAOQYAIDUQHUBFEMTRKQICFRFIFTVJBRTTCUWBQIJRWVPCEDGNQYIWMPAMZNBDSLNKPLDCJKPWVROCOUCPOOUAHFGJIRXLJZPWHTXNHARHRMOLBW");

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
    msg.setTimeStamp(0.7550966084189045);
    msg.setSource(12974U);
    msg.setSourceEntity(128U);
    msg.setDestination(24U);
    msg.setDestinationEntity(29U);
    msg.state = 197U;
    msg.plan_id = 19550U;
    msg.wpt_id = 170U;
    msg.settings_chk = 2114U;

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
    msg.setTimeStamp(0.5309378699620524);
    msg.setSource(36597U);
    msg.setSourceEntity(205U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(216U);
    msg.state = 115U;
    msg.plan_id = 61497U;
    msg.wpt_id = 9U;
    msg.settings_chk = 13078U;

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
    msg.setTimeStamp(0.6251359110828822);
    msg.setSource(19666U);
    msg.setSourceEntity(121U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(24U);
    msg.state = 251U;
    msg.plan_id = 58716U;
    msg.wpt_id = 86U;
    msg.settings_chk = 5867U;

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
    msg.setTimeStamp(0.47242375974193684);
    msg.setSource(49739U);
    msg.setSourceEntity(34U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(14U);
    msg.uid = 41U;
    msg.frag_number = 158U;
    msg.num_frags = 230U;
    const signed char tmp_msg_0[] = {-83, 60, 83, -43, 48, -121, -81, 38, -67, 3, -44, -10, -79, -105, 30, 88, 19, -109, 81, -68, -102, -87, 116, 11, -84, -29, -20, -23, 41, 110, 47, 39, 97, -71, 20, -77, 96, -36, 0, -45, -62, 61, -8, -109, 43, -22, -98, -109, 46, -66, 69, -78, 52, 2, -92, -68, -71, 85, 66, -128, 18, 23, -24, -59, 26, -20, -61, 104, -108, 93, 109, 35, 104, 45, -16, 96, -75, 105, -123, 49, -78, 6, -45, 78, 107, 14, -42, 34, 109, 94, 24, -23, -51, 99, -14, 96, 116, -77, -54, 77, -69, -126, -108, 112, -90, -9, 110, -17, -29, -61, -43, -17, -8, -85, -2, -68, -116, -127, -102, 74, 105, 32, 45, 120, -55, -68, -27, -123, 2, -102, 70, -79, 31, 0, 70, -98, -115, -68, 122, 68, 20, -104, 25, -21, 113, -12, -87, 26, 5, 113, 88, -25, -96, 62, -82, -94, -96, 89, 53, 9, -70, 5, -75, 1, 126, 102, -34, 21, -71, 87, 101, -71, 73, -76, -81, -106, -74, 44, -128, -39, 55, 74, 123, 75, 122, 62, -106, -20, -31, 66, 24, 23, 38, 70, -118, -104, 103, 104, 80, 25, -97, 108, 91, -85, -11, 114, -127, -39, 20, 55, 55, 5, 88, -31, -81, -102};
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
    msg.setTimeStamp(0.15834167175488212);
    msg.setSource(53639U);
    msg.setSourceEntity(47U);
    msg.setDestination(13201U);
    msg.setDestinationEntity(123U);
    msg.uid = 187U;
    msg.frag_number = 97U;
    msg.num_frags = 252U;
    const signed char tmp_msg_0[] = {-13, 42, -123, 63, -75, 114, -128, -121, -61, -7, 58, -96, -112, -55, -9, 45, 47, 55, 29, -108, -55, 98, 25, 84, 100, -84, 79, 99};
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
    msg.setTimeStamp(0.6479888513742161);
    msg.setSource(44890U);
    msg.setSourceEntity(8U);
    msg.setDestination(43126U);
    msg.setDestinationEntity(87U);
    msg.uid = 251U;
    msg.frag_number = 14U;
    msg.num_frags = 103U;
    const signed char tmp_msg_0[] = {66, 3, 48, 73, -125, -126, -17, -39, -16, 111, 33, -107, 98, -79, -124, -38, 19, 97, -15, -61, -125, 4, 3, -44, -87, 92, 84, 64, -48, -51, 121, -121, 11, -80, 60, -1, 98, 54, 23, 92, 15, 2, 1, 123, -126, -90, 19, -9, 66, -79, 6, 24, -78, -50, 19, 7, 64, -127, -123, -43, -44, 76, -53, 87, -2, -44};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7012733907126135);
    msg.setSource(1497U);
    msg.setSourceEntity(150U);
    msg.setDestination(50524U);
    msg.setDestinationEntity(209U);
    msg.uid = 250U;
    msg.op = 66U;
    msg.frag_ids.assign("ITGOZPKVJGVXXVQDUZHZFKHLVETGRBVKFSYTAZWASBPMIOAFPNSOBIJYMLIYVDPLSYHBXKIEYOYDQWARVTETZMDXOPZLIJEQOEUOFMCWWRFHNUNEAKBMNXUNPLGTTUNIFHDCSBHUJDUMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.21460141174519265);
    msg.setSource(14371U);
    msg.setSourceEntity(82U);
    msg.setDestination(4297U);
    msg.setDestinationEntity(42U);
    msg.uid = 46U;
    msg.op = 28U;
    msg.frag_ids.assign("IDJMNPTXGYROPKHWBIIRFQGHTLFOCWWBDCHSCPKIQANPJUGAYOZMMLSDKQACLEQUOANEWMFJSSDDPBEASSTJJUMSNLVGJOYQLEFPARBSKOVMGBVXGFODCXYEZRMTMWZCDCTSJOZICEYXLBBXIHRGYRTHAUNXHTNQZXKFEAAKVLKYINPNDQGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.504979985067672);
    msg.setSource(43985U);
    msg.setSourceEntity(20U);
    msg.setDestination(17139U);
    msg.setDestinationEntity(241U);
    msg.uid = 242U;
    msg.op = 81U;
    msg.frag_ids.assign("CCLVYULESLEUOFOGTUBCGRBOXKWBWSJXQEZHTFAZTBQVDVBQDTQRGFYXDFGNCLIWNWGFJAZYPVRTHJRKOIXBEGHCLZPIIZPBSXMMLIDMGVLIIKAKMDRXHRNHZTSLCHBZDETFPPXGPKNNKPZOSHTMPDJBVIREHAUPQQFSDMFEUESTYWIUAHVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.03499496821363135);
    msg.setSource(26962U);
    msg.setSourceEntity(126U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(221U);
    msg.content_type.assign("DQOJUHXRTSMCKGQTLDJLNDXWMPOAAHBEPLTCBQLYIQGVPRJWWYNZKKTSEYQUXYJVBJYURSFWWTRTWLAF");
    const signed char tmp_msg_0[] = {-28, 66, -45, 88, 74, -49, 32, 52, 9, 116, 66, -113, -61, -74, -59, -46, 7, 57, 50, 43, 9, -106, 79, -69, 87, 15, -8, 116, -118, -116, 59, 73, 112, 88, 19, -98, -29, 30, 102, -120, -124, 36, 28, 89, 36, 92, -9, 0, -11, -29, 121, -79, 105, 1, 51, 72, -84, -106, 116, -41, 122, -89, 57, -4, -30, -48, -111, -69, 78, 69, 65, 79, -25, 30, 39, 92, -80, -85, 88, -31, 105, -24, -99, -39, -106, 86, -21, 109, 103, 54, -23};
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
    msg.setTimeStamp(0.7802723682641154);
    msg.setSource(51716U);
    msg.setSourceEntity(201U);
    msg.setDestination(43772U);
    msg.setDestinationEntity(14U);
    msg.content_type.assign("ZFARPFCETVHZMXLXSQTTCZUDGHPAJZFSWVYLBXNFYPRSBDDUDHXNFIPGBEKSCVHIZMSTGIWPJZNKHVKNSJXETODWAVRDLWQJCMGQQYZ");
    const signed char tmp_msg_0[] = {-21, -58, 93, -52, 32, 118, 21, -59, 117, -127, -96, 62, -59, 36, 21, -95, -37, -66, 13, -103, -68, 78, 10, -76, 54, 90, -124, 74, -14, -8, -24, 81, 59, 21, 70, -93, 12, 5, -70, -21, 96, 4, 103, -21, 92, -46, 44, -123, 4, 74, -45, -15, 17, 62, -60, -108, 125, 58, 7, 96, -88, -9, 31, -87, 107, -103, -66, 34, 68, 25, 70, 91, -72, -61, -68, -69, 113, 106, -84, 65, -101, 33, 6, 19, 46, -7, 78, 85, -8, 43, -85, 83, -28, 2, -56, 115, -15, -15, 25, 13, -2, 73, 32, 126, -79, -76, -84, 24, -61, -109, -118, -61, 99, -4, 25, -107, 117, -27, -61, 19, -23, 120, -128, -46, 35, 16, -57, -20, 28, 60, 78, -22, -59, -84, -28, -21, -126, 25, 63, 100, -41, 83, -68, 125, -51, -93, -30, 114, 112, -28, -59, -118, -75, 38, 112, 15, -11, 122, -76, 64, -31, -12, 80, -18, -124, -76, -86, -104, -60, 77, 49, 111, 75, -46, 106, 67, -118, 35, 111, -107, -111, -15, -7, -54, 92, -115, 113, -93, 109, -118, -13, -104, -28, 58, -123, 95, 117, -85, -48, -37, -13, 45, 23, -57, 54, 53, 126, -54, -106, 109, 28};
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
    msg.setTimeStamp(0.23872252156868679);
    msg.setSource(64257U);
    msg.setSourceEntity(54U);
    msg.setDestination(53078U);
    msg.setDestinationEntity(99U);
    msg.content_type.assign("BOJOUQVYAASCBCALWCOJBVFQPSKEOXZNBPVHMXUNPEURNLTGCFMNTRQMIRJKPBSMHGRYKEAPMVWWNRPBUPJHGCUHSRWRIPXMQJILWMHKVUIJXXCQHSDIZWLNLELYXTDIVGOZFFTVEDUHYADUFBUCMKSDXWZDQHCJZQFSGTVYLJDNGWQTVTSREIKXZJBOXRYCEDNEDRZITGHDOBVATOTYFOYBFAHWQJUNMSWNOCSAKZAIEZGFPMKK");
    const signed char tmp_msg_0[] = {95, -17, 44, 121, 100, -26, 22, 79, 46, 35, -56, 115, -49, 17, 45, -83, 4, 66, 114, 89, 89, 97, 10, 99, -27, -25, -48, 25, -118, -55, 94, -55, 114, -32, 126, -23, -39, 5, 46, -114, -46, -94, -11, 49, 73, -76, -70, 10, 93, 41, -24, 107, 92, 20, -59, -103, 125, -90, -112, 49, -104, 92, 75, -104, 69, -3, -20, 91, 99, 120, 75, 31, -3, -101, 23, 96, -81, 95, 51, 27, -111, -1, -24, -52, 122, 80, 7, -3, -123, 34, -2, 77, 79, 116, 30, 45, 83, -85, -100, -36, 119, 108, 125, -116, 44, 61, 120, 41, -101, 46, 51, 61, -18, -53, 26, 14, 62, 56, 66, 71, 102, 72, -1, -11, -5, -103, -104, 113, 76, 107, -71, -25, -81, -28, 104, -65, 50, 63, 123, 3, -92, 124, -73, -19, 54, 73, 43, -103, 82, -83, 32, -47, 21, -42, -126, -71, 100, 0, -57, 102, 14, 91, 42, -73, 12, -103, -57};
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
    msg.setTimeStamp(0.9722603745081835);
    msg.setSource(61692U);
    msg.setSourceEntity(114U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.39570765228519134);
    msg.setSource(8210U);
    msg.setSourceEntity(191U);
    msg.setDestination(6441U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.927589876672235);
    msg.setSource(36345U);
    msg.setSourceEntity(11U);
    msg.setDestination(43573U);
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
    msg.setTimeStamp(0.10579606898501337);
    msg.setSource(48308U);
    msg.setSourceEntity(49U);
    msg.setDestination(38967U);
    msg.setDestinationEntity(249U);
    msg.target = 37631U;
    msg.bearing = 0.40826477012396645;
    msg.elevation = 0.6036227874096249;

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
    msg.setTimeStamp(0.04726767533466558);
    msg.setSource(49067U);
    msg.setSourceEntity(139U);
    msg.setDestination(36789U);
    msg.setDestinationEntity(102U);
    msg.target = 63857U;
    msg.bearing = 0.7916712906359648;
    msg.elevation = 0.9507264727867359;

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
    msg.setTimeStamp(0.9207397025482549);
    msg.setSource(36074U);
    msg.setSourceEntity(180U);
    msg.setDestination(32684U);
    msg.setDestinationEntity(134U);
    msg.target = 64481U;
    msg.bearing = 0.5574565320376736;
    msg.elevation = 0.19842734512115423;

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
    msg.setTimeStamp(0.8551082582772176);
    msg.setSource(14788U);
    msg.setSourceEntity(93U);
    msg.setDestination(744U);
    msg.setDestinationEntity(238U);
    msg.target = 59525U;
    msg.x = 0.7620671489700811;
    msg.y = 0.4497210117248359;
    msg.z = 0.19694009723300088;

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
    msg.setTimeStamp(0.7006404667325058);
    msg.setSource(35800U);
    msg.setSourceEntity(18U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(180U);
    msg.target = 2666U;
    msg.x = 0.13456275276437812;
    msg.y = 0.831705639208446;
    msg.z = 0.3711771888664622;

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
    msg.setTimeStamp(0.293870100431058);
    msg.setSource(1923U);
    msg.setSourceEntity(29U);
    msg.setDestination(58655U);
    msg.setDestinationEntity(219U);
    msg.target = 43120U;
    msg.x = 0.004600682703723824;
    msg.y = 0.43392026435638287;
    msg.z = 0.3421350604873884;

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
    msg.setTimeStamp(0.3803870711197226);
    msg.setSource(7321U);
    msg.setSourceEntity(236U);
    msg.setDestination(30694U);
    msg.setDestinationEntity(58U);
    msg.target = 31073U;
    msg.lat = 0.17346706825736657;
    msg.lon = 0.8758742266578894;
    msg.z_units = 17U;
    msg.z = 0.8373435872876065;

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
    msg.setTimeStamp(0.7597887732923333);
    msg.setSource(23105U);
    msg.setSourceEntity(249U);
    msg.setDestination(24329U);
    msg.setDestinationEntity(69U);
    msg.target = 42092U;
    msg.lat = 0.7017927276776419;
    msg.lon = 0.6297117413634404;
    msg.z_units = 110U;
    msg.z = 0.09491146664852423;

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
    msg.setTimeStamp(0.3753618252953883);
    msg.setSource(14649U);
    msg.setSourceEntity(225U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(248U);
    msg.target = 34834U;
    msg.lat = 0.5666653878835518;
    msg.lon = 0.1599269487712578;
    msg.z_units = 134U;
    msg.z = 0.5707444908836494;

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
    msg.setTimeStamp(0.8415290501537631);
    msg.setSource(17248U);
    msg.setSourceEntity(129U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(213U);
    msg.locale.assign("GCJRSKEJIVDMSXOTTUOZVJOPQVPLKAQPJKJGNQXYHVFBTNQPXFUCFXCIORVCMIELSFZLHOVSNBFZWICHZNGNNWMABMKRWPZEHQSCJXDBTLDJFXMGRBLGMEJHRMLRNGJICVLZRVKIUWZAVIQOPNWUNCKWJLDIHGMRLFFXGSKEANBPGPIUEPDYTBYQGADRAAQWEXKOMQIHYLDHYQKTAEVAWBRODUUKEXWCPYYTEYSTBSHCYZHUFUODYM");
    const signed char tmp_msg_0[] = {71, -73, -10, -33, -88, -24, -4, 5, 115, 13, -85, -52, -101, 24, 125, -41, -16, 13, -74, 104, 35, 33, -57, 107, -8, -74, -22, -61, 31, -4, 28, 30, -87, 110, 22, -113, 82, -8, 119, -67, -108, 31, 6, -82, -89, 36, -20, -6, -105, 30, 11, -23, -103, -94, 83, 122, 46, -38, -108, 4, 57, 66, -83, -82, 106, -46, 61, 34, -104, 8, 6, -77, 122, 45, -112, 73, -52, 99, -98, 90, 25, 70, -43, 40, 111, -6, 110, -42, -23, -100, 121, -93, 6, 54, -4, -96, 47};
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
    msg.setTimeStamp(0.11878705699434189);
    msg.setSource(51244U);
    msg.setSourceEntity(193U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(183U);
    msg.locale.assign("YEAVNDFMREIYNFFEDDJSZUFKKGWMZAZTXSDYJOTMYMMJDLTNPJVZIBIITIHJUPWAYQKHUBUJCNXSTTPQKQIOLMOZHAKTRCQXDRWAOBQYOSBPXUGJGDOGWRREOCQZJNGNAXQRMQINHSSFULRRAVPKHCKMLZKLUMVHWFYKICLELYVQHPBTPMEFX");
    const signed char tmp_msg_0[] = {-43, -72, 114, 60, 27, -1, 85, -23, -77, -49, -38, 65, 114, -7, -117, -78, 121, -56, 122, 22};
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
    msg.setTimeStamp(0.0053455378594050584);
    msg.setSource(51701U);
    msg.setSourceEntity(122U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(19U);
    msg.locale.assign("TIYAOWOHNYFLWSBNDMJMPKNOEJAWOZVFRMHIAYXQSLHJLFCTJURKUQRXUMJBVXGMCMZTBSXLSNKFSPLPZDKNHTCBTBGDCXUTORQEQOESDNDRKPCQEEZUHKPDTYLIJRVYZOOFIWENGKUWPXBEMXCLBTQWDJWVUAHIPXGCSGIQYJFCHHYRREYISUIILS");
    const signed char tmp_msg_0[] = {-59, 103, -5, 12, 31, 1, 108, 46, 51, -77, -51, -110, 63, 126, -6, 84, 47, -64, 74, -48, -107, -123, -8, 1, -88, 29, 83, -29, -63, 120, -111, -8, -116, 27, -24, -19, 38, 119, 107, 91, 106, 92, 124, 0, -98, -41, 94, -116, -81, 98, -119, 44, -3, 120, 13, 41, 22, -100, -46, 61, -96, 90, -75, 95, 107, 72, -3, 32, -32, 25, 113, 0, -3, -33, -95, -59, 73, 87, -62, -96, 59, 94, 113, 1, -115, -49, -121, 5, 110, -83, 31, 46, 50, 73, -75, -11, 23, -3, -56, 100, 95, 76, 126, -12, -7, -27, 4, -51};
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
    msg.setTimeStamp(0.9735119096233028);
    msg.setSource(32035U);
    msg.setSourceEntity(100U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.06574577578043961);
    msg.setSource(50699U);
    msg.setSourceEntity(189U);
    msg.setDestination(51454U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.5094020451699123);
    msg.setSource(41670U);
    msg.setSourceEntity(31U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.43729200112860855);
    msg.setSource(4799U);
    msg.setSourceEntity(222U);
    msg.setDestination(41349U);
    msg.setDestinationEntity(43U);
    msg.camid = 103U;
    msg.x = 49142U;
    msg.y = 37750U;

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
    msg.setTimeStamp(0.8812954093873986);
    msg.setSource(53267U);
    msg.setSourceEntity(247U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(63U);
    msg.camid = 34U;
    msg.x = 29517U;
    msg.y = 6954U;

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
    msg.setTimeStamp(0.8805635548351017);
    msg.setSource(63100U);
    msg.setSourceEntity(28U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(116U);
    msg.camid = 248U;
    msg.x = 29486U;
    msg.y = 51450U;

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
    msg.setTimeStamp(0.9144942047879792);
    msg.setSource(41138U);
    msg.setSourceEntity(3U);
    msg.setDestination(8668U);
    msg.setDestinationEntity(137U);
    msg.camid = 211U;
    msg.x = 35546U;
    msg.y = 38122U;

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
    msg.setTimeStamp(0.5975477021863609);
    msg.setSource(18049U);
    msg.setSourceEntity(215U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(224U);
    msg.camid = 74U;
    msg.x = 28623U;
    msg.y = 22378U;

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
    msg.setTimeStamp(0.5407882754147509);
    msg.setSource(56718U);
    msg.setSourceEntity(108U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(189U);
    msg.camid = 234U;
    msg.x = 944U;
    msg.y = 65509U;

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
    msg.setTimeStamp(0.3254887954393878);
    msg.setSource(1763U);
    msg.setSourceEntity(42U);
    msg.setDestination(44670U);
    msg.setDestinationEntity(247U);
    msg.tracking = 5U;
    msg.lat = 0.5863578709109005;
    msg.lon = 0.322432380764868;
    msg.x = 0.9574912563588825;
    msg.y = 0.20928959652108703;
    msg.z = 0.20149771538891037;

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
    msg.setTimeStamp(0.15532475529658618);
    msg.setSource(15066U);
    msg.setSourceEntity(78U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(208U);
    msg.tracking = 251U;
    msg.lat = 0.8853566703795537;
    msg.lon = 0.2535026298936738;
    msg.x = 0.45004730880222177;
    msg.y = 0.27325139403779186;
    msg.z = 0.24017491874398156;

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
    msg.setTimeStamp(0.9199910044238163);
    msg.setSource(53389U);
    msg.setSourceEntity(18U);
    msg.setDestination(33595U);
    msg.setDestinationEntity(191U);
    msg.tracking = 254U;
    msg.lat = 0.21513810740231265;
    msg.lon = 0.007622629845986606;
    msg.x = 0.21084101057697513;
    msg.y = 0.9582222190351086;
    msg.z = 0.6383021079827722;

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
    msg.setTimeStamp(0.17829968385035277);
    msg.setSource(30678U);
    msg.setSourceEntity(83U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(195U);
    msg.target.assign("CZWOZXWOTICEZPXYJLHVMHSHXYTFSVQZHLANCUGAMGKLGDQMLKXOUEIYYKFKVBVCBQUAVDMWNDLVCEOUMUHHFLNVQSQYNKVJOSDGILCASQPYJGIGQLANIERRAZ");
    msg.lbearing = 0.30061002590989017;
    msg.lelevation = 0.8083518188062089;
    msg.bearing = 0.9990976012820333;
    msg.elevation = 0.7331828918057633;
    msg.phi = 0.822959291158611;
    msg.theta = 0.0500873099562229;
    msg.psi = 0.7233038570715029;
    msg.accuracy = 0.25215790883803535;

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
    msg.setTimeStamp(0.5427342841227903);
    msg.setSource(19158U);
    msg.setSourceEntity(50U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(253U);
    msg.target.assign("KSDAYWMIJOVAPUKUZZYVGECDQFODXQNXTKWO");
    msg.lbearing = 0.6066366629732542;
    msg.lelevation = 0.8456177783515503;
    msg.bearing = 0.9366337882941975;
    msg.elevation = 0.44699480403056135;
    msg.phi = 0.7796264293434647;
    msg.theta = 0.5847020721353497;
    msg.psi = 0.1896133505657751;
    msg.accuracy = 0.41261345217048817;

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
    msg.setTimeStamp(0.9739580225405543);
    msg.setSource(35209U);
    msg.setSourceEntity(5U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(244U);
    msg.target.assign("DNGCHBKLWAKUQVJDSSTMEEZNXVDSYVIATGAEDMBZEJJKWCNCZIUU");
    msg.lbearing = 0.8990857493140173;
    msg.lelevation = 0.10509709399676115;
    msg.bearing = 0.38436007430581587;
    msg.elevation = 0.7142686931734598;
    msg.phi = 0.2742357493573505;
    msg.theta = 0.569096965508732;
    msg.psi = 0.26677389066590096;
    msg.accuracy = 0.9654589003745498;

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
    msg.setTimeStamp(0.8679873698793983);
    msg.setSource(21329U);
    msg.setSourceEntity(177U);
    msg.setDestination(64361U);
    msg.setDestinationEntity(155U);
    msg.target.assign("SQUKAWLJNYSHPQNLMKONJOOFVTETOTMRYXYRUGFVQCYVKXDAGRLNUUVTFDATYMKLDVBFIAVJXFDNPXTSYEZSDRWONFQZIAXQMYVJSWBJKGNSAJKZAIUDYXPMMWCBKGZNWHTKFIUWOKDQOCCZMAEJGOIIXBMUWCHHZFG");
    msg.x = 0.06936420052082048;
    msg.y = 0.028620031890009945;
    msg.z = 0.2473601288870041;
    msg.n = 0.91068948865361;
    msg.e = 0.9212637633716956;
    msg.d = 0.8018005684501187;
    msg.phi = 0.7581423452834436;
    msg.theta = 0.3748072261317108;
    msg.psi = 0.6491659052480625;
    msg.accuracy = 0.4796260657329735;

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
    msg.setTimeStamp(0.15333708687384273);
    msg.setSource(16647U);
    msg.setSourceEntity(57U);
    msg.setDestination(7178U);
    msg.setDestinationEntity(227U);
    msg.target.assign("IZWRINTTPIMPILGWSKSXDIEFLPEQSPRSPYMEFBWAJHKQWFEQUVUROXJTAYNBXFLUBRCQVXDKGYEZKBRAEMANFNJLGFNVSJPWPZYADKZPOSLYNBHQOSRHBBYCCGGDODQFLEHDPNDOQGDSCMHFBRCKUWKJOTBYRGWYLQNWNTCXYAADZRJYHAGTWTXOZLEIZAJMBJCKVLFIXHHIOUL");
    msg.x = 0.9445566850175964;
    msg.y = 0.9857811010680926;
    msg.z = 0.31660314666489164;
    msg.n = 0.9043176479318837;
    msg.e = 0.7906512961775728;
    msg.d = 0.20858557687471901;
    msg.phi = 0.8800248842972258;
    msg.theta = 0.5272060017348897;
    msg.psi = 0.16086990752411034;
    msg.accuracy = 0.9748992289805744;

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
    msg.setTimeStamp(0.011595150086057826);
    msg.setSource(41684U);
    msg.setSourceEntity(92U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(186U);
    msg.target.assign("OQEZGACMRFUIHEQNDWKMDBHWZQKEYONTUZJOEKPBZFUZFWPBLYEJMCLUWVJQVYXVTSLJXQFYOIEMPCIGYCUXZXCGLKJLVOTHSDHAW");
    msg.x = 0.730352708016001;
    msg.y = 0.9209197127118687;
    msg.z = 0.9741330419574834;
    msg.n = 0.32058669327248235;
    msg.e = 0.43191863798767205;
    msg.d = 0.5567752652056991;
    msg.phi = 0.39571833710962423;
    msg.theta = 0.4766297008957767;
    msg.psi = 0.5242502110956606;
    msg.accuracy = 0.6825722543090615;

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
    msg.setTimeStamp(0.39148931018564126);
    msg.setSource(46704U);
    msg.setSourceEntity(26U);
    msg.setDestination(36057U);
    msg.setDestinationEntity(100U);
    msg.target.assign("WQJMLONRFBJEDEBTKJJWWIQFIYUFPCOPMIALVPGUVEOBYXWCDSSXCSTLHGHMORVXAGCFQFVEVWVQNUFYBFIXZJMZQGDQ");
    msg.lat = 0.5251152397032472;
    msg.lon = 0.08158138241482682;
    msg.z_units = 78U;
    msg.z = 0.13912826414925505;
    msg.accuracy = 0.6572079347125314;

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
    msg.setTimeStamp(0.12311645383472114);
    msg.setSource(14600U);
    msg.setSourceEntity(137U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(5U);
    msg.target.assign("WRXZTZTCKSKLZILTJCQFSJWXXSFAMGSWLIKMENLDYEJZWDCKOBNNMIJVYFIUHLSSNYVPXFUPSNPKPEDWTHRACQILZMHIUJOPUWITCKGQWNLXIVTGHAABAMEGYVCICCQGFESKFOXJZKYVORBULVNRMBRUHQFDWZSYBHWHDRAUBNNJTQQMPAEYQPHDOXJXZPMCBVVLCDGPTRXGQODUKYVKNEFYFATDAVFBOGXRQTRBEHZOPIYBGWLJU");
    msg.lat = 0.8348743074101771;
    msg.lon = 0.8319401675181841;
    msg.z_units = 138U;
    msg.z = 0.6603554871370587;
    msg.accuracy = 0.41525431738390717;

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
    msg.setTimeStamp(0.9375613581434574);
    msg.setSource(21080U);
    msg.setSourceEntity(242U);
    msg.setDestination(48680U);
    msg.setDestinationEntity(91U);
    msg.target.assign("YQYGQGVORLWJRMIJIGAENKBYOGHJTC");
    msg.lat = 0.4626190660367956;
    msg.lon = 0.4831442570722222;
    msg.z_units = 159U;
    msg.z = 0.33871381712377424;
    msg.accuracy = 0.8162693441318193;

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
    msg.setTimeStamp(0.08431056755453481);
    msg.setSource(35682U);
    msg.setSourceEntity(135U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(156U);
    msg.name.assign("LITYPLWVUFLACIXCKHGJYVYKQVGXFXPUMMFEOJFLGYLLFZTNQNDERXCSHBUBSPZSWIQXGDYRTJRBBQWDBNCPRXPXXHAYLKSNLMIAVGXDFTVAHTUKHVOOYFCIFRPPWQGHRWHAYTDIAZJDNTCBIHUZQVEMTEJDTZOSNERSGIGUSXBJCZYNOVAWUSLQOPZWMPBV");
    msg.lat = 0.23520910775187698;
    msg.lon = 0.3242664909060917;
    msg.z = 0.06551041567935711;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.8131991392487049);
    msg.setSource(45416U);
    msg.setSourceEntity(245U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(248U);
    msg.name.assign("BSVDVRMFQCBQQRJQVDFUJUGWTDMLVJWUDHOEBKCAEIJCQGARIYFQVXDCANTSWYFZSUAXFPKVCHJVVKBZKOZMWQIAPM");
    msg.lat = 0.04663704519073286;
    msg.lon = 0.6816895168514704;
    msg.z = 0.9433570621334644;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.07949847166244273);
    msg.setSource(60172U);
    msg.setSourceEntity(241U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(197U);
    msg.name.assign("BWBKPUZVMXRISKDIVRRVCMQRWNMGTHWUBTUUIZAGCDZCSBGQRZTJDYQQTHFZDHNAFSVVKFMIXWSCEFUYMONDBJHDRHBALWTOAIJKEVNPLAHMRQNTPSXJPNTOSKL");
    msg.lat = 0.3456441370661385;
    msg.lon = 0.24800087039427476;
    msg.z = 0.7456626067351153;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.5185622740290383);
    msg.setSource(20469U);
    msg.setSourceEntity(204U);
    msg.setDestination(27586U);
    msg.setDestinationEntity(186U);
    msg.op = 61U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QJNXNNMISOYVSVRHUTFFZUJFCBZCSOSBILTOCKYOGKEMDAWNZSMFVMJWIXLUUNFNTKLXMWLAUZFMEEQAGTKQOJHQEDHKCCFLNQVSAJNIXCPGKBKWHXADDKYRRWGRJYXUMBVZYNRAGULODUPCRIZIHQSEXQPWSVAECGDPFOUJOPCIVRXAQSAZETTOMHEWFHDDSLBLQTGHJGMBYMTJPBWIUYYPPDWCREEGOVKQZKPBZBRHPAXGRHTVX");
    tmp_msg_0.lat = 0.3211764297981824;
    tmp_msg_0.lon = 0.9241569691804177;
    tmp_msg_0.z = 0.680089834117932;
    tmp_msg_0.z_units = 4U;
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
    msg.setTimeStamp(0.8366117498173804);
    msg.setSource(31108U);
    msg.setSourceEntity(171U);
    msg.setDestination(34323U);
    msg.setDestinationEntity(237U);
    msg.op = 177U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UHMLGJXNVFEZOHRFEYTPTFP");
    tmp_msg_0.lat = 0.8583050930147306;
    tmp_msg_0.lon = 0.772954269283505;
    tmp_msg_0.z = 0.7314655816139137;
    tmp_msg_0.z_units = 36U;
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
    msg.setTimeStamp(0.24671896355184886);
    msg.setSource(49431U);
    msg.setSourceEntity(174U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(237U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.914031690289524);
    msg.setSource(15559U);
    msg.setSourceEntity(27U);
    msg.setDestination(40870U);
    msg.setDestinationEntity(195U);
    msg.value = 0.5339180246341914;
    msg.type = 113U;

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
    msg.setTimeStamp(0.5994491973481496);
    msg.setSource(10271U);
    msg.setSourceEntity(102U);
    msg.setDestination(39396U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5490447482187037;
    msg.type = 50U;

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
    msg.setTimeStamp(0.44968592969136434);
    msg.setSource(49843U);
    msg.setSourceEntity(166U);
    msg.setDestination(16327U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8849392444620796;
    msg.type = 1U;

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
    msg.setTimeStamp(0.7932803096243655);
    msg.setSource(1741U);
    msg.setSourceEntity(169U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7927766192509352;

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
    msg.setTimeStamp(0.8689363549242836);
    msg.setSource(45553U);
    msg.setSourceEntity(226U);
    msg.setDestination(52308U);
    msg.setDestinationEntity(101U);
    msg.value = 0.3298444905053741;

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
    msg.setTimeStamp(0.37368720900270447);
    msg.setSource(33788U);
    msg.setSourceEntity(206U);
    msg.setDestination(9732U);
    msg.setDestinationEntity(121U);
    msg.value = 0.673738875097347;

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
    msg.setTimeStamp(0.9606122161562792);
    msg.setSource(13736U);
    msg.setSourceEntity(102U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(159U);
    msg.timestamp_last_service = 0.09600048738117817;
    msg.time_next_service = 0.7077611462616233;
    msg.time_motor_next_service = 0.7291753450233797;
    msg.time_idle_ground = 0.5196047605765372;
    msg.time_idle_air = 0.22243977264758474;
    msg.time_idle_water = 0.3197391042339016;
    msg.time_idle_underwater = 0.5043153779296571;
    msg.time_idle_unknown = 0.34429978018552365;
    msg.time_motor_ground = 0.0786224530688523;
    msg.time_motor_air = 0.22422472575802077;
    msg.time_motor_water = 0.6346198280964942;
    msg.time_motor_underwater = 0.3778238571670677;
    msg.time_motor_unknown = 0.6757215966252046;
    msg.rpm_min = 9231;
    msg.rpm_max = 14430;
    msg.depth_max = 0.5585897668653605;

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
    msg.setTimeStamp(0.029892103198684405);
    msg.setSource(58997U);
    msg.setSourceEntity(20U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(87U);
    msg.timestamp_last_service = 0.4050675623504534;
    msg.time_next_service = 0.8123521854764489;
    msg.time_motor_next_service = 0.4985903318110799;
    msg.time_idle_ground = 0.911215561627469;
    msg.time_idle_air = 0.09590373883842773;
    msg.time_idle_water = 0.9347721763682154;
    msg.time_idle_underwater = 0.1296967589792828;
    msg.time_idle_unknown = 0.346365976765304;
    msg.time_motor_ground = 0.06931253014378369;
    msg.time_motor_air = 0.2824732303466755;
    msg.time_motor_water = 0.41137305360643306;
    msg.time_motor_underwater = 0.17177748625185707;
    msg.time_motor_unknown = 0.27289638879575795;
    msg.rpm_min = 31665;
    msg.rpm_max = -16103;
    msg.depth_max = 0.6664387961339053;

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
    msg.setTimeStamp(0.6721957336960942);
    msg.setSource(4502U);
    msg.setSourceEntity(17U);
    msg.setDestination(12077U);
    msg.setDestinationEntity(80U);
    msg.timestamp_last_service = 0.9979533496154449;
    msg.time_next_service = 0.033821667511757636;
    msg.time_motor_next_service = 0.8965337229818973;
    msg.time_idle_ground = 0.2165328851196192;
    msg.time_idle_air = 0.9267275472244457;
    msg.time_idle_water = 0.27616246698050406;
    msg.time_idle_underwater = 0.7395262804748248;
    msg.time_idle_unknown = 0.801153697674691;
    msg.time_motor_ground = 0.9120531682235333;
    msg.time_motor_air = 0.9464620008759344;
    msg.time_motor_water = 0.057038691793382834;
    msg.time_motor_underwater = 0.6934861991184849;
    msg.time_motor_unknown = 0.4476347742317527;
    msg.rpm_min = 3543;
    msg.rpm_max = 18229;
    msg.depth_max = 0.7492571546877165;

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
    msg.setTimeStamp(0.7363588002781597);
    msg.setSource(31424U);
    msg.setSourceEntity(206U);
    msg.setDestination(40807U);
    msg.setDestinationEntity(14U);
    msg.severity = 28U;
    msg.text.assign("ZITBRBNDUUGLACQUXHRCUXROVELKDHINVHEEXKAXJWAOIUFALSFSDYUWBQQRJVMBSZFETQAXWCINPHBMTPZPIOWBTOSZTVYPMOKKYDYVDAL");

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
    msg.setTimeStamp(0.3851961728386588);
    msg.setSource(50246U);
    msg.setSourceEntity(237U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(67U);
    msg.severity = 176U;
    msg.text.assign("KQBGOUNJKPMOTWSSGPAUZXBGXMNMHJKMQRYORNQEYWSTTGAQCGYTWKSLBHPIXRPWQBJEEFXOECRYEGLTCBCUINZUBVFBHWSRHEJDPQKLACHQTQDWLRECIOJVHRLHCLXTLWKREDHFLNNPENWTKSMIJJLCXUZHVDDRVPVDAGZJIQICSVKXIFPQNLUUXKZMUF");

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
    msg.setTimeStamp(0.6547217646540795);
    msg.setSource(34536U);
    msg.setSourceEntity(235U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(249U);
    msg.severity = 21U;
    msg.text.assign("RJCIJWFFBNBEPXVUEBDAMEIMDGENANNOTOLQEDSRZZHBCWRTBPMQKKBACRIGADBQVZBHEIIJXWAKHYWYAUKWFQEFXCCKVSZFJCXEZDCPDBLDQSBYZGDPLFFSQRWVVO");

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
    msg.setTimeStamp(0.5430902881044299);
    msg.setSource(14542U);
    msg.setSourceEntity(176U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(24U);
    msg.channel = 91;
    msg.value = -482365552;
    msg.gain = 58U;

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
    msg.setTimeStamp(0.9100748125333669);
    msg.setSource(30958U);
    msg.setSourceEntity(26U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(206U);
    msg.channel = 30;
    msg.value = -385659119;
    msg.gain = 31U;

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
    msg.setTimeStamp(0.03939871411846341);
    msg.setSource(14633U);
    msg.setSourceEntity(72U);
    msg.setDestination(61742U);
    msg.setDestinationEntity(1U);
    msg.channel = -37;
    msg.value = 2033333653;
    msg.gain = 94U;

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
    msg.setTimeStamp(0.6821541746763434);
    msg.setSource(12697U);
    msg.setSourceEntity(137U);
    msg.setDestination(51123U);
    msg.setDestinationEntity(0U);
    msg.ch01 = 0.3300732249372401;
    msg.ch02 = 0.16068272726836175;
    msg.ch03 = 0.3469082493386857;
    msg.ch04 = 0.6153574265848426;
    msg.ch05 = 0.9542280481141204;
    msg.ch06 = 0.9146303243095801;
    msg.ch07 = 0.5866216514857803;
    msg.ch08 = 0.7077945879684006;
    msg.ch09 = 0.12203063808060333;
    msg.ch10 = 0.012943568472573719;
    msg.ch11 = 0.29130860088954835;
    msg.ch12 = 0.3867953896042161;
    msg.ch13 = 0.2586861468612359;
    msg.ch14 = 0.8215864019441942;
    msg.ch15 = 0.04829510404300685;
    msg.ch16 = 0.5454092577804331;

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
    msg.setTimeStamp(0.2619071317899272);
    msg.setSource(21109U);
    msg.setSourceEntity(237U);
    msg.setDestination(9807U);
    msg.setDestinationEntity(140U);
    msg.ch01 = 0.5178322865372732;
    msg.ch02 = 0.8818665474263446;
    msg.ch03 = 0.6597742965027307;
    msg.ch04 = 0.5484884284932436;
    msg.ch05 = 0.7726182153684505;
    msg.ch06 = 0.9983756676276949;
    msg.ch07 = 0.9545100878114136;
    msg.ch08 = 0.8330804750970966;
    msg.ch09 = 0.5656623218404874;
    msg.ch10 = 0.0021664222128255917;
    msg.ch11 = 0.970695299502639;
    msg.ch12 = 0.6182271229812146;
    msg.ch13 = 0.2186107492951863;
    msg.ch14 = 0.49898379750542776;
    msg.ch15 = 0.29372805427573034;
    msg.ch16 = 0.16474654003016487;

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
    msg.setTimeStamp(0.20234253084587117);
    msg.setSource(2543U);
    msg.setSourceEntity(153U);
    msg.setDestination(16731U);
    msg.setDestinationEntity(18U);
    msg.ch01 = 0.8298770784554319;
    msg.ch02 = 0.22540443063660232;
    msg.ch03 = 0.2895565309704703;
    msg.ch04 = 0.229620623839337;
    msg.ch05 = 0.905630569283185;
    msg.ch06 = 0.1942049509395798;
    msg.ch07 = 0.3726740889520712;
    msg.ch08 = 0.005098932104958154;
    msg.ch09 = 0.13330779758776867;
    msg.ch10 = 0.2615010509294493;
    msg.ch11 = 0.03406018644768849;
    msg.ch12 = 0.5478305207075597;
    msg.ch13 = 0.6948596585457115;
    msg.ch14 = 0.3254348578589866;
    msg.ch15 = 0.30058594407485817;
    msg.ch16 = 0.11593416796005385;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.5054735140742286);
    msg.setSource(28195U);
    msg.setSourceEntity(38U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(136U);
    msg.op = 207U;
    msg.lat = 0.2381583865053779;
    msg.lon = 0.6782938453894394;
    msg.height = 0.48888158957422057;
    msg.depth = 0.16385683920131722;
    msg.alt = 0.4948785377185698;

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
    msg.setTimeStamp(0.030432806751402253);
    msg.setSource(64233U);
    msg.setSourceEntity(209U);
    msg.setDestination(59477U);
    msg.setDestinationEntity(231U);
    msg.op = 146U;
    msg.lat = 0.926913895740004;
    msg.lon = 0.429646188089262;
    msg.height = 0.4308199257482124;
    msg.depth = 0.18574588541775827;
    msg.alt = 0.9264555354541888;

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
    msg.setTimeStamp(0.8470990211692053);
    msg.setSource(44383U);
    msg.setSourceEntity(197U);
    msg.setDestination(54843U);
    msg.setDestinationEntity(21U);
    msg.op = 181U;
    msg.lat = 0.3553091515318687;
    msg.lon = 0.955266073144853;
    msg.height = 0.42306685930714283;
    msg.depth = 0.7321698232614761;
    msg.alt = 0.43046607599859477;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.6903841972532194);
    msg.setSource(9074U);
    msg.setSourceEntity(46U);
    msg.setDestination(49581U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.25344762621530814;
    msg.speed = 0.05434920935596588;
    msg.turbulence = 0.36882393691768944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.41128801811795035);
    msg.setSource(60253U);
    msg.setSourceEntity(139U);
    msg.setDestination(39779U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.9778550882963631;
    msg.speed = 0.8241278370054848;
    msg.turbulence = 0.15790311239547783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.6768273850896086);
    msg.setSource(43064U);
    msg.setSourceEntity(139U);
    msg.setDestination(15919U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.6569077990481198;
    msg.speed = 0.8255755230160758;
    msg.turbulence = 0.10181462166981903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.08651402022770838);
    msg.setSource(58340U);
    msg.setSourceEntity(135U);
    msg.setDestination(3874U);
    msg.setDestinationEntity(20U);
    msg.msg_type.assign("GVQQKSQWCSNDTHMCTJBUKPVBRPHEYBKGCFLVKTIRNJGDMETFCZXOYJDEHADFSAMKUPUNMWBJFMANCURPNQGZUIXPJWWVRIVOMYLTOUMUSX");
    msg.sensor_class.assign("YZNTQSRLKWOMZODADSJFAVQWGEERHNTYXAEUNKIHBDFZOQDPGJIAFFTEGGNRFOMUYRUOWCZMFDJTQUSVKMVOULAJJVTDGVGDLGYYPNXBTGSHELWPCWCBFTHOPPGRYONIAXFYSUSNAMSWCNCXUIHJYCXLOZILHSBXPIIGRCPHECZTSJQWMSIRAMMBZFBXTNHCJNVUUQOWIPBRKEDVZQLPVWVWUEMDYACMKKXQXYZKI");
    msg.mmsi.assign("QXYPBJIUCENRHUGSOGOXAXSGDIODWFFRENMVXIENNUOZXMQHDLVCYYITCWWZYHMFCPEACKHXJICYWEAHQZSKFTLBUUVQBTNDSZYPGZRFJSNKKIXMATDBMWRVGHPGKHXRSKGDIMCTQAZNMYY");
    msg.callsign.assign("NCBNDKGLIFWGQZQUSGPUMTJDVHMRHBNKOROSAHLXLEWEZXKCUQKNWSALTDVATSQZYWZJLXDVYYEOXCRRBRECKOEXVZSQPCWYQBXGWVBSPRZJTPOSRELRPNAKHFQPYTVMOZLNKFOPYH");
    msg.name.assign("CTASNQMKRUIAFXZACABKSHTYWPDYAWFVNXPKQYGHDZQMEONRNCETLFJPMEQWDWISQWSCHIUC");
    msg.nav_status = 155U;
    msg.type_and_cargo = 5U;
    msg.lat = 0.7795599477284668;
    msg.lon = 0.29775702142868;
    msg.course = 0.7099729521342654;
    msg.speed = 0.8908604945443851;
    msg.dist = 0.5209757381281552;
    msg.a = 0.6796090350026531;
    msg.b = 0.9483834163998078;
    msg.c = 0.08723784545131974;
    msg.d = 0.7880564760218921;
    msg.draught = 0.8318393867012498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.7241146989557433);
    msg.setSource(16574U);
    msg.setSourceEntity(158U);
    msg.setDestination(31411U);
    msg.setDestinationEntity(21U);
    msg.msg_type.assign("ZDUZPWMYEIUFCUGXXQWWASNIMZJTRBRLZLJOHCCPFTSEWYRROYLTDPWVDEXMILIMPSOWVUZTNFBXUGYGHBBFHSXYNFONKVBYNGGUADEFJSMESEGDBAAAKMYSGVQGLIHKJVWCYIIGOHUNKRIFQNQZYLIZEHXTVZPZJCRNWUWPBNRUMPAPTPKLBSTALLZKVEFHM");
    msg.sensor_class.assign("LMDYTVXTFIJUNTRZCQHOYCZAPSNCOXZFEGXNAKRDPVOWKKESPTMOYWSOLFMMXJS");
    msg.mmsi.assign("BYVVJVNNKLFQBYWHPSNNGIRSQNCUXLVOQKPJQUFINYJLKZXHCXGPMCDOTWSAICTKMMRJAUYBOIYCTBNEXZOSRGCUVVDUYDPOFMDLYNHWZZSDYQSVCUJWLSRJGGDBZETQFU");
    msg.callsign.assign("LGAKNNNGWTCKRAKEWALPJHUUVFDMWVBNBHOLXFORJMIGALMVSNNSLCFMKRTEGHGOIVZEVQOXIDVQORWXIZRPLYLYXBGJBXAJDJJBQQVZDWHUUKJHFDIQCDQSHGIKDXXGYZOFIRFBEKVNNTGQOUPZFPPQHLSELAWTMEKTYSELC");
    msg.name.assign("SBHOIIEJETVRVHGDLOUEUPUDXAIFRXLPNYTUENKXMMOFNPYHCZAEDNUNWYAIWXLZCLOFIJHJMQWISYZMDTZXWPBWGTLFHHXZTWCASWUGZGKHGLIQVFEVDMGVHRPBCQOXBOCCLXLWSPZQMYFZCXMVQFCPGMZAQSRQWKKIKRVJYBSNSAGVJIDPIJELBRSJCNFRJPTKQTVKCQUHKTBGOYPNRMFKLJRYSDODXSUEDRHBZKEJNBOAFWUVEGYOBAAM");
    msg.nav_status = 173U;
    msg.type_and_cargo = 235U;
    msg.lat = 0.8500367612302732;
    msg.lon = 0.5303798719893448;
    msg.course = 0.6696047750110627;
    msg.speed = 0.2808000744198158;
    msg.dist = 0.9389484243786337;
    msg.a = 0.2665488532652054;
    msg.b = 0.9162900492574377;
    msg.c = 0.5609684659533846;
    msg.d = 0.5759756878003021;
    msg.draught = 0.8594159985614668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.5874617498126382);
    msg.setSource(39455U);
    msg.setSourceEntity(199U);
    msg.setDestination(64712U);
    msg.setDestinationEntity(235U);
    msg.msg_type.assign("UNUNEAHARSKGXVADSNBKJICFGDTWFJLWNDXRLUAZOYKPRMKTUMKSSXFHUHOWTKMFKOLPQUIXIRIHQELVPTXYVYULZJCUZZNALGVQCWJLAOLBSRAIRVBFVWPYQNBNNLH");
    msg.sensor_class.assign("QNGFHHHUXFCTOYVQKVSRUFZLWMJGEMCBRRJWXAISXITFBOWBAVWWODCQFGOVNOMMSDQQJNBIRBLQYZN");
    msg.mmsi.assign("EQGDHJHQMISQECAHRJWMWXLSIGQKDPTVEOZKEIDCKXNPYHYELVRCFOOXGICELZKOYTNCB");
    msg.callsign.assign("OZGSNRUOCAEVWWYOASCRQMHQMPUPAGRWRTKIYMZUTSLXOCLUZYNGQIXTTJJIGUWVUCHIVQZMNBEHVSZWRDFELRBSABGWNXHNXXMPORFUGJJFEVLFIHEBKISJCNCMJIEAYQYBCXSUHDZNWYUGFRSZVDDWRARFODBTTWBFTOFPVYBALPKEPHQHBKZDSQKLPJNKYMDVNBCHFLMXGKNTPVCEPWMPQGFJMXLJAHZDIOKIOCI");
    msg.name.assign("IAFIFNWWSAGBKKYGXWRAFABNKASIKXGGBEHZPBCQYSOZXKZWOWIGJTHNSQUDMUNPICZJAVXYRKNLOXCXHPHCFJVNFBZQZGBHNNPLLTJYSUIWTUEZCZTELSDXPRWFCTYIATQOKCIPRBMKIVQUOE");
    msg.nav_status = 214U;
    msg.type_and_cargo = 184U;
    msg.lat = 0.6179199535942319;
    msg.lon = 0.19433422765925257;
    msg.course = 0.018936562689054748;
    msg.speed = 0.7720633741645899;
    msg.dist = 0.7648665622199674;
    msg.a = 0.006092170125985064;
    msg.b = 0.24059863000444193;
    msg.c = 0.8174535778529812;
    msg.d = 0.7785138626329672;
    msg.draught = 0.40476717080578617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.8922326355326546);
    msg.setSource(31978U);
    msg.setSourceEntity(52U);
    msg.setDestination(21991U);
    msg.setDestinationEntity(13U);
    msg.depth_at_loc.assign("MXJNAWDSKWNWE");
    msg.danger.assign("KCXRCZABFLTLDYNKJDIIZBPGTJHBXNIEDUWFUJWHTAEBGMZKMBQHWSGNNZQDQZIDFFUVRCVRWEGIKQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.43802940034991056);
    msg.setSource(49769U);
    msg.setSourceEntity(103U);
    msg.setDestination(26505U);
    msg.setDestinationEntity(112U);
    msg.depth_at_loc.assign("TPBNFDIJHMMPVYMESSKTRSQGJJNSBJKZPAJWYCCXWIJCHLXNOVWGWWZMJIVRVBCUDKQJGPQOFKYOCKTXOUIXAGEZFZPT");
    msg.danger.assign("KSZHMZGXMVAOTDIFMIPHASTQYNMQAWDZGRUIWANEVTMDSEZIVBOFHMIHWQEVCDDXACBVVRQDHCJYEOBERLMBLOCOUJHBXQLOWDUOLUZNZYVORKFXPFCKRXFJJTBXKPFQTPLHDNKSJTTHZGKWJSIYBYRNLWCRJGFFQQGLKIYPLJSNCPTTJGUJKYZAPLCAQIENXCUPXSBRIMWNGSYUSWEUNUEPVMYEGTMHDDZBOXPAWGKUCZFWEKNGAYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.0770537335996192);
    msg.setSource(62995U);
    msg.setSourceEntity(212U);
    msg.setDestination(59714U);
    msg.setDestinationEntity(172U);
    msg.depth_at_loc.assign("UFSZZIKBBOSVBTPSCTEAKILBUJMHGIDPQTEACAXIDDVIHSVVPYPOOYYAUZRLDARPOFVBOMSVQRTHMNQXVCGHTEEACRKWGYHFASYQRWAJUCLPKLOXZJJWBPOMSKHW");
    msg.danger.assign("LGXOXIKGJMDIFHHWRJLVLUTCBYYHETSZASEAQKSSWLKQFFHPVMCCFMCSXGUHXBYUOOAZTBVUJKKWMWZGLQNFBFHKMSTCXNGOIUWOZQIBWWNNMDBZBXQSPOBLPDCNOTVEHAHNPMDDFECXZWSPMEEZMQSTWURUPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.22351516579212893);
    msg.setSource(29486U);
    msg.setSourceEntity(221U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(152U);
    msg.time = 0.9263781232891924;
    msg.x = 0.17332531195585243;
    msg.y = 0.31261386501949373;
    msg.z = 0.7180962157417833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.19983141213729172);
    msg.setSource(54095U);
    msg.setSourceEntity(40U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(165U);
    msg.time = 0.262872929013942;
    msg.x = 0.04646307965591401;
    msg.y = 0.16229160634373607;
    msg.z = 0.018998520596150037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.9060306458184172);
    msg.setSource(12154U);
    msg.setSourceEntity(47U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(40U);
    msg.time = 0.2186133444106816;
    msg.x = 0.36767213304986135;
    msg.y = 0.635939902538894;
    msg.z = 0.5961770823495807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.031386233428160715);
    msg.setSource(44386U);
    msg.setSourceEntity(191U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(220U);
    msg.nbeams = 184U;
    msg.ncells = 113U;
    msg.coord_sys = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.6978504372796145);
    msg.setSource(62750U);
    msg.setSourceEntity(30U);
    msg.setDestination(6555U);
    msg.setDestinationEntity(177U);
    msg.nbeams = 211U;
    msg.ncells = 74U;
    msg.coord_sys = 106U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5558807904447043;
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.640516668681696);
    msg.setSource(14502U);
    msg.setSourceEntity(45U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(137U);
    msg.nbeams = 18U;
    msg.ncells = 106U;
    msg.coord_sys = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.2594322850798342);
    msg.setSource(5420U);
    msg.setSourceEntity(121U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(113U);
    msg.cell_position = 0.580086221684996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.8317888707081077);
    msg.setSource(42561U);
    msg.setSourceEntity(27U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(75U);
    msg.cell_position = 0.7326799369468977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.45950808416199307);
    msg.setSource(17532U);
    msg.setSourceEntity(176U);
    msg.setDestination(28876U);
    msg.setDestinationEntity(62U);
    msg.cell_position = 0.7736292143002447;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.2789261642612688;
    tmp_msg_0.amp = 0.5754974172762015;
    tmp_msg_0.cor = 135U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.95099923713438);
    msg.setSource(34495U);
    msg.setSourceEntity(155U);
    msg.setDestination(14728U);
    msg.setDestinationEntity(134U);
    msg.vel = 0.6870500513318664;
    msg.amp = 0.6225947556697083;
    msg.cor = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.8414306561009236);
    msg.setSource(63243U);
    msg.setSourceEntity(126U);
    msg.setDestination(48437U);
    msg.setDestinationEntity(7U);
    msg.vel = 0.5086436585294379;
    msg.amp = 0.8080904098856723;
    msg.cor = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.1454183398270339);
    msg.setSource(3785U);
    msg.setSourceEntity(47U);
    msg.setDestination(3404U);
    msg.setDestinationEntity(97U);
    msg.vel = 0.27268209006708233;
    msg.amp = 0.7502517591746802;
    msg.cor = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.4547416866035199);
    msg.setSource(61011U);
    msg.setSourceEntity(96U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6609339310260826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.9307170568795989);
    msg.setSource(25070U);
    msg.setSourceEntity(210U);
    msg.setDestination(7984U);
    msg.setDestinationEntity(206U);
    msg.value = 0.708667437041747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.8255527471219369);
    msg.setSource(6326U);
    msg.setSourceEntity(233U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(180U);
    msg.value = 0.22156819380316328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.893246898512872);
    msg.setSource(49434U);
    msg.setSourceEntity(61U);
    msg.setDestination(47016U);
    msg.setDestinationEntity(141U);
    msg.sig_wave_height_hm0 = 0.7538937256071384;
    msg.wave_peak_direction = 0.29148514953963955;
    msg.wave_peak_period = 0.3673273128299116;
    msg.wave_height_wind_hm0 = 0.8659736907383672;
    msg.wave_height_swell_hm0 = 0.4229825265680146;
    msg.wave_peak_period_wind = 0.9690046040654069;
    msg.wave_peak_period_swell = 0.5170282059197027;
    msg.wave_peak_direction_wind = 0.8412150566630152;
    msg.wave_peak_direction_swell = 0.6002864910379122;
    msg.wave_mean_direction = 0.7759141942732533;
    msg.wave_mean_period_tm02 = 0.16565990028228927;
    msg.wave_height_hmax = 0.544208930463604;
    msg.wave_height_crest = 0.41024469415874676;
    msg.wave_height_trough = 0.3455722335039473;
    msg.wave_period_tmax = 0.9485154413716547;
    msg.wave_period_tz = 0.898287532714573;
    msg.significant_wave_height_h1_3 = 0.6968035295638829;
    msg.mean_spreading_angle = 0.9358837324292507;
    msg.first_order_spread = 0.32846650952035705;
    msg.long_crestedness_parameters = 0.1138953358792062;
    msg.heading = 0.09070625266261612;
    msg.pitch = 0.8482089617559941;
    msg.roll = 0.8091385442115246;
    msg.external_heading = 0.5370147950214246;
    msg.stdev_heading = 0.358495041350242;
    msg.stdev_pitch = 0.14448741293352885;
    msg.stdev_roll = 0.9918224166263634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.04107819881401964);
    msg.setSource(4922U);
    msg.setSourceEntity(74U);
    msg.setDestination(19463U);
    msg.setDestinationEntity(232U);
    msg.sig_wave_height_hm0 = 0.2992957211357049;
    msg.wave_peak_direction = 0.8197525390980456;
    msg.wave_peak_period = 0.7144680507399342;
    msg.wave_height_wind_hm0 = 0.5206916327804332;
    msg.wave_height_swell_hm0 = 0.36726097584912654;
    msg.wave_peak_period_wind = 0.7457429333823341;
    msg.wave_peak_period_swell = 0.8988719898099131;
    msg.wave_peak_direction_wind = 0.5175683148765304;
    msg.wave_peak_direction_swell = 0.7540598289224887;
    msg.wave_mean_direction = 0.32655387854788276;
    msg.wave_mean_period_tm02 = 0.5609935368159893;
    msg.wave_height_hmax = 0.8474074686217391;
    msg.wave_height_crest = 0.7695803962005732;
    msg.wave_height_trough = 0.3844028285368558;
    msg.wave_period_tmax = 0.5933529833412711;
    msg.wave_period_tz = 0.17873008568808846;
    msg.significant_wave_height_h1_3 = 0.06808325896438405;
    msg.mean_spreading_angle = 0.22163665655597076;
    msg.first_order_spread = 0.28452389326208194;
    msg.long_crestedness_parameters = 0.07057486045697337;
    msg.heading = 0.5556803315149094;
    msg.pitch = 0.6464844571096097;
    msg.roll = 0.9002029548215694;
    msg.external_heading = 0.9420402930645707;
    msg.stdev_heading = 0.014434025781100646;
    msg.stdev_pitch = 0.5768043215556469;
    msg.stdev_roll = 0.5888023347295507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.42888353820705194);
    msg.setSource(20825U);
    msg.setSourceEntity(87U);
    msg.setDestination(47592U);
    msg.setDestinationEntity(14U);
    msg.sig_wave_height_hm0 = 0.9429850190808654;
    msg.wave_peak_direction = 0.3534048547846229;
    msg.wave_peak_period = 0.7420668278326555;
    msg.wave_height_wind_hm0 = 0.5037940422217266;
    msg.wave_height_swell_hm0 = 0.13130119800404716;
    msg.wave_peak_period_wind = 0.7956626343210059;
    msg.wave_peak_period_swell = 0.7373034687288649;
    msg.wave_peak_direction_wind = 0.861606161414975;
    msg.wave_peak_direction_swell = 0.27430775967050525;
    msg.wave_mean_direction = 0.049515730829989835;
    msg.wave_mean_period_tm02 = 0.06966831478692537;
    msg.wave_height_hmax = 0.4302511646368655;
    msg.wave_height_crest = 0.655642205457152;
    msg.wave_height_trough = 0.37580726703746525;
    msg.wave_period_tmax = 0.9658772698715384;
    msg.wave_period_tz = 0.015349846579482018;
    msg.significant_wave_height_h1_3 = 0.730676909321441;
    msg.mean_spreading_angle = 0.6045247719569334;
    msg.first_order_spread = 0.7893903051127361;
    msg.long_crestedness_parameters = 0.007713829268022554;
    msg.heading = 0.7910987580621841;
    msg.pitch = 0.04906358437274416;
    msg.roll = 0.3546411966844618;
    msg.external_heading = 0.012174468567289654;
    msg.stdev_heading = 0.30529392503677766;
    msg.stdev_pitch = 0.021635524699282982;
    msg.stdev_roll = 0.5189523240661141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.677490784057124);
    msg.setSource(55407U);
    msg.setSourceEntity(156U);
    msg.setDestination(58648U);
    msg.setDestinationEntity(19U);
    msg.name.assign("IQBAFWTFZRAZEUCFRVYMEFCDWVCUODOZVULRKTCHXQXODIYWXHIULM");
    msg.value = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.2613330303485921);
    msg.setSource(52003U);
    msg.setSourceEntity(24U);
    msg.setDestination(11671U);
    msg.setDestinationEntity(142U);
    msg.name.assign("FRORPZMYHWTRLGHAOICYSBQPDAXJAXOFPPEENESWCDSMMYBGGXTNGKVESNHWMGTQTUUYVRIOAEBBTUZZXMVSVLTBLPKITDMTBLPZFZCCJJSHDXMZCIOIKEBLORBTIGRYNAKKZYUYADKJFFYROMIUWDHRLCQHEGLWUIUQPUXHHQFMATBUWLCGKUWHXWEJVDJQNYCQFKSNROPPDZNNVLOADQFWOISQCSNGJ");
    msg.value = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.288947928833735);
    msg.setSource(33360U);
    msg.setSourceEntity(143U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(127U);
    msg.name.assign("JBSAUPNYVUDZNCRRECIANZNVCGFZHGINWKUKDWSVDELETTYHALKLPTBDEPYIMMTVIAWEBNTMEXSPIRCHCBAZQAFGBJUCUVMZPLSN");
    msg.value = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.5940281185001535);
    msg.setSource(25422U);
    msg.setSourceEntity(27U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(37U);
    msg.name.assign("SGBNJEOXXSIDUXZCTVVHJKUSCXVOJFSYUDSGRTIRSFGBZRIUPFJHUAAFSPAHBWPCYAELHEMLTAPQZARBNHNFOJTWJOAOEKYKWBXEDZCRZCQNSQKDMQMCYCUQNVUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.9116242468588377);
    msg.setSource(64105U);
    msg.setSourceEntity(2U);
    msg.setDestination(45755U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XYDMSONCNWNUSAMVRMFVWCAJZZOCNJAJSXTLYZJIKGTDWPXKFDHWMKALKXLVCYIQSBZQGPYMPSQRESRBECIUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.21469127741604954);
    msg.setSource(24250U);
    msg.setSourceEntity(71U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(231U);
    msg.name.assign("YYEEUVVTHKVQZNQYVBAFVYHWKPZFULBDDRJMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7208539377304625);
    msg.setSource(2019U);
    msg.setSourceEntity(132U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(245U);
    msg.name.assign("YIQUOGRBCHOVZPTYJBIAHYEEWHFSOTIQAJVTHCJQLUPVYANOCQJMJSXFESTDNMWMBFBUAUUIAVRZMFHCFENGIGMJCJRPWCWDEXHDGUXFVSVNOVBQITZZEKTUBGLQ");
    msg.value = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7526231776795688);
    msg.setSource(62725U);
    msg.setSourceEntity(220U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(7U);
    msg.name.assign("CFHBPJWTXOOWGXMFKILINVDDBFTQBPWBTQ");
    msg.value = 187U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.3673959621669354);
    msg.setSource(43076U);
    msg.setSourceEntity(50U);
    msg.setDestination(35373U);
    msg.setDestinationEntity(35U);
    msg.name.assign("CDYBTVENKAAJAWAUTODPOZKLUPVGWRBPOQNDCZFZJNVIVHMYJARVNYJVZEOHHXVMBFHJAIXSUGREBYMLQSTW");
    msg.value = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.752164162460805);
    msg.setSource(52495U);
    msg.setSourceEntity(187U);
    msg.setDestination(33451U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5631653182292609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.986838879385061);
    msg.setSource(43638U);
    msg.setSourceEntity(27U);
    msg.setDestination(19585U);
    msg.setDestinationEntity(64U);
    msg.value = 0.6768732620172183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.20569337160487355);
    msg.setSource(56156U);
    msg.setSourceEntity(248U);
    msg.setDestination(27963U);
    msg.setDestinationEntity(130U);
    msg.value = 0.6717334689677699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.32507763526695066);
    msg.setSource(17462U);
    msg.setSourceEntity(130U);
    msg.setDestination(54193U);
    msg.setDestinationEntity(220U);
    msg.value = 0.893185281423134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9951227778514712);
    msg.setSource(21497U);
    msg.setSourceEntity(60U);
    msg.setDestination(19651U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5987650475287661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.23992948163110972);
    msg.setSource(7073U);
    msg.setSourceEntity(191U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9806742308732611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7041976598250715);
    msg.setSource(33181U);
    msg.setSourceEntity(74U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(190U);
    msg.value = 0.18462253562233633;

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
    msg.setTimeStamp(0.38486491926178834);
    msg.setSource(164U);
    msg.setSourceEntity(203U);
    msg.setDestination(41219U);
    msg.setDestinationEntity(87U);
    msg.value = 0.8981214335018816;

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
    msg.setTimeStamp(0.8532590889900152);
    msg.setSource(48801U);
    msg.setSourceEntity(157U);
    msg.setDestination(32019U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8272053638274444;

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
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.16584238178109123);
    msg.setSource(51568U);
    msg.setSourceEntity(3U);
    msg.setDestination(58250U);
    msg.setDestinationEntity(128U);
    msg.restriction = 71U;
    msg.reason.assign("BJHKOVQQICGCNXMNSSZGNUBAACZAXPYDGAFJOBDYFIYGWDTPTCQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.26133973659020593);
    msg.setSource(41926U);
    msg.setSourceEntity(195U);
    msg.setDestination(57681U);
    msg.setDestinationEntity(29U);
    msg.restriction = 95U;
    msg.reason.assign("CXZYWYAMPCAOPNOLMELXTBXNOVKAXSAKBEFZENDTITUTKHCMHGNMZYQYLIGRZEJLEZULJRPBMNTACLPUIWHNZDSYIBQAVDSJHSXOAQRGNLRKHBWNURZZDEWTOVOPFWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.1890698250314271);
    msg.setSource(468U);
    msg.setSourceEntity(134U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(206U);
    msg.restriction = 166U;
    msg.reason.assign("DHYRCGBBOPASXQSBFDXXZXCPMJEUKHWAOOWUILYALPTILRDQOUYPGMDRYGQJUVAFTOESEUNLFGZYBHCNEGUOIJFNXVQYMTCTVEESXMINLWJMQQITHJVHGQSDTBZKKUFUVNFFFDJCPCRDRWHNQTIAVPRFRJGDJLXCMNSHPZZFJLSIUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.049132887318389495);
    msg.setSource(32076U);
    msg.setSourceEntity(45U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(208U);
    msg.op = 159U;
    msg.request_id = 2941780457U;
    msg.entity_name.assign("HJWRGZZFLLCGRMECZOEWUXXBIOFAADNZDNRMHAGGZBRVYRMFCCKXTSVXBBDALHLNCGORQDQPMEIZFWVDROUYMUHZFWLSDNRBNMYOTQJBOGMKYTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.915465732142926);
    msg.setSource(55226U);
    msg.setSourceEntity(54U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(153U);
    msg.op = 33U;
    msg.request_id = 3627275938U;
    msg.entity_name.assign("QJJXNHOUXTRBSXOTEEVQZTFFFERRERCRZZNTJCQIAXYVPIGDDOQUNUQOTRWZLZUVWXOQXFYZUAIKAPLUNLGLKYJLERPGQDLUFYYNLILSCPPQKMYPDCVGJBSUSGXJSMCJHRIWVTDWKNHASBOEAABHWJDFVHXSDG");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MQZLTVCRAINRIRLINSXJPQCAMBMFOBAXWUBXKSENFDBSOEYYWEGZELBIMDJJJRDNLDWOHUHZTPLCYFJKRALWCNLGMBIRQETQDGPEPPGHFFAVWJNHKNWJDXOVDWIULKRZHFQZFCVSJUCEYYVYQBHZNRRLTKZATFGEXIFCYZVXWUKBQUYVOMXPQCXENSIHCOHKVMXGGOZPAECKMXZISUAKGWJWUQTPOSSAM");
    tmp_msg_0.type = 41U;
    tmp_msg_0.default_value.assign("JCLRCKJEHEQIFJMWOXPCQKBZFHYWSGQBEDAUJSUMYKLIFEOQKNWGSZFBZDXBYPEETZGSDLTCXTSKUVNH");
    tmp_msg_0.units.assign("YXHACKMSGKRPILYDVHCPNOEVSFLGMCVBWNZPGCREADSMPWXKWFEIWHNJDCQARRZSPYRKECQUUBFKFEXJZYBXDOQEBDTLXAIRBHITSXFKGVNVUJRAGPXMTNSPBIWUQPEIFNNJZVAEGDJAAHJQNCFCGMVESOVZRBBIAJFTFIZYVTPQQLTTHYPUWHQSTYKDGTFUGRLBMOQXDOANJMKOLHZOYYOOCUMUSUZ");
    tmp_msg_0.description.assign("TNLKOJWNCYEOIUUGJUPTSVLRMAHYNNMZSRBFTFCQSZLWBXQJZQGKCTQLVETLWVFCSZRUXOUHYHFMXLBPBDQBYXOXSEAKWIIKHQZFAQKBKRMFJBKGLKNDYXOGEZZCSWODJQGWSMAHHBNGFPMEYYITRVHNFUUPEOQRLEZCAPAEXCDJIVVIRM");
    tmp_msg_0.values_list.assign("PNBIVSLWRSVGUGAUHFJVBCFSNJANHTTIMQGDMRCNKKZFDTWPCFWKWCN");
    tmp_msg_0.min_value = 0.6381908488999979;
    tmp_msg_0.max_value = 0.4184764242492891;
    tmp_msg_0.list_min_size = 147U;
    tmp_msg_0.list_max_size = 97U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("QNOOLDKVHTYZJFIADVXZGTELICDBYMFDZIYRVIUTFIMANFVWDTVRZDRAEHCIAWLNYNMTYJUOGFSRPCSZHXMTWKONRXXRQWJNKHCVHSIGWUOSZBDILQXFAWUFEUUORPVUNYZBQNLCYZGQGDSXHQJ");
    tmp_tmp_msg_0_0.value.assign("IKGWBPPVIFVAINXXSHTEJOWVQAJQDIWUZDOYIGMXVCUNLQQTPSFOUYXFZ");
    tmp_tmp_msg_0_0.values_list.assign("DWJUAXLAEISGBQFXZXLIUGHXSKCQYVVALRUJWJSVKEDPILSXI");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 78U;
    tmp_msg_0.scope = 146U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.7586599611623451);
    msg.setSource(33423U);
    msg.setSourceEntity(141U);
    msg.setDestination(9053U);
    msg.setDestinationEntity(70U);
    msg.op = 66U;
    msg.request_id = 3578987700U;
    msg.entity_name.assign("ZSGUQEBHVFJLBWFEVBZNXSBWXSCMOFTRFIRXDUVHHEADJYZGQIDCRKBFPPEJONARJCMRYJIQGVNZMATLYOZUGQOXPBMEXKDYINFXPGLBFIAWVVLGOEDENHGAQLUHTKVELPYHZUDYSRWCCBKEOMNVXVXLTUUWPUMLFWIKDRZDNWHXGMKQHTUNBOKTBXPRJISMWSCOZSROMPJYPAAYLNCPFTETFAMDSKIQCKNVGGASCYJAHIKRQQZJJWLYI");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IHPBUWKDMYSQSYLFLOVHHVUPSQTIIVMPCDCAPNZBFDJJXSURNVCBOEXIKVHOLQSHKPOLYQFJFGXEKEQRNOVHOYBKNJJZFIULUNGQEIAMGTQGARRGXPGWNJTARQUBWZHWNMSMUHKJAYWYEBNVIWIBDOZTLKFPORXVHCSPZYEKDTRELP");
    tmp_msg_0.type = 149U;
    tmp_msg_0.default_value.assign("QBGAOOKHEAUUIDSDGTXJWWOYTVYIOIIDFMUJCBUSMZSGOPFYPZHJUTKNGCXMTRVCDAKZRDGNFHNRWHEERAJTJOCPBWEQGGPXQKLLKSUBNYCXXOOMRLXAKLLEVLZINDAZEBIQDJHJCRBWIGUWNPYRQQTPMMXWRVVYZTTBNZZKBKVDWP");
    tmp_msg_0.units.assign("PPWXZVIFQXGJCS");
    tmp_msg_0.description.assign("XHRSVRNMBFAEYBGSFJZCOYMRNKUYZTKMGSGOVNIYFIEKKPXVWWCSESKGFQTTJIIBRIOJTDMLGYRUPKNWTNKCJSMBUNYULFEHOVPOAZQUJLDMTZJLOEDDZLBWA");
    tmp_msg_0.values_list.assign("IOBKKGZEBYCZDKQGJVWKYUAELYDCLYJZDNBGZYFNMMRSWPVUWLVZUAFBNCYFGWEJFAXXUCXUYIESAQMPIMWFNIWKHJLWNAFIEGTOUGOMYRQTIAXMHOQODODRHKGLFDRXVBGVNUTFQAVPZPRPEJUHUDKSNNZJOZRBXIKBMBYLRVZEBKGSMCMSLTIVJOPTBULSMQWXFRQCWQTIDAXTDHCCHEHHWSVSJTKZVLHONXIPLTYSPCAPSGX");
    tmp_msg_0.min_value = 0.989594621640811;
    tmp_msg_0.max_value = 0.6783631181724914;
    tmp_msg_0.list_min_size = 64U;
    tmp_msg_0.list_max_size = 81U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("IELIPAMKYJHVYLFWUTRRVZPQPOXMTFPZOCFJSGQKOAGTIFMFXYNSXRWNUGTLXBREBICSDYCXJDYWTKCJJYUSKHSIFWMKXKDXVJDLGDRXYWANKBWGNWPLJCQZRSRLTUTAICIBFUVVTEDWQZMPQIVUVOQHYODCFBQOJNJNHUMDQBCKYZPVVHLEKRISENXUZANFEUOCRHWBP");
    tmp_tmp_msg_0_0.value.assign("UPSSTFAEWCHJDQVBZICPZGZDRQDGKALDNGTEFOJYDTHLPHXLNCSCMWKRMRPQBTQRQSXLGMRWWLCZDIVNVHRSBEJUAXOYIQVRKFEMFUQWIFOHBTGNMWAPJHVXI");
    tmp_tmp_msg_0_0.values_list.assign("MMYZQINJPOZKILUQHGJSHNCPOQDYMBAZGJHXMDLXRUPYZMROVBAXNOIRTDNHXJTUOTBUU");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 68U;
    tmp_msg_0.scope = 74U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.7840912216866703);
    msg.setSource(63562U);
    msg.setSourceEntity(166U);
    msg.setDestination(29072U);
    msg.setDestinationEntity(75U);
    msg.name.assign("NAUACLTSZFPYZHIYEMRRYIPNDVZBPUQFXGBTBQIEWOTSFBBEVFWSKYDQARWLHITVHUWBJUVFKPJZJHVJCHKJECXUESDULUKVWVSGCTPRNDKQDBNHIXIZSMWMWCEZYWOLWQMFHRBPG");
    msg.type = 248U;
    msg.default_value.assign("FVQRGJFZPWCKYGKMINLFARBUAWMGVVRANHYSGOKNEOQEJSLAOJTFCXKTFXILLYXWWIYOJXJJTHVGNZKULIBIVBRRAKFPUHRUVHBPIRMEGUBPTCQCLZZFNDEDIPTXYKAHGXEMVZXGWCMXZUYIIVNDNTSTHYPDDECWCDQSLP");
    msg.units.assign("AASTFIWVAQNDSZRDXRQENAUVEUWOCCDUSLWAUTYGMRGHTQDIVTBWLMVFUSNMRJZCOQUKJMTBHRCQAZBLGCFGBYEBRKZXOCCOGNDWYZAEJQKTGFFQLKYOMXFJLZHPHJGFEDOXJWXENMIGYASPIOYEQOZPBBYUZCNVTPPXDHNYLSDBWGIEBKPP");
    msg.description.assign("QGDPHDQTHBKKRESSENSJORZZZLLIKBEKLVKQIPEQQNIURCDXFCHJCCXWQBFZYROQOAXAXCYVUPTGUVLTAFJLMGVADWODHTYCPINBLKHMTLEMWQSOA");
    msg.values_list.assign("JAVJQYISKUPPYD");
    msg.min_value = 0.8095254706779101;
    msg.max_value = 0.5202939919738372;
    msg.list_min_size = 243U;
    msg.list_max_size = 64U;
    msg.visibility = 156U;
    msg.scope = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.35667834460780734);
    msg.setSource(6928U);
    msg.setSourceEntity(67U);
    msg.setDestination(11986U);
    msg.setDestinationEntity(28U);
    msg.name.assign("FADTCMTEKLGULBLWIEWALQXZPGEHDRSYAPVBKOGXOXVYPYHJUKBRHXWKBED");
    msg.type = 163U;
    msg.default_value.assign("JDXOABQODDVRNYJGZJZHSTRGWPLFBUESBSEMSPOYMUMTLWRQXSNMWMQXMMQDIBIJQFEQAYKJDEZOSCJAZNGUNIGJUOVIEEHVPLLXGRHRSKNCEPSTHUYUAOZXZDLFWEKRZGCTYWMIKICHYBLRKUJMCNCFKXLQFV");
    msg.units.assign("RWOHDFHNKCQLYSVYNGHEZHVRDYYNEULWDXRGTWLGBDZIVXQREMTEMSUPYIWFWVECLAOCAUKZKRKEZLVTFBPCLHLTJGPAGTYOTCICBDISFPVROUCAXOUWDWCBCOJHHQRQNVXHIGITGWXQAXVDXITYAQMONJZEYMIKYNONMNYZOJETUVNALSDSQJUGJPHRBUJMIJTZS");
    msg.description.assign("QSMIKUMWAICAATJAWOZMXTFLKUHRBVGGJEIMNSCGAFVHRVZULXCNTOWOHGBBYWYHDTJKDJCAIBOREBADNYTFHUFQLICZQLUGJBQRDQYFRWGHUIPLHJJPENTIPXI");
    msg.values_list.assign("USZWHPKNIFJBWWVWBHTNVAGIMGBSBZFZKXDRYOSQIULFLMTAZJNQMFAEJFTGUOCMPGPKSRLGVBDNFFLHWEFLTGUPCWHTOWEKBDFNJARHLZRGRTXNQXSNLICYXNUPNQMPXUXIZKJZMIMHDYJNBHDAQXV");
    msg.min_value = 0.19389572007377398;
    msg.max_value = 0.5769211086322823;
    msg.list_min_size = 181U;
    msg.list_max_size = 58U;
    msg.visibility = 109U;
    msg.scope = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.31458854250618895);
    msg.setSource(65273U);
    msg.setSourceEntity(146U);
    msg.setDestination(57496U);
    msg.setDestinationEntity(184U);
    msg.name.assign("GGCTXYIANTPBTHKJYHZUNIOILWEMDYGLUUCEWRUUJQXVRXAMEXWPKWHXCTPMCYOUKFISXTQWYOTMBFCVRFALAIBKVPQVQKLAQVXPASIPHOBZZBCTYSBLJCDIUKAEAUZFSXHLLYRPFLGFVNVRUMYRDMQZYKOTRROZHNOKNZOBDGRDRIJSKQHHJKDEHGPBFUCI");
    msg.type = 156U;
    msg.default_value.assign("GRITUFUHPOPZXFUZAHWJDOOFQVRLYDXDCKJKGSGGDZMJZEDOIYKCKRBVILEVCSGGXKONVLTNSPZCZBDWNUMKWBHZVIYFYQRNHFZAAMSSOYUCHYTWECBBMFDKYLFRLVZLTYLJWAEMANXNCTVRRFOQXQEAIJPWBBLGKEM");
    msg.units.assign("OGSTKSGJPWKDXEUNJIJCFUDOQQIINMMYMEVIYXTSJDTFHZCHFJRUQXDOHNSYL");
    msg.description.assign("GUMBSUPZUNZQMLRQCLFWEMOKPAEMMXAHTLUSZJUGODDPWAFSHRIGFPEZJSYPDKVKPRVTNEYHTBJOSVETFTFFFRHNQTJULYCEBNNWHJPWDURSETEVBOJYOKHUASBLVQNNMOBSGRAGKAWJTNVMDNXGTXDOQWIVLCCIJFCXZYZSIIONTBHYCSIJICLYGFBEEOOIDAGZCBUAZRUKHPHQZQCXMPMRXIQAIGJKVXFAYLRX");
    msg.values_list.assign("XYWCMQNARETTDLXBBVBIIYYRSVYEPBKMVLHZZPLTFEEQINHJTDZRXEORXIMPFEHLVLHXCCMAGHHIDUMUMUAKEOTZCDWIZJFFPGZ");
    msg.min_value = 0.11921577322943244;
    msg.max_value = 0.17850777018068786;
    msg.list_min_size = 80U;
    msg.list_max_size = 91U;
    msg.visibility = 48U;
    msg.scope = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.46468639459400074);
    msg.setSource(19049U);
    msg.setSourceEntity(102U);
    msg.setDestination(49518U);
    msg.setDestinationEntity(166U);
    msg.param.assign("GEMRRZJBECEDYIXSGAXSHFOJHSNYQTAZKAVISRKOWELXWEAYYPVLATLQCFNFOTHHMFIGBFUDZYGRPTFRCZMDHCYOXEIW");
    msg.value.assign("GXQKERAXOTOHVYHYRHJHQYNHFEHIZOWZDUPIFWNVRDQEYLQUJCJFCXNVCGDPIXYAUYZZSBYAICJDNBLBFWUXOCGDLXWPQQWULXLDWUPMCVQTXETDELKSKNQRPBJOLAMSWGRIPWCTKAKZVSVEIW");
    msg.values_list.assign("AYXKMIJEBOKVHGDNWQDQRSUHEYAOPMJEPYHOCJGLUPCTGOQBXWJFQJEZWNLKAMLMCUVKBPTBGYMMCPTFAJHICLXTZCKIZIDZYUUFXBOARRAWGTPDOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.7233807290447034);
    msg.setSource(57758U);
    msg.setSourceEntity(11U);
    msg.setDestination(5984U);
    msg.setDestinationEntity(88U);
    msg.param.assign("YJZOTCJDITRCFQRKBTTIJUHDVROHWRGKYKJVAAGBYWHGZIXDUXAVCAFVEXEPKGDOXQGUXGCJLXUISQF");
    msg.value.assign("RRZPANVZCWHWEJBCABMNASPKJAHUIMQMYTIDEUCJLIVYFOZMVNTWJOOUKQUDCPSVFOYGKLCJRUFMEXLTZAYNDBRQCSWFKRISJHAENBQUWIQTYATOYAUUSKZGZXLXVTCCXHYXKOMWFPPGVHGHOWMQERDCIGIFCVXXZOFRNMLNJWPUSTROLYYJGHGAIVQBKDLXELJWYQSPXQBFMTBIKWKHFHJSDBXNPNVSBEZHURTVIGLEFZPKEQD");
    msg.values_list.assign("SDBFLOPSCTOXOXXHDCWWUYIORBJSLCBKUKGIEWPPUKQRXKAFZKZDYEAYSGXRDHGUPQCLKPYCZAMHPVZKJMQVZFHOIFUDBWIHECHMOZTEVYALIDGSRGJXMATQVXWFCYRKEVGXWQNMRKUOWXNYZIEDAUEGHZONVTJZWNFRIDGGPEVHNFQCVUFUSCAMBTJYJWBOLKMBZQJXLPRCFAHNSSFNUAIJQDEHYEORLTMTSQWLJYBRATQMSNTMBNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.8574440530542021);
    msg.setSource(10087U);
    msg.setSourceEntity(7U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(188U);
    msg.param.assign("KKIFLMKHHJZHBVNTADIEYJBDAOQVZWBKFAQKQZRPRXXSUREJDIYRKXCYEZEOENKVGMZAXNTWMWWAOQCQTLDFALBZXYNCLMSBRSNNLBCVVOFZIIWTUOGCBHDLRJQCTTYIHGHAZALYVUUEVSTWECPUGZPXBINASKSUSTPPMGWIPMQSLFHLFSCPUJGQVI");
    msg.value.assign("HCMKDRKVBSTWIQOYDYVWYVVRFGNRERSAHRODRZGVTRMPNUGCJKQXTBNJRPJVXHYLLJYQZBXASNELLNGAULQWDPIUJEOFVTRWNSVRFOWYLZZOEFDVUPDJGUOCNMKXZGMCLZBQWEBIIABCXLTTKFQGAYKCNDFCZHOZM");
    msg.values_list.assign("QIUHIUZMVFGPJVXKWXHYPXDYFTAQWRHBNIEFUGVWXLFYYLSUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.6485265725630021);
    msg.setSource(35258U);
    msg.setSourceEntity(125U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(47U);
    msg.op = 234U;
    msg.version.assign("IXBOYDEJBCCVLAQPIZQDAALTFTKXFURKJQWFFHJDBIPKMTETDMVPXXSSZXQYXWHOSADUHUBIDNTCEWKHPDRONPUNJRZJMSIBHDLORHZNXWNSCLOLQDQPQSSEVUZVBUNBZANGBMFITFYKCJKHXCRVPGUKUDYQREVTJGGEEAZWWROTYRUNHYTAICPGMUVFKZCQWELMJVNYHSOMGBX");
    msg.description.assign("ZHIYXFZTDGLBJFHKSACGDIKJNZKAXHEUPKBONDQLYILSAZWQAIQHYKXJITNRJEPYBLNFEMZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.43081822751009524);
    msg.setSource(42736U);
    msg.setSourceEntity(181U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(164U);
    msg.op = 4U;
    msg.version.assign("JAQLBIHUYYPOIASGYKTUXFFBACAUFTVNBHXHZJNDCKMSQZMBNBLNRDVKFNVEUEIXHMWJTSZAYORWWJMTYHPGNCXFGGCYLXDJCMRYUCKGQDBZZMRQYOQTSBLISMGFFJROZUARMPPWPTUHEJOEGFPSILVBTKEGDE");
    msg.description.assign("CFREQLYUSZRSYYZVCEGUQXVNLFYNOLNLYHEGSZXCKVPYMARTDRMPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.9772931895775688);
    msg.setSource(12910U);
    msg.setSourceEntity(189U);
    msg.setDestination(42766U);
    msg.setDestinationEntity(244U);
    msg.op = 230U;
    msg.version.assign("AVJXPXCKQEMBKBIQZQXSDSDDGIMJSOTZCWILNTKKGZCBWZNJITRTEUSPQUGYMGWHPUWDJOFVLKYKHNABOYQBVXHLEJNOQDPCLUOEYUEFIRAVSSZFYQHTARXHZRKSNEJVVMHPVATQXBEDIOLOZEGPOSKDIAXTVYCURYZPWIQCPJWHHFOBKRNZDAGNUJAAUKXMMCLLMCRXRGFWRWPJMNTVNFHDRLIBF");
    msg.description.assign("SFKSQXRBMWQPFUVCWCAAJZIQJXKMCOZUGWPGNEAQRGFYCOUCEITKIPDFRXPBNIXOVRZXVNXVRLTQSYVVUOSWJXCFIMRESQLQYWMOZIYENIKDKHPMFAHOHBTVIYBDGHVDKBZWLTRGMZZPZDPDBMSDNSOJFRESGPSCGALNUKBDTGSEFWYINCMLEWOBTEHVMQOHYTRJJHEFLLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.07491306087596217);
    msg.setSource(20910U);
    msg.setSourceEntity(25U);
    msg.setDestination(18871U);
    msg.setDestinationEntity(27U);
    msg.value = 0.6742161668012208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.8391853592156658);
    msg.setSource(3465U);
    msg.setSourceEntity(95U);
    msg.setDestination(50360U);
    msg.setDestinationEntity(165U);
    msg.value = 0.9606590799722615;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.7615799343943851);
    msg.setSource(52770U);
    msg.setSourceEntity(211U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(224U);
    msg.value = 0.029649105921276564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
